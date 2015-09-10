#include "NNfunction_nn_charge1p_charge2m.h"
#include <cmath>

double NNfunction_nn_charge1p_charge2m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.3546)/14.8841;
   input1 = (in1 - 42.4632)/875.645;
   input2 = (in2 - 218.857)/167.802;
   input3 = (in3 - 245.155)/704.288;
   input4 = (in4 - 1027.98)/859.296;
   input5 = (in5 - 1021.1)/946.183;
   input6 = (in6 - 1025.59)/945.205;
   input7 = (in7 - 1010.1)/914.525;
   input8 = (in8 - 1024.38)/963.368;
   input9 = (in9 - 1015.8)/956.924;
   input10 = (in10 - 993.429)/914.729;
   input11 = (in11 - 931.006)/907.618;
   input12 = (in12 - 977.169)/913.579;
   input13 = (in13 - 734.175)/646.825;
   input14 = (in14 - 959.482)/883.196;
   input15 = (in15 - 960.819)/884.063;
   input16 = (in16 - 645.29)/555.229;
   input17 = (in17 - 990.65)/926.904;
   input18 = (in18 - 991.866)/929.15;
   input19 = (in19 - 953.749)/862.31;
   input20 = (in20 - -181.7)/444.397;
   input21 = (in21 - -230.674)/934.277;
   input22 = (in22 - 7.82897)/946.047;
   input23 = (in23 - 30.1463)/293.97;
   switch(index) {
     case 0:
         return neuron0x2dc4fa0();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge1p_charge2m::Value(int index, double* input) {
   input0 = (input[0] - 24.3546)/14.8841;
   input1 = (input[1] - 42.4632)/875.645;
   input2 = (input[2] - 218.857)/167.802;
   input3 = (input[3] - 245.155)/704.288;
   input4 = (input[4] - 1027.98)/859.296;
   input5 = (input[5] - 1021.1)/946.183;
   input6 = (input[6] - 1025.59)/945.205;
   input7 = (input[7] - 1010.1)/914.525;
   input8 = (input[8] - 1024.38)/963.368;
   input9 = (input[9] - 1015.8)/956.924;
   input10 = (input[10] - 993.429)/914.729;
   input11 = (input[11] - 931.006)/907.618;
   input12 = (input[12] - 977.169)/913.579;
   input13 = (input[13] - 734.175)/646.825;
   input14 = (input[14] - 959.482)/883.196;
   input15 = (input[15] - 960.819)/884.063;
   input16 = (input[16] - 645.29)/555.229;
   input17 = (input[17] - 990.65)/926.904;
   input18 = (input[18] - 991.866)/929.15;
   input19 = (input[19] - 953.749)/862.31;
   input20 = (input[20] - -181.7)/444.397;
   input21 = (input[21] - -230.674)/934.277;
   input22 = (input[22] - 7.82897)/946.047;
   input23 = (input[23] - 30.1463)/293.97;
   switch(index) {
     case 0:
         return neuron0x2dc4fa0();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d90010() {
   return input0;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d902c0() {
   return input1;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d90600() {
   return input2;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d90940() {
   return input3;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d90c80() {
   return input4;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d90fc0() {
   return input5;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d91300() {
   return input6;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d91640() {
   return input7;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d91980() {
   return input8;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d91cc0() {
   return input9;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d92000() {
   return input10;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d92340() {
   return input11;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d92680() {
   return input12;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d929c0() {
   return input13;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d92d00() {
   return input14;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d93040() {
   return input15;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d93380() {
   return input16;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d938e0() {
   return input17;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d93c20() {
   return input18;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d93f60() {
   return input19;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d942a0() {
   return input20;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d945e0() {
   return input21;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d94920() {
   return input22;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d94c60() {
   return input23;
}

double NNfunction_nn_charge1p_charge2m::input0x2d950d0() {
   double input = 3.16498;
   input += synapse0x2d95410();
   input += synapse0x2d95450();
   input += synapse0x2d95490();
   input += synapse0x2d954d0();
   input += synapse0x2d95510();
   input += synapse0x2d95550();
   input += synapse0x2d95590();
   input += synapse0x2d955d0();
   input += synapse0x2d95610();
   input += synapse0x2d95650();
   input += synapse0x2d95690();
   input += synapse0x2d956d0();
   input += synapse0x2d95710();
   input += synapse0x2d95750();
   input += synapse0x2d95790();
   input += synapse0x2d957d0();
   input += synapse0x2d95260();
   input += synapse0x2d952a0();
   input += synapse0x2b4c220();
   input += synapse0x2b4c260();
   input += synapse0x2d95810();
   input += synapse0x2d95850();
   input += synapse0x2d95890();
   input += synapse0x2d958d0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d950d0() {
   double input = input0x2d950d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d95910() {
   double input = -1.4959;
   input += synapse0x2d95c50();
   input += synapse0x2d95c90();
   input += synapse0x2d95cd0();
   input += synapse0x2d95d10();
   input += synapse0x2d95d50();
   input += synapse0x2d95d90();
   input += synapse0x2d95dd0();
   input += synapse0x2d95e10();
   input += synapse0x2d95e50();
   input += synapse0x2b4c070();
   input += synapse0x2b4c0b0();
   input += synapse0x2b4c0f0();
   input += synapse0x2b4c130();
   input += synapse0x2d960a0();
   input += synapse0x2d960e0();
   input += synapse0x2d96120();
   input += synapse0x2d95aa0();
   input += synapse0x2d95ae0();
   input += synapse0x2d96270();
   input += synapse0x2d962b0();
   input += synapse0x2d962f0();
   input += synapse0x2d96330();
   input += synapse0x2d96370();
   input += synapse0x2d963b0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d95910() {
   double input = input0x2d95910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d963f0() {
   double input = -0.686555;
   input += synapse0x2d96730();
   input += synapse0x2d96770();
   input += synapse0x2d967b0();
   input += synapse0x2d967f0();
   input += synapse0x2d96830();
   input += synapse0x2d96870();
   input += synapse0x2d968b0();
   input += synapse0x2d968f0();
   input += synapse0x2d96930();
   input += synapse0x2d96970();
   input += synapse0x2d969b0();
   input += synapse0x2d969f0();
   input += synapse0x2d96a30();
   input += synapse0x2d96a70();
   input += synapse0x2d96ab0();
   input += synapse0x2d96af0();
   input += synapse0x2d96580();
   input += synapse0x2d965c0();
   input += synapse0x1ac3f50();
   input += synapse0x2b5a0c0();
   input += synapse0x2b5a100();
   input += synapse0x2d98a20();
   input += synapse0x2d98a60();
   input += synapse0x2d8fd50();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d963f0() {
   double input = input0x2d963f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d95e90() {
   double input = -4.10439;
   input += synapse0x2d8fe20();
   input += synapse0x2b5a940();
   input += synapse0x2d96020();
   input += synapse0x2d96060();
   input += synapse0x2d96c40();
   input += synapse0x2d96c80();
   input += synapse0x2d96cc0();
   input += synapse0x2d96d00();
   input += synapse0x2d96d40();
   input += synapse0x2d96d80();
   input += synapse0x2d96dc0();
   input += synapse0x2d96e00();
   input += synapse0x2d96e40();
   input += synapse0x2d96e80();
   input += synapse0x2d96ec0();
   input += synapse0x2d96f00();
   input += synapse0x2d8fd90();
   input += synapse0x2d8fdd0();
   input += synapse0x2d97050();
   input += synapse0x2d97090();
   input += synapse0x2d970d0();
   input += synapse0x2d97110();
   input += synapse0x2d97150();
   input += synapse0x2d97190();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d95e90() {
   double input = input0x2d95e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d971d0() {
   double input = -0.101684;
   input += synapse0x2d97510();
   input += synapse0x2d97550();
   input += synapse0x2d97590();
   input += synapse0x2d975d0();
   input += synapse0x2d97610();
   input += synapse0x2d97650();
   input += synapse0x2d97690();
   input += synapse0x2d976d0();
   input += synapse0x2d97710();
   input += synapse0x2d97750();
   input += synapse0x2d97790();
   input += synapse0x2d977d0();
   input += synapse0x2d97810();
   input += synapse0x2d97850();
   input += synapse0x2d97890();
   input += synapse0x2d978d0();
   input += synapse0x2d97a20();
   input += synapse0x2d97360();
   input += synapse0x2d973a0();
   input += synapse0x2d98b60();
   input += synapse0x2d98ba0();
   input += synapse0x2d98be0();
   input += synapse0x2d98c20();
   input += synapse0x2d98c60();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d971d0() {
   double input = input0x2d971d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d98ca0() {
   double input = 0.543818;
   input += synapse0x2d98fe0();
   input += synapse0x2d99020();
   input += synapse0x2d99060();
   input += synapse0x2d990a0();
   input += synapse0x2d990e0();
   input += synapse0x2d99120();
   input += synapse0x2d99160();
   input += synapse0x2d991a0();
   input += synapse0x2d991e0();
   input += synapse0x2b5a410();
   input += synapse0x2b5a450();
   input += synapse0x2b5a490();
   input += synapse0x2b5a4d0();
   input += synapse0x2b5a510();
   input += synapse0x2b5a550();
   input += synapse0x2b5a590();
   input += synapse0x2d98e30();
   input += synapse0x2d98e70();
   input += synapse0x2b5a6e0();
   input += synapse0x2b5a720();
   input += synapse0x2b5a760();
   input += synapse0x2b5a7a0();
   input += synapse0x2b5a7e0();
   input += synapse0x2d99a30();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d98ca0() {
   double input = input0x2d98ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d99a70() {
   double input = -1.82517;
   input += synapse0x2d99db0();
   input += synapse0x2d99df0();
   input += synapse0x2d99e30();
   input += synapse0x2d99e70();
   input += synapse0x2d99eb0();
   input += synapse0x2d99ef0();
   input += synapse0x2d99f30();
   input += synapse0x2d99f70();
   input += synapse0x2d99fb0();
   input += synapse0x2d99ff0();
   input += synapse0x2d9a030();
   input += synapse0x2d9a070();
   input += synapse0x2d9a0b0();
   input += synapse0x2d9a0f0();
   input += synapse0x2d9a130();
   input += synapse0x2d9a170();
   input += synapse0x2d99c00();
   input += synapse0x2d99c40();
   input += synapse0x2d9a2c0();
   input += synapse0x2d9a300();
   input += synapse0x2d9a340();
   input += synapse0x2d9a380();
   input += synapse0x2d9a3c0();
   input += synapse0x2d9a400();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d99a70() {
   double input = input0x2d99a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9a440() {
   double input = 0.263238;
   input += synapse0x2d9a780();
   input += synapse0x2d9a7c0();
   input += synapse0x2d9a800();
   input += synapse0x2d9a840();
   input += synapse0x2d9a880();
   input += synapse0x2d9a8c0();
   input += synapse0x2d9a900();
   input += synapse0x2d9a940();
   input += synapse0x2d9a980();
   input += synapse0x2d9a9c0();
   input += synapse0x2d9aa00();
   input += synapse0x2d9aa40();
   input += synapse0x2d9aa80();
   input += synapse0x2d9aac0();
   input += synapse0x2d9ab00();
   input += synapse0x2d9ab40();
   input += synapse0x2d9a5d0();
   input += synapse0x2d9a610();
   input += synapse0x2d9ac90();
   input += synapse0x2d9acd0();
   input += synapse0x2d9ad10();
   input += synapse0x2d9ad50();
   input += synapse0x2d9ad90();
   input += synapse0x2d9add0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9a440() {
   double input = input0x2d9a440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9ae10() {
   double input = -6.0782;
   input += synapse0x2d937d0();
   input += synapse0x2d93810();
   input += synapse0x2d93850();
   input += synapse0x2d93890();
   input += synapse0x2d9b360();
   input += synapse0x2d9b3a0();
   input += synapse0x2d9b3e0();
   input += synapse0x2d9b420();
   input += synapse0x2d9b460();
   input += synapse0x2d9b4a0();
   input += synapse0x2d9b4e0();
   input += synapse0x2d9b520();
   input += synapse0x2d9b560();
   input += synapse0x2d9b5a0();
   input += synapse0x2d9b5e0();
   input += synapse0x2d9b620();
   input += synapse0x2d9afa0();
   input += synapse0x2d9afe0();
   input += synapse0x2d9b770();
   input += synapse0x2d9b7b0();
   input += synapse0x2d9b7f0();
   input += synapse0x2d9b830();
   input += synapse0x2d9b870();
   input += synapse0x2d9b8b0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9ae10() {
   double input = input0x2d9ae10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9b8f0() {
   double input = 0.478044;
   input += synapse0x2d9bc30();
   input += synapse0x2d9bc70();
   input += synapse0x2d9bcb0();
   input += synapse0x2d9bcf0();
   input += synapse0x2d9bd30();
   input += synapse0x2d9bd70();
   input += synapse0x2d9bdb0();
   input += synapse0x2d9bdf0();
   input += synapse0x2d9be30();
   input += synapse0x2d9be70();
   input += synapse0x2d9beb0();
   input += synapse0x2d9bef0();
   input += synapse0x2d9bf30();
   input += synapse0x2d9bf70();
   input += synapse0x2d9bfb0();
   input += synapse0x2d9bff0();
   input += synapse0x2d9ba80();
   input += synapse0x2d9bac0();
   input += synapse0x2d9c140();
   input += synapse0x2d9c180();
   input += synapse0x2d9c1c0();
   input += synapse0x2d9c200();
   input += synapse0x2d9c240();
   input += synapse0x2d9c280();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9b8f0() {
   double input = input0x2d9b8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9c2c0() {
   double input = -3.42204;
   input += synapse0x2d9c600();
   input += synapse0x2d9c640();
   input += synapse0x2d9c680();
   input += synapse0x2d9c6c0();
   input += synapse0x2d9c700();
   input += synapse0x2d9c740();
   input += synapse0x2d9c780();
   input += synapse0x2d9c7c0();
   input += synapse0x2d9c800();
   input += synapse0x2d9c840();
   input += synapse0x2d9c880();
   input += synapse0x2d9c8c0();
   input += synapse0x2d9c900();
   input += synapse0x2d9c940();
   input += synapse0x2d9c980();
   input += synapse0x2d9c9c0();
   input += synapse0x2d9c450();
   input += synapse0x2d9c490();
   input += synapse0x2d99220();
   input += synapse0x2d99260();
   input += synapse0x2d992a0();
   input += synapse0x2d992e0();
   input += synapse0x2d99320();
   input += synapse0x2d99360();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9c2c0() {
   double input = input0x2d9c2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d993a0() {
   double input = -2.08838;
   input += synapse0x2d996e0();
   input += synapse0x2d99720();
   input += synapse0x2d99760();
   input += synapse0x2d997a0();
   input += synapse0x2d997e0();
   input += synapse0x2d99820();
   input += synapse0x2d99860();
   input += synapse0x2d998a0();
   input += synapse0x2d998e0();
   input += synapse0x2d99920();
   input += synapse0x2d99960();
   input += synapse0x2d999a0();
   input += synapse0x2d999e0();
   input += synapse0x2d9db20();
   input += synapse0x2d9db60();
   input += synapse0x2d9dba0();
   input += synapse0x2d99530();
   input += synapse0x2d99570();
   input += synapse0x2d9dcf0();
   input += synapse0x2d9dd30();
   input += synapse0x2d9dd70();
   input += synapse0x2d9ddb0();
   input += synapse0x2d9ddf0();
   input += synapse0x2d9de30();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d993a0() {
   double input = input0x2d993a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9de70() {
   double input = -0.371526;
   input += synapse0x2d9e1b0();
   input += synapse0x2d9e1f0();
   input += synapse0x2d9e230();
   input += synapse0x2d9e270();
   input += synapse0x2d9e2b0();
   input += synapse0x2d9e2f0();
   input += synapse0x2d9e330();
   input += synapse0x2d9e370();
   input += synapse0x2d9e3b0();
   input += synapse0x2d9e3f0();
   input += synapse0x2d9e430();
   input += synapse0x2d9e470();
   input += synapse0x2d9e4b0();
   input += synapse0x2d9e4f0();
   input += synapse0x2d9e530();
   input += synapse0x2d9e570();
   input += synapse0x2d9e000();
   input += synapse0x2d9e040();
   input += synapse0x2d9e6c0();
   input += synapse0x2d9e700();
   input += synapse0x2d9e740();
   input += synapse0x2d9e780();
   input += synapse0x2d9e7c0();
   input += synapse0x2d9e800();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9de70() {
   double input = input0x2d9de70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9e840() {
   double input = 0.0889677;
   input += synapse0x2d9eb80();
   input += synapse0x2d9ebc0();
   input += synapse0x2d9ec00();
   input += synapse0x2d9ec40();
   input += synapse0x2d9ec80();
   input += synapse0x2d9ecc0();
   input += synapse0x2d9ed00();
   input += synapse0x2d9ed40();
   input += synapse0x2d9ed80();
   input += synapse0x2d9edc0();
   input += synapse0x2d9ee00();
   input += synapse0x2d9ee40();
   input += synapse0x2d9ee80();
   input += synapse0x2d9eec0();
   input += synapse0x2d9ef00();
   input += synapse0x2d9ef40();
   input += synapse0x2d9e9d0();
   input += synapse0x2d9ea10();
   input += synapse0x2d9f090();
   input += synapse0x2d9f0d0();
   input += synapse0x2d9f110();
   input += synapse0x2d9f150();
   input += synapse0x2d9f190();
   input += synapse0x2d9f1d0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9e840() {
   double input = input0x2d9e840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9f210() {
   double input = 1.19333;
   input += synapse0x2d9f550();
   input += synapse0x2d9f590();
   input += synapse0x2d9f5d0();
   input += synapse0x2d9f610();
   input += synapse0x2d9f650();
   input += synapse0x2d9f690();
   input += synapse0x2d9f6d0();
   input += synapse0x2d9f710();
   input += synapse0x2d9f750();
   input += synapse0x2d9f790();
   input += synapse0x2d9f7d0();
   input += synapse0x2d9f810();
   input += synapse0x2d9f850();
   input += synapse0x2d9f890();
   input += synapse0x2d9f8d0();
   input += synapse0x2d9f910();
   input += synapse0x2d9f3a0();
   input += synapse0x2d9f3e0();
   input += synapse0x2d9fa60();
   input += synapse0x2d9faa0();
   input += synapse0x2d9fae0();
   input += synapse0x2d9fb20();
   input += synapse0x2d9fb60();
   input += synapse0x2d9fba0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9f210() {
   double input = input0x2d9f210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9fbe0() {
   double input = -1.15119;
   input += synapse0x2d9ff20();
   input += synapse0x2d901a0();
   input += synapse0x2d901e0();
   input += synapse0x2d904e0();
   input += synapse0x2d90520();
   input += synapse0x2d90820();
   input += synapse0x2d90860();
   input += synapse0x2d90b60();
   input += synapse0x2d90ba0();
   input += synapse0x2d90ea0();
   input += synapse0x2d90ee0();
   input += synapse0x2d911e0();
   input += synapse0x2d91220();
   input += synapse0x2d91520();
   input += synapse0x2d91560();
   input += synapse0x2d91860();
   input += synapse0x2d918a0();
   input += synapse0x2d91ba0();
   input += synapse0x2d91be0();
   input += synapse0x2d91ee0();
   input += synapse0x2d91f20();
   input += synapse0x2d92220();
   input += synapse0x2d92260();
   input += synapse0x2d92560();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9fbe0() {
   double input = input0x2d9fbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da19f0() {
   double input = 0.36975;
   input += synapse0x2d925a0();
   input += synapse0x2d93260();
   input += synapse0x2d932a0();
   input += synapse0x2d9fd70();
   input += synapse0x2d9fdb0();
   input += synapse0x2d935a0();
   input += synapse0x2d935e0();
   input += synapse0x2d93b00();
   input += synapse0x2d93b40();
   input += synapse0x2d93e40();
   input += synapse0x2d93e80();
   input += synapse0x2d94180();
   input += synapse0x2d941c0();
   input += synapse0x2d944c0();
   input += synapse0x2d94500();
   input += synapse0x2d94800();
   input += synapse0x2d94840();
   input += synapse0x2d94b40();
   input += synapse0x2d94b80();
   input += synapse0x2d94e80();
   input += synapse0x2d94ec0();
   input += synapse0x2d928a0();
   input += synapse0x2d928e0();
   input += synapse0x2da1c90();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da19f0() {
   double input = input0x2da19f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da1cd0() {
   double input = -1.47133;
   input += synapse0x2da2010();
   input += synapse0x2da2050();
   input += synapse0x2da2090();
   input += synapse0x2da20d0();
   input += synapse0x2da2110();
   input += synapse0x2da2150();
   input += synapse0x2da2190();
   input += synapse0x2da21d0();
   input += synapse0x2da2210();
   input += synapse0x2da2250();
   input += synapse0x2da2290();
   input += synapse0x2da22d0();
   input += synapse0x2da2310();
   input += synapse0x2da2350();
   input += synapse0x2da2390();
   input += synapse0x2da23d0();
   input += synapse0x2da1e60();
   input += synapse0x2da1ea0();
   input += synapse0x2da2520();
   input += synapse0x2da2560();
   input += synapse0x2da25a0();
   input += synapse0x2da25e0();
   input += synapse0x2da2620();
   input += synapse0x2da2660();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da1cd0() {
   double input = input0x2da1cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da26a0() {
   double input = 2.27371;
   input += synapse0x2da29e0();
   input += synapse0x2da2a20();
   input += synapse0x2da2a60();
   input += synapse0x2da2aa0();
   input += synapse0x2da2ae0();
   input += synapse0x2da2b20();
   input += synapse0x2da2b60();
   input += synapse0x2da2ba0();
   input += synapse0x2da2be0();
   input += synapse0x2da2c20();
   input += synapse0x2da2c60();
   input += synapse0x2da2ca0();
   input += synapse0x2da2ce0();
   input += synapse0x2da2d20();
   input += synapse0x2da2d60();
   input += synapse0x2da2da0();
   input += synapse0x2da2830();
   input += synapse0x2da2870();
   input += synapse0x2da2ef0();
   input += synapse0x2da2f30();
   input += synapse0x2da2f70();
   input += synapse0x2da2fb0();
   input += synapse0x2da2ff0();
   input += synapse0x2da3030();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da26a0() {
   double input = input0x2da26a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da3070() {
   double input = 0.114415;
   input += synapse0x2da33b0();
   input += synapse0x2da33f0();
   input += synapse0x2da3430();
   input += synapse0x2da3470();
   input += synapse0x2da34b0();
   input += synapse0x2da34f0();
   input += synapse0x2da3530();
   input += synapse0x2da3570();
   input += synapse0x2da35b0();
   input += synapse0x2da35f0();
   input += synapse0x2da3630();
   input += synapse0x2da3670();
   input += synapse0x2da36b0();
   input += synapse0x2da36f0();
   input += synapse0x2da3730();
   input += synapse0x2da3770();
   input += synapse0x2da3200();
   input += synapse0x2da3240();
   input += synapse0x2da38c0();
   input += synapse0x2da3900();
   input += synapse0x2da3940();
   input += synapse0x2da3980();
   input += synapse0x2da39c0();
   input += synapse0x2da3a00();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da3070() {
   double input = input0x2da3070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da3a40() {
   double input = -2.74301;
   input += synapse0x2da3d80();
   input += synapse0x2da3dc0();
   input += synapse0x2da3e00();
   input += synapse0x2da3e40();
   input += synapse0x2da3e80();
   input += synapse0x2da3ec0();
   input += synapse0x2da3f00();
   input += synapse0x2da3f40();
   input += synapse0x2da3f80();
   input += synapse0x2da3fc0();
   input += synapse0x2da4000();
   input += synapse0x2da4040();
   input += synapse0x2da4080();
   input += synapse0x2da40c0();
   input += synapse0x2da4100();
   input += synapse0x2da4140();
   input += synapse0x2da3bd0();
   input += synapse0x2da3c10();
   input += synapse0x2da4290();
   input += synapse0x2da42d0();
   input += synapse0x2da4310();
   input += synapse0x2da4350();
   input += synapse0x2da4390();
   input += synapse0x2da43d0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da3a40() {
   double input = input0x2da3a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da4410() {
   double input = -4.63004;
   input += synapse0x2da4750();
   input += synapse0x2da4790();
   input += synapse0x2da47d0();
   input += synapse0x2da4810();
   input += synapse0x2da4850();
   input += synapse0x2da4890();
   input += synapse0x2da48d0();
   input += synapse0x2da4910();
   input += synapse0x2da4950();
   input += synapse0x2d9cb10();
   input += synapse0x2d9cb50();
   input += synapse0x2d9cb90();
   input += synapse0x2d9cbd0();
   input += synapse0x2d9cc10();
   input += synapse0x2d9cc50();
   input += synapse0x2d9cc90();
   input += synapse0x2da45a0();
   input += synapse0x2da45e0();
   input += synapse0x2d9cde0();
   input += synapse0x2d9ce20();
   input += synapse0x2d9ce60();
   input += synapse0x2d9cea0();
   input += synapse0x2d9cee0();
   input += synapse0x2d9cf20();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da4410() {
   double input = input0x2da4410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9cf60() {
   double input = 3.08419;
   input += synapse0x2d9d2a0();
   input += synapse0x2d9d2e0();
   input += synapse0x2d9d320();
   input += synapse0x2d9d360();
   input += synapse0x2d9d3a0();
   input += synapse0x2d9d3e0();
   input += synapse0x2d9d420();
   input += synapse0x2d9d460();
   input += synapse0x2d9d4a0();
   input += synapse0x2d9d4e0();
   input += synapse0x2d9d520();
   input += synapse0x2d9d560();
   input += synapse0x2d9d5a0();
   input += synapse0x2d9d5e0();
   input += synapse0x2d9d620();
   input += synapse0x2d9d660();
   input += synapse0x2d9d0f0();
   input += synapse0x2d9d130();
   input += synapse0x2d9d7b0();
   input += synapse0x2d9d7f0();
   input += synapse0x2d9d830();
   input += synapse0x2d9d870();
   input += synapse0x2d9d8b0();
   input += synapse0x2d9d8f0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9cf60() {
   double input = input0x2d9cf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2d9d930() {
   double input = 1.63913;
   input += synapse0x2d9dac0();
   input += synapse0x2da6b50();
   input += synapse0x2da6b90();
   input += synapse0x2da6bd0();
   input += synapse0x2da6c10();
   input += synapse0x2da6c50();
   input += synapse0x2da6c90();
   input += synapse0x2da6cd0();
   input += synapse0x2da6d10();
   input += synapse0x2da6d50();
   input += synapse0x2da6d90();
   input += synapse0x2da6dd0();
   input += synapse0x2da6e10();
   input += synapse0x2da6e50();
   input += synapse0x2da6e90();
   input += synapse0x2da6ed0();
   input += synapse0x2da69a0();
   input += synapse0x2da69e0();
   input += synapse0x2da7020();
   input += synapse0x2da7060();
   input += synapse0x2da70a0();
   input += synapse0x2da70e0();
   input += synapse0x2da7120();
   input += synapse0x2da7160();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2d9d930() {
   double input = input0x2d9d930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da71a0() {
   double input = 0.190376;
   input += synapse0x2da74e0();
   input += synapse0x2da7520();
   input += synapse0x2da7560();
   input += synapse0x2da75a0();
   input += synapse0x2da75e0();
   input += synapse0x2da7620();
   input += synapse0x2da7660();
   input += synapse0x2da76a0();
   input += synapse0x2da76e0();
   input += synapse0x2da7720();
   input += synapse0x2da7760();
   input += synapse0x2da77a0();
   input += synapse0x2da77e0();
   input += synapse0x2da7820();
   input += synapse0x2da7860();
   input += synapse0x2da78a0();
   input += synapse0x2da7330();
   input += synapse0x2da7370();
   input += synapse0x2da79f0();
   input += synapse0x2da7a30();
   input += synapse0x2da7a70();
   input += synapse0x2da7ab0();
   input += synapse0x2da7af0();
   input += synapse0x2da7b30();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da71a0() {
   double input = input0x2da71a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da7b70() {
   double input = 1.33801;
   input += synapse0x2da7eb0();
   input += synapse0x2da7ef0();
   input += synapse0x2da7f30();
   input += synapse0x2da7f70();
   input += synapse0x2da7fb0();
   input += synapse0x2da7ff0();
   input += synapse0x2da8030();
   input += synapse0x2da8070();
   input += synapse0x2da80b0();
   input += synapse0x2da80f0();
   input += synapse0x2da8130();
   input += synapse0x2da8170();
   input += synapse0x2da81b0();
   input += synapse0x2da81f0();
   input += synapse0x2da8230();
   input += synapse0x2da8270();
   input += synapse0x2da7d00();
   input += synapse0x2da7d40();
   input += synapse0x2da83c0();
   input += synapse0x2da8400();
   input += synapse0x2da8440();
   input += synapse0x2da8480();
   input += synapse0x2da84c0();
   input += synapse0x2da8500();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da7b70() {
   double input = input0x2da7b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da8540() {
   double input = 0.389513;
   input += synapse0x2da8880();
   input += synapse0x2da88c0();
   input += synapse0x2da8900();
   input += synapse0x2da8940();
   input += synapse0x2da8980();
   input += synapse0x2da89c0();
   input += synapse0x2da8a00();
   input += synapse0x2da8a40();
   input += synapse0x2da8a80();
   input += synapse0x2da8ac0();
   input += synapse0x2da8b00();
   input += synapse0x2da8b40();
   input += synapse0x2da8b80();
   input += synapse0x2da8bc0();
   input += synapse0x2da8c00();
   input += synapse0x2da8c40();
   input += synapse0x2da86d0();
   input += synapse0x2da8710();
   input += synapse0x2da8d90();
   input += synapse0x2da8dd0();
   input += synapse0x2da8e10();
   input += synapse0x2da8e50();
   input += synapse0x2da8e90();
   input += synapse0x2da8ed0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da8540() {
   double input = input0x2da8540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da8f10() {
   double input = 2.51865;
   input += synapse0x2da9250();
   input += synapse0x2da9290();
   input += synapse0x2da92d0();
   input += synapse0x2da9310();
   input += synapse0x2da9350();
   input += synapse0x2da9390();
   input += synapse0x2da93d0();
   input += synapse0x2da9410();
   input += synapse0x2da9450();
   input += synapse0x2da9490();
   input += synapse0x2da94d0();
   input += synapse0x2da9510();
   input += synapse0x2da9550();
   input += synapse0x2da9590();
   input += synapse0x2da95d0();
   input += synapse0x2da9610();
   input += synapse0x2da90a0();
   input += synapse0x2da90e0();
   input += synapse0x2da9760();
   input += synapse0x2da97a0();
   input += synapse0x2da97e0();
   input += synapse0x2da9820();
   input += synapse0x2da9860();
   input += synapse0x2da98a0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da8f10() {
   double input = input0x2da8f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da98e0() {
   double input = 0.142679;
   input += synapse0x2da9c20();
   input += synapse0x2da9c60();
   input += synapse0x2da9ca0();
   input += synapse0x2da9ce0();
   input += synapse0x2da9d20();
   input += synapse0x2da9d60();
   input += synapse0x2da9da0();
   input += synapse0x2da9de0();
   input += synapse0x2da9e20();
   input += synapse0x2da9e60();
   input += synapse0x2da9ea0();
   input += synapse0x2da9ee0();
   input += synapse0x2da9f20();
   input += synapse0x2da9f60();
   input += synapse0x2da9fa0();
   input += synapse0x2da9fe0();
   input += synapse0x2da9a70();
   input += synapse0x2da9ab0();
   input += synapse0x2daa130();
   input += synapse0x2daa170();
   input += synapse0x2daa1b0();
   input += synapse0x2daa1f0();
   input += synapse0x2daa230();
   input += synapse0x2daa270();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da98e0() {
   double input = input0x2da98e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2daa2b0() {
   double input = 1.13218;
   input += synapse0x2daa5f0();
   input += synapse0x2daa630();
   input += synapse0x2daa670();
   input += synapse0x2daa6b0();
   input += synapse0x2daa6f0();
   input += synapse0x2daa730();
   input += synapse0x2daa770();
   input += synapse0x2daa7b0();
   input += synapse0x2daa7f0();
   input += synapse0x2daa830();
   input += synapse0x2daa870();
   input += synapse0x2daa8b0();
   input += synapse0x2daa8f0();
   input += synapse0x2daa930();
   input += synapse0x2daa970();
   input += synapse0x2daa9b0();
   input += synapse0x2daa440();
   input += synapse0x2daa480();
   input += synapse0x2daab00();
   input += synapse0x2daab40();
   input += synapse0x2daab80();
   input += synapse0x2daabc0();
   input += synapse0x2daac00();
   input += synapse0x2daac40();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2daa2b0() {
   double input = input0x2daa2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2daac80() {
   double input = 1.35541;
   input += synapse0x2daafc0();
   input += synapse0x2dab000();
   input += synapse0x2dab040();
   input += synapse0x2dab080();
   input += synapse0x2dab0c0();
   input += synapse0x2dab100();
   input += synapse0x2dab140();
   input += synapse0x2dab180();
   input += synapse0x2dab1c0();
   input += synapse0x2dab200();
   input += synapse0x2dab240();
   input += synapse0x2dab280();
   input += synapse0x2dab2c0();
   input += synapse0x2dab300();
   input += synapse0x2dab340();
   input += synapse0x2dab380();
   input += synapse0x2daae10();
   input += synapse0x2daae50();
   input += synapse0x2dab4d0();
   input += synapse0x2dab510();
   input += synapse0x2dab550();
   input += synapse0x2dab590();
   input += synapse0x2dab5d0();
   input += synapse0x2dab610();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2daac80() {
   double input = input0x2daac80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dab650() {
   double input = 1.04143;
   input += synapse0x2dab990();
   input += synapse0x2d9ff60();
   input += synapse0x2d9ffa0();
   input += synapse0x2d9ffe0();
   input += synapse0x2da0230();
   input += synapse0x2da0270();
   input += synapse0x2da02b0();
   input += synapse0x2da0500();
   input += synapse0x2da0540();
   input += synapse0x2da0790();
   input += synapse0x2da07d0();
   input += synapse0x2da0810();
   input += synapse0x2da0a60();
   input += synapse0x2da0aa0();
   input += synapse0x2da0cf0();
   input += synapse0x2da0d30();
   input += synapse0x2dab7e0();
   input += synapse0x2dab820();
   input += synapse0x2da0e80();
   input += synapse0x2da1390();
   input += synapse0x2da13d0();
   input += synapse0x2da1410();
   input += synapse0x2da1660();
   input += synapse0x2da16a0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dab650() {
   double input = input0x2dab650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da16e0() {
   double input = 0.766357;
   input += synapse0x2da0f50();
   input += synapse0x2da0f90();
   input += synapse0x2da0fd0();
   input += synapse0x2da1010();
   input += synapse0x2da1990();
   input += synapse0x2dadce0();
   input += synapse0x2dadd20();
   input += synapse0x2dadd60();
   input += synapse0x2dadda0();
   input += synapse0x2dadde0();
   input += synapse0x2dade20();
   input += synapse0x2dade60();
   input += synapse0x2dadea0();
   input += synapse0x2dadee0();
   input += synapse0x2dadf20();
   input += synapse0x2dadf60();
   input += synapse0x2da1870();
   input += synapse0x2da18b0();
   input += synapse0x2dae0b0();
   input += synapse0x2dae0f0();
   input += synapse0x2dae130();
   input += synapse0x2dae170();
   input += synapse0x2dae1b0();
   input += synapse0x2dae1f0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da16e0() {
   double input = input0x2da16e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dae230() {
   double input = -1.18053;
   input += synapse0x2dae570();
   input += synapse0x2dae5b0();
   input += synapse0x2dae5f0();
   input += synapse0x2dae630();
   input += synapse0x2dae670();
   input += synapse0x2dae6b0();
   input += synapse0x2dae6f0();
   input += synapse0x2dae730();
   input += synapse0x2dae770();
   input += synapse0x2dae7b0();
   input += synapse0x2dae7f0();
   input += synapse0x2dae830();
   input += synapse0x2dae870();
   input += synapse0x2dae8b0();
   input += synapse0x2dae8f0();
   input += synapse0x2dae930();
   input += synapse0x2dae3c0();
   input += synapse0x2dae400();
   input += synapse0x2daea80();
   input += synapse0x2daeac0();
   input += synapse0x2daeb00();
   input += synapse0x2daeb40();
   input += synapse0x2daeb80();
   input += synapse0x2daebc0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dae230() {
   double input = input0x2dae230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2daec00() {
   double input = 1.53345;
   input += synapse0x2daef40();
   input += synapse0x2daef80();
   input += synapse0x2daefc0();
   input += synapse0x2daf000();
   input += synapse0x2daf040();
   input += synapse0x2daf080();
   input += synapse0x2daf0c0();
   input += synapse0x2daf100();
   input += synapse0x2daf140();
   input += synapse0x2daf180();
   input += synapse0x2daf1c0();
   input += synapse0x2daf200();
   input += synapse0x2daf240();
   input += synapse0x2daf280();
   input += synapse0x2daf2c0();
   input += synapse0x2daf300();
   input += synapse0x2daed90();
   input += synapse0x2daedd0();
   input += synapse0x2daf450();
   input += synapse0x2daf490();
   input += synapse0x2daf4d0();
   input += synapse0x2daf510();
   input += synapse0x2daf550();
   input += synapse0x2daf590();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2daec00() {
   double input = input0x2daec00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2daf5d0() {
   double input = 1.49368;
   input += synapse0x2daf910();
   input += synapse0x2daf950();
   input += synapse0x2daf990();
   input += synapse0x2daf9d0();
   input += synapse0x2dafa10();
   input += synapse0x2dafa50();
   input += synapse0x2dafa90();
   input += synapse0x2dafad0();
   input += synapse0x2dafb10();
   input += synapse0x2dafb50();
   input += synapse0x2dafb90();
   input += synapse0x2dafbd0();
   input += synapse0x2dafc10();
   input += synapse0x2dafc50();
   input += synapse0x2dafc90();
   input += synapse0x2dafcd0();
   input += synapse0x2daf760();
   input += synapse0x2daf7a0();
   input += synapse0x2dafe20();
   input += synapse0x2dafe60();
   input += synapse0x2dafea0();
   input += synapse0x2dafee0();
   input += synapse0x2daff20();
   input += synapse0x2daff60();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2daf5d0() {
   double input = input0x2daf5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2daffa0() {
   double input = 0.394435;
   input += synapse0x2db02e0();
   input += synapse0x2db0320();
   input += synapse0x2db0360();
   input += synapse0x2db03a0();
   input += synapse0x2db03e0();
   input += synapse0x2db0420();
   input += synapse0x2db0460();
   input += synapse0x2db04a0();
   input += synapse0x2db04e0();
   input += synapse0x2db0520();
   input += synapse0x2db0560();
   input += synapse0x2db05a0();
   input += synapse0x2db05e0();
   input += synapse0x2db0620();
   input += synapse0x2db0660();
   input += synapse0x2db06a0();
   input += synapse0x2db0130();
   input += synapse0x2db0170();
   input += synapse0x2db07f0();
   input += synapse0x2db0830();
   input += synapse0x2db0870();
   input += synapse0x2db08b0();
   input += synapse0x2db08f0();
   input += synapse0x2db0930();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2daffa0() {
   double input = input0x2daffa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db0970() {
   double input = -3.40894;
   input += synapse0x2db0cb0();
   input += synapse0x2db0cf0();
   input += synapse0x2db0d30();
   input += synapse0x2db0d70();
   input += synapse0x2db0db0();
   input += synapse0x2db0df0();
   input += synapse0x2db0e30();
   input += synapse0x2db0e70();
   input += synapse0x2db0eb0();
   input += synapse0x2db0ef0();
   input += synapse0x2db0f30();
   input += synapse0x2db0f70();
   input += synapse0x2db0fb0();
   input += synapse0x2db0ff0();
   input += synapse0x2db1030();
   input += synapse0x2db1070();
   input += synapse0x2db0b00();
   input += synapse0x2db0b40();
   input += synapse0x2db11c0();
   input += synapse0x2db1200();
   input += synapse0x2db1240();
   input += synapse0x2db1280();
   input += synapse0x2db12c0();
   input += synapse0x2db1300();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db0970() {
   double input = input0x2db0970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db1340() {
   double input = -0.0882335;
   input += synapse0x2db1680();
   input += synapse0x2db16c0();
   input += synapse0x2db1700();
   input += synapse0x2db1740();
   input += synapse0x2db1780();
   input += synapse0x2db17c0();
   input += synapse0x2db1800();
   input += synapse0x2db1840();
   input += synapse0x2db1880();
   input += synapse0x2db18c0();
   input += synapse0x2db1900();
   input += synapse0x2db1940();
   input += synapse0x2db1980();
   input += synapse0x2db19c0();
   input += synapse0x2db1a00();
   input += synapse0x2db1a40();
   input += synapse0x2db14d0();
   input += synapse0x2db1510();
   input += synapse0x2db1b90();
   input += synapse0x2db1bd0();
   input += synapse0x2db1c10();
   input += synapse0x2db1c50();
   input += synapse0x2db1c90();
   input += synapse0x2db1cd0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db1340() {
   double input = input0x2db1340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db1d10() {
   double input = -0.861291;
   input += synapse0x2db2050();
   input += synapse0x2db2090();
   input += synapse0x2db20d0();
   input += synapse0x2db2110();
   input += synapse0x2db2150();
   input += synapse0x2db2190();
   input += synapse0x2db21d0();
   input += synapse0x2db2210();
   input += synapse0x2db2250();
   input += synapse0x2db2290();
   input += synapse0x2db22d0();
   input += synapse0x2db2310();
   input += synapse0x2db2350();
   input += synapse0x2db2390();
   input += synapse0x2db23d0();
   input += synapse0x2db2410();
   input += synapse0x2db1ea0();
   input += synapse0x2db1ee0();
   input += synapse0x2db2560();
   input += synapse0x2db25a0();
   input += synapse0x2db25e0();
   input += synapse0x2db2620();
   input += synapse0x2db2660();
   input += synapse0x2db26a0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db1d10() {
   double input = input0x2db1d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db26e0() {
   double input = 1.39795;
   input += synapse0x2d9b150();
   input += synapse0x2d9b190();
   input += synapse0x2d9b1d0();
   input += synapse0x2d9b210();
   input += synapse0x2d9b250();
   input += synapse0x2d9b290();
   input += synapse0x2d9b2d0();
   input += synapse0x2d9b310();
   input += synapse0x2db2e30();
   input += synapse0x2db2e70();
   input += synapse0x2db2eb0();
   input += synapse0x2db2ef0();
   input += synapse0x2db2f30();
   input += synapse0x2db2f70();
   input += synapse0x2db2fb0();
   input += synapse0x2db2ff0();
   input += synapse0x2db2870();
   input += synapse0x2db28b0();
   input += synapse0x2db3140();
   input += synapse0x2db3180();
   input += synapse0x2db31c0();
   input += synapse0x2db3200();
   input += synapse0x2db3240();
   input += synapse0x2db3280();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db26e0() {
   double input = input0x2db26e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db32c0() {
   double input = -0.693253;
   input += synapse0x2db3600();
   input += synapse0x2db3640();
   input += synapse0x2db3680();
   input += synapse0x2db36c0();
   input += synapse0x2db3700();
   input += synapse0x2db3740();
   input += synapse0x2db3780();
   input += synapse0x2db37c0();
   input += synapse0x2db3800();
   input += synapse0x2db3840();
   input += synapse0x2db3880();
   input += synapse0x2db38c0();
   input += synapse0x2db3900();
   input += synapse0x2db3940();
   input += synapse0x2db3980();
   input += synapse0x2db39c0();
   input += synapse0x2db3450();
   input += synapse0x2db3490();
   input += synapse0x2db3b10();
   input += synapse0x2db3b50();
   input += synapse0x2db3b90();
   input += synapse0x2db3bd0();
   input += synapse0x2db3c10();
   input += synapse0x2db3c50();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db32c0() {
   double input = input0x2db32c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db3c90() {
   double input = -0.841553;
   input += synapse0x2db3fd0();
   input += synapse0x2db4010();
   input += synapse0x2db4050();
   input += synapse0x2db4090();
   input += synapse0x2db40d0();
   input += synapse0x2db4110();
   input += synapse0x2db4150();
   input += synapse0x2db4190();
   input += synapse0x2db41d0();
   input += synapse0x2db4210();
   input += synapse0x2db4250();
   input += synapse0x2db4290();
   input += synapse0x2db42d0();
   input += synapse0x2db4310();
   input += synapse0x2db4350();
   input += synapse0x2db4390();
   input += synapse0x2db3e20();
   input += synapse0x2db3e60();
   input += synapse0x2da4990();
   input += synapse0x2da49d0();
   input += synapse0x2da4a10();
   input += synapse0x2da4a50();
   input += synapse0x2da4a90();
   input += synapse0x2da4ad0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db3c90() {
   double input = input0x2db3c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da4b10() {
   double input = 1.19397;
   input += synapse0x2da4e50();
   input += synapse0x2da4e90();
   input += synapse0x2da4ed0();
   input += synapse0x2da4f10();
   input += synapse0x2da4f50();
   input += synapse0x2da4f90();
   input += synapse0x2da4fd0();
   input += synapse0x2da5010();
   input += synapse0x2da5050();
   input += synapse0x2da5090();
   input += synapse0x2da50d0();
   input += synapse0x2da5110();
   input += synapse0x2da5150();
   input += synapse0x2da5190();
   input += synapse0x2da51d0();
   input += synapse0x2da5210();
   input += synapse0x2da4ca0();
   input += synapse0x2da4ce0();
   input += synapse0x2da5360();
   input += synapse0x2da53a0();
   input += synapse0x2da53e0();
   input += synapse0x2da5420();
   input += synapse0x2da5460();
   input += synapse0x2da54a0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da4b10() {
   double input = input0x2da4b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da54e0() {
   double input = 2.96662;
   input += synapse0x2da5820();
   input += synapse0x2da5860();
   input += synapse0x2da58a0();
   input += synapse0x2da58e0();
   input += synapse0x2da5920();
   input += synapse0x2da5960();
   input += synapse0x2da59a0();
   input += synapse0x2da59e0();
   input += synapse0x2da5a20();
   input += synapse0x2da5a60();
   input += synapse0x2da5aa0();
   input += synapse0x2da5ae0();
   input += synapse0x2da5b20();
   input += synapse0x2da5b60();
   input += synapse0x2da5ba0();
   input += synapse0x2da5be0();
   input += synapse0x2da5670();
   input += synapse0x2da56b0();
   input += synapse0x2da5d30();
   input += synapse0x2da5d70();
   input += synapse0x2da5db0();
   input += synapse0x2da5df0();
   input += synapse0x2da5e30();
   input += synapse0x2da5e70();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da54e0() {
   double input = input0x2da54e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2da5eb0() {
   double input = -0.127221;
   input += synapse0x2da61f0();
   input += synapse0x2da6230();
   input += synapse0x2da6270();
   input += synapse0x2da62b0();
   input += synapse0x2da62f0();
   input += synapse0x2da6330();
   input += synapse0x2da6370();
   input += synapse0x2da63b0();
   input += synapse0x2da63f0();
   input += synapse0x2da6430();
   input += synapse0x2da6470();
   input += synapse0x2da64b0();
   input += synapse0x2da64f0();
   input += synapse0x2da6530();
   input += synapse0x2da6570();
   input += synapse0x2da65b0();
   input += synapse0x2da6040();
   input += synapse0x2da6080();
   input += synapse0x2da6700();
   input += synapse0x2da6740();
   input += synapse0x2da6780();
   input += synapse0x2da67c0();
   input += synapse0x2da6800();
   input += synapse0x2da6840();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2da5eb0() {
   double input = input0x2da5eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db84f0() {
   double input = -1.05398;
   input += synapse0x2db8710();
   input += synapse0x2db8750();
   input += synapse0x2db8790();
   input += synapse0x2db87d0();
   input += synapse0x2db8810();
   input += synapse0x2db8850();
   input += synapse0x2db8890();
   input += synapse0x2db88d0();
   input += synapse0x2db8910();
   input += synapse0x2db8950();
   input += synapse0x2db8990();
   input += synapse0x2db89d0();
   input += synapse0x2db8a10();
   input += synapse0x2db8a50();
   input += synapse0x2db8a90();
   input += synapse0x2db8ad0();
   input += synapse0x2da6880();
   input += synapse0x2da68c0();
   input += synapse0x2db8c20();
   input += synapse0x2db8c60();
   input += synapse0x2db8ca0();
   input += synapse0x2db8ce0();
   input += synapse0x2db8d20();
   input += synapse0x2db8d60();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db84f0() {
   double input = input0x2db84f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db8da0() {
   double input = -0.193295;
   input += synapse0x2db90e0();
   input += synapse0x2db9120();
   input += synapse0x2db9160();
   input += synapse0x2db91a0();
   input += synapse0x2db91e0();
   input += synapse0x2db9220();
   input += synapse0x2db9260();
   input += synapse0x2db92a0();
   input += synapse0x2db92e0();
   input += synapse0x2db9320();
   input += synapse0x2db9360();
   input += synapse0x2db93a0();
   input += synapse0x2db93e0();
   input += synapse0x2db9420();
   input += synapse0x2db9460();
   input += synapse0x2db94a0();
   input += synapse0x2db8f30();
   input += synapse0x2db8f70();
   input += synapse0x2db95f0();
   input += synapse0x2db9630();
   input += synapse0x2db9670();
   input += synapse0x2db96b0();
   input += synapse0x2db96f0();
   input += synapse0x2db9730();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db8da0() {
   double input = input0x2db8da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2db9770() {
   double input = -2.51495;
   input += synapse0x2db9ab0();
   input += synapse0x2db9af0();
   input += synapse0x2db9b30();
   input += synapse0x2db9b70();
   input += synapse0x2db9bb0();
   input += synapse0x2db9bf0();
   input += synapse0x2db9c30();
   input += synapse0x2db9c70();
   input += synapse0x2db9cb0();
   input += synapse0x2db9cf0();
   input += synapse0x2db9d30();
   input += synapse0x2db9d70();
   input += synapse0x2db9db0();
   input += synapse0x2db9df0();
   input += synapse0x2db9e30();
   input += synapse0x2db9e70();
   input += synapse0x2db9900();
   input += synapse0x2db9940();
   input += synapse0x2db9fc0();
   input += synapse0x2dba000();
   input += synapse0x2dba040();
   input += synapse0x2dba080();
   input += synapse0x2dba0c0();
   input += synapse0x2dba100();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2db9770() {
   double input = input0x2db9770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dba140() {
   double input = -0.208353;
   input += synapse0x2dba480();
   input += synapse0x2dba4c0();
   input += synapse0x2dba500();
   input += synapse0x2dba540();
   input += synapse0x2dba580();
   input += synapse0x2dba5c0();
   input += synapse0x2dba600();
   input += synapse0x2dba640();
   input += synapse0x2dba680();
   input += synapse0x2dba6c0();
   input += synapse0x2dba700();
   input += synapse0x2dba740();
   input += synapse0x2dba780();
   input += synapse0x2dba7c0();
   input += synapse0x2dba800();
   input += synapse0x2dba840();
   input += synapse0x2dba2d0();
   input += synapse0x2dba310();
   input += synapse0x2dba990();
   input += synapse0x2dba9d0();
   input += synapse0x2dbaa10();
   input += synapse0x2dbaa50();
   input += synapse0x2dbaa90();
   input += synapse0x2dbaad0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dba140() {
   double input = input0x2dba140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dc1340() {
   double input = 2.09886;
   input += synapse0x2b5a8b0();
   input += synapse0x2b5a8f0();
   input += synapse0x2d97480();
   input += synapse0x2d974c0();
   input += synapse0x2d98f50();
   input += synapse0x2d98f90();
   input += synapse0x2d99d20();
   input += synapse0x2d99d60();
   input += synapse0x2d9a6f0();
   input += synapse0x2d9a730();
   input += synapse0x2d9b0c0();
   input += synapse0x2d9b100();
   input += synapse0x2d9bba0();
   input += synapse0x2d9bbe0();
   input += synapse0x2d9c570();
   input += synapse0x2d9c5b0();
   input += synapse0x2d99650();
   input += synapse0x2d99690();
   input += synapse0x2d9e120();
   input += synapse0x2d9e160();
   input += synapse0x2d9eaf0();
   input += synapse0x2d9eb30();
   input += synapse0x2d9f4c0();
   input += synapse0x2d9f500();
   input += synapse0x2d9fe90();
   input += synapse0x2d9fed0();
   input += synapse0x2d92f20();
   input += synapse0x2d92f60();
   input += synapse0x2da1f80();
   input += synapse0x2da1fc0();
   input += synapse0x2da2950();
   input += synapse0x2da2990();
   input += synapse0x2da3320();
   input += synapse0x2da3360();
   input += synapse0x2da3cf0();
   input += synapse0x2da3d30();
   input += synapse0x2da46c0();
   input += synapse0x2da4700();
   input += synapse0x2d9d210();
   input += synapse0x2d9d250();
   input += synapse0x2da6ac0();
   input += synapse0x2da6b00();
   input += synapse0x2da7450();
   input += synapse0x2da7490();
   input += synapse0x2da7e20();
   input += synapse0x2da7e60();
   input += synapse0x2da87f0();
   input += synapse0x2da8830();
   input += synapse0x2da91c0();
   input += synapse0x2da9200();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dc1340() {
   double input = input0x2dc1340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dc16e0() {
   double input = -0.215453;
   input += synapse0x2dab900();
   input += synapse0x2dab940();
   input += synapse0x2da0ec0();
   input += synapse0x2da0f00();
   input += synapse0x2dae4e0();
   input += synapse0x2dae520();
   input += synapse0x2daeeb0();
   input += synapse0x2daeef0();
   input += synapse0x2daf880();
   input += synapse0x2daf8c0();
   input += synapse0x2db0250();
   input += synapse0x2db0290();
   input += synapse0x2db0c20();
   input += synapse0x2db0c60();
   input += synapse0x2db15f0();
   input += synapse0x2db1630();
   input += synapse0x2db1fc0();
   input += synapse0x2db2000();
   input += synapse0x2db2990();
   input += synapse0x2db29d0();
   input += synapse0x2db3570();
   input += synapse0x2db35b0();
   input += synapse0x2db3f40();
   input += synapse0x2db3f80();
   input += synapse0x2da4dc0();
   input += synapse0x2da4e00();
   input += synapse0x2da5790();
   input += synapse0x2da57d0();
   input += synapse0x2da6160();
   input += synapse0x2da61a0();
   input += synapse0x2db8680();
   input += synapse0x2db86c0();
   input += synapse0x2db9050();
   input += synapse0x2db9090();
   input += synapse0x2db9a20();
   input += synapse0x2db9a60();
   input += synapse0x2dba3f0();
   input += synapse0x2dba430();
   input += synapse0x2d95380();
   input += synapse0x2d953c0();
   input += synapse0x2da9b90();
   input += synapse0x2da9bd0();
   input += synapse0x2dbab10();
   input += synapse0x2dbab50();
   input += synapse0x2dbab90();
   input += synapse0x2dbabd0();
   input += synapse0x2dc1a80();
   input += synapse0x2dc1ac0();
   input += synapse0x2dc1b00();
   input += synapse0x2dc1b40();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dc16e0() {
   double input = input0x2dc16e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dc1b80() {
   double input = 1.41805;
   input += synapse0x2dc1ec0();
   input += synapse0x2dc1f00();
   input += synapse0x2dc1f40();
   input += synapse0x2dc1f80();
   input += synapse0x2dc1fc0();
   input += synapse0x2dc2000();
   input += synapse0x2dc2040();
   input += synapse0x2dc2080();
   input += synapse0x2dc20c0();
   input += synapse0x2dc2100();
   input += synapse0x2dc2140();
   input += synapse0x2dc2180();
   input += synapse0x2dc21c0();
   input += synapse0x2dc2200();
   input += synapse0x2dc2240();
   input += synapse0x2dc2280();
   input += synapse0x2dc1d10();
   input += synapse0x2dc1d50();
   input += synapse0x2dc23d0();
   input += synapse0x2dc2410();
   input += synapse0x2dc2450();
   input += synapse0x2dc2490();
   input += synapse0x2dc24d0();
   input += synapse0x2dc2510();
   input += synapse0x2dc2550();
   input += synapse0x2dc2590();
   input += synapse0x2dc25d0();
   input += synapse0x2dc2610();
   input += synapse0x2dc2650();
   input += synapse0x2dc2690();
   input += synapse0x2dc26d0();
   input += synapse0x2dc2710();
   input += synapse0x2dc22c0();
   input += synapse0x2dc2300();
   input += synapse0x2dc2340();
   input += synapse0x2dc2380();
   input += synapse0x2dc2960();
   input += synapse0x2dc29a0();
   input += synapse0x2dc29e0();
   input += synapse0x2dc2a20();
   input += synapse0x2dc2a60();
   input += synapse0x2dc2aa0();
   input += synapse0x2dc2ae0();
   input += synapse0x2dc2b20();
   input += synapse0x2dc2b60();
   input += synapse0x2dc2ba0();
   input += synapse0x2dc2be0();
   input += synapse0x2dc2c20();
   input += synapse0x2dc2c60();
   input += synapse0x2dc2ca0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dc1b80() {
   double input = input0x2dc1b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dc2ce0() {
   double input = 0.998578;
   input += synapse0x2dc3020();
   input += synapse0x2dc3060();
   input += synapse0x2dc30a0();
   input += synapse0x2dc30e0();
   input += synapse0x2dc3120();
   input += synapse0x2dc3160();
   input += synapse0x2dc31a0();
   input += synapse0x2dc31e0();
   input += synapse0x2dc3220();
   input += synapse0x2dc3260();
   input += synapse0x2dc32a0();
   input += synapse0x2dc32e0();
   input += synapse0x2dc3320();
   input += synapse0x2dc3360();
   input += synapse0x2dc33a0();
   input += synapse0x2dc33e0();
   input += synapse0x2dc2e70();
   input += synapse0x2dc2eb0();
   input += synapse0x2dc3530();
   input += synapse0x2dc3570();
   input += synapse0x2dc35b0();
   input += synapse0x2dc35f0();
   input += synapse0x2dc3630();
   input += synapse0x2dc3670();
   input += synapse0x2dc36b0();
   input += synapse0x2dc36f0();
   input += synapse0x2dc3730();
   input += synapse0x2dc3770();
   input += synapse0x2dc37b0();
   input += synapse0x2dc37f0();
   input += synapse0x2dc3830();
   input += synapse0x2dc3870();
   input += synapse0x2dc3420();
   input += synapse0x2dc3460();
   input += synapse0x2dc34a0();
   input += synapse0x2dc34e0();
   input += synapse0x2dc3ac0();
   input += synapse0x2dc3b00();
   input += synapse0x2dc3b40();
   input += synapse0x2dc3b80();
   input += synapse0x2dc3bc0();
   input += synapse0x2dc3c00();
   input += synapse0x2dc3c40();
   input += synapse0x2dc3c80();
   input += synapse0x2dc3cc0();
   input += synapse0x2dc3d00();
   input += synapse0x2dc3d40();
   input += synapse0x2dc3d80();
   input += synapse0x2dc3dc0();
   input += synapse0x2dc3e00();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dc2ce0() {
   double input = input0x2dc2ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dc3e40() {
   double input = -0.569736;
   input += synapse0x2dc4180();
   input += synapse0x2dc41c0();
   input += synapse0x2dc4200();
   input += synapse0x2dc4240();
   input += synapse0x2dc4280();
   input += synapse0x2dc42c0();
   input += synapse0x2dc4300();
   input += synapse0x2dc4340();
   input += synapse0x2dc4380();
   input += synapse0x2dc43c0();
   input += synapse0x2dc4400();
   input += synapse0x2dc4440();
   input += synapse0x2dc4480();
   input += synapse0x2dc44c0();
   input += synapse0x2dc4500();
   input += synapse0x2dc4540();
   input += synapse0x2dc3fd0();
   input += synapse0x2dc4010();
   input += synapse0x2dc4690();
   input += synapse0x2dc46d0();
   input += synapse0x2dc4710();
   input += synapse0x2dc4750();
   input += synapse0x2dc4790();
   input += synapse0x2dc47d0();
   input += synapse0x2dc4810();
   input += synapse0x2dc4850();
   input += synapse0x2dc4890();
   input += synapse0x2dc48d0();
   input += synapse0x2dc4910();
   input += synapse0x2dc4950();
   input += synapse0x2dc4990();
   input += synapse0x2dc49d0();
   input += synapse0x2dc4580();
   input += synapse0x2dc45c0();
   input += synapse0x2dc4600();
   input += synapse0x2dc4640();
   input += synapse0x2dc4c20();
   input += synapse0x2dc4c60();
   input += synapse0x2dc4ca0();
   input += synapse0x2dc4ce0();
   input += synapse0x2dc4d20();
   input += synapse0x2dc4d60();
   input += synapse0x2dc4da0();
   input += synapse0x2dc4de0();
   input += synapse0x2dc4e20();
   input += synapse0x2dc4e60();
   input += synapse0x2dc4ea0();
   input += synapse0x2dc4ee0();
   input += synapse0x2dc4f20();
   input += synapse0x2dc4f60();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dc3e40() {
   double input = input0x2dc3e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::input0x2dc4fa0() {
   double input = 1.78999;
   input += synapse0x2dc51c0();
   input += synapse0x2dc5200();
   input += synapse0x2dc5240();
   input += synapse0x2dc5280();
   input += synapse0x2dc52c0();
   return input;
}

double NNfunction_nn_charge1p_charge2m::neuron0x2dc4fa0() {
   double input = input0x2dc4fa0();
   return (input * 1)+0;
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95410() {
   return (neuron0x2d90010()*-0.0066027);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95450() {
   return (neuron0x2d902c0()*0.000636668);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95490() {
   return (neuron0x2d90600()*2.49123);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d954d0() {
   return (neuron0x2d90940()*-0.00193791);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95510() {
   return (neuron0x2d90c80()*0.000479694);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95550() {
   return (neuron0x2d90fc0()*0.0138902);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95590() {
   return (neuron0x2d91300()*0.00830322);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d955d0() {
   return (neuron0x2d91640()*0.012058);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95610() {
   return (neuron0x2d91980()*-0.00952328);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95650() {
   return (neuron0x2d91cc0()*-0.00680097);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95690() {
   return (neuron0x2d92000()*0.00779578);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d956d0() {
   return (neuron0x2d92340()*-0.0180473);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95710() {
   return (neuron0x2d92680()*0.022565);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95750() {
   return (neuron0x2d929c0()*0.00556255);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95790() {
   return (neuron0x2d92d00()*-0.00218131);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d957d0() {
   return (neuron0x2d93040()*0.00372916);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95260() {
   return (neuron0x2d93380()*-0.000389659);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d952a0() {
   return (neuron0x2d938e0()*-0.00551537);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b4c220() {
   return (neuron0x2d93c20()*0.00159464);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b4c260() {
   return (neuron0x2d93f60()*0.00567305);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95810() {
   return (neuron0x2d942a0()*-0.00105656);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95850() {
   return (neuron0x2d945e0()*0.00287393);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95890() {
   return (neuron0x2d94920()*0.000239484);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d958d0() {
   return (neuron0x2d94c60()*4.34338);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95c50() {
   return (neuron0x2d90010()*0.215401);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95c90() {
   return (neuron0x2d902c0()*-0.0219355);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95cd0() {
   return (neuron0x2d90600()*-1.35816);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95d10() {
   return (neuron0x2d90940()*-0.0741272);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95d50() {
   return (neuron0x2d90c80()*-0.0215613);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95d90() {
   return (neuron0x2d90fc0()*-0.0310917);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95dd0() {
   return (neuron0x2d91300()*-0.017549);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95e10() {
   return (neuron0x2d91640()*0.0194122);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95e50() {
   return (neuron0x2d91980()*0.0183684);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b4c070() {
   return (neuron0x2d91cc0()*0.0495571);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b4c0b0() {
   return (neuron0x2d92000()*0.0295271);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b4c0f0() {
   return (neuron0x2d92340()*-0.726638);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b4c130() {
   return (neuron0x2d92680()*-0.150922);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d960a0() {
   return (neuron0x2d929c0()*-0.101238);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d960e0() {
   return (neuron0x2d92d00()*0.0165184);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96120() {
   return (neuron0x2d93040()*-0.0369519);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95aa0() {
   return (neuron0x2d93380()*0.0293671);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95ae0() {
   return (neuron0x2d938e0()*0.0230838);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96270() {
   return (neuron0x2d93c20()*-0.05329);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d962b0() {
   return (neuron0x2d93f60()*-0.0524119);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d962f0() {
   return (neuron0x2d942a0()*-0.00625864);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96330() {
   return (neuron0x2d945e0()*0.0115574);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96370() {
   return (neuron0x2d94920()*-0.00218629);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d963b0() {
   return (neuron0x2d94c60()*-0.684957);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96730() {
   return (neuron0x2d90010()*-0.102448);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96770() {
   return (neuron0x2d902c0()*0.00186767);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d967b0() {
   return (neuron0x2d90600()*-0.652491);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d967f0() {
   return (neuron0x2d90940()*0.0945704);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96830() {
   return (neuron0x2d90c80()*-0.00582198);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96870() {
   return (neuron0x2d90fc0()*0.014504);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d968b0() {
   return (neuron0x2d91300()*-0.0733199);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d968f0() {
   return (neuron0x2d91640()*-0.0407408);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96930() {
   return (neuron0x2d91980()*0.00114649);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96970() {
   return (neuron0x2d91cc0()*-0.0160826);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d969b0() {
   return (neuron0x2d92000()*-0.0375693);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d969f0() {
   return (neuron0x2d92340()*1.13102);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96a30() {
   return (neuron0x2d92680()*0.160466);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96a70() {
   return (neuron0x2d929c0()*0.107106);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96ab0() {
   return (neuron0x2d92d00()*-0.0294743);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96af0() {
   return (neuron0x2d93040()*-0.0223932);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96580() {
   return (neuron0x2d93380()*0.0162306);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d965c0() {
   return (neuron0x2d938e0()*0.0419846);
}

double NNfunction_nn_charge1p_charge2m::synapse0x1ac3f50() {
   return (neuron0x2d93c20()*0.0187695);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a0c0() {
   return (neuron0x2d93f60()*0.0371653);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a100() {
   return (neuron0x2d942a0()*-0.0319073);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98a20() {
   return (neuron0x2d945e0()*-0.0063347);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98a60() {
   return (neuron0x2d94920()*-0.000468606);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d8fd50() {
   return (neuron0x2d94c60()*-0.466671);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d8fe20() {
   return (neuron0x2d90010()*-0.0247694);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a940() {
   return (neuron0x2d902c0()*-0.00439087);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96020() {
   return (neuron0x2d90600()*0.379498);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96060() {
   return (neuron0x2d90940()*-0.00938372);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96c40() {
   return (neuron0x2d90c80()*0.00379727);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96c80() {
   return (neuron0x2d90fc0()*0.000854872);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96cc0() {
   return (neuron0x2d91300()*-0.00590289);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96d00() {
   return (neuron0x2d91640()*-0.00195601);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96d40() {
   return (neuron0x2d91980()*-0.00280083);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96d80() {
   return (neuron0x2d91cc0()*-0.00269336);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96dc0() {
   return (neuron0x2d92000()*0.00379198);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96e00() {
   return (neuron0x2d92340()*-6.14984);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96e40() {
   return (neuron0x2d92680()*-0.00489023);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96e80() {
   return (neuron0x2d929c0()*-0.0145101);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96ec0() {
   return (neuron0x2d92d00()*-0.0118118);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d96f00() {
   return (neuron0x2d93040()*-0.0120266);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d8fd90() {
   return (neuron0x2d93380()*-0.00702884);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d8fdd0() {
   return (neuron0x2d938e0()*-0.0134793);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97050() {
   return (neuron0x2d93c20()*-0.00925074);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97090() {
   return (neuron0x2d93f60()*-0.000360022);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d970d0() {
   return (neuron0x2d942a0()*-0.0122253);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97110() {
   return (neuron0x2d945e0()*-0.0195768);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97150() {
   return (neuron0x2d94920()*-0.0068672);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97190() {
   return (neuron0x2d94c60()*-0.5332);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97510() {
   return (neuron0x2d90010()*0.0213985);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97550() {
   return (neuron0x2d902c0()*-0.00426772);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97590() {
   return (neuron0x2d90600()*1.07706);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d975d0() {
   return (neuron0x2d90940()*0.0410968);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97610() {
   return (neuron0x2d90c80()*0.00223053);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97650() {
   return (neuron0x2d90fc0()*-0.00601234);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97690() {
   return (neuron0x2d91300()*0.0188568);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d976d0() {
   return (neuron0x2d91640()*0.00275467);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97710() {
   return (neuron0x2d91980()*0.0214641);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97750() {
   return (neuron0x2d91cc0()*-0.0106653);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97790() {
   return (neuron0x2d92000()*0.00347997);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d977d0() {
   return (neuron0x2d92340()*0.189415);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97810() {
   return (neuron0x2d92680()*-0.0109675);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97850() {
   return (neuron0x2d929c0()*-0.00436806);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97890() {
   return (neuron0x2d92d00()*-0.00247762);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d978d0() {
   return (neuron0x2d93040()*-0.00234957);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97a20() {
   return (neuron0x2d93380()*-0.00648349);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97360() {
   return (neuron0x2d938e0()*-0.0170914);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d973a0() {
   return (neuron0x2d93c20()*0.00637005);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98b60() {
   return (neuron0x2d93f60()*0.00158992);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98ba0() {
   return (neuron0x2d942a0()*-0.0071668);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98be0() {
   return (neuron0x2d945e0()*0.0111745);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98c20() {
   return (neuron0x2d94920()*0.00477776);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98c60() {
   return (neuron0x2d94c60()*-1.83991);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98fe0() {
   return (neuron0x2d90010()*-0.111547);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99020() {
   return (neuron0x2d902c0()*0.00472588);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99060() {
   return (neuron0x2d90600()*-0.729437);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d990a0() {
   return (neuron0x2d90940()*0.0242979);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d990e0() {
   return (neuron0x2d90c80()*-0.00914132);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99120() {
   return (neuron0x2d90fc0()*0.000569794);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99160() {
   return (neuron0x2d91300()*0.00286953);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d991a0() {
   return (neuron0x2d91640()*-0.000635593);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d991e0() {
   return (neuron0x2d91980()*0.0165128);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a410() {
   return (neuron0x2d91cc0()*0.0070069);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a450() {
   return (neuron0x2d92000()*-0.00162118);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a490() {
   return (neuron0x2d92340()*-0.260765);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a4d0() {
   return (neuron0x2d92680()*-0.0378298);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a510() {
   return (neuron0x2d929c0()*-0.00705976);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a550() {
   return (neuron0x2d92d00()*-0.00352704);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a590() {
   return (neuron0x2d93040()*0.0151485);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98e30() {
   return (neuron0x2d93380()*-0.00716634);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98e70() {
   return (neuron0x2d938e0()*-0.0195611);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a6e0() {
   return (neuron0x2d93c20()*-0.00679883);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a720() {
   return (neuron0x2d93f60()*0.00955318);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a760() {
   return (neuron0x2d942a0()*0.00447296);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a7a0() {
   return (neuron0x2d945e0()*0.00127642);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a7e0() {
   return (neuron0x2d94920()*-0.00412373);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99a30() {
   return (neuron0x2d94c60()*-3.08551);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99db0() {
   return (neuron0x2d90010()*-0.00542654);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99df0() {
   return (neuron0x2d902c0()*-0.00373333);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99e30() {
   return (neuron0x2d90600()*-1.04166);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99e70() {
   return (neuron0x2d90940()*0.0208508);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99eb0() {
   return (neuron0x2d90c80()*0.0113468);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99ef0() {
   return (neuron0x2d90fc0()*-0.0101331);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99f30() {
   return (neuron0x2d91300()*0.0170159);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99f70() {
   return (neuron0x2d91640()*-0.0229196);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99fb0() {
   return (neuron0x2d91980()*0.0178416);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99ff0() {
   return (neuron0x2d91cc0()*0.0162377);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a030() {
   return (neuron0x2d92000()*0.00473162);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a070() {
   return (neuron0x2d92340()*0.0411902);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a0b0() {
   return (neuron0x2d92680()*-0.0311068);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a0f0() {
   return (neuron0x2d929c0()*0.0118001);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a130() {
   return (neuron0x2d92d00()*0.0219468);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a170() {
   return (neuron0x2d93040()*0.00585959);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99c00() {
   return (neuron0x2d93380()*-0.00450065);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99c40() {
   return (neuron0x2d938e0()*-0.00975605);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a2c0() {
   return (neuron0x2d93c20()*-0.0126393);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a300() {
   return (neuron0x2d93f60()*0.00450661);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a340() {
   return (neuron0x2d942a0()*-0.00869146);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a380() {
   return (neuron0x2d945e0()*0.0193315);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a3c0() {
   return (neuron0x2d94920()*-0.00466611);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a400() {
   return (neuron0x2d94c60()*-15.635);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a780() {
   return (neuron0x2d90010()*-0.565537);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a7c0() {
   return (neuron0x2d902c0()*0.62786);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a800() {
   return (neuron0x2d90600()*0.13896);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a840() {
   return (neuron0x2d90940()*0.637491);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a880() {
   return (neuron0x2d90c80()*-0.0477366);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a8c0() {
   return (neuron0x2d90fc0()*0.961932);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a900() {
   return (neuron0x2d91300()*0.100549);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a940() {
   return (neuron0x2d91640()*-0.298679);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a980() {
   return (neuron0x2d91980()*0.157656);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a9c0() {
   return (neuron0x2d91cc0()*-0.277083);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9aa00() {
   return (neuron0x2d92000()*-0.324511);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9aa40() {
   return (neuron0x2d92340()*-0.15291);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9aa80() {
   return (neuron0x2d92680()*0.484372);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9aac0() {
   return (neuron0x2d929c0()*0.384952);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ab00() {
   return (neuron0x2d92d00()*0.119638);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ab40() {
   return (neuron0x2d93040()*-0.582185);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a5d0() {
   return (neuron0x2d93380()*-0.114734);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a610() {
   return (neuron0x2d938e0()*-0.0527957);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ac90() {
   return (neuron0x2d93c20()*-0.234603);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9acd0() {
   return (neuron0x2d93f60()*0.0897665);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ad10() {
   return (neuron0x2d942a0()*-0.494635);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ad50() {
   return (neuron0x2d945e0()*-0.991528);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ad90() {
   return (neuron0x2d94920()*-1.41345);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9add0() {
   return (neuron0x2d94c60()*-0.640646);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d937d0() {
   return (neuron0x2d90010()*-0.0463884);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93810() {
   return (neuron0x2d902c0()*0.00586204);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93850() {
   return (neuron0x2d90600()*0.810027);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93890() {
   return (neuron0x2d90940()*0.0379711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b360() {
   return (neuron0x2d90c80()*-0.089679);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b3a0() {
   return (neuron0x2d90fc0()*0.0375393);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b3e0() {
   return (neuron0x2d91300()*0.0335821);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b420() {
   return (neuron0x2d91640()*-0.0103204);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b460() {
   return (neuron0x2d91980()*-0.032307);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b4a0() {
   return (neuron0x2d91cc0()*-0.0193399);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b4e0() {
   return (neuron0x2d92000()*-0.023078);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b520() {
   return (neuron0x2d92340()*-0.280192);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b560() {
   return (neuron0x2d92680()*-5.39416);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b5a0() {
   return (neuron0x2d929c0()*-0.00262072);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b5e0() {
   return (neuron0x2d92d00()*0.00388504);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b620() {
   return (neuron0x2d93040()*-0.0167671);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9afa0() {
   return (neuron0x2d93380()*0.00506792);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9afe0() {
   return (neuron0x2d938e0()*-0.0628874);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b770() {
   return (neuron0x2d93c20()*-0.0536697);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b7b0() {
   return (neuron0x2d93f60()*0.0175467);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b7f0() {
   return (neuron0x2d942a0()*0.00687701);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b830() {
   return (neuron0x2d945e0()*0.0080466);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b870() {
   return (neuron0x2d94920()*0.000572368);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b8b0() {
   return (neuron0x2d94c60()*0.0793878);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bc30() {
   return (neuron0x2d90010()*-0.352243);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bc70() {
   return (neuron0x2d902c0()*-0.171112);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bcb0() {
   return (neuron0x2d90600()*-0.440795);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bcf0() {
   return (neuron0x2d90940()*0.314204);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bd30() {
   return (neuron0x2d90c80()*-0.246063);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bd70() {
   return (neuron0x2d90fc0()*0.415835);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bdb0() {
   return (neuron0x2d91300()*-0.392844);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bdf0() {
   return (neuron0x2d91640()*-0.0654272);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9be30() {
   return (neuron0x2d91980()*-0.0699502);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9be70() {
   return (neuron0x2d91cc0()*-0.0501416);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9beb0() {
   return (neuron0x2d92000()*-0.0737993);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bef0() {
   return (neuron0x2d92340()*-0.088698);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bf30() {
   return (neuron0x2d92680()*-0.303732);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bf70() {
   return (neuron0x2d929c0()*0.0738722);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bfb0() {
   return (neuron0x2d92d00()*-0.154018);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bff0() {
   return (neuron0x2d93040()*-0.185964);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ba80() {
   return (neuron0x2d93380()*-0.585368);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bac0() {
   return (neuron0x2d938e0()*0.25315);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c140() {
   return (neuron0x2d93c20()*0.246626);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c180() {
   return (neuron0x2d93f60()*-0.0640721);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c1c0() {
   return (neuron0x2d942a0()*-0.1632);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c200() {
   return (neuron0x2d945e0()*0.0129854);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c240() {
   return (neuron0x2d94920()*0.132555);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c280() {
   return (neuron0x2d94c60()*-0.33679);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c600() {
   return (neuron0x2d90010()*0.00168599);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c640() {
   return (neuron0x2d902c0()*-0.00446591);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c680() {
   return (neuron0x2d90600()*-2.20425);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c6c0() {
   return (neuron0x2d90940()*0.000139481);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c700() {
   return (neuron0x2d90c80()*0.000411255);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c740() {
   return (neuron0x2d90fc0()*-0.0037512);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c780() {
   return (neuron0x2d91300()*-0.0072084);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c7c0() {
   return (neuron0x2d91640()*-0.0115877);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c800() {
   return (neuron0x2d91980()*0.00415697);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c840() {
   return (neuron0x2d91cc0()*0.00595024);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c880() {
   return (neuron0x2d92000()*-0.00340642);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c8c0() {
   return (neuron0x2d92340()*-0.0606231);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c900() {
   return (neuron0x2d92680()*-0.0344437);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c940() {
   return (neuron0x2d929c0()*-0.00903108);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c980() {
   return (neuron0x2d92d00()*0.00758531);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c9c0() {
   return (neuron0x2d93040()*0.000635543);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c450() {
   return (neuron0x2d93380()*-0.00765261);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c490() {
   return (neuron0x2d938e0()*0.00949481);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99220() {
   return (neuron0x2d93c20()*0.00618204);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99260() {
   return (neuron0x2d93f60()*-0.00665615);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d992a0() {
   return (neuron0x2d942a0()*0.00251344);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d992e0() {
   return (neuron0x2d945e0()*-0.00257521);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99320() {
   return (neuron0x2d94920()*-0.000159741);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99360() {
   return (neuron0x2d94c60()*-3.79415);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d996e0() {
   return (neuron0x2d90010()*-0.219661);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99720() {
   return (neuron0x2d902c0()*-0.00604076);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99760() {
   return (neuron0x2d90600()*0.0338263);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d997a0() {
   return (neuron0x2d90940()*0.033049);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d997e0() {
   return (neuron0x2d90c80()*-0.0114262);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99820() {
   return (neuron0x2d90fc0()*-0.00141935);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99860() {
   return (neuron0x2d91300()*-0.00285902);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d998a0() {
   return (neuron0x2d91640()*0.00219314);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d998e0() {
   return (neuron0x2d91980()*-0.00655389);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99920() {
   return (neuron0x2d91cc0()*-0.00452963);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99960() {
   return (neuron0x2d92000()*-0.00138853);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d999a0() {
   return (neuron0x2d92340()*0.234287);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d999e0() {
   return (neuron0x2d92680()*0.0258602);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9db20() {
   return (neuron0x2d929c0()*0.00725496);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9db60() {
   return (neuron0x2d92d00()*-0.00325172);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9dba0() {
   return (neuron0x2d93040()*-0.0052869);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99530() {
   return (neuron0x2d93380()*0.00527054);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99570() {
   return (neuron0x2d938e0()*0.0018231);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9dcf0() {
   return (neuron0x2d93c20()*-0.0137853);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9dd30() {
   return (neuron0x2d93f60()*-0.000405652);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9dd70() {
   return (neuron0x2d942a0()*0.00672713);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ddb0() {
   return (neuron0x2d945e0()*0.00661427);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ddf0() {
   return (neuron0x2d94920()*0.00412506);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9de30() {
   return (neuron0x2d94c60()*-1.31563);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e1b0() {
   return (neuron0x2d90010()*-0.043149);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e1f0() {
   return (neuron0x2d902c0()*0.268599);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e230() {
   return (neuron0x2d90600()*-0.634842);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e270() {
   return (neuron0x2d90940()*-0.398728);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e2b0() {
   return (neuron0x2d90c80()*-0.0377348);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e2f0() {
   return (neuron0x2d90fc0()*0.36659);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e330() {
   return (neuron0x2d91300()*0.311605);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e370() {
   return (neuron0x2d91640()*0.0895581);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e3b0() {
   return (neuron0x2d91980()*0.513711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e3f0() {
   return (neuron0x2d91cc0()*0.275392);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e430() {
   return (neuron0x2d92000()*0.254721);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e470() {
   return (neuron0x2d92340()*-1.31808);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e4b0() {
   return (neuron0x2d92680()*0.266173);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e4f0() {
   return (neuron0x2d929c0()*0.746033);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e530() {
   return (neuron0x2d92d00()*0.014931);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e570() {
   return (neuron0x2d93040()*0.222814);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e000() {
   return (neuron0x2d93380()*0.28931);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e040() {
   return (neuron0x2d938e0()*-0.0423812);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e6c0() {
   return (neuron0x2d93c20()*-0.0388266);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e700() {
   return (neuron0x2d93f60()*0.304098);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e740() {
   return (neuron0x2d942a0()*0.545276);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e780() {
   return (neuron0x2d945e0()*0.774116);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e7c0() {
   return (neuron0x2d94920()*0.405085);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e800() {
   return (neuron0x2d94c60()*0.0960987);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9eb80() {
   return (neuron0x2d90010()*-0.291923);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ebc0() {
   return (neuron0x2d902c0()*-0.00687764);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ec00() {
   return (neuron0x2d90600()*0.18229);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ec40() {
   return (neuron0x2d90940()*-0.300985);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ec80() {
   return (neuron0x2d90c80()*0.742856);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ecc0() {
   return (neuron0x2d90fc0()*-0.125495);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ed00() {
   return (neuron0x2d91300()*0.0186759);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ed40() {
   return (neuron0x2d91640()*0.366312);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ed80() {
   return (neuron0x2d91980()*-0.163348);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9edc0() {
   return (neuron0x2d91cc0()*0.0636144);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ee00() {
   return (neuron0x2d92000()*-0.270801);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ee40() {
   return (neuron0x2d92340()*0.127724);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ee80() {
   return (neuron0x2d92680()*-0.763484);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9eec0() {
   return (neuron0x2d929c0()*-0.191243);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ef00() {
   return (neuron0x2d92d00()*-0.516197);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ef40() {
   return (neuron0x2d93040()*-0.197803);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e9d0() {
   return (neuron0x2d93380()*-0.28308);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ea10() {
   return (neuron0x2d938e0()*-0.378616);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f090() {
   return (neuron0x2d93c20()*-0.160026);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f0d0() {
   return (neuron0x2d93f60()*0.229372);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f110() {
   return (neuron0x2d942a0()*0.128655);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f150() {
   return (neuron0x2d945e0()*-0.00156547);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f190() {
   return (neuron0x2d94920()*0.198747);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f1d0() {
   return (neuron0x2d94c60()*-0.291474);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f550() {
   return (neuron0x2d90010()*0.408677);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f590() {
   return (neuron0x2d902c0()*0.0199518);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f5d0() {
   return (neuron0x2d90600()*0.647422);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f610() {
   return (neuron0x2d90940()*0.000766625);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f650() {
   return (neuron0x2d90c80()*0.0714573);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f690() {
   return (neuron0x2d90fc0()*-0.0993485);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f6d0() {
   return (neuron0x2d91300()*0.000652159);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f710() {
   return (neuron0x2d91640()*0.0274485);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f750() {
   return (neuron0x2d91980()*0.0689268);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f790() {
   return (neuron0x2d91cc0()*0.046389);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f7d0() {
   return (neuron0x2d92000()*0.0045554);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f810() {
   return (neuron0x2d92340()*-0.848008);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f850() {
   return (neuron0x2d92680()*-0.035314);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f890() {
   return (neuron0x2d929c0()*-0.0562461);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f8d0() {
   return (neuron0x2d92d00()*0.089464);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f910() {
   return (neuron0x2d93040()*-0.0228313);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f3a0() {
   return (neuron0x2d93380()*0.0964256);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f3e0() {
   return (neuron0x2d938e0()*-0.0975084);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fa60() {
   return (neuron0x2d93c20()*-0.0554381);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9faa0() {
   return (neuron0x2d93f60()*0.0256217);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fae0() {
   return (neuron0x2d942a0()*0.00115173);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fb20() {
   return (neuron0x2d945e0()*0.00361301);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fb60() {
   return (neuron0x2d94920()*-0.0608425);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fba0() {
   return (neuron0x2d94c60()*-0.780781);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ff20() {
   return (neuron0x2d90010()*-0.0540839);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d901a0() {
   return (neuron0x2d902c0()*0.00178982);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d901e0() {
   return (neuron0x2d90600()*2.57551);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d904e0() {
   return (neuron0x2d90940()*0.00311264);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90520() {
   return (neuron0x2d90c80()*-0.0304053);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90820() {
   return (neuron0x2d90fc0()*0.000502349);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90860() {
   return (neuron0x2d91300()*-0.0172006);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90b60() {
   return (neuron0x2d91640()*-0.0183779);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90ba0() {
   return (neuron0x2d91980()*-0.0136233);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90ea0() {
   return (neuron0x2d91cc0()*-0.0334199);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d90ee0() {
   return (neuron0x2d92000()*-0.0732318);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d911e0() {
   return (neuron0x2d92340()*-3.98423);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91220() {
   return (neuron0x2d92680()*0.0200254);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91520() {
   return (neuron0x2d929c0()*0.0957761);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91560() {
   return (neuron0x2d92d00()*-0.00453779);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91860() {
   return (neuron0x2d93040()*0.0290433);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d918a0() {
   return (neuron0x2d93380()*0.00396266);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91ba0() {
   return (neuron0x2d938e0()*0.0174299);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91be0() {
   return (neuron0x2d93c20()*0.0182003);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91ee0() {
   return (neuron0x2d93f60()*0.044793);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d91f20() {
   return (neuron0x2d942a0()*-0.0419137);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d92220() {
   return (neuron0x2d945e0()*-0.00114597);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d92260() {
   return (neuron0x2d94920()*0.0238718);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d92560() {
   return (neuron0x2d94c60()*-0.0560562);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d925a0() {
   return (neuron0x2d90010()*0.167024);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93260() {
   return (neuron0x2d902c0()*0.0942432);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d932a0() {
   return (neuron0x2d90600()*0.042803);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fd70() {
   return (neuron0x2d90940()*-0.457967);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fdb0() {
   return (neuron0x2d90c80()*0.0484236);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d935a0() {
   return (neuron0x2d90fc0()*0.954081);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d935e0() {
   return (neuron0x2d91300()*0.255285);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93b00() {
   return (neuron0x2d91640()*0.462891);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93b40() {
   return (neuron0x2d91980()*0.375852);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93e40() {
   return (neuron0x2d91cc0()*0.582189);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d93e80() {
   return (neuron0x2d92000()*0.279594);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94180() {
   return (neuron0x2d92340()*0.361918);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d941c0() {
   return (neuron0x2d92680()*-0.153741);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d944c0() {
   return (neuron0x2d929c0()*0.182704);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94500() {
   return (neuron0x2d92d00()*-0.203636);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94800() {
   return (neuron0x2d93040()*0.892541);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94840() {
   return (neuron0x2d93380()*0.469571);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94b40() {
   return (neuron0x2d938e0()*0.0642599);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94b80() {
   return (neuron0x2d93c20()*-0.341241);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94e80() {
   return (neuron0x2d93f60()*0.0775757);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d94ec0() {
   return (neuron0x2d942a0()*0.477893);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d928a0() {
   return (neuron0x2d945e0()*0.00246764);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d928e0() {
   return (neuron0x2d94920()*-0.126388);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1c90() {
   return (neuron0x2d94c60()*-0.610609);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2010() {
   return (neuron0x2d90010()*-0.0900454);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2050() {
   return (neuron0x2d902c0()*-1.50902e-05);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2090() {
   return (neuron0x2d90600()*-0.00345711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da20d0() {
   return (neuron0x2d90940()*0.00305207);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2110() {
   return (neuron0x2d90c80()*-0.00097219);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2150() {
   return (neuron0x2d90fc0()*0.001037);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2190() {
   return (neuron0x2d91300()*-0.00137151);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da21d0() {
   return (neuron0x2d91640()*-0.000734741);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2210() {
   return (neuron0x2d91980()*-0.00186948);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2250() {
   return (neuron0x2d91cc0()*-0.0144566);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2290() {
   return (neuron0x2d92000()*-0.00190948);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da22d0() {
   return (neuron0x2d92340()*0.190226);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2310() {
   return (neuron0x2d92680()*0.00762299);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2350() {
   return (neuron0x2d929c0()*0.00313866);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2390() {
   return (neuron0x2d92d00()*-0.0164779);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da23d0() {
   return (neuron0x2d93040()*0.00716115);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1e60() {
   return (neuron0x2d93380()*0.000868587);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1ea0() {
   return (neuron0x2d938e0()*-0.010001);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2520() {
   return (neuron0x2d93c20()*-0.00655346);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2560() {
   return (neuron0x2d93f60()*0.00294631);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da25a0() {
   return (neuron0x2d942a0()*0.000821527);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da25e0() {
   return (neuron0x2d945e0()*-0.000540359);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2620() {
   return (neuron0x2d94920()*0.0044114);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2660() {
   return (neuron0x2d94c60()*-3.60126);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da29e0() {
   return (neuron0x2d90010()*-0.00630987);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2a20() {
   return (neuron0x2d902c0()*-0.0577283);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2a60() {
   return (neuron0x2d90600()*0.143785);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2aa0() {
   return (neuron0x2d90940()*-1.45838);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2ae0() {
   return (neuron0x2d90c80()*0.116957);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2b20() {
   return (neuron0x2d90fc0()*-0.0482956);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2b60() {
   return (neuron0x2d91300()*-0.0908014);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2ba0() {
   return (neuron0x2d91640()*-0.0834857);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2be0() {
   return (neuron0x2d91980()*-0.0181173);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2c20() {
   return (neuron0x2d91cc0()*0.0294693);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2c60() {
   return (neuron0x2d92000()*-0.0142272);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2ca0() {
   return (neuron0x2d92340()*-0.653001);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2ce0() {
   return (neuron0x2d92680()*0.0618724);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2d20() {
   return (neuron0x2d929c0()*0.00783687);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2d60() {
   return (neuron0x2d92d00()*0.0935539);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2da0() {
   return (neuron0x2d93040()*-0.0519442);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2830() {
   return (neuron0x2d93380()*0.00910332);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2870() {
   return (neuron0x2d938e0()*0.0714407);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2ef0() {
   return (neuron0x2d93c20()*0.041613);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2f30() {
   return (neuron0x2d93f60()*0.0137297);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2f70() {
   return (neuron0x2d942a0()*-0.0384053);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2fb0() {
   return (neuron0x2d945e0()*0.0128694);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2ff0() {
   return (neuron0x2d94920()*-0.00115441);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3030() {
   return (neuron0x2d94c60()*0.159304);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da33b0() {
   return (neuron0x2d90010()*0.65465);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da33f0() {
   return (neuron0x2d902c0()*0.408665);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3430() {
   return (neuron0x2d90600()*0.09037);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3470() {
   return (neuron0x2d90940()*0.450348);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da34b0() {
   return (neuron0x2d90c80()*0.312597);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da34f0() {
   return (neuron0x2d90fc0()*0.311389);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3530() {
   return (neuron0x2d91300()*-0.799447);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3570() {
   return (neuron0x2d91640()*0.0219527);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da35b0() {
   return (neuron0x2d91980()*0.36434);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da35f0() {
   return (neuron0x2d91cc0()*0.180893);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3630() {
   return (neuron0x2d92000()*0.104106);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3670() {
   return (neuron0x2d92340()*-0.704327);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da36b0() {
   return (neuron0x2d92680()*-0.435716);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da36f0() {
   return (neuron0x2d929c0()*-0.389142);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3730() {
   return (neuron0x2d92d00()*0.246988);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3770() {
   return (neuron0x2d93040()*0.0281699);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3200() {
   return (neuron0x2d93380()*0.233954);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3240() {
   return (neuron0x2d938e0()*0.187645);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da38c0() {
   return (neuron0x2d93c20()*-0.342362);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3900() {
   return (neuron0x2d93f60()*0.147283);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3940() {
   return (neuron0x2d942a0()*0.39673);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3980() {
   return (neuron0x2d945e0()*-0.37868);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da39c0() {
   return (neuron0x2d94920()*-0.269831);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3a00() {
   return (neuron0x2d94c60()*-0.295855);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3d80() {
   return (neuron0x2d90010()*-0.0155437);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3dc0() {
   return (neuron0x2d902c0()*-0.00282105);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3e00() {
   return (neuron0x2d90600()*-2.52737);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3e40() {
   return (neuron0x2d90940()*-0.0156643);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3e80() {
   return (neuron0x2d90c80()*-0.00499117);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3ec0() {
   return (neuron0x2d90fc0()*-0.0120473);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3f00() {
   return (neuron0x2d91300()*0.024596);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3f40() {
   return (neuron0x2d91640()*0.00504007);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3f80() {
   return (neuron0x2d91980()*0.00281367);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3fc0() {
   return (neuron0x2d91cc0()*-0.0118872);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4000() {
   return (neuron0x2d92000()*0.0020608);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4040() {
   return (neuron0x2d92340()*-0.0182764);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4080() {
   return (neuron0x2d92680()*-0.0308946);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da40c0() {
   return (neuron0x2d929c0()*-0.0387598);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4100() {
   return (neuron0x2d92d00()*0.0166589);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4140() {
   return (neuron0x2d93040()*0.0184197);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3bd0() {
   return (neuron0x2d93380()*-0.00934722);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3c10() {
   return (neuron0x2d938e0()*-0.0127956);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4290() {
   return (neuron0x2d93c20()*0.00532941);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da42d0() {
   return (neuron0x2d93f60()*0.00308454);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4310() {
   return (neuron0x2d942a0()*0.00392462);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4350() {
   return (neuron0x2d945e0()*-0.00840273);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4390() {
   return (neuron0x2d94920()*0.00284664);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da43d0() {
   return (neuron0x2d94c60()*4.32495);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4750() {
   return (neuron0x2d90010()*0.0429718);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4790() {
   return (neuron0x2d902c0()*0.00305609);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da47d0() {
   return (neuron0x2d90600()*0.124243);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4810() {
   return (neuron0x2d90940()*-0.0141103);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4850() {
   return (neuron0x2d90c80()*-0.00864224);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4890() {
   return (neuron0x2d90fc0()*0.00635511);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da48d0() {
   return (neuron0x2d91300()*-0.0388888);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4910() {
   return (neuron0x2d91640()*-0.0102455);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4950() {
   return (neuron0x2d91980()*-0.00927782);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cb10() {
   return (neuron0x2d91cc0()*0.00335507);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cb50() {
   return (neuron0x2d92000()*-0.0149607);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cb90() {
   return (neuron0x2d92340()*-6.15034);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cbd0() {
   return (neuron0x2d92680()*0.00847717);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cc10() {
   return (neuron0x2d929c0()*0.0562344);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cc50() {
   return (neuron0x2d92d00()*-0.0383798);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cc90() {
   return (neuron0x2d93040()*-0.0283557);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da45a0() {
   return (neuron0x2d93380()*0.00526631);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da45e0() {
   return (neuron0x2d938e0()*0.00402088);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cde0() {
   return (neuron0x2d93c20()*-0.0182649);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ce20() {
   return (neuron0x2d93f60()*0.0087039);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ce60() {
   return (neuron0x2d942a0()*-0.0224248);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cea0() {
   return (neuron0x2d945e0()*-0.0089142);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cee0() {
   return (neuron0x2d94920()*-0.0117032);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9cf20() {
   return (neuron0x2d94c60()*1.3255);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d2a0() {
   return (neuron0x2d90010()*0.0591196);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d2e0() {
   return (neuron0x2d902c0()*-0.00527468);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d320() {
   return (neuron0x2d90600()*0.970263);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d360() {
   return (neuron0x2d90940()*0.0372492);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d3a0() {
   return (neuron0x2d90c80()*0.000133307);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d3e0() {
   return (neuron0x2d90fc0()*-0.0177312);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d420() {
   return (neuron0x2d91300()*0.00332747);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d460() {
   return (neuron0x2d91640()*-0.00418451);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d4a0() {
   return (neuron0x2d91980()*0.00353386);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d4e0() {
   return (neuron0x2d91cc0()*0.0252147);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d520() {
   return (neuron0x2d92000()*0.029138);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d560() {
   return (neuron0x2d92340()*0.305908);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d5a0() {
   return (neuron0x2d92680()*-0.124511);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d5e0() {
   return (neuron0x2d929c0()*-0.0146732);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d620() {
   return (neuron0x2d92d00()*0.00251056);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d660() {
   return (neuron0x2d93040()*-0.06049);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d0f0() {
   return (neuron0x2d93380()*0.0109562);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d130() {
   return (neuron0x2d938e0()*-0.0439676);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d7b0() {
   return (neuron0x2d93c20()*-0.00959306);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d7f0() {
   return (neuron0x2d93f60()*-0.0266558);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d830() {
   return (neuron0x2d942a0()*0.010728);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d870() {
   return (neuron0x2d945e0()*-0.00383593);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d8b0() {
   return (neuron0x2d94920()*-0.0148002);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d8f0() {
   return (neuron0x2d94c60()*-0.540672);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9dac0() {
   return (neuron0x2d90010()*0.188696);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6b50() {
   return (neuron0x2d902c0()*0.0499971);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6b90() {
   return (neuron0x2d90600()*0.756362);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6bd0() {
   return (neuron0x2d90940()*0.535775);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6c10() {
   return (neuron0x2d90c80()*-0.0396272);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6c50() {
   return (neuron0x2d90fc0()*0.076543);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6c90() {
   return (neuron0x2d91300()*-0.09231);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6cd0() {
   return (neuron0x2d91640()*-0.209658);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6d10() {
   return (neuron0x2d91980()*-0.0157238);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6d50() {
   return (neuron0x2d91cc0()*-0.0507857);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6d90() {
   return (neuron0x2d92000()*0.0325107);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6dd0() {
   return (neuron0x2d92340()*-0.308602);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6e10() {
   return (neuron0x2d92680()*0.0944734);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6e50() {
   return (neuron0x2d929c0()*-0.0309228);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6e90() {
   return (neuron0x2d92d00()*-0.237925);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6ed0() {
   return (neuron0x2d93040()*0.245706);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da69a0() {
   return (neuron0x2d93380()*-0.152127);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da69e0() {
   return (neuron0x2d938e0()*-0.0103357);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7020() {
   return (neuron0x2d93c20()*0.0286605);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7060() {
   return (neuron0x2d93f60()*0.00707787);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da70a0() {
   return (neuron0x2d942a0()*0.0915359);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da70e0() {
   return (neuron0x2d945e0()*0.00141989);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7120() {
   return (neuron0x2d94920()*0.00642146);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7160() {
   return (neuron0x2d94c60()*0.0381239);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da74e0() {
   return (neuron0x2d90010()*-0.0125057);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7520() {
   return (neuron0x2d902c0()*0.0301362);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7560() {
   return (neuron0x2d90600()*-0.00797641);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da75a0() {
   return (neuron0x2d90940()*-2.53163);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da75e0() {
   return (neuron0x2d90c80()*-0.0343717);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7620() {
   return (neuron0x2d90fc0()*0.013148);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7660() {
   return (neuron0x2d91300()*0.012499);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da76a0() {
   return (neuron0x2d91640()*0.0293317);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da76e0() {
   return (neuron0x2d91980()*-0.011236);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7720() {
   return (neuron0x2d91cc0()*0.00761485);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7760() {
   return (neuron0x2d92000()*-0.0014765);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da77a0() {
   return (neuron0x2d92340()*-0.157811);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da77e0() {
   return (neuron0x2d92680()*-0.0159471);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7820() {
   return (neuron0x2d929c0()*-0.0740602);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7860() {
   return (neuron0x2d92d00()*0.00216307);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da78a0() {
   return (neuron0x2d93040()*0.0436976);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7330() {
   return (neuron0x2d93380()*-0.0273342);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7370() {
   return (neuron0x2d938e0()*0.00274439);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da79f0() {
   return (neuron0x2d93c20()*-0.0199556);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7a30() {
   return (neuron0x2d93f60()*0.00503542);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7a70() {
   return (neuron0x2d942a0()*0.00929855);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7ab0() {
   return (neuron0x2d945e0()*0.000535694);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7af0() {
   return (neuron0x2d94920()*-0.000704903);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7b30() {
   return (neuron0x2d94c60()*-0.0253302);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7eb0() {
   return (neuron0x2d90010()*-0.0685717);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7ef0() {
   return (neuron0x2d902c0()*0.0438292);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7f30() {
   return (neuron0x2d90600()*-0.0738838);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7f70() {
   return (neuron0x2d90940()*-0.0581332);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7fb0() {
   return (neuron0x2d90c80()*0.000231711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7ff0() {
   return (neuron0x2d90fc0()*-0.0452783);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8030() {
   return (neuron0x2d91300()*0.00696144);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8070() {
   return (neuron0x2d91640()*0.0112472);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da80b0() {
   return (neuron0x2d91980()*-0.000823528);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da80f0() {
   return (neuron0x2d91cc0()*-0.0252692);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8130() {
   return (neuron0x2d92000()*-0.0228535);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8170() {
   return (neuron0x2d92340()*2.23346);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da81b0() {
   return (neuron0x2d92680()*0.0493185);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da81f0() {
   return (neuron0x2d929c0()*0.0329478);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8230() {
   return (neuron0x2d92d00()*-0.0264356);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8270() {
   return (neuron0x2d93040()*-0.044388);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7d00() {
   return (neuron0x2d93380()*0.0685578);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7d40() {
   return (neuron0x2d938e0()*-0.0530586);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da83c0() {
   return (neuron0x2d93c20()*-0.0315863);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8400() {
   return (neuron0x2d93f60()*0.014001);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8440() {
   return (neuron0x2d942a0()*0.0324192);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8480() {
   return (neuron0x2d945e0()*0.0274661);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da84c0() {
   return (neuron0x2d94920()*0.0191491);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8500() {
   return (neuron0x2d94c60()*-2.29861);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8880() {
   return (neuron0x2d90010()*-0.140892);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da88c0() {
   return (neuron0x2d902c0()*-0.00903587);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8900() {
   return (neuron0x2d90600()*1.83546);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8940() {
   return (neuron0x2d90940()*-0.0536244);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8980() {
   return (neuron0x2d90c80()*-0.0127767);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da89c0() {
   return (neuron0x2d90fc0()*-0.00330792);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8a00() {
   return (neuron0x2d91300()*0.0248974);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8a40() {
   return (neuron0x2d91640()*0.00616758);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8a80() {
   return (neuron0x2d91980()*-0.0251694);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8ac0() {
   return (neuron0x2d91cc0()*0.00568033);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8b00() {
   return (neuron0x2d92000()*0.0145314);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8b40() {
   return (neuron0x2d92340()*-0.217167);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8b80() {
   return (neuron0x2d92680()*0.00167364);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8bc0() {
   return (neuron0x2d929c0()*-0.014372);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8c00() {
   return (neuron0x2d92d00()*-0.000761058);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8c40() {
   return (neuron0x2d93040()*-0.0243932);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da86d0() {
   return (neuron0x2d93380()*0.00464295);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8710() {
   return (neuron0x2d938e0()*0.00291792);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8d90() {
   return (neuron0x2d93c20()*-0.0233285);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8dd0() {
   return (neuron0x2d93f60()*-0.0213584);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8e10() {
   return (neuron0x2d942a0()*0.00535094);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8e50() {
   return (neuron0x2d945e0()*-0.0100002);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8e90() {
   return (neuron0x2d94920()*-0.00933889);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8ed0() {
   return (neuron0x2d94c60()*-3.1301);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9250() {
   return (neuron0x2d90010()*0.023099);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9290() {
   return (neuron0x2d902c0()*0.00259166);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da92d0() {
   return (neuron0x2d90600()*0.984874);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9310() {
   return (neuron0x2d90940()*0.0334099);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9350() {
   return (neuron0x2d90c80()*-0.0258637);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9390() {
   return (neuron0x2d90fc0()*-0.00278123);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da93d0() {
   return (neuron0x2d91300()*0.0278367);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9410() {
   return (neuron0x2d91640()*0.00432722);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9450() {
   return (neuron0x2d91980()*0.00581299);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9490() {
   return (neuron0x2d91cc0()*0.0105999);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da94d0() {
   return (neuron0x2d92000()*0.0136409);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9510() {
   return (neuron0x2d92340()*0.674799);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9550() {
   return (neuron0x2d92680()*-0.0564637);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9590() {
   return (neuron0x2d929c0()*-0.00651915);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da95d0() {
   return (neuron0x2d92d00()*-0.0183821);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9610() {
   return (neuron0x2d93040()*-0.0425057);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da90a0() {
   return (neuron0x2d93380()*-0.0090883);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da90e0() {
   return (neuron0x2d938e0()*-0.0376639);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9760() {
   return (neuron0x2d93c20()*-0.0319083);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da97a0() {
   return (neuron0x2d93f60()*-0.0194342);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da97e0() {
   return (neuron0x2d942a0()*0.0235969);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9820() {
   return (neuron0x2d945e0()*-0.00203145);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9860() {
   return (neuron0x2d94920()*-0.0121532);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da98a0() {
   return (neuron0x2d94c60()*1.42103);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9c20() {
   return (neuron0x2d90010()*0.160543);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9c60() {
   return (neuron0x2d902c0()*-0.0338776);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9ca0() {
   return (neuron0x2d90600()*-0.272086);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9ce0() {
   return (neuron0x2d90940()*0.0518872);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9d20() {
   return (neuron0x2d90c80()*-0.0332358);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9d60() {
   return (neuron0x2d90fc0()*0.0706373);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9da0() {
   return (neuron0x2d91300()*0.0257116);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9de0() {
   return (neuron0x2d91640()*0.0450664);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9e20() {
   return (neuron0x2d91980()*0.0265136);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9e60() {
   return (neuron0x2d91cc0()*0.0309654);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9ea0() {
   return (neuron0x2d92000()*0.0279006);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9ee0() {
   return (neuron0x2d92340()*0.811093);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9f20() {
   return (neuron0x2d92680()*0.00505506);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9f60() {
   return (neuron0x2d929c0()*-0.0187116);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9fa0() {
   return (neuron0x2d92d00()*0.00553691);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9fe0() {
   return (neuron0x2d93040()*-0.0255033);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9a70() {
   return (neuron0x2d93380()*0.0102161);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9ab0() {
   return (neuron0x2d938e0()*0.00767571);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa130() {
   return (neuron0x2d93c20()*0.0240675);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa170() {
   return (neuron0x2d93f60()*-0.00519299);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa1b0() {
   return (neuron0x2d942a0()*0.0124607);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa1f0() {
   return (neuron0x2d945e0()*-0.0401241);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa230() {
   return (neuron0x2d94920()*-0.0273992);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa270() {
   return (neuron0x2d94c60()*1.86583);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa5f0() {
   return (neuron0x2d90010()*-0.00409423);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa630() {
   return (neuron0x2d902c0()*0.0680633);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa670() {
   return (neuron0x2d90600()*0.698249);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa6b0() {
   return (neuron0x2d90940()*1.70018);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa6f0() {
   return (neuron0x2d90c80()*0.0215292);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa730() {
   return (neuron0x2d90fc0()*-0.0540674);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa770() {
   return (neuron0x2d91300()*-0.314022);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa7b0() {
   return (neuron0x2d91640()*-0.19316);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa7f0() {
   return (neuron0x2d91980()*-0.0624268);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa830() {
   return (neuron0x2d91cc0()*0.0904009);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa870() {
   return (neuron0x2d92000()*0.147773);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa8b0() {
   return (neuron0x2d92340()*1.04401);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa8f0() {
   return (neuron0x2d92680()*0.117676);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa930() {
   return (neuron0x2d929c0()*-0.0965503);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa970() {
   return (neuron0x2d92d00()*0.120133);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa9b0() {
   return (neuron0x2d93040()*0.0888256);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa440() {
   return (neuron0x2d93380()*-0.143676);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daa480() {
   return (neuron0x2d938e0()*0.114595);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daab00() {
   return (neuron0x2d93c20()*-0.114813);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daab40() {
   return (neuron0x2d93f60()*0.00868291);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daab80() {
   return (neuron0x2d942a0()*0.0992298);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daabc0() {
   return (neuron0x2d945e0()*0.0771737);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daac00() {
   return (neuron0x2d94920()*0.00476027);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daac40() {
   return (neuron0x2d94c60()*1.12019);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daafc0() {
   return (neuron0x2d90010()*-0.477215);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab000() {
   return (neuron0x2d902c0()*-0.17859);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab040() {
   return (neuron0x2d90600()*0.893252);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab080() {
   return (neuron0x2d90940()*-0.0707393);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab0c0() {
   return (neuron0x2d90c80()*-0.0146993);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab100() {
   return (neuron0x2d90fc0()*-0.25063);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab140() {
   return (neuron0x2d91300()*-0.352918);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab180() {
   return (neuron0x2d91640()*-0.0623852);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab1c0() {
   return (neuron0x2d91980()*-0.176603);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab200() {
   return (neuron0x2d91cc0()*0.06948);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab240() {
   return (neuron0x2d92000()*0.0123013);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab280() {
   return (neuron0x2d92340()*-1.9789);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab2c0() {
   return (neuron0x2d92680()*0.463113);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab300() {
   return (neuron0x2d929c0()*0.133289);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab340() {
   return (neuron0x2d92d00()*-0.167722);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab380() {
   return (neuron0x2d93040()*-0.295525);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daae10() {
   return (neuron0x2d93380()*0.186833);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daae50() {
   return (neuron0x2d938e0()*0.0634618);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab4d0() {
   return (neuron0x2d93c20()*-0.149356);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab510() {
   return (neuron0x2d93f60()*-0.259751);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab550() {
   return (neuron0x2d942a0()*0.225401);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab590() {
   return (neuron0x2d945e0()*-0.105135);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab5d0() {
   return (neuron0x2d94920()*-0.167069);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab610() {
   return (neuron0x2d94c60()*0.3741);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab990() {
   return (neuron0x2d90010()*-0.0715845);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ff60() {
   return (neuron0x2d902c0()*0.021513);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ffa0() {
   return (neuron0x2d90600()*0.384177);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9ffe0() {
   return (neuron0x2d90940()*-0.311224);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0230() {
   return (neuron0x2d90c80()*-0.0659022);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0270() {
   return (neuron0x2d90fc0()*-0.00352815);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da02b0() {
   return (neuron0x2d91300()*0.217034);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0500() {
   return (neuron0x2d91640()*0.25391);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0540() {
   return (neuron0x2d91980()*-0.0609553);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0790() {
   return (neuron0x2d91cc0()*-0.00567365);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da07d0() {
   return (neuron0x2d92000()*0.0240155);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0810() {
   return (neuron0x2d92340()*-0.953472);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0a60() {
   return (neuron0x2d92680()*0.508016);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0aa0() {
   return (neuron0x2d929c0()*-0.850751);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0cf0() {
   return (neuron0x2d92d00()*0.598232);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0d30() {
   return (neuron0x2d93040()*0.75106);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab7e0() {
   return (neuron0x2d93380()*-0.402464);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab820() {
   return (neuron0x2d938e0()*0.388357);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0e80() {
   return (neuron0x2d93c20()*0.236104);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1390() {
   return (neuron0x2d93f60()*0.076812);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da13d0() {
   return (neuron0x2d942a0()*0.0257818);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1410() {
   return (neuron0x2d945e0()*0.00250723);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1660() {
   return (neuron0x2d94920()*0.022053);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da16a0() {
   return (neuron0x2d94c60()*-0.328989);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0f50() {
   return (neuron0x2d90010()*-0.0512942);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0f90() {
   return (neuron0x2d902c0()*-0.00718229);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0fd0() {
   return (neuron0x2d90600()*1.73137);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1010() {
   return (neuron0x2d90940()*-0.0169568);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1990() {
   return (neuron0x2d90c80()*0.0154326);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadce0() {
   return (neuron0x2d90fc0()*-0.00956363);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadd20() {
   return (neuron0x2d91300()*0.0124399);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadd60() {
   return (neuron0x2d91640()*-0.0116797);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadda0() {
   return (neuron0x2d91980()*0.015821);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadde0() {
   return (neuron0x2d91cc0()*0.0208447);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dade20() {
   return (neuron0x2d92000()*0.0106656);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dade60() {
   return (neuron0x2d92340()*-0.0391105);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadea0() {
   return (neuron0x2d92680()*-0.0432905);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadee0() {
   return (neuron0x2d929c0()*0.0150241);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadf20() {
   return (neuron0x2d92d00()*0.0243787);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dadf60() {
   return (neuron0x2d93040()*0.0195108);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1870() {
   return (neuron0x2d93380()*0.00204416);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da18b0() {
   return (neuron0x2d938e0()*-0.000122521);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae0b0() {
   return (neuron0x2d93c20()*-0.00979547);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae0f0() {
   return (neuron0x2d93f60()*-0.00870566);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae130() {
   return (neuron0x2d942a0()*-0.0118832);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae170() {
   return (neuron0x2d945e0()*0.0215377);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae1b0() {
   return (neuron0x2d94920()*-0.0107928);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae1f0() {
   return (neuron0x2d94c60()*-13.8167);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae570() {
   return (neuron0x2d90010()*0.110518);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae5b0() {
   return (neuron0x2d902c0()*0.0421766);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae5f0() {
   return (neuron0x2d90600()*1.22618);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae630() {
   return (neuron0x2d90940()*0.100443);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae670() {
   return (neuron0x2d90c80()*-0.0235351);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae6b0() {
   return (neuron0x2d90fc0()*-0.0380922);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae6f0() {
   return (neuron0x2d91300()*0.00839212);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae730() {
   return (neuron0x2d91640()*0.0903354);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae770() {
   return (neuron0x2d91980()*-0.0692471);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae7b0() {
   return (neuron0x2d91cc0()*0.0475627);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae7f0() {
   return (neuron0x2d92000()*0.0385419);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae830() {
   return (neuron0x2d92340()*-0.217549);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae870() {
   return (neuron0x2d92680()*-1.91194);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae8b0() {
   return (neuron0x2d929c0()*0.0191534);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae8f0() {
   return (neuron0x2d92d00()*-0.0302848);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae930() {
   return (neuron0x2d93040()*-0.136247);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae3c0() {
   return (neuron0x2d93380()*0.0357667);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae400() {
   return (neuron0x2d938e0()*-0.116202);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daea80() {
   return (neuron0x2d93c20()*-0.17413);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daeac0() {
   return (neuron0x2d93f60()*-0.062599);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daeb00() {
   return (neuron0x2d942a0()*-0.0612056);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daeb40() {
   return (neuron0x2d945e0()*-0.0786446);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daeb80() {
   return (neuron0x2d94920()*-0.062539);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daebc0() {
   return (neuron0x2d94c60()*0.155227);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daef40() {
   return (neuron0x2d90010()*-0.0903758);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daef80() {
   return (neuron0x2d902c0()*-0.000385244);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daefc0() {
   return (neuron0x2d90600()*-0.0117617);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf000() {
   return (neuron0x2d90940()*-0.0275714);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf040() {
   return (neuron0x2d90c80()*0.00858005);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf080() {
   return (neuron0x2d90fc0()*-0.00220195);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf0c0() {
   return (neuron0x2d91300()*0.0126945);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf100() {
   return (neuron0x2d91640()*0.00998565);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf140() {
   return (neuron0x2d91980()*0.00123325);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf180() {
   return (neuron0x2d91cc0()*-0.0001357);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf1c0() {
   return (neuron0x2d92000()*0.00389706);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf200() {
   return (neuron0x2d92340()*0.0132727);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf240() {
   return (neuron0x2d92680()*-0.0198261);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf280() {
   return (neuron0x2d929c0()*-0.0233118);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf2c0() {
   return (neuron0x2d92d00()*0.00177379);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf300() {
   return (neuron0x2d93040()*0.00127452);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daed90() {
   return (neuron0x2d93380()*-0.00387254);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daedd0() {
   return (neuron0x2d938e0()*-0.00669757);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf450() {
   return (neuron0x2d93c20()*0.00806234);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf490() {
   return (neuron0x2d93f60()*-0.00571824);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf4d0() {
   return (neuron0x2d942a0()*-0.00236212);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf510() {
   return (neuron0x2d945e0()*-0.000613649);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf550() {
   return (neuron0x2d94920()*-0.0011107);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf590() {
   return (neuron0x2d94c60()*-1.23154);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf910() {
   return (neuron0x2d90010()*0.0090822);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf950() {
   return (neuron0x2d902c0()*-0.0068601);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf990() {
   return (neuron0x2d90600()*-0.519656);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf9d0() {
   return (neuron0x2d90940()*0.00507514);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafa10() {
   return (neuron0x2d90c80()*-0.00699083);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafa50() {
   return (neuron0x2d90fc0()*0.00170402);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafa90() {
   return (neuron0x2d91300()*-0.00915784);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafad0() {
   return (neuron0x2d91640()*-0.00592445);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafb10() {
   return (neuron0x2d91980()*-0.0113453);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafb50() {
   return (neuron0x2d91cc0()*-0.0143164);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafb90() {
   return (neuron0x2d92000()*-0.00597383);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafbd0() {
   return (neuron0x2d92340()*-0.0319719);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafc10() {
   return (neuron0x2d92680()*0.0329746);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafc50() {
   return (neuron0x2d929c0()*-0.00043228);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafc90() {
   return (neuron0x2d92d00()*-0.00501195);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafcd0() {
   return (neuron0x2d93040()*0.00400878);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf760() {
   return (neuron0x2d93380()*-0.0204734);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf7a0() {
   return (neuron0x2d938e0()*0.0141414);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafe20() {
   return (neuron0x2d93c20()*-0.00261911);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafe60() {
   return (neuron0x2d93f60()*0.00581121);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafea0() {
   return (neuron0x2d942a0()*0.00283835);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dafee0() {
   return (neuron0x2d945e0()*-0.00552147);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daff20() {
   return (neuron0x2d94920()*0.0123166);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daff60() {
   return (neuron0x2d94c60()*0.473628);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db02e0() {
   return (neuron0x2d90010()*-0.102278);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0320() {
   return (neuron0x2d902c0()*-0.459352);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0360() {
   return (neuron0x2d90600()*-0.328892);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db03a0() {
   return (neuron0x2d90940()*0.0856251);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db03e0() {
   return (neuron0x2d90c80()*0.414018);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0420() {
   return (neuron0x2d90fc0()*0.239405);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0460() {
   return (neuron0x2d91300()*0.282156);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db04a0() {
   return (neuron0x2d91640()*0.244773);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db04e0() {
   return (neuron0x2d91980()*-0.840549);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0520() {
   return (neuron0x2d91cc0()*-0.268014);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0560() {
   return (neuron0x2d92000()*-0.25057);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db05a0() {
   return (neuron0x2d92340()*-0.373667);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db05e0() {
   return (neuron0x2d92680()*-0.341999);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0620() {
   return (neuron0x2d929c0()*-0.154634);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0660() {
   return (neuron0x2d92d00()*-0.433331);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db06a0() {
   return (neuron0x2d93040()*0.342259);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0130() {
   return (neuron0x2d93380()*-0.227029);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0170() {
   return (neuron0x2d938e0()*0.662);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db07f0() {
   return (neuron0x2d93c20()*0.931077);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0830() {
   return (neuron0x2d93f60()*0.547998);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0870() {
   return (neuron0x2d942a0()*0.091011);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db08b0() {
   return (neuron0x2d945e0()*0.346075);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db08f0() {
   return (neuron0x2d94920()*1.28462);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0930() {
   return (neuron0x2d94c60()*-0.171768);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0cb0() {
   return (neuron0x2d90010()*0.0085527);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0cf0() {
   return (neuron0x2d902c0()*0.041547);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0d30() {
   return (neuron0x2d90600()*0.00973765);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0d70() {
   return (neuron0x2d90940()*-1.95711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0db0() {
   return (neuron0x2d90c80()*-0.0487915);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0df0() {
   return (neuron0x2d90fc0()*0.0373543);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0e30() {
   return (neuron0x2d91300()*-0.00675095);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0e70() {
   return (neuron0x2d91640()*-0.0115878);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0eb0() {
   return (neuron0x2d91980()*0.00731783);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0ef0() {
   return (neuron0x2d91cc0()*0.00630654);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0f30() {
   return (neuron0x2d92000()*-0.00939711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0f70() {
   return (neuron0x2d92340()*1.6478);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0fb0() {
   return (neuron0x2d92680()*-0.0318365);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0ff0() {
   return (neuron0x2d929c0()*-0.0303109);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1030() {
   return (neuron0x2d92d00()*-0.0474512);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1070() {
   return (neuron0x2d93040()*0.0610331);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0b00() {
   return (neuron0x2d93380()*-0.0255741);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0b40() {
   return (neuron0x2d938e0()*-0.00912768);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db11c0() {
   return (neuron0x2d93c20()*-0.0307528);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1200() {
   return (neuron0x2d93f60()*0.0209235);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1240() {
   return (neuron0x2d942a0()*0.032536);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1280() {
   return (neuron0x2d945e0()*-0.00818175);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db12c0() {
   return (neuron0x2d94920()*-0.0173124);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1300() {
   return (neuron0x2d94c60()*-0.110747);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1680() {
   return (neuron0x2d90010()*0.151373);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db16c0() {
   return (neuron0x2d902c0()*-0.0178106);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1700() {
   return (neuron0x2d90600()*-0.394936);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1740() {
   return (neuron0x2d90940()*0.0654123);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1780() {
   return (neuron0x2d90c80()*0.0218288);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db17c0() {
   return (neuron0x2d90fc0()*0.00927252);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1800() {
   return (neuron0x2d91300()*-0.0274696);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1840() {
   return (neuron0x2d91640()*0.000361319);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1880() {
   return (neuron0x2d91980()*0.00226);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db18c0() {
   return (neuron0x2d91cc0()*0.0363726);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1900() {
   return (neuron0x2d92000()*-0.00769014);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1940() {
   return (neuron0x2d92340()*-1.04878);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1980() {
   return (neuron0x2d92680()*0.0392048);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db19c0() {
   return (neuron0x2d929c0()*-0.00924296);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1a00() {
   return (neuron0x2d92d00()*0.0235268);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1a40() {
   return (neuron0x2d93040()*0.0179912);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db14d0() {
   return (neuron0x2d93380()*0.0215897);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1510() {
   return (neuron0x2d938e0()*0.0323847);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1b90() {
   return (neuron0x2d93c20()*0.0288993);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1bd0() {
   return (neuron0x2d93f60()*0.00250604);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1c10() {
   return (neuron0x2d942a0()*-0.0178912);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1c50() {
   return (neuron0x2d945e0()*-0.00242566);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1c90() {
   return (neuron0x2d94920()*-0.00623181);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1cd0() {
   return (neuron0x2d94c60()*-0.127724);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2050() {
   return (neuron0x2d90010()*0.0543402);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2090() {
   return (neuron0x2d902c0()*0.0599221);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db20d0() {
   return (neuron0x2d90600()*0.241712);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2110() {
   return (neuron0x2d90940()*-0.513494);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2150() {
   return (neuron0x2d90c80()*-0.119439);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2190() {
   return (neuron0x2d90fc0()*-0.0227624);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db21d0() {
   return (neuron0x2d91300()*0.163027);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2210() {
   return (neuron0x2d91640()*0.141546);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2250() {
   return (neuron0x2d91980()*-0.0146186);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2290() {
   return (neuron0x2d91cc0()*-0.029736);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db22d0() {
   return (neuron0x2d92000()*0.00736331);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2310() {
   return (neuron0x2d92340()*-2.15534);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2350() {
   return (neuron0x2d92680()*-0.199702);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2390() {
   return (neuron0x2d929c0()*0.127987);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db23d0() {
   return (neuron0x2d92d00()*-0.157137);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2410() {
   return (neuron0x2d93040()*0.0239991);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1ea0() {
   return (neuron0x2d93380()*0.170462);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1ee0() {
   return (neuron0x2d938e0()*-0.0851034);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2560() {
   return (neuron0x2d93c20()*-0.0601237);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db25a0() {
   return (neuron0x2d93f60()*-0.012724);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db25e0() {
   return (neuron0x2d942a0()*-0.0520147);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2620() {
   return (neuron0x2d945e0()*0.000617338);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2660() {
   return (neuron0x2d94920()*0.0389473);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db26a0() {
   return (neuron0x2d94c60()*-0.0749615);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b150() {
   return (neuron0x2d90010()*-0.00738149);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b190() {
   return (neuron0x2d902c0()*0.0216998);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b1d0() {
   return (neuron0x2d90600()*-0.030929);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b210() {
   return (neuron0x2d90940()*2.29547);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b250() {
   return (neuron0x2d90c80()*-0.0319896);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b290() {
   return (neuron0x2d90fc0()*0.0159756);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b2d0() {
   return (neuron0x2d91300()*0.00070679);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b310() {
   return (neuron0x2d91640()*0.010223);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2e30() {
   return (neuron0x2d91980()*0.000549316);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2e70() {
   return (neuron0x2d91cc0()*-0.00289988);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2eb0() {
   return (neuron0x2d92000()*0.00773808);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2ef0() {
   return (neuron0x2d92340()*-0.456002);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2f30() {
   return (neuron0x2d92680()*0.00816622);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2f70() {
   return (neuron0x2d929c0()*-0.0627177);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2fb0() {
   return (neuron0x2d92d00()*-0.00515066);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2ff0() {
   return (neuron0x2d93040()*0.0527787);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2870() {
   return (neuron0x2d93380()*-0.0366206);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db28b0() {
   return (neuron0x2d938e0()*0.0109673);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3140() {
   return (neuron0x2d93c20()*-0.00167425);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3180() {
   return (neuron0x2d93f60()*0.00336442);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db31c0() {
   return (neuron0x2d942a0()*0.0163042);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3200() {
   return (neuron0x2d945e0()*-0.0092656);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3240() {
   return (neuron0x2d94920()*0.00043285);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3280() {
   return (neuron0x2d94c60()*-0.0241459);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3600() {
   return (neuron0x2d90010()*-0.933271);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3640() {
   return (neuron0x2d902c0()*-0.018918);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3680() {
   return (neuron0x2d90600()*-0.0171161);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db36c0() {
   return (neuron0x2d90940()*-0.0636705);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3700() {
   return (neuron0x2d90c80()*0.0113578);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3740() {
   return (neuron0x2d90fc0()*0.0336746);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3780() {
   return (neuron0x2d91300()*-0.00765118);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db37c0() {
   return (neuron0x2d91640()*0.0194914);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3800() {
   return (neuron0x2d91980()*-0.0258588);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3840() {
   return (neuron0x2d91cc0()*-0.00908133);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3880() {
   return (neuron0x2d92000()*-0.0222653);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db38c0() {
   return (neuron0x2d92340()*-0.059187);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3900() {
   return (neuron0x2d92680()*-0.0110285);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3940() {
   return (neuron0x2d929c0()*-0.0171556);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3980() {
   return (neuron0x2d92d00()*-0.019997);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db39c0() {
   return (neuron0x2d93040()*0.00175685);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3450() {
   return (neuron0x2d93380()*-0.0360114);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3490() {
   return (neuron0x2d938e0()*0.0119135);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3b10() {
   return (neuron0x2d93c20()*0.0223157);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3b50() {
   return (neuron0x2d93f60()*-0.0104907);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3b90() {
   return (neuron0x2d942a0()*-0.00144256);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3bd0() {
   return (neuron0x2d945e0()*0.00750114);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3c10() {
   return (neuron0x2d94920()*0.00604027);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3c50() {
   return (neuron0x2d94c60()*1.31221);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3fd0() {
   return (neuron0x2d90010()*-0.949783);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4010() {
   return (neuron0x2d902c0()*-0.0190703);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4050() {
   return (neuron0x2d90600()*0.0163034);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4090() {
   return (neuron0x2d90940()*-0.0169832);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db40d0() {
   return (neuron0x2d90c80()*0.0122714);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4110() {
   return (neuron0x2d90fc0()*0.0249623);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4150() {
   return (neuron0x2d91300()*0.00155838);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4190() {
   return (neuron0x2d91640()*0.00644676);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db41d0() {
   return (neuron0x2d91980()*-0.0117955);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4210() {
   return (neuron0x2d91cc0()*-0.00833338);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4250() {
   return (neuron0x2d92000()*0.00265967);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4290() {
   return (neuron0x2d92340()*0.172523);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db42d0() {
   return (neuron0x2d92680()*-0.00913762);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4310() {
   return (neuron0x2d929c0()*-0.0207191);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4350() {
   return (neuron0x2d92d00()*-0.0330611);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db4390() {
   return (neuron0x2d93040()*0.00102668);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3e20() {
   return (neuron0x2d93380()*-0.00552636);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3e60() {
   return (neuron0x2d938e0()*-0.00972856);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4990() {
   return (neuron0x2d93c20()*-0.00689486);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da49d0() {
   return (neuron0x2d93f60()*-0.00837219);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4a10() {
   return (neuron0x2d942a0()*0.0145069);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4a50() {
   return (neuron0x2d945e0()*0.0130942);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4a90() {
   return (neuron0x2d94920()*-0.00294744);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4ad0() {
   return (neuron0x2d94c60()*-0.902262);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4e50() {
   return (neuron0x2d90010()*0.10706);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4e90() {
   return (neuron0x2d902c0()*0.113357);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4ed0() {
   return (neuron0x2d90600()*3.06095);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4f10() {
   return (neuron0x2d90940()*0.562025);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4f50() {
   return (neuron0x2d90c80()*-0.0555644);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4f90() {
   return (neuron0x2d90fc0()*0.0663031);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4fd0() {
   return (neuron0x2d91300()*0.0467565);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5010() {
   return (neuron0x2d91640()*0.0562852);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5050() {
   return (neuron0x2d91980()*-0.122645);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5090() {
   return (neuron0x2d91cc0()*0.0628405);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da50d0() {
   return (neuron0x2d92000()*0.00230403);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5110() {
   return (neuron0x2d92340()*-1.32817);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5150() {
   return (neuron0x2d92680()*-0.0479802);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5190() {
   return (neuron0x2d929c0()*0.316032);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da51d0() {
   return (neuron0x2d92d00()*-0.277275);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5210() {
   return (neuron0x2d93040()*0.104711);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4ca0() {
   return (neuron0x2d93380()*0.192951);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4ce0() {
   return (neuron0x2d938e0()*-0.145896);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5360() {
   return (neuron0x2d93c20()*0.0218436);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da53a0() {
   return (neuron0x2d93f60()*-0.0954449);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da53e0() {
   return (neuron0x2d942a0()*0.170009);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5420() {
   return (neuron0x2d945e0()*-0.0104243);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5460() {
   return (neuron0x2d94920()*-0.0422675);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da54a0() {
   return (neuron0x2d94c60()*0.641419);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5820() {
   return (neuron0x2d90010()*0.0324901);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5860() {
   return (neuron0x2d902c0()*-0.0350295);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da58a0() {
   return (neuron0x2d90600()*-0.0348912);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da58e0() {
   return (neuron0x2d90940()*-1.87338);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5920() {
   return (neuron0x2d90c80()*0.0607898);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5960() {
   return (neuron0x2d90fc0()*-0.0312368);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da59a0() {
   return (neuron0x2d91300()*-0.0608332);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da59e0() {
   return (neuron0x2d91640()*-0.0782623);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5a20() {
   return (neuron0x2d91980()*0.0136068);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5a60() {
   return (neuron0x2d91cc0()*0.00518967);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5aa0() {
   return (neuron0x2d92000()*-0.00381361);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5ae0() {
   return (neuron0x2d92340()*-0.848677);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5b20() {
   return (neuron0x2d92680()*0.0778973);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5b60() {
   return (neuron0x2d929c0()*0.0135122);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5ba0() {
   return (neuron0x2d92d00()*0.0239791);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5be0() {
   return (neuron0x2d93040()*-0.0666407);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5670() {
   return (neuron0x2d93380()*-0.0353282);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da56b0() {
   return (neuron0x2d938e0()*0.0348985);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5d30() {
   return (neuron0x2d93c20()*0.0581412);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5d70() {
   return (neuron0x2d93f60()*-0.0105103);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5db0() {
   return (neuron0x2d942a0()*-0.012899);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5df0() {
   return (neuron0x2d945e0()*0.0130593);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5e30() {
   return (neuron0x2d94920()*-0.0131156);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5e70() {
   return (neuron0x2d94c60()*0.269913);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da61f0() {
   return (neuron0x2d90010()*0.0550754);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6230() {
   return (neuron0x2d902c0()*0.761573);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6270() {
   return (neuron0x2d90600()*-0.3009);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da62b0() {
   return (neuron0x2d90940()*-0.78422);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da62f0() {
   return (neuron0x2d90c80()*-0.283402);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6330() {
   return (neuron0x2d90fc0()*-0.431401);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6370() {
   return (neuron0x2d91300()*0.638135);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da63b0() {
   return (neuron0x2d91640()*-0.136923);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da63f0() {
   return (neuron0x2d91980()*0.126801);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6430() {
   return (neuron0x2d91cc0()*0.155931);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6470() {
   return (neuron0x2d92000()*0.211896);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da64b0() {
   return (neuron0x2d92340()*0.156485);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da64f0() {
   return (neuron0x2d92680()*-0.331749);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6530() {
   return (neuron0x2d929c0()*-0.858511);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6570() {
   return (neuron0x2d92d00()*0.375107);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da65b0() {
   return (neuron0x2d93040()*-0.113986);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6040() {
   return (neuron0x2d93380()*0.243327);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6080() {
   return (neuron0x2d938e0()*-0.226971);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6700() {
   return (neuron0x2d93c20()*-0.493481);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6740() {
   return (neuron0x2d93f60()*-0.503367);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6780() {
   return (neuron0x2d942a0()*0.751495);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da67c0() {
   return (neuron0x2d945e0()*-0.169816);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6800() {
   return (neuron0x2d94920()*-0.0109715);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6840() {
   return (neuron0x2d94c60()*-0.0111155);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8710() {
   return (neuron0x2d90010()*0.0810658);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8750() {
   return (neuron0x2d902c0()*0.0014937);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8790() {
   return (neuron0x2d90600()*-0.912308);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db87d0() {
   return (neuron0x2d90940()*0.0424862);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8810() {
   return (neuron0x2d90c80()*0.00229718);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8850() {
   return (neuron0x2d90fc0()*-0.00324538);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8890() {
   return (neuron0x2d91300()*-0.00555667);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db88d0() {
   return (neuron0x2d91640()*0.00145376);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8910() {
   return (neuron0x2d91980()*0.00609015);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8950() {
   return (neuron0x2d91cc0()*-0.00269342);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8990() {
   return (neuron0x2d92000()*0.00202552);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db89d0() {
   return (neuron0x2d92340()*0.570235);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8a10() {
   return (neuron0x2d92680()*-0.0550276);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8a50() {
   return (neuron0x2d929c0()*0.00756358);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8a90() {
   return (neuron0x2d92d00()*-0.00597034);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8ad0() {
   return (neuron0x2d93040()*-0.00531799);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6880() {
   return (neuron0x2d93380()*0.0142249);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da68c0() {
   return (neuron0x2d938e0()*-0.0151377);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8c20() {
   return (neuron0x2d93c20()*-0.0165844);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8c60() {
   return (neuron0x2d93f60()*-0.00454939);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8ca0() {
   return (neuron0x2d942a0()*0.0029399);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8ce0() {
   return (neuron0x2d945e0()*0.0118799);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8d20() {
   return (neuron0x2d94920()*0.00299074);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8d60() {
   return (neuron0x2d94c60()*-2.43609);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db90e0() {
   return (neuron0x2d90010()*0.291942);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9120() {
   return (neuron0x2d902c0()*-0.00469081);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9160() {
   return (neuron0x2d90600()*0.24886);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db91a0() {
   return (neuron0x2d90940()*0.188698);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db91e0() {
   return (neuron0x2d90c80()*-0.262997);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9220() {
   return (neuron0x2d90fc0()*0.276456);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9260() {
   return (neuron0x2d91300()*-0.36012);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db92a0() {
   return (neuron0x2d91640()*-0.430743);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db92e0() {
   return (neuron0x2d91980()*0.166131);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9320() {
   return (neuron0x2d91cc0()*-0.372766);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9360() {
   return (neuron0x2d92000()*0.589916);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db93a0() {
   return (neuron0x2d92340()*0.30676);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db93e0() {
   return (neuron0x2d92680()*-0.348832);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9420() {
   return (neuron0x2d929c0()*0.755873);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9460() {
   return (neuron0x2d92d00()*-0.148682);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db94a0() {
   return (neuron0x2d93040()*0.814967);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8f30() {
   return (neuron0x2d93380()*-0.0916791);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8f70() {
   return (neuron0x2d938e0()*0.233993);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db95f0() {
   return (neuron0x2d93c20()*-0.0907073);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9630() {
   return (neuron0x2d93f60()*0.48752);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9670() {
   return (neuron0x2d942a0()*0.330272);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db96b0() {
   return (neuron0x2d945e0()*-1.05792);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db96f0() {
   return (neuron0x2d94920()*0.313545);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9730() {
   return (neuron0x2d94c60()*-0.188221);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9ab0() {
   return (neuron0x2d90010()*0.00365026);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9af0() {
   return (neuron0x2d902c0()*-0.00350514);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9b30() {
   return (neuron0x2d90600()*-3.00316);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9b70() {
   return (neuron0x2d90940()*-0.00958591);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9bb0() {
   return (neuron0x2d90c80()*-0.00804139);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9bf0() {
   return (neuron0x2d90fc0()*-0.0117842);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9c30() {
   return (neuron0x2d91300()*0.021595);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9c70() {
   return (neuron0x2d91640()*-0.00882029);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9cb0() {
   return (neuron0x2d91980()*-0.000147825);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9cf0() {
   return (neuron0x2d91cc0()*-0.00515917);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9d30() {
   return (neuron0x2d92000()*-0.000423342);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9d70() {
   return (neuron0x2d92340()*0.0031234);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9db0() {
   return (neuron0x2d92680()*-0.00363632);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9df0() {
   return (neuron0x2d929c0()*-0.0239634);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9e30() {
   return (neuron0x2d92d00()*0.00298573);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9e70() {
   return (neuron0x2d93040()*0.00291341);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9900() {
   return (neuron0x2d93380()*0.00654944);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9940() {
   return (neuron0x2d938e0()*-0.0145472);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9fc0() {
   return (neuron0x2d93c20()*-0.0034434);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba000() {
   return (neuron0x2d93f60()*0.00466052);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba040() {
   return (neuron0x2d942a0()*0.00784283);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba080() {
   return (neuron0x2d945e0()*-0.0156252);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba0c0() {
   return (neuron0x2d94920()*-0.00157827);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba100() {
   return (neuron0x2d94c60()*5.13234);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba480() {
   return (neuron0x2d90010()*-0.0353482);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba4c0() {
   return (neuron0x2d902c0()*0.0111371);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba500() {
   return (neuron0x2d90600()*2.3805);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba540() {
   return (neuron0x2d90940()*-0.196104);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba580() {
   return (neuron0x2d90c80()*0.0528488);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba5c0() {
   return (neuron0x2d90fc0()*-0.00714196);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba600() {
   return (neuron0x2d91300()*0.0880999);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba640() {
   return (neuron0x2d91640()*0.0244744);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba680() {
   return (neuron0x2d91980()*0.00213346);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba6c0() {
   return (neuron0x2d91cc0()*-0.0327698);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba700() {
   return (neuron0x2d92000()*0.0566417);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba740() {
   return (neuron0x2d92340()*-2.15107);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba780() {
   return (neuron0x2d92680()*-0.0538559);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba7c0() {
   return (neuron0x2d929c0()*-0.0707002);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba800() {
   return (neuron0x2d92d00()*0.0259979);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba840() {
   return (neuron0x2d93040()*-0.0309796);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba2d0() {
   return (neuron0x2d93380()*-0.0203767);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba310() {
   return (neuron0x2d938e0()*-0.0679538);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba990() {
   return (neuron0x2d93c20()*-0.0214224);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba9d0() {
   return (neuron0x2d93f60()*-0.0198826);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbaa10() {
   return (neuron0x2d942a0()*0.0306662);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbaa50() {
   return (neuron0x2d945e0()*-0.0359847);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbaa90() {
   return (neuron0x2d94920()*-0.00267241);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbaad0() {
   return (neuron0x2d94c60()*-1.47566);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a8b0() {
   return (neuron0x2d950d0()*2.12863);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2b5a8f0() {
   return (neuron0x2d95910()*1.34967);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d97480() {
   return (neuron0x2d963f0()*2.02609);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d974c0() {
   return (neuron0x2d95e90()*-1.50581);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98f50() {
   return (neuron0x2d971d0()*-1.27081);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d98f90() {
   return (neuron0x2d98ca0()*-0.180261);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99d20() {
   return (neuron0x2d99a70()*0.488957);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99d60() {
   return (neuron0x2d9a440()*-0.106236);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a6f0() {
   return (neuron0x2d9ae10()*0.0404647);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9a730() {
   return (neuron0x2d9b8f0()*-0.129626);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b0c0() {
   return (neuron0x2d9c2c0()*3.04161);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9b100() {
   return (neuron0x2d993a0()*1.73947);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bba0() {
   return (neuron0x2d9de70()*0.00885242);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9bbe0() {
   return (neuron0x2d9e840()*0.0731193);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c570() {
   return (neuron0x2d9f210()*0.881434);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9c5b0() {
   return (neuron0x2d9fbe0()*1.1431);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99650() {
   return (neuron0x2da19f0()*-0.0109407);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d99690() {
   return (neuron0x2da1cd0()*1.73108);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e120() {
   return (neuron0x2da26a0()*-0.285684);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9e160() {
   return (neuron0x2da3070()*0.0362408);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9eaf0() {
   return (neuron0x2da3a40()*0.57145);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9eb30() {
   return (neuron0x2da4410()*0.465962);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f4c0() {
   return (neuron0x2d9cf60()*0.255092);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9f500() {
   return (neuron0x2d9d930()*0.619434);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fe90() {
   return (neuron0x2da71a0()*0.0241274);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9fed0() {
   return (neuron0x2da7b70()*-0.725925);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d92f20() {
   return (neuron0x2da8540()*0.364566);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d92f60() {
   return (neuron0x2da8f10()*-0.15349);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1f80() {
   return (neuron0x2da98e0()*1.14504);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da1fc0() {
   return (neuron0x2daa2b0()*-0.0179218);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2950() {
   return (neuron0x2daac80()*-0.143013);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da2990() {
   return (neuron0x2dab650()*-0.0853884);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3320() {
   return (neuron0x2da16e0()*-1.09103);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3360() {
   return (neuron0x2dae230()*0.224395);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3cf0() {
   return (neuron0x2daec00()*-3.20755);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da3d30() {
   return (neuron0x2daf5d0()*-0.674527);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da46c0() {
   return (neuron0x2daffa0()*-0.0756595);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4700() {
   return (neuron0x2db0970()*-0.0418022);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d210() {
   return (neuron0x2db1340()*-1.89076);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d9d250() {
   return (neuron0x2db1d10()*-0.0402017);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6ac0() {
   return (neuron0x2db26e0()*0.168968);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6b00() {
   return (neuron0x2db32c0()*1.41003);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7450() {
   return (neuron0x2db3c90()*-1.44424);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7490() {
   return (neuron0x2da4b10()*-0.0541529);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7e20() {
   return (neuron0x2da54e0()*0.0781448);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da7e60() {
   return (neuron0x2da5eb0()*0.0103908);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da87f0() {
   return (neuron0x2db84f0()*-0.89129);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da8830() {
   return (neuron0x2db8da0()*-0.103102);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da91c0() {
   return (neuron0x2db9770()*-1.32654);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9200() {
   return (neuron0x2dba140()*1.09375);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab900() {
   return (neuron0x2d950d0()*-1.46591);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dab940() {
   return (neuron0x2d95910()*0.0308167);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0ec0() {
   return (neuron0x2d963f0()*0.0837744);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da0f00() {
   return (neuron0x2d95e90()*0.429748);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae4e0() {
   return (neuron0x2d971d0()*-0.598419);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dae520() {
   return (neuron0x2d98ca0()*0.184766);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daeeb0() {
   return (neuron0x2d99a70()*0.0435237);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daeef0() {
   return (neuron0x2d9a440()*-0.0236457);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf880() {
   return (neuron0x2d9ae10()*0.0172013);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2daf8c0() {
   return (neuron0x2d9b8f0()*-0.025836);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0250() {
   return (neuron0x2d9c2c0()*-1.41741);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0290() {
   return (neuron0x2d993a0()*-0.991995);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0c20() {
   return (neuron0x2d9de70()*0.0240728);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db0c60() {
   return (neuron0x2d9e840()*-0.00244997);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db15f0() {
   return (neuron0x2d9f210()*-0.0185379);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1630() {
   return (neuron0x2d9fbe0()*0.193008);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db1fc0() {
   return (neuron0x2da19f0()*-0.0233351);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2000() {
   return (neuron0x2da1cd0()*-0.305064);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db2990() {
   return (neuron0x2da26a0()*-0.0314087);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db29d0() {
   return (neuron0x2da3070()*-0.000618377);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3570() {
   return (neuron0x2da3a40()*-0.651798);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db35b0() {
   return (neuron0x2da4410()*0.317444);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3f40() {
   return (neuron0x2d9cf60()*-1.36164);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db3f80() {
   return (neuron0x2d9d930()*0.109175);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4dc0() {
   return (neuron0x2da71a0()*0.145191);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da4e00() {
   return (neuron0x2da7b70()*0.149335);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da5790() {
   return (neuron0x2da8540()*-0.328154);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da57d0() {
   return (neuron0x2da8f10()*0.325375);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da6160() {
   return (neuron0x2da98e0()*0.384771);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da61a0() {
   return (neuron0x2daa2b0()*0.0346168);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db8680() {
   return (neuron0x2daac80()*0.00547533);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db86c0() {
   return (neuron0x2dab650()*-0.0371018);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9050() {
   return (neuron0x2da16e0()*-0.120386);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9090() {
   return (neuron0x2dae230()*0.0986526);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9a20() {
   return (neuron0x2daec00()*1.78631);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2db9a60() {
   return (neuron0x2daf5d0()*1.40355);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba3f0() {
   return (neuron0x2daffa0()*-0.0323875);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dba430() {
   return (neuron0x2db0970()*0.0535544);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d95380() {
   return (neuron0x2db1340()*0.155767);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2d953c0() {
   return (neuron0x2db1d10()*0.0632679);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9b90() {
   return (neuron0x2db26e0()*0.187818);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2da9bd0() {
   return (neuron0x2db32c0()*-0.0496156);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbab10() {
   return (neuron0x2db3c90()*0.197151);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbab50() {
   return (neuron0x2da4b10()*-0.060506);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbab90() {
   return (neuron0x2da54e0()*-0.0470704);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dbabd0() {
   return (neuron0x2da5eb0()*0.00581827);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1a80() {
   return (neuron0x2db84f0()*0.747726);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1ac0() {
   return (neuron0x2db8da0()*-0.0360673);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1b00() {
   return (neuron0x2db9770()*0.687796);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1b40() {
   return (neuron0x2dba140()*0.14989);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1ec0() {
   return (neuron0x2d950d0()*-1.02415);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1f00() {
   return (neuron0x2d95910()*-1.38873);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1f40() {
   return (neuron0x2d963f0()*1.29931);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1f80() {
   return (neuron0x2d95e90()*-1.89673);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1fc0() {
   return (neuron0x2d971d0()*1.44263);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2000() {
   return (neuron0x2d98ca0()*0.284181);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2040() {
   return (neuron0x2d99a70()*0.00352995);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2080() {
   return (neuron0x2d9a440()*0.0576326);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc20c0() {
   return (neuron0x2d9ae10()*-0.207754);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2100() {
   return (neuron0x2d9b8f0()*0.547324);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2140() {
   return (neuron0x2d9c2c0()*-0.99661);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2180() {
   return (neuron0x2d993a0()*2.97217);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc21c0() {
   return (neuron0x2d9de70()*-0.151347);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2200() {
   return (neuron0x2d9e840()*0.142841);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2240() {
   return (neuron0x2d9f210()*0.897561);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2280() {
   return (neuron0x2d9fbe0()*-0.487086);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1d10() {
   return (neuron0x2da19f0()*0.229016);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc1d50() {
   return (neuron0x2da1cd0()*-1.60964);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc23d0() {
   return (neuron0x2da26a0()*1.58145);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2410() {
   return (neuron0x2da3070()*0.0141715);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2450() {
   return (neuron0x2da3a40()*-1.62004);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2490() {
   return (neuron0x2da4410()*-1.38881);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc24d0() {
   return (neuron0x2d9cf60()*2.77105);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2510() {
   return (neuron0x2d9d930()*1.28618);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2550() {
   return (neuron0x2da71a0()*-5.11142);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2590() {
   return (neuron0x2da7b70()*1.69291);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc25d0() {
   return (neuron0x2da8540()*-0.584142);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2610() {
   return (neuron0x2da8f10()*1.26098);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2650() {
   return (neuron0x2da98e0()*1.29334);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2690() {
   return (neuron0x2daa2b0()*0.813591);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc26d0() {
   return (neuron0x2daac80()*0.30553);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2710() {
   return (neuron0x2dab650()*0.656857);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc22c0() {
   return (neuron0x2da16e0()*-0.435768);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2300() {
   return (neuron0x2dae230()*0.102121);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2340() {
   return (neuron0x2daec00()*-0.930058);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2380() {
   return (neuron0x2daf5d0()*-1.27042);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2960() {
   return (neuron0x2daffa0()*-0.0580057);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc29a0() {
   return (neuron0x2db0970()*-4.10178);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc29e0() {
   return (neuron0x2db1340()*0.587974);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2a20() {
   return (neuron0x2db1d10()*2.92836);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2a60() {
   return (neuron0x2db26e0()*-5.38511);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2aa0() {
   return (neuron0x2db32c0()*0.582928);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2ae0() {
   return (neuron0x2db3c90()*-0.481041);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2b20() {
   return (neuron0x2da4b10()*-0.647554);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2b60() {
   return (neuron0x2da54e0()*3.11855);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2ba0() {
   return (neuron0x2da5eb0()*0.26494);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2be0() {
   return (neuron0x2db84f0()*1.23226);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2c20() {
   return (neuron0x2db8da0()*-0.0184503);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2c60() {
   return (neuron0x2db9770()*0.94349);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2ca0() {
   return (neuron0x2dba140()*-1.23373);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3020() {
   return (neuron0x2d950d0()*2.09193);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3060() {
   return (neuron0x2d95910()*0.0470744);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc30a0() {
   return (neuron0x2d963f0()*-0.812467);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc30e0() {
   return (neuron0x2d95e90()*2.96825);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3120() {
   return (neuron0x2d971d0()*1.28382);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3160() {
   return (neuron0x2d98ca0()*-2.99286);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc31a0() {
   return (neuron0x2d99a70()*0.185168);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc31e0() {
   return (neuron0x2d9a440()*0.0197273);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3220() {
   return (neuron0x2d9ae10()*-1.81481);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3260() {
   return (neuron0x2d9b8f0()*-0.0838199);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc32a0() {
   return (neuron0x2d9c2c0()*2.6231);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc32e0() {
   return (neuron0x2d993a0()*2.303);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3320() {
   return (neuron0x2d9de70()*0.242921);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3360() {
   return (neuron0x2d9e840()*0.111291);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc33a0() {
   return (neuron0x2d9f210()*-0.148365);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc33e0() {
   return (neuron0x2d9fbe0()*1.5419);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2e70() {
   return (neuron0x2da19f0()*-0.039568);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc2eb0() {
   return (neuron0x2da1cd0()*2.70714);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3530() {
   return (neuron0x2da26a0()*-0.715994);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3570() {
   return (neuron0x2da3070()*-0.108875);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc35b0() {
   return (neuron0x2da3a40()*3.04763);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc35f0() {
   return (neuron0x2da4410()*1.68052);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3630() {
   return (neuron0x2d9cf60()*-2.47632);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3670() {
   return (neuron0x2d9d930()*0.360708);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc36b0() {
   return (neuron0x2da71a0()*1.07379);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc36f0() {
   return (neuron0x2da7b70()*0.340258);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3730() {
   return (neuron0x2da8540()*-0.572102);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3770() {
   return (neuron0x2da8f10()*-2.9289);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc37b0() {
   return (neuron0x2da98e0()*1.37211);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc37f0() {
   return (neuron0x2daa2b0()*-0.0441638);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3830() {
   return (neuron0x2daac80()*0.185858);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3870() {
   return (neuron0x2dab650()*-0.227392);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3420() {
   return (neuron0x2da16e0()*-0.563751);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3460() {
   return (neuron0x2dae230()*0.761782);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc34a0() {
   return (neuron0x2daec00()*-1.51639);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc34e0() {
   return (neuron0x2daf5d0()*-0.903372);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3ac0() {
   return (neuron0x2daffa0()*-0.0820944);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3b00() {
   return (neuron0x2db0970()*0.847846);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3b40() {
   return (neuron0x2db1340()*1.1287);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3b80() {
   return (neuron0x2db1d10()*-0.207621);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3bc0() {
   return (neuron0x2db26e0()*1.29224);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3c00() {
   return (neuron0x2db32c0()*1.07614);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3c40() {
   return (neuron0x2db3c90()*-0.774959);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3c80() {
   return (neuron0x2da4b10()*-0.163273);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3cc0() {
   return (neuron0x2da54e0()*-0.255181);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3d00() {
   return (neuron0x2da5eb0()*0.0676233);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3d40() {
   return (neuron0x2db84f0()*0.827126);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3d80() {
   return (neuron0x2db8da0()*-0.0835977);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3dc0() {
   return (neuron0x2db9770()*-1.97912);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3e00() {
   return (neuron0x2dba140()*0.960267);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4180() {
   return (neuron0x2d950d0()*-2.39285);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc41c0() {
   return (neuron0x2d95910()*-0.346181);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4200() {
   return (neuron0x2d963f0()*0.0822781);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4240() {
   return (neuron0x2d95e90()*0.252766);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4280() {
   return (neuron0x2d971d0()*-3.58757);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc42c0() {
   return (neuron0x2d98ca0()*-0.143206);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4300() {
   return (neuron0x2d99a70()*7.93169);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4340() {
   return (neuron0x2d9a440()*-0.12427);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4380() {
   return (neuron0x2d9ae10()*0.119178);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc43c0() {
   return (neuron0x2d9b8f0()*-0.370035);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4400() {
   return (neuron0x2d9c2c0()*-1.53853);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4440() {
   return (neuron0x2d993a0()*-1.00952);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4480() {
   return (neuron0x2d9de70()*0.0380727);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc44c0() {
   return (neuron0x2d9e840()*0.00382589);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4500() {
   return (neuron0x2d9f210()*-1.4244);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4540() {
   return (neuron0x2d9fbe0()*0.259648);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc3fd0() {
   return (neuron0x2da19f0()*-0.17032);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4010() {
   return (neuron0x2da1cd0()*-2.77826);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4690() {
   return (neuron0x2da26a0()*-0.902316);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc46d0() {
   return (neuron0x2da3070()*0.135046);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4710() {
   return (neuron0x2da3a40()*3.35834);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4750() {
   return (neuron0x2da4410()*-0.618459);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4790() {
   return (neuron0x2d9cf60()*-0.513017);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc47d0() {
   return (neuron0x2d9d930()*0.00573517);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4810() {
   return (neuron0x2da71a0()*0.684296);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4850() {
   return (neuron0x2da7b70()*-0.186149);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4890() {
   return (neuron0x2da8540()*1.85677);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc48d0() {
   return (neuron0x2da8f10()*0.217494);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4910() {
   return (neuron0x2da98e0()*0.098951);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4950() {
   return (neuron0x2daa2b0()*-0.169225);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4990() {
   return (neuron0x2daac80()*-0.277621);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc49d0() {
   return (neuron0x2dab650()*-0.0407457);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4580() {
   return (neuron0x2da16e0()*-6.12829);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc45c0() {
   return (neuron0x2dae230()*0.0419456);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4600() {
   return (neuron0x2daec00()*-1.41385);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4640() {
   return (neuron0x2daf5d0()*-0.415451);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4c20() {
   return (neuron0x2daffa0()*-0.152282);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4c60() {
   return (neuron0x2db0970()*0.345681);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4ca0() {
   return (neuron0x2db1340()*1.4236);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4ce0() {
   return (neuron0x2db1d10()*0.0347472);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4d20() {
   return (neuron0x2db26e0()*0.758654);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4d60() {
   return (neuron0x2db32c0()*0.100382);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4da0() {
   return (neuron0x2db3c90()*0.655823);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4de0() {
   return (neuron0x2da4b10()*-0.133832);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4e20() {
   return (neuron0x2da54e0()*0.605959);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4e60() {
   return (neuron0x2da5eb0()*-0.152394);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4ea0() {
   return (neuron0x2db84f0()*0.704876);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4ee0() {
   return (neuron0x2db8da0()*-0.0921015);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4f20() {
   return (neuron0x2db9770()*-1.59083);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc4f60() {
   return (neuron0x2dba140()*0.812688);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc51c0() {
   return (neuron0x2dc1340()*-2.68865);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc5200() {
   return (neuron0x2dc16e0()*7.05694);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc5240() {
   return (neuron0x2dc1b80()*-5.25339);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc5280() {
   return (neuron0x2dc2ce0()*-1.12138);
}

double NNfunction_nn_charge1p_charge2m::synapse0x2dc52c0() {
   return (neuron0x2dc3e40()*-9.44467);
}

