#include "NNfunction_ss_cRcR.h"
#include <cmath>

double NNfunction_ss_cRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9275)/15.0836;
   input1 = (in1 - 21.3983)/953.091;
   input2 = (in2 - 474.739)/566.429;
   input3 = (in3 - 79.0901)/712.549;
   input4 = (in4 - 840.672)/875.772;
   input5 = (in5 - 705.42)/841.431;
   input6 = (in6 - 716.405)/853.158;
   input7 = (in7 - 716.908)/837.833;
   input8 = (in8 - 693.127)/834.96;
   input9 = (in9 - 685.415)/821.388;
   input10 = (in10 - 740.234)/850.834;
   input11 = (in11 - 618.387)/712.5;
   input12 = (in12 - 615.93)/712.43;
   input13 = (in13 - 460.138)/434.963;
   input14 = (in14 - 639.36)/709.942;
   input15 = (in15 - 363.472)/248.904;
   input16 = (in16 - 462.729)/489.511;
   input17 = (in17 - 640.281)/736.36;
   input18 = (in18 - 630.052)/731.603;
   input19 = (in19 - 664.799)/735.933;
   input20 = (in20 - -86.0858)/433.242;
   input21 = (in21 - -106.269)/981.778;
   input22 = (in22 - 7.60935)/1012.64;
   input23 = (in23 - -100.938)/535.228;
   switch(index) {
     case 0:
         return neuron0x2045080();
     default:
         return 0.;
   }
}

double NNfunction_ss_cRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.9275)/15.0836;
   input1 = (input[1] - 21.3983)/953.091;
   input2 = (input[2] - 474.739)/566.429;
   input3 = (input[3] - 79.0901)/712.549;
   input4 = (input[4] - 840.672)/875.772;
   input5 = (input[5] - 705.42)/841.431;
   input6 = (input[6] - 716.405)/853.158;
   input7 = (input[7] - 716.908)/837.833;
   input8 = (input[8] - 693.127)/834.96;
   input9 = (input[9] - 685.415)/821.388;
   input10 = (input[10] - 740.234)/850.834;
   input11 = (input[11] - 618.387)/712.5;
   input12 = (input[12] - 615.93)/712.43;
   input13 = (input[13] - 460.138)/434.963;
   input14 = (input[14] - 639.36)/709.942;
   input15 = (input[15] - 363.472)/248.904;
   input16 = (input[16] - 462.729)/489.511;
   input17 = (input[17] - 640.281)/736.36;
   input18 = (input[18] - 630.052)/731.603;
   input19 = (input[19] - 664.799)/735.933;
   input20 = (input[20] - -86.0858)/433.242;
   input21 = (input[21] - -106.269)/981.778;
   input22 = (input[22] - 7.60935)/1012.64;
   input23 = (input[23] - -100.938)/535.228;
   switch(index) {
     case 0:
         return neuron0x2045080();
     default:
         return 0.;
   }
}

double NNfunction_ss_cRcR::neuron0x2011170() {
   return input0;
}

double NNfunction_ss_cRcR::neuron0x20114b0() {
   return input1;
}

double NNfunction_ss_cRcR::neuron0x20117f0() {
   return input2;
}

double NNfunction_ss_cRcR::neuron0x2011b30() {
   return input3;
}

double NNfunction_ss_cRcR::neuron0x2011e70() {
   return input4;
}

double NNfunction_ss_cRcR::neuron0x20121b0() {
   return input5;
}

double NNfunction_ss_cRcR::neuron0x20124f0() {
   return input6;
}

double NNfunction_ss_cRcR::neuron0x2012830() {
   return input7;
}

double NNfunction_ss_cRcR::neuron0x2012b70() {
   return input8;
}

double NNfunction_ss_cRcR::neuron0x2012eb0() {
   return input9;
}

double NNfunction_ss_cRcR::neuron0x20131f0() {
   return input10;
}

double NNfunction_ss_cRcR::neuron0x2013530() {
   return input11;
}

double NNfunction_ss_cRcR::neuron0x2013870() {
   return input12;
}

double NNfunction_ss_cRcR::neuron0x2013bb0() {
   return input13;
}

double NNfunction_ss_cRcR::neuron0x2013ef0() {
   return input14;
}

double NNfunction_ss_cRcR::neuron0x2014230() {
   return input15;
}

double NNfunction_ss_cRcR::neuron0x2014570() {
   return input16;
}

double NNfunction_ss_cRcR::neuron0x2014ad0() {
   return input17;
}

double NNfunction_ss_cRcR::neuron0x2014cf0() {
   return input18;
}

double NNfunction_ss_cRcR::neuron0x2015030() {
   return input19;
}

double NNfunction_ss_cRcR::neuron0x2015370() {
   return input20;
}

double NNfunction_ss_cRcR::neuron0x20156b0() {
   return input21;
}

double NNfunction_ss_cRcR::neuron0x20159f0() {
   return input22;
}

double NNfunction_ss_cRcR::neuron0x2015d30() {
   return input23;
}

double NNfunction_ss_cRcR::input0x20161a0() {
   double input = -1.45368;
   input += synapse0x2011030();
   input += synapse0x2011070();
   input += synapse0x2016450();
   input += synapse0x2016490();
   input += synapse0x20164d0();
   input += synapse0x2016510();
   input += synapse0x2016550();
   input += synapse0x2016590();
   input += synapse0x20165d0();
   input += synapse0x2016610();
   input += synapse0x2016650();
   input += synapse0x2016690();
   input += synapse0x20166d0();
   input += synapse0x2016710();
   input += synapse0x2016750();
   input += synapse0x2016790();
   input += synapse0x2010fa0();
   input += synapse0x2010fe0();
   input += synapse0x1dcc360();
   input += synapse0x1dcc3a0();
   input += synapse0x20169f0();
   input += synapse0x2016a30();
   input += synapse0x2016a70();
   input += synapse0x2016ab0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20161a0() {
   double input = input0x20161a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2016af0() {
   double input = 0.252369;
   input += synapse0x2016e30();
   input += synapse0x2016e70();
   input += synapse0x2016eb0();
   input += synapse0x2016ef0();
   input += synapse0x2016f30();
   input += synapse0x2016f70();
   input += synapse0x2016fb0();
   input += synapse0x2016ff0();
   input += synapse0x2017030();
   input += synapse0x20168e0();
   input += synapse0x2016920();
   input += synapse0x2016960();
   input += synapse0x20169a0();
   input += synapse0x2017280();
   input += synapse0x20172c0();
   input += synapse0x2017300();
   input += synapse0x2016c80();
   input += synapse0x2016cc0();
   input += synapse0x2017450();
   input += synapse0x2017490();
   input += synapse0x20174d0();
   input += synapse0x2017510();
   input += synapse0x2017550();
   input += synapse0x2017590();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2016af0() {
   double input = input0x2016af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20175d0() {
   double input = 2.87041;
   input += synapse0x2017910();
   input += synapse0x2017950();
   input += synapse0x2017990();
   input += synapse0x20179d0();
   input += synapse0x2017a10();
   input += synapse0x2017a50();
   input += synapse0x2017a90();
   input += synapse0x2017ad0();
   input += synapse0x2017b10();
   input += synapse0x2017b50();
   input += synapse0x2017b90();
   input += synapse0x2017bd0();
   input += synapse0x2017c10();
   input += synapse0x2017c50();
   input += synapse0x2017c90();
   input += synapse0x2017cd0();
   input += synapse0x2017760();
   input += synapse0x20177a0();
   input += synapse0x1dcca00();
   input += synapse0x1dda2d0();
   input += synapse0x1dda310();
   input += synapse0x2000200();
   input += synapse0x2000240();
   input += synapse0x2000280();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20175d0() {
   double input = input0x20175d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2017070() {
   double input = -0.475585;
   input += synapse0x1ddab50();
   input += synapse0x2017200();
   input += synapse0x2017240();
   input += synapse0x2017e20();
   input += synapse0x2017e60();
   input += synapse0x2017ea0();
   input += synapse0x2017ee0();
   input += synapse0x2017f20();
   input += synapse0x2017f60();
   input += synapse0x2017fa0();
   input += synapse0x2017fe0();
   input += synapse0x2018020();
   input += synapse0x2018060();
   input += synapse0x20180a0();
   input += synapse0x20180e0();
   input += synapse0x2018120();
   input += synapse0x20110b0();
   input += synapse0x20110f0();
   input += synapse0x2011130();
   input += synapse0x2018270();
   input += synapse0x20182b0();
   input += synapse0x20182f0();
   input += synapse0x2018330();
   input += synapse0x2018370();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2017070() {
   double input = input0x2017070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20183b0() {
   double input = -2.43557;
   input += synapse0x20186f0();
   input += synapse0x2018730();
   input += synapse0x2018770();
   input += synapse0x20187b0();
   input += synapse0x20187f0();
   input += synapse0x2018830();
   input += synapse0x2018870();
   input += synapse0x20188b0();
   input += synapse0x20188f0();
   input += synapse0x2018930();
   input += synapse0x2018970();
   input += synapse0x20189b0();
   input += synapse0x20189f0();
   input += synapse0x2018a30();
   input += synapse0x2018a70();
   input += synapse0x2018ab0();
   input += synapse0x2018540();
   input += synapse0x2018580();
   input += synapse0x2018c00();
   input += synapse0x2018c40();
   input += synapse0x2018c80();
   input += synapse0x2018cc0();
   input += synapse0x2018d00();
   input += synapse0x2018d40();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20183b0() {
   double input = input0x20183b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2018d80() {
   double input = 0.23275;
   input += synapse0x20190c0();
   input += synapse0x2019100();
   input += synapse0x2019140();
   input += synapse0x2019180();
   input += synapse0x20191c0();
   input += synapse0x2019200();
   input += synapse0x2019240();
   input += synapse0x2019280();
   input += synapse0x20192c0();
   input += synapse0x1dda620();
   input += synapse0x1dda660();
   input += synapse0x1dda6a0();
   input += synapse0x1dda6e0();
   input += synapse0x1dda720();
   input += synapse0x1dda760();
   input += synapse0x1dda7a0();
   input += synapse0x2018f10();
   input += synapse0x2018f50();
   input += synapse0x1dda8f0();
   input += synapse0x1dda930();
   input += synapse0x1dda970();
   input += synapse0x1dda9b0();
   input += synapse0x1dda9f0();
   input += synapse0x2019b10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2018d80() {
   double input = input0x2018d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2019b50() {
   double input = 0.141258;
   input += synapse0x2019e90();
   input += synapse0x2019ed0();
   input += synapse0x2019f10();
   input += synapse0x2019f50();
   input += synapse0x2019f90();
   input += synapse0x2019fd0();
   input += synapse0x201a010();
   input += synapse0x201a050();
   input += synapse0x201a090();
   input += synapse0x201a0d0();
   input += synapse0x201a110();
   input += synapse0x201a150();
   input += synapse0x201a190();
   input += synapse0x201a1d0();
   input += synapse0x201a210();
   input += synapse0x201a250();
   input += synapse0x2019ce0();
   input += synapse0x2019d20();
   input += synapse0x201a3a0();
   input += synapse0x201a3e0();
   input += synapse0x201a420();
   input += synapse0x201a460();
   input += synapse0x201a4a0();
   input += synapse0x201a4e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2019b50() {
   double input = input0x2019b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201a520() {
   double input = 4.71651;
   input += synapse0x201a860();
   input += synapse0x201a8a0();
   input += synapse0x201a8e0();
   input += synapse0x201a920();
   input += synapse0x201a960();
   input += synapse0x201a9a0();
   input += synapse0x201a9e0();
   input += synapse0x201aa20();
   input += synapse0x201aa60();
   input += synapse0x201aaa0();
   input += synapse0x201aae0();
   input += synapse0x201ab20();
   input += synapse0x201ab60();
   input += synapse0x201aba0();
   input += synapse0x201abe0();
   input += synapse0x201ac20();
   input += synapse0x201a6b0();
   input += synapse0x201a6f0();
   input += synapse0x201ad70();
   input += synapse0x201adb0();
   input += synapse0x201adf0();
   input += synapse0x201ae30();
   input += synapse0x201ae70();
   input += synapse0x201aeb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201a520() {
   double input = input0x201a520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201aef0() {
   double input = -0.0680141;
   input += synapse0x20149c0();
   input += synapse0x2014a00();
   input += synapse0x2014a40();
   input += synapse0x2014a80();
   input += synapse0x201b440();
   input += synapse0x201b480();
   input += synapse0x201b4c0();
   input += synapse0x201b500();
   input += synapse0x201b540();
   input += synapse0x201b580();
   input += synapse0x201b5c0();
   input += synapse0x201b600();
   input += synapse0x201b640();
   input += synapse0x201b680();
   input += synapse0x201b6c0();
   input += synapse0x201b700();
   input += synapse0x201b080();
   input += synapse0x201b0c0();
   input += synapse0x201b850();
   input += synapse0x201b890();
   input += synapse0x201b8d0();
   input += synapse0x201b910();
   input += synapse0x201b950();
   input += synapse0x201b990();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201aef0() {
   double input = input0x201aef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201b9d0() {
   double input = 0.732297;
   input += synapse0x201bd10();
   input += synapse0x201bd50();
   input += synapse0x201bd90();
   input += synapse0x201bdd0();
   input += synapse0x201be10();
   input += synapse0x201be50();
   input += synapse0x201be90();
   input += synapse0x201bed0();
   input += synapse0x201bf10();
   input += synapse0x201bf50();
   input += synapse0x201bf90();
   input += synapse0x201bfd0();
   input += synapse0x201c010();
   input += synapse0x201c050();
   input += synapse0x201c090();
   input += synapse0x201c0d0();
   input += synapse0x201bb60();
   input += synapse0x201bba0();
   input += synapse0x201c220();
   input += synapse0x201c260();
   input += synapse0x201c2a0();
   input += synapse0x201c2e0();
   input += synapse0x201c320();
   input += synapse0x201c360();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201b9d0() {
   double input = input0x201b9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201c3a0() {
   double input = -1.80177;
   input += synapse0x201c6e0();
   input += synapse0x201c720();
   input += synapse0x201c760();
   input += synapse0x201c7a0();
   input += synapse0x201c7e0();
   input += synapse0x201c820();
   input += synapse0x201c860();
   input += synapse0x201c8a0();
   input += synapse0x201c8e0();
   input += synapse0x201c920();
   input += synapse0x201c960();
   input += synapse0x201c9a0();
   input += synapse0x201c9e0();
   input += synapse0x201ca20();
   input += synapse0x201ca60();
   input += synapse0x201caa0();
   input += synapse0x201c530();
   input += synapse0x201c570();
   input += synapse0x2019300();
   input += synapse0x2019340();
   input += synapse0x2019380();
   input += synapse0x20193c0();
   input += synapse0x2019400();
   input += synapse0x2019440();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201c3a0() {
   double input = input0x201c3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2019480() {
   double input = 0.412459;
   input += synapse0x20197c0();
   input += synapse0x2019800();
   input += synapse0x2019840();
   input += synapse0x2019880();
   input += synapse0x20198c0();
   input += synapse0x2019900();
   input += synapse0x2019940();
   input += synapse0x2019980();
   input += synapse0x20199c0();
   input += synapse0x2019a00();
   input += synapse0x2019a40();
   input += synapse0x2019a80();
   input += synapse0x2019ac0();
   input += synapse0x201dc00();
   input += synapse0x201dc40();
   input += synapse0x201dc80();
   input += synapse0x2019610();
   input += synapse0x2019650();
   input += synapse0x201ddd0();
   input += synapse0x201de10();
   input += synapse0x201de50();
   input += synapse0x201de90();
   input += synapse0x201ded0();
   input += synapse0x201df10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2019480() {
   double input = input0x2019480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201df50() {
   double input = -0.496363;
   input += synapse0x201e290();
   input += synapse0x201e2d0();
   input += synapse0x201e310();
   input += synapse0x201e350();
   input += synapse0x201e390();
   input += synapse0x201e3d0();
   input += synapse0x201e410();
   input += synapse0x201e450();
   input += synapse0x201e490();
   input += synapse0x201e4d0();
   input += synapse0x201e510();
   input += synapse0x201e550();
   input += synapse0x201e590();
   input += synapse0x201e5d0();
   input += synapse0x201e610();
   input += synapse0x201e650();
   input += synapse0x201e0e0();
   input += synapse0x201e120();
   input += synapse0x201e7a0();
   input += synapse0x201e7e0();
   input += synapse0x201e820();
   input += synapse0x201e860();
   input += synapse0x201e8a0();
   input += synapse0x201e8e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201df50() {
   double input = input0x201df50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201e920() {
   double input = 1.99969;
   input += synapse0x201ec60();
   input += synapse0x201eca0();
   input += synapse0x201ece0();
   input += synapse0x201ed20();
   input += synapse0x201ed60();
   input += synapse0x201eda0();
   input += synapse0x201ede0();
   input += synapse0x201ee20();
   input += synapse0x201ee60();
   input += synapse0x201eea0();
   input += synapse0x201eee0();
   input += synapse0x201ef20();
   input += synapse0x201ef60();
   input += synapse0x201efa0();
   input += synapse0x201efe0();
   input += synapse0x201f020();
   input += synapse0x201eab0();
   input += synapse0x201eaf0();
   input += synapse0x201f170();
   input += synapse0x201f1b0();
   input += synapse0x201f1f0();
   input += synapse0x201f230();
   input += synapse0x201f270();
   input += synapse0x201f2b0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201e920() {
   double input = input0x201e920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201f2f0() {
   double input = -0.85719;
   input += synapse0x201f630();
   input += synapse0x201f670();
   input += synapse0x201f6b0();
   input += synapse0x201f6f0();
   input += synapse0x201f730();
   input += synapse0x201f770();
   input += synapse0x201f7b0();
   input += synapse0x201f7f0();
   input += synapse0x201f830();
   input += synapse0x201f870();
   input += synapse0x201f8b0();
   input += synapse0x201f8f0();
   input += synapse0x201f930();
   input += synapse0x201f970();
   input += synapse0x201f9b0();
   input += synapse0x201f9f0();
   input += synapse0x201f480();
   input += synapse0x201f4c0();
   input += synapse0x201fb40();
   input += synapse0x201fb80();
   input += synapse0x201fbc0();
   input += synapse0x201fc00();
   input += synapse0x201fc40();
   input += synapse0x201fc80();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201f2f0() {
   double input = input0x201f2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201fcc0() {
   double input = 0.628939;
   input += synapse0x2020000();
   input += synapse0x2011390();
   input += synapse0x20113d0();
   input += synapse0x20116d0();
   input += synapse0x2011710();
   input += synapse0x2011a10();
   input += synapse0x2011a50();
   input += synapse0x2011d50();
   input += synapse0x2011d90();
   input += synapse0x2012090();
   input += synapse0x20120d0();
   input += synapse0x20123d0();
   input += synapse0x2012410();
   input += synapse0x2012710();
   input += synapse0x2012750();
   input += synapse0x2012a50();
   input += synapse0x2012a90();
   input += synapse0x2012d90();
   input += synapse0x2012dd0();
   input += synapse0x20130d0();
   input += synapse0x2013110();
   input += synapse0x2013410();
   input += synapse0x2013450();
   input += synapse0x2013750();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201fcc0() {
   double input = input0x201fcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2021ad0() {
   double input = 0.171994;
   input += synapse0x2013790();
   input += synapse0x2014450();
   input += synapse0x2014490();
   input += synapse0x201fe50();
   input += synapse0x201fe90();
   input += synapse0x2014790();
   input += synapse0x20147d0();
   input += synapse0x1dcc240();
   input += synapse0x1dcc280();
   input += synapse0x2014f10();
   input += synapse0x2014f50();
   input += synapse0x2015250();
   input += synapse0x2015290();
   input += synapse0x2015590();
   input += synapse0x20155d0();
   input += synapse0x20158d0();
   input += synapse0x2015910();
   input += synapse0x2015c10();
   input += synapse0x2015c50();
   input += synapse0x2015f50();
   input += synapse0x2015f90();
   input += synapse0x2013a90();
   input += synapse0x2013ad0();
   input += synapse0x2021d70();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2021ad0() {
   double input = input0x2021ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2021db0() {
   double input = -0.688774;
   input += synapse0x20220f0();
   input += synapse0x2022130();
   input += synapse0x2022170();
   input += synapse0x20221b0();
   input += synapse0x20221f0();
   input += synapse0x2022230();
   input += synapse0x2022270();
   input += synapse0x20222b0();
   input += synapse0x20222f0();
   input += synapse0x2022330();
   input += synapse0x2022370();
   input += synapse0x20223b0();
   input += synapse0x20223f0();
   input += synapse0x2022430();
   input += synapse0x2022470();
   input += synapse0x20224b0();
   input += synapse0x2021f40();
   input += synapse0x2021f80();
   input += synapse0x2022600();
   input += synapse0x2022640();
   input += synapse0x2022680();
   input += synapse0x20226c0();
   input += synapse0x2022700();
   input += synapse0x2022740();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2021db0() {
   double input = input0x2021db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2022780() {
   double input = -0.315411;
   input += synapse0x2022ac0();
   input += synapse0x2022b00();
   input += synapse0x2022b40();
   input += synapse0x2022b80();
   input += synapse0x2022bc0();
   input += synapse0x2022c00();
   input += synapse0x2022c40();
   input += synapse0x2022c80();
   input += synapse0x2022cc0();
   input += synapse0x2022d00();
   input += synapse0x2022d40();
   input += synapse0x2022d80();
   input += synapse0x2022dc0();
   input += synapse0x2022e00();
   input += synapse0x2022e40();
   input += synapse0x2022e80();
   input += synapse0x2022910();
   input += synapse0x2022950();
   input += synapse0x2022fd0();
   input += synapse0x2023010();
   input += synapse0x2023050();
   input += synapse0x2023090();
   input += synapse0x20230d0();
   input += synapse0x2023110();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2022780() {
   double input = input0x2022780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2023150() {
   double input = -0.702264;
   input += synapse0x2023490();
   input += synapse0x20234d0();
   input += synapse0x2023510();
   input += synapse0x2023550();
   input += synapse0x2023590();
   input += synapse0x20235d0();
   input += synapse0x2023610();
   input += synapse0x2023650();
   input += synapse0x2023690();
   input += synapse0x20236d0();
   input += synapse0x2023710();
   input += synapse0x2023750();
   input += synapse0x2023790();
   input += synapse0x20237d0();
   input += synapse0x2023810();
   input += synapse0x2023850();
   input += synapse0x20232e0();
   input += synapse0x2023320();
   input += synapse0x20239a0();
   input += synapse0x20239e0();
   input += synapse0x2023a20();
   input += synapse0x2023a60();
   input += synapse0x2023aa0();
   input += synapse0x2023ae0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2023150() {
   double input = input0x2023150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2023b20() {
   double input = -0.948951;
   input += synapse0x2023e60();
   input += synapse0x2023ea0();
   input += synapse0x2023ee0();
   input += synapse0x2023f20();
   input += synapse0x2023f60();
   input += synapse0x2023fa0();
   input += synapse0x2023fe0();
   input += synapse0x2024020();
   input += synapse0x2024060();
   input += synapse0x20240a0();
   input += synapse0x20240e0();
   input += synapse0x2024120();
   input += synapse0x2024160();
   input += synapse0x20241a0();
   input += synapse0x20241e0();
   input += synapse0x2024220();
   input += synapse0x2023cb0();
   input += synapse0x2023cf0();
   input += synapse0x2024370();
   input += synapse0x20243b0();
   input += synapse0x20243f0();
   input += synapse0x2024430();
   input += synapse0x2024470();
   input += synapse0x20244b0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2023b20() {
   double input = input0x2023b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20244f0() {
   double input = -0.435048;
   input += synapse0x2024830();
   input += synapse0x2024870();
   input += synapse0x20248b0();
   input += synapse0x20248f0();
   input += synapse0x2024930();
   input += synapse0x2024970();
   input += synapse0x20249b0();
   input += synapse0x20249f0();
   input += synapse0x2024a30();
   input += synapse0x201cbf0();
   input += synapse0x201cc30();
   input += synapse0x201cc70();
   input += synapse0x201ccb0();
   input += synapse0x201ccf0();
   input += synapse0x201cd30();
   input += synapse0x201cd70();
   input += synapse0x2024680();
   input += synapse0x20246c0();
   input += synapse0x201cec0();
   input += synapse0x201cf00();
   input += synapse0x201cf40();
   input += synapse0x201cf80();
   input += synapse0x201cfc0();
   input += synapse0x201d000();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20244f0() {
   double input = input0x20244f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201d040() {
   double input = 1.13365;
   input += synapse0x201d380();
   input += synapse0x201d3c0();
   input += synapse0x201d400();
   input += synapse0x201d440();
   input += synapse0x201d480();
   input += synapse0x201d4c0();
   input += synapse0x201d500();
   input += synapse0x201d540();
   input += synapse0x201d580();
   input += synapse0x201d5c0();
   input += synapse0x201d600();
   input += synapse0x201d640();
   input += synapse0x201d680();
   input += synapse0x201d6c0();
   input += synapse0x201d700();
   input += synapse0x201d740();
   input += synapse0x201d1d0();
   input += synapse0x201d210();
   input += synapse0x201d890();
   input += synapse0x201d8d0();
   input += synapse0x201d910();
   input += synapse0x201d950();
   input += synapse0x201d990();
   input += synapse0x201d9d0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201d040() {
   double input = input0x201d040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x201da10() {
   double input = 0.154392;
   input += synapse0x201dba0();
   input += synapse0x2026c30();
   input += synapse0x2026c70();
   input += synapse0x2026cb0();
   input += synapse0x2026cf0();
   input += synapse0x2026d30();
   input += synapse0x2026d70();
   input += synapse0x2026db0();
   input += synapse0x2026df0();
   input += synapse0x2026e30();
   input += synapse0x2026e70();
   input += synapse0x2026eb0();
   input += synapse0x2026ef0();
   input += synapse0x2026f30();
   input += synapse0x2026f70();
   input += synapse0x2026fb0();
   input += synapse0x2026a80();
   input += synapse0x2026ac0();
   input += synapse0x2027100();
   input += synapse0x2027140();
   input += synapse0x2027180();
   input += synapse0x20271c0();
   input += synapse0x2027200();
   input += synapse0x2027240();
   return input;
}

double NNfunction_ss_cRcR::neuron0x201da10() {
   double input = input0x201da10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2027280() {
   double input = 0.584286;
   input += synapse0x20275c0();
   input += synapse0x2027600();
   input += synapse0x2027640();
   input += synapse0x2027680();
   input += synapse0x20276c0();
   input += synapse0x2027700();
   input += synapse0x2027740();
   input += synapse0x2027780();
   input += synapse0x20277c0();
   input += synapse0x2027800();
   input += synapse0x2027840();
   input += synapse0x2027880();
   input += synapse0x20278c0();
   input += synapse0x2027900();
   input += synapse0x2027940();
   input += synapse0x2027980();
   input += synapse0x2027410();
   input += synapse0x2027450();
   input += synapse0x2027ad0();
   input += synapse0x2027b10();
   input += synapse0x2027b50();
   input += synapse0x2027b90();
   input += synapse0x2027bd0();
   input += synapse0x2027c10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2027280() {
   double input = input0x2027280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2027c50() {
   double input = 0.954862;
   input += synapse0x2027f90();
   input += synapse0x2027fd0();
   input += synapse0x2028010();
   input += synapse0x2028050();
   input += synapse0x2028090();
   input += synapse0x20280d0();
   input += synapse0x2028110();
   input += synapse0x2028150();
   input += synapse0x2028190();
   input += synapse0x20281d0();
   input += synapse0x2028210();
   input += synapse0x2028250();
   input += synapse0x2028290();
   input += synapse0x20282d0();
   input += synapse0x2028310();
   input += synapse0x2028350();
   input += synapse0x2027de0();
   input += synapse0x2027e20();
   input += synapse0x20284a0();
   input += synapse0x20284e0();
   input += synapse0x2028520();
   input += synapse0x2028560();
   input += synapse0x20285a0();
   input += synapse0x20285e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2027c50() {
   double input = input0x2027c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2028620() {
   double input = -0.852889;
   input += synapse0x2028960();
   input += synapse0x20289a0();
   input += synapse0x20289e0();
   input += synapse0x2028a20();
   input += synapse0x2028a60();
   input += synapse0x2028aa0();
   input += synapse0x2028ae0();
   input += synapse0x2028b20();
   input += synapse0x2028b60();
   input += synapse0x2028ba0();
   input += synapse0x2028be0();
   input += synapse0x2028c20();
   input += synapse0x2028c60();
   input += synapse0x2028ca0();
   input += synapse0x2028ce0();
   input += synapse0x2028d20();
   input += synapse0x20287b0();
   input += synapse0x20287f0();
   input += synapse0x2028e70();
   input += synapse0x2028eb0();
   input += synapse0x2028ef0();
   input += synapse0x2028f30();
   input += synapse0x2028f70();
   input += synapse0x2028fb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2028620() {
   double input = input0x2028620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2028ff0() {
   double input = -0.929731;
   input += synapse0x2029330();
   input += synapse0x2029370();
   input += synapse0x20293b0();
   input += synapse0x20293f0();
   input += synapse0x2029430();
   input += synapse0x2029470();
   input += synapse0x20294b0();
   input += synapse0x20294f0();
   input += synapse0x2029530();
   input += synapse0x2029570();
   input += synapse0x20295b0();
   input += synapse0x20295f0();
   input += synapse0x2029630();
   input += synapse0x2029670();
   input += synapse0x20296b0();
   input += synapse0x20296f0();
   input += synapse0x2029180();
   input += synapse0x20291c0();
   input += synapse0x2029840();
   input += synapse0x2029880();
   input += synapse0x20298c0();
   input += synapse0x2029900();
   input += synapse0x2029940();
   input += synapse0x2029980();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2028ff0() {
   double input = input0x2028ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20299c0() {
   double input = -1.84796;
   input += synapse0x2029d00();
   input += synapse0x2029d40();
   input += synapse0x2029d80();
   input += synapse0x2029dc0();
   input += synapse0x2029e00();
   input += synapse0x2029e40();
   input += synapse0x2029e80();
   input += synapse0x2029ec0();
   input += synapse0x2029f00();
   input += synapse0x2029f40();
   input += synapse0x2029f80();
   input += synapse0x2029fc0();
   input += synapse0x202a000();
   input += synapse0x202a040();
   input += synapse0x202a080();
   input += synapse0x202a0c0();
   input += synapse0x2029b50();
   input += synapse0x2029b90();
   input += synapse0x202a210();
   input += synapse0x202a250();
   input += synapse0x202a290();
   input += synapse0x202a2d0();
   input += synapse0x202a310();
   input += synapse0x202a350();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20299c0() {
   double input = input0x20299c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x202a390() {
   double input = -1.28175;
   input += synapse0x202a6d0();
   input += synapse0x202a710();
   input += synapse0x202a750();
   input += synapse0x202a790();
   input += synapse0x202a7d0();
   input += synapse0x202a810();
   input += synapse0x202a850();
   input += synapse0x202a890();
   input += synapse0x202a8d0();
   input += synapse0x202a910();
   input += synapse0x202a950();
   input += synapse0x202a990();
   input += synapse0x202a9d0();
   input += synapse0x202aa10();
   input += synapse0x202aa50();
   input += synapse0x202aa90();
   input += synapse0x202a520();
   input += synapse0x202a560();
   input += synapse0x202abe0();
   input += synapse0x202ac20();
   input += synapse0x202ac60();
   input += synapse0x202aca0();
   input += synapse0x202ace0();
   input += synapse0x202ad20();
   return input;
}

double NNfunction_ss_cRcR::neuron0x202a390() {
   double input = input0x202a390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x202ad60() {
   double input = 0.168968;
   input += synapse0x202b0a0();
   input += synapse0x202b0e0();
   input += synapse0x202b120();
   input += synapse0x202b160();
   input += synapse0x202b1a0();
   input += synapse0x202b1e0();
   input += synapse0x202b220();
   input += synapse0x202b260();
   input += synapse0x202b2a0();
   input += synapse0x202b2e0();
   input += synapse0x202b320();
   input += synapse0x202b360();
   input += synapse0x202b3a0();
   input += synapse0x202b3e0();
   input += synapse0x202b420();
   input += synapse0x202b460();
   input += synapse0x202aef0();
   input += synapse0x202af30();
   input += synapse0x202b5b0();
   input += synapse0x202b5f0();
   input += synapse0x202b630();
   input += synapse0x202b670();
   input += synapse0x202b6b0();
   input += synapse0x202b6f0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x202ad60() {
   double input = input0x202ad60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x202b730() {
   double input = -2.01531;
   input += synapse0x202ba70();
   input += synapse0x2020040();
   input += synapse0x2020080();
   input += synapse0x20200c0();
   input += synapse0x2020310();
   input += synapse0x2020350();
   input += synapse0x2020390();
   input += synapse0x20205e0();
   input += synapse0x2020620();
   input += synapse0x2020870();
   input += synapse0x20208b0();
   input += synapse0x20208f0();
   input += synapse0x2020b40();
   input += synapse0x2020b80();
   input += synapse0x2020dd0();
   input += synapse0x2020e10();
   input += synapse0x202b8c0();
   input += synapse0x202b900();
   input += synapse0x2020f60();
   input += synapse0x2021470();
   input += synapse0x20214b0();
   input += synapse0x20214f0();
   input += synapse0x2021740();
   input += synapse0x2021780();
   return input;
}

double NNfunction_ss_cRcR::neuron0x202b730() {
   double input = input0x202b730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20217c0() {
   double input = -3.79687;
   input += synapse0x2021030();
   input += synapse0x2021070();
   input += synapse0x20210b0();
   input += synapse0x20210f0();
   input += synapse0x2021a70();
   input += synapse0x202ddc0();
   input += synapse0x202de00();
   input += synapse0x202de40();
   input += synapse0x202de80();
   input += synapse0x202dec0();
   input += synapse0x202df00();
   input += synapse0x202df40();
   input += synapse0x202df80();
   input += synapse0x202dfc0();
   input += synapse0x202e000();
   input += synapse0x202e040();
   input += synapse0x2021950();
   input += synapse0x2021990();
   input += synapse0x202e190();
   input += synapse0x202e1d0();
   input += synapse0x202e210();
   input += synapse0x202e250();
   input += synapse0x202e290();
   input += synapse0x202e2d0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20217c0() {
   double input = input0x20217c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x202e310() {
   double input = -0.179162;
   input += synapse0x202e650();
   input += synapse0x202e690();
   input += synapse0x202e6d0();
   input += synapse0x202e710();
   input += synapse0x202e750();
   input += synapse0x202e790();
   input += synapse0x202e7d0();
   input += synapse0x202e810();
   input += synapse0x202e850();
   input += synapse0x202e890();
   input += synapse0x202e8d0();
   input += synapse0x202e910();
   input += synapse0x202e950();
   input += synapse0x202e990();
   input += synapse0x202e9d0();
   input += synapse0x202ea10();
   input += synapse0x202e4a0();
   input += synapse0x202e4e0();
   input += synapse0x202eb60();
   input += synapse0x202eba0();
   input += synapse0x202ebe0();
   input += synapse0x202ec20();
   input += synapse0x202ec60();
   input += synapse0x202eca0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x202e310() {
   double input = input0x202e310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x202ece0() {
   double input = 0.13657;
   input += synapse0x202f020();
   input += synapse0x202f060();
   input += synapse0x202f0a0();
   input += synapse0x202f0e0();
   input += synapse0x202f120();
   input += synapse0x202f160();
   input += synapse0x202f1a0();
   input += synapse0x202f1e0();
   input += synapse0x202f220();
   input += synapse0x202f260();
   input += synapse0x202f2a0();
   input += synapse0x202f2e0();
   input += synapse0x202f320();
   input += synapse0x202f360();
   input += synapse0x202f3a0();
   input += synapse0x202f3e0();
   input += synapse0x202ee70();
   input += synapse0x202eeb0();
   input += synapse0x202f530();
   input += synapse0x202f570();
   input += synapse0x202f5b0();
   input += synapse0x202f5f0();
   input += synapse0x202f630();
   input += synapse0x202f670();
   return input;
}

double NNfunction_ss_cRcR::neuron0x202ece0() {
   double input = input0x202ece0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x202f6b0() {
   double input = -0.415266;
   input += synapse0x202f9f0();
   input += synapse0x202fa30();
   input += synapse0x202fa70();
   input += synapse0x202fab0();
   input += synapse0x202faf0();
   input += synapse0x202fb30();
   input += synapse0x202fb70();
   input += synapse0x202fbb0();
   input += synapse0x202fbf0();
   input += synapse0x202fc30();
   input += synapse0x202fc70();
   input += synapse0x202fcb0();
   input += synapse0x202fcf0();
   input += synapse0x202fd30();
   input += synapse0x202fd70();
   input += synapse0x202fdb0();
   input += synapse0x202f840();
   input += synapse0x202f880();
   input += synapse0x202ff00();
   input += synapse0x202ff40();
   input += synapse0x202ff80();
   input += synapse0x202ffc0();
   input += synapse0x2030000();
   input += synapse0x2030040();
   return input;
}

double NNfunction_ss_cRcR::neuron0x202f6b0() {
   double input = input0x202f6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2030080() {
   double input = -1.64204;
   input += synapse0x20303c0();
   input += synapse0x2030400();
   input += synapse0x2030440();
   input += synapse0x2030480();
   input += synapse0x20304c0();
   input += synapse0x2030500();
   input += synapse0x2030540();
   input += synapse0x2030580();
   input += synapse0x20305c0();
   input += synapse0x2030600();
   input += synapse0x2030640();
   input += synapse0x2030680();
   input += synapse0x20306c0();
   input += synapse0x2030700();
   input += synapse0x2030740();
   input += synapse0x2030780();
   input += synapse0x2030210();
   input += synapse0x2030250();
   input += synapse0x20308d0();
   input += synapse0x2030910();
   input += synapse0x2030950();
   input += synapse0x2030990();
   input += synapse0x20309d0();
   input += synapse0x2030a10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2030080() {
   double input = input0x2030080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2030a50() {
   double input = 0.142378;
   input += synapse0x2030d90();
   input += synapse0x2030dd0();
   input += synapse0x2030e10();
   input += synapse0x2030e50();
   input += synapse0x2030e90();
   input += synapse0x2030ed0();
   input += synapse0x2030f10();
   input += synapse0x2030f50();
   input += synapse0x2030f90();
   input += synapse0x2030fd0();
   input += synapse0x2031010();
   input += synapse0x2031050();
   input += synapse0x2031090();
   input += synapse0x20310d0();
   input += synapse0x2031110();
   input += synapse0x2031150();
   input += synapse0x2030be0();
   input += synapse0x2030c20();
   input += synapse0x20312a0();
   input += synapse0x20312e0();
   input += synapse0x2031320();
   input += synapse0x2031360();
   input += synapse0x20313a0();
   input += synapse0x20313e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2030a50() {
   double input = input0x2030a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2031420() {
   double input = 1.12541;
   input += synapse0x2031760();
   input += synapse0x20317a0();
   input += synapse0x20317e0();
   input += synapse0x2031820();
   input += synapse0x2031860();
   input += synapse0x20318a0();
   input += synapse0x20318e0();
   input += synapse0x2031920();
   input += synapse0x2031960();
   input += synapse0x20319a0();
   input += synapse0x20319e0();
   input += synapse0x2031a20();
   input += synapse0x2031a60();
   input += synapse0x2031aa0();
   input += synapse0x2031ae0();
   input += synapse0x2031b20();
   input += synapse0x20315b0();
   input += synapse0x20315f0();
   input += synapse0x2031c70();
   input += synapse0x2031cb0();
   input += synapse0x2031cf0();
   input += synapse0x2031d30();
   input += synapse0x2031d70();
   input += synapse0x2031db0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2031420() {
   double input = input0x2031420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2031df0() {
   double input = -1.15525;
   input += synapse0x2032130();
   input += synapse0x2032170();
   input += synapse0x20321b0();
   input += synapse0x20321f0();
   input += synapse0x2032230();
   input += synapse0x2032270();
   input += synapse0x20322b0();
   input += synapse0x20322f0();
   input += synapse0x2032330();
   input += synapse0x2032370();
   input += synapse0x20323b0();
   input += synapse0x20323f0();
   input += synapse0x2032430();
   input += synapse0x2032470();
   input += synapse0x20324b0();
   input += synapse0x20324f0();
   input += synapse0x2031f80();
   input += synapse0x2031fc0();
   input += synapse0x2032640();
   input += synapse0x2032680();
   input += synapse0x20326c0();
   input += synapse0x2032700();
   input += synapse0x2032740();
   input += synapse0x2032780();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2031df0() {
   double input = input0x2031df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20327c0() {
   double input = 1.4215;
   input += synapse0x201b230();
   input += synapse0x201b270();
   input += synapse0x201b2b0();
   input += synapse0x201b2f0();
   input += synapse0x201b330();
   input += synapse0x201b370();
   input += synapse0x201b3b0();
   input += synapse0x201b3f0();
   input += synapse0x2032f10();
   input += synapse0x2032f50();
   input += synapse0x2032f90();
   input += synapse0x2032fd0();
   input += synapse0x2033010();
   input += synapse0x2033050();
   input += synapse0x2033090();
   input += synapse0x20330d0();
   input += synapse0x2032950();
   input += synapse0x2032990();
   input += synapse0x2033220();
   input += synapse0x2033260();
   input += synapse0x20332a0();
   input += synapse0x20332e0();
   input += synapse0x2033320();
   input += synapse0x2033360();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20327c0() {
   double input = input0x20327c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20333a0() {
   double input = 0.770444;
   input += synapse0x20336e0();
   input += synapse0x2033720();
   input += synapse0x2033760();
   input += synapse0x20337a0();
   input += synapse0x20337e0();
   input += synapse0x2033820();
   input += synapse0x2033860();
   input += synapse0x20338a0();
   input += synapse0x20338e0();
   input += synapse0x2033920();
   input += synapse0x2033960();
   input += synapse0x20339a0();
   input += synapse0x20339e0();
   input += synapse0x2033a20();
   input += synapse0x2033a60();
   input += synapse0x2033aa0();
   input += synapse0x2033530();
   input += synapse0x2033570();
   input += synapse0x2033bf0();
   input += synapse0x2033c30();
   input += synapse0x2033c70();
   input += synapse0x2033cb0();
   input += synapse0x2033cf0();
   input += synapse0x2033d30();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20333a0() {
   double input = input0x20333a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2033d70() {
   double input = 0.0256086;
   input += synapse0x20340b0();
   input += synapse0x20340f0();
   input += synapse0x2034130();
   input += synapse0x2034170();
   input += synapse0x20341b0();
   input += synapse0x20341f0();
   input += synapse0x2034230();
   input += synapse0x2034270();
   input += synapse0x20342b0();
   input += synapse0x20342f0();
   input += synapse0x2034330();
   input += synapse0x2034370();
   input += synapse0x20343b0();
   input += synapse0x20343f0();
   input += synapse0x2034430();
   input += synapse0x2034470();
   input += synapse0x2033f00();
   input += synapse0x2033f40();
   input += synapse0x2024a70();
   input += synapse0x2024ab0();
   input += synapse0x2024af0();
   input += synapse0x2024b30();
   input += synapse0x2024b70();
   input += synapse0x2024bb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2033d70() {
   double input = input0x2033d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2024bf0() {
   double input = -2.54767;
   input += synapse0x2024f30();
   input += synapse0x2024f70();
   input += synapse0x2024fb0();
   input += synapse0x2024ff0();
   input += synapse0x2025030();
   input += synapse0x2025070();
   input += synapse0x20250b0();
   input += synapse0x20250f0();
   input += synapse0x2025130();
   input += synapse0x2025170();
   input += synapse0x20251b0();
   input += synapse0x20251f0();
   input += synapse0x2025230();
   input += synapse0x2025270();
   input += synapse0x20252b0();
   input += synapse0x20252f0();
   input += synapse0x2024d80();
   input += synapse0x2024dc0();
   input += synapse0x2025440();
   input += synapse0x2025480();
   input += synapse0x20254c0();
   input += synapse0x2025500();
   input += synapse0x2025540();
   input += synapse0x2025580();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2024bf0() {
   double input = input0x2024bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20255c0() {
   double input = -2.05202;
   input += synapse0x2025900();
   input += synapse0x2025940();
   input += synapse0x2025980();
   input += synapse0x20259c0();
   input += synapse0x2025a00();
   input += synapse0x2025a40();
   input += synapse0x2025a80();
   input += synapse0x2025ac0();
   input += synapse0x2025b00();
   input += synapse0x2025b40();
   input += synapse0x2025b80();
   input += synapse0x2025bc0();
   input += synapse0x2025c00();
   input += synapse0x2025c40();
   input += synapse0x2025c80();
   input += synapse0x2025cc0();
   input += synapse0x2025750();
   input += synapse0x2025790();
   input += synapse0x2025e10();
   input += synapse0x2025e50();
   input += synapse0x2025e90();
   input += synapse0x2025ed0();
   input += synapse0x2025f10();
   input += synapse0x2025f50();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20255c0() {
   double input = input0x20255c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2025f90() {
   double input = 0.425989;
   input += synapse0x20262d0();
   input += synapse0x2026310();
   input += synapse0x2026350();
   input += synapse0x2026390();
   input += synapse0x20263d0();
   input += synapse0x2026410();
   input += synapse0x2026450();
   input += synapse0x2026490();
   input += synapse0x20264d0();
   input += synapse0x2026510();
   input += synapse0x2026550();
   input += synapse0x2026590();
   input += synapse0x20265d0();
   input += synapse0x2026610();
   input += synapse0x2026650();
   input += synapse0x2026690();
   input += synapse0x2026120();
   input += synapse0x2026160();
   input += synapse0x20267e0();
   input += synapse0x2026820();
   input += synapse0x2026860();
   input += synapse0x20268a0();
   input += synapse0x20268e0();
   input += synapse0x2026920();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2025f90() {
   double input = input0x2025f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20385d0() {
   double input = -1.20916;
   input += synapse0x20387f0();
   input += synapse0x2038830();
   input += synapse0x2038870();
   input += synapse0x20388b0();
   input += synapse0x20388f0();
   input += synapse0x2038930();
   input += synapse0x2038970();
   input += synapse0x20389b0();
   input += synapse0x20389f0();
   input += synapse0x2038a30();
   input += synapse0x2038a70();
   input += synapse0x2038ab0();
   input += synapse0x2038af0();
   input += synapse0x2038b30();
   input += synapse0x2038b70();
   input += synapse0x2038bb0();
   input += synapse0x2026960();
   input += synapse0x20269a0();
   input += synapse0x2038d00();
   input += synapse0x2038d40();
   input += synapse0x2038d80();
   input += synapse0x2038dc0();
   input += synapse0x2038e00();
   input += synapse0x2038e40();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20385d0() {
   double input = input0x20385d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2038e80() {
   double input = 1.48179;
   input += synapse0x20391c0();
   input += synapse0x2039200();
   input += synapse0x2039240();
   input += synapse0x2039280();
   input += synapse0x20392c0();
   input += synapse0x2039300();
   input += synapse0x2039340();
   input += synapse0x2039380();
   input += synapse0x20393c0();
   input += synapse0x2039400();
   input += synapse0x2039440();
   input += synapse0x2039480();
   input += synapse0x20394c0();
   input += synapse0x2039500();
   input += synapse0x2039540();
   input += synapse0x2039580();
   input += synapse0x2039010();
   input += synapse0x2039050();
   input += synapse0x20396d0();
   input += synapse0x2039710();
   input += synapse0x2039750();
   input += synapse0x2039790();
   input += synapse0x20397d0();
   input += synapse0x2039810();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2038e80() {
   double input = input0x2038e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2039850() {
   double input = -1.34419;
   input += synapse0x2039b90();
   input += synapse0x2039bd0();
   input += synapse0x2039c10();
   input += synapse0x2039c50();
   input += synapse0x2039c90();
   input += synapse0x2039cd0();
   input += synapse0x2039d10();
   input += synapse0x2039d50();
   input += synapse0x2039d90();
   input += synapse0x2039dd0();
   input += synapse0x2039e10();
   input += synapse0x2039e50();
   input += synapse0x2039e90();
   input += synapse0x2039ed0();
   input += synapse0x2039f10();
   input += synapse0x2039f50();
   input += synapse0x20399e0();
   input += synapse0x2039a20();
   input += synapse0x203a0a0();
   input += synapse0x203a0e0();
   input += synapse0x203a120();
   input += synapse0x203a160();
   input += synapse0x203a1a0();
   input += synapse0x203a1e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2039850() {
   double input = input0x2039850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x203a220() {
   double input = -0.582451;
   input += synapse0x203a560();
   input += synapse0x203a5a0();
   input += synapse0x203a5e0();
   input += synapse0x203a620();
   input += synapse0x203a660();
   input += synapse0x203a6a0();
   input += synapse0x203a6e0();
   input += synapse0x203a720();
   input += synapse0x203a760();
   input += synapse0x203a7a0();
   input += synapse0x203a7e0();
   input += synapse0x203a820();
   input += synapse0x203a860();
   input += synapse0x203a8a0();
   input += synapse0x203a8e0();
   input += synapse0x203a920();
   input += synapse0x203a3b0();
   input += synapse0x203a3f0();
   input += synapse0x203aa70();
   input += synapse0x203aab0();
   input += synapse0x203aaf0();
   input += synapse0x203ab30();
   input += synapse0x203ab70();
   input += synapse0x203abb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x203a220() {
   double input = input0x203a220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2041420() {
   double input = -0.270528;
   input += synapse0x1ddaac0();
   input += synapse0x1ddab00();
   input += synapse0x2018660();
   input += synapse0x20186a0();
   input += synapse0x2019030();
   input += synapse0x2019070();
   input += synapse0x2019e00();
   input += synapse0x2019e40();
   input += synapse0x201a7d0();
   input += synapse0x201a810();
   input += synapse0x201b1a0();
   input += synapse0x201b1e0();
   input += synapse0x201bc80();
   input += synapse0x201bcc0();
   input += synapse0x201c650();
   input += synapse0x201c690();
   input += synapse0x2019730();
   input += synapse0x2019770();
   input += synapse0x201e200();
   input += synapse0x201e240();
   input += synapse0x201ebd0();
   input += synapse0x201ec10();
   input += synapse0x201f5a0();
   input += synapse0x201f5e0();
   input += synapse0x201ff70();
   input += synapse0x201ffb0();
   input += synapse0x2014110();
   input += synapse0x2014150();
   input += synapse0x2022060();
   input += synapse0x20220a0();
   input += synapse0x2022a30();
   input += synapse0x2022a70();
   input += synapse0x2023400();
   input += synapse0x2023440();
   input += synapse0x2023dd0();
   input += synapse0x2023e10();
   input += synapse0x20247a0();
   input += synapse0x20247e0();
   input += synapse0x201d2f0();
   input += synapse0x201d330();
   input += synapse0x2026ba0();
   input += synapse0x2026be0();
   input += synapse0x2027530();
   input += synapse0x2027570();
   input += synapse0x2027f00();
   input += synapse0x2027f40();
   input += synapse0x20288d0();
   input += synapse0x2028910();
   input += synapse0x20292a0();
   input += synapse0x20292e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2041420() {
   double input = input0x2041420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x20417c0() {
   double input = 0.0547576;
   input += synapse0x202b9e0();
   input += synapse0x202ba20();
   input += synapse0x2020fa0();
   input += synapse0x2020fe0();
   input += synapse0x202e5c0();
   input += synapse0x202e600();
   input += synapse0x202ef90();
   input += synapse0x202efd0();
   input += synapse0x202f960();
   input += synapse0x202f9a0();
   input += synapse0x2030330();
   input += synapse0x2030370();
   input += synapse0x2030d00();
   input += synapse0x2030d40();
   input += synapse0x20316d0();
   input += synapse0x2031710();
   input += synapse0x20320a0();
   input += synapse0x20320e0();
   input += synapse0x2032a70();
   input += synapse0x2032ab0();
   input += synapse0x2033650();
   input += synapse0x2033690();
   input += synapse0x2034020();
   input += synapse0x2034060();
   input += synapse0x2024ea0();
   input += synapse0x2024ee0();
   input += synapse0x2025870();
   input += synapse0x20258b0();
   input += synapse0x2026240();
   input += synapse0x2026280();
   input += synapse0x2038760();
   input += synapse0x20387a0();
   input += synapse0x2039130();
   input += synapse0x2039170();
   input += synapse0x2039b00();
   input += synapse0x2039b40();
   input += synapse0x203a4d0();
   input += synapse0x203a510();
   input += synapse0x20163c0();
   input += synapse0x2016400();
   input += synapse0x2029c70();
   input += synapse0x2029cb0();
   input += synapse0x203abf0();
   input += synapse0x203ac30();
   input += synapse0x203ac70();
   input += synapse0x203acb0();
   input += synapse0x2041b60();
   input += synapse0x2041ba0();
   input += synapse0x2041be0();
   input += synapse0x2041c20();
   return input;
}

double NNfunction_ss_cRcR::neuron0x20417c0() {
   double input = input0x20417c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2041c60() {
   double input = -1.74547;
   input += synapse0x2041fa0();
   input += synapse0x2041fe0();
   input += synapse0x2042020();
   input += synapse0x2042060();
   input += synapse0x20420a0();
   input += synapse0x20420e0();
   input += synapse0x2042120();
   input += synapse0x2042160();
   input += synapse0x20421a0();
   input += synapse0x20421e0();
   input += synapse0x2042220();
   input += synapse0x2042260();
   input += synapse0x20422a0();
   input += synapse0x20422e0();
   input += synapse0x2042320();
   input += synapse0x2042360();
   input += synapse0x2041df0();
   input += synapse0x2041e30();
   input += synapse0x20424b0();
   input += synapse0x20424f0();
   input += synapse0x2042530();
   input += synapse0x2042570();
   input += synapse0x20425b0();
   input += synapse0x20425f0();
   input += synapse0x2042630();
   input += synapse0x2042670();
   input += synapse0x20426b0();
   input += synapse0x20426f0();
   input += synapse0x2042730();
   input += synapse0x2042770();
   input += synapse0x20427b0();
   input += synapse0x20427f0();
   input += synapse0x20423a0();
   input += synapse0x20423e0();
   input += synapse0x2042420();
   input += synapse0x2042460();
   input += synapse0x2042a40();
   input += synapse0x2042a80();
   input += synapse0x2042ac0();
   input += synapse0x2042b00();
   input += synapse0x2042b40();
   input += synapse0x2042b80();
   input += synapse0x2042bc0();
   input += synapse0x2042c00();
   input += synapse0x2042c40();
   input += synapse0x2042c80();
   input += synapse0x2042cc0();
   input += synapse0x2042d00();
   input += synapse0x2042d40();
   input += synapse0x2042d80();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2041c60() {
   double input = input0x2041c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2042dc0() {
   double input = -0.209455;
   input += synapse0x2043100();
   input += synapse0x2043140();
   input += synapse0x2043180();
   input += synapse0x20431c0();
   input += synapse0x2043200();
   input += synapse0x2043240();
   input += synapse0x2043280();
   input += synapse0x20432c0();
   input += synapse0x2043300();
   input += synapse0x2043340();
   input += synapse0x2043380();
   input += synapse0x20433c0();
   input += synapse0x2043400();
   input += synapse0x2043440();
   input += synapse0x2043480();
   input += synapse0x20434c0();
   input += synapse0x2042f50();
   input += synapse0x2042f90();
   input += synapse0x2043610();
   input += synapse0x2043650();
   input += synapse0x2043690();
   input += synapse0x20436d0();
   input += synapse0x2043710();
   input += synapse0x2043750();
   input += synapse0x2043790();
   input += synapse0x20437d0();
   input += synapse0x2043810();
   input += synapse0x2043850();
   input += synapse0x2043890();
   input += synapse0x20438d0();
   input += synapse0x2043910();
   input += synapse0x2043950();
   input += synapse0x2043500();
   input += synapse0x2043540();
   input += synapse0x2043580();
   input += synapse0x20435c0();
   input += synapse0x2043ba0();
   input += synapse0x2043be0();
   input += synapse0x2043c20();
   input += synapse0x2043c60();
   input += synapse0x2043ca0();
   input += synapse0x2043ce0();
   input += synapse0x2043d20();
   input += synapse0x2043d60();
   input += synapse0x2043da0();
   input += synapse0x2043de0();
   input += synapse0x2043e20();
   input += synapse0x2043e60();
   input += synapse0x2043ea0();
   input += synapse0x2043ee0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2042dc0() {
   double input = input0x2042dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2043f20() {
   double input = 0.231765;
   input += synapse0x2044260();
   input += synapse0x20442a0();
   input += synapse0x20442e0();
   input += synapse0x2044320();
   input += synapse0x2044360();
   input += synapse0x20443a0();
   input += synapse0x20443e0();
   input += synapse0x2044420();
   input += synapse0x2044460();
   input += synapse0x20444a0();
   input += synapse0x20444e0();
   input += synapse0x2044520();
   input += synapse0x2044560();
   input += synapse0x20445a0();
   input += synapse0x20445e0();
   input += synapse0x2044620();
   input += synapse0x20440b0();
   input += synapse0x20440f0();
   input += synapse0x2044770();
   input += synapse0x20447b0();
   input += synapse0x20447f0();
   input += synapse0x2044830();
   input += synapse0x2044870();
   input += synapse0x20448b0();
   input += synapse0x20448f0();
   input += synapse0x2044930();
   input += synapse0x2044970();
   input += synapse0x20449b0();
   input += synapse0x20449f0();
   input += synapse0x2044a30();
   input += synapse0x2044a70();
   input += synapse0x2044ab0();
   input += synapse0x2044660();
   input += synapse0x20446a0();
   input += synapse0x20446e0();
   input += synapse0x2044720();
   input += synapse0x2044d00();
   input += synapse0x2044d40();
   input += synapse0x2044d80();
   input += synapse0x2044dc0();
   input += synapse0x2044e00();
   input += synapse0x2044e40();
   input += synapse0x2044e80();
   input += synapse0x2044ec0();
   input += synapse0x2044f00();
   input += synapse0x2044f40();
   input += synapse0x2044f80();
   input += synapse0x2044fc0();
   input += synapse0x2045000();
   input += synapse0x2045040();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2043f20() {
   double input = input0x2043f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x2045080() {
   double input = 7.21206;
   input += synapse0x20452a0();
   input += synapse0x20452e0();
   input += synapse0x2045320();
   input += synapse0x2045360();
   input += synapse0x20453a0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x2045080() {
   double input = input0x2045080();
   return (input * 1)+0;
}

double NNfunction_ss_cRcR::synapse0x2011030() {
   return (neuron0x2011170()*-0.0396659);
}

double NNfunction_ss_cRcR::synapse0x2011070() {
   return (neuron0x20114b0()*-0.549077);
}

double NNfunction_ss_cRcR::synapse0x2016450() {
   return (neuron0x20117f0()*-0.100828);
}

double NNfunction_ss_cRcR::synapse0x2016490() {
   return (neuron0x2011b30()*0.502035);
}

double NNfunction_ss_cRcR::synapse0x20164d0() {
   return (neuron0x2011e70()*0.0257765);
}

double NNfunction_ss_cRcR::synapse0x2016510() {
   return (neuron0x20121b0()*-0.101547);
}

double NNfunction_ss_cRcR::synapse0x2016550() {
   return (neuron0x20124f0()*-0.145838);
}

double NNfunction_ss_cRcR::synapse0x2016590() {
   return (neuron0x2012830()*-0.0258737);
}

double NNfunction_ss_cRcR::synapse0x20165d0() {
   return (neuron0x2012b70()*-0.0421088);
}

double NNfunction_ss_cRcR::synapse0x2016610() {
   return (neuron0x2012eb0()*-0.667725);
}

double NNfunction_ss_cRcR::synapse0x2016650() {
   return (neuron0x20131f0()*0.234036);
}

double NNfunction_ss_cRcR::synapse0x2016690() {
   return (neuron0x2013530()*0.07156);
}

double NNfunction_ss_cRcR::synapse0x20166d0() {
   return (neuron0x2013870()*0.271238);
}

double NNfunction_ss_cRcR::synapse0x2016710() {
   return (neuron0x2013bb0()*-0.186095);
}

double NNfunction_ss_cRcR::synapse0x2016750() {
   return (neuron0x2013ef0()*-0.0176911);
}

double NNfunction_ss_cRcR::synapse0x2016790() {
   return (neuron0x2014230()*-0.254092);
}

double NNfunction_ss_cRcR::synapse0x2010fa0() {
   return (neuron0x2014570()*-0.0670809);
}

double NNfunction_ss_cRcR::synapse0x2010fe0() {
   return (neuron0x2014ad0()*0.229186);
}

double NNfunction_ss_cRcR::synapse0x1dcc360() {
   return (neuron0x2014cf0()*0.00907336);
}

double NNfunction_ss_cRcR::synapse0x1dcc3a0() {
   return (neuron0x2015030()*-0.0044867);
}

double NNfunction_ss_cRcR::synapse0x20169f0() {
   return (neuron0x2015370()*-0.0135024);
}

double NNfunction_ss_cRcR::synapse0x2016a30() {
   return (neuron0x20156b0()*-0.0180891);
}

double NNfunction_ss_cRcR::synapse0x2016a70() {
   return (neuron0x20159f0()*-0.0692145);
}

double NNfunction_ss_cRcR::synapse0x2016ab0() {
   return (neuron0x2015d30()*0.0217653);
}

double NNfunction_ss_cRcR::synapse0x2016e30() {
   return (neuron0x2011170()*-0.00158777);
}

double NNfunction_ss_cRcR::synapse0x2016e70() {
   return (neuron0x20114b0()*0.068934);
}

double NNfunction_ss_cRcR::synapse0x2016eb0() {
   return (neuron0x20117f0()*-0.0125767);
}

double NNfunction_ss_cRcR::synapse0x2016ef0() {
   return (neuron0x2011b30()*0.0483375);
}

double NNfunction_ss_cRcR::synapse0x2016f30() {
   return (neuron0x2011e70()*-0.245052);
}

double NNfunction_ss_cRcR::synapse0x2016f70() {
   return (neuron0x20121b0()*0.905772);
}

double NNfunction_ss_cRcR::synapse0x2016fb0() {
   return (neuron0x20124f0()*-0.154073);
}

double NNfunction_ss_cRcR::synapse0x2016ff0() {
   return (neuron0x2012830()*-0.0959866);
}

double NNfunction_ss_cRcR::synapse0x2017030() {
   return (neuron0x2012b70()*0.0132327);
}

double NNfunction_ss_cRcR::synapse0x20168e0() {
   return (neuron0x2012eb0()*0.0909827);
}

double NNfunction_ss_cRcR::synapse0x2016920() {
   return (neuron0x20131f0()*0.0559233);
}

double NNfunction_ss_cRcR::synapse0x2016960() {
   return (neuron0x2013530()*0.0376438);
}

double NNfunction_ss_cRcR::synapse0x20169a0() {
   return (neuron0x2013870()*0.0153544);
}

double NNfunction_ss_cRcR::synapse0x2017280() {
   return (neuron0x2013bb0()*0.0332535);
}

double NNfunction_ss_cRcR::synapse0x20172c0() {
   return (neuron0x2013ef0()*-0.0465595);
}

double NNfunction_ss_cRcR::synapse0x2017300() {
   return (neuron0x2014230()*-0.465714);
}

double NNfunction_ss_cRcR::synapse0x2016c80() {
   return (neuron0x2014570()*0.254483);
}

double NNfunction_ss_cRcR::synapse0x2016cc0() {
   return (neuron0x2014ad0()*0.0819956);
}

double NNfunction_ss_cRcR::synapse0x2017450() {
   return (neuron0x2014cf0()*0.070662);
}

double NNfunction_ss_cRcR::synapse0x2017490() {
   return (neuron0x2015030()*-0.0966541);
}

double NNfunction_ss_cRcR::synapse0x20174d0() {
   return (neuron0x2015370()*-0.0207213);
}

double NNfunction_ss_cRcR::synapse0x2017510() {
   return (neuron0x20156b0()*0.0241938);
}

double NNfunction_ss_cRcR::synapse0x2017550() {
   return (neuron0x20159f0()*0.0606593);
}

double NNfunction_ss_cRcR::synapse0x2017590() {
   return (neuron0x2015d30()*0.0283568);
}

double NNfunction_ss_cRcR::synapse0x2017910() {
   return (neuron0x2011170()*0.0194283);
}

double NNfunction_ss_cRcR::synapse0x2017950() {
   return (neuron0x20114b0()*0.0357755);
}

double NNfunction_ss_cRcR::synapse0x2017990() {
   return (neuron0x20117f0()*-0.0383596);
}

double NNfunction_ss_cRcR::synapse0x20179d0() {
   return (neuron0x2011b30()*-0.0618123);
}

double NNfunction_ss_cRcR::synapse0x2017a10() {
   return (neuron0x2011e70()*0.0851875);
}

double NNfunction_ss_cRcR::synapse0x2017a50() {
   return (neuron0x20121b0()*0.0678071);
}

double NNfunction_ss_cRcR::synapse0x2017a90() {
   return (neuron0x20124f0()*0.03435);
}

double NNfunction_ss_cRcR::synapse0x2017ad0() {
   return (neuron0x2012830()*-0.0318201);
}

double NNfunction_ss_cRcR::synapse0x2017b10() {
   return (neuron0x2012b70()*-0.0271057);
}

double NNfunction_ss_cRcR::synapse0x2017b50() {
   return (neuron0x2012eb0()*0.00266622);
}

double NNfunction_ss_cRcR::synapse0x2017b90() {
   return (neuron0x20131f0()*0.0356152);
}

double NNfunction_ss_cRcR::synapse0x2017bd0() {
   return (neuron0x2013530()*0.0228719);
}

double NNfunction_ss_cRcR::synapse0x2017c10() {
   return (neuron0x2013870()*0.0391437);
}

double NNfunction_ss_cRcR::synapse0x2017c50() {
   return (neuron0x2013bb0()*0.0369571);
}

double NNfunction_ss_cRcR::synapse0x2017c90() {
   return (neuron0x2013ef0()*0.0226639);
}

double NNfunction_ss_cRcR::synapse0x2017cd0() {
   return (neuron0x2014230()*3.8472);
}

double NNfunction_ss_cRcR::synapse0x2017760() {
   return (neuron0x2014570()*0.0265797);
}

double NNfunction_ss_cRcR::synapse0x20177a0() {
   return (neuron0x2014ad0()*0.065935);
}

double NNfunction_ss_cRcR::synapse0x1dcca00() {
   return (neuron0x2014cf0()*-0.00396256);
}

double NNfunction_ss_cRcR::synapse0x1dda2d0() {
   return (neuron0x2015030()*0.0166412);
}

double NNfunction_ss_cRcR::synapse0x1dda310() {
   return (neuron0x2015370()*-0.0120013);
}

double NNfunction_ss_cRcR::synapse0x2000200() {
   return (neuron0x20156b0()*-0.0204883);
}

double NNfunction_ss_cRcR::synapse0x2000240() {
   return (neuron0x20159f0()*-0.0407778);
}

double NNfunction_ss_cRcR::synapse0x2000280() {
   return (neuron0x2015d30()*-0.0215397);
}

double NNfunction_ss_cRcR::synapse0x1ddab50() {
   return (neuron0x2011170()*0.224585);
}

double NNfunction_ss_cRcR::synapse0x2017200() {
   return (neuron0x20114b0()*-0.0735709);
}

double NNfunction_ss_cRcR::synapse0x2017240() {
   return (neuron0x20117f0()*-0.0500466);
}

double NNfunction_ss_cRcR::synapse0x2017e20() {
   return (neuron0x2011b30()*0.136311);
}

double NNfunction_ss_cRcR::synapse0x2017e60() {
   return (neuron0x2011e70()*1.33374);
}

double NNfunction_ss_cRcR::synapse0x2017ea0() {
   return (neuron0x20121b0()*0.437044);
}

double NNfunction_ss_cRcR::synapse0x2017ee0() {
   return (neuron0x20124f0()*0.0286585);
}

double NNfunction_ss_cRcR::synapse0x2017f20() {
   return (neuron0x2012830()*-0.073038);
}

double NNfunction_ss_cRcR::synapse0x2017f60() {
   return (neuron0x2012b70()*0.0164331);
}

double NNfunction_ss_cRcR::synapse0x2017fa0() {
   return (neuron0x2012eb0()*0.120195);
}

double NNfunction_ss_cRcR::synapse0x2017fe0() {
   return (neuron0x20131f0()*-0.00998576);
}

double NNfunction_ss_cRcR::synapse0x2018020() {
   return (neuron0x2013530()*0.0672744);
}

double NNfunction_ss_cRcR::synapse0x2018060() {
   return (neuron0x2013870()*0.0119985);
}

double NNfunction_ss_cRcR::synapse0x20180a0() {
   return (neuron0x2013bb0()*-0.0151479);
}

double NNfunction_ss_cRcR::synapse0x20180e0() {
   return (neuron0x2013ef0()*0.0127504);
}

double NNfunction_ss_cRcR::synapse0x2018120() {
   return (neuron0x2014230()*-1.67801);
}

double NNfunction_ss_cRcR::synapse0x20110b0() {
   return (neuron0x2014570()*0.121539);
}

double NNfunction_ss_cRcR::synapse0x20110f0() {
   return (neuron0x2014ad0()*0.129889);
}

double NNfunction_ss_cRcR::synapse0x2011130() {
   return (neuron0x2014cf0()*-0.0477094);
}

double NNfunction_ss_cRcR::synapse0x2018270() {
   return (neuron0x2015030()*-0.169371);
}

double NNfunction_ss_cRcR::synapse0x20182b0() {
   return (neuron0x2015370()*0.00503872);
}

double NNfunction_ss_cRcR::synapse0x20182f0() {
   return (neuron0x20156b0()*-0.0831063);
}

double NNfunction_ss_cRcR::synapse0x2018330() {
   return (neuron0x20159f0()*-0.0372386);
}

double NNfunction_ss_cRcR::synapse0x2018370() {
   return (neuron0x2015d30()*-0.0583126);
}

double NNfunction_ss_cRcR::synapse0x20186f0() {
   return (neuron0x2011170()*0.0380466);
}

double NNfunction_ss_cRcR::synapse0x2018730() {
   return (neuron0x20114b0()*0.596202);
}

double NNfunction_ss_cRcR::synapse0x2018770() {
   return (neuron0x20117f0()*0.018185);
}

double NNfunction_ss_cRcR::synapse0x20187b0() {
   return (neuron0x2011b30()*0.986276);
}

double NNfunction_ss_cRcR::synapse0x20187f0() {
   return (neuron0x2011e70()*-0.0372614);
}

double NNfunction_ss_cRcR::synapse0x2018830() {
   return (neuron0x20121b0()*-0.0460325);
}

double NNfunction_ss_cRcR::synapse0x2018870() {
   return (neuron0x20124f0()*-0.0849584);
}

double NNfunction_ss_cRcR::synapse0x20188b0() {
   return (neuron0x2012830()*-0.0613224);
}

double NNfunction_ss_cRcR::synapse0x20188f0() {
   return (neuron0x2012b70()*0.0327914);
}

double NNfunction_ss_cRcR::synapse0x2018930() {
   return (neuron0x2012eb0()*0.124302);
}

double NNfunction_ss_cRcR::synapse0x2018970() {
   return (neuron0x20131f0()*0.261914);
}

double NNfunction_ss_cRcR::synapse0x20189b0() {
   return (neuron0x2013530()*0.204622);
}

double NNfunction_ss_cRcR::synapse0x20189f0() {
   return (neuron0x2013870()*-0.192435);
}

double NNfunction_ss_cRcR::synapse0x2018a30() {
   return (neuron0x2013bb0()*-0.101465);
}

double NNfunction_ss_cRcR::synapse0x2018a70() {
   return (neuron0x2013ef0()*-0.121048);
}

double NNfunction_ss_cRcR::synapse0x2018ab0() {
   return (neuron0x2014230()*0.126662);
}

double NNfunction_ss_cRcR::synapse0x2018540() {
   return (neuron0x2014570()*-0.0269784);
}

double NNfunction_ss_cRcR::synapse0x2018580() {
   return (neuron0x2014ad0()*-0.110301);
}

double NNfunction_ss_cRcR::synapse0x2018c00() {
   return (neuron0x2014cf0()*0.159976);
}

double NNfunction_ss_cRcR::synapse0x2018c40() {
   return (neuron0x2015030()*0.3002);
}

double NNfunction_ss_cRcR::synapse0x2018c80() {
   return (neuron0x2015370()*0.0207518);
}

double NNfunction_ss_cRcR::synapse0x2018cc0() {
   return (neuron0x20156b0()*-0.00130703);
}

double NNfunction_ss_cRcR::synapse0x2018d00() {
   return (neuron0x20159f0()*-0.059918);
}

double NNfunction_ss_cRcR::synapse0x2018d40() {
   return (neuron0x2015d30()*0.0222173);
}

double NNfunction_ss_cRcR::synapse0x20190c0() {
   return (neuron0x2011170()*0.150923);
}

double NNfunction_ss_cRcR::synapse0x2019100() {
   return (neuron0x20114b0()*0.432031);
}

double NNfunction_ss_cRcR::synapse0x2019140() {
   return (neuron0x20117f0()*-0.811483);
}

double NNfunction_ss_cRcR::synapse0x2019180() {
   return (neuron0x2011b30()*-0.241238);
}

double NNfunction_ss_cRcR::synapse0x20191c0() {
   return (neuron0x2011e70()*-0.498133);
}

double NNfunction_ss_cRcR::synapse0x2019200() {
   return (neuron0x20121b0()*0.129799);
}

double NNfunction_ss_cRcR::synapse0x2019240() {
   return (neuron0x20124f0()*-0.308284);
}

double NNfunction_ss_cRcR::synapse0x2019280() {
   return (neuron0x2012830()*-0.272076);
}

double NNfunction_ss_cRcR::synapse0x20192c0() {
   return (neuron0x2012b70()*1.44829);
}

double NNfunction_ss_cRcR::synapse0x1dda620() {
   return (neuron0x2012eb0()*-0.73648);
}

double NNfunction_ss_cRcR::synapse0x1dda660() {
   return (neuron0x20131f0()*0.818685);
}

double NNfunction_ss_cRcR::synapse0x1dda6a0() {
   return (neuron0x2013530()*0.15767);
}

double NNfunction_ss_cRcR::synapse0x1dda6e0() {
   return (neuron0x2013870()*-0.348665);
}

double NNfunction_ss_cRcR::synapse0x1dda720() {
   return (neuron0x2013bb0()*-0.894223);
}

double NNfunction_ss_cRcR::synapse0x1dda760() {
   return (neuron0x2013ef0()*-0.118519);
}

double NNfunction_ss_cRcR::synapse0x1dda7a0() {
   return (neuron0x2014230()*0.23432);
}

double NNfunction_ss_cRcR::synapse0x2018f10() {
   return (neuron0x2014570()*0.263289);
}

double NNfunction_ss_cRcR::synapse0x2018f50() {
   return (neuron0x2014ad0()*0.990529);
}

double NNfunction_ss_cRcR::synapse0x1dda8f0() {
   return (neuron0x2014cf0()*-0.817085);
}

double NNfunction_ss_cRcR::synapse0x1dda930() {
   return (neuron0x2015030()*-0.467572);
}

double NNfunction_ss_cRcR::synapse0x1dda970() {
   return (neuron0x2015370()*0.426163);
}

double NNfunction_ss_cRcR::synapse0x1dda9b0() {
   return (neuron0x20156b0()*-0.213661);
}

double NNfunction_ss_cRcR::synapse0x1dda9f0() {
   return (neuron0x20159f0()*-0.0225389);
}

double NNfunction_ss_cRcR::synapse0x2019b10() {
   return (neuron0x2015d30()*-0.372841);
}

double NNfunction_ss_cRcR::synapse0x2019e90() {
   return (neuron0x2011170()*0.154874);
}

double NNfunction_ss_cRcR::synapse0x2019ed0() {
   return (neuron0x20114b0()*0.627734);
}

double NNfunction_ss_cRcR::synapse0x2019f10() {
   return (neuron0x20117f0()*0.539715);
}

double NNfunction_ss_cRcR::synapse0x2019f50() {
   return (neuron0x2011b30()*-0.45589);
}

double NNfunction_ss_cRcR::synapse0x2019f90() {
   return (neuron0x2011e70()*0.0796515);
}

double NNfunction_ss_cRcR::synapse0x2019fd0() {
   return (neuron0x20121b0()*0.379554);
}

double NNfunction_ss_cRcR::synapse0x201a010() {
   return (neuron0x20124f0()*0.22672);
}

double NNfunction_ss_cRcR::synapse0x201a050() {
   return (neuron0x2012830()*0.820253);
}

double NNfunction_ss_cRcR::synapse0x201a090() {
   return (neuron0x2012b70()*-0.243749);
}

double NNfunction_ss_cRcR::synapse0x201a0d0() {
   return (neuron0x2012eb0()*0.179315);
}

double NNfunction_ss_cRcR::synapse0x201a110() {
   return (neuron0x20131f0()*0.929924);
}

double NNfunction_ss_cRcR::synapse0x201a150() {
   return (neuron0x2013530()*-0.610606);
}

double NNfunction_ss_cRcR::synapse0x201a190() {
   return (neuron0x2013870()*-0.219931);
}

double NNfunction_ss_cRcR::synapse0x201a1d0() {
   return (neuron0x2013bb0()*-0.572793);
}

double NNfunction_ss_cRcR::synapse0x201a210() {
   return (neuron0x2013ef0()*-0.204969);
}

double NNfunction_ss_cRcR::synapse0x201a250() {
   return (neuron0x2014230()*0.915411);
}

double NNfunction_ss_cRcR::synapse0x2019ce0() {
   return (neuron0x2014570()*0.830852);
}

double NNfunction_ss_cRcR::synapse0x2019d20() {
   return (neuron0x2014ad0()*0.0977974);
}

double NNfunction_ss_cRcR::synapse0x201a3a0() {
   return (neuron0x2014cf0()*-0.0127419);
}

double NNfunction_ss_cRcR::synapse0x201a3e0() {
   return (neuron0x2015030()*-0.203884);
}

double NNfunction_ss_cRcR::synapse0x201a420() {
   return (neuron0x2015370()*0.552568);
}

double NNfunction_ss_cRcR::synapse0x201a460() {
   return (neuron0x20156b0()*0.388441);
}

double NNfunction_ss_cRcR::synapse0x201a4a0() {
   return (neuron0x20159f0()*-0.188083);
}

double NNfunction_ss_cRcR::synapse0x201a4e0() {
   return (neuron0x2015d30()*0.16525);
}

double NNfunction_ss_cRcR::synapse0x201a860() {
   return (neuron0x2011170()*0.00260367);
}

double NNfunction_ss_cRcR::synapse0x201a8a0() {
   return (neuron0x20114b0()*0.0632907);
}

double NNfunction_ss_cRcR::synapse0x201a8e0() {
   return (neuron0x20117f0()*0.00341426);
}

double NNfunction_ss_cRcR::synapse0x201a920() {
   return (neuron0x2011b30()*2.47745);
}

double NNfunction_ss_cRcR::synapse0x201a960() {
   return (neuron0x2011e70()*0.0593216);
}

double NNfunction_ss_cRcR::synapse0x201a9a0() {
   return (neuron0x20121b0()*0.0498872);
}

double NNfunction_ss_cRcR::synapse0x201a9e0() {
   return (neuron0x20124f0()*0.0283445);
}

double NNfunction_ss_cRcR::synapse0x201aa20() {
   return (neuron0x2012830()*0.050905);
}

double NNfunction_ss_cRcR::synapse0x201aa60() {
   return (neuron0x2012b70()*0.0402818);
}

double NNfunction_ss_cRcR::synapse0x201aaa0() {
   return (neuron0x2012eb0()*0.00526899);
}

double NNfunction_ss_cRcR::synapse0x201aae0() {
   return (neuron0x20131f0()*-0.0369529);
}

double NNfunction_ss_cRcR::synapse0x201ab20() {
   return (neuron0x2013530()*-0.031712);
}

double NNfunction_ss_cRcR::synapse0x201ab60() {
   return (neuron0x2013870()*-0.0160606);
}

double NNfunction_ss_cRcR::synapse0x201aba0() {
   return (neuron0x2013bb0()*0.0398984);
}

double NNfunction_ss_cRcR::synapse0x201abe0() {
   return (neuron0x2013ef0()*0.00485754);
}

double NNfunction_ss_cRcR::synapse0x201ac20() {
   return (neuron0x2014230()*0.547881);
}

double NNfunction_ss_cRcR::synapse0x201a6b0() {
   return (neuron0x2014570()*0.0407962);
}

double NNfunction_ss_cRcR::synapse0x201a6f0() {
   return (neuron0x2014ad0()*-0.0489907);
}

double NNfunction_ss_cRcR::synapse0x201ad70() {
   return (neuron0x2014cf0()*-0.0195138);
}

double NNfunction_ss_cRcR::synapse0x201adb0() {
   return (neuron0x2015030()*-0.00196596);
}

double NNfunction_ss_cRcR::synapse0x201adf0() {
   return (neuron0x2015370()*0.00331389);
}

double NNfunction_ss_cRcR::synapse0x201ae30() {
   return (neuron0x20156b0()*0.0128547);
}

double NNfunction_ss_cRcR::synapse0x201ae70() {
   return (neuron0x20159f0()*-0.0157161);
}

double NNfunction_ss_cRcR::synapse0x201aeb0() {
   return (neuron0x2015d30()*0.000398984);
}

double NNfunction_ss_cRcR::synapse0x20149c0() {
   return (neuron0x2011170()*0.0380263);
}

double NNfunction_ss_cRcR::synapse0x2014a00() {
   return (neuron0x20114b0()*1.097);
}

double NNfunction_ss_cRcR::synapse0x2014a40() {
   return (neuron0x20117f0()*-0.114633);
}

double NNfunction_ss_cRcR::synapse0x2014a80() {
   return (neuron0x2011b30()*0.478939);
}

double NNfunction_ss_cRcR::synapse0x201b440() {
   return (neuron0x2011e70()*0.243542);
}

double NNfunction_ss_cRcR::synapse0x201b480() {
   return (neuron0x20121b0()*0.794562);
}

double NNfunction_ss_cRcR::synapse0x201b4c0() {
   return (neuron0x20124f0()*0.461145);
}

double NNfunction_ss_cRcR::synapse0x201b500() {
   return (neuron0x2012830()*-0.181564);
}

double NNfunction_ss_cRcR::synapse0x201b540() {
   return (neuron0x2012b70()*1.41113);
}

double NNfunction_ss_cRcR::synapse0x201b580() {
   return (neuron0x2012eb0()*0.32415);
}

double NNfunction_ss_cRcR::synapse0x201b5c0() {
   return (neuron0x20131f0()*0.904143);
}

double NNfunction_ss_cRcR::synapse0x201b600() {
   return (neuron0x2013530()*0.0908881);
}

double NNfunction_ss_cRcR::synapse0x201b640() {
   return (neuron0x2013870()*0.440773);
}

double NNfunction_ss_cRcR::synapse0x201b680() {
   return (neuron0x2013bb0()*0.20684);
}

double NNfunction_ss_cRcR::synapse0x201b6c0() {
   return (neuron0x2013ef0()*0.319353);
}

double NNfunction_ss_cRcR::synapse0x201b700() {
   return (neuron0x2014230()*-1.68541);
}

double NNfunction_ss_cRcR::synapse0x201b080() {
   return (neuron0x2014570()*0.506537);
}

double NNfunction_ss_cRcR::synapse0x201b0c0() {
   return (neuron0x2014ad0()*0.241063);
}

double NNfunction_ss_cRcR::synapse0x201b850() {
   return (neuron0x2014cf0()*-0.427531);
}

double NNfunction_ss_cRcR::synapse0x201b890() {
   return (neuron0x2015030()*-0.442385);
}

double NNfunction_ss_cRcR::synapse0x201b8d0() {
   return (neuron0x2015370()*-0.282626);
}

double NNfunction_ss_cRcR::synapse0x201b910() {
   return (neuron0x20156b0()*0.104063);
}

double NNfunction_ss_cRcR::synapse0x201b950() {
   return (neuron0x20159f0()*0.0790141);
}

double NNfunction_ss_cRcR::synapse0x201b990() {
   return (neuron0x2015d30()*-0.0327315);
}

double NNfunction_ss_cRcR::synapse0x201bd10() {
   return (neuron0x2011170()*-0.203618);
}

double NNfunction_ss_cRcR::synapse0x201bd50() {
   return (neuron0x20114b0()*-0.157003);
}

double NNfunction_ss_cRcR::synapse0x201bd90() {
   return (neuron0x20117f0()*-0.950206);
}

double NNfunction_ss_cRcR::synapse0x201bdd0() {
   return (neuron0x2011b30()*0.142486);
}

double NNfunction_ss_cRcR::synapse0x201be10() {
   return (neuron0x2011e70()*0.134808);
}

double NNfunction_ss_cRcR::synapse0x201be50() {
   return (neuron0x20121b0()*0.194529);
}

double NNfunction_ss_cRcR::synapse0x201be90() {
   return (neuron0x20124f0()*0.0150781);
}

double NNfunction_ss_cRcR::synapse0x201bed0() {
   return (neuron0x2012830()*-0.409908);
}

double NNfunction_ss_cRcR::synapse0x201bf10() {
   return (neuron0x2012b70()*0.37035);
}

double NNfunction_ss_cRcR::synapse0x201bf50() {
   return (neuron0x2012eb0()*0.362424);
}

double NNfunction_ss_cRcR::synapse0x201bf90() {
   return (neuron0x20131f0()*0.232237);
}

double NNfunction_ss_cRcR::synapse0x201bfd0() {
   return (neuron0x2013530()*-2.14408);
}

double NNfunction_ss_cRcR::synapse0x201c010() {
   return (neuron0x2013870()*0.0689313);
}

double NNfunction_ss_cRcR::synapse0x201c050() {
   return (neuron0x2013bb0()*0.000243063);
}

double NNfunction_ss_cRcR::synapse0x201c090() {
   return (neuron0x2013ef0()*-0.158094);
}

double NNfunction_ss_cRcR::synapse0x201c0d0() {
   return (neuron0x2014230()*0.451579);
}

double NNfunction_ss_cRcR::synapse0x201bb60() {
   return (neuron0x2014570()*-0.406074);
}

double NNfunction_ss_cRcR::synapse0x201bba0() {
   return (neuron0x2014ad0()*-0.0139076);
}

double NNfunction_ss_cRcR::synapse0x201c220() {
   return (neuron0x2014cf0()*0.114675);
}

double NNfunction_ss_cRcR::synapse0x201c260() {
   return (neuron0x2015030()*-0.00978427);
}

double NNfunction_ss_cRcR::synapse0x201c2a0() {
   return (neuron0x2015370()*-0.499272);
}

double NNfunction_ss_cRcR::synapse0x201c2e0() {
   return (neuron0x20156b0()*-0.44007);
}

double NNfunction_ss_cRcR::synapse0x201c320() {
   return (neuron0x20159f0()*-0.0840881);
}

double NNfunction_ss_cRcR::synapse0x201c360() {
   return (neuron0x2015d30()*0.388541);
}

double NNfunction_ss_cRcR::synapse0x201c6e0() {
   return (neuron0x2011170()*-0.00711865);
}

double NNfunction_ss_cRcR::synapse0x201c720() {
   return (neuron0x20114b0()*-0.07546);
}

double NNfunction_ss_cRcR::synapse0x201c760() {
   return (neuron0x20117f0()*0.0141946);
}

double NNfunction_ss_cRcR::synapse0x201c7a0() {
   return (neuron0x2011b30()*-3.02753);
}

double NNfunction_ss_cRcR::synapse0x201c7e0() {
   return (neuron0x2011e70()*-0.0304743);
}

double NNfunction_ss_cRcR::synapse0x201c820() {
   return (neuron0x20121b0()*-0.0121392);
}

double NNfunction_ss_cRcR::synapse0x201c860() {
   return (neuron0x20124f0()*-0.0282807);
}

double NNfunction_ss_cRcR::synapse0x201c8a0() {
   return (neuron0x2012830()*-0.03096);
}

double NNfunction_ss_cRcR::synapse0x201c8e0() {
   return (neuron0x2012b70()*-0.0251829);
}

double NNfunction_ss_cRcR::synapse0x201c920() {
   return (neuron0x2012eb0()*0.0228327);
}

double NNfunction_ss_cRcR::synapse0x201c960() {
   return (neuron0x20131f0()*0.0483244);
}

double NNfunction_ss_cRcR::synapse0x201c9a0() {
   return (neuron0x2013530()*0.0209783);
}

double NNfunction_ss_cRcR::synapse0x201c9e0() {
   return (neuron0x2013870()*0.0662554);
}

double NNfunction_ss_cRcR::synapse0x201ca20() {
   return (neuron0x2013bb0()*-0.0160306);
}

double NNfunction_ss_cRcR::synapse0x201ca60() {
   return (neuron0x2013ef0()*-0.00711336);
}

double NNfunction_ss_cRcR::synapse0x201caa0() {
   return (neuron0x2014230()*-0.0884604);
}

double NNfunction_ss_cRcR::synapse0x201c530() {
   return (neuron0x2014570()*-0.00835224);
}

double NNfunction_ss_cRcR::synapse0x201c570() {
   return (neuron0x2014ad0()*0.0213539);
}

double NNfunction_ss_cRcR::synapse0x2019300() {
   return (neuron0x2014cf0()*-0.00723299);
}

double NNfunction_ss_cRcR::synapse0x2019340() {
   return (neuron0x2015030()*0.054924);
}

double NNfunction_ss_cRcR::synapse0x2019380() {
   return (neuron0x2015370()*-0.0177176);
}

double NNfunction_ss_cRcR::synapse0x20193c0() {
   return (neuron0x20156b0()*0.0014423);
}

double NNfunction_ss_cRcR::synapse0x2019400() {
   return (neuron0x20159f0()*0.0198963);
}

double NNfunction_ss_cRcR::synapse0x2019440() {
   return (neuron0x2015d30()*-0.023593);
}

double NNfunction_ss_cRcR::synapse0x20197c0() {
   return (neuron0x2011170()*-0.0189059);
}

double NNfunction_ss_cRcR::synapse0x2019800() {
   return (neuron0x20114b0()*0.0339196);
}

double NNfunction_ss_cRcR::synapse0x2019840() {
   return (neuron0x20117f0()*0.0291978);
}

double NNfunction_ss_cRcR::synapse0x2019880() {
   return (neuron0x2011b30()*0.0531099);
}

double NNfunction_ss_cRcR::synapse0x20198c0() {
   return (neuron0x2011e70()*0.146752);
}

double NNfunction_ss_cRcR::synapse0x2019900() {
   return (neuron0x20121b0()*-0.0910508);
}

double NNfunction_ss_cRcR::synapse0x2019940() {
   return (neuron0x20124f0()*-0.185998);
}

double NNfunction_ss_cRcR::synapse0x2019980() {
   return (neuron0x2012830()*0.903817);
}

double NNfunction_ss_cRcR::synapse0x20199c0() {
   return (neuron0x2012b70()*0.0979306);
}

double NNfunction_ss_cRcR::synapse0x2019a00() {
   return (neuron0x2012eb0()*0.0497642);
}

double NNfunction_ss_cRcR::synapse0x2019a40() {
   return (neuron0x20131f0()*-0.00850829);
}

double NNfunction_ss_cRcR::synapse0x2019a80() {
   return (neuron0x2013530()*0.13813);
}

double NNfunction_ss_cRcR::synapse0x2019ac0() {
   return (neuron0x2013870()*0.114231);
}

double NNfunction_ss_cRcR::synapse0x201dc00() {
   return (neuron0x2013bb0()*0.0278832);
}

double NNfunction_ss_cRcR::synapse0x201dc40() {
   return (neuron0x2013ef0()*-0.0603548);
}

double NNfunction_ss_cRcR::synapse0x201dc80() {
   return (neuron0x2014230()*-0.121569);
}

double NNfunction_ss_cRcR::synapse0x2019610() {
   return (neuron0x2014570()*0.389173);
}

double NNfunction_ss_cRcR::synapse0x2019650() {
   return (neuron0x2014ad0()*0.113165);
}

double NNfunction_ss_cRcR::synapse0x201ddd0() {
   return (neuron0x2014cf0()*0.123005);
}

double NNfunction_ss_cRcR::synapse0x201de10() {
   return (neuron0x2015030()*-0.0207936);
}

double NNfunction_ss_cRcR::synapse0x201de50() {
   return (neuron0x2015370()*-0.028556);
}

double NNfunction_ss_cRcR::synapse0x201de90() {
   return (neuron0x20156b0()*-0.00517961);
}

double NNfunction_ss_cRcR::synapse0x201ded0() {
   return (neuron0x20159f0()*-0.0218071);
}

double NNfunction_ss_cRcR::synapse0x201df10() {
   return (neuron0x2015d30()*0.111129);
}

double NNfunction_ss_cRcR::synapse0x201e290() {
   return (neuron0x2011170()*0.141636);
}

double NNfunction_ss_cRcR::synapse0x201e2d0() {
   return (neuron0x20114b0()*1.76317);
}

double NNfunction_ss_cRcR::synapse0x201e310() {
   return (neuron0x20117f0()*-0.223342);
}

double NNfunction_ss_cRcR::synapse0x201e350() {
   return (neuron0x2011b30()*-0.265858);
}

double NNfunction_ss_cRcR::synapse0x201e390() {
   return (neuron0x2011e70()*0.437216);
}

double NNfunction_ss_cRcR::synapse0x201e3d0() {
   return (neuron0x20121b0()*-1.13203);
}

double NNfunction_ss_cRcR::synapse0x201e410() {
   return (neuron0x20124f0()*-0.07183);
}

double NNfunction_ss_cRcR::synapse0x201e450() {
   return (neuron0x2012830()*-0.497075);
}

double NNfunction_ss_cRcR::synapse0x201e490() {
   return (neuron0x2012b70()*-0.414342);
}

double NNfunction_ss_cRcR::synapse0x201e4d0() {
   return (neuron0x2012eb0()*-0.774529);
}

double NNfunction_ss_cRcR::synapse0x201e510() {
   return (neuron0x20131f0()*-0.454074);
}

double NNfunction_ss_cRcR::synapse0x201e550() {
   return (neuron0x2013530()*0.478068);
}

double NNfunction_ss_cRcR::synapse0x201e590() {
   return (neuron0x2013870()*0.843991);
}

double NNfunction_ss_cRcR::synapse0x201e5d0() {
   return (neuron0x2013bb0()*0.160643);
}

double NNfunction_ss_cRcR::synapse0x201e610() {
   return (neuron0x2013ef0()*-0.723342);
}

double NNfunction_ss_cRcR::synapse0x201e650() {
   return (neuron0x2014230()*0.0594668);
}

double NNfunction_ss_cRcR::synapse0x201e0e0() {
   return (neuron0x2014570()*-0.147758);
}

double NNfunction_ss_cRcR::synapse0x201e120() {
   return (neuron0x2014ad0()*-0.446435);
}

double NNfunction_ss_cRcR::synapse0x201e7a0() {
   return (neuron0x2014cf0()*-0.200329);
}

double NNfunction_ss_cRcR::synapse0x201e7e0() {
   return (neuron0x2015030()*0.427316);
}

double NNfunction_ss_cRcR::synapse0x201e820() {
   return (neuron0x2015370()*0.691434);
}

double NNfunction_ss_cRcR::synapse0x201e860() {
   return (neuron0x20156b0()*0.349409);
}

double NNfunction_ss_cRcR::synapse0x201e8a0() {
   return (neuron0x20159f0()*-0.27617);
}

double NNfunction_ss_cRcR::synapse0x201e8e0() {
   return (neuron0x2015d30()*-0.644826);
}

double NNfunction_ss_cRcR::synapse0x201ec60() {
   return (neuron0x2011170()*-0.00642245);
}

double NNfunction_ss_cRcR::synapse0x201eca0() {
   return (neuron0x20114b0()*0.0274298);
}

double NNfunction_ss_cRcR::synapse0x201ece0() {
   return (neuron0x20117f0()*0.00381725);
}

double NNfunction_ss_cRcR::synapse0x201ed20() {
   return (neuron0x2011b30()*0.0797162);
}

double NNfunction_ss_cRcR::synapse0x201ed60() {
   return (neuron0x2011e70()*0.00890458);
}

double NNfunction_ss_cRcR::synapse0x201eda0() {
   return (neuron0x20121b0()*-0.0756929);
}

double NNfunction_ss_cRcR::synapse0x201ede0() {
   return (neuron0x20124f0()*0.0123174);
}

double NNfunction_ss_cRcR::synapse0x201ee20() {
   return (neuron0x2012830()*-0.0203462);
}

double NNfunction_ss_cRcR::synapse0x201ee60() {
   return (neuron0x2012b70()*-0.0225883);
}

double NNfunction_ss_cRcR::synapse0x201eea0() {
   return (neuron0x2012eb0()*-0.00853654);
}

double NNfunction_ss_cRcR::synapse0x201eee0() {
   return (neuron0x20131f0()*0.015661);
}

double NNfunction_ss_cRcR::synapse0x201ef20() {
   return (neuron0x2013530()*0.050059);
}

double NNfunction_ss_cRcR::synapse0x201ef60() {
   return (neuron0x2013870()*0.068273);
}

double NNfunction_ss_cRcR::synapse0x201efa0() {
   return (neuron0x2013bb0()*-0.00731117);
}

double NNfunction_ss_cRcR::synapse0x201efe0() {
   return (neuron0x2013ef0()*0.0195761);
}

double NNfunction_ss_cRcR::synapse0x201f020() {
   return (neuron0x2014230()*-0.845272);
}

double NNfunction_ss_cRcR::synapse0x201eab0() {
   return (neuron0x2014570()*-0.0460613);
}

double NNfunction_ss_cRcR::synapse0x201eaf0() {
   return (neuron0x2014ad0()*0.0312514);
}

double NNfunction_ss_cRcR::synapse0x201f170() {
   return (neuron0x2014cf0()*0.0113309);
}

double NNfunction_ss_cRcR::synapse0x201f1b0() {
   return (neuron0x2015030()*0.00300248);
}

double NNfunction_ss_cRcR::synapse0x201f1f0() {
   return (neuron0x2015370()*-0.0146092);
}

double NNfunction_ss_cRcR::synapse0x201f230() {
   return (neuron0x20156b0()*-0.00305687);
}

double NNfunction_ss_cRcR::synapse0x201f270() {
   return (neuron0x20159f0()*-0.000695679);
}

double NNfunction_ss_cRcR::synapse0x201f2b0() {
   return (neuron0x2015d30()*-0.00851024);
}

double NNfunction_ss_cRcR::synapse0x201f630() {
   return (neuron0x2011170()*0.219643);
}

double NNfunction_ss_cRcR::synapse0x201f670() {
   return (neuron0x20114b0()*-1.56496);
}

double NNfunction_ss_cRcR::synapse0x201f6b0() {
   return (neuron0x20117f0()*0.106934);
}

double NNfunction_ss_cRcR::synapse0x201f6f0() {
   return (neuron0x2011b30()*0.918635);
}

double NNfunction_ss_cRcR::synapse0x201f730() {
   return (neuron0x2011e70()*1.63637);
}

double NNfunction_ss_cRcR::synapse0x201f770() {
   return (neuron0x20121b0()*-0.168224);
}

double NNfunction_ss_cRcR::synapse0x201f7b0() {
   return (neuron0x20124f0()*1.0296);
}

double NNfunction_ss_cRcR::synapse0x201f7f0() {
   return (neuron0x2012830()*0.623363);
}

double NNfunction_ss_cRcR::synapse0x201f830() {
   return (neuron0x2012b70()*1.16538);
}

double NNfunction_ss_cRcR::synapse0x201f870() {
   return (neuron0x2012eb0()*-0.44444);
}

double NNfunction_ss_cRcR::synapse0x201f8b0() {
   return (neuron0x20131f0()*-0.638829);
}

double NNfunction_ss_cRcR::synapse0x201f8f0() {
   return (neuron0x2013530()*-0.784903);
}

double NNfunction_ss_cRcR::synapse0x201f930() {
   return (neuron0x2013870()*-0.0720184);
}

double NNfunction_ss_cRcR::synapse0x201f970() {
   return (neuron0x2013bb0()*-1.25405);
}

double NNfunction_ss_cRcR::synapse0x201f9b0() {
   return (neuron0x2013ef0()*0.961248);
}

double NNfunction_ss_cRcR::synapse0x201f9f0() {
   return (neuron0x2014230()*-1.70884);
}

double NNfunction_ss_cRcR::synapse0x201f480() {
   return (neuron0x2014570()*0.543302);
}

double NNfunction_ss_cRcR::synapse0x201f4c0() {
   return (neuron0x2014ad0()*-1.27731);
}

double NNfunction_ss_cRcR::synapse0x201fb40() {
   return (neuron0x2014cf0()*0.977288);
}

double NNfunction_ss_cRcR::synapse0x201fb80() {
   return (neuron0x2015030()*0.450785);
}

double NNfunction_ss_cRcR::synapse0x201fbc0() {
   return (neuron0x2015370()*-0.227916);
}

double NNfunction_ss_cRcR::synapse0x201fc00() {
   return (neuron0x20156b0()*-1.75449);
}

double NNfunction_ss_cRcR::synapse0x201fc40() {
   return (neuron0x20159f0()*1.90889);
}

double NNfunction_ss_cRcR::synapse0x201fc80() {
   return (neuron0x2015d30()*0.369632);
}

double NNfunction_ss_cRcR::synapse0x2020000() {
   return (neuron0x2011170()*0.105536);
}

double NNfunction_ss_cRcR::synapse0x2011390() {
   return (neuron0x20114b0()*0.0988977);
}

double NNfunction_ss_cRcR::synapse0x20113d0() {
   return (neuron0x20117f0()*-0.0575782);
}

double NNfunction_ss_cRcR::synapse0x20116d0() {
   return (neuron0x2011b30()*0.129045);
}

double NNfunction_ss_cRcR::synapse0x2011710() {
   return (neuron0x2011e70()*-0.0608231);
}

double NNfunction_ss_cRcR::synapse0x2011a10() {
   return (neuron0x20121b0()*-0.0225795);
}

double NNfunction_ss_cRcR::synapse0x2011a50() {
   return (neuron0x20124f0()*-1.77747);
}

double NNfunction_ss_cRcR::synapse0x2011d50() {
   return (neuron0x2012830()*0.160214);
}

double NNfunction_ss_cRcR::synapse0x2011d90() {
   return (neuron0x2012b70()*-0.397006);
}

double NNfunction_ss_cRcR::synapse0x2012090() {
   return (neuron0x2012eb0()*-0.328445);
}

double NNfunction_ss_cRcR::synapse0x20120d0() {
   return (neuron0x20131f0()*-0.0580157);
}

double NNfunction_ss_cRcR::synapse0x20123d0() {
   return (neuron0x2013530()*0.245639);
}

double NNfunction_ss_cRcR::synapse0x2012410() {
   return (neuron0x2013870()*0.262867);
}

double NNfunction_ss_cRcR::synapse0x2012710() {
   return (neuron0x2013bb0()*-0.297638);
}

double NNfunction_ss_cRcR::synapse0x2012750() {
   return (neuron0x2013ef0()*0.0234895);
}

double NNfunction_ss_cRcR::synapse0x2012a50() {
   return (neuron0x2014230()*0.715287);
}

double NNfunction_ss_cRcR::synapse0x2012a90() {
   return (neuron0x2014570()*-1.21916);
}

double NNfunction_ss_cRcR::synapse0x2012d90() {
   return (neuron0x2014ad0()*0.0412613);
}

double NNfunction_ss_cRcR::synapse0x2012dd0() {
   return (neuron0x2014cf0()*-0.00849286);
}

double NNfunction_ss_cRcR::synapse0x20130d0() {
   return (neuron0x2015030()*0.114124);
}

double NNfunction_ss_cRcR::synapse0x2013110() {
   return (neuron0x2015370()*-0.0339186);
}

double NNfunction_ss_cRcR::synapse0x2013410() {
   return (neuron0x20156b0()*-0.197967);
}

double NNfunction_ss_cRcR::synapse0x2013450() {
   return (neuron0x20159f0()*-0.132829);
}

double NNfunction_ss_cRcR::synapse0x2013750() {
   return (neuron0x2015d30()*0.0291847);
}

double NNfunction_ss_cRcR::synapse0x2013790() {
   return (neuron0x2011170()*-0.694791);
}

double NNfunction_ss_cRcR::synapse0x2014450() {
   return (neuron0x20114b0()*-0.235724);
}

double NNfunction_ss_cRcR::synapse0x2014490() {
   return (neuron0x20117f0()*-0.658117);
}

double NNfunction_ss_cRcR::synapse0x201fe50() {
   return (neuron0x2011b30()*-0.124544);
}

double NNfunction_ss_cRcR::synapse0x201fe90() {
   return (neuron0x2011e70()*0.16342);
}

double NNfunction_ss_cRcR::synapse0x2014790() {
   return (neuron0x20121b0()*0.306951);
}

double NNfunction_ss_cRcR::synapse0x20147d0() {
   return (neuron0x20124f0()*0.206406);
}

double NNfunction_ss_cRcR::synapse0x1dcc240() {
   return (neuron0x2012830()*0.13171);
}

double NNfunction_ss_cRcR::synapse0x1dcc280() {
   return (neuron0x2012b70()*0.13488);
}

double NNfunction_ss_cRcR::synapse0x2014f10() {
   return (neuron0x2012eb0()*-0.219095);
}

double NNfunction_ss_cRcR::synapse0x2014f50() {
   return (neuron0x20131f0()*0.351789);
}

double NNfunction_ss_cRcR::synapse0x2015250() {
   return (neuron0x2013530()*-0.506304);
}

double NNfunction_ss_cRcR::synapse0x2015290() {
   return (neuron0x2013870()*-0.305356);
}

double NNfunction_ss_cRcR::synapse0x2015590() {
   return (neuron0x2013bb0()*-0.000461145);
}

double NNfunction_ss_cRcR::synapse0x20155d0() {
   return (neuron0x2013ef0()*-0.526002);
}

double NNfunction_ss_cRcR::synapse0x20158d0() {
   return (neuron0x2014230()*0.845391);
}

double NNfunction_ss_cRcR::synapse0x2015910() {
   return (neuron0x2014570()*-0.288172);
}

double NNfunction_ss_cRcR::synapse0x2015c10() {
   return (neuron0x2014ad0()*0.241483);
}

double NNfunction_ss_cRcR::synapse0x2015c50() {
   return (neuron0x2014cf0()*0.0275916);
}

double NNfunction_ss_cRcR::synapse0x2015f50() {
   return (neuron0x2015030()*-0.363362);
}

double NNfunction_ss_cRcR::synapse0x2015f90() {
   return (neuron0x2015370()*-0.420434);
}

double NNfunction_ss_cRcR::synapse0x2013a90() {
   return (neuron0x20156b0()*-0.542598);
}

double NNfunction_ss_cRcR::synapse0x2013ad0() {
   return (neuron0x20159f0()*-0.673963);
}

double NNfunction_ss_cRcR::synapse0x2021d70() {
   return (neuron0x2015d30()*0.463562);
}

double NNfunction_ss_cRcR::synapse0x20220f0() {
   return (neuron0x2011170()*0.144743);
}

double NNfunction_ss_cRcR::synapse0x2022130() {
   return (neuron0x20114b0()*-2.7454);
}

double NNfunction_ss_cRcR::synapse0x2022170() {
   return (neuron0x20117f0()*2.17664);
}

double NNfunction_ss_cRcR::synapse0x20221b0() {
   return (neuron0x2011b30()*0.673712);
}

double NNfunction_ss_cRcR::synapse0x20221f0() {
   return (neuron0x2011e70()*1.04119);
}

double NNfunction_ss_cRcR::synapse0x2022230() {
   return (neuron0x20121b0()*0.695131);
}

double NNfunction_ss_cRcR::synapse0x2022270() {
   return (neuron0x20124f0()*0.572213);
}

double NNfunction_ss_cRcR::synapse0x20222b0() {
   return (neuron0x2012830()*-0.3947);
}

double NNfunction_ss_cRcR::synapse0x20222f0() {
   return (neuron0x2012b70()*-1.23997);
}

double NNfunction_ss_cRcR::synapse0x2022330() {
   return (neuron0x2012eb0()*0.139102);
}

double NNfunction_ss_cRcR::synapse0x2022370() {
   return (neuron0x20131f0()*0.407321);
}

double NNfunction_ss_cRcR::synapse0x20223b0() {
   return (neuron0x2013530()*0.464652);
}

double NNfunction_ss_cRcR::synapse0x20223f0() {
   return (neuron0x2013870()*1.05363);
}

double NNfunction_ss_cRcR::synapse0x2022430() {
   return (neuron0x2013bb0()*-0.934795);
}

double NNfunction_ss_cRcR::synapse0x2022470() {
   return (neuron0x2013ef0()*-1.50418);
}

double NNfunction_ss_cRcR::synapse0x20224b0() {
   return (neuron0x2014230()*0.42019);
}

double NNfunction_ss_cRcR::synapse0x2021f40() {
   return (neuron0x2014570()*0.67504);
}

double NNfunction_ss_cRcR::synapse0x2021f80() {
   return (neuron0x2014ad0()*0.81355);
}

double NNfunction_ss_cRcR::synapse0x2022600() {
   return (neuron0x2014cf0()*-1.1488);
}

double NNfunction_ss_cRcR::synapse0x2022640() {
   return (neuron0x2015030()*-1.65033);
}

double NNfunction_ss_cRcR::synapse0x2022680() {
   return (neuron0x2015370()*1.1248);
}

double NNfunction_ss_cRcR::synapse0x20226c0() {
   return (neuron0x20156b0()*1.02437);
}

double NNfunction_ss_cRcR::synapse0x2022700() {
   return (neuron0x20159f0()*-1.33196);
}

double NNfunction_ss_cRcR::synapse0x2022740() {
   return (neuron0x2015d30()*-0.0887399);
}

double NNfunction_ss_cRcR::synapse0x2022ac0() {
   return (neuron0x2011170()*-0.168785);
}

double NNfunction_ss_cRcR::synapse0x2022b00() {
   return (neuron0x20114b0()*-0.329956);
}

double NNfunction_ss_cRcR::synapse0x2022b40() {
   return (neuron0x20117f0()*0.415973);
}

double NNfunction_ss_cRcR::synapse0x2022b80() {
   return (neuron0x2011b30()*-0.300913);
}

double NNfunction_ss_cRcR::synapse0x2022bc0() {
   return (neuron0x2011e70()*-0.700897);
}

double NNfunction_ss_cRcR::synapse0x2022c00() {
   return (neuron0x20121b0()*-0.0422432);
}

double NNfunction_ss_cRcR::synapse0x2022c40() {
   return (neuron0x20124f0()*0.681242);
}

double NNfunction_ss_cRcR::synapse0x2022c80() {
   return (neuron0x2012830()*0.24758);
}

double NNfunction_ss_cRcR::synapse0x2022cc0() {
   return (neuron0x2012b70()*-1.02022);
}

double NNfunction_ss_cRcR::synapse0x2022d00() {
   return (neuron0x2012eb0()*-0.169292);
}

double NNfunction_ss_cRcR::synapse0x2022d40() {
   return (neuron0x20131f0()*0.116527);
}

double NNfunction_ss_cRcR::synapse0x2022d80() {
   return (neuron0x2013530()*-0.84736);
}

double NNfunction_ss_cRcR::synapse0x2022dc0() {
   return (neuron0x2013870()*-0.891676);
}

double NNfunction_ss_cRcR::synapse0x2022e00() {
   return (neuron0x2013bb0()*1.62783);
}

double NNfunction_ss_cRcR::synapse0x2022e40() {
   return (neuron0x2013ef0()*1.2371);
}

double NNfunction_ss_cRcR::synapse0x2022e80() {
   return (neuron0x2014230()*-2.06753);
}

double NNfunction_ss_cRcR::synapse0x2022910() {
   return (neuron0x2014570()*0.552843);
}

double NNfunction_ss_cRcR::synapse0x2022950() {
   return (neuron0x2014ad0()*0.14254);
}

double NNfunction_ss_cRcR::synapse0x2022fd0() {
   return (neuron0x2014cf0()*0.548437);
}

double NNfunction_ss_cRcR::synapse0x2023010() {
   return (neuron0x2015030()*2.07131);
}

double NNfunction_ss_cRcR::synapse0x2023050() {
   return (neuron0x2015370()*-0.278483);
}

double NNfunction_ss_cRcR::synapse0x2023090() {
   return (neuron0x20156b0()*0.774914);
}

double NNfunction_ss_cRcR::synapse0x20230d0() {
   return (neuron0x20159f0()*-0.251592);
}

double NNfunction_ss_cRcR::synapse0x2023110() {
   return (neuron0x2015d30()*-0.0107401);
}

double NNfunction_ss_cRcR::synapse0x2023490() {
   return (neuron0x2011170()*0.0379527);
}

double NNfunction_ss_cRcR::synapse0x20234d0() {
   return (neuron0x20114b0()*0.284037);
}

double NNfunction_ss_cRcR::synapse0x2023510() {
   return (neuron0x20117f0()*0.987012);
}

double NNfunction_ss_cRcR::synapse0x2023550() {
   return (neuron0x2011b30()*-0.947207);
}

double NNfunction_ss_cRcR::synapse0x2023590() {
   return (neuron0x2011e70()*0.384536);
}

double NNfunction_ss_cRcR::synapse0x20235d0() {
   return (neuron0x20121b0()*-1.33123);
}

double NNfunction_ss_cRcR::synapse0x2023610() {
   return (neuron0x20124f0()*-0.117755);
}

double NNfunction_ss_cRcR::synapse0x2023650() {
   return (neuron0x2012830()*-0.203708);
}

double NNfunction_ss_cRcR::synapse0x2023690() {
   return (neuron0x2012b70()*0.786041);
}

double NNfunction_ss_cRcR::synapse0x20236d0() {
   return (neuron0x2012eb0()*-0.189819);
}

double NNfunction_ss_cRcR::synapse0x2023710() {
   return (neuron0x20131f0()*0.12712);
}

double NNfunction_ss_cRcR::synapse0x2023750() {
   return (neuron0x2013530()*-1.61342);
}

double NNfunction_ss_cRcR::synapse0x2023790() {
   return (neuron0x2013870()*0.472789);
}

double NNfunction_ss_cRcR::synapse0x20237d0() {
   return (neuron0x2013bb0()*-0.461783);
}

double NNfunction_ss_cRcR::synapse0x2023810() {
   return (neuron0x2013ef0()*1.17223);
}

double NNfunction_ss_cRcR::synapse0x2023850() {
   return (neuron0x2014230()*0.440832);
}

double NNfunction_ss_cRcR::synapse0x20232e0() {
   return (neuron0x2014570()*-0.0464188);
}

double NNfunction_ss_cRcR::synapse0x2023320() {
   return (neuron0x2014ad0()*0.242892);
}

double NNfunction_ss_cRcR::synapse0x20239a0() {
   return (neuron0x2014cf0()*-0.572603);
}

double NNfunction_ss_cRcR::synapse0x20239e0() {
   return (neuron0x2015030()*-0.279827);
}

double NNfunction_ss_cRcR::synapse0x2023a20() {
   return (neuron0x2015370()*-0.401713);
}

double NNfunction_ss_cRcR::synapse0x2023a60() {
   return (neuron0x20156b0()*0.179303);
}

double NNfunction_ss_cRcR::synapse0x2023aa0() {
   return (neuron0x20159f0()*0.344792);
}

double NNfunction_ss_cRcR::synapse0x2023ae0() {
   return (neuron0x2015d30()*-0.792421);
}

double NNfunction_ss_cRcR::synapse0x2023e60() {
   return (neuron0x2011170()*0.0914795);
}

double NNfunction_ss_cRcR::synapse0x2023ea0() {
   return (neuron0x20114b0()*1.21669);
}

double NNfunction_ss_cRcR::synapse0x2023ee0() {
   return (neuron0x20117f0()*-0.199233);
}

double NNfunction_ss_cRcR::synapse0x2023f20() {
   return (neuron0x2011b30()*-0.668823);
}

double NNfunction_ss_cRcR::synapse0x2023f60() {
   return (neuron0x2011e70()*-0.215919);
}

double NNfunction_ss_cRcR::synapse0x2023fa0() {
   return (neuron0x20121b0()*-0.187033);
}

double NNfunction_ss_cRcR::synapse0x2023fe0() {
   return (neuron0x20124f0()*-0.603499);
}

double NNfunction_ss_cRcR::synapse0x2024020() {
   return (neuron0x2012830()*0.147092);
}

double NNfunction_ss_cRcR::synapse0x2024060() {
   return (neuron0x2012b70()*0.627968);
}

double NNfunction_ss_cRcR::synapse0x20240a0() {
   return (neuron0x2012eb0()*0.878919);
}

double NNfunction_ss_cRcR::synapse0x20240e0() {
   return (neuron0x20131f0()*0.439714);
}

double NNfunction_ss_cRcR::synapse0x2024120() {
   return (neuron0x2013530()*0.937415);
}

double NNfunction_ss_cRcR::synapse0x2024160() {
   return (neuron0x2013870()*-0.177134);
}

double NNfunction_ss_cRcR::synapse0x20241a0() {
   return (neuron0x2013bb0()*1.6913);
}

double NNfunction_ss_cRcR::synapse0x20241e0() {
   return (neuron0x2013ef0()*-2.02208);
}

double NNfunction_ss_cRcR::synapse0x2024220() {
   return (neuron0x2014230()*-1.08531);
}

double NNfunction_ss_cRcR::synapse0x2023cb0() {
   return (neuron0x2014570()*-0.400551);
}

double NNfunction_ss_cRcR::synapse0x2023cf0() {
   return (neuron0x2014ad0()*-0.198193);
}

double NNfunction_ss_cRcR::synapse0x2024370() {
   return (neuron0x2014cf0()*1.53285);
}

double NNfunction_ss_cRcR::synapse0x20243b0() {
   return (neuron0x2015030()*0.322071);
}

double NNfunction_ss_cRcR::synapse0x20243f0() {
   return (neuron0x2015370()*-0.367637);
}

double NNfunction_ss_cRcR::synapse0x2024430() {
   return (neuron0x20156b0()*0.019654);
}

double NNfunction_ss_cRcR::synapse0x2024470() {
   return (neuron0x20159f0()*0.663409);
}

double NNfunction_ss_cRcR::synapse0x20244b0() {
   return (neuron0x2015d30()*-0.0522438);
}

double NNfunction_ss_cRcR::synapse0x2024830() {
   return (neuron0x2011170()*-0.00883417);
}

double NNfunction_ss_cRcR::synapse0x2024870() {
   return (neuron0x20114b0()*-0.521611);
}

double NNfunction_ss_cRcR::synapse0x20248b0() {
   return (neuron0x20117f0()*2.31703);
}

double NNfunction_ss_cRcR::synapse0x20248f0() {
   return (neuron0x2011b30()*-1.32273);
}

double NNfunction_ss_cRcR::synapse0x2024930() {
   return (neuron0x2011e70()*0.273449);
}

double NNfunction_ss_cRcR::synapse0x2024970() {
   return (neuron0x20121b0()*0.391777);
}

double NNfunction_ss_cRcR::synapse0x20249b0() {
   return (neuron0x20124f0()*0.517173);
}

double NNfunction_ss_cRcR::synapse0x20249f0() {
   return (neuron0x2012830()*0.407856);
}

double NNfunction_ss_cRcR::synapse0x2024a30() {
   return (neuron0x2012b70()*-0.343033);
}

double NNfunction_ss_cRcR::synapse0x201cbf0() {
   return (neuron0x2012eb0()*0.702131);
}

double NNfunction_ss_cRcR::synapse0x201cc30() {
   return (neuron0x20131f0()*0.0678283);
}

double NNfunction_ss_cRcR::synapse0x201cc70() {
   return (neuron0x2013530()*0.80626);
}

double NNfunction_ss_cRcR::synapse0x201ccb0() {
   return (neuron0x2013870()*-0.67262);
}

double NNfunction_ss_cRcR::synapse0x201ccf0() {
   return (neuron0x2013bb0()*0.887777);
}

double NNfunction_ss_cRcR::synapse0x201cd30() {
   return (neuron0x2013ef0()*-1.32385);
}

double NNfunction_ss_cRcR::synapse0x201cd70() {
   return (neuron0x2014230()*1.26414);
}

double NNfunction_ss_cRcR::synapse0x2024680() {
   return (neuron0x2014570()*0.07908);
}

double NNfunction_ss_cRcR::synapse0x20246c0() {
   return (neuron0x2014ad0()*-2.17591);
}

double NNfunction_ss_cRcR::synapse0x201cec0() {
   return (neuron0x2014cf0()*-1.48969);
}

double NNfunction_ss_cRcR::synapse0x201cf00() {
   return (neuron0x2015030()*0.377327);
}

double NNfunction_ss_cRcR::synapse0x201cf40() {
   return (neuron0x2015370()*0.540922);
}

double NNfunction_ss_cRcR::synapse0x201cf80() {
   return (neuron0x20156b0()*-0.386777);
}

double NNfunction_ss_cRcR::synapse0x201cfc0() {
   return (neuron0x20159f0()*0.0766728);
}

double NNfunction_ss_cRcR::synapse0x201d000() {
   return (neuron0x2015d30()*-0.0614083);
}

double NNfunction_ss_cRcR::synapse0x201d380() {
   return (neuron0x2011170()*0.0226959);
}

double NNfunction_ss_cRcR::synapse0x201d3c0() {
   return (neuron0x20114b0()*-0.111981);
}

double NNfunction_ss_cRcR::synapse0x201d400() {
   return (neuron0x20117f0()*-0.0170441);
}

double NNfunction_ss_cRcR::synapse0x201d440() {
   return (neuron0x2011b30()*0.661551);
}

double NNfunction_ss_cRcR::synapse0x201d480() {
   return (neuron0x2011e70()*0.0329127);
}

double NNfunction_ss_cRcR::synapse0x201d4c0() {
   return (neuron0x20121b0()*0.0430356);
}

double NNfunction_ss_cRcR::synapse0x201d500() {
   return (neuron0x20124f0()*0.0260798);
}

double NNfunction_ss_cRcR::synapse0x201d540() {
   return (neuron0x2012830()*0.0594399);
}

double NNfunction_ss_cRcR::synapse0x201d580() {
   return (neuron0x2012b70()*0.0635236);
}

double NNfunction_ss_cRcR::synapse0x201d5c0() {
   return (neuron0x2012eb0()*0.0604338);
}

double NNfunction_ss_cRcR::synapse0x201d600() {
   return (neuron0x20131f0()*-0.0728557);
}

double NNfunction_ss_cRcR::synapse0x201d640() {
   return (neuron0x2013530()*-0.0138615);
}

double NNfunction_ss_cRcR::synapse0x201d680() {
   return (neuron0x2013870()*-0.0679633);
}

double NNfunction_ss_cRcR::synapse0x201d6c0() {
   return (neuron0x2013bb0()*-0.000550297);
}

double NNfunction_ss_cRcR::synapse0x201d700() {
   return (neuron0x2013ef0()*-0.00664548);
}

double NNfunction_ss_cRcR::synapse0x201d740() {
   return (neuron0x2014230()*-0.327803);
}

double NNfunction_ss_cRcR::synapse0x201d1d0() {
   return (neuron0x2014570()*0.0413444);
}

double NNfunction_ss_cRcR::synapse0x201d210() {
   return (neuron0x2014ad0()*-0.0703872);
}

double NNfunction_ss_cRcR::synapse0x201d890() {
   return (neuron0x2014cf0()*0.161766);
}

double NNfunction_ss_cRcR::synapse0x201d8d0() {
   return (neuron0x2015030()*-0.0461685);
}

double NNfunction_ss_cRcR::synapse0x201d910() {
   return (neuron0x2015370()*0.00814);
}

double NNfunction_ss_cRcR::synapse0x201d950() {
   return (neuron0x20156b0()*0.00859592);
}

double NNfunction_ss_cRcR::synapse0x201d990() {
   return (neuron0x20159f0()*-0.00919731);
}

double NNfunction_ss_cRcR::synapse0x201d9d0() {
   return (neuron0x2015d30()*0.00459048);
}

double NNfunction_ss_cRcR::synapse0x201dba0() {
   return (neuron0x2011170()*-0.0437982);
}

double NNfunction_ss_cRcR::synapse0x2026c30() {
   return (neuron0x20114b0()*-0.492448);
}

double NNfunction_ss_cRcR::synapse0x2026c70() {
   return (neuron0x20117f0()*0.000448817);
}

double NNfunction_ss_cRcR::synapse0x2026cb0() {
   return (neuron0x2011b30()*-0.586087);
}

double NNfunction_ss_cRcR::synapse0x2026cf0() {
   return (neuron0x2011e70()*-0.0309082);
}

double NNfunction_ss_cRcR::synapse0x2026d30() {
   return (neuron0x20121b0()*0.0148148);
}

double NNfunction_ss_cRcR::synapse0x2026d70() {
   return (neuron0x20124f0()*0.26007);
}

double NNfunction_ss_cRcR::synapse0x2026db0() {
   return (neuron0x2012830()*0.137808);
}

double NNfunction_ss_cRcR::synapse0x2026df0() {
   return (neuron0x2012b70()*-0.295716);
}

double NNfunction_ss_cRcR::synapse0x2026e30() {
   return (neuron0x2012eb0()*-0.141247);
}

double NNfunction_ss_cRcR::synapse0x2026e70() {
   return (neuron0x20131f0()*1.12828);
}

double NNfunction_ss_cRcR::synapse0x2026eb0() {
   return (neuron0x2013530()*0.181053);
}

double NNfunction_ss_cRcR::synapse0x2026ef0() {
   return (neuron0x2013870()*-0.260339);
}

double NNfunction_ss_cRcR::synapse0x2026f30() {
   return (neuron0x2013bb0()*0.0551407);
}

double NNfunction_ss_cRcR::synapse0x2026f70() {
   return (neuron0x2013ef0()*0.0629539);
}

double NNfunction_ss_cRcR::synapse0x2026fb0() {
   return (neuron0x2014230()*-0.452125);
}

double NNfunction_ss_cRcR::synapse0x2026a80() {
   return (neuron0x2014570()*-0.000659869);
}

double NNfunction_ss_cRcR::synapse0x2026ac0() {
   return (neuron0x2014ad0()*-0.101696);
}

double NNfunction_ss_cRcR::synapse0x2027100() {
   return (neuron0x2014cf0()*0.0388213);
}

double NNfunction_ss_cRcR::synapse0x2027140() {
   return (neuron0x2015030()*-0.225925);
}

double NNfunction_ss_cRcR::synapse0x2027180() {
   return (neuron0x2015370()*0.237174);
}

double NNfunction_ss_cRcR::synapse0x20271c0() {
   return (neuron0x20156b0()*0.0723156);
}

double NNfunction_ss_cRcR::synapse0x2027200() {
   return (neuron0x20159f0()*-0.00399031);
}

double NNfunction_ss_cRcR::synapse0x2027240() {
   return (neuron0x2015d30()*0.127397);
}

double NNfunction_ss_cRcR::synapse0x20275c0() {
   return (neuron0x2011170()*0.227112);
}

double NNfunction_ss_cRcR::synapse0x2027600() {
   return (neuron0x20114b0()*-0.221199);
}

double NNfunction_ss_cRcR::synapse0x2027640() {
   return (neuron0x20117f0()*0.0205528);
}

double NNfunction_ss_cRcR::synapse0x2027680() {
   return (neuron0x2011b30()*-0.540052);
}

double NNfunction_ss_cRcR::synapse0x20276c0() {
   return (neuron0x2011e70()*0.239089);
}

double NNfunction_ss_cRcR::synapse0x2027700() {
   return (neuron0x20121b0()*0.277625);
}

double NNfunction_ss_cRcR::synapse0x2027740() {
   return (neuron0x20124f0()*0.0318223);
}

double NNfunction_ss_cRcR::synapse0x2027780() {
   return (neuron0x2012830()*0.113488);
}

double NNfunction_ss_cRcR::synapse0x20277c0() {
   return (neuron0x2012b70()*-0.408695);
}

double NNfunction_ss_cRcR::synapse0x2027800() {
   return (neuron0x2012eb0()*0.214501);
}

double NNfunction_ss_cRcR::synapse0x2027840() {
   return (neuron0x20131f0()*-0.37516);
}

double NNfunction_ss_cRcR::synapse0x2027880() {
   return (neuron0x2013530()*0.663791);
}

double NNfunction_ss_cRcR::synapse0x20278c0() {
   return (neuron0x2013870()*-0.406761);
}

double NNfunction_ss_cRcR::synapse0x2027900() {
   return (neuron0x2013bb0()*-0.124307);
}

double NNfunction_ss_cRcR::synapse0x2027940() {
   return (neuron0x2013ef0()*0.218983);
}

double NNfunction_ss_cRcR::synapse0x2027980() {
   return (neuron0x2014230()*-0.831826);
}

double NNfunction_ss_cRcR::synapse0x2027410() {
   return (neuron0x2014570()*0.0495175);
}

double NNfunction_ss_cRcR::synapse0x2027450() {
   return (neuron0x2014ad0()*0.677061);
}

double NNfunction_ss_cRcR::synapse0x2027ad0() {
   return (neuron0x2014cf0()*-0.351471);
}

double NNfunction_ss_cRcR::synapse0x2027b10() {
   return (neuron0x2015030()*-0.196575);
}

double NNfunction_ss_cRcR::synapse0x2027b50() {
   return (neuron0x2015370()*0.0883762);
}

double NNfunction_ss_cRcR::synapse0x2027b90() {
   return (neuron0x20156b0()*0.00776364);
}

double NNfunction_ss_cRcR::synapse0x2027bd0() {
   return (neuron0x20159f0()*-0.0378716);
}

double NNfunction_ss_cRcR::synapse0x2027c10() {
   return (neuron0x2015d30()*0.198905);
}

double NNfunction_ss_cRcR::synapse0x2027f90() {
   return (neuron0x2011170()*0.081749);
}

double NNfunction_ss_cRcR::synapse0x2027fd0() {
   return (neuron0x20114b0()*0.117517);
}

double NNfunction_ss_cRcR::synapse0x2028010() {
   return (neuron0x20117f0()*0.131509);
}

double NNfunction_ss_cRcR::synapse0x2028050() {
   return (neuron0x2011b30()*-0.36113);
}

double NNfunction_ss_cRcR::synapse0x2028090() {
   return (neuron0x2011e70()*0.307868);
}

double NNfunction_ss_cRcR::synapse0x20280d0() {
   return (neuron0x20121b0()*0.0604521);
}

double NNfunction_ss_cRcR::synapse0x2028110() {
   return (neuron0x20124f0()*0.00597016);
}

double NNfunction_ss_cRcR::synapse0x2028150() {
   return (neuron0x2012830()*0.497569);
}

double NNfunction_ss_cRcR::synapse0x2028190() {
   return (neuron0x2012b70()*-0.416197);
}

double NNfunction_ss_cRcR::synapse0x20281d0() {
   return (neuron0x2012eb0()*0.837631);
}

double NNfunction_ss_cRcR::synapse0x2028210() {
   return (neuron0x20131f0()*-0.11879);
}

double NNfunction_ss_cRcR::synapse0x2028250() {
   return (neuron0x2013530()*-0.0936469);
}

double NNfunction_ss_cRcR::synapse0x2028290() {
   return (neuron0x2013870()*1.75651);
}

double NNfunction_ss_cRcR::synapse0x20282d0() {
   return (neuron0x2013bb0()*0.0320465);
}

double NNfunction_ss_cRcR::synapse0x2028310() {
   return (neuron0x2013ef0()*-0.0117504);
}

double NNfunction_ss_cRcR::synapse0x2028350() {
   return (neuron0x2014230()*0.0334003);
}

double NNfunction_ss_cRcR::synapse0x2027de0() {
   return (neuron0x2014570()*0.193839);
}

double NNfunction_ss_cRcR::synapse0x2027e20() {
   return (neuron0x2014ad0()*-0.493015);
}

double NNfunction_ss_cRcR::synapse0x20284a0() {
   return (neuron0x2014cf0()*-0.175126);
}

double NNfunction_ss_cRcR::synapse0x20284e0() {
   return (neuron0x2015030()*-0.162262);
}

double NNfunction_ss_cRcR::synapse0x2028520() {
   return (neuron0x2015370()*0.208177);
}

double NNfunction_ss_cRcR::synapse0x2028560() {
   return (neuron0x20156b0()*-0.0693523);
}

double NNfunction_ss_cRcR::synapse0x20285a0() {
   return (neuron0x20159f0()*-0.297481);
}

double NNfunction_ss_cRcR::synapse0x20285e0() {
   return (neuron0x2015d30()*0.31448);
}

double NNfunction_ss_cRcR::synapse0x2028960() {
   return (neuron0x2011170()*-0.00371552);
}

double NNfunction_ss_cRcR::synapse0x20289a0() {
   return (neuron0x20114b0()*0.0120964);
}

double NNfunction_ss_cRcR::synapse0x20289e0() {
   return (neuron0x20117f0()*-0.0152393);
}

double NNfunction_ss_cRcR::synapse0x2028a20() {
   return (neuron0x2011b30()*-0.116775);
}

double NNfunction_ss_cRcR::synapse0x2028a60() {
   return (neuron0x2011e70()*0.0159681);
}

double NNfunction_ss_cRcR::synapse0x2028aa0() {
   return (neuron0x20121b0()*-0.00463034);
}

double NNfunction_ss_cRcR::synapse0x2028ae0() {
   return (neuron0x20124f0()*-0.00310986);
}

double NNfunction_ss_cRcR::synapse0x2028b20() {
   return (neuron0x2012830()*-0.0271652);
}

double NNfunction_ss_cRcR::synapse0x2028b60() {
   return (neuron0x2012b70()*-0.0251906);
}

double NNfunction_ss_cRcR::synapse0x2028ba0() {
   return (neuron0x2012eb0()*0.0115035);
}

double NNfunction_ss_cRcR::synapse0x2028be0() {
   return (neuron0x20131f0()*0.0111086);
}

double NNfunction_ss_cRcR::synapse0x2028c20() {
   return (neuron0x2013530()*0.0275324);
}

double NNfunction_ss_cRcR::synapse0x2028c60() {
   return (neuron0x2013870()*0.0345617);
}

double NNfunction_ss_cRcR::synapse0x2028ca0() {
   return (neuron0x2013bb0()*-0.00180205);
}

double NNfunction_ss_cRcR::synapse0x2028ce0() {
   return (neuron0x2013ef0()*0.00202261);
}

double NNfunction_ss_cRcR::synapse0x2028d20() {
   return (neuron0x2014230()*1.60162);
}

double NNfunction_ss_cRcR::synapse0x20287b0() {
   return (neuron0x2014570()*-0.0140613);
}

double NNfunction_ss_cRcR::synapse0x20287f0() {
   return (neuron0x2014ad0()*0.0412438);
}

double NNfunction_ss_cRcR::synapse0x2028e70() {
   return (neuron0x2014cf0()*0.00372893);
}

double NNfunction_ss_cRcR::synapse0x2028eb0() {
   return (neuron0x2015030()*0.0158229);
}

double NNfunction_ss_cRcR::synapse0x2028ef0() {
   return (neuron0x2015370()*-0.012846);
}

double NNfunction_ss_cRcR::synapse0x2028f30() {
   return (neuron0x20156b0()*-3.22145e-06);
}

double NNfunction_ss_cRcR::synapse0x2028f70() {
   return (neuron0x20159f0()*-0.00095199);
}

double NNfunction_ss_cRcR::synapse0x2028fb0() {
   return (neuron0x2015d30()*-0.00542622);
}

double NNfunction_ss_cRcR::synapse0x2029330() {
   return (neuron0x2011170()*0.0575258);
}

double NNfunction_ss_cRcR::synapse0x2029370() {
   return (neuron0x20114b0()*0.91345);
}

double NNfunction_ss_cRcR::synapse0x20293b0() {
   return (neuron0x20117f0()*0.590299);
}

double NNfunction_ss_cRcR::synapse0x20293f0() {
   return (neuron0x2011b30()*-0.565761);
}

double NNfunction_ss_cRcR::synapse0x2029430() {
   return (neuron0x2011e70()*-0.209748);
}

double NNfunction_ss_cRcR::synapse0x2029470() {
   return (neuron0x20121b0()*0.140572);
}

double NNfunction_ss_cRcR::synapse0x20294b0() {
   return (neuron0x20124f0()*-0.0312411);
}

double NNfunction_ss_cRcR::synapse0x20294f0() {
   return (neuron0x2012830()*-0.269745);
}

double NNfunction_ss_cRcR::synapse0x2029530() {
   return (neuron0x2012b70()*-0.10424);
}

double NNfunction_ss_cRcR::synapse0x2029570() {
   return (neuron0x2012eb0()*0.0950512);
}

double NNfunction_ss_cRcR::synapse0x20295b0() {
   return (neuron0x20131f0()*0.169781);
}

double NNfunction_ss_cRcR::synapse0x20295f0() {
   return (neuron0x2013530()*-1.46888);
}

double NNfunction_ss_cRcR::synapse0x2029630() {
   return (neuron0x2013870()*2.53516);
}

double NNfunction_ss_cRcR::synapse0x2029670() {
   return (neuron0x2013bb0()*0.891328);
}

double NNfunction_ss_cRcR::synapse0x20296b0() {
   return (neuron0x2013ef0()*0.454917);
}

double NNfunction_ss_cRcR::synapse0x20296f0() {
   return (neuron0x2014230()*-0.870122);
}

double NNfunction_ss_cRcR::synapse0x2029180() {
   return (neuron0x2014570()*-1.01952);
}

double NNfunction_ss_cRcR::synapse0x20291c0() {
   return (neuron0x2014ad0()*1.05683);
}

double NNfunction_ss_cRcR::synapse0x2029840() {
   return (neuron0x2014cf0()*-0.349347);
}

double NNfunction_ss_cRcR::synapse0x2029880() {
   return (neuron0x2015030()*-0.00647877);
}

double NNfunction_ss_cRcR::synapse0x20298c0() {
   return (neuron0x2015370()*1.32321);
}

double NNfunction_ss_cRcR::synapse0x2029900() {
   return (neuron0x20156b0()*-0.705465);
}

double NNfunction_ss_cRcR::synapse0x2029940() {
   return (neuron0x20159f0()*-0.475914);
}

double NNfunction_ss_cRcR::synapse0x2029980() {
   return (neuron0x2015d30()*-0.0734112);
}

double NNfunction_ss_cRcR::synapse0x2029d00() {
   return (neuron0x2011170()*-0.15611);
}

double NNfunction_ss_cRcR::synapse0x2029d40() {
   return (neuron0x20114b0()*-0.378704);
}

double NNfunction_ss_cRcR::synapse0x2029d80() {
   return (neuron0x20117f0()*-0.277231);
}

double NNfunction_ss_cRcR::synapse0x2029dc0() {
   return (neuron0x2011b30()*0.236122);
}

double NNfunction_ss_cRcR::synapse0x2029e00() {
   return (neuron0x2011e70()*0.0965947);
}

double NNfunction_ss_cRcR::synapse0x2029e40() {
   return (neuron0x20121b0()*-0.044001);
}

double NNfunction_ss_cRcR::synapse0x2029e80() {
   return (neuron0x20124f0()*-0.186751);
}

double NNfunction_ss_cRcR::synapse0x2029ec0() {
   return (neuron0x2012830()*0.102086);
}

double NNfunction_ss_cRcR::synapse0x2029f00() {
   return (neuron0x2012b70()*0.298893);
}

double NNfunction_ss_cRcR::synapse0x2029f40() {
   return (neuron0x2012eb0()*0.612959);
}

double NNfunction_ss_cRcR::synapse0x2029f80() {
   return (neuron0x20131f0()*-0.101042);
}

double NNfunction_ss_cRcR::synapse0x2029fc0() {
   return (neuron0x2013530()*-0.504761);
}

double NNfunction_ss_cRcR::synapse0x202a000() {
   return (neuron0x2013870()*0.17294);
}

double NNfunction_ss_cRcR::synapse0x202a040() {
   return (neuron0x2013bb0()*-0.197187);
}

double NNfunction_ss_cRcR::synapse0x202a080() {
   return (neuron0x2013ef0()*-0.397992);
}

double NNfunction_ss_cRcR::synapse0x202a0c0() {
   return (neuron0x2014230()*2.77096);
}

double NNfunction_ss_cRcR::synapse0x2029b50() {
   return (neuron0x2014570()*0.0160109);
}

double NNfunction_ss_cRcR::synapse0x2029b90() {
   return (neuron0x2014ad0()*1.44022);
}

double NNfunction_ss_cRcR::synapse0x202a210() {
   return (neuron0x2014cf0()*0.146991);
}

double NNfunction_ss_cRcR::synapse0x202a250() {
   return (neuron0x2015030()*0.501294);
}

double NNfunction_ss_cRcR::synapse0x202a290() {
   return (neuron0x2015370()*0.0408978);
}

double NNfunction_ss_cRcR::synapse0x202a2d0() {
   return (neuron0x20156b0()*0.453748);
}

double NNfunction_ss_cRcR::synapse0x202a310() {
   return (neuron0x20159f0()*-0.213468);
}

double NNfunction_ss_cRcR::synapse0x202a350() {
   return (neuron0x2015d30()*-0.179933);
}

double NNfunction_ss_cRcR::synapse0x202a6d0() {
   return (neuron0x2011170()*-0.130523);
}

double NNfunction_ss_cRcR::synapse0x202a710() {
   return (neuron0x20114b0()*1.02955);
}

double NNfunction_ss_cRcR::synapse0x202a750() {
   return (neuron0x20117f0()*1.18895);
}

double NNfunction_ss_cRcR::synapse0x202a790() {
   return (neuron0x2011b30()*1.74397);
}

double NNfunction_ss_cRcR::synapse0x202a7d0() {
   return (neuron0x2011e70()*-1.34528);
}

double NNfunction_ss_cRcR::synapse0x202a810() {
   return (neuron0x20121b0()*-0.505377);
}

double NNfunction_ss_cRcR::synapse0x202a850() {
   return (neuron0x20124f0()*-0.96454);
}

double NNfunction_ss_cRcR::synapse0x202a890() {
   return (neuron0x2012830()*1.27249);
}

double NNfunction_ss_cRcR::synapse0x202a8d0() {
   return (neuron0x2012b70()*-0.185502);
}

double NNfunction_ss_cRcR::synapse0x202a910() {
   return (neuron0x2012eb0()*0.0590173);
}

double NNfunction_ss_cRcR::synapse0x202a950() {
   return (neuron0x20131f0()*-0.181168);
}

double NNfunction_ss_cRcR::synapse0x202a990() {
   return (neuron0x2013530()*0.639293);
}

double NNfunction_ss_cRcR::synapse0x202a9d0() {
   return (neuron0x2013870()*0.223887);
}

double NNfunction_ss_cRcR::synapse0x202aa10() {
   return (neuron0x2013bb0()*-0.708074);
}

double NNfunction_ss_cRcR::synapse0x202aa50() {
   return (neuron0x2013ef0()*0.916517);
}

double NNfunction_ss_cRcR::synapse0x202aa90() {
   return (neuron0x2014230()*-1.68198);
}

double NNfunction_ss_cRcR::synapse0x202a520() {
   return (neuron0x2014570()*0.0975579);
}

double NNfunction_ss_cRcR::synapse0x202a560() {
   return (neuron0x2014ad0()*0.310538);
}

double NNfunction_ss_cRcR::synapse0x202abe0() {
   return (neuron0x2014cf0()*-0.0959579);
}

double NNfunction_ss_cRcR::synapse0x202ac20() {
   return (neuron0x2015030()*0.21005);
}

double NNfunction_ss_cRcR::synapse0x202ac60() {
   return (neuron0x2015370()*0.592437);
}

double NNfunction_ss_cRcR::synapse0x202aca0() {
   return (neuron0x20156b0()*0.449419);
}

double NNfunction_ss_cRcR::synapse0x202ace0() {
   return (neuron0x20159f0()*-0.881917);
}

double NNfunction_ss_cRcR::synapse0x202ad20() {
   return (neuron0x2015d30()*0.210404);
}

double NNfunction_ss_cRcR::synapse0x202b0a0() {
   return (neuron0x2011170()*0.0119627);
}

double NNfunction_ss_cRcR::synapse0x202b0e0() {
   return (neuron0x20114b0()*0.0762438);
}

double NNfunction_ss_cRcR::synapse0x202b120() {
   return (neuron0x20117f0()*0.0240667);
}

double NNfunction_ss_cRcR::synapse0x202b160() {
   return (neuron0x2011b30()*-0.347302);
}

double NNfunction_ss_cRcR::synapse0x202b1a0() {
   return (neuron0x2011e70()*0.0986029);
}

double NNfunction_ss_cRcR::synapse0x202b1e0() {
   return (neuron0x20121b0()*-0.0469441);
}

double NNfunction_ss_cRcR::synapse0x202b220() {
   return (neuron0x20124f0()*-0.0548869);
}

double NNfunction_ss_cRcR::synapse0x202b260() {
   return (neuron0x2012830()*0.170955);
}

double NNfunction_ss_cRcR::synapse0x202b2a0() {
   return (neuron0x2012b70()*-0.145067);
}

double NNfunction_ss_cRcR::synapse0x202b2e0() {
   return (neuron0x2012eb0()*-0.00330785);
}

double NNfunction_ss_cRcR::synapse0x202b320() {
   return (neuron0x20131f0()*-0.0162722);
}

double NNfunction_ss_cRcR::synapse0x202b360() {
   return (neuron0x2013530()*0.164745);
}

double NNfunction_ss_cRcR::synapse0x202b3a0() {
   return (neuron0x2013870()*-0.448316);
}

double NNfunction_ss_cRcR::synapse0x202b3e0() {
   return (neuron0x2013bb0()*0.392088);
}

double NNfunction_ss_cRcR::synapse0x202b420() {
   return (neuron0x2013ef0()*1.79683);
}

double NNfunction_ss_cRcR::synapse0x202b460() {
   return (neuron0x2014230()*0.36081);
}

double NNfunction_ss_cRcR::synapse0x202aef0() {
   return (neuron0x2014570()*0.236258);
}

double NNfunction_ss_cRcR::synapse0x202af30() {
   return (neuron0x2014ad0()*-0.199118);
}

double NNfunction_ss_cRcR::synapse0x202b5b0() {
   return (neuron0x2014cf0()*-0.066039);
}

double NNfunction_ss_cRcR::synapse0x202b5f0() {
   return (neuron0x2015030()*-0.536766);
}

double NNfunction_ss_cRcR::synapse0x202b630() {
   return (neuron0x2015370()*-0.123108);
}

double NNfunction_ss_cRcR::synapse0x202b670() {
   return (neuron0x20156b0()*0.131263);
}

double NNfunction_ss_cRcR::synapse0x202b6b0() {
   return (neuron0x20159f0()*-0.0866377);
}

double NNfunction_ss_cRcR::synapse0x202b6f0() {
   return (neuron0x2015d30()*-0.0662323);
}

double NNfunction_ss_cRcR::synapse0x202ba70() {
   return (neuron0x2011170()*0.0193534);
}

double NNfunction_ss_cRcR::synapse0x2020040() {
   return (neuron0x20114b0()*-0.402033);
}

double NNfunction_ss_cRcR::synapse0x2020080() {
   return (neuron0x20117f0()*-0.0127744);
}

double NNfunction_ss_cRcR::synapse0x20200c0() {
   return (neuron0x2011b30()*0.742533);
}

double NNfunction_ss_cRcR::synapse0x2020310() {
   return (neuron0x2011e70()*0.098333);
}

double NNfunction_ss_cRcR::synapse0x2020350() {
   return (neuron0x20121b0()*-0.0406636);
}

double NNfunction_ss_cRcR::synapse0x2020390() {
   return (neuron0x20124f0()*0.0103306);
}

double NNfunction_ss_cRcR::synapse0x20205e0() {
   return (neuron0x2012830()*-0.00837876);
}

double NNfunction_ss_cRcR::synapse0x2020620() {
   return (neuron0x2012b70()*0.137505);
}

double NNfunction_ss_cRcR::synapse0x2020870() {
   return (neuron0x2012eb0()*0.603532);
}

double NNfunction_ss_cRcR::synapse0x20208b0() {
   return (neuron0x20131f0()*0.304908);
}

double NNfunction_ss_cRcR::synapse0x20208f0() {
   return (neuron0x2013530()*0.0444386);
}

double NNfunction_ss_cRcR::synapse0x2020b40() {
   return (neuron0x2013870()*0.0514548);
}

double NNfunction_ss_cRcR::synapse0x2020b80() {
   return (neuron0x2013bb0()*0.0691749);
}

double NNfunction_ss_cRcR::synapse0x2020dd0() {
   return (neuron0x2013ef0()*-0.0874569);
}

double NNfunction_ss_cRcR::synapse0x2020e10() {
   return (neuron0x2014230()*0.23579);
}

double NNfunction_ss_cRcR::synapse0x202b8c0() {
   return (neuron0x2014570()*-0.0156071);
}

double NNfunction_ss_cRcR::synapse0x202b900() {
   return (neuron0x2014ad0()*0.239014);
}

double NNfunction_ss_cRcR::synapse0x2020f60() {
   return (neuron0x2014cf0()*-0.118191);
}

double NNfunction_ss_cRcR::synapse0x2021470() {
   return (neuron0x2015030()*-0.0810625);
}

double NNfunction_ss_cRcR::synapse0x20214b0() {
   return (neuron0x2015370()*-0.0737422);
}

double NNfunction_ss_cRcR::synapse0x20214f0() {
   return (neuron0x20156b0()*-0.126754);
}

double NNfunction_ss_cRcR::synapse0x2021740() {
   return (neuron0x20159f0()*-0.0173318);
}

double NNfunction_ss_cRcR::synapse0x2021780() {
   return (neuron0x2015d30()*-0.0471898);
}

double NNfunction_ss_cRcR::synapse0x2021030() {
   return (neuron0x2011170()*0.00355209);
}

double NNfunction_ss_cRcR::synapse0x2021070() {
   return (neuron0x20114b0()*0.089566);
}

double NNfunction_ss_cRcR::synapse0x20210b0() {
   return (neuron0x20117f0()*-0.040347);
}

double NNfunction_ss_cRcR::synapse0x20210f0() {
   return (neuron0x2011b30()*-1.28199);
}

double NNfunction_ss_cRcR::synapse0x2021a70() {
   return (neuron0x2011e70()*-0.00147774);
}

double NNfunction_ss_cRcR::synapse0x202ddc0() {
   return (neuron0x20121b0()*-0.0180748);
}

double NNfunction_ss_cRcR::synapse0x202de00() {
   return (neuron0x20124f0()*0.0256292);
}

double NNfunction_ss_cRcR::synapse0x202de40() {
   return (neuron0x2012830()*0.0164123);
}

double NNfunction_ss_cRcR::synapse0x202de80() {
   return (neuron0x2012b70()*0.059143);
}

double NNfunction_ss_cRcR::synapse0x202dec0() {
   return (neuron0x2012eb0()*-0.0371081);
}

double NNfunction_ss_cRcR::synapse0x202df00() {
   return (neuron0x20131f0()*-0.000481597);
}

double NNfunction_ss_cRcR::synapse0x202df40() {
   return (neuron0x2013530()*-0.0285745);
}

double NNfunction_ss_cRcR::synapse0x202df80() {
   return (neuron0x2013870()*-0.0972692);
}

double NNfunction_ss_cRcR::synapse0x202dfc0() {
   return (neuron0x2013bb0()*-0.00529996);
}

double NNfunction_ss_cRcR::synapse0x202e000() {
   return (neuron0x2013ef0()*0.00450747);
}

double NNfunction_ss_cRcR::synapse0x202e040() {
   return (neuron0x2014230()*-0.372616);
}

double NNfunction_ss_cRcR::synapse0x2021950() {
   return (neuron0x2014570()*0.00327678);
}

double NNfunction_ss_cRcR::synapse0x2021990() {
   return (neuron0x2014ad0()*0.0155549);
}

double NNfunction_ss_cRcR::synapse0x202e190() {
   return (neuron0x2014cf0()*0.0398123);
}

double NNfunction_ss_cRcR::synapse0x202e1d0() {
   return (neuron0x2015030()*-0.0586281);
}

double NNfunction_ss_cRcR::synapse0x202e210() {
   return (neuron0x2015370()*0.017898);
}

double NNfunction_ss_cRcR::synapse0x202e250() {
   return (neuron0x20156b0()*-0.029758);
}

double NNfunction_ss_cRcR::synapse0x202e290() {
   return (neuron0x20159f0()*-0.0329133);
}

double NNfunction_ss_cRcR::synapse0x202e2d0() {
   return (neuron0x2015d30()*0.0116713);
}

double NNfunction_ss_cRcR::synapse0x202e650() {
   return (neuron0x2011170()*0.142622);
}

double NNfunction_ss_cRcR::synapse0x202e690() {
   return (neuron0x20114b0()*0.209633);
}

double NNfunction_ss_cRcR::synapse0x202e6d0() {
   return (neuron0x20117f0()*-0.336542);
}

double NNfunction_ss_cRcR::synapse0x202e710() {
   return (neuron0x2011b30()*1.18236);
}

double NNfunction_ss_cRcR::synapse0x202e750() {
   return (neuron0x2011e70()*0.0542339);
}

double NNfunction_ss_cRcR::synapse0x202e790() {
   return (neuron0x20121b0()*-0.473153);
}

double NNfunction_ss_cRcR::synapse0x202e7d0() {
   return (neuron0x20124f0()*-1.47343);
}

double NNfunction_ss_cRcR::synapse0x202e810() {
   return (neuron0x2012830()*-0.91769);
}

double NNfunction_ss_cRcR::synapse0x202e850() {
   return (neuron0x2012b70()*-0.317571);
}

double NNfunction_ss_cRcR::synapse0x202e890() {
   return (neuron0x2012eb0()*-0.461949);
}

double NNfunction_ss_cRcR::synapse0x202e8d0() {
   return (neuron0x20131f0()*-0.14023);
}

double NNfunction_ss_cRcR::synapse0x202e910() {
   return (neuron0x2013530()*-0.196576);
}

double NNfunction_ss_cRcR::synapse0x202e950() {
   return (neuron0x2013870()*0.111358);
}

double NNfunction_ss_cRcR::synapse0x202e990() {
   return (neuron0x2013bb0()*0.287491);
}

double NNfunction_ss_cRcR::synapse0x202e9d0() {
   return (neuron0x2013ef0()*0.740242);
}

double NNfunction_ss_cRcR::synapse0x202ea10() {
   return (neuron0x2014230()*2.48452);
}

double NNfunction_ss_cRcR::synapse0x202e4a0() {
   return (neuron0x2014570()*0.811656);
}

double NNfunction_ss_cRcR::synapse0x202e4e0() {
   return (neuron0x2014ad0()*0.160117);
}

double NNfunction_ss_cRcR::synapse0x202eb60() {
   return (neuron0x2014cf0()*-0.0571359);
}

double NNfunction_ss_cRcR::synapse0x202eba0() {
   return (neuron0x2015030()*0.00775734);
}

double NNfunction_ss_cRcR::synapse0x202ebe0() {
   return (neuron0x2015370()*0.00396295);
}

double NNfunction_ss_cRcR::synapse0x202ec20() {
   return (neuron0x20156b0()*-0.00453561);
}

double NNfunction_ss_cRcR::synapse0x202ec60() {
   return (neuron0x20159f0()*0.218378);
}

double NNfunction_ss_cRcR::synapse0x202eca0() {
   return (neuron0x2015d30()*0.404402);
}

double NNfunction_ss_cRcR::synapse0x202f020() {
   return (neuron0x2011170()*0.0628908);
}

double NNfunction_ss_cRcR::synapse0x202f060() {
   return (neuron0x20114b0()*-0.98205);
}

double NNfunction_ss_cRcR::synapse0x202f0a0() {
   return (neuron0x20117f0()*0.447);
}

double NNfunction_ss_cRcR::synapse0x202f0e0() {
   return (neuron0x2011b30()*-0.405011);
}

double NNfunction_ss_cRcR::synapse0x202f120() {
   return (neuron0x2011e70()*0.598303);
}

double NNfunction_ss_cRcR::synapse0x202f160() {
   return (neuron0x20121b0()*-0.361622);
}

double NNfunction_ss_cRcR::synapse0x202f1a0() {
   return (neuron0x20124f0()*0.533808);
}

double NNfunction_ss_cRcR::synapse0x202f1e0() {
   return (neuron0x2012830()*0.286213);
}

double NNfunction_ss_cRcR::synapse0x202f220() {
   return (neuron0x2012b70()*1.78798);
}

double NNfunction_ss_cRcR::synapse0x202f260() {
   return (neuron0x2012eb0()*-0.228408);
}

double NNfunction_ss_cRcR::synapse0x202f2a0() {
   return (neuron0x20131f0()*-0.347714);
}

double NNfunction_ss_cRcR::synapse0x202f2e0() {
   return (neuron0x2013530()*-0.487882);
}

double NNfunction_ss_cRcR::synapse0x202f320() {
   return (neuron0x2013870()*-0.189247);
}

double NNfunction_ss_cRcR::synapse0x202f360() {
   return (neuron0x2013bb0()*0.139982);
}

double NNfunction_ss_cRcR::synapse0x202f3a0() {
   return (neuron0x2013ef0()*0.0504711);
}

double NNfunction_ss_cRcR::synapse0x202f3e0() {
   return (neuron0x2014230()*-0.359432);
}

double NNfunction_ss_cRcR::synapse0x202ee70() {
   return (neuron0x2014570()*0.680832);
}

double NNfunction_ss_cRcR::synapse0x202eeb0() {
   return (neuron0x2014ad0()*-0.135108);
}

double NNfunction_ss_cRcR::synapse0x202f530() {
   return (neuron0x2014cf0()*0.0871862);
}

double NNfunction_ss_cRcR::synapse0x202f570() {
   return (neuron0x2015030()*0.606194);
}

double NNfunction_ss_cRcR::synapse0x202f5b0() {
   return (neuron0x2015370()*0.0775637);
}

double NNfunction_ss_cRcR::synapse0x202f5f0() {
   return (neuron0x20156b0()*-0.0126932);
}

double NNfunction_ss_cRcR::synapse0x202f630() {
   return (neuron0x20159f0()*-0.321672);
}

double NNfunction_ss_cRcR::synapse0x202f670() {
   return (neuron0x2015d30()*-0.161679);
}

double NNfunction_ss_cRcR::synapse0x202f9f0() {
   return (neuron0x2011170()*-0.0958975);
}

double NNfunction_ss_cRcR::synapse0x202fa30() {
   return (neuron0x20114b0()*-0.0187375);
}

double NNfunction_ss_cRcR::synapse0x202fa70() {
   return (neuron0x20117f0()*-0.116095);
}

double NNfunction_ss_cRcR::synapse0x202fab0() {
   return (neuron0x2011b30()*-0.571742);
}

double NNfunction_ss_cRcR::synapse0x202faf0() {
   return (neuron0x2011e70()*-0.513438);
}

double NNfunction_ss_cRcR::synapse0x202fb30() {
   return (neuron0x20121b0()*0.454685);
}

double NNfunction_ss_cRcR::synapse0x202fb70() {
   return (neuron0x20124f0()*-0.471317);
}

double NNfunction_ss_cRcR::synapse0x202fbb0() {
   return (neuron0x2012830()*0.44971);
}

double NNfunction_ss_cRcR::synapse0x202fbf0() {
   return (neuron0x2012b70()*-0.47351);
}

double NNfunction_ss_cRcR::synapse0x202fc30() {
   return (neuron0x2012eb0()*-0.065877);
}

double NNfunction_ss_cRcR::synapse0x202fc70() {
   return (neuron0x20131f0()*-0.0278033);
}

double NNfunction_ss_cRcR::synapse0x202fcb0() {
   return (neuron0x2013530()*0.268014);
}

double NNfunction_ss_cRcR::synapse0x202fcf0() {
   return (neuron0x2013870()*-0.631285);
}

double NNfunction_ss_cRcR::synapse0x202fd30() {
   return (neuron0x2013bb0()*-0.346067);
}

double NNfunction_ss_cRcR::synapse0x202fd70() {
   return (neuron0x2013ef0()*0.64142);
}

double NNfunction_ss_cRcR::synapse0x202fdb0() {
   return (neuron0x2014230()*0.777066);
}

double NNfunction_ss_cRcR::synapse0x202f840() {
   return (neuron0x2014570()*-0.358931);
}

double NNfunction_ss_cRcR::synapse0x202f880() {
   return (neuron0x2014ad0()*0.183256);
}

double NNfunction_ss_cRcR::synapse0x202ff00() {
   return (neuron0x2014cf0()*0.678083);
}

double NNfunction_ss_cRcR::synapse0x202ff40() {
   return (neuron0x2015030()*-0.21849);
}

double NNfunction_ss_cRcR::synapse0x202ff80() {
   return (neuron0x2015370()*-0.389691);
}

double NNfunction_ss_cRcR::synapse0x202ffc0() {
   return (neuron0x20156b0()*0.0819566);
}

double NNfunction_ss_cRcR::synapse0x2030000() {
   return (neuron0x20159f0()*-0.12057);
}

double NNfunction_ss_cRcR::synapse0x2030040() {
   return (neuron0x2015d30()*-0.0537805);
}

double NNfunction_ss_cRcR::synapse0x20303c0() {
   return (neuron0x2011170()*0.0195818);
}

double NNfunction_ss_cRcR::synapse0x2030400() {
   return (neuron0x20114b0()*-0.0656334);
}

double NNfunction_ss_cRcR::synapse0x2030440() {
   return (neuron0x20117f0()*0.0062359);
}

double NNfunction_ss_cRcR::synapse0x2030480() {
   return (neuron0x2011b30()*-0.682187);
}

double NNfunction_ss_cRcR::synapse0x20304c0() {
   return (neuron0x2011e70()*-0.0380819);
}

double NNfunction_ss_cRcR::synapse0x2030500() {
   return (neuron0x20121b0()*-0.0145664);
}

double NNfunction_ss_cRcR::synapse0x2030540() {
   return (neuron0x20124f0()*-0.0379849);
}

double NNfunction_ss_cRcR::synapse0x2030580() {
   return (neuron0x2012830()*-0.0505799);
}

double NNfunction_ss_cRcR::synapse0x20305c0() {
   return (neuron0x2012b70()*-0.108054);
}

double NNfunction_ss_cRcR::synapse0x2030600() {
   return (neuron0x2012eb0()*0.0611148);
}

double NNfunction_ss_cRcR::synapse0x2030640() {
   return (neuron0x20131f0()*0.0273977);
}

double NNfunction_ss_cRcR::synapse0x2030680() {
   return (neuron0x2013530()*-0.0251547);
}

double NNfunction_ss_cRcR::synapse0x20306c0() {
   return (neuron0x2013870()*0.0313326);
}

double NNfunction_ss_cRcR::synapse0x2030700() {
   return (neuron0x2013bb0()*-0.0164387);
}

double NNfunction_ss_cRcR::synapse0x2030740() {
   return (neuron0x2013ef0()*-0.026267);
}

double NNfunction_ss_cRcR::synapse0x2030780() {
   return (neuron0x2014230()*0.0705627);
}

double NNfunction_ss_cRcR::synapse0x2030210() {
   return (neuron0x2014570()*-0.0322585);
}

double NNfunction_ss_cRcR::synapse0x2030250() {
   return (neuron0x2014ad0()*0.0693195);
}

double NNfunction_ss_cRcR::synapse0x20308d0() {
   return (neuron0x2014cf0()*0.212468);
}

double NNfunction_ss_cRcR::synapse0x2030910() {
   return (neuron0x2015030()*-0.0466827);
}

double NNfunction_ss_cRcR::synapse0x2030950() {
   return (neuron0x2015370()*-0.0248144);
}

double NNfunction_ss_cRcR::synapse0x2030990() {
   return (neuron0x20156b0()*-0.00877242);
}

double NNfunction_ss_cRcR::synapse0x20309d0() {
   return (neuron0x20159f0()*0.00974049);
}

double NNfunction_ss_cRcR::synapse0x2030a10() {
   return (neuron0x2015d30()*-0.0121755);
}

double NNfunction_ss_cRcR::synapse0x2030d90() {
   return (neuron0x2011170()*-0.0332227);
}

double NNfunction_ss_cRcR::synapse0x2030dd0() {
   return (neuron0x20114b0()*0.152172);
}

double NNfunction_ss_cRcR::synapse0x2030e10() {
   return (neuron0x20117f0()*-0.113662);
}

double NNfunction_ss_cRcR::synapse0x2030e50() {
   return (neuron0x2011b30()*6.28947);
}

double NNfunction_ss_cRcR::synapse0x2030e90() {
   return (neuron0x2011e70()*-0.0806872);
}

double NNfunction_ss_cRcR::synapse0x2030ed0() {
   return (neuron0x20121b0()*-0.0377787);
}

double NNfunction_ss_cRcR::synapse0x2030f10() {
   return (neuron0x20124f0()*-0.025846);
}

double NNfunction_ss_cRcR::synapse0x2030f50() {
   return (neuron0x2012830()*-0.173693);
}

double NNfunction_ss_cRcR::synapse0x2030f90() {
   return (neuron0x2012b70()*-0.149748);
}

double NNfunction_ss_cRcR::synapse0x2030fd0() {
   return (neuron0x2012eb0()*0.0697531);
}

double NNfunction_ss_cRcR::synapse0x2031010() {
   return (neuron0x20131f0()*0.220227);
}

double NNfunction_ss_cRcR::synapse0x2031050() {
   return (neuron0x2013530()*0.163161);
}

double NNfunction_ss_cRcR::synapse0x2031090() {
   return (neuron0x2013870()*0.247082);
}

double NNfunction_ss_cRcR::synapse0x20310d0() {
   return (neuron0x2013bb0()*-0.0982777);
}

double NNfunction_ss_cRcR::synapse0x2031110() {
   return (neuron0x2013ef0()*0.0807689);
}

double NNfunction_ss_cRcR::synapse0x2031150() {
   return (neuron0x2014230()*-2.16985);
}

double NNfunction_ss_cRcR::synapse0x2030be0() {
   return (neuron0x2014570()*-0.212927);
}

double NNfunction_ss_cRcR::synapse0x2030c20() {
   return (neuron0x2014ad0()*0.0517332);
}

double NNfunction_ss_cRcR::synapse0x20312a0() {
   return (neuron0x2014cf0()*0.0840009);
}

double NNfunction_ss_cRcR::synapse0x20312e0() {
   return (neuron0x2015030()*0.166925);
}

double NNfunction_ss_cRcR::synapse0x2031320() {
   return (neuron0x2015370()*-0.139893);
}

double NNfunction_ss_cRcR::synapse0x2031360() {
   return (neuron0x20156b0()*-0.0706931);
}

double NNfunction_ss_cRcR::synapse0x20313a0() {
   return (neuron0x20159f0()*-0.0711621);
}

double NNfunction_ss_cRcR::synapse0x20313e0() {
   return (neuron0x2015d30()*-0.0636596);
}

double NNfunction_ss_cRcR::synapse0x2031760() {
   return (neuron0x2011170()*0.251487);
}

double NNfunction_ss_cRcR::synapse0x20317a0() {
   return (neuron0x20114b0()*-0.210408);
}

double NNfunction_ss_cRcR::synapse0x20317e0() {
   return (neuron0x20117f0()*0.36192);
}

double NNfunction_ss_cRcR::synapse0x2031820() {
   return (neuron0x2011b30()*0.869681);
}

double NNfunction_ss_cRcR::synapse0x2031860() {
   return (neuron0x2011e70()*0.183861);
}

double NNfunction_ss_cRcR::synapse0x20318a0() {
   return (neuron0x20121b0()*-0.740222);
}

double NNfunction_ss_cRcR::synapse0x20318e0() {
   return (neuron0x20124f0()*-2.2959);
}

double NNfunction_ss_cRcR::synapse0x2031920() {
   return (neuron0x2012830()*-0.909249);
}

double NNfunction_ss_cRcR::synapse0x2031960() {
   return (neuron0x2012b70()*0.138071);
}

double NNfunction_ss_cRcR::synapse0x20319a0() {
   return (neuron0x2012eb0()*0.314469);
}

double NNfunction_ss_cRcR::synapse0x20319e0() {
   return (neuron0x20131f0()*-0.499964);
}

double NNfunction_ss_cRcR::synapse0x2031a20() {
   return (neuron0x2013530()*-0.500421);
}

double NNfunction_ss_cRcR::synapse0x2031a60() {
   return (neuron0x2013870()*-0.0630067);
}

double NNfunction_ss_cRcR::synapse0x2031aa0() {
   return (neuron0x2013bb0()*-0.17968);
}

double NNfunction_ss_cRcR::synapse0x2031ae0() {
   return (neuron0x2013ef0()*0.0304443);
}

double NNfunction_ss_cRcR::synapse0x2031b20() {
   return (neuron0x2014230()*0.259474);
}

double NNfunction_ss_cRcR::synapse0x20315b0() {
   return (neuron0x2014570()*-0.589032);
}

double NNfunction_ss_cRcR::synapse0x20315f0() {
   return (neuron0x2014ad0()*-0.0254691);
}

double NNfunction_ss_cRcR::synapse0x2031c70() {
   return (neuron0x2014cf0()*0.073601);
}

double NNfunction_ss_cRcR::synapse0x2031cb0() {
   return (neuron0x2015030()*0.393698);
}

double NNfunction_ss_cRcR::synapse0x2031cf0() {
   return (neuron0x2015370()*-0.566141);
}

double NNfunction_ss_cRcR::synapse0x2031d30() {
   return (neuron0x20156b0()*0.182608);
}

double NNfunction_ss_cRcR::synapse0x2031d70() {
   return (neuron0x20159f0()*1.01099);
}

double NNfunction_ss_cRcR::synapse0x2031db0() {
   return (neuron0x2015d30()*-0.506944);
}

double NNfunction_ss_cRcR::synapse0x2032130() {
   return (neuron0x2011170()*0.0136917);
}

double NNfunction_ss_cRcR::synapse0x2032170() {
   return (neuron0x20114b0()*-0.142872);
}

double NNfunction_ss_cRcR::synapse0x20321b0() {
   return (neuron0x20117f0()*0.0429523);
}

double NNfunction_ss_cRcR::synapse0x20321f0() {
   return (neuron0x2011b30()*-0.0725857);
}

double NNfunction_ss_cRcR::synapse0x2032230() {
   return (neuron0x2011e70()*-0.00486346);
}

double NNfunction_ss_cRcR::synapse0x2032270() {
   return (neuron0x20121b0()*-0.00646914);
}

double NNfunction_ss_cRcR::synapse0x20322b0() {
   return (neuron0x20124f0()*-0.00819306);
}

double NNfunction_ss_cRcR::synapse0x20322f0() {
   return (neuron0x2012830()*-0.0693073);
}

double NNfunction_ss_cRcR::synapse0x2032330() {
   return (neuron0x2012b70()*-0.00432585);
}

double NNfunction_ss_cRcR::synapse0x2032370() {
   return (neuron0x2012eb0()*0.0430856);
}

double NNfunction_ss_cRcR::synapse0x20323b0() {
   return (neuron0x20131f0()*-0.00588665);
}

double NNfunction_ss_cRcR::synapse0x20323f0() {
   return (neuron0x2013530()*-0.613206);
}

double NNfunction_ss_cRcR::synapse0x2032430() {
   return (neuron0x2013870()*-0.480674);
}

double NNfunction_ss_cRcR::synapse0x2032470() {
   return (neuron0x2013bb0()*0.0525842);
}

double NNfunction_ss_cRcR::synapse0x20324b0() {
   return (neuron0x2013ef0()*-0.212103);
}

double NNfunction_ss_cRcR::synapse0x20324f0() {
   return (neuron0x2014230()*0.0142823);
}

double NNfunction_ss_cRcR::synapse0x2031f80() {
   return (neuron0x2014570()*0.058229);
}

double NNfunction_ss_cRcR::synapse0x2031fc0() {
   return (neuron0x2014ad0()*-0.292804);
}

double NNfunction_ss_cRcR::synapse0x2032640() {
   return (neuron0x2014cf0()*-0.339116);
}

double NNfunction_ss_cRcR::synapse0x2032680() {
   return (neuron0x2015030()*0.0593763);
}

double NNfunction_ss_cRcR::synapse0x20326c0() {
   return (neuron0x2015370()*0.0580375);
}

double NNfunction_ss_cRcR::synapse0x2032700() {
   return (neuron0x20156b0()*0.00250399);
}

double NNfunction_ss_cRcR::synapse0x2032740() {
   return (neuron0x20159f0()*-0.00441451);
}

double NNfunction_ss_cRcR::synapse0x2032780() {
   return (neuron0x2015d30()*0.0143546);
}

double NNfunction_ss_cRcR::synapse0x201b230() {
   return (neuron0x2011170()*0.496874);
}

double NNfunction_ss_cRcR::synapse0x201b270() {
   return (neuron0x20114b0()*-0.205488);
}

double NNfunction_ss_cRcR::synapse0x201b2b0() {
   return (neuron0x20117f0()*-0.35321);
}

double NNfunction_ss_cRcR::synapse0x201b2f0() {
   return (neuron0x2011b30()*-0.391718);
}

double NNfunction_ss_cRcR::synapse0x201b330() {
   return (neuron0x2011e70()*0.615176);
}

double NNfunction_ss_cRcR::synapse0x201b370() {
   return (neuron0x20121b0()*-1.66565);
}

double NNfunction_ss_cRcR::synapse0x201b3b0() {
   return (neuron0x20124f0()*0.205496);
}

double NNfunction_ss_cRcR::synapse0x201b3f0() {
   return (neuron0x2012830()*-1.62727);
}

double NNfunction_ss_cRcR::synapse0x2032f10() {
   return (neuron0x2012b70()*-0.13417);
}

double NNfunction_ss_cRcR::synapse0x2032f50() {
   return (neuron0x2012eb0()*-0.377937);
}

double NNfunction_ss_cRcR::synapse0x2032f90() {
   return (neuron0x20131f0()*-0.570285);
}

double NNfunction_ss_cRcR::synapse0x2032fd0() {
   return (neuron0x2013530()*-0.465345);
}

double NNfunction_ss_cRcR::synapse0x2033010() {
   return (neuron0x2013870()*0.770217);
}

double NNfunction_ss_cRcR::synapse0x2033050() {
   return (neuron0x2013bb0()*-0.457885);
}

double NNfunction_ss_cRcR::synapse0x2033090() {
   return (neuron0x2013ef0()*-0.30071);
}

double NNfunction_ss_cRcR::synapse0x20330d0() {
   return (neuron0x2014230()*0.257141);
}

double NNfunction_ss_cRcR::synapse0x2032950() {
   return (neuron0x2014570()*0.759308);
}

double NNfunction_ss_cRcR::synapse0x2032990() {
   return (neuron0x2014ad0()*0.0785534);
}

double NNfunction_ss_cRcR::synapse0x2033220() {
   return (neuron0x2014cf0()*0.272943);
}

double NNfunction_ss_cRcR::synapse0x2033260() {
   return (neuron0x2015030()*-0.0939103);
}

double NNfunction_ss_cRcR::synapse0x20332a0() {
   return (neuron0x2015370()*-0.132625);
}

double NNfunction_ss_cRcR::synapse0x20332e0() {
   return (neuron0x20156b0()*0.169828);
}

double NNfunction_ss_cRcR::synapse0x2033320() {
   return (neuron0x20159f0()*-0.284737);
}

double NNfunction_ss_cRcR::synapse0x2033360() {
   return (neuron0x2015d30()*-0.627849);
}

double NNfunction_ss_cRcR::synapse0x20336e0() {
   return (neuron0x2011170()*-0.692942);
}

double NNfunction_ss_cRcR::synapse0x2033720() {
   return (neuron0x20114b0()*1.05898);
}

double NNfunction_ss_cRcR::synapse0x2033760() {
   return (neuron0x20117f0()*-0.0763276);
}

double NNfunction_ss_cRcR::synapse0x20337a0() {
   return (neuron0x2011b30()*-1.71638);
}

double NNfunction_ss_cRcR::synapse0x20337e0() {
   return (neuron0x2011e70()*-0.402448);
}

double NNfunction_ss_cRcR::synapse0x2033820() {
   return (neuron0x20121b0()*-0.189149);
}

double NNfunction_ss_cRcR::synapse0x2033860() {
   return (neuron0x20124f0()*0.0806713);
}

double NNfunction_ss_cRcR::synapse0x20338a0() {
   return (neuron0x2012830()*-1.04938);
}

double NNfunction_ss_cRcR::synapse0x20338e0() {
   return (neuron0x2012b70()*-0.365774);
}

double NNfunction_ss_cRcR::synapse0x2033920() {
   return (neuron0x2012eb0()*-0.648974);
}

double NNfunction_ss_cRcR::synapse0x2033960() {
   return (neuron0x20131f0()*-0.189576);
}

double NNfunction_ss_cRcR::synapse0x20339a0() {
   return (neuron0x2013530()*0.381188);
}

double NNfunction_ss_cRcR::synapse0x20339e0() {
   return (neuron0x2013870()*0.967449);
}

double NNfunction_ss_cRcR::synapse0x2033a20() {
   return (neuron0x2013bb0()*0.537451);
}

double NNfunction_ss_cRcR::synapse0x2033a60() {
   return (neuron0x2013ef0()*0.727456);
}

double NNfunction_ss_cRcR::synapse0x2033aa0() {
   return (neuron0x2014230()*1.76469);
}

double NNfunction_ss_cRcR::synapse0x2033530() {
   return (neuron0x2014570()*0.325656);
}

double NNfunction_ss_cRcR::synapse0x2033570() {
   return (neuron0x2014ad0()*0.129389);
}

double NNfunction_ss_cRcR::synapse0x2033bf0() {
   return (neuron0x2014cf0()*0.328981);
}

double NNfunction_ss_cRcR::synapse0x2033c30() {
   return (neuron0x2015030()*0.124406);
}

double NNfunction_ss_cRcR::synapse0x2033c70() {
   return (neuron0x2015370()*0.483614);
}

double NNfunction_ss_cRcR::synapse0x2033cb0() {
   return (neuron0x20156b0()*0.140944);
}

double NNfunction_ss_cRcR::synapse0x2033cf0() {
   return (neuron0x20159f0()*-0.369902);
}

double NNfunction_ss_cRcR::synapse0x2033d30() {
   return (neuron0x2015d30()*0.341527);
}

double NNfunction_ss_cRcR::synapse0x20340b0() {
   return (neuron0x2011170()*-0.160568);
}

double NNfunction_ss_cRcR::synapse0x20340f0() {
   return (neuron0x20114b0()*-0.110271);
}

double NNfunction_ss_cRcR::synapse0x2034130() {
   return (neuron0x20117f0()*0.306667);
}

double NNfunction_ss_cRcR::synapse0x2034170() {
   return (neuron0x2011b30()*0.0651319);
}

double NNfunction_ss_cRcR::synapse0x20341b0() {
   return (neuron0x2011e70()*0.272444);
}

double NNfunction_ss_cRcR::synapse0x20341f0() {
   return (neuron0x20121b0()*-1.15367);
}

double NNfunction_ss_cRcR::synapse0x2034230() {
   return (neuron0x20124f0()*-1.19184);
}

double NNfunction_ss_cRcR::synapse0x2034270() {
   return (neuron0x2012830()*-1.27218);
}

double NNfunction_ss_cRcR::synapse0x20342b0() {
   return (neuron0x2012b70()*0.274759);
}

double NNfunction_ss_cRcR::synapse0x20342f0() {
   return (neuron0x2012eb0()*-0.095589);
}

double NNfunction_ss_cRcR::synapse0x2034330() {
   return (neuron0x20131f0()*-0.0749261);
}

double NNfunction_ss_cRcR::synapse0x2034370() {
   return (neuron0x2013530()*-0.230499);
}

double NNfunction_ss_cRcR::synapse0x20343b0() {
   return (neuron0x2013870()*-0.193578);
}

double NNfunction_ss_cRcR::synapse0x20343f0() {
   return (neuron0x2013bb0()*-0.459587);
}

double NNfunction_ss_cRcR::synapse0x2034430() {
   return (neuron0x2013ef0()*-1.32351);
}

double NNfunction_ss_cRcR::synapse0x2034470() {
   return (neuron0x2014230()*2.75762);
}

double NNfunction_ss_cRcR::synapse0x2033f00() {
   return (neuron0x2014570()*0.382429);
}

double NNfunction_ss_cRcR::synapse0x2033f40() {
   return (neuron0x2014ad0()*-0.189774);
}

double NNfunction_ss_cRcR::synapse0x2024a70() {
   return (neuron0x2014cf0()*0.134573);
}

double NNfunction_ss_cRcR::synapse0x2024ab0() {
   return (neuron0x2015030()*0.218364);
}

double NNfunction_ss_cRcR::synapse0x2024af0() {
   return (neuron0x2015370()*-0.233887);
}

double NNfunction_ss_cRcR::synapse0x2024b30() {
   return (neuron0x20156b0()*0.356641);
}

double NNfunction_ss_cRcR::synapse0x2024b70() {
   return (neuron0x20159f0()*-0.00445279);
}

double NNfunction_ss_cRcR::synapse0x2024bb0() {
   return (neuron0x2015d30()*-0.0770958);
}

double NNfunction_ss_cRcR::synapse0x2024f30() {
   return (neuron0x2011170()*-0.000112487);
}

double NNfunction_ss_cRcR::synapse0x2024f70() {
   return (neuron0x20114b0()*0.106775);
}

double NNfunction_ss_cRcR::synapse0x2024fb0() {
   return (neuron0x20117f0()*-0.0128637);
}

double NNfunction_ss_cRcR::synapse0x2024ff0() {
   return (neuron0x2011b30()*1.90502);
}

double NNfunction_ss_cRcR::synapse0x2025030() {
   return (neuron0x2011e70()*0.0023213);
}

double NNfunction_ss_cRcR::synapse0x2025070() {
   return (neuron0x20121b0()*-0.064172);
}

double NNfunction_ss_cRcR::synapse0x20250b0() {
   return (neuron0x20124f0()*-0.0189289);
}

double NNfunction_ss_cRcR::synapse0x20250f0() {
   return (neuron0x2012830()*-0.0887702);
}

double NNfunction_ss_cRcR::synapse0x2025130() {
   return (neuron0x2012b70()*-0.117708);
}

double NNfunction_ss_cRcR::synapse0x2025170() {
   return (neuron0x2012eb0()*-0.116837);
}

double NNfunction_ss_cRcR::synapse0x20251b0() {
   return (neuron0x20131f0()*-0.111959);
}

double NNfunction_ss_cRcR::synapse0x20251f0() {
   return (neuron0x2013530()*0.00216097);
}

double NNfunction_ss_cRcR::synapse0x2025230() {
   return (neuron0x2013870()*0.0449508);
}

double NNfunction_ss_cRcR::synapse0x2025270() {
   return (neuron0x2013bb0()*0.0936321);
}

double NNfunction_ss_cRcR::synapse0x20252b0() {
   return (neuron0x2013ef0()*0.0319968);
}

double NNfunction_ss_cRcR::synapse0x20252f0() {
   return (neuron0x2014230()*1.00507);
}

double NNfunction_ss_cRcR::synapse0x2024d80() {
   return (neuron0x2014570()*-0.0621154);
}

double NNfunction_ss_cRcR::synapse0x2024dc0() {
   return (neuron0x2014ad0()*0.0106694);
}

double NNfunction_ss_cRcR::synapse0x2025440() {
   return (neuron0x2014cf0()*0.0163759);
}

double NNfunction_ss_cRcR::synapse0x2025480() {
   return (neuron0x2015030()*-0.100307);
}

double NNfunction_ss_cRcR::synapse0x20254c0() {
   return (neuron0x2015370()*0.0596505);
}

double NNfunction_ss_cRcR::synapse0x2025500() {
   return (neuron0x20156b0()*0.0184327);
}

double NNfunction_ss_cRcR::synapse0x2025540() {
   return (neuron0x20159f0()*-0.0174952);
}

double NNfunction_ss_cRcR::synapse0x2025580() {
   return (neuron0x2015d30()*0.04704);
}

double NNfunction_ss_cRcR::synapse0x2025900() {
   return (neuron0x2011170()*0.151414);
}

double NNfunction_ss_cRcR::synapse0x2025940() {
   return (neuron0x20114b0()*2.27484);
}

double NNfunction_ss_cRcR::synapse0x2025980() {
   return (neuron0x20117f0()*1.96132);
}

double NNfunction_ss_cRcR::synapse0x20259c0() {
   return (neuron0x2011b30()*-1.21333);
}

double NNfunction_ss_cRcR::synapse0x2025a00() {
   return (neuron0x2011e70()*0.0249228);
}

double NNfunction_ss_cRcR::synapse0x2025a40() {
   return (neuron0x20121b0()*0.622991);
}

double NNfunction_ss_cRcR::synapse0x2025a80() {
   return (neuron0x20124f0()*-0.44749);
}

double NNfunction_ss_cRcR::synapse0x2025ac0() {
   return (neuron0x2012830()*-0.146549);
}

double NNfunction_ss_cRcR::synapse0x2025b00() {
   return (neuron0x2012b70()*-0.237434);
}

double NNfunction_ss_cRcR::synapse0x2025b40() {
   return (neuron0x2012eb0()*0.168959);
}

double NNfunction_ss_cRcR::synapse0x2025b80() {
   return (neuron0x20131f0()*0.403702);
}

double NNfunction_ss_cRcR::synapse0x2025bc0() {
   return (neuron0x2013530()*-1.01862);
}

double NNfunction_ss_cRcR::synapse0x2025c00() {
   return (neuron0x2013870()*-0.806562);
}

double NNfunction_ss_cRcR::synapse0x2025c40() {
   return (neuron0x2013bb0()*-0.904602);
}

double NNfunction_ss_cRcR::synapse0x2025c80() {
   return (neuron0x2013ef0()*-0.476724);
}

double NNfunction_ss_cRcR::synapse0x2025cc0() {
   return (neuron0x2014230()*1.89365);
}

double NNfunction_ss_cRcR::synapse0x2025750() {
   return (neuron0x2014570()*-0.282274);
}

double NNfunction_ss_cRcR::synapse0x2025790() {
   return (neuron0x2014ad0()*0.578926);
}

double NNfunction_ss_cRcR::synapse0x2025e10() {
   return (neuron0x2014cf0()*0.753979);
}

double NNfunction_ss_cRcR::synapse0x2025e50() {
   return (neuron0x2015030()*-0.84422);
}

double NNfunction_ss_cRcR::synapse0x2025e90() {
   return (neuron0x2015370()*0.378968);
}

double NNfunction_ss_cRcR::synapse0x2025ed0() {
   return (neuron0x20156b0()*-0.0359756);
}

double NNfunction_ss_cRcR::synapse0x2025f10() {
   return (neuron0x20159f0()*-0.205729);
}

double NNfunction_ss_cRcR::synapse0x2025f50() {
   return (neuron0x2015d30()*0.0586366);
}

double NNfunction_ss_cRcR::synapse0x20262d0() {
   return (neuron0x2011170()*-0.0712177);
}

double NNfunction_ss_cRcR::synapse0x2026310() {
   return (neuron0x20114b0()*-0.487412);
}

double NNfunction_ss_cRcR::synapse0x2026350() {
   return (neuron0x20117f0()*-0.388175);
}

double NNfunction_ss_cRcR::synapse0x2026390() {
   return (neuron0x2011b30()*-0.684029);
}

double NNfunction_ss_cRcR::synapse0x20263d0() {
   return (neuron0x2011e70()*0.402007);
}

double NNfunction_ss_cRcR::synapse0x2026410() {
   return (neuron0x20121b0()*-0.775407);
}

double NNfunction_ss_cRcR::synapse0x2026450() {
   return (neuron0x20124f0()*-0.459786);
}

double NNfunction_ss_cRcR::synapse0x2026490() {
   return (neuron0x2012830()*0.3837);
}

double NNfunction_ss_cRcR::synapse0x20264d0() {
   return (neuron0x2012b70()*0.264247);
}

double NNfunction_ss_cRcR::synapse0x2026510() {
   return (neuron0x2012eb0()*-0.0971989);
}

double NNfunction_ss_cRcR::synapse0x2026550() {
   return (neuron0x20131f0()*-0.0710219);
}

double NNfunction_ss_cRcR::synapse0x2026590() {
   return (neuron0x2013530()*-0.85717);
}

double NNfunction_ss_cRcR::synapse0x20265d0() {
   return (neuron0x2013870()*0.191612);
}

double NNfunction_ss_cRcR::synapse0x2026610() {
   return (neuron0x2013bb0()*0.0270289);
}

double NNfunction_ss_cRcR::synapse0x2026650() {
   return (neuron0x2013ef0()*0.748596);
}

double NNfunction_ss_cRcR::synapse0x2026690() {
   return (neuron0x2014230()*0.777255);
}

double NNfunction_ss_cRcR::synapse0x2026120() {
   return (neuron0x2014570()*-0.60547);
}

double NNfunction_ss_cRcR::synapse0x2026160() {
   return (neuron0x2014ad0()*-0.357809);
}

double NNfunction_ss_cRcR::synapse0x20267e0() {
   return (neuron0x2014cf0()*-0.352063);
}

double NNfunction_ss_cRcR::synapse0x2026820() {
   return (neuron0x2015030()*0.0967322);
}

double NNfunction_ss_cRcR::synapse0x2026860() {
   return (neuron0x2015370()*-0.822833);
}

double NNfunction_ss_cRcR::synapse0x20268a0() {
   return (neuron0x20156b0()*-0.475951);
}

double NNfunction_ss_cRcR::synapse0x20268e0() {
   return (neuron0x20159f0()*0.490878);
}

double NNfunction_ss_cRcR::synapse0x2026920() {
   return (neuron0x2015d30()*-0.939619);
}

double NNfunction_ss_cRcR::synapse0x20387f0() {
   return (neuron0x2011170()*-0.0560065);
}

double NNfunction_ss_cRcR::synapse0x2038830() {
   return (neuron0x20114b0()*-0.845277);
}

double NNfunction_ss_cRcR::synapse0x2038870() {
   return (neuron0x20117f0()*0.108132);
}

double NNfunction_ss_cRcR::synapse0x20388b0() {
   return (neuron0x2011b30()*1.08952);
}

double NNfunction_ss_cRcR::synapse0x20388f0() {
   return (neuron0x2011e70()*-0.452578);
}

double NNfunction_ss_cRcR::synapse0x2038930() {
   return (neuron0x20121b0()*-0.713885);
}

double NNfunction_ss_cRcR::synapse0x2038970() {
   return (neuron0x20124f0()*-1.3231);
}

double NNfunction_ss_cRcR::synapse0x20389b0() {
   return (neuron0x2012830()*-0.421692);
}

double NNfunction_ss_cRcR::synapse0x20389f0() {
   return (neuron0x2012b70()*1.24517);
}

double NNfunction_ss_cRcR::synapse0x2038a30() {
   return (neuron0x2012eb0()*0.393005);
}

double NNfunction_ss_cRcR::synapse0x2038a70() {
   return (neuron0x20131f0()*0.721995);
}

double NNfunction_ss_cRcR::synapse0x2038ab0() {
   return (neuron0x2013530()*-0.564556);
}

double NNfunction_ss_cRcR::synapse0x2038af0() {
   return (neuron0x2013870()*-0.325139);
}

double NNfunction_ss_cRcR::synapse0x2038b30() {
   return (neuron0x2013bb0()*0.435639);
}

double NNfunction_ss_cRcR::synapse0x2038b70() {
   return (neuron0x2013ef0()*0.510882);
}

double NNfunction_ss_cRcR::synapse0x2038bb0() {
   return (neuron0x2014230()*-0.591594);
}

double NNfunction_ss_cRcR::synapse0x2026960() {
   return (neuron0x2014570()*0.995242);
}

double NNfunction_ss_cRcR::synapse0x20269a0() {
   return (neuron0x2014ad0()*0.641408);
}

double NNfunction_ss_cRcR::synapse0x2038d00() {
   return (neuron0x2014cf0()*-0.492981);
}

double NNfunction_ss_cRcR::synapse0x2038d40() {
   return (neuron0x2015030()*0.0410487);
}

double NNfunction_ss_cRcR::synapse0x2038d80() {
   return (neuron0x2015370()*-0.420579);
}

double NNfunction_ss_cRcR::synapse0x2038dc0() {
   return (neuron0x20156b0()*0.40067);
}

double NNfunction_ss_cRcR::synapse0x2038e00() {
   return (neuron0x20159f0()*-0.39165);
}

double NNfunction_ss_cRcR::synapse0x2038e40() {
   return (neuron0x2015d30()*-0.385902);
}

double NNfunction_ss_cRcR::synapse0x20391c0() {
   return (neuron0x2011170()*0.00544547);
}

double NNfunction_ss_cRcR::synapse0x2039200() {
   return (neuron0x20114b0()*0.184283);
}

double NNfunction_ss_cRcR::synapse0x2039240() {
   return (neuron0x20117f0()*0.00957553);
}

double NNfunction_ss_cRcR::synapse0x2039280() {
   return (neuron0x2011b30()*0.557776);
}

double NNfunction_ss_cRcR::synapse0x20392c0() {
   return (neuron0x2011e70()*0.030191);
}

double NNfunction_ss_cRcR::synapse0x2039300() {
   return (neuron0x20121b0()*0.0411636);
}

double NNfunction_ss_cRcR::synapse0x2039340() {
   return (neuron0x20124f0()*0.00404412);
}

double NNfunction_ss_cRcR::synapse0x2039380() {
   return (neuron0x2012830()*0.0331316);
}

double NNfunction_ss_cRcR::synapse0x20393c0() {
   return (neuron0x2012b70()*-0.0898904);
}

double NNfunction_ss_cRcR::synapse0x2039400() {
   return (neuron0x2012eb0()*-0.0479576);
}

double NNfunction_ss_cRcR::synapse0x2039440() {
   return (neuron0x20131f0()*0.0597439);
}

double NNfunction_ss_cRcR::synapse0x2039480() {
   return (neuron0x2013530()*-0.171253);
}

double NNfunction_ss_cRcR::synapse0x20394c0() {
   return (neuron0x2013870()*-0.0687666);
}

double NNfunction_ss_cRcR::synapse0x2039500() {
   return (neuron0x2013bb0()*0.0256419);
}

double NNfunction_ss_cRcR::synapse0x2039540() {
   return (neuron0x2013ef0()*0.017814);
}

double NNfunction_ss_cRcR::synapse0x2039580() {
   return (neuron0x2014230()*-0.0867825);
}

double NNfunction_ss_cRcR::synapse0x2039010() {
   return (neuron0x2014570()*0.0575298);
}

double NNfunction_ss_cRcR::synapse0x2039050() {
   return (neuron0x2014ad0()*0.11567);
}

double NNfunction_ss_cRcR::synapse0x20396d0() {
   return (neuron0x2014cf0()*0.0155768);
}

double NNfunction_ss_cRcR::synapse0x2039710() {
   return (neuron0x2015030()*-0.110495);
}

double NNfunction_ss_cRcR::synapse0x2039750() {
   return (neuron0x2015370()*-0.0162603);
}

double NNfunction_ss_cRcR::synapse0x2039790() {
   return (neuron0x20156b0()*-0.0317197);
}

double NNfunction_ss_cRcR::synapse0x20397d0() {
   return (neuron0x20159f0()*-0.00811141);
}

double NNfunction_ss_cRcR::synapse0x2039810() {
   return (neuron0x2015d30()*-0.00852758);
}

double NNfunction_ss_cRcR::synapse0x2039b90() {
   return (neuron0x2011170()*-1.61779e-05);
}

double NNfunction_ss_cRcR::synapse0x2039bd0() {
   return (neuron0x20114b0()*-0.29523);
}

double NNfunction_ss_cRcR::synapse0x2039c10() {
   return (neuron0x20117f0()*0.0589375);
}

double NNfunction_ss_cRcR::synapse0x2039c50() {
   return (neuron0x2011b30()*3.57091);
}

double NNfunction_ss_cRcR::synapse0x2039c90() {
   return (neuron0x2011e70()*0.0193424);
}

double NNfunction_ss_cRcR::synapse0x2039cd0() {
   return (neuron0x20121b0()*0.0296321);
}

double NNfunction_ss_cRcR::synapse0x2039d10() {
   return (neuron0x20124f0()*-0.0432952);
}

double NNfunction_ss_cRcR::synapse0x2039d50() {
   return (neuron0x2012830()*0.00125706);
}

double NNfunction_ss_cRcR::synapse0x2039d90() {
   return (neuron0x2012b70()*-0.0754664);
}

double NNfunction_ss_cRcR::synapse0x2039dd0() {
   return (neuron0x2012eb0()*0.0723142);
}

double NNfunction_ss_cRcR::synapse0x2039e10() {
   return (neuron0x20131f0()*0.0793888);
}

double NNfunction_ss_cRcR::synapse0x2039e50() {
   return (neuron0x2013530()*-0.0560046);
}

double NNfunction_ss_cRcR::synapse0x2039e90() {
   return (neuron0x2013870()*0.0120443);
}

double NNfunction_ss_cRcR::synapse0x2039ed0() {
   return (neuron0x2013bb0()*-0.0282115);
}

double NNfunction_ss_cRcR::synapse0x2039f10() {
   return (neuron0x2013ef0()*-0.0242841);
}

double NNfunction_ss_cRcR::synapse0x2039f50() {
   return (neuron0x2014230()*0.027785);
}

double NNfunction_ss_cRcR::synapse0x20399e0() {
   return (neuron0x2014570()*0.0605351);
}

double NNfunction_ss_cRcR::synapse0x2039a20() {
   return (neuron0x2014ad0()*-0.0482247);
}

double NNfunction_ss_cRcR::synapse0x203a0a0() {
   return (neuron0x2014cf0()*-0.0613255);
}

double NNfunction_ss_cRcR::synapse0x203a0e0() {
   return (neuron0x2015030()*0.117645);
}

double NNfunction_ss_cRcR::synapse0x203a120() {
   return (neuron0x2015370()*-0.00894043);
}

double NNfunction_ss_cRcR::synapse0x203a160() {
   return (neuron0x20156b0()*0.029774);
}

double NNfunction_ss_cRcR::synapse0x203a1a0() {
   return (neuron0x20159f0()*0.0583207);
}

double NNfunction_ss_cRcR::synapse0x203a1e0() {
   return (neuron0x2015d30()*-0.034845);
}

double NNfunction_ss_cRcR::synapse0x203a560() {
   return (neuron0x2011170()*0.00395283);
}

double NNfunction_ss_cRcR::synapse0x203a5a0() {
   return (neuron0x20114b0()*-0.416735);
}

double NNfunction_ss_cRcR::synapse0x203a5e0() {
   return (neuron0x20117f0()*-0.000919087);
}

double NNfunction_ss_cRcR::synapse0x203a620() {
   return (neuron0x2011b30()*-5.0215);
}

double NNfunction_ss_cRcR::synapse0x203a660() {
   return (neuron0x2011e70()*0.013262);
}

double NNfunction_ss_cRcR::synapse0x203a6a0() {
   return (neuron0x20121b0()*-0.0680786);
}

double NNfunction_ss_cRcR::synapse0x203a6e0() {
   return (neuron0x20124f0()*-0.157993);
}

double NNfunction_ss_cRcR::synapse0x203a720() {
   return (neuron0x2012830()*-0.142652);
}

double NNfunction_ss_cRcR::synapse0x203a760() {
   return (neuron0x2012b70()*-0.223667);
}

double NNfunction_ss_cRcR::synapse0x203a7a0() {
   return (neuron0x2012eb0()*0.0490222);
}

double NNfunction_ss_cRcR::synapse0x203a7e0() {
   return (neuron0x20131f0()*0.126452);
}

double NNfunction_ss_cRcR::synapse0x203a820() {
   return (neuron0x2013530()*-0.022642);
}

double NNfunction_ss_cRcR::synapse0x203a860() {
   return (neuron0x2013870()*0.0991845);
}

double NNfunction_ss_cRcR::synapse0x203a8a0() {
   return (neuron0x2013bb0()*-0.0884872);
}

double NNfunction_ss_cRcR::synapse0x203a8e0() {
   return (neuron0x2013ef0()*0.049409);
}

double NNfunction_ss_cRcR::synapse0x203a920() {
   return (neuron0x2014230()*-1.32884);
}

double NNfunction_ss_cRcR::synapse0x203a3b0() {
   return (neuron0x2014570()*0.0515118);
}

double NNfunction_ss_cRcR::synapse0x203a3f0() {
   return (neuron0x2014ad0()*-0.136867);
}

double NNfunction_ss_cRcR::synapse0x203aa70() {
   return (neuron0x2014cf0()*-0.0295561);
}

double NNfunction_ss_cRcR::synapse0x203aab0() {
   return (neuron0x2015030()*0.259012);
}

double NNfunction_ss_cRcR::synapse0x203aaf0() {
   return (neuron0x2015370()*0.18812);
}

double NNfunction_ss_cRcR::synapse0x203ab30() {
   return (neuron0x20156b0()*0.161552);
}

double NNfunction_ss_cRcR::synapse0x203ab70() {
   return (neuron0x20159f0()*0.0899554);
}

double NNfunction_ss_cRcR::synapse0x203abb0() {
   return (neuron0x2015d30()*0.0219067);
}

double NNfunction_ss_cRcR::synapse0x1ddaac0() {
   return (neuron0x20161a0()*-0.705448);
}

double NNfunction_ss_cRcR::synapse0x1ddab00() {
   return (neuron0x2016af0()*-0.494767);
}

double NNfunction_ss_cRcR::synapse0x2018660() {
   return (neuron0x20175d0()*0.0567887);
}

double NNfunction_ss_cRcR::synapse0x20186a0() {
   return (neuron0x2017070()*-0.562233);
}

double NNfunction_ss_cRcR::synapse0x2019030() {
   return (neuron0x20183b0()*-0.822396);
}

double NNfunction_ss_cRcR::synapse0x2019070() {
   return (neuron0x2018d80()*-0.328284);
}

double NNfunction_ss_cRcR::synapse0x2019e00() {
   return (neuron0x2019b50()*-0.247935);
}

double NNfunction_ss_cRcR::synapse0x2019e40() {
   return (neuron0x201a520()*-0.291606);
}

double NNfunction_ss_cRcR::synapse0x201a7d0() {
   return (neuron0x201aef0()*-0.103257);
}

double NNfunction_ss_cRcR::synapse0x201a810() {
   return (neuron0x201b9d0()*0.331638);
}

double NNfunction_ss_cRcR::synapse0x201b1a0() {
   return (neuron0x201c3a0()*0.195391);
}

double NNfunction_ss_cRcR::synapse0x201b1e0() {
   return (neuron0x2019480()*-0.414724);
}

double NNfunction_ss_cRcR::synapse0x201bc80() {
   return (neuron0x201df50()*0.337875);
}

double NNfunction_ss_cRcR::synapse0x201bcc0() {
   return (neuron0x201e920()*0.866331);
}

double NNfunction_ss_cRcR::synapse0x201c650() {
   return (neuron0x201f2f0()*-0.662451);
}

double NNfunction_ss_cRcR::synapse0x201c690() {
   return (neuron0x201fcc0()*-0.183773);
}

double NNfunction_ss_cRcR::synapse0x2019730() {
   return (neuron0x2021ad0()*-0.00318543);
}

double NNfunction_ss_cRcR::synapse0x2019770() {
   return (neuron0x2021db0()*-0.396755);
}

double NNfunction_ss_cRcR::synapse0x201e200() {
   return (neuron0x2022780()*-0.595438);
}

double NNfunction_ss_cRcR::synapse0x201e240() {
   return (neuron0x2023150()*-0.177213);
}

double NNfunction_ss_cRcR::synapse0x201ebd0() {
   return (neuron0x2023b20()*-0.68299);
}

double NNfunction_ss_cRcR::synapse0x201ec10() {
   return (neuron0x20244f0()*-0.271921);
}

double NNfunction_ss_cRcR::synapse0x201f5a0() {
   return (neuron0x201d040()*0.0813334);
}

double NNfunction_ss_cRcR::synapse0x201f5e0() {
   return (neuron0x201da10()*0.135337);
}

double NNfunction_ss_cRcR::synapse0x201ff70() {
   return (neuron0x2027280()*0.371696);
}

double NNfunction_ss_cRcR::synapse0x201ffb0() {
   return (neuron0x2027c50()*-0.0574148);
}

double NNfunction_ss_cRcR::synapse0x2014110() {
   return (neuron0x2028620()*-1.08847);
}

double NNfunction_ss_cRcR::synapse0x2014150() {
   return (neuron0x2028ff0()*-0.56279);
}

double NNfunction_ss_cRcR::synapse0x2022060() {
   return (neuron0x20299c0()*-0.770861);
}

double NNfunction_ss_cRcR::synapse0x20220a0() {
   return (neuron0x202a390()*0.0391006);
}

double NNfunction_ss_cRcR::synapse0x2022a30() {
   return (neuron0x202ad60()*-0.222827);
}

double NNfunction_ss_cRcR::synapse0x2022a70() {
   return (neuron0x202b730()*-0.161256);
}

double NNfunction_ss_cRcR::synapse0x2023400() {
   return (neuron0x20217c0()*-0.44033);
}

double NNfunction_ss_cRcR::synapse0x2023440() {
   return (neuron0x202e310()*0.437445);
}

double NNfunction_ss_cRcR::synapse0x2023dd0() {
   return (neuron0x202ece0()*-0.0985926);
}

double NNfunction_ss_cRcR::synapse0x2023e10() {
   return (neuron0x202f6b0()*-0.259575);
}

double NNfunction_ss_cRcR::synapse0x20247a0() {
   return (neuron0x2030080()*0.0835519);
}

double NNfunction_ss_cRcR::synapse0x20247e0() {
   return (neuron0x2030a50()*-0.549028);
}

double NNfunction_ss_cRcR::synapse0x201d2f0() {
   return (neuron0x2031420()*-0.0539316);
}

double NNfunction_ss_cRcR::synapse0x201d330() {
   return (neuron0x2031df0()*0.258712);
}

double NNfunction_ss_cRcR::synapse0x2026ba0() {
   return (neuron0x20327c0()*-0.197188);
}

double NNfunction_ss_cRcR::synapse0x2026be0() {
   return (neuron0x20333a0()*-0.189704);
}

double NNfunction_ss_cRcR::synapse0x2027530() {
   return (neuron0x2033d70()*0.578636);
}

double NNfunction_ss_cRcR::synapse0x2027570() {
   return (neuron0x2024bf0()*-0.705552);
}

double NNfunction_ss_cRcR::synapse0x2027f00() {
   return (neuron0x20255c0()*-0.252436);
}

double NNfunction_ss_cRcR::synapse0x2027f40() {
   return (neuron0x2025f90()*0.223091);
}

double NNfunction_ss_cRcR::synapse0x20288d0() {
   return (neuron0x20385d0()*-0.30193);
}

double NNfunction_ss_cRcR::synapse0x2028910() {
   return (neuron0x2038e80()*0.0440551);
}

double NNfunction_ss_cRcR::synapse0x20292a0() {
   return (neuron0x2039850()*0.789867);
}

double NNfunction_ss_cRcR::synapse0x20292e0() {
   return (neuron0x203a220()*-0.691605);
}

double NNfunction_ss_cRcR::synapse0x202b9e0() {
   return (neuron0x20161a0()*-0.236908);
}

double NNfunction_ss_cRcR::synapse0x202ba20() {
   return (neuron0x2016af0()*0.540705);
}

double NNfunction_ss_cRcR::synapse0x2020fa0() {
   return (neuron0x20175d0()*-1.1344);
}

double NNfunction_ss_cRcR::synapse0x2020fe0() {
   return (neuron0x2017070()*-0.379373);
}

double NNfunction_ss_cRcR::synapse0x202e5c0() {
   return (neuron0x20183b0()*-0.377357);
}

double NNfunction_ss_cRcR::synapse0x202e600() {
   return (neuron0x2018d80()*1.34243);
}

double NNfunction_ss_cRcR::synapse0x202ef90() {
   return (neuron0x2019b50()*-0.701439);
}

double NNfunction_ss_cRcR::synapse0x202efd0() {
   return (neuron0x201a520()*0.256445);
}

double NNfunction_ss_cRcR::synapse0x202f960() {
   return (neuron0x201aef0()*-2.1749);
}

double NNfunction_ss_cRcR::synapse0x202f9a0() {
   return (neuron0x201b9d0()*1.59867);
}

double NNfunction_ss_cRcR::synapse0x2030330() {
   return (neuron0x201c3a0()*-1.77285);
}

double NNfunction_ss_cRcR::synapse0x2030370() {
   return (neuron0x2019480()*-0.0957386);
}

double NNfunction_ss_cRcR::synapse0x2030d00() {
   return (neuron0x201df50()*0.845747);
}

double NNfunction_ss_cRcR::synapse0x2030d40() {
   return (neuron0x201e920()*2.36385);
}

double NNfunction_ss_cRcR::synapse0x20316d0() {
   return (neuron0x201f2f0()*-3.30079);
}

double NNfunction_ss_cRcR::synapse0x2031710() {
   return (neuron0x201fcc0()*0.566207);
}

double NNfunction_ss_cRcR::synapse0x20320a0() {
   return (neuron0x2021ad0()*-0.648069);
}

double NNfunction_ss_cRcR::synapse0x20320e0() {
   return (neuron0x2021db0()*-3.98896);
}

double NNfunction_ss_cRcR::synapse0x2032a70() {
   return (neuron0x2022780()*-2.71276);
}

double NNfunction_ss_cRcR::synapse0x2032ab0() {
   return (neuron0x2023150()*-1.71175);
}

double NNfunction_ss_cRcR::synapse0x2033650() {
   return (neuron0x2023b20()*-2.67082);
}

double NNfunction_ss_cRcR::synapse0x2033690() {
   return (neuron0x20244f0()*-3.21946);
}

double NNfunction_ss_cRcR::synapse0x2034020() {
   return (neuron0x201d040()*0.228737);
}

double NNfunction_ss_cRcR::synapse0x2034060() {
   return (neuron0x201da10()*0.698014);
}

double NNfunction_ss_cRcR::synapse0x2024ea0() {
   return (neuron0x2027280()*-0.973412);
}

double NNfunction_ss_cRcR::synapse0x2024ee0() {
   return (neuron0x2027c50()*1.4492);
}

double NNfunction_ss_cRcR::synapse0x2025870() {
   return (neuron0x2028620()*-1.69475);
}

double NNfunction_ss_cRcR::synapse0x20258b0() {
   return (neuron0x2028ff0()*-3.26279);
}

double NNfunction_ss_cRcR::synapse0x2026240() {
   return (neuron0x20299c0()*1.02928);
}

double NNfunction_ss_cRcR::synapse0x2026280() {
   return (neuron0x202a390()*-2.06205);
}

double NNfunction_ss_cRcR::synapse0x2038760() {
   return (neuron0x202ad60()*0.109098);
}

double NNfunction_ss_cRcR::synapse0x20387a0() {
   return (neuron0x202b730()*0.0438422);
}

double NNfunction_ss_cRcR::synapse0x2039130() {
   return (neuron0x20217c0()*-0.24758);
}

double NNfunction_ss_cRcR::synapse0x2039170() {
   return (neuron0x202e310()*0.202261);
}

double NNfunction_ss_cRcR::synapse0x2039b00() {
   return (neuron0x202ece0()*-1.32475);
}

double NNfunction_ss_cRcR::synapse0x2039b40() {
   return (neuron0x202f6b0()*-1.77019);
}

double NNfunction_ss_cRcR::synapse0x203a4d0() {
   return (neuron0x2030080()*1.23482);
}

double NNfunction_ss_cRcR::synapse0x203a510() {
   return (neuron0x2030a50()*-1.29675);
}

double NNfunction_ss_cRcR::synapse0x20163c0() {
   return (neuron0x2031420()*0.548756);
}

double NNfunction_ss_cRcR::synapse0x2016400() {
   return (neuron0x2031df0()*0.0788048);
}

double NNfunction_ss_cRcR::synapse0x2029c70() {
   return (neuron0x20327c0()*0.65255);
}

double NNfunction_ss_cRcR::synapse0x2029cb0() {
   return (neuron0x20333a0()*0.291888);
}

double NNfunction_ss_cRcR::synapse0x203abf0() {
   return (neuron0x2033d70()*0.926211);
}

double NNfunction_ss_cRcR::synapse0x203ac30() {
   return (neuron0x2024bf0()*-0.746889);
}

double NNfunction_ss_cRcR::synapse0x203ac70() {
   return (neuron0x20255c0()*-3.80593);
}

double NNfunction_ss_cRcR::synapse0x203acb0() {
   return (neuron0x2025f90()*0.397034);
}

double NNfunction_ss_cRcR::synapse0x2041b60() {
   return (neuron0x20385d0()*-1.28131);
}

double NNfunction_ss_cRcR::synapse0x2041ba0() {
   return (neuron0x2038e80()*-1.30523);
}

double NNfunction_ss_cRcR::synapse0x2041be0() {
   return (neuron0x2039850()*1.036);
}

double NNfunction_ss_cRcR::synapse0x2041c20() {
   return (neuron0x203a220()*0.0822205);
}

double NNfunction_ss_cRcR::synapse0x2041fa0() {
   return (neuron0x20161a0()*0.263256);
}

double NNfunction_ss_cRcR::synapse0x2041fe0() {
   return (neuron0x2016af0()*0.323774);
}

double NNfunction_ss_cRcR::synapse0x2042020() {
   return (neuron0x20175d0()*-0.570061);
}

double NNfunction_ss_cRcR::synapse0x2042060() {
   return (neuron0x2017070()*0.274951);
}

double NNfunction_ss_cRcR::synapse0x20420a0() {
   return (neuron0x20183b0()*0.455033);
}

double NNfunction_ss_cRcR::synapse0x20420e0() {
   return (neuron0x2018d80()*0.0224138);
}

double NNfunction_ss_cRcR::synapse0x2042120() {
   return (neuron0x2019b50()*0.0516707);
}

double NNfunction_ss_cRcR::synapse0x2042160() {
   return (neuron0x201a520()*3.12189);
}

double NNfunction_ss_cRcR::synapse0x20421a0() {
   return (neuron0x201aef0()*-0.0388721);
}

double NNfunction_ss_cRcR::synapse0x20421e0() {
   return (neuron0x201b9d0()*-0.00629387);
}

double NNfunction_ss_cRcR::synapse0x2042220() {
   return (neuron0x201c3a0()*-2.1552);
}

double NNfunction_ss_cRcR::synapse0x2042260() {
   return (neuron0x2019480()*0.403676);
}

double NNfunction_ss_cRcR::synapse0x20422a0() {
   return (neuron0x201df50()*-0.0495295);
}

double NNfunction_ss_cRcR::synapse0x20422e0() {
   return (neuron0x201e920()*2.80044);
}

double NNfunction_ss_cRcR::synapse0x2042320() {
   return (neuron0x201f2f0()*0.0087671);
}

double NNfunction_ss_cRcR::synapse0x2042360() {
   return (neuron0x201fcc0()*-0.128427);
}

double NNfunction_ss_cRcR::synapse0x2041df0() {
   return (neuron0x2021ad0()*-0.0249865);
}

double NNfunction_ss_cRcR::synapse0x2041e30() {
   return (neuron0x2021db0()*0.00685885);
}

double NNfunction_ss_cRcR::synapse0x20424b0() {
   return (neuron0x2022780()*-0.00509987);
}

double NNfunction_ss_cRcR::synapse0x20424f0() {
   return (neuron0x2023150()*-0.00425613);
}

double NNfunction_ss_cRcR::synapse0x2042530() {
   return (neuron0x2023b20()*0.000731504);
}

double NNfunction_ss_cRcR::synapse0x2042570() {
   return (neuron0x20244f0()*0.0134858);
}

double NNfunction_ss_cRcR::synapse0x20425b0() {
   return (neuron0x201d040()*-4.11263);
}

double NNfunction_ss_cRcR::synapse0x20425f0() {
   return (neuron0x201da10()*-0.179143);
}

double NNfunction_ss_cRcR::synapse0x2042630() {
   return (neuron0x2027280()*-0.190193);
}

double NNfunction_ss_cRcR::synapse0x2042670() {
   return (neuron0x2027c50()*-0.0851429);
}

double NNfunction_ss_cRcR::synapse0x20426b0() {
   return (neuron0x2028620()*-3.98344);
}

double NNfunction_ss_cRcR::synapse0x20426f0() {
   return (neuron0x2028ff0()*0.00775084);
}

double NNfunction_ss_cRcR::synapse0x2042730() {
   return (neuron0x20299c0()*0.119702);
}

double NNfunction_ss_cRcR::synapse0x2042770() {
   return (neuron0x202a390()*-0.0254217);
}

double NNfunction_ss_cRcR::synapse0x20427b0() {
   return (neuron0x202ad60()*0.167981);
}

double NNfunction_ss_cRcR::synapse0x20427f0() {
   return (neuron0x202b730()*0.331453);
}

double NNfunction_ss_cRcR::synapse0x20423a0() {
   return (neuron0x20217c0()*3.47);
}

double NNfunction_ss_cRcR::synapse0x20423e0() {
   return (neuron0x202e310()*-0.101438);
}

double NNfunction_ss_cRcR::synapse0x2042420() {
   return (neuron0x202ece0()*0.00195269);
}

double NNfunction_ss_cRcR::synapse0x2042460() {
   return (neuron0x202f6b0()*0.0479021);
}

double NNfunction_ss_cRcR::synapse0x2042a40() {
   return (neuron0x2030080()*3.50039);
}

double NNfunction_ss_cRcR::synapse0x2042a80() {
   return (neuron0x2030a50()*0.0876153);
}

double NNfunction_ss_cRcR::synapse0x2042ac0() {
   return (neuron0x2031420()*-0.00497031);
}

double NNfunction_ss_cRcR::synapse0x2042b00() {
   return (neuron0x2031df0()*0.702245);
}

double NNfunction_ss_cRcR::synapse0x2042b40() {
   return (neuron0x20327c0()*0.046545);
}

double NNfunction_ss_cRcR::synapse0x2042b80() {
   return (neuron0x20333a0()*0.00818546);
}

double NNfunction_ss_cRcR::synapse0x2042bc0() {
   return (neuron0x2033d70()*-0.0917467);
}

double NNfunction_ss_cRcR::synapse0x2042c00() {
   return (neuron0x2024bf0()*1.25246);
}

double NNfunction_ss_cRcR::synapse0x2042c40() {
   return (neuron0x20255c0()*-0.0323599);
}

double NNfunction_ss_cRcR::synapse0x2042c80() {
   return (neuron0x2025f90()*-0.000506034);
}

double NNfunction_ss_cRcR::synapse0x2042cc0() {
   return (neuron0x20385d0()*-0.034152);
}

double NNfunction_ss_cRcR::synapse0x2042d00() {
   return (neuron0x2038e80()*-2.84151);
}

double NNfunction_ss_cRcR::synapse0x2042d40() {
   return (neuron0x2039850()*-0.608263);
}

double NNfunction_ss_cRcR::synapse0x2042d80() {
   return (neuron0x203a220()*0.0340599);
}

double NNfunction_ss_cRcR::synapse0x2043100() {
   return (neuron0x20161a0()*-4.24052);
}

double NNfunction_ss_cRcR::synapse0x2043140() {
   return (neuron0x2016af0()*-2.14132);
}

double NNfunction_ss_cRcR::synapse0x2043180() {
   return (neuron0x20175d0()*3.41807);
}

double NNfunction_ss_cRcR::synapse0x20431c0() {
   return (neuron0x2017070()*-1.6077);
}

double NNfunction_ss_cRcR::synapse0x2043200() {
   return (neuron0x20183b0()*-3.88167);
}

double NNfunction_ss_cRcR::synapse0x2043240() {
   return (neuron0x2018d80()*1.25442);
}

double NNfunction_ss_cRcR::synapse0x2043280() {
   return (neuron0x2019b50()*1.73969);
}

double NNfunction_ss_cRcR::synapse0x20432c0() {
   return (neuron0x201a520()*3.50591);
}

double NNfunction_ss_cRcR::synapse0x2043300() {
   return (neuron0x201aef0()*1.83095);
}

double NNfunction_ss_cRcR::synapse0x2043340() {
   return (neuron0x201b9d0()*-1.89976);
}

double NNfunction_ss_cRcR::synapse0x2043380() {
   return (neuron0x201c3a0()*2.40014);
}

double NNfunction_ss_cRcR::synapse0x20433c0() {
   return (neuron0x2019480()*-1.58234);
}

double NNfunction_ss_cRcR::synapse0x2043400() {
   return (neuron0x201df50()*-1.66527);
}

double NNfunction_ss_cRcR::synapse0x2043440() {
   return (neuron0x201e920()*-1.19288);
}

double NNfunction_ss_cRcR::synapse0x2043480() {
   return (neuron0x201f2f0()*-0.512197);
}

double NNfunction_ss_cRcR::synapse0x20434c0() {
   return (neuron0x201fcc0()*0.934906);
}

double NNfunction_ss_cRcR::synapse0x2042f50() {
   return (neuron0x2021ad0()*1.42003);
}

double NNfunction_ss_cRcR::synapse0x2042f90() {
   return (neuron0x2021db0()*-0.166375);
}

double NNfunction_ss_cRcR::synapse0x2043610() {
   return (neuron0x2022780()*0.951307);
}

double NNfunction_ss_cRcR::synapse0x2043650() {
   return (neuron0x2023150()*-1.03616);
}

double NNfunction_ss_cRcR::synapse0x2043690() {
   return (neuron0x2023b20()*0.244772);
}

double NNfunction_ss_cRcR::synapse0x20436d0() {
   return (neuron0x20244f0()*-0.165649);
}

double NNfunction_ss_cRcR::synapse0x2043710() {
   return (neuron0x201d040()*0.742629);
}

double NNfunction_ss_cRcR::synapse0x2043750() {
   return (neuron0x201da10()*1.72955);
}

double NNfunction_ss_cRcR::synapse0x2043790() {
   return (neuron0x2027280()*1.981);
}

double NNfunction_ss_cRcR::synapse0x20437d0() {
   return (neuron0x2027c50()*1.5909);
}

double NNfunction_ss_cRcR::synapse0x2043810() {
   return (neuron0x2028620()*1.02823);
}

double NNfunction_ss_cRcR::synapse0x2043850() {
   return (neuron0x2028ff0()*0.564479);
}

double NNfunction_ss_cRcR::synapse0x2043890() {
   return (neuron0x20299c0()*-1.04306);
}

double NNfunction_ss_cRcR::synapse0x20438d0() {
   return (neuron0x202a390()*-1.21967);
}

double NNfunction_ss_cRcR::synapse0x2043910() {
   return (neuron0x202ad60()*-1.34052);
}

double NNfunction_ss_cRcR::synapse0x2043950() {
   return (neuron0x202b730()*-3.8229);
}

double NNfunction_ss_cRcR::synapse0x2043500() {
   return (neuron0x20217c0()*-1.68007);
}

double NNfunction_ss_cRcR::synapse0x2043540() {
   return (neuron0x202e310()*1.05431);
}

double NNfunction_ss_cRcR::synapse0x2043580() {
   return (neuron0x202ece0()*1.52716);
}

double NNfunction_ss_cRcR::synapse0x20435c0() {
   return (neuron0x202f6b0()*2.12363);
}

double NNfunction_ss_cRcR::synapse0x2043ba0() {
   return (neuron0x2030080()*-1.47837);
}

double NNfunction_ss_cRcR::synapse0x2043be0() {
   return (neuron0x2030a50()*-3.85203);
}

double NNfunction_ss_cRcR::synapse0x2043c20() {
   return (neuron0x2031420()*1.40679);
}

double NNfunction_ss_cRcR::synapse0x2043c60() {
   return (neuron0x2031df0()*-0.479278);
}

double NNfunction_ss_cRcR::synapse0x2043ca0() {
   return (neuron0x20327c0()*1.34173);
}

double NNfunction_ss_cRcR::synapse0x2043ce0() {
   return (neuron0x20333a0()*1.04783);
}

double NNfunction_ss_cRcR::synapse0x2043d20() {
   return (neuron0x2033d70()*1.59765);
}

double NNfunction_ss_cRcR::synapse0x2043d60() {
   return (neuron0x2024bf0()*-4.19932);
}

double NNfunction_ss_cRcR::synapse0x2043da0() {
   return (neuron0x20255c0()*-0.471015);
}

double NNfunction_ss_cRcR::synapse0x2043de0() {
   return (neuron0x2025f90()*1.64286);
}

double NNfunction_ss_cRcR::synapse0x2043e20() {
   return (neuron0x20385d0()*-1.58992);
}

double NNfunction_ss_cRcR::synapse0x2043e60() {
   return (neuron0x2038e80()*1.57403);
}

double NNfunction_ss_cRcR::synapse0x2043ea0() {
   return (neuron0x2039850()*7.00652);
}

double NNfunction_ss_cRcR::synapse0x2043ee0() {
   return (neuron0x203a220()*-3.92919);
}

double NNfunction_ss_cRcR::synapse0x2044260() {
   return (neuron0x20161a0()*-0.0658154);
}

double NNfunction_ss_cRcR::synapse0x20442a0() {
   return (neuron0x2016af0()*-0.244674);
}

double NNfunction_ss_cRcR::synapse0x20442e0() {
   return (neuron0x20175d0()*0.376717);
}

double NNfunction_ss_cRcR::synapse0x2044320() {
   return (neuron0x2017070()*0.00185318);
}

double NNfunction_ss_cRcR::synapse0x2044360() {
   return (neuron0x20183b0()*-0.0419356);
}

double NNfunction_ss_cRcR::synapse0x20443a0() {
   return (neuron0x2018d80()*-0.0123293);
}

double NNfunction_ss_cRcR::synapse0x20443e0() {
   return (neuron0x2019b50()*0.0220924);
}

double NNfunction_ss_cRcR::synapse0x2044420() {
   return (neuron0x201a520()*0.422248);
}

double NNfunction_ss_cRcR::synapse0x2044460() {
   return (neuron0x201aef0()*-0.0127512);
}

double NNfunction_ss_cRcR::synapse0x20444a0() {
   return (neuron0x201b9d0()*0.0087804);
}

double NNfunction_ss_cRcR::synapse0x20444e0() {
   return (neuron0x201c3a0()*0.249566);
}

double NNfunction_ss_cRcR::synapse0x2044520() {
   return (neuron0x2019480()*-0.0663767);
}

double NNfunction_ss_cRcR::synapse0x2044560() {
   return (neuron0x201df50()*-0.0148183);
}

double NNfunction_ss_cRcR::synapse0x20445a0() {
   return (neuron0x201e920()*-2.81707);
}

double NNfunction_ss_cRcR::synapse0x20445e0() {
   return (neuron0x201f2f0()*-0.0161736);
}

double NNfunction_ss_cRcR::synapse0x2044620() {
   return (neuron0x201fcc0()*-0.0214741);
}

double NNfunction_ss_cRcR::synapse0x20440b0() {
   return (neuron0x2021ad0()*-0.00525458);
}

double NNfunction_ss_cRcR::synapse0x20440f0() {
   return (neuron0x2021db0()*-0.00520041);
}

double NNfunction_ss_cRcR::synapse0x2044770() {
   return (neuron0x2022780()*-0.0193683);
}

double NNfunction_ss_cRcR::synapse0x20447b0() {
   return (neuron0x2023150()*0.00841288);
}

double NNfunction_ss_cRcR::synapse0x20447f0() {
   return (neuron0x2023b20()*-0.0162276);
}

double NNfunction_ss_cRcR::synapse0x2044830() {
   return (neuron0x20244f0()*0.0244226);
}

double NNfunction_ss_cRcR::synapse0x2044870() {
   return (neuron0x201d040()*-0.73197);
}

double NNfunction_ss_cRcR::synapse0x20448b0() {
   return (neuron0x201da10()*0.0162157);
}

double NNfunction_ss_cRcR::synapse0x20448f0() {
   return (neuron0x2027280()*-0.0319152);
}

double NNfunction_ss_cRcR::synapse0x2044930() {
   return (neuron0x2027c50()*0.0151787);
}

double NNfunction_ss_cRcR::synapse0x2044970() {
   return (neuron0x2028620()*1.11975);
}

double NNfunction_ss_cRcR::synapse0x20449b0() {
   return (neuron0x2028ff0()*-0.0138323);
}

double NNfunction_ss_cRcR::synapse0x20449f0() {
   return (neuron0x20299c0()*-0.0297763);
}

double NNfunction_ss_cRcR::synapse0x2044a30() {
   return (neuron0x202a390()*0.00208834);
}

double NNfunction_ss_cRcR::synapse0x2044a70() {
   return (neuron0x202ad60()*-0.00210707);
}

double NNfunction_ss_cRcR::synapse0x2044ab0() {
   return (neuron0x202b730()*0.0501444);
}

double NNfunction_ss_cRcR::synapse0x2044660() {
   return (neuron0x20217c0()*-0.666628);
}

double NNfunction_ss_cRcR::synapse0x20446a0() {
   return (neuron0x202e310()*-0.00373727);
}

double NNfunction_ss_cRcR::synapse0x20446e0() {
   return (neuron0x202ece0()*0.0232913);
}

double NNfunction_ss_cRcR::synapse0x2044720() {
   return (neuron0x202f6b0()*0.0126813);
}

double NNfunction_ss_cRcR::synapse0x2044d00() {
   return (neuron0x2030080()*0.325088);
}

double NNfunction_ss_cRcR::synapse0x2044d40() {
   return (neuron0x2030a50()*0.106527);
}

double NNfunction_ss_cRcR::synapse0x2044d80() {
   return (neuron0x2031420()*0.00881423);
}

double NNfunction_ss_cRcR::synapse0x2044dc0() {
   return (neuron0x2031df0()*-0.750436);
}

double NNfunction_ss_cRcR::synapse0x2044e00() {
   return (neuron0x20327c0()*0.012776);
}

double NNfunction_ss_cRcR::synapse0x2044e40() {
   return (neuron0x20333a0()*0.00492085);
}

double NNfunction_ss_cRcR::synapse0x2044e80() {
   return (neuron0x2033d70()*-1.53448e-05);
}

double NNfunction_ss_cRcR::synapse0x2044ec0() {
   return (neuron0x2024bf0()*0.438634);
}

double NNfunction_ss_cRcR::synapse0x2044f00() {
   return (neuron0x20255c0()*-0.0151277);
}

double NNfunction_ss_cRcR::synapse0x2044f40() {
   return (neuron0x2025f90()*0.00777956);
}

double NNfunction_ss_cRcR::synapse0x2044f80() {
   return (neuron0x20385d0()*-0.0144009);
}

double NNfunction_ss_cRcR::synapse0x2044fc0() {
   return (neuron0x2038e80()*-0.131251);
}

double NNfunction_ss_cRcR::synapse0x2045000() {
   return (neuron0x2039850()*0.132094);
}

double NNfunction_ss_cRcR::synapse0x2045040() {
   return (neuron0x203a220()*-0.154778);
}

double NNfunction_ss_cRcR::synapse0x20452a0() {
   return (neuron0x2041420()*1.294);
}

double NNfunction_ss_cRcR::synapse0x20452e0() {
   return (neuron0x20417c0()*-3.67733);
}

double NNfunction_ss_cRcR::synapse0x2045320() {
   return (neuron0x2041c60()*13.0545);
}

double NNfunction_ss_cRcR::synapse0x2045360() {
   return (neuron0x2042dc0()*-8.2108);
}

double NNfunction_ss_cRcR::synapse0x20453a0() {
   return (neuron0x2043f20()*-4.56773);
}

