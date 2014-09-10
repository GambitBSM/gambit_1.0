#include "NNfunction_ns_chi02_uR.h"
#include <cmath>

double NNfunction_ns_chi02_uR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.9943)/15.2482;
   input1 = (in1 - -5.86041)/836.873;
   input2 = (in2 - 483.332)/562.569;
   input3 = (in3 - 66.8771)/755.472;
   input4 = (in4 - 926.556)/898.234;
   input5 = (in5 - 797.659)/886.598;
   input6 = (in6 - 797.032)/883.7;
   input7 = (in7 - 795.134)/860.91;
   input8 = (in8 - 787.861)/873.112;
   input9 = (in9 - 780.389)/863.76;
   input10 = (in10 - 825.976)/871.842;
   input11 = (in11 - 655.772)/745.645;
   input12 = (in12 - 661.829)/751.37;
   input13 = (in13 - 475.046)/448.976;
   input14 = (in14 - 299.167)/252.156;
   input15 = (in15 - 690.997)/749.442;
   input16 = (in16 - 492.45)/508.043;
   input17 = (in17 - 683.342)/783.483;
   input18 = (in18 - 686.317)/785.617;
   input19 = (in19 - 700.062)/758.86;
   input20 = (in20 - -56.8559)/447.344;
   input21 = (in21 - -75.6217)/1030.97;
   input22 = (in22 - 9.14508)/1060.14;
   input23 = (in23 - -45.9986)/442.803;
   switch(index) {
     case 0:
         return neuron0x362f9b0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_uR::Value(int index, double* input) {
   input0 = (input[0] - 23.9943)/15.2482;
   input1 = (input[1] - -5.86041)/836.873;
   input2 = (input[2] - 483.332)/562.569;
   input3 = (input[3] - 66.8771)/755.472;
   input4 = (input[4] - 926.556)/898.234;
   input5 = (input[5] - 797.659)/886.598;
   input6 = (input[6] - 797.032)/883.7;
   input7 = (input[7] - 795.134)/860.91;
   input8 = (input[8] - 787.861)/873.112;
   input9 = (input[9] - 780.389)/863.76;
   input10 = (input[10] - 825.976)/871.842;
   input11 = (input[11] - 655.772)/745.645;
   input12 = (input[12] - 661.829)/751.37;
   input13 = (input[13] - 475.046)/448.976;
   input14 = (input[14] - 299.167)/252.156;
   input15 = (input[15] - 690.997)/749.442;
   input16 = (input[16] - 492.45)/508.043;
   input17 = (input[17] - 683.342)/783.483;
   input18 = (input[18] - 686.317)/785.617;
   input19 = (input[19] - 700.062)/758.86;
   input20 = (input[20] - -56.8559)/447.344;
   input21 = (input[21] - -75.6217)/1030.97;
   input22 = (input[22] - 9.14508)/1060.14;
   input23 = (input[23] - -45.9986)/442.803;
   switch(index) {
     case 0:
         return neuron0x362f9b0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_uR::neuron0x35faa20() {
   return input0;
}

double NNfunction_ns_chi02_uR::neuron0x35facd0() {
   return input1;
}

double NNfunction_ns_chi02_uR::neuron0x35fb010() {
   return input2;
}

double NNfunction_ns_chi02_uR::neuron0x35fb350() {
   return input3;
}

double NNfunction_ns_chi02_uR::neuron0x35fb690() {
   return input4;
}

double NNfunction_ns_chi02_uR::neuron0x35fb9d0() {
   return input5;
}

double NNfunction_ns_chi02_uR::neuron0x35fbd10() {
   return input6;
}

double NNfunction_ns_chi02_uR::neuron0x35fc050() {
   return input7;
}

double NNfunction_ns_chi02_uR::neuron0x35fc390() {
   return input8;
}

double NNfunction_ns_chi02_uR::neuron0x35fc6d0() {
   return input9;
}

double NNfunction_ns_chi02_uR::neuron0x35fca10() {
   return input10;
}

double NNfunction_ns_chi02_uR::neuron0x35fcd50() {
   return input11;
}

double NNfunction_ns_chi02_uR::neuron0x35fd090() {
   return input12;
}

double NNfunction_ns_chi02_uR::neuron0x35fd3d0() {
   return input13;
}

double NNfunction_ns_chi02_uR::neuron0x35fd710() {
   return input14;
}

double NNfunction_ns_chi02_uR::neuron0x35fda50() {
   return input15;
}

double NNfunction_ns_chi02_uR::neuron0x35fdd90() {
   return input16;
}

double NNfunction_ns_chi02_uR::neuron0x35fe2f0() {
   return input17;
}

double NNfunction_ns_chi02_uR::neuron0x35fe630() {
   return input18;
}

double NNfunction_ns_chi02_uR::neuron0x35fe970() {
   return input19;
}

double NNfunction_ns_chi02_uR::neuron0x35fecb0() {
   return input20;
}

double NNfunction_ns_chi02_uR::neuron0x35feff0() {
   return input21;
}

double NNfunction_ns_chi02_uR::neuron0x35ff330() {
   return input22;
}

double NNfunction_ns_chi02_uR::neuron0x35ff670() {
   return input23;
}

double NNfunction_ns_chi02_uR::input0x35ffae0() {
   double input = -1.37868;
   input += synapse0x35ffe20();
   input += synapse0x35ffe60();
   input += synapse0x35ffea0();
   input += synapse0x35ffee0();
   input += synapse0x35fff20();
   input += synapse0x35fff60();
   input += synapse0x35fffa0();
   input += synapse0x35fffe0();
   input += synapse0x3600020();
   input += synapse0x3600060();
   input += synapse0x36000a0();
   input += synapse0x36000e0();
   input += synapse0x3600120();
   input += synapse0x3600160();
   input += synapse0x36001a0();
   input += synapse0x36001e0();
   input += synapse0x35ffc70();
   input += synapse0x35ffcb0();
   input += synapse0x33b6b80();
   input += synapse0x33b6bc0();
   input += synapse0x3600220();
   input += synapse0x3600260();
   input += synapse0x36002a0();
   input += synapse0x36002e0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x35ffae0() {
   double input = input0x35ffae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3600320() {
   double input = 0.268855;
   input += synapse0x3600660();
   input += synapse0x36006a0();
   input += synapse0x36006e0();
   input += synapse0x3600720();
   input += synapse0x3600760();
   input += synapse0x36007a0();
   input += synapse0x36007e0();
   input += synapse0x3600820();
   input += synapse0x3600860();
   input += synapse0x33b69d0();
   input += synapse0x33b6a10();
   input += synapse0x33b6a50();
   input += synapse0x33b6a90();
   input += synapse0x3600ab0();
   input += synapse0x3600af0();
   input += synapse0x3600b30();
   input += synapse0x36004b0();
   input += synapse0x36004f0();
   input += synapse0x3600c80();
   input += synapse0x3600cc0();
   input += synapse0x3600d00();
   input += synapse0x3600d40();
   input += synapse0x3600d80();
   input += synapse0x3600dc0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3600320() {
   double input = input0x3600320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3600e00() {
   double input = -1.81185;
   input += synapse0x3601140();
   input += synapse0x3601180();
   input += synapse0x36011c0();
   input += synapse0x3601200();
   input += synapse0x3601240();
   input += synapse0x3601280();
   input += synapse0x36012c0();
   input += synapse0x3601300();
   input += synapse0x3601340();
   input += synapse0x3601380();
   input += synapse0x36013c0();
   input += synapse0x3601400();
   input += synapse0x3601440();
   input += synapse0x3601480();
   input += synapse0x36014c0();
   input += synapse0x3601500();
   input += synapse0x3600f90();
   input += synapse0x3600fd0();
   input += synapse0x33c4ac0();
   input += synapse0x33c4b00();
   input += synapse0x3603430();
   input += synapse0x3603470();
   input += synapse0x35fa760();
   input += synapse0x35fa7a0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3600e00() {
   double input = input0x3600e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x33c5220() {
   double input = -0.851253;
   input += synapse0x33c53b0();
   input += synapse0x36009c0();
   input += synapse0x3600a00();
   input += synapse0x3600a40();
   input += synapse0x3601650();
   input += synapse0x3601690();
   input += synapse0x36016d0();
   input += synapse0x3601710();
   input += synapse0x3601750();
   input += synapse0x3601790();
   input += synapse0x36017d0();
   input += synapse0x3601810();
   input += synapse0x3601850();
   input += synapse0x3601890();
   input += synapse0x36018d0();
   input += synapse0x3601910();
   input += synapse0x35fa7e0();
   input += synapse0x35fa820();
   input += synapse0x3601a60();
   input += synapse0x3601aa0();
   input += synapse0x3601ae0();
   input += synapse0x3601b20();
   input += synapse0x3601b60();
   input += synapse0x3601ba0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x33c5220() {
   double input = input0x33c5220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3601be0() {
   double input = 0.5836;
   input += synapse0x3601f20();
   input += synapse0x3601f60();
   input += synapse0x3601fa0();
   input += synapse0x3601fe0();
   input += synapse0x3602020();
   input += synapse0x3602060();
   input += synapse0x36020a0();
   input += synapse0x36020e0();
   input += synapse0x3602120();
   input += synapse0x3602160();
   input += synapse0x36021a0();
   input += synapse0x36021e0();
   input += synapse0x3602220();
   input += synapse0x3602260();
   input += synapse0x36022a0();
   input += synapse0x36022e0();
   input += synapse0x3602430();
   input += synapse0x3601d70();
   input += synapse0x3601db0();
   input += synapse0x3603570();
   input += synapse0x36035b0();
   input += synapse0x36035f0();
   input += synapse0x3603630();
   input += synapse0x3603670();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3601be0() {
   double input = input0x3601be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x36036b0() {
   double input = 0.46099;
   input += synapse0x36039f0();
   input += synapse0x3603a30();
   input += synapse0x3603a70();
   input += synapse0x3603ab0();
   input += synapse0x3603af0();
   input += synapse0x3603b30();
   input += synapse0x3603b70();
   input += synapse0x3603bb0();
   input += synapse0x3603bf0();
   input += synapse0x33c4e10();
   input += synapse0x33c4e50();
   input += synapse0x33c4e90();
   input += synapse0x33c4ed0();
   input += synapse0x33c4f10();
   input += synapse0x33c4f50();
   input += synapse0x33c4f90();
   input += synapse0x3603840();
   input += synapse0x3603880();
   input += synapse0x33c50e0();
   input += synapse0x33c5120();
   input += synapse0x33c5160();
   input += synapse0x33c51a0();
   input += synapse0x33c51e0();
   input += synapse0x3604440();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x36036b0() {
   double input = input0x36036b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3604480() {
   double input = -0.807968;
   input += synapse0x36047c0();
   input += synapse0x3604800();
   input += synapse0x3604840();
   input += synapse0x3604880();
   input += synapse0x36048c0();
   input += synapse0x3604900();
   input += synapse0x3604940();
   input += synapse0x3604980();
   input += synapse0x36049c0();
   input += synapse0x3604a00();
   input += synapse0x3604a40();
   input += synapse0x3604a80();
   input += synapse0x3604ac0();
   input += synapse0x3604b00();
   input += synapse0x3604b40();
   input += synapse0x3604b80();
   input += synapse0x3604610();
   input += synapse0x3604650();
   input += synapse0x3604cd0();
   input += synapse0x3604d10();
   input += synapse0x3604d50();
   input += synapse0x3604d90();
   input += synapse0x3604dd0();
   input += synapse0x3604e10();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3604480() {
   double input = input0x3604480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3604e50() {
   double input = -0.67528;
   input += synapse0x3605190();
   input += synapse0x36051d0();
   input += synapse0x3605210();
   input += synapse0x3605250();
   input += synapse0x3605290();
   input += synapse0x36052d0();
   input += synapse0x3605310();
   input += synapse0x3605350();
   input += synapse0x3605390();
   input += synapse0x36053d0();
   input += synapse0x3605410();
   input += synapse0x3605450();
   input += synapse0x3605490();
   input += synapse0x36054d0();
   input += synapse0x3605510();
   input += synapse0x3605550();
   input += synapse0x3604fe0();
   input += synapse0x3605020();
   input += synapse0x36056a0();
   input += synapse0x36056e0();
   input += synapse0x3605720();
   input += synapse0x3605760();
   input += synapse0x36057a0();
   input += synapse0x36057e0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3604e50() {
   double input = input0x3604e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3605820() {
   double input = 8.81799;
   input += synapse0x35fe1e0();
   input += synapse0x35fe220();
   input += synapse0x35fe260();
   input += synapse0x35fe2a0();
   input += synapse0x3605d70();
   input += synapse0x3605db0();
   input += synapse0x3605df0();
   input += synapse0x3605e30();
   input += synapse0x3605e70();
   input += synapse0x3605eb0();
   input += synapse0x3605ef0();
   input += synapse0x3605f30();
   input += synapse0x3605f70();
   input += synapse0x3605fb0();
   input += synapse0x3605ff0();
   input += synapse0x3606030();
   input += synapse0x36059b0();
   input += synapse0x36059f0();
   input += synapse0x3606180();
   input += synapse0x36061c0();
   input += synapse0x3606200();
   input += synapse0x3606240();
   input += synapse0x3606280();
   input += synapse0x36062c0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3605820() {
   double input = input0x3605820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3606300() {
   double input = -4.46575;
   input += synapse0x3606640();
   input += synapse0x3606680();
   input += synapse0x36066c0();
   input += synapse0x3606700();
   input += synapse0x3606740();
   input += synapse0x3606780();
   input += synapse0x36067c0();
   input += synapse0x3606800();
   input += synapse0x3606840();
   input += synapse0x3606880();
   input += synapse0x36068c0();
   input += synapse0x3606900();
   input += synapse0x3606940();
   input += synapse0x3606980();
   input += synapse0x36069c0();
   input += synapse0x3606a00();
   input += synapse0x3606490();
   input += synapse0x36064d0();
   input += synapse0x3606b50();
   input += synapse0x3606b90();
   input += synapse0x3606bd0();
   input += synapse0x3606c10();
   input += synapse0x3606c50();
   input += synapse0x3606c90();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3606300() {
   double input = input0x3606300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3606cd0() {
   double input = 5.13253;
   input += synapse0x3607010();
   input += synapse0x3607050();
   input += synapse0x3607090();
   input += synapse0x36070d0();
   input += synapse0x3607110();
   input += synapse0x3607150();
   input += synapse0x3607190();
   input += synapse0x36071d0();
   input += synapse0x3607210();
   input += synapse0x3607250();
   input += synapse0x3607290();
   input += synapse0x36072d0();
   input += synapse0x3607310();
   input += synapse0x3607350();
   input += synapse0x3607390();
   input += synapse0x36073d0();
   input += synapse0x3606e60();
   input += synapse0x3606ea0();
   input += synapse0x3603c30();
   input += synapse0x3603c70();
   input += synapse0x3603cb0();
   input += synapse0x3603cf0();
   input += synapse0x3603d30();
   input += synapse0x3603d70();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3606cd0() {
   double input = input0x3606cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3603db0() {
   double input = -0.178431;
   input += synapse0x36040f0();
   input += synapse0x3604130();
   input += synapse0x3604170();
   input += synapse0x36041b0();
   input += synapse0x36041f0();
   input += synapse0x3604230();
   input += synapse0x3604270();
   input += synapse0x36042b0();
   input += synapse0x36042f0();
   input += synapse0x3604330();
   input += synapse0x3604370();
   input += synapse0x36043b0();
   input += synapse0x36043f0();
   input += synapse0x3608530();
   input += synapse0x3608570();
   input += synapse0x36085b0();
   input += synapse0x3603f40();
   input += synapse0x3603f80();
   input += synapse0x3608700();
   input += synapse0x3608740();
   input += synapse0x3608780();
   input += synapse0x36087c0();
   input += synapse0x3608800();
   input += synapse0x3608840();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3603db0() {
   double input = input0x3603db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3608880() {
   double input = 1.19004;
   input += synapse0x3608bc0();
   input += synapse0x3608c00();
   input += synapse0x3608c40();
   input += synapse0x3608c80();
   input += synapse0x3608cc0();
   input += synapse0x3608d00();
   input += synapse0x3608d40();
   input += synapse0x3608d80();
   input += synapse0x3608dc0();
   input += synapse0x3608e00();
   input += synapse0x3608e40();
   input += synapse0x3608e80();
   input += synapse0x3608ec0();
   input += synapse0x3608f00();
   input += synapse0x3608f40();
   input += synapse0x3608f80();
   input += synapse0x3608a10();
   input += synapse0x3608a50();
   input += synapse0x36090d0();
   input += synapse0x3609110();
   input += synapse0x3609150();
   input += synapse0x3609190();
   input += synapse0x36091d0();
   input += synapse0x3609210();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3608880() {
   double input = input0x3608880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3609250() {
   double input = -2.69998;
   input += synapse0x3609590();
   input += synapse0x36095d0();
   input += synapse0x3609610();
   input += synapse0x3609650();
   input += synapse0x3609690();
   input += synapse0x36096d0();
   input += synapse0x3609710();
   input += synapse0x3609750();
   input += synapse0x3609790();
   input += synapse0x36097d0();
   input += synapse0x3609810();
   input += synapse0x3609850();
   input += synapse0x3609890();
   input += synapse0x36098d0();
   input += synapse0x3609910();
   input += synapse0x3609950();
   input += synapse0x36093e0();
   input += synapse0x3609420();
   input += synapse0x3609aa0();
   input += synapse0x3609ae0();
   input += synapse0x3609b20();
   input += synapse0x3609b60();
   input += synapse0x3609ba0();
   input += synapse0x3609be0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3609250() {
   double input = input0x3609250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3609c20() {
   double input = -0.783205;
   input += synapse0x3609f60();
   input += synapse0x3609fa0();
   input += synapse0x3609fe0();
   input += synapse0x360a020();
   input += synapse0x360a060();
   input += synapse0x360a0a0();
   input += synapse0x360a0e0();
   input += synapse0x360a120();
   input += synapse0x360a160();
   input += synapse0x360a1a0();
   input += synapse0x360a1e0();
   input += synapse0x360a220();
   input += synapse0x360a260();
   input += synapse0x360a2a0();
   input += synapse0x360a2e0();
   input += synapse0x360a320();
   input += synapse0x3609db0();
   input += synapse0x3609df0();
   input += synapse0x360a470();
   input += synapse0x360a4b0();
   input += synapse0x360a4f0();
   input += synapse0x360a530();
   input += synapse0x360a570();
   input += synapse0x360a5b0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3609c20() {
   double input = input0x3609c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360a5f0() {
   double input = 1.5793;
   input += synapse0x360a930();
   input += synapse0x35fabb0();
   input += synapse0x35fabf0();
   input += synapse0x35faef0();
   input += synapse0x35faf30();
   input += synapse0x35fb230();
   input += synapse0x35fb270();
   input += synapse0x35fb570();
   input += synapse0x35fb5b0();
   input += synapse0x35fb8b0();
   input += synapse0x35fb8f0();
   input += synapse0x35fbbf0();
   input += synapse0x35fbc30();
   input += synapse0x35fbf30();
   input += synapse0x35fbf70();
   input += synapse0x35fc270();
   input += synapse0x35fc2b0();
   input += synapse0x35fc5b0();
   input += synapse0x35fc5f0();
   input += synapse0x35fc8f0();
   input += synapse0x35fc930();
   input += synapse0x35fcc30();
   input += synapse0x35fcc70();
   input += synapse0x35fcf70();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360a5f0() {
   double input = input0x360a5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360c400() {
   double input = -0.591356;
   input += synapse0x35fcfb0();
   input += synapse0x35fdc70();
   input += synapse0x35fdcb0();
   input += synapse0x360a780();
   input += synapse0x360a7c0();
   input += synapse0x35fdfb0();
   input += synapse0x35fdff0();
   input += synapse0x35fe510();
   input += synapse0x35fe550();
   input += synapse0x35fe850();
   input += synapse0x35fe890();
   input += synapse0x35feb90();
   input += synapse0x35febd0();
   input += synapse0x35feed0();
   input += synapse0x35fef10();
   input += synapse0x35ff210();
   input += synapse0x35ff250();
   input += synapse0x35ff550();
   input += synapse0x35ff590();
   input += synapse0x35ff890();
   input += synapse0x35ff8d0();
   input += synapse0x35fd2b0();
   input += synapse0x35fd2f0();
   input += synapse0x360c6a0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360c400() {
   double input = input0x360c400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360c6e0() {
   double input = -0.0690463;
   input += synapse0x360ca20();
   input += synapse0x360ca60();
   input += synapse0x360caa0();
   input += synapse0x360cae0();
   input += synapse0x360cb20();
   input += synapse0x360cb60();
   input += synapse0x360cba0();
   input += synapse0x360cbe0();
   input += synapse0x360cc20();
   input += synapse0x360cc60();
   input += synapse0x360cca0();
   input += synapse0x360cce0();
   input += synapse0x360cd20();
   input += synapse0x360cd60();
   input += synapse0x360cda0();
   input += synapse0x360cde0();
   input += synapse0x360c870();
   input += synapse0x360c8b0();
   input += synapse0x360cf30();
   input += synapse0x360cf70();
   input += synapse0x360cfb0();
   input += synapse0x360cff0();
   input += synapse0x360d030();
   input += synapse0x360d070();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360c6e0() {
   double input = input0x360c6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360d0b0() {
   double input = 1.17291;
   input += synapse0x360d3f0();
   input += synapse0x360d430();
   input += synapse0x360d470();
   input += synapse0x360d4b0();
   input += synapse0x360d4f0();
   input += synapse0x360d530();
   input += synapse0x360d570();
   input += synapse0x360d5b0();
   input += synapse0x360d5f0();
   input += synapse0x360d630();
   input += synapse0x360d670();
   input += synapse0x360d6b0();
   input += synapse0x360d6f0();
   input += synapse0x360d730();
   input += synapse0x360d770();
   input += synapse0x360d7b0();
   input += synapse0x360d240();
   input += synapse0x360d280();
   input += synapse0x360d900();
   input += synapse0x360d940();
   input += synapse0x360d980();
   input += synapse0x360d9c0();
   input += synapse0x360da00();
   input += synapse0x360da40();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360d0b0() {
   double input = input0x360d0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360da80() {
   double input = -4.08156;
   input += synapse0x360ddc0();
   input += synapse0x360de00();
   input += synapse0x360de40();
   input += synapse0x360de80();
   input += synapse0x360dec0();
   input += synapse0x360df00();
   input += synapse0x360df40();
   input += synapse0x360df80();
   input += synapse0x360dfc0();
   input += synapse0x360e000();
   input += synapse0x360e040();
   input += synapse0x360e080();
   input += synapse0x360e0c0();
   input += synapse0x360e100();
   input += synapse0x360e140();
   input += synapse0x360e180();
   input += synapse0x360dc10();
   input += synapse0x360dc50();
   input += synapse0x360e2d0();
   input += synapse0x360e310();
   input += synapse0x360e350();
   input += synapse0x360e390();
   input += synapse0x360e3d0();
   input += synapse0x360e410();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360da80() {
   double input = input0x360da80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360e450() {
   double input = -1.45826;
   input += synapse0x360e790();
   input += synapse0x360e7d0();
   input += synapse0x360e810();
   input += synapse0x360e850();
   input += synapse0x360e890();
   input += synapse0x360e8d0();
   input += synapse0x360e910();
   input += synapse0x360e950();
   input += synapse0x360e990();
   input += synapse0x360e9d0();
   input += synapse0x360ea10();
   input += synapse0x360ea50();
   input += synapse0x360ea90();
   input += synapse0x360ead0();
   input += synapse0x360eb10();
   input += synapse0x360eb50();
   input += synapse0x360e5e0();
   input += synapse0x360e620();
   input += synapse0x360eca0();
   input += synapse0x360ece0();
   input += synapse0x360ed20();
   input += synapse0x360ed60();
   input += synapse0x360eda0();
   input += synapse0x360ede0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360e450() {
   double input = input0x360e450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360ee20() {
   double input = 1.24339;
   input += synapse0x360f160();
   input += synapse0x360f1a0();
   input += synapse0x360f1e0();
   input += synapse0x360f220();
   input += synapse0x360f260();
   input += synapse0x360f2a0();
   input += synapse0x360f2e0();
   input += synapse0x360f320();
   input += synapse0x360f360();
   input += synapse0x3607520();
   input += synapse0x3607560();
   input += synapse0x36075a0();
   input += synapse0x36075e0();
   input += synapse0x3607620();
   input += synapse0x3607660();
   input += synapse0x36076a0();
   input += synapse0x360efb0();
   input += synapse0x360eff0();
   input += synapse0x36077f0();
   input += synapse0x3607830();
   input += synapse0x3607870();
   input += synapse0x36078b0();
   input += synapse0x36078f0();
   input += synapse0x3607930();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360ee20() {
   double input = input0x360ee20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3607970() {
   double input = 1.24795;
   input += synapse0x3607cb0();
   input += synapse0x3607cf0();
   input += synapse0x3607d30();
   input += synapse0x3607d70();
   input += synapse0x3607db0();
   input += synapse0x3607df0();
   input += synapse0x3607e30();
   input += synapse0x3607e70();
   input += synapse0x3607eb0();
   input += synapse0x3607ef0();
   input += synapse0x3607f30();
   input += synapse0x3607f70();
   input += synapse0x3607fb0();
   input += synapse0x3607ff0();
   input += synapse0x3608030();
   input += synapse0x3608070();
   input += synapse0x3607b00();
   input += synapse0x3607b40();
   input += synapse0x36081c0();
   input += synapse0x3608200();
   input += synapse0x3608240();
   input += synapse0x3608280();
   input += synapse0x36082c0();
   input += synapse0x3608300();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3607970() {
   double input = input0x3607970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3608340() {
   double input = -1.0644;
   input += synapse0x36084d0();
   input += synapse0x3611560();
   input += synapse0x36115a0();
   input += synapse0x36115e0();
   input += synapse0x3611620();
   input += synapse0x3611660();
   input += synapse0x36116a0();
   input += synapse0x36116e0();
   input += synapse0x3611720();
   input += synapse0x3611760();
   input += synapse0x36117a0();
   input += synapse0x36117e0();
   input += synapse0x3611820();
   input += synapse0x3611860();
   input += synapse0x36118a0();
   input += synapse0x36118e0();
   input += synapse0x36113b0();
   input += synapse0x36113f0();
   input += synapse0x3611a30();
   input += synapse0x3611a70();
   input += synapse0x3611ab0();
   input += synapse0x3611af0();
   input += synapse0x3611b30();
   input += synapse0x3611b70();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3608340() {
   double input = input0x3608340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3611bb0() {
   double input = 0.0343409;
   input += synapse0x3611ef0();
   input += synapse0x3611f30();
   input += synapse0x3611f70();
   input += synapse0x3611fb0();
   input += synapse0x3611ff0();
   input += synapse0x3612030();
   input += synapse0x3612070();
   input += synapse0x36120b0();
   input += synapse0x36120f0();
   input += synapse0x3612130();
   input += synapse0x3612170();
   input += synapse0x36121b0();
   input += synapse0x36121f0();
   input += synapse0x3612230();
   input += synapse0x3612270();
   input += synapse0x36122b0();
   input += synapse0x3611d40();
   input += synapse0x3611d80();
   input += synapse0x3612400();
   input += synapse0x3612440();
   input += synapse0x3612480();
   input += synapse0x36124c0();
   input += synapse0x3612500();
   input += synapse0x3612540();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3611bb0() {
   double input = input0x3611bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3612580() {
   double input = -2.70133;
   input += synapse0x36128c0();
   input += synapse0x3612900();
   input += synapse0x3612940();
   input += synapse0x3612980();
   input += synapse0x36129c0();
   input += synapse0x3612a00();
   input += synapse0x3612a40();
   input += synapse0x3612a80();
   input += synapse0x3612ac0();
   input += synapse0x3612b00();
   input += synapse0x3612b40();
   input += synapse0x3612b80();
   input += synapse0x3612bc0();
   input += synapse0x3612c00();
   input += synapse0x3612c40();
   input += synapse0x3612c80();
   input += synapse0x3612710();
   input += synapse0x3612750();
   input += synapse0x3612dd0();
   input += synapse0x3612e10();
   input += synapse0x3612e50();
   input += synapse0x3612e90();
   input += synapse0x3612ed0();
   input += synapse0x3612f10();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3612580() {
   double input = input0x3612580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3612f50() {
   double input = -0.334733;
   input += synapse0x3613290();
   input += synapse0x36132d0();
   input += synapse0x3613310();
   input += synapse0x3613350();
   input += synapse0x3613390();
   input += synapse0x36133d0();
   input += synapse0x3613410();
   input += synapse0x3613450();
   input += synapse0x3613490();
   input += synapse0x36134d0();
   input += synapse0x3613510();
   input += synapse0x3613550();
   input += synapse0x3613590();
   input += synapse0x36135d0();
   input += synapse0x3613610();
   input += synapse0x3613650();
   input += synapse0x36130e0();
   input += synapse0x3613120();
   input += synapse0x36137a0();
   input += synapse0x36137e0();
   input += synapse0x3613820();
   input += synapse0x3613860();
   input += synapse0x36138a0();
   input += synapse0x36138e0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3612f50() {
   double input = input0x3612f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3613920() {
   double input = -1.30695;
   input += synapse0x3613c60();
   input += synapse0x3613ca0();
   input += synapse0x3613ce0();
   input += synapse0x3613d20();
   input += synapse0x3613d60();
   input += synapse0x3613da0();
   input += synapse0x3613de0();
   input += synapse0x3613e20();
   input += synapse0x3613e60();
   input += synapse0x3613ea0();
   input += synapse0x3613ee0();
   input += synapse0x3613f20();
   input += synapse0x3613f60();
   input += synapse0x3613fa0();
   input += synapse0x3613fe0();
   input += synapse0x3614020();
   input += synapse0x3613ab0();
   input += synapse0x3613af0();
   input += synapse0x3614170();
   input += synapse0x36141b0();
   input += synapse0x36141f0();
   input += synapse0x3614230();
   input += synapse0x3614270();
   input += synapse0x36142b0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3613920() {
   double input = input0x3613920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x36142f0() {
   double input = 2.39832;
   input += synapse0x3614630();
   input += synapse0x3614670();
   input += synapse0x36146b0();
   input += synapse0x36146f0();
   input += synapse0x3614730();
   input += synapse0x3614770();
   input += synapse0x36147b0();
   input += synapse0x36147f0();
   input += synapse0x3614830();
   input += synapse0x3614870();
   input += synapse0x36148b0();
   input += synapse0x36148f0();
   input += synapse0x3614930();
   input += synapse0x3614970();
   input += synapse0x36149b0();
   input += synapse0x36149f0();
   input += synapse0x3614480();
   input += synapse0x36144c0();
   input += synapse0x3614b40();
   input += synapse0x3614b80();
   input += synapse0x3614bc0();
   input += synapse0x3614c00();
   input += synapse0x3614c40();
   input += synapse0x3614c80();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x36142f0() {
   double input = input0x36142f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3614cc0() {
   double input = -0.107155;
   input += synapse0x3615000();
   input += synapse0x3615040();
   input += synapse0x3615080();
   input += synapse0x36150c0();
   input += synapse0x3615100();
   input += synapse0x3615140();
   input += synapse0x3615180();
   input += synapse0x36151c0();
   input += synapse0x3615200();
   input += synapse0x3615240();
   input += synapse0x3615280();
   input += synapse0x36152c0();
   input += synapse0x3615300();
   input += synapse0x3615340();
   input += synapse0x3615380();
   input += synapse0x36153c0();
   input += synapse0x3614e50();
   input += synapse0x3614e90();
   input += synapse0x3615510();
   input += synapse0x3615550();
   input += synapse0x3615590();
   input += synapse0x36155d0();
   input += synapse0x3615610();
   input += synapse0x3615650();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3614cc0() {
   double input = input0x3614cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3615690() {
   double input = 0.141181;
   input += synapse0x36159d0();
   input += synapse0x3615a10();
   input += synapse0x3615a50();
   input += synapse0x3615a90();
   input += synapse0x3615ad0();
   input += synapse0x3615b10();
   input += synapse0x3615b50();
   input += synapse0x3615b90();
   input += synapse0x3615bd0();
   input += synapse0x3615c10();
   input += synapse0x3615c50();
   input += synapse0x3615c90();
   input += synapse0x3615cd0();
   input += synapse0x3615d10();
   input += synapse0x3615d50();
   input += synapse0x3615d90();
   input += synapse0x3615820();
   input += synapse0x3615860();
   input += synapse0x3615ee0();
   input += synapse0x3615f20();
   input += synapse0x3615f60();
   input += synapse0x3615fa0();
   input += synapse0x3615fe0();
   input += synapse0x3616020();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3615690() {
   double input = input0x3615690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3616060() {
   double input = 7.23539;
   input += synapse0x36163a0();
   input += synapse0x360a970();
   input += synapse0x360a9b0();
   input += synapse0x360a9f0();
   input += synapse0x360ac40();
   input += synapse0x360ac80();
   input += synapse0x360acc0();
   input += synapse0x360af10();
   input += synapse0x360af50();
   input += synapse0x360b1a0();
   input += synapse0x360b1e0();
   input += synapse0x360b220();
   input += synapse0x360b470();
   input += synapse0x360b4b0();
   input += synapse0x360b700();
   input += synapse0x360b740();
   input += synapse0x36161f0();
   input += synapse0x3616230();
   input += synapse0x360b890();
   input += synapse0x360bda0();
   input += synapse0x360bde0();
   input += synapse0x360be20();
   input += synapse0x360c070();
   input += synapse0x360c0b0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3616060() {
   double input = input0x3616060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360c0f0() {
   double input = -0.376153;
   input += synapse0x360b960();
   input += synapse0x360b9a0();
   input += synapse0x360b9e0();
   input += synapse0x360ba20();
   input += synapse0x360c3a0();
   input += synapse0x36186f0();
   input += synapse0x3618730();
   input += synapse0x3618770();
   input += synapse0x36187b0();
   input += synapse0x36187f0();
   input += synapse0x3618830();
   input += synapse0x3618870();
   input += synapse0x36188b0();
   input += synapse0x36188f0();
   input += synapse0x3618930();
   input += synapse0x3618970();
   input += synapse0x360c280();
   input += synapse0x360c2c0();
   input += synapse0x3618ac0();
   input += synapse0x3618b00();
   input += synapse0x3618b40();
   input += synapse0x3618b80();
   input += synapse0x3618bc0();
   input += synapse0x3618c00();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360c0f0() {
   double input = input0x360c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3618c40() {
   double input = 2.19701;
   input += synapse0x3618f80();
   input += synapse0x3618fc0();
   input += synapse0x3619000();
   input += synapse0x3619040();
   input += synapse0x3619080();
   input += synapse0x36190c0();
   input += synapse0x3619100();
   input += synapse0x3619140();
   input += synapse0x3619180();
   input += synapse0x36191c0();
   input += synapse0x3619200();
   input += synapse0x3619240();
   input += synapse0x3619280();
   input += synapse0x36192c0();
   input += synapse0x3619300();
   input += synapse0x3619340();
   input += synapse0x3618dd0();
   input += synapse0x3618e10();
   input += synapse0x3619490();
   input += synapse0x36194d0();
   input += synapse0x3619510();
   input += synapse0x3619550();
   input += synapse0x3619590();
   input += synapse0x36195d0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3618c40() {
   double input = input0x3618c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3619610() {
   double input = -0.496095;
   input += synapse0x3619950();
   input += synapse0x3619990();
   input += synapse0x36199d0();
   input += synapse0x3619a10();
   input += synapse0x3619a50();
   input += synapse0x3619a90();
   input += synapse0x3619ad0();
   input += synapse0x3619b10();
   input += synapse0x3619b50();
   input += synapse0x3619b90();
   input += synapse0x3619bd0();
   input += synapse0x3619c10();
   input += synapse0x3619c50();
   input += synapse0x3619c90();
   input += synapse0x3619cd0();
   input += synapse0x3619d10();
   input += synapse0x36197a0();
   input += synapse0x36197e0();
   input += synapse0x3619e60();
   input += synapse0x3619ea0();
   input += synapse0x3619ee0();
   input += synapse0x3619f20();
   input += synapse0x3619f60();
   input += synapse0x3619fa0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3619610() {
   double input = input0x3619610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3619fe0() {
   double input = -5.82046;
   input += synapse0x361a320();
   input += synapse0x361a360();
   input += synapse0x361a3a0();
   input += synapse0x361a3e0();
   input += synapse0x361a420();
   input += synapse0x361a460();
   input += synapse0x361a4a0();
   input += synapse0x361a4e0();
   input += synapse0x361a520();
   input += synapse0x361a560();
   input += synapse0x361a5a0();
   input += synapse0x361a5e0();
   input += synapse0x361a620();
   input += synapse0x361a660();
   input += synapse0x361a6a0();
   input += synapse0x361a6e0();
   input += synapse0x361a170();
   input += synapse0x361a1b0();
   input += synapse0x361a830();
   input += synapse0x361a870();
   input += synapse0x361a8b0();
   input += synapse0x361a8f0();
   input += synapse0x361a930();
   input += synapse0x361a970();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3619fe0() {
   double input = input0x3619fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361a9b0() {
   double input = -0.239797;
   input += synapse0x361acf0();
   input += synapse0x361ad30();
   input += synapse0x361ad70();
   input += synapse0x361adb0();
   input += synapse0x361adf0();
   input += synapse0x361ae30();
   input += synapse0x361ae70();
   input += synapse0x361aeb0();
   input += synapse0x361aef0();
   input += synapse0x361af30();
   input += synapse0x361af70();
   input += synapse0x361afb0();
   input += synapse0x361aff0();
   input += synapse0x361b030();
   input += synapse0x361b070();
   input += synapse0x361b0b0();
   input += synapse0x361ab40();
   input += synapse0x361ab80();
   input += synapse0x361b200();
   input += synapse0x361b240();
   input += synapse0x361b280();
   input += synapse0x361b2c0();
   input += synapse0x361b300();
   input += synapse0x361b340();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361a9b0() {
   double input = input0x361a9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361b380() {
   double input = -0.2599;
   input += synapse0x361b6c0();
   input += synapse0x361b700();
   input += synapse0x361b740();
   input += synapse0x361b780();
   input += synapse0x361b7c0();
   input += synapse0x361b800();
   input += synapse0x361b840();
   input += synapse0x361b880();
   input += synapse0x361b8c0();
   input += synapse0x361b900();
   input += synapse0x361b940();
   input += synapse0x361b980();
   input += synapse0x361b9c0();
   input += synapse0x361ba00();
   input += synapse0x361ba40();
   input += synapse0x361ba80();
   input += synapse0x361b510();
   input += synapse0x361b550();
   input += synapse0x361bbd0();
   input += synapse0x361bc10();
   input += synapse0x361bc50();
   input += synapse0x361bc90();
   input += synapse0x361bcd0();
   input += synapse0x361bd10();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361b380() {
   double input = input0x361b380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361bd50() {
   double input = -2.05804;
   input += synapse0x361c090();
   input += synapse0x361c0d0();
   input += synapse0x361c110();
   input += synapse0x361c150();
   input += synapse0x361c190();
   input += synapse0x361c1d0();
   input += synapse0x361c210();
   input += synapse0x361c250();
   input += synapse0x361c290();
   input += synapse0x361c2d0();
   input += synapse0x361c310();
   input += synapse0x361c350();
   input += synapse0x361c390();
   input += synapse0x361c3d0();
   input += synapse0x361c410();
   input += synapse0x361c450();
   input += synapse0x361bee0();
   input += synapse0x361bf20();
   input += synapse0x361c5a0();
   input += synapse0x361c5e0();
   input += synapse0x361c620();
   input += synapse0x361c660();
   input += synapse0x361c6a0();
   input += synapse0x361c6e0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361bd50() {
   double input = input0x361bd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361c720() {
   double input = -0.465817;
   input += synapse0x361ca60();
   input += synapse0x361caa0();
   input += synapse0x361cae0();
   input += synapse0x361cb20();
   input += synapse0x361cb60();
   input += synapse0x361cba0();
   input += synapse0x361cbe0();
   input += synapse0x361cc20();
   input += synapse0x361cc60();
   input += synapse0x361cca0();
   input += synapse0x361cce0();
   input += synapse0x361cd20();
   input += synapse0x361cd60();
   input += synapse0x361cda0();
   input += synapse0x361cde0();
   input += synapse0x361ce20();
   input += synapse0x361c8b0();
   input += synapse0x361c8f0();
   input += synapse0x361cf70();
   input += synapse0x361cfb0();
   input += synapse0x361cff0();
   input += synapse0x361d030();
   input += synapse0x361d070();
   input += synapse0x361d0b0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361c720() {
   double input = input0x361c720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361d0f0() {
   double input = 0.282263;
   input += synapse0x3605b60();
   input += synapse0x3605ba0();
   input += synapse0x3605be0();
   input += synapse0x3605c20();
   input += synapse0x3605c60();
   input += synapse0x3605ca0();
   input += synapse0x3605ce0();
   input += synapse0x3605d20();
   input += synapse0x361d840();
   input += synapse0x361d880();
   input += synapse0x361d8c0();
   input += synapse0x361d900();
   input += synapse0x361d940();
   input += synapse0x361d980();
   input += synapse0x361d9c0();
   input += synapse0x361da00();
   input += synapse0x361d280();
   input += synapse0x361d2c0();
   input += synapse0x361db50();
   input += synapse0x361db90();
   input += synapse0x361dbd0();
   input += synapse0x361dc10();
   input += synapse0x361dc50();
   input += synapse0x361dc90();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361d0f0() {
   double input = input0x361d0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361dcd0() {
   double input = 0.391051;
   input += synapse0x361e010();
   input += synapse0x361e050();
   input += synapse0x361e090();
   input += synapse0x361e0d0();
   input += synapse0x361e110();
   input += synapse0x361e150();
   input += synapse0x361e190();
   input += synapse0x361e1d0();
   input += synapse0x361e210();
   input += synapse0x361e250();
   input += synapse0x361e290();
   input += synapse0x361e2d0();
   input += synapse0x361e310();
   input += synapse0x361e350();
   input += synapse0x361e390();
   input += synapse0x361e3d0();
   input += synapse0x361de60();
   input += synapse0x361dea0();
   input += synapse0x361e520();
   input += synapse0x361e560();
   input += synapse0x361e5a0();
   input += synapse0x361e5e0();
   input += synapse0x361e620();
   input += synapse0x361e660();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361dcd0() {
   double input = input0x361dcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x361e6a0() {
   double input = -2.99437;
   input += synapse0x361e9e0();
   input += synapse0x361ea20();
   input += synapse0x361ea60();
   input += synapse0x361eaa0();
   input += synapse0x361eae0();
   input += synapse0x361eb20();
   input += synapse0x361eb60();
   input += synapse0x361eba0();
   input += synapse0x361ebe0();
   input += synapse0x361ec20();
   input += synapse0x361ec60();
   input += synapse0x361eca0();
   input += synapse0x361ece0();
   input += synapse0x361ed20();
   input += synapse0x361ed60();
   input += synapse0x361eda0();
   input += synapse0x361e830();
   input += synapse0x361e870();
   input += synapse0x360f3a0();
   input += synapse0x360f3e0();
   input += synapse0x360f420();
   input += synapse0x360f460();
   input += synapse0x360f4a0();
   input += synapse0x360f4e0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x361e6a0() {
   double input = input0x361e6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360f520() {
   double input = -5.38617;
   input += synapse0x360f860();
   input += synapse0x360f8a0();
   input += synapse0x360f8e0();
   input += synapse0x360f920();
   input += synapse0x360f960();
   input += synapse0x360f9a0();
   input += synapse0x360f9e0();
   input += synapse0x360fa20();
   input += synapse0x360fa60();
   input += synapse0x360faa0();
   input += synapse0x360fae0();
   input += synapse0x360fb20();
   input += synapse0x360fb60();
   input += synapse0x360fba0();
   input += synapse0x360fbe0();
   input += synapse0x360fc20();
   input += synapse0x360f6b0();
   input += synapse0x360f6f0();
   input += synapse0x360fd70();
   input += synapse0x360fdb0();
   input += synapse0x360fdf0();
   input += synapse0x360fe30();
   input += synapse0x360fe70();
   input += synapse0x360feb0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360f520() {
   double input = input0x360f520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x360fef0() {
   double input = -0.440737;
   input += synapse0x3610230();
   input += synapse0x3610270();
   input += synapse0x36102b0();
   input += synapse0x36102f0();
   input += synapse0x3610330();
   input += synapse0x3610370();
   input += synapse0x36103b0();
   input += synapse0x36103f0();
   input += synapse0x3610430();
   input += synapse0x3610470();
   input += synapse0x36104b0();
   input += synapse0x36104f0();
   input += synapse0x3610530();
   input += synapse0x3610570();
   input += synapse0x36105b0();
   input += synapse0x36105f0();
   input += synapse0x3610080();
   input += synapse0x36100c0();
   input += synapse0x3610740();
   input += synapse0x3610780();
   input += synapse0x36107c0();
   input += synapse0x3610800();
   input += synapse0x3610840();
   input += synapse0x3610880();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x360fef0() {
   double input = input0x360fef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x36108c0() {
   double input = -1.08844;
   input += synapse0x3610c00();
   input += synapse0x3610c40();
   input += synapse0x3610c80();
   input += synapse0x3610cc0();
   input += synapse0x3610d00();
   input += synapse0x3610d40();
   input += synapse0x3610d80();
   input += synapse0x3610dc0();
   input += synapse0x3610e00();
   input += synapse0x3610e40();
   input += synapse0x3610e80();
   input += synapse0x3610ec0();
   input += synapse0x3610f00();
   input += synapse0x3610f40();
   input += synapse0x3610f80();
   input += synapse0x3610fc0();
   input += synapse0x3610a50();
   input += synapse0x3610a90();
   input += synapse0x3611110();
   input += synapse0x3611150();
   input += synapse0x3611190();
   input += synapse0x36111d0();
   input += synapse0x3611210();
   input += synapse0x3611250();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x36108c0() {
   double input = input0x36108c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3622f00() {
   double input = -0.848321;
   input += synapse0x3623120();
   input += synapse0x3623160();
   input += synapse0x36231a0();
   input += synapse0x36231e0();
   input += synapse0x3623220();
   input += synapse0x3623260();
   input += synapse0x36232a0();
   input += synapse0x36232e0();
   input += synapse0x3623320();
   input += synapse0x3623360();
   input += synapse0x36233a0();
   input += synapse0x36233e0();
   input += synapse0x3623420();
   input += synapse0x3623460();
   input += synapse0x36234a0();
   input += synapse0x36234e0();
   input += synapse0x3611290();
   input += synapse0x36112d0();
   input += synapse0x3623630();
   input += synapse0x3623670();
   input += synapse0x36236b0();
   input += synapse0x36236f0();
   input += synapse0x3623730();
   input += synapse0x3623770();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3622f00() {
   double input = input0x3622f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x36237b0() {
   double input = 0.276065;
   input += synapse0x3623af0();
   input += synapse0x3623b30();
   input += synapse0x3623b70();
   input += synapse0x3623bb0();
   input += synapse0x3623bf0();
   input += synapse0x3623c30();
   input += synapse0x3623c70();
   input += synapse0x3623cb0();
   input += synapse0x3623cf0();
   input += synapse0x3623d30();
   input += synapse0x3623d70();
   input += synapse0x3623db0();
   input += synapse0x3623df0();
   input += synapse0x3623e30();
   input += synapse0x3623e70();
   input += synapse0x3623eb0();
   input += synapse0x3623940();
   input += synapse0x3623980();
   input += synapse0x3624000();
   input += synapse0x3624040();
   input += synapse0x3624080();
   input += synapse0x36240c0();
   input += synapse0x3624100();
   input += synapse0x3624140();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x36237b0() {
   double input = input0x36237b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3624180() {
   double input = -0.166294;
   input += synapse0x36244c0();
   input += synapse0x3624500();
   input += synapse0x3624540();
   input += synapse0x3624580();
   input += synapse0x36245c0();
   input += synapse0x3624600();
   input += synapse0x3624640();
   input += synapse0x3624680();
   input += synapse0x36246c0();
   input += synapse0x3624700();
   input += synapse0x3624740();
   input += synapse0x3624780();
   input += synapse0x36247c0();
   input += synapse0x3624800();
   input += synapse0x3624840();
   input += synapse0x3624880();
   input += synapse0x3624310();
   input += synapse0x3624350();
   input += synapse0x36249d0();
   input += synapse0x3624a10();
   input += synapse0x3624a50();
   input += synapse0x3624a90();
   input += synapse0x3624ad0();
   input += synapse0x3624b10();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3624180() {
   double input = input0x3624180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x3624b50() {
   double input = -0.646916;
   input += synapse0x3624e90();
   input += synapse0x3624ed0();
   input += synapse0x3624f10();
   input += synapse0x3624f50();
   input += synapse0x3624f90();
   input += synapse0x3624fd0();
   input += synapse0x3625010();
   input += synapse0x3625050();
   input += synapse0x3625090();
   input += synapse0x36250d0();
   input += synapse0x3625110();
   input += synapse0x3625150();
   input += synapse0x3625190();
   input += synapse0x36251d0();
   input += synapse0x3625210();
   input += synapse0x3625250();
   input += synapse0x3624ce0();
   input += synapse0x3624d20();
   input += synapse0x36253a0();
   input += synapse0x36253e0();
   input += synapse0x3625420();
   input += synapse0x3625460();
   input += synapse0x36254a0();
   input += synapse0x36254e0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x3624b50() {
   double input = input0x3624b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x362bd50() {
   double input = -0.729371;
   input += synapse0x3600930();
   input += synapse0x3600970();
   input += synapse0x3601e90();
   input += synapse0x3601ed0();
   input += synapse0x3603960();
   input += synapse0x36039a0();
   input += synapse0x3604730();
   input += synapse0x3604770();
   input += synapse0x3605100();
   input += synapse0x3605140();
   input += synapse0x3605ad0();
   input += synapse0x3605b10();
   input += synapse0x36065b0();
   input += synapse0x36065f0();
   input += synapse0x3606f80();
   input += synapse0x3606fc0();
   input += synapse0x3604060();
   input += synapse0x36040a0();
   input += synapse0x3608b30();
   input += synapse0x3608b70();
   input += synapse0x3609500();
   input += synapse0x3609540();
   input += synapse0x3609ed0();
   input += synapse0x3609f10();
   input += synapse0x360a8a0();
   input += synapse0x360a8e0();
   input += synapse0x35fd930();
   input += synapse0x35fd970();
   input += synapse0x360c990();
   input += synapse0x360c9d0();
   input += synapse0x360d360();
   input += synapse0x360d3a0();
   input += synapse0x360dd30();
   input += synapse0x360dd70();
   input += synapse0x360e700();
   input += synapse0x360e740();
   input += synapse0x360f0d0();
   input += synapse0x360f110();
   input += synapse0x3607c20();
   input += synapse0x3607c60();
   input += synapse0x36114d0();
   input += synapse0x3611510();
   input += synapse0x3611e60();
   input += synapse0x3611ea0();
   input += synapse0x3612830();
   input += synapse0x3612870();
   input += synapse0x3613200();
   input += synapse0x3613240();
   input += synapse0x3613bd0();
   input += synapse0x3613c10();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x362bd50() {
   double input = input0x362bd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x362c0f0() {
   double input = -0.57964;
   input += synapse0x3616310();
   input += synapse0x3616350();
   input += synapse0x360b8d0();
   input += synapse0x360b910();
   input += synapse0x3618ef0();
   input += synapse0x3618f30();
   input += synapse0x36198c0();
   input += synapse0x3619900();
   input += synapse0x361a290();
   input += synapse0x361a2d0();
   input += synapse0x361ac60();
   input += synapse0x361aca0();
   input += synapse0x361b630();
   input += synapse0x361b670();
   input += synapse0x361c000();
   input += synapse0x361c040();
   input += synapse0x361c9d0();
   input += synapse0x361ca10();
   input += synapse0x361d3a0();
   input += synapse0x361d3e0();
   input += synapse0x361df80();
   input += synapse0x361dfc0();
   input += synapse0x361e950();
   input += synapse0x361e990();
   input += synapse0x360f7d0();
   input += synapse0x360f810();
   input += synapse0x36101a0();
   input += synapse0x36101e0();
   input += synapse0x3610b70();
   input += synapse0x3610bb0();
   input += synapse0x3623090();
   input += synapse0x36230d0();
   input += synapse0x3623a60();
   input += synapse0x3623aa0();
   input += synapse0x3624430();
   input += synapse0x3624470();
   input += synapse0x3624e00();
   input += synapse0x3624e40();
   input += synapse0x35ffd90();
   input += synapse0x35ffdd0();
   input += synapse0x36145a0();
   input += synapse0x36145e0();
   input += synapse0x3625520();
   input += synapse0x3625560();
   input += synapse0x36255a0();
   input += synapse0x36255e0();
   input += synapse0x362c490();
   input += synapse0x362c4d0();
   input += synapse0x362c510();
   input += synapse0x362c550();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x362c0f0() {
   double input = input0x362c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x362c590() {
   double input = -2.49848;
   input += synapse0x362c8d0();
   input += synapse0x362c910();
   input += synapse0x362c950();
   input += synapse0x362c990();
   input += synapse0x362c9d0();
   input += synapse0x362ca10();
   input += synapse0x362ca50();
   input += synapse0x362ca90();
   input += synapse0x362cad0();
   input += synapse0x362cb10();
   input += synapse0x362cb50();
   input += synapse0x362cb90();
   input += synapse0x362cbd0();
   input += synapse0x362cc10();
   input += synapse0x362cc50();
   input += synapse0x362cc90();
   input += synapse0x362c720();
   input += synapse0x362c760();
   input += synapse0x362cde0();
   input += synapse0x362ce20();
   input += synapse0x362ce60();
   input += synapse0x362cea0();
   input += synapse0x362cee0();
   input += synapse0x362cf20();
   input += synapse0x362cf60();
   input += synapse0x362cfa0();
   input += synapse0x362cfe0();
   input += synapse0x362d020();
   input += synapse0x362d060();
   input += synapse0x362d0a0();
   input += synapse0x362d0e0();
   input += synapse0x362d120();
   input += synapse0x362ccd0();
   input += synapse0x362cd10();
   input += synapse0x362cd50();
   input += synapse0x362cd90();
   input += synapse0x362d370();
   input += synapse0x362d3b0();
   input += synapse0x362d3f0();
   input += synapse0x362d430();
   input += synapse0x362d470();
   input += synapse0x362d4b0();
   input += synapse0x362d4f0();
   input += synapse0x362d530();
   input += synapse0x362d570();
   input += synapse0x362d5b0();
   input += synapse0x362d5f0();
   input += synapse0x362d630();
   input += synapse0x362d670();
   input += synapse0x362d6b0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x362c590() {
   double input = input0x362c590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x362d6f0() {
   double input = -0.599599;
   input += synapse0x362da30();
   input += synapse0x362da70();
   input += synapse0x362dab0();
   input += synapse0x362daf0();
   input += synapse0x362db30();
   input += synapse0x362db70();
   input += synapse0x362dbb0();
   input += synapse0x362dbf0();
   input += synapse0x362dc30();
   input += synapse0x362dc70();
   input += synapse0x362dcb0();
   input += synapse0x362dcf0();
   input += synapse0x362dd30();
   input += synapse0x362dd70();
   input += synapse0x362ddb0();
   input += synapse0x362ddf0();
   input += synapse0x362d880();
   input += synapse0x362d8c0();
   input += synapse0x362df40();
   input += synapse0x362df80();
   input += synapse0x362dfc0();
   input += synapse0x362e000();
   input += synapse0x362e040();
   input += synapse0x362e080();
   input += synapse0x362e0c0();
   input += synapse0x362e100();
   input += synapse0x362e140();
   input += synapse0x362e180();
   input += synapse0x362e1c0();
   input += synapse0x362e200();
   input += synapse0x362e240();
   input += synapse0x362e280();
   input += synapse0x362de30();
   input += synapse0x362de70();
   input += synapse0x362deb0();
   input += synapse0x362def0();
   input += synapse0x362e4d0();
   input += synapse0x362e510();
   input += synapse0x362e550();
   input += synapse0x362e590();
   input += synapse0x362e5d0();
   input += synapse0x362e610();
   input += synapse0x362e650();
   input += synapse0x362e690();
   input += synapse0x362e6d0();
   input += synapse0x362e710();
   input += synapse0x362e750();
   input += synapse0x362e790();
   input += synapse0x362e7d0();
   input += synapse0x362e810();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x362d6f0() {
   double input = input0x362d6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x362e850() {
   double input = -5.26976;
   input += synapse0x362eb90();
   input += synapse0x362ebd0();
   input += synapse0x362ec10();
   input += synapse0x362ec50();
   input += synapse0x362ec90();
   input += synapse0x362ecd0();
   input += synapse0x362ed10();
   input += synapse0x362ed50();
   input += synapse0x362ed90();
   input += synapse0x362edd0();
   input += synapse0x362ee10();
   input += synapse0x362ee50();
   input += synapse0x362ee90();
   input += synapse0x362eed0();
   input += synapse0x362ef10();
   input += synapse0x362ef50();
   input += synapse0x362e9e0();
   input += synapse0x362ea20();
   input += synapse0x362f0a0();
   input += synapse0x362f0e0();
   input += synapse0x362f120();
   input += synapse0x362f160();
   input += synapse0x362f1a0();
   input += synapse0x362f1e0();
   input += synapse0x362f220();
   input += synapse0x362f260();
   input += synapse0x362f2a0();
   input += synapse0x362f2e0();
   input += synapse0x362f320();
   input += synapse0x362f360();
   input += synapse0x362f3a0();
   input += synapse0x362f3e0();
   input += synapse0x362ef90();
   input += synapse0x362efd0();
   input += synapse0x362f010();
   input += synapse0x362f050();
   input += synapse0x362f630();
   input += synapse0x362f670();
   input += synapse0x362f6b0();
   input += synapse0x362f6f0();
   input += synapse0x362f730();
   input += synapse0x362f770();
   input += synapse0x362f7b0();
   input += synapse0x362f7f0();
   input += synapse0x362f830();
   input += synapse0x362f870();
   input += synapse0x362f8b0();
   input += synapse0x362f8f0();
   input += synapse0x362f930();
   input += synapse0x362f970();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x362e850() {
   double input = input0x362e850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uR::input0x362f9b0() {
   double input = 3.141;
   input += synapse0x362fbd0();
   input += synapse0x362fc10();
   input += synapse0x362fc50();
   input += synapse0x362fc90();
   input += synapse0x362fcd0();
   return input;
}

double NNfunction_ns_chi02_uR::neuron0x362f9b0() {
   double input = input0x362f9b0();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_uR::synapse0x35ffe20() {
   return (neuron0x35faa20()*-0.213059);
}

double NNfunction_ns_chi02_uR::synapse0x35ffe60() {
   return (neuron0x35facd0()*2.93935);
}

double NNfunction_ns_chi02_uR::synapse0x35ffea0() {
   return (neuron0x35fb010()*-3.26664);
}

double NNfunction_ns_chi02_uR::synapse0x35ffee0() {
   return (neuron0x35fb350()*-0.0294374);
}

double NNfunction_ns_chi02_uR::synapse0x35fff20() {
   return (neuron0x35fb690()*-0.010762);
}

double NNfunction_ns_chi02_uR::synapse0x35fff60() {
   return (neuron0x35fb9d0()*-0.00104483);
}

double NNfunction_ns_chi02_uR::synapse0x35fffa0() {
   return (neuron0x35fbd10()*0.00822574);
}

double NNfunction_ns_chi02_uR::synapse0x35fffe0() {
   return (neuron0x35fc050()*-0.0104892);
}

double NNfunction_ns_chi02_uR::synapse0x3600020() {
   return (neuron0x35fc390()*-0.018418);
}

double NNfunction_ns_chi02_uR::synapse0x3600060() {
   return (neuron0x35fc6d0()*-0.143829);
}

double NNfunction_ns_chi02_uR::synapse0x36000a0() {
   return (neuron0x35fca10()*-0.00108137);
}

double NNfunction_ns_chi02_uR::synapse0x36000e0() {
   return (neuron0x35fcd50()*0.0802473);
}

double NNfunction_ns_chi02_uR::synapse0x3600120() {
   return (neuron0x35fd090()*-0.0571654);
}

double NNfunction_ns_chi02_uR::synapse0x3600160() {
   return (neuron0x35fd3d0()*0.0296684);
}

double NNfunction_ns_chi02_uR::synapse0x36001a0() {
   return (neuron0x35fd710()*-0.174819);
}

double NNfunction_ns_chi02_uR::synapse0x36001e0() {
   return (neuron0x35fda50()*-0.0335783);
}

double NNfunction_ns_chi02_uR::synapse0x35ffc70() {
   return (neuron0x35fdd90()*0.124113);
}

double NNfunction_ns_chi02_uR::synapse0x35ffcb0() {
   return (neuron0x35fe2f0()*-0.0419925);
}

double NNfunction_ns_chi02_uR::synapse0x33b6b80() {
   return (neuron0x35fe630()*-0.00949964);
}

double NNfunction_ns_chi02_uR::synapse0x33b6bc0() {
   return (neuron0x35fe970()*0.0275516);
}

double NNfunction_ns_chi02_uR::synapse0x3600220() {
   return (neuron0x35fecb0()*-0.0487669);
}

double NNfunction_ns_chi02_uR::synapse0x3600260() {
   return (neuron0x35feff0()*-0.0425802);
}

double NNfunction_ns_chi02_uR::synapse0x36002a0() {
   return (neuron0x35ff330()*-0.0923384);
}

double NNfunction_ns_chi02_uR::synapse0x36002e0() {
   return (neuron0x35ff670()*2.14204);
}

double NNfunction_ns_chi02_uR::synapse0x3600660() {
   return (neuron0x35faa20()*1.31859);
}

double NNfunction_ns_chi02_uR::synapse0x36006a0() {
   return (neuron0x35facd0()*-0.432229);
}

double NNfunction_ns_chi02_uR::synapse0x36006e0() {
   return (neuron0x35fb010()*0.537851);
}

double NNfunction_ns_chi02_uR::synapse0x3600720() {
   return (neuron0x35fb350()*0.10732);
}

double NNfunction_ns_chi02_uR::synapse0x3600760() {
   return (neuron0x35fb690()*-0.176428);
}

double NNfunction_ns_chi02_uR::synapse0x36007a0() {
   return (neuron0x35fb9d0()*-0.425641);
}

double NNfunction_ns_chi02_uR::synapse0x36007e0() {
   return (neuron0x35fbd10()*-0.44889);
}

double NNfunction_ns_chi02_uR::synapse0x3600820() {
   return (neuron0x35fc050()*0.550335);
}

double NNfunction_ns_chi02_uR::synapse0x3600860() {
   return (neuron0x35fc390()*0.567269);
}

double NNfunction_ns_chi02_uR::synapse0x33b69d0() {
   return (neuron0x35fc6d0()*0.193986);
}

double NNfunction_ns_chi02_uR::synapse0x33b6a10() {
   return (neuron0x35fca10()*0.143358);
}

double NNfunction_ns_chi02_uR::synapse0x33b6a50() {
   return (neuron0x35fcd50()*0.00513966);
}

double NNfunction_ns_chi02_uR::synapse0x33b6a90() {
   return (neuron0x35fd090()*0.396041);
}

double NNfunction_ns_chi02_uR::synapse0x3600ab0() {
   return (neuron0x35fd3d0()*-0.71492);
}

double NNfunction_ns_chi02_uR::synapse0x3600af0() {
   return (neuron0x35fd710()*-0.257128);
}

double NNfunction_ns_chi02_uR::synapse0x3600b30() {
   return (neuron0x35fda50()*-0.662392);
}

double NNfunction_ns_chi02_uR::synapse0x36004b0() {
   return (neuron0x35fdd90()*1.93672);
}

double NNfunction_ns_chi02_uR::synapse0x36004f0() {
   return (neuron0x35fe2f0()*-3.45945);
}

double NNfunction_ns_chi02_uR::synapse0x3600c80() {
   return (neuron0x35fe630()*0.966276);
}

double NNfunction_ns_chi02_uR::synapse0x3600cc0() {
   return (neuron0x35fe970()*0.088702);
}

double NNfunction_ns_chi02_uR::synapse0x3600d00() {
   return (neuron0x35fecb0()*-0.0492306);
}

double NNfunction_ns_chi02_uR::synapse0x3600d40() {
   return (neuron0x35feff0()*-0.914945);
}

double NNfunction_ns_chi02_uR::synapse0x3600d80() {
   return (neuron0x35ff330()*0.464879);
}

double NNfunction_ns_chi02_uR::synapse0x3600dc0() {
   return (neuron0x35ff670()*1.05705);
}

double NNfunction_ns_chi02_uR::synapse0x3601140() {
   return (neuron0x35faa20()*0.0483946);
}

double NNfunction_ns_chi02_uR::synapse0x3601180() {
   return (neuron0x35facd0()*0.000580433);
}

double NNfunction_ns_chi02_uR::synapse0x36011c0() {
   return (neuron0x35fb010()*-0.570856);
}

double NNfunction_ns_chi02_uR::synapse0x3601200() {
   return (neuron0x35fb350()*0.0448606);
}

double NNfunction_ns_chi02_uR::synapse0x3601240() {
   return (neuron0x35fb690()*-0.0145948);
}

double NNfunction_ns_chi02_uR::synapse0x3601280() {
   return (neuron0x35fb9d0()*0.00607398);
}

double NNfunction_ns_chi02_uR::synapse0x36012c0() {
   return (neuron0x35fbd10()*-0.0119358);
}

double NNfunction_ns_chi02_uR::synapse0x3601300() {
   return (neuron0x35fc050()*0.0165249);
}

double NNfunction_ns_chi02_uR::synapse0x3601340() {
   return (neuron0x35fc390()*-0.00251189);
}

double NNfunction_ns_chi02_uR::synapse0x3601380() {
   return (neuron0x35fc6d0()*0.0345042);
}

double NNfunction_ns_chi02_uR::synapse0x36013c0() {
   return (neuron0x35fca10()*0.00172499);
}

double NNfunction_ns_chi02_uR::synapse0x3601400() {
   return (neuron0x35fcd50()*-0.0130514);
}

double NNfunction_ns_chi02_uR::synapse0x3601440() {
   return (neuron0x35fd090()*-0.0328861);
}

double NNfunction_ns_chi02_uR::synapse0x3601480() {
   return (neuron0x35fd3d0()*-0.00889708);
}

double NNfunction_ns_chi02_uR::synapse0x36014c0() {
   return (neuron0x35fd710()*0.0872299);
}

double NNfunction_ns_chi02_uR::synapse0x3601500() {
   return (neuron0x35fda50()*-0.0301126);
}

double NNfunction_ns_chi02_uR::synapse0x3600f90() {
   return (neuron0x35fdd90()*-0.00305312);
}

double NNfunction_ns_chi02_uR::synapse0x3600fd0() {
   return (neuron0x35fe2f0()*0.0105944);
}

double NNfunction_ns_chi02_uR::synapse0x33c4ac0() {
   return (neuron0x35fe630()*0.0223898);
}

double NNfunction_ns_chi02_uR::synapse0x33c4b00() {
   return (neuron0x35fe970()*0.00720933);
}

double NNfunction_ns_chi02_uR::synapse0x3603430() {
   return (neuron0x35fecb0()*-0.03082);
}

double NNfunction_ns_chi02_uR::synapse0x3603470() {
   return (neuron0x35feff0()*0.0302097);
}

double NNfunction_ns_chi02_uR::synapse0x35fa760() {
   return (neuron0x35ff330()*0.0149201);
}

double NNfunction_ns_chi02_uR::synapse0x35fa7a0() {
   return (neuron0x35ff670()*-3.90549);
}

double NNfunction_ns_chi02_uR::synapse0x33c53b0() {
   return (neuron0x35faa20()*-0.0385928);
}

double NNfunction_ns_chi02_uR::synapse0x36009c0() {
   return (neuron0x35facd0()*-10.7261);
}

double NNfunction_ns_chi02_uR::synapse0x3600a00() {
   return (neuron0x35fb010()*-2.07959);
}

double NNfunction_ns_chi02_uR::synapse0x3600a40() {
   return (neuron0x35fb350()*-0.0481998);
}

double NNfunction_ns_chi02_uR::synapse0x3601650() {
   return (neuron0x35fb690()*-0.0116117);
}

double NNfunction_ns_chi02_uR::synapse0x3601690() {
   return (neuron0x35fb9d0()*-0.0145365);
}

double NNfunction_ns_chi02_uR::synapse0x36016d0() {
   return (neuron0x35fbd10()*-0.023875);
}

double NNfunction_ns_chi02_uR::synapse0x3601710() {
   return (neuron0x35fc050()*-0.0261066);
}

double NNfunction_ns_chi02_uR::synapse0x3601750() {
   return (neuron0x35fc390()*-0.0620124);
}

double NNfunction_ns_chi02_uR::synapse0x3601790() {
   return (neuron0x35fc6d0()*-0.0167863);
}

double NNfunction_ns_chi02_uR::synapse0x36017d0() {
   return (neuron0x35fca10()*-0.00895552);
}

double NNfunction_ns_chi02_uR::synapse0x3601810() {
   return (neuron0x35fcd50()*0.0275959);
}

double NNfunction_ns_chi02_uR::synapse0x3601850() {
   return (neuron0x35fd090()*-0.0399499);
}

double NNfunction_ns_chi02_uR::synapse0x3601890() {
   return (neuron0x35fd3d0()*0.0239722);
}

double NNfunction_ns_chi02_uR::synapse0x36018d0() {
   return (neuron0x35fd710()*0.18037);
}

double NNfunction_ns_chi02_uR::synapse0x3601910() {
   return (neuron0x35fda50()*-0.00798448);
}

double NNfunction_ns_chi02_uR::synapse0x35fa7e0() {
   return (neuron0x35fdd90()*0.0174582);
}

double NNfunction_ns_chi02_uR::synapse0x35fa820() {
   return (neuron0x35fe2f0()*0.0137296);
}

double NNfunction_ns_chi02_uR::synapse0x3601a60() {
   return (neuron0x35fe630()*0.0289782);
}

double NNfunction_ns_chi02_uR::synapse0x3601aa0() {
   return (neuron0x35fe970()*0.0321037);
}

double NNfunction_ns_chi02_uR::synapse0x3601ae0() {
   return (neuron0x35fecb0()*-0.0375961);
}

double NNfunction_ns_chi02_uR::synapse0x3601b20() {
   return (neuron0x35feff0()*-0.01768);
}

double NNfunction_ns_chi02_uR::synapse0x3601b60() {
   return (neuron0x35ff330()*-0.0165668);
}

double NNfunction_ns_chi02_uR::synapse0x3601ba0() {
   return (neuron0x35ff670()*-9.52289);
}

double NNfunction_ns_chi02_uR::synapse0x3601f20() {
   return (neuron0x35faa20()*-0.557255);
}

double NNfunction_ns_chi02_uR::synapse0x3601f60() {
   return (neuron0x35facd0()*-1.50576);
}

double NNfunction_ns_chi02_uR::synapse0x3601fa0() {
   return (neuron0x35fb010()*-0.544183);
}

double NNfunction_ns_chi02_uR::synapse0x3601fe0() {
   return (neuron0x35fb350()*-0.708951);
}

double NNfunction_ns_chi02_uR::synapse0x3602020() {
   return (neuron0x35fb690()*0.222012);
}

double NNfunction_ns_chi02_uR::synapse0x3602060() {
   return (neuron0x35fb9d0()*0.878061);
}

double NNfunction_ns_chi02_uR::synapse0x36020a0() {
   return (neuron0x35fbd10()*-1.03831);
}

double NNfunction_ns_chi02_uR::synapse0x36020e0() {
   return (neuron0x35fc050()*0.0337562);
}

double NNfunction_ns_chi02_uR::synapse0x3602120() {
   return (neuron0x35fc390()*0.602589);
}

double NNfunction_ns_chi02_uR::synapse0x3602160() {
   return (neuron0x35fc6d0()*-0.430547);
}

double NNfunction_ns_chi02_uR::synapse0x36021a0() {
   return (neuron0x35fca10()*-1.1533);
}

double NNfunction_ns_chi02_uR::synapse0x36021e0() {
   return (neuron0x35fcd50()*-0.864038);
}

double NNfunction_ns_chi02_uR::synapse0x3602220() {
   return (neuron0x35fd090()*-0.181949);
}

double NNfunction_ns_chi02_uR::synapse0x3602260() {
   return (neuron0x35fd3d0()*-0.0137555);
}

double NNfunction_ns_chi02_uR::synapse0x36022a0() {
   return (neuron0x35fd710()*-0.284418);
}

double NNfunction_ns_chi02_uR::synapse0x36022e0() {
   return (neuron0x35fda50()*0.181199);
}

double NNfunction_ns_chi02_uR::synapse0x3602430() {
   return (neuron0x35fdd90()*-0.368283);
}

double NNfunction_ns_chi02_uR::synapse0x3601d70() {
   return (neuron0x35fe2f0()*0.820454);
}

double NNfunction_ns_chi02_uR::synapse0x3601db0() {
   return (neuron0x35fe630()*-1.66176);
}

double NNfunction_ns_chi02_uR::synapse0x3603570() {
   return (neuron0x35fe970()*-0.667571);
}

double NNfunction_ns_chi02_uR::synapse0x36035b0() {
   return (neuron0x35fecb0()*2.7126);
}

double NNfunction_ns_chi02_uR::synapse0x36035f0() {
   return (neuron0x35feff0()*1.18249);
}

double NNfunction_ns_chi02_uR::synapse0x3603630() {
   return (neuron0x35ff330()*1.56711);
}

double NNfunction_ns_chi02_uR::synapse0x3603670() {
   return (neuron0x35ff670()*-0.611172);
}

double NNfunction_ns_chi02_uR::synapse0x36039f0() {
   return (neuron0x35faa20()*-0.0492316);
}

double NNfunction_ns_chi02_uR::synapse0x3603a30() {
   return (neuron0x35facd0()*0.189869);
}

double NNfunction_ns_chi02_uR::synapse0x3603a70() {
   return (neuron0x35fb010()*1.14724);
}

double NNfunction_ns_chi02_uR::synapse0x3603ab0() {
   return (neuron0x35fb350()*0.0482312);
}

double NNfunction_ns_chi02_uR::synapse0x3603af0() {
   return (neuron0x35fb690()*0.0253302);
}

double NNfunction_ns_chi02_uR::synapse0x3603b30() {
   return (neuron0x35fb9d0()*0.0305633);
}

double NNfunction_ns_chi02_uR::synapse0x3603b70() {
   return (neuron0x35fbd10()*0.0109388);
}

double NNfunction_ns_chi02_uR::synapse0x3603bb0() {
   return (neuron0x35fc050()*-0.0066491);
}

double NNfunction_ns_chi02_uR::synapse0x3603bf0() {
   return (neuron0x35fc390()*0.0288032);
}

double NNfunction_ns_chi02_uR::synapse0x33c4e10() {
   return (neuron0x35fc6d0()*0.0423452);
}

double NNfunction_ns_chi02_uR::synapse0x33c4e50() {
   return (neuron0x35fca10()*0.00195722);
}

double NNfunction_ns_chi02_uR::synapse0x33c4e90() {
   return (neuron0x35fcd50()*-0.0360106);
}

double NNfunction_ns_chi02_uR::synapse0x33c4ed0() {
   return (neuron0x35fd090()*-0.013871);
}

double NNfunction_ns_chi02_uR::synapse0x33c4f10() {
   return (neuron0x35fd3d0()*-0.0360379);
}

double NNfunction_ns_chi02_uR::synapse0x33c4f50() {
   return (neuron0x35fd710()*0.0761995);
}

double NNfunction_ns_chi02_uR::synapse0x33c4f90() {
   return (neuron0x35fda50()*0.022274);
}

double NNfunction_ns_chi02_uR::synapse0x3603840() {
   return (neuron0x35fdd90()*0.0216327);
}

double NNfunction_ns_chi02_uR::synapse0x3603880() {
   return (neuron0x35fe2f0()*-0.00414473);
}

double NNfunction_ns_chi02_uR::synapse0x33c50e0() {
   return (neuron0x35fe630()*-0.0268121);
}

double NNfunction_ns_chi02_uR::synapse0x33c5120() {
   return (neuron0x35fe970()*-0.0437586);
}

double NNfunction_ns_chi02_uR::synapse0x33c5160() {
   return (neuron0x35fecb0()*-0.0115903);
}

double NNfunction_ns_chi02_uR::synapse0x33c51a0() {
   return (neuron0x35feff0()*0.00282556);
}

double NNfunction_ns_chi02_uR::synapse0x33c51e0() {
   return (neuron0x35ff330()*0.00171661);
}

double NNfunction_ns_chi02_uR::synapse0x3604440() {
   return (neuron0x35ff670()*3.74293);
}

double NNfunction_ns_chi02_uR::synapse0x36047c0() {
   return (neuron0x35faa20()*-0.00781722);
}

double NNfunction_ns_chi02_uR::synapse0x3604800() {
   return (neuron0x35facd0()*0.00105094);
}

double NNfunction_ns_chi02_uR::synapse0x3604840() {
   return (neuron0x35fb010()*-0.319264);
}

double NNfunction_ns_chi02_uR::synapse0x3604880() {
   return (neuron0x35fb350()*0.0490331);
}

double NNfunction_ns_chi02_uR::synapse0x36048c0() {
   return (neuron0x35fb690()*0.00167873);
}

double NNfunction_ns_chi02_uR::synapse0x3604900() {
   return (neuron0x35fb9d0()*0.0155949);
}

double NNfunction_ns_chi02_uR::synapse0x3604940() {
   return (neuron0x35fbd10()*-0.00809335);
}

double NNfunction_ns_chi02_uR::synapse0x3604980() {
   return (neuron0x35fc050()*0.0127652);
}

double NNfunction_ns_chi02_uR::synapse0x36049c0() {
   return (neuron0x35fc390()*0.00426794);
}

double NNfunction_ns_chi02_uR::synapse0x3604a00() {
   return (neuron0x35fc6d0()*0.0114327);
}

double NNfunction_ns_chi02_uR::synapse0x3604a40() {
   return (neuron0x35fca10()*0.00189563);
}

double NNfunction_ns_chi02_uR::synapse0x3604a80() {
   return (neuron0x35fcd50()*-0.0056796);
}

double NNfunction_ns_chi02_uR::synapse0x3604ac0() {
   return (neuron0x35fd090()*-0.0112214);
}

double NNfunction_ns_chi02_uR::synapse0x3604b00() {
   return (neuron0x35fd3d0()*0.00555664);
}

double NNfunction_ns_chi02_uR::synapse0x3604b40() {
   return (neuron0x35fd710()*0.0961075);
}

double NNfunction_ns_chi02_uR::synapse0x3604b80() {
   return (neuron0x35fda50()*-0.0241156);
}

double NNfunction_ns_chi02_uR::synapse0x3604610() {
   return (neuron0x35fdd90()*0.028043);
}

double NNfunction_ns_chi02_uR::synapse0x3604650() {
   return (neuron0x35fe2f0()*0.00439287);
}

double NNfunction_ns_chi02_uR::synapse0x3604cd0() {
   return (neuron0x35fe630()*0.0213835);
}

double NNfunction_ns_chi02_uR::synapse0x3604d10() {
   return (neuron0x35fe970()*-0.00724593);
}

double NNfunction_ns_chi02_uR::synapse0x3604d50() {
   return (neuron0x35fecb0()*-0.0473943);
}

double NNfunction_ns_chi02_uR::synapse0x3604d90() {
   return (neuron0x35feff0()*0.014077);
}

double NNfunction_ns_chi02_uR::synapse0x3604dd0() {
   return (neuron0x35ff330()*0.0236666);
}

double NNfunction_ns_chi02_uR::synapse0x3604e10() {
   return (neuron0x35ff670()*3.43093);
}

double NNfunction_ns_chi02_uR::synapse0x3605190() {
   return (neuron0x35faa20()*0.746955);
}

double NNfunction_ns_chi02_uR::synapse0x36051d0() {
   return (neuron0x35facd0()*-0.579514);
}

double NNfunction_ns_chi02_uR::synapse0x3605210() {
   return (neuron0x35fb010()*-0.311358);
}

double NNfunction_ns_chi02_uR::synapse0x3605250() {
   return (neuron0x35fb350()*-0.421271);
}

double NNfunction_ns_chi02_uR::synapse0x3605290() {
   return (neuron0x35fb690()*0.306391);
}

double NNfunction_ns_chi02_uR::synapse0x36052d0() {
   return (neuron0x35fb9d0()*1.05846);
}

double NNfunction_ns_chi02_uR::synapse0x3605310() {
   return (neuron0x35fbd10()*0.26906);
}

double NNfunction_ns_chi02_uR::synapse0x3605350() {
   return (neuron0x35fc050()*0.61162);
}

double NNfunction_ns_chi02_uR::synapse0x3605390() {
   return (neuron0x35fc390()*-0.630322);
}

double NNfunction_ns_chi02_uR::synapse0x36053d0() {
   return (neuron0x35fc6d0()*0.928727);
}

double NNfunction_ns_chi02_uR::synapse0x3605410() {
   return (neuron0x35fca10()*0.792797);
}

double NNfunction_ns_chi02_uR::synapse0x3605450() {
   return (neuron0x35fcd50()*-0.125843);
}

double NNfunction_ns_chi02_uR::synapse0x3605490() {
   return (neuron0x35fd090()*0.402247);
}

double NNfunction_ns_chi02_uR::synapse0x36054d0() {
   return (neuron0x35fd3d0()*-0.538898);
}

double NNfunction_ns_chi02_uR::synapse0x3605510() {
   return (neuron0x35fd710()*-0.818025);
}

double NNfunction_ns_chi02_uR::synapse0x3605550() {
   return (neuron0x35fda50()*0.632862);
}

double NNfunction_ns_chi02_uR::synapse0x3604fe0() {
   return (neuron0x35fdd90()*0.297238);
}

double NNfunction_ns_chi02_uR::synapse0x3605020() {
   return (neuron0x35fe2f0()*-1.09304);
}

double NNfunction_ns_chi02_uR::synapse0x36056a0() {
   return (neuron0x35fe630()*-0.35612);
}

double NNfunction_ns_chi02_uR::synapse0x36056e0() {
   return (neuron0x35fe970()*-0.324391);
}

double NNfunction_ns_chi02_uR::synapse0x3605720() {
   return (neuron0x35fecb0()*-0.377069);
}

double NNfunction_ns_chi02_uR::synapse0x3605760() {
   return (neuron0x35feff0()*0.111351);
}

double NNfunction_ns_chi02_uR::synapse0x36057a0() {
   return (neuron0x35ff330()*0.320558);
}

double NNfunction_ns_chi02_uR::synapse0x36057e0() {
   return (neuron0x35ff670()*-1.29218);
}

double NNfunction_ns_chi02_uR::synapse0x35fe1e0() {
   return (neuron0x35faa20()*0.0920173);
}

double NNfunction_ns_chi02_uR::synapse0x35fe220() {
   return (neuron0x35facd0()*-13.8812);
}

double NNfunction_ns_chi02_uR::synapse0x35fe260() {
   return (neuron0x35fb010()*8.71759);
}

double NNfunction_ns_chi02_uR::synapse0x35fe2a0() {
   return (neuron0x35fb350()*-0.0228303);
}

double NNfunction_ns_chi02_uR::synapse0x3605d70() {
   return (neuron0x35fb690()*0.0641087);
}

double NNfunction_ns_chi02_uR::synapse0x3605db0() {
   return (neuron0x35fb9d0()*0.00654883);
}

double NNfunction_ns_chi02_uR::synapse0x3605df0() {
   return (neuron0x35fbd10()*0.00560721);
}

double NNfunction_ns_chi02_uR::synapse0x3605e30() {
   return (neuron0x35fc050()*0.00673606);
}

double NNfunction_ns_chi02_uR::synapse0x3605e70() {
   return (neuron0x35fc390()*-0.045715);
}

double NNfunction_ns_chi02_uR::synapse0x3605eb0() {
   return (neuron0x35fc6d0()*-0.00443878);
}

double NNfunction_ns_chi02_uR::synapse0x3605ef0() {
   return (neuron0x35fca10()*-0.0348533);
}

double NNfunction_ns_chi02_uR::synapse0x3605f30() {
   return (neuron0x35fcd50()*-0.00716718);
}

double NNfunction_ns_chi02_uR::synapse0x3605f70() {
   return (neuron0x35fd090()*-0.0134158);
}

double NNfunction_ns_chi02_uR::synapse0x3605fb0() {
   return (neuron0x35fd3d0()*-0.0164897);
}

double NNfunction_ns_chi02_uR::synapse0x3605ff0() {
   return (neuron0x35fd710()*0.204434);
}

double NNfunction_ns_chi02_uR::synapse0x3606030() {
   return (neuron0x35fda50()*-0.0118556);
}

double NNfunction_ns_chi02_uR::synapse0x36059b0() {
   return (neuron0x35fdd90()*-0.0446786);
}

double NNfunction_ns_chi02_uR::synapse0x36059f0() {
   return (neuron0x35fe2f0()*0.0221528);
}

double NNfunction_ns_chi02_uR::synapse0x3606180() {
   return (neuron0x35fe630()*-0.0204775);
}

double NNfunction_ns_chi02_uR::synapse0x36061c0() {
   return (neuron0x35fe970()*-0.0547882);
}

double NNfunction_ns_chi02_uR::synapse0x3606200() {
   return (neuron0x35fecb0()*-0.00560986);
}

double NNfunction_ns_chi02_uR::synapse0x3606240() {
   return (neuron0x35feff0()*-0.0131866);
}

double NNfunction_ns_chi02_uR::synapse0x3606280() {
   return (neuron0x35ff330()*-0.0279384);
}

double NNfunction_ns_chi02_uR::synapse0x36062c0() {
   return (neuron0x35ff670()*-0.0513672);
}

double NNfunction_ns_chi02_uR::synapse0x3606640() {
   return (neuron0x35faa20()*0.0860657);
}

double NNfunction_ns_chi02_uR::synapse0x3606680() {
   return (neuron0x35facd0()*-10.3162);
}

double NNfunction_ns_chi02_uR::synapse0x36066c0() {
   return (neuron0x35fb010()*-3.65065);
}

double NNfunction_ns_chi02_uR::synapse0x3606700() {
   return (neuron0x35fb350()*-0.0108562);
}

double NNfunction_ns_chi02_uR::synapse0x3606740() {
   return (neuron0x35fb690()*-0.0111192);
}

double NNfunction_ns_chi02_uR::synapse0x3606780() {
   return (neuron0x35fb9d0()*-0.0645014);
}

double NNfunction_ns_chi02_uR::synapse0x36067c0() {
   return (neuron0x35fbd10()*-0.000561564);
}

double NNfunction_ns_chi02_uR::synapse0x3606800() {
   return (neuron0x35fc050()*-0.00745306);
}

double NNfunction_ns_chi02_uR::synapse0x3606840() {
   return (neuron0x35fc390()*-0.0174516);
}

double NNfunction_ns_chi02_uR::synapse0x3606880() {
   return (neuron0x35fc6d0()*-0.0427313);
}

double NNfunction_ns_chi02_uR::synapse0x36068c0() {
   return (neuron0x35fca10()*0.0368261);
}

double NNfunction_ns_chi02_uR::synapse0x3606900() {
   return (neuron0x35fcd50()*0.048688);
}

double NNfunction_ns_chi02_uR::synapse0x3606940() {
   return (neuron0x35fd090()*-0.00718998);
}

double NNfunction_ns_chi02_uR::synapse0x3606980() {
   return (neuron0x35fd3d0()*-0.0149948);
}

double NNfunction_ns_chi02_uR::synapse0x36069c0() {
   return (neuron0x35fd710()*0.126485);
}

double NNfunction_ns_chi02_uR::synapse0x3606a00() {
   return (neuron0x35fda50()*-0.002341);
}

double NNfunction_ns_chi02_uR::synapse0x3606490() {
   return (neuron0x35fdd90()*-0.00683191);
}

double NNfunction_ns_chi02_uR::synapse0x36064d0() {
   return (neuron0x35fe2f0()*-0.0211878);
}

double NNfunction_ns_chi02_uR::synapse0x3606b50() {
   return (neuron0x35fe630()*-0.00235184);
}

double NNfunction_ns_chi02_uR::synapse0x3606b90() {
   return (neuron0x35fe970()*-0.0168995);
}

double NNfunction_ns_chi02_uR::synapse0x3606bd0() {
   return (neuron0x35fecb0()*-0.0144713);
}

double NNfunction_ns_chi02_uR::synapse0x3606c10() {
   return (neuron0x35feff0()*-0.00857932);
}

double NNfunction_ns_chi02_uR::synapse0x3606c50() {
   return (neuron0x35ff330()*0.0106327);
}

double NNfunction_ns_chi02_uR::synapse0x3606c90() {
   return (neuron0x35ff670()*10.8158);
}

double NNfunction_ns_chi02_uR::synapse0x3607010() {
   return (neuron0x35faa20()*0.329623);
}

double NNfunction_ns_chi02_uR::synapse0x3607050() {
   return (neuron0x35facd0()*5.53695);
}

double NNfunction_ns_chi02_uR::synapse0x3607090() {
   return (neuron0x35fb010()*6.77758);
}

double NNfunction_ns_chi02_uR::synapse0x36070d0() {
   return (neuron0x35fb350()*0.0100753);
}

double NNfunction_ns_chi02_uR::synapse0x3607110() {
   return (neuron0x35fb690()*0.0551453);
}

double NNfunction_ns_chi02_uR::synapse0x3607150() {
   return (neuron0x35fb9d0()*-0.0722574);
}

double NNfunction_ns_chi02_uR::synapse0x3607190() {
   return (neuron0x35fbd10()*-0.0828778);
}

double NNfunction_ns_chi02_uR::synapse0x36071d0() {
   return (neuron0x35fc050()*0.0168707);
}

double NNfunction_ns_chi02_uR::synapse0x3607210() {
   return (neuron0x35fc390()*-0.0239313);
}

double NNfunction_ns_chi02_uR::synapse0x3607250() {
   return (neuron0x35fc6d0()*0.0281583);
}

double NNfunction_ns_chi02_uR::synapse0x3607290() {
   return (neuron0x35fca10()*-0.0525809);
}

double NNfunction_ns_chi02_uR::synapse0x36072d0() {
   return (neuron0x35fcd50()*-0.0323892);
}

double NNfunction_ns_chi02_uR::synapse0x3607310() {
   return (neuron0x35fd090()*-0.0407321);
}

double NNfunction_ns_chi02_uR::synapse0x3607350() {
   return (neuron0x35fd3d0()*-0.013876);
}

double NNfunction_ns_chi02_uR::synapse0x3607390() {
   return (neuron0x35fd710()*-0.0322618);
}

double NNfunction_ns_chi02_uR::synapse0x36073d0() {
   return (neuron0x35fda50()*0.0216368);
}

double NNfunction_ns_chi02_uR::synapse0x3606e60() {
   return (neuron0x35fdd90()*-0.102933);
}

double NNfunction_ns_chi02_uR::synapse0x3606ea0() {
   return (neuron0x35fe2f0()*0.0524195);
}

double NNfunction_ns_chi02_uR::synapse0x3603c30() {
   return (neuron0x35fe630()*-0.0220306);
}

double NNfunction_ns_chi02_uR::synapse0x3603c70() {
   return (neuron0x35fe970()*-0.0992032);
}

double NNfunction_ns_chi02_uR::synapse0x3603cb0() {
   return (neuron0x35fecb0()*0.012247);
}

double NNfunction_ns_chi02_uR::synapse0x3603cf0() {
   return (neuron0x35feff0()*0.0576239);
}

double NNfunction_ns_chi02_uR::synapse0x3603d30() {
   return (neuron0x35ff330()*0.0444454);
}

double NNfunction_ns_chi02_uR::synapse0x3603d70() {
   return (neuron0x35ff670()*6.20022);
}

double NNfunction_ns_chi02_uR::synapse0x36040f0() {
   return (neuron0x35faa20()*-0.0135727);
}

double NNfunction_ns_chi02_uR::synapse0x3604130() {
   return (neuron0x35facd0()*-0.0247853);
}

double NNfunction_ns_chi02_uR::synapse0x3604170() {
   return (neuron0x35fb010()*-0.00161412);
}

double NNfunction_ns_chi02_uR::synapse0x36041b0() {
   return (neuron0x35fb350()*-0.00402282);
}

double NNfunction_ns_chi02_uR::synapse0x36041f0() {
   return (neuron0x35fb690()*0.00931569);
}

double NNfunction_ns_chi02_uR::synapse0x3604230() {
   return (neuron0x35fb9d0()*-0.0180071);
}

double NNfunction_ns_chi02_uR::synapse0x3604270() {
   return (neuron0x35fbd10()*-0.0024405);
}

double NNfunction_ns_chi02_uR::synapse0x36042b0() {
   return (neuron0x35fc050()*0.0083766);
}

double NNfunction_ns_chi02_uR::synapse0x36042f0() {
   return (neuron0x35fc390()*-0.0121352);
}

double NNfunction_ns_chi02_uR::synapse0x3604330() {
   return (neuron0x35fc6d0()*-0.0302672);
}

double NNfunction_ns_chi02_uR::synapse0x3604370() {
   return (neuron0x35fca10()*-0.0161741);
}

double NNfunction_ns_chi02_uR::synapse0x36043b0() {
   return (neuron0x35fcd50()*-0.0266895);
}

double NNfunction_ns_chi02_uR::synapse0x36043f0() {
   return (neuron0x35fd090()*-0.0356383);
}

double NNfunction_ns_chi02_uR::synapse0x3608530() {
   return (neuron0x35fd3d0()*-0.00422183);
}

double NNfunction_ns_chi02_uR::synapse0x3608570() {
   return (neuron0x35fd710()*1.2674);
}

double NNfunction_ns_chi02_uR::synapse0x36085b0() {
   return (neuron0x35fda50()*0.0436055);
}

double NNfunction_ns_chi02_uR::synapse0x3603f40() {
   return (neuron0x35fdd90()*0.0356975);
}

double NNfunction_ns_chi02_uR::synapse0x3603f80() {
   return (neuron0x35fe2f0()*-0.00291039);
}

double NNfunction_ns_chi02_uR::synapse0x3608700() {
   return (neuron0x35fe630()*-0.00974894);
}

double NNfunction_ns_chi02_uR::synapse0x3608740() {
   return (neuron0x35fe970()*-0.0247484);
}

double NNfunction_ns_chi02_uR::synapse0x3608780() {
   return (neuron0x35fecb0()*-0.0122546);
}

double NNfunction_ns_chi02_uR::synapse0x36087c0() {
   return (neuron0x35feff0()*-0.0182897);
}

double NNfunction_ns_chi02_uR::synapse0x3608800() {
   return (neuron0x35ff330()*-0.017738);
}

double NNfunction_ns_chi02_uR::synapse0x3608840() {
   return (neuron0x35ff670()*-0.0879367);
}

double NNfunction_ns_chi02_uR::synapse0x3608bc0() {
   return (neuron0x35faa20()*2.52248);
}

double NNfunction_ns_chi02_uR::synapse0x3608c00() {
   return (neuron0x35facd0()*0.420378);
}

double NNfunction_ns_chi02_uR::synapse0x3608c40() {
   return (neuron0x35fb010()*-0.332872);
}

double NNfunction_ns_chi02_uR::synapse0x3608c80() {
   return (neuron0x35fb350()*-0.847657);
}

double NNfunction_ns_chi02_uR::synapse0x3608cc0() {
   return (neuron0x35fb690()*-0.358455);
}

double NNfunction_ns_chi02_uR::synapse0x3608d00() {
   return (neuron0x35fb9d0()*0.0452046);
}

double NNfunction_ns_chi02_uR::synapse0x3608d40() {
   return (neuron0x35fbd10()*0.235948);
}

double NNfunction_ns_chi02_uR::synapse0x3608d80() {
   return (neuron0x35fc050()*-0.173211);
}

double NNfunction_ns_chi02_uR::synapse0x3608dc0() {
   return (neuron0x35fc390()*0.162285);
}

double NNfunction_ns_chi02_uR::synapse0x3608e00() {
   return (neuron0x35fc6d0()*-0.945787);
}

double NNfunction_ns_chi02_uR::synapse0x3608e40() {
   return (neuron0x35fca10()*-0.528711);
}

double NNfunction_ns_chi02_uR::synapse0x3608e80() {
   return (neuron0x35fcd50()*-0.136611);
}

double NNfunction_ns_chi02_uR::synapse0x3608ec0() {
   return (neuron0x35fd090()*0.434846);
}

double NNfunction_ns_chi02_uR::synapse0x3608f00() {
   return (neuron0x35fd3d0()*0.622519);
}

double NNfunction_ns_chi02_uR::synapse0x3608f40() {
   return (neuron0x35fd710()*0.292145);
}

double NNfunction_ns_chi02_uR::synapse0x3608f80() {
   return (neuron0x35fda50()*-0.0871359);
}

double NNfunction_ns_chi02_uR::synapse0x3608a10() {
   return (neuron0x35fdd90()*0.289569);
}

double NNfunction_ns_chi02_uR::synapse0x3608a50() {
   return (neuron0x35fe2f0()*1.00717);
}

double NNfunction_ns_chi02_uR::synapse0x36090d0() {
   return (neuron0x35fe630()*-0.437506);
}

double NNfunction_ns_chi02_uR::synapse0x3609110() {
   return (neuron0x35fe970()*0.210656);
}

double NNfunction_ns_chi02_uR::synapse0x3609150() {
   return (neuron0x35fecb0()*-0.224978);
}

double NNfunction_ns_chi02_uR::synapse0x3609190() {
   return (neuron0x35feff0()*0.962817);
}

double NNfunction_ns_chi02_uR::synapse0x36091d0() {
   return (neuron0x35ff330()*-0.528245);
}

double NNfunction_ns_chi02_uR::synapse0x3609210() {
   return (neuron0x35ff670()*-0.75552);
}

double NNfunction_ns_chi02_uR::synapse0x3609590() {
   return (neuron0x35faa20()*-0.419579);
}

double NNfunction_ns_chi02_uR::synapse0x36095d0() {
   return (neuron0x35facd0()*-0.74882);
}

double NNfunction_ns_chi02_uR::synapse0x3609610() {
   return (neuron0x35fb010()*-0.0742475);
}

double NNfunction_ns_chi02_uR::synapse0x3609650() {
   return (neuron0x35fb350()*-1.43559);
}

double NNfunction_ns_chi02_uR::synapse0x3609690() {
   return (neuron0x35fb690()*1.39753);
}

double NNfunction_ns_chi02_uR::synapse0x36096d0() {
   return (neuron0x35fb9d0()*-0.992028);
}

double NNfunction_ns_chi02_uR::synapse0x3609710() {
   return (neuron0x35fbd10()*0.384259);
}

double NNfunction_ns_chi02_uR::synapse0x3609750() {
   return (neuron0x35fc050()*0.326753);
}

double NNfunction_ns_chi02_uR::synapse0x3609790() {
   return (neuron0x35fc390()*0.419308);
}

double NNfunction_ns_chi02_uR::synapse0x36097d0() {
   return (neuron0x35fc6d0()*-0.0618505);
}

double NNfunction_ns_chi02_uR::synapse0x3609810() {
   return (neuron0x35fca10()*0.229859);
}

double NNfunction_ns_chi02_uR::synapse0x3609850() {
   return (neuron0x35fcd50()*-1.05607);
}

double NNfunction_ns_chi02_uR::synapse0x3609890() {
   return (neuron0x35fd090()*-0.751177);
}

double NNfunction_ns_chi02_uR::synapse0x36098d0() {
   return (neuron0x35fd3d0()*0.132401);
}

double NNfunction_ns_chi02_uR::synapse0x3609910() {
   return (neuron0x35fd710()*-0.516726);
}

double NNfunction_ns_chi02_uR::synapse0x3609950() {
   return (neuron0x35fda50()*-0.596927);
}

double NNfunction_ns_chi02_uR::synapse0x36093e0() {
   return (neuron0x35fdd90()*0.741561);
}

double NNfunction_ns_chi02_uR::synapse0x3609420() {
   return (neuron0x35fe2f0()*-0.768253);
}

double NNfunction_ns_chi02_uR::synapse0x3609aa0() {
   return (neuron0x35fe630()*-1.42043);
}

double NNfunction_ns_chi02_uR::synapse0x3609ae0() {
   return (neuron0x35fe970()*-0.0418265);
}

double NNfunction_ns_chi02_uR::synapse0x3609b20() {
   return (neuron0x35fecb0()*0.77102);
}

double NNfunction_ns_chi02_uR::synapse0x3609b60() {
   return (neuron0x35feff0()*0.902672);
}

double NNfunction_ns_chi02_uR::synapse0x3609ba0() {
   return (neuron0x35ff330()*-0.771628);
}

double NNfunction_ns_chi02_uR::synapse0x3609be0() {
   return (neuron0x35ff670()*-0.0872279);
}

double NNfunction_ns_chi02_uR::synapse0x3609f60() {
   return (neuron0x35faa20()*0.0243273);
}

double NNfunction_ns_chi02_uR::synapse0x3609fa0() {
   return (neuron0x35facd0()*0.617705);
}

double NNfunction_ns_chi02_uR::synapse0x3609fe0() {
   return (neuron0x35fb010()*-0.0208865);
}

double NNfunction_ns_chi02_uR::synapse0x360a020() {
   return (neuron0x35fb350()*0.0483388);
}

double NNfunction_ns_chi02_uR::synapse0x360a060() {
   return (neuron0x35fb690()*-0.0250341);
}

double NNfunction_ns_chi02_uR::synapse0x360a0a0() {
   return (neuron0x35fb9d0()*0.02528);
}

double NNfunction_ns_chi02_uR::synapse0x360a0e0() {
   return (neuron0x35fbd10()*0.0137631);
}

double NNfunction_ns_chi02_uR::synapse0x360a120() {
   return (neuron0x35fc050()*6.95911e-07);
}

double NNfunction_ns_chi02_uR::synapse0x360a160() {
   return (neuron0x35fc390()*-0.00929756);
}

double NNfunction_ns_chi02_uR::synapse0x360a1a0() {
   return (neuron0x35fc6d0()*-0.00477326);
}

double NNfunction_ns_chi02_uR::synapse0x360a1e0() {
   return (neuron0x35fca10()*0.00671286);
}

double NNfunction_ns_chi02_uR::synapse0x360a220() {
   return (neuron0x35fcd50()*0.0135799);
}

double NNfunction_ns_chi02_uR::synapse0x360a260() {
   return (neuron0x35fd090()*-0.00489865);
}

double NNfunction_ns_chi02_uR::synapse0x360a2a0() {
   return (neuron0x35fd3d0()*0.00506435);
}

double NNfunction_ns_chi02_uR::synapse0x360a2e0() {
   return (neuron0x35fd710()*-1.08991);
}

double NNfunction_ns_chi02_uR::synapse0x360a320() {
   return (neuron0x35fda50()*-0.036204);
}

double NNfunction_ns_chi02_uR::synapse0x3609db0() {
   return (neuron0x35fdd90()*-0.00601343);
}

double NNfunction_ns_chi02_uR::synapse0x3609df0() {
   return (neuron0x35fe2f0()*-0.0175509);
}

double NNfunction_ns_chi02_uR::synapse0x360a470() {
   return (neuron0x35fe630()*0.0234755);
}

double NNfunction_ns_chi02_uR::synapse0x360a4b0() {
   return (neuron0x35fe970()*-0.0162409);
}

double NNfunction_ns_chi02_uR::synapse0x360a4f0() {
   return (neuron0x35fecb0()*0.00220506);
}

double NNfunction_ns_chi02_uR::synapse0x360a530() {
   return (neuron0x35feff0()*0.00535617);
}

double NNfunction_ns_chi02_uR::synapse0x360a570() {
   return (neuron0x35ff330()*0.023534);
}

double NNfunction_ns_chi02_uR::synapse0x360a5b0() {
   return (neuron0x35ff670()*0.155181);
}

double NNfunction_ns_chi02_uR::synapse0x360a930() {
   return (neuron0x35faa20()*1.01688);
}

double NNfunction_ns_chi02_uR::synapse0x35fabb0() {
   return (neuron0x35facd0()*-1.33981);
}

double NNfunction_ns_chi02_uR::synapse0x35fabf0() {
   return (neuron0x35fb010()*0.0632517);
}

double NNfunction_ns_chi02_uR::synapse0x35faef0() {
   return (neuron0x35fb350()*0.861316);
}

double NNfunction_ns_chi02_uR::synapse0x35faf30() {
   return (neuron0x35fb690()*2.61875);
}

double NNfunction_ns_chi02_uR::synapse0x35fb230() {
   return (neuron0x35fb9d0()*1.15263);
}

double NNfunction_ns_chi02_uR::synapse0x35fb270() {
   return (neuron0x35fbd10()*1.21316);
}

double NNfunction_ns_chi02_uR::synapse0x35fb570() {
   return (neuron0x35fc050()*-1.88956);
}

double NNfunction_ns_chi02_uR::synapse0x35fb5b0() {
   return (neuron0x35fc390()*0.701436);
}

double NNfunction_ns_chi02_uR::synapse0x35fb8b0() {
   return (neuron0x35fc6d0()*0.671657);
}

double NNfunction_ns_chi02_uR::synapse0x35fb8f0() {
   return (neuron0x35fca10()*-0.777407);
}

double NNfunction_ns_chi02_uR::synapse0x35fbbf0() {
   return (neuron0x35fcd50()*-0.628949);
}

double NNfunction_ns_chi02_uR::synapse0x35fbc30() {
   return (neuron0x35fd090()*-0.240911);
}

double NNfunction_ns_chi02_uR::synapse0x35fbf30() {
   return (neuron0x35fd3d0()*0.267879);
}

double NNfunction_ns_chi02_uR::synapse0x35fbf70() {
   return (neuron0x35fd710()*-0.105056);
}

double NNfunction_ns_chi02_uR::synapse0x35fc270() {
   return (neuron0x35fda50()*-0.434748);
}

double NNfunction_ns_chi02_uR::synapse0x35fc2b0() {
   return (neuron0x35fdd90()*-0.54149);
}

double NNfunction_ns_chi02_uR::synapse0x35fc5b0() {
   return (neuron0x35fe2f0()*0.506077);
}

double NNfunction_ns_chi02_uR::synapse0x35fc5f0() {
   return (neuron0x35fe630()*0.815165);
}

double NNfunction_ns_chi02_uR::synapse0x35fc8f0() {
   return (neuron0x35fe970()*-0.412906);
}

double NNfunction_ns_chi02_uR::synapse0x35fc930() {
   return (neuron0x35fecb0()*0.269212);
}

double NNfunction_ns_chi02_uR::synapse0x35fcc30() {
   return (neuron0x35feff0()*-1.60623);
}

double NNfunction_ns_chi02_uR::synapse0x35fcc70() {
   return (neuron0x35ff330()*1.03924);
}

double NNfunction_ns_chi02_uR::synapse0x35fcf70() {
   return (neuron0x35ff670()*0.645108);
}

double NNfunction_ns_chi02_uR::synapse0x35fcfb0() {
   return (neuron0x35faa20()*0.00662005);
}

double NNfunction_ns_chi02_uR::synapse0x35fdc70() {
   return (neuron0x35facd0()*-0.00243241);
}

double NNfunction_ns_chi02_uR::synapse0x35fdcb0() {
   return (neuron0x35fb010()*0.0471737);
}

double NNfunction_ns_chi02_uR::synapse0x360a780() {
   return (neuron0x35fb350()*-2.07822);
}

double NNfunction_ns_chi02_uR::synapse0x360a7c0() {
   return (neuron0x35fb690()*-0.00412361);
}

double NNfunction_ns_chi02_uR::synapse0x35fdfb0() {
   return (neuron0x35fb9d0()*0.00925707);
}

double NNfunction_ns_chi02_uR::synapse0x35fdff0() {
   return (neuron0x35fbd10()*-0.00529158);
}

double NNfunction_ns_chi02_uR::synapse0x35fe510() {
   return (neuron0x35fc050()*-0.00444565);
}

double NNfunction_ns_chi02_uR::synapse0x35fe550() {
   return (neuron0x35fc390()*0.00362444);
}

double NNfunction_ns_chi02_uR::synapse0x35fe850() {
   return (neuron0x35fc6d0()*-0.0078203);
}

double NNfunction_ns_chi02_uR::synapse0x35fe890() {
   return (neuron0x35fca10()*0.012332);
}

double NNfunction_ns_chi02_uR::synapse0x35feb90() {
   return (neuron0x35fcd50()*0.0156873);
}

double NNfunction_ns_chi02_uR::synapse0x35febd0() {
   return (neuron0x35fd090()*0.0138842);
}

double NNfunction_ns_chi02_uR::synapse0x35feed0() {
   return (neuron0x35fd3d0()*0.0132354);
}

double NNfunction_ns_chi02_uR::synapse0x35fef10() {
   return (neuron0x35fd710()*0.111785);
}

double NNfunction_ns_chi02_uR::synapse0x35ff210() {
   return (neuron0x35fda50()*-0.0198478);
}

double NNfunction_ns_chi02_uR::synapse0x35ff250() {
   return (neuron0x35fdd90()*0.012071);
}

double NNfunction_ns_chi02_uR::synapse0x35ff550() {
   return (neuron0x35fe2f0()*0.0130861);
}

double NNfunction_ns_chi02_uR::synapse0x35ff590() {
   return (neuron0x35fe630()*-0.000656438);
}

double NNfunction_ns_chi02_uR::synapse0x35ff890() {
   return (neuron0x35fe970()*0.000762957);
}

double NNfunction_ns_chi02_uR::synapse0x35ff8d0() {
   return (neuron0x35fecb0()*0.00568577);
}

double NNfunction_ns_chi02_uR::synapse0x35fd2b0() {
   return (neuron0x35feff0()*-0.00869776);
}

double NNfunction_ns_chi02_uR::synapse0x35fd2f0() {
   return (neuron0x35ff330()*-0.002667);
}

double NNfunction_ns_chi02_uR::synapse0x360c6a0() {
   return (neuron0x35ff670()*0.0805262);
}

double NNfunction_ns_chi02_uR::synapse0x360ca20() {
   return (neuron0x35faa20()*-0.349712);
}

double NNfunction_ns_chi02_uR::synapse0x360ca60() {
   return (neuron0x35facd0()*0.00466977);
}

double NNfunction_ns_chi02_uR::synapse0x360caa0() {
   return (neuron0x35fb010()*0.0954466);
}

double NNfunction_ns_chi02_uR::synapse0x360cae0() {
   return (neuron0x35fb350()*-0.40765);
}

double NNfunction_ns_chi02_uR::synapse0x360cb20() {
   return (neuron0x35fb690()*0.54754);
}

double NNfunction_ns_chi02_uR::synapse0x360cb60() {
   return (neuron0x35fb9d0()*-0.144816);
}

double NNfunction_ns_chi02_uR::synapse0x360cba0() {
   return (neuron0x35fbd10()*-0.205199);
}

double NNfunction_ns_chi02_uR::synapse0x360cbe0() {
   return (neuron0x35fc050()*2.54016);
}

double NNfunction_ns_chi02_uR::synapse0x360cc20() {
   return (neuron0x35fc390()*-0.480771);
}

double NNfunction_ns_chi02_uR::synapse0x360cc60() {
   return (neuron0x35fc6d0()*-0.527563);
}

double NNfunction_ns_chi02_uR::synapse0x360cca0() {
   return (neuron0x35fca10()*0.150394);
}

double NNfunction_ns_chi02_uR::synapse0x360cce0() {
   return (neuron0x35fcd50()*-0.39887);
}

double NNfunction_ns_chi02_uR::synapse0x360cd20() {
   return (neuron0x35fd090()*0.0773105);
}

double NNfunction_ns_chi02_uR::synapse0x360cd60() {
   return (neuron0x35fd3d0()*-0.0533035);
}

double NNfunction_ns_chi02_uR::synapse0x360cda0() {
   return (neuron0x35fd710()*-0.962652);
}

double NNfunction_ns_chi02_uR::synapse0x360cde0() {
   return (neuron0x35fda50()*-0.278955);
}

double NNfunction_ns_chi02_uR::synapse0x360c870() {
   return (neuron0x35fdd90()*-0.0387523);
}

double NNfunction_ns_chi02_uR::synapse0x360c8b0() {
   return (neuron0x35fe2f0()*-0.0559098);
}

double NNfunction_ns_chi02_uR::synapse0x360cf30() {
   return (neuron0x35fe630()*-0.0844822);
}

double NNfunction_ns_chi02_uR::synapse0x360cf70() {
   return (neuron0x35fe970()*0.265465);
}

double NNfunction_ns_chi02_uR::synapse0x360cfb0() {
   return (neuron0x35fecb0()*0.655996);
}

double NNfunction_ns_chi02_uR::synapse0x360cff0() {
   return (neuron0x35feff0()*0.35821);
}

double NNfunction_ns_chi02_uR::synapse0x360d030() {
   return (neuron0x35ff330()*-0.345152);
}

double NNfunction_ns_chi02_uR::synapse0x360d070() {
   return (neuron0x35ff670()*0.449673);
}

double NNfunction_ns_chi02_uR::synapse0x360d3f0() {
   return (neuron0x35faa20()*-0.893166);
}

double NNfunction_ns_chi02_uR::synapse0x360d430() {
   return (neuron0x35facd0()*-1.59569);
}

double NNfunction_ns_chi02_uR::synapse0x360d470() {
   return (neuron0x35fb010()*0.289415);
}

double NNfunction_ns_chi02_uR::synapse0x360d4b0() {
   return (neuron0x35fb350()*0.482945);
}

double NNfunction_ns_chi02_uR::synapse0x360d4f0() {
   return (neuron0x35fb690()*0.216168);
}

double NNfunction_ns_chi02_uR::synapse0x360d530() {
   return (neuron0x35fb9d0()*-1.21478);
}

double NNfunction_ns_chi02_uR::synapse0x360d570() {
   return (neuron0x35fbd10()*1.05308);
}

double NNfunction_ns_chi02_uR::synapse0x360d5b0() {
   return (neuron0x35fc050()*0.485002);
}

double NNfunction_ns_chi02_uR::synapse0x360d5f0() {
   return (neuron0x35fc390()*0.244807);
}

double NNfunction_ns_chi02_uR::synapse0x360d630() {
   return (neuron0x35fc6d0()*1.14456);
}

double NNfunction_ns_chi02_uR::synapse0x360d670() {
   return (neuron0x35fca10()*-0.238124);
}

double NNfunction_ns_chi02_uR::synapse0x360d6b0() {
   return (neuron0x35fcd50()*0.0718106);
}

double NNfunction_ns_chi02_uR::synapse0x360d6f0() {
   return (neuron0x35fd090()*-0.0612099);
}

double NNfunction_ns_chi02_uR::synapse0x360d730() {
   return (neuron0x35fd3d0()*-0.204767);
}

double NNfunction_ns_chi02_uR::synapse0x360d770() {
   return (neuron0x35fd710()*-0.57222);
}

double NNfunction_ns_chi02_uR::synapse0x360d7b0() {
   return (neuron0x35fda50()*0.298277);
}

double NNfunction_ns_chi02_uR::synapse0x360d240() {
   return (neuron0x35fdd90()*0.126643);
}

double NNfunction_ns_chi02_uR::synapse0x360d280() {
   return (neuron0x35fe2f0()*1.42727);
}

double NNfunction_ns_chi02_uR::synapse0x360d900() {
   return (neuron0x35fe630()*-0.0787663);
}

double NNfunction_ns_chi02_uR::synapse0x360d940() {
   return (neuron0x35fe970()*-0.847632);
}

double NNfunction_ns_chi02_uR::synapse0x360d980() {
   return (neuron0x35fecb0()*-1.1845);
}

double NNfunction_ns_chi02_uR::synapse0x360d9c0() {
   return (neuron0x35feff0()*0.618684);
}

double NNfunction_ns_chi02_uR::synapse0x360da00() {
   return (neuron0x35ff330()*-0.125926);
}

double NNfunction_ns_chi02_uR::synapse0x360da40() {
   return (neuron0x35ff670()*-1.06138);
}

double NNfunction_ns_chi02_uR::synapse0x360ddc0() {
   return (neuron0x35faa20()*-0.268949);
}

double NNfunction_ns_chi02_uR::synapse0x360de00() {
   return (neuron0x35facd0()*0.255155);
}

double NNfunction_ns_chi02_uR::synapse0x360de40() {
   return (neuron0x35fb010()*-4.77235);
}

double NNfunction_ns_chi02_uR::synapse0x360de80() {
   return (neuron0x35fb350()*0.0556035);
}

double NNfunction_ns_chi02_uR::synapse0x360dec0() {
   return (neuron0x35fb690()*-0.0852279);
}

double NNfunction_ns_chi02_uR::synapse0x360df00() {
   return (neuron0x35fb9d0()*-0.107226);
}

double NNfunction_ns_chi02_uR::synapse0x360df40() {
   return (neuron0x35fbd10()*-0.0586459);
}

double NNfunction_ns_chi02_uR::synapse0x360df80() {
   return (neuron0x35fc050()*-0.0105666);
}

double NNfunction_ns_chi02_uR::synapse0x360dfc0() {
   return (neuron0x35fc390()*0.0334267);
}

double NNfunction_ns_chi02_uR::synapse0x360e000() {
   return (neuron0x35fc6d0()*-0.000788895);
}

double NNfunction_ns_chi02_uR::synapse0x360e040() {
   return (neuron0x35fca10()*-0.0127921);
}

double NNfunction_ns_chi02_uR::synapse0x360e080() {
   return (neuron0x35fcd50()*-0.00195351);
}

double NNfunction_ns_chi02_uR::synapse0x360e0c0() {
   return (neuron0x35fd090()*-0.0492834);
}

double NNfunction_ns_chi02_uR::synapse0x360e100() {
   return (neuron0x35fd3d0()*0.00190851);
}

double NNfunction_ns_chi02_uR::synapse0x360e140() {
   return (neuron0x35fd710()*0.13316);
}

double NNfunction_ns_chi02_uR::synapse0x360e180() {
   return (neuron0x35fda50()*0.0183216);
}

double NNfunction_ns_chi02_uR::synapse0x360dc10() {
   return (neuron0x35fdd90()*0.0682292);
}

double NNfunction_ns_chi02_uR::synapse0x360dc50() {
   return (neuron0x35fe2f0()*-0.0491799);
}

double NNfunction_ns_chi02_uR::synapse0x360e2d0() {
   return (neuron0x35fe630()*0.0763884);
}

double NNfunction_ns_chi02_uR::synapse0x360e310() {
   return (neuron0x35fe970()*0.0788348);
}

double NNfunction_ns_chi02_uR::synapse0x360e350() {
   return (neuron0x35fecb0()*-0.0304689);
}

double NNfunction_ns_chi02_uR::synapse0x360e390() {
   return (neuron0x35feff0()*-0.0365669);
}

double NNfunction_ns_chi02_uR::synapse0x360e3d0() {
   return (neuron0x35ff330()*-0.0543276);
}

double NNfunction_ns_chi02_uR::synapse0x360e410() {
   return (neuron0x35ff670()*4.7437);
}

double NNfunction_ns_chi02_uR::synapse0x360e790() {
   return (neuron0x35faa20()*-0.00290926);
}

double NNfunction_ns_chi02_uR::synapse0x360e7d0() {
   return (neuron0x35facd0()*-1.84698);
}

double NNfunction_ns_chi02_uR::synapse0x360e810() {
   return (neuron0x35fb010()*-0.192442);
}

double NNfunction_ns_chi02_uR::synapse0x360e850() {
   return (neuron0x35fb350()*0.0222236);
}

double NNfunction_ns_chi02_uR::synapse0x360e890() {
   return (neuron0x35fb690()*-0.00663913);
}

double NNfunction_ns_chi02_uR::synapse0x360e8d0() {
   return (neuron0x35fb9d0()*0.00541422);
}

double NNfunction_ns_chi02_uR::synapse0x360e910() {
   return (neuron0x35fbd10()*0.00822965);
}

double NNfunction_ns_chi02_uR::synapse0x360e950() {
   return (neuron0x35fc050()*0.00298666);
}

double NNfunction_ns_chi02_uR::synapse0x360e990() {
   return (neuron0x35fc390()*-0.000778997);
}

double NNfunction_ns_chi02_uR::synapse0x360e9d0() {
   return (neuron0x35fc6d0()*0.00527077);
}

double NNfunction_ns_chi02_uR::synapse0x360ea10() {
   return (neuron0x35fca10()*0.00205079);
}

double NNfunction_ns_chi02_uR::synapse0x360ea50() {
   return (neuron0x35fcd50()*-0.000116176);
}

double NNfunction_ns_chi02_uR::synapse0x360ea90() {
   return (neuron0x35fd090()*-0.0190063);
}

double NNfunction_ns_chi02_uR::synapse0x360ead0() {
   return (neuron0x35fd3d0()*0.00290592);
}

double NNfunction_ns_chi02_uR::synapse0x360eb10() {
   return (neuron0x35fd710()*0.305082);
}

double NNfunction_ns_chi02_uR::synapse0x360eb50() {
   return (neuron0x35fda50()*-0.00874789);
}

double NNfunction_ns_chi02_uR::synapse0x360e5e0() {
   return (neuron0x35fdd90()*-0.00442476);
}

double NNfunction_ns_chi02_uR::synapse0x360e620() {
   return (neuron0x35fe2f0()*-0.00690506);
}

double NNfunction_ns_chi02_uR::synapse0x360eca0() {
   return (neuron0x35fe630()*0.00870056);
}

double NNfunction_ns_chi02_uR::synapse0x360ece0() {
   return (neuron0x35fe970()*0.00430653);
}

double NNfunction_ns_chi02_uR::synapse0x360ed20() {
   return (neuron0x35fecb0()*-0.0062148);
}

double NNfunction_ns_chi02_uR::synapse0x360ed60() {
   return (neuron0x35feff0()*0.00396647);
}

double NNfunction_ns_chi02_uR::synapse0x360eda0() {
   return (neuron0x35ff330()*-0.00338078);
}

double NNfunction_ns_chi02_uR::synapse0x360ede0() {
   return (neuron0x35ff670()*-0.0421614);
}

double NNfunction_ns_chi02_uR::synapse0x360f160() {
   return (neuron0x35faa20()*-0.201939);
}

double NNfunction_ns_chi02_uR::synapse0x360f1a0() {
   return (neuron0x35facd0()*2.93609);
}

double NNfunction_ns_chi02_uR::synapse0x360f1e0() {
   return (neuron0x35fb010()*-0.219198);
}

double NNfunction_ns_chi02_uR::synapse0x360f220() {
   return (neuron0x35fb350()*0.208056);
}

double NNfunction_ns_chi02_uR::synapse0x360f260() {
   return (neuron0x35fb690()*0.0272032);
}

double NNfunction_ns_chi02_uR::synapse0x360f2a0() {
   return (neuron0x35fb9d0()*-0.0354681);
}

double NNfunction_ns_chi02_uR::synapse0x360f2e0() {
   return (neuron0x35fbd10()*-0.121716);
}

double NNfunction_ns_chi02_uR::synapse0x360f320() {
   return (neuron0x35fc050()*0.0162766);
}

double NNfunction_ns_chi02_uR::synapse0x360f360() {
   return (neuron0x35fc390()*-0.0971191);
}

double NNfunction_ns_chi02_uR::synapse0x3607520() {
   return (neuron0x35fc6d0()*-0.0326001);
}

double NNfunction_ns_chi02_uR::synapse0x3607560() {
   return (neuron0x35fca10()*-0.0635792);
}

double NNfunction_ns_chi02_uR::synapse0x36075a0() {
   return (neuron0x35fcd50()*-0.0135028);
}

double NNfunction_ns_chi02_uR::synapse0x36075e0() {
   return (neuron0x35fd090()*-0.173921);
}

double NNfunction_ns_chi02_uR::synapse0x3607620() {
   return (neuron0x35fd3d0()*0.0459952);
}

double NNfunction_ns_chi02_uR::synapse0x3607660() {
   return (neuron0x35fd710()*0.843);
}

double NNfunction_ns_chi02_uR::synapse0x36076a0() {
   return (neuron0x35fda50()*0.104928);
}

double NNfunction_ns_chi02_uR::synapse0x360efb0() {
   return (neuron0x35fdd90()*-0.0285301);
}

double NNfunction_ns_chi02_uR::synapse0x360eff0() {
   return (neuron0x35fe2f0()*-0.0856437);
}

double NNfunction_ns_chi02_uR::synapse0x36077f0() {
   return (neuron0x35fe630()*-0.0339172);
}

double NNfunction_ns_chi02_uR::synapse0x3607830() {
   return (neuron0x35fe970()*-0.0785486);
}

double NNfunction_ns_chi02_uR::synapse0x3607870() {
   return (neuron0x35fecb0()*0.0291671);
}

double NNfunction_ns_chi02_uR::synapse0x36078b0() {
   return (neuron0x35feff0()*-0.0636784);
}

double NNfunction_ns_chi02_uR::synapse0x36078f0() {
   return (neuron0x35ff330()*-0.0961697);
}

double NNfunction_ns_chi02_uR::synapse0x3607930() {
   return (neuron0x35ff670()*-0.196661);
}

double NNfunction_ns_chi02_uR::synapse0x3607cb0() {
   return (neuron0x35faa20()*-0.183827);
}

double NNfunction_ns_chi02_uR::synapse0x3607cf0() {
   return (neuron0x35facd0()*5.74181);
}

double NNfunction_ns_chi02_uR::synapse0x3607d30() {
   return (neuron0x35fb010()*0.437098);
}

double NNfunction_ns_chi02_uR::synapse0x3607d70() {
   return (neuron0x35fb350()*-0.00393551);
}

double NNfunction_ns_chi02_uR::synapse0x3607db0() {
   return (neuron0x35fb690()*-0.0704701);
}

double NNfunction_ns_chi02_uR::synapse0x3607df0() {
   return (neuron0x35fb9d0()*-0.0768718);
}

double NNfunction_ns_chi02_uR::synapse0x3607e30() {
   return (neuron0x35fbd10()*-0.0171776);
}

double NNfunction_ns_chi02_uR::synapse0x3607e70() {
   return (neuron0x35fc050()*-0.0456471);
}

double NNfunction_ns_chi02_uR::synapse0x3607eb0() {
   return (neuron0x35fc390()*0.0447483);
}

double NNfunction_ns_chi02_uR::synapse0x3607ef0() {
   return (neuron0x35fc6d0()*-0.00551334);
}

double NNfunction_ns_chi02_uR::synapse0x3607f30() {
   return (neuron0x35fca10()*0.00652127);
}

double NNfunction_ns_chi02_uR::synapse0x3607f70() {
   return (neuron0x35fcd50()*-0.0186305);
}

double NNfunction_ns_chi02_uR::synapse0x3607fb0() {
   return (neuron0x35fd090()*0.0118431);
}

double NNfunction_ns_chi02_uR::synapse0x3607ff0() {
   return (neuron0x35fd3d0()*-0.048623);
}

double NNfunction_ns_chi02_uR::synapse0x3608030() {
   return (neuron0x35fd710()*-0.174268);
}

double NNfunction_ns_chi02_uR::synapse0x3608070() {
   return (neuron0x35fda50()*0.0144621);
}

double NNfunction_ns_chi02_uR::synapse0x3607b00() {
   return (neuron0x35fdd90()*-0.029153);
}

double NNfunction_ns_chi02_uR::synapse0x3607b40() {
   return (neuron0x35fe2f0()*-0.0358232);
}

double NNfunction_ns_chi02_uR::synapse0x36081c0() {
   return (neuron0x35fe630()*-0.0353187);
}

double NNfunction_ns_chi02_uR::synapse0x3608200() {
   return (neuron0x35fe970()*-0.00860879);
}

double NNfunction_ns_chi02_uR::synapse0x3608240() {
   return (neuron0x35fecb0()*0.03837);
}

double NNfunction_ns_chi02_uR::synapse0x3608280() {
   return (neuron0x35feff0()*0.0572877);
}

double NNfunction_ns_chi02_uR::synapse0x36082c0() {
   return (neuron0x35ff330()*-0.0623237);
}

double NNfunction_ns_chi02_uR::synapse0x3608300() {
   return (neuron0x35ff670()*-3.1973);
}

double NNfunction_ns_chi02_uR::synapse0x36084d0() {
   return (neuron0x35faa20()*-0.122674);
}

double NNfunction_ns_chi02_uR::synapse0x3611560() {
   return (neuron0x35facd0()*-0.268111);
}

double NNfunction_ns_chi02_uR::synapse0x36115a0() {
   return (neuron0x35fb010()*-0.259084);
}

double NNfunction_ns_chi02_uR::synapse0x36115e0() {
   return (neuron0x35fb350()*-1.06265);
}

double NNfunction_ns_chi02_uR::synapse0x3611620() {
   return (neuron0x35fb690()*0.690051);
}

double NNfunction_ns_chi02_uR::synapse0x3611660() {
   return (neuron0x35fb9d0()*0.411435);
}

double NNfunction_ns_chi02_uR::synapse0x36116a0() {
   return (neuron0x35fbd10()*-0.0326724);
}

double NNfunction_ns_chi02_uR::synapse0x36116e0() {
   return (neuron0x35fc050()*-0.182506);
}

double NNfunction_ns_chi02_uR::synapse0x3611720() {
   return (neuron0x35fc390()*-0.252292);
}

double NNfunction_ns_chi02_uR::synapse0x3611760() {
   return (neuron0x35fc6d0()*-0.143217);
}

double NNfunction_ns_chi02_uR::synapse0x36117a0() {
   return (neuron0x35fca10()*1.00585);
}

double NNfunction_ns_chi02_uR::synapse0x36117e0() {
   return (neuron0x35fcd50()*0.642731);
}

double NNfunction_ns_chi02_uR::synapse0x3611820() {
   return (neuron0x35fd090()*-0.563381);
}

double NNfunction_ns_chi02_uR::synapse0x3611860() {
   return (neuron0x35fd3d0()*-0.266819);
}

double NNfunction_ns_chi02_uR::synapse0x36118a0() {
   return (neuron0x35fd710()*-0.239504);
}

double NNfunction_ns_chi02_uR::synapse0x36118e0() {
   return (neuron0x35fda50()*-2.76686);
}

double NNfunction_ns_chi02_uR::synapse0x36113b0() {
   return (neuron0x35fdd90()*-0.700108);
}

double NNfunction_ns_chi02_uR::synapse0x36113f0() {
   return (neuron0x35fe2f0()*-0.495053);
}

double NNfunction_ns_chi02_uR::synapse0x3611a30() {
   return (neuron0x35fe630()*-0.358611);
}

double NNfunction_ns_chi02_uR::synapse0x3611a70() {
   return (neuron0x35fe970()*0.699997);
}

double NNfunction_ns_chi02_uR::synapse0x3611ab0() {
   return (neuron0x35fecb0()*-0.135927);
}

double NNfunction_ns_chi02_uR::synapse0x3611af0() {
   return (neuron0x35feff0()*0.194554);
}

double NNfunction_ns_chi02_uR::synapse0x3611b30() {
   return (neuron0x35ff330()*-0.0163973);
}

double NNfunction_ns_chi02_uR::synapse0x3611b70() {
   return (neuron0x35ff670()*-1.24446);
}

double NNfunction_ns_chi02_uR::synapse0x3611ef0() {
   return (neuron0x35faa20()*1.55697);
}

double NNfunction_ns_chi02_uR::synapse0x3611f30() {
   return (neuron0x35facd0()*-0.385301);
}

double NNfunction_ns_chi02_uR::synapse0x3611f70() {
   return (neuron0x35fb010()*0.266205);
}

double NNfunction_ns_chi02_uR::synapse0x3611fb0() {
   return (neuron0x35fb350()*0.729435);
}

double NNfunction_ns_chi02_uR::synapse0x3611ff0() {
   return (neuron0x35fb690()*0.331339);
}

double NNfunction_ns_chi02_uR::synapse0x3612030() {
   return (neuron0x35fb9d0()*-1.24317);
}

double NNfunction_ns_chi02_uR::synapse0x3612070() {
   return (neuron0x35fbd10()*1.24504);
}

double NNfunction_ns_chi02_uR::synapse0x36120b0() {
   return (neuron0x35fc050()*-0.759145);
}

double NNfunction_ns_chi02_uR::synapse0x36120f0() {
   return (neuron0x35fc390()*1.33717);
}

double NNfunction_ns_chi02_uR::synapse0x3612130() {
   return (neuron0x35fc6d0()*-0.246095);
}

double NNfunction_ns_chi02_uR::synapse0x3612170() {
   return (neuron0x35fca10()*0.713356);
}

double NNfunction_ns_chi02_uR::synapse0x36121b0() {
   return (neuron0x35fcd50()*-1.34733);
}

double NNfunction_ns_chi02_uR::synapse0x36121f0() {
   return (neuron0x35fd090()*-0.650248);
}

double NNfunction_ns_chi02_uR::synapse0x3612230() {
   return (neuron0x35fd3d0()*0.569451);
}

double NNfunction_ns_chi02_uR::synapse0x3612270() {
   return (neuron0x35fd710()*-1.91515);
}

double NNfunction_ns_chi02_uR::synapse0x36122b0() {
   return (neuron0x35fda50()*1.66949);
}

double NNfunction_ns_chi02_uR::synapse0x3611d40() {
   return (neuron0x35fdd90()*-0.751776);
}

double NNfunction_ns_chi02_uR::synapse0x3611d80() {
   return (neuron0x35fe2f0()*1.16975);
}

double NNfunction_ns_chi02_uR::synapse0x3612400() {
   return (neuron0x35fe630()*-0.531501);
}

double NNfunction_ns_chi02_uR::synapse0x3612440() {
   return (neuron0x35fe970()*1.6474);
}

double NNfunction_ns_chi02_uR::synapse0x3612480() {
   return (neuron0x35fecb0()*0.530106);
}

double NNfunction_ns_chi02_uR::synapse0x36124c0() {
   return (neuron0x35feff0()*-0.712901);
}

double NNfunction_ns_chi02_uR::synapse0x3612500() {
   return (neuron0x35ff330()*0.683697);
}

double NNfunction_ns_chi02_uR::synapse0x3612540() {
   return (neuron0x35ff670()*-1.19239);
}

double NNfunction_ns_chi02_uR::synapse0x36128c0() {
   return (neuron0x35faa20()*-1.52531);
}

double NNfunction_ns_chi02_uR::synapse0x3612900() {
   return (neuron0x35facd0()*1.63615);
}

double NNfunction_ns_chi02_uR::synapse0x3612940() {
   return (neuron0x35fb010()*1.153);
}

double NNfunction_ns_chi02_uR::synapse0x3612980() {
   return (neuron0x35fb350()*0.515639);
}

double NNfunction_ns_chi02_uR::synapse0x36129c0() {
   return (neuron0x35fb690()*0.0856556);
}

double NNfunction_ns_chi02_uR::synapse0x3612a00() {
   return (neuron0x35fb9d0()*0.22078);
}

double NNfunction_ns_chi02_uR::synapse0x3612a40() {
   return (neuron0x35fbd10()*0.234777);
}

double NNfunction_ns_chi02_uR::synapse0x3612a80() {
   return (neuron0x35fc050()*0.203106);
}

double NNfunction_ns_chi02_uR::synapse0x3612ac0() {
   return (neuron0x35fc390()*0.293326);
}

double NNfunction_ns_chi02_uR::synapse0x3612b00() {
   return (neuron0x35fc6d0()*0.385047);
}

double NNfunction_ns_chi02_uR::synapse0x3612b40() {
   return (neuron0x35fca10()*0.716059);
}

double NNfunction_ns_chi02_uR::synapse0x3612b80() {
   return (neuron0x35fcd50()*-0.490169);
}

double NNfunction_ns_chi02_uR::synapse0x3612bc0() {
   return (neuron0x35fd090()*-1.39712);
}

double NNfunction_ns_chi02_uR::synapse0x3612c00() {
   return (neuron0x35fd3d0()*-0.189127);
}

double NNfunction_ns_chi02_uR::synapse0x3612c40() {
   return (neuron0x35fd710()*-0.174214);
}

double NNfunction_ns_chi02_uR::synapse0x3612c80() {
   return (neuron0x35fda50()*-0.352706);
}

double NNfunction_ns_chi02_uR::synapse0x3612710() {
   return (neuron0x35fdd90()*-0.117697);
}

double NNfunction_ns_chi02_uR::synapse0x3612750() {
   return (neuron0x35fe2f0()*-0.142324);
}

double NNfunction_ns_chi02_uR::synapse0x3612dd0() {
   return (neuron0x35fe630()*0.193032);
}

double NNfunction_ns_chi02_uR::synapse0x3612e10() {
   return (neuron0x35fe970()*0.0705047);
}

double NNfunction_ns_chi02_uR::synapse0x3612e50() {
   return (neuron0x35fecb0()*-0.0985935);
}

double NNfunction_ns_chi02_uR::synapse0x3612e90() {
   return (neuron0x35feff0()*-0.711287);
}

double NNfunction_ns_chi02_uR::synapse0x3612ed0() {
   return (neuron0x35ff330()*0.568872);
}

double NNfunction_ns_chi02_uR::synapse0x3612f10() {
   return (neuron0x35ff670()*2.66626);
}

double NNfunction_ns_chi02_uR::synapse0x3613290() {
   return (neuron0x35faa20()*0.0478604);
}

double NNfunction_ns_chi02_uR::synapse0x36132d0() {
   return (neuron0x35facd0()*0.0131504);
}

double NNfunction_ns_chi02_uR::synapse0x3613310() {
   return (neuron0x35fb010()*-0.0790149);
}

double NNfunction_ns_chi02_uR::synapse0x3613350() {
   return (neuron0x35fb350()*0.00337428);
}

double NNfunction_ns_chi02_uR::synapse0x3613390() {
   return (neuron0x35fb690()*-0.000980588);
}

double NNfunction_ns_chi02_uR::synapse0x36133d0() {
   return (neuron0x35fb9d0()*0.0235423);
}

double NNfunction_ns_chi02_uR::synapse0x3613410() {
   return (neuron0x35fbd10()*-0.0168028);
}

double NNfunction_ns_chi02_uR::synapse0x3613450() {
   return (neuron0x35fc050()*0.0200309);
}

double NNfunction_ns_chi02_uR::synapse0x3613490() {
   return (neuron0x35fc390()*0.0177438);
}

double NNfunction_ns_chi02_uR::synapse0x36134d0() {
   return (neuron0x35fc6d0()*-0.0160284);
}

double NNfunction_ns_chi02_uR::synapse0x3613510() {
   return (neuron0x35fca10()*0.000770937);
}

double NNfunction_ns_chi02_uR::synapse0x3613550() {
   return (neuron0x35fcd50()*-0.008419);
}

double NNfunction_ns_chi02_uR::synapse0x3613590() {
   return (neuron0x35fd090()*0.00729912);
}

double NNfunction_ns_chi02_uR::synapse0x36135d0() {
   return (neuron0x35fd3d0()*-0.00698276);
}

double NNfunction_ns_chi02_uR::synapse0x3613610() {
   return (neuron0x35fd710()*0.0137086);
}

double NNfunction_ns_chi02_uR::synapse0x3613650() {
   return (neuron0x35fda50()*0.0148574);
}

double NNfunction_ns_chi02_uR::synapse0x36130e0() {
   return (neuron0x35fdd90()*0.0178909);
}

double NNfunction_ns_chi02_uR::synapse0x3613120() {
   return (neuron0x35fe2f0()*-0.0134807);
}

double NNfunction_ns_chi02_uR::synapse0x36137a0() {
   return (neuron0x35fe630()*-0.0062617);
}

double NNfunction_ns_chi02_uR::synapse0x36137e0() {
   return (neuron0x35fe970()*-0.00558329);
}

double NNfunction_ns_chi02_uR::synapse0x3613820() {
   return (neuron0x35fecb0()*0.014921);
}

double NNfunction_ns_chi02_uR::synapse0x3613860() {
   return (neuron0x35feff0()*0.0352492);
}

double NNfunction_ns_chi02_uR::synapse0x36138a0() {
   return (neuron0x35ff330()*-0.00281576);
}

double NNfunction_ns_chi02_uR::synapse0x36138e0() {
   return (neuron0x35ff670()*-10.6789);
}

double NNfunction_ns_chi02_uR::synapse0x3613c60() {
   return (neuron0x35faa20()*-0.0470563);
}

double NNfunction_ns_chi02_uR::synapse0x3613ca0() {
   return (neuron0x35facd0()*0.596332);
}

double NNfunction_ns_chi02_uR::synapse0x3613ce0() {
   return (neuron0x35fb010()*-0.132789);
}

double NNfunction_ns_chi02_uR::synapse0x3613d20() {
   return (neuron0x35fb350()*-0.0149998);
}

double NNfunction_ns_chi02_uR::synapse0x3613d60() {
   return (neuron0x35fb690()*0.0327364);
}

double NNfunction_ns_chi02_uR::synapse0x3613da0() {
   return (neuron0x35fb9d0()*0.00823129);
}

double NNfunction_ns_chi02_uR::synapse0x3613de0() {
   return (neuron0x35fbd10()*-0.00732055);
}

double NNfunction_ns_chi02_uR::synapse0x3613e20() {
   return (neuron0x35fc050()*-0.00612653);
}

double NNfunction_ns_chi02_uR::synapse0x3613e60() {
   return (neuron0x35fc390()*-0.00623791);
}

double NNfunction_ns_chi02_uR::synapse0x3613ea0() {
   return (neuron0x35fc6d0()*-0.02683);
}

double NNfunction_ns_chi02_uR::synapse0x3613ee0() {
   return (neuron0x35fca10()*0.0218425);
}

double NNfunction_ns_chi02_uR::synapse0x3613f20() {
   return (neuron0x35fcd50()*0.0322517);
}

double NNfunction_ns_chi02_uR::synapse0x3613f60() {
   return (neuron0x35fd090()*-0.00856582);
}

double NNfunction_ns_chi02_uR::synapse0x3613fa0() {
   return (neuron0x35fd3d0()*-0.0103758);
}

double NNfunction_ns_chi02_uR::synapse0x3613fe0() {
   return (neuron0x35fd710()*-0.159279);
}

double NNfunction_ns_chi02_uR::synapse0x3614020() {
   return (neuron0x35fda50()*-0.0183347);
}

double NNfunction_ns_chi02_uR::synapse0x3613ab0() {
   return (neuron0x35fdd90()*-0.0108952);
}

double NNfunction_ns_chi02_uR::synapse0x3613af0() {
   return (neuron0x35fe2f0()*-0.0119686);
}

double NNfunction_ns_chi02_uR::synapse0x3614170() {
   return (neuron0x35fe630()*0.0111531);
}

double NNfunction_ns_chi02_uR::synapse0x36141b0() {
   return (neuron0x35fe970()*0.000282569);
}

double NNfunction_ns_chi02_uR::synapse0x36141f0() {
   return (neuron0x35fecb0()*-0.0284628);
}

double NNfunction_ns_chi02_uR::synapse0x3614230() {
   return (neuron0x35feff0()*0.00228787);
}

double NNfunction_ns_chi02_uR::synapse0x3614270() {
   return (neuron0x35ff330()*-0.0241328);
}

double NNfunction_ns_chi02_uR::synapse0x36142b0() {
   return (neuron0x35ff670()*5.98253);
}

double NNfunction_ns_chi02_uR::synapse0x3614630() {
   return (neuron0x35faa20()*0.126487);
}

double NNfunction_ns_chi02_uR::synapse0x3614670() {
   return (neuron0x35facd0()*-0.674131);
}

double NNfunction_ns_chi02_uR::synapse0x36146b0() {
   return (neuron0x35fb010()*-1.35287);
}

double NNfunction_ns_chi02_uR::synapse0x36146f0() {
   return (neuron0x35fb350()*-0.778271);
}

double NNfunction_ns_chi02_uR::synapse0x3614730() {
   return (neuron0x35fb690()*-0.102691);
}

double NNfunction_ns_chi02_uR::synapse0x3614770() {
   return (neuron0x35fb9d0()*-0.210483);
}

double NNfunction_ns_chi02_uR::synapse0x36147b0() {
   return (neuron0x35fbd10()*0.699381);
}

double NNfunction_ns_chi02_uR::synapse0x36147f0() {
   return (neuron0x35fc050()*0.279755);
}

double NNfunction_ns_chi02_uR::synapse0x3614830() {
   return (neuron0x35fc390()*0.0997566);
}

double NNfunction_ns_chi02_uR::synapse0x3614870() {
   return (neuron0x35fc6d0()*0.469495);
}

double NNfunction_ns_chi02_uR::synapse0x36148b0() {
   return (neuron0x35fca10()*-0.0768155);
}

double NNfunction_ns_chi02_uR::synapse0x36148f0() {
   return (neuron0x35fcd50()*-1.13209);
}

double NNfunction_ns_chi02_uR::synapse0x3614930() {
   return (neuron0x35fd090()*-0.449493);
}

double NNfunction_ns_chi02_uR::synapse0x3614970() {
   return (neuron0x35fd3d0()*-0.354867);
}

double NNfunction_ns_chi02_uR::synapse0x36149b0() {
   return (neuron0x35fd710()*0.587834);
}

double NNfunction_ns_chi02_uR::synapse0x36149f0() {
   return (neuron0x35fda50()*-1.7296);
}

double NNfunction_ns_chi02_uR::synapse0x3614480() {
   return (neuron0x35fdd90()*0.484711);
}

double NNfunction_ns_chi02_uR::synapse0x36144c0() {
   return (neuron0x35fe2f0()*1.18453);
}

double NNfunction_ns_chi02_uR::synapse0x3614b40() {
   return (neuron0x35fe630()*1.05677);
}

double NNfunction_ns_chi02_uR::synapse0x3614b80() {
   return (neuron0x35fe970()*0.463224);
}

double NNfunction_ns_chi02_uR::synapse0x3614bc0() {
   return (neuron0x35fecb0()*0.699308);
}

double NNfunction_ns_chi02_uR::synapse0x3614c00() {
   return (neuron0x35feff0()*-0.00017391);
}

double NNfunction_ns_chi02_uR::synapse0x3614c40() {
   return (neuron0x35ff330()*-0.824871);
}

double NNfunction_ns_chi02_uR::synapse0x3614c80() {
   return (neuron0x35ff670()*-0.0591864);
}

double NNfunction_ns_chi02_uR::synapse0x3615000() {
   return (neuron0x35faa20()*-0.0246448);
}

double NNfunction_ns_chi02_uR::synapse0x3615040() {
   return (neuron0x35facd0()*0.0431169);
}

double NNfunction_ns_chi02_uR::synapse0x3615080() {
   return (neuron0x35fb010()*-0.0354386);
}

double NNfunction_ns_chi02_uR::synapse0x36150c0() {
   return (neuron0x35fb350()*-0.61169);
}

double NNfunction_ns_chi02_uR::synapse0x3615100() {
   return (neuron0x35fb690()*-0.0343076);
}

double NNfunction_ns_chi02_uR::synapse0x3615140() {
   return (neuron0x35fb9d0()*-0.0191341);
}

double NNfunction_ns_chi02_uR::synapse0x3615180() {
   return (neuron0x35fbd10()*-0.0149356);
}

double NNfunction_ns_chi02_uR::synapse0x36151c0() {
   return (neuron0x35fc050()*-0.0242771);
}

double NNfunction_ns_chi02_uR::synapse0x3615200() {
   return (neuron0x35fc390()*0.00888394);
}

double NNfunction_ns_chi02_uR::synapse0x3615240() {
   return (neuron0x35fc6d0()*-0.000753534);
}

double NNfunction_ns_chi02_uR::synapse0x3615280() {
   return (neuron0x35fca10()*0.00227288);
}

double NNfunction_ns_chi02_uR::synapse0x36152c0() {
   return (neuron0x35fcd50()*0.0176142);
}

double NNfunction_ns_chi02_uR::synapse0x3615300() {
   return (neuron0x35fd090()*-0.0039759);
}

double NNfunction_ns_chi02_uR::synapse0x3615340() {
   return (neuron0x35fd3d0()*0.00800599);
}

double NNfunction_ns_chi02_uR::synapse0x3615380() {
   return (neuron0x35fd710()*0.305506);
}

double NNfunction_ns_chi02_uR::synapse0x36153c0() {
   return (neuron0x35fda50()*-0.0128306);
}

double NNfunction_ns_chi02_uR::synapse0x3614e50() {
   return (neuron0x35fdd90()*0.0211626);
}

double NNfunction_ns_chi02_uR::synapse0x3614e90() {
   return (neuron0x35fe2f0()*0.0253932);
}

double NNfunction_ns_chi02_uR::synapse0x3615510() {
   return (neuron0x35fe630()*0.025338);
}

double NNfunction_ns_chi02_uR::synapse0x3615550() {
   return (neuron0x35fe970()*-0.00183069);
}

double NNfunction_ns_chi02_uR::synapse0x3615590() {
   return (neuron0x35fecb0()*-0.0269435);
}

double NNfunction_ns_chi02_uR::synapse0x36155d0() {
   return (neuron0x35feff0()*-0.0147414);
}

double NNfunction_ns_chi02_uR::synapse0x3615610() {
   return (neuron0x35ff330()*-0.0128039);
}

double NNfunction_ns_chi02_uR::synapse0x3615650() {
   return (neuron0x35ff670()*0.0829134);
}

double NNfunction_ns_chi02_uR::synapse0x36159d0() {
   return (neuron0x35faa20()*-0.898072);
}

double NNfunction_ns_chi02_uR::synapse0x3615a10() {
   return (neuron0x35facd0()*1.38019);
}

double NNfunction_ns_chi02_uR::synapse0x3615a50() {
   return (neuron0x35fb010()*-1.12133);
}

double NNfunction_ns_chi02_uR::synapse0x3615a90() {
   return (neuron0x35fb350()*-0.378026);
}

double NNfunction_ns_chi02_uR::synapse0x3615ad0() {
   return (neuron0x35fb690()*-0.342034);
}

double NNfunction_ns_chi02_uR::synapse0x3615b10() {
   return (neuron0x35fb9d0()*1.90683);
}

double NNfunction_ns_chi02_uR::synapse0x3615b50() {
   return (neuron0x35fbd10()*0.0257852);
}

double NNfunction_ns_chi02_uR::synapse0x3615b90() {
   return (neuron0x35fc050()*-1.44988);
}

double NNfunction_ns_chi02_uR::synapse0x3615bd0() {
   return (neuron0x35fc390()*-1.09439);
}

double NNfunction_ns_chi02_uR::synapse0x3615c10() {
   return (neuron0x35fc6d0()*1.41876);
}

double NNfunction_ns_chi02_uR::synapse0x3615c50() {
   return (neuron0x35fca10()*-0.136057);
}

double NNfunction_ns_chi02_uR::synapse0x3615c90() {
   return (neuron0x35fcd50()*1.34971);
}

double NNfunction_ns_chi02_uR::synapse0x3615cd0() {
   return (neuron0x35fd090()*-0.519805);
}

double NNfunction_ns_chi02_uR::synapse0x3615d10() {
   return (neuron0x35fd3d0()*-0.100832);
}

double NNfunction_ns_chi02_uR::synapse0x3615d50() {
   return (neuron0x35fd710()*0.744564);
}

double NNfunction_ns_chi02_uR::synapse0x3615d90() {
   return (neuron0x35fda50()*-1.35582);
}

double NNfunction_ns_chi02_uR::synapse0x3615820() {
   return (neuron0x35fdd90()*1.06545);
}

double NNfunction_ns_chi02_uR::synapse0x3615860() {
   return (neuron0x35fe2f0()*-0.924824);
}

double NNfunction_ns_chi02_uR::synapse0x3615ee0() {
   return (neuron0x35fe630()*0.208411);
}

double NNfunction_ns_chi02_uR::synapse0x3615f20() {
   return (neuron0x35fe970()*-1.21866);
}

double NNfunction_ns_chi02_uR::synapse0x3615f60() {
   return (neuron0x35fecb0()*-1.18318);
}

double NNfunction_ns_chi02_uR::synapse0x3615fa0() {
   return (neuron0x35feff0()*-1.1982);
}

double NNfunction_ns_chi02_uR::synapse0x3615fe0() {
   return (neuron0x35ff330()*-0.752022);
}

double NNfunction_ns_chi02_uR::synapse0x3616020() {
   return (neuron0x35ff670()*0.410975);
}

double NNfunction_ns_chi02_uR::synapse0x36163a0() {
   return (neuron0x35faa20()*0.0656791);
}

double NNfunction_ns_chi02_uR::synapse0x360a970() {
   return (neuron0x35facd0()*23.6062);
}

double NNfunction_ns_chi02_uR::synapse0x360a9b0() {
   return (neuron0x35fb010()*7.58225);
}

double NNfunction_ns_chi02_uR::synapse0x360a9f0() {
   return (neuron0x35fb350()*0.00961855);
}

double NNfunction_ns_chi02_uR::synapse0x360ac40() {
   return (neuron0x35fb690()*0.01339);
}

double NNfunction_ns_chi02_uR::synapse0x360ac80() {
   return (neuron0x35fb9d0()*-0.0322362);
}

double NNfunction_ns_chi02_uR::synapse0x360acc0() {
   return (neuron0x35fbd10()*-0.00941266);
}

double NNfunction_ns_chi02_uR::synapse0x360af10() {
   return (neuron0x35fc050()*-0.00878744);
}

double NNfunction_ns_chi02_uR::synapse0x360af50() {
   return (neuron0x35fc390()*-0.020494);
}

double NNfunction_ns_chi02_uR::synapse0x360b1a0() {
   return (neuron0x35fc6d0()*0.01624);
}

double NNfunction_ns_chi02_uR::synapse0x360b1e0() {
   return (neuron0x35fca10()*-0.0216689);
}

double NNfunction_ns_chi02_uR::synapse0x360b220() {
   return (neuron0x35fcd50()*-0.0166907);
}

double NNfunction_ns_chi02_uR::synapse0x360b470() {
   return (neuron0x35fd090()*-0.0104913);
}

double NNfunction_ns_chi02_uR::synapse0x360b4b0() {
   return (neuron0x35fd3d0()*-0.0046521);
}

double NNfunction_ns_chi02_uR::synapse0x360b700() {
   return (neuron0x35fd710()*-0.0877694);
}

double NNfunction_ns_chi02_uR::synapse0x360b740() {
   return (neuron0x35fda50()*0.0262836);
}

double NNfunction_ns_chi02_uR::synapse0x36161f0() {
   return (neuron0x35fdd90()*-0.0558752);
}

double NNfunction_ns_chi02_uR::synapse0x3616230() {
   return (neuron0x35fe2f0()*0.0199593);
}

double NNfunction_ns_chi02_uR::synapse0x360b890() {
   return (neuron0x35fe630()*-0.0584996);
}

double NNfunction_ns_chi02_uR::synapse0x360bda0() {
   return (neuron0x35fe970()*-0.0567852);
}

double NNfunction_ns_chi02_uR::synapse0x360bde0() {
   return (neuron0x35fecb0()*0.0324687);
}

double NNfunction_ns_chi02_uR::synapse0x360be20() {
   return (neuron0x35feff0()*0.0156453);
}

double NNfunction_ns_chi02_uR::synapse0x360c070() {
   return (neuron0x35ff330()*0.0330557);
}

double NNfunction_ns_chi02_uR::synapse0x360c0b0() {
   return (neuron0x35ff670()*0.0405113);
}

double NNfunction_ns_chi02_uR::synapse0x360b960() {
   return (neuron0x35faa20()*-0.0139387);
}

double NNfunction_ns_chi02_uR::synapse0x360b9a0() {
   return (neuron0x35facd0()*1.77081);
}

double NNfunction_ns_chi02_uR::synapse0x360b9e0() {
   return (neuron0x35fb010()*0.43874);
}

double NNfunction_ns_chi02_uR::synapse0x360ba20() {
   return (neuron0x35fb350()*-0.0351741);
}

double NNfunction_ns_chi02_uR::synapse0x360c3a0() {
   return (neuron0x35fb690()*0.0170245);
}

double NNfunction_ns_chi02_uR::synapse0x36186f0() {
   return (neuron0x35fb9d0()*-0.0073465);
}

double NNfunction_ns_chi02_uR::synapse0x3618730() {
   return (neuron0x35fbd10()*-0.010597);
}

double NNfunction_ns_chi02_uR::synapse0x3618770() {
   return (neuron0x35fc050()*-0.0175073);
}

double NNfunction_ns_chi02_uR::synapse0x36187b0() {
   return (neuron0x35fc390()*0.00988257);
}

double NNfunction_ns_chi02_uR::synapse0x36187f0() {
   return (neuron0x35fc6d0()*0.00952894);
}

double NNfunction_ns_chi02_uR::synapse0x3618830() {
   return (neuron0x35fca10()*-0.00330537);
}

double NNfunction_ns_chi02_uR::synapse0x3618870() {
   return (neuron0x35fcd50()*-0.0134634);
}

double NNfunction_ns_chi02_uR::synapse0x36188b0() {
   return (neuron0x35fd090()*0.00941145);
}

double NNfunction_ns_chi02_uR::synapse0x36188f0() {
   return (neuron0x35fd3d0()*-0.00649994);
}

double NNfunction_ns_chi02_uR::synapse0x3618930() {
   return (neuron0x35fd710()*-0.00435834);
}

double NNfunction_ns_chi02_uR::synapse0x3618970() {
   return (neuron0x35fda50()*0.000643566);
}

double NNfunction_ns_chi02_uR::synapse0x360c280() {
   return (neuron0x35fdd90()*0.00709304);
}

double NNfunction_ns_chi02_uR::synapse0x360c2c0() {
   return (neuron0x35fe2f0()*0.00514888);
}

double NNfunction_ns_chi02_uR::synapse0x3618ac0() {
   return (neuron0x35fe630()*-0.0109422);
}

double NNfunction_ns_chi02_uR::synapse0x3618b00() {
   return (neuron0x35fe970()*-0.0058886);
}

double NNfunction_ns_chi02_uR::synapse0x3618b40() {
   return (neuron0x35fecb0()*0.0153007);
}

double NNfunction_ns_chi02_uR::synapse0x3618b80() {
   return (neuron0x35feff0()*-0.0069324);
}

double NNfunction_ns_chi02_uR::synapse0x3618bc0() {
   return (neuron0x35ff330()*-0.00439378);
}

double NNfunction_ns_chi02_uR::synapse0x3618c00() {
   return (neuron0x35ff670()*0.0814209);
}

double NNfunction_ns_chi02_uR::synapse0x3618f80() {
   return (neuron0x35faa20()*0.371155);
}

double NNfunction_ns_chi02_uR::synapse0x3618fc0() {
   return (neuron0x35facd0()*6.0642);
}

double NNfunction_ns_chi02_uR::synapse0x3619000() {
   return (neuron0x35fb010()*0.206816);
}

double NNfunction_ns_chi02_uR::synapse0x3619040() {
   return (neuron0x35fb350()*-0.041243);
}

double NNfunction_ns_chi02_uR::synapse0x3619080() {
   return (neuron0x35fb690()*0.0183577);
}

double NNfunction_ns_chi02_uR::synapse0x36190c0() {
   return (neuron0x35fb9d0()*0.0146298);
}

double NNfunction_ns_chi02_uR::synapse0x3619100() {
   return (neuron0x35fbd10()*0.0183349);
}

double NNfunction_ns_chi02_uR::synapse0x3619140() {
   return (neuron0x35fc050()*-0.00969408);
}

double NNfunction_ns_chi02_uR::synapse0x3619180() {
   return (neuron0x35fc390()*0.0511642);
}

double NNfunction_ns_chi02_uR::synapse0x36191c0() {
   return (neuron0x35fc6d0()*-0.0119183);
}

double NNfunction_ns_chi02_uR::synapse0x3619200() {
   return (neuron0x35fca10()*0.004072);
}

double NNfunction_ns_chi02_uR::synapse0x3619240() {
   return (neuron0x35fcd50()*-0.0258312);
}

double NNfunction_ns_chi02_uR::synapse0x3619280() {
   return (neuron0x35fd090()*0.0705348);
}

double NNfunction_ns_chi02_uR::synapse0x36192c0() {
   return (neuron0x35fd3d0()*0.0129821);
}

double NNfunction_ns_chi02_uR::synapse0x3619300() {
   return (neuron0x35fd710()*-0.329429);
}

double NNfunction_ns_chi02_uR::synapse0x3619340() {
   return (neuron0x35fda50()*0.00773871);
}

double NNfunction_ns_chi02_uR::synapse0x3618dd0() {
   return (neuron0x35fdd90()*0.0309599);
}

double NNfunction_ns_chi02_uR::synapse0x3618e10() {
   return (neuron0x35fe2f0()*-0.0304203);
}

double NNfunction_ns_chi02_uR::synapse0x3619490() {
   return (neuron0x35fe630()*-0.0158005);
}

double NNfunction_ns_chi02_uR::synapse0x36194d0() {
   return (neuron0x35fe970()*0.0345782);
}

double NNfunction_ns_chi02_uR::synapse0x3619510() {
   return (neuron0x35fecb0()*0.0335103);
}

double NNfunction_ns_chi02_uR::synapse0x3619550() {
   return (neuron0x35feff0()*0.0478057);
}

double NNfunction_ns_chi02_uR::synapse0x3619590() {
   return (neuron0x35ff330()*-0.0127399);
}

double NNfunction_ns_chi02_uR::synapse0x36195d0() {
   return (neuron0x35ff670()*3.12854);
}

double NNfunction_ns_chi02_uR::synapse0x3619950() {
   return (neuron0x35faa20()*-0.397187);
}

double NNfunction_ns_chi02_uR::synapse0x3619990() {
   return (neuron0x35facd0()*0.172333);
}

double NNfunction_ns_chi02_uR::synapse0x36199d0() {
   return (neuron0x35fb010()*-1.07157);
}

double NNfunction_ns_chi02_uR::synapse0x3619a10() {
   return (neuron0x35fb350()*-0.898695);
}

double NNfunction_ns_chi02_uR::synapse0x3619a50() {
   return (neuron0x35fb690()*-1.29929);
}

double NNfunction_ns_chi02_uR::synapse0x3619a90() {
   return (neuron0x35fb9d0()*0.445882);
}

double NNfunction_ns_chi02_uR::synapse0x3619ad0() {
   return (neuron0x35fbd10()*-0.317147);
}

double NNfunction_ns_chi02_uR::synapse0x3619b10() {
   return (neuron0x35fc050()*0.481472);
}

double NNfunction_ns_chi02_uR::synapse0x3619b50() {
   return (neuron0x35fc390()*-0.818927);
}

double NNfunction_ns_chi02_uR::synapse0x3619b90() {
   return (neuron0x35fc6d0()*-0.500357);
}

double NNfunction_ns_chi02_uR::synapse0x3619bd0() {
   return (neuron0x35fca10()*0.345116);
}

double NNfunction_ns_chi02_uR::synapse0x3619c10() {
   return (neuron0x35fcd50()*0.40045);
}

double NNfunction_ns_chi02_uR::synapse0x3619c50() {
   return (neuron0x35fd090()*-0.789843);
}

double NNfunction_ns_chi02_uR::synapse0x3619c90() {
   return (neuron0x35fd3d0()*-0.56636);
}

double NNfunction_ns_chi02_uR::synapse0x3619cd0() {
   return (neuron0x35fd710()*1.32742);
}

double NNfunction_ns_chi02_uR::synapse0x3619d10() {
   return (neuron0x35fda50()*-0.45582);
}

double NNfunction_ns_chi02_uR::synapse0x36197a0() {
   return (neuron0x35fdd90()*0.395746);
}

double NNfunction_ns_chi02_uR::synapse0x36197e0() {
   return (neuron0x35fe2f0()*-0.4215);
}

double NNfunction_ns_chi02_uR::synapse0x3619e60() {
   return (neuron0x35fe630()*-0.548642);
}

double NNfunction_ns_chi02_uR::synapse0x3619ea0() {
   return (neuron0x35fe970()*0.164935);
}

double NNfunction_ns_chi02_uR::synapse0x3619ee0() {
   return (neuron0x35fecb0()*0.36654);
}

double NNfunction_ns_chi02_uR::synapse0x3619f20() {
   return (neuron0x35feff0()*1.01296);
}

double NNfunction_ns_chi02_uR::synapse0x3619f60() {
   return (neuron0x35ff330()*-0.863232);
}

double NNfunction_ns_chi02_uR::synapse0x3619fa0() {
   return (neuron0x35ff670()*0.69074);
}

double NNfunction_ns_chi02_uR::synapse0x361a320() {
   return (neuron0x35faa20()*-0.0357796);
}

double NNfunction_ns_chi02_uR::synapse0x361a360() {
   return (neuron0x35facd0()*0.0244199);
}

double NNfunction_ns_chi02_uR::synapse0x361a3a0() {
   return (neuron0x35fb010()*-0.116717);
}

double NNfunction_ns_chi02_uR::synapse0x361a3e0() {
   return (neuron0x35fb350()*2.33461);
}

double NNfunction_ns_chi02_uR::synapse0x361a420() {
   return (neuron0x35fb690()*-0.0396015);
}

double NNfunction_ns_chi02_uR::synapse0x361a460() {
   return (neuron0x35fb9d0()*-0.0356462);
}

double NNfunction_ns_chi02_uR::synapse0x361a4a0() {
   return (neuron0x35fbd10()*-0.00886926);
}

double NNfunction_ns_chi02_uR::synapse0x361a4e0() {
   return (neuron0x35fc050()*-0.038928);
}

double NNfunction_ns_chi02_uR::synapse0x361a520() {
   return (neuron0x35fc390()*0.0187986);
}

double NNfunction_ns_chi02_uR::synapse0x361a560() {
   return (neuron0x35fc6d0()*0.0341736);
}

double NNfunction_ns_chi02_uR::synapse0x361a5a0() {
   return (neuron0x35fca10()*-0.0127444);
}

double NNfunction_ns_chi02_uR::synapse0x361a5e0() {
   return (neuron0x35fcd50()*-0.00382113);
}

double NNfunction_ns_chi02_uR::synapse0x361a620() {
   return (neuron0x35fd090()*-0.0453337);
}

double NNfunction_ns_chi02_uR::synapse0x361a660() {
   return (neuron0x35fd3d0()*-1.64899e-05);
}

double NNfunction_ns_chi02_uR::synapse0x361a6a0() {
   return (neuron0x35fd710()*-0.215657);
}

double NNfunction_ns_chi02_uR::synapse0x361a6e0() {
   return (neuron0x35fda50()*-0.0078241);
}

double NNfunction_ns_chi02_uR::synapse0x361a170() {
   return (neuron0x35fdd90()*0.00770887);
}

double NNfunction_ns_chi02_uR::synapse0x361a1b0() {
   return (neuron0x35fe2f0()*0.0116579);
}

double NNfunction_ns_chi02_uR::synapse0x361a830() {
   return (neuron0x35fe630()*0.0534347);
}

double NNfunction_ns_chi02_uR::synapse0x361a870() {
   return (neuron0x35fe970()*0.00651174);
}

double NNfunction_ns_chi02_uR::synapse0x361a8b0() {
   return (neuron0x35fecb0()*-0.0262962);
}

double NNfunction_ns_chi02_uR::synapse0x361a8f0() {
   return (neuron0x35feff0()*0.00265152);
}

double NNfunction_ns_chi02_uR::synapse0x361a930() {
   return (neuron0x35ff330()*0.00108214);
}

double NNfunction_ns_chi02_uR::synapse0x361a970() {
   return (neuron0x35ff670()*0.014976);
}

double NNfunction_ns_chi02_uR::synapse0x361acf0() {
   return (neuron0x35faa20()*0.0493379);
}

double NNfunction_ns_chi02_uR::synapse0x361ad30() {
   return (neuron0x35facd0()*0.170723);
}

double NNfunction_ns_chi02_uR::synapse0x361ad70() {
   return (neuron0x35fb010()*-0.702305);
}

double NNfunction_ns_chi02_uR::synapse0x361adb0() {
   return (neuron0x35fb350()*0.0546713);
}

double NNfunction_ns_chi02_uR::synapse0x361adf0() {
   return (neuron0x35fb690()*0.0204989);
}

double NNfunction_ns_chi02_uR::synapse0x361ae30() {
   return (neuron0x35fb9d0()*0.0229328);
}

double NNfunction_ns_chi02_uR::synapse0x361ae70() {
   return (neuron0x35fbd10()*0.0149067);
}

double NNfunction_ns_chi02_uR::synapse0x361aeb0() {
   return (neuron0x35fc050()*0.0267048);
}

double NNfunction_ns_chi02_uR::synapse0x361aef0() {
   return (neuron0x35fc390()*0.00964056);
}

double NNfunction_ns_chi02_uR::synapse0x361af30() {
   return (neuron0x35fc6d0()*0.0129872);
}

double NNfunction_ns_chi02_uR::synapse0x361af70() {
   return (neuron0x35fca10()*0.0525109);
}

double NNfunction_ns_chi02_uR::synapse0x361afb0() {
   return (neuron0x35fcd50()*-0.0203225);
}

double NNfunction_ns_chi02_uR::synapse0x361aff0() {
   return (neuron0x35fd090()*-0.0086908);
}

double NNfunction_ns_chi02_uR::synapse0x361b030() {
   return (neuron0x35fd3d0()*0.0121493);
}

double NNfunction_ns_chi02_uR::synapse0x361b070() {
   return (neuron0x35fd710()*0.194928);
}

double NNfunction_ns_chi02_uR::synapse0x361b0b0() {
   return (neuron0x35fda50()*-0.0119972);
}

double NNfunction_ns_chi02_uR::synapse0x361ab40() {
   return (neuron0x35fdd90()*-0.00733168);
}

double NNfunction_ns_chi02_uR::synapse0x361ab80() {
   return (neuron0x35fe2f0()*-0.0125492);
}

double NNfunction_ns_chi02_uR::synapse0x361b200() {
   return (neuron0x35fe630()*0.0185792);
}

double NNfunction_ns_chi02_uR::synapse0x361b240() {
   return (neuron0x35fe970()*0.0528727);
}

double NNfunction_ns_chi02_uR::synapse0x361b280() {
   return (neuron0x35fecb0()*0.00336597);
}

double NNfunction_ns_chi02_uR::synapse0x361b2c0() {
   return (neuron0x35feff0()*0.0251348);
}

double NNfunction_ns_chi02_uR::synapse0x361b300() {
   return (neuron0x35ff330()*0.0466401);
}

double NNfunction_ns_chi02_uR::synapse0x361b340() {
   return (neuron0x35ff670()*-0.181687);
}

double NNfunction_ns_chi02_uR::synapse0x361b6c0() {
   return (neuron0x35faa20()*-0.0495709);
}

double NNfunction_ns_chi02_uR::synapse0x361b700() {
   return (neuron0x35facd0()*-9.37326);
}

double NNfunction_ns_chi02_uR::synapse0x361b740() {
   return (neuron0x35fb010()*0.301661);
}

double NNfunction_ns_chi02_uR::synapse0x361b780() {
   return (neuron0x35fb350()*0.0394221);
}

double NNfunction_ns_chi02_uR::synapse0x361b7c0() {
   return (neuron0x35fb690()*0.0441291);
}

double NNfunction_ns_chi02_uR::synapse0x361b800() {
   return (neuron0x35fb9d0()*0.0206566);
}

double NNfunction_ns_chi02_uR::synapse0x361b840() {
   return (neuron0x35fbd10()*0.026591);
}

double NNfunction_ns_chi02_uR::synapse0x361b880() {
   return (neuron0x35fc050()*0.00941391);
}

double NNfunction_ns_chi02_uR::synapse0x361b8c0() {
   return (neuron0x35fc390()*0.0491372);
}

double NNfunction_ns_chi02_uR::synapse0x361b900() {
   return (neuron0x35fc6d0()*-0.0150969);
}

double NNfunction_ns_chi02_uR::synapse0x361b940() {
   return (neuron0x35fca10()*0.0587158);
}

double NNfunction_ns_chi02_uR::synapse0x361b980() {
   return (neuron0x35fcd50()*-0.0509057);
}

double NNfunction_ns_chi02_uR::synapse0x361b9c0() {
   return (neuron0x35fd090()*0.00260727);
}

double NNfunction_ns_chi02_uR::synapse0x361ba00() {
   return (neuron0x35fd3d0()*0.00993888);
}

double NNfunction_ns_chi02_uR::synapse0x361ba40() {
   return (neuron0x35fd710()*0.0191656);
}

double NNfunction_ns_chi02_uR::synapse0x361ba80() {
   return (neuron0x35fda50()*-0.0229654);
}

double NNfunction_ns_chi02_uR::synapse0x361b510() {
   return (neuron0x35fdd90()*0.00324114);
}

double NNfunction_ns_chi02_uR::synapse0x361b550() {
   return (neuron0x35fe2f0()*-0.00454687);
}

double NNfunction_ns_chi02_uR::synapse0x361bbd0() {
   return (neuron0x35fe630()*0.0233395);
}

double NNfunction_ns_chi02_uR::synapse0x361bc10() {
   return (neuron0x35fe970()*0.0254771);
}

double NNfunction_ns_chi02_uR::synapse0x361bc50() {
   return (neuron0x35fecb0()*-0.0022097);
}

double NNfunction_ns_chi02_uR::synapse0x361bc90() {
   return (neuron0x35feff0()*0.0238661);
}

double NNfunction_ns_chi02_uR::synapse0x361bcd0() {
   return (neuron0x35ff330()*-0.0254395);
}

double NNfunction_ns_chi02_uR::synapse0x361bd10() {
   return (neuron0x35ff670()*-0.104316);
}

double NNfunction_ns_chi02_uR::synapse0x361c090() {
   return (neuron0x35faa20()*-0.643215);
}

double NNfunction_ns_chi02_uR::synapse0x361c0d0() {
   return (neuron0x35facd0()*0.693315);
}

double NNfunction_ns_chi02_uR::synapse0x361c110() {
   return (neuron0x35fb010()*0.862797);
}

double NNfunction_ns_chi02_uR::synapse0x361c150() {
   return (neuron0x35fb350()*-1.36825);
}

double NNfunction_ns_chi02_uR::synapse0x361c190() {
   return (neuron0x35fb690()*-0.0993403);
}

double NNfunction_ns_chi02_uR::synapse0x361c1d0() {
   return (neuron0x35fb9d0()*1.0062);
}

double NNfunction_ns_chi02_uR::synapse0x361c210() {
   return (neuron0x35fbd10()*-0.784736);
}

double NNfunction_ns_chi02_uR::synapse0x361c250() {
   return (neuron0x35fc050()*-1.09559);
}

double NNfunction_ns_chi02_uR::synapse0x361c290() {
   return (neuron0x35fc390()*0.368681);
}

double NNfunction_ns_chi02_uR::synapse0x361c2d0() {
   return (neuron0x35fc6d0()*-1.06304);
}

double NNfunction_ns_chi02_uR::synapse0x361c310() {
   return (neuron0x35fca10()*1.60166);
}

double NNfunction_ns_chi02_uR::synapse0x361c350() {
   return (neuron0x35fcd50()*-1.11842);
}

double NNfunction_ns_chi02_uR::synapse0x361c390() {
   return (neuron0x35fd090()*-0.615447);
}

double NNfunction_ns_chi02_uR::synapse0x361c3d0() {
   return (neuron0x35fd3d0()*0.108493);
}

double NNfunction_ns_chi02_uR::synapse0x361c410() {
   return (neuron0x35fd710()*0.44821);
}

double NNfunction_ns_chi02_uR::synapse0x361c450() {
   return (neuron0x35fda50()*-1.82593);
}

double NNfunction_ns_chi02_uR::synapse0x361bee0() {
   return (neuron0x35fdd90()*-0.24082);
}

double NNfunction_ns_chi02_uR::synapse0x361bf20() {
   return (neuron0x35fe2f0()*-0.634002);
}

double NNfunction_ns_chi02_uR::synapse0x361c5a0() {
   return (neuron0x35fe630()*-0.442632);
}

double NNfunction_ns_chi02_uR::synapse0x361c5e0() {
   return (neuron0x35fe970()*2.04093);
}

double NNfunction_ns_chi02_uR::synapse0x361c620() {
   return (neuron0x35fecb0()*0.501758);
}

double NNfunction_ns_chi02_uR::synapse0x361c660() {
   return (neuron0x35feff0()*0.0029708);
}

double NNfunction_ns_chi02_uR::synapse0x361c6a0() {
   return (neuron0x35ff330()*-0.201716);
}

double NNfunction_ns_chi02_uR::synapse0x361c6e0() {
   return (neuron0x35ff670()*-0.61179);
}

double NNfunction_ns_chi02_uR::synapse0x361ca60() {
   return (neuron0x35faa20()*0.326009);
}

double NNfunction_ns_chi02_uR::synapse0x361caa0() {
   return (neuron0x35facd0()*0.404036);
}

double NNfunction_ns_chi02_uR::synapse0x361cae0() {
   return (neuron0x35fb010()*0.057222);
}

double NNfunction_ns_chi02_uR::synapse0x361cb20() {
   return (neuron0x35fb350()*0.607742);
}

double NNfunction_ns_chi02_uR::synapse0x361cb60() {
   return (neuron0x35fb690()*0.369452);
}

double NNfunction_ns_chi02_uR::synapse0x361cba0() {
   return (neuron0x35fb9d0()*-0.658866);
}

double NNfunction_ns_chi02_uR::synapse0x361cbe0() {
   return (neuron0x35fbd10()*0.648948);
}

double NNfunction_ns_chi02_uR::synapse0x361cc20() {
   return (neuron0x35fc050()*-0.436367);
}

double NNfunction_ns_chi02_uR::synapse0x361cc60() {
   return (neuron0x35fc390()*0.21027);
}

double NNfunction_ns_chi02_uR::synapse0x361cca0() {
   return (neuron0x35fc6d0()*-0.147037);
}

double NNfunction_ns_chi02_uR::synapse0x361cce0() {
   return (neuron0x35fca10()*0.270718);
}

double NNfunction_ns_chi02_uR::synapse0x361cd20() {
   return (neuron0x35fcd50()*0.554079);
}

double NNfunction_ns_chi02_uR::synapse0x361cd60() {
   return (neuron0x35fd090()*0.549074);
}

double NNfunction_ns_chi02_uR::synapse0x361cda0() {
   return (neuron0x35fd3d0()*-0.620942);
}

double NNfunction_ns_chi02_uR::synapse0x361cde0() {
   return (neuron0x35fd710()*0.569581);
}

double NNfunction_ns_chi02_uR::synapse0x361ce20() {
   return (neuron0x35fda50()*1.39584);
}

double NNfunction_ns_chi02_uR::synapse0x361c8b0() {
   return (neuron0x35fdd90()*0.695496);
}

double NNfunction_ns_chi02_uR::synapse0x361c8f0() {
   return (neuron0x35fe2f0()*-0.324475);
}

double NNfunction_ns_chi02_uR::synapse0x361cf70() {
   return (neuron0x35fe630()*-0.243086);
}

double NNfunction_ns_chi02_uR::synapse0x361cfb0() {
   return (neuron0x35fe970()*0.696462);
}

double NNfunction_ns_chi02_uR::synapse0x361cff0() {
   return (neuron0x35fecb0()*-2.10566);
}

double NNfunction_ns_chi02_uR::synapse0x361d030() {
   return (neuron0x35feff0()*-1.05557);
}

double NNfunction_ns_chi02_uR::synapse0x361d070() {
   return (neuron0x35ff330()*-1.72299);
}

double NNfunction_ns_chi02_uR::synapse0x361d0b0() {
   return (neuron0x35ff670()*0.072032);
}

double NNfunction_ns_chi02_uR::synapse0x3605b60() {
   return (neuron0x35faa20()*-0.0360051);
}

double NNfunction_ns_chi02_uR::synapse0x3605ba0() {
   return (neuron0x35facd0()*-0.0397434);
}

double NNfunction_ns_chi02_uR::synapse0x3605be0() {
   return (neuron0x35fb010()*-0.0106624);
}

double NNfunction_ns_chi02_uR::synapse0x3605c20() {
   return (neuron0x35fb350()*-4.11207);
}

double NNfunction_ns_chi02_uR::synapse0x3605c60() {
   return (neuron0x35fb690()*-0.0149715);
}

double NNfunction_ns_chi02_uR::synapse0x3605ca0() {
   return (neuron0x35fb9d0()*-0.00246326);
}

double NNfunction_ns_chi02_uR::synapse0x3605ce0() {
   return (neuron0x35fbd10()*-0.009533);
}

double NNfunction_ns_chi02_uR::synapse0x3605d20() {
   return (neuron0x35fc050()*-0.0117991);
}

double NNfunction_ns_chi02_uR::synapse0x361d840() {
   return (neuron0x35fc390()*0.00903834);
}

double NNfunction_ns_chi02_uR::synapse0x361d880() {
   return (neuron0x35fc6d0()*0.0211788);
}

double NNfunction_ns_chi02_uR::synapse0x361d8c0() {
   return (neuron0x35fca10()*0.0270125);
}

double NNfunction_ns_chi02_uR::synapse0x361d900() {
   return (neuron0x35fcd50()*0.00594589);
}

double NNfunction_ns_chi02_uR::synapse0x361d940() {
   return (neuron0x35fd090()*0.0103857);
}

double NNfunction_ns_chi02_uR::synapse0x361d980() {
   return (neuron0x35fd3d0()*-0.0363487);
}

double NNfunction_ns_chi02_uR::synapse0x361d9c0() {
   return (neuron0x35fd710()*-0.848602);
}

double NNfunction_ns_chi02_uR::synapse0x361da00() {
   return (neuron0x35fda50()*0.0235139);
}

double NNfunction_ns_chi02_uR::synapse0x361d280() {
   return (neuron0x35fdd90()*-0.0338881);
}

double NNfunction_ns_chi02_uR::synapse0x361d2c0() {
   return (neuron0x35fe2f0()*0.011751);
}

double NNfunction_ns_chi02_uR::synapse0x361db50() {
   return (neuron0x35fe630()*0.0155495);
}

double NNfunction_ns_chi02_uR::synapse0x361db90() {
   return (neuron0x35fe970()*0.0254528);
}

double NNfunction_ns_chi02_uR::synapse0x361dbd0() {
   return (neuron0x35fecb0()*0.022802);
}

double NNfunction_ns_chi02_uR::synapse0x361dc10() {
   return (neuron0x35feff0()*0.000606587);
}

double NNfunction_ns_chi02_uR::synapse0x361dc50() {
   return (neuron0x35ff330()*0.0103634);
}

double NNfunction_ns_chi02_uR::synapse0x361dc90() {
   return (neuron0x35ff670()*0.0776682);
}

double NNfunction_ns_chi02_uR::synapse0x361e010() {
   return (neuron0x35faa20()*-0.799451);
}

double NNfunction_ns_chi02_uR::synapse0x361e050() {
   return (neuron0x35facd0()*0.381321);
}

double NNfunction_ns_chi02_uR::synapse0x361e090() {
   return (neuron0x35fb010()*0.584272);
}

double NNfunction_ns_chi02_uR::synapse0x361e0d0() {
   return (neuron0x35fb350()*1.16838);
}

double NNfunction_ns_chi02_uR::synapse0x361e110() {
   return (neuron0x35fb690()*0.682783);
}

double NNfunction_ns_chi02_uR::synapse0x361e150() {
   return (neuron0x35fb9d0()*-0.450209);
}

double NNfunction_ns_chi02_uR::synapse0x361e190() {
   return (neuron0x35fbd10()*1.16052);
}

double NNfunction_ns_chi02_uR::synapse0x361e1d0() {
   return (neuron0x35fc050()*-0.109977);
}

double NNfunction_ns_chi02_uR::synapse0x361e210() {
   return (neuron0x35fc390()*-0.308122);
}

double NNfunction_ns_chi02_uR::synapse0x361e250() {
   return (neuron0x35fc6d0()*-0.217591);
}

double NNfunction_ns_chi02_uR::synapse0x361e290() {
   return (neuron0x35fca10()*-0.279498);
}

double NNfunction_ns_chi02_uR::synapse0x361e2d0() {
   return (neuron0x35fcd50()*0.304203);
}

double NNfunction_ns_chi02_uR::synapse0x361e310() {
   return (neuron0x35fd090()*1.32696);
}

double NNfunction_ns_chi02_uR::synapse0x361e350() {
   return (neuron0x35fd3d0()*0.397047);
}

double NNfunction_ns_chi02_uR::synapse0x361e390() {
   return (neuron0x35fd710()*-0.442267);
}

double NNfunction_ns_chi02_uR::synapse0x361e3d0() {
   return (neuron0x35fda50()*-1.47698);
}

double NNfunction_ns_chi02_uR::synapse0x361de60() {
   return (neuron0x35fdd90()*0.142355);
}

double NNfunction_ns_chi02_uR::synapse0x361dea0() {
   return (neuron0x35fe2f0()*-0.0678195);
}

double NNfunction_ns_chi02_uR::synapse0x361e520() {
   return (neuron0x35fe630()*0.757009);
}

double NNfunction_ns_chi02_uR::synapse0x361e560() {
   return (neuron0x35fe970()*0.249764);
}

double NNfunction_ns_chi02_uR::synapse0x361e5a0() {
   return (neuron0x35fecb0()*-0.175383);
}

double NNfunction_ns_chi02_uR::synapse0x361e5e0() {
   return (neuron0x35feff0()*-1.02022);
}

double NNfunction_ns_chi02_uR::synapse0x361e620() {
   return (neuron0x35ff330()*0.746311);
}

double NNfunction_ns_chi02_uR::synapse0x361e660() {
   return (neuron0x35ff670()*0.295731);
}

double NNfunction_ns_chi02_uR::synapse0x361e9e0() {
   return (neuron0x35faa20()*-0.729278);
}

double NNfunction_ns_chi02_uR::synapse0x361ea20() {
   return (neuron0x35facd0()*0.199663);
}

double NNfunction_ns_chi02_uR::synapse0x361ea60() {
   return (neuron0x35fb010()*-0.453144);
}

double NNfunction_ns_chi02_uR::synapse0x361eaa0() {
   return (neuron0x35fb350()*-0.0159233);
}

double NNfunction_ns_chi02_uR::synapse0x361eae0() {
   return (neuron0x35fb690()*0.129635);
}

double NNfunction_ns_chi02_uR::synapse0x361eb20() {
   return (neuron0x35fb9d0()*-0.0399948);
}

double NNfunction_ns_chi02_uR::synapse0x361eb60() {
   return (neuron0x35fbd10()*-0.441466);
}

double NNfunction_ns_chi02_uR::synapse0x361eba0() {
   return (neuron0x35fc050()*-0.132113);
}

double NNfunction_ns_chi02_uR::synapse0x361ebe0() {
   return (neuron0x35fc390()*-0.0895435);
}

double NNfunction_ns_chi02_uR::synapse0x361ec20() {
   return (neuron0x35fc6d0()*1.03566);
}

double NNfunction_ns_chi02_uR::synapse0x361ec60() {
   return (neuron0x35fca10()*0.601937);
}

double NNfunction_ns_chi02_uR::synapse0x361eca0() {
   return (neuron0x35fcd50()*-0.0374684);
}

double NNfunction_ns_chi02_uR::synapse0x361ece0() {
   return (neuron0x35fd090()*1.08543);
}

double NNfunction_ns_chi02_uR::synapse0x361ed20() {
   return (neuron0x35fd3d0()*-1.41509);
}

double NNfunction_ns_chi02_uR::synapse0x361ed60() {
   return (neuron0x35fd710()*-0.31523);
}

double NNfunction_ns_chi02_uR::synapse0x361eda0() {
   return (neuron0x35fda50()*-0.424392);
}

double NNfunction_ns_chi02_uR::synapse0x361e830() {
   return (neuron0x35fdd90()*-0.00512103);
}

double NNfunction_ns_chi02_uR::synapse0x361e870() {
   return (neuron0x35fe2f0()*-0.0905022);
}

double NNfunction_ns_chi02_uR::synapse0x360f3a0() {
   return (neuron0x35fe630()*-0.0717091);
}

double NNfunction_ns_chi02_uR::synapse0x360f3e0() {
   return (neuron0x35fe970()*-1.29708);
}

double NNfunction_ns_chi02_uR::synapse0x360f420() {
   return (neuron0x35fecb0()*-0.460772);
}

double NNfunction_ns_chi02_uR::synapse0x360f460() {
   return (neuron0x35feff0()*0.211006);
}

double NNfunction_ns_chi02_uR::synapse0x360f4a0() {
   return (neuron0x35ff330()*0.0410224);
}

double NNfunction_ns_chi02_uR::synapse0x360f4e0() {
   return (neuron0x35ff670()*-0.998028);
}

double NNfunction_ns_chi02_uR::synapse0x360f860() {
   return (neuron0x35faa20()*-0.143957);
}

double NNfunction_ns_chi02_uR::synapse0x360f8a0() {
   return (neuron0x35facd0()*-5.86383);
}

double NNfunction_ns_chi02_uR::synapse0x360f8e0() {
   return (neuron0x35fb010()*-4.11034);
}

double NNfunction_ns_chi02_uR::synapse0x360f920() {
   return (neuron0x35fb350()*0.0263196);
}

double NNfunction_ns_chi02_uR::synapse0x360f960() {
   return (neuron0x35fb690()*-0.0214248);
}

double NNfunction_ns_chi02_uR::synapse0x360f9a0() {
   return (neuron0x35fb9d0()*-0.0611941);
}

double NNfunction_ns_chi02_uR::synapse0x360f9e0() {
   return (neuron0x35fbd10()*0.0542222);
}

double NNfunction_ns_chi02_uR::synapse0x360fa20() {
   return (neuron0x35fc050()*-0.0364192);
}

double NNfunction_ns_chi02_uR::synapse0x360fa60() {
   return (neuron0x35fc390()*-0.0351901);
}

double NNfunction_ns_chi02_uR::synapse0x360faa0() {
   return (neuron0x35fc6d0()*0.0206984);
}

double NNfunction_ns_chi02_uR::synapse0x360fae0() {
   return (neuron0x35fca10()*0.023404);
}

double NNfunction_ns_chi02_uR::synapse0x360fb20() {
   return (neuron0x35fcd50()*0.0360604);
}

double NNfunction_ns_chi02_uR::synapse0x360fb60() {
   return (neuron0x35fd090()*-0.034981);
}

double NNfunction_ns_chi02_uR::synapse0x360fba0() {
   return (neuron0x35fd3d0()*0.0080234);
}

double NNfunction_ns_chi02_uR::synapse0x360fbe0() {
   return (neuron0x35fd710()*0.213351);
}

double NNfunction_ns_chi02_uR::synapse0x360fc20() {
   return (neuron0x35fda50()*-0.0204132);
}

double NNfunction_ns_chi02_uR::synapse0x360f6b0() {
   return (neuron0x35fdd90()*0.00868444);
}

double NNfunction_ns_chi02_uR::synapse0x360f6f0() {
   return (neuron0x35fe2f0()*0.0176547);
}

double NNfunction_ns_chi02_uR::synapse0x360fd70() {
   return (neuron0x35fe630()*0.0209379);
}

double NNfunction_ns_chi02_uR::synapse0x360fdb0() {
   return (neuron0x35fe970()*0.0430313);
}

double NNfunction_ns_chi02_uR::synapse0x360fdf0() {
   return (neuron0x35fecb0()*0.00537127);
}

double NNfunction_ns_chi02_uR::synapse0x360fe30() {
   return (neuron0x35feff0()*-0.0441189);
}

double NNfunction_ns_chi02_uR::synapse0x360fe70() {
   return (neuron0x35ff330()*0.0156659);
}

double NNfunction_ns_chi02_uR::synapse0x360feb0() {
   return (neuron0x35ff670()*-4.3036);
}

double NNfunction_ns_chi02_uR::synapse0x3610230() {
   return (neuron0x35faa20()*-0.00691095);
}

double NNfunction_ns_chi02_uR::synapse0x3610270() {
   return (neuron0x35facd0()*-0.0254479);
}

double NNfunction_ns_chi02_uR::synapse0x36102b0() {
   return (neuron0x35fb010()*0.0843974);
}

double NNfunction_ns_chi02_uR::synapse0x36102f0() {
   return (neuron0x35fb350()*0.222381);
}

double NNfunction_ns_chi02_uR::synapse0x3610330() {
   return (neuron0x35fb690()*0.0624527);
}

double NNfunction_ns_chi02_uR::synapse0x3610370() {
   return (neuron0x35fb9d0()*-0.00610602);
}

double NNfunction_ns_chi02_uR::synapse0x36103b0() {
   return (neuron0x35fbd10()*0.0158623);
}

double NNfunction_ns_chi02_uR::synapse0x36103f0() {
   return (neuron0x35fc050()*0.0262513);
}

double NNfunction_ns_chi02_uR::synapse0x3610430() {
   return (neuron0x35fc390()*-0.0808864);
}

double NNfunction_ns_chi02_uR::synapse0x3610470() {
   return (neuron0x35fc6d0()*-0.125584);
}

double NNfunction_ns_chi02_uR::synapse0x36104b0() {
   return (neuron0x35fca10()*-0.0797999);
}

double NNfunction_ns_chi02_uR::synapse0x36104f0() {
   return (neuron0x35fcd50()*-0.119042);
}

double NNfunction_ns_chi02_uR::synapse0x3610530() {
   return (neuron0x35fd090()*-0.0998546);
}

double NNfunction_ns_chi02_uR::synapse0x3610570() {
   return (neuron0x35fd3d0()*-0.0247196);
}

double NNfunction_ns_chi02_uR::synapse0x36105b0() {
   return (neuron0x35fd710()*1.7878);
}

double NNfunction_ns_chi02_uR::synapse0x36105f0() {
   return (neuron0x35fda50()*0.0952845);
}

double NNfunction_ns_chi02_uR::synapse0x3610080() {
   return (neuron0x35fdd90()*0.0870728);
}

double NNfunction_ns_chi02_uR::synapse0x36100c0() {
   return (neuron0x35fe2f0()*-0.0273957);
}

double NNfunction_ns_chi02_uR::synapse0x3610740() {
   return (neuron0x35fe630()*-0.0578281);
}

double NNfunction_ns_chi02_uR::synapse0x3610780() {
   return (neuron0x35fe970()*-0.115343);
}

double NNfunction_ns_chi02_uR::synapse0x36107c0() {
   return (neuron0x35fecb0()*-0.0320187);
}

double NNfunction_ns_chi02_uR::synapse0x3610800() {
   return (neuron0x35feff0()*-0.0449099);
}

double NNfunction_ns_chi02_uR::synapse0x3610840() {
   return (neuron0x35ff330()*-0.0244952);
}

double NNfunction_ns_chi02_uR::synapse0x3610880() {
   return (neuron0x35ff670()*-0.175662);
}

double NNfunction_ns_chi02_uR::synapse0x3610c00() {
   return (neuron0x35faa20()*0.501372);
}

double NNfunction_ns_chi02_uR::synapse0x3610c40() {
   return (neuron0x35facd0()*0.143317);
}

double NNfunction_ns_chi02_uR::synapse0x3610c80() {
   return (neuron0x35fb010()*-0.106066);
}

double NNfunction_ns_chi02_uR::synapse0x3610cc0() {
   return (neuron0x35fb350()*-1.30084);
}

double NNfunction_ns_chi02_uR::synapse0x3610d00() {
   return (neuron0x35fb690()*0.921065);
}

double NNfunction_ns_chi02_uR::synapse0x3610d40() {
   return (neuron0x35fb9d0()*-2.06665);
}

double NNfunction_ns_chi02_uR::synapse0x3610d80() {
   return (neuron0x35fbd10()*0.652887);
}

double NNfunction_ns_chi02_uR::synapse0x3610dc0() {
   return (neuron0x35fc050()*1.20815);
}

double NNfunction_ns_chi02_uR::synapse0x3610e00() {
   return (neuron0x35fc390()*-0.397766);
}

double NNfunction_ns_chi02_uR::synapse0x3610e40() {
   return (neuron0x35fc6d0()*0.54134);
}

double NNfunction_ns_chi02_uR::synapse0x3610e80() {
   return (neuron0x35fca10()*-0.189463);
}

double NNfunction_ns_chi02_uR::synapse0x3610ec0() {
   return (neuron0x35fcd50()*-1.35953);
}

double NNfunction_ns_chi02_uR::synapse0x3610f00() {
   return (neuron0x35fd090()*-0.389622);
}

double NNfunction_ns_chi02_uR::synapse0x3610f40() {
   return (neuron0x35fd3d0()*-0.258302);
}

double NNfunction_ns_chi02_uR::synapse0x3610f80() {
   return (neuron0x35fd710()*0.460132);
}

double NNfunction_ns_chi02_uR::synapse0x3610fc0() {
   return (neuron0x35fda50()*-0.100937);
}

double NNfunction_ns_chi02_uR::synapse0x3610a50() {
   return (neuron0x35fdd90()*-0.129171);
}

double NNfunction_ns_chi02_uR::synapse0x3610a90() {
   return (neuron0x35fe2f0()*-0.295455);
}

double NNfunction_ns_chi02_uR::synapse0x3611110() {
   return (neuron0x35fe630()*-1.3211);
}

double NNfunction_ns_chi02_uR::synapse0x3611150() {
   return (neuron0x35fe970()*-0.283311);
}

double NNfunction_ns_chi02_uR::synapse0x3611190() {
   return (neuron0x35fecb0()*-0.588856);
}

double NNfunction_ns_chi02_uR::synapse0x36111d0() {
   return (neuron0x35feff0()*1.13791);
}

double NNfunction_ns_chi02_uR::synapse0x3611210() {
   return (neuron0x35ff330()*0.454511);
}

double NNfunction_ns_chi02_uR::synapse0x3611250() {
   return (neuron0x35ff670()*0.313863);
}

double NNfunction_ns_chi02_uR::synapse0x3623120() {
   return (neuron0x35faa20()*0.296506);
}

double NNfunction_ns_chi02_uR::synapse0x3623160() {
   return (neuron0x35facd0()*-0.592183);
}

double NNfunction_ns_chi02_uR::synapse0x36231a0() {
   return (neuron0x35fb010()*-0.0324907);
}

double NNfunction_ns_chi02_uR::synapse0x36231e0() {
   return (neuron0x35fb350()*-0.526816);
}

double NNfunction_ns_chi02_uR::synapse0x3623220() {
   return (neuron0x35fb690()*0.310642);
}

double NNfunction_ns_chi02_uR::synapse0x3623260() {
   return (neuron0x35fb9d0()*0.512402);
}

double NNfunction_ns_chi02_uR::synapse0x36232a0() {
   return (neuron0x35fbd10()*0.00198321);
}

double NNfunction_ns_chi02_uR::synapse0x36232e0() {
   return (neuron0x35fc050()*0.260392);
}

double NNfunction_ns_chi02_uR::synapse0x3623320() {
   return (neuron0x35fc390()*0.0642341);
}

double NNfunction_ns_chi02_uR::synapse0x3623360() {
   return (neuron0x35fc6d0()*-0.0998152);
}

double NNfunction_ns_chi02_uR::synapse0x36233a0() {
   return (neuron0x35fca10()*0.486298);
}

double NNfunction_ns_chi02_uR::synapse0x36233e0() {
   return (neuron0x35fcd50()*0.397259);
}

double NNfunction_ns_chi02_uR::synapse0x3623420() {
   return (neuron0x35fd090()*-2.42315);
}

double NNfunction_ns_chi02_uR::synapse0x3623460() {
   return (neuron0x35fd3d0()*0.212782);
}

double NNfunction_ns_chi02_uR::synapse0x36234a0() {
   return (neuron0x35fd710()*0.460206);
}

double NNfunction_ns_chi02_uR::synapse0x36234e0() {
   return (neuron0x35fda50()*-0.256206);
}

double NNfunction_ns_chi02_uR::synapse0x3611290() {
   return (neuron0x35fdd90()*0.36268);
}

double NNfunction_ns_chi02_uR::synapse0x36112d0() {
   return (neuron0x35fe2f0()*-0.128063);
}

double NNfunction_ns_chi02_uR::synapse0x3623630() {
   return (neuron0x35fe630()*-0.0458577);
}

double NNfunction_ns_chi02_uR::synapse0x3623670() {
   return (neuron0x35fe970()*-0.321863);
}

double NNfunction_ns_chi02_uR::synapse0x36236b0() {
   return (neuron0x35fecb0()*-0.445824);
}

double NNfunction_ns_chi02_uR::synapse0x36236f0() {
   return (neuron0x35feff0()*-0.0709849);
}

double NNfunction_ns_chi02_uR::synapse0x3623730() {
   return (neuron0x35ff330()*0.31378);
}

double NNfunction_ns_chi02_uR::synapse0x3623770() {
   return (neuron0x35ff670()*-1.98251);
}

double NNfunction_ns_chi02_uR::synapse0x3623af0() {
   return (neuron0x35faa20()*0.120141);
}

double NNfunction_ns_chi02_uR::synapse0x3623b30() {
   return (neuron0x35facd0()*-0.670429);
}

double NNfunction_ns_chi02_uR::synapse0x3623b70() {
   return (neuron0x35fb010()*0.258919);
}

double NNfunction_ns_chi02_uR::synapse0x3623bb0() {
   return (neuron0x35fb350()*0.280575);
}

double NNfunction_ns_chi02_uR::synapse0x3623bf0() {
   return (neuron0x35fb690()*0.226876);
}

double NNfunction_ns_chi02_uR::synapse0x3623c30() {
   return (neuron0x35fb9d0()*0.434445);
}

double NNfunction_ns_chi02_uR::synapse0x3623c70() {
   return (neuron0x35fbd10()*-0.701737);
}

double NNfunction_ns_chi02_uR::synapse0x3623cb0() {
   return (neuron0x35fc050()*0.0121323);
}

double NNfunction_ns_chi02_uR::synapse0x3623cf0() {
   return (neuron0x35fc390()*-0.741557);
}

double NNfunction_ns_chi02_uR::synapse0x3623d30() {
   return (neuron0x35fc6d0()*0.249489);
}

double NNfunction_ns_chi02_uR::synapse0x3623d70() {
   return (neuron0x35fca10()*0.282035);
}

double NNfunction_ns_chi02_uR::synapse0x3623db0() {
   return (neuron0x35fcd50()*-0.0610408);
}

double NNfunction_ns_chi02_uR::synapse0x3623df0() {
   return (neuron0x35fd090()*0.0199377);
}

double NNfunction_ns_chi02_uR::synapse0x3623e30() {
   return (neuron0x35fd3d0()*-0.0501109);
}

double NNfunction_ns_chi02_uR::synapse0x3623e70() {
   return (neuron0x35fd710()*0.0778881);
}

double NNfunction_ns_chi02_uR::synapse0x3623eb0() {
   return (neuron0x35fda50()*-0.503266);
}

double NNfunction_ns_chi02_uR::synapse0x3623940() {
   return (neuron0x35fdd90()*-0.567574);
}

double NNfunction_ns_chi02_uR::synapse0x3623980() {
   return (neuron0x35fe2f0()*-0.155695);
}

double NNfunction_ns_chi02_uR::synapse0x3624000() {
   return (neuron0x35fe630()*0.308455);
}

double NNfunction_ns_chi02_uR::synapse0x3624040() {
   return (neuron0x35fe970()*-0.150824);
}

double NNfunction_ns_chi02_uR::synapse0x3624080() {
   return (neuron0x35fecb0()*0.725291);
}

double NNfunction_ns_chi02_uR::synapse0x36240c0() {
   return (neuron0x35feff0()*0.00180738);
}

double NNfunction_ns_chi02_uR::synapse0x3624100() {
   return (neuron0x35ff330()*-0.296153);
}

double NNfunction_ns_chi02_uR::synapse0x3624140() {
   return (neuron0x35ff670()*-0.633122);
}

double NNfunction_ns_chi02_uR::synapse0x36244c0() {
   return (neuron0x35faa20()*-2.21935);
}

double NNfunction_ns_chi02_uR::synapse0x3624500() {
   return (neuron0x35facd0()*0.166136);
}

double NNfunction_ns_chi02_uR::synapse0x3624540() {
   return (neuron0x35fb010()*-0.0673313);
}

double NNfunction_ns_chi02_uR::synapse0x3624580() {
   return (neuron0x35fb350()*0.295472);
}

double NNfunction_ns_chi02_uR::synapse0x36245c0() {
   return (neuron0x35fb690()*0.683627);
}

double NNfunction_ns_chi02_uR::synapse0x3624600() {
   return (neuron0x35fb9d0()*-0.578694);
}

double NNfunction_ns_chi02_uR::synapse0x3624640() {
   return (neuron0x35fbd10()*0.222119);
}

double NNfunction_ns_chi02_uR::synapse0x3624680() {
   return (neuron0x35fc050()*0.215301);
}

double NNfunction_ns_chi02_uR::synapse0x36246c0() {
   return (neuron0x35fc390()*0.343291);
}

double NNfunction_ns_chi02_uR::synapse0x3624700() {
   return (neuron0x35fc6d0()*-0.0878146);
}

double NNfunction_ns_chi02_uR::synapse0x3624740() {
   return (neuron0x35fca10()*-0.54824);
}

double NNfunction_ns_chi02_uR::synapse0x3624780() {
   return (neuron0x35fcd50()*-0.147851);
}

double NNfunction_ns_chi02_uR::synapse0x36247c0() {
   return (neuron0x35fd090()*-0.581504);
}

double NNfunction_ns_chi02_uR::synapse0x3624800() {
   return (neuron0x35fd3d0()*0.0746523);
}

double NNfunction_ns_chi02_uR::synapse0x3624840() {
   return (neuron0x35fd710()*-0.464104);
}

double NNfunction_ns_chi02_uR::synapse0x3624880() {
   return (neuron0x35fda50()*-0.332574);
}

double NNfunction_ns_chi02_uR::synapse0x3624310() {
   return (neuron0x35fdd90()*0.0200164);
}

double NNfunction_ns_chi02_uR::synapse0x3624350() {
   return (neuron0x35fe2f0()*-0.697059);
}

double NNfunction_ns_chi02_uR::synapse0x36249d0() {
   return (neuron0x35fe630()*0.214726);
}

double NNfunction_ns_chi02_uR::synapse0x3624a10() {
   return (neuron0x35fe970()*0.444564);
}

double NNfunction_ns_chi02_uR::synapse0x3624a50() {
   return (neuron0x35fecb0()*0.391719);
}

double NNfunction_ns_chi02_uR::synapse0x3624a90() {
   return (neuron0x35feff0()*-0.140024);
}

double NNfunction_ns_chi02_uR::synapse0x3624ad0() {
   return (neuron0x35ff330()*-0.449735);
}

double NNfunction_ns_chi02_uR::synapse0x3624b10() {
   return (neuron0x35ff670()*-1.77409);
}

double NNfunction_ns_chi02_uR::synapse0x3624e90() {
   return (neuron0x35faa20()*0.0458418);
}

double NNfunction_ns_chi02_uR::synapse0x3624ed0() {
   return (neuron0x35facd0()*-1.16642);
}

double NNfunction_ns_chi02_uR::synapse0x3624f10() {
   return (neuron0x35fb010()*0.334799);
}

double NNfunction_ns_chi02_uR::synapse0x3624f50() {
   return (neuron0x35fb350()*0.540332);
}

double NNfunction_ns_chi02_uR::synapse0x3624f90() {
   return (neuron0x35fb690()*-0.983405);
}

double NNfunction_ns_chi02_uR::synapse0x3624fd0() {
   return (neuron0x35fb9d0()*1.96399);
}

double NNfunction_ns_chi02_uR::synapse0x3625010() {
   return (neuron0x35fbd10()*0.139383);
}

double NNfunction_ns_chi02_uR::synapse0x3625050() {
   return (neuron0x35fc050()*0.508757);
}

double NNfunction_ns_chi02_uR::synapse0x3625090() {
   return (neuron0x35fc390()*1.03612);
}

double NNfunction_ns_chi02_uR::synapse0x36250d0() {
   return (neuron0x35fc6d0()*-0.694641);
}

double NNfunction_ns_chi02_uR::synapse0x3625110() {
   return (neuron0x35fca10()*0.129659);
}

double NNfunction_ns_chi02_uR::synapse0x3625150() {
   return (neuron0x35fcd50()*1.4556);
}

double NNfunction_ns_chi02_uR::synapse0x3625190() {
   return (neuron0x35fd090()*0.0805217);
}

double NNfunction_ns_chi02_uR::synapse0x36251d0() {
   return (neuron0x35fd3d0()*1.27125);
}

double NNfunction_ns_chi02_uR::synapse0x3625210() {
   return (neuron0x35fd710()*-0.502656);
}

double NNfunction_ns_chi02_uR::synapse0x3625250() {
   return (neuron0x35fda50()*1.95528);
}

double NNfunction_ns_chi02_uR::synapse0x3624ce0() {
   return (neuron0x35fdd90()*0.1271);
}

double NNfunction_ns_chi02_uR::synapse0x3624d20() {
   return (neuron0x35fe2f0()*-0.36786);
}

double NNfunction_ns_chi02_uR::synapse0x36253a0() {
   return (neuron0x35fe630()*0.573055);
}

double NNfunction_ns_chi02_uR::synapse0x36253e0() {
   return (neuron0x35fe970()*-0.973453);
}

double NNfunction_ns_chi02_uR::synapse0x3625420() {
   return (neuron0x35fecb0()*0.109024);
}

double NNfunction_ns_chi02_uR::synapse0x3625460() {
   return (neuron0x35feff0()*0.921732);
}

double NNfunction_ns_chi02_uR::synapse0x36254a0() {
   return (neuron0x35ff330()*-1.04109);
}

double NNfunction_ns_chi02_uR::synapse0x36254e0() {
   return (neuron0x35ff670()*-0.666749);
}

double NNfunction_ns_chi02_uR::synapse0x3600930() {
   return (neuron0x35ffae0()*-0.0104411);
}

double NNfunction_ns_chi02_uR::synapse0x3600970() {
   return (neuron0x3600320()*-0.013331);
}

double NNfunction_ns_chi02_uR::synapse0x3601e90() {
   return (neuron0x3600e00()*0.788166);
}

double NNfunction_ns_chi02_uR::synapse0x3601ed0() {
   return (neuron0x33c5220()*0.190132);
}

double NNfunction_ns_chi02_uR::synapse0x3603960() {
   return (neuron0x3601be0()*0.0184546);
}

double NNfunction_ns_chi02_uR::synapse0x36039a0() {
   return (neuron0x36036b0()*-0.239699);
}

double NNfunction_ns_chi02_uR::synapse0x3604730() {
   return (neuron0x3604480()*1.48724);
}

double NNfunction_ns_chi02_uR::synapse0x3604770() {
   return (neuron0x3604e50()*-0.033275);
}

double NNfunction_ns_chi02_uR::synapse0x3605100() {
   return (neuron0x3605820()*-0.035158);
}

double NNfunction_ns_chi02_uR::synapse0x3605140() {
   return (neuron0x3606300()*0.27426);
}

double NNfunction_ns_chi02_uR::synapse0x3605ad0() {
   return (neuron0x3606cd0()*0.123183);
}

double NNfunction_ns_chi02_uR::synapse0x3605b10() {
   return (neuron0x3603db0()*4.74366);
}

double NNfunction_ns_chi02_uR::synapse0x36065b0() {
   return (neuron0x3608880()*-0.00496782);
}

double NNfunction_ns_chi02_uR::synapse0x36065f0() {
   return (neuron0x3609250()*-0.0449702);
}

double NNfunction_ns_chi02_uR::synapse0x3606f80() {
   return (neuron0x3609c20()*1.29477);
}

double NNfunction_ns_chi02_uR::synapse0x3606fc0() {
   return (neuron0x360a5f0()*-0.0109512);
}

double NNfunction_ns_chi02_uR::synapse0x3604060() {
   return (neuron0x360c400()*2.1516);
}

double NNfunction_ns_chi02_uR::synapse0x36040a0() {
   return (neuron0x360c6e0()*-0.0121488);
}

double NNfunction_ns_chi02_uR::synapse0x3608b30() {
   return (neuron0x360d0b0()*0.0138829);
}

double NNfunction_ns_chi02_uR::synapse0x3608b70() {
   return (neuron0x360da80()*0.0789357);
}

double NNfunction_ns_chi02_uR::synapse0x3609500() {
   return (neuron0x360e450()*1.85553);
}

double NNfunction_ns_chi02_uR::synapse0x3609540() {
   return (neuron0x360ee20()*-0.366437);
}

double NNfunction_ns_chi02_uR::synapse0x3609ed0() {
   return (neuron0x3607970()*0.251608);
}

double NNfunction_ns_chi02_uR::synapse0x3609f10() {
   return (neuron0x3608340()*0.00315426);
}

double NNfunction_ns_chi02_uR::synapse0x360a8a0() {
   return (neuron0x3611bb0()*0.0184855);
}

double NNfunction_ns_chi02_uR::synapse0x360a8e0() {
   return (neuron0x3612580()*0.0140432);
}

double NNfunction_ns_chi02_uR::synapse0x35fd930() {
   return (neuron0x3612f50()*0.255818);
}

double NNfunction_ns_chi02_uR::synapse0x35fd970() {
   return (neuron0x3613920()*-0.186272);
}

double NNfunction_ns_chi02_uR::synapse0x360c990() {
   return (neuron0x36142f0()*-0.00318342);
}

double NNfunction_ns_chi02_uR::synapse0x360c9d0() {
   return (neuron0x3614cc0()*-3.98845);
}

double NNfunction_ns_chi02_uR::synapse0x360d360() {
   return (neuron0x3615690()*0.00461356);
}

double NNfunction_ns_chi02_uR::synapse0x360d3a0() {
   return (neuron0x3616060()*0.219939);
}

double NNfunction_ns_chi02_uR::synapse0x360dd30() {
   return (neuron0x360c0f0()*1.33061);
}

double NNfunction_ns_chi02_uR::synapse0x360dd70() {
   return (neuron0x3618c40()*-0.303442);
}

double NNfunction_ns_chi02_uR::synapse0x360e700() {
   return (neuron0x3619610()*0.01881);
}

double NNfunction_ns_chi02_uR::synapse0x360e740() {
   return (neuron0x3619fe0()*-1.82386);
}

double NNfunction_ns_chi02_uR::synapse0x360f0d0() {
   return (neuron0x361a9b0()*-1.01757);
}

double NNfunction_ns_chi02_uR::synapse0x360f110() {
   return (neuron0x361b380()*0.0920402);
}

double NNfunction_ns_chi02_uR::synapse0x3607c20() {
   return (neuron0x361bd50()*0.0213815);
}

double NNfunction_ns_chi02_uR::synapse0x3607c60() {
   return (neuron0x361c720()*0.0353477);
}

double NNfunction_ns_chi02_uR::synapse0x36114d0() {
   return (neuron0x361d0f0()*-0.553116);
}

double NNfunction_ns_chi02_uR::synapse0x3611510() {
   return (neuron0x361dcd0()*0.0406471);
}

double NNfunction_ns_chi02_uR::synapse0x3611e60() {
   return (neuron0x361e6a0()*0.0046725);
}

double NNfunction_ns_chi02_uR::synapse0x3611ea0() {
   return (neuron0x360f520()*-0.107112);
}

double NNfunction_ns_chi02_uR::synapse0x3612830() {
   return (neuron0x360fef0()*-1.31656);
}

double NNfunction_ns_chi02_uR::synapse0x3612870() {
   return (neuron0x36108c0()*0.000316169);
}

double NNfunction_ns_chi02_uR::synapse0x3613200() {
   return (neuron0x3622f00()*-0.0135632);
}

double NNfunction_ns_chi02_uR::synapse0x3613240() {
   return (neuron0x36237b0()*0.0375961);
}

double NNfunction_ns_chi02_uR::synapse0x3613bd0() {
   return (neuron0x3624180()*0.00108245);
}

double NNfunction_ns_chi02_uR::synapse0x3613c10() {
   return (neuron0x3624b50()*0.00447176);
}

double NNfunction_ns_chi02_uR::synapse0x3616310() {
   return (neuron0x35ffae0()*-2.34524);
}

double NNfunction_ns_chi02_uR::synapse0x3616350() {
   return (neuron0x3600320()*1.64629);
}

double NNfunction_ns_chi02_uR::synapse0x360b8d0() {
   return (neuron0x3600e00()*-0.213916);
}

double NNfunction_ns_chi02_uR::synapse0x360b910() {
   return (neuron0x33c5220()*3.2069);
}

double NNfunction_ns_chi02_uR::synapse0x3618ef0() {
   return (neuron0x3601be0()*1.7324);
}

double NNfunction_ns_chi02_uR::synapse0x3618f30() {
   return (neuron0x36036b0()*1.67296);
}

double NNfunction_ns_chi02_uR::synapse0x36198c0() {
   return (neuron0x3604480()*-0.736684);
}

double NNfunction_ns_chi02_uR::synapse0x3619900() {
   return (neuron0x3604e50()*-1.76832);
}

double NNfunction_ns_chi02_uR::synapse0x361a290() {
   return (neuron0x3605820()*-6.01495);
}

double NNfunction_ns_chi02_uR::synapse0x361a2d0() {
   return (neuron0x3606300()*2.68265);
}

double NNfunction_ns_chi02_uR::synapse0x361ac60() {
   return (neuron0x3606cd0()*4.99354);
}

double NNfunction_ns_chi02_uR::synapse0x361aca0() {
   return (neuron0x3603db0()*2.42121);
}

double NNfunction_ns_chi02_uR::synapse0x361b630() {
   return (neuron0x3608880()*1.707);
}

double NNfunction_ns_chi02_uR::synapse0x361b670() {
   return (neuron0x3609250()*-2.17144);
}

double NNfunction_ns_chi02_uR::synapse0x361c000() {
   return (neuron0x3609c20()*1.0455);
}

double NNfunction_ns_chi02_uR::synapse0x361c040() {
   return (neuron0x360a5f0()*1.24817);
}

double NNfunction_ns_chi02_uR::synapse0x361c9d0() {
   return (neuron0x360c400()*-0.0591146);
}

double NNfunction_ns_chi02_uR::synapse0x361ca10() {
   return (neuron0x360c6e0()*1.09966);
}

double NNfunction_ns_chi02_uR::synapse0x361d3a0() {
   return (neuron0x360d0b0()*1.59215);
}

double NNfunction_ns_chi02_uR::synapse0x361d3e0() {
   return (neuron0x360da80()*-5.40777);
}

double NNfunction_ns_chi02_uR::synapse0x361df80() {
   return (neuron0x360e450()*4.92351);
}

double NNfunction_ns_chi02_uR::synapse0x361dfc0() {
   return (neuron0x360ee20()*-2.96296);
}

double NNfunction_ns_chi02_uR::synapse0x361e950() {
   return (neuron0x3607970()*1.49287);
}

double NNfunction_ns_chi02_uR::synapse0x361e990() {
   return (neuron0x3608340()*-1.44189);
}

double NNfunction_ns_chi02_uR::synapse0x360f7d0() {
   return (neuron0x3611bb0()*1.48065);
}

double NNfunction_ns_chi02_uR::synapse0x360f810() {
   return (neuron0x3612580()*1.65883);
}

double NNfunction_ns_chi02_uR::synapse0x36101a0() {
   return (neuron0x3612f50()*-4.01869);
}

double NNfunction_ns_chi02_uR::synapse0x36101e0() {
   return (neuron0x3613920()*-2.30021);
}

double NNfunction_ns_chi02_uR::synapse0x3610b70() {
   return (neuron0x36142f0()*-1.57188);
}

double NNfunction_ns_chi02_uR::synapse0x3610bb0() {
   return (neuron0x3614cc0()*-0.292732);
}

double NNfunction_ns_chi02_uR::synapse0x3623090() {
   return (neuron0x3615690()*1.10374);
}

double NNfunction_ns_chi02_uR::synapse0x36230d0() {
   return (neuron0x3616060()*-3.63763);
}

double NNfunction_ns_chi02_uR::synapse0x3623a60() {
   return (neuron0x360c0f0()*1.0188);
}

double NNfunction_ns_chi02_uR::synapse0x3623aa0() {
   return (neuron0x3618c40()*1.43452);
}

double NNfunction_ns_chi02_uR::synapse0x3624430() {
   return (neuron0x3619610()*1.94909);
}

double NNfunction_ns_chi02_uR::synapse0x3624470() {
   return (neuron0x3619fe0()*-0.372247);
}

double NNfunction_ns_chi02_uR::synapse0x3624e00() {
   return (neuron0x361a9b0()*0.331119);
}

double NNfunction_ns_chi02_uR::synapse0x3624e40() {
   return (neuron0x361b380()*-2.42744);
}

double NNfunction_ns_chi02_uR::synapse0x35ffd90() {
   return (neuron0x361bd50()*1.7514);
}

double NNfunction_ns_chi02_uR::synapse0x35ffdd0() {
   return (neuron0x361c720()*1.94344);
}

double NNfunction_ns_chi02_uR::synapse0x36145a0() {
   return (neuron0x361d0f0()*1.05834);
}

double NNfunction_ns_chi02_uR::synapse0x36145e0() {
   return (neuron0x361dcd0()*1.67717);
}

double NNfunction_ns_chi02_uR::synapse0x3625520() {
   return (neuron0x361e6a0()*1.91029);
}

double NNfunction_ns_chi02_uR::synapse0x3625560() {
   return (neuron0x360f520()*-1.30765);
}

double NNfunction_ns_chi02_uR::synapse0x36255a0() {
   return (neuron0x360fef0()*0.189615);
}

double NNfunction_ns_chi02_uR::synapse0x36255e0() {
   return (neuron0x36108c0()*1.92154);
}

double NNfunction_ns_chi02_uR::synapse0x362c490() {
   return (neuron0x3622f00()*1.12584);
}

double NNfunction_ns_chi02_uR::synapse0x362c4d0() {
   return (neuron0x36237b0()*2.85524);
}

double NNfunction_ns_chi02_uR::synapse0x362c510() {
   return (neuron0x3624180()*1.51236);
}

double NNfunction_ns_chi02_uR::synapse0x362c550() {
   return (neuron0x3624b50()*1.40867);
}

double NNfunction_ns_chi02_uR::synapse0x362c8d0() {
   return (neuron0x35ffae0()*0.806022);
}

double NNfunction_ns_chi02_uR::synapse0x362c910() {
   return (neuron0x3600320()*-0.0452237);
}

double NNfunction_ns_chi02_uR::synapse0x362c950() {
   return (neuron0x3600e00()*-0.215409);
}

double NNfunction_ns_chi02_uR::synapse0x362c990() {
   return (neuron0x33c5220()*-3.909);
}

double NNfunction_ns_chi02_uR::synapse0x362c9d0() {
   return (neuron0x3601be0()*-0.0584207);
}

double NNfunction_ns_chi02_uR::synapse0x362ca10() {
   return (neuron0x36036b0()*-1.23021);
}

double NNfunction_ns_chi02_uR::synapse0x362ca50() {
   return (neuron0x3604480()*-2.04614);
}

double NNfunction_ns_chi02_uR::synapse0x362ca90() {
   return (neuron0x3604e50()*0.00589034);
}

double NNfunction_ns_chi02_uR::synapse0x362cad0() {
   return (neuron0x3605820()*-0.0813695);
}

double NNfunction_ns_chi02_uR::synapse0x362cb10() {
   return (neuron0x3606300()*-3.43174);
}

double NNfunction_ns_chi02_uR::synapse0x362cb50() {
   return (neuron0x3606cd0()*0.297427);
}

double NNfunction_ns_chi02_uR::synapse0x362cb90() {
   return (neuron0x3603db0()*-0.593779);
}

double NNfunction_ns_chi02_uR::synapse0x362cbd0() {
   return (neuron0x3608880()*0.156022);
}

double NNfunction_ns_chi02_uR::synapse0x362cc10() {
   return (neuron0x3609250()*-0.0535883);
}

double NNfunction_ns_chi02_uR::synapse0x362cc50() {
   return (neuron0x3609c20()*1.16952);
}

double NNfunction_ns_chi02_uR::synapse0x362cc90() {
   return (neuron0x360a5f0()*0.0382038);
}

double NNfunction_ns_chi02_uR::synapse0x362c720() {
   return (neuron0x360c400()*-1.68799);
}

double NNfunction_ns_chi02_uR::synapse0x362c760() {
   return (neuron0x360c6e0()*0.0497699);
}

double NNfunction_ns_chi02_uR::synapse0x362cde0() {
   return (neuron0x360d0b0()*-0.00935414);
}

double NNfunction_ns_chi02_uR::synapse0x362ce20() {
   return (neuron0x360da80()*-0.348669);
}

double NNfunction_ns_chi02_uR::synapse0x362ce60() {
   return (neuron0x360e450()*5.00311);
}

double NNfunction_ns_chi02_uR::synapse0x362cea0() {
   return (neuron0x360ee20()*0.475851);
}

double NNfunction_ns_chi02_uR::synapse0x362cee0() {
   return (neuron0x3607970()*0.328078);
}

double NNfunction_ns_chi02_uR::synapse0x362cf20() {
   return (neuron0x3608340()*-0.0659987);
}

double NNfunction_ns_chi02_uR::synapse0x362cf60() {
   return (neuron0x3611bb0()*-0.00698486);
}

double NNfunction_ns_chi02_uR::synapse0x362cfa0() {
   return (neuron0x3612580()*0.123096);
}

double NNfunction_ns_chi02_uR::synapse0x362cfe0() {
   return (neuron0x3612f50()*1.23734);
}

double NNfunction_ns_chi02_uR::synapse0x362d020() {
   return (neuron0x3613920()*3.2729);
}

double NNfunction_ns_chi02_uR::synapse0x362d060() {
   return (neuron0x36142f0()*-0.0422052);
}

double NNfunction_ns_chi02_uR::synapse0x362d0a0() {
   return (neuron0x3614cc0()*2.96664);
}

double NNfunction_ns_chi02_uR::synapse0x362d0e0() {
   return (neuron0x3615690()*0.0468895);
}

double NNfunction_ns_chi02_uR::synapse0x362d120() {
   return (neuron0x3616060()*-1.84508);
}

double NNfunction_ns_chi02_uR::synapse0x362ccd0() {
   return (neuron0x360c0f0()*4.08774);
}

double NNfunction_ns_chi02_uR::synapse0x362cd10() {
   return (neuron0x3618c40()*0.0606845);
}

double NNfunction_ns_chi02_uR::synapse0x362cd50() {
   return (neuron0x3619610()*0.0556999);
}

double NNfunction_ns_chi02_uR::synapse0x362cd90() {
   return (neuron0x3619fe0()*1.38238);
}

double NNfunction_ns_chi02_uR::synapse0x362d370() {
   return (neuron0x361a9b0()*2.97704);
}

double NNfunction_ns_chi02_uR::synapse0x362d3b0() {
   return (neuron0x361b380()*-2.63542);
}

double NNfunction_ns_chi02_uR::synapse0x362d3f0() {
   return (neuron0x361bd50()*-0.0309201);
}

double NNfunction_ns_chi02_uR::synapse0x362d430() {
   return (neuron0x361c720()*-0.0351674);
}

double NNfunction_ns_chi02_uR::synapse0x362d470() {
   return (neuron0x361d0f0()*0.447617);
}

double NNfunction_ns_chi02_uR::synapse0x362d4b0() {
   return (neuron0x361dcd0()*-0.00420682);
}

double NNfunction_ns_chi02_uR::synapse0x362d4f0() {
   return (neuron0x361e6a0()*0.0869021);
}

double NNfunction_ns_chi02_uR::synapse0x362d530() {
   return (neuron0x360f520()*-0.0539934);
}

double NNfunction_ns_chi02_uR::synapse0x362d570() {
   return (neuron0x360fef0()*0.446985);
}

double NNfunction_ns_chi02_uR::synapse0x362d5b0() {
   return (neuron0x36108c0()*0.0258208);
}

double NNfunction_ns_chi02_uR::synapse0x362d5f0() {
   return (neuron0x3622f00()*-0.0345061);
}

double NNfunction_ns_chi02_uR::synapse0x362d630() {
   return (neuron0x36237b0()*-0.129888);
}

double NNfunction_ns_chi02_uR::synapse0x362d670() {
   return (neuron0x3624180()*-0.00660861);
}

double NNfunction_ns_chi02_uR::synapse0x362d6b0() {
   return (neuron0x3624b50()*-0.0318052);
}

double NNfunction_ns_chi02_uR::synapse0x362da30() {
   return (neuron0x35ffae0()*-0.154872);
}

double NNfunction_ns_chi02_uR::synapse0x362da70() {
   return (neuron0x3600320()*0.0884218);
}

double NNfunction_ns_chi02_uR::synapse0x362dab0() {
   return (neuron0x3600e00()*-3.11416);
}

double NNfunction_ns_chi02_uR::synapse0x362daf0() {
   return (neuron0x33c5220()*0.294741);
}

double NNfunction_ns_chi02_uR::synapse0x362db30() {
   return (neuron0x3601be0()*0.0283101);
}

double NNfunction_ns_chi02_uR::synapse0x362db70() {
   return (neuron0x36036b0()*-1.68475);
}

double NNfunction_ns_chi02_uR::synapse0x362dbb0() {
   return (neuron0x3604480()*-1.84391);
}

double NNfunction_ns_chi02_uR::synapse0x362dbf0() {
   return (neuron0x3604e50()*-0.200447);
}

double NNfunction_ns_chi02_uR::synapse0x362dc30() {
   return (neuron0x3605820()*-0.128872);
}

double NNfunction_ns_chi02_uR::synapse0x362dc70() {
   return (neuron0x3606300()*0.664796);
}

double NNfunction_ns_chi02_uR::synapse0x362dcb0() {
   return (neuron0x3606cd0()*0.153463);
}

double NNfunction_ns_chi02_uR::synapse0x362dcf0() {
   return (neuron0x3603db0()*-3.54312);
}

double NNfunction_ns_chi02_uR::synapse0x362dd30() {
   return (neuron0x3608880()*0.228673);
}

double NNfunction_ns_chi02_uR::synapse0x362dd70() {
   return (neuron0x3609250()*-0.0789361);
}

double NNfunction_ns_chi02_uR::synapse0x362ddb0() {
   return (neuron0x3609c20()*-0.309019);
}

double NNfunction_ns_chi02_uR::synapse0x362ddf0() {
   return (neuron0x360a5f0()*0.0448656);
}

double NNfunction_ns_chi02_uR::synapse0x362d880() {
   return (neuron0x360c400()*-4.98704);
}

double NNfunction_ns_chi02_uR::synapse0x362d8c0() {
   return (neuron0x360c6e0()*0.324582);
}

double NNfunction_ns_chi02_uR::synapse0x362df40() {
   return (neuron0x360d0b0()*0.113563);
}

double NNfunction_ns_chi02_uR::synapse0x362df80() {
   return (neuron0x360da80()*-0.501276);
}

double NNfunction_ns_chi02_uR::synapse0x362dfc0() {
   return (neuron0x360e450()*0.786239);
}

double NNfunction_ns_chi02_uR::synapse0x362e000() {
   return (neuron0x360ee20()*-1.49819);
}

double NNfunction_ns_chi02_uR::synapse0x362e040() {
   return (neuron0x3607970()*0.622828);
}

double NNfunction_ns_chi02_uR::synapse0x362e080() {
   return (neuron0x3608340()*-0.303867);
}

double NNfunction_ns_chi02_uR::synapse0x362e0c0() {
   return (neuron0x3611bb0()*0.028268);
}

double NNfunction_ns_chi02_uR::synapse0x362e100() {
   return (neuron0x3612580()*0.0451541);
}

double NNfunction_ns_chi02_uR::synapse0x362e140() {
   return (neuron0x3612f50()*-1.17839);
}

double NNfunction_ns_chi02_uR::synapse0x362e180() {
   return (neuron0x3613920()*0.0953753);
}

double NNfunction_ns_chi02_uR::synapse0x362e1c0() {
   return (neuron0x36142f0()*-0.201522);
}

double NNfunction_ns_chi02_uR::synapse0x362e200() {
   return (neuron0x3614cc0()*0.890477);
}

double NNfunction_ns_chi02_uR::synapse0x362e240() {
   return (neuron0x3615690()*-0.0176392);
}

double NNfunction_ns_chi02_uR::synapse0x362e280() {
   return (neuron0x3616060()*0.400058);
}

double NNfunction_ns_chi02_uR::synapse0x362de30() {
   return (neuron0x360c0f0()*1.37732);
}

double NNfunction_ns_chi02_uR::synapse0x362de70() {
   return (neuron0x3618c40()*0.123123);
}

double NNfunction_ns_chi02_uR::synapse0x362deb0() {
   return (neuron0x3619610()*0.109789);
}

double NNfunction_ns_chi02_uR::synapse0x362def0() {
   return (neuron0x3619fe0()*4.08755);
}

double NNfunction_ns_chi02_uR::synapse0x362e4d0() {
   return (neuron0x361a9b0()*-0.313432);
}

double NNfunction_ns_chi02_uR::synapse0x362e510() {
   return (neuron0x361b380()*-0.673431);
}

double NNfunction_ns_chi02_uR::synapse0x362e550() {
   return (neuron0x361bd50()*0.138902);
}

double NNfunction_ns_chi02_uR::synapse0x362e590() {
   return (neuron0x361c720()*0.129509);
}

double NNfunction_ns_chi02_uR::synapse0x362e5d0() {
   return (neuron0x361d0f0()*3.92765);
}

double NNfunction_ns_chi02_uR::synapse0x362e610() {
   return (neuron0x361dcd0()*0.178842);
}

double NNfunction_ns_chi02_uR::synapse0x362e650() {
   return (neuron0x361e6a0()*0.403049);
}

double NNfunction_ns_chi02_uR::synapse0x362e690() {
   return (neuron0x360f520()*-0.109619);
}

double NNfunction_ns_chi02_uR::synapse0x362e6d0() {
   return (neuron0x360fef0()*-1.62984);
}

double NNfunction_ns_chi02_uR::synapse0x362e710() {
   return (neuron0x36108c0()*-0.104158);
}

double NNfunction_ns_chi02_uR::synapse0x362e750() {
   return (neuron0x3622f00()*0.374668);
}

double NNfunction_ns_chi02_uR::synapse0x362e790() {
   return (neuron0x36237b0()*0.157349);
}

double NNfunction_ns_chi02_uR::synapse0x362e7d0() {
   return (neuron0x3624180()*-0.132183);
}

double NNfunction_ns_chi02_uR::synapse0x362e810() {
   return (neuron0x3624b50()*0.0233979);
}

double NNfunction_ns_chi02_uR::synapse0x362eb90() {
   return (neuron0x35ffae0()*-2.51084);
}

double NNfunction_ns_chi02_uR::synapse0x362ebd0() {
   return (neuron0x3600320()*0.116181);
}

double NNfunction_ns_chi02_uR::synapse0x362ec10() {
   return (neuron0x3600e00()*-1.19648);
}

double NNfunction_ns_chi02_uR::synapse0x362ec50() {
   return (neuron0x33c5220()*3.31598);
}

double NNfunction_ns_chi02_uR::synapse0x362ec90() {
   return (neuron0x3601be0()*0.0417446);
}

double NNfunction_ns_chi02_uR::synapse0x362ecd0() {
   return (neuron0x36036b0()*-1.43437);
}

double NNfunction_ns_chi02_uR::synapse0x362ed10() {
   return (neuron0x3604480()*-0.542306);
}

double NNfunction_ns_chi02_uR::synapse0x362ed50() {
   return (neuron0x3604e50()*0.129473);
}

double NNfunction_ns_chi02_uR::synapse0x362ed90() {
   return (neuron0x3605820()*8.57657);
}

double NNfunction_ns_chi02_uR::synapse0x362edd0() {
   return (neuron0x3606300()*4.66513);
}

double NNfunction_ns_chi02_uR::synapse0x362ee10() {
   return (neuron0x3606cd0()*-3.52862);
}

double NNfunction_ns_chi02_uR::synapse0x362ee50() {
   return (neuron0x3603db0()*-1.92574);
}

double NNfunction_ns_chi02_uR::synapse0x362ee90() {
   return (neuron0x3608880()*-0.0681395);
}

double NNfunction_ns_chi02_uR::synapse0x362eed0() {
   return (neuron0x3609250()*0.137697);
}

double NNfunction_ns_chi02_uR::synapse0x362ef10() {
   return (neuron0x3609c20()*-0.852088);
}

double NNfunction_ns_chi02_uR::synapse0x362ef50() {
   return (neuron0x360a5f0()*0.00529988);
}

double NNfunction_ns_chi02_uR::synapse0x362e9e0() {
   return (neuron0x360c400()*0.192953);
}

double NNfunction_ns_chi02_uR::synapse0x362ea20() {
   return (neuron0x360c6e0()*-0.0913396);
}

double NNfunction_ns_chi02_uR::synapse0x362f0a0() {
   return (neuron0x360d0b0()*0.0340674);
}

double NNfunction_ns_chi02_uR::synapse0x362f0e0() {
   return (neuron0x360da80()*1.64892);
}

double NNfunction_ns_chi02_uR::synapse0x362f120() {
   return (neuron0x360e450()*0.76385);
}

double NNfunction_ns_chi02_uR::synapse0x362f160() {
   return (neuron0x360ee20()*0.726055);
}

double NNfunction_ns_chi02_uR::synapse0x362f1a0() {
   return (neuron0x3607970()*-2.97992);
}

double NNfunction_ns_chi02_uR::synapse0x362f1e0() {
   return (neuron0x3608340()*0.0612268);
}

double NNfunction_ns_chi02_uR::synapse0x362f220() {
   return (neuron0x3611bb0()*-0.0840166);
}

double NNfunction_ns_chi02_uR::synapse0x362f260() {
   return (neuron0x3612580()*-0.301788);
}

double NNfunction_ns_chi02_uR::synapse0x362f2a0() {
   return (neuron0x3612f50()*-0.0501509);
}

double NNfunction_ns_chi02_uR::synapse0x362f2e0() {
   return (neuron0x3613920()*-1.20803);
}

double NNfunction_ns_chi02_uR::synapse0x362f320() {
   return (neuron0x36142f0()*0.100088);
}

double NNfunction_ns_chi02_uR::synapse0x362f360() {
   return (neuron0x3614cc0()*-0.355801);
}

double NNfunction_ns_chi02_uR::synapse0x362f3a0() {
   return (neuron0x3615690()*-0.161507);
}

double NNfunction_ns_chi02_uR::synapse0x362f3e0() {
   return (neuron0x3616060()*6.01299);
}

double NNfunction_ns_chi02_uR::synapse0x362ef90() {
   return (neuron0x360c0f0()*-1.9999);
}

double NNfunction_ns_chi02_uR::synapse0x362efd0() {
   return (neuron0x3618c40()*-2.30723);
}

double NNfunction_ns_chi02_uR::synapse0x362f010() {
   return (neuron0x3619610()*-0.0915959);
}

double NNfunction_ns_chi02_uR::synapse0x362f050() {
   return (neuron0x3619fe0()*0.173056);
}

double NNfunction_ns_chi02_uR::synapse0x362f630() {
   return (neuron0x361a9b0()*-3.1461);
}

double NNfunction_ns_chi02_uR::synapse0x362f670() {
   return (neuron0x361b380()*4.04359);
}

double NNfunction_ns_chi02_uR::synapse0x362f6b0() {
   return (neuron0x361bd50()*0.0761171);
}

double NNfunction_ns_chi02_uR::synapse0x362f6f0() {
   return (neuron0x361c720()*-0.0294223);
}

double NNfunction_ns_chi02_uR::synapse0x362f730() {
   return (neuron0x361d0f0()*-0.097576);
}

double NNfunction_ns_chi02_uR::synapse0x362f770() {
   return (neuron0x361dcd0()*-0.0525982);
}

double NNfunction_ns_chi02_uR::synapse0x362f7b0() {
   return (neuron0x361e6a0()*-0.0124332);
}

double NNfunction_ns_chi02_uR::synapse0x362f7f0() {
   return (neuron0x360f520()*-4.94988);
}

double NNfunction_ns_chi02_uR::synapse0x362f830() {
   return (neuron0x360fef0()*0.0516052);
}

double NNfunction_ns_chi02_uR::synapse0x362f870() {
   return (neuron0x36108c0()*-0.0506502);
}

double NNfunction_ns_chi02_uR::synapse0x362f8b0() {
   return (neuron0x3622f00()*0.0368282);
}

double NNfunction_ns_chi02_uR::synapse0x362f8f0() {
   return (neuron0x36237b0()*-0.10091);
}

double NNfunction_ns_chi02_uR::synapse0x362f930() {
   return (neuron0x3624180()*-0.0989399);
}

double NNfunction_ns_chi02_uR::synapse0x362f970() {
   return (neuron0x3624b50()*-0.000503528);
}

double NNfunction_ns_chi02_uR::synapse0x362fbd0() {
   return (neuron0x362bd50()*-12.727);
}

double NNfunction_ns_chi02_uR::synapse0x362fc10() {
   return (neuron0x362c0f0()*7.98988);
}

double NNfunction_ns_chi02_uR::synapse0x362fc50() {
   return (neuron0x362c590()*-4.72479);
}

double NNfunction_ns_chi02_uR::synapse0x362fc90() {
   return (neuron0x362d6f0()*5.86572);
}

double NNfunction_ns_chi02_uR::synapse0x362fcd0() {
   return (neuron0x362e850()*-3.4864);
}

