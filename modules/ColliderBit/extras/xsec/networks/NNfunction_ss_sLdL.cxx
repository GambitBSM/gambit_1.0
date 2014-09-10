#include "NNfunction_ss_sLdL.h"
#include <cmath>

double NNfunction_ss_sLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.785)/15.02;
   input1 = (in1 - 58.1004)/718.94;
   input2 = (in2 - 368.413)/461.401;
   input3 = (in3 - 291.804)/592.976;
   input4 = (in4 - 720.663)/661.886;
   input5 = (in5 - 628.864)/642.327;
   input6 = (in6 - 632.309)/643.638;
   input7 = (in7 - 630.06)/644.883;
   input8 = (in8 - 631.894)/679.863;
   input9 = (in9 - 619.712)/662.82;
   input10 = (in10 - 627.796)/688.602;
   input11 = (in11 - 543.395)/315.582;
   input12 = (in12 - 543.879)/315.891;
   input13 = (in13 - 534.093)/352.485;
   input14 = (in14 - 671.172)/524.453;
   input15 = (in15 - 671.876)/525.766;
   input16 = (in16 - 476.674)/369.734;
   input17 = (in17 - 697.644)/593.566;
   input18 = (in18 - 692.473)/592.098;
   input19 = (in19 - 692.937)/581.985;
   input20 = (in20 - -224.441)/405.278;
   input21 = (in21 - -290.125)/875.027;
   input22 = (in22 - 1.47848)/873.811;
   input23 = (in23 - -2.60194)/495.739;
   switch(index) {
     case 0:
         return neuron0x1b9c280();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLdL::Value(int index, double* input) {
   input0 = (input[0] - 22.785)/15.02;
   input1 = (input[1] - 58.1004)/718.94;
   input2 = (input[2] - 368.413)/461.401;
   input3 = (input[3] - 291.804)/592.976;
   input4 = (input[4] - 720.663)/661.886;
   input5 = (input[5] - 628.864)/642.327;
   input6 = (input[6] - 632.309)/643.638;
   input7 = (input[7] - 630.06)/644.883;
   input8 = (input[8] - 631.894)/679.863;
   input9 = (input[9] - 619.712)/662.82;
   input10 = (input[10] - 627.796)/688.602;
   input11 = (input[11] - 543.395)/315.582;
   input12 = (input[12] - 543.879)/315.891;
   input13 = (input[13] - 534.093)/352.485;
   input14 = (input[14] - 671.172)/524.453;
   input15 = (input[15] - 671.876)/525.766;
   input16 = (input[16] - 476.674)/369.734;
   input17 = (input[17] - 697.644)/593.566;
   input18 = (input[18] - 692.473)/592.098;
   input19 = (input[19] - 692.937)/581.985;
   input20 = (input[20] - -224.441)/405.278;
   input21 = (input[21] - -290.125)/875.027;
   input22 = (input[22] - 1.47848)/873.811;
   input23 = (input[23] - -2.60194)/495.739;
   switch(index) {
     case 0:
         return neuron0x1b9c280();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLdL::neuron0x1b68370() {
   return input0;
}

double NNfunction_ss_sLdL::neuron0x1b686b0() {
   return input1;
}

double NNfunction_ss_sLdL::neuron0x1b689f0() {
   return input2;
}

double NNfunction_ss_sLdL::neuron0x1b68d30() {
   return input3;
}

double NNfunction_ss_sLdL::neuron0x1b69070() {
   return input4;
}

double NNfunction_ss_sLdL::neuron0x1b693b0() {
   return input5;
}

double NNfunction_ss_sLdL::neuron0x1b696f0() {
   return input6;
}

double NNfunction_ss_sLdL::neuron0x1b69a30() {
   return input7;
}

double NNfunction_ss_sLdL::neuron0x1b69d70() {
   return input8;
}

double NNfunction_ss_sLdL::neuron0x1b6a0b0() {
   return input9;
}

double NNfunction_ss_sLdL::neuron0x1b6a3f0() {
   return input10;
}

double NNfunction_ss_sLdL::neuron0x1b6a730() {
   return input11;
}

double NNfunction_ss_sLdL::neuron0x1b6aa70() {
   return input12;
}

double NNfunction_ss_sLdL::neuron0x1b6adb0() {
   return input13;
}

double NNfunction_ss_sLdL::neuron0x1b6b0f0() {
   return input14;
}

double NNfunction_ss_sLdL::neuron0x1b6b430() {
   return input15;
}

double NNfunction_ss_sLdL::neuron0x1b6b770() {
   return input16;
}

double NNfunction_ss_sLdL::neuron0x1b6bcd0() {
   return input17;
}

double NNfunction_ss_sLdL::neuron0x1b6bef0() {
   return input18;
}

double NNfunction_ss_sLdL::neuron0x1b6c230() {
   return input19;
}

double NNfunction_ss_sLdL::neuron0x1b6c570() {
   return input20;
}

double NNfunction_ss_sLdL::neuron0x1b6c8b0() {
   return input21;
}

double NNfunction_ss_sLdL::neuron0x1b6cbf0() {
   return input22;
}

double NNfunction_ss_sLdL::neuron0x1b6cf30() {
   return input23;
}

double NNfunction_ss_sLdL::input0x1b6d3a0() {
   double input = -0.676584;
   input += synapse0x1b68230();
   input += synapse0x1b68270();
   input += synapse0x1b6d650();
   input += synapse0x1b6d690();
   input += synapse0x1b6d6d0();
   input += synapse0x1b6d710();
   input += synapse0x1b6d750();
   input += synapse0x1b6d790();
   input += synapse0x1b6d7d0();
   input += synapse0x1b6d810();
   input += synapse0x1b6d850();
   input += synapse0x1b6d890();
   input += synapse0x1b6d8d0();
   input += synapse0x1b6d910();
   input += synapse0x1b6d950();
   input += synapse0x1b6d990();
   input += synapse0x1b681a0();
   input += synapse0x1b681e0();
   input += synapse0x1923560();
   input += synapse0x19235a0();
   input += synapse0x1b6dbf0();
   input += synapse0x1b6dc30();
   input += synapse0x1b6dc70();
   input += synapse0x1b6dcb0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b6d3a0() {
   double input = input0x1b6d3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b6dcf0() {
   double input = 0.0661992;
   input += synapse0x1b6e030();
   input += synapse0x1b6e070();
   input += synapse0x1b6e0b0();
   input += synapse0x1b6e0f0();
   input += synapse0x1b6e130();
   input += synapse0x1b6e170();
   input += synapse0x1b6e1b0();
   input += synapse0x1b6e1f0();
   input += synapse0x1b6e230();
   input += synapse0x1b6dae0();
   input += synapse0x1b6db20();
   input += synapse0x1b6db60();
   input += synapse0x1b6dba0();
   input += synapse0x1b6e480();
   input += synapse0x1b6e4c0();
   input += synapse0x1b6e500();
   input += synapse0x1b6de80();
   input += synapse0x1b6dec0();
   input += synapse0x1b6e650();
   input += synapse0x1b6e690();
   input += synapse0x1b6e6d0();
   input += synapse0x1b6e710();
   input += synapse0x1b6e750();
   input += synapse0x1b6e790();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b6dcf0() {
   double input = input0x1b6dcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b6e7d0() {
   double input = 0.88685;
   input += synapse0x1b6eb10();
   input += synapse0x1b6eb50();
   input += synapse0x1b6eb90();
   input += synapse0x1b6ebd0();
   input += synapse0x1b6ec10();
   input += synapse0x1b6ec50();
   input += synapse0x1b6ec90();
   input += synapse0x1b6ecd0();
   input += synapse0x1b6ed10();
   input += synapse0x1b6ed50();
   input += synapse0x1b6ed90();
   input += synapse0x1b6edd0();
   input += synapse0x1b6ee10();
   input += synapse0x1b6ee50();
   input += synapse0x1b6ee90();
   input += synapse0x1b6eed0();
   input += synapse0x1b6e960();
   input += synapse0x1b6e9a0();
   input += synapse0x1923c00();
   input += synapse0x19314d0();
   input += synapse0x1931510();
   input += synapse0x1b57400();
   input += synapse0x1b57440();
   input += synapse0x1b57480();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b6e7d0() {
   double input = input0x1b6e7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b6e270() {
   double input = 1.3092;
   input += synapse0x1931d50();
   input += synapse0x1b6e400();
   input += synapse0x1b6e440();
   input += synapse0x1b6f020();
   input += synapse0x1b6f060();
   input += synapse0x1b6f0a0();
   input += synapse0x1b6f0e0();
   input += synapse0x1b6f120();
   input += synapse0x1b6f160();
   input += synapse0x1b6f1a0();
   input += synapse0x1b6f1e0();
   input += synapse0x1b6f220();
   input += synapse0x1b6f260();
   input += synapse0x1b6f2a0();
   input += synapse0x1b6f2e0();
   input += synapse0x1b6f320();
   input += synapse0x1b682b0();
   input += synapse0x1b682f0();
   input += synapse0x1b68330();
   input += synapse0x1b6f470();
   input += synapse0x1b6f4b0();
   input += synapse0x1b6f4f0();
   input += synapse0x1b6f530();
   input += synapse0x1b6f570();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b6e270() {
   double input = input0x1b6e270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b6f5b0() {
   double input = 3.07074;
   input += synapse0x1b6f8f0();
   input += synapse0x1b6f930();
   input += synapse0x1b6f970();
   input += synapse0x1b6f9b0();
   input += synapse0x1b6f9f0();
   input += synapse0x1b6fa30();
   input += synapse0x1b6fa70();
   input += synapse0x1b6fab0();
   input += synapse0x1b6faf0();
   input += synapse0x1b6fb30();
   input += synapse0x1b6fb70();
   input += synapse0x1b6fbb0();
   input += synapse0x1b6fbf0();
   input += synapse0x1b6fc30();
   input += synapse0x1b6fc70();
   input += synapse0x1b6fcb0();
   input += synapse0x1b6f740();
   input += synapse0x1b6f780();
   input += synapse0x1b6fe00();
   input += synapse0x1b6fe40();
   input += synapse0x1b6fe80();
   input += synapse0x1b6fec0();
   input += synapse0x1b6ff00();
   input += synapse0x1b6ff40();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b6f5b0() {
   double input = input0x1b6f5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b6ff80() {
   double input = -0.000860544;
   input += synapse0x1b702c0();
   input += synapse0x1b70300();
   input += synapse0x1b70340();
   input += synapse0x1b70380();
   input += synapse0x1b703c0();
   input += synapse0x1b70400();
   input += synapse0x1b70440();
   input += synapse0x1b70480();
   input += synapse0x1b704c0();
   input += synapse0x1931820();
   input += synapse0x1931860();
   input += synapse0x19318a0();
   input += synapse0x19318e0();
   input += synapse0x1931920();
   input += synapse0x1931960();
   input += synapse0x19319a0();
   input += synapse0x1b70110();
   input += synapse0x1b70150();
   input += synapse0x1931af0();
   input += synapse0x1931b30();
   input += synapse0x1931b70();
   input += synapse0x1931bb0();
   input += synapse0x1931bf0();
   input += synapse0x1b70d10();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b6ff80() {
   double input = input0x1b6ff80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b70d50() {
   double input = -0.0537898;
   input += synapse0x1b71090();
   input += synapse0x1b710d0();
   input += synapse0x1b71110();
   input += synapse0x1b71150();
   input += synapse0x1b71190();
   input += synapse0x1b711d0();
   input += synapse0x1b71210();
   input += synapse0x1b71250();
   input += synapse0x1b71290();
   input += synapse0x1b712d0();
   input += synapse0x1b71310();
   input += synapse0x1b71350();
   input += synapse0x1b71390();
   input += synapse0x1b713d0();
   input += synapse0x1b71410();
   input += synapse0x1b71450();
   input += synapse0x1b70ee0();
   input += synapse0x1b70f20();
   input += synapse0x1b715a0();
   input += synapse0x1b715e0();
   input += synapse0x1b71620();
   input += synapse0x1b71660();
   input += synapse0x1b716a0();
   input += synapse0x1b716e0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b70d50() {
   double input = input0x1b70d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b71720() {
   double input = 0.0293393;
   input += synapse0x1b71a60();
   input += synapse0x1b71aa0();
   input += synapse0x1b71ae0();
   input += synapse0x1b71b20();
   input += synapse0x1b71b60();
   input += synapse0x1b71ba0();
   input += synapse0x1b71be0();
   input += synapse0x1b71c20();
   input += synapse0x1b71c60();
   input += synapse0x1b71ca0();
   input += synapse0x1b71ce0();
   input += synapse0x1b71d20();
   input += synapse0x1b71d60();
   input += synapse0x1b71da0();
   input += synapse0x1b71de0();
   input += synapse0x1b71e20();
   input += synapse0x1b718b0();
   input += synapse0x1b718f0();
   input += synapse0x1b71f70();
   input += synapse0x1b71fb0();
   input += synapse0x1b71ff0();
   input += synapse0x1b72030();
   input += synapse0x1b72070();
   input += synapse0x1b720b0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b71720() {
   double input = input0x1b71720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b720f0() {
   double input = -0.873424;
   input += synapse0x1b6bbc0();
   input += synapse0x1b6bc00();
   input += synapse0x1b6bc40();
   input += synapse0x1b6bc80();
   input += synapse0x1b72640();
   input += synapse0x1b72680();
   input += synapse0x1b726c0();
   input += synapse0x1b72700();
   input += synapse0x1b72740();
   input += synapse0x1b72780();
   input += synapse0x1b727c0();
   input += synapse0x1b72800();
   input += synapse0x1b72840();
   input += synapse0x1b72880();
   input += synapse0x1b728c0();
   input += synapse0x1b72900();
   input += synapse0x1b72280();
   input += synapse0x1b722c0();
   input += synapse0x1b72a50();
   input += synapse0x1b72a90();
   input += synapse0x1b72ad0();
   input += synapse0x1b72b10();
   input += synapse0x1b72b50();
   input += synapse0x1b72b90();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b720f0() {
   double input = input0x1b720f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b72bd0() {
   double input = -0.8595;
   input += synapse0x1b72f10();
   input += synapse0x1b72f50();
   input += synapse0x1b72f90();
   input += synapse0x1b72fd0();
   input += synapse0x1b73010();
   input += synapse0x1b73050();
   input += synapse0x1b73090();
   input += synapse0x1b730d0();
   input += synapse0x1b73110();
   input += synapse0x1b73150();
   input += synapse0x1b73190();
   input += synapse0x1b731d0();
   input += synapse0x1b73210();
   input += synapse0x1b73250();
   input += synapse0x1b73290();
   input += synapse0x1b732d0();
   input += synapse0x1b72d60();
   input += synapse0x1b72da0();
   input += synapse0x1b73420();
   input += synapse0x1b73460();
   input += synapse0x1b734a0();
   input += synapse0x1b734e0();
   input += synapse0x1b73520();
   input += synapse0x1b73560();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b72bd0() {
   double input = input0x1b72bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b735a0() {
   double input = 1.72991;
   input += synapse0x1b738e0();
   input += synapse0x1b73920();
   input += synapse0x1b73960();
   input += synapse0x1b739a0();
   input += synapse0x1b739e0();
   input += synapse0x1b73a20();
   input += synapse0x1b73a60();
   input += synapse0x1b73aa0();
   input += synapse0x1b73ae0();
   input += synapse0x1b73b20();
   input += synapse0x1b73b60();
   input += synapse0x1b73ba0();
   input += synapse0x1b73be0();
   input += synapse0x1b73c20();
   input += synapse0x1b73c60();
   input += synapse0x1b73ca0();
   input += synapse0x1b73730();
   input += synapse0x1b73770();
   input += synapse0x1b70500();
   input += synapse0x1b70540();
   input += synapse0x1b70580();
   input += synapse0x1b705c0();
   input += synapse0x1b70600();
   input += synapse0x1b70640();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b735a0() {
   double input = input0x1b735a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b70680() {
   double input = 0.295815;
   input += synapse0x1b709c0();
   input += synapse0x1b70a00();
   input += synapse0x1b70a40();
   input += synapse0x1b70a80();
   input += synapse0x1b70ac0();
   input += synapse0x1b70b00();
   input += synapse0x1b70b40();
   input += synapse0x1b70b80();
   input += synapse0x1b70bc0();
   input += synapse0x1b70c00();
   input += synapse0x1b70c40();
   input += synapse0x1b70c80();
   input += synapse0x1b70cc0();
   input += synapse0x1b74e00();
   input += synapse0x1b74e40();
   input += synapse0x1b74e80();
   input += synapse0x1b70810();
   input += synapse0x1b70850();
   input += synapse0x1b74fd0();
   input += synapse0x1b75010();
   input += synapse0x1b75050();
   input += synapse0x1b75090();
   input += synapse0x1b750d0();
   input += synapse0x1b75110();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b70680() {
   double input = input0x1b70680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b75150() {
   double input = -0.488129;
   input += synapse0x1b75490();
   input += synapse0x1b754d0();
   input += synapse0x1b75510();
   input += synapse0x1b75550();
   input += synapse0x1b75590();
   input += synapse0x1b755d0();
   input += synapse0x1b75610();
   input += synapse0x1b75650();
   input += synapse0x1b75690();
   input += synapse0x1b756d0();
   input += synapse0x1b75710();
   input += synapse0x1b75750();
   input += synapse0x1b75790();
   input += synapse0x1b757d0();
   input += synapse0x1b75810();
   input += synapse0x1b75850();
   input += synapse0x1b752e0();
   input += synapse0x1b75320();
   input += synapse0x1b759a0();
   input += synapse0x1b759e0();
   input += synapse0x1b75a20();
   input += synapse0x1b75a60();
   input += synapse0x1b75aa0();
   input += synapse0x1b75ae0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b75150() {
   double input = input0x1b75150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b75b20() {
   double input = -0.887209;
   input += synapse0x1b75e60();
   input += synapse0x1b75ea0();
   input += synapse0x1b75ee0();
   input += synapse0x1b75f20();
   input += synapse0x1b75f60();
   input += synapse0x1b75fa0();
   input += synapse0x1b75fe0();
   input += synapse0x1b76020();
   input += synapse0x1b76060();
   input += synapse0x1b760a0();
   input += synapse0x1b760e0();
   input += synapse0x1b76120();
   input += synapse0x1b76160();
   input += synapse0x1b761a0();
   input += synapse0x1b761e0();
   input += synapse0x1b76220();
   input += synapse0x1b75cb0();
   input += synapse0x1b75cf0();
   input += synapse0x1b76370();
   input += synapse0x1b763b0();
   input += synapse0x1b763f0();
   input += synapse0x1b76430();
   input += synapse0x1b76470();
   input += synapse0x1b764b0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b75b20() {
   double input = input0x1b75b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b764f0() {
   double input = -0.677737;
   input += synapse0x1b76830();
   input += synapse0x1b76870();
   input += synapse0x1b768b0();
   input += synapse0x1b768f0();
   input += synapse0x1b76930();
   input += synapse0x1b76970();
   input += synapse0x1b769b0();
   input += synapse0x1b769f0();
   input += synapse0x1b76a30();
   input += synapse0x1b76a70();
   input += synapse0x1b76ab0();
   input += synapse0x1b76af0();
   input += synapse0x1b76b30();
   input += synapse0x1b76b70();
   input += synapse0x1b76bb0();
   input += synapse0x1b76bf0();
   input += synapse0x1b76680();
   input += synapse0x1b766c0();
   input += synapse0x1b76d40();
   input += synapse0x1b76d80();
   input += synapse0x1b76dc0();
   input += synapse0x1b76e00();
   input += synapse0x1b76e40();
   input += synapse0x1b76e80();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b764f0() {
   double input = input0x1b764f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b76ec0() {
   double input = 1.05455;
   input += synapse0x1b77200();
   input += synapse0x1b68590();
   input += synapse0x1b685d0();
   input += synapse0x1b688d0();
   input += synapse0x1b68910();
   input += synapse0x1b68c10();
   input += synapse0x1b68c50();
   input += synapse0x1b68f50();
   input += synapse0x1b68f90();
   input += synapse0x1b69290();
   input += synapse0x1b692d0();
   input += synapse0x1b695d0();
   input += synapse0x1b69610();
   input += synapse0x1b69910();
   input += synapse0x1b69950();
   input += synapse0x1b69c50();
   input += synapse0x1b69c90();
   input += synapse0x1b69f90();
   input += synapse0x1b69fd0();
   input += synapse0x1b6a2d0();
   input += synapse0x1b6a310();
   input += synapse0x1b6a610();
   input += synapse0x1b6a650();
   input += synapse0x1b6a950();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b76ec0() {
   double input = input0x1b76ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b78cd0() {
   double input = -0.14458;
   input += synapse0x1b6a990();
   input += synapse0x1b6b650();
   input += synapse0x1b6b690();
   input += synapse0x1b77050();
   input += synapse0x1b77090();
   input += synapse0x1b6b990();
   input += synapse0x1b6b9d0();
   input += synapse0x1923440();
   input += synapse0x1923480();
   input += synapse0x1b6c110();
   input += synapse0x1b6c150();
   input += synapse0x1b6c450();
   input += synapse0x1b6c490();
   input += synapse0x1b6c790();
   input += synapse0x1b6c7d0();
   input += synapse0x1b6cad0();
   input += synapse0x1b6cb10();
   input += synapse0x1b6ce10();
   input += synapse0x1b6ce50();
   input += synapse0x1b6d150();
   input += synapse0x1b6d190();
   input += synapse0x1b6ac90();
   input += synapse0x1b6acd0();
   input += synapse0x1b78f70();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b78cd0() {
   double input = input0x1b78cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b78fb0() {
   double input = 1.33593;
   input += synapse0x1b792f0();
   input += synapse0x1b79330();
   input += synapse0x1b79370();
   input += synapse0x1b793b0();
   input += synapse0x1b793f0();
   input += synapse0x1b79430();
   input += synapse0x1b79470();
   input += synapse0x1b794b0();
   input += synapse0x1b794f0();
   input += synapse0x1b79530();
   input += synapse0x1b79570();
   input += synapse0x1b795b0();
   input += synapse0x1b795f0();
   input += synapse0x1b79630();
   input += synapse0x1b79670();
   input += synapse0x1b796b0();
   input += synapse0x1b79140();
   input += synapse0x1b79180();
   input += synapse0x1b79800();
   input += synapse0x1b79840();
   input += synapse0x1b79880();
   input += synapse0x1b798c0();
   input += synapse0x1b79900();
   input += synapse0x1b79940();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b78fb0() {
   double input = input0x1b78fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b79980() {
   double input = 0.264193;
   input += synapse0x1b79cc0();
   input += synapse0x1b79d00();
   input += synapse0x1b79d40();
   input += synapse0x1b79d80();
   input += synapse0x1b79dc0();
   input += synapse0x1b79e00();
   input += synapse0x1b79e40();
   input += synapse0x1b79e80();
   input += synapse0x1b79ec0();
   input += synapse0x1b79f00();
   input += synapse0x1b79f40();
   input += synapse0x1b79f80();
   input += synapse0x1b79fc0();
   input += synapse0x1b7a000();
   input += synapse0x1b7a040();
   input += synapse0x1b7a080();
   input += synapse0x1b79b10();
   input += synapse0x1b79b50();
   input += synapse0x1b7a1d0();
   input += synapse0x1b7a210();
   input += synapse0x1b7a250();
   input += synapse0x1b7a290();
   input += synapse0x1b7a2d0();
   input += synapse0x1b7a310();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b79980() {
   double input = input0x1b79980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7a350() {
   double input = 0.660082;
   input += synapse0x1b7a690();
   input += synapse0x1b7a6d0();
   input += synapse0x1b7a710();
   input += synapse0x1b7a750();
   input += synapse0x1b7a790();
   input += synapse0x1b7a7d0();
   input += synapse0x1b7a810();
   input += synapse0x1b7a850();
   input += synapse0x1b7a890();
   input += synapse0x1b7a8d0();
   input += synapse0x1b7a910();
   input += synapse0x1b7a950();
   input += synapse0x1b7a990();
   input += synapse0x1b7a9d0();
   input += synapse0x1b7aa10();
   input += synapse0x1b7aa50();
   input += synapse0x1b7a4e0();
   input += synapse0x1b7a520();
   input += synapse0x1b7aba0();
   input += synapse0x1b7abe0();
   input += synapse0x1b7ac20();
   input += synapse0x1b7ac60();
   input += synapse0x1b7aca0();
   input += synapse0x1b7ace0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7a350() {
   double input = input0x1b7a350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7ad20() {
   double input = 0.114178;
   input += synapse0x1b7b060();
   input += synapse0x1b7b0a0();
   input += synapse0x1b7b0e0();
   input += synapse0x1b7b120();
   input += synapse0x1b7b160();
   input += synapse0x1b7b1a0();
   input += synapse0x1b7b1e0();
   input += synapse0x1b7b220();
   input += synapse0x1b7b260();
   input += synapse0x1b7b2a0();
   input += synapse0x1b7b2e0();
   input += synapse0x1b7b320();
   input += synapse0x1b7b360();
   input += synapse0x1b7b3a0();
   input += synapse0x1b7b3e0();
   input += synapse0x1b7b420();
   input += synapse0x1b7aeb0();
   input += synapse0x1b7aef0();
   input += synapse0x1b7b570();
   input += synapse0x1b7b5b0();
   input += synapse0x1b7b5f0();
   input += synapse0x1b7b630();
   input += synapse0x1b7b670();
   input += synapse0x1b7b6b0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7ad20() {
   double input = input0x1b7ad20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7b6f0() {
   double input = -1.29796;
   input += synapse0x1b7ba30();
   input += synapse0x1b7ba70();
   input += synapse0x1b7bab0();
   input += synapse0x1b7baf0();
   input += synapse0x1b7bb30();
   input += synapse0x1b7bb70();
   input += synapse0x1b7bbb0();
   input += synapse0x1b7bbf0();
   input += synapse0x1b7bc30();
   input += synapse0x1b73df0();
   input += synapse0x1b73e30();
   input += synapse0x1b73e70();
   input += synapse0x1b73eb0();
   input += synapse0x1b73ef0();
   input += synapse0x1b73f30();
   input += synapse0x1b73f70();
   input += synapse0x1b7b880();
   input += synapse0x1b7b8c0();
   input += synapse0x1b740c0();
   input += synapse0x1b74100();
   input += synapse0x1b74140();
   input += synapse0x1b74180();
   input += synapse0x1b741c0();
   input += synapse0x1b74200();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7b6f0() {
   double input = input0x1b7b6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b74240() {
   double input = 0.46784;
   input += synapse0x1b74580();
   input += synapse0x1b745c0();
   input += synapse0x1b74600();
   input += synapse0x1b74640();
   input += synapse0x1b74680();
   input += synapse0x1b746c0();
   input += synapse0x1b74700();
   input += synapse0x1b74740();
   input += synapse0x1b74780();
   input += synapse0x1b747c0();
   input += synapse0x1b74800();
   input += synapse0x1b74840();
   input += synapse0x1b74880();
   input += synapse0x1b748c0();
   input += synapse0x1b74900();
   input += synapse0x1b74940();
   input += synapse0x1b743d0();
   input += synapse0x1b74410();
   input += synapse0x1b74a90();
   input += synapse0x1b74ad0();
   input += synapse0x1b74b10();
   input += synapse0x1b74b50();
   input += synapse0x1b74b90();
   input += synapse0x1b74bd0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b74240() {
   double input = input0x1b74240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b74c10() {
   double input = 0.176412;
   input += synapse0x1b74da0();
   input += synapse0x1b7de30();
   input += synapse0x1b7de70();
   input += synapse0x1b7deb0();
   input += synapse0x1b7def0();
   input += synapse0x1b7df30();
   input += synapse0x1b7df70();
   input += synapse0x1b7dfb0();
   input += synapse0x1b7dff0();
   input += synapse0x1b7e030();
   input += synapse0x1b7e070();
   input += synapse0x1b7e0b0();
   input += synapse0x1b7e0f0();
   input += synapse0x1b7e130();
   input += synapse0x1b7e170();
   input += synapse0x1b7e1b0();
   input += synapse0x1b7dc80();
   input += synapse0x1b7dcc0();
   input += synapse0x1b7e300();
   input += synapse0x1b7e340();
   input += synapse0x1b7e380();
   input += synapse0x1b7e3c0();
   input += synapse0x1b7e400();
   input += synapse0x1b7e440();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b74c10() {
   double input = input0x1b74c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7e480() {
   double input = -0.152359;
   input += synapse0x1b7e7c0();
   input += synapse0x1b7e800();
   input += synapse0x1b7e840();
   input += synapse0x1b7e880();
   input += synapse0x1b7e8c0();
   input += synapse0x1b7e900();
   input += synapse0x1b7e940();
   input += synapse0x1b7e980();
   input += synapse0x1b7e9c0();
   input += synapse0x1b7ea00();
   input += synapse0x1b7ea40();
   input += synapse0x1b7ea80();
   input += synapse0x1b7eac0();
   input += synapse0x1b7eb00();
   input += synapse0x1b7eb40();
   input += synapse0x1b7eb80();
   input += synapse0x1b7e610();
   input += synapse0x1b7e650();
   input += synapse0x1b7ecd0();
   input += synapse0x1b7ed10();
   input += synapse0x1b7ed50();
   input += synapse0x1b7ed90();
   input += synapse0x1b7edd0();
   input += synapse0x1b7ee10();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7e480() {
   double input = input0x1b7e480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7ee50() {
   double input = -1.28359;
   input += synapse0x1b7f190();
   input += synapse0x1b7f1d0();
   input += synapse0x1b7f210();
   input += synapse0x1b7f250();
   input += synapse0x1b7f290();
   input += synapse0x1b7f2d0();
   input += synapse0x1b7f310();
   input += synapse0x1b7f350();
   input += synapse0x1b7f390();
   input += synapse0x1b7f3d0();
   input += synapse0x1b7f410();
   input += synapse0x1b7f450();
   input += synapse0x1b7f490();
   input += synapse0x1b7f4d0();
   input += synapse0x1b7f510();
   input += synapse0x1b7f550();
   input += synapse0x1b7efe0();
   input += synapse0x1b7f020();
   input += synapse0x1b7f6a0();
   input += synapse0x1b7f6e0();
   input += synapse0x1b7f720();
   input += synapse0x1b7f760();
   input += synapse0x1b7f7a0();
   input += synapse0x1b7f7e0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7ee50() {
   double input = input0x1b7ee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7f820() {
   double input = 0.0615893;
   input += synapse0x1b7fb60();
   input += synapse0x1b7fba0();
   input += synapse0x1b7fbe0();
   input += synapse0x1b7fc20();
   input += synapse0x1b7fc60();
   input += synapse0x1b7fca0();
   input += synapse0x1b7fce0();
   input += synapse0x1b7fd20();
   input += synapse0x1b7fd60();
   input += synapse0x1b7fda0();
   input += synapse0x1b7fde0();
   input += synapse0x1b7fe20();
   input += synapse0x1b7fe60();
   input += synapse0x1b7fea0();
   input += synapse0x1b7fee0();
   input += synapse0x1b7ff20();
   input += synapse0x1b7f9b0();
   input += synapse0x1b7f9f0();
   input += synapse0x1b80070();
   input += synapse0x1b800b0();
   input += synapse0x1b800f0();
   input += synapse0x1b80130();
   input += synapse0x1b80170();
   input += synapse0x1b801b0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7f820() {
   double input = input0x1b7f820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b801f0() {
   double input = 1.42085;
   input += synapse0x1b80530();
   input += synapse0x1b80570();
   input += synapse0x1b805b0();
   input += synapse0x1b805f0();
   input += synapse0x1b80630();
   input += synapse0x1b80670();
   input += synapse0x1b806b0();
   input += synapse0x1b806f0();
   input += synapse0x1b80730();
   input += synapse0x1b80770();
   input += synapse0x1b807b0();
   input += synapse0x1b807f0();
   input += synapse0x1b80830();
   input += synapse0x1b80870();
   input += synapse0x1b808b0();
   input += synapse0x1b808f0();
   input += synapse0x1b80380();
   input += synapse0x1b803c0();
   input += synapse0x1b80a40();
   input += synapse0x1b80a80();
   input += synapse0x1b80ac0();
   input += synapse0x1b80b00();
   input += synapse0x1b80b40();
   input += synapse0x1b80b80();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b801f0() {
   double input = input0x1b801f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b80bc0() {
   double input = -1.63107;
   input += synapse0x1b80f00();
   input += synapse0x1b80f40();
   input += synapse0x1b80f80();
   input += synapse0x1b80fc0();
   input += synapse0x1b81000();
   input += synapse0x1b81040();
   input += synapse0x1b81080();
   input += synapse0x1b810c0();
   input += synapse0x1b81100();
   input += synapse0x1b81140();
   input += synapse0x1b81180();
   input += synapse0x1b811c0();
   input += synapse0x1b81200();
   input += synapse0x1b81240();
   input += synapse0x1b81280();
   input += synapse0x1b812c0();
   input += synapse0x1b80d50();
   input += synapse0x1b80d90();
   input += synapse0x1b81410();
   input += synapse0x1b81450();
   input += synapse0x1b81490();
   input += synapse0x1b814d0();
   input += synapse0x1b81510();
   input += synapse0x1b81550();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b80bc0() {
   double input = input0x1b80bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b81590() {
   double input = 0.834073;
   input += synapse0x1b818d0();
   input += synapse0x1b81910();
   input += synapse0x1b81950();
   input += synapse0x1b81990();
   input += synapse0x1b819d0();
   input += synapse0x1b81a10();
   input += synapse0x1b81a50();
   input += synapse0x1b81a90();
   input += synapse0x1b81ad0();
   input += synapse0x1b81b10();
   input += synapse0x1b81b50();
   input += synapse0x1b81b90();
   input += synapse0x1b81bd0();
   input += synapse0x1b81c10();
   input += synapse0x1b81c50();
   input += synapse0x1b81c90();
   input += synapse0x1b81720();
   input += synapse0x1b81760();
   input += synapse0x1b81de0();
   input += synapse0x1b81e20();
   input += synapse0x1b81e60();
   input += synapse0x1b81ea0();
   input += synapse0x1b81ee0();
   input += synapse0x1b81f20();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b81590() {
   double input = input0x1b81590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b81f60() {
   double input = 0.455798;
   input += synapse0x1b822a0();
   input += synapse0x1b822e0();
   input += synapse0x1b82320();
   input += synapse0x1b82360();
   input += synapse0x1b823a0();
   input += synapse0x1b823e0();
   input += synapse0x1b82420();
   input += synapse0x1b82460();
   input += synapse0x1b824a0();
   input += synapse0x1b824e0();
   input += synapse0x1b82520();
   input += synapse0x1b82560();
   input += synapse0x1b825a0();
   input += synapse0x1b825e0();
   input += synapse0x1b82620();
   input += synapse0x1b82660();
   input += synapse0x1b820f0();
   input += synapse0x1b82130();
   input += synapse0x1b827b0();
   input += synapse0x1b827f0();
   input += synapse0x1b82830();
   input += synapse0x1b82870();
   input += synapse0x1b828b0();
   input += synapse0x1b828f0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b81f60() {
   double input = input0x1b81f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b82930() {
   double input = 0.283607;
   input += synapse0x1b82c70();
   input += synapse0x1b77240();
   input += synapse0x1b77280();
   input += synapse0x1b772c0();
   input += synapse0x1b77510();
   input += synapse0x1b77550();
   input += synapse0x1b77590();
   input += synapse0x1b777e0();
   input += synapse0x1b77820();
   input += synapse0x1b77a70();
   input += synapse0x1b77ab0();
   input += synapse0x1b77af0();
   input += synapse0x1b77d40();
   input += synapse0x1b77d80();
   input += synapse0x1b77fd0();
   input += synapse0x1b78010();
   input += synapse0x1b82ac0();
   input += synapse0x1b82b00();
   input += synapse0x1b78160();
   input += synapse0x1b78670();
   input += synapse0x1b786b0();
   input += synapse0x1b786f0();
   input += synapse0x1b78940();
   input += synapse0x1b78980();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b82930() {
   double input = input0x1b82930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b789c0() {
   double input = -0.151638;
   input += synapse0x1b78230();
   input += synapse0x1b78270();
   input += synapse0x1b782b0();
   input += synapse0x1b782f0();
   input += synapse0x1b78c70();
   input += synapse0x1b84fc0();
   input += synapse0x1b85000();
   input += synapse0x1b85040();
   input += synapse0x1b85080();
   input += synapse0x1b850c0();
   input += synapse0x1b85100();
   input += synapse0x1b85140();
   input += synapse0x1b85180();
   input += synapse0x1b851c0();
   input += synapse0x1b85200();
   input += synapse0x1b85240();
   input += synapse0x1b78b50();
   input += synapse0x1b78b90();
   input += synapse0x1b85390();
   input += synapse0x1b853d0();
   input += synapse0x1b85410();
   input += synapse0x1b85450();
   input += synapse0x1b85490();
   input += synapse0x1b854d0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b789c0() {
   double input = input0x1b789c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b85510() {
   double input = 2.07424;
   input += synapse0x1b85850();
   input += synapse0x1b85890();
   input += synapse0x1b858d0();
   input += synapse0x1b85910();
   input += synapse0x1b85950();
   input += synapse0x1b85990();
   input += synapse0x1b859d0();
   input += synapse0x1b85a10();
   input += synapse0x1b85a50();
   input += synapse0x1b85a90();
   input += synapse0x1b85ad0();
   input += synapse0x1b85b10();
   input += synapse0x1b85b50();
   input += synapse0x1b85b90();
   input += synapse0x1b85bd0();
   input += synapse0x1b85c10();
   input += synapse0x1b856a0();
   input += synapse0x1b856e0();
   input += synapse0x1b85d60();
   input += synapse0x1b85da0();
   input += synapse0x1b85de0();
   input += synapse0x1b85e20();
   input += synapse0x1b85e60();
   input += synapse0x1b85ea0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b85510() {
   double input = input0x1b85510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b85ee0() {
   double input = 0.579671;
   input += synapse0x1b86220();
   input += synapse0x1b86260();
   input += synapse0x1b862a0();
   input += synapse0x1b862e0();
   input += synapse0x1b86320();
   input += synapse0x1b86360();
   input += synapse0x1b863a0();
   input += synapse0x1b863e0();
   input += synapse0x1b86420();
   input += synapse0x1b86460();
   input += synapse0x1b864a0();
   input += synapse0x1b864e0();
   input += synapse0x1b86520();
   input += synapse0x1b86560();
   input += synapse0x1b865a0();
   input += synapse0x1b865e0();
   input += synapse0x1b86070();
   input += synapse0x1b860b0();
   input += synapse0x1b86730();
   input += synapse0x1b86770();
   input += synapse0x1b867b0();
   input += synapse0x1b867f0();
   input += synapse0x1b86830();
   input += synapse0x1b86870();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b85ee0() {
   double input = input0x1b85ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b868b0() {
   double input = 0.646482;
   input += synapse0x1b86bf0();
   input += synapse0x1b86c30();
   input += synapse0x1b86c70();
   input += synapse0x1b86cb0();
   input += synapse0x1b86cf0();
   input += synapse0x1b86d30();
   input += synapse0x1b86d70();
   input += synapse0x1b86db0();
   input += synapse0x1b86df0();
   input += synapse0x1b86e30();
   input += synapse0x1b86e70();
   input += synapse0x1b86eb0();
   input += synapse0x1b86ef0();
   input += synapse0x1b86f30();
   input += synapse0x1b86f70();
   input += synapse0x1b86fb0();
   input += synapse0x1b86a40();
   input += synapse0x1b86a80();
   input += synapse0x1b87100();
   input += synapse0x1b87140();
   input += synapse0x1b87180();
   input += synapse0x1b871c0();
   input += synapse0x1b87200();
   input += synapse0x1b87240();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b868b0() {
   double input = input0x1b868b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b87280() {
   double input = 1.36938;
   input += synapse0x1b875c0();
   input += synapse0x1b87600();
   input += synapse0x1b87640();
   input += synapse0x1b87680();
   input += synapse0x1b876c0();
   input += synapse0x1b87700();
   input += synapse0x1b87740();
   input += synapse0x1b87780();
   input += synapse0x1b877c0();
   input += synapse0x1b87800();
   input += synapse0x1b87840();
   input += synapse0x1b87880();
   input += synapse0x1b878c0();
   input += synapse0x1b87900();
   input += synapse0x1b87940();
   input += synapse0x1b87980();
   input += synapse0x1b87410();
   input += synapse0x1b87450();
   input += synapse0x1b87ad0();
   input += synapse0x1b87b10();
   input += synapse0x1b87b50();
   input += synapse0x1b87b90();
   input += synapse0x1b87bd0();
   input += synapse0x1b87c10();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b87280() {
   double input = input0x1b87280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b87c50() {
   double input = -0.830593;
   input += synapse0x1b87f90();
   input += synapse0x1b87fd0();
   input += synapse0x1b88010();
   input += synapse0x1b88050();
   input += synapse0x1b88090();
   input += synapse0x1b880d0();
   input += synapse0x1b88110();
   input += synapse0x1b88150();
   input += synapse0x1b88190();
   input += synapse0x1b881d0();
   input += synapse0x1b88210();
   input += synapse0x1b88250();
   input += synapse0x1b88290();
   input += synapse0x1b882d0();
   input += synapse0x1b88310();
   input += synapse0x1b88350();
   input += synapse0x1b87de0();
   input += synapse0x1b87e20();
   input += synapse0x1b884a0();
   input += synapse0x1b884e0();
   input += synapse0x1b88520();
   input += synapse0x1b88560();
   input += synapse0x1b885a0();
   input += synapse0x1b885e0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b87c50() {
   double input = input0x1b87c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b88620() {
   double input = -2.14694;
   input += synapse0x1b88960();
   input += synapse0x1b889a0();
   input += synapse0x1b889e0();
   input += synapse0x1b88a20();
   input += synapse0x1b88a60();
   input += synapse0x1b88aa0();
   input += synapse0x1b88ae0();
   input += synapse0x1b88b20();
   input += synapse0x1b88b60();
   input += synapse0x1b88ba0();
   input += synapse0x1b88be0();
   input += synapse0x1b88c20();
   input += synapse0x1b88c60();
   input += synapse0x1b88ca0();
   input += synapse0x1b88ce0();
   input += synapse0x1b88d20();
   input += synapse0x1b887b0();
   input += synapse0x1b887f0();
   input += synapse0x1b88e70();
   input += synapse0x1b88eb0();
   input += synapse0x1b88ef0();
   input += synapse0x1b88f30();
   input += synapse0x1b88f70();
   input += synapse0x1b88fb0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b88620() {
   double input = input0x1b88620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b88ff0() {
   double input = 0.341152;
   input += synapse0x1b89330();
   input += synapse0x1b89370();
   input += synapse0x1b893b0();
   input += synapse0x1b893f0();
   input += synapse0x1b89430();
   input += synapse0x1b89470();
   input += synapse0x1b894b0();
   input += synapse0x1b894f0();
   input += synapse0x1b89530();
   input += synapse0x1b89570();
   input += synapse0x1b895b0();
   input += synapse0x1b895f0();
   input += synapse0x1b89630();
   input += synapse0x1b89670();
   input += synapse0x1b896b0();
   input += synapse0x1b896f0();
   input += synapse0x1b89180();
   input += synapse0x1b891c0();
   input += synapse0x1b89840();
   input += synapse0x1b89880();
   input += synapse0x1b898c0();
   input += synapse0x1b89900();
   input += synapse0x1b89940();
   input += synapse0x1b89980();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b88ff0() {
   double input = input0x1b88ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b899c0() {
   double input = -0.293607;
   input += synapse0x1b72430();
   input += synapse0x1b72470();
   input += synapse0x1b724b0();
   input += synapse0x1b724f0();
   input += synapse0x1b72530();
   input += synapse0x1b72570();
   input += synapse0x1b725b0();
   input += synapse0x1b725f0();
   input += synapse0x1b8a110();
   input += synapse0x1b8a150();
   input += synapse0x1b8a190();
   input += synapse0x1b8a1d0();
   input += synapse0x1b8a210();
   input += synapse0x1b8a250();
   input += synapse0x1b8a290();
   input += synapse0x1b8a2d0();
   input += synapse0x1b89b50();
   input += synapse0x1b89b90();
   input += synapse0x1b8a420();
   input += synapse0x1b8a460();
   input += synapse0x1b8a4a0();
   input += synapse0x1b8a4e0();
   input += synapse0x1b8a520();
   input += synapse0x1b8a560();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b899c0() {
   double input = input0x1b899c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b8a5a0() {
   double input = 1.27119;
   input += synapse0x1b8a8e0();
   input += synapse0x1b8a920();
   input += synapse0x1b8a960();
   input += synapse0x1b8a9a0();
   input += synapse0x1b8a9e0();
   input += synapse0x1b8aa20();
   input += synapse0x1b8aa60();
   input += synapse0x1b8aaa0();
   input += synapse0x1b8aae0();
   input += synapse0x1b8ab20();
   input += synapse0x1b8ab60();
   input += synapse0x1b8aba0();
   input += synapse0x1b8abe0();
   input += synapse0x1b8ac20();
   input += synapse0x1b8ac60();
   input += synapse0x1b8aca0();
   input += synapse0x1b8a730();
   input += synapse0x1b8a770();
   input += synapse0x1b8adf0();
   input += synapse0x1b8ae30();
   input += synapse0x1b8ae70();
   input += synapse0x1b8aeb0();
   input += synapse0x1b8aef0();
   input += synapse0x1b8af30();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b8a5a0() {
   double input = input0x1b8a5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b8af70() {
   double input = 0.251779;
   input += synapse0x1b8b2b0();
   input += synapse0x1b8b2f0();
   input += synapse0x1b8b330();
   input += synapse0x1b8b370();
   input += synapse0x1b8b3b0();
   input += synapse0x1b8b3f0();
   input += synapse0x1b8b430();
   input += synapse0x1b8b470();
   input += synapse0x1b8b4b0();
   input += synapse0x1b8b4f0();
   input += synapse0x1b8b530();
   input += synapse0x1b8b570();
   input += synapse0x1b8b5b0();
   input += synapse0x1b8b5f0();
   input += synapse0x1b8b630();
   input += synapse0x1b8b670();
   input += synapse0x1b8b100();
   input += synapse0x1b8b140();
   input += synapse0x1b7bc70();
   input += synapse0x1b7bcb0();
   input += synapse0x1b7bcf0();
   input += synapse0x1b7bd30();
   input += synapse0x1b7bd70();
   input += synapse0x1b7bdb0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b8af70() {
   double input = input0x1b8af70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7bdf0() {
   double input = 1.2713;
   input += synapse0x1b7c130();
   input += synapse0x1b7c170();
   input += synapse0x1b7c1b0();
   input += synapse0x1b7c1f0();
   input += synapse0x1b7c230();
   input += synapse0x1b7c270();
   input += synapse0x1b7c2b0();
   input += synapse0x1b7c2f0();
   input += synapse0x1b7c330();
   input += synapse0x1b7c370();
   input += synapse0x1b7c3b0();
   input += synapse0x1b7c3f0();
   input += synapse0x1b7c430();
   input += synapse0x1b7c470();
   input += synapse0x1b7c4b0();
   input += synapse0x1b7c4f0();
   input += synapse0x1b7bf80();
   input += synapse0x1b7bfc0();
   input += synapse0x1b7c640();
   input += synapse0x1b7c680();
   input += synapse0x1b7c6c0();
   input += synapse0x1b7c700();
   input += synapse0x1b7c740();
   input += synapse0x1b7c780();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7bdf0() {
   double input = input0x1b7bdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7c7c0() {
   double input = 0.626345;
   input += synapse0x1b7cb00();
   input += synapse0x1b7cb40();
   input += synapse0x1b7cb80();
   input += synapse0x1b7cbc0();
   input += synapse0x1b7cc00();
   input += synapse0x1b7cc40();
   input += synapse0x1b7cc80();
   input += synapse0x1b7ccc0();
   input += synapse0x1b7cd00();
   input += synapse0x1b7cd40();
   input += synapse0x1b7cd80();
   input += synapse0x1b7cdc0();
   input += synapse0x1b7ce00();
   input += synapse0x1b7ce40();
   input += synapse0x1b7ce80();
   input += synapse0x1b7cec0();
   input += synapse0x1b7c950();
   input += synapse0x1b7c990();
   input += synapse0x1b7d010();
   input += synapse0x1b7d050();
   input += synapse0x1b7d090();
   input += synapse0x1b7d0d0();
   input += synapse0x1b7d110();
   input += synapse0x1b7d150();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7c7c0() {
   double input = input0x1b7c7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b7d190() {
   double input = -1.21478;
   input += synapse0x1b7d4d0();
   input += synapse0x1b7d510();
   input += synapse0x1b7d550();
   input += synapse0x1b7d590();
   input += synapse0x1b7d5d0();
   input += synapse0x1b7d610();
   input += synapse0x1b7d650();
   input += synapse0x1b7d690();
   input += synapse0x1b7d6d0();
   input += synapse0x1b7d710();
   input += synapse0x1b7d750();
   input += synapse0x1b7d790();
   input += synapse0x1b7d7d0();
   input += synapse0x1b7d810();
   input += synapse0x1b7d850();
   input += synapse0x1b7d890();
   input += synapse0x1b7d320();
   input += synapse0x1b7d360();
   input += synapse0x1b7d9e0();
   input += synapse0x1b7da20();
   input += synapse0x1b7da60();
   input += synapse0x1b7daa0();
   input += synapse0x1b7dae0();
   input += synapse0x1b7db20();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b7d190() {
   double input = input0x1b7d190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b8f7d0() {
   double input = -0.323174;
   input += synapse0x1b8f9f0();
   input += synapse0x1b8fa30();
   input += synapse0x1b8fa70();
   input += synapse0x1b8fab0();
   input += synapse0x1b8faf0();
   input += synapse0x1b8fb30();
   input += synapse0x1b8fb70();
   input += synapse0x1b8fbb0();
   input += synapse0x1b8fbf0();
   input += synapse0x1b8fc30();
   input += synapse0x1b8fc70();
   input += synapse0x1b8fcb0();
   input += synapse0x1b8fcf0();
   input += synapse0x1b8fd30();
   input += synapse0x1b8fd70();
   input += synapse0x1b8fdb0();
   input += synapse0x1b7db60();
   input += synapse0x1b7dba0();
   input += synapse0x1b8ff00();
   input += synapse0x1b8ff40();
   input += synapse0x1b8ff80();
   input += synapse0x1b8ffc0();
   input += synapse0x1b90000();
   input += synapse0x1b90040();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b8f7d0() {
   double input = input0x1b8f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b90080() {
   double input = 1.20214;
   input += synapse0x1b903c0();
   input += synapse0x1b90400();
   input += synapse0x1b90440();
   input += synapse0x1b90480();
   input += synapse0x1b904c0();
   input += synapse0x1b90500();
   input += synapse0x1b90540();
   input += synapse0x1b90580();
   input += synapse0x1b905c0();
   input += synapse0x1b90600();
   input += synapse0x1b90640();
   input += synapse0x1b90680();
   input += synapse0x1b906c0();
   input += synapse0x1b90700();
   input += synapse0x1b90740();
   input += synapse0x1b90780();
   input += synapse0x1b90210();
   input += synapse0x1b90250();
   input += synapse0x1b908d0();
   input += synapse0x1b90910();
   input += synapse0x1b90950();
   input += synapse0x1b90990();
   input += synapse0x1b909d0();
   input += synapse0x1b90a10();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b90080() {
   double input = input0x1b90080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b90a50() {
   double input = -1.05773;
   input += synapse0x1b90d90();
   input += synapse0x1b90dd0();
   input += synapse0x1b90e10();
   input += synapse0x1b90e50();
   input += synapse0x1b90e90();
   input += synapse0x1b90ed0();
   input += synapse0x1b90f10();
   input += synapse0x1b90f50();
   input += synapse0x1b90f90();
   input += synapse0x1b90fd0();
   input += synapse0x1b91010();
   input += synapse0x1b91050();
   input += synapse0x1b91090();
   input += synapse0x1b910d0();
   input += synapse0x1b91110();
   input += synapse0x1b91150();
   input += synapse0x1b90be0();
   input += synapse0x1b90c20();
   input += synapse0x1b912a0();
   input += synapse0x1b912e0();
   input += synapse0x1b91320();
   input += synapse0x1b91360();
   input += synapse0x1b913a0();
   input += synapse0x1b913e0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b90a50() {
   double input = input0x1b90a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b91420() {
   double input = -2.98543;
   input += synapse0x1b91760();
   input += synapse0x1b917a0();
   input += synapse0x1b917e0();
   input += synapse0x1b91820();
   input += synapse0x1b91860();
   input += synapse0x1b918a0();
   input += synapse0x1b918e0();
   input += synapse0x1b91920();
   input += synapse0x1b91960();
   input += synapse0x1b919a0();
   input += synapse0x1b919e0();
   input += synapse0x1b91a20();
   input += synapse0x1b91a60();
   input += synapse0x1b91aa0();
   input += synapse0x1b91ae0();
   input += synapse0x1b91b20();
   input += synapse0x1b915b0();
   input += synapse0x1b915f0();
   input += synapse0x1b91c70();
   input += synapse0x1b91cb0();
   input += synapse0x1b91cf0();
   input += synapse0x1b91d30();
   input += synapse0x1b91d70();
   input += synapse0x1b91db0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b91420() {
   double input = input0x1b91420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b98620() {
   double input = -0.425075;
   input += synapse0x1931cc0();
   input += synapse0x1931d00();
   input += synapse0x1b6f860();
   input += synapse0x1b6f8a0();
   input += synapse0x1b70230();
   input += synapse0x1b70270();
   input += synapse0x1b71000();
   input += synapse0x1b71040();
   input += synapse0x1b719d0();
   input += synapse0x1b71a10();
   input += synapse0x1b723a0();
   input += synapse0x1b723e0();
   input += synapse0x1b72e80();
   input += synapse0x1b72ec0();
   input += synapse0x1b73850();
   input += synapse0x1b73890();
   input += synapse0x1b70930();
   input += synapse0x1b70970();
   input += synapse0x1b75400();
   input += synapse0x1b75440();
   input += synapse0x1b75dd0();
   input += synapse0x1b75e10();
   input += synapse0x1b767a0();
   input += synapse0x1b767e0();
   input += synapse0x1b77170();
   input += synapse0x1b771b0();
   input += synapse0x1b6b310();
   input += synapse0x1b6b350();
   input += synapse0x1b79260();
   input += synapse0x1b792a0();
   input += synapse0x1b79c30();
   input += synapse0x1b79c70();
   input += synapse0x1b7a600();
   input += synapse0x1b7a640();
   input += synapse0x1b7afd0();
   input += synapse0x1b7b010();
   input += synapse0x1b7b9a0();
   input += synapse0x1b7b9e0();
   input += synapse0x1b744f0();
   input += synapse0x1b74530();
   input += synapse0x1b7dda0();
   input += synapse0x1b7dde0();
   input += synapse0x1b7e730();
   input += synapse0x1b7e770();
   input += synapse0x1b7f100();
   input += synapse0x1b7f140();
   input += synapse0x1b7fad0();
   input += synapse0x1b7fb10();
   input += synapse0x1b804a0();
   input += synapse0x1b804e0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b98620() {
   double input = input0x1b98620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b989c0() {
   double input = 0.948894;
   input += synapse0x1b82be0();
   input += synapse0x1b82c20();
   input += synapse0x1b781a0();
   input += synapse0x1b781e0();
   input += synapse0x1b857c0();
   input += synapse0x1b85800();
   input += synapse0x1b86190();
   input += synapse0x1b861d0();
   input += synapse0x1b86b60();
   input += synapse0x1b86ba0();
   input += synapse0x1b87530();
   input += synapse0x1b87570();
   input += synapse0x1b87f00();
   input += synapse0x1b87f40();
   input += synapse0x1b888d0();
   input += synapse0x1b88910();
   input += synapse0x1b892a0();
   input += synapse0x1b892e0();
   input += synapse0x1b89c70();
   input += synapse0x1b89cb0();
   input += synapse0x1b8a850();
   input += synapse0x1b8a890();
   input += synapse0x1b8b220();
   input += synapse0x1b8b260();
   input += synapse0x1b7c0a0();
   input += synapse0x1b7c0e0();
   input += synapse0x1b7ca70();
   input += synapse0x1b7cab0();
   input += synapse0x1b7d440();
   input += synapse0x1b7d480();
   input += synapse0x1b8f960();
   input += synapse0x1b8f9a0();
   input += synapse0x1b90330();
   input += synapse0x1b90370();
   input += synapse0x1b90d00();
   input += synapse0x1b90d40();
   input += synapse0x1b916d0();
   input += synapse0x1b91710();
   input += synapse0x1b6d5c0();
   input += synapse0x1b6d600();
   input += synapse0x1b80e70();
   input += synapse0x1b80eb0();
   input += synapse0x1b91df0();
   input += synapse0x1b91e30();
   input += synapse0x1b91e70();
   input += synapse0x1b91eb0();
   input += synapse0x1b98d60();
   input += synapse0x1b98da0();
   input += synapse0x1b98de0();
   input += synapse0x1b98e20();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b989c0() {
   double input = input0x1b989c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b98e60() {
   double input = -0.345154;
   input += synapse0x1b991a0();
   input += synapse0x1b991e0();
   input += synapse0x1b99220();
   input += synapse0x1b99260();
   input += synapse0x1b992a0();
   input += synapse0x1b992e0();
   input += synapse0x1b99320();
   input += synapse0x1b99360();
   input += synapse0x1b993a0();
   input += synapse0x1b993e0();
   input += synapse0x1b99420();
   input += synapse0x1b99460();
   input += synapse0x1b994a0();
   input += synapse0x1b994e0();
   input += synapse0x1b99520();
   input += synapse0x1b99560();
   input += synapse0x1b98ff0();
   input += synapse0x1b99030();
   input += synapse0x1b996b0();
   input += synapse0x1b996f0();
   input += synapse0x1b99730();
   input += synapse0x1b99770();
   input += synapse0x1b997b0();
   input += synapse0x1b997f0();
   input += synapse0x1b99830();
   input += synapse0x1b99870();
   input += synapse0x1b998b0();
   input += synapse0x1b998f0();
   input += synapse0x1b99930();
   input += synapse0x1b99970();
   input += synapse0x1b999b0();
   input += synapse0x1b999f0();
   input += synapse0x1b995a0();
   input += synapse0x1b995e0();
   input += synapse0x1b99620();
   input += synapse0x1b99660();
   input += synapse0x1b99c40();
   input += synapse0x1b99c80();
   input += synapse0x1b99cc0();
   input += synapse0x1b99d00();
   input += synapse0x1b99d40();
   input += synapse0x1b99d80();
   input += synapse0x1b99dc0();
   input += synapse0x1b99e00();
   input += synapse0x1b99e40();
   input += synapse0x1b99e80();
   input += synapse0x1b99ec0();
   input += synapse0x1b99f00();
   input += synapse0x1b99f40();
   input += synapse0x1b99f80();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b98e60() {
   double input = input0x1b98e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b99fc0() {
   double input = -1.39554;
   input += synapse0x1b9a300();
   input += synapse0x1b9a340();
   input += synapse0x1b9a380();
   input += synapse0x1b9a3c0();
   input += synapse0x1b9a400();
   input += synapse0x1b9a440();
   input += synapse0x1b9a480();
   input += synapse0x1b9a4c0();
   input += synapse0x1b9a500();
   input += synapse0x1b9a540();
   input += synapse0x1b9a580();
   input += synapse0x1b9a5c0();
   input += synapse0x1b9a600();
   input += synapse0x1b9a640();
   input += synapse0x1b9a680();
   input += synapse0x1b9a6c0();
   input += synapse0x1b9a150();
   input += synapse0x1b9a190();
   input += synapse0x1b9a810();
   input += synapse0x1b9a850();
   input += synapse0x1b9a890();
   input += synapse0x1b9a8d0();
   input += synapse0x1b9a910();
   input += synapse0x1b9a950();
   input += synapse0x1b9a990();
   input += synapse0x1b9a9d0();
   input += synapse0x1b9aa10();
   input += synapse0x1b9aa50();
   input += synapse0x1b9aa90();
   input += synapse0x1b9aad0();
   input += synapse0x1b9ab10();
   input += synapse0x1b9ab50();
   input += synapse0x1b9a700();
   input += synapse0x1b9a740();
   input += synapse0x1b9a780();
   input += synapse0x1b9a7c0();
   input += synapse0x1b9ada0();
   input += synapse0x1b9ade0();
   input += synapse0x1b9ae20();
   input += synapse0x1b9ae60();
   input += synapse0x1b9aea0();
   input += synapse0x1b9aee0();
   input += synapse0x1b9af20();
   input += synapse0x1b9af60();
   input += synapse0x1b9afa0();
   input += synapse0x1b9afe0();
   input += synapse0x1b9b020();
   input += synapse0x1b9b060();
   input += synapse0x1b9b0a0();
   input += synapse0x1b9b0e0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b99fc0() {
   double input = input0x1b99fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b9b120() {
   double input = 1.03987;
   input += synapse0x1b9b460();
   input += synapse0x1b9b4a0();
   input += synapse0x1b9b4e0();
   input += synapse0x1b9b520();
   input += synapse0x1b9b560();
   input += synapse0x1b9b5a0();
   input += synapse0x1b9b5e0();
   input += synapse0x1b9b620();
   input += synapse0x1b9b660();
   input += synapse0x1b9b6a0();
   input += synapse0x1b9b6e0();
   input += synapse0x1b9b720();
   input += synapse0x1b9b760();
   input += synapse0x1b9b7a0();
   input += synapse0x1b9b7e0();
   input += synapse0x1b9b820();
   input += synapse0x1b9b2b0();
   input += synapse0x1b9b2f0();
   input += synapse0x1b9b970();
   input += synapse0x1b9b9b0();
   input += synapse0x1b9b9f0();
   input += synapse0x1b9ba30();
   input += synapse0x1b9ba70();
   input += synapse0x1b9bab0();
   input += synapse0x1b9baf0();
   input += synapse0x1b9bb30();
   input += synapse0x1b9bb70();
   input += synapse0x1b9bbb0();
   input += synapse0x1b9bbf0();
   input += synapse0x1b9bc30();
   input += synapse0x1b9bc70();
   input += synapse0x1b9bcb0();
   input += synapse0x1b9b860();
   input += synapse0x1b9b8a0();
   input += synapse0x1b9b8e0();
   input += synapse0x1b9b920();
   input += synapse0x1b9bf00();
   input += synapse0x1b9bf40();
   input += synapse0x1b9bf80();
   input += synapse0x1b9bfc0();
   input += synapse0x1b9c000();
   input += synapse0x1b9c040();
   input += synapse0x1b9c080();
   input += synapse0x1b9c0c0();
   input += synapse0x1b9c100();
   input += synapse0x1b9c140();
   input += synapse0x1b9c180();
   input += synapse0x1b9c1c0();
   input += synapse0x1b9c200();
   input += synapse0x1b9c240();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b9b120() {
   double input = input0x1b9b120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLdL::input0x1b9c280() {
   double input = 6.61427;
   input += synapse0x1b9c4a0();
   input += synapse0x1b9c4e0();
   input += synapse0x1b9c520();
   input += synapse0x1b9c560();
   input += synapse0x1b9c5a0();
   return input;
}

double NNfunction_ss_sLdL::neuron0x1b9c280() {
   double input = input0x1b9c280();
   return (input * 1)+0;
}

double NNfunction_ss_sLdL::synapse0x1b68230() {
   return (neuron0x1b68370()*0.183957);
}

double NNfunction_ss_sLdL::synapse0x1b68270() {
   return (neuron0x1b686b0()*0.240413);
}

double NNfunction_ss_sLdL::synapse0x1b6d650() {
   return (neuron0x1b689f0()*-0.103962);
}

double NNfunction_ss_sLdL::synapse0x1b6d690() {
   return (neuron0x1b68d30()*-0.491495);
}

double NNfunction_ss_sLdL::synapse0x1b6d6d0() {
   return (neuron0x1b69070()*0.208652);
}

double NNfunction_ss_sLdL::synapse0x1b6d710() {
   return (neuron0x1b693b0()*0.794703);
}

double NNfunction_ss_sLdL::synapse0x1b6d750() {
   return (neuron0x1b696f0()*0.0749569);
}

double NNfunction_ss_sLdL::synapse0x1b6d790() {
   return (neuron0x1b69a30()*0.592076);
}

double NNfunction_ss_sLdL::synapse0x1b6d7d0() {
   return (neuron0x1b69d70()*0.2972);
}

double NNfunction_ss_sLdL::synapse0x1b6d810() {
   return (neuron0x1b6a0b0()*-0.391186);
}

double NNfunction_ss_sLdL::synapse0x1b6d850() {
   return (neuron0x1b6a3f0()*0.0338728);
}

double NNfunction_ss_sLdL::synapse0x1b6d890() {
   return (neuron0x1b6a730()*0.11768);
}

double NNfunction_ss_sLdL::synapse0x1b6d8d0() {
   return (neuron0x1b6aa70()*-0.0492027);
}

double NNfunction_ss_sLdL::synapse0x1b6d910() {
   return (neuron0x1b6adb0()*0.942138);
}

double NNfunction_ss_sLdL::synapse0x1b6d950() {
   return (neuron0x1b6b0f0()*-0.431368);
}

double NNfunction_ss_sLdL::synapse0x1b6d990() {
   return (neuron0x1b6b430()*0.257468);
}

double NNfunction_ss_sLdL::synapse0x1b681a0() {
   return (neuron0x1b6b770()*-0.179582);
}

double NNfunction_ss_sLdL::synapse0x1b681e0() {
   return (neuron0x1b6bcd0()*-1.31392);
}

double NNfunction_ss_sLdL::synapse0x1923560() {
   return (neuron0x1b6bef0()*0.911696);
}

double NNfunction_ss_sLdL::synapse0x19235a0() {
   return (neuron0x1b6c230()*0.225598);
}

double NNfunction_ss_sLdL::synapse0x1b6dbf0() {
   return (neuron0x1b6c570()*0.852725);
}

double NNfunction_ss_sLdL::synapse0x1b6dc30() {
   return (neuron0x1b6c8b0()*0.0231173);
}

double NNfunction_ss_sLdL::synapse0x1b6dc70() {
   return (neuron0x1b6cbf0()*0.23296);
}

double NNfunction_ss_sLdL::synapse0x1b6dcb0() {
   return (neuron0x1b6cf30()*-0.337935);
}

double NNfunction_ss_sLdL::synapse0x1b6e030() {
   return (neuron0x1b68370()*-0.207158);
}

double NNfunction_ss_sLdL::synapse0x1b6e070() {
   return (neuron0x1b686b0()*-0.674196);
}

double NNfunction_ss_sLdL::synapse0x1b6e0b0() {
   return (neuron0x1b689f0()*0.611446);
}

double NNfunction_ss_sLdL::synapse0x1b6e0f0() {
   return (neuron0x1b68d30()*0.454352);
}

double NNfunction_ss_sLdL::synapse0x1b6e130() {
   return (neuron0x1b69070()*-0.589538);
}

double NNfunction_ss_sLdL::synapse0x1b6e170() {
   return (neuron0x1b693b0()*0.214917);
}

double NNfunction_ss_sLdL::synapse0x1b6e1b0() {
   return (neuron0x1b696f0()*0.199119);
}

double NNfunction_ss_sLdL::synapse0x1b6e1f0() {
   return (neuron0x1b69a30()*0.571335);
}

double NNfunction_ss_sLdL::synapse0x1b6e230() {
   return (neuron0x1b69d70()*0.0962003);
}

double NNfunction_ss_sLdL::synapse0x1b6dae0() {
   return (neuron0x1b6a0b0()*0.0862189);
}

double NNfunction_ss_sLdL::synapse0x1b6db20() {
   return (neuron0x1b6a3f0()*-0.672407);
}

double NNfunction_ss_sLdL::synapse0x1b6db60() {
   return (neuron0x1b6a730()*0.134174);
}

double NNfunction_ss_sLdL::synapse0x1b6dba0() {
   return (neuron0x1b6aa70()*-0.933776);
}

double NNfunction_ss_sLdL::synapse0x1b6e480() {
   return (neuron0x1b6adb0()*-0.663006);
}

double NNfunction_ss_sLdL::synapse0x1b6e4c0() {
   return (neuron0x1b6b0f0()*0.104482);
}

double NNfunction_ss_sLdL::synapse0x1b6e500() {
   return (neuron0x1b6b430()*-0.220622);
}

double NNfunction_ss_sLdL::synapse0x1b6de80() {
   return (neuron0x1b6b770()*-0.39187);
}

double NNfunction_ss_sLdL::synapse0x1b6dec0() {
   return (neuron0x1b6bcd0()*-0.124048);
}

double NNfunction_ss_sLdL::synapse0x1b6e650() {
   return (neuron0x1b6bef0()*0.415799);
}

double NNfunction_ss_sLdL::synapse0x1b6e690() {
   return (neuron0x1b6c230()*-0.517044);
}

double NNfunction_ss_sLdL::synapse0x1b6e6d0() {
   return (neuron0x1b6c570()*-0.355606);
}

double NNfunction_ss_sLdL::synapse0x1b6e710() {
   return (neuron0x1b6c8b0()*-0.258186);
}

double NNfunction_ss_sLdL::synapse0x1b6e750() {
   return (neuron0x1b6cbf0()*0.176183);
}

double NNfunction_ss_sLdL::synapse0x1b6e790() {
   return (neuron0x1b6cf30()*0.556906);
}

double NNfunction_ss_sLdL::synapse0x1b6eb10() {
   return (neuron0x1b68370()*0.00890521);
}

double NNfunction_ss_sLdL::synapse0x1b6eb50() {
   return (neuron0x1b686b0()*-0.00305885);
}

double NNfunction_ss_sLdL::synapse0x1b6eb90() {
   return (neuron0x1b689f0()*0.0325463);
}

double NNfunction_ss_sLdL::synapse0x1b6ebd0() {
   return (neuron0x1b68d30()*-0.0260695);
}

double NNfunction_ss_sLdL::synapse0x1b6ec10() {
   return (neuron0x1b69070()*0.00656081);
}

double NNfunction_ss_sLdL::synapse0x1b6ec50() {
   return (neuron0x1b693b0()*0.00891215);
}

double NNfunction_ss_sLdL::synapse0x1b6ec90() {
   return (neuron0x1b696f0()*0.0150816);
}

double NNfunction_ss_sLdL::synapse0x1b6ecd0() {
   return (neuron0x1b69a30()*0.00719888);
}

double NNfunction_ss_sLdL::synapse0x1b6ed10() {
   return (neuron0x1b69d70()*-0.00185614);
}

double NNfunction_ss_sLdL::synapse0x1b6ed50() {
   return (neuron0x1b6a0b0()*0.0027985);
}

double NNfunction_ss_sLdL::synapse0x1b6ed90() {
   return (neuron0x1b6a3f0()*0.00690629);
}

double NNfunction_ss_sLdL::synapse0x1b6edd0() {
   return (neuron0x1b6a730()*-0.673686);
}

double NNfunction_ss_sLdL::synapse0x1b6ee10() {
   return (neuron0x1b6aa70()*0.106081);
}

double NNfunction_ss_sLdL::synapse0x1b6ee50() {
   return (neuron0x1b6adb0()*-0.0134388);
}

double NNfunction_ss_sLdL::synapse0x1b6ee90() {
   return (neuron0x1b6b0f0()*0.00188882);
}

double NNfunction_ss_sLdL::synapse0x1b6eed0() {
   return (neuron0x1b6b430()*0.0225735);
}

double NNfunction_ss_sLdL::synapse0x1b6e960() {
   return (neuron0x1b6b770()*0.00165113);
}

double NNfunction_ss_sLdL::synapse0x1b6e9a0() {
   return (neuron0x1b6bcd0()*-0.0117359);
}

double NNfunction_ss_sLdL::synapse0x1923c00() {
   return (neuron0x1b6bef0()*-0.000386034);
}

double NNfunction_ss_sLdL::synapse0x19314d0() {
   return (neuron0x1b6c230()*-0.000850445);
}

double NNfunction_ss_sLdL::synapse0x1931510() {
   return (neuron0x1b6c570()*0.00309527);
}

double NNfunction_ss_sLdL::synapse0x1b57400() {
   return (neuron0x1b6c8b0()*0.00433889);
}

double NNfunction_ss_sLdL::synapse0x1b57440() {
   return (neuron0x1b6cbf0()*-0.00523554);
}

double NNfunction_ss_sLdL::synapse0x1b57480() {
   return (neuron0x1b6cf30()*-0.00689247);
}

double NNfunction_ss_sLdL::synapse0x1931d50() {
   return (neuron0x1b68370()*-0.63449);
}

double NNfunction_ss_sLdL::synapse0x1b6e400() {
   return (neuron0x1b686b0()*-0.287154);
}

double NNfunction_ss_sLdL::synapse0x1b6e440() {
   return (neuron0x1b689f0()*0.137879);
}

double NNfunction_ss_sLdL::synapse0x1b6f020() {
   return (neuron0x1b68d30()*-0.921748);
}

double NNfunction_ss_sLdL::synapse0x1b6f060() {
   return (neuron0x1b69070()*-0.554402);
}

double NNfunction_ss_sLdL::synapse0x1b6f0a0() {
   return (neuron0x1b693b0()*-0.526394);
}

double NNfunction_ss_sLdL::synapse0x1b6f0e0() {
   return (neuron0x1b696f0()*0.0874226);
}

double NNfunction_ss_sLdL::synapse0x1b6f120() {
   return (neuron0x1b69a30()*-0.325405);
}

double NNfunction_ss_sLdL::synapse0x1b6f160() {
   return (neuron0x1b69d70()*-0.152029);
}

double NNfunction_ss_sLdL::synapse0x1b6f1a0() {
   return (neuron0x1b6a0b0()*-0.377484);
}

double NNfunction_ss_sLdL::synapse0x1b6f1e0() {
   return (neuron0x1b6a3f0()*-0.146237);
}

double NNfunction_ss_sLdL::synapse0x1b6f220() {
   return (neuron0x1b6a730()*0.728519);
}

double NNfunction_ss_sLdL::synapse0x1b6f260() {
   return (neuron0x1b6aa70()*0.158399);
}

double NNfunction_ss_sLdL::synapse0x1b6f2a0() {
   return (neuron0x1b6adb0()*0.201507);
}

double NNfunction_ss_sLdL::synapse0x1b6f2e0() {
   return (neuron0x1b6b0f0()*-0.560201);
}

double NNfunction_ss_sLdL::synapse0x1b6f320() {
   return (neuron0x1b6b430()*0.822757);
}

double NNfunction_ss_sLdL::synapse0x1b682b0() {
   return (neuron0x1b6b770()*-0.0145496);
}

double NNfunction_ss_sLdL::synapse0x1b682f0() {
   return (neuron0x1b6bcd0()*0.54849);
}

double NNfunction_ss_sLdL::synapse0x1b68330() {
   return (neuron0x1b6bef0()*0.395783);
}

double NNfunction_ss_sLdL::synapse0x1b6f470() {
   return (neuron0x1b6c230()*0.296002);
}

double NNfunction_ss_sLdL::synapse0x1b6f4b0() {
   return (neuron0x1b6c570()*-0.737397);
}

double NNfunction_ss_sLdL::synapse0x1b6f4f0() {
   return (neuron0x1b6c8b0()*-0.235973);
}

double NNfunction_ss_sLdL::synapse0x1b6f530() {
   return (neuron0x1b6cbf0()*-0.0204369);
}

double NNfunction_ss_sLdL::synapse0x1b6f570() {
   return (neuron0x1b6cf30()*-0.560453);
}

double NNfunction_ss_sLdL::synapse0x1b6f8f0() {
   return (neuron0x1b68370()*-0.018266);
}

double NNfunction_ss_sLdL::synapse0x1b6f930() {
   return (neuron0x1b686b0()*-0.00405287);
}

double NNfunction_ss_sLdL::synapse0x1b6f970() {
   return (neuron0x1b689f0()*0.059139);
}

double NNfunction_ss_sLdL::synapse0x1b6f9b0() {
   return (neuron0x1b68d30()*5.36262);
}

double NNfunction_ss_sLdL::synapse0x1b6f9f0() {
   return (neuron0x1b69070()*-0.00677944);
}

double NNfunction_ss_sLdL::synapse0x1b6fa30() {
   return (neuron0x1b693b0()*-0.0132418);
}

double NNfunction_ss_sLdL::synapse0x1b6fa70() {
   return (neuron0x1b696f0()*0.00376375);
}

double NNfunction_ss_sLdL::synapse0x1b6fab0() {
   return (neuron0x1b69a30()*0.0391516);
}

double NNfunction_ss_sLdL::synapse0x1b6faf0() {
   return (neuron0x1b69d70()*-0.0119402);
}

double NNfunction_ss_sLdL::synapse0x1b6fb30() {
   return (neuron0x1b6a0b0()*0.0229357);
}

double NNfunction_ss_sLdL::synapse0x1b6fb70() {
   return (neuron0x1b6a3f0()*0.0270666);
}

double NNfunction_ss_sLdL::synapse0x1b6fbb0() {
   return (neuron0x1b6a730()*-0.501136);
}

double NNfunction_ss_sLdL::synapse0x1b6fbf0() {
   return (neuron0x1b6aa70()*-0.427999);
}

double NNfunction_ss_sLdL::synapse0x1b6fc30() {
   return (neuron0x1b6adb0()*0.034527);
}

double NNfunction_ss_sLdL::synapse0x1b6fc70() {
   return (neuron0x1b6b0f0()*-0.00924982);
}

double NNfunction_ss_sLdL::synapse0x1b6fcb0() {
   return (neuron0x1b6b430()*-0.00575613);
}

double NNfunction_ss_sLdL::synapse0x1b6f740() {
   return (neuron0x1b6b770()*0.0162758);
}

double NNfunction_ss_sLdL::synapse0x1b6f780() {
   return (neuron0x1b6bcd0()*0.036092);
}

double NNfunction_ss_sLdL::synapse0x1b6fe00() {
   return (neuron0x1b6bef0()*0.0169654);
}

double NNfunction_ss_sLdL::synapse0x1b6fe40() {
   return (neuron0x1b6c230()*0.0262658);
}

double NNfunction_ss_sLdL::synapse0x1b6fe80() {
   return (neuron0x1b6c570()*0.00498369);
}

double NNfunction_ss_sLdL::synapse0x1b6fec0() {
   return (neuron0x1b6c8b0()*0.00132034);
}

double NNfunction_ss_sLdL::synapse0x1b6ff00() {
   return (neuron0x1b6cbf0()*0.00255234);
}

double NNfunction_ss_sLdL::synapse0x1b6ff40() {
   return (neuron0x1b6cf30()*-0.0316192);
}

double NNfunction_ss_sLdL::synapse0x1b702c0() {
   return (neuron0x1b68370()*0.194468);
}

double NNfunction_ss_sLdL::synapse0x1b70300() {
   return (neuron0x1b686b0()*0.589654);
}

double NNfunction_ss_sLdL::synapse0x1b70340() {
   return (neuron0x1b689f0()*0.0274663);
}

double NNfunction_ss_sLdL::synapse0x1b70380() {
   return (neuron0x1b68d30()*0.104703);
}

double NNfunction_ss_sLdL::synapse0x1b703c0() {
   return (neuron0x1b69070()*-0.788756);
}

double NNfunction_ss_sLdL::synapse0x1b70400() {
   return (neuron0x1b693b0()*0.407759);
}

double NNfunction_ss_sLdL::synapse0x1b70440() {
   return (neuron0x1b696f0()*-0.525872);
}

double NNfunction_ss_sLdL::synapse0x1b70480() {
   return (neuron0x1b69a30()*-0.0393014);
}

double NNfunction_ss_sLdL::synapse0x1b704c0() {
   return (neuron0x1b69d70()*-0.209859);
}

double NNfunction_ss_sLdL::synapse0x1931820() {
   return (neuron0x1b6a0b0()*0.779205);
}

double NNfunction_ss_sLdL::synapse0x1931860() {
   return (neuron0x1b6a3f0()*0.30931);
}

double NNfunction_ss_sLdL::synapse0x19318a0() {
   return (neuron0x1b6a730()*0.240803);
}

double NNfunction_ss_sLdL::synapse0x19318e0() {
   return (neuron0x1b6aa70()*-0.953362);
}

double NNfunction_ss_sLdL::synapse0x1931920() {
   return (neuron0x1b6adb0()*0.016112);
}

double NNfunction_ss_sLdL::synapse0x1931960() {
   return (neuron0x1b6b0f0()*-0.63073);
}

double NNfunction_ss_sLdL::synapse0x19319a0() {
   return (neuron0x1b6b430()*-0.603501);
}

double NNfunction_ss_sLdL::synapse0x1b70110() {
   return (neuron0x1b6b770()*0.0679802);
}

double NNfunction_ss_sLdL::synapse0x1b70150() {
   return (neuron0x1b6bcd0()*-0.305971);
}

double NNfunction_ss_sLdL::synapse0x1931af0() {
   return (neuron0x1b6bef0()*0.608667);
}

double NNfunction_ss_sLdL::synapse0x1931b30() {
   return (neuron0x1b6c230()*0.414981);
}

double NNfunction_ss_sLdL::synapse0x1931b70() {
   return (neuron0x1b6c570()*0.15264);
}

double NNfunction_ss_sLdL::synapse0x1931bb0() {
   return (neuron0x1b6c8b0()*-0.235016);
}

double NNfunction_ss_sLdL::synapse0x1931bf0() {
   return (neuron0x1b6cbf0()*0.804892);
}

double NNfunction_ss_sLdL::synapse0x1b70d10() {
   return (neuron0x1b6cf30()*0.137824);
}

double NNfunction_ss_sLdL::synapse0x1b71090() {
   return (neuron0x1b68370()*-0.212863);
}

double NNfunction_ss_sLdL::synapse0x1b710d0() {
   return (neuron0x1b686b0()*0.0954847);
}

double NNfunction_ss_sLdL::synapse0x1b71110() {
   return (neuron0x1b689f0()*-0.418914);
}

double NNfunction_ss_sLdL::synapse0x1b71150() {
   return (neuron0x1b68d30()*0.149312);
}

double NNfunction_ss_sLdL::synapse0x1b71190() {
   return (neuron0x1b69070()*-0.213524);
}

double NNfunction_ss_sLdL::synapse0x1b711d0() {
   return (neuron0x1b693b0()*-0.593874);
}

double NNfunction_ss_sLdL::synapse0x1b71210() {
   return (neuron0x1b696f0()*-0.701106);
}

double NNfunction_ss_sLdL::synapse0x1b71250() {
   return (neuron0x1b69a30()*-0.0603788);
}

double NNfunction_ss_sLdL::synapse0x1b71290() {
   return (neuron0x1b69d70()*0.274276);
}

double NNfunction_ss_sLdL::synapse0x1b712d0() {
   return (neuron0x1b6a0b0()*0.558043);
}

double NNfunction_ss_sLdL::synapse0x1b71310() {
   return (neuron0x1b6a3f0()*0.0921873);
}

double NNfunction_ss_sLdL::synapse0x1b71350() {
   return (neuron0x1b6a730()*-0.149608);
}

double NNfunction_ss_sLdL::synapse0x1b71390() {
   return (neuron0x1b6aa70()*0.0367137);
}

double NNfunction_ss_sLdL::synapse0x1b713d0() {
   return (neuron0x1b6adb0()*-0.3439);
}

double NNfunction_ss_sLdL::synapse0x1b71410() {
   return (neuron0x1b6b0f0()*0.422963);
}

double NNfunction_ss_sLdL::synapse0x1b71450() {
   return (neuron0x1b6b430()*-0.380091);
}

double NNfunction_ss_sLdL::synapse0x1b70ee0() {
   return (neuron0x1b6b770()*0.0451197);
}

double NNfunction_ss_sLdL::synapse0x1b70f20() {
   return (neuron0x1b6bcd0()*0.0773442);
}

double NNfunction_ss_sLdL::synapse0x1b715a0() {
   return (neuron0x1b6bef0()*-0.0779717);
}

double NNfunction_ss_sLdL::synapse0x1b715e0() {
   return (neuron0x1b6c230()*0.481501);
}

double NNfunction_ss_sLdL::synapse0x1b71620() {
   return (neuron0x1b6c570()*0.885917);
}

double NNfunction_ss_sLdL::synapse0x1b71660() {
   return (neuron0x1b6c8b0()*0.317936);
}

double NNfunction_ss_sLdL::synapse0x1b716a0() {
   return (neuron0x1b6cbf0()*-0.00558022);
}

double NNfunction_ss_sLdL::synapse0x1b716e0() {
   return (neuron0x1b6cf30()*0.00659658);
}

double NNfunction_ss_sLdL::synapse0x1b71a60() {
   return (neuron0x1b68370()*-0.19228);
}

double NNfunction_ss_sLdL::synapse0x1b71aa0() {
   return (neuron0x1b686b0()*-0.564003);
}

double NNfunction_ss_sLdL::synapse0x1b71ae0() {
   return (neuron0x1b689f0()*-0.225831);
}

double NNfunction_ss_sLdL::synapse0x1b71b20() {
   return (neuron0x1b68d30()*-1.15703);
}

double NNfunction_ss_sLdL::synapse0x1b71b60() {
   return (neuron0x1b69070()*0.287392);
}

double NNfunction_ss_sLdL::synapse0x1b71ba0() {
   return (neuron0x1b693b0()*-0.0690139);
}

double NNfunction_ss_sLdL::synapse0x1b71be0() {
   return (neuron0x1b696f0()*0.118225);
}

double NNfunction_ss_sLdL::synapse0x1b71c20() {
   return (neuron0x1b69a30()*0.0910793);
}

double NNfunction_ss_sLdL::synapse0x1b71c60() {
   return (neuron0x1b69d70()*0.128099);
}

double NNfunction_ss_sLdL::synapse0x1b71ca0() {
   return (neuron0x1b6a0b0()*-0.0550397);
}

double NNfunction_ss_sLdL::synapse0x1b71ce0() {
   return (neuron0x1b6a3f0()*0.288383);
}

double NNfunction_ss_sLdL::synapse0x1b71d20() {
   return (neuron0x1b6a730()*-1.57518);
}

double NNfunction_ss_sLdL::synapse0x1b71d60() {
   return (neuron0x1b6aa70()*0.453747);
}

double NNfunction_ss_sLdL::synapse0x1b71da0() {
   return (neuron0x1b6adb0()*-0.314744);
}

double NNfunction_ss_sLdL::synapse0x1b71de0() {
   return (neuron0x1b6b0f0()*0.188691);
}

double NNfunction_ss_sLdL::synapse0x1b71e20() {
   return (neuron0x1b6b430()*1.01526);
}

double NNfunction_ss_sLdL::synapse0x1b718b0() {
   return (neuron0x1b6b770()*0.626591);
}

double NNfunction_ss_sLdL::synapse0x1b718f0() {
   return (neuron0x1b6bcd0()*0.190004);
}

double NNfunction_ss_sLdL::synapse0x1b71f70() {
   return (neuron0x1b6bef0()*0.0830461);
}

double NNfunction_ss_sLdL::synapse0x1b71fb0() {
   return (neuron0x1b6c230()*0.196039);
}

double NNfunction_ss_sLdL::synapse0x1b71ff0() {
   return (neuron0x1b6c570()*0.00216486);
}

double NNfunction_ss_sLdL::synapse0x1b72030() {
   return (neuron0x1b6c8b0()*0.0342044);
}

double NNfunction_ss_sLdL::synapse0x1b72070() {
   return (neuron0x1b6cbf0()*-0.148811);
}

double NNfunction_ss_sLdL::synapse0x1b720b0() {
   return (neuron0x1b6cf30()*0.0454464);
}

double NNfunction_ss_sLdL::synapse0x1b6bbc0() {
   return (neuron0x1b68370()*-0.0523785);
}

double NNfunction_ss_sLdL::synapse0x1b6bc00() {
   return (neuron0x1b686b0()*0.0117996);
}

double NNfunction_ss_sLdL::synapse0x1b6bc40() {
   return (neuron0x1b689f0()*0.0669894);
}

double NNfunction_ss_sLdL::synapse0x1b6bc80() {
   return (neuron0x1b68d30()*-0.0247734);
}

double NNfunction_ss_sLdL::synapse0x1b72640() {
   return (neuron0x1b69070()*0.0111091);
}

double NNfunction_ss_sLdL::synapse0x1b72680() {
   return (neuron0x1b693b0()*0.00174174);
}

double NNfunction_ss_sLdL::synapse0x1b726c0() {
   return (neuron0x1b696f0()*0.0140792);
}

double NNfunction_ss_sLdL::synapse0x1b72700() {
   return (neuron0x1b69a30()*-0.0322949);
}

double NNfunction_ss_sLdL::synapse0x1b72740() {
   return (neuron0x1b69d70()*0.00624589);
}

double NNfunction_ss_sLdL::synapse0x1b72780() {
   return (neuron0x1b6a0b0()*0.0264079);
}

double NNfunction_ss_sLdL::synapse0x1b727c0() {
   return (neuron0x1b6a3f0()*-0.00090577);
}

double NNfunction_ss_sLdL::synapse0x1b72800() {
   return (neuron0x1b6a730()*0.0347385);
}

double NNfunction_ss_sLdL::synapse0x1b72840() {
   return (neuron0x1b6aa70()*-1.99769);
}

double NNfunction_ss_sLdL::synapse0x1b72880() {
   return (neuron0x1b6adb0()*0.0161568);
}

double NNfunction_ss_sLdL::synapse0x1b728c0() {
   return (neuron0x1b6b0f0()*0.00723328);
}

double NNfunction_ss_sLdL::synapse0x1b72900() {
   return (neuron0x1b6b430()*-0.0223047);
}

double NNfunction_ss_sLdL::synapse0x1b72280() {
   return (neuron0x1b6b770()*-0.0133233);
}

double NNfunction_ss_sLdL::synapse0x1b722c0() {
   return (neuron0x1b6bcd0()*0.00489949);
}

double NNfunction_ss_sLdL::synapse0x1b72a50() {
   return (neuron0x1b6bef0()*-0.00673446);
}

double NNfunction_ss_sLdL::synapse0x1b72a90() {
   return (neuron0x1b6c230()*0.00257703);
}

double NNfunction_ss_sLdL::synapse0x1b72ad0() {
   return (neuron0x1b6c570()*0.000274103);
}

double NNfunction_ss_sLdL::synapse0x1b72b10() {
   return (neuron0x1b6c8b0()*-0.000196314);
}

double NNfunction_ss_sLdL::synapse0x1b72b50() {
   return (neuron0x1b6cbf0()*0.00866379);
}

double NNfunction_ss_sLdL::synapse0x1b72b90() {
   return (neuron0x1b6cf30()*0.0754674);
}

double NNfunction_ss_sLdL::synapse0x1b72f10() {
   return (neuron0x1b68370()*0.0995936);
}

double NNfunction_ss_sLdL::synapse0x1b72f50() {
   return (neuron0x1b686b0()*0.342012);
}

double NNfunction_ss_sLdL::synapse0x1b72f90() {
   return (neuron0x1b689f0()*-0.357288);
}

double NNfunction_ss_sLdL::synapse0x1b72fd0() {
   return (neuron0x1b68d30()*-0.873041);
}

double NNfunction_ss_sLdL::synapse0x1b73010() {
   return (neuron0x1b69070()*0.805388);
}

double NNfunction_ss_sLdL::synapse0x1b73050() {
   return (neuron0x1b693b0()*0.34543);
}

double NNfunction_ss_sLdL::synapse0x1b73090() {
   return (neuron0x1b696f0()*-0.617652);
}

double NNfunction_ss_sLdL::synapse0x1b730d0() {
   return (neuron0x1b69a30()*-0.594803);
}

double NNfunction_ss_sLdL::synapse0x1b73110() {
   return (neuron0x1b69d70()*-0.242595);
}

double NNfunction_ss_sLdL::synapse0x1b73150() {
   return (neuron0x1b6a0b0()*-0.331574);
}

double NNfunction_ss_sLdL::synapse0x1b73190() {
   return (neuron0x1b6a3f0()*1.11949);
}

double NNfunction_ss_sLdL::synapse0x1b731d0() {
   return (neuron0x1b6a730()*0.863971);
}

double NNfunction_ss_sLdL::synapse0x1b73210() {
   return (neuron0x1b6aa70()*-0.0622529);
}

double NNfunction_ss_sLdL::synapse0x1b73250() {
   return (neuron0x1b6adb0()*-0.651934);
}

double NNfunction_ss_sLdL::synapse0x1b73290() {
   return (neuron0x1b6b0f0()*0.18368);
}

double NNfunction_ss_sLdL::synapse0x1b732d0() {
   return (neuron0x1b6b430()*0.453457);
}

double NNfunction_ss_sLdL::synapse0x1b72d60() {
   return (neuron0x1b6b770()*0.102759);
}

double NNfunction_ss_sLdL::synapse0x1b72da0() {
   return (neuron0x1b6bcd0()*0.329961);
}

double NNfunction_ss_sLdL::synapse0x1b73420() {
   return (neuron0x1b6bef0()*-0.414711);
}

double NNfunction_ss_sLdL::synapse0x1b73460() {
   return (neuron0x1b6c230()*0.13093);
}

double NNfunction_ss_sLdL::synapse0x1b734a0() {
   return (neuron0x1b6c570()*0.237639);
}

double NNfunction_ss_sLdL::synapse0x1b734e0() {
   return (neuron0x1b6c8b0()*-0.524168);
}

double NNfunction_ss_sLdL::synapse0x1b73520() {
   return (neuron0x1b6cbf0()*-0.167473);
}

double NNfunction_ss_sLdL::synapse0x1b73560() {
   return (neuron0x1b6cf30()*0.0968041);
}

double NNfunction_ss_sLdL::synapse0x1b738e0() {
   return (neuron0x1b68370()*-0.0591675);
}

double NNfunction_ss_sLdL::synapse0x1b73920() {
   return (neuron0x1b686b0()*0.0110718);
}

double NNfunction_ss_sLdL::synapse0x1b73960() {
   return (neuron0x1b689f0()*-0.3084);
}

double NNfunction_ss_sLdL::synapse0x1b739a0() {
   return (neuron0x1b68d30()*0.300574);
}

double NNfunction_ss_sLdL::synapse0x1b739e0() {
   return (neuron0x1b69070()*0.0541489);
}

double NNfunction_ss_sLdL::synapse0x1b73a20() {
   return (neuron0x1b693b0()*0.0205787);
}

double NNfunction_ss_sLdL::synapse0x1b73a60() {
   return (neuron0x1b696f0()*0.0121043);
}

double NNfunction_ss_sLdL::synapse0x1b73aa0() {
   return (neuron0x1b69a30()*-0.0903923);
}

double NNfunction_ss_sLdL::synapse0x1b73ae0() {
   return (neuron0x1b69d70()*-0.00526097);
}

double NNfunction_ss_sLdL::synapse0x1b73b20() {
   return (neuron0x1b6a0b0()*0.00155519);
}

double NNfunction_ss_sLdL::synapse0x1b73b60() {
   return (neuron0x1b6a3f0()*-0.00944545);
}

double NNfunction_ss_sLdL::synapse0x1b73ba0() {
   return (neuron0x1b6a730()*0.395467);
}

double NNfunction_ss_sLdL::synapse0x1b73be0() {
   return (neuron0x1b6aa70()*0.377913);
}

double NNfunction_ss_sLdL::synapse0x1b73c20() {
   return (neuron0x1b6adb0()*-0.00917575);
}

double NNfunction_ss_sLdL::synapse0x1b73c60() {
   return (neuron0x1b6b0f0()*0.0285398);
}

double NNfunction_ss_sLdL::synapse0x1b73ca0() {
   return (neuron0x1b6b430()*0.0370682);
}

double NNfunction_ss_sLdL::synapse0x1b73730() {
   return (neuron0x1b6b770()*0.00942567);
}

double NNfunction_ss_sLdL::synapse0x1b73770() {
   return (neuron0x1b6bcd0()*0.0606866);
}

double NNfunction_ss_sLdL::synapse0x1b70500() {
   return (neuron0x1b6bef0()*0.0633316);
}

double NNfunction_ss_sLdL::synapse0x1b70540() {
   return (neuron0x1b6c230()*-0.0201768);
}

double NNfunction_ss_sLdL::synapse0x1b70580() {
   return (neuron0x1b6c570()*0.0149577);
}

double NNfunction_ss_sLdL::synapse0x1b705c0() {
   return (neuron0x1b6c8b0()*0.00373418);
}

double NNfunction_ss_sLdL::synapse0x1b70600() {
   return (neuron0x1b6cbf0()*-0.0523311);
}

double NNfunction_ss_sLdL::synapse0x1b70640() {
   return (neuron0x1b6cf30()*0.00862188);
}

double NNfunction_ss_sLdL::synapse0x1b709c0() {
   return (neuron0x1b68370()*-0.167495);
}

double NNfunction_ss_sLdL::synapse0x1b70a00() {
   return (neuron0x1b686b0()*0.172979);
}

double NNfunction_ss_sLdL::synapse0x1b70a40() {
   return (neuron0x1b689f0()*-0.72794);
}

double NNfunction_ss_sLdL::synapse0x1b70a80() {
   return (neuron0x1b68d30()*0.472495);
}

double NNfunction_ss_sLdL::synapse0x1b70ac0() {
   return (neuron0x1b69070()*0.525338);
}

double NNfunction_ss_sLdL::synapse0x1b70b00() {
   return (neuron0x1b693b0()*0.539339);
}

double NNfunction_ss_sLdL::synapse0x1b70b40() {
   return (neuron0x1b696f0()*-0.0604005);
}

double NNfunction_ss_sLdL::synapse0x1b70b80() {
   return (neuron0x1b69a30()*0.615482);
}

double NNfunction_ss_sLdL::synapse0x1b70bc0() {
   return (neuron0x1b69d70()*1.11406);
}

double NNfunction_ss_sLdL::synapse0x1b70c00() {
   return (neuron0x1b6a0b0()*-0.369753);
}

double NNfunction_ss_sLdL::synapse0x1b70c40() {
   return (neuron0x1b6a3f0()*-0.200936);
}

double NNfunction_ss_sLdL::synapse0x1b70c80() {
   return (neuron0x1b6a730()*0.0630528);
}

double NNfunction_ss_sLdL::synapse0x1b70cc0() {
   return (neuron0x1b6aa70()*-0.566772);
}

double NNfunction_ss_sLdL::synapse0x1b74e00() {
   return (neuron0x1b6adb0()*0.00288334);
}

double NNfunction_ss_sLdL::synapse0x1b74e40() {
   return (neuron0x1b6b0f0()*0.048958);
}

double NNfunction_ss_sLdL::synapse0x1b74e80() {
   return (neuron0x1b6b430()*-1.34705);
}

double NNfunction_ss_sLdL::synapse0x1b70810() {
   return (neuron0x1b6b770()*1.01908);
}

double NNfunction_ss_sLdL::synapse0x1b70850() {
   return (neuron0x1b6bcd0()*-0.954471);
}

double NNfunction_ss_sLdL::synapse0x1b74fd0() {
   return (neuron0x1b6bef0()*-0.156527);
}

double NNfunction_ss_sLdL::synapse0x1b75010() {
   return (neuron0x1b6c230()*-0.411645);
}

double NNfunction_ss_sLdL::synapse0x1b75050() {
   return (neuron0x1b6c570()*-0.394772);
}

double NNfunction_ss_sLdL::synapse0x1b75090() {
   return (neuron0x1b6c8b0()*-0.11091);
}

double NNfunction_ss_sLdL::synapse0x1b750d0() {
   return (neuron0x1b6cbf0()*0.461552);
}

double NNfunction_ss_sLdL::synapse0x1b75110() {
   return (neuron0x1b6cf30()*-0.106307);
}

double NNfunction_ss_sLdL::synapse0x1b75490() {
   return (neuron0x1b68370()*-0.182654);
}

double NNfunction_ss_sLdL::synapse0x1b754d0() {
   return (neuron0x1b686b0()*-0.74071);
}

double NNfunction_ss_sLdL::synapse0x1b75510() {
   return (neuron0x1b689f0()*-0.486386);
}

double NNfunction_ss_sLdL::synapse0x1b75550() {
   return (neuron0x1b68d30()*-0.752818);
}

double NNfunction_ss_sLdL::synapse0x1b75590() {
   return (neuron0x1b69070()*0.3671);
}

double NNfunction_ss_sLdL::synapse0x1b755d0() {
   return (neuron0x1b693b0()*-0.615365);
}

double NNfunction_ss_sLdL::synapse0x1b75610() {
   return (neuron0x1b696f0()*0.580231);
}

double NNfunction_ss_sLdL::synapse0x1b75650() {
   return (neuron0x1b69a30()*0.250736);
}

double NNfunction_ss_sLdL::synapse0x1b75690() {
   return (neuron0x1b69d70()*0.0195582);
}

double NNfunction_ss_sLdL::synapse0x1b756d0() {
   return (neuron0x1b6a0b0()*0.498623);
}

double NNfunction_ss_sLdL::synapse0x1b75710() {
   return (neuron0x1b6a3f0()*0.453795);
}

double NNfunction_ss_sLdL::synapse0x1b75750() {
   return (neuron0x1b6a730()*-0.055795);
}

double NNfunction_ss_sLdL::synapse0x1b75790() {
   return (neuron0x1b6aa70()*0.608968);
}

double NNfunction_ss_sLdL::synapse0x1b757d0() {
   return (neuron0x1b6adb0()*0.0463245);
}

double NNfunction_ss_sLdL::synapse0x1b75810() {
   return (neuron0x1b6b0f0()*-0.385325);
}

double NNfunction_ss_sLdL::synapse0x1b75850() {
   return (neuron0x1b6b430()*-0.475515);
}

double NNfunction_ss_sLdL::synapse0x1b752e0() {
   return (neuron0x1b6b770()*-0.301889);
}

double NNfunction_ss_sLdL::synapse0x1b75320() {
   return (neuron0x1b6bcd0()*-0.102087);
}

double NNfunction_ss_sLdL::synapse0x1b759a0() {
   return (neuron0x1b6bef0()*-0.239949);
}

double NNfunction_ss_sLdL::synapse0x1b759e0() {
   return (neuron0x1b6c230()*0.860723);
}

double NNfunction_ss_sLdL::synapse0x1b75a20() {
   return (neuron0x1b6c570()*-0.340741);
}

double NNfunction_ss_sLdL::synapse0x1b75a60() {
   return (neuron0x1b6c8b0()*0.521663);
}

double NNfunction_ss_sLdL::synapse0x1b75aa0() {
   return (neuron0x1b6cbf0()*0.0741055);
}

double NNfunction_ss_sLdL::synapse0x1b75ae0() {
   return (neuron0x1b6cf30()*-0.462586);
}

double NNfunction_ss_sLdL::synapse0x1b75e60() {
   return (neuron0x1b68370()*0.021287);
}

double NNfunction_ss_sLdL::synapse0x1b75ea0() {
   return (neuron0x1b686b0()*-0.0110714);
}

double NNfunction_ss_sLdL::synapse0x1b75ee0() {
   return (neuron0x1b689f0()*0.585953);
}

double NNfunction_ss_sLdL::synapse0x1b75f20() {
   return (neuron0x1b68d30()*-0.0170855);
}

double NNfunction_ss_sLdL::synapse0x1b75f60() {
   return (neuron0x1b69070()*-0.65796);
}

double NNfunction_ss_sLdL::synapse0x1b75fa0() {
   return (neuron0x1b693b0()*0.0849172);
}

double NNfunction_ss_sLdL::synapse0x1b75fe0() {
   return (neuron0x1b696f0()*-0.679084);
}

double NNfunction_ss_sLdL::synapse0x1b76020() {
   return (neuron0x1b69a30()*0.092634);
}

double NNfunction_ss_sLdL::synapse0x1b76060() {
   return (neuron0x1b69d70()*1.23886);
}

double NNfunction_ss_sLdL::synapse0x1b760a0() {
   return (neuron0x1b6a0b0()*0.298773);
}

double NNfunction_ss_sLdL::synapse0x1b760e0() {
   return (neuron0x1b6a3f0()*0.1904);
}

double NNfunction_ss_sLdL::synapse0x1b76120() {
   return (neuron0x1b6a730()*0.060209);
}

double NNfunction_ss_sLdL::synapse0x1b76160() {
   return (neuron0x1b6aa70()*0.894521);
}

double NNfunction_ss_sLdL::synapse0x1b761a0() {
   return (neuron0x1b6adb0()*-0.414676);
}

double NNfunction_ss_sLdL::synapse0x1b761e0() {
   return (neuron0x1b6b0f0()*-0.258155);
}

double NNfunction_ss_sLdL::synapse0x1b76220() {
   return (neuron0x1b6b430()*0.591739);
}

double NNfunction_ss_sLdL::synapse0x1b75cb0() {
   return (neuron0x1b6b770()*0.32554);
}

double NNfunction_ss_sLdL::synapse0x1b75cf0() {
   return (neuron0x1b6bcd0()*0.612119);
}

double NNfunction_ss_sLdL::synapse0x1b76370() {
   return (neuron0x1b6bef0()*-0.915271);
}

double NNfunction_ss_sLdL::synapse0x1b763b0() {
   return (neuron0x1b6c230()*0.365297);
}

double NNfunction_ss_sLdL::synapse0x1b763f0() {
   return (neuron0x1b6c570()*-0.062547);
}

double NNfunction_ss_sLdL::synapse0x1b76430() {
   return (neuron0x1b6c8b0()*-0.450064);
}

double NNfunction_ss_sLdL::synapse0x1b76470() {
   return (neuron0x1b6cbf0()*0.645143);
}

double NNfunction_ss_sLdL::synapse0x1b764b0() {
   return (neuron0x1b6cf30()*0.714571);
}

double NNfunction_ss_sLdL::synapse0x1b76830() {
   return (neuron0x1b68370()*0.050676);
}

double NNfunction_ss_sLdL::synapse0x1b76870() {
   return (neuron0x1b686b0()*-0.29958);
}

double NNfunction_ss_sLdL::synapse0x1b768b0() {
   return (neuron0x1b689f0()*-0.236276);
}

double NNfunction_ss_sLdL::synapse0x1b768f0() {
   return (neuron0x1b68d30()*-0.524169);
}

double NNfunction_ss_sLdL::synapse0x1b76930() {
   return (neuron0x1b69070()*0.180222);
}

double NNfunction_ss_sLdL::synapse0x1b76970() {
   return (neuron0x1b693b0()*0.199874);
}

double NNfunction_ss_sLdL::synapse0x1b769b0() {
   return (neuron0x1b696f0()*0.0673597);
}

double NNfunction_ss_sLdL::synapse0x1b769f0() {
   return (neuron0x1b69a30()*-0.0521115);
}

double NNfunction_ss_sLdL::synapse0x1b76a30() {
   return (neuron0x1b69d70()*0.0531959);
}

double NNfunction_ss_sLdL::synapse0x1b76a70() {
   return (neuron0x1b6a0b0()*-0.026603);
}

double NNfunction_ss_sLdL::synapse0x1b76ab0() {
   return (neuron0x1b6a3f0()*0.302432);
}

double NNfunction_ss_sLdL::synapse0x1b76af0() {
   return (neuron0x1b6a730()*-1.02996);
}

double NNfunction_ss_sLdL::synapse0x1b76b30() {
   return (neuron0x1b6aa70()*1.95217);
}

double NNfunction_ss_sLdL::synapse0x1b76b70() {
   return (neuron0x1b6adb0()*0.680962);
}

double NNfunction_ss_sLdL::synapse0x1b76bb0() {
   return (neuron0x1b6b0f0()*-0.146299);
}

double NNfunction_ss_sLdL::synapse0x1b76bf0() {
   return (neuron0x1b6b430()*-0.0498223);
}

double NNfunction_ss_sLdL::synapse0x1b76680() {
   return (neuron0x1b6b770()*0.284829);
}

double NNfunction_ss_sLdL::synapse0x1b766c0() {
   return (neuron0x1b6bcd0()*0.357946);
}

double NNfunction_ss_sLdL::synapse0x1b76d40() {
   return (neuron0x1b6bef0()*0.541641);
}

double NNfunction_ss_sLdL::synapse0x1b76d80() {
   return (neuron0x1b6c230()*-0.00492205);
}

double NNfunction_ss_sLdL::synapse0x1b76dc0() {
   return (neuron0x1b6c570()*0.0148524);
}

double NNfunction_ss_sLdL::synapse0x1b76e00() {
   return (neuron0x1b6c8b0()*-0.0122968);
}

double NNfunction_ss_sLdL::synapse0x1b76e40() {
   return (neuron0x1b6cbf0()*0.251654);
}

double NNfunction_ss_sLdL::synapse0x1b76e80() {
   return (neuron0x1b6cf30()*-0.74902);
}

double NNfunction_ss_sLdL::synapse0x1b77200() {
   return (neuron0x1b68370()*0.191307);
}

double NNfunction_ss_sLdL::synapse0x1b68590() {
   return (neuron0x1b686b0()*-0.630895);
}

double NNfunction_ss_sLdL::synapse0x1b685d0() {
   return (neuron0x1b689f0()*-0.0302813);
}

double NNfunction_ss_sLdL::synapse0x1b688d0() {
   return (neuron0x1b68d30()*-1.95383);
}

double NNfunction_ss_sLdL::synapse0x1b68910() {
   return (neuron0x1b69070()*0.481072);
}

double NNfunction_ss_sLdL::synapse0x1b68c10() {
   return (neuron0x1b693b0()*-0.755019);
}

double NNfunction_ss_sLdL::synapse0x1b68c50() {
   return (neuron0x1b696f0()*0.144945);
}

double NNfunction_ss_sLdL::synapse0x1b68f50() {
   return (neuron0x1b69a30()*0.500663);
}

double NNfunction_ss_sLdL::synapse0x1b68f90() {
   return (neuron0x1b69d70()*0.202544);
}

double NNfunction_ss_sLdL::synapse0x1b69290() {
   return (neuron0x1b6a0b0()*0.389011);
}

double NNfunction_ss_sLdL::synapse0x1b692d0() {
   return (neuron0x1b6a3f0()*0.600691);
}

double NNfunction_ss_sLdL::synapse0x1b695d0() {
   return (neuron0x1b6a730()*-0.602648);
}

double NNfunction_ss_sLdL::synapse0x1b69610() {
   return (neuron0x1b6aa70()*-1.06138);
}

double NNfunction_ss_sLdL::synapse0x1b69910() {
   return (neuron0x1b6adb0()*-0.255535);
}

double NNfunction_ss_sLdL::synapse0x1b69950() {
   return (neuron0x1b6b0f0()*0.260923);
}

double NNfunction_ss_sLdL::synapse0x1b69c50() {
   return (neuron0x1b6b430()*0.367308);
}

double NNfunction_ss_sLdL::synapse0x1b69c90() {
   return (neuron0x1b6b770()*0.0855701);
}

double NNfunction_ss_sLdL::synapse0x1b69f90() {
   return (neuron0x1b6bcd0()*0.213631);
}

double NNfunction_ss_sLdL::synapse0x1b69fd0() {
   return (neuron0x1b6bef0()*-0.400301);
}

double NNfunction_ss_sLdL::synapse0x1b6a2d0() {
   return (neuron0x1b6c230()*-0.343034);
}

double NNfunction_ss_sLdL::synapse0x1b6a310() {
   return (neuron0x1b6c570()*-0.174504);
}

double NNfunction_ss_sLdL::synapse0x1b6a610() {
   return (neuron0x1b6c8b0()*0.0787377);
}

double NNfunction_ss_sLdL::synapse0x1b6a650() {
   return (neuron0x1b6cbf0()*0.272644);
}

double NNfunction_ss_sLdL::synapse0x1b6a950() {
   return (neuron0x1b6cf30()*0.716886);
}

double NNfunction_ss_sLdL::synapse0x1b6a990() {
   return (neuron0x1b68370()*0.0430007);
}

double NNfunction_ss_sLdL::synapse0x1b6b650() {
   return (neuron0x1b686b0()*0.872563);
}

double NNfunction_ss_sLdL::synapse0x1b6b690() {
   return (neuron0x1b689f0()*0.0193784);
}

double NNfunction_ss_sLdL::synapse0x1b77050() {
   return (neuron0x1b68d30()*-0.375049);
}

double NNfunction_ss_sLdL::synapse0x1b77090() {
   return (neuron0x1b69070()*0.286014);
}

double NNfunction_ss_sLdL::synapse0x1b6b990() {
   return (neuron0x1b693b0()*0.119907);
}

double NNfunction_ss_sLdL::synapse0x1b6b9d0() {
   return (neuron0x1b696f0()*0.496627);
}

double NNfunction_ss_sLdL::synapse0x1923440() {
   return (neuron0x1b69a30()*0.379597);
}

double NNfunction_ss_sLdL::synapse0x1923480() {
   return (neuron0x1b69d70()*0.36149);
}

double NNfunction_ss_sLdL::synapse0x1b6c110() {
   return (neuron0x1b6a0b0()*-0.014258);
}

double NNfunction_ss_sLdL::synapse0x1b6c150() {
   return (neuron0x1b6a3f0()*1.05583);
}

double NNfunction_ss_sLdL::synapse0x1b6c450() {
   return (neuron0x1b6a730()*0.835503);
}

double NNfunction_ss_sLdL::synapse0x1b6c490() {
   return (neuron0x1b6aa70()*-0.406269);
}

double NNfunction_ss_sLdL::synapse0x1b6c790() {
   return (neuron0x1b6adb0()*0.625821);
}

double NNfunction_ss_sLdL::synapse0x1b6c7d0() {
   return (neuron0x1b6b0f0()*-0.66193);
}

double NNfunction_ss_sLdL::synapse0x1b6cad0() {
   return (neuron0x1b6b430()*-0.433733);
}

double NNfunction_ss_sLdL::synapse0x1b6cb10() {
   return (neuron0x1b6b770()*-0.438068);
}

double NNfunction_ss_sLdL::synapse0x1b6ce10() {
   return (neuron0x1b6bcd0()*0.159446);
}

double NNfunction_ss_sLdL::synapse0x1b6ce50() {
   return (neuron0x1b6bef0()*-0.346049);
}

double NNfunction_ss_sLdL::synapse0x1b6d150() {
   return (neuron0x1b6c230()*-0.212544);
}

double NNfunction_ss_sLdL::synapse0x1b6d190() {
   return (neuron0x1b6c570()*-0.124221);
}

double NNfunction_ss_sLdL::synapse0x1b6ac90() {
   return (neuron0x1b6c8b0()*-0.430964);
}

double NNfunction_ss_sLdL::synapse0x1b6acd0() {
   return (neuron0x1b6cbf0()*0.0913199);
}

double NNfunction_ss_sLdL::synapse0x1b78f70() {
   return (neuron0x1b6cf30()*-0.425949);
}

double NNfunction_ss_sLdL::synapse0x1b792f0() {
   return (neuron0x1b68370()*0.00834962);
}

double NNfunction_ss_sLdL::synapse0x1b79330() {
   return (neuron0x1b686b0()*0.000837759);
}

double NNfunction_ss_sLdL::synapse0x1b79370() {
   return (neuron0x1b689f0()*-0.0112581);
}

double NNfunction_ss_sLdL::synapse0x1b793b0() {
   return (neuron0x1b68d30()*4.35249);
}

double NNfunction_ss_sLdL::synapse0x1b793f0() {
   return (neuron0x1b69070()*0.00199459);
}

double NNfunction_ss_sLdL::synapse0x1b79430() {
   return (neuron0x1b693b0()*0.020624);
}

double NNfunction_ss_sLdL::synapse0x1b79470() {
   return (neuron0x1b696f0()*0.0318678);
}

double NNfunction_ss_sLdL::synapse0x1b794b0() {
   return (neuron0x1b69a30()*-0.0123006);
}

double NNfunction_ss_sLdL::synapse0x1b794f0() {
   return (neuron0x1b69d70()*-0.00382608);
}

double NNfunction_ss_sLdL::synapse0x1b79530() {
   return (neuron0x1b6a0b0()*0.00875458);
}

double NNfunction_ss_sLdL::synapse0x1b79570() {
   return (neuron0x1b6a3f0()*-0.0113135);
}

double NNfunction_ss_sLdL::synapse0x1b795b0() {
   return (neuron0x1b6a730()*0.171905);
}

double NNfunction_ss_sLdL::synapse0x1b795f0() {
   return (neuron0x1b6aa70()*0.17663);
}

double NNfunction_ss_sLdL::synapse0x1b79630() {
   return (neuron0x1b6adb0()*0.00357856);
}

double NNfunction_ss_sLdL::synapse0x1b79670() {
   return (neuron0x1b6b0f0()*-0.00944588);
}

double NNfunction_ss_sLdL::synapse0x1b796b0() {
   return (neuron0x1b6b430()*-0.00314862);
}

double NNfunction_ss_sLdL::synapse0x1b79140() {
   return (neuron0x1b6b770()*-0.00732972);
}

double NNfunction_ss_sLdL::synapse0x1b79180() {
   return (neuron0x1b6bcd0()*-0.0288551);
}

double NNfunction_ss_sLdL::synapse0x1b79800() {
   return (neuron0x1b6bef0()*0.0025615);
}

double NNfunction_ss_sLdL::synapse0x1b79840() {
   return (neuron0x1b6c230()*-0.00778761);
}

double NNfunction_ss_sLdL::synapse0x1b79880() {
   return (neuron0x1b6c570()*0.00230919);
}

double NNfunction_ss_sLdL::synapse0x1b798c0() {
   return (neuron0x1b6c8b0()*0.00959323);
}

double NNfunction_ss_sLdL::synapse0x1b79900() {
   return (neuron0x1b6cbf0()*-0.0197543);
}

double NNfunction_ss_sLdL::synapse0x1b79940() {
   return (neuron0x1b6cf30()*0.00599527);
}

double NNfunction_ss_sLdL::synapse0x1b79cc0() {
   return (neuron0x1b68370()*-0.295924);
}

double NNfunction_ss_sLdL::synapse0x1b79d00() {
   return (neuron0x1b686b0()*-0.572284);
}

double NNfunction_ss_sLdL::synapse0x1b79d40() {
   return (neuron0x1b689f0()*0.422798);
}

double NNfunction_ss_sLdL::synapse0x1b79d80() {
   return (neuron0x1b68d30()*-0.206147);
}

double NNfunction_ss_sLdL::synapse0x1b79dc0() {
   return (neuron0x1b69070()*0.662008);
}

double NNfunction_ss_sLdL::synapse0x1b79e00() {
   return (neuron0x1b693b0()*0.16426);
}

double NNfunction_ss_sLdL::synapse0x1b79e40() {
   return (neuron0x1b696f0()*0.449232);
}

double NNfunction_ss_sLdL::synapse0x1b79e80() {
   return (neuron0x1b69a30()*-0.0576104);
}

double NNfunction_ss_sLdL::synapse0x1b79ec0() {
   return (neuron0x1b69d70()*-0.0235041);
}

double NNfunction_ss_sLdL::synapse0x1b79f00() {
   return (neuron0x1b6a0b0()*-0.599034);
}

double NNfunction_ss_sLdL::synapse0x1b79f40() {
   return (neuron0x1b6a3f0()*-0.13004);
}

double NNfunction_ss_sLdL::synapse0x1b79f80() {
   return (neuron0x1b6a730()*-0.690671);
}

double NNfunction_ss_sLdL::synapse0x1b79fc0() {
   return (neuron0x1b6aa70()*1.18468);
}

double NNfunction_ss_sLdL::synapse0x1b7a000() {
   return (neuron0x1b6adb0()*-0.0423337);
}

double NNfunction_ss_sLdL::synapse0x1b7a040() {
   return (neuron0x1b6b0f0()*-0.0206841);
}

double NNfunction_ss_sLdL::synapse0x1b7a080() {
   return (neuron0x1b6b430()*-0.394955);
}

double NNfunction_ss_sLdL::synapse0x1b79b10() {
   return (neuron0x1b6b770()*-0.928603);
}

double NNfunction_ss_sLdL::synapse0x1b79b50() {
   return (neuron0x1b6bcd0()*0.192597);
}

double NNfunction_ss_sLdL::synapse0x1b7a1d0() {
   return (neuron0x1b6bef0()*-0.298041);
}

double NNfunction_ss_sLdL::synapse0x1b7a210() {
   return (neuron0x1b6c230()*-0.237392);
}

double NNfunction_ss_sLdL::synapse0x1b7a250() {
   return (neuron0x1b6c570()*0.315988);
}

double NNfunction_ss_sLdL::synapse0x1b7a290() {
   return (neuron0x1b6c8b0()*0.281037);
}

double NNfunction_ss_sLdL::synapse0x1b7a2d0() {
   return (neuron0x1b6cbf0()*-0.408343);
}

double NNfunction_ss_sLdL::synapse0x1b7a310() {
   return (neuron0x1b6cf30()*0.153887);
}

double NNfunction_ss_sLdL::synapse0x1b7a690() {
   return (neuron0x1b68370()*0.450006);
}

double NNfunction_ss_sLdL::synapse0x1b7a6d0() {
   return (neuron0x1b686b0()*0.170798);
}

double NNfunction_ss_sLdL::synapse0x1b7a710() {
   return (neuron0x1b689f0()*-0.373463);
}

double NNfunction_ss_sLdL::synapse0x1b7a750() {
   return (neuron0x1b68d30()*0.0990271);
}

double NNfunction_ss_sLdL::synapse0x1b7a790() {
   return (neuron0x1b69070()*-0.608088);
}

double NNfunction_ss_sLdL::synapse0x1b7a7d0() {
   return (neuron0x1b693b0()*-0.241014);
}

double NNfunction_ss_sLdL::synapse0x1b7a810() {
   return (neuron0x1b696f0()*0.184122);
}

double NNfunction_ss_sLdL::synapse0x1b7a850() {
   return (neuron0x1b69a30()*0.243291);
}

double NNfunction_ss_sLdL::synapse0x1b7a890() {
   return (neuron0x1b69d70()*-0.92162);
}

double NNfunction_ss_sLdL::synapse0x1b7a8d0() {
   return (neuron0x1b6a0b0()*0.264393);
}

double NNfunction_ss_sLdL::synapse0x1b7a910() {
   return (neuron0x1b6a3f0()*0.279809);
}

double NNfunction_ss_sLdL::synapse0x1b7a950() {
   return (neuron0x1b6a730()*-0.258223);
}

double NNfunction_ss_sLdL::synapse0x1b7a990() {
   return (neuron0x1b6aa70()*-0.583148);
}

double NNfunction_ss_sLdL::synapse0x1b7a9d0() {
   return (neuron0x1b6adb0()*0.766968);
}

double NNfunction_ss_sLdL::synapse0x1b7aa10() {
   return (neuron0x1b6b0f0()*-0.332399);
}

double NNfunction_ss_sLdL::synapse0x1b7aa50() {
   return (neuron0x1b6b430()*-0.204524);
}

double NNfunction_ss_sLdL::synapse0x1b7a4e0() {
   return (neuron0x1b6b770()*-0.0891377);
}

double NNfunction_ss_sLdL::synapse0x1b7a520() {
   return (neuron0x1b6bcd0()*-0.232448);
}

double NNfunction_ss_sLdL::synapse0x1b7aba0() {
   return (neuron0x1b6bef0()*-1.02914);
}

double NNfunction_ss_sLdL::synapse0x1b7abe0() {
   return (neuron0x1b6c230()*-0.0650003);
}

double NNfunction_ss_sLdL::synapse0x1b7ac20() {
   return (neuron0x1b6c570()*-0.237536);
}

double NNfunction_ss_sLdL::synapse0x1b7ac60() {
   return (neuron0x1b6c8b0()*0.514789);
}

double NNfunction_ss_sLdL::synapse0x1b7aca0() {
   return (neuron0x1b6cbf0()*-0.409147);
}

double NNfunction_ss_sLdL::synapse0x1b7ace0() {
   return (neuron0x1b6cf30()*0.154575);
}

double NNfunction_ss_sLdL::synapse0x1b7b060() {
   return (neuron0x1b68370()*-0.318497);
}

double NNfunction_ss_sLdL::synapse0x1b7b0a0() {
   return (neuron0x1b686b0()*-0.0714475);
}

double NNfunction_ss_sLdL::synapse0x1b7b0e0() {
   return (neuron0x1b689f0()*-1.37099);
}

double NNfunction_ss_sLdL::synapse0x1b7b120() {
   return (neuron0x1b68d30()*0.459059);
}

double NNfunction_ss_sLdL::synapse0x1b7b160() {
   return (neuron0x1b69070()*-0.051738);
}

double NNfunction_ss_sLdL::synapse0x1b7b1a0() {
   return (neuron0x1b693b0()*-0.497727);
}

double NNfunction_ss_sLdL::synapse0x1b7b1e0() {
   return (neuron0x1b696f0()*-0.00371474);
}

double NNfunction_ss_sLdL::synapse0x1b7b220() {
   return (neuron0x1b69a30()*-0.41747);
}

double NNfunction_ss_sLdL::synapse0x1b7b260() {
   return (neuron0x1b69d70()*-0.534575);
}

double NNfunction_ss_sLdL::synapse0x1b7b2a0() {
   return (neuron0x1b6a0b0()*-0.18475);
}

double NNfunction_ss_sLdL::synapse0x1b7b2e0() {
   return (neuron0x1b6a3f0()*-0.395768);
}

double NNfunction_ss_sLdL::synapse0x1b7b320() {
   return (neuron0x1b6a730()*1.01777);
}

double NNfunction_ss_sLdL::synapse0x1b7b360() {
   return (neuron0x1b6aa70()*0.884376);
}

double NNfunction_ss_sLdL::synapse0x1b7b3a0() {
   return (neuron0x1b6adb0()*-0.163603);
}

double NNfunction_ss_sLdL::synapse0x1b7b3e0() {
   return (neuron0x1b6b0f0()*-0.299568);
}

double NNfunction_ss_sLdL::synapse0x1b7b420() {
   return (neuron0x1b6b430()*-0.375025);
}

double NNfunction_ss_sLdL::synapse0x1b7aeb0() {
   return (neuron0x1b6b770()*-0.174863);
}

double NNfunction_ss_sLdL::synapse0x1b7aef0() {
   return (neuron0x1b6bcd0()*0.25299);
}

double NNfunction_ss_sLdL::synapse0x1b7b570() {
   return (neuron0x1b6bef0()*0.126061);
}

double NNfunction_ss_sLdL::synapse0x1b7b5b0() {
   return (neuron0x1b6c230()*0.00334724);
}

double NNfunction_ss_sLdL::synapse0x1b7b5f0() {
   return (neuron0x1b6c570()*-0.347072);
}

double NNfunction_ss_sLdL::synapse0x1b7b630() {
   return (neuron0x1b6c8b0()*-0.0617505);
}

double NNfunction_ss_sLdL::synapse0x1b7b670() {
   return (neuron0x1b6cbf0()*0.0377932);
}

double NNfunction_ss_sLdL::synapse0x1b7b6b0() {
   return (neuron0x1b6cf30()*-0.157246);
}

double NNfunction_ss_sLdL::synapse0x1b7ba30() {
   return (neuron0x1b68370()*0.204711);
}

double NNfunction_ss_sLdL::synapse0x1b7ba70() {
   return (neuron0x1b686b0()*0.0970587);
}

double NNfunction_ss_sLdL::synapse0x1b7bab0() {
   return (neuron0x1b689f0()*0.175319);
}

double NNfunction_ss_sLdL::synapse0x1b7baf0() {
   return (neuron0x1b68d30()*-1.19191);
}

double NNfunction_ss_sLdL::synapse0x1b7bb30() {
   return (neuron0x1b69070()*0.262261);
}

double NNfunction_ss_sLdL::synapse0x1b7bb70() {
   return (neuron0x1b693b0()*0.163461);
}

double NNfunction_ss_sLdL::synapse0x1b7bbb0() {
   return (neuron0x1b696f0()*0.166088);
}

double NNfunction_ss_sLdL::synapse0x1b7bbf0() {
   return (neuron0x1b69a30()*0.0661755);
}

double NNfunction_ss_sLdL::synapse0x1b7bc30() {
   return (neuron0x1b69d70()*-0.588601);
}

double NNfunction_ss_sLdL::synapse0x1b73df0() {
   return (neuron0x1b6a0b0()*0.471385);
}

double NNfunction_ss_sLdL::synapse0x1b73e30() {
   return (neuron0x1b6a3f0()*0.285274);
}

double NNfunction_ss_sLdL::synapse0x1b73e70() {
   return (neuron0x1b6a730()*2.38359);
}

double NNfunction_ss_sLdL::synapse0x1b73eb0() {
   return (neuron0x1b6aa70()*-0.598165);
}

double NNfunction_ss_sLdL::synapse0x1b73ef0() {
   return (neuron0x1b6adb0()*-0.43416);
}

double NNfunction_ss_sLdL::synapse0x1b73f30() {
   return (neuron0x1b6b0f0()*-0.0231205);
}

double NNfunction_ss_sLdL::synapse0x1b73f70() {
   return (neuron0x1b6b430()*-0.585016);
}

double NNfunction_ss_sLdL::synapse0x1b7b880() {
   return (neuron0x1b6b770()*-0.543911);
}

double NNfunction_ss_sLdL::synapse0x1b7b8c0() {
   return (neuron0x1b6bcd0()*-0.0420707);
}

double NNfunction_ss_sLdL::synapse0x1b740c0() {
   return (neuron0x1b6bef0()*0.0615575);
}

double NNfunction_ss_sLdL::synapse0x1b74100() {
   return (neuron0x1b6c230()*-0.18669);
}

double NNfunction_ss_sLdL::synapse0x1b74140() {
   return (neuron0x1b6c570()*0.280838);
}

double NNfunction_ss_sLdL::synapse0x1b74180() {
   return (neuron0x1b6c8b0()*-0.0170551);
}

double NNfunction_ss_sLdL::synapse0x1b741c0() {
   return (neuron0x1b6cbf0()*-0.10659);
}

double NNfunction_ss_sLdL::synapse0x1b74200() {
   return (neuron0x1b6cf30()*0.0226632);
}

double NNfunction_ss_sLdL::synapse0x1b74580() {
   return (neuron0x1b68370()*0.288955);
}

double NNfunction_ss_sLdL::synapse0x1b745c0() {
   return (neuron0x1b686b0()*-0.13868);
}

double NNfunction_ss_sLdL::synapse0x1b74600() {
   return (neuron0x1b689f0()*0.220186);
}

double NNfunction_ss_sLdL::synapse0x1b74640() {
   return (neuron0x1b68d30()*0.348352);
}

double NNfunction_ss_sLdL::synapse0x1b74680() {
   return (neuron0x1b69070()*0.328906);
}

double NNfunction_ss_sLdL::synapse0x1b746c0() {
   return (neuron0x1b693b0()*0.00462209);
}

double NNfunction_ss_sLdL::synapse0x1b74700() {
   return (neuron0x1b696f0()*-1.38948);
}

double NNfunction_ss_sLdL::synapse0x1b74740() {
   return (neuron0x1b69a30()*-0.118974);
}

double NNfunction_ss_sLdL::synapse0x1b74780() {
   return (neuron0x1b69d70()*-0.528302);
}

double NNfunction_ss_sLdL::synapse0x1b747c0() {
   return (neuron0x1b6a0b0()*0.135199);
}

double NNfunction_ss_sLdL::synapse0x1b74800() {
   return (neuron0x1b6a3f0()*1.14795);
}

double NNfunction_ss_sLdL::synapse0x1b74840() {
   return (neuron0x1b6a730()*0.948773);
}

double NNfunction_ss_sLdL::synapse0x1b74880() {
   return (neuron0x1b6aa70()*0.501969);
}

double NNfunction_ss_sLdL::synapse0x1b748c0() {
   return (neuron0x1b6adb0()*-1.31725);
}

double NNfunction_ss_sLdL::synapse0x1b74900() {
   return (neuron0x1b6b0f0()*0.285376);
}

double NNfunction_ss_sLdL::synapse0x1b74940() {
   return (neuron0x1b6b430()*-0.378191);
}

double NNfunction_ss_sLdL::synapse0x1b743d0() {
   return (neuron0x1b6b770()*0.03997);
}

double NNfunction_ss_sLdL::synapse0x1b74410() {
   return (neuron0x1b6bcd0()*0.106903);
}

double NNfunction_ss_sLdL::synapse0x1b74a90() {
   return (neuron0x1b6bef0()*0.0513093);
}

double NNfunction_ss_sLdL::synapse0x1b74ad0() {
   return (neuron0x1b6c230()*0.973328);
}

double NNfunction_ss_sLdL::synapse0x1b74b10() {
   return (neuron0x1b6c570()*0.11584);
}

double NNfunction_ss_sLdL::synapse0x1b74b50() {
   return (neuron0x1b6c8b0()*-0.318464);
}

double NNfunction_ss_sLdL::synapse0x1b74b90() {
   return (neuron0x1b6cbf0()*0.376025);
}

double NNfunction_ss_sLdL::synapse0x1b74bd0() {
   return (neuron0x1b6cf30()*0.26878);
}

double NNfunction_ss_sLdL::synapse0x1b74da0() {
   return (neuron0x1b68370()*0.184791);
}

double NNfunction_ss_sLdL::synapse0x1b7de30() {
   return (neuron0x1b686b0()*-0.232341);
}

double NNfunction_ss_sLdL::synapse0x1b7de70() {
   return (neuron0x1b689f0()*-0.0289365);
}

double NNfunction_ss_sLdL::synapse0x1b7deb0() {
   return (neuron0x1b68d30()*-0.119753);
}

double NNfunction_ss_sLdL::synapse0x1b7def0() {
   return (neuron0x1b69070()*0.601625);
}

double NNfunction_ss_sLdL::synapse0x1b7df30() {
   return (neuron0x1b693b0()*-0.118821);
}

double NNfunction_ss_sLdL::synapse0x1b7df70() {
   return (neuron0x1b696f0()*-0.792445);
}

double NNfunction_ss_sLdL::synapse0x1b7dfb0() {
   return (neuron0x1b69a30()*-0.275472);
}

double NNfunction_ss_sLdL::synapse0x1b7dff0() {
   return (neuron0x1b69d70()*0.212019);
}

double NNfunction_ss_sLdL::synapse0x1b7e030() {
   return (neuron0x1b6a0b0()*0.155296);
}

double NNfunction_ss_sLdL::synapse0x1b7e070() {
   return (neuron0x1b6a3f0()*-0.534857);
}

double NNfunction_ss_sLdL::synapse0x1b7e0b0() {
   return (neuron0x1b6a730()*-0.674426);
}

double NNfunction_ss_sLdL::synapse0x1b7e0f0() {
   return (neuron0x1b6aa70()*-0.232806);
}

double NNfunction_ss_sLdL::synapse0x1b7e130() {
   return (neuron0x1b6adb0()*-0.332622);
}

double NNfunction_ss_sLdL::synapse0x1b7e170() {
   return (neuron0x1b6b0f0()*0.872791);
}

double NNfunction_ss_sLdL::synapse0x1b7e1b0() {
   return (neuron0x1b6b430()*-0.381529);
}

double NNfunction_ss_sLdL::synapse0x1b7dc80() {
   return (neuron0x1b6b770()*-0.101077);
}

double NNfunction_ss_sLdL::synapse0x1b7dcc0() {
   return (neuron0x1b6bcd0()*-0.0747112);
}

double NNfunction_ss_sLdL::synapse0x1b7e300() {
   return (neuron0x1b6bef0()*0.323447);
}

double NNfunction_ss_sLdL::synapse0x1b7e340() {
   return (neuron0x1b6c230()*0.477479);
}

double NNfunction_ss_sLdL::synapse0x1b7e380() {
   return (neuron0x1b6c570()*-0.397535);
}

double NNfunction_ss_sLdL::synapse0x1b7e3c0() {
   return (neuron0x1b6c8b0()*0.302865);
}

double NNfunction_ss_sLdL::synapse0x1b7e400() {
   return (neuron0x1b6cbf0()*0.190502);
}

double NNfunction_ss_sLdL::synapse0x1b7e440() {
   return (neuron0x1b6cf30()*0.291566);
}

double NNfunction_ss_sLdL::synapse0x1b7e7c0() {
   return (neuron0x1b68370()*0.221267);
}

double NNfunction_ss_sLdL::synapse0x1b7e800() {
   return (neuron0x1b686b0()*0.094246);
}

double NNfunction_ss_sLdL::synapse0x1b7e840() {
   return (neuron0x1b689f0()*0.160141);
}

double NNfunction_ss_sLdL::synapse0x1b7e880() {
   return (neuron0x1b68d30()*0.123068);
}

double NNfunction_ss_sLdL::synapse0x1b7e8c0() {
   return (neuron0x1b69070()*0.355108);
}

double NNfunction_ss_sLdL::synapse0x1b7e900() {
   return (neuron0x1b693b0()*0.144574);
}

double NNfunction_ss_sLdL::synapse0x1b7e940() {
   return (neuron0x1b696f0()*-0.117077);
}

double NNfunction_ss_sLdL::synapse0x1b7e980() {
   return (neuron0x1b69a30()*0.249839);
}

double NNfunction_ss_sLdL::synapse0x1b7e9c0() {
   return (neuron0x1b69d70()*-0.101009);
}

double NNfunction_ss_sLdL::synapse0x1b7ea00() {
   return (neuron0x1b6a0b0()*-0.183791);
}

double NNfunction_ss_sLdL::synapse0x1b7ea40() {
   return (neuron0x1b6a3f0()*0.0573833);
}

double NNfunction_ss_sLdL::synapse0x1b7ea80() {
   return (neuron0x1b6a730()*1.65333);
}

double NNfunction_ss_sLdL::synapse0x1b7eac0() {
   return (neuron0x1b6aa70()*0.465426);
}

double NNfunction_ss_sLdL::synapse0x1b7eb00() {
   return (neuron0x1b6adb0()*-0.210401);
}

double NNfunction_ss_sLdL::synapse0x1b7eb40() {
   return (neuron0x1b6b0f0()*-0.0479905);
}

double NNfunction_ss_sLdL::synapse0x1b7eb80() {
   return (neuron0x1b6b430()*0.116887);
}

double NNfunction_ss_sLdL::synapse0x1b7e610() {
   return (neuron0x1b6b770()*-0.258225);
}

double NNfunction_ss_sLdL::synapse0x1b7e650() {
   return (neuron0x1b6bcd0()*0.246086);
}

double NNfunction_ss_sLdL::synapse0x1b7ecd0() {
   return (neuron0x1b6bef0()*-0.122929);
}

double NNfunction_ss_sLdL::synapse0x1b7ed10() {
   return (neuron0x1b6c230()*-0.520751);
}

double NNfunction_ss_sLdL::synapse0x1b7ed50() {
   return (neuron0x1b6c570()*0.181826);
}

double NNfunction_ss_sLdL::synapse0x1b7ed90() {
   return (neuron0x1b6c8b0()*-0.563619);
}

double NNfunction_ss_sLdL::synapse0x1b7edd0() {
   return (neuron0x1b6cbf0()*-0.0612946);
}

double NNfunction_ss_sLdL::synapse0x1b7ee10() {
   return (neuron0x1b6cf30()*-0.244305);
}

double NNfunction_ss_sLdL::synapse0x1b7f190() {
   return (neuron0x1b68370()*-0.136104);
}

double NNfunction_ss_sLdL::synapse0x1b7f1d0() {
   return (neuron0x1b686b0()*0.0359467);
}

double NNfunction_ss_sLdL::synapse0x1b7f210() {
   return (neuron0x1b689f0()*0.547812);
}

double NNfunction_ss_sLdL::synapse0x1b7f250() {
   return (neuron0x1b68d30()*-1.40516);
}

double NNfunction_ss_sLdL::synapse0x1b7f290() {
   return (neuron0x1b69070()*0.516156);
}

double NNfunction_ss_sLdL::synapse0x1b7f2d0() {
   return (neuron0x1b693b0()*0.288023);
}

double NNfunction_ss_sLdL::synapse0x1b7f310() {
   return (neuron0x1b696f0()*0.662592);
}

double NNfunction_ss_sLdL::synapse0x1b7f350() {
   return (neuron0x1b69a30()*0.406499);
}

double NNfunction_ss_sLdL::synapse0x1b7f390() {
   return (neuron0x1b69d70()*0.26977);
}

double NNfunction_ss_sLdL::synapse0x1b7f3d0() {
   return (neuron0x1b6a0b0()*-0.172804);
}

double NNfunction_ss_sLdL::synapse0x1b7f410() {
   return (neuron0x1b6a3f0()*0.192488);
}

double NNfunction_ss_sLdL::synapse0x1b7f450() {
   return (neuron0x1b6a730()*-1.33858);
}

double NNfunction_ss_sLdL::synapse0x1b7f490() {
   return (neuron0x1b6aa70()*-1.10725);
}

double NNfunction_ss_sLdL::synapse0x1b7f4d0() {
   return (neuron0x1b6adb0()*-0.330653);
}

double NNfunction_ss_sLdL::synapse0x1b7f510() {
   return (neuron0x1b6b0f0()*-0.348828);
}

double NNfunction_ss_sLdL::synapse0x1b7f550() {
   return (neuron0x1b6b430()*0.283066);
}

double NNfunction_ss_sLdL::synapse0x1b7efe0() {
   return (neuron0x1b6b770()*0.215715);
}

double NNfunction_ss_sLdL::synapse0x1b7f020() {
   return (neuron0x1b6bcd0()*0.164663);
}

double NNfunction_ss_sLdL::synapse0x1b7f6a0() {
   return (neuron0x1b6bef0()*0.466955);
}

double NNfunction_ss_sLdL::synapse0x1b7f6e0() {
   return (neuron0x1b6c230()*0.300174);
}

double NNfunction_ss_sLdL::synapse0x1b7f720() {
   return (neuron0x1b6c570()*0.630394);
}

double NNfunction_ss_sLdL::synapse0x1b7f760() {
   return (neuron0x1b6c8b0()*-0.192667);
}

double NNfunction_ss_sLdL::synapse0x1b7f7a0() {
   return (neuron0x1b6cbf0()*-0.665836);
}

double NNfunction_ss_sLdL::synapse0x1b7f7e0() {
   return (neuron0x1b6cf30()*-0.250268);
}

double NNfunction_ss_sLdL::synapse0x1b7fb60() {
   return (neuron0x1b68370()*-0.242806);
}

double NNfunction_ss_sLdL::synapse0x1b7fba0() {
   return (neuron0x1b686b0()*0.822561);
}

double NNfunction_ss_sLdL::synapse0x1b7fbe0() {
   return (neuron0x1b689f0()*-0.255981);
}

double NNfunction_ss_sLdL::synapse0x1b7fc20() {
   return (neuron0x1b68d30()*-1.42443);
}

double NNfunction_ss_sLdL::synapse0x1b7fc60() {
   return (neuron0x1b69070()*-0.0864873);
}

double NNfunction_ss_sLdL::synapse0x1b7fca0() {
   return (neuron0x1b693b0()*0.237176);
}

double NNfunction_ss_sLdL::synapse0x1b7fce0() {
   return (neuron0x1b696f0()*0.334814);
}

double NNfunction_ss_sLdL::synapse0x1b7fd20() {
   return (neuron0x1b69a30()*-0.2088);
}

double NNfunction_ss_sLdL::synapse0x1b7fd60() {
   return (neuron0x1b69d70()*0.252444);
}

double NNfunction_ss_sLdL::synapse0x1b7fda0() {
   return (neuron0x1b6a0b0()*0.201953);
}

double NNfunction_ss_sLdL::synapse0x1b7fde0() {
   return (neuron0x1b6a3f0()*-0.57557);
}

double NNfunction_ss_sLdL::synapse0x1b7fe20() {
   return (neuron0x1b6a730()*-0.153859);
}

double NNfunction_ss_sLdL::synapse0x1b7fe60() {
   return (neuron0x1b6aa70()*-0.255047);
}

double NNfunction_ss_sLdL::synapse0x1b7fea0() {
   return (neuron0x1b6adb0()*0.434645);
}

double NNfunction_ss_sLdL::synapse0x1b7fee0() {
   return (neuron0x1b6b0f0()*0.054268);
}

double NNfunction_ss_sLdL::synapse0x1b7ff20() {
   return (neuron0x1b6b430()*-0.116397);
}

double NNfunction_ss_sLdL::synapse0x1b7f9b0() {
   return (neuron0x1b6b770()*0.234682);
}

double NNfunction_ss_sLdL::synapse0x1b7f9f0() {
   return (neuron0x1b6bcd0()*0.147834);
}

double NNfunction_ss_sLdL::synapse0x1b80070() {
   return (neuron0x1b6bef0()*-0.372339);
}

double NNfunction_ss_sLdL::synapse0x1b800b0() {
   return (neuron0x1b6c230()*0.326085);
}

double NNfunction_ss_sLdL::synapse0x1b800f0() {
   return (neuron0x1b6c570()*0.607559);
}

double NNfunction_ss_sLdL::synapse0x1b80130() {
   return (neuron0x1b6c8b0()*0.362795);
}

double NNfunction_ss_sLdL::synapse0x1b80170() {
   return (neuron0x1b6cbf0()*0.214652);
}

double NNfunction_ss_sLdL::synapse0x1b801b0() {
   return (neuron0x1b6cf30()*0.0152553);
}

double NNfunction_ss_sLdL::synapse0x1b80530() {
   return (neuron0x1b68370()*0.0102604);
}

double NNfunction_ss_sLdL::synapse0x1b80570() {
   return (neuron0x1b686b0()*-0.00353279);
}

double NNfunction_ss_sLdL::synapse0x1b805b0() {
   return (neuron0x1b689f0()*0.0280989);
}

double NNfunction_ss_sLdL::synapse0x1b805f0() {
   return (neuron0x1b68d30()*-2.39795);
}

double NNfunction_ss_sLdL::synapse0x1b80630() {
   return (neuron0x1b69070()*-0.00162909);
}

double NNfunction_ss_sLdL::synapse0x1b80670() {
   return (neuron0x1b693b0()*-0.00575569);
}

double NNfunction_ss_sLdL::synapse0x1b806b0() {
   return (neuron0x1b696f0()*-0.0155807);
}

double NNfunction_ss_sLdL::synapse0x1b806f0() {
   return (neuron0x1b69a30()*-0.00262956);
}

double NNfunction_ss_sLdL::synapse0x1b80730() {
   return (neuron0x1b69d70()*-0.0118288);
}

double NNfunction_ss_sLdL::synapse0x1b80770() {
   return (neuron0x1b6a0b0()*-0.00908605);
}

double NNfunction_ss_sLdL::synapse0x1b807b0() {
   return (neuron0x1b6a3f0()*-0.00734467);
}

double NNfunction_ss_sLdL::synapse0x1b807f0() {
   return (neuron0x1b6a730()*-0.054685);
}

double NNfunction_ss_sLdL::synapse0x1b80830() {
   return (neuron0x1b6aa70()*-0.0644365);
}

double NNfunction_ss_sLdL::synapse0x1b80870() {
   return (neuron0x1b6adb0()*-0.00619265);
}

double NNfunction_ss_sLdL::synapse0x1b808b0() {
   return (neuron0x1b6b0f0()*0.00592956);
}

double NNfunction_ss_sLdL::synapse0x1b808f0() {
   return (neuron0x1b6b430()*0.00416159);
}

double NNfunction_ss_sLdL::synapse0x1b80380() {
   return (neuron0x1b6b770()*-0.0100632);
}

double NNfunction_ss_sLdL::synapse0x1b803c0() {
   return (neuron0x1b6bcd0()*0.00277359);
}

double NNfunction_ss_sLdL::synapse0x1b80a40() {
   return (neuron0x1b6bef0()*0.000674981);
}

double NNfunction_ss_sLdL::synapse0x1b80a80() {
   return (neuron0x1b6c230()*-0.000965726);
}

double NNfunction_ss_sLdL::synapse0x1b80ac0() {
   return (neuron0x1b6c570()*0.00215206);
}

double NNfunction_ss_sLdL::synapse0x1b80b00() {
   return (neuron0x1b6c8b0()*-0.00238288);
}

double NNfunction_ss_sLdL::synapse0x1b80b40() {
   return (neuron0x1b6cbf0()*-0.00349107);
}

double NNfunction_ss_sLdL::synapse0x1b80b80() {
   return (neuron0x1b6cf30()*-0.00101145);
}

double NNfunction_ss_sLdL::synapse0x1b80f00() {
   return (neuron0x1b68370()*-0.00444168);
}

double NNfunction_ss_sLdL::synapse0x1b80f40() {
   return (neuron0x1b686b0()*0.0051991);
}

double NNfunction_ss_sLdL::synapse0x1b80f80() {
   return (neuron0x1b689f0()*-0.0394468);
}

double NNfunction_ss_sLdL::synapse0x1b80fc0() {
   return (neuron0x1b68d30()*-0.00143016);
}

double NNfunction_ss_sLdL::synapse0x1b81000() {
   return (neuron0x1b69070()*-0.00149615);
}

double NNfunction_ss_sLdL::synapse0x1b81040() {
   return (neuron0x1b693b0()*-0.0115093);
}

double NNfunction_ss_sLdL::synapse0x1b81080() {
   return (neuron0x1b696f0()*-0.00982641);
}

double NNfunction_ss_sLdL::synapse0x1b810c0() {
   return (neuron0x1b69a30()*0.0101719);
}

double NNfunction_ss_sLdL::synapse0x1b81100() {
   return (neuron0x1b69d70()*-0.00131109);
}

double NNfunction_ss_sLdL::synapse0x1b81140() {
   return (neuron0x1b6a0b0()*-0.00866736);
}

double NNfunction_ss_sLdL::synapse0x1b81180() {
   return (neuron0x1b6a3f0()*-0.00801672);
}

double NNfunction_ss_sLdL::synapse0x1b811c0() {
   return (neuron0x1b6a730()*0.165755);
}

double NNfunction_ss_sLdL::synapse0x1b81200() {
   return (neuron0x1b6aa70()*0.952842);
}

double NNfunction_ss_sLdL::synapse0x1b81240() {
   return (neuron0x1b6adb0()*-0.00740105);
}

double NNfunction_ss_sLdL::synapse0x1b81280() {
   return (neuron0x1b6b0f0()*-0.00145392);
}

double NNfunction_ss_sLdL::synapse0x1b812c0() {
   return (neuron0x1b6b430()*-0.0120317);
}

double NNfunction_ss_sLdL::synapse0x1b80d50() {
   return (neuron0x1b6b770()*0.000204087);
}

double NNfunction_ss_sLdL::synapse0x1b80d90() {
   return (neuron0x1b6bcd0()*0.00802009);
}

double NNfunction_ss_sLdL::synapse0x1b81410() {
   return (neuron0x1b6bef0()*-0.000761704);
}

double NNfunction_ss_sLdL::synapse0x1b81450() {
   return (neuron0x1b6c230()*0.00150755);
}

double NNfunction_ss_sLdL::synapse0x1b81490() {
   return (neuron0x1b6c570()*0.00955502);
}

double NNfunction_ss_sLdL::synapse0x1b814d0() {
   return (neuron0x1b6c8b0()*0.00263332);
}

double NNfunction_ss_sLdL::synapse0x1b81510() {
   return (neuron0x1b6cbf0()*-0.00437247);
}

double NNfunction_ss_sLdL::synapse0x1b81550() {
   return (neuron0x1b6cf30()*0.00321047);
}

double NNfunction_ss_sLdL::synapse0x1b818d0() {
   return (neuron0x1b68370()*-0.0989338);
}

double NNfunction_ss_sLdL::synapse0x1b81910() {
   return (neuron0x1b686b0()*0.521961);
}

double NNfunction_ss_sLdL::synapse0x1b81950() {
   return (neuron0x1b689f0()*1.22719);
}

double NNfunction_ss_sLdL::synapse0x1b81990() {
   return (neuron0x1b68d30()*0.12674);
}

double NNfunction_ss_sLdL::synapse0x1b819d0() {
   return (neuron0x1b69070()*-0.206508);
}

double NNfunction_ss_sLdL::synapse0x1b81a10() {
   return (neuron0x1b693b0()*0.162469);
}

double NNfunction_ss_sLdL::synapse0x1b81a50() {
   return (neuron0x1b696f0()*0.207875);
}

double NNfunction_ss_sLdL::synapse0x1b81a90() {
   return (neuron0x1b69a30()*-0.367819);
}

double NNfunction_ss_sLdL::synapse0x1b81ad0() {
   return (neuron0x1b69d70()*0.0312996);
}

double NNfunction_ss_sLdL::synapse0x1b81b10() {
   return (neuron0x1b6a0b0()*-0.493965);
}

double NNfunction_ss_sLdL::synapse0x1b81b50() {
   return (neuron0x1b6a3f0()*-0.590745);
}

double NNfunction_ss_sLdL::synapse0x1b81b90() {
   return (neuron0x1b6a730()*-0.588935);
}

double NNfunction_ss_sLdL::synapse0x1b81bd0() {
   return (neuron0x1b6aa70()*0.157992);
}

double NNfunction_ss_sLdL::synapse0x1b81c10() {
   return (neuron0x1b6adb0()*0.729204);
}

double NNfunction_ss_sLdL::synapse0x1b81c50() {
   return (neuron0x1b6b0f0()*0.492492);
}

double NNfunction_ss_sLdL::synapse0x1b81c90() {
   return (neuron0x1b6b430()*-0.28154);
}

double NNfunction_ss_sLdL::synapse0x1b81720() {
   return (neuron0x1b6b770()*-0.0328606);
}

double NNfunction_ss_sLdL::synapse0x1b81760() {
   return (neuron0x1b6bcd0()*0.17852);
}

double NNfunction_ss_sLdL::synapse0x1b81de0() {
   return (neuron0x1b6bef0()*0.399013);
}

double NNfunction_ss_sLdL::synapse0x1b81e20() {
   return (neuron0x1b6c230()*-0.852838);
}

double NNfunction_ss_sLdL::synapse0x1b81e60() {
   return (neuron0x1b6c570()*-0.084686);
}

double NNfunction_ss_sLdL::synapse0x1b81ea0() {
   return (neuron0x1b6c8b0()*-0.140861);
}

double NNfunction_ss_sLdL::synapse0x1b81ee0() {
   return (neuron0x1b6cbf0()*-0.114036);
}

double NNfunction_ss_sLdL::synapse0x1b81f20() {
   return (neuron0x1b6cf30()*-0.0950825);
}

double NNfunction_ss_sLdL::synapse0x1b822a0() {
   return (neuron0x1b68370()*0.102203);
}

double NNfunction_ss_sLdL::synapse0x1b822e0() {
   return (neuron0x1b686b0()*0.21703);
}

double NNfunction_ss_sLdL::synapse0x1b82320() {
   return (neuron0x1b689f0()*-0.149668);
}

double NNfunction_ss_sLdL::synapse0x1b82360() {
   return (neuron0x1b68d30()*-0.606121);
}

double NNfunction_ss_sLdL::synapse0x1b823a0() {
   return (neuron0x1b69070()*-0.0303347);
}

double NNfunction_ss_sLdL::synapse0x1b823e0() {
   return (neuron0x1b693b0()*-0.528977);
}

double NNfunction_ss_sLdL::synapse0x1b82420() {
   return (neuron0x1b696f0()*-0.305595);
}

double NNfunction_ss_sLdL::synapse0x1b82460() {
   return (neuron0x1b69a30()*0.33784);
}

double NNfunction_ss_sLdL::synapse0x1b824a0() {
   return (neuron0x1b69d70()*0.411316);
}

double NNfunction_ss_sLdL::synapse0x1b824e0() {
   return (neuron0x1b6a0b0()*0.282349);
}

double NNfunction_ss_sLdL::synapse0x1b82520() {
   return (neuron0x1b6a3f0()*-0.314686);
}

double NNfunction_ss_sLdL::synapse0x1b82560() {
   return (neuron0x1b6a730()*-0.23645);
}

double NNfunction_ss_sLdL::synapse0x1b825a0() {
   return (neuron0x1b6aa70()*-0.978966);
}

double NNfunction_ss_sLdL::synapse0x1b825e0() {
   return (neuron0x1b6adb0()*0.283856);
}

double NNfunction_ss_sLdL::synapse0x1b82620() {
   return (neuron0x1b6b0f0()*-0.0969816);
}

double NNfunction_ss_sLdL::synapse0x1b82660() {
   return (neuron0x1b6b430()*0.179624);
}

double NNfunction_ss_sLdL::synapse0x1b820f0() {
   return (neuron0x1b6b770()*-0.534235);
}

double NNfunction_ss_sLdL::synapse0x1b82130() {
   return (neuron0x1b6bcd0()*0.495987);
}

double NNfunction_ss_sLdL::synapse0x1b827b0() {
   return (neuron0x1b6bef0()*0.123736);
}

double NNfunction_ss_sLdL::synapse0x1b827f0() {
   return (neuron0x1b6c230()*0.262176);
}

double NNfunction_ss_sLdL::synapse0x1b82830() {
   return (neuron0x1b6c570()*0.332038);
}

double NNfunction_ss_sLdL::synapse0x1b82870() {
   return (neuron0x1b6c8b0()*0.158915);
}

double NNfunction_ss_sLdL::synapse0x1b828b0() {
   return (neuron0x1b6cbf0()*0.409576);
}

double NNfunction_ss_sLdL::synapse0x1b828f0() {
   return (neuron0x1b6cf30()*0.189346);
}

double NNfunction_ss_sLdL::synapse0x1b82c70() {
   return (neuron0x1b68370()*0.423864);
}

double NNfunction_ss_sLdL::synapse0x1b77240() {
   return (neuron0x1b686b0()*-0.672186);
}

double NNfunction_ss_sLdL::synapse0x1b77280() {
   return (neuron0x1b689f0()*-0.650175);
}

double NNfunction_ss_sLdL::synapse0x1b772c0() {
   return (neuron0x1b68d30()*0.208249);
}

double NNfunction_ss_sLdL::synapse0x1b77510() {
   return (neuron0x1b69070()*-0.555271);
}

double NNfunction_ss_sLdL::synapse0x1b77550() {
   return (neuron0x1b693b0()*-0.63447);
}

double NNfunction_ss_sLdL::synapse0x1b77590() {
   return (neuron0x1b696f0()*-1.46661);
}

double NNfunction_ss_sLdL::synapse0x1b777e0() {
   return (neuron0x1b69a30()*0.536812);
}

double NNfunction_ss_sLdL::synapse0x1b77820() {
   return (neuron0x1b69d70()*-0.206302);
}

double NNfunction_ss_sLdL::synapse0x1b77a70() {
   return (neuron0x1b6a0b0()*0.0412925);
}

double NNfunction_ss_sLdL::synapse0x1b77ab0() {
   return (neuron0x1b6a3f0()*0.613189);
}

double NNfunction_ss_sLdL::synapse0x1b77af0() {
   return (neuron0x1b6a730()*0.268753);
}

double NNfunction_ss_sLdL::synapse0x1b77d40() {
   return (neuron0x1b6aa70()*-0.00449522);
}

double NNfunction_ss_sLdL::synapse0x1b77d80() {
   return (neuron0x1b6adb0()*0.285077);
}

double NNfunction_ss_sLdL::synapse0x1b77fd0() {
   return (neuron0x1b6b0f0()*-0.34103);
}

double NNfunction_ss_sLdL::synapse0x1b78010() {
   return (neuron0x1b6b430()*-0.293108);
}

double NNfunction_ss_sLdL::synapse0x1b82ac0() {
   return (neuron0x1b6b770()*0.455615);
}

double NNfunction_ss_sLdL::synapse0x1b82b00() {
   return (neuron0x1b6bcd0()*-0.194954);
}

double NNfunction_ss_sLdL::synapse0x1b78160() {
   return (neuron0x1b6bef0()*0.183244);
}

double NNfunction_ss_sLdL::synapse0x1b78670() {
   return (neuron0x1b6c230()*-0.289737);
}

double NNfunction_ss_sLdL::synapse0x1b786b0() {
   return (neuron0x1b6c570()*-0.157907);
}

double NNfunction_ss_sLdL::synapse0x1b786f0() {
   return (neuron0x1b6c8b0()*0.40089);
}

double NNfunction_ss_sLdL::synapse0x1b78940() {
   return (neuron0x1b6cbf0()*-0.623847);
}

double NNfunction_ss_sLdL::synapse0x1b78980() {
   return (neuron0x1b6cf30()*-0.261572);
}

double NNfunction_ss_sLdL::synapse0x1b78230() {
   return (neuron0x1b68370()*-0.401176);
}

double NNfunction_ss_sLdL::synapse0x1b78270() {
   return (neuron0x1b686b0()*0.392459);
}

double NNfunction_ss_sLdL::synapse0x1b782b0() {
   return (neuron0x1b689f0()*1.02413);
}

double NNfunction_ss_sLdL::synapse0x1b782f0() {
   return (neuron0x1b68d30()*-0.720135);
}

double NNfunction_ss_sLdL::synapse0x1b78c70() {
   return (neuron0x1b69070()*-0.105632);
}

double NNfunction_ss_sLdL::synapse0x1b84fc0() {
   return (neuron0x1b693b0()*0.223545);
}

double NNfunction_ss_sLdL::synapse0x1b85000() {
   return (neuron0x1b696f0()*0.743301);
}

double NNfunction_ss_sLdL::synapse0x1b85040() {
   return (neuron0x1b69a30()*-0.96414);
}

double NNfunction_ss_sLdL::synapse0x1b85080() {
   return (neuron0x1b69d70()*-0.741712);
}

double NNfunction_ss_sLdL::synapse0x1b850c0() {
   return (neuron0x1b6a0b0()*-0.456202);
}

double NNfunction_ss_sLdL::synapse0x1b85100() {
   return (neuron0x1b6a3f0()*-0.110544);
}

double NNfunction_ss_sLdL::synapse0x1b85140() {
   return (neuron0x1b6a730()*-0.361219);
}

double NNfunction_ss_sLdL::synapse0x1b85180() {
   return (neuron0x1b6aa70()*0.832667);
}

double NNfunction_ss_sLdL::synapse0x1b851c0() {
   return (neuron0x1b6adb0()*-0.703668);
}

double NNfunction_ss_sLdL::synapse0x1b85200() {
   return (neuron0x1b6b0f0()*0.846434);
}

double NNfunction_ss_sLdL::synapse0x1b85240() {
   return (neuron0x1b6b430()*-0.27144);
}

double NNfunction_ss_sLdL::synapse0x1b78b50() {
   return (neuron0x1b6b770()*0.112778);
}

double NNfunction_ss_sLdL::synapse0x1b78b90() {
   return (neuron0x1b6bcd0()*-0.553869);
}

double NNfunction_ss_sLdL::synapse0x1b85390() {
   return (neuron0x1b6bef0()*0.858907);
}

double NNfunction_ss_sLdL::synapse0x1b853d0() {
   return (neuron0x1b6c230()*-0.590473);
}

double NNfunction_ss_sLdL::synapse0x1b85410() {
   return (neuron0x1b6c570()*0.39423);
}

double NNfunction_ss_sLdL::synapse0x1b85450() {
   return (neuron0x1b6c8b0()*0.521946);
}

double NNfunction_ss_sLdL::synapse0x1b85490() {
   return (neuron0x1b6cbf0()*-0.81362);
}

double NNfunction_ss_sLdL::synapse0x1b854d0() {
   return (neuron0x1b6cf30()*0.392388);
}

double NNfunction_ss_sLdL::synapse0x1b85850() {
   return (neuron0x1b68370()*-0.0595759);
}

double NNfunction_ss_sLdL::synapse0x1b85890() {
   return (neuron0x1b686b0()*-0.310541);
}

double NNfunction_ss_sLdL::synapse0x1b858d0() {
   return (neuron0x1b689f0()*0.36032);
}

double NNfunction_ss_sLdL::synapse0x1b85910() {
   return (neuron0x1b68d30()*0.628902);
}

double NNfunction_ss_sLdL::synapse0x1b85950() {
   return (neuron0x1b69070()*0.243854);
}

double NNfunction_ss_sLdL::synapse0x1b85990() {
   return (neuron0x1b693b0()*-0.254191);
}

double NNfunction_ss_sLdL::synapse0x1b859d0() {
   return (neuron0x1b696f0()*-0.20721);
}

double NNfunction_ss_sLdL::synapse0x1b85a10() {
   return (neuron0x1b69a30()*-0.464792);
}

double NNfunction_ss_sLdL::synapse0x1b85a50() {
   return (neuron0x1b69d70()*-0.163654);
}

double NNfunction_ss_sLdL::synapse0x1b85a90() {
   return (neuron0x1b6a0b0()*0.289982);
}

double NNfunction_ss_sLdL::synapse0x1b85ad0() {
   return (neuron0x1b6a3f0()*0.0805617);
}

double NNfunction_ss_sLdL::synapse0x1b85b10() {
   return (neuron0x1b6a730()*-1.04305);
}

double NNfunction_ss_sLdL::synapse0x1b85b50() {
   return (neuron0x1b6aa70()*-0.517186);
}

double NNfunction_ss_sLdL::synapse0x1b85b90() {
   return (neuron0x1b6adb0()*0.552236);
}

double NNfunction_ss_sLdL::synapse0x1b85bd0() {
   return (neuron0x1b6b0f0()*-0.0277344);
}

double NNfunction_ss_sLdL::synapse0x1b85c10() {
   return (neuron0x1b6b430()*0.891264);
}

double NNfunction_ss_sLdL::synapse0x1b856a0() {
   return (neuron0x1b6b770()*0.90443);
}

double NNfunction_ss_sLdL::synapse0x1b856e0() {
   return (neuron0x1b6bcd0()*-0.31773);
}

double NNfunction_ss_sLdL::synapse0x1b85d60() {
   return (neuron0x1b6bef0()*0.102429);
}

double NNfunction_ss_sLdL::synapse0x1b85da0() {
   return (neuron0x1b6c230()*0.674514);
}

double NNfunction_ss_sLdL::synapse0x1b85de0() {
   return (neuron0x1b6c570()*0.0621547);
}

double NNfunction_ss_sLdL::synapse0x1b85e20() {
   return (neuron0x1b6c8b0()*0.097649);
}

double NNfunction_ss_sLdL::synapse0x1b85e60() {
   return (neuron0x1b6cbf0()*0.0866345);
}

double NNfunction_ss_sLdL::synapse0x1b85ea0() {
   return (neuron0x1b6cf30()*0.458386);
}

double NNfunction_ss_sLdL::synapse0x1b86220() {
   return (neuron0x1b68370()*0.0161663);
}

double NNfunction_ss_sLdL::synapse0x1b86260() {
   return (neuron0x1b686b0()*-0.600399);
}

double NNfunction_ss_sLdL::synapse0x1b862a0() {
   return (neuron0x1b689f0()*-0.0617463);
}

double NNfunction_ss_sLdL::synapse0x1b862e0() {
   return (neuron0x1b68d30()*-0.25233);
}

double NNfunction_ss_sLdL::synapse0x1b86320() {
   return (neuron0x1b69070()*0.647251);
}

double NNfunction_ss_sLdL::synapse0x1b86360() {
   return (neuron0x1b693b0()*-0.228964);
}

double NNfunction_ss_sLdL::synapse0x1b863a0() {
   return (neuron0x1b696f0()*0.70212);
}

double NNfunction_ss_sLdL::synapse0x1b863e0() {
   return (neuron0x1b69a30()*0.550374);
}

double NNfunction_ss_sLdL::synapse0x1b86420() {
   return (neuron0x1b69d70()*0.864062);
}

double NNfunction_ss_sLdL::synapse0x1b86460() {
   return (neuron0x1b6a0b0()*-0.428984);
}

double NNfunction_ss_sLdL::synapse0x1b864a0() {
   return (neuron0x1b6a3f0()*0.582537);
}

double NNfunction_ss_sLdL::synapse0x1b864e0() {
   return (neuron0x1b6a730()*-1.03189);
}

double NNfunction_ss_sLdL::synapse0x1b86520() {
   return (neuron0x1b6aa70()*-0.774433);
}

double NNfunction_ss_sLdL::synapse0x1b86560() {
   return (neuron0x1b6adb0()*-0.146563);
}

double NNfunction_ss_sLdL::synapse0x1b865a0() {
   return (neuron0x1b6b0f0()*0.840737);
}

double NNfunction_ss_sLdL::synapse0x1b865e0() {
   return (neuron0x1b6b430()*0.118667);
}

double NNfunction_ss_sLdL::synapse0x1b86070() {
   return (neuron0x1b6b770()*0.278383);
}

double NNfunction_ss_sLdL::synapse0x1b860b0() {
   return (neuron0x1b6bcd0()*0.585156);
}

double NNfunction_ss_sLdL::synapse0x1b86730() {
   return (neuron0x1b6bef0()*-0.101283);
}

double NNfunction_ss_sLdL::synapse0x1b86770() {
   return (neuron0x1b6c230()*-0.851762);
}

double NNfunction_ss_sLdL::synapse0x1b867b0() {
   return (neuron0x1b6c570()*0.103165);
}

double NNfunction_ss_sLdL::synapse0x1b867f0() {
   return (neuron0x1b6c8b0()*0.210443);
}

double NNfunction_ss_sLdL::synapse0x1b86830() {
   return (neuron0x1b6cbf0()*0.197663);
}

double NNfunction_ss_sLdL::synapse0x1b86870() {
   return (neuron0x1b6cf30()*0.331857);
}

double NNfunction_ss_sLdL::synapse0x1b86bf0() {
   return (neuron0x1b68370()*0.123863);
}

double NNfunction_ss_sLdL::synapse0x1b86c30() {
   return (neuron0x1b686b0()*0.346796);
}

double NNfunction_ss_sLdL::synapse0x1b86c70() {
   return (neuron0x1b689f0()*1.91371);
}

double NNfunction_ss_sLdL::synapse0x1b86cb0() {
   return (neuron0x1b68d30()*1.83439);
}

double NNfunction_ss_sLdL::synapse0x1b86cf0() {
   return (neuron0x1b69070()*0.189982);
}

double NNfunction_ss_sLdL::synapse0x1b86d30() {
   return (neuron0x1b693b0()*0.492007);
}

double NNfunction_ss_sLdL::synapse0x1b86d70() {
   return (neuron0x1b696f0()*0.109673);
}

double NNfunction_ss_sLdL::synapse0x1b86db0() {
   return (neuron0x1b69a30()*0.671129);
}

double NNfunction_ss_sLdL::synapse0x1b86df0() {
   return (neuron0x1b69d70()*0.701567);
}

double NNfunction_ss_sLdL::synapse0x1b86e30() {
   return (neuron0x1b6a0b0()*0.0626349);
}

double NNfunction_ss_sLdL::synapse0x1b86e70() {
   return (neuron0x1b6a3f0()*0.225544);
}

double NNfunction_ss_sLdL::synapse0x1b86eb0() {
   return (neuron0x1b6a730()*-1.28267);
}

double NNfunction_ss_sLdL::synapse0x1b86ef0() {
   return (neuron0x1b6aa70()*-1.30223);
}

double NNfunction_ss_sLdL::synapse0x1b86f30() {
   return (neuron0x1b6adb0()*0.254571);
}

double NNfunction_ss_sLdL::synapse0x1b86f70() {
   return (neuron0x1b6b0f0()*0.0526128);
}

double NNfunction_ss_sLdL::synapse0x1b86fb0() {
   return (neuron0x1b6b430()*0.787588);
}

double NNfunction_ss_sLdL::synapse0x1b86a40() {
   return (neuron0x1b6b770()*0.549166);
}

double NNfunction_ss_sLdL::synapse0x1b86a80() {
   return (neuron0x1b6bcd0()*0.163773);
}

double NNfunction_ss_sLdL::synapse0x1b87100() {
   return (neuron0x1b6bef0()*-0.201145);
}

double NNfunction_ss_sLdL::synapse0x1b87140() {
   return (neuron0x1b6c230()*0.664702);
}

double NNfunction_ss_sLdL::synapse0x1b87180() {
   return (neuron0x1b6c570()*-0.0597174);
}

double NNfunction_ss_sLdL::synapse0x1b871c0() {
   return (neuron0x1b6c8b0()*-0.0304532);
}

double NNfunction_ss_sLdL::synapse0x1b87200() {
   return (neuron0x1b6cbf0()*0.188292);
}

double NNfunction_ss_sLdL::synapse0x1b87240() {
   return (neuron0x1b6cf30()*-0.108171);
}

double NNfunction_ss_sLdL::synapse0x1b875c0() {
   return (neuron0x1b68370()*0.257689);
}

double NNfunction_ss_sLdL::synapse0x1b87600() {
   return (neuron0x1b686b0()*-0.0811226);
}

double NNfunction_ss_sLdL::synapse0x1b87640() {
   return (neuron0x1b689f0()*-0.289038);
}

double NNfunction_ss_sLdL::synapse0x1b87680() {
   return (neuron0x1b68d30()*-0.444149);
}

double NNfunction_ss_sLdL::synapse0x1b876c0() {
   return (neuron0x1b69070()*-0.421498);
}

double NNfunction_ss_sLdL::synapse0x1b87700() {
   return (neuron0x1b693b0()*0.176928);
}

double NNfunction_ss_sLdL::synapse0x1b87740() {
   return (neuron0x1b696f0()*0.0988919);
}

double NNfunction_ss_sLdL::synapse0x1b87780() {
   return (neuron0x1b69a30()*0.0603953);
}

double NNfunction_ss_sLdL::synapse0x1b877c0() {
   return (neuron0x1b69d70()*-0.359101);
}

double NNfunction_ss_sLdL::synapse0x1b87800() {
   return (neuron0x1b6a0b0()*-0.138038);
}

double NNfunction_ss_sLdL::synapse0x1b87840() {
   return (neuron0x1b6a3f0()*0.0705849);
}

double NNfunction_ss_sLdL::synapse0x1b87880() {
   return (neuron0x1b6a730()*-0.337374);
}

double NNfunction_ss_sLdL::synapse0x1b878c0() {
   return (neuron0x1b6aa70()*0.194863);
}

double NNfunction_ss_sLdL::synapse0x1b87900() {
   return (neuron0x1b6adb0()*-0.437563);
}

double NNfunction_ss_sLdL::synapse0x1b87940() {
   return (neuron0x1b6b0f0()*1.02261);
}

double NNfunction_ss_sLdL::synapse0x1b87980() {
   return (neuron0x1b6b430()*0.996601);
}

double NNfunction_ss_sLdL::synapse0x1b87410() {
   return (neuron0x1b6b770()*-0.420508);
}

double NNfunction_ss_sLdL::synapse0x1b87450() {
   return (neuron0x1b6bcd0()*0.291271);
}

double NNfunction_ss_sLdL::synapse0x1b87ad0() {
   return (neuron0x1b6bef0()*0.605978);
}

double NNfunction_ss_sLdL::synapse0x1b87b10() {
   return (neuron0x1b6c230()*-0.279447);
}

double NNfunction_ss_sLdL::synapse0x1b87b50() {
   return (neuron0x1b6c570()*-0.203138);
}

double NNfunction_ss_sLdL::synapse0x1b87b90() {
   return (neuron0x1b6c8b0()*-0.042028);
}

double NNfunction_ss_sLdL::synapse0x1b87bd0() {
   return (neuron0x1b6cbf0()*0.214526);
}

double NNfunction_ss_sLdL::synapse0x1b87c10() {
   return (neuron0x1b6cf30()*0.272736);
}

double NNfunction_ss_sLdL::synapse0x1b87f90() {
   return (neuron0x1b68370()*-0.284836);
}

double NNfunction_ss_sLdL::synapse0x1b87fd0() {
   return (neuron0x1b686b0()*0.0583186);
}

double NNfunction_ss_sLdL::synapse0x1b88010() {
   return (neuron0x1b689f0()*-1.46722);
}

double NNfunction_ss_sLdL::synapse0x1b88050() {
   return (neuron0x1b68d30()*2.81232);
}

double NNfunction_ss_sLdL::synapse0x1b88090() {
   return (neuron0x1b69070()*-1.16266);
}

double NNfunction_ss_sLdL::synapse0x1b880d0() {
   return (neuron0x1b693b0()*-1.27436);
}

double NNfunction_ss_sLdL::synapse0x1b88110() {
   return (neuron0x1b696f0()*-1.26443);
}

double NNfunction_ss_sLdL::synapse0x1b88150() {
   return (neuron0x1b69a30()*-1.57444);
}

double NNfunction_ss_sLdL::synapse0x1b88190() {
   return (neuron0x1b69d70()*-0.818254);
}

double NNfunction_ss_sLdL::synapse0x1b881d0() {
   return (neuron0x1b6a0b0()*-2.06466);
}

double NNfunction_ss_sLdL::synapse0x1b88210() {
   return (neuron0x1b6a3f0()*-1.79435);
}

double NNfunction_ss_sLdL::synapse0x1b88250() {
   return (neuron0x1b6a730()*2.19197);
}

double NNfunction_ss_sLdL::synapse0x1b88290() {
   return (neuron0x1b6aa70()*1.54626);
}

double NNfunction_ss_sLdL::synapse0x1b882d0() {
   return (neuron0x1b6adb0()*0.765535);
}

double NNfunction_ss_sLdL::synapse0x1b88310() {
   return (neuron0x1b6b0f0()*0.225027);
}

double NNfunction_ss_sLdL::synapse0x1b88350() {
   return (neuron0x1b6b430()*0.638325);
}

double NNfunction_ss_sLdL::synapse0x1b87de0() {
   return (neuron0x1b6b770()*-0.357095);
}

double NNfunction_ss_sLdL::synapse0x1b87e20() {
   return (neuron0x1b6bcd0()*0.413296);
}

double NNfunction_ss_sLdL::synapse0x1b884a0() {
   return (neuron0x1b6bef0()*0.64258);
}

double NNfunction_ss_sLdL::synapse0x1b884e0() {
   return (neuron0x1b6c230()*-0.765319);
}

double NNfunction_ss_sLdL::synapse0x1b88520() {
   return (neuron0x1b6c570()*-2.73384);
}

double NNfunction_ss_sLdL::synapse0x1b88560() {
   return (neuron0x1b6c8b0()*0.729002);
}

double NNfunction_ss_sLdL::synapse0x1b885a0() {
   return (neuron0x1b6cbf0()*1.13644);
}

double NNfunction_ss_sLdL::synapse0x1b885e0() {
   return (neuron0x1b6cf30()*0.14565);
}

double NNfunction_ss_sLdL::synapse0x1b88960() {
   return (neuron0x1b68370()*0.0744117);
}

double NNfunction_ss_sLdL::synapse0x1b889a0() {
   return (neuron0x1b686b0()*-0.0753786);
}

double NNfunction_ss_sLdL::synapse0x1b889e0() {
   return (neuron0x1b689f0()*0.859714);
}

double NNfunction_ss_sLdL::synapse0x1b88a20() {
   return (neuron0x1b68d30()*-0.526769);
}

double NNfunction_ss_sLdL::synapse0x1b88a60() {
   return (neuron0x1b69070()*-0.0808487);
}

double NNfunction_ss_sLdL::synapse0x1b88aa0() {
   return (neuron0x1b693b0()*0.0933257);
}

double NNfunction_ss_sLdL::synapse0x1b88ae0() {
   return (neuron0x1b696f0()*-0.305654);
}

double NNfunction_ss_sLdL::synapse0x1b88b20() {
   return (neuron0x1b69a30()*-0.000491882);
}

double NNfunction_ss_sLdL::synapse0x1b88b60() {
   return (neuron0x1b69d70()*-0.443673);
}

double NNfunction_ss_sLdL::synapse0x1b88ba0() {
   return (neuron0x1b6a0b0()*-0.0555201);
}

double NNfunction_ss_sLdL::synapse0x1b88be0() {
   return (neuron0x1b6a3f0()*-0.646042);
}

double NNfunction_ss_sLdL::synapse0x1b88c20() {
   return (neuron0x1b6a730()*0.740394);
}

double NNfunction_ss_sLdL::synapse0x1b88c60() {
   return (neuron0x1b6aa70()*-0.349501);
}

double NNfunction_ss_sLdL::synapse0x1b88ca0() {
   return (neuron0x1b6adb0()*-0.171055);
}

double NNfunction_ss_sLdL::synapse0x1b88ce0() {
   return (neuron0x1b6b0f0()*-0.284263);
}

double NNfunction_ss_sLdL::synapse0x1b88d20() {
   return (neuron0x1b6b430()*-0.611876);
}

double NNfunction_ss_sLdL::synapse0x1b887b0() {
   return (neuron0x1b6b770()*-0.0592733);
}

double NNfunction_ss_sLdL::synapse0x1b887f0() {
   return (neuron0x1b6bcd0()*-0.0449599);
}

double NNfunction_ss_sLdL::synapse0x1b88e70() {
   return (neuron0x1b6bef0()*0.446329);
}

double NNfunction_ss_sLdL::synapse0x1b88eb0() {
   return (neuron0x1b6c230()*1.06672);
}

double NNfunction_ss_sLdL::synapse0x1b88ef0() {
   return (neuron0x1b6c570()*-0.747316);
}

double NNfunction_ss_sLdL::synapse0x1b88f30() {
   return (neuron0x1b6c8b0()*0.466645);
}

double NNfunction_ss_sLdL::synapse0x1b88f70() {
   return (neuron0x1b6cbf0()*0.489857);
}

double NNfunction_ss_sLdL::synapse0x1b88fb0() {
   return (neuron0x1b6cf30()*-0.356661);
}

double NNfunction_ss_sLdL::synapse0x1b89330() {
   return (neuron0x1b68370()*-0.128919);
}

double NNfunction_ss_sLdL::synapse0x1b89370() {
   return (neuron0x1b686b0()*0.245329);
}

double NNfunction_ss_sLdL::synapse0x1b893b0() {
   return (neuron0x1b689f0()*-0.173705);
}

double NNfunction_ss_sLdL::synapse0x1b893f0() {
   return (neuron0x1b68d30()*0.116036);
}

double NNfunction_ss_sLdL::synapse0x1b89430() {
   return (neuron0x1b69070()*-0.43174);
}

double NNfunction_ss_sLdL::synapse0x1b89470() {
   return (neuron0x1b693b0()*0.301022);
}

double NNfunction_ss_sLdL::synapse0x1b894b0() {
   return (neuron0x1b696f0()*-0.366448);
}

double NNfunction_ss_sLdL::synapse0x1b894f0() {
   return (neuron0x1b69a30()*-0.316924);
}

double NNfunction_ss_sLdL::synapse0x1b89530() {
   return (neuron0x1b69d70()*-0.548862);
}

double NNfunction_ss_sLdL::synapse0x1b89570() {
   return (neuron0x1b6a0b0()*-1.19503);
}

double NNfunction_ss_sLdL::synapse0x1b895b0() {
   return (neuron0x1b6a3f0()*-0.302271);
}

double NNfunction_ss_sLdL::synapse0x1b895f0() {
   return (neuron0x1b6a730()*-0.494105);
}

double NNfunction_ss_sLdL::synapse0x1b89630() {
   return (neuron0x1b6aa70()*-0.158722);
}

double NNfunction_ss_sLdL::synapse0x1b89670() {
   return (neuron0x1b6adb0()*0.0333649);
}

double NNfunction_ss_sLdL::synapse0x1b896b0() {
   return (neuron0x1b6b0f0()*-0.264428);
}

double NNfunction_ss_sLdL::synapse0x1b896f0() {
   return (neuron0x1b6b430()*-0.150306);
}

double NNfunction_ss_sLdL::synapse0x1b89180() {
   return (neuron0x1b6b770()*0.109154);
}

double NNfunction_ss_sLdL::synapse0x1b891c0() {
   return (neuron0x1b6bcd0()*0.378736);
}

double NNfunction_ss_sLdL::synapse0x1b89840() {
   return (neuron0x1b6bef0()*-0.137921);
}

double NNfunction_ss_sLdL::synapse0x1b89880() {
   return (neuron0x1b6c230()*-0.19378);
}

double NNfunction_ss_sLdL::synapse0x1b898c0() {
   return (neuron0x1b6c570()*0.0278615);
}

double NNfunction_ss_sLdL::synapse0x1b89900() {
   return (neuron0x1b6c8b0()*-0.153032);
}

double NNfunction_ss_sLdL::synapse0x1b89940() {
   return (neuron0x1b6cbf0()*0.558262);
}

double NNfunction_ss_sLdL::synapse0x1b89980() {
   return (neuron0x1b6cf30()*0.784314);
}

double NNfunction_ss_sLdL::synapse0x1b72430() {
   return (neuron0x1b68370()*0.678317);
}

double NNfunction_ss_sLdL::synapse0x1b72470() {
   return (neuron0x1b686b0()*0.0380445);
}

double NNfunction_ss_sLdL::synapse0x1b724b0() {
   return (neuron0x1b689f0()*0.492284);
}

double NNfunction_ss_sLdL::synapse0x1b724f0() {
   return (neuron0x1b68d30()*0.897811);
}

double NNfunction_ss_sLdL::synapse0x1b72530() {
   return (neuron0x1b69070()*0.359887);
}

double NNfunction_ss_sLdL::synapse0x1b72570() {
   return (neuron0x1b693b0()*0.276433);
}

double NNfunction_ss_sLdL::synapse0x1b725b0() {
   return (neuron0x1b696f0()*0.3248);
}

double NNfunction_ss_sLdL::synapse0x1b725f0() {
   return (neuron0x1b69a30()*0.775345);
}

double NNfunction_ss_sLdL::synapse0x1b8a110() {
   return (neuron0x1b69d70()*0.247768);
}

double NNfunction_ss_sLdL::synapse0x1b8a150() {
   return (neuron0x1b6a0b0()*-0.10525);
}

double NNfunction_ss_sLdL::synapse0x1b8a190() {
   return (neuron0x1b6a3f0()*0.270323);
}

double NNfunction_ss_sLdL::synapse0x1b8a1d0() {
   return (neuron0x1b6a730()*0.123261);
}

double NNfunction_ss_sLdL::synapse0x1b8a210() {
   return (neuron0x1b6aa70()*0.0186751);
}

double NNfunction_ss_sLdL::synapse0x1b8a250() {
   return (neuron0x1b6adb0()*0.149657);
}

double NNfunction_ss_sLdL::synapse0x1b8a290() {
   return (neuron0x1b6b0f0()*-0.327577);
}

double NNfunction_ss_sLdL::synapse0x1b8a2d0() {
   return (neuron0x1b6b430()*0.766334);
}

double NNfunction_ss_sLdL::synapse0x1b89b50() {
   return (neuron0x1b6b770()*-0.0482721);
}

double NNfunction_ss_sLdL::synapse0x1b89b90() {
   return (neuron0x1b6bcd0()*-0.0201464);
}

double NNfunction_ss_sLdL::synapse0x1b8a420() {
   return (neuron0x1b6bef0()*0.404209);
}

double NNfunction_ss_sLdL::synapse0x1b8a460() {
   return (neuron0x1b6c230()*0.29899);
}

double NNfunction_ss_sLdL::synapse0x1b8a4a0() {
   return (neuron0x1b6c570()*-0.0165888);
}

double NNfunction_ss_sLdL::synapse0x1b8a4e0() {
   return (neuron0x1b6c8b0()*0.255442);
}

double NNfunction_ss_sLdL::synapse0x1b8a520() {
   return (neuron0x1b6cbf0()*0.193922);
}

double NNfunction_ss_sLdL::synapse0x1b8a560() {
   return (neuron0x1b6cf30()*-0.135172);
}

double NNfunction_ss_sLdL::synapse0x1b8a8e0() {
   return (neuron0x1b68370()*0.3171);
}

double NNfunction_ss_sLdL::synapse0x1b8a920() {
   return (neuron0x1b686b0()*0.467719);
}

double NNfunction_ss_sLdL::synapse0x1b8a960() {
   return (neuron0x1b689f0()*-0.218248);
}

double NNfunction_ss_sLdL::synapse0x1b8a9a0() {
   return (neuron0x1b68d30()*-0.0485004);
}

double NNfunction_ss_sLdL::synapse0x1b8a9e0() {
   return (neuron0x1b69070()*0.401125);
}

double NNfunction_ss_sLdL::synapse0x1b8aa20() {
   return (neuron0x1b693b0()*0.467513);
}

double NNfunction_ss_sLdL::synapse0x1b8aa60() {
   return (neuron0x1b696f0()*-0.503647);
}

double NNfunction_ss_sLdL::synapse0x1b8aaa0() {
   return (neuron0x1b69a30()*0.710803);
}

double NNfunction_ss_sLdL::synapse0x1b8aae0() {
   return (neuron0x1b69d70()*0.169693);
}

double NNfunction_ss_sLdL::synapse0x1b8ab20() {
   return (neuron0x1b6a0b0()*0.368861);
}

double NNfunction_ss_sLdL::synapse0x1b8ab60() {
   return (neuron0x1b6a3f0()*0.176234);
}

double NNfunction_ss_sLdL::synapse0x1b8aba0() {
   return (neuron0x1b6a730()*0.344354);
}

double NNfunction_ss_sLdL::synapse0x1b8abe0() {
   return (neuron0x1b6aa70()*-1.44082);
}

double NNfunction_ss_sLdL::synapse0x1b8ac20() {
   return (neuron0x1b6adb0()*0.628821);
}

double NNfunction_ss_sLdL::synapse0x1b8ac60() {
   return (neuron0x1b6b0f0()*0.181584);
}

double NNfunction_ss_sLdL::synapse0x1b8aca0() {
   return (neuron0x1b6b430()*-0.431467);
}

double NNfunction_ss_sLdL::synapse0x1b8a730() {
   return (neuron0x1b6b770()*-0.707704);
}

double NNfunction_ss_sLdL::synapse0x1b8a770() {
   return (neuron0x1b6bcd0()*-0.132026);
}

double NNfunction_ss_sLdL::synapse0x1b8adf0() {
   return (neuron0x1b6bef0()*0.0659383);
}

double NNfunction_ss_sLdL::synapse0x1b8ae30() {
   return (neuron0x1b6c230()*0.561325);
}

double NNfunction_ss_sLdL::synapse0x1b8ae70() {
   return (neuron0x1b6c570()*-0.331397);
}

double NNfunction_ss_sLdL::synapse0x1b8aeb0() {
   return (neuron0x1b6c8b0()*-0.278058);
}

double NNfunction_ss_sLdL::synapse0x1b8aef0() {
   return (neuron0x1b6cbf0()*0.109266);
}

double NNfunction_ss_sLdL::synapse0x1b8af30() {
   return (neuron0x1b6cf30()*0.187561);
}

double NNfunction_ss_sLdL::synapse0x1b8b2b0() {
   return (neuron0x1b68370()*0.0260529);
}

double NNfunction_ss_sLdL::synapse0x1b8b2f0() {
   return (neuron0x1b686b0()*-0.191793);
}

double NNfunction_ss_sLdL::synapse0x1b8b330() {
   return (neuron0x1b689f0()*0.695063);
}

double NNfunction_ss_sLdL::synapse0x1b8b370() {
   return (neuron0x1b68d30()*-3.02525);
}

double NNfunction_ss_sLdL::synapse0x1b8b3b0() {
   return (neuron0x1b69070()*-0.0325318);
}

double NNfunction_ss_sLdL::synapse0x1b8b3f0() {
   return (neuron0x1b693b0()*0.801736);
}

double NNfunction_ss_sLdL::synapse0x1b8b430() {
   return (neuron0x1b696f0()*0.780662);
}

double NNfunction_ss_sLdL::synapse0x1b8b470() {
   return (neuron0x1b69a30()*0.369296);
}

double NNfunction_ss_sLdL::synapse0x1b8b4b0() {
   return (neuron0x1b69d70()*0.615223);
}

double NNfunction_ss_sLdL::synapse0x1b8b4f0() {
   return (neuron0x1b6a0b0()*0.36037);
}

double NNfunction_ss_sLdL::synapse0x1b8b530() {
   return (neuron0x1b6a3f0()*0.020107);
}

double NNfunction_ss_sLdL::synapse0x1b8b570() {
   return (neuron0x1b6a730()*-0.882937);
}

double NNfunction_ss_sLdL::synapse0x1b8b5b0() {
   return (neuron0x1b6aa70()*-2.64027);
}

double NNfunction_ss_sLdL::synapse0x1b8b5f0() {
   return (neuron0x1b6adb0()*0.16542);
}

double NNfunction_ss_sLdL::synapse0x1b8b630() {
   return (neuron0x1b6b0f0()*-0.271354);
}

double NNfunction_ss_sLdL::synapse0x1b8b670() {
   return (neuron0x1b6b430()*0.0375853);
}

double NNfunction_ss_sLdL::synapse0x1b8b100() {
   return (neuron0x1b6b770()*0.328243);
}

double NNfunction_ss_sLdL::synapse0x1b8b140() {
   return (neuron0x1b6bcd0()*-0.164457);
}

double NNfunction_ss_sLdL::synapse0x1b7bc70() {
   return (neuron0x1b6bef0()*0.738315);
}

double NNfunction_ss_sLdL::synapse0x1b7bcb0() {
   return (neuron0x1b6c230()*0.0344116);
}

double NNfunction_ss_sLdL::synapse0x1b7bcf0() {
   return (neuron0x1b6c570()*0.390277);
}

double NNfunction_ss_sLdL::synapse0x1b7bd30() {
   return (neuron0x1b6c8b0()*0.417229);
}

double NNfunction_ss_sLdL::synapse0x1b7bd70() {
   return (neuron0x1b6cbf0()*-0.626864);
}

double NNfunction_ss_sLdL::synapse0x1b7bdb0() {
   return (neuron0x1b6cf30()*0.0152823);
}

double NNfunction_ss_sLdL::synapse0x1b7c130() {
   return (neuron0x1b68370()*-0.0642783);
}

double NNfunction_ss_sLdL::synapse0x1b7c170() {
   return (neuron0x1b686b0()*0.0269536);
}

double NNfunction_ss_sLdL::synapse0x1b7c1b0() {
   return (neuron0x1b689f0()*-1.43358);
}

double NNfunction_ss_sLdL::synapse0x1b7c1f0() {
   return (neuron0x1b68d30()*-0.0922498);
}

double NNfunction_ss_sLdL::synapse0x1b7c230() {
   return (neuron0x1b69070()*0.0141032);
}

double NNfunction_ss_sLdL::synapse0x1b7c270() {
   return (neuron0x1b693b0()*0.00109941);
}

double NNfunction_ss_sLdL::synapse0x1b7c2b0() {
   return (neuron0x1b696f0()*-0.0079821);
}

double NNfunction_ss_sLdL::synapse0x1b7c2f0() {
   return (neuron0x1b69a30()*-0.0445247);
}

double NNfunction_ss_sLdL::synapse0x1b7c330() {
   return (neuron0x1b69d70()*-0.0166563);
}

double NNfunction_ss_sLdL::synapse0x1b7c370() {
   return (neuron0x1b6a0b0()*0.0261706);
}

double NNfunction_ss_sLdL::synapse0x1b7c3b0() {
   return (neuron0x1b6a3f0()*-0.0251231);
}

double NNfunction_ss_sLdL::synapse0x1b7c3f0() {
   return (neuron0x1b6a730()*0.388493);
}

double NNfunction_ss_sLdL::synapse0x1b7c430() {
   return (neuron0x1b6aa70()*0.322581);
}

double NNfunction_ss_sLdL::synapse0x1b7c470() {
   return (neuron0x1b6adb0()*-0.0596961);
}

double NNfunction_ss_sLdL::synapse0x1b7c4b0() {
   return (neuron0x1b6b0f0()*-0.0290133);
}

double NNfunction_ss_sLdL::synapse0x1b7c4f0() {
   return (neuron0x1b6b430()*-0.0413358);
}

double NNfunction_ss_sLdL::synapse0x1b7bf80() {
   return (neuron0x1b6b770()*0.0113945);
}

double NNfunction_ss_sLdL::synapse0x1b7bfc0() {
   return (neuron0x1b6bcd0()*0.053365);
}

double NNfunction_ss_sLdL::synapse0x1b7c640() {
   return (neuron0x1b6bef0()*0.0220943);
}

double NNfunction_ss_sLdL::synapse0x1b7c680() {
   return (neuron0x1b6c230()*-0.0102479);
}

double NNfunction_ss_sLdL::synapse0x1b7c6c0() {
   return (neuron0x1b6c570()*0.00606638);
}

double NNfunction_ss_sLdL::synapse0x1b7c700() {
   return (neuron0x1b6c8b0()*0.0900347);
}

double NNfunction_ss_sLdL::synapse0x1b7c740() {
   return (neuron0x1b6cbf0()*0.0356018);
}

double NNfunction_ss_sLdL::synapse0x1b7c780() {
   return (neuron0x1b6cf30()*0.0119254);
}

double NNfunction_ss_sLdL::synapse0x1b7cb00() {
   return (neuron0x1b68370()*0.0192462);
}

double NNfunction_ss_sLdL::synapse0x1b7cb40() {
   return (neuron0x1b686b0()*-0.521435);
}

double NNfunction_ss_sLdL::synapse0x1b7cb80() {
   return (neuron0x1b689f0()*-0.695236);
}

double NNfunction_ss_sLdL::synapse0x1b7cbc0() {
   return (neuron0x1b68d30()*-0.415445);
}

double NNfunction_ss_sLdL::synapse0x1b7cc00() {
   return (neuron0x1b69070()*0.541319);
}

double NNfunction_ss_sLdL::synapse0x1b7cc40() {
   return (neuron0x1b693b0()*0.825346);
}

double NNfunction_ss_sLdL::synapse0x1b7cc80() {
   return (neuron0x1b696f0()*0.983166);
}

double NNfunction_ss_sLdL::synapse0x1b7ccc0() {
   return (neuron0x1b69a30()*0.683658);
}

double NNfunction_ss_sLdL::synapse0x1b7cd00() {
   return (neuron0x1b69d70()*0.193215);
}

double NNfunction_ss_sLdL::synapse0x1b7cd40() {
   return (neuron0x1b6a0b0()*0.804132);
}

double NNfunction_ss_sLdL::synapse0x1b7cd80() {
   return (neuron0x1b6a3f0()*-0.380861);
}

double NNfunction_ss_sLdL::synapse0x1b7cdc0() {
   return (neuron0x1b6a730()*-0.112575);
}

double NNfunction_ss_sLdL::synapse0x1b7ce00() {
   return (neuron0x1b6aa70()*-0.140978);
}

double NNfunction_ss_sLdL::synapse0x1b7ce40() {
   return (neuron0x1b6adb0()*-0.29277);
}

double NNfunction_ss_sLdL::synapse0x1b7ce80() {
   return (neuron0x1b6b0f0()*0.572901);
}

double NNfunction_ss_sLdL::synapse0x1b7cec0() {
   return (neuron0x1b6b430()*0.608495);
}

double NNfunction_ss_sLdL::synapse0x1b7c950() {
   return (neuron0x1b6b770()*-0.0873229);
}

double NNfunction_ss_sLdL::synapse0x1b7c990() {
   return (neuron0x1b6bcd0()*0.131441);
}

double NNfunction_ss_sLdL::synapse0x1b7d010() {
   return (neuron0x1b6bef0()*-0.304055);
}

double NNfunction_ss_sLdL::synapse0x1b7d050() {
   return (neuron0x1b6c230()*0.170225);
}

double NNfunction_ss_sLdL::synapse0x1b7d090() {
   return (neuron0x1b6c570()*0.722449);
}

double NNfunction_ss_sLdL::synapse0x1b7d0d0() {
   return (neuron0x1b6c8b0()*-0.0702627);
}

double NNfunction_ss_sLdL::synapse0x1b7d110() {
   return (neuron0x1b6cbf0()*-0.675224);
}

double NNfunction_ss_sLdL::synapse0x1b7d150() {
   return (neuron0x1b6cf30()*-0.00434438);
}

double NNfunction_ss_sLdL::synapse0x1b7d4d0() {
   return (neuron0x1b68370()*0.000507686);
}

double NNfunction_ss_sLdL::synapse0x1b7d510() {
   return (neuron0x1b686b0()*-0.0047874);
}

double NNfunction_ss_sLdL::synapse0x1b7d550() {
   return (neuron0x1b689f0()*-0.0106023);
}

double NNfunction_ss_sLdL::synapse0x1b7d590() {
   return (neuron0x1b68d30()*-1.27159);
}

double NNfunction_ss_sLdL::synapse0x1b7d5d0() {
   return (neuron0x1b69070()*-0.00453661);
}

double NNfunction_ss_sLdL::synapse0x1b7d610() {
   return (neuron0x1b693b0()*0.00153076);
}

double NNfunction_ss_sLdL::synapse0x1b7d650() {
   return (neuron0x1b696f0()*0.00964306);
}

double NNfunction_ss_sLdL::synapse0x1b7d690() {
   return (neuron0x1b69a30()*0.0126338);
}

double NNfunction_ss_sLdL::synapse0x1b7d6d0() {
   return (neuron0x1b69d70()*0.00402646);
}

double NNfunction_ss_sLdL::synapse0x1b7d710() {
   return (neuron0x1b6a0b0()*0.0125366);
}

double NNfunction_ss_sLdL::synapse0x1b7d750() {
   return (neuron0x1b6a3f0()*0.0113018);
}

double NNfunction_ss_sLdL::synapse0x1b7d790() {
   return (neuron0x1b6a730()*0.097569);
}

double NNfunction_ss_sLdL::synapse0x1b7d7d0() {
   return (neuron0x1b6aa70()*0.101184);
}

double NNfunction_ss_sLdL::synapse0x1b7d810() {
   return (neuron0x1b6adb0()*0.0138138);
}

double NNfunction_ss_sLdL::synapse0x1b7d850() {
   return (neuron0x1b6b0f0()*-0.00827859);
}

double NNfunction_ss_sLdL::synapse0x1b7d890() {
   return (neuron0x1b6b430()*0.00371025);
}

double NNfunction_ss_sLdL::synapse0x1b7d320() {
   return (neuron0x1b6b770()*0.0177309);
}

double NNfunction_ss_sLdL::synapse0x1b7d360() {
   return (neuron0x1b6bcd0()*-0.00139037);
}

double NNfunction_ss_sLdL::synapse0x1b7d9e0() {
   return (neuron0x1b6bef0()*0.00126083);
}

double NNfunction_ss_sLdL::synapse0x1b7da20() {
   return (neuron0x1b6c230()*0.00764709);
}

double NNfunction_ss_sLdL::synapse0x1b7da60() {
   return (neuron0x1b6c570()*-0.000977209);
}

double NNfunction_ss_sLdL::synapse0x1b7daa0() {
   return (neuron0x1b6c8b0()*0.00832609);
}

double NNfunction_ss_sLdL::synapse0x1b7dae0() {
   return (neuron0x1b6cbf0()*0.0093547);
}

double NNfunction_ss_sLdL::synapse0x1b7db20() {
   return (neuron0x1b6cf30()*-0.00752545);
}

double NNfunction_ss_sLdL::synapse0x1b8f9f0() {
   return (neuron0x1b68370()*0.106244);
}

double NNfunction_ss_sLdL::synapse0x1b8fa30() {
   return (neuron0x1b686b0()*0.0269653);
}

double NNfunction_ss_sLdL::synapse0x1b8fa70() {
   return (neuron0x1b689f0()*0.95384);
}

double NNfunction_ss_sLdL::synapse0x1b8fab0() {
   return (neuron0x1b68d30()*-0.973817);
}

double NNfunction_ss_sLdL::synapse0x1b8faf0() {
   return (neuron0x1b69070()*0.654175);
}

double NNfunction_ss_sLdL::synapse0x1b8fb30() {
   return (neuron0x1b693b0()*0.502102);
}

double NNfunction_ss_sLdL::synapse0x1b8fb70() {
   return (neuron0x1b696f0()*0.565683);
}

double NNfunction_ss_sLdL::synapse0x1b8fbb0() {
   return (neuron0x1b69a30()*0.110466);
}

double NNfunction_ss_sLdL::synapse0x1b8fbf0() {
   return (neuron0x1b69d70()*0.173977);
}

double NNfunction_ss_sLdL::synapse0x1b8fc30() {
   return (neuron0x1b6a0b0()*0.268866);
}

double NNfunction_ss_sLdL::synapse0x1b8fc70() {
   return (neuron0x1b6a3f0()*0.0034672);
}

double NNfunction_ss_sLdL::synapse0x1b8fcb0() {
   return (neuron0x1b6a730()*0.161744);
}

double NNfunction_ss_sLdL::synapse0x1b8fcf0() {
   return (neuron0x1b6aa70()*0.298644);
}

double NNfunction_ss_sLdL::synapse0x1b8fd30() {
   return (neuron0x1b6adb0()*-0.441981);
}

double NNfunction_ss_sLdL::synapse0x1b8fd70() {
   return (neuron0x1b6b0f0()*0.504662);
}

double NNfunction_ss_sLdL::synapse0x1b8fdb0() {
   return (neuron0x1b6b430()*0.156373);
}

double NNfunction_ss_sLdL::synapse0x1b7db60() {
   return (neuron0x1b6b770()*-0.392666);
}

double NNfunction_ss_sLdL::synapse0x1b7dba0() {
   return (neuron0x1b6bcd0()*0.211735);
}

double NNfunction_ss_sLdL::synapse0x1b8ff00() {
   return (neuron0x1b6bef0()*0.204326);
}

double NNfunction_ss_sLdL::synapse0x1b8ff40() {
   return (neuron0x1b6c230()*0.185852);
}

double NNfunction_ss_sLdL::synapse0x1b8ff80() {
   return (neuron0x1b6c570()*0.414954);
}

double NNfunction_ss_sLdL::synapse0x1b8ffc0() {
   return (neuron0x1b6c8b0()*0.0494171);
}

double NNfunction_ss_sLdL::synapse0x1b90000() {
   return (neuron0x1b6cbf0()*0.0115951);
}

double NNfunction_ss_sLdL::synapse0x1b90040() {
   return (neuron0x1b6cf30()*-0.102174);
}

double NNfunction_ss_sLdL::synapse0x1b903c0() {
   return (neuron0x1b68370()*0.140531);
}

double NNfunction_ss_sLdL::synapse0x1b90400() {
   return (neuron0x1b686b0()*0.093317);
}

double NNfunction_ss_sLdL::synapse0x1b90440() {
   return (neuron0x1b689f0()*0.361538);
}

double NNfunction_ss_sLdL::synapse0x1b90480() {
   return (neuron0x1b68d30()*-1.91074);
}

double NNfunction_ss_sLdL::synapse0x1b904c0() {
   return (neuron0x1b69070()*0.182185);
}

double NNfunction_ss_sLdL::synapse0x1b90500() {
   return (neuron0x1b693b0()*0.125516);
}

double NNfunction_ss_sLdL::synapse0x1b90540() {
   return (neuron0x1b696f0()*-0.0495289);
}

double NNfunction_ss_sLdL::synapse0x1b90580() {
   return (neuron0x1b69a30()*0.0656965);
}

double NNfunction_ss_sLdL::synapse0x1b905c0() {
   return (neuron0x1b69d70()*-0.0391746);
}

double NNfunction_ss_sLdL::synapse0x1b90600() {
   return (neuron0x1b6a0b0()*-0.188481);
}

double NNfunction_ss_sLdL::synapse0x1b90640() {
   return (neuron0x1b6a3f0()*0.112424);
}

double NNfunction_ss_sLdL::synapse0x1b90680() {
   return (neuron0x1b6a730()*-1.29326);
}

double NNfunction_ss_sLdL::synapse0x1b906c0() {
   return (neuron0x1b6aa70()*-0.656233);
}

double NNfunction_ss_sLdL::synapse0x1b90700() {
   return (neuron0x1b6adb0()*0.0496306);
}

double NNfunction_ss_sLdL::synapse0x1b90740() {
   return (neuron0x1b6b0f0()*0.203146);
}

double NNfunction_ss_sLdL::synapse0x1b90780() {
   return (neuron0x1b6b430()*0.470935);
}

double NNfunction_ss_sLdL::synapse0x1b90210() {
   return (neuron0x1b6b770()*0.25682);
}

double NNfunction_ss_sLdL::synapse0x1b90250() {
   return (neuron0x1b6bcd0()*-0.0746998);
}

double NNfunction_ss_sLdL::synapse0x1b908d0() {
   return (neuron0x1b6bef0()*0.201186);
}

double NNfunction_ss_sLdL::synapse0x1b90910() {
   return (neuron0x1b6c230()*0.126741);
}

double NNfunction_ss_sLdL::synapse0x1b90950() {
   return (neuron0x1b6c570()*-0.0944799);
}

double NNfunction_ss_sLdL::synapse0x1b90990() {
   return (neuron0x1b6c8b0()*0.0129738);
}

double NNfunction_ss_sLdL::synapse0x1b909d0() {
   return (neuron0x1b6cbf0()*0.174098);
}

double NNfunction_ss_sLdL::synapse0x1b90a10() {
   return (neuron0x1b6cf30()*0.218649);
}

double NNfunction_ss_sLdL::synapse0x1b90d90() {
   return (neuron0x1b68370()*0.200135);
}

double NNfunction_ss_sLdL::synapse0x1b90dd0() {
   return (neuron0x1b686b0()*0.0010314);
}

double NNfunction_ss_sLdL::synapse0x1b90e10() {
   return (neuron0x1b689f0()*0.544271);
}

double NNfunction_ss_sLdL::synapse0x1b90e50() {
   return (neuron0x1b68d30()*-1.08855);
}

double NNfunction_ss_sLdL::synapse0x1b90e90() {
   return (neuron0x1b69070()*0.00762443);
}

double NNfunction_ss_sLdL::synapse0x1b90ed0() {
   return (neuron0x1b693b0()*0.115479);
}

double NNfunction_ss_sLdL::synapse0x1b90f10() {
   return (neuron0x1b696f0()*-0.604138);
}

double NNfunction_ss_sLdL::synapse0x1b90f50() {
   return (neuron0x1b69a30()*0.151427);
}

double NNfunction_ss_sLdL::synapse0x1b90f90() {
   return (neuron0x1b69d70()*-0.575656);
}

double NNfunction_ss_sLdL::synapse0x1b90fd0() {
   return (neuron0x1b6a0b0()*-0.0412491);
}

double NNfunction_ss_sLdL::synapse0x1b91010() {
   return (neuron0x1b6a3f0()*0.229096);
}

double NNfunction_ss_sLdL::synapse0x1b91050() {
   return (neuron0x1b6a730()*-0.357733);
}

double NNfunction_ss_sLdL::synapse0x1b91090() {
   return (neuron0x1b6aa70()*1.17314);
}

double NNfunction_ss_sLdL::synapse0x1b910d0() {
   return (neuron0x1b6adb0()*-0.177841);
}

double NNfunction_ss_sLdL::synapse0x1b91110() {
   return (neuron0x1b6b0f0()*0.251554);
}

double NNfunction_ss_sLdL::synapse0x1b91150() {
   return (neuron0x1b6b430()*-0.0761012);
}

double NNfunction_ss_sLdL::synapse0x1b90be0() {
   return (neuron0x1b6b770()*0.204335);
}

double NNfunction_ss_sLdL::synapse0x1b90c20() {
   return (neuron0x1b6bcd0()*-0.489153);
}

double NNfunction_ss_sLdL::synapse0x1b912a0() {
   return (neuron0x1b6bef0()*0.340675);
}

double NNfunction_ss_sLdL::synapse0x1b912e0() {
   return (neuron0x1b6c230()*0.291804);
}

double NNfunction_ss_sLdL::synapse0x1b91320() {
   return (neuron0x1b6c570()*0.132831);
}

double NNfunction_ss_sLdL::synapse0x1b91360() {
   return (neuron0x1b6c8b0()*-0.159267);
}

double NNfunction_ss_sLdL::synapse0x1b913a0() {
   return (neuron0x1b6cbf0()*-0.250225);
}

double NNfunction_ss_sLdL::synapse0x1b913e0() {
   return (neuron0x1b6cf30()*-0.0827454);
}

double NNfunction_ss_sLdL::synapse0x1b91760() {
   return (neuron0x1b68370()*0.04634);
}

double NNfunction_ss_sLdL::synapse0x1b917a0() {
   return (neuron0x1b686b0()*-0.11416);
}

double NNfunction_ss_sLdL::synapse0x1b917e0() {
   return (neuron0x1b689f0()*-0.122736);
}

double NNfunction_ss_sLdL::synapse0x1b91820() {
   return (neuron0x1b68d30()*-1.69219);
}

double NNfunction_ss_sLdL::synapse0x1b91860() {
   return (neuron0x1b69070()*-0.0704951);
}

double NNfunction_ss_sLdL::synapse0x1b918a0() {
   return (neuron0x1b693b0()*-0.215916);
}

double NNfunction_ss_sLdL::synapse0x1b918e0() {
   return (neuron0x1b696f0()*-0.317178);
}

double NNfunction_ss_sLdL::synapse0x1b91920() {
   return (neuron0x1b69a30()*0.0641815);
}

double NNfunction_ss_sLdL::synapse0x1b91960() {
   return (neuron0x1b69d70()*0.0165361);
}

double NNfunction_ss_sLdL::synapse0x1b919a0() {
   return (neuron0x1b6a0b0()*-0.0471146);
}

double NNfunction_ss_sLdL::synapse0x1b919e0() {
   return (neuron0x1b6a3f0()*-0.0465555);
}

double NNfunction_ss_sLdL::synapse0x1b91a20() {
   return (neuron0x1b6a730()*0.686454);
}

double NNfunction_ss_sLdL::synapse0x1b91a60() {
   return (neuron0x1b6aa70()*1.05179);
}

double NNfunction_ss_sLdL::synapse0x1b91aa0() {
   return (neuron0x1b6adb0()*-0.0609664);
}

double NNfunction_ss_sLdL::synapse0x1b91ae0() {
   return (neuron0x1b6b0f0()*-0.0864912);
}

double NNfunction_ss_sLdL::synapse0x1b91b20() {
   return (neuron0x1b6b430()*0.0989569);
}

double NNfunction_ss_sLdL::synapse0x1b915b0() {
   return (neuron0x1b6b770()*0.00731262);
}

double NNfunction_ss_sLdL::synapse0x1b915f0() {
   return (neuron0x1b6bcd0()*0.19258);
}

double NNfunction_ss_sLdL::synapse0x1b91c70() {
   return (neuron0x1b6bef0()*0.0176218);
}

double NNfunction_ss_sLdL::synapse0x1b91cb0() {
   return (neuron0x1b6c230()*0.00633302);
}

double NNfunction_ss_sLdL::synapse0x1b91cf0() {
   return (neuron0x1b6c570()*0.0516819);
}

double NNfunction_ss_sLdL::synapse0x1b91d30() {
   return (neuron0x1b6c8b0()*-0.0181329);
}

double NNfunction_ss_sLdL::synapse0x1b91d70() {
   return (neuron0x1b6cbf0()*-0.0381063);
}

double NNfunction_ss_sLdL::synapse0x1b91db0() {
   return (neuron0x1b6cf30()*-0.0253392);
}

double NNfunction_ss_sLdL::synapse0x1931cc0() {
   return (neuron0x1b6d3a0()*-0.222557);
}

double NNfunction_ss_sLdL::synapse0x1931d00() {
   return (neuron0x1b6dcf0()*0.0126049);
}

double NNfunction_ss_sLdL::synapse0x1b6f860() {
   return (neuron0x1b6e7d0()*-0.73983);
}

double NNfunction_ss_sLdL::synapse0x1b6f8a0() {
   return (neuron0x1b6e270()*0.0980607);
}

double NNfunction_ss_sLdL::synapse0x1b70230() {
   return (neuron0x1b6f5b0()*0.054119);
}

double NNfunction_ss_sLdL::synapse0x1b70270() {
   return (neuron0x1b6ff80()*0.289568);
}

double NNfunction_ss_sLdL::synapse0x1b71000() {
   return (neuron0x1b70d50()*0.0108966);
}

double NNfunction_ss_sLdL::synapse0x1b71040() {
   return (neuron0x1b71720()*0.0830628);
}

double NNfunction_ss_sLdL::synapse0x1b719d0() {
   return (neuron0x1b720f0()*0.240101);
}

double NNfunction_ss_sLdL::synapse0x1b71a10() {
   return (neuron0x1b72bd0()*0.0859411);
}

double NNfunction_ss_sLdL::synapse0x1b723a0() {
   return (neuron0x1b735a0()*0.375402);
}

double NNfunction_ss_sLdL::synapse0x1b723e0() {
   return (neuron0x1b70680()*0.0802982);
}

double NNfunction_ss_sLdL::synapse0x1b72e80() {
   return (neuron0x1b75150()*0.142502);
}

double NNfunction_ss_sLdL::synapse0x1b72ec0() {
   return (neuron0x1b75b20()*-0.210708);
}

double NNfunction_ss_sLdL::synapse0x1b73850() {
   return (neuron0x1b764f0()*-0.246001);
}

double NNfunction_ss_sLdL::synapse0x1b73890() {
   return (neuron0x1b76ec0()*-0.401243);
}

double NNfunction_ss_sLdL::synapse0x1b70930() {
   return (neuron0x1b78cd0()*-0.0906488);
}

double NNfunction_ss_sLdL::synapse0x1b70970() {
   return (neuron0x1b78fb0()*-0.33752);
}

double NNfunction_ss_sLdL::synapse0x1b75400() {
   return (neuron0x1b79980()*0.114524);
}

double NNfunction_ss_sLdL::synapse0x1b75440() {
   return (neuron0x1b7a350()*0.041349);
}

double NNfunction_ss_sLdL::synapse0x1b75dd0() {
   return (neuron0x1b7ad20()*-0.536211);
}

double NNfunction_ss_sLdL::synapse0x1b75e10() {
   return (neuron0x1b7b6f0()*-0.0822682);
}

double NNfunction_ss_sLdL::synapse0x1b767a0() {
   return (neuron0x1b74240()*0.0783167);
}

double NNfunction_ss_sLdL::synapse0x1b767e0() {
   return (neuron0x1b74c10()*0.00256807);
}

double NNfunction_ss_sLdL::synapse0x1b77170() {
   return (neuron0x1b7e480()*-0.206941);
}

double NNfunction_ss_sLdL::synapse0x1b771b0() {
   return (neuron0x1b7ee50()*0.0902692);
}

double NNfunction_ss_sLdL::synapse0x1b6b310() {
   return (neuron0x1b7f820()*0.0416961);
}

double NNfunction_ss_sLdL::synapse0x1b6b350() {
   return (neuron0x1b801f0()*-0.826421);
}

double NNfunction_ss_sLdL::synapse0x1b79260() {
   return (neuron0x1b80bc0()*0.453414);
}

double NNfunction_ss_sLdL::synapse0x1b792a0() {
   return (neuron0x1b81590()*-0.0203114);
}

double NNfunction_ss_sLdL::synapse0x1b79c30() {
   return (neuron0x1b81f60()*-0.414654);
}

double NNfunction_ss_sLdL::synapse0x1b79c70() {
   return (neuron0x1b82930()*-0.240669);
}

double NNfunction_ss_sLdL::synapse0x1b7a600() {
   return (neuron0x1b789c0()*0.177301);
}

double NNfunction_ss_sLdL::synapse0x1b7a640() {
   return (neuron0x1b85510()*0.356776);
}

double NNfunction_ss_sLdL::synapse0x1b7afd0() {
   return (neuron0x1b85ee0()*0.010492);
}

double NNfunction_ss_sLdL::synapse0x1b7b010() {
   return (neuron0x1b868b0()*-0.267132);
}

double NNfunction_ss_sLdL::synapse0x1b7b9a0() {
   return (neuron0x1b87280()*-0.0490472);
}

double NNfunction_ss_sLdL::synapse0x1b7b9e0() {
   return (neuron0x1b87c50()*0.276426);
}

double NNfunction_ss_sLdL::synapse0x1b744f0() {
   return (neuron0x1b88620()*-0.386726);
}

double NNfunction_ss_sLdL::synapse0x1b74530() {
   return (neuron0x1b88ff0()*-0.17402);
}

double NNfunction_ss_sLdL::synapse0x1b7dda0() {
   return (neuron0x1b899c0()*0.559735);
}

double NNfunction_ss_sLdL::synapse0x1b7dde0() {
   return (neuron0x1b8a5a0()*0.0452676);
}

double NNfunction_ss_sLdL::synapse0x1b7e730() {
   return (neuron0x1b8af70()*-0.383866);
}

double NNfunction_ss_sLdL::synapse0x1b7e770() {
   return (neuron0x1b7bdf0()*0.33674);
}

double NNfunction_ss_sLdL::synapse0x1b7f100() {
   return (neuron0x1b7c7c0()*0.422492);
}

double NNfunction_ss_sLdL::synapse0x1b7f140() {
   return (neuron0x1b7d190()*0.616722);
}

double NNfunction_ss_sLdL::synapse0x1b7fad0() {
   return (neuron0x1b8f7d0()*-0.15712);
}

double NNfunction_ss_sLdL::synapse0x1b7fb10() {
   return (neuron0x1b90080()*-0.688118);
}

double NNfunction_ss_sLdL::synapse0x1b804a0() {
   return (neuron0x1b90a50()*-0.00204371);
}

double NNfunction_ss_sLdL::synapse0x1b804e0() {
   return (neuron0x1b91420()*0.797281);
}

double NNfunction_ss_sLdL::synapse0x1b82be0() {
   return (neuron0x1b6d3a0()*-1.40156);
}

double NNfunction_ss_sLdL::synapse0x1b82c20() {
   return (neuron0x1b6dcf0()*-1.16935);
}

double NNfunction_ss_sLdL::synapse0x1b781a0() {
   return (neuron0x1b6e7d0()*-1.71023);
}

double NNfunction_ss_sLdL::synapse0x1b781e0() {
   return (neuron0x1b6e270()*1.43987);
}

double NNfunction_ss_sLdL::synapse0x1b857c0() {
   return (neuron0x1b6f5b0()*-4.59656);
}

double NNfunction_ss_sLdL::synapse0x1b85800() {
   return (neuron0x1b6ff80()*1.14128);
}

double NNfunction_ss_sLdL::synapse0x1b86190() {
   return (neuron0x1b70d50()*0.862416);
}

double NNfunction_ss_sLdL::synapse0x1b861d0() {
   return (neuron0x1b71720()*-0.948787);
}

double NNfunction_ss_sLdL::synapse0x1b86b60() {
   return (neuron0x1b720f0()*-1.97122);
}

double NNfunction_ss_sLdL::synapse0x1b86ba0() {
   return (neuron0x1b72bd0()*-1.16992);
}

double NNfunction_ss_sLdL::synapse0x1b87530() {
   return (neuron0x1b735a0()*3.22313);
}

double NNfunction_ss_sLdL::synapse0x1b87570() {
   return (neuron0x1b70680()*1.69761);
}

double NNfunction_ss_sLdL::synapse0x1b87f00() {
   return (neuron0x1b75150()*0.914012);
}

double NNfunction_ss_sLdL::synapse0x1b87f40() {
   return (neuron0x1b75b20()*-0.827261);
}

double NNfunction_ss_sLdL::synapse0x1b888d0() {
   return (neuron0x1b764f0()*-1.23383);
}

double NNfunction_ss_sLdL::synapse0x1b88910() {
   return (neuron0x1b76ec0()*1.50539);
}

double NNfunction_ss_sLdL::synapse0x1b892a0() {
   return (neuron0x1b78cd0()*-1.13761);
}

double NNfunction_ss_sLdL::synapse0x1b892e0() {
   return (neuron0x1b78fb0()*3.67141);
}

double NNfunction_ss_sLdL::synapse0x1b89c70() {
   return (neuron0x1b79980()*1.14124);
}

double NNfunction_ss_sLdL::synapse0x1b89cb0() {
   return (neuron0x1b7a350()*-0.750736);
}

double NNfunction_ss_sLdL::synapse0x1b8a850() {
   return (neuron0x1b7ad20()*-0.884768);
}

double NNfunction_ss_sLdL::synapse0x1b8a890() {
   return (neuron0x1b7b6f0()*-0.717865);
}

double NNfunction_ss_sLdL::synapse0x1b8b220() {
   return (neuron0x1b74240()*1.44205);
}

double NNfunction_ss_sLdL::synapse0x1b8b260() {
   return (neuron0x1b74c10()*-1.23256);
}

double NNfunction_ss_sLdL::synapse0x1b7c0a0() {
   return (neuron0x1b7e480()*1.14943);
}

double NNfunction_ss_sLdL::synapse0x1b7c0e0() {
   return (neuron0x1b7ee50()*0.847855);
}

double NNfunction_ss_sLdL::synapse0x1b7ca70() {
   return (neuron0x1b7f820()*1.34051);
}

double NNfunction_ss_sLdL::synapse0x1b7cab0() {
   return (neuron0x1b801f0()*0.682125);
}

double NNfunction_ss_sLdL::synapse0x1b7d440() {
   return (neuron0x1b80bc0()*0.48523);
}

double NNfunction_ss_sLdL::synapse0x1b7d480() {
   return (neuron0x1b81590()*1.57905);
}

double NNfunction_ss_sLdL::synapse0x1b8f960() {
   return (neuron0x1b81f60()*-1.58998);
}

double NNfunction_ss_sLdL::synapse0x1b8f9a0() {
   return (neuron0x1b82930()*1.60406);
}

double NNfunction_ss_sLdL::synapse0x1b90330() {
   return (neuron0x1b789c0()*-0.943451);
}

double NNfunction_ss_sLdL::synapse0x1b90370() {
   return (neuron0x1b85510()*1.78595);
}

double NNfunction_ss_sLdL::synapse0x1b90d00() {
   return (neuron0x1b85ee0()*-1.31934);
}

double NNfunction_ss_sLdL::synapse0x1b90d40() {
   return (neuron0x1b868b0()*-0.739922);
}

double NNfunction_ss_sLdL::synapse0x1b916d0() {
   return (neuron0x1b87280()*1.01964);
}

double NNfunction_ss_sLdL::synapse0x1b91710() {
   return (neuron0x1b87c50()*0.809707);
}

double NNfunction_ss_sLdL::synapse0x1b6d5c0() {
   return (neuron0x1b88620()*-1.5311);
}

double NNfunction_ss_sLdL::synapse0x1b6d600() {
   return (neuron0x1b88ff0()*1.07482);
}

double NNfunction_ss_sLdL::synapse0x1b80e70() {
   return (neuron0x1b899c0()*1.79981);
}

double NNfunction_ss_sLdL::synapse0x1b80eb0() {
   return (neuron0x1b8a5a0()*1.31857);
}

double NNfunction_ss_sLdL::synapse0x1b91df0() {
   return (neuron0x1b8af70()*-0.331763);
}

double NNfunction_ss_sLdL::synapse0x1b91e30() {
   return (neuron0x1b7bdf0()*-1.64923);
}

double NNfunction_ss_sLdL::synapse0x1b91e70() {
   return (neuron0x1b7c7c0()*0.553374);
}

double NNfunction_ss_sLdL::synapse0x1b91eb0() {
   return (neuron0x1b7d190()*1.24724);
}

double NNfunction_ss_sLdL::synapse0x1b98d60() {
   return (neuron0x1b8f7d0()*1.75428);
}

double NNfunction_ss_sLdL::synapse0x1b98da0() {
   return (neuron0x1b90080()*0.0793864);
}

double NNfunction_ss_sLdL::synapse0x1b98de0() {
   return (neuron0x1b90a50()*-1.15464);
}

double NNfunction_ss_sLdL::synapse0x1b98e20() {
   return (neuron0x1b91420()*-3.43291);
}

double NNfunction_ss_sLdL::synapse0x1b991a0() {
   return (neuron0x1b6d3a0()*0.314305);
}

double NNfunction_ss_sLdL::synapse0x1b991e0() {
   return (neuron0x1b6dcf0()*0.178014);
}

double NNfunction_ss_sLdL::synapse0x1b99220() {
   return (neuron0x1b6e7d0()*-0.669099);
}

double NNfunction_ss_sLdL::synapse0x1b99260() {
   return (neuron0x1b6e270()*-0.394542);
}

double NNfunction_ss_sLdL::synapse0x1b992a0() {
   return (neuron0x1b6f5b0()*-0.780786);
}

double NNfunction_ss_sLdL::synapse0x1b992e0() {
   return (neuron0x1b6ff80()*-0.6424);
}

double NNfunction_ss_sLdL::synapse0x1b99320() {
   return (neuron0x1b70d50()*0.118931);
}

double NNfunction_ss_sLdL::synapse0x1b99360() {
   return (neuron0x1b71720()*-0.158517);
}

double NNfunction_ss_sLdL::synapse0x1b993a0() {
   return (neuron0x1b720f0()*-0.572159);
}

double NNfunction_ss_sLdL::synapse0x1b993e0() {
   return (neuron0x1b72bd0()*0.0379199);
}

double NNfunction_ss_sLdL::synapse0x1b99420() {
   return (neuron0x1b735a0()*0.204599);
}

double NNfunction_ss_sLdL::synapse0x1b99460() {
   return (neuron0x1b70680()*-0.579001);
}

double NNfunction_ss_sLdL::synapse0x1b994a0() {
   return (neuron0x1b75150()*-0.261784);
}

double NNfunction_ss_sLdL::synapse0x1b994e0() {
   return (neuron0x1b75b20()*-0.216357);
}

double NNfunction_ss_sLdL::synapse0x1b99520() {
   return (neuron0x1b764f0()*0.156623);
}

double NNfunction_ss_sLdL::synapse0x1b99560() {
   return (neuron0x1b76ec0()*-0.872269);
}

double NNfunction_ss_sLdL::synapse0x1b98ff0() {
   return (neuron0x1b78cd0()*-0.938995);
}

double NNfunction_ss_sLdL::synapse0x1b99030() {
   return (neuron0x1b78fb0()*0.615892);
}

double NNfunction_ss_sLdL::synapse0x1b996b0() {
   return (neuron0x1b79980()*-0.0556857);
}

double NNfunction_ss_sLdL::synapse0x1b996f0() {
   return (neuron0x1b7a350()*-0.403143);
}

double NNfunction_ss_sLdL::synapse0x1b99730() {
   return (neuron0x1b7ad20()*0.407036);
}

double NNfunction_ss_sLdL::synapse0x1b99770() {
   return (neuron0x1b7b6f0()*0.179642);
}

double NNfunction_ss_sLdL::synapse0x1b997b0() {
   return (neuron0x1b74240()*-0.381851);
}

double NNfunction_ss_sLdL::synapse0x1b997f0() {
   return (neuron0x1b74c10()*-0.151778);
}

double NNfunction_ss_sLdL::synapse0x1b99830() {
   return (neuron0x1b7e480()*-0.0058106);
}

double NNfunction_ss_sLdL::synapse0x1b99870() {
   return (neuron0x1b7ee50()*-0.225665);
}

double NNfunction_ss_sLdL::synapse0x1b998b0() {
   return (neuron0x1b7f820()*-0.820954);
}

double NNfunction_ss_sLdL::synapse0x1b998f0() {
   return (neuron0x1b801f0()*-0.964993);
}

double NNfunction_ss_sLdL::synapse0x1b99930() {
   return (neuron0x1b80bc0()*0.600537);
}

double NNfunction_ss_sLdL::synapse0x1b99970() {
   return (neuron0x1b81590()*-0.302825);
}

double NNfunction_ss_sLdL::synapse0x1b999b0() {
   return (neuron0x1b81f60()*-0.269574);
}

double NNfunction_ss_sLdL::synapse0x1b999f0() {
   return (neuron0x1b82930()*0.123898);
}

double NNfunction_ss_sLdL::synapse0x1b995a0() {
   return (neuron0x1b789c0()*0.0700858);
}

double NNfunction_ss_sLdL::synapse0x1b995e0() {
   return (neuron0x1b85510()*0.0364513);
}

double NNfunction_ss_sLdL::synapse0x1b99620() {
   return (neuron0x1b85ee0()*-0.285901);
}

double NNfunction_ss_sLdL::synapse0x1b99660() {
   return (neuron0x1b868b0()*-1.46141);
}

double NNfunction_ss_sLdL::synapse0x1b99c40() {
   return (neuron0x1b87280()*-0.344269);
}

double NNfunction_ss_sLdL::synapse0x1b99c80() {
   return (neuron0x1b87c50()*0.686142);
}

double NNfunction_ss_sLdL::synapse0x1b99cc0() {
   return (neuron0x1b88620()*-0.426809);
}

double NNfunction_ss_sLdL::synapse0x1b99d00() {
   return (neuron0x1b88ff0()*-0.0402171);
}

double NNfunction_ss_sLdL::synapse0x1b99d40() {
   return (neuron0x1b899c0()*0.151174);
}

double NNfunction_ss_sLdL::synapse0x1b99d80() {
   return (neuron0x1b8a5a0()*-0.0300861);
}

double NNfunction_ss_sLdL::synapse0x1b99dc0() {
   return (neuron0x1b8af70()*-1.1059);
}

double NNfunction_ss_sLdL::synapse0x1b99e00() {
   return (neuron0x1b7bdf0()*0.0933439);
}

double NNfunction_ss_sLdL::synapse0x1b99e40() {
   return (neuron0x1b7c7c0()*-0.849953);
}

double NNfunction_ss_sLdL::synapse0x1b99e80() {
   return (neuron0x1b7d190()*0.430427);
}

double NNfunction_ss_sLdL::synapse0x1b99ec0() {
   return (neuron0x1b8f7d0()*-0.635831);
}

double NNfunction_ss_sLdL::synapse0x1b99f00() {
   return (neuron0x1b90080()*-0.729576);
}

double NNfunction_ss_sLdL::synapse0x1b99f40() {
   return (neuron0x1b90a50()*0.15635);
}

double NNfunction_ss_sLdL::synapse0x1b99f80() {
   return (neuron0x1b91420()*0.423781);
}

double NNfunction_ss_sLdL::synapse0x1b9a300() {
   return (neuron0x1b6d3a0()*-0.018043);
}

double NNfunction_ss_sLdL::synapse0x1b9a340() {
   return (neuron0x1b6dcf0()*0.00302143);
}

double NNfunction_ss_sLdL::synapse0x1b9a380() {
   return (neuron0x1b6e7d0()*1.65232);
}

double NNfunction_ss_sLdL::synapse0x1b9a3c0() {
   return (neuron0x1b6e270()*0.0146131);
}

double NNfunction_ss_sLdL::synapse0x1b9a400() {
   return (neuron0x1b6f5b0()*0.28586);
}

double NNfunction_ss_sLdL::synapse0x1b9a440() {
   return (neuron0x1b6ff80()*0.0243638);
}

double NNfunction_ss_sLdL::synapse0x1b9a480() {
   return (neuron0x1b70d50()*0.0152363);
}

double NNfunction_ss_sLdL::synapse0x1b9a4c0() {
   return (neuron0x1b71720()*0.0101119);
}

double NNfunction_ss_sLdL::synapse0x1b9a500() {
   return (neuron0x1b720f0()*0.368293);
}

double NNfunction_ss_sLdL::synapse0x1b9a540() {
   return (neuron0x1b72bd0()*0.00931968);
}

double NNfunction_ss_sLdL::synapse0x1b9a580() {
   return (neuron0x1b735a0()*-0.32649);
}

double NNfunction_ss_sLdL::synapse0x1b9a5c0() {
   return (neuron0x1b70680()*0.0364816);
}

double NNfunction_ss_sLdL::synapse0x1b9a600() {
   return (neuron0x1b75150()*0.0349294);
}

double NNfunction_ss_sLdL::synapse0x1b9a640() {
   return (neuron0x1b75b20()*-0.0111913);
}

double NNfunction_ss_sLdL::synapse0x1b9a680() {
   return (neuron0x1b764f0()*0.00255361);
}

double NNfunction_ss_sLdL::synapse0x1b9a6c0() {
   return (neuron0x1b76ec0()*-0.0214317);
}

double NNfunction_ss_sLdL::synapse0x1b9a150() {
   return (neuron0x1b78cd0()*-0.0168614);
}

double NNfunction_ss_sLdL::synapse0x1b9a190() {
   return (neuron0x1b78fb0()*-0.899251);
}

double NNfunction_ss_sLdL::synapse0x1b9a810() {
   return (neuron0x1b79980()*0.00197502);
}

double NNfunction_ss_sLdL::synapse0x1b9a850() {
   return (neuron0x1b7a350()*0.0143846);
}

double NNfunction_ss_sLdL::synapse0x1b9a890() {
   return (neuron0x1b7ad20()*-0.0206924);
}

double NNfunction_ss_sLdL::synapse0x1b9a8d0() {
   return (neuron0x1b7b6f0()*0.0099279);
}

double NNfunction_ss_sLdL::synapse0x1b9a910() {
   return (neuron0x1b74240()*0.00124701);
}

double NNfunction_ss_sLdL::synapse0x1b9a950() {
   return (neuron0x1b74c10()*-0.0301638);
}

double NNfunction_ss_sLdL::synapse0x1b9a990() {
   return (neuron0x1b7e480()*-0.0161711);
}

double NNfunction_ss_sLdL::synapse0x1b9a9d0() {
   return (neuron0x1b7ee50()*-0.0271982);
}

double NNfunction_ss_sLdL::synapse0x1b9aa10() {
   return (neuron0x1b7f820()*0.00163508);
}

double NNfunction_ss_sLdL::synapse0x1b9aa50() {
   return (neuron0x1b801f0()*1.10185);
}

double NNfunction_ss_sLdL::synapse0x1b9aa90() {
   return (neuron0x1b80bc0()*-1.2866);
}

double NNfunction_ss_sLdL::synapse0x1b9aad0() {
   return (neuron0x1b81590()*0.0166955);
}

double NNfunction_ss_sLdL::synapse0x1b9ab10() {
   return (neuron0x1b81f60()*-0.0493912);
}

double NNfunction_ss_sLdL::synapse0x1b9ab50() {
   return (neuron0x1b82930()*-0.00771561);
}

double NNfunction_ss_sLdL::synapse0x1b9a700() {
   return (neuron0x1b789c0()*0.0111701);
}

double NNfunction_ss_sLdL::synapse0x1b9a740() {
   return (neuron0x1b85510()*0.0341922);
}

double NNfunction_ss_sLdL::synapse0x1b9a780() {
   return (neuron0x1b85ee0()*-0.00898881);
}

double NNfunction_ss_sLdL::synapse0x1b9a7c0() {
   return (neuron0x1b868b0()*-0.00472834);
}

double NNfunction_ss_sLdL::synapse0x1b9ada0() {
   return (neuron0x1b87280()*-0.0686044);
}

double NNfunction_ss_sLdL::synapse0x1b9ade0() {
   return (neuron0x1b87c50()*-0.00748396);
}

double NNfunction_ss_sLdL::synapse0x1b9ae20() {
   return (neuron0x1b88620()*-0.0381964);
}

double NNfunction_ss_sLdL::synapse0x1b9ae60() {
   return (neuron0x1b88ff0()*0.00759878);
}

double NNfunction_ss_sLdL::synapse0x1b9aea0() {
   return (neuron0x1b899c0()*0.0527655);
}

double NNfunction_ss_sLdL::synapse0x1b9aee0() {
   return (neuron0x1b8a5a0()*0.00932146);
}

double NNfunction_ss_sLdL::synapse0x1b9af20() {
   return (neuron0x1b8af70()*0.0133781);
}

double NNfunction_ss_sLdL::synapse0x1b9af60() {
   return (neuron0x1b7bdf0()*0.207792);
}

double NNfunction_ss_sLdL::synapse0x1b9afa0() {
   return (neuron0x1b7c7c0()*0.0298197);
}

double NNfunction_ss_sLdL::synapse0x1b9afe0() {
   return (neuron0x1b7d190()*-2.10324);
}

double NNfunction_ss_sLdL::synapse0x1b9b020() {
   return (neuron0x1b8f7d0()*-0.00516131);
}

double NNfunction_ss_sLdL::synapse0x1b9b060() {
   return (neuron0x1b90080()*-0.0063454);
}

double NNfunction_ss_sLdL::synapse0x1b9b0a0() {
   return (neuron0x1b90a50()*-0.002223);
}

double NNfunction_ss_sLdL::synapse0x1b9b0e0() {
   return (neuron0x1b91420()*0.0512447);
}

double NNfunction_ss_sLdL::synapse0x1b9b460() {
   return (neuron0x1b6d3a0()*0.980411);
}

double NNfunction_ss_sLdL::synapse0x1b9b4a0() {
   return (neuron0x1b6dcf0()*1.29652);
}

double NNfunction_ss_sLdL::synapse0x1b9b4e0() {
   return (neuron0x1b6e7d0()*-1.88606);
}

double NNfunction_ss_sLdL::synapse0x1b9b520() {
   return (neuron0x1b6e270()*-0.605887);
}

double NNfunction_ss_sLdL::synapse0x1b9b560() {
   return (neuron0x1b6f5b0()*-4.68049);
}

double NNfunction_ss_sLdL::synapse0x1b9b5a0() {
   return (neuron0x1b6ff80()*-1.03659);
}

double NNfunction_ss_sLdL::synapse0x1b9b5e0() {
   return (neuron0x1b70d50()*0.67652);
}

double NNfunction_ss_sLdL::synapse0x1b9b620() {
   return (neuron0x1b71720()*1.24773);
}

double NNfunction_ss_sLdL::synapse0x1b9b660() {
   return (neuron0x1b720f0()*-0.609622);
}

double NNfunction_ss_sLdL::synapse0x1b9b6a0() {
   return (neuron0x1b72bd0()*1.12124);
}

double NNfunction_ss_sLdL::synapse0x1b9b6e0() {
   return (neuron0x1b735a0()*2.58305);
}

double NNfunction_ss_sLdL::synapse0x1b9b720() {
   return (neuron0x1b70680()*-0.703291);
}

double NNfunction_ss_sLdL::synapse0x1b9b760() {
   return (neuron0x1b75150()*0.349762);
}

double NNfunction_ss_sLdL::synapse0x1b9b7a0() {
   return (neuron0x1b75b20()*1.15152);
}

double NNfunction_ss_sLdL::synapse0x1b9b7e0() {
   return (neuron0x1b764f0()*1.52553);
}

double NNfunction_ss_sLdL::synapse0x1b9b820() {
   return (neuron0x1b76ec0()*-0.850142);
}

double NNfunction_ss_sLdL::synapse0x1b9b2b0() {
   return (neuron0x1b78cd0()*0.944868);
}

double NNfunction_ss_sLdL::synapse0x1b9b2f0() {
   return (neuron0x1b78fb0()*4.15309);
}

double NNfunction_ss_sLdL::synapse0x1b9b970() {
   return (neuron0x1b79980()*-1.45946);
}

double NNfunction_ss_sLdL::synapse0x1b9b9b0() {
   return (neuron0x1b7a350()*1.0921);
}

double NNfunction_ss_sLdL::synapse0x1b9b9f0() {
   return (neuron0x1b7ad20()*2.56233);
}

double NNfunction_ss_sLdL::synapse0x1b9ba30() {
   return (neuron0x1b7b6f0()*1.39937);
}

double NNfunction_ss_sLdL::synapse0x1b9ba70() {
   return (neuron0x1b74240()*-1.39758);
}

double NNfunction_ss_sLdL::synapse0x1b9bab0() {
   return (neuron0x1b74c10()*0.618356);
}

double NNfunction_ss_sLdL::synapse0x1b9baf0() {
   return (neuron0x1b7e480()*0.304058);
}

double NNfunction_ss_sLdL::synapse0x1b9bb30() {
   return (neuron0x1b7ee50()*-2.41122);
}

double NNfunction_ss_sLdL::synapse0x1b9bb70() {
   return (neuron0x1b7f820()*-1.24599);
}

double NNfunction_ss_sLdL::synapse0x1b9bbb0() {
   return (neuron0x1b801f0()*-0.206733);
}

double NNfunction_ss_sLdL::synapse0x1b9bbf0() {
   return (neuron0x1b80bc0()*-0.693961);
}

double NNfunction_ss_sLdL::synapse0x1b9bc30() {
   return (neuron0x1b81590()*-0.406766);
}

double NNfunction_ss_sLdL::synapse0x1b9bc70() {
   return (neuron0x1b81f60()*1.45002);
}

double NNfunction_ss_sLdL::synapse0x1b9bcb0() {
   return (neuron0x1b82930()*-0.594055);
}

double NNfunction_ss_sLdL::synapse0x1b9b860() {
   return (neuron0x1b789c0()*0.915631);
}

double NNfunction_ss_sLdL::synapse0x1b9b8a0() {
   return (neuron0x1b85510()*-1.34198);
}

double NNfunction_ss_sLdL::synapse0x1b9b8e0() {
   return (neuron0x1b85ee0()*0.972821);
}

double NNfunction_ss_sLdL::synapse0x1b9b920() {
   return (neuron0x1b868b0()*2.12974);
}

double NNfunction_ss_sLdL::synapse0x1b9bf00() {
   return (neuron0x1b87280()*-1.09335);
}

double NNfunction_ss_sLdL::synapse0x1b9bf40() {
   return (neuron0x1b87c50()*-1.6879);
}

double NNfunction_ss_sLdL::synapse0x1b9bf80() {
   return (neuron0x1b88620()*1.10703);
}

double NNfunction_ss_sLdL::synapse0x1b9bfc0() {
   return (neuron0x1b88ff0()*0.419502);
}

double NNfunction_ss_sLdL::synapse0x1b9c000() {
   return (neuron0x1b899c0()*-0.772265);
}

double NNfunction_ss_sLdL::synapse0x1b9c040() {
   return (neuron0x1b8a5a0()*-0.631861);
}

double NNfunction_ss_sLdL::synapse0x1b9c080() {
   return (neuron0x1b8af70()*2.10584);
}

double NNfunction_ss_sLdL::synapse0x1b9c0c0() {
   return (neuron0x1b7bdf0()*-0.907041);
}

double NNfunction_ss_sLdL::synapse0x1b9c100() {
   return (neuron0x1b7c7c0()*-0.0544473);
}

double NNfunction_ss_sLdL::synapse0x1b9c140() {
   return (neuron0x1b7d190()*-1.08009);
}

double NNfunction_ss_sLdL::synapse0x1b9c180() {
   return (neuron0x1b8f7d0()*-0.938528);
}

double NNfunction_ss_sLdL::synapse0x1b9c1c0() {
   return (neuron0x1b90080()*3.24688);
}

double NNfunction_ss_sLdL::synapse0x1b9c200() {
   return (neuron0x1b90a50()*1.10295);
}

double NNfunction_ss_sLdL::synapse0x1b9c240() {
   return (neuron0x1b91420()*-0.0312358);
}

double NNfunction_ss_sLdL::synapse0x1b9c4a0() {
   return (neuron0x1b98620()*-1.14473);
}

double NNfunction_ss_sLdL::synapse0x1b9c4e0() {
   return (neuron0x1b989c0()*-6.02843);
}

double NNfunction_ss_sLdL::synapse0x1b9c520() {
   return (neuron0x1b98e60()*-2.10761);
}

double NNfunction_ss_sLdL::synapse0x1b9c560() {
   return (neuron0x1b99fc0()*7.95622);
}

double NNfunction_ss_sLdL::synapse0x1b9c5a0() {
   return (neuron0x1b9b120()*-5.8445);
}

