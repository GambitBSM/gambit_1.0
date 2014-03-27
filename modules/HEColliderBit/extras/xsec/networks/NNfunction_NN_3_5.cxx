#include "NNfunction_NN_3_5.h"
#include <cmath>

double NNfunction_NN_3_5::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7112)/15.2487;
   input1 = (in1 - -12.9339)/1039.8;
   input2 = (in2 - 524.601)/565.54;
   input3 = (in3 - -26.9228)/842.698;
   input4 = (in4 - 1062.36)/945.688;
   input5 = (in5 - 914.027)/957.933;
   input6 = (in6 - 920.015)/956.993;
   input7 = (in7 - 930.126)/938.616;
   input8 = (in8 - 928.636)/972.919;
   input9 = (in9 - 911.305)/957.338;
   input10 = (in10 - 971.777)/947.722;
   input11 = (in11 - 698.419)/862.995;
   input12 = (in12 - 730.029)/871.268;
   input13 = (in13 - 492.099)/514.046;
   input14 = (in14 - 730.801)/824.018;
   input15 = (in15 - 733.576)/827.462;
   input16 = (in16 - 540.429)/573.973;
   input17 = (in17 - 756.188)/896.528;
   input18 = (in18 - 753.583)/898.379;
   input19 = (in19 - 771.533)/860.16;
   input20 = (in20 - -4.81232)/493.557;
   input21 = (in21 - -11.4367)/1145.34;
   input22 = (in22 - 0.934021)/1197.47;
   input23 = (in23 - -71.2961)/243.782;
   switch(index) {
     case 0:
         return neuron0x298cb40();
     default:
         return 0.;
   }
}

double NNfunction_NN_3_5::Value(int index, double* input) {
   input0 = (input[0] - 23.7112)/15.2487;
   input1 = (input[1] - -12.9339)/1039.8;
   input2 = (input[2] - 524.601)/565.54;
   input3 = (input[3] - -26.9228)/842.698;
   input4 = (input[4] - 1062.36)/945.688;
   input5 = (input[5] - 914.027)/957.933;
   input6 = (input[6] - 920.015)/956.993;
   input7 = (input[7] - 930.126)/938.616;
   input8 = (input[8] - 928.636)/972.919;
   input9 = (input[9] - 911.305)/957.338;
   input10 = (input[10] - 971.777)/947.722;
   input11 = (input[11] - 698.419)/862.995;
   input12 = (input[12] - 730.029)/871.268;
   input13 = (input[13] - 492.099)/514.046;
   input14 = (input[14] - 730.801)/824.018;
   input15 = (input[15] - 733.576)/827.462;
   input16 = (input[16] - 540.429)/573.973;
   input17 = (input[17] - 756.188)/896.528;
   input18 = (input[18] - 753.583)/898.379;
   input19 = (input[19] - 771.533)/860.16;
   input20 = (input[20] - -4.81232)/493.557;
   input21 = (input[21] - -11.4367)/1145.34;
   input22 = (input[22] - 0.934021)/1197.47;
   input23 = (input[23] - -71.2961)/243.782;
   switch(index) {
     case 0:
         return neuron0x298cb40();
     default:
         return 0.;
   }
}

double NNfunction_NN_3_5::neuron0x2958c00() {
   return input0;
}

double NNfunction_NN_3_5::neuron0x2958f40() {
   return input1;
}

double NNfunction_NN_3_5::neuron0x2959280() {
   return input2;
}

double NNfunction_NN_3_5::neuron0x29595c0() {
   return input3;
}

double NNfunction_NN_3_5::neuron0x2959900() {
   return input4;
}

double NNfunction_NN_3_5::neuron0x2959c40() {
   return input5;
}

double NNfunction_NN_3_5::neuron0x2959f80() {
   return input6;
}

double NNfunction_NN_3_5::neuron0x295a2c0() {
   return input7;
}

double NNfunction_NN_3_5::neuron0x295a600() {
   return input8;
}

double NNfunction_NN_3_5::neuron0x295a940() {
   return input9;
}

double NNfunction_NN_3_5::neuron0x295ac80() {
   return input10;
}

double NNfunction_NN_3_5::neuron0x295afc0() {
   return input11;
}

double NNfunction_NN_3_5::neuron0x295b300() {
   return input12;
}

double NNfunction_NN_3_5::neuron0x295b640() {
   return input13;
}

double NNfunction_NN_3_5::neuron0x295b980() {
   return input14;
}

double NNfunction_NN_3_5::neuron0x295bcc0() {
   return input15;
}

double NNfunction_NN_3_5::neuron0x295c000() {
   return input16;
}

double NNfunction_NN_3_5::neuron0x295c560() {
   return input17;
}

double NNfunction_NN_3_5::neuron0x295c780() {
   return input18;
}

double NNfunction_NN_3_5::neuron0x295cac0() {
   return input19;
}

double NNfunction_NN_3_5::neuron0x295ce00() {
   return input20;
}

double NNfunction_NN_3_5::neuron0x295d140() {
   return input21;
}

double NNfunction_NN_3_5::neuron0x295d480() {
   return input22;
}

double NNfunction_NN_3_5::neuron0x295d7c0() {
   return input23;
}

double NNfunction_NN_3_5::input0x295dc60() {
   double input = 1.43127;
   input += synapse0x2718a70();
   input += synapse0x2958ac0();
   input += synapse0x2958b00();
   input += synapse0x295df10();
   input += synapse0x295df50();
   input += synapse0x295df90();
   input += synapse0x295dfd0();
   input += synapse0x295e010();
   input += synapse0x295e050();
   input += synapse0x295e090();
   input += synapse0x295e0d0();
   input += synapse0x295e110();
   input += synapse0x295e150();
   input += synapse0x295e190();
   input += synapse0x295e1d0();
   input += synapse0x295e210();
   input += synapse0x2958a30();
   input += synapse0x2958a70();
   input += synapse0x270a2d0();
   input += synapse0x270a310();
   input += synapse0x295e470();
   input += synapse0x295e4b0();
   input += synapse0x295e4f0();
   input += synapse0x295e530();
   return input;
}

double NNfunction_NN_3_5::neuron0x295dc60() {
   double input = input0x295dc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x295e570() {
   double input = -0.143233;
   input += synapse0x295e8b0();
   input += synapse0x295e8f0();
   input += synapse0x295e930();
   input += synapse0x295e970();
   input += synapse0x295e9b0();
   input += synapse0x295e9f0();
   input += synapse0x295ea30();
   input += synapse0x295ea70();
   input += synapse0x295eab0();
   input += synapse0x295e360();
   input += synapse0x295e3a0();
   input += synapse0x295e3e0();
   input += synapse0x295e420();
   input += synapse0x295ed00();
   input += synapse0x295ed40();
   input += synapse0x295ed80();
   input += synapse0x295e700();
   input += synapse0x295e740();
   input += synapse0x295eed0();
   input += synapse0x295ef10();
   input += synapse0x295ef50();
   input += synapse0x295ef90();
   input += synapse0x295efd0();
   input += synapse0x295f010();
   return input;
}

double NNfunction_NN_3_5::neuron0x295e570() {
   double input = input0x295e570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x295f050() {
   double input = -0.33959;
   input += synapse0x295f390();
   input += synapse0x295f3d0();
   input += synapse0x295f410();
   input += synapse0x295f450();
   input += synapse0x295f490();
   input += synapse0x295f4d0();
   input += synapse0x295f510();
   input += synapse0x295f550();
   input += synapse0x295f590();
   input += synapse0x295f5d0();
   input += synapse0x295f610();
   input += synapse0x295f650();
   input += synapse0x295f690();
   input += synapse0x295f6d0();
   input += synapse0x295f710();
   input += synapse0x295f750();
   input += synapse0x295f1e0();
   input += synapse0x295f220();
   input += synapse0x2718140();
   input += synapse0x2718180();
   input += synapse0x2947c90();
   input += synapse0x2947cd0();
   input += synapse0x2947d10();
   input += synapse0x2958b40();
   return input;
}

double NNfunction_NN_3_5::neuron0x295f050() {
   double input = input0x295f050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x27188e0() {
   double input = 0.0770279;
   input += synapse0x295eca0();
   input += synapse0x2958b80();
   input += synapse0x2958bc0();
   input += synapse0x295f8a0();
   input += synapse0x295f8e0();
   input += synapse0x295f920();
   input += synapse0x295f960();
   input += synapse0x295f9a0();
   input += synapse0x295f9e0();
   input += synapse0x295fa20();
   input += synapse0x295fa60();
   input += synapse0x295faa0();
   input += synapse0x295fae0();
   input += synapse0x295fb20();
   input += synapse0x295fb60();
   input += synapse0x295fba0();
   input += synapse0x295eaf0();
   input += synapse0x295eb30();
   input += synapse0x295fcf0();
   input += synapse0x295fd30();
   input += synapse0x295fd70();
   input += synapse0x295fdb0();
   input += synapse0x295fdf0();
   input += synapse0x295fe30();
   return input;
}

double NNfunction_NN_3_5::neuron0x27188e0() {
   double input = input0x27188e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x295fe70() {
   double input = -1.16277;
   input += synapse0x29601b0();
   input += synapse0x29601f0();
   input += synapse0x2960230();
   input += synapse0x2960270();
   input += synapse0x29602b0();
   input += synapse0x29602f0();
   input += synapse0x2960330();
   input += synapse0x2960370();
   input += synapse0x29603b0();
   input += synapse0x29603f0();
   input += synapse0x2960430();
   input += synapse0x2960470();
   input += synapse0x29604b0();
   input += synapse0x29604f0();
   input += synapse0x2960530();
   input += synapse0x2960570();
   input += synapse0x2960000();
   input += synapse0x2960040();
   input += synapse0x29606c0();
   input += synapse0x2960700();
   input += synapse0x2960740();
   input += synapse0x2960780();
   input += synapse0x29607c0();
   input += synapse0x2960800();
   return input;
}

double NNfunction_NN_3_5::neuron0x295fe70() {
   double input = input0x295fe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2960840() {
   double input = -0.312812;
   input += synapse0x2960b80();
   input += synapse0x2960bc0();
   input += synapse0x2960c00();
   input += synapse0x2960c40();
   input += synapse0x2960c80();
   input += synapse0x2960cc0();
   input += synapse0x2960d00();
   input += synapse0x2960d40();
   input += synapse0x2960d80();
   input += synapse0x27184d0();
   input += synapse0x2718510();
   input += synapse0x2718550();
   input += synapse0x2718590();
   input += synapse0x27185d0();
   input += synapse0x2718610();
   input += synapse0x2718650();
   input += synapse0x29609d0();
   input += synapse0x2960a10();
   input += synapse0x27187a0();
   input += synapse0x27187e0();
   input += synapse0x2718820();
   input += synapse0x2718860();
   input += synapse0x27188a0();
   input += synapse0x29615d0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2960840() {
   double input = input0x2960840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2961610() {
   double input = 0.422231;
   input += synapse0x2961950();
   input += synapse0x2961990();
   input += synapse0x29619d0();
   input += synapse0x2961a10();
   input += synapse0x2961a50();
   input += synapse0x2961a90();
   input += synapse0x2961ad0();
   input += synapse0x2961b10();
   input += synapse0x2961b50();
   input += synapse0x2961b90();
   input += synapse0x2961bd0();
   input += synapse0x2961c10();
   input += synapse0x2961c50();
   input += synapse0x2961c90();
   input += synapse0x2961cd0();
   input += synapse0x2961d10();
   input += synapse0x29617a0();
   input += synapse0x29617e0();
   input += synapse0x2961e60();
   input += synapse0x2961ea0();
   input += synapse0x2961ee0();
   input += synapse0x2961f20();
   input += synapse0x2961f60();
   input += synapse0x2961fa0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2961610() {
   double input = input0x2961610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2961fe0() {
   double input = 0.545148;
   input += synapse0x2962320();
   input += synapse0x2962360();
   input += synapse0x29623a0();
   input += synapse0x29623e0();
   input += synapse0x2962420();
   input += synapse0x2962460();
   input += synapse0x29624a0();
   input += synapse0x29624e0();
   input += synapse0x2962520();
   input += synapse0x2962560();
   input += synapse0x29625a0();
   input += synapse0x29625e0();
   input += synapse0x2962620();
   input += synapse0x2962660();
   input += synapse0x29626a0();
   input += synapse0x29626e0();
   input += synapse0x2962170();
   input += synapse0x29621b0();
   input += synapse0x2962830();
   input += synapse0x2962870();
   input += synapse0x29628b0();
   input += synapse0x29628f0();
   input += synapse0x2962930();
   input += synapse0x2962970();
   return input;
}

double NNfunction_NN_3_5::neuron0x2961fe0() {
   double input = input0x2961fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29629b0() {
   double input = -1.97414;
   input += synapse0x295c450();
   input += synapse0x295c490();
   input += synapse0x295c4d0();
   input += synapse0x295c510();
   input += synapse0x2962f00();
   input += synapse0x2962f40();
   input += synapse0x2962f80();
   input += synapse0x2962fc0();
   input += synapse0x2963000();
   input += synapse0x2963040();
   input += synapse0x2963080();
   input += synapse0x29630c0();
   input += synapse0x2963100();
   input += synapse0x2963140();
   input += synapse0x2963180();
   input += synapse0x29631c0();
   input += synapse0x2962b40();
   input += synapse0x2962b80();
   input += synapse0x2963310();
   input += synapse0x2963350();
   input += synapse0x2963390();
   input += synapse0x29633d0();
   input += synapse0x2963410();
   input += synapse0x2963450();
   return input;
}

double NNfunction_NN_3_5::neuron0x29629b0() {
   double input = input0x29629b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2963490() {
   double input = -0.494512;
   input += synapse0x29637d0();
   input += synapse0x2963810();
   input += synapse0x2963850();
   input += synapse0x2963890();
   input += synapse0x29638d0();
   input += synapse0x2963910();
   input += synapse0x2963950();
   input += synapse0x2963990();
   input += synapse0x29639d0();
   input += synapse0x2963a10();
   input += synapse0x2963a50();
   input += synapse0x2963a90();
   input += synapse0x2963ad0();
   input += synapse0x2963b10();
   input += synapse0x2963b50();
   input += synapse0x2963b90();
   input += synapse0x2963620();
   input += synapse0x2963660();
   input += synapse0x2963ce0();
   input += synapse0x2963d20();
   input += synapse0x2963d60();
   input += synapse0x2963da0();
   input += synapse0x2963de0();
   input += synapse0x2963e20();
   return input;
}

double NNfunction_NN_3_5::neuron0x2963490() {
   double input = input0x2963490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2963e60() {
   double input = -1.42884;
   input += synapse0x29641a0();
   input += synapse0x29641e0();
   input += synapse0x2964220();
   input += synapse0x2964260();
   input += synapse0x29642a0();
   input += synapse0x29642e0();
   input += synapse0x2964320();
   input += synapse0x2964360();
   input += synapse0x29643a0();
   input += synapse0x29643e0();
   input += synapse0x2964420();
   input += synapse0x2964460();
   input += synapse0x29644a0();
   input += synapse0x29644e0();
   input += synapse0x2964520();
   input += synapse0x2964560();
   input += synapse0x2963ff0();
   input += synapse0x2964030();
   input += synapse0x2960dc0();
   input += synapse0x2960e00();
   input += synapse0x2960e40();
   input += synapse0x2960e80();
   input += synapse0x2960ec0();
   input += synapse0x2960f00();
   return input;
}

double NNfunction_NN_3_5::neuron0x2963e60() {
   double input = input0x2963e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2960f40() {
   double input = -0.515376;
   input += synapse0x2961280();
   input += synapse0x29612c0();
   input += synapse0x2961300();
   input += synapse0x2961340();
   input += synapse0x2961380();
   input += synapse0x29613c0();
   input += synapse0x2961400();
   input += synapse0x2961440();
   input += synapse0x2961480();
   input += synapse0x29614c0();
   input += synapse0x2961500();
   input += synapse0x2961540();
   input += synapse0x2961580();
   input += synapse0x29656c0();
   input += synapse0x2965700();
   input += synapse0x2965740();
   input += synapse0x29610d0();
   input += synapse0x2961110();
   input += synapse0x2965890();
   input += synapse0x29658d0();
   input += synapse0x2965910();
   input += synapse0x2965950();
   input += synapse0x2965990();
   input += synapse0x29659d0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2960f40() {
   double input = input0x2960f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2965a10() {
   double input = 0.323075;
   input += synapse0x2965d50();
   input += synapse0x2965d90();
   input += synapse0x2965dd0();
   input += synapse0x2965e10();
   input += synapse0x2965e50();
   input += synapse0x2965e90();
   input += synapse0x2965ed0();
   input += synapse0x2965f10();
   input += synapse0x2965f50();
   input += synapse0x2965f90();
   input += synapse0x2965fd0();
   input += synapse0x2966010();
   input += synapse0x2966050();
   input += synapse0x2966090();
   input += synapse0x29660d0();
   input += synapse0x2966110();
   input += synapse0x2965ba0();
   input += synapse0x2965be0();
   input += synapse0x2966260();
   input += synapse0x29662a0();
   input += synapse0x29662e0();
   input += synapse0x2966320();
   input += synapse0x2966360();
   input += synapse0x29663a0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2965a10() {
   double input = input0x2965a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29663e0() {
   double input = 1.21177;
   input += synapse0x2966720();
   input += synapse0x2966760();
   input += synapse0x29667a0();
   input += synapse0x29667e0();
   input += synapse0x2966820();
   input += synapse0x2966860();
   input += synapse0x29668a0();
   input += synapse0x29668e0();
   input += synapse0x2966920();
   input += synapse0x2966960();
   input += synapse0x29669a0();
   input += synapse0x29669e0();
   input += synapse0x2966a20();
   input += synapse0x2966a60();
   input += synapse0x2966aa0();
   input += synapse0x2966ae0();
   input += synapse0x2966570();
   input += synapse0x29665b0();
   input += synapse0x2966c30();
   input += synapse0x2966c70();
   input += synapse0x2966cb0();
   input += synapse0x2966cf0();
   input += synapse0x2966d30();
   input += synapse0x2966d70();
   return input;
}

double NNfunction_NN_3_5::neuron0x29663e0() {
   double input = input0x29663e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2966db0() {
   double input = -0.716024;
   input += synapse0x29670f0();
   input += synapse0x2967130();
   input += synapse0x2967170();
   input += synapse0x29671b0();
   input += synapse0x29671f0();
   input += synapse0x2967230();
   input += synapse0x2967270();
   input += synapse0x29672b0();
   input += synapse0x29672f0();
   input += synapse0x2967330();
   input += synapse0x2967370();
   input += synapse0x29673b0();
   input += synapse0x29673f0();
   input += synapse0x2967430();
   input += synapse0x2967470();
   input += synapse0x29674b0();
   input += synapse0x2966f40();
   input += synapse0x2966f80();
   input += synapse0x2967600();
   input += synapse0x2967640();
   input += synapse0x2967680();
   input += synapse0x29676c0();
   input += synapse0x2967700();
   input += synapse0x2967740();
   return input;
}

double NNfunction_NN_3_5::neuron0x2966db0() {
   double input = input0x2966db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2967780() {
   double input = -2.31936;
   input += synapse0x2967ac0();
   input += synapse0x2958e20();
   input += synapse0x2958e60();
   input += synapse0x2959160();
   input += synapse0x29591a0();
   input += synapse0x29594a0();
   input += synapse0x29594e0();
   input += synapse0x29597e0();
   input += synapse0x2959820();
   input += synapse0x2959b20();
   input += synapse0x2959b60();
   input += synapse0x2959e60();
   input += synapse0x2959ea0();
   input += synapse0x295a1a0();
   input += synapse0x295a1e0();
   input += synapse0x295a4e0();
   input += synapse0x295a520();
   input += synapse0x295a820();
   input += synapse0x295a860();
   input += synapse0x295ab60();
   input += synapse0x295aba0();
   input += synapse0x295aea0();
   input += synapse0x295aee0();
   input += synapse0x295b1e0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2967780() {
   double input = input0x2967780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2969590() {
   double input = 0.2577;
   input += synapse0x295b220();
   input += synapse0x295bee0();
   input += synapse0x295bf20();
   input += synapse0x2967910();
   input += synapse0x2967950();
   input += synapse0x295c220();
   input += synapse0x295c260();
   input += synapse0x270a1b0();
   input += synapse0x270a1f0();
   input += synapse0x295c9a0();
   input += synapse0x295c9e0();
   input += synapse0x295cce0();
   input += synapse0x295cd20();
   input += synapse0x295d020();
   input += synapse0x295d060();
   input += synapse0x295d360();
   input += synapse0x295d3a0();
   input += synapse0x295d6a0();
   input += synapse0x295d6e0();
   input += synapse0x295d9e0();
   input += synapse0x295da20();
   input += synapse0x295b520();
   input += synapse0x295b560();
   input += synapse0x2969830();
   return input;
}

double NNfunction_NN_3_5::neuron0x2969590() {
   double input = input0x2969590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2969870() {
   double input = -1.20693;
   input += synapse0x2969bb0();
   input += synapse0x2969bf0();
   input += synapse0x2969c30();
   input += synapse0x2969c70();
   input += synapse0x2969cb0();
   input += synapse0x2969cf0();
   input += synapse0x2969d30();
   input += synapse0x2969d70();
   input += synapse0x2969db0();
   input += synapse0x2969df0();
   input += synapse0x2969e30();
   input += synapse0x2969e70();
   input += synapse0x2969eb0();
   input += synapse0x2969ef0();
   input += synapse0x2969f30();
   input += synapse0x2969f70();
   input += synapse0x2969a00();
   input += synapse0x2969a40();
   input += synapse0x296a0c0();
   input += synapse0x296a100();
   input += synapse0x296a140();
   input += synapse0x296a180();
   input += synapse0x296a1c0();
   input += synapse0x296a200();
   return input;
}

double NNfunction_NN_3_5::neuron0x2969870() {
   double input = input0x2969870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296a240() {
   double input = -1.58689;
   input += synapse0x296a580();
   input += synapse0x296a5c0();
   input += synapse0x296a600();
   input += synapse0x296a640();
   input += synapse0x296a680();
   input += synapse0x296a6c0();
   input += synapse0x296a700();
   input += synapse0x296a740();
   input += synapse0x296a780();
   input += synapse0x296a7c0();
   input += synapse0x296a800();
   input += synapse0x296a840();
   input += synapse0x296a880();
   input += synapse0x296a8c0();
   input += synapse0x296a900();
   input += synapse0x296a940();
   input += synapse0x296a3d0();
   input += synapse0x296a410();
   input += synapse0x296aa90();
   input += synapse0x296aad0();
   input += synapse0x296ab10();
   input += synapse0x296ab50();
   input += synapse0x296ab90();
   input += synapse0x296abd0();
   return input;
}

double NNfunction_NN_3_5::neuron0x296a240() {
   double input = input0x296a240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296ac10() {
   double input = 0.721924;
   input += synapse0x296af50();
   input += synapse0x296af90();
   input += synapse0x296afd0();
   input += synapse0x296b010();
   input += synapse0x296b050();
   input += synapse0x296b090();
   input += synapse0x296b0d0();
   input += synapse0x296b110();
   input += synapse0x296b150();
   input += synapse0x296b190();
   input += synapse0x296b1d0();
   input += synapse0x296b210();
   input += synapse0x296b250();
   input += synapse0x296b290();
   input += synapse0x296b2d0();
   input += synapse0x296b310();
   input += synapse0x296ada0();
   input += synapse0x296ade0();
   input += synapse0x296b460();
   input += synapse0x296b4a0();
   input += synapse0x296b4e0();
   input += synapse0x296b520();
   input += synapse0x296b560();
   input += synapse0x296b5a0();
   return input;
}

double NNfunction_NN_3_5::neuron0x296ac10() {
   double input = input0x296ac10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296b5e0() {
   double input = -0.0976055;
   input += synapse0x296b920();
   input += synapse0x296b960();
   input += synapse0x296b9a0();
   input += synapse0x296b9e0();
   input += synapse0x296ba20();
   input += synapse0x296ba60();
   input += synapse0x296baa0();
   input += synapse0x296bae0();
   input += synapse0x296bb20();
   input += synapse0x296bb60();
   input += synapse0x296bba0();
   input += synapse0x296bbe0();
   input += synapse0x296bc20();
   input += synapse0x296bc60();
   input += synapse0x296bca0();
   input += synapse0x296bce0();
   input += synapse0x296b770();
   input += synapse0x296b7b0();
   input += synapse0x296be30();
   input += synapse0x296be70();
   input += synapse0x296beb0();
   input += synapse0x296bef0();
   input += synapse0x296bf30();
   input += synapse0x296bf70();
   return input;
}

double NNfunction_NN_3_5::neuron0x296b5e0() {
   double input = input0x296b5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296bfb0() {
   double input = 1.81919;
   input += synapse0x296c2f0();
   input += synapse0x296c330();
   input += synapse0x296c370();
   input += synapse0x296c3b0();
   input += synapse0x296c3f0();
   input += synapse0x296c430();
   input += synapse0x296c470();
   input += synapse0x296c4b0();
   input += synapse0x296c4f0();
   input += synapse0x29646b0();
   input += synapse0x29646f0();
   input += synapse0x2964730();
   input += synapse0x2964770();
   input += synapse0x29647b0();
   input += synapse0x29647f0();
   input += synapse0x2964830();
   input += synapse0x296c140();
   input += synapse0x296c180();
   input += synapse0x2964980();
   input += synapse0x29649c0();
   input += synapse0x2964a00();
   input += synapse0x2964a40();
   input += synapse0x2964a80();
   input += synapse0x2964ac0();
   return input;
}

double NNfunction_NN_3_5::neuron0x296bfb0() {
   double input = input0x296bfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2964b00() {
   double input = 1.17683;
   input += synapse0x2964e40();
   input += synapse0x2964e80();
   input += synapse0x2964ec0();
   input += synapse0x2964f00();
   input += synapse0x2964f40();
   input += synapse0x2964f80();
   input += synapse0x2964fc0();
   input += synapse0x2965000();
   input += synapse0x2965040();
   input += synapse0x2965080();
   input += synapse0x29650c0();
   input += synapse0x2965100();
   input += synapse0x2965140();
   input += synapse0x2965180();
   input += synapse0x29651c0();
   input += synapse0x2965200();
   input += synapse0x2964c90();
   input += synapse0x2964cd0();
   input += synapse0x2965350();
   input += synapse0x2965390();
   input += synapse0x29653d0();
   input += synapse0x2965410();
   input += synapse0x2965450();
   input += synapse0x2965490();
   return input;
}

double NNfunction_NN_3_5::neuron0x2964b00() {
   double input = input0x2964b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29654d0() {
   double input = 0.111249;
   input += synapse0x2965660();
   input += synapse0x296e6f0();
   input += synapse0x296e730();
   input += synapse0x296e770();
   input += synapse0x296e7b0();
   input += synapse0x296e7f0();
   input += synapse0x296e830();
   input += synapse0x296e870();
   input += synapse0x296e8b0();
   input += synapse0x296e8f0();
   input += synapse0x296e930();
   input += synapse0x296e970();
   input += synapse0x296e9b0();
   input += synapse0x296e9f0();
   input += synapse0x296ea30();
   input += synapse0x296ea70();
   input += synapse0x296e540();
   input += synapse0x296e580();
   input += synapse0x296ebc0();
   input += synapse0x296ec00();
   input += synapse0x296ec40();
   input += synapse0x296ec80();
   input += synapse0x296ecc0();
   input += synapse0x296ed00();
   return input;
}

double NNfunction_NN_3_5::neuron0x29654d0() {
   double input = input0x29654d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296ed40() {
   double input = -2.56118;
   input += synapse0x296f080();
   input += synapse0x296f0c0();
   input += synapse0x296f100();
   input += synapse0x296f140();
   input += synapse0x296f180();
   input += synapse0x296f1c0();
   input += synapse0x296f200();
   input += synapse0x296f240();
   input += synapse0x296f280();
   input += synapse0x296f2c0();
   input += synapse0x296f300();
   input += synapse0x296f340();
   input += synapse0x296f380();
   input += synapse0x296f3c0();
   input += synapse0x296f400();
   input += synapse0x296f440();
   input += synapse0x296eed0();
   input += synapse0x296ef10();
   input += synapse0x296f590();
   input += synapse0x296f5d0();
   input += synapse0x296f610();
   input += synapse0x296f650();
   input += synapse0x296f690();
   input += synapse0x296f6d0();
   return input;
}

double NNfunction_NN_3_5::neuron0x296ed40() {
   double input = input0x296ed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296f710() {
   double input = 1.52627;
   input += synapse0x296fa50();
   input += synapse0x296fa90();
   input += synapse0x296fad0();
   input += synapse0x296fb10();
   input += synapse0x296fb50();
   input += synapse0x296fb90();
   input += synapse0x296fbd0();
   input += synapse0x296fc10();
   input += synapse0x296fc50();
   input += synapse0x296fc90();
   input += synapse0x296fcd0();
   input += synapse0x296fd10();
   input += synapse0x296fd50();
   input += synapse0x296fd90();
   input += synapse0x296fdd0();
   input += synapse0x296fe10();
   input += synapse0x296f8a0();
   input += synapse0x296f8e0();
   input += synapse0x296ff60();
   input += synapse0x296ffa0();
   input += synapse0x296ffe0();
   input += synapse0x2970020();
   input += synapse0x2970060();
   input += synapse0x29700a0();
   return input;
}

double NNfunction_NN_3_5::neuron0x296f710() {
   double input = input0x296f710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29700e0() {
   double input = 0.394568;
   input += synapse0x2970420();
   input += synapse0x2970460();
   input += synapse0x29704a0();
   input += synapse0x29704e0();
   input += synapse0x2970520();
   input += synapse0x2970560();
   input += synapse0x29705a0();
   input += synapse0x29705e0();
   input += synapse0x2970620();
   input += synapse0x2970660();
   input += synapse0x29706a0();
   input += synapse0x29706e0();
   input += synapse0x2970720();
   input += synapse0x2970760();
   input += synapse0x29707a0();
   input += synapse0x29707e0();
   input += synapse0x2970270();
   input += synapse0x29702b0();
   input += synapse0x2970930();
   input += synapse0x2970970();
   input += synapse0x29709b0();
   input += synapse0x29709f0();
   input += synapse0x2970a30();
   input += synapse0x2970a70();
   return input;
}

double NNfunction_NN_3_5::neuron0x29700e0() {
   double input = input0x29700e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2970ab0() {
   double input = 1.37425;
   input += synapse0x2970df0();
   input += synapse0x2970e30();
   input += synapse0x2970e70();
   input += synapse0x2970eb0();
   input += synapse0x2970ef0();
   input += synapse0x2970f30();
   input += synapse0x2970f70();
   input += synapse0x2970fb0();
   input += synapse0x2970ff0();
   input += synapse0x2971030();
   input += synapse0x2971070();
   input += synapse0x29710b0();
   input += synapse0x29710f0();
   input += synapse0x2971130();
   input += synapse0x2971170();
   input += synapse0x29711b0();
   input += synapse0x2970c40();
   input += synapse0x2970c80();
   input += synapse0x2971300();
   input += synapse0x2971340();
   input += synapse0x2971380();
   input += synapse0x29713c0();
   input += synapse0x2971400();
   input += synapse0x2971440();
   return input;
}

double NNfunction_NN_3_5::neuron0x2970ab0() {
   double input = input0x2970ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2971480() {
   double input = -0.412011;
   input += synapse0x29717c0();
   input += synapse0x2971800();
   input += synapse0x2971840();
   input += synapse0x2971880();
   input += synapse0x29718c0();
   input += synapse0x2971900();
   input += synapse0x2971940();
   input += synapse0x2971980();
   input += synapse0x29719c0();
   input += synapse0x2971a00();
   input += synapse0x2971a40();
   input += synapse0x2971a80();
   input += synapse0x2971ac0();
   input += synapse0x2971b00();
   input += synapse0x2971b40();
   input += synapse0x2971b80();
   input += synapse0x2971610();
   input += synapse0x2971650();
   input += synapse0x2971cd0();
   input += synapse0x2971d10();
   input += synapse0x2971d50();
   input += synapse0x2971d90();
   input += synapse0x2971dd0();
   input += synapse0x2971e10();
   return input;
}

double NNfunction_NN_3_5::neuron0x2971480() {
   double input = input0x2971480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2971e50() {
   double input = -0.165479;
   input += synapse0x2972190();
   input += synapse0x29721d0();
   input += synapse0x2972210();
   input += synapse0x2972250();
   input += synapse0x2972290();
   input += synapse0x29722d0();
   input += synapse0x2972310();
   input += synapse0x2972350();
   input += synapse0x2972390();
   input += synapse0x29723d0();
   input += synapse0x2972410();
   input += synapse0x2972450();
   input += synapse0x2972490();
   input += synapse0x29724d0();
   input += synapse0x2972510();
   input += synapse0x2972550();
   input += synapse0x2971fe0();
   input += synapse0x2972020();
   input += synapse0x29726a0();
   input += synapse0x29726e0();
   input += synapse0x2972720();
   input += synapse0x2972760();
   input += synapse0x29727a0();
   input += synapse0x29727e0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2971e50() {
   double input = input0x2971e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2972820() {
   double input = -1.32552;
   input += synapse0x2972b60();
   input += synapse0x2972ba0();
   input += synapse0x2972be0();
   input += synapse0x2972c20();
   input += synapse0x2972c60();
   input += synapse0x2972ca0();
   input += synapse0x2972ce0();
   input += synapse0x2972d20();
   input += synapse0x2972d60();
   input += synapse0x2972da0();
   input += synapse0x2972de0();
   input += synapse0x2972e20();
   input += synapse0x2972e60();
   input += synapse0x2972ea0();
   input += synapse0x2972ee0();
   input += synapse0x2972f20();
   input += synapse0x29729b0();
   input += synapse0x29729f0();
   input += synapse0x2973070();
   input += synapse0x29730b0();
   input += synapse0x29730f0();
   input += synapse0x2973130();
   input += synapse0x2973170();
   input += synapse0x29731b0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2972820() {
   double input = input0x2972820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29731f0() {
   double input = 0.547957;
   input += synapse0x2973530();
   input += synapse0x2967b00();
   input += synapse0x2967b40();
   input += synapse0x2967b80();
   input += synapse0x2967dd0();
   input += synapse0x2967e10();
   input += synapse0x2967e50();
   input += synapse0x29680a0();
   input += synapse0x29680e0();
   input += synapse0x2968330();
   input += synapse0x2968370();
   input += synapse0x29683b0();
   input += synapse0x2968600();
   input += synapse0x2968640();
   input += synapse0x2968890();
   input += synapse0x29688d0();
   input += synapse0x2973380();
   input += synapse0x29733c0();
   input += synapse0x2968a20();
   input += synapse0x2968f30();
   input += synapse0x2968f70();
   input += synapse0x2968fb0();
   input += synapse0x2969200();
   input += synapse0x2969240();
   return input;
}

double NNfunction_NN_3_5::neuron0x29731f0() {
   double input = input0x29731f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2969280() {
   double input = -5.95528;
   input += synapse0x2968af0();
   input += synapse0x2968b30();
   input += synapse0x2968b70();
   input += synapse0x2968bb0();
   input += synapse0x2969530();
   input += synapse0x2975880();
   input += synapse0x29758c0();
   input += synapse0x2975900();
   input += synapse0x2975940();
   input += synapse0x2975980();
   input += synapse0x29759c0();
   input += synapse0x2975a00();
   input += synapse0x2975a40();
   input += synapse0x2975a80();
   input += synapse0x2975ac0();
   input += synapse0x2975b00();
   input += synapse0x2969410();
   input += synapse0x2969450();
   input += synapse0x2975c50();
   input += synapse0x2975c90();
   input += synapse0x2975cd0();
   input += synapse0x2975d10();
   input += synapse0x2975d50();
   input += synapse0x2975d90();
   return input;
}

double NNfunction_NN_3_5::neuron0x2969280() {
   double input = input0x2969280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2975dd0() {
   double input = 0.341241;
   input += synapse0x2976110();
   input += synapse0x2976150();
   input += synapse0x2976190();
   input += synapse0x29761d0();
   input += synapse0x2976210();
   input += synapse0x2976250();
   input += synapse0x2976290();
   input += synapse0x29762d0();
   input += synapse0x2976310();
   input += synapse0x2976350();
   input += synapse0x2976390();
   input += synapse0x29763d0();
   input += synapse0x2976410();
   input += synapse0x2976450();
   input += synapse0x2976490();
   input += synapse0x29764d0();
   input += synapse0x2975f60();
   input += synapse0x2975fa0();
   input += synapse0x2976620();
   input += synapse0x2976660();
   input += synapse0x29766a0();
   input += synapse0x29766e0();
   input += synapse0x2976720();
   input += synapse0x2976760();
   return input;
}

double NNfunction_NN_3_5::neuron0x2975dd0() {
   double input = input0x2975dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29767a0() {
   double input = 0.818599;
   input += synapse0x2976ae0();
   input += synapse0x2976b20();
   input += synapse0x2976b60();
   input += synapse0x2976ba0();
   input += synapse0x2976be0();
   input += synapse0x2976c20();
   input += synapse0x2976c60();
   input += synapse0x2976ca0();
   input += synapse0x2976ce0();
   input += synapse0x2976d20();
   input += synapse0x2976d60();
   input += synapse0x2976da0();
   input += synapse0x2976de0();
   input += synapse0x2976e20();
   input += synapse0x2976e60();
   input += synapse0x2976ea0();
   input += synapse0x2976930();
   input += synapse0x2976970();
   input += synapse0x2976ff0();
   input += synapse0x2977030();
   input += synapse0x2977070();
   input += synapse0x29770b0();
   input += synapse0x29770f0();
   input += synapse0x2977130();
   return input;
}

double NNfunction_NN_3_5::neuron0x29767a0() {
   double input = input0x29767a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2977170() {
   double input = 7.10901;
   input += synapse0x29774b0();
   input += synapse0x29774f0();
   input += synapse0x2977530();
   input += synapse0x2977570();
   input += synapse0x29775b0();
   input += synapse0x29775f0();
   input += synapse0x2977630();
   input += synapse0x2977670();
   input += synapse0x29776b0();
   input += synapse0x29776f0();
   input += synapse0x2977730();
   input += synapse0x2977770();
   input += synapse0x29777b0();
   input += synapse0x29777f0();
   input += synapse0x2977830();
   input += synapse0x2977870();
   input += synapse0x2977300();
   input += synapse0x2977340();
   input += synapse0x29779c0();
   input += synapse0x2977a00();
   input += synapse0x2977a40();
   input += synapse0x2977a80();
   input += synapse0x2977ac0();
   input += synapse0x2977b00();
   return input;
}

double NNfunction_NN_3_5::neuron0x2977170() {
   double input = input0x2977170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2977b40() {
   double input = -0.0937767;
   input += synapse0x2977e80();
   input += synapse0x2977ec0();
   input += synapse0x2977f00();
   input += synapse0x2977f40();
   input += synapse0x2977f80();
   input += synapse0x2977fc0();
   input += synapse0x2978000();
   input += synapse0x2978040();
   input += synapse0x2978080();
   input += synapse0x29780c0();
   input += synapse0x2978100();
   input += synapse0x2978140();
   input += synapse0x2978180();
   input += synapse0x29781c0();
   input += synapse0x2978200();
   input += synapse0x2978240();
   input += synapse0x2977cd0();
   input += synapse0x2977d10();
   input += synapse0x2978390();
   input += synapse0x29783d0();
   input += synapse0x2978410();
   input += synapse0x2978450();
   input += synapse0x2978490();
   input += synapse0x29784d0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2977b40() {
   double input = input0x2977b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2978510() {
   double input = 0.45672;
   input += synapse0x2978850();
   input += synapse0x2978890();
   input += synapse0x29788d0();
   input += synapse0x2978910();
   input += synapse0x2978950();
   input += synapse0x2978990();
   input += synapse0x29789d0();
   input += synapse0x2978a10();
   input += synapse0x2978a50();
   input += synapse0x2978a90();
   input += synapse0x2978ad0();
   input += synapse0x2978b10();
   input += synapse0x2978b50();
   input += synapse0x2978b90();
   input += synapse0x2978bd0();
   input += synapse0x2978c10();
   input += synapse0x29786a0();
   input += synapse0x29786e0();
   input += synapse0x2978d60();
   input += synapse0x2978da0();
   input += synapse0x2978de0();
   input += synapse0x2978e20();
   input += synapse0x2978e60();
   input += synapse0x2978ea0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2978510() {
   double input = input0x2978510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2978ee0() {
   double input = 0.0178953;
   input += synapse0x2979220();
   input += synapse0x2979260();
   input += synapse0x29792a0();
   input += synapse0x29792e0();
   input += synapse0x2979320();
   input += synapse0x2979360();
   input += synapse0x29793a0();
   input += synapse0x29793e0();
   input += synapse0x2979420();
   input += synapse0x2979460();
   input += synapse0x29794a0();
   input += synapse0x29794e0();
   input += synapse0x2979520();
   input += synapse0x2979560();
   input += synapse0x29795a0();
   input += synapse0x29795e0();
   input += synapse0x2979070();
   input += synapse0x29790b0();
   input += synapse0x2979730();
   input += synapse0x2979770();
   input += synapse0x29797b0();
   input += synapse0x29797f0();
   input += synapse0x2979830();
   input += synapse0x2979870();
   return input;
}

double NNfunction_NN_3_5::neuron0x2978ee0() {
   double input = input0x2978ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x29798b0() {
   double input = -0.00259511;
   input += synapse0x2979bf0();
   input += synapse0x2979c30();
   input += synapse0x2979c70();
   input += synapse0x2979cb0();
   input += synapse0x2979cf0();
   input += synapse0x2979d30();
   input += synapse0x2979d70();
   input += synapse0x2979db0();
   input += synapse0x2979df0();
   input += synapse0x2979e30();
   input += synapse0x2979e70();
   input += synapse0x2979eb0();
   input += synapse0x2979ef0();
   input += synapse0x2979f30();
   input += synapse0x2979f70();
   input += synapse0x2979fb0();
   input += synapse0x2979a40();
   input += synapse0x2979a80();
   input += synapse0x297a100();
   input += synapse0x297a140();
   input += synapse0x297a180();
   input += synapse0x297a1c0();
   input += synapse0x297a200();
   input += synapse0x297a240();
   return input;
}

double NNfunction_NN_3_5::neuron0x29798b0() {
   double input = input0x29798b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x297a280() {
   double input = 0.0153997;
   input += synapse0x2962cf0();
   input += synapse0x2962d30();
   input += synapse0x2962d70();
   input += synapse0x2962db0();
   input += synapse0x2962df0();
   input += synapse0x2962e30();
   input += synapse0x2962e70();
   input += synapse0x2962eb0();
   input += synapse0x297a9d0();
   input += synapse0x297aa10();
   input += synapse0x297aa50();
   input += synapse0x297aa90();
   input += synapse0x297aad0();
   input += synapse0x297ab10();
   input += synapse0x297ab50();
   input += synapse0x297ab90();
   input += synapse0x297a410();
   input += synapse0x297a450();
   input += synapse0x297ace0();
   input += synapse0x297ad20();
   input += synapse0x297ad60();
   input += synapse0x297ada0();
   input += synapse0x297ade0();
   input += synapse0x297ae20();
   return input;
}

double NNfunction_NN_3_5::neuron0x297a280() {
   double input = input0x297a280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x297ae60() {
   double input = 0.780127;
   input += synapse0x297b1a0();
   input += synapse0x297b1e0();
   input += synapse0x297b220();
   input += synapse0x297b260();
   input += synapse0x297b2a0();
   input += synapse0x297b2e0();
   input += synapse0x297b320();
   input += synapse0x297b360();
   input += synapse0x297b3a0();
   input += synapse0x297b3e0();
   input += synapse0x297b420();
   input += synapse0x297b460();
   input += synapse0x297b4a0();
   input += synapse0x297b4e0();
   input += synapse0x297b520();
   input += synapse0x297b560();
   input += synapse0x297aff0();
   input += synapse0x297b030();
   input += synapse0x297b6b0();
   input += synapse0x297b6f0();
   input += synapse0x297b730();
   input += synapse0x297b770();
   input += synapse0x297b7b0();
   input += synapse0x297b7f0();
   return input;
}

double NNfunction_NN_3_5::neuron0x297ae60() {
   double input = input0x297ae60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x297b830() {
   double input = 0.550376;
   input += synapse0x297bb70();
   input += synapse0x297bbb0();
   input += synapse0x297bbf0();
   input += synapse0x297bc30();
   input += synapse0x297bc70();
   input += synapse0x297bcb0();
   input += synapse0x297bcf0();
   input += synapse0x297bd30();
   input += synapse0x297bd70();
   input += synapse0x297bdb0();
   input += synapse0x297bdf0();
   input += synapse0x297be30();
   input += synapse0x297be70();
   input += synapse0x297beb0();
   input += synapse0x297bef0();
   input += synapse0x297bf30();
   input += synapse0x297b9c0();
   input += synapse0x297ba00();
   input += synapse0x296c530();
   input += synapse0x296c570();
   input += synapse0x296c5b0();
   input += synapse0x296c5f0();
   input += synapse0x296c630();
   input += synapse0x296c670();
   return input;
}

double NNfunction_NN_3_5::neuron0x297b830() {
   double input = input0x297b830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296c6b0() {
   double input = -1.73758;
   input += synapse0x296c9f0();
   input += synapse0x296ca30();
   input += synapse0x296ca70();
   input += synapse0x296cab0();
   input += synapse0x296caf0();
   input += synapse0x296cb30();
   input += synapse0x296cb70();
   input += synapse0x296cbb0();
   input += synapse0x296cbf0();
   input += synapse0x296cc30();
   input += synapse0x296cc70();
   input += synapse0x296ccb0();
   input += synapse0x296ccf0();
   input += synapse0x296cd30();
   input += synapse0x296cd70();
   input += synapse0x296cdb0();
   input += synapse0x296c840();
   input += synapse0x296c880();
   input += synapse0x296cf00();
   input += synapse0x296cf40();
   input += synapse0x296cf80();
   input += synapse0x296cfc0();
   input += synapse0x296d000();
   input += synapse0x296d040();
   return input;
}

double NNfunction_NN_3_5::neuron0x296c6b0() {
   double input = input0x296c6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296d080() {
   double input = -0.525335;
   input += synapse0x296d3c0();
   input += synapse0x296d400();
   input += synapse0x296d440();
   input += synapse0x296d480();
   input += synapse0x296d4c0();
   input += synapse0x296d500();
   input += synapse0x296d540();
   input += synapse0x296d580();
   input += synapse0x296d5c0();
   input += synapse0x296d600();
   input += synapse0x296d640();
   input += synapse0x296d680();
   input += synapse0x296d6c0();
   input += synapse0x296d700();
   input += synapse0x296d740();
   input += synapse0x296d780();
   input += synapse0x296d210();
   input += synapse0x296d250();
   input += synapse0x296d8d0();
   input += synapse0x296d910();
   input += synapse0x296d950();
   input += synapse0x296d990();
   input += synapse0x296d9d0();
   input += synapse0x296da10();
   return input;
}

double NNfunction_NN_3_5::neuron0x296d080() {
   double input = input0x296d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x296da50() {
   double input = 2.00362;
   input += synapse0x296dd90();
   input += synapse0x296ddd0();
   input += synapse0x296de10();
   input += synapse0x296de50();
   input += synapse0x296de90();
   input += synapse0x296ded0();
   input += synapse0x296df10();
   input += synapse0x296df50();
   input += synapse0x296df90();
   input += synapse0x296dfd0();
   input += synapse0x296e010();
   input += synapse0x296e050();
   input += synapse0x296e090();
   input += synapse0x296e0d0();
   input += synapse0x296e110();
   input += synapse0x296e150();
   input += synapse0x296dbe0();
   input += synapse0x296dc20();
   input += synapse0x296e2a0();
   input += synapse0x296e2e0();
   input += synapse0x296e320();
   input += synapse0x296e360();
   input += synapse0x296e3a0();
   input += synapse0x296e3e0();
   return input;
}

double NNfunction_NN_3_5::neuron0x296da50() {
   double input = input0x296da50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2980090() {
   double input = 0.778117;
   input += synapse0x29802b0();
   input += synapse0x29802f0();
   input += synapse0x2980330();
   input += synapse0x2980370();
   input += synapse0x29803b0();
   input += synapse0x29803f0();
   input += synapse0x2980430();
   input += synapse0x2980470();
   input += synapse0x29804b0();
   input += synapse0x29804f0();
   input += synapse0x2980530();
   input += synapse0x2980570();
   input += synapse0x29805b0();
   input += synapse0x29805f0();
   input += synapse0x2980630();
   input += synapse0x2980670();
   input += synapse0x296e420();
   input += synapse0x296e460();
   input += synapse0x29807c0();
   input += synapse0x2980800();
   input += synapse0x2980840();
   input += synapse0x2980880();
   input += synapse0x29808c0();
   input += synapse0x2980900();
   return input;
}

double NNfunction_NN_3_5::neuron0x2980090() {
   double input = input0x2980090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2980940() {
   double input = 1.4109;
   input += synapse0x2980c80();
   input += synapse0x2980cc0();
   input += synapse0x2980d00();
   input += synapse0x2980d40();
   input += synapse0x2980d80();
   input += synapse0x2980dc0();
   input += synapse0x2980e00();
   input += synapse0x2980e40();
   input += synapse0x2980e80();
   input += synapse0x2980ec0();
   input += synapse0x2980f00();
   input += synapse0x2980f40();
   input += synapse0x2980f80();
   input += synapse0x2980fc0();
   input += synapse0x2981000();
   input += synapse0x2981040();
   input += synapse0x2980ad0();
   input += synapse0x2980b10();
   input += synapse0x2981190();
   input += synapse0x29811d0();
   input += synapse0x2981210();
   input += synapse0x2981250();
   input += synapse0x2981290();
   input += synapse0x29812d0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2980940() {
   double input = input0x2980940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2981310() {
   double input = 0.367891;
   input += synapse0x2981650();
   input += synapse0x2981690();
   input += synapse0x29816d0();
   input += synapse0x2981710();
   input += synapse0x2981750();
   input += synapse0x2981790();
   input += synapse0x29817d0();
   input += synapse0x2981810();
   input += synapse0x2981850();
   input += synapse0x2981890();
   input += synapse0x29818d0();
   input += synapse0x2981910();
   input += synapse0x2981950();
   input += synapse0x2981990();
   input += synapse0x29819d0();
   input += synapse0x2981a10();
   input += synapse0x29814a0();
   input += synapse0x29814e0();
   input += synapse0x2981b60();
   input += synapse0x2981ba0();
   input += synapse0x2981be0();
   input += synapse0x2981c20();
   input += synapse0x2981c60();
   input += synapse0x2981ca0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2981310() {
   double input = input0x2981310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2981ce0() {
   double input = 0.787884;
   input += synapse0x2982020();
   input += synapse0x2982060();
   input += synapse0x29820a0();
   input += synapse0x29820e0();
   input += synapse0x2982120();
   input += synapse0x2982160();
   input += synapse0x29821a0();
   input += synapse0x29821e0();
   input += synapse0x2982220();
   input += synapse0x2982260();
   input += synapse0x29822a0();
   input += synapse0x29822e0();
   input += synapse0x2982320();
   input += synapse0x2982360();
   input += synapse0x29823a0();
   input += synapse0x29823e0();
   input += synapse0x2981e70();
   input += synapse0x2981eb0();
   input += synapse0x2982530();
   input += synapse0x2982570();
   input += synapse0x29825b0();
   input += synapse0x29825f0();
   input += synapse0x2982630();
   input += synapse0x2982670();
   return input;
}

double NNfunction_NN_3_5::neuron0x2981ce0() {
   double input = input0x2981ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2988ee0() {
   double input = -0.236058;
   input += synapse0x295ec10();
   input += synapse0x295ec50();
   input += synapse0x2960120();
   input += synapse0x2960160();
   input += synapse0x2960af0();
   input += synapse0x2960b30();
   input += synapse0x29618c0();
   input += synapse0x2961900();
   input += synapse0x2962290();
   input += synapse0x29622d0();
   input += synapse0x2962c60();
   input += synapse0x2962ca0();
   input += synapse0x2963740();
   input += synapse0x2963780();
   input += synapse0x2964110();
   input += synapse0x2964150();
   input += synapse0x29611f0();
   input += synapse0x2961230();
   input += synapse0x2965cc0();
   input += synapse0x2965d00();
   input += synapse0x2966690();
   input += synapse0x29666d0();
   input += synapse0x2967060();
   input += synapse0x29670a0();
   input += synapse0x2967a30();
   input += synapse0x2967a70();
   input += synapse0x295bba0();
   input += synapse0x295bbe0();
   input += synapse0x2969b20();
   input += synapse0x2969b60();
   input += synapse0x296a4f0();
   input += synapse0x296a530();
   input += synapse0x296aec0();
   input += synapse0x296af00();
   input += synapse0x296b890();
   input += synapse0x296b8d0();
   input += synapse0x296c260();
   input += synapse0x296c2a0();
   input += synapse0x2964db0();
   input += synapse0x2964df0();
   input += synapse0x296e660();
   input += synapse0x296e6a0();
   input += synapse0x296eff0();
   input += synapse0x296f030();
   input += synapse0x296f9c0();
   input += synapse0x296fa00();
   input += synapse0x2970390();
   input += synapse0x29703d0();
   input += synapse0x2970d60();
   input += synapse0x2970da0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2988ee0() {
   double input = input0x2988ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2989280() {
   double input = -0.00314179;
   input += synapse0x29734a0();
   input += synapse0x29734e0();
   input += synapse0x2968a60();
   input += synapse0x2968aa0();
   input += synapse0x2976080();
   input += synapse0x29760c0();
   input += synapse0x2976a50();
   input += synapse0x2976a90();
   input += synapse0x2977420();
   input += synapse0x2977460();
   input += synapse0x2977df0();
   input += synapse0x2977e30();
   input += synapse0x29787c0();
   input += synapse0x2978800();
   input += synapse0x2979190();
   input += synapse0x29791d0();
   input += synapse0x2979b60();
   input += synapse0x2979ba0();
   input += synapse0x297a530();
   input += synapse0x297a570();
   input += synapse0x297b110();
   input += synapse0x297b150();
   input += synapse0x297bae0();
   input += synapse0x297bb20();
   input += synapse0x296c960();
   input += synapse0x296c9a0();
   input += synapse0x296d330();
   input += synapse0x296d370();
   input += synapse0x296dd00();
   input += synapse0x296dd40();
   input += synapse0x2980220();
   input += synapse0x2980260();
   input += synapse0x2980bf0();
   input += synapse0x2980c30();
   input += synapse0x29815c0();
   input += synapse0x2981600();
   input += synapse0x2981f90();
   input += synapse0x2981fd0();
   input += synapse0x295de80();
   input += synapse0x295dec0();
   input += synapse0x2971730();
   input += synapse0x2971770();
   input += synapse0x29826b0();
   input += synapse0x29826f0();
   input += synapse0x2982730();
   input += synapse0x2982770();
   input += synapse0x2989620();
   input += synapse0x2989660();
   input += synapse0x29896a0();
   input += synapse0x29896e0();
   return input;
}

double NNfunction_NN_3_5::neuron0x2989280() {
   double input = input0x2989280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x2989720() {
   double input = 0.724311;
   input += synapse0x2989a60();
   input += synapse0x2989aa0();
   input += synapse0x2989ae0();
   input += synapse0x2989b20();
   input += synapse0x2989b60();
   input += synapse0x2989ba0();
   input += synapse0x2989be0();
   input += synapse0x2989c20();
   input += synapse0x2989c60();
   input += synapse0x2989ca0();
   input += synapse0x2989ce0();
   input += synapse0x2989d20();
   input += synapse0x2989d60();
   input += synapse0x2989da0();
   input += synapse0x2989de0();
   input += synapse0x2989e20();
   input += synapse0x29898b0();
   input += synapse0x29898f0();
   input += synapse0x2989f70();
   input += synapse0x2989fb0();
   input += synapse0x2989ff0();
   input += synapse0x298a030();
   input += synapse0x298a070();
   input += synapse0x298a0b0();
   input += synapse0x298a0f0();
   input += synapse0x298a130();
   input += synapse0x298a170();
   input += synapse0x298a1b0();
   input += synapse0x298a1f0();
   input += synapse0x298a230();
   input += synapse0x298a270();
   input += synapse0x298a2b0();
   input += synapse0x2989e60();
   input += synapse0x2989ea0();
   input += synapse0x2989ee0();
   input += synapse0x2989f20();
   input += synapse0x298a500();
   input += synapse0x298a540();
   input += synapse0x298a580();
   input += synapse0x298a5c0();
   input += synapse0x298a600();
   input += synapse0x298a640();
   input += synapse0x298a680();
   input += synapse0x298a6c0();
   input += synapse0x298a700();
   input += synapse0x298a740();
   input += synapse0x298a780();
   input += synapse0x298a7c0();
   input += synapse0x298a800();
   input += synapse0x298a840();
   return input;
}

double NNfunction_NN_3_5::neuron0x2989720() {
   double input = input0x2989720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x298a880() {
   double input = -0.931542;
   input += synapse0x298abc0();
   input += synapse0x298ac00();
   input += synapse0x298ac40();
   input += synapse0x298ac80();
   input += synapse0x298acc0();
   input += synapse0x298ad00();
   input += synapse0x298ad40();
   input += synapse0x298ad80();
   input += synapse0x298adc0();
   input += synapse0x298ae00();
   input += synapse0x298ae40();
   input += synapse0x298ae80();
   input += synapse0x298aec0();
   input += synapse0x298af00();
   input += synapse0x298af40();
   input += synapse0x298af80();
   input += synapse0x298aa10();
   input += synapse0x298aa50();
   input += synapse0x298b0d0();
   input += synapse0x298b110();
   input += synapse0x298b150();
   input += synapse0x298b190();
   input += synapse0x298b1d0();
   input += synapse0x298b210();
   input += synapse0x298b250();
   input += synapse0x298b290();
   input += synapse0x298b2d0();
   input += synapse0x298b310();
   input += synapse0x298b350();
   input += synapse0x298b390();
   input += synapse0x298b3d0();
   input += synapse0x298b410();
   input += synapse0x298afc0();
   input += synapse0x298b000();
   input += synapse0x298b040();
   input += synapse0x298b080();
   input += synapse0x298b660();
   input += synapse0x298b6a0();
   input += synapse0x298b6e0();
   input += synapse0x298b720();
   input += synapse0x298b760();
   input += synapse0x298b7a0();
   input += synapse0x298b7e0();
   input += synapse0x298b820();
   input += synapse0x298b860();
   input += synapse0x298b8a0();
   input += synapse0x298b8e0();
   input += synapse0x298b920();
   input += synapse0x298b960();
   input += synapse0x298b9a0();
   return input;
}

double NNfunction_NN_3_5::neuron0x298a880() {
   double input = input0x298a880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x298b9e0() {
   double input = 0.310143;
   input += synapse0x298bd20();
   input += synapse0x298bd60();
   input += synapse0x298bda0();
   input += synapse0x298bde0();
   input += synapse0x298be20();
   input += synapse0x298be60();
   input += synapse0x298bea0();
   input += synapse0x298bee0();
   input += synapse0x298bf20();
   input += synapse0x298bf60();
   input += synapse0x298bfa0();
   input += synapse0x298bfe0();
   input += synapse0x298c020();
   input += synapse0x298c060();
   input += synapse0x298c0a0();
   input += synapse0x298c0e0();
   input += synapse0x298bb70();
   input += synapse0x298bbb0();
   input += synapse0x298c230();
   input += synapse0x298c270();
   input += synapse0x298c2b0();
   input += synapse0x298c2f0();
   input += synapse0x298c330();
   input += synapse0x298c370();
   input += synapse0x298c3b0();
   input += synapse0x298c3f0();
   input += synapse0x298c430();
   input += synapse0x298c470();
   input += synapse0x298c4b0();
   input += synapse0x298c4f0();
   input += synapse0x298c530();
   input += synapse0x298c570();
   input += synapse0x298c120();
   input += synapse0x298c160();
   input += synapse0x298c1a0();
   input += synapse0x298c1e0();
   input += synapse0x298c7c0();
   input += synapse0x298c800();
   input += synapse0x298c840();
   input += synapse0x298c880();
   input += synapse0x298c8c0();
   input += synapse0x298c900();
   input += synapse0x298c940();
   input += synapse0x298c980();
   input += synapse0x298c9c0();
   input += synapse0x298ca00();
   input += synapse0x298ca40();
   input += synapse0x298ca80();
   input += synapse0x298cac0();
   input += synapse0x298cb00();
   return input;
}

double NNfunction_NN_3_5::neuron0x298b9e0() {
   double input = input0x298b9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_5::input0x298cb40() {
   double input = 1.11166;
   input += synapse0x295dc20();
   input += synapse0x298cd60();
   input += synapse0x298cda0();
   input += synapse0x298cde0();
   input += synapse0x298ce20();
   return input;
}

double NNfunction_NN_3_5::neuron0x298cb40() {
   double input = input0x298cb40();
   return (input * 1)+0;
}

double NNfunction_NN_3_5::synapse0x2718a70() {
   return (neuron0x2958c00()*-0.029442);
}

double NNfunction_NN_3_5::synapse0x2958ac0() {
   return (neuron0x2958f40()*0.0186795);
}

double NNfunction_NN_3_5::synapse0x2958b00() {
   return (neuron0x2959280()*2.05616);
}

double NNfunction_NN_3_5::synapse0x295df10() {
   return (neuron0x29595c0()*2.42446e-06);
}

double NNfunction_NN_3_5::synapse0x295df50() {
   return (neuron0x2959900()*0.0153673);
}

double NNfunction_NN_3_5::synapse0x295df90() {
   return (neuron0x2959c40()*0.00214475);
}

double NNfunction_NN_3_5::synapse0x295dfd0() {
   return (neuron0x2959f80()*0.00470913);
}

double NNfunction_NN_3_5::synapse0x295e010() {
   return (neuron0x295a2c0()*-0.0139251);
}

double NNfunction_NN_3_5::synapse0x295e050() {
   return (neuron0x295a600()*0.0120614);
}

double NNfunction_NN_3_5::synapse0x295e090() {
   return (neuron0x295a940()*0.00477055);
}

double NNfunction_NN_3_5::synapse0x295e0d0() {
   return (neuron0x295ac80()*0.00421242);
}

double NNfunction_NN_3_5::synapse0x295e110() {
   return (neuron0x295afc0()*-0.0537745);
}

double NNfunction_NN_3_5::synapse0x295e150() {
   return (neuron0x295b300()*0.00487407);
}

double NNfunction_NN_3_5::synapse0x295e190() {
   return (neuron0x295b640()*-0.0124054);
}

double NNfunction_NN_3_5::synapse0x295e1d0() {
   return (neuron0x295b980()*-0.0221804);
}

double NNfunction_NN_3_5::synapse0x295e210() {
   return (neuron0x295bcc0()*0.0242011);
}

double NNfunction_NN_3_5::synapse0x2958a30() {
   return (neuron0x295c000()*0.0142615);
}

double NNfunction_NN_3_5::synapse0x2958a70() {
   return (neuron0x295c560()*0.000271375);
}

double NNfunction_NN_3_5::synapse0x270a2d0() {
   return (neuron0x295c780()*0.00475994);
}

double NNfunction_NN_3_5::synapse0x270a310() {
   return (neuron0x295cac0()*0.0329295);
}

double NNfunction_NN_3_5::synapse0x295e470() {
   return (neuron0x295ce00()*-0.00688517);
}

double NNfunction_NN_3_5::synapse0x295e4b0() {
   return (neuron0x295d140()*-0.0132872);
}

double NNfunction_NN_3_5::synapse0x295e4f0() {
   return (neuron0x295d480()*-0.0333375);
}

double NNfunction_NN_3_5::synapse0x295e530() {
   return (neuron0x295d7c0()*-1.84559);
}

double NNfunction_NN_3_5::synapse0x295e8b0() {
   return (neuron0x2958c00()*0.0430932);
}

double NNfunction_NN_3_5::synapse0x295e8f0() {
   return (neuron0x2958f40()*1.19042);
}

double NNfunction_NN_3_5::synapse0x295e930() {
   return (neuron0x2959280()*0.158954);
}

double NNfunction_NN_3_5::synapse0x295e970() {
   return (neuron0x29595c0()*0.121048);
}

double NNfunction_NN_3_5::synapse0x295e9b0() {
   return (neuron0x2959900()*-0.00572805);
}

double NNfunction_NN_3_5::synapse0x295e9f0() {
   return (neuron0x2959c40()*0.000552635);
}

double NNfunction_NN_3_5::synapse0x295ea30() {
   return (neuron0x2959f80()*0.0774557);
}

double NNfunction_NN_3_5::synapse0x295ea70() {
   return (neuron0x295a2c0()*0.0322515);
}

double NNfunction_NN_3_5::synapse0x295eab0() {
   return (neuron0x295a600()*-0.0274885);
}

double NNfunction_NN_3_5::synapse0x295e360() {
   return (neuron0x295a940()*-0.00784095);
}

double NNfunction_NN_3_5::synapse0x295e3a0() {
   return (neuron0x295ac80()*0.016364);
}

double NNfunction_NN_3_5::synapse0x295e3e0() {
   return (neuron0x295afc0()*0.114272);
}

double NNfunction_NN_3_5::synapse0x295e420() {
   return (neuron0x295b300()*0.0316202);
}

double NNfunction_NN_3_5::synapse0x295ed00() {
   return (neuron0x295b640()*-0.00890485);
}

double NNfunction_NN_3_5::synapse0x295ed40() {
   return (neuron0x295b980()*0.0488625);
}

double NNfunction_NN_3_5::synapse0x295ed80() {
   return (neuron0x295bcc0()*0.0723737);
}

double NNfunction_NN_3_5::synapse0x295e700() {
   return (neuron0x295c000()*-0.013856);
}

double NNfunction_NN_3_5::synapse0x295e740() {
   return (neuron0x295c560()*-0.0555597);
}

double NNfunction_NN_3_5::synapse0x295eed0() {
   return (neuron0x295c780()*-0.0339591);
}

double NNfunction_NN_3_5::synapse0x295ef10() {
   return (neuron0x295cac0()*-0.0663989);
}

double NNfunction_NN_3_5::synapse0x295ef50() {
   return (neuron0x295ce00()*0.00875631);
}

double NNfunction_NN_3_5::synapse0x295ef90() {
   return (neuron0x295d140()*0.00756488);
}

double NNfunction_NN_3_5::synapse0x295efd0() {
   return (neuron0x295d480()*0.010479);
}

double NNfunction_NN_3_5::synapse0x295f010() {
   return (neuron0x295d7c0()*0.601373);
}

double NNfunction_NN_3_5::synapse0x295f390() {
   return (neuron0x2958c00()*-0.0511801);
}

double NNfunction_NN_3_5::synapse0x295f3d0() {
   return (neuron0x2958f40()*-0.0426803);
}

double NNfunction_NN_3_5::synapse0x295f410() {
   return (neuron0x2959280()*0.291865);
}

double NNfunction_NN_3_5::synapse0x295f450() {
   return (neuron0x29595c0()*-0.00944038);
}

double NNfunction_NN_3_5::synapse0x295f490() {
   return (neuron0x2959900()*-0.0172197);
}

double NNfunction_NN_3_5::synapse0x295f4d0() {
   return (neuron0x2959c40()*0.036084);
}

double NNfunction_NN_3_5::synapse0x295f510() {
   return (neuron0x2959f80()*-0.0232403);
}

double NNfunction_NN_3_5::synapse0x295f550() {
   return (neuron0x295a2c0()*-0.00158178);
}

double NNfunction_NN_3_5::synapse0x295f590() {
   return (neuron0x295a600()*0.00534206);
}

double NNfunction_NN_3_5::synapse0x295f5d0() {
   return (neuron0x295a940()*0.0110296);
}

double NNfunction_NN_3_5::synapse0x295f610() {
   return (neuron0x295ac80()*0.0329535);
}

double NNfunction_NN_3_5::synapse0x295f650() {
   return (neuron0x295afc0()*0.0704949);
}

double NNfunction_NN_3_5::synapse0x295f690() {
   return (neuron0x295b300()*0.015119);
}

double NNfunction_NN_3_5::synapse0x295f6d0() {
   return (neuron0x295b640()*0.0146301);
}

double NNfunction_NN_3_5::synapse0x295f710() {
   return (neuron0x295b980()*-0.00238531);
}

double NNfunction_NN_3_5::synapse0x295f750() {
   return (neuron0x295bcc0()*0.00079494);
}

double NNfunction_NN_3_5::synapse0x295f1e0() {
   return (neuron0x295c000()*-0.00636769);
}

double NNfunction_NN_3_5::synapse0x295f220() {
   return (neuron0x295c560()*-0.0268885);
}

double NNfunction_NN_3_5::synapse0x2718140() {
   return (neuron0x295c780()*0.0132091);
}

double NNfunction_NN_3_5::synapse0x2718180() {
   return (neuron0x295cac0()*0.0317762);
}

double NNfunction_NN_3_5::synapse0x2947c90() {
   return (neuron0x295ce00()*0.0347274);
}

double NNfunction_NN_3_5::synapse0x2947cd0() {
   return (neuron0x295d140()*-0.00900298);
}

double NNfunction_NN_3_5::synapse0x2947d10() {
   return (neuron0x295d480()*0.0330014);
}

double NNfunction_NN_3_5::synapse0x2958b40() {
   return (neuron0x295d7c0()*-2.93089);
}

double NNfunction_NN_3_5::synapse0x295eca0() {
   return (neuron0x2958c00()*-0.0718518);
}

double NNfunction_NN_3_5::synapse0x2958b80() {
   return (neuron0x2958f40()*-0.0212771);
}

double NNfunction_NN_3_5::synapse0x2958bc0() {
   return (neuron0x2959280()*5.51467);
}

double NNfunction_NN_3_5::synapse0x295f8a0() {
   return (neuron0x29595c0()*-0.00792802);
}

double NNfunction_NN_3_5::synapse0x295f8e0() {
   return (neuron0x2959900()*0.00532539);
}

double NNfunction_NN_3_5::synapse0x295f920() {
   return (neuron0x2959c40()*0.00818749);
}

double NNfunction_NN_3_5::synapse0x295f960() {
   return (neuron0x2959f80()*0.0207955);
}

double NNfunction_NN_3_5::synapse0x295f9a0() {
   return (neuron0x295a2c0()*0.0147671);
}

double NNfunction_NN_3_5::synapse0x295f9e0() {
   return (neuron0x295a600()*9.67148e-05);
}

double NNfunction_NN_3_5::synapse0x295fa20() {
   return (neuron0x295a940()*0.00305366);
}

double NNfunction_NN_3_5::synapse0x295fa60() {
   return (neuron0x295ac80()*-0.0198039);
}

double NNfunction_NN_3_5::synapse0x295faa0() {
   return (neuron0x295afc0()*-6.41497);
}

double NNfunction_NN_3_5::synapse0x295fae0() {
   return (neuron0x295b300()*-0.0125245);
}

double NNfunction_NN_3_5::synapse0x295fb20() {
   return (neuron0x295b640()*0.0240546);
}

double NNfunction_NN_3_5::synapse0x295fb60() {
   return (neuron0x295b980()*0.0195426);
}

double NNfunction_NN_3_5::synapse0x295fba0() {
   return (neuron0x295bcc0()*-0.00395063);
}

double NNfunction_NN_3_5::synapse0x295eaf0() {
   return (neuron0x295c000()*0.00723366);
}

double NNfunction_NN_3_5::synapse0x295eb30() {
   return (neuron0x295c560()*-0.029666);
}

double NNfunction_NN_3_5::synapse0x295fcf0() {
   return (neuron0x295c780()*-0.0372587);
}

double NNfunction_NN_3_5::synapse0x295fd30() {
   return (neuron0x295cac0()*-0.0224565);
}

double NNfunction_NN_3_5::synapse0x295fd70() {
   return (neuron0x295ce00()*0.000179515);
}

double NNfunction_NN_3_5::synapse0x295fdb0() {
   return (neuron0x295d140()*0.000767035);
}

double NNfunction_NN_3_5::synapse0x295fdf0() {
   return (neuron0x295d480()*-0.0140732);
}

double NNfunction_NN_3_5::synapse0x295fe30() {
   return (neuron0x295d7c0()*0.0410993);
}

double NNfunction_NN_3_5::synapse0x29601b0() {
   return (neuron0x2958c00()*0.0560534);
}

double NNfunction_NN_3_5::synapse0x29601f0() {
   return (neuron0x2958f40()*-0.117908);
}

double NNfunction_NN_3_5::synapse0x2960230() {
   return (neuron0x2959280()*0.355598);
}

double NNfunction_NN_3_5::synapse0x2960270() {
   return (neuron0x29595c0()*0.198765);
}

double NNfunction_NN_3_5::synapse0x29602b0() {
   return (neuron0x2959900()*-0.114915);
}

double NNfunction_NN_3_5::synapse0x29602f0() {
   return (neuron0x2959c40()*-0.0504139);
}

double NNfunction_NN_3_5::synapse0x2960330() {
   return (neuron0x2959f80()*-0.0133065);
}

double NNfunction_NN_3_5::synapse0x2960370() {
   return (neuron0x295a2c0()*0.0282749);
}

double NNfunction_NN_3_5::synapse0x29603b0() {
   return (neuron0x295a600()*-0.105291);
}

double NNfunction_NN_3_5::synapse0x29603f0() {
   return (neuron0x295a940()*-0.0395653);
}

double NNfunction_NN_3_5::synapse0x2960430() {
   return (neuron0x295ac80()*0.100249);
}

double NNfunction_NN_3_5::synapse0x2960470() {
   return (neuron0x295afc0()*-0.0883769);
}

double NNfunction_NN_3_5::synapse0x29604b0() {
   return (neuron0x295b300()*-0.0816834);
}

double NNfunction_NN_3_5::synapse0x29604f0() {
   return (neuron0x295b640()*0.0572102);
}

double NNfunction_NN_3_5::synapse0x2960530() {
   return (neuron0x295b980()*-0.0453909);
}

double NNfunction_NN_3_5::synapse0x2960570() {
   return (neuron0x295bcc0()*-0.0048351);
}

double NNfunction_NN_3_5::synapse0x2960000() {
   return (neuron0x295c000()*-0.00692965);
}

double NNfunction_NN_3_5::synapse0x2960040() {
   return (neuron0x295c560()*-0.0697949);
}

double NNfunction_NN_3_5::synapse0x29606c0() {
   return (neuron0x295c780()*-0.0100922);
}

double NNfunction_NN_3_5::synapse0x2960700() {
   return (neuron0x295cac0()*0.0632992);
}

double NNfunction_NN_3_5::synapse0x2960740() {
   return (neuron0x295ce00()*-0.0951269);
}

double NNfunction_NN_3_5::synapse0x2960780() {
   return (neuron0x295d140()*-0.136427);
}

double NNfunction_NN_3_5::synapse0x29607c0() {
   return (neuron0x295d480()*-0.133881);
}

double NNfunction_NN_3_5::synapse0x2960800() {
   return (neuron0x295d7c0()*0.447644);
}

double NNfunction_NN_3_5::synapse0x2960b80() {
   return (neuron0x2958c00()*-0.0824272);
}

double NNfunction_NN_3_5::synapse0x2960bc0() {
   return (neuron0x2958f40()*-0.016006);
}

double NNfunction_NN_3_5::synapse0x2960c00() {
   return (neuron0x2959280()*5.69799);
}

double NNfunction_NN_3_5::synapse0x2960c40() {
   return (neuron0x29595c0()*-0.0135233);
}

double NNfunction_NN_3_5::synapse0x2960c80() {
   return (neuron0x2959900()*0.00952406);
}

double NNfunction_NN_3_5::synapse0x2960cc0() {
   return (neuron0x2959c40()*0.0216773);
}

double NNfunction_NN_3_5::synapse0x2960d00() {
   return (neuron0x2959f80()*0.0220137);
}

double NNfunction_NN_3_5::synapse0x2960d40() {
   return (neuron0x295a2c0()*0.0230506);
}

double NNfunction_NN_3_5::synapse0x2960d80() {
   return (neuron0x295a600()*-0.00872283);
}

double NNfunction_NN_3_5::synapse0x27184d0() {
   return (neuron0x295a940()*-0.0123312);
}

double NNfunction_NN_3_5::synapse0x2718510() {
   return (neuron0x295ac80()*-0.0306502);
}

double NNfunction_NN_3_5::synapse0x2718550() {
   return (neuron0x295afc0()*-6.00644);
}

double NNfunction_NN_3_5::synapse0x2718590() {
   return (neuron0x295b300()*0.0186077);
}

double NNfunction_NN_3_5::synapse0x27185d0() {
   return (neuron0x295b640()*0.0336393);
}

double NNfunction_NN_3_5::synapse0x2718610() {
   return (neuron0x295b980()*0.0168148);
}

double NNfunction_NN_3_5::synapse0x2718650() {
   return (neuron0x295bcc0()*0.00043947);
}

double NNfunction_NN_3_5::synapse0x29609d0() {
   return (neuron0x295c000()*-0.00185125);
}

double NNfunction_NN_3_5::synapse0x2960a10() {
   return (neuron0x295c560()*-0.022084);
}

double NNfunction_NN_3_5::synapse0x27187a0() {
   return (neuron0x295c780()*-0.0406481);
}

double NNfunction_NN_3_5::synapse0x27187e0() {
   return (neuron0x295cac0()*-0.0302096);
}

double NNfunction_NN_3_5::synapse0x2718820() {
   return (neuron0x295ce00()*-0.0111863);
}

double NNfunction_NN_3_5::synapse0x2718860() {
   return (neuron0x295d140()*0.00791896);
}

double NNfunction_NN_3_5::synapse0x27188a0() {
   return (neuron0x295d480()*-0.0116147);
}

double NNfunction_NN_3_5::synapse0x29615d0() {
   return (neuron0x295d7c0()*0.274059);
}

double NNfunction_NN_3_5::synapse0x2961950() {
   return (neuron0x2958c00()*-0.013671);
}

double NNfunction_NN_3_5::synapse0x2961990() {
   return (neuron0x2958f40()*15.8527);
}

double NNfunction_NN_3_5::synapse0x29619d0() {
   return (neuron0x2959280()*0.0480922);
}

double NNfunction_NN_3_5::synapse0x2961a10() {
   return (neuron0x29595c0()*-0.000934525);
}

double NNfunction_NN_3_5::synapse0x2961a50() {
   return (neuron0x2959900()*0.00882186);
}

double NNfunction_NN_3_5::synapse0x2961a90() {
   return (neuron0x2959c40()*0.00135632);
}

double NNfunction_NN_3_5::synapse0x2961ad0() {
   return (neuron0x2959f80()*-0.00483312);
}

double NNfunction_NN_3_5::synapse0x2961b10() {
   return (neuron0x295a2c0()*-0.000296665);
}

double NNfunction_NN_3_5::synapse0x2961b50() {
   return (neuron0x295a600()*9.2454e-05);
}

double NNfunction_NN_3_5::synapse0x2961b90() {
   return (neuron0x295a940()*-0.00397883);
}

double NNfunction_NN_3_5::synapse0x2961bd0() {
   return (neuron0x295ac80()*0.00873213);
}

double NNfunction_NN_3_5::synapse0x2961c10() {
   return (neuron0x295afc0()*-0.0391151);
}

double NNfunction_NN_3_5::synapse0x2961c50() {
   return (neuron0x295b300()*-0.00946263);
}

double NNfunction_NN_3_5::synapse0x2961c90() {
   return (neuron0x295b640()*-0.00405578);
}

double NNfunction_NN_3_5::synapse0x2961cd0() {
   return (neuron0x295b980()*0.00530881);
}

double NNfunction_NN_3_5::synapse0x2961d10() {
   return (neuron0x295bcc0()*0.00154298);
}

double NNfunction_NN_3_5::synapse0x29617a0() {
   return (neuron0x295c000()*0.0194846);
}

double NNfunction_NN_3_5::synapse0x29617e0() {
   return (neuron0x295c560()*0.00197944);
}

double NNfunction_NN_3_5::synapse0x2961e60() {
   return (neuron0x295c780()*0.00121965);
}

double NNfunction_NN_3_5::synapse0x2961ea0() {
   return (neuron0x295cac0()*0.00285197);
}

double NNfunction_NN_3_5::synapse0x2961ee0() {
   return (neuron0x295ce00()*0.00600228);
}

double NNfunction_NN_3_5::synapse0x2961f20() {
   return (neuron0x295d140()*-0.00344924);
}

double NNfunction_NN_3_5::synapse0x2961f60() {
   return (neuron0x295d480()*0.000375);
}

double NNfunction_NN_3_5::synapse0x2961fa0() {
   return (neuron0x295d7c0()*1.93471);
}

double NNfunction_NN_3_5::synapse0x2962320() {
   return (neuron0x2958c00()*0.0362659);
}

double NNfunction_NN_3_5::synapse0x2962360() {
   return (neuron0x2958f40()*0.024199);
}

double NNfunction_NN_3_5::synapse0x29623a0() {
   return (neuron0x2959280()*-0.101574);
}

double NNfunction_NN_3_5::synapse0x29623e0() {
   return (neuron0x29595c0()*0.0121641);
}

double NNfunction_NN_3_5::synapse0x2962420() {
   return (neuron0x2959900()*0.189164);
}

double NNfunction_NN_3_5::synapse0x2962460() {
   return (neuron0x2959c40()*-0.00453263);
}

double NNfunction_NN_3_5::synapse0x29624a0() {
   return (neuron0x2959f80()*0.0368804);
}

double NNfunction_NN_3_5::synapse0x29624e0() {
   return (neuron0x295a2c0()*-0.0769729);
}

double NNfunction_NN_3_5::synapse0x2962520() {
   return (neuron0x295a600()*-0.00604481);
}

double NNfunction_NN_3_5::synapse0x2962560() {
   return (neuron0x295a940()*-0.0254244);
}

double NNfunction_NN_3_5::synapse0x29625a0() {
   return (neuron0x295ac80()*-0.0501185);
}

double NNfunction_NN_3_5::synapse0x29625e0() {
   return (neuron0x295afc0()*-0.0835595);
}

double NNfunction_NN_3_5::synapse0x2962620() {
   return (neuron0x295b300()*0.0100006);
}

double NNfunction_NN_3_5::synapse0x2962660() {
   return (neuron0x295b640()*0.0433788);
}

double NNfunction_NN_3_5::synapse0x29626a0() {
   return (neuron0x295b980()*-0.0350301);
}

double NNfunction_NN_3_5::synapse0x29626e0() {
   return (neuron0x295bcc0()*-0.0696297);
}

double NNfunction_NN_3_5::synapse0x2962170() {
   return (neuron0x295c000()*0.0904937);
}

double NNfunction_NN_3_5::synapse0x29621b0() {
   return (neuron0x295c560()*0.020517);
}

double NNfunction_NN_3_5::synapse0x2962830() {
   return (neuron0x295c780()*-0.0879343);
}

double NNfunction_NN_3_5::synapse0x2962870() {
   return (neuron0x295cac0()*0.00792445);
}

double NNfunction_NN_3_5::synapse0x29628b0() {
   return (neuron0x295ce00()*0.00758182);
}

double NNfunction_NN_3_5::synapse0x29628f0() {
   return (neuron0x295d140()*-0.00427979);
}

double NNfunction_NN_3_5::synapse0x2962930() {
   return (neuron0x295d480()*-0.0531254);
}

double NNfunction_NN_3_5::synapse0x2962970() {
   return (neuron0x295d7c0()*0.560357);
}

double NNfunction_NN_3_5::synapse0x295c450() {
   return (neuron0x2958c00()*-0.00478948);
}

double NNfunction_NN_3_5::synapse0x295c490() {
   return (neuron0x2958f40()*6.32162);
}

double NNfunction_NN_3_5::synapse0x295c4d0() {
   return (neuron0x2959280()*0.206251);
}

double NNfunction_NN_3_5::synapse0x295c510() {
   return (neuron0x29595c0()*0.00832539);
}

double NNfunction_NN_3_5::synapse0x2962f00() {
   return (neuron0x2959900()*-0.0221425);
}

double NNfunction_NN_3_5::synapse0x2962f40() {
   return (neuron0x2959c40()*-0.00532627);
}

double NNfunction_NN_3_5::synapse0x2962f80() {
   return (neuron0x2959f80()*-0.000861538);
}

double NNfunction_NN_3_5::synapse0x2962fc0() {
   return (neuron0x295a2c0()*0.0053177);
}

double NNfunction_NN_3_5::synapse0x2963000() {
   return (neuron0x295a600()*0.0228783);
}

double NNfunction_NN_3_5::synapse0x2963040() {
   return (neuron0x295a940()*-0.00351607);
}

double NNfunction_NN_3_5::synapse0x2963080() {
   return (neuron0x295ac80()*0.00398141);
}

double NNfunction_NN_3_5::synapse0x29630c0() {
   return (neuron0x295afc0()*-0.0364505);
}

double NNfunction_NN_3_5::synapse0x2963100() {
   return (neuron0x295b300()*-0.00399072);
}

double NNfunction_NN_3_5::synapse0x2963140() {
   return (neuron0x295b640()*0.0196563);
}

double NNfunction_NN_3_5::synapse0x2963180() {
   return (neuron0x295b980()*0.0121071);
}

double NNfunction_NN_3_5::synapse0x29631c0() {
   return (neuron0x295bcc0()*-0.0132567);
}

double NNfunction_NN_3_5::synapse0x2962b40() {
   return (neuron0x295c000()*-0.0122063);
}

double NNfunction_NN_3_5::synapse0x2962b80() {
   return (neuron0x295c560()*0.00469986);
}

double NNfunction_NN_3_5::synapse0x2963310() {
   return (neuron0x295c780()*0.0133434);
}

double NNfunction_NN_3_5::synapse0x2963350() {
   return (neuron0x295cac0()*0.00625191);
}

double NNfunction_NN_3_5::synapse0x2963390() {
   return (neuron0x295ce00()*-0.000305223);
}

double NNfunction_NN_3_5::synapse0x29633d0() {
   return (neuron0x295d140()*-0.00262593);
}

double NNfunction_NN_3_5::synapse0x2963410() {
   return (neuron0x295d480()*-0.00146676);
}

double NNfunction_NN_3_5::synapse0x2963450() {
   return (neuron0x295d7c0()*0.673675);
}

double NNfunction_NN_3_5::synapse0x29637d0() {
   return (neuron0x2958c00()*-0.0731336);
}

double NNfunction_NN_3_5::synapse0x2963810() {
   return (neuron0x2958f40()*-0.0636414);
}

double NNfunction_NN_3_5::synapse0x2963850() {
   return (neuron0x2959280()*-2.78744);
}

double NNfunction_NN_3_5::synapse0x2963890() {
   return (neuron0x29595c0()*0.0203702);
}

double NNfunction_NN_3_5::synapse0x29638d0() {
   return (neuron0x2959900()*-0.00226672);
}

double NNfunction_NN_3_5::synapse0x2963910() {
   return (neuron0x2959c40()*0.0500848);
}

double NNfunction_NN_3_5::synapse0x2963950() {
   return (neuron0x2959f80()*-0.0230511);
}

double NNfunction_NN_3_5::synapse0x2963990() {
   return (neuron0x295a2c0()*-0.0116862);
}

double NNfunction_NN_3_5::synapse0x29639d0() {
   return (neuron0x295a600()*-0.0299124);
}

double NNfunction_NN_3_5::synapse0x2963a10() {
   return (neuron0x295a940()*0.00696784);
}

double NNfunction_NN_3_5::synapse0x2963a50() {
   return (neuron0x295ac80()*0.0395148);
}

double NNfunction_NN_3_5::synapse0x2963a90() {
   return (neuron0x295afc0()*0.0657122);
}

double NNfunction_NN_3_5::synapse0x2963ad0() {
   return (neuron0x295b300()*0.0203977);
}

double NNfunction_NN_3_5::synapse0x2963b10() {
   return (neuron0x295b640()*0.0414638);
}

double NNfunction_NN_3_5::synapse0x2963b50() {
   return (neuron0x295b980()*0.00947182);
}

double NNfunction_NN_3_5::synapse0x2963b90() {
   return (neuron0x295bcc0()*0.00526585);
}

double NNfunction_NN_3_5::synapse0x2963620() {
   return (neuron0x295c000()*-0.000526562);
}

double NNfunction_NN_3_5::synapse0x2963660() {
   return (neuron0x295c560()*-0.00388099);
}

double NNfunction_NN_3_5::synapse0x2963ce0() {
   return (neuron0x295c780()*0.00293863);
}

double NNfunction_NN_3_5::synapse0x2963d20() {
   return (neuron0x295cac0()*-0.00603181);
}

double NNfunction_NN_3_5::synapse0x2963d60() {
   return (neuron0x295ce00()*0.0397623);
}

double NNfunction_NN_3_5::synapse0x2963da0() {
   return (neuron0x295d140()*0.0317462);
}

double NNfunction_NN_3_5::synapse0x2963de0() {
   return (neuron0x295d480()*0.0294533);
}

double NNfunction_NN_3_5::synapse0x2963e20() {
   return (neuron0x295d7c0()*-3.12964);
}

double NNfunction_NN_3_5::synapse0x29641a0() {
   return (neuron0x2958c00()*0.0176774);
}

double NNfunction_NN_3_5::synapse0x29641e0() {
   return (neuron0x2958f40()*-9.42381);
}

double NNfunction_NN_3_5::synapse0x2964220() {
   return (neuron0x2959280()*-1.65978);
}

double NNfunction_NN_3_5::synapse0x2964260() {
   return (neuron0x29595c0()*-0.0076192);
}

double NNfunction_NN_3_5::synapse0x29642a0() {
   return (neuron0x2959900()*-5.50458e-05);
}

double NNfunction_NN_3_5::synapse0x29642e0() {
   return (neuron0x2959c40()*0.00830682);
}

double NNfunction_NN_3_5::synapse0x2964320() {
   return (neuron0x2959f80()*0.00163381);
}

double NNfunction_NN_3_5::synapse0x2964360() {
   return (neuron0x295a2c0()*-0.00799025);
}

double NNfunction_NN_3_5::synapse0x29643a0() {
   return (neuron0x295a600()*-0.020407);
}

double NNfunction_NN_3_5::synapse0x29643e0() {
   return (neuron0x295a940()*-0.00495382);
}

double NNfunction_NN_3_5::synapse0x2964420() {
   return (neuron0x295ac80()*-0.000893999);
}

double NNfunction_NN_3_5::synapse0x2964460() {
   return (neuron0x295afc0()*0.00557667);
}

double NNfunction_NN_3_5::synapse0x29644a0() {
   return (neuron0x295b300()*-0.00794678);
}

double NNfunction_NN_3_5::synapse0x29644e0() {
   return (neuron0x295b640()*-0.0189597);
}

double NNfunction_NN_3_5::synapse0x2964520() {
   return (neuron0x295b980()*-0.00131431);
}

double NNfunction_NN_3_5::synapse0x2964560() {
   return (neuron0x295bcc0()*0.00400441);
}

double NNfunction_NN_3_5::synapse0x2963ff0() {
   return (neuron0x295c000()*0.00431124);
}

double NNfunction_NN_3_5::synapse0x2964030() {
   return (neuron0x295c560()*0.00167295);
}

double NNfunction_NN_3_5::synapse0x2960dc0() {
   return (neuron0x295c780()*-0.00931303);
}

double NNfunction_NN_3_5::synapse0x2960e00() {
   return (neuron0x295cac0()*0.00677758);
}

double NNfunction_NN_3_5::synapse0x2960e40() {
   return (neuron0x295ce00()*0.0110071);
}

double NNfunction_NN_3_5::synapse0x2960e80() {
   return (neuron0x295d140()*-0.00311837);
}

double NNfunction_NN_3_5::synapse0x2960ec0() {
   return (neuron0x295d480()*0.00715039);
}

double NNfunction_NN_3_5::synapse0x2960f00() {
   return (neuron0x295d7c0()*0.907676);
}

double NNfunction_NN_3_5::synapse0x2961280() {
   return (neuron0x2958c00()*-0.0987133);
}

double NNfunction_NN_3_5::synapse0x29612c0() {
   return (neuron0x2958f40()*-0.389595);
}

double NNfunction_NN_3_5::synapse0x2961300() {
   return (neuron0x2959280()*0.205035);
}

double NNfunction_NN_3_5::synapse0x2961340() {
   return (neuron0x29595c0()*-0.110285);
}

double NNfunction_NN_3_5::synapse0x2961380() {
   return (neuron0x2959900()*-0.0175637);
}

double NNfunction_NN_3_5::synapse0x29613c0() {
   return (neuron0x2959c40()*0.0587316);
}

double NNfunction_NN_3_5::synapse0x2961400() {
   return (neuron0x2959f80()*0.0152906);
}

double NNfunction_NN_3_5::synapse0x2961440() {
   return (neuron0x295a2c0()*-0.0145987);
}

double NNfunction_NN_3_5::synapse0x2961480() {
   return (neuron0x295a600()*-0.0472096);
}

double NNfunction_NN_3_5::synapse0x29614c0() {
   return (neuron0x295a940()*-0.0249367);
}

double NNfunction_NN_3_5::synapse0x2961500() {
   return (neuron0x295ac80()*-0.00675338);
}

double NNfunction_NN_3_5::synapse0x2961540() {
   return (neuron0x295afc0()*-0.260405);
}

double NNfunction_NN_3_5::synapse0x2961580() {
   return (neuron0x295b300()*-0.0357082);
}

double NNfunction_NN_3_5::synapse0x29656c0() {
   return (neuron0x295b640()*-0.0602684);
}

double NNfunction_NN_3_5::synapse0x2965700() {
   return (neuron0x295b980()*0.0226407);
}

double NNfunction_NN_3_5::synapse0x2965740() {
   return (neuron0x295bcc0()*-0.0167633);
}

double NNfunction_NN_3_5::synapse0x29610d0() {
   return (neuron0x295c000()*-0.0117739);
}

double NNfunction_NN_3_5::synapse0x2961110() {
   return (neuron0x295c560()*-0.0304609);
}

double NNfunction_NN_3_5::synapse0x2965890() {
   return (neuron0x295c780()*-0.0687595);
}

double NNfunction_NN_3_5::synapse0x29658d0() {
   return (neuron0x295cac0()*0.00312469);
}

double NNfunction_NN_3_5::synapse0x2965910() {
   return (neuron0x295ce00()*-0.0678013);
}

double NNfunction_NN_3_5::synapse0x2965950() {
   return (neuron0x295d140()*0.023043);
}

double NNfunction_NN_3_5::synapse0x2965990() {
   return (neuron0x295d480()*-0.0366751);
}

double NNfunction_NN_3_5::synapse0x29659d0() {
   return (neuron0x295d7c0()*0.279318);
}

double NNfunction_NN_3_5::synapse0x2965d50() {
   return (neuron0x2958c00()*-0.457539);
}

double NNfunction_NN_3_5::synapse0x2965d90() {
   return (neuron0x2958f40()*0.0257842);
}

double NNfunction_NN_3_5::synapse0x2965dd0() {
   return (neuron0x2959280()*-0.153782);
}

double NNfunction_NN_3_5::synapse0x2965e10() {
   return (neuron0x29595c0()*-0.0120896);
}

double NNfunction_NN_3_5::synapse0x2965e50() {
   return (neuron0x2959900()*-0.0175268);
}

double NNfunction_NN_3_5::synapse0x2965e90() {
   return (neuron0x2959c40()*0.0357698);
}

double NNfunction_NN_3_5::synapse0x2965ed0() {
   return (neuron0x2959f80()*-0.00825446);
}

double NNfunction_NN_3_5::synapse0x2965f10() {
   return (neuron0x295a2c0()*0.000867284);
}

double NNfunction_NN_3_5::synapse0x2965f50() {
   return (neuron0x295a600()*-0.0134705);
}

double NNfunction_NN_3_5::synapse0x2965f90() {
   return (neuron0x295a940()*-0.0136052);
}

double NNfunction_NN_3_5::synapse0x2965fd0() {
   return (neuron0x295ac80()*-0.000974904);
}

double NNfunction_NN_3_5::synapse0x2966010() {
   return (neuron0x295afc0()*0.0885185);
}

double NNfunction_NN_3_5::synapse0x2966050() {
   return (neuron0x295b300()*0.0237104);
}

double NNfunction_NN_3_5::synapse0x2966090() {
   return (neuron0x295b640()*-0.0302387);
}

double NNfunction_NN_3_5::synapse0x29660d0() {
   return (neuron0x295b980()*0.00887771);
}

double NNfunction_NN_3_5::synapse0x2966110() {
   return (neuron0x295bcc0()*0.0187151);
}

double NNfunction_NN_3_5::synapse0x2965ba0() {
   return (neuron0x295c000()*0.0420817);
}

double NNfunction_NN_3_5::synapse0x2965be0() {
   return (neuron0x295c560()*0.0260796);
}

double NNfunction_NN_3_5::synapse0x2966260() {
   return (neuron0x295c780()*-0.0243282);
}

double NNfunction_NN_3_5::synapse0x29662a0() {
   return (neuron0x295cac0()*0.00619788);
}

double NNfunction_NN_3_5::synapse0x29662e0() {
   return (neuron0x295ce00()*-0.00330104);
}

double NNfunction_NN_3_5::synapse0x2966320() {
   return (neuron0x295d140()*0.00229613);
}

double NNfunction_NN_3_5::synapse0x2966360() {
   return (neuron0x295d480()*-0.0037204);
}

double NNfunction_NN_3_5::synapse0x29663a0() {
   return (neuron0x295d7c0()*-0.187709);
}

double NNfunction_NN_3_5::synapse0x2966720() {
   return (neuron0x2958c00()*0.176793);
}

double NNfunction_NN_3_5::synapse0x2966760() {
   return (neuron0x2958f40()*0.0114931);
}

double NNfunction_NN_3_5::synapse0x29667a0() {
   return (neuron0x2959280()*-0.248551);
}

double NNfunction_NN_3_5::synapse0x29667e0() {
   return (neuron0x29595c0()*0.132787);
}

double NNfunction_NN_3_5::synapse0x2966820() {
   return (neuron0x2959900()*-0.0216251);
}

double NNfunction_NN_3_5::synapse0x2966860() {
   return (neuron0x2959c40()*0.0321093);
}

double NNfunction_NN_3_5::synapse0x29668a0() {
   return (neuron0x2959f80()*0.0138752);
}

double NNfunction_NN_3_5::synapse0x29668e0() {
   return (neuron0x295a2c0()*0.00195458);
}

double NNfunction_NN_3_5::synapse0x2966920() {
   return (neuron0x295a600()*-0.0472676);
}

double NNfunction_NN_3_5::synapse0x2966960() {
   return (neuron0x295a940()*0.0061986);
}

double NNfunction_NN_3_5::synapse0x29669a0() {
   return (neuron0x295ac80()*0.011329);
}

double NNfunction_NN_3_5::synapse0x29669e0() {
   return (neuron0x295afc0()*-0.0786876);
}

double NNfunction_NN_3_5::synapse0x2966a20() {
   return (neuron0x295b300()*-0.0104635);
}

double NNfunction_NN_3_5::synapse0x2966a60() {
   return (neuron0x295b640()*-0.0392473);
}

double NNfunction_NN_3_5::synapse0x2966aa0() {
   return (neuron0x295b980()*0.0361264);
}

double NNfunction_NN_3_5::synapse0x2966ae0() {
   return (neuron0x295bcc0()*0.0237711);
}

double NNfunction_NN_3_5::synapse0x2966570() {
   return (neuron0x295c000()*-0.00379077);
}

double NNfunction_NN_3_5::synapse0x29665b0() {
   return (neuron0x295c560()*-0.0148902);
}

double NNfunction_NN_3_5::synapse0x2966c30() {
   return (neuron0x295c780()*-0.0132855);
}

double NNfunction_NN_3_5::synapse0x2966c70() {
   return (neuron0x295cac0()*0.00722385);
}

double NNfunction_NN_3_5::synapse0x2966cb0() {
   return (neuron0x295ce00()*-0.0205089);
}

double NNfunction_NN_3_5::synapse0x2966cf0() {
   return (neuron0x295d140()*-0.00896974);
}

double NNfunction_NN_3_5::synapse0x2966d30() {
   return (neuron0x295d480()*-0.00353953);
}

double NNfunction_NN_3_5::synapse0x2966d70() {
   return (neuron0x295d7c0()*0.527276);
}

double NNfunction_NN_3_5::synapse0x29670f0() {
   return (neuron0x2958c00()*0.00484577);
}

double NNfunction_NN_3_5::synapse0x2967130() {
   return (neuron0x2958f40()*0.0662588);
}

double NNfunction_NN_3_5::synapse0x2967170() {
   return (neuron0x2959280()*0.627154);
}

double NNfunction_NN_3_5::synapse0x29671b0() {
   return (neuron0x29595c0()*-0.0133529);
}

double NNfunction_NN_3_5::synapse0x29671f0() {
   return (neuron0x2959900()*0.0142531);
}

double NNfunction_NN_3_5::synapse0x2967230() {
   return (neuron0x2959c40()*-0.0144378);
}

double NNfunction_NN_3_5::synapse0x2967270() {
   return (neuron0x2959f80()*-0.0261524);
}

double NNfunction_NN_3_5::synapse0x29672b0() {
   return (neuron0x295a2c0()*-0.00664203);
}

double NNfunction_NN_3_5::synapse0x29672f0() {
   return (neuron0x295a600()*0.00269308);
}

double NNfunction_NN_3_5::synapse0x2967330() {
   return (neuron0x295a940()*-0.0037124);
}

double NNfunction_NN_3_5::synapse0x2967370() {
   return (neuron0x295ac80()*-0.0191361);
}

double NNfunction_NN_3_5::synapse0x29673b0() {
   return (neuron0x295afc0()*-3.73999);
}

double NNfunction_NN_3_5::synapse0x29673f0() {
   return (neuron0x295b300()*0.0525354);
}

double NNfunction_NN_3_5::synapse0x2967430() {
   return (neuron0x295b640()*-0.0340162);
}

double NNfunction_NN_3_5::synapse0x2967470() {
   return (neuron0x295b980()*-0.00638114);
}

double NNfunction_NN_3_5::synapse0x29674b0() {
   return (neuron0x295bcc0()*0.010891);
}

double NNfunction_NN_3_5::synapse0x2966f40() {
   return (neuron0x295c000()*-0.0699842);
}

double NNfunction_NN_3_5::synapse0x2966f80() {
   return (neuron0x295c560()*0.00675924);
}

double NNfunction_NN_3_5::synapse0x2967600() {
   return (neuron0x295c780()*0.014775);
}

double NNfunction_NN_3_5::synapse0x2967640() {
   return (neuron0x295cac0()*-0.0066353);
}

double NNfunction_NN_3_5::synapse0x2967680() {
   return (neuron0x295ce00()*-0.000160913);
}

double NNfunction_NN_3_5::synapse0x29676c0() {
   return (neuron0x295d140()*0.00298486);
}

double NNfunction_NN_3_5::synapse0x2967700() {
   return (neuron0x295d480()*0.0308931);
}

double NNfunction_NN_3_5::synapse0x2967740() {
   return (neuron0x295d7c0()*-1.03053);
}

double NNfunction_NN_3_5::synapse0x2967ac0() {
   return (neuron0x2958c00()*-0.0388632);
}

double NNfunction_NN_3_5::synapse0x2958e20() {
   return (neuron0x2958f40()*-0.0354327);
}

double NNfunction_NN_3_5::synapse0x2958e60() {
   return (neuron0x2959280()*0.508119);
}

double NNfunction_NN_3_5::synapse0x2959160() {
   return (neuron0x29595c0()*-0.30422);
}

double NNfunction_NN_3_5::synapse0x29591a0() {
   return (neuron0x2959900()*0.0167095);
}

double NNfunction_NN_3_5::synapse0x29594a0() {
   return (neuron0x2959c40()*0.0217446);
}

double NNfunction_NN_3_5::synapse0x29594e0() {
   return (neuron0x2959f80()*0.0152967);
}

double NNfunction_NN_3_5::synapse0x29597e0() {
   return (neuron0x295a2c0()*0.00712342);
}

double NNfunction_NN_3_5::synapse0x2959820() {
   return (neuron0x295a600()*-0.0158364);
}

double NNfunction_NN_3_5::synapse0x2959b20() {
   return (neuron0x295a940()*-0.00599391);
}

double NNfunction_NN_3_5::synapse0x2959b60() {
   return (neuron0x295ac80()*0.000913061);
}

double NNfunction_NN_3_5::synapse0x2959e60() {
   return (neuron0x295afc0()*0.103462);
}

double NNfunction_NN_3_5::synapse0x2959ea0() {
   return (neuron0x295b300()*0.0590617);
}

double NNfunction_NN_3_5::synapse0x295a1a0() {
   return (neuron0x295b640()*0.0154611);
}

double NNfunction_NN_3_5::synapse0x295a1e0() {
   return (neuron0x295b980()*-0.00850207);
}

double NNfunction_NN_3_5::synapse0x295a4e0() {
   return (neuron0x295bcc0()*-0.0207735);
}

double NNfunction_NN_3_5::synapse0x295a520() {
   return (neuron0x295c000()*0.00645327);
}

double NNfunction_NN_3_5::synapse0x295a820() {
   return (neuron0x295c560()*-0.0198992);
}

double NNfunction_NN_3_5::synapse0x295a860() {
   return (neuron0x295c780()*-0.0359304);
}

double NNfunction_NN_3_5::synapse0x295ab60() {
   return (neuron0x295cac0()*-0.0119082);
}

double NNfunction_NN_3_5::synapse0x295aba0() {
   return (neuron0x295ce00()*0.0148913);
}

double NNfunction_NN_3_5::synapse0x295aea0() {
   return (neuron0x295d140()*0.00115357);
}

double NNfunction_NN_3_5::synapse0x295aee0() {
   return (neuron0x295d480()*-0.0113756);
}

double NNfunction_NN_3_5::synapse0x295b1e0() {
   return (neuron0x295d7c0()*0.725995);
}

double NNfunction_NN_3_5::synapse0x295b220() {
   return (neuron0x2958c00()*-0.19797);
}

double NNfunction_NN_3_5::synapse0x295bee0() {
   return (neuron0x2958f40()*0.145755);
}

double NNfunction_NN_3_5::synapse0x295bf20() {
   return (neuron0x2959280()*-0.0652622);
}

double NNfunction_NN_3_5::synapse0x2967910() {
   return (neuron0x29595c0()*0.013711);
}

double NNfunction_NN_3_5::synapse0x2967950() {
   return (neuron0x2959900()*0.0631556);
}

double NNfunction_NN_3_5::synapse0x295c220() {
   return (neuron0x2959c40()*-0.0275236);
}

double NNfunction_NN_3_5::synapse0x295c260() {
   return (neuron0x2959f80()*-0.0269558);
}

double NNfunction_NN_3_5::synapse0x270a1b0() {
   return (neuron0x295a2c0()*0.234499);
}

double NNfunction_NN_3_5::synapse0x270a1f0() {
   return (neuron0x295a600()*0.0119951);
}

double NNfunction_NN_3_5::synapse0x295c9a0() {
   return (neuron0x295a940()*-0.0761044);
}

double NNfunction_NN_3_5::synapse0x295c9e0() {
   return (neuron0x295ac80()*-0.0408366);
}

double NNfunction_NN_3_5::synapse0x295cce0() {
   return (neuron0x295afc0()*0.0685259);
}

double NNfunction_NN_3_5::synapse0x295cd20() {
   return (neuron0x295b300()*-0.142433);
}

double NNfunction_NN_3_5::synapse0x295d020() {
   return (neuron0x295b640()*-0.0599587);
}

double NNfunction_NN_3_5::synapse0x295d060() {
   return (neuron0x295b980()*0.0970502);
}

double NNfunction_NN_3_5::synapse0x295d360() {
   return (neuron0x295bcc0()*-0.110494);
}

double NNfunction_NN_3_5::synapse0x295d3a0() {
   return (neuron0x295c000()*-0.0310363);
}

double NNfunction_NN_3_5::synapse0x295d6a0() {
   return (neuron0x295c560()*-0.0361345);
}

double NNfunction_NN_3_5::synapse0x295d6e0() {
   return (neuron0x295c780()*0.0558734);
}

double NNfunction_NN_3_5::synapse0x295d9e0() {
   return (neuron0x295cac0()*-0.154886);
}

double NNfunction_NN_3_5::synapse0x295da20() {
   return (neuron0x295ce00()*-0.099559);
}

double NNfunction_NN_3_5::synapse0x295b520() {
   return (neuron0x295d140()*0.00563137);
}

double NNfunction_NN_3_5::synapse0x295b560() {
   return (neuron0x295d480()*0.0339682);
}

double NNfunction_NN_3_5::synapse0x2969830() {
   return (neuron0x295d7c0()*0.484224);
}

double NNfunction_NN_3_5::synapse0x2969bb0() {
   return (neuron0x2958c00()*0.0230997);
}

double NNfunction_NN_3_5::synapse0x2969bf0() {
   return (neuron0x2958f40()*0.424944);
}

double NNfunction_NN_3_5::synapse0x2969c30() {
   return (neuron0x2959280()*0.0774253);
}

double NNfunction_NN_3_5::synapse0x2969c70() {
   return (neuron0x29595c0()*0.0249691);
}

double NNfunction_NN_3_5::synapse0x2969cb0() {
   return (neuron0x2959900()*-0.003389);
}

double NNfunction_NN_3_5::synapse0x2969cf0() {
   return (neuron0x2959c40()*-0.132294);
}

double NNfunction_NN_3_5::synapse0x2969d30() {
   return (neuron0x2959f80()*0.0223106);
}

double NNfunction_NN_3_5::synapse0x2969d70() {
   return (neuron0x295a2c0()*-0.0487765);
}

double NNfunction_NN_3_5::synapse0x2969db0() {
   return (neuron0x295a600()*0.0521356);
}

double NNfunction_NN_3_5::synapse0x2969df0() {
   return (neuron0x295a940()*0.0257678);
}

double NNfunction_NN_3_5::synapse0x2969e30() {
   return (neuron0x295ac80()*-0.025401);
}

double NNfunction_NN_3_5::synapse0x2969e70() {
   return (neuron0x295afc0()*0.145251);
}

double NNfunction_NN_3_5::synapse0x2969eb0() {
   return (neuron0x295b300()*-0.0569811);
}

double NNfunction_NN_3_5::synapse0x2969ef0() {
   return (neuron0x295b640()*-0.00221246);
}

double NNfunction_NN_3_5::synapse0x2969f30() {
   return (neuron0x295b980()*-0.0223631);
}

double NNfunction_NN_3_5::synapse0x2969f70() {
   return (neuron0x295bcc0()*-0.0295339);
}

double NNfunction_NN_3_5::synapse0x2969a00() {
   return (neuron0x295c000()*-0.0125132);
}

double NNfunction_NN_3_5::synapse0x2969a40() {
   return (neuron0x295c560()*0.0282653);
}

double NNfunction_NN_3_5::synapse0x296a0c0() {
   return (neuron0x295c780()*0.0758103);
}

double NNfunction_NN_3_5::synapse0x296a100() {
   return (neuron0x295cac0()*0.0696598);
}

double NNfunction_NN_3_5::synapse0x296a140() {
   return (neuron0x295ce00()*0.0285459);
}

double NNfunction_NN_3_5::synapse0x296a180() {
   return (neuron0x295d140()*-0.0147538);
}

double NNfunction_NN_3_5::synapse0x296a1c0() {
   return (neuron0x295d480()*-0.00836996);
}

double NNfunction_NN_3_5::synapse0x296a200() {
   return (neuron0x295d7c0()*-0.843299);
}

double NNfunction_NN_3_5::synapse0x296a580() {
   return (neuron0x2958c00()*0.008459);
}

double NNfunction_NN_3_5::synapse0x296a5c0() {
   return (neuron0x2958f40()*-0.08344);
}

double NNfunction_NN_3_5::synapse0x296a600() {
   return (neuron0x2959280()*0.668551);
}

double NNfunction_NN_3_5::synapse0x296a640() {
   return (neuron0x29595c0()*0.308702);
}

double NNfunction_NN_3_5::synapse0x296a680() {
   return (neuron0x2959900()*0.0305682);
}

double NNfunction_NN_3_5::synapse0x296a6c0() {
   return (neuron0x2959c40()*0.0624133);
}

double NNfunction_NN_3_5::synapse0x296a700() {
   return (neuron0x2959f80()*-0.0179807);
}

double NNfunction_NN_3_5::synapse0x296a740() {
   return (neuron0x295a2c0()*-0.0565636);
}

double NNfunction_NN_3_5::synapse0x296a780() {
   return (neuron0x295a600()*0.0769543);
}

double NNfunction_NN_3_5::synapse0x296a7c0() {
   return (neuron0x295a940()*0.0293999);
}

double NNfunction_NN_3_5::synapse0x296a800() {
   return (neuron0x295ac80()*-0.0612029);
}

double NNfunction_NN_3_5::synapse0x296a840() {
   return (neuron0x295afc0()*-0.0793691);
}

double NNfunction_NN_3_5::synapse0x296a880() {
   return (neuron0x295b300()*0.00856824);
}

double NNfunction_NN_3_5::synapse0x296a8c0() {
   return (neuron0x295b640()*0.0343645);
}

double NNfunction_NN_3_5::synapse0x296a900() {
   return (neuron0x295b980()*-0.0554923);
}

double NNfunction_NN_3_5::synapse0x296a940() {
   return (neuron0x295bcc0()*-0.0855961);
}

double NNfunction_NN_3_5::synapse0x296a3d0() {
   return (neuron0x295c000()*0.0555009);
}

double NNfunction_NN_3_5::synapse0x296a410() {
   return (neuron0x295c560()*-0.0121926);
}

double NNfunction_NN_3_5::synapse0x296aa90() {
   return (neuron0x295c780()*-0.0686352);
}

double NNfunction_NN_3_5::synapse0x296aad0() {
   return (neuron0x295cac0()*0.000814469);
}

double NNfunction_NN_3_5::synapse0x296ab10() {
   return (neuron0x295ce00()*0.150437);
}

double NNfunction_NN_3_5::synapse0x296ab50() {
   return (neuron0x295d140()*0.149598);
}

double NNfunction_NN_3_5::synapse0x296ab90() {
   return (neuron0x295d480()*0.0785427);
}

double NNfunction_NN_3_5::synapse0x296abd0() {
   return (neuron0x295d7c0()*0.381805);
}

double NNfunction_NN_3_5::synapse0x296af50() {
   return (neuron0x2958c00()*0.0652299);
}

double NNfunction_NN_3_5::synapse0x296af90() {
   return (neuron0x2958f40()*-0.024588);
}

double NNfunction_NN_3_5::synapse0x296afd0() {
   return (neuron0x2959280()*0.439122);
}

double NNfunction_NN_3_5::synapse0x296b010() {
   return (neuron0x29595c0()*0.00626447);
}

double NNfunction_NN_3_5::synapse0x296b050() {
   return (neuron0x2959900()*-0.0280927);
}

double NNfunction_NN_3_5::synapse0x296b090() {
   return (neuron0x2959c40()*-0.00591903);
}

double NNfunction_NN_3_5::synapse0x296b0d0() {
   return (neuron0x2959f80()*-0.0202435);
}

double NNfunction_NN_3_5::synapse0x296b110() {
   return (neuron0x295a2c0()*-0.00202097);
}

double NNfunction_NN_3_5::synapse0x296b150() {
   return (neuron0x295a600()*0.00997402);
}

double NNfunction_NN_3_5::synapse0x296b190() {
   return (neuron0x295a940()*0.0241261);
}

double NNfunction_NN_3_5::synapse0x296b1d0() {
   return (neuron0x295ac80()*-0.0148551);
}

double NNfunction_NN_3_5::synapse0x296b210() {
   return (neuron0x295afc0()*0.459906);
}

double NNfunction_NN_3_5::synapse0x296b250() {
   return (neuron0x295b300()*0.0299482);
}

double NNfunction_NN_3_5::synapse0x296b290() {
   return (neuron0x295b640()*-0.0131087);
}

double NNfunction_NN_3_5::synapse0x296b2d0() {
   return (neuron0x295b980()*0.0105141);
}

double NNfunction_NN_3_5::synapse0x296b310() {
   return (neuron0x295bcc0()*0.0113517);
}

double NNfunction_NN_3_5::synapse0x296ada0() {
   return (neuron0x295c000()*0.00288281);
}

double NNfunction_NN_3_5::synapse0x296ade0() {
   return (neuron0x295c560()*0.0118715);
}

double NNfunction_NN_3_5::synapse0x296b460() {
   return (neuron0x295c780()*0.000972427);
}

double NNfunction_NN_3_5::synapse0x296b4a0() {
   return (neuron0x295cac0()*0.0253128);
}

double NNfunction_NN_3_5::synapse0x296b4e0() {
   return (neuron0x295ce00()*0.0154531);
}

double NNfunction_NN_3_5::synapse0x296b520() {
   return (neuron0x295d140()*-0.0116639);
}

double NNfunction_NN_3_5::synapse0x296b560() {
   return (neuron0x295d480()*-0.0224971);
}

double NNfunction_NN_3_5::synapse0x296b5a0() {
   return (neuron0x295d7c0()*-0.77215);
}

double NNfunction_NN_3_5::synapse0x296b920() {
   return (neuron0x2958c00()*0.169928);
}

double NNfunction_NN_3_5::synapse0x296b960() {
   return (neuron0x2958f40()*-1.04794);
}

double NNfunction_NN_3_5::synapse0x296b9a0() {
   return (neuron0x2959280()*1.0843);
}

double NNfunction_NN_3_5::synapse0x296b9e0() {
   return (neuron0x29595c0()*-0.0571766);
}

double NNfunction_NN_3_5::synapse0x296ba20() {
   return (neuron0x2959900()*-0.069214);
}

double NNfunction_NN_3_5::synapse0x296ba60() {
   return (neuron0x2959c40()*0.14803);
}

double NNfunction_NN_3_5::synapse0x296baa0() {
   return (neuron0x2959f80()*-0.0602049);
}

double NNfunction_NN_3_5::synapse0x296bae0() {
   return (neuron0x295a2c0()*-0.122039);
}

double NNfunction_NN_3_5::synapse0x296bb20() {
   return (neuron0x295a600()*0.0129984);
}

double NNfunction_NN_3_5::synapse0x296bb60() {
   return (neuron0x295a940()*0.0651209);
}

double NNfunction_NN_3_5::synapse0x296bba0() {
   return (neuron0x295ac80()*0.0527396);
}

double NNfunction_NN_3_5::synapse0x296bbe0() {
   return (neuron0x295afc0()*-0.535261);
}

double NNfunction_NN_3_5::synapse0x296bc20() {
   return (neuron0x295b300()*0.187557);
}

double NNfunction_NN_3_5::synapse0x296bc60() {
   return (neuron0x295b640()*0.07836);
}

double NNfunction_NN_3_5::synapse0x296bca0() {
   return (neuron0x295b980()*-0.118998);
}

double NNfunction_NN_3_5::synapse0x296bce0() {
   return (neuron0x295bcc0()*0.0217888);
}

double NNfunction_NN_3_5::synapse0x296b770() {
   return (neuron0x295c000()*-0.0836984);
}

double NNfunction_NN_3_5::synapse0x296b7b0() {
   return (neuron0x295c560()*0.0157074);
}

double NNfunction_NN_3_5::synapse0x296be30() {
   return (neuron0x295c780()*0.0568563);
}

double NNfunction_NN_3_5::synapse0x296be70() {
   return (neuron0x295cac0()*0.0346939);
}

double NNfunction_NN_3_5::synapse0x296beb0() {
   return (neuron0x295ce00()*-0.00432281);
}

double NNfunction_NN_3_5::synapse0x296bef0() {
   return (neuron0x295d140()*0.0217745);
}

double NNfunction_NN_3_5::synapse0x296bf30() {
   return (neuron0x295d480()*0.152195);
}

double NNfunction_NN_3_5::synapse0x296bf70() {
   return (neuron0x295d7c0()*-1.41523);
}

double NNfunction_NN_3_5::synapse0x296c2f0() {
   return (neuron0x2958c00()*0.0348739);
}

double NNfunction_NN_3_5::synapse0x296c330() {
   return (neuron0x2958f40()*-9.67753);
}

double NNfunction_NN_3_5::synapse0x296c370() {
   return (neuron0x2959280()*1.70624);
}

double NNfunction_NN_3_5::synapse0x296c3b0() {
   return (neuron0x29595c0()*-0.0156798);
}

double NNfunction_NN_3_5::synapse0x296c3f0() {
   return (neuron0x2959900()*0.0170234);
}

double NNfunction_NN_3_5::synapse0x296c430() {
   return (neuron0x2959c40()*-0.0128602);
}

double NNfunction_NN_3_5::synapse0x296c470() {
   return (neuron0x2959f80()*-0.00178989);
}

double NNfunction_NN_3_5::synapse0x296c4b0() {
   return (neuron0x295a2c0()*0.00032314);
}

double NNfunction_NN_3_5::synapse0x296c4f0() {
   return (neuron0x295a600()*-0.0104998);
}

double NNfunction_NN_3_5::synapse0x29646b0() {
   return (neuron0x295a940()*0.00816818);
}

double NNfunction_NN_3_5::synapse0x29646f0() {
   return (neuron0x295ac80()*-0.00903074);
}

double NNfunction_NN_3_5::synapse0x2964730() {
   return (neuron0x295afc0()*0.0180438);
}

double NNfunction_NN_3_5::synapse0x2964770() {
   return (neuron0x295b300()*0.00736619);
}

double NNfunction_NN_3_5::synapse0x29647b0() {
   return (neuron0x295b640()*-0.013771);
}

double NNfunction_NN_3_5::synapse0x29647f0() {
   return (neuron0x295b980()*-0.00928899);
}

double NNfunction_NN_3_5::synapse0x2964830() {
   return (neuron0x295bcc0()*-0.00378596);
}

double NNfunction_NN_3_5::synapse0x296c140() {
   return (neuron0x295c000()*-0.00457107);
}

double NNfunction_NN_3_5::synapse0x296c180() {
   return (neuron0x295c560()*-0.00287741);
}

double NNfunction_NN_3_5::synapse0x2964980() {
   return (neuron0x295c780()*0.011444);
}

double NNfunction_NN_3_5::synapse0x29649c0() {
   return (neuron0x295cac0()*0.00256395);
}

double NNfunction_NN_3_5::synapse0x2964a00() {
   return (neuron0x295ce00()*0.00548587);
}

double NNfunction_NN_3_5::synapse0x2964a40() {
   return (neuron0x295d140()*-0.000484875);
}

double NNfunction_NN_3_5::synapse0x2964a80() {
   return (neuron0x295d480()*0.0108146);
}

double NNfunction_NN_3_5::synapse0x2964ac0() {
   return (neuron0x295d7c0()*-1.48111);
}

double NNfunction_NN_3_5::synapse0x2964e40() {
   return (neuron0x2958c00()*0.0448882);
}

double NNfunction_NN_3_5::synapse0x2964e80() {
   return (neuron0x2958f40()*4.61648);
}

double NNfunction_NN_3_5::synapse0x2964ec0() {
   return (neuron0x2959280()*0.151067);
}

double NNfunction_NN_3_5::synapse0x2964f00() {
   return (neuron0x29595c0()*0.0203554);
}

double NNfunction_NN_3_5::synapse0x2964f40() {
   return (neuron0x2959900()*-0.0100673);
}

double NNfunction_NN_3_5::synapse0x2964f80() {
   return (neuron0x2959c40()*-0.00467646);
}

double NNfunction_NN_3_5::synapse0x2964fc0() {
   return (neuron0x2959f80()*-0.0194118);
}

double NNfunction_NN_3_5::synapse0x2965000() {
   return (neuron0x295a2c0()*0.0111804);
}

double NNfunction_NN_3_5::synapse0x2965040() {
   return (neuron0x295a600()*0.0303601);
}

double NNfunction_NN_3_5::synapse0x2965080() {
   return (neuron0x295a940()*0.0169032);
}

double NNfunction_NN_3_5::synapse0x29650c0() {
   return (neuron0x295ac80()*0.00996151);
}

double NNfunction_NN_3_5::synapse0x2965100() {
   return (neuron0x295afc0()*0.196044);
}

double NNfunction_NN_3_5::synapse0x2965140() {
   return (neuron0x295b300()*0.0149872);
}

double NNfunction_NN_3_5::synapse0x2965180() {
   return (neuron0x295b640()*0.0140498);
}

double NNfunction_NN_3_5::synapse0x29651c0() {
   return (neuron0x295b980()*0.0241358);
}

double NNfunction_NN_3_5::synapse0x2965200() {
   return (neuron0x295bcc0()*0.0127867);
}

double NNfunction_NN_3_5::synapse0x2964c90() {
   return (neuron0x295c000()*0.0109693);
}

double NNfunction_NN_3_5::synapse0x2964cd0() {
   return (neuron0x295c560()*0.0132172);
}

double NNfunction_NN_3_5::synapse0x2965350() {
   return (neuron0x295c780()*0.00879389);
}

double NNfunction_NN_3_5::synapse0x2965390() {
   return (neuron0x295cac0()*0.00197961);
}

double NNfunction_NN_3_5::synapse0x29653d0() {
   return (neuron0x295ce00()*-0.0127698);
}

double NNfunction_NN_3_5::synapse0x2965410() {
   return (neuron0x295d140()*-0.0148891);
}

double NNfunction_NN_3_5::synapse0x2965450() {
   return (neuron0x295d480()*0.00679943);
}

double NNfunction_NN_3_5::synapse0x2965490() {
   return (neuron0x295d7c0()*-0.518154);
}

double NNfunction_NN_3_5::synapse0x2965660() {
   return (neuron0x2958c00()*0.125499);
}

double NNfunction_NN_3_5::synapse0x296e6f0() {
   return (neuron0x2958f40()*0.183303);
}

double NNfunction_NN_3_5::synapse0x296e730() {
   return (neuron0x2959280()*0.0244333);
}

double NNfunction_NN_3_5::synapse0x296e770() {
   return (neuron0x29595c0()*0.520678);
}

double NNfunction_NN_3_5::synapse0x296e7b0() {
   return (neuron0x2959900()*0.0368048);
}

double NNfunction_NN_3_5::synapse0x296e7f0() {
   return (neuron0x2959c40()*-0.00507311);
}

double NNfunction_NN_3_5::synapse0x296e830() {
   return (neuron0x2959f80()*0.0525473);
}

double NNfunction_NN_3_5::synapse0x296e870() {
   return (neuron0x295a2c0()*0.0667378);
}

double NNfunction_NN_3_5::synapse0x296e8b0() {
   return (neuron0x295a600()*0.0452155);
}

double NNfunction_NN_3_5::synapse0x296e8f0() {
   return (neuron0x295a940()*0.0139058);
}

double NNfunction_NN_3_5::synapse0x296e930() {
   return (neuron0x295ac80()*-0.0412737);
}

double NNfunction_NN_3_5::synapse0x296e970() {
   return (neuron0x295afc0()*0.840654);
}

double NNfunction_NN_3_5::synapse0x296e9b0() {
   return (neuron0x295b300()*0.148751);
}

double NNfunction_NN_3_5::synapse0x296e9f0() {
   return (neuron0x295b640()*0.102567);
}

double NNfunction_NN_3_5::synapse0x296ea30() {
   return (neuron0x295b980()*-0.0578149);
}

double NNfunction_NN_3_5::synapse0x296ea70() {
   return (neuron0x295bcc0()*-0.0260514);
}

double NNfunction_NN_3_5::synapse0x296e540() {
   return (neuron0x295c000()*0.0258918);
}

double NNfunction_NN_3_5::synapse0x296e580() {
   return (neuron0x295c560()*-0.0217657);
}

double NNfunction_NN_3_5::synapse0x296ebc0() {
   return (neuron0x295c780()*-0.0216729);
}

double NNfunction_NN_3_5::synapse0x296ec00() {
   return (neuron0x295cac0()*0.0323058);
}

double NNfunction_NN_3_5::synapse0x296ec40() {
   return (neuron0x295ce00()*0.0451626);
}

double NNfunction_NN_3_5::synapse0x296ec80() {
   return (neuron0x295d140()*-0.041238);
}

double NNfunction_NN_3_5::synapse0x296ecc0() {
   return (neuron0x295d480()*-0.0341333);
}

double NNfunction_NN_3_5::synapse0x296ed00() {
   return (neuron0x295d7c0()*-0.0425344);
}

double NNfunction_NN_3_5::synapse0x296f080() {
   return (neuron0x2958c00()*-0.00623948);
}

double NNfunction_NN_3_5::synapse0x296f0c0() {
   return (neuron0x2958f40()*-0.0150711);
}

double NNfunction_NN_3_5::synapse0x296f100() {
   return (neuron0x2959280()*-0.119177);
}

double NNfunction_NN_3_5::synapse0x296f140() {
   return (neuron0x29595c0()*-0.0139351);
}

double NNfunction_NN_3_5::synapse0x296f180() {
   return (neuron0x2959900()*0.00771461);
}

double NNfunction_NN_3_5::synapse0x296f1c0() {
   return (neuron0x2959c40()*-0.0308334);
}

double NNfunction_NN_3_5::synapse0x296f200() {
   return (neuron0x2959f80()*-0.0112431);
}

double NNfunction_NN_3_5::synapse0x296f240() {
   return (neuron0x295a2c0()*-0.0207747);
}

double NNfunction_NN_3_5::synapse0x296f280() {
   return (neuron0x295a600()*0.0123425);
}

double NNfunction_NN_3_5::synapse0x296f2c0() {
   return (neuron0x295a940()*0.0107992);
}

double NNfunction_NN_3_5::synapse0x296f300() {
   return (neuron0x295ac80()*0.00272037);
}

double NNfunction_NN_3_5::synapse0x296f340() {
   return (neuron0x295afc0()*-4.22784);
}

double NNfunction_NN_3_5::synapse0x296f380() {
   return (neuron0x295b300()*-0.0233585);
}

double NNfunction_NN_3_5::synapse0x296f3c0() {
   return (neuron0x295b640()*-0.0226365);
}

double NNfunction_NN_3_5::synapse0x296f400() {
   return (neuron0x295b980()*-0.0097266);
}

double NNfunction_NN_3_5::synapse0x296f440() {
   return (neuron0x295bcc0()*0.0102743);
}

double NNfunction_NN_3_5::synapse0x296eed0() {
   return (neuron0x295c000()*-0.0212923);
}

double NNfunction_NN_3_5::synapse0x296ef10() {
   return (neuron0x295c560()*-0.00908436);
}

double NNfunction_NN_3_5::synapse0x296f590() {
   return (neuron0x295c780()*-0.0143088);
}

double NNfunction_NN_3_5::synapse0x296f5d0() {
   return (neuron0x295cac0()*0.0214749);
}

double NNfunction_NN_3_5::synapse0x296f610() {
   return (neuron0x295ce00()*0.0260967);
}

double NNfunction_NN_3_5::synapse0x296f650() {
   return (neuron0x295d140()*-0.0224622);
}

double NNfunction_NN_3_5::synapse0x296f690() {
   return (neuron0x295d480()*0.00405923);
}

double NNfunction_NN_3_5::synapse0x296f6d0() {
   return (neuron0x295d7c0()*-0.377449);
}

double NNfunction_NN_3_5::synapse0x296fa50() {
   return (neuron0x2958c00()*-0.0264506);
}

double NNfunction_NN_3_5::synapse0x296fa90() {
   return (neuron0x2958f40()*-0.156442);
}

double NNfunction_NN_3_5::synapse0x296fad0() {
   return (neuron0x2959280()*-0.801178);
}

double NNfunction_NN_3_5::synapse0x296fb10() {
   return (neuron0x29595c0()*0.0561824);
}

double NNfunction_NN_3_5::synapse0x296fb50() {
   return (neuron0x2959900()*-0.019698);
}

double NNfunction_NN_3_5::synapse0x296fb90() {
   return (neuron0x2959c40()*0.00123963);
}

double NNfunction_NN_3_5::synapse0x296fbd0() {
   return (neuron0x2959f80()*-0.0164631);
}

double NNfunction_NN_3_5::synapse0x296fc10() {
   return (neuron0x295a2c0()*0.015942);
}

double NNfunction_NN_3_5::synapse0x296fc50() {
   return (neuron0x295a600()*0.0290747);
}

double NNfunction_NN_3_5::synapse0x296fc90() {
   return (neuron0x295a940()*0.00331473);
}

double NNfunction_NN_3_5::synapse0x296fcd0() {
   return (neuron0x295ac80()*0.013345);
}

double NNfunction_NN_3_5::synapse0x296fd10() {
   return (neuron0x295afc0()*-0.113087);
}

double NNfunction_NN_3_5::synapse0x296fd50() {
   return (neuron0x295b300()*0.00828632);
}

double NNfunction_NN_3_5::synapse0x296fd90() {
   return (neuron0x295b640()*0.0480406);
}

double NNfunction_NN_3_5::synapse0x296fdd0() {
   return (neuron0x295b980()*-0.0204431);
}

double NNfunction_NN_3_5::synapse0x296fe10() {
   return (neuron0x295bcc0()*0.00943982);
}

double NNfunction_NN_3_5::synapse0x296f8a0() {
   return (neuron0x295c000()*-0.0274129);
}

double NNfunction_NN_3_5::synapse0x296f8e0() {
   return (neuron0x295c560()*-0.0185373);
}

double NNfunction_NN_3_5::synapse0x296ff60() {
   return (neuron0x295c780()*-0.000717683);
}

double NNfunction_NN_3_5::synapse0x296ffa0() {
   return (neuron0x295cac0()*0.00321101);
}

double NNfunction_NN_3_5::synapse0x296ffe0() {
   return (neuron0x295ce00()*0.00173137);
}

double NNfunction_NN_3_5::synapse0x2970020() {
   return (neuron0x295d140()*-0.0111423);
}

double NNfunction_NN_3_5::synapse0x2970060() {
   return (neuron0x295d480()*0.00204459);
}

double NNfunction_NN_3_5::synapse0x29700a0() {
   return (neuron0x295d7c0()*0.686302);
}

double NNfunction_NN_3_5::synapse0x2970420() {
   return (neuron0x2958c00()*-0.27072);
}

double NNfunction_NN_3_5::synapse0x2970460() {
   return (neuron0x2958f40()*-0.420216);
}

double NNfunction_NN_3_5::synapse0x29704a0() {
   return (neuron0x2959280()*1.19869);
}

double NNfunction_NN_3_5::synapse0x29704e0() {
   return (neuron0x29595c0()*-0.136963);
}

double NNfunction_NN_3_5::synapse0x2970520() {
   return (neuron0x2959900()*0.0854563);
}

double NNfunction_NN_3_5::synapse0x2970560() {
   return (neuron0x2959c40()*-0.119595);
}

double NNfunction_NN_3_5::synapse0x29705a0() {
   return (neuron0x2959f80()*-0.198993);
}

double NNfunction_NN_3_5::synapse0x29705e0() {
   return (neuron0x295a2c0()*-0.291554);
}

double NNfunction_NN_3_5::synapse0x2970620() {
   return (neuron0x295a600()*-0.060837);
}

double NNfunction_NN_3_5::synapse0x2970660() {
   return (neuron0x295a940()*-0.0361755);
}

double NNfunction_NN_3_5::synapse0x29706a0() {
   return (neuron0x295ac80()*-0.0244934);
}

double NNfunction_NN_3_5::synapse0x29706e0() {
   return (neuron0x295afc0()*-1.38054);
}

double NNfunction_NN_3_5::synapse0x2970720() {
   return (neuron0x295b300()*-0.00822105);
}

double NNfunction_NN_3_5::synapse0x2970760() {
   return (neuron0x295b640()*-0.0892358);
}

double NNfunction_NN_3_5::synapse0x29707a0() {
   return (neuron0x295b980()*-0.0155132);
}

double NNfunction_NN_3_5::synapse0x29707e0() {
   return (neuron0x295bcc0()*0.0988812);
}

double NNfunction_NN_3_5::synapse0x2970270() {
   return (neuron0x295c000()*-0.0850242);
}

double NNfunction_NN_3_5::synapse0x29702b0() {
   return (neuron0x295c560()*0.180874);
}

double NNfunction_NN_3_5::synapse0x2970930() {
   return (neuron0x295c780()*0.0512355);
}

double NNfunction_NN_3_5::synapse0x2970970() {
   return (neuron0x295cac0()*0.0421997);
}

double NNfunction_NN_3_5::synapse0x29709b0() {
   return (neuron0x295ce00()*-0.0962551);
}

double NNfunction_NN_3_5::synapse0x29709f0() {
   return (neuron0x295d140()*0.0473796);
}

double NNfunction_NN_3_5::synapse0x2970a30() {
   return (neuron0x295d480()*0.00360849);
}

double NNfunction_NN_3_5::synapse0x2970a70() {
   return (neuron0x295d7c0()*-0.156658);
}

double NNfunction_NN_3_5::synapse0x2970df0() {
   return (neuron0x2958c00()*-0.0106);
}

double NNfunction_NN_3_5::synapse0x2970e30() {
   return (neuron0x2958f40()*-16.7559);
}

double NNfunction_NN_3_5::synapse0x2970e70() {
   return (neuron0x2959280()*-0.121416);
}

double NNfunction_NN_3_5::synapse0x2970eb0() {
   return (neuron0x29595c0()*0.00343467);
}

double NNfunction_NN_3_5::synapse0x2970ef0() {
   return (neuron0x2959900()*0.0461336);
}

double NNfunction_NN_3_5::synapse0x2970f30() {
   return (neuron0x2959c40()*-0.00395143);
}

double NNfunction_NN_3_5::synapse0x2970f70() {
   return (neuron0x2959f80()*0.00541546);
}

double NNfunction_NN_3_5::synapse0x2970fb0() {
   return (neuron0x295a2c0()*-8.28841e-05);
}

double NNfunction_NN_3_5::synapse0x2970ff0() {
   return (neuron0x295a600()*0.00388548);
}

double NNfunction_NN_3_5::synapse0x2971030() {
   return (neuron0x295a940()*0.000714931);
}

double NNfunction_NN_3_5::synapse0x2971070() {
   return (neuron0x295ac80()*0.00789938);
}

double NNfunction_NN_3_5::synapse0x29710b0() {
   return (neuron0x295afc0()*-0.0228066);
}

double NNfunction_NN_3_5::synapse0x29710f0() {
   return (neuron0x295b300()*0.00661413);
}

double NNfunction_NN_3_5::synapse0x2971130() {
   return (neuron0x295b640()*0.0210773);
}

double NNfunction_NN_3_5::synapse0x2971170() {
   return (neuron0x295b980()*-0.00332956);
}

double NNfunction_NN_3_5::synapse0x29711b0() {
   return (neuron0x295bcc0()*-0.00902206);
}

double NNfunction_NN_3_5::synapse0x2970c40() {
   return (neuron0x295c000()*0.0136826);
}

double NNfunction_NN_3_5::synapse0x2970c80() {
   return (neuron0x295c560()*0.0038845);
}

double NNfunction_NN_3_5::synapse0x2971300() {
   return (neuron0x295c780()*0.000921328);
}

double NNfunction_NN_3_5::synapse0x2971340() {
   return (neuron0x295cac0()*-0.0149199);
}

double NNfunction_NN_3_5::synapse0x2971380() {
   return (neuron0x295ce00()*0.00458023);
}

double NNfunction_NN_3_5::synapse0x29713c0() {
   return (neuron0x295d140()*0.00415253);
}

double NNfunction_NN_3_5::synapse0x2971400() {
   return (neuron0x295d480()*-5.74882e-05);
}

double NNfunction_NN_3_5::synapse0x2971440() {
   return (neuron0x295d7c0()*2.35545);
}

double NNfunction_NN_3_5::synapse0x29717c0() {
   return (neuron0x2958c00()*-0.030962);
}

double NNfunction_NN_3_5::synapse0x2971800() {
   return (neuron0x2958f40()*0.00325178);
}

double NNfunction_NN_3_5::synapse0x2971840() {
   return (neuron0x2959280()*1.41836);
}

double NNfunction_NN_3_5::synapse0x2971880() {
   return (neuron0x29595c0()*-0.0356217);
}

double NNfunction_NN_3_5::synapse0x29718c0() {
   return (neuron0x2959900()*-0.0215357);
}

double NNfunction_NN_3_5::synapse0x2971900() {
   return (neuron0x2959c40()*0.0095228);
}

double NNfunction_NN_3_5::synapse0x2971940() {
   return (neuron0x2959f80()*-0.0161608);
}

double NNfunction_NN_3_5::synapse0x2971980() {
   return (neuron0x295a2c0()*-0.0193076);
}

double NNfunction_NN_3_5::synapse0x29719c0() {
   return (neuron0x295a600()*0.0106807);
}

double NNfunction_NN_3_5::synapse0x2971a00() {
   return (neuron0x295a940()*0.0181713);
}

double NNfunction_NN_3_5::synapse0x2971a40() {
   return (neuron0x295ac80()*0.00613972);
}

double NNfunction_NN_3_5::synapse0x2971a80() {
   return (neuron0x295afc0()*0.216746);
}

double NNfunction_NN_3_5::synapse0x2971ac0() {
   return (neuron0x295b300()*0.0530594);
}

double NNfunction_NN_3_5::synapse0x2971b00() {
   return (neuron0x295b640()*-0.0104357);
}

double NNfunction_NN_3_5::synapse0x2971b40() {
   return (neuron0x295b980()*-0.00442784);
}

double NNfunction_NN_3_5::synapse0x2971b80() {
   return (neuron0x295bcc0()*0.00395065);
}

double NNfunction_NN_3_5::synapse0x2971610() {
   return (neuron0x295c000()*-0.0196066);
}

double NNfunction_NN_3_5::synapse0x2971650() {
   return (neuron0x295c560()*-0.00261409);
}

double NNfunction_NN_3_5::synapse0x2971cd0() {
   return (neuron0x295c780()*0.0150817);
}

double NNfunction_NN_3_5::synapse0x2971d10() {
   return (neuron0x295cac0()*0.0233814);
}

double NNfunction_NN_3_5::synapse0x2971d50() {
   return (neuron0x295ce00()*0.0107347);
}

double NNfunction_NN_3_5::synapse0x2971d90() {
   return (neuron0x295d140()*-0.0117116);
}

double NNfunction_NN_3_5::synapse0x2971dd0() {
   return (neuron0x295d480()*0.00677911);
}

double NNfunction_NN_3_5::synapse0x2971e10() {
   return (neuron0x295d7c0()*-1.71713);
}

double NNfunction_NN_3_5::synapse0x2972190() {
   return (neuron0x2958c00()*0.0322908);
}

double NNfunction_NN_3_5::synapse0x29721d0() {
   return (neuron0x2958f40()*0.0839596);
}

double NNfunction_NN_3_5::synapse0x2972210() {
   return (neuron0x2959280()*-0.472613);
}

double NNfunction_NN_3_5::synapse0x2972250() {
   return (neuron0x29595c0()*0.0718085);
}

double NNfunction_NN_3_5::synapse0x2972290() {
   return (neuron0x2959900()*0.0765922);
}

double NNfunction_NN_3_5::synapse0x29722d0() {
   return (neuron0x2959c40()*-0.0895178);
}

double NNfunction_NN_3_5::synapse0x2972310() {
   return (neuron0x2959f80()*0.0463143);
}

double NNfunction_NN_3_5::synapse0x2972350() {
   return (neuron0x295a2c0()*-0.165245);
}

double NNfunction_NN_3_5::synapse0x2972390() {
   return (neuron0x295a600()*0.0787722);
}

double NNfunction_NN_3_5::synapse0x29723d0() {
   return (neuron0x295a940()*0.0844902);
}

double NNfunction_NN_3_5::synapse0x2972410() {
   return (neuron0x295ac80()*-0.138386);
}

double NNfunction_NN_3_5::synapse0x2972450() {
   return (neuron0x295afc0()*0.0106553);
}

double NNfunction_NN_3_5::synapse0x2972490() {
   return (neuron0x295b300()*0.0802279);
}

double NNfunction_NN_3_5::synapse0x29724d0() {
   return (neuron0x295b640()*0.151761);
}

double NNfunction_NN_3_5::synapse0x2972510() {
   return (neuron0x295b980()*-0.0338404);
}

double NNfunction_NN_3_5::synapse0x2972550() {
   return (neuron0x295bcc0()*0.0837861);
}

double NNfunction_NN_3_5::synapse0x2971fe0() {
   return (neuron0x295c000()*0.0602091);
}

double NNfunction_NN_3_5::synapse0x2972020() {
   return (neuron0x295c560()*0.127008);
}

double NNfunction_NN_3_5::synapse0x29726a0() {
   return (neuron0x295c780()*-0.0814526);
}

double NNfunction_NN_3_5::synapse0x29726e0() {
   return (neuron0x295cac0()*-0.00601201);
}

double NNfunction_NN_3_5::synapse0x2972720() {
   return (neuron0x295ce00()*-0.0656791);
}

double NNfunction_NN_3_5::synapse0x2972760() {
   return (neuron0x295d140()*-0.089703);
}

double NNfunction_NN_3_5::synapse0x29727a0() {
   return (neuron0x295d480()*-0.165144);
}

double NNfunction_NN_3_5::synapse0x29727e0() {
   return (neuron0x295d7c0()*1.31059);
}

double NNfunction_NN_3_5::synapse0x2972b60() {
   return (neuron0x2958c00()*0.0578975);
}

double NNfunction_NN_3_5::synapse0x2972ba0() {
   return (neuron0x2958f40()*-0.192579);
}

double NNfunction_NN_3_5::synapse0x2972be0() {
   return (neuron0x2959280()*0.29098);
}

double NNfunction_NN_3_5::synapse0x2972c20() {
   return (neuron0x29595c0()*0.0918597);
}

double NNfunction_NN_3_5::synapse0x2972c60() {
   return (neuron0x2959900()*0.0182623);
}

double NNfunction_NN_3_5::synapse0x2972ca0() {
   return (neuron0x2959c40()*0.0257006);
}

double NNfunction_NN_3_5::synapse0x2972ce0() {
   return (neuron0x2959f80()*0.0714694);
}

double NNfunction_NN_3_5::synapse0x2972d20() {
   return (neuron0x295a2c0()*0.0292622);
}

double NNfunction_NN_3_5::synapse0x2972d60() {
   return (neuron0x295a600()*-0.0598604);
}

double NNfunction_NN_3_5::synapse0x2972da0() {
   return (neuron0x295a940()*-0.0756892);
}

double NNfunction_NN_3_5::synapse0x2972de0() {
   return (neuron0x295ac80()*0.0176692);
}

double NNfunction_NN_3_5::synapse0x2972e20() {
   return (neuron0x295afc0()*-0.349772);
}

double NNfunction_NN_3_5::synapse0x2972e60() {
   return (neuron0x295b300()*-0.10581);
}

double NNfunction_NN_3_5::synapse0x2972ea0() {
   return (neuron0x295b640()*0.0300852);
}

double NNfunction_NN_3_5::synapse0x2972ee0() {
   return (neuron0x295b980()*-0.0330941);
}

double NNfunction_NN_3_5::synapse0x2972f20() {
   return (neuron0x295bcc0()*-0.122597);
}

double NNfunction_NN_3_5::synapse0x29729b0() {
   return (neuron0x295c000()*-0.0108879);
}

double NNfunction_NN_3_5::synapse0x29729f0() {
   return (neuron0x295c560()*-0.213728);
}

double NNfunction_NN_3_5::synapse0x2973070() {
   return (neuron0x295c780()*-0.10802);
}

double NNfunction_NN_3_5::synapse0x29730b0() {
   return (neuron0x295cac0()*0.0072998);
}

double NNfunction_NN_3_5::synapse0x29730f0() {
   return (neuron0x295ce00()*-0.111935);
}

double NNfunction_NN_3_5::synapse0x2973130() {
   return (neuron0x295d140()*0.0244775);
}

double NNfunction_NN_3_5::synapse0x2973170() {
   return (neuron0x295d480()*0.014712);
}

double NNfunction_NN_3_5::synapse0x29731b0() {
   return (neuron0x295d7c0()*-0.881372);
}

double NNfunction_NN_3_5::synapse0x2973530() {
   return (neuron0x2958c00()*0.151705);
}

double NNfunction_NN_3_5::synapse0x2967b00() {
   return (neuron0x2958f40()*-0.177964);
}

double NNfunction_NN_3_5::synapse0x2967b40() {
   return (neuron0x2959280()*-0.24442);
}

double NNfunction_NN_3_5::synapse0x2967b80() {
   return (neuron0x29595c0()*-0.00175112);
}

double NNfunction_NN_3_5::synapse0x2967dd0() {
   return (neuron0x2959900()*0.0763628);
}

double NNfunction_NN_3_5::synapse0x2967e10() {
   return (neuron0x2959c40()*0.10214);
}

double NNfunction_NN_3_5::synapse0x2967e50() {
   return (neuron0x2959f80()*0.0337322);
}

double NNfunction_NN_3_5::synapse0x29680a0() {
   return (neuron0x295a2c0()*0.0463719);
}

double NNfunction_NN_3_5::synapse0x29680e0() {
   return (neuron0x295a600()*-0.134327);
}

double NNfunction_NN_3_5::synapse0x2968330() {
   return (neuron0x295a940()*-0.108622);
}

double NNfunction_NN_3_5::synapse0x2968370() {
   return (neuron0x295ac80()*0.0466977);
}

double NNfunction_NN_3_5::synapse0x29683b0() {
   return (neuron0x295afc0()*-0.07989);
}

double NNfunction_NN_3_5::synapse0x2968600() {
   return (neuron0x295b300()*-0.0177986);
}

double NNfunction_NN_3_5::synapse0x2968640() {
   return (neuron0x295b640()*0.0702956);
}

double NNfunction_NN_3_5::synapse0x2968890() {
   return (neuron0x295b980()*0.0193738);
}

double NNfunction_NN_3_5::synapse0x29688d0() {
   return (neuron0x295bcc0()*-0.0123119);
}

double NNfunction_NN_3_5::synapse0x2973380() {
   return (neuron0x295c000()*0.0137392);
}

double NNfunction_NN_3_5::synapse0x29733c0() {
   return (neuron0x295c560()*-0.0959913);
}

double NNfunction_NN_3_5::synapse0x2968a20() {
   return (neuron0x295c780()*-0.140784);
}

double NNfunction_NN_3_5::synapse0x2968f30() {
   return (neuron0x295cac0()*-0.267738);
}

double NNfunction_NN_3_5::synapse0x2968f70() {
   return (neuron0x295ce00()*-0.0177733);
}

double NNfunction_NN_3_5::synapse0x2968fb0() {
   return (neuron0x295d140()*0.0207525);
}

double NNfunction_NN_3_5::synapse0x2969200() {
   return (neuron0x295d480()*0.0210311);
}

double NNfunction_NN_3_5::synapse0x2969240() {
   return (neuron0x295d7c0()*-0.384249);
}

double NNfunction_NN_3_5::synapse0x2968af0() {
   return (neuron0x2958c00()*0.0953476);
}

double NNfunction_NN_3_5::synapse0x2968b30() {
   return (neuron0x2958f40()*0.01961);
}

double NNfunction_NN_3_5::synapse0x2968b70() {
   return (neuron0x2959280()*-6.87073);
}

double NNfunction_NN_3_5::synapse0x2968bb0() {
   return (neuron0x29595c0()*-0.0311292);
}

double NNfunction_NN_3_5::synapse0x2969530() {
   return (neuron0x2959900()*-0.000551283);
}

double NNfunction_NN_3_5::synapse0x2975880() {
   return (neuron0x2959c40()*0.000417305);
}

double NNfunction_NN_3_5::synapse0x29758c0() {
   return (neuron0x2959f80()*0.0251615);
}

double NNfunction_NN_3_5::synapse0x2975900() {
   return (neuron0x295a2c0()*0.00829528);
}

double NNfunction_NN_3_5::synapse0x2975940() {
   return (neuron0x295a600()*0.00507166);
}

double NNfunction_NN_3_5::synapse0x2975980() {
   return (neuron0x295a940()*0.00518837);
}

double NNfunction_NN_3_5::synapse0x29759c0() {
   return (neuron0x295ac80()*-0.00623949);
}

double NNfunction_NN_3_5::synapse0x2975a00() {
   return (neuron0x295afc0()*-0.159555);
}

double NNfunction_NN_3_5::synapse0x2975a40() {
   return (neuron0x295b300()*-0.0225821);
}

double NNfunction_NN_3_5::synapse0x2975a80() {
   return (neuron0x295b640()*-0.0174709);
}

double NNfunction_NN_3_5::synapse0x2975ac0() {
   return (neuron0x295b980()*0.00798593);
}

double NNfunction_NN_3_5::synapse0x2975b00() {
   return (neuron0x295bcc0()*0.0247119);
}

double NNfunction_NN_3_5::synapse0x2969410() {
   return (neuron0x295c000()*0.0138335);
}

double NNfunction_NN_3_5::synapse0x2969450() {
   return (neuron0x295c560()*-0.0189515);
}

double NNfunction_NN_3_5::synapse0x2975c50() {
   return (neuron0x295c780()*0.0156347);
}

double NNfunction_NN_3_5::synapse0x2975c90() {
   return (neuron0x295cac0()*-0.0141951);
}

double NNfunction_NN_3_5::synapse0x2975cd0() {
   return (neuron0x295ce00()*-0.00907321);
}

double NNfunction_NN_3_5::synapse0x2975d10() {
   return (neuron0x295d140()*0.00555643);
}

double NNfunction_NN_3_5::synapse0x2975d50() {
   return (neuron0x295d480()*0.00364737);
}

double NNfunction_NN_3_5::synapse0x2975d90() {
   return (neuron0x295d7c0()*-3.06559);
}

double NNfunction_NN_3_5::synapse0x2976110() {
   return (neuron0x2958c00()*0.300298);
}

double NNfunction_NN_3_5::synapse0x2976150() {
   return (neuron0x2958f40()*-0.00343288);
}

double NNfunction_NN_3_5::synapse0x2976190() {
   return (neuron0x2959280()*-0.0260148);
}

double NNfunction_NN_3_5::synapse0x29761d0() {
   return (neuron0x29595c0()*-0.114708);
}

double NNfunction_NN_3_5::synapse0x2976210() {
   return (neuron0x2959900()*0.0350698);
}

double NNfunction_NN_3_5::synapse0x2976250() {
   return (neuron0x2959c40()*0.0335532);
}

double NNfunction_NN_3_5::synapse0x2976290() {
   return (neuron0x2959f80()*0.0593965);
}

double NNfunction_NN_3_5::synapse0x29762d0() {
   return (neuron0x295a2c0()*0.0308377);
}

double NNfunction_NN_3_5::synapse0x2976310() {
   return (neuron0x295a600()*-0.0117342);
}

double NNfunction_NN_3_5::synapse0x2976350() {
   return (neuron0x295a940()*-0.0304239);
}

double NNfunction_NN_3_5::synapse0x2976390() {
   return (neuron0x295ac80()*-0.0467855);
}

double NNfunction_NN_3_5::synapse0x29763d0() {
   return (neuron0x295afc0()*0.0200154);
}

double NNfunction_NN_3_5::synapse0x2976410() {
   return (neuron0x295b300()*0.0365499);
}

double NNfunction_NN_3_5::synapse0x2976450() {
   return (neuron0x295b640()*0.0415245);
}

double NNfunction_NN_3_5::synapse0x2976490() {
   return (neuron0x295b980()*-0.0454894);
}

double NNfunction_NN_3_5::synapse0x29764d0() {
   return (neuron0x295bcc0()*-0.206184);
}

double NNfunction_NN_3_5::synapse0x2975f60() {
   return (neuron0x295c000()*0.00462541);
}

double NNfunction_NN_3_5::synapse0x2975fa0() {
   return (neuron0x295c560()*-0.0736044);
}

double NNfunction_NN_3_5::synapse0x2976620() {
   return (neuron0x295c780()*-0.0711347);
}

double NNfunction_NN_3_5::synapse0x2976660() {
   return (neuron0x295cac0()*0.202571);
}

double NNfunction_NN_3_5::synapse0x29766a0() {
   return (neuron0x295ce00()*-0.0188668);
}

double NNfunction_NN_3_5::synapse0x29766e0() {
   return (neuron0x295d140()*0.0156475);
}

double NNfunction_NN_3_5::synapse0x2976720() {
   return (neuron0x295d480()*-0.120616);
}

double NNfunction_NN_3_5::synapse0x2976760() {
   return (neuron0x295d7c0()*-0.402963);
}

double NNfunction_NN_3_5::synapse0x2976ae0() {
   return (neuron0x2958c00()*0.103526);
}

double NNfunction_NN_3_5::synapse0x2976b20() {
   return (neuron0x2958f40()*0.0529491);
}

double NNfunction_NN_3_5::synapse0x2976b60() {
   return (neuron0x2959280()*-0.430401);
}

double NNfunction_NN_3_5::synapse0x2976ba0() {
   return (neuron0x29595c0()*-0.266761);
}

double NNfunction_NN_3_5::synapse0x2976be0() {
   return (neuron0x2959900()*0.0140673);
}

double NNfunction_NN_3_5::synapse0x2976c20() {
   return (neuron0x2959c40()*-0.0068541);
}

double NNfunction_NN_3_5::synapse0x2976c60() {
   return (neuron0x2959f80()*-0.00667137);
}

double NNfunction_NN_3_5::synapse0x2976ca0() {
   return (neuron0x295a2c0()*-0.0193883);
}

double NNfunction_NN_3_5::synapse0x2976ce0() {
   return (neuron0x295a600()*0.016849);
}

double NNfunction_NN_3_5::synapse0x2976d20() {
   return (neuron0x295a940()*0.0106238);
}

double NNfunction_NN_3_5::synapse0x2976d60() {
   return (neuron0x295ac80()*0.000316869);
}

double NNfunction_NN_3_5::synapse0x2976da0() {
   return (neuron0x295afc0()*-0.0867431);
}

double NNfunction_NN_3_5::synapse0x2976de0() {
   return (neuron0x295b300()*-0.0263722);
}

double NNfunction_NN_3_5::synapse0x2976e20() {
   return (neuron0x295b640()*-0.0424495);
}

double NNfunction_NN_3_5::synapse0x2976e60() {
   return (neuron0x295b980()*-0.0106945);
}

double NNfunction_NN_3_5::synapse0x2976ea0() {
   return (neuron0x295bcc0()*0.0258017);
}

double NNfunction_NN_3_5::synapse0x2976930() {
   return (neuron0x295c000()*-0.017583);
}

double NNfunction_NN_3_5::synapse0x2976970() {
   return (neuron0x295c560()*0.0311993);
}

double NNfunction_NN_3_5::synapse0x2976ff0() {
   return (neuron0x295c780()*0.0143588);
}

double NNfunction_NN_3_5::synapse0x2977030() {
   return (neuron0x295cac0()*-0.0180169);
}

double NNfunction_NN_3_5::synapse0x2977070() {
   return (neuron0x295ce00()*-0.0117016);
}

double NNfunction_NN_3_5::synapse0x29770b0() {
   return (neuron0x295d140()*0.0109665);
}

double NNfunction_NN_3_5::synapse0x29770f0() {
   return (neuron0x295d480()*-0.0126988);
}

double NNfunction_NN_3_5::synapse0x2977130() {
   return (neuron0x295d7c0()*0.0591651);
}

double NNfunction_NN_3_5::synapse0x29774b0() {
   return (neuron0x2958c00()*-0.0593843);
}

double NNfunction_NN_3_5::synapse0x29774f0() {
   return (neuron0x2958f40()*0.0163163);
}

double NNfunction_NN_3_5::synapse0x2977530() {
   return (neuron0x2959280()*5.66487);
}

double NNfunction_NN_3_5::synapse0x2977570() {
   return (neuron0x29595c0()*-0.0285722);
}

double NNfunction_NN_3_5::synapse0x29775b0() {
   return (neuron0x2959900()*-0.0427198);
}

double NNfunction_NN_3_5::synapse0x29775f0() {
   return (neuron0x2959c40()*-0.00268031);
}

double NNfunction_NN_3_5::synapse0x2977630() {
   return (neuron0x2959f80()*-0.00577336);
}

double NNfunction_NN_3_5::synapse0x2977670() {
   return (neuron0x295a2c0()*0.00694382);
}

double NNfunction_NN_3_5::synapse0x29776b0() {
   return (neuron0x295a600()*0.00596697);
}

double NNfunction_NN_3_5::synapse0x29776f0() {
   return (neuron0x295a940()*0.00142896);
}

double NNfunction_NN_3_5::synapse0x2977730() {
   return (neuron0x295ac80()*-0.0155739);
}

double NNfunction_NN_3_5::synapse0x2977770() {
   return (neuron0x295afc0()*0.121061);
}

double NNfunction_NN_3_5::synapse0x29777b0() {
   return (neuron0x295b300()*0.0239721);
}

double NNfunction_NN_3_5::synapse0x29777f0() {
   return (neuron0x295b640()*-0.0188096);
}

double NNfunction_NN_3_5::synapse0x2977830() {
   return (neuron0x295b980()*0.0117113);
}

double NNfunction_NN_3_5::synapse0x2977870() {
   return (neuron0x295bcc0()*0.00683506);
}

double NNfunction_NN_3_5::synapse0x2977300() {
   return (neuron0x295c000()*-0.0329519);
}

double NNfunction_NN_3_5::synapse0x2977340() {
   return (neuron0x295c560()*0.0114327);
}

double NNfunction_NN_3_5::synapse0x29779c0() {
   return (neuron0x295c780()*0.0183272);
}

double NNfunction_NN_3_5::synapse0x2977a00() {
   return (neuron0x295cac0()*0.00901672);
}

double NNfunction_NN_3_5::synapse0x2977a40() {
   return (neuron0x295ce00()*0.00716655);
}

double NNfunction_NN_3_5::synapse0x2977a80() {
   return (neuron0x295d140()*-0.022933);
}

double NNfunction_NN_3_5::synapse0x2977ac0() {
   return (neuron0x295d480()*0.0055506);
}

double NNfunction_NN_3_5::synapse0x2977b00() {
   return (neuron0x295d7c0()*-2.98213);
}

double NNfunction_NN_3_5::synapse0x2977e80() {
   return (neuron0x2958c00()*-0.167897);
}

double NNfunction_NN_3_5::synapse0x2977ec0() {
   return (neuron0x2958f40()*-0.106289);
}

double NNfunction_NN_3_5::synapse0x2977f00() {
   return (neuron0x2959280()*0.141862);
}

double NNfunction_NN_3_5::synapse0x2977f40() {
   return (neuron0x29595c0()*0.564769);
}

double NNfunction_NN_3_5::synapse0x2977f80() {
   return (neuron0x2959900()*-0.101995);
}

double NNfunction_NN_3_5::synapse0x2977fc0() {
   return (neuron0x2959c40()*-0.0178547);
}

double NNfunction_NN_3_5::synapse0x2978000() {
   return (neuron0x2959f80()*-0.0676367);
}

double NNfunction_NN_3_5::synapse0x2978040() {
   return (neuron0x295a2c0()*-0.0295597);
}

double NNfunction_NN_3_5::synapse0x2978080() {
   return (neuron0x295a600()*-0.010867);
}

double NNfunction_NN_3_5::synapse0x29780c0() {
   return (neuron0x295a940()*0.0126963);
}

double NNfunction_NN_3_5::synapse0x2978100() {
   return (neuron0x295ac80()*-0.0398483);
}

double NNfunction_NN_3_5::synapse0x2978140() {
   return (neuron0x295afc0()*-0.475759);
}

double NNfunction_NN_3_5::synapse0x2978180() {
   return (neuron0x295b300()*-0.10154);
}

double NNfunction_NN_3_5::synapse0x29781c0() {
   return (neuron0x295b640()*0.0281249);
}

double NNfunction_NN_3_5::synapse0x2978200() {
   return (neuron0x295b980()*-0.0036524);
}

double NNfunction_NN_3_5::synapse0x2978240() {
   return (neuron0x295bcc0()*0.0485965);
}

double NNfunction_NN_3_5::synapse0x2977cd0() {
   return (neuron0x295c000()*-0.0184525);
}

double NNfunction_NN_3_5::synapse0x2977d10() {
   return (neuron0x295c560()*0.0286555);
}

double NNfunction_NN_3_5::synapse0x2978390() {
   return (neuron0x295c780()*0.0387084);
}

double NNfunction_NN_3_5::synapse0x29783d0() {
   return (neuron0x295cac0()*0.0183076);
}

double NNfunction_NN_3_5::synapse0x2978410() {
   return (neuron0x295ce00()*0.0235138);
}

double NNfunction_NN_3_5::synapse0x2978450() {
   return (neuron0x295d140()*-0.025325);
}

double NNfunction_NN_3_5::synapse0x2978490() {
   return (neuron0x295d480()*-0.0258362);
}

double NNfunction_NN_3_5::synapse0x29784d0() {
   return (neuron0x295d7c0()*-0.326654);
}

double NNfunction_NN_3_5::synapse0x2978850() {
   return (neuron0x2958c00()*0.0251249);
}

double NNfunction_NN_3_5::synapse0x2978890() {
   return (neuron0x2958f40()*-0.0167195);
}

double NNfunction_NN_3_5::synapse0x29788d0() {
   return (neuron0x2959280()*0.488078);
}

double NNfunction_NN_3_5::synapse0x2978910() {
   return (neuron0x29595c0()*-0.0249462);
}

double NNfunction_NN_3_5::synapse0x2978950() {
   return (neuron0x2959900()*0.0561708);
}

double NNfunction_NN_3_5::synapse0x2978990() {
   return (neuron0x2959c40()*0.092619);
}

double NNfunction_NN_3_5::synapse0x29789d0() {
   return (neuron0x2959f80()*-0.0262951);
}

double NNfunction_NN_3_5::synapse0x2978a10() {
   return (neuron0x295a2c0()*-0.195789);
}

double NNfunction_NN_3_5::synapse0x2978a50() {
   return (neuron0x295a600()*-0.0527849);
}

double NNfunction_NN_3_5::synapse0x2978a90() {
   return (neuron0x295a940()*-0.0082463);
}

double NNfunction_NN_3_5::synapse0x2978ad0() {
   return (neuron0x295ac80()*-0.0941793);
}

double NNfunction_NN_3_5::synapse0x2978b10() {
   return (neuron0x295afc0()*0.20197);
}

double NNfunction_NN_3_5::synapse0x2978b50() {
   return (neuron0x295b300()*0.204067);
}

double NNfunction_NN_3_5::synapse0x2978b90() {
   return (neuron0x295b640()*0.334597);
}

double NNfunction_NN_3_5::synapse0x2978bd0() {
   return (neuron0x295b980()*0.0317262);
}

double NNfunction_NN_3_5::synapse0x2978c10() {
   return (neuron0x295bcc0()*-0.0206088);
}

double NNfunction_NN_3_5::synapse0x29786a0() {
   return (neuron0x295c000()*0.077137);
}

double NNfunction_NN_3_5::synapse0x29786e0() {
   return (neuron0x295c560()*0.0639922);
}

double NNfunction_NN_3_5::synapse0x2978d60() {
   return (neuron0x295c780()*-0.146833);
}

double NNfunction_NN_3_5::synapse0x2978da0() {
   return (neuron0x295cac0()*-0.183008);
}

double NNfunction_NN_3_5::synapse0x2978de0() {
   return (neuron0x295ce00()*0.117086);
}

double NNfunction_NN_3_5::synapse0x2978e20() {
   return (neuron0x295d140()*0.0857854);
}

double NNfunction_NN_3_5::synapse0x2978e60() {
   return (neuron0x295d480()*-0.0254838);
}

double NNfunction_NN_3_5::synapse0x2978ea0() {
   return (neuron0x295d7c0()*-1.28871);
}

double NNfunction_NN_3_5::synapse0x2979220() {
   return (neuron0x2958c00()*-0.00470497);
}

double NNfunction_NN_3_5::synapse0x2979260() {
   return (neuron0x2958f40()*0.06044);
}

double NNfunction_NN_3_5::synapse0x29792a0() {
   return (neuron0x2959280()*0.311307);
}

double NNfunction_NN_3_5::synapse0x29792e0() {
   return (neuron0x29595c0()*0.0928664);
}

double NNfunction_NN_3_5::synapse0x2979320() {
   return (neuron0x2959900()*0.0771169);
}

double NNfunction_NN_3_5::synapse0x2979360() {
   return (neuron0x2959c40()*-0.00680439);
}

double NNfunction_NN_3_5::synapse0x29793a0() {
   return (neuron0x2959f80()*-0.0113969);
}

double NNfunction_NN_3_5::synapse0x29793e0() {
   return (neuron0x295a2c0()*0.00122568);
}

double NNfunction_NN_3_5::synapse0x2979420() {
   return (neuron0x295a600()*0.00410068);
}

double NNfunction_NN_3_5::synapse0x2979460() {
   return (neuron0x295a940()*-0.0304003);
}

double NNfunction_NN_3_5::synapse0x29794a0() {
   return (neuron0x295ac80()*-0.0198124);
}

double NNfunction_NN_3_5::synapse0x29794e0() {
   return (neuron0x295afc0()*-2.03811);
}

double NNfunction_NN_3_5::synapse0x2979520() {
   return (neuron0x295b300()*0.0641182);
}

double NNfunction_NN_3_5::synapse0x2979560() {
   return (neuron0x295b640()*0.0133679);
}

double NNfunction_NN_3_5::synapse0x29795a0() {
   return (neuron0x295b980()*-0.032287);
}

double NNfunction_NN_3_5::synapse0x29795e0() {
   return (neuron0x295bcc0()*-0.0204367);
}

double NNfunction_NN_3_5::synapse0x2979070() {
   return (neuron0x295c000()*-0.0321589);
}

double NNfunction_NN_3_5::synapse0x29790b0() {
   return (neuron0x295c560()*0.0170717);
}

double NNfunction_NN_3_5::synapse0x2979730() {
   return (neuron0x295c780()*0.0120593);
}

double NNfunction_NN_3_5::synapse0x2979770() {
   return (neuron0x295cac0()*-0.0422208);
}

double NNfunction_NN_3_5::synapse0x29797b0() {
   return (neuron0x295ce00()*-0.0259209);
}

double NNfunction_NN_3_5::synapse0x29797f0() {
   return (neuron0x295d140()*0.0409554);
}

double NNfunction_NN_3_5::synapse0x2979830() {
   return (neuron0x295d480()*0.0191783);
}

double NNfunction_NN_3_5::synapse0x2979870() {
   return (neuron0x295d7c0()*0.216477);
}

double NNfunction_NN_3_5::synapse0x2979bf0() {
   return (neuron0x2958c00()*0.0358023);
}

double NNfunction_NN_3_5::synapse0x2979c30() {
   return (neuron0x2958f40()*-0.0512301);
}

double NNfunction_NN_3_5::synapse0x2979c70() {
   return (neuron0x2959280()*2.01287);
}

double NNfunction_NN_3_5::synapse0x2979cb0() {
   return (neuron0x29595c0()*-0.0318592);
}

double NNfunction_NN_3_5::synapse0x2979cf0() {
   return (neuron0x2959900()*-0.0130077);
}

double NNfunction_NN_3_5::synapse0x2979d30() {
   return (neuron0x2959c40()*0.0124039);
}

double NNfunction_NN_3_5::synapse0x2979d70() {
   return (neuron0x2959f80()*-0.0135846);
}

double NNfunction_NN_3_5::synapse0x2979db0() {
   return (neuron0x295a2c0()*0.0154528);
}

double NNfunction_NN_3_5::synapse0x2979df0() {
   return (neuron0x295a600()*-0.00746008);
}

double NNfunction_NN_3_5::synapse0x2979e30() {
   return (neuron0x295a940()*0.00601141);
}

double NNfunction_NN_3_5::synapse0x2979e70() {
   return (neuron0x295ac80()*0.0210237);
}

double NNfunction_NN_3_5::synapse0x2979eb0() {
   return (neuron0x295afc0()*-1.22657);
}

double NNfunction_NN_3_5::synapse0x2979ef0() {
   return (neuron0x295b300()*0.0178185);
}

double NNfunction_NN_3_5::synapse0x2979f30() {
   return (neuron0x295b640()*0.00364871);
}

double NNfunction_NN_3_5::synapse0x2979f70() {
   return (neuron0x295b980()*-0.0237968);
}

double NNfunction_NN_3_5::synapse0x2979fb0() {
   return (neuron0x295bcc0()*-0.0229845);
}

double NNfunction_NN_3_5::synapse0x2979a40() {
   return (neuron0x295c000()*-0.00593897);
}

double NNfunction_NN_3_5::synapse0x2979a80() {
   return (neuron0x295c560()*-0.0195077);
}

double NNfunction_NN_3_5::synapse0x297a100() {
   return (neuron0x295c780()*-0.016697);
}

double NNfunction_NN_3_5::synapse0x297a140() {
   return (neuron0x295cac0()*0.0647402);
}

double NNfunction_NN_3_5::synapse0x297a180() {
   return (neuron0x295ce00()*0.00750282);
}

double NNfunction_NN_3_5::synapse0x297a1c0() {
   return (neuron0x295d140()*0.00267455);
}

double NNfunction_NN_3_5::synapse0x297a200() {
   return (neuron0x295d480()*-0.00145316);
}

double NNfunction_NN_3_5::synapse0x297a240() {
   return (neuron0x295d7c0()*-2.61593);
}

double NNfunction_NN_3_5::synapse0x2962cf0() {
   return (neuron0x2958c00()*-0.352022);
}

double NNfunction_NN_3_5::synapse0x2962d30() {
   return (neuron0x2958f40()*0.190954);
}

double NNfunction_NN_3_5::synapse0x2962d70() {
   return (neuron0x2959280()*0.0271334);
}

double NNfunction_NN_3_5::synapse0x2962db0() {
   return (neuron0x29595c0()*-0.473275);
}

double NNfunction_NN_3_5::synapse0x2962df0() {
   return (neuron0x2959900()*-0.0827598);
}

double NNfunction_NN_3_5::synapse0x2962e30() {
   return (neuron0x2959c40()*0.0662893);
}

double NNfunction_NN_3_5::synapse0x2962e70() {
   return (neuron0x2959f80()*-0.249929);
}

double NNfunction_NN_3_5::synapse0x2962eb0() {
   return (neuron0x295a2c0()*0.127432);
}

double NNfunction_NN_3_5::synapse0x297a9d0() {
   return (neuron0x295a600()*0.0148282);
}

double NNfunction_NN_3_5::synapse0x297aa10() {
   return (neuron0x295a940()*0.0347036);
}

double NNfunction_NN_3_5::synapse0x297aa50() {
   return (neuron0x295ac80()*-0.0464722);
}

double NNfunction_NN_3_5::synapse0x297aa90() {
   return (neuron0x295afc0()*0.161202);
}

double NNfunction_NN_3_5::synapse0x297aad0() {
   return (neuron0x295b300()*0.481695);
}

double NNfunction_NN_3_5::synapse0x297ab10() {
   return (neuron0x295b640()*0.0205978);
}

double NNfunction_NN_3_5::synapse0x297ab50() {
   return (neuron0x295b980()*0.538837);
}

double NNfunction_NN_3_5::synapse0x297ab90() {
   return (neuron0x295bcc0()*-0.365162);
}

double NNfunction_NN_3_5::synapse0x297a410() {
   return (neuron0x295c000()*0.00993331);
}

double NNfunction_NN_3_5::synapse0x297a450() {
   return (neuron0x295c560()*0.216212);
}

double NNfunction_NN_3_5::synapse0x297ace0() {
   return (neuron0x295c780()*0.0940543);
}

double NNfunction_NN_3_5::synapse0x297ad20() {
   return (neuron0x295cac0()*0.100126);
}

double NNfunction_NN_3_5::synapse0x297ad60() {
   return (neuron0x295ce00()*0.339473);
}

double NNfunction_NN_3_5::synapse0x297ada0() {
   return (neuron0x295d140()*-0.00831501);
}

double NNfunction_NN_3_5::synapse0x297ade0() {
   return (neuron0x295d480()*-0.0430199);
}

double NNfunction_NN_3_5::synapse0x297ae20() {
   return (neuron0x295d7c0()*0.324367);
}

double NNfunction_NN_3_5::synapse0x297b1a0() {
   return (neuron0x2958c00()*0.0365379);
}

double NNfunction_NN_3_5::synapse0x297b1e0() {
   return (neuron0x2958f40()*0.244472);
}

double NNfunction_NN_3_5::synapse0x297b220() {
   return (neuron0x2959280()*0.434563);
}

double NNfunction_NN_3_5::synapse0x297b260() {
   return (neuron0x29595c0()*0.054752);
}

double NNfunction_NN_3_5::synapse0x297b2a0() {
   return (neuron0x2959900()*-0.0162464);
}

double NNfunction_NN_3_5::synapse0x297b2e0() {
   return (neuron0x2959c40()*-0.00915592);
}

double NNfunction_NN_3_5::synapse0x297b320() {
   return (neuron0x2959f80()*-0.0139858);
}

double NNfunction_NN_3_5::synapse0x297b360() {
   return (neuron0x295a2c0()*0.0268054);
}

double NNfunction_NN_3_5::synapse0x297b3a0() {
   return (neuron0x295a600()*-0.00130569);
}

double NNfunction_NN_3_5::synapse0x297b3e0() {
   return (neuron0x295a940()*0.00417617);
}

double NNfunction_NN_3_5::synapse0x297b420() {
   return (neuron0x295ac80()*0.00759246);
}

double NNfunction_NN_3_5::synapse0x297b460() {
   return (neuron0x295afc0()*2.83443);
}

double NNfunction_NN_3_5::synapse0x297b4a0() {
   return (neuron0x295b300()*0.0601582);
}

double NNfunction_NN_3_5::synapse0x297b4e0() {
   return (neuron0x295b640()*-0.00334329);
}

double NNfunction_NN_3_5::synapse0x297b520() {
   return (neuron0x295b980()*-0.000346879);
}

double NNfunction_NN_3_5::synapse0x297b560() {
   return (neuron0x295bcc0()*-0.0142942);
}

double NNfunction_NN_3_5::synapse0x297aff0() {
   return (neuron0x295c000()*0.0370208);
}

double NNfunction_NN_3_5::synapse0x297b030() {
   return (neuron0x295c560()*0.0152907);
}

double NNfunction_NN_3_5::synapse0x297b6b0() {
   return (neuron0x295c780()*0.00880331);
}

double NNfunction_NN_3_5::synapse0x297b6f0() {
   return (neuron0x295cac0()*0.00462717);
}

double NNfunction_NN_3_5::synapse0x297b730() {
   return (neuron0x295ce00()*0.0260075);
}

double NNfunction_NN_3_5::synapse0x297b770() {
   return (neuron0x295d140()*0.0188146);
}

double NNfunction_NN_3_5::synapse0x297b7b0() {
   return (neuron0x295d480()*-0.0320727);
}

double NNfunction_NN_3_5::synapse0x297b7f0() {
   return (neuron0x295d7c0()*-0.591593);
}

double NNfunction_NN_3_5::synapse0x297bb70() {
   return (neuron0x2958c00()*-0.0038357);
}

double NNfunction_NN_3_5::synapse0x297bbb0() {
   return (neuron0x2958f40()*-6.87539);
}

double NNfunction_NN_3_5::synapse0x297bbf0() {
   return (neuron0x2959280()*0.299338);
}

double NNfunction_NN_3_5::synapse0x297bc30() {
   return (neuron0x29595c0()*-0.0088421);
}

double NNfunction_NN_3_5::synapse0x297bc70() {
   return (neuron0x2959900()*-0.00283583);
}

double NNfunction_NN_3_5::synapse0x297bcb0() {
   return (neuron0x2959c40()*0.00335066);
}

double NNfunction_NN_3_5::synapse0x297bcf0() {
   return (neuron0x2959f80()*0.00459487);
}

double NNfunction_NN_3_5::synapse0x297bd30() {
   return (neuron0x295a2c0()*-0.000579643);
}

double NNfunction_NN_3_5::synapse0x297bd70() {
   return (neuron0x295a600()*-0.00700525);
}

double NNfunction_NN_3_5::synapse0x297bdb0() {
   return (neuron0x295a940()*-0.00336133);
}

double NNfunction_NN_3_5::synapse0x297bdf0() {
   return (neuron0x295ac80()*-0.00268732);
}

double NNfunction_NN_3_5::synapse0x297be30() {
   return (neuron0x295afc0()*-0.0341327);
}

double NNfunction_NN_3_5::synapse0x297be70() {
   return (neuron0x295b300()*-3.81569e-06);
}

double NNfunction_NN_3_5::synapse0x297beb0() {
   return (neuron0x295b640()*-0.00798144);
}

double NNfunction_NN_3_5::synapse0x297bef0() {
   return (neuron0x295b980()*-0.00496244);
}

double NNfunction_NN_3_5::synapse0x297bf30() {
   return (neuron0x295bcc0()*0.0014218);
}

double NNfunction_NN_3_5::synapse0x297b9c0() {
   return (neuron0x295c000()*-0.00280251);
}

double NNfunction_NN_3_5::synapse0x297ba00() {
   return (neuron0x295c560()*-0.0113289);
}

double NNfunction_NN_3_5::synapse0x296c530() {
   return (neuron0x295c780()*-0.00412488);
}

double NNfunction_NN_3_5::synapse0x296c570() {
   return (neuron0x295cac0()*0.000935013);
}

double NNfunction_NN_3_5::synapse0x296c5b0() {
   return (neuron0x295ce00()*0.000893423);
}

double NNfunction_NN_3_5::synapse0x296c5f0() {
   return (neuron0x295d140()*0.00317776);
}

double NNfunction_NN_3_5::synapse0x296c630() {
   return (neuron0x295d480()*0.00259567);
}

double NNfunction_NN_3_5::synapse0x296c670() {
   return (neuron0x295d7c0()*-0.463555);
}

double NNfunction_NN_3_5::synapse0x296c9f0() {
   return (neuron0x2958c00()*-0.102395);
}

double NNfunction_NN_3_5::synapse0x296ca30() {
   return (neuron0x2958f40()*0.0251285);
}

double NNfunction_NN_3_5::synapse0x296ca70() {
   return (neuron0x2959280()*1.7491);
}

double NNfunction_NN_3_5::synapse0x296cab0() {
   return (neuron0x29595c0()*0.00243138);
}

double NNfunction_NN_3_5::synapse0x296caf0() {
   return (neuron0x2959900()*-0.00343973);
}

double NNfunction_NN_3_5::synapse0x296cb30() {
   return (neuron0x2959c40()*-0.0279319);
}

double NNfunction_NN_3_5::synapse0x296cb70() {
   return (neuron0x2959f80()*-0.0178735);
}

double NNfunction_NN_3_5::synapse0x296cbb0() {
   return (neuron0x295a2c0()*0.0158825);
}

double NNfunction_NN_3_5::synapse0x296cbf0() {
   return (neuron0x295a600()*0.0130419);
}

double NNfunction_NN_3_5::synapse0x296cc30() {
   return (neuron0x295a940()*-0.0103151);
}

double NNfunction_NN_3_5::synapse0x296cc70() {
   return (neuron0x295ac80()*-0.00234683);
}

double NNfunction_NN_3_5::synapse0x296ccb0() {
   return (neuron0x295afc0()*0.30563);
}

double NNfunction_NN_3_5::synapse0x296ccf0() {
   return (neuron0x295b300()*0.0181688);
}

double NNfunction_NN_3_5::synapse0x296cd30() {
   return (neuron0x295b640()*0.0411369);
}

double NNfunction_NN_3_5::synapse0x296cd70() {
   return (neuron0x295b980()*0.0364791);
}

double NNfunction_NN_3_5::synapse0x296cdb0() {
   return (neuron0x295bcc0()*-0.047894);
}

double NNfunction_NN_3_5::synapse0x296c840() {
   return (neuron0x295c000()*0.0228654);
}

double NNfunction_NN_3_5::synapse0x296c880() {
   return (neuron0x295c560()*0.00893365);
}

double NNfunction_NN_3_5::synapse0x296cf00() {
   return (neuron0x295c780()*0.0185078);
}

double NNfunction_NN_3_5::synapse0x296cf40() {
   return (neuron0x295cac0()*-0.015418);
}

double NNfunction_NN_3_5::synapse0x296cf80() {
   return (neuron0x295ce00()*0.00634776);
}

double NNfunction_NN_3_5::synapse0x296cfc0() {
   return (neuron0x295d140()*0.00533166);
}

double NNfunction_NN_3_5::synapse0x296d000() {
   return (neuron0x295d480()*0.0237338);
}

double NNfunction_NN_3_5::synapse0x296d040() {
   return (neuron0x295d7c0()*0.42212);
}

double NNfunction_NN_3_5::synapse0x296d3c0() {
   return (neuron0x2958c00()*0.07752);
}

double NNfunction_NN_3_5::synapse0x296d400() {
   return (neuron0x2958f40()*-0.130986);
}

double NNfunction_NN_3_5::synapse0x296d440() {
   return (neuron0x2959280()*-0.0746432);
}

double NNfunction_NN_3_5::synapse0x296d480() {
   return (neuron0x29595c0()*0.0689707);
}

double NNfunction_NN_3_5::synapse0x296d4c0() {
   return (neuron0x2959900()*0.181154);
}

double NNfunction_NN_3_5::synapse0x296d500() {
   return (neuron0x2959c40()*0.154198);
}

double NNfunction_NN_3_5::synapse0x296d540() {
   return (neuron0x2959f80()*-0.0222865);
}

double NNfunction_NN_3_5::synapse0x296d580() {
   return (neuron0x295a2c0()*0.0594519);
}

double NNfunction_NN_3_5::synapse0x296d5c0() {
   return (neuron0x295a600()*-0.105814);
}

double NNfunction_NN_3_5::synapse0x296d600() {
   return (neuron0x295a940()*-0.0261189);
}

double NNfunction_NN_3_5::synapse0x296d640() {
   return (neuron0x295ac80()*-0.00469214);
}

double NNfunction_NN_3_5::synapse0x296d680() {
   return (neuron0x295afc0()*0.100039);
}

double NNfunction_NN_3_5::synapse0x296d6c0() {
   return (neuron0x295b300()*-0.0933409);
}

double NNfunction_NN_3_5::synapse0x296d700() {
   return (neuron0x295b640()*-0.0535759);
}

double NNfunction_NN_3_5::synapse0x296d740() {
   return (neuron0x295b980()*0.175168);
}

double NNfunction_NN_3_5::synapse0x296d780() {
   return (neuron0x295bcc0()*-0.0775185);
}

double NNfunction_NN_3_5::synapse0x296d210() {
   return (neuron0x295c000()*0.113342);
}

double NNfunction_NN_3_5::synapse0x296d250() {
   return (neuron0x295c560()*0.0156992);
}

double NNfunction_NN_3_5::synapse0x296d8d0() {
   return (neuron0x295c780()*-0.140237);
}

double NNfunction_NN_3_5::synapse0x296d910() {
   return (neuron0x295cac0()*0.00673185);
}

double NNfunction_NN_3_5::synapse0x296d950() {
   return (neuron0x295ce00()*-0.0545896);
}

double NNfunction_NN_3_5::synapse0x296d990() {
   return (neuron0x295d140()*0.0335188);
}

double NNfunction_NN_3_5::synapse0x296d9d0() {
   return (neuron0x295d480()*-0.16458);
}

double NNfunction_NN_3_5::synapse0x296da10() {
   return (neuron0x295d7c0()*-0.51972);
}

double NNfunction_NN_3_5::synapse0x296dd90() {
   return (neuron0x2958c00()*0.066973);
}

double NNfunction_NN_3_5::synapse0x296ddd0() {
   return (neuron0x2958f40()*-6.56268);
}

double NNfunction_NN_3_5::synapse0x296de10() {
   return (neuron0x2959280()*1.09566);
}

double NNfunction_NN_3_5::synapse0x296de50() {
   return (neuron0x29595c0()*-0.0291991);
}

double NNfunction_NN_3_5::synapse0x296de90() {
   return (neuron0x2959900()*0.0185238);
}

double NNfunction_NN_3_5::synapse0x296ded0() {
   return (neuron0x2959c40()*-0.0167925);
}

double NNfunction_NN_3_5::synapse0x296df10() {
   return (neuron0x2959f80()*-0.0112607);
}

double NNfunction_NN_3_5::synapse0x296df50() {
   return (neuron0x295a2c0()*0.00287657);
}

double NNfunction_NN_3_5::synapse0x296df90() {
   return (neuron0x295a600()*-0.0131009);
}

double NNfunction_NN_3_5::synapse0x296dfd0() {
   return (neuron0x295a940()*0.0137175);
}

double NNfunction_NN_3_5::synapse0x296e010() {
   return (neuron0x295ac80()*-0.0129965);
}

double NNfunction_NN_3_5::synapse0x296e050() {
   return (neuron0x295afc0()*0.0557569);
}

double NNfunction_NN_3_5::synapse0x296e090() {
   return (neuron0x295b300()*0.00514958);
}

double NNfunction_NN_3_5::synapse0x296e0d0() {
   return (neuron0x295b640()*-0.0281111);
}

double NNfunction_NN_3_5::synapse0x296e110() {
   return (neuron0x295b980()*-0.0130832);
}

double NNfunction_NN_3_5::synapse0x296e150() {
   return (neuron0x295bcc0()*0.000305279);
}

double NNfunction_NN_3_5::synapse0x296dbe0() {
   return (neuron0x295c000()*0.00494825);
}

double NNfunction_NN_3_5::synapse0x296dc20() {
   return (neuron0x295c560()*-0.0120953);
}

double NNfunction_NN_3_5::synapse0x296e2a0() {
   return (neuron0x295c780()*0.0147086);
}

double NNfunction_NN_3_5::synapse0x296e2e0() {
   return (neuron0x295cac0()*-0.0100882);
}

double NNfunction_NN_3_5::synapse0x296e320() {
   return (neuron0x295ce00()*5.40217e-05);
}

double NNfunction_NN_3_5::synapse0x296e360() {
   return (neuron0x295d140()*0.00434141);
}

double NNfunction_NN_3_5::synapse0x296e3a0() {
   return (neuron0x295d480()*0.029607);
}

double NNfunction_NN_3_5::synapse0x296e3e0() {
   return (neuron0x295d7c0()*-1.30469);
}

double NNfunction_NN_3_5::synapse0x29802b0() {
   return (neuron0x2958c00()*-0.00717331);
}

double NNfunction_NN_3_5::synapse0x29802f0() {
   return (neuron0x2958f40()*-0.00900532);
}

double NNfunction_NN_3_5::synapse0x2980330() {
   return (neuron0x2959280()*-0.132131);
}

double NNfunction_NN_3_5::synapse0x2980370() {
   return (neuron0x29595c0()*0.0222202);
}

double NNfunction_NN_3_5::synapse0x29803b0() {
   return (neuron0x2959900()*-0.151755);
}

double NNfunction_NN_3_5::synapse0x29803f0() {
   return (neuron0x2959c40()*0.0639588);
}

double NNfunction_NN_3_5::synapse0x2980430() {
   return (neuron0x2959f80()*0.0234223);
}

double NNfunction_NN_3_5::synapse0x2980470() {
   return (neuron0x295a2c0()*0.00668872);
}

double NNfunction_NN_3_5::synapse0x29804b0() {
   return (neuron0x295a600()*-0.0799439);
}

double NNfunction_NN_3_5::synapse0x29804f0() {
   return (neuron0x295a940()*-0.0413582);
}

double NNfunction_NN_3_5::synapse0x2980530() {
   return (neuron0x295ac80()*0.0191162);
}

double NNfunction_NN_3_5::synapse0x2980570() {
   return (neuron0x295afc0()*0.0426517);
}

double NNfunction_NN_3_5::synapse0x29805b0() {
   return (neuron0x295b300()*-0.181587);
}

double NNfunction_NN_3_5::synapse0x29805f0() {
   return (neuron0x295b640()*0.0187947);
}

double NNfunction_NN_3_5::synapse0x2980630() {
   return (neuron0x295b980()*-0.0594791);
}

double NNfunction_NN_3_5::synapse0x2980670() {
   return (neuron0x295bcc0()*0.0518961);
}

double NNfunction_NN_3_5::synapse0x296e420() {
   return (neuron0x295c000()*0.0275077);
}

double NNfunction_NN_3_5::synapse0x296e460() {
   return (neuron0x295c560()*-0.0743876);
}

double NNfunction_NN_3_5::synapse0x29807c0() {
   return (neuron0x295c780()*-0.0698093);
}

double NNfunction_NN_3_5::synapse0x2980800() {
   return (neuron0x295cac0()*0.00654196);
}

double NNfunction_NN_3_5::synapse0x2980840() {
   return (neuron0x295ce00()*-0.0253977);
}

double NNfunction_NN_3_5::synapse0x2980880() {
   return (neuron0x295d140()*-0.00681675);
}

double NNfunction_NN_3_5::synapse0x29808c0() {
   return (neuron0x295d480()*-0.0631149);
}

double NNfunction_NN_3_5::synapse0x2980900() {
   return (neuron0x295d7c0()*0.619958);
}

double NNfunction_NN_3_5::synapse0x2980c80() {
   return (neuron0x2958c00()*-0.0156503);
}

double NNfunction_NN_3_5::synapse0x2980cc0() {
   return (neuron0x2958f40()*0.0131553);
}

double NNfunction_NN_3_5::synapse0x2980d00() {
   return (neuron0x2959280()*0.332331);
}

double NNfunction_NN_3_5::synapse0x2980d40() {
   return (neuron0x29595c0()*-0.0534736);
}

double NNfunction_NN_3_5::synapse0x2980d80() {
   return (neuron0x2959900()*0.00979505);
}

double NNfunction_NN_3_5::synapse0x2980dc0() {
   return (neuron0x2959c40()*-0.00917088);
}

double NNfunction_NN_3_5::synapse0x2980e00() {
   return (neuron0x2959f80()*-0.00212339);
}

double NNfunction_NN_3_5::synapse0x2980e40() {
   return (neuron0x295a2c0()*-0.00551405);
}

double NNfunction_NN_3_5::synapse0x2980e80() {
   return (neuron0x295a600()*0.0178061);
}

double NNfunction_NN_3_5::synapse0x2980ec0() {
   return (neuron0x295a940()*0.0102549);
}

double NNfunction_NN_3_5::synapse0x2980f00() {
   return (neuron0x295ac80()*0.0117434);
}

double NNfunction_NN_3_5::synapse0x2980f40() {
   return (neuron0x295afc0()*-0.128456);
}

double NNfunction_NN_3_5::synapse0x2980f80() {
   return (neuron0x295b300()*-0.0139875);
}

double NNfunction_NN_3_5::synapse0x2980fc0() {
   return (neuron0x295b640()*0.013752);
}

double NNfunction_NN_3_5::synapse0x2981000() {
   return (neuron0x295b980()*-0.0128854);
}

double NNfunction_NN_3_5::synapse0x2981040() {
   return (neuron0x295bcc0()*-0.0144849);
}

double NNfunction_NN_3_5::synapse0x2980ad0() {
   return (neuron0x295c000()*0.0265497);
}

double NNfunction_NN_3_5::synapse0x2980b10() {
   return (neuron0x295c560()*-0.0192074);
}

double NNfunction_NN_3_5::synapse0x2981190() {
   return (neuron0x295c780()*-0.0021893);
}

double NNfunction_NN_3_5::synapse0x29811d0() {
   return (neuron0x295cac0()*0.00922895);
}

double NNfunction_NN_3_5::synapse0x2981210() {
   return (neuron0x295ce00()*0.0121815);
}

double NNfunction_NN_3_5::synapse0x2981250() {
   return (neuron0x295d140()*-0.00996182);
}

double NNfunction_NN_3_5::synapse0x2981290() {
   return (neuron0x295d480()*0.00517329);
}

double NNfunction_NN_3_5::synapse0x29812d0() {
   return (neuron0x295d7c0()*-2.73289);
}

double NNfunction_NN_3_5::synapse0x2981650() {
   return (neuron0x2958c00()*-0.00329821);
}

double NNfunction_NN_3_5::synapse0x2981690() {
   return (neuron0x2958f40()*-6.04443);
}

double NNfunction_NN_3_5::synapse0x29816d0() {
   return (neuron0x2959280()*-0.476483);
}

double NNfunction_NN_3_5::synapse0x2981710() {
   return (neuron0x29595c0()*0.0017454);
}

double NNfunction_NN_3_5::synapse0x2981750() {
   return (neuron0x2959900()*0.018651);
}

double NNfunction_NN_3_5::synapse0x2981790() {
   return (neuron0x2959c40()*0.0045362);
}

double NNfunction_NN_3_5::synapse0x29817d0() {
   return (neuron0x2959f80()*0.00538429);
}

double NNfunction_NN_3_5::synapse0x2981810() {
   return (neuron0x295a2c0()*-0.000273426);
}

double NNfunction_NN_3_5::synapse0x2981850() {
   return (neuron0x295a600()*-0.010643);
}

double NNfunction_NN_3_5::synapse0x2981890() {
   return (neuron0x295a940()*-0.00479279);
}

double NNfunction_NN_3_5::synapse0x29818d0() {
   return (neuron0x295ac80()*-0.00118259);
}

double NNfunction_NN_3_5::synapse0x2981910() {
   return (neuron0x295afc0()*-0.0389969);
}

double NNfunction_NN_3_5::synapse0x2981950() {
   return (neuron0x295b300()*-0.00406165);
}

double NNfunction_NN_3_5::synapse0x2981990() {
   return (neuron0x295b640()*0.0010898);
}

double NNfunction_NN_3_5::synapse0x29819d0() {
   return (neuron0x295b980()*-0.00735378);
}

double NNfunction_NN_3_5::synapse0x2981a10() {
   return (neuron0x295bcc0()*0.001476);
}

double NNfunction_NN_3_5::synapse0x29814a0() {
   return (neuron0x295c000()*0.00133916);
}

double NNfunction_NN_3_5::synapse0x29814e0() {
   return (neuron0x295c560()*0.00125421);
}

double NNfunction_NN_3_5::synapse0x2981b60() {
   return (neuron0x295c780()*-0.00737511);
}

double NNfunction_NN_3_5::synapse0x2981ba0() {
   return (neuron0x295cac0()*-0.00741927);
}

double NNfunction_NN_3_5::synapse0x2981be0() {
   return (neuron0x295ce00()*0.00384851);
}

double NNfunction_NN_3_5::synapse0x2981c20() {
   return (neuron0x295d140()*0.0052065);
}

double NNfunction_NN_3_5::synapse0x2981c60() {
   return (neuron0x295d480()*-0.0091121);
}

double NNfunction_NN_3_5::synapse0x2981ca0() {
   return (neuron0x295d7c0()*0.65459);
}

double NNfunction_NN_3_5::synapse0x2982020() {
   return (neuron0x2958c00()*0.00328354);
}

double NNfunction_NN_3_5::synapse0x2982060() {
   return (neuron0x2958f40()*0.0515874);
}

double NNfunction_NN_3_5::synapse0x29820a0() {
   return (neuron0x2959280()*4.49803);
}

double NNfunction_NN_3_5::synapse0x29820e0() {
   return (neuron0x29595c0()*0.00908754);
}

double NNfunction_NN_3_5::synapse0x2982120() {
   return (neuron0x2959900()*-0.0249719);
}

double NNfunction_NN_3_5::synapse0x2982160() {
   return (neuron0x2959c40()*-0.0225001);
}

double NNfunction_NN_3_5::synapse0x29821a0() {
   return (neuron0x2959f80()*0.0176769);
}

double NNfunction_NN_3_5::synapse0x29821e0() {
   return (neuron0x295a2c0()*0.0468977);
}

double NNfunction_NN_3_5::synapse0x2982220() {
   return (neuron0x295a600()*-0.00292276);
}

double NNfunction_NN_3_5::synapse0x2982260() {
   return (neuron0x295a940()*-0.00788217);
}

double NNfunction_NN_3_5::synapse0x29822a0() {
   return (neuron0x295ac80()*-0.0329373);
}

double NNfunction_NN_3_5::synapse0x29822e0() {
   return (neuron0x295afc0()*0.321455);
}

double NNfunction_NN_3_5::synapse0x2982320() {
   return (neuron0x295b300()*0.105141);
}

double NNfunction_NN_3_5::synapse0x2982360() {
   return (neuron0x295b640()*0.031341);
}

double NNfunction_NN_3_5::synapse0x29823a0() {
   return (neuron0x295b980()*0.0940501);
}

double NNfunction_NN_3_5::synapse0x29823e0() {
   return (neuron0x295bcc0()*-0.0492188);
}

double NNfunction_NN_3_5::synapse0x2981e70() {
   return (neuron0x295c000()*-0.0370823);
}

double NNfunction_NN_3_5::synapse0x2981eb0() {
   return (neuron0x295c560()*0.0389647);
}

double NNfunction_NN_3_5::synapse0x2982530() {
   return (neuron0x295c780()*0.00160121);
}

double NNfunction_NN_3_5::synapse0x2982570() {
   return (neuron0x295cac0()*-0.0372744);
}

double NNfunction_NN_3_5::synapse0x29825b0() {
   return (neuron0x295ce00()*0.0190604);
}

double NNfunction_NN_3_5::synapse0x29825f0() {
   return (neuron0x295d140()*0.0094001);
}

double NNfunction_NN_3_5::synapse0x2982630() {
   return (neuron0x295d480()*0.025041);
}

double NNfunction_NN_3_5::synapse0x2982670() {
   return (neuron0x295d7c0()*-0.302806);
}

double NNfunction_NN_3_5::synapse0x295ec10() {
   return (neuron0x295dc60()*2.08468);
}

double NNfunction_NN_3_5::synapse0x295ec50() {
   return (neuron0x295e570()*0.513269);
}

double NNfunction_NN_3_5::synapse0x2960120() {
   return (neuron0x295f050()*0.461535);
}

double NNfunction_NN_3_5::synapse0x2960160() {
   return (neuron0x27188e0()*0.93098);
}

double NNfunction_NN_3_5::synapse0x2960af0() {
   return (neuron0x295fe70()*0.852189);
}

double NNfunction_NN_3_5::synapse0x2960b30() {
   return (neuron0x2960840()*-0.789316);
}

double NNfunction_NN_3_5::synapse0x29618c0() {
   return (neuron0x2961610()*-1.91703);
}

double NNfunction_NN_3_5::synapse0x2961900() {
   return (neuron0x2961fe0()*1.26936);
}

double NNfunction_NN_3_5::synapse0x2962290() {
   return (neuron0x29629b0()*1.046);
}

double NNfunction_NN_3_5::synapse0x29622d0() {
   return (neuron0x2963490()*-0.376711);
}

double NNfunction_NN_3_5::synapse0x2962c60() {
   return (neuron0x2963e60()*1.84183);
}

double NNfunction_NN_3_5::synapse0x2962ca0() {
   return (neuron0x2960f40()*1.23332);
}

double NNfunction_NN_3_5::synapse0x2963740() {
   return (neuron0x2965a10()*-1.21516);
}

double NNfunction_NN_3_5::synapse0x2963780() {
   return (neuron0x29663e0()*0.728094);
}

double NNfunction_NN_3_5::synapse0x2964110() {
   return (neuron0x2966db0()*-0.0112433);
}

double NNfunction_NN_3_5::synapse0x2964150() {
   return (neuron0x2967780()*1.52256);
}

double NNfunction_NN_3_5::synapse0x29611f0() {
   return (neuron0x2969590()*0.577825);
}

double NNfunction_NN_3_5::synapse0x2961230() {
   return (neuron0x2969870()*-1.04262);
}

double NNfunction_NN_3_5::synapse0x2965cc0() {
   return (neuron0x296a240()*0.723775);
}

double NNfunction_NN_3_5::synapse0x2965d00() {
   return (neuron0x296ac10()*-1.06883);
}

double NNfunction_NN_3_5::synapse0x2966690() {
   return (neuron0x296b5e0()*-0.0725949);
}

double NNfunction_NN_3_5::synapse0x29666d0() {
   return (neuron0x296bfb0()*-3.01125);
}

double NNfunction_NN_3_5::synapse0x2967060() {
   return (neuron0x2964b00()*0.876439);
}

double NNfunction_NN_3_5::synapse0x29670a0() {
   return (neuron0x29654d0()*0.0454655);
}

double NNfunction_NN_3_5::synapse0x2967a30() {
   return (neuron0x296ed40()*-0.0491625);
}

double NNfunction_NN_3_5::synapse0x2967a70() {
   return (neuron0x296f710()*0.230346);
}

double NNfunction_NN_3_5::synapse0x295bba0() {
   return (neuron0x29700e0()*-0.0700613);
}

double NNfunction_NN_3_5::synapse0x295bbe0() {
   return (neuron0x2970ab0()*-1.93543);
}

double NNfunction_NN_3_5::synapse0x2969b20() {
   return (neuron0x2971480()*0.608184);
}

double NNfunction_NN_3_5::synapse0x2969b60() {
   return (neuron0x2971e50()*-0.321609);
}

double NNfunction_NN_3_5::synapse0x296a4f0() {
   return (neuron0x2972820()*-0.605927);
}

double NNfunction_NN_3_5::synapse0x296a530() {
   return (neuron0x29731f0()*-1.19507);
}

double NNfunction_NN_3_5::synapse0x296aec0() {
   return (neuron0x2969280()*-2.58715);
}

double NNfunction_NN_3_5::synapse0x296af00() {
   return (neuron0x2975dd0()*-0.633664);
}

double NNfunction_NN_3_5::synapse0x296b890() {
   return (neuron0x29767a0()*-0.21883);
}

double NNfunction_NN_3_5::synapse0x296b8d0() {
   return (neuron0x2977170()*-0.584155);
}

double NNfunction_NN_3_5::synapse0x296c260() {
   return (neuron0x2977b40()*-0.460819);
}

double NNfunction_NN_3_5::synapse0x296c2a0() {
   return (neuron0x2978510()*0.283864);
}

double NNfunction_NN_3_5::synapse0x2964db0() {
   return (neuron0x2978ee0()*0.232873);
}

double NNfunction_NN_3_5::synapse0x2964df0() {
   return (neuron0x29798b0()*-0.134864);
}

double NNfunction_NN_3_5::synapse0x296e660() {
   return (neuron0x297a280()*0.0795282);
}

double NNfunction_NN_3_5::synapse0x296e6a0() {
   return (neuron0x297ae60()*0.165715);
}

double NNfunction_NN_3_5::synapse0x296eff0() {
   return (neuron0x297b830()*-3.82903);
}

double NNfunction_NN_3_5::synapse0x296f030() {
   return (neuron0x296c6b0()*0.628294);
}

double NNfunction_NN_3_5::synapse0x296f9c0() {
   return (neuron0x296d080()*-0.531879);
}

double NNfunction_NN_3_5::synapse0x296fa00() {
   return (neuron0x296da50()*2.8538);
}

double NNfunction_NN_3_5::synapse0x2970390() {
   return (neuron0x2980090()*0.668858);
}

double NNfunction_NN_3_5::synapse0x29703d0() {
   return (neuron0x2980940()*-1.82132);
}

double NNfunction_NN_3_5::synapse0x2970d60() {
   return (neuron0x2981310()*4.21165);
}

double NNfunction_NN_3_5::synapse0x2970da0() {
   return (neuron0x2981ce0()*0.814684);
}

double NNfunction_NN_3_5::synapse0x29734a0() {
   return (neuron0x295dc60()*-0.621805);
}

double NNfunction_NN_3_5::synapse0x29734e0() {
   return (neuron0x295e570()*-0.310696);
}

double NNfunction_NN_3_5::synapse0x2968a60() {
   return (neuron0x295f050()*0.00509344);
}

double NNfunction_NN_3_5::synapse0x2968aa0() {
   return (neuron0x27188e0()*-0.808262);
}

double NNfunction_NN_3_5::synapse0x2976080() {
   return (neuron0x295fe70()*-0.549433);
}

double NNfunction_NN_3_5::synapse0x29760c0() {
   return (neuron0x2960840()*0.829818);
}

double NNfunction_NN_3_5::synapse0x2976a50() {
   return (neuron0x2961610()*-0.169855);
}

double NNfunction_NN_3_5::synapse0x2976a90() {
   return (neuron0x2961fe0()*-0.749345);
}

double NNfunction_NN_3_5::synapse0x2977420() {
   return (neuron0x29629b0()*-1.6901);
}

double NNfunction_NN_3_5::synapse0x2977460() {
   return (neuron0x2963490()*0.0470322);
}

double NNfunction_NN_3_5::synapse0x2977df0() {
   return (neuron0x2963e60()*0.0145363);
}

double NNfunction_NN_3_5::synapse0x2977e30() {
   return (neuron0x2960f40()*0.170708);
}

double NNfunction_NN_3_5::synapse0x29787c0() {
   return (neuron0x2965a10()*-0.420957);
}

double NNfunction_NN_3_5::synapse0x2978800() {
   return (neuron0x29663e0()*-1.68508);
}

double NNfunction_NN_3_5::synapse0x2979190() {
   return (neuron0x2966db0()*0.254894);
}

double NNfunction_NN_3_5::synapse0x29791d0() {
   return (neuron0x2967780()*-1.07535);
}

double NNfunction_NN_3_5::synapse0x2979b60() {
   return (neuron0x2969590()*-0.353274);
}

double NNfunction_NN_3_5::synapse0x2979ba0() {
   return (neuron0x2969870()*0.0190905);
}

double NNfunction_NN_3_5::synapse0x297a530() {
   return (neuron0x296a240()*-0.534229);
}

double NNfunction_NN_3_5::synapse0x297a570() {
   return (neuron0x296ac10()*-1.46579);
}

double NNfunction_NN_3_5::synapse0x297b110() {
   return (neuron0x296b5e0()*-0.219232);
}

double NNfunction_NN_3_5::synapse0x297b150() {
   return (neuron0x296bfb0()*0.308734);
}

double NNfunction_NN_3_5::synapse0x297bae0() {
   return (neuron0x2964b00()*1.04028);
}

double NNfunction_NN_3_5::synapse0x297bb20() {
   return (neuron0x29654d0()*0.0395853);
}

double NNfunction_NN_3_5::synapse0x296c960() {
   return (neuron0x296ed40()*0.395094);
}

double NNfunction_NN_3_5::synapse0x296c9a0() {
   return (neuron0x296f710()*-1.37911);
}

double NNfunction_NN_3_5::synapse0x296d330() {
   return (neuron0x29700e0()*-0.0125803);
}

double NNfunction_NN_3_5::synapse0x296d370() {
   return (neuron0x2970ab0()*0.0303565);
}

double NNfunction_NN_3_5::synapse0x296dd00() {
   return (neuron0x2971480()*0.927266);
}

double NNfunction_NN_3_5::synapse0x296dd40() {
   return (neuron0x2971e50()*0.153216);
}

double NNfunction_NN_3_5::synapse0x2980220() {
   return (neuron0x2972820()*0.248967);
}

double NNfunction_NN_3_5::synapse0x2980260() {
   return (neuron0x29731f0()*0.34502);
}

double NNfunction_NN_3_5::synapse0x2980bf0() {
   return (neuron0x2969280()*0.642771);
}

double NNfunction_NN_3_5::synapse0x2980c30() {
   return (neuron0x2975dd0()*0.158713);
}

double NNfunction_NN_3_5::synapse0x29815c0() {
   return (neuron0x29767a0()*-0.986996);
}

double NNfunction_NN_3_5::synapse0x2981600() {
   return (neuron0x2977170()*3.20301);
}

double NNfunction_NN_3_5::synapse0x2981f90() {
   return (neuron0x2977b40()*0.256507);
}

double NNfunction_NN_3_5::synapse0x2981fd0() {
   return (neuron0x2978510()*-0.110057);
}

double NNfunction_NN_3_5::synapse0x295de80() {
   return (neuron0x2978ee0()*-0.471419);
}

double NNfunction_NN_3_5::synapse0x295dec0() {
   return (neuron0x29798b0()*0.264368);
}

double NNfunction_NN_3_5::synapse0x2971730() {
   return (neuron0x297a280()*-0.0468516);
}

double NNfunction_NN_3_5::synapse0x2971770() {
   return (neuron0x297ae60()*0.398593);
}

double NNfunction_NN_3_5::synapse0x29826b0() {
   return (neuron0x297b830()*-1.43117);
}

double NNfunction_NN_3_5::synapse0x29826f0() {
   return (neuron0x296c6b0()*-0.462522);
}

double NNfunction_NN_3_5::synapse0x2982730() {
   return (neuron0x296d080()*0.185315);
}

double NNfunction_NN_3_5::synapse0x2982770() {
   return (neuron0x296da50()*-0.703961);
}

double NNfunction_NN_3_5::synapse0x2989620() {
   return (neuron0x2980090()*-0.297771);
}

double NNfunction_NN_3_5::synapse0x2989660() {
   return (neuron0x2980940()*1.94645);
}

double NNfunction_NN_3_5::synapse0x29896a0() {
   return (neuron0x2981310()*0.80786);
}

double NNfunction_NN_3_5::synapse0x29896e0() {
   return (neuron0x2981ce0()*-0.456334);
}

double NNfunction_NN_3_5::synapse0x2989a60() {
   return (neuron0x295dc60()*0.641422);
}

double NNfunction_NN_3_5::synapse0x2989aa0() {
   return (neuron0x295e570()*0.198313);
}

double NNfunction_NN_3_5::synapse0x2989ae0() {
   return (neuron0x295f050()*0.781728);
}

double NNfunction_NN_3_5::synapse0x2989b20() {
   return (neuron0x27188e0()*0.0809379);
}

double NNfunction_NN_3_5::synapse0x2989b60() {
   return (neuron0x295fe70()*0.507465);
}

double NNfunction_NN_3_5::synapse0x2989ba0() {
   return (neuron0x2960840()*0.0133334);
}

double NNfunction_NN_3_5::synapse0x2989be0() {
   return (neuron0x2961610()*0.142078);
}

double NNfunction_NN_3_5::synapse0x2989c20() {
   return (neuron0x2961fe0()*0.146998);
}

double NNfunction_NN_3_5::synapse0x2989c60() {
   return (neuron0x29629b0()*0.473729);
}

double NNfunction_NN_3_5::synapse0x2989ca0() {
   return (neuron0x2963490()*0.808288);
}

double NNfunction_NN_3_5::synapse0x2989ce0() {
   return (neuron0x2963e60()*-0.237884);
}

double NNfunction_NN_3_5::synapse0x2989d20() {
   return (neuron0x2960f40()*0.326379);
}

double NNfunction_NN_3_5::synapse0x2989d60() {
   return (neuron0x2965a10()*0.874892);
}

double NNfunction_NN_3_5::synapse0x2989da0() {
   return (neuron0x29663e0()*0.410025);
}

double NNfunction_NN_3_5::synapse0x2989de0() {
   return (neuron0x2966db0()*0.979615);
}

double NNfunction_NN_3_5::synapse0x2989e20() {
   return (neuron0x2967780()*-0.0892138);
}

double NNfunction_NN_3_5::synapse0x29898b0() {
   return (neuron0x2969590()*0.219181);
}

double NNfunction_NN_3_5::synapse0x29898f0() {
   return (neuron0x2969870()*-0.00460896);
}

double NNfunction_NN_3_5::synapse0x2989f70() {
   return (neuron0x296a240()*0.0504252);
}

double NNfunction_NN_3_5::synapse0x2989fb0() {
   return (neuron0x296ac10()*0.448271);
}

double NNfunction_NN_3_5::synapse0x2989ff0() {
   return (neuron0x296b5e0()*0.385264);
}

double NNfunction_NN_3_5::synapse0x298a030() {
   return (neuron0x296bfb0()*0.179113);
}

double NNfunction_NN_3_5::synapse0x298a070() {
   return (neuron0x2964b00()*0.524526);
}

double NNfunction_NN_3_5::synapse0x298a0b0() {
   return (neuron0x29654d0()*0.483242);
}

double NNfunction_NN_3_5::synapse0x298a0f0() {
   return (neuron0x296ed40()*0.155551);
}

double NNfunction_NN_3_5::synapse0x298a130() {
   return (neuron0x296f710()*0.505811);
}

double NNfunction_NN_3_5::synapse0x298a170() {
   return (neuron0x29700e0()*0.372492);
}

double NNfunction_NN_3_5::synapse0x298a1b0() {
   return (neuron0x2970ab0()*0.919195);
}

double NNfunction_NN_3_5::synapse0x298a1f0() {
   return (neuron0x2971480()*0.736212);
}

double NNfunction_NN_3_5::synapse0x298a230() {
   return (neuron0x2971e50()*0.233295);
}

double NNfunction_NN_3_5::synapse0x298a270() {
   return (neuron0x2972820()*0.462051);
}

double NNfunction_NN_3_5::synapse0x298a2b0() {
   return (neuron0x29731f0()*0.360434);
}

double NNfunction_NN_3_5::synapse0x2989e60() {
   return (neuron0x2969280()*0.340796);
}

double NNfunction_NN_3_5::synapse0x2989ea0() {
   return (neuron0x2975dd0()*0.797189);
}

double NNfunction_NN_3_5::synapse0x2989ee0() {
   return (neuron0x29767a0()*0.777066);
}

double NNfunction_NN_3_5::synapse0x2989f20() {
   return (neuron0x2977170()*0.647805);
}

double NNfunction_NN_3_5::synapse0x298a500() {
   return (neuron0x2977b40()*0.713796);
}

double NNfunction_NN_3_5::synapse0x298a540() {
   return (neuron0x2978510()*0.295928);
}

double NNfunction_NN_3_5::synapse0x298a580() {
   return (neuron0x2978ee0()*0.776561);
}

double NNfunction_NN_3_5::synapse0x298a5c0() {
   return (neuron0x29798b0()*0.876683);
}

double NNfunction_NN_3_5::synapse0x298a600() {
   return (neuron0x297a280()*0.66854);
}

double NNfunction_NN_3_5::synapse0x298a640() {
   return (neuron0x297ae60()*0.76354);
}

double NNfunction_NN_3_5::synapse0x298a680() {
   return (neuron0x297b830()*0.434782);
}

double NNfunction_NN_3_5::synapse0x298a6c0() {
   return (neuron0x296c6b0()*0.192183);
}

double NNfunction_NN_3_5::synapse0x298a700() {
   return (neuron0x296d080()*0.582377);
}

double NNfunction_NN_3_5::synapse0x298a740() {
   return (neuron0x296da50()*0.574474);
}

double NNfunction_NN_3_5::synapse0x298a780() {
   return (neuron0x2980090()*0.283609);
}

double NNfunction_NN_3_5::synapse0x298a7c0() {
   return (neuron0x2980940()*0.195288);
}

double NNfunction_NN_3_5::synapse0x298a800() {
   return (neuron0x2981310()*0.146377);
}

double NNfunction_NN_3_5::synapse0x298a840() {
   return (neuron0x2981ce0()*0.482062);
}

double NNfunction_NN_3_5::synapse0x298abc0() {
   return (neuron0x295dc60()*1.12393);
}

double NNfunction_NN_3_5::synapse0x298ac00() {
   return (neuron0x295e570()*-0.868963);
}

double NNfunction_NN_3_5::synapse0x298ac40() {
   return (neuron0x295f050()*0.398387);
}

double NNfunction_NN_3_5::synapse0x298ac80() {
   return (neuron0x27188e0()*1.7097);
}

double NNfunction_NN_3_5::synapse0x298acc0() {
   return (neuron0x295fe70()*-1.33101);
}

double NNfunction_NN_3_5::synapse0x298ad00() {
   return (neuron0x2960840()*0.0240338);
}

double NNfunction_NN_3_5::synapse0x298ad40() {
   return (neuron0x2961610()*4.71519);
}

double NNfunction_NN_3_5::synapse0x298ad80() {
   return (neuron0x2961fe0()*-0.890073);
}

double NNfunction_NN_3_5::synapse0x298adc0() {
   return (neuron0x29629b0()*0.292458);
}

double NNfunction_NN_3_5::synapse0x298ae00() {
   return (neuron0x2963490()*-3.83792);
}

double NNfunction_NN_3_5::synapse0x298ae40() {
   return (neuron0x2963e60()*-2.74149);
}

double NNfunction_NN_3_5::synapse0x298ae80() {
   return (neuron0x2960f40()*-0.784798);
}

double NNfunction_NN_3_5::synapse0x298aec0() {
   return (neuron0x2965a10()*0.416765);
}

double NNfunction_NN_3_5::synapse0x298af00() {
   return (neuron0x29663e0()*-0.694528);
}

double NNfunction_NN_3_5::synapse0x298af40() {
   return (neuron0x2966db0()*-0.672261);
}

double NNfunction_NN_3_5::synapse0x298af80() {
   return (neuron0x2967780()*-1.07622);
}

double NNfunction_NN_3_5::synapse0x298aa10() {
   return (neuron0x2969590()*-0.775232);
}

double NNfunction_NN_3_5::synapse0x298aa50() {
   return (neuron0x2969870()*0.53449);
}

double NNfunction_NN_3_5::synapse0x298b0d0() {
   return (neuron0x296a240()*-1.82938);
}

double NNfunction_NN_3_5::synapse0x298b110() {
   return (neuron0x296ac10()*0.453585);
}

double NNfunction_NN_3_5::synapse0x298b150() {
   return (neuron0x296b5e0()*-0.220325);
}

double NNfunction_NN_3_5::synapse0x298b190() {
   return (neuron0x296bfb0()*0.670277);
}

double NNfunction_NN_3_5::synapse0x298b1d0() {
   return (neuron0x2964b00()*0.0301596);
}

double NNfunction_NN_3_5::synapse0x298b210() {
   return (neuron0x29654d0()*-0.362646);
}

double NNfunction_NN_3_5::synapse0x298b250() {
   return (neuron0x296ed40()*0.636026);
}

double NNfunction_NN_3_5::synapse0x298b290() {
   return (neuron0x296f710()*-1.14372);
}

double NNfunction_NN_3_5::synapse0x298b2d0() {
   return (neuron0x29700e0()*-0.289719);
}

double NNfunction_NN_3_5::synapse0x298b310() {
   return (neuron0x2970ab0()*6.05105);
}

double NNfunction_NN_3_5::synapse0x298b350() {
   return (neuron0x2971480()*0.914605);
}

double NNfunction_NN_3_5::synapse0x298b390() {
   return (neuron0x2971e50()*-1.27289);
}

double NNfunction_NN_3_5::synapse0x298b3d0() {
   return (neuron0x2972820()*0.420305);
}

double NNfunction_NN_3_5::synapse0x298b410() {
   return (neuron0x29731f0()*0.100439);
}

double NNfunction_NN_3_5::synapse0x298afc0() {
   return (neuron0x2969280()*-0.265776);
}

double NNfunction_NN_3_5::synapse0x298b000() {
   return (neuron0x2975dd0()*0.338655);
}

double NNfunction_NN_3_5::synapse0x298b040() {
   return (neuron0x29767a0()*-0.786334);
}

double NNfunction_NN_3_5::synapse0x298b080() {
   return (neuron0x2977170()*1.76565);
}

double NNfunction_NN_3_5::synapse0x298b660() {
   return (neuron0x2977b40()*0.732503);
}

double NNfunction_NN_3_5::synapse0x298b6a0() {
   return (neuron0x2978510()*0.978806);
}

double NNfunction_NN_3_5::synapse0x298b6e0() {
   return (neuron0x2978ee0()*-0.0484141);
}

double NNfunction_NN_3_5::synapse0x298b720() {
   return (neuron0x29798b0()*1.11931);
}

double NNfunction_NN_3_5::synapse0x298b760() {
   return (neuron0x297a280()*-0.417774);
}

double NNfunction_NN_3_5::synapse0x298b7a0() {
   return (neuron0x297ae60()*0.48719);
}

double NNfunction_NN_3_5::synapse0x298b7e0() {
   return (neuron0x297b830()*1.10884);
}

double NNfunction_NN_3_5::synapse0x298b820() {
   return (neuron0x296c6b0()*-1.84583);
}

double NNfunction_NN_3_5::synapse0x298b860() {
   return (neuron0x296d080()*0.756079);
}

double NNfunction_NN_3_5::synapse0x298b8a0() {
   return (neuron0x296da50()*1.32617);
}

double NNfunction_NN_3_5::synapse0x298b8e0() {
   return (neuron0x2980090()*-0.494797);
}

double NNfunction_NN_3_5::synapse0x298b920() {
   return (neuron0x2980940()*0.473774);
}

double NNfunction_NN_3_5::synapse0x298b960() {
   return (neuron0x2981310()*-1.61361);
}

double NNfunction_NN_3_5::synapse0x298b9a0() {
   return (neuron0x2981ce0()*0.721973);
}

double NNfunction_NN_3_5::synapse0x298bd20() {
   return (neuron0x295dc60()*0.481024);
}

double NNfunction_NN_3_5::synapse0x298bd60() {
   return (neuron0x295e570()*-0.523445);
}

double NNfunction_NN_3_5::synapse0x298bda0() {
   return (neuron0x295f050()*2.84767);
}

double NNfunction_NN_3_5::synapse0x298bde0() {
   return (neuron0x27188e0()*-2.14124);
}

double NNfunction_NN_3_5::synapse0x298be20() {
   return (neuron0x295fe70()*-0.633714);
}

double NNfunction_NN_3_5::synapse0x298be60() {
   return (neuron0x2960840()*3.05263);
}

double NNfunction_NN_3_5::synapse0x298bea0() {
   return (neuron0x2961610()*2.53514);
}

double NNfunction_NN_3_5::synapse0x298bee0() {
   return (neuron0x2961fe0()*-0.839988);
}

double NNfunction_NN_3_5::synapse0x298bf20() {
   return (neuron0x29629b0()*-2.52272);
}

double NNfunction_NN_3_5::synapse0x298bf60() {
   return (neuron0x2963490()*-2.17969);
}

double NNfunction_NN_3_5::synapse0x298bfa0() {
   return (neuron0x2963e60()*-2.04273);
}

double NNfunction_NN_3_5::synapse0x298bfe0() {
   return (neuron0x2960f40()*-0.309103);
}

double NNfunction_NN_3_5::synapse0x298c020() {
   return (neuron0x2965a10()*0.678456);
}

double NNfunction_NN_3_5::synapse0x298c060() {
   return (neuron0x29663e0()*-0.52283);
}

double NNfunction_NN_3_5::synapse0x298c0a0() {
   return (neuron0x2966db0()*-0.871235);
}

double NNfunction_NN_3_5::synapse0x298c0e0() {
   return (neuron0x2967780()*-1.43243);
}

double NNfunction_NN_3_5::synapse0x298bb70() {
   return (neuron0x2969590()*-0.607619);
}

double NNfunction_NN_3_5::synapse0x298bbb0() {
   return (neuron0x2969870()*0.134896);
}

double NNfunction_NN_3_5::synapse0x298c230() {
   return (neuron0x296a240()*-0.899019);
}

double NNfunction_NN_3_5::synapse0x298c270() {
   return (neuron0x296ac10()*0.19827);
}

double NNfunction_NN_3_5::synapse0x298c2b0() {
   return (neuron0x296b5e0()*-0.403876);
}

double NNfunction_NN_3_5::synapse0x298c2f0() {
   return (neuron0x296bfb0()*1.97763);
}

double NNfunction_NN_3_5::synapse0x298c330() {
   return (neuron0x2964b00()*1.60965);
}

double NNfunction_NN_3_5::synapse0x298c370() {
   return (neuron0x29654d0()*-0.851918);
}

double NNfunction_NN_3_5::synapse0x298c3b0() {
   return (neuron0x296ed40()*1.95773);
}

double NNfunction_NN_3_5::synapse0x298c3f0() {
   return (neuron0x296f710()*-0.61701);
}

double NNfunction_NN_3_5::synapse0x298c430() {
   return (neuron0x29700e0()*-0.462475);
}

double NNfunction_NN_3_5::synapse0x298c470() {
   return (neuron0x2970ab0()*2.20047);
}

double NNfunction_NN_3_5::synapse0x298c4b0() {
   return (neuron0x2971480()*-0.764991);
}

double NNfunction_NN_3_5::synapse0x298c4f0() {
   return (neuron0x2971e50()*-0.218005);
}

double NNfunction_NN_3_5::synapse0x298c530() {
   return (neuron0x2972820()*0.777135);
}

double NNfunction_NN_3_5::synapse0x298c570() {
   return (neuron0x29731f0()*0.518859);
}

double NNfunction_NN_3_5::synapse0x298c120() {
   return (neuron0x2969280()*-0.187378);
}

double NNfunction_NN_3_5::synapse0x298c160() {
   return (neuron0x2975dd0()*0.79984);
}

double NNfunction_NN_3_5::synapse0x298c1a0() {
   return (neuron0x29767a0()*0.400619);
}

double NNfunction_NN_3_5::synapse0x298c1e0() {
   return (neuron0x2977170()*0.766953);
}

double NNfunction_NN_3_5::synapse0x298c7c0() {
   return (neuron0x2977b40()*0.934076);
}

double NNfunction_NN_3_5::synapse0x298c800() {
   return (neuron0x2978510()*0.307638);
}

double NNfunction_NN_3_5::synapse0x298c840() {
   return (neuron0x2978ee0()*0.233306);
}

double NNfunction_NN_3_5::synapse0x298c880() {
   return (neuron0x29798b0()*-0.316232);
}

double NNfunction_NN_3_5::synapse0x298c8c0() {
   return (neuron0x297a280()*-0.201772);
}

double NNfunction_NN_3_5::synapse0x298c900() {
   return (neuron0x297ae60()*0.740965);
}

double NNfunction_NN_3_5::synapse0x298c940() {
   return (neuron0x297b830()*-0.765413);
}

double NNfunction_NN_3_5::synapse0x298c980() {
   return (neuron0x296c6b0()*0.911295);
}

double NNfunction_NN_3_5::synapse0x298c9c0() {
   return (neuron0x296d080()*-0.104226);
}

double NNfunction_NN_3_5::synapse0x298ca00() {
   return (neuron0x296da50()*-0.0789632);
}

double NNfunction_NN_3_5::synapse0x298ca40() {
   return (neuron0x2980090()*-1.12606);
}

double NNfunction_NN_3_5::synapse0x298ca80() {
   return (neuron0x2980940()*-1.59986);
}

double NNfunction_NN_3_5::synapse0x298cac0() {
   return (neuron0x2981310()*0.129463);
}

double NNfunction_NN_3_5::synapse0x298cb00() {
   return (neuron0x2981ce0()*-0.254663);
}

double NNfunction_NN_3_5::synapse0x295dc20() {
   return (neuron0x2988ee0()*-7.83219);
}

double NNfunction_NN_3_5::synapse0x298cd60() {
   return (neuron0x2989280()*-11.1085);
}

double NNfunction_NN_3_5::synapse0x298cda0() {
   return (neuron0x2989720()*1.76723);
}

double NNfunction_NN_3_5::synapse0x298cde0() {
   return (neuron0x298a880()*-3.58224);
}

double NNfunction_NN_3_5::synapse0x298ce20() {
   return (neuron0x298b9e0()*6.97103);
}

