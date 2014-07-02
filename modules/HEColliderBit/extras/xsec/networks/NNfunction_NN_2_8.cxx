#include "NNfunction_NN_2_8.h"
#include <cmath>

double NNfunction_NN_2_8::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4727)/15.1566;
   input1 = (in1 - -14.913)/1212.97;
   input2 = (in2 - 199.868)/159.315;
   input3 = (in3 - -23.4217)/844.442;
   input4 = (in4 - 1063.14)/922.441;
   input5 = (in5 - 924.37)/951.595;
   input6 = (in6 - 933.86)/951.462;
   input7 = (in7 - 946.86)/931.048;
   input8 = (in8 - 936.605)/978.171;
   input9 = (in9 - 921.315)/964.512;
   input10 = (in10 - 974.446)/956.776;
   input11 = (in11 - 703.763)/867.376;
   input12 = (in12 - 737.03)/875.517;
   input13 = (in13 - 506.18)/524.214;
   input14 = (in14 - 700.983)/801.218;
   input15 = (in15 - 707.247)/805.097;
   input16 = (in16 - 528.405)/565.754;
   input17 = (in17 - 764.691)/907.595;
   input18 = (in18 - 763.421)/907.334;
   input19 = (in19 - 773.426)/864.1;
   input20 = (in20 - -4.4805)/489.239;
   input21 = (in21 - -8.85961)/1136.42;
   input22 = (in22 - 0.677863)/1194.12;
   input23 = (in23 - -31.2565)/221.743;
   switch(index) {
     case 0:
         return neuron0x2939ae0();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_8::Value(int index, double* input) {
   input0 = (input[0] - 23.4727)/15.1566;
   input1 = (input[1] - -14.913)/1212.97;
   input2 = (input[2] - 199.868)/159.315;
   input3 = (input[3] - -23.4217)/844.442;
   input4 = (input[4] - 1063.14)/922.441;
   input5 = (input[5] - 924.37)/951.595;
   input6 = (input[6] - 933.86)/951.462;
   input7 = (input[7] - 946.86)/931.048;
   input8 = (input[8] - 936.605)/978.171;
   input9 = (input[9] - 921.315)/964.512;
   input10 = (input[10] - 974.446)/956.776;
   input11 = (input[11] - 703.763)/867.376;
   input12 = (input[12] - 737.03)/875.517;
   input13 = (input[13] - 506.18)/524.214;
   input14 = (input[14] - 700.983)/801.218;
   input15 = (input[15] - 707.247)/805.097;
   input16 = (input[16] - 528.405)/565.754;
   input17 = (input[17] - 764.691)/907.595;
   input18 = (input[18] - 763.421)/907.334;
   input19 = (input[19] - 773.426)/864.1;
   input20 = (input[20] - -4.4805)/489.239;
   input21 = (input[21] - -8.85961)/1136.42;
   input22 = (input[22] - 0.677863)/1194.12;
   input23 = (input[23] - -31.2565)/221.743;
   switch(index) {
     case 0:
         return neuron0x2939ae0();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_8::neuron0x2904b50() {
   return input0;
}

double NNfunction_NN_2_8::neuron0x2904e00() {
   return input1;
}

double NNfunction_NN_2_8::neuron0x2905140() {
   return input2;
}

double NNfunction_NN_2_8::neuron0x2905480() {
   return input3;
}

double NNfunction_NN_2_8::neuron0x29057c0() {
   return input4;
}

double NNfunction_NN_2_8::neuron0x2905b00() {
   return input5;
}

double NNfunction_NN_2_8::neuron0x2905e40() {
   return input6;
}

double NNfunction_NN_2_8::neuron0x2906180() {
   return input7;
}

double NNfunction_NN_2_8::neuron0x29064c0() {
   return input8;
}

double NNfunction_NN_2_8::neuron0x2906800() {
   return input9;
}

double NNfunction_NN_2_8::neuron0x2906b40() {
   return input10;
}

double NNfunction_NN_2_8::neuron0x2906e80() {
   return input11;
}

double NNfunction_NN_2_8::neuron0x29071c0() {
   return input12;
}

double NNfunction_NN_2_8::neuron0x2907500() {
   return input13;
}

double NNfunction_NN_2_8::neuron0x2907840() {
   return input14;
}

double NNfunction_NN_2_8::neuron0x2907b80() {
   return input15;
}

double NNfunction_NN_2_8::neuron0x2907ec0() {
   return input16;
}

double NNfunction_NN_2_8::neuron0x2908420() {
   return input17;
}

double NNfunction_NN_2_8::neuron0x2908760() {
   return input18;
}

double NNfunction_NN_2_8::neuron0x2908aa0() {
   return input19;
}

double NNfunction_NN_2_8::neuron0x2908de0() {
   return input20;
}

double NNfunction_NN_2_8::neuron0x2909120() {
   return input21;
}

double NNfunction_NN_2_8::neuron0x2909460() {
   return input22;
}

double NNfunction_NN_2_8::neuron0x29097a0() {
   return input23;
}

double NNfunction_NN_2_8::input0x2909c10() {
   double input = 2.69494;
   input += synapse0x2909f50();
   input += synapse0x2909f90();
   input += synapse0x2909fd0();
   input += synapse0x290a010();
   input += synapse0x290a050();
   input += synapse0x290a090();
   input += synapse0x290a0d0();
   input += synapse0x290a110();
   input += synapse0x290a150();
   input += synapse0x290a190();
   input += synapse0x290a1d0();
   input += synapse0x290a210();
   input += synapse0x290a250();
   input += synapse0x290a290();
   input += synapse0x290a2d0();
   input += synapse0x290a310();
   input += synapse0x2909da0();
   input += synapse0x2909de0();
   input += synapse0x26b71d0();
   input += synapse0x26b7210();
   input += synapse0x290a350();
   input += synapse0x290a390();
   input += synapse0x290a3d0();
   input += synapse0x290a410();
   return input;
}

double NNfunction_NN_2_8::neuron0x2909c10() {
   double input = input0x2909c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290a450() {
   double input = 0.15954;
   input += synapse0x290a790();
   input += synapse0x290a7d0();
   input += synapse0x290a810();
   input += synapse0x290a850();
   input += synapse0x290a890();
   input += synapse0x290a8d0();
   input += synapse0x290a910();
   input += synapse0x290a950();
   input += synapse0x290a990();
   input += synapse0x26b7020();
   input += synapse0x26b7060();
   input += synapse0x26b70a0();
   input += synapse0x26b70e0();
   input += synapse0x290abe0();
   input += synapse0x290ac20();
   input += synapse0x290ac60();
   input += synapse0x290a5e0();
   input += synapse0x290a620();
   input += synapse0x290adb0();
   input += synapse0x290adf0();
   input += synapse0x290ae30();
   input += synapse0x290ae70();
   input += synapse0x290aeb0();
   input += synapse0x290aef0();
   return input;
}

double NNfunction_NN_2_8::neuron0x290a450() {
   double input = input0x290a450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290af30() {
   double input = -1.5145;
   input += synapse0x290b270();
   input += synapse0x290b2b0();
   input += synapse0x290b2f0();
   input += synapse0x290b330();
   input += synapse0x290b370();
   input += synapse0x290b3b0();
   input += synapse0x290b3f0();
   input += synapse0x290b430();
   input += synapse0x290b470();
   input += synapse0x290b4b0();
   input += synapse0x290b4f0();
   input += synapse0x290b530();
   input += synapse0x290b570();
   input += synapse0x290b5b0();
   input += synapse0x290b5f0();
   input += synapse0x290b630();
   input += synapse0x290b0c0();
   input += synapse0x290b100();
   input += synapse0x26c5090();
   input += synapse0x26c50d0();
   input += synapse0x290d560();
   input += synapse0x290d5a0();
   input += synapse0x2904890();
   input += synapse0x29048d0();
   return input;
}

double NNfunction_NN_2_8::neuron0x290af30() {
   double input = input0x290af30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x26c5810() {
   double input = -2.12891;
   input += synapse0x26c59a0();
   input += synapse0x290aaf0();
   input += synapse0x290ab30();
   input += synapse0x290ab70();
   input += synapse0x290b780();
   input += synapse0x290b7c0();
   input += synapse0x290b800();
   input += synapse0x290b840();
   input += synapse0x290b880();
   input += synapse0x290b8c0();
   input += synapse0x290b900();
   input += synapse0x290b940();
   input += synapse0x290b980();
   input += synapse0x290b9c0();
   input += synapse0x290ba00();
   input += synapse0x290ba40();
   input += synapse0x2904910();
   input += synapse0x2904950();
   input += synapse0x290bb90();
   input += synapse0x290bbd0();
   input += synapse0x290bc10();
   input += synapse0x290bc50();
   input += synapse0x290bc90();
   input += synapse0x290bcd0();
   return input;
}

double NNfunction_NN_2_8::neuron0x26c5810() {
   double input = input0x26c5810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290bd10() {
   double input = -0.659768;
   input += synapse0x290c050();
   input += synapse0x290c090();
   input += synapse0x290c0d0();
   input += synapse0x290c110();
   input += synapse0x290c150();
   input += synapse0x290c190();
   input += synapse0x290c1d0();
   input += synapse0x290c210();
   input += synapse0x290c250();
   input += synapse0x290c290();
   input += synapse0x290c2d0();
   input += synapse0x290c310();
   input += synapse0x290c350();
   input += synapse0x290c390();
   input += synapse0x290c3d0();
   input += synapse0x290c410();
   input += synapse0x290c560();
   input += synapse0x290bea0();
   input += synapse0x290bee0();
   input += synapse0x290d6a0();
   input += synapse0x290d6e0();
   input += synapse0x290d720();
   input += synapse0x290d760();
   input += synapse0x290d7a0();
   return input;
}

double NNfunction_NN_2_8::neuron0x290bd10() {
   double input = input0x290bd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290d7e0() {
   double input = 0.719355;
   input += synapse0x290db20();
   input += synapse0x290db60();
   input += synapse0x290dba0();
   input += synapse0x290dbe0();
   input += synapse0x290dc20();
   input += synapse0x290dc60();
   input += synapse0x290dca0();
   input += synapse0x290dce0();
   input += synapse0x290dd20();
   input += synapse0x26c5400();
   input += synapse0x26c5440();
   input += synapse0x26c5480();
   input += synapse0x26c54c0();
   input += synapse0x26c5500();
   input += synapse0x26c5540();
   input += synapse0x26c5580();
   input += synapse0x290d970();
   input += synapse0x290d9b0();
   input += synapse0x26c56d0();
   input += synapse0x26c5710();
   input += synapse0x26c5750();
   input += synapse0x26c5790();
   input += synapse0x26c57d0();
   input += synapse0x290e570();
   return input;
}

double NNfunction_NN_2_8::neuron0x290d7e0() {
   double input = input0x290d7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290e5b0() {
   double input = 1.31824;
   input += synapse0x290e8f0();
   input += synapse0x290e930();
   input += synapse0x290e970();
   input += synapse0x290e9b0();
   input += synapse0x290e9f0();
   input += synapse0x290ea30();
   input += synapse0x290ea70();
   input += synapse0x290eab0();
   input += synapse0x290eaf0();
   input += synapse0x290eb30();
   input += synapse0x290eb70();
   input += synapse0x290ebb0();
   input += synapse0x290ebf0();
   input += synapse0x290ec30();
   input += synapse0x290ec70();
   input += synapse0x290ecb0();
   input += synapse0x290e740();
   input += synapse0x290e780();
   input += synapse0x290ee00();
   input += synapse0x290ee40();
   input += synapse0x290ee80();
   input += synapse0x290eec0();
   input += synapse0x290ef00();
   input += synapse0x290ef40();
   return input;
}

double NNfunction_NN_2_8::neuron0x290e5b0() {
   double input = input0x290e5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290ef80() {
   double input = 0.103509;
   input += synapse0x290f2c0();
   input += synapse0x290f300();
   input += synapse0x290f340();
   input += synapse0x290f380();
   input += synapse0x290f3c0();
   input += synapse0x290f400();
   input += synapse0x290f440();
   input += synapse0x290f480();
   input += synapse0x290f4c0();
   input += synapse0x290f500();
   input += synapse0x290f540();
   input += synapse0x290f580();
   input += synapse0x290f5c0();
   input += synapse0x290f600();
   input += synapse0x290f640();
   input += synapse0x290f680();
   input += synapse0x290f110();
   input += synapse0x290f150();
   input += synapse0x290f7d0();
   input += synapse0x290f810();
   input += synapse0x290f850();
   input += synapse0x290f890();
   input += synapse0x290f8d0();
   input += synapse0x290f910();
   return input;
}

double NNfunction_NN_2_8::neuron0x290ef80() {
   double input = input0x290ef80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290f950() {
   double input = 0.649326;
   input += synapse0x2908310();
   input += synapse0x2908350();
   input += synapse0x2908390();
   input += synapse0x29083d0();
   input += synapse0x290fea0();
   input += synapse0x290fee0();
   input += synapse0x290ff20();
   input += synapse0x290ff60();
   input += synapse0x290ffa0();
   input += synapse0x290ffe0();
   input += synapse0x2910020();
   input += synapse0x2910060();
   input += synapse0x29100a0();
   input += synapse0x29100e0();
   input += synapse0x2910120();
   input += synapse0x2910160();
   input += synapse0x290fae0();
   input += synapse0x290fb20();
   input += synapse0x29102b0();
   input += synapse0x29102f0();
   input += synapse0x2910330();
   input += synapse0x2910370();
   input += synapse0x29103b0();
   input += synapse0x29103f0();
   return input;
}

double NNfunction_NN_2_8::neuron0x290f950() {
   double input = input0x290f950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2910430() {
   double input = 2.67653;
   input += synapse0x2910770();
   input += synapse0x29107b0();
   input += synapse0x29107f0();
   input += synapse0x2910830();
   input += synapse0x2910870();
   input += synapse0x29108b0();
   input += synapse0x29108f0();
   input += synapse0x2910930();
   input += synapse0x2910970();
   input += synapse0x29109b0();
   input += synapse0x29109f0();
   input += synapse0x2910a30();
   input += synapse0x2910a70();
   input += synapse0x2910ab0();
   input += synapse0x2910af0();
   input += synapse0x2910b30();
   input += synapse0x29105c0();
   input += synapse0x2910600();
   input += synapse0x2910c80();
   input += synapse0x2910cc0();
   input += synapse0x2910d00();
   input += synapse0x2910d40();
   input += synapse0x2910d80();
   input += synapse0x2910dc0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2910430() {
   double input = input0x2910430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2910e00() {
   double input = 0.810654;
   input += synapse0x2911140();
   input += synapse0x2911180();
   input += synapse0x29111c0();
   input += synapse0x2911200();
   input += synapse0x2911240();
   input += synapse0x2911280();
   input += synapse0x29112c0();
   input += synapse0x2911300();
   input += synapse0x2911340();
   input += synapse0x2911380();
   input += synapse0x29113c0();
   input += synapse0x2911400();
   input += synapse0x2911440();
   input += synapse0x2911480();
   input += synapse0x29114c0();
   input += synapse0x2911500();
   input += synapse0x2910f90();
   input += synapse0x2910fd0();
   input += synapse0x290dd60();
   input += synapse0x290dda0();
   input += synapse0x290dde0();
   input += synapse0x290de20();
   input += synapse0x290de60();
   input += synapse0x290dea0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2910e00() {
   double input = input0x2910e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x290dee0() {
   double input = 2.38624;
   input += synapse0x290e220();
   input += synapse0x290e260();
   input += synapse0x290e2a0();
   input += synapse0x290e2e0();
   input += synapse0x290e320();
   input += synapse0x290e360();
   input += synapse0x290e3a0();
   input += synapse0x290e3e0();
   input += synapse0x290e420();
   input += synapse0x290e460();
   input += synapse0x290e4a0();
   input += synapse0x290e4e0();
   input += synapse0x290e520();
   input += synapse0x2912660();
   input += synapse0x29126a0();
   input += synapse0x29126e0();
   input += synapse0x290e070();
   input += synapse0x290e0b0();
   input += synapse0x2912830();
   input += synapse0x2912870();
   input += synapse0x29128b0();
   input += synapse0x29128f0();
   input += synapse0x2912930();
   input += synapse0x2912970();
   return input;
}

double NNfunction_NN_2_8::neuron0x290dee0() {
   double input = input0x290dee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x29129b0() {
   double input = -0.088595;
   input += synapse0x2912cf0();
   input += synapse0x2912d30();
   input += synapse0x2912d70();
   input += synapse0x2912db0();
   input += synapse0x2912df0();
   input += synapse0x2912e30();
   input += synapse0x2912e70();
   input += synapse0x2912eb0();
   input += synapse0x2912ef0();
   input += synapse0x2912f30();
   input += synapse0x2912f70();
   input += synapse0x2912fb0();
   input += synapse0x2912ff0();
   input += synapse0x2913030();
   input += synapse0x2913070();
   input += synapse0x29130b0();
   input += synapse0x2912b40();
   input += synapse0x2912b80();
   input += synapse0x2913200();
   input += synapse0x2913240();
   input += synapse0x2913280();
   input += synapse0x29132c0();
   input += synapse0x2913300();
   input += synapse0x2913340();
   return input;
}

double NNfunction_NN_2_8::neuron0x29129b0() {
   double input = input0x29129b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2913380() {
   double input = 0.352303;
   input += synapse0x29136c0();
   input += synapse0x2913700();
   input += synapse0x2913740();
   input += synapse0x2913780();
   input += synapse0x29137c0();
   input += synapse0x2913800();
   input += synapse0x2913840();
   input += synapse0x2913880();
   input += synapse0x29138c0();
   input += synapse0x2913900();
   input += synapse0x2913940();
   input += synapse0x2913980();
   input += synapse0x29139c0();
   input += synapse0x2913a00();
   input += synapse0x2913a40();
   input += synapse0x2913a80();
   input += synapse0x2913510();
   input += synapse0x2913550();
   input += synapse0x2913bd0();
   input += synapse0x2913c10();
   input += synapse0x2913c50();
   input += synapse0x2913c90();
   input += synapse0x2913cd0();
   input += synapse0x2913d10();
   return input;
}

double NNfunction_NN_2_8::neuron0x2913380() {
   double input = input0x2913380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2913d50() {
   double input = -0.738927;
   input += synapse0x2914090();
   input += synapse0x29140d0();
   input += synapse0x2914110();
   input += synapse0x2914150();
   input += synapse0x2914190();
   input += synapse0x29141d0();
   input += synapse0x2914210();
   input += synapse0x2914250();
   input += synapse0x2914290();
   input += synapse0x29142d0();
   input += synapse0x2914310();
   input += synapse0x2914350();
   input += synapse0x2914390();
   input += synapse0x29143d0();
   input += synapse0x2914410();
   input += synapse0x2914450();
   input += synapse0x2913ee0();
   input += synapse0x2913f20();
   input += synapse0x29145a0();
   input += synapse0x29145e0();
   input += synapse0x2914620();
   input += synapse0x2914660();
   input += synapse0x29146a0();
   input += synapse0x29146e0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2913d50() {
   double input = input0x2913d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2914720() {
   double input = 0.855267;
   input += synapse0x2914a60();
   input += synapse0x2904ce0();
   input += synapse0x2904d20();
   input += synapse0x2905020();
   input += synapse0x2905060();
   input += synapse0x2905360();
   input += synapse0x29053a0();
   input += synapse0x29056a0();
   input += synapse0x29056e0();
   input += synapse0x29059e0();
   input += synapse0x2905a20();
   input += synapse0x2905d20();
   input += synapse0x2905d60();
   input += synapse0x2906060();
   input += synapse0x29060a0();
   input += synapse0x29063a0();
   input += synapse0x29063e0();
   input += synapse0x29066e0();
   input += synapse0x2906720();
   input += synapse0x2906a20();
   input += synapse0x2906a60();
   input += synapse0x2906d60();
   input += synapse0x2906da0();
   input += synapse0x29070a0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2914720() {
   double input = input0x2914720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2916530() {
   double input = 0.876746;
   input += synapse0x29070e0();
   input += synapse0x2907da0();
   input += synapse0x2907de0();
   input += synapse0x29148b0();
   input += synapse0x29148f0();
   input += synapse0x29080e0();
   input += synapse0x2908120();
   input += synapse0x2908640();
   input += synapse0x2908680();
   input += synapse0x2908980();
   input += synapse0x29089c0();
   input += synapse0x2908cc0();
   input += synapse0x2908d00();
   input += synapse0x2909000();
   input += synapse0x2909040();
   input += synapse0x2909340();
   input += synapse0x2909380();
   input += synapse0x2909680();
   input += synapse0x29096c0();
   input += synapse0x29099c0();
   input += synapse0x2909a00();
   input += synapse0x29073e0();
   input += synapse0x2907420();
   input += synapse0x29167d0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2916530() {
   double input = input0x2916530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2916810() {
   double input = 0.210179;
   input += synapse0x2916b50();
   input += synapse0x2916b90();
   input += synapse0x2916bd0();
   input += synapse0x2916c10();
   input += synapse0x2916c50();
   input += synapse0x2916c90();
   input += synapse0x2916cd0();
   input += synapse0x2916d10();
   input += synapse0x2916d50();
   input += synapse0x2916d90();
   input += synapse0x2916dd0();
   input += synapse0x2916e10();
   input += synapse0x2916e50();
   input += synapse0x2916e90();
   input += synapse0x2916ed0();
   input += synapse0x2916f10();
   input += synapse0x29169a0();
   input += synapse0x29169e0();
   input += synapse0x2917060();
   input += synapse0x29170a0();
   input += synapse0x29170e0();
   input += synapse0x2917120();
   input += synapse0x2917160();
   input += synapse0x29171a0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2916810() {
   double input = input0x2916810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x29171e0() {
   double input = -1.948;
   input += synapse0x2917520();
   input += synapse0x2917560();
   input += synapse0x29175a0();
   input += synapse0x29175e0();
   input += synapse0x2917620();
   input += synapse0x2917660();
   input += synapse0x29176a0();
   input += synapse0x29176e0();
   input += synapse0x2917720();
   input += synapse0x2917760();
   input += synapse0x29177a0();
   input += synapse0x29177e0();
   input += synapse0x2917820();
   input += synapse0x2917860();
   input += synapse0x29178a0();
   input += synapse0x29178e0();
   input += synapse0x2917370();
   input += synapse0x29173b0();
   input += synapse0x2917a30();
   input += synapse0x2917a70();
   input += synapse0x2917ab0();
   input += synapse0x2917af0();
   input += synapse0x2917b30();
   input += synapse0x2917b70();
   return input;
}

double NNfunction_NN_2_8::neuron0x29171e0() {
   double input = input0x29171e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2917bb0() {
   double input = 0.436802;
   input += synapse0x2917ef0();
   input += synapse0x2917f30();
   input += synapse0x2917f70();
   input += synapse0x2917fb0();
   input += synapse0x2917ff0();
   input += synapse0x2918030();
   input += synapse0x2918070();
   input += synapse0x29180b0();
   input += synapse0x29180f0();
   input += synapse0x2918130();
   input += synapse0x2918170();
   input += synapse0x29181b0();
   input += synapse0x29181f0();
   input += synapse0x2918230();
   input += synapse0x2918270();
   input += synapse0x29182b0();
   input += synapse0x2917d40();
   input += synapse0x2917d80();
   input += synapse0x2918400();
   input += synapse0x2918440();
   input += synapse0x2918480();
   input += synapse0x29184c0();
   input += synapse0x2918500();
   input += synapse0x2918540();
   return input;
}

double NNfunction_NN_2_8::neuron0x2917bb0() {
   double input = input0x2917bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2918580() {
   double input = -2.97074;
   input += synapse0x29188c0();
   input += synapse0x2918900();
   input += synapse0x2918940();
   input += synapse0x2918980();
   input += synapse0x29189c0();
   input += synapse0x2918a00();
   input += synapse0x2918a40();
   input += synapse0x2918a80();
   input += synapse0x2918ac0();
   input += synapse0x2918b00();
   input += synapse0x2918b40();
   input += synapse0x2918b80();
   input += synapse0x2918bc0();
   input += synapse0x2918c00();
   input += synapse0x2918c40();
   input += synapse0x2918c80();
   input += synapse0x2918710();
   input += synapse0x2918750();
   input += synapse0x2918dd0();
   input += synapse0x2918e10();
   input += synapse0x2918e50();
   input += synapse0x2918e90();
   input += synapse0x2918ed0();
   input += synapse0x2918f10();
   return input;
}

double NNfunction_NN_2_8::neuron0x2918580() {
   double input = input0x2918580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2918f50() {
   double input = -1.14229;
   input += synapse0x2919290();
   input += synapse0x29192d0();
   input += synapse0x2919310();
   input += synapse0x2919350();
   input += synapse0x2919390();
   input += synapse0x29193d0();
   input += synapse0x2919410();
   input += synapse0x2919450();
   input += synapse0x2919490();
   input += synapse0x2911650();
   input += synapse0x2911690();
   input += synapse0x29116d0();
   input += synapse0x2911710();
   input += synapse0x2911750();
   input += synapse0x2911790();
   input += synapse0x29117d0();
   input += synapse0x29190e0();
   input += synapse0x2919120();
   input += synapse0x2911920();
   input += synapse0x2911960();
   input += synapse0x29119a0();
   input += synapse0x29119e0();
   input += synapse0x2911a20();
   input += synapse0x2911a60();
   return input;
}

double NNfunction_NN_2_8::neuron0x2918f50() {
   double input = input0x2918f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2911aa0() {
   double input = -0.600795;
   input += synapse0x2911de0();
   input += synapse0x2911e20();
   input += synapse0x2911e60();
   input += synapse0x2911ea0();
   input += synapse0x2911ee0();
   input += synapse0x2911f20();
   input += synapse0x2911f60();
   input += synapse0x2911fa0();
   input += synapse0x2911fe0();
   input += synapse0x2912020();
   input += synapse0x2912060();
   input += synapse0x29120a0();
   input += synapse0x29120e0();
   input += synapse0x2912120();
   input += synapse0x2912160();
   input += synapse0x29121a0();
   input += synapse0x2911c30();
   input += synapse0x2911c70();
   input += synapse0x29122f0();
   input += synapse0x2912330();
   input += synapse0x2912370();
   input += synapse0x29123b0();
   input += synapse0x29123f0();
   input += synapse0x2912430();
   return input;
}

double NNfunction_NN_2_8::neuron0x2911aa0() {
   double input = input0x2911aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2912470() {
   double input = 1.54725;
   input += synapse0x2912600();
   input += synapse0x291b690();
   input += synapse0x291b6d0();
   input += synapse0x291b710();
   input += synapse0x291b750();
   input += synapse0x291b790();
   input += synapse0x291b7d0();
   input += synapse0x291b810();
   input += synapse0x291b850();
   input += synapse0x291b890();
   input += synapse0x291b8d0();
   input += synapse0x291b910();
   input += synapse0x291b950();
   input += synapse0x291b990();
   input += synapse0x291b9d0();
   input += synapse0x291ba10();
   input += synapse0x291b4e0();
   input += synapse0x291b520();
   input += synapse0x291bb60();
   input += synapse0x291bba0();
   input += synapse0x291bbe0();
   input += synapse0x291bc20();
   input += synapse0x291bc60();
   input += synapse0x291bca0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2912470() {
   double input = input0x2912470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291bce0() {
   double input = 2.29405;
   input += synapse0x291c020();
   input += synapse0x291c060();
   input += synapse0x291c0a0();
   input += synapse0x291c0e0();
   input += synapse0x291c120();
   input += synapse0x291c160();
   input += synapse0x291c1a0();
   input += synapse0x291c1e0();
   input += synapse0x291c220();
   input += synapse0x291c260();
   input += synapse0x291c2a0();
   input += synapse0x291c2e0();
   input += synapse0x291c320();
   input += synapse0x291c360();
   input += synapse0x291c3a0();
   input += synapse0x291c3e0();
   input += synapse0x291be70();
   input += synapse0x291beb0();
   input += synapse0x291c530();
   input += synapse0x291c570();
   input += synapse0x291c5b0();
   input += synapse0x291c5f0();
   input += synapse0x291c630();
   input += synapse0x291c670();
   return input;
}

double NNfunction_NN_2_8::neuron0x291bce0() {
   double input = input0x291bce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291c6b0() {
   double input = -0.313815;
   input += synapse0x291c9f0();
   input += synapse0x291ca30();
   input += synapse0x291ca70();
   input += synapse0x291cab0();
   input += synapse0x291caf0();
   input += synapse0x291cb30();
   input += synapse0x291cb70();
   input += synapse0x291cbb0();
   input += synapse0x291cbf0();
   input += synapse0x291cc30();
   input += synapse0x291cc70();
   input += synapse0x291ccb0();
   input += synapse0x291ccf0();
   input += synapse0x291cd30();
   input += synapse0x291cd70();
   input += synapse0x291cdb0();
   input += synapse0x291c840();
   input += synapse0x291c880();
   input += synapse0x291cf00();
   input += synapse0x291cf40();
   input += synapse0x291cf80();
   input += synapse0x291cfc0();
   input += synapse0x291d000();
   input += synapse0x291d040();
   return input;
}

double NNfunction_NN_2_8::neuron0x291c6b0() {
   double input = input0x291c6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291d080() {
   double input = -0.195762;
   input += synapse0x291d3c0();
   input += synapse0x291d400();
   input += synapse0x291d440();
   input += synapse0x291d480();
   input += synapse0x291d4c0();
   input += synapse0x291d500();
   input += synapse0x291d540();
   input += synapse0x291d580();
   input += synapse0x291d5c0();
   input += synapse0x291d600();
   input += synapse0x291d640();
   input += synapse0x291d680();
   input += synapse0x291d6c0();
   input += synapse0x291d700();
   input += synapse0x291d740();
   input += synapse0x291d780();
   input += synapse0x291d210();
   input += synapse0x291d250();
   input += synapse0x291d8d0();
   input += synapse0x291d910();
   input += synapse0x291d950();
   input += synapse0x291d990();
   input += synapse0x291d9d0();
   input += synapse0x291da10();
   return input;
}

double NNfunction_NN_2_8::neuron0x291d080() {
   double input = input0x291d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291da50() {
   double input = 0.425899;
   input += synapse0x291dd90();
   input += synapse0x291ddd0();
   input += synapse0x291de10();
   input += synapse0x291de50();
   input += synapse0x291de90();
   input += synapse0x291ded0();
   input += synapse0x291df10();
   input += synapse0x291df50();
   input += synapse0x291df90();
   input += synapse0x291dfd0();
   input += synapse0x291e010();
   input += synapse0x291e050();
   input += synapse0x291e090();
   input += synapse0x291e0d0();
   input += synapse0x291e110();
   input += synapse0x291e150();
   input += synapse0x291dbe0();
   input += synapse0x291dc20();
   input += synapse0x291e2a0();
   input += synapse0x291e2e0();
   input += synapse0x291e320();
   input += synapse0x291e360();
   input += synapse0x291e3a0();
   input += synapse0x291e3e0();
   return input;
}

double NNfunction_NN_2_8::neuron0x291da50() {
   double input = input0x291da50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291e420() {
   double input = -1.20882;
   input += synapse0x291e760();
   input += synapse0x291e7a0();
   input += synapse0x291e7e0();
   input += synapse0x291e820();
   input += synapse0x291e860();
   input += synapse0x291e8a0();
   input += synapse0x291e8e0();
   input += synapse0x291e920();
   input += synapse0x291e960();
   input += synapse0x291e9a0();
   input += synapse0x291e9e0();
   input += synapse0x291ea20();
   input += synapse0x291ea60();
   input += synapse0x291eaa0();
   input += synapse0x291eae0();
   input += synapse0x291eb20();
   input += synapse0x291e5b0();
   input += synapse0x291e5f0();
   input += synapse0x291ec70();
   input += synapse0x291ecb0();
   input += synapse0x291ecf0();
   input += synapse0x291ed30();
   input += synapse0x291ed70();
   input += synapse0x291edb0();
   return input;
}

double NNfunction_NN_2_8::neuron0x291e420() {
   double input = input0x291e420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291edf0() {
   double input = -1.03414;
   input += synapse0x291f130();
   input += synapse0x291f170();
   input += synapse0x291f1b0();
   input += synapse0x291f1f0();
   input += synapse0x291f230();
   input += synapse0x291f270();
   input += synapse0x291f2b0();
   input += synapse0x291f2f0();
   input += synapse0x291f330();
   input += synapse0x291f370();
   input += synapse0x291f3b0();
   input += synapse0x291f3f0();
   input += synapse0x291f430();
   input += synapse0x291f470();
   input += synapse0x291f4b0();
   input += synapse0x291f4f0();
   input += synapse0x291ef80();
   input += synapse0x291efc0();
   input += synapse0x291f640();
   input += synapse0x291f680();
   input += synapse0x291f6c0();
   input += synapse0x291f700();
   input += synapse0x291f740();
   input += synapse0x291f780();
   return input;
}

double NNfunction_NN_2_8::neuron0x291edf0() {
   double input = input0x291edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291f7c0() {
   double input = 3.31869;
   input += synapse0x291fb00();
   input += synapse0x291fb40();
   input += synapse0x291fb80();
   input += synapse0x291fbc0();
   input += synapse0x291fc00();
   input += synapse0x291fc40();
   input += synapse0x291fc80();
   input += synapse0x291fcc0();
   input += synapse0x291fd00();
   input += synapse0x291fd40();
   input += synapse0x291fd80();
   input += synapse0x291fdc0();
   input += synapse0x291fe00();
   input += synapse0x291fe40();
   input += synapse0x291fe80();
   input += synapse0x291fec0();
   input += synapse0x291f950();
   input += synapse0x291f990();
   input += synapse0x2920010();
   input += synapse0x2920050();
   input += synapse0x2920090();
   input += synapse0x29200d0();
   input += synapse0x2920110();
   input += synapse0x2920150();
   return input;
}

double NNfunction_NN_2_8::neuron0x291f7c0() {
   double input = input0x291f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2920190() {
   double input = -1.65379;
   input += synapse0x29204d0();
   input += synapse0x2914aa0();
   input += synapse0x2914ae0();
   input += synapse0x2914b20();
   input += synapse0x2914d70();
   input += synapse0x2914db0();
   input += synapse0x2914df0();
   input += synapse0x2915040();
   input += synapse0x2915080();
   input += synapse0x29152d0();
   input += synapse0x2915310();
   input += synapse0x2915350();
   input += synapse0x29155a0();
   input += synapse0x29155e0();
   input += synapse0x2915830();
   input += synapse0x2915870();
   input += synapse0x2920320();
   input += synapse0x2920360();
   input += synapse0x29159c0();
   input += synapse0x2915ed0();
   input += synapse0x2915f10();
   input += synapse0x2915f50();
   input += synapse0x29161a0();
   input += synapse0x29161e0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2920190() {
   double input = input0x2920190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2916220() {
   double input = 1.66147;
   input += synapse0x2915a90();
   input += synapse0x2915ad0();
   input += synapse0x2915b10();
   input += synapse0x2915b50();
   input += synapse0x29164d0();
   input += synapse0x2922820();
   input += synapse0x2922860();
   input += synapse0x29228a0();
   input += synapse0x29228e0();
   input += synapse0x2922920();
   input += synapse0x2922960();
   input += synapse0x29229a0();
   input += synapse0x29229e0();
   input += synapse0x2922a20();
   input += synapse0x2922a60();
   input += synapse0x2922aa0();
   input += synapse0x29163b0();
   input += synapse0x29163f0();
   input += synapse0x2922bf0();
   input += synapse0x2922c30();
   input += synapse0x2922c70();
   input += synapse0x2922cb0();
   input += synapse0x2922cf0();
   input += synapse0x2922d30();
   return input;
}

double NNfunction_NN_2_8::neuron0x2916220() {
   double input = input0x2916220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2922d70() {
   double input = -1.56041;
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
   input += synapse0x29233f0();
   input += synapse0x2923430();
   input += synapse0x2923470();
   input += synapse0x2922f00();
   input += synapse0x2922f40();
   input += synapse0x29235c0();
   input += synapse0x2923600();
   input += synapse0x2923640();
   input += synapse0x2923680();
   input += synapse0x29236c0();
   input += synapse0x2923700();
   return input;
}

double NNfunction_NN_2_8::neuron0x2922d70() {
   double input = input0x2922d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2923740() {
   double input = -0.390533;
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
   input += synapse0x2923dc0();
   input += synapse0x2923e00();
   input += synapse0x2923e40();
   input += synapse0x29238d0();
   input += synapse0x2923910();
   input += synapse0x2923f90();
   input += synapse0x2923fd0();
   input += synapse0x2924010();
   input += synapse0x2924050();
   input += synapse0x2924090();
   input += synapse0x29240d0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2923740() {
   double input = input0x2923740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2924110() {
   double input = 0.209063;
   input += synapse0x2924450();
   input += synapse0x2924490();
   input += synapse0x29244d0();
   input += synapse0x2924510();
   input += synapse0x2924550();
   input += synapse0x2924590();
   input += synapse0x29245d0();
   input += synapse0x2924610();
   input += synapse0x2924650();
   input += synapse0x2924690();
   input += synapse0x29246d0();
   input += synapse0x2924710();
   input += synapse0x2924750();
   input += synapse0x2924790();
   input += synapse0x29247d0();
   input += synapse0x2924810();
   input += synapse0x29242a0();
   input += synapse0x29242e0();
   input += synapse0x2924960();
   input += synapse0x29249a0();
   input += synapse0x29249e0();
   input += synapse0x2924a20();
   input += synapse0x2924a60();
   input += synapse0x2924aa0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2924110() {
   double input = input0x2924110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2924ae0() {
   double input = -0.851619;
   input += synapse0x2924e20();
   input += synapse0x2924e60();
   input += synapse0x2924ea0();
   input += synapse0x2924ee0();
   input += synapse0x2924f20();
   input += synapse0x2924f60();
   input += synapse0x2924fa0();
   input += synapse0x2924fe0();
   input += synapse0x2925020();
   input += synapse0x2925060();
   input += synapse0x29250a0();
   input += synapse0x29250e0();
   input += synapse0x2925120();
   input += synapse0x2925160();
   input += synapse0x29251a0();
   input += synapse0x29251e0();
   input += synapse0x2924c70();
   input += synapse0x2924cb0();
   input += synapse0x2925330();
   input += synapse0x2925370();
   input += synapse0x29253b0();
   input += synapse0x29253f0();
   input += synapse0x2925430();
   input += synapse0x2925470();
   return input;
}

double NNfunction_NN_2_8::neuron0x2924ae0() {
   double input = input0x2924ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x29254b0() {
   double input = 0.717003;
   input += synapse0x29257f0();
   input += synapse0x2925830();
   input += synapse0x2925870();
   input += synapse0x29258b0();
   input += synapse0x29258f0();
   input += synapse0x2925930();
   input += synapse0x2925970();
   input += synapse0x29259b0();
   input += synapse0x29259f0();
   input += synapse0x2925a30();
   input += synapse0x2925a70();
   input += synapse0x2925ab0();
   input += synapse0x2925af0();
   input += synapse0x2925b30();
   input += synapse0x2925b70();
   input += synapse0x2925bb0();
   input += synapse0x2925640();
   input += synapse0x2925680();
   input += synapse0x2925d00();
   input += synapse0x2925d40();
   input += synapse0x2925d80();
   input += synapse0x2925dc0();
   input += synapse0x2925e00();
   input += synapse0x2925e40();
   return input;
}

double NNfunction_NN_2_8::neuron0x29254b0() {
   double input = input0x29254b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2925e80() {
   double input = 1.17557;
   input += synapse0x29261c0();
   input += synapse0x2926200();
   input += synapse0x2926240();
   input += synapse0x2926280();
   input += synapse0x29262c0();
   input += synapse0x2926300();
   input += synapse0x2926340();
   input += synapse0x2926380();
   input += synapse0x29263c0();
   input += synapse0x2926400();
   input += synapse0x2926440();
   input += synapse0x2926480();
   input += synapse0x29264c0();
   input += synapse0x2926500();
   input += synapse0x2926540();
   input += synapse0x2926580();
   input += synapse0x2926010();
   input += synapse0x2926050();
   input += synapse0x29266d0();
   input += synapse0x2926710();
   input += synapse0x2926750();
   input += synapse0x2926790();
   input += synapse0x29267d0();
   input += synapse0x2926810();
   return input;
}

double NNfunction_NN_2_8::neuron0x2925e80() {
   double input = input0x2925e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2926850() {
   double input = 0.318194;
   input += synapse0x2926b90();
   input += synapse0x2926bd0();
   input += synapse0x2926c10();
   input += synapse0x2926c50();
   input += synapse0x2926c90();
   input += synapse0x2926cd0();
   input += synapse0x2926d10();
   input += synapse0x2926d50();
   input += synapse0x2926d90();
   input += synapse0x2926dd0();
   input += synapse0x2926e10();
   input += synapse0x2926e50();
   input += synapse0x2926e90();
   input += synapse0x2926ed0();
   input += synapse0x2926f10();
   input += synapse0x2926f50();
   input += synapse0x29269e0();
   input += synapse0x2926a20();
   input += synapse0x29270a0();
   input += synapse0x29270e0();
   input += synapse0x2927120();
   input += synapse0x2927160();
   input += synapse0x29271a0();
   input += synapse0x29271e0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2926850() {
   double input = input0x2926850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2927220() {
   double input = -0.689708;
   input += synapse0x290fc90();
   input += synapse0x290fcd0();
   input += synapse0x290fd10();
   input += synapse0x290fd50();
   input += synapse0x290fd90();
   input += synapse0x290fdd0();
   input += synapse0x290fe10();
   input += synapse0x290fe50();
   input += synapse0x2927970();
   input += synapse0x29279b0();
   input += synapse0x29279f0();
   input += synapse0x2927a30();
   input += synapse0x2927a70();
   input += synapse0x2927ab0();
   input += synapse0x2927af0();
   input += synapse0x2927b30();
   input += synapse0x29273b0();
   input += synapse0x29273f0();
   input += synapse0x2927c80();
   input += synapse0x2927cc0();
   input += synapse0x2927d00();
   input += synapse0x2927d40();
   input += synapse0x2927d80();
   input += synapse0x2927dc0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2927220() {
   double input = input0x2927220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2927e00() {
   double input = -2.03279;
   input += synapse0x2928140();
   input += synapse0x2928180();
   input += synapse0x29281c0();
   input += synapse0x2928200();
   input += synapse0x2928240();
   input += synapse0x2928280();
   input += synapse0x29282c0();
   input += synapse0x2928300();
   input += synapse0x2928340();
   input += synapse0x2928380();
   input += synapse0x29283c0();
   input += synapse0x2928400();
   input += synapse0x2928440();
   input += synapse0x2928480();
   input += synapse0x29284c0();
   input += synapse0x2928500();
   input += synapse0x2927f90();
   input += synapse0x2927fd0();
   input += synapse0x2928650();
   input += synapse0x2928690();
   input += synapse0x29286d0();
   input += synapse0x2928710();
   input += synapse0x2928750();
   input += synapse0x2928790();
   return input;
}

double NNfunction_NN_2_8::neuron0x2927e00() {
   double input = input0x2927e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x29287d0() {
   double input = -2.78613;
   input += synapse0x2928b10();
   input += synapse0x2928b50();
   input += synapse0x2928b90();
   input += synapse0x2928bd0();
   input += synapse0x2928c10();
   input += synapse0x2928c50();
   input += synapse0x2928c90();
   input += synapse0x2928cd0();
   input += synapse0x2928d10();
   input += synapse0x2928d50();
   input += synapse0x2928d90();
   input += synapse0x2928dd0();
   input += synapse0x2928e10();
   input += synapse0x2928e50();
   input += synapse0x2928e90();
   input += synapse0x2928ed0();
   input += synapse0x2928960();
   input += synapse0x29289a0();
   input += synapse0x29194d0();
   input += synapse0x2919510();
   input += synapse0x2919550();
   input += synapse0x2919590();
   input += synapse0x29195d0();
   input += synapse0x2919610();
   return input;
}

double NNfunction_NN_2_8::neuron0x29287d0() {
   double input = input0x29287d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2919650() {
   double input = 0.0162283;
   input += synapse0x2919990();
   input += synapse0x29199d0();
   input += synapse0x2919a10();
   input += synapse0x2919a50();
   input += synapse0x2919a90();
   input += synapse0x2919ad0();
   input += synapse0x2919b10();
   input += synapse0x2919b50();
   input += synapse0x2919b90();
   input += synapse0x2919bd0();
   input += synapse0x2919c10();
   input += synapse0x2919c50();
   input += synapse0x2919c90();
   input += synapse0x2919cd0();
   input += synapse0x2919d10();
   input += synapse0x2919d50();
   input += synapse0x29197e0();
   input += synapse0x2919820();
   input += synapse0x2919ea0();
   input += synapse0x2919ee0();
   input += synapse0x2919f20();
   input += synapse0x2919f60();
   input += synapse0x2919fa0();
   input += synapse0x2919fe0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2919650() {
   double input = input0x2919650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291a020() {
   double input = -1.23398;
   input += synapse0x291a360();
   input += synapse0x291a3a0();
   input += synapse0x291a3e0();
   input += synapse0x291a420();
   input += synapse0x291a460();
   input += synapse0x291a4a0();
   input += synapse0x291a4e0();
   input += synapse0x291a520();
   input += synapse0x291a560();
   input += synapse0x291a5a0();
   input += synapse0x291a5e0();
   input += synapse0x291a620();
   input += synapse0x291a660();
   input += synapse0x291a6a0();
   input += synapse0x291a6e0();
   input += synapse0x291a720();
   input += synapse0x291a1b0();
   input += synapse0x291a1f0();
   input += synapse0x291a870();
   input += synapse0x291a8b0();
   input += synapse0x291a8f0();
   input += synapse0x291a930();
   input += synapse0x291a970();
   input += synapse0x291a9b0();
   return input;
}

double NNfunction_NN_2_8::neuron0x291a020() {
   double input = input0x291a020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x291a9f0() {
   double input = 0.850938;
   input += synapse0x291ad30();
   input += synapse0x291ad70();
   input += synapse0x291adb0();
   input += synapse0x291adf0();
   input += synapse0x291ae30();
   input += synapse0x291ae70();
   input += synapse0x291aeb0();
   input += synapse0x291aef0();
   input += synapse0x291af30();
   input += synapse0x291af70();
   input += synapse0x291afb0();
   input += synapse0x291aff0();
   input += synapse0x291b030();
   input += synapse0x291b070();
   input += synapse0x291b0b0();
   input += synapse0x291b0f0();
   input += synapse0x291ab80();
   input += synapse0x291abc0();
   input += synapse0x291b240();
   input += synapse0x291b280();
   input += synapse0x291b2c0();
   input += synapse0x291b300();
   input += synapse0x291b340();
   input += synapse0x291b380();
   return input;
}

double NNfunction_NN_2_8::neuron0x291a9f0() {
   double input = input0x291a9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x292d030() {
   double input = 0.134238;
   input += synapse0x292d250();
   input += synapse0x292d290();
   input += synapse0x292d2d0();
   input += synapse0x292d310();
   input += synapse0x292d350();
   input += synapse0x292d390();
   input += synapse0x292d3d0();
   input += synapse0x292d410();
   input += synapse0x292d450();
   input += synapse0x292d490();
   input += synapse0x292d4d0();
   input += synapse0x292d510();
   input += synapse0x292d550();
   input += synapse0x292d590();
   input += synapse0x292d5d0();
   input += synapse0x292d610();
   input += synapse0x291b3c0();
   input += synapse0x291b400();
   input += synapse0x292d760();
   input += synapse0x292d7a0();
   input += synapse0x292d7e0();
   input += synapse0x292d820();
   input += synapse0x292d860();
   input += synapse0x292d8a0();
   return input;
}

double NNfunction_NN_2_8::neuron0x292d030() {
   double input = input0x292d030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x292d8e0() {
   double input = -0.0958255;
   input += synapse0x292dc20();
   input += synapse0x292dc60();
   input += synapse0x292dca0();
   input += synapse0x292dce0();
   input += synapse0x292dd20();
   input += synapse0x292dd60();
   input += synapse0x292dda0();
   input += synapse0x292dde0();
   input += synapse0x292de20();
   input += synapse0x292de60();
   input += synapse0x292dea0();
   input += synapse0x292dee0();
   input += synapse0x292df20();
   input += synapse0x292df60();
   input += synapse0x292dfa0();
   input += synapse0x292dfe0();
   input += synapse0x292da70();
   input += synapse0x292dab0();
   input += synapse0x292e130();
   input += synapse0x292e170();
   input += synapse0x292e1b0();
   input += synapse0x292e1f0();
   input += synapse0x292e230();
   input += synapse0x292e270();
   return input;
}

double NNfunction_NN_2_8::neuron0x292d8e0() {
   double input = input0x292d8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x292e2b0() {
   double input = -0.770361;
   input += synapse0x292e5f0();
   input += synapse0x292e630();
   input += synapse0x292e670();
   input += synapse0x292e6b0();
   input += synapse0x292e6f0();
   input += synapse0x292e730();
   input += synapse0x292e770();
   input += synapse0x292e7b0();
   input += synapse0x292e7f0();
   input += synapse0x292e830();
   input += synapse0x292e870();
   input += synapse0x292e8b0();
   input += synapse0x292e8f0();
   input += synapse0x292e930();
   input += synapse0x292e970();
   input += synapse0x292e9b0();
   input += synapse0x292e440();
   input += synapse0x292e480();
   input += synapse0x292eb00();
   input += synapse0x292eb40();
   input += synapse0x292eb80();
   input += synapse0x292ebc0();
   input += synapse0x292ec00();
   input += synapse0x292ec40();
   return input;
}

double NNfunction_NN_2_8::neuron0x292e2b0() {
   double input = input0x292e2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x292ec80() {
   double input = 1.28576;
   input += synapse0x292efc0();
   input += synapse0x292f000();
   input += synapse0x292f040();
   input += synapse0x292f080();
   input += synapse0x292f0c0();
   input += synapse0x292f100();
   input += synapse0x292f140();
   input += synapse0x292f180();
   input += synapse0x292f1c0();
   input += synapse0x292f200();
   input += synapse0x292f240();
   input += synapse0x292f280();
   input += synapse0x292f2c0();
   input += synapse0x292f300();
   input += synapse0x292f340();
   input += synapse0x292f380();
   input += synapse0x292ee10();
   input += synapse0x292ee50();
   input += synapse0x292f4d0();
   input += synapse0x292f510();
   input += synapse0x292f550();
   input += synapse0x292f590();
   input += synapse0x292f5d0();
   input += synapse0x292f610();
   return input;
}

double NNfunction_NN_2_8::neuron0x292ec80() {
   double input = input0x292ec80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2935e80() {
   double input = -0.15152;
   input += synapse0x290aa60();
   input += synapse0x290aaa0();
   input += synapse0x290bfc0();
   input += synapse0x290c000();
   input += synapse0x290da90();
   input += synapse0x290dad0();
   input += synapse0x290e860();
   input += synapse0x290e8a0();
   input += synapse0x290f230();
   input += synapse0x290f270();
   input += synapse0x290fc00();
   input += synapse0x290fc40();
   input += synapse0x29106e0();
   input += synapse0x2910720();
   input += synapse0x29110b0();
   input += synapse0x29110f0();
   input += synapse0x290e190();
   input += synapse0x290e1d0();
   input += synapse0x2912c60();
   input += synapse0x2912ca0();
   input += synapse0x2913630();
   input += synapse0x2913670();
   input += synapse0x2914000();
   input += synapse0x2914040();
   input += synapse0x29149d0();
   input += synapse0x2914a10();
   input += synapse0x2907a60();
   input += synapse0x2907aa0();
   input += synapse0x2916ac0();
   input += synapse0x2916b00();
   input += synapse0x2917490();
   input += synapse0x29174d0();
   input += synapse0x2917e60();
   input += synapse0x2917ea0();
   input += synapse0x2918830();
   input += synapse0x2918870();
   input += synapse0x2919200();
   input += synapse0x2919240();
   input += synapse0x2911d50();
   input += synapse0x2911d90();
   input += synapse0x291b600();
   input += synapse0x291b640();
   input += synapse0x291bf90();
   input += synapse0x291bfd0();
   input += synapse0x291c960();
   input += synapse0x291c9a0();
   input += synapse0x291d330();
   input += synapse0x291d370();
   input += synapse0x291dd00();
   input += synapse0x291dd40();
   return input;
}

double NNfunction_NN_2_8::neuron0x2935e80() {
   double input = input0x2935e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2936220() {
   double input = 1.47745;
   input += synapse0x2920440();
   input += synapse0x2920480();
   input += synapse0x2915a00();
   input += synapse0x2915a40();
   input += synapse0x2923020();
   input += synapse0x2923060();
   input += synapse0x29239f0();
   input += synapse0x2923a30();
   input += synapse0x29243c0();
   input += synapse0x2924400();
   input += synapse0x2924d90();
   input += synapse0x2924dd0();
   input += synapse0x2925760();
   input += synapse0x29257a0();
   input += synapse0x2926130();
   input += synapse0x2926170();
   input += synapse0x2926b00();
   input += synapse0x2926b40();
   input += synapse0x29274d0();
   input += synapse0x2927510();
   input += synapse0x29280b0();
   input += synapse0x29280f0();
   input += synapse0x2928a80();
   input += synapse0x2928ac0();
   input += synapse0x2919900();
   input += synapse0x2919940();
   input += synapse0x291a2d0();
   input += synapse0x291a310();
   input += synapse0x291aca0();
   input += synapse0x291ace0();
   input += synapse0x292d1c0();
   input += synapse0x292d200();
   input += synapse0x292db90();
   input += synapse0x292dbd0();
   input += synapse0x292e560();
   input += synapse0x292e5a0();
   input += synapse0x292ef30();
   input += synapse0x292ef70();
   input += synapse0x2909ec0();
   input += synapse0x2909f00();
   input += synapse0x291e6d0();
   input += synapse0x291e710();
   input += synapse0x292f650();
   input += synapse0x292f690();
   input += synapse0x292f6d0();
   input += synapse0x292f710();
   input += synapse0x29365c0();
   input += synapse0x2936600();
   input += synapse0x2936640();
   input += synapse0x2936680();
   return input;
}

double NNfunction_NN_2_8::neuron0x2936220() {
   double input = input0x2936220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x29366c0() {
   double input = -1.03864;
   input += synapse0x2936a00();
   input += synapse0x2936a40();
   input += synapse0x2936a80();
   input += synapse0x2936ac0();
   input += synapse0x2936b00();
   input += synapse0x2936b40();
   input += synapse0x2936b80();
   input += synapse0x2936bc0();
   input += synapse0x2936c00();
   input += synapse0x2936c40();
   input += synapse0x2936c80();
   input += synapse0x2936cc0();
   input += synapse0x2936d00();
   input += synapse0x2936d40();
   input += synapse0x2936d80();
   input += synapse0x2936dc0();
   input += synapse0x2936850();
   input += synapse0x2936890();
   input += synapse0x2936f10();
   input += synapse0x2936f50();
   input += synapse0x2936f90();
   input += synapse0x2936fd0();
   input += synapse0x2937010();
   input += synapse0x2937050();
   input += synapse0x2937090();
   input += synapse0x29370d0();
   input += synapse0x2937110();
   input += synapse0x2937150();
   input += synapse0x2937190();
   input += synapse0x29371d0();
   input += synapse0x2937210();
   input += synapse0x2937250();
   input += synapse0x2936e00();
   input += synapse0x2936e40();
   input += synapse0x2936e80();
   input += synapse0x2936ec0();
   input += synapse0x29374a0();
   input += synapse0x29374e0();
   input += synapse0x2937520();
   input += synapse0x2937560();
   input += synapse0x29375a0();
   input += synapse0x29375e0();
   input += synapse0x2937620();
   input += synapse0x2937660();
   input += synapse0x29376a0();
   input += synapse0x29376e0();
   input += synapse0x2937720();
   input += synapse0x2937760();
   input += synapse0x29377a0();
   input += synapse0x29377e0();
   return input;
}

double NNfunction_NN_2_8::neuron0x29366c0() {
   double input = input0x29366c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2937820() {
   double input = -0.181659;
   input += synapse0x2937b60();
   input += synapse0x2937ba0();
   input += synapse0x2937be0();
   input += synapse0x2937c20();
   input += synapse0x2937c60();
   input += synapse0x2937ca0();
   input += synapse0x2937ce0();
   input += synapse0x2937d20();
   input += synapse0x2937d60();
   input += synapse0x2937da0();
   input += synapse0x2937de0();
   input += synapse0x2937e20();
   input += synapse0x2937e60();
   input += synapse0x2937ea0();
   input += synapse0x2937ee0();
   input += synapse0x2937f20();
   input += synapse0x29379b0();
   input += synapse0x29379f0();
   input += synapse0x2938070();
   input += synapse0x29380b0();
   input += synapse0x29380f0();
   input += synapse0x2938130();
   input += synapse0x2938170();
   input += synapse0x29381b0();
   input += synapse0x29381f0();
   input += synapse0x2938230();
   input += synapse0x2938270();
   input += synapse0x29382b0();
   input += synapse0x29382f0();
   input += synapse0x2938330();
   input += synapse0x2938370();
   input += synapse0x29383b0();
   input += synapse0x2937f60();
   input += synapse0x2937fa0();
   input += synapse0x2937fe0();
   input += synapse0x2938020();
   input += synapse0x2938600();
   input += synapse0x2938640();
   input += synapse0x2938680();
   input += synapse0x29386c0();
   input += synapse0x2938700();
   input += synapse0x2938740();
   input += synapse0x2938780();
   input += synapse0x29387c0();
   input += synapse0x2938800();
   input += synapse0x2938840();
   input += synapse0x2938880();
   input += synapse0x29388c0();
   input += synapse0x2938900();
   input += synapse0x2938940();
   return input;
}

double NNfunction_NN_2_8::neuron0x2937820() {
   double input = input0x2937820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2938980() {
   double input = 0.483682;
   input += synapse0x2938cc0();
   input += synapse0x2938d00();
   input += synapse0x2938d40();
   input += synapse0x2938d80();
   input += synapse0x2938dc0();
   input += synapse0x2938e00();
   input += synapse0x2938e40();
   input += synapse0x2938e80();
   input += synapse0x2938ec0();
   input += synapse0x2938f00();
   input += synapse0x2938f40();
   input += synapse0x2938f80();
   input += synapse0x2938fc0();
   input += synapse0x2939000();
   input += synapse0x2939040();
   input += synapse0x2939080();
   input += synapse0x2938b10();
   input += synapse0x2938b50();
   input += synapse0x29391d0();
   input += synapse0x2939210();
   input += synapse0x2939250();
   input += synapse0x2939290();
   input += synapse0x29392d0();
   input += synapse0x2939310();
   input += synapse0x2939350();
   input += synapse0x2939390();
   input += synapse0x29393d0();
   input += synapse0x2939410();
   input += synapse0x2939450();
   input += synapse0x2939490();
   input += synapse0x29394d0();
   input += synapse0x2939510();
   input += synapse0x29390c0();
   input += synapse0x2939100();
   input += synapse0x2939140();
   input += synapse0x2939180();
   input += synapse0x2939760();
   input += synapse0x29397a0();
   input += synapse0x29397e0();
   input += synapse0x2939820();
   input += synapse0x2939860();
   input += synapse0x29398a0();
   input += synapse0x29398e0();
   input += synapse0x2939920();
   input += synapse0x2939960();
   input += synapse0x29399a0();
   input += synapse0x29399e0();
   input += synapse0x2939a20();
   input += synapse0x2939a60();
   input += synapse0x2939aa0();
   return input;
}

double NNfunction_NN_2_8::neuron0x2938980() {
   double input = input0x2938980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_8::input0x2939ae0() {
   double input = -2.97714;
   input += synapse0x2939d00();
   input += synapse0x2939d40();
   input += synapse0x2939d80();
   input += synapse0x2939dc0();
   input += synapse0x2939e00();
   return input;
}

double NNfunction_NN_2_8::neuron0x2939ae0() {
   double input = input0x2939ae0();
   return (input * 1)+0;
}

double NNfunction_NN_2_8::synapse0x2909f50() {
   return (neuron0x2904b50()*0.0808452);
}

double NNfunction_NN_2_8::synapse0x2909f90() {
   return (neuron0x2904e00()*0.110726);
}

double NNfunction_NN_2_8::synapse0x2909fd0() {
   return (neuron0x2905140()*-0.657797);
}

double NNfunction_NN_2_8::synapse0x290a010() {
   return (neuron0x2905480()*-0.0297271);
}

double NNfunction_NN_2_8::synapse0x290a050() {
   return (neuron0x29057c0()*0.0558499);
}

double NNfunction_NN_2_8::synapse0x290a090() {
   return (neuron0x2905b00()*0.0216925);
}

double NNfunction_NN_2_8::synapse0x290a0d0() {
   return (neuron0x2905e40()*0.0111823);
}

double NNfunction_NN_2_8::synapse0x290a110() {
   return (neuron0x2906180()*-0.0023044);
}

double NNfunction_NN_2_8::synapse0x290a150() {
   return (neuron0x29064c0()*0.0209175);
}

double NNfunction_NN_2_8::synapse0x290a190() {
   return (neuron0x2906800()*-0.0741927);
}

double NNfunction_NN_2_8::synapse0x290a1d0() {
   return (neuron0x2906b40()*-0.0473452);
}

double NNfunction_NN_2_8::synapse0x290a210() {
   return (neuron0x2906e80()*0.700243);
}

double NNfunction_NN_2_8::synapse0x290a250() {
   return (neuron0x29071c0()*0.0553435);
}

double NNfunction_NN_2_8::synapse0x290a290() {
   return (neuron0x2907500()*-0.00494899);
}

double NNfunction_NN_2_8::synapse0x290a2d0() {
   return (neuron0x2907840()*0.0894955);
}

double NNfunction_NN_2_8::synapse0x290a310() {
   return (neuron0x2907b80()*0.0243364);
}

double NNfunction_NN_2_8::synapse0x2909da0() {
   return (neuron0x2907ec0()*-0.0105409);
}

double NNfunction_NN_2_8::synapse0x2909de0() {
   return (neuron0x2908420()*0.0176587);
}

double NNfunction_NN_2_8::synapse0x26b71d0() {
   return (neuron0x2908760()*-0.00899574);
}

double NNfunction_NN_2_8::synapse0x26b7210() {
   return (neuron0x2908aa0()*-0.0236819);
}

double NNfunction_NN_2_8::synapse0x290a350() {
   return (neuron0x2908de0()*-0.00617325);
}

double NNfunction_NN_2_8::synapse0x290a390() {
   return (neuron0x2909120()*-0.0263804);
}

double NNfunction_NN_2_8::synapse0x290a3d0() {
   return (neuron0x2909460()*0.0111771);
}

double NNfunction_NN_2_8::synapse0x290a410() {
   return (neuron0x29097a0()*4.05501);
}

double NNfunction_NN_2_8::synapse0x290a790() {
   return (neuron0x2904b50()*0.00102828);
}

double NNfunction_NN_2_8::synapse0x290a7d0() {
   return (neuron0x2904e00()*-0.00551927);
}

double NNfunction_NN_2_8::synapse0x290a810() {
   return (neuron0x2905140()*0.114672);
}

double NNfunction_NN_2_8::synapse0x290a850() {
   return (neuron0x2905480()*3.17321);
}

double NNfunction_NN_2_8::synapse0x290a890() {
   return (neuron0x29057c0()*0.0167308);
}

double NNfunction_NN_2_8::synapse0x290a8d0() {
   return (neuron0x2905b00()*9.39767e-05);
}

double NNfunction_NN_2_8::synapse0x290a910() {
   return (neuron0x2905e40()*0.00397218);
}

double NNfunction_NN_2_8::synapse0x290a950() {
   return (neuron0x2906180()*0.012016);
}

double NNfunction_NN_2_8::synapse0x290a990() {
   return (neuron0x29064c0()*0.0551192);
}

double NNfunction_NN_2_8::synapse0x26b7020() {
   return (neuron0x2906800()*0.0219414);
}

double NNfunction_NN_2_8::synapse0x26b7060() {
   return (neuron0x2906b40()*-0.0176289);
}

double NNfunction_NN_2_8::synapse0x26b70a0() {
   return (neuron0x2906e80()*-0.438238);
}

double NNfunction_NN_2_8::synapse0x26b70e0() {
   return (neuron0x29071c0()*-0.0502581);
}

double NNfunction_NN_2_8::synapse0x290abe0() {
   return (neuron0x2907500()*-0.00316289);
}

double NNfunction_NN_2_8::synapse0x290ac20() {
   return (neuron0x2907840()*-0.0447261);
}

double NNfunction_NN_2_8::synapse0x290ac60() {
   return (neuron0x2907b80()*0.0435046);
}

double NNfunction_NN_2_8::synapse0x290a5e0() {
   return (neuron0x2907ec0()*-0.0590124);
}

double NNfunction_NN_2_8::synapse0x290a620() {
   return (neuron0x2908420()*-0.0220691);
}

double NNfunction_NN_2_8::synapse0x290adb0() {
   return (neuron0x2908760()*-0.0797967);
}

double NNfunction_NN_2_8::synapse0x290adf0() {
   return (neuron0x2908aa0()*0.00867578);
}

double NNfunction_NN_2_8::synapse0x290ae30() {
   return (neuron0x2908de0()*0.0413483);
}

double NNfunction_NN_2_8::synapse0x290ae70() {
   return (neuron0x2909120()*-0.0453219);
}

double NNfunction_NN_2_8::synapse0x290aeb0() {
   return (neuron0x2909460()*0.0393456);
}

double NNfunction_NN_2_8::synapse0x290aef0() {
   return (neuron0x29097a0()*-0.0204351);
}

double NNfunction_NN_2_8::synapse0x290b270() {
   return (neuron0x2904b50()*-0.0728262);
}

double NNfunction_NN_2_8::synapse0x290b2b0() {
   return (neuron0x2904e00()*-0.00056123);
}

double NNfunction_NN_2_8::synapse0x290b2f0() {
   return (neuron0x2905140()*0.653487);
}

double NNfunction_NN_2_8::synapse0x290b330() {
   return (neuron0x2905480()*0.00171623);
}

double NNfunction_NN_2_8::synapse0x290b370() {
   return (neuron0x29057c0()*0.0124818);
}

double NNfunction_NN_2_8::synapse0x290b3b0() {
   return (neuron0x2905b00()*0.0122503);
}

double NNfunction_NN_2_8::synapse0x290b3f0() {
   return (neuron0x2905e40()*0.00243158);
}

double NNfunction_NN_2_8::synapse0x290b430() {
   return (neuron0x2906180()*0.00969909);
}

double NNfunction_NN_2_8::synapse0x290b470() {
   return (neuron0x29064c0()*0.0135448);
}

double NNfunction_NN_2_8::synapse0x290b4b0() {
   return (neuron0x2906800()*-0.00847989);
}

double NNfunction_NN_2_8::synapse0x290b4f0() {
   return (neuron0x2906b40()*-0.00323349);
}

double NNfunction_NN_2_8::synapse0x290b530() {
   return (neuron0x2906e80()*0.266083);
}

double NNfunction_NN_2_8::synapse0x290b570() {
   return (neuron0x29071c0()*-0.0135985);
}

double NNfunction_NN_2_8::synapse0x290b5b0() {
   return (neuron0x2907500()*0.0241715);
}

double NNfunction_NN_2_8::synapse0x290b5f0() {
   return (neuron0x2907840()*0.00401907);
}

double NNfunction_NN_2_8::synapse0x290b630() {
   return (neuron0x2907b80()*-0.0146141);
}

double NNfunction_NN_2_8::synapse0x290b0c0() {
   return (neuron0x2907ec0()*0.00455146);
}

double NNfunction_NN_2_8::synapse0x290b100() {
   return (neuron0x2908420()*-0.00579068);
}

double NNfunction_NN_2_8::synapse0x26c5090() {
   return (neuron0x2908760()*-0.024749);
}

double NNfunction_NN_2_8::synapse0x26c50d0() {
   return (neuron0x2908aa0()*-0.0122236);
}

double NNfunction_NN_2_8::synapse0x290d560() {
   return (neuron0x2908de0()*-0.00922803);
}

double NNfunction_NN_2_8::synapse0x290d5a0() {
   return (neuron0x2909120()*0.00429236);
}

double NNfunction_NN_2_8::synapse0x2904890() {
   return (neuron0x2909460()*-0.00686589);
}

double NNfunction_NN_2_8::synapse0x29048d0() {
   return (neuron0x29097a0()*-0.0394042);
}

double NNfunction_NN_2_8::synapse0x26c59a0() {
   return (neuron0x2904b50()*-0.152292);
}

double NNfunction_NN_2_8::synapse0x290aaf0() {
   return (neuron0x2904e00()*3.54062);
}

double NNfunction_NN_2_8::synapse0x290ab30() {
   return (neuron0x2905140()*0.65859);
}

double NNfunction_NN_2_8::synapse0x290ab70() {
   return (neuron0x2905480()*-0.0963752);
}

double NNfunction_NN_2_8::synapse0x290b780() {
   return (neuron0x29057c0()*-0.0248598);
}

double NNfunction_NN_2_8::synapse0x290b7c0() {
   return (neuron0x2905b00()*0.00661653);
}

double NNfunction_NN_2_8::synapse0x290b800() {
   return (neuron0x2905e40()*-0.0389684);
}

double NNfunction_NN_2_8::synapse0x290b840() {
   return (neuron0x2906180()*-3.48534e-05);
}

double NNfunction_NN_2_8::synapse0x290b880() {
   return (neuron0x29064c0()*0.091229);
}

double NNfunction_NN_2_8::synapse0x290b8c0() {
   return (neuron0x2906800()*-0.0355517);
}

double NNfunction_NN_2_8::synapse0x290b900() {
   return (neuron0x2906b40()*0.116294);
}

double NNfunction_NN_2_8::synapse0x290b940() {
   return (neuron0x2906e80()*-4.00637);
}

double NNfunction_NN_2_8::synapse0x290b980() {
   return (neuron0x29071c0()*-0.115625);
}

double NNfunction_NN_2_8::synapse0x290b9c0() {
   return (neuron0x2907500()*0.0513211);
}

double NNfunction_NN_2_8::synapse0x290ba00() {
   return (neuron0x2907840()*-0.0233613);
}

double NNfunction_NN_2_8::synapse0x290ba40() {
   return (neuron0x2907b80()*0.013886);
}

double NNfunction_NN_2_8::synapse0x2904910() {
   return (neuron0x2907ec0()*0.0627321);
}

double NNfunction_NN_2_8::synapse0x2904950() {
   return (neuron0x2908420()*-0.0138888);
}

double NNfunction_NN_2_8::synapse0x290bb90() {
   return (neuron0x2908760()*-0.109151);
}

double NNfunction_NN_2_8::synapse0x290bbd0() {
   return (neuron0x2908aa0()*0.000528888);
}

double NNfunction_NN_2_8::synapse0x290bc10() {
   return (neuron0x2908de0()*-0.0624514);
}

double NNfunction_NN_2_8::synapse0x290bc50() {
   return (neuron0x2909120()*-0.0304596);
}

double NNfunction_NN_2_8::synapse0x290bc90() {
   return (neuron0x2909460()*-0.0148874);
}

double NNfunction_NN_2_8::synapse0x290bcd0() {
   return (neuron0x29097a0()*-0.38755);
}

double NNfunction_NN_2_8::synapse0x290c050() {
   return (neuron0x2904b50()*0.0533702);
}

double NNfunction_NN_2_8::synapse0x290c090() {
   return (neuron0x2904e00()*-0.0137369);
}

double NNfunction_NN_2_8::synapse0x290c0d0() {
   return (neuron0x2905140()*-1.55559);
}

double NNfunction_NN_2_8::synapse0x290c110() {
   return (neuron0x2905480()*0.0605094);
}

double NNfunction_NN_2_8::synapse0x290c150() {
   return (neuron0x29057c0()*-0.0229321);
}

double NNfunction_NN_2_8::synapse0x290c190() {
   return (neuron0x2905b00()*-0.0191511);
}

double NNfunction_NN_2_8::synapse0x290c1d0() {
   return (neuron0x2905e40()*-0.0315533);
}

double NNfunction_NN_2_8::synapse0x290c210() {
   return (neuron0x2906180()*0.0145145);
}

double NNfunction_NN_2_8::synapse0x290c250() {
   return (neuron0x29064c0()*0.00315709);
}

double NNfunction_NN_2_8::synapse0x290c290() {
   return (neuron0x2906800()*0.0134415);
}

double NNfunction_NN_2_8::synapse0x290c2d0() {
   return (neuron0x2906b40()*0.0173129);
}

double NNfunction_NN_2_8::synapse0x290c310() {
   return (neuron0x2906e80()*1.51529);
}

double NNfunction_NN_2_8::synapse0x290c350() {
   return (neuron0x29071c0()*-0.0187665);
}

double NNfunction_NN_2_8::synapse0x290c390() {
   return (neuron0x2907500()*-0.0340459);
}

double NNfunction_NN_2_8::synapse0x290c3d0() {
   return (neuron0x2907840()*-0.0368229);
}

double NNfunction_NN_2_8::synapse0x290c410() {
   return (neuron0x2907b80()*-0.0194486);
}

double NNfunction_NN_2_8::synapse0x290c560() {
   return (neuron0x2907ec0()*0.00454263);
}

double NNfunction_NN_2_8::synapse0x290bea0() {
   return (neuron0x2908420()*0.00278418);
}

double NNfunction_NN_2_8::synapse0x290bee0() {
   return (neuron0x2908760()*0.0232748);
}

double NNfunction_NN_2_8::synapse0x290d6a0() {
   return (neuron0x2908aa0()*0.0144819);
}

double NNfunction_NN_2_8::synapse0x290d6e0() {
   return (neuron0x2908de0()*-0.032781);
}

double NNfunction_NN_2_8::synapse0x290d720() {
   return (neuron0x2909120()*-0.00247016);
}

double NNfunction_NN_2_8::synapse0x290d760() {
   return (neuron0x2909460()*0.00772626);
}

double NNfunction_NN_2_8::synapse0x290d7a0() {
   return (neuron0x29097a0()*-0.494514);
}

double NNfunction_NN_2_8::synapse0x290db20() {
   return (neuron0x2904b50()*-0.0213231);
}

double NNfunction_NN_2_8::synapse0x290db60() {
   return (neuron0x2904e00()*-0.0346388);
}

double NNfunction_NN_2_8::synapse0x290dba0() {
   return (neuron0x2905140()*-0.0121589);
}

double NNfunction_NN_2_8::synapse0x290dbe0() {
   return (neuron0x2905480()*-3.93412);
}

double NNfunction_NN_2_8::synapse0x290dc20() {
   return (neuron0x29057c0()*-0.0399098);
}

double NNfunction_NN_2_8::synapse0x290dc60() {
   return (neuron0x2905b00()*-0.00770682);
}

double NNfunction_NN_2_8::synapse0x290dca0() {
   return (neuron0x2905e40()*-0.0267567);
}

double NNfunction_NN_2_8::synapse0x290dce0() {
   return (neuron0x2906180()*0.0258779);
}

double NNfunction_NN_2_8::synapse0x290dd20() {
   return (neuron0x29064c0()*-0.0766306);
}

double NNfunction_NN_2_8::synapse0x26c5400() {
   return (neuron0x2906800()*-0.0640144);
}

double NNfunction_NN_2_8::synapse0x26c5440() {
   return (neuron0x2906b40()*-0.0253246);
}

double NNfunction_NN_2_8::synapse0x26c5480() {
   return (neuron0x2906e80()*-0.474616);
}

double NNfunction_NN_2_8::synapse0x26c54c0() {
   return (neuron0x29071c0()*0.000358698);
}

double NNfunction_NN_2_8::synapse0x26c5500() {
   return (neuron0x2907500()*-0.141164);
}

double NNfunction_NN_2_8::synapse0x26c5540() {
   return (neuron0x2907840()*0.0670402);
}

double NNfunction_NN_2_8::synapse0x26c5580() {
   return (neuron0x2907b80()*-0.0054161);
}

double NNfunction_NN_2_8::synapse0x290d970() {
   return (neuron0x2907ec0()*-0.00334786);
}

double NNfunction_NN_2_8::synapse0x290d9b0() {
   return (neuron0x2908420()*0.0480721);
}

double NNfunction_NN_2_8::synapse0x26c56d0() {
   return (neuron0x2908760()*0.0645431);
}

double NNfunction_NN_2_8::synapse0x26c5710() {
   return (neuron0x2908aa0()*-0.0361334);
}

double NNfunction_NN_2_8::synapse0x26c5750() {
   return (neuron0x2908de0()*-0.0171534);
}

double NNfunction_NN_2_8::synapse0x26c5790() {
   return (neuron0x2909120()*0.0203267);
}

double NNfunction_NN_2_8::synapse0x26c57d0() {
   return (neuron0x2909460()*-0.0169057);
}

double NNfunction_NN_2_8::synapse0x290e570() {
   return (neuron0x29097a0()*-0.0065867);
}

double NNfunction_NN_2_8::synapse0x290e8f0() {
   return (neuron0x2904b50()*0.0563469);
}

double NNfunction_NN_2_8::synapse0x290e930() {
   return (neuron0x2904e00()*-0.0239672);
}

double NNfunction_NN_2_8::synapse0x290e970() {
   return (neuron0x2905140()*0.778984);
}

double NNfunction_NN_2_8::synapse0x290e9b0() {
   return (neuron0x2905480()*-0.00596012);
}

double NNfunction_NN_2_8::synapse0x290e9f0() {
   return (neuron0x29057c0()*0.00856736);
}

double NNfunction_NN_2_8::synapse0x290ea30() {
   return (neuron0x2905b00()*-0.013778);
}

double NNfunction_NN_2_8::synapse0x290ea70() {
   return (neuron0x2905e40()*0.0128322);
}

double NNfunction_NN_2_8::synapse0x290eab0() {
   return (neuron0x2906180()*-0.016226);
}

double NNfunction_NN_2_8::synapse0x290eaf0() {
   return (neuron0x29064c0()*-0.0079226);
}

double NNfunction_NN_2_8::synapse0x290eb30() {
   return (neuron0x2906800()*0.0111159);
}

double NNfunction_NN_2_8::synapse0x290eb70() {
   return (neuron0x2906b40()*0.0206902);
}

double NNfunction_NN_2_8::synapse0x290ebb0() {
   return (neuron0x2906e80()*0.234642);
}

double NNfunction_NN_2_8::synapse0x290ebf0() {
   return (neuron0x29071c0()*-0.00355033);
}

double NNfunction_NN_2_8::synapse0x290ec30() {
   return (neuron0x2907500()*0.0134025);
}

double NNfunction_NN_2_8::synapse0x290ec70() {
   return (neuron0x2907840()*-0.00372324);
}

double NNfunction_NN_2_8::synapse0x290ecb0() {
   return (neuron0x2907b80()*-0.00700734);
}

double NNfunction_NN_2_8::synapse0x290e740() {
   return (neuron0x2907ec0()*0.0313223);
}

double NNfunction_NN_2_8::synapse0x290e780() {
   return (neuron0x2908420()*-0.00356812);
}

double NNfunction_NN_2_8::synapse0x290ee00() {
   return (neuron0x2908760()*-0.00725084);
}

double NNfunction_NN_2_8::synapse0x290ee40() {
   return (neuron0x2908aa0()*0.00187493);
}

double NNfunction_NN_2_8::synapse0x290ee80() {
   return (neuron0x2908de0()*0.015596);
}

double NNfunction_NN_2_8::synapse0x290eec0() {
   return (neuron0x2909120()*0.01776);
}

double NNfunction_NN_2_8::synapse0x290ef00() {
   return (neuron0x2909460()*-0.0303757);
}

double NNfunction_NN_2_8::synapse0x290ef40() {
   return (neuron0x29097a0()*2.35482);
}

double NNfunction_NN_2_8::synapse0x290f2c0() {
   return (neuron0x2904b50()*0.0677558);
}

double NNfunction_NN_2_8::synapse0x290f300() {
   return (neuron0x2904e00()*-0.0226744);
}

double NNfunction_NN_2_8::synapse0x290f340() {
   return (neuron0x2905140()*-1.65395);
}

double NNfunction_NN_2_8::synapse0x290f380() {
   return (neuron0x2905480()*0.0329835);
}

double NNfunction_NN_2_8::synapse0x290f3c0() {
   return (neuron0x29057c0()*0.0325407);
}

double NNfunction_NN_2_8::synapse0x290f400() {
   return (neuron0x2905b00()*-0.0157258);
}

double NNfunction_NN_2_8::synapse0x290f440() {
   return (neuron0x2905e40()*-0.0350668);
}

double NNfunction_NN_2_8::synapse0x290f480() {
   return (neuron0x2906180()*0.0259016);
}

double NNfunction_NN_2_8::synapse0x290f4c0() {
   return (neuron0x29064c0()*0.00598216);
}

double NNfunction_NN_2_8::synapse0x290f500() {
   return (neuron0x2906800()*0.00535559);
}

double NNfunction_NN_2_8::synapse0x290f540() {
   return (neuron0x2906b40()*-0.0138742);
}

double NNfunction_NN_2_8::synapse0x290f580() {
   return (neuron0x2906e80()*0.165344);
}

double NNfunction_NN_2_8::synapse0x290f5c0() {
   return (neuron0x29071c0()*-0.0219625);
}

double NNfunction_NN_2_8::synapse0x290f600() {
   return (neuron0x2907500()*-0.0759208);
}

double NNfunction_NN_2_8::synapse0x290f640() {
   return (neuron0x2907840()*0.0107065);
}

double NNfunction_NN_2_8::synapse0x290f680() {
   return (neuron0x2907b80()*0.00862771);
}

double NNfunction_NN_2_8::synapse0x290f110() {
   return (neuron0x2907ec0()*0.00657459);
}

double NNfunction_NN_2_8::synapse0x290f150() {
   return (neuron0x2908420()*-0.00446252);
}

double NNfunction_NN_2_8::synapse0x290f7d0() {
   return (neuron0x2908760()*0.0407718);
}

double NNfunction_NN_2_8::synapse0x290f810() {
   return (neuron0x2908aa0()*0.00542078);
}

double NNfunction_NN_2_8::synapse0x290f850() {
   return (neuron0x2908de0()*-0.0112773);
}

double NNfunction_NN_2_8::synapse0x290f890() {
   return (neuron0x2909120()*0.0259779);
}

double NNfunction_NN_2_8::synapse0x290f8d0() {
   return (neuron0x2909460()*-0.0353679);
}

double NNfunction_NN_2_8::synapse0x290f910() {
   return (neuron0x29097a0()*3.56609);
}

double NNfunction_NN_2_8::synapse0x2908310() {
   return (neuron0x2904b50()*-0.0439033);
}

double NNfunction_NN_2_8::synapse0x2908350() {
   return (neuron0x2904e00()*-0.484925);
}

double NNfunction_NN_2_8::synapse0x2908390() {
   return (neuron0x2905140()*1.9319);
}

double NNfunction_NN_2_8::synapse0x29083d0() {
   return (neuron0x2905480()*-0.0915298);
}

double NNfunction_NN_2_8::synapse0x290fea0() {
   return (neuron0x29057c0()*-0.103904);
}

double NNfunction_NN_2_8::synapse0x290fee0() {
   return (neuron0x2905b00()*0.166499);
}

double NNfunction_NN_2_8::synapse0x290ff20() {
   return (neuron0x2905e40()*-0.0478765);
}

double NNfunction_NN_2_8::synapse0x290ff60() {
   return (neuron0x2906180()*-0.172089);
}

double NNfunction_NN_2_8::synapse0x290ffa0() {
   return (neuron0x29064c0()*0.46753);
}

double NNfunction_NN_2_8::synapse0x290ffe0() {
   return (neuron0x2906800()*-0.0966708);
}

double NNfunction_NN_2_8::synapse0x2910020() {
   return (neuron0x2906b40()*0.557856);
}

double NNfunction_NN_2_8::synapse0x2910060() {
   return (neuron0x2906e80()*-0.246485);
}

double NNfunction_NN_2_8::synapse0x29100a0() {
   return (neuron0x29071c0()*-0.0031458);
}

double NNfunction_NN_2_8::synapse0x29100e0() {
   return (neuron0x2907500()*-0.00028859);
}

double NNfunction_NN_2_8::synapse0x2910120() {
   return (neuron0x2907840()*-0.0368172);
}

double NNfunction_NN_2_8::synapse0x2910160() {
   return (neuron0x2907b80()*-0.0218974);
}

double NNfunction_NN_2_8::synapse0x290fae0() {
   return (neuron0x2907ec0()*0.0261851);
}

double NNfunction_NN_2_8::synapse0x290fb20() {
   return (neuron0x2908420()*0.00251022);
}

double NNfunction_NN_2_8::synapse0x29102b0() {
   return (neuron0x2908760()*-0.00867774);
}

double NNfunction_NN_2_8::synapse0x29102f0() {
   return (neuron0x2908aa0()*-0.194554);
}

double NNfunction_NN_2_8::synapse0x2910330() {
   return (neuron0x2908de0()*-0.15153);
}

double NNfunction_NN_2_8::synapse0x2910370() {
   return (neuron0x2909120()*-0.0792184);
}

double NNfunction_NN_2_8::synapse0x29103b0() {
   return (neuron0x2909460()*0.154376);
}

double NNfunction_NN_2_8::synapse0x29103f0() {
   return (neuron0x29097a0()*-0.491369);
}

double NNfunction_NN_2_8::synapse0x2910770() {
   return (neuron0x2904b50()*0.052202);
}

double NNfunction_NN_2_8::synapse0x29107b0() {
   return (neuron0x2904e00()*-0.0199912);
}

double NNfunction_NN_2_8::synapse0x29107f0() {
   return (neuron0x2905140()*2.78251);
}

double NNfunction_NN_2_8::synapse0x2910830() {
   return (neuron0x2905480()*-0.041149);
}

double NNfunction_NN_2_8::synapse0x2910870() {
   return (neuron0x29057c0()*0.0209987);
}

double NNfunction_NN_2_8::synapse0x29108b0() {
   return (neuron0x2905b00()*-0.00345662);
}

double NNfunction_NN_2_8::synapse0x29108f0() {
   return (neuron0x2905e40()*-5.84079e-05);
}

double NNfunction_NN_2_8::synapse0x2910930() {
   return (neuron0x2906180()*0.010497);
}

double NNfunction_NN_2_8::synapse0x2910970() {
   return (neuron0x29064c0()*-0.0273233);
}

double NNfunction_NN_2_8::synapse0x29109b0() {
   return (neuron0x2906800()*0.0195258);
}

double NNfunction_NN_2_8::synapse0x29109f0() {
   return (neuron0x2906b40()*0.0111044);
}

double NNfunction_NN_2_8::synapse0x2910a30() {
   return (neuron0x2906e80()*-0.109595);
}

double NNfunction_NN_2_8::synapse0x2910a70() {
   return (neuron0x29071c0()*0.0154531);
}

double NNfunction_NN_2_8::synapse0x2910ab0() {
   return (neuron0x2907500()*0.010366);
}

double NNfunction_NN_2_8::synapse0x2910af0() {
   return (neuron0x2907840()*0.025873);
}

double NNfunction_NN_2_8::synapse0x2910b30() {
   return (neuron0x2907b80()*-0.0212597);
}

double NNfunction_NN_2_8::synapse0x29105c0() {
   return (neuron0x2907ec0()*-0.00711601);
}

double NNfunction_NN_2_8::synapse0x2910600() {
   return (neuron0x2908420()*0.004881);
}

double NNfunction_NN_2_8::synapse0x2910c80() {
   return (neuron0x2908760()*0.00773351);
}

double NNfunction_NN_2_8::synapse0x2910cc0() {
   return (neuron0x2908aa0()*5.02407e-05);
}

double NNfunction_NN_2_8::synapse0x2910d00() {
   return (neuron0x2908de0()*-0.000437139);
}

double NNfunction_NN_2_8::synapse0x2910d40() {
   return (neuron0x2909120()*0.00429628);
}

double NNfunction_NN_2_8::synapse0x2910d80() {
   return (neuron0x2909460()*0.00136172);
}

double NNfunction_NN_2_8::synapse0x2910dc0() {
   return (neuron0x29097a0()*-3.91997);
}

double NNfunction_NN_2_8::synapse0x2911140() {
   return (neuron0x2904b50()*0.0310885);
}

double NNfunction_NN_2_8::synapse0x2911180() {
   return (neuron0x2904e00()*0.00281149);
}

double NNfunction_NN_2_8::synapse0x29111c0() {
   return (neuron0x2905140()*0.304471);
}

double NNfunction_NN_2_8::synapse0x2911200() {
   return (neuron0x2905480()*1.42755);
}

double NNfunction_NN_2_8::synapse0x2911240() {
   return (neuron0x29057c0()*0.0465564);
}

double NNfunction_NN_2_8::synapse0x2911280() {
   return (neuron0x2905b00()*-0.0342938);
}

double NNfunction_NN_2_8::synapse0x29112c0() {
   return (neuron0x2905e40()*0.0173547);
}

double NNfunction_NN_2_8::synapse0x2911300() {
   return (neuron0x2906180()*0.00169171);
}

double NNfunction_NN_2_8::synapse0x2911340() {
   return (neuron0x29064c0()*0.0979624);
}

double NNfunction_NN_2_8::synapse0x2911380() {
   return (neuron0x2906800()*0.0626511);
}

double NNfunction_NN_2_8::synapse0x29113c0() {
   return (neuron0x2906b40()*0.00761911);
}

double NNfunction_NN_2_8::synapse0x2911400() {
   return (neuron0x2906e80()*-0.946969);
}

double NNfunction_NN_2_8::synapse0x2911440() {
   return (neuron0x29071c0()*-0.00379683);
}

double NNfunction_NN_2_8::synapse0x2911480() {
   return (neuron0x2907500()*0.0164785);
}

double NNfunction_NN_2_8::synapse0x29114c0() {
   return (neuron0x2907840()*0.00948351);
}

double NNfunction_NN_2_8::synapse0x2911500() {
   return (neuron0x2907b80()*0.00898058);
}

double NNfunction_NN_2_8::synapse0x2910f90() {
   return (neuron0x2907ec0()*-0.0485488);
}

double NNfunction_NN_2_8::synapse0x2910fd0() {
   return (neuron0x2908420()*-0.0623314);
}

double NNfunction_NN_2_8::synapse0x290dd60() {
   return (neuron0x2908760()*-0.0924899);
}

double NNfunction_NN_2_8::synapse0x290dda0() {
   return (neuron0x2908aa0()*0.0293439);
}

double NNfunction_NN_2_8::synapse0x290dde0() {
   return (neuron0x2908de0()*-0.00270086);
}

double NNfunction_NN_2_8::synapse0x290de20() {
   return (neuron0x2909120()*-0.0401766);
}

double NNfunction_NN_2_8::synapse0x290de60() {
   return (neuron0x2909460()*-0.0202719);
}

double NNfunction_NN_2_8::synapse0x290dea0() {
   return (neuron0x29097a0()*0.204637);
}

double NNfunction_NN_2_8::synapse0x290e220() {
   return (neuron0x2904b50()*-0.0552242);
}

double NNfunction_NN_2_8::synapse0x290e260() {
   return (neuron0x2904e00()*0.0305272);
}

double NNfunction_NN_2_8::synapse0x290e2a0() {
   return (neuron0x2905140()*0.728942);
}

double NNfunction_NN_2_8::synapse0x290e2e0() {
   return (neuron0x2905480()*0.0129758);
}

double NNfunction_NN_2_8::synapse0x290e320() {
   return (neuron0x29057c0()*0.028882);
}

double NNfunction_NN_2_8::synapse0x290e360() {
   return (neuron0x2905b00()*0.0302885);
}

double NNfunction_NN_2_8::synapse0x290e3a0() {
   return (neuron0x2905e40()*0.020199);
}

double NNfunction_NN_2_8::synapse0x290e3e0() {
   return (neuron0x2906180()*0.0165887);
}

double NNfunction_NN_2_8::synapse0x290e420() {
   return (neuron0x29064c0()*0.0165931);
}

double NNfunction_NN_2_8::synapse0x290e460() {
   return (neuron0x2906800()*0.0320122);
}

double NNfunction_NN_2_8::synapse0x290e4a0() {
   return (neuron0x2906b40()*-0.0191675);
}

double NNfunction_NN_2_8::synapse0x290e4e0() {
   return (neuron0x2906e80()*2.63826);
}

double NNfunction_NN_2_8::synapse0x290e520() {
   return (neuron0x29071c0()*-0.057178);
}

double NNfunction_NN_2_8::synapse0x2912660() {
   return (neuron0x2907500()*0.0682017);
}

double NNfunction_NN_2_8::synapse0x29126a0() {
   return (neuron0x2907840()*-0.0197239);
}

double NNfunction_NN_2_8::synapse0x29126e0() {
   return (neuron0x2907b80()*-0.0330873);
}

double NNfunction_NN_2_8::synapse0x290e070() {
   return (neuron0x2907ec0()*-0.0276428);
}

double NNfunction_NN_2_8::synapse0x290e0b0() {
   return (neuron0x2908420()*-0.0235211);
}

double NNfunction_NN_2_8::synapse0x2912830() {
   return (neuron0x2908760()*-0.0857192);
}

double NNfunction_NN_2_8::synapse0x2912870() {
   return (neuron0x2908aa0()*-0.0373455);
}

double NNfunction_NN_2_8::synapse0x29128b0() {
   return (neuron0x2908de0()*-0.00680111);
}

double NNfunction_NN_2_8::synapse0x29128f0() {
   return (neuron0x2909120()*0.0219384);
}

double NNfunction_NN_2_8::synapse0x2912930() {
   return (neuron0x2909460()*0.0220142);
}

double NNfunction_NN_2_8::synapse0x2912970() {
   return (neuron0x29097a0()*0.441332);
}

double NNfunction_NN_2_8::synapse0x2912cf0() {
   return (neuron0x2904b50()*-0.115759);
}

double NNfunction_NN_2_8::synapse0x2912d30() {
   return (neuron0x2904e00()*-0.330968);
}

double NNfunction_NN_2_8::synapse0x2912d70() {
   return (neuron0x2905140()*-0.0703822);
}

double NNfunction_NN_2_8::synapse0x2912db0() {
   return (neuron0x2905480()*0.176063);
}

double NNfunction_NN_2_8::synapse0x2912df0() {
   return (neuron0x29057c0()*-0.0240746);
}

double NNfunction_NN_2_8::synapse0x2912e30() {
   return (neuron0x2905b00()*-0.306413);
}

double NNfunction_NN_2_8::synapse0x2912e70() {
   return (neuron0x2905e40()*-0.20397);
}

double NNfunction_NN_2_8::synapse0x2912eb0() {
   return (neuron0x2906180()*0.0732781);
}

double NNfunction_NN_2_8::synapse0x2912ef0() {
   return (neuron0x29064c0()*0.246167);
}

double NNfunction_NN_2_8::synapse0x2912f30() {
   return (neuron0x2906800()*0.374521);
}

double NNfunction_NN_2_8::synapse0x2912f70() {
   return (neuron0x2906b40()*0.20754);
}

double NNfunction_NN_2_8::synapse0x2912fb0() {
   return (neuron0x2906e80()*0.116362);
}

double NNfunction_NN_2_8::synapse0x2912ff0() {
   return (neuron0x29071c0()*0.560895);
}

double NNfunction_NN_2_8::synapse0x2913030() {
   return (neuron0x2907500()*0.363108);
}

double NNfunction_NN_2_8::synapse0x2913070() {
   return (neuron0x2907840()*0.154898);
}

double NNfunction_NN_2_8::synapse0x29130b0() {
   return (neuron0x2907b80()*-0.497348);
}

double NNfunction_NN_2_8::synapse0x2912b40() {
   return (neuron0x2907ec0()*0.0308873);
}

double NNfunction_NN_2_8::synapse0x2912b80() {
   return (neuron0x2908420()*0.104926);
}

double NNfunction_NN_2_8::synapse0x2913200() {
   return (neuron0x2908760()*-0.0770011);
}

double NNfunction_NN_2_8::synapse0x2913240() {
   return (neuron0x2908aa0()*-0.17377);
}

double NNfunction_NN_2_8::synapse0x2913280() {
   return (neuron0x2908de0()*-0.183572);
}

double NNfunction_NN_2_8::synapse0x29132c0() {
   return (neuron0x2909120()*-0.49468);
}

double NNfunction_NN_2_8::synapse0x2913300() {
   return (neuron0x2909460()*-0.120099);
}

double NNfunction_NN_2_8::synapse0x2913340() {
   return (neuron0x29097a0()*-0.337668);
}

double NNfunction_NN_2_8::synapse0x29136c0() {
   return (neuron0x2904b50()*0.0171027);
}

double NNfunction_NN_2_8::synapse0x2913700() {
   return (neuron0x2904e00()*-0.203755);
}

double NNfunction_NN_2_8::synapse0x2913740() {
   return (neuron0x2905140()*-0.084469);
}

double NNfunction_NN_2_8::synapse0x2913780() {
   return (neuron0x2905480()*-0.110124);
}

double NNfunction_NN_2_8::synapse0x29137c0() {
   return (neuron0x29057c0()*-0.0246097);
}

double NNfunction_NN_2_8::synapse0x2913800() {
   return (neuron0x2905b00()*0.0724871);
}

double NNfunction_NN_2_8::synapse0x2913840() {
   return (neuron0x2905e40()*0.0253067);
}

double NNfunction_NN_2_8::synapse0x2913880() {
   return (neuron0x2906180()*-0.0156366);
}

double NNfunction_NN_2_8::synapse0x29138c0() {
   return (neuron0x29064c0()*-0.0358181);
}

double NNfunction_NN_2_8::synapse0x2913900() {
   return (neuron0x2906800()*0.131323);
}

double NNfunction_NN_2_8::synapse0x2913940() {
   return (neuron0x2906b40()*-0.0116764);
}

double NNfunction_NN_2_8::synapse0x2913980() {
   return (neuron0x2906e80()*2.11243);
}

double NNfunction_NN_2_8::synapse0x29139c0() {
   return (neuron0x29071c0()*0.0634851);
}

double NNfunction_NN_2_8::synapse0x2913a00() {
   return (neuron0x2907500()*0.0263899);
}

double NNfunction_NN_2_8::synapse0x2913a40() {
   return (neuron0x2907840()*-0.091729);
}

double NNfunction_NN_2_8::synapse0x2913a80() {
   return (neuron0x2907b80()*-0.0143917);
}

double NNfunction_NN_2_8::synapse0x2913510() {
   return (neuron0x2907ec0()*-0.0938262);
}

double NNfunction_NN_2_8::synapse0x2913550() {
   return (neuron0x2908420()*-0.0633687);
}

double NNfunction_NN_2_8::synapse0x2913bd0() {
   return (neuron0x2908760()*-0.0775627);
}

double NNfunction_NN_2_8::synapse0x2913c10() {
   return (neuron0x2908aa0()*-8.33058e-05);
}

double NNfunction_NN_2_8::synapse0x2913c50() {
   return (neuron0x2908de0()*0.0188126);
}

double NNfunction_NN_2_8::synapse0x2913c90() {
   return (neuron0x2909120()*0.00641342);
}

double NNfunction_NN_2_8::synapse0x2913cd0() {
   return (neuron0x2909460()*0.0598458);
}

double NNfunction_NN_2_8::synapse0x2913d10() {
   return (neuron0x29097a0()*-2.0788);
}

double NNfunction_NN_2_8::synapse0x2914090() {
   return (neuron0x2904b50()*0.0459094);
}

double NNfunction_NN_2_8::synapse0x29140d0() {
   return (neuron0x2904e00()*-0.0218104);
}

double NNfunction_NN_2_8::synapse0x2914110() {
   return (neuron0x2905140()*0.0362744);
}

double NNfunction_NN_2_8::synapse0x2914150() {
   return (neuron0x2905480()*-0.0197001);
}

double NNfunction_NN_2_8::synapse0x2914190() {
   return (neuron0x29057c0()*-0.00782366);
}

double NNfunction_NN_2_8::synapse0x29141d0() {
   return (neuron0x2905b00()*0.00442415);
}

double NNfunction_NN_2_8::synapse0x2914210() {
   return (neuron0x2905e40()*0.0114627);
}

double NNfunction_NN_2_8::synapse0x2914250() {
   return (neuron0x2906180()*-0.00645446);
}

double NNfunction_NN_2_8::synapse0x2914290() {
   return (neuron0x29064c0()*-0.0123241);
}

double NNfunction_NN_2_8::synapse0x29142d0() {
   return (neuron0x2906800()*0.0165252);
}

double NNfunction_NN_2_8::synapse0x2914310() {
   return (neuron0x2906b40()*0.00241448);
}

double NNfunction_NN_2_8::synapse0x2914350() {
   return (neuron0x2906e80()*-0.065861);
}

double NNfunction_NN_2_8::synapse0x2914390() {
   return (neuron0x29071c0()*-0.000750815);
}

double NNfunction_NN_2_8::synapse0x29143d0() {
   return (neuron0x2907500()*0.0269755);
}

double NNfunction_NN_2_8::synapse0x2914410() {
   return (neuron0x2907840()*0.00765848);
}

double NNfunction_NN_2_8::synapse0x2914450() {
   return (neuron0x2907b80()*-0.00719443);
}

double NNfunction_NN_2_8::synapse0x2913ee0() {
   return (neuron0x2907ec0()*-0.00337634);
}

double NNfunction_NN_2_8::synapse0x2913f20() {
   return (neuron0x2908420()*0.000982577);
}

double NNfunction_NN_2_8::synapse0x29145a0() {
   return (neuron0x2908760()*0.0163759);
}

double NNfunction_NN_2_8::synapse0x29145e0() {
   return (neuron0x2908aa0()*-0.00111169);
}

double NNfunction_NN_2_8::synapse0x2914620() {
   return (neuron0x2908de0()*-0.0125764);
}

double NNfunction_NN_2_8::synapse0x2914660() {
   return (neuron0x2909120()*0.00668523);
}

double NNfunction_NN_2_8::synapse0x29146a0() {
   return (neuron0x2909460()*0.0222282);
}

double NNfunction_NN_2_8::synapse0x29146e0() {
   return (neuron0x29097a0()*4.83731);
}

double NNfunction_NN_2_8::synapse0x2914a60() {
   return (neuron0x2904b50()*0.0207788);
}

double NNfunction_NN_2_8::synapse0x2904ce0() {
   return (neuron0x2904e00()*0.0103877);
}

double NNfunction_NN_2_8::synapse0x2904d20() {
   return (neuron0x2905140()*2.05344);
}

double NNfunction_NN_2_8::synapse0x2905020() {
   return (neuron0x2905480()*0.0296657);
}

double NNfunction_NN_2_8::synapse0x2905060() {
   return (neuron0x29057c0()*0.0628663);
}

double NNfunction_NN_2_8::synapse0x2905360() {
   return (neuron0x2905b00()*0.0377154);
}

double NNfunction_NN_2_8::synapse0x29053a0() {
   return (neuron0x2905e40()*0.0352078);
}

double NNfunction_NN_2_8::synapse0x29056a0() {
   return (neuron0x2906180()*-0.128342);
}

double NNfunction_NN_2_8::synapse0x29056e0() {
   return (neuron0x29064c0()*0.0231148);
}

double NNfunction_NN_2_8::synapse0x29059e0() {
   return (neuron0x2906800()*0.0177252);
}

double NNfunction_NN_2_8::synapse0x2905a20() {
   return (neuron0x2906b40()*0.129704);
}

double NNfunction_NN_2_8::synapse0x2905d20() {
   return (neuron0x2906e80()*-0.478322);
}

double NNfunction_NN_2_8::synapse0x2905d60() {
   return (neuron0x29071c0()*0.0256622);
}

double NNfunction_NN_2_8::synapse0x2906060() {
   return (neuron0x2907500()*-0.044191);
}

double NNfunction_NN_2_8::synapse0x29060a0() {
   return (neuron0x2907840()*-0.152812);
}

double NNfunction_NN_2_8::synapse0x29063a0() {
   return (neuron0x2907b80()*0.0268117);
}

double NNfunction_NN_2_8::synapse0x29063e0() {
   return (neuron0x2907ec0()*0.0871804);
}

double NNfunction_NN_2_8::synapse0x29066e0() {
   return (neuron0x2908420()*-0.023887);
}

double NNfunction_NN_2_8::synapse0x2906720() {
   return (neuron0x2908760()*-0.130171);
}

double NNfunction_NN_2_8::synapse0x2906a20() {
   return (neuron0x2908aa0()*-0.00280188);
}

double NNfunction_NN_2_8::synapse0x2906a60() {
   return (neuron0x2908de0()*0.0256913);
}

double NNfunction_NN_2_8::synapse0x2906d60() {
   return (neuron0x2909120()*-0.0833362);
}

double NNfunction_NN_2_8::synapse0x2906da0() {
   return (neuron0x2909460()*-0.0576471);
}

double NNfunction_NN_2_8::synapse0x29070a0() {
   return (neuron0x29097a0()*1.20143);
}

double NNfunction_NN_2_8::synapse0x29070e0() {
   return (neuron0x2904b50()*0.0549836);
}

double NNfunction_NN_2_8::synapse0x2907da0() {
   return (neuron0x2904e00()*0.0205423);
}

double NNfunction_NN_2_8::synapse0x2907de0() {
   return (neuron0x2905140()*0.253421);
}

double NNfunction_NN_2_8::synapse0x29148b0() {
   return (neuron0x2905480()*-0.0944624);
}

double NNfunction_NN_2_8::synapse0x29148f0() {
   return (neuron0x29057c0()*-0.0575354);
}

double NNfunction_NN_2_8::synapse0x29080e0() {
   return (neuron0x2905b00()*-0.160372);
}

double NNfunction_NN_2_8::synapse0x2908120() {
   return (neuron0x2905e40()*-0.0732709);
}

double NNfunction_NN_2_8::synapse0x2908640() {
   return (neuron0x2906180()*0.0117691);
}

double NNfunction_NN_2_8::synapse0x2908680() {
   return (neuron0x29064c0()*0.0390229);
}

double NNfunction_NN_2_8::synapse0x2908980() {
   return (neuron0x2906800()*0.120148);
}

double NNfunction_NN_2_8::synapse0x29089c0() {
   return (neuron0x2906b40()*0.111951);
}

double NNfunction_NN_2_8::synapse0x2908cc0() {
   return (neuron0x2906e80()*-0.223733);
}

double NNfunction_NN_2_8::synapse0x2908d00() {
   return (neuron0x29071c0()*0.323918);
}

double NNfunction_NN_2_8::synapse0x2909000() {
   return (neuron0x2907500()*0.0307193);
}

double NNfunction_NN_2_8::synapse0x2909040() {
   return (neuron0x2907840()*0.117025);
}

double NNfunction_NN_2_8::synapse0x2909340() {
   return (neuron0x2907b80()*-0.0853358);
}

double NNfunction_NN_2_8::synapse0x2909380() {
   return (neuron0x2907ec0()*0.0199676);
}

double NNfunction_NN_2_8::synapse0x2909680() {
   return (neuron0x2908420()*0.0205053);
}

double NNfunction_NN_2_8::synapse0x29096c0() {
   return (neuron0x2908760()*0.0133347);
}

double NNfunction_NN_2_8::synapse0x29099c0() {
   return (neuron0x2908aa0()*-0.115465);
}

double NNfunction_NN_2_8::synapse0x2909a00() {
   return (neuron0x2908de0()*-0.0625537);
}

double NNfunction_NN_2_8::synapse0x29073e0() {
   return (neuron0x2909120()*-0.162984);
}

double NNfunction_NN_2_8::synapse0x2907420() {
   return (neuron0x2909460()*-0.0652098);
}

double NNfunction_NN_2_8::synapse0x29167d0() {
   return (neuron0x29097a0()*0.415475);
}

double NNfunction_NN_2_8::synapse0x2916b50() {
   return (neuron0x2904b50()*0.364492);
}

double NNfunction_NN_2_8::synapse0x2916b90() {
   return (neuron0x2904e00()*0.00250324);
}

double NNfunction_NN_2_8::synapse0x2916bd0() {
   return (neuron0x2905140()*-0.0490909);
}

double NNfunction_NN_2_8::synapse0x2916c10() {
   return (neuron0x2905480()*-0.0291615);
}

double NNfunction_NN_2_8::synapse0x2916c50() {
   return (neuron0x29057c0()*-0.0214136);
}

double NNfunction_NN_2_8::synapse0x2916c90() {
   return (neuron0x2905b00()*0.0441571);
}

double NNfunction_NN_2_8::synapse0x2916cd0() {
   return (neuron0x2905e40()*-0.0460837);
}

double NNfunction_NN_2_8::synapse0x2916d10() {
   return (neuron0x2906180()*-0.0391156);
}

double NNfunction_NN_2_8::synapse0x2916d50() {
   return (neuron0x29064c0()*-0.0243766);
}

double NNfunction_NN_2_8::synapse0x2916d90() {
   return (neuron0x2906800()*-0.0259381);
}

double NNfunction_NN_2_8::synapse0x2916dd0() {
   return (neuron0x2906b40()*0.00580493);
}

double NNfunction_NN_2_8::synapse0x2916e10() {
   return (neuron0x2906e80()*-0.180227);
}

double NNfunction_NN_2_8::synapse0x2916e50() {
   return (neuron0x29071c0()*0.0151677);
}

double NNfunction_NN_2_8::synapse0x2916e90() {
   return (neuron0x2907500()*0.0154135);
}

double NNfunction_NN_2_8::synapse0x2916ed0() {
   return (neuron0x2907840()*0.0283213);
}

double NNfunction_NN_2_8::synapse0x2916f10() {
   return (neuron0x2907b80()*-0.000376391);
}

double NNfunction_NN_2_8::synapse0x29169a0() {
   return (neuron0x2907ec0()*-0.0635771);
}

double NNfunction_NN_2_8::synapse0x29169e0() {
   return (neuron0x2908420()*-0.0117781);
}

double NNfunction_NN_2_8::synapse0x2917060() {
   return (neuron0x2908760()*-0.0166519);
}

double NNfunction_NN_2_8::synapse0x29170a0() {
   return (neuron0x2908aa0()*-0.0166214);
}

double NNfunction_NN_2_8::synapse0x29170e0() {
   return (neuron0x2908de0()*0.0192472);
}

double NNfunction_NN_2_8::synapse0x2917120() {
   return (neuron0x2909120()*-0.0631846);
}

double NNfunction_NN_2_8::synapse0x2917160() {
   return (neuron0x2909460()*0.018809);
}

double NNfunction_NN_2_8::synapse0x29171a0() {
   return (neuron0x29097a0()*-0.812964);
}

double NNfunction_NN_2_8::synapse0x2917520() {
   return (neuron0x2904b50()*-0.0316551);
}

double NNfunction_NN_2_8::synapse0x2917560() {
   return (neuron0x2904e00()*-0.000236469);
}

double NNfunction_NN_2_8::synapse0x29175a0() {
   return (neuron0x2905140()*-1.17533);
}

double NNfunction_NN_2_8::synapse0x29175e0() {
   return (neuron0x2905480()*0.0331489);
}

double NNfunction_NN_2_8::synapse0x2917620() {
   return (neuron0x29057c0()*-0.0248378);
}

double NNfunction_NN_2_8::synapse0x2917660() {
   return (neuron0x2905b00()*-0.0129472);
}

double NNfunction_NN_2_8::synapse0x29176a0() {
   return (neuron0x2905e40()*-0.0198616);
}

double NNfunction_NN_2_8::synapse0x29176e0() {
   return (neuron0x2906180()*-0.00557902);
}

double NNfunction_NN_2_8::synapse0x2917720() {
   return (neuron0x29064c0()*0.0309499);
}

double NNfunction_NN_2_8::synapse0x2917760() {
   return (neuron0x2906800()*-0.0135257);
}

double NNfunction_NN_2_8::synapse0x29177a0() {
   return (neuron0x2906b40()*0.0111374);
}

double NNfunction_NN_2_8::synapse0x29177e0() {
   return (neuron0x2906e80()*-0.256905);
}

double NNfunction_NN_2_8::synapse0x2917820() {
   return (neuron0x29071c0()*-0.0375245);
}

double NNfunction_NN_2_8::synapse0x2917860() {
   return (neuron0x2907500()*-0.0055707);
}

double NNfunction_NN_2_8::synapse0x29178a0() {
   return (neuron0x2907840()*-0.0414749);
}

double NNfunction_NN_2_8::synapse0x29178e0() {
   return (neuron0x2907b80()*-0.012033);
}

double NNfunction_NN_2_8::synapse0x2917370() {
   return (neuron0x2907ec0()*0.00703347);
}

double NNfunction_NN_2_8::synapse0x29173b0() {
   return (neuron0x2908420()*-0.00958057);
}

double NNfunction_NN_2_8::synapse0x2917a30() {
   return (neuron0x2908760()*-0.0207095);
}

double NNfunction_NN_2_8::synapse0x2917a70() {
   return (neuron0x2908aa0()*0.00242619);
}

double NNfunction_NN_2_8::synapse0x2917ab0() {
   return (neuron0x2908de0()*0.0107423);
}

double NNfunction_NN_2_8::synapse0x2917af0() {
   return (neuron0x2909120()*0.00809737);
}

double NNfunction_NN_2_8::synapse0x2917b30() {
   return (neuron0x2909460()*-0.0374375);
}

double NNfunction_NN_2_8::synapse0x2917b70() {
   return (neuron0x29097a0()*1.46817);
}

double NNfunction_NN_2_8::synapse0x2917ef0() {
   return (neuron0x2904b50()*0.825886);
}

double NNfunction_NN_2_8::synapse0x2917f30() {
   return (neuron0x2904e00()*-0.199099);
}

double NNfunction_NN_2_8::synapse0x2917f70() {
   return (neuron0x2905140()*-0.492023);
}

double NNfunction_NN_2_8::synapse0x2917fb0() {
   return (neuron0x2905480()*0.530677);
}

double NNfunction_NN_2_8::synapse0x2917ff0() {
   return (neuron0x29057c0()*-0.0678577);
}

double NNfunction_NN_2_8::synapse0x2918030() {
   return (neuron0x2905b00()*-0.160361);
}

double NNfunction_NN_2_8::synapse0x2918070() {
   return (neuron0x2905e40()*-0.176578);
}

double NNfunction_NN_2_8::synapse0x29180b0() {
   return (neuron0x2906180()*0.107471);
}

double NNfunction_NN_2_8::synapse0x29180f0() {
   return (neuron0x29064c0()*0.0888459);
}

double NNfunction_NN_2_8::synapse0x2918130() {
   return (neuron0x2906800()*0.260893);
}

double NNfunction_NN_2_8::synapse0x2918170() {
   return (neuron0x2906b40()*-0.344884);
}

double NNfunction_NN_2_8::synapse0x29181b0() {
   return (neuron0x2906e80()*-1.16455);
}

double NNfunction_NN_2_8::synapse0x29181f0() {
   return (neuron0x29071c0()*-0.287563);
}

double NNfunction_NN_2_8::synapse0x2918230() {
   return (neuron0x2907500()*0.0679265);
}

double NNfunction_NN_2_8::synapse0x2918270() {
   return (neuron0x2907840()*0.261895);
}

double NNfunction_NN_2_8::synapse0x29182b0() {
   return (neuron0x2907b80()*0.15679);
}

double NNfunction_NN_2_8::synapse0x2917d40() {
   return (neuron0x2907ec0()*0.044367);
}

double NNfunction_NN_2_8::synapse0x2917d80() {
   return (neuron0x2908420()*-0.0841781);
}

double NNfunction_NN_2_8::synapse0x2918400() {
   return (neuron0x2908760()*-0.0912292);
}

double NNfunction_NN_2_8::synapse0x2918440() {
   return (neuron0x2908aa0()*0.842579);
}

double NNfunction_NN_2_8::synapse0x2918480() {
   return (neuron0x2908de0()*-0.325197);
}

double NNfunction_NN_2_8::synapse0x29184c0() {
   return (neuron0x2909120()*0.0219315);
}

double NNfunction_NN_2_8::synapse0x2918500() {
   return (neuron0x2909460()*-0.35078);
}

double NNfunction_NN_2_8::synapse0x2918540() {
   return (neuron0x29097a0()*0.550559);
}

double NNfunction_NN_2_8::synapse0x29188c0() {
   return (neuron0x2904b50()*-0.105888);
}

double NNfunction_NN_2_8::synapse0x2918900() {
   return (neuron0x2904e00()*-0.125112);
}

double NNfunction_NN_2_8::synapse0x2918940() {
   return (neuron0x2905140()*0.672787);
}

double NNfunction_NN_2_8::synapse0x2918980() {
   return (neuron0x2905480()*-0.13543);
}

double NNfunction_NN_2_8::synapse0x29189c0() {
   return (neuron0x29057c0()*0.121022);
}

double NNfunction_NN_2_8::synapse0x2918a00() {
   return (neuron0x2905b00()*-0.106937);
}

double NNfunction_NN_2_8::synapse0x2918a40() {
   return (neuron0x2905e40()*0.0381531);
}

double NNfunction_NN_2_8::synapse0x2918a80() {
   return (neuron0x2906180()*-0.038673);
}

double NNfunction_NN_2_8::synapse0x2918ac0() {
   return (neuron0x29064c0()*0.0521111);
}

double NNfunction_NN_2_8::synapse0x2918b00() {
   return (neuron0x2906800()*0.112876);
}

double NNfunction_NN_2_8::synapse0x2918b40() {
   return (neuron0x2906b40()*0.107019);
}

double NNfunction_NN_2_8::synapse0x2918b80() {
   return (neuron0x2906e80()*0.608381);
}

double NNfunction_NN_2_8::synapse0x2918bc0() {
   return (neuron0x29071c0()*-0.108637);
}

double NNfunction_NN_2_8::synapse0x2918c00() {
   return (neuron0x2907500()*0.0933034);
}

double NNfunction_NN_2_8::synapse0x2918c40() {
   return (neuron0x2907840()*-0.103522);
}

double NNfunction_NN_2_8::synapse0x2918c80() {
   return (neuron0x2907b80()*-0.0354184);
}

double NNfunction_NN_2_8::synapse0x2918710() {
   return (neuron0x2907ec0()*0.0140098);
}

double NNfunction_NN_2_8::synapse0x2918750() {
   return (neuron0x2908420()*0.0129844);
}

double NNfunction_NN_2_8::synapse0x2918dd0() {
   return (neuron0x2908760()*0.00848258);
}

double NNfunction_NN_2_8::synapse0x2918e10() {
   return (neuron0x2908aa0()*0.0723475);
}

double NNfunction_NN_2_8::synapse0x2918e50() {
   return (neuron0x2908de0()*0.105778);
}

double NNfunction_NN_2_8::synapse0x2918e90() {
   return (neuron0x2909120()*-0.014008);
}

double NNfunction_NN_2_8::synapse0x2918ed0() {
   return (neuron0x2909460()*-0.15452);
}

double NNfunction_NN_2_8::synapse0x2918f10() {
   return (neuron0x29097a0()*-6.03684);
}

double NNfunction_NN_2_8::synapse0x2919290() {
   return (neuron0x2904b50()*-0.0904993);
}

double NNfunction_NN_2_8::synapse0x29192d0() {
   return (neuron0x2904e00()*0.00662265);
}

double NNfunction_NN_2_8::synapse0x2919310() {
   return (neuron0x2905140()*0.268164);
}

double NNfunction_NN_2_8::synapse0x2919350() {
   return (neuron0x2905480()*0.0347047);
}

double NNfunction_NN_2_8::synapse0x2919390() {
   return (neuron0x29057c0()*0.0198385);
}

double NNfunction_NN_2_8::synapse0x29193d0() {
   return (neuron0x2905b00()*0.0104005);
}

double NNfunction_NN_2_8::synapse0x2919410() {
   return (neuron0x2905e40()*-0.0645483);
}

double NNfunction_NN_2_8::synapse0x2919450() {
   return (neuron0x2906180()*0.0992691);
}

double NNfunction_NN_2_8::synapse0x2919490() {
   return (neuron0x29064c0()*0.0129474);
}

double NNfunction_NN_2_8::synapse0x2911650() {
   return (neuron0x2906800()*-0.0430464);
}

double NNfunction_NN_2_8::synapse0x2911690() {
   return (neuron0x2906b40()*-0.0504156);
}

double NNfunction_NN_2_8::synapse0x29116d0() {
   return (neuron0x2906e80()*-4.60926);
}

double NNfunction_NN_2_8::synapse0x2911710() {
   return (neuron0x29071c0()*0.0425136);
}

double NNfunction_NN_2_8::synapse0x2911750() {
   return (neuron0x2907500()*0.0730651);
}

double NNfunction_NN_2_8::synapse0x2911790() {
   return (neuron0x2907840()*0.0188185);
}

double NNfunction_NN_2_8::synapse0x29117d0() {
   return (neuron0x2907b80()*0.050665);
}

double NNfunction_NN_2_8::synapse0x29190e0() {
   return (neuron0x2907ec0()*0.0714251);
}

double NNfunction_NN_2_8::synapse0x2919120() {
   return (neuron0x2908420()*-0.035815);
}

double NNfunction_NN_2_8::synapse0x2911920() {
   return (neuron0x2908760()*0.0280084);
}

double NNfunction_NN_2_8::synapse0x2911960() {
   return (neuron0x2908aa0()*0.0218591);
}

double NNfunction_NN_2_8::synapse0x29119a0() {
   return (neuron0x2908de0()*-0.0657214);
}

double NNfunction_NN_2_8::synapse0x29119e0() {
   return (neuron0x2909120()*0.0146423);
}

double NNfunction_NN_2_8::synapse0x2911a20() {
   return (neuron0x2909460()*0.0290749);
}

double NNfunction_NN_2_8::synapse0x2911a60() {
   return (neuron0x29097a0()*-0.755386);
}

double NNfunction_NN_2_8::synapse0x2911de0() {
   return (neuron0x2904b50()*-0.0123069);
}

double NNfunction_NN_2_8::synapse0x2911e20() {
   return (neuron0x2904e00()*-0.0738475);
}

double NNfunction_NN_2_8::synapse0x2911e60() {
   return (neuron0x2905140()*1.27512);
}

double NNfunction_NN_2_8::synapse0x2911ea0() {
   return (neuron0x2905480()*-0.0294726);
}

double NNfunction_NN_2_8::synapse0x2911ee0() {
   return (neuron0x29057c0()*-0.101088);
}

double NNfunction_NN_2_8::synapse0x2911f20() {
   return (neuron0x2905b00()*0.0503884);
}

double NNfunction_NN_2_8::synapse0x2911f60() {
   return (neuron0x2905e40()*0.0113067);
}

double NNfunction_NN_2_8::synapse0x2911fa0() {
   return (neuron0x2906180()*0.0046937);
}

double NNfunction_NN_2_8::synapse0x2911fe0() {
   return (neuron0x29064c0()*-0.0244778);
}

double NNfunction_NN_2_8::synapse0x2912020() {
   return (neuron0x2906800()*-0.0711585);
}

double NNfunction_NN_2_8::synapse0x2912060() {
   return (neuron0x2906b40()*-0.0135714);
}

double NNfunction_NN_2_8::synapse0x29120a0() {
   return (neuron0x2906e80()*0.758959);
}

double NNfunction_NN_2_8::synapse0x29120e0() {
   return (neuron0x29071c0()*-0.165292);
}

double NNfunction_NN_2_8::synapse0x2912120() {
   return (neuron0x2907500()*0.111727);
}

double NNfunction_NN_2_8::synapse0x2912160() {
   return (neuron0x2907840()*-0.0233376);
}

double NNfunction_NN_2_8::synapse0x29121a0() {
   return (neuron0x2907b80()*-0.0768734);
}

double NNfunction_NN_2_8::synapse0x2911c30() {
   return (neuron0x2907ec0()*-0.115416);
}

double NNfunction_NN_2_8::synapse0x2911c70() {
   return (neuron0x2908420()*-0.0462154);
}

double NNfunction_NN_2_8::synapse0x29122f0() {
   return (neuron0x2908760()*0.0242139);
}

double NNfunction_NN_2_8::synapse0x2912330() {
   return (neuron0x2908aa0()*-0.0952929);
}

double NNfunction_NN_2_8::synapse0x2912370() {
   return (neuron0x2908de0()*-0.0378577);
}

double NNfunction_NN_2_8::synapse0x29123b0() {
   return (neuron0x2909120()*-0.0145227);
}

double NNfunction_NN_2_8::synapse0x29123f0() {
   return (neuron0x2909460()*0.0742751);
}

double NNfunction_NN_2_8::synapse0x2912430() {
   return (neuron0x29097a0()*1.7179);
}

double NNfunction_NN_2_8::synapse0x2912600() {
   return (neuron0x2904b50()*0.0629188);
}

double NNfunction_NN_2_8::synapse0x291b690() {
   return (neuron0x2904e00()*-0.0124766);
}

double NNfunction_NN_2_8::synapse0x291b6d0() {
   return (neuron0x2905140()*-0.627447);
}

double NNfunction_NN_2_8::synapse0x291b710() {
   return (neuron0x2905480()*0.0320336);
}

double NNfunction_NN_2_8::synapse0x291b750() {
   return (neuron0x29057c0()*-0.0193169);
}

double NNfunction_NN_2_8::synapse0x291b790() {
   return (neuron0x2905b00()*-0.0347506);
}

double NNfunction_NN_2_8::synapse0x291b7d0() {
   return (neuron0x2905e40()*-0.0240335);
}

double NNfunction_NN_2_8::synapse0x291b810() {
   return (neuron0x2906180()*0.019602);
}

double NNfunction_NN_2_8::synapse0x291b850() {
   return (neuron0x29064c0()*-0.0265484);
}

double NNfunction_NN_2_8::synapse0x291b890() {
   return (neuron0x2906800()*0.0305147);
}

double NNfunction_NN_2_8::synapse0x291b8d0() {
   return (neuron0x2906b40()*0.00620661);
}

double NNfunction_NN_2_8::synapse0x291b910() {
   return (neuron0x2906e80()*1.04582);
}

double NNfunction_NN_2_8::synapse0x291b950() {
   return (neuron0x29071c0()*0.0223358);
}

double NNfunction_NN_2_8::synapse0x291b990() {
   return (neuron0x2907500()*-0.0661952);
}

double NNfunction_NN_2_8::synapse0x291b9d0() {
   return (neuron0x2907840()*0.000423453);
}

double NNfunction_NN_2_8::synapse0x291ba10() {
   return (neuron0x2907b80()*0.0334027);
}

double NNfunction_NN_2_8::synapse0x291b4e0() {
   return (neuron0x2907ec0()*0.003397);
}

double NNfunction_NN_2_8::synapse0x291b520() {
   return (neuron0x2908420()*0.0567516);
}

double NNfunction_NN_2_8::synapse0x291bb60() {
   return (neuron0x2908760()*0.0238328);
}

double NNfunction_NN_2_8::synapse0x291bba0() {
   return (neuron0x2908aa0()*0.0636314);
}

double NNfunction_NN_2_8::synapse0x291bbe0() {
   return (neuron0x2908de0()*-0.000910075);
}

double NNfunction_NN_2_8::synapse0x291bc20() {
   return (neuron0x2909120()*-0.0272833);
}

double NNfunction_NN_2_8::synapse0x291bc60() {
   return (neuron0x2909460()*-0.0401482);
}

double NNfunction_NN_2_8::synapse0x291bca0() {
   return (neuron0x29097a0()*0.59884);
}

double NNfunction_NN_2_8::synapse0x291c020() {
   return (neuron0x2904b50()*-0.0246205);
}

double NNfunction_NN_2_8::synapse0x291c060() {
   return (neuron0x2904e00()*0.00272268);
}

double NNfunction_NN_2_8::synapse0x291c0a0() {
   return (neuron0x2905140()*2.92431);
}

double NNfunction_NN_2_8::synapse0x291c0e0() {
   return (neuron0x2905480()*-0.0203903);
}

double NNfunction_NN_2_8::synapse0x291c120() {
   return (neuron0x29057c0()*0.000615892);
}

double NNfunction_NN_2_8::synapse0x291c160() {
   return (neuron0x2905b00()*0.0158123);
}

double NNfunction_NN_2_8::synapse0x291c1a0() {
   return (neuron0x2905e40()*0.0160585);
}

double NNfunction_NN_2_8::synapse0x291c1e0() {
   return (neuron0x2906180()*-0.0079261);
}

double NNfunction_NN_2_8::synapse0x291c220() {
   return (neuron0x29064c0()*-0.0323672);
}

double NNfunction_NN_2_8::synapse0x291c260() {
   return (neuron0x2906800()*-0.0023782);
}

double NNfunction_NN_2_8::synapse0x291c2a0() {
   return (neuron0x2906b40()*0.00232398);
}

double NNfunction_NN_2_8::synapse0x291c2e0() {
   return (neuron0x2906e80()*-0.187861);
}

double NNfunction_NN_2_8::synapse0x291c320() {
   return (neuron0x29071c0()*-0.00180883);
}

double NNfunction_NN_2_8::synapse0x291c360() {
   return (neuron0x2907500()*0.0175321);
}

double NNfunction_NN_2_8::synapse0x291c3a0() {
   return (neuron0x2907840()*0.00822682);
}

double NNfunction_NN_2_8::synapse0x291c3e0() {
   return (neuron0x2907b80()*0.00727633);
}

double NNfunction_NN_2_8::synapse0x291be70() {
   return (neuron0x2907ec0()*-0.000713492);
}

double NNfunction_NN_2_8::synapse0x291beb0() {
   return (neuron0x2908420()*-0.0119837);
}

double NNfunction_NN_2_8::synapse0x291c530() {
   return (neuron0x2908760()*0.0173873);
}

double NNfunction_NN_2_8::synapse0x291c570() {
   return (neuron0x2908aa0()*0.00189675);
}

double NNfunction_NN_2_8::synapse0x291c5b0() {
   return (neuron0x2908de0()*-0.01012);
}

double NNfunction_NN_2_8::synapse0x291c5f0() {
   return (neuron0x2909120()*0.018804);
}

double NNfunction_NN_2_8::synapse0x291c630() {
   return (neuron0x2909460()*-0.0110038);
}

double NNfunction_NN_2_8::synapse0x291c670() {
   return (neuron0x29097a0()*3.97463);
}

double NNfunction_NN_2_8::synapse0x291c9f0() {
   return (neuron0x2904b50()*-0.108132);
}

double NNfunction_NN_2_8::synapse0x291ca30() {
   return (neuron0x2904e00()*-3.44973);
}

double NNfunction_NN_2_8::synapse0x291ca70() {
   return (neuron0x2905140()*1.49636);
}

double NNfunction_NN_2_8::synapse0x291cab0() {
   return (neuron0x2905480()*0.0450787);
}

double NNfunction_NN_2_8::synapse0x291caf0() {
   return (neuron0x29057c0()*0.107869);
}

double NNfunction_NN_2_8::synapse0x291cb30() {
   return (neuron0x2905b00()*-0.0834757);
}

double NNfunction_NN_2_8::synapse0x291cb70() {
   return (neuron0x2905e40()*-0.109092);
}

double NNfunction_NN_2_8::synapse0x291cbb0() {
   return (neuron0x2906180()*0.000596848);
}

double NNfunction_NN_2_8::synapse0x291cbf0() {
   return (neuron0x29064c0()*0.0114331);
}

double NNfunction_NN_2_8::synapse0x291cc30() {
   return (neuron0x2906800()*-0.0493612);
}

double NNfunction_NN_2_8::synapse0x291cc70() {
   return (neuron0x2906b40()*-0.0141013);
}

double NNfunction_NN_2_8::synapse0x291ccb0() {
   return (neuron0x2906e80()*-2.42993);
}

double NNfunction_NN_2_8::synapse0x291ccf0() {
   return (neuron0x29071c0()*-0.0258209);
}

double NNfunction_NN_2_8::synapse0x291cd30() {
   return (neuron0x2907500()*-0.142927);
}

double NNfunction_NN_2_8::synapse0x291cd70() {
   return (neuron0x2907840()*0.0879737);
}

double NNfunction_NN_2_8::synapse0x291cdb0() {
   return (neuron0x2907b80()*-0.0050359);
}

double NNfunction_NN_2_8::synapse0x291c840() {
   return (neuron0x2907ec0()*0.0785073);
}

double NNfunction_NN_2_8::synapse0x291c880() {
   return (neuron0x2908420()*-0.0680524);
}

double NNfunction_NN_2_8::synapse0x291cf00() {
   return (neuron0x2908760()*-0.0629324);
}

double NNfunction_NN_2_8::synapse0x291cf40() {
   return (neuron0x2908aa0()*-0.0126066);
}

double NNfunction_NN_2_8::synapse0x291cf80() {
   return (neuron0x2908de0()*-0.0613335);
}

double NNfunction_NN_2_8::synapse0x291cfc0() {
   return (neuron0x2909120()*-0.0121955);
}

double NNfunction_NN_2_8::synapse0x291d000() {
   return (neuron0x2909460()*0.014698);
}

double NNfunction_NN_2_8::synapse0x291d040() {
   return (neuron0x29097a0()*-1.18926);
}

double NNfunction_NN_2_8::synapse0x291d3c0() {
   return (neuron0x2904b50()*0.0519128);
}

double NNfunction_NN_2_8::synapse0x291d400() {
   return (neuron0x2904e00()*-13.4414);
}

double NNfunction_NN_2_8::synapse0x291d440() {
   return (neuron0x2905140()*0.0501079);
}

double NNfunction_NN_2_8::synapse0x291d480() {
   return (neuron0x2905480()*0.0493409);
}

double NNfunction_NN_2_8::synapse0x291d4c0() {
   return (neuron0x29057c0()*0.0231347);
}

double NNfunction_NN_2_8::synapse0x291d500() {
   return (neuron0x2905b00()*0.0194294);
}

double NNfunction_NN_2_8::synapse0x291d540() {
   return (neuron0x2905e40()*0.0239977);
}

double NNfunction_NN_2_8::synapse0x291d580() {
   return (neuron0x2906180()*0.0327703);
}

double NNfunction_NN_2_8::synapse0x291d5c0() {
   return (neuron0x29064c0()*-0.00897816);
}

double NNfunction_NN_2_8::synapse0x291d600() {
   return (neuron0x2906800()*-0.0228461);
}

double NNfunction_NN_2_8::synapse0x291d640() {
   return (neuron0x2906b40()*-0.00123943);
}

double NNfunction_NN_2_8::synapse0x291d680() {
   return (neuron0x2906e80()*-2.24491);
}

double NNfunction_NN_2_8::synapse0x291d6c0() {
   return (neuron0x29071c0()*-0.0508712);
}

double NNfunction_NN_2_8::synapse0x291d700() {
   return (neuron0x2907500()*-0.0450905);
}

double NNfunction_NN_2_8::synapse0x291d740() {
   return (neuron0x2907840()*0.00325151);
}

double NNfunction_NN_2_8::synapse0x291d780() {
   return (neuron0x2907b80()*0.0250583);
}

double NNfunction_NN_2_8::synapse0x291d210() {
   return (neuron0x2907ec0()*-0.022967);
}

double NNfunction_NN_2_8::synapse0x291d250() {
   return (neuron0x2908420()*-0.00497482);
}

double NNfunction_NN_2_8::synapse0x291d8d0() {
   return (neuron0x2908760()*-0.0478804);
}

double NNfunction_NN_2_8::synapse0x291d910() {
   return (neuron0x2908aa0()*0.015151);
}

double NNfunction_NN_2_8::synapse0x291d950() {
   return (neuron0x2908de0()*-0.00516886);
}

double NNfunction_NN_2_8::synapse0x291d990() {
   return (neuron0x2909120()*-0.0283487);
}

double NNfunction_NN_2_8::synapse0x291d9d0() {
   return (neuron0x2909460()*0.025369);
}

double NNfunction_NN_2_8::synapse0x291da10() {
   return (neuron0x29097a0()*0.107464);
}

double NNfunction_NN_2_8::synapse0x291dd90() {
   return (neuron0x2904b50()*-0.680697);
}

double NNfunction_NN_2_8::synapse0x291ddd0() {
   return (neuron0x2904e00()*-0.692723);
}

double NNfunction_NN_2_8::synapse0x291de10() {
   return (neuron0x2905140()*0.377144);
}

double NNfunction_NN_2_8::synapse0x291de50() {
   return (neuron0x2905480()*0.36411);
}

double NNfunction_NN_2_8::synapse0x291de90() {
   return (neuron0x29057c0()*0.400114);
}

double NNfunction_NN_2_8::synapse0x291ded0() {
   return (neuron0x2905b00()*-0.309447);
}

double NNfunction_NN_2_8::synapse0x291df10() {
   return (neuron0x2905e40()*-0.581297);
}

double NNfunction_NN_2_8::synapse0x291df50() {
   return (neuron0x2906180()*0.00740388);
}

double NNfunction_NN_2_8::synapse0x291df90() {
   return (neuron0x29064c0()*0.22007);
}

double NNfunction_NN_2_8::synapse0x291dfd0() {
   return (neuron0x2906800()*-0.187758);
}

double NNfunction_NN_2_8::synapse0x291e010() {
   return (neuron0x2906b40()*-0.0339621);
}

double NNfunction_NN_2_8::synapse0x291e050() {
   return (neuron0x2906e80()*0.0687711);
}

double NNfunction_NN_2_8::synapse0x291e090() {
   return (neuron0x29071c0()*-0.107472);
}

double NNfunction_NN_2_8::synapse0x291e0d0() {
   return (neuron0x2907500()*0.256416);
}

double NNfunction_NN_2_8::synapse0x291e110() {
   return (neuron0x2907840()*0.103103);
}

double NNfunction_NN_2_8::synapse0x291e150() {
   return (neuron0x2907b80()*0.340564);
}

double NNfunction_NN_2_8::synapse0x291dbe0() {
   return (neuron0x2907ec0()*0.0620255);
}

double NNfunction_NN_2_8::synapse0x291dc20() {
   return (neuron0x2908420()*-0.117237);
}

double NNfunction_NN_2_8::synapse0x291e2a0() {
   return (neuron0x2908760()*0.148022);
}

double NNfunction_NN_2_8::synapse0x291e2e0() {
   return (neuron0x2908aa0()*0.0502225);
}

double NNfunction_NN_2_8::synapse0x291e320() {
   return (neuron0x2908de0()*-0.349852);
}

double NNfunction_NN_2_8::synapse0x291e360() {
   return (neuron0x2909120()*-0.634856);
}

double NNfunction_NN_2_8::synapse0x291e3a0() {
   return (neuron0x2909460()*-0.23921);
}

double NNfunction_NN_2_8::synapse0x291e3e0() {
   return (neuron0x29097a0()*-0.957634);
}

double NNfunction_NN_2_8::synapse0x291e760() {
   return (neuron0x2904b50()*-0.0503157);
}

double NNfunction_NN_2_8::synapse0x291e7a0() {
   return (neuron0x2904e00()*-0.0899618);
}

double NNfunction_NN_2_8::synapse0x291e7e0() {
   return (neuron0x2905140()*1.79062);
}

double NNfunction_NN_2_8::synapse0x291e820() {
   return (neuron0x2905480()*0.00585379);
}

double NNfunction_NN_2_8::synapse0x291e860() {
   return (neuron0x29057c0()*-0.0336145);
}

double NNfunction_NN_2_8::synapse0x291e8a0() {
   return (neuron0x2905b00()*-0.0422484);
}

double NNfunction_NN_2_8::synapse0x291e8e0() {
   return (neuron0x2905e40()*-0.00750332);
}

double NNfunction_NN_2_8::synapse0x291e920() {
   return (neuron0x2906180()*-0.00602277);
}

double NNfunction_NN_2_8::synapse0x291e960() {
   return (neuron0x29064c0()*0.0037179);
}

double NNfunction_NN_2_8::synapse0x291e9a0() {
   return (neuron0x2906800()*-0.00505817);
}

double NNfunction_NN_2_8::synapse0x291e9e0() {
   return (neuron0x2906b40()*0.0163248);
}

double NNfunction_NN_2_8::synapse0x291ea20() {
   return (neuron0x2906e80()*-0.886938);
}

double NNfunction_NN_2_8::synapse0x291ea60() {
   return (neuron0x29071c0()*0.0213305);
}

double NNfunction_NN_2_8::synapse0x291eaa0() {
   return (neuron0x2907500()*-0.0343346);
}

double NNfunction_NN_2_8::synapse0x291eae0() {
   return (neuron0x2907840()*-0.0104301);
}

double NNfunction_NN_2_8::synapse0x291eb20() {
   return (neuron0x2907b80()*0.0218673);
}

double NNfunction_NN_2_8::synapse0x291e5b0() {
   return (neuron0x2907ec0()*0.0392879);
}

double NNfunction_NN_2_8::synapse0x291e5f0() {
   return (neuron0x2908420()*-0.0687856);
}

double NNfunction_NN_2_8::synapse0x291ec70() {
   return (neuron0x2908760()*-0.0232257);
}

double NNfunction_NN_2_8::synapse0x291ecb0() {
   return (neuron0x2908aa0()*-0.0177952);
}

double NNfunction_NN_2_8::synapse0x291ecf0() {
   return (neuron0x2908de0()*-0.00323292);
}

double NNfunction_NN_2_8::synapse0x291ed30() {
   return (neuron0x2909120()*-0.0447518);
}

double NNfunction_NN_2_8::synapse0x291ed70() {
   return (neuron0x2909460()*-0.0202776);
}

double NNfunction_NN_2_8::synapse0x291edb0() {
   return (neuron0x29097a0()*-1.52765);
}

double NNfunction_NN_2_8::synapse0x291f130() {
   return (neuron0x2904b50()*1.01352);
}

double NNfunction_NN_2_8::synapse0x291f170() {
   return (neuron0x2904e00()*0.0267313);
}

double NNfunction_NN_2_8::synapse0x291f1b0() {
   return (neuron0x2905140()*0.437177);
}

double NNfunction_NN_2_8::synapse0x291f1f0() {
   return (neuron0x2905480()*-0.0893173);
}

double NNfunction_NN_2_8::synapse0x291f230() {
   return (neuron0x29057c0()*0.252955);
}

double NNfunction_NN_2_8::synapse0x291f270() {
   return (neuron0x2905b00()*-0.0877017);
}

double NNfunction_NN_2_8::synapse0x291f2b0() {
   return (neuron0x2905e40()*0.0326016);
}

double NNfunction_NN_2_8::synapse0x291f2f0() {
   return (neuron0x2906180()*0.031194);
}

double NNfunction_NN_2_8::synapse0x291f330() {
   return (neuron0x29064c0()*0.280041);
}

double NNfunction_NN_2_8::synapse0x291f370() {
   return (neuron0x2906800()*-0.179696);
}

double NNfunction_NN_2_8::synapse0x291f3b0() {
   return (neuron0x2906b40()*0.205011);
}

double NNfunction_NN_2_8::synapse0x291f3f0() {
   return (neuron0x2906e80()*-0.275176);
}

double NNfunction_NN_2_8::synapse0x291f430() {
   return (neuron0x29071c0()*-0.384368);
}

double NNfunction_NN_2_8::synapse0x291f470() {
   return (neuron0x2907500()*0.0249527);
}

double NNfunction_NN_2_8::synapse0x291f4b0() {
   return (neuron0x2907840()*-0.0950685);
}

double NNfunction_NN_2_8::synapse0x291f4f0() {
   return (neuron0x2907b80()*-0.115976);
}

double NNfunction_NN_2_8::synapse0x291ef80() {
   return (neuron0x2907ec0()*0.00062894);
}

double NNfunction_NN_2_8::synapse0x291efc0() {
   return (neuron0x2908420()*0.129615);
}

double NNfunction_NN_2_8::synapse0x291f640() {
   return (neuron0x2908760()*0.0447298);
}

double NNfunction_NN_2_8::synapse0x291f680() {
   return (neuron0x2908aa0()*0.011661);
}

double NNfunction_NN_2_8::synapse0x291f6c0() {
   return (neuron0x2908de0()*-0.0234275);
}

double NNfunction_NN_2_8::synapse0x291f700() {
   return (neuron0x2909120()*-0.183402);
}

double NNfunction_NN_2_8::synapse0x291f740() {
   return (neuron0x2909460()*0.0322338);
}

double NNfunction_NN_2_8::synapse0x291f780() {
   return (neuron0x29097a0()*0.22193);
}

double NNfunction_NN_2_8::synapse0x291fb00() {
   return (neuron0x2904b50()*-0.00829205);
}

double NNfunction_NN_2_8::synapse0x291fb40() {
   return (neuron0x2904e00()*0.0129699);
}

double NNfunction_NN_2_8::synapse0x291fb80() {
   return (neuron0x2905140()*-0.840509);
}

double NNfunction_NN_2_8::synapse0x291fbc0() {
   return (neuron0x2905480()*0.00153611);
}

double NNfunction_NN_2_8::synapse0x291fc00() {
   return (neuron0x29057c0()*-0.072417);
}

double NNfunction_NN_2_8::synapse0x291fc40() {
   return (neuron0x2905b00()*0.0786975);
}

double NNfunction_NN_2_8::synapse0x291fc80() {
   return (neuron0x2905e40()*0.00208641);
}

double NNfunction_NN_2_8::synapse0x291fcc0() {
   return (neuron0x2906180()*-0.0655352);
}

double NNfunction_NN_2_8::synapse0x291fd00() {
   return (neuron0x29064c0()*-0.0756924);
}

double NNfunction_NN_2_8::synapse0x291fd40() {
   return (neuron0x2906800()*-0.0608076);
}

double NNfunction_NN_2_8::synapse0x291fd80() {
   return (neuron0x2906b40()*0.0522899);
}

double NNfunction_NN_2_8::synapse0x291fdc0() {
   return (neuron0x2906e80()*0.43075);
}

double NNfunction_NN_2_8::synapse0x291fe00() {
   return (neuron0x29071c0()*-0.0229145);
}

double NNfunction_NN_2_8::synapse0x291fe40() {
   return (neuron0x2907500()*0.0817955);
}

double NNfunction_NN_2_8::synapse0x291fe80() {
   return (neuron0x2907840()*-0.0149194);
}

double NNfunction_NN_2_8::synapse0x291fec0() {
   return (neuron0x2907b80()*-0.0264399);
}

double NNfunction_NN_2_8::synapse0x291f950() {
   return (neuron0x2907ec0()*0.00479223);
}

double NNfunction_NN_2_8::synapse0x291f990() {
   return (neuron0x2908420()*0.0192687);
}

double NNfunction_NN_2_8::synapse0x2920010() {
   return (neuron0x2908760()*0.112426);
}

double NNfunction_NN_2_8::synapse0x2920050() {
   return (neuron0x2908aa0()*0.0142178);
}

double NNfunction_NN_2_8::synapse0x2920090() {
   return (neuron0x2908de0()*-0.0602115);
}

double NNfunction_NN_2_8::synapse0x29200d0() {
   return (neuron0x2909120()*0.00262221);
}

double NNfunction_NN_2_8::synapse0x2920110() {
   return (neuron0x2909460()*-0.0280426);
}

double NNfunction_NN_2_8::synapse0x2920150() {
   return (neuron0x29097a0()*0.904313);
}

double NNfunction_NN_2_8::synapse0x29204d0() {
   return (neuron0x2904b50()*-0.257407);
}

double NNfunction_NN_2_8::synapse0x2914aa0() {
   return (neuron0x2904e00()*0.00901356);
}

double NNfunction_NN_2_8::synapse0x2914ae0() {
   return (neuron0x2905140()*0.398093);
}

double NNfunction_NN_2_8::synapse0x2914b20() {
   return (neuron0x2905480()*-0.103199);
}

double NNfunction_NN_2_8::synapse0x2914d70() {
   return (neuron0x29057c0()*-0.229789);
}

double NNfunction_NN_2_8::synapse0x2914db0() {
   return (neuron0x2905b00()*0.089523);
}

double NNfunction_NN_2_8::synapse0x2914df0() {
   return (neuron0x2905e40()*0.0180214);
}

double NNfunction_NN_2_8::synapse0x2915040() {
   return (neuron0x2906180()*-0.149995);
}

double NNfunction_NN_2_8::synapse0x2915080() {
   return (neuron0x29064c0()*-0.469754);
}

double NNfunction_NN_2_8::synapse0x29152d0() {
   return (neuron0x2906800()*-0.029653);
}

double NNfunction_NN_2_8::synapse0x2915310() {
   return (neuron0x2906b40()*0.0626087);
}

double NNfunction_NN_2_8::synapse0x2915350() {
   return (neuron0x2906e80()*-0.19127);
}

double NNfunction_NN_2_8::synapse0x29155a0() {
   return (neuron0x29071c0()*-0.0503232);
}

double NNfunction_NN_2_8::synapse0x29155e0() {
   return (neuron0x2907500()*0.12832);
}

double NNfunction_NN_2_8::synapse0x2915830() {
   return (neuron0x2907840()*-0.0792509);
}

double NNfunction_NN_2_8::synapse0x2915870() {
   return (neuron0x2907b80()*0.108262);
}

double NNfunction_NN_2_8::synapse0x2920320() {
   return (neuron0x2907ec0()*-0.0462718);
}

double NNfunction_NN_2_8::synapse0x2920360() {
   return (neuron0x2908420()*-0.0837365);
}

double NNfunction_NN_2_8::synapse0x29159c0() {
   return (neuron0x2908760()*0.15056);
}

double NNfunction_NN_2_8::synapse0x2915ed0() {
   return (neuron0x2908aa0()*0.250362);
}

double NNfunction_NN_2_8::synapse0x2915f10() {
   return (neuron0x2908de0()*-0.0124994);
}

double NNfunction_NN_2_8::synapse0x2915f50() {
   return (neuron0x2909120()*-0.100169);
}

double NNfunction_NN_2_8::synapse0x29161a0() {
   return (neuron0x2909460()*-0.203549);
}

double NNfunction_NN_2_8::synapse0x29161e0() {
   return (neuron0x29097a0()*-0.422622);
}

double NNfunction_NN_2_8::synapse0x2915a90() {
   return (neuron0x2904b50()*0.0156227);
}

double NNfunction_NN_2_8::synapse0x2915ad0() {
   return (neuron0x2904e00()*-0.160303);
}

double NNfunction_NN_2_8::synapse0x2915b10() {
   return (neuron0x2905140()*0.529464);
}

double NNfunction_NN_2_8::synapse0x2915b50() {
   return (neuron0x2905480()*-0.0904041);
}

double NNfunction_NN_2_8::synapse0x29164d0() {
   return (neuron0x29057c0()*-0.0186616);
}

double NNfunction_NN_2_8::synapse0x2922820() {
   return (neuron0x2905b00()*0.0945858);
}

double NNfunction_NN_2_8::synapse0x2922860() {
   return (neuron0x2905e40()*-0.0245892);
}

double NNfunction_NN_2_8::synapse0x29228a0() {
   return (neuron0x2906180()*0.00661475);
}

double NNfunction_NN_2_8::synapse0x29228e0() {
   return (neuron0x29064c0()*-0.0371758);
}

double NNfunction_NN_2_8::synapse0x2922920() {
   return (neuron0x2906800()*0.0125818);
}

double NNfunction_NN_2_8::synapse0x2922960() {
   return (neuron0x2906b40()*-0.0615586);
}

double NNfunction_NN_2_8::synapse0x29229a0() {
   return (neuron0x2906e80()*-0.667247);
}

double NNfunction_NN_2_8::synapse0x29229e0() {
   return (neuron0x29071c0()*-0.168327);
}

double NNfunction_NN_2_8::synapse0x2922a20() {
   return (neuron0x2907500()*-0.113674);
}

double NNfunction_NN_2_8::synapse0x2922a60() {
   return (neuron0x2907840()*-0.117529);
}

double NNfunction_NN_2_8::synapse0x2922aa0() {
   return (neuron0x2907b80()*0.0254218);
}

double NNfunction_NN_2_8::synapse0x29163b0() {
   return (neuron0x2907ec0()*-0.111563);
}

double NNfunction_NN_2_8::synapse0x29163f0() {
   return (neuron0x2908420()*0.0283599);
}

double NNfunction_NN_2_8::synapse0x2922bf0() {
   return (neuron0x2908760()*-0.0553935);
}

double NNfunction_NN_2_8::synapse0x2922c30() {
   return (neuron0x2908aa0()*0.0711868);
}

double NNfunction_NN_2_8::synapse0x2922c70() {
   return (neuron0x2908de0()*0.0443714);
}

double NNfunction_NN_2_8::synapse0x2922cb0() {
   return (neuron0x2909120()*-0.0152586);
}

double NNfunction_NN_2_8::synapse0x2922cf0() {
   return (neuron0x2909460()*0.0313111);
}

double NNfunction_NN_2_8::synapse0x2922d30() {
   return (neuron0x29097a0()*0.792091);
}

double NNfunction_NN_2_8::synapse0x29230b0() {
   return (neuron0x2904b50()*-0.0196431);
}

double NNfunction_NN_2_8::synapse0x29230f0() {
   return (neuron0x2904e00()*0.0363226);
}

double NNfunction_NN_2_8::synapse0x2923130() {
   return (neuron0x2905140()*1.90778);
}

double NNfunction_NN_2_8::synapse0x2923170() {
   return (neuron0x2905480()*-0.0386967);
}

double NNfunction_NN_2_8::synapse0x29231b0() {
   return (neuron0x29057c0()*0.0830796);
}

double NNfunction_NN_2_8::synapse0x29231f0() {
   return (neuron0x2905b00()*0.0202374);
}

double NNfunction_NN_2_8::synapse0x2923230() {
   return (neuron0x2905e40()*0.0354244);
}

double NNfunction_NN_2_8::synapse0x2923270() {
   return (neuron0x2906180()*-0.000747078);
}

double NNfunction_NN_2_8::synapse0x29232b0() {
   return (neuron0x29064c0()*-0.0319748);
}

double NNfunction_NN_2_8::synapse0x29232f0() {
   return (neuron0x2906800()*-0.0577202);
}

double NNfunction_NN_2_8::synapse0x2923330() {
   return (neuron0x2906b40()*-0.0108109);
}

double NNfunction_NN_2_8::synapse0x2923370() {
   return (neuron0x2906e80()*-3.96252);
}

double NNfunction_NN_2_8::synapse0x29233b0() {
   return (neuron0x29071c0()*-0.00759427);
}

double NNfunction_NN_2_8::synapse0x29233f0() {
   return (neuron0x2907500()*0.0271713);
}

double NNfunction_NN_2_8::synapse0x2923430() {
   return (neuron0x2907840()*0.0700873);
}

double NNfunction_NN_2_8::synapse0x2923470() {
   return (neuron0x2907b80()*-0.0129473);
}

double NNfunction_NN_2_8::synapse0x2922f00() {
   return (neuron0x2907ec0()*-0.00591053);
}

double NNfunction_NN_2_8::synapse0x2922f40() {
   return (neuron0x2908420()*0.00316151);
}

double NNfunction_NN_2_8::synapse0x29235c0() {
   return (neuron0x2908760()*0.0439981);
}

double NNfunction_NN_2_8::synapse0x2923600() {
   return (neuron0x2908aa0()*-0.0166659);
}

double NNfunction_NN_2_8::synapse0x2923640() {
   return (neuron0x2908de0()*0.0234046);
}

double NNfunction_NN_2_8::synapse0x2923680() {
   return (neuron0x2909120()*0.0134199);
}

double NNfunction_NN_2_8::synapse0x29236c0() {
   return (neuron0x2909460()*-0.0208438);
}

double NNfunction_NN_2_8::synapse0x2923700() {
   return (neuron0x29097a0()*0.443693);
}

double NNfunction_NN_2_8::synapse0x2923a80() {
   return (neuron0x2904b50()*-0.0697768);
}

double NNfunction_NN_2_8::synapse0x2923ac0() {
   return (neuron0x2904e00()*-0.0748619);
}

double NNfunction_NN_2_8::synapse0x2923b00() {
   return (neuron0x2905140()*0.436394);
}

double NNfunction_NN_2_8::synapse0x2923b40() {
   return (neuron0x2905480()*-0.087791);
}

double NNfunction_NN_2_8::synapse0x2923b80() {
   return (neuron0x29057c0()*-0.000871531);
}

double NNfunction_NN_2_8::synapse0x2923bc0() {
   return (neuron0x2905b00()*0.0265596);
}

double NNfunction_NN_2_8::synapse0x2923c00() {
   return (neuron0x2905e40()*0.039151);
}

double NNfunction_NN_2_8::synapse0x2923c40() {
   return (neuron0x2906180()*0.0115172);
}

double NNfunction_NN_2_8::synapse0x2923c80() {
   return (neuron0x29064c0()*0.00294865);
}

double NNfunction_NN_2_8::synapse0x2923cc0() {
   return (neuron0x2906800()*0.00315218);
}

double NNfunction_NN_2_8::synapse0x2923d00() {
   return (neuron0x2906b40()*-0.047649);
}

double NNfunction_NN_2_8::synapse0x2923d40() {
   return (neuron0x2906e80()*1.59401);
}

double NNfunction_NN_2_8::synapse0x2923d80() {
   return (neuron0x29071c0()*0.0111123);
}

double NNfunction_NN_2_8::synapse0x2923dc0() {
   return (neuron0x2907500()*0.0346498);
}

double NNfunction_NN_2_8::synapse0x2923e00() {
   return (neuron0x2907840()*-0.0145542);
}

double NNfunction_NN_2_8::synapse0x2923e40() {
   return (neuron0x2907b80()*-0.010766);
}

double NNfunction_NN_2_8::synapse0x29238d0() {
   return (neuron0x2907ec0()*-0.0432899);
}

double NNfunction_NN_2_8::synapse0x2923910() {
   return (neuron0x2908420()*-0.0391157);
}

double NNfunction_NN_2_8::synapse0x2923f90() {
   return (neuron0x2908760()*-0.0676069);
}

double NNfunction_NN_2_8::synapse0x2923fd0() {
   return (neuron0x2908aa0()*0.013382);
}

double NNfunction_NN_2_8::synapse0x2924010() {
   return (neuron0x2908de0()*0.148145);
}

double NNfunction_NN_2_8::synapse0x2924050() {
   return (neuron0x2909120()*-0.0244356);
}

double NNfunction_NN_2_8::synapse0x2924090() {
   return (neuron0x2909460()*0.00997218);
}

double NNfunction_NN_2_8::synapse0x29240d0() {
   return (neuron0x29097a0()*-0.356159);
}

double NNfunction_NN_2_8::synapse0x2924450() {
   return (neuron0x2904b50()*-0.393933);
}

double NNfunction_NN_2_8::synapse0x2924490() {
   return (neuron0x2904e00()*-0.0154827);
}

double NNfunction_NN_2_8::synapse0x29244d0() {
   return (neuron0x2905140()*0.122877);
}

double NNfunction_NN_2_8::synapse0x2924510() {
   return (neuron0x2905480()*0.00647028);
}

double NNfunction_NN_2_8::synapse0x2924550() {
   return (neuron0x29057c0()*0.011195);
}

double NNfunction_NN_2_8::synapse0x2924590() {
   return (neuron0x2905b00()*-0.0108759);
}

double NNfunction_NN_2_8::synapse0x29245d0() {
   return (neuron0x2905e40()*0.0029499);
}

double NNfunction_NN_2_8::synapse0x2924610() {
   return (neuron0x2906180()*0.037732);
}

double NNfunction_NN_2_8::synapse0x2924650() {
   return (neuron0x29064c0()*0.0359069);
}

double NNfunction_NN_2_8::synapse0x2924690() {
   return (neuron0x2906800()*-0.0140661);
}

double NNfunction_NN_2_8::synapse0x29246d0() {
   return (neuron0x2906b40()*0.0221956);
}

double NNfunction_NN_2_8::synapse0x2924710() {
   return (neuron0x2906e80()*-0.0130942);
}

double NNfunction_NN_2_8::synapse0x2924750() {
   return (neuron0x29071c0()*-0.00377305);
}

double NNfunction_NN_2_8::synapse0x2924790() {
   return (neuron0x2907500()*0.0126339);
}

double NNfunction_NN_2_8::synapse0x29247d0() {
   return (neuron0x2907840()*-0.042864);
}

double NNfunction_NN_2_8::synapse0x2924810() {
   return (neuron0x2907b80()*-0.0121446);
}

double NNfunction_NN_2_8::synapse0x29242a0() {
   return (neuron0x2907ec0()*0.000822593);
}

double NNfunction_NN_2_8::synapse0x29242e0() {
   return (neuron0x2908420()*0.0194821);
}

double NNfunction_NN_2_8::synapse0x2924960() {
   return (neuron0x2908760()*-0.0199877);
}

double NNfunction_NN_2_8::synapse0x29249a0() {
   return (neuron0x2908aa0()*0.0234972);
}

double NNfunction_NN_2_8::synapse0x29249e0() {
   return (neuron0x2908de0()*0.0181345);
}

double NNfunction_NN_2_8::synapse0x2924a20() {
   return (neuron0x2909120()*0.0172361);
}

double NNfunction_NN_2_8::synapse0x2924a60() {
   return (neuron0x2909460()*-0.0391328);
}

double NNfunction_NN_2_8::synapse0x2924aa0() {
   return (neuron0x29097a0()*-0.916939);
}

double NNfunction_NN_2_8::synapse0x2924e20() {
   return (neuron0x2904b50()*0.0406807);
}

double NNfunction_NN_2_8::synapse0x2924e60() {
   return (neuron0x2904e00()*-0.024073);
}

double NNfunction_NN_2_8::synapse0x2924ea0() {
   return (neuron0x2905140()*-0.71252);
}

double NNfunction_NN_2_8::synapse0x2924ee0() {
   return (neuron0x2905480()*0.0109551);
}

double NNfunction_NN_2_8::synapse0x2924f20() {
   return (neuron0x29057c0()*0.0692066);
}

double NNfunction_NN_2_8::synapse0x2924f60() {
   return (neuron0x2905b00()*-0.016659);
}

double NNfunction_NN_2_8::synapse0x2924fa0() {
   return (neuron0x2905e40()*0.0279108);
}

double NNfunction_NN_2_8::synapse0x2924fe0() {
   return (neuron0x2906180()*0.125117);
}

double NNfunction_NN_2_8::synapse0x2925020() {
   return (neuron0x29064c0()*-0.0557329);
}

double NNfunction_NN_2_8::synapse0x2925060() {
   return (neuron0x2906800()*0.169663);
}

double NNfunction_NN_2_8::synapse0x29250a0() {
   return (neuron0x2906b40()*-0.0402369);
}

double NNfunction_NN_2_8::synapse0x29250e0() {
   return (neuron0x2906e80()*-0.522489);
}

double NNfunction_NN_2_8::synapse0x2925120() {
   return (neuron0x29071c0()*0.149886);
}

double NNfunction_NN_2_8::synapse0x2925160() {
   return (neuron0x2907500()*0.104051);
}

double NNfunction_NN_2_8::synapse0x29251a0() {
   return (neuron0x2907840()*-0.0649312);
}

double NNfunction_NN_2_8::synapse0x29251e0() {
   return (neuron0x2907b80()*0.0501409);
}

double NNfunction_NN_2_8::synapse0x2924c70() {
   return (neuron0x2907ec0()*-0.0346551);
}

double NNfunction_NN_2_8::synapse0x2924cb0() {
   return (neuron0x2908420()*-0.0448787);
}

double NNfunction_NN_2_8::synapse0x2925330() {
   return (neuron0x2908760()*-0.107677);
}

double NNfunction_NN_2_8::synapse0x2925370() {
   return (neuron0x2908aa0()*0.135475);
}

double NNfunction_NN_2_8::synapse0x29253b0() {
   return (neuron0x2908de0()*0.033082);
}

double NNfunction_NN_2_8::synapse0x29253f0() {
   return (neuron0x2909120()*-0.0370953);
}

double NNfunction_NN_2_8::synapse0x2925430() {
   return (neuron0x2909460()*-0.0298452);
}

double NNfunction_NN_2_8::synapse0x2925470() {
   return (neuron0x29097a0()*-0.498698);
}

double NNfunction_NN_2_8::synapse0x29257f0() {
   return (neuron0x2904b50()*-0.0207056);
}

double NNfunction_NN_2_8::synapse0x2925830() {
   return (neuron0x2904e00()*-0.00650217);
}

double NNfunction_NN_2_8::synapse0x2925870() {
   return (neuron0x2905140()*-1.21431);
}

double NNfunction_NN_2_8::synapse0x29258b0() {
   return (neuron0x2905480()*0.0835412);
}

double NNfunction_NN_2_8::synapse0x29258f0() {
   return (neuron0x29057c0()*0.0153492);
}

double NNfunction_NN_2_8::synapse0x2925930() {
   return (neuron0x2905b00()*-0.0415488);
}

double NNfunction_NN_2_8::synapse0x2925970() {
   return (neuron0x2905e40()*0.0138018);
}

double NNfunction_NN_2_8::synapse0x29259b0() {
   return (neuron0x2906180()*-0.0357636);
}

double NNfunction_NN_2_8::synapse0x29259f0() {
   return (neuron0x29064c0()*0.0337222);
}

double NNfunction_NN_2_8::synapse0x2925a30() {
   return (neuron0x2906800()*-0.0236573);
}

double NNfunction_NN_2_8::synapse0x2925a70() {
   return (neuron0x2906b40()*0.0135606);
}

double NNfunction_NN_2_8::synapse0x2925ab0() {
   return (neuron0x2906e80()*0.0228414);
}

double NNfunction_NN_2_8::synapse0x2925af0() {
   return (neuron0x29071c0()*-0.124538);
}

double NNfunction_NN_2_8::synapse0x2925b30() {
   return (neuron0x2907500()*-0.0277134);
}

double NNfunction_NN_2_8::synapse0x2925b70() {
   return (neuron0x2907840()*0.0292506);
}

double NNfunction_NN_2_8::synapse0x2925bb0() {
   return (neuron0x2907b80()*0.000343148);
}

double NNfunction_NN_2_8::synapse0x2925640() {
   return (neuron0x2907ec0()*0.03944);
}

double NNfunction_NN_2_8::synapse0x2925680() {
   return (neuron0x2908420()*-0.0222063);
}

double NNfunction_NN_2_8::synapse0x2925d00() {
   return (neuron0x2908760()*-0.0599599);
}

double NNfunction_NN_2_8::synapse0x2925d40() {
   return (neuron0x2908aa0()*-0.0375719);
}

double NNfunction_NN_2_8::synapse0x2925d80() {
   return (neuron0x2908de0()*0.00692288);
}

double NNfunction_NN_2_8::synapse0x2925dc0() {
   return (neuron0x2909120()*-0.00880836);
}

double NNfunction_NN_2_8::synapse0x2925e00() {
   return (neuron0x2909460()*-0.0108862);
}

double NNfunction_NN_2_8::synapse0x2925e40() {
   return (neuron0x29097a0()*-0.411372);
}

double NNfunction_NN_2_8::synapse0x29261c0() {
   return (neuron0x2904b50()*-0.00124065);
}

double NNfunction_NN_2_8::synapse0x2926200() {
   return (neuron0x2904e00()*12.0303);
}

double NNfunction_NN_2_8::synapse0x2926240() {
   return (neuron0x2905140()*-0.45472);
}

double NNfunction_NN_2_8::synapse0x2926280() {
   return (neuron0x2905480()*-0.0196466);
}

double NNfunction_NN_2_8::synapse0x29262c0() {
   return (neuron0x29057c0()*-0.00202115);
}

double NNfunction_NN_2_8::synapse0x2926300() {
   return (neuron0x2905b00()*0.00302755);
}

double NNfunction_NN_2_8::synapse0x2926340() {
   return (neuron0x2905e40()*-0.0203759);
}

double NNfunction_NN_2_8::synapse0x2926380() {
   return (neuron0x2906180()*-0.00437646);
}

double NNfunction_NN_2_8::synapse0x29263c0() {
   return (neuron0x29064c0()*-0.00233721);
}

double NNfunction_NN_2_8::synapse0x2926400() {
   return (neuron0x2906800()*0.000654514);
}

double NNfunction_NN_2_8::synapse0x2926440() {
   return (neuron0x2906b40()*-0.0026001);
}

double NNfunction_NN_2_8::synapse0x2926480() {
   return (neuron0x2906e80()*1.42393);
}

double NNfunction_NN_2_8::synapse0x29264c0() {
   return (neuron0x29071c0()*0.0146021);
}

double NNfunction_NN_2_8::synapse0x2926500() {
   return (neuron0x2907500()*0.0227968);
}

double NNfunction_NN_2_8::synapse0x2926540() {
   return (neuron0x2907840()*-0.0132838);
}

double NNfunction_NN_2_8::synapse0x2926580() {
   return (neuron0x2907b80()*0.00359919);
}

double NNfunction_NN_2_8::synapse0x2926010() {
   return (neuron0x2907ec0()*0.0140433);
}

double NNfunction_NN_2_8::synapse0x2926050() {
   return (neuron0x2908420()*-0.000705568);
}

double NNfunction_NN_2_8::synapse0x29266d0() {
   return (neuron0x2908760()*0.00919967);
}

double NNfunction_NN_2_8::synapse0x2926710() {
   return (neuron0x2908aa0()*-0.0131619);
}

double NNfunction_NN_2_8::synapse0x2926750() {
   return (neuron0x2908de0()*-0.0131465);
}

double NNfunction_NN_2_8::synapse0x2926790() {
   return (neuron0x2909120()*0.0119835);
}

double NNfunction_NN_2_8::synapse0x29267d0() {
   return (neuron0x2909460()*-0.00397615);
}

double NNfunction_NN_2_8::synapse0x2926810() {
   return (neuron0x29097a0()*0.139156);
}

double NNfunction_NN_2_8::synapse0x2926b90() {
   return (neuron0x2904b50()*-0.0769767);
}

double NNfunction_NN_2_8::synapse0x2926bd0() {
   return (neuron0x2904e00()*6.96969);
}

double NNfunction_NN_2_8::synapse0x2926c10() {
   return (neuron0x2905140()*0.603954);
}

double NNfunction_NN_2_8::synapse0x2926c50() {
   return (neuron0x2905480()*-0.0214839);
}

double NNfunction_NN_2_8::synapse0x2926c90() {
   return (neuron0x29057c0()*0.058281);
}

double NNfunction_NN_2_8::synapse0x2926cd0() {
   return (neuron0x2905b00()*0.0222791);
}

double NNfunction_NN_2_8::synapse0x2926d10() {
   return (neuron0x2905e40()*0.0414433);
}

double NNfunction_NN_2_8::synapse0x2926d50() {
   return (neuron0x2906180()*-0.00272978);
}

double NNfunction_NN_2_8::synapse0x2926d90() {
   return (neuron0x29064c0()*-0.0312863);
}

double NNfunction_NN_2_8::synapse0x2926dd0() {
   return (neuron0x2906800()*-0.0224307);
}

double NNfunction_NN_2_8::synapse0x2926e10() {
   return (neuron0x2906b40()*-0.0303499);
}

double NNfunction_NN_2_8::synapse0x2926e50() {
   return (neuron0x2906e80()*-0.68574);
}

double NNfunction_NN_2_8::synapse0x2926e90() {
   return (neuron0x29071c0()*0.00605547);
}

double NNfunction_NN_2_8::synapse0x2926ed0() {
   return (neuron0x2907500()*0.00339171);
}

double NNfunction_NN_2_8::synapse0x2926f10() {
   return (neuron0x2907840()*-0.0731686);
}

double NNfunction_NN_2_8::synapse0x2926f50() {
   return (neuron0x2907b80()*0.0112812);
}

double NNfunction_NN_2_8::synapse0x29269e0() {
   return (neuron0x2907ec0()*0.0365275);
}

double NNfunction_NN_2_8::synapse0x2926a20() {
   return (neuron0x2908420()*0.0245572);
}

double NNfunction_NN_2_8::synapse0x29270a0() {
   return (neuron0x2908760()*0.00669482);
}

double NNfunction_NN_2_8::synapse0x29270e0() {
   return (neuron0x2908aa0()*-0.0391336);
}

double NNfunction_NN_2_8::synapse0x2927120() {
   return (neuron0x2908de0()*0.0249215);
}

double NNfunction_NN_2_8::synapse0x2927160() {
   return (neuron0x2909120()*-0.0408246);
}

double NNfunction_NN_2_8::synapse0x29271a0() {
   return (neuron0x2909460()*-0.0157393);
}

double NNfunction_NN_2_8::synapse0x29271e0() {
   return (neuron0x29097a0()*-0.951981);
}

double NNfunction_NN_2_8::synapse0x290fc90() {
   return (neuron0x2904b50()*0.399886);
}

double NNfunction_NN_2_8::synapse0x290fcd0() {
   return (neuron0x2904e00()*0.0723965);
}

double NNfunction_NN_2_8::synapse0x290fd10() {
   return (neuron0x2905140()*0.240324);
}

double NNfunction_NN_2_8::synapse0x290fd50() {
   return (neuron0x2905480()*-0.00732879);
}

double NNfunction_NN_2_8::synapse0x290fd90() {
   return (neuron0x29057c0()*0.469878);
}

double NNfunction_NN_2_8::synapse0x290fdd0() {
   return (neuron0x2905b00()*-0.0565936);
}

double NNfunction_NN_2_8::synapse0x290fe10() {
   return (neuron0x2905e40()*0.199953);
}

double NNfunction_NN_2_8::synapse0x290fe50() {
   return (neuron0x2906180()*-0.00904646);
}

double NNfunction_NN_2_8::synapse0x2927970() {
   return (neuron0x29064c0()*0.144184);
}

double NNfunction_NN_2_8::synapse0x29279b0() {
   return (neuron0x2906800()*-0.132576);
}

double NNfunction_NN_2_8::synapse0x29279f0() {
   return (neuron0x2906b40()*0.0419657);
}

double NNfunction_NN_2_8::synapse0x2927a30() {
   return (neuron0x2906e80()*0.490232);
}

double NNfunction_NN_2_8::synapse0x2927a70() {
   return (neuron0x29071c0()*-0.0824088);
}

double NNfunction_NN_2_8::synapse0x2927ab0() {
   return (neuron0x2907500()*0.0370971);
}

double NNfunction_NN_2_8::synapse0x2927af0() {
   return (neuron0x2907840()*-0.0423684);
}

double NNfunction_NN_2_8::synapse0x2927b30() {
   return (neuron0x2907b80()*0.0920002);
}

double NNfunction_NN_2_8::synapse0x29273b0() {
   return (neuron0x2907ec0()*0.251548);
}

double NNfunction_NN_2_8::synapse0x29273f0() {
   return (neuron0x2908420()*0.0049623);
}

double NNfunction_NN_2_8::synapse0x2927c80() {
   return (neuron0x2908760()*-0.146165);
}

double NNfunction_NN_2_8::synapse0x2927cc0() {
   return (neuron0x2908aa0()*0.0182334);
}

double NNfunction_NN_2_8::synapse0x2927d00() {
   return (neuron0x2908de0()*0.273278);
}

double NNfunction_NN_2_8::synapse0x2927d40() {
   return (neuron0x2909120()*0.177483);
}

double NNfunction_NN_2_8::synapse0x2927d80() {
   return (neuron0x2909460()*0.00201727);
}

double NNfunction_NN_2_8::synapse0x2927dc0() {
   return (neuron0x29097a0()*0.702267);
}

double NNfunction_NN_2_8::synapse0x2928140() {
   return (neuron0x2904b50()*0.0561647);
}

double NNfunction_NN_2_8::synapse0x2928180() {
   return (neuron0x2904e00()*-0.0222857);
}

double NNfunction_NN_2_8::synapse0x29281c0() {
   return (neuron0x2905140()*0.144677);
}

double NNfunction_NN_2_8::synapse0x2928200() {
   return (neuron0x2905480()*-0.00546705);
}

double NNfunction_NN_2_8::synapse0x2928240() {
   return (neuron0x29057c0()*-0.00784026);
}

double NNfunction_NN_2_8::synapse0x2928280() {
   return (neuron0x2905b00()*0.00945679);
}

double NNfunction_NN_2_8::synapse0x29282c0() {
   return (neuron0x2905e40()*0.0109302);
}

double NNfunction_NN_2_8::synapse0x2928300() {
   return (neuron0x2906180()*-3.35477e-05);
}

double NNfunction_NN_2_8::synapse0x2928340() {
   return (neuron0x29064c0()*-0.00562395);
}

double NNfunction_NN_2_8::synapse0x2928380() {
   return (neuron0x2906800()*0.014671);
}

double NNfunction_NN_2_8::synapse0x29283c0() {
   return (neuron0x2906b40()*0.0205589);
}

double NNfunction_NN_2_8::synapse0x2928400() {
   return (neuron0x2906e80()*0.00853264);
}

double NNfunction_NN_2_8::synapse0x2928440() {
   return (neuron0x29071c0()*-0.00844138);
}

double NNfunction_NN_2_8::synapse0x2928480() {
   return (neuron0x2907500()*0.0217616);
}

double NNfunction_NN_2_8::synapse0x29284c0() {
   return (neuron0x2907840()*-0.0203888);
}

double NNfunction_NN_2_8::synapse0x2928500() {
   return (neuron0x2907b80()*-0.0177628);
}

double NNfunction_NN_2_8::synapse0x2927f90() {
   return (neuron0x2907ec0()*-0.00978063);
}

double NNfunction_NN_2_8::synapse0x2927fd0() {
   return (neuron0x2908420()*-0.0123127);
}

double NNfunction_NN_2_8::synapse0x2928650() {
   return (neuron0x2908760()*0.00064155);
}

double NNfunction_NN_2_8::synapse0x2928690() {
   return (neuron0x2908aa0()*0.00143675);
}

double NNfunction_NN_2_8::synapse0x29286d0() {
   return (neuron0x2908de0()*-0.00245484);
}

double NNfunction_NN_2_8::synapse0x2928710() {
   return (neuron0x2909120()*-0.00631313);
}

double NNfunction_NN_2_8::synapse0x2928750() {
   return (neuron0x2909460()*0.0234769);
}

double NNfunction_NN_2_8::synapse0x2928790() {
   return (neuron0x29097a0()*6.72703);
}

double NNfunction_NN_2_8::synapse0x2928b10() {
   return (neuron0x2904b50()*0.00303554);
}

double NNfunction_NN_2_8::synapse0x2928b50() {
   return (neuron0x2904e00()*-0.0456991);
}

double NNfunction_NN_2_8::synapse0x2928b90() {
   return (neuron0x2905140()*-0.938176);
}

double NNfunction_NN_2_8::synapse0x2928bd0() {
   return (neuron0x2905480()*-0.0239912);
}

double NNfunction_NN_2_8::synapse0x2928c10() {
   return (neuron0x29057c0()*0.00684284);
}

double NNfunction_NN_2_8::synapse0x2928c50() {
   return (neuron0x2905b00()*-0.0167683);
}

double NNfunction_NN_2_8::synapse0x2928c90() {
   return (neuron0x2905e40()*0.000300293);
}

double NNfunction_NN_2_8::synapse0x2928cd0() {
   return (neuron0x2906180()*0.00608922);
}

double NNfunction_NN_2_8::synapse0x2928d10() {
   return (neuron0x29064c0()*-0.0108367);
}

double NNfunction_NN_2_8::synapse0x2928d50() {
   return (neuron0x2906800()*0.0141536);
}

double NNfunction_NN_2_8::synapse0x2928d90() {
   return (neuron0x2906b40()*0.00577232);
}

double NNfunction_NN_2_8::synapse0x2928dd0() {
   return (neuron0x2906e80()*0.0381259);
}

double NNfunction_NN_2_8::synapse0x2928e10() {
   return (neuron0x29071c0()*0.00461439);
}

double NNfunction_NN_2_8::synapse0x2928e50() {
   return (neuron0x2907500()*-0.0079131);
}

double NNfunction_NN_2_8::synapse0x2928e90() {
   return (neuron0x2907840()*-0.00344711);
}

double NNfunction_NN_2_8::synapse0x2928ed0() {
   return (neuron0x2907b80()*0.016143);
}

double NNfunction_NN_2_8::synapse0x2928960() {
   return (neuron0x2907ec0()*0.0101144);
}

double NNfunction_NN_2_8::synapse0x29289a0() {
   return (neuron0x2908420()*-0.00482876);
}

double NNfunction_NN_2_8::synapse0x29194d0() {
   return (neuron0x2908760()*-0.00755251);
}

double NNfunction_NN_2_8::synapse0x2919510() {
   return (neuron0x2908aa0()*0.0195911);
}

double NNfunction_NN_2_8::synapse0x2919550() {
   return (neuron0x2908de0()*0.0102383);
}

double NNfunction_NN_2_8::synapse0x2919590() {
   return (neuron0x2909120()*-0.0116637);
}

double NNfunction_NN_2_8::synapse0x29195d0() {
   return (neuron0x2909460()*0.000502501);
}

double NNfunction_NN_2_8::synapse0x2919610() {
   return (neuron0x29097a0()*0.453621);
}

double NNfunction_NN_2_8::synapse0x2919990() {
   return (neuron0x2904b50()*0.0260713);
}

double NNfunction_NN_2_8::synapse0x29199d0() {
   return (neuron0x2904e00()*0.135404);
}

double NNfunction_NN_2_8::synapse0x2919a10() {
   return (neuron0x2905140()*-1.18756);
}

double NNfunction_NN_2_8::synapse0x2919a50() {
   return (neuron0x2905480()*-0.0687136);
}

double NNfunction_NN_2_8::synapse0x2919a90() {
   return (neuron0x29057c0()*-0.514433);
}

double NNfunction_NN_2_8::synapse0x2919ad0() {
   return (neuron0x2905b00()*-0.0792138);
}

double NNfunction_NN_2_8::synapse0x2919b10() {
   return (neuron0x2905e40()*0.162733);
}

double NNfunction_NN_2_8::synapse0x2919b50() {
   return (neuron0x2906180()*-0.115324);
}

double NNfunction_NN_2_8::synapse0x2919b90() {
   return (neuron0x29064c0()*-0.306259);
}

double NNfunction_NN_2_8::synapse0x2919bd0() {
   return (neuron0x2906800()*-0.107049);
}

double NNfunction_NN_2_8::synapse0x2919c10() {
   return (neuron0x2906b40()*0.0864306);
}

double NNfunction_NN_2_8::synapse0x2919c50() {
   return (neuron0x2906e80()*-0.785543);
}

double NNfunction_NN_2_8::synapse0x2919c90() {
   return (neuron0x29071c0()*0.0111466);
}

double NNfunction_NN_2_8::synapse0x2919cd0() {
   return (neuron0x2907500()*0.110847);
}

double NNfunction_NN_2_8::synapse0x2919d10() {
   return (neuron0x2907840()*-0.23835);
}

double NNfunction_NN_2_8::synapse0x2919d50() {
   return (neuron0x2907b80()*-0.0411324);
}

double NNfunction_NN_2_8::synapse0x29197e0() {
   return (neuron0x2907ec0()*0.134302);
}

double NNfunction_NN_2_8::synapse0x2919820() {
   return (neuron0x2908420()*0.048093);
}

double NNfunction_NN_2_8::synapse0x2919ea0() {
   return (neuron0x2908760()*-0.0015002);
}

double NNfunction_NN_2_8::synapse0x2919ee0() {
   return (neuron0x2908aa0()*0.180562);
}

double NNfunction_NN_2_8::synapse0x2919f20() {
   return (neuron0x2908de0()*0.00436688);
}

double NNfunction_NN_2_8::synapse0x2919f60() {
   return (neuron0x2909120()*-0.0406741);
}

double NNfunction_NN_2_8::synapse0x2919fa0() {
   return (neuron0x2909460()*-0.010162);
}

double NNfunction_NN_2_8::synapse0x2919fe0() {
   return (neuron0x29097a0()*1.1458);
}

double NNfunction_NN_2_8::synapse0x291a360() {
   return (neuron0x2904b50()*-0.0192618);
}

double NNfunction_NN_2_8::synapse0x291a3a0() {
   return (neuron0x2904e00()*10.293);
}

double NNfunction_NN_2_8::synapse0x291a3e0() {
   return (neuron0x2905140()*0.373512);
}

double NNfunction_NN_2_8::synapse0x291a420() {
   return (neuron0x2905480()*-0.028749);
}

double NNfunction_NN_2_8::synapse0x291a460() {
   return (neuron0x29057c0()*-0.00440331);
}

double NNfunction_NN_2_8::synapse0x291a4a0() {
   return (neuron0x2905b00()*0.00644612);
}

double NNfunction_NN_2_8::synapse0x291a4e0() {
   return (neuron0x2905e40()*-0.00304609);
}

double NNfunction_NN_2_8::synapse0x291a520() {
   return (neuron0x2906180()*-0.00102444);
}

double NNfunction_NN_2_8::synapse0x291a560() {
   return (neuron0x29064c0()*-0.0152591);
}

double NNfunction_NN_2_8::synapse0x291a5a0() {
   return (neuron0x2906800()*-0.0125074);
}

double NNfunction_NN_2_8::synapse0x291a5e0() {
   return (neuron0x2906b40()*0.0015264);
}

double NNfunction_NN_2_8::synapse0x291a620() {
   return (neuron0x2906e80()*-1.02688);
}

double NNfunction_NN_2_8::synapse0x291a660() {
   return (neuron0x29071c0()*0.00644181);
}

double NNfunction_NN_2_8::synapse0x291a6a0() {
   return (neuron0x2907500()*0.0295962);
}

double NNfunction_NN_2_8::synapse0x291a6e0() {
   return (neuron0x2907840()*-0.0107844);
}

double NNfunction_NN_2_8::synapse0x291a720() {
   return (neuron0x2907b80()*0.00474147);
}

double NNfunction_NN_2_8::synapse0x291a1b0() {
   return (neuron0x2907ec0()*-0.0179216);
}

double NNfunction_NN_2_8::synapse0x291a1f0() {
   return (neuron0x2908420()*-0.0369396);
}

double NNfunction_NN_2_8::synapse0x291a870() {
   return (neuron0x2908760()*-0.00853107);
}

double NNfunction_NN_2_8::synapse0x291a8b0() {
   return (neuron0x2908aa0()*-0.01555);
}

double NNfunction_NN_2_8::synapse0x291a8f0() {
   return (neuron0x2908de0()*-0.0229182);
}

double NNfunction_NN_2_8::synapse0x291a930() {
   return (neuron0x2909120()*0.0108143);
}

double NNfunction_NN_2_8::synapse0x291a970() {
   return (neuron0x2909460()*-0.0057407);
}

double NNfunction_NN_2_8::synapse0x291a9b0() {
   return (neuron0x29097a0()*0.0665764);
}

double NNfunction_NN_2_8::synapse0x291ad30() {
   return (neuron0x2904b50()*-0.0766939);
}

double NNfunction_NN_2_8::synapse0x291ad70() {
   return (neuron0x2904e00()*0.120394);
}

double NNfunction_NN_2_8::synapse0x291adb0() {
   return (neuron0x2905140()*1.7982);
}

double NNfunction_NN_2_8::synapse0x291adf0() {
   return (neuron0x2905480()*0.00268863);
}

double NNfunction_NN_2_8::synapse0x291ae30() {
   return (neuron0x29057c0()*-0.00286605);
}

double NNfunction_NN_2_8::synapse0x291ae70() {
   return (neuron0x2905b00()*0.052642);
}

double NNfunction_NN_2_8::synapse0x291aeb0() {
   return (neuron0x2905e40()*0.0618876);
}

double NNfunction_NN_2_8::synapse0x291aef0() {
   return (neuron0x2906180()*-0.0330096);
}

double NNfunction_NN_2_8::synapse0x291af30() {
   return (neuron0x29064c0()*-0.0226778);
}

double NNfunction_NN_2_8::synapse0x291af70() {
   return (neuron0x2906800()*0.00203363);
}

double NNfunction_NN_2_8::synapse0x291afb0() {
   return (neuron0x2906b40()*-0.0555505);
}

double NNfunction_NN_2_8::synapse0x291aff0() {
   return (neuron0x2906e80()*1.1297);
}

double NNfunction_NN_2_8::synapse0x291b030() {
   return (neuron0x29071c0()*0.0206651);
}

double NNfunction_NN_2_8::synapse0x291b070() {
   return (neuron0x2907500()*0.00173687);
}

double NNfunction_NN_2_8::synapse0x291b0b0() {
   return (neuron0x2907840()*-0.0408093);
}

double NNfunction_NN_2_8::synapse0x291b0f0() {
   return (neuron0x2907b80()*0.00577821);
}

double NNfunction_NN_2_8::synapse0x291ab80() {
   return (neuron0x2907ec0()*-0.0409093);
}

double NNfunction_NN_2_8::synapse0x291abc0() {
   return (neuron0x2908420()*0.0174963);
}

double NNfunction_NN_2_8::synapse0x291b240() {
   return (neuron0x2908760()*-0.0758387);
}

double NNfunction_NN_2_8::synapse0x291b280() {
   return (neuron0x2908aa0()*-0.0319897);
}

double NNfunction_NN_2_8::synapse0x291b2c0() {
   return (neuron0x2908de0()*0.0705863);
}

double NNfunction_NN_2_8::synapse0x291b300() {
   return (neuron0x2909120()*-0.0438403);
}

double NNfunction_NN_2_8::synapse0x291b340() {
   return (neuron0x2909460()*0.0313799);
}

double NNfunction_NN_2_8::synapse0x291b380() {
   return (neuron0x29097a0()*-1.06247);
}

double NNfunction_NN_2_8::synapse0x292d250() {
   return (neuron0x2904b50()*0.173804);
}

double NNfunction_NN_2_8::synapse0x292d290() {
   return (neuron0x2904e00()*-0.0122214);
}

double NNfunction_NN_2_8::synapse0x292d2d0() {
   return (neuron0x2905140()*-1.47654);
}

double NNfunction_NN_2_8::synapse0x292d310() {
   return (neuron0x2905480()*0.0391801);
}

double NNfunction_NN_2_8::synapse0x292d350() {
   return (neuron0x29057c0()*0.0321994);
}

double NNfunction_NN_2_8::synapse0x292d390() {
   return (neuron0x2905b00()*0.0460084);
}

double NNfunction_NN_2_8::synapse0x292d3d0() {
   return (neuron0x2905e40()*-0.000439056);
}

double NNfunction_NN_2_8::synapse0x292d410() {
   return (neuron0x2906180()*-0.0206167);
}

double NNfunction_NN_2_8::synapse0x292d450() {
   return (neuron0x29064c0()*-0.0064776);
}

double NNfunction_NN_2_8::synapse0x292d490() {
   return (neuron0x2906800()*-0.024394);
}

double NNfunction_NN_2_8::synapse0x292d4d0() {
   return (neuron0x2906b40()*-0.016977);
}

double NNfunction_NN_2_8::synapse0x292d510() {
   return (neuron0x2906e80()*0.25187);
}

double NNfunction_NN_2_8::synapse0x292d550() {
   return (neuron0x29071c0()*-0.0103847);
}

double NNfunction_NN_2_8::synapse0x292d590() {
   return (neuron0x2907500()*-0.0588843);
}

double NNfunction_NN_2_8::synapse0x292d5d0() {
   return (neuron0x2907840()*-0.0283116);
}

double NNfunction_NN_2_8::synapse0x292d610() {
   return (neuron0x2907b80()*0.0145227);
}

double NNfunction_NN_2_8::synapse0x291b3c0() {
   return (neuron0x2907ec0()*-0.00487404);
}

double NNfunction_NN_2_8::synapse0x291b400() {
   return (neuron0x2908420()*-0.0355923);
}

double NNfunction_NN_2_8::synapse0x292d760() {
   return (neuron0x2908760()*-0.0218488);
}

double NNfunction_NN_2_8::synapse0x292d7a0() {
   return (neuron0x2908aa0()*-0.0434361);
}

double NNfunction_NN_2_8::synapse0x292d7e0() {
   return (neuron0x2908de0()*-0.00666195);
}

double NNfunction_NN_2_8::synapse0x292d820() {
   return (neuron0x2909120()*0.0125666);
}

double NNfunction_NN_2_8::synapse0x292d860() {
   return (neuron0x2909460()*0.0233439);
}

double NNfunction_NN_2_8::synapse0x292d8a0() {
   return (neuron0x29097a0()*-2.72599);
}

double NNfunction_NN_2_8::synapse0x292dc20() {
   return (neuron0x2904b50()*0.0543159);
}

double NNfunction_NN_2_8::synapse0x292dc60() {
   return (neuron0x2904e00()*-0.115833);
}

double NNfunction_NN_2_8::synapse0x292dca0() {
   return (neuron0x2905140()*0.976024);
}

double NNfunction_NN_2_8::synapse0x292dce0() {
   return (neuron0x2905480()*0.00412027);
}

double NNfunction_NN_2_8::synapse0x292dd20() {
   return (neuron0x29057c0()*0.0406457);
}

double NNfunction_NN_2_8::synapse0x292dd60() {
   return (neuron0x2905b00()*0.039794);
}

double NNfunction_NN_2_8::synapse0x292dda0() {
   return (neuron0x2905e40()*0.104531);
}

double NNfunction_NN_2_8::synapse0x292dde0() {
   return (neuron0x2906180()*-0.0133989);
}

double NNfunction_NN_2_8::synapse0x292de20() {
   return (neuron0x29064c0()*0.0151521);
}

double NNfunction_NN_2_8::synapse0x292de60() {
   return (neuron0x2906800()*-0.0512961);
}

double NNfunction_NN_2_8::synapse0x292dea0() {
   return (neuron0x2906b40()*-0.0219586);
}

double NNfunction_NN_2_8::synapse0x292dee0() {
   return (neuron0x2906e80()*-0.831523);
}

double NNfunction_NN_2_8::synapse0x292df20() {
   return (neuron0x29071c0()*-0.0107095);
}

double NNfunction_NN_2_8::synapse0x292df60() {
   return (neuron0x2907500()*0.0324161);
}

double NNfunction_NN_2_8::synapse0x292dfa0() {
   return (neuron0x2907840()*-0.0190283);
}

double NNfunction_NN_2_8::synapse0x292dfe0() {
   return (neuron0x2907b80()*0.00390919);
}

double NNfunction_NN_2_8::synapse0x292da70() {
   return (neuron0x2907ec0()*0.0473684);
}

double NNfunction_NN_2_8::synapse0x292dab0() {
   return (neuron0x2908420()*-0.129312);
}

double NNfunction_NN_2_8::synapse0x292e130() {
   return (neuron0x2908760()*-0.0478929);
}

double NNfunction_NN_2_8::synapse0x292e170() {
   return (neuron0x2908aa0()*-0.0543071);
}

double NNfunction_NN_2_8::synapse0x292e1b0() {
   return (neuron0x2908de0()*-0.0633219);
}

double NNfunction_NN_2_8::synapse0x292e1f0() {
   return (neuron0x2909120()*0.11249);
}

double NNfunction_NN_2_8::synapse0x292e230() {
   return (neuron0x2909460()*0.0941921);
}

double NNfunction_NN_2_8::synapse0x292e270() {
   return (neuron0x29097a0()*2.00818);
}

double NNfunction_NN_2_8::synapse0x292e5f0() {
   return (neuron0x2904b50()*-0.0596192);
}

double NNfunction_NN_2_8::synapse0x292e630() {
   return (neuron0x2904e00()*-0.0348079);
}

double NNfunction_NN_2_8::synapse0x292e670() {
   return (neuron0x2905140()*-0.451104);
}

double NNfunction_NN_2_8::synapse0x292e6b0() {
   return (neuron0x2905480()*1.66657);
}

double NNfunction_NN_2_8::synapse0x292e6f0() {
   return (neuron0x29057c0()*0.0576701);
}

double NNfunction_NN_2_8::synapse0x292e730() {
   return (neuron0x2905b00()*0.0595349);
}

double NNfunction_NN_2_8::synapse0x292e770() {
   return (neuron0x2905e40()*0.1003);
}

double NNfunction_NN_2_8::synapse0x292e7b0() {
   return (neuron0x2906180()*0.0233649);
}

double NNfunction_NN_2_8::synapse0x292e7f0() {
   return (neuron0x29064c0()*-0.124515);
}

double NNfunction_NN_2_8::synapse0x292e830() {
   return (neuron0x2906800()*-0.0475812);
}

double NNfunction_NN_2_8::synapse0x292e870() {
   return (neuron0x2906b40()*-0.0292351);
}

double NNfunction_NN_2_8::synapse0x292e8b0() {
   return (neuron0x2906e80()*0.179933);
}

double NNfunction_NN_2_8::synapse0x292e8f0() {
   return (neuron0x29071c0()*0.196096);
}

double NNfunction_NN_2_8::synapse0x292e930() {
   return (neuron0x2907500()*-0.0360917);
}

double NNfunction_NN_2_8::synapse0x292e970() {
   return (neuron0x2907840()*0.168147);
}

double NNfunction_NN_2_8::synapse0x292e9b0() {
   return (neuron0x2907b80()*-0.0561991);
}

double NNfunction_NN_2_8::synapse0x292e440() {
   return (neuron0x2907ec0()*-0.133074);
}

double NNfunction_NN_2_8::synapse0x292e480() {
   return (neuron0x2908420()*0.122101);
}

double NNfunction_NN_2_8::synapse0x292eb00() {
   return (neuron0x2908760()*0.0284106);
}

double NNfunction_NN_2_8::synapse0x292eb40() {
   return (neuron0x2908aa0()*-0.110328);
}

double NNfunction_NN_2_8::synapse0x292eb80() {
   return (neuron0x2908de0()*0.0632186);
}

double NNfunction_NN_2_8::synapse0x292ebc0() {
   return (neuron0x2909120()*0.0222634);
}

double NNfunction_NN_2_8::synapse0x292ec00() {
   return (neuron0x2909460()*-0.103866);
}

double NNfunction_NN_2_8::synapse0x292ec40() {
   return (neuron0x29097a0()*-0.497646);
}

double NNfunction_NN_2_8::synapse0x292efc0() {
   return (neuron0x2904b50()*-0.203886);
}

double NNfunction_NN_2_8::synapse0x292f000() {
   return (neuron0x2904e00()*-0.0222304);
}

double NNfunction_NN_2_8::synapse0x292f040() {
   return (neuron0x2905140()*-0.523437);
}

double NNfunction_NN_2_8::synapse0x292f080() {
   return (neuron0x2905480()*-0.126345);
}

double NNfunction_NN_2_8::synapse0x292f0c0() {
   return (neuron0x29057c0()*-0.041417);
}

double NNfunction_NN_2_8::synapse0x292f100() {
   return (neuron0x2905b00()*0.108813);
}

double NNfunction_NN_2_8::synapse0x292f140() {
   return (neuron0x2905e40()*0.0372193);
}

double NNfunction_NN_2_8::synapse0x292f180() {
   return (neuron0x2906180()*-0.0670868);
}

double NNfunction_NN_2_8::synapse0x292f1c0() {
   return (neuron0x29064c0()*-0.0794488);
}

double NNfunction_NN_2_8::synapse0x292f200() {
   return (neuron0x2906800()*-0.0634442);
}

double NNfunction_NN_2_8::synapse0x292f240() {
   return (neuron0x2906b40()*-0.0382506);
}

double NNfunction_NN_2_8::synapse0x292f280() {
   return (neuron0x2906e80()*0.528999);
}

double NNfunction_NN_2_8::synapse0x292f2c0() {
   return (neuron0x29071c0()*0.990372);
}

double NNfunction_NN_2_8::synapse0x292f300() {
   return (neuron0x2907500()*0.133239);
}

double NNfunction_NN_2_8::synapse0x292f340() {
   return (neuron0x2907840()*0.0707753);
}

double NNfunction_NN_2_8::synapse0x292f380() {
   return (neuron0x2907b80()*0.0793759);
}

double NNfunction_NN_2_8::synapse0x292ee10() {
   return (neuron0x2907ec0()*-0.139843);
}

double NNfunction_NN_2_8::synapse0x292ee50() {
   return (neuron0x2908420()*0.108742);
}

double NNfunction_NN_2_8::synapse0x292f4d0() {
   return (neuron0x2908760()*0.0419017);
}

double NNfunction_NN_2_8::synapse0x292f510() {
   return (neuron0x2908aa0()*-0.15082);
}

double NNfunction_NN_2_8::synapse0x292f550() {
   return (neuron0x2908de0()*0.146748);
}

double NNfunction_NN_2_8::synapse0x292f590() {
   return (neuron0x2909120()*0.179925);
}

double NNfunction_NN_2_8::synapse0x292f5d0() {
   return (neuron0x2909460()*0.0811081);
}

double NNfunction_NN_2_8::synapse0x292f610() {
   return (neuron0x29097a0()*0.771754);
}

double NNfunction_NN_2_8::synapse0x290aa60() {
   return (neuron0x2909c10()*0.35575);
}

double NNfunction_NN_2_8::synapse0x290aaa0() {
   return (neuron0x290a450()*-0.534623);
}

double NNfunction_NN_2_8::synapse0x290bfc0() {
   return (neuron0x290af30()*0.78288);
}

double NNfunction_NN_2_8::synapse0x290c000() {
   return (neuron0x26c5810()*0.168181);
}

double NNfunction_NN_2_8::synapse0x290da90() {
   return (neuron0x290bd10()*0.350109);
}

double NNfunction_NN_2_8::synapse0x290dad0() {
   return (neuron0x290d7e0()*-0.335466);
}

double NNfunction_NN_2_8::synapse0x290e860() {
   return (neuron0x290e5b0()*-1.56085);
}

double NNfunction_NN_2_8::synapse0x290e8a0() {
   return (neuron0x290ef80()*0.685912);
}

double NNfunction_NN_2_8::synapse0x290f230() {
   return (neuron0x290f950()*0.143535);
}

double NNfunction_NN_2_8::synapse0x290f270() {
   return (neuron0x2910430()*0.491287);
}

double NNfunction_NN_2_8::synapse0x290fc00() {
   return (neuron0x2910e00()*0.21883);
}

double NNfunction_NN_2_8::synapse0x290fc40() {
   return (neuron0x290dee0()*1.14851);
}

double NNfunction_NN_2_8::synapse0x29106e0() {
   return (neuron0x29129b0()*-0.439199);
}

double NNfunction_NN_2_8::synapse0x2910720() {
   return (neuron0x2913380()*0.680946);
}

double NNfunction_NN_2_8::synapse0x29110b0() {
   return (neuron0x2913d50()*-0.901458);
}

double NNfunction_NN_2_8::synapse0x29110f0() {
   return (neuron0x2914720()*0.621875);
}

double NNfunction_NN_2_8::synapse0x290e190() {
   return (neuron0x2916530()*1.57796);
}

double NNfunction_NN_2_8::synapse0x290e1d0() {
   return (neuron0x2916810()*-1.70289);
}

double NNfunction_NN_2_8::synapse0x2912c60() {
   return (neuron0x29171e0()*-0.462818);
}

double NNfunction_NN_2_8::synapse0x2912ca0() {
   return (neuron0x2917bb0()*0.195397);
}

double NNfunction_NN_2_8::synapse0x2913630() {
   return (neuron0x2918580()*-0.277562);
}

double NNfunction_NN_2_8::synapse0x2913670() {
   return (neuron0x2918f50()*0.332135);
}

double NNfunction_NN_2_8::synapse0x2914000() {
   return (neuron0x2911aa0()*2.33532);
}

double NNfunction_NN_2_8::synapse0x2914040() {
   return (neuron0x2912470()*0.186903);
}

double NNfunction_NN_2_8::synapse0x29149d0() {
   return (neuron0x291bce0()*1.6471);
}

double NNfunction_NN_2_8::synapse0x2914a10() {
   return (neuron0x291c6b0()*-0.331962);
}

double NNfunction_NN_2_8::synapse0x2907a60() {
   return (neuron0x291d080()*1.25233);
}

double NNfunction_NN_2_8::synapse0x2907aa0() {
   return (neuron0x291da50()*0.272688);
}

double NNfunction_NN_2_8::synapse0x2916ac0() {
   return (neuron0x291e420()*-0.657178);
}

double NNfunction_NN_2_8::synapse0x2916b00() {
   return (neuron0x291edf0()*-0.266478);
}

double NNfunction_NN_2_8::synapse0x2917490() {
   return (neuron0x291f7c0()*1.70757);
}

double NNfunction_NN_2_8::synapse0x29174d0() {
   return (neuron0x2920190()*-0.380407);
}

double NNfunction_NN_2_8::synapse0x2917e60() {
   return (neuron0x2916220()*1.29776);
}

double NNfunction_NN_2_8::synapse0x2917ea0() {
   return (neuron0x2922d70()*0.708025);
}

double NNfunction_NN_2_8::synapse0x2918830() {
   return (neuron0x2923740()*1.33891);
}

double NNfunction_NN_2_8::synapse0x2918870() {
   return (neuron0x2924110()*-1.38217);
}

double NNfunction_NN_2_8::synapse0x2919200() {
   return (neuron0x2924ae0()*-0.541197);
}

double NNfunction_NN_2_8::synapse0x2919240() {
   return (neuron0x29254b0()*-1.24187);
}

double NNfunction_NN_2_8::synapse0x2911d50() {
   return (neuron0x2925e80()*0.781315);
}

double NNfunction_NN_2_8::synapse0x2911d90() {
   return (neuron0x2926850()*-0.905917);
}

double NNfunction_NN_2_8::synapse0x291b600() {
   return (neuron0x2927220()*0.68365);
}

double NNfunction_NN_2_8::synapse0x291b640() {
   return (neuron0x2927e00()*-0.819781);
}

double NNfunction_NN_2_8::synapse0x291bf90() {
   return (neuron0x29287d0()*-0.220475);
}

double NNfunction_NN_2_8::synapse0x291bfd0() {
   return (neuron0x2919650()*0.372547);
}

double NNfunction_NN_2_8::synapse0x291c960() {
   return (neuron0x291a020()*1.06159);
}

double NNfunction_NN_2_8::synapse0x291c9a0() {
   return (neuron0x291a9f0()*-0.627579);
}

double NNfunction_NN_2_8::synapse0x291d330() {
   return (neuron0x292d030()*-1.53235);
}

double NNfunction_NN_2_8::synapse0x291d370() {
   return (neuron0x292d8e0()*-0.376961);
}

double NNfunction_NN_2_8::synapse0x291dd00() {
   return (neuron0x292e2b0()*0.338064);
}

double NNfunction_NN_2_8::synapse0x291dd40() {
   return (neuron0x292ec80()*-0.0709089);
}

double NNfunction_NN_2_8::synapse0x2920440() {
   return (neuron0x2909c10()*1.3921);
}

double NNfunction_NN_2_8::synapse0x2920480() {
   return (neuron0x290a450()*1.78846);
}

double NNfunction_NN_2_8::synapse0x2915a00() {
   return (neuron0x290af30()*-2.13897);
}

double NNfunction_NN_2_8::synapse0x2915a40() {
   return (neuron0x26c5810()*0.0464765);
}

double NNfunction_NN_2_8::synapse0x2923020() {
   return (neuron0x290bd10()*2.06645);
}

double NNfunction_NN_2_8::synapse0x2923060() {
   return (neuron0x290d7e0()*1.5521);
}

double NNfunction_NN_2_8::synapse0x29239f0() {
   return (neuron0x290e5b0()*2.0567);
}

double NNfunction_NN_2_8::synapse0x2923a30() {
   return (neuron0x290ef80()*2.65108);
}

double NNfunction_NN_2_8::synapse0x29243c0() {
   return (neuron0x290f950()*0.887723);
}

double NNfunction_NN_2_8::synapse0x2924400() {
   return (neuron0x2910430()*-0.801712);
}

double NNfunction_NN_2_8::synapse0x2924d90() {
   return (neuron0x2910e00()*-1.50705);
}

double NNfunction_NN_2_8::synapse0x2924dd0() {
   return (neuron0x290dee0()*-2.11515);
}

double NNfunction_NN_2_8::synapse0x2925760() {
   return (neuron0x29129b0()*-0.0181721);
}

double NNfunction_NN_2_8::synapse0x29257a0() {
   return (neuron0x2913380()*-0.0601919);
}

double NNfunction_NN_2_8::synapse0x2926130() {
   return (neuron0x2913d50()*2.20981);
}

double NNfunction_NN_2_8::synapse0x2926170() {
   return (neuron0x2914720()*-1.39406);
}

double NNfunction_NN_2_8::synapse0x2926b00() {
   return (neuron0x2916530()*-0.512373);
}

double NNfunction_NN_2_8::synapse0x2926b40() {
   return (neuron0x2916810()*1.76626);
}

double NNfunction_NN_2_8::synapse0x29274d0() {
   return (neuron0x29171e0()*-1.8477);
}

double NNfunction_NN_2_8::synapse0x2927510() {
   return (neuron0x2917bb0()*0.336783);
}

double NNfunction_NN_2_8::synapse0x29280b0() {
   return (neuron0x2918580()*-0.429412);
}

double NNfunction_NN_2_8::synapse0x29280f0() {
   return (neuron0x2918f50()*-1.71067);
}

double NNfunction_NN_2_8::synapse0x2928a80() {
   return (neuron0x2911aa0()*0.693892);
}

double NNfunction_NN_2_8::synapse0x2928ac0() {
   return (neuron0x2912470()*-0.788694);
}

double NNfunction_NN_2_8::synapse0x2919900() {
   return (neuron0x291bce0()*0.688626);
}

double NNfunction_NN_2_8::synapse0x2919940() {
   return (neuron0x291c6b0()*-0.0864814);
}

double NNfunction_NN_2_8::synapse0x291a2d0() {
   return (neuron0x291d080()*-4.37547);
}

double NNfunction_NN_2_8::synapse0x291a310() {
   return (neuron0x291da50()*0.19804);
}

double NNfunction_NN_2_8::synapse0x291aca0() {
   return (neuron0x291e420()*0.675611);
}

double NNfunction_NN_2_8::synapse0x291ace0() {
   return (neuron0x291edf0()*-0.756527);
}

double NNfunction_NN_2_8::synapse0x292d1c0() {
   return (neuron0x291f7c0()*2.77071);
}

double NNfunction_NN_2_8::synapse0x292d200() {
   return (neuron0x2920190()*-1.11821);
}

double NNfunction_NN_2_8::synapse0x292db90() {
   return (neuron0x2916220()*-1.36929);
}

double NNfunction_NN_2_8::synapse0x292dbd0() {
   return (neuron0x2922d70()*-1.33006);
}

double NNfunction_NN_2_8::synapse0x292e560() {
   return (neuron0x2923740()*-1.01731);
}

double NNfunction_NN_2_8::synapse0x292e5a0() {
   return (neuron0x2924110()*1.72645);
}

double NNfunction_NN_2_8::synapse0x292ef30() {
   return (neuron0x2924ae0()*1.75978);
}

double NNfunction_NN_2_8::synapse0x292ef70() {
   return (neuron0x29254b0()*0.0905683);
}

double NNfunction_NN_2_8::synapse0x2909ec0() {
   return (neuron0x2925e80()*-9.60597);
}

double NNfunction_NN_2_8::synapse0x2909f00() {
   return (neuron0x2926850()*1.15369);
}

double NNfunction_NN_2_8::synapse0x291e6d0() {
   return (neuron0x2927220()*0.737071);
}

double NNfunction_NN_2_8::synapse0x291e710() {
   return (neuron0x2927e00()*-1.67001);
}

double NNfunction_NN_2_8::synapse0x292f650() {
   return (neuron0x29287d0()*-2.99174);
}

double NNfunction_NN_2_8::synapse0x292f690() {
   return (neuron0x2919650()*0.605323);
}

double NNfunction_NN_2_8::synapse0x292f6d0() {
   return (neuron0x291a020()*3.88277);
}

double NNfunction_NN_2_8::synapse0x292f710() {
   return (neuron0x291a9f0()*2.3131);
}

double NNfunction_NN_2_8::synapse0x29365c0() {
   return (neuron0x292d030()*0.587089);
}

double NNfunction_NN_2_8::synapse0x2936600() {
   return (neuron0x292d8e0()*-0.458232);
}

double NNfunction_NN_2_8::synapse0x2936640() {
   return (neuron0x292e2b0()*0.714312);
}

double NNfunction_NN_2_8::synapse0x2936680() {
   return (neuron0x292ec80()*-0.839319);
}

double NNfunction_NN_2_8::synapse0x2936a00() {
   return (neuron0x2909c10()*-0.777242);
}

double NNfunction_NN_2_8::synapse0x2936a40() {
   return (neuron0x290a450()*0.772667);
}

double NNfunction_NN_2_8::synapse0x2936a80() {
   return (neuron0x290af30()*-0.705938);
}

double NNfunction_NN_2_8::synapse0x2936ac0() {
   return (neuron0x26c5810()*0.712355);
}

double NNfunction_NN_2_8::synapse0x2936b00() {
   return (neuron0x290bd10()*-1.08073);
}

double NNfunction_NN_2_8::synapse0x2936b40() {
   return (neuron0x290d7e0()*0.719613);
}

double NNfunction_NN_2_8::synapse0x2936b80() {
   return (neuron0x290e5b0()*-1.35109);
}

double NNfunction_NN_2_8::synapse0x2936bc0() {
   return (neuron0x290ef80()*0.669344);
}

double NNfunction_NN_2_8::synapse0x2936c00() {
   return (neuron0x290f950()*-0.0905747);
}

double NNfunction_NN_2_8::synapse0x2936c40() {
   return (neuron0x2910430()*0.21971);
}

double NNfunction_NN_2_8::synapse0x2936c80() {
   return (neuron0x2910e00()*-0.482871);
}

double NNfunction_NN_2_8::synapse0x2936cc0() {
   return (neuron0x290dee0()*-0.419367);
}

double NNfunction_NN_2_8::synapse0x2936d00() {
   return (neuron0x29129b0()*0.148987);
}

double NNfunction_NN_2_8::synapse0x2936d40() {
   return (neuron0x2913380()*1.32811);
}

double NNfunction_NN_2_8::synapse0x2936d80() {
   return (neuron0x2913d50()*-2.63059);
}

double NNfunction_NN_2_8::synapse0x2936dc0() {
   return (neuron0x2914720()*0.754032);
}

double NNfunction_NN_2_8::synapse0x2936850() {
   return (neuron0x2916530()*-0.695085);
}

double NNfunction_NN_2_8::synapse0x2936890() {
   return (neuron0x2916810()*-1.51155);
}

double NNfunction_NN_2_8::synapse0x2936f10() {
   return (neuron0x29171e0()*0.344388);
}

double NNfunction_NN_2_8::synapse0x2936f50() {
   return (neuron0x2917bb0()*0.150472);
}

double NNfunction_NN_2_8::synapse0x2936f90() {
   return (neuron0x2918580()*0.215981);
}

double NNfunction_NN_2_8::synapse0x2936fd0() {
   return (neuron0x2918f50()*-0.0228759);
}

double NNfunction_NN_2_8::synapse0x2937010() {
   return (neuron0x2911aa0()*1.10535);
}

double NNfunction_NN_2_8::synapse0x2937050() {
   return (neuron0x2912470()*1.19723);
}

double NNfunction_NN_2_8::synapse0x2937090() {
   return (neuron0x291bce0()*0.429823);
}

double NNfunction_NN_2_8::synapse0x29370d0() {
   return (neuron0x291c6b0()*0.193868);
}

double NNfunction_NN_2_8::synapse0x2937110() {
   return (neuron0x291d080()*2.32349);
}

double NNfunction_NN_2_8::synapse0x2937150() {
   return (neuron0x291da50()*0.0690672);
}

double NNfunction_NN_2_8::synapse0x2937190() {
   return (neuron0x291e420()*0.718481);
}

double NNfunction_NN_2_8::synapse0x29371d0() {
   return (neuron0x291edf0()*-0.0704424);
}

double NNfunction_NN_2_8::synapse0x2937210() {
   return (neuron0x291f7c0()*2.14591);
}

double NNfunction_NN_2_8::synapse0x2937250() {
   return (neuron0x2920190()*-0.655082);
}

double NNfunction_NN_2_8::synapse0x2936e00() {
   return (neuron0x2916220()*-0.968547);
}

double NNfunction_NN_2_8::synapse0x2936e40() {
   return (neuron0x2922d70()*1.33587);
}

double NNfunction_NN_2_8::synapse0x2936e80() {
   return (neuron0x2923740()*-0.0327131);
}

double NNfunction_NN_2_8::synapse0x2936ec0() {
   return (neuron0x2924110()*-1.50421);
}

double NNfunction_NN_2_8::synapse0x29374a0() {
   return (neuron0x2924ae0()*-0.259962);
}

double NNfunction_NN_2_8::synapse0x29374e0() {
   return (neuron0x29254b0()*-0.646016);
}

double NNfunction_NN_2_8::synapse0x2937520() {
   return (neuron0x2925e80()*0.102907);
}

double NNfunction_NN_2_8::synapse0x2937560() {
   return (neuron0x2926850()*-0.253239);
}

double NNfunction_NN_2_8::synapse0x29375a0() {
   return (neuron0x2927220()*0.0654829);
}

double NNfunction_NN_2_8::synapse0x29375e0() {
   return (neuron0x2927e00()*1.8257);
}

double NNfunction_NN_2_8::synapse0x2937620() {
   return (neuron0x29287d0()*1.10149);
}

double NNfunction_NN_2_8::synapse0x2937660() {
   return (neuron0x2919650()*0.00643387);
}

double NNfunction_NN_2_8::synapse0x29376a0() {
   return (neuron0x291a020()*2.19028);
}

double NNfunction_NN_2_8::synapse0x29376e0() {
   return (neuron0x291a9f0()*-0.697262);
}

double NNfunction_NN_2_8::synapse0x2937720() {
   return (neuron0x292d030()*-0.0428967);
}

double NNfunction_NN_2_8::synapse0x2937760() {
   return (neuron0x292d8e0()*-1.09745);
}

double NNfunction_NN_2_8::synapse0x29377a0() {
   return (neuron0x292e2b0()*0.201565);
}

double NNfunction_NN_2_8::synapse0x29377e0() {
   return (neuron0x292ec80()*0.121725);
}

double NNfunction_NN_2_8::synapse0x2937b60() {
   return (neuron0x2909c10()*-0.730886);
}

double NNfunction_NN_2_8::synapse0x2937ba0() {
   return (neuron0x290a450()*0.567979);
}

double NNfunction_NN_2_8::synapse0x2937be0() {
   return (neuron0x290af30()*-0.987835);
}

double NNfunction_NN_2_8::synapse0x2937c20() {
   return (neuron0x26c5810()*-0.607066);
}

double NNfunction_NN_2_8::synapse0x2937c60() {
   return (neuron0x290bd10()*-0.185695);
}

double NNfunction_NN_2_8::synapse0x2937ca0() {
   return (neuron0x290d7e0()*0.553147);
}

double NNfunction_NN_2_8::synapse0x2937ce0() {
   return (neuron0x290e5b0()*-0.117279);
}

double NNfunction_NN_2_8::synapse0x2937d20() {
   return (neuron0x290ef80()*-0.721685);
}

double NNfunction_NN_2_8::synapse0x2937d60() {
   return (neuron0x290f950()*0.0244603);
}

double NNfunction_NN_2_8::synapse0x2937da0() {
   return (neuron0x2910430()*0.899063);
}

double NNfunction_NN_2_8::synapse0x2937de0() {
   return (neuron0x2910e00()*0.0332297);
}

double NNfunction_NN_2_8::synapse0x2937e20() {
   return (neuron0x290dee0()*0.435957);
}

double NNfunction_NN_2_8::synapse0x2937e60() {
   return (neuron0x29129b0()*-0.0341688);
}

double NNfunction_NN_2_8::synapse0x2937ea0() {
   return (neuron0x2913380()*-0.0230346);
}

double NNfunction_NN_2_8::synapse0x2937ee0() {
   return (neuron0x2913d50()*-0.853643);
}

double NNfunction_NN_2_8::synapse0x2937f20() {
   return (neuron0x2914720()*-0.21123);
}

double NNfunction_NN_2_8::synapse0x29379b0() {
   return (neuron0x2916530()*-0.175758);
}

double NNfunction_NN_2_8::synapse0x29379f0() {
   return (neuron0x2916810()*-0.0577864);
}

double NNfunction_NN_2_8::synapse0x2938070() {
   return (neuron0x29171e0()*0.0962133);
}

double NNfunction_NN_2_8::synapse0x29380b0() {
   return (neuron0x2917bb0()*-0.134017);
}

double NNfunction_NN_2_8::synapse0x29380f0() {
   return (neuron0x2918580()*1.59978);
}

double NNfunction_NN_2_8::synapse0x2938130() {
   return (neuron0x2918f50()*0.215951);
}

double NNfunction_NN_2_8::synapse0x2938170() {
   return (neuron0x2911aa0()*-0.75976);
}

double NNfunction_NN_2_8::synapse0x29381b0() {
   return (neuron0x2912470()*-1.00811);
}

double NNfunction_NN_2_8::synapse0x29381f0() {
   return (neuron0x291bce0()*-0.0826425);
}

double NNfunction_NN_2_8::synapse0x2938230() {
   return (neuron0x291c6b0()*0.0221347);
}

double NNfunction_NN_2_8::synapse0x2938270() {
   return (neuron0x291d080()*-1.31773);
}

double NNfunction_NN_2_8::synapse0x29382b0() {
   return (neuron0x291da50()*-0.124115);
}

double NNfunction_NN_2_8::synapse0x29382f0() {
   return (neuron0x291e420()*0.667754);
}

double NNfunction_NN_2_8::synapse0x2938330() {
   return (neuron0x291edf0()*0.173143);
}

double NNfunction_NN_2_8::synapse0x2938370() {
   return (neuron0x291f7c0()*-0.183881);
}

double NNfunction_NN_2_8::synapse0x29383b0() {
   return (neuron0x2920190()*0.11766);
}

double NNfunction_NN_2_8::synapse0x2937f60() {
   return (neuron0x2916220()*0.339214);
}

double NNfunction_NN_2_8::synapse0x2937fa0() {
   return (neuron0x2922d70()*0.690189);
}

double NNfunction_NN_2_8::synapse0x2937fe0() {
   return (neuron0x2923740()*-1.4182);
}

double NNfunction_NN_2_8::synapse0x2938020() {
   return (neuron0x2924110()*0.0513987);
}

double NNfunction_NN_2_8::synapse0x2938600() {
   return (neuron0x2924ae0()*0.0692228);
}

double NNfunction_NN_2_8::synapse0x2938640() {
   return (neuron0x29254b0()*-0.430977);
}

double NNfunction_NN_2_8::synapse0x2938680() {
   return (neuron0x2925e80()*-0.0635296);
}

double NNfunction_NN_2_8::synapse0x29386c0() {
   return (neuron0x2926850()*-0.0158482);
}

double NNfunction_NN_2_8::synapse0x2938700() {
   return (neuron0x2927220()*-0.818547);
}

double NNfunction_NN_2_8::synapse0x2938740() {
   return (neuron0x2927e00()*0.0768119);
}

double NNfunction_NN_2_8::synapse0x2938780() {
   return (neuron0x29287d0()*-0.694506);
}

double NNfunction_NN_2_8::synapse0x29387c0() {
   return (neuron0x2919650()*-0.0364073);
}

double NNfunction_NN_2_8::synapse0x2938800() {
   return (neuron0x291a020()*-0.812081);
}

double NNfunction_NN_2_8::synapse0x2938840() {
   return (neuron0x291a9f0()*0.900806);
}

double NNfunction_NN_2_8::synapse0x2938880() {
   return (neuron0x292d030()*0.169925);
}

double NNfunction_NN_2_8::synapse0x29388c0() {
   return (neuron0x292d8e0()*0.106551);
}

double NNfunction_NN_2_8::synapse0x2938900() {
   return (neuron0x292e2b0()*0.101815);
}

double NNfunction_NN_2_8::synapse0x2938940() {
   return (neuron0x292ec80()*0.068549);
}

double NNfunction_NN_2_8::synapse0x2938cc0() {
   return (neuron0x2909c10()*-0.249887);
}

double NNfunction_NN_2_8::synapse0x2938d00() {
   return (neuron0x290a450()*-0.304029);
}

double NNfunction_NN_2_8::synapse0x2938d40() {
   return (neuron0x290af30()*2.02348);
}

double NNfunction_NN_2_8::synapse0x2938d80() {
   return (neuron0x26c5810()*-0.347346);
}

double NNfunction_NN_2_8::synapse0x2938dc0() {
   return (neuron0x290bd10()*0.165299);
}

double NNfunction_NN_2_8::synapse0x2938e00() {
   return (neuron0x290d7e0()*-0.257417);
}

double NNfunction_NN_2_8::synapse0x2938e40() {
   return (neuron0x290e5b0()*-0.75353);
}

double NNfunction_NN_2_8::synapse0x2938e80() {
   return (neuron0x290ef80()*-0.563648);
}

double NNfunction_NN_2_8::synapse0x2938ec0() {
   return (neuron0x290f950()*0.0885754);
}

double NNfunction_NN_2_8::synapse0x2938f00() {
   return (neuron0x2910430()*0.668514);
}

double NNfunction_NN_2_8::synapse0x2938f40() {
   return (neuron0x2910e00()*0.188186);
}

double NNfunction_NN_2_8::synapse0x2938f80() {
   return (neuron0x290dee0()*0.638025);
}

double NNfunction_NN_2_8::synapse0x2938fc0() {
   return (neuron0x29129b0()*-0.115158);
}

double NNfunction_NN_2_8::synapse0x2939000() {
   return (neuron0x2913380()*-0.518411);
}

double NNfunction_NN_2_8::synapse0x2939040() {
   return (neuron0x2913d50()*-0.135685);
}

double NNfunction_NN_2_8::synapse0x2939080() {
   return (neuron0x2914720()*-0.289576);
}

double NNfunction_NN_2_8::synapse0x2938b10() {
   return (neuron0x2916530()*0.398746);
}

double NNfunction_NN_2_8::synapse0x2938b50() {
   return (neuron0x2916810()*0.196412);
}

double NNfunction_NN_2_8::synapse0x29391d0() {
   return (neuron0x29171e0()*0.815402);
}

double NNfunction_NN_2_8::synapse0x2939210() {
   return (neuron0x2917bb0()*-0.0362373);
}

double NNfunction_NN_2_8::synapse0x2939250() {
   return (neuron0x2918580()*0.149036);
}

double NNfunction_NN_2_8::synapse0x2939290() {
   return (neuron0x2918f50()*0.0253053);
}

double NNfunction_NN_2_8::synapse0x29392d0() {
   return (neuron0x2911aa0()*-0.415953);
}

double NNfunction_NN_2_8::synapse0x2939310() {
   return (neuron0x2912470()*0.25717);
}

double NNfunction_NN_2_8::synapse0x2939350() {
   return (neuron0x291bce0()*0.717998);
}

double NNfunction_NN_2_8::synapse0x2939390() {
   return (neuron0x291c6b0()*-0.132879);
}

double NNfunction_NN_2_8::synapse0x29393d0() {
   return (neuron0x291d080()*-1.45591);
}

double NNfunction_NN_2_8::synapse0x2939410() {
   return (neuron0x291da50()*0.00400477);
}

double NNfunction_NN_2_8::synapse0x2939450() {
   return (neuron0x291e420()*0.100636);
}

double NNfunction_NN_2_8::synapse0x2939490() {
   return (neuron0x291edf0()*0.0458734);
}

double NNfunction_NN_2_8::synapse0x29394d0() {
   return (neuron0x291f7c0()*-0.0533283);
}

double NNfunction_NN_2_8::synapse0x2939510() {
   return (neuron0x2920190()*0.173408);
}

double NNfunction_NN_2_8::synapse0x29390c0() {
   return (neuron0x2916220()*0.493279);
}

double NNfunction_NN_2_8::synapse0x2939100() {
   return (neuron0x2922d70()*-0.341707);
}

double NNfunction_NN_2_8::synapse0x2939140() {
   return (neuron0x2923740()*0.049627);
}

double NNfunction_NN_2_8::synapse0x2939180() {
   return (neuron0x2924110()*-0.215632);
}

double NNfunction_NN_2_8::synapse0x2939760() {
   return (neuron0x2924ae0()*-0.077813);
}

double NNfunction_NN_2_8::synapse0x29397a0() {
   return (neuron0x29254b0()*-0.476234);
}

double NNfunction_NN_2_8::synapse0x29397e0() {
   return (neuron0x2925e80()*-0.439927);
}

double NNfunction_NN_2_8::synapse0x2939820() {
   return (neuron0x2926850()*0.0348215);
}

double NNfunction_NN_2_8::synapse0x2939860() {
   return (neuron0x2927220()*0.01241);
}

double NNfunction_NN_2_8::synapse0x29398a0() {
   return (neuron0x2927e00()*0.066279);
}

double NNfunction_NN_2_8::synapse0x29398e0() {
   return (neuron0x29287d0()*1.78048);
}

double NNfunction_NN_2_8::synapse0x2939920() {
   return (neuron0x2919650()*0.00948146);
}

double NNfunction_NN_2_8::synapse0x2939960() {
   return (neuron0x291a020()*-0.909372);
}

double NNfunction_NN_2_8::synapse0x29399a0() {
   return (neuron0x291a9f0()*0.487405);
}

double NNfunction_NN_2_8::synapse0x29399e0() {
   return (neuron0x292d030()*-0.502203);
}

double NNfunction_NN_2_8::synapse0x2939a20() {
   return (neuron0x292d8e0()*0.57499);
}

double NNfunction_NN_2_8::synapse0x2939a60() {
   return (neuron0x292e2b0()*0.0279475);
}

double NNfunction_NN_2_8::synapse0x2939aa0() {
   return (neuron0x292ec80()*-0.0357743);
}

double NNfunction_NN_2_8::synapse0x2939d00() {
   return (neuron0x2935e80()*5.31195);
}

double NNfunction_NN_2_8::synapse0x2939d40() {
   return (neuron0x2936220()*1.48302);
}

double NNfunction_NN_2_8::synapse0x2939d80() {
   return (neuron0x29366c0()*-3.05657);
}

double NNfunction_NN_2_8::synapse0x2939dc0() {
   return (neuron0x2937820()*1.69653);
}

double NNfunction_NN_2_8::synapse0x2939e00() {
   return (neuron0x2938980()*-6.4265);
}

