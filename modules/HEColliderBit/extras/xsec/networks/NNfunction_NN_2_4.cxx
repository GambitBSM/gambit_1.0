#include "NNfunction_NN_2_4.h"
#include <cmath>

double NNfunction_NN_2_4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5189)/15.2384;
   input1 = (in1 - -1.22412)/239.361;
   input2 = (in2 - 236.567)/199.825;
   input3 = (in3 - -23.3268)/853.991;
   input4 = (in4 - 1060.13)/910.802;
   input5 = (in5 - 941.733)/952.19;
   input6 = (in6 - 949.188)/953.506;
   input7 = (in7 - 961.734)/932.589;
   input8 = (in8 - 942.881)/976.172;
   input9 = (in9 - 933.28)/965.198;
   input10 = (in10 - 984.878)/949.04;
   input11 = (in11 - 604.539)/788.843;
   input12 = (in12 - 722.684)/865.021;
   input13 = (in13 - 502.474)/525.96;
   input14 = (in14 - 686.035)/795.233;
   input15 = (in15 - 711.307)/801.906;
   input16 = (in16 - 547.017)/580.639;
   input17 = (in17 - 737.808)/883.523;
   input18 = (in18 - 745.533)/894.406;
   input19 = (in19 - 752.049)/852.263;
   input20 = (in20 - -6.71978)/498.615;
   input21 = (in21 - -9.27777)/1140.87;
   input22 = (in22 - 2.2578)/1206.67;
   input23 = (in23 - -25.5599)/184.241;
   switch(index) {
     case 0:
         return neuron0x12956b0();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_4::Value(int index, double* input) {
   input0 = (input[0] - 23.5189)/15.2384;
   input1 = (input[1] - -1.22412)/239.361;
   input2 = (input[2] - 236.567)/199.825;
   input3 = (input[3] - -23.3268)/853.991;
   input4 = (input[4] - 1060.13)/910.802;
   input5 = (input[5] - 941.733)/952.19;
   input6 = (input[6] - 949.188)/953.506;
   input7 = (input[7] - 961.734)/932.589;
   input8 = (input[8] - 942.881)/976.172;
   input9 = (input[9] - 933.28)/965.198;
   input10 = (input[10] - 984.878)/949.04;
   input11 = (input[11] - 604.539)/788.843;
   input12 = (input[12] - 722.684)/865.021;
   input13 = (input[13] - 502.474)/525.96;
   input14 = (input[14] - 686.035)/795.233;
   input15 = (input[15] - 711.307)/801.906;
   input16 = (input[16] - 547.017)/580.639;
   input17 = (input[17] - 737.808)/883.523;
   input18 = (input[18] - 745.533)/894.406;
   input19 = (input[19] - 752.049)/852.263;
   input20 = (input[20] - -6.71978)/498.615;
   input21 = (input[21] - -9.27777)/1140.87;
   input22 = (input[22] - 2.2578)/1206.67;
   input23 = (input[23] - -25.5599)/184.241;
   switch(index) {
     case 0:
         return neuron0x12956b0();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_4::neuron0x1261770() {
   return input0;
}

double NNfunction_NN_2_4::neuron0x1261ab0() {
   return input1;
}

double NNfunction_NN_2_4::neuron0x1261df0() {
   return input2;
}

double NNfunction_NN_2_4::neuron0x1262130() {
   return input3;
}

double NNfunction_NN_2_4::neuron0x1262470() {
   return input4;
}

double NNfunction_NN_2_4::neuron0x12627b0() {
   return input5;
}

double NNfunction_NN_2_4::neuron0x1262af0() {
   return input6;
}

double NNfunction_NN_2_4::neuron0x1262e30() {
   return input7;
}

double NNfunction_NN_2_4::neuron0x1263170() {
   return input8;
}

double NNfunction_NN_2_4::neuron0x12634b0() {
   return input9;
}

double NNfunction_NN_2_4::neuron0x12637f0() {
   return input10;
}

double NNfunction_NN_2_4::neuron0x1263b30() {
   return input11;
}

double NNfunction_NN_2_4::neuron0x1263e70() {
   return input12;
}

double NNfunction_NN_2_4::neuron0x12641b0() {
   return input13;
}

double NNfunction_NN_2_4::neuron0x12644f0() {
   return input14;
}

double NNfunction_NN_2_4::neuron0x1264830() {
   return input15;
}

double NNfunction_NN_2_4::neuron0x1264b70() {
   return input16;
}

double NNfunction_NN_2_4::neuron0x12650d0() {
   return input17;
}

double NNfunction_NN_2_4::neuron0x12652f0() {
   return input18;
}

double NNfunction_NN_2_4::neuron0x1265630() {
   return input19;
}

double NNfunction_NN_2_4::neuron0x1265970() {
   return input20;
}

double NNfunction_NN_2_4::neuron0x1265cb0() {
   return input21;
}

double NNfunction_NN_2_4::neuron0x1265ff0() {
   return input22;
}

double NNfunction_NN_2_4::neuron0x1266330() {
   return input23;
}

double NNfunction_NN_2_4::input0x12667d0() {
   double input = -0.0210322;
   input += synapse0x10215e0();
   input += synapse0x1261630();
   input += synapse0x1261670();
   input += synapse0x1266a80();
   input += synapse0x1266ac0();
   input += synapse0x1266b00();
   input += synapse0x1266b40();
   input += synapse0x1266b80();
   input += synapse0x1266bc0();
   input += synapse0x1266c00();
   input += synapse0x1266c40();
   input += synapse0x1266c80();
   input += synapse0x1266cc0();
   input += synapse0x1266d00();
   input += synapse0x1266d40();
   input += synapse0x1266d80();
   input += synapse0x12615a0();
   input += synapse0x12615e0();
   input += synapse0x1012e40();
   input += synapse0x1012e80();
   input += synapse0x1266fe0();
   input += synapse0x1267020();
   input += synapse0x1267060();
   input += synapse0x12670a0();
   return input;
}

double NNfunction_NN_2_4::neuron0x12667d0() {
   double input = input0x12667d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12670e0() {
   double input = 2.12347;
   input += synapse0x1267420();
   input += synapse0x1267460();
   input += synapse0x12674a0();
   input += synapse0x12674e0();
   input += synapse0x1267520();
   input += synapse0x1267560();
   input += synapse0x12675a0();
   input += synapse0x12675e0();
   input += synapse0x1267620();
   input += synapse0x1266ed0();
   input += synapse0x1266f10();
   input += synapse0x1266f50();
   input += synapse0x1266f90();
   input += synapse0x1267870();
   input += synapse0x12678b0();
   input += synapse0x12678f0();
   input += synapse0x1267270();
   input += synapse0x12672b0();
   input += synapse0x1267a40();
   input += synapse0x1267a80();
   input += synapse0x1267ac0();
   input += synapse0x1267b00();
   input += synapse0x1267b40();
   input += synapse0x1267b80();
   return input;
}

double NNfunction_NN_2_4::neuron0x12670e0() {
   double input = input0x12670e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1267bc0() {
   double input = -0.112693;
   input += synapse0x1267f00();
   input += synapse0x1267f40();
   input += synapse0x1267f80();
   input += synapse0x1267fc0();
   input += synapse0x1268000();
   input += synapse0x1268040();
   input += synapse0x1268080();
   input += synapse0x12680c0();
   input += synapse0x1268100();
   input += synapse0x1268140();
   input += synapse0x1268180();
   input += synapse0x12681c0();
   input += synapse0x1268200();
   input += synapse0x1268240();
   input += synapse0x1268280();
   input += synapse0x12682c0();
   input += synapse0x1267d50();
   input += synapse0x1267d90();
   input += synapse0x1020cb0();
   input += synapse0x1020cf0();
   input += synapse0x1250800();
   input += synapse0x1250840();
   input += synapse0x1250880();
   input += synapse0x12616b0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1267bc0() {
   double input = input0x1267bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1021450() {
   double input = -1.68433;
   input += synapse0x1267810();
   input += synapse0x12616f0();
   input += synapse0x1261730();
   input += synapse0x1268410();
   input += synapse0x1268450();
   input += synapse0x1268490();
   input += synapse0x12684d0();
   input += synapse0x1268510();
   input += synapse0x1268550();
   input += synapse0x1268590();
   input += synapse0x12685d0();
   input += synapse0x1268610();
   input += synapse0x1268650();
   input += synapse0x1268690();
   input += synapse0x12686d0();
   input += synapse0x1268710();
   input += synapse0x1267660();
   input += synapse0x12676a0();
   input += synapse0x1268860();
   input += synapse0x12688a0();
   input += synapse0x12688e0();
   input += synapse0x1268920();
   input += synapse0x1268960();
   input += synapse0x12689a0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1021450() {
   double input = input0x1021450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12689e0() {
   double input = -2.2475;
   input += synapse0x1268d20();
   input += synapse0x1268d60();
   input += synapse0x1268da0();
   input += synapse0x1268de0();
   input += synapse0x1268e20();
   input += synapse0x1268e60();
   input += synapse0x1268ea0();
   input += synapse0x1268ee0();
   input += synapse0x1268f20();
   input += synapse0x1268f60();
   input += synapse0x1268fa0();
   input += synapse0x1268fe0();
   input += synapse0x1269020();
   input += synapse0x1269060();
   input += synapse0x12690a0();
   input += synapse0x12690e0();
   input += synapse0x1268b70();
   input += synapse0x1268bb0();
   input += synapse0x1269230();
   input += synapse0x1269270();
   input += synapse0x12692b0();
   input += synapse0x12692f0();
   input += synapse0x1269330();
   input += synapse0x1269370();
   return input;
}

double NNfunction_NN_2_4::neuron0x12689e0() {
   double input = input0x12689e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12693b0() {
   double input = 0.759627;
   input += synapse0x12696f0();
   input += synapse0x1269730();
   input += synapse0x1269770();
   input += synapse0x12697b0();
   input += synapse0x12697f0();
   input += synapse0x1269830();
   input += synapse0x1269870();
   input += synapse0x12698b0();
   input += synapse0x12698f0();
   input += synapse0x1021040();
   input += synapse0x1021080();
   input += synapse0x10210c0();
   input += synapse0x1021100();
   input += synapse0x1021140();
   input += synapse0x1021180();
   input += synapse0x10211c0();
   input += synapse0x1269540();
   input += synapse0x1269580();
   input += synapse0x1021310();
   input += synapse0x1021350();
   input += synapse0x1021390();
   input += synapse0x10213d0();
   input += synapse0x1021410();
   input += synapse0x126a140();
   return input;
}

double NNfunction_NN_2_4::neuron0x12693b0() {
   double input = input0x12693b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126a180() {
   double input = 1.57287;
   input += synapse0x126a4c0();
   input += synapse0x126a500();
   input += synapse0x126a540();
   input += synapse0x126a580();
   input += synapse0x126a5c0();
   input += synapse0x126a600();
   input += synapse0x126a640();
   input += synapse0x126a680();
   input += synapse0x126a6c0();
   input += synapse0x126a700();
   input += synapse0x126a740();
   input += synapse0x126a780();
   input += synapse0x126a7c0();
   input += synapse0x126a800();
   input += synapse0x126a840();
   input += synapse0x126a880();
   input += synapse0x126a310();
   input += synapse0x126a350();
   input += synapse0x126a9d0();
   input += synapse0x126aa10();
   input += synapse0x126aa50();
   input += synapse0x126aa90();
   input += synapse0x126aad0();
   input += synapse0x126ab10();
   return input;
}

double NNfunction_NN_2_4::neuron0x126a180() {
   double input = input0x126a180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126ab50() {
   double input = 0.260917;
   input += synapse0x126ae90();
   input += synapse0x126aed0();
   input += synapse0x126af10();
   input += synapse0x126af50();
   input += synapse0x126af90();
   input += synapse0x126afd0();
   input += synapse0x126b010();
   input += synapse0x126b050();
   input += synapse0x126b090();
   input += synapse0x126b0d0();
   input += synapse0x126b110();
   input += synapse0x126b150();
   input += synapse0x126b190();
   input += synapse0x126b1d0();
   input += synapse0x126b210();
   input += synapse0x126b250();
   input += synapse0x126ace0();
   input += synapse0x126ad20();
   input += synapse0x126b3a0();
   input += synapse0x126b3e0();
   input += synapse0x126b420();
   input += synapse0x126b460();
   input += synapse0x126b4a0();
   input += synapse0x126b4e0();
   return input;
}

double NNfunction_NN_2_4::neuron0x126ab50() {
   double input = input0x126ab50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126b520() {
   double input = 0.396977;
   input += synapse0x1264fc0();
   input += synapse0x1265000();
   input += synapse0x1265040();
   input += synapse0x1265080();
   input += synapse0x126ba70();
   input += synapse0x126bab0();
   input += synapse0x126baf0();
   input += synapse0x126bb30();
   input += synapse0x126bb70();
   input += synapse0x126bbb0();
   input += synapse0x126bbf0();
   input += synapse0x126bc30();
   input += synapse0x126bc70();
   input += synapse0x126bcb0();
   input += synapse0x126bcf0();
   input += synapse0x126bd30();
   input += synapse0x126b6b0();
   input += synapse0x126b6f0();
   input += synapse0x126be80();
   input += synapse0x126bec0();
   input += synapse0x126bf00();
   input += synapse0x126bf40();
   input += synapse0x126bf80();
   input += synapse0x126bfc0();
   return input;
}

double NNfunction_NN_2_4::neuron0x126b520() {
   double input = input0x126b520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126c000() {
   double input = -1.22997;
   input += synapse0x126c340();
   input += synapse0x126c380();
   input += synapse0x126c3c0();
   input += synapse0x126c400();
   input += synapse0x126c440();
   input += synapse0x126c480();
   input += synapse0x126c4c0();
   input += synapse0x126c500();
   input += synapse0x126c540();
   input += synapse0x126c580();
   input += synapse0x126c5c0();
   input += synapse0x126c600();
   input += synapse0x126c640();
   input += synapse0x126c680();
   input += synapse0x126c6c0();
   input += synapse0x126c700();
   input += synapse0x126c190();
   input += synapse0x126c1d0();
   input += synapse0x126c850();
   input += synapse0x126c890();
   input += synapse0x126c8d0();
   input += synapse0x126c910();
   input += synapse0x126c950();
   input += synapse0x126c990();
   return input;
}

double NNfunction_NN_2_4::neuron0x126c000() {
   double input = input0x126c000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126c9d0() {
   double input = 4.35996;
   input += synapse0x126cd10();
   input += synapse0x126cd50();
   input += synapse0x126cd90();
   input += synapse0x126cdd0();
   input += synapse0x126ce10();
   input += synapse0x126ce50();
   input += synapse0x126ce90();
   input += synapse0x126ced0();
   input += synapse0x126cf10();
   input += synapse0x126cf50();
   input += synapse0x126cf90();
   input += synapse0x126cfd0();
   input += synapse0x126d010();
   input += synapse0x126d050();
   input += synapse0x126d090();
   input += synapse0x126d0d0();
   input += synapse0x126cb60();
   input += synapse0x126cba0();
   input += synapse0x1269930();
   input += synapse0x1269970();
   input += synapse0x12699b0();
   input += synapse0x12699f0();
   input += synapse0x1269a30();
   input += synapse0x1269a70();
   return input;
}

double NNfunction_NN_2_4::neuron0x126c9d0() {
   double input = input0x126c9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1269ab0() {
   double input = -2.77402;
   input += synapse0x1269df0();
   input += synapse0x1269e30();
   input += synapse0x1269e70();
   input += synapse0x1269eb0();
   input += synapse0x1269ef0();
   input += synapse0x1269f30();
   input += synapse0x1269f70();
   input += synapse0x1269fb0();
   input += synapse0x1269ff0();
   input += synapse0x126a030();
   input += synapse0x126a070();
   input += synapse0x126a0b0();
   input += synapse0x126a0f0();
   input += synapse0x126e230();
   input += synapse0x126e270();
   input += synapse0x126e2b0();
   input += synapse0x1269c40();
   input += synapse0x1269c80();
   input += synapse0x126e400();
   input += synapse0x126e440();
   input += synapse0x126e480();
   input += synapse0x126e4c0();
   input += synapse0x126e500();
   input += synapse0x126e540();
   return input;
}

double NNfunction_NN_2_4::neuron0x1269ab0() {
   double input = input0x1269ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126e580() {
   double input = -2.88915;
   input += synapse0x126e8c0();
   input += synapse0x126e900();
   input += synapse0x126e940();
   input += synapse0x126e980();
   input += synapse0x126e9c0();
   input += synapse0x126ea00();
   input += synapse0x126ea40();
   input += synapse0x126ea80();
   input += synapse0x126eac0();
   input += synapse0x126eb00();
   input += synapse0x126eb40();
   input += synapse0x126eb80();
   input += synapse0x126ebc0();
   input += synapse0x126ec00();
   input += synapse0x126ec40();
   input += synapse0x126ec80();
   input += synapse0x126e710();
   input += synapse0x126e750();
   input += synapse0x126edd0();
   input += synapse0x126ee10();
   input += synapse0x126ee50();
   input += synapse0x126ee90();
   input += synapse0x126eed0();
   input += synapse0x126ef10();
   return input;
}

double NNfunction_NN_2_4::neuron0x126e580() {
   double input = input0x126e580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126ef50() {
   double input = -0.705935;
   input += synapse0x126f290();
   input += synapse0x126f2d0();
   input += synapse0x126f310();
   input += synapse0x126f350();
   input += synapse0x126f390();
   input += synapse0x126f3d0();
   input += synapse0x126f410();
   input += synapse0x126f450();
   input += synapse0x126f490();
   input += synapse0x126f4d0();
   input += synapse0x126f510();
   input += synapse0x126f550();
   input += synapse0x126f590();
   input += synapse0x126f5d0();
   input += synapse0x126f610();
   input += synapse0x126f650();
   input += synapse0x126f0e0();
   input += synapse0x126f120();
   input += synapse0x126f7a0();
   input += synapse0x126f7e0();
   input += synapse0x126f820();
   input += synapse0x126f860();
   input += synapse0x126f8a0();
   input += synapse0x126f8e0();
   return input;
}

double NNfunction_NN_2_4::neuron0x126ef50() {
   double input = input0x126ef50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126f920() {
   double input = -1.49299;
   input += synapse0x126fc60();
   input += synapse0x126fca0();
   input += synapse0x126fce0();
   input += synapse0x126fd20();
   input += synapse0x126fd60();
   input += synapse0x126fda0();
   input += synapse0x126fde0();
   input += synapse0x126fe20();
   input += synapse0x126fe60();
   input += synapse0x126fea0();
   input += synapse0x126fee0();
   input += synapse0x126ff20();
   input += synapse0x126ff60();
   input += synapse0x126ffa0();
   input += synapse0x126ffe0();
   input += synapse0x1270020();
   input += synapse0x126fab0();
   input += synapse0x126faf0();
   input += synapse0x1270170();
   input += synapse0x12701b0();
   input += synapse0x12701f0();
   input += synapse0x1270230();
   input += synapse0x1270270();
   input += synapse0x12702b0();
   return input;
}

double NNfunction_NN_2_4::neuron0x126f920() {
   double input = input0x126f920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12702f0() {
   double input = -8.16012;
   input += synapse0x1270630();
   input += synapse0x1261990();
   input += synapse0x12619d0();
   input += synapse0x1261cd0();
   input += synapse0x1261d10();
   input += synapse0x1262010();
   input += synapse0x1262050();
   input += synapse0x1262350();
   input += synapse0x1262390();
   input += synapse0x1262690();
   input += synapse0x12626d0();
   input += synapse0x12629d0();
   input += synapse0x1262a10();
   input += synapse0x1262d10();
   input += synapse0x1262d50();
   input += synapse0x1263050();
   input += synapse0x1263090();
   input += synapse0x1263390();
   input += synapse0x12633d0();
   input += synapse0x12636d0();
   input += synapse0x1263710();
   input += synapse0x1263a10();
   input += synapse0x1263a50();
   input += synapse0x1263d50();
   return input;
}

double NNfunction_NN_2_4::neuron0x12702f0() {
   double input = input0x12702f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1272100() {
   double input = 0.317272;
   input += synapse0x1263d90();
   input += synapse0x1264a50();
   input += synapse0x1264a90();
   input += synapse0x1270480();
   input += synapse0x12704c0();
   input += synapse0x1264d90();
   input += synapse0x1264dd0();
   input += synapse0x1012d20();
   input += synapse0x1012d60();
   input += synapse0x1265510();
   input += synapse0x1265550();
   input += synapse0x1265850();
   input += synapse0x1265890();
   input += synapse0x1265b90();
   input += synapse0x1265bd0();
   input += synapse0x1265ed0();
   input += synapse0x1265f10();
   input += synapse0x1266210();
   input += synapse0x1266250();
   input += synapse0x1266550();
   input += synapse0x1266590();
   input += synapse0x1264090();
   input += synapse0x12640d0();
   input += synapse0x12723a0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1272100() {
   double input = input0x1272100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12723e0() {
   double input = 1.86677;
   input += synapse0x1272720();
   input += synapse0x1272760();
   input += synapse0x12727a0();
   input += synapse0x12727e0();
   input += synapse0x1272820();
   input += synapse0x1272860();
   input += synapse0x12728a0();
   input += synapse0x12728e0();
   input += synapse0x1272920();
   input += synapse0x1272960();
   input += synapse0x12729a0();
   input += synapse0x12729e0();
   input += synapse0x1272a20();
   input += synapse0x1272a60();
   input += synapse0x1272aa0();
   input += synapse0x1272ae0();
   input += synapse0x1272570();
   input += synapse0x12725b0();
   input += synapse0x1272c30();
   input += synapse0x1272c70();
   input += synapse0x1272cb0();
   input += synapse0x1272cf0();
   input += synapse0x1272d30();
   input += synapse0x1272d70();
   return input;
}

double NNfunction_NN_2_4::neuron0x12723e0() {
   double input = input0x12723e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1272db0() {
   double input = -2.58849;
   input += synapse0x12730f0();
   input += synapse0x1273130();
   input += synapse0x1273170();
   input += synapse0x12731b0();
   input += synapse0x12731f0();
   input += synapse0x1273230();
   input += synapse0x1273270();
   input += synapse0x12732b0();
   input += synapse0x12732f0();
   input += synapse0x1273330();
   input += synapse0x1273370();
   input += synapse0x12733b0();
   input += synapse0x12733f0();
   input += synapse0x1273430();
   input += synapse0x1273470();
   input += synapse0x12734b0();
   input += synapse0x1272f40();
   input += synapse0x1272f80();
   input += synapse0x1273600();
   input += synapse0x1273640();
   input += synapse0x1273680();
   input += synapse0x12736c0();
   input += synapse0x1273700();
   input += synapse0x1273740();
   return input;
}

double NNfunction_NN_2_4::neuron0x1272db0() {
   double input = input0x1272db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1273780() {
   double input = 1.41978;
   input += synapse0x1273ac0();
   input += synapse0x1273b00();
   input += synapse0x1273b40();
   input += synapse0x1273b80();
   input += synapse0x1273bc0();
   input += synapse0x1273c00();
   input += synapse0x1273c40();
   input += synapse0x1273c80();
   input += synapse0x1273cc0();
   input += synapse0x1273d00();
   input += synapse0x1273d40();
   input += synapse0x1273d80();
   input += synapse0x1273dc0();
   input += synapse0x1273e00();
   input += synapse0x1273e40();
   input += synapse0x1273e80();
   input += synapse0x1273910();
   input += synapse0x1273950();
   input += synapse0x1273fd0();
   input += synapse0x1274010();
   input += synapse0x1274050();
   input += synapse0x1274090();
   input += synapse0x12740d0();
   input += synapse0x1274110();
   return input;
}

double NNfunction_NN_2_4::neuron0x1273780() {
   double input = input0x1273780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1274150() {
   double input = -2.08895;
   input += synapse0x1274490();
   input += synapse0x12744d0();
   input += synapse0x1274510();
   input += synapse0x1274550();
   input += synapse0x1274590();
   input += synapse0x12745d0();
   input += synapse0x1274610();
   input += synapse0x1274650();
   input += synapse0x1274690();
   input += synapse0x12746d0();
   input += synapse0x1274710();
   input += synapse0x1274750();
   input += synapse0x1274790();
   input += synapse0x12747d0();
   input += synapse0x1274810();
   input += synapse0x1274850();
   input += synapse0x12742e0();
   input += synapse0x1274320();
   input += synapse0x12749a0();
   input += synapse0x12749e0();
   input += synapse0x1274a20();
   input += synapse0x1274a60();
   input += synapse0x1274aa0();
   input += synapse0x1274ae0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1274150() {
   double input = input0x1274150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1274b20() {
   double input = -0.223621;
   input += synapse0x1274e60();
   input += synapse0x1274ea0();
   input += synapse0x1274ee0();
   input += synapse0x1274f20();
   input += synapse0x1274f60();
   input += synapse0x1274fa0();
   input += synapse0x1274fe0();
   input += synapse0x1275020();
   input += synapse0x1275060();
   input += synapse0x126d220();
   input += synapse0x126d260();
   input += synapse0x126d2a0();
   input += synapse0x126d2e0();
   input += synapse0x126d320();
   input += synapse0x126d360();
   input += synapse0x126d3a0();
   input += synapse0x1274cb0();
   input += synapse0x1274cf0();
   input += synapse0x126d4f0();
   input += synapse0x126d530();
   input += synapse0x126d570();
   input += synapse0x126d5b0();
   input += synapse0x126d5f0();
   input += synapse0x126d630();
   return input;
}

double NNfunction_NN_2_4::neuron0x1274b20() {
   double input = input0x1274b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126d670() {
   double input = 4.13113;
   input += synapse0x126d9b0();
   input += synapse0x126d9f0();
   input += synapse0x126da30();
   input += synapse0x126da70();
   input += synapse0x126dab0();
   input += synapse0x126daf0();
   input += synapse0x126db30();
   input += synapse0x126db70();
   input += synapse0x126dbb0();
   input += synapse0x126dbf0();
   input += synapse0x126dc30();
   input += synapse0x126dc70();
   input += synapse0x126dcb0();
   input += synapse0x126dcf0();
   input += synapse0x126dd30();
   input += synapse0x126dd70();
   input += synapse0x126d800();
   input += synapse0x126d840();
   input += synapse0x126dec0();
   input += synapse0x126df00();
   input += synapse0x126df40();
   input += synapse0x126df80();
   input += synapse0x126dfc0();
   input += synapse0x126e000();
   return input;
}

double NNfunction_NN_2_4::neuron0x126d670() {
   double input = input0x126d670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x126e040() {
   double input = -2.13356;
   input += synapse0x126e1d0();
   input += synapse0x1277260();
   input += synapse0x12772a0();
   input += synapse0x12772e0();
   input += synapse0x1277320();
   input += synapse0x1277360();
   input += synapse0x12773a0();
   input += synapse0x12773e0();
   input += synapse0x1277420();
   input += synapse0x1277460();
   input += synapse0x12774a0();
   input += synapse0x12774e0();
   input += synapse0x1277520();
   input += synapse0x1277560();
   input += synapse0x12775a0();
   input += synapse0x12775e0();
   input += synapse0x12770b0();
   input += synapse0x12770f0();
   input += synapse0x1277730();
   input += synapse0x1277770();
   input += synapse0x12777b0();
   input += synapse0x12777f0();
   input += synapse0x1277830();
   input += synapse0x1277870();
   return input;
}

double NNfunction_NN_2_4::neuron0x126e040() {
   double input = input0x126e040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12778b0() {
   double input = -2.85738;
   input += synapse0x1277bf0();
   input += synapse0x1277c30();
   input += synapse0x1277c70();
   input += synapse0x1277cb0();
   input += synapse0x1277cf0();
   input += synapse0x1277d30();
   input += synapse0x1277d70();
   input += synapse0x1277db0();
   input += synapse0x1277df0();
   input += synapse0x1277e30();
   input += synapse0x1277e70();
   input += synapse0x1277eb0();
   input += synapse0x1277ef0();
   input += synapse0x1277f30();
   input += synapse0x1277f70();
   input += synapse0x1277fb0();
   input += synapse0x1277a40();
   input += synapse0x1277a80();
   input += synapse0x1278100();
   input += synapse0x1278140();
   input += synapse0x1278180();
   input += synapse0x12781c0();
   input += synapse0x1278200();
   input += synapse0x1278240();
   return input;
}

double NNfunction_NN_2_4::neuron0x12778b0() {
   double input = input0x12778b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1278280() {
   double input = 0.887537;
   input += synapse0x12785c0();
   input += synapse0x1278600();
   input += synapse0x1278640();
   input += synapse0x1278680();
   input += synapse0x12786c0();
   input += synapse0x1278700();
   input += synapse0x1278740();
   input += synapse0x1278780();
   input += synapse0x12787c0();
   input += synapse0x1278800();
   input += synapse0x1278840();
   input += synapse0x1278880();
   input += synapse0x12788c0();
   input += synapse0x1278900();
   input += synapse0x1278940();
   input += synapse0x1278980();
   input += synapse0x1278410();
   input += synapse0x1278450();
   input += synapse0x1278ad0();
   input += synapse0x1278b10();
   input += synapse0x1278b50();
   input += synapse0x1278b90();
   input += synapse0x1278bd0();
   input += synapse0x1278c10();
   return input;
}

double NNfunction_NN_2_4::neuron0x1278280() {
   double input = input0x1278280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1278c50() {
   double input = -4.37699;
   input += synapse0x1278f90();
   input += synapse0x1278fd0();
   input += synapse0x1279010();
   input += synapse0x1279050();
   input += synapse0x1279090();
   input += synapse0x12790d0();
   input += synapse0x1279110();
   input += synapse0x1279150();
   input += synapse0x1279190();
   input += synapse0x12791d0();
   input += synapse0x1279210();
   input += synapse0x1279250();
   input += synapse0x1279290();
   input += synapse0x12792d0();
   input += synapse0x1279310();
   input += synapse0x1279350();
   input += synapse0x1278de0();
   input += synapse0x1278e20();
   input += synapse0x12794a0();
   input += synapse0x12794e0();
   input += synapse0x1279520();
   input += synapse0x1279560();
   input += synapse0x12795a0();
   input += synapse0x12795e0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1278c50() {
   double input = input0x1278c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1279620() {
   double input = 0.130711;
   input += synapse0x1279960();
   input += synapse0x12799a0();
   input += synapse0x12799e0();
   input += synapse0x1279a20();
   input += synapse0x1279a60();
   input += synapse0x1279aa0();
   input += synapse0x1279ae0();
   input += synapse0x1279b20();
   input += synapse0x1279b60();
   input += synapse0x1279ba0();
   input += synapse0x1279be0();
   input += synapse0x1279c20();
   input += synapse0x1279c60();
   input += synapse0x1279ca0();
   input += synapse0x1279ce0();
   input += synapse0x1279d20();
   input += synapse0x12797b0();
   input += synapse0x12797f0();
   input += synapse0x1279e70();
   input += synapse0x1279eb0();
   input += synapse0x1279ef0();
   input += synapse0x1279f30();
   input += synapse0x1279f70();
   input += synapse0x1279fb0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1279620() {
   double input = input0x1279620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1279ff0() {
   double input = 0.332291;
   input += synapse0x127a330();
   input += synapse0x127a370();
   input += synapse0x127a3b0();
   input += synapse0x127a3f0();
   input += synapse0x127a430();
   input += synapse0x127a470();
   input += synapse0x127a4b0();
   input += synapse0x127a4f0();
   input += synapse0x127a530();
   input += synapse0x127a570();
   input += synapse0x127a5b0();
   input += synapse0x127a5f0();
   input += synapse0x127a630();
   input += synapse0x127a670();
   input += synapse0x127a6b0();
   input += synapse0x127a6f0();
   input += synapse0x127a180();
   input += synapse0x127a1c0();
   input += synapse0x127a840();
   input += synapse0x127a880();
   input += synapse0x127a8c0();
   input += synapse0x127a900();
   input += synapse0x127a940();
   input += synapse0x127a980();
   return input;
}

double NNfunction_NN_2_4::neuron0x1279ff0() {
   double input = input0x1279ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x127a9c0() {
   double input = 3.10468;
   input += synapse0x127ad00();
   input += synapse0x127ad40();
   input += synapse0x127ad80();
   input += synapse0x127adc0();
   input += synapse0x127ae00();
   input += synapse0x127ae40();
   input += synapse0x127ae80();
   input += synapse0x127aec0();
   input += synapse0x127af00();
   input += synapse0x127af40();
   input += synapse0x127af80();
   input += synapse0x127afc0();
   input += synapse0x127b000();
   input += synapse0x127b040();
   input += synapse0x127b080();
   input += synapse0x127b0c0();
   input += synapse0x127ab50();
   input += synapse0x127ab90();
   input += synapse0x127b210();
   input += synapse0x127b250();
   input += synapse0x127b290();
   input += synapse0x127b2d0();
   input += synapse0x127b310();
   input += synapse0x127b350();
   return input;
}

double NNfunction_NN_2_4::neuron0x127a9c0() {
   double input = input0x127a9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x127b390() {
   double input = -0.819594;
   input += synapse0x127b6d0();
   input += synapse0x127b710();
   input += synapse0x127b750();
   input += synapse0x127b790();
   input += synapse0x127b7d0();
   input += synapse0x127b810();
   input += synapse0x127b850();
   input += synapse0x127b890();
   input += synapse0x127b8d0();
   input += synapse0x127b910();
   input += synapse0x127b950();
   input += synapse0x127b990();
   input += synapse0x127b9d0();
   input += synapse0x127ba10();
   input += synapse0x127ba50();
   input += synapse0x127ba90();
   input += synapse0x127b520();
   input += synapse0x127b560();
   input += synapse0x127bbe0();
   input += synapse0x127bc20();
   input += synapse0x127bc60();
   input += synapse0x127bca0();
   input += synapse0x127bce0();
   input += synapse0x127bd20();
   return input;
}

double NNfunction_NN_2_4::neuron0x127b390() {
   double input = input0x127b390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x127bd60() {
   double input = 1.35128;
   input += synapse0x127c0a0();
   input += synapse0x1270670();
   input += synapse0x12706b0();
   input += synapse0x12706f0();
   input += synapse0x1270940();
   input += synapse0x1270980();
   input += synapse0x12709c0();
   input += synapse0x1270c10();
   input += synapse0x1270c50();
   input += synapse0x1270ea0();
   input += synapse0x1270ee0();
   input += synapse0x1270f20();
   input += synapse0x1271170();
   input += synapse0x12711b0();
   input += synapse0x1271400();
   input += synapse0x1271440();
   input += synapse0x127bef0();
   input += synapse0x127bf30();
   input += synapse0x1271590();
   input += synapse0x1271aa0();
   input += synapse0x1271ae0();
   input += synapse0x1271b20();
   input += synapse0x1271d70();
   input += synapse0x1271db0();
   return input;
}

double NNfunction_NN_2_4::neuron0x127bd60() {
   double input = input0x127bd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1271df0() {
   double input = 0.214383;
   input += synapse0x1271660();
   input += synapse0x12716a0();
   input += synapse0x12716e0();
   input += synapse0x1271720();
   input += synapse0x12720a0();
   input += synapse0x127e3f0();
   input += synapse0x127e430();
   input += synapse0x127e470();
   input += synapse0x127e4b0();
   input += synapse0x127e4f0();
   input += synapse0x127e530();
   input += synapse0x127e570();
   input += synapse0x127e5b0();
   input += synapse0x127e5f0();
   input += synapse0x127e630();
   input += synapse0x127e670();
   input += synapse0x1271f80();
   input += synapse0x1271fc0();
   input += synapse0x127e7c0();
   input += synapse0x127e800();
   input += synapse0x127e840();
   input += synapse0x127e880();
   input += synapse0x127e8c0();
   input += synapse0x127e900();
   return input;
}

double NNfunction_NN_2_4::neuron0x1271df0() {
   double input = input0x1271df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x127e940() {
   double input = -3.48223;
   input += synapse0x127ec80();
   input += synapse0x127ecc0();
   input += synapse0x127ed00();
   input += synapse0x127ed40();
   input += synapse0x127ed80();
   input += synapse0x127edc0();
   input += synapse0x127ee00();
   input += synapse0x127ee40();
   input += synapse0x127ee80();
   input += synapse0x127eec0();
   input += synapse0x127ef00();
   input += synapse0x127ef40();
   input += synapse0x127ef80();
   input += synapse0x127efc0();
   input += synapse0x127f000();
   input += synapse0x127f040();
   input += synapse0x127ead0();
   input += synapse0x127eb10();
   input += synapse0x127f190();
   input += synapse0x127f1d0();
   input += synapse0x127f210();
   input += synapse0x127f250();
   input += synapse0x127f290();
   input += synapse0x127f2d0();
   return input;
}

double NNfunction_NN_2_4::neuron0x127e940() {
   double input = input0x127e940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x127f310() {
   double input = 5.16523;
   input += synapse0x127f650();
   input += synapse0x127f690();
   input += synapse0x127f6d0();
   input += synapse0x127f710();
   input += synapse0x127f750();
   input += synapse0x127f790();
   input += synapse0x127f7d0();
   input += synapse0x127f810();
   input += synapse0x127f850();
   input += synapse0x127f890();
   input += synapse0x127f8d0();
   input += synapse0x127f910();
   input += synapse0x127f950();
   input += synapse0x127f990();
   input += synapse0x127f9d0();
   input += synapse0x127fa10();
   input += synapse0x127f4a0();
   input += synapse0x127f4e0();
   input += synapse0x127fb60();
   input += synapse0x127fba0();
   input += synapse0x127fbe0();
   input += synapse0x127fc20();
   input += synapse0x127fc60();
   input += synapse0x127fca0();
   return input;
}

double NNfunction_NN_2_4::neuron0x127f310() {
   double input = input0x127f310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x127fce0() {
   double input = -1.05731;
   input += synapse0x1280020();
   input += synapse0x1280060();
   input += synapse0x12800a0();
   input += synapse0x12800e0();
   input += synapse0x1280120();
   input += synapse0x1280160();
   input += synapse0x12801a0();
   input += synapse0x12801e0();
   input += synapse0x1280220();
   input += synapse0x1280260();
   input += synapse0x12802a0();
   input += synapse0x12802e0();
   input += synapse0x1280320();
   input += synapse0x1280360();
   input += synapse0x12803a0();
   input += synapse0x12803e0();
   input += synapse0x127fe70();
   input += synapse0x127feb0();
   input += synapse0x1280530();
   input += synapse0x1280570();
   input += synapse0x12805b0();
   input += synapse0x12805f0();
   input += synapse0x1280630();
   input += synapse0x1280670();
   return input;
}

double NNfunction_NN_2_4::neuron0x127fce0() {
   double input = input0x127fce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12806b0() {
   double input = -1.76715;
   input += synapse0x12809f0();
   input += synapse0x1280a30();
   input += synapse0x1280a70();
   input += synapse0x1280ab0();
   input += synapse0x1280af0();
   input += synapse0x1280b30();
   input += synapse0x1280b70();
   input += synapse0x1280bb0();
   input += synapse0x1280bf0();
   input += synapse0x1280c30();
   input += synapse0x1280c70();
   input += synapse0x1280cb0();
   input += synapse0x1280cf0();
   input += synapse0x1280d30();
   input += synapse0x1280d70();
   input += synapse0x1280db0();
   input += synapse0x1280840();
   input += synapse0x1280880();
   input += synapse0x1280f00();
   input += synapse0x1280f40();
   input += synapse0x1280f80();
   input += synapse0x1280fc0();
   input += synapse0x1281000();
   input += synapse0x1281040();
   return input;
}

double NNfunction_NN_2_4::neuron0x12806b0() {
   double input = input0x12806b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1281080() {
   double input = 4.29534;
   input += synapse0x12813c0();
   input += synapse0x1281400();
   input += synapse0x1281440();
   input += synapse0x1281480();
   input += synapse0x12814c0();
   input += synapse0x1281500();
   input += synapse0x1281540();
   input += synapse0x1281580();
   input += synapse0x12815c0();
   input += synapse0x1281600();
   input += synapse0x1281640();
   input += synapse0x1281680();
   input += synapse0x12816c0();
   input += synapse0x1281700();
   input += synapse0x1281740();
   input += synapse0x1281780();
   input += synapse0x1281210();
   input += synapse0x1281250();
   input += synapse0x12818d0();
   input += synapse0x1281910();
   input += synapse0x1281950();
   input += synapse0x1281990();
   input += synapse0x12819d0();
   input += synapse0x1281a10();
   return input;
}

double NNfunction_NN_2_4::neuron0x1281080() {
   double input = input0x1281080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1281a50() {
   double input = 0.993223;
   input += synapse0x1281d90();
   input += synapse0x1281dd0();
   input += synapse0x1281e10();
   input += synapse0x1281e50();
   input += synapse0x1281e90();
   input += synapse0x1281ed0();
   input += synapse0x1281f10();
   input += synapse0x1281f50();
   input += synapse0x1281f90();
   input += synapse0x1281fd0();
   input += synapse0x1282010();
   input += synapse0x1282050();
   input += synapse0x1282090();
   input += synapse0x12820d0();
   input += synapse0x1282110();
   input += synapse0x1282150();
   input += synapse0x1281be0();
   input += synapse0x1281c20();
   input += synapse0x12822a0();
   input += synapse0x12822e0();
   input += synapse0x1282320();
   input += synapse0x1282360();
   input += synapse0x12823a0();
   input += synapse0x12823e0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1281a50() {
   double input = input0x1281a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1282420() {
   double input = -0.1481;
   input += synapse0x1282760();
   input += synapse0x12827a0();
   input += synapse0x12827e0();
   input += synapse0x1282820();
   input += synapse0x1282860();
   input += synapse0x12828a0();
   input += synapse0x12828e0();
   input += synapse0x1282920();
   input += synapse0x1282960();
   input += synapse0x12829a0();
   input += synapse0x12829e0();
   input += synapse0x1282a20();
   input += synapse0x1282a60();
   input += synapse0x1282aa0();
   input += synapse0x1282ae0();
   input += synapse0x1282b20();
   input += synapse0x12825b0();
   input += synapse0x12825f0();
   input += synapse0x1282c70();
   input += synapse0x1282cb0();
   input += synapse0x1282cf0();
   input += synapse0x1282d30();
   input += synapse0x1282d70();
   input += synapse0x1282db0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1282420() {
   double input = input0x1282420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1282df0() {
   double input = -0.338121;
   input += synapse0x126b860();
   input += synapse0x126b8a0();
   input += synapse0x126b8e0();
   input += synapse0x126b920();
   input += synapse0x126b960();
   input += synapse0x126b9a0();
   input += synapse0x126b9e0();
   input += synapse0x126ba20();
   input += synapse0x1283540();
   input += synapse0x1283580();
   input += synapse0x12835c0();
   input += synapse0x1283600();
   input += synapse0x1283640();
   input += synapse0x1283680();
   input += synapse0x12836c0();
   input += synapse0x1283700();
   input += synapse0x1282f80();
   input += synapse0x1282fc0();
   input += synapse0x1283850();
   input += synapse0x1283890();
   input += synapse0x12838d0();
   input += synapse0x1283910();
   input += synapse0x1283950();
   input += synapse0x1283990();
   return input;
}

double NNfunction_NN_2_4::neuron0x1282df0() {
   double input = input0x1282df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12839d0() {
   double input = -0.0131768;
   input += synapse0x1283d10();
   input += synapse0x1283d50();
   input += synapse0x1283d90();
   input += synapse0x1283dd0();
   input += synapse0x1283e10();
   input += synapse0x1283e50();
   input += synapse0x1283e90();
   input += synapse0x1283ed0();
   input += synapse0x1283f10();
   input += synapse0x1283f50();
   input += synapse0x1283f90();
   input += synapse0x1283fd0();
   input += synapse0x1284010();
   input += synapse0x1284050();
   input += synapse0x1284090();
   input += synapse0x12840d0();
   input += synapse0x1283b60();
   input += synapse0x1283ba0();
   input += synapse0x1284220();
   input += synapse0x1284260();
   input += synapse0x12842a0();
   input += synapse0x12842e0();
   input += synapse0x1284320();
   input += synapse0x1284360();
   return input;
}

double NNfunction_NN_2_4::neuron0x12839d0() {
   double input = input0x12839d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12843a0() {
   double input = -1.89032;
   input += synapse0x12846e0();
   input += synapse0x1284720();
   input += synapse0x1284760();
   input += synapse0x12847a0();
   input += synapse0x12847e0();
   input += synapse0x1284820();
   input += synapse0x1284860();
   input += synapse0x12848a0();
   input += synapse0x12848e0();
   input += synapse0x1284920();
   input += synapse0x1284960();
   input += synapse0x12849a0();
   input += synapse0x12849e0();
   input += synapse0x1284a20();
   input += synapse0x1284a60();
   input += synapse0x1284aa0();
   input += synapse0x1284530();
   input += synapse0x1284570();
   input += synapse0x12750a0();
   input += synapse0x12750e0();
   input += synapse0x1275120();
   input += synapse0x1275160();
   input += synapse0x12751a0();
   input += synapse0x12751e0();
   return input;
}

double NNfunction_NN_2_4::neuron0x12843a0() {
   double input = input0x12843a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1275220() {
   double input = -3.80352;
   input += synapse0x1275560();
   input += synapse0x12755a0();
   input += synapse0x12755e0();
   input += synapse0x1275620();
   input += synapse0x1275660();
   input += synapse0x12756a0();
   input += synapse0x12756e0();
   input += synapse0x1275720();
   input += synapse0x1275760();
   input += synapse0x12757a0();
   input += synapse0x12757e0();
   input += synapse0x1275820();
   input += synapse0x1275860();
   input += synapse0x12758a0();
   input += synapse0x12758e0();
   input += synapse0x1275920();
   input += synapse0x12753b0();
   input += synapse0x12753f0();
   input += synapse0x1275a70();
   input += synapse0x1275ab0();
   input += synapse0x1275af0();
   input += synapse0x1275b30();
   input += synapse0x1275b70();
   input += synapse0x1275bb0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1275220() {
   double input = input0x1275220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1275bf0() {
   double input = 0.332725;
   input += synapse0x1275f30();
   input += synapse0x1275f70();
   input += synapse0x1275fb0();
   input += synapse0x1275ff0();
   input += synapse0x1276030();
   input += synapse0x1276070();
   input += synapse0x12760b0();
   input += synapse0x12760f0();
   input += synapse0x1276130();
   input += synapse0x1276170();
   input += synapse0x12761b0();
   input += synapse0x12761f0();
   input += synapse0x1276230();
   input += synapse0x1276270();
   input += synapse0x12762b0();
   input += synapse0x12762f0();
   input += synapse0x1275d80();
   input += synapse0x1275dc0();
   input += synapse0x1276440();
   input += synapse0x1276480();
   input += synapse0x12764c0();
   input += synapse0x1276500();
   input += synapse0x1276540();
   input += synapse0x1276580();
   return input;
}

double NNfunction_NN_2_4::neuron0x1275bf0() {
   double input = input0x1275bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12765c0() {
   double input = -1.65568;
   input += synapse0x1276900();
   input += synapse0x1276940();
   input += synapse0x1276980();
   input += synapse0x12769c0();
   input += synapse0x1276a00();
   input += synapse0x1276a40();
   input += synapse0x1276a80();
   input += synapse0x1276ac0();
   input += synapse0x1276b00();
   input += synapse0x1276b40();
   input += synapse0x1276b80();
   input += synapse0x1276bc0();
   input += synapse0x1276c00();
   input += synapse0x1276c40();
   input += synapse0x1276c80();
   input += synapse0x1276cc0();
   input += synapse0x1276750();
   input += synapse0x1276790();
   input += synapse0x1276e10();
   input += synapse0x1276e50();
   input += synapse0x1276e90();
   input += synapse0x1276ed0();
   input += synapse0x1276f10();
   input += synapse0x1276f50();
   return input;
}

double NNfunction_NN_2_4::neuron0x12765c0() {
   double input = input0x12765c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1288c00() {
   double input = 1.90622;
   input += synapse0x1288e20();
   input += synapse0x1288e60();
   input += synapse0x1288ea0();
   input += synapse0x1288ee0();
   input += synapse0x1288f20();
   input += synapse0x1288f60();
   input += synapse0x1288fa0();
   input += synapse0x1288fe0();
   input += synapse0x1289020();
   input += synapse0x1289060();
   input += synapse0x12890a0();
   input += synapse0x12890e0();
   input += synapse0x1289120();
   input += synapse0x1289160();
   input += synapse0x12891a0();
   input += synapse0x12891e0();
   input += synapse0x1276f90();
   input += synapse0x1276fd0();
   input += synapse0x1289330();
   input += synapse0x1289370();
   input += synapse0x12893b0();
   input += synapse0x12893f0();
   input += synapse0x1289430();
   input += synapse0x1289470();
   return input;
}

double NNfunction_NN_2_4::neuron0x1288c00() {
   double input = input0x1288c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12894b0() {
   double input = -5.25759;
   input += synapse0x12897f0();
   input += synapse0x1289830();
   input += synapse0x1289870();
   input += synapse0x12898b0();
   input += synapse0x12898f0();
   input += synapse0x1289930();
   input += synapse0x1289970();
   input += synapse0x12899b0();
   input += synapse0x12899f0();
   input += synapse0x1289a30();
   input += synapse0x1289a70();
   input += synapse0x1289ab0();
   input += synapse0x1289af0();
   input += synapse0x1289b30();
   input += synapse0x1289b70();
   input += synapse0x1289bb0();
   input += synapse0x1289640();
   input += synapse0x1289680();
   input += synapse0x1289d00();
   input += synapse0x1289d40();
   input += synapse0x1289d80();
   input += synapse0x1289dc0();
   input += synapse0x1289e00();
   input += synapse0x1289e40();
   return input;
}

double NNfunction_NN_2_4::neuron0x12894b0() {
   double input = input0x12894b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1289e80() {
   double input = 3.7387;
   input += synapse0x128a1c0();
   input += synapse0x128a200();
   input += synapse0x128a240();
   input += synapse0x128a280();
   input += synapse0x128a2c0();
   input += synapse0x128a300();
   input += synapse0x128a340();
   input += synapse0x128a380();
   input += synapse0x128a3c0();
   input += synapse0x128a400();
   input += synapse0x128a440();
   input += synapse0x128a480();
   input += synapse0x128a4c0();
   input += synapse0x128a500();
   input += synapse0x128a540();
   input += synapse0x128a580();
   input += synapse0x128a010();
   input += synapse0x128a050();
   input += synapse0x128a6d0();
   input += synapse0x128a710();
   input += synapse0x128a750();
   input += synapse0x128a790();
   input += synapse0x128a7d0();
   input += synapse0x128a810();
   return input;
}

double NNfunction_NN_2_4::neuron0x1289e80() {
   double input = input0x1289e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x128a850() {
   double input = -0.142745;
   input += synapse0x128ab90();
   input += synapse0x128abd0();
   input += synapse0x128ac10();
   input += synapse0x128ac50();
   input += synapse0x128ac90();
   input += synapse0x128acd0();
   input += synapse0x128ad10();
   input += synapse0x128ad50();
   input += synapse0x128ad90();
   input += synapse0x128add0();
   input += synapse0x128ae10();
   input += synapse0x128ae50();
   input += synapse0x128ae90();
   input += synapse0x128aed0();
   input += synapse0x128af10();
   input += synapse0x128af50();
   input += synapse0x128a9e0();
   input += synapse0x128aa20();
   input += synapse0x128b0a0();
   input += synapse0x128b0e0();
   input += synapse0x128b120();
   input += synapse0x128b160();
   input += synapse0x128b1a0();
   input += synapse0x128b1e0();
   return input;
}

double NNfunction_NN_2_4::neuron0x128a850() {
   double input = input0x128a850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1291a50() {
   double input = 0.265544;
   input += synapse0x1267780();
   input += synapse0x12677c0();
   input += synapse0x1268c90();
   input += synapse0x1268cd0();
   input += synapse0x1269660();
   input += synapse0x12696a0();
   input += synapse0x126a430();
   input += synapse0x126a470();
   input += synapse0x126ae00();
   input += synapse0x126ae40();
   input += synapse0x126b7d0();
   input += synapse0x126b810();
   input += synapse0x126c2b0();
   input += synapse0x126c2f0();
   input += synapse0x126cc80();
   input += synapse0x126ccc0();
   input += synapse0x1269d60();
   input += synapse0x1269da0();
   input += synapse0x126e830();
   input += synapse0x126e870();
   input += synapse0x126f200();
   input += synapse0x126f240();
   input += synapse0x126fbd0();
   input += synapse0x126fc10();
   input += synapse0x12705a0();
   input += synapse0x12705e0();
   input += synapse0x1264710();
   input += synapse0x1264750();
   input += synapse0x1272690();
   input += synapse0x12726d0();
   input += synapse0x1273060();
   input += synapse0x12730a0();
   input += synapse0x1273a30();
   input += synapse0x1273a70();
   input += synapse0x1274400();
   input += synapse0x1274440();
   input += synapse0x1274dd0();
   input += synapse0x1274e10();
   input += synapse0x126d920();
   input += synapse0x126d960();
   input += synapse0x12771d0();
   input += synapse0x1277210();
   input += synapse0x1277b60();
   input += synapse0x1277ba0();
   input += synapse0x1278530();
   input += synapse0x1278570();
   input += synapse0x1278f00();
   input += synapse0x1278f40();
   input += synapse0x12798d0();
   input += synapse0x1279910();
   return input;
}

double NNfunction_NN_2_4::neuron0x1291a50() {
   double input = input0x1291a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1291df0() {
   double input = 0.344233;
   input += synapse0x127c010();
   input += synapse0x127c050();
   input += synapse0x12715d0();
   input += synapse0x1271610();
   input += synapse0x127ebf0();
   input += synapse0x127ec30();
   input += synapse0x127f5c0();
   input += synapse0x127f600();
   input += synapse0x127ff90();
   input += synapse0x127ffd0();
   input += synapse0x1280960();
   input += synapse0x12809a0();
   input += synapse0x1281330();
   input += synapse0x1281370();
   input += synapse0x1281d00();
   input += synapse0x1281d40();
   input += synapse0x12826d0();
   input += synapse0x1282710();
   input += synapse0x12830a0();
   input += synapse0x12830e0();
   input += synapse0x1283c80();
   input += synapse0x1283cc0();
   input += synapse0x1284650();
   input += synapse0x1284690();
   input += synapse0x12754d0();
   input += synapse0x1275510();
   input += synapse0x1275ea0();
   input += synapse0x1275ee0();
   input += synapse0x1276870();
   input += synapse0x12768b0();
   input += synapse0x1288d90();
   input += synapse0x1288dd0();
   input += synapse0x1289760();
   input += synapse0x12897a0();
   input += synapse0x128a130();
   input += synapse0x128a170();
   input += synapse0x128ab00();
   input += synapse0x128ab40();
   input += synapse0x12669f0();
   input += synapse0x1266a30();
   input += synapse0x127a2a0();
   input += synapse0x127a2e0();
   input += synapse0x128b220();
   input += synapse0x128b260();
   input += synapse0x128b2a0();
   input += synapse0x128b2e0();
   input += synapse0x1292190();
   input += synapse0x12921d0();
   input += synapse0x1292210();
   input += synapse0x1292250();
   return input;
}

double NNfunction_NN_2_4::neuron0x1291df0() {
   double input = input0x1291df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1292290() {
   double input = -1.55146;
   input += synapse0x12925d0();
   input += synapse0x1292610();
   input += synapse0x1292650();
   input += synapse0x1292690();
   input += synapse0x12926d0();
   input += synapse0x1292710();
   input += synapse0x1292750();
   input += synapse0x1292790();
   input += synapse0x12927d0();
   input += synapse0x1292810();
   input += synapse0x1292850();
   input += synapse0x1292890();
   input += synapse0x12928d0();
   input += synapse0x1292910();
   input += synapse0x1292950();
   input += synapse0x1292990();
   input += synapse0x1292420();
   input += synapse0x1292460();
   input += synapse0x1292ae0();
   input += synapse0x1292b20();
   input += synapse0x1292b60();
   input += synapse0x1292ba0();
   input += synapse0x1292be0();
   input += synapse0x1292c20();
   input += synapse0x1292c60();
   input += synapse0x1292ca0();
   input += synapse0x1292ce0();
   input += synapse0x1292d20();
   input += synapse0x1292d60();
   input += synapse0x1292da0();
   input += synapse0x1292de0();
   input += synapse0x1292e20();
   input += synapse0x12929d0();
   input += synapse0x1292a10();
   input += synapse0x1292a50();
   input += synapse0x1292a90();
   input += synapse0x1293070();
   input += synapse0x12930b0();
   input += synapse0x12930f0();
   input += synapse0x1293130();
   input += synapse0x1293170();
   input += synapse0x12931b0();
   input += synapse0x12931f0();
   input += synapse0x1293230();
   input += synapse0x1293270();
   input += synapse0x12932b0();
   input += synapse0x12932f0();
   input += synapse0x1293330();
   input += synapse0x1293370();
   input += synapse0x12933b0();
   return input;
}

double NNfunction_NN_2_4::neuron0x1292290() {
   double input = input0x1292290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12933f0() {
   double input = -2.58283;
   input += synapse0x1293730();
   input += synapse0x1293770();
   input += synapse0x12937b0();
   input += synapse0x12937f0();
   input += synapse0x1293830();
   input += synapse0x1293870();
   input += synapse0x12938b0();
   input += synapse0x12938f0();
   input += synapse0x1293930();
   input += synapse0x1293970();
   input += synapse0x12939b0();
   input += synapse0x12939f0();
   input += synapse0x1293a30();
   input += synapse0x1293a70();
   input += synapse0x1293ab0();
   input += synapse0x1293af0();
   input += synapse0x1293580();
   input += synapse0x12935c0();
   input += synapse0x1293c40();
   input += synapse0x1293c80();
   input += synapse0x1293cc0();
   input += synapse0x1293d00();
   input += synapse0x1293d40();
   input += synapse0x1293d80();
   input += synapse0x1293dc0();
   input += synapse0x1293e00();
   input += synapse0x1293e40();
   input += synapse0x1293e80();
   input += synapse0x1293ec0();
   input += synapse0x1293f00();
   input += synapse0x1293f40();
   input += synapse0x1293f80();
   input += synapse0x1293b30();
   input += synapse0x1293b70();
   input += synapse0x1293bb0();
   input += synapse0x1293bf0();
   input += synapse0x12941d0();
   input += synapse0x1294210();
   input += synapse0x1294250();
   input += synapse0x1294290();
   input += synapse0x12942d0();
   input += synapse0x1294310();
   input += synapse0x1294350();
   input += synapse0x1294390();
   input += synapse0x12943d0();
   input += synapse0x1294410();
   input += synapse0x1294450();
   input += synapse0x1294490();
   input += synapse0x12944d0();
   input += synapse0x1294510();
   return input;
}

double NNfunction_NN_2_4::neuron0x12933f0() {
   double input = input0x12933f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x1294550() {
   double input = 0.150395;
   input += synapse0x1294890();
   input += synapse0x12948d0();
   input += synapse0x1294910();
   input += synapse0x1294950();
   input += synapse0x1294990();
   input += synapse0x12949d0();
   input += synapse0x1294a10();
   input += synapse0x1294a50();
   input += synapse0x1294a90();
   input += synapse0x1294ad0();
   input += synapse0x1294b10();
   input += synapse0x1294b50();
   input += synapse0x1294b90();
   input += synapse0x1294bd0();
   input += synapse0x1294c10();
   input += synapse0x1294c50();
   input += synapse0x12946e0();
   input += synapse0x1294720();
   input += synapse0x1294da0();
   input += synapse0x1294de0();
   input += synapse0x1294e20();
   input += synapse0x1294e60();
   input += synapse0x1294ea0();
   input += synapse0x1294ee0();
   input += synapse0x1294f20();
   input += synapse0x1294f60();
   input += synapse0x1294fa0();
   input += synapse0x1294fe0();
   input += synapse0x1295020();
   input += synapse0x1295060();
   input += synapse0x12950a0();
   input += synapse0x12950e0();
   input += synapse0x1294c90();
   input += synapse0x1294cd0();
   input += synapse0x1294d10();
   input += synapse0x1294d50();
   input += synapse0x1295330();
   input += synapse0x1295370();
   input += synapse0x12953b0();
   input += synapse0x12953f0();
   input += synapse0x1295430();
   input += synapse0x1295470();
   input += synapse0x12954b0();
   input += synapse0x12954f0();
   input += synapse0x1295530();
   input += synapse0x1295570();
   input += synapse0x12955b0();
   input += synapse0x12955f0();
   input += synapse0x1295630();
   input += synapse0x1295670();
   return input;
}

double NNfunction_NN_2_4::neuron0x1294550() {
   double input = input0x1294550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_4::input0x12956b0() {
   double input = 6.26588;
   input += synapse0x1266790();
   input += synapse0x12958d0();
   input += synapse0x1295910();
   input += synapse0x1295950();
   input += synapse0x1295990();
   return input;
}

double NNfunction_NN_2_4::neuron0x12956b0() {
   double input = input0x12956b0();
   return (input * 1)+0;
}

double NNfunction_NN_2_4::synapse0x10215e0() {
   return (neuron0x1261770()*0.595567);
}

double NNfunction_NN_2_4::synapse0x1261630() {
   return (neuron0x1261ab0()*-0.762343);
}

double NNfunction_NN_2_4::synapse0x1261670() {
   return (neuron0x1261df0()*0.22097);
}

double NNfunction_NN_2_4::synapse0x1266a80() {
   return (neuron0x1262130()*-0.838465);
}

double NNfunction_NN_2_4::synapse0x1266ac0() {
   return (neuron0x1262470()*0.12408);
}

double NNfunction_NN_2_4::synapse0x1266b00() {
   return (neuron0x12627b0()*0.407101);
}

double NNfunction_NN_2_4::synapse0x1266b40() {
   return (neuron0x1262af0()*0.25231);
}

double NNfunction_NN_2_4::synapse0x1266b80() {
   return (neuron0x1262e30()*0.134763);
}

double NNfunction_NN_2_4::synapse0x1266bc0() {
   return (neuron0x1263170()*0.850029);
}

double NNfunction_NN_2_4::synapse0x1266c00() {
   return (neuron0x12634b0()*0.689902);
}

double NNfunction_NN_2_4::synapse0x1266c40() {
   return (neuron0x12637f0()*-0.0709123);
}

double NNfunction_NN_2_4::synapse0x1266c80() {
   return (neuron0x1263b30()*-0.212222);
}

double NNfunction_NN_2_4::synapse0x1266cc0() {
   return (neuron0x1263e70()*0.53133);
}

double NNfunction_NN_2_4::synapse0x1266d00() {
   return (neuron0x12641b0()*-0.00541143);
}

double NNfunction_NN_2_4::synapse0x1266d40() {
   return (neuron0x12644f0()*0.930743);
}

double NNfunction_NN_2_4::synapse0x1266d80() {
   return (neuron0x1264830()*-0.408683);
}

double NNfunction_NN_2_4::synapse0x12615a0() {
   return (neuron0x1264b70()*0.17359);
}

double NNfunction_NN_2_4::synapse0x12615e0() {
   return (neuron0x12650d0()*0.787892);
}

double NNfunction_NN_2_4::synapse0x1012e40() {
   return (neuron0x12652f0()*-0.188697);
}

double NNfunction_NN_2_4::synapse0x1012e80() {
   return (neuron0x1265630()*0.408611);
}

double NNfunction_NN_2_4::synapse0x1266fe0() {
   return (neuron0x1265970()*-0.618757);
}

double NNfunction_NN_2_4::synapse0x1267020() {
   return (neuron0x1265cb0()*0.0953927);
}

double NNfunction_NN_2_4::synapse0x1267060() {
   return (neuron0x1265ff0()*-0.911002);
}

double NNfunction_NN_2_4::synapse0x12670a0() {
   return (neuron0x1266330()*0.178126);
}

double NNfunction_NN_2_4::synapse0x1267420() {
   return (neuron0x1261770()*-0.0906194);
}

double NNfunction_NN_2_4::synapse0x1267460() {
   return (neuron0x1261ab0()*-0.199602);
}

double NNfunction_NN_2_4::synapse0x12674a0() {
   return (neuron0x1261df0()*0.308741);
}

double NNfunction_NN_2_4::synapse0x12674e0() {
   return (neuron0x1262130()*-2.40748);
}

double NNfunction_NN_2_4::synapse0x1267520() {
   return (neuron0x1262470()*-0.58328);
}

double NNfunction_NN_2_4::synapse0x1267560() {
   return (neuron0x12627b0()*-0.0144883);
}

double NNfunction_NN_2_4::synapse0x12675a0() {
   return (neuron0x1262af0()*0.170165);
}

double NNfunction_NN_2_4::synapse0x12675e0() {
   return (neuron0x1262e30()*-0.278909);
}

double NNfunction_NN_2_4::synapse0x1267620() {
   return (neuron0x1263170()*-0.517355);
}

double NNfunction_NN_2_4::synapse0x1266ed0() {
   return (neuron0x12634b0()*0.329794);
}

double NNfunction_NN_2_4::synapse0x1266f10() {
   return (neuron0x12637f0()*-0.133078);
}

double NNfunction_NN_2_4::synapse0x1266f50() {
   return (neuron0x1263b30()*0.803086);
}

double NNfunction_NN_2_4::synapse0x1266f90() {
   return (neuron0x1263e70()*-0.153899);
}

double NNfunction_NN_2_4::synapse0x1267870() {
   return (neuron0x12641b0()*-0.235721);
}

double NNfunction_NN_2_4::synapse0x12678b0() {
   return (neuron0x12644f0()*-1.59701);
}

double NNfunction_NN_2_4::synapse0x12678f0() {
   return (neuron0x1264830()*0.212162);
}

double NNfunction_NN_2_4::synapse0x1267270() {
   return (neuron0x1264b70()*0.49994);
}

double NNfunction_NN_2_4::synapse0x12672b0() {
   return (neuron0x12650d0()*-0.000456808);
}

double NNfunction_NN_2_4::synapse0x1267a40() {
   return (neuron0x12652f0()*0.616346);
}

double NNfunction_NN_2_4::synapse0x1267a80() {
   return (neuron0x1265630()*-0.331842);
}

double NNfunction_NN_2_4::synapse0x1267ac0() {
   return (neuron0x1265970()*0.718581);
}

double NNfunction_NN_2_4::synapse0x1267b00() {
   return (neuron0x1265cb0()*0.463391);
}

double NNfunction_NN_2_4::synapse0x1267b40() {
   return (neuron0x1265ff0()*0.389684);
}

double NNfunction_NN_2_4::synapse0x1267b80() {
   return (neuron0x1266330()*-0.014447);
}

double NNfunction_NN_2_4::synapse0x1267f00() {
   return (neuron0x1261770()*0.00427282);
}

double NNfunction_NN_2_4::synapse0x1267f40() {
   return (neuron0x1261ab0()*-0.624667);
}

double NNfunction_NN_2_4::synapse0x1267f80() {
   return (neuron0x1261df0()*0.417952);
}

double NNfunction_NN_2_4::synapse0x1267fc0() {
   return (neuron0x1262130()*-0.00698707);
}

double NNfunction_NN_2_4::synapse0x1268000() {
   return (neuron0x1262470()*0.0172096);
}

double NNfunction_NN_2_4::synapse0x1268040() {
   return (neuron0x12627b0()*0.0364599);
}

double NNfunction_NN_2_4::synapse0x1268080() {
   return (neuron0x1262af0()*0.0107648);
}

double NNfunction_NN_2_4::synapse0x12680c0() {
   return (neuron0x1262e30()*-0.0465871);
}

double NNfunction_NN_2_4::synapse0x1268100() {
   return (neuron0x1263170()*-0.00801188);
}

double NNfunction_NN_2_4::synapse0x1268140() {
   return (neuron0x12634b0()*0.00973169);
}

double NNfunction_NN_2_4::synapse0x1268180() {
   return (neuron0x12637f0()*-0.0118801);
}

double NNfunction_NN_2_4::synapse0x12681c0() {
   return (neuron0x1263b30()*0.145863);
}

double NNfunction_NN_2_4::synapse0x1268200() {
   return (neuron0x1263e70()*0.014509);
}

double NNfunction_NN_2_4::synapse0x1268240() {
   return (neuron0x12641b0()*-0.0225552);
}

double NNfunction_NN_2_4::synapse0x1268280() {
   return (neuron0x12644f0()*0.00816918);
}

double NNfunction_NN_2_4::synapse0x12682c0() {
   return (neuron0x1264830()*0.0160975);
}

double NNfunction_NN_2_4::synapse0x1267d50() {
   return (neuron0x1264b70()*0.0130224);
}

double NNfunction_NN_2_4::synapse0x1267d90() {
   return (neuron0x12650d0()*-0.0461974);
}

double NNfunction_NN_2_4::synapse0x1020cb0() {
   return (neuron0x12652f0()*-0.0272795);
}

double NNfunction_NN_2_4::synapse0x1020cf0() {
   return (neuron0x1265630()*0.0213555);
}

double NNfunction_NN_2_4::synapse0x1250800() {
   return (neuron0x1265970()*0.0058683);
}

double NNfunction_NN_2_4::synapse0x1250840() {
   return (neuron0x1265cb0()*0.00212673);
}

double NNfunction_NN_2_4::synapse0x1250880() {
   return (neuron0x1265ff0()*-0.00828039);
}

double NNfunction_NN_2_4::synapse0x12616b0() {
   return (neuron0x1266330()*-1.45062);
}

double NNfunction_NN_2_4::synapse0x1267810() {
   return (neuron0x1261770()*0.0324244);
}

double NNfunction_NN_2_4::synapse0x12616f0() {
   return (neuron0x1261ab0()*3.45698);
}

double NNfunction_NN_2_4::synapse0x1261730() {
   return (neuron0x1261df0()*-1.95313);
}

double NNfunction_NN_2_4::synapse0x1268410() {
   return (neuron0x1262130()*0.00995306);
}

double NNfunction_NN_2_4::synapse0x1268450() {
   return (neuron0x1262470()*0.0280839);
}

double NNfunction_NN_2_4::synapse0x1268490() {
   return (neuron0x12627b0()*0.018235);
}

double NNfunction_NN_2_4::synapse0x12684d0() {
   return (neuron0x1262af0()*-0.0362541);
}

double NNfunction_NN_2_4::synapse0x1268510() {
   return (neuron0x1262e30()*-0.00682425);
}

double NNfunction_NN_2_4::synapse0x1268550() {
   return (neuron0x1263170()*-0.017586);
}

double NNfunction_NN_2_4::synapse0x1268590() {
   return (neuron0x12634b0()*-0.0161496);
}

double NNfunction_NN_2_4::synapse0x12685d0() {
   return (neuron0x12637f0()*0.0258712);
}

double NNfunction_NN_2_4::synapse0x1268610() {
   return (neuron0x1263b30()*0.610989);
}

double NNfunction_NN_2_4::synapse0x1268650() {
   return (neuron0x1263e70()*0.0241637);
}

double NNfunction_NN_2_4::synapse0x1268690() {
   return (neuron0x12641b0()*-0.00483708);
}

double NNfunction_NN_2_4::synapse0x12686d0() {
   return (neuron0x12644f0()*-0.206155);
}

double NNfunction_NN_2_4::synapse0x1268710() {
   return (neuron0x1264830()*-0.0187918);
}

double NNfunction_NN_2_4::synapse0x1267660() {
   return (neuron0x1264b70()*0.00211355);
}

double NNfunction_NN_2_4::synapse0x12676a0() {
   return (neuron0x12650d0()*-0.00674448);
}

double NNfunction_NN_2_4::synapse0x1268860() {
   return (neuron0x12652f0()*-0.0243412);
}

double NNfunction_NN_2_4::synapse0x12688a0() {
   return (neuron0x1265630()*-0.02113);
}

double NNfunction_NN_2_4::synapse0x12688e0() {
   return (neuron0x1265970()*0.020508);
}

double NNfunction_NN_2_4::synapse0x1268920() {
   return (neuron0x1265cb0()*0.0627002);
}

double NNfunction_NN_2_4::synapse0x1268960() {
   return (neuron0x1265ff0()*0.0192397);
}

double NNfunction_NN_2_4::synapse0x12689a0() {
   return (neuron0x1266330()*0.658736);
}

double NNfunction_NN_2_4::synapse0x1268d20() {
   return (neuron0x1261770()*0.0809532);
}

double NNfunction_NN_2_4::synapse0x1268d60() {
   return (neuron0x1261ab0()*-2.03843);
}

double NNfunction_NN_2_4::synapse0x1268da0() {
   return (neuron0x1261df0()*-2.87692);
}

double NNfunction_NN_2_4::synapse0x1268de0() {
   return (neuron0x1262130()*0.0307392);
}

double NNfunction_NN_2_4::synapse0x1268e20() {
   return (neuron0x1262470()*-0.0304758);
}

double NNfunction_NN_2_4::synapse0x1268e60() {
   return (neuron0x12627b0()*-0.032644);
}

double NNfunction_NN_2_4::synapse0x1268ea0() {
   return (neuron0x1262af0()*-0.0325965);
}

double NNfunction_NN_2_4::synapse0x1268ee0() {
   return (neuron0x1262e30()*-0.0389145);
}

double NNfunction_NN_2_4::synapse0x1268f20() {
   return (neuron0x1263170()*0.063862);
}

double NNfunction_NN_2_4::synapse0x1268f60() {
   return (neuron0x12634b0()*0.0342731);
}

double NNfunction_NN_2_4::synapse0x1268fa0() {
   return (neuron0x12637f0()*0.0449729);
}

double NNfunction_NN_2_4::synapse0x1268fe0() {
   return (neuron0x1263b30()*-0.210138);
}

double NNfunction_NN_2_4::synapse0x1269020() {
   return (neuron0x1263e70()*-0.108839);
}

double NNfunction_NN_2_4::synapse0x1269060() {
   return (neuron0x12641b0()*-0.0689858);
}

double NNfunction_NN_2_4::synapse0x12690a0() {
   return (neuron0x12644f0()*-0.105225);
}

double NNfunction_NN_2_4::synapse0x12690e0() {
   return (neuron0x1264830()*-0.0484817);
}

double NNfunction_NN_2_4::synapse0x1268b70() {
   return (neuron0x1264b70()*0.0943514);
}

double NNfunction_NN_2_4::synapse0x1268bb0() {
   return (neuron0x12650d0()*-0.0859096);
}

double NNfunction_NN_2_4::synapse0x1269230() {
   return (neuron0x12652f0()*0.0284058);
}

double NNfunction_NN_2_4::synapse0x1269270() {
   return (neuron0x1265630()*0.0437306);
}

double NNfunction_NN_2_4::synapse0x12692b0() {
   return (neuron0x1265970()*-0.00444733);
}

double NNfunction_NN_2_4::synapse0x12692f0() {
   return (neuron0x1265cb0()*0.00332652);
}

double NNfunction_NN_2_4::synapse0x1269330() {
   return (neuron0x1265ff0()*0.00475273);
}

double NNfunction_NN_2_4::synapse0x1269370() {
   return (neuron0x1266330()*-0.970176);
}

double NNfunction_NN_2_4::synapse0x12696f0() {
   return (neuron0x1261770()*0.0189756);
}

double NNfunction_NN_2_4::synapse0x1269730() {
   return (neuron0x1261ab0()*0.0602563);
}

double NNfunction_NN_2_4::synapse0x1269770() {
   return (neuron0x1261df0()*-0.676146);
}

double NNfunction_NN_2_4::synapse0x12697b0() {
   return (neuron0x1262130()*-0.0108572);
}

double NNfunction_NN_2_4::synapse0x12697f0() {
   return (neuron0x1262470()*0.00276991);
}

double NNfunction_NN_2_4::synapse0x1269830() {
   return (neuron0x12627b0()*-0.00596923);
}

double NNfunction_NN_2_4::synapse0x1269870() {
   return (neuron0x1262af0()*0.0100922);
}

double NNfunction_NN_2_4::synapse0x12698b0() {
   return (neuron0x1262e30()*-0.0103303);
}

double NNfunction_NN_2_4::synapse0x12698f0() {
   return (neuron0x1263170()*-0.00800396);
}

double NNfunction_NN_2_4::synapse0x1021040() {
   return (neuron0x12634b0()*0.0017252);
}

double NNfunction_NN_2_4::synapse0x1021080() {
   return (neuron0x12637f0()*-0.026608);
}

double NNfunction_NN_2_4::synapse0x10210c0() {
   return (neuron0x1263b30()*-0.304627);
}

double NNfunction_NN_2_4::synapse0x1021100() {
   return (neuron0x1263e70()*0.0390917);
}

double NNfunction_NN_2_4::synapse0x1021140() {
   return (neuron0x12641b0()*-0.0160819);
}

double NNfunction_NN_2_4::synapse0x1021180() {
   return (neuron0x12644f0()*-0.0282032);
}

double NNfunction_NN_2_4::synapse0x10211c0() {
   return (neuron0x1264830()*0.000311335);
}

double NNfunction_NN_2_4::synapse0x1269540() {
   return (neuron0x1264b70()*-0.00609492);
}

double NNfunction_NN_2_4::synapse0x1269580() {
   return (neuron0x12650d0()*-0.0170806);
}

double NNfunction_NN_2_4::synapse0x1021310() {
   return (neuron0x12652f0()*-0.00411804);
}

double NNfunction_NN_2_4::synapse0x1021350() {
   return (neuron0x1265630()*0.0138603);
}

double NNfunction_NN_2_4::synapse0x1021390() {
   return (neuron0x1265970()*-0.00295898);
}

double NNfunction_NN_2_4::synapse0x10213d0() {
   return (neuron0x1265cb0()*0.0172556);
}

double NNfunction_NN_2_4::synapse0x1021410() {
   return (neuron0x1265ff0()*0.038284);
}

double NNfunction_NN_2_4::synapse0x126a140() {
   return (neuron0x1266330()*-0.41332);
}

double NNfunction_NN_2_4::synapse0x126a4c0() {
   return (neuron0x1261770()*0.0328274);
}

double NNfunction_NN_2_4::synapse0x126a500() {
   return (neuron0x1261ab0()*0.181664);
}

double NNfunction_NN_2_4::synapse0x126a540() {
   return (neuron0x1261df0()*0.143923);
}

double NNfunction_NN_2_4::synapse0x126a580() {
   return (neuron0x1262130()*0.000112218);
}

double NNfunction_NN_2_4::synapse0x126a5c0() {
   return (neuron0x1262470()*-0.0287873);
}

double NNfunction_NN_2_4::synapse0x126a600() {
   return (neuron0x12627b0()*-0.015178);
}

double NNfunction_NN_2_4::synapse0x126a640() {
   return (neuron0x1262af0()*0.0220654);
}

double NNfunction_NN_2_4::synapse0x126a680() {
   return (neuron0x1262e30()*-0.0110928);
}

double NNfunction_NN_2_4::synapse0x126a6c0() {
   return (neuron0x1263170()*-0.00248988);
}

double NNfunction_NN_2_4::synapse0x126a700() {
   return (neuron0x12634b0()*-0.0359504);
}

double NNfunction_NN_2_4::synapse0x126a740() {
   return (neuron0x12637f0()*-0.026213);
}

double NNfunction_NN_2_4::synapse0x126a780() {
   return (neuron0x1263b30()*-0.508529);
}

double NNfunction_NN_2_4::synapse0x126a7c0() {
   return (neuron0x1263e70()*0.183279);
}

double NNfunction_NN_2_4::synapse0x126a800() {
   return (neuron0x12641b0()*0.00788531);
}

double NNfunction_NN_2_4::synapse0x126a840() {
   return (neuron0x12644f0()*-0.0701084);
}

double NNfunction_NN_2_4::synapse0x126a880() {
   return (neuron0x1264830()*-0.0173253);
}

double NNfunction_NN_2_4::synapse0x126a310() {
   return (neuron0x1264b70()*0.0204554);
}

double NNfunction_NN_2_4::synapse0x126a350() {
   return (neuron0x12650d0()*0.0186773);
}

double NNfunction_NN_2_4::synapse0x126a9d0() {
   return (neuron0x12652f0()*0.0473135);
}

double NNfunction_NN_2_4::synapse0x126aa10() {
   return (neuron0x1265630()*0.0198136);
}

double NNfunction_NN_2_4::synapse0x126aa50() {
   return (neuron0x1265970()*-0.0285831);
}

double NNfunction_NN_2_4::synapse0x126aa90() {
   return (neuron0x1265cb0()*0.0320494);
}

double NNfunction_NN_2_4::synapse0x126aad0() {
   return (neuron0x1265ff0()*0.0720692);
}

double NNfunction_NN_2_4::synapse0x126ab10() {
   return (neuron0x1266330()*-0.212296);
}

double NNfunction_NN_2_4::synapse0x126ae90() {
   return (neuron0x1261770()*0.973155);
}

double NNfunction_NN_2_4::synapse0x126aed0() {
   return (neuron0x1261ab0()*1.49597);
}

double NNfunction_NN_2_4::synapse0x126af10() {
   return (neuron0x1261df0()*0.00267316);
}

double NNfunction_NN_2_4::synapse0x126af50() {
   return (neuron0x1262130()*0.662097);
}

double NNfunction_NN_2_4::synapse0x126af90() {
   return (neuron0x1262470()*0.305148);
}

double NNfunction_NN_2_4::synapse0x126afd0() {
   return (neuron0x12627b0()*-0.084767);
}

double NNfunction_NN_2_4::synapse0x126b010() {
   return (neuron0x1262af0()*0.333133);
}

double NNfunction_NN_2_4::synapse0x126b050() {
   return (neuron0x1262e30()*0.478708);
}

double NNfunction_NN_2_4::synapse0x126b090() {
   return (neuron0x1263170()*0.396088);
}

double NNfunction_NN_2_4::synapse0x126b0d0() {
   return (neuron0x12634b0()*0.717982);
}

double NNfunction_NN_2_4::synapse0x126b110() {
   return (neuron0x12637f0()*0.928076);
}

double NNfunction_NN_2_4::synapse0x126b150() {
   return (neuron0x1263b30()*-0.476799);
}

double NNfunction_NN_2_4::synapse0x126b190() {
   return (neuron0x1263e70()*0.298145);
}

double NNfunction_NN_2_4::synapse0x126b1d0() {
   return (neuron0x12641b0()*0.333571);
}

double NNfunction_NN_2_4::synapse0x126b210() {
   return (neuron0x12644f0()*0.220034);
}

double NNfunction_NN_2_4::synapse0x126b250() {
   return (neuron0x1264830()*-0.18563);
}

double NNfunction_NN_2_4::synapse0x126ace0() {
   return (neuron0x1264b70()*0.424768);
}

double NNfunction_NN_2_4::synapse0x126ad20() {
   return (neuron0x12650d0()*0.470035);
}

double NNfunction_NN_2_4::synapse0x126b3a0() {
   return (neuron0x12652f0()*-0.850174);
}

double NNfunction_NN_2_4::synapse0x126b3e0() {
   return (neuron0x1265630()*-0.00952537);
}

double NNfunction_NN_2_4::synapse0x126b420() {
   return (neuron0x1265970()*0.16798);
}

double NNfunction_NN_2_4::synapse0x126b460() {
   return (neuron0x1265cb0()*0.0586095);
}

double NNfunction_NN_2_4::synapse0x126b4a0() {
   return (neuron0x1265ff0()*-0.409072);
}

double NNfunction_NN_2_4::synapse0x126b4e0() {
   return (neuron0x1266330()*-2.71171);
}

double NNfunction_NN_2_4::synapse0x1264fc0() {
   return (neuron0x1261770()*0.0327571);
}

double NNfunction_NN_2_4::synapse0x1265000() {
   return (neuron0x1261ab0()*-3.6242);
}

double NNfunction_NN_2_4::synapse0x1265040() {
   return (neuron0x1261df0()*-1.04181);
}

double NNfunction_NN_2_4::synapse0x1265080() {
   return (neuron0x1262130()*0.0141206);
}

double NNfunction_NN_2_4::synapse0x126ba70() {
   return (neuron0x1262470()*-0.0826948);
}

double NNfunction_NN_2_4::synapse0x126bab0() {
   return (neuron0x12627b0()*0.0377824);
}

double NNfunction_NN_2_4::synapse0x126baf0() {
   return (neuron0x1262af0()*-0.0264613);
}

double NNfunction_NN_2_4::synapse0x126bb30() {
   return (neuron0x1262e30()*0.0603067);
}

double NNfunction_NN_2_4::synapse0x126bb70() {
   return (neuron0x1263170()*0.0124903);
}

double NNfunction_NN_2_4::synapse0x126bbb0() {
   return (neuron0x12634b0()*0.0844159);
}

double NNfunction_NN_2_4::synapse0x126bbf0() {
   return (neuron0x12637f0()*-0.0071769);
}

double NNfunction_NN_2_4::synapse0x126bc30() {
   return (neuron0x1263b30()*2.26693);
}

double NNfunction_NN_2_4::synapse0x126bc70() {
   return (neuron0x1263e70()*-0.0738048);
}

double NNfunction_NN_2_4::synapse0x126bcb0() {
   return (neuron0x12641b0()*-0.0329684);
}

double NNfunction_NN_2_4::synapse0x126bcf0() {
   return (neuron0x12644f0()*-0.223619);
}

double NNfunction_NN_2_4::synapse0x126bd30() {
   return (neuron0x1264830()*0.0106423);
}

double NNfunction_NN_2_4::synapse0x126b6b0() {
   return (neuron0x1264b70()*-0.0308644);
}

double NNfunction_NN_2_4::synapse0x126b6f0() {
   return (neuron0x12650d0()*-0.111122);
}

double NNfunction_NN_2_4::synapse0x126be80() {
   return (neuron0x12652f0()*-0.0449312);
}

double NNfunction_NN_2_4::synapse0x126bec0() {
   return (neuron0x1265630()*0.00518802);
}

double NNfunction_NN_2_4::synapse0x126bf00() {
   return (neuron0x1265970()*-0.0787179);
}

double NNfunction_NN_2_4::synapse0x126bf40() {
   return (neuron0x1265cb0()*0.0458677);
}

double NNfunction_NN_2_4::synapse0x126bf80() {
   return (neuron0x1265ff0()*-0.0866387);
}

double NNfunction_NN_2_4::synapse0x126bfc0() {
   return (neuron0x1266330()*1.47545);
}

double NNfunction_NN_2_4::synapse0x126c340() {
   return (neuron0x1261770()*-0.196279);
}

double NNfunction_NN_2_4::synapse0x126c380() {
   return (neuron0x1261ab0()*-0.770309);
}

double NNfunction_NN_2_4::synapse0x126c3c0() {
   return (neuron0x1261df0()*0.845861);
}

double NNfunction_NN_2_4::synapse0x126c400() {
   return (neuron0x1262130()*0.421753);
}

double NNfunction_NN_2_4::synapse0x126c440() {
   return (neuron0x1262470()*-0.0646739);
}

double NNfunction_NN_2_4::synapse0x126c480() {
   return (neuron0x12627b0()*0.268196);
}

double NNfunction_NN_2_4::synapse0x126c4c0() {
   return (neuron0x1262af0()*-0.649333);
}

double NNfunction_NN_2_4::synapse0x126c500() {
   return (neuron0x1262e30()*-0.724322);
}

double NNfunction_NN_2_4::synapse0x126c540() {
   return (neuron0x1263170()*0.359445);
}

double NNfunction_NN_2_4::synapse0x126c580() {
   return (neuron0x12634b0()*-0.672555);
}

double NNfunction_NN_2_4::synapse0x126c5c0() {
   return (neuron0x12637f0()*0.395961);
}

double NNfunction_NN_2_4::synapse0x126c600() {
   return (neuron0x1263b30()*-1.34127);
}

double NNfunction_NN_2_4::synapse0x126c640() {
   return (neuron0x1263e70()*-0.326824);
}

double NNfunction_NN_2_4::synapse0x126c680() {
   return (neuron0x12641b0()*0.930977);
}

double NNfunction_NN_2_4::synapse0x126c6c0() {
   return (neuron0x12644f0()*1.58267);
}

double NNfunction_NN_2_4::synapse0x126c700() {
   return (neuron0x1264830()*0.220075);
}

double NNfunction_NN_2_4::synapse0x126c190() {
   return (neuron0x1264b70()*0.193634);
}

double NNfunction_NN_2_4::synapse0x126c1d0() {
   return (neuron0x12650d0()*-0.95905);
}

double NNfunction_NN_2_4::synapse0x126c850() {
   return (neuron0x12652f0()*-0.0873011);
}

double NNfunction_NN_2_4::synapse0x126c890() {
   return (neuron0x1265630()*-0.0498823);
}

double NNfunction_NN_2_4::synapse0x126c8d0() {
   return (neuron0x1265970()*0.4034);
}

double NNfunction_NN_2_4::synapse0x126c910() {
   return (neuron0x1265cb0()*-0.175804);
}

double NNfunction_NN_2_4::synapse0x126c950() {
   return (neuron0x1265ff0()*-0.0758327);
}

double NNfunction_NN_2_4::synapse0x126c990() {
   return (neuron0x1266330()*1.50211);
}

double NNfunction_NN_2_4::synapse0x126cd10() {
   return (neuron0x1261770()*0.149508);
}

double NNfunction_NN_2_4::synapse0x126cd50() {
   return (neuron0x1261ab0()*3.66232);
}

double NNfunction_NN_2_4::synapse0x126cd90() {
   return (neuron0x1261df0()*2.84329);
}

double NNfunction_NN_2_4::synapse0x126cdd0() {
   return (neuron0x1262130()*-0.0529296);
}

double NNfunction_NN_2_4::synapse0x126ce10() {
   return (neuron0x1262470()*-0.0116167);
}

double NNfunction_NN_2_4::synapse0x126ce50() {
   return (neuron0x12627b0()*0.0200288);
}

double NNfunction_NN_2_4::synapse0x126ce90() {
   return (neuron0x1262af0()*-0.0455962);
}

double NNfunction_NN_2_4::synapse0x126ced0() {
   return (neuron0x1262e30()*-0.0546057);
}

double NNfunction_NN_2_4::synapse0x126cf10() {
   return (neuron0x1263170()*0.0288324);
}

double NNfunction_NN_2_4::synapse0x126cf50() {
   return (neuron0x12634b0()*-0.0161344);
}

double NNfunction_NN_2_4::synapse0x126cf90() {
   return (neuron0x12637f0()*-0.00830378);
}

double NNfunction_NN_2_4::synapse0x126cfd0() {
   return (neuron0x1263b30()*-0.012703);
}

double NNfunction_NN_2_4::synapse0x126d010() {
   return (neuron0x1263e70()*-0.0404444);
}

double NNfunction_NN_2_4::synapse0x126d050() {
   return (neuron0x12641b0()*0.0643854);
}

double NNfunction_NN_2_4::synapse0x126d090() {
   return (neuron0x12644f0()*-0.254075);
}

double NNfunction_NN_2_4::synapse0x126d0d0() {
   return (neuron0x1264830()*-0.0315558);
}

double NNfunction_NN_2_4::synapse0x126cb60() {
   return (neuron0x1264b70()*-1.5572e-05);
}

double NNfunction_NN_2_4::synapse0x126cba0() {
   return (neuron0x12650d0()*-0.0127296);
}

double NNfunction_NN_2_4::synapse0x1269930() {
   return (neuron0x12652f0()*-0.0402553);
}

double NNfunction_NN_2_4::synapse0x1269970() {
   return (neuron0x1265630()*0.0258385);
}

double NNfunction_NN_2_4::synapse0x12699b0() {
   return (neuron0x1265970()*0.0387115);
}

double NNfunction_NN_2_4::synapse0x12699f0() {
   return (neuron0x1265cb0()*-0.0147973);
}

double NNfunction_NN_2_4::synapse0x1269a30() {
   return (neuron0x1265ff0()*-0.0311033);
}

double NNfunction_NN_2_4::synapse0x1269a70() {
   return (neuron0x1266330()*-1.87021);
}

double NNfunction_NN_2_4::synapse0x1269df0() {
   return (neuron0x1261770()*0.0820563);
}

double NNfunction_NN_2_4::synapse0x1269e30() {
   return (neuron0x1261ab0()*-7.73199);
}

double NNfunction_NN_2_4::synapse0x1269e70() {
   return (neuron0x1261df0()*-1.9295);
}

double NNfunction_NN_2_4::synapse0x1269eb0() {
   return (neuron0x1262130()*-0.0113057);
}

double NNfunction_NN_2_4::synapse0x1269ef0() {
   return (neuron0x1262470()*0.00912218);
}

double NNfunction_NN_2_4::synapse0x1269f30() {
   return (neuron0x12627b0()*-0.00692228);
}

double NNfunction_NN_2_4::synapse0x1269f70() {
   return (neuron0x1262af0()*-0.00533613);
}

double NNfunction_NN_2_4::synapse0x1269fb0() {
   return (neuron0x1262e30()*0.0982139);
}

double NNfunction_NN_2_4::synapse0x1269ff0() {
   return (neuron0x1263170()*0.00532038);
}

double NNfunction_NN_2_4::synapse0x126a030() {
   return (neuron0x12634b0()*0.0424387);
}

double NNfunction_NN_2_4::synapse0x126a070() {
   return (neuron0x12637f0()*0.00171175);
}

double NNfunction_NN_2_4::synapse0x126a0b0() {
   return (neuron0x1263b30()*-0.0783469);
}

double NNfunction_NN_2_4::synapse0x126a0f0() {
   return (neuron0x1263e70()*-0.0101964);
}

double NNfunction_NN_2_4::synapse0x126e230() {
   return (neuron0x12641b0()*0.00529052);
}

double NNfunction_NN_2_4::synapse0x126e270() {
   return (neuron0x12644f0()*-0.0601045);
}

double NNfunction_NN_2_4::synapse0x126e2b0() {
   return (neuron0x1264830()*0.0119495);
}

double NNfunction_NN_2_4::synapse0x1269c40() {
   return (neuron0x1264b70()*0.00549374);
}

double NNfunction_NN_2_4::synapse0x1269c80() {
   return (neuron0x12650d0()*-0.0596409);
}

double NNfunction_NN_2_4::synapse0x126e400() {
   return (neuron0x12652f0()*-0.028515);
}

double NNfunction_NN_2_4::synapse0x126e440() {
   return (neuron0x1265630()*0.0369028);
}

double NNfunction_NN_2_4::synapse0x126e480() {
   return (neuron0x1265970()*-0.0327705);
}

double NNfunction_NN_2_4::synapse0x126e4c0() {
   return (neuron0x1265cb0()*-0.0223196);
}

double NNfunction_NN_2_4::synapse0x126e500() {
   return (neuron0x1265ff0()*-0.0670976);
}

double NNfunction_NN_2_4::synapse0x126e540() {
   return (neuron0x1266330()*3.817);
}

double NNfunction_NN_2_4::synapse0x126e8c0() {
   return (neuron0x1261770()*-0.0973408);
}

double NNfunction_NN_2_4::synapse0x126e900() {
   return (neuron0x1261ab0()*3.63607);
}

double NNfunction_NN_2_4::synapse0x126e940() {
   return (neuron0x1261df0()*-1.3706);
}

double NNfunction_NN_2_4::synapse0x126e980() {
   return (neuron0x1262130()*0.0250612);
}

double NNfunction_NN_2_4::synapse0x126e9c0() {
   return (neuron0x1262470()*-0.0607417);
}

double NNfunction_NN_2_4::synapse0x126ea00() {
   return (neuron0x12627b0()*-0.0377181);
}

double NNfunction_NN_2_4::synapse0x126ea40() {
   return (neuron0x1262af0()*-0.0864915);
}

double NNfunction_NN_2_4::synapse0x126ea80() {
   return (neuron0x1262e30()*0.030549);
}

double NNfunction_NN_2_4::synapse0x126eac0() {
   return (neuron0x1263170()*0.0965283);
}

double NNfunction_NN_2_4::synapse0x126eb00() {
   return (neuron0x12634b0()*-0.0178329);
}

double NNfunction_NN_2_4::synapse0x126eb40() {
   return (neuron0x12637f0()*0.0673281);
}

double NNfunction_NN_2_4::synapse0x126eb80() {
   return (neuron0x1263b30()*0.825505);
}

double NNfunction_NN_2_4::synapse0x126ebc0() {
   return (neuron0x1263e70()*0.0555496);
}

double NNfunction_NN_2_4::synapse0x126ec00() {
   return (neuron0x12641b0()*0.0523686);
}

double NNfunction_NN_2_4::synapse0x126ec40() {
   return (neuron0x12644f0()*-0.230419);
}

double NNfunction_NN_2_4::synapse0x126ec80() {
   return (neuron0x1264830()*-0.0078494);
}

double NNfunction_NN_2_4::synapse0x126e710() {
   return (neuron0x1264b70()*0.0338059);
}

double NNfunction_NN_2_4::synapse0x126e750() {
   return (neuron0x12650d0()*-0.0147144);
}

double NNfunction_NN_2_4::synapse0x126edd0() {
   return (neuron0x12652f0()*0.0106304);
}

double NNfunction_NN_2_4::synapse0x126ee10() {
   return (neuron0x1265630()*-0.00285183);
}

double NNfunction_NN_2_4::synapse0x126ee50() {
   return (neuron0x1265970()*-0.0552589);
}

double NNfunction_NN_2_4::synapse0x126ee90() {
   return (neuron0x1265cb0()*0.0317464);
}

double NNfunction_NN_2_4::synapse0x126eed0() {
   return (neuron0x1265ff0()*-0.0995439);
}

double NNfunction_NN_2_4::synapse0x126ef10() {
   return (neuron0x1266330()*-1.33483);
}

double NNfunction_NN_2_4::synapse0x126f290() {
   return (neuron0x1261770()*0.152595);
}

double NNfunction_NN_2_4::synapse0x126f2d0() {
   return (neuron0x1261ab0()*8.00133);
}

double NNfunction_NN_2_4::synapse0x126f310() {
   return (neuron0x1261df0()*0.320731);
}

double NNfunction_NN_2_4::synapse0x126f350() {
   return (neuron0x1262130()*-0.0392084);
}

double NNfunction_NN_2_4::synapse0x126f390() {
   return (neuron0x1262470()*-0.00891858);
}

double NNfunction_NN_2_4::synapse0x126f3d0() {
   return (neuron0x12627b0()*0.0290572);
}

double NNfunction_NN_2_4::synapse0x126f410() {
   return (neuron0x1262af0()*0.0407804);
}

double NNfunction_NN_2_4::synapse0x126f450() {
   return (neuron0x1262e30()*-0.0125921);
}

double NNfunction_NN_2_4::synapse0x126f490() {
   return (neuron0x1263170()*0.0251598);
}

double NNfunction_NN_2_4::synapse0x126f4d0() {
   return (neuron0x12634b0()*-0.0586068);
}

double NNfunction_NN_2_4::synapse0x126f510() {
   return (neuron0x12637f0()*0.0571762);
}

double NNfunction_NN_2_4::synapse0x126f550() {
   return (neuron0x1263b30()*0.230329);
}

double NNfunction_NN_2_4::synapse0x126f590() {
   return (neuron0x1263e70()*-0.00253535);
}

double NNfunction_NN_2_4::synapse0x126f5d0() {
   return (neuron0x12641b0()*-1.69239e-05);
}

double NNfunction_NN_2_4::synapse0x126f610() {
   return (neuron0x12644f0()*-0.0802426);
}

double NNfunction_NN_2_4::synapse0x126f650() {
   return (neuron0x1264830()*0.0106028);
}

double NNfunction_NN_2_4::synapse0x126f0e0() {
   return (neuron0x1264b70()*0.0342027);
}

double NNfunction_NN_2_4::synapse0x126f120() {
   return (neuron0x12650d0()*-0.00170186);
}

double NNfunction_NN_2_4::synapse0x126f7a0() {
   return (neuron0x12652f0()*0.0327654);
}

double NNfunction_NN_2_4::synapse0x126f7e0() {
   return (neuron0x1265630()*-0.0184827);
}

double NNfunction_NN_2_4::synapse0x126f820() {
   return (neuron0x1265970()*-0.0221517);
}

double NNfunction_NN_2_4::synapse0x126f860() {
   return (neuron0x1265cb0()*0.0134038);
}

double NNfunction_NN_2_4::synapse0x126f8a0() {
   return (neuron0x1265ff0()*0.0861827);
}

double NNfunction_NN_2_4::synapse0x126f8e0() {
   return (neuron0x1266330()*3.35361);
}

double NNfunction_NN_2_4::synapse0x126fc60() {
   return (neuron0x1261770()*0.233818);
}

double NNfunction_NN_2_4::synapse0x126fca0() {
   return (neuron0x1261ab0()*-0.813269);
}

double NNfunction_NN_2_4::synapse0x126fce0() {
   return (neuron0x1261df0()*-1.99103);
}

double NNfunction_NN_2_4::synapse0x126fd20() {
   return (neuron0x1262130()*-0.230912);
}

double NNfunction_NN_2_4::synapse0x126fd60() {
   return (neuron0x1262470()*-0.147518);
}

double NNfunction_NN_2_4::synapse0x126fda0() {
   return (neuron0x12627b0()*-0.734406);
}

double NNfunction_NN_2_4::synapse0x126fde0() {
   return (neuron0x1262af0()*-0.293288);
}

double NNfunction_NN_2_4::synapse0x126fe20() {
   return (neuron0x1262e30()*-0.0634682);
}

double NNfunction_NN_2_4::synapse0x126fe60() {
   return (neuron0x1263170()*-0.307904);
}

double NNfunction_NN_2_4::synapse0x126fea0() {
   return (neuron0x12634b0()*-0.404786);
}

double NNfunction_NN_2_4::synapse0x126fee0() {
   return (neuron0x12637f0()*-0.0720966);
}

double NNfunction_NN_2_4::synapse0x126ff20() {
   return (neuron0x1263b30()*0.396661);
}

double NNfunction_NN_2_4::synapse0x126ff60() {
   return (neuron0x1263e70()*-0.147615);
}

double NNfunction_NN_2_4::synapse0x126ffa0() {
   return (neuron0x12641b0()*0.313991);
}

double NNfunction_NN_2_4::synapse0x126ffe0() {
   return (neuron0x12644f0()*-0.279597);
}

double NNfunction_NN_2_4::synapse0x1270020() {
   return (neuron0x1264830()*0.233584);
}

double NNfunction_NN_2_4::synapse0x126fab0() {
   return (neuron0x1264b70()*-0.12353);
}

double NNfunction_NN_2_4::synapse0x126faf0() {
   return (neuron0x12650d0()*0.118222);
}

double NNfunction_NN_2_4::synapse0x1270170() {
   return (neuron0x12652f0()*-0.108298);
}

double NNfunction_NN_2_4::synapse0x12701b0() {
   return (neuron0x1265630()*-0.155336);
}

double NNfunction_NN_2_4::synapse0x12701f0() {
   return (neuron0x1265970()*0.161286);
}

double NNfunction_NN_2_4::synapse0x1270230() {
   return (neuron0x1265cb0()*0.387469);
}

double NNfunction_NN_2_4::synapse0x1270270() {
   return (neuron0x1265ff0()*0.23184);
}

double NNfunction_NN_2_4::synapse0x12702b0() {
   return (neuron0x1266330()*-2.65661);
}

double NNfunction_NN_2_4::synapse0x1270630() {
   return (neuron0x1261770()*0.0282284);
}

double NNfunction_NN_2_4::synapse0x1261990() {
   return (neuron0x1261ab0()*-7.44714);
}

double NNfunction_NN_2_4::synapse0x12619d0() {
   return (neuron0x1261df0()*-6.30148);
}

double NNfunction_NN_2_4::synapse0x1261cd0() {
   return (neuron0x1262130()*-0.000727132);
}

double NNfunction_NN_2_4::synapse0x1261d10() {
   return (neuron0x1262470()*0.034681);
}

double NNfunction_NN_2_4::synapse0x1262010() {
   return (neuron0x12627b0()*-0.0215779);
}

double NNfunction_NN_2_4::synapse0x1262050() {
   return (neuron0x1262af0()*-0.0111836);
}

double NNfunction_NN_2_4::synapse0x1262350() {
   return (neuron0x1262e30()*0.0396593);
}

double NNfunction_NN_2_4::synapse0x1262390() {
   return (neuron0x1263170()*-0.0484702);
}

double NNfunction_NN_2_4::synapse0x1262690() {
   return (neuron0x12634b0()*-0.0342353);
}

double NNfunction_NN_2_4::synapse0x12626d0() {
   return (neuron0x12637f0()*-0.0265654);
}

double NNfunction_NN_2_4::synapse0x12629d0() {
   return (neuron0x1263b30()*-0.0103246);
}

double NNfunction_NN_2_4::synapse0x1262a10() {
   return (neuron0x1263e70()*-0.0401849);
}

double NNfunction_NN_2_4::synapse0x1262d10() {
   return (neuron0x12641b0()*-0.0130288);
}

double NNfunction_NN_2_4::synapse0x1262d50() {
   return (neuron0x12644f0()*0.162925);
}

double NNfunction_NN_2_4::synapse0x1263050() {
   return (neuron0x1264830()*0.0422706);
}

double NNfunction_NN_2_4::synapse0x1263090() {
   return (neuron0x1264b70()*0.0879993);
}

double NNfunction_NN_2_4::synapse0x1263390() {
   return (neuron0x12650d0()*-0.015588);
}

double NNfunction_NN_2_4::synapse0x12633d0() {
   return (neuron0x12652f0()*0.00350635);
}

double NNfunction_NN_2_4::synapse0x12636d0() {
   return (neuron0x1265630()*0.0184833);
}

double NNfunction_NN_2_4::synapse0x1263710() {
   return (neuron0x1265970()*-0.0174053);
}

double NNfunction_NN_2_4::synapse0x1263a10() {
   return (neuron0x1265cb0()*-0.0291648);
}

double NNfunction_NN_2_4::synapse0x1263a50() {
   return (neuron0x1265ff0()*-0.0102726);
}

double NNfunction_NN_2_4::synapse0x1263d50() {
   return (neuron0x1266330()*-0.37625);
}

double NNfunction_NN_2_4::synapse0x1263d90() {
   return (neuron0x1261770()*0.202854);
}

double NNfunction_NN_2_4::synapse0x1264a50() {
   return (neuron0x1261ab0()*-1.13314);
}

double NNfunction_NN_2_4::synapse0x1264a90() {
   return (neuron0x1261df0()*-0.617162);
}

double NNfunction_NN_2_4::synapse0x1270480() {
   return (neuron0x1262130()*-0.0828543);
}

double NNfunction_NN_2_4::synapse0x12704c0() {
   return (neuron0x1262470()*0.0171265);
}

double NNfunction_NN_2_4::synapse0x1264d90() {
   return (neuron0x12627b0()*-0.00227692);
}

double NNfunction_NN_2_4::synapse0x1264dd0() {
   return (neuron0x1262af0()*0.0164575);
}

double NNfunction_NN_2_4::synapse0x1012d20() {
   return (neuron0x1262e30()*0.0181854);
}

double NNfunction_NN_2_4::synapse0x1012d60() {
   return (neuron0x1263170()*-0.130335);
}

double NNfunction_NN_2_4::synapse0x1265510() {
   return (neuron0x12634b0()*-0.0533771);
}

double NNfunction_NN_2_4::synapse0x1265550() {
   return (neuron0x12637f0()*-0.0852779);
}

double NNfunction_NN_2_4::synapse0x1265850() {
   return (neuron0x1263b30()*0.13795);
}

double NNfunction_NN_2_4::synapse0x1265890() {
   return (neuron0x1263e70()*-0.0681583);
}

double NNfunction_NN_2_4::synapse0x1265b90() {
   return (neuron0x12641b0()*0.0838174);
}

double NNfunction_NN_2_4::synapse0x1265bd0() {
   return (neuron0x12644f0()*0.12302);
}

double NNfunction_NN_2_4::synapse0x1265ed0() {
   return (neuron0x1264830()*-0.0371818);
}

double NNfunction_NN_2_4::synapse0x1265f10() {
   return (neuron0x1264b70()*-0.00773508);
}

double NNfunction_NN_2_4::synapse0x1266210() {
   return (neuron0x12650d0()*0.0742832);
}

double NNfunction_NN_2_4::synapse0x1266250() {
   return (neuron0x12652f0()*-0.0233872);
}

double NNfunction_NN_2_4::synapse0x1266550() {
   return (neuron0x1265630()*-0.0508066);
}

double NNfunction_NN_2_4::synapse0x1266590() {
   return (neuron0x1265970()*0.0402174);
}

double NNfunction_NN_2_4::synapse0x1264090() {
   return (neuron0x1265cb0()*0.00713396);
}

double NNfunction_NN_2_4::synapse0x12640d0() {
   return (neuron0x1265ff0()*0.0824367);
}

double NNfunction_NN_2_4::synapse0x12723a0() {
   return (neuron0x1266330()*-1.45666);
}

double NNfunction_NN_2_4::synapse0x1272720() {
   return (neuron0x1261770()*0.0520143);
}

double NNfunction_NN_2_4::synapse0x1272760() {
   return (neuron0x1261ab0()*-4.41723);
}

double NNfunction_NN_2_4::synapse0x12727a0() {
   return (neuron0x1261df0()*-0.352297);
}

double NNfunction_NN_2_4::synapse0x12727e0() {
   return (neuron0x1262130()*-0.0221936);
}

double NNfunction_NN_2_4::synapse0x1272820() {
   return (neuron0x1262470()*-0.0126233);
}

double NNfunction_NN_2_4::synapse0x1272860() {
   return (neuron0x12627b0()*-0.051097);
}

double NNfunction_NN_2_4::synapse0x12728a0() {
   return (neuron0x1262af0()*-0.0400669);
}

double NNfunction_NN_2_4::synapse0x12728e0() {
   return (neuron0x1262e30()*-0.0523593);
}

double NNfunction_NN_2_4::synapse0x1272920() {
   return (neuron0x1263170()*-0.0951887);
}

double NNfunction_NN_2_4::synapse0x1272960() {
   return (neuron0x12634b0()*0.0450882);
}

double NNfunction_NN_2_4::synapse0x12729a0() {
   return (neuron0x12637f0()*-0.0483526);
}

double NNfunction_NN_2_4::synapse0x12729e0() {
   return (neuron0x1263b30()*-0.00179424);
}

double NNfunction_NN_2_4::synapse0x1272a20() {
   return (neuron0x1263e70()*-0.0311555);
}

double NNfunction_NN_2_4::synapse0x1272a60() {
   return (neuron0x12641b0()*0.0216647);
}

double NNfunction_NN_2_4::synapse0x1272aa0() {
   return (neuron0x12644f0()*0.168446);
}

double NNfunction_NN_2_4::synapse0x1272ae0() {
   return (neuron0x1264830()*0.0552641);
}

double NNfunction_NN_2_4::synapse0x1272570() {
   return (neuron0x1264b70()*-0.0211104);
}

double NNfunction_NN_2_4::synapse0x12725b0() {
   return (neuron0x12650d0()*0.0328593);
}

double NNfunction_NN_2_4::synapse0x1272c30() {
   return (neuron0x12652f0()*0.017611);
}

double NNfunction_NN_2_4::synapse0x1272c70() {
   return (neuron0x1265630()*-0.0350597);
}

double NNfunction_NN_2_4::synapse0x1272cb0() {
   return (neuron0x1265970()*0.000380248);
}

double NNfunction_NN_2_4::synapse0x1272cf0() {
   return (neuron0x1265cb0()*0.0225405);
}

double NNfunction_NN_2_4::synapse0x1272d30() {
   return (neuron0x1265ff0()*0.00586854);
}

double NNfunction_NN_2_4::synapse0x1272d70() {
   return (neuron0x1266330()*-5.5322);
}

double NNfunction_NN_2_4::synapse0x12730f0() {
   return (neuron0x1261770()*0.039705);
}

double NNfunction_NN_2_4::synapse0x1273130() {
   return (neuron0x1261ab0()*-0.0579328);
}

double NNfunction_NN_2_4::synapse0x1273170() {
   return (neuron0x1261df0()*-0.293121);
}

double NNfunction_NN_2_4::synapse0x12731b0() {
   return (neuron0x1262130()*0.0398519);
}

double NNfunction_NN_2_4::synapse0x12731f0() {
   return (neuron0x1262470()*-0.0358072);
}

double NNfunction_NN_2_4::synapse0x1273230() {
   return (neuron0x12627b0()*-0.028828);
}

double NNfunction_NN_2_4::synapse0x1273270() {
   return (neuron0x1262af0()*-0.00416132);
}

double NNfunction_NN_2_4::synapse0x12732b0() {
   return (neuron0x1262e30()*0.0738625);
}

double NNfunction_NN_2_4::synapse0x12732f0() {
   return (neuron0x1263170()*0.0293785);
}

double NNfunction_NN_2_4::synapse0x1273330() {
   return (neuron0x12634b0()*-0.0119128);
}

double NNfunction_NN_2_4::synapse0x1273370() {
   return (neuron0x12637f0()*0.0210828);
}

double NNfunction_NN_2_4::synapse0x12733b0() {
   return (neuron0x1263b30()*0.0878168);
}

double NNfunction_NN_2_4::synapse0x12733f0() {
   return (neuron0x1263e70()*-0.0492902);
}

double NNfunction_NN_2_4::synapse0x1273430() {
   return (neuron0x12641b0()*-0.00540859);
}

double NNfunction_NN_2_4::synapse0x1273470() {
   return (neuron0x12644f0()*-0.160807);
}

double NNfunction_NN_2_4::synapse0x12734b0() {
   return (neuron0x1264830()*0.0678865);
}

double NNfunction_NN_2_4::synapse0x1272f40() {
   return (neuron0x1264b70()*-0.044564);
}

double NNfunction_NN_2_4::synapse0x1272f80() {
   return (neuron0x12650d0()*-0.0534192);
}

double NNfunction_NN_2_4::synapse0x1273600() {
   return (neuron0x12652f0()*0.0205089);
}

double NNfunction_NN_2_4::synapse0x1273640() {
   return (neuron0x1265630()*-0.0100453);
}

double NNfunction_NN_2_4::synapse0x1273680() {
   return (neuron0x1265970()*0.0123519);
}

double NNfunction_NN_2_4::synapse0x12736c0() {
   return (neuron0x1265cb0()*-0.037219);
}

double NNfunction_NN_2_4::synapse0x1273700() {
   return (neuron0x1265ff0()*-0.00209448);
}

double NNfunction_NN_2_4::synapse0x1273740() {
   return (neuron0x1266330()*6.60013);
}

double NNfunction_NN_2_4::synapse0x1273ac0() {
   return (neuron0x1261770()*-0.257264);
}

double NNfunction_NN_2_4::synapse0x1273b00() {
   return (neuron0x1261ab0()*-0.760949);
}

double NNfunction_NN_2_4::synapse0x1273b40() {
   return (neuron0x1261df0()*0.60621);
}

double NNfunction_NN_2_4::synapse0x1273b80() {
   return (neuron0x1262130()*-0.00661976);
}

double NNfunction_NN_2_4::synapse0x1273bc0() {
   return (neuron0x1262470()*0.165399);
}

double NNfunction_NN_2_4::synapse0x1273c00() {
   return (neuron0x12627b0()*-0.0726332);
}

double NNfunction_NN_2_4::synapse0x1273c40() {
   return (neuron0x1262af0()*0.377858);
}

double NNfunction_NN_2_4::synapse0x1273c80() {
   return (neuron0x1262e30()*0.438052);
}

double NNfunction_NN_2_4::synapse0x1273cc0() {
   return (neuron0x1263170()*-0.0265058);
}

double NNfunction_NN_2_4::synapse0x1273d00() {
   return (neuron0x12634b0()*-0.596317);
}

double NNfunction_NN_2_4::synapse0x1273d40() {
   return (neuron0x12637f0()*0.221996);
}

double NNfunction_NN_2_4::synapse0x1273d80() {
   return (neuron0x1263b30()*-0.668462);
}

double NNfunction_NN_2_4::synapse0x1273dc0() {
   return (neuron0x1263e70()*-0.503515);
}

double NNfunction_NN_2_4::synapse0x1273e00() {
   return (neuron0x12641b0()*-0.365867);
}

double NNfunction_NN_2_4::synapse0x1273e40() {
   return (neuron0x12644f0()*-0.699497);
}

double NNfunction_NN_2_4::synapse0x1273e80() {
   return (neuron0x1264830()*0.198682);
}

double NNfunction_NN_2_4::synapse0x1273910() {
   return (neuron0x1264b70()*-0.422344);
}

double NNfunction_NN_2_4::synapse0x1273950() {
   return (neuron0x12650d0()*0.455198);
}

double NNfunction_NN_2_4::synapse0x1273fd0() {
   return (neuron0x12652f0()*0.123264);
}

double NNfunction_NN_2_4::synapse0x1274010() {
   return (neuron0x1265630()*-0.371269);
}

double NNfunction_NN_2_4::synapse0x1274050() {
   return (neuron0x1265970()*0.306706);
}

double NNfunction_NN_2_4::synapse0x1274090() {
   return (neuron0x1265cb0()*-0.391983);
}

double NNfunction_NN_2_4::synapse0x12740d0() {
   return (neuron0x1265ff0()*0.252317);
}

double NNfunction_NN_2_4::synapse0x1274110() {
   return (neuron0x1266330()*-0.338341);
}

double NNfunction_NN_2_4::synapse0x1274490() {
   return (neuron0x1261770()*0.0559089);
}

double NNfunction_NN_2_4::synapse0x12744d0() {
   return (neuron0x1261ab0()*1.13128);
}

double NNfunction_NN_2_4::synapse0x1274510() {
   return (neuron0x1261df0()*0.524146);
}

double NNfunction_NN_2_4::synapse0x1274550() {
   return (neuron0x1262130()*-0.0914686);
}

double NNfunction_NN_2_4::synapse0x1274590() {
   return (neuron0x1262470()*-0.0448476);
}

double NNfunction_NN_2_4::synapse0x12745d0() {
   return (neuron0x12627b0()*-0.0452082);
}

double NNfunction_NN_2_4::synapse0x1274610() {
   return (neuron0x1262af0()*0.0317619);
}

double NNfunction_NN_2_4::synapse0x1274650() {
   return (neuron0x1262e30()*0.0248663);
}

double NNfunction_NN_2_4::synapse0x1274690() {
   return (neuron0x1263170()*0.00743221);
}

double NNfunction_NN_2_4::synapse0x12746d0() {
   return (neuron0x12634b0()*-0.0287608);
}

double NNfunction_NN_2_4::synapse0x1274710() {
   return (neuron0x12637f0()*0.0121097);
}

double NNfunction_NN_2_4::synapse0x1274750() {
   return (neuron0x1263b30()*-0.231212);
}

double NNfunction_NN_2_4::synapse0x1274790() {
   return (neuron0x1263e70()*0.126062);
}

double NNfunction_NN_2_4::synapse0x12747d0() {
   return (neuron0x12641b0()*0.00257432);
}

double NNfunction_NN_2_4::synapse0x1274810() {
   return (neuron0x12644f0()*-0.0969101);
}

double NNfunction_NN_2_4::synapse0x1274850() {
   return (neuron0x1264830()*0.0562634);
}

double NNfunction_NN_2_4::synapse0x12742e0() {
   return (neuron0x1264b70()*-0.0849523);
}

double NNfunction_NN_2_4::synapse0x1274320() {
   return (neuron0x12650d0()*-0.0898822);
}

double NNfunction_NN_2_4::synapse0x12749a0() {
   return (neuron0x12652f0()*0.0227196);
}

double NNfunction_NN_2_4::synapse0x12749e0() {
   return (neuron0x1265630()*0.0283877);
}

double NNfunction_NN_2_4::synapse0x1274a20() {
   return (neuron0x1265970()*0.0204409);
}

double NNfunction_NN_2_4::synapse0x1274a60() {
   return (neuron0x1265cb0()*0.0685745);
}

double NNfunction_NN_2_4::synapse0x1274aa0() {
   return (neuron0x1265ff0()*0.0589832);
}

double NNfunction_NN_2_4::synapse0x1274ae0() {
   return (neuron0x1266330()*1.35822);
}

double NNfunction_NN_2_4::synapse0x1274e60() {
   return (neuron0x1261770()*-0.0738754);
}

double NNfunction_NN_2_4::synapse0x1274ea0() {
   return (neuron0x1261ab0()*1.57849);
}

double NNfunction_NN_2_4::synapse0x1274ee0() {
   return (neuron0x1261df0()*0.890437);
}

double NNfunction_NN_2_4::synapse0x1274f20() {
   return (neuron0x1262130()*0.378053);
}

double NNfunction_NN_2_4::synapse0x1274f60() {
   return (neuron0x1262470()*-0.0495889);
}

double NNfunction_NN_2_4::synapse0x1274fa0() {
   return (neuron0x12627b0()*0.066972);
}

double NNfunction_NN_2_4::synapse0x1274fe0() {
   return (neuron0x1262af0()*-0.168531);
}

double NNfunction_NN_2_4::synapse0x1275020() {
   return (neuron0x1262e30()*-0.143512);
}

double NNfunction_NN_2_4::synapse0x1275060() {
   return (neuron0x1263170()*-0.31363);
}

double NNfunction_NN_2_4::synapse0x126d220() {
   return (neuron0x12634b0()*0.343718);
}

double NNfunction_NN_2_4::synapse0x126d260() {
   return (neuron0x12637f0()*0.115583);
}

double NNfunction_NN_2_4::synapse0x126d2a0() {
   return (neuron0x1263b30()*-0.00661909);
}

double NNfunction_NN_2_4::synapse0x126d2e0() {
   return (neuron0x1263e70()*0.3694);
}

double NNfunction_NN_2_4::synapse0x126d320() {
   return (neuron0x12641b0()*0.389808);
}

double NNfunction_NN_2_4::synapse0x126d360() {
   return (neuron0x12644f0()*1.81047);
}

double NNfunction_NN_2_4::synapse0x126d3a0() {
   return (neuron0x1264830()*-0.130834);
}

double NNfunction_NN_2_4::synapse0x1274cb0() {
   return (neuron0x1264b70()*-0.253689);
}

double NNfunction_NN_2_4::synapse0x1274cf0() {
   return (neuron0x12650d0()*0.0966382);
}

double NNfunction_NN_2_4::synapse0x126d4f0() {
   return (neuron0x12652f0()*-0.351156);
}

double NNfunction_NN_2_4::synapse0x126d530() {
   return (neuron0x1265630()*0.554131);
}

double NNfunction_NN_2_4::synapse0x126d570() {
   return (neuron0x1265970()*-0.263012);
}

double NNfunction_NN_2_4::synapse0x126d5b0() {
   return (neuron0x1265cb0()*-0.181705);
}

double NNfunction_NN_2_4::synapse0x126d5f0() {
   return (neuron0x1265ff0()*-0.365539);
}

double NNfunction_NN_2_4::synapse0x126d630() {
   return (neuron0x1266330()*0.410998);
}

double NNfunction_NN_2_4::synapse0x126d9b0() {
   return (neuron0x1261770()*-0.0494905);
}

double NNfunction_NN_2_4::synapse0x126d9f0() {
   return (neuron0x1261ab0()*0.822908);
}

double NNfunction_NN_2_4::synapse0x126da30() {
   return (neuron0x1261df0()*1.99454);
}

double NNfunction_NN_2_4::synapse0x126da70() {
   return (neuron0x1262130()*0.00556255);
}

double NNfunction_NN_2_4::synapse0x126dab0() {
   return (neuron0x1262470()*-0.03137);
}

double NNfunction_NN_2_4::synapse0x126daf0() {
   return (neuron0x12627b0()*-0.0493262);
}

double NNfunction_NN_2_4::synapse0x126db30() {
   return (neuron0x1262af0()*0.013968);
}

double NNfunction_NN_2_4::synapse0x126db70() {
   return (neuron0x1262e30()*-0.00193371);
}

double NNfunction_NN_2_4::synapse0x126dbb0() {
   return (neuron0x1263170()*0.00209515);
}

double NNfunction_NN_2_4::synapse0x126dbf0() {
   return (neuron0x12634b0()*0.0201326);
}

double NNfunction_NN_2_4::synapse0x126dc30() {
   return (neuron0x12637f0()*0.0206001);
}

double NNfunction_NN_2_4::synapse0x126dc70() {
   return (neuron0x1263b30()*-0.0535958);
}

double NNfunction_NN_2_4::synapse0x126dcb0() {
   return (neuron0x1263e70()*0.0917582);
}

double NNfunction_NN_2_4::synapse0x126dcf0() {
   return (neuron0x12641b0()*0.00189793);
}

double NNfunction_NN_2_4::synapse0x126dd30() {
   return (neuron0x12644f0()*-0.0931225);
}

double NNfunction_NN_2_4::synapse0x126dd70() {
   return (neuron0x1264830()*-0.00225206);
}

double NNfunction_NN_2_4::synapse0x126d800() {
   return (neuron0x1264b70()*-0.0404539);
}

double NNfunction_NN_2_4::synapse0x126d840() {
   return (neuron0x12650d0()*-0.0199695);
}

double NNfunction_NN_2_4::synapse0x126dec0() {
   return (neuron0x12652f0()*0.00380964);
}

double NNfunction_NN_2_4::synapse0x126df00() {
   return (neuron0x1265630()*0.0162097);
}

double NNfunction_NN_2_4::synapse0x126df40() {
   return (neuron0x1265970()*-0.0434308);
}

double NNfunction_NN_2_4::synapse0x126df80() {
   return (neuron0x1265cb0()*0.00484556);
}

double NNfunction_NN_2_4::synapse0x126dfc0() {
   return (neuron0x1265ff0()*0.0654107);
}

double NNfunction_NN_2_4::synapse0x126e000() {
   return (neuron0x1266330()*-1.81489);
}

double NNfunction_NN_2_4::synapse0x126e1d0() {
   return (neuron0x1261770()*-0.0271264);
}

double NNfunction_NN_2_4::synapse0x1277260() {
   return (neuron0x1261ab0()*2.45789);
}

double NNfunction_NN_2_4::synapse0x12772a0() {
   return (neuron0x1261df0()*-1.28791);
}

double NNfunction_NN_2_4::synapse0x12772e0() {
   return (neuron0x1262130()*0.0228612);
}

double NNfunction_NN_2_4::synapse0x1277320() {
   return (neuron0x1262470()*0.000106231);
}

double NNfunction_NN_2_4::synapse0x1277360() {
   return (neuron0x12627b0()*0.00684422);
}

double NNfunction_NN_2_4::synapse0x12773a0() {
   return (neuron0x1262af0()*-0.0376658);
}

double NNfunction_NN_2_4::synapse0x12773e0() {
   return (neuron0x1262e30()*0.00611565);
}

double NNfunction_NN_2_4::synapse0x1277420() {
   return (neuron0x1263170()*0.0193394);
}

double NNfunction_NN_2_4::synapse0x1277460() {
   return (neuron0x12634b0()*-0.00373212);
}

double NNfunction_NN_2_4::synapse0x12774a0() {
   return (neuron0x12637f0()*0.0277309);
}

double NNfunction_NN_2_4::synapse0x12774e0() {
   return (neuron0x1263b30()*0.631729);
}

double NNfunction_NN_2_4::synapse0x1277520() {
   return (neuron0x1263e70()*0.00990902);
}

double NNfunction_NN_2_4::synapse0x1277560() {
   return (neuron0x12641b0()*0.0175631);
}

double NNfunction_NN_2_4::synapse0x12775a0() {
   return (neuron0x12644f0()*-0.0757914);
}

double NNfunction_NN_2_4::synapse0x12775e0() {
   return (neuron0x1264830()*-0.00610353);
}

double NNfunction_NN_2_4::synapse0x12770b0() {
   return (neuron0x1264b70()*0.0140201);
}

double NNfunction_NN_2_4::synapse0x12770f0() {
   return (neuron0x12650d0()*-0.0177235);
}

double NNfunction_NN_2_4::synapse0x1277730() {
   return (neuron0x12652f0()*-3.13555e-05);
}

double NNfunction_NN_2_4::synapse0x1277770() {
   return (neuron0x1265630()*-0.00734759);
}

double NNfunction_NN_2_4::synapse0x12777b0() {
   return (neuron0x1265970()*0.00943489);
}

double NNfunction_NN_2_4::synapse0x12777f0() {
   return (neuron0x1265cb0()*0.0175273);
}

double NNfunction_NN_2_4::synapse0x1277830() {
   return (neuron0x1265ff0()*-0.00476396);
}

double NNfunction_NN_2_4::synapse0x1277870() {
   return (neuron0x1266330()*0.165646);
}

double NNfunction_NN_2_4::synapse0x1277bf0() {
   return (neuron0x1261770()*0.0576436);
}

double NNfunction_NN_2_4::synapse0x1277c30() {
   return (neuron0x1261ab0()*-2.06953);
}

double NNfunction_NN_2_4::synapse0x1277c70() {
   return (neuron0x1261df0()*-1.32076);
}

double NNfunction_NN_2_4::synapse0x1277cb0() {
   return (neuron0x1262130()*0.00634687);
}

double NNfunction_NN_2_4::synapse0x1277cf0() {
   return (neuron0x1262470()*-0.0238028);
}

double NNfunction_NN_2_4::synapse0x1277d30() {
   return (neuron0x12627b0()*-0.0150661);
}

double NNfunction_NN_2_4::synapse0x1277d70() {
   return (neuron0x1262af0()*0.00661659);
}

double NNfunction_NN_2_4::synapse0x1277db0() {
   return (neuron0x1262e30()*0.00933958);
}

double NNfunction_NN_2_4::synapse0x1277df0() {
   return (neuron0x1263170()*-0.0366358);
}

double NNfunction_NN_2_4::synapse0x1277e30() {
   return (neuron0x12634b0()*-0.0349375);
}

double NNfunction_NN_2_4::synapse0x1277e70() {
   return (neuron0x12637f0()*0.0265383);
}

double NNfunction_NN_2_4::synapse0x1277eb0() {
   return (neuron0x1263b30()*0.0408439);
}

double NNfunction_NN_2_4::synapse0x1277ef0() {
   return (neuron0x1263e70()*-0.0261411);
}

double NNfunction_NN_2_4::synapse0x1277f30() {
   return (neuron0x12641b0()*-0.00388906);
}

double NNfunction_NN_2_4::synapse0x1277f70() {
   return (neuron0x12644f0()*-0.017943);
}

double NNfunction_NN_2_4::synapse0x1277fb0() {
   return (neuron0x1264830()*0.0174241);
}

double NNfunction_NN_2_4::synapse0x1277a40() {
   return (neuron0x1264b70()*0.0141367);
}

double NNfunction_NN_2_4::synapse0x1277a80() {
   return (neuron0x12650d0()*0.0149665);
}

double NNfunction_NN_2_4::synapse0x1278100() {
   return (neuron0x12652f0()*-0.00706725);
}

double NNfunction_NN_2_4::synapse0x1278140() {
   return (neuron0x1265630()*0.00656601);
}

double NNfunction_NN_2_4::synapse0x1278180() {
   return (neuron0x1265970()*-0.0136976);
}

double NNfunction_NN_2_4::synapse0x12781c0() {
   return (neuron0x1265cb0()*-0.0188579);
}

double NNfunction_NN_2_4::synapse0x1278200() {
   return (neuron0x1265ff0()*-0.00109823);
}

double NNfunction_NN_2_4::synapse0x1278240() {
   return (neuron0x1266330()*-0.976718);
}

double NNfunction_NN_2_4::synapse0x12785c0() {
   return (neuron0x1261770()*-0.0835219);
}

double NNfunction_NN_2_4::synapse0x1278600() {
   return (neuron0x1261ab0()*1.23803);
}

double NNfunction_NN_2_4::synapse0x1278640() {
   return (neuron0x1261df0()*0.955524);
}

double NNfunction_NN_2_4::synapse0x1278680() {
   return (neuron0x1262130()*-0.00600814);
}

double NNfunction_NN_2_4::synapse0x12786c0() {
   return (neuron0x1262470()*0.0134745);
}

double NNfunction_NN_2_4::synapse0x1278700() {
   return (neuron0x12627b0()*-0.00638447);
}

double NNfunction_NN_2_4::synapse0x1278740() {
   return (neuron0x1262af0()*0.00216165);
}

double NNfunction_NN_2_4::synapse0x1278780() {
   return (neuron0x1262e30()*-0.00320802);
}

double NNfunction_NN_2_4::synapse0x12787c0() {
   return (neuron0x1263170()*0.0130228);
}

double NNfunction_NN_2_4::synapse0x1278800() {
   return (neuron0x12634b0()*0.0178494);
}

double NNfunction_NN_2_4::synapse0x1278840() {
   return (neuron0x12637f0()*-0.0275901);
}

double NNfunction_NN_2_4::synapse0x1278880() {
   return (neuron0x1263b30()*0.0248943);
}

double NNfunction_NN_2_4::synapse0x12788c0() {
   return (neuron0x1263e70()*0.0330591);
}

double NNfunction_NN_2_4::synapse0x1278900() {
   return (neuron0x12641b0()*0.00580182);
}

double NNfunction_NN_2_4::synapse0x1278940() {
   return (neuron0x12644f0()*-0.0112585);
}

double NNfunction_NN_2_4::synapse0x1278980() {
   return (neuron0x1264830()*0.0236871);
}

double NNfunction_NN_2_4::synapse0x1278410() {
   return (neuron0x1264b70()*-0.0205868);
}

double NNfunction_NN_2_4::synapse0x1278450() {
   return (neuron0x12650d0()*-0.00575261);
}

double NNfunction_NN_2_4::synapse0x1278ad0() {
   return (neuron0x12652f0()*0.0025418);
}

double NNfunction_NN_2_4::synapse0x1278b10() {
   return (neuron0x1265630()*-0.00486095);
}

double NNfunction_NN_2_4::synapse0x1278b50() {
   return (neuron0x1265970()*-0.00868019);
}

double NNfunction_NN_2_4::synapse0x1278b90() {
   return (neuron0x1265cb0()*-7.79212e-05);
}

double NNfunction_NN_2_4::synapse0x1278bd0() {
   return (neuron0x1265ff0()*-0.00724293);
}

double NNfunction_NN_2_4::synapse0x1278c10() {
   return (neuron0x1266330()*0.510469);
}

double NNfunction_NN_2_4::synapse0x1278f90() {
   return (neuron0x1261770()*-0.150591);
}

double NNfunction_NN_2_4::synapse0x1278fd0() {
   return (neuron0x1261ab0()*-0.519452);
}

double NNfunction_NN_2_4::synapse0x1279010() {
   return (neuron0x1261df0()*-1.29466);
}

double NNfunction_NN_2_4::synapse0x1279050() {
   return (neuron0x1262130()*0.017115);
}

double NNfunction_NN_2_4::synapse0x1279090() {
   return (neuron0x1262470()*0.00484026);
}

double NNfunction_NN_2_4::synapse0x12790d0() {
   return (neuron0x12627b0()*0.0473007);
}

double NNfunction_NN_2_4::synapse0x1279110() {
   return (neuron0x1262af0()*-0.0303735);
}

double NNfunction_NN_2_4::synapse0x1279150() {
   return (neuron0x1262e30()*0.0135341);
}

double NNfunction_NN_2_4::synapse0x1279190() {
   return (neuron0x1263170()*-0.0529885);
}

double NNfunction_NN_2_4::synapse0x12791d0() {
   return (neuron0x12634b0()*-0.0370245);
}

double NNfunction_NN_2_4::synapse0x1279210() {
   return (neuron0x12637f0()*0.0158579);
}

double NNfunction_NN_2_4::synapse0x1279250() {
   return (neuron0x1263b30()*0.321728);
}

double NNfunction_NN_2_4::synapse0x1279290() {
   return (neuron0x1263e70()*0.121609);
}

double NNfunction_NN_2_4::synapse0x12792d0() {
   return (neuron0x12641b0()*0.00739999);
}

double NNfunction_NN_2_4::synapse0x1279310() {
   return (neuron0x12644f0()*-2.9907);
}

double NNfunction_NN_2_4::synapse0x1279350() {
   return (neuron0x1264830()*-0.0157456);
}

double NNfunction_NN_2_4::synapse0x1278de0() {
   return (neuron0x1264b70()*-0.0298859);
}

double NNfunction_NN_2_4::synapse0x1278e20() {
   return (neuron0x12650d0()*0.109609);
}

double NNfunction_NN_2_4::synapse0x12794a0() {
   return (neuron0x12652f0()*-0.028998);
}

double NNfunction_NN_2_4::synapse0x12794e0() {
   return (neuron0x1265630()*0.0723771);
}

double NNfunction_NN_2_4::synapse0x1279520() {
   return (neuron0x1265970()*-0.04934);
}

double NNfunction_NN_2_4::synapse0x1279560() {
   return (neuron0x1265cb0()*0.0371762);
}

double NNfunction_NN_2_4::synapse0x12795a0() {
   return (neuron0x1265ff0()*-0.03742);
}

double NNfunction_NN_2_4::synapse0x12795e0() {
   return (neuron0x1266330()*0.924708);
}

double NNfunction_NN_2_4::synapse0x1279960() {
   return (neuron0x1261770()*1.35428);
}

double NNfunction_NN_2_4::synapse0x12799a0() {
   return (neuron0x1261ab0()*-1.33744);
}

double NNfunction_NN_2_4::synapse0x12799e0() {
   return (neuron0x1261df0()*0.530984);
}

double NNfunction_NN_2_4::synapse0x1279a20() {
   return (neuron0x1262130()*-1.20243);
}

double NNfunction_NN_2_4::synapse0x1279a60() {
   return (neuron0x1262470()*-0.0887953);
}

double NNfunction_NN_2_4::synapse0x1279aa0() {
   return (neuron0x12627b0()*0.431776);
}

double NNfunction_NN_2_4::synapse0x1279ae0() {
   return (neuron0x1262af0()*0.048496);
}

double NNfunction_NN_2_4::synapse0x1279b20() {
   return (neuron0x1262e30()*0.610633);
}

double NNfunction_NN_2_4::synapse0x1279b60() {
   return (neuron0x1263170()*-1.20976);
}

double NNfunction_NN_2_4::synapse0x1279ba0() {
   return (neuron0x12634b0()*1.00106);
}

double NNfunction_NN_2_4::synapse0x1279be0() {
   return (neuron0x12637f0()*0.0179677);
}

double NNfunction_NN_2_4::synapse0x1279c20() {
   return (neuron0x1263b30()*-0.526567);
}

double NNfunction_NN_2_4::synapse0x1279c60() {
   return (neuron0x1263e70()*0.0717046);
}

double NNfunction_NN_2_4::synapse0x1279ca0() {
   return (neuron0x12641b0()*-0.786382);
}

double NNfunction_NN_2_4::synapse0x1279ce0() {
   return (neuron0x12644f0()*0.931877);
}

double NNfunction_NN_2_4::synapse0x1279d20() {
   return (neuron0x1264830()*-0.208617);
}

double NNfunction_NN_2_4::synapse0x12797b0() {
   return (neuron0x1264b70()*0.832266);
}

double NNfunction_NN_2_4::synapse0x12797f0() {
   return (neuron0x12650d0()*0.638729);
}

double NNfunction_NN_2_4::synapse0x1279e70() {
   return (neuron0x12652f0()*0.0841387);
}

double NNfunction_NN_2_4::synapse0x1279eb0() {
   return (neuron0x1265630()*-0.158043);
}

double NNfunction_NN_2_4::synapse0x1279ef0() {
   return (neuron0x1265970()*0.695773);
}

double NNfunction_NN_2_4::synapse0x1279f30() {
   return (neuron0x1265cb0()*0.196718);
}

double NNfunction_NN_2_4::synapse0x1279f70() {
   return (neuron0x1265ff0()*-1.20856);
}

double NNfunction_NN_2_4::synapse0x1279fb0() {
   return (neuron0x1266330()*-0.202086);
}

double NNfunction_NN_2_4::synapse0x127a330() {
   return (neuron0x1261770()*-0.461492);
}

double NNfunction_NN_2_4::synapse0x127a370() {
   return (neuron0x1261ab0()*0.135273);
}

double NNfunction_NN_2_4::synapse0x127a3b0() {
   return (neuron0x1261df0()*0.130662);
}

double NNfunction_NN_2_4::synapse0x127a3f0() {
   return (neuron0x1262130()*0.5685);
}

double NNfunction_NN_2_4::synapse0x127a430() {
   return (neuron0x1262470()*0.0663554);
}

double NNfunction_NN_2_4::synapse0x127a470() {
   return (neuron0x12627b0()*-0.0624486);
}

double NNfunction_NN_2_4::synapse0x127a4b0() {
   return (neuron0x1262af0()*-0.337411);
}

double NNfunction_NN_2_4::synapse0x127a4f0() {
   return (neuron0x1262e30()*-0.681582);
}

double NNfunction_NN_2_4::synapse0x127a530() {
   return (neuron0x1263170()*-0.396205);
}

double NNfunction_NN_2_4::synapse0x127a570() {
   return (neuron0x12634b0()*-0.511145);
}

double NNfunction_NN_2_4::synapse0x127a5b0() {
   return (neuron0x12637f0()*-0.351837);
}

double NNfunction_NN_2_4::synapse0x127a5f0() {
   return (neuron0x1263b30()*0.674077);
}

double NNfunction_NN_2_4::synapse0x127a630() {
   return (neuron0x1263e70()*-0.488919);
}

double NNfunction_NN_2_4::synapse0x127a670() {
   return (neuron0x12641b0()*0.0564834);
}

double NNfunction_NN_2_4::synapse0x127a6b0() {
   return (neuron0x12644f0()*-0.361845);
}

double NNfunction_NN_2_4::synapse0x127a6f0() {
   return (neuron0x1264830()*0.523256);
}

double NNfunction_NN_2_4::synapse0x127a180() {
   return (neuron0x1264b70()*-0.165248);
}

double NNfunction_NN_2_4::synapse0x127a1c0() {
   return (neuron0x12650d0()*-1.07592);
}

double NNfunction_NN_2_4::synapse0x127a840() {
   return (neuron0x12652f0()*0.154401);
}

double NNfunction_NN_2_4::synapse0x127a880() {
   return (neuron0x1265630()*-0.122091);
}

double NNfunction_NN_2_4::synapse0x127a8c0() {
   return (neuron0x1265970()*0.114348);
}

double NNfunction_NN_2_4::synapse0x127a900() {
   return (neuron0x1265cb0()*-0.0266184);
}

double NNfunction_NN_2_4::synapse0x127a940() {
   return (neuron0x1265ff0()*0.468386);
}

double NNfunction_NN_2_4::synapse0x127a980() {
   return (neuron0x1266330()*-0.189484);
}

double NNfunction_NN_2_4::synapse0x127ad00() {
   return (neuron0x1261770()*0.15012);
}

double NNfunction_NN_2_4::synapse0x127ad40() {
   return (neuron0x1261ab0()*2.77318);
}

double NNfunction_NN_2_4::synapse0x127ad80() {
   return (neuron0x1261df0()*2.96666);
}

double NNfunction_NN_2_4::synapse0x127adc0() {
   return (neuron0x1262130()*-0.0890277);
}

double NNfunction_NN_2_4::synapse0x127ae00() {
   return (neuron0x1262470()*0.0167469);
}

double NNfunction_NN_2_4::synapse0x127ae40() {
   return (neuron0x12627b0()*0.0738827);
}

double NNfunction_NN_2_4::synapse0x127ae80() {
   return (neuron0x1262af0()*-0.0439135);
}

double NNfunction_NN_2_4::synapse0x127aec0() {
   return (neuron0x1262e30()*-0.0117685);
}

double NNfunction_NN_2_4::synapse0x127af00() {
   return (neuron0x1263170()*0.0155811);
}

double NNfunction_NN_2_4::synapse0x127af40() {
   return (neuron0x12634b0()*0.00355097);
}

double NNfunction_NN_2_4::synapse0x127af80() {
   return (neuron0x12637f0()*-0.0135995);
}

double NNfunction_NN_2_4::synapse0x127afc0() {
   return (neuron0x1263b30()*-0.357782);
}

double NNfunction_NN_2_4::synapse0x127b000() {
   return (neuron0x1263e70()*-0.0672327);
}

double NNfunction_NN_2_4::synapse0x127b040() {
   return (neuron0x12641b0()*0.0711087);
}

double NNfunction_NN_2_4::synapse0x127b080() {
   return (neuron0x12644f0()*-0.0249311);
}

double NNfunction_NN_2_4::synapse0x127b0c0() {
   return (neuron0x1264830()*-0.0491755);
}

double NNfunction_NN_2_4::synapse0x127ab50() {
   return (neuron0x1264b70()*0.0145932);
}

double NNfunction_NN_2_4::synapse0x127ab90() {
   return (neuron0x12650d0()*0.0472705);
}

double NNfunction_NN_2_4::synapse0x127b210() {
   return (neuron0x12652f0()*-0.0724409);
}

double NNfunction_NN_2_4::synapse0x127b250() {
   return (neuron0x1265630()*0.0100329);
}

double NNfunction_NN_2_4::synapse0x127b290() {
   return (neuron0x1265970()*0.0376089);
}

double NNfunction_NN_2_4::synapse0x127b2d0() {
   return (neuron0x1265cb0()*-0.0154479);
}

double NNfunction_NN_2_4::synapse0x127b310() {
   return (neuron0x1265ff0()*-0.10399);
}

double NNfunction_NN_2_4::synapse0x127b350() {
   return (neuron0x1266330()*-1.74213);
}

double NNfunction_NN_2_4::synapse0x127b6d0() {
   return (neuron0x1261770()*-0.190294);
}

double NNfunction_NN_2_4::synapse0x127b710() {
   return (neuron0x1261ab0()*2.42568);
}

double NNfunction_NN_2_4::synapse0x127b750() {
   return (neuron0x1261df0()*1.64379);
}

double NNfunction_NN_2_4::synapse0x127b790() {
   return (neuron0x1262130()*0.226937);
}

double NNfunction_NN_2_4::synapse0x127b7d0() {
   return (neuron0x1262470()*0.180664);
}

double NNfunction_NN_2_4::synapse0x127b810() {
   return (neuron0x12627b0()*-0.0629402);
}

double NNfunction_NN_2_4::synapse0x127b850() {
   return (neuron0x1262af0()*-0.0374936);
}

double NNfunction_NN_2_4::synapse0x127b890() {
   return (neuron0x1262e30()*0.0645367);
}

double NNfunction_NN_2_4::synapse0x127b8d0() {
   return (neuron0x1263170()*0.668931);
}

double NNfunction_NN_2_4::synapse0x127b910() {
   return (neuron0x12634b0()*0.0346687);
}

double NNfunction_NN_2_4::synapse0x127b950() {
   return (neuron0x12637f0()*0.0773837);
}

double NNfunction_NN_2_4::synapse0x127b990() {
   return (neuron0x1263b30()*-1.98466);
}

double NNfunction_NN_2_4::synapse0x127b9d0() {
   return (neuron0x1263e70()*-0.137893);
}

double NNfunction_NN_2_4::synapse0x127ba10() {
   return (neuron0x12641b0()*-0.344661);
}

double NNfunction_NN_2_4::synapse0x127ba50() {
   return (neuron0x12644f0()*-0.0609963);
}

double NNfunction_NN_2_4::synapse0x127ba90() {
   return (neuron0x1264830()*-0.193998);
}

double NNfunction_NN_2_4::synapse0x127b520() {
   return (neuron0x1264b70()*-0.206074);
}

double NNfunction_NN_2_4::synapse0x127b560() {
   return (neuron0x12650d0()*0.0362055);
}

double NNfunction_NN_2_4::synapse0x127bbe0() {
   return (neuron0x12652f0()*-0.228796);
}

double NNfunction_NN_2_4::synapse0x127bc20() {
   return (neuron0x1265630()*-0.0850962);
}

double NNfunction_NN_2_4::synapse0x127bc60() {
   return (neuron0x1265970()*-0.157445);
}

double NNfunction_NN_2_4::synapse0x127bca0() {
   return (neuron0x1265cb0()*-0.0837771);
}

double NNfunction_NN_2_4::synapse0x127bce0() {
   return (neuron0x1265ff0()*0.130085);
}

double NNfunction_NN_2_4::synapse0x127bd20() {
   return (neuron0x1266330()*0.131607);
}

double NNfunction_NN_2_4::synapse0x127c0a0() {
   return (neuron0x1261770()*-0.0315043);
}

double NNfunction_NN_2_4::synapse0x1270670() {
   return (neuron0x1261ab0()*-0.714084);
}

double NNfunction_NN_2_4::synapse0x12706b0() {
   return (neuron0x1261df0()*-0.121156);
}

double NNfunction_NN_2_4::synapse0x12706f0() {
   return (neuron0x1262130()*0.0530728);
}

double NNfunction_NN_2_4::synapse0x1270940() {
   return (neuron0x1262470()*0.00105678);
}

double NNfunction_NN_2_4::synapse0x1270980() {
   return (neuron0x12627b0()*-0.0122553);
}

double NNfunction_NN_2_4::synapse0x12709c0() {
   return (neuron0x1262af0()*-0.00181115);
}

double NNfunction_NN_2_4::synapse0x1270c10() {
   return (neuron0x1262e30()*-0.0323377);
}

double NNfunction_NN_2_4::synapse0x1270c50() {
   return (neuron0x1263170()*0.0244306);
}

double NNfunction_NN_2_4::synapse0x1270ea0() {
   return (neuron0x12634b0()*0.0105124);
}

double NNfunction_NN_2_4::synapse0x1270ee0() {
   return (neuron0x12637f0()*0.00556636);
}

double NNfunction_NN_2_4::synapse0x1270f20() {
   return (neuron0x1263b30()*-0.497126);
}

double NNfunction_NN_2_4::synapse0x1271170() {
   return (neuron0x1263e70()*0.0202447);
}

double NNfunction_NN_2_4::synapse0x12711b0() {
   return (neuron0x12641b0()*-0.00766581);
}

double NNfunction_NN_2_4::synapse0x1271400() {
   return (neuron0x12644f0()*-0.0242259);
}

double NNfunction_NN_2_4::synapse0x1271440() {
   return (neuron0x1264830()*-0.00433772);
}

double NNfunction_NN_2_4::synapse0x127bef0() {
   return (neuron0x1264b70()*0.0131365);
}

double NNfunction_NN_2_4::synapse0x127bf30() {
   return (neuron0x12650d0()*0.00394451);
}

double NNfunction_NN_2_4::synapse0x1271590() {
   return (neuron0x12652f0()*-0.000126776);
}

double NNfunction_NN_2_4::synapse0x1271aa0() {
   return (neuron0x1265630()*0.0150433);
}

double NNfunction_NN_2_4::synapse0x1271ae0() {
   return (neuron0x1265970()*-0.0553832);
}

double NNfunction_NN_2_4::synapse0x1271b20() {
   return (neuron0x1265cb0()*-0.00973586);
}

double NNfunction_NN_2_4::synapse0x1271d70() {
   return (neuron0x1265ff0()*-0.0364247);
}

double NNfunction_NN_2_4::synapse0x1271db0() {
   return (neuron0x1266330()*0.720177);
}

double NNfunction_NN_2_4::synapse0x1271660() {
   return (neuron0x1261770()*0.102547);
}

double NNfunction_NN_2_4::synapse0x12716a0() {
   return (neuron0x1261ab0()*-2.82862);
}

double NNfunction_NN_2_4::synapse0x12716e0() {
   return (neuron0x1261df0()*2.51564);
}

double NNfunction_NN_2_4::synapse0x1271720() {
   return (neuron0x1262130()*-0.0610518);
}

double NNfunction_NN_2_4::synapse0x12720a0() {
   return (neuron0x1262470()*0.076392);
}

double NNfunction_NN_2_4::synapse0x127e3f0() {
   return (neuron0x12627b0()*0.0647277);
}

double NNfunction_NN_2_4::synapse0x127e430() {
   return (neuron0x1262af0()*-0.0540646);
}

double NNfunction_NN_2_4::synapse0x127e470() {
   return (neuron0x1262e30()*-0.0185019);
}

double NNfunction_NN_2_4::synapse0x127e4b0() {
   return (neuron0x1263170()*-0.153703);
}

double NNfunction_NN_2_4::synapse0x127e4f0() {
   return (neuron0x12634b0()*-0.0266256);
}

double NNfunction_NN_2_4::synapse0x127e530() {
   return (neuron0x12637f0()*-0.0366752);
}

double NNfunction_NN_2_4::synapse0x127e570() {
   return (neuron0x1263b30()*-3.02179);
}

double NNfunction_NN_2_4::synapse0x127e5b0() {
   return (neuron0x1263e70()*-0.0559207);
}

double NNfunction_NN_2_4::synapse0x127e5f0() {
   return (neuron0x12641b0()*-0.0885295);
}

double NNfunction_NN_2_4::synapse0x127e630() {
   return (neuron0x12644f0()*0.19377);
}

double NNfunction_NN_2_4::synapse0x127e670() {
   return (neuron0x1264830()*0.060519);
}

double NNfunction_NN_2_4::synapse0x1271f80() {
   return (neuron0x1264b70()*-0.0424516);
}

double NNfunction_NN_2_4::synapse0x1271fc0() {
   return (neuron0x12650d0()*-0.0652388);
}

double NNfunction_NN_2_4::synapse0x127e7c0() {
   return (neuron0x12652f0()*-0.0467276);
}

double NNfunction_NN_2_4::synapse0x127e800() {
   return (neuron0x1265630()*-0.00123322);
}

double NNfunction_NN_2_4::synapse0x127e840() {
   return (neuron0x1265970()*-0.0103506);
}

double NNfunction_NN_2_4::synapse0x127e880() {
   return (neuron0x1265cb0()*-0.0571754);
}

double NNfunction_NN_2_4::synapse0x127e8c0() {
   return (neuron0x1265ff0()*-0.0418554);
}

double NNfunction_NN_2_4::synapse0x127e900() {
   return (neuron0x1266330()*0.256814);
}

double NNfunction_NN_2_4::synapse0x127ec80() {
   return (neuron0x1261770()*0.74038);
}

double NNfunction_NN_2_4::synapse0x127ecc0() {
   return (neuron0x1261ab0()*-3.1874);
}

double NNfunction_NN_2_4::synapse0x127ed00() {
   return (neuron0x1261df0()*-2.95921);
}

double NNfunction_NN_2_4::synapse0x127ed40() {
   return (neuron0x1262130()*0.197621);
}

double NNfunction_NN_2_4::synapse0x127ed80() {
   return (neuron0x1262470()*-0.116737);
}

double NNfunction_NN_2_4::synapse0x127edc0() {
   return (neuron0x12627b0()*0.148839);
}

double NNfunction_NN_2_4::synapse0x127ee00() {
   return (neuron0x1262af0()*0.00815733);
}

double NNfunction_NN_2_4::synapse0x127ee40() {
   return (neuron0x1262e30()*0.0242285);
}

double NNfunction_NN_2_4::synapse0x127ee80() {
   return (neuron0x1263170()*0.147688);
}

double NNfunction_NN_2_4::synapse0x127eec0() {
   return (neuron0x12634b0()*0.188717);
}

double NNfunction_NN_2_4::synapse0x127ef00() {
   return (neuron0x12637f0()*0.348094);
}

double NNfunction_NN_2_4::synapse0x127ef40() {
   return (neuron0x1263b30()*-0.0358499);
}

double NNfunction_NN_2_4::synapse0x127ef80() {
   return (neuron0x1263e70()*0.178291);
}

double NNfunction_NN_2_4::synapse0x127efc0() {
   return (neuron0x12641b0()*-0.0960063);
}

double NNfunction_NN_2_4::synapse0x127f000() {
   return (neuron0x12644f0()*0.213682);
}

double NNfunction_NN_2_4::synapse0x127f040() {
   return (neuron0x1264830()*-0.113154);
}

double NNfunction_NN_2_4::synapse0x127ead0() {
   return (neuron0x1264b70()*0.0850831);
}

double NNfunction_NN_2_4::synapse0x127eb10() {
   return (neuron0x12650d0()*0.126575);
}

double NNfunction_NN_2_4::synapse0x127f190() {
   return (neuron0x12652f0()*-0.0801203);
}

double NNfunction_NN_2_4::synapse0x127f1d0() {
   return (neuron0x1265630()*0.164719);
}

double NNfunction_NN_2_4::synapse0x127f210() {
   return (neuron0x1265970()*0.177827);
}

double NNfunction_NN_2_4::synapse0x127f250() {
   return (neuron0x1265cb0()*-0.116626);
}

double NNfunction_NN_2_4::synapse0x127f290() {
   return (neuron0x1265ff0()*-0.275542);
}

double NNfunction_NN_2_4::synapse0x127f2d0() {
   return (neuron0x1266330()*-2.35921);
}

double NNfunction_NN_2_4::synapse0x127f650() {
   return (neuron0x1261770()*0.237112);
}

double NNfunction_NN_2_4::synapse0x127f690() {
   return (neuron0x1261ab0()*1.00677);
}

double NNfunction_NN_2_4::synapse0x127f6d0() {
   return (neuron0x1261df0()*3.42852);
}

double NNfunction_NN_2_4::synapse0x127f710() {
   return (neuron0x1262130()*-0.067114);
}

double NNfunction_NN_2_4::synapse0x127f750() {
   return (neuron0x1262470()*-0.0130897);
}

double NNfunction_NN_2_4::synapse0x127f790() {
   return (neuron0x12627b0()*-0.0213894);
}

double NNfunction_NN_2_4::synapse0x127f7d0() {
   return (neuron0x1262af0()*0.00391075);
}

double NNfunction_NN_2_4::synapse0x127f810() {
   return (neuron0x1262e30()*-0.00211326);
}

double NNfunction_NN_2_4::synapse0x127f850() {
   return (neuron0x1263170()*-0.0761529);
}

double NNfunction_NN_2_4::synapse0x127f890() {
   return (neuron0x12634b0()*-0.0204106);
}

double NNfunction_NN_2_4::synapse0x127f8d0() {
   return (neuron0x12637f0()*-0.0773051);
}

double NNfunction_NN_2_4::synapse0x127f910() {
   return (neuron0x1263b30()*-0.10153);
}

double NNfunction_NN_2_4::synapse0x127f950() {
   return (neuron0x1263e70()*0.0917291);
}

double NNfunction_NN_2_4::synapse0x127f990() {
   return (neuron0x12641b0()*0.0336797);
}

double NNfunction_NN_2_4::synapse0x127f9d0() {
   return (neuron0x12644f0()*0.16157);
}

double NNfunction_NN_2_4::synapse0x127fa10() {
   return (neuron0x1264830()*0.050543);
}

double NNfunction_NN_2_4::synapse0x127f4a0() {
   return (neuron0x1264b70()*-0.0183035);
}

double NNfunction_NN_2_4::synapse0x127f4e0() {
   return (neuron0x12650d0()*-0.0669229);
}

double NNfunction_NN_2_4::synapse0x127fb60() {
   return (neuron0x12652f0()*0.0845564);
}

double NNfunction_NN_2_4::synapse0x127fba0() {
   return (neuron0x1265630()*0.0255699);
}

double NNfunction_NN_2_4::synapse0x127fbe0() {
   return (neuron0x1265970()*-0.0275869);
}

double NNfunction_NN_2_4::synapse0x127fc20() {
   return (neuron0x1265cb0()*0.0282755);
}

double NNfunction_NN_2_4::synapse0x127fc60() {
   return (neuron0x1265ff0()*0.0323629);
}

double NNfunction_NN_2_4::synapse0x127fca0() {
   return (neuron0x1266330()*3.52905);
}

double NNfunction_NN_2_4::synapse0x1280020() {
   return (neuron0x1261770()*0.297671);
}

double NNfunction_NN_2_4::synapse0x1280060() {
   return (neuron0x1261ab0()*0.690346);
}

double NNfunction_NN_2_4::synapse0x12800a0() {
   return (neuron0x1261df0()*1.60129);
}

double NNfunction_NN_2_4::synapse0x12800e0() {
   return (neuron0x1262130()*0.225983);
}

double NNfunction_NN_2_4::synapse0x1280120() {
   return (neuron0x1262470()*0.108397);
}

double NNfunction_NN_2_4::synapse0x1280160() {
   return (neuron0x12627b0()*-0.116061);
}

double NNfunction_NN_2_4::synapse0x12801a0() {
   return (neuron0x1262af0()*-0.398397);
}

double NNfunction_NN_2_4::synapse0x12801e0() {
   return (neuron0x1262e30()*0.159725);
}

double NNfunction_NN_2_4::synapse0x1280220() {
   return (neuron0x1263170()*0.777788);
}

double NNfunction_NN_2_4::synapse0x1280260() {
   return (neuron0x12634b0()*-0.201842);
}

double NNfunction_NN_2_4::synapse0x12802a0() {
   return (neuron0x12637f0()*-0.23646);
}

double NNfunction_NN_2_4::synapse0x12802e0() {
   return (neuron0x1263b30()*0.879139);
}

double NNfunction_NN_2_4::synapse0x1280320() {
   return (neuron0x1263e70()*0.309277);
}

double NNfunction_NN_2_4::synapse0x1280360() {
   return (neuron0x12641b0()*0.184622);
}

double NNfunction_NN_2_4::synapse0x12803a0() {
   return (neuron0x12644f0()*-0.189169);
}

double NNfunction_NN_2_4::synapse0x12803e0() {
   return (neuron0x1264830()*-0.0954196);
}

double NNfunction_NN_2_4::synapse0x127fe70() {
   return (neuron0x1264b70()*-0.399209);
}

double NNfunction_NN_2_4::synapse0x127feb0() {
   return (neuron0x12650d0()*-0.87477);
}

double NNfunction_NN_2_4::synapse0x1280530() {
   return (neuron0x12652f0()*0.238669);
}

double NNfunction_NN_2_4::synapse0x1280570() {
   return (neuron0x1265630()*0.255127);
}

double NNfunction_NN_2_4::synapse0x12805b0() {
   return (neuron0x1265970()*0.397618);
}

double NNfunction_NN_2_4::synapse0x12805f0() {
   return (neuron0x1265cb0()*-0.114618);
}

double NNfunction_NN_2_4::synapse0x1280630() {
   return (neuron0x1265ff0()*0.0207456);
}

double NNfunction_NN_2_4::synapse0x1280670() {
   return (neuron0x1266330()*-0.790209);
}

double NNfunction_NN_2_4::synapse0x12809f0() {
   return (neuron0x1261770()*-1.43519);
}

double NNfunction_NN_2_4::synapse0x1280a30() {
   return (neuron0x1261ab0()*-2.1122);
}

double NNfunction_NN_2_4::synapse0x1280a70() {
   return (neuron0x1261df0()*-2.17153);
}

double NNfunction_NN_2_4::synapse0x1280ab0() {
   return (neuron0x1262130()*-0.204383);
}

double NNfunction_NN_2_4::synapse0x1280af0() {
   return (neuron0x1262470()*0.109799);
}

double NNfunction_NN_2_4::synapse0x1280b30() {
   return (neuron0x12627b0()*0.0452676);
}

double NNfunction_NN_2_4::synapse0x1280b70() {
   return (neuron0x1262af0()*-0.0591009);
}

double NNfunction_NN_2_4::synapse0x1280bb0() {
   return (neuron0x1262e30()*0.339544);
}

double NNfunction_NN_2_4::synapse0x1280bf0() {
   return (neuron0x1263170()*-0.194009);
}

double NNfunction_NN_2_4::synapse0x1280c30() {
   return (neuron0x12634b0()*0.209773);
}

double NNfunction_NN_2_4::synapse0x1280c70() {
   return (neuron0x12637f0()*-0.0051498);
}

double NNfunction_NN_2_4::synapse0x1280cb0() {
   return (neuron0x1263b30()*-0.595526);
}

double NNfunction_NN_2_4::synapse0x1280cf0() {
   return (neuron0x1263e70()*-0.0197192);
}

double NNfunction_NN_2_4::synapse0x1280d30() {
   return (neuron0x12641b0()*0.230197);
}

double NNfunction_NN_2_4::synapse0x1280d70() {
   return (neuron0x12644f0()*0.00204151);
}

double NNfunction_NN_2_4::synapse0x1280db0() {
   return (neuron0x1264830()*-0.115438);
}

double NNfunction_NN_2_4::synapse0x1280840() {
   return (neuron0x1264b70()*-0.106323);
}

double NNfunction_NN_2_4::synapse0x1280880() {
   return (neuron0x12650d0()*-0.135948);
}

double NNfunction_NN_2_4::synapse0x1280f00() {
   return (neuron0x12652f0()*-0.0576731);
}

double NNfunction_NN_2_4::synapse0x1280f40() {
   return (neuron0x1265630()*-0.118803);
}

double NNfunction_NN_2_4::synapse0x1280f80() {
   return (neuron0x1265970()*-0.0345905);
}

double NNfunction_NN_2_4::synapse0x1280fc0() {
   return (neuron0x1265cb0()*0.128222);
}

double NNfunction_NN_2_4::synapse0x1281000() {
   return (neuron0x1265ff0()*0.283665);
}

double NNfunction_NN_2_4::synapse0x1281040() {
   return (neuron0x1266330()*2.46553);
}

double NNfunction_NN_2_4::synapse0x12813c0() {
   return (neuron0x1261770()*-0.0225642);
}

double NNfunction_NN_2_4::synapse0x1281400() {
   return (neuron0x1261ab0()*-2.31959);
}

double NNfunction_NN_2_4::synapse0x1281440() {
   return (neuron0x1261df0()*2.16318);
}

double NNfunction_NN_2_4::synapse0x1281480() {
   return (neuron0x1262130()*0.0115811);
}

double NNfunction_NN_2_4::synapse0x12814c0() {
   return (neuron0x1262470()*0.0104044);
}

double NNfunction_NN_2_4::synapse0x1281500() {
   return (neuron0x12627b0()*-0.0320283);
}

double NNfunction_NN_2_4::synapse0x1281540() {
   return (neuron0x1262af0()*-0.0216681);
}

double NNfunction_NN_2_4::synapse0x1281580() {
   return (neuron0x1262e30()*0.00344592);
}

double NNfunction_NN_2_4::synapse0x12815c0() {
   return (neuron0x1263170()*0.0477192);
}

double NNfunction_NN_2_4::synapse0x1281600() {
   return (neuron0x12634b0()*0.0115163);
}

double NNfunction_NN_2_4::synapse0x1281640() {
   return (neuron0x12637f0()*0.0135897);
}

double NNfunction_NN_2_4::synapse0x1281680() {
   return (neuron0x1263b30()*0.805583);
}

double NNfunction_NN_2_4::synapse0x12816c0() {
   return (neuron0x1263e70()*0.0476181);
}

double NNfunction_NN_2_4::synapse0x1281700() {
   return (neuron0x12641b0()*0.0348467);
}

double NNfunction_NN_2_4::synapse0x1281740() {
   return (neuron0x12644f0()*-0.0956694);
}

double NNfunction_NN_2_4::synapse0x1281780() {
   return (neuron0x1264830()*0.00210333);
}

double NNfunction_NN_2_4::synapse0x1281210() {
   return (neuron0x1264b70()*-0.0171922);
}

double NNfunction_NN_2_4::synapse0x1281250() {
   return (neuron0x12650d0()*-0.01393);
}

double NNfunction_NN_2_4::synapse0x12818d0() {
   return (neuron0x12652f0()*0.00786022);
}

double NNfunction_NN_2_4::synapse0x1281910() {
   return (neuron0x1265630()*0.000948935);
}

double NNfunction_NN_2_4::synapse0x1281950() {
   return (neuron0x1265970()*0.0307812);
}

double NNfunction_NN_2_4::synapse0x1281990() {
   return (neuron0x1265cb0()*0.0169139);
}

double NNfunction_NN_2_4::synapse0x12819d0() {
   return (neuron0x1265ff0()*-0.0449597);
}

double NNfunction_NN_2_4::synapse0x1281a10() {
   return (neuron0x1266330()*0.695294);
}

double NNfunction_NN_2_4::synapse0x1281d90() {
   return (neuron0x1261770()*-0.136257);
}

double NNfunction_NN_2_4::synapse0x1281dd0() {
   return (neuron0x1261ab0()*-7.4264);
}

double NNfunction_NN_2_4::synapse0x1281e10() {
   return (neuron0x1261df0()*-0.540215);
}

double NNfunction_NN_2_4::synapse0x1281e50() {
   return (neuron0x1262130()*0.0413707);
}

double NNfunction_NN_2_4::synapse0x1281e90() {
   return (neuron0x1262470()*-0.00403881);
}

double NNfunction_NN_2_4::synapse0x1281ed0() {
   return (neuron0x12627b0()*-0.0439926);
}

double NNfunction_NN_2_4::synapse0x1281f10() {
   return (neuron0x1262af0()*-0.0454567);
}

double NNfunction_NN_2_4::synapse0x1281f50() {
   return (neuron0x1262e30()*0.0186303);
}

double NNfunction_NN_2_4::synapse0x1281f90() {
   return (neuron0x1263170()*-0.0268239);
}

double NNfunction_NN_2_4::synapse0x1281fd0() {
   return (neuron0x12634b0()*0.0623536);
}

double NNfunction_NN_2_4::synapse0x1282010() {
   return (neuron0x12637f0()*-0.0601717);
}

double NNfunction_NN_2_4::synapse0x1282050() {
   return (neuron0x1263b30()*-0.0885448);
}

double NNfunction_NN_2_4::synapse0x1282090() {
   return (neuron0x1263e70()*0.0175139);
}

double NNfunction_NN_2_4::synapse0x12820d0() {
   return (neuron0x12641b0()*-0.00372166);
}

double NNfunction_NN_2_4::synapse0x1282110() {
   return (neuron0x12644f0()*0.0939303);
}

double NNfunction_NN_2_4::synapse0x1282150() {
   return (neuron0x1264830()*-0.0111344);
}

double NNfunction_NN_2_4::synapse0x1281be0() {
   return (neuron0x1264b70()*-0.0363746);
}

double NNfunction_NN_2_4::synapse0x1281c20() {
   return (neuron0x12650d0()*0.00993178);
}

double NNfunction_NN_2_4::synapse0x12822a0() {
   return (neuron0x12652f0()*-0.0269993);
}

double NNfunction_NN_2_4::synapse0x12822e0() {
   return (neuron0x1265630()*0.0179106);
}

double NNfunction_NN_2_4::synapse0x1282320() {
   return (neuron0x1265970()*0.00907731);
}

double NNfunction_NN_2_4::synapse0x1282360() {
   return (neuron0x1265cb0()*-0.0174966);
}

double NNfunction_NN_2_4::synapse0x12823a0() {
   return (neuron0x1265ff0()*-0.0872293);
}

double NNfunction_NN_2_4::synapse0x12823e0() {
   return (neuron0x1266330()*-3.16642);
}

double NNfunction_NN_2_4::synapse0x1282760() {
   return (neuron0x1261770()*0.0197135);
}

double NNfunction_NN_2_4::synapse0x12827a0() {
   return (neuron0x1261ab0()*-5.27371);
}

double NNfunction_NN_2_4::synapse0x12827e0() {
   return (neuron0x1261df0()*0.0174211);
}

double NNfunction_NN_2_4::synapse0x1282820() {
   return (neuron0x1262130()*-0.0233051);
}

double NNfunction_NN_2_4::synapse0x1282860() {
   return (neuron0x1262470()*0.0334627);
}

double NNfunction_NN_2_4::synapse0x12828a0() {
   return (neuron0x12627b0()*0.0615418);
}

double NNfunction_NN_2_4::synapse0x12828e0() {
   return (neuron0x1262af0()*-0.085699);
}

double NNfunction_NN_2_4::synapse0x1282920() {
   return (neuron0x1262e30()*0.015248);
}

double NNfunction_NN_2_4::synapse0x1282960() {
   return (neuron0x1263170()*-0.0610541);
}

double NNfunction_NN_2_4::synapse0x12829a0() {
   return (neuron0x12634b0()*0.0213878);
}

double NNfunction_NN_2_4::synapse0x12829e0() {
   return (neuron0x12637f0()*-0.0520139);
}

double NNfunction_NN_2_4::synapse0x1282a20() {
   return (neuron0x1263b30()*-0.337107);
}

double NNfunction_NN_2_4::synapse0x1282a60() {
   return (neuron0x1263e70()*0.0244754);
}

double NNfunction_NN_2_4::synapse0x1282aa0() {
   return (neuron0x12641b0()*0.0790722);
}

double NNfunction_NN_2_4::synapse0x1282ae0() {
   return (neuron0x12644f0()*0.165602);
}

double NNfunction_NN_2_4::synapse0x1282b20() {
   return (neuron0x1264830()*-0.0090821);
}

double NNfunction_NN_2_4::synapse0x12825b0() {
   return (neuron0x1264b70()*0.0214587);
}

double NNfunction_NN_2_4::synapse0x12825f0() {
   return (neuron0x12650d0()*-0.0194367);
}

double NNfunction_NN_2_4::synapse0x1282c70() {
   return (neuron0x12652f0()*-0.0784654);
}

double NNfunction_NN_2_4::synapse0x1282cb0() {
   return (neuron0x1265630()*-0.0119313);
}

double NNfunction_NN_2_4::synapse0x1282cf0() {
   return (neuron0x1265970()*0.0329113);
}

double NNfunction_NN_2_4::synapse0x1282d30() {
   return (neuron0x1265cb0()*-0.0424241);
}

double NNfunction_NN_2_4::synapse0x1282d70() {
   return (neuron0x1265ff0()*-0.0433571);
}

double NNfunction_NN_2_4::synapse0x1282db0() {
   return (neuron0x1266330()*4.74335);
}

double NNfunction_NN_2_4::synapse0x126b860() {
   return (neuron0x1261770()*0.345601);
}

double NNfunction_NN_2_4::synapse0x126b8a0() {
   return (neuron0x1261ab0()*0.00294592);
}

double NNfunction_NN_2_4::synapse0x126b8e0() {
   return (neuron0x1261df0()*-0.175652);
}

double NNfunction_NN_2_4::synapse0x126b920() {
   return (neuron0x1262130()*-0.382404);
}

double NNfunction_NN_2_4::synapse0x126b960() {
   return (neuron0x1262470()*-0.172839);
}

double NNfunction_NN_2_4::synapse0x126b9a0() {
   return (neuron0x12627b0()*0.0342448);
}

double NNfunction_NN_2_4::synapse0x126b9e0() {
   return (neuron0x1262af0()*0.261838);
}

double NNfunction_NN_2_4::synapse0x126ba20() {
   return (neuron0x1262e30()*0.486211);
}

double NNfunction_NN_2_4::synapse0x1283540() {
   return (neuron0x1263170()*0.267773);
}

double NNfunction_NN_2_4::synapse0x1283580() {
   return (neuron0x12634b0()*0.382832);
}

double NNfunction_NN_2_4::synapse0x12835c0() {
   return (neuron0x12637f0()*0.479246);
}

double NNfunction_NN_2_4::synapse0x1283600() {
   return (neuron0x1263b30()*-0.72416);
}

double NNfunction_NN_2_4::synapse0x1283640() {
   return (neuron0x1263e70()*0.608146);
}

double NNfunction_NN_2_4::synapse0x1283680() {
   return (neuron0x12641b0()*0.0647886);
}

double NNfunction_NN_2_4::synapse0x12836c0() {
   return (neuron0x12644f0()*0.136257);
}

double NNfunction_NN_2_4::synapse0x1283700() {
   return (neuron0x1264830()*-0.488212);
}

double NNfunction_NN_2_4::synapse0x1282f80() {
   return (neuron0x1264b70()*0.329977);
}

double NNfunction_NN_2_4::synapse0x1282fc0() {
   return (neuron0x12650d0()*1.02924);
}

double NNfunction_NN_2_4::synapse0x1283850() {
   return (neuron0x12652f0()*-0.120171);
}

double NNfunction_NN_2_4::synapse0x1283890() {
   return (neuron0x1265630()*0.144265);
}

double NNfunction_NN_2_4::synapse0x12838d0() {
   return (neuron0x1265970()*-0.191354);
}

double NNfunction_NN_2_4::synapse0x1283910() {
   return (neuron0x1265cb0()*0.212331);
}

double NNfunction_NN_2_4::synapse0x1283950() {
   return (neuron0x1265ff0()*-0.319296);
}

double NNfunction_NN_2_4::synapse0x1283990() {
   return (neuron0x1266330()*0.208996);
}

double NNfunction_NN_2_4::synapse0x1283d10() {
   return (neuron0x1261770()*0.00113546);
}

double NNfunction_NN_2_4::synapse0x1283d50() {
   return (neuron0x1261ab0()*-2.70568);
}

double NNfunction_NN_2_4::synapse0x1283d90() {
   return (neuron0x1261df0()*-0.947503);
}

double NNfunction_NN_2_4::synapse0x1283dd0() {
   return (neuron0x1262130()*-0.122648);
}

double NNfunction_NN_2_4::synapse0x1283e10() {
   return (neuron0x1262470()*0.0906009);
}

double NNfunction_NN_2_4::synapse0x1283e50() {
   return (neuron0x12627b0()*0.0854012);
}

double NNfunction_NN_2_4::synapse0x1283e90() {
   return (neuron0x1262af0()*0.00139707);
}

double NNfunction_NN_2_4::synapse0x1283ed0() {
   return (neuron0x1262e30()*0.010284);
}

double NNfunction_NN_2_4::synapse0x1283f10() {
   return (neuron0x1263170()*-0.13223);
}

double NNfunction_NN_2_4::synapse0x1283f50() {
   return (neuron0x12634b0()*0.0321438);
}

double NNfunction_NN_2_4::synapse0x1283f90() {
   return (neuron0x12637f0()*0.0594665);
}

double NNfunction_NN_2_4::synapse0x1283fd0() {
   return (neuron0x1263b30()*0.922544);
}

double NNfunction_NN_2_4::synapse0x1284010() {
   return (neuron0x1263e70()*-0.112575);
}

double NNfunction_NN_2_4::synapse0x1284050() {
   return (neuron0x12641b0()*-0.049017);
}

double NNfunction_NN_2_4::synapse0x1284090() {
   return (neuron0x12644f0()*0.012569);
}

double NNfunction_NN_2_4::synapse0x12840d0() {
   return (neuron0x1264830()*-0.0427878);
}

double NNfunction_NN_2_4::synapse0x1283b60() {
   return (neuron0x1264b70()*0.0445147);
}

double NNfunction_NN_2_4::synapse0x1283ba0() {
   return (neuron0x12650d0()*0.0517053);
}

double NNfunction_NN_2_4::synapse0x1284220() {
   return (neuron0x12652f0()*-0.00718272);
}

double NNfunction_NN_2_4::synapse0x1284260() {
   return (neuron0x1265630()*0.00756327);
}

double NNfunction_NN_2_4::synapse0x12842a0() {
   return (neuron0x1265970()*0.0378208);
}

double NNfunction_NN_2_4::synapse0x12842e0() {
   return (neuron0x1265cb0()*-0.0964245);
}

double NNfunction_NN_2_4::synapse0x1284320() {
   return (neuron0x1265ff0()*-0.0385914);
}

double NNfunction_NN_2_4::synapse0x1284360() {
   return (neuron0x1266330()*-0.66945);
}

double NNfunction_NN_2_4::synapse0x12846e0() {
   return (neuron0x1261770()*0.00205436);
}

double NNfunction_NN_2_4::synapse0x1284720() {
   return (neuron0x1261ab0()*-0.147958);
}

double NNfunction_NN_2_4::synapse0x1284760() {
   return (neuron0x1261df0()*0.108239);
}

double NNfunction_NN_2_4::synapse0x12847a0() {
   return (neuron0x1262130()*0.106436);
}

double NNfunction_NN_2_4::synapse0x12847e0() {
   return (neuron0x1262470()*-0.0389611);
}

double NNfunction_NN_2_4::synapse0x1284820() {
   return (neuron0x12627b0()*-0.0277994);
}

double NNfunction_NN_2_4::synapse0x1284860() {
   return (neuron0x1262af0()*-0.0316838);
}

double NNfunction_NN_2_4::synapse0x12848a0() {
   return (neuron0x1262e30()*0.0380989);
}

double NNfunction_NN_2_4::synapse0x12848e0() {
   return (neuron0x1263170()*-0.00443093);
}

double NNfunction_NN_2_4::synapse0x1284920() {
   return (neuron0x12634b0()*-0.00856554);
}

double NNfunction_NN_2_4::synapse0x1284960() {
   return (neuron0x12637f0()*-0.00962052);
}

double NNfunction_NN_2_4::synapse0x12849a0() {
   return (neuron0x1263b30()*-3.78482);
}

double NNfunction_NN_2_4::synapse0x12849e0() {
   return (neuron0x1263e70()*-0.0824884);
}

double NNfunction_NN_2_4::synapse0x1284a20() {
   return (neuron0x12641b0()*-0.00243865);
}

double NNfunction_NN_2_4::synapse0x1284a60() {
   return (neuron0x12644f0()*0.134206);
}

double NNfunction_NN_2_4::synapse0x1284aa0() {
   return (neuron0x1264830()*0.0568876);
}

double NNfunction_NN_2_4::synapse0x1284530() {
   return (neuron0x1264b70()*-0.0384672);
}

double NNfunction_NN_2_4::synapse0x1284570() {
   return (neuron0x12650d0()*-0.0168231);
}

double NNfunction_NN_2_4::synapse0x12750a0() {
   return (neuron0x12652f0()*-0.0564731);
}

double NNfunction_NN_2_4::synapse0x12750e0() {
   return (neuron0x1265630()*0.0180989);
}

double NNfunction_NN_2_4::synapse0x1275120() {
   return (neuron0x1265970()*-0.0252256);
}

double NNfunction_NN_2_4::synapse0x1275160() {
   return (neuron0x1265cb0()*-0.0714148);
}

double NNfunction_NN_2_4::synapse0x12751a0() {
   return (neuron0x1265ff0()*-0.102017);
}

double NNfunction_NN_2_4::synapse0x12751e0() {
   return (neuron0x1266330()*-0.0317056);
}

double NNfunction_NN_2_4::synapse0x1275560() {
   return (neuron0x1261770()*-0.110415);
}

double NNfunction_NN_2_4::synapse0x12755a0() {
   return (neuron0x1261ab0()*4.44476);
}

double NNfunction_NN_2_4::synapse0x12755e0() {
   return (neuron0x1261df0()*-0.922282);
}

double NNfunction_NN_2_4::synapse0x1275620() {
   return (neuron0x1262130()*0.0518283);
}

double NNfunction_NN_2_4::synapse0x1275660() {
   return (neuron0x1262470()*0.0809743);
}

double NNfunction_NN_2_4::synapse0x12756a0() {
   return (neuron0x12627b0()*0.0139805);
}

double NNfunction_NN_2_4::synapse0x12756e0() {
   return (neuron0x1262af0()*-0.0315187);
}

double NNfunction_NN_2_4::synapse0x1275720() {
   return (neuron0x1262e30()*-0.0425177);
}

double NNfunction_NN_2_4::synapse0x1275760() {
   return (neuron0x1263170()*-0.027034);
}

double NNfunction_NN_2_4::synapse0x12757a0() {
   return (neuron0x12634b0()*0.0131015);
}

double NNfunction_NN_2_4::synapse0x12757e0() {
   return (neuron0x12637f0()*-0.0176422);
}

double NNfunction_NN_2_4::synapse0x1275820() {
   return (neuron0x1263b30()*-0.363207);
}

double NNfunction_NN_2_4::synapse0x1275860() {
   return (neuron0x1263e70()*-0.135289);
}

double NNfunction_NN_2_4::synapse0x12758a0() {
   return (neuron0x12641b0()*-0.00864592);
}

double NNfunction_NN_2_4::synapse0x12758e0() {
   return (neuron0x12644f0()*-0.076948);
}

double NNfunction_NN_2_4::synapse0x1275920() {
   return (neuron0x1264830()*-0.0700377);
}

double NNfunction_NN_2_4::synapse0x12753b0() {
   return (neuron0x1264b70()*0.00604471);
}

double NNfunction_NN_2_4::synapse0x12753f0() {
   return (neuron0x12650d0()*0.0182958);
}

double NNfunction_NN_2_4::synapse0x1275a70() {
   return (neuron0x12652f0()*0.0643659);
}

double NNfunction_NN_2_4::synapse0x1275ab0() {
   return (neuron0x1265630()*-0.034517);
}

double NNfunction_NN_2_4::synapse0x1275af0() {
   return (neuron0x1265970()*0.0705748);
}

double NNfunction_NN_2_4::synapse0x1275b30() {
   return (neuron0x1265cb0()*0.0196788);
}

double NNfunction_NN_2_4::synapse0x1275b70() {
   return (neuron0x1265ff0()*0.0912408);
}

double NNfunction_NN_2_4::synapse0x1275bb0() {
   return (neuron0x1266330()*-1.29155);
}

double NNfunction_NN_2_4::synapse0x1275f30() {
   return (neuron0x1261770()*-0.197869);
}

double NNfunction_NN_2_4::synapse0x1275f70() {
   return (neuron0x1261ab0()*1.33226);
}

double NNfunction_NN_2_4::synapse0x1275fb0() {
   return (neuron0x1261df0()*0.865225);
}

double NNfunction_NN_2_4::synapse0x1275ff0() {
   return (neuron0x1262130()*-0.711551);
}

double NNfunction_NN_2_4::synapse0x1276030() {
   return (neuron0x1262470()*-0.143748);
}

double NNfunction_NN_2_4::synapse0x1276070() {
   return (neuron0x12627b0()*-0.0747862);
}

double NNfunction_NN_2_4::synapse0x12760b0() {
   return (neuron0x1262af0()*0.144298);
}

double NNfunction_NN_2_4::synapse0x12760f0() {
   return (neuron0x1262e30()*0.179578);
}

double NNfunction_NN_2_4::synapse0x1276130() {
   return (neuron0x1263170()*-0.499091);
}

double NNfunction_NN_2_4::synapse0x1276170() {
   return (neuron0x12634b0()*0.248135);
}

double NNfunction_NN_2_4::synapse0x12761b0() {
   return (neuron0x12637f0()*-0.453788);
}

double NNfunction_NN_2_4::synapse0x12761f0() {
   return (neuron0x1263b30()*-0.340983);
}

double NNfunction_NN_2_4::synapse0x1276230() {
   return (neuron0x1263e70()*0.113089);
}

double NNfunction_NN_2_4::synapse0x1276270() {
   return (neuron0x12641b0()*-0.91462);
}

double NNfunction_NN_2_4::synapse0x12762b0() {
   return (neuron0x12644f0()*-1.06283);
}

double NNfunction_NN_2_4::synapse0x12762f0() {
   return (neuron0x1264830()*-0.31551);
}

double NNfunction_NN_2_4::synapse0x1275d80() {
   return (neuron0x1264b70()*0.25622);
}

double NNfunction_NN_2_4::synapse0x1275dc0() {
   return (neuron0x12650d0()*0.785693);
}

double NNfunction_NN_2_4::synapse0x1276440() {
   return (neuron0x12652f0()*-0.384694);
}

double NNfunction_NN_2_4::synapse0x1276480() {
   return (neuron0x1265630()*0.222363);
}

double NNfunction_NN_2_4::synapse0x12764c0() {
   return (neuron0x1265970()*-0.658337);
}

double NNfunction_NN_2_4::synapse0x1276500() {
   return (neuron0x1265cb0()*0.785075);
}

double NNfunction_NN_2_4::synapse0x1276540() {
   return (neuron0x1265ff0()*-0.285851);
}

double NNfunction_NN_2_4::synapse0x1276580() {
   return (neuron0x1266330()*-1.49557);
}

double NNfunction_NN_2_4::synapse0x1276900() {
   return (neuron0x1261770()*0.11591);
}

double NNfunction_NN_2_4::synapse0x1276940() {
   return (neuron0x1261ab0()*-0.986043);
}

double NNfunction_NN_2_4::synapse0x1276980() {
   return (neuron0x1261df0()*-0.878408);
}

double NNfunction_NN_2_4::synapse0x12769c0() {
   return (neuron0x1262130()*0.298582);
}

double NNfunction_NN_2_4::synapse0x1276a00() {
   return (neuron0x1262470()*0.253995);
}

double NNfunction_NN_2_4::synapse0x1276a40() {
   return (neuron0x12627b0()*0.277128);
}

double NNfunction_NN_2_4::synapse0x1276a80() {
   return (neuron0x1262af0()*0.0416279);
}

double NNfunction_NN_2_4::synapse0x1276ac0() {
   return (neuron0x1262e30()*-0.00378642);
}

double NNfunction_NN_2_4::synapse0x1276b00() {
   return (neuron0x1263170()*0.180341);
}

double NNfunction_NN_2_4::synapse0x1276b40() {
   return (neuron0x12634b0()*-0.127282);
}

double NNfunction_NN_2_4::synapse0x1276b80() {
   return (neuron0x12637f0()*0.00518864);
}

double NNfunction_NN_2_4::synapse0x1276bc0() {
   return (neuron0x1263b30()*2.42922);
}

double NNfunction_NN_2_4::synapse0x1276c00() {
   return (neuron0x1263e70()*-0.124219);
}

double NNfunction_NN_2_4::synapse0x1276c40() {
   return (neuron0x12641b0()*0.272619);
}

double NNfunction_NN_2_4::synapse0x1276c80() {
   return (neuron0x12644f0()*0.033229);
}

double NNfunction_NN_2_4::synapse0x1276cc0() {
   return (neuron0x1264830()*0.193404);
}

double NNfunction_NN_2_4::synapse0x1276750() {
   return (neuron0x1264b70()*0.131083);
}

double NNfunction_NN_2_4::synapse0x1276790() {
   return (neuron0x12650d0()*-0.116532);
}

double NNfunction_NN_2_4::synapse0x1276e10() {
   return (neuron0x12652f0()*0.0223378);
}

double NNfunction_NN_2_4::synapse0x1276e50() {
   return (neuron0x1265630()*-0.236866);
}

double NNfunction_NN_2_4::synapse0x1276e90() {
   return (neuron0x1265970()*-0.234924);
}

double NNfunction_NN_2_4::synapse0x1276ed0() {
   return (neuron0x1265cb0()*-0.0675341);
}

double NNfunction_NN_2_4::synapse0x1276f10() {
   return (neuron0x1265ff0()*0.110688);
}

double NNfunction_NN_2_4::synapse0x1276f50() {
   return (neuron0x1266330()*0.3408);
}

double NNfunction_NN_2_4::synapse0x1288e20() {
   return (neuron0x1261770()*-0.613642);
}

double NNfunction_NN_2_4::synapse0x1288e60() {
   return (neuron0x1261ab0()*2.12239);
}

double NNfunction_NN_2_4::synapse0x1288ea0() {
   return (neuron0x1261df0()*-0.282003);
}

double NNfunction_NN_2_4::synapse0x1288ee0() {
   return (neuron0x1262130()*0.121959);
}

double NNfunction_NN_2_4::synapse0x1288f20() {
   return (neuron0x1262470()*-0.185398);
}

double NNfunction_NN_2_4::synapse0x1288f60() {
   return (neuron0x12627b0()*-0.0896106);
}

double NNfunction_NN_2_4::synapse0x1288fa0() {
   return (neuron0x1262af0()*-0.0798582);
}

double NNfunction_NN_2_4::synapse0x1288fe0() {
   return (neuron0x1262e30()*0.0500911);
}

double NNfunction_NN_2_4::synapse0x1289020() {
   return (neuron0x1263170()*-0.0856392);
}

double NNfunction_NN_2_4::synapse0x1289060() {
   return (neuron0x12634b0()*0.0652105);
}

double NNfunction_NN_2_4::synapse0x12890a0() {
   return (neuron0x12637f0()*0.130923);
}

double NNfunction_NN_2_4::synapse0x12890e0() {
   return (neuron0x1263b30()*0.218487);
}

double NNfunction_NN_2_4::synapse0x1289120() {
   return (neuron0x1263e70()*0.168535);
}

double NNfunction_NN_2_4::synapse0x1289160() {
   return (neuron0x12641b0()*0.0398106);
}

double NNfunction_NN_2_4::synapse0x12891a0() {
   return (neuron0x12644f0()*-0.104825);
}

double NNfunction_NN_2_4::synapse0x12891e0() {
   return (neuron0x1264830()*0.0917629);
}

double NNfunction_NN_2_4::synapse0x1276f90() {
   return (neuron0x1264b70()*-0.122523);
}

double NNfunction_NN_2_4::synapse0x1276fd0() {
   return (neuron0x12650d0()*-0.0181088);
}

double NNfunction_NN_2_4::synapse0x1289330() {
   return (neuron0x12652f0()*0.0953687);
}

double NNfunction_NN_2_4::synapse0x1289370() {
   return (neuron0x1265630()*-0.0763698);
}

double NNfunction_NN_2_4::synapse0x12893b0() {
   return (neuron0x1265970()*-0.103928);
}

double NNfunction_NN_2_4::synapse0x12893f0() {
   return (neuron0x1265cb0()*0.0937025);
}

double NNfunction_NN_2_4::synapse0x1289430() {
   return (neuron0x1265ff0()*0.127167);
}

double NNfunction_NN_2_4::synapse0x1289470() {
   return (neuron0x1266330()*-3.19052);
}

double NNfunction_NN_2_4::synapse0x12897f0() {
   return (neuron0x1261770()*-0.0704432);
}

double NNfunction_NN_2_4::synapse0x1289830() {
   return (neuron0x1261ab0()*5.50342);
}

double NNfunction_NN_2_4::synapse0x1289870() {
   return (neuron0x1261df0()*-6.11783);
}

double NNfunction_NN_2_4::synapse0x12898b0() {
   return (neuron0x1262130()*-0.0210313);
}

double NNfunction_NN_2_4::synapse0x12898f0() {
   return (neuron0x1262470()*-0.0229357);
}

double NNfunction_NN_2_4::synapse0x1289930() {
   return (neuron0x12627b0()*0.016892);
}

double NNfunction_NN_2_4::synapse0x1289970() {
   return (neuron0x1262af0()*0.0162738);
}

double NNfunction_NN_2_4::synapse0x12899b0() {
   return (neuron0x1262e30()*0.0459084);
}

double NNfunction_NN_2_4::synapse0x12899f0() {
   return (neuron0x1263170()*-0.00422781);
}

double NNfunction_NN_2_4::synapse0x1289a30() {
   return (neuron0x12634b0()*0.033681);
}

double NNfunction_NN_2_4::synapse0x1289a70() {
   return (neuron0x12637f0()*-0.00281678);
}

double NNfunction_NN_2_4::synapse0x1289ab0() {
   return (neuron0x1263b30()*-0.221796);
}

double NNfunction_NN_2_4::synapse0x1289af0() {
   return (neuron0x1263e70()*0.0795801);
}

double NNfunction_NN_2_4::synapse0x1289b30() {
   return (neuron0x12641b0()*-0.117402);
}

double NNfunction_NN_2_4::synapse0x1289b70() {
   return (neuron0x12644f0()*-0.0956083);
}

double NNfunction_NN_2_4::synapse0x1289bb0() {
   return (neuron0x1264830()*-0.00789116);
}

double NNfunction_NN_2_4::synapse0x1289640() {
   return (neuron0x1264b70()*-0.0543546);
}

double NNfunction_NN_2_4::synapse0x1289680() {
   return (neuron0x12650d0()*0.00624199);
}

double NNfunction_NN_2_4::synapse0x1289d00() {
   return (neuron0x12652f0()*-0.0116645);
}

double NNfunction_NN_2_4::synapse0x1289d40() {
   return (neuron0x1265630()*0.0849531);
}

double NNfunction_NN_2_4::synapse0x1289d80() {
   return (neuron0x1265970()*0.0413067);
}

double NNfunction_NN_2_4::synapse0x1289dc0() {
   return (neuron0x1265cb0()*0.0681898);
}

double NNfunction_NN_2_4::synapse0x1289e00() {
   return (neuron0x1265ff0()*-0.0163475);
}

double NNfunction_NN_2_4::synapse0x1289e40() {
   return (neuron0x1266330()*-1.29596);
}

double NNfunction_NN_2_4::synapse0x128a1c0() {
   return (neuron0x1261770()*0.148893);
}

double NNfunction_NN_2_4::synapse0x128a200() {
   return (neuron0x1261ab0()*2.50646);
}

double NNfunction_NN_2_4::synapse0x128a240() {
   return (neuron0x1261df0()*3.70411);
}

double NNfunction_NN_2_4::synapse0x128a280() {
   return (neuron0x1262130()*-0.0473876);
}

double NNfunction_NN_2_4::synapse0x128a2c0() {
   return (neuron0x1262470()*-0.0469501);
}

double NNfunction_NN_2_4::synapse0x128a300() {
   return (neuron0x12627b0()*-0.0484489);
}

double NNfunction_NN_2_4::synapse0x128a340() {
   return (neuron0x1262af0()*0.000135599);
}

double NNfunction_NN_2_4::synapse0x128a380() {
   return (neuron0x1262e30()*-0.028842);
}

double NNfunction_NN_2_4::synapse0x128a3c0() {
   return (neuron0x1263170()*-0.0277002);
}

double NNfunction_NN_2_4::synapse0x128a400() {
   return (neuron0x12634b0()*0.0154313);
}

double NNfunction_NN_2_4::synapse0x128a440() {
   return (neuron0x12637f0()*0.00596254);
}

double NNfunction_NN_2_4::synapse0x128a480() {
   return (neuron0x1263b30()*-0.154794);
}

double NNfunction_NN_2_4::synapse0x128a4c0() {
   return (neuron0x1263e70()*0.0461693);
}

double NNfunction_NN_2_4::synapse0x128a500() {
   return (neuron0x12641b0()*-0.0381961);
}

double NNfunction_NN_2_4::synapse0x128a540() {
   return (neuron0x12644f0()*-0.0227328);
}

double NNfunction_NN_2_4::synapse0x128a580() {
   return (neuron0x1264830()*0.0287148);
}

double NNfunction_NN_2_4::synapse0x128a010() {
   return (neuron0x1264b70()*-0.018337);
}

double NNfunction_NN_2_4::synapse0x128a050() {
   return (neuron0x12650d0()*-0.03787);
}

double NNfunction_NN_2_4::synapse0x128a6d0() {
   return (neuron0x12652f0()*0.0181023);
}

double NNfunction_NN_2_4::synapse0x128a710() {
   return (neuron0x1265630()*0.0546831);
}

double NNfunction_NN_2_4::synapse0x128a750() {
   return (neuron0x1265970()*0.00546181);
}

double NNfunction_NN_2_4::synapse0x128a790() {
   return (neuron0x1265cb0()*-0.0157461);
}

double NNfunction_NN_2_4::synapse0x128a7d0() {
   return (neuron0x1265ff0()*0.00951393);
}

double NNfunction_NN_2_4::synapse0x128a810() {
   return (neuron0x1266330()*4.59002);
}

double NNfunction_NN_2_4::synapse0x128ab90() {
   return (neuron0x1261770()*-0.0486971);
}

double NNfunction_NN_2_4::synapse0x128abd0() {
   return (neuron0x1261ab0()*-0.640453);
}

double NNfunction_NN_2_4::synapse0x128ac10() {
   return (neuron0x1261df0()*2.2165);
}

double NNfunction_NN_2_4::synapse0x128ac50() {
   return (neuron0x1262130()*0.0525383);
}

double NNfunction_NN_2_4::synapse0x128ac90() {
   return (neuron0x1262470()*-0.0152369);
}

double NNfunction_NN_2_4::synapse0x128acd0() {
   return (neuron0x12627b0()*-0.0998072);
}

double NNfunction_NN_2_4::synapse0x128ad10() {
   return (neuron0x1262af0()*-0.0886916);
}

double NNfunction_NN_2_4::synapse0x128ad50() {
   return (neuron0x1262e30()*0.0438967);
}

double NNfunction_NN_2_4::synapse0x128ad90() {
   return (neuron0x1263170()*-0.0174886);
}

double NNfunction_NN_2_4::synapse0x128add0() {
   return (neuron0x12634b0()*-0.0298844);
}

double NNfunction_NN_2_4::synapse0x128ae10() {
   return (neuron0x12637f0()*0.0624481);
}

double NNfunction_NN_2_4::synapse0x128ae50() {
   return (neuron0x1263b30()*-1.07957);
}

double NNfunction_NN_2_4::synapse0x128ae90() {
   return (neuron0x1263e70()*-0.000614684);
}

double NNfunction_NN_2_4::synapse0x128aed0() {
   return (neuron0x12641b0()*0.127429);
}

double NNfunction_NN_2_4::synapse0x128af10() {
   return (neuron0x12644f0()*0.0146713);
}

double NNfunction_NN_2_4::synapse0x128af50() {
   return (neuron0x1264830()*0.111716);
}

double NNfunction_NN_2_4::synapse0x128a9e0() {
   return (neuron0x1264b70()*-0.0731354);
}

double NNfunction_NN_2_4::synapse0x128aa20() {
   return (neuron0x12650d0()*0.0189487);
}

double NNfunction_NN_2_4::synapse0x128b0a0() {
   return (neuron0x12652f0()*-0.0169886);
}

double NNfunction_NN_2_4::synapse0x128b0e0() {
   return (neuron0x1265630()*-0.0250374);
}

double NNfunction_NN_2_4::synapse0x128b120() {
   return (neuron0x1265970()*-0.0381369);
}

double NNfunction_NN_2_4::synapse0x128b160() {
   return (neuron0x1265cb0()*0.0258918);
}

double NNfunction_NN_2_4::synapse0x128b1a0() {
   return (neuron0x1265ff0()*0.0523713);
}

double NNfunction_NN_2_4::synapse0x128b1e0() {
   return (neuron0x1266330()*1.16908);
}

double NNfunction_NN_2_4::synapse0x1267780() {
   return (neuron0x12667d0()*1.27047);
}

double NNfunction_NN_2_4::synapse0x12677c0() {
   return (neuron0x12670e0()*-1.26008);
}

double NNfunction_NN_2_4::synapse0x1268c90() {
   return (neuron0x1267bc0()*2.04257);
}

double NNfunction_NN_2_4::synapse0x1268cd0() {
   return (neuron0x1021450()*-0.256092);
}

double NNfunction_NN_2_4::synapse0x1269660() {
   return (neuron0x12689e0()*1.63868);
}

double NNfunction_NN_2_4::synapse0x12696a0() {
   return (neuron0x12693b0()*-3.09738);
}

double NNfunction_NN_2_4::synapse0x126a430() {
   return (neuron0x126a180()*-1.59079);
}

double NNfunction_NN_2_4::synapse0x126a470() {
   return (neuron0x126ab50()*-1.58785);
}

double NNfunction_NN_2_4::synapse0x126ae00() {
   return (neuron0x126b520()*0.685556);
}

double NNfunction_NN_2_4::synapse0x126ae40() {
   return (neuron0x126c000()*-1.06639);
}

double NNfunction_NN_2_4::synapse0x126b7d0() {
   return (neuron0x126c9d0()*-3.72367);
}

double NNfunction_NN_2_4::synapse0x126b810() {
   return (neuron0x1269ab0()*0.901388);
}

double NNfunction_NN_2_4::synapse0x126c2b0() {
   return (neuron0x126e580()*-1.10545);
}

double NNfunction_NN_2_4::synapse0x126c2f0() {
   return (neuron0x126ef50()*0.950021);
}

double NNfunction_NN_2_4::synapse0x126cc80() {
   return (neuron0x126f920()*2.36674);
}

double NNfunction_NN_2_4::synapse0x126ccc0() {
   return (neuron0x12702f0()*2.22973);
}

double NNfunction_NN_2_4::synapse0x1269d60() {
   return (neuron0x1272100()*0.316883);
}

double NNfunction_NN_2_4::synapse0x1269da0() {
   return (neuron0x12723e0()*3.50092);
}

double NNfunction_NN_2_4::synapse0x126e830() {
   return (neuron0x1272db0()*-1.96497);
}

double NNfunction_NN_2_4::synapse0x126e870() {
   return (neuron0x1273780()*-1.14465);
}

double NNfunction_NN_2_4::synapse0x126f200() {
   return (neuron0x1274150()*0.505823);
}

double NNfunction_NN_2_4::synapse0x126f240() {
   return (neuron0x1274b20()*-2.31657);
}

double NNfunction_NN_2_4::synapse0x126fbd0() {
   return (neuron0x126d670()*-2.18093);
}

double NNfunction_NN_2_4::synapse0x126fc10() {
   return (neuron0x126e040()*-0.237388);
}

double NNfunction_NN_2_4::synapse0x12705a0() {
   return (neuron0x12778b0()*3.02143);
}

double NNfunction_NN_2_4::synapse0x12705e0() {
   return (neuron0x1278280()*0.307918);
}

double NNfunction_NN_2_4::synapse0x1264710() {
   return (neuron0x1278c50()*0.297346);
}

double NNfunction_NN_2_4::synapse0x1264750() {
   return (neuron0x1279620()*-1.23054);
}

double NNfunction_NN_2_4::synapse0x1272690() {
   return (neuron0x1279ff0()*-0.0569962);
}

double NNfunction_NN_2_4::synapse0x12726d0() {
   return (neuron0x127a9c0()*-4.42902);
}

double NNfunction_NN_2_4::synapse0x1273060() {
   return (neuron0x127b390()*-2.34118);
}

double NNfunction_NN_2_4::synapse0x12730a0() {
   return (neuron0x127bd60()*-0.95076);
}

double NNfunction_NN_2_4::synapse0x1273a30() {
   return (neuron0x1271df0()*0.634288);
}

double NNfunction_NN_2_4::synapse0x1273a70() {
   return (neuron0x127e940()*5.03857);
}

double NNfunction_NN_2_4::synapse0x1274400() {
   return (neuron0x127f310()*-4.34856);
}

double NNfunction_NN_2_4::synapse0x1274440() {
   return (neuron0x127fce0()*-1.62748);
}

double NNfunction_NN_2_4::synapse0x1274dd0() {
   return (neuron0x12806b0()*2.88415);
}

double NNfunction_NN_2_4::synapse0x1274e10() {
   return (neuron0x1281080()*1.79335);
}

double NNfunction_NN_2_4::synapse0x126d920() {
   return (neuron0x1281a50()*-1.69728);
}

double NNfunction_NN_2_4::synapse0x126d960() {
   return (neuron0x1282420()*3.23249);
}

double NNfunction_NN_2_4::synapse0x12771d0() {
   return (neuron0x1282df0()*-0.338409);
}

double NNfunction_NN_2_4::synapse0x1277210() {
   return (neuron0x12839d0()*2.32228);
}

double NNfunction_NN_2_4::synapse0x1277b60() {
   return (neuron0x12843a0()*0.921781);
}

double NNfunction_NN_2_4::synapse0x1277ba0() {
   return (neuron0x1275220()*-2.88617);
}

double NNfunction_NN_2_4::synapse0x1278530() {
   return (neuron0x1275bf0()*-1.0614);
}

double NNfunction_NN_2_4::synapse0x1278570() {
   return (neuron0x12765c0()*-1.16387);
}

double NNfunction_NN_2_4::synapse0x1278f00() {
   return (neuron0x1288c00()*-3.68796);
}

double NNfunction_NN_2_4::synapse0x1278f40() {
   return (neuron0x12894b0()*4.508);
}

double NNfunction_NN_2_4::synapse0x12798d0() {
   return (neuron0x1289e80()*-1.3646);
}

double NNfunction_NN_2_4::synapse0x1279910() {
   return (neuron0x128a850()*1.6134);
}

double NNfunction_NN_2_4::synapse0x127c010() {
   return (neuron0x12667d0()*0.287549);
}

double NNfunction_NN_2_4::synapse0x127c050() {
   return (neuron0x12670e0()*-0.0737926);
}

double NNfunction_NN_2_4::synapse0x12715d0() {
   return (neuron0x1267bc0()*1.12944);
}

double NNfunction_NN_2_4::synapse0x1271610() {
   return (neuron0x1021450()*0.111505);
}

double NNfunction_NN_2_4::synapse0x127ebf0() {
   return (neuron0x12689e0()*1.89622);
}

double NNfunction_NN_2_4::synapse0x127ec30() {
   return (neuron0x12693b0()*-1.06191);
}

double NNfunction_NN_2_4::synapse0x127f5c0() {
   return (neuron0x126a180()*-0.876949);
}

double NNfunction_NN_2_4::synapse0x127f600() {
   return (neuron0x126ab50()*0.133223);
}

double NNfunction_NN_2_4::synapse0x127ff90() {
   return (neuron0x126b520()*-1.16322);
}

double NNfunction_NN_2_4::synapse0x127ffd0() {
   return (neuron0x126c000()*-0.14689);
}

double NNfunction_NN_2_4::synapse0x1280960() {
   return (neuron0x126c9d0()*0.60259);
}

double NNfunction_NN_2_4::synapse0x12809a0() {
   return (neuron0x1269ab0()*2.34237);
}

double NNfunction_NN_2_4::synapse0x1281330() {
   return (neuron0x126e580()*2.27578);
}

double NNfunction_NN_2_4::synapse0x1281370() {
   return (neuron0x126ef50()*0.103132);
}

double NNfunction_NN_2_4::synapse0x1281d00() {
   return (neuron0x126f920()*0.144365);
}

double NNfunction_NN_2_4::synapse0x1281d40() {
   return (neuron0x12702f0()*-2.47263);
}

double NNfunction_NN_2_4::synapse0x12826d0() {
   return (neuron0x1272100()*1.4044);
}

double NNfunction_NN_2_4::synapse0x1282710() {
   return (neuron0x12723e0()*-1.58473);
}

double NNfunction_NN_2_4::synapse0x12830a0() {
   return (neuron0x1272db0()*-0.240326);
}

double NNfunction_NN_2_4::synapse0x12830e0() {
   return (neuron0x1273780()*0.163914);
}

double NNfunction_NN_2_4::synapse0x1283c80() {
   return (neuron0x1274150()*0.841809);
}

double NNfunction_NN_2_4::synapse0x1283cc0() {
   return (neuron0x1274b20()*-0.0717233);
}

double NNfunction_NN_2_4::synapse0x1284650() {
   return (neuron0x126d670()*2.36936);
}

double NNfunction_NN_2_4::synapse0x1284690() {
   return (neuron0x126e040()*-4.41064);
}

double NNfunction_NN_2_4::synapse0x12754d0() {
   return (neuron0x12778b0()*-0.408159);
}

double NNfunction_NN_2_4::synapse0x1275510() {
   return (neuron0x1278280()*0.732965);
}

double NNfunction_NN_2_4::synapse0x1275ea0() {
   return (neuron0x1278c50()*0.636269);
}

double NNfunction_NN_2_4::synapse0x1275ee0() {
   return (neuron0x1279620()*0.0868803);
}

double NNfunction_NN_2_4::synapse0x1276870() {
   return (neuron0x1279ff0()*0.520427);
}

double NNfunction_NN_2_4::synapse0x12768b0() {
   return (neuron0x127a9c0()*1.92127);
}

double NNfunction_NN_2_4::synapse0x1288d90() {
   return (neuron0x127b390()*-0.156077);
}

double NNfunction_NN_2_4::synapse0x1288dd0() {
   return (neuron0x127bd60()*-0.404835);
}

double NNfunction_NN_2_4::synapse0x1289760() {
   return (neuron0x1271df0()*0.977585);
}

double NNfunction_NN_2_4::synapse0x12897a0() {
   return (neuron0x127e940()*0.135546);
}

double NNfunction_NN_2_4::synapse0x128a130() {
   return (neuron0x127f310()*-1.96986);
}

double NNfunction_NN_2_4::synapse0x128a170() {
   return (neuron0x127fce0()*-0.0673174);
}

double NNfunction_NN_2_4::synapse0x128ab00() {
   return (neuron0x12806b0()*-0.249971);
}

double NNfunction_NN_2_4::synapse0x128ab40() {
   return (neuron0x1281080()*-0.606769);
}

double NNfunction_NN_2_4::synapse0x12669f0() {
   return (neuron0x1281a50()*1.51031);
}

double NNfunction_NN_2_4::synapse0x1266a30() {
   return (neuron0x1282420()*-1.40892);
}

double NNfunction_NN_2_4::synapse0x127a2a0() {
   return (neuron0x1282df0()*0.158372);
}

double NNfunction_NN_2_4::synapse0x127a2e0() {
   return (neuron0x12839d0()*-0.802545);
}

double NNfunction_NN_2_4::synapse0x128b220() {
   return (neuron0x12843a0()*-0.513568);
}

double NNfunction_NN_2_4::synapse0x128b260() {
   return (neuron0x1275220()*2.70197);
}

double NNfunction_NN_2_4::synapse0x128b2a0() {
   return (neuron0x1275bf0()*-0.17934);
}

double NNfunction_NN_2_4::synapse0x128b2e0() {
   return (neuron0x12765c0()*0.0772493);
}

double NNfunction_NN_2_4::synapse0x1292190() {
   return (neuron0x1288c00()*0.99746);
}

double NNfunction_NN_2_4::synapse0x12921d0() {
   return (neuron0x12894b0()*-0.140839);
}

double NNfunction_NN_2_4::synapse0x1292210() {
   return (neuron0x1289e80()*-2.06065);
}

double NNfunction_NN_2_4::synapse0x1292250() {
   return (neuron0x128a850()*-0.530679);
}

double NNfunction_NN_2_4::synapse0x12925d0() {
   return (neuron0x12667d0()*0.334339);
}

double NNfunction_NN_2_4::synapse0x1292610() {
   return (neuron0x12670e0()*-0.0942854);
}

double NNfunction_NN_2_4::synapse0x1292650() {
   return (neuron0x1267bc0()*-1.39035);
}

double NNfunction_NN_2_4::synapse0x1292690() {
   return (neuron0x1021450()*1.17911);
}

double NNfunction_NN_2_4::synapse0x12926d0() {
   return (neuron0x12689e0()*0.0769711);
}

double NNfunction_NN_2_4::synapse0x1292710() {
   return (neuron0x12693b0()*0.587837);
}

double NNfunction_NN_2_4::synapse0x1292750() {
   return (neuron0x126a180()*0.162163);
}

double NNfunction_NN_2_4::synapse0x1292790() {
   return (neuron0x126ab50()*-0.0221392);
}

double NNfunction_NN_2_4::synapse0x12927d0() {
   return (neuron0x126b520()*-0.856077);
}

double NNfunction_NN_2_4::synapse0x1292810() {
   return (neuron0x126c000()*-0.180553);
}

double NNfunction_NN_2_4::synapse0x1292850() {
   return (neuron0x126c9d0()*-2.16162);
}

double NNfunction_NN_2_4::synapse0x1292890() {
   return (neuron0x1269ab0()*1.12525);
}

double NNfunction_NN_2_4::synapse0x12928d0() {
   return (neuron0x126e580()*0.0577527);
}

double NNfunction_NN_2_4::synapse0x1292910() {
   return (neuron0x126ef50()*-2.10928);
}

double NNfunction_NN_2_4::synapse0x1292950() {
   return (neuron0x126f920()*0.234624);
}

double NNfunction_NN_2_4::synapse0x1292990() {
   return (neuron0x12702f0()*0.758025);
}

double NNfunction_NN_2_4::synapse0x1292420() {
   return (neuron0x1272100()*-1.04125);
}

double NNfunction_NN_2_4::synapse0x1292460() {
   return (neuron0x12723e0()*-0.286819);
}

double NNfunction_NN_2_4::synapse0x1292ae0() {
   return (neuron0x1272db0()*-0.705936);
}

double NNfunction_NN_2_4::synapse0x1292b20() {
   return (neuron0x1273780()*0.0276404);
}

double NNfunction_NN_2_4::synapse0x1292b60() {
   return (neuron0x1274150()*-1.71108);
}

double NNfunction_NN_2_4::synapse0x1292ba0() {
   return (neuron0x1274b20()*-0.0816429);
}

double NNfunction_NN_2_4::synapse0x1292be0() {
   return (neuron0x126d670()*3.57343);
}

double NNfunction_NN_2_4::synapse0x1292c20() {
   return (neuron0x126e040()*0.369596);
}

double NNfunction_NN_2_4::synapse0x1292c60() {
   return (neuron0x12778b0()*-0.761151);
}

double NNfunction_NN_2_4::synapse0x1292ca0() {
   return (neuron0x1278280()*-0.852836);
}

double NNfunction_NN_2_4::synapse0x1292ce0() {
   return (neuron0x1278c50()*-1.20769);
}

double NNfunction_NN_2_4::synapse0x1292d20() {
   return (neuron0x1279620()*0.0904866);
}

double NNfunction_NN_2_4::synapse0x1292d60() {
   return (neuron0x1279ff0()*0.342826);
}

double NNfunction_NN_2_4::synapse0x1292da0() {
   return (neuron0x127a9c0()*2.96386);
}

double NNfunction_NN_2_4::synapse0x1292de0() {
   return (neuron0x127b390()*-0.0872171);
}

double NNfunction_NN_2_4::synapse0x1292e20() {
   return (neuron0x127bd60()*-1.62613);
}

double NNfunction_NN_2_4::synapse0x12929d0() {
   return (neuron0x1271df0()*0.0649324);
}

double NNfunction_NN_2_4::synapse0x1292a10() {
   return (neuron0x127e940()*0.410259);
}

double NNfunction_NN_2_4::synapse0x1292a50() {
   return (neuron0x127f310()*-1.09452);
}

double NNfunction_NN_2_4::synapse0x1292a90() {
   return (neuron0x127fce0()*-0.189789);
}

double NNfunction_NN_2_4::synapse0x1293070() {
   return (neuron0x12806b0()*-0.334536);
}

double NNfunction_NN_2_4::synapse0x12930b0() {
   return (neuron0x1281080()*1.81667);
}

double NNfunction_NN_2_4::synapse0x12930f0() {
   return (neuron0x1281a50()*-1.64634);
}

double NNfunction_NN_2_4::synapse0x1293130() {
   return (neuron0x1282420()*-0.441318);
}

double NNfunction_NN_2_4::synapse0x1293170() {
   return (neuron0x1282df0()*-0.0985634);
}

double NNfunction_NN_2_4::synapse0x12931b0() {
   return (neuron0x12839d0()*-0.516241);
}

double NNfunction_NN_2_4::synapse0x12931f0() {
   return (neuron0x12843a0()*0.397465);
}

double NNfunction_NN_2_4::synapse0x1293230() {
   return (neuron0x1275220()*0.498724);
}

double NNfunction_NN_2_4::synapse0x1293270() {
   return (neuron0x1275bf0()*-0.284873);
}

double NNfunction_NN_2_4::synapse0x12932b0() {
   return (neuron0x12765c0()*-0.265809);
}

double NNfunction_NN_2_4::synapse0x12932f0() {
   return (neuron0x1288c00()*-0.338155);
}

double NNfunction_NN_2_4::synapse0x1293330() {
   return (neuron0x12894b0()*0.167962);
}

double NNfunction_NN_2_4::synapse0x1293370() {
   return (neuron0x1289e80()*-1.21752);
}

double NNfunction_NN_2_4::synapse0x12933b0() {
   return (neuron0x128a850()*-1.26516);
}

double NNfunction_NN_2_4::synapse0x1293730() {
   return (neuron0x12667d0()*-0.276574);
}

double NNfunction_NN_2_4::synapse0x1293770() {
   return (neuron0x12670e0()*0.136689);
}

double NNfunction_NN_2_4::synapse0x12937b0() {
   return (neuron0x1267bc0()*-1.2056);
}

double NNfunction_NN_2_4::synapse0x12937f0() {
   return (neuron0x1021450()*-0.429006);
}

double NNfunction_NN_2_4::synapse0x1293830() {
   return (neuron0x12689e0()*-1.37204);
}

double NNfunction_NN_2_4::synapse0x1293870() {
   return (neuron0x12693b0()*-0.917625);
}

double NNfunction_NN_2_4::synapse0x12938b0() {
   return (neuron0x126a180()*1.32864);
}

double NNfunction_NN_2_4::synapse0x12938f0() {
   return (neuron0x126ab50()*0.167681);
}

double NNfunction_NN_2_4::synapse0x1293930() {
   return (neuron0x126b520()*0.471659);
}

double NNfunction_NN_2_4::synapse0x1293970() {
   return (neuron0x126c000()*0.238362);
}

double NNfunction_NN_2_4::synapse0x12939b0() {
   return (neuron0x126c9d0()*3.6827);
}

double NNfunction_NN_2_4::synapse0x12939f0() {
   return (neuron0x1269ab0()*-0.50989);
}

double NNfunction_NN_2_4::synapse0x1293a30() {
   return (neuron0x126e580()*0.608963);
}

double NNfunction_NN_2_4::synapse0x1293a70() {
   return (neuron0x126ef50()*1.49002);
}

double NNfunction_NN_2_4::synapse0x1293ab0() {
   return (neuron0x126f920()*0.448236);
}

double NNfunction_NN_2_4::synapse0x1293af0() {
   return (neuron0x12702f0()*-2.93621);
}

double NNfunction_NN_2_4::synapse0x1293580() {
   return (neuron0x1272100()*-1.43211);
}

double NNfunction_NN_2_4::synapse0x12935c0() {
   return (neuron0x12723e0()*-1.16806);
}

double NNfunction_NN_2_4::synapse0x1293c40() {
   return (neuron0x1272db0()*-0.35998);
}

double NNfunction_NN_2_4::synapse0x1293c80() {
   return (neuron0x1273780()*-0.225663);
}

double NNfunction_NN_2_4::synapse0x1293cc0() {
   return (neuron0x1274150()*1.44605);
}

double NNfunction_NN_2_4::synapse0x1293d00() {
   return (neuron0x1274b20()*0.15369);
}

double NNfunction_NN_2_4::synapse0x1293d40() {
   return (neuron0x126d670()*-0.805498);
}

double NNfunction_NN_2_4::synapse0x1293d80() {
   return (neuron0x126e040()*0.461051);
}

double NNfunction_NN_2_4::synapse0x1293dc0() {
   return (neuron0x12778b0()*0.279492);
}

double NNfunction_NN_2_4::synapse0x1293e00() {
   return (neuron0x1278280()*-0.499169);
}

double NNfunction_NN_2_4::synapse0x1293e40() {
   return (neuron0x1278c50()*0.0893039);
}

double NNfunction_NN_2_4::synapse0x1293e80() {
   return (neuron0x1279620()*-0.0373842);
}

double NNfunction_NN_2_4::synapse0x1293ec0() {
   return (neuron0x1279ff0()*-1.24775);
}

double NNfunction_NN_2_4::synapse0x1293f00() {
   return (neuron0x127a9c0()*-2.84956);
}

double NNfunction_NN_2_4::synapse0x1293f40() {
   return (neuron0x127b390()*0.188857);
}

double NNfunction_NN_2_4::synapse0x1293f80() {
   return (neuron0x127bd60()*0.817507);
}

double NNfunction_NN_2_4::synapse0x1293b30() {
   return (neuron0x1271df0()*-0.779467);
}

double NNfunction_NN_2_4::synapse0x1293b70() {
   return (neuron0x127e940()*0.429328);
}

double NNfunction_NN_2_4::synapse0x1293bb0() {
   return (neuron0x127f310()*2.96266);
}

double NNfunction_NN_2_4::synapse0x1293bf0() {
   return (neuron0x127fce0()*-0.151363);
}

double NNfunction_NN_2_4::synapse0x12941d0() {
   return (neuron0x12806b0()*-0.390672);
}

double NNfunction_NN_2_4::synapse0x1294210() {
   return (neuron0x1281080()*-2.66612);
}

double NNfunction_NN_2_4::synapse0x1294250() {
   return (neuron0x1281a50()*1.19318);
}

double NNfunction_NN_2_4::synapse0x1294290() {
   return (neuron0x1282420()*2.21558);
}

double NNfunction_NN_2_4::synapse0x12942d0() {
   return (neuron0x1282df0()*-1.1186);
}

double NNfunction_NN_2_4::synapse0x1294310() {
   return (neuron0x12839d0()*1.48954);
}

double NNfunction_NN_2_4::synapse0x1294350() {
   return (neuron0x12843a0()*0.109257);
}

double NNfunction_NN_2_4::synapse0x1294390() {
   return (neuron0x1275220()*1.29105);
}

double NNfunction_NN_2_4::synapse0x12943d0() {
   return (neuron0x1275bf0()*0.166199);
}

double NNfunction_NN_2_4::synapse0x1294410() {
   return (neuron0x12765c0()*0.605263);
}

double NNfunction_NN_2_4::synapse0x1294450() {
   return (neuron0x1288c00()*0.0544906);
}

double NNfunction_NN_2_4::synapse0x1294490() {
   return (neuron0x12894b0()*1.58381);
}

double NNfunction_NN_2_4::synapse0x12944d0() {
   return (neuron0x1289e80()*-2.43413);
}

double NNfunction_NN_2_4::synapse0x1294510() {
   return (neuron0x128a850()*-0.29087);
}

double NNfunction_NN_2_4::synapse0x1294890() {
   return (neuron0x12667d0()*-0.0698081);
}

double NNfunction_NN_2_4::synapse0x12948d0() {
   return (neuron0x12670e0()*-0.0255701);
}

double NNfunction_NN_2_4::synapse0x1294910() {
   return (neuron0x1267bc0()*0.996376);
}

double NNfunction_NN_2_4::synapse0x1294950() {
   return (neuron0x1021450()*0.614743);
}

double NNfunction_NN_2_4::synapse0x1294990() {
   return (neuron0x12689e0()*0.118678);
}

double NNfunction_NN_2_4::synapse0x12949d0() {
   return (neuron0x12693b0()*-1.51641);
}

double NNfunction_NN_2_4::synapse0x1294a10() {
   return (neuron0x126a180()*1.1491);
}

double NNfunction_NN_2_4::synapse0x1294a50() {
   return (neuron0x126ab50()*-0.0192477);
}

double NNfunction_NN_2_4::synapse0x1294a90() {
   return (neuron0x126b520()*0.475287);
}

double NNfunction_NN_2_4::synapse0x1294ad0() {
   return (neuron0x126c000()*0.0163333);
}

double NNfunction_NN_2_4::synapse0x1294b10() {
   return (neuron0x126c9d0()*-0.816757);
}

double NNfunction_NN_2_4::synapse0x1294b50() {
   return (neuron0x1269ab0()*-0.928805);
}

double NNfunction_NN_2_4::synapse0x1294b90() {
   return (neuron0x126e580()*0.070647);
}

double NNfunction_NN_2_4::synapse0x1294bd0() {
   return (neuron0x126ef50()*1.96587);
}

double NNfunction_NN_2_4::synapse0x1294c10() {
   return (neuron0x126f920()*-0.0671096);
}

double NNfunction_NN_2_4::synapse0x1294c50() {
   return (neuron0x12702f0()*-0.571998);
}

double NNfunction_NN_2_4::synapse0x12946e0() {
   return (neuron0x1272100()*-0.0597302);
}

double NNfunction_NN_2_4::synapse0x1294720() {
   return (neuron0x12723e0()*0.149579);
}

double NNfunction_NN_2_4::synapse0x1294da0() {
   return (neuron0x1272db0()*0.550735);
}

double NNfunction_NN_2_4::synapse0x1294de0() {
   return (neuron0x1273780()*-0.0452658);
}

double NNfunction_NN_2_4::synapse0x1294e20() {
   return (neuron0x1274150()*-0.214367);
}

double NNfunction_NN_2_4::synapse0x1294e60() {
   return (neuron0x1274b20()*0.0158522);
}

double NNfunction_NN_2_4::synapse0x1294ea0() {
   return (neuron0x126d670()*-1.10381);
}

double NNfunction_NN_2_4::synapse0x1294ee0() {
   return (neuron0x126e040()*-1.60597);
}

double NNfunction_NN_2_4::synapse0x1294f20() {
   return (neuron0x12778b0()*1.01548);
}

double NNfunction_NN_2_4::synapse0x1294f60() {
   return (neuron0x1278280()*1.1588);
}

double NNfunction_NN_2_4::synapse0x1294fa0() {
   return (neuron0x1278c50()*-0.286942);
}

double NNfunction_NN_2_4::synapse0x1294fe0() {
   return (neuron0x1279620()*-0.0292394);
}

double NNfunction_NN_2_4::synapse0x1295020() {
   return (neuron0x1279ff0()*-0.113419);
}

double NNfunction_NN_2_4::synapse0x1295060() {
   return (neuron0x127a9c0()*0.0721727);
}

double NNfunction_NN_2_4::synapse0x12950a0() {
   return (neuron0x127b390()*0.0183714);
}

double NNfunction_NN_2_4::synapse0x12950e0() {
   return (neuron0x127bd60()*-0.713371);
}

double NNfunction_NN_2_4::synapse0x1294c90() {
   return (neuron0x1271df0()*-0.197941);
}

double NNfunction_NN_2_4::synapse0x1294cd0() {
   return (neuron0x127e940()*-0.0778416);
}

double NNfunction_NN_2_4::synapse0x1294d10() {
   return (neuron0x127f310()*0.226106);
}

double NNfunction_NN_2_4::synapse0x1294d50() {
   return (neuron0x127fce0()*0.0506465);
}

double NNfunction_NN_2_4::synapse0x1295330() {
   return (neuron0x12806b0()*0.104366);
}

double NNfunction_NN_2_4::synapse0x1295370() {
   return (neuron0x1281080()*-0.744279);
}

double NNfunction_NN_2_4::synapse0x12953b0() {
   return (neuron0x1281a50()*1.90219);
}

double NNfunction_NN_2_4::synapse0x12953f0() {
   return (neuron0x1282420()*0.182004);
}

double NNfunction_NN_2_4::synapse0x1295430() {
   return (neuron0x1282df0()*-0.0159182);
}

double NNfunction_NN_2_4::synapse0x1295470() {
   return (neuron0x12839d0()*0.24417);
}

double NNfunction_NN_2_4::synapse0x12954b0() {
   return (neuron0x12843a0()*-0.306285);
}

double NNfunction_NN_2_4::synapse0x12954f0() {
   return (neuron0x1275220()*-0.370825);
}

double NNfunction_NN_2_4::synapse0x1295530() {
   return (neuron0x1275bf0()*0.0399407);
}

double NNfunction_NN_2_4::synapse0x1295570() {
   return (neuron0x12765c0()*-0.109058);
}

double NNfunction_NN_2_4::synapse0x12955b0() {
   return (neuron0x1288c00()*-0.260067);
}

double NNfunction_NN_2_4::synapse0x12955f0() {
   return (neuron0x12894b0()*-0.359903);
}

double NNfunction_NN_2_4::synapse0x1295630() {
   return (neuron0x1289e80()*0.232279);
}

double NNfunction_NN_2_4::synapse0x1295670() {
   return (neuron0x128a850()*0.509135);
}

double NNfunction_NN_2_4::synapse0x1266790() {
   return (neuron0x1291a50()*-2.31358);
}

double NNfunction_NN_2_4::synapse0x12958d0() {
   return (neuron0x1291df0()*-2.48129);
}

double NNfunction_NN_2_4::synapse0x1295910() {
   return (neuron0x1292290()*-5.86795);
}

double NNfunction_NN_2_4::synapse0x1295950() {
   return (neuron0x12933f0()*-4.26411);
}

double NNfunction_NN_2_4::synapse0x1295990() {
   return (neuron0x1294550()*-9.51763);
}

