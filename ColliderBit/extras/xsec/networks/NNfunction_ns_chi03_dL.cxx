#include "NNfunction_ns_chi03_dL.h"
#include <cmath>

double NNfunction_ns_chi03_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7645)/15.1663;
   input1 = (in1 - 0.854986)/1074.91;
   input2 = (in2 - 487.448)/536.916;
   input3 = (in3 - 51.0803)/760.491;
   input4 = (in4 - 909.679)/883.877;
   input5 = (in5 - 794.116)/884.199;
   input6 = (in6 - 792.377)/878.151;
   input7 = (in7 - 796.973)/863.48;
   input8 = (in8 - 816.425)/912.863;
   input9 = (in9 - 805.957)/900.242;
   input10 = (in10 - 840.166)/901.441;
   input11 = (in11 - 313.422)/257.625;
   input12 = (in12 - 680.403)/792.026;
   input13 = (in13 - 469.937)/458.601;
   input14 = (in14 - 667.88)/733.585;
   input15 = (in15 - 675.953)/741.694;
   input16 = (in16 - 490.335)/508.916;
   input17 = (in17 - 708.423)/824.345;
   input18 = (in18 - 708.674)/826.763;
   input19 = (in19 - 715.414)/790.774;
   input20 = (in20 - -47.1229)/450.95;
   input21 = (in21 - -65.504)/1050.86;
   input22 = (in22 - 3.98388)/1084.29;
   input23 = (in23 - -49.8546)/252.948;
   switch(index) {
     case 0:
         return neuron0x293d9a0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.7645)/15.1663;
   input1 = (input[1] - 0.854986)/1074.91;
   input2 = (input[2] - 487.448)/536.916;
   input3 = (input[3] - 51.0803)/760.491;
   input4 = (input[4] - 909.679)/883.877;
   input5 = (input[5] - 794.116)/884.199;
   input6 = (input[6] - 792.377)/878.151;
   input7 = (input[7] - 796.973)/863.48;
   input8 = (input[8] - 816.425)/912.863;
   input9 = (input[9] - 805.957)/900.242;
   input10 = (input[10] - 840.166)/901.441;
   input11 = (input[11] - 313.422)/257.625;
   input12 = (input[12] - 680.403)/792.026;
   input13 = (input[13] - 469.937)/458.601;
   input14 = (input[14] - 667.88)/733.585;
   input15 = (input[15] - 675.953)/741.694;
   input16 = (input[16] - 490.335)/508.916;
   input17 = (input[17] - 708.423)/824.345;
   input18 = (input[18] - 708.674)/826.763;
   input19 = (input[19] - 715.414)/790.774;
   input20 = (input[20] - -47.1229)/450.95;
   input21 = (input[21] - -65.504)/1050.86;
   input22 = (input[22] - 3.98388)/1084.29;
   input23 = (input[23] - -49.8546)/252.948;
   switch(index) {
     case 0:
         return neuron0x293d9a0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_dL::neuron0x2908a10() {
   return input0;
}

double NNfunction_ns_chi03_dL::neuron0x2908cc0() {
   return input1;
}

double NNfunction_ns_chi03_dL::neuron0x2909000() {
   return input2;
}

double NNfunction_ns_chi03_dL::neuron0x2909340() {
   return input3;
}

double NNfunction_ns_chi03_dL::neuron0x2909680() {
   return input4;
}

double NNfunction_ns_chi03_dL::neuron0x29099c0() {
   return input5;
}

double NNfunction_ns_chi03_dL::neuron0x2909d00() {
   return input6;
}

double NNfunction_ns_chi03_dL::neuron0x290a040() {
   return input7;
}

double NNfunction_ns_chi03_dL::neuron0x290a380() {
   return input8;
}

double NNfunction_ns_chi03_dL::neuron0x290a6c0() {
   return input9;
}

double NNfunction_ns_chi03_dL::neuron0x290aa00() {
   return input10;
}

double NNfunction_ns_chi03_dL::neuron0x290ad40() {
   return input11;
}

double NNfunction_ns_chi03_dL::neuron0x290b080() {
   return input12;
}

double NNfunction_ns_chi03_dL::neuron0x290b3c0() {
   return input13;
}

double NNfunction_ns_chi03_dL::neuron0x290b700() {
   return input14;
}

double NNfunction_ns_chi03_dL::neuron0x290ba40() {
   return input15;
}

double NNfunction_ns_chi03_dL::neuron0x290bd80() {
   return input16;
}

double NNfunction_ns_chi03_dL::neuron0x290c2e0() {
   return input17;
}

double NNfunction_ns_chi03_dL::neuron0x290c620() {
   return input18;
}

double NNfunction_ns_chi03_dL::neuron0x290c960() {
   return input19;
}

double NNfunction_ns_chi03_dL::neuron0x290cca0() {
   return input20;
}

double NNfunction_ns_chi03_dL::neuron0x290cfe0() {
   return input21;
}

double NNfunction_ns_chi03_dL::neuron0x290d320() {
   return input22;
}

double NNfunction_ns_chi03_dL::neuron0x290d660() {
   return input23;
}

double NNfunction_ns_chi03_dL::input0x290dad0() {
   double input = -0.200415;
   input += synapse0x290de10();
   input += synapse0x290de50();
   input += synapse0x290de90();
   input += synapse0x290ded0();
   input += synapse0x290df10();
   input += synapse0x290df50();
   input += synapse0x290df90();
   input += synapse0x290dfd0();
   input += synapse0x290e010();
   input += synapse0x290e050();
   input += synapse0x290e090();
   input += synapse0x290e0d0();
   input += synapse0x290e110();
   input += synapse0x290e150();
   input += synapse0x290e190();
   input += synapse0x290e1d0();
   input += synapse0x290dc60();
   input += synapse0x290dca0();
   input += synapse0x26c4b70();
   input += synapse0x26c4bb0();
   input += synapse0x290e210();
   input += synapse0x290e250();
   input += synapse0x290e290();
   input += synapse0x290e2d0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x290dad0() {
   double input = input0x290dad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x290e310() {
   double input = 2.63464;
   input += synapse0x290e650();
   input += synapse0x290e690();
   input += synapse0x290e6d0();
   input += synapse0x290e710();
   input += synapse0x290e750();
   input += synapse0x290e790();
   input += synapse0x290e7d0();
   input += synapse0x290e810();
   input += synapse0x290e850();
   input += synapse0x26c49c0();
   input += synapse0x26c4a00();
   input += synapse0x26c4a40();
   input += synapse0x26c4a80();
   input += synapse0x290eaa0();
   input += synapse0x290eae0();
   input += synapse0x290eb20();
   input += synapse0x290e4a0();
   input += synapse0x290e4e0();
   input += synapse0x290ec70();
   input += synapse0x290ecb0();
   input += synapse0x290ecf0();
   input += synapse0x290ed30();
   input += synapse0x290ed70();
   input += synapse0x290edb0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x290e310() {
   double input = input0x290e310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x290edf0() {
   double input = -8.61502;
   input += synapse0x290f130();
   input += synapse0x290f170();
   input += synapse0x290f1b0();
   input += synapse0x290f1f0();
   input += synapse0x290f230();
   input += synapse0x290f270();
   input += synapse0x290f2b0();
   input += synapse0x290f2f0();
   input += synapse0x290f330();
   input += synapse0x290f370();
   input += synapse0x290f3b0();
   input += synapse0x290f3f0();
   input += synapse0x290f430();
   input += synapse0x290f470();
   input += synapse0x290f4b0();
   input += synapse0x290f4f0();
   input += synapse0x290ef80();
   input += synapse0x290efc0();
   input += synapse0x26d2ab0();
   input += synapse0x26d2af0();
   input += synapse0x2911420();
   input += synapse0x2911460();
   input += synapse0x2908750();
   input += synapse0x2908790();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x290edf0() {
   double input = input0x290edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x26d3210() {
   double input = 0.642233;
   input += synapse0x26d33a0();
   input += synapse0x290e9b0();
   input += synapse0x290e9f0();
   input += synapse0x290ea30();
   input += synapse0x290f640();
   input += synapse0x290f680();
   input += synapse0x290f6c0();
   input += synapse0x290f700();
   input += synapse0x290f740();
   input += synapse0x290f780();
   input += synapse0x290f7c0();
   input += synapse0x290f800();
   input += synapse0x290f840();
   input += synapse0x290f880();
   input += synapse0x290f8c0();
   input += synapse0x290f900();
   input += synapse0x29087d0();
   input += synapse0x2908810();
   input += synapse0x290fa50();
   input += synapse0x290fa90();
   input += synapse0x290fad0();
   input += synapse0x290fb10();
   input += synapse0x290fb50();
   input += synapse0x290fb90();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x26d3210() {
   double input = input0x26d3210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x290fbd0() {
   double input = -0.856303;
   input += synapse0x290ff10();
   input += synapse0x290ff50();
   input += synapse0x290ff90();
   input += synapse0x290ffd0();
   input += synapse0x2910010();
   input += synapse0x2910050();
   input += synapse0x2910090();
   input += synapse0x29100d0();
   input += synapse0x2910110();
   input += synapse0x2910150();
   input += synapse0x2910190();
   input += synapse0x29101d0();
   input += synapse0x2910210();
   input += synapse0x2910250();
   input += synapse0x2910290();
   input += synapse0x29102d0();
   input += synapse0x2910420();
   input += synapse0x290fd60();
   input += synapse0x290fda0();
   input += synapse0x2911560();
   input += synapse0x29115a0();
   input += synapse0x29115e0();
   input += synapse0x2911620();
   input += synapse0x2911660();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x290fbd0() {
   double input = input0x290fbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x29116a0() {
   double input = -1.508;
   input += synapse0x29119e0();
   input += synapse0x2911a20();
   input += synapse0x2911a60();
   input += synapse0x2911aa0();
   input += synapse0x2911ae0();
   input += synapse0x2911b20();
   input += synapse0x2911b60();
   input += synapse0x2911ba0();
   input += synapse0x2911be0();
   input += synapse0x26d2e00();
   input += synapse0x26d2e40();
   input += synapse0x26d2e80();
   input += synapse0x26d2ec0();
   input += synapse0x26d2f00();
   input += synapse0x26d2f40();
   input += synapse0x26d2f80();
   input += synapse0x2911830();
   input += synapse0x2911870();
   input += synapse0x26d30d0();
   input += synapse0x26d3110();
   input += synapse0x26d3150();
   input += synapse0x26d3190();
   input += synapse0x26d31d0();
   input += synapse0x2912430();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x29116a0() {
   double input = input0x29116a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2912470() {
   double input = 0.73529;
   input += synapse0x29127b0();
   input += synapse0x29127f0();
   input += synapse0x2912830();
   input += synapse0x2912870();
   input += synapse0x29128b0();
   input += synapse0x29128f0();
   input += synapse0x2912930();
   input += synapse0x2912970();
   input += synapse0x29129b0();
   input += synapse0x29129f0();
   input += synapse0x2912a30();
   input += synapse0x2912a70();
   input += synapse0x2912ab0();
   input += synapse0x2912af0();
   input += synapse0x2912b30();
   input += synapse0x2912b70();
   input += synapse0x2912600();
   input += synapse0x2912640();
   input += synapse0x2912cc0();
   input += synapse0x2912d00();
   input += synapse0x2912d40();
   input += synapse0x2912d80();
   input += synapse0x2912dc0();
   input += synapse0x2912e00();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2912470() {
   double input = input0x2912470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2912e40() {
   double input = 0.481405;
   input += synapse0x2913180();
   input += synapse0x29131c0();
   input += synapse0x2913200();
   input += synapse0x2913240();
   input += synapse0x2913280();
   input += synapse0x29132c0();
   input += synapse0x2913300();
   input += synapse0x2913340();
   input += synapse0x2913380();
   input += synapse0x29133c0();
   input += synapse0x2913400();
   input += synapse0x2913440();
   input += synapse0x2913480();
   input += synapse0x29134c0();
   input += synapse0x2913500();
   input += synapse0x2913540();
   input += synapse0x2912fd0();
   input += synapse0x2913010();
   input += synapse0x2913690();
   input += synapse0x29136d0();
   input += synapse0x2913710();
   input += synapse0x2913750();
   input += synapse0x2913790();
   input += synapse0x29137d0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2912e40() {
   double input = input0x2912e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2913810() {
   double input = 1.55637;
   input += synapse0x290c1d0();
   input += synapse0x290c210();
   input += synapse0x290c250();
   input += synapse0x290c290();
   input += synapse0x2913d60();
   input += synapse0x2913da0();
   input += synapse0x2913de0();
   input += synapse0x2913e20();
   input += synapse0x2913e60();
   input += synapse0x2913ea0();
   input += synapse0x2913ee0();
   input += synapse0x2913f20();
   input += synapse0x2913f60();
   input += synapse0x2913fa0();
   input += synapse0x2913fe0();
   input += synapse0x2914020();
   input += synapse0x29139a0();
   input += synapse0x29139e0();
   input += synapse0x2914170();
   input += synapse0x29141b0();
   input += synapse0x29141f0();
   input += synapse0x2914230();
   input += synapse0x2914270();
   input += synapse0x29142b0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2913810() {
   double input = input0x2913810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x29142f0() {
   double input = -0.5815;
   input += synapse0x2914630();
   input += synapse0x2914670();
   input += synapse0x29146b0();
   input += synapse0x29146f0();
   input += synapse0x2914730();
   input += synapse0x2914770();
   input += synapse0x29147b0();
   input += synapse0x29147f0();
   input += synapse0x2914830();
   input += synapse0x2914870();
   input += synapse0x29148b0();
   input += synapse0x29148f0();
   input += synapse0x2914930();
   input += synapse0x2914970();
   input += synapse0x29149b0();
   input += synapse0x29149f0();
   input += synapse0x2914480();
   input += synapse0x29144c0();
   input += synapse0x2914b40();
   input += synapse0x2914b80();
   input += synapse0x2914bc0();
   input += synapse0x2914c00();
   input += synapse0x2914c40();
   input += synapse0x2914c80();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x29142f0() {
   double input = input0x29142f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2914cc0() {
   double input = 4.49681;
   input += synapse0x2915000();
   input += synapse0x2915040();
   input += synapse0x2915080();
   input += synapse0x29150c0();
   input += synapse0x2915100();
   input += synapse0x2915140();
   input += synapse0x2915180();
   input += synapse0x29151c0();
   input += synapse0x2915200();
   input += synapse0x2915240();
   input += synapse0x2915280();
   input += synapse0x29152c0();
   input += synapse0x2915300();
   input += synapse0x2915340();
   input += synapse0x2915380();
   input += synapse0x29153c0();
   input += synapse0x2914e50();
   input += synapse0x2914e90();
   input += synapse0x2911c20();
   input += synapse0x2911c60();
   input += synapse0x2911ca0();
   input += synapse0x2911ce0();
   input += synapse0x2911d20();
   input += synapse0x2911d60();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2914cc0() {
   double input = input0x2914cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2911da0() {
   double input = -0.387225;
   input += synapse0x29120e0();
   input += synapse0x2912120();
   input += synapse0x2912160();
   input += synapse0x29121a0();
   input += synapse0x29121e0();
   input += synapse0x2912220();
   input += synapse0x2912260();
   input += synapse0x29122a0();
   input += synapse0x29122e0();
   input += synapse0x2912320();
   input += synapse0x2912360();
   input += synapse0x29123a0();
   input += synapse0x29123e0();
   input += synapse0x2916520();
   input += synapse0x2916560();
   input += synapse0x29165a0();
   input += synapse0x2911f30();
   input += synapse0x2911f70();
   input += synapse0x29166f0();
   input += synapse0x2916730();
   input += synapse0x2916770();
   input += synapse0x29167b0();
   input += synapse0x29167f0();
   input += synapse0x2916830();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2911da0() {
   double input = input0x2911da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2916870() {
   double input = -0.898978;
   input += synapse0x2916bb0();
   input += synapse0x2916bf0();
   input += synapse0x2916c30();
   input += synapse0x2916c70();
   input += synapse0x2916cb0();
   input += synapse0x2916cf0();
   input += synapse0x2916d30();
   input += synapse0x2916d70();
   input += synapse0x2916db0();
   input += synapse0x2916df0();
   input += synapse0x2916e30();
   input += synapse0x2916e70();
   input += synapse0x2916eb0();
   input += synapse0x2916ef0();
   input += synapse0x2916f30();
   input += synapse0x2916f70();
   input += synapse0x2916a00();
   input += synapse0x2916a40();
   input += synapse0x29170c0();
   input += synapse0x2917100();
   input += synapse0x2917140();
   input += synapse0x2917180();
   input += synapse0x29171c0();
   input += synapse0x2917200();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2916870() {
   double input = input0x2916870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2917240() {
   double input = -1.25788;
   input += synapse0x2917580();
   input += synapse0x29175c0();
   input += synapse0x2917600();
   input += synapse0x2917640();
   input += synapse0x2917680();
   input += synapse0x29176c0();
   input += synapse0x2917700();
   input += synapse0x2917740();
   input += synapse0x2917780();
   input += synapse0x29177c0();
   input += synapse0x2917800();
   input += synapse0x2917840();
   input += synapse0x2917880();
   input += synapse0x29178c0();
   input += synapse0x2917900();
   input += synapse0x2917940();
   input += synapse0x29173d0();
   input += synapse0x2917410();
   input += synapse0x2917a90();
   input += synapse0x2917ad0();
   input += synapse0x2917b10();
   input += synapse0x2917b50();
   input += synapse0x2917b90();
   input += synapse0x2917bd0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2917240() {
   double input = input0x2917240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2917c10() {
   double input = -0.212992;
   input += synapse0x2917f50();
   input += synapse0x2917f90();
   input += synapse0x2917fd0();
   input += synapse0x2918010();
   input += synapse0x2918050();
   input += synapse0x2918090();
   input += synapse0x29180d0();
   input += synapse0x2918110();
   input += synapse0x2918150();
   input += synapse0x2918190();
   input += synapse0x29181d0();
   input += synapse0x2918210();
   input += synapse0x2918250();
   input += synapse0x2918290();
   input += synapse0x29182d0();
   input += synapse0x2918310();
   input += synapse0x2917da0();
   input += synapse0x2917de0();
   input += synapse0x2918460();
   input += synapse0x29184a0();
   input += synapse0x29184e0();
   input += synapse0x2918520();
   input += synapse0x2918560();
   input += synapse0x29185a0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2917c10() {
   double input = input0x2917c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x29185e0() {
   double input = 0.224245;
   input += synapse0x2918920();
   input += synapse0x2908ba0();
   input += synapse0x2908be0();
   input += synapse0x2908ee0();
   input += synapse0x2908f20();
   input += synapse0x2909220();
   input += synapse0x2909260();
   input += synapse0x2909560();
   input += synapse0x29095a0();
   input += synapse0x29098a0();
   input += synapse0x29098e0();
   input += synapse0x2909be0();
   input += synapse0x2909c20();
   input += synapse0x2909f20();
   input += synapse0x2909f60();
   input += synapse0x290a260();
   input += synapse0x290a2a0();
   input += synapse0x290a5a0();
   input += synapse0x290a5e0();
   input += synapse0x290a8e0();
   input += synapse0x290a920();
   input += synapse0x290ac20();
   input += synapse0x290ac60();
   input += synapse0x290af60();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x29185e0() {
   double input = input0x29185e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291a3f0() {
   double input = -0.468201;
   input += synapse0x290afa0();
   input += synapse0x290bc60();
   input += synapse0x290bca0();
   input += synapse0x2918770();
   input += synapse0x29187b0();
   input += synapse0x290bfa0();
   input += synapse0x290bfe0();
   input += synapse0x290c500();
   input += synapse0x290c540();
   input += synapse0x290c840();
   input += synapse0x290c880();
   input += synapse0x290cb80();
   input += synapse0x290cbc0();
   input += synapse0x290cec0();
   input += synapse0x290cf00();
   input += synapse0x290d200();
   input += synapse0x290d240();
   input += synapse0x290d540();
   input += synapse0x290d580();
   input += synapse0x290d880();
   input += synapse0x290d8c0();
   input += synapse0x290b2a0();
   input += synapse0x290b2e0();
   input += synapse0x291a690();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291a3f0() {
   double input = input0x291a3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291a6d0() {
   double input = -0.343892;
   input += synapse0x291aa10();
   input += synapse0x291aa50();
   input += synapse0x291aa90();
   input += synapse0x291aad0();
   input += synapse0x291ab10();
   input += synapse0x291ab50();
   input += synapse0x291ab90();
   input += synapse0x291abd0();
   input += synapse0x291ac10();
   input += synapse0x291ac50();
   input += synapse0x291ac90();
   input += synapse0x291acd0();
   input += synapse0x291ad10();
   input += synapse0x291ad50();
   input += synapse0x291ad90();
   input += synapse0x291add0();
   input += synapse0x291a860();
   input += synapse0x291a8a0();
   input += synapse0x291af20();
   input += synapse0x291af60();
   input += synapse0x291afa0();
   input += synapse0x291afe0();
   input += synapse0x291b020();
   input += synapse0x291b060();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291a6d0() {
   double input = input0x291a6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291b0a0() {
   double input = 0.529073;
   input += synapse0x291b3e0();
   input += synapse0x291b420();
   input += synapse0x291b460();
   input += synapse0x291b4a0();
   input += synapse0x291b4e0();
   input += synapse0x291b520();
   input += synapse0x291b560();
   input += synapse0x291b5a0();
   input += synapse0x291b5e0();
   input += synapse0x291b620();
   input += synapse0x291b660();
   input += synapse0x291b6a0();
   input += synapse0x291b6e0();
   input += synapse0x291b720();
   input += synapse0x291b760();
   input += synapse0x291b7a0();
   input += synapse0x291b230();
   input += synapse0x291b270();
   input += synapse0x291b8f0();
   input += synapse0x291b930();
   input += synapse0x291b970();
   input += synapse0x291b9b0();
   input += synapse0x291b9f0();
   input += synapse0x291ba30();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291b0a0() {
   double input = input0x291b0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291ba70() {
   double input = 1.01198;
   input += synapse0x291bdb0();
   input += synapse0x291bdf0();
   input += synapse0x291be30();
   input += synapse0x291be70();
   input += synapse0x291beb0();
   input += synapse0x291bef0();
   input += synapse0x291bf30();
   input += synapse0x291bf70();
   input += synapse0x291bfb0();
   input += synapse0x291bff0();
   input += synapse0x291c030();
   input += synapse0x291c070();
   input += synapse0x291c0b0();
   input += synapse0x291c0f0();
   input += synapse0x291c130();
   input += synapse0x291c170();
   input += synapse0x291bc00();
   input += synapse0x291bc40();
   input += synapse0x291c2c0();
   input += synapse0x291c300();
   input += synapse0x291c340();
   input += synapse0x291c380();
   input += synapse0x291c3c0();
   input += synapse0x291c400();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291ba70() {
   double input = input0x291ba70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291c440() {
   double input = -0.873741;
   input += synapse0x291c780();
   input += synapse0x291c7c0();
   input += synapse0x291c800();
   input += synapse0x291c840();
   input += synapse0x291c880();
   input += synapse0x291c8c0();
   input += synapse0x291c900();
   input += synapse0x291c940();
   input += synapse0x291c980();
   input += synapse0x291c9c0();
   input += synapse0x291ca00();
   input += synapse0x291ca40();
   input += synapse0x291ca80();
   input += synapse0x291cac0();
   input += synapse0x291cb00();
   input += synapse0x291cb40();
   input += synapse0x291c5d0();
   input += synapse0x291c610();
   input += synapse0x291cc90();
   input += synapse0x291ccd0();
   input += synapse0x291cd10();
   input += synapse0x291cd50();
   input += synapse0x291cd90();
   input += synapse0x291cdd0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291c440() {
   double input = input0x291c440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291ce10() {
   double input = -0.115524;
   input += synapse0x291d150();
   input += synapse0x291d190();
   input += synapse0x291d1d0();
   input += synapse0x291d210();
   input += synapse0x291d250();
   input += synapse0x291d290();
   input += synapse0x291d2d0();
   input += synapse0x291d310();
   input += synapse0x291d350();
   input += synapse0x2915510();
   input += synapse0x2915550();
   input += synapse0x2915590();
   input += synapse0x29155d0();
   input += synapse0x2915610();
   input += synapse0x2915650();
   input += synapse0x2915690();
   input += synapse0x291cfa0();
   input += synapse0x291cfe0();
   input += synapse0x29157e0();
   input += synapse0x2915820();
   input += synapse0x2915860();
   input += synapse0x29158a0();
   input += synapse0x29158e0();
   input += synapse0x2915920();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291ce10() {
   double input = input0x291ce10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2915960() {
   double input = 0.694709;
   input += synapse0x2915ca0();
   input += synapse0x2915ce0();
   input += synapse0x2915d20();
   input += synapse0x2915d60();
   input += synapse0x2915da0();
   input += synapse0x2915de0();
   input += synapse0x2915e20();
   input += synapse0x2915e60();
   input += synapse0x2915ea0();
   input += synapse0x2915ee0();
   input += synapse0x2915f20();
   input += synapse0x2915f60();
   input += synapse0x2915fa0();
   input += synapse0x2915fe0();
   input += synapse0x2916020();
   input += synapse0x2916060();
   input += synapse0x2915af0();
   input += synapse0x2915b30();
   input += synapse0x29161b0();
   input += synapse0x29161f0();
   input += synapse0x2916230();
   input += synapse0x2916270();
   input += synapse0x29162b0();
   input += synapse0x29162f0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2915960() {
   double input = input0x2915960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2916330() {
   double input = -0.0812062;
   input += synapse0x29164c0();
   input += synapse0x291f550();
   input += synapse0x291f590();
   input += synapse0x291f5d0();
   input += synapse0x291f610();
   input += synapse0x291f650();
   input += synapse0x291f690();
   input += synapse0x291f6d0();
   input += synapse0x291f710();
   input += synapse0x291f750();
   input += synapse0x291f790();
   input += synapse0x291f7d0();
   input += synapse0x291f810();
   input += synapse0x291f850();
   input += synapse0x291f890();
   input += synapse0x291f8d0();
   input += synapse0x291f3a0();
   input += synapse0x291f3e0();
   input += synapse0x291fa20();
   input += synapse0x291fa60();
   input += synapse0x291faa0();
   input += synapse0x291fae0();
   input += synapse0x291fb20();
   input += synapse0x291fb60();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2916330() {
   double input = input0x2916330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291fba0() {
   double input = -1.92907;
   input += synapse0x291fee0();
   input += synapse0x291ff20();
   input += synapse0x291ff60();
   input += synapse0x291ffa0();
   input += synapse0x291ffe0();
   input += synapse0x2920020();
   input += synapse0x2920060();
   input += synapse0x29200a0();
   input += synapse0x29200e0();
   input += synapse0x2920120();
   input += synapse0x2920160();
   input += synapse0x29201a0();
   input += synapse0x29201e0();
   input += synapse0x2920220();
   input += synapse0x2920260();
   input += synapse0x29202a0();
   input += synapse0x291fd30();
   input += synapse0x291fd70();
   input += synapse0x29203f0();
   input += synapse0x2920430();
   input += synapse0x2920470();
   input += synapse0x29204b0();
   input += synapse0x29204f0();
   input += synapse0x2920530();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291fba0() {
   double input = input0x291fba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2920570() {
   double input = 0.631458;
   input += synapse0x29208b0();
   input += synapse0x29208f0();
   input += synapse0x2920930();
   input += synapse0x2920970();
   input += synapse0x29209b0();
   input += synapse0x29209f0();
   input += synapse0x2920a30();
   input += synapse0x2920a70();
   input += synapse0x2920ab0();
   input += synapse0x2920af0();
   input += synapse0x2920b30();
   input += synapse0x2920b70();
   input += synapse0x2920bb0();
   input += synapse0x2920bf0();
   input += synapse0x2920c30();
   input += synapse0x2920c70();
   input += synapse0x2920700();
   input += synapse0x2920740();
   input += synapse0x2920dc0();
   input += synapse0x2920e00();
   input += synapse0x2920e40();
   input += synapse0x2920e80();
   input += synapse0x2920ec0();
   input += synapse0x2920f00();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2920570() {
   double input = input0x2920570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2920f40() {
   double input = -4.26688;
   input += synapse0x2921280();
   input += synapse0x29212c0();
   input += synapse0x2921300();
   input += synapse0x2921340();
   input += synapse0x2921380();
   input += synapse0x29213c0();
   input += synapse0x2921400();
   input += synapse0x2921440();
   input += synapse0x2921480();
   input += synapse0x29214c0();
   input += synapse0x2921500();
   input += synapse0x2921540();
   input += synapse0x2921580();
   input += synapse0x29215c0();
   input += synapse0x2921600();
   input += synapse0x2921640();
   input += synapse0x29210d0();
   input += synapse0x2921110();
   input += synapse0x2921790();
   input += synapse0x29217d0();
   input += synapse0x2921810();
   input += synapse0x2921850();
   input += synapse0x2921890();
   input += synapse0x29218d0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2920f40() {
   double input = input0x2920f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2921910() {
   double input = -1.01043;
   input += synapse0x2921c50();
   input += synapse0x2921c90();
   input += synapse0x2921cd0();
   input += synapse0x2921d10();
   input += synapse0x2921d50();
   input += synapse0x2921d90();
   input += synapse0x2921dd0();
   input += synapse0x2921e10();
   input += synapse0x2921e50();
   input += synapse0x2921e90();
   input += synapse0x2921ed0();
   input += synapse0x2921f10();
   input += synapse0x2921f50();
   input += synapse0x2921f90();
   input += synapse0x2921fd0();
   input += synapse0x2922010();
   input += synapse0x2921aa0();
   input += synapse0x2921ae0();
   input += synapse0x2922160();
   input += synapse0x29221a0();
   input += synapse0x29221e0();
   input += synapse0x2922220();
   input += synapse0x2922260();
   input += synapse0x29222a0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2921910() {
   double input = input0x2921910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x29222e0() {
   double input = -1.02652;
   input += synapse0x2922620();
   input += synapse0x2922660();
   input += synapse0x29226a0();
   input += synapse0x29226e0();
   input += synapse0x2922720();
   input += synapse0x2922760();
   input += synapse0x29227a0();
   input += synapse0x29227e0();
   input += synapse0x2922820();
   input += synapse0x2922860();
   input += synapse0x29228a0();
   input += synapse0x29228e0();
   input += synapse0x2922920();
   input += synapse0x2922960();
   input += synapse0x29229a0();
   input += synapse0x29229e0();
   input += synapse0x2922470();
   input += synapse0x29224b0();
   input += synapse0x2922b30();
   input += synapse0x2922b70();
   input += synapse0x2922bb0();
   input += synapse0x2922bf0();
   input += synapse0x2922c30();
   input += synapse0x2922c70();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x29222e0() {
   double input = input0x29222e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2922cb0() {
   double input = 0.180279;
   input += synapse0x2922ff0();
   input += synapse0x2923030();
   input += synapse0x2923070();
   input += synapse0x29230b0();
   input += synapse0x29230f0();
   input += synapse0x2923130();
   input += synapse0x2923170();
   input += synapse0x29231b0();
   input += synapse0x29231f0();
   input += synapse0x2923230();
   input += synapse0x2923270();
   input += synapse0x29232b0();
   input += synapse0x29232f0();
   input += synapse0x2923330();
   input += synapse0x2923370();
   input += synapse0x29233b0();
   input += synapse0x2922e40();
   input += synapse0x2922e80();
   input += synapse0x2923500();
   input += synapse0x2923540();
   input += synapse0x2923580();
   input += synapse0x29235c0();
   input += synapse0x2923600();
   input += synapse0x2923640();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2922cb0() {
   double input = input0x2922cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2923680() {
   double input = -0.777469;
   input += synapse0x29239c0();
   input += synapse0x2923a00();
   input += synapse0x2923a40();
   input += synapse0x2923a80();
   input += synapse0x2923ac0();
   input += synapse0x2923b00();
   input += synapse0x2923b40();
   input += synapse0x2923b80();
   input += synapse0x2923bc0();
   input += synapse0x2923c00();
   input += synapse0x2923c40();
   input += synapse0x2923c80();
   input += synapse0x2923cc0();
   input += synapse0x2923d00();
   input += synapse0x2923d40();
   input += synapse0x2923d80();
   input += synapse0x2923810();
   input += synapse0x2923850();
   input += synapse0x2923ed0();
   input += synapse0x2923f10();
   input += synapse0x2923f50();
   input += synapse0x2923f90();
   input += synapse0x2923fd0();
   input += synapse0x2924010();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2923680() {
   double input = input0x2923680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2924050() {
   double input = -0.360681;
   input += synapse0x2924390();
   input += synapse0x2918960();
   input += synapse0x29189a0();
   input += synapse0x29189e0();
   input += synapse0x2918c30();
   input += synapse0x2918c70();
   input += synapse0x2918cb0();
   input += synapse0x2918f00();
   input += synapse0x2918f40();
   input += synapse0x2919190();
   input += synapse0x29191d0();
   input += synapse0x2919210();
   input += synapse0x2919460();
   input += synapse0x29194a0();
   input += synapse0x29196f0();
   input += synapse0x2919730();
   input += synapse0x29241e0();
   input += synapse0x2924220();
   input += synapse0x2919880();
   input += synapse0x2919d90();
   input += synapse0x2919dd0();
   input += synapse0x2919e10();
   input += synapse0x291a060();
   input += synapse0x291a0a0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2924050() {
   double input = input0x2924050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291a0e0() {
   double input = -7.38679;
   input += synapse0x2919950();
   input += synapse0x2919990();
   input += synapse0x29199d0();
   input += synapse0x2919a10();
   input += synapse0x291a390();
   input += synapse0x29266e0();
   input += synapse0x2926720();
   input += synapse0x2926760();
   input += synapse0x29267a0();
   input += synapse0x29267e0();
   input += synapse0x2926820();
   input += synapse0x2926860();
   input += synapse0x29268a0();
   input += synapse0x29268e0();
   input += synapse0x2926920();
   input += synapse0x2926960();
   input += synapse0x291a270();
   input += synapse0x291a2b0();
   input += synapse0x2926ab0();
   input += synapse0x2926af0();
   input += synapse0x2926b30();
   input += synapse0x2926b70();
   input += synapse0x2926bb0();
   input += synapse0x2926bf0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291a0e0() {
   double input = input0x291a0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2926c30() {
   double input = 2.636;
   input += synapse0x2926f70();
   input += synapse0x2926fb0();
   input += synapse0x2926ff0();
   input += synapse0x2927030();
   input += synapse0x2927070();
   input += synapse0x29270b0();
   input += synapse0x29270f0();
   input += synapse0x2927130();
   input += synapse0x2927170();
   input += synapse0x29271b0();
   input += synapse0x29271f0();
   input += synapse0x2927230();
   input += synapse0x2927270();
   input += synapse0x29272b0();
   input += synapse0x29272f0();
   input += synapse0x2927330();
   input += synapse0x2926dc0();
   input += synapse0x2926e00();
   input += synapse0x2927480();
   input += synapse0x29274c0();
   input += synapse0x2927500();
   input += synapse0x2927540();
   input += synapse0x2927580();
   input += synapse0x29275c0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2926c30() {
   double input = input0x2926c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2927600() {
   double input = 1.24427;
   input += synapse0x2927940();
   input += synapse0x2927980();
   input += synapse0x29279c0();
   input += synapse0x2927a00();
   input += synapse0x2927a40();
   input += synapse0x2927a80();
   input += synapse0x2927ac0();
   input += synapse0x2927b00();
   input += synapse0x2927b40();
   input += synapse0x2927b80();
   input += synapse0x2927bc0();
   input += synapse0x2927c00();
   input += synapse0x2927c40();
   input += synapse0x2927c80();
   input += synapse0x2927cc0();
   input += synapse0x2927d00();
   input += synapse0x2927790();
   input += synapse0x29277d0();
   input += synapse0x2927e50();
   input += synapse0x2927e90();
   input += synapse0x2927ed0();
   input += synapse0x2927f10();
   input += synapse0x2927f50();
   input += synapse0x2927f90();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2927600() {
   double input = input0x2927600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2927fd0() {
   double input = -0.515109;
   input += synapse0x2928310();
   input += synapse0x2928350();
   input += synapse0x2928390();
   input += synapse0x29283d0();
   input += synapse0x2928410();
   input += synapse0x2928450();
   input += synapse0x2928490();
   input += synapse0x29284d0();
   input += synapse0x2928510();
   input += synapse0x2928550();
   input += synapse0x2928590();
   input += synapse0x29285d0();
   input += synapse0x2928610();
   input += synapse0x2928650();
   input += synapse0x2928690();
   input += synapse0x29286d0();
   input += synapse0x2928160();
   input += synapse0x29281a0();
   input += synapse0x2928820();
   input += synapse0x2928860();
   input += synapse0x29288a0();
   input += synapse0x29288e0();
   input += synapse0x2928920();
   input += synapse0x2928960();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2927fd0() {
   double input = input0x2927fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x29289a0() {
   double input = -0.86731;
   input += synapse0x2928ce0();
   input += synapse0x2928d20();
   input += synapse0x2928d60();
   input += synapse0x2928da0();
   input += synapse0x2928de0();
   input += synapse0x2928e20();
   input += synapse0x2928e60();
   input += synapse0x2928ea0();
   input += synapse0x2928ee0();
   input += synapse0x2928f20();
   input += synapse0x2928f60();
   input += synapse0x2928fa0();
   input += synapse0x2928fe0();
   input += synapse0x2929020();
   input += synapse0x2929060();
   input += synapse0x29290a0();
   input += synapse0x2928b30();
   input += synapse0x2928b70();
   input += synapse0x29291f0();
   input += synapse0x2929230();
   input += synapse0x2929270();
   input += synapse0x29292b0();
   input += synapse0x29292f0();
   input += synapse0x2929330();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x29289a0() {
   double input = input0x29289a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2929370() {
   double input = -2.09315;
   input += synapse0x29296b0();
   input += synapse0x29296f0();
   input += synapse0x2929730();
   input += synapse0x2929770();
   input += synapse0x29297b0();
   input += synapse0x29297f0();
   input += synapse0x2929830();
   input += synapse0x2929870();
   input += synapse0x29298b0();
   input += synapse0x29298f0();
   input += synapse0x2929930();
   input += synapse0x2929970();
   input += synapse0x29299b0();
   input += synapse0x29299f0();
   input += synapse0x2929a30();
   input += synapse0x2929a70();
   input += synapse0x2929500();
   input += synapse0x2929540();
   input += synapse0x2929bc0();
   input += synapse0x2929c00();
   input += synapse0x2929c40();
   input += synapse0x2929c80();
   input += synapse0x2929cc0();
   input += synapse0x2929d00();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2929370() {
   double input = input0x2929370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2929d40() {
   double input = -2.03532;
   input += synapse0x292a080();
   input += synapse0x292a0c0();
   input += synapse0x292a100();
   input += synapse0x292a140();
   input += synapse0x292a180();
   input += synapse0x292a1c0();
   input += synapse0x292a200();
   input += synapse0x292a240();
   input += synapse0x292a280();
   input += synapse0x292a2c0();
   input += synapse0x292a300();
   input += synapse0x292a340();
   input += synapse0x292a380();
   input += synapse0x292a3c0();
   input += synapse0x292a400();
   input += synapse0x292a440();
   input += synapse0x2929ed0();
   input += synapse0x2929f10();
   input += synapse0x292a590();
   input += synapse0x292a5d0();
   input += synapse0x292a610();
   input += synapse0x292a650();
   input += synapse0x292a690();
   input += synapse0x292a6d0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2929d40() {
   double input = input0x2929d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x292a710() {
   double input = -6.6758;
   input += synapse0x292aa50();
   input += synapse0x292aa90();
   input += synapse0x292aad0();
   input += synapse0x292ab10();
   input += synapse0x292ab50();
   input += synapse0x292ab90();
   input += synapse0x292abd0();
   input += synapse0x292ac10();
   input += synapse0x292ac50();
   input += synapse0x292ac90();
   input += synapse0x292acd0();
   input += synapse0x292ad10();
   input += synapse0x292ad50();
   input += synapse0x292ad90();
   input += synapse0x292add0();
   input += synapse0x292ae10();
   input += synapse0x292a8a0();
   input += synapse0x292a8e0();
   input += synapse0x292af60();
   input += synapse0x292afa0();
   input += synapse0x292afe0();
   input += synapse0x292b020();
   input += synapse0x292b060();
   input += synapse0x292b0a0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x292a710() {
   double input = input0x292a710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x292b0e0() {
   double input = 3.40337;
   input += synapse0x2913b50();
   input += synapse0x2913b90();
   input += synapse0x2913bd0();
   input += synapse0x2913c10();
   input += synapse0x2913c50();
   input += synapse0x2913c90();
   input += synapse0x2913cd0();
   input += synapse0x2913d10();
   input += synapse0x292b830();
   input += synapse0x292b870();
   input += synapse0x292b8b0();
   input += synapse0x292b8f0();
   input += synapse0x292b930();
   input += synapse0x292b970();
   input += synapse0x292b9b0();
   input += synapse0x292b9f0();
   input += synapse0x292b270();
   input += synapse0x292b2b0();
   input += synapse0x292bb40();
   input += synapse0x292bb80();
   input += synapse0x292bbc0();
   input += synapse0x292bc00();
   input += synapse0x292bc40();
   input += synapse0x292bc80();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x292b0e0() {
   double input = input0x292b0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x292bcc0() {
   double input = -0.151938;
   input += synapse0x292c000();
   input += synapse0x292c040();
   input += synapse0x292c080();
   input += synapse0x292c0c0();
   input += synapse0x292c100();
   input += synapse0x292c140();
   input += synapse0x292c180();
   input += synapse0x292c1c0();
   input += synapse0x292c200();
   input += synapse0x292c240();
   input += synapse0x292c280();
   input += synapse0x292c2c0();
   input += synapse0x292c300();
   input += synapse0x292c340();
   input += synapse0x292c380();
   input += synapse0x292c3c0();
   input += synapse0x292be50();
   input += synapse0x292be90();
   input += synapse0x292c510();
   input += synapse0x292c550();
   input += synapse0x292c590();
   input += synapse0x292c5d0();
   input += synapse0x292c610();
   input += synapse0x292c650();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x292bcc0() {
   double input = input0x292bcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x292c690() {
   double input = 0.238112;
   input += synapse0x292c9d0();
   input += synapse0x292ca10();
   input += synapse0x292ca50();
   input += synapse0x292ca90();
   input += synapse0x292cad0();
   input += synapse0x292cb10();
   input += synapse0x292cb50();
   input += synapse0x292cb90();
   input += synapse0x292cbd0();
   input += synapse0x292cc10();
   input += synapse0x292cc50();
   input += synapse0x292cc90();
   input += synapse0x292ccd0();
   input += synapse0x292cd10();
   input += synapse0x292cd50();
   input += synapse0x292cd90();
   input += synapse0x292c820();
   input += synapse0x292c860();
   input += synapse0x291d390();
   input += synapse0x291d3d0();
   input += synapse0x291d410();
   input += synapse0x291d450();
   input += synapse0x291d490();
   input += synapse0x291d4d0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x292c690() {
   double input = input0x292c690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291d510() {
   double input = 0.459517;
   input += synapse0x291d850();
   input += synapse0x291d890();
   input += synapse0x291d8d0();
   input += synapse0x291d910();
   input += synapse0x291d950();
   input += synapse0x291d990();
   input += synapse0x291d9d0();
   input += synapse0x291da10();
   input += synapse0x291da50();
   input += synapse0x291da90();
   input += synapse0x291dad0();
   input += synapse0x291db10();
   input += synapse0x291db50();
   input += synapse0x291db90();
   input += synapse0x291dbd0();
   input += synapse0x291dc10();
   input += synapse0x291d6a0();
   input += synapse0x291d6e0();
   input += synapse0x291dd60();
   input += synapse0x291dda0();
   input += synapse0x291dde0();
   input += synapse0x291de20();
   input += synapse0x291de60();
   input += synapse0x291dea0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291d510() {
   double input = input0x291d510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291dee0() {
   double input = -0.466328;
   input += synapse0x291e220();
   input += synapse0x291e260();
   input += synapse0x291e2a0();
   input += synapse0x291e2e0();
   input += synapse0x291e320();
   input += synapse0x291e360();
   input += synapse0x291e3a0();
   input += synapse0x291e3e0();
   input += synapse0x291e420();
   input += synapse0x291e460();
   input += synapse0x291e4a0();
   input += synapse0x291e4e0();
   input += synapse0x291e520();
   input += synapse0x291e560();
   input += synapse0x291e5a0();
   input += synapse0x291e5e0();
   input += synapse0x291e070();
   input += synapse0x291e0b0();
   input += synapse0x291e730();
   input += synapse0x291e770();
   input += synapse0x291e7b0();
   input += synapse0x291e7f0();
   input += synapse0x291e830();
   input += synapse0x291e870();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291dee0() {
   double input = input0x291dee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x291e8b0() {
   double input = 3.98683;
   input += synapse0x291ebf0();
   input += synapse0x291ec30();
   input += synapse0x291ec70();
   input += synapse0x291ecb0();
   input += synapse0x291ecf0();
   input += synapse0x291ed30();
   input += synapse0x291ed70();
   input += synapse0x291edb0();
   input += synapse0x291edf0();
   input += synapse0x291ee30();
   input += synapse0x291ee70();
   input += synapse0x291eeb0();
   input += synapse0x291eef0();
   input += synapse0x291ef30();
   input += synapse0x291ef70();
   input += synapse0x291efb0();
   input += synapse0x291ea40();
   input += synapse0x291ea80();
   input += synapse0x291f100();
   input += synapse0x291f140();
   input += synapse0x291f180();
   input += synapse0x291f1c0();
   input += synapse0x291f200();
   input += synapse0x291f240();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x291e8b0() {
   double input = input0x291e8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2930ef0() {
   double input = 3.99812;
   input += synapse0x2931110();
   input += synapse0x2931150();
   input += synapse0x2931190();
   input += synapse0x29311d0();
   input += synapse0x2931210();
   input += synapse0x2931250();
   input += synapse0x2931290();
   input += synapse0x29312d0();
   input += synapse0x2931310();
   input += synapse0x2931350();
   input += synapse0x2931390();
   input += synapse0x29313d0();
   input += synapse0x2931410();
   input += synapse0x2931450();
   input += synapse0x2931490();
   input += synapse0x29314d0();
   input += synapse0x291f280();
   input += synapse0x291f2c0();
   input += synapse0x2931620();
   input += synapse0x2931660();
   input += synapse0x29316a0();
   input += synapse0x29316e0();
   input += synapse0x2931720();
   input += synapse0x2931760();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2930ef0() {
   double input = input0x2930ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x29317a0() {
   double input = 0.108076;
   input += synapse0x2931ae0();
   input += synapse0x2931b20();
   input += synapse0x2931b60();
   input += synapse0x2931ba0();
   input += synapse0x2931be0();
   input += synapse0x2931c20();
   input += synapse0x2931c60();
   input += synapse0x2931ca0();
   input += synapse0x2931ce0();
   input += synapse0x2931d20();
   input += synapse0x2931d60();
   input += synapse0x2931da0();
   input += synapse0x2931de0();
   input += synapse0x2931e20();
   input += synapse0x2931e60();
   input += synapse0x2931ea0();
   input += synapse0x2931930();
   input += synapse0x2931970();
   input += synapse0x2931ff0();
   input += synapse0x2932030();
   input += synapse0x2932070();
   input += synapse0x29320b0();
   input += synapse0x29320f0();
   input += synapse0x2932130();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x29317a0() {
   double input = input0x29317a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2932170() {
   double input = 0.257696;
   input += synapse0x29324b0();
   input += synapse0x29324f0();
   input += synapse0x2932530();
   input += synapse0x2932570();
   input += synapse0x29325b0();
   input += synapse0x29325f0();
   input += synapse0x2932630();
   input += synapse0x2932670();
   input += synapse0x29326b0();
   input += synapse0x29326f0();
   input += synapse0x2932730();
   input += synapse0x2932770();
   input += synapse0x29327b0();
   input += synapse0x29327f0();
   input += synapse0x2932830();
   input += synapse0x2932870();
   input += synapse0x2932300();
   input += synapse0x2932340();
   input += synapse0x29329c0();
   input += synapse0x2932a00();
   input += synapse0x2932a40();
   input += synapse0x2932a80();
   input += synapse0x2932ac0();
   input += synapse0x2932b00();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2932170() {
   double input = input0x2932170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2932b40() {
   double input = 0.33382;
   input += synapse0x2932e80();
   input += synapse0x2932ec0();
   input += synapse0x2932f00();
   input += synapse0x2932f40();
   input += synapse0x2932f80();
   input += synapse0x2932fc0();
   input += synapse0x2933000();
   input += synapse0x2933040();
   input += synapse0x2933080();
   input += synapse0x29330c0();
   input += synapse0x2933100();
   input += synapse0x2933140();
   input += synapse0x2933180();
   input += synapse0x29331c0();
   input += synapse0x2933200();
   input += synapse0x2933240();
   input += synapse0x2932cd0();
   input += synapse0x2932d10();
   input += synapse0x2933390();
   input += synapse0x29333d0();
   input += synapse0x2933410();
   input += synapse0x2933450();
   input += synapse0x2933490();
   input += synapse0x29334d0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2932b40() {
   double input = input0x2932b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x2939d40() {
   double input = 0.984728;
   input += synapse0x290e920();
   input += synapse0x290e960();
   input += synapse0x290fe80();
   input += synapse0x290fec0();
   input += synapse0x2911950();
   input += synapse0x2911990();
   input += synapse0x2912720();
   input += synapse0x2912760();
   input += synapse0x29130f0();
   input += synapse0x2913130();
   input += synapse0x2913ac0();
   input += synapse0x2913b00();
   input += synapse0x29145a0();
   input += synapse0x29145e0();
   input += synapse0x2914f70();
   input += synapse0x2914fb0();
   input += synapse0x2912050();
   input += synapse0x2912090();
   input += synapse0x2916b20();
   input += synapse0x2916b60();
   input += synapse0x29174f0();
   input += synapse0x2917530();
   input += synapse0x2917ec0();
   input += synapse0x2917f00();
   input += synapse0x2918890();
   input += synapse0x29188d0();
   input += synapse0x290b920();
   input += synapse0x290b960();
   input += synapse0x291a980();
   input += synapse0x291a9c0();
   input += synapse0x291b350();
   input += synapse0x291b390();
   input += synapse0x291bd20();
   input += synapse0x291bd60();
   input += synapse0x291c6f0();
   input += synapse0x291c730();
   input += synapse0x291d0c0();
   input += synapse0x291d100();
   input += synapse0x2915c10();
   input += synapse0x2915c50();
   input += synapse0x291f4c0();
   input += synapse0x291f500();
   input += synapse0x291fe50();
   input += synapse0x291fe90();
   input += synapse0x2920820();
   input += synapse0x2920860();
   input += synapse0x29211f0();
   input += synapse0x2921230();
   input += synapse0x2921bc0();
   input += synapse0x2921c00();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x2939d40() {
   double input = input0x2939d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x293a0e0() {
   double input = -1.97596;
   input += synapse0x2924300();
   input += synapse0x2924340();
   input += synapse0x29198c0();
   input += synapse0x2919900();
   input += synapse0x2926ee0();
   input += synapse0x2926f20();
   input += synapse0x29278b0();
   input += synapse0x29278f0();
   input += synapse0x2928280();
   input += synapse0x29282c0();
   input += synapse0x2928c50();
   input += synapse0x2928c90();
   input += synapse0x2929620();
   input += synapse0x2929660();
   input += synapse0x2929ff0();
   input += synapse0x292a030();
   input += synapse0x292a9c0();
   input += synapse0x292aa00();
   input += synapse0x292b390();
   input += synapse0x292b3d0();
   input += synapse0x292bf70();
   input += synapse0x292bfb0();
   input += synapse0x292c940();
   input += synapse0x292c980();
   input += synapse0x291d7c0();
   input += synapse0x291d800();
   input += synapse0x291e190();
   input += synapse0x291e1d0();
   input += synapse0x291eb60();
   input += synapse0x291eba0();
   input += synapse0x2931080();
   input += synapse0x29310c0();
   input += synapse0x2931a50();
   input += synapse0x2931a90();
   input += synapse0x2932420();
   input += synapse0x2932460();
   input += synapse0x2932df0();
   input += synapse0x2932e30();
   input += synapse0x290dd80();
   input += synapse0x290ddc0();
   input += synapse0x2922590();
   input += synapse0x29225d0();
   input += synapse0x2933510();
   input += synapse0x2933550();
   input += synapse0x2933590();
   input += synapse0x29335d0();
   input += synapse0x293a480();
   input += synapse0x293a4c0();
   input += synapse0x293a500();
   input += synapse0x293a540();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x293a0e0() {
   double input = input0x293a0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x293a580() {
   double input = -0.418715;
   input += synapse0x293a8c0();
   input += synapse0x293a900();
   input += synapse0x293a940();
   input += synapse0x293a980();
   input += synapse0x293a9c0();
   input += synapse0x293aa00();
   input += synapse0x293aa40();
   input += synapse0x293aa80();
   input += synapse0x293aac0();
   input += synapse0x293ab00();
   input += synapse0x293ab40();
   input += synapse0x293ab80();
   input += synapse0x293abc0();
   input += synapse0x293ac00();
   input += synapse0x293ac40();
   input += synapse0x293ac80();
   input += synapse0x293a710();
   input += synapse0x293a750();
   input += synapse0x293add0();
   input += synapse0x293ae10();
   input += synapse0x293ae50();
   input += synapse0x293ae90();
   input += synapse0x293aed0();
   input += synapse0x293af10();
   input += synapse0x293af50();
   input += synapse0x293af90();
   input += synapse0x293afd0();
   input += synapse0x293b010();
   input += synapse0x293b050();
   input += synapse0x293b090();
   input += synapse0x293b0d0();
   input += synapse0x293b110();
   input += synapse0x293acc0();
   input += synapse0x293ad00();
   input += synapse0x293ad40();
   input += synapse0x293ad80();
   input += synapse0x293b360();
   input += synapse0x293b3a0();
   input += synapse0x293b3e0();
   input += synapse0x293b420();
   input += synapse0x293b460();
   input += synapse0x293b4a0();
   input += synapse0x293b4e0();
   input += synapse0x293b520();
   input += synapse0x293b560();
   input += synapse0x293b5a0();
   input += synapse0x293b5e0();
   input += synapse0x293b620();
   input += synapse0x293b660();
   input += synapse0x293b6a0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x293a580() {
   double input = input0x293a580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x293b6e0() {
   double input = 0.79937;
   input += synapse0x293ba20();
   input += synapse0x293ba60();
   input += synapse0x293baa0();
   input += synapse0x293bae0();
   input += synapse0x293bb20();
   input += synapse0x293bb60();
   input += synapse0x293bba0();
   input += synapse0x293bbe0();
   input += synapse0x293bc20();
   input += synapse0x293bc60();
   input += synapse0x293bca0();
   input += synapse0x293bce0();
   input += synapse0x293bd20();
   input += synapse0x293bd60();
   input += synapse0x293bda0();
   input += synapse0x293bde0();
   input += synapse0x293b870();
   input += synapse0x293b8b0();
   input += synapse0x293bf30();
   input += synapse0x293bf70();
   input += synapse0x293bfb0();
   input += synapse0x293bff0();
   input += synapse0x293c030();
   input += synapse0x293c070();
   input += synapse0x293c0b0();
   input += synapse0x293c0f0();
   input += synapse0x293c130();
   input += synapse0x293c170();
   input += synapse0x293c1b0();
   input += synapse0x293c1f0();
   input += synapse0x293c230();
   input += synapse0x293c270();
   input += synapse0x293be20();
   input += synapse0x293be60();
   input += synapse0x293bea0();
   input += synapse0x293bee0();
   input += synapse0x293c4c0();
   input += synapse0x293c500();
   input += synapse0x293c540();
   input += synapse0x293c580();
   input += synapse0x293c5c0();
   input += synapse0x293c600();
   input += synapse0x293c640();
   input += synapse0x293c680();
   input += synapse0x293c6c0();
   input += synapse0x293c700();
   input += synapse0x293c740();
   input += synapse0x293c780();
   input += synapse0x293c7c0();
   input += synapse0x293c800();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x293b6e0() {
   double input = input0x293b6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x293c840() {
   double input = 1.39408;
   input += synapse0x293cb80();
   input += synapse0x293cbc0();
   input += synapse0x293cc00();
   input += synapse0x293cc40();
   input += synapse0x293cc80();
   input += synapse0x293ccc0();
   input += synapse0x293cd00();
   input += synapse0x293cd40();
   input += synapse0x293cd80();
   input += synapse0x293cdc0();
   input += synapse0x293ce00();
   input += synapse0x293ce40();
   input += synapse0x293ce80();
   input += synapse0x293cec0();
   input += synapse0x293cf00();
   input += synapse0x293cf40();
   input += synapse0x293c9d0();
   input += synapse0x293ca10();
   input += synapse0x293d090();
   input += synapse0x293d0d0();
   input += synapse0x293d110();
   input += synapse0x293d150();
   input += synapse0x293d190();
   input += synapse0x293d1d0();
   input += synapse0x293d210();
   input += synapse0x293d250();
   input += synapse0x293d290();
   input += synapse0x293d2d0();
   input += synapse0x293d310();
   input += synapse0x293d350();
   input += synapse0x293d390();
   input += synapse0x293d3d0();
   input += synapse0x293cf80();
   input += synapse0x293cfc0();
   input += synapse0x293d000();
   input += synapse0x293d040();
   input += synapse0x293d620();
   input += synapse0x293d660();
   input += synapse0x293d6a0();
   input += synapse0x293d6e0();
   input += synapse0x293d720();
   input += synapse0x293d760();
   input += synapse0x293d7a0();
   input += synapse0x293d7e0();
   input += synapse0x293d820();
   input += synapse0x293d860();
   input += synapse0x293d8a0();
   input += synapse0x293d8e0();
   input += synapse0x293d920();
   input += synapse0x293d960();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x293c840() {
   double input = input0x293c840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_dL::input0x293d9a0() {
   double input = 9.19102;
   input += synapse0x293dbc0();
   input += synapse0x293dc00();
   input += synapse0x293dc40();
   input += synapse0x293dc80();
   input += synapse0x293dcc0();
   return input;
}

double NNfunction_ns_chi03_dL::neuron0x293d9a0() {
   double input = input0x293d9a0();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_dL::synapse0x290de10() {
   return (neuron0x2908a10()*0.0598934);
}

double NNfunction_ns_chi03_dL::synapse0x290de50() {
   return (neuron0x2908cc0()*4.90866);
}

double NNfunction_ns_chi03_dL::synapse0x290de90() {
   return (neuron0x2909000()*-1.49042);
}

double NNfunction_ns_chi03_dL::synapse0x290ded0() {
   return (neuron0x2909340()*-0.00711991);
}

double NNfunction_ns_chi03_dL::synapse0x290df10() {
   return (neuron0x2909680()*0.000215275);
}

double NNfunction_ns_chi03_dL::synapse0x290df50() {
   return (neuron0x29099c0()*0.0270957);
}

double NNfunction_ns_chi03_dL::synapse0x290df90() {
   return (neuron0x2909d00()*-0.0205694);
}

double NNfunction_ns_chi03_dL::synapse0x290dfd0() {
   return (neuron0x290a040()*0.0141311);
}

double NNfunction_ns_chi03_dL::synapse0x290e010() {
   return (neuron0x290a380()*0.00706173);
}

double NNfunction_ns_chi03_dL::synapse0x290e050() {
   return (neuron0x290a6c0()*-0.00371644);
}

double NNfunction_ns_chi03_dL::synapse0x290e090() {
   return (neuron0x290aa00()*0.0247758);
}

double NNfunction_ns_chi03_dL::synapse0x290e0d0() {
   return (neuron0x290ad40()*0.0193498);
}

double NNfunction_ns_chi03_dL::synapse0x290e110() {
   return (neuron0x290b080()*-0.00974359);
}

double NNfunction_ns_chi03_dL::synapse0x290e150() {
   return (neuron0x290b3c0()*0.000366331);
}

double NNfunction_ns_chi03_dL::synapse0x290e190() {
   return (neuron0x290b700()*0.0128566);
}

double NNfunction_ns_chi03_dL::synapse0x290e1d0() {
   return (neuron0x290ba40()*-0.0180398);
}

double NNfunction_ns_chi03_dL::synapse0x290dc60() {
   return (neuron0x290bd80()*-0.0264773);
}

double NNfunction_ns_chi03_dL::synapse0x290dca0() {
   return (neuron0x290c2e0()*0.0223872);
}

double NNfunction_ns_chi03_dL::synapse0x26c4b70() {
   return (neuron0x290c620()*0.00792246);
}

double NNfunction_ns_chi03_dL::synapse0x26c4bb0() {
   return (neuron0x290c960()*-0.025212);
}

double NNfunction_ns_chi03_dL::synapse0x290e210() {
   return (neuron0x290cca0()*-0.0127259);
}

double NNfunction_ns_chi03_dL::synapse0x290e250() {
   return (neuron0x290cfe0()*0.00933159);
}

double NNfunction_ns_chi03_dL::synapse0x290e290() {
   return (neuron0x290d320()*0.00170548);
}

double NNfunction_ns_chi03_dL::synapse0x290e2d0() {
   return (neuron0x290d660()*-0.480739);
}

double NNfunction_ns_chi03_dL::synapse0x290e650() {
   return (neuron0x2908a10()*0.099515);
}

double NNfunction_ns_chi03_dL::synapse0x290e690() {
   return (neuron0x2908cc0()*-0.00755825);
}

double NNfunction_ns_chi03_dL::synapse0x290e6d0() {
   return (neuron0x2909000()*3.45773);
}

double NNfunction_ns_chi03_dL::synapse0x290e710() {
   return (neuron0x2909340()*-0.0416488);
}

double NNfunction_ns_chi03_dL::synapse0x290e750() {
   return (neuron0x2909680()*0.0142419);
}

double NNfunction_ns_chi03_dL::synapse0x290e790() {
   return (neuron0x29099c0()*-0.000817545);
}

double NNfunction_ns_chi03_dL::synapse0x290e7d0() {
   return (neuron0x2909d00()*-0.0190909);
}

double NNfunction_ns_chi03_dL::synapse0x290e810() {
   return (neuron0x290a040()*-0.0230499);
}

double NNfunction_ns_chi03_dL::synapse0x290e850() {
   return (neuron0x290a380()*0.0193167);
}

double NNfunction_ns_chi03_dL::synapse0x26c49c0() {
   return (neuron0x290a6c0()*0.0161687);
}

double NNfunction_ns_chi03_dL::synapse0x26c4a00() {
   return (neuron0x290aa00()*-0.0183689);
}

double NNfunction_ns_chi03_dL::synapse0x26c4a40() {
   return (neuron0x290ad40()*0.470283);
}

double NNfunction_ns_chi03_dL::synapse0x26c4a80() {
   return (neuron0x290b080()*0.0292744);
}

double NNfunction_ns_chi03_dL::synapse0x290eaa0() {
   return (neuron0x290b3c0()*0.0238327);
}

double NNfunction_ns_chi03_dL::synapse0x290eae0() {
   return (neuron0x290b700()*-0.0255078);
}

double NNfunction_ns_chi03_dL::synapse0x290eb20() {
   return (neuron0x290ba40()*0.0142245);
}

double NNfunction_ns_chi03_dL::synapse0x290e4a0() {
   return (neuron0x290bd80()*0.000452978);
}

double NNfunction_ns_chi03_dL::synapse0x290e4e0() {
   return (neuron0x290c2e0()*0.00439991);
}

double NNfunction_ns_chi03_dL::synapse0x290ec70() {
   return (neuron0x290c620()*0.0196733);
}

double NNfunction_ns_chi03_dL::synapse0x290ecb0() {
   return (neuron0x290c960()*0.0288299);
}

double NNfunction_ns_chi03_dL::synapse0x290ecf0() {
   return (neuron0x290cca0()*0.00367704);
}

double NNfunction_ns_chi03_dL::synapse0x290ed30() {
   return (neuron0x290cfe0()*-0.0376322);
}

double NNfunction_ns_chi03_dL::synapse0x290ed70() {
   return (neuron0x290d320()*-0.0152934);
}

double NNfunction_ns_chi03_dL::synapse0x290edb0() {
   return (neuron0x290d660()*-0.809279);
}

double NNfunction_ns_chi03_dL::synapse0x290f130() {
   return (neuron0x2908a10()*0.063395);
}

double NNfunction_ns_chi03_dL::synapse0x290f170() {
   return (neuron0x2908cc0()*20.0079);
}

double NNfunction_ns_chi03_dL::synapse0x290f1b0() {
   return (neuron0x2909000()*-7.63626);
}

double NNfunction_ns_chi03_dL::synapse0x290f1f0() {
   return (neuron0x2909340()*-0.0295297);
}

double NNfunction_ns_chi03_dL::synapse0x290f230() {
   return (neuron0x2909680()*-0.0561107);
}

double NNfunction_ns_chi03_dL::synapse0x290f270() {
   return (neuron0x29099c0()*-0.028834);
}

double NNfunction_ns_chi03_dL::synapse0x290f2b0() {
   return (neuron0x2909d00()*0.00677938);
}

double NNfunction_ns_chi03_dL::synapse0x290f2f0() {
   return (neuron0x290a040()*-0.0511565);
}

double NNfunction_ns_chi03_dL::synapse0x290f330() {
   return (neuron0x290a380()*-0.000251415);
}

double NNfunction_ns_chi03_dL::synapse0x290f370() {
   return (neuron0x290a6c0()*0.0117024);
}

double NNfunction_ns_chi03_dL::synapse0x290f3b0() {
   return (neuron0x290aa00()*0.0116231);
}

double NNfunction_ns_chi03_dL::synapse0x290f3f0() {
   return (neuron0x290ad40()*0.216028);
}

double NNfunction_ns_chi03_dL::synapse0x290f430() {
   return (neuron0x290b080()*-0.0373137);
}

double NNfunction_ns_chi03_dL::synapse0x290f470() {
   return (neuron0x290b3c0()*0.033056);
}

double NNfunction_ns_chi03_dL::synapse0x290f4b0() {
   return (neuron0x290b700()*-0.0128472);
}

double NNfunction_ns_chi03_dL::synapse0x290f4f0() {
   return (neuron0x290ba40()*0.0270337);
}

double NNfunction_ns_chi03_dL::synapse0x290ef80() {
   return (neuron0x290bd80()*-0.0057231);
}

double NNfunction_ns_chi03_dL::synapse0x290efc0() {
   return (neuron0x290c2e0()*0.0328899);
}

double NNfunction_ns_chi03_dL::synapse0x26d2ab0() {
   return (neuron0x290c620()*-0.0271691);
}

double NNfunction_ns_chi03_dL::synapse0x26d2af0() {
   return (neuron0x290c960()*0.00415857);
}

double NNfunction_ns_chi03_dL::synapse0x2911420() {
   return (neuron0x290cca0()*0.00809338);
}

double NNfunction_ns_chi03_dL::synapse0x2911460() {
   return (neuron0x290cfe0()*-0.0508028);
}

double NNfunction_ns_chi03_dL::synapse0x2908750() {
   return (neuron0x290d320()*-0.00876179);
}

double NNfunction_ns_chi03_dL::synapse0x2908790() {
   return (neuron0x290d660()*0.312118);
}

double NNfunction_ns_chi03_dL::synapse0x26d33a0() {
   return (neuron0x2908a10()*0.0416407);
}

double NNfunction_ns_chi03_dL::synapse0x290e9b0() {
   return (neuron0x2908cc0()*-0.0158767);
}

double NNfunction_ns_chi03_dL::synapse0x290e9f0() {
   return (neuron0x2909000()*-1.70937);
}

double NNfunction_ns_chi03_dL::synapse0x290ea30() {
   return (neuron0x2909340()*-0.0984587);
}

double NNfunction_ns_chi03_dL::synapse0x290f640() {
   return (neuron0x2909680()*-0.00107626);
}

double NNfunction_ns_chi03_dL::synapse0x290f680() {
   return (neuron0x29099c0()*-0.0461136);
}

double NNfunction_ns_chi03_dL::synapse0x290f6c0() {
   return (neuron0x2909d00()*-0.0078587);
}

double NNfunction_ns_chi03_dL::synapse0x290f700() {
   return (neuron0x290a040()*0.0180028);
}

double NNfunction_ns_chi03_dL::synapse0x290f740() {
   return (neuron0x290a380()*0.0431724);
}

double NNfunction_ns_chi03_dL::synapse0x290f780() {
   return (neuron0x290a6c0()*-0.00901971);
}

double NNfunction_ns_chi03_dL::synapse0x290f7c0() {
   return (neuron0x290aa00()*0.0751553);
}

double NNfunction_ns_chi03_dL::synapse0x290f800() {
   return (neuron0x290ad40()*0.321151);
}

double NNfunction_ns_chi03_dL::synapse0x290f840() {
   return (neuron0x290b080()*-0.0428338);
}

double NNfunction_ns_chi03_dL::synapse0x290f880() {
   return (neuron0x290b3c0()*-0.0103575);
}

double NNfunction_ns_chi03_dL::synapse0x290f8c0() {
   return (neuron0x290b700()*0.0270025);
}

double NNfunction_ns_chi03_dL::synapse0x290f900() {
   return (neuron0x290ba40()*0.0328507);
}

double NNfunction_ns_chi03_dL::synapse0x29087d0() {
   return (neuron0x290bd80()*0.103736);
}

double NNfunction_ns_chi03_dL::synapse0x2908810() {
   return (neuron0x290c2e0()*0.0431603);
}

double NNfunction_ns_chi03_dL::synapse0x290fa50() {
   return (neuron0x290c620()*-0.000137984);
}

double NNfunction_ns_chi03_dL::synapse0x290fa90() {
   return (neuron0x290c960()*0.0491445);
}

double NNfunction_ns_chi03_dL::synapse0x290fad0() {
   return (neuron0x290cca0()*0.0575165);
}

double NNfunction_ns_chi03_dL::synapse0x290fb10() {
   return (neuron0x290cfe0()*-0.0226579);
}

double NNfunction_ns_chi03_dL::synapse0x290fb50() {
   return (neuron0x290d320()*0.010574);
}

double NNfunction_ns_chi03_dL::synapse0x290fb90() {
   return (neuron0x290d660()*-2.59274);
}

double NNfunction_ns_chi03_dL::synapse0x290ff10() {
   return (neuron0x2908a10()*-0.150936);
}

double NNfunction_ns_chi03_dL::synapse0x290ff50() {
   return (neuron0x2908cc0()*-0.0767596);
}

double NNfunction_ns_chi03_dL::synapse0x290ff90() {
   return (neuron0x2909000()*-2.19783);
}

double NNfunction_ns_chi03_dL::synapse0x290ffd0() {
   return (neuron0x2909340()*0.383717);
}

double NNfunction_ns_chi03_dL::synapse0x2910010() {
   return (neuron0x2909680()*0.0176105);
}

double NNfunction_ns_chi03_dL::synapse0x2910050() {
   return (neuron0x29099c0()*0.0896161);
}

double NNfunction_ns_chi03_dL::synapse0x2910090() {
   return (neuron0x2909d00()*0.140771);
}

double NNfunction_ns_chi03_dL::synapse0x29100d0() {
   return (neuron0x290a040()*0.0885122);
}

double NNfunction_ns_chi03_dL::synapse0x2910110() {
   return (neuron0x290a380()*-0.136582);
}

double NNfunction_ns_chi03_dL::synapse0x2910150() {
   return (neuron0x290a6c0()*-0.109084);
}

double NNfunction_ns_chi03_dL::synapse0x2910190() {
   return (neuron0x290aa00()*0.0363587);
}

double NNfunction_ns_chi03_dL::synapse0x29101d0() {
   return (neuron0x290ad40()*0.522152);
}

double NNfunction_ns_chi03_dL::synapse0x2910210() {
   return (neuron0x290b080()*-0.0651284);
}

double NNfunction_ns_chi03_dL::synapse0x2910250() {
   return (neuron0x290b3c0()*0.02804);
}

double NNfunction_ns_chi03_dL::synapse0x2910290() {
   return (neuron0x290b700()*0.0804703);
}

double NNfunction_ns_chi03_dL::synapse0x29102d0() {
   return (neuron0x290ba40()*-0.0650462);
}

double NNfunction_ns_chi03_dL::synapse0x2910420() {
   return (neuron0x290bd80()*0.0275705);
}

double NNfunction_ns_chi03_dL::synapse0x290fd60() {
   return (neuron0x290c2e0()*0.058379);
}

double NNfunction_ns_chi03_dL::synapse0x290fda0() {
   return (neuron0x290c620()*-0.116428);
}

double NNfunction_ns_chi03_dL::synapse0x2911560() {
   return (neuron0x290c960()*-0.0018343);
}

double NNfunction_ns_chi03_dL::synapse0x29115a0() {
   return (neuron0x290cca0()*-0.125542);
}

double NNfunction_ns_chi03_dL::synapse0x29115e0() {
   return (neuron0x290cfe0()*0.0137637);
}

double NNfunction_ns_chi03_dL::synapse0x2911620() {
   return (neuron0x290d320()*0.022876);
}

double NNfunction_ns_chi03_dL::synapse0x2911660() {
   return (neuron0x290d660()*0.39199);
}

double NNfunction_ns_chi03_dL::synapse0x29119e0() {
   return (neuron0x2908a10()*-0.0472272);
}

double NNfunction_ns_chi03_dL::synapse0x2911a20() {
   return (neuron0x2908cc0()*-0.0424644);
}

double NNfunction_ns_chi03_dL::synapse0x2911a60() {
   return (neuron0x2909000()*1.03755);
}

double NNfunction_ns_chi03_dL::synapse0x2911aa0() {
   return (neuron0x2909340()*-0.00607435);
}

double NNfunction_ns_chi03_dL::synapse0x2911ae0() {
   return (neuron0x2909680()*-0.0121049);
}

double NNfunction_ns_chi03_dL::synapse0x2911b20() {
   return (neuron0x29099c0()*0.0443856);
}

double NNfunction_ns_chi03_dL::synapse0x2911b60() {
   return (neuron0x2909d00()*0.031485);
}

double NNfunction_ns_chi03_dL::synapse0x2911ba0() {
   return (neuron0x290a040()*0.0292011);
}

double NNfunction_ns_chi03_dL::synapse0x2911be0() {
   return (neuron0x290a380()*0.0147212);
}

double NNfunction_ns_chi03_dL::synapse0x26d2e00() {
   return (neuron0x290a6c0()*0.0391534);
}

double NNfunction_ns_chi03_dL::synapse0x26d2e40() {
   return (neuron0x290aa00()*-0.0265605);
}

double NNfunction_ns_chi03_dL::synapse0x26d2e80() {
   return (neuron0x290ad40()*-0.136603);
}

double NNfunction_ns_chi03_dL::synapse0x26d2ec0() {
   return (neuron0x290b080()*0.107908);
}

double NNfunction_ns_chi03_dL::synapse0x26d2f00() {
   return (neuron0x290b3c0()*-0.012344);
}

double NNfunction_ns_chi03_dL::synapse0x26d2f40() {
   return (neuron0x290b700()*0.0472423);
}

double NNfunction_ns_chi03_dL::synapse0x26d2f80() {
   return (neuron0x290ba40()*0.0526028);
}

double NNfunction_ns_chi03_dL::synapse0x2911830() {
   return (neuron0x290bd80()*0.0122849);
}

double NNfunction_ns_chi03_dL::synapse0x2911870() {
   return (neuron0x290c2e0()*0.0521064);
}

double NNfunction_ns_chi03_dL::synapse0x26d30d0() {
   return (neuron0x290c620()*-0.0356965);
}

double NNfunction_ns_chi03_dL::synapse0x26d3110() {
   return (neuron0x290c960()*0.0703672);
}

double NNfunction_ns_chi03_dL::synapse0x26d3150() {
   return (neuron0x290cca0()*0.0215999);
}

double NNfunction_ns_chi03_dL::synapse0x26d3190() {
   return (neuron0x290cfe0()*-0.0801377);
}

double NNfunction_ns_chi03_dL::synapse0x26d31d0() {
   return (neuron0x290d320()*-0.00131118);
}

double NNfunction_ns_chi03_dL::synapse0x2912430() {
   return (neuron0x290d660()*-1.93773);
}

double NNfunction_ns_chi03_dL::synapse0x29127b0() {
   return (neuron0x2908a10()*0.0271117);
}

double NNfunction_ns_chi03_dL::synapse0x29127f0() {
   return (neuron0x2908cc0()*0.0614775);
}

double NNfunction_ns_chi03_dL::synapse0x2912830() {
   return (neuron0x2909000()*3.55884);
}

double NNfunction_ns_chi03_dL::synapse0x2912870() {
   return (neuron0x2909340()*-0.0144922);
}

double NNfunction_ns_chi03_dL::synapse0x29128b0() {
   return (neuron0x2909680()*0.0244273);
}

double NNfunction_ns_chi03_dL::synapse0x29128f0() {
   return (neuron0x29099c0()*-0.0119371);
}

double NNfunction_ns_chi03_dL::synapse0x2912930() {
   return (neuron0x2909d00()*-0.0054298);
}

double NNfunction_ns_chi03_dL::synapse0x2912970() {
   return (neuron0x290a040()*-0.02597);
}

double NNfunction_ns_chi03_dL::synapse0x29129b0() {
   return (neuron0x290a380()*0.0247006);
}

double NNfunction_ns_chi03_dL::synapse0x29129f0() {
   return (neuron0x290a6c0()*0.0277968);
}

double NNfunction_ns_chi03_dL::synapse0x2912a30() {
   return (neuron0x290aa00()*-0.0100828);
}

double NNfunction_ns_chi03_dL::synapse0x2912a70() {
   return (neuron0x290ad40()*0.760597);
}

double NNfunction_ns_chi03_dL::synapse0x2912ab0() {
   return (neuron0x290b080()*0.0326806);
}

double NNfunction_ns_chi03_dL::synapse0x2912af0() {
   return (neuron0x290b3c0()*-0.0202856);
}

double NNfunction_ns_chi03_dL::synapse0x2912b30() {
   return (neuron0x290b700()*-0.0179048);
}

double NNfunction_ns_chi03_dL::synapse0x2912b70() {
   return (neuron0x290ba40()*-0.00574579);
}

double NNfunction_ns_chi03_dL::synapse0x2912600() {
   return (neuron0x290bd80()*-0.0586009);
}

double NNfunction_ns_chi03_dL::synapse0x2912640() {
   return (neuron0x290c2e0()*-0.0100133);
}

double NNfunction_ns_chi03_dL::synapse0x2912cc0() {
   return (neuron0x290c620()*-0.00369192);
}

double NNfunction_ns_chi03_dL::synapse0x2912d00() {
   return (neuron0x290c960()*0.0179478);
}

double NNfunction_ns_chi03_dL::synapse0x2912d40() {
   return (neuron0x290cca0()*-0.0184196);
}

double NNfunction_ns_chi03_dL::synapse0x2912d80() {
   return (neuron0x290cfe0()*-0.035185);
}

double NNfunction_ns_chi03_dL::synapse0x2912dc0() {
   return (neuron0x290d320()*-0.00939703);
}

double NNfunction_ns_chi03_dL::synapse0x2912e00() {
   return (neuron0x290d660()*-0.631133);
}

double NNfunction_ns_chi03_dL::synapse0x2913180() {
   return (neuron0x2908a10()*0.0313325);
}

double NNfunction_ns_chi03_dL::synapse0x29131c0() {
   return (neuron0x2908cc0()*-0.0185141);
}

double NNfunction_ns_chi03_dL::synapse0x2913200() {
   return (neuron0x2909000()*-0.317216);
}

double NNfunction_ns_chi03_dL::synapse0x2913240() {
   return (neuron0x2909340()*-0.0074783);
}

double NNfunction_ns_chi03_dL::synapse0x2913280() {
   return (neuron0x2909680()*-0.017099);
}

double NNfunction_ns_chi03_dL::synapse0x29132c0() {
   return (neuron0x29099c0()*0.0383783);
}

double NNfunction_ns_chi03_dL::synapse0x2913300() {
   return (neuron0x2909d00()*0.0110045);
}

double NNfunction_ns_chi03_dL::synapse0x2913340() {
   return (neuron0x290a040()*0.0749288);
}

double NNfunction_ns_chi03_dL::synapse0x2913380() {
   return (neuron0x290a380()*0.0119016);
}

double NNfunction_ns_chi03_dL::synapse0x29133c0() {
   return (neuron0x290a6c0()*0.03541);
}

double NNfunction_ns_chi03_dL::synapse0x2913400() {
   return (neuron0x290aa00()*0.0724536);
}

double NNfunction_ns_chi03_dL::synapse0x2913440() {
   return (neuron0x290ad40()*0.367706);
}

double NNfunction_ns_chi03_dL::synapse0x2913480() {
   return (neuron0x290b080()*-0.0256356);
}

double NNfunction_ns_chi03_dL::synapse0x29134c0() {
   return (neuron0x290b3c0()*0.0545445);
}

double NNfunction_ns_chi03_dL::synapse0x2913500() {
   return (neuron0x290b700()*-0.066147);
}

double NNfunction_ns_chi03_dL::synapse0x2913540() {
   return (neuron0x290ba40()*-0.109042);
}

double NNfunction_ns_chi03_dL::synapse0x2912fd0() {
   return (neuron0x290bd80()*0.123381);
}

double NNfunction_ns_chi03_dL::synapse0x2913010() {
   return (neuron0x290c2e0()*0.0830627);
}

double NNfunction_ns_chi03_dL::synapse0x2913690() {
   return (neuron0x290c620()*-0.0694206);
}

double NNfunction_ns_chi03_dL::synapse0x29136d0() {
   return (neuron0x290c960()*0.0398704);
}

double NNfunction_ns_chi03_dL::synapse0x2913710() {
   return (neuron0x290cca0()*-0.00261395);
}

double NNfunction_ns_chi03_dL::synapse0x2913750() {
   return (neuron0x290cfe0()*0.0180545);
}

double NNfunction_ns_chi03_dL::synapse0x2913790() {
   return (neuron0x290d320()*-0.0249163);
}

double NNfunction_ns_chi03_dL::synapse0x29137d0() {
   return (neuron0x290d660()*-0.601553);
}

double NNfunction_ns_chi03_dL::synapse0x290c1d0() {
   return (neuron0x2908a10()*-0.0138337);
}

double NNfunction_ns_chi03_dL::synapse0x290c210() {
   return (neuron0x2908cc0()*-0.069745);
}

double NNfunction_ns_chi03_dL::synapse0x290c250() {
   return (neuron0x2909000()*-0.665176);
}

double NNfunction_ns_chi03_dL::synapse0x290c290() {
   return (neuron0x2909340()*-0.190385);
}

double NNfunction_ns_chi03_dL::synapse0x2913d60() {
   return (neuron0x2909680()*-0.0288757);
}

double NNfunction_ns_chi03_dL::synapse0x2913da0() {
   return (neuron0x29099c0()*0.0535446);
}

double NNfunction_ns_chi03_dL::synapse0x2913de0() {
   return (neuron0x2909d00()*0.0202753);
}

double NNfunction_ns_chi03_dL::synapse0x2913e20() {
   return (neuron0x290a040()*0.0264845);
}

double NNfunction_ns_chi03_dL::synapse0x2913e60() {
   return (neuron0x290a380()*0.00850516);
}

double NNfunction_ns_chi03_dL::synapse0x2913ea0() {
   return (neuron0x290a6c0()*0.0603829);
}

double NNfunction_ns_chi03_dL::synapse0x2913ee0() {
   return (neuron0x290aa00()*0.155608);
}

double NNfunction_ns_chi03_dL::synapse0x2913f20() {
   return (neuron0x290ad40()*-0.444234);
}

double NNfunction_ns_chi03_dL::synapse0x2913f60() {
   return (neuron0x290b080()*-0.0339406);
}

double NNfunction_ns_chi03_dL::synapse0x2913fa0() {
   return (neuron0x290b3c0()*0.0658025);
}

double NNfunction_ns_chi03_dL::synapse0x2913fe0() {
   return (neuron0x290b700()*0.0652528);
}

double NNfunction_ns_chi03_dL::synapse0x2914020() {
   return (neuron0x290ba40()*0.0513266);
}

double NNfunction_ns_chi03_dL::synapse0x29139a0() {
   return (neuron0x290bd80()*0.0869752);
}

double NNfunction_ns_chi03_dL::synapse0x29139e0() {
   return (neuron0x290c2e0()*0.0638559);
}

double NNfunction_ns_chi03_dL::synapse0x2914170() {
   return (neuron0x290c620()*-0.00873555);
}

double NNfunction_ns_chi03_dL::synapse0x29141b0() {
   return (neuron0x290c960()*0.022406);
}

double NNfunction_ns_chi03_dL::synapse0x29141f0() {
   return (neuron0x290cca0()*-0.0218939);
}

double NNfunction_ns_chi03_dL::synapse0x2914230() {
   return (neuron0x290cfe0()*0.0826263);
}

double NNfunction_ns_chi03_dL::synapse0x2914270() {
   return (neuron0x290d320()*0.00239067);
}

double NNfunction_ns_chi03_dL::synapse0x29142b0() {
   return (neuron0x290d660()*-0.889084);
}

double NNfunction_ns_chi03_dL::synapse0x2914630() {
   return (neuron0x2908a10()*0.768327);
}

double NNfunction_ns_chi03_dL::synapse0x2914670() {
   return (neuron0x2908cc0()*0.0773223);
}

double NNfunction_ns_chi03_dL::synapse0x29146b0() {
   return (neuron0x2909000()*0.410312);
}

double NNfunction_ns_chi03_dL::synapse0x29146f0() {
   return (neuron0x2909340()*-0.271019);
}

double NNfunction_ns_chi03_dL::synapse0x2914730() {
   return (neuron0x2909680()*0.382395);
}

double NNfunction_ns_chi03_dL::synapse0x2914770() {
   return (neuron0x29099c0()*0.40445);
}

double NNfunction_ns_chi03_dL::synapse0x29147b0() {
   return (neuron0x2909d00()*-0.0357264);
}

double NNfunction_ns_chi03_dL::synapse0x29147f0() {
   return (neuron0x290a040()*0.107682);
}

double NNfunction_ns_chi03_dL::synapse0x2914830() {
   return (neuron0x290a380()*-0.616835);
}

double NNfunction_ns_chi03_dL::synapse0x2914870() {
   return (neuron0x290a6c0()*0.49317);
}

double NNfunction_ns_chi03_dL::synapse0x29148b0() {
   return (neuron0x290aa00()*-0.399659);
}

double NNfunction_ns_chi03_dL::synapse0x29148f0() {
   return (neuron0x290ad40()*-0.0214232);
}

double NNfunction_ns_chi03_dL::synapse0x2914930() {
   return (neuron0x290b080()*-0.303121);
}

double NNfunction_ns_chi03_dL::synapse0x2914970() {
   return (neuron0x290b3c0()*-0.109013);
}

double NNfunction_ns_chi03_dL::synapse0x29149b0() {
   return (neuron0x290b700()*-0.0579715);
}

double NNfunction_ns_chi03_dL::synapse0x29149f0() {
   return (neuron0x290ba40()*-0.279165);
}

double NNfunction_ns_chi03_dL::synapse0x2914480() {
   return (neuron0x290bd80()*0.18309);
}

double NNfunction_ns_chi03_dL::synapse0x29144c0() {
   return (neuron0x290c2e0()*0.106087);
}

double NNfunction_ns_chi03_dL::synapse0x2914b40() {
   return (neuron0x290c620()*-0.409879);
}

double NNfunction_ns_chi03_dL::synapse0x2914b80() {
   return (neuron0x290c960()*-0.0925993);
}

double NNfunction_ns_chi03_dL::synapse0x2914bc0() {
   return (neuron0x290cca0()*-0.117345);
}

double NNfunction_ns_chi03_dL::synapse0x2914c00() {
   return (neuron0x290cfe0()*0.0909589);
}

double NNfunction_ns_chi03_dL::synapse0x2914c40() {
   return (neuron0x290d320()*-0.195842);
}

double NNfunction_ns_chi03_dL::synapse0x2914c80() {
   return (neuron0x290d660()*-0.734285);
}

double NNfunction_ns_chi03_dL::synapse0x2915000() {
   return (neuron0x2908a10()*0.0731481);
}

double NNfunction_ns_chi03_dL::synapse0x2915040() {
   return (neuron0x2908cc0()*0.0285795);
}

double NNfunction_ns_chi03_dL::synapse0x2915080() {
   return (neuron0x2909000()*5.45993);
}

double NNfunction_ns_chi03_dL::synapse0x29150c0() {
   return (neuron0x2909340()*-0.019975);
}

double NNfunction_ns_chi03_dL::synapse0x2915100() {
   return (neuron0x2909680()*-0.00491197);
}

double NNfunction_ns_chi03_dL::synapse0x2915140() {
   return (neuron0x29099c0()*-0.00432007);
}

double NNfunction_ns_chi03_dL::synapse0x2915180() {
   return (neuron0x2909d00()*0.007905);
}

double NNfunction_ns_chi03_dL::synapse0x29151c0() {
   return (neuron0x290a040()*-0.0169225);
}

double NNfunction_ns_chi03_dL::synapse0x2915200() {
   return (neuron0x290a380()*0.0167007);
}

double NNfunction_ns_chi03_dL::synapse0x2915240() {
   return (neuron0x290a6c0()*-0.000837037);
}

double NNfunction_ns_chi03_dL::synapse0x2915280() {
   return (neuron0x290aa00()*-0.0071368);
}

double NNfunction_ns_chi03_dL::synapse0x29152c0() {
   return (neuron0x290ad40()*0.14978);
}

double NNfunction_ns_chi03_dL::synapse0x2915300() {
   return (neuron0x290b080()*-0.00381702);
}

double NNfunction_ns_chi03_dL::synapse0x2915340() {
   return (neuron0x290b3c0()*0.0145736);
}

double NNfunction_ns_chi03_dL::synapse0x2915380() {
   return (neuron0x290b700()*-0.0245614);
}

double NNfunction_ns_chi03_dL::synapse0x29153c0() {
   return (neuron0x290ba40()*-0.0205556);
}

double NNfunction_ns_chi03_dL::synapse0x2914e50() {
   return (neuron0x290bd80()*0.0354892);
}

double NNfunction_ns_chi03_dL::synapse0x2914e90() {
   return (neuron0x290c2e0()*0.00609034);
}

double NNfunction_ns_chi03_dL::synapse0x2911c20() {
   return (neuron0x290c620()*-0.00386334);
}

double NNfunction_ns_chi03_dL::synapse0x2911c60() {
   return (neuron0x290c960()*0.030424);
}

double NNfunction_ns_chi03_dL::synapse0x2911ca0() {
   return (neuron0x290cca0()*-0.00899432);
}

double NNfunction_ns_chi03_dL::synapse0x2911ce0() {
   return (neuron0x290cfe0()*-0.0598245);
}

double NNfunction_ns_chi03_dL::synapse0x2911d20() {
   return (neuron0x290d320()*-0.00421028);
}

double NNfunction_ns_chi03_dL::synapse0x2911d60() {
   return (neuron0x290d660()*-3.21801);
}

double NNfunction_ns_chi03_dL::synapse0x29120e0() {
   return (neuron0x2908a10()*0.0183628);
}

double NNfunction_ns_chi03_dL::synapse0x2912120() {
   return (neuron0x2908cc0()*-0.334953);
}

double NNfunction_ns_chi03_dL::synapse0x2912160() {
   return (neuron0x2909000()*-0.0952347);
}

double NNfunction_ns_chi03_dL::synapse0x29121a0() {
   return (neuron0x2909340()*0.305218);
}

double NNfunction_ns_chi03_dL::synapse0x29121e0() {
   return (neuron0x2909680()*-0.24649);
}

double NNfunction_ns_chi03_dL::synapse0x2912220() {
   return (neuron0x29099c0()*0.47593);
}

double NNfunction_ns_chi03_dL::synapse0x2912260() {
   return (neuron0x2909d00()*-0.0285398);
}

double NNfunction_ns_chi03_dL::synapse0x29122a0() {
   return (neuron0x290a040()*-0.205258);
}

double NNfunction_ns_chi03_dL::synapse0x29122e0() {
   return (neuron0x290a380()*-0.739868);
}

double NNfunction_ns_chi03_dL::synapse0x2912320() {
   return (neuron0x290a6c0()*0.285109);
}

double NNfunction_ns_chi03_dL::synapse0x2912360() {
   return (neuron0x290aa00()*0.584838);
}

double NNfunction_ns_chi03_dL::synapse0x29123a0() {
   return (neuron0x290ad40()*-0.124431);
}

double NNfunction_ns_chi03_dL::synapse0x29123e0() {
   return (neuron0x290b080()*-1.0381);
}

double NNfunction_ns_chi03_dL::synapse0x2916520() {
   return (neuron0x290b3c0()*0.568693);
}

double NNfunction_ns_chi03_dL::synapse0x2916560() {
   return (neuron0x290b700()*0.512537);
}

double NNfunction_ns_chi03_dL::synapse0x29165a0() {
   return (neuron0x290ba40()*-1.14216);
}

double NNfunction_ns_chi03_dL::synapse0x2911f30() {
   return (neuron0x290bd80()*-0.725052);
}

double NNfunction_ns_chi03_dL::synapse0x2911f70() {
   return (neuron0x290c2e0()*-0.0381799);
}

double NNfunction_ns_chi03_dL::synapse0x29166f0() {
   return (neuron0x290c620()*-0.048491);
}

double NNfunction_ns_chi03_dL::synapse0x2916730() {
   return (neuron0x290c960()*-0.459734);
}

double NNfunction_ns_chi03_dL::synapse0x2916770() {
   return (neuron0x290cca0()*-0.282565);
}

double NNfunction_ns_chi03_dL::synapse0x29167b0() {
   return (neuron0x290cfe0()*0.441424);
}

double NNfunction_ns_chi03_dL::synapse0x29167f0() {
   return (neuron0x290d320()*-0.194858);
}

double NNfunction_ns_chi03_dL::synapse0x2916830() {
   return (neuron0x290d660()*1.20753);
}

double NNfunction_ns_chi03_dL::synapse0x2916bb0() {
   return (neuron0x2908a10()*-0.353952);
}

double NNfunction_ns_chi03_dL::synapse0x2916bf0() {
   return (neuron0x2908cc0()*-0.216216);
}

double NNfunction_ns_chi03_dL::synapse0x2916c30() {
   return (neuron0x2909000()*0.395397);
}

double NNfunction_ns_chi03_dL::synapse0x2916c70() {
   return (neuron0x2909340()*0.577432);
}

double NNfunction_ns_chi03_dL::synapse0x2916cb0() {
   return (neuron0x2909680()*-0.802918);
}

double NNfunction_ns_chi03_dL::synapse0x2916cf0() {
   return (neuron0x29099c0()*0.0518951);
}

double NNfunction_ns_chi03_dL::synapse0x2916d30() {
   return (neuron0x2909d00()*0.350484);
}

double NNfunction_ns_chi03_dL::synapse0x2916d70() {
   return (neuron0x290a040()*1.01825);
}

double NNfunction_ns_chi03_dL::synapse0x2916db0() {
   return (neuron0x290a380()*-0.578041);
}

double NNfunction_ns_chi03_dL::synapse0x2916df0() {
   return (neuron0x290a6c0()*0.151382);
}

double NNfunction_ns_chi03_dL::synapse0x2916e30() {
   return (neuron0x290aa00()*-0.168855);
}

double NNfunction_ns_chi03_dL::synapse0x2916e70() {
   return (neuron0x290ad40()*-1.49973);
}

double NNfunction_ns_chi03_dL::synapse0x2916eb0() {
   return (neuron0x290b080()*0.305796);
}

double NNfunction_ns_chi03_dL::synapse0x2916ef0() {
   return (neuron0x290b3c0()*0.0833322);
}

double NNfunction_ns_chi03_dL::synapse0x2916f30() {
   return (neuron0x290b700()*-0.0680907);
}

double NNfunction_ns_chi03_dL::synapse0x2916f70() {
   return (neuron0x290ba40()*0.280759);
}

double NNfunction_ns_chi03_dL::synapse0x2916a00() {
   return (neuron0x290bd80()*0.0833194);
}

double NNfunction_ns_chi03_dL::synapse0x2916a40() {
   return (neuron0x290c2e0()*-0.295736);
}

double NNfunction_ns_chi03_dL::synapse0x29170c0() {
   return (neuron0x290c620()*0.535965);
}

double NNfunction_ns_chi03_dL::synapse0x2917100() {
   return (neuron0x290c960()*-0.130828);
}

double NNfunction_ns_chi03_dL::synapse0x2917140() {
   return (neuron0x290cca0()*0.105067);
}

double NNfunction_ns_chi03_dL::synapse0x2917180() {
   return (neuron0x290cfe0()*-0.278334);
}

double NNfunction_ns_chi03_dL::synapse0x29171c0() {
   return (neuron0x290d320()*-0.254521);
}

double NNfunction_ns_chi03_dL::synapse0x2917200() {
   return (neuron0x290d660()*-0.543951);
}

double NNfunction_ns_chi03_dL::synapse0x2917580() {
   return (neuron0x2908a10()*0.584038);
}

double NNfunction_ns_chi03_dL::synapse0x29175c0() {
   return (neuron0x2908cc0()*-0.19719);
}

double NNfunction_ns_chi03_dL::synapse0x2917600() {
   return (neuron0x2909000()*0.402769);
}

double NNfunction_ns_chi03_dL::synapse0x2917640() {
   return (neuron0x2909340()*0.236156);
}

double NNfunction_ns_chi03_dL::synapse0x2917680() {
   return (neuron0x2909680()*0.599361);
}

double NNfunction_ns_chi03_dL::synapse0x29176c0() {
   return (neuron0x29099c0()*-0.100333);
}

double NNfunction_ns_chi03_dL::synapse0x2917700() {
   return (neuron0x2909d00()*-0.841008);
}

double NNfunction_ns_chi03_dL::synapse0x2917740() {
   return (neuron0x290a040()*-0.157782);
}

double NNfunction_ns_chi03_dL::synapse0x2917780() {
   return (neuron0x290a380()*-0.0336106);
}

double NNfunction_ns_chi03_dL::synapse0x29177c0() {
   return (neuron0x290a6c0()*0.580976);
}

double NNfunction_ns_chi03_dL::synapse0x2917800() {
   return (neuron0x290aa00()*-0.537667);
}

double NNfunction_ns_chi03_dL::synapse0x2917840() {
   return (neuron0x290ad40()*0.289613);
}

double NNfunction_ns_chi03_dL::synapse0x2917880() {
   return (neuron0x290b080()*0.487485);
}

double NNfunction_ns_chi03_dL::synapse0x29178c0() {
   return (neuron0x290b3c0()*0.0781942);
}

double NNfunction_ns_chi03_dL::synapse0x2917900() {
   return (neuron0x290b700()*-1.42123);
}

double NNfunction_ns_chi03_dL::synapse0x2917940() {
   return (neuron0x290ba40()*-1.45626);
}

double NNfunction_ns_chi03_dL::synapse0x29173d0() {
   return (neuron0x290bd80()*0.647885);
}

double NNfunction_ns_chi03_dL::synapse0x2917410() {
   return (neuron0x290c2e0()*-0.157996);
}

double NNfunction_ns_chi03_dL::synapse0x2917a90() {
   return (neuron0x290c620()*-0.488689);
}

double NNfunction_ns_chi03_dL::synapse0x2917ad0() {
   return (neuron0x290c960()*-0.209991);
}

double NNfunction_ns_chi03_dL::synapse0x2917b10() {
   return (neuron0x290cca0()*0.526268);
}

double NNfunction_ns_chi03_dL::synapse0x2917b50() {
   return (neuron0x290cfe0()*-0.103327);
}

double NNfunction_ns_chi03_dL::synapse0x2917b90() {
   return (neuron0x290d320()*-0.235146);
}

double NNfunction_ns_chi03_dL::synapse0x2917bd0() {
   return (neuron0x290d660()*0.603637);
}

double NNfunction_ns_chi03_dL::synapse0x2917f50() {
   return (neuron0x2908a10()*0.441108);
}

double NNfunction_ns_chi03_dL::synapse0x2917f90() {
   return (neuron0x2908cc0()*0.145631);
}

double NNfunction_ns_chi03_dL::synapse0x2917fd0() {
   return (neuron0x2909000()*0.109268);
}

double NNfunction_ns_chi03_dL::synapse0x2918010() {
   return (neuron0x2909340()*-0.337128);
}

double NNfunction_ns_chi03_dL::synapse0x2918050() {
   return (neuron0x2909680()*0.174168);
}

double NNfunction_ns_chi03_dL::synapse0x2918090() {
   return (neuron0x29099c0()*-0.33329);
}

double NNfunction_ns_chi03_dL::synapse0x29180d0() {
   return (neuron0x2909d00()*0.0563455);
}

double NNfunction_ns_chi03_dL::synapse0x2918110() {
   return (neuron0x290a040()*0.503964);
}

double NNfunction_ns_chi03_dL::synapse0x2918150() {
   return (neuron0x290a380()*0.338275);
}

double NNfunction_ns_chi03_dL::synapse0x2918190() {
   return (neuron0x290a6c0()*-0.0199916);
}

double NNfunction_ns_chi03_dL::synapse0x29181d0() {
   return (neuron0x290aa00()*-0.728654);
}

double NNfunction_ns_chi03_dL::synapse0x2918210() {
   return (neuron0x290ad40()*-0.646031);
}

double NNfunction_ns_chi03_dL::synapse0x2918250() {
   return (neuron0x290b080()*0.635355);
}

double NNfunction_ns_chi03_dL::synapse0x2918290() {
   return (neuron0x290b3c0()*-0.571208);
}

double NNfunction_ns_chi03_dL::synapse0x29182d0() {
   return (neuron0x290b700()*-0.311827);
}

double NNfunction_ns_chi03_dL::synapse0x2918310() {
   return (neuron0x290ba40()*0.69305);
}

double NNfunction_ns_chi03_dL::synapse0x2917da0() {
   return (neuron0x290bd80()*0.842804);
}

double NNfunction_ns_chi03_dL::synapse0x2917de0() {
   return (neuron0x290c2e0()*0.123504);
}

double NNfunction_ns_chi03_dL::synapse0x2918460() {
   return (neuron0x290c620()*0.355643);
}

double NNfunction_ns_chi03_dL::synapse0x29184a0() {
   return (neuron0x290c960()*0.476069);
}

double NNfunction_ns_chi03_dL::synapse0x29184e0() {
   return (neuron0x290cca0()*0.494345);
}

double NNfunction_ns_chi03_dL::synapse0x2918520() {
   return (neuron0x290cfe0()*-0.368329);
}

double NNfunction_ns_chi03_dL::synapse0x2918560() {
   return (neuron0x290d320()*0.335107);
}

double NNfunction_ns_chi03_dL::synapse0x29185a0() {
   return (neuron0x290d660()*-1.34561);
}

double NNfunction_ns_chi03_dL::synapse0x2918920() {
   return (neuron0x2908a10()*-0.00797203);
}

double NNfunction_ns_chi03_dL::synapse0x2908ba0() {
   return (neuron0x2908cc0()*0.00105026);
}

double NNfunction_ns_chi03_dL::synapse0x2908be0() {
   return (neuron0x2909000()*-0.0220524);
}

double NNfunction_ns_chi03_dL::synapse0x2908ee0() {
   return (neuron0x2909340()*-2.20436);
}

double NNfunction_ns_chi03_dL::synapse0x2908f20() {
   return (neuron0x2909680()*0.0069224);
}

double NNfunction_ns_chi03_dL::synapse0x2909220() {
   return (neuron0x29099c0()*-0.00601494);
}

double NNfunction_ns_chi03_dL::synapse0x2909260() {
   return (neuron0x2909d00()*0.00574648);
}

double NNfunction_ns_chi03_dL::synapse0x2909560() {
   return (neuron0x290a040()*-0.0105783);
}

double NNfunction_ns_chi03_dL::synapse0x29095a0() {
   return (neuron0x290a380()*0.00714157);
}

double NNfunction_ns_chi03_dL::synapse0x29098a0() {
   return (neuron0x290a6c0()*-0.00536076);
}

double NNfunction_ns_chi03_dL::synapse0x29098e0() {
   return (neuron0x290aa00()*-0.00584943);
}

double NNfunction_ns_chi03_dL::synapse0x2909be0() {
   return (neuron0x290ad40()*-0.19317);
}

double NNfunction_ns_chi03_dL::synapse0x2909c20() {
   return (neuron0x290b080()*0.0135662);
}

double NNfunction_ns_chi03_dL::synapse0x2909f20() {
   return (neuron0x290b3c0()*-0.00245255);
}

double NNfunction_ns_chi03_dL::synapse0x2909f60() {
   return (neuron0x290b700()*0.011657);
}

double NNfunction_ns_chi03_dL::synapse0x290a260() {
   return (neuron0x290ba40()*-0.00163414);
}

double NNfunction_ns_chi03_dL::synapse0x290a2a0() {
   return (neuron0x290bd80()*-0.0104346);
}

double NNfunction_ns_chi03_dL::synapse0x290a5a0() {
   return (neuron0x290c2e0()*-0.00213904);
}

double NNfunction_ns_chi03_dL::synapse0x290a5e0() {
   return (neuron0x290c620()*0.00548075);
}

double NNfunction_ns_chi03_dL::synapse0x290a8e0() {
   return (neuron0x290c960()*0.00572628);
}

double NNfunction_ns_chi03_dL::synapse0x290a920() {
   return (neuron0x290cca0()*-0.00393057);
}

double NNfunction_ns_chi03_dL::synapse0x290ac20() {
   return (neuron0x290cfe0()*-0.00911373);
}

double NNfunction_ns_chi03_dL::synapse0x290ac60() {
   return (neuron0x290d320()*0.00700495);
}

double NNfunction_ns_chi03_dL::synapse0x290af60() {
   return (neuron0x290d660()*-0.0314821);
}

double NNfunction_ns_chi03_dL::synapse0x290afa0() {
   return (neuron0x2908a10()*-0.381318);
}

double NNfunction_ns_chi03_dL::synapse0x290bc60() {
   return (neuron0x2908cc0()*0.614251);
}

double NNfunction_ns_chi03_dL::synapse0x290bca0() {
   return (neuron0x2909000()*0.549324);
}

double NNfunction_ns_chi03_dL::synapse0x2918770() {
   return (neuron0x2909340()*0.150287);
}

double NNfunction_ns_chi03_dL::synapse0x29187b0() {
   return (neuron0x2909680()*0.13975);
}

double NNfunction_ns_chi03_dL::synapse0x290bfa0() {
   return (neuron0x29099c0()*0.302755);
}

double NNfunction_ns_chi03_dL::synapse0x290bfe0() {
   return (neuron0x2909d00()*0.00434386);
}

double NNfunction_ns_chi03_dL::synapse0x290c500() {
   return (neuron0x290a040()*-0.204129);
}

double NNfunction_ns_chi03_dL::synapse0x290c540() {
   return (neuron0x290a380()*-0.429023);
}

double NNfunction_ns_chi03_dL::synapse0x290c840() {
   return (neuron0x290a6c0()*-0.0879329);
}

double NNfunction_ns_chi03_dL::synapse0x290c880() {
   return (neuron0x290aa00()*-0.00505086);
}

double NNfunction_ns_chi03_dL::synapse0x290cb80() {
   return (neuron0x290ad40()*0.299871);
}

double NNfunction_ns_chi03_dL::synapse0x290cbc0() {
   return (neuron0x290b080()*0.203553);
}

double NNfunction_ns_chi03_dL::synapse0x290cec0() {
   return (neuron0x290b3c0()*0.182443);
}

double NNfunction_ns_chi03_dL::synapse0x290cf00() {
   return (neuron0x290b700()*-0.22534);
}

double NNfunction_ns_chi03_dL::synapse0x290d200() {
   return (neuron0x290ba40()*0.16074);
}

double NNfunction_ns_chi03_dL::synapse0x290d240() {
   return (neuron0x290bd80()*-0.368812);
}

double NNfunction_ns_chi03_dL::synapse0x290d540() {
   return (neuron0x290c2e0()*0.297111);
}

double NNfunction_ns_chi03_dL::synapse0x290d580() {
   return (neuron0x290c620()*0.200193);
}

double NNfunction_ns_chi03_dL::synapse0x290d880() {
   return (neuron0x290c960()*0.169537);
}

double NNfunction_ns_chi03_dL::synapse0x290d8c0() {
   return (neuron0x290cca0()*-0.467574);
}

double NNfunction_ns_chi03_dL::synapse0x290b2a0() {
   return (neuron0x290cfe0()*-0.498799);
}

double NNfunction_ns_chi03_dL::synapse0x290b2e0() {
   return (neuron0x290d320()*-0.0653336);
}

double NNfunction_ns_chi03_dL::synapse0x291a690() {
   return (neuron0x290d660()*0.296376);
}

double NNfunction_ns_chi03_dL::synapse0x291aa10() {
   return (neuron0x2908a10()*-0.143633);
}

double NNfunction_ns_chi03_dL::synapse0x291aa50() {
   return (neuron0x2908cc0()*-3.53894);
}

double NNfunction_ns_chi03_dL::synapse0x291aa90() {
   return (neuron0x2909000()*0.544996);
}

double NNfunction_ns_chi03_dL::synapse0x291aad0() {
   return (neuron0x2909340()*0.031815);
}

double NNfunction_ns_chi03_dL::synapse0x291ab10() {
   return (neuron0x2909680()*-0.0088721);
}

double NNfunction_ns_chi03_dL::synapse0x291ab50() {
   return (neuron0x29099c0()*-0.0196949);
}

double NNfunction_ns_chi03_dL::synapse0x291ab90() {
   return (neuron0x2909d00()*0.0066213);
}

double NNfunction_ns_chi03_dL::synapse0x291abd0() {
   return (neuron0x290a040()*-0.00285666);
}

double NNfunction_ns_chi03_dL::synapse0x291ac10() {
   return (neuron0x290a380()*-0.0225921);
}

double NNfunction_ns_chi03_dL::synapse0x291ac50() {
   return (neuron0x290a6c0()*0.00758743);
}

double NNfunction_ns_chi03_dL::synapse0x291ac90() {
   return (neuron0x290aa00()*0.0113282);
}

double NNfunction_ns_chi03_dL::synapse0x291acd0() {
   return (neuron0x290ad40()*0.169273);
}

double NNfunction_ns_chi03_dL::synapse0x291ad10() {
   return (neuron0x290b080()*-0.00145275);
}

double NNfunction_ns_chi03_dL::synapse0x291ad50() {
   return (neuron0x290b3c0()*-0.0165715);
}

double NNfunction_ns_chi03_dL::synapse0x291ad90() {
   return (neuron0x290b700()*0.00158092);
}

double NNfunction_ns_chi03_dL::synapse0x291add0() {
   return (neuron0x290ba40()*-0.00901866);
}

double NNfunction_ns_chi03_dL::synapse0x291a860() {
   return (neuron0x290bd80()*0.0217463);
}

double NNfunction_ns_chi03_dL::synapse0x291a8a0() {
   return (neuron0x290c2e0()*-0.0232201);
}

double NNfunction_ns_chi03_dL::synapse0x291af20() {
   return (neuron0x290c620()*-0.0130742);
}

double NNfunction_ns_chi03_dL::synapse0x291af60() {
   return (neuron0x290c960()*0.0136011);
}

double NNfunction_ns_chi03_dL::synapse0x291afa0() {
   return (neuron0x290cca0()*-0.00214765);
}

double NNfunction_ns_chi03_dL::synapse0x291afe0() {
   return (neuron0x290cfe0()*-0.0186968);
}

double NNfunction_ns_chi03_dL::synapse0x291b020() {
   return (neuron0x290d320()*0.00599962);
}

double NNfunction_ns_chi03_dL::synapse0x291b060() {
   return (neuron0x290d660()*0.190376);
}

double NNfunction_ns_chi03_dL::synapse0x291b3e0() {
   return (neuron0x2908a10()*-0.00366071);
}

double NNfunction_ns_chi03_dL::synapse0x291b420() {
   return (neuron0x2908cc0()*0.00291222);
}

double NNfunction_ns_chi03_dL::synapse0x291b460() {
   return (neuron0x2909000()*0.00168189);
}

double NNfunction_ns_chi03_dL::synapse0x291b4a0() {
   return (neuron0x2909340()*2.20996);
}

double NNfunction_ns_chi03_dL::synapse0x291b4e0() {
   return (neuron0x2909680()*-0.00607111);
}

double NNfunction_ns_chi03_dL::synapse0x291b520() {
   return (neuron0x29099c0()*0.00485761);
}

double NNfunction_ns_chi03_dL::synapse0x291b560() {
   return (neuron0x2909d00()*-0.000521394);
}

double NNfunction_ns_chi03_dL::synapse0x291b5a0() {
   return (neuron0x290a040()*0.00729582);
}

double NNfunction_ns_chi03_dL::synapse0x291b5e0() {
   return (neuron0x290a380()*-0.0147435);
}

double NNfunction_ns_chi03_dL::synapse0x291b620() {
   return (neuron0x290a6c0()*0.00561308);
}

double NNfunction_ns_chi03_dL::synapse0x291b660() {
   return (neuron0x290aa00()*-0.0105421);
}

double NNfunction_ns_chi03_dL::synapse0x291b6a0() {
   return (neuron0x290ad40()*-0.195433);
}

double NNfunction_ns_chi03_dL::synapse0x291b6e0() {
   return (neuron0x290b080()*-2.77793e-05);
}

double NNfunction_ns_chi03_dL::synapse0x291b720() {
   return (neuron0x290b3c0()*-0.0149328);
}

double NNfunction_ns_chi03_dL::synapse0x291b760() {
   return (neuron0x290b700()*0.00305724);
}

double NNfunction_ns_chi03_dL::synapse0x291b7a0() {
   return (neuron0x290ba40()*0.0231116);
}

double NNfunction_ns_chi03_dL::synapse0x291b230() {
   return (neuron0x290bd80()*-0.0159163);
}

double NNfunction_ns_chi03_dL::synapse0x291b270() {
   return (neuron0x290c2e0()*0.0043655);
}

double NNfunction_ns_chi03_dL::synapse0x291b8f0() {
   return (neuron0x290c620()*-0.000315001);
}

double NNfunction_ns_chi03_dL::synapse0x291b930() {
   return (neuron0x290c960()*-0.00433235);
}

double NNfunction_ns_chi03_dL::synapse0x291b970() {
   return (neuron0x290cca0()*0.0088955);
}

double NNfunction_ns_chi03_dL::synapse0x291b9b0() {
   return (neuron0x290cfe0()*0.00467163);
}

double NNfunction_ns_chi03_dL::synapse0x291b9f0() {
   return (neuron0x290d320()*-0.00759091);
}

double NNfunction_ns_chi03_dL::synapse0x291ba30() {
   return (neuron0x290d660()*0.00350183);
}

double NNfunction_ns_chi03_dL::synapse0x291bdb0() {
   return (neuron0x2908a10()*-0.0119793);
}

double NNfunction_ns_chi03_dL::synapse0x291bdf0() {
   return (neuron0x2908cc0()*-13.5199);
}

double NNfunction_ns_chi03_dL::synapse0x291be30() {
   return (neuron0x2909000()*0.53607);
}

double NNfunction_ns_chi03_dL::synapse0x291be70() {
   return (neuron0x2909340()*-0.0220084);
}

double NNfunction_ns_chi03_dL::synapse0x291beb0() {
   return (neuron0x2909680()*0.0700392);
}

double NNfunction_ns_chi03_dL::synapse0x291bef0() {
   return (neuron0x29099c0()*0.00914158);
}

double NNfunction_ns_chi03_dL::synapse0x291bf30() {
   return (neuron0x2909d00()*0.0285607);
}

double NNfunction_ns_chi03_dL::synapse0x291bf70() {
   return (neuron0x290a040()*0.0017095);
}

double NNfunction_ns_chi03_dL::synapse0x291bfb0() {
   return (neuron0x290a380()*0.0438311);
}

double NNfunction_ns_chi03_dL::synapse0x291bff0() {
   return (neuron0x290a6c0()*0.00583746);
}

double NNfunction_ns_chi03_dL::synapse0x291c030() {
   return (neuron0x290aa00()*0.00549836);
}

double NNfunction_ns_chi03_dL::synapse0x291c070() {
   return (neuron0x290ad40()*0.227397);
}

double NNfunction_ns_chi03_dL::synapse0x291c0b0() {
   return (neuron0x290b080()*0.0225906);
}

double NNfunction_ns_chi03_dL::synapse0x291c0f0() {
   return (neuron0x290b3c0()*-0.0254734);
}

double NNfunction_ns_chi03_dL::synapse0x291c130() {
   return (neuron0x290b700()*0.02779);
}

double NNfunction_ns_chi03_dL::synapse0x291c170() {
   return (neuron0x290ba40()*0.0115604);
}

double NNfunction_ns_chi03_dL::synapse0x291bc00() {
   return (neuron0x290bd80()*0.012542);
}

double NNfunction_ns_chi03_dL::synapse0x291bc40() {
   return (neuron0x290c2e0()*-0.0229817);
}

double NNfunction_ns_chi03_dL::synapse0x291c2c0() {
   return (neuron0x290c620()*0.0107647);
}

double NNfunction_ns_chi03_dL::synapse0x291c300() {
   return (neuron0x290c960()*-0.00941651);
}

double NNfunction_ns_chi03_dL::synapse0x291c340() {
   return (neuron0x290cca0()*0.00685701);
}

double NNfunction_ns_chi03_dL::synapse0x291c380() {
   return (neuron0x290cfe0()*-0.00500561);
}

double NNfunction_ns_chi03_dL::synapse0x291c3c0() {
   return (neuron0x290d320()*0.0138364);
}

double NNfunction_ns_chi03_dL::synapse0x291c400() {
   return (neuron0x290d660()*-0.968772);
}

double NNfunction_ns_chi03_dL::synapse0x291c780() {
   return (neuron0x2908a10()*0.0156713);
}

double NNfunction_ns_chi03_dL::synapse0x291c7c0() {
   return (neuron0x2908cc0()*-0.00698076);
}

double NNfunction_ns_chi03_dL::synapse0x291c800() {
   return (neuron0x2909000()*0.0748114);
}

double NNfunction_ns_chi03_dL::synapse0x291c840() {
   return (neuron0x2909340()*-0.941911);
}

double NNfunction_ns_chi03_dL::synapse0x291c880() {
   return (neuron0x2909680()*-0.00295078);
}

double NNfunction_ns_chi03_dL::synapse0x291c8c0() {
   return (neuron0x29099c0()*-0.00507932);
}

double NNfunction_ns_chi03_dL::synapse0x291c900() {
   return (neuron0x2909d00()*-0.00519818);
}

double NNfunction_ns_chi03_dL::synapse0x291c940() {
   return (neuron0x290a040()*0.00391349);
}

double NNfunction_ns_chi03_dL::synapse0x291c980() {
   return (neuron0x290a380()*0.0223151);
}

double NNfunction_ns_chi03_dL::synapse0x291c9c0() {
   return (neuron0x290a6c0()*0.00480767);
}

double NNfunction_ns_chi03_dL::synapse0x291ca00() {
   return (neuron0x290aa00()*0.024896);
}

double NNfunction_ns_chi03_dL::synapse0x291ca40() {
   return (neuron0x290ad40()*0.529735);
}

double NNfunction_ns_chi03_dL::synapse0x291ca80() {
   return (neuron0x290b080()*-0.0174491);
}

double NNfunction_ns_chi03_dL::synapse0x291cac0() {
   return (neuron0x290b3c0()*0.0158173);
}

double NNfunction_ns_chi03_dL::synapse0x291cb00() {
   return (neuron0x290b700()*-0.0275819);
}

double NNfunction_ns_chi03_dL::synapse0x291cb40() {
   return (neuron0x290ba40()*-0.0477376);
}

double NNfunction_ns_chi03_dL::synapse0x291c5d0() {
   return (neuron0x290bd80()*0.0461122);
}

double NNfunction_ns_chi03_dL::synapse0x291c610() {
   return (neuron0x290c2e0()*-0.00211788);
}

double NNfunction_ns_chi03_dL::synapse0x291cc90() {
   return (neuron0x290c620()*-0.00148996);
}

double NNfunction_ns_chi03_dL::synapse0x291ccd0() {
   return (neuron0x290c960()*-0.00555716);
}

double NNfunction_ns_chi03_dL::synapse0x291cd10() {
   return (neuron0x290cca0()*-0.00456842);
}

double NNfunction_ns_chi03_dL::synapse0x291cd50() {
   return (neuron0x290cfe0()*0.015521);
}

double NNfunction_ns_chi03_dL::synapse0x291cd90() {
   return (neuron0x290d320()*-0.000837379);
}

double NNfunction_ns_chi03_dL::synapse0x291cdd0() {
   return (neuron0x290d660()*0.0403737);
}

double NNfunction_ns_chi03_dL::synapse0x291d150() {
   return (neuron0x2908a10()*0.58381);
}

double NNfunction_ns_chi03_dL::synapse0x291d190() {
   return (neuron0x2908cc0()*0.0134283);
}

double NNfunction_ns_chi03_dL::synapse0x291d1d0() {
   return (neuron0x2909000()*0.870304);
}

double NNfunction_ns_chi03_dL::synapse0x291d210() {
   return (neuron0x2909340()*0.00889449);
}

double NNfunction_ns_chi03_dL::synapse0x291d250() {
   return (neuron0x2909680()*0.0846224);
}

double NNfunction_ns_chi03_dL::synapse0x291d290() {
   return (neuron0x29099c0()*-0.256391);
}

double NNfunction_ns_chi03_dL::synapse0x291d2d0() {
   return (neuron0x2909d00()*-0.221406);
}

double NNfunction_ns_chi03_dL::synapse0x291d310() {
   return (neuron0x290a040()*0.0662307);
}

double NNfunction_ns_chi03_dL::synapse0x291d350() {
   return (neuron0x290a380()*0.235644);
}

double NNfunction_ns_chi03_dL::synapse0x2915510() {
   return (neuron0x290a6c0()*0.35603);
}

double NNfunction_ns_chi03_dL::synapse0x2915550() {
   return (neuron0x290aa00()*0.346452);
}

double NNfunction_ns_chi03_dL::synapse0x2915590() {
   return (neuron0x290ad40()*-0.567329);
}

double NNfunction_ns_chi03_dL::synapse0x29155d0() {
   return (neuron0x290b080()*0.00192404);
}

double NNfunction_ns_chi03_dL::synapse0x2915610() {
   return (neuron0x290b3c0()*-0.161611);
}

double NNfunction_ns_chi03_dL::synapse0x2915650() {
   return (neuron0x290b700()*0.151616);
}

double NNfunction_ns_chi03_dL::synapse0x2915690() {
   return (neuron0x290ba40()*-0.38673);
}

double NNfunction_ns_chi03_dL::synapse0x291cfa0() {
   return (neuron0x290bd80()*-0.0834294);
}

double NNfunction_ns_chi03_dL::synapse0x291cfe0() {
   return (neuron0x290c2e0()*-0.152849);
}

double NNfunction_ns_chi03_dL::synapse0x29157e0() {
   return (neuron0x290c620()*0.0887056);
}

double NNfunction_ns_chi03_dL::synapse0x2915820() {
   return (neuron0x290c960()*0.160624);
}

double NNfunction_ns_chi03_dL::synapse0x2915860() {
   return (neuron0x290cca0()*-0.108228);
}

double NNfunction_ns_chi03_dL::synapse0x29158a0() {
   return (neuron0x290cfe0()*0.262412);
}

double NNfunction_ns_chi03_dL::synapse0x29158e0() {
   return (neuron0x290d320()*0.102231);
}

double NNfunction_ns_chi03_dL::synapse0x2915920() {
   return (neuron0x290d660()*0.8127);
}

double NNfunction_ns_chi03_dL::synapse0x2915ca0() {
   return (neuron0x2908a10()*0.040405);
}

double NNfunction_ns_chi03_dL::synapse0x2915ce0() {
   return (neuron0x2908cc0()*-8.56654);
}

double NNfunction_ns_chi03_dL::synapse0x2915d20() {
   return (neuron0x2909000()*-0.0785748);
}

double NNfunction_ns_chi03_dL::synapse0x2915d60() {
   return (neuron0x2909340()*0.0328226);
}

double NNfunction_ns_chi03_dL::synapse0x2915da0() {
   return (neuron0x2909680()*-0.00790203);
}

double NNfunction_ns_chi03_dL::synapse0x2915de0() {
   return (neuron0x29099c0()*0.018129);
}

double NNfunction_ns_chi03_dL::synapse0x2915e20() {
   return (neuron0x2909d00()*-0.00171021);
}

double NNfunction_ns_chi03_dL::synapse0x2915e60() {
   return (neuron0x290a040()*-0.00401659);
}

double NNfunction_ns_chi03_dL::synapse0x2915ea0() {
   return (neuron0x290a380()*0.0109144);
}

double NNfunction_ns_chi03_dL::synapse0x2915ee0() {
   return (neuron0x290a6c0()*0.00159782);
}

double NNfunction_ns_chi03_dL::synapse0x2915f20() {
   return (neuron0x290aa00()*-0.00620101);
}

double NNfunction_ns_chi03_dL::synapse0x2915f60() {
   return (neuron0x290ad40()*0.140649);
}

double NNfunction_ns_chi03_dL::synapse0x2915fa0() {
   return (neuron0x290b080()*0.0118841);
}

double NNfunction_ns_chi03_dL::synapse0x2915fe0() {
   return (neuron0x290b3c0()*0.00875688);
}

double NNfunction_ns_chi03_dL::synapse0x2916020() {
   return (neuron0x290b700()*-0.0149398);
}

double NNfunction_ns_chi03_dL::synapse0x2916060() {
   return (neuron0x290ba40()*-0.0140761);
}

double NNfunction_ns_chi03_dL::synapse0x2915af0() {
   return (neuron0x290bd80()*-0.00855695);
}

double NNfunction_ns_chi03_dL::synapse0x2915b30() {
   return (neuron0x290c2e0()*0.0231257);
}

double NNfunction_ns_chi03_dL::synapse0x29161b0() {
   return (neuron0x290c620()*0.00436325);
}

double NNfunction_ns_chi03_dL::synapse0x29161f0() {
   return (neuron0x290c960()*0.0197248);
}

double NNfunction_ns_chi03_dL::synapse0x2916230() {
   return (neuron0x290cca0()*-0.023857);
}

double NNfunction_ns_chi03_dL::synapse0x2916270() {
   return (neuron0x290cfe0()*-0.00591192);
}

double NNfunction_ns_chi03_dL::synapse0x29162b0() {
   return (neuron0x290d320()*-0.00257813);
}

double NNfunction_ns_chi03_dL::synapse0x29162f0() {
   return (neuron0x290d660()*-2.74104);
}

double NNfunction_ns_chi03_dL::synapse0x29164c0() {
   return (neuron0x2908a10()*-0.101909);
}

double NNfunction_ns_chi03_dL::synapse0x291f550() {
   return (neuron0x2908cc0()*0.00782414);
}

double NNfunction_ns_chi03_dL::synapse0x291f590() {
   return (neuron0x2909000()*-0.138854);
}

double NNfunction_ns_chi03_dL::synapse0x291f5d0() {
   return (neuron0x2909340()*-0.215186);
}

double NNfunction_ns_chi03_dL::synapse0x291f610() {
   return (neuron0x2909680()*-0.0903898);
}

double NNfunction_ns_chi03_dL::synapse0x291f650() {
   return (neuron0x29099c0()*-0.224191);
}

double NNfunction_ns_chi03_dL::synapse0x291f690() {
   return (neuron0x2909d00()*0.0568318);
}

double NNfunction_ns_chi03_dL::synapse0x291f6d0() {
   return (neuron0x290a040()*-0.09278);
}

double NNfunction_ns_chi03_dL::synapse0x291f710() {
   return (neuron0x290a380()*0.0385714);
}

double NNfunction_ns_chi03_dL::synapse0x291f750() {
   return (neuron0x290a6c0()*-0.0660923);
}

double NNfunction_ns_chi03_dL::synapse0x291f790() {
   return (neuron0x290aa00()*-0.0137899);
}

double NNfunction_ns_chi03_dL::synapse0x291f7d0() {
   return (neuron0x290ad40()*-0.21814);
}

double NNfunction_ns_chi03_dL::synapse0x291f810() {
   return (neuron0x290b080()*0.0159826);
}

double NNfunction_ns_chi03_dL::synapse0x291f850() {
   return (neuron0x290b3c0()*0.097357);
}

double NNfunction_ns_chi03_dL::synapse0x291f890() {
   return (neuron0x290b700()*-0.0186546);
}

double NNfunction_ns_chi03_dL::synapse0x291f8d0() {
   return (neuron0x290ba40()*0.148562);
}

double NNfunction_ns_chi03_dL::synapse0x291f3a0() {
   return (neuron0x290bd80()*0.487793);
}

double NNfunction_ns_chi03_dL::synapse0x291f3e0() {
   return (neuron0x290c2e0()*-0.207089);
}

double NNfunction_ns_chi03_dL::synapse0x291fa20() {
   return (neuron0x290c620()*0.176279);
}

double NNfunction_ns_chi03_dL::synapse0x291fa60() {
   return (neuron0x290c960()*-0.0756908);
}

double NNfunction_ns_chi03_dL::synapse0x291faa0() {
   return (neuron0x290cca0()*-0.172411);
}

double NNfunction_ns_chi03_dL::synapse0x291fae0() {
   return (neuron0x290cfe0()*-0.0941509);
}

double NNfunction_ns_chi03_dL::synapse0x291fb20() {
   return (neuron0x290d320()*0.00529562);
}

double NNfunction_ns_chi03_dL::synapse0x291fb60() {
   return (neuron0x290d660()*0.18796);
}

double NNfunction_ns_chi03_dL::synapse0x291fee0() {
   return (neuron0x2908a10()*0.00909938);
}

double NNfunction_ns_chi03_dL::synapse0x291ff20() {
   return (neuron0x2908cc0()*-0.00718559);
}

double NNfunction_ns_chi03_dL::synapse0x291ff60() {
   return (neuron0x2909000()*1.32215);
}

double NNfunction_ns_chi03_dL::synapse0x291ffa0() {
   return (neuron0x2909340()*0.000412783);
}

double NNfunction_ns_chi03_dL::synapse0x291ffe0() {
   return (neuron0x2909680()*0.0162755);
}

double NNfunction_ns_chi03_dL::synapse0x2920020() {
   return (neuron0x29099c0()*-0.0272965);
}

double NNfunction_ns_chi03_dL::synapse0x2920060() {
   return (neuron0x2909d00()*-0.0294078);
}

double NNfunction_ns_chi03_dL::synapse0x29200a0() {
   return (neuron0x290a040()*-0.0178773);
}

double NNfunction_ns_chi03_dL::synapse0x29200e0() {
   return (neuron0x290a380()*0.0313048);
}

double NNfunction_ns_chi03_dL::synapse0x2920120() {
   return (neuron0x290a6c0()*-0.0032454);
}

double NNfunction_ns_chi03_dL::synapse0x2920160() {
   return (neuron0x290aa00()*0.00997856);
}

double NNfunction_ns_chi03_dL::synapse0x29201a0() {
   return (neuron0x290ad40()*-0.272507);
}

double NNfunction_ns_chi03_dL::synapse0x29201e0() {
   return (neuron0x290b080()*0.0222305);
}

double NNfunction_ns_chi03_dL::synapse0x2920220() {
   return (neuron0x290b3c0()*0.00302034);
}

double NNfunction_ns_chi03_dL::synapse0x2920260() {
   return (neuron0x290b700()*0.00430638);
}

double NNfunction_ns_chi03_dL::synapse0x29202a0() {
   return (neuron0x290ba40()*0.0175795);
}

double NNfunction_ns_chi03_dL::synapse0x291fd30() {
   return (neuron0x290bd80()*-0.0172144);
}

double NNfunction_ns_chi03_dL::synapse0x291fd70() {
   return (neuron0x290c2e0()*-0.0269112);
}

double NNfunction_ns_chi03_dL::synapse0x29203f0() {
   return (neuron0x290c620()*0.0364232);
}

double NNfunction_ns_chi03_dL::synapse0x2920430() {
   return (neuron0x290c960()*0.0139281);
}

double NNfunction_ns_chi03_dL::synapse0x2920470() {
   return (neuron0x290cca0()*-0.0305215);
}

double NNfunction_ns_chi03_dL::synapse0x29204b0() {
   return (neuron0x290cfe0()*-0.0401759);
}

double NNfunction_ns_chi03_dL::synapse0x29204f0() {
   return (neuron0x290d320()*-0.000122421);
}

double NNfunction_ns_chi03_dL::synapse0x2920530() {
   return (neuron0x290d660()*0.0911718);
}

double NNfunction_ns_chi03_dL::synapse0x29208b0() {
   return (neuron0x2908a10()*-0.00447071);
}

double NNfunction_ns_chi03_dL::synapse0x29208f0() {
   return (neuron0x2908cc0()*-0.0108772);
}

double NNfunction_ns_chi03_dL::synapse0x2920930() {
   return (neuron0x2909000()*0.165105);
}

double NNfunction_ns_chi03_dL::synapse0x2920970() {
   return (neuron0x2909340()*-0.0202687);
}

double NNfunction_ns_chi03_dL::synapse0x29209b0() {
   return (neuron0x2909680()*-0.0150501);
}

double NNfunction_ns_chi03_dL::synapse0x29209f0() {
   return (neuron0x29099c0()*-0.0118952);
}

double NNfunction_ns_chi03_dL::synapse0x2920a30() {
   return (neuron0x2909d00()*0.00498627);
}

double NNfunction_ns_chi03_dL::synapse0x2920a70() {
   return (neuron0x290a040()*0.0105842);
}

double NNfunction_ns_chi03_dL::synapse0x2920ab0() {
   return (neuron0x290a380()*-0.00629263);
}

double NNfunction_ns_chi03_dL::synapse0x2920af0() {
   return (neuron0x290a6c0()*0.0182468);
}

double NNfunction_ns_chi03_dL::synapse0x2920b30() {
   return (neuron0x290aa00()*-0.018477);
}

double NNfunction_ns_chi03_dL::synapse0x2920b70() {
   return (neuron0x290ad40()*-1.96031);
}

double NNfunction_ns_chi03_dL::synapse0x2920bb0() {
   return (neuron0x290b080()*-0.0127619);
}

double NNfunction_ns_chi03_dL::synapse0x2920bf0() {
   return (neuron0x290b3c0()*-0.0435787);
}

double NNfunction_ns_chi03_dL::synapse0x2920c30() {
   return (neuron0x290b700()*-0.0133062);
}

double NNfunction_ns_chi03_dL::synapse0x2920c70() {
   return (neuron0x290ba40()*-0.00697785);
}

double NNfunction_ns_chi03_dL::synapse0x2920700() {
   return (neuron0x290bd80()*-0.0410073);
}

double NNfunction_ns_chi03_dL::synapse0x2920740() {
   return (neuron0x290c2e0()*-0.0195157);
}

double NNfunction_ns_chi03_dL::synapse0x2920dc0() {
   return (neuron0x290c620()*0.00685856);
}

double NNfunction_ns_chi03_dL::synapse0x2920e00() {
   return (neuron0x290c960()*-0.0238415);
}

double NNfunction_ns_chi03_dL::synapse0x2920e40() {
   return (neuron0x290cca0()*-0.000423789);
}

double NNfunction_ns_chi03_dL::synapse0x2920e80() {
   return (neuron0x290cfe0()*-0.0297838);
}

double NNfunction_ns_chi03_dL::synapse0x2920ec0() {
   return (neuron0x290d320()*-0.0108482);
}

double NNfunction_ns_chi03_dL::synapse0x2920f00() {
   return (neuron0x290d660()*0.0412186);
}

double NNfunction_ns_chi03_dL::synapse0x2921280() {
   return (neuron0x2908a10()*-0.000838633);
}

double NNfunction_ns_chi03_dL::synapse0x29212c0() {
   return (neuron0x2908cc0()*-10.1489);
}

double NNfunction_ns_chi03_dL::synapse0x2921300() {
   return (neuron0x2909000()*-4.38119);
}

double NNfunction_ns_chi03_dL::synapse0x2921340() {
   return (neuron0x2909340()*0.0162825);
}

double NNfunction_ns_chi03_dL::synapse0x2921380() {
   return (neuron0x2909680()*0.00309697);
}

double NNfunction_ns_chi03_dL::synapse0x29213c0() {
   return (neuron0x29099c0()*-0.014905);
}

double NNfunction_ns_chi03_dL::synapse0x2921400() {
   return (neuron0x2909d00()*-0.0052632);
}

double NNfunction_ns_chi03_dL::synapse0x2921440() {
   return (neuron0x290a040()*-0.0158635);
}

double NNfunction_ns_chi03_dL::synapse0x2921480() {
   return (neuron0x290a380()*-0.0109722);
}

double NNfunction_ns_chi03_dL::synapse0x29214c0() {
   return (neuron0x290a6c0()*0.00966249);
}

double NNfunction_ns_chi03_dL::synapse0x2921500() {
   return (neuron0x290aa00()*0.00352984);
}

double NNfunction_ns_chi03_dL::synapse0x2921540() {
   return (neuron0x290ad40()*0.153084);
}

double NNfunction_ns_chi03_dL::synapse0x2921580() {
   return (neuron0x290b080()*0.00404804);
}

double NNfunction_ns_chi03_dL::synapse0x29215c0() {
   return (neuron0x290b3c0()*-0.0202615);
}

double NNfunction_ns_chi03_dL::synapse0x2921600() {
   return (neuron0x290b700()*-0.00583861);
}

double NNfunction_ns_chi03_dL::synapse0x2921640() {
   return (neuron0x290ba40()*-0.0066158);
}

double NNfunction_ns_chi03_dL::synapse0x29210d0() {
   return (neuron0x290bd80()*0.0160232);
}

double NNfunction_ns_chi03_dL::synapse0x2921110() {
   return (neuron0x290c2e0()*-0.013756);
}

double NNfunction_ns_chi03_dL::synapse0x2921790() {
   return (neuron0x290c620()*-0.0131821);
}

double NNfunction_ns_chi03_dL::synapse0x29217d0() {
   return (neuron0x290c960()*0.0181555);
}

double NNfunction_ns_chi03_dL::synapse0x2921810() {
   return (neuron0x290cca0()*-0.0301799);
}

double NNfunction_ns_chi03_dL::synapse0x2921850() {
   return (neuron0x290cfe0()*-0.00485641);
}

double NNfunction_ns_chi03_dL::synapse0x2921890() {
   return (neuron0x290d320()*0.0122791);
}

double NNfunction_ns_chi03_dL::synapse0x29218d0() {
   return (neuron0x290d660()*0.087955);
}

double NNfunction_ns_chi03_dL::synapse0x2921c50() {
   return (neuron0x2908a10()*-0.069075);
}

double NNfunction_ns_chi03_dL::synapse0x2921c90() {
   return (neuron0x2908cc0()*-7.4518);
}

double NNfunction_ns_chi03_dL::synapse0x2921cd0() {
   return (neuron0x2909000()*-0.125125);
}

double NNfunction_ns_chi03_dL::synapse0x2921d10() {
   return (neuron0x2909340()*0.0006354);
}

double NNfunction_ns_chi03_dL::synapse0x2921d50() {
   return (neuron0x2909680()*0.0109441);
}

double NNfunction_ns_chi03_dL::synapse0x2921d90() {
   return (neuron0x29099c0()*-0.00160545);
}

double NNfunction_ns_chi03_dL::synapse0x2921dd0() {
   return (neuron0x2909d00()*0.0150257);
}

double NNfunction_ns_chi03_dL::synapse0x2921e10() {
   return (neuron0x290a040()*-0.0249135);
}

double NNfunction_ns_chi03_dL::synapse0x2921e50() {
   return (neuron0x290a380()*0.00373422);
}

double NNfunction_ns_chi03_dL::synapse0x2921e90() {
   return (neuron0x290a6c0()*-0.0154375);
}

double NNfunction_ns_chi03_dL::synapse0x2921ed0() {
   return (neuron0x290aa00()*-0.00868494);
}

double NNfunction_ns_chi03_dL::synapse0x2921f10() {
   return (neuron0x290ad40()*0.0325162);
}

double NNfunction_ns_chi03_dL::synapse0x2921f50() {
   return (neuron0x290b080()*-0.00162877);
}

double NNfunction_ns_chi03_dL::synapse0x2921f90() {
   return (neuron0x290b3c0()*0.00563882);
}

double NNfunction_ns_chi03_dL::synapse0x2921fd0() {
   return (neuron0x290b700()*0.00118928);
}

double NNfunction_ns_chi03_dL::synapse0x2922010() {
   return (neuron0x290ba40()*0.019005);
}

double NNfunction_ns_chi03_dL::synapse0x2921aa0() {
   return (neuron0x290bd80()*0.0373663);
}

double NNfunction_ns_chi03_dL::synapse0x2921ae0() {
   return (neuron0x290c2e0()*0.00122325);
}

double NNfunction_ns_chi03_dL::synapse0x2922160() {
   return (neuron0x290c620()*-0.00443736);
}

double NNfunction_ns_chi03_dL::synapse0x29221a0() {
   return (neuron0x290c960()*0.00555458);
}

double NNfunction_ns_chi03_dL::synapse0x29221e0() {
   return (neuron0x290cca0()*0.0159856);
}

double NNfunction_ns_chi03_dL::synapse0x2922220() {
   return (neuron0x290cfe0()*0.00453075);
}

double NNfunction_ns_chi03_dL::synapse0x2922260() {
   return (neuron0x290d320()*0.00504047);
}

double NNfunction_ns_chi03_dL::synapse0x29222a0() {
   return (neuron0x290d660()*2.01236);
}

double NNfunction_ns_chi03_dL::synapse0x2922620() {
   return (neuron0x2908a10()*-0.0302028);
}

double NNfunction_ns_chi03_dL::synapse0x2922660() {
   return (neuron0x2908cc0()*8.95005);
}

double NNfunction_ns_chi03_dL::synapse0x29226a0() {
   return (neuron0x2909000()*-0.180321);
}

double NNfunction_ns_chi03_dL::synapse0x29226e0() {
   return (neuron0x2909340()*-0.0361884);
}

double NNfunction_ns_chi03_dL::synapse0x2922720() {
   return (neuron0x2909680()*0.00783229);
}

double NNfunction_ns_chi03_dL::synapse0x2922760() {
   return (neuron0x29099c0()*-0.021359);
}

double NNfunction_ns_chi03_dL::synapse0x29227a0() {
   return (neuron0x2909d00()*-0.00175401);
}

double NNfunction_ns_chi03_dL::synapse0x29227e0() {
   return (neuron0x290a040()*0.00990617);
}

double NNfunction_ns_chi03_dL::synapse0x2922820() {
   return (neuron0x290a380()*-0.0188135);
}

double NNfunction_ns_chi03_dL::synapse0x2922860() {
   return (neuron0x290a6c0()*-0.0150007);
}

double NNfunction_ns_chi03_dL::synapse0x29228a0() {
   return (neuron0x290aa00()*0.0108817);
}

double NNfunction_ns_chi03_dL::synapse0x29228e0() {
   return (neuron0x290ad40()*-0.151375);
}

double NNfunction_ns_chi03_dL::synapse0x2922920() {
   return (neuron0x290b080()*-0.0218395);
}

double NNfunction_ns_chi03_dL::synapse0x2922960() {
   return (neuron0x290b3c0()*-0.0117585);
}

double NNfunction_ns_chi03_dL::synapse0x29229a0() {
   return (neuron0x290b700()*0.0104675);
}

double NNfunction_ns_chi03_dL::synapse0x29229e0() {
   return (neuron0x290ba40()*0.0179524);
}

double NNfunction_ns_chi03_dL::synapse0x2922470() {
   return (neuron0x290bd80()*-0.0112993);
}

double NNfunction_ns_chi03_dL::synapse0x29224b0() {
   return (neuron0x290c2e0()*-0.00719507);
}

double NNfunction_ns_chi03_dL::synapse0x2922b30() {
   return (neuron0x290c620()*-0.00489092);
}

double NNfunction_ns_chi03_dL::synapse0x2922b70() {
   return (neuron0x290c960()*-0.0201443);
}

double NNfunction_ns_chi03_dL::synapse0x2922bb0() {
   return (neuron0x290cca0()*0.0247235);
}

double NNfunction_ns_chi03_dL::synapse0x2922bf0() {
   return (neuron0x290cfe0()*0.00448054);
}

double NNfunction_ns_chi03_dL::synapse0x2922c30() {
   return (neuron0x290d320()*-0.00298885);
}

double NNfunction_ns_chi03_dL::synapse0x2922c70() {
   return (neuron0x290d660()*2.85794);
}

double NNfunction_ns_chi03_dL::synapse0x2922ff0() {
   return (neuron0x2908a10()*1.44576);
}

double NNfunction_ns_chi03_dL::synapse0x2923030() {
   return (neuron0x2908cc0()*0.246258);
}

double NNfunction_ns_chi03_dL::synapse0x2923070() {
   return (neuron0x2909000()*-0.619742);
}

double NNfunction_ns_chi03_dL::synapse0x29230b0() {
   return (neuron0x2909340()*-0.0261661);
}

double NNfunction_ns_chi03_dL::synapse0x29230f0() {
   return (neuron0x2909680()*-0.229723);
}

double NNfunction_ns_chi03_dL::synapse0x2923130() {
   return (neuron0x29099c0()*-0.0354003);
}

double NNfunction_ns_chi03_dL::synapse0x2923170() {
   return (neuron0x2909d00()*-0.179243);
}

double NNfunction_ns_chi03_dL::synapse0x29231b0() {
   return (neuron0x290a040()*-0.33111);
}

double NNfunction_ns_chi03_dL::synapse0x29231f0() {
   return (neuron0x290a380()*0.290129);
}

double NNfunction_ns_chi03_dL::synapse0x2923230() {
   return (neuron0x290a6c0()*-0.165581);
}

double NNfunction_ns_chi03_dL::synapse0x2923270() {
   return (neuron0x290aa00()*0.181346);
}

double NNfunction_ns_chi03_dL::synapse0x29232b0() {
   return (neuron0x290ad40()*0.216178);
}

double NNfunction_ns_chi03_dL::synapse0x29232f0() {
   return (neuron0x290b080()*0.289545);
}

double NNfunction_ns_chi03_dL::synapse0x2923330() {
   return (neuron0x290b3c0()*-0.0530045);
}

double NNfunction_ns_chi03_dL::synapse0x2923370() {
   return (neuron0x290b700()*0.325251);
}

double NNfunction_ns_chi03_dL::synapse0x29233b0() {
   return (neuron0x290ba40()*0.0904108);
}

double NNfunction_ns_chi03_dL::synapse0x2922e40() {
   return (neuron0x290bd80()*-0.460544);
}

double NNfunction_ns_chi03_dL::synapse0x2922e80() {
   return (neuron0x290c2e0()*0.0077148);
}

double NNfunction_ns_chi03_dL::synapse0x2923500() {
   return (neuron0x290c620()*-0.210398);
}

double NNfunction_ns_chi03_dL::synapse0x2923540() {
   return (neuron0x290c960()*-0.258528);
}

double NNfunction_ns_chi03_dL::synapse0x2923580() {
   return (neuron0x290cca0()*0.214356);
}

double NNfunction_ns_chi03_dL::synapse0x29235c0() {
   return (neuron0x290cfe0()*-0.0323149);
}

double NNfunction_ns_chi03_dL::synapse0x2923600() {
   return (neuron0x290d320()*-0.00704515);
}

double NNfunction_ns_chi03_dL::synapse0x2923640() {
   return (neuron0x290d660()*-1.56183);
}

double NNfunction_ns_chi03_dL::synapse0x29239c0() {
   return (neuron0x2908a10()*0.0119618);
}

double NNfunction_ns_chi03_dL::synapse0x2923a00() {
   return (neuron0x2908cc0()*0.000215202);
}

double NNfunction_ns_chi03_dL::synapse0x2923a40() {
   return (neuron0x2909000()*0.0815936);
}

double NNfunction_ns_chi03_dL::synapse0x2923a80() {
   return (neuron0x2909340()*0.859692);
}

double NNfunction_ns_chi03_dL::synapse0x2923ac0() {
   return (neuron0x2909680()*0.000668364);
}

double NNfunction_ns_chi03_dL::synapse0x2923b00() {
   return (neuron0x29099c0()*-7.0766e-05);
}

double NNfunction_ns_chi03_dL::synapse0x2923b40() {
   return (neuron0x2909d00()*-0.0045399);
}

double NNfunction_ns_chi03_dL::synapse0x2923b80() {
   return (neuron0x290a040()*0.00826598);
}

double NNfunction_ns_chi03_dL::synapse0x2923bc0() {
   return (neuron0x290a380()*0.00130001);
}

double NNfunction_ns_chi03_dL::synapse0x2923c00() {
   return (neuron0x290a6c0()*0.0100779);
}

double NNfunction_ns_chi03_dL::synapse0x2923c40() {
   return (neuron0x290aa00()*0.0141123);
}

double NNfunction_ns_chi03_dL::synapse0x2923c80() {
   return (neuron0x290ad40()*0.501436);
}

double NNfunction_ns_chi03_dL::synapse0x2923cc0() {
   return (neuron0x290b080()*-0.0283357);
}

double NNfunction_ns_chi03_dL::synapse0x2923d00() {
   return (neuron0x290b3c0()*0.00298173);
}

double NNfunction_ns_chi03_dL::synapse0x2923d40() {
   return (neuron0x290b700()*-0.0186512);
}

double NNfunction_ns_chi03_dL::synapse0x2923d80() {
   return (neuron0x290ba40()*-0.0344314);
}

double NNfunction_ns_chi03_dL::synapse0x2923810() {
   return (neuron0x290bd80()*0.0310421);
}

double NNfunction_ns_chi03_dL::synapse0x2923850() {
   return (neuron0x290c2e0()*-0.00218414);
}

double NNfunction_ns_chi03_dL::synapse0x2923ed0() {
   return (neuron0x290c620()*-0.0030154);
}

double NNfunction_ns_chi03_dL::synapse0x2923f10() {
   return (neuron0x290c960()*-0.00512451);
}

double NNfunction_ns_chi03_dL::synapse0x2923f50() {
   return (neuron0x290cca0()*0.00382231);
}

double NNfunction_ns_chi03_dL::synapse0x2923f90() {
   return (neuron0x290cfe0()*0.0163719);
}

double NNfunction_ns_chi03_dL::synapse0x2923fd0() {
   return (neuron0x290d320()*-0.0113065);
}

double NNfunction_ns_chi03_dL::synapse0x2924010() {
   return (neuron0x290d660()*0.0697573);
}

double NNfunction_ns_chi03_dL::synapse0x2924390() {
   return (neuron0x2908a10()*-0.374519);
}

double NNfunction_ns_chi03_dL::synapse0x2918960() {
   return (neuron0x2908cc0()*0.0919571);
}

double NNfunction_ns_chi03_dL::synapse0x29189a0() {
   return (neuron0x2909000()*-0.34131);
}

double NNfunction_ns_chi03_dL::synapse0x29189e0() {
   return (neuron0x2909340()*0.651771);
}

double NNfunction_ns_chi03_dL::synapse0x2918c30() {
   return (neuron0x2909680()*-0.0470204);
}

double NNfunction_ns_chi03_dL::synapse0x2918c70() {
   return (neuron0x29099c0()*-0.0107236);
}

double NNfunction_ns_chi03_dL::synapse0x2918cb0() {
   return (neuron0x2909d00()*-0.308125);
}

double NNfunction_ns_chi03_dL::synapse0x2918f00() {
   return (neuron0x290a040()*0.712765);
}

double NNfunction_ns_chi03_dL::synapse0x2918f40() {
   return (neuron0x290a380()*-0.13885);
}

double NNfunction_ns_chi03_dL::synapse0x2919190() {
   return (neuron0x290a6c0()*-0.135434);
}

double NNfunction_ns_chi03_dL::synapse0x29191d0() {
   return (neuron0x290aa00()*-0.470188);
}

double NNfunction_ns_chi03_dL::synapse0x2919210() {
   return (neuron0x290ad40()*-0.736143);
}

double NNfunction_ns_chi03_dL::synapse0x2919460() {
   return (neuron0x290b080()*0.0786381);
}

double NNfunction_ns_chi03_dL::synapse0x29194a0() {
   return (neuron0x290b3c0()*-0.319623);
}

double NNfunction_ns_chi03_dL::synapse0x29196f0() {
   return (neuron0x290b700()*0.206276);
}

double NNfunction_ns_chi03_dL::synapse0x2919730() {
   return (neuron0x290ba40()*0.254587);
}

double NNfunction_ns_chi03_dL::synapse0x29241e0() {
   return (neuron0x290bd80()*0.0805635);
}

double NNfunction_ns_chi03_dL::synapse0x2924220() {
   return (neuron0x290c2e0()*0.747977);
}

double NNfunction_ns_chi03_dL::synapse0x2919880() {
   return (neuron0x290c620()*-0.586936);
}

double NNfunction_ns_chi03_dL::synapse0x2919d90() {
   return (neuron0x290c960()*-0.613255);
}

double NNfunction_ns_chi03_dL::synapse0x2919dd0() {
   return (neuron0x290cca0()*-0.171126);
}

double NNfunction_ns_chi03_dL::synapse0x2919e10() {
   return (neuron0x290cfe0()*-0.1923);
}

double NNfunction_ns_chi03_dL::synapse0x291a060() {
   return (neuron0x290d320()*0.149399);
}

double NNfunction_ns_chi03_dL::synapse0x291a0a0() {
   return (neuron0x290d660()*0.630018);
}

double NNfunction_ns_chi03_dL::synapse0x2919950() {
   return (neuron0x2908a10()*-0.0254392);
}

double NNfunction_ns_chi03_dL::synapse0x2919990() {
   return (neuron0x2908cc0()*-15.974);
}

double NNfunction_ns_chi03_dL::synapse0x29199d0() {
   return (neuron0x2909000()*-7.15677);
}

double NNfunction_ns_chi03_dL::synapse0x2919a10() {
   return (neuron0x2909340()*0.00613551);
}

double NNfunction_ns_chi03_dL::synapse0x291a390() {
   return (neuron0x2909680()*0.0146803);
}

double NNfunction_ns_chi03_dL::synapse0x29266e0() {
   return (neuron0x29099c0()*-0.00329185);
}

double NNfunction_ns_chi03_dL::synapse0x2926720() {
   return (neuron0x2909d00()*-0.0172085);
}

double NNfunction_ns_chi03_dL::synapse0x2926760() {
   return (neuron0x290a040()*-0.0236018);
}

double NNfunction_ns_chi03_dL::synapse0x29267a0() {
   return (neuron0x290a380()*0.0190729);
}

double NNfunction_ns_chi03_dL::synapse0x29267e0() {
   return (neuron0x290a6c0()*-0.00447018);
}

double NNfunction_ns_chi03_dL::synapse0x2926820() {
   return (neuron0x290aa00()*-0.0024695);
}

double NNfunction_ns_chi03_dL::synapse0x2926860() {
   return (neuron0x290ad40()*0.173822);
}

double NNfunction_ns_chi03_dL::synapse0x29268a0() {
   return (neuron0x290b080()*-0.0131552);
}

double NNfunction_ns_chi03_dL::synapse0x29268e0() {
   return (neuron0x290b3c0()*-0.0235535);
}

double NNfunction_ns_chi03_dL::synapse0x2926920() {
   return (neuron0x290b700()*0.0151013);
}

double NNfunction_ns_chi03_dL::synapse0x2926960() {
   return (neuron0x290ba40()*0.00653778);
}

double NNfunction_ns_chi03_dL::synapse0x291a270() {
   return (neuron0x290bd80()*-0.00668458);
}

double NNfunction_ns_chi03_dL::synapse0x291a2b0() {
   return (neuron0x290c2e0()*0.00598285);
}

double NNfunction_ns_chi03_dL::synapse0x2926ab0() {
   return (neuron0x290c620()*0.00866187);
}

double NNfunction_ns_chi03_dL::synapse0x2926af0() {
   return (neuron0x290c960()*0.028812);
}

double NNfunction_ns_chi03_dL::synapse0x2926b30() {
   return (neuron0x290cca0()*-0.0145508);
}

double NNfunction_ns_chi03_dL::synapse0x2926b70() {
   return (neuron0x290cfe0()*0.00292609);
}

double NNfunction_ns_chi03_dL::synapse0x2926bb0() {
   return (neuron0x290d320()*0.00644263);
}

double NNfunction_ns_chi03_dL::synapse0x2926bf0() {
   return (neuron0x290d660()*0.0831476);
}

double NNfunction_ns_chi03_dL::synapse0x2926f70() {
   return (neuron0x2908a10()*0.016272);
}

double NNfunction_ns_chi03_dL::synapse0x2926fb0() {
   return (neuron0x2908cc0()*-0.017765);
}

double NNfunction_ns_chi03_dL::synapse0x2926ff0() {
   return (neuron0x2909000()*-0.173127);
}

double NNfunction_ns_chi03_dL::synapse0x2927030() {
   return (neuron0x2909340()*-0.0362346);
}

double NNfunction_ns_chi03_dL::synapse0x2927070() {
   return (neuron0x2909680()*0.000907904);
}

double NNfunction_ns_chi03_dL::synapse0x29270b0() {
   return (neuron0x29099c0()*-0.0147171);
}

double NNfunction_ns_chi03_dL::synapse0x29270f0() {
   return (neuron0x2909d00()*-0.0250961);
}

double NNfunction_ns_chi03_dL::synapse0x2927130() {
   return (neuron0x290a040()*-0.00285982);
}

double NNfunction_ns_chi03_dL::synapse0x2927170() {
   return (neuron0x290a380()*-0.00402954);
}

double NNfunction_ns_chi03_dL::synapse0x29271b0() {
   return (neuron0x290a6c0()*0.00592941);
}

double NNfunction_ns_chi03_dL::synapse0x29271f0() {
   return (neuron0x290aa00()*-0.0151016);
}

double NNfunction_ns_chi03_dL::synapse0x2927230() {
   return (neuron0x290ad40()*-1.00362);
}

double NNfunction_ns_chi03_dL::synapse0x2927270() {
   return (neuron0x290b080()*-0.0219956);
}

double NNfunction_ns_chi03_dL::synapse0x29272b0() {
   return (neuron0x290b3c0()*-0.01761);
}

double NNfunction_ns_chi03_dL::synapse0x29272f0() {
   return (neuron0x290b700()*-0.00864165);
}

double NNfunction_ns_chi03_dL::synapse0x2927330() {
   return (neuron0x290ba40()*-0.00973766);
}

double NNfunction_ns_chi03_dL::synapse0x2926dc0() {
   return (neuron0x290bd80()*-0.0446008);
}

double NNfunction_ns_chi03_dL::synapse0x2926e00() {
   return (neuron0x290c2e0()*-0.0201042);
}

double NNfunction_ns_chi03_dL::synapse0x2927480() {
   return (neuron0x290c620()*-0.00614735);
}

double NNfunction_ns_chi03_dL::synapse0x29274c0() {
   return (neuron0x290c960()*-0.0141444);
}

double NNfunction_ns_chi03_dL::synapse0x2927500() {
   return (neuron0x290cca0()*0.00436441);
}

double NNfunction_ns_chi03_dL::synapse0x2927540() {
   return (neuron0x290cfe0()*-0.0125986);
}

double NNfunction_ns_chi03_dL::synapse0x2927580() {
   return (neuron0x290d320()*-0.00385185);
}

double NNfunction_ns_chi03_dL::synapse0x29275c0() {
   return (neuron0x290d660()*0.00770553);
}

double NNfunction_ns_chi03_dL::synapse0x2927940() {
   return (neuron0x2908a10()*-0.00200016);
}

double NNfunction_ns_chi03_dL::synapse0x2927980() {
   return (neuron0x2908cc0()*0.0221939);
}

double NNfunction_ns_chi03_dL::synapse0x29279c0() {
   return (neuron0x2909000()*2.61286);
}

double NNfunction_ns_chi03_dL::synapse0x2927a00() {
   return (neuron0x2909340()*-0.0309395);
}

double NNfunction_ns_chi03_dL::synapse0x2927a40() {
   return (neuron0x2909680()*6.95673e-05);
}

double NNfunction_ns_chi03_dL::synapse0x2927a80() {
   return (neuron0x29099c0()*-0.0100394);
}

double NNfunction_ns_chi03_dL::synapse0x2927ac0() {
   return (neuron0x2909d00()*-0.00363099);
}

double NNfunction_ns_chi03_dL::synapse0x2927b00() {
   return (neuron0x290a040()*0.0180643);
}

double NNfunction_ns_chi03_dL::synapse0x2927b40() {
   return (neuron0x290a380()*0.0292073);
}

double NNfunction_ns_chi03_dL::synapse0x2927b80() {
   return (neuron0x290a6c0()*0.0122337);
}

double NNfunction_ns_chi03_dL::synapse0x2927bc0() {
   return (neuron0x290aa00()*0.00989598);
}

double NNfunction_ns_chi03_dL::synapse0x2927c00() {
   return (neuron0x290ad40()*0.442849);
}

double NNfunction_ns_chi03_dL::synapse0x2927c40() {
   return (neuron0x290b080()*0.0297295);
}

double NNfunction_ns_chi03_dL::synapse0x2927c80() {
   return (neuron0x290b3c0()*-0.0302562);
}

double NNfunction_ns_chi03_dL::synapse0x2927cc0() {
   return (neuron0x290b700()*0.00695191);
}

double NNfunction_ns_chi03_dL::synapse0x2927d00() {
   return (neuron0x290ba40()*0.00716508);
}

double NNfunction_ns_chi03_dL::synapse0x2927790() {
   return (neuron0x290bd80()*-0.0287561);
}

double NNfunction_ns_chi03_dL::synapse0x29277d0() {
   return (neuron0x290c2e0()*0.00704683);
}

double NNfunction_ns_chi03_dL::synapse0x2927e50() {
   return (neuron0x290c620()*-0.0197224);
}

double NNfunction_ns_chi03_dL::synapse0x2927e90() {
   return (neuron0x290c960()*0.00503787);
}

double NNfunction_ns_chi03_dL::synapse0x2927ed0() {
   return (neuron0x290cca0()*-0.00214665);
}

double NNfunction_ns_chi03_dL::synapse0x2927f10() {
   return (neuron0x290cfe0()*-0.0024062);
}

double NNfunction_ns_chi03_dL::synapse0x2927f50() {
   return (neuron0x290d320()*-0.00515605);
}

double NNfunction_ns_chi03_dL::synapse0x2927f90() {
   return (neuron0x290d660()*-1.47481);
}

double NNfunction_ns_chi03_dL::synapse0x2928310() {
   return (neuron0x2908a10()*-0.0652931);
}

double NNfunction_ns_chi03_dL::synapse0x2928350() {
   return (neuron0x2908cc0()*-5.51915);
}

double NNfunction_ns_chi03_dL::synapse0x2928390() {
   return (neuron0x2909000()*-1.10273);
}

double NNfunction_ns_chi03_dL::synapse0x29283d0() {
   return (neuron0x2909340()*0.0153896);
}

double NNfunction_ns_chi03_dL::synapse0x2928410() {
   return (neuron0x2909680()*0.00833216);
}

double NNfunction_ns_chi03_dL::synapse0x2928450() {
   return (neuron0x29099c0()*-0.0116406);
}

double NNfunction_ns_chi03_dL::synapse0x2928490() {
   return (neuron0x2909d00()*0.0169198);
}

double NNfunction_ns_chi03_dL::synapse0x29284d0() {
   return (neuron0x290a040()*-0.0118685);
}

double NNfunction_ns_chi03_dL::synapse0x2928510() {
   return (neuron0x290a380()*0.00677092);
}

double NNfunction_ns_chi03_dL::synapse0x2928550() {
   return (neuron0x290a6c0()*-0.0189536);
}

double NNfunction_ns_chi03_dL::synapse0x2928590() {
   return (neuron0x290aa00()*0.0219242);
}

double NNfunction_ns_chi03_dL::synapse0x29285d0() {
   return (neuron0x290ad40()*0.276984);
}

double NNfunction_ns_chi03_dL::synapse0x2928610() {
   return (neuron0x290b080()*-0.00153506);
}

double NNfunction_ns_chi03_dL::synapse0x2928650() {
   return (neuron0x290b3c0()*-0.0172374);
}

double NNfunction_ns_chi03_dL::synapse0x2928690() {
   return (neuron0x290b700()*0.0164171);
}

double NNfunction_ns_chi03_dL::synapse0x29286d0() {
   return (neuron0x290ba40()*-0.00303139);
}

double NNfunction_ns_chi03_dL::synapse0x2928160() {
   return (neuron0x290bd80()*-0.0116173);
}

double NNfunction_ns_chi03_dL::synapse0x29281a0() {
   return (neuron0x290c2e0()*-0.00721547);
}

double NNfunction_ns_chi03_dL::synapse0x2928820() {
   return (neuron0x290c620()*-0.00752712);
}

double NNfunction_ns_chi03_dL::synapse0x2928860() {
   return (neuron0x290c960()*-0.0134067);
}

double NNfunction_ns_chi03_dL::synapse0x29288a0() {
   return (neuron0x290cca0()*-0.0162612);
}

double NNfunction_ns_chi03_dL::synapse0x29288e0() {
   return (neuron0x290cfe0()*-0.0198769);
}

double NNfunction_ns_chi03_dL::synapse0x2928920() {
   return (neuron0x290d320()*0.0172211);
}

double NNfunction_ns_chi03_dL::synapse0x2928960() {
   return (neuron0x290d660()*-0.906746);
}

double NNfunction_ns_chi03_dL::synapse0x2928ce0() {
   return (neuron0x2908a10()*-0.161318);
}

double NNfunction_ns_chi03_dL::synapse0x2928d20() {
   return (neuron0x2908cc0()*-0.129625);
}

double NNfunction_ns_chi03_dL::synapse0x2928d60() {
   return (neuron0x2909000()*0.495141);
}

double NNfunction_ns_chi03_dL::synapse0x2928da0() {
   return (neuron0x2909340()*0.507632);
}

double NNfunction_ns_chi03_dL::synapse0x2928de0() {
   return (neuron0x2909680()*-0.345679);
}

double NNfunction_ns_chi03_dL::synapse0x2928e20() {
   return (neuron0x29099c0()*0.00880006);
}

double NNfunction_ns_chi03_dL::synapse0x2928e60() {
   return (neuron0x2909d00()*0.644371);
}

double NNfunction_ns_chi03_dL::synapse0x2928ea0() {
   return (neuron0x290a040()*0.936065);
}

double NNfunction_ns_chi03_dL::synapse0x2928ee0() {
   return (neuron0x290a380()*-0.310627);
}

double NNfunction_ns_chi03_dL::synapse0x2928f20() {
   return (neuron0x290a6c0()*-0.0913183);
}

double NNfunction_ns_chi03_dL::synapse0x2928f60() {
   return (neuron0x290aa00()*-0.0187669);
}

double NNfunction_ns_chi03_dL::synapse0x2928fa0() {
   return (neuron0x290ad40()*-1.55381);
}

double NNfunction_ns_chi03_dL::synapse0x2928fe0() {
   return (neuron0x290b080()*0.0389657);
}

double NNfunction_ns_chi03_dL::synapse0x2929020() {
   return (neuron0x290b3c0()*-0.126062);
}

double NNfunction_ns_chi03_dL::synapse0x2929060() {
   return (neuron0x290b700()*-0.283944);
}

double NNfunction_ns_chi03_dL::synapse0x29290a0() {
   return (neuron0x290ba40()*0.389498);
}

double NNfunction_ns_chi03_dL::synapse0x2928b30() {
   return (neuron0x290bd80()*0.254034);
}

double NNfunction_ns_chi03_dL::synapse0x2928b70() {
   return (neuron0x290c2e0()*-0.0313509);
}

double NNfunction_ns_chi03_dL::synapse0x29291f0() {
   return (neuron0x290c620()*0.199493);
}

double NNfunction_ns_chi03_dL::synapse0x2929230() {
   return (neuron0x290c960()*0.0274176);
}

double NNfunction_ns_chi03_dL::synapse0x2929270() {
   return (neuron0x290cca0()*0.295575);
}

double NNfunction_ns_chi03_dL::synapse0x29292b0() {
   return (neuron0x290cfe0()*-0.0627645);
}

double NNfunction_ns_chi03_dL::synapse0x29292f0() {
   return (neuron0x290d320()*-0.371874);
}

double NNfunction_ns_chi03_dL::synapse0x2929330() {
   return (neuron0x290d660()*-0.401005);
}

double NNfunction_ns_chi03_dL::synapse0x29296b0() {
   return (neuron0x2908a10()*-0.010148);
}

double NNfunction_ns_chi03_dL::synapse0x29296f0() {
   return (neuron0x2908cc0()*-0.00979133);
}

double NNfunction_ns_chi03_dL::synapse0x2929730() {
   return (neuron0x2909000()*-1.62429);
}

double NNfunction_ns_chi03_dL::synapse0x2929770() {
   return (neuron0x2909340()*0.0340853);
}

double NNfunction_ns_chi03_dL::synapse0x29297b0() {
   return (neuron0x2909680()*0.0106662);
}

double NNfunction_ns_chi03_dL::synapse0x29297f0() {
   return (neuron0x29099c0()*0.00123541);
}

double NNfunction_ns_chi03_dL::synapse0x2929830() {
   return (neuron0x2909d00()*-0.00261824);
}

double NNfunction_ns_chi03_dL::synapse0x2929870() {
   return (neuron0x290a040()*-0.00662868);
}

double NNfunction_ns_chi03_dL::synapse0x29298b0() {
   return (neuron0x290a380()*-0.00382341);
}

double NNfunction_ns_chi03_dL::synapse0x29298f0() {
   return (neuron0x290a6c0()*0.00587923);
}

double NNfunction_ns_chi03_dL::synapse0x2929930() {
   return (neuron0x290aa00()*-0.0115562);
}

double NNfunction_ns_chi03_dL::synapse0x2929970() {
   return (neuron0x290ad40()*-0.0877284);
}

double NNfunction_ns_chi03_dL::synapse0x29299b0() {
   return (neuron0x290b080()*-0.000728133);
}

double NNfunction_ns_chi03_dL::synapse0x29299f0() {
   return (neuron0x290b3c0()*-0.00641414);
}

double NNfunction_ns_chi03_dL::synapse0x2929a30() {
   return (neuron0x290b700()*0.00531803);
}

double NNfunction_ns_chi03_dL::synapse0x2929a70() {
   return (neuron0x290ba40()*-0.00284688);
}

double NNfunction_ns_chi03_dL::synapse0x2929500() {
   return (neuron0x290bd80()*-0.022907);
}

double NNfunction_ns_chi03_dL::synapse0x2929540() {
   return (neuron0x290c2e0()*-0.0160873);
}

double NNfunction_ns_chi03_dL::synapse0x2929bc0() {
   return (neuron0x290c620()*0.00532758);
}

double NNfunction_ns_chi03_dL::synapse0x2929c00() {
   return (neuron0x290c960()*-0.0144337);
}

double NNfunction_ns_chi03_dL::synapse0x2929c40() {
   return (neuron0x290cca0()*-0.00904859);
}

double NNfunction_ns_chi03_dL::synapse0x2929c80() {
   return (neuron0x290cfe0()*0.0198973);
}

double NNfunction_ns_chi03_dL::synapse0x2929cc0() {
   return (neuron0x290d320()*0.000780233);
}

double NNfunction_ns_chi03_dL::synapse0x2929d00() {
   return (neuron0x290d660()*1.70403);
}

double NNfunction_ns_chi03_dL::synapse0x292a080() {
   return (neuron0x2908a10()*0.016269);
}

double NNfunction_ns_chi03_dL::synapse0x292a0c0() {
   return (neuron0x2908cc0()*0.00979982);
}

double NNfunction_ns_chi03_dL::synapse0x292a100() {
   return (neuron0x2909000()*0.0982738);
}

double NNfunction_ns_chi03_dL::synapse0x292a140() {
   return (neuron0x2909340()*-0.0397502);
}

double NNfunction_ns_chi03_dL::synapse0x292a180() {
   return (neuron0x2909680()*-0.017913);
}

double NNfunction_ns_chi03_dL::synapse0x292a1c0() {
   return (neuron0x29099c0()*-0.0103163);
}

double NNfunction_ns_chi03_dL::synapse0x292a200() {
   return (neuron0x2909d00()*-0.013854);
}

double NNfunction_ns_chi03_dL::synapse0x292a240() {
   return (neuron0x290a040()*0.0415704);
}

double NNfunction_ns_chi03_dL::synapse0x292a280() {
   return (neuron0x290a380()*0.00797433);
}

double NNfunction_ns_chi03_dL::synapse0x292a2c0() {
   return (neuron0x290a6c0()*0.0465053);
}

double NNfunction_ns_chi03_dL::synapse0x292a300() {
   return (neuron0x290aa00()*0.0201122);
}

double NNfunction_ns_chi03_dL::synapse0x292a340() {
   return (neuron0x290ad40()*-3.48445);
}

double NNfunction_ns_chi03_dL::synapse0x292a380() {
   return (neuron0x290b080()*-0.0466942);
}

double NNfunction_ns_chi03_dL::synapse0x292a3c0() {
   return (neuron0x290b3c0()*-0.0359068);
}

double NNfunction_ns_chi03_dL::synapse0x292a400() {
   return (neuron0x290b700()*-0.011929);
}

double NNfunction_ns_chi03_dL::synapse0x292a440() {
   return (neuron0x290ba40()*-0.0369217);
}

double NNfunction_ns_chi03_dL::synapse0x2929ed0() {
   return (neuron0x290bd80()*-0.0485647);
}

double NNfunction_ns_chi03_dL::synapse0x2929f10() {
   return (neuron0x290c2e0()*-0.040425);
}

double NNfunction_ns_chi03_dL::synapse0x292a590() {
   return (neuron0x290c620()*-0.0153634);
}

double NNfunction_ns_chi03_dL::synapse0x292a5d0() {
   return (neuron0x290c960()*0.0285963);
}

double NNfunction_ns_chi03_dL::synapse0x292a610() {
   return (neuron0x290cca0()*-0.0292885);
}

double NNfunction_ns_chi03_dL::synapse0x292a650() {
   return (neuron0x290cfe0()*-0.0402256);
}

double NNfunction_ns_chi03_dL::synapse0x292a690() {
   return (neuron0x290d320()*-0.0691653);
}

double NNfunction_ns_chi03_dL::synapse0x292a6d0() {
   return (neuron0x290d660()*0.0315236);
}

double NNfunction_ns_chi03_dL::synapse0x292aa50() {
   return (neuron0x2908a10()*-0.0647241);
}

double NNfunction_ns_chi03_dL::synapse0x292aa90() {
   return (neuron0x2908cc0()*0.00794777);
}

double NNfunction_ns_chi03_dL::synapse0x292aad0() {
   return (neuron0x2909000()*-5.51534);
}

double NNfunction_ns_chi03_dL::synapse0x292ab10() {
   return (neuron0x2909340()*-0.0222545);
}

double NNfunction_ns_chi03_dL::synapse0x292ab50() {
   return (neuron0x2909680()*-0.0044451);
}

double NNfunction_ns_chi03_dL::synapse0x292ab90() {
   return (neuron0x29099c0()*-0.00506111);
}

double NNfunction_ns_chi03_dL::synapse0x292abd0() {
   return (neuron0x2909d00()*0.020027);
}

double NNfunction_ns_chi03_dL::synapse0x292ac10() {
   return (neuron0x290a040()*-0.00564339);
}

double NNfunction_ns_chi03_dL::synapse0x292ac50() {
   return (neuron0x290a380()*0.00513259);
}

double NNfunction_ns_chi03_dL::synapse0x292ac90() {
   return (neuron0x290a6c0()*0.0125982);
}

double NNfunction_ns_chi03_dL::synapse0x292acd0() {
   return (neuron0x290aa00()*0.0154162);
}

double NNfunction_ns_chi03_dL::synapse0x292ad10() {
   return (neuron0x290ad40()*0.109473);
}

double NNfunction_ns_chi03_dL::synapse0x292ad50() {
   return (neuron0x290b080()*-0.00303604);
}

double NNfunction_ns_chi03_dL::synapse0x292ad90() {
   return (neuron0x290b3c0()*0.0111989);
}

double NNfunction_ns_chi03_dL::synapse0x292add0() {
   return (neuron0x290b700()*0.00298596);
}

double NNfunction_ns_chi03_dL::synapse0x292ae10() {
   return (neuron0x290ba40()*-0.00350943);
}

double NNfunction_ns_chi03_dL::synapse0x292a8a0() {
   return (neuron0x290bd80()*0.0285255);
}

double NNfunction_ns_chi03_dL::synapse0x292a8e0() {
   return (neuron0x290c2e0()*0.0178866);
}

double NNfunction_ns_chi03_dL::synapse0x292af60() {
   return (neuron0x290c620()*-0.00690537);
}

double NNfunction_ns_chi03_dL::synapse0x292afa0() {
   return (neuron0x290c960()*0.00972491);
}

double NNfunction_ns_chi03_dL::synapse0x292afe0() {
   return (neuron0x290cca0()*0.0179764);
}

double NNfunction_ns_chi03_dL::synapse0x292b020() {
   return (neuron0x290cfe0()*0.0121194);
}

double NNfunction_ns_chi03_dL::synapse0x292b060() {
   return (neuron0x290d320()*0.004802);
}

double NNfunction_ns_chi03_dL::synapse0x292b0a0() {
   return (neuron0x290d660()*-2.81892);
}

double NNfunction_ns_chi03_dL::synapse0x2913b50() {
   return (neuron0x2908a10()*0.0877343);
}

double NNfunction_ns_chi03_dL::synapse0x2913b90() {
   return (neuron0x2908cc0()*-0.0358147);
}

double NNfunction_ns_chi03_dL::synapse0x2913bd0() {
   return (neuron0x2909000()*2.59465);
}

double NNfunction_ns_chi03_dL::synapse0x2913c10() {
   return (neuron0x2909340()*0.0538415);
}

double NNfunction_ns_chi03_dL::synapse0x2913c50() {
   return (neuron0x2909680()*0.0068164);
}

double NNfunction_ns_chi03_dL::synapse0x2913c90() {
   return (neuron0x29099c0()*0.00147429);
}

double NNfunction_ns_chi03_dL::synapse0x2913cd0() {
   return (neuron0x2909d00()*-0.0241527);
}

double NNfunction_ns_chi03_dL::synapse0x2913d10() {
   return (neuron0x290a040()*0.0106294);
}

double NNfunction_ns_chi03_dL::synapse0x292b830() {
   return (neuron0x290a380()*-0.00111951);
}

double NNfunction_ns_chi03_dL::synapse0x292b870() {
   return (neuron0x290a6c0()*-0.0296043);
}

double NNfunction_ns_chi03_dL::synapse0x292b8b0() {
   return (neuron0x290aa00()*-0.0295318);
}

double NNfunction_ns_chi03_dL::synapse0x292b8f0() {
   return (neuron0x290ad40()*0.00714092);
}

double NNfunction_ns_chi03_dL::synapse0x292b930() {
   return (neuron0x290b080()*0.0061274);
}

double NNfunction_ns_chi03_dL::synapse0x292b970() {
   return (neuron0x290b3c0()*-0.0082387);
}

double NNfunction_ns_chi03_dL::synapse0x292b9b0() {
   return (neuron0x290b700()*0.00739366);
}

double NNfunction_ns_chi03_dL::synapse0x292b9f0() {
   return (neuron0x290ba40()*0.000129103);
}

double NNfunction_ns_chi03_dL::synapse0x292b270() {
   return (neuron0x290bd80()*-0.0278182);
}

double NNfunction_ns_chi03_dL::synapse0x292b2b0() {
   return (neuron0x290c2e0()*-0.00995056);
}

double NNfunction_ns_chi03_dL::synapse0x292bb40() {
   return (neuron0x290c620()*0.00810746);
}

double NNfunction_ns_chi03_dL::synapse0x292bb80() {
   return (neuron0x290c960()*0.00894126);
}

double NNfunction_ns_chi03_dL::synapse0x292bbc0() {
   return (neuron0x290cca0()*-0.0066024);
}

double NNfunction_ns_chi03_dL::synapse0x292bc00() {
   return (neuron0x290cfe0()*-0.0447551);
}

double NNfunction_ns_chi03_dL::synapse0x292bc40() {
   return (neuron0x290d320()*-0.00415527);
}

double NNfunction_ns_chi03_dL::synapse0x292bc80() {
   return (neuron0x290d660()*1.14069);
}

double NNfunction_ns_chi03_dL::synapse0x292c000() {
   return (neuron0x2908a10()*-0.0593247);
}

double NNfunction_ns_chi03_dL::synapse0x292c040() {
   return (neuron0x2908cc0()*0.037147);
}

double NNfunction_ns_chi03_dL::synapse0x292c080() {
   return (neuron0x2909000()*0.0796698);
}

double NNfunction_ns_chi03_dL::synapse0x292c0c0() {
   return (neuron0x2909340()*0.127677);
}

double NNfunction_ns_chi03_dL::synapse0x292c100() {
   return (neuron0x2909680()*0.0073678);
}

double NNfunction_ns_chi03_dL::synapse0x292c140() {
   return (neuron0x29099c0()*0.0522681);
}

double NNfunction_ns_chi03_dL::synapse0x292c180() {
   return (neuron0x2909d00()*-0.0765559);
}

double NNfunction_ns_chi03_dL::synapse0x292c1c0() {
   return (neuron0x290a040()*-0.0793091);
}

double NNfunction_ns_chi03_dL::synapse0x292c200() {
   return (neuron0x290a380()*-0.13258);
}

double NNfunction_ns_chi03_dL::synapse0x292c240() {
   return (neuron0x290a6c0()*0.116904);
}

double NNfunction_ns_chi03_dL::synapse0x292c280() {
   return (neuron0x290aa00()*-0.0267649);
}

double NNfunction_ns_chi03_dL::synapse0x292c2c0() {
   return (neuron0x290ad40()*0.315417);
}

double NNfunction_ns_chi03_dL::synapse0x292c300() {
   return (neuron0x290b080()*-0.188446);
}

double NNfunction_ns_chi03_dL::synapse0x292c340() {
   return (neuron0x290b3c0()*-0.150458);
}

double NNfunction_ns_chi03_dL::synapse0x292c380() {
   return (neuron0x290b700()*0.0127378);
}

double NNfunction_ns_chi03_dL::synapse0x292c3c0() {
   return (neuron0x290ba40()*-0.110351);
}

double NNfunction_ns_chi03_dL::synapse0x292be50() {
   return (neuron0x290bd80()*-0.260235);
}

double NNfunction_ns_chi03_dL::synapse0x292be90() {
   return (neuron0x290c2e0()*-0.0878027);
}

double NNfunction_ns_chi03_dL::synapse0x292c510() {
   return (neuron0x290c620()*0.015066);
}

double NNfunction_ns_chi03_dL::synapse0x292c550() {
   return (neuron0x290c960()*-0.0953316);
}

double NNfunction_ns_chi03_dL::synapse0x292c590() {
   return (neuron0x290cca0()*0.0768644);
}

double NNfunction_ns_chi03_dL::synapse0x292c5d0() {
   return (neuron0x290cfe0()*0.080881);
}

double NNfunction_ns_chi03_dL::synapse0x292c610() {
   return (neuron0x290d320()*-0.0172849);
}

double NNfunction_ns_chi03_dL::synapse0x292c650() {
   return (neuron0x290d660()*-0.0242035);
}

double NNfunction_ns_chi03_dL::synapse0x292c9d0() {
   return (neuron0x2908a10()*0.0348899);
}

double NNfunction_ns_chi03_dL::synapse0x292ca10() {
   return (neuron0x2908cc0()*8.77269);
}

double NNfunction_ns_chi03_dL::synapse0x292ca50() {
   return (neuron0x2909000()*-0.195837);
}

double NNfunction_ns_chi03_dL::synapse0x292ca90() {
   return (neuron0x2909340()*0.0171323);
}

double NNfunction_ns_chi03_dL::synapse0x292cad0() {
   return (neuron0x2909680()*-0.000634253);
}

double NNfunction_ns_chi03_dL::synapse0x292cb10() {
   return (neuron0x29099c0()*-0.00575669);
}

double NNfunction_ns_chi03_dL::synapse0x292cb50() {
   return (neuron0x2909d00()*-0.0196958);
}

double NNfunction_ns_chi03_dL::synapse0x292cb90() {
   return (neuron0x290a040()*0.00282698);
}

double NNfunction_ns_chi03_dL::synapse0x292cbd0() {
   return (neuron0x290a380()*-0.00430929);
}

double NNfunction_ns_chi03_dL::synapse0x292cc10() {
   return (neuron0x290a6c0()*0.031002);
}

double NNfunction_ns_chi03_dL::synapse0x292cc50() {
   return (neuron0x290aa00()*0.0127914);
}

double NNfunction_ns_chi03_dL::synapse0x292cc90() {
   return (neuron0x290ad40()*-0.15787);
}

double NNfunction_ns_chi03_dL::synapse0x292ccd0() {
   return (neuron0x290b080()*0.00170582);
}

double NNfunction_ns_chi03_dL::synapse0x292cd10() {
   return (neuron0x290b3c0()*-0.0146395);
}

double NNfunction_ns_chi03_dL::synapse0x292cd50() {
   return (neuron0x290b700()*0.00131107);
}

double NNfunction_ns_chi03_dL::synapse0x292cd90() {
   return (neuron0x290ba40()*-0.021257);
}

double NNfunction_ns_chi03_dL::synapse0x292c820() {
   return (neuron0x290bd80()*-0.00916884);
}

double NNfunction_ns_chi03_dL::synapse0x292c860() {
   return (neuron0x290c2e0()*-0.0139495);
}

double NNfunction_ns_chi03_dL::synapse0x291d390() {
   return (neuron0x290c620()*-0.00657781);
}

double NNfunction_ns_chi03_dL::synapse0x291d3d0() {
   return (neuron0x290c960()*0.00135718);
}

double NNfunction_ns_chi03_dL::synapse0x291d410() {
   return (neuron0x290cca0()*-0.00340129);
}

double NNfunction_ns_chi03_dL::synapse0x291d450() {
   return (neuron0x290cfe0()*-0.00382865);
}

double NNfunction_ns_chi03_dL::synapse0x291d490() {
   return (neuron0x290d320()*-0.012287);
}

double NNfunction_ns_chi03_dL::synapse0x291d4d0() {
   return (neuron0x290d660()*-2.02442);
}

double NNfunction_ns_chi03_dL::synapse0x291d850() {
   return (neuron0x2908a10()*-1.50619);
}

double NNfunction_ns_chi03_dL::synapse0x291d890() {
   return (neuron0x2908cc0()*0.225445);
}

double NNfunction_ns_chi03_dL::synapse0x291d8d0() {
   return (neuron0x2909000()*0.674108);
}

double NNfunction_ns_chi03_dL::synapse0x291d910() {
   return (neuron0x2909340()*-0.0744105);
}

double NNfunction_ns_chi03_dL::synapse0x291d950() {
   return (neuron0x2909680()*0.00346579);
}

double NNfunction_ns_chi03_dL::synapse0x291d990() {
   return (neuron0x29099c0()*-0.0423879);
}

double NNfunction_ns_chi03_dL::synapse0x291d9d0() {
   return (neuron0x2909d00()*0.14413);
}

double NNfunction_ns_chi03_dL::synapse0x291da10() {
   return (neuron0x290a040()*0.270153);
}

double NNfunction_ns_chi03_dL::synapse0x291da50() {
   return (neuron0x290a380()*-0.220154);
}

double NNfunction_ns_chi03_dL::synapse0x291da90() {
   return (neuron0x290a6c0()*0.246591);
}

double NNfunction_ns_chi03_dL::synapse0x291dad0() {
   return (neuron0x290aa00()*-0.0620868);
}

double NNfunction_ns_chi03_dL::synapse0x291db10() {
   return (neuron0x290ad40()*-0.0787241);
}

double NNfunction_ns_chi03_dL::synapse0x291db50() {
   return (neuron0x290b080()*0.16784);
}

double NNfunction_ns_chi03_dL::synapse0x291db90() {
   return (neuron0x290b3c0()*0.13374);
}

double NNfunction_ns_chi03_dL::synapse0x291dbd0() {
   return (neuron0x290b700()*0.0162538);
}

double NNfunction_ns_chi03_dL::synapse0x291dc10() {
   return (neuron0x290ba40()*0.0713222);
}

double NNfunction_ns_chi03_dL::synapse0x291d6a0() {
   return (neuron0x290bd80()*-0.220667);
}

double NNfunction_ns_chi03_dL::synapse0x291d6e0() {
   return (neuron0x290c2e0()*0.214891);
}

double NNfunction_ns_chi03_dL::synapse0x291dd60() {
   return (neuron0x290c620()*-0.146855);
}

double NNfunction_ns_chi03_dL::synapse0x291dda0() {
   return (neuron0x290c960()*0.106513);
}

double NNfunction_ns_chi03_dL::synapse0x291dde0() {
   return (neuron0x290cca0()*-0.00156473);
}

double NNfunction_ns_chi03_dL::synapse0x291de20() {
   return (neuron0x290cfe0()*0.249882);
}

double NNfunction_ns_chi03_dL::synapse0x291de60() {
   return (neuron0x290d320()*0.0659024);
}

double NNfunction_ns_chi03_dL::synapse0x291dea0() {
   return (neuron0x290d660()*-1.66589);
}

double NNfunction_ns_chi03_dL::synapse0x291e220() {
   return (neuron0x2908a10()*-0.0370617);
}

double NNfunction_ns_chi03_dL::synapse0x291e260() {
   return (neuron0x2908cc0()*0.0637846);
}

double NNfunction_ns_chi03_dL::synapse0x291e2a0() {
   return (neuron0x2909000()*-1.93939);
}

double NNfunction_ns_chi03_dL::synapse0x291e2e0() {
   return (neuron0x2909340()*-0.15913);
}

double NNfunction_ns_chi03_dL::synapse0x291e320() {
   return (neuron0x2909680()*-0.0455155);
}

double NNfunction_ns_chi03_dL::synapse0x291e360() {
   return (neuron0x29099c0()*-0.0251388);
}

double NNfunction_ns_chi03_dL::synapse0x291e3a0() {
   return (neuron0x2909d00()*-0.038515);
}

double NNfunction_ns_chi03_dL::synapse0x291e3e0() {
   return (neuron0x290a040()*0.0270703);
}

double NNfunction_ns_chi03_dL::synapse0x291e420() {
   return (neuron0x290a380()*0.00345952);
}

double NNfunction_ns_chi03_dL::synapse0x291e460() {
   return (neuron0x290a6c0()*0.0207325);
}

double NNfunction_ns_chi03_dL::synapse0x291e4a0() {
   return (neuron0x290aa00()*-0.0291181);
}

double NNfunction_ns_chi03_dL::synapse0x291e4e0() {
   return (neuron0x290ad40()*0.174365);
}

double NNfunction_ns_chi03_dL::synapse0x291e520() {
   return (neuron0x290b080()*-0.0179781);
}

double NNfunction_ns_chi03_dL::synapse0x291e560() {
   return (neuron0x290b3c0()*-0.0367955);
}

double NNfunction_ns_chi03_dL::synapse0x291e5a0() {
   return (neuron0x290b700()*-0.0327546);
}

double NNfunction_ns_chi03_dL::synapse0x291e5e0() {
   return (neuron0x290ba40()*0.0193586);
}

double NNfunction_ns_chi03_dL::synapse0x291e070() {
   return (neuron0x290bd80()*-0.00789783);
}

double NNfunction_ns_chi03_dL::synapse0x291e0b0() {
   return (neuron0x290c2e0()*-0.0213782);
}

double NNfunction_ns_chi03_dL::synapse0x291e730() {
   return (neuron0x290c620()*0.00671065);
}

double NNfunction_ns_chi03_dL::synapse0x291e770() {
   return (neuron0x290c960()*-0.0147108);
}

double NNfunction_ns_chi03_dL::synapse0x291e7b0() {
   return (neuron0x290cca0()*0.0644626);
}

double NNfunction_ns_chi03_dL::synapse0x291e7f0() {
   return (neuron0x290cfe0()*0.0460747);
}

double NNfunction_ns_chi03_dL::synapse0x291e830() {
   return (neuron0x290d320()*-0.0128483);
}

double NNfunction_ns_chi03_dL::synapse0x291e870() {
   return (neuron0x290d660()*0.362032);
}

double NNfunction_ns_chi03_dL::synapse0x291ebf0() {
   return (neuron0x2908a10()*0.00409539);
}

double NNfunction_ns_chi03_dL::synapse0x291ec30() {
   return (neuron0x2908cc0()*0.00941988);
}

double NNfunction_ns_chi03_dL::synapse0x291ec70() {
   return (neuron0x2909000()*0.597332);
}

double NNfunction_ns_chi03_dL::synapse0x291ecb0() {
   return (neuron0x2909340()*-0.00922151);
}

double NNfunction_ns_chi03_dL::synapse0x291ecf0() {
   return (neuron0x2909680()*-0.0214659);
}

double NNfunction_ns_chi03_dL::synapse0x291ed30() {
   return (neuron0x29099c0()*-0.00630097);
}

double NNfunction_ns_chi03_dL::synapse0x291ed70() {
   return (neuron0x2909d00()*0.0311293);
}

double NNfunction_ns_chi03_dL::synapse0x291edb0() {
   return (neuron0x290a040()*-0.0429512);
}

double NNfunction_ns_chi03_dL::synapse0x291edf0() {
   return (neuron0x290a380()*-0.0472042);
}

double NNfunction_ns_chi03_dL::synapse0x291ee30() {
   return (neuron0x290a6c0()*-0.0791271);
}

double NNfunction_ns_chi03_dL::synapse0x291ee70() {
   return (neuron0x290aa00()*-0.0501821);
}

double NNfunction_ns_chi03_dL::synapse0x291eeb0() {
   return (neuron0x290ad40()*-0.821544);
}

double NNfunction_ns_chi03_dL::synapse0x291eef0() {
   return (neuron0x290b080()*0.0188357);
}

double NNfunction_ns_chi03_dL::synapse0x291ef30() {
   return (neuron0x290b3c0()*0.0104301);
}

double NNfunction_ns_chi03_dL::synapse0x291ef70() {
   return (neuron0x290b700()*0.0691814);
}

double NNfunction_ns_chi03_dL::synapse0x291efb0() {
   return (neuron0x290ba40()*0.0822689);
}

double NNfunction_ns_chi03_dL::synapse0x291ea40() {
   return (neuron0x290bd80()*-0.0617077);
}

double NNfunction_ns_chi03_dL::synapse0x291ea80() {
   return (neuron0x290c2e0()*-0.0332169);
}

double NNfunction_ns_chi03_dL::synapse0x291f100() {
   return (neuron0x290c620()*0.0391501);
}

double NNfunction_ns_chi03_dL::synapse0x291f140() {
   return (neuron0x290c960()*-0.0230572);
}

double NNfunction_ns_chi03_dL::synapse0x291f180() {
   return (neuron0x290cca0()*-0.00100695);
}

double NNfunction_ns_chi03_dL::synapse0x291f1c0() {
   return (neuron0x290cfe0()*-0.0320117);
}

double NNfunction_ns_chi03_dL::synapse0x291f200() {
   return (neuron0x290d320()*0.0149561);
}

double NNfunction_ns_chi03_dL::synapse0x291f240() {
   return (neuron0x290d660()*1.50947);
}

double NNfunction_ns_chi03_dL::synapse0x2931110() {
   return (neuron0x2908a10()*-0.0628848);
}

double NNfunction_ns_chi03_dL::synapse0x2931150() {
   return (neuron0x2908cc0()*-0.0321874);
}

double NNfunction_ns_chi03_dL::synapse0x2931190() {
   return (neuron0x2909000()*1.21275);
}

double NNfunction_ns_chi03_dL::synapse0x29311d0() {
   return (neuron0x2909340()*0.0242474);
}

double NNfunction_ns_chi03_dL::synapse0x2931210() {
   return (neuron0x2909680()*-0.0104571);
}

double NNfunction_ns_chi03_dL::synapse0x2931250() {
   return (neuron0x29099c0()*0.0199923);
}

double NNfunction_ns_chi03_dL::synapse0x2931290() {
   return (neuron0x2909d00()*0.0193337);
}

double NNfunction_ns_chi03_dL::synapse0x29312d0() {
   return (neuron0x290a040()*0.00929941);
}

double NNfunction_ns_chi03_dL::synapse0x2931310() {
   return (neuron0x290a380()*-0.0612965);
}

double NNfunction_ns_chi03_dL::synapse0x2931350() {
   return (neuron0x290a6c0()*-0.0181966);
}

double NNfunction_ns_chi03_dL::synapse0x2931390() {
   return (neuron0x290aa00()*-0.0332263);
}

double NNfunction_ns_chi03_dL::synapse0x29313d0() {
   return (neuron0x290ad40()*-0.29081);
}

double NNfunction_ns_chi03_dL::synapse0x2931410() {
   return (neuron0x290b080()*0.0124259);
}

double NNfunction_ns_chi03_dL::synapse0x2931450() {
   return (neuron0x290b3c0()*-0.00977416);
}

double NNfunction_ns_chi03_dL::synapse0x2931490() {
   return (neuron0x290b700()*0.0208594);
}

double NNfunction_ns_chi03_dL::synapse0x29314d0() {
   return (neuron0x290ba40()*0.0150561);
}

double NNfunction_ns_chi03_dL::synapse0x291f280() {
   return (neuron0x290bd80()*0.00162463);
}

double NNfunction_ns_chi03_dL::synapse0x291f2c0() {
   return (neuron0x290c2e0()*0.00752235);
}

double NNfunction_ns_chi03_dL::synapse0x2931620() {
   return (neuron0x290c620()*0.0474553);
}

double NNfunction_ns_chi03_dL::synapse0x2931660() {
   return (neuron0x290c960()*-0.0393625);
}

double NNfunction_ns_chi03_dL::synapse0x29316a0() {
   return (neuron0x290cca0()*-0.0107142);
}

double NNfunction_ns_chi03_dL::synapse0x29316e0() {
   return (neuron0x290cfe0()*-0.0139833);
}

double NNfunction_ns_chi03_dL::synapse0x2931720() {
   return (neuron0x290d320()*0.000808837);
}

double NNfunction_ns_chi03_dL::synapse0x2931760() {
   return (neuron0x290d660()*-1.39577);
}

double NNfunction_ns_chi03_dL::synapse0x2931ae0() {
   return (neuron0x2908a10()*-0.00138555);
}

double NNfunction_ns_chi03_dL::synapse0x2931b20() {
   return (neuron0x2908cc0()*2.01726);
}

double NNfunction_ns_chi03_dL::synapse0x2931b60() {
   return (neuron0x2909000()*-0.292346);
}

double NNfunction_ns_chi03_dL::synapse0x2931ba0() {
   return (neuron0x2909340()*-0.0195433);
}

double NNfunction_ns_chi03_dL::synapse0x2931be0() {
   return (neuron0x2909680()*0.406027);
}

double NNfunction_ns_chi03_dL::synapse0x2931c20() {
   return (neuron0x29099c0()*-0.114846);
}

double NNfunction_ns_chi03_dL::synapse0x2931c60() {
   return (neuron0x2909d00()*0.104651);
}

double NNfunction_ns_chi03_dL::synapse0x2931ca0() {
   return (neuron0x290a040()*-0.432697);
}

double NNfunction_ns_chi03_dL::synapse0x2931ce0() {
   return (neuron0x290a380()*0.21802);
}

double NNfunction_ns_chi03_dL::synapse0x2931d20() {
   return (neuron0x290a6c0()*-0.478141);
}

double NNfunction_ns_chi03_dL::synapse0x2931d60() {
   return (neuron0x290aa00()*0.259481);
}

double NNfunction_ns_chi03_dL::synapse0x2931da0() {
   return (neuron0x290ad40()*-0.950145);
}

double NNfunction_ns_chi03_dL::synapse0x2931de0() {
   return (neuron0x290b080()*0.0952739);
}

double NNfunction_ns_chi03_dL::synapse0x2931e20() {
   return (neuron0x290b3c0()*-0.639222);
}

double NNfunction_ns_chi03_dL::synapse0x2931e60() {
   return (neuron0x290b700()*-0.193469);
}

double NNfunction_ns_chi03_dL::synapse0x2931ea0() {
   return (neuron0x290ba40()*0.300573);
}

double NNfunction_ns_chi03_dL::synapse0x2931930() {
   return (neuron0x290bd80()*0.0499217);
}

double NNfunction_ns_chi03_dL::synapse0x2931970() {
   return (neuron0x290c2e0()*0.157645);
}

double NNfunction_ns_chi03_dL::synapse0x2931ff0() {
   return (neuron0x290c620()*-0.293099);
}

double NNfunction_ns_chi03_dL::synapse0x2932030() {
   return (neuron0x290c960()*0.0026792);
}

double NNfunction_ns_chi03_dL::synapse0x2932070() {
   return (neuron0x290cca0()*0.112097);
}

double NNfunction_ns_chi03_dL::synapse0x29320b0() {
   return (neuron0x290cfe0()*0.210982);
}

double NNfunction_ns_chi03_dL::synapse0x29320f0() {
   return (neuron0x290d320()*-0.0889022);
}

double NNfunction_ns_chi03_dL::synapse0x2932130() {
   return (neuron0x290d660()*-2.2698);
}

double NNfunction_ns_chi03_dL::synapse0x29324b0() {
   return (neuron0x2908a10()*-0.0746842);
}

double NNfunction_ns_chi03_dL::synapse0x29324f0() {
   return (neuron0x2908cc0()*-0.0944292);
}

double NNfunction_ns_chi03_dL::synapse0x2932530() {
   return (neuron0x2909000()*-0.258655);
}

double NNfunction_ns_chi03_dL::synapse0x2932570() {
   return (neuron0x2909340()*0.031735);
}

double NNfunction_ns_chi03_dL::synapse0x29325b0() {
   return (neuron0x2909680()*0.116836);
}

double NNfunction_ns_chi03_dL::synapse0x29325f0() {
   return (neuron0x29099c0()*0.180122);
}

double NNfunction_ns_chi03_dL::synapse0x2932630() {
   return (neuron0x2909d00()*0.0862479);
}

double NNfunction_ns_chi03_dL::synapse0x2932670() {
   return (neuron0x290a040()*-0.565494);
}

double NNfunction_ns_chi03_dL::synapse0x29326b0() {
   return (neuron0x290a380()*-0.406014);
}

double NNfunction_ns_chi03_dL::synapse0x29326f0() {
   return (neuron0x290a6c0()*-0.100264);
}

double NNfunction_ns_chi03_dL::synapse0x2932730() {
   return (neuron0x290aa00()*-0.332882);
}

double NNfunction_ns_chi03_dL::synapse0x2932770() {
   return (neuron0x290ad40()*0.222951);
}

double NNfunction_ns_chi03_dL::synapse0x29327b0() {
   return (neuron0x290b080()*-0.212705);
}

double NNfunction_ns_chi03_dL::synapse0x29327f0() {
   return (neuron0x290b3c0()*0.138829);
}

double NNfunction_ns_chi03_dL::synapse0x2932830() {
   return (neuron0x290b700()*0.0506382);
}

double NNfunction_ns_chi03_dL::synapse0x2932870() {
   return (neuron0x290ba40()*0.316424);
}

double NNfunction_ns_chi03_dL::synapse0x2932300() {
   return (neuron0x290bd80()*-0.106091);
}

double NNfunction_ns_chi03_dL::synapse0x2932340() {
   return (neuron0x290c2e0()*-0.281821);
}

double NNfunction_ns_chi03_dL::synapse0x29329c0() {
   return (neuron0x290c620()*-0.124744);
}

double NNfunction_ns_chi03_dL::synapse0x2932a00() {
   return (neuron0x290c960()*0.14316);
}

double NNfunction_ns_chi03_dL::synapse0x2932a40() {
   return (neuron0x290cca0()*-0.0204684);
}

double NNfunction_ns_chi03_dL::synapse0x2932a80() {
   return (neuron0x290cfe0()*-0.236514);
}

double NNfunction_ns_chi03_dL::synapse0x2932ac0() {
   return (neuron0x290d320()*-0.145028);
}

double NNfunction_ns_chi03_dL::synapse0x2932b00() {
   return (neuron0x290d660()*-0.331028);
}

double NNfunction_ns_chi03_dL::synapse0x2932e80() {
   return (neuron0x2908a10()*0.520965);
}

double NNfunction_ns_chi03_dL::synapse0x2932ec0() {
   return (neuron0x2908cc0()*0.249462);
}

double NNfunction_ns_chi03_dL::synapse0x2932f00() {
   return (neuron0x2909000()*1.25983);
}

double NNfunction_ns_chi03_dL::synapse0x2932f40() {
   return (neuron0x2909340()*-0.998633);
}

double NNfunction_ns_chi03_dL::synapse0x2932f80() {
   return (neuron0x2909680()*0.261142);
}

double NNfunction_ns_chi03_dL::synapse0x2932fc0() {
   return (neuron0x29099c0()*-0.28675);
}

double NNfunction_ns_chi03_dL::synapse0x2933000() {
   return (neuron0x2909d00()*-0.0270654);
}

double NNfunction_ns_chi03_dL::synapse0x2933040() {
   return (neuron0x290a040()*-0.335636);
}

double NNfunction_ns_chi03_dL::synapse0x2933080() {
   return (neuron0x290a380()*0.858561);
}

double NNfunction_ns_chi03_dL::synapse0x29330c0() {
   return (neuron0x290a6c0()*-0.257796);
}

double NNfunction_ns_chi03_dL::synapse0x2933100() {
   return (neuron0x290aa00()*0.1997);
}

double NNfunction_ns_chi03_dL::synapse0x2933140() {
   return (neuron0x290ad40()*0.478864);
}

double NNfunction_ns_chi03_dL::synapse0x2933180() {
   return (neuron0x290b080()*0.498198);
}

double NNfunction_ns_chi03_dL::synapse0x29331c0() {
   return (neuron0x290b3c0()*-0.00671869);
}

double NNfunction_ns_chi03_dL::synapse0x2933200() {
   return (neuron0x290b700()*-0.0802475);
}

double NNfunction_ns_chi03_dL::synapse0x2933240() {
   return (neuron0x290ba40()*0.458506);
}

double NNfunction_ns_chi03_dL::synapse0x2932cd0() {
   return (neuron0x290bd80()*-0.162884);
}

double NNfunction_ns_chi03_dL::synapse0x2932d10() {
   return (neuron0x290c2e0()*-0.137319);
}

double NNfunction_ns_chi03_dL::synapse0x2933390() {
   return (neuron0x290c620()*0.594697);
}

double NNfunction_ns_chi03_dL::synapse0x29333d0() {
   return (neuron0x290c960()*-0.678386);
}

double NNfunction_ns_chi03_dL::synapse0x2933410() {
   return (neuron0x290cca0()*-0.111655);
}

double NNfunction_ns_chi03_dL::synapse0x2933450() {
   return (neuron0x290cfe0()*-0.350774);
}

double NNfunction_ns_chi03_dL::synapse0x2933490() {
   return (neuron0x290d320()*-0.0467172);
}

double NNfunction_ns_chi03_dL::synapse0x29334d0() {
   return (neuron0x290d660()*0.0554754);
}

double NNfunction_ns_chi03_dL::synapse0x290e920() {
   return (neuron0x290dad0()*0.0055);
}

double NNfunction_ns_chi03_dL::synapse0x290e960() {
   return (neuron0x290e310()*3.16747);
}

double NNfunction_ns_chi03_dL::synapse0x290fe80() {
   return (neuron0x290edf0()*1.98059);
}

double NNfunction_ns_chi03_dL::synapse0x290fec0() {
   return (neuron0x26d3210()*0.0201187);
}

double NNfunction_ns_chi03_dL::synapse0x2911950() {
   return (neuron0x290fbd0()*1.25313);
}

double NNfunction_ns_chi03_dL::synapse0x2911990() {
   return (neuron0x29116a0()*-1.33437);
}

double NNfunction_ns_chi03_dL::synapse0x2912720() {
   return (neuron0x2912470()*0.55689);
}

double NNfunction_ns_chi03_dL::synapse0x2912760() {
   return (neuron0x2912e40()*0.910902);
}

double NNfunction_ns_chi03_dL::synapse0x29130f0() {
   return (neuron0x2913810()*0.955247);
}

double NNfunction_ns_chi03_dL::synapse0x2913130() {
   return (neuron0x29142f0()*-0.444276);
}

double NNfunction_ns_chi03_dL::synapse0x2913ac0() {
   return (neuron0x2914cc0()*-0.437258);
}

double NNfunction_ns_chi03_dL::synapse0x2913b00() {
   return (neuron0x2911da0()*0.419235);
}

double NNfunction_ns_chi03_dL::synapse0x29145a0() {
   return (neuron0x2916870()*0.384147);
}

double NNfunction_ns_chi03_dL::synapse0x29145e0() {
   return (neuron0x2917240()*0.170568);
}

double NNfunction_ns_chi03_dL::synapse0x2914f70() {
   return (neuron0x2917c10()*0.482043);
}

double NNfunction_ns_chi03_dL::synapse0x2914fb0() {
   return (neuron0x29185e0()*-1.96193);
}

double NNfunction_ns_chi03_dL::synapse0x2912050() {
   return (neuron0x291a3f0()*-0.202015);
}

double NNfunction_ns_chi03_dL::synapse0x2912090() {
   return (neuron0x291a6d0()*-0.412182);
}

double NNfunction_ns_chi03_dL::synapse0x2916b20() {
   return (neuron0x291b0a0()*-2.11885);
}

double NNfunction_ns_chi03_dL::synapse0x2916b60() {
   return (neuron0x291ba70()*2.3452);
}

double NNfunction_ns_chi03_dL::synapse0x29174f0() {
   return (neuron0x291c440()*-0.952982);
}

double NNfunction_ns_chi03_dL::synapse0x2917530() {
   return (neuron0x291ce10()*0.311348);
}

double NNfunction_ns_chi03_dL::synapse0x2917ec0() {
   return (neuron0x2915960()*0.866797);
}

double NNfunction_ns_chi03_dL::synapse0x2917f00() {
   return (neuron0x2916330()*-0.366745);
}

double NNfunction_ns_chi03_dL::synapse0x2918890() {
   return (neuron0x291fba0()*-0.542146);
}

double NNfunction_ns_chi03_dL::synapse0x29188d0() {
   return (neuron0x2920570()*-0.457563);
}

double NNfunction_ns_chi03_dL::synapse0x290b920() {
   return (neuron0x2920f40()*0.449532);
}

double NNfunction_ns_chi03_dL::synapse0x290b960() {
   return (neuron0x2921910()*-1.01255);
}

double NNfunction_ns_chi03_dL::synapse0x291a980() {
   return (neuron0x29222e0()*-0.253937);
}

double NNfunction_ns_chi03_dL::synapse0x291a9c0() {
   return (neuron0x2922cb0()*-0.24163);
}

double NNfunction_ns_chi03_dL::synapse0x291b350() {
   return (neuron0x2923680()*-0.981053);
}

double NNfunction_ns_chi03_dL::synapse0x291b390() {
   return (neuron0x2924050()*0.319656);
}

double NNfunction_ns_chi03_dL::synapse0x291bd20() {
   return (neuron0x291a0e0()*-0.775028);
}

double NNfunction_ns_chi03_dL::synapse0x291bd60() {
   return (neuron0x2926c30()*-0.349005);
}

double NNfunction_ns_chi03_dL::synapse0x291c6f0() {
   return (neuron0x2927600()*1.56341);
}

double NNfunction_ns_chi03_dL::synapse0x291c730() {
   return (neuron0x2927fd0()*-1.57752);
}

double NNfunction_ns_chi03_dL::synapse0x291d0c0() {
   return (neuron0x29289a0()*-0.262015);
}

double NNfunction_ns_chi03_dL::synapse0x291d100() {
   return (neuron0x2929370()*2.52272);
}

double NNfunction_ns_chi03_dL::synapse0x2915c10() {
   return (neuron0x2929d40()*0.198649);
}

double NNfunction_ns_chi03_dL::synapse0x2915c50() {
   return (neuron0x292a710()*0.531173);
}

double NNfunction_ns_chi03_dL::synapse0x291f4c0() {
   return (neuron0x292b0e0()*-2.29553);
}

double NNfunction_ns_chi03_dL::synapse0x291f500() {
   return (neuron0x292bcc0()*0.0263273);
}

double NNfunction_ns_chi03_dL::synapse0x291fe50() {
   return (neuron0x292c690()*-1.75775);
}

double NNfunction_ns_chi03_dL::synapse0x291fe90() {
   return (neuron0x291d510()*-0.203773);
}

double NNfunction_ns_chi03_dL::synapse0x2920820() {
   return (neuron0x291dee0()*0.645117);
}

double NNfunction_ns_chi03_dL::synapse0x2920860() {
   return (neuron0x291e8b0()*-2.21434);
}

double NNfunction_ns_chi03_dL::synapse0x29211f0() {
   return (neuron0x2930ef0()*-0.670596);
}

double NNfunction_ns_chi03_dL::synapse0x2921230() {
   return (neuron0x29317a0()*0.204497);
}

double NNfunction_ns_chi03_dL::synapse0x2921bc0() {
   return (neuron0x2932170()*0.754813);
}

double NNfunction_ns_chi03_dL::synapse0x2921c00() {
   return (neuron0x2932b40()*0.313103);
}

double NNfunction_ns_chi03_dL::synapse0x2924300() {
   return (neuron0x290dad0()*-2.33092);
}

double NNfunction_ns_chi03_dL::synapse0x2924340() {
   return (neuron0x290e310()*2.2189);
}

double NNfunction_ns_chi03_dL::synapse0x29198c0() {
   return (neuron0x290edf0()*-6.50194);
}

double NNfunction_ns_chi03_dL::synapse0x2919900() {
   return (neuron0x26d3210()*-0.120728);
}

double NNfunction_ns_chi03_dL::synapse0x2926ee0() {
   return (neuron0x290fbd0()*-1.29509);
}

double NNfunction_ns_chi03_dL::synapse0x2926f20() {
   return (neuron0x29116a0()*0.521117);
}

double NNfunction_ns_chi03_dL::synapse0x29278b0() {
   return (neuron0x2912470()*0.175618);
}

double NNfunction_ns_chi03_dL::synapse0x29278f0() {
   return (neuron0x2912e40()*-0.0987424);
}

double NNfunction_ns_chi03_dL::synapse0x2928280() {
   return (neuron0x2913810()*-1.06756);
}

double NNfunction_ns_chi03_dL::synapse0x29282c0() {
   return (neuron0x29142f0()*0.465316);
}

double NNfunction_ns_chi03_dL::synapse0x2928c50() {
   return (neuron0x2914cc0()*0.558731);
}

double NNfunction_ns_chi03_dL::synapse0x2928c90() {
   return (neuron0x2911da0()*-0.368056);
}

double NNfunction_ns_chi03_dL::synapse0x2929620() {
   return (neuron0x2916870()*-0.40241);
}

double NNfunction_ns_chi03_dL::synapse0x2929660() {
   return (neuron0x2917240()*-0.176355);
}

double NNfunction_ns_chi03_dL::synapse0x2929ff0() {
   return (neuron0x2917c10()*-0.392435);
}

double NNfunction_ns_chi03_dL::synapse0x292a030() {
   return (neuron0x29185e0()*-0.27079);
}

double NNfunction_ns_chi03_dL::synapse0x292a9c0() {
   return (neuron0x291a3f0()*0.0716649);
}

double NNfunction_ns_chi03_dL::synapse0x292aa00() {
   return (neuron0x291a6d0()*-1.57887);
}

double NNfunction_ns_chi03_dL::synapse0x292b390() {
   return (neuron0x291b0a0()*-0.117572);
}

double NNfunction_ns_chi03_dL::synapse0x292b3d0() {
   return (neuron0x291ba70()*-4.72574);
}

double NNfunction_ns_chi03_dL::synapse0x292bf70() {
   return (neuron0x291c440()*-0.125543);
}

double NNfunction_ns_chi03_dL::synapse0x292bfb0() {
   return (neuron0x291ce10()*-0.499807);
}

double NNfunction_ns_chi03_dL::synapse0x292c940() {
   return (neuron0x2915960()*-0.931646);
}

double NNfunction_ns_chi03_dL::synapse0x292c980() {
   return (neuron0x2916330()*0.340548);
}

double NNfunction_ns_chi03_dL::synapse0x291d7c0() {
   return (neuron0x291fba0()*2.4967);
}

double NNfunction_ns_chi03_dL::synapse0x291d800() {
   return (neuron0x2920570()*-0.519953);
}

double NNfunction_ns_chi03_dL::synapse0x291e190() {
   return (neuron0x2920f40()*2.94698);
}

double NNfunction_ns_chi03_dL::synapse0x291e1d0() {
   return (neuron0x2921910()*1.0946);
}

double NNfunction_ns_chi03_dL::synapse0x291eb60() {
   return (neuron0x29222e0()*1.57769);
}

double NNfunction_ns_chi03_dL::synapse0x291eba0() {
   return (neuron0x2922cb0()*0.35463);
}

double NNfunction_ns_chi03_dL::synapse0x2931080() {
   return (neuron0x2923680()*-0.461156);
}

double NNfunction_ns_chi03_dL::synapse0x29310c0() {
   return (neuron0x2924050()*-0.292561);
}

double NNfunction_ns_chi03_dL::synapse0x2931a50() {
   return (neuron0x291a0e0()*-3.20025);
}

double NNfunction_ns_chi03_dL::synapse0x2931a90() {
   return (neuron0x2926c30()*-1.95035);
}

double NNfunction_ns_chi03_dL::synapse0x2932420() {
   return (neuron0x2927600()*-1.87547);
}

double NNfunction_ns_chi03_dL::synapse0x2932460() {
   return (neuron0x2927fd0()*3.10907);
}

double NNfunction_ns_chi03_dL::synapse0x2932df0() {
   return (neuron0x29289a0()*0.352822);
}

double NNfunction_ns_chi03_dL::synapse0x2932e30() {
   return (neuron0x2929370()*-2.04049);
}

double NNfunction_ns_chi03_dL::synapse0x290dd80() {
   return (neuron0x2929d40()*-0.37286);
}

double NNfunction_ns_chi03_dL::synapse0x290ddc0() {
   return (neuron0x292a710()*-0.388228);
}

double NNfunction_ns_chi03_dL::synapse0x2922590() {
   return (neuron0x292b0e0()*3.64992);
}

double NNfunction_ns_chi03_dL::synapse0x29225d0() {
   return (neuron0x292bcc0()*0.417689);
}

double NNfunction_ns_chi03_dL::synapse0x2933510() {
   return (neuron0x292c690()*3.93082);
}

double NNfunction_ns_chi03_dL::synapse0x2933550() {
   return (neuron0x291d510()*0.307634);
}

double NNfunction_ns_chi03_dL::synapse0x2933590() {
   return (neuron0x291dee0()*-1.41556);
}

double NNfunction_ns_chi03_dL::synapse0x29335d0() {
   return (neuron0x291e8b0()*1.44464);
}

double NNfunction_ns_chi03_dL::synapse0x293a480() {
   return (neuron0x2930ef0()*2.2248);
}

double NNfunction_ns_chi03_dL::synapse0x293a4c0() {
   return (neuron0x29317a0()*-0.317073);
}

double NNfunction_ns_chi03_dL::synapse0x293a500() {
   return (neuron0x2932170()*-0.771797);
}

double NNfunction_ns_chi03_dL::synapse0x293a540() {
   return (neuron0x2932b40()*-0.290363);
}

double NNfunction_ns_chi03_dL::synapse0x293a8c0() {
   return (neuron0x290dad0()*-0.599646);
}

double NNfunction_ns_chi03_dL::synapse0x293a900() {
   return (neuron0x290e310()*-0.0296861);
}

double NNfunction_ns_chi03_dL::synapse0x293a940() {
   return (neuron0x290edf0()*0.223743);
}

double NNfunction_ns_chi03_dL::synapse0x293a980() {
   return (neuron0x26d3210()*-0.170646);
}

double NNfunction_ns_chi03_dL::synapse0x293a9c0() {
   return (neuron0x290fbd0()*-0.0655458);
}

double NNfunction_ns_chi03_dL::synapse0x293aa00() {
   return (neuron0x29116a0()*-0.484413);
}

double NNfunction_ns_chi03_dL::synapse0x293aa40() {
   return (neuron0x2912470()*0.0272902);
}

double NNfunction_ns_chi03_dL::synapse0x293aa80() {
   return (neuron0x2912e40()*-0.0270611);
}

double NNfunction_ns_chi03_dL::synapse0x293aac0() {
   return (neuron0x2913810()*-0.486433);
}

double NNfunction_ns_chi03_dL::synapse0x293ab00() {
   return (neuron0x29142f0()*-0.139529);
}

double NNfunction_ns_chi03_dL::synapse0x293ab40() {
   return (neuron0x2914cc0()*0.302002);
}

double NNfunction_ns_chi03_dL::synapse0x293ab80() {
   return (neuron0x2911da0()*0.215205);
}

double NNfunction_ns_chi03_dL::synapse0x293abc0() {
   return (neuron0x2916870()*-0.343757);
}

double NNfunction_ns_chi03_dL::synapse0x293ac00() {
   return (neuron0x2917240()*-0.841062);
}

double NNfunction_ns_chi03_dL::synapse0x293ac40() {
   return (neuron0x2917c10()*-0.878396);
}

double NNfunction_ns_chi03_dL::synapse0x293ac80() {
   return (neuron0x29185e0()*-0.849854);
}

double NNfunction_ns_chi03_dL::synapse0x293a710() {
   return (neuron0x291a3f0()*-0.598264);
}

double NNfunction_ns_chi03_dL::synapse0x293a750() {
   return (neuron0x291a6d0()*-0.315312);
}

double NNfunction_ns_chi03_dL::synapse0x293add0() {
   return (neuron0x291b0a0()*-0.640942);
}

double NNfunction_ns_chi03_dL::synapse0x293ae10() {
   return (neuron0x291ba70()*-0.778242);
}

double NNfunction_ns_chi03_dL::synapse0x293ae50() {
   return (neuron0x291c440()*-0.608358);
}

double NNfunction_ns_chi03_dL::synapse0x293ae90() {
   return (neuron0x291ce10()*-0.140723);
}

double NNfunction_ns_chi03_dL::synapse0x293aed0() {
   return (neuron0x2915960()*0.0125941);
}

double NNfunction_ns_chi03_dL::synapse0x293af10() {
   return (neuron0x2916330()*-0.418729);
}

double NNfunction_ns_chi03_dL::synapse0x293af50() {
   return (neuron0x291fba0()*0.331139);
}

double NNfunction_ns_chi03_dL::synapse0x293af90() {
   return (neuron0x2920570()*-1.04103);
}

double NNfunction_ns_chi03_dL::synapse0x293afd0() {
   return (neuron0x2920f40()*-0.154961);
}

double NNfunction_ns_chi03_dL::synapse0x293b010() {
   return (neuron0x2921910()*-0.691207);
}

double NNfunction_ns_chi03_dL::synapse0x293b050() {
   return (neuron0x29222e0()*0.228544);
}

double NNfunction_ns_chi03_dL::synapse0x293b090() {
   return (neuron0x2922cb0()*-0.109405);
}

double NNfunction_ns_chi03_dL::synapse0x293b0d0() {
   return (neuron0x2923680()*-0.069077);
}

double NNfunction_ns_chi03_dL::synapse0x293b110() {
   return (neuron0x2924050()*0.245512);
}

double NNfunction_ns_chi03_dL::synapse0x293acc0() {
   return (neuron0x291a0e0()*-0.511795);
}

double NNfunction_ns_chi03_dL::synapse0x293ad00() {
   return (neuron0x2926c30()*-0.137369);
}

double NNfunction_ns_chi03_dL::synapse0x293ad40() {
   return (neuron0x2927600()*-0.157486);
}

double NNfunction_ns_chi03_dL::synapse0x293ad80() {
   return (neuron0x2927fd0()*-0.453237);
}

double NNfunction_ns_chi03_dL::synapse0x293b360() {
   return (neuron0x29289a0()*-0.85261);
}

double NNfunction_ns_chi03_dL::synapse0x293b3a0() {
   return (neuron0x2929370()*-0.316388);
}

double NNfunction_ns_chi03_dL::synapse0x293b3e0() {
   return (neuron0x2929d40()*-1.16629);
}

double NNfunction_ns_chi03_dL::synapse0x293b420() {
   return (neuron0x292a710()*0.331771);
}

double NNfunction_ns_chi03_dL::synapse0x293b460() {
   return (neuron0x292b0e0()*-0.326624);
}

double NNfunction_ns_chi03_dL::synapse0x293b4a0() {
   return (neuron0x292bcc0()*0.352979);
}

double NNfunction_ns_chi03_dL::synapse0x293b4e0() {
   return (neuron0x292c690()*-0.176886);
}

double NNfunction_ns_chi03_dL::synapse0x293b520() {
   return (neuron0x291d510()*-0.549568);
}

double NNfunction_ns_chi03_dL::synapse0x293b560() {
   return (neuron0x291dee0()*0.120145);
}

double NNfunction_ns_chi03_dL::synapse0x293b5a0() {
   return (neuron0x291e8b0()*-1.21919);
}

double NNfunction_ns_chi03_dL::synapse0x293b5e0() {
   return (neuron0x2930ef0()*-0.428991);
}

double NNfunction_ns_chi03_dL::synapse0x293b620() {
   return (neuron0x29317a0()*-1.00664);
}

double NNfunction_ns_chi03_dL::synapse0x293b660() {
   return (neuron0x2932170()*-0.667791);
}

double NNfunction_ns_chi03_dL::synapse0x293b6a0() {
   return (neuron0x2932b40()*-0.0657247);
}

double NNfunction_ns_chi03_dL::synapse0x293ba20() {
   return (neuron0x290dad0()*-0.0843856);
}

double NNfunction_ns_chi03_dL::synapse0x293ba60() {
   return (neuron0x290e310()*0.099957);
}

double NNfunction_ns_chi03_dL::synapse0x293baa0() {
   return (neuron0x290edf0()*-1.74439);
}

double NNfunction_ns_chi03_dL::synapse0x293bae0() {
   return (neuron0x26d3210()*1.52502);
}

double NNfunction_ns_chi03_dL::synapse0x293bb20() {
   return (neuron0x290fbd0()*-0.00135489);
}

double NNfunction_ns_chi03_dL::synapse0x293bb60() {
   return (neuron0x29116a0()*-1.24024);
}

double NNfunction_ns_chi03_dL::synapse0x293bba0() {
   return (neuron0x2912470()*-2.9174);
}

double NNfunction_ns_chi03_dL::synapse0x293bbe0() {
   return (neuron0x2912e40()*-0.381683);
}

double NNfunction_ns_chi03_dL::synapse0x293bc20() {
   return (neuron0x2913810()*-1.02564);
}

double NNfunction_ns_chi03_dL::synapse0x293bc60() {
   return (neuron0x29142f0()*0.385264);
}

double NNfunction_ns_chi03_dL::synapse0x293bca0() {
   return (neuron0x2914cc0()*-0.120062);
}

double NNfunction_ns_chi03_dL::synapse0x293bce0() {
   return (neuron0x2911da0()*-0.15648);
}

double NNfunction_ns_chi03_dL::synapse0x293bd20() {
   return (neuron0x2916870()*-0.272194);
}

double NNfunction_ns_chi03_dL::synapse0x293bd60() {
   return (neuron0x2917240()*-0.129437);
}

double NNfunction_ns_chi03_dL::synapse0x293bda0() {
   return (neuron0x2917c10()*-0.276095);
}

double NNfunction_ns_chi03_dL::synapse0x293bde0() {
   return (neuron0x29185e0()*-0.486042);
}

double NNfunction_ns_chi03_dL::synapse0x293b870() {
   return (neuron0x291a3f0()*0.358031);
}

double NNfunction_ns_chi03_dL::synapse0x293b8b0() {
   return (neuron0x291a6d0()*2.57065);
}

double NNfunction_ns_chi03_dL::synapse0x293bf30() {
   return (neuron0x291b0a0()*-0.327172);
}

double NNfunction_ns_chi03_dL::synapse0x293bf70() {
   return (neuron0x291ba70()*-0.259303);
}

double NNfunction_ns_chi03_dL::synapse0x293bfb0() {
   return (neuron0x291c440()*-0.207581);
}

double NNfunction_ns_chi03_dL::synapse0x293bff0() {
   return (neuron0x291ce10()*-0.437082);
}

double NNfunction_ns_chi03_dL::synapse0x293c030() {
   return (neuron0x2915960()*-1.4718);
}

double NNfunction_ns_chi03_dL::synapse0x293c070() {
   return (neuron0x2916330()*0.483522);
}

double NNfunction_ns_chi03_dL::synapse0x293c0b0() {
   return (neuron0x291fba0()*0.0364238);
}

double NNfunction_ns_chi03_dL::synapse0x293c0f0() {
   return (neuron0x2920570()*-0.251738);
}

double NNfunction_ns_chi03_dL::synapse0x293c130() {
   return (neuron0x2920f40()*-3.48033);
}

double NNfunction_ns_chi03_dL::synapse0x293c170() {
   return (neuron0x2921910()*0.00541285);
}

double NNfunction_ns_chi03_dL::synapse0x293c1b0() {
   return (neuron0x29222e0()*-0.442949);
}

double NNfunction_ns_chi03_dL::synapse0x293c1f0() {
   return (neuron0x2922cb0()*0.266742);
}

double NNfunction_ns_chi03_dL::synapse0x293c230() {
   return (neuron0x2923680()*-0.341438);
}

double NNfunction_ns_chi03_dL::synapse0x293c270() {
   return (neuron0x2924050()*-0.257993);
}

double NNfunction_ns_chi03_dL::synapse0x293be20() {
   return (neuron0x291a0e0()*2.05704);
}

double NNfunction_ns_chi03_dL::synapse0x293be60() {
   return (neuron0x2926c30()*-0.290439);
}

double NNfunction_ns_chi03_dL::synapse0x293bea0() {
   return (neuron0x2927600()*-0.993257);
}

double NNfunction_ns_chi03_dL::synapse0x293bee0() {
   return (neuron0x2927fd0()*-0.683636);
}

double NNfunction_ns_chi03_dL::synapse0x293c4c0() {
   return (neuron0x29289a0()*0.191904);
}

double NNfunction_ns_chi03_dL::synapse0x293c500() {
   return (neuron0x2929370()*0.759959);
}

double NNfunction_ns_chi03_dL::synapse0x293c540() {
   return (neuron0x2929d40()*-0.0139383);
}

double NNfunction_ns_chi03_dL::synapse0x293c580() {
   return (neuron0x292a710()*-0.636201);
}

double NNfunction_ns_chi03_dL::synapse0x293c5c0() {
   return (neuron0x292b0e0()*1.38546);
}

double NNfunction_ns_chi03_dL::synapse0x293c600() {
   return (neuron0x292bcc0()*0.317101);
}

double NNfunction_ns_chi03_dL::synapse0x293c640() {
   return (neuron0x292c690()*0.774641);
}

double NNfunction_ns_chi03_dL::synapse0x293c680() {
   return (neuron0x291d510()*0.196277);
}

double NNfunction_ns_chi03_dL::synapse0x293c6c0() {
   return (neuron0x291dee0()*0.789405);
}

double NNfunction_ns_chi03_dL::synapse0x293c700() {
   return (neuron0x291e8b0()*0.813931);
}

double NNfunction_ns_chi03_dL::synapse0x293c740() {
   return (neuron0x2930ef0()*-1.41239);
}

double NNfunction_ns_chi03_dL::synapse0x293c780() {
   return (neuron0x29317a0()*-0.216233);
}

double NNfunction_ns_chi03_dL::synapse0x293c7c0() {
   return (neuron0x2932170()*-0.722429);
}

double NNfunction_ns_chi03_dL::synapse0x293c800() {
   return (neuron0x2932b40()*-0.0909599);
}

double NNfunction_ns_chi03_dL::synapse0x293cb80() {
   return (neuron0x290dad0()*1.28762);
}

double NNfunction_ns_chi03_dL::synapse0x293cbc0() {
   return (neuron0x290e310()*-1.76457);
}

double NNfunction_ns_chi03_dL::synapse0x293cc00() {
   return (neuron0x290edf0()*0.901949);
}

double NNfunction_ns_chi03_dL::synapse0x293cc40() {
   return (neuron0x26d3210()*-0.299432);
}

double NNfunction_ns_chi03_dL::synapse0x293cc80() {
   return (neuron0x290fbd0()*-0.865147);
}

double NNfunction_ns_chi03_dL::synapse0x293ccc0() {
   return (neuron0x29116a0()*0.108628);
}

double NNfunction_ns_chi03_dL::synapse0x293cd00() {
   return (neuron0x2912470()*-0.711403);
}

double NNfunction_ns_chi03_dL::synapse0x293cd40() {
   return (neuron0x2912e40()*1.55523);
}

double NNfunction_ns_chi03_dL::synapse0x293cd80() {
   return (neuron0x2913810()*-0.784058);
}

double NNfunction_ns_chi03_dL::synapse0x293cdc0() {
   return (neuron0x29142f0()*0.0340954);
}

double NNfunction_ns_chi03_dL::synapse0x293ce00() {
   return (neuron0x2914cc0()*1.54281);
}

double NNfunction_ns_chi03_dL::synapse0x293ce40() {
   return (neuron0x2911da0()*-0.187186);
}

double NNfunction_ns_chi03_dL::synapse0x293ce80() {
   return (neuron0x2916870()*-0.0953652);
}

double NNfunction_ns_chi03_dL::synapse0x293cec0() {
   return (neuron0x2917240()*-0.0558769);
}

double NNfunction_ns_chi03_dL::synapse0x293cf00() {
   return (neuron0x2917c10()*-0.160375);
}

double NNfunction_ns_chi03_dL::synapse0x293cf40() {
   return (neuron0x29185e0()*-3.1356);
}

double NNfunction_ns_chi03_dL::synapse0x293c9d0() {
   return (neuron0x291a3f0()*-0.0833308);
}

double NNfunction_ns_chi03_dL::synapse0x293ca10() {
   return (neuron0x291a6d0()*-0.728636);
}

double NNfunction_ns_chi03_dL::synapse0x293d090() {
   return (neuron0x291b0a0()*-3.17268);
}

double NNfunction_ns_chi03_dL::synapse0x293d0d0() {
   return (neuron0x291ba70()*0.471529);
}

double NNfunction_ns_chi03_dL::synapse0x293d110() {
   return (neuron0x291c440()*-2.706);
}

double NNfunction_ns_chi03_dL::synapse0x293d150() {
   return (neuron0x291ce10()*-0.084096);
}

double NNfunction_ns_chi03_dL::synapse0x293d190() {
   return (neuron0x2915960()*3.00067);
}

double NNfunction_ns_chi03_dL::synapse0x293d1d0() {
   return (neuron0x2916330()*0.414993);
}

double NNfunction_ns_chi03_dL::synapse0x293d210() {
   return (neuron0x291fba0()*1.57341);
}

double NNfunction_ns_chi03_dL::synapse0x293d250() {
   return (neuron0x2920570()*-0.843169);
}

double NNfunction_ns_chi03_dL::synapse0x293d290() {
   return (neuron0x2920f40()*1.99001);
}

double NNfunction_ns_chi03_dL::synapse0x293d2d0() {
   return (neuron0x2921910()*2.48488);
}

double NNfunction_ns_chi03_dL::synapse0x293d310() {
   return (neuron0x29222e0()*2.61806);
}

double NNfunction_ns_chi03_dL::synapse0x293d350() {
   return (neuron0x2922cb0()*0.0412289);
}

double NNfunction_ns_chi03_dL::synapse0x293d390() {
   return (neuron0x2923680()*-3.12702);
}

double NNfunction_ns_chi03_dL::synapse0x293d3d0() {
   return (neuron0x2924050()*-0.0764042);
}

double NNfunction_ns_chi03_dL::synapse0x293cf80() {
   return (neuron0x291a0e0()*-2.22957);
}

double NNfunction_ns_chi03_dL::synapse0x293cfc0() {
   return (neuron0x2926c30()*-2.99792);
}

double NNfunction_ns_chi03_dL::synapse0x293d000() {
   return (neuron0x2927600()*2.12215);
}

double NNfunction_ns_chi03_dL::synapse0x293d040() {
   return (neuron0x2927fd0()*1.02447);
}

double NNfunction_ns_chi03_dL::synapse0x293d620() {
   return (neuron0x29289a0()*0.110686);
}

double NNfunction_ns_chi03_dL::synapse0x293d660() {
   return (neuron0x2929370()*3.06714);
}

double NNfunction_ns_chi03_dL::synapse0x293d6a0() {
   return (neuron0x2929d40()*-0.624482);
}

double NNfunction_ns_chi03_dL::synapse0x293d6e0() {
   return (neuron0x292a710()*4.99862);
}

double NNfunction_ns_chi03_dL::synapse0x293d720() {
   return (neuron0x292b0e0()*3.72866);
}

double NNfunction_ns_chi03_dL::synapse0x293d760() {
   return (neuron0x292bcc0()*0.784145);
}

double NNfunction_ns_chi03_dL::synapse0x293d7a0() {
   return (neuron0x292c690()*1.30325);
}

double NNfunction_ns_chi03_dL::synapse0x293d7e0() {
   return (neuron0x291d510()*0.0720999);
}

double NNfunction_ns_chi03_dL::synapse0x293d820() {
   return (neuron0x291dee0()*-1.16579);
}

double NNfunction_ns_chi03_dL::synapse0x293d860() {
   return (neuron0x291e8b0()*-0.208765);
}

double NNfunction_ns_chi03_dL::synapse0x293d8a0() {
   return (neuron0x2930ef0()*-0.922416);
}

double NNfunction_ns_chi03_dL::synapse0x293d8e0() {
   return (neuron0x29317a0()*-0.0352712);
}

double NNfunction_ns_chi03_dL::synapse0x293d920() {
   return (neuron0x2932170()*-0.121319);
}

double NNfunction_ns_chi03_dL::synapse0x293d960() {
   return (neuron0x2932b40()*-0.1346);
}

double NNfunction_ns_chi03_dL::synapse0x293dbc0() {
   return (neuron0x2939d40()*-3.80103);
}

double NNfunction_ns_chi03_dL::synapse0x293dc00() {
   return (neuron0x293a0e0()*-3.9298);
}

double NNfunction_ns_chi03_dL::synapse0x293dc40() {
   return (neuron0x293a580()*0.362729);
}

double NNfunction_ns_chi03_dL::synapse0x293dc80() {
   return (neuron0x293b6e0()*-4.42127);
}

double NNfunction_ns_chi03_dL::synapse0x293dcc0() {
   return (neuron0x293c840()*-9.69747);
}

