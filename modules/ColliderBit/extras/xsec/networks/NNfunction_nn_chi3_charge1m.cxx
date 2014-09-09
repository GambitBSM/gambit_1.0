#include "NNfunction_nn_chi3_charge1m.h"
#include <cmath>

double NNfunction_nn_chi3_charge1m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.7285)/14.9252;
   input1 = (in1 - 42.0967)/773.505;
   input2 = (in2 - 379.035)/455.737;
   input3 = (in3 - 251.284)/745.107;
   input4 = (in4 - 1046.61)/890.225;
   input5 = (in5 - 1045.75)/986.184;
   input6 = (in6 - 1048.66)/985.169;
   input7 = (in7 - 1029.72)/951.47;
   input8 = (in8 - 1048.12)/996.273;
   input9 = (in9 - 1037.46)/988.981;
   input10 = (in10 - 1017.51)/936.196;
   input11 = (in11 - 981.35)/963.597;
   input12 = (in12 - 996.987)/962.11;
   input13 = (in13 - 743.255)/686.045;
   input14 = (in14 - 994.994)/938.596;
   input15 = (in15 - 996.643)/939.306;
   input16 = (in16 - 673.599)/595.203;
   input17 = (in17 - 1008.56)/971.362;
   input18 = (in18 - 1007.86)/972.817;
   input19 = (in19 - 971.481)/899.141;
   input20 = (in20 - -184.668)/469.466;
   input21 = (in21 - -236.223)/961.858;
   input22 = (in22 - 10.604)/961.361;
   input23 = (in23 - 22.8598)/285.762;
   switch(index) {
     case 0:
         return neuron0x3556ec0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge1m::Value(int index, double* input) {
   input0 = (input[0] - 24.7285)/14.9252;
   input1 = (input[1] - 42.0967)/773.505;
   input2 = (input[2] - 379.035)/455.737;
   input3 = (input[3] - 251.284)/745.107;
   input4 = (input[4] - 1046.61)/890.225;
   input5 = (input[5] - 1045.75)/986.184;
   input6 = (input[6] - 1048.66)/985.169;
   input7 = (input[7] - 1029.72)/951.47;
   input8 = (input[8] - 1048.12)/996.273;
   input9 = (input[9] - 1037.46)/988.981;
   input10 = (input[10] - 1017.51)/936.196;
   input11 = (input[11] - 981.35)/963.597;
   input12 = (input[12] - 996.987)/962.11;
   input13 = (input[13] - 743.255)/686.045;
   input14 = (input[14] - 994.994)/938.596;
   input15 = (input[15] - 996.643)/939.306;
   input16 = (input[16] - 673.599)/595.203;
   input17 = (input[17] - 1008.56)/971.362;
   input18 = (input[18] - 1007.86)/972.817;
   input19 = (input[19] - 971.481)/899.141;
   input20 = (input[20] - -184.668)/469.466;
   input21 = (input[21] - -236.223)/961.858;
   input22 = (input[22] - 10.604)/961.361;
   input23 = (input[23] - 22.8598)/285.762;
   switch(index) {
     case 0:
         return neuron0x3556ec0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge1m::neuron0x3521f30() {
   return input0;
}

double NNfunction_nn_chi3_charge1m::neuron0x35221e0() {
   return input1;
}

double NNfunction_nn_chi3_charge1m::neuron0x3522520() {
   return input2;
}

double NNfunction_nn_chi3_charge1m::neuron0x3522860() {
   return input3;
}

double NNfunction_nn_chi3_charge1m::neuron0x3522ba0() {
   return input4;
}

double NNfunction_nn_chi3_charge1m::neuron0x3522ee0() {
   return input5;
}

double NNfunction_nn_chi3_charge1m::neuron0x3523220() {
   return input6;
}

double NNfunction_nn_chi3_charge1m::neuron0x3523560() {
   return input7;
}

double NNfunction_nn_chi3_charge1m::neuron0x35238a0() {
   return input8;
}

double NNfunction_nn_chi3_charge1m::neuron0x3523be0() {
   return input9;
}

double NNfunction_nn_chi3_charge1m::neuron0x3523f20() {
   return input10;
}

double NNfunction_nn_chi3_charge1m::neuron0x3524260() {
   return input11;
}

double NNfunction_nn_chi3_charge1m::neuron0x35245a0() {
   return input12;
}

double NNfunction_nn_chi3_charge1m::neuron0x35248e0() {
   return input13;
}

double NNfunction_nn_chi3_charge1m::neuron0x3524c20() {
   return input14;
}

double NNfunction_nn_chi3_charge1m::neuron0x3524f60() {
   return input15;
}

double NNfunction_nn_chi3_charge1m::neuron0x35252a0() {
   return input16;
}

double NNfunction_nn_chi3_charge1m::neuron0x3525800() {
   return input17;
}

double NNfunction_nn_chi3_charge1m::neuron0x3525a20() {
   return input18;
}

double NNfunction_nn_chi3_charge1m::neuron0x3525d60() {
   return input19;
}

double NNfunction_nn_chi3_charge1m::neuron0x35260a0() {
   return input20;
}

double NNfunction_nn_chi3_charge1m::neuron0x35263e0() {
   return input21;
}

double NNfunction_nn_chi3_charge1m::neuron0x3526720() {
   return input22;
}

double NNfunction_nn_chi3_charge1m::neuron0x3526a60() {
   return input23;
}

double NNfunction_nn_chi3_charge1m::input0x3526ed0() {
   double input = -0.767857;
   input += synapse0x3527210();
   input += synapse0x3527250();
   input += synapse0x3527290();
   input += synapse0x35272d0();
   input += synapse0x3527310();
   input += synapse0x3527350();
   input += synapse0x3527390();
   input += synapse0x35273d0();
   input += synapse0x3527410();
   input += synapse0x3527450();
   input += synapse0x3527490();
   input += synapse0x35274d0();
   input += synapse0x3527510();
   input += synapse0x3527550();
   input += synapse0x3527590();
   input += synapse0x35275d0();
   input += synapse0x3527060();
   input += synapse0x35270a0();
   input += synapse0x25f1eb0();
   input += synapse0x25f1ef0();
   input += synapse0x3527720();
   input += synapse0x3527760();
   input += synapse0x35277a0();
   input += synapse0x35277e0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3526ed0() {
   double input = input0x3526ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3527820() {
   double input = 2.11435;
   input += synapse0x3527b60();
   input += synapse0x3527ba0();
   input += synapse0x3527be0();
   input += synapse0x3527c20();
   input += synapse0x3527c60();
   input += synapse0x3527ca0();
   input += synapse0x3527ce0();
   input += synapse0x3527d20();
   input += synapse0x3527d60();
   input += synapse0x3527610();
   input += synapse0x3527650();
   input += synapse0x3527690();
   input += synapse0x35276d0();
   input += synapse0x3527fb0();
   input += synapse0x3527ff0();
   input += synapse0x3528030();
   input += synapse0x35279b0();
   input += synapse0x35279f0();
   input += synapse0x3528180();
   input += synapse0x35281c0();
   input += synapse0x3528200();
   input += synapse0x3528240();
   input += synapse0x3528280();
   input += synapse0x35282c0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3527820() {
   double input = input0x3527820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3528300() {
   double input = 0.286163;
   input += synapse0x3528640();
   input += synapse0x3528680();
   input += synapse0x35286c0();
   input += synapse0x3528700();
   input += synapse0x3528740();
   input += synapse0x3528780();
   input += synapse0x35287c0();
   input += synapse0x3528800();
   input += synapse0x3528840();
   input += synapse0x3528880();
   input += synapse0x35288c0();
   input += synapse0x3528900();
   input += synapse0x3528940();
   input += synapse0x3528980();
   input += synapse0x35289c0();
   input += synapse0x3528a00();
   input += synapse0x3528490();
   input += synapse0x35284d0();
   input += synapse0x218ff10();
   input += synapse0x32ebfe0();
   input += synapse0x32ec020();
   input += synapse0x352a940();
   input += synapse0x352a980();
   input += synapse0x3521c70();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3528300() {
   double input = input0x3528300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3527da0() {
   double input = -5.98553;
   input += synapse0x3521d40();
   input += synapse0x32ec860();
   input += synapse0x3527f30();
   input += synapse0x3527f70();
   input += synapse0x3528b50();
   input += synapse0x3528b90();
   input += synapse0x3528bd0();
   input += synapse0x3528c10();
   input += synapse0x3528c50();
   input += synapse0x3528c90();
   input += synapse0x3528cd0();
   input += synapse0x3528d10();
   input += synapse0x3528d50();
   input += synapse0x3528d90();
   input += synapse0x3528dd0();
   input += synapse0x3528e10();
   input += synapse0x3521cb0();
   input += synapse0x3521cf0();
   input += synapse0x3528f60();
   input += synapse0x3528fa0();
   input += synapse0x3528fe0();
   input += synapse0x3529020();
   input += synapse0x3529060();
   input += synapse0x35290a0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3527da0() {
   double input = input0x3527da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x35290e0() {
   double input = -0.265003;
   input += synapse0x3529420();
   input += synapse0x3529460();
   input += synapse0x35294a0();
   input += synapse0x35294e0();
   input += synapse0x3529520();
   input += synapse0x3529560();
   input += synapse0x35295a0();
   input += synapse0x35295e0();
   input += synapse0x3529620();
   input += synapse0x3529660();
   input += synapse0x35296a0();
   input += synapse0x35296e0();
   input += synapse0x3529720();
   input += synapse0x3529760();
   input += synapse0x35297a0();
   input += synapse0x35297e0();
   input += synapse0x3529930();
   input += synapse0x3529270();
   input += synapse0x35292b0();
   input += synapse0x352aa80();
   input += synapse0x352aac0();
   input += synapse0x352ab00();
   input += synapse0x352ab40();
   input += synapse0x352ab80();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x35290e0() {
   double input = input0x35290e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352abc0() {
   double input = 5.28908;
   input += synapse0x352af00();
   input += synapse0x352af40();
   input += synapse0x352af80();
   input += synapse0x352afc0();
   input += synapse0x352b000();
   input += synapse0x352b040();
   input += synapse0x352b080();
   input += synapse0x352b0c0();
   input += synapse0x352b100();
   input += synapse0x32ec330();
   input += synapse0x32ec370();
   input += synapse0x32ec3b0();
   input += synapse0x32ec3f0();
   input += synapse0x32ec430();
   input += synapse0x32ec470();
   input += synapse0x32ec4b0();
   input += synapse0x352ad50();
   input += synapse0x352ad90();
   input += synapse0x32ec600();
   input += synapse0x32ec640();
   input += synapse0x32ec680();
   input += synapse0x32ec6c0();
   input += synapse0x32ec700();
   input += synapse0x352b950();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352abc0() {
   double input = input0x352abc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352b990() {
   double input = -10.0271;
   input += synapse0x352bcd0();
   input += synapse0x352bd10();
   input += synapse0x352bd50();
   input += synapse0x352bd90();
   input += synapse0x352bdd0();
   input += synapse0x352be10();
   input += synapse0x352be50();
   input += synapse0x352be90();
   input += synapse0x352bed0();
   input += synapse0x352bf10();
   input += synapse0x352bf50();
   input += synapse0x352bf90();
   input += synapse0x352bfd0();
   input += synapse0x352c010();
   input += synapse0x352c050();
   input += synapse0x352c090();
   input += synapse0x352bb20();
   input += synapse0x352bb60();
   input += synapse0x352c1e0();
   input += synapse0x352c220();
   input += synapse0x352c260();
   input += synapse0x352c2a0();
   input += synapse0x352c2e0();
   input += synapse0x352c320();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352b990() {
   double input = input0x352b990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352c360() {
   double input = 0.441957;
   input += synapse0x352c6a0();
   input += synapse0x352c6e0();
   input += synapse0x352c720();
   input += synapse0x352c760();
   input += synapse0x352c7a0();
   input += synapse0x352c7e0();
   input += synapse0x352c820();
   input += synapse0x352c860();
   input += synapse0x352c8a0();
   input += synapse0x352c8e0();
   input += synapse0x352c920();
   input += synapse0x352c960();
   input += synapse0x352c9a0();
   input += synapse0x352c9e0();
   input += synapse0x352ca20();
   input += synapse0x352ca60();
   input += synapse0x352c4f0();
   input += synapse0x352c530();
   input += synapse0x352cbb0();
   input += synapse0x352cbf0();
   input += synapse0x352cc30();
   input += synapse0x352cc70();
   input += synapse0x352ccb0();
   input += synapse0x352ccf0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352c360() {
   double input = input0x352c360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352cd30() {
   double input = 0.164015;
   input += synapse0x35256f0();
   input += synapse0x3525730();
   input += synapse0x3525770();
   input += synapse0x35257b0();
   input += synapse0x352d280();
   input += synapse0x352d2c0();
   input += synapse0x352d300();
   input += synapse0x352d340();
   input += synapse0x352d380();
   input += synapse0x352d3c0();
   input += synapse0x352d400();
   input += synapse0x352d440();
   input += synapse0x352d480();
   input += synapse0x352d4c0();
   input += synapse0x352d500();
   input += synapse0x352d540();
   input += synapse0x352cec0();
   input += synapse0x352cf00();
   input += synapse0x352d690();
   input += synapse0x352d6d0();
   input += synapse0x352d710();
   input += synapse0x352d750();
   input += synapse0x352d790();
   input += synapse0x352d7d0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352cd30() {
   double input = input0x352cd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352d810() {
   double input = 0.111622;
   input += synapse0x352db50();
   input += synapse0x352db90();
   input += synapse0x352dbd0();
   input += synapse0x352dc10();
   input += synapse0x352dc50();
   input += synapse0x352dc90();
   input += synapse0x352dcd0();
   input += synapse0x352dd10();
   input += synapse0x352dd50();
   input += synapse0x352dd90();
   input += synapse0x352ddd0();
   input += synapse0x352de10();
   input += synapse0x352de50();
   input += synapse0x352de90();
   input += synapse0x352ded0();
   input += synapse0x352df10();
   input += synapse0x352d9a0();
   input += synapse0x352d9e0();
   input += synapse0x352e060();
   input += synapse0x352e0a0();
   input += synapse0x352e0e0();
   input += synapse0x352e120();
   input += synapse0x352e160();
   input += synapse0x352e1a0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352d810() {
   double input = input0x352d810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352e1e0() {
   double input = -0.498741;
   input += synapse0x352e520();
   input += synapse0x352e560();
   input += synapse0x352e5a0();
   input += synapse0x352e5e0();
   input += synapse0x352e620();
   input += synapse0x352e660();
   input += synapse0x352e6a0();
   input += synapse0x352e6e0();
   input += synapse0x352e720();
   input += synapse0x352e760();
   input += synapse0x352e7a0();
   input += synapse0x352e7e0();
   input += synapse0x352e820();
   input += synapse0x352e860();
   input += synapse0x352e8a0();
   input += synapse0x352e8e0();
   input += synapse0x352e370();
   input += synapse0x352e3b0();
   input += synapse0x352b140();
   input += synapse0x352b180();
   input += synapse0x352b1c0();
   input += synapse0x352b200();
   input += synapse0x352b240();
   input += synapse0x352b280();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352e1e0() {
   double input = input0x352e1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352b2c0() {
   double input = -0.816842;
   input += synapse0x352b600();
   input += synapse0x352b640();
   input += synapse0x352b680();
   input += synapse0x352b6c0();
   input += synapse0x352b700();
   input += synapse0x352b740();
   input += synapse0x352b780();
   input += synapse0x352b7c0();
   input += synapse0x352b800();
   input += synapse0x352b840();
   input += synapse0x352b880();
   input += synapse0x352b8c0();
   input += synapse0x352b900();
   input += synapse0x352fa40();
   input += synapse0x352fa80();
   input += synapse0x352fac0();
   input += synapse0x352b450();
   input += synapse0x352b490();
   input += synapse0x352fc10();
   input += synapse0x352fc50();
   input += synapse0x352fc90();
   input += synapse0x352fcd0();
   input += synapse0x352fd10();
   input += synapse0x352fd50();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352b2c0() {
   double input = input0x352b2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352fd90() {
   double input = 3.79217;
   input += synapse0x35300d0();
   input += synapse0x3530110();
   input += synapse0x3530150();
   input += synapse0x3530190();
   input += synapse0x35301d0();
   input += synapse0x3530210();
   input += synapse0x3530250();
   input += synapse0x3530290();
   input += synapse0x35302d0();
   input += synapse0x3530310();
   input += synapse0x3530350();
   input += synapse0x3530390();
   input += synapse0x35303d0();
   input += synapse0x3530410();
   input += synapse0x3530450();
   input += synapse0x3530490();
   input += synapse0x352ff20();
   input += synapse0x352ff60();
   input += synapse0x35305e0();
   input += synapse0x3530620();
   input += synapse0x3530660();
   input += synapse0x35306a0();
   input += synapse0x35306e0();
   input += synapse0x3530720();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352fd90() {
   double input = input0x352fd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3530760() {
   double input = 1.50232;
   input += synapse0x3530aa0();
   input += synapse0x3530ae0();
   input += synapse0x3530b20();
   input += synapse0x3530b60();
   input += synapse0x3530ba0();
   input += synapse0x3530be0();
   input += synapse0x3530c20();
   input += synapse0x3530c60();
   input += synapse0x3530ca0();
   input += synapse0x3530ce0();
   input += synapse0x3530d20();
   input += synapse0x3530d60();
   input += synapse0x3530da0();
   input += synapse0x3530de0();
   input += synapse0x3530e20();
   input += synapse0x3530e60();
   input += synapse0x35308f0();
   input += synapse0x3530930();
   input += synapse0x3530fb0();
   input += synapse0x3530ff0();
   input += synapse0x3531030();
   input += synapse0x3531070();
   input += synapse0x35310b0();
   input += synapse0x35310f0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3530760() {
   double input = input0x3530760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3531130() {
   double input = -0.598719;
   input += synapse0x3531470();
   input += synapse0x35314b0();
   input += synapse0x35314f0();
   input += synapse0x3531530();
   input += synapse0x3531570();
   input += synapse0x35315b0();
   input += synapse0x35315f0();
   input += synapse0x3531630();
   input += synapse0x3531670();
   input += synapse0x35316b0();
   input += synapse0x35316f0();
   input += synapse0x3531730();
   input += synapse0x3531770();
   input += synapse0x35317b0();
   input += synapse0x35317f0();
   input += synapse0x3531830();
   input += synapse0x35312c0();
   input += synapse0x3531300();
   input += synapse0x3531980();
   input += synapse0x35319c0();
   input += synapse0x3531a00();
   input += synapse0x3531a40();
   input += synapse0x3531a80();
   input += synapse0x3531ac0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3531130() {
   double input = input0x3531130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3531b00() {
   double input = -0.340114;
   input += synapse0x3531e40();
   input += synapse0x35220c0();
   input += synapse0x3522100();
   input += synapse0x3522400();
   input += synapse0x3522440();
   input += synapse0x3522740();
   input += synapse0x3522780();
   input += synapse0x3522a80();
   input += synapse0x3522ac0();
   input += synapse0x3522dc0();
   input += synapse0x3522e00();
   input += synapse0x3523100();
   input += synapse0x3523140();
   input += synapse0x3523440();
   input += synapse0x3523480();
   input += synapse0x3523780();
   input += synapse0x35237c0();
   input += synapse0x3523ac0();
   input += synapse0x3523b00();
   input += synapse0x3523e00();
   input += synapse0x3523e40();
   input += synapse0x3524140();
   input += synapse0x3524180();
   input += synapse0x3524480();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3531b00() {
   double input = input0x3531b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3533910() {
   double input = -0.266766;
   input += synapse0x35244c0();
   input += synapse0x3525180();
   input += synapse0x35251c0();
   input += synapse0x3531c90();
   input += synapse0x3531cd0();
   input += synapse0x35254c0();
   input += synapse0x3525500();
   input += synapse0x25f4420();
   input += synapse0x25f4460();
   input += synapse0x3525c40();
   input += synapse0x3525c80();
   input += synapse0x3525f80();
   input += synapse0x3525fc0();
   input += synapse0x35262c0();
   input += synapse0x3526300();
   input += synapse0x3526600();
   input += synapse0x3526640();
   input += synapse0x3526940();
   input += synapse0x3526980();
   input += synapse0x3526c80();
   input += synapse0x3526cc0();
   input += synapse0x35247c0();
   input += synapse0x3524800();
   input += synapse0x3533bb0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3533910() {
   double input = input0x3533910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3533bf0() {
   double input = -3.43464;
   input += synapse0x3533f30();
   input += synapse0x3533f70();
   input += synapse0x3533fb0();
   input += synapse0x3533ff0();
   input += synapse0x3534030();
   input += synapse0x3534070();
   input += synapse0x35340b0();
   input += synapse0x35340f0();
   input += synapse0x3534130();
   input += synapse0x3534170();
   input += synapse0x35341b0();
   input += synapse0x35341f0();
   input += synapse0x3534230();
   input += synapse0x3534270();
   input += synapse0x35342b0();
   input += synapse0x35342f0();
   input += synapse0x3533d80();
   input += synapse0x3533dc0();
   input += synapse0x3534440();
   input += synapse0x3534480();
   input += synapse0x35344c0();
   input += synapse0x3534500();
   input += synapse0x3534540();
   input += synapse0x3534580();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3533bf0() {
   double input = input0x3533bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x35345c0() {
   double input = -0.915411;
   input += synapse0x3534900();
   input += synapse0x3534940();
   input += synapse0x3534980();
   input += synapse0x35349c0();
   input += synapse0x3534a00();
   input += synapse0x3534a40();
   input += synapse0x3534a80();
   input += synapse0x3534ac0();
   input += synapse0x3534b00();
   input += synapse0x3534b40();
   input += synapse0x3534b80();
   input += synapse0x3534bc0();
   input += synapse0x3534c00();
   input += synapse0x3534c40();
   input += synapse0x3534c80();
   input += synapse0x3534cc0();
   input += synapse0x3534750();
   input += synapse0x3534790();
   input += synapse0x3534e10();
   input += synapse0x3534e50();
   input += synapse0x3534e90();
   input += synapse0x3534ed0();
   input += synapse0x3534f10();
   input += synapse0x3534f50();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x35345c0() {
   double input = input0x35345c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3534f90() {
   double input = 1.33397;
   input += synapse0x35352d0();
   input += synapse0x3535310();
   input += synapse0x3535350();
   input += synapse0x3535390();
   input += synapse0x35353d0();
   input += synapse0x3535410();
   input += synapse0x3535450();
   input += synapse0x3535490();
   input += synapse0x35354d0();
   input += synapse0x3535510();
   input += synapse0x3535550();
   input += synapse0x3535590();
   input += synapse0x35355d0();
   input += synapse0x3535610();
   input += synapse0x3535650();
   input += synapse0x3535690();
   input += synapse0x3535120();
   input += synapse0x3535160();
   input += synapse0x35357e0();
   input += synapse0x3535820();
   input += synapse0x3535860();
   input += synapse0x35358a0();
   input += synapse0x35358e0();
   input += synapse0x3535920();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3534f90() {
   double input = input0x3534f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3535960() {
   double input = 0.173522;
   input += synapse0x3535ca0();
   input += synapse0x3535ce0();
   input += synapse0x3535d20();
   input += synapse0x3535d60();
   input += synapse0x3535da0();
   input += synapse0x3535de0();
   input += synapse0x3535e20();
   input += synapse0x3535e60();
   input += synapse0x3535ea0();
   input += synapse0x3535ee0();
   input += synapse0x3535f20();
   input += synapse0x3535f60();
   input += synapse0x3535fa0();
   input += synapse0x3535fe0();
   input += synapse0x3536020();
   input += synapse0x3536060();
   input += synapse0x3535af0();
   input += synapse0x3535b30();
   input += synapse0x35361b0();
   input += synapse0x35361f0();
   input += synapse0x3536230();
   input += synapse0x3536270();
   input += synapse0x35362b0();
   input += synapse0x35362f0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3535960() {
   double input = input0x3535960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3536330() {
   double input = 0.338385;
   input += synapse0x3536670();
   input += synapse0x35366b0();
   input += synapse0x35366f0();
   input += synapse0x3536730();
   input += synapse0x3536770();
   input += synapse0x35367b0();
   input += synapse0x35367f0();
   input += synapse0x3536830();
   input += synapse0x3536870();
   input += synapse0x352ea30();
   input += synapse0x352ea70();
   input += synapse0x352eab0();
   input += synapse0x352eaf0();
   input += synapse0x352eb30();
   input += synapse0x352eb70();
   input += synapse0x352ebb0();
   input += synapse0x35364c0();
   input += synapse0x3536500();
   input += synapse0x352ed00();
   input += synapse0x352ed40();
   input += synapse0x352ed80();
   input += synapse0x352edc0();
   input += synapse0x352ee00();
   input += synapse0x352ee40();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3536330() {
   double input = input0x3536330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352ee80() {
   double input = 1.48604;
   input += synapse0x352f1c0();
   input += synapse0x352f200();
   input += synapse0x352f240();
   input += synapse0x352f280();
   input += synapse0x352f2c0();
   input += synapse0x352f300();
   input += synapse0x352f340();
   input += synapse0x352f380();
   input += synapse0x352f3c0();
   input += synapse0x352f400();
   input += synapse0x352f440();
   input += synapse0x352f480();
   input += synapse0x352f4c0();
   input += synapse0x352f500();
   input += synapse0x352f540();
   input += synapse0x352f580();
   input += synapse0x352f010();
   input += synapse0x352f050();
   input += synapse0x352f6d0();
   input += synapse0x352f710();
   input += synapse0x352f750();
   input += synapse0x352f790();
   input += synapse0x352f7d0();
   input += synapse0x352f810();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352ee80() {
   double input = input0x352ee80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x352f850() {
   double input = 0.146638;
   input += synapse0x352f9e0();
   input += synapse0x3538a70();
   input += synapse0x3538ab0();
   input += synapse0x3538af0();
   input += synapse0x3538b30();
   input += synapse0x3538b70();
   input += synapse0x3538bb0();
   input += synapse0x3538bf0();
   input += synapse0x3538c30();
   input += synapse0x3538c70();
   input += synapse0x3538cb0();
   input += synapse0x3538cf0();
   input += synapse0x3538d30();
   input += synapse0x3538d70();
   input += synapse0x3538db0();
   input += synapse0x3538df0();
   input += synapse0x35388c0();
   input += synapse0x3538900();
   input += synapse0x3538f40();
   input += synapse0x3538f80();
   input += synapse0x3538fc0();
   input += synapse0x3539000();
   input += synapse0x3539040();
   input += synapse0x3539080();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x352f850() {
   double input = input0x352f850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x35390c0() {
   double input = 0.983914;
   input += synapse0x3539400();
   input += synapse0x3539440();
   input += synapse0x3539480();
   input += synapse0x35394c0();
   input += synapse0x3539500();
   input += synapse0x3539540();
   input += synapse0x3539580();
   input += synapse0x35395c0();
   input += synapse0x3539600();
   input += synapse0x3539640();
   input += synapse0x3539680();
   input += synapse0x35396c0();
   input += synapse0x3539700();
   input += synapse0x3539740();
   input += synapse0x3539780();
   input += synapse0x35397c0();
   input += synapse0x3539250();
   input += synapse0x3539290();
   input += synapse0x3539910();
   input += synapse0x3539950();
   input += synapse0x3539990();
   input += synapse0x35399d0();
   input += synapse0x3539a10();
   input += synapse0x3539a50();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x35390c0() {
   double input = input0x35390c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3539a90() {
   double input = 1.22429;
   input += synapse0x3539dd0();
   input += synapse0x3539e10();
   input += synapse0x3539e50();
   input += synapse0x3539e90();
   input += synapse0x3539ed0();
   input += synapse0x3539f10();
   input += synapse0x3539f50();
   input += synapse0x3539f90();
   input += synapse0x3539fd0();
   input += synapse0x353a010();
   input += synapse0x353a050();
   input += synapse0x353a090();
   input += synapse0x353a0d0();
   input += synapse0x353a110();
   input += synapse0x353a150();
   input += synapse0x353a190();
   input += synapse0x3539c20();
   input += synapse0x3539c60();
   input += synapse0x353a2e0();
   input += synapse0x353a320();
   input += synapse0x353a360();
   input += synapse0x353a3a0();
   input += synapse0x353a3e0();
   input += synapse0x353a420();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3539a90() {
   double input = input0x3539a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x353a460() {
   double input = -0.642596;
   input += synapse0x353a7a0();
   input += synapse0x353a7e0();
   input += synapse0x353a820();
   input += synapse0x353a860();
   input += synapse0x353a8a0();
   input += synapse0x353a8e0();
   input += synapse0x353a920();
   input += synapse0x353a960();
   input += synapse0x353a9a0();
   input += synapse0x353a9e0();
   input += synapse0x353aa20();
   input += synapse0x353aa60();
   input += synapse0x353aaa0();
   input += synapse0x353aae0();
   input += synapse0x353ab20();
   input += synapse0x353ab60();
   input += synapse0x353a5f0();
   input += synapse0x353a630();
   input += synapse0x353acb0();
   input += synapse0x353acf0();
   input += synapse0x353ad30();
   input += synapse0x353ad70();
   input += synapse0x353adb0();
   input += synapse0x353adf0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x353a460() {
   double input = input0x353a460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x353ae30() {
   double input = 0.246779;
   input += synapse0x353b170();
   input += synapse0x353b1b0();
   input += synapse0x353b1f0();
   input += synapse0x353b230();
   input += synapse0x353b270();
   input += synapse0x353b2b0();
   input += synapse0x353b2f0();
   input += synapse0x353b330();
   input += synapse0x353b370();
   input += synapse0x353b3b0();
   input += synapse0x353b3f0();
   input += synapse0x353b430();
   input += synapse0x353b470();
   input += synapse0x353b4b0();
   input += synapse0x353b4f0();
   input += synapse0x353b530();
   input += synapse0x353afc0();
   input += synapse0x353b000();
   input += synapse0x353b680();
   input += synapse0x353b6c0();
   input += synapse0x353b700();
   input += synapse0x353b740();
   input += synapse0x353b780();
   input += synapse0x353b7c0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x353ae30() {
   double input = input0x353ae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x353b800() {
   double input = 5.36699;
   input += synapse0x353bb40();
   input += synapse0x353bb80();
   input += synapse0x353bbc0();
   input += synapse0x353bc00();
   input += synapse0x353bc40();
   input += synapse0x353bc80();
   input += synapse0x353bcc0();
   input += synapse0x353bd00();
   input += synapse0x353bd40();
   input += synapse0x353bd80();
   input += synapse0x353bdc0();
   input += synapse0x353be00();
   input += synapse0x353be40();
   input += synapse0x353be80();
   input += synapse0x353bec0();
   input += synapse0x353bf00();
   input += synapse0x353b990();
   input += synapse0x353b9d0();
   input += synapse0x353c050();
   input += synapse0x353c090();
   input += synapse0x353c0d0();
   input += synapse0x353c110();
   input += synapse0x353c150();
   input += synapse0x353c190();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x353b800() {
   double input = input0x353b800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x353c1d0() {
   double input = 0.455789;
   input += synapse0x353c510();
   input += synapse0x353c550();
   input += synapse0x353c590();
   input += synapse0x353c5d0();
   input += synapse0x353c610();
   input += synapse0x353c650();
   input += synapse0x353c690();
   input += synapse0x353c6d0();
   input += synapse0x353c710();
   input += synapse0x353c750();
   input += synapse0x353c790();
   input += synapse0x353c7d0();
   input += synapse0x353c810();
   input += synapse0x353c850();
   input += synapse0x353c890();
   input += synapse0x353c8d0();
   input += synapse0x353c360();
   input += synapse0x353c3a0();
   input += synapse0x353ca20();
   input += synapse0x353ca60();
   input += synapse0x353caa0();
   input += synapse0x353cae0();
   input += synapse0x353cb20();
   input += synapse0x353cb60();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x353c1d0() {
   double input = input0x353c1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x353cba0() {
   double input = 0.8251;
   input += synapse0x353cee0();
   input += synapse0x353cf20();
   input += synapse0x353cf60();
   input += synapse0x353cfa0();
   input += synapse0x353cfe0();
   input += synapse0x353d020();
   input += synapse0x353d060();
   input += synapse0x353d0a0();
   input += synapse0x353d0e0();
   input += synapse0x353d120();
   input += synapse0x353d160();
   input += synapse0x353d1a0();
   input += synapse0x353d1e0();
   input += synapse0x353d220();
   input += synapse0x353d260();
   input += synapse0x353d2a0();
   input += synapse0x353cd30();
   input += synapse0x353cd70();
   input += synapse0x353d3f0();
   input += synapse0x353d430();
   input += synapse0x353d470();
   input += synapse0x353d4b0();
   input += synapse0x353d4f0();
   input += synapse0x353d530();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x353cba0() {
   double input = input0x353cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x353d570() {
   double input = 3.09456;
   input += synapse0x353d8b0();
   input += synapse0x3531e80();
   input += synapse0x3531ec0();
   input += synapse0x3531f00();
   input += synapse0x3532150();
   input += synapse0x3532190();
   input += synapse0x35321d0();
   input += synapse0x3532420();
   input += synapse0x3532460();
   input += synapse0x35326b0();
   input += synapse0x35326f0();
   input += synapse0x3532730();
   input += synapse0x3532980();
   input += synapse0x35329c0();
   input += synapse0x3532c10();
   input += synapse0x3532c50();
   input += synapse0x353d700();
   input += synapse0x353d740();
   input += synapse0x3532da0();
   input += synapse0x35332b0();
   input += synapse0x35332f0();
   input += synapse0x3533330();
   input += synapse0x3533580();
   input += synapse0x35335c0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x353d570() {
   double input = input0x353d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3533600() {
   double input = -0.299088;
   input += synapse0x3532e70();
   input += synapse0x3532eb0();
   input += synapse0x3532ef0();
   input += synapse0x3532f30();
   input += synapse0x35338b0();
   input += synapse0x353fc00();
   input += synapse0x353fc40();
   input += synapse0x353fc80();
   input += synapse0x353fcc0();
   input += synapse0x353fd00();
   input += synapse0x353fd40();
   input += synapse0x353fd80();
   input += synapse0x353fdc0();
   input += synapse0x353fe00();
   input += synapse0x353fe40();
   input += synapse0x353fe80();
   input += synapse0x3533790();
   input += synapse0x35337d0();
   input += synapse0x353ffd0();
   input += synapse0x3540010();
   input += synapse0x3540050();
   input += synapse0x3540090();
   input += synapse0x35400d0();
   input += synapse0x3540110();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3533600() {
   double input = input0x3533600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3540150() {
   double input = -0.189009;
   input += synapse0x3540490();
   input += synapse0x35404d0();
   input += synapse0x3540510();
   input += synapse0x3540550();
   input += synapse0x3540590();
   input += synapse0x35405d0();
   input += synapse0x3540610();
   input += synapse0x3540650();
   input += synapse0x3540690();
   input += synapse0x35406d0();
   input += synapse0x3540710();
   input += synapse0x3540750();
   input += synapse0x3540790();
   input += synapse0x35407d0();
   input += synapse0x3540810();
   input += synapse0x3540850();
   input += synapse0x35402e0();
   input += synapse0x3540320();
   input += synapse0x35409a0();
   input += synapse0x35409e0();
   input += synapse0x3540a20();
   input += synapse0x3540a60();
   input += synapse0x3540aa0();
   input += synapse0x3540ae0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3540150() {
   double input = input0x3540150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3540b20() {
   double input = -2.61068;
   input += synapse0x3540e60();
   input += synapse0x3540ea0();
   input += synapse0x3540ee0();
   input += synapse0x3540f20();
   input += synapse0x3540f60();
   input += synapse0x3540fa0();
   input += synapse0x3540fe0();
   input += synapse0x3541020();
   input += synapse0x3541060();
   input += synapse0x35410a0();
   input += synapse0x35410e0();
   input += synapse0x3541120();
   input += synapse0x3541160();
   input += synapse0x35411a0();
   input += synapse0x35411e0();
   input += synapse0x3541220();
   input += synapse0x3540cb0();
   input += synapse0x3540cf0();
   input += synapse0x3541370();
   input += synapse0x35413b0();
   input += synapse0x35413f0();
   input += synapse0x3541430();
   input += synapse0x3541470();
   input += synapse0x35414b0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3540b20() {
   double input = input0x3540b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x35414f0() {
   double input = 4.76246;
   input += synapse0x3541830();
   input += synapse0x3541870();
   input += synapse0x35418b0();
   input += synapse0x35418f0();
   input += synapse0x3541930();
   input += synapse0x3541970();
   input += synapse0x35419b0();
   input += synapse0x35419f0();
   input += synapse0x3541a30();
   input += synapse0x3541a70();
   input += synapse0x3541ab0();
   input += synapse0x3541af0();
   input += synapse0x3541b30();
   input += synapse0x3541b70();
   input += synapse0x3541bb0();
   input += synapse0x3541bf0();
   input += synapse0x3541680();
   input += synapse0x35416c0();
   input += synapse0x3541d40();
   input += synapse0x3541d80();
   input += synapse0x3541dc0();
   input += synapse0x3541e00();
   input += synapse0x3541e40();
   input += synapse0x3541e80();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x35414f0() {
   double input = input0x35414f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3541ec0() {
   double input = -0.186641;
   input += synapse0x3542200();
   input += synapse0x3542240();
   input += synapse0x3542280();
   input += synapse0x35422c0();
   input += synapse0x3542300();
   input += synapse0x3542340();
   input += synapse0x3542380();
   input += synapse0x35423c0();
   input += synapse0x3542400();
   input += synapse0x3542440();
   input += synapse0x3542480();
   input += synapse0x35424c0();
   input += synapse0x3542500();
   input += synapse0x3542540();
   input += synapse0x3542580();
   input += synapse0x35425c0();
   input += synapse0x3542050();
   input += synapse0x3542090();
   input += synapse0x3542710();
   input += synapse0x3542750();
   input += synapse0x3542790();
   input += synapse0x35427d0();
   input += synapse0x3542810();
   input += synapse0x3542850();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3541ec0() {
   double input = input0x3541ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3542890() {
   double input = -1.62688;
   input += synapse0x3542bd0();
   input += synapse0x3542c10();
   input += synapse0x3542c50();
   input += synapse0x3542c90();
   input += synapse0x3542cd0();
   input += synapse0x3542d10();
   input += synapse0x3542d50();
   input += synapse0x3542d90();
   input += synapse0x3542dd0();
   input += synapse0x3542e10();
   input += synapse0x3542e50();
   input += synapse0x3542e90();
   input += synapse0x3542ed0();
   input += synapse0x3542f10();
   input += synapse0x3542f50();
   input += synapse0x3542f90();
   input += synapse0x3542a20();
   input += synapse0x3542a60();
   input += synapse0x35430e0();
   input += synapse0x3543120();
   input += synapse0x3543160();
   input += synapse0x35431a0();
   input += synapse0x35431e0();
   input += synapse0x3543220();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3542890() {
   double input = input0x3542890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3543260() {
   double input = -0.19994;
   input += synapse0x35435a0();
   input += synapse0x35435e0();
   input += synapse0x3543620();
   input += synapse0x3543660();
   input += synapse0x35436a0();
   input += synapse0x35436e0();
   input += synapse0x3543720();
   input += synapse0x3543760();
   input += synapse0x35437a0();
   input += synapse0x35437e0();
   input += synapse0x3543820();
   input += synapse0x3543860();
   input += synapse0x35438a0();
   input += synapse0x35438e0();
   input += synapse0x3543920();
   input += synapse0x3543960();
   input += synapse0x35433f0();
   input += synapse0x3543430();
   input += synapse0x3543ab0();
   input += synapse0x3543af0();
   input += synapse0x3543b30();
   input += synapse0x3543b70();
   input += synapse0x3543bb0();
   input += synapse0x3543bf0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3543260() {
   double input = input0x3543260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3543c30() {
   double input = -1.67181;
   input += synapse0x3543f70();
   input += synapse0x3543fb0();
   input += synapse0x3543ff0();
   input += synapse0x3544030();
   input += synapse0x3544070();
   input += synapse0x35440b0();
   input += synapse0x35440f0();
   input += synapse0x3544130();
   input += synapse0x3544170();
   input += synapse0x35441b0();
   input += synapse0x35441f0();
   input += synapse0x3544230();
   input += synapse0x3544270();
   input += synapse0x35442b0();
   input += synapse0x35442f0();
   input += synapse0x3544330();
   input += synapse0x3543dc0();
   input += synapse0x3543e00();
   input += synapse0x3544480();
   input += synapse0x35444c0();
   input += synapse0x3544500();
   input += synapse0x3544540();
   input += synapse0x3544580();
   input += synapse0x35445c0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3543c30() {
   double input = input0x3543c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3544600() {
   double input = -0.404366;
   input += synapse0x352d070();
   input += synapse0x352d0b0();
   input += synapse0x352d0f0();
   input += synapse0x352d130();
   input += synapse0x352d170();
   input += synapse0x352d1b0();
   input += synapse0x352d1f0();
   input += synapse0x352d230();
   input += synapse0x3544d50();
   input += synapse0x3544d90();
   input += synapse0x3544dd0();
   input += synapse0x3544e10();
   input += synapse0x3544e50();
   input += synapse0x3544e90();
   input += synapse0x3544ed0();
   input += synapse0x3544f10();
   input += synapse0x3544790();
   input += synapse0x35447d0();
   input += synapse0x3545060();
   input += synapse0x35450a0();
   input += synapse0x35450e0();
   input += synapse0x3545120();
   input += synapse0x3545160();
   input += synapse0x35451a0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3544600() {
   double input = input0x3544600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x35451e0() {
   double input = 0.159389;
   input += synapse0x3545520();
   input += synapse0x3545560();
   input += synapse0x35455a0();
   input += synapse0x35455e0();
   input += synapse0x3545620();
   input += synapse0x3545660();
   input += synapse0x35456a0();
   input += synapse0x35456e0();
   input += synapse0x3545720();
   input += synapse0x3545760();
   input += synapse0x35457a0();
   input += synapse0x35457e0();
   input += synapse0x3545820();
   input += synapse0x3545860();
   input += synapse0x35458a0();
   input += synapse0x35458e0();
   input += synapse0x3545370();
   input += synapse0x35453b0();
   input += synapse0x3545a30();
   input += synapse0x3545a70();
   input += synapse0x3545ab0();
   input += synapse0x3545af0();
   input += synapse0x3545b30();
   input += synapse0x3545b70();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x35451e0() {
   double input = input0x35451e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3545bb0() {
   double input = 3.72048;
   input += synapse0x3545ef0();
   input += synapse0x3545f30();
   input += synapse0x3545f70();
   input += synapse0x3545fb0();
   input += synapse0x3545ff0();
   input += synapse0x3546030();
   input += synapse0x3546070();
   input += synapse0x35460b0();
   input += synapse0x35460f0();
   input += synapse0x3546130();
   input += synapse0x3546170();
   input += synapse0x35461b0();
   input += synapse0x35461f0();
   input += synapse0x3546230();
   input += synapse0x3546270();
   input += synapse0x35462b0();
   input += synapse0x3545d40();
   input += synapse0x3545d80();
   input += synapse0x35368b0();
   input += synapse0x35368f0();
   input += synapse0x3536930();
   input += synapse0x3536970();
   input += synapse0x35369b0();
   input += synapse0x35369f0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3545bb0() {
   double input = input0x3545bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3536a30() {
   double input = -0.669106;
   input += synapse0x3536d70();
   input += synapse0x3536db0();
   input += synapse0x3536df0();
   input += synapse0x3536e30();
   input += synapse0x3536e70();
   input += synapse0x3536eb0();
   input += synapse0x3536ef0();
   input += synapse0x3536f30();
   input += synapse0x3536f70();
   input += synapse0x3536fb0();
   input += synapse0x3536ff0();
   input += synapse0x3537030();
   input += synapse0x3537070();
   input += synapse0x35370b0();
   input += synapse0x35370f0();
   input += synapse0x3537130();
   input += synapse0x3536bc0();
   input += synapse0x3536c00();
   input += synapse0x3537280();
   input += synapse0x35372c0();
   input += synapse0x3537300();
   input += synapse0x3537340();
   input += synapse0x3537380();
   input += synapse0x35373c0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3536a30() {
   double input = input0x3536a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3537400() {
   double input = -0.359991;
   input += synapse0x3537740();
   input += synapse0x3537780();
   input += synapse0x35377c0();
   input += synapse0x3537800();
   input += synapse0x3537840();
   input += synapse0x3537880();
   input += synapse0x35378c0();
   input += synapse0x3537900();
   input += synapse0x3537940();
   input += synapse0x3537980();
   input += synapse0x35379c0();
   input += synapse0x3537a00();
   input += synapse0x3537a40();
   input += synapse0x3537a80();
   input += synapse0x3537ac0();
   input += synapse0x3537b00();
   input += synapse0x3537590();
   input += synapse0x35375d0();
   input += synapse0x3537c50();
   input += synapse0x3537c90();
   input += synapse0x3537cd0();
   input += synapse0x3537d10();
   input += synapse0x3537d50();
   input += synapse0x3537d90();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3537400() {
   double input = input0x3537400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3537dd0() {
   double input = 0.890843;
   input += synapse0x3538110();
   input += synapse0x3538150();
   input += synapse0x3538190();
   input += synapse0x35381d0();
   input += synapse0x3538210();
   input += synapse0x3538250();
   input += synapse0x3538290();
   input += synapse0x35382d0();
   input += synapse0x3538310();
   input += synapse0x3538350();
   input += synapse0x3538390();
   input += synapse0x35383d0();
   input += synapse0x3538410();
   input += synapse0x3538450();
   input += synapse0x3538490();
   input += synapse0x35384d0();
   input += synapse0x3537f60();
   input += synapse0x3537fa0();
   input += synapse0x3538620();
   input += synapse0x3538660();
   input += synapse0x35386a0();
   input += synapse0x35386e0();
   input += synapse0x3538720();
   input += synapse0x3538760();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3537dd0() {
   double input = input0x3537dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x354a410() {
   double input = -0.0880075;
   input += synapse0x354a630();
   input += synapse0x354a670();
   input += synapse0x354a6b0();
   input += synapse0x354a6f0();
   input += synapse0x354a730();
   input += synapse0x354a770();
   input += synapse0x354a7b0();
   input += synapse0x354a7f0();
   input += synapse0x354a830();
   input += synapse0x354a870();
   input += synapse0x354a8b0();
   input += synapse0x354a8f0();
   input += synapse0x354a930();
   input += synapse0x354a970();
   input += synapse0x354a9b0();
   input += synapse0x354a9f0();
   input += synapse0x35387a0();
   input += synapse0x35387e0();
   input += synapse0x354ab40();
   input += synapse0x354ab80();
   input += synapse0x354abc0();
   input += synapse0x354ac00();
   input += synapse0x354ac40();
   input += synapse0x354ac80();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x354a410() {
   double input = input0x354a410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x354acc0() {
   double input = -1.68719;
   input += synapse0x354b000();
   input += synapse0x354b040();
   input += synapse0x354b080();
   input += synapse0x354b0c0();
   input += synapse0x354b100();
   input += synapse0x354b140();
   input += synapse0x354b180();
   input += synapse0x354b1c0();
   input += synapse0x354b200();
   input += synapse0x354b240();
   input += synapse0x354b280();
   input += synapse0x354b2c0();
   input += synapse0x354b300();
   input += synapse0x354b340();
   input += synapse0x354b380();
   input += synapse0x354b3c0();
   input += synapse0x354ae50();
   input += synapse0x354ae90();
   input += synapse0x354b510();
   input += synapse0x354b550();
   input += synapse0x354b590();
   input += synapse0x354b5d0();
   input += synapse0x354b610();
   input += synapse0x354b650();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x354acc0() {
   double input = input0x354acc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x354b690() {
   double input = -1.49656;
   input += synapse0x354b9d0();
   input += synapse0x354ba10();
   input += synapse0x354ba50();
   input += synapse0x354ba90();
   input += synapse0x354bad0();
   input += synapse0x354bb10();
   input += synapse0x354bb50();
   input += synapse0x354bb90();
   input += synapse0x354bbd0();
   input += synapse0x354bc10();
   input += synapse0x354bc50();
   input += synapse0x354bc90();
   input += synapse0x354bcd0();
   input += synapse0x354bd10();
   input += synapse0x354bd50();
   input += synapse0x354bd90();
   input += synapse0x354b820();
   input += synapse0x354b860();
   input += synapse0x354bee0();
   input += synapse0x354bf20();
   input += synapse0x354bf60();
   input += synapse0x354bfa0();
   input += synapse0x354bfe0();
   input += synapse0x354c020();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x354b690() {
   double input = input0x354b690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x354c060() {
   double input = 1.77595;
   input += synapse0x354c3a0();
   input += synapse0x354c3e0();
   input += synapse0x354c420();
   input += synapse0x354c460();
   input += synapse0x354c4a0();
   input += synapse0x354c4e0();
   input += synapse0x354c520();
   input += synapse0x354c560();
   input += synapse0x354c5a0();
   input += synapse0x354c5e0();
   input += synapse0x354c620();
   input += synapse0x354c660();
   input += synapse0x354c6a0();
   input += synapse0x354c6e0();
   input += synapse0x354c720();
   input += synapse0x354c760();
   input += synapse0x354c1f0();
   input += synapse0x354c230();
   input += synapse0x354c8b0();
   input += synapse0x354c8f0();
   input += synapse0x354c930();
   input += synapse0x354c970();
   input += synapse0x354c9b0();
   input += synapse0x354c9f0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x354c060() {
   double input = input0x354c060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3553260() {
   double input = -2.26692;
   input += synapse0x32ec7d0();
   input += synapse0x32ec810();
   input += synapse0x3529390();
   input += synapse0x35293d0();
   input += synapse0x352ae70();
   input += synapse0x352aeb0();
   input += synapse0x352bc40();
   input += synapse0x352bc80();
   input += synapse0x352c610();
   input += synapse0x352c650();
   input += synapse0x352cfe0();
   input += synapse0x352d020();
   input += synapse0x352dac0();
   input += synapse0x352db00();
   input += synapse0x352e490();
   input += synapse0x352e4d0();
   input += synapse0x352b570();
   input += synapse0x352b5b0();
   input += synapse0x3530040();
   input += synapse0x3530080();
   input += synapse0x3530a10();
   input += synapse0x3530a50();
   input += synapse0x35313e0();
   input += synapse0x3531420();
   input += synapse0x3531db0();
   input += synapse0x3531df0();
   input += synapse0x3524e40();
   input += synapse0x3524e80();
   input += synapse0x3533ea0();
   input += synapse0x3533ee0();
   input += synapse0x3534870();
   input += synapse0x35348b0();
   input += synapse0x3535240();
   input += synapse0x3535280();
   input += synapse0x3535c10();
   input += synapse0x3535c50();
   input += synapse0x35365e0();
   input += synapse0x3536620();
   input += synapse0x352f130();
   input += synapse0x352f170();
   input += synapse0x35389e0();
   input += synapse0x3538a20();
   input += synapse0x3539370();
   input += synapse0x35393b0();
   input += synapse0x3539d40();
   input += synapse0x3539d80();
   input += synapse0x353a710();
   input += synapse0x353a750();
   input += synapse0x353b0e0();
   input += synapse0x353b120();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3553260() {
   double input = input0x3553260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3553600() {
   double input = -0.525552;
   input += synapse0x353d820();
   input += synapse0x353d860();
   input += synapse0x3532de0();
   input += synapse0x3532e20();
   input += synapse0x3540400();
   input += synapse0x3540440();
   input += synapse0x3540dd0();
   input += synapse0x3540e10();
   input += synapse0x35417a0();
   input += synapse0x35417e0();
   input += synapse0x3542170();
   input += synapse0x35421b0();
   input += synapse0x3542b40();
   input += synapse0x3542b80();
   input += synapse0x3543510();
   input += synapse0x3543550();
   input += synapse0x3543ee0();
   input += synapse0x3543f20();
   input += synapse0x35448b0();
   input += synapse0x35448f0();
   input += synapse0x3545490();
   input += synapse0x35454d0();
   input += synapse0x3545e60();
   input += synapse0x3545ea0();
   input += synapse0x3536ce0();
   input += synapse0x3536d20();
   input += synapse0x35376b0();
   input += synapse0x35376f0();
   input += synapse0x3538080();
   input += synapse0x35380c0();
   input += synapse0x354a5a0();
   input += synapse0x354a5e0();
   input += synapse0x354af70();
   input += synapse0x354afb0();
   input += synapse0x354b940();
   input += synapse0x354b980();
   input += synapse0x354c310();
   input += synapse0x354c350();
   input += synapse0x3527180();
   input += synapse0x35271c0();
   input += synapse0x353bab0();
   input += synapse0x353baf0();
   input += synapse0x354ca30();
   input += synapse0x354ca70();
   input += synapse0x354cab0();
   input += synapse0x354caf0();
   input += synapse0x35539a0();
   input += synapse0x35539e0();
   input += synapse0x3553a20();
   input += synapse0x3553a60();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3553600() {
   double input = input0x3553600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3553aa0() {
   double input = -0.757891;
   input += synapse0x3553de0();
   input += synapse0x3553e20();
   input += synapse0x3553e60();
   input += synapse0x3553ea0();
   input += synapse0x3553ee0();
   input += synapse0x3553f20();
   input += synapse0x3553f60();
   input += synapse0x3553fa0();
   input += synapse0x3553fe0();
   input += synapse0x3554020();
   input += synapse0x3554060();
   input += synapse0x35540a0();
   input += synapse0x35540e0();
   input += synapse0x3554120();
   input += synapse0x3554160();
   input += synapse0x35541a0();
   input += synapse0x3553c30();
   input += synapse0x3553c70();
   input += synapse0x35542f0();
   input += synapse0x3554330();
   input += synapse0x3554370();
   input += synapse0x35543b0();
   input += synapse0x35543f0();
   input += synapse0x3554430();
   input += synapse0x3554470();
   input += synapse0x35544b0();
   input += synapse0x35544f0();
   input += synapse0x3554530();
   input += synapse0x3554570();
   input += synapse0x35545b0();
   input += synapse0x35545f0();
   input += synapse0x3554630();
   input += synapse0x35541e0();
   input += synapse0x3554220();
   input += synapse0x3554260();
   input += synapse0x35542a0();
   input += synapse0x3554880();
   input += synapse0x35548c0();
   input += synapse0x3554900();
   input += synapse0x3554940();
   input += synapse0x3554980();
   input += synapse0x35549c0();
   input += synapse0x3554a00();
   input += synapse0x3554a40();
   input += synapse0x3554a80();
   input += synapse0x3554ac0();
   input += synapse0x3554b00();
   input += synapse0x3554b40();
   input += synapse0x3554b80();
   input += synapse0x3554bc0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3553aa0() {
   double input = input0x3553aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3554c00() {
   double input = 1.18097;
   input += synapse0x3554f40();
   input += synapse0x3554f80();
   input += synapse0x3554fc0();
   input += synapse0x3555000();
   input += synapse0x3555040();
   input += synapse0x3555080();
   input += synapse0x35550c0();
   input += synapse0x3555100();
   input += synapse0x3555140();
   input += synapse0x3555180();
   input += synapse0x35551c0();
   input += synapse0x3555200();
   input += synapse0x3555240();
   input += synapse0x3555280();
   input += synapse0x35552c0();
   input += synapse0x3555300();
   input += synapse0x3554d90();
   input += synapse0x3554dd0();
   input += synapse0x3555450();
   input += synapse0x3555490();
   input += synapse0x35554d0();
   input += synapse0x3555510();
   input += synapse0x3555550();
   input += synapse0x3555590();
   input += synapse0x35555d0();
   input += synapse0x3555610();
   input += synapse0x3555650();
   input += synapse0x3555690();
   input += synapse0x35556d0();
   input += synapse0x3555710();
   input += synapse0x3555750();
   input += synapse0x3555790();
   input += synapse0x3555340();
   input += synapse0x3555380();
   input += synapse0x35553c0();
   input += synapse0x3555400();
   input += synapse0x35559e0();
   input += synapse0x3555a20();
   input += synapse0x3555a60();
   input += synapse0x3555aa0();
   input += synapse0x3555ae0();
   input += synapse0x3555b20();
   input += synapse0x3555b60();
   input += synapse0x3555ba0();
   input += synapse0x3555be0();
   input += synapse0x3555c20();
   input += synapse0x3555c60();
   input += synapse0x3555ca0();
   input += synapse0x3555ce0();
   input += synapse0x3555d20();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3554c00() {
   double input = input0x3554c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3555d60() {
   double input = -0.604737;
   input += synapse0x35560a0();
   input += synapse0x35560e0();
   input += synapse0x3556120();
   input += synapse0x3556160();
   input += synapse0x35561a0();
   input += synapse0x35561e0();
   input += synapse0x3556220();
   input += synapse0x3556260();
   input += synapse0x35562a0();
   input += synapse0x35562e0();
   input += synapse0x3556320();
   input += synapse0x3556360();
   input += synapse0x35563a0();
   input += synapse0x35563e0();
   input += synapse0x3556420();
   input += synapse0x3556460();
   input += synapse0x3555ef0();
   input += synapse0x3555f30();
   input += synapse0x35565b0();
   input += synapse0x35565f0();
   input += synapse0x3556630();
   input += synapse0x3556670();
   input += synapse0x35566b0();
   input += synapse0x35566f0();
   input += synapse0x3556730();
   input += synapse0x3556770();
   input += synapse0x35567b0();
   input += synapse0x35567f0();
   input += synapse0x3556830();
   input += synapse0x3556870();
   input += synapse0x35568b0();
   input += synapse0x35568f0();
   input += synapse0x35564a0();
   input += synapse0x35564e0();
   input += synapse0x3556520();
   input += synapse0x3556560();
   input += synapse0x3556b40();
   input += synapse0x3556b80();
   input += synapse0x3556bc0();
   input += synapse0x3556c00();
   input += synapse0x3556c40();
   input += synapse0x3556c80();
   input += synapse0x3556cc0();
   input += synapse0x3556d00();
   input += synapse0x3556d40();
   input += synapse0x3556d80();
   input += synapse0x3556dc0();
   input += synapse0x3556e00();
   input += synapse0x3556e40();
   input += synapse0x3556e80();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3555d60() {
   double input = input0x3555d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1m::input0x3556ec0() {
   double input = 3.48071;
   input += synapse0x35570e0();
   input += synapse0x3557120();
   input += synapse0x3557160();
   input += synapse0x35571a0();
   input += synapse0x35571e0();
   return input;
}

double NNfunction_nn_chi3_charge1m::neuron0x3556ec0() {
   double input = input0x3556ec0();
   return (input * 1)+0;
}

double NNfunction_nn_chi3_charge1m::synapse0x3527210() {
   return (neuron0x3521f30()*-0.00347648);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527250() {
   return (neuron0x35221e0()*8.47578);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527290() {
   return (neuron0x3522520()*-1.83575);
}

double NNfunction_nn_chi3_charge1m::synapse0x35272d0() {
   return (neuron0x3522860()*0.00919321);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527310() {
   return (neuron0x3522ba0()*0.005291);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527350() {
   return (neuron0x3522ee0()*-0.00229723);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527390() {
   return (neuron0x3523220()*0.0277037);
}

double NNfunction_nn_chi3_charge1m::synapse0x35273d0() {
   return (neuron0x3523560()*0.00846546);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527410() {
   return (neuron0x35238a0()*0.00516904);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527450() {
   return (neuron0x3523be0()*0.0089504);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527490() {
   return (neuron0x3523f20()*-0.013942);
}

double NNfunction_nn_chi3_charge1m::synapse0x35274d0() {
   return (neuron0x3524260()*-0.0536846);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527510() {
   return (neuron0x35245a0()*-0.0103391);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527550() {
   return (neuron0x35248e0()*-0.00851286);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527590() {
   return (neuron0x3524c20()*0.0250595);
}

double NNfunction_nn_chi3_charge1m::synapse0x35275d0() {
   return (neuron0x3524f60()*0.0221786);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527060() {
   return (neuron0x35252a0()*0.00581363);
}

double NNfunction_nn_chi3_charge1m::synapse0x35270a0() {
   return (neuron0x3525800()*0.000824992);
}

double NNfunction_nn_chi3_charge1m::synapse0x25f1eb0() {
   return (neuron0x3525a20()*-0.0111501);
}

double NNfunction_nn_chi3_charge1m::synapse0x25f1ef0() {
   return (neuron0x3525d60()*-0.00425854);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527720() {
   return (neuron0x35260a0()*-0.00532219);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527760() {
   return (neuron0x35263e0()*-0.00607337);
}

double NNfunction_nn_chi3_charge1m::synapse0x35277a0() {
   return (neuron0x3526720()*0.00704476);
}

double NNfunction_nn_chi3_charge1m::synapse0x35277e0() {
   return (neuron0x3526a60()*-0.918262);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527b60() {
   return (neuron0x3521f30()*0.00157013);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527ba0() {
   return (neuron0x35221e0()*-0.0049291);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527be0() {
   return (neuron0x3522520()*0.177997);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527c20() {
   return (neuron0x3522860()*0.00608337);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527c60() {
   return (neuron0x3522ba0()*-0.00687581);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527ca0() {
   return (neuron0x3522ee0()*-0.00172034);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527ce0() {
   return (neuron0x3523220()*-0.00103525);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527d20() {
   return (neuron0x3523560()*-0.00390319);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527d60() {
   return (neuron0x35238a0()*0.0125308);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527610() {
   return (neuron0x3523be0()*-0.020464);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527650() {
   return (neuron0x3523f20()*-0.0153125);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527690() {
   return (neuron0x3524260()*0.0394071);
}

double NNfunction_nn_chi3_charge1m::synapse0x35276d0() {
   return (neuron0x35245a0()*0.0162273);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527fb0() {
   return (neuron0x35248e0()*0.0227918);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527ff0() {
   return (neuron0x3524c20()*0.00911575);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528030() {
   return (neuron0x3524f60()*0.00433785);
}

double NNfunction_nn_chi3_charge1m::synapse0x35279b0() {
   return (neuron0x35252a0()*-0.0279176);
}

double NNfunction_nn_chi3_charge1m::synapse0x35279f0() {
   return (neuron0x3525800()*0.0119509);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528180() {
   return (neuron0x3525a20()*-0.00479631);
}

double NNfunction_nn_chi3_charge1m::synapse0x35281c0() {
   return (neuron0x3525d60()*-0.00371147);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528200() {
   return (neuron0x35260a0()*-0.0266017);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528240() {
   return (neuron0x35263e0()*-0.00364138);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528280() {
   return (neuron0x3526720()*0.0170169);
}

double NNfunction_nn_chi3_charge1m::synapse0x35282c0() {
   return (neuron0x3526a60()*1.55923);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528640() {
   return (neuron0x3521f30()*0.0270735);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528680() {
   return (neuron0x35221e0()*-0.138136);
}

double NNfunction_nn_chi3_charge1m::synapse0x35286c0() {
   return (neuron0x3522520()*0.406903);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528700() {
   return (neuron0x3522860()*0.0127682);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528740() {
   return (neuron0x3522ba0()*-0.00533554);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528780() {
   return (neuron0x3522ee0()*-0.00235229);
}

double NNfunction_nn_chi3_charge1m::synapse0x35287c0() {
   return (neuron0x3523220()*-0.00475872);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528800() {
   return (neuron0x3523560()*-0.0177351);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528840() {
   return (neuron0x35238a0()*0.00699069);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528880() {
   return (neuron0x3523be0()*-0.000821249);
}

double NNfunction_nn_chi3_charge1m::synapse0x35288c0() {
   return (neuron0x3523f20()*-0.00368245);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528900() {
   return (neuron0x3524260()*-0.0657083);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528940() {
   return (neuron0x35245a0()*0.0407744);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528980() {
   return (neuron0x35248e0()*0.0252841);
}

double NNfunction_nn_chi3_charge1m::synapse0x35289c0() {
   return (neuron0x3524c20()*-8.71632e-05);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528a00() {
   return (neuron0x3524f60()*-0.0176433);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528490() {
   return (neuron0x35252a0()*0.00496171);
}

double NNfunction_nn_chi3_charge1m::synapse0x35284d0() {
   return (neuron0x3525800()*0.0296299);
}

double NNfunction_nn_chi3_charge1m::synapse0x218ff10() {
   return (neuron0x3525a20()*0.0174022);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ebfe0() {
   return (neuron0x3525d60()*0.00966232);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec020() {
   return (neuron0x35260a0()*-0.0209037);
}

double NNfunction_nn_chi3_charge1m::synapse0x352a940() {
   return (neuron0x35263e0()*-0.0143825);
}

double NNfunction_nn_chi3_charge1m::synapse0x352a980() {
   return (neuron0x3526720()*0.0192285);
}

double NNfunction_nn_chi3_charge1m::synapse0x3521c70() {
   return (neuron0x3526a60()*4.94499);
}

double NNfunction_nn_chi3_charge1m::synapse0x3521d40() {
   return (neuron0x3521f30()*0.0616867);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec860() {
   return (neuron0x35221e0()*-0.0306708);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527f30() {
   return (neuron0x3522520()*-0.251457);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527f70() {
   return (neuron0x3522860()*0.0107034);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528b50() {
   return (neuron0x3522ba0()*0.0234975);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528b90() {
   return (neuron0x3522ee0()*0.024341);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528bd0() {
   return (neuron0x3523220()*-0.043898);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528c10() {
   return (neuron0x3523560()*-0.0514361);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528c50() {
   return (neuron0x35238a0()*-0.000227815);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528c90() {
   return (neuron0x3523be0()*-0.0473149);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528cd0() {
   return (neuron0x3523f20()*-0.0905477);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528d10() {
   return (neuron0x3524260()*0.409913);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528d50() {
   return (neuron0x35245a0()*-0.0540274);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528d90() {
   return (neuron0x35248e0()*0.133103);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528dd0() {
   return (neuron0x3524c20()*-0.04747);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528e10() {
   return (neuron0x3524f60()*-0.0100316);
}

double NNfunction_nn_chi3_charge1m::synapse0x3521cb0() {
   return (neuron0x35252a0()*0.0525848);
}

double NNfunction_nn_chi3_charge1m::synapse0x3521cf0() {
   return (neuron0x3525800()*-0.0321395);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528f60() {
   return (neuron0x3525a20()*-0.125868);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528fa0() {
   return (neuron0x3525d60()*0.00219125);
}

double NNfunction_nn_chi3_charge1m::synapse0x3528fe0() {
   return (neuron0x35260a0()*-0.0478316);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529020() {
   return (neuron0x35263e0()*0.00931462);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529060() {
   return (neuron0x3526720()*0.0386981);
}

double NNfunction_nn_chi3_charge1m::synapse0x35290a0() {
   return (neuron0x3526a60()*2.94829);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529420() {
   return (neuron0x3521f30()*-0.937827);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529460() {
   return (neuron0x35221e0()*0.837608);
}

double NNfunction_nn_chi3_charge1m::synapse0x35294a0() {
   return (neuron0x3522520()*0.165453);
}

double NNfunction_nn_chi3_charge1m::synapse0x35294e0() {
   return (neuron0x3522860()*0.208983);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529520() {
   return (neuron0x3522ba0()*0.354888);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529560() {
   return (neuron0x3522ee0()*-0.752639);
}

double NNfunction_nn_chi3_charge1m::synapse0x35295a0() {
   return (neuron0x3523220()*-0.185617);
}

double NNfunction_nn_chi3_charge1m::synapse0x35295e0() {
   return (neuron0x3523560()*-0.312709);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529620() {
   return (neuron0x35238a0()*-0.249481);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529660() {
   return (neuron0x3523be0()*-0.318131);
}

double NNfunction_nn_chi3_charge1m::synapse0x35296a0() {
   return (neuron0x3523f20()*-0.410075);
}

double NNfunction_nn_chi3_charge1m::synapse0x35296e0() {
   return (neuron0x3524260()*-0.55388);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529720() {
   return (neuron0x35245a0()*-0.0586406);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529760() {
   return (neuron0x35248e0()*0.0875827);
}

double NNfunction_nn_chi3_charge1m::synapse0x35297a0() {
   return (neuron0x3524c20()*0.0885801);
}

double NNfunction_nn_chi3_charge1m::synapse0x35297e0() {
   return (neuron0x3524f60()*0.0479169);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529930() {
   return (neuron0x35252a0()*0.287507);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529270() {
   return (neuron0x3525800()*0.352025);
}

double NNfunction_nn_chi3_charge1m::synapse0x35292b0() {
   return (neuron0x3525a20()*-0.0998006);
}

double NNfunction_nn_chi3_charge1m::synapse0x352aa80() {
   return (neuron0x3525d60()*0.417315);
}

double NNfunction_nn_chi3_charge1m::synapse0x352aac0() {
   return (neuron0x35260a0()*-0.200285);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ab00() {
   return (neuron0x35263e0()*-0.165938);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ab40() {
   return (neuron0x3526720()*1.32284);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ab80() {
   return (neuron0x3526a60()*-1.22876);
}

double NNfunction_nn_chi3_charge1m::synapse0x352af00() {
   return (neuron0x3521f30()*-0.0366327);
}

double NNfunction_nn_chi3_charge1m::synapse0x352af40() {
   return (neuron0x35221e0()*-0.0496691);
}

double NNfunction_nn_chi3_charge1m::synapse0x352af80() {
   return (neuron0x3522520()*6.024);
}

double NNfunction_nn_chi3_charge1m::synapse0x352afc0() {
   return (neuron0x3522860()*0.00185252);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b000() {
   return (neuron0x3522ba0()*-0.00182823);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b040() {
   return (neuron0x3522ee0()*0.0244895);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b080() {
   return (neuron0x3523220()*-0.00529816);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b0c0() {
   return (neuron0x3523560()*-0.00644252);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b100() {
   return (neuron0x35238a0()*-0.0168961);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec330() {
   return (neuron0x3523be0()*-0.0141574);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec370() {
   return (neuron0x3523f20()*0.00311017);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec3b0() {
   return (neuron0x3524260()*-0.0478624);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec3f0() {
   return (neuron0x35245a0()*-0.0361904);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec430() {
   return (neuron0x35248e0()*-0.0303501);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec470() {
   return (neuron0x3524c20()*-0.00911273);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec4b0() {
   return (neuron0x3524f60()*-0.0288452);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ad50() {
   return (neuron0x35252a0()*0.00514153);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ad90() {
   return (neuron0x3525800()*0.014079);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec600() {
   return (neuron0x3525a20()*-0.015462);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec640() {
   return (neuron0x3525d60()*-0.00321246);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec680() {
   return (neuron0x35260a0()*-0.0190701);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec6c0() {
   return (neuron0x35263e0()*-0.0107182);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec700() {
   return (neuron0x3526720()*-0.000407268);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b950() {
   return (neuron0x3526a60()*3.44315);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bcd0() {
   return (neuron0x3521f30()*-4.54681);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bd10() {
   return (neuron0x35221e0()*-0.0141458);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bd50() {
   return (neuron0x3522520()*-0.821711);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bd90() {
   return (neuron0x3522860()*0.155915);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bdd0() {
   return (neuron0x3522ba0()*-0.08288);
}

double NNfunction_nn_chi3_charge1m::synapse0x352be10() {
   return (neuron0x3522ee0()*-0.132067);
}

double NNfunction_nn_chi3_charge1m::synapse0x352be50() {
   return (neuron0x3523220()*-0.160306);
}

double NNfunction_nn_chi3_charge1m::synapse0x352be90() {
   return (neuron0x3523560()*-0.0965569);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bed0() {
   return (neuron0x35238a0()*-0.171462);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bf10() {
   return (neuron0x3523be0()*-0.137988);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bf50() {
   return (neuron0x3523f20()*-0.0704111);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bf90() {
   return (neuron0x3524260()*-0.0636191);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bfd0() {
   return (neuron0x35245a0()*-0.0539957);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c010() {
   return (neuron0x35248e0()*-0.000353027);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c050() {
   return (neuron0x3524c20()*0.0621481);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c090() {
   return (neuron0x3524f60()*-0.0123158);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bb20() {
   return (neuron0x35252a0()*-0.0632464);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bb60() {
   return (neuron0x3525800()*-0.058436);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c1e0() {
   return (neuron0x3525a20()*-0.0456359);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c220() {
   return (neuron0x3525d60()*-0.0609283);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c260() {
   return (neuron0x35260a0()*-0.108932);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c2a0() {
   return (neuron0x35263e0()*-0.0802294);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c2e0() {
   return (neuron0x3526720()*0.0294479);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c320() {
   return (neuron0x3526a60()*-0.378338);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c6a0() {
   return (neuron0x3521f30()*0.0498884);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c6e0() {
   return (neuron0x35221e0()*-0.147872);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c720() {
   return (neuron0x3522520()*0.319274);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c760() {
   return (neuron0x3522860()*1.56992);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c7a0() {
   return (neuron0x3522ba0()*-0.234019);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c7e0() {
   return (neuron0x3522ee0()*-0.0855138);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c820() {
   return (neuron0x3523220()*-0.127374);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c860() {
   return (neuron0x3523560()*-0.626696);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c8a0() {
   return (neuron0x35238a0()*-0.31402);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c8e0() {
   return (neuron0x3523be0()*-0.182217);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c920() {
   return (neuron0x3523f20()*-0.385824);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c960() {
   return (neuron0x3524260()*-0.315947);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c9a0() {
   return (neuron0x35245a0()*0.0312942);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c9e0() {
   return (neuron0x35248e0()*0.649222);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ca20() {
   return (neuron0x3524c20()*-0.0364505);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ca60() {
   return (neuron0x3524f60()*-0.137621);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c4f0() {
   return (neuron0x35252a0()*0.0240112);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c530() {
   return (neuron0x3525800()*0.179013);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cbb0() {
   return (neuron0x3525a20()*0.842069);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cbf0() {
   return (neuron0x3525d60()*-0.36978);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cc30() {
   return (neuron0x35260a0()*-0.806804);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cc70() {
   return (neuron0x35263e0()*-0.570639);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ccb0() {
   return (neuron0x3526720()*0.262047);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ccf0() {
   return (neuron0x3526a60()*3.05533);
}

double NNfunction_nn_chi3_charge1m::synapse0x35256f0() {
   return (neuron0x3521f30()*-0.440816);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525730() {
   return (neuron0x35221e0()*0.481);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525770() {
   return (neuron0x3522520()*0.511284);
}

double NNfunction_nn_chi3_charge1m::synapse0x35257b0() {
   return (neuron0x3522860()*0.0138716);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d280() {
   return (neuron0x3522ba0()*0.255523);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d2c0() {
   return (neuron0x3522ee0()*0.237482);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d300() {
   return (neuron0x3523220()*0.264914);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d340() {
   return (neuron0x3523560()*-0.090851);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d380() {
   return (neuron0x35238a0()*1.13271);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d3c0() {
   return (neuron0x3523be0()*0.0806804);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d400() {
   return (neuron0x3523f20()*-0.35767);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d440() {
   return (neuron0x3524260()*-0.173096);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d480() {
   return (neuron0x35245a0()*0.0616307);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d4c0() {
   return (neuron0x35248e0()*-0.176295);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d500() {
   return (neuron0x3524c20()*0.109099);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d540() {
   return (neuron0x3524f60()*-0.131226);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cec0() {
   return (neuron0x35252a0()*-0.591538);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cf00() {
   return (neuron0x3525800()*0.484657);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d690() {
   return (neuron0x3525a20()*1.49566);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d6d0() {
   return (neuron0x3525d60()*0.846462);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d710() {
   return (neuron0x35260a0()*-0.811543);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d750() {
   return (neuron0x35263e0()*-0.569175);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d790() {
   return (neuron0x3526720()*0.0775473);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d7d0() {
   return (neuron0x3526a60()*-0.0925972);
}

double NNfunction_nn_chi3_charge1m::synapse0x352db50() {
   return (neuron0x3521f30()*0.0221208);
}

double NNfunction_nn_chi3_charge1m::synapse0x352db90() {
   return (neuron0x35221e0()*0.00700932);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dbd0() {
   return (neuron0x3522520()*-0.0203048);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dc10() {
   return (neuron0x3522860()*0.798966);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dc50() {
   return (neuron0x3522ba0()*-0.13996);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dc90() {
   return (neuron0x3522ee0()*0.0132062);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dcd0() {
   return (neuron0x3523220()*0.0725584);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dd10() {
   return (neuron0x3523560()*-0.202591);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dd50() {
   return (neuron0x35238a0()*-0.0276185);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dd90() {
   return (neuron0x3523be0()*-0.160845);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ddd0() {
   return (neuron0x3523f20()*-0.102363);
}

double NNfunction_nn_chi3_charge1m::synapse0x352de10() {
   return (neuron0x3524260()*0.0556763);
}

double NNfunction_nn_chi3_charge1m::synapse0x352de50() {
   return (neuron0x35245a0()*0.0743968);
}

double NNfunction_nn_chi3_charge1m::synapse0x352de90() {
   return (neuron0x35248e0()*0.308136);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ded0() {
   return (neuron0x3524c20()*-0.0270667);
}

double NNfunction_nn_chi3_charge1m::synapse0x352df10() {
   return (neuron0x3524f60()*-0.04675);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d9a0() {
   return (neuron0x35252a0()*0.134713);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d9e0() {
   return (neuron0x3525800()*0.0740589);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e060() {
   return (neuron0x3525a20()*0.0955884);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e0a0() {
   return (neuron0x3525d60()*-0.0392951);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e0e0() {
   return (neuron0x35260a0()*-0.385266);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e120() {
   return (neuron0x35263e0()*-0.0863976);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e160() {
   return (neuron0x3526720()*0.0933273);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e1a0() {
   return (neuron0x3526a60()*0.87902);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e520() {
   return (neuron0x3521f30()*0.013429);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e560() {
   return (neuron0x35221e0()*0.07121);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e5a0() {
   return (neuron0x3522520()*-0.6491);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e5e0() {
   return (neuron0x3522860()*-0.307694);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e620() {
   return (neuron0x3522ba0()*-0.325075);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e660() {
   return (neuron0x3522ee0()*-0.254518);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e6a0() {
   return (neuron0x3523220()*0.0505778);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e6e0() {
   return (neuron0x3523560()*-0.123451);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e720() {
   return (neuron0x35238a0()*-0.20846);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e760() {
   return (neuron0x3523be0()*-0.191846);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e7a0() {
   return (neuron0x3523f20()*0.484736);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e7e0() {
   return (neuron0x3524260()*-0.417573);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e820() {
   return (neuron0x35245a0()*-0.564889);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e860() {
   return (neuron0x35248e0()*-0.188227);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e8a0() {
   return (neuron0x3524c20()*0.0388844);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e8e0() {
   return (neuron0x3524f60()*0.448139);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e370() {
   return (neuron0x35252a0()*0.383322);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e3b0() {
   return (neuron0x3525800()*-0.384767);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b140() {
   return (neuron0x3525a20()*0.200068);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b180() {
   return (neuron0x3525d60()*-0.487006);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b1c0() {
   return (neuron0x35260a0()*-0.209104);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b200() {
   return (neuron0x35263e0()*0.301274);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b240() {
   return (neuron0x3526720()*-0.0397161);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b280() {
   return (neuron0x3526a60()*-0.415472);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b600() {
   return (neuron0x3521f30()*0.00144927);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b640() {
   return (neuron0x35221e0()*-0.0147355);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b680() {
   return (neuron0x3522520()*-0.0786038);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b6c0() {
   return (neuron0x3522860()*-0.0137218);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b700() {
   return (neuron0x3522ba0()*0.00253068);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b740() {
   return (neuron0x3522ee0()*0.00320896);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b780() {
   return (neuron0x3523220()*0.00514804);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b7c0() {
   return (neuron0x3523560()*0.00729957);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b800() {
   return (neuron0x35238a0()*-0.00132048);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b840() {
   return (neuron0x3523be0()*0.0148604);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b880() {
   return (neuron0x3523f20()*0.00584182);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b8c0() {
   return (neuron0x3524260()*-0.0497028);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b900() {
   return (neuron0x35245a0()*-0.00439352);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fa40() {
   return (neuron0x35248e0()*-0.00667222);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fa80() {
   return (neuron0x3524c20()*-0.0105934);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fac0() {
   return (neuron0x3524f60()*-0.00435011);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b450() {
   return (neuron0x35252a0()*0.0103664);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b490() {
   return (neuron0x3525800()*0.000134652);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fc10() {
   return (neuron0x3525a20()*-0.00661361);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fc50() {
   return (neuron0x3525d60()*0.0173945);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fc90() {
   return (neuron0x35260a0()*0.023233);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fcd0() {
   return (neuron0x35263e0()*0.000973651);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fd10() {
   return (neuron0x3526720()*-0.00322408);
}

double NNfunction_nn_chi3_charge1m::synapse0x352fd50() {
   return (neuron0x3526a60()*-0.311774);
}

double NNfunction_nn_chi3_charge1m::synapse0x35300d0() {
   return (neuron0x3521f30()*-0.0159869);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530110() {
   return (neuron0x35221e0()*-0.0378716);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530150() {
   return (neuron0x3522520()*7.71747);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530190() {
   return (neuron0x3522860()*-0.070186);
}

double NNfunction_nn_chi3_charge1m::synapse0x35301d0() {
   return (neuron0x3522ba0()*0.0122033);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530210() {
   return (neuron0x3522ee0()*-0.0201832);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530250() {
   return (neuron0x3523220()*0.0413529);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530290() {
   return (neuron0x3523560()*-0.0425206);
}

double NNfunction_nn_chi3_charge1m::synapse0x35302d0() {
   return (neuron0x35238a0()*-0.0710516);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530310() {
   return (neuron0x3523be0()*-0.046888);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530350() {
   return (neuron0x3523f20()*-0.0157015);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530390() {
   return (neuron0x3524260()*-0.0482287);
}

double NNfunction_nn_chi3_charge1m::synapse0x35303d0() {
   return (neuron0x35245a0()*-0.0290454);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530410() {
   return (neuron0x35248e0()*-0.0663448);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530450() {
   return (neuron0x3524c20()*-0.0404376);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530490() {
   return (neuron0x3524f60()*-0.0928709);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ff20() {
   return (neuron0x35252a0()*-0.0120426);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ff60() {
   return (neuron0x3525800()*-0.0781337);
}

double NNfunction_nn_chi3_charge1m::synapse0x35305e0() {
   return (neuron0x3525a20()*-0.00582677);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530620() {
   return (neuron0x3525d60()*-0.0509477);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530660() {
   return (neuron0x35260a0()*-0.0063498);
}

double NNfunction_nn_chi3_charge1m::synapse0x35306a0() {
   return (neuron0x35263e0()*-0.0391454);
}

double NNfunction_nn_chi3_charge1m::synapse0x35306e0() {
   return (neuron0x3526720()*0.0226092);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530720() {
   return (neuron0x3526a60()*-6.0684);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530aa0() {
   return (neuron0x3521f30()*0.342298);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530ae0() {
   return (neuron0x35221e0()*-2.2307);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530b20() {
   return (neuron0x3522520()*-0.571515);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530b60() {
   return (neuron0x3522860()*-0.394154);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530ba0() {
   return (neuron0x3522ba0()*0.181074);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530be0() {
   return (neuron0x3522ee0()*-0.418814);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530c20() {
   return (neuron0x3523220()*0.729031);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530c60() {
   return (neuron0x3523560()*0.00231808);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530ca0() {
   return (neuron0x35238a0()*-0.0758176);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530ce0() {
   return (neuron0x3523be0()*0.01679);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530d20() {
   return (neuron0x3523f20()*0.53322);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530d60() {
   return (neuron0x3524260()*-0.330908);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530da0() {
   return (neuron0x35245a0()*-0.193518);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530de0() {
   return (neuron0x35248e0()*-0.0533116);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530e20() {
   return (neuron0x3524c20()*-0.491045);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530e60() {
   return (neuron0x3524f60()*-0.487695);
}

double NNfunction_nn_chi3_charge1m::synapse0x35308f0() {
   return (neuron0x35252a0()*-0.36757);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530930() {
   return (neuron0x3525800()*0.124701);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530fb0() {
   return (neuron0x3525a20()*0.214227);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530ff0() {
   return (neuron0x3525d60()*0.967415);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531030() {
   return (neuron0x35260a0()*1.54514);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531070() {
   return (neuron0x35263e0()*0.134559);
}

double NNfunction_nn_chi3_charge1m::synapse0x35310b0() {
   return (neuron0x3526720()*-0.219943);
}

double NNfunction_nn_chi3_charge1m::synapse0x35310f0() {
   return (neuron0x3526a60()*0.167209);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531470() {
   return (neuron0x3521f30()*-0.0041751);
}

double NNfunction_nn_chi3_charge1m::synapse0x35314b0() {
   return (neuron0x35221e0()*0.118376);
}

double NNfunction_nn_chi3_charge1m::synapse0x35314f0() {
   return (neuron0x3522520()*-0.547385);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531530() {
   return (neuron0x3522860()*-0.0276019);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531570() {
   return (neuron0x3522ba0()*0.00174674);
}

double NNfunction_nn_chi3_charge1m::synapse0x35315b0() {
   return (neuron0x3522ee0()*-0.00333091);
}

double NNfunction_nn_chi3_charge1m::synapse0x35315f0() {
   return (neuron0x3523220()*0.00613943);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531630() {
   return (neuron0x3523560()*0.013481);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531670() {
   return (neuron0x35238a0()*-0.00723036);
}

double NNfunction_nn_chi3_charge1m::synapse0x35316b0() {
   return (neuron0x3523be0()*-0.00318253);
}

double NNfunction_nn_chi3_charge1m::synapse0x35316f0() {
   return (neuron0x3523f20()*-0.00969583);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531730() {
   return (neuron0x3524260()*0.101273);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531770() {
   return (neuron0x35245a0()*-0.0513223);
}

double NNfunction_nn_chi3_charge1m::synapse0x35317b0() {
   return (neuron0x35248e0()*-0.0365269);
}

double NNfunction_nn_chi3_charge1m::synapse0x35317f0() {
   return (neuron0x3524c20()*0.00553132);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531830() {
   return (neuron0x3524f60()*-0.00553381);
}

double NNfunction_nn_chi3_charge1m::synapse0x35312c0() {
   return (neuron0x35252a0()*-0.0317371);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531300() {
   return (neuron0x3525800()*-0.00921781);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531980() {
   return (neuron0x3525a20()*-0.0201362);
}

double NNfunction_nn_chi3_charge1m::synapse0x35319c0() {
   return (neuron0x3525d60()*-0.0179355);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531a00() {
   return (neuron0x35260a0()*0.0140515);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531a40() {
   return (neuron0x35263e0()*0.0166035);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531a80() {
   return (neuron0x3526720()*-0.0115309);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531ac0() {
   return (neuron0x3526a60()*-4.84042);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531e40() {
   return (neuron0x3521f30()*-0.012502);
}

double NNfunction_nn_chi3_charge1m::synapse0x35220c0() {
   return (neuron0x35221e0()*-0.312662);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522100() {
   return (neuron0x3522520()*1.07608);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522400() {
   return (neuron0x3522860()*-0.00729409);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522440() {
   return (neuron0x3522ba0()*0.00280611);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522740() {
   return (neuron0x3522ee0()*0.0221651);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522780() {
   return (neuron0x3523220()*-0.019395);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522a80() {
   return (neuron0x3523560()*-0.0284454);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522ac0() {
   return (neuron0x35238a0()*-0.00404303);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522dc0() {
   return (neuron0x3523be0()*0.00893947);
}

double NNfunction_nn_chi3_charge1m::synapse0x3522e00() {
   return (neuron0x3523f20()*0.0178482);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523100() {
   return (neuron0x3524260()*-0.252446);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523140() {
   return (neuron0x35245a0()*0.0201271);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523440() {
   return (neuron0x35248e0()*0.013832);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523480() {
   return (neuron0x3524c20()*0.0177078);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523780() {
   return (neuron0x3524f60()*-0.0315892);
}

double NNfunction_nn_chi3_charge1m::synapse0x35237c0() {
   return (neuron0x35252a0()*0.000941109);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523ac0() {
   return (neuron0x3525800()*0.0391692);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523b00() {
   return (neuron0x3525a20()*-0.00156016);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523e00() {
   return (neuron0x3525d60()*0.00827195);
}

double NNfunction_nn_chi3_charge1m::synapse0x3523e40() {
   return (neuron0x35260a0()*-0.024845);
}

double NNfunction_nn_chi3_charge1m::synapse0x3524140() {
   return (neuron0x35263e0()*-0.021209);
}

double NNfunction_nn_chi3_charge1m::synapse0x3524180() {
   return (neuron0x3526720()*0.000974095);
}

double NNfunction_nn_chi3_charge1m::synapse0x3524480() {
   return (neuron0x3526a60()*1.59437);
}

double NNfunction_nn_chi3_charge1m::synapse0x35244c0() {
   return (neuron0x3521f30()*0.0533755);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525180() {
   return (neuron0x35221e0()*-0.0692867);
}

double NNfunction_nn_chi3_charge1m::synapse0x35251c0() {
   return (neuron0x3522520()*-1.05556);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531c90() {
   return (neuron0x3522860()*4.21714);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531cd0() {
   return (neuron0x3522ba0()*0.114524);
}

double NNfunction_nn_chi3_charge1m::synapse0x35254c0() {
   return (neuron0x3522ee0()*0.0379458);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525500() {
   return (neuron0x3523220()*0.17596);
}

double NNfunction_nn_chi3_charge1m::synapse0x25f4420() {
   return (neuron0x3523560()*-0.103765);
}

double NNfunction_nn_chi3_charge1m::synapse0x25f4460() {
   return (neuron0x35238a0()*-0.0242535);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525c40() {
   return (neuron0x3523be0()*-0.0460109);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525c80() {
   return (neuron0x3523f20()*-0.00621861);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525f80() {
   return (neuron0x3524260()*-0.452942);
}

double NNfunction_nn_chi3_charge1m::synapse0x3525fc0() {
   return (neuron0x35245a0()*0.0180966);
}

double NNfunction_nn_chi3_charge1m::synapse0x35262c0() {
   return (neuron0x35248e0()*-0.0197881);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526300() {
   return (neuron0x3524c20()*-0.00250396);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526600() {
   return (neuron0x3524f60()*-0.0490613);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526640() {
   return (neuron0x35252a0()*-0.0279407);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526940() {
   return (neuron0x3525800()*-0.345257);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526980() {
   return (neuron0x3525a20()*-0.0309275);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526c80() {
   return (neuron0x3525d60()*-0.207637);
}

double NNfunction_nn_chi3_charge1m::synapse0x3526cc0() {
   return (neuron0x35260a0()*0.0131443);
}

double NNfunction_nn_chi3_charge1m::synapse0x35247c0() {
   return (neuron0x35263e0()*-0.0630703);
}

double NNfunction_nn_chi3_charge1m::synapse0x3524800() {
   return (neuron0x3526720()*-0.0312138);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533bb0() {
   return (neuron0x3526a60()*-0.918713);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533f30() {
   return (neuron0x3521f30()*0.0467618);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533f70() {
   return (neuron0x35221e0()*-0.835979);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533fb0() {
   return (neuron0x3522520()*0.91939);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533ff0() {
   return (neuron0x3522860()*0.0898313);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534030() {
   return (neuron0x3522ba0()*-0.020307);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534070() {
   return (neuron0x3522ee0()*0.130527);
}

double NNfunction_nn_chi3_charge1m::synapse0x35340b0() {
   return (neuron0x3523220()*-0.013383);
}

double NNfunction_nn_chi3_charge1m::synapse0x35340f0() {
   return (neuron0x3523560()*0.0198287);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534130() {
   return (neuron0x35238a0()*-0.0274646);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534170() {
   return (neuron0x3523be0()*0.0455434);
}

double NNfunction_nn_chi3_charge1m::synapse0x35341b0() {
   return (neuron0x3523f20()*-0.0198964);
}

double NNfunction_nn_chi3_charge1m::synapse0x35341f0() {
   return (neuron0x3524260()*-0.0550761);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534230() {
   return (neuron0x35245a0()*0.126162);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534270() {
   return (neuron0x35248e0()*0.11383);
}

double NNfunction_nn_chi3_charge1m::synapse0x35342b0() {
   return (neuron0x3524c20()*0.0817373);
}

double NNfunction_nn_chi3_charge1m::synapse0x35342f0() {
   return (neuron0x3524f60()*-0.00497882);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533d80() {
   return (neuron0x35252a0()*-0.0157169);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533dc0() {
   return (neuron0x3525800()*0.107495);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534440() {
   return (neuron0x3525a20()*0.0701565);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534480() {
   return (neuron0x3525d60()*0.043818);
}

double NNfunction_nn_chi3_charge1m::synapse0x35344c0() {
   return (neuron0x35260a0()*-0.0231039);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534500() {
   return (neuron0x35263e0()*-0.0349616);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534540() {
   return (neuron0x3526720()*0.0481143);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534580() {
   return (neuron0x3526a60()*2.27416);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534900() {
   return (neuron0x3521f30()*-0.079114);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534940() {
   return (neuron0x35221e0()*-0.310525);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534980() {
   return (neuron0x3522520()*0.0726821);
}

double NNfunction_nn_chi3_charge1m::synapse0x35349c0() {
   return (neuron0x3522860()*0.334937);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534a00() {
   return (neuron0x3522ba0()*0.400963);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534a40() {
   return (neuron0x3522ee0()*-0.05246);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534a80() {
   return (neuron0x3523220()*0.0533651);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534ac0() {
   return (neuron0x3523560()*-0.321943);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534b00() {
   return (neuron0x35238a0()*0.962225);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534b40() {
   return (neuron0x3523be0()*-0.267251);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534b80() {
   return (neuron0x3523f20()*-0.557789);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534bc0() {
   return (neuron0x3524260()*0.121649);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534c00() {
   return (neuron0x35245a0()*-0.437512);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534c40() {
   return (neuron0x35248e0()*0.42419);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534c80() {
   return (neuron0x3524c20()*0.0890289);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534cc0() {
   return (neuron0x3524f60()*-0.183678);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534750() {
   return (neuron0x35252a0()*-0.705567);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534790() {
   return (neuron0x3525800()*0.0343463);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534e10() {
   return (neuron0x3525a20()*-1.05293);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534e50() {
   return (neuron0x3525d60()*0.458826);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534e90() {
   return (neuron0x35260a0()*-0.0116833);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534ed0() {
   return (neuron0x35263e0()*0.0627744);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534f10() {
   return (neuron0x3526720()*-0.0431872);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534f50() {
   return (neuron0x3526a60()*-0.045619);
}

double NNfunction_nn_chi3_charge1m::synapse0x35352d0() {
   return (neuron0x3521f30()*-0.023406);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535310() {
   return (neuron0x35221e0()*14.3337);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535350() {
   return (neuron0x3522520()*0.591513);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535390() {
   return (neuron0x3522860()*-0.0106595);
}

double NNfunction_nn_chi3_charge1m::synapse0x35353d0() {
   return (neuron0x3522ba0()*0.0301326);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535410() {
   return (neuron0x3522ee0()*0.00303292);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535450() {
   return (neuron0x3523220()*-0.00829919);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535490() {
   return (neuron0x3523560()*-0.00410768);
}

double NNfunction_nn_chi3_charge1m::synapse0x35354d0() {
   return (neuron0x35238a0()*0.00673479);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535510() {
   return (neuron0x3523be0()*0.00548183);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535550() {
   return (neuron0x3523f20()*-0.0236451);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535590() {
   return (neuron0x3524260()*-0.0640664);
}

double NNfunction_nn_chi3_charge1m::synapse0x35355d0() {
   return (neuron0x35245a0()*-0.0296647);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535610() {
   return (neuron0x35248e0()*-0.0498067);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535650() {
   return (neuron0x3524c20()*-0.0254603);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535690() {
   return (neuron0x3524f60()*-0.00443886);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535120() {
   return (neuron0x35252a0()*0.00924588);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535160() {
   return (neuron0x3525800()*-0.0153005);
}

double NNfunction_nn_chi3_charge1m::synapse0x35357e0() {
   return (neuron0x3525a20()*-0.0170357);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535820() {
   return (neuron0x3525d60()*-0.0231134);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535860() {
   return (neuron0x35260a0()*0.0243428);
}

double NNfunction_nn_chi3_charge1m::synapse0x35358a0() {
   return (neuron0x35263e0()*0.00735703);
}

double NNfunction_nn_chi3_charge1m::synapse0x35358e0() {
   return (neuron0x3526720()*0.00937979);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535920() {
   return (neuron0x3526a60()*-1.92539);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535ca0() {
   return (neuron0x3521f30()*0.000512444);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535ce0() {
   return (neuron0x35221e0()*-13.9046);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535d20() {
   return (neuron0x3522520()*0.42515);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535d60() {
   return (neuron0x3522860()*-0.000720204);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535da0() {
   return (neuron0x3522ba0()*0.0203947);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535de0() {
   return (neuron0x3522ee0()*0.010767);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535e20() {
   return (neuron0x3523220()*0.0281876);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535e60() {
   return (neuron0x3523560()*0.0152866);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535ea0() {
   return (neuron0x35238a0()*0.00304726);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535ee0() {
   return (neuron0x3523be0()*0.00223277);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535f20() {
   return (neuron0x3523f20()*-0.00341653);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535f60() {
   return (neuron0x3524260()*0.000559302);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535fa0() {
   return (neuron0x35245a0()*0.0150204);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535fe0() {
   return (neuron0x35248e0()*0.00457096);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536020() {
   return (neuron0x3524c20()*0.0150246);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536060() {
   return (neuron0x3524f60()*0.0157531);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535af0() {
   return (neuron0x35252a0()*0.0202026);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535b30() {
   return (neuron0x3525800()*0.00196492);
}

double NNfunction_nn_chi3_charge1m::synapse0x35361b0() {
   return (neuron0x3525a20()*0.00565213);
}

double NNfunction_nn_chi3_charge1m::synapse0x35361f0() {
   return (neuron0x3525d60()*0.0124422);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536230() {
   return (neuron0x35260a0()*0.00797382);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536270() {
   return (neuron0x35263e0()*-0.0125372);
}

double NNfunction_nn_chi3_charge1m::synapse0x35362b0() {
   return (neuron0x3526720()*0.00949371);
}

double NNfunction_nn_chi3_charge1m::synapse0x35362f0() {
   return (neuron0x3526a60()*-1.77134);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536670() {
   return (neuron0x3521f30()*-0.0210051);
}

double NNfunction_nn_chi3_charge1m::synapse0x35366b0() {
   return (neuron0x35221e0()*-0.0142202);
}

double NNfunction_nn_chi3_charge1m::synapse0x35366f0() {
   return (neuron0x3522520()*1.82321);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536730() {
   return (neuron0x3522860()*-0.139487);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536770() {
   return (neuron0x3522ba0()*0.465651);
}

double NNfunction_nn_chi3_charge1m::synapse0x35367b0() {
   return (neuron0x3522ee0()*0.472452);
}

double NNfunction_nn_chi3_charge1m::synapse0x35367f0() {
   return (neuron0x3523220()*-0.62003);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536830() {
   return (neuron0x3523560()*-0.490267);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536870() {
   return (neuron0x35238a0()*0.476516);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ea30() {
   return (neuron0x3523be0()*-0.875872);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ea70() {
   return (neuron0x3523f20()*0.369066);
}

double NNfunction_nn_chi3_charge1m::synapse0x352eab0() {
   return (neuron0x3524260()*-0.232737);
}

double NNfunction_nn_chi3_charge1m::synapse0x352eaf0() {
   return (neuron0x35245a0()*0.0259357);
}

double NNfunction_nn_chi3_charge1m::synapse0x352eb30() {
   return (neuron0x35248e0()*0.366725);
}

double NNfunction_nn_chi3_charge1m::synapse0x352eb70() {
   return (neuron0x3524c20()*0.93848);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ebb0() {
   return (neuron0x3524f60()*0.489142);
}

double NNfunction_nn_chi3_charge1m::synapse0x35364c0() {
   return (neuron0x35252a0()*-0.186043);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536500() {
   return (neuron0x3525800()*0.274943);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ed00() {
   return (neuron0x3525a20()*0.39433);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ed40() {
   return (neuron0x3525d60()*0.416879);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ed80() {
   return (neuron0x35260a0()*-1.40323);
}

double NNfunction_nn_chi3_charge1m::synapse0x352edc0() {
   return (neuron0x35263e0()*0.00265206);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ee00() {
   return (neuron0x3526720()*-0.636153);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ee40() {
   return (neuron0x3526a60()*0.800875);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f1c0() {
   return (neuron0x3521f30()*0.0250039);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f200() {
   return (neuron0x35221e0()*-0.097633);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f240() {
   return (neuron0x3522520()*0.153629);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f280() {
   return (neuron0x3522860()*-0.00162644);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f2c0() {
   return (neuron0x3522ba0()*0.00104572);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f300() {
   return (neuron0x3522ee0()*-0.0170057);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f340() {
   return (neuron0x3523220()*0.00792413);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f380() {
   return (neuron0x3523560()*0.0129488);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f3c0() {
   return (neuron0x35238a0()*0.024178);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f400() {
   return (neuron0x3523be0()*0.0205643);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f440() {
   return (neuron0x3523f20()*0.0435329);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f480() {
   return (neuron0x3524260()*0.724034);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f4c0() {
   return (neuron0x35245a0()*0.0345781);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f500() {
   return (neuron0x35248e0()*0.00737615);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f540() {
   return (neuron0x3524c20()*0.0379495);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f580() {
   return (neuron0x3524f60()*0.00589063);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f010() {
   return (neuron0x35252a0()*-0.0126142);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f050() {
   return (neuron0x3525800()*0.0200108);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f6d0() {
   return (neuron0x3525a20()*-0.0180473);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f710() {
   return (neuron0x3525d60()*-0.0340659);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f750() {
   return (neuron0x35260a0()*0.0184357);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f790() {
   return (neuron0x35263e0()*0.0172753);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f7d0() {
   return (neuron0x3526720()*-0.00842506);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f810() {
   return (neuron0x3526a60()*-2.09657);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f9e0() {
   return (neuron0x3521f30()*0.41399);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538a70() {
   return (neuron0x35221e0()*0.409418);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538ab0() {
   return (neuron0x3522520()*0.620757);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538af0() {
   return (neuron0x3522860()*0.459857);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538b30() {
   return (neuron0x3522ba0()*-0.446522);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538b70() {
   return (neuron0x3522ee0()*0.0549583);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538bb0() {
   return (neuron0x3523220()*0.205621);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538bf0() {
   return (neuron0x3523560()*0.414343);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538c30() {
   return (neuron0x35238a0()*0.166058);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538c70() {
   return (neuron0x3523be0()*-0.137187);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538cb0() {
   return (neuron0x3523f20()*0.0874887);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538cf0() {
   return (neuron0x3524260()*-0.529262);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538d30() {
   return (neuron0x35245a0()*-0.631661);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538d70() {
   return (neuron0x35248e0()*0.209405);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538db0() {
   return (neuron0x3524c20()*-0.604385);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538df0() {
   return (neuron0x3524f60()*-0.35671);
}

double NNfunction_nn_chi3_charge1m::synapse0x35388c0() {
   return (neuron0x35252a0()*0.0623356);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538900() {
   return (neuron0x3525800()*-0.415184);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538f40() {
   return (neuron0x3525a20()*-0.47589);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538f80() {
   return (neuron0x3525d60()*0.507095);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538fc0() {
   return (neuron0x35260a0()*0.30002);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539000() {
   return (neuron0x35263e0()*-0.217841);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539040() {
   return (neuron0x3526720()*0.441945);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539080() {
   return (neuron0x3526a60()*-1.7441);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539400() {
   return (neuron0x3521f30()*0.356946);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539440() {
   return (neuron0x35221e0()*-0.424128);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539480() {
   return (neuron0x3522520()*-0.48961);
}

double NNfunction_nn_chi3_charge1m::synapse0x35394c0() {
   return (neuron0x3522860()*-0.0583296);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539500() {
   return (neuron0x3522ba0()*-0.00671752);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539540() {
   return (neuron0x3522ee0()*-0.00785642);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539580() {
   return (neuron0x3523220()*0.0528665);
}

double NNfunction_nn_chi3_charge1m::synapse0x35395c0() {
   return (neuron0x3523560()*0.0583843);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539600() {
   return (neuron0x35238a0()*0.0820631);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539640() {
   return (neuron0x3523be0()*0.0900955);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539680() {
   return (neuron0x3523f20()*-0.0305166);
}

double NNfunction_nn_chi3_charge1m::synapse0x35396c0() {
   return (neuron0x3524260()*0.232634);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539700() {
   return (neuron0x35245a0()*0.010955);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539740() {
   return (neuron0x35248e0()*0.129536);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539780() {
   return (neuron0x3524c20()*-0.082204);
}

double NNfunction_nn_chi3_charge1m::synapse0x35397c0() {
   return (neuron0x3524f60()*0.105332);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539250() {
   return (neuron0x35252a0()*0.320904);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539290() {
   return (neuron0x3525800()*0.0960207);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539910() {
   return (neuron0x3525a20()*-0.15102);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539950() {
   return (neuron0x3525d60()*0.026514);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539990() {
   return (neuron0x35260a0()*0.196596);
}

double NNfunction_nn_chi3_charge1m::synapse0x35399d0() {
   return (neuron0x35263e0()*0.0742054);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539a10() {
   return (neuron0x3526720()*0.0323224);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539a50() {
   return (neuron0x3526a60()*-0.141175);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539dd0() {
   return (neuron0x3521f30()*0.720944);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539e10() {
   return (neuron0x35221e0()*-0.754954);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539e50() {
   return (neuron0x3522520()*-0.539413);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539e90() {
   return (neuron0x3522860()*-0.00350459);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539ed0() {
   return (neuron0x3522ba0()*0.0340762);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539f10() {
   return (neuron0x3522ee0()*-0.082745);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539f50() {
   return (neuron0x3523220()*-0.0556134);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539f90() {
   return (neuron0x3523560()*-0.111646);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539fd0() {
   return (neuron0x35238a0()*-0.00571634);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a010() {
   return (neuron0x3523be0()*0.0841454);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a050() {
   return (neuron0x3523f20()*-0.0848151);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a090() {
   return (neuron0x3524260()*0.506957);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a0d0() {
   return (neuron0x35245a0()*0.080796);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a110() {
   return (neuron0x35248e0()*0.140566);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a150() {
   return (neuron0x3524c20()*-0.147866);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a190() {
   return (neuron0x3524f60()*0.111822);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539c20() {
   return (neuron0x35252a0()*0.631134);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539c60() {
   return (neuron0x3525800()*0.196067);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a2e0() {
   return (neuron0x3525a20()*-0.424051);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a320() {
   return (neuron0x3525d60()*-0.0163448);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a360() {
   return (neuron0x35260a0()*0.243953);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a3a0() {
   return (neuron0x35263e0()*0.0817716);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a3e0() {
   return (neuron0x3526720()*0.110792);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a420() {
   return (neuron0x3526a60()*0.157188);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a7a0() {
   return (neuron0x3521f30()*0.516965);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a7e0() {
   return (neuron0x35221e0()*-0.519193);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a820() {
   return (neuron0x3522520()*-1.35796);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a860() {
   return (neuron0x3522860()*0.341611);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a8a0() {
   return (neuron0x3522ba0()*-0.487214);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a8e0() {
   return (neuron0x3522ee0()*-0.38464);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a920() {
   return (neuron0x3523220()*-0.447858);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a960() {
   return (neuron0x3523560()*-0.426393);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a9a0() {
   return (neuron0x35238a0()*-0.394661);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a9e0() {
   return (neuron0x3523be0()*-0.651964);
}

double NNfunction_nn_chi3_charge1m::synapse0x353aa20() {
   return (neuron0x3523f20()*-0.217335);
}

double NNfunction_nn_chi3_charge1m::synapse0x353aa60() {
   return (neuron0x3524260()*-0.0735854);
}

double NNfunction_nn_chi3_charge1m::synapse0x353aaa0() {
   return (neuron0x35245a0()*0.296211);
}

double NNfunction_nn_chi3_charge1m::synapse0x353aae0() {
   return (neuron0x35248e0()*0.475119);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ab20() {
   return (neuron0x3524c20()*0.467852);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ab60() {
   return (neuron0x3524f60()*-0.29241);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a5f0() {
   return (neuron0x35252a0()*-0.0786496);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a630() {
   return (neuron0x3525800()*1.35314);
}

double NNfunction_nn_chi3_charge1m::synapse0x353acb0() {
   return (neuron0x3525a20()*-0.386738);
}

double NNfunction_nn_chi3_charge1m::synapse0x353acf0() {
   return (neuron0x3525d60()*-0.635717);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ad30() {
   return (neuron0x35260a0()*-2.10494);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ad70() {
   return (neuron0x35263e0()*0.622033);
}

double NNfunction_nn_chi3_charge1m::synapse0x353adb0() {
   return (neuron0x3526720()*-0.625046);
}

double NNfunction_nn_chi3_charge1m::synapse0x353adf0() {
   return (neuron0x3526a60()*-0.584645);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b170() {
   return (neuron0x3521f30()*0.0382275);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b1b0() {
   return (neuron0x35221e0()*-0.0259488);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b1f0() {
   return (neuron0x3522520()*2.13791);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b230() {
   return (neuron0x3522860()*-0.0409078);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b270() {
   return (neuron0x3522ba0()*0.00973191);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b2b0() {
   return (neuron0x3522ee0()*0.0220981);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b2f0() {
   return (neuron0x3523220()*0.0076038);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b330() {
   return (neuron0x3523560()*0.0185531);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b370() {
   return (neuron0x35238a0()*0.0546695);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b3b0() {
   return (neuron0x3523be0()*0.0281859);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b3f0() {
   return (neuron0x3523f20()*-0.00199067);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b430() {
   return (neuron0x3524260()*-0.226765);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b470() {
   return (neuron0x35245a0()*-0.0119251);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b4b0() {
   return (neuron0x35248e0()*0.0147767);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b4f0() {
   return (neuron0x3524c20()*-0.020492);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b530() {
   return (neuron0x3524f60()*0.00332134);
}

double NNfunction_nn_chi3_charge1m::synapse0x353afc0() {
   return (neuron0x35252a0()*0.0299136);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b000() {
   return (neuron0x3525800()*0.0432715);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b680() {
   return (neuron0x3525a20()*0.000853795);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b6c0() {
   return (neuron0x3525d60()*0.00217044);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b700() {
   return (neuron0x35260a0()*0.00909022);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b740() {
   return (neuron0x35263e0()*0.0153292);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b780() {
   return (neuron0x3526720()*-0.0150425);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b7c0() {
   return (neuron0x3526a60()*-2.62496);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bb40() {
   return (neuron0x3521f30()*0.0211392);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bb80() {
   return (neuron0x35221e0()*0.0326405);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bbc0() {
   return (neuron0x3522520()*1.08779);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bc00() {
   return (neuron0x3522860()*-0.00543682);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bc40() {
   return (neuron0x3522ba0()*-0.0161762);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bc80() {
   return (neuron0x3522ee0()*0.00802061);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bcc0() {
   return (neuron0x3523220()*0.052215);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bd00() {
   return (neuron0x3523560()*0.00247129);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bd40() {
   return (neuron0x35238a0()*0.0275562);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bd80() {
   return (neuron0x3523be0()*-0.0146067);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bdc0() {
   return (neuron0x3523f20()*0.026004);
}

double NNfunction_nn_chi3_charge1m::synapse0x353be00() {
   return (neuron0x3524260()*4.48903);
}

double NNfunction_nn_chi3_charge1m::synapse0x353be40() {
   return (neuron0x35245a0()*0.0170275);
}

double NNfunction_nn_chi3_charge1m::synapse0x353be80() {
   return (neuron0x35248e0()*0.00462382);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bec0() {
   return (neuron0x3524c20()*-0.00856943);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bf00() {
   return (neuron0x3524f60()*-0.0171366);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b990() {
   return (neuron0x35252a0()*0.0250992);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b9d0() {
   return (neuron0x3525800()*0.010458);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c050() {
   return (neuron0x3525a20()*0.00622191);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c090() {
   return (neuron0x3525d60()*-0.0206205);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c0d0() {
   return (neuron0x35260a0()*-0.018766);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c110() {
   return (neuron0x35263e0()*-0.0172423);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c150() {
   return (neuron0x3526720()*-0.00103595);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c190() {
   return (neuron0x3526a60()*1.13654);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c510() {
   return (neuron0x3521f30()*0.954504);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c550() {
   return (neuron0x35221e0()*0.231848);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c590() {
   return (neuron0x3522520()*0.129225);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c5d0() {
   return (neuron0x3522860()*0.143162);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c610() {
   return (neuron0x3522ba0()*-0.237723);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c650() {
   return (neuron0x3522ee0()*-0.0617836);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c690() {
   return (neuron0x3523220()*0.259378);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c6d0() {
   return (neuron0x3523560()*0.352004);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c710() {
   return (neuron0x35238a0()*-0.325996);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c750() {
   return (neuron0x3523be0()*0.124071);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c790() {
   return (neuron0x3523f20()*0.589429);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c7d0() {
   return (neuron0x3524260()*-0.508735);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c810() {
   return (neuron0x35245a0()*-0.443212);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c850() {
   return (neuron0x35248e0()*-0.207078);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c890() {
   return (neuron0x3524c20()*-0.79452);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c8d0() {
   return (neuron0x3524f60()*-0.0529991);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c360() {
   return (neuron0x35252a0()*0.254405);
}

double NNfunction_nn_chi3_charge1m::synapse0x353c3a0() {
   return (neuron0x3525800()*-0.301722);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ca20() {
   return (neuron0x3525a20()*0.506056);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ca60() {
   return (neuron0x3525d60()*0.137597);
}

double NNfunction_nn_chi3_charge1m::synapse0x353caa0() {
   return (neuron0x35260a0()*-0.193766);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cae0() {
   return (neuron0x35263e0()*-0.470554);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cb20() {
   return (neuron0x3526720()*0.387664);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cb60() {
   return (neuron0x3526a60()*-0.780377);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cee0() {
   return (neuron0x3521f30()*0.100956);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cf20() {
   return (neuron0x35221e0()*0.0709576);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cf60() {
   return (neuron0x3522520()*0.570411);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cfa0() {
   return (neuron0x3522860()*0.104517);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cfe0() {
   return (neuron0x3522ba0()*0.0090366);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d020() {
   return (neuron0x3522ee0()*-0.108936);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d060() {
   return (neuron0x3523220()*0.103577);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d0a0() {
   return (neuron0x3523560()*0.017069);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d0e0() {
   return (neuron0x35238a0()*-0.0456281);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d120() {
   return (neuron0x3523be0()*-0.0265232);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d160() {
   return (neuron0x3523f20()*0.0865213);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d1a0() {
   return (neuron0x3524260()*0.477687);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d1e0() {
   return (neuron0x35245a0()*0.0540282);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d220() {
   return (neuron0x35248e0()*0.0151266);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d260() {
   return (neuron0x3524c20()*0.0992662);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d2a0() {
   return (neuron0x3524f60()*0.102113);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cd30() {
   return (neuron0x35252a0()*-0.0334413);
}

double NNfunction_nn_chi3_charge1m::synapse0x353cd70() {
   return (neuron0x3525800()*-0.0689877);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d3f0() {
   return (neuron0x3525a20()*0.0914946);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d430() {
   return (neuron0x3525d60()*0.0640626);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d470() {
   return (neuron0x35260a0()*-0.018172);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d4b0() {
   return (neuron0x35263e0()*0.0171856);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d4f0() {
   return (neuron0x3526720()*-0.00342329);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d530() {
   return (neuron0x3526a60()*-0.720942);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d8b0() {
   return (neuron0x3521f30()*0.00314732);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531e80() {
   return (neuron0x35221e0()*-0.291296);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531ec0() {
   return (neuron0x3522520()*0.0981461);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531f00() {
   return (neuron0x3522860()*0.026444);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532150() {
   return (neuron0x3522ba0()*3.91152e-05);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532190() {
   return (neuron0x3522ee0()*-0.0281963);
}

double NNfunction_nn_chi3_charge1m::synapse0x35321d0() {
   return (neuron0x3523220()*-0.0263583);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532420() {
   return (neuron0x3523560()*0.0162472);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532460() {
   return (neuron0x35238a0()*0.0707295);
}

double NNfunction_nn_chi3_charge1m::synapse0x35326b0() {
   return (neuron0x3523be0()*0.0340424);
}

double NNfunction_nn_chi3_charge1m::synapse0x35326f0() {
   return (neuron0x3523f20()*0.0598223);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532730() {
   return (neuron0x3524260()*0.779686);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532980() {
   return (neuron0x35245a0()*0.0515211);
}

double NNfunction_nn_chi3_charge1m::synapse0x35329c0() {
   return (neuron0x35248e0()*0.026414);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532c10() {
   return (neuron0x3524c20()*0.0684557);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532c50() {
   return (neuron0x3524f60()*-0.000580433);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d700() {
   return (neuron0x35252a0()*-0.0117944);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d740() {
   return (neuron0x3525800()*0.0627755);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532da0() {
   return (neuron0x3525a20()*-0.0415507);
}

double NNfunction_nn_chi3_charge1m::synapse0x35332b0() {
   return (neuron0x3525d60()*-0.0852459);
}

double NNfunction_nn_chi3_charge1m::synapse0x35332f0() {
   return (neuron0x35260a0()*0.0232731);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533330() {
   return (neuron0x35263e0()*0.00931943);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533580() {
   return (neuron0x3526720()*-0.00559134);
}

double NNfunction_nn_chi3_charge1m::synapse0x35335c0() {
   return (neuron0x3526a60()*-3.23344);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532e70() {
   return (neuron0x3521f30()*-0.00462783);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532eb0() {
   return (neuron0x35221e0()*-0.0386731);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532ef0() {
   return (neuron0x3522520()*-0.214353);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532f30() {
   return (neuron0x3522860()*0.0474165);
}

double NNfunction_nn_chi3_charge1m::synapse0x35338b0() {
   return (neuron0x3522ba0()*0.00892734);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fc00() {
   return (neuron0x3522ee0()*0.00791097);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fc40() {
   return (neuron0x3523220()*-0.00032518);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fc80() {
   return (neuron0x3523560()*-0.0232943);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fcc0() {
   return (neuron0x35238a0()*-0.0495492);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fd00() {
   return (neuron0x3523be0()*-0.0193678);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fd40() {
   return (neuron0x3523f20()*-0.0047527);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fd80() {
   return (neuron0x3524260()*-0.526288);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fdc0() {
   return (neuron0x35245a0()*0.0371456);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fe00() {
   return (neuron0x35248e0()*-0.0161153);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fe40() {
   return (neuron0x3524c20()*0.0172884);
}

double NNfunction_nn_chi3_charge1m::synapse0x353fe80() {
   return (neuron0x3524f60()*-0.0013893);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533790() {
   return (neuron0x35252a0()*0.0299189);
}

double NNfunction_nn_chi3_charge1m::synapse0x35337d0() {
   return (neuron0x3525800()*-0.0127375);
}

double NNfunction_nn_chi3_charge1m::synapse0x353ffd0() {
   return (neuron0x3525a20()*0.0518373);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540010() {
   return (neuron0x3525d60()*0.0247695);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540050() {
   return (neuron0x35260a0()*-0.0298322);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540090() {
   return (neuron0x35263e0()*-0.0447694);
}

double NNfunction_nn_chi3_charge1m::synapse0x35400d0() {
   return (neuron0x3526720()*0.00551213);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540110() {
   return (neuron0x3526a60()*2.15665);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540490() {
   return (neuron0x3521f30()*-0.261256);
}

double NNfunction_nn_chi3_charge1m::synapse0x35404d0() {
   return (neuron0x35221e0()*0.157866);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540510() {
   return (neuron0x3522520()*0.835965);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540550() {
   return (neuron0x3522860()*0.750311);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540590() {
   return (neuron0x3522ba0()*-0.0240807);
}

double NNfunction_nn_chi3_charge1m::synapse0x35405d0() {
   return (neuron0x3522ee0()*-0.141818);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540610() {
   return (neuron0x3523220()*-0.610197);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540650() {
   return (neuron0x3523560()*-0.60059);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540690() {
   return (neuron0x35238a0()*-0.000177253);
}

double NNfunction_nn_chi3_charge1m::synapse0x35406d0() {
   return (neuron0x3523be0()*-0.159497);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540710() {
   return (neuron0x3523f20()*-0.599565);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540750() {
   return (neuron0x3524260()*-0.582243);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540790() {
   return (neuron0x35245a0()*0.16943);
}

double NNfunction_nn_chi3_charge1m::synapse0x35407d0() {
   return (neuron0x35248e0()*0.385877);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540810() {
   return (neuron0x3524c20()*-0.579634);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540850() {
   return (neuron0x3524f60()*-0.210029);
}

double NNfunction_nn_chi3_charge1m::synapse0x35402e0() {
   return (neuron0x35252a0()*-0.145394);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540320() {
   return (neuron0x3525800()*-0.0379663);
}

double NNfunction_nn_chi3_charge1m::synapse0x35409a0() {
   return (neuron0x3525a20()*1.08046);
}

double NNfunction_nn_chi3_charge1m::synapse0x35409e0() {
   return (neuron0x3525d60()*-0.253532);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540a20() {
   return (neuron0x35260a0()*-0.458786);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540a60() {
   return (neuron0x35263e0()*-0.581418);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540aa0() {
   return (neuron0x3526720()*0.38974);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540ae0() {
   return (neuron0x3526a60()*1.0841);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540e60() {
   return (neuron0x3521f30()*0.0152357);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540ea0() {
   return (neuron0x35221e0()*-0.703606);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540ee0() {
   return (neuron0x3522520()*0.784684);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540f20() {
   return (neuron0x3522860()*0.0448388);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540f60() {
   return (neuron0x3522ba0()*-0.0276108);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540fa0() {
   return (neuron0x3522ee0()*0.110195);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540fe0() {
   return (neuron0x3523220()*-0.0221853);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541020() {
   return (neuron0x3523560()*0.00048772);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541060() {
   return (neuron0x35238a0()*-0.0282433);
}

double NNfunction_nn_chi3_charge1m::synapse0x35410a0() {
   return (neuron0x3523be0()*0.0438584);
}

double NNfunction_nn_chi3_charge1m::synapse0x35410e0() {
   return (neuron0x3523f20()*-0.00699926);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541120() {
   return (neuron0x3524260()*-0.00915487);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541160() {
   return (neuron0x35245a0()*0.0835837);
}

double NNfunction_nn_chi3_charge1m::synapse0x35411a0() {
   return (neuron0x35248e0()*0.0934618);
}

double NNfunction_nn_chi3_charge1m::synapse0x35411e0() {
   return (neuron0x3524c20()*0.0582959);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541220() {
   return (neuron0x3524f60()*0.00923213);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540cb0() {
   return (neuron0x35252a0()*-0.03619);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540cf0() {
   return (neuron0x3525800()*0.0615571);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541370() {
   return (neuron0x3525a20()*0.0672167);
}

double NNfunction_nn_chi3_charge1m::synapse0x35413b0() {
   return (neuron0x3525d60()*0.0295647);
}

double NNfunction_nn_chi3_charge1m::synapse0x35413f0() {
   return (neuron0x35260a0()*-0.0249692);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541430() {
   return (neuron0x35263e0()*-0.0179766);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541470() {
   return (neuron0x3526720()*0.029289);
}

double NNfunction_nn_chi3_charge1m::synapse0x35414b0() {
   return (neuron0x3526a60()*1.55305);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541830() {
   return (neuron0x3521f30()*0.0260222);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541870() {
   return (neuron0x35221e0()*0.0108836);
}

double NNfunction_nn_chi3_charge1m::synapse0x35418b0() {
   return (neuron0x3522520()*1.49343);
}

double NNfunction_nn_chi3_charge1m::synapse0x35418f0() {
   return (neuron0x3522860()*0.00515987);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541930() {
   return (neuron0x3522ba0()*-0.0139645);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541970() {
   return (neuron0x3522ee0()*0.00822649);
}

double NNfunction_nn_chi3_charge1m::synapse0x35419b0() {
   return (neuron0x3523220()*0.0501698);
}

double NNfunction_nn_chi3_charge1m::synapse0x35419f0() {
   return (neuron0x3523560()*-0.00573904);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541a30() {
   return (neuron0x35238a0()*0.0241391);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541a70() {
   return (neuron0x3523be0()*-0.0228508);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541ab0() {
   return (neuron0x3523f20()*0.0185035);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541af0() {
   return (neuron0x3524260()*3.86797);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541b30() {
   return (neuron0x35245a0()*0.026932);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541b70() {
   return (neuron0x35248e0()*0.01514);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541bb0() {
   return (neuron0x3524c20()*0.00703674);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541bf0() {
   return (neuron0x3524f60()*-0.0158335);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541680() {
   return (neuron0x35252a0()*0.0225131);
}

double NNfunction_nn_chi3_charge1m::synapse0x35416c0() {
   return (neuron0x3525800()*0.0199178);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541d40() {
   return (neuron0x3525a20()*0.0202967);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541d80() {
   return (neuron0x3525d60()*-0.0180469);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541dc0() {
   return (neuron0x35260a0()*-0.0223343);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541e00() {
   return (neuron0x35263e0()*-0.0253025);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541e40() {
   return (neuron0x3526720()*0.00464965);
}

double NNfunction_nn_chi3_charge1m::synapse0x3541e80() {
   return (neuron0x3526a60()*1.65487);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542200() {
   return (neuron0x3521f30()*-0.0219603);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542240() {
   return (neuron0x35221e0()*0.296003);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542280() {
   return (neuron0x3522520()*0.77803);
}

double NNfunction_nn_chi3_charge1m::synapse0x35422c0() {
   return (neuron0x3522860()*0.536161);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542300() {
   return (neuron0x3522ba0()*0.364238);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542340() {
   return (neuron0x3522ee0()*-0.038015);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542380() {
   return (neuron0x3523220()*-0.417225);
}

double NNfunction_nn_chi3_charge1m::synapse0x35423c0() {
   return (neuron0x3523560()*-0.502814);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542400() {
   return (neuron0x35238a0()*-0.00456402);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542440() {
   return (neuron0x3523be0()*-0.102311);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542480() {
   return (neuron0x3523f20()*-0.830662);
}

double NNfunction_nn_chi3_charge1m::synapse0x35424c0() {
   return (neuron0x3524260()*0.613625);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542500() {
   return (neuron0x35245a0()*0.62861);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542540() {
   return (neuron0x35248e0()*0.787073);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542580() {
   return (neuron0x3524c20()*0.228985);
}

double NNfunction_nn_chi3_charge1m::synapse0x35425c0() {
   return (neuron0x3524f60()*0.0636324);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542050() {
   return (neuron0x35252a0()*0.87299);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542090() {
   return (neuron0x3525800()*0.439658);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542710() {
   return (neuron0x3525a20()*-0.632851);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542750() {
   return (neuron0x3525d60()*0.0070052);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542790() {
   return (neuron0x35260a0()*-0.957);
}

double NNfunction_nn_chi3_charge1m::synapse0x35427d0() {
   return (neuron0x35263e0()*0.0117436);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542810() {
   return (neuron0x3526720()*1.01836);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542850() {
   return (neuron0x3526a60()*-0.69671);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542bd0() {
   return (neuron0x3521f30()*0.0230644);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542c10() {
   return (neuron0x35221e0()*-9.9182);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542c50() {
   return (neuron0x3522520()*-2.39123);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542c90() {
   return (neuron0x3522860()*0.00338796);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542cd0() {
   return (neuron0x3522ba0()*-0.0135738);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542d10() {
   return (neuron0x3522ee0()*0.0180092);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542d50() {
   return (neuron0x3523220()*0.0215256);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542d90() {
   return (neuron0x3523560()*-0.00684466);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542dd0() {
   return (neuron0x35238a0()*-0.0138398);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542e10() {
   return (neuron0x3523be0()*0.00481152);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542e50() {
   return (neuron0x3523f20()*0.000578111);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542e90() {
   return (neuron0x3524260()*0.0704965);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542ed0() {
   return (neuron0x35245a0()*0.0085229);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542f10() {
   return (neuron0x35248e0()*0.0119497);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542f50() {
   return (neuron0x3524c20()*-0.0132833);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542f90() {
   return (neuron0x3524f60()*0.011967);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542a20() {
   return (neuron0x35252a0()*0.00247395);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542a60() {
   return (neuron0x3525800()*-0.00652146);
}

double NNfunction_nn_chi3_charge1m::synapse0x35430e0() {
   return (neuron0x3525a20()*-0.0179551);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543120() {
   return (neuron0x3525d60()*-0.00320038);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543160() {
   return (neuron0x35260a0()*0.0137005);
}

double NNfunction_nn_chi3_charge1m::synapse0x35431a0() {
   return (neuron0x35263e0()*0.00840384);
}

double NNfunction_nn_chi3_charge1m::synapse0x35431e0() {
   return (neuron0x3526720()*-0.00171278);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543220() {
   return (neuron0x3526a60()*-0.23599);
}

double NNfunction_nn_chi3_charge1m::synapse0x35435a0() {
   return (neuron0x3521f30()*-0.638951);
}

double NNfunction_nn_chi3_charge1m::synapse0x35435e0() {
   return (neuron0x35221e0()*0.176508);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543620() {
   return (neuron0x3522520()*0.292059);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543660() {
   return (neuron0x3522860()*1.60046);
}

double NNfunction_nn_chi3_charge1m::synapse0x35436a0() {
   return (neuron0x3522ba0()*0.926328);
}

double NNfunction_nn_chi3_charge1m::synapse0x35436e0() {
   return (neuron0x3522ee0()*-0.29458);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543720() {
   return (neuron0x3523220()*0.670622);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543760() {
   return (neuron0x3523560()*-0.182218);
}

double NNfunction_nn_chi3_charge1m::synapse0x35437a0() {
   return (neuron0x35238a0()*-0.949018);
}

double NNfunction_nn_chi3_charge1m::synapse0x35437e0() {
   return (neuron0x3523be0()*0.275689);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543820() {
   return (neuron0x3523f20()*-1.00504);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543860() {
   return (neuron0x3524260()*-0.368971);
}

double NNfunction_nn_chi3_charge1m::synapse0x35438a0() {
   return (neuron0x35245a0()*0.261378);
}

double NNfunction_nn_chi3_charge1m::synapse0x35438e0() {
   return (neuron0x35248e0()*-0.245845);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543920() {
   return (neuron0x3524c20()*0.931716);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543960() {
   return (neuron0x3524f60()*-0.66638);
}

double NNfunction_nn_chi3_charge1m::synapse0x35433f0() {
   return (neuron0x35252a0()*-1.08622);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543430() {
   return (neuron0x3525800()*0.406058);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543ab0() {
   return (neuron0x3525a20()*0.925903);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543af0() {
   return (neuron0x3525d60()*0.217305);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543b30() {
   return (neuron0x35260a0()*-0.631543);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543b70() {
   return (neuron0x35263e0()*-0.678756);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543bb0() {
   return (neuron0x3526720()*0.519876);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543bf0() {
   return (neuron0x3526a60()*1.2967);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543f70() {
   return (neuron0x3521f30()*-0.000272176);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543fb0() {
   return (neuron0x35221e0()*0.0207135);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543ff0() {
   return (neuron0x3522520()*6.67316);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544030() {
   return (neuron0x3522860()*-0.0327284);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544070() {
   return (neuron0x3522ba0()*-0.0134034);
}

double NNfunction_nn_chi3_charge1m::synapse0x35440b0() {
   return (neuron0x3522ee0()*0.0233903);
}

double NNfunction_nn_chi3_charge1m::synapse0x35440f0() {
   return (neuron0x3523220()*0.0604625);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544130() {
   return (neuron0x3523560()*0.0338613);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544170() {
   return (neuron0x35238a0()*0.0218701);
}

double NNfunction_nn_chi3_charge1m::synapse0x35441b0() {
   return (neuron0x3523be0()*0.0117305);
}

double NNfunction_nn_chi3_charge1m::synapse0x35441f0() {
   return (neuron0x3523f20()*-0.0443986);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544230() {
   return (neuron0x3524260()*-5.74167);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544270() {
   return (neuron0x35245a0()*-0.00696416);
}

double NNfunction_nn_chi3_charge1m::synapse0x35442b0() {
   return (neuron0x35248e0()*0.0644107);
}

double NNfunction_nn_chi3_charge1m::synapse0x35442f0() {
   return (neuron0x3524c20()*0.0278494);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544330() {
   return (neuron0x3524f60()*0.00467167);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543dc0() {
   return (neuron0x35252a0()*0.0158271);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543e00() {
   return (neuron0x3525800()*-0.044486);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544480() {
   return (neuron0x3525a20()*-0.00653348);
}

double NNfunction_nn_chi3_charge1m::synapse0x35444c0() {
   return (neuron0x3525d60()*0.00587206);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544500() {
   return (neuron0x35260a0()*0.0413204);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544540() {
   return (neuron0x35263e0()*-0.012155);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544580() {
   return (neuron0x3526720()*-0.0088435);
}

double NNfunction_nn_chi3_charge1m::synapse0x35445c0() {
   return (neuron0x3526a60()*-1.65839);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d070() {
   return (neuron0x3521f30()*-0.250971);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d0b0() {
   return (neuron0x35221e0()*0.229572);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d0f0() {
   return (neuron0x3522520()*1.21565);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d130() {
   return (neuron0x3522860()*0.534022);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d170() {
   return (neuron0x3522ba0()*0.100495);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d1b0() {
   return (neuron0x3522ee0()*-0.619165);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d1f0() {
   return (neuron0x3523220()*0.502846);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d230() {
   return (neuron0x3523560()*-0.739712);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544d50() {
   return (neuron0x35238a0()*-0.626935);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544d90() {
   return (neuron0x3523be0()*-0.0492534);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544dd0() {
   return (neuron0x3523f20()*-0.962);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544e10() {
   return (neuron0x3524260()*0.054298);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544e50() {
   return (neuron0x35245a0()*0.307053);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544e90() {
   return (neuron0x35248e0()*-0.12249);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544ed0() {
   return (neuron0x3524c20()*-1.25312);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544f10() {
   return (neuron0x3524f60()*-0.300197);
}

double NNfunction_nn_chi3_charge1m::synapse0x3544790() {
   return (neuron0x35252a0()*0.139426);
}

double NNfunction_nn_chi3_charge1m::synapse0x35447d0() {
   return (neuron0x3525800()*-0.0505999);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545060() {
   return (neuron0x3525a20()*1.44412);
}

double NNfunction_nn_chi3_charge1m::synapse0x35450a0() {
   return (neuron0x3525d60()*-0.251212);
}

double NNfunction_nn_chi3_charge1m::synapse0x35450e0() {
   return (neuron0x35260a0()*0.626352);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545120() {
   return (neuron0x35263e0()*-0.819534);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545160() {
   return (neuron0x3526720()*1.17818);
}

double NNfunction_nn_chi3_charge1m::synapse0x35451a0() {
   return (neuron0x3526a60()*-0.168386);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545520() {
   return (neuron0x3521f30()*0.714524);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545560() {
   return (neuron0x35221e0()*-1.26064);
}

double NNfunction_nn_chi3_charge1m::synapse0x35455a0() {
   return (neuron0x3522520()*-0.0994586);
}

double NNfunction_nn_chi3_charge1m::synapse0x35455e0() {
   return (neuron0x3522860()*-0.804453);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545620() {
   return (neuron0x3522ba0()*0.727911);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545660() {
   return (neuron0x3522ee0()*-0.580393);
}

double NNfunction_nn_chi3_charge1m::synapse0x35456a0() {
   return (neuron0x3523220()*-0.130507);
}

double NNfunction_nn_chi3_charge1m::synapse0x35456e0() {
   return (neuron0x3523560()*0.272778);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545720() {
   return (neuron0x35238a0()*0.168908);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545760() {
   return (neuron0x3523be0()*-0.0910201);
}

double NNfunction_nn_chi3_charge1m::synapse0x35457a0() {
   return (neuron0x3523f20()*-0.424753);
}

double NNfunction_nn_chi3_charge1m::synapse0x35457e0() {
   return (neuron0x3524260()*-0.0772425);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545820() {
   return (neuron0x35245a0()*-0.41697);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545860() {
   return (neuron0x35248e0()*-0.212162);
}

double NNfunction_nn_chi3_charge1m::synapse0x35458a0() {
   return (neuron0x3524c20()*-0.331658);
}

double NNfunction_nn_chi3_charge1m::synapse0x35458e0() {
   return (neuron0x3524f60()*0.39515);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545370() {
   return (neuron0x35252a0()*0.410289);
}

double NNfunction_nn_chi3_charge1m::synapse0x35453b0() {
   return (neuron0x3525800()*-0.103053);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545a30() {
   return (neuron0x3525a20()*-0.318973);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545a70() {
   return (neuron0x3525d60()*-0.251993);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545ab0() {
   return (neuron0x35260a0()*1.78628);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545af0() {
   return (neuron0x35263e0()*0.183486);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545b30() {
   return (neuron0x3526720()*-1.27453);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545b70() {
   return (neuron0x3526a60()*-1.39646);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545ef0() {
   return (neuron0x3521f30()*-0.00880858);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545f30() {
   return (neuron0x35221e0()*-0.0323463);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545f70() {
   return (neuron0x3522520()*4.11952);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545fb0() {
   return (neuron0x3522860()*-0.0350967);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545ff0() {
   return (neuron0x3522ba0()*0.0106015);
}

double NNfunction_nn_chi3_charge1m::synapse0x3546030() {
   return (neuron0x3522ee0()*0.0462624);
}

double NNfunction_nn_chi3_charge1m::synapse0x3546070() {
   return (neuron0x3523220()*0.00180787);
}

double NNfunction_nn_chi3_charge1m::synapse0x35460b0() {
   return (neuron0x3523560()*-0.0596513);
}

double NNfunction_nn_chi3_charge1m::synapse0x35460f0() {
   return (neuron0x35238a0()*0.01457);
}

double NNfunction_nn_chi3_charge1m::synapse0x3546130() {
   return (neuron0x3523be0()*-0.0308189);
}

double NNfunction_nn_chi3_charge1m::synapse0x3546170() {
   return (neuron0x3523f20()*-0.0230936);
}

double NNfunction_nn_chi3_charge1m::synapse0x35461b0() {
   return (neuron0x3524260()*3.5906);
}

double NNfunction_nn_chi3_charge1m::synapse0x35461f0() {
   return (neuron0x35245a0()*0.120806);
}

double NNfunction_nn_chi3_charge1m::synapse0x3546230() {
   return (neuron0x35248e0()*0.0372977);
}

double NNfunction_nn_chi3_charge1m::synapse0x3546270() {
   return (neuron0x3524c20()*0.0213418);
}

double NNfunction_nn_chi3_charge1m::synapse0x35462b0() {
   return (neuron0x3524f60()*0.000606043);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545d40() {
   return (neuron0x35252a0()*0.031814);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545d80() {
   return (neuron0x3525800()*0.0702673);
}

double NNfunction_nn_chi3_charge1m::synapse0x35368b0() {
   return (neuron0x3525a20()*0.00836396);
}

double NNfunction_nn_chi3_charge1m::synapse0x35368f0() {
   return (neuron0x3525d60()*-0.0518353);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536930() {
   return (neuron0x35260a0()*0.0658158);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536970() {
   return (neuron0x35263e0()*-0.0108961);
}

double NNfunction_nn_chi3_charge1m::synapse0x35369b0() {
   return (neuron0x3526720()*-0.00241172);
}

double NNfunction_nn_chi3_charge1m::synapse0x35369f0() {
   return (neuron0x3526a60()*0.753775);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536d70() {
   return (neuron0x3521f30()*0.575496);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536db0() {
   return (neuron0x35221e0()*0.306615);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536df0() {
   return (neuron0x3522520()*0.220512);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536e30() {
   return (neuron0x3522860()*-0.877129);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536e70() {
   return (neuron0x3522ba0()*0.0764834);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536eb0() {
   return (neuron0x3522ee0()*0.355311);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536ef0() {
   return (neuron0x3523220()*0.82716);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536f30() {
   return (neuron0x3523560()*-0.432082);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536f70() {
   return (neuron0x35238a0()*0.957491);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536fb0() {
   return (neuron0x3523be0()*0.99354);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536ff0() {
   return (neuron0x3523f20()*0.898508);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537030() {
   return (neuron0x3524260()*0.409613);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537070() {
   return (neuron0x35245a0()*-0.0253402);
}

double NNfunction_nn_chi3_charge1m::synapse0x35370b0() {
   return (neuron0x35248e0()*-0.480088);
}

double NNfunction_nn_chi3_charge1m::synapse0x35370f0() {
   return (neuron0x3524c20()*0.0606897);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537130() {
   return (neuron0x3524f60()*-0.00329474);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536bc0() {
   return (neuron0x35252a0()*0.35057);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536c00() {
   return (neuron0x3525800()*-0.817906);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537280() {
   return (neuron0x3525a20()*0.516917);
}

double NNfunction_nn_chi3_charge1m::synapse0x35372c0() {
   return (neuron0x3525d60()*-0.794876);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537300() {
   return (neuron0x35260a0()*-0.673278);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537340() {
   return (neuron0x35263e0()*-0.625441);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537380() {
   return (neuron0x3526720()*0.539882);
}

double NNfunction_nn_chi3_charge1m::synapse0x35373c0() {
   return (neuron0x3526a60()*-0.62893);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537740() {
   return (neuron0x3521f30()*0.0909542);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537780() {
   return (neuron0x35221e0()*0.0871911);
}

double NNfunction_nn_chi3_charge1m::synapse0x35377c0() {
   return (neuron0x3522520()*0.052855);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537800() {
   return (neuron0x3522860()*-0.241131);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537840() {
   return (neuron0x3522ba0()*0.062328);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537880() {
   return (neuron0x3522ee0()*-0.222508);
}

double NNfunction_nn_chi3_charge1m::synapse0x35378c0() {
   return (neuron0x3523220()*0.227011);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537900() {
   return (neuron0x3523560()*-0.463198);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537940() {
   return (neuron0x35238a0()*-0.0589655);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537980() {
   return (neuron0x3523be0()*-0.0286543);
}

double NNfunction_nn_chi3_charge1m::synapse0x35379c0() {
   return (neuron0x3523f20()*0.143887);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537a00() {
   return (neuron0x3524260()*0.434667);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537a40() {
   return (neuron0x35245a0()*0.392016);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537a80() {
   return (neuron0x35248e0()*-0.166774);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537ac0() {
   return (neuron0x3524c20()*0.0681459);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537b00() {
   return (neuron0x3524f60()*0.072057);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537590() {
   return (neuron0x35252a0()*-0.28448);
}

double NNfunction_nn_chi3_charge1m::synapse0x35375d0() {
   return (neuron0x3525800()*0.0266611);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537c50() {
   return (neuron0x3525a20()*-0.082068);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537c90() {
   return (neuron0x3525d60()*-0.153906);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537cd0() {
   return (neuron0x35260a0()*-0.595282);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537d10() {
   return (neuron0x35263e0()*0.0388857);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537d50() {
   return (neuron0x3526720()*0.494534);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537d90() {
   return (neuron0x3526a60()*-0.189152);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538110() {
   return (neuron0x3521f30()*0.242716);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538150() {
   return (neuron0x35221e0()*-0.489779);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538190() {
   return (neuron0x3522520()*-0.561252);
}

double NNfunction_nn_chi3_charge1m::synapse0x35381d0() {
   return (neuron0x3522860()*0.219661);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538210() {
   return (neuron0x3522ba0()*0.375278);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538250() {
   return (neuron0x3522ee0()*0.844404);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538290() {
   return (neuron0x3523220()*0.406673);
}

double NNfunction_nn_chi3_charge1m::synapse0x35382d0() {
   return (neuron0x3523560()*-0.777005);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538310() {
   return (neuron0x35238a0()*-0.115534);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538350() {
   return (neuron0x3523be0()*0.261722);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538390() {
   return (neuron0x3523f20()*0.00738092);
}

double NNfunction_nn_chi3_charge1m::synapse0x35383d0() {
   return (neuron0x3524260()*-0.238621);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538410() {
   return (neuron0x35245a0()*-0.558421);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538450() {
   return (neuron0x35248e0()*-0.56331);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538490() {
   return (neuron0x3524c20()*-1.04895);
}

double NNfunction_nn_chi3_charge1m::synapse0x35384d0() {
   return (neuron0x3524f60()*0.608985);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537f60() {
   return (neuron0x35252a0()*0.326671);
}

double NNfunction_nn_chi3_charge1m::synapse0x3537fa0() {
   return (neuron0x3525800()*-0.298193);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538620() {
   return (neuron0x3525a20()*-0.406772);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538660() {
   return (neuron0x3525d60()*0.0274713);
}

double NNfunction_nn_chi3_charge1m::synapse0x35386a0() {
   return (neuron0x35260a0()*-0.316478);
}

double NNfunction_nn_chi3_charge1m::synapse0x35386e0() {
   return (neuron0x35263e0()*0.634759);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538720() {
   return (neuron0x3526720()*0.36998);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538760() {
   return (neuron0x3526a60()*-1.45852);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a630() {
   return (neuron0x3521f30()*0.0845537);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a670() {
   return (neuron0x35221e0()*-0.0907041);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a6b0() {
   return (neuron0x3522520()*-1.13081);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a6f0() {
   return (neuron0x3522860()*4.09982);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a730() {
   return (neuron0x3522ba0()*0.139629);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a770() {
   return (neuron0x3522ee0()*0.0636075);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a7b0() {
   return (neuron0x3523220()*0.17962);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a7f0() {
   return (neuron0x3523560()*-0.084518);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a830() {
   return (neuron0x35238a0()*-0.0270071);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a870() {
   return (neuron0x3523be0()*-0.0539931);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a8b0() {
   return (neuron0x3523f20()*-0.00871385);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a8f0() {
   return (neuron0x3524260()*-0.634376);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a930() {
   return (neuron0x35245a0()*-0.0366524);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a970() {
   return (neuron0x35248e0()*-0.0715043);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a9b0() {
   return (neuron0x3524c20()*-0.00258253);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a9f0() {
   return (neuron0x3524f60()*-0.0353369);
}

double NNfunction_nn_chi3_charge1m::synapse0x35387a0() {
   return (neuron0x35252a0()*-0.0745417);
}

double NNfunction_nn_chi3_charge1m::synapse0x35387e0() {
   return (neuron0x3525800()*-0.356981);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ab40() {
   return (neuron0x3525a20()*-0.0361994);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ab80() {
   return (neuron0x3525d60()*-0.221398);
}

double NNfunction_nn_chi3_charge1m::synapse0x354abc0() {
   return (neuron0x35260a0()*0.032881);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ac00() {
   return (neuron0x35263e0()*-0.0681361);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ac40() {
   return (neuron0x3526720()*-0.0575183);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ac80() {
   return (neuron0x3526a60()*-0.91706);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b000() {
   return (neuron0x3521f30()*-0.0628965);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b040() {
   return (neuron0x35221e0()*2.41511);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b080() {
   return (neuron0x3522520()*4.45604);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b0c0() {
   return (neuron0x3522860()*0.144927);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b100() {
   return (neuron0x3522ba0()*-0.166945);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b140() {
   return (neuron0x3522ee0()*0.186973);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b180() {
   return (neuron0x3523220()*0.0167823);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b1c0() {
   return (neuron0x3523560()*0.342153);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b200() {
   return (neuron0x35238a0()*0.14387);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b240() {
   return (neuron0x3523be0()*-0.128091);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b280() {
   return (neuron0x3523f20()*-0.0341914);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b2c0() {
   return (neuron0x3524260()*-2.45458);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b300() {
   return (neuron0x35245a0()*0.135346);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b340() {
   return (neuron0x35248e0()*0.277762);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b380() {
   return (neuron0x3524c20()*0.0841251);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b3c0() {
   return (neuron0x3524f60()*0.337427);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ae50() {
   return (neuron0x35252a0()*0.117338);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ae90() {
   return (neuron0x3525800()*-0.0252648);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b510() {
   return (neuron0x3525a20()*0.101352);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b550() {
   return (neuron0x3525d60()*-0.111305);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b590() {
   return (neuron0x35260a0()*-0.36254);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b5d0() {
   return (neuron0x35263e0()*-0.108219);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b610() {
   return (neuron0x3526720()*0.0906203);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b650() {
   return (neuron0x3526a60()*2.18799);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b9d0() {
   return (neuron0x3521f30()*0.0279923);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ba10() {
   return (neuron0x35221e0()*-12.0779);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ba50() {
   return (neuron0x3522520()*-3.09582);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ba90() {
   return (neuron0x3522860()*0.0127073);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bad0() {
   return (neuron0x3522ba0()*-0.0418848);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bb10() {
   return (neuron0x3522ee0()*0.0200462);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bb50() {
   return (neuron0x3523220()*0.0384836);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bb90() {
   return (neuron0x3523560()*-0.0172597);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bbd0() {
   return (neuron0x35238a0()*-0.0249666);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bc10() {
   return (neuron0x3523be0()*0.0188211);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bc50() {
   return (neuron0x3523f20()*0.0132926);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bc90() {
   return (neuron0x3524260()*0.0806842);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bcd0() {
   return (neuron0x35245a0()*0.0237275);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bd10() {
   return (neuron0x35248e0()*0.033171);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bd50() {
   return (neuron0x3524c20()*-0.0157964);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bd90() {
   return (neuron0x3524f60()*0.0241258);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b820() {
   return (neuron0x35252a0()*-0.00254575);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b860() {
   return (neuron0x3525800()*0.00278051);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bee0() {
   return (neuron0x3525a20()*-0.0281003);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bf20() {
   return (neuron0x3525d60()*-0.00349044);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bf60() {
   return (neuron0x35260a0()*0.00911258);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bfa0() {
   return (neuron0x35263e0()*0.0168035);
}

double NNfunction_nn_chi3_charge1m::synapse0x354bfe0() {
   return (neuron0x3526720()*-0.00891001);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c020() {
   return (neuron0x3526a60()*-0.149587);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c3a0() {
   return (neuron0x3521f30()*0.0131334);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c3e0() {
   return (neuron0x35221e0()*-0.03116);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c420() {
   return (neuron0x3522520()*-6.30448);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c460() {
   return (neuron0x3522860()*0.0328067);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c4a0() {
   return (neuron0x3522ba0()*0.0239749);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c4e0() {
   return (neuron0x3522ee0()*-0.0212311);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c520() {
   return (neuron0x3523220()*-0.0553847);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c560() {
   return (neuron0x3523560()*-0.0354556);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c5a0() {
   return (neuron0x35238a0()*-0.0242621);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c5e0() {
   return (neuron0x3523be0()*-0.00892502);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c620() {
   return (neuron0x3523f20()*0.0338429);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c660() {
   return (neuron0x3524260()*5.12128);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c6a0() {
   return (neuron0x35245a0()*-0.00510866);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c6e0() {
   return (neuron0x35248e0()*-0.0592723);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c720() {
   return (neuron0x3524c20()*-0.0119118);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c760() {
   return (neuron0x3524f60()*-0.0083464);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c1f0() {
   return (neuron0x35252a0()*-0.0172874);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c230() {
   return (neuron0x3525800()*0.0591935);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c8b0() {
   return (neuron0x3525a20()*0.0254245);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c8f0() {
   return (neuron0x3525d60()*-0.00318452);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c930() {
   return (neuron0x35260a0()*-0.0311726);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c970() {
   return (neuron0x35263e0()*0.0104871);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c9b0() {
   return (neuron0x3526720()*0.0163407);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c9f0() {
   return (neuron0x3526a60()*1.03651);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec7d0() {
   return (neuron0x3526ed0()*1.82972);
}

double NNfunction_nn_chi3_charge1m::synapse0x32ec810() {
   return (neuron0x3527820()*3.22468);
}

double NNfunction_nn_chi3_charge1m::synapse0x3529390() {
   return (neuron0x3528300()*-1.32662);
}

double NNfunction_nn_chi3_charge1m::synapse0x35293d0() {
   return (neuron0x3527da0()*2.75735);
}

double NNfunction_nn_chi3_charge1m::synapse0x352ae70() {
   return (neuron0x35290e0()*-0.0710269);
}

double NNfunction_nn_chi3_charge1m::synapse0x352aeb0() {
   return (neuron0x352abc0()*1.78579);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bc40() {
   return (neuron0x352b990()*-0.905841);
}

double NNfunction_nn_chi3_charge1m::synapse0x352bc80() {
   return (neuron0x352c360()*0.188504);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c610() {
   return (neuron0x352cd30()*0.0903127);
}

double NNfunction_nn_chi3_charge1m::synapse0x352c650() {
   return (neuron0x352d810()*-0.468059);
}

double NNfunction_nn_chi3_charge1m::synapse0x352cfe0() {
   return (neuron0x352e1e0()*-0.0387438);
}

double NNfunction_nn_chi3_charge1m::synapse0x352d020() {
   return (neuron0x352b2c0()*-0.480675);
}

double NNfunction_nn_chi3_charge1m::synapse0x352dac0() {
   return (neuron0x352fd90()*0.426416);
}

double NNfunction_nn_chi3_charge1m::synapse0x352db00() {
   return (neuron0x3530760()*0.0757786);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e490() {
   return (neuron0x3531130()*-2.89025);
}

double NNfunction_nn_chi3_charge1m::synapse0x352e4d0() {
   return (neuron0x3531b00()*1.25635);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b570() {
   return (neuron0x3533910()*0.734962);
}

double NNfunction_nn_chi3_charge1m::synapse0x352b5b0() {
   return (neuron0x3533bf0()*1.62526);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530040() {
   return (neuron0x35345c0()*-0.12528);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530080() {
   return (neuron0x3534f90()*-1.63054);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530a10() {
   return (neuron0x3535960()*-1.66976);
}

double NNfunction_nn_chi3_charge1m::synapse0x3530a50() {
   return (neuron0x3536330()*-0.0619594);
}

double NNfunction_nn_chi3_charge1m::synapse0x35313e0() {
   return (neuron0x352ee80()*-3.36722);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531420() {
   return (neuron0x352f850()*0.0508747);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531db0() {
   return (neuron0x35390c0()*-1.0441);
}

double NNfunction_nn_chi3_charge1m::synapse0x3531df0() {
   return (neuron0x3539a90()*0.506022);
}

double NNfunction_nn_chi3_charge1m::synapse0x3524e40() {
   return (neuron0x353a460()*0.0796852);
}

double NNfunction_nn_chi3_charge1m::synapse0x3524e80() {
   return (neuron0x353ae30()*0.272234);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533ea0() {
   return (neuron0x353b800()*2.40982);
}

double NNfunction_nn_chi3_charge1m::synapse0x3533ee0() {
   return (neuron0x353c1d0()*-0.0960246);
}

double NNfunction_nn_chi3_charge1m::synapse0x3534870() {
   return (neuron0x353cba0()*1.07635);
}

double NNfunction_nn_chi3_charge1m::synapse0x35348b0() {
   return (neuron0x353d570()*0.613523);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535240() {
   return (neuron0x3533600()*-2.08016);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535280() {
   return (neuron0x3540150()*-0.143666);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535c10() {
   return (neuron0x3540b20()*-2.07638);
}

double NNfunction_nn_chi3_charge1m::synapse0x3535c50() {
   return (neuron0x35414f0()*-2.35952);
}

double NNfunction_nn_chi3_charge1m::synapse0x35365e0() {
   return (neuron0x3541ec0()*0.119812);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536620() {
   return (neuron0x3542890()*5.28148);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f130() {
   return (neuron0x3543260()*-0.0607531);
}

double NNfunction_nn_chi3_charge1m::synapse0x352f170() {
   return (neuron0x3543c30()*1.85455);
}

double NNfunction_nn_chi3_charge1m::synapse0x35389e0() {
   return (neuron0x3544600()*0.0825542);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538a20() {
   return (neuron0x35451e0()*-0.0188073);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539370() {
   return (neuron0x3545bb0()*0.170516);
}

double NNfunction_nn_chi3_charge1m::synapse0x35393b0() {
   return (neuron0x3536a30()*0.0670721);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539d40() {
   return (neuron0x3537400()*-0.207369);
}

double NNfunction_nn_chi3_charge1m::synapse0x3539d80() {
   return (neuron0x3537dd0()*0.06463);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a710() {
   return (neuron0x354a410()*-0.666936);
}

double NNfunction_nn_chi3_charge1m::synapse0x353a750() {
   return (neuron0x354acc0()*0.162159);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b0e0() {
   return (neuron0x354b690()*-3.40841);
}

double NNfunction_nn_chi3_charge1m::synapse0x353b120() {
   return (neuron0x354c060()*2.09026);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d820() {
   return (neuron0x3526ed0()*-0.348425);
}

double NNfunction_nn_chi3_charge1m::synapse0x353d860() {
   return (neuron0x3527820()*-0.538041);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532de0() {
   return (neuron0x3528300()*-0.114487);
}

double NNfunction_nn_chi3_charge1m::synapse0x3532e20() {
   return (neuron0x3527da0()*-0.848761);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540400() {
   return (neuron0x35290e0()*0.621385);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540440() {
   return (neuron0x352abc0()*-0.406877);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540dd0() {
   return (neuron0x352b990()*-0.486437);
}

double NNfunction_nn_chi3_charge1m::synapse0x3540e10() {
   return (neuron0x352c360()*-0.74251);
}

double NNfunction_nn_chi3_charge1m::synapse0x35417a0() {
   return (neuron0x352cd30()*-0.554765);
}

double NNfunction_nn_chi3_charge1m::synapse0x35417e0() {
   return (neuron0x352d810()*-0.240682);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542170() {
   return (neuron0x352e1e0()*-1.43576);
}

double NNfunction_nn_chi3_charge1m::synapse0x35421b0() {
   return (neuron0x352b2c0()*-0.616961);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542b40() {
   return (neuron0x352fd90()*-0.134041);
}

double NNfunction_nn_chi3_charge1m::synapse0x3542b80() {
   return (neuron0x3530760()*-0.780016);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543510() {
   return (neuron0x3531130()*-0.918344);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543550() {
   return (neuron0x3531b00()*0.0639199);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543ee0() {
   return (neuron0x3533910()*-0.579549);
}

double NNfunction_nn_chi3_charge1m::synapse0x3543f20() {
   return (neuron0x3533bf0()*-1.52523);
}

double NNfunction_nn_chi3_charge1m::synapse0x35448b0() {
   return (neuron0x35345c0()*-0.770553);
}

double NNfunction_nn_chi3_charge1m::synapse0x35448f0() {
   return (neuron0x3534f90()*-0.282886);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545490() {
   return (neuron0x3535960()*-0.805565);
}

double NNfunction_nn_chi3_charge1m::synapse0x35454d0() {
   return (neuron0x3536330()*-0.570358);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545e60() {
   return (neuron0x352ee80()*0.0708615);
}

double NNfunction_nn_chi3_charge1m::synapse0x3545ea0() {
   return (neuron0x352f850()*-0.318518);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536ce0() {
   return (neuron0x35390c0()*-0.424666);
}

double NNfunction_nn_chi3_charge1m::synapse0x3536d20() {
   return (neuron0x3539a90()*0.218257);
}

double NNfunction_nn_chi3_charge1m::synapse0x35376b0() {
   return (neuron0x353a460()*-0.109994);
}

double NNfunction_nn_chi3_charge1m::synapse0x35376f0() {
   return (neuron0x353ae30()*-0.819573);
}

double NNfunction_nn_chi3_charge1m::synapse0x3538080() {
   return (neuron0x353b800()*-0.0272389);
}

double NNfunction_nn_chi3_charge1m::synapse0x35380c0() {
   return (neuron0x353c1d0()*-0.264075);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a5a0() {
   return (neuron0x353cba0()*-0.555294);
}

double NNfunction_nn_chi3_charge1m::synapse0x354a5e0() {
   return (neuron0x353d570()*-0.761409);
}

double NNfunction_nn_chi3_charge1m::synapse0x354af70() {
   return (neuron0x3533600()*-0.556778);
}

double NNfunction_nn_chi3_charge1m::synapse0x354afb0() {
   return (neuron0x3540150()*0.163093);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b940() {
   return (neuron0x3540b20()*-0.256744);
}

double NNfunction_nn_chi3_charge1m::synapse0x354b980() {
   return (neuron0x35414f0()*-0.282782);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c310() {
   return (neuron0x3541ec0()*-0.275574);
}

double NNfunction_nn_chi3_charge1m::synapse0x354c350() {
   return (neuron0x3542890()*-0.215673);
}

double NNfunction_nn_chi3_charge1m::synapse0x3527180() {
   return (neuron0x3543260()*0.350889);
}

double NNfunction_nn_chi3_charge1m::synapse0x35271c0() {
   return (neuron0x3543c30()*0.0127698);
}

double NNfunction_nn_chi3_charge1m::synapse0x353bab0() {
   return (neuron0x3544600()*-0.793768);
}

double NNfunction_nn_chi3_charge1m::synapse0x353baf0() {
   return (neuron0x35451e0()*-1.36871);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ca30() {
   return (neuron0x3545bb0()*-0.254776);
}

double NNfunction_nn_chi3_charge1m::synapse0x354ca70() {
   return (neuron0x3536a30()*-0.580294);
}

double NNfunction_nn_chi3_charge1m::synapse0x354cab0() {
   return (neuron0x3537400()*-0.459763);
}

double NNfunction_nn_chi3_charge1m::synapse0x354caf0() {
   return (neuron0x3537dd0()*-0.620428);
}

double NNfunction_nn_chi3_charge1m::synapse0x35539a0() {
   return (neuron0x354a410()*-0.52501);
}

double NNfunction_nn_chi3_charge1m::synapse0x35539e0() {
   return (neuron0x354acc0()*-0.242819);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553a20() {
   return (neuron0x354b690()*-0.604798);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553a60() {
   return (neuron0x354c060()*-0.168846);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553de0() {
   return (neuron0x3526ed0()*-0.568224);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553e20() {
   return (neuron0x3527820()*-3.3783);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553e60() {
   return (neuron0x3528300()*-0.941984);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553ea0() {
   return (neuron0x3527da0()*-1.56581);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553ee0() {
   return (neuron0x35290e0()*0.0515452);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553f20() {
   return (neuron0x352abc0()*-0.87451);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553f60() {
   return (neuron0x352b990()*1.56826);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553fa0() {
   return (neuron0x352c360()*-0.083248);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553fe0() {
   return (neuron0x352cd30()*-0.0502601);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554020() {
   return (neuron0x352d810()*0.141759);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554060() {
   return (neuron0x352e1e0()*-0.0468661);
}

double NNfunction_nn_chi3_charge1m::synapse0x35540a0() {
   return (neuron0x352b2c0()*-3.54213);
}

double NNfunction_nn_chi3_charge1m::synapse0x35540e0() {
   return (neuron0x352fd90()*-0.0640924);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554120() {
   return (neuron0x3530760()*-0.0175482);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554160() {
   return (neuron0x3531130()*1.34196);
}

double NNfunction_nn_chi3_charge1m::synapse0x35541a0() {
   return (neuron0x3531b00()*0.109334);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553c30() {
   return (neuron0x3533910()*-0.0350333);
}

double NNfunction_nn_chi3_charge1m::synapse0x3553c70() {
   return (neuron0x3533bf0()*-0.204534);
}

double NNfunction_nn_chi3_charge1m::synapse0x35542f0() {
   return (neuron0x35345c0()*0.0687912);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554330() {
   return (neuron0x3534f90()*0.347706);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554370() {
   return (neuron0x3535960()*0.417309);
}

double NNfunction_nn_chi3_charge1m::synapse0x35543b0() {
   return (neuron0x3536330()*0.0242589);
}

double NNfunction_nn_chi3_charge1m::synapse0x35543f0() {
   return (neuron0x352ee80()*0.165976);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554430() {
   return (neuron0x352f850()*0.0185636);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554470() {
   return (neuron0x35390c0()*0.764296);
}

double NNfunction_nn_chi3_charge1m::synapse0x35544b0() {
   return (neuron0x3539a90()*-0.349278);
}

double NNfunction_nn_chi3_charge1m::synapse0x35544f0() {
   return (neuron0x353a460()*-0.0334299);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554530() {
   return (neuron0x353ae30()*0.403616);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554570() {
   return (neuron0x353b800()*-0.00372209);
}

double NNfunction_nn_chi3_charge1m::synapse0x35545b0() {
   return (neuron0x353c1d0()*0.0374223);
}

double NNfunction_nn_chi3_charge1m::synapse0x35545f0() {
   return (neuron0x353cba0()*-0.270958);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554630() {
   return (neuron0x353d570()*3.55566);
}

double NNfunction_nn_chi3_charge1m::synapse0x35541e0() {
   return (neuron0x3533600()*1.22449);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554220() {
   return (neuron0x3540150()*0.0735533);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554260() {
   return (neuron0x3540b20()*0.631707);
}

double NNfunction_nn_chi3_charge1m::synapse0x35542a0() {
   return (neuron0x35414f0()*-0.0132813);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554880() {
   return (neuron0x3541ec0()*-0.0688707);
}

double NNfunction_nn_chi3_charge1m::synapse0x35548c0() {
   return (neuron0x3542890()*-2.01887);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554900() {
   return (neuron0x3543260()*0.0227699);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554940() {
   return (neuron0x3543c30()*-0.359358);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554980() {
   return (neuron0x3544600()*-0.0401526);
}

double NNfunction_nn_chi3_charge1m::synapse0x35549c0() {
   return (neuron0x35451e0()*-0.0144451);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554a00() {
   return (neuron0x3545bb0()*0.173801);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554a40() {
   return (neuron0x3536a30()*-0.0384533);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554a80() {
   return (neuron0x3537400()*0.111854);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554ac0() {
   return (neuron0x3537dd0()*-0.0118558);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554b00() {
   return (neuron0x354a410()*-0.0173437);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554b40() {
   return (neuron0x354acc0()*-0.064537);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554b80() {
   return (neuron0x354b690()*1.3823);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554bc0() {
   return (neuron0x354c060()*-0.393843);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554f40() {
   return (neuron0x3526ed0()*0.0232277);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554f80() {
   return (neuron0x3527820()*0.319058);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554fc0() {
   return (neuron0x3528300()*0.0532052);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555000() {
   return (neuron0x3527da0()*0.153262);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555040() {
   return (neuron0x35290e0()*0.393581);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555080() {
   return (neuron0x352abc0()*1.47085);
}

double NNfunction_nn_chi3_charge1m::synapse0x35550c0() {
   return (neuron0x352b990()*-0.254738);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555100() {
   return (neuron0x352c360()*0.690353);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555140() {
   return (neuron0x352cd30()*0.163337);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555180() {
   return (neuron0x352d810()*0.701216);
}

double NNfunction_nn_chi3_charge1m::synapse0x35551c0() {
   return (neuron0x352e1e0()*0.0615597);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555200() {
   return (neuron0x352b2c0()*0.606157);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555240() {
   return (neuron0x352fd90()*0.196273);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555280() {
   return (neuron0x3530760()*0.166392);
}

double NNfunction_nn_chi3_charge1m::synapse0x35552c0() {
   return (neuron0x3531130()*0.204198);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555300() {
   return (neuron0x3531b00()*1.044);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554d90() {
   return (neuron0x3533910()*-0.0967672);
}

double NNfunction_nn_chi3_charge1m::synapse0x3554dd0() {
   return (neuron0x3533bf0()*-0.104875);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555450() {
   return (neuron0x35345c0()*0.468399);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555490() {
   return (neuron0x3534f90()*-0.257919);
}

double NNfunction_nn_chi3_charge1m::synapse0x35554d0() {
   return (neuron0x3535960()*-0.286944);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555510() {
   return (neuron0x3536330()*0.92494);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555550() {
   return (neuron0x352ee80()*0.675218);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555590() {
   return (neuron0x352f850()*0.12902);
}

double NNfunction_nn_chi3_charge1m::synapse0x35555d0() {
   return (neuron0x35390c0()*0.537862);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555610() {
   return (neuron0x3539a90()*1.02011);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555650() {
   return (neuron0x353a460()*-0.109632);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555690() {
   return (neuron0x353ae30()*0.864905);
}

double NNfunction_nn_chi3_charge1m::synapse0x35556d0() {
   return (neuron0x353b800()*0.902042);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555710() {
   return (neuron0x353c1d0()*0.721954);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555750() {
   return (neuron0x353cba0()*0.498757);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555790() {
   return (neuron0x353d570()*0.296619);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555340() {
   return (neuron0x3533600()*0.353753);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555380() {
   return (neuron0x3540150()*1.05816);
}

double NNfunction_nn_chi3_charge1m::synapse0x35553c0() {
   return (neuron0x3540b20()*0.521769);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555400() {
   return (neuron0x35414f0()*-0.0394653);
}

double NNfunction_nn_chi3_charge1m::synapse0x35559e0() {
   return (neuron0x3541ec0()*0.778486);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555a20() {
   return (neuron0x3542890()*0.484108);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555a60() {
   return (neuron0x3543260()*0.872696);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555aa0() {
   return (neuron0x3543c30()*0.492176);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555ae0() {
   return (neuron0x3544600()*0.866628);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555b20() {
   return (neuron0x35451e0()*-0.312759);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555b60() {
   return (neuron0x3545bb0()*0.722205);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555ba0() {
   return (neuron0x3536a30()*0.715241);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555be0() {
   return (neuron0x3537400()*0.554745);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555c20() {
   return (neuron0x3537dd0()*0.262634);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555c60() {
   return (neuron0x354a410()*0.203166);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555ca0() {
   return (neuron0x354acc0()*0.779962);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555ce0() {
   return (neuron0x354b690()*0.433688);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555d20() {
   return (neuron0x354c060()*0.0869382);
}

double NNfunction_nn_chi3_charge1m::synapse0x35560a0() {
   return (neuron0x3526ed0()*-0.376335);
}

double NNfunction_nn_chi3_charge1m::synapse0x35560e0() {
   return (neuron0x3527820()*-0.580158);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556120() {
   return (neuron0x3528300()*-0.0704023);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556160() {
   return (neuron0x3527da0()*-0.428346);
}

double NNfunction_nn_chi3_charge1m::synapse0x35561a0() {
   return (neuron0x35290e0()*0.510455);
}

double NNfunction_nn_chi3_charge1m::synapse0x35561e0() {
   return (neuron0x352abc0()*0.792172);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556220() {
   return (neuron0x352b990()*-0.153895);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556260() {
   return (neuron0x352c360()*-0.156321);
}

double NNfunction_nn_chi3_charge1m::synapse0x35562a0() {
   return (neuron0x352cd30()*-0.795107);
}

double NNfunction_nn_chi3_charge1m::synapse0x35562e0() {
   return (neuron0x352d810()*-0.811222);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556320() {
   return (neuron0x352e1e0()*-0.926997);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556360() {
   return (neuron0x352b2c0()*-0.464859);
}

double NNfunction_nn_chi3_charge1m::synapse0x35563a0() {
   return (neuron0x352fd90()*-0.224902);
}

double NNfunction_nn_chi3_charge1m::synapse0x35563e0() {
   return (neuron0x3530760()*-1.12869);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556420() {
   return (neuron0x3531130()*-0.0465738);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556460() {
   return (neuron0x3531b00()*0.0183912);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555ef0() {
   return (neuron0x3533910()*-0.301255);
}

double NNfunction_nn_chi3_charge1m::synapse0x3555f30() {
   return (neuron0x3533bf0()*-1.04299);
}

double NNfunction_nn_chi3_charge1m::synapse0x35565b0() {
   return (neuron0x35345c0()*-0.592445);
}

double NNfunction_nn_chi3_charge1m::synapse0x35565f0() {
   return (neuron0x3534f90()*-0.74739);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556630() {
   return (neuron0x3535960()*-1.28905);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556670() {
   return (neuron0x3536330()*-0.690427);
}

double NNfunction_nn_chi3_charge1m::synapse0x35566b0() {
   return (neuron0x352ee80()*-0.177176);
}

double NNfunction_nn_chi3_charge1m::synapse0x35566f0() {
   return (neuron0x352f850()*-0.174233);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556730() {
   return (neuron0x35390c0()*0.0522013);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556770() {
   return (neuron0x3539a90()*-0.241083);
}

double NNfunction_nn_chi3_charge1m::synapse0x35567b0() {
   return (neuron0x353a460()*0.292215);
}

double NNfunction_nn_chi3_charge1m::synapse0x35567f0() {
   return (neuron0x353ae30()*-0.179566);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556830() {
   return (neuron0x353b800()*-0.737137);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556870() {
   return (neuron0x353c1d0()*-0.115996);
}

double NNfunction_nn_chi3_charge1m::synapse0x35568b0() {
   return (neuron0x353cba0()*-1.06371);
}

double NNfunction_nn_chi3_charge1m::synapse0x35568f0() {
   return (neuron0x353d570()*-0.245668);
}

double NNfunction_nn_chi3_charge1m::synapse0x35564a0() {
   return (neuron0x3533600()*-0.747024);
}

double NNfunction_nn_chi3_charge1m::synapse0x35564e0() {
   return (neuron0x3540150()*-0.490199);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556520() {
   return (neuron0x3540b20()*-0.260615);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556560() {
   return (neuron0x35414f0()*-1.03808);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556b40() {
   return (neuron0x3541ec0()*0.109493);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556b80() {
   return (neuron0x3542890()*-0.350296);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556bc0() {
   return (neuron0x3543260()*0.860049);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556c00() {
   return (neuron0x3543c30()*0.108892);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556c40() {
   return (neuron0x3544600()*-0.0956301);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556c80() {
   return (neuron0x35451e0()*-1.83751);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556cc0() {
   return (neuron0x3545bb0()*0.185729);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556d00() {
   return (neuron0x3536a30()*-1.31645);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556d40() {
   return (neuron0x3537400()*-0.451972);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556d80() {
   return (neuron0x3537dd0()*-0.265872);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556dc0() {
   return (neuron0x354a410()*-1.11333);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556e00() {
   return (neuron0x354acc0()*-0.907621);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556e40() {
   return (neuron0x354b690()*-1.62704);
}

double NNfunction_nn_chi3_charge1m::synapse0x3556e80() {
   return (neuron0x354c060()*0.150819);
}

double NNfunction_nn_chi3_charge1m::synapse0x35570e0() {
   return (neuron0x3553260()*-11.9681);
}

double NNfunction_nn_chi3_charge1m::synapse0x3557120() {
   return (neuron0x3553600()*0.038026);
}

double NNfunction_nn_chi3_charge1m::synapse0x3557160() {
   return (neuron0x3553aa0()*-13.1171);
}

double NNfunction_nn_chi3_charge1m::synapse0x35571a0() {
   return (neuron0x3554c00()*4.20883);
}

double NNfunction_nn_chi3_charge1m::synapse0x35571e0() {
   return (neuron0x3555d60()*-1.08811);
}

