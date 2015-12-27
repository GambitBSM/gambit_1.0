#include "NNfunction_ss_sLuR.h"
#include <cmath>

double NNfunction_ss_sLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.992)/15.0349;
   input1 = (in1 - 50.4637)/753.239;
   input2 = (in2 - 373.432)/472.603;
   input3 = (in3 - 265.54)/625.367;
   input4 = (in4 - 763.07)/702.458;
   input5 = (in5 - 670.193)/678.218;
   input6 = (in6 - 672.806)/679.31;
   input7 = (in7 - 668.477)/674.566;
   input8 = (in8 - 660.108)/687.418;
   input9 = (in9 - 651.337)/675.963;
   input10 = (in10 - 661.898)/698.642;
   input11 = (in11 - 697.099)/582.62;
   input12 = (in12 - 581.187)/372.73;
   input13 = (in13 - 540.152)/365.791;
   input14 = (in14 - 588.506)/375.744;
   input15 = (in15 - 696.364)/564.067;
   input16 = (in16 - 482.612)/384.768;
   input17 = (in17 - 706.764)/601.3;
   input18 = (in18 - 703.4)/606.896;
   input19 = (in19 - 702.369)/591.773;
   input20 = (in20 - -208.005)/407.562;
   input21 = (in21 - -267.536)/893.214;
   input22 = (in22 - 0.511019)/891.808;
   input23 = (in23 - -13.2925)/504.234;
   switch(index) {
     case 0:
         return neuron0x316e2c0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLuR::Value(int index, double* input) {
   input0 = (input[0] - 22.992)/15.0349;
   input1 = (input[1] - 50.4637)/753.239;
   input2 = (input[2] - 373.432)/472.603;
   input3 = (input[3] - 265.54)/625.367;
   input4 = (input[4] - 763.07)/702.458;
   input5 = (input[5] - 670.193)/678.218;
   input6 = (input[6] - 672.806)/679.31;
   input7 = (input[7] - 668.477)/674.566;
   input8 = (input[8] - 660.108)/687.418;
   input9 = (input[9] - 651.337)/675.963;
   input10 = (input[10] - 661.898)/698.642;
   input11 = (input[11] - 697.099)/582.62;
   input12 = (input[12] - 581.187)/372.73;
   input13 = (input[13] - 540.152)/365.791;
   input14 = (input[14] - 588.506)/375.744;
   input15 = (input[15] - 696.364)/564.067;
   input16 = (input[16] - 482.612)/384.768;
   input17 = (input[17] - 706.764)/601.3;
   input18 = (input[18] - 703.4)/606.896;
   input19 = (input[19] - 702.369)/591.773;
   input20 = (input[20] - -208.005)/407.562;
   input21 = (input[21] - -267.536)/893.214;
   input22 = (input[22] - 0.511019)/891.808;
   input23 = (input[23] - -13.2925)/504.234;
   switch(index) {
     case 0:
         return neuron0x316e2c0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLuR::neuron0x313a3b0() {
   return input0;
}

double NNfunction_ss_sLuR::neuron0x313a6f0() {
   return input1;
}

double NNfunction_ss_sLuR::neuron0x313aa30() {
   return input2;
}

double NNfunction_ss_sLuR::neuron0x313ad70() {
   return input3;
}

double NNfunction_ss_sLuR::neuron0x313b0b0() {
   return input4;
}

double NNfunction_ss_sLuR::neuron0x313b3f0() {
   return input5;
}

double NNfunction_ss_sLuR::neuron0x313b730() {
   return input6;
}

double NNfunction_ss_sLuR::neuron0x313ba70() {
   return input7;
}

double NNfunction_ss_sLuR::neuron0x313bdb0() {
   return input8;
}

double NNfunction_ss_sLuR::neuron0x313c0f0() {
   return input9;
}

double NNfunction_ss_sLuR::neuron0x313c430() {
   return input10;
}

double NNfunction_ss_sLuR::neuron0x313c770() {
   return input11;
}

double NNfunction_ss_sLuR::neuron0x313cab0() {
   return input12;
}

double NNfunction_ss_sLuR::neuron0x313cdf0() {
   return input13;
}

double NNfunction_ss_sLuR::neuron0x313d130() {
   return input14;
}

double NNfunction_ss_sLuR::neuron0x313d470() {
   return input15;
}

double NNfunction_ss_sLuR::neuron0x313d7b0() {
   return input16;
}

double NNfunction_ss_sLuR::neuron0x313dd10() {
   return input17;
}

double NNfunction_ss_sLuR::neuron0x313df30() {
   return input18;
}

double NNfunction_ss_sLuR::neuron0x313e270() {
   return input19;
}

double NNfunction_ss_sLuR::neuron0x313e5b0() {
   return input20;
}

double NNfunction_ss_sLuR::neuron0x313e8f0() {
   return input21;
}

double NNfunction_ss_sLuR::neuron0x313ec30() {
   return input22;
}

double NNfunction_ss_sLuR::neuron0x313ef70() {
   return input23;
}

double NNfunction_ss_sLuR::input0x313f3e0() {
   double input = 0.437159;
   input += synapse0x313a270();
   input += synapse0x313a2b0();
   input += synapse0x313f690();
   input += synapse0x313f6d0();
   input += synapse0x313f710();
   input += synapse0x313f750();
   input += synapse0x313f790();
   input += synapse0x313f7d0();
   input += synapse0x313f810();
   input += synapse0x313f850();
   input += synapse0x313f890();
   input += synapse0x313f8d0();
   input += synapse0x313f910();
   input += synapse0x313f950();
   input += synapse0x313f990();
   input += synapse0x313f9d0();
   input += synapse0x313a1e0();
   input += synapse0x313a220();
   input += synapse0x2ef55a0();
   input += synapse0x2ef55e0();
   input += synapse0x313fc30();
   input += synapse0x313fc70();
   input += synapse0x313fcb0();
   input += synapse0x313fcf0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x313f3e0() {
   double input = input0x313f3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x313fd30() {
   double input = -0.589079;
   input += synapse0x3140070();
   input += synapse0x31400b0();
   input += synapse0x31400f0();
   input += synapse0x3140130();
   input += synapse0x3140170();
   input += synapse0x31401b0();
   input += synapse0x31401f0();
   input += synapse0x3140230();
   input += synapse0x3140270();
   input += synapse0x313fb20();
   input += synapse0x313fb60();
   input += synapse0x313fba0();
   input += synapse0x313fbe0();
   input += synapse0x31404c0();
   input += synapse0x3140500();
   input += synapse0x3140540();
   input += synapse0x313fec0();
   input += synapse0x313ff00();
   input += synapse0x3140690();
   input += synapse0x31406d0();
   input += synapse0x3140710();
   input += synapse0x3140750();
   input += synapse0x3140790();
   input += synapse0x31407d0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x313fd30() {
   double input = input0x313fd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3140810() {
   double input = -0.330381;
   input += synapse0x3140b50();
   input += synapse0x3140b90();
   input += synapse0x3140bd0();
   input += synapse0x3140c10();
   input += synapse0x3140c50();
   input += synapse0x3140c90();
   input += synapse0x3140cd0();
   input += synapse0x3140d10();
   input += synapse0x3140d50();
   input += synapse0x3140d90();
   input += synapse0x3140dd0();
   input += synapse0x3140e10();
   input += synapse0x3140e50();
   input += synapse0x3140e90();
   input += synapse0x3140ed0();
   input += synapse0x3140f10();
   input += synapse0x31409a0();
   input += synapse0x31409e0();
   input += synapse0x2ef5c40();
   input += synapse0x2f03510();
   input += synapse0x2f03550();
   input += synapse0x3129440();
   input += synapse0x3129480();
   input += synapse0x31294c0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3140810() {
   double input = input0x3140810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31402b0() {
   double input = -1.10418;
   input += synapse0x2f03d90();
   input += synapse0x3140440();
   input += synapse0x3140480();
   input += synapse0x3141060();
   input += synapse0x31410a0();
   input += synapse0x31410e0();
   input += synapse0x3141120();
   input += synapse0x3141160();
   input += synapse0x31411a0();
   input += synapse0x31411e0();
   input += synapse0x3141220();
   input += synapse0x3141260();
   input += synapse0x31412a0();
   input += synapse0x31412e0();
   input += synapse0x3141320();
   input += synapse0x3141360();
   input += synapse0x313a2f0();
   input += synapse0x313a330();
   input += synapse0x313a370();
   input += synapse0x31414b0();
   input += synapse0x31414f0();
   input += synapse0x3141530();
   input += synapse0x3141570();
   input += synapse0x31415b0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31402b0() {
   double input = input0x31402b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31415f0() {
   double input = -0.959733;
   input += synapse0x3141930();
   input += synapse0x3141970();
   input += synapse0x31419b0();
   input += synapse0x31419f0();
   input += synapse0x3141a30();
   input += synapse0x3141a70();
   input += synapse0x3141ab0();
   input += synapse0x3141af0();
   input += synapse0x3141b30();
   input += synapse0x3141b70();
   input += synapse0x3141bb0();
   input += synapse0x3141bf0();
   input += synapse0x3141c30();
   input += synapse0x3141c70();
   input += synapse0x3141cb0();
   input += synapse0x3141cf0();
   input += synapse0x3141780();
   input += synapse0x31417c0();
   input += synapse0x3141e40();
   input += synapse0x3141e80();
   input += synapse0x3141ec0();
   input += synapse0x3141f00();
   input += synapse0x3141f40();
   input += synapse0x3141f80();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31415f0() {
   double input = input0x31415f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3141fc0() {
   double input = 0.00259706;
   input += synapse0x3142300();
   input += synapse0x3142340();
   input += synapse0x3142380();
   input += synapse0x31423c0();
   input += synapse0x3142400();
   input += synapse0x3142440();
   input += synapse0x3142480();
   input += synapse0x31424c0();
   input += synapse0x3142500();
   input += synapse0x2f03860();
   input += synapse0x2f038a0();
   input += synapse0x2f038e0();
   input += synapse0x2f03920();
   input += synapse0x2f03960();
   input += synapse0x2f039a0();
   input += synapse0x2f039e0();
   input += synapse0x3142150();
   input += synapse0x3142190();
   input += synapse0x2f03b30();
   input += synapse0x2f03b70();
   input += synapse0x2f03bb0();
   input += synapse0x2f03bf0();
   input += synapse0x2f03c30();
   input += synapse0x3142d50();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3141fc0() {
   double input = input0x3141fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3142d90() {
   double input = 0.802975;
   input += synapse0x31430d0();
   input += synapse0x3143110();
   input += synapse0x3143150();
   input += synapse0x3143190();
   input += synapse0x31431d0();
   input += synapse0x3143210();
   input += synapse0x3143250();
   input += synapse0x3143290();
   input += synapse0x31432d0();
   input += synapse0x3143310();
   input += synapse0x3143350();
   input += synapse0x3143390();
   input += synapse0x31433d0();
   input += synapse0x3143410();
   input += synapse0x3143450();
   input += synapse0x3143490();
   input += synapse0x3142f20();
   input += synapse0x3142f60();
   input += synapse0x31435e0();
   input += synapse0x3143620();
   input += synapse0x3143660();
   input += synapse0x31436a0();
   input += synapse0x31436e0();
   input += synapse0x3143720();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3142d90() {
   double input = input0x3142d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3143760() {
   double input = 1.44346;
   input += synapse0x3143aa0();
   input += synapse0x3143ae0();
   input += synapse0x3143b20();
   input += synapse0x3143b60();
   input += synapse0x3143ba0();
   input += synapse0x3143be0();
   input += synapse0x3143c20();
   input += synapse0x3143c60();
   input += synapse0x3143ca0();
   input += synapse0x3143ce0();
   input += synapse0x3143d20();
   input += synapse0x3143d60();
   input += synapse0x3143da0();
   input += synapse0x3143de0();
   input += synapse0x3143e20();
   input += synapse0x3143e60();
   input += synapse0x31438f0();
   input += synapse0x3143930();
   input += synapse0x3143fb0();
   input += synapse0x3143ff0();
   input += synapse0x3144030();
   input += synapse0x3144070();
   input += synapse0x31440b0();
   input += synapse0x31440f0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3143760() {
   double input = input0x3143760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3144130() {
   double input = -2.03547;
   input += synapse0x313dc00();
   input += synapse0x313dc40();
   input += synapse0x313dc80();
   input += synapse0x313dcc0();
   input += synapse0x3144680();
   input += synapse0x31446c0();
   input += synapse0x3144700();
   input += synapse0x3144740();
   input += synapse0x3144780();
   input += synapse0x31447c0();
   input += synapse0x3144800();
   input += synapse0x3144840();
   input += synapse0x3144880();
   input += synapse0x31448c0();
   input += synapse0x3144900();
   input += synapse0x3144940();
   input += synapse0x31442c0();
   input += synapse0x3144300();
   input += synapse0x3144a90();
   input += synapse0x3144ad0();
   input += synapse0x3144b10();
   input += synapse0x3144b50();
   input += synapse0x3144b90();
   input += synapse0x3144bd0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3144130() {
   double input = input0x3144130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3144c10() {
   double input = -3.27575;
   input += synapse0x3144f50();
   input += synapse0x3144f90();
   input += synapse0x3144fd0();
   input += synapse0x3145010();
   input += synapse0x3145050();
   input += synapse0x3145090();
   input += synapse0x31450d0();
   input += synapse0x3145110();
   input += synapse0x3145150();
   input += synapse0x3145190();
   input += synapse0x31451d0();
   input += synapse0x3145210();
   input += synapse0x3145250();
   input += synapse0x3145290();
   input += synapse0x31452d0();
   input += synapse0x3145310();
   input += synapse0x3144da0();
   input += synapse0x3144de0();
   input += synapse0x3145460();
   input += synapse0x31454a0();
   input += synapse0x31454e0();
   input += synapse0x3145520();
   input += synapse0x3145560();
   input += synapse0x31455a0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3144c10() {
   double input = input0x3144c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31455e0() {
   double input = -0.408105;
   input += synapse0x3145920();
   input += synapse0x3145960();
   input += synapse0x31459a0();
   input += synapse0x31459e0();
   input += synapse0x3145a20();
   input += synapse0x3145a60();
   input += synapse0x3145aa0();
   input += synapse0x3145ae0();
   input += synapse0x3145b20();
   input += synapse0x3145b60();
   input += synapse0x3145ba0();
   input += synapse0x3145be0();
   input += synapse0x3145c20();
   input += synapse0x3145c60();
   input += synapse0x3145ca0();
   input += synapse0x3145ce0();
   input += synapse0x3145770();
   input += synapse0x31457b0();
   input += synapse0x3142540();
   input += synapse0x3142580();
   input += synapse0x31425c0();
   input += synapse0x3142600();
   input += synapse0x3142640();
   input += synapse0x3142680();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31455e0() {
   double input = input0x31455e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31426c0() {
   double input = -0.167009;
   input += synapse0x3142a00();
   input += synapse0x3142a40();
   input += synapse0x3142a80();
   input += synapse0x3142ac0();
   input += synapse0x3142b00();
   input += synapse0x3142b40();
   input += synapse0x3142b80();
   input += synapse0x3142bc0();
   input += synapse0x3142c00();
   input += synapse0x3142c40();
   input += synapse0x3142c80();
   input += synapse0x3142cc0();
   input += synapse0x3142d00();
   input += synapse0x3146e40();
   input += synapse0x3146e80();
   input += synapse0x3146ec0();
   input += synapse0x3142850();
   input += synapse0x3142890();
   input += synapse0x3147010();
   input += synapse0x3147050();
   input += synapse0x3147090();
   input += synapse0x31470d0();
   input += synapse0x3147110();
   input += synapse0x3147150();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31426c0() {
   double input = input0x31426c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3147190() {
   double input = 2.04879;
   input += synapse0x31474d0();
   input += synapse0x3147510();
   input += synapse0x3147550();
   input += synapse0x3147590();
   input += synapse0x31475d0();
   input += synapse0x3147610();
   input += synapse0x3147650();
   input += synapse0x3147690();
   input += synapse0x31476d0();
   input += synapse0x3147710();
   input += synapse0x3147750();
   input += synapse0x3147790();
   input += synapse0x31477d0();
   input += synapse0x3147810();
   input += synapse0x3147850();
   input += synapse0x3147890();
   input += synapse0x3147320();
   input += synapse0x3147360();
   input += synapse0x31479e0();
   input += synapse0x3147a20();
   input += synapse0x3147a60();
   input += synapse0x3147aa0();
   input += synapse0x3147ae0();
   input += synapse0x3147b20();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3147190() {
   double input = input0x3147190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3147b60() {
   double input = 0.545647;
   input += synapse0x3147ea0();
   input += synapse0x3147ee0();
   input += synapse0x3147f20();
   input += synapse0x3147f60();
   input += synapse0x3147fa0();
   input += synapse0x3147fe0();
   input += synapse0x3148020();
   input += synapse0x3148060();
   input += synapse0x31480a0();
   input += synapse0x31480e0();
   input += synapse0x3148120();
   input += synapse0x3148160();
   input += synapse0x31481a0();
   input += synapse0x31481e0();
   input += synapse0x3148220();
   input += synapse0x3148260();
   input += synapse0x3147cf0();
   input += synapse0x3147d30();
   input += synapse0x31483b0();
   input += synapse0x31483f0();
   input += synapse0x3148430();
   input += synapse0x3148470();
   input += synapse0x31484b0();
   input += synapse0x31484f0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3147b60() {
   double input = input0x3147b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3148530() {
   double input = -0.76522;
   input += synapse0x3148870();
   input += synapse0x31488b0();
   input += synapse0x31488f0();
   input += synapse0x3148930();
   input += synapse0x3148970();
   input += synapse0x31489b0();
   input += synapse0x31489f0();
   input += synapse0x3148a30();
   input += synapse0x3148a70();
   input += synapse0x3148ab0();
   input += synapse0x3148af0();
   input += synapse0x3148b30();
   input += synapse0x3148b70();
   input += synapse0x3148bb0();
   input += synapse0x3148bf0();
   input += synapse0x3148c30();
   input += synapse0x31486c0();
   input += synapse0x3148700();
   input += synapse0x3148d80();
   input += synapse0x3148dc0();
   input += synapse0x3148e00();
   input += synapse0x3148e40();
   input += synapse0x3148e80();
   input += synapse0x3148ec0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3148530() {
   double input = input0x3148530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3148f00() {
   double input = -0.819548;
   input += synapse0x3149240();
   input += synapse0x313a5d0();
   input += synapse0x313a610();
   input += synapse0x313a910();
   input += synapse0x313a950();
   input += synapse0x313ac50();
   input += synapse0x313ac90();
   input += synapse0x313af90();
   input += synapse0x313afd0();
   input += synapse0x313b2d0();
   input += synapse0x313b310();
   input += synapse0x313b610();
   input += synapse0x313b650();
   input += synapse0x313b950();
   input += synapse0x313b990();
   input += synapse0x313bc90();
   input += synapse0x313bcd0();
   input += synapse0x313bfd0();
   input += synapse0x313c010();
   input += synapse0x313c310();
   input += synapse0x313c350();
   input += synapse0x313c650();
   input += synapse0x313c690();
   input += synapse0x313c990();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3148f00() {
   double input = input0x3148f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314ad10() {
   double input = -1.22472;
   input += synapse0x313c9d0();
   input += synapse0x313d690();
   input += synapse0x313d6d0();
   input += synapse0x3149090();
   input += synapse0x31490d0();
   input += synapse0x313d9d0();
   input += synapse0x313da10();
   input += synapse0x2ef5480();
   input += synapse0x2ef54c0();
   input += synapse0x313e150();
   input += synapse0x313e190();
   input += synapse0x313e490();
   input += synapse0x313e4d0();
   input += synapse0x313e7d0();
   input += synapse0x313e810();
   input += synapse0x313eb10();
   input += synapse0x313eb50();
   input += synapse0x313ee50();
   input += synapse0x313ee90();
   input += synapse0x313f190();
   input += synapse0x313f1d0();
   input += synapse0x313ccd0();
   input += synapse0x313cd10();
   input += synapse0x314afb0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314ad10() {
   double input = input0x314ad10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314aff0() {
   double input = -0.756715;
   input += synapse0x314b330();
   input += synapse0x314b370();
   input += synapse0x314b3b0();
   input += synapse0x314b3f0();
   input += synapse0x314b430();
   input += synapse0x314b470();
   input += synapse0x314b4b0();
   input += synapse0x314b4f0();
   input += synapse0x314b530();
   input += synapse0x314b570();
   input += synapse0x314b5b0();
   input += synapse0x314b5f0();
   input += synapse0x314b630();
   input += synapse0x314b670();
   input += synapse0x314b6b0();
   input += synapse0x314b6f0();
   input += synapse0x314b180();
   input += synapse0x314b1c0();
   input += synapse0x314b840();
   input += synapse0x314b880();
   input += synapse0x314b8c0();
   input += synapse0x314b900();
   input += synapse0x314b940();
   input += synapse0x314b980();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314aff0() {
   double input = input0x314aff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314b9c0() {
   double input = 0.49935;
   input += synapse0x314bd00();
   input += synapse0x314bd40();
   input += synapse0x314bd80();
   input += synapse0x314bdc0();
   input += synapse0x314be00();
   input += synapse0x314be40();
   input += synapse0x314be80();
   input += synapse0x314bec0();
   input += synapse0x314bf00();
   input += synapse0x314bf40();
   input += synapse0x314bf80();
   input += synapse0x314bfc0();
   input += synapse0x314c000();
   input += synapse0x314c040();
   input += synapse0x314c080();
   input += synapse0x314c0c0();
   input += synapse0x314bb50();
   input += synapse0x314bb90();
   input += synapse0x314c210();
   input += synapse0x314c250();
   input += synapse0x314c290();
   input += synapse0x314c2d0();
   input += synapse0x314c310();
   input += synapse0x314c350();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314b9c0() {
   double input = input0x314b9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314c390() {
   double input = -0.0991156;
   input += synapse0x314c6d0();
   input += synapse0x314c710();
   input += synapse0x314c750();
   input += synapse0x314c790();
   input += synapse0x314c7d0();
   input += synapse0x314c810();
   input += synapse0x314c850();
   input += synapse0x314c890();
   input += synapse0x314c8d0();
   input += synapse0x314c910();
   input += synapse0x314c950();
   input += synapse0x314c990();
   input += synapse0x314c9d0();
   input += synapse0x314ca10();
   input += synapse0x314ca50();
   input += synapse0x314ca90();
   input += synapse0x314c520();
   input += synapse0x314c560();
   input += synapse0x314cbe0();
   input += synapse0x314cc20();
   input += synapse0x314cc60();
   input += synapse0x314cca0();
   input += synapse0x314cce0();
   input += synapse0x314cd20();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314c390() {
   double input = input0x314c390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314cd60() {
   double input = -0.0943043;
   input += synapse0x314d0a0();
   input += synapse0x314d0e0();
   input += synapse0x314d120();
   input += synapse0x314d160();
   input += synapse0x314d1a0();
   input += synapse0x314d1e0();
   input += synapse0x314d220();
   input += synapse0x314d260();
   input += synapse0x314d2a0();
   input += synapse0x314d2e0();
   input += synapse0x314d320();
   input += synapse0x314d360();
   input += synapse0x314d3a0();
   input += synapse0x314d3e0();
   input += synapse0x314d420();
   input += synapse0x314d460();
   input += synapse0x314cef0();
   input += synapse0x314cf30();
   input += synapse0x314d5b0();
   input += synapse0x314d5f0();
   input += synapse0x314d630();
   input += synapse0x314d670();
   input += synapse0x314d6b0();
   input += synapse0x314d6f0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314cd60() {
   double input = input0x314cd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314d730() {
   double input = 1.09787;
   input += synapse0x314da70();
   input += synapse0x314dab0();
   input += synapse0x314daf0();
   input += synapse0x314db30();
   input += synapse0x314db70();
   input += synapse0x314dbb0();
   input += synapse0x314dbf0();
   input += synapse0x314dc30();
   input += synapse0x314dc70();
   input += synapse0x3145e30();
   input += synapse0x3145e70();
   input += synapse0x3145eb0();
   input += synapse0x3145ef0();
   input += synapse0x3145f30();
   input += synapse0x3145f70();
   input += synapse0x3145fb0();
   input += synapse0x314d8c0();
   input += synapse0x314d900();
   input += synapse0x3146100();
   input += synapse0x3146140();
   input += synapse0x3146180();
   input += synapse0x31461c0();
   input += synapse0x3146200();
   input += synapse0x3146240();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314d730() {
   double input = input0x314d730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3146280() {
   double input = -1.56855;
   input += synapse0x31465c0();
   input += synapse0x3146600();
   input += synapse0x3146640();
   input += synapse0x3146680();
   input += synapse0x31466c0();
   input += synapse0x3146700();
   input += synapse0x3146740();
   input += synapse0x3146780();
   input += synapse0x31467c0();
   input += synapse0x3146800();
   input += synapse0x3146840();
   input += synapse0x3146880();
   input += synapse0x31468c0();
   input += synapse0x3146900();
   input += synapse0x3146940();
   input += synapse0x3146980();
   input += synapse0x3146410();
   input += synapse0x3146450();
   input += synapse0x3146ad0();
   input += synapse0x3146b10();
   input += synapse0x3146b50();
   input += synapse0x3146b90();
   input += synapse0x3146bd0();
   input += synapse0x3146c10();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3146280() {
   double input = input0x3146280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3146c50() {
   double input = -0.808811;
   input += synapse0x3146de0();
   input += synapse0x314fe70();
   input += synapse0x314feb0();
   input += synapse0x314fef0();
   input += synapse0x314ff30();
   input += synapse0x314ff70();
   input += synapse0x314ffb0();
   input += synapse0x314fff0();
   input += synapse0x3150030();
   input += synapse0x3150070();
   input += synapse0x31500b0();
   input += synapse0x31500f0();
   input += synapse0x3150130();
   input += synapse0x3150170();
   input += synapse0x31501b0();
   input += synapse0x31501f0();
   input += synapse0x314fcc0();
   input += synapse0x314fd00();
   input += synapse0x3150340();
   input += synapse0x3150380();
   input += synapse0x31503c0();
   input += synapse0x3150400();
   input += synapse0x3150440();
   input += synapse0x3150480();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3146c50() {
   double input = input0x3146c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31504c0() {
   double input = -1.55862;
   input += synapse0x3150800();
   input += synapse0x3150840();
   input += synapse0x3150880();
   input += synapse0x31508c0();
   input += synapse0x3150900();
   input += synapse0x3150940();
   input += synapse0x3150980();
   input += synapse0x31509c0();
   input += synapse0x3150a00();
   input += synapse0x3150a40();
   input += synapse0x3150a80();
   input += synapse0x3150ac0();
   input += synapse0x3150b00();
   input += synapse0x3150b40();
   input += synapse0x3150b80();
   input += synapse0x3150bc0();
   input += synapse0x3150650();
   input += synapse0x3150690();
   input += synapse0x3150d10();
   input += synapse0x3150d50();
   input += synapse0x3150d90();
   input += synapse0x3150dd0();
   input += synapse0x3150e10();
   input += synapse0x3150e50();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31504c0() {
   double input = input0x31504c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3150e90() {
   double input = 3.05209;
   input += synapse0x31511d0();
   input += synapse0x3151210();
   input += synapse0x3151250();
   input += synapse0x3151290();
   input += synapse0x31512d0();
   input += synapse0x3151310();
   input += synapse0x3151350();
   input += synapse0x3151390();
   input += synapse0x31513d0();
   input += synapse0x3151410();
   input += synapse0x3151450();
   input += synapse0x3151490();
   input += synapse0x31514d0();
   input += synapse0x3151510();
   input += synapse0x3151550();
   input += synapse0x3151590();
   input += synapse0x3151020();
   input += synapse0x3151060();
   input += synapse0x31516e0();
   input += synapse0x3151720();
   input += synapse0x3151760();
   input += synapse0x31517a0();
   input += synapse0x31517e0();
   input += synapse0x3151820();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3150e90() {
   double input = input0x3150e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3151860() {
   double input = -1.91279;
   input += synapse0x3151ba0();
   input += synapse0x3151be0();
   input += synapse0x3151c20();
   input += synapse0x3151c60();
   input += synapse0x3151ca0();
   input += synapse0x3151ce0();
   input += synapse0x3151d20();
   input += synapse0x3151d60();
   input += synapse0x3151da0();
   input += synapse0x3151de0();
   input += synapse0x3151e20();
   input += synapse0x3151e60();
   input += synapse0x3151ea0();
   input += synapse0x3151ee0();
   input += synapse0x3151f20();
   input += synapse0x3151f60();
   input += synapse0x31519f0();
   input += synapse0x3151a30();
   input += synapse0x31520b0();
   input += synapse0x31520f0();
   input += synapse0x3152130();
   input += synapse0x3152170();
   input += synapse0x31521b0();
   input += synapse0x31521f0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3151860() {
   double input = input0x3151860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3152230() {
   double input = -0.206518;
   input += synapse0x3152570();
   input += synapse0x31525b0();
   input += synapse0x31525f0();
   input += synapse0x3152630();
   input += synapse0x3152670();
   input += synapse0x31526b0();
   input += synapse0x31526f0();
   input += synapse0x3152730();
   input += synapse0x3152770();
   input += synapse0x31527b0();
   input += synapse0x31527f0();
   input += synapse0x3152830();
   input += synapse0x3152870();
   input += synapse0x31528b0();
   input += synapse0x31528f0();
   input += synapse0x3152930();
   input += synapse0x31523c0();
   input += synapse0x3152400();
   input += synapse0x3152a80();
   input += synapse0x3152ac0();
   input += synapse0x3152b00();
   input += synapse0x3152b40();
   input += synapse0x3152b80();
   input += synapse0x3152bc0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3152230() {
   double input = input0x3152230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3152c00() {
   double input = 1.00196;
   input += synapse0x3152f40();
   input += synapse0x3152f80();
   input += synapse0x3152fc0();
   input += synapse0x3153000();
   input += synapse0x3153040();
   input += synapse0x3153080();
   input += synapse0x31530c0();
   input += synapse0x3153100();
   input += synapse0x3153140();
   input += synapse0x3153180();
   input += synapse0x31531c0();
   input += synapse0x3153200();
   input += synapse0x3153240();
   input += synapse0x3153280();
   input += synapse0x31532c0();
   input += synapse0x3153300();
   input += synapse0x3152d90();
   input += synapse0x3152dd0();
   input += synapse0x3153450();
   input += synapse0x3153490();
   input += synapse0x31534d0();
   input += synapse0x3153510();
   input += synapse0x3153550();
   input += synapse0x3153590();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3152c00() {
   double input = input0x3152c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31535d0() {
   double input = 0.270192;
   input += synapse0x3153910();
   input += synapse0x3153950();
   input += synapse0x3153990();
   input += synapse0x31539d0();
   input += synapse0x3153a10();
   input += synapse0x3153a50();
   input += synapse0x3153a90();
   input += synapse0x3153ad0();
   input += synapse0x3153b10();
   input += synapse0x3153b50();
   input += synapse0x3153b90();
   input += synapse0x3153bd0();
   input += synapse0x3153c10();
   input += synapse0x3153c50();
   input += synapse0x3153c90();
   input += synapse0x3153cd0();
   input += synapse0x3153760();
   input += synapse0x31537a0();
   input += synapse0x3153e20();
   input += synapse0x3153e60();
   input += synapse0x3153ea0();
   input += synapse0x3153ee0();
   input += synapse0x3153f20();
   input += synapse0x3153f60();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31535d0() {
   double input = input0x31535d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3153fa0() {
   double input = -0.077954;
   input += synapse0x31542e0();
   input += synapse0x3154320();
   input += synapse0x3154360();
   input += synapse0x31543a0();
   input += synapse0x31543e0();
   input += synapse0x3154420();
   input += synapse0x3154460();
   input += synapse0x31544a0();
   input += synapse0x31544e0();
   input += synapse0x3154520();
   input += synapse0x3154560();
   input += synapse0x31545a0();
   input += synapse0x31545e0();
   input += synapse0x3154620();
   input += synapse0x3154660();
   input += synapse0x31546a0();
   input += synapse0x3154130();
   input += synapse0x3154170();
   input += synapse0x31547f0();
   input += synapse0x3154830();
   input += synapse0x3154870();
   input += synapse0x31548b0();
   input += synapse0x31548f0();
   input += synapse0x3154930();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3153fa0() {
   double input = input0x3153fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3154970() {
   double input = 0.813084;
   input += synapse0x3154cb0();
   input += synapse0x3149280();
   input += synapse0x31492c0();
   input += synapse0x3149300();
   input += synapse0x3149550();
   input += synapse0x3149590();
   input += synapse0x31495d0();
   input += synapse0x3149820();
   input += synapse0x3149860();
   input += synapse0x3149ab0();
   input += synapse0x3149af0();
   input += synapse0x3149b30();
   input += synapse0x3149d80();
   input += synapse0x3149dc0();
   input += synapse0x314a010();
   input += synapse0x314a050();
   input += synapse0x3154b00();
   input += synapse0x3154b40();
   input += synapse0x314a1a0();
   input += synapse0x314a6b0();
   input += synapse0x314a6f0();
   input += synapse0x314a730();
   input += synapse0x314a980();
   input += synapse0x314a9c0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3154970() {
   double input = input0x3154970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314aa00() {
   double input = 1.05332;
   input += synapse0x314a270();
   input += synapse0x314a2b0();
   input += synapse0x314a2f0();
   input += synapse0x314a330();
   input += synapse0x314acb0();
   input += synapse0x3157000();
   input += synapse0x3157040();
   input += synapse0x3157080();
   input += synapse0x31570c0();
   input += synapse0x3157100();
   input += synapse0x3157140();
   input += synapse0x3157180();
   input += synapse0x31571c0();
   input += synapse0x3157200();
   input += synapse0x3157240();
   input += synapse0x3157280();
   input += synapse0x314ab90();
   input += synapse0x314abd0();
   input += synapse0x31573d0();
   input += synapse0x3157410();
   input += synapse0x3157450();
   input += synapse0x3157490();
   input += synapse0x31574d0();
   input += synapse0x3157510();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314aa00() {
   double input = input0x314aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3157550() {
   double input = 1.07369;
   input += synapse0x3157890();
   input += synapse0x31578d0();
   input += synapse0x3157910();
   input += synapse0x3157950();
   input += synapse0x3157990();
   input += synapse0x31579d0();
   input += synapse0x3157a10();
   input += synapse0x3157a50();
   input += synapse0x3157a90();
   input += synapse0x3157ad0();
   input += synapse0x3157b10();
   input += synapse0x3157b50();
   input += synapse0x3157b90();
   input += synapse0x3157bd0();
   input += synapse0x3157c10();
   input += synapse0x3157c50();
   input += synapse0x31576e0();
   input += synapse0x3157720();
   input += synapse0x3157da0();
   input += synapse0x3157de0();
   input += synapse0x3157e20();
   input += synapse0x3157e60();
   input += synapse0x3157ea0();
   input += synapse0x3157ee0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3157550() {
   double input = input0x3157550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3157f20() {
   double input = 1.31731;
   input += synapse0x3158260();
   input += synapse0x31582a0();
   input += synapse0x31582e0();
   input += synapse0x3158320();
   input += synapse0x3158360();
   input += synapse0x31583a0();
   input += synapse0x31583e0();
   input += synapse0x3158420();
   input += synapse0x3158460();
   input += synapse0x31584a0();
   input += synapse0x31584e0();
   input += synapse0x3158520();
   input += synapse0x3158560();
   input += synapse0x31585a0();
   input += synapse0x31585e0();
   input += synapse0x3158620();
   input += synapse0x31580b0();
   input += synapse0x31580f0();
   input += synapse0x3158770();
   input += synapse0x31587b0();
   input += synapse0x31587f0();
   input += synapse0x3158830();
   input += synapse0x3158870();
   input += synapse0x31588b0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3157f20() {
   double input = input0x3157f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31588f0() {
   double input = -1.05777;
   input += synapse0x3158c30();
   input += synapse0x3158c70();
   input += synapse0x3158cb0();
   input += synapse0x3158cf0();
   input += synapse0x3158d30();
   input += synapse0x3158d70();
   input += synapse0x3158db0();
   input += synapse0x3158df0();
   input += synapse0x3158e30();
   input += synapse0x3158e70();
   input += synapse0x3158eb0();
   input += synapse0x3158ef0();
   input += synapse0x3158f30();
   input += synapse0x3158f70();
   input += synapse0x3158fb0();
   input += synapse0x3158ff0();
   input += synapse0x3158a80();
   input += synapse0x3158ac0();
   input += synapse0x3159140();
   input += synapse0x3159180();
   input += synapse0x31591c0();
   input += synapse0x3159200();
   input += synapse0x3159240();
   input += synapse0x3159280();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31588f0() {
   double input = input0x31588f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31592c0() {
   double input = 0.292872;
   input += synapse0x3159600();
   input += synapse0x3159640();
   input += synapse0x3159680();
   input += synapse0x31596c0();
   input += synapse0x3159700();
   input += synapse0x3159740();
   input += synapse0x3159780();
   input += synapse0x31597c0();
   input += synapse0x3159800();
   input += synapse0x3159840();
   input += synapse0x3159880();
   input += synapse0x31598c0();
   input += synapse0x3159900();
   input += synapse0x3159940();
   input += synapse0x3159980();
   input += synapse0x31599c0();
   input += synapse0x3159450();
   input += synapse0x3159490();
   input += synapse0x3159b10();
   input += synapse0x3159b50();
   input += synapse0x3159b90();
   input += synapse0x3159bd0();
   input += synapse0x3159c10();
   input += synapse0x3159c50();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31592c0() {
   double input = input0x31592c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3159c90() {
   double input = 1.55496;
   input += synapse0x3159fd0();
   input += synapse0x315a010();
   input += synapse0x315a050();
   input += synapse0x315a090();
   input += synapse0x315a0d0();
   input += synapse0x315a110();
   input += synapse0x315a150();
   input += synapse0x315a190();
   input += synapse0x315a1d0();
   input += synapse0x315a210();
   input += synapse0x315a250();
   input += synapse0x315a290();
   input += synapse0x315a2d0();
   input += synapse0x315a310();
   input += synapse0x315a350();
   input += synapse0x315a390();
   input += synapse0x3159e20();
   input += synapse0x3159e60();
   input += synapse0x315a4e0();
   input += synapse0x315a520();
   input += synapse0x315a560();
   input += synapse0x315a5a0();
   input += synapse0x315a5e0();
   input += synapse0x315a620();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3159c90() {
   double input = input0x3159c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x315a660() {
   double input = 0.667249;
   input += synapse0x315a9a0();
   input += synapse0x315a9e0();
   input += synapse0x315aa20();
   input += synapse0x315aa60();
   input += synapse0x315aaa0();
   input += synapse0x315aae0();
   input += synapse0x315ab20();
   input += synapse0x315ab60();
   input += synapse0x315aba0();
   input += synapse0x315abe0();
   input += synapse0x315ac20();
   input += synapse0x315ac60();
   input += synapse0x315aca0();
   input += synapse0x315ace0();
   input += synapse0x315ad20();
   input += synapse0x315ad60();
   input += synapse0x315a7f0();
   input += synapse0x315a830();
   input += synapse0x315aeb0();
   input += synapse0x315aef0();
   input += synapse0x315af30();
   input += synapse0x315af70();
   input += synapse0x315afb0();
   input += synapse0x315aff0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x315a660() {
   double input = input0x315a660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x315b030() {
   double input = 0.571577;
   input += synapse0x315b370();
   input += synapse0x315b3b0();
   input += synapse0x315b3f0();
   input += synapse0x315b430();
   input += synapse0x315b470();
   input += synapse0x315b4b0();
   input += synapse0x315b4f0();
   input += synapse0x315b530();
   input += synapse0x315b570();
   input += synapse0x315b5b0();
   input += synapse0x315b5f0();
   input += synapse0x315b630();
   input += synapse0x315b670();
   input += synapse0x315b6b0();
   input += synapse0x315b6f0();
   input += synapse0x315b730();
   input += synapse0x315b1c0();
   input += synapse0x315b200();
   input += synapse0x315b880();
   input += synapse0x315b8c0();
   input += synapse0x315b900();
   input += synapse0x315b940();
   input += synapse0x315b980();
   input += synapse0x315b9c0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x315b030() {
   double input = input0x315b030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x315ba00() {
   double input = -1.25705;
   input += synapse0x3144470();
   input += synapse0x31444b0();
   input += synapse0x31444f0();
   input += synapse0x3144530();
   input += synapse0x3144570();
   input += synapse0x31445b0();
   input += synapse0x31445f0();
   input += synapse0x3144630();
   input += synapse0x315c150();
   input += synapse0x315c190();
   input += synapse0x315c1d0();
   input += synapse0x315c210();
   input += synapse0x315c250();
   input += synapse0x315c290();
   input += synapse0x315c2d0();
   input += synapse0x315c310();
   input += synapse0x315bb90();
   input += synapse0x315bbd0();
   input += synapse0x315c460();
   input += synapse0x315c4a0();
   input += synapse0x315c4e0();
   input += synapse0x315c520();
   input += synapse0x315c560();
   input += synapse0x315c5a0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x315ba00() {
   double input = input0x315ba00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x315c5e0() {
   double input = 5.97304;
   input += synapse0x315c920();
   input += synapse0x315c960();
   input += synapse0x315c9a0();
   input += synapse0x315c9e0();
   input += synapse0x315ca20();
   input += synapse0x315ca60();
   input += synapse0x315caa0();
   input += synapse0x315cae0();
   input += synapse0x315cb20();
   input += synapse0x315cb60();
   input += synapse0x315cba0();
   input += synapse0x315cbe0();
   input += synapse0x315cc20();
   input += synapse0x315cc60();
   input += synapse0x315cca0();
   input += synapse0x315cce0();
   input += synapse0x315c770();
   input += synapse0x315c7b0();
   input += synapse0x315ce30();
   input += synapse0x315ce70();
   input += synapse0x315ceb0();
   input += synapse0x315cef0();
   input += synapse0x315cf30();
   input += synapse0x315cf70();
   return input;
}

double NNfunction_ss_sLuR::neuron0x315c5e0() {
   double input = input0x315c5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x315cfb0() {
   double input = -1.44827;
   input += synapse0x315d2f0();
   input += synapse0x315d330();
   input += synapse0x315d370();
   input += synapse0x315d3b0();
   input += synapse0x315d3f0();
   input += synapse0x315d430();
   input += synapse0x315d470();
   input += synapse0x315d4b0();
   input += synapse0x315d4f0();
   input += synapse0x315d530();
   input += synapse0x315d570();
   input += synapse0x315d5b0();
   input += synapse0x315d5f0();
   input += synapse0x315d630();
   input += synapse0x315d670();
   input += synapse0x315d6b0();
   input += synapse0x315d140();
   input += synapse0x315d180();
   input += synapse0x314dcb0();
   input += synapse0x314dcf0();
   input += synapse0x314dd30();
   input += synapse0x314dd70();
   input += synapse0x314ddb0();
   input += synapse0x314ddf0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x315cfb0() {
   double input = input0x315cfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314de30() {
   double input = 1.06857;
   input += synapse0x314e170();
   input += synapse0x314e1b0();
   input += synapse0x314e1f0();
   input += synapse0x314e230();
   input += synapse0x314e270();
   input += synapse0x314e2b0();
   input += synapse0x314e2f0();
   input += synapse0x314e330();
   input += synapse0x314e370();
   input += synapse0x314e3b0();
   input += synapse0x314e3f0();
   input += synapse0x314e430();
   input += synapse0x314e470();
   input += synapse0x314e4b0();
   input += synapse0x314e4f0();
   input += synapse0x314e530();
   input += synapse0x314dfc0();
   input += synapse0x314e000();
   input += synapse0x314e680();
   input += synapse0x314e6c0();
   input += synapse0x314e700();
   input += synapse0x314e740();
   input += synapse0x314e780();
   input += synapse0x314e7c0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314de30() {
   double input = input0x314de30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314e800() {
   double input = 1.25462;
   input += synapse0x314eb40();
   input += synapse0x314eb80();
   input += synapse0x314ebc0();
   input += synapse0x314ec00();
   input += synapse0x314ec40();
   input += synapse0x314ec80();
   input += synapse0x314ecc0();
   input += synapse0x314ed00();
   input += synapse0x314ed40();
   input += synapse0x314ed80();
   input += synapse0x314edc0();
   input += synapse0x314ee00();
   input += synapse0x314ee40();
   input += synapse0x314ee80();
   input += synapse0x314eec0();
   input += synapse0x314ef00();
   input += synapse0x314e990();
   input += synapse0x314e9d0();
   input += synapse0x314f050();
   input += synapse0x314f090();
   input += synapse0x314f0d0();
   input += synapse0x314f110();
   input += synapse0x314f150();
   input += synapse0x314f190();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314e800() {
   double input = input0x314e800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x314f1d0() {
   double input = -0.343885;
   input += synapse0x314f510();
   input += synapse0x314f550();
   input += synapse0x314f590();
   input += synapse0x314f5d0();
   input += synapse0x314f610();
   input += synapse0x314f650();
   input += synapse0x314f690();
   input += synapse0x314f6d0();
   input += synapse0x314f710();
   input += synapse0x314f750();
   input += synapse0x314f790();
   input += synapse0x314f7d0();
   input += synapse0x314f810();
   input += synapse0x314f850();
   input += synapse0x314f890();
   input += synapse0x314f8d0();
   input += synapse0x314f360();
   input += synapse0x314f3a0();
   input += synapse0x314fa20();
   input += synapse0x314fa60();
   input += synapse0x314faa0();
   input += synapse0x314fae0();
   input += synapse0x314fb20();
   input += synapse0x314fb60();
   return input;
}

double NNfunction_ss_sLuR::neuron0x314f1d0() {
   double input = input0x314f1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3161810() {
   double input = 0.179509;
   input += synapse0x3161a30();
   input += synapse0x3161a70();
   input += synapse0x3161ab0();
   input += synapse0x3161af0();
   input += synapse0x3161b30();
   input += synapse0x3161b70();
   input += synapse0x3161bb0();
   input += synapse0x3161bf0();
   input += synapse0x3161c30();
   input += synapse0x3161c70();
   input += synapse0x3161cb0();
   input += synapse0x3161cf0();
   input += synapse0x3161d30();
   input += synapse0x3161d70();
   input += synapse0x3161db0();
   input += synapse0x3161df0();
   input += synapse0x314fba0();
   input += synapse0x314fbe0();
   input += synapse0x3161f40();
   input += synapse0x3161f80();
   input += synapse0x3161fc0();
   input += synapse0x3162000();
   input += synapse0x3162040();
   input += synapse0x3162080();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3161810() {
   double input = input0x3161810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x31620c0() {
   double input = 0.63148;
   input += synapse0x3162400();
   input += synapse0x3162440();
   input += synapse0x3162480();
   input += synapse0x31624c0();
   input += synapse0x3162500();
   input += synapse0x3162540();
   input += synapse0x3162580();
   input += synapse0x31625c0();
   input += synapse0x3162600();
   input += synapse0x3162640();
   input += synapse0x3162680();
   input += synapse0x31626c0();
   input += synapse0x3162700();
   input += synapse0x3162740();
   input += synapse0x3162780();
   input += synapse0x31627c0();
   input += synapse0x3162250();
   input += synapse0x3162290();
   input += synapse0x3162910();
   input += synapse0x3162950();
   input += synapse0x3162990();
   input += synapse0x31629d0();
   input += synapse0x3162a10();
   input += synapse0x3162a50();
   return input;
}

double NNfunction_ss_sLuR::neuron0x31620c0() {
   double input = input0x31620c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3162a90() {
   double input = -0.690257;
   input += synapse0x3162dd0();
   input += synapse0x3162e10();
   input += synapse0x3162e50();
   input += synapse0x3162e90();
   input += synapse0x3162ed0();
   input += synapse0x3162f10();
   input += synapse0x3162f50();
   input += synapse0x3162f90();
   input += synapse0x3162fd0();
   input += synapse0x3163010();
   input += synapse0x3163050();
   input += synapse0x3163090();
   input += synapse0x31630d0();
   input += synapse0x3163110();
   input += synapse0x3163150();
   input += synapse0x3163190();
   input += synapse0x3162c20();
   input += synapse0x3162c60();
   input += synapse0x31632e0();
   input += synapse0x3163320();
   input += synapse0x3163360();
   input += synapse0x31633a0();
   input += synapse0x31633e0();
   input += synapse0x3163420();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3162a90() {
   double input = input0x3162a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x3163460() {
   double input = -0.677862;
   input += synapse0x31637a0();
   input += synapse0x31637e0();
   input += synapse0x3163820();
   input += synapse0x3163860();
   input += synapse0x31638a0();
   input += synapse0x31638e0();
   input += synapse0x3163920();
   input += synapse0x3163960();
   input += synapse0x31639a0();
   input += synapse0x31639e0();
   input += synapse0x3163a20();
   input += synapse0x3163a60();
   input += synapse0x3163aa0();
   input += synapse0x3163ae0();
   input += synapse0x3163b20();
   input += synapse0x3163b60();
   input += synapse0x31635f0();
   input += synapse0x3163630();
   input += synapse0x3163cb0();
   input += synapse0x3163cf0();
   input += synapse0x3163d30();
   input += synapse0x3163d70();
   input += synapse0x3163db0();
   input += synapse0x3163df0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x3163460() {
   double input = input0x3163460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x316a660() {
   double input = 2.04892;
   input += synapse0x2f03d00();
   input += synapse0x2f03d40();
   input += synapse0x31418a0();
   input += synapse0x31418e0();
   input += synapse0x3142270();
   input += synapse0x31422b0();
   input += synapse0x3143040();
   input += synapse0x3143080();
   input += synapse0x3143a10();
   input += synapse0x3143a50();
   input += synapse0x31443e0();
   input += synapse0x3144420();
   input += synapse0x3144ec0();
   input += synapse0x3144f00();
   input += synapse0x3145890();
   input += synapse0x31458d0();
   input += synapse0x3142970();
   input += synapse0x31429b0();
   input += synapse0x3147440();
   input += synapse0x3147480();
   input += synapse0x3147e10();
   input += synapse0x3147e50();
   input += synapse0x31487e0();
   input += synapse0x3148820();
   input += synapse0x31491b0();
   input += synapse0x31491f0();
   input += synapse0x313d350();
   input += synapse0x313d390();
   input += synapse0x314b2a0();
   input += synapse0x314b2e0();
   input += synapse0x314bc70();
   input += synapse0x314bcb0();
   input += synapse0x314c640();
   input += synapse0x314c680();
   input += synapse0x314d010();
   input += synapse0x314d050();
   input += synapse0x314d9e0();
   input += synapse0x314da20();
   input += synapse0x3146530();
   input += synapse0x3146570();
   input += synapse0x314fde0();
   input += synapse0x314fe20();
   input += synapse0x3150770();
   input += synapse0x31507b0();
   input += synapse0x3151140();
   input += synapse0x3151180();
   input += synapse0x3151b10();
   input += synapse0x3151b50();
   input += synapse0x31524e0();
   input += synapse0x3152520();
   return input;
}

double NNfunction_ss_sLuR::neuron0x316a660() {
   double input = input0x316a660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x316aa00() {
   double input = -0.671515;
   input += synapse0x3154c20();
   input += synapse0x3154c60();
   input += synapse0x314a1e0();
   input += synapse0x314a220();
   input += synapse0x3157800();
   input += synapse0x3157840();
   input += synapse0x31581d0();
   input += synapse0x3158210();
   input += synapse0x3158ba0();
   input += synapse0x3158be0();
   input += synapse0x3159570();
   input += synapse0x31595b0();
   input += synapse0x3159f40();
   input += synapse0x3159f80();
   input += synapse0x315a910();
   input += synapse0x315a950();
   input += synapse0x315b2e0();
   input += synapse0x315b320();
   input += synapse0x315bcb0();
   input += synapse0x315bcf0();
   input += synapse0x315c890();
   input += synapse0x315c8d0();
   input += synapse0x315d260();
   input += synapse0x315d2a0();
   input += synapse0x314e0e0();
   input += synapse0x314e120();
   input += synapse0x314eab0();
   input += synapse0x314eaf0();
   input += synapse0x314f480();
   input += synapse0x314f4c0();
   input += synapse0x31619a0();
   input += synapse0x31619e0();
   input += synapse0x3162370();
   input += synapse0x31623b0();
   input += synapse0x3162d40();
   input += synapse0x3162d80();
   input += synapse0x3163710();
   input += synapse0x3163750();
   input += synapse0x313f600();
   input += synapse0x313f640();
   input += synapse0x3152eb0();
   input += synapse0x3152ef0();
   input += synapse0x3163e30();
   input += synapse0x3163e70();
   input += synapse0x3163eb0();
   input += synapse0x3163ef0();
   input += synapse0x316ada0();
   input += synapse0x316ade0();
   input += synapse0x316ae20();
   input += synapse0x316ae60();
   return input;
}

double NNfunction_ss_sLuR::neuron0x316aa00() {
   double input = input0x316aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x316aea0() {
   double input = -0.841541;
   input += synapse0x316b1e0();
   input += synapse0x316b220();
   input += synapse0x316b260();
   input += synapse0x316b2a0();
   input += synapse0x316b2e0();
   input += synapse0x316b320();
   input += synapse0x316b360();
   input += synapse0x316b3a0();
   input += synapse0x316b3e0();
   input += synapse0x316b420();
   input += synapse0x316b460();
   input += synapse0x316b4a0();
   input += synapse0x316b4e0();
   input += synapse0x316b520();
   input += synapse0x316b560();
   input += synapse0x316b5a0();
   input += synapse0x316b030();
   input += synapse0x316b070();
   input += synapse0x316b6f0();
   input += synapse0x316b730();
   input += synapse0x316b770();
   input += synapse0x316b7b0();
   input += synapse0x316b7f0();
   input += synapse0x316b830();
   input += synapse0x316b870();
   input += synapse0x316b8b0();
   input += synapse0x316b8f0();
   input += synapse0x316b930();
   input += synapse0x316b970();
   input += synapse0x316b9b0();
   input += synapse0x316b9f0();
   input += synapse0x316ba30();
   input += synapse0x316b5e0();
   input += synapse0x316b620();
   input += synapse0x316b660();
   input += synapse0x316b6a0();
   input += synapse0x316bc80();
   input += synapse0x316bcc0();
   input += synapse0x316bd00();
   input += synapse0x316bd40();
   input += synapse0x316bd80();
   input += synapse0x316bdc0();
   input += synapse0x316be00();
   input += synapse0x316be40();
   input += synapse0x316be80();
   input += synapse0x316bec0();
   input += synapse0x316bf00();
   input += synapse0x316bf40();
   input += synapse0x316bf80();
   input += synapse0x316bfc0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x316aea0() {
   double input = input0x316aea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x316c000() {
   double input = 0.972328;
   input += synapse0x316c340();
   input += synapse0x316c380();
   input += synapse0x316c3c0();
   input += synapse0x316c400();
   input += synapse0x316c440();
   input += synapse0x316c480();
   input += synapse0x316c4c0();
   input += synapse0x316c500();
   input += synapse0x316c540();
   input += synapse0x316c580();
   input += synapse0x316c5c0();
   input += synapse0x316c600();
   input += synapse0x316c640();
   input += synapse0x316c680();
   input += synapse0x316c6c0();
   input += synapse0x316c700();
   input += synapse0x316c190();
   input += synapse0x316c1d0();
   input += synapse0x316c850();
   input += synapse0x316c890();
   input += synapse0x316c8d0();
   input += synapse0x316c910();
   input += synapse0x316c950();
   input += synapse0x316c990();
   input += synapse0x316c9d0();
   input += synapse0x316ca10();
   input += synapse0x316ca50();
   input += synapse0x316ca90();
   input += synapse0x316cad0();
   input += synapse0x316cb10();
   input += synapse0x316cb50();
   input += synapse0x316cb90();
   input += synapse0x316c740();
   input += synapse0x316c780();
   input += synapse0x316c7c0();
   input += synapse0x316c800();
   input += synapse0x316cde0();
   input += synapse0x316ce20();
   input += synapse0x316ce60();
   input += synapse0x316cea0();
   input += synapse0x316cee0();
   input += synapse0x316cf20();
   input += synapse0x316cf60();
   input += synapse0x316cfa0();
   input += synapse0x316cfe0();
   input += synapse0x316d020();
   input += synapse0x316d060();
   input += synapse0x316d0a0();
   input += synapse0x316d0e0();
   input += synapse0x316d120();
   return input;
}

double NNfunction_ss_sLuR::neuron0x316c000() {
   double input = input0x316c000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x316d160() {
   double input = 1.04962;
   input += synapse0x316d4a0();
   input += synapse0x316d4e0();
   input += synapse0x316d520();
   input += synapse0x316d560();
   input += synapse0x316d5a0();
   input += synapse0x316d5e0();
   input += synapse0x316d620();
   input += synapse0x316d660();
   input += synapse0x316d6a0();
   input += synapse0x316d6e0();
   input += synapse0x316d720();
   input += synapse0x316d760();
   input += synapse0x316d7a0();
   input += synapse0x316d7e0();
   input += synapse0x316d820();
   input += synapse0x316d860();
   input += synapse0x316d2f0();
   input += synapse0x316d330();
   input += synapse0x316d9b0();
   input += synapse0x316d9f0();
   input += synapse0x316da30();
   input += synapse0x316da70();
   input += synapse0x316dab0();
   input += synapse0x316daf0();
   input += synapse0x316db30();
   input += synapse0x316db70();
   input += synapse0x316dbb0();
   input += synapse0x316dbf0();
   input += synapse0x316dc30();
   input += synapse0x316dc70();
   input += synapse0x316dcb0();
   input += synapse0x316dcf0();
   input += synapse0x316d8a0();
   input += synapse0x316d8e0();
   input += synapse0x316d920();
   input += synapse0x316d960();
   input += synapse0x316df40();
   input += synapse0x316df80();
   input += synapse0x316dfc0();
   input += synapse0x316e000();
   input += synapse0x316e040();
   input += synapse0x316e080();
   input += synapse0x316e0c0();
   input += synapse0x316e100();
   input += synapse0x316e140();
   input += synapse0x316e180();
   input += synapse0x316e1c0();
   input += synapse0x316e200();
   input += synapse0x316e240();
   input += synapse0x316e280();
   return input;
}

double NNfunction_ss_sLuR::neuron0x316d160() {
   double input = input0x316d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x316e2c0() {
   double input = 1.9624;
   input += synapse0x316e4e0();
   input += synapse0x316e520();
   input += synapse0x316e560();
   input += synapse0x316e5a0();
   input += synapse0x316e5e0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x316e2c0() {
   double input = input0x316e2c0();
   return (input * 1)+0;
}

double NNfunction_ss_sLuR::synapse0x313a270() {
   return (neuron0x313a3b0()*-0.0832198);
}

double NNfunction_ss_sLuR::synapse0x313a2b0() {
   return (neuron0x313a6f0()*-0.369934);
}

double NNfunction_ss_sLuR::synapse0x313f690() {
   return (neuron0x313aa30()*0.609563);
}

double NNfunction_ss_sLuR::synapse0x313f6d0() {
   return (neuron0x313ad70()*-0.0944946);
}

double NNfunction_ss_sLuR::synapse0x313f710() {
   return (neuron0x313b0b0()*-0.480333);
}

double NNfunction_ss_sLuR::synapse0x313f750() {
   return (neuron0x313b3f0()*-0.0523582);
}

double NNfunction_ss_sLuR::synapse0x313f790() {
   return (neuron0x313b730()*-0.316036);
}

double NNfunction_ss_sLuR::synapse0x313f7d0() {
   return (neuron0x313ba70()*-0.380634);
}

double NNfunction_ss_sLuR::synapse0x313f810() {
   return (neuron0x313bdb0()*0.767595);
}

double NNfunction_ss_sLuR::synapse0x313f850() {
   return (neuron0x313c0f0()*-0.230868);
}

double NNfunction_ss_sLuR::synapse0x313f890() {
   return (neuron0x313c430()*0.462313);
}

double NNfunction_ss_sLuR::synapse0x313f8d0() {
   return (neuron0x313c770()*0.133022);
}

double NNfunction_ss_sLuR::synapse0x313f910() {
   return (neuron0x313cab0()*0.306466);
}

double NNfunction_ss_sLuR::synapse0x313f950() {
   return (neuron0x313cdf0()*0.0223959);
}

double NNfunction_ss_sLuR::synapse0x313f990() {
   return (neuron0x313d130()*0.837325);
}

double NNfunction_ss_sLuR::synapse0x313f9d0() {
   return (neuron0x313d470()*-0.145643);
}

double NNfunction_ss_sLuR::synapse0x313a1e0() {
   return (neuron0x313d7b0()*0.530679);
}

double NNfunction_ss_sLuR::synapse0x313a220() {
   return (neuron0x313dd10()*-0.0373943);
}

double NNfunction_ss_sLuR::synapse0x2ef55a0() {
   return (neuron0x313df30()*0.241995);
}

double NNfunction_ss_sLuR::synapse0x2ef55e0() {
   return (neuron0x313e270()*0.0227628);
}

double NNfunction_ss_sLuR::synapse0x313fc30() {
   return (neuron0x313e5b0()*-0.0141846);
}

double NNfunction_ss_sLuR::synapse0x313fc70() {
   return (neuron0x313e8f0()*0.333953);
}

double NNfunction_ss_sLuR::synapse0x313fcb0() {
   return (neuron0x313ec30()*0.177432);
}

double NNfunction_ss_sLuR::synapse0x313fcf0() {
   return (neuron0x313ef70()*0.591517);
}

double NNfunction_ss_sLuR::synapse0x3140070() {
   return (neuron0x313a3b0()*-0.316879);
}

double NNfunction_ss_sLuR::synapse0x31400b0() {
   return (neuron0x313a6f0()*-0.560443);
}

double NNfunction_ss_sLuR::synapse0x31400f0() {
   return (neuron0x313aa30()*0.244835);
}

double NNfunction_ss_sLuR::synapse0x3140130() {
   return (neuron0x313ad70()*0.710713);
}

double NNfunction_ss_sLuR::synapse0x3140170() {
   return (neuron0x313b0b0()*-0.0927938);
}

double NNfunction_ss_sLuR::synapse0x31401b0() {
   return (neuron0x313b3f0()*0.71051);
}

double NNfunction_ss_sLuR::synapse0x31401f0() {
   return (neuron0x313b730()*-0.0986944);
}

double NNfunction_ss_sLuR::synapse0x3140230() {
   return (neuron0x313ba70()*0.183891);
}

double NNfunction_ss_sLuR::synapse0x3140270() {
   return (neuron0x313bdb0()*-0.150778);
}

double NNfunction_ss_sLuR::synapse0x313fb20() {
   return (neuron0x313c0f0()*0.471148);
}

double NNfunction_ss_sLuR::synapse0x313fb60() {
   return (neuron0x313c430()*0.373694);
}

double NNfunction_ss_sLuR::synapse0x313fba0() {
   return (neuron0x313c770()*0.16164);
}

double NNfunction_ss_sLuR::synapse0x313fbe0() {
   return (neuron0x313cab0()*0.297649);
}

double NNfunction_ss_sLuR::synapse0x31404c0() {
   return (neuron0x313cdf0()*0.544525);
}

double NNfunction_ss_sLuR::synapse0x3140500() {
   return (neuron0x313d130()*0.518414);
}

double NNfunction_ss_sLuR::synapse0x3140540() {
   return (neuron0x313d470()*0.10138);
}

double NNfunction_ss_sLuR::synapse0x313fec0() {
   return (neuron0x313d7b0()*-0.418146);
}

double NNfunction_ss_sLuR::synapse0x313ff00() {
   return (neuron0x313dd10()*-0.234916);
}

double NNfunction_ss_sLuR::synapse0x3140690() {
   return (neuron0x313df30()*-0.13409);
}

double NNfunction_ss_sLuR::synapse0x31406d0() {
   return (neuron0x313e270()*0.364702);
}

double NNfunction_ss_sLuR::synapse0x3140710() {
   return (neuron0x313e5b0()*-0.242259);
}

double NNfunction_ss_sLuR::synapse0x3140750() {
   return (neuron0x313e8f0()*0.120999);
}

double NNfunction_ss_sLuR::synapse0x3140790() {
   return (neuron0x313ec30()*0.265144);
}

double NNfunction_ss_sLuR::synapse0x31407d0() {
   return (neuron0x313ef70()*0.0799294);
}

double NNfunction_ss_sLuR::synapse0x3140b50() {
   return (neuron0x313a3b0()*-0.423298);
}

double NNfunction_ss_sLuR::synapse0x3140b90() {
   return (neuron0x313a6f0()*-0.412219);
}

double NNfunction_ss_sLuR::synapse0x3140bd0() {
   return (neuron0x313aa30()*-0.410835);
}

double NNfunction_ss_sLuR::synapse0x3140c10() {
   return (neuron0x313ad70()*0.132262);
}

double NNfunction_ss_sLuR::synapse0x3140c50() {
   return (neuron0x313b0b0()*0.384791);
}

double NNfunction_ss_sLuR::synapse0x3140c90() {
   return (neuron0x313b3f0()*0.401317);
}

double NNfunction_ss_sLuR::synapse0x3140cd0() {
   return (neuron0x313b730()*0.496165);
}

double NNfunction_ss_sLuR::synapse0x3140d10() {
   return (neuron0x313ba70()*1.0589);
}

double NNfunction_ss_sLuR::synapse0x3140d50() {
   return (neuron0x313bdb0()*-0.184209);
}

double NNfunction_ss_sLuR::synapse0x3140d90() {
   return (neuron0x313c0f0()*0.267443);
}

double NNfunction_ss_sLuR::synapse0x3140dd0() {
   return (neuron0x313c430()*-0.523624);
}

double NNfunction_ss_sLuR::synapse0x3140e10() {
   return (neuron0x313c770()*-0.361775);
}

double NNfunction_ss_sLuR::synapse0x3140e50() {
   return (neuron0x313cab0()*0.493856);
}

double NNfunction_ss_sLuR::synapse0x3140e90() {
   return (neuron0x313cdf0()*0.46186);
}

double NNfunction_ss_sLuR::synapse0x3140ed0() {
   return (neuron0x313d130()*0.260683);
}

double NNfunction_ss_sLuR::synapse0x3140f10() {
   return (neuron0x313d470()*-0.0166894);
}

double NNfunction_ss_sLuR::synapse0x31409a0() {
   return (neuron0x313d7b0()*-0.399902);
}

double NNfunction_ss_sLuR::synapse0x31409e0() {
   return (neuron0x313dd10()*-0.199216);
}

double NNfunction_ss_sLuR::synapse0x2ef5c40() {
   return (neuron0x313df30()*0.0151035);
}

double NNfunction_ss_sLuR::synapse0x2f03510() {
   return (neuron0x313e270()*-0.344764);
}

double NNfunction_ss_sLuR::synapse0x2f03550() {
   return (neuron0x313e5b0()*-0.156279);
}

double NNfunction_ss_sLuR::synapse0x3129440() {
   return (neuron0x313e8f0()*-0.0210532);
}

double NNfunction_ss_sLuR::synapse0x3129480() {
   return (neuron0x313ec30()*0.293952);
}

double NNfunction_ss_sLuR::synapse0x31294c0() {
   return (neuron0x313ef70()*-0.277829);
}

double NNfunction_ss_sLuR::synapse0x2f03d90() {
   return (neuron0x313a3b0()*-0.00552002);
}

double NNfunction_ss_sLuR::synapse0x3140440() {
   return (neuron0x313a6f0()*-0.197394);
}

double NNfunction_ss_sLuR::synapse0x3140480() {
   return (neuron0x313aa30()*0.104242);
}

double NNfunction_ss_sLuR::synapse0x3141060() {
   return (neuron0x313ad70()*0.0127258);
}

double NNfunction_ss_sLuR::synapse0x31410a0() {
   return (neuron0x313b0b0()*0.0100613);
}

double NNfunction_ss_sLuR::synapse0x31410e0() {
   return (neuron0x313b3f0()*0.0585288);
}

double NNfunction_ss_sLuR::synapse0x3141120() {
   return (neuron0x313b730()*-0.0403689);
}

double NNfunction_ss_sLuR::synapse0x3141160() {
   return (neuron0x313ba70()*0.0248952);
}

double NNfunction_ss_sLuR::synapse0x31411a0() {
   return (neuron0x313bdb0()*0.100154);
}

double NNfunction_ss_sLuR::synapse0x31411e0() {
   return (neuron0x313c0f0()*-0.044684);
}

double NNfunction_ss_sLuR::synapse0x3141220() {
   return (neuron0x313c430()*-0.0304738);
}

double NNfunction_ss_sLuR::synapse0x3141260() {
   return (neuron0x313c770()*-0.443389);
}

double NNfunction_ss_sLuR::synapse0x31412a0() {
   return (neuron0x313cab0()*-0.021911);
}

double NNfunction_ss_sLuR::synapse0x31412e0() {
   return (neuron0x313cdf0()*0.00617373);
}

double NNfunction_ss_sLuR::synapse0x3141320() {
   return (neuron0x313d130()*0.183308);
}

double NNfunction_ss_sLuR::synapse0x3141360() {
   return (neuron0x313d470()*-0.158055);
}

double NNfunction_ss_sLuR::synapse0x313a2f0() {
   return (neuron0x313d7b0()*0.0466996);
}

double NNfunction_ss_sLuR::synapse0x313a330() {
   return (neuron0x313dd10()*-0.162466);
}

double NNfunction_ss_sLuR::synapse0x313a370() {
   return (neuron0x313df30()*-0.201649);
}

double NNfunction_ss_sLuR::synapse0x31414b0() {
   return (neuron0x313e270()*-0.00219675);
}

double NNfunction_ss_sLuR::synapse0x31414f0() {
   return (neuron0x313e5b0()*0.0339104);
}

double NNfunction_ss_sLuR::synapse0x3141530() {
   return (neuron0x313e8f0()*0.0259592);
}

double NNfunction_ss_sLuR::synapse0x3141570() {
   return (neuron0x313ec30()*-0.023071);
}

double NNfunction_ss_sLuR::synapse0x31415b0() {
   return (neuron0x313ef70()*-0.0549697);
}

double NNfunction_ss_sLuR::synapse0x3141930() {
   return (neuron0x313a3b0()*0.401698);
}

double NNfunction_ss_sLuR::synapse0x3141970() {
   return (neuron0x313a6f0()*-0.45008);
}

double NNfunction_ss_sLuR::synapse0x31419b0() {
   return (neuron0x313aa30()*0.0353191);
}

double NNfunction_ss_sLuR::synapse0x31419f0() {
   return (neuron0x313ad70()*-0.00443861);
}

double NNfunction_ss_sLuR::synapse0x3141a30() {
   return (neuron0x313b0b0()*1.02153);
}

double NNfunction_ss_sLuR::synapse0x3141a70() {
   return (neuron0x313b3f0()*-0.201566);
}

double NNfunction_ss_sLuR::synapse0x3141ab0() {
   return (neuron0x313b730()*1.15043);
}

double NNfunction_ss_sLuR::synapse0x3141af0() {
   return (neuron0x313ba70()*-0.750173);
}

double NNfunction_ss_sLuR::synapse0x3141b30() {
   return (neuron0x313bdb0()*0.049733);
}

double NNfunction_ss_sLuR::synapse0x3141b70() {
   return (neuron0x313c0f0()*1.01053);
}

double NNfunction_ss_sLuR::synapse0x3141bb0() {
   return (neuron0x313c430()*0.145446);
}

double NNfunction_ss_sLuR::synapse0x3141bf0() {
   return (neuron0x313c770()*0.796655);
}

double NNfunction_ss_sLuR::synapse0x3141c30() {
   return (neuron0x313cab0()*-1.23799);
}

double NNfunction_ss_sLuR::synapse0x3141c70() {
   return (neuron0x313cdf0()*0.231862);
}

double NNfunction_ss_sLuR::synapse0x3141cb0() {
   return (neuron0x313d130()*-0.893901);
}

double NNfunction_ss_sLuR::synapse0x3141cf0() {
   return (neuron0x313d470()*-0.0313431);
}

double NNfunction_ss_sLuR::synapse0x3141780() {
   return (neuron0x313d7b0()*-0.693557);
}

double NNfunction_ss_sLuR::synapse0x31417c0() {
   return (neuron0x313dd10()*0.373163);
}

double NNfunction_ss_sLuR::synapse0x3141e40() {
   return (neuron0x313df30()*0.00615091);
}

double NNfunction_ss_sLuR::synapse0x3141e80() {
   return (neuron0x313e270()*0.420222);
}

double NNfunction_ss_sLuR::synapse0x3141ec0() {
   return (neuron0x313e5b0()*-0.040914);
}

double NNfunction_ss_sLuR::synapse0x3141f00() {
   return (neuron0x313e8f0()*-0.637037);
}

double NNfunction_ss_sLuR::synapse0x3141f40() {
   return (neuron0x313ec30()*0.368065);
}

double NNfunction_ss_sLuR::synapse0x3141f80() {
   return (neuron0x313ef70()*0.323612);
}

double NNfunction_ss_sLuR::synapse0x3142300() {
   return (neuron0x313a3b0()*-0.248406);
}

double NNfunction_ss_sLuR::synapse0x3142340() {
   return (neuron0x313a6f0()*0.0342732);
}

double NNfunction_ss_sLuR::synapse0x3142380() {
   return (neuron0x313aa30()*-0.331298);
}

double NNfunction_ss_sLuR::synapse0x31423c0() {
   return (neuron0x313ad70()*-0.0657469);
}

double NNfunction_ss_sLuR::synapse0x3142400() {
   return (neuron0x313b0b0()*0.119838);
}

double NNfunction_ss_sLuR::synapse0x3142440() {
   return (neuron0x313b3f0()*0.421048);
}

double NNfunction_ss_sLuR::synapse0x3142480() {
   return (neuron0x313b730()*0.0756112);
}

double NNfunction_ss_sLuR::synapse0x31424c0() {
   return (neuron0x313ba70()*0.0650787);
}

double NNfunction_ss_sLuR::synapse0x3142500() {
   return (neuron0x313bdb0()*0.0300927);
}

double NNfunction_ss_sLuR::synapse0x2f03860() {
   return (neuron0x313c0f0()*-0.228831);
}

double NNfunction_ss_sLuR::synapse0x2f038a0() {
   return (neuron0x313c430()*0.0757497);
}

double NNfunction_ss_sLuR::synapse0x2f038e0() {
   return (neuron0x313c770()*-0.0246841);
}

double NNfunction_ss_sLuR::synapse0x2f03920() {
   return (neuron0x313cab0()*-0.211629);
}

double NNfunction_ss_sLuR::synapse0x2f03960() {
   return (neuron0x313cdf0()*-0.301419);
}

double NNfunction_ss_sLuR::synapse0x2f039a0() {
   return (neuron0x313d130()*-0.415275);
}

double NNfunction_ss_sLuR::synapse0x2f039e0() {
   return (neuron0x313d470()*0.319411);
}

double NNfunction_ss_sLuR::synapse0x3142150() {
   return (neuron0x313d7b0()*-0.0799019);
}

double NNfunction_ss_sLuR::synapse0x3142190() {
   return (neuron0x313dd10()*0.443404);
}

double NNfunction_ss_sLuR::synapse0x2f03b30() {
   return (neuron0x313df30()*0.502425);
}

double NNfunction_ss_sLuR::synapse0x2f03b70() {
   return (neuron0x313e270()*-0.170632);
}

double NNfunction_ss_sLuR::synapse0x2f03bb0() {
   return (neuron0x313e5b0()*0.289751);
}

double NNfunction_ss_sLuR::synapse0x2f03bf0() {
   return (neuron0x313e8f0()*0.149136);
}

double NNfunction_ss_sLuR::synapse0x2f03c30() {
   return (neuron0x313ec30()*-0.245586);
}

double NNfunction_ss_sLuR::synapse0x3142d50() {
   return (neuron0x313ef70()*0.172524);
}

double NNfunction_ss_sLuR::synapse0x31430d0() {
   return (neuron0x313a3b0()*-0.142443);
}

double NNfunction_ss_sLuR::synapse0x3143110() {
   return (neuron0x313a6f0()*0.517045);
}

double NNfunction_ss_sLuR::synapse0x3143150() {
   return (neuron0x313aa30()*-0.107076);
}

double NNfunction_ss_sLuR::synapse0x3143190() {
   return (neuron0x313ad70()*0.764375);
}

double NNfunction_ss_sLuR::synapse0x31431d0() {
   return (neuron0x313b0b0()*-0.152272);
}

double NNfunction_ss_sLuR::synapse0x3143210() {
   return (neuron0x313b3f0()*-1.01117);
}

double NNfunction_ss_sLuR::synapse0x3143250() {
   return (neuron0x313b730()*-0.615663);
}

double NNfunction_ss_sLuR::synapse0x3143290() {
   return (neuron0x313ba70()*-0.453599);
}

double NNfunction_ss_sLuR::synapse0x31432d0() {
   return (neuron0x313bdb0()*-1.25611);
}

double NNfunction_ss_sLuR::synapse0x3143310() {
   return (neuron0x313c0f0()*-0.60743);
}

double NNfunction_ss_sLuR::synapse0x3143350() {
   return (neuron0x313c430()*-0.220666);
}

double NNfunction_ss_sLuR::synapse0x3143390() {
   return (neuron0x313c770()*-0.345463);
}

double NNfunction_ss_sLuR::synapse0x31433d0() {
   return (neuron0x313cab0()*0.138488);
}

double NNfunction_ss_sLuR::synapse0x3143410() {
   return (neuron0x313cdf0()*-0.217393);
}

double NNfunction_ss_sLuR::synapse0x3143450() {
   return (neuron0x313d130()*0.977814);
}

double NNfunction_ss_sLuR::synapse0x3143490() {
   return (neuron0x313d470()*0.275342);
}

double NNfunction_ss_sLuR::synapse0x3142f20() {
   return (neuron0x313d7b0()*-0.160194);
}

double NNfunction_ss_sLuR::synapse0x3142f60() {
   return (neuron0x313dd10()*0.578873);
}

double NNfunction_ss_sLuR::synapse0x31435e0() {
   return (neuron0x313df30()*0.454779);
}

double NNfunction_ss_sLuR::synapse0x3143620() {
   return (neuron0x313e270()*-0.0120906);
}

double NNfunction_ss_sLuR::synapse0x3143660() {
   return (neuron0x313e5b0()*-0.605909);
}

double NNfunction_ss_sLuR::synapse0x31436a0() {
   return (neuron0x313e8f0()*0.382207);
}

double NNfunction_ss_sLuR::synapse0x31436e0() {
   return (neuron0x313ec30()*0.376162);
}

double NNfunction_ss_sLuR::synapse0x3143720() {
   return (neuron0x313ef70()*0.216038);
}

double NNfunction_ss_sLuR::synapse0x3143aa0() {
   return (neuron0x313a3b0()*-0.364943);
}

double NNfunction_ss_sLuR::synapse0x3143ae0() {
   return (neuron0x313a6f0()*-0.238635);
}

double NNfunction_ss_sLuR::synapse0x3143b20() {
   return (neuron0x313aa30()*-0.457138);
}

double NNfunction_ss_sLuR::synapse0x3143b60() {
   return (neuron0x313ad70()*1.15295);
}

double NNfunction_ss_sLuR::synapse0x3143ba0() {
   return (neuron0x313b0b0()*0.55528);
}

double NNfunction_ss_sLuR::synapse0x3143be0() {
   return (neuron0x313b3f0()*-0.251543);
}

double NNfunction_ss_sLuR::synapse0x3143c20() {
   return (neuron0x313b730()*0.896447);
}

double NNfunction_ss_sLuR::synapse0x3143c60() {
   return (neuron0x313ba70()*-0.209875);
}

double NNfunction_ss_sLuR::synapse0x3143ca0() {
   return (neuron0x313bdb0()*-0.389003);
}

double NNfunction_ss_sLuR::synapse0x3143ce0() {
   return (neuron0x313c0f0()*-0.0779417);
}

double NNfunction_ss_sLuR::synapse0x3143d20() {
   return (neuron0x313c430()*-0.596782);
}

double NNfunction_ss_sLuR::synapse0x3143d60() {
   return (neuron0x313c770()*-0.0176569);
}

double NNfunction_ss_sLuR::synapse0x3143da0() {
   return (neuron0x313cab0()*-0.403581);
}

double NNfunction_ss_sLuR::synapse0x3143de0() {
   return (neuron0x313cdf0()*-0.402486);
}

double NNfunction_ss_sLuR::synapse0x3143e20() {
   return (neuron0x313d130()*-0.515757);
}

double NNfunction_ss_sLuR::synapse0x3143e60() {
   return (neuron0x313d470()*0.000366518);
}

double NNfunction_ss_sLuR::synapse0x31438f0() {
   return (neuron0x313d7b0()*-0.803672);
}

double NNfunction_ss_sLuR::synapse0x3143930() {
   return (neuron0x313dd10()*0.149553);
}

double NNfunction_ss_sLuR::synapse0x3143fb0() {
   return (neuron0x313df30()*0.130329);
}

double NNfunction_ss_sLuR::synapse0x3143ff0() {
   return (neuron0x313e270()*0.499816);
}

double NNfunction_ss_sLuR::synapse0x3144030() {
   return (neuron0x313e5b0()*0.213154);
}

double NNfunction_ss_sLuR::synapse0x3144070() {
   return (neuron0x313e8f0()*-0.114817);
}

double NNfunction_ss_sLuR::synapse0x31440b0() {
   return (neuron0x313ec30()*-0.52683);
}

double NNfunction_ss_sLuR::synapse0x31440f0() {
   return (neuron0x313ef70()*-0.191731);
}

double NNfunction_ss_sLuR::synapse0x313dc00() {
   return (neuron0x313a3b0()*0.0224585);
}

double NNfunction_ss_sLuR::synapse0x313dc40() {
   return (neuron0x313a6f0()*-0.0260148);
}

double NNfunction_ss_sLuR::synapse0x313dc80() {
   return (neuron0x313aa30()*-0.0392477);
}

double NNfunction_ss_sLuR::synapse0x313dcc0() {
   return (neuron0x313ad70()*-2.27991);
}

double NNfunction_ss_sLuR::synapse0x3144680() {
   return (neuron0x313b0b0()*0.0243427);
}

double NNfunction_ss_sLuR::synapse0x31446c0() {
   return (neuron0x313b3f0()*0.0147258);
}

double NNfunction_ss_sLuR::synapse0x3144700() {
   return (neuron0x313b730()*-0.00454474);
}

double NNfunction_ss_sLuR::synapse0x3144740() {
   return (neuron0x313ba70()*0.00622376);
}

double NNfunction_ss_sLuR::synapse0x3144780() {
   return (neuron0x313bdb0()*-0.025223);
}

double NNfunction_ss_sLuR::synapse0x31447c0() {
   return (neuron0x313c0f0()*-0.0190545);
}

double NNfunction_ss_sLuR::synapse0x3144800() {
   return (neuron0x313c430()*0.00261402);
}

double NNfunction_ss_sLuR::synapse0x3144840() {
   return (neuron0x313c770()*-0.0360556);
}

double NNfunction_ss_sLuR::synapse0x3144880() {
   return (neuron0x313cab0()*0.169943);
}

double NNfunction_ss_sLuR::synapse0x31448c0() {
   return (neuron0x313cdf0()*0.013701);
}

double NNfunction_ss_sLuR::synapse0x3144900() {
   return (neuron0x313d130()*0.247214);
}

double NNfunction_ss_sLuR::synapse0x3144940() {
   return (neuron0x313d470()*-0.00823608);
}

double NNfunction_ss_sLuR::synapse0x31442c0() {
   return (neuron0x313d7b0()*0.00413235);
}

double NNfunction_ss_sLuR::synapse0x3144300() {
   return (neuron0x313dd10()*-0.0510065);
}

double NNfunction_ss_sLuR::synapse0x3144a90() {
   return (neuron0x313df30()*-0.045556);
}

double NNfunction_ss_sLuR::synapse0x3144ad0() {
   return (neuron0x313e270()*0.0043731);
}

double NNfunction_ss_sLuR::synapse0x3144b10() {
   return (neuron0x313e5b0()*0.00908875);
}

double NNfunction_ss_sLuR::synapse0x3144b50() {
   return (neuron0x313e8f0()*0.00560926);
}

double NNfunction_ss_sLuR::synapse0x3144b90() {
   return (neuron0x313ec30()*0.00302659);
}

double NNfunction_ss_sLuR::synapse0x3144bd0() {
   return (neuron0x313ef70()*0.00480899);
}

double NNfunction_ss_sLuR::synapse0x3144f50() {
   return (neuron0x313a3b0()*0.00863661);
}

double NNfunction_ss_sLuR::synapse0x3144f90() {
   return (neuron0x313a6f0()*0.0196838);
}

double NNfunction_ss_sLuR::synapse0x3144fd0() {
   return (neuron0x313aa30()*-0.0139897);
}

double NNfunction_ss_sLuR::synapse0x3145010() {
   return (neuron0x313ad70()*-9.4122);
}

double NNfunction_ss_sLuR::synapse0x3145050() {
   return (neuron0x313b0b0()*0.0131838);
}

double NNfunction_ss_sLuR::synapse0x3145090() {
   return (neuron0x313b3f0()*0.00196986);
}

double NNfunction_ss_sLuR::synapse0x31450d0() {
   return (neuron0x313b730()*0.00174486);
}

double NNfunction_ss_sLuR::synapse0x3145110() {
   return (neuron0x313ba70()*0.00334947);
}

double NNfunction_ss_sLuR::synapse0x3145150() {
   return (neuron0x313bdb0()*-0.0296314);
}

double NNfunction_ss_sLuR::synapse0x3145190() {
   return (neuron0x313c0f0()*-0.0142018);
}

double NNfunction_ss_sLuR::synapse0x31451d0() {
   return (neuron0x313c430()*-0.0169515);
}

double NNfunction_ss_sLuR::synapse0x3145210() {
   return (neuron0x313c770()*-0.028716);
}

double NNfunction_ss_sLuR::synapse0x3145250() {
   return (neuron0x313cab0()*0.459659);
}

double NNfunction_ss_sLuR::synapse0x3145290() {
   return (neuron0x313cdf0()*0.0710406);
}

double NNfunction_ss_sLuR::synapse0x31452d0() {
   return (neuron0x313d130()*0.628952);
}

double NNfunction_ss_sLuR::synapse0x3145310() {
   return (neuron0x313d470()*0.00374409);
}

double NNfunction_ss_sLuR::synapse0x3144da0() {
   return (neuron0x313d7b0()*0.029478);
}

double NNfunction_ss_sLuR::synapse0x3144de0() {
   return (neuron0x313dd10()*0.0339176);
}

double NNfunction_ss_sLuR::synapse0x3145460() {
   return (neuron0x313df30()*-0.00937809);
}

double NNfunction_ss_sLuR::synapse0x31454a0() {
   return (neuron0x313e270()*-0.0279505);
}

double NNfunction_ss_sLuR::synapse0x31454e0() {
   return (neuron0x313e5b0()*-0.0642239);
}

double NNfunction_ss_sLuR::synapse0x3145520() {
   return (neuron0x313e8f0()*-0.00778841);
}

double NNfunction_ss_sLuR::synapse0x3145560() {
   return (neuron0x313ec30()*-0.00976938);
}

double NNfunction_ss_sLuR::synapse0x31455a0() {
   return (neuron0x313ef70()*-0.0387413);
}

double NNfunction_ss_sLuR::synapse0x3145920() {
   return (neuron0x313a3b0()*-0.142516);
}

double NNfunction_ss_sLuR::synapse0x3145960() {
   return (neuron0x313a6f0()*0.00919398);
}

double NNfunction_ss_sLuR::synapse0x31459a0() {
   return (neuron0x313aa30()*-0.201379);
}

double NNfunction_ss_sLuR::synapse0x31459e0() {
   return (neuron0x313ad70()*0.083711);
}

double NNfunction_ss_sLuR::synapse0x3145a20() {
   return (neuron0x313b0b0()*-0.253285);
}

double NNfunction_ss_sLuR::synapse0x3145a60() {
   return (neuron0x313b3f0()*-0.637913);
}

double NNfunction_ss_sLuR::synapse0x3145aa0() {
   return (neuron0x313b730()*0.405977);
}

double NNfunction_ss_sLuR::synapse0x3145ae0() {
   return (neuron0x313ba70()*0.379837);
}

double NNfunction_ss_sLuR::synapse0x3145b20() {
   return (neuron0x313bdb0()*0.28011);
}

double NNfunction_ss_sLuR::synapse0x3145b60() {
   return (neuron0x313c0f0()*-0.510682);
}

double NNfunction_ss_sLuR::synapse0x3145ba0() {
   return (neuron0x313c430()*-0.129598);
}

double NNfunction_ss_sLuR::synapse0x3145be0() {
   return (neuron0x313c770()*0.281156);
}

double NNfunction_ss_sLuR::synapse0x3145c20() {
   return (neuron0x313cab0()*-0.967288);
}

double NNfunction_ss_sLuR::synapse0x3145c60() {
   return (neuron0x313cdf0()*0.225155);
}

double NNfunction_ss_sLuR::synapse0x3145ca0() {
   return (neuron0x313d130()*-0.209112);
}

double NNfunction_ss_sLuR::synapse0x3145ce0() {
   return (neuron0x313d470()*-0.532002);
}

double NNfunction_ss_sLuR::synapse0x3145770() {
   return (neuron0x313d7b0()*0.104072);
}

double NNfunction_ss_sLuR::synapse0x31457b0() {
   return (neuron0x313dd10()*-0.106489);
}

double NNfunction_ss_sLuR::synapse0x3142540() {
   return (neuron0x313df30()*0.211145);
}

double NNfunction_ss_sLuR::synapse0x3142580() {
   return (neuron0x313e270()*0.0219019);
}

double NNfunction_ss_sLuR::synapse0x31425c0() {
   return (neuron0x313e5b0()*0.17954);
}

double NNfunction_ss_sLuR::synapse0x3142600() {
   return (neuron0x313e8f0()*-0.33497);
}

double NNfunction_ss_sLuR::synapse0x3142640() {
   return (neuron0x313ec30()*0.14215);
}

double NNfunction_ss_sLuR::synapse0x3142680() {
   return (neuron0x313ef70()*0.405148);
}

double NNfunction_ss_sLuR::synapse0x3142a00() {
   return (neuron0x313a3b0()*-0.2141);
}

double NNfunction_ss_sLuR::synapse0x3142a40() {
   return (neuron0x313a6f0()*0.149031);
}

double NNfunction_ss_sLuR::synapse0x3142a80() {
   return (neuron0x313aa30()*-0.0304698);
}

double NNfunction_ss_sLuR::synapse0x3142ac0() {
   return (neuron0x313ad70()*0.0526732);
}

double NNfunction_ss_sLuR::synapse0x3142b00() {
   return (neuron0x313b0b0()*0.0163079);
}

double NNfunction_ss_sLuR::synapse0x3142b40() {
   return (neuron0x313b3f0()*-0.714739);
}

double NNfunction_ss_sLuR::synapse0x3142b80() {
   return (neuron0x313b730()*0.285627);
}

double NNfunction_ss_sLuR::synapse0x3142bc0() {
   return (neuron0x313ba70()*-0.00437115);
}

double NNfunction_ss_sLuR::synapse0x3142c00() {
   return (neuron0x313bdb0()*-0.148259);
}

double NNfunction_ss_sLuR::synapse0x3142c40() {
   return (neuron0x313c0f0()*0.254318);
}

double NNfunction_ss_sLuR::synapse0x3142c80() {
   return (neuron0x313c430()*-0.176544);
}

double NNfunction_ss_sLuR::synapse0x3142cc0() {
   return (neuron0x313c770()*-0.134244);
}

double NNfunction_ss_sLuR::synapse0x3142d00() {
   return (neuron0x313cab0()*-0.264751);
}

double NNfunction_ss_sLuR::synapse0x3146e40() {
   return (neuron0x313cdf0()*-0.11956);
}

double NNfunction_ss_sLuR::synapse0x3146e80() {
   return (neuron0x313d130()*0.743214);
}

double NNfunction_ss_sLuR::synapse0x3146ec0() {
   return (neuron0x313d470()*-0.233914);
}

double NNfunction_ss_sLuR::synapse0x3142850() {
   return (neuron0x313d7b0()*0.204019);
}

double NNfunction_ss_sLuR::synapse0x3142890() {
   return (neuron0x313dd10()*-0.0180391);
}

double NNfunction_ss_sLuR::synapse0x3147010() {
   return (neuron0x313df30()*-0.0668769);
}

double NNfunction_ss_sLuR::synapse0x3147050() {
   return (neuron0x313e270()*-0.0821156);
}

double NNfunction_ss_sLuR::synapse0x3147090() {
   return (neuron0x313e5b0()*0.116089);
}

double NNfunction_ss_sLuR::synapse0x31470d0() {
   return (neuron0x313e8f0()*0.037086);
}

double NNfunction_ss_sLuR::synapse0x3147110() {
   return (neuron0x313ec30()*0.0810708);
}

double NNfunction_ss_sLuR::synapse0x3147150() {
   return (neuron0x313ef70()*-0.112902);
}

double NNfunction_ss_sLuR::synapse0x31474d0() {
   return (neuron0x313a3b0()*0.0119935);
}

double NNfunction_ss_sLuR::synapse0x3147510() {
   return (neuron0x313a6f0()*0.000138477);
}

double NNfunction_ss_sLuR::synapse0x3147550() {
   return (neuron0x313aa30()*0.0324172);
}

double NNfunction_ss_sLuR::synapse0x3147590() {
   return (neuron0x313ad70()*-0.00763495);
}

double NNfunction_ss_sLuR::synapse0x31475d0() {
   return (neuron0x313b0b0()*0.015732);
}

double NNfunction_ss_sLuR::synapse0x3147610() {
   return (neuron0x313b3f0()*0.0247513);
}

double NNfunction_ss_sLuR::synapse0x3147650() {
   return (neuron0x313b730()*-0.000279276);
}

double NNfunction_ss_sLuR::synapse0x3147690() {
   return (neuron0x313ba70()*-0.0129652);
}

double NNfunction_ss_sLuR::synapse0x31476d0() {
   return (neuron0x313bdb0()*-0.0109238);
}

double NNfunction_ss_sLuR::synapse0x3147710() {
   return (neuron0x313c0f0()*0.00146612);
}

double NNfunction_ss_sLuR::synapse0x3147750() {
   return (neuron0x313c430()*0.0072158);
}

double NNfunction_ss_sLuR::synapse0x3147790() {
   return (neuron0x313c770()*0.0318434);
}

double NNfunction_ss_sLuR::synapse0x31477d0() {
   return (neuron0x313cab0()*1.0707);
}

double NNfunction_ss_sLuR::synapse0x3147810() {
   return (neuron0x313cdf0()*-0.0211252);
}

double NNfunction_ss_sLuR::synapse0x3147850() {
   return (neuron0x313d130()*-0.319573);
}

double NNfunction_ss_sLuR::synapse0x3147890() {
   return (neuron0x313d470()*0.0250987);
}

double NNfunction_ss_sLuR::synapse0x3147320() {
   return (neuron0x313d7b0()*-0.00598943);
}

double NNfunction_ss_sLuR::synapse0x3147360() {
   return (neuron0x313dd10()*0.0249241);
}

double NNfunction_ss_sLuR::synapse0x31479e0() {
   return (neuron0x313df30()*0.00536539);
}

double NNfunction_ss_sLuR::synapse0x3147a20() {
   return (neuron0x313e270()*0.00404309);
}

double NNfunction_ss_sLuR::synapse0x3147a60() {
   return (neuron0x313e5b0()*-0.00236775);
}

double NNfunction_ss_sLuR::synapse0x3147aa0() {
   return (neuron0x313e8f0()*-0.00522239);
}

double NNfunction_ss_sLuR::synapse0x3147ae0() {
   return (neuron0x313ec30()*0.0074842);
}

double NNfunction_ss_sLuR::synapse0x3147b20() {
   return (neuron0x313ef70()*0.0109091);
}

double NNfunction_ss_sLuR::synapse0x3147ea0() {
   return (neuron0x313a3b0()*-0.0778443);
}

double NNfunction_ss_sLuR::synapse0x3147ee0() {
   return (neuron0x313a6f0()*-0.00525165);
}

double NNfunction_ss_sLuR::synapse0x3147f20() {
   return (neuron0x313aa30()*-0.924406);
}

double NNfunction_ss_sLuR::synapse0x3147f60() {
   return (neuron0x313ad70()*0.129939);
}

double NNfunction_ss_sLuR::synapse0x3147fa0() {
   return (neuron0x313b0b0()*-0.0362593);
}

double NNfunction_ss_sLuR::synapse0x3147fe0() {
   return (neuron0x313b3f0()*-0.110489);
}

double NNfunction_ss_sLuR::synapse0x3148020() {
   return (neuron0x313b730()*-0.058918);
}

double NNfunction_ss_sLuR::synapse0x3148060() {
   return (neuron0x313ba70()*-0.0661632);
}

double NNfunction_ss_sLuR::synapse0x31480a0() {
   return (neuron0x313bdb0()*0.0093256);
}

double NNfunction_ss_sLuR::synapse0x31480e0() {
   return (neuron0x313c0f0()*0.00423284);
}

double NNfunction_ss_sLuR::synapse0x3148120() {
   return (neuron0x313c430()*-0.0418837);
}

double NNfunction_ss_sLuR::synapse0x3148160() {
   return (neuron0x313c770()*-0.0790255);
}

double NNfunction_ss_sLuR::synapse0x31481a0() {
   return (neuron0x313cab0()*0.303426);
}

double NNfunction_ss_sLuR::synapse0x31481e0() {
   return (neuron0x313cdf0()*-0.0339326);
}

double NNfunction_ss_sLuR::synapse0x3148220() {
   return (neuron0x313d130()*-0.0285173);
}

double NNfunction_ss_sLuR::synapse0x3148260() {
   return (neuron0x313d470()*-0.0222681);
}

double NNfunction_ss_sLuR::synapse0x3147cf0() {
   return (neuron0x313d7b0()*-0.00502727);
}

double NNfunction_ss_sLuR::synapse0x3147d30() {
   return (neuron0x313dd10()*-0.00365649);
}

double NNfunction_ss_sLuR::synapse0x31483b0() {
   return (neuron0x313df30()*0.0267737);
}

double NNfunction_ss_sLuR::synapse0x31483f0() {
   return (neuron0x313e270()*-0.00564292);
}

double NNfunction_ss_sLuR::synapse0x3148430() {
   return (neuron0x313e5b0()*0.046514);
}

double NNfunction_ss_sLuR::synapse0x3148470() {
   return (neuron0x313e8f0()*-0.000364824);
}

double NNfunction_ss_sLuR::synapse0x31484b0() {
   return (neuron0x313ec30()*0.0405859);
}

double NNfunction_ss_sLuR::synapse0x31484f0() {
   return (neuron0x313ef70()*-0.0208774);
}

double NNfunction_ss_sLuR::synapse0x3148870() {
   return (neuron0x313a3b0()*0.368565);
}

double NNfunction_ss_sLuR::synapse0x31488b0() {
   return (neuron0x313a6f0()*-0.0308346);
}

double NNfunction_ss_sLuR::synapse0x31488f0() {
   return (neuron0x313aa30()*0.216741);
}

double NNfunction_ss_sLuR::synapse0x3148930() {
   return (neuron0x313ad70()*-0.35864);
}

double NNfunction_ss_sLuR::synapse0x3148970() {
   return (neuron0x313b0b0()*0.604512);
}

double NNfunction_ss_sLuR::synapse0x31489b0() {
   return (neuron0x313b3f0()*0.0365947);
}

double NNfunction_ss_sLuR::synapse0x31489f0() {
   return (neuron0x313b730()*0.653047);
}

double NNfunction_ss_sLuR::synapse0x3148a30() {
   return (neuron0x313ba70()*-0.0832906);
}

double NNfunction_ss_sLuR::synapse0x3148a70() {
   return (neuron0x313bdb0()*0.051674);
}

double NNfunction_ss_sLuR::synapse0x3148ab0() {
   return (neuron0x313c0f0()*0.0428959);
}

double NNfunction_ss_sLuR::synapse0x3148af0() {
   return (neuron0x313c430()*-0.00307262);
}

double NNfunction_ss_sLuR::synapse0x3148b30() {
   return (neuron0x313c770()*0.0812714);
}

double NNfunction_ss_sLuR::synapse0x3148b70() {
   return (neuron0x313cab0()*-0.303163);
}

double NNfunction_ss_sLuR::synapse0x3148bb0() {
   return (neuron0x313cdf0()*0.64403);
}

double NNfunction_ss_sLuR::synapse0x3148bf0() {
   return (neuron0x313d130()*0.0260274);
}

double NNfunction_ss_sLuR::synapse0x3148c30() {
   return (neuron0x313d470()*0.182965);
}

double NNfunction_ss_sLuR::synapse0x31486c0() {
   return (neuron0x313d7b0()*-0.281885);
}

double NNfunction_ss_sLuR::synapse0x3148700() {
   return (neuron0x313dd10()*-0.390596);
}

double NNfunction_ss_sLuR::synapse0x3148d80() {
   return (neuron0x313df30()*-0.0110959);
}

double NNfunction_ss_sLuR::synapse0x3148dc0() {
   return (neuron0x313e270()*-0.494927);
}

double NNfunction_ss_sLuR::synapse0x3148e00() {
   return (neuron0x313e5b0()*-0.38814);
}

double NNfunction_ss_sLuR::synapse0x3148e40() {
   return (neuron0x313e8f0()*0.091449);
}

double NNfunction_ss_sLuR::synapse0x3148e80() {
   return (neuron0x313ec30()*0.243156);
}

double NNfunction_ss_sLuR::synapse0x3148ec0() {
   return (neuron0x313ef70()*-0.27439);
}

double NNfunction_ss_sLuR::synapse0x3149240() {
   return (neuron0x313a3b0()*-0.416236);
}

double NNfunction_ss_sLuR::synapse0x313a5d0() {
   return (neuron0x313a6f0()*0.517619);
}

double NNfunction_ss_sLuR::synapse0x313a610() {
   return (neuron0x313aa30()*0.0652028);
}

double NNfunction_ss_sLuR::synapse0x313a910() {
   return (neuron0x313ad70()*-0.202038);
}

double NNfunction_ss_sLuR::synapse0x313a950() {
   return (neuron0x313b0b0()*-0.292988);
}

double NNfunction_ss_sLuR::synapse0x313ac50() {
   return (neuron0x313b3f0()*-0.0843031);
}

double NNfunction_ss_sLuR::synapse0x313ac90() {
   return (neuron0x313b730()*-0.290496);
}

double NNfunction_ss_sLuR::synapse0x313af90() {
   return (neuron0x313ba70()*0.0513111);
}

double NNfunction_ss_sLuR::synapse0x313afd0() {
   return (neuron0x313bdb0()*0.431219);
}

double NNfunction_ss_sLuR::synapse0x313b2d0() {
   return (neuron0x313c0f0()*0.189099);
}

double NNfunction_ss_sLuR::synapse0x313b310() {
   return (neuron0x313c430()*0.273069);
}

double NNfunction_ss_sLuR::synapse0x313b610() {
   return (neuron0x313c770()*0.122765);
}

double NNfunction_ss_sLuR::synapse0x313b650() {
   return (neuron0x313cab0()*-0.0386391);
}

double NNfunction_ss_sLuR::synapse0x313b950() {
   return (neuron0x313cdf0()*-0.101575);
}

double NNfunction_ss_sLuR::synapse0x313b990() {
   return (neuron0x313d130()*1.01944);
}

double NNfunction_ss_sLuR::synapse0x313bc90() {
   return (neuron0x313d470()*0.322629);
}

double NNfunction_ss_sLuR::synapse0x313bcd0() {
   return (neuron0x313d7b0()*-0.42691);
}

double NNfunction_ss_sLuR::synapse0x313bfd0() {
   return (neuron0x313dd10()*-0.0766091);
}

double NNfunction_ss_sLuR::synapse0x313c010() {
   return (neuron0x313df30()*-0.0605691);
}

double NNfunction_ss_sLuR::synapse0x313c310() {
   return (neuron0x313e270()*-0.771788);
}

double NNfunction_ss_sLuR::synapse0x313c350() {
   return (neuron0x313e5b0()*0.0833659);
}

double NNfunction_ss_sLuR::synapse0x313c650() {
   return (neuron0x313e8f0()*-0.134291);
}

double NNfunction_ss_sLuR::synapse0x313c690() {
   return (neuron0x313ec30()*0.512662);
}

double NNfunction_ss_sLuR::synapse0x313c990() {
   return (neuron0x313ef70()*0.0889292);
}

double NNfunction_ss_sLuR::synapse0x313c9d0() {
   return (neuron0x313a3b0()*-0.0288505);
}

double NNfunction_ss_sLuR::synapse0x313d690() {
   return (neuron0x313a6f0()*-0.0182668);
}

double NNfunction_ss_sLuR::synapse0x313d6d0() {
   return (neuron0x313aa30()*0.0737656);
}

double NNfunction_ss_sLuR::synapse0x3149090() {
   return (neuron0x313ad70()*-0.0121298);
}

double NNfunction_ss_sLuR::synapse0x31490d0() {
   return (neuron0x313b0b0()*-0.0252812);
}

double NNfunction_ss_sLuR::synapse0x313d9d0() {
   return (neuron0x313b3f0()*0.0187135);
}

double NNfunction_ss_sLuR::synapse0x313da10() {
   return (neuron0x313b730()*-0.0412342);
}

double NNfunction_ss_sLuR::synapse0x2ef5480() {
   return (neuron0x313ba70()*-0.0266912);
}

double NNfunction_ss_sLuR::synapse0x2ef54c0() {
   return (neuron0x313bdb0()*-0.023842);
}

double NNfunction_ss_sLuR::synapse0x313e150() {
   return (neuron0x313c0f0()*0.00683915);
}

double NNfunction_ss_sLuR::synapse0x313e190() {
   return (neuron0x313c430()*0.0529033);
}

double NNfunction_ss_sLuR::synapse0x313e490() {
   return (neuron0x313c770()*0.00141224);
}

double NNfunction_ss_sLuR::synapse0x313e4d0() {
   return (neuron0x313cab0()*-0.0698535);
}

double NNfunction_ss_sLuR::synapse0x313e7d0() {
   return (neuron0x313cdf0()*-0.0116226);
}

double NNfunction_ss_sLuR::synapse0x313e810() {
   return (neuron0x313d130()*1.16221);
}

double NNfunction_ss_sLuR::synapse0x313eb10() {
   return (neuron0x313d470()*0.0331558);
}

double NNfunction_ss_sLuR::synapse0x313eb50() {
   return (neuron0x313d7b0()*0.037497);
}

double NNfunction_ss_sLuR::synapse0x313ee50() {
   return (neuron0x313dd10()*0.0225626);
}

double NNfunction_ss_sLuR::synapse0x313ee90() {
   return (neuron0x313df30()*0.000386161);
}

double NNfunction_ss_sLuR::synapse0x313f190() {
   return (neuron0x313e270()*-0.00887959);
}

double NNfunction_ss_sLuR::synapse0x313f1d0() {
   return (neuron0x313e5b0()*0.00559775);
}

double NNfunction_ss_sLuR::synapse0x313ccd0() {
   return (neuron0x313e8f0()*-0.007928);
}

double NNfunction_ss_sLuR::synapse0x313cd10() {
   return (neuron0x313ec30()*0.0188747);
}

double NNfunction_ss_sLuR::synapse0x314afb0() {
   return (neuron0x313ef70()*0.0247972);
}

double NNfunction_ss_sLuR::synapse0x314b330() {
   return (neuron0x313a3b0()*-0.128737);
}

double NNfunction_ss_sLuR::synapse0x314b370() {
   return (neuron0x313a6f0()*-0.234412);
}

double NNfunction_ss_sLuR::synapse0x314b3b0() {
   return (neuron0x313aa30()*-0.188496);
}

double NNfunction_ss_sLuR::synapse0x314b3f0() {
   return (neuron0x313ad70()*1.01907);
}

double NNfunction_ss_sLuR::synapse0x314b430() {
   return (neuron0x313b0b0()*-0.275677);
}

double NNfunction_ss_sLuR::synapse0x314b470() {
   return (neuron0x313b3f0()*0.104604);
}

double NNfunction_ss_sLuR::synapse0x314b4b0() {
   return (neuron0x313b730()*-0.0671435);
}

double NNfunction_ss_sLuR::synapse0x314b4f0() {
   return (neuron0x313ba70()*0.105051);
}

double NNfunction_ss_sLuR::synapse0x314b530() {
   return (neuron0x313bdb0()*0.104159);
}

double NNfunction_ss_sLuR::synapse0x314b570() {
   return (neuron0x313c0f0()*-0.170766);
}

double NNfunction_ss_sLuR::synapse0x314b5b0() {
   return (neuron0x313c430()*-0.266199);
}

double NNfunction_ss_sLuR::synapse0x314b5f0() {
   return (neuron0x313c770()*0.136487);
}

double NNfunction_ss_sLuR::synapse0x314b630() {
   return (neuron0x313cab0()*0.126264);
}

double NNfunction_ss_sLuR::synapse0x314b670() {
   return (neuron0x313cdf0()*0.0778243);
}

double NNfunction_ss_sLuR::synapse0x314b6b0() {
   return (neuron0x313d130()*0.351788);
}

double NNfunction_ss_sLuR::synapse0x314b6f0() {
   return (neuron0x313d470()*-0.0692746);
}

double NNfunction_ss_sLuR::synapse0x314b180() {
   return (neuron0x313d7b0()*-0.0621225);
}

double NNfunction_ss_sLuR::synapse0x314b1c0() {
   return (neuron0x313dd10()*0.000570765);
}

double NNfunction_ss_sLuR::synapse0x314b840() {
   return (neuron0x313df30()*0.200267);
}

double NNfunction_ss_sLuR::synapse0x314b880() {
   return (neuron0x313e270()*-0.325074);
}

double NNfunction_ss_sLuR::synapse0x314b8c0() {
   return (neuron0x313e5b0()*-0.0410405);
}

double NNfunction_ss_sLuR::synapse0x314b900() {
   return (neuron0x313e8f0()*0.0561342);
}

double NNfunction_ss_sLuR::synapse0x314b940() {
   return (neuron0x313ec30()*0.184866);
}

double NNfunction_ss_sLuR::synapse0x314b980() {
   return (neuron0x313ef70()*-0.154733);
}

double NNfunction_ss_sLuR::synapse0x314bd00() {
   return (neuron0x313a3b0()*0.128203);
}

double NNfunction_ss_sLuR::synapse0x314bd40() {
   return (neuron0x313a6f0()*0.0989747);
}

double NNfunction_ss_sLuR::synapse0x314bd80() {
   return (neuron0x313aa30()*-0.4198);
}

double NNfunction_ss_sLuR::synapse0x314bdc0() {
   return (neuron0x313ad70()*0.682142);
}

double NNfunction_ss_sLuR::synapse0x314be00() {
   return (neuron0x313b0b0()*0.107141);
}

double NNfunction_ss_sLuR::synapse0x314be40() {
   return (neuron0x313b3f0()*-0.245253);
}

double NNfunction_ss_sLuR::synapse0x314be80() {
   return (neuron0x313b730()*0.948093);
}

double NNfunction_ss_sLuR::synapse0x314bec0() {
   return (neuron0x313ba70()*-0.230691);
}

double NNfunction_ss_sLuR::synapse0x314bf00() {
   return (neuron0x313bdb0()*-0.0191631);
}

double NNfunction_ss_sLuR::synapse0x314bf40() {
   return (neuron0x313c0f0()*0.424737);
}

double NNfunction_ss_sLuR::synapse0x314bf80() {
   return (neuron0x313c430()*-0.163393);
}

double NNfunction_ss_sLuR::synapse0x314bfc0() {
   return (neuron0x313c770()*1.08818);
}

double NNfunction_ss_sLuR::synapse0x314c000() {
   return (neuron0x313cab0()*0.675549);
}

double NNfunction_ss_sLuR::synapse0x314c040() {
   return (neuron0x313cdf0()*0.529842);
}

double NNfunction_ss_sLuR::synapse0x314c080() {
   return (neuron0x313d130()*-0.25709);
}

double NNfunction_ss_sLuR::synapse0x314c0c0() {
   return (neuron0x313d470()*-0.00753406);
}

double NNfunction_ss_sLuR::synapse0x314bb50() {
   return (neuron0x313d7b0()*0.314823);
}

double NNfunction_ss_sLuR::synapse0x314bb90() {
   return (neuron0x313dd10()*-0.272736);
}

double NNfunction_ss_sLuR::synapse0x314c210() {
   return (neuron0x313df30()*-0.0540933);
}

double NNfunction_ss_sLuR::synapse0x314c250() {
   return (neuron0x313e270()*0.49622);
}

double NNfunction_ss_sLuR::synapse0x314c290() {
   return (neuron0x313e5b0()*0.202446);
}

double NNfunction_ss_sLuR::synapse0x314c2d0() {
   return (neuron0x313e8f0()*0.168391);
}

double NNfunction_ss_sLuR::synapse0x314c310() {
   return (neuron0x313ec30()*-0.253514);
}

double NNfunction_ss_sLuR::synapse0x314c350() {
   return (neuron0x313ef70()*-0.36745);
}

double NNfunction_ss_sLuR::synapse0x314c6d0() {
   return (neuron0x313a3b0()*0.365218);
}

double NNfunction_ss_sLuR::synapse0x314c710() {
   return (neuron0x313a6f0()*-0.728093);
}

double NNfunction_ss_sLuR::synapse0x314c750() {
   return (neuron0x313aa30()*-1.67729);
}

double NNfunction_ss_sLuR::synapse0x314c790() {
   return (neuron0x313ad70()*-0.750166);
}

double NNfunction_ss_sLuR::synapse0x314c7d0() {
   return (neuron0x313b0b0()*-0.435031);
}

double NNfunction_ss_sLuR::synapse0x314c810() {
   return (neuron0x313b3f0()*0.196099);
}

double NNfunction_ss_sLuR::synapse0x314c850() {
   return (neuron0x313b730()*0.111178);
}

double NNfunction_ss_sLuR::synapse0x314c890() {
   return (neuron0x313ba70()*0.103116);
}

double NNfunction_ss_sLuR::synapse0x314c8d0() {
   return (neuron0x313bdb0()*0.498876);
}

double NNfunction_ss_sLuR::synapse0x314c910() {
   return (neuron0x313c0f0()*1.13529);
}

double NNfunction_ss_sLuR::synapse0x314c950() {
   return (neuron0x313c430()*0.78977);
}

double NNfunction_ss_sLuR::synapse0x314c990() {
   return (neuron0x313c770()*0.615436);
}

double NNfunction_ss_sLuR::synapse0x314c9d0() {
   return (neuron0x313cab0()*-0.760142);
}

double NNfunction_ss_sLuR::synapse0x314ca10() {
   return (neuron0x313cdf0()*1.60407);
}

double NNfunction_ss_sLuR::synapse0x314ca50() {
   return (neuron0x313d130()*-1.25662);
}

double NNfunction_ss_sLuR::synapse0x314ca90() {
   return (neuron0x313d470()*-0.439177);
}

double NNfunction_ss_sLuR::synapse0x314c520() {
   return (neuron0x313d7b0()*-0.800819);
}

double NNfunction_ss_sLuR::synapse0x314c560() {
   return (neuron0x313dd10()*0.216316);
}

double NNfunction_ss_sLuR::synapse0x314cbe0() {
   return (neuron0x313df30()*-0.307813);
}

double NNfunction_ss_sLuR::synapse0x314cc20() {
   return (neuron0x313e270()*0.319595);
}

double NNfunction_ss_sLuR::synapse0x314cc60() {
   return (neuron0x313e5b0()*0.380677);
}

double NNfunction_ss_sLuR::synapse0x314cca0() {
   return (neuron0x313e8f0()*-0.560665);
}

double NNfunction_ss_sLuR::synapse0x314cce0() {
   return (neuron0x313ec30()*-0.491994);
}

double NNfunction_ss_sLuR::synapse0x314cd20() {
   return (neuron0x313ef70()*-0.214631);
}

double NNfunction_ss_sLuR::synapse0x314d0a0() {
   return (neuron0x313a3b0()*0.0925273);
}

double NNfunction_ss_sLuR::synapse0x314d0e0() {
   return (neuron0x313a6f0()*0.704882);
}

double NNfunction_ss_sLuR::synapse0x314d120() {
   return (neuron0x313aa30()*0.900927);
}

double NNfunction_ss_sLuR::synapse0x314d160() {
   return (neuron0x313ad70()*1.0093);
}

double NNfunction_ss_sLuR::synapse0x314d1a0() {
   return (neuron0x313b0b0()*0.76754);
}

double NNfunction_ss_sLuR::synapse0x314d1e0() {
   return (neuron0x313b3f0()*-1.16373);
}

double NNfunction_ss_sLuR::synapse0x314d220() {
   return (neuron0x313b730()*0.608671);
}

double NNfunction_ss_sLuR::synapse0x314d260() {
   return (neuron0x313ba70()*-1.08063);
}

double NNfunction_ss_sLuR::synapse0x314d2a0() {
   return (neuron0x313bdb0()*0.634348);
}

double NNfunction_ss_sLuR::synapse0x314d2e0() {
   return (neuron0x313c0f0()*-1.08792);
}

double NNfunction_ss_sLuR::synapse0x314d320() {
   return (neuron0x313c430()*-0.055932);
}

double NNfunction_ss_sLuR::synapse0x314d360() {
   return (neuron0x313c770()*0.857891);
}

double NNfunction_ss_sLuR::synapse0x314d3a0() {
   return (neuron0x313cab0()*-0.579133);
}

double NNfunction_ss_sLuR::synapse0x314d3e0() {
   return (neuron0x313cdf0()*0.387549);
}

double NNfunction_ss_sLuR::synapse0x314d420() {
   return (neuron0x313d130()*0.105385);
}

double NNfunction_ss_sLuR::synapse0x314d460() {
   return (neuron0x313d470()*-0.63149);
}

double NNfunction_ss_sLuR::synapse0x314cef0() {
   return (neuron0x313d7b0()*0.521283);
}

double NNfunction_ss_sLuR::synapse0x314cf30() {
   return (neuron0x313dd10()*0.369978);
}

double NNfunction_ss_sLuR::synapse0x314d5b0() {
   return (neuron0x313df30()*-0.811485);
}

double NNfunction_ss_sLuR::synapse0x314d5f0() {
   return (neuron0x313e270()*-0.923953);
}

double NNfunction_ss_sLuR::synapse0x314d630() {
   return (neuron0x313e5b0()*0.270387);
}

double NNfunction_ss_sLuR::synapse0x314d670() {
   return (neuron0x313e8f0()*-0.127161);
}

double NNfunction_ss_sLuR::synapse0x314d6b0() {
   return (neuron0x313ec30()*-0.248948);
}

double NNfunction_ss_sLuR::synapse0x314d6f0() {
   return (neuron0x313ef70()*0.0479);
}

double NNfunction_ss_sLuR::synapse0x314da70() {
   return (neuron0x313a3b0()*0.00458811);
}

double NNfunction_ss_sLuR::synapse0x314dab0() {
   return (neuron0x313a6f0()*0.605133);
}

double NNfunction_ss_sLuR::synapse0x314daf0() {
   return (neuron0x313aa30()*-0.924754);
}

double NNfunction_ss_sLuR::synapse0x314db30() {
   return (neuron0x313ad70()*0.581505);
}

double NNfunction_ss_sLuR::synapse0x314db70() {
   return (neuron0x313b0b0()*0.706092);
}

double NNfunction_ss_sLuR::synapse0x314dbb0() {
   return (neuron0x313b3f0()*0.247461);
}

double NNfunction_ss_sLuR::synapse0x314dbf0() {
   return (neuron0x313b730()*-0.625684);
}

double NNfunction_ss_sLuR::synapse0x314dc30() {
   return (neuron0x313ba70()*-0.458142);
}

double NNfunction_ss_sLuR::synapse0x314dc70() {
   return (neuron0x313bdb0()*-0.347667);
}

double NNfunction_ss_sLuR::synapse0x3145e30() {
   return (neuron0x313c0f0()*0.563761);
}

double NNfunction_ss_sLuR::synapse0x3145e70() {
   return (neuron0x313c430()*1.02652);
}

double NNfunction_ss_sLuR::synapse0x3145eb0() {
   return (neuron0x313c770()*-0.185844);
}

double NNfunction_ss_sLuR::synapse0x3145ef0() {
   return (neuron0x313cab0()*-0.359318);
}

double NNfunction_ss_sLuR::synapse0x3145f30() {
   return (neuron0x313cdf0()*-0.807111);
}

double NNfunction_ss_sLuR::synapse0x3145f70() {
   return (neuron0x313d130()*-0.200143);
}

double NNfunction_ss_sLuR::synapse0x3145fb0() {
   return (neuron0x313d470()*0.407043);
}

double NNfunction_ss_sLuR::synapse0x314d8c0() {
   return (neuron0x313d7b0()*0.0172884);
}

double NNfunction_ss_sLuR::synapse0x314d900() {
   return (neuron0x313dd10()*0.492222);
}

double NNfunction_ss_sLuR::synapse0x3146100() {
   return (neuron0x313df30()*1.68423);
}

double NNfunction_ss_sLuR::synapse0x3146140() {
   return (neuron0x313e270()*0.109318);
}

double NNfunction_ss_sLuR::synapse0x3146180() {
   return (neuron0x313e5b0()*-0.394814);
}

double NNfunction_ss_sLuR::synapse0x31461c0() {
   return (neuron0x313e8f0()*0.0166683);
}

double NNfunction_ss_sLuR::synapse0x3146200() {
   return (neuron0x313ec30()*-0.0620092);
}

double NNfunction_ss_sLuR::synapse0x3146240() {
   return (neuron0x313ef70()*1.06844);
}

double NNfunction_ss_sLuR::synapse0x31465c0() {
   return (neuron0x313a3b0()*-0.0126615);
}

double NNfunction_ss_sLuR::synapse0x3146600() {
   return (neuron0x313a6f0()*0.319529);
}

double NNfunction_ss_sLuR::synapse0x3146640() {
   return (neuron0x313aa30()*0.0930312);
}

double NNfunction_ss_sLuR::synapse0x3146680() {
   return (neuron0x313ad70()*0.889209);
}

double NNfunction_ss_sLuR::synapse0x31466c0() {
   return (neuron0x313b0b0()*-0.14078);
}

double NNfunction_ss_sLuR::synapse0x3146700() {
   return (neuron0x313b3f0()*0.0529841);
}

double NNfunction_ss_sLuR::synapse0x3146740() {
   return (neuron0x313b730()*0.012078);
}

double NNfunction_ss_sLuR::synapse0x3146780() {
   return (neuron0x313ba70()*-0.0302075);
}

double NNfunction_ss_sLuR::synapse0x31467c0() {
   return (neuron0x313bdb0()*0.0861651);
}

double NNfunction_ss_sLuR::synapse0x3146800() {
   return (neuron0x313c0f0()*0.0550675);
}

double NNfunction_ss_sLuR::synapse0x3146840() {
   return (neuron0x313c430()*-0.0295254);
}

double NNfunction_ss_sLuR::synapse0x3146880() {
   return (neuron0x313c770()*-0.0303185);
}

double NNfunction_ss_sLuR::synapse0x31468c0() {
   return (neuron0x313cab0()*0.435733);
}

double NNfunction_ss_sLuR::synapse0x3146900() {
   return (neuron0x313cdf0()*-0.0344867);
}

double NNfunction_ss_sLuR::synapse0x3146940() {
   return (neuron0x313d130()*-0.18315);
}

double NNfunction_ss_sLuR::synapse0x3146980() {
   return (neuron0x313d470()*-0.0498816);
}

double NNfunction_ss_sLuR::synapse0x3146410() {
   return (neuron0x313d7b0()*-0.0367573);
}

double NNfunction_ss_sLuR::synapse0x3146450() {
   return (neuron0x313dd10()*0.0908111);
}

double NNfunction_ss_sLuR::synapse0x3146ad0() {
   return (neuron0x313df30()*0.0875043);
}

double NNfunction_ss_sLuR::synapse0x3146b10() {
   return (neuron0x313e270()*0.0628008);
}

double NNfunction_ss_sLuR::synapse0x3146b50() {
   return (neuron0x313e5b0()*0.0382866);
}

double NNfunction_ss_sLuR::synapse0x3146b90() {
   return (neuron0x313e8f0()*-0.0300474);
}

double NNfunction_ss_sLuR::synapse0x3146bd0() {
   return (neuron0x313ec30()*-0.0350081);
}

double NNfunction_ss_sLuR::synapse0x3146c10() {
   return (neuron0x313ef70()*0.0439536);
}

double NNfunction_ss_sLuR::synapse0x3146de0() {
   return (neuron0x313a3b0()*-0.0734636);
}

double NNfunction_ss_sLuR::synapse0x314fe70() {
   return (neuron0x313a6f0()*0.72579);
}

double NNfunction_ss_sLuR::synapse0x314feb0() {
   return (neuron0x313aa30()*0.668428);
}

double NNfunction_ss_sLuR::synapse0x314fef0() {
   return (neuron0x313ad70()*-2.65239);
}

double NNfunction_ss_sLuR::synapse0x314ff30() {
   return (neuron0x313b0b0()*0.505946);
}

double NNfunction_ss_sLuR::synapse0x314ff70() {
   return (neuron0x313b3f0()*-0.235338);
}

double NNfunction_ss_sLuR::synapse0x314ffb0() {
   return (neuron0x313b730()*0.75629);
}

double NNfunction_ss_sLuR::synapse0x314fff0() {
   return (neuron0x313ba70()*0.00372662);
}

double NNfunction_ss_sLuR::synapse0x3150030() {
   return (neuron0x313bdb0()*1.39975);
}

double NNfunction_ss_sLuR::synapse0x3150070() {
   return (neuron0x313c0f0()*1.15407);
}

double NNfunction_ss_sLuR::synapse0x31500b0() {
   return (neuron0x313c430()*0.667485);
}

double NNfunction_ss_sLuR::synapse0x31500f0() {
   return (neuron0x313c770()*1.11486);
}

double NNfunction_ss_sLuR::synapse0x3150130() {
   return (neuron0x313cab0()*-0.690515);
}

double NNfunction_ss_sLuR::synapse0x3150170() {
   return (neuron0x313cdf0()*-0.855794);
}

double NNfunction_ss_sLuR::synapse0x31501b0() {
   return (neuron0x313d130()*-0.381821);
}

double NNfunction_ss_sLuR::synapse0x31501f0() {
   return (neuron0x313d470()*-0.402176);
}

double NNfunction_ss_sLuR::synapse0x314fcc0() {
   return (neuron0x313d7b0()*-1.05056);
}

double NNfunction_ss_sLuR::synapse0x314fd00() {
   return (neuron0x313dd10()*0.437906);
}

double NNfunction_ss_sLuR::synapse0x3150340() {
   return (neuron0x313df30()*-0.448943);
}

double NNfunction_ss_sLuR::synapse0x3150380() {
   return (neuron0x313e270()*-0.180854);
}

double NNfunction_ss_sLuR::synapse0x31503c0() {
   return (neuron0x313e5b0()*1.22334);
}

double NNfunction_ss_sLuR::synapse0x3150400() {
   return (neuron0x313e8f0()*0.27175);
}

double NNfunction_ss_sLuR::synapse0x3150440() {
   return (neuron0x313ec30()*-1.15909);
}

double NNfunction_ss_sLuR::synapse0x3150480() {
   return (neuron0x313ef70()*-0.588203);
}

double NNfunction_ss_sLuR::synapse0x3150800() {
   return (neuron0x313a3b0()*-0.0711612);
}

double NNfunction_ss_sLuR::synapse0x3150840() {
   return (neuron0x313a6f0()*0.469814);
}

double NNfunction_ss_sLuR::synapse0x3150880() {
   return (neuron0x313aa30()*-0.26497);
}

double NNfunction_ss_sLuR::synapse0x31508c0() {
   return (neuron0x313ad70()*0.0244014);
}

double NNfunction_ss_sLuR::synapse0x3150900() {
   return (neuron0x313b0b0()*0.057423);
}

double NNfunction_ss_sLuR::synapse0x3150940() {
   return (neuron0x313b3f0()*-0.0393525);
}

double NNfunction_ss_sLuR::synapse0x3150980() {
   return (neuron0x313b730()*0.0530625);
}

double NNfunction_ss_sLuR::synapse0x31509c0() {
   return (neuron0x313ba70()*0.00338808);
}

double NNfunction_ss_sLuR::synapse0x3150a00() {
   return (neuron0x313bdb0()*-0.0881792);
}

double NNfunction_ss_sLuR::synapse0x3150a40() {
   return (neuron0x313c0f0()*0.0565995);
}

double NNfunction_ss_sLuR::synapse0x3150a80() {
   return (neuron0x313c430()*0.140566);
}

double NNfunction_ss_sLuR::synapse0x3150ac0() {
   return (neuron0x313c770()*-0.716442);
}

double NNfunction_ss_sLuR::synapse0x3150b00() {
   return (neuron0x313cab0()*-0.128752);
}

double NNfunction_ss_sLuR::synapse0x3150b40() {
   return (neuron0x313cdf0()*0.295306);
}

double NNfunction_ss_sLuR::synapse0x3150b80() {
   return (neuron0x313d130()*0.454979);
}

double NNfunction_ss_sLuR::synapse0x3150bc0() {
   return (neuron0x313d470()*-0.238585);
}

double NNfunction_ss_sLuR::synapse0x3150650() {
   return (neuron0x313d7b0()*0.237677);
}

double NNfunction_ss_sLuR::synapse0x3150690() {
   return (neuron0x313dd10()*-0.42611);
}

double NNfunction_ss_sLuR::synapse0x3150d10() {
   return (neuron0x313df30()*-0.250665);
}

double NNfunction_ss_sLuR::synapse0x3150d50() {
   return (neuron0x313e270()*-0.0242046);
}

double NNfunction_ss_sLuR::synapse0x3150d90() {
   return (neuron0x313e5b0()*-0.0537376);
}

double NNfunction_ss_sLuR::synapse0x3150dd0() {
   return (neuron0x313e8f0()*0.0699221);
}

double NNfunction_ss_sLuR::synapse0x3150e10() {
   return (neuron0x313ec30()*0.101273);
}

double NNfunction_ss_sLuR::synapse0x3150e50() {
   return (neuron0x313ef70()*-0.0704786);
}

double NNfunction_ss_sLuR::synapse0x31511d0() {
   return (neuron0x313a3b0()*0.0139535);
}

double NNfunction_ss_sLuR::synapse0x3151210() {
   return (neuron0x313a6f0()*0.101425);
}

double NNfunction_ss_sLuR::synapse0x3151250() {
   return (neuron0x313aa30()*0.0636806);
}

double NNfunction_ss_sLuR::synapse0x3151290() {
   return (neuron0x313ad70()*1.60562);
}

double NNfunction_ss_sLuR::synapse0x31512d0() {
   return (neuron0x313b0b0()*-0.0969584);
}

double NNfunction_ss_sLuR::synapse0x3151310() {
   return (neuron0x313b3f0()*-0.249962);
}

double NNfunction_ss_sLuR::synapse0x3151350() {
   return (neuron0x313b730()*0.0554436);
}

double NNfunction_ss_sLuR::synapse0x3151390() {
   return (neuron0x313ba70()*-0.0949822);
}

double NNfunction_ss_sLuR::synapse0x31513d0() {
   return (neuron0x313bdb0()*-0.119257);
}

double NNfunction_ss_sLuR::synapse0x3151410() {
   return (neuron0x313c0f0()*-0.0837415);
}

double NNfunction_ss_sLuR::synapse0x3151450() {
   return (neuron0x313c430()*-0.17788);
}

double NNfunction_ss_sLuR::synapse0x3151490() {
   return (neuron0x313c770()*0.0879354);
}

double NNfunction_ss_sLuR::synapse0x31514d0() {
   return (neuron0x313cab0()*-0.688379);
}

double NNfunction_ss_sLuR::synapse0x3151510() {
   return (neuron0x313cdf0()*0.0870617);
}

double NNfunction_ss_sLuR::synapse0x3151550() {
   return (neuron0x313d130()*-0.629413);
}

double NNfunction_ss_sLuR::synapse0x3151590() {
   return (neuron0x313d470()*-0.0868172);
}

double NNfunction_ss_sLuR::synapse0x3151020() {
   return (neuron0x313d7b0()*0.0551924);
}

double NNfunction_ss_sLuR::synapse0x3151060() {
   return (neuron0x313dd10()*-0.0961624);
}

double NNfunction_ss_sLuR::synapse0x31516e0() {
   return (neuron0x313df30()*-0.0272613);
}

double NNfunction_ss_sLuR::synapse0x3151720() {
   return (neuron0x313e270()*-0.0284239);
}

double NNfunction_ss_sLuR::synapse0x3151760() {
   return (neuron0x313e5b0()*0.0605342);
}

double NNfunction_ss_sLuR::synapse0x31517a0() {
   return (neuron0x313e8f0()*-0.0331026);
}

double NNfunction_ss_sLuR::synapse0x31517e0() {
   return (neuron0x313ec30()*-0.0644687);
}

double NNfunction_ss_sLuR::synapse0x3151820() {
   return (neuron0x313ef70()*0.00607597);
}

double NNfunction_ss_sLuR::synapse0x3151ba0() {
   return (neuron0x313a3b0()*0.0342332);
}

double NNfunction_ss_sLuR::synapse0x3151be0() {
   return (neuron0x313a6f0()*0.307521);
}

double NNfunction_ss_sLuR::synapse0x3151c20() {
   return (neuron0x313aa30()*-0.0564065);
}

double NNfunction_ss_sLuR::synapse0x3151c60() {
   return (neuron0x313ad70()*-0.90083);
}

double NNfunction_ss_sLuR::synapse0x3151ca0() {
   return (neuron0x313b0b0()*-0.088832);
}

double NNfunction_ss_sLuR::synapse0x3151ce0() {
   return (neuron0x313b3f0()*-0.0889528);
}

double NNfunction_ss_sLuR::synapse0x3151d20() {
   return (neuron0x313b730()*-0.164362);
}

double NNfunction_ss_sLuR::synapse0x3151d60() {
   return (neuron0x313ba70()*-0.291037);
}

double NNfunction_ss_sLuR::synapse0x3151da0() {
   return (neuron0x313bdb0()*-0.0881034);
}

double NNfunction_ss_sLuR::synapse0x3151de0() {
   return (neuron0x313c0f0()*0.372073);
}

double NNfunction_ss_sLuR::synapse0x3151e20() {
   return (neuron0x313c430()*-0.421953);
}

double NNfunction_ss_sLuR::synapse0x3151e60() {
   return (neuron0x313c770()*0.0714477);
}

double NNfunction_ss_sLuR::synapse0x3151ea0() {
   return (neuron0x313cab0()*-0.244925);
}

double NNfunction_ss_sLuR::synapse0x3151ee0() {
   return (neuron0x313cdf0()*0.035202);
}

double NNfunction_ss_sLuR::synapse0x3151f20() {
   return (neuron0x313d130()*0.0449872);
}

double NNfunction_ss_sLuR::synapse0x3151f60() {
   return (neuron0x313d470()*-0.405929);
}

double NNfunction_ss_sLuR::synapse0x31519f0() {
   return (neuron0x313d7b0()*0.374809);
}

double NNfunction_ss_sLuR::synapse0x3151a30() {
   return (neuron0x313dd10()*-0.0329658);
}

double NNfunction_ss_sLuR::synapse0x31520b0() {
   return (neuron0x313df30()*-0.0368245);
}

double NNfunction_ss_sLuR::synapse0x31520f0() {
   return (neuron0x313e270()*-0.071348);
}

double NNfunction_ss_sLuR::synapse0x3152130() {
   return (neuron0x313e5b0()*-0.0309211);
}

double NNfunction_ss_sLuR::synapse0x3152170() {
   return (neuron0x313e8f0()*-0.152523);
}

double NNfunction_ss_sLuR::synapse0x31521b0() {
   return (neuron0x313ec30()*-0.220727);
}

double NNfunction_ss_sLuR::synapse0x31521f0() {
   return (neuron0x313ef70()*-0.078604);
}

double NNfunction_ss_sLuR::synapse0x3152570() {
   return (neuron0x313a3b0()*-0.0553505);
}

double NNfunction_ss_sLuR::synapse0x31525b0() {
   return (neuron0x313a6f0()*0.952555);
}

double NNfunction_ss_sLuR::synapse0x31525f0() {
   return (neuron0x313aa30()*0.533788);
}

double NNfunction_ss_sLuR::synapse0x3152630() {
   return (neuron0x313ad70()*-3.19482);
}

double NNfunction_ss_sLuR::synapse0x3152670() {
   return (neuron0x313b0b0()*0.566315);
}

double NNfunction_ss_sLuR::synapse0x31526b0() {
   return (neuron0x313b3f0()*-0.358459);
}

double NNfunction_ss_sLuR::synapse0x31526f0() {
   return (neuron0x313b730()*0.908157);
}

double NNfunction_ss_sLuR::synapse0x3152730() {
   return (neuron0x313ba70()*0.00445778);
}

double NNfunction_ss_sLuR::synapse0x3152770() {
   return (neuron0x313bdb0()*1.845);
}

double NNfunction_ss_sLuR::synapse0x31527b0() {
   return (neuron0x313c0f0()*1.48247);
}

double NNfunction_ss_sLuR::synapse0x31527f0() {
   return (neuron0x313c430()*0.748625);
}

double NNfunction_ss_sLuR::synapse0x3152830() {
   return (neuron0x313c770()*1.37961);
}

double NNfunction_ss_sLuR::synapse0x3152870() {
   return (neuron0x313cab0()*-0.887499);
}

double NNfunction_ss_sLuR::synapse0x31528b0() {
   return (neuron0x313cdf0()*-1.1222);
}

double NNfunction_ss_sLuR::synapse0x31528f0() {
   return (neuron0x313d130()*-0.529986);
}

double NNfunction_ss_sLuR::synapse0x3152930() {
   return (neuron0x313d470()*-0.57537);
}

double NNfunction_ss_sLuR::synapse0x31523c0() {
   return (neuron0x313d7b0()*-1.47073);
}

double NNfunction_ss_sLuR::synapse0x3152400() {
   return (neuron0x313dd10()*0.558347);
}

double NNfunction_ss_sLuR::synapse0x3152a80() {
   return (neuron0x313df30()*-0.507034);
}

double NNfunction_ss_sLuR::synapse0x3152ac0() {
   return (neuron0x313e270()*-0.296701);
}

double NNfunction_ss_sLuR::synapse0x3152b00() {
   return (neuron0x313e5b0()*1.54226);
}

double NNfunction_ss_sLuR::synapse0x3152b40() {
   return (neuron0x313e8f0()*0.378039);
}

double NNfunction_ss_sLuR::synapse0x3152b80() {
   return (neuron0x313ec30()*-1.41614);
}

double NNfunction_ss_sLuR::synapse0x3152bc0() {
   return (neuron0x313ef70()*-0.672061);
}

double NNfunction_ss_sLuR::synapse0x3152f40() {
   return (neuron0x313a3b0()*-0.054506);
}

double NNfunction_ss_sLuR::synapse0x3152f80() {
   return (neuron0x313a6f0()*-0.487727);
}

double NNfunction_ss_sLuR::synapse0x3152fc0() {
   return (neuron0x313aa30()*0.333117);
}

double NNfunction_ss_sLuR::synapse0x3153000() {
   return (neuron0x313ad70()*0.223792);
}

double NNfunction_ss_sLuR::synapse0x3153040() {
   return (neuron0x313b0b0()*-0.204042);
}

double NNfunction_ss_sLuR::synapse0x3153080() {
   return (neuron0x313b3f0()*0.278817);
}

double NNfunction_ss_sLuR::synapse0x31530c0() {
   return (neuron0x313b730()*-0.228954);
}

double NNfunction_ss_sLuR::synapse0x3153100() {
   return (neuron0x313ba70()*0.712719);
}

double NNfunction_ss_sLuR::synapse0x3153140() {
   return (neuron0x313bdb0()*0.266832);
}

double NNfunction_ss_sLuR::synapse0x3153180() {
   return (neuron0x313c0f0()*0.163689);
}

double NNfunction_ss_sLuR::synapse0x31531c0() {
   return (neuron0x313c430()*0.0596952);
}

double NNfunction_ss_sLuR::synapse0x3153200() {
   return (neuron0x313c770()*0.0410041);
}

double NNfunction_ss_sLuR::synapse0x3153240() {
   return (neuron0x313cab0()*0.375267);
}

double NNfunction_ss_sLuR::synapse0x3153280() {
   return (neuron0x313cdf0()*-0.23823);
}

double NNfunction_ss_sLuR::synapse0x31532c0() {
   return (neuron0x313d130()*-0.25471);
}

double NNfunction_ss_sLuR::synapse0x3153300() {
   return (neuron0x313d470()*-0.121816);
}

double NNfunction_ss_sLuR::synapse0x3152d90() {
   return (neuron0x313d7b0()*-0.286235);
}

double NNfunction_ss_sLuR::synapse0x3152dd0() {
   return (neuron0x313dd10()*-0.128271);
}

double NNfunction_ss_sLuR::synapse0x3153450() {
   return (neuron0x313df30()*0.196217);
}

double NNfunction_ss_sLuR::synapse0x3153490() {
   return (neuron0x313e270()*-0.165311);
}

double NNfunction_ss_sLuR::synapse0x31534d0() {
   return (neuron0x313e5b0()*-0.102454);
}

double NNfunction_ss_sLuR::synapse0x3153510() {
   return (neuron0x313e8f0()*-0.287538);
}

double NNfunction_ss_sLuR::synapse0x3153550() {
   return (neuron0x313ec30()*-0.118729);
}

double NNfunction_ss_sLuR::synapse0x3153590() {
   return (neuron0x313ef70()*-0.287735);
}

double NNfunction_ss_sLuR::synapse0x3153910() {
   return (neuron0x313a3b0()*-0.0103784);
}

double NNfunction_ss_sLuR::synapse0x3153950() {
   return (neuron0x313a6f0()*0.0898738);
}

double NNfunction_ss_sLuR::synapse0x3153990() {
   return (neuron0x313aa30()*0.0299928);
}

double NNfunction_ss_sLuR::synapse0x31539d0() {
   return (neuron0x313ad70()*-0.493955);
}

double NNfunction_ss_sLuR::synapse0x3153a10() {
   return (neuron0x313b0b0()*0.234971);
}

double NNfunction_ss_sLuR::synapse0x3153a50() {
   return (neuron0x313b3f0()*0.525152);
}

double NNfunction_ss_sLuR::synapse0x3153a90() {
   return (neuron0x313b730()*0.126144);
}

double NNfunction_ss_sLuR::synapse0x3153ad0() {
   return (neuron0x313ba70()*0.153173);
}

double NNfunction_ss_sLuR::synapse0x3153b10() {
   return (neuron0x313bdb0()*0.368671);
}

double NNfunction_ss_sLuR::synapse0x3153b50() {
   return (neuron0x313c0f0()*0.116447);
}

double NNfunction_ss_sLuR::synapse0x3153b90() {
   return (neuron0x313c430()*0.357247);
}

double NNfunction_ss_sLuR::synapse0x3153bd0() {
   return (neuron0x313c770()*0.147913);
}

double NNfunction_ss_sLuR::synapse0x3153c10() {
   return (neuron0x313cab0()*0.674088);
}

double NNfunction_ss_sLuR::synapse0x3153c50() {
   return (neuron0x313cdf0()*0.113569);
}

double NNfunction_ss_sLuR::synapse0x3153c90() {
   return (neuron0x313d130()*0.241878);
}

double NNfunction_ss_sLuR::synapse0x3153cd0() {
   return (neuron0x313d470()*0.368987);
}

double NNfunction_ss_sLuR::synapse0x3153760() {
   return (neuron0x313d7b0()*0.134446);
}

double NNfunction_ss_sLuR::synapse0x31537a0() {
   return (neuron0x313dd10()*0.346968);
}

double NNfunction_ss_sLuR::synapse0x3153e20() {
   return (neuron0x313df30()*-0.0474181);
}

double NNfunction_ss_sLuR::synapse0x3153e60() {
   return (neuron0x313e270()*0.207021);
}

double NNfunction_ss_sLuR::synapse0x3153ea0() {
   return (neuron0x313e5b0()*0.0102103);
}

double NNfunction_ss_sLuR::synapse0x3153ee0() {
   return (neuron0x313e8f0()*0.114287);
}

double NNfunction_ss_sLuR::synapse0x3153f20() {
   return (neuron0x313ec30()*0.198964);
}

double NNfunction_ss_sLuR::synapse0x3153f60() {
   return (neuron0x313ef70()*-0.139883);
}

double NNfunction_ss_sLuR::synapse0x31542e0() {
   return (neuron0x313a3b0()*0.141928);
}

double NNfunction_ss_sLuR::synapse0x3154320() {
   return (neuron0x313a6f0()*-0.780135);
}

double NNfunction_ss_sLuR::synapse0x3154360() {
   return (neuron0x313aa30()*2.02573);
}

double NNfunction_ss_sLuR::synapse0x31543a0() {
   return (neuron0x313ad70()*-0.523261);
}

double NNfunction_ss_sLuR::synapse0x31543e0() {
   return (neuron0x313b0b0()*0.469917);
}

double NNfunction_ss_sLuR::synapse0x3154420() {
   return (neuron0x313b3f0()*-0.0556592);
}

double NNfunction_ss_sLuR::synapse0x3154460() {
   return (neuron0x313b730()*-0.0614241);
}

double NNfunction_ss_sLuR::synapse0x31544a0() {
   return (neuron0x313ba70()*0.270697);
}

double NNfunction_ss_sLuR::synapse0x31544e0() {
   return (neuron0x313bdb0()*0.236647);
}

double NNfunction_ss_sLuR::synapse0x3154520() {
   return (neuron0x313c0f0()*0.17656);
}

double NNfunction_ss_sLuR::synapse0x3154560() {
   return (neuron0x313c430()*0.246615);
}

double NNfunction_ss_sLuR::synapse0x31545a0() {
   return (neuron0x313c770()*-0.588171);
}

double NNfunction_ss_sLuR::synapse0x31545e0() {
   return (neuron0x313cab0()*1.74596);
}

double NNfunction_ss_sLuR::synapse0x3154620() {
   return (neuron0x313cdf0()*-0.1675);
}

double NNfunction_ss_sLuR::synapse0x3154660() {
   return (neuron0x313d130()*-1.32008);
}

double NNfunction_ss_sLuR::synapse0x31546a0() {
   return (neuron0x313d470()*-0.493481);
}

double NNfunction_ss_sLuR::synapse0x3154130() {
   return (neuron0x313d7b0()*0.941504);
}

double NNfunction_ss_sLuR::synapse0x3154170() {
   return (neuron0x313dd10()*-0.340824);
}

double NNfunction_ss_sLuR::synapse0x31547f0() {
   return (neuron0x313df30()*-1.23708);
}

double NNfunction_ss_sLuR::synapse0x3154830() {
   return (neuron0x313e270()*-0.217232);
}

double NNfunction_ss_sLuR::synapse0x3154870() {
   return (neuron0x313e5b0()*0.686337);
}

double NNfunction_ss_sLuR::synapse0x31548b0() {
   return (neuron0x313e8f0()*0.152017);
}

double NNfunction_ss_sLuR::synapse0x31548f0() {
   return (neuron0x313ec30()*-0.775861);
}

double NNfunction_ss_sLuR::synapse0x3154930() {
   return (neuron0x313ef70()*-0.530269);
}

double NNfunction_ss_sLuR::synapse0x3154cb0() {
   return (neuron0x313a3b0()*-0.158987);
}

double NNfunction_ss_sLuR::synapse0x3149280() {
   return (neuron0x313a6f0()*0.244362);
}

double NNfunction_ss_sLuR::synapse0x31492c0() {
   return (neuron0x313aa30()*0.497316);
}

double NNfunction_ss_sLuR::synapse0x3149300() {
   return (neuron0x313ad70()*0.552997);
}

double NNfunction_ss_sLuR::synapse0x3149550() {
   return (neuron0x313b0b0()*0.416469);
}

double NNfunction_ss_sLuR::synapse0x3149590() {
   return (neuron0x313b3f0()*-0.0735684);
}

double NNfunction_ss_sLuR::synapse0x31495d0() {
   return (neuron0x313b730()*0.404199);
}

double NNfunction_ss_sLuR::synapse0x3149820() {
   return (neuron0x313ba70()*0.107167);
}

double NNfunction_ss_sLuR::synapse0x3149860() {
   return (neuron0x313bdb0()*-0.111058);
}

double NNfunction_ss_sLuR::synapse0x3149ab0() {
   return (neuron0x313c0f0()*0.00984173);
}

double NNfunction_ss_sLuR::synapse0x3149af0() {
   return (neuron0x313c430()*-0.541908);
}

double NNfunction_ss_sLuR::synapse0x3149b30() {
   return (neuron0x313c770()*-0.376086);
}

double NNfunction_ss_sLuR::synapse0x3149d80() {
   return (neuron0x313cab0()*0.441857);
}

double NNfunction_ss_sLuR::synapse0x3149dc0() {
   return (neuron0x313cdf0()*-0.0418452);
}

double NNfunction_ss_sLuR::synapse0x314a010() {
   return (neuron0x313d130()*0.572176);
}

double NNfunction_ss_sLuR::synapse0x314a050() {
   return (neuron0x313d470()*-0.0619539);
}

double NNfunction_ss_sLuR::synapse0x3154b00() {
   return (neuron0x313d7b0()*0.228594);
}

double NNfunction_ss_sLuR::synapse0x3154b40() {
   return (neuron0x313dd10()*0.305708);
}

double NNfunction_ss_sLuR::synapse0x314a1a0() {
   return (neuron0x313df30()*-0.107103);
}

double NNfunction_ss_sLuR::synapse0x314a6b0() {
   return (neuron0x313e270()*-0.0637659);
}

double NNfunction_ss_sLuR::synapse0x314a6f0() {
   return (neuron0x313e5b0()*0.134776);
}

double NNfunction_ss_sLuR::synapse0x314a730() {
   return (neuron0x313e8f0()*0.0368683);
}

double NNfunction_ss_sLuR::synapse0x314a980() {
   return (neuron0x313ec30()*-0.11669);
}

double NNfunction_ss_sLuR::synapse0x314a9c0() {
   return (neuron0x313ef70()*0.145631);
}

double NNfunction_ss_sLuR::synapse0x314a270() {
   return (neuron0x313a3b0()*0.376108);
}

double NNfunction_ss_sLuR::synapse0x314a2b0() {
   return (neuron0x313a6f0()*-0.266798);
}

double NNfunction_ss_sLuR::synapse0x314a2f0() {
   return (neuron0x313aa30()*-1.36128);
}

double NNfunction_ss_sLuR::synapse0x314a330() {
   return (neuron0x313ad70()*-0.662681);
}

double NNfunction_ss_sLuR::synapse0x314acb0() {
   return (neuron0x313b0b0()*-0.504925);
}

double NNfunction_ss_sLuR::synapse0x3157000() {
   return (neuron0x313b3f0()*-0.276463);
}

double NNfunction_ss_sLuR::synapse0x3157040() {
   return (neuron0x313b730()*-0.519733);
}

double NNfunction_ss_sLuR::synapse0x3157080() {
   return (neuron0x313ba70()*-0.47615);
}

double NNfunction_ss_sLuR::synapse0x31570c0() {
   return (neuron0x313bdb0()*0.0499542);
}

double NNfunction_ss_sLuR::synapse0x3157100() {
   return (neuron0x313c0f0()*-0.18554);
}

double NNfunction_ss_sLuR::synapse0x3157140() {
   return (neuron0x313c430()*-0.32316);
}

double NNfunction_ss_sLuR::synapse0x3157180() {
   return (neuron0x313c770()*0.374563);
}

double NNfunction_ss_sLuR::synapse0x31571c0() {
   return (neuron0x313cab0()*-0.140601);
}

double NNfunction_ss_sLuR::synapse0x3157200() {
   return (neuron0x313cdf0()*-0.300593);
}

double NNfunction_ss_sLuR::synapse0x3157240() {
   return (neuron0x313d130()*0.288744);
}

double NNfunction_ss_sLuR::synapse0x3157280() {
   return (neuron0x313d470()*0.697502);
}

double NNfunction_ss_sLuR::synapse0x314ab90() {
   return (neuron0x313d7b0()*-0.16576);
}

double NNfunction_ss_sLuR::synapse0x314abd0() {
   return (neuron0x313dd10()*0.269602);
}

double NNfunction_ss_sLuR::synapse0x31573d0() {
   return (neuron0x313df30()*-0.0562966);
}

double NNfunction_ss_sLuR::synapse0x3157410() {
   return (neuron0x313e270()*0.214121);
}

double NNfunction_ss_sLuR::synapse0x3157450() {
   return (neuron0x313e5b0()*-0.115778);
}

double NNfunction_ss_sLuR::synapse0x3157490() {
   return (neuron0x313e8f0()*0.173767);
}

double NNfunction_ss_sLuR::synapse0x31574d0() {
   return (neuron0x313ec30()*-0.0493206);
}

double NNfunction_ss_sLuR::synapse0x3157510() {
   return (neuron0x313ef70()*0.215139);
}

double NNfunction_ss_sLuR::synapse0x3157890() {
   return (neuron0x313a3b0()*0.443471);
}

double NNfunction_ss_sLuR::synapse0x31578d0() {
   return (neuron0x313a6f0()*-0.202562);
}

double NNfunction_ss_sLuR::synapse0x3157910() {
   return (neuron0x313aa30()*-0.542961);
}

double NNfunction_ss_sLuR::synapse0x3157950() {
   return (neuron0x313ad70()*-0.110626);
}

double NNfunction_ss_sLuR::synapse0x3157990() {
   return (neuron0x313b0b0()*0.878804);
}

double NNfunction_ss_sLuR::synapse0x31579d0() {
   return (neuron0x313b3f0()*0.524295);
}

double NNfunction_ss_sLuR::synapse0x3157a10() {
   return (neuron0x313b730()*-0.53265);
}

double NNfunction_ss_sLuR::synapse0x3157a50() {
   return (neuron0x313ba70()*0.00451383);
}

double NNfunction_ss_sLuR::synapse0x3157a90() {
   return (neuron0x313bdb0()*0.27059);
}

double NNfunction_ss_sLuR::synapse0x3157ad0() {
   return (neuron0x313c0f0()*-0.234252);
}

double NNfunction_ss_sLuR::synapse0x3157b10() {
   return (neuron0x313c430()*-0.0775158);
}

double NNfunction_ss_sLuR::synapse0x3157b50() {
   return (neuron0x313c770()*-0.229026);
}

double NNfunction_ss_sLuR::synapse0x3157b90() {
   return (neuron0x313cab0()*0.151876);
}

double NNfunction_ss_sLuR::synapse0x3157bd0() {
   return (neuron0x313cdf0()*0.193681);
}

double NNfunction_ss_sLuR::synapse0x3157c10() {
   return (neuron0x313d130()*0.249316);
}

double NNfunction_ss_sLuR::synapse0x3157c50() {
   return (neuron0x313d470()*-0.112418);
}

double NNfunction_ss_sLuR::synapse0x31576e0() {
   return (neuron0x313d7b0()*0.59234);
}

double NNfunction_ss_sLuR::synapse0x3157720() {
   return (neuron0x313dd10()*0.0973778);
}

double NNfunction_ss_sLuR::synapse0x3157da0() {
   return (neuron0x313df30()*-0.372611);
}

double NNfunction_ss_sLuR::synapse0x3157de0() {
   return (neuron0x313e270()*-0.0875311);
}

double NNfunction_ss_sLuR::synapse0x3157e20() {
   return (neuron0x313e5b0()*-0.603071);
}

double NNfunction_ss_sLuR::synapse0x3157e60() {
   return (neuron0x313e8f0()*-0.469603);
}

double NNfunction_ss_sLuR::synapse0x3157ea0() {
   return (neuron0x313ec30()*0.730986);
}

double NNfunction_ss_sLuR::synapse0x3157ee0() {
   return (neuron0x313ef70()*0.256537);
}

double NNfunction_ss_sLuR::synapse0x3158260() {
   return (neuron0x313a3b0()*0.0139399);
}

double NNfunction_ss_sLuR::synapse0x31582a0() {
   return (neuron0x313a6f0()*-0.0237968);
}

double NNfunction_ss_sLuR::synapse0x31582e0() {
   return (neuron0x313aa30()*-0.0600653);
}

double NNfunction_ss_sLuR::synapse0x3158320() {
   return (neuron0x313ad70()*-0.0291325);
}

double NNfunction_ss_sLuR::synapse0x3158360() {
   return (neuron0x313b0b0()*-0.0837285);
}

double NNfunction_ss_sLuR::synapse0x31583a0() {
   return (neuron0x313b3f0()*0.00946758);
}

double NNfunction_ss_sLuR::synapse0x31583e0() {
   return (neuron0x313b730()*-0.0930051);
}

double NNfunction_ss_sLuR::synapse0x3158420() {
   return (neuron0x313ba70()*-0.0274859);
}

double NNfunction_ss_sLuR::synapse0x3158460() {
   return (neuron0x313bdb0()*0.0384966);
}

double NNfunction_ss_sLuR::synapse0x31584a0() {
   return (neuron0x313c0f0()*0.0231252);
}

double NNfunction_ss_sLuR::synapse0x31584e0() {
   return (neuron0x313c430()*0.0159154);
}

double NNfunction_ss_sLuR::synapse0x3158520() {
   return (neuron0x313c770()*-0.0518834);
}

double NNfunction_ss_sLuR::synapse0x3158560() {
   return (neuron0x313cab0()*-0.18237);
}

double NNfunction_ss_sLuR::synapse0x31585a0() {
   return (neuron0x313cdf0()*-0.017857);
}

double NNfunction_ss_sLuR::synapse0x31585e0() {
   return (neuron0x313d130()*2.39429);
}

double NNfunction_ss_sLuR::synapse0x3158620() {
   return (neuron0x313d470()*0.0440698);
}

double NNfunction_ss_sLuR::synapse0x31580b0() {
   return (neuron0x313d7b0()*0.0458795);
}

double NNfunction_ss_sLuR::synapse0x31580f0() {
   return (neuron0x313dd10()*-0.0323775);
}

double NNfunction_ss_sLuR::synapse0x3158770() {
   return (neuron0x313df30()*-0.0413792);
}

double NNfunction_ss_sLuR::synapse0x31587b0() {
   return (neuron0x313e270()*-0.00554266);
}

double NNfunction_ss_sLuR::synapse0x31587f0() {
   return (neuron0x313e5b0()*0.00707456);
}

double NNfunction_ss_sLuR::synapse0x3158830() {
   return (neuron0x313e8f0()*0.00887863);
}

double NNfunction_ss_sLuR::synapse0x3158870() {
   return (neuron0x313ec30()*0.0455551);
}

double NNfunction_ss_sLuR::synapse0x31588b0() {
   return (neuron0x313ef70()*-0.0259851);
}

double NNfunction_ss_sLuR::synapse0x3158c30() {
   return (neuron0x313a3b0()*-0.215634);
}

double NNfunction_ss_sLuR::synapse0x3158c70() {
   return (neuron0x313a6f0()*0.0113684);
}

double NNfunction_ss_sLuR::synapse0x3158cb0() {
   return (neuron0x313aa30()*0.066491);
}

double NNfunction_ss_sLuR::synapse0x3158cf0() {
   return (neuron0x313ad70()*-0.0748655);
}

double NNfunction_ss_sLuR::synapse0x3158d30() {
   return (neuron0x313b0b0()*-0.511197);
}

double NNfunction_ss_sLuR::synapse0x3158d70() {
   return (neuron0x313b3f0()*0.740746);
}

double NNfunction_ss_sLuR::synapse0x3158db0() {
   return (neuron0x313b730()*0.177882);
}

double NNfunction_ss_sLuR::synapse0x3158df0() {
   return (neuron0x313ba70()*0.291489);
}

double NNfunction_ss_sLuR::synapse0x3158e30() {
   return (neuron0x313bdb0()*-0.132423);
}

double NNfunction_ss_sLuR::synapse0x3158e70() {
   return (neuron0x313c0f0()*0.241196);
}

double NNfunction_ss_sLuR::synapse0x3158eb0() {
   return (neuron0x313c430()*-0.172151);
}

double NNfunction_ss_sLuR::synapse0x3158ef0() {
   return (neuron0x313c770()*-0.0606345);
}

double NNfunction_ss_sLuR::synapse0x3158f30() {
   return (neuron0x313cab0()*-0.434686);
}

double NNfunction_ss_sLuR::synapse0x3158f70() {
   return (neuron0x313cdf0()*0.00738265);
}

double NNfunction_ss_sLuR::synapse0x3158fb0() {
   return (neuron0x313d130()*0.248763);
}

double NNfunction_ss_sLuR::synapse0x3158ff0() {
   return (neuron0x313d470()*-0.144075);
}

double NNfunction_ss_sLuR::synapse0x3158a80() {
   return (neuron0x313d7b0()*0.30376);
}

double NNfunction_ss_sLuR::synapse0x3158ac0() {
   return (neuron0x313dd10()*0.0501468);
}

double NNfunction_ss_sLuR::synapse0x3159140() {
   return (neuron0x313df30()*0.163807);
}

double NNfunction_ss_sLuR::synapse0x3159180() {
   return (neuron0x313e270()*0.217267);
}

double NNfunction_ss_sLuR::synapse0x31591c0() {
   return (neuron0x313e5b0()*-0.465968);
}

double NNfunction_ss_sLuR::synapse0x3159200() {
   return (neuron0x313e8f0()*-0.312887);
}

double NNfunction_ss_sLuR::synapse0x3159240() {
   return (neuron0x313ec30()*0.210661);
}

double NNfunction_ss_sLuR::synapse0x3159280() {
   return (neuron0x313ef70()*0.299173);
}

double NNfunction_ss_sLuR::synapse0x3159600() {
   return (neuron0x313a3b0()*0.0280448);
}

double NNfunction_ss_sLuR::synapse0x3159640() {
   return (neuron0x313a6f0()*-0.330133);
}

double NNfunction_ss_sLuR::synapse0x3159680() {
   return (neuron0x313aa30()*0.842559);
}

double NNfunction_ss_sLuR::synapse0x31596c0() {
   return (neuron0x313ad70()*-0.460972);
}

double NNfunction_ss_sLuR::synapse0x3159700() {
   return (neuron0x313b0b0()*0.328962);
}

double NNfunction_ss_sLuR::synapse0x3159740() {
   return (neuron0x313b3f0()*-0.0442613);
}

double NNfunction_ss_sLuR::synapse0x3159780() {
   return (neuron0x313b730()*-0.241398);
}

double NNfunction_ss_sLuR::synapse0x31597c0() {
   return (neuron0x313ba70()*0.18288);
}

double NNfunction_ss_sLuR::synapse0x3159800() {
   return (neuron0x313bdb0()*0.319682);
}

double NNfunction_ss_sLuR::synapse0x3159840() {
   return (neuron0x313c0f0()*0.269336);
}

double NNfunction_ss_sLuR::synapse0x3159880() {
   return (neuron0x313c430()*0.794439);
}

double NNfunction_ss_sLuR::synapse0x31598c0() {
   return (neuron0x313c770()*-0.296243);
}

double NNfunction_ss_sLuR::synapse0x3159900() {
   return (neuron0x313cab0()*-1.93862);
}

double NNfunction_ss_sLuR::synapse0x3159940() {
   return (neuron0x313cdf0()*-0.420818);
}

double NNfunction_ss_sLuR::synapse0x3159980() {
   return (neuron0x313d130()*1.75833);
}

double NNfunction_ss_sLuR::synapse0x31599c0() {
   return (neuron0x313d470()*0.284503);
}

double NNfunction_ss_sLuR::synapse0x3159450() {
   return (neuron0x313d7b0()*0.613302);
}

double NNfunction_ss_sLuR::synapse0x3159490() {
   return (neuron0x313dd10()*0.165101);
}

double NNfunction_ss_sLuR::synapse0x3159b10() {
   return (neuron0x313df30()*-0.0260037);
}

double NNfunction_ss_sLuR::synapse0x3159b50() {
   return (neuron0x313e270()*-0.086119);
}

double NNfunction_ss_sLuR::synapse0x3159b90() {
   return (neuron0x313e5b0()*0.195343);
}

double NNfunction_ss_sLuR::synapse0x3159bd0() {
   return (neuron0x313e8f0()*-0.00212719);
}

double NNfunction_ss_sLuR::synapse0x3159c10() {
   return (neuron0x313ec30()*-0.0907184);
}

double NNfunction_ss_sLuR::synapse0x3159c50() {
   return (neuron0x313ef70()*-0.031661);
}

double NNfunction_ss_sLuR::synapse0x3159fd0() {
   return (neuron0x313a3b0()*0.0296877);
}

double NNfunction_ss_sLuR::synapse0x315a010() {
   return (neuron0x313a6f0()*-0.352048);
}

double NNfunction_ss_sLuR::synapse0x315a050() {
   return (neuron0x313aa30()*-0.291639);
}

double NNfunction_ss_sLuR::synapse0x315a090() {
   return (neuron0x313ad70()*0.114673);
}

double NNfunction_ss_sLuR::synapse0x315a0d0() {
   return (neuron0x313b0b0()*-0.0159656);
}

double NNfunction_ss_sLuR::synapse0x315a110() {
   return (neuron0x313b3f0()*1.20483);
}

double NNfunction_ss_sLuR::synapse0x315a150() {
   return (neuron0x313b730()*0.80023);
}

double NNfunction_ss_sLuR::synapse0x315a190() {
   return (neuron0x313ba70()*0.51607);
}

double NNfunction_ss_sLuR::synapse0x315a1d0() {
   return (neuron0x313bdb0()*1.42135);
}

double NNfunction_ss_sLuR::synapse0x315a210() {
   return (neuron0x313c0f0()*0.762461);
}

double NNfunction_ss_sLuR::synapse0x315a250() {
   return (neuron0x313c430()*0.203622);
}

double NNfunction_ss_sLuR::synapse0x315a290() {
   return (neuron0x313c770()*0.152807);
}

double NNfunction_ss_sLuR::synapse0x315a2d0() {
   return (neuron0x313cab0()*-0.186598);
}

double NNfunction_ss_sLuR::synapse0x315a310() {
   return (neuron0x313cdf0()*0.0925658);
}

double NNfunction_ss_sLuR::synapse0x315a350() {
   return (neuron0x313d130()*-0.946705);
}

double NNfunction_ss_sLuR::synapse0x315a390() {
   return (neuron0x313d470()*0.0832055);
}

double NNfunction_ss_sLuR::synapse0x3159e20() {
   return (neuron0x313d7b0()*0.264025);
}

double NNfunction_ss_sLuR::synapse0x3159e60() {
   return (neuron0x313dd10()*0.259005);
}

double NNfunction_ss_sLuR::synapse0x315a4e0() {
   return (neuron0x313df30()*-0.214043);
}

double NNfunction_ss_sLuR::synapse0x315a520() {
   return (neuron0x313e270()*-0.273108);
}

double NNfunction_ss_sLuR::synapse0x315a560() {
   return (neuron0x313e5b0()*0.799676);
}

double NNfunction_ss_sLuR::synapse0x315a5a0() {
   return (neuron0x313e8f0()*0.0030433);
}

double NNfunction_ss_sLuR::synapse0x315a5e0() {
   return (neuron0x313ec30()*-0.550068);
}

double NNfunction_ss_sLuR::synapse0x315a620() {
   return (neuron0x313ef70()*0.13577);
}

double NNfunction_ss_sLuR::synapse0x315a9a0() {
   return (neuron0x313a3b0()*-0.0231666);
}

double NNfunction_ss_sLuR::synapse0x315a9e0() {
   return (neuron0x313a6f0()*-1.35915);
}

double NNfunction_ss_sLuR::synapse0x315aa20() {
   return (neuron0x313aa30()*-0.180886);
}

double NNfunction_ss_sLuR::synapse0x315aa60() {
   return (neuron0x313ad70()*-0.675897);
}

double NNfunction_ss_sLuR::synapse0x315aaa0() {
   return (neuron0x313b0b0()*0.379965);
}

double NNfunction_ss_sLuR::synapse0x315aae0() {
   return (neuron0x313b3f0()*0.403297);
}

double NNfunction_ss_sLuR::synapse0x315ab20() {
   return (neuron0x313b730()*0.519109);
}

double NNfunction_ss_sLuR::synapse0x315ab60() {
   return (neuron0x313ba70()*-0.235161);
}

double NNfunction_ss_sLuR::synapse0x315aba0() {
   return (neuron0x313bdb0()*0.118857);
}

double NNfunction_ss_sLuR::synapse0x315abe0() {
   return (neuron0x313c0f0()*0.0669176);
}

double NNfunction_ss_sLuR::synapse0x315ac20() {
   return (neuron0x313c430()*1.33893);
}

double NNfunction_ss_sLuR::synapse0x315ac60() {
   return (neuron0x313c770()*-0.261791);
}

double NNfunction_ss_sLuR::synapse0x315aca0() {
   return (neuron0x313cab0()*-1.70427);
}

double NNfunction_ss_sLuR::synapse0x315ace0() {
   return (neuron0x313cdf0()*-0.146483);
}

double NNfunction_ss_sLuR::synapse0x315ad20() {
   return (neuron0x313d130()*2.35319);
}

double NNfunction_ss_sLuR::synapse0x315ad60() {
   return (neuron0x313d470()*0.629792);
}

double NNfunction_ss_sLuR::synapse0x315a7f0() {
   return (neuron0x313d7b0()*0.336484);
}

double NNfunction_ss_sLuR::synapse0x315a830() {
   return (neuron0x313dd10()*-0.295973);
}

double NNfunction_ss_sLuR::synapse0x315aeb0() {
   return (neuron0x313df30()*-0.336118);
}

double NNfunction_ss_sLuR::synapse0x315aef0() {
   return (neuron0x313e270()*-1.23736);
}

double NNfunction_ss_sLuR::synapse0x315af30() {
   return (neuron0x313e5b0()*0.456208);
}

double NNfunction_ss_sLuR::synapse0x315af70() {
   return (neuron0x313e8f0()*0.478825);
}

double NNfunction_ss_sLuR::synapse0x315afb0() {
   return (neuron0x313ec30()*-0.359407);
}

double NNfunction_ss_sLuR::synapse0x315aff0() {
   return (neuron0x313ef70()*-0.173988);
}

double NNfunction_ss_sLuR::synapse0x315b370() {
   return (neuron0x313a3b0()*-0.635218);
}

double NNfunction_ss_sLuR::synapse0x315b3b0() {
   return (neuron0x313a6f0()*-0.667846);
}

double NNfunction_ss_sLuR::synapse0x315b3f0() {
   return (neuron0x313aa30()*0.372371);
}

double NNfunction_ss_sLuR::synapse0x315b430() {
   return (neuron0x313ad70()*-0.443688);
}

double NNfunction_ss_sLuR::synapse0x315b470() {
   return (neuron0x313b0b0()*-0.0976915);
}

double NNfunction_ss_sLuR::synapse0x315b4b0() {
   return (neuron0x313b3f0()*0.158332);
}

double NNfunction_ss_sLuR::synapse0x315b4f0() {
   return (neuron0x313b730()*0.0781174);
}

double NNfunction_ss_sLuR::synapse0x315b530() {
   return (neuron0x313ba70()*-0.154846);
}

double NNfunction_ss_sLuR::synapse0x315b570() {
   return (neuron0x313bdb0()*-0.248254);
}

double NNfunction_ss_sLuR::synapse0x315b5b0() {
   return (neuron0x313c0f0()*-1.05595);
}

double NNfunction_ss_sLuR::synapse0x315b5f0() {
   return (neuron0x313c430()*0.46071);
}

double NNfunction_ss_sLuR::synapse0x315b630() {
   return (neuron0x313c770()*-0.090967);
}

double NNfunction_ss_sLuR::synapse0x315b670() {
   return (neuron0x313cab0()*-0.00843123);
}

double NNfunction_ss_sLuR::synapse0x315b6b0() {
   return (neuron0x313cdf0()*-0.683141);
}

double NNfunction_ss_sLuR::synapse0x315b6f0() {
   return (neuron0x313d130()*-0.0949017);
}

double NNfunction_ss_sLuR::synapse0x315b730() {
   return (neuron0x313d470()*0.116906);
}

double NNfunction_ss_sLuR::synapse0x315b1c0() {
   return (neuron0x313d7b0()*-0.0527629);
}

double NNfunction_ss_sLuR::synapse0x315b200() {
   return (neuron0x313dd10()*-0.226288);
}

double NNfunction_ss_sLuR::synapse0x315b880() {
   return (neuron0x313df30()*-0.190495);
}

double NNfunction_ss_sLuR::synapse0x315b8c0() {
   return (neuron0x313e270()*-0.0120917);
}

double NNfunction_ss_sLuR::synapse0x315b900() {
   return (neuron0x313e5b0()*-0.338087);
}

double NNfunction_ss_sLuR::synapse0x315b940() {
   return (neuron0x313e8f0()*0.411473);
}

double NNfunction_ss_sLuR::synapse0x315b980() {
   return (neuron0x313ec30()*0.542908);
}

double NNfunction_ss_sLuR::synapse0x315b9c0() {
   return (neuron0x313ef70()*0.384409);
}

double NNfunction_ss_sLuR::synapse0x3144470() {
   return (neuron0x313a3b0()*-0.0124884);
}

double NNfunction_ss_sLuR::synapse0x31444b0() {
   return (neuron0x313a6f0()*-0.00862528);
}

double NNfunction_ss_sLuR::synapse0x31444f0() {
   return (neuron0x313aa30()*0.00907864);
}

double NNfunction_ss_sLuR::synapse0x3144530() {
   return (neuron0x313ad70()*0.0393532);
}

double NNfunction_ss_sLuR::synapse0x3144570() {
   return (neuron0x313b0b0()*0.0635358);
}

double NNfunction_ss_sLuR::synapse0x31445b0() {
   return (neuron0x313b3f0()*0.11462);
}

double NNfunction_ss_sLuR::synapse0x31445f0() {
   return (neuron0x313b730()*0.0768458);
}

double NNfunction_ss_sLuR::synapse0x3144630() {
   return (neuron0x313ba70()*0.0440853);
}

double NNfunction_ss_sLuR::synapse0x315c150() {
   return (neuron0x313bdb0()*0.0708233);
}

double NNfunction_ss_sLuR::synapse0x315c190() {
   return (neuron0x313c0f0()*0.00678941);
}

double NNfunction_ss_sLuR::synapse0x315c1d0() {
   return (neuron0x313c430()*0.0385418);
}

double NNfunction_ss_sLuR::synapse0x315c210() {
   return (neuron0x313c770()*-0.0620834);
}

double NNfunction_ss_sLuR::synapse0x315c250() {
   return (neuron0x313cab0()*0.560703);
}

double NNfunction_ss_sLuR::synapse0x315c290() {
   return (neuron0x313cdf0()*0.0177427);
}

double NNfunction_ss_sLuR::synapse0x315c2d0() {
   return (neuron0x313d130()*0.475191);
}

double NNfunction_ss_sLuR::synapse0x315c310() {
   return (neuron0x313d470()*0.0263295);
}

double NNfunction_ss_sLuR::synapse0x315bb90() {
   return (neuron0x313d7b0()*0.0385003);
}

double NNfunction_ss_sLuR::synapse0x315bbd0() {
   return (neuron0x313dd10()*-0.00189656);
}

double NNfunction_ss_sLuR::synapse0x315c460() {
   return (neuron0x313df30()*-0.00368005);
}

double NNfunction_ss_sLuR::synapse0x315c4a0() {
   return (neuron0x313e270()*-0.0038398);
}

double NNfunction_ss_sLuR::synapse0x315c4e0() {
   return (neuron0x313e5b0()*0.0279812);
}

double NNfunction_ss_sLuR::synapse0x315c520() {
   return (neuron0x313e8f0()*0.0152921);
}

double NNfunction_ss_sLuR::synapse0x315c560() {
   return (neuron0x313ec30()*-0.000353134);
}

double NNfunction_ss_sLuR::synapse0x315c5a0() {
   return (neuron0x313ef70()*0.0287976);
}

double NNfunction_ss_sLuR::synapse0x315c920() {
   return (neuron0x313a3b0()*-0.0224849);
}

double NNfunction_ss_sLuR::synapse0x315c960() {
   return (neuron0x313a6f0()*-0.0119275);
}

double NNfunction_ss_sLuR::synapse0x315c9a0() {
   return (neuron0x313aa30()*0.00254222);
}

double NNfunction_ss_sLuR::synapse0x315c9e0() {
   return (neuron0x313ad70()*11.6973);
}

double NNfunction_ss_sLuR::synapse0x315ca20() {
   return (neuron0x313b0b0()*-0.0209062);
}

double NNfunction_ss_sLuR::synapse0x315ca60() {
   return (neuron0x313b3f0()*-0.00581877);
}

double NNfunction_ss_sLuR::synapse0x315caa0() {
   return (neuron0x313b730()*0.00145361);
}

double NNfunction_ss_sLuR::synapse0x315cae0() {
   return (neuron0x313ba70()*-0.00396282);
}

double NNfunction_ss_sLuR::synapse0x315cb20() {
   return (neuron0x313bdb0()*0.0265543);
}

double NNfunction_ss_sLuR::synapse0x315cb60() {
   return (neuron0x313c0f0()*-0.00982243);
}

double NNfunction_ss_sLuR::synapse0x315cba0() {
   return (neuron0x313c430()*0.0261459);
}

double NNfunction_ss_sLuR::synapse0x315cbe0() {
   return (neuron0x313c770()*0.00110352);
}

double NNfunction_ss_sLuR::synapse0x315cc20() {
   return (neuron0x313cab0()*0.0555047);
}

double NNfunction_ss_sLuR::synapse0x315cc60() {
   return (neuron0x313cdf0()*-0.0260311);
}

double NNfunction_ss_sLuR::synapse0x315cca0() {
   return (neuron0x313d130()*0.12245);
}

double NNfunction_ss_sLuR::synapse0x315cce0() {
   return (neuron0x313d470()*-0.0255472);
}

double NNfunction_ss_sLuR::synapse0x315c770() {
   return (neuron0x313d7b0()*0.00386828);
}

double NNfunction_ss_sLuR::synapse0x315c7b0() {
   return (neuron0x313dd10()*-0.0383053);
}

double NNfunction_ss_sLuR::synapse0x315ce30() {
   return (neuron0x313df30()*0.0407922);
}

double NNfunction_ss_sLuR::synapse0x315ce70() {
   return (neuron0x313e270()*0.0183928);
}

double NNfunction_ss_sLuR::synapse0x315ceb0() {
   return (neuron0x313e5b0()*0.0275179);
}

double NNfunction_ss_sLuR::synapse0x315cef0() {
   return (neuron0x313e8f0()*0.0208825);
}

double NNfunction_ss_sLuR::synapse0x315cf30() {
   return (neuron0x313ec30()*-0.00394148);
}

double NNfunction_ss_sLuR::synapse0x315cf70() {
   return (neuron0x313ef70()*0.0426739);
}

double NNfunction_ss_sLuR::synapse0x315d2f0() {
   return (neuron0x313a3b0()*0.0914105);
}

double NNfunction_ss_sLuR::synapse0x315d330() {
   return (neuron0x313a6f0()*0.234702);
}

double NNfunction_ss_sLuR::synapse0x315d370() {
   return (neuron0x313aa30()*-0.00213009);
}

double NNfunction_ss_sLuR::synapse0x315d3b0() {
   return (neuron0x313ad70()*1.69403);
}

double NNfunction_ss_sLuR::synapse0x315d3f0() {
   return (neuron0x313b0b0()*0.524746);
}

double NNfunction_ss_sLuR::synapse0x315d430() {
   return (neuron0x313b3f0()*0.238729);
}

double NNfunction_ss_sLuR::synapse0x315d470() {
   return (neuron0x313b730()*-0.67747);
}

double NNfunction_ss_sLuR::synapse0x315d4b0() {
   return (neuron0x313ba70()*-0.313424);
}

double NNfunction_ss_sLuR::synapse0x315d4f0() {
   return (neuron0x313bdb0()*0.318886);
}

double NNfunction_ss_sLuR::synapse0x315d530() {
   return (neuron0x313c0f0()*0.698334);
}

double NNfunction_ss_sLuR::synapse0x315d570() {
   return (neuron0x313c430()*0.172034);
}

double NNfunction_ss_sLuR::synapse0x315d5b0() {
   return (neuron0x313c770()*-0.0131146);
}

double NNfunction_ss_sLuR::synapse0x315d5f0() {
   return (neuron0x313cab0()*0.612544);
}

double NNfunction_ss_sLuR::synapse0x315d630() {
   return (neuron0x313cdf0()*-0.386913);
}

double NNfunction_ss_sLuR::synapse0x315d670() {
   return (neuron0x313d130()*0.600561);
}

double NNfunction_ss_sLuR::synapse0x315d6b0() {
   return (neuron0x313d470()*-0.105101);
}

double NNfunction_ss_sLuR::synapse0x315d140() {
   return (neuron0x313d7b0()*0.0548486);
}

double NNfunction_ss_sLuR::synapse0x315d180() {
   return (neuron0x313dd10()*0.156875);
}

double NNfunction_ss_sLuR::synapse0x314dcb0() {
   return (neuron0x313df30()*-0.495302);
}

double NNfunction_ss_sLuR::synapse0x314dcf0() {
   return (neuron0x313e270()*0.296134);
}

double NNfunction_ss_sLuR::synapse0x314dd30() {
   return (neuron0x313e5b0()*-0.0732765);
}

double NNfunction_ss_sLuR::synapse0x314dd70() {
   return (neuron0x313e8f0()*-0.23046);
}

double NNfunction_ss_sLuR::synapse0x314ddb0() {
   return (neuron0x313ec30()*-0.397478);
}

double NNfunction_ss_sLuR::synapse0x314ddf0() {
   return (neuron0x313ef70()*0.19853);
}

double NNfunction_ss_sLuR::synapse0x314e170() {
   return (neuron0x313a3b0()*0.0970922);
}

double NNfunction_ss_sLuR::synapse0x314e1b0() {
   return (neuron0x313a6f0()*-0.250631);
}

double NNfunction_ss_sLuR::synapse0x314e1f0() {
   return (neuron0x313aa30()*0.00787302);
}

double NNfunction_ss_sLuR::synapse0x314e230() {
   return (neuron0x313ad70()*-0.259088);
}

double NNfunction_ss_sLuR::synapse0x314e270() {
   return (neuron0x313b0b0()*-0.0992926);
}

double NNfunction_ss_sLuR::synapse0x314e2b0() {
   return (neuron0x313b3f0()*0.326306);
}

double NNfunction_ss_sLuR::synapse0x314e2f0() {
   return (neuron0x313b730()*-0.202842);
}

double NNfunction_ss_sLuR::synapse0x314e330() {
   return (neuron0x313ba70()*0.270045);
}

double NNfunction_ss_sLuR::synapse0x314e370() {
   return (neuron0x313bdb0()*0.110407);
}

double NNfunction_ss_sLuR::synapse0x314e3b0() {
   return (neuron0x313c0f0()*0.324425);
}

double NNfunction_ss_sLuR::synapse0x314e3f0() {
   return (neuron0x313c430()*0.142461);
}

double NNfunction_ss_sLuR::synapse0x314e430() {
   return (neuron0x313c770()*0.0232026);
}

double NNfunction_ss_sLuR::synapse0x314e470() {
   return (neuron0x313cab0()*0.513508);
}

double NNfunction_ss_sLuR::synapse0x314e4b0() {
   return (neuron0x313cdf0()*0.0184594);
}

double NNfunction_ss_sLuR::synapse0x314e4f0() {
   return (neuron0x313d130()*-0.0567714);
}

double NNfunction_ss_sLuR::synapse0x314e530() {
   return (neuron0x313d470()*0.086294);
}

double NNfunction_ss_sLuR::synapse0x314dfc0() {
   return (neuron0x313d7b0()*-0.442887);
}

double NNfunction_ss_sLuR::synapse0x314e000() {
   return (neuron0x313dd10()*-0.20095);
}

double NNfunction_ss_sLuR::synapse0x314e680() {
   return (neuron0x313df30()*0.482288);
}

double NNfunction_ss_sLuR::synapse0x314e6c0() {
   return (neuron0x313e270()*0.0347328);
}

double NNfunction_ss_sLuR::synapse0x314e700() {
   return (neuron0x313e5b0()*-0.14539);
}

double NNfunction_ss_sLuR::synapse0x314e740() {
   return (neuron0x313e8f0()*-0.107898);
}

double NNfunction_ss_sLuR::synapse0x314e780() {
   return (neuron0x313ec30()*-0.0723885);
}

double NNfunction_ss_sLuR::synapse0x314e7c0() {
   return (neuron0x313ef70()*-0.00106269);
}

double NNfunction_ss_sLuR::synapse0x314eb40() {
   return (neuron0x313a3b0()*-0.00343709);
}

double NNfunction_ss_sLuR::synapse0x314eb80() {
   return (neuron0x313a6f0()*-0.00666731);
}

double NNfunction_ss_sLuR::synapse0x314ebc0() {
   return (neuron0x313aa30()*-0.0262984);
}

double NNfunction_ss_sLuR::synapse0x314ec00() {
   return (neuron0x313ad70()*-0.000559205);
}

double NNfunction_ss_sLuR::synapse0x314ec40() {
   return (neuron0x313b0b0()*-0.00017097);
}

double NNfunction_ss_sLuR::synapse0x314ec80() {
   return (neuron0x313b3f0()*-0.00139381);
}

double NNfunction_ss_sLuR::synapse0x314ecc0() {
   return (neuron0x313b730()*-0.00307331);
}

double NNfunction_ss_sLuR::synapse0x314ed00() {
   return (neuron0x313ba70()*-0.0131325);
}

double NNfunction_ss_sLuR::synapse0x314ed40() {
   return (neuron0x313bdb0()*0.0122199);
}

double NNfunction_ss_sLuR::synapse0x314ed80() {
   return (neuron0x313c0f0()*-0.00796602);
}

double NNfunction_ss_sLuR::synapse0x314edc0() {
   return (neuron0x313c430()*-0.0504834);
}

double NNfunction_ss_sLuR::synapse0x314ee00() {
   return (neuron0x313c770()*-0.00456176);
}

double NNfunction_ss_sLuR::synapse0x314ee40() {
   return (neuron0x313cab0()*1.70948);
}

double NNfunction_ss_sLuR::synapse0x314ee80() {
   return (neuron0x313cdf0()*0.000106646);
}

double NNfunction_ss_sLuR::synapse0x314eec0() {
   return (neuron0x313d130()*-0.195884);
}

double NNfunction_ss_sLuR::synapse0x314ef00() {
   return (neuron0x313d470()*-0.0142256);
}

double NNfunction_ss_sLuR::synapse0x314e990() {
   return (neuron0x313d7b0()*-0.0222697);
}

double NNfunction_ss_sLuR::synapse0x314e9d0() {
   return (neuron0x313dd10()*0.00189717);
}

double NNfunction_ss_sLuR::synapse0x314f050() {
   return (neuron0x313df30()*-0.0169962);
}

double NNfunction_ss_sLuR::synapse0x314f090() {
   return (neuron0x313e270()*-4.40629e-05);
}

double NNfunction_ss_sLuR::synapse0x314f0d0() {
   return (neuron0x313e5b0()*-0.00984417);
}

double NNfunction_ss_sLuR::synapse0x314f110() {
   return (neuron0x313e8f0()*-0.00250424);
}

double NNfunction_ss_sLuR::synapse0x314f150() {
   return (neuron0x313ec30()*0.0265078);
}

double NNfunction_ss_sLuR::synapse0x314f190() {
   return (neuron0x313ef70()*-0.0127153);
}

double NNfunction_ss_sLuR::synapse0x314f510() {
   return (neuron0x313a3b0()*-0.0147805);
}

double NNfunction_ss_sLuR::synapse0x314f550() {
   return (neuron0x313a6f0()*0.00903634);
}

double NNfunction_ss_sLuR::synapse0x314f590() {
   return (neuron0x313aa30()*0.0414756);
}

double NNfunction_ss_sLuR::synapse0x314f5d0() {
   return (neuron0x313ad70()*0.0513623);
}

double NNfunction_ss_sLuR::synapse0x314f610() {
   return (neuron0x313b0b0()*-0.251129);
}

double NNfunction_ss_sLuR::synapse0x314f650() {
   return (neuron0x313b3f0()*0.029022);
}

double NNfunction_ss_sLuR::synapse0x314f690() {
   return (neuron0x313b730()*0.424795);
}

double NNfunction_ss_sLuR::synapse0x314f6d0() {
   return (neuron0x313ba70()*0.0301176);
}

double NNfunction_ss_sLuR::synapse0x314f710() {
   return (neuron0x313bdb0()*0.0672384);
}

double NNfunction_ss_sLuR::synapse0x314f750() {
   return (neuron0x313c0f0()*0.0371071);
}

double NNfunction_ss_sLuR::synapse0x314f790() {
   return (neuron0x313c430()*-0.199432);
}

double NNfunction_ss_sLuR::synapse0x314f7d0() {
   return (neuron0x313c770()*0.276106);
}

double NNfunction_ss_sLuR::synapse0x314f810() {
   return (neuron0x313cab0()*-0.616653);
}

double NNfunction_ss_sLuR::synapse0x314f850() {
   return (neuron0x313cdf0()*0.0415956);
}

double NNfunction_ss_sLuR::synapse0x314f890() {
   return (neuron0x313d130()*-0.742763);
}

double NNfunction_ss_sLuR::synapse0x314f8d0() {
   return (neuron0x313d470()*0.162873);
}

double NNfunction_ss_sLuR::synapse0x314f360() {
   return (neuron0x313d7b0()*-0.0170793);
}

double NNfunction_ss_sLuR::synapse0x314f3a0() {
   return (neuron0x313dd10()*0.140499);
}

double NNfunction_ss_sLuR::synapse0x314fa20() {
   return (neuron0x313df30()*0.0913691);
}

double NNfunction_ss_sLuR::synapse0x314fa60() {
   return (neuron0x313e270()*0.00889017);
}

double NNfunction_ss_sLuR::synapse0x314faa0() {
   return (neuron0x313e5b0()*0.0842914);
}

double NNfunction_ss_sLuR::synapse0x314fae0() {
   return (neuron0x313e8f0()*0.122647);
}

double NNfunction_ss_sLuR::synapse0x314fb20() {
   return (neuron0x313ec30()*-0.146948);
}

double NNfunction_ss_sLuR::synapse0x314fb60() {
   return (neuron0x313ef70()*0.108041);
}

double NNfunction_ss_sLuR::synapse0x3161a30() {
   return (neuron0x313a3b0()*0.00995943);
}

double NNfunction_ss_sLuR::synapse0x3161a70() {
   return (neuron0x313a6f0()*0.00526731);
}

double NNfunction_ss_sLuR::synapse0x3161ab0() {
   return (neuron0x313aa30()*-0.0483882);
}

double NNfunction_ss_sLuR::synapse0x3161af0() {
   return (neuron0x313ad70()*2.46559);
}

double NNfunction_ss_sLuR::synapse0x3161b30() {
   return (neuron0x313b0b0()*-0.000950358);
}

double NNfunction_ss_sLuR::synapse0x3161b70() {
   return (neuron0x313b3f0()*0.0104659);
}

double NNfunction_ss_sLuR::synapse0x3161bb0() {
   return (neuron0x313b730()*0.00780504);
}

double NNfunction_ss_sLuR::synapse0x3161bf0() {
   return (neuron0x313ba70()*-0.0130689);
}

double NNfunction_ss_sLuR::synapse0x3161c30() {
   return (neuron0x313bdb0()*-0.0173708);
}

double NNfunction_ss_sLuR::synapse0x3161c70() {
   return (neuron0x313c0f0()*-0.0183135);
}

double NNfunction_ss_sLuR::synapse0x3161cb0() {
   return (neuron0x313c430()*-0.0273042);
}

double NNfunction_ss_sLuR::synapse0x3161cf0() {
   return (neuron0x313c770()*-0.0226614);
}

double NNfunction_ss_sLuR::synapse0x3161d30() {
   return (neuron0x313cab0()*0.18664);
}

double NNfunction_ss_sLuR::synapse0x3161d70() {
   return (neuron0x313cdf0()*0.0186851);
}

double NNfunction_ss_sLuR::synapse0x3161db0() {
   return (neuron0x313d130()*0.160175);
}

double NNfunction_ss_sLuR::synapse0x3161df0() {
   return (neuron0x313d470()*-0.0243474);
}

double NNfunction_ss_sLuR::synapse0x314fba0() {
   return (neuron0x313d7b0()*-0.0175529);
}

double NNfunction_ss_sLuR::synapse0x314fbe0() {
   return (neuron0x313dd10()*-0.0267275);
}

double NNfunction_ss_sLuR::synapse0x3161f40() {
   return (neuron0x313df30()*-0.0182866);
}

double NNfunction_ss_sLuR::synapse0x3161f80() {
   return (neuron0x313e270()*0.0039312);
}

double NNfunction_ss_sLuR::synapse0x3161fc0() {
   return (neuron0x313e5b0()*0.0051924);
}

double NNfunction_ss_sLuR::synapse0x3162000() {
   return (neuron0x313e8f0()*0.00721848);
}

double NNfunction_ss_sLuR::synapse0x3162040() {
   return (neuron0x313ec30()*0.00255177);
}

double NNfunction_ss_sLuR::synapse0x3162080() {
   return (neuron0x313ef70()*-0.00871309);
}

double NNfunction_ss_sLuR::synapse0x3162400() {
   return (neuron0x313a3b0()*-0.231124);
}

double NNfunction_ss_sLuR::synapse0x3162440() {
   return (neuron0x313a6f0()*0.21278);
}

double NNfunction_ss_sLuR::synapse0x3162480() {
   return (neuron0x313aa30()*-0.523303);
}

double NNfunction_ss_sLuR::synapse0x31624c0() {
   return (neuron0x313ad70()*0.0921202);
}

double NNfunction_ss_sLuR::synapse0x3162500() {
   return (neuron0x313b0b0()*-0.332365);
}

double NNfunction_ss_sLuR::synapse0x3162540() {
   return (neuron0x313b3f0()*-0.165173);
}

double NNfunction_ss_sLuR::synapse0x3162580() {
   return (neuron0x313b730()*-0.220046);
}

double NNfunction_ss_sLuR::synapse0x31625c0() {
   return (neuron0x313ba70()*-0.0575389);
}

double NNfunction_ss_sLuR::synapse0x3162600() {
   return (neuron0x313bdb0()*-0.0682047);
}

double NNfunction_ss_sLuR::synapse0x3162640() {
   return (neuron0x313c0f0()*-0.0270813);
}

double NNfunction_ss_sLuR::synapse0x3162680() {
   return (neuron0x313c430()*-0.0643665);
}

double NNfunction_ss_sLuR::synapse0x31626c0() {
   return (neuron0x313c770()*0.0863981);
}

double NNfunction_ss_sLuR::synapse0x3162700() {
   return (neuron0x313cab0()*0.241343);
}

double NNfunction_ss_sLuR::synapse0x3162740() {
   return (neuron0x313cdf0()*0.0979191);
}

double NNfunction_ss_sLuR::synapse0x3162780() {
   return (neuron0x313d130()*0.602412);
}

double NNfunction_ss_sLuR::synapse0x31627c0() {
   return (neuron0x313d470()*0.0473885);
}

double NNfunction_ss_sLuR::synapse0x3162250() {
   return (neuron0x313d7b0()*-0.265447);
}

double NNfunction_ss_sLuR::synapse0x3162290() {
   return (neuron0x313dd10()*0.130291);
}

double NNfunction_ss_sLuR::synapse0x3162910() {
   return (neuron0x313df30()*0.340151);
}

double NNfunction_ss_sLuR::synapse0x3162950() {
   return (neuron0x313e270()*-0.00203388);
}

double NNfunction_ss_sLuR::synapse0x3162990() {
   return (neuron0x313e5b0()*-0.145422);
}

double NNfunction_ss_sLuR::synapse0x31629d0() {
   return (neuron0x313e8f0()*0.0800782);
}

double NNfunction_ss_sLuR::synapse0x3162a10() {
   return (neuron0x313ec30()*0.143132);
}

double NNfunction_ss_sLuR::synapse0x3162a50() {
   return (neuron0x313ef70()*0.293493);
}

double NNfunction_ss_sLuR::synapse0x3162dd0() {
   return (neuron0x313a3b0()*-0.00356495);
}

double NNfunction_ss_sLuR::synapse0x3162e10() {
   return (neuron0x313a6f0()*-0.0124612);
}

double NNfunction_ss_sLuR::synapse0x3162e50() {
   return (neuron0x313aa30()*-0.0812819);
}

double NNfunction_ss_sLuR::synapse0x3162e90() {
   return (neuron0x313ad70()*-0.0125062);
}

double NNfunction_ss_sLuR::synapse0x3162ed0() {
   return (neuron0x313b0b0()*-0.0675843);
}

double NNfunction_ss_sLuR::synapse0x3162f10() {
   return (neuron0x313b3f0()*-0.0880284);
}

double NNfunction_ss_sLuR::synapse0x3162f50() {
   return (neuron0x313b730()*-0.0126469);
}

double NNfunction_ss_sLuR::synapse0x3162f90() {
   return (neuron0x313ba70()*-0.0209974);
}

double NNfunction_ss_sLuR::synapse0x3162fd0() {
   return (neuron0x313bdb0()*-0.022538);
}

double NNfunction_ss_sLuR::synapse0x3163010() {
   return (neuron0x313c0f0()*-0.0099749);
}

double NNfunction_ss_sLuR::synapse0x3163050() {
   return (neuron0x313c430()*-0.0407454);
}

double NNfunction_ss_sLuR::synapse0x3163090() {
   return (neuron0x313c770()*-0.0104763);
}

double NNfunction_ss_sLuR::synapse0x31630d0() {
   return (neuron0x313cab0()*0.66812);
}

double NNfunction_ss_sLuR::synapse0x3163110() {
   return (neuron0x313cdf0()*0.00521787);
}

double NNfunction_ss_sLuR::synapse0x3163150() {
   return (neuron0x313d130()*0.285492);
}

double NNfunction_ss_sLuR::synapse0x3163190() {
   return (neuron0x313d470()*-0.0434338);
}

double NNfunction_ss_sLuR::synapse0x3162c20() {
   return (neuron0x313d7b0()*-0.00237285);
}

double NNfunction_ss_sLuR::synapse0x3162c60() {
   return (neuron0x313dd10()*-0.0267569);
}

double NNfunction_ss_sLuR::synapse0x31632e0() {
   return (neuron0x313df30()*-0.0136481);
}

double NNfunction_ss_sLuR::synapse0x3163320() {
   return (neuron0x313e270()*-0.0259463);
}

double NNfunction_ss_sLuR::synapse0x3163360() {
   return (neuron0x313e5b0()*0.00010287);
}

double NNfunction_ss_sLuR::synapse0x31633a0() {
   return (neuron0x313e8f0()*-0.00382282);
}

double NNfunction_ss_sLuR::synapse0x31633e0() {
   return (neuron0x313ec30()*-0.0271414);
}

double NNfunction_ss_sLuR::synapse0x3163420() {
   return (neuron0x313ef70()*-0.0319811);
}

double NNfunction_ss_sLuR::synapse0x31637a0() {
   return (neuron0x313a3b0()*-0.0755477);
}

double NNfunction_ss_sLuR::synapse0x31637e0() {
   return (neuron0x313a6f0()*-0.105655);
}

double NNfunction_ss_sLuR::synapse0x3163820() {
   return (neuron0x313aa30()*0.578454);
}

double NNfunction_ss_sLuR::synapse0x3163860() {
   return (neuron0x313ad70()*0.992444);
}

double NNfunction_ss_sLuR::synapse0x31638a0() {
   return (neuron0x313b0b0()*-0.042655);
}

double NNfunction_ss_sLuR::synapse0x31638e0() {
   return (neuron0x313b3f0()*-0.64542);
}

double NNfunction_ss_sLuR::synapse0x3163920() {
   return (neuron0x313b730()*-0.71282);
}

double NNfunction_ss_sLuR::synapse0x3163960() {
   return (neuron0x313ba70()*-0.698683);
}

double NNfunction_ss_sLuR::synapse0x31639a0() {
   return (neuron0x313bdb0()*-1.1603);
}

double NNfunction_ss_sLuR::synapse0x31639e0() {
   return (neuron0x313c0f0()*-0.172498);
}

double NNfunction_ss_sLuR::synapse0x3163a20() {
   return (neuron0x313c430()*0.259152);
}

double NNfunction_ss_sLuR::synapse0x3163a60() {
   return (neuron0x313c770()*-0.500439);
}

double NNfunction_ss_sLuR::synapse0x3163aa0() {
   return (neuron0x313cab0()*-0.224647);
}

double NNfunction_ss_sLuR::synapse0x3163ae0() {
   return (neuron0x313cdf0()*-0.320815);
}

double NNfunction_ss_sLuR::synapse0x3163b20() {
   return (neuron0x313d130()*0.879596);
}

double NNfunction_ss_sLuR::synapse0x3163b60() {
   return (neuron0x313d470()*0.101616);
}

double NNfunction_ss_sLuR::synapse0x31635f0() {
   return (neuron0x313d7b0()*0.0657037);
}

double NNfunction_ss_sLuR::synapse0x3163630() {
   return (neuron0x313dd10()*0.973062);
}

double NNfunction_ss_sLuR::synapse0x3163cb0() {
   return (neuron0x313df30()*0.504807);
}

double NNfunction_ss_sLuR::synapse0x3163cf0() {
   return (neuron0x313e270()*-0.0743085);
}

double NNfunction_ss_sLuR::synapse0x3163d30() {
   return (neuron0x313e5b0()*0.0540157);
}

double NNfunction_ss_sLuR::synapse0x3163d70() {
   return (neuron0x313e8f0()*0.120028);
}

double NNfunction_ss_sLuR::synapse0x3163db0() {
   return (neuron0x313ec30()*0.15241);
}

double NNfunction_ss_sLuR::synapse0x3163df0() {
   return (neuron0x313ef70()*0.00884812);
}

double NNfunction_ss_sLuR::synapse0x2f03d00() {
   return (neuron0x313f3e0()*-0.111932);
}

double NNfunction_ss_sLuR::synapse0x2f03d40() {
   return (neuron0x313fd30()*-0.201607);
}

double NNfunction_ss_sLuR::synapse0x31418a0() {
   return (neuron0x3140810()*0.273649);
}

double NNfunction_ss_sLuR::synapse0x31418e0() {
   return (neuron0x31402b0()*0.271585);
}

double NNfunction_ss_sLuR::synapse0x3142270() {
   return (neuron0x31415f0()*0.443635);
}

double NNfunction_ss_sLuR::synapse0x31422b0() {
   return (neuron0x3141fc0()*0.412234);
}

double NNfunction_ss_sLuR::synapse0x3143040() {
   return (neuron0x3142d90()*-0.177306);
}

double NNfunction_ss_sLuR::synapse0x3143080() {
   return (neuron0x3143760()*-0.180538);
}

double NNfunction_ss_sLuR::synapse0x3143a10() {
   return (neuron0x3144130()*-0.196945);
}

double NNfunction_ss_sLuR::synapse0x3143a50() {
   return (neuron0x3144c10()*-3.41623);
}

double NNfunction_ss_sLuR::synapse0x31443e0() {
   return (neuron0x31455e0()*0.105719);
}

double NNfunction_ss_sLuR::synapse0x3144420() {
   return (neuron0x31426c0()*0.172592);
}

double NNfunction_ss_sLuR::synapse0x3144ec0() {
   return (neuron0x3147190()*1.71638);
}

double NNfunction_ss_sLuR::synapse0x3144f00() {
   return (neuron0x3147b60()*-0.00802335);
}

double NNfunction_ss_sLuR::synapse0x3145890() {
   return (neuron0x3148530()*0.0869401);
}

double NNfunction_ss_sLuR::synapse0x31458d0() {
   return (neuron0x3148f00()*-0.0791261);
}

double NNfunction_ss_sLuR::synapse0x3142970() {
   return (neuron0x314ad10()*-0.705026);
}

double NNfunction_ss_sLuR::synapse0x31429b0() {
   return (neuron0x314aff0()*-0.116615);
}

double NNfunction_ss_sLuR::synapse0x3147440() {
   return (neuron0x314b9c0()*-0.294842);
}

double NNfunction_ss_sLuR::synapse0x3147480() {
   return (neuron0x314c390()*-0.343473);
}

double NNfunction_ss_sLuR::synapse0x3147e10() {
   return (neuron0x314cd60()*0.0578963);
}

double NNfunction_ss_sLuR::synapse0x3147e50() {
   return (neuron0x314d730()*-0.374971);
}

double NNfunction_ss_sLuR::synapse0x31487e0() {
   return (neuron0x3146280()*-0.411348);
}

double NNfunction_ss_sLuR::synapse0x3148820() {
   return (neuron0x3146c50()*0.821177);
}

double NNfunction_ss_sLuR::synapse0x31491b0() {
   return (neuron0x31504c0()*0.207208);
}

double NNfunction_ss_sLuR::synapse0x31491f0() {
   return (neuron0x3150e90()*0.176323);
}

double NNfunction_ss_sLuR::synapse0x313d350() {
   return (neuron0x3151860()*0.0343953);
}

double NNfunction_ss_sLuR::synapse0x313d390() {
   return (neuron0x3152230()*-0.815308);
}

double NNfunction_ss_sLuR::synapse0x314b2a0() {
   return (neuron0x3152c00()*-0.419835);
}

double NNfunction_ss_sLuR::synapse0x314b2e0() {
   return (neuron0x31535d0()*0.0238924);
}

double NNfunction_ss_sLuR::synapse0x314bc70() {
   return (neuron0x3153fa0()*0.429063);
}

double NNfunction_ss_sLuR::synapse0x314bcb0() {
   return (neuron0x3154970()*-0.755001);
}

double NNfunction_ss_sLuR::synapse0x314c640() {
   return (neuron0x314aa00()*0.239115);
}

double NNfunction_ss_sLuR::synapse0x314c680() {
   return (neuron0x3157550()*-0.342088);
}

double NNfunction_ss_sLuR::synapse0x314d010() {
   return (neuron0x3157f20()*-0.279497);
}

double NNfunction_ss_sLuR::synapse0x314d050() {
   return (neuron0x31588f0()*0.275025);
}

double NNfunction_ss_sLuR::synapse0x314d9e0() {
   return (neuron0x31592c0()*0.653223);
}

double NNfunction_ss_sLuR::synapse0x314da20() {
   return (neuron0x3159c90()*-0.0914611);
}

double NNfunction_ss_sLuR::synapse0x3146530() {
   return (neuron0x315a660()*-0.313461);
}

double NNfunction_ss_sLuR::synapse0x3146570() {
   return (neuron0x315b030()*-0.171671);
}

double NNfunction_ss_sLuR::synapse0x314fde0() {
   return (neuron0x315ba00()*-0.427205);
}

double NNfunction_ss_sLuR::synapse0x314fe20() {
   return (neuron0x315c5e0()*-3.72951);
}

double NNfunction_ss_sLuR::synapse0x3150770() {
   return (neuron0x315cfb0()*0.230933);
}

double NNfunction_ss_sLuR::synapse0x31507b0() {
   return (neuron0x314de30()*0.233186);
}

double NNfunction_ss_sLuR::synapse0x3151140() {
   return (neuron0x314e800()*-0.403182);
}

double NNfunction_ss_sLuR::synapse0x3151180() {
   return (neuron0x314f1d0()*-0.126031);
}

double NNfunction_ss_sLuR::synapse0x3151b10() {
   return (neuron0x3161810()*0.64293);
}

double NNfunction_ss_sLuR::synapse0x3151b50() {
   return (neuron0x31620c0()*0.469101);
}

double NNfunction_ss_sLuR::synapse0x31524e0() {
   return (neuron0x3162a90()*-1.12072);
}

double NNfunction_ss_sLuR::synapse0x3152520() {
   return (neuron0x3163460()*0.133067);
}

double NNfunction_ss_sLuR::synapse0x3154c20() {
   return (neuron0x313f3e0()*0.295523);
}

double NNfunction_ss_sLuR::synapse0x3154c60() {
   return (neuron0x313fd30()*-0.0434909);
}

double NNfunction_ss_sLuR::synapse0x314a1e0() {
   return (neuron0x3140810()*-0.0867641);
}

double NNfunction_ss_sLuR::synapse0x314a220() {
   return (neuron0x31402b0()*0.00110483);
}

double NNfunction_ss_sLuR::synapse0x3157800() {
   return (neuron0x31415f0()*-0.688163);
}

double NNfunction_ss_sLuR::synapse0x3157840() {
   return (neuron0x3141fc0()*-0.709173);
}

double NNfunction_ss_sLuR::synapse0x31581d0() {
   return (neuron0x3142d90()*-0.192678);
}

double NNfunction_ss_sLuR::synapse0x3158210() {
   return (neuron0x3143760()*0.354462);
}

double NNfunction_ss_sLuR::synapse0x3158ba0() {
   return (neuron0x3144130()*0.120934);
}

double NNfunction_ss_sLuR::synapse0x3158be0() {
   return (neuron0x3144c10()*-1.55904);
}

double NNfunction_ss_sLuR::synapse0x3159570() {
   return (neuron0x31455e0()*-0.529639);
}

double NNfunction_ss_sLuR::synapse0x31595b0() {
   return (neuron0x31426c0()*0.17382);
}

double NNfunction_ss_sLuR::synapse0x3159f40() {
   return (neuron0x3147190()*-0.920674);
}

double NNfunction_ss_sLuR::synapse0x3159f80() {
   return (neuron0x3147b60()*0.148125);
}

double NNfunction_ss_sLuR::synapse0x315a910() {
   return (neuron0x3148530()*-0.276259);
}

double NNfunction_ss_sLuR::synapse0x315a950() {
   return (neuron0x3148f00()*0.254524);
}

double NNfunction_ss_sLuR::synapse0x315b2e0() {
   return (neuron0x314ad10()*1.10151);
}

double NNfunction_ss_sLuR::synapse0x315b320() {
   return (neuron0x314aff0()*-0.515814);
}

double NNfunction_ss_sLuR::synapse0x315bcb0() {
   return (neuron0x314b9c0()*0.39247);
}

double NNfunction_ss_sLuR::synapse0x315bcf0() {
   return (neuron0x314c390()*0.236892);
}

double NNfunction_ss_sLuR::synapse0x315c890() {
   return (neuron0x314cd60()*0.209966);
}

double NNfunction_ss_sLuR::synapse0x315c8d0() {
   return (neuron0x314d730()*0.373226);
}

double NNfunction_ss_sLuR::synapse0x315d260() {
   return (neuron0x3146280()*-0.662913);
}

double NNfunction_ss_sLuR::synapse0x315d2a0() {
   return (neuron0x3146c50()*0.122262);
}

double NNfunction_ss_sLuR::synapse0x314e0e0() {
   return (neuron0x31504c0()*-0.42099);
}

double NNfunction_ss_sLuR::synapse0x314e120() {
   return (neuron0x3150e90()*0.118485);
}

double NNfunction_ss_sLuR::synapse0x314eab0() {
   return (neuron0x3151860()*-0.422145);
}

double NNfunction_ss_sLuR::synapse0x314eaf0() {
   return (neuron0x3152230()*0.0936442);
}

double NNfunction_ss_sLuR::synapse0x314f480() {
   return (neuron0x3152c00()*0.427679);
}

double NNfunction_ss_sLuR::synapse0x314f4c0() {
   return (neuron0x31535d0()*-0.0768486);
}

double NNfunction_ss_sLuR::synapse0x31619a0() {
   return (neuron0x3153fa0()*-0.355231);
}

double NNfunction_ss_sLuR::synapse0x31619e0() {
   return (neuron0x3154970()*0.551721);
}

double NNfunction_ss_sLuR::synapse0x3162370() {
   return (neuron0x314aa00()*-0.197644);
}

double NNfunction_ss_sLuR::synapse0x31623b0() {
   return (neuron0x3157550()*0.542584);
}

double NNfunction_ss_sLuR::synapse0x3162d40() {
   return (neuron0x3157f20()*0.15089);
}

double NNfunction_ss_sLuR::synapse0x3162d80() {
   return (neuron0x31588f0()*0.195519);
}

double NNfunction_ss_sLuR::synapse0x3163710() {
   return (neuron0x31592c0()*-1.24936);
}

double NNfunction_ss_sLuR::synapse0x3163750() {
   return (neuron0x3159c90()*-0.170121);
}

double NNfunction_ss_sLuR::synapse0x313f600() {
   return (neuron0x315a660()*0.116875);
}

double NNfunction_ss_sLuR::synapse0x313f640() {
   return (neuron0x315b030()*-0.0359618);
}

double NNfunction_ss_sLuR::synapse0x3152eb0() {
   return (neuron0x315ba00()*1.3408);
}

double NNfunction_ss_sLuR::synapse0x3152ef0() {
   return (neuron0x315c5e0()*-2.2967);
}

double NNfunction_ss_sLuR::synapse0x3163e30() {
   return (neuron0x315cfb0()*-0.60909);
}

double NNfunction_ss_sLuR::synapse0x3163e70() {
   return (neuron0x314de30()*0.0470511);
}

double NNfunction_ss_sLuR::synapse0x3163eb0() {
   return (neuron0x314e800()*0.138599);
}

double NNfunction_ss_sLuR::synapse0x3163ef0() {
   return (neuron0x314f1d0()*-0.265457);
}

double NNfunction_ss_sLuR::synapse0x316ada0() {
   return (neuron0x3161810()*1.13254);
}

double NNfunction_ss_sLuR::synapse0x316ade0() {
   return (neuron0x31620c0()*0.0172637);
}

double NNfunction_ss_sLuR::synapse0x316ae20() {
   return (neuron0x3162a90()*0.558059);
}

double NNfunction_ss_sLuR::synapse0x316ae60() {
   return (neuron0x3163460()*0.218621);
}

double NNfunction_ss_sLuR::synapse0x316b1e0() {
   return (neuron0x313f3e0()*1.27507);
}

double NNfunction_ss_sLuR::synapse0x316b220() {
   return (neuron0x313fd30()*-0.83542);
}

double NNfunction_ss_sLuR::synapse0x316b260() {
   return (neuron0x3140810()*0.670354);
}

double NNfunction_ss_sLuR::synapse0x316b2a0() {
   return (neuron0x31402b0()*-0.74405);
}

double NNfunction_ss_sLuR::synapse0x316b2e0() {
   return (neuron0x31415f0()*-0.595916);
}

double NNfunction_ss_sLuR::synapse0x316b320() {
   return (neuron0x3141fc0()*-0.0062922);
}

double NNfunction_ss_sLuR::synapse0x316b360() {
   return (neuron0x3142d90()*0.348189);
}

double NNfunction_ss_sLuR::synapse0x316b3a0() {
   return (neuron0x3143760()*1.09363);
}

double NNfunction_ss_sLuR::synapse0x316b3e0() {
   return (neuron0x3144130()*2.19395);
}

double NNfunction_ss_sLuR::synapse0x316b420() {
   return (neuron0x3144c10()*4.72586);
}

double NNfunction_ss_sLuR::synapse0x316b460() {
   return (neuron0x31455e0()*-1.64545);
}

double NNfunction_ss_sLuR::synapse0x316b4a0() {
   return (neuron0x31426c0()*0.222255);
}

double NNfunction_ss_sLuR::synapse0x316b4e0() {
   return (neuron0x3147190()*-2.90107);
}

double NNfunction_ss_sLuR::synapse0x316b520() {
   return (neuron0x3147b60()*-0.94728);
}

double NNfunction_ss_sLuR::synapse0x316b560() {
   return (neuron0x3148530()*-0.926677);
}

double NNfunction_ss_sLuR::synapse0x316b5a0() {
   return (neuron0x3148f00()*0.66953);
}

double NNfunction_ss_sLuR::synapse0x316b030() {
   return (neuron0x314ad10()*0.253736);
}

double NNfunction_ss_sLuR::synapse0x316b070() {
   return (neuron0x314aff0()*-2.6523);
}

double NNfunction_ss_sLuR::synapse0x316b6f0() {
   return (neuron0x314b9c0()*0.628869);
}

double NNfunction_ss_sLuR::synapse0x316b730() {
   return (neuron0x314c390()*0.198285);
}

double NNfunction_ss_sLuR::synapse0x316b770() {
   return (neuron0x314cd60()*0.463708);
}

double NNfunction_ss_sLuR::synapse0x316b7b0() {
   return (neuron0x314d730()*0.309029);
}

double NNfunction_ss_sLuR::synapse0x316b7f0() {
   return (neuron0x3146280()*-2.39264);
}

double NNfunction_ss_sLuR::synapse0x316b830() {
   return (neuron0x3146c50()*-0.583347);
}

double NNfunction_ss_sLuR::synapse0x316b870() {
   return (neuron0x31504c0()*-0.67316);
}

double NNfunction_ss_sLuR::synapse0x316b8b0() {
   return (neuron0x3150e90()*2.8602);
}

double NNfunction_ss_sLuR::synapse0x316b8f0() {
   return (neuron0x3151860()*-2.05113);
}

double NNfunction_ss_sLuR::synapse0x316b930() {
   return (neuron0x3152230()*0.741441);
}

double NNfunction_ss_sLuR::synapse0x316b970() {
   return (neuron0x3152c00()*0.179334);
}

double NNfunction_ss_sLuR::synapse0x316b9b0() {
   return (neuron0x31535d0()*-0.818096);
}

double NNfunction_ss_sLuR::synapse0x316b9f0() {
   return (neuron0x3153fa0()*0.214319);
}

double NNfunction_ss_sLuR::synapse0x316ba30() {
   return (neuron0x3154970()*-0.346801);
}

double NNfunction_ss_sLuR::synapse0x316b5e0() {
   return (neuron0x314aa00()*-0.627185);
}

double NNfunction_ss_sLuR::synapse0x316b620() {
   return (neuron0x3157550()*0.913837);
}

double NNfunction_ss_sLuR::synapse0x316b660() {
   return (neuron0x3157f20()*0.917991);
}

double NNfunction_ss_sLuR::synapse0x316b6a0() {
   return (neuron0x31588f0()*1.22466);
}

double NNfunction_ss_sLuR::synapse0x316bc80() {
   return (neuron0x31592c0()*-0.942226);
}

double NNfunction_ss_sLuR::synapse0x316bcc0() {
   return (neuron0x3159c90()*0.678475);
}

double NNfunction_ss_sLuR::synapse0x316bd00() {
   return (neuron0x315a660()*0.347662);
}

double NNfunction_ss_sLuR::synapse0x316bd40() {
   return (neuron0x315b030()*-1.0515);
}

double NNfunction_ss_sLuR::synapse0x316bd80() {
   return (neuron0x315ba00()*1.35161);
}

double NNfunction_ss_sLuR::synapse0x316bdc0() {
   return (neuron0x315c5e0()*3.31323);
}

double NNfunction_ss_sLuR::synapse0x316be00() {
   return (neuron0x315cfb0()*-1.59179);
}

double NNfunction_ss_sLuR::synapse0x316be40() {
   return (neuron0x314de30()*-0.410918);
}

double NNfunction_ss_sLuR::synapse0x316be80() {
   return (neuron0x314e800()*1.40738);
}

double NNfunction_ss_sLuR::synapse0x316bec0() {
   return (neuron0x314f1d0()*-1.55261);
}

double NNfunction_ss_sLuR::synapse0x316bf00() {
   return (neuron0x3161810()*3.56934);
}

double NNfunction_ss_sLuR::synapse0x316bf40() {
   return (neuron0x31620c0()*0.824392);
}

double NNfunction_ss_sLuR::synapse0x316bf80() {
   return (neuron0x3162a90()*1.67503);
}

double NNfunction_ss_sLuR::synapse0x316bfc0() {
   return (neuron0x3163460()*-0.382026);
}

double NNfunction_ss_sLuR::synapse0x316c340() {
   return (neuron0x313f3e0()*0.348715);
}

double NNfunction_ss_sLuR::synapse0x316c380() {
   return (neuron0x313fd30()*0.256661);
}

double NNfunction_ss_sLuR::synapse0x316c3c0() {
   return (neuron0x3140810()*-0.0577494);
}

double NNfunction_ss_sLuR::synapse0x316c400() {
   return (neuron0x31402b0()*-0.133436);
}

double NNfunction_ss_sLuR::synapse0x316c440() {
   return (neuron0x31415f0()*-0.181959);
}

double NNfunction_ss_sLuR::synapse0x316c480() {
   return (neuron0x3141fc0()*-0.426971);
}

double NNfunction_ss_sLuR::synapse0x316c4c0() {
   return (neuron0x3142d90()*0.436357);
}

double NNfunction_ss_sLuR::synapse0x316c500() {
   return (neuron0x3143760()*0.202712);
}

double NNfunction_ss_sLuR::synapse0x316c540() {
   return (neuron0x3144130()*-1.63146);
}

double NNfunction_ss_sLuR::synapse0x316c580() {
   return (neuron0x3144c10()*0.22099);
}

double NNfunction_ss_sLuR::synapse0x316c5c0() {
   return (neuron0x31455e0()*-0.250404);
}

double NNfunction_ss_sLuR::synapse0x316c600() {
   return (neuron0x31426c0()*-0.551946);
}

double NNfunction_ss_sLuR::synapse0x316c640() {
   return (neuron0x3147190()*-0.614803);
}

double NNfunction_ss_sLuR::synapse0x316c680() {
   return (neuron0x3147b60()*0.558962);
}

double NNfunction_ss_sLuR::synapse0x316c6c0() {
   return (neuron0x3148530()*-0.109578);
}

double NNfunction_ss_sLuR::synapse0x316c700() {
   return (neuron0x3148f00()*0.176957);
}

double NNfunction_ss_sLuR::synapse0x316c190() {
   return (neuron0x314ad10()*0.147484);
}

double NNfunction_ss_sLuR::synapse0x316c1d0() {
   return (neuron0x314aff0()*-0.140402);
}

double NNfunction_ss_sLuR::synapse0x316c850() {
   return (neuron0x314b9c0()*0.284821);
}

double NNfunction_ss_sLuR::synapse0x316c890() {
   return (neuron0x314c390()*0.169623);
}

double NNfunction_ss_sLuR::synapse0x316c8d0() {
   return (neuron0x314cd60()*-0.136268);
}

double NNfunction_ss_sLuR::synapse0x316c910() {
   return (neuron0x314d730()*0.228662);
}

double NNfunction_ss_sLuR::synapse0x316c950() {
   return (neuron0x3146280()*1.03042);
}

double NNfunction_ss_sLuR::synapse0x316c990() {
   return (neuron0x3146c50()*-1.11361);
}

double NNfunction_ss_sLuR::synapse0x316c9d0() {
   return (neuron0x31504c0()*-0.00309163);
}

double NNfunction_ss_sLuR::synapse0x316ca10() {
   return (neuron0x3150e90()*0.371455);
}

double NNfunction_ss_sLuR::synapse0x316ca50() {
   return (neuron0x3151860()*-0.40161);
}

double NNfunction_ss_sLuR::synapse0x316ca90() {
   return (neuron0x3152230()*1.07971);
}

double NNfunction_ss_sLuR::synapse0x316cad0() {
   return (neuron0x3152c00()*0.539881);
}

double NNfunction_ss_sLuR::synapse0x316cb10() {
   return (neuron0x31535d0()*-0.484928);
}

double NNfunction_ss_sLuR::synapse0x316cb50() {
   return (neuron0x3153fa0()*-0.23338);
}

double NNfunction_ss_sLuR::synapse0x316cb90() {
   return (neuron0x3154970()*0.454776);
}

double NNfunction_ss_sLuR::synapse0x316c740() {
   return (neuron0x314aa00()*-0.205735);
}

double NNfunction_ss_sLuR::synapse0x316c780() {
   return (neuron0x3157550()*0.175342);
}

double NNfunction_ss_sLuR::synapse0x316c7c0() {
   return (neuron0x3157f20()*-0.476762);
}

double NNfunction_ss_sLuR::synapse0x316c800() {
   return (neuron0x31588f0()*-0.195714);
}

double NNfunction_ss_sLuR::synapse0x316cde0() {
   return (neuron0x31592c0()*-0.460918);
}

double NNfunction_ss_sLuR::synapse0x316ce20() {
   return (neuron0x3159c90()*0.232555);
}

double NNfunction_ss_sLuR::synapse0x316ce60() {
   return (neuron0x315a660()*0.21523);
}

double NNfunction_ss_sLuR::synapse0x316cea0() {
   return (neuron0x315b030()*-0.147428);
}

double NNfunction_ss_sLuR::synapse0x316cee0() {
   return (neuron0x315ba00()*-0.637102);
}

double NNfunction_ss_sLuR::synapse0x316cf20() {
   return (neuron0x315c5e0()*0.684562);
}

double NNfunction_ss_sLuR::synapse0x316cf60() {
   return (neuron0x315cfb0()*-0.278179);
}

double NNfunction_ss_sLuR::synapse0x316cfa0() {
   return (neuron0x314de30()*-0.762948);
}

double NNfunction_ss_sLuR::synapse0x316cfe0() {
   return (neuron0x314e800()*-0.813496);
}

double NNfunction_ss_sLuR::synapse0x316d020() {
   return (neuron0x314f1d0()*-0.137424);
}

double NNfunction_ss_sLuR::synapse0x316d060() {
   return (neuron0x3161810()*-3.20091);
}

double NNfunction_ss_sLuR::synapse0x316d0a0() {
   return (neuron0x31620c0()*-0.654286);
}

double NNfunction_ss_sLuR::synapse0x316d0e0() {
   return (neuron0x3162a90()*-0.820445);
}

double NNfunction_ss_sLuR::synapse0x316d120() {
   return (neuron0x3163460()*-0.254879);
}

double NNfunction_ss_sLuR::synapse0x316d4a0() {
   return (neuron0x313f3e0()*0.228745);
}

double NNfunction_ss_sLuR::synapse0x316d4e0() {
   return (neuron0x313fd30()*0.0700572);
}

double NNfunction_ss_sLuR::synapse0x316d520() {
   return (neuron0x3140810()*-0.308435);
}

double NNfunction_ss_sLuR::synapse0x316d560() {
   return (neuron0x31402b0()*0.456399);
}

double NNfunction_ss_sLuR::synapse0x316d5a0() {
   return (neuron0x31415f0()*-0.775389);
}

double NNfunction_ss_sLuR::synapse0x316d5e0() {
   return (neuron0x3141fc0()*-0.581479);
}

double NNfunction_ss_sLuR::synapse0x316d620() {
   return (neuron0x3142d90()*0.00188371);
}

double NNfunction_ss_sLuR::synapse0x316d660() {
   return (neuron0x3143760()*0.367175);
}

double NNfunction_ss_sLuR::synapse0x316d6a0() {
   return (neuron0x3144130()*0.391817);
}

double NNfunction_ss_sLuR::synapse0x316d6e0() {
   return (neuron0x3144c10()*-1.02209);
}

double NNfunction_ss_sLuR::synapse0x316d720() {
   return (neuron0x31455e0()*-0.341698);
}

double NNfunction_ss_sLuR::synapse0x316d760() {
   return (neuron0x31426c0()*0.0787977);
}

double NNfunction_ss_sLuR::synapse0x316d7a0() {
   return (neuron0x3147190()*-0.0783693);
}

double NNfunction_ss_sLuR::synapse0x316d7e0() {
   return (neuron0x3147b60()*0.15459);
}

double NNfunction_ss_sLuR::synapse0x316d820() {
   return (neuron0x3148530()*-0.201921);
}

double NNfunction_ss_sLuR::synapse0x316d860() {
   return (neuron0x3148f00()*0.224842);
}

double NNfunction_ss_sLuR::synapse0x316d2f0() {
   return (neuron0x314ad10()*-0.0467896);
}

double NNfunction_ss_sLuR::synapse0x316d330() {
   return (neuron0x314aff0()*-0.156173);
}

double NNfunction_ss_sLuR::synapse0x316d9b0() {
   return (neuron0x314b9c0()*0.429833);
}

double NNfunction_ss_sLuR::synapse0x316d9f0() {
   return (neuron0x314c390()*0.494921);
}

double NNfunction_ss_sLuR::synapse0x316da30() {
   return (neuron0x314cd60()*0.103789);
}

double NNfunction_ss_sLuR::synapse0x316da70() {
   return (neuron0x314d730()*0.537566);
}

double NNfunction_ss_sLuR::synapse0x316dab0() {
   return (neuron0x3146280()*-0.338119);
}

double NNfunction_ss_sLuR::synapse0x316daf0() {
   return (neuron0x3146c50()*-0.374416);
}

double NNfunction_ss_sLuR::synapse0x316db30() {
   return (neuron0x31504c0()*-0.198253);
}

double NNfunction_ss_sLuR::synapse0x316db70() {
   return (neuron0x3150e90()*0.0506791);
}

double NNfunction_ss_sLuR::synapse0x316dbb0() {
   return (neuron0x3151860()*-0.174453);
}

double NNfunction_ss_sLuR::synapse0x316dbf0() {
   return (neuron0x3152230()*0.492337);
}

double NNfunction_ss_sLuR::synapse0x316dc30() {
   return (neuron0x3152c00()*0.521164);
}

double NNfunction_ss_sLuR::synapse0x316dc70() {
   return (neuron0x31535d0()*0.00871556);
}

double NNfunction_ss_sLuR::synapse0x316dcb0() {
   return (neuron0x3153fa0()*-0.517665);
}

double NNfunction_ss_sLuR::synapse0x316dcf0() {
   return (neuron0x3154970()*0.90653);
}

double NNfunction_ss_sLuR::synapse0x316d8a0() {
   return (neuron0x314aa00()*-0.354871);
}

double NNfunction_ss_sLuR::synapse0x316d8e0() {
   return (neuron0x3157550()*0.64678);
}

double NNfunction_ss_sLuR::synapse0x316d920() {
   return (neuron0x3157f20()*0.277611);
}

double NNfunction_ss_sLuR::synapse0x316d960() {
   return (neuron0x31588f0()*-0.0410405);
}

double NNfunction_ss_sLuR::synapse0x316df40() {
   return (neuron0x31592c0()*-1.07398);
}

double NNfunction_ss_sLuR::synapse0x316df80() {
   return (neuron0x3159c90()*0.0233343);
}

double NNfunction_ss_sLuR::synapse0x316dfc0() {
   return (neuron0x315a660()*0.406259);
}

double NNfunction_ss_sLuR::synapse0x316e000() {
   return (neuron0x315b030()*0.18786);
}

double NNfunction_ss_sLuR::synapse0x316e040() {
   return (neuron0x315ba00()*-0.848842);
}

double NNfunction_ss_sLuR::synapse0x316e080() {
   return (neuron0x315c5e0()*-0.899264);
}

double NNfunction_ss_sLuR::synapse0x316e0c0() {
   return (neuron0x315cfb0()*-0.560779);
}

double NNfunction_ss_sLuR::synapse0x316e100() {
   return (neuron0x314de30()*-0.0246415);
}

double NNfunction_ss_sLuR::synapse0x316e140() {
   return (neuron0x314e800()*-0.605154);
}

double NNfunction_ss_sLuR::synapse0x316e180() {
   return (neuron0x314f1d0()*0.281645);
}

double NNfunction_ss_sLuR::synapse0x316e1c0() {
   return (neuron0x3161810()*0.0776852);
}

double NNfunction_ss_sLuR::synapse0x316e200() {
   return (neuron0x31620c0()*-0.255973);
}

double NNfunction_ss_sLuR::synapse0x316e240() {
   return (neuron0x3162a90()*-0.506841);
}

double NNfunction_ss_sLuR::synapse0x316e280() {
   return (neuron0x3163460()*-0.00513329);
}

double NNfunction_ss_sLuR::synapse0x316e4e0() {
   return (neuron0x316a660()*5.84964);
}

double NNfunction_ss_sLuR::synapse0x316e520() {
   return (neuron0x316aa00()*-3.23811);
}

double NNfunction_ss_sLuR::synapse0x316e560() {
   return (neuron0x316aea0()*-7.84532);
}

double NNfunction_ss_sLuR::synapse0x316e5a0() {
   return (neuron0x316c000()*6.49525);
}

double NNfunction_ss_sLuR::synapse0x316e5e0() {
   return (neuron0x316d160()*3.5269);
}

