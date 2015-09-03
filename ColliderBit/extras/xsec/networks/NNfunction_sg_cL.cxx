#include "NNfunction_sg_cL.h"
#include <cmath>

double NNfunction_sg_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4032)/15.1342;
   input1 = (in1 - 29.6756)/947.25;
   input2 = (in2 - 497.985)/561.858;
   input3 = (in3 - 136.733)/692.005;
   input4 = (in4 - 936.284)/831.727;
   input5 = (in5 - 836.356)/824.286;
   input6 = (in6 - 840.619)/822.843;
   input7 = (in7 - 845.813)/810.263;
   input8 = (in8 - 851.357)/849.028;
   input9 = (in9 - 840.736)/837.294;
   input10 = (in10 - 864.455)/836.094;
   input11 = (in11 - 773.531)/746.276;
   input12 = (in12 - 557.158)/467.378;
   input13 = (in13 - 566.139)/458.64;
   input14 = (in14 - 769.37)/706.724;
   input15 = (in15 - 768.386)/704.372;
   input16 = (in16 - 539.365)/479.384;
   input17 = (in17 - 795.387)/772.841;
   input18 = (in18 - 794.803)/776.304;
   input19 = (in19 - 805.528)/745.667;
   input20 = (in20 - -122.664)/466.289;
   input21 = (in21 - -157.548)/1037.89;
   input22 = (in22 - -6.12467)/1067.4;
   input23 = (in23 - -96.0025)/573.137;
   switch(index) {
     case 0:
         return neuron0x38a2600();
     default:
         return 0.;
   }
}

double NNfunction_sg_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.4032)/15.1342;
   input1 = (input[1] - 29.6756)/947.25;
   input2 = (input[2] - 497.985)/561.858;
   input3 = (input[3] - 136.733)/692.005;
   input4 = (input[4] - 936.284)/831.727;
   input5 = (input[5] - 836.356)/824.286;
   input6 = (input[6] - 840.619)/822.843;
   input7 = (input[7] - 845.813)/810.263;
   input8 = (input[8] - 851.357)/849.028;
   input9 = (input[9] - 840.736)/837.294;
   input10 = (input[10] - 864.455)/836.094;
   input11 = (input[11] - 773.531)/746.276;
   input12 = (input[12] - 557.158)/467.378;
   input13 = (input[13] - 566.139)/458.64;
   input14 = (input[14] - 769.37)/706.724;
   input15 = (input[15] - 768.386)/704.372;
   input16 = (input[16] - 539.365)/479.384;
   input17 = (input[17] - 795.387)/772.841;
   input18 = (input[18] - 794.803)/776.304;
   input19 = (input[19] - 805.528)/745.667;
   input20 = (input[20] - -122.664)/466.289;
   input21 = (input[21] - -157.548)/1037.89;
   input22 = (input[22] - -6.12467)/1067.4;
   input23 = (input[23] - -96.0025)/573.137;
   switch(index) {
     case 0:
         return neuron0x38a2600();
     default:
         return 0.;
   }
}

double NNfunction_sg_cL::neuron0x386d670() {
   return input0;
}

double NNfunction_sg_cL::neuron0x386d920() {
   return input1;
}

double NNfunction_sg_cL::neuron0x386dc60() {
   return input2;
}

double NNfunction_sg_cL::neuron0x386dfa0() {
   return input3;
}

double NNfunction_sg_cL::neuron0x386e2e0() {
   return input4;
}

double NNfunction_sg_cL::neuron0x386e620() {
   return input5;
}

double NNfunction_sg_cL::neuron0x386e960() {
   return input6;
}

double NNfunction_sg_cL::neuron0x386eca0() {
   return input7;
}

double NNfunction_sg_cL::neuron0x386efe0() {
   return input8;
}

double NNfunction_sg_cL::neuron0x386f320() {
   return input9;
}

double NNfunction_sg_cL::neuron0x386f660() {
   return input10;
}

double NNfunction_sg_cL::neuron0x386f9a0() {
   return input11;
}

double NNfunction_sg_cL::neuron0x386fce0() {
   return input12;
}

double NNfunction_sg_cL::neuron0x3870020() {
   return input13;
}

double NNfunction_sg_cL::neuron0x3870360() {
   return input14;
}

double NNfunction_sg_cL::neuron0x38706a0() {
   return input15;
}

double NNfunction_sg_cL::neuron0x38709e0() {
   return input16;
}

double NNfunction_sg_cL::neuron0x3870f40() {
   return input17;
}

double NNfunction_sg_cL::neuron0x3871160() {
   return input18;
}

double NNfunction_sg_cL::neuron0x38714a0() {
   return input19;
}

double NNfunction_sg_cL::neuron0x38717e0() {
   return input20;
}

double NNfunction_sg_cL::neuron0x3871b20() {
   return input21;
}

double NNfunction_sg_cL::neuron0x3871e60() {
   return input22;
}

double NNfunction_sg_cL::neuron0x38721a0() {
   return input23;
}

double NNfunction_sg_cL::input0x3872610() {
   double input = 1.55659;
   input += synapse0x3872950();
   input += synapse0x3872990();
   input += synapse0x38729d0();
   input += synapse0x3872a10();
   input += synapse0x3872a50();
   input += synapse0x3872a90();
   input += synapse0x3872ad0();
   input += synapse0x3872b10();
   input += synapse0x3872b50();
   input += synapse0x3872b90();
   input += synapse0x3872bd0();
   input += synapse0x3872c10();
   input += synapse0x3872c50();
   input += synapse0x3872c90();
   input += synapse0x3872cd0();
   input += synapse0x3872d10();
   input += synapse0x38727a0();
   input += synapse0x38727e0();
   input += synapse0x3629c70();
   input += synapse0x3629cb0();
   input += synapse0x3872e60();
   input += synapse0x3872ea0();
   input += synapse0x3872ee0();
   input += synapse0x3872f20();
   return input;
}

double NNfunction_sg_cL::neuron0x3872610() {
   double input = input0x3872610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3872f60() {
   double input = -0.732776;
   input += synapse0x38732a0();
   input += synapse0x38732e0();
   input += synapse0x3873320();
   input += synapse0x3873360();
   input += synapse0x38733a0();
   input += synapse0x38733e0();
   input += synapse0x3873420();
   input += synapse0x3873460();
   input += synapse0x38734a0();
   input += synapse0x3872d50();
   input += synapse0x3872d90();
   input += synapse0x3872dd0();
   input += synapse0x3872e10();
   input += synapse0x38736f0();
   input += synapse0x3873730();
   input += synapse0x3873770();
   input += synapse0x38730f0();
   input += synapse0x3873130();
   input += synapse0x38738c0();
   input += synapse0x3873900();
   input += synapse0x3873940();
   input += synapse0x3873980();
   input += synapse0x38739c0();
   input += synapse0x3873a00();
   return input;
}

double NNfunction_sg_cL::neuron0x3872f60() {
   double input = input0x3872f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3873a40() {
   double input = 0.793925;
   input += synapse0x3873d80();
   input += synapse0x3873dc0();
   input += synapse0x3873e00();
   input += synapse0x3873e40();
   input += synapse0x3873e80();
   input += synapse0x3873ec0();
   input += synapse0x3873f00();
   input += synapse0x3873f40();
   input += synapse0x3873f80();
   input += synapse0x3873fc0();
   input += synapse0x3874000();
   input += synapse0x3874040();
   input += synapse0x3874080();
   input += synapse0x38740c0();
   input += synapse0x3874100();
   input += synapse0x3874140();
   input += synapse0x3873bd0();
   input += synapse0x3873c10();
   input += synapse0x27b8390();
   input += synapse0x3637720();
   input += synapse0x3637760();
   input += synapse0x3876080();
   input += synapse0x38760c0();
   input += synapse0x386d3b0();
   return input;
}

double NNfunction_sg_cL::neuron0x3873a40() {
   double input = input0x3873a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38734e0() {
   double input = -0.406321;
   input += synapse0x386d480();
   input += synapse0x3637fa0();
   input += synapse0x3873670();
   input += synapse0x38736b0();
   input += synapse0x3874290();
   input += synapse0x38742d0();
   input += synapse0x3874310();
   input += synapse0x3874350();
   input += synapse0x3874390();
   input += synapse0x38743d0();
   input += synapse0x3874410();
   input += synapse0x3874450();
   input += synapse0x3874490();
   input += synapse0x38744d0();
   input += synapse0x3874510();
   input += synapse0x3874550();
   input += synapse0x386d3f0();
   input += synapse0x386d430();
   input += synapse0x38746a0();
   input += synapse0x38746e0();
   input += synapse0x3874720();
   input += synapse0x3874760();
   input += synapse0x38747a0();
   input += synapse0x38747e0();
   return input;
}

double NNfunction_sg_cL::neuron0x38734e0() {
   double input = input0x38734e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3874820() {
   double input = 0.481595;
   input += synapse0x3874b60();
   input += synapse0x3874ba0();
   input += synapse0x3874be0();
   input += synapse0x3874c20();
   input += synapse0x3874c60();
   input += synapse0x3874ca0();
   input += synapse0x3874ce0();
   input += synapse0x3874d20();
   input += synapse0x3874d60();
   input += synapse0x3874da0();
   input += synapse0x3874de0();
   input += synapse0x3874e20();
   input += synapse0x3874e60();
   input += synapse0x3874ea0();
   input += synapse0x3874ee0();
   input += synapse0x3874f20();
   input += synapse0x3875070();
   input += synapse0x38749b0();
   input += synapse0x38749f0();
   input += synapse0x38761c0();
   input += synapse0x3876200();
   input += synapse0x3876240();
   input += synapse0x3876280();
   input += synapse0x38762c0();
   return input;
}

double NNfunction_sg_cL::neuron0x3874820() {
   double input = input0x3874820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3876300() {
   double input = -0.0663463;
   input += synapse0x3876640();
   input += synapse0x3876680();
   input += synapse0x38766c0();
   input += synapse0x3876700();
   input += synapse0x3876740();
   input += synapse0x3876780();
   input += synapse0x38767c0();
   input += synapse0x3876800();
   input += synapse0x3876840();
   input += synapse0x3637a70();
   input += synapse0x3637ab0();
   input += synapse0x3637af0();
   input += synapse0x3637b30();
   input += synapse0x3637b70();
   input += synapse0x3637bb0();
   input += synapse0x3637bf0();
   input += synapse0x3876490();
   input += synapse0x38764d0();
   input += synapse0x3637d40();
   input += synapse0x3637d80();
   input += synapse0x3637dc0();
   input += synapse0x3637e00();
   input += synapse0x3637e40();
   input += synapse0x3877090();
   return input;
}

double NNfunction_sg_cL::neuron0x3876300() {
   double input = input0x3876300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38770d0() {
   double input = 0.0840915;
   input += synapse0x3877410();
   input += synapse0x3877450();
   input += synapse0x3877490();
   input += synapse0x38774d0();
   input += synapse0x3877510();
   input += synapse0x3877550();
   input += synapse0x3877590();
   input += synapse0x38775d0();
   input += synapse0x3877610();
   input += synapse0x3877650();
   input += synapse0x3877690();
   input += synapse0x38776d0();
   input += synapse0x3877710();
   input += synapse0x3877750();
   input += synapse0x3877790();
   input += synapse0x38777d0();
   input += synapse0x3877260();
   input += synapse0x38772a0();
   input += synapse0x3877920();
   input += synapse0x3877960();
   input += synapse0x38779a0();
   input += synapse0x38779e0();
   input += synapse0x3877a20();
   input += synapse0x3877a60();
   return input;
}

double NNfunction_sg_cL::neuron0x38770d0() {
   double input = input0x38770d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3877aa0() {
   double input = 1.06361;
   input += synapse0x3877de0();
   input += synapse0x3877e20();
   input += synapse0x3877e60();
   input += synapse0x3877ea0();
   input += synapse0x3877ee0();
   input += synapse0x3877f20();
   input += synapse0x3877f60();
   input += synapse0x3877fa0();
   input += synapse0x3877fe0();
   input += synapse0x3878020();
   input += synapse0x3878060();
   input += synapse0x38780a0();
   input += synapse0x38780e0();
   input += synapse0x3878120();
   input += synapse0x3878160();
   input += synapse0x38781a0();
   input += synapse0x3877c30();
   input += synapse0x3877c70();
   input += synapse0x38782f0();
   input += synapse0x3878330();
   input += synapse0x3878370();
   input += synapse0x38783b0();
   input += synapse0x38783f0();
   input += synapse0x3878430();
   return input;
}

double NNfunction_sg_cL::neuron0x3877aa0() {
   double input = input0x3877aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3878470() {
   double input = -0.523964;
   input += synapse0x3870e30();
   input += synapse0x3870e70();
   input += synapse0x3870eb0();
   input += synapse0x3870ef0();
   input += synapse0x38789c0();
   input += synapse0x3878a00();
   input += synapse0x3878a40();
   input += synapse0x3878a80();
   input += synapse0x3878ac0();
   input += synapse0x3878b00();
   input += synapse0x3878b40();
   input += synapse0x3878b80();
   input += synapse0x3878bc0();
   input += synapse0x3878c00();
   input += synapse0x3878c40();
   input += synapse0x3878c80();
   input += synapse0x3878600();
   input += synapse0x3878640();
   input += synapse0x3878dd0();
   input += synapse0x3878e10();
   input += synapse0x3878e50();
   input += synapse0x3878e90();
   input += synapse0x3878ed0();
   input += synapse0x3878f10();
   return input;
}

double NNfunction_sg_cL::neuron0x3878470() {
   double input = input0x3878470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3878f50() {
   double input = -0.835009;
   input += synapse0x3879290();
   input += synapse0x38792d0();
   input += synapse0x3879310();
   input += synapse0x3879350();
   input += synapse0x3879390();
   input += synapse0x38793d0();
   input += synapse0x3879410();
   input += synapse0x3879450();
   input += synapse0x3879490();
   input += synapse0x38794d0();
   input += synapse0x3879510();
   input += synapse0x3879550();
   input += synapse0x3879590();
   input += synapse0x38795d0();
   input += synapse0x3879610();
   input += synapse0x3879650();
   input += synapse0x38790e0();
   input += synapse0x3879120();
   input += synapse0x38797a0();
   input += synapse0x38797e0();
   input += synapse0x3879820();
   input += synapse0x3879860();
   input += synapse0x38798a0();
   input += synapse0x38798e0();
   return input;
}

double NNfunction_sg_cL::neuron0x3878f50() {
   double input = input0x3878f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3879920() {
   double input = -1.27212;
   input += synapse0x3879c60();
   input += synapse0x3879ca0();
   input += synapse0x3879ce0();
   input += synapse0x3879d20();
   input += synapse0x3879d60();
   input += synapse0x3879da0();
   input += synapse0x3879de0();
   input += synapse0x3879e20();
   input += synapse0x3879e60();
   input += synapse0x3879ea0();
   input += synapse0x3879ee0();
   input += synapse0x3879f20();
   input += synapse0x3879f60();
   input += synapse0x3879fa0();
   input += synapse0x3879fe0();
   input += synapse0x387a020();
   input += synapse0x3879ab0();
   input += synapse0x3879af0();
   input += synapse0x3876880();
   input += synapse0x38768c0();
   input += synapse0x3876900();
   input += synapse0x3876940();
   input += synapse0x3876980();
   input += synapse0x38769c0();
   return input;
}

double NNfunction_sg_cL::neuron0x3879920() {
   double input = input0x3879920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3876a00() {
   double input = -0.695182;
   input += synapse0x3876d40();
   input += synapse0x3876d80();
   input += synapse0x3876dc0();
   input += synapse0x3876e00();
   input += synapse0x3876e40();
   input += synapse0x3876e80();
   input += synapse0x3876ec0();
   input += synapse0x3876f00();
   input += synapse0x3876f40();
   input += synapse0x3876f80();
   input += synapse0x3876fc0();
   input += synapse0x3877000();
   input += synapse0x3877040();
   input += synapse0x387b180();
   input += synapse0x387b1c0();
   input += synapse0x387b200();
   input += synapse0x3876b90();
   input += synapse0x3876bd0();
   input += synapse0x387b350();
   input += synapse0x387b390();
   input += synapse0x387b3d0();
   input += synapse0x387b410();
   input += synapse0x387b450();
   input += synapse0x387b490();
   return input;
}

double NNfunction_sg_cL::neuron0x3876a00() {
   double input = input0x3876a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387b4d0() {
   double input = -0.239598;
   input += synapse0x387b810();
   input += synapse0x387b850();
   input += synapse0x387b890();
   input += synapse0x387b8d0();
   input += synapse0x387b910();
   input += synapse0x387b950();
   input += synapse0x387b990();
   input += synapse0x387b9d0();
   input += synapse0x387ba10();
   input += synapse0x387ba50();
   input += synapse0x387ba90();
   input += synapse0x387bad0();
   input += synapse0x387bb10();
   input += synapse0x387bb50();
   input += synapse0x387bb90();
   input += synapse0x387bbd0();
   input += synapse0x387b660();
   input += synapse0x387b6a0();
   input += synapse0x387bd20();
   input += synapse0x387bd60();
   input += synapse0x387bda0();
   input += synapse0x387bde0();
   input += synapse0x387be20();
   input += synapse0x387be60();
   return input;
}

double NNfunction_sg_cL::neuron0x387b4d0() {
   double input = input0x387b4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387bea0() {
   double input = -0.666856;
   input += synapse0x387c1e0();
   input += synapse0x387c220();
   input += synapse0x387c260();
   input += synapse0x387c2a0();
   input += synapse0x387c2e0();
   input += synapse0x387c320();
   input += synapse0x387c360();
   input += synapse0x387c3a0();
   input += synapse0x387c3e0();
   input += synapse0x387c420();
   input += synapse0x387c460();
   input += synapse0x387c4a0();
   input += synapse0x387c4e0();
   input += synapse0x387c520();
   input += synapse0x387c560();
   input += synapse0x387c5a0();
   input += synapse0x387c030();
   input += synapse0x387c070();
   input += synapse0x387c6f0();
   input += synapse0x387c730();
   input += synapse0x387c770();
   input += synapse0x387c7b0();
   input += synapse0x387c7f0();
   input += synapse0x387c830();
   return input;
}

double NNfunction_sg_cL::neuron0x387bea0() {
   double input = input0x387bea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387c870() {
   double input = 0.236072;
   input += synapse0x387cbb0();
   input += synapse0x387cbf0();
   input += synapse0x387cc30();
   input += synapse0x387cc70();
   input += synapse0x387ccb0();
   input += synapse0x387ccf0();
   input += synapse0x387cd30();
   input += synapse0x387cd70();
   input += synapse0x387cdb0();
   input += synapse0x387cdf0();
   input += synapse0x387ce30();
   input += synapse0x387ce70();
   input += synapse0x387ceb0();
   input += synapse0x387cef0();
   input += synapse0x387cf30();
   input += synapse0x387cf70();
   input += synapse0x387ca00();
   input += synapse0x387ca40();
   input += synapse0x387d0c0();
   input += synapse0x387d100();
   input += synapse0x387d140();
   input += synapse0x387d180();
   input += synapse0x387d1c0();
   input += synapse0x387d200();
   return input;
}

double NNfunction_sg_cL::neuron0x387c870() {
   double input = input0x387c870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387d240() {
   double input = -0.529178;
   input += synapse0x387d580();
   input += synapse0x386d800();
   input += synapse0x386d840();
   input += synapse0x386db40();
   input += synapse0x386db80();
   input += synapse0x386de80();
   input += synapse0x386dec0();
   input += synapse0x386e1c0();
   input += synapse0x386e200();
   input += synapse0x386e500();
   input += synapse0x386e540();
   input += synapse0x386e840();
   input += synapse0x386e880();
   input += synapse0x386eb80();
   input += synapse0x386ebc0();
   input += synapse0x386eec0();
   input += synapse0x386ef00();
   input += synapse0x386f200();
   input += synapse0x386f240();
   input += synapse0x386f540();
   input += synapse0x386f580();
   input += synapse0x386f880();
   input += synapse0x386f8c0();
   input += synapse0x386fbc0();
   return input;
}

double NNfunction_sg_cL::neuron0x387d240() {
   double input = input0x387d240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387f050() {
   double input = -1.26973;
   input += synapse0x386fc00();
   input += synapse0x38708c0();
   input += synapse0x3870900();
   input += synapse0x387d3d0();
   input += synapse0x387d410();
   input += synapse0x3870c00();
   input += synapse0x3870c40();
   input += synapse0x27b73c0();
   input += synapse0x27b7400();
   input += synapse0x3871380();
   input += synapse0x38713c0();
   input += synapse0x38716c0();
   input += synapse0x3871700();
   input += synapse0x3871a00();
   input += synapse0x3871a40();
   input += synapse0x3871d40();
   input += synapse0x3871d80();
   input += synapse0x3872080();
   input += synapse0x38720c0();
   input += synapse0x38723c0();
   input += synapse0x3872400();
   input += synapse0x386ff00();
   input += synapse0x386ff40();
   input += synapse0x387f2f0();
   return input;
}

double NNfunction_sg_cL::neuron0x387f050() {
   double input = input0x387f050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387f330() {
   double input = 0.721229;
   input += synapse0x387f670();
   input += synapse0x387f6b0();
   input += synapse0x387f6f0();
   input += synapse0x387f730();
   input += synapse0x387f770();
   input += synapse0x387f7b0();
   input += synapse0x387f7f0();
   input += synapse0x387f830();
   input += synapse0x387f870();
   input += synapse0x387f8b0();
   input += synapse0x387f8f0();
   input += synapse0x387f930();
   input += synapse0x387f970();
   input += synapse0x387f9b0();
   input += synapse0x387f9f0();
   input += synapse0x387fa30();
   input += synapse0x387f4c0();
   input += synapse0x387f500();
   input += synapse0x387fb80();
   input += synapse0x387fbc0();
   input += synapse0x387fc00();
   input += synapse0x387fc40();
   input += synapse0x387fc80();
   input += synapse0x387fcc0();
   return input;
}

double NNfunction_sg_cL::neuron0x387f330() {
   double input = input0x387f330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387fd00() {
   double input = -0.460163;
   input += synapse0x3880040();
   input += synapse0x3880080();
   input += synapse0x38800c0();
   input += synapse0x3880100();
   input += synapse0x3880140();
   input += synapse0x3880180();
   input += synapse0x38801c0();
   input += synapse0x3880200();
   input += synapse0x3880240();
   input += synapse0x3880280();
   input += synapse0x38802c0();
   input += synapse0x3880300();
   input += synapse0x3880340();
   input += synapse0x3880380();
   input += synapse0x38803c0();
   input += synapse0x3880400();
   input += synapse0x387fe90();
   input += synapse0x387fed0();
   input += synapse0x3880550();
   input += synapse0x3880590();
   input += synapse0x38805d0();
   input += synapse0x3880610();
   input += synapse0x3880650();
   input += synapse0x3880690();
   return input;
}

double NNfunction_sg_cL::neuron0x387fd00() {
   double input = input0x387fd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38806d0() {
   double input = -1.6364;
   input += synapse0x3880a10();
   input += synapse0x3880a50();
   input += synapse0x3880a90();
   input += synapse0x3880ad0();
   input += synapse0x3880b10();
   input += synapse0x3880b50();
   input += synapse0x3880b90();
   input += synapse0x3880bd0();
   input += synapse0x3880c10();
   input += synapse0x3880c50();
   input += synapse0x3880c90();
   input += synapse0x3880cd0();
   input += synapse0x3880d10();
   input += synapse0x3880d50();
   input += synapse0x3880d90();
   input += synapse0x3880dd0();
   input += synapse0x3880860();
   input += synapse0x38808a0();
   input += synapse0x3880f20();
   input += synapse0x3880f60();
   input += synapse0x3880fa0();
   input += synapse0x3880fe0();
   input += synapse0x3881020();
   input += synapse0x3881060();
   return input;
}

double NNfunction_sg_cL::neuron0x38806d0() {
   double input = input0x38806d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38810a0() {
   double input = 0.208004;
   input += synapse0x38813e0();
   input += synapse0x3881420();
   input += synapse0x3881460();
   input += synapse0x38814a0();
   input += synapse0x38814e0();
   input += synapse0x3881520();
   input += synapse0x3881560();
   input += synapse0x38815a0();
   input += synapse0x38815e0();
   input += synapse0x3881620();
   input += synapse0x3881660();
   input += synapse0x38816a0();
   input += synapse0x38816e0();
   input += synapse0x3881720();
   input += synapse0x3881760();
   input += synapse0x38817a0();
   input += synapse0x3881230();
   input += synapse0x3881270();
   input += synapse0x38818f0();
   input += synapse0x3881930();
   input += synapse0x3881970();
   input += synapse0x38819b0();
   input += synapse0x38819f0();
   input += synapse0x3881a30();
   return input;
}

double NNfunction_sg_cL::neuron0x38810a0() {
   double input = input0x38810a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3881a70() {
   double input = -0.205649;
   input += synapse0x3881db0();
   input += synapse0x3881df0();
   input += synapse0x3881e30();
   input += synapse0x3881e70();
   input += synapse0x3881eb0();
   input += synapse0x3881ef0();
   input += synapse0x3881f30();
   input += synapse0x3881f70();
   input += synapse0x3881fb0();
   input += synapse0x387a170();
   input += synapse0x387a1b0();
   input += synapse0x387a1f0();
   input += synapse0x387a230();
   input += synapse0x387a270();
   input += synapse0x387a2b0();
   input += synapse0x387a2f0();
   input += synapse0x3881c00();
   input += synapse0x3881c40();
   input += synapse0x387a440();
   input += synapse0x387a480();
   input += synapse0x387a4c0();
   input += synapse0x387a500();
   input += synapse0x387a540();
   input += synapse0x387a580();
   return input;
}

double NNfunction_sg_cL::neuron0x3881a70() {
   double input = input0x3881a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387a5c0() {
   double input = 1.34898;
   input += synapse0x387a900();
   input += synapse0x387a940();
   input += synapse0x387a980();
   input += synapse0x387a9c0();
   input += synapse0x387aa00();
   input += synapse0x387aa40();
   input += synapse0x387aa80();
   input += synapse0x387aac0();
   input += synapse0x387ab00();
   input += synapse0x387ab40();
   input += synapse0x387ab80();
   input += synapse0x387abc0();
   input += synapse0x387ac00();
   input += synapse0x387ac40();
   input += synapse0x387ac80();
   input += synapse0x387acc0();
   input += synapse0x387a750();
   input += synapse0x387a790();
   input += synapse0x387ae10();
   input += synapse0x387ae50();
   input += synapse0x387ae90();
   input += synapse0x387aed0();
   input += synapse0x387af10();
   input += synapse0x387af50();
   return input;
}

double NNfunction_sg_cL::neuron0x387a5c0() {
   double input = input0x387a5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387af90() {
   double input = 0.107236;
   input += synapse0x387b120();
   input += synapse0x38841b0();
   input += synapse0x38841f0();
   input += synapse0x3884230();
   input += synapse0x3884270();
   input += synapse0x38842b0();
   input += synapse0x38842f0();
   input += synapse0x3884330();
   input += synapse0x3884370();
   input += synapse0x38843b0();
   input += synapse0x38843f0();
   input += synapse0x3884430();
   input += synapse0x3884470();
   input += synapse0x38844b0();
   input += synapse0x38844f0();
   input += synapse0x3884530();
   input += synapse0x3884000();
   input += synapse0x3884040();
   input += synapse0x3884680();
   input += synapse0x38846c0();
   input += synapse0x3884700();
   input += synapse0x3884740();
   input += synapse0x3884780();
   input += synapse0x38847c0();
   return input;
}

double NNfunction_sg_cL::neuron0x387af90() {
   double input = input0x387af90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3884800() {
   double input = 0.620408;
   input += synapse0x3884b40();
   input += synapse0x3884b80();
   input += synapse0x3884bc0();
   input += synapse0x3884c00();
   input += synapse0x3884c40();
   input += synapse0x3884c80();
   input += synapse0x3884cc0();
   input += synapse0x3884d00();
   input += synapse0x3884d40();
   input += synapse0x3884d80();
   input += synapse0x3884dc0();
   input += synapse0x3884e00();
   input += synapse0x3884e40();
   input += synapse0x3884e80();
   input += synapse0x3884ec0();
   input += synapse0x3884f00();
   input += synapse0x3884990();
   input += synapse0x38849d0();
   input += synapse0x3885050();
   input += synapse0x3885090();
   input += synapse0x38850d0();
   input += synapse0x3885110();
   input += synapse0x3885150();
   input += synapse0x3885190();
   return input;
}

double NNfunction_sg_cL::neuron0x3884800() {
   double input = input0x3884800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38851d0() {
   double input = 0.322602;
   input += synapse0x3885510();
   input += synapse0x3885550();
   input += synapse0x3885590();
   input += synapse0x38855d0();
   input += synapse0x3885610();
   input += synapse0x3885650();
   input += synapse0x3885690();
   input += synapse0x38856d0();
   input += synapse0x3885710();
   input += synapse0x3885750();
   input += synapse0x3885790();
   input += synapse0x38857d0();
   input += synapse0x3885810();
   input += synapse0x3885850();
   input += synapse0x3885890();
   input += synapse0x38858d0();
   input += synapse0x3885360();
   input += synapse0x38853a0();
   input += synapse0x3885a20();
   input += synapse0x3885a60();
   input += synapse0x3885aa0();
   input += synapse0x3885ae0();
   input += synapse0x3885b20();
   input += synapse0x3885b60();
   return input;
}

double NNfunction_sg_cL::neuron0x38851d0() {
   double input = input0x38851d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3885ba0() {
   double input = -2.14262;
   input += synapse0x3885ee0();
   input += synapse0x3885f20();
   input += synapse0x3885f60();
   input += synapse0x3885fa0();
   input += synapse0x3885fe0();
   input += synapse0x3886020();
   input += synapse0x3886060();
   input += synapse0x38860a0();
   input += synapse0x38860e0();
   input += synapse0x3886120();
   input += synapse0x3886160();
   input += synapse0x38861a0();
   input += synapse0x38861e0();
   input += synapse0x3886220();
   input += synapse0x3886260();
   input += synapse0x38862a0();
   input += synapse0x3885d30();
   input += synapse0x3885d70();
   input += synapse0x38863f0();
   input += synapse0x3886430();
   input += synapse0x3886470();
   input += synapse0x38864b0();
   input += synapse0x38864f0();
   input += synapse0x3886530();
   return input;
}

double NNfunction_sg_cL::neuron0x3885ba0() {
   double input = input0x3885ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3886570() {
   double input = 0.25197;
   input += synapse0x38868b0();
   input += synapse0x38868f0();
   input += synapse0x3886930();
   input += synapse0x3886970();
   input += synapse0x38869b0();
   input += synapse0x38869f0();
   input += synapse0x3886a30();
   input += synapse0x3886a70();
   input += synapse0x3886ab0();
   input += synapse0x3886af0();
   input += synapse0x3886b30();
   input += synapse0x3886b70();
   input += synapse0x3886bb0();
   input += synapse0x3886bf0();
   input += synapse0x3886c30();
   input += synapse0x3886c70();
   input += synapse0x3886700();
   input += synapse0x3886740();
   input += synapse0x3886dc0();
   input += synapse0x3886e00();
   input += synapse0x3886e40();
   input += synapse0x3886e80();
   input += synapse0x3886ec0();
   input += synapse0x3886f00();
   return input;
}

double NNfunction_sg_cL::neuron0x3886570() {
   double input = input0x3886570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3886f40() {
   double input = -0.905759;
   input += synapse0x3887280();
   input += synapse0x38872c0();
   input += synapse0x3887300();
   input += synapse0x3887340();
   input += synapse0x3887380();
   input += synapse0x38873c0();
   input += synapse0x3887400();
   input += synapse0x3887440();
   input += synapse0x3887480();
   input += synapse0x38874c0();
   input += synapse0x3887500();
   input += synapse0x3887540();
   input += synapse0x3887580();
   input += synapse0x38875c0();
   input += synapse0x3887600();
   input += synapse0x3887640();
   input += synapse0x38870d0();
   input += synapse0x3887110();
   input += synapse0x3887790();
   input += synapse0x38877d0();
   input += synapse0x3887810();
   input += synapse0x3887850();
   input += synapse0x3887890();
   input += synapse0x38878d0();
   return input;
}

double NNfunction_sg_cL::neuron0x3886f40() {
   double input = input0x3886f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3887910() {
   double input = 0.240954;
   input += synapse0x3887c50();
   input += synapse0x3887c90();
   input += synapse0x3887cd0();
   input += synapse0x3887d10();
   input += synapse0x3887d50();
   input += synapse0x3887d90();
   input += synapse0x3887dd0();
   input += synapse0x3887e10();
   input += synapse0x3887e50();
   input += synapse0x3887e90();
   input += synapse0x3887ed0();
   input += synapse0x3887f10();
   input += synapse0x3887f50();
   input += synapse0x3887f90();
   input += synapse0x3887fd0();
   input += synapse0x3888010();
   input += synapse0x3887aa0();
   input += synapse0x3887ae0();
   input += synapse0x3888160();
   input += synapse0x38881a0();
   input += synapse0x38881e0();
   input += synapse0x3888220();
   input += synapse0x3888260();
   input += synapse0x38882a0();
   return input;
}

double NNfunction_sg_cL::neuron0x3887910() {
   double input = input0x3887910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38882e0() {
   double input = -0.450913;
   input += synapse0x3888620();
   input += synapse0x3888660();
   input += synapse0x38886a0();
   input += synapse0x38886e0();
   input += synapse0x3888720();
   input += synapse0x3888760();
   input += synapse0x38887a0();
   input += synapse0x38887e0();
   input += synapse0x3888820();
   input += synapse0x3888860();
   input += synapse0x38888a0();
   input += synapse0x38888e0();
   input += synapse0x3888920();
   input += synapse0x3888960();
   input += synapse0x38889a0();
   input += synapse0x38889e0();
   input += synapse0x3888470();
   input += synapse0x38884b0();
   input += synapse0x3888b30();
   input += synapse0x3888b70();
   input += synapse0x3888bb0();
   input += synapse0x3888bf0();
   input += synapse0x3888c30();
   input += synapse0x3888c70();
   return input;
}

double NNfunction_sg_cL::neuron0x38882e0() {
   double input = input0x38882e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3888cb0() {
   double input = -0.625985;
   input += synapse0x3888ff0();
   input += synapse0x387d5c0();
   input += synapse0x387d600();
   input += synapse0x387d640();
   input += synapse0x387d890();
   input += synapse0x387d8d0();
   input += synapse0x387d910();
   input += synapse0x387db60();
   input += synapse0x387dba0();
   input += synapse0x387ddf0();
   input += synapse0x387de30();
   input += synapse0x387de70();
   input += synapse0x387e0c0();
   input += synapse0x387e100();
   input += synapse0x387e350();
   input += synapse0x387e390();
   input += synapse0x3888e40();
   input += synapse0x3888e80();
   input += synapse0x387e4e0();
   input += synapse0x387e9f0();
   input += synapse0x387ea30();
   input += synapse0x387ea70();
   input += synapse0x387ecc0();
   input += synapse0x387ed00();
   return input;
}

double NNfunction_sg_cL::neuron0x3888cb0() {
   double input = input0x3888cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x387ed40() {
   double input = -1.35051;
   input += synapse0x387e5b0();
   input += synapse0x387e5f0();
   input += synapse0x387e630();
   input += synapse0x387e670();
   input += synapse0x387eff0();
   input += synapse0x388b340();
   input += synapse0x388b380();
   input += synapse0x388b3c0();
   input += synapse0x388b400();
   input += synapse0x388b440();
   input += synapse0x388b480();
   input += synapse0x388b4c0();
   input += synapse0x388b500();
   input += synapse0x388b540();
   input += synapse0x388b580();
   input += synapse0x388b5c0();
   input += synapse0x387eed0();
   input += synapse0x387ef10();
   input += synapse0x388b710();
   input += synapse0x388b750();
   input += synapse0x388b790();
   input += synapse0x388b7d0();
   input += synapse0x388b810();
   input += synapse0x388b850();
   return input;
}

double NNfunction_sg_cL::neuron0x387ed40() {
   double input = input0x387ed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388b890() {
   double input = 0.165117;
   input += synapse0x388bbd0();
   input += synapse0x388bc10();
   input += synapse0x388bc50();
   input += synapse0x388bc90();
   input += synapse0x388bcd0();
   input += synapse0x388bd10();
   input += synapse0x388bd50();
   input += synapse0x388bd90();
   input += synapse0x388bdd0();
   input += synapse0x388be10();
   input += synapse0x388be50();
   input += synapse0x388be90();
   input += synapse0x388bed0();
   input += synapse0x388bf10();
   input += synapse0x388bf50();
   input += synapse0x388bf90();
   input += synapse0x388ba20();
   input += synapse0x388ba60();
   input += synapse0x388c0e0();
   input += synapse0x388c120();
   input += synapse0x388c160();
   input += synapse0x388c1a0();
   input += synapse0x388c1e0();
   input += synapse0x388c220();
   return input;
}

double NNfunction_sg_cL::neuron0x388b890() {
   double input = input0x388b890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388c260() {
   double input = -3.82157;
   input += synapse0x388c5a0();
   input += synapse0x388c5e0();
   input += synapse0x388c620();
   input += synapse0x388c660();
   input += synapse0x388c6a0();
   input += synapse0x388c6e0();
   input += synapse0x388c720();
   input += synapse0x388c760();
   input += synapse0x388c7a0();
   input += synapse0x388c7e0();
   input += synapse0x388c820();
   input += synapse0x388c860();
   input += synapse0x388c8a0();
   input += synapse0x388c8e0();
   input += synapse0x388c920();
   input += synapse0x388c960();
   input += synapse0x388c3f0();
   input += synapse0x388c430();
   input += synapse0x388cab0();
   input += synapse0x388caf0();
   input += synapse0x388cb30();
   input += synapse0x388cb70();
   input += synapse0x388cbb0();
   input += synapse0x388cbf0();
   return input;
}

double NNfunction_sg_cL::neuron0x388c260() {
   double input = input0x388c260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388cc30() {
   double input = 0.371075;
   input += synapse0x388cf70();
   input += synapse0x388cfb0();
   input += synapse0x388cff0();
   input += synapse0x388d030();
   input += synapse0x388d070();
   input += synapse0x388d0b0();
   input += synapse0x388d0f0();
   input += synapse0x388d130();
   input += synapse0x388d170();
   input += synapse0x388d1b0();
   input += synapse0x388d1f0();
   input += synapse0x388d230();
   input += synapse0x388d270();
   input += synapse0x388d2b0();
   input += synapse0x388d2f0();
   input += synapse0x388d330();
   input += synapse0x388cdc0();
   input += synapse0x388ce00();
   input += synapse0x388d480();
   input += synapse0x388d4c0();
   input += synapse0x388d500();
   input += synapse0x388d540();
   input += synapse0x388d580();
   input += synapse0x388d5c0();
   return input;
}

double NNfunction_sg_cL::neuron0x388cc30() {
   double input = input0x388cc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388d600() {
   double input = 0.782798;
   input += synapse0x388d940();
   input += synapse0x388d980();
   input += synapse0x388d9c0();
   input += synapse0x388da00();
   input += synapse0x388da40();
   input += synapse0x388da80();
   input += synapse0x388dac0();
   input += synapse0x388db00();
   input += synapse0x388db40();
   input += synapse0x388db80();
   input += synapse0x388dbc0();
   input += synapse0x388dc00();
   input += synapse0x388dc40();
   input += synapse0x388dc80();
   input += synapse0x388dcc0();
   input += synapse0x388dd00();
   input += synapse0x388d790();
   input += synapse0x388d7d0();
   input += synapse0x388de50();
   input += synapse0x388de90();
   input += synapse0x388ded0();
   input += synapse0x388df10();
   input += synapse0x388df50();
   input += synapse0x388df90();
   return input;
}

double NNfunction_sg_cL::neuron0x388d600() {
   double input = input0x388d600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388dfd0() {
   double input = 0.354075;
   input += synapse0x388e310();
   input += synapse0x388e350();
   input += synapse0x388e390();
   input += synapse0x388e3d0();
   input += synapse0x388e410();
   input += synapse0x388e450();
   input += synapse0x388e490();
   input += synapse0x388e4d0();
   input += synapse0x388e510();
   input += synapse0x388e550();
   input += synapse0x388e590();
   input += synapse0x388e5d0();
   input += synapse0x388e610();
   input += synapse0x388e650();
   input += synapse0x388e690();
   input += synapse0x388e6d0();
   input += synapse0x388e160();
   input += synapse0x388e1a0();
   input += synapse0x388e820();
   input += synapse0x388e860();
   input += synapse0x388e8a0();
   input += synapse0x388e8e0();
   input += synapse0x388e920();
   input += synapse0x388e960();
   return input;
}

double NNfunction_sg_cL::neuron0x388dfd0() {
   double input = input0x388dfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388e9a0() {
   double input = 0.862362;
   input += synapse0x388ece0();
   input += synapse0x388ed20();
   input += synapse0x388ed60();
   input += synapse0x388eda0();
   input += synapse0x388ede0();
   input += synapse0x388ee20();
   input += synapse0x388ee60();
   input += synapse0x388eea0();
   input += synapse0x388eee0();
   input += synapse0x388ef20();
   input += synapse0x388ef60();
   input += synapse0x388efa0();
   input += synapse0x388efe0();
   input += synapse0x388f020();
   input += synapse0x388f060();
   input += synapse0x388f0a0();
   input += synapse0x388eb30();
   input += synapse0x388eb70();
   input += synapse0x388f1f0();
   input += synapse0x388f230();
   input += synapse0x388f270();
   input += synapse0x388f2b0();
   input += synapse0x388f2f0();
   input += synapse0x388f330();
   return input;
}

double NNfunction_sg_cL::neuron0x388e9a0() {
   double input = input0x388e9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388f370() {
   double input = 1.17296;
   input += synapse0x388f6b0();
   input += synapse0x388f6f0();
   input += synapse0x388f730();
   input += synapse0x388f770();
   input += synapse0x388f7b0();
   input += synapse0x388f7f0();
   input += synapse0x388f830();
   input += synapse0x388f870();
   input += synapse0x388f8b0();
   input += synapse0x388f8f0();
   input += synapse0x388f930();
   input += synapse0x388f970();
   input += synapse0x388f9b0();
   input += synapse0x388f9f0();
   input += synapse0x388fa30();
   input += synapse0x388fa70();
   input += synapse0x388f500();
   input += synapse0x388f540();
   input += synapse0x388fbc0();
   input += synapse0x388fc00();
   input += synapse0x388fc40();
   input += synapse0x388fc80();
   input += synapse0x388fcc0();
   input += synapse0x388fd00();
   return input;
}

double NNfunction_sg_cL::neuron0x388f370() {
   double input = input0x388f370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x388fd40() {
   double input = 0.31993;
   input += synapse0x38787b0();
   input += synapse0x38787f0();
   input += synapse0x3878830();
   input += synapse0x3878870();
   input += synapse0x38788b0();
   input += synapse0x38788f0();
   input += synapse0x3878930();
   input += synapse0x3878970();
   input += synapse0x3890490();
   input += synapse0x38904d0();
   input += synapse0x3890510();
   input += synapse0x3890550();
   input += synapse0x3890590();
   input += synapse0x38905d0();
   input += synapse0x3890610();
   input += synapse0x3890650();
   input += synapse0x388fed0();
   input += synapse0x388ff10();
   input += synapse0x38907a0();
   input += synapse0x38907e0();
   input += synapse0x3890820();
   input += synapse0x3890860();
   input += synapse0x38908a0();
   input += synapse0x38908e0();
   return input;
}

double NNfunction_sg_cL::neuron0x388fd40() {
   double input = input0x388fd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3890920() {
   double input = -2.21315;
   input += synapse0x3890c60();
   input += synapse0x3890ca0();
   input += synapse0x3890ce0();
   input += synapse0x3890d20();
   input += synapse0x3890d60();
   input += synapse0x3890da0();
   input += synapse0x3890de0();
   input += synapse0x3890e20();
   input += synapse0x3890e60();
   input += synapse0x3890ea0();
   input += synapse0x3890ee0();
   input += synapse0x3890f20();
   input += synapse0x3890f60();
   input += synapse0x3890fa0();
   input += synapse0x3890fe0();
   input += synapse0x3891020();
   input += synapse0x3890ab0();
   input += synapse0x3890af0();
   input += synapse0x3891170();
   input += synapse0x38911b0();
   input += synapse0x38911f0();
   input += synapse0x3891230();
   input += synapse0x3891270();
   input += synapse0x38912b0();
   return input;
}

double NNfunction_sg_cL::neuron0x3890920() {
   double input = input0x3890920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38912f0() {
   double input = -0.332256;
   input += synapse0x3891630();
   input += synapse0x3891670();
   input += synapse0x38916b0();
   input += synapse0x38916f0();
   input += synapse0x3891730();
   input += synapse0x3891770();
   input += synapse0x38917b0();
   input += synapse0x38917f0();
   input += synapse0x3891830();
   input += synapse0x3891870();
   input += synapse0x38918b0();
   input += synapse0x38918f0();
   input += synapse0x3891930();
   input += synapse0x3891970();
   input += synapse0x38919b0();
   input += synapse0x38919f0();
   input += synapse0x3891480();
   input += synapse0x38914c0();
   input += synapse0x3881ff0();
   input += synapse0x3882030();
   input += synapse0x3882070();
   input += synapse0x38820b0();
   input += synapse0x38820f0();
   input += synapse0x3882130();
   return input;
}

double NNfunction_sg_cL::neuron0x38912f0() {
   double input = input0x38912f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3882170() {
   double input = 1.72791;
   input += synapse0x38824b0();
   input += synapse0x38824f0();
   input += synapse0x3882530();
   input += synapse0x3882570();
   input += synapse0x38825b0();
   input += synapse0x38825f0();
   input += synapse0x3882630();
   input += synapse0x3882670();
   input += synapse0x38826b0();
   input += synapse0x38826f0();
   input += synapse0x3882730();
   input += synapse0x3882770();
   input += synapse0x38827b0();
   input += synapse0x38827f0();
   input += synapse0x3882830();
   input += synapse0x3882870();
   input += synapse0x3882300();
   input += synapse0x3882340();
   input += synapse0x38829c0();
   input += synapse0x3882a00();
   input += synapse0x3882a40();
   input += synapse0x3882a80();
   input += synapse0x3882ac0();
   input += synapse0x3882b00();
   return input;
}

double NNfunction_sg_cL::neuron0x3882170() {
   double input = input0x3882170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3882b40() {
   double input = 1.67614;
   input += synapse0x3882e80();
   input += synapse0x3882ec0();
   input += synapse0x3882f00();
   input += synapse0x3882f40();
   input += synapse0x3882f80();
   input += synapse0x3882fc0();
   input += synapse0x3883000();
   input += synapse0x3883040();
   input += synapse0x3883080();
   input += synapse0x38830c0();
   input += synapse0x3883100();
   input += synapse0x3883140();
   input += synapse0x3883180();
   input += synapse0x38831c0();
   input += synapse0x3883200();
   input += synapse0x3883240();
   input += synapse0x3882cd0();
   input += synapse0x3882d10();
   input += synapse0x3883390();
   input += synapse0x38833d0();
   input += synapse0x3883410();
   input += synapse0x3883450();
   input += synapse0x3883490();
   input += synapse0x38834d0();
   return input;
}

double NNfunction_sg_cL::neuron0x3882b40() {
   double input = input0x3882b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3883510() {
   double input = -0.414384;
   input += synapse0x3883850();
   input += synapse0x3883890();
   input += synapse0x38838d0();
   input += synapse0x3883910();
   input += synapse0x3883950();
   input += synapse0x3883990();
   input += synapse0x38839d0();
   input += synapse0x3883a10();
   input += synapse0x3883a50();
   input += synapse0x3883a90();
   input += synapse0x3883ad0();
   input += synapse0x3883b10();
   input += synapse0x3883b50();
   input += synapse0x3883b90();
   input += synapse0x3883bd0();
   input += synapse0x3883c10();
   input += synapse0x38836a0();
   input += synapse0x38836e0();
   input += synapse0x3883d60();
   input += synapse0x3883da0();
   input += synapse0x3883de0();
   input += synapse0x3883e20();
   input += synapse0x3883e60();
   input += synapse0x3883ea0();
   return input;
}

double NNfunction_sg_cL::neuron0x3883510() {
   double input = input0x3883510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3895b50() {
   double input = -0.428197;
   input += synapse0x3895d70();
   input += synapse0x3895db0();
   input += synapse0x3895df0();
   input += synapse0x3895e30();
   input += synapse0x3895e70();
   input += synapse0x3895eb0();
   input += synapse0x3895ef0();
   input += synapse0x3895f30();
   input += synapse0x3895f70();
   input += synapse0x3895fb0();
   input += synapse0x3895ff0();
   input += synapse0x3896030();
   input += synapse0x3896070();
   input += synapse0x38960b0();
   input += synapse0x38960f0();
   input += synapse0x3896130();
   input += synapse0x3883ee0();
   input += synapse0x3883f20();
   input += synapse0x3896280();
   input += synapse0x38962c0();
   input += synapse0x3896300();
   input += synapse0x3896340();
   input += synapse0x3896380();
   input += synapse0x38963c0();
   return input;
}

double NNfunction_sg_cL::neuron0x3895b50() {
   double input = input0x3895b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3896400() {
   double input = 0.00897795;
   input += synapse0x3896740();
   input += synapse0x3896780();
   input += synapse0x38967c0();
   input += synapse0x3896800();
   input += synapse0x3896840();
   input += synapse0x3896880();
   input += synapse0x38968c0();
   input += synapse0x3896900();
   input += synapse0x3896940();
   input += synapse0x3896980();
   input += synapse0x38969c0();
   input += synapse0x3896a00();
   input += synapse0x3896a40();
   input += synapse0x3896a80();
   input += synapse0x3896ac0();
   input += synapse0x3896b00();
   input += synapse0x3896590();
   input += synapse0x38965d0();
   input += synapse0x3896c50();
   input += synapse0x3896c90();
   input += synapse0x3896cd0();
   input += synapse0x3896d10();
   input += synapse0x3896d50();
   input += synapse0x3896d90();
   return input;
}

double NNfunction_sg_cL::neuron0x3896400() {
   double input = input0x3896400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x3896dd0() {
   double input = 0.229265;
   input += synapse0x3897110();
   input += synapse0x3897150();
   input += synapse0x3897190();
   input += synapse0x38971d0();
   input += synapse0x3897210();
   input += synapse0x3897250();
   input += synapse0x3897290();
   input += synapse0x38972d0();
   input += synapse0x3897310();
   input += synapse0x3897350();
   input += synapse0x3897390();
   input += synapse0x38973d0();
   input += synapse0x3897410();
   input += synapse0x3897450();
   input += synapse0x3897490();
   input += synapse0x38974d0();
   input += synapse0x3896f60();
   input += synapse0x3896fa0();
   input += synapse0x3897620();
   input += synapse0x3897660();
   input += synapse0x38976a0();
   input += synapse0x38976e0();
   input += synapse0x3897720();
   input += synapse0x3897760();
   return input;
}

double NNfunction_sg_cL::neuron0x3896dd0() {
   double input = input0x3896dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38977a0() {
   double input = 0.204298;
   input += synapse0x3897ae0();
   input += synapse0x3897b20();
   input += synapse0x3897b60();
   input += synapse0x3897ba0();
   input += synapse0x3897be0();
   input += synapse0x3897c20();
   input += synapse0x3897c60();
   input += synapse0x3897ca0();
   input += synapse0x3897ce0();
   input += synapse0x3897d20();
   input += synapse0x3897d60();
   input += synapse0x3897da0();
   input += synapse0x3897de0();
   input += synapse0x3897e20();
   input += synapse0x3897e60();
   input += synapse0x3897ea0();
   input += synapse0x3897930();
   input += synapse0x3897970();
   input += synapse0x3897ff0();
   input += synapse0x3898030();
   input += synapse0x3898070();
   input += synapse0x38980b0();
   input += synapse0x38980f0();
   input += synapse0x3898130();
   return input;
}

double NNfunction_sg_cL::neuron0x38977a0() {
   double input = input0x38977a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x389e9a0() {
   double input = -0.264109;
   input += synapse0x3637f10();
   input += synapse0x3637f50();
   input += synapse0x3874ad0();
   input += synapse0x3874b10();
   input += synapse0x38765b0();
   input += synapse0x38765f0();
   input += synapse0x3877380();
   input += synapse0x38773c0();
   input += synapse0x3877d50();
   input += synapse0x3877d90();
   input += synapse0x3878720();
   input += synapse0x3878760();
   input += synapse0x3879200();
   input += synapse0x3879240();
   input += synapse0x3879bd0();
   input += synapse0x3879c10();
   input += synapse0x3876cb0();
   input += synapse0x3876cf0();
   input += synapse0x387b780();
   input += synapse0x387b7c0();
   input += synapse0x387c150();
   input += synapse0x387c190();
   input += synapse0x387cb20();
   input += synapse0x387cb60();
   input += synapse0x387d4f0();
   input += synapse0x387d530();
   input += synapse0x3870580();
   input += synapse0x38705c0();
   input += synapse0x387f5e0();
   input += synapse0x387f620();
   input += synapse0x387ffb0();
   input += synapse0x387fff0();
   input += synapse0x3880980();
   input += synapse0x38809c0();
   input += synapse0x3881350();
   input += synapse0x3881390();
   input += synapse0x3881d20();
   input += synapse0x3881d60();
   input += synapse0x387a870();
   input += synapse0x387a8b0();
   input += synapse0x3884120();
   input += synapse0x3884160();
   input += synapse0x3884ab0();
   input += synapse0x3884af0();
   input += synapse0x3885480();
   input += synapse0x38854c0();
   input += synapse0x3885e50();
   input += synapse0x3885e90();
   input += synapse0x3886820();
   input += synapse0x3886860();
   return input;
}

double NNfunction_sg_cL::neuron0x389e9a0() {
   double input = input0x389e9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x389ed40() {
   double input = -0.281175;
   input += synapse0x3888f60();
   input += synapse0x3888fa0();
   input += synapse0x387e520();
   input += synapse0x387e560();
   input += synapse0x388bb40();
   input += synapse0x388bb80();
   input += synapse0x388c510();
   input += synapse0x388c550();
   input += synapse0x388cee0();
   input += synapse0x388cf20();
   input += synapse0x388d8b0();
   input += synapse0x388d8f0();
   input += synapse0x388e280();
   input += synapse0x388e2c0();
   input += synapse0x388ec50();
   input += synapse0x388ec90();
   input += synapse0x388f620();
   input += synapse0x388f660();
   input += synapse0x388fff0();
   input += synapse0x3890030();
   input += synapse0x3890bd0();
   input += synapse0x3890c10();
   input += synapse0x38915a0();
   input += synapse0x38915e0();
   input += synapse0x3882420();
   input += synapse0x3882460();
   input += synapse0x3882df0();
   input += synapse0x3882e30();
   input += synapse0x38837c0();
   input += synapse0x3883800();
   input += synapse0x3895ce0();
   input += synapse0x3895d20();
   input += synapse0x38966b0();
   input += synapse0x38966f0();
   input += synapse0x3897080();
   input += synapse0x38970c0();
   input += synapse0x3897a50();
   input += synapse0x3897a90();
   input += synapse0x38728c0();
   input += synapse0x3872900();
   input += synapse0x38871f0();
   input += synapse0x3887230();
   input += synapse0x3898170();
   input += synapse0x38981b0();
   input += synapse0x38981f0();
   input += synapse0x3898230();
   input += synapse0x389f0e0();
   input += synapse0x389f120();
   input += synapse0x389f160();
   input += synapse0x389f1a0();
   return input;
}

double NNfunction_sg_cL::neuron0x389ed40() {
   double input = input0x389ed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x389f1e0() {
   double input = -0.868499;
   input += synapse0x389f520();
   input += synapse0x389f560();
   input += synapse0x389f5a0();
   input += synapse0x389f5e0();
   input += synapse0x389f620();
   input += synapse0x389f660();
   input += synapse0x389f6a0();
   input += synapse0x389f6e0();
   input += synapse0x389f720();
   input += synapse0x389f760();
   input += synapse0x389f7a0();
   input += synapse0x389f7e0();
   input += synapse0x389f820();
   input += synapse0x389f860();
   input += synapse0x389f8a0();
   input += synapse0x389f8e0();
   input += synapse0x389f370();
   input += synapse0x389f3b0();
   input += synapse0x389fa30();
   input += synapse0x389fa70();
   input += synapse0x389fab0();
   input += synapse0x389faf0();
   input += synapse0x389fb30();
   input += synapse0x389fb70();
   input += synapse0x389fbb0();
   input += synapse0x389fbf0();
   input += synapse0x389fc30();
   input += synapse0x389fc70();
   input += synapse0x389fcb0();
   input += synapse0x389fcf0();
   input += synapse0x389fd30();
   input += synapse0x389fd70();
   input += synapse0x389f920();
   input += synapse0x389f960();
   input += synapse0x389f9a0();
   input += synapse0x389f9e0();
   input += synapse0x389ffc0();
   input += synapse0x38a0000();
   input += synapse0x38a0040();
   input += synapse0x38a0080();
   input += synapse0x38a00c0();
   input += synapse0x38a0100();
   input += synapse0x38a0140();
   input += synapse0x38a0180();
   input += synapse0x38a01c0();
   input += synapse0x38a0200();
   input += synapse0x38a0240();
   input += synapse0x38a0280();
   input += synapse0x38a02c0();
   input += synapse0x38a0300();
   return input;
}

double NNfunction_sg_cL::neuron0x389f1e0() {
   double input = input0x389f1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38a0340() {
   double input = 0.185069;
   input += synapse0x38a0680();
   input += synapse0x38a06c0();
   input += synapse0x38a0700();
   input += synapse0x38a0740();
   input += synapse0x38a0780();
   input += synapse0x38a07c0();
   input += synapse0x38a0800();
   input += synapse0x38a0840();
   input += synapse0x38a0880();
   input += synapse0x38a08c0();
   input += synapse0x38a0900();
   input += synapse0x38a0940();
   input += synapse0x38a0980();
   input += synapse0x38a09c0();
   input += synapse0x38a0a00();
   input += synapse0x38a0a40();
   input += synapse0x38a04d0();
   input += synapse0x38a0510();
   input += synapse0x38a0b90();
   input += synapse0x38a0bd0();
   input += synapse0x38a0c10();
   input += synapse0x38a0c50();
   input += synapse0x38a0c90();
   input += synapse0x38a0cd0();
   input += synapse0x38a0d10();
   input += synapse0x38a0d50();
   input += synapse0x38a0d90();
   input += synapse0x38a0dd0();
   input += synapse0x38a0e10();
   input += synapse0x38a0e50();
   input += synapse0x38a0e90();
   input += synapse0x38a0ed0();
   input += synapse0x38a0a80();
   input += synapse0x38a0ac0();
   input += synapse0x38a0b00();
   input += synapse0x38a0b40();
   input += synapse0x38a1120();
   input += synapse0x38a1160();
   input += synapse0x38a11a0();
   input += synapse0x38a11e0();
   input += synapse0x38a1220();
   input += synapse0x38a1260();
   input += synapse0x38a12a0();
   input += synapse0x38a12e0();
   input += synapse0x38a1320();
   input += synapse0x38a1360();
   input += synapse0x38a13a0();
   input += synapse0x38a13e0();
   input += synapse0x38a1420();
   input += synapse0x38a1460();
   return input;
}

double NNfunction_sg_cL::neuron0x38a0340() {
   double input = input0x38a0340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38a14a0() {
   double input = 0.0171163;
   input += synapse0x38a17e0();
   input += synapse0x38a1820();
   input += synapse0x38a1860();
   input += synapse0x38a18a0();
   input += synapse0x38a18e0();
   input += synapse0x38a1920();
   input += synapse0x38a1960();
   input += synapse0x38a19a0();
   input += synapse0x38a19e0();
   input += synapse0x38a1a20();
   input += synapse0x38a1a60();
   input += synapse0x38a1aa0();
   input += synapse0x38a1ae0();
   input += synapse0x38a1b20();
   input += synapse0x38a1b60();
   input += synapse0x38a1ba0();
   input += synapse0x38a1630();
   input += synapse0x38a1670();
   input += synapse0x38a1cf0();
   input += synapse0x38a1d30();
   input += synapse0x38a1d70();
   input += synapse0x38a1db0();
   input += synapse0x38a1df0();
   input += synapse0x38a1e30();
   input += synapse0x38a1e70();
   input += synapse0x38a1eb0();
   input += synapse0x38a1ef0();
   input += synapse0x38a1f30();
   input += synapse0x38a1f70();
   input += synapse0x38a1fb0();
   input += synapse0x38a1ff0();
   input += synapse0x38a2030();
   input += synapse0x38a1be0();
   input += synapse0x38a1c20();
   input += synapse0x38a1c60();
   input += synapse0x38a1ca0();
   input += synapse0x38a2280();
   input += synapse0x38a22c0();
   input += synapse0x38a2300();
   input += synapse0x38a2340();
   input += synapse0x38a2380();
   input += synapse0x38a23c0();
   input += synapse0x38a2400();
   input += synapse0x38a2440();
   input += synapse0x38a2480();
   input += synapse0x38a24c0();
   input += synapse0x38a2500();
   input += synapse0x38a2540();
   input += synapse0x38a2580();
   input += synapse0x38a25c0();
   return input;
}

double NNfunction_sg_cL::neuron0x38a14a0() {
   double input = input0x38a14a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cL::input0x38a2600() {
   double input = 5.94669;
   input += synapse0x38a2820();
   input += synapse0x38a2860();
   input += synapse0x38a28a0();
   input += synapse0x38a28e0();
   input += synapse0x38a2920();
   return input;
}

double NNfunction_sg_cL::neuron0x38a2600() {
   double input = input0x38a2600();
   return (input * 1)+0;
}

double NNfunction_sg_cL::synapse0x3872950() {
   return (neuron0x386d670()*0.000322831);
}

double NNfunction_sg_cL::synapse0x3872990() {
   return (neuron0x386d920()*0.010974);
}

double NNfunction_sg_cL::synapse0x38729d0() {
   return (neuron0x386dc60()*-0.109667);
}

double NNfunction_sg_cL::synapse0x3872a10() {
   return (neuron0x386dfa0()*6.77022);
}

double NNfunction_sg_cL::synapse0x3872a50() {
   return (neuron0x386e2e0()*-0.0136695);
}

double NNfunction_sg_cL::synapse0x3872a90() {
   return (neuron0x386e620()*0.0355819);
}

double NNfunction_sg_cL::synapse0x3872ad0() {
   return (neuron0x386e960()*-0.0100117);
}

double NNfunction_sg_cL::synapse0x3872b10() {
   return (neuron0x386eca0()*-0.00374216);
}

double NNfunction_sg_cL::synapse0x3872b50() {
   return (neuron0x386efe0()*0.007732);
}

double NNfunction_sg_cL::synapse0x3872b90() {
   return (neuron0x386f320()*0.00577996);
}

double NNfunction_sg_cL::synapse0x3872bd0() {
   return (neuron0x386f660()*0.00404913);
}

double NNfunction_sg_cL::synapse0x3872c10() {
   return (neuron0x386f9a0()*0.00470706);
}

double NNfunction_sg_cL::synapse0x3872c50() {
   return (neuron0x386fce0()*-0.111985);
}

double NNfunction_sg_cL::synapse0x3872c90() {
   return (neuron0x3870020()*0.0466259);
}

double NNfunction_sg_cL::synapse0x3872cd0() {
   return (neuron0x3870360()*0.0123905);
}

double NNfunction_sg_cL::synapse0x3872d10() {
   return (neuron0x38706a0()*-0.0590414);
}

double NNfunction_sg_cL::synapse0x38727a0() {
   return (neuron0x38709e0()*-0.0227841);
}

double NNfunction_sg_cL::synapse0x38727e0() {
   return (neuron0x3870f40()*-0.00153326);
}

double NNfunction_sg_cL::synapse0x3629c70() {
   return (neuron0x3871160()*-0.00480253);
}

double NNfunction_sg_cL::synapse0x3629cb0() {
   return (neuron0x38714a0()*-0.0130518);
}

double NNfunction_sg_cL::synapse0x3872e60() {
   return (neuron0x38717e0()*-0.0123542);
}

double NNfunction_sg_cL::synapse0x3872ea0() {
   return (neuron0x3871b20()*-0.0122575);
}

double NNfunction_sg_cL::synapse0x3872ee0() {
   return (neuron0x3871e60()*0.0232621);
}

double NNfunction_sg_cL::synapse0x3872f20() {
   return (neuron0x38721a0()*0.0162075);
}

double NNfunction_sg_cL::synapse0x38732a0() {
   return (neuron0x386d670()*0.350677);
}

double NNfunction_sg_cL::synapse0x38732e0() {
   return (neuron0x386d920()*-0.463662);
}

double NNfunction_sg_cL::synapse0x3873320() {
   return (neuron0x386dc60()*-0.132085);
}

double NNfunction_sg_cL::synapse0x3873360() {
   return (neuron0x386dfa0()*-0.44367);
}

double NNfunction_sg_cL::synapse0x38733a0() {
   return (neuron0x386e2e0()*0.641893);
}

double NNfunction_sg_cL::synapse0x38733e0() {
   return (neuron0x386e620()*-0.181377);
}

double NNfunction_sg_cL::synapse0x3873420() {
   return (neuron0x386e960()*-0.14261);
}

double NNfunction_sg_cL::synapse0x3873460() {
   return (neuron0x386eca0()*-0.13628);
}

double NNfunction_sg_cL::synapse0x38734a0() {
   return (neuron0x386efe0()*0.0735095);
}

double NNfunction_sg_cL::synapse0x3872d50() {
   return (neuron0x386f320()*0.00707234);
}

double NNfunction_sg_cL::synapse0x3872d90() {
   return (neuron0x386f660()*0.210268);
}

double NNfunction_sg_cL::synapse0x3872dd0() {
   return (neuron0x386f9a0()*-0.149675);
}

double NNfunction_sg_cL::synapse0x3872e10() {
   return (neuron0x386fce0()*-0.149999);
}

double NNfunction_sg_cL::synapse0x38736f0() {
   return (neuron0x3870020()*0.0746421);
}

double NNfunction_sg_cL::synapse0x3873730() {
   return (neuron0x3870360()*0.0161809);
}

double NNfunction_sg_cL::synapse0x3873770() {
   return (neuron0x38706a0()*0.460765);
}

double NNfunction_sg_cL::synapse0x38730f0() {
   return (neuron0x38709e0()*0.477791);
}

double NNfunction_sg_cL::synapse0x3873130() {
   return (neuron0x3870f40()*0.19078);
}

double NNfunction_sg_cL::synapse0x38738c0() {
   return (neuron0x3871160()*-0.0443904);
}

double NNfunction_sg_cL::synapse0x3873900() {
   return (neuron0x38714a0()*-0.150389);
}

double NNfunction_sg_cL::synapse0x3873940() {
   return (neuron0x38717e0()*-0.548741);
}

double NNfunction_sg_cL::synapse0x3873980() {
   return (neuron0x3871b20()*0.39473);
}

double NNfunction_sg_cL::synapse0x38739c0() {
   return (neuron0x3871e60()*-0.517571);
}

double NNfunction_sg_cL::synapse0x3873a00() {
   return (neuron0x38721a0()*0.0681363);
}

double NNfunction_sg_cL::synapse0x3873d80() {
   return (neuron0x386d670()*-0.00968002);
}

double NNfunction_sg_cL::synapse0x3873dc0() {
   return (neuron0x386d920()*0.0337781);
}

double NNfunction_sg_cL::synapse0x3873e00() {
   return (neuron0x386dc60()*-0.208668);
}

double NNfunction_sg_cL::synapse0x3873e40() {
   return (neuron0x386dfa0()*-0.170331);
}

double NNfunction_sg_cL::synapse0x3873e80() {
   return (neuron0x386e2e0()*0.194467);
}

double NNfunction_sg_cL::synapse0x3873ec0() {
   return (neuron0x386e620()*-0.0652214);
}

double NNfunction_sg_cL::synapse0x3873f00() {
   return (neuron0x386e960()*-0.025389);
}

double NNfunction_sg_cL::synapse0x3873f40() {
   return (neuron0x386eca0()*-0.17916);
}

double NNfunction_sg_cL::synapse0x3873f80() {
   return (neuron0x386efe0()*0.0517011);
}

double NNfunction_sg_cL::synapse0x3873fc0() {
   return (neuron0x386f320()*0.0598623);
}

double NNfunction_sg_cL::synapse0x3874000() {
   return (neuron0x386f660()*0.0708367);
}

double NNfunction_sg_cL::synapse0x3874040() {
   return (neuron0x386f9a0()*0.532854);
}

double NNfunction_sg_cL::synapse0x3874080() {
   return (neuron0x386fce0()*-0.363319);
}

double NNfunction_sg_cL::synapse0x38740c0() {
   return (neuron0x3870020()*-0.47597);
}

double NNfunction_sg_cL::synapse0x3874100() {
   return (neuron0x3870360()*0.141727);
}

double NNfunction_sg_cL::synapse0x3874140() {
   return (neuron0x38706a0()*-0.153639);
}

double NNfunction_sg_cL::synapse0x3873bd0() {
   return (neuron0x38709e0()*-0.544143);
}

double NNfunction_sg_cL::synapse0x3873c10() {
   return (neuron0x3870f40()*0.203583);
}

double NNfunction_sg_cL::synapse0x27b8390() {
   return (neuron0x3871160()*0.101623);
}

double NNfunction_sg_cL::synapse0x3637720() {
   return (neuron0x38714a0()*0.240012);
}

double NNfunction_sg_cL::synapse0x3637760() {
   return (neuron0x38717e0()*0.0118042);
}

double NNfunction_sg_cL::synapse0x3876080() {
   return (neuron0x3871b20()*0.0905278);
}

double NNfunction_sg_cL::synapse0x38760c0() {
   return (neuron0x3871e60()*-0.00218842);
}

double NNfunction_sg_cL::synapse0x386d3b0() {
   return (neuron0x38721a0()*0.0922978);
}

double NNfunction_sg_cL::synapse0x386d480() {
   return (neuron0x386d670()*-0.0129306);
}

double NNfunction_sg_cL::synapse0x3637fa0() {
   return (neuron0x386d920()*-0.0498363);
}

double NNfunction_sg_cL::synapse0x3873670() {
   return (neuron0x386dc60()*-0.000688428);
}

double NNfunction_sg_cL::synapse0x38736b0() {
   return (neuron0x386dfa0()*-3.2457);
}

double NNfunction_sg_cL::synapse0x3874290() {
   return (neuron0x386e2e0()*-0.00153755);
}

double NNfunction_sg_cL::synapse0x38742d0() {
   return (neuron0x386e620()*0.0508275);
}

double NNfunction_sg_cL::synapse0x3874310() {
   return (neuron0x386e960()*0.0554216);
}

double NNfunction_sg_cL::synapse0x3874350() {
   return (neuron0x386eca0()*2.33433e-05);
}

double NNfunction_sg_cL::synapse0x3874390() {
   return (neuron0x386efe0()*-0.0212358);
}

double NNfunction_sg_cL::synapse0x38743d0() {
   return (neuron0x386f320()*0.00541254);
}

double NNfunction_sg_cL::synapse0x3874410() {
   return (neuron0x386f660()*-0.0292462);
}

double NNfunction_sg_cL::synapse0x3874450() {
   return (neuron0x386f9a0()*-0.0304973);
}

double NNfunction_sg_cL::synapse0x3874490() {
   return (neuron0x386fce0()*-0.278378);
}

double NNfunction_sg_cL::synapse0x38744d0() {
   return (neuron0x3870020()*-0.0622585);
}

double NNfunction_sg_cL::synapse0x3874510() {
   return (neuron0x3870360()*-0.0406715);
}

double NNfunction_sg_cL::synapse0x3874550() {
   return (neuron0x38706a0()*-0.0403727);
}

double NNfunction_sg_cL::synapse0x386d3f0() {
   return (neuron0x38709e0()*-0.0224651);
}

double NNfunction_sg_cL::synapse0x386d430() {
   return (neuron0x3870f40()*-0.0573644);
}

double NNfunction_sg_cL::synapse0x38746a0() {
   return (neuron0x3871160()*-0.0685376);
}

double NNfunction_sg_cL::synapse0x38746e0() {
   return (neuron0x38714a0()*-0.075999);
}

double NNfunction_sg_cL::synapse0x3874720() {
   return (neuron0x38717e0()*0.0251983);
}

double NNfunction_sg_cL::synapse0x3874760() {
   return (neuron0x3871b20()*-0.0113707);
}

double NNfunction_sg_cL::synapse0x38747a0() {
   return (neuron0x3871e60()*0.0124787);
}

double NNfunction_sg_cL::synapse0x38747e0() {
   return (neuron0x38721a0()*0.00115662);
}

double NNfunction_sg_cL::synapse0x3874b60() {
   return (neuron0x386d670()*0.00101248);
}

double NNfunction_sg_cL::synapse0x3874ba0() {
   return (neuron0x386d920()*-0.0137491);
}

double NNfunction_sg_cL::synapse0x3874be0() {
   return (neuron0x386dc60()*-0.0174313);
}

double NNfunction_sg_cL::synapse0x3874c20() {
   return (neuron0x386dfa0()*3.02121);
}

double NNfunction_sg_cL::synapse0x3874c60() {
   return (neuron0x386e2e0()*-0.01586);
}

double NNfunction_sg_cL::synapse0x3874ca0() {
   return (neuron0x386e620()*0.0326545);
}

double NNfunction_sg_cL::synapse0x3874ce0() {
   return (neuron0x386e960()*-0.0192993);
}

double NNfunction_sg_cL::synapse0x3874d20() {
   return (neuron0x386eca0()*-0.00417478);
}

double NNfunction_sg_cL::synapse0x3874d60() {
   return (neuron0x386efe0()*-0.0512115);
}

double NNfunction_sg_cL::synapse0x3874da0() {
   return (neuron0x386f320()*-0.0289919);
}

double NNfunction_sg_cL::synapse0x3874de0() {
   return (neuron0x386f660()*-0.0158544);
}

double NNfunction_sg_cL::synapse0x3874e20() {
   return (neuron0x386f9a0()*0.0182499);
}

double NNfunction_sg_cL::synapse0x3874e60() {
   return (neuron0x386fce0()*0.173999);
}

double NNfunction_sg_cL::synapse0x3874ea0() {
   return (neuron0x3870020()*-0.0800297);
}

double NNfunction_sg_cL::synapse0x3874ee0() {
   return (neuron0x3870360()*0.039389);
}

double NNfunction_sg_cL::synapse0x3874f20() {
   return (neuron0x38706a0()*-0.00773808);
}

double NNfunction_sg_cL::synapse0x3875070() {
   return (neuron0x38709e0()*-0.0641689);
}

double NNfunction_sg_cL::synapse0x38749b0() {
   return (neuron0x3870f40()*0.0173485);
}

double NNfunction_sg_cL::synapse0x38749f0() {
   return (neuron0x3871160()*-0.0198303);
}

double NNfunction_sg_cL::synapse0x38761c0() {
   return (neuron0x38714a0()*-0.0590241);
}

double NNfunction_sg_cL::synapse0x3876200() {
   return (neuron0x38717e0()*0.0515336);
}

double NNfunction_sg_cL::synapse0x3876240() {
   return (neuron0x3871b20()*-0.0197199);
}

double NNfunction_sg_cL::synapse0x3876280() {
   return (neuron0x3871e60()*0.0245958);
}

double NNfunction_sg_cL::synapse0x38762c0() {
   return (neuron0x38721a0()*0.0136849);
}

double NNfunction_sg_cL::synapse0x3876640() {
   return (neuron0x386d670()*0.382065);
}

double NNfunction_sg_cL::synapse0x3876680() {
   return (neuron0x386d920()*0.0421759);
}

double NNfunction_sg_cL::synapse0x38766c0() {
   return (neuron0x386dc60()*0.448831);
}

double NNfunction_sg_cL::synapse0x3876700() {
   return (neuron0x386dfa0()*-0.0626734);
}

double NNfunction_sg_cL::synapse0x3876740() {
   return (neuron0x386e2e0()*-0.347395);
}

double NNfunction_sg_cL::synapse0x3876780() {
   return (neuron0x386e620()*0.776157);
}

double NNfunction_sg_cL::synapse0x38767c0() {
   return (neuron0x386e960()*0.0716217);
}

double NNfunction_sg_cL::synapse0x3876800() {
   return (neuron0x386eca0()*0.247414);
}

double NNfunction_sg_cL::synapse0x3876840() {
   return (neuron0x386efe0()*-0.151325);
}

double NNfunction_sg_cL::synapse0x3637a70() {
   return (neuron0x386f320()*0.347609);
}

double NNfunction_sg_cL::synapse0x3637ab0() {
   return (neuron0x386f660()*-0.0570553);
}

double NNfunction_sg_cL::synapse0x3637af0() {
   return (neuron0x386f9a0()*-0.162439);
}

double NNfunction_sg_cL::synapse0x3637b30() {
   return (neuron0x386fce0()*0.504517);
}

double NNfunction_sg_cL::synapse0x3637b70() {
   return (neuron0x3870020()*0.19686);
}

double NNfunction_sg_cL::synapse0x3637bb0() {
   return (neuron0x3870360()*0.358178);
}

double NNfunction_sg_cL::synapse0x3637bf0() {
   return (neuron0x38706a0()*0.0133589);
}

double NNfunction_sg_cL::synapse0x3876490() {
   return (neuron0x38709e0()*-0.123021);
}

double NNfunction_sg_cL::synapse0x38764d0() {
   return (neuron0x3870f40()*-0.05363);
}

double NNfunction_sg_cL::synapse0x3637d40() {
   return (neuron0x3871160()*0.0857654);
}

double NNfunction_sg_cL::synapse0x3637d80() {
   return (neuron0x38714a0()*-0.0937175);
}

double NNfunction_sg_cL::synapse0x3637dc0() {
   return (neuron0x38717e0()*-0.0946064);
}

double NNfunction_sg_cL::synapse0x3637e00() {
   return (neuron0x3871b20()*-0.0223316);
}

double NNfunction_sg_cL::synapse0x3637e40() {
   return (neuron0x3871e60()*0.331853);
}

double NNfunction_sg_cL::synapse0x3877090() {
   return (neuron0x38721a0()*0.121843);
}

double NNfunction_sg_cL::synapse0x3877410() {
   return (neuron0x386d670()*0.0650708);
}

double NNfunction_sg_cL::synapse0x3877450() {
   return (neuron0x386d920()*-0.00967034);
}

double NNfunction_sg_cL::synapse0x3877490() {
   return (neuron0x386dc60()*-0.296626);
}

double NNfunction_sg_cL::synapse0x38774d0() {
   return (neuron0x386dfa0()*-0.832665);
}

double NNfunction_sg_cL::synapse0x3877510() {
   return (neuron0x386e2e0()*0.0135614);
}

double NNfunction_sg_cL::synapse0x3877550() {
   return (neuron0x386e620()*-0.197447);
}

double NNfunction_sg_cL::synapse0x3877590() {
   return (neuron0x386e960()*0.0105087);
}

double NNfunction_sg_cL::synapse0x38775d0() {
   return (neuron0x386eca0()*-0.124513);
}

double NNfunction_sg_cL::synapse0x3877610() {
   return (neuron0x386efe0()*-0.0200506);
}

double NNfunction_sg_cL::synapse0x3877650() {
   return (neuron0x386f320()*-0.0258244);
}

double NNfunction_sg_cL::synapse0x3877690() {
   return (neuron0x386f660()*0.0403874);
}

double NNfunction_sg_cL::synapse0x38776d0() {
   return (neuron0x386f9a0()*-0.155454);
}

double NNfunction_sg_cL::synapse0x3877710() {
   return (neuron0x386fce0()*-0.70217);
}

double NNfunction_sg_cL::synapse0x3877750() {
   return (neuron0x3870020()*0.140293);
}

double NNfunction_sg_cL::synapse0x3877790() {
   return (neuron0x3870360()*0.763751);
}

double NNfunction_sg_cL::synapse0x38777d0() {
   return (neuron0x38706a0()*-0.0562909);
}

double NNfunction_sg_cL::synapse0x3877260() {
   return (neuron0x38709e0()*0.0566022);
}

double NNfunction_sg_cL::synapse0x38772a0() {
   return (neuron0x3870f40()*-0.139575);
}

double NNfunction_sg_cL::synapse0x3877920() {
   return (neuron0x3871160()*-0.0690487);
}

double NNfunction_sg_cL::synapse0x3877960() {
   return (neuron0x38714a0()*-0.0296416);
}

double NNfunction_sg_cL::synapse0x38779a0() {
   return (neuron0x38717e0()*0.00874579);
}

double NNfunction_sg_cL::synapse0x38779e0() {
   return (neuron0x3871b20()*0.0782442);
}

double NNfunction_sg_cL::synapse0x3877a20() {
   return (neuron0x3871e60()*-0.0487063);
}

double NNfunction_sg_cL::synapse0x3877a60() {
   return (neuron0x38721a0()*-0.111772);
}

double NNfunction_sg_cL::synapse0x3877de0() {
   return (neuron0x386d670()*-0.0220971);
}

double NNfunction_sg_cL::synapse0x3877e20() {
   return (neuron0x386d920()*0.0173099);
}

double NNfunction_sg_cL::synapse0x3877e60() {
   return (neuron0x386dc60()*-0.748368);
}

double NNfunction_sg_cL::synapse0x3877ea0() {
   return (neuron0x386dfa0()*-0.344477);
}

double NNfunction_sg_cL::synapse0x3877ee0() {
   return (neuron0x386e2e0()*-0.0990438);
}

double NNfunction_sg_cL::synapse0x3877f20() {
   return (neuron0x386e620()*0.0118454);
}

double NNfunction_sg_cL::synapse0x3877f60() {
   return (neuron0x386e960()*0.0158223);
}

double NNfunction_sg_cL::synapse0x3877fa0() {
   return (neuron0x386eca0()*0.0145806);
}

double NNfunction_sg_cL::synapse0x3877fe0() {
   return (neuron0x386efe0()*3.12684e-05);
}

double NNfunction_sg_cL::synapse0x3878020() {
   return (neuron0x386f320()*-0.0248517);
}

double NNfunction_sg_cL::synapse0x3878060() {
   return (neuron0x386f660()*0.00575457);
}

double NNfunction_sg_cL::synapse0x38780a0() {
   return (neuron0x386f9a0()*-0.0391394);
}

double NNfunction_sg_cL::synapse0x38780e0() {
   return (neuron0x386fce0()*-0.278479);
}

double NNfunction_sg_cL::synapse0x3878120() {
   return (neuron0x3870020()*0.0478734);
}

double NNfunction_sg_cL::synapse0x3878160() {
   return (neuron0x3870360()*-0.0482594);
}

double NNfunction_sg_cL::synapse0x38781a0() {
   return (neuron0x38706a0()*-0.134923);
}

double NNfunction_sg_cL::synapse0x3877c30() {
   return (neuron0x38709e0()*-0.00346161);
}

double NNfunction_sg_cL::synapse0x3877c70() {
   return (neuron0x3870f40()*0.0570821);
}

double NNfunction_sg_cL::synapse0x38782f0() {
   return (neuron0x3871160()*0.0399057);
}

double NNfunction_sg_cL::synapse0x3878330() {
   return (neuron0x38714a0()*0.0427027);
}

double NNfunction_sg_cL::synapse0x3878370() {
   return (neuron0x38717e0()*0.0123193);
}

double NNfunction_sg_cL::synapse0x38783b0() {
   return (neuron0x3871b20()*0.0105574);
}

double NNfunction_sg_cL::synapse0x38783f0() {
   return (neuron0x3871e60()*-0.0266623);
}

double NNfunction_sg_cL::synapse0x3878430() {
   return (neuron0x38721a0()*-0.0240477);
}

double NNfunction_sg_cL::synapse0x3870e30() {
   return (neuron0x386d670()*0.00693903);
}

double NNfunction_sg_cL::synapse0x3870e70() {
   return (neuron0x386d920()*0.00748034);
}

double NNfunction_sg_cL::synapse0x3870eb0() {
   return (neuron0x386dc60()*0.0982603);
}

double NNfunction_sg_cL::synapse0x3870ef0() {
   return (neuron0x386dfa0()*2.67031);
}

double NNfunction_sg_cL::synapse0x38789c0() {
   return (neuron0x386e2e0()*-0.00411252);
}

double NNfunction_sg_cL::synapse0x3878a00() {
   return (neuron0x386e620()*0.0258833);
}

double NNfunction_sg_cL::synapse0x3878a40() {
   return (neuron0x386e960()*0.0322285);
}

double NNfunction_sg_cL::synapse0x3878a80() {
   return (neuron0x386eca0()*0.0436956);
}

double NNfunction_sg_cL::synapse0x3878ac0() {
   return (neuron0x386efe0()*0.0809355);
}

double NNfunction_sg_cL::synapse0x3878b00() {
   return (neuron0x386f320()*0.0551567);
}

double NNfunction_sg_cL::synapse0x3878b40() {
   return (neuron0x386f660()*0.0112971);
}

double NNfunction_sg_cL::synapse0x3878b80() {
   return (neuron0x386f9a0()*0.0095398);
}

double NNfunction_sg_cL::synapse0x3878bc0() {
   return (neuron0x386fce0()*-0.207265);
}

double NNfunction_sg_cL::synapse0x3878c00() {
   return (neuron0x3870020()*-0.0170514);
}

double NNfunction_sg_cL::synapse0x3878c40() {
   return (neuron0x3870360()*-0.0618517);
}

double NNfunction_sg_cL::synapse0x3878c80() {
   return (neuron0x38706a0()*0.0193369);
}

double NNfunction_sg_cL::synapse0x3878600() {
   return (neuron0x38709e0()*-0.00111583);
}

double NNfunction_sg_cL::synapse0x3878640() {
   return (neuron0x3870f40()*-0.0023647);
}

double NNfunction_sg_cL::synapse0x3878dd0() {
   return (neuron0x3871160()*0.00127208);
}

double NNfunction_sg_cL::synapse0x3878e10() {
   return (neuron0x38714a0()*0.0039115);
}

double NNfunction_sg_cL::synapse0x3878e50() {
   return (neuron0x38717e0()*0.000548568);
}

double NNfunction_sg_cL::synapse0x3878e90() {
   return (neuron0x3871b20()*-0.0134881);
}

double NNfunction_sg_cL::synapse0x3878ed0() {
   return (neuron0x3871e60()*0.00391073);
}

double NNfunction_sg_cL::synapse0x3878f10() {
   return (neuron0x38721a0()*-0.0148628);
}

double NNfunction_sg_cL::synapse0x3879290() {
   return (neuron0x386d670()*0.00114035);
}

double NNfunction_sg_cL::synapse0x38792d0() {
   return (neuron0x386d920()*-0.0010386);
}

double NNfunction_sg_cL::synapse0x3879310() {
   return (neuron0x386dc60()*-0.0510564);
}

double NNfunction_sg_cL::synapse0x3879350() {
   return (neuron0x386dfa0()*-0.279452);
}

double NNfunction_sg_cL::synapse0x3879390() {
   return (neuron0x386e2e0()*0.0057193);
}

double NNfunction_sg_cL::synapse0x38793d0() {
   return (neuron0x386e620()*-0.00169283);
}

double NNfunction_sg_cL::synapse0x3879410() {
   return (neuron0x386e960()*-0.000684225);
}

double NNfunction_sg_cL::synapse0x3879450() {
   return (neuron0x386eca0()*-0.011035);
}

double NNfunction_sg_cL::synapse0x3879490() {
   return (neuron0x386efe0()*-0.0108659);
}

double NNfunction_sg_cL::synapse0x38794d0() {
   return (neuron0x386f320()*-0.0242308);
}

double NNfunction_sg_cL::synapse0x3879510() {
   return (neuron0x386f660()*-0.0223668);
}

double NNfunction_sg_cL::synapse0x3879550() {
   return (neuron0x386f9a0()*-0.0142113);
}

double NNfunction_sg_cL::synapse0x3879590() {
   return (neuron0x386fce0()*0.966678);
}

double NNfunction_sg_cL::synapse0x38795d0() {
   return (neuron0x3870020()*0.00656559);
}

double NNfunction_sg_cL::synapse0x3879610() {
   return (neuron0x3870360()*-0.00967965);
}

double NNfunction_sg_cL::synapse0x3879650() {
   return (neuron0x38706a0()*-0.011892);
}

double NNfunction_sg_cL::synapse0x38790e0() {
   return (neuron0x38709e0()*0.00774805);
}

double NNfunction_sg_cL::synapse0x3879120() {
   return (neuron0x3870f40()*-0.0224797);
}

double NNfunction_sg_cL::synapse0x38797a0() {
   return (neuron0x3871160()*-0.0157151);
}

double NNfunction_sg_cL::synapse0x38797e0() {
   return (neuron0x38714a0()*-0.00952691);
}

double NNfunction_sg_cL::synapse0x3879820() {
   return (neuron0x38717e0()*-0.00783983);
}

double NNfunction_sg_cL::synapse0x3879860() {
   return (neuron0x3871b20()*-0.00494195);
}

double NNfunction_sg_cL::synapse0x38798a0() {
   return (neuron0x3871e60()*0.00310613);
}

double NNfunction_sg_cL::synapse0x38798e0() {
   return (neuron0x38721a0()*0.00591579);
}

double NNfunction_sg_cL::synapse0x3879c60() {
   return (neuron0x386d670()*0.00608163);
}

double NNfunction_sg_cL::synapse0x3879ca0() {
   return (neuron0x386d920()*0.00789293);
}

double NNfunction_sg_cL::synapse0x3879ce0() {
   return (neuron0x386dc60()*0.030156);
}

double NNfunction_sg_cL::synapse0x3879d20() {
   return (neuron0x386dfa0()*-0.0709502);
}

double NNfunction_sg_cL::synapse0x3879d60() {
   return (neuron0x386e2e0()*0.00807721);
}

double NNfunction_sg_cL::synapse0x3879da0() {
   return (neuron0x386e620()*-0.00119316);
}

double NNfunction_sg_cL::synapse0x3879de0() {
   return (neuron0x386e960()*0.00629373);
}

double NNfunction_sg_cL::synapse0x3879e20() {
   return (neuron0x386eca0()*0.00236019);
}

double NNfunction_sg_cL::synapse0x3879e60() {
   return (neuron0x386efe0()*0.00577456);
}

double NNfunction_sg_cL::synapse0x3879ea0() {
   return (neuron0x386f320()*-0.0179318);
}

double NNfunction_sg_cL::synapse0x3879ee0() {
   return (neuron0x386f660()*0.00428081);
}

double NNfunction_sg_cL::synapse0x3879f20() {
   return (neuron0x386f9a0()*-0.00733728);
}

double NNfunction_sg_cL::synapse0x3879f60() {
   return (neuron0x386fce0()*-2.49436);
}

double NNfunction_sg_cL::synapse0x3879fa0() {
   return (neuron0x3870020()*-0.00864877);
}

double NNfunction_sg_cL::synapse0x3879fe0() {
   return (neuron0x3870360()*0.00383916);
}

double NNfunction_sg_cL::synapse0x387a020() {
   return (neuron0x38706a0()*0.00423383);
}

double NNfunction_sg_cL::synapse0x3879ab0() {
   return (neuron0x38709e0()*-0.00749143);
}

double NNfunction_sg_cL::synapse0x3879af0() {
   return (neuron0x3870f40()*-0.0154824);
}

double NNfunction_sg_cL::synapse0x3876880() {
   return (neuron0x3871160()*-0.00606381);
}

double NNfunction_sg_cL::synapse0x38768c0() {
   return (neuron0x38714a0()*-0.0078718);
}

double NNfunction_sg_cL::synapse0x3876900() {
   return (neuron0x38717e0()*0.00369241);
}

double NNfunction_sg_cL::synapse0x3876940() {
   return (neuron0x3871b20()*0.00359055);
}

double NNfunction_sg_cL::synapse0x3876980() {
   return (neuron0x3871e60()*0.0039662);
}

double NNfunction_sg_cL::synapse0x38769c0() {
   return (neuron0x38721a0()*0.00426094);
}

double NNfunction_sg_cL::synapse0x3876d40() {
   return (neuron0x386d670()*-0.0359655);
}

double NNfunction_sg_cL::synapse0x3876d80() {
   return (neuron0x386d920()*-0.0158875);
}

double NNfunction_sg_cL::synapse0x3876dc0() {
   return (neuron0x386dc60()*-0.0846007);
}

double NNfunction_sg_cL::synapse0x3876e00() {
   return (neuron0x386dfa0()*-2.25542);
}

double NNfunction_sg_cL::synapse0x3876e40() {
   return (neuron0x386e2e0()*-0.00950335);
}

double NNfunction_sg_cL::synapse0x3876e80() {
   return (neuron0x386e620()*-0.0339712);
}

double NNfunction_sg_cL::synapse0x3876ec0() {
   return (neuron0x386e960()*-0.0780525);
}

double NNfunction_sg_cL::synapse0x3876f00() {
   return (neuron0x386eca0()*-0.0158695);
}

double NNfunction_sg_cL::synapse0x3876f40() {
   return (neuron0x386efe0()*-0.128076);
}

double NNfunction_sg_cL::synapse0x3876f80() {
   return (neuron0x386f320()*0.00837303);
}

double NNfunction_sg_cL::synapse0x3876fc0() {
   return (neuron0x386f660()*-0.0854661);
}

double NNfunction_sg_cL::synapse0x3877000() {
   return (neuron0x386f9a0()*-0.0840946);
}

double NNfunction_sg_cL::synapse0x3877040() {
   return (neuron0x386fce0()*0.181602);
}

double NNfunction_sg_cL::synapse0x387b180() {
   return (neuron0x3870020()*0.000227001);
}

double NNfunction_sg_cL::synapse0x387b1c0() {
   return (neuron0x3870360()*-0.0526759);
}

double NNfunction_sg_cL::synapse0x387b200() {
   return (neuron0x38706a0()*-0.038398);
}

double NNfunction_sg_cL::synapse0x3876b90() {
   return (neuron0x38709e0()*-0.0178253);
}

double NNfunction_sg_cL::synapse0x3876bd0() {
   return (neuron0x3870f40()*-0.119426);
}

double NNfunction_sg_cL::synapse0x387b350() {
   return (neuron0x3871160()*-0.10885);
}

double NNfunction_sg_cL::synapse0x387b390() {
   return (neuron0x38714a0()*-0.0773054);
}

double NNfunction_sg_cL::synapse0x387b3d0() {
   return (neuron0x38717e0()*-0.0181012);
}

double NNfunction_sg_cL::synapse0x387b410() {
   return (neuron0x3871b20()*-0.0465845);
}

double NNfunction_sg_cL::synapse0x387b450() {
   return (neuron0x3871e60()*0.0183784);
}

double NNfunction_sg_cL::synapse0x387b490() {
   return (neuron0x38721a0()*0.0882267);
}

double NNfunction_sg_cL::synapse0x387b810() {
   return (neuron0x386d670()*0.00338544);
}

double NNfunction_sg_cL::synapse0x387b850() {
   return (neuron0x386d920()*0.0692675);
}

double NNfunction_sg_cL::synapse0x387b890() {
   return (neuron0x386dc60()*-0.0104113);
}

double NNfunction_sg_cL::synapse0x387b8d0() {
   return (neuron0x386dfa0()*-1.6916);
}

double NNfunction_sg_cL::synapse0x387b910() {
   return (neuron0x386e2e0()*0.0360403);
}

double NNfunction_sg_cL::synapse0x387b950() {
   return (neuron0x386e620()*0.0278661);
}

double NNfunction_sg_cL::synapse0x387b990() {
   return (neuron0x386e960()*-0.0176582);
}

double NNfunction_sg_cL::synapse0x387b9d0() {
   return (neuron0x386eca0()*0.0690136);
}

double NNfunction_sg_cL::synapse0x387ba10() {
   return (neuron0x386efe0()*0.0499251);
}

double NNfunction_sg_cL::synapse0x387ba50() {
   return (neuron0x386f320()*0.027915);
}

double NNfunction_sg_cL::synapse0x387ba90() {
   return (neuron0x386f660()*-0.0188894);
}

double NNfunction_sg_cL::synapse0x387bad0() {
   return (neuron0x386f9a0()*-0.645312);
}

double NNfunction_sg_cL::synapse0x387bb10() {
   return (neuron0x386fce0()*0.0821674);
}

double NNfunction_sg_cL::synapse0x387bb50() {
   return (neuron0x3870020()*-0.0219249);
}

double NNfunction_sg_cL::synapse0x387bb90() {
   return (neuron0x3870360()*-0.122674);
}

double NNfunction_sg_cL::synapse0x387bbd0() {
   return (neuron0x38706a0()*-0.198626);
}

double NNfunction_sg_cL::synapse0x387b660() {
   return (neuron0x38709e0()*0.0143287);
}

double NNfunction_sg_cL::synapse0x387b6a0() {
   return (neuron0x3870f40()*-0.243277);
}

double NNfunction_sg_cL::synapse0x387bd20() {
   return (neuron0x3871160()*-0.2623);
}

double NNfunction_sg_cL::synapse0x387bd60() {
   return (neuron0x38714a0()*0.017699);
}

double NNfunction_sg_cL::synapse0x387bda0() {
   return (neuron0x38717e0()*0.0178714);
}

double NNfunction_sg_cL::synapse0x387bde0() {
   return (neuron0x3871b20()*-0.0336453);
}

double NNfunction_sg_cL::synapse0x387be20() {
   return (neuron0x3871e60()*-0.0260871);
}

double NNfunction_sg_cL::synapse0x387be60() {
   return (neuron0x38721a0()*-0.00129826);
}

double NNfunction_sg_cL::synapse0x387c1e0() {
   return (neuron0x386d670()*0.291516);
}

double NNfunction_sg_cL::synapse0x387c220() {
   return (neuron0x386d920()*0.149102);
}

double NNfunction_sg_cL::synapse0x387c260() {
   return (neuron0x386dc60()*-0.140432);
}

double NNfunction_sg_cL::synapse0x387c2a0() {
   return (neuron0x386dfa0()*-0.510579);
}

double NNfunction_sg_cL::synapse0x387c2e0() {
   return (neuron0x386e2e0()*0.453858);
}

double NNfunction_sg_cL::synapse0x387c320() {
   return (neuron0x386e620()*0.124891);
}

double NNfunction_sg_cL::synapse0x387c360() {
   return (neuron0x386e960()*0.0533759);
}

double NNfunction_sg_cL::synapse0x387c3a0() {
   return (neuron0x386eca0()*0.245801);
}

double NNfunction_sg_cL::synapse0x387c3e0() {
   return (neuron0x386efe0()*-0.154002);
}

double NNfunction_sg_cL::synapse0x387c420() {
   return (neuron0x386f320()*-0.0903711);
}

double NNfunction_sg_cL::synapse0x387c460() {
   return (neuron0x386f660()*0.313401);
}

double NNfunction_sg_cL::synapse0x387c4a0() {
   return (neuron0x386f9a0()*-0.468893);
}

double NNfunction_sg_cL::synapse0x387c4e0() {
   return (neuron0x386fce0()*0.825227);
}

double NNfunction_sg_cL::synapse0x387c520() {
   return (neuron0x3870020()*0.167588);
}

double NNfunction_sg_cL::synapse0x387c560() {
   return (neuron0x3870360()*-0.415138);
}

double NNfunction_sg_cL::synapse0x387c5a0() {
   return (neuron0x38706a0()*0.137789);
}

double NNfunction_sg_cL::synapse0x387c030() {
   return (neuron0x38709e0()*-0.54583);
}

double NNfunction_sg_cL::synapse0x387c070() {
   return (neuron0x3870f40()*-0.121264);
}

double NNfunction_sg_cL::synapse0x387c6f0() {
   return (neuron0x3871160()*0.303613);
}

double NNfunction_sg_cL::synapse0x387c730() {
   return (neuron0x38714a0()*0.176654);
}

double NNfunction_sg_cL::synapse0x387c770() {
   return (neuron0x38717e0()*0.0603838);
}

double NNfunction_sg_cL::synapse0x387c7b0() {
   return (neuron0x3871b20()*0.0692175);
}

double NNfunction_sg_cL::synapse0x387c7f0() {
   return (neuron0x3871e60()*0.0669387);
}

double NNfunction_sg_cL::synapse0x387c830() {
   return (neuron0x38721a0()*-0.0834516);
}

double NNfunction_sg_cL::synapse0x387cbb0() {
   return (neuron0x386d670()*-0.205161);
}

double NNfunction_sg_cL::synapse0x387cbf0() {
   return (neuron0x386d920()*-0.588077);
}

double NNfunction_sg_cL::synapse0x387cc30() {
   return (neuron0x386dc60()*-0.377136);
}

double NNfunction_sg_cL::synapse0x387cc70() {
   return (neuron0x386dfa0()*0.578305);
}

double NNfunction_sg_cL::synapse0x387ccb0() {
   return (neuron0x386e2e0()*0.124906);
}

double NNfunction_sg_cL::synapse0x387ccf0() {
   return (neuron0x386e620()*-0.382501);
}

double NNfunction_sg_cL::synapse0x387cd30() {
   return (neuron0x386e960()*-0.398174);
}

double NNfunction_sg_cL::synapse0x387cd70() {
   return (neuron0x386eca0()*0.0237384);
}

double NNfunction_sg_cL::synapse0x387cdb0() {
   return (neuron0x386efe0()*-0.16787);
}

double NNfunction_sg_cL::synapse0x387cdf0() {
   return (neuron0x386f320()*0.376663);
}

double NNfunction_sg_cL::synapse0x387ce30() {
   return (neuron0x386f660()*0.223641);
}

double NNfunction_sg_cL::synapse0x387ce70() {
   return (neuron0x386f9a0()*0.320983);
}

double NNfunction_sg_cL::synapse0x387ceb0() {
   return (neuron0x386fce0()*0.16958);
}

double NNfunction_sg_cL::synapse0x387cef0() {
   return (neuron0x3870020()*0.349895);
}

double NNfunction_sg_cL::synapse0x387cf30() {
   return (neuron0x3870360()*-0.263494);
}

double NNfunction_sg_cL::synapse0x387cf70() {
   return (neuron0x38706a0()*-0.504249);
}

double NNfunction_sg_cL::synapse0x387ca00() {
   return (neuron0x38709e0()*0.367677);
}

double NNfunction_sg_cL::synapse0x387ca40() {
   return (neuron0x3870f40()*-0.147518);
}

double NNfunction_sg_cL::synapse0x387d0c0() {
   return (neuron0x3871160()*-0.0936474);
}

double NNfunction_sg_cL::synapse0x387d100() {
   return (neuron0x38714a0()*0.170868);
}

double NNfunction_sg_cL::synapse0x387d140() {
   return (neuron0x38717e0()*0.259327);
}

double NNfunction_sg_cL::synapse0x387d180() {
   return (neuron0x3871b20()*0.0122149);
}

double NNfunction_sg_cL::synapse0x387d1c0() {
   return (neuron0x3871e60()*0.015434);
}

double NNfunction_sg_cL::synapse0x387d200() {
   return (neuron0x38721a0()*-0.346702);
}

double NNfunction_sg_cL::synapse0x387d580() {
   return (neuron0x386d670()*0.0942501);
}

double NNfunction_sg_cL::synapse0x386d800() {
   return (neuron0x386d920()*-0.368704);
}

double NNfunction_sg_cL::synapse0x386d840() {
   return (neuron0x386dc60()*-0.638504);
}

double NNfunction_sg_cL::synapse0x386db40() {
   return (neuron0x386dfa0()*0.039034);
}

double NNfunction_sg_cL::synapse0x386db80() {
   return (neuron0x386e2e0()*0.0450389);
}

double NNfunction_sg_cL::synapse0x386de80() {
   return (neuron0x386e620()*-0.0936705);
}

double NNfunction_sg_cL::synapse0x386dec0() {
   return (neuron0x386e960()*0.488881);
}

double NNfunction_sg_cL::synapse0x386e1c0() {
   return (neuron0x386eca0()*-0.243119);
}

double NNfunction_sg_cL::synapse0x386e200() {
   return (neuron0x386efe0()*0.0317481);
}

double NNfunction_sg_cL::synapse0x386e500() {
   return (neuron0x386f320()*-0.126758);
}

double NNfunction_sg_cL::synapse0x386e540() {
   return (neuron0x386f660()*-0.174649);
}

double NNfunction_sg_cL::synapse0x386e840() {
   return (neuron0x386f9a0()*0.474487);
}

double NNfunction_sg_cL::synapse0x386e880() {
   return (neuron0x386fce0()*-0.675304);
}

double NNfunction_sg_cL::synapse0x386eb80() {
   return (neuron0x3870020()*-0.163129);
}

double NNfunction_sg_cL::synapse0x386ebc0() {
   return (neuron0x3870360()*-0.188533);
}

double NNfunction_sg_cL::synapse0x386eec0() {
   return (neuron0x38706a0()*-0.169337);
}

double NNfunction_sg_cL::synapse0x386ef00() {
   return (neuron0x38709e0()*-0.103186);
}

double NNfunction_sg_cL::synapse0x386f200() {
   return (neuron0x3870f40()*0.567661);
}

double NNfunction_sg_cL::synapse0x386f240() {
   return (neuron0x3871160()*-0.220935);
}

double NNfunction_sg_cL::synapse0x386f540() {
   return (neuron0x38714a0()*0.214469);
}

double NNfunction_sg_cL::synapse0x386f580() {
   return (neuron0x38717e0()*-0.434851);
}

double NNfunction_sg_cL::synapse0x386f880() {
   return (neuron0x3871b20()*-0.31872);
}

double NNfunction_sg_cL::synapse0x386f8c0() {
   return (neuron0x3871e60()*0.0486506);
}

double NNfunction_sg_cL::synapse0x386fbc0() {
   return (neuron0x38721a0()*0.051616);
}

double NNfunction_sg_cL::synapse0x386fc00() {
   return (neuron0x386d670()*0.0225952);
}

double NNfunction_sg_cL::synapse0x38708c0() {
   return (neuron0x386d920()*-0.0946168);
}

double NNfunction_sg_cL::synapse0x3870900() {
   return (neuron0x386dc60()*0.296352);
}

double NNfunction_sg_cL::synapse0x387d3d0() {
   return (neuron0x386dfa0()*-0.813757);
}

double NNfunction_sg_cL::synapse0x387d410() {
   return (neuron0x386e2e0()*0.0201865);
}

double NNfunction_sg_cL::synapse0x3870c00() {
   return (neuron0x386e620()*-0.0290186);
}

double NNfunction_sg_cL::synapse0x3870c40() {
   return (neuron0x386e960()*0.241074);
}

double NNfunction_sg_cL::synapse0x27b73c0() {
   return (neuron0x386eca0()*-0.000363825);
}

double NNfunction_sg_cL::synapse0x27b7400() {
   return (neuron0x386efe0()*-0.0125633);
}

double NNfunction_sg_cL::synapse0x3871380() {
   return (neuron0x386f320()*-0.0975671);
}

double NNfunction_sg_cL::synapse0x38713c0() {
   return (neuron0x386f660()*-0.0419351);
}

double NNfunction_sg_cL::synapse0x38716c0() {
   return (neuron0x386f9a0()*0.209759);
}

double NNfunction_sg_cL::synapse0x3871700() {
   return (neuron0x386fce0()*-0.345584);
}

double NNfunction_sg_cL::synapse0x3871a00() {
   return (neuron0x3870020()*-0.0140853);
}

double NNfunction_sg_cL::synapse0x3871a40() {
   return (neuron0x3870360()*0.0265398);
}

double NNfunction_sg_cL::synapse0x3871d40() {
   return (neuron0x38706a0()*0.0848271);
}

double NNfunction_sg_cL::synapse0x3871d80() {
   return (neuron0x38709e0()*-0.169997);
}

double NNfunction_sg_cL::synapse0x3872080() {
   return (neuron0x3870f40()*0.0675093);
}

double NNfunction_sg_cL::synapse0x38720c0() {
   return (neuron0x3871160()*0.0978961);
}

double NNfunction_sg_cL::synapse0x38723c0() {
   return (neuron0x38714a0()*0.128844);
}

double NNfunction_sg_cL::synapse0x3872400() {
   return (neuron0x38717e0()*0.00952279);
}

double NNfunction_sg_cL::synapse0x386ff00() {
   return (neuron0x3871b20()*-0.00465377);
}

double NNfunction_sg_cL::synapse0x386ff40() {
   return (neuron0x3871e60()*0.00493891);
}

double NNfunction_sg_cL::synapse0x387f2f0() {
   return (neuron0x38721a0()*-0.0160317);
}

double NNfunction_sg_cL::synapse0x387f670() {
   return (neuron0x386d670()*0.089465);
}

double NNfunction_sg_cL::synapse0x387f6b0() {
   return (neuron0x386d920()*-0.0798945);
}

double NNfunction_sg_cL::synapse0x387f6f0() {
   return (neuron0x386dc60()*0.537268);
}

double NNfunction_sg_cL::synapse0x387f730() {
   return (neuron0x386dfa0()*-0.0420105);
}

double NNfunction_sg_cL::synapse0x387f770() {
   return (neuron0x386e2e0()*0.267336);
}

double NNfunction_sg_cL::synapse0x387f7b0() {
   return (neuron0x386e620()*-0.493967);
}

double NNfunction_sg_cL::synapse0x387f7f0() {
   return (neuron0x386e960()*-0.503536);
}

double NNfunction_sg_cL::synapse0x387f830() {
   return (neuron0x386eca0()*0.451742);
}

double NNfunction_sg_cL::synapse0x387f870() {
   return (neuron0x386efe0()*0.0336752);
}

double NNfunction_sg_cL::synapse0x387f8b0() {
   return (neuron0x386f320()*-0.595225);
}

double NNfunction_sg_cL::synapse0x387f8f0() {
   return (neuron0x386f660()*0.447021);
}

double NNfunction_sg_cL::synapse0x387f930() {
   return (neuron0x386f9a0()*0.201585);
}

double NNfunction_sg_cL::synapse0x387f970() {
   return (neuron0x386fce0()*0.473821);
}

double NNfunction_sg_cL::synapse0x387f9b0() {
   return (neuron0x3870020()*-0.289223);
}

double NNfunction_sg_cL::synapse0x387f9f0() {
   return (neuron0x3870360()*0.394751);
}

double NNfunction_sg_cL::synapse0x387fa30() {
   return (neuron0x38706a0()*0.0606444);
}

double NNfunction_sg_cL::synapse0x387f4c0() {
   return (neuron0x38709e0()*0.0825478);
}

double NNfunction_sg_cL::synapse0x387f500() {
   return (neuron0x3870f40()*0.369844);
}

double NNfunction_sg_cL::synapse0x387fb80() {
   return (neuron0x3871160()*0.646262);
}

double NNfunction_sg_cL::synapse0x387fbc0() {
   return (neuron0x38714a0()*0.29566);
}

double NNfunction_sg_cL::synapse0x387fc00() {
   return (neuron0x38717e0()*0.248973);
}

double NNfunction_sg_cL::synapse0x387fc40() {
   return (neuron0x3871b20()*0.117957);
}

double NNfunction_sg_cL::synapse0x387fc80() {
   return (neuron0x3871e60()*-0.127833);
}

double NNfunction_sg_cL::synapse0x387fcc0() {
   return (neuron0x38721a0()*0.145405);
}

double NNfunction_sg_cL::synapse0x3880040() {
   return (neuron0x386d670()*0.324616);
}

double NNfunction_sg_cL::synapse0x3880080() {
   return (neuron0x386d920()*-0.0944208);
}

double NNfunction_sg_cL::synapse0x38800c0() {
   return (neuron0x386dc60()*0.3478);
}

double NNfunction_sg_cL::synapse0x3880100() {
   return (neuron0x386dfa0()*0.771592);
}

double NNfunction_sg_cL::synapse0x3880140() {
   return (neuron0x386e2e0()*-0.198087);
}

double NNfunction_sg_cL::synapse0x3880180() {
   return (neuron0x386e620()*-0.610563);
}

double NNfunction_sg_cL::synapse0x38801c0() {
   return (neuron0x386e960()*0.0989949);
}

double NNfunction_sg_cL::synapse0x3880200() {
   return (neuron0x386eca0()*0.199123);
}

double NNfunction_sg_cL::synapse0x3880240() {
   return (neuron0x386efe0()*0.00701143);
}

double NNfunction_sg_cL::synapse0x3880280() {
   return (neuron0x386f320()*0.207288);
}

double NNfunction_sg_cL::synapse0x38802c0() {
   return (neuron0x386f660()*-0.144018);
}

double NNfunction_sg_cL::synapse0x3880300() {
   return (neuron0x386f9a0()*-0.247775);
}

double NNfunction_sg_cL::synapse0x3880340() {
   return (neuron0x386fce0()*-0.330667);
}

double NNfunction_sg_cL::synapse0x3880380() {
   return (neuron0x3870020()*0.13246);
}

double NNfunction_sg_cL::synapse0x38803c0() {
   return (neuron0x3870360()*0.5797);
}

double NNfunction_sg_cL::synapse0x3880400() {
   return (neuron0x38706a0()*0.0382623);
}

double NNfunction_sg_cL::synapse0x387fe90() {
   return (neuron0x38709e0()*0.255712);
}

double NNfunction_sg_cL::synapse0x387fed0() {
   return (neuron0x3870f40()*0.0603759);
}

double NNfunction_sg_cL::synapse0x3880550() {
   return (neuron0x3871160()*-0.162807);
}

double NNfunction_sg_cL::synapse0x3880590() {
   return (neuron0x38714a0()*0.0641437);
}

double NNfunction_sg_cL::synapse0x38805d0() {
   return (neuron0x38717e0()*-0.389176);
}

double NNfunction_sg_cL::synapse0x3880610() {
   return (neuron0x3871b20()*-0.0940475);
}

double NNfunction_sg_cL::synapse0x3880650() {
   return (neuron0x3871e60()*0.0777942);
}

double NNfunction_sg_cL::synapse0x3880690() {
   return (neuron0x38721a0()*0.0351805);
}

double NNfunction_sg_cL::synapse0x3880a10() {
   return (neuron0x386d670()*0.0102293);
}

double NNfunction_sg_cL::synapse0x3880a50() {
   return (neuron0x386d920()*-0.0248035);
}

double NNfunction_sg_cL::synapse0x3880a90() {
   return (neuron0x386dc60()*1.13131);
}

double NNfunction_sg_cL::synapse0x3880ad0() {
   return (neuron0x386dfa0()*0.147903);
}

double NNfunction_sg_cL::synapse0x3880b10() {
   return (neuron0x386e2e0()*0.00960054);
}

double NNfunction_sg_cL::synapse0x3880b50() {
   return (neuron0x386e620()*0.0356578);
}

double NNfunction_sg_cL::synapse0x3880b90() {
   return (neuron0x386e960()*0.0189);
}

double NNfunction_sg_cL::synapse0x3880bd0() {
   return (neuron0x386eca0()*0.0233015);
}

double NNfunction_sg_cL::synapse0x3880c10() {
   return (neuron0x386efe0()*-0.0160783);
}

double NNfunction_sg_cL::synapse0x3880c50() {
   return (neuron0x386f320()*-0.0126126);
}

double NNfunction_sg_cL::synapse0x3880c90() {
   return (neuron0x386f660()*-0.0302473);
}

double NNfunction_sg_cL::synapse0x3880cd0() {
   return (neuron0x386f9a0()*-0.00181004);
}

double NNfunction_sg_cL::synapse0x3880d10() {
   return (neuron0x386fce0()*-1.0958);
}

double NNfunction_sg_cL::synapse0x3880d50() {
   return (neuron0x3870020()*0.0187695);
}

double NNfunction_sg_cL::synapse0x3880d90() {
   return (neuron0x3870360()*0.0248076);
}

double NNfunction_sg_cL::synapse0x3880dd0() {
   return (neuron0x38706a0()*0.0437906);
}

double NNfunction_sg_cL::synapse0x3880860() {
   return (neuron0x38709e0()*0.00339403);
}

double NNfunction_sg_cL::synapse0x38808a0() {
   return (neuron0x3870f40()*-0.00704908);
}

double NNfunction_sg_cL::synapse0x3880f20() {
   return (neuron0x3871160()*-0.0410012);
}

double NNfunction_sg_cL::synapse0x3880f60() {
   return (neuron0x38714a0()*-0.0233853);
}

double NNfunction_sg_cL::synapse0x3880fa0() {
   return (neuron0x38717e0()*-0.0112993);
}

double NNfunction_sg_cL::synapse0x3880fe0() {
   return (neuron0x3871b20()*-0.00761382);
}

double NNfunction_sg_cL::synapse0x3881020() {
   return (neuron0x3871e60()*0.0364352);
}

double NNfunction_sg_cL::synapse0x3881060() {
   return (neuron0x38721a0()*0.0138121);
}

double NNfunction_sg_cL::synapse0x38813e0() {
   return (neuron0x386d670()*0.0235278);
}

double NNfunction_sg_cL::synapse0x3881420() {
   return (neuron0x386d920()*0.0848791);
}

double NNfunction_sg_cL::synapse0x3881460() {
   return (neuron0x386dc60()*-0.594782);
}

double NNfunction_sg_cL::synapse0x38814a0() {
   return (neuron0x386dfa0()*-0.199476);
}

double NNfunction_sg_cL::synapse0x38814e0() {
   return (neuron0x386e2e0()*-0.0282395);
}

double NNfunction_sg_cL::synapse0x3881520() {
   return (neuron0x386e620()*0.0957595);
}

double NNfunction_sg_cL::synapse0x3881560() {
   return (neuron0x386e960()*-0.0303063);
}

double NNfunction_sg_cL::synapse0x38815a0() {
   return (neuron0x386eca0()*-0.0348064);
}

double NNfunction_sg_cL::synapse0x38815e0() {
   return (neuron0x386efe0()*0.0171285);
}

double NNfunction_sg_cL::synapse0x3881620() {
   return (neuron0x386f320()*0.0595844);
}

double NNfunction_sg_cL::synapse0x3881660() {
   return (neuron0x386f660()*0.00342263);
}

double NNfunction_sg_cL::synapse0x38816a0() {
   return (neuron0x386f9a0()*0.0910141);
}

double NNfunction_sg_cL::synapse0x38816e0() {
   return (neuron0x386fce0()*-0.976274);
}

double NNfunction_sg_cL::synapse0x3881720() {
   return (neuron0x3870020()*-0.169909);
}

double NNfunction_sg_cL::synapse0x3881760() {
   return (neuron0x3870360()*-0.0707043);
}

double NNfunction_sg_cL::synapse0x38817a0() {
   return (neuron0x38706a0()*0.64857);
}

double NNfunction_sg_cL::synapse0x3881230() {
   return (neuron0x38709e0()*-0.0422774);
}

double NNfunction_sg_cL::synapse0x3881270() {
   return (neuron0x3870f40()*0.00531071);
}

double NNfunction_sg_cL::synapse0x38818f0() {
   return (neuron0x3871160()*0.0349598);
}

double NNfunction_sg_cL::synapse0x3881930() {
   return (neuron0x38714a0()*-0.0390136);
}

double NNfunction_sg_cL::synapse0x3881970() {
   return (neuron0x38717e0()*-0.0331105);
}

double NNfunction_sg_cL::synapse0x38819b0() {
   return (neuron0x3871b20()*-0.0115304);
}

double NNfunction_sg_cL::synapse0x38819f0() {
   return (neuron0x3871e60()*-0.0323687);
}

double NNfunction_sg_cL::synapse0x3881a30() {
   return (neuron0x38721a0()*0.00095252);
}

double NNfunction_sg_cL::synapse0x3881db0() {
   return (neuron0x386d670()*0.0305634);
}

double NNfunction_sg_cL::synapse0x3881df0() {
   return (neuron0x386d920()*-0.0562034);
}

double NNfunction_sg_cL::synapse0x3881e30() {
   return (neuron0x386dc60()*-0.807337);
}

double NNfunction_sg_cL::synapse0x3881e70() {
   return (neuron0x386dfa0()*0.490144);
}

double NNfunction_sg_cL::synapse0x3881eb0() {
   return (neuron0x386e2e0()*-0.0270523);
}

double NNfunction_sg_cL::synapse0x3881ef0() {
   return (neuron0x386e620()*0.0917462);
}

double NNfunction_sg_cL::synapse0x3881f30() {
   return (neuron0x386e960()*0.140359);
}

double NNfunction_sg_cL::synapse0x3881f70() {
   return (neuron0x386eca0()*-0.0157587);
}

double NNfunction_sg_cL::synapse0x3881fb0() {
   return (neuron0x386efe0()*-0.0869457);
}

double NNfunction_sg_cL::synapse0x387a170() {
   return (neuron0x386f320()*-0.114455);
}

double NNfunction_sg_cL::synapse0x387a1b0() {
   return (neuron0x386f660()*-0.0473989);
}

double NNfunction_sg_cL::synapse0x387a1f0() {
   return (neuron0x386f9a0()*0.0777505);
}

double NNfunction_sg_cL::synapse0x387a230() {
   return (neuron0x386fce0()*0.409909);
}

double NNfunction_sg_cL::synapse0x387a270() {
   return (neuron0x3870020()*-0.107133);
}

double NNfunction_sg_cL::synapse0x387a2b0() {
   return (neuron0x3870360()*0.18201);
}

double NNfunction_sg_cL::synapse0x387a2f0() {
   return (neuron0x38706a0()*-0.0358226);
}

double NNfunction_sg_cL::synapse0x3881c00() {
   return (neuron0x38709e0()*-0.132743);
}

double NNfunction_sg_cL::synapse0x3881c40() {
   return (neuron0x3870f40()*-0.0706786);
}

double NNfunction_sg_cL::synapse0x387a440() {
   return (neuron0x3871160()*-0.0427782);
}

double NNfunction_sg_cL::synapse0x387a480() {
   return (neuron0x38714a0()*-0.0959138);
}

double NNfunction_sg_cL::synapse0x387a4c0() {
   return (neuron0x38717e0()*-0.00450117);
}

double NNfunction_sg_cL::synapse0x387a500() {
   return (neuron0x3871b20()*0.0217525);
}

double NNfunction_sg_cL::synapse0x387a540() {
   return (neuron0x3871e60()*0.118519);
}

double NNfunction_sg_cL::synapse0x387a580() {
   return (neuron0x38721a0()*0.118272);
}

double NNfunction_sg_cL::synapse0x387a900() {
   return (neuron0x386d670()*0.00236022);
}

double NNfunction_sg_cL::synapse0x387a940() {
   return (neuron0x386d920()*-0.00745838);
}

double NNfunction_sg_cL::synapse0x387a980() {
   return (neuron0x386dc60()*-0.588718);
}

double NNfunction_sg_cL::synapse0x387a9c0() {
   return (neuron0x386dfa0()*0.560487);
}

double NNfunction_sg_cL::synapse0x387aa00() {
   return (neuron0x386e2e0()*0.03251);
}

double NNfunction_sg_cL::synapse0x387aa40() {
   return (neuron0x386e620()*-0.00701576);
}

double NNfunction_sg_cL::synapse0x387aa80() {
   return (neuron0x386e960()*0.0109825);
}

double NNfunction_sg_cL::synapse0x387aac0() {
   return (neuron0x386eca0()*-0.00868053);
}

double NNfunction_sg_cL::synapse0x387ab00() {
   return (neuron0x386efe0()*0.0148799);
}

double NNfunction_sg_cL::synapse0x387ab40() {
   return (neuron0x386f320()*-0.0235215);
}

double NNfunction_sg_cL::synapse0x387ab80() {
   return (neuron0x386f660()*-0.0167241);
}

double NNfunction_sg_cL::synapse0x387abc0() {
   return (neuron0x386f9a0()*-0.0353691);
}

double NNfunction_sg_cL::synapse0x387ac00() {
   return (neuron0x386fce0()*0.372061);
}

double NNfunction_sg_cL::synapse0x387ac40() {
   return (neuron0x3870020()*0.0051652);
}

double NNfunction_sg_cL::synapse0x387ac80() {
   return (neuron0x3870360()*-0.0427615);
}

double NNfunction_sg_cL::synapse0x387acc0() {
   return (neuron0x38706a0()*-0.026167);
}

double NNfunction_sg_cL::synapse0x387a750() {
   return (neuron0x38709e0()*-0.00723675);
}

double NNfunction_sg_cL::synapse0x387a790() {
   return (neuron0x3870f40()*-0.0175138);
}

double NNfunction_sg_cL::synapse0x387ae10() {
   return (neuron0x3871160()*-0.00586374);
}

double NNfunction_sg_cL::synapse0x387ae50() {
   return (neuron0x38714a0()*-0.00628769);
}

double NNfunction_sg_cL::synapse0x387ae90() {
   return (neuron0x38717e0()*-0.0124083);
}

double NNfunction_sg_cL::synapse0x387aed0() {
   return (neuron0x3871b20()*-0.0083315);
}

double NNfunction_sg_cL::synapse0x387af10() {
   return (neuron0x3871e60()*-0.0230184);
}

double NNfunction_sg_cL::synapse0x387af50() {
   return (neuron0x38721a0()*-0.00267331);
}

double NNfunction_sg_cL::synapse0x387b120() {
   return (neuron0x386d670()*-0.0755679);
}

double NNfunction_sg_cL::synapse0x38841b0() {
   return (neuron0x386d920()*0.109443);
}

double NNfunction_sg_cL::synapse0x38841f0() {
   return (neuron0x386dc60()*0.390364);
}

double NNfunction_sg_cL::synapse0x3884230() {
   return (neuron0x386dfa0()*-0.106719);
}

double NNfunction_sg_cL::synapse0x3884270() {
   return (neuron0x386e2e0()*0.121501);
}

double NNfunction_sg_cL::synapse0x38842b0() {
   return (neuron0x386e620()*0.295437);
}

double NNfunction_sg_cL::synapse0x38842f0() {
   return (neuron0x386e960()*-0.189477);
}

double NNfunction_sg_cL::synapse0x3884330() {
   return (neuron0x386eca0()*-0.202998);
}

double NNfunction_sg_cL::synapse0x3884370() {
   return (neuron0x386efe0()*-0.0215438);
}

double NNfunction_sg_cL::synapse0x38843b0() {
   return (neuron0x386f320()*0.0724166);
}

double NNfunction_sg_cL::synapse0x38843f0() {
   return (neuron0x386f660()*-0.0962638);
}

double NNfunction_sg_cL::synapse0x3884430() {
   return (neuron0x386f9a0()*-0.112667);
}

double NNfunction_sg_cL::synapse0x3884470() {
   return (neuron0x386fce0()*0.843449);
}

double NNfunction_sg_cL::synapse0x38844b0() {
   return (neuron0x3870020()*0.0707776);
}

double NNfunction_sg_cL::synapse0x38844f0() {
   return (neuron0x3870360()*0.175545);
}

double NNfunction_sg_cL::synapse0x3884530() {
   return (neuron0x38706a0()*0.252533);
}

double NNfunction_sg_cL::synapse0x3884000() {
   return (neuron0x38709e0()*-0.306749);
}

double NNfunction_sg_cL::synapse0x3884040() {
   return (neuron0x3870f40()*0.209637);
}

double NNfunction_sg_cL::synapse0x3884680() {
   return (neuron0x3871160()*0.116852);
}

double NNfunction_sg_cL::synapse0x38846c0() {
   return (neuron0x38714a0()*0.0553982);
}

double NNfunction_sg_cL::synapse0x3884700() {
   return (neuron0x38717e0()*0.150722);
}

double NNfunction_sg_cL::synapse0x3884740() {
   return (neuron0x3871b20()*0.00488752);
}

double NNfunction_sg_cL::synapse0x3884780() {
   return (neuron0x3871e60()*-0.0843172);
}

double NNfunction_sg_cL::synapse0x38847c0() {
   return (neuron0x38721a0()*-0.0501284);
}

double NNfunction_sg_cL::synapse0x3884b40() {
   return (neuron0x386d670()*0.00353473);
}

double NNfunction_sg_cL::synapse0x3884b80() {
   return (neuron0x386d920()*-0.00646261);
}

double NNfunction_sg_cL::synapse0x3884bc0() {
   return (neuron0x386dc60()*-0.0289596);
}

double NNfunction_sg_cL::synapse0x3884c00() {
   return (neuron0x386dfa0()*7.47355);
}

double NNfunction_sg_cL::synapse0x3884c40() {
   return (neuron0x386e2e0()*0.000684175);
}

double NNfunction_sg_cL::synapse0x3884c80() {
   return (neuron0x386e620()*0.00263837);
}

double NNfunction_sg_cL::synapse0x3884cc0() {
   return (neuron0x386e960()*0.00417609);
}

double NNfunction_sg_cL::synapse0x3884d00() {
   return (neuron0x386eca0()*0.00292408);
}

double NNfunction_sg_cL::synapse0x3884d40() {
   return (neuron0x386efe0()*-0.000803204);
}

double NNfunction_sg_cL::synapse0x3884d80() {
   return (neuron0x386f320()*0.00853407);
}

double NNfunction_sg_cL::synapse0x3884dc0() {
   return (neuron0x386f660()*-0.000364899);
}

double NNfunction_sg_cL::synapse0x3884e00() {
   return (neuron0x386f9a0()*-0.00290541);
}

double NNfunction_sg_cL::synapse0x3884e40() {
   return (neuron0x386fce0()*-0.0284385);
}

double NNfunction_sg_cL::synapse0x3884e80() {
   return (neuron0x3870020()*-0.00804736);
}

double NNfunction_sg_cL::synapse0x3884ec0() {
   return (neuron0x3870360()*0.00228129);
}

double NNfunction_sg_cL::synapse0x3884f00() {
   return (neuron0x38706a0()*-0.00417635);
}

double NNfunction_sg_cL::synapse0x3884990() {
   return (neuron0x38709e0()*-0.00677618);
}

double NNfunction_sg_cL::synapse0x38849d0() {
   return (neuron0x3870f40()*-0.00721028);
}

double NNfunction_sg_cL::synapse0x3885050() {
   return (neuron0x3871160()*-0.00353587);
}

double NNfunction_sg_cL::synapse0x3885090() {
   return (neuron0x38714a0()*-0.00839175);
}

double NNfunction_sg_cL::synapse0x38850d0() {
   return (neuron0x38717e0()*-0.0078668);
}

double NNfunction_sg_cL::synapse0x3885110() {
   return (neuron0x3871b20()*0.00276559);
}

double NNfunction_sg_cL::synapse0x3885150() {
   return (neuron0x3871e60()*-0.00254323);
}

double NNfunction_sg_cL::synapse0x3885190() {
   return (neuron0x38721a0()*0.00255758);
}

double NNfunction_sg_cL::synapse0x3885510() {
   return (neuron0x386d670()*-0.000651927);
}

double NNfunction_sg_cL::synapse0x3885550() {
   return (neuron0x386d920()*0.0336551);
}

double NNfunction_sg_cL::synapse0x3885590() {
   return (neuron0x386dc60()*-0.0293643);
}

double NNfunction_sg_cL::synapse0x38855d0() {
   return (neuron0x386dfa0()*-1.58143);
}

double NNfunction_sg_cL::synapse0x3885610() {
   return (neuron0x386e2e0()*-0.0380658);
}

double NNfunction_sg_cL::synapse0x3885650() {
   return (neuron0x386e620()*-0.0404443);
}

double NNfunction_sg_cL::synapse0x3885690() {
   return (neuron0x386e960()*-0.058734);
}

double NNfunction_sg_cL::synapse0x38856d0() {
   return (neuron0x386eca0()*-0.0361596);
}

double NNfunction_sg_cL::synapse0x3885710() {
   return (neuron0x386efe0()*0.020578);
}

double NNfunction_sg_cL::synapse0x3885750() {
   return (neuron0x386f320()*-0.0280396);
}

double NNfunction_sg_cL::synapse0x3885790() {
   return (neuron0x386f660()*0.0140091);
}

double NNfunction_sg_cL::synapse0x38857d0() {
   return (neuron0x386f9a0()*0.022746);
}

double NNfunction_sg_cL::synapse0x3885810() {
   return (neuron0x386fce0()*-1.1175);
}

double NNfunction_sg_cL::synapse0x3885850() {
   return (neuron0x3870020()*0.0320424);
}

double NNfunction_sg_cL::synapse0x3885890() {
   return (neuron0x3870360()*-0.0311926);
}

double NNfunction_sg_cL::synapse0x38858d0() {
   return (neuron0x38706a0()*-0.0187394);
}

double NNfunction_sg_cL::synapse0x3885360() {
   return (neuron0x38709e0()*0.049844);
}

double NNfunction_sg_cL::synapse0x38853a0() {
   return (neuron0x3870f40()*-0.0130501);
}

double NNfunction_sg_cL::synapse0x3885a20() {
   return (neuron0x3871160()*0.00479872);
}

double NNfunction_sg_cL::synapse0x3885a60() {
   return (neuron0x38714a0()*0.011272);
}

double NNfunction_sg_cL::synapse0x3885aa0() {
   return (neuron0x38717e0()*-0.00383931);
}

double NNfunction_sg_cL::synapse0x3885ae0() {
   return (neuron0x3871b20()*-0.00473345);
}

double NNfunction_sg_cL::synapse0x3885b20() {
   return (neuron0x3871e60()*0.00415976);
}

double NNfunction_sg_cL::synapse0x3885b60() {
   return (neuron0x38721a0()*-0.0232672);
}

double NNfunction_sg_cL::synapse0x3885ee0() {
   return (neuron0x386d670()*-0.000205731);
}

double NNfunction_sg_cL::synapse0x3885f20() {
   return (neuron0x386d920()*-0.00226972);
}

double NNfunction_sg_cL::synapse0x3885f60() {
   return (neuron0x386dc60()*0.0226184);
}

double NNfunction_sg_cL::synapse0x3885fa0() {
   return (neuron0x386dfa0()*1.54734);
}

double NNfunction_sg_cL::synapse0x3885fe0() {
   return (neuron0x386e2e0()*0.00760457);
}

double NNfunction_sg_cL::synapse0x3886020() {
   return (neuron0x386e620()*0.0126319);
}

double NNfunction_sg_cL::synapse0x3886060() {
   return (neuron0x386e960()*0.00761979);
}

double NNfunction_sg_cL::synapse0x38860a0() {
   return (neuron0x386eca0()*0.00641106);
}

double NNfunction_sg_cL::synapse0x38860e0() {
   return (neuron0x386efe0()*-0.00362403);
}

double NNfunction_sg_cL::synapse0x3886120() {
   return (neuron0x386f320()*0.0131544);
}

double NNfunction_sg_cL::synapse0x3886160() {
   return (neuron0x386f660()*-0.00441216);
}

double NNfunction_sg_cL::synapse0x38861a0() {
   return (neuron0x386f9a0()*0.0323734);
}

double NNfunction_sg_cL::synapse0x38861e0() {
   return (neuron0x386fce0()*-0.323828);
}

double NNfunction_sg_cL::synapse0x3886220() {
   return (neuron0x3870020()*0.00683931);
}

double NNfunction_sg_cL::synapse0x3886260() {
   return (neuron0x3870360()*0.0304051);
}

double NNfunction_sg_cL::synapse0x38862a0() {
   return (neuron0x38706a0()*0.0259349);
}

double NNfunction_sg_cL::synapse0x3885d30() {
   return (neuron0x38709e0()*0.00109015);
}

double NNfunction_sg_cL::synapse0x3885d70() {
   return (neuron0x3870f40()*0.015719);
}

double NNfunction_sg_cL::synapse0x38863f0() {
   return (neuron0x3871160()*0.0160078);
}

double NNfunction_sg_cL::synapse0x3886430() {
   return (neuron0x38714a0()*-0.00209312);
}

double NNfunction_sg_cL::synapse0x3886470() {
   return (neuron0x38717e0()*0.00317204);
}

double NNfunction_sg_cL::synapse0x38864b0() {
   return (neuron0x3871b20()*-0.0026075);
}

double NNfunction_sg_cL::synapse0x38864f0() {
   return (neuron0x3871e60()*0.00204082);
}

double NNfunction_sg_cL::synapse0x3886530() {
   return (neuron0x38721a0()*0.014491);
}

double NNfunction_sg_cL::synapse0x38868b0() {
   return (neuron0x386d670()*0.0686322);
}

double NNfunction_sg_cL::synapse0x38868f0() {
   return (neuron0x386d920()*-0.0414302);
}

double NNfunction_sg_cL::synapse0x3886930() {
   return (neuron0x386dc60()*-0.132928);
}

double NNfunction_sg_cL::synapse0x3886970() {
   return (neuron0x386dfa0()*0.216499);
}

double NNfunction_sg_cL::synapse0x38869b0() {
   return (neuron0x386e2e0()*-0.0527151);
}

double NNfunction_sg_cL::synapse0x38869f0() {
   return (neuron0x386e620()*0.00635311);
}

double NNfunction_sg_cL::synapse0x3886a30() {
   return (neuron0x386e960()*0.0324848);
}

double NNfunction_sg_cL::synapse0x3886a70() {
   return (neuron0x386eca0()*-0.00162255);
}

double NNfunction_sg_cL::synapse0x3886ab0() {
   return (neuron0x386efe0()*-0.0848192);
}

double NNfunction_sg_cL::synapse0x3886af0() {
   return (neuron0x386f320()*-0.350812);
}

double NNfunction_sg_cL::synapse0x3886b30() {
   return (neuron0x386f660()*-0.0234095);
}

double NNfunction_sg_cL::synapse0x3886b70() {
   return (neuron0x386f9a0()*0.0630711);
}

double NNfunction_sg_cL::synapse0x3886bb0() {
   return (neuron0x386fce0()*1.31853);
}

double NNfunction_sg_cL::synapse0x3886bf0() {
   return (neuron0x3870020()*0.0952757);
}

double NNfunction_sg_cL::synapse0x3886c30() {
   return (neuron0x3870360()*0.00518343);
}

double NNfunction_sg_cL::synapse0x3886c70() {
   return (neuron0x38706a0()*-0.0354444);
}

double NNfunction_sg_cL::synapse0x3886700() {
   return (neuron0x38709e0()*0.0189938);
}

double NNfunction_sg_cL::synapse0x3886740() {
   return (neuron0x3870f40()*0.0265009);
}

double NNfunction_sg_cL::synapse0x3886dc0() {
   return (neuron0x3871160()*0.0643574);
}

double NNfunction_sg_cL::synapse0x3886e00() {
   return (neuron0x38714a0()*0.0687854);
}

double NNfunction_sg_cL::synapse0x3886e40() {
   return (neuron0x38717e0()*-0.0327867);
}

double NNfunction_sg_cL::synapse0x3886e80() {
   return (neuron0x3871b20()*0.0892572);
}

double NNfunction_sg_cL::synapse0x3886ec0() {
   return (neuron0x3871e60()*0.0422662);
}

double NNfunction_sg_cL::synapse0x3886f00() {
   return (neuron0x38721a0()*0.0371729);
}

double NNfunction_sg_cL::synapse0x3887280() {
   return (neuron0x386d670()*0.0844127);
}

double NNfunction_sg_cL::synapse0x38872c0() {
   return (neuron0x386d920()*-0.0357866);
}

double NNfunction_sg_cL::synapse0x3887300() {
   return (neuron0x386dc60()*-0.943924);
}

double NNfunction_sg_cL::synapse0x3887340() {
   return (neuron0x386dfa0()*-2.872);
}

double NNfunction_sg_cL::synapse0x3887380() {
   return (neuron0x386e2e0()*-0.0882128);
}

double NNfunction_sg_cL::synapse0x38873c0() {
   return (neuron0x386e620()*-0.0430509);
}

double NNfunction_sg_cL::synapse0x3887400() {
   return (neuron0x386e960()*-0.161257);
}

double NNfunction_sg_cL::synapse0x3887440() {
   return (neuron0x386eca0()*0.0667972);
}

double NNfunction_sg_cL::synapse0x3887480() {
   return (neuron0x386efe0()*-0.0135927);
}

double NNfunction_sg_cL::synapse0x38874c0() {
   return (neuron0x386f320()*-0.104364);
}

double NNfunction_sg_cL::synapse0x3887500() {
   return (neuron0x386f660()*-0.0111038);
}

double NNfunction_sg_cL::synapse0x3887540() {
   return (neuron0x386f9a0()*-0.0393026);
}

double NNfunction_sg_cL::synapse0x3887580() {
   return (neuron0x386fce0()*-0.172784);
}

double NNfunction_sg_cL::synapse0x38875c0() {
   return (neuron0x3870020()*0.0733695);
}

double NNfunction_sg_cL::synapse0x3887600() {
   return (neuron0x3870360()*0.139586);
}

double NNfunction_sg_cL::synapse0x3887640() {
   return (neuron0x38706a0()*-0.0770517);
}

double NNfunction_sg_cL::synapse0x38870d0() {
   return (neuron0x38709e0()*0.0116986);
}

double NNfunction_sg_cL::synapse0x3887110() {
   return (neuron0x3870f40()*0.175628);
}

double NNfunction_sg_cL::synapse0x3887790() {
   return (neuron0x3871160()*0.146448);
}

double NNfunction_sg_cL::synapse0x38877d0() {
   return (neuron0x38714a0()*0.0375542);
}

double NNfunction_sg_cL::synapse0x3887810() {
   return (neuron0x38717e0()*-0.0731507);
}

double NNfunction_sg_cL::synapse0x3887850() {
   return (neuron0x3871b20()*-0.032108);
}

double NNfunction_sg_cL::synapse0x3887890() {
   return (neuron0x3871e60()*0.0290162);
}

double NNfunction_sg_cL::synapse0x38878d0() {
   return (neuron0x38721a0()*0.0495395);
}

double NNfunction_sg_cL::synapse0x3887c50() {
   return (neuron0x386d670()*0.0775457);
}

double NNfunction_sg_cL::synapse0x3887c90() {
   return (neuron0x386d920()*-0.0405702);
}

double NNfunction_sg_cL::synapse0x3887cd0() {
   return (neuron0x386dc60()*-0.267234);
}

double NNfunction_sg_cL::synapse0x3887d10() {
   return (neuron0x386dfa0()*2.94424);
}

double NNfunction_sg_cL::synapse0x3887d50() {
   return (neuron0x386e2e0()*-0.0114175);
}

double NNfunction_sg_cL::synapse0x3887d90() {
   return (neuron0x386e620()*-0.0232221);
}

double NNfunction_sg_cL::synapse0x3887dd0() {
   return (neuron0x386e960()*-0.0609332);
}

double NNfunction_sg_cL::synapse0x3887e10() {
   return (neuron0x386eca0()*0.076163);
}

double NNfunction_sg_cL::synapse0x3887e50() {
   return (neuron0x386efe0()*-0.00115112);
}

double NNfunction_sg_cL::synapse0x3887e90() {
   return (neuron0x386f320()*0.0475138);
}

double NNfunction_sg_cL::synapse0x3887ed0() {
   return (neuron0x386f660()*-0.0590054);
}

double NNfunction_sg_cL::synapse0x3887f10() {
   return (neuron0x386f9a0()*0.0366135);
}

double NNfunction_sg_cL::synapse0x3887f50() {
   return (neuron0x386fce0()*-0.499225);
}

double NNfunction_sg_cL::synapse0x3887f90() {
   return (neuron0x3870020()*-0.0327864);
}

double NNfunction_sg_cL::synapse0x3887fd0() {
   return (neuron0x3870360()*0.0901381);
}

double NNfunction_sg_cL::synapse0x3888010() {
   return (neuron0x38706a0()*0.215377);
}

double NNfunction_sg_cL::synapse0x3887aa0() {
   return (neuron0x38709e0()*-0.218077);
}

double NNfunction_sg_cL::synapse0x3887ae0() {
   return (neuron0x3870f40()*0.0849178);
}

double NNfunction_sg_cL::synapse0x3888160() {
   return (neuron0x3871160()*0.0929014);
}

double NNfunction_sg_cL::synapse0x38881a0() {
   return (neuron0x38714a0()*0.00324143);
}

double NNfunction_sg_cL::synapse0x38881e0() {
   return (neuron0x38717e0()*0.0127778);
}

double NNfunction_sg_cL::synapse0x3888220() {
   return (neuron0x3871b20()*-0.02157);
}

double NNfunction_sg_cL::synapse0x3888260() {
   return (neuron0x3871e60()*0.0158849);
}

double NNfunction_sg_cL::synapse0x38882a0() {
   return (neuron0x38721a0()*0.0591043);
}

double NNfunction_sg_cL::synapse0x3888620() {
   return (neuron0x386d670()*0.0762698);
}

double NNfunction_sg_cL::synapse0x3888660() {
   return (neuron0x386d920()*0.0499021);
}

double NNfunction_sg_cL::synapse0x38886a0() {
   return (neuron0x386dc60()*0.438027);
}

double NNfunction_sg_cL::synapse0x38886e0() {
   return (neuron0x386dfa0()*-0.662306);
}

double NNfunction_sg_cL::synapse0x3888720() {
   return (neuron0x386e2e0()*-0.393262);
}

double NNfunction_sg_cL::synapse0x3888760() {
   return (neuron0x386e620()*0.127085);
}

double NNfunction_sg_cL::synapse0x38887a0() {
   return (neuron0x386e960()*-0.01967);
}

double NNfunction_sg_cL::synapse0x38887e0() {
   return (neuron0x386eca0()*0.139411);
}

double NNfunction_sg_cL::synapse0x3888820() {
   return (neuron0x386efe0()*-0.0327794);
}

double NNfunction_sg_cL::synapse0x3888860() {
   return (neuron0x386f320()*-0.0684362);
}

double NNfunction_sg_cL::synapse0x38888a0() {
   return (neuron0x386f660()*0.00574599);
}

double NNfunction_sg_cL::synapse0x38888e0() {
   return (neuron0x386f9a0()*0.121049);
}

double NNfunction_sg_cL::synapse0x3888920() {
   return (neuron0x386fce0()*0.862099);
}

double NNfunction_sg_cL::synapse0x3888960() {
   return (neuron0x3870020()*0.0542724);
}

double NNfunction_sg_cL::synapse0x38889a0() {
   return (neuron0x3870360()*0.106302);
}

double NNfunction_sg_cL::synapse0x38889e0() {
   return (neuron0x38706a0()*0.046271);
}

double NNfunction_sg_cL::synapse0x3888470() {
   return (neuron0x38709e0()*-0.0261142);
}

double NNfunction_sg_cL::synapse0x38884b0() {
   return (neuron0x3870f40()*-0.0101235);
}

double NNfunction_sg_cL::synapse0x3888b30() {
   return (neuron0x3871160()*0.0318031);
}

double NNfunction_sg_cL::synapse0x3888b70() {
   return (neuron0x38714a0()*-0.0166741);
}

double NNfunction_sg_cL::synapse0x3888bb0() {
   return (neuron0x38717e0()*-0.0108777);
}

double NNfunction_sg_cL::synapse0x3888bf0() {
   return (neuron0x3871b20()*0.0748487);
}

double NNfunction_sg_cL::synapse0x3888c30() {
   return (neuron0x3871e60()*0.0638342);
}

double NNfunction_sg_cL::synapse0x3888c70() {
   return (neuron0x38721a0()*0.0247332);
}

double NNfunction_sg_cL::synapse0x3888ff0() {
   return (neuron0x386d670()*0.0199121);
}

double NNfunction_sg_cL::synapse0x387d5c0() {
   return (neuron0x386d920()*-0.0105056);
}

double NNfunction_sg_cL::synapse0x387d600() {
   return (neuron0x386dc60()*-0.0182952);
}

double NNfunction_sg_cL::synapse0x387d640() {
   return (neuron0x386dfa0()*-2.5521);
}

double NNfunction_sg_cL::synapse0x387d890() {
   return (neuron0x386e2e0()*-0.0233318);
}

double NNfunction_sg_cL::synapse0x387d8d0() {
   return (neuron0x386e620()*-0.0129998);
}

double NNfunction_sg_cL::synapse0x387d910() {
   return (neuron0x386e960()*-0.0091378);
}

double NNfunction_sg_cL::synapse0x387db60() {
   return (neuron0x386eca0()*0.00789224);
}

double NNfunction_sg_cL::synapse0x387dba0() {
   return (neuron0x386efe0()*0.0111326);
}

double NNfunction_sg_cL::synapse0x387ddf0() {
   return (neuron0x386f320()*0.0161001);
}

double NNfunction_sg_cL::synapse0x387de30() {
   return (neuron0x386f660()*0.022253);
}

double NNfunction_sg_cL::synapse0x387de70() {
   return (neuron0x386f9a0()*0.0107154);
}

double NNfunction_sg_cL::synapse0x387e0c0() {
   return (neuron0x386fce0()*0.922288);
}

double NNfunction_sg_cL::synapse0x387e100() {
   return (neuron0x3870020()*-0.00994224);
}

double NNfunction_sg_cL::synapse0x387e350() {
   return (neuron0x3870360()*0.0392287);
}

double NNfunction_sg_cL::synapse0x387e390() {
   return (neuron0x38706a0()*0.0385833);
}

double NNfunction_sg_cL::synapse0x3888e40() {
   return (neuron0x38709e0()*-0.0503603);
}

double NNfunction_sg_cL::synapse0x3888e80() {
   return (neuron0x3870f40()*0.0705352);
}

double NNfunction_sg_cL::synapse0x387e4e0() {
   return (neuron0x3871160()*0.0551203);
}

double NNfunction_sg_cL::synapse0x387e9f0() {
   return (neuron0x38714a0()*0.0327391);
}

double NNfunction_sg_cL::synapse0x387ea30() {
   return (neuron0x38717e0()*0.0119489);
}

double NNfunction_sg_cL::synapse0x387ea70() {
   return (neuron0x3871b20()*0.00997583);
}

double NNfunction_sg_cL::synapse0x387ecc0() {
   return (neuron0x3871e60()*0.00151384);
}

double NNfunction_sg_cL::synapse0x387ed00() {
   return (neuron0x38721a0()*-0.0192293);
}

double NNfunction_sg_cL::synapse0x387e5b0() {
   return (neuron0x386d670()*-0.0172497);
}

double NNfunction_sg_cL::synapse0x387e5f0() {
   return (neuron0x386d920()*0.012393);
}

double NNfunction_sg_cL::synapse0x387e630() {
   return (neuron0x386dc60()*-0.0528714);
}

double NNfunction_sg_cL::synapse0x387e670() {
   return (neuron0x386dfa0()*-5.78491);
}

double NNfunction_sg_cL::synapse0x387eff0() {
   return (neuron0x386e2e0()*-0.00813092);
}

double NNfunction_sg_cL::synapse0x388b340() {
   return (neuron0x386e620()*0.0288171);
}

double NNfunction_sg_cL::synapse0x388b380() {
   return (neuron0x386e960()*-0.0109055);
}

double NNfunction_sg_cL::synapse0x388b3c0() {
   return (neuron0x386eca0()*-0.00357043);
}

double NNfunction_sg_cL::synapse0x388b400() {
   return (neuron0x386efe0()*0.0139007);
}

double NNfunction_sg_cL::synapse0x388b440() {
   return (neuron0x386f320()*0.010233);
}

double NNfunction_sg_cL::synapse0x388b480() {
   return (neuron0x386f660()*-0.00517506);
}

double NNfunction_sg_cL::synapse0x388b4c0() {
   return (neuron0x386f9a0()*0.0202169);
}

double NNfunction_sg_cL::synapse0x388b500() {
   return (neuron0x386fce0()*0.218406);
}

double NNfunction_sg_cL::synapse0x388b540() {
   return (neuron0x3870020()*0.0266391);
}

double NNfunction_sg_cL::synapse0x388b580() {
   return (neuron0x3870360()*0.00959095);
}

double NNfunction_sg_cL::synapse0x388b5c0() {
   return (neuron0x38706a0()*-0.0521716);
}

double NNfunction_sg_cL::synapse0x387eed0() {
   return (neuron0x38709e0()*-0.0311889);
}

double NNfunction_sg_cL::synapse0x387ef10() {
   return (neuron0x3870f40()*0.0450337);
}

double NNfunction_sg_cL::synapse0x388b710() {
   return (neuron0x3871160()*0.0038689);
}

double NNfunction_sg_cL::synapse0x388b750() {
   return (neuron0x38714a0()*-0.00501765);
}

double NNfunction_sg_cL::synapse0x388b790() {
   return (neuron0x38717e0()*0.00385389);
}

double NNfunction_sg_cL::synapse0x388b7d0() {
   return (neuron0x3871b20()*-0.0104027);
}

double NNfunction_sg_cL::synapse0x388b810() {
   return (neuron0x3871e60()*0.0198628);
}

double NNfunction_sg_cL::synapse0x388b850() {
   return (neuron0x38721a0()*-0.00461128);
}

double NNfunction_sg_cL::synapse0x388bbd0() {
   return (neuron0x386d670()*0.161708);
}

double NNfunction_sg_cL::synapse0x388bc10() {
   return (neuron0x386d920()*0.0547736);
}

double NNfunction_sg_cL::synapse0x388bc50() {
   return (neuron0x386dc60()*-0.66697);
}

double NNfunction_sg_cL::synapse0x388bc90() {
   return (neuron0x386dfa0()*0.931819);
}

double NNfunction_sg_cL::synapse0x388bcd0() {
   return (neuron0x386e2e0()*0.0551182);
}

double NNfunction_sg_cL::synapse0x388bd10() {
   return (neuron0x386e620()*0.927418);
}

double NNfunction_sg_cL::synapse0x388bd50() {
   return (neuron0x386e960()*0.505092);
}

double NNfunction_sg_cL::synapse0x388bd90() {
   return (neuron0x386eca0()*0.540469);
}

double NNfunction_sg_cL::synapse0x388bdd0() {
   return (neuron0x386efe0()*0.0584212);
}

double NNfunction_sg_cL::synapse0x388be10() {
   return (neuron0x386f320()*0.260104);
}

double NNfunction_sg_cL::synapse0x388be50() {
   return (neuron0x386f660()*0.401578);
}

double NNfunction_sg_cL::synapse0x388be90() {
   return (neuron0x386f9a0()*-0.443981);
}

double NNfunction_sg_cL::synapse0x388bed0() {
   return (neuron0x386fce0()*-1.33855);
}

double NNfunction_sg_cL::synapse0x388bf10() {
   return (neuron0x3870020()*0.170164);
}

double NNfunction_sg_cL::synapse0x388bf50() {
   return (neuron0x3870360()*0.0578456);
}

double NNfunction_sg_cL::synapse0x388bf90() {
   return (neuron0x38706a0()*0.143549);
}

double NNfunction_sg_cL::synapse0x388ba20() {
   return (neuron0x38709e0()*0.274468);
}

double NNfunction_sg_cL::synapse0x388ba60() {
   return (neuron0x3870f40()*-0.284778);
}

double NNfunction_sg_cL::synapse0x388c0e0() {
   return (neuron0x3871160()*-0.38487);
}

double NNfunction_sg_cL::synapse0x388c120() {
   return (neuron0x38714a0()*1.64987);
}

double NNfunction_sg_cL::synapse0x388c160() {
   return (neuron0x38717e0()*-0.276699);
}

double NNfunction_sg_cL::synapse0x388c1a0() {
   return (neuron0x3871b20()*0.486763);
}

double NNfunction_sg_cL::synapse0x388c1e0() {
   return (neuron0x3871e60()*0.139458);
}

double NNfunction_sg_cL::synapse0x388c220() {
   return (neuron0x38721a0()*0.279291);
}

double NNfunction_sg_cL::synapse0x388c5a0() {
   return (neuron0x386d670()*0.0035547);
}

double NNfunction_sg_cL::synapse0x388c5e0() {
   return (neuron0x386d920()*0.0200392);
}

double NNfunction_sg_cL::synapse0x388c620() {
   return (neuron0x386dc60()*0.0930434);
}

double NNfunction_sg_cL::synapse0x388c660() {
   return (neuron0x386dfa0()*-1.08097);
}

double NNfunction_sg_cL::synapse0x388c6a0() {
   return (neuron0x386e2e0()*0.027827);
}

double NNfunction_sg_cL::synapse0x388c6e0() {
   return (neuron0x386e620()*0.0455332);
}

double NNfunction_sg_cL::synapse0x388c720() {
   return (neuron0x386e960()*0.0489451);
}

double NNfunction_sg_cL::synapse0x388c760() {
   return (neuron0x386eca0()*0.0405074);
}

double NNfunction_sg_cL::synapse0x388c7a0() {
   return (neuron0x386efe0()*0.0143676);
}

double NNfunction_sg_cL::synapse0x388c7e0() {
   return (neuron0x386f320()*0.00478045);
}

double NNfunction_sg_cL::synapse0x388c820() {
   return (neuron0x386f660()*-0.016668);
}

double NNfunction_sg_cL::synapse0x388c860() {
   return (neuron0x386f9a0()*0.0182828);
}

double NNfunction_sg_cL::synapse0x388c8a0() {
   return (neuron0x386fce0()*-2.76945);
}

double NNfunction_sg_cL::synapse0x388c8e0() {
   return (neuron0x3870020()*-0.0164514);
}

double NNfunction_sg_cL::synapse0x388c920() {
   return (neuron0x3870360()*0.0294276);
}

double NNfunction_sg_cL::synapse0x388c960() {
   return (neuron0x38706a0()*0.0303053);
}

double NNfunction_sg_cL::synapse0x388c3f0() {
   return (neuron0x38709e0()*-0.0325117);
}

double NNfunction_sg_cL::synapse0x388c430() {
   return (neuron0x3870f40()*-0.0576753);
}

double NNfunction_sg_cL::synapse0x388cab0() {
   return (neuron0x3871160()*-0.0108408);
}

double NNfunction_sg_cL::synapse0x388caf0() {
   return (neuron0x38714a0()*-0.0254957);
}

double NNfunction_sg_cL::synapse0x388cb30() {
   return (neuron0x38717e0()*0.0154295);
}

double NNfunction_sg_cL::synapse0x388cb70() {
   return (neuron0x3871b20()*0.00444219);
}

double NNfunction_sg_cL::synapse0x388cbb0() {
   return (neuron0x3871e60()*0.016601);
}

double NNfunction_sg_cL::synapse0x388cbf0() {
   return (neuron0x38721a0()*0.0234115);
}

double NNfunction_sg_cL::synapse0x388cf70() {
   return (neuron0x386d670()*0.230249);
}

double NNfunction_sg_cL::synapse0x388cfb0() {
   return (neuron0x386d920()*-0.0425613);
}

double NNfunction_sg_cL::synapse0x388cff0() {
   return (neuron0x386dc60()*-0.191674);
}

double NNfunction_sg_cL::synapse0x388d030() {
   return (neuron0x386dfa0()*0.384833);
}

double NNfunction_sg_cL::synapse0x388d070() {
   return (neuron0x386e2e0()*0.267415);
}

double NNfunction_sg_cL::synapse0x388d0b0() {
   return (neuron0x386e620()*-0.232228);
}

double NNfunction_sg_cL::synapse0x388d0f0() {
   return (neuron0x386e960()*0.163255);
}

double NNfunction_sg_cL::synapse0x388d130() {
   return (neuron0x386eca0()*-0.447213);
}

double NNfunction_sg_cL::synapse0x388d170() {
   return (neuron0x386efe0()*0.257271);
}

double NNfunction_sg_cL::synapse0x388d1b0() {
   return (neuron0x386f320()*0.316045);
}

double NNfunction_sg_cL::synapse0x388d1f0() {
   return (neuron0x386f660()*-0.149795);
}

double NNfunction_sg_cL::synapse0x388d230() {
   return (neuron0x386f9a0()*-0.608801);
}

double NNfunction_sg_cL::synapse0x388d270() {
   return (neuron0x386fce0()*-0.995581);
}

double NNfunction_sg_cL::synapse0x388d2b0() {
   return (neuron0x3870020()*0.164633);
}

double NNfunction_sg_cL::synapse0x388d2f0() {
   return (neuron0x3870360()*0.522775);
}

double NNfunction_sg_cL::synapse0x388d330() {
   return (neuron0x38706a0()*-0.306914);
}

double NNfunction_sg_cL::synapse0x388cdc0() {
   return (neuron0x38709e0()*0.0732929);
}

double NNfunction_sg_cL::synapse0x388ce00() {
   return (neuron0x3870f40()*-0.137484);
}

double NNfunction_sg_cL::synapse0x388d480() {
   return (neuron0x3871160()*0.307659);
}

double NNfunction_sg_cL::synapse0x388d4c0() {
   return (neuron0x38714a0()*-0.399901);
}

double NNfunction_sg_cL::synapse0x388d500() {
   return (neuron0x38717e0()*0.421307);
}

double NNfunction_sg_cL::synapse0x388d540() {
   return (neuron0x3871b20()*-0.208717);
}

double NNfunction_sg_cL::synapse0x388d580() {
   return (neuron0x3871e60()*0.137856);
}

double NNfunction_sg_cL::synapse0x388d5c0() {
   return (neuron0x38721a0()*0.0216657);
}

double NNfunction_sg_cL::synapse0x388d940() {
   return (neuron0x386d670()*-0.00493362);
}

double NNfunction_sg_cL::synapse0x388d980() {
   return (neuron0x386d920()*0.0591932);
}

double NNfunction_sg_cL::synapse0x388d9c0() {
   return (neuron0x386dc60()*0.048218);
}

double NNfunction_sg_cL::synapse0x388da00() {
   return (neuron0x386dfa0()*3.19911);
}

double NNfunction_sg_cL::synapse0x388da40() {
   return (neuron0x386e2e0()*-0.00788359);
}

double NNfunction_sg_cL::synapse0x388da80() {
   return (neuron0x386e620()*-0.05221);
}

double NNfunction_sg_cL::synapse0x388dac0() {
   return (neuron0x386e960()*-0.0811428);
}

double NNfunction_sg_cL::synapse0x388db00() {
   return (neuron0x386eca0()*-0.0145208);
}

double NNfunction_sg_cL::synapse0x388db40() {
   return (neuron0x386efe0()*0.00245926);
}

double NNfunction_sg_cL::synapse0x388db80() {
   return (neuron0x386f320()*-0.00394457);
}

double NNfunction_sg_cL::synapse0x388dbc0() {
   return (neuron0x386f660()*0.019177);
}

double NNfunction_sg_cL::synapse0x388dc00() {
   return (neuron0x386f9a0()*0.0242035);
}

double NNfunction_sg_cL::synapse0x388dc40() {
   return (neuron0x386fce0()*0.22008);
}

double NNfunction_sg_cL::synapse0x388dc80() {
   return (neuron0x3870020()*0.0770634);
}

double NNfunction_sg_cL::synapse0x388dcc0() {
   return (neuron0x3870360()*0.0202972);
}

double NNfunction_sg_cL::synapse0x388dd00() {
   return (neuron0x38706a0()*0.0172293);
}

double NNfunction_sg_cL::synapse0x388d790() {
   return (neuron0x38709e0()*0.0413483);
}

double NNfunction_sg_cL::synapse0x388d7d0() {
   return (neuron0x3870f40()*0.0554184);
}

double NNfunction_sg_cL::synapse0x388de50() {
   return (neuron0x3871160()*0.0297162);
}

double NNfunction_sg_cL::synapse0x388de90() {
   return (neuron0x38714a0()*0.0717088);
}

double NNfunction_sg_cL::synapse0x388ded0() {
   return (neuron0x38717e0()*-0.00289088);
}

double NNfunction_sg_cL::synapse0x388df10() {
   return (neuron0x3871b20()*0.000447649);
}

double NNfunction_sg_cL::synapse0x388df50() {
   return (neuron0x3871e60()*-0.00540682);
}

double NNfunction_sg_cL::synapse0x388df90() {
   return (neuron0x38721a0()*0.00275564);
}

double NNfunction_sg_cL::synapse0x388e310() {
   return (neuron0x386d670()*-0.00208716);
}

double NNfunction_sg_cL::synapse0x388e350() {
   return (neuron0x386d920()*-0.0508938);
}

double NNfunction_sg_cL::synapse0x388e390() {
   return (neuron0x386dc60()*0.0159507);
}

double NNfunction_sg_cL::synapse0x388e3d0() {
   return (neuron0x386dfa0()*1.2542);
}

double NNfunction_sg_cL::synapse0x388e410() {
   return (neuron0x386e2e0()*-0.0302999);
}

double NNfunction_sg_cL::synapse0x388e450() {
   return (neuron0x386e620()*-0.107618);
}

double NNfunction_sg_cL::synapse0x388e490() {
   return (neuron0x386e960()*0.0228495);
}

double NNfunction_sg_cL::synapse0x388e4d0() {
   return (neuron0x386eca0()*-0.0866145);
}

double NNfunction_sg_cL::synapse0x388e510() {
   return (neuron0x386efe0()*-0.0106723);
}

double NNfunction_sg_cL::synapse0x388e550() {
   return (neuron0x386f320()*0.0311657);
}

double NNfunction_sg_cL::synapse0x388e590() {
   return (neuron0x386f660()*0.0295661);
}

double NNfunction_sg_cL::synapse0x388e5d0() {
   return (neuron0x386f9a0()*-0.290912);
}

double NNfunction_sg_cL::synapse0x388e610() {
   return (neuron0x386fce0()*0.216188);
}

double NNfunction_sg_cL::synapse0x388e650() {
   return (neuron0x3870020()*-0.0236051);
}

double NNfunction_sg_cL::synapse0x388e690() {
   return (neuron0x3870360()*-0.250133);
}

double NNfunction_sg_cL::synapse0x388e6d0() {
   return (neuron0x38706a0()*-0.137664);
}

double NNfunction_sg_cL::synapse0x388e160() {
   return (neuron0x38709e0()*-0.121769);
}

double NNfunction_sg_cL::synapse0x388e1a0() {
   return (neuron0x3870f40()*-0.06133);
}

double NNfunction_sg_cL::synapse0x388e820() {
   return (neuron0x3871160()*-0.0761841);
}

double NNfunction_sg_cL::synapse0x388e860() {
   return (neuron0x38714a0()*0.0336887);
}

double NNfunction_sg_cL::synapse0x388e8a0() {
   return (neuron0x38717e0()*-0.0154846);
}

double NNfunction_sg_cL::synapse0x388e8e0() {
   return (neuron0x3871b20()*0.0410153);
}

double NNfunction_sg_cL::synapse0x388e920() {
   return (neuron0x3871e60()*0.0024959);
}

double NNfunction_sg_cL::synapse0x388e960() {
   return (neuron0x38721a0()*-0.0287844);
}

double NNfunction_sg_cL::synapse0x388ece0() {
   return (neuron0x386d670()*-0.0247493);
}

double NNfunction_sg_cL::synapse0x388ed20() {
   return (neuron0x386d920()*-0.0292645);
}

double NNfunction_sg_cL::synapse0x388ed60() {
   return (neuron0x386dc60()*-0.122229);
}

double NNfunction_sg_cL::synapse0x388eda0() {
   return (neuron0x386dfa0()*4.76756);
}

double NNfunction_sg_cL::synapse0x388ede0() {
   return (neuron0x386e2e0()*-0.0189205);
}

double NNfunction_sg_cL::synapse0x388ee20() {
   return (neuron0x386e620()*0.00897776);
}

double NNfunction_sg_cL::synapse0x388ee60() {
   return (neuron0x386e960()*-0.0190155);
}

double NNfunction_sg_cL::synapse0x388eea0() {
   return (neuron0x386eca0()*-0.011752);
}

double NNfunction_sg_cL::synapse0x388eee0() {
   return (neuron0x386efe0()*-0.0279087);
}

double NNfunction_sg_cL::synapse0x388ef20() {
   return (neuron0x386f320()*0.00391099);
}

double NNfunction_sg_cL::synapse0x388ef60() {
   return (neuron0x386f660()*-0.00677362);
}

double NNfunction_sg_cL::synapse0x388efa0() {
   return (neuron0x386f9a0()*-0.0657637);
}

double NNfunction_sg_cL::synapse0x388efe0() {
   return (neuron0x386fce0()*-0.617321);
}

double NNfunction_sg_cL::synapse0x388f020() {
   return (neuron0x3870020()*-0.0513231);
}

double NNfunction_sg_cL::synapse0x388f060() {
   return (neuron0x3870360()*0.00424528);
}

double NNfunction_sg_cL::synapse0x388f0a0() {
   return (neuron0x38706a0()*-0.0785322);
}

double NNfunction_sg_cL::synapse0x388eb30() {
   return (neuron0x38709e0()*-0.0402599);
}

double NNfunction_sg_cL::synapse0x388eb70() {
   return (neuron0x3870f40()*0.0562687);
}

double NNfunction_sg_cL::synapse0x388f1f0() {
   return (neuron0x3871160()*-0.0224778);
}

double NNfunction_sg_cL::synapse0x388f230() {
   return (neuron0x38714a0()*-0.016666);
}

double NNfunction_sg_cL::synapse0x388f270() {
   return (neuron0x38717e0()*0.00729394);
}

double NNfunction_sg_cL::synapse0x388f2b0() {
   return (neuron0x3871b20()*-0.00580975);
}

double NNfunction_sg_cL::synapse0x388f2f0() {
   return (neuron0x3871e60()*0.0163292);
}

double NNfunction_sg_cL::synapse0x388f330() {
   return (neuron0x38721a0()*-0.0274765);
}

double NNfunction_sg_cL::synapse0x388f6b0() {
   return (neuron0x386d670()*-0.000493959);
}

double NNfunction_sg_cL::synapse0x388f6f0() {
   return (neuron0x386d920()*-0.00894432);
}

double NNfunction_sg_cL::synapse0x388f730() {
   return (neuron0x386dc60()*0.0611312);
}

double NNfunction_sg_cL::synapse0x388f770() {
   return (neuron0x386dfa0()*-0.0230688);
}

double NNfunction_sg_cL::synapse0x388f7b0() {
   return (neuron0x386e2e0()*0.00553887);
}

double NNfunction_sg_cL::synapse0x388f7f0() {
   return (neuron0x386e620()*0.00842517);
}

double NNfunction_sg_cL::synapse0x388f830() {
   return (neuron0x386e960()*0.00298957);
}

double NNfunction_sg_cL::synapse0x388f870() {
   return (neuron0x386eca0()*0.00271733);
}

double NNfunction_sg_cL::synapse0x388f8b0() {
   return (neuron0x386efe0()*-0.0228399);
}

double NNfunction_sg_cL::synapse0x388f8f0() {
   return (neuron0x386f320()*0.00269358);
}

double NNfunction_sg_cL::synapse0x388f930() {
   return (neuron0x386f660()*-0.0320216);
}

double NNfunction_sg_cL::synapse0x388f970() {
   return (neuron0x386f9a0()*0.0154158);
}

double NNfunction_sg_cL::synapse0x388f9b0() {
   return (neuron0x386fce0()*-0.449983);
}

double NNfunction_sg_cL::synapse0x388f9f0() {
   return (neuron0x3870020()*-0.016434);
}

double NNfunction_sg_cL::synapse0x388fa30() {
   return (neuron0x3870360()*0.0243037);
}

double NNfunction_sg_cL::synapse0x388fa70() {
   return (neuron0x38706a0()*0.0185531);
}

double NNfunction_sg_cL::synapse0x388f500() {
   return (neuron0x38709e0()*-0.0184018);
}

double NNfunction_sg_cL::synapse0x388f540() {
   return (neuron0x3870f40()*-0.00146187);
}

double NNfunction_sg_cL::synapse0x388fbc0() {
   return (neuron0x3871160()*-0.00113232);
}

double NNfunction_sg_cL::synapse0x388fc00() {
   return (neuron0x38714a0()*-0.0192802);
}

double NNfunction_sg_cL::synapse0x388fc40() {
   return (neuron0x38717e0()*-0.00559477);
}

double NNfunction_sg_cL::synapse0x388fc80() {
   return (neuron0x3871b20()*-0.00336612);
}

double NNfunction_sg_cL::synapse0x388fcc0() {
   return (neuron0x3871e60()*0.0112513);
}

double NNfunction_sg_cL::synapse0x388fd00() {
   return (neuron0x38721a0()*0.0248684);
}

double NNfunction_sg_cL::synapse0x38787b0() {
   return (neuron0x386d670()*-0.0981682);
}

double NNfunction_sg_cL::synapse0x38787f0() {
   return (neuron0x386d920()*-0.0790661);
}

double NNfunction_sg_cL::synapse0x3878830() {
   return (neuron0x386dc60()*-0.472367);
}

double NNfunction_sg_cL::synapse0x3878870() {
   return (neuron0x386dfa0()*0.130623);
}

double NNfunction_sg_cL::synapse0x38788b0() {
   return (neuron0x386e2e0()*-0.00148224);
}

double NNfunction_sg_cL::synapse0x38788f0() {
   return (neuron0x386e620()*-0.306696);
}

double NNfunction_sg_cL::synapse0x3878930() {
   return (neuron0x386e960()*-0.168782);
}

double NNfunction_sg_cL::synapse0x3878970() {
   return (neuron0x386eca0()*0.665162);
}

double NNfunction_sg_cL::synapse0x3890490() {
   return (neuron0x386efe0()*0.123129);
}

double NNfunction_sg_cL::synapse0x38904d0() {
   return (neuron0x386f320()*0.0897263);
}

double NNfunction_sg_cL::synapse0x3890510() {
   return (neuron0x386f660()*0.058281);
}

double NNfunction_sg_cL::synapse0x3890550() {
   return (neuron0x386f9a0()*0.546939);
}

double NNfunction_sg_cL::synapse0x3890590() {
   return (neuron0x386fce0()*-0.76738);
}

double NNfunction_sg_cL::synapse0x38905d0() {
   return (neuron0x3870020()*-0.0732673);
}

double NNfunction_sg_cL::synapse0x3890610() {
   return (neuron0x3870360()*0.0562943);
}

double NNfunction_sg_cL::synapse0x3890650() {
   return (neuron0x38706a0()*-0.180208);
}

double NNfunction_sg_cL::synapse0x388fed0() {
   return (neuron0x38709e0()*-0.247858);
}

double NNfunction_sg_cL::synapse0x388ff10() {
   return (neuron0x3870f40()*-0.00556635);
}

double NNfunction_sg_cL::synapse0x38907a0() {
   return (neuron0x3871160()*-0.0889264);
}

double NNfunction_sg_cL::synapse0x38907e0() {
   return (neuron0x38714a0()*-0.054338);
}

double NNfunction_sg_cL::synapse0x3890820() {
   return (neuron0x38717e0()*0.28274);
}

double NNfunction_sg_cL::synapse0x3890860() {
   return (neuron0x3871b20()*-0.135469);
}

double NNfunction_sg_cL::synapse0x38908a0() {
   return (neuron0x3871e60()*-0.0279511);
}

double NNfunction_sg_cL::synapse0x38908e0() {
   return (neuron0x38721a0()*-0.284292);
}

double NNfunction_sg_cL::synapse0x3890c60() {
   return (neuron0x386d670()*0.0158059);
}

double NNfunction_sg_cL::synapse0x3890ca0() {
   return (neuron0x386d920()*0.0404457);
}

double NNfunction_sg_cL::synapse0x3890ce0() {
   return (neuron0x386dc60()*0.116571);
}

double NNfunction_sg_cL::synapse0x3890d20() {
   return (neuron0x386dfa0()*2.76912);
}

double NNfunction_sg_cL::synapse0x3890d60() {
   return (neuron0x386e2e0()*-0.0290837);
}

double NNfunction_sg_cL::synapse0x3890da0() {
   return (neuron0x386e620()*0.0511691);
}

double NNfunction_sg_cL::synapse0x3890de0() {
   return (neuron0x386e960()*0.00725082);
}

double NNfunction_sg_cL::synapse0x3890e20() {
   return (neuron0x386eca0()*0.0890495);
}

double NNfunction_sg_cL::synapse0x3890e60() {
   return (neuron0x386efe0()*0.00999683);
}

double NNfunction_sg_cL::synapse0x3890ea0() {
   return (neuron0x386f320()*0.00785216);
}

double NNfunction_sg_cL::synapse0x3890ee0() {
   return (neuron0x386f660()*-0.00390236);
}

double NNfunction_sg_cL::synapse0x3890f20() {
   return (neuron0x386f9a0()*-0.0328079);
}

double NNfunction_sg_cL::synapse0x3890f60() {
   return (neuron0x386fce0()*-1.76175);
}

double NNfunction_sg_cL::synapse0x3890fa0() {
   return (neuron0x3870020()*-0.104614);
}

double NNfunction_sg_cL::synapse0x3890fe0() {
   return (neuron0x3870360()*0.0439749);
}

double NNfunction_sg_cL::synapse0x3891020() {
   return (neuron0x38706a0()*-0.00508365);
}

double NNfunction_sg_cL::synapse0x3890ab0() {
   return (neuron0x38709e0()*-0.0364909);
}

double NNfunction_sg_cL::synapse0x3890af0() {
   return (neuron0x3870f40()*0.0302881);
}

double NNfunction_sg_cL::synapse0x3891170() {
   return (neuron0x3871160()*0.00608433);
}

double NNfunction_sg_cL::synapse0x38911b0() {
   return (neuron0x38714a0()*0.00783488);
}

double NNfunction_sg_cL::synapse0x38911f0() {
   return (neuron0x38717e0()*-0.0244616);
}

double NNfunction_sg_cL::synapse0x3891230() {
   return (neuron0x3871b20()*-0.0222171);
}

double NNfunction_sg_cL::synapse0x3891270() {
   return (neuron0x3871e60()*-0.00206869);
}

double NNfunction_sg_cL::synapse0x38912b0() {
   return (neuron0x38721a0()*0.00385954);
}

double NNfunction_sg_cL::synapse0x3891630() {
   return (neuron0x386d670()*0.00892952);
}

double NNfunction_sg_cL::synapse0x3891670() {
   return (neuron0x386d920()*0.102998);
}

double NNfunction_sg_cL::synapse0x38916b0() {
   return (neuron0x386dc60()*0.0552676);
}

double NNfunction_sg_cL::synapse0x38916f0() {
   return (neuron0x386dfa0()*-0.51071);
}

double NNfunction_sg_cL::synapse0x3891730() {
   return (neuron0x386e2e0()*0.510778);
}

double NNfunction_sg_cL::synapse0x3891770() {
   return (neuron0x386e620()*-0.0879855);
}

double NNfunction_sg_cL::synapse0x38917b0() {
   return (neuron0x386e960()*-0.596965);
}

double NNfunction_sg_cL::synapse0x38917f0() {
   return (neuron0x386eca0()*-0.384538);
}

double NNfunction_sg_cL::synapse0x3891830() {
   return (neuron0x386efe0()*0.0298801);
}

double NNfunction_sg_cL::synapse0x3891870() {
   return (neuron0x386f320()*0.119418);
}

double NNfunction_sg_cL::synapse0x38918b0() {
   return (neuron0x386f660()*0.143786);
}

double NNfunction_sg_cL::synapse0x38918f0() {
   return (neuron0x386f9a0()*0.629462);
}

double NNfunction_sg_cL::synapse0x3891930() {
   return (neuron0x386fce0()*0.181086);
}

double NNfunction_sg_cL::synapse0x3891970() {
   return (neuron0x3870020()*-0.372745);
}

double NNfunction_sg_cL::synapse0x38919b0() {
   return (neuron0x3870360()*-0.181587);
}

double NNfunction_sg_cL::synapse0x38919f0() {
   return (neuron0x38706a0()*-0.083094);
}

double NNfunction_sg_cL::synapse0x3891480() {
   return (neuron0x38709e0()*-0.384324);
}

double NNfunction_sg_cL::synapse0x38914c0() {
   return (neuron0x3870f40()*0.424664);
}

double NNfunction_sg_cL::synapse0x3881ff0() {
   return (neuron0x3871160()*-0.0387328);
}

double NNfunction_sg_cL::synapse0x3882030() {
   return (neuron0x38714a0()*0.242739);
}

double NNfunction_sg_cL::synapse0x3882070() {
   return (neuron0x38717e0()*-0.0532654);
}

double NNfunction_sg_cL::synapse0x38820b0() {
   return (neuron0x3871b20()*0.236808);
}

double NNfunction_sg_cL::synapse0x38820f0() {
   return (neuron0x3871e60()*-0.0917805);
}

double NNfunction_sg_cL::synapse0x3882130() {
   return (neuron0x38721a0()*0.20611);
}

double NNfunction_sg_cL::synapse0x38824b0() {
   return (neuron0x386d670()*-0.00354623);
}

double NNfunction_sg_cL::synapse0x38824f0() {
   return (neuron0x386d920()*0.00270595);
}

double NNfunction_sg_cL::synapse0x3882530() {
   return (neuron0x386dc60()*0.065847);
}

double NNfunction_sg_cL::synapse0x3882570() {
   return (neuron0x386dfa0()*1.39254);
}

double NNfunction_sg_cL::synapse0x38825b0() {
   return (neuron0x386e2e0()*-0.00107443);
}

double NNfunction_sg_cL::synapse0x38825f0() {
   return (neuron0x386e620()*-0.00288797);
}

double NNfunction_sg_cL::synapse0x3882630() {
   return (neuron0x386e960()*0.001233);
}

double NNfunction_sg_cL::synapse0x3882670() {
   return (neuron0x386eca0()*-0.00514813);
}

double NNfunction_sg_cL::synapse0x38826b0() {
   return (neuron0x386efe0()*0.00272411);
}

double NNfunction_sg_cL::synapse0x38826f0() {
   return (neuron0x386f320()*-0.0161364);
}

double NNfunction_sg_cL::synapse0x3882730() {
   return (neuron0x386f660()*0.00702275);
}

double NNfunction_sg_cL::synapse0x3882770() {
   return (neuron0x386f9a0()*-0.0135173);
}

double NNfunction_sg_cL::synapse0x38827b0() {
   return (neuron0x386fce0()*-0.185258);
}

double NNfunction_sg_cL::synapse0x38827f0() {
   return (neuron0x3870020()*-0.000689401);
}

double NNfunction_sg_cL::synapse0x3882830() {
   return (neuron0x3870360()*-0.0107269);
}

double NNfunction_sg_cL::synapse0x3882870() {
   return (neuron0x38706a0()*-0.0165213);
}

double NNfunction_sg_cL::synapse0x3882300() {
   return (neuron0x38709e0()*0.00795475);
}

double NNfunction_sg_cL::synapse0x3882340() {
   return (neuron0x3870f40()*-0.0212346);
}

double NNfunction_sg_cL::synapse0x38829c0() {
   return (neuron0x3871160()*-0.0175488);
}

double NNfunction_sg_cL::synapse0x3882a00() {
   return (neuron0x38714a0()*-0.000965803);
}

double NNfunction_sg_cL::synapse0x3882a40() {
   return (neuron0x38717e0()*0.00427467);
}

double NNfunction_sg_cL::synapse0x3882a80() {
   return (neuron0x3871b20()*0.000444307);
}

double NNfunction_sg_cL::synapse0x3882ac0() {
   return (neuron0x3871e60()*-0.00266007);
}

double NNfunction_sg_cL::synapse0x3882b00() {
   return (neuron0x38721a0()*-0.010178);
}

double NNfunction_sg_cL::synapse0x3882e80() {
   return (neuron0x386d670()*-0.00607929);
}

double NNfunction_sg_cL::synapse0x3882ec0() {
   return (neuron0x386d920()*-0.0132019);
}

double NNfunction_sg_cL::synapse0x3882f00() {
   return (neuron0x386dc60()*-0.0263355);
}

double NNfunction_sg_cL::synapse0x3882f40() {
   return (neuron0x386dfa0()*-0.359751);
}

double NNfunction_sg_cL::synapse0x3882f80() {
   return (neuron0x386e2e0()*-0.023889);
}

double NNfunction_sg_cL::synapse0x3882fc0() {
   return (neuron0x386e620()*-0.0300912);
}

double NNfunction_sg_cL::synapse0x3883000() {
   return (neuron0x386e960()*-0.0194224);
}

double NNfunction_sg_cL::synapse0x3883040() {
   return (neuron0x386eca0()*-0.0172352);
}

double NNfunction_sg_cL::synapse0x3883080() {
   return (neuron0x386efe0()*-0.010043);
}

double NNfunction_sg_cL::synapse0x38830c0() {
   return (neuron0x386f320()*0.0206829);
}

double NNfunction_sg_cL::synapse0x3883100() {
   return (neuron0x386f660()*0.0201448);
}

double NNfunction_sg_cL::synapse0x3883140() {
   return (neuron0x386f9a0()*0.0050055);
}

double NNfunction_sg_cL::synapse0x3883180() {
   return (neuron0x386fce0()*3.46224);
}

double NNfunction_sg_cL::synapse0x38831c0() {
   return (neuron0x3870020()*0.0337125);
}

double NNfunction_sg_cL::synapse0x3883200() {
   return (neuron0x3870360()*-0.00844015);
}

double NNfunction_sg_cL::synapse0x3883240() {
   return (neuron0x38706a0()*-0.0181233);
}

double NNfunction_sg_cL::synapse0x3882cd0() {
   return (neuron0x38709e0()*0.0404392);
}

double NNfunction_sg_cL::synapse0x3882d10() {
   return (neuron0x3870f40()*0.0404931);
}

double NNfunction_sg_cL::synapse0x3883390() {
   return (neuron0x3871160()*0.00584592);
}

double NNfunction_sg_cL::synapse0x38833d0() {
   return (neuron0x38714a0()*0.0308929);
}

double NNfunction_sg_cL::synapse0x3883410() {
   return (neuron0x38717e0()*0.00696789);
}

double NNfunction_sg_cL::synapse0x3883450() {
   return (neuron0x3871b20()*0.00110544);
}

double NNfunction_sg_cL::synapse0x3883490() {
   return (neuron0x3871e60()*-0.0110639);
}

double NNfunction_sg_cL::synapse0x38834d0() {
   return (neuron0x38721a0()*-0.0355654);
}

double NNfunction_sg_cL::synapse0x3883850() {
   return (neuron0x386d670()*-0.0507557);
}

double NNfunction_sg_cL::synapse0x3883890() {
   return (neuron0x386d920()*-0.0347164);
}

double NNfunction_sg_cL::synapse0x38838d0() {
   return (neuron0x386dc60()*0.853376);
}

double NNfunction_sg_cL::synapse0x3883910() {
   return (neuron0x386dfa0()*-3.63684);
}

double NNfunction_sg_cL::synapse0x3883950() {
   return (neuron0x386e2e0()*-0.0817805);
}

double NNfunction_sg_cL::synapse0x3883990() {
   return (neuron0x386e620()*0.0832977);
}

double NNfunction_sg_cL::synapse0x38839d0() {
   return (neuron0x386e960()*0.0217856);
}

double NNfunction_sg_cL::synapse0x3883a10() {
   return (neuron0x386eca0()*-0.0043544);
}

double NNfunction_sg_cL::synapse0x3883a50() {
   return (neuron0x386efe0()*-0.0706005);
}

double NNfunction_sg_cL::synapse0x3883a90() {
   return (neuron0x386f320()*0.0267343);
}

double NNfunction_sg_cL::synapse0x3883ad0() {
   return (neuron0x386f660()*-0.0544003);
}

double NNfunction_sg_cL::synapse0x3883b10() {
   return (neuron0x386f9a0()*0.0665097);
}

double NNfunction_sg_cL::synapse0x3883b50() {
   return (neuron0x386fce0()*0.105654);
}

double NNfunction_sg_cL::synapse0x3883b90() {
   return (neuron0x3870020()*0.0311765);
}

double NNfunction_sg_cL::synapse0x3883bd0() {
   return (neuron0x3870360()*0.112788);
}

double NNfunction_sg_cL::synapse0x3883c10() {
   return (neuron0x38706a0()*-0.000788669);
}

double NNfunction_sg_cL::synapse0x38836a0() {
   return (neuron0x38709e0()*-0.088096);
}

double NNfunction_sg_cL::synapse0x38836e0() {
   return (neuron0x3870f40()*0.0346586);
}

double NNfunction_sg_cL::synapse0x3883d60() {
   return (neuron0x3871160()*0.00727361);
}

double NNfunction_sg_cL::synapse0x3883da0() {
   return (neuron0x38714a0()*-0.0507017);
}

double NNfunction_sg_cL::synapse0x3883de0() {
   return (neuron0x38717e0()*0.0454145);
}

double NNfunction_sg_cL::synapse0x3883e20() {
   return (neuron0x3871b20()*-0.00696097);
}

double NNfunction_sg_cL::synapse0x3883e60() {
   return (neuron0x3871e60()*0.117884);
}

double NNfunction_sg_cL::synapse0x3883ea0() {
   return (neuron0x38721a0()*0.0420311);
}

double NNfunction_sg_cL::synapse0x3895d70() {
   return (neuron0x386d670()*-0.0222879);
}

double NNfunction_sg_cL::synapse0x3895db0() {
   return (neuron0x386d920()*-0.0165831);
}

double NNfunction_sg_cL::synapse0x3895df0() {
   return (neuron0x386dc60()*-0.0722443);
}

double NNfunction_sg_cL::synapse0x3895e30() {
   return (neuron0x386dfa0()*0.916499);
}

double NNfunction_sg_cL::synapse0x3895e70() {
   return (neuron0x386e2e0()*-0.00254656);
}

double NNfunction_sg_cL::synapse0x3895eb0() {
   return (neuron0x386e620()*0.00628499);
}

double NNfunction_sg_cL::synapse0x3895ef0() {
   return (neuron0x386e960()*-0.0122699);
}

double NNfunction_sg_cL::synapse0x3895f30() {
   return (neuron0x386eca0()*-0.0560827);
}

double NNfunction_sg_cL::synapse0x3895f70() {
   return (neuron0x386efe0()*0.0133603);
}

double NNfunction_sg_cL::synapse0x3895fb0() {
   return (neuron0x386f320()*-0.100231);
}

double NNfunction_sg_cL::synapse0x3895ff0() {
   return (neuron0x386f660()*-0.0100346);
}

double NNfunction_sg_cL::synapse0x3896030() {
   return (neuron0x386f9a0()*0.0426293);
}

double NNfunction_sg_cL::synapse0x3896070() {
   return (neuron0x386fce0()*-1.73479);
}

double NNfunction_sg_cL::synapse0x38960b0() {
   return (neuron0x3870020()*0.053077);
}

double NNfunction_sg_cL::synapse0x38960f0() {
   return (neuron0x3870360()*-0.00999185);
}

double NNfunction_sg_cL::synapse0x3896130() {
   return (neuron0x38706a0()*-0.0251564);
}

double NNfunction_sg_cL::synapse0x3883ee0() {
   return (neuron0x38709e0()*0.0137695);
}

double NNfunction_sg_cL::synapse0x3883f20() {
   return (neuron0x3870f40()*-0.0209972);
}

double NNfunction_sg_cL::synapse0x3896280() {
   return (neuron0x3871160()*0.0141472);
}

double NNfunction_sg_cL::synapse0x38962c0() {
   return (neuron0x38714a0()*-0.0135923);
}

double NNfunction_sg_cL::synapse0x3896300() {
   return (neuron0x38717e0()*-0.0376705);
}

double NNfunction_sg_cL::synapse0x3896340() {
   return (neuron0x3871b20()*0.00400539);
}

double NNfunction_sg_cL::synapse0x3896380() {
   return (neuron0x3871e60()*-0.0131046);
}

double NNfunction_sg_cL::synapse0x38963c0() {
   return (neuron0x38721a0()*0.0252177);
}

double NNfunction_sg_cL::synapse0x3896740() {
   return (neuron0x386d670()*0.0189044);
}

double NNfunction_sg_cL::synapse0x3896780() {
   return (neuron0x386d920()*-0.00354552);
}

double NNfunction_sg_cL::synapse0x38967c0() {
   return (neuron0x386dc60()*-0.059081);
}

double NNfunction_sg_cL::synapse0x3896800() {
   return (neuron0x386dfa0()*-2.27575);
}

double NNfunction_sg_cL::synapse0x3896840() {
   return (neuron0x386e2e0()*-0.0311301);
}

double NNfunction_sg_cL::synapse0x3896880() {
   return (neuron0x386e620()*-0.00441537);
}

double NNfunction_sg_cL::synapse0x38968c0() {
   return (neuron0x386e960()*-0.0146103);
}

double NNfunction_sg_cL::synapse0x3896900() {
   return (neuron0x386eca0()*0.0232054);
}

double NNfunction_sg_cL::synapse0x3896940() {
   return (neuron0x386efe0()*0.037332);
}

double NNfunction_sg_cL::synapse0x3896980() {
   return (neuron0x386f320()*0.0403862);
}

double NNfunction_sg_cL::synapse0x38969c0() {
   return (neuron0x386f660()*0.0176586);
}

double NNfunction_sg_cL::synapse0x3896a00() {
   return (neuron0x386f9a0()*-0.0134473);
}

double NNfunction_sg_cL::synapse0x3896a40() {
   return (neuron0x386fce0()*0.133017);
}

double NNfunction_sg_cL::synapse0x3896a80() {
   return (neuron0x3870020()*-0.0670603);
}

double NNfunction_sg_cL::synapse0x3896ac0() {
   return (neuron0x3870360()*0.0105417);
}

double NNfunction_sg_cL::synapse0x3896b00() {
   return (neuron0x38706a0()*0.0456946);
}

double NNfunction_sg_cL::synapse0x3896590() {
   return (neuron0x38709e0()*-0.085134);
}

double NNfunction_sg_cL::synapse0x38965d0() {
   return (neuron0x3870f40()*0.0696878);
}

double NNfunction_sg_cL::synapse0x3896c50() {
   return (neuron0x3871160()*0.064168);
}

double NNfunction_sg_cL::synapse0x3896c90() {
   return (neuron0x38714a0()*0.00273353);
}

double NNfunction_sg_cL::synapse0x3896cd0() {
   return (neuron0x38717e0()*0.0185979);
}

double NNfunction_sg_cL::synapse0x3896d10() {
   return (neuron0x3871b20()*0.00030484);
}

double NNfunction_sg_cL::synapse0x3896d50() {
   return (neuron0x3871e60()*0.00443316);
}

double NNfunction_sg_cL::synapse0x3896d90() {
   return (neuron0x38721a0()*-0.0122882);
}

double NNfunction_sg_cL::synapse0x3897110() {
   return (neuron0x386d670()*-0.00583498);
}

double NNfunction_sg_cL::synapse0x3897150() {
   return (neuron0x386d920()*-0.0266557);
}

double NNfunction_sg_cL::synapse0x3897190() {
   return (neuron0x386dc60()*0.107145);
}

double NNfunction_sg_cL::synapse0x38971d0() {
   return (neuron0x386dfa0()*1.71606);
}

double NNfunction_sg_cL::synapse0x3897210() {
   return (neuron0x386e2e0()*-0.00696367);
}

double NNfunction_sg_cL::synapse0x3897250() {
   return (neuron0x386e620()*0.0866785);
}

double NNfunction_sg_cL::synapse0x3897290() {
   return (neuron0x386e960()*0.0253757);
}

double NNfunction_sg_cL::synapse0x38972d0() {
   return (neuron0x386eca0()*0.0573355);
}

double NNfunction_sg_cL::synapse0x3897310() {
   return (neuron0x386efe0()*-0.0113882);
}

double NNfunction_sg_cL::synapse0x3897350() {
   return (neuron0x386f320()*0.0151607);
}

double NNfunction_sg_cL::synapse0x3897390() {
   return (neuron0x386f660()*-0.0150403);
}

double NNfunction_sg_cL::synapse0x38973d0() {
   return (neuron0x386f9a0()*-0.115465);
}

double NNfunction_sg_cL::synapse0x3897410() {
   return (neuron0x386fce0()*-0.190351);
}

double NNfunction_sg_cL::synapse0x3897450() {
   return (neuron0x3870020()*-0.10564);
}

double NNfunction_sg_cL::synapse0x3897490() {
   return (neuron0x3870360()*0.2449);
}

double NNfunction_sg_cL::synapse0x38974d0() {
   return (neuron0x38706a0()*0.0353806);
}

double NNfunction_sg_cL::synapse0x3896f60() {
   return (neuron0x38709e0()*-0.0744731);
}

double NNfunction_sg_cL::synapse0x3896fa0() {
   return (neuron0x3870f40()*0.0883005);
}

double NNfunction_sg_cL::synapse0x3897620() {
   return (neuron0x3871160()*0.0798552);
}

double NNfunction_sg_cL::synapse0x3897660() {
   return (neuron0x38714a0()*-0.0122368);
}

double NNfunction_sg_cL::synapse0x38976a0() {
   return (neuron0x38717e0()*-0.0240095);
}

double NNfunction_sg_cL::synapse0x38976e0() {
   return (neuron0x3871b20()*0.000757857);
}

double NNfunction_sg_cL::synapse0x3897720() {
   return (neuron0x3871e60()*-0.0175328);
}

double NNfunction_sg_cL::synapse0x3897760() {
   return (neuron0x38721a0()*0.0255102);
}

double NNfunction_sg_cL::synapse0x3897ae0() {
   return (neuron0x386d670()*-0.0383063);
}

double NNfunction_sg_cL::synapse0x3897b20() {
   return (neuron0x386d920()*0.0538038);
}

double NNfunction_sg_cL::synapse0x3897b60() {
   return (neuron0x386dc60()*0.614645);
}

double NNfunction_sg_cL::synapse0x3897ba0() {
   return (neuron0x386dfa0()*0.0835225);
}

double NNfunction_sg_cL::synapse0x3897be0() {
   return (neuron0x386e2e0()*0.0391211);
}

double NNfunction_sg_cL::synapse0x3897c20() {
   return (neuron0x386e620()*0.174394);
}

double NNfunction_sg_cL::synapse0x3897c60() {
   return (neuron0x386e960()*0.575292);
}

double NNfunction_sg_cL::synapse0x3897ca0() {
   return (neuron0x386eca0()*0.265857);
}

double NNfunction_sg_cL::synapse0x3897ce0() {
   return (neuron0x386efe0()*0.183513);
}

double NNfunction_sg_cL::synapse0x3897d20() {
   return (neuron0x386f320()*0.257116);
}

double NNfunction_sg_cL::synapse0x3897d60() {
   return (neuron0x386f660()*0.11551);
}

double NNfunction_sg_cL::synapse0x3897da0() {
   return (neuron0x386f9a0()*0.0668405);
}

double NNfunction_sg_cL::synapse0x3897de0() {
   return (neuron0x386fce0()*-1.2828);
}

double NNfunction_sg_cL::synapse0x3897e20() {
   return (neuron0x3870020()*-0.397049);
}

double NNfunction_sg_cL::synapse0x3897e60() {
   return (neuron0x3870360()*0.938164);
}

double NNfunction_sg_cL::synapse0x3897ea0() {
   return (neuron0x38706a0()*0.294849);
}

double NNfunction_sg_cL::synapse0x3897930() {
   return (neuron0x38709e0()*-0.276735);
}

double NNfunction_sg_cL::synapse0x3897970() {
   return (neuron0x3870f40()*0.464312);
}

double NNfunction_sg_cL::synapse0x3897ff0() {
   return (neuron0x3871160()*0.125746);
}

double NNfunction_sg_cL::synapse0x3898030() {
   return (neuron0x38714a0()*0.229362);
}

double NNfunction_sg_cL::synapse0x3898070() {
   return (neuron0x38717e0()*-0.0539445);
}

double NNfunction_sg_cL::synapse0x38980b0() {
   return (neuron0x3871b20()*-0.27607);
}

double NNfunction_sg_cL::synapse0x38980f0() {
   return (neuron0x3871e60()*0.00895255);
}

double NNfunction_sg_cL::synapse0x3898130() {
   return (neuron0x38721a0()*0.0802642);
}

double NNfunction_sg_cL::synapse0x3637f10() {
   return (neuron0x3872610()*0.815118);
}

double NNfunction_sg_cL::synapse0x3637f50() {
   return (neuron0x3872f60()*0.0171501);
}

double NNfunction_sg_cL::synapse0x3874ad0() {
   return (neuron0x3873a40()*0.0275965);
}

double NNfunction_sg_cL::synapse0x3874b10() {
   return (neuron0x38734e0()*0.692744);
}

double NNfunction_sg_cL::synapse0x38765b0() {
   return (neuron0x3874820()*-0.541982);
}

double NNfunction_sg_cL::synapse0x38765f0() {
   return (neuron0x3876300()*0.0319694);
}

double NNfunction_sg_cL::synapse0x3877380() {
   return (neuron0x38770d0()*0.0133111);
}

double NNfunction_sg_cL::synapse0x38773c0() {
   return (neuron0x3877aa0()*0.193267);
}

double NNfunction_sg_cL::synapse0x3877d50() {
   return (neuron0x3878470()*-0.448848);
}

double NNfunction_sg_cL::synapse0x3877d90() {
   return (neuron0x3878f50()*-1.04135);
}

double NNfunction_sg_cL::synapse0x3878720() {
   return (neuron0x3879920()*0.821543);
}

double NNfunction_sg_cL::synapse0x3878760() {
   return (neuron0x3876a00()*-0.126502);
}

double NNfunction_sg_cL::synapse0x3879200() {
   return (neuron0x387b4d0()*0.126912);
}

double NNfunction_sg_cL::synapse0x3879240() {
   return (neuron0x387bea0()*-0.00586544);
}

double NNfunction_sg_cL::synapse0x3879bd0() {
   return (neuron0x387c870()*-0.0131315);
}

double NNfunction_sg_cL::synapse0x3879c10() {
   return (neuron0x387d240()*0.000153628);
}

double NNfunction_sg_cL::synapse0x3876cb0() {
   return (neuron0x387f050()*-0.0144532);
}

double NNfunction_sg_cL::synapse0x3876cf0() {
   return (neuron0x387f330()*0.00173564);
}

double NNfunction_sg_cL::synapse0x387b780() {
   return (neuron0x387fd00()*-0.0192684);
}

double NNfunction_sg_cL::synapse0x387b7c0() {
   return (neuron0x38806d0()*0.0308656);
}

double NNfunction_sg_cL::synapse0x387c150() {
   return (neuron0x38810a0()*0.0602876);
}

double NNfunction_sg_cL::synapse0x387c190() {
   return (neuron0x3881a70()*-0.0440888);
}

double NNfunction_sg_cL::synapse0x387cb20() {
   return (neuron0x387a5c0()*-0.193509);
}

double NNfunction_sg_cL::synapse0x387cb60() {
   return (neuron0x387af90()*-0.0302194);
}

double NNfunction_sg_cL::synapse0x387d4f0() {
   return (neuron0x3884800()*-1.30604);
}

double NNfunction_sg_cL::synapse0x387d530() {
   return (neuron0x38851d0()*-0.414323);
}

double NNfunction_sg_cL::synapse0x3870580() {
   return (neuron0x3885ba0()*-1.71616);
}

double NNfunction_sg_cL::synapse0x38705c0() {
   return (neuron0x3886570()*0.0282412);
}

double NNfunction_sg_cL::synapse0x387f5e0() {
   return (neuron0x3886f40()*0.0566995);
}

double NNfunction_sg_cL::synapse0x387f620() {
   return (neuron0x3887910()*-0.118371);
}

double NNfunction_sg_cL::synapse0x387ffb0() {
   return (neuron0x38882e0()*-0.0970318);
}

double NNfunction_sg_cL::synapse0x387fff0() {
   return (neuron0x3888cb0()*-0.253143);
}

double NNfunction_sg_cL::synapse0x3880980() {
   return (neuron0x387ed40()*-0.744424);
}

double NNfunction_sg_cL::synapse0x38809c0() {
   return (neuron0x388b890()*0.000307873);
}

double NNfunction_sg_cL::synapse0x3881350() {
   return (neuron0x388c260()*-0.396114);
}

double NNfunction_sg_cL::synapse0x3881390() {
   return (neuron0x388cc30()*0.0109665);
}

double NNfunction_sg_cL::synapse0x3881d20() {
   return (neuron0x388d600()*0.382142);
}

double NNfunction_sg_cL::synapse0x3881d60() {
   return (neuron0x388dfd0()*-0.176802);
}

double NNfunction_sg_cL::synapse0x387a870() {
   return (neuron0x388e9a0()*0.0297218);
}

double NNfunction_sg_cL::synapse0x387a8b0() {
   return (neuron0x388f370()*1.30445);
}

double NNfunction_sg_cL::synapse0x3884120() {
   return (neuron0x388fd40()*0.020743);
}

double NNfunction_sg_cL::synapse0x3884160() {
   return (neuron0x3890920()*-0.0589758);
}

double NNfunction_sg_cL::synapse0x3884ab0() {
   return (neuron0x38912f0()*-0.0194969);
}

double NNfunction_sg_cL::synapse0x3884af0() {
   return (neuron0x3882170()*1.3995);
}

double NNfunction_sg_cL::synapse0x3885480() {
   return (neuron0x3882b40()*0.296778);
}

double NNfunction_sg_cL::synapse0x38854c0() {
   return (neuron0x3883510()*0.0302108);
}

double NNfunction_sg_cL::synapse0x3885e50() {
   return (neuron0x3895b50()*0.243574);
}

double NNfunction_sg_cL::synapse0x3885e90() {
   return (neuron0x3896400()*0.780176);
}

double NNfunction_sg_cL::synapse0x3886820() {
   return (neuron0x3896dd0()*-0.303109);
}

double NNfunction_sg_cL::synapse0x3886860() {
   return (neuron0x38977a0()*0.0135366);
}

double NNfunction_sg_cL::synapse0x3888f60() {
   return (neuron0x3872610()*-4.07295);
}

double NNfunction_sg_cL::synapse0x3888fa0() {
   return (neuron0x3872f60()*0.342215);
}

double NNfunction_sg_cL::synapse0x387e520() {
   return (neuron0x3873a40()*0.226367);
}

double NNfunction_sg_cL::synapse0x387e560() {
   return (neuron0x38734e0()*1.88119);
}

double NNfunction_sg_cL::synapse0x388bb40() {
   return (neuron0x3874820()*-2.19407);
}

double NNfunction_sg_cL::synapse0x388bb80() {
   return (neuron0x3876300()*0.147626);
}

double NNfunction_sg_cL::synapse0x388c510() {
   return (neuron0x38770d0()*0.730355);
}

double NNfunction_sg_cL::synapse0x388c550() {
   return (neuron0x3877aa0()*0.729122);
}

double NNfunction_sg_cL::synapse0x388cee0() {
   return (neuron0x3878470()*-1.55456);
}

double NNfunction_sg_cL::synapse0x388cf20() {
   return (neuron0x3878f50()*-0.845153);
}

double NNfunction_sg_cL::synapse0x388d8b0() {
   return (neuron0x3879920()*0.622143);
}

double NNfunction_sg_cL::synapse0x388d8f0() {
   return (neuron0x3876a00()*1.50432);
}

double NNfunction_sg_cL::synapse0x388e280() {
   return (neuron0x387b4d0()*0.939968);
}

double NNfunction_sg_cL::synapse0x388e2c0() {
   return (neuron0x387bea0()*0.100473);
}

double NNfunction_sg_cL::synapse0x388ec50() {
   return (neuron0x387c870()*-0.281584);
}

double NNfunction_sg_cL::synapse0x388ec90() {
   return (neuron0x387d240()*0.152208);
}

double NNfunction_sg_cL::synapse0x388f620() {
   return (neuron0x387f050()*0.650704);
}

double NNfunction_sg_cL::synapse0x388f660() {
   return (neuron0x387f330()*-0.0155194);
}

double NNfunction_sg_cL::synapse0x388fff0() {
   return (neuron0x387fd00()*-0.530789);
}

double NNfunction_sg_cL::synapse0x3890030() {
   return (neuron0x38806d0()*-0.762678);
}

double NNfunction_sg_cL::synapse0x3890bd0() {
   return (neuron0x38810a0()*0.561866);
}

double NNfunction_sg_cL::synapse0x3890c10() {
   return (neuron0x3881a70()*-0.641334);
}

double NNfunction_sg_cL::synapse0x38915a0() {
   return (neuron0x387a5c0()*-1.13904);
}

double NNfunction_sg_cL::synapse0x38915e0() {
   return (neuron0x387af90()*-0.141502);
}

double NNfunction_sg_cL::synapse0x3882420() {
   return (neuron0x3884800()*-2.13111);
}

double NNfunction_sg_cL::synapse0x3882460() {
   return (neuron0x38851d0()*1.41606);
}

double NNfunction_sg_cL::synapse0x3882df0() {
   return (neuron0x3885ba0()*-0.806083);
}

double NNfunction_sg_cL::synapse0x3882e30() {
   return (neuron0x3886570()*-0.541253);
}

double NNfunction_sg_cL::synapse0x38837c0() {
   return (neuron0x3886f40()*2.07445);
}

double NNfunction_sg_cL::synapse0x3883800() {
   return (neuron0x3887910()*-1.81637);
}

double NNfunction_sg_cL::synapse0x3895ce0() {
   return (neuron0x38882e0()*0.0620498);
}

double NNfunction_sg_cL::synapse0x3895d20() {
   return (neuron0x3888cb0()*1.67228);
}

double NNfunction_sg_cL::synapse0x38966b0() {
   return (neuron0x387ed40()*2.79027);
}

double NNfunction_sg_cL::synapse0x38966f0() {
   return (neuron0x388b890()*0.0532189);
}

double NNfunction_sg_cL::synapse0x3897080() {
   return (neuron0x388c260()*-0.130871);
}

double NNfunction_sg_cL::synapse0x38970c0() {
   return (neuron0x388cc30()*0.0558936);
}

double NNfunction_sg_cL::synapse0x3897a50() {
   return (neuron0x388d600()*-1.97739);
}

double NNfunction_sg_cL::synapse0x3897a90() {
   return (neuron0x388dfd0()*-0.374893);
}

double NNfunction_sg_cL::synapse0x38728c0() {
   return (neuron0x388e9a0()*-2.47554);
}

double NNfunction_sg_cL::synapse0x3872900() {
   return (neuron0x388f370()*0.331543);
}

double NNfunction_sg_cL::synapse0x38871f0() {
   return (neuron0x388fd40()*0.44706);
}

double NNfunction_sg_cL::synapse0x3887230() {
   return (neuron0x3890920()*-2.23542);
}

double NNfunction_sg_cL::synapse0x3898170() {
   return (neuron0x38912f0()*0.159674);
}

double NNfunction_sg_cL::synapse0x38981b0() {
   return (neuron0x3882170()*-0.175286);
}

double NNfunction_sg_cL::synapse0x38981f0() {
   return (neuron0x3882b40()*-0.543823);
}

double NNfunction_sg_cL::synapse0x3898230() {
   return (neuron0x3883510()*2.68592);
}

double NNfunction_sg_cL::synapse0x389f0e0() {
   return (neuron0x3895b50()*-0.950249);
}

double NNfunction_sg_cL::synapse0x389f120() {
   return (neuron0x3896400()*1.96065);
}

double NNfunction_sg_cL::synapse0x389f160() {
   return (neuron0x3896dd0()*-1.37712);
}

double NNfunction_sg_cL::synapse0x389f1a0() {
   return (neuron0x38977a0()*0.18244);
}

double NNfunction_sg_cL::synapse0x389f520() {
   return (neuron0x3872610()*-0.757755);
}

double NNfunction_sg_cL::synapse0x389f560() {
   return (neuron0x3872f60()*0.0227436);
}

double NNfunction_sg_cL::synapse0x389f5a0() {
   return (neuron0x3873a40()*-0.0113249);
}

double NNfunction_sg_cL::synapse0x389f5e0() {
   return (neuron0x38734e0()*-0.374902);
}

double NNfunction_sg_cL::synapse0x389f620() {
   return (neuron0x3874820()*-0.313704);
}

double NNfunction_sg_cL::synapse0x389f660() {
   return (neuron0x3876300()*0.00144191);
}

double NNfunction_sg_cL::synapse0x389f6a0() {
   return (neuron0x38770d0()*0.0291959);
}

double NNfunction_sg_cL::synapse0x389f6e0() {
   return (neuron0x3877aa0()*0.124982);
}

double NNfunction_sg_cL::synapse0x389f720() {
   return (neuron0x3878470()*0.152662);
}

double NNfunction_sg_cL::synapse0x389f760() {
   return (neuron0x3878f50()*0.0616015);
}

double NNfunction_sg_cL::synapse0x389f7a0() {
   return (neuron0x3879920()*0.111579);
}

double NNfunction_sg_cL::synapse0x389f7e0() {
   return (neuron0x3876a00()*0.0552345);
}

double NNfunction_sg_cL::synapse0x389f820() {
   return (neuron0x387b4d0()*0.346884);
}

double NNfunction_sg_cL::synapse0x389f860() {
   return (neuron0x387bea0()*0.00231546);
}

double NNfunction_sg_cL::synapse0x389f8a0() {
   return (neuron0x387c870()*-0.00661478);
}

double NNfunction_sg_cL::synapse0x389f8e0() {
   return (neuron0x387d240()*0.00525722);
}

double NNfunction_sg_cL::synapse0x389f370() {
   return (neuron0x387f050()*0.16619);
}

double NNfunction_sg_cL::synapse0x389f3b0() {
   return (neuron0x387f330()*0.00749021);
}

double NNfunction_sg_cL::synapse0x389fa30() {
   return (neuron0x387fd00()*-0.00584158);
}

double NNfunction_sg_cL::synapse0x389fa70() {
   return (neuron0x38806d0()*-0.256841);
}

double NNfunction_sg_cL::synapse0x389fab0() {
   return (neuron0x38810a0()*-0.00069142);
}

double NNfunction_sg_cL::synapse0x389faf0() {
   return (neuron0x3881a70()*0.00419699);
}

double NNfunction_sg_cL::synapse0x389fb30() {
   return (neuron0x387a5c0()*-1.15757);
}

double NNfunction_sg_cL::synapse0x389fb70() {
   return (neuron0x387af90()*0.0133739);
}

double NNfunction_sg_cL::synapse0x389fbb0() {
   return (neuron0x3884800()*0.836277);
}

double NNfunction_sg_cL::synapse0x389fbf0() {
   return (neuron0x38851d0()*-0.610712);
}

double NNfunction_sg_cL::synapse0x389fc30() {
   return (neuron0x3885ba0()*-0.0173619);
}

double NNfunction_sg_cL::synapse0x389fc70() {
   return (neuron0x3886570()*-0.0609823);
}

double NNfunction_sg_cL::synapse0x389fcb0() {
   return (neuron0x3886f40()*0.00386737);
}

double NNfunction_sg_cL::synapse0x389fcf0() {
   return (neuron0x3887910()*-0.429571);
}

double NNfunction_sg_cL::synapse0x389fd30() {
   return (neuron0x38882e0()*-0.0588306);
}

double NNfunction_sg_cL::synapse0x389fd70() {
   return (neuron0x3888cb0()*0.796679);
}

double NNfunction_sg_cL::synapse0x389f920() {
   return (neuron0x387ed40()*0.417331);
}

double NNfunction_sg_cL::synapse0x389f960() {
   return (neuron0x388b890()*0.000496544);
}

double NNfunction_sg_cL::synapse0x389f9a0() {
   return (neuron0x388c260()*0.423349);
}

double NNfunction_sg_cL::synapse0x389f9e0() {
   return (neuron0x388cc30()*0.00429226);
}

double NNfunction_sg_cL::synapse0x389ffc0() {
   return (neuron0x388d600()*-0.714704);
}

double NNfunction_sg_cL::synapse0x38a0000() {
   return (neuron0x388dfd0()*-0.484033);
}

double NNfunction_sg_cL::synapse0x38a0040() {
   return (neuron0x388e9a0()*-0.547717);
}

double NNfunction_sg_cL::synapse0x38a0080() {
   return (neuron0x388f370()*-0.303786);
}

double NNfunction_sg_cL::synapse0x38a00c0() {
   return (neuron0x388fd40()*-0.00292932);
}

double NNfunction_sg_cL::synapse0x38a0100() {
   return (neuron0x3890920()*-0.835086);
}

double NNfunction_sg_cL::synapse0x38a0140() {
   return (neuron0x38912f0()*-0.0028434);
}

double NNfunction_sg_cL::synapse0x38a0180() {
   return (neuron0x3882170()*-1.17475);
}

double NNfunction_sg_cL::synapse0x38a01c0() {
   return (neuron0x3882b40()*0.850313);
}

double NNfunction_sg_cL::synapse0x38a0200() {
   return (neuron0x3883510()*0.262403);
}

double NNfunction_sg_cL::synapse0x38a0240() {
   return (neuron0x3895b50()*0.752253);
}

double NNfunction_sg_cL::synapse0x38a0280() {
   return (neuron0x3896400()*0.732489);
}

double NNfunction_sg_cL::synapse0x38a02c0() {
   return (neuron0x3896dd0()*-0.660093);
}

double NNfunction_sg_cL::synapse0x38a0300() {
   return (neuron0x38977a0()*-0.0138301);
}

double NNfunction_sg_cL::synapse0x38a0680() {
   return (neuron0x3872610()*-1.21114);
}

double NNfunction_sg_cL::synapse0x38a06c0() {
   return (neuron0x3872f60()*0.0326636);
}

double NNfunction_sg_cL::synapse0x38a0700() {
   return (neuron0x3873a40()*0.416329);
}

double NNfunction_sg_cL::synapse0x38a0740() {
   return (neuron0x38734e0()*-1.80137);
}

double NNfunction_sg_cL::synapse0x38a0780() {
   return (neuron0x3874820()*1.38096);
}

double NNfunction_sg_cL::synapse0x38a07c0() {
   return (neuron0x3876300()*0.159262);
}

double NNfunction_sg_cL::synapse0x38a0800() {
   return (neuron0x38770d0()*0.282569);
}

double NNfunction_sg_cL::synapse0x38a0840() {
   return (neuron0x3877aa0()*1.66634);
}

double NNfunction_sg_cL::synapse0x38a0880() {
   return (neuron0x3878470()*1.65182);
}

double NNfunction_sg_cL::synapse0x38a08c0() {
   return (neuron0x3878f50()*0.975281);
}

double NNfunction_sg_cL::synapse0x38a0900() {
   return (neuron0x3879920()*-0.35868);
}

double NNfunction_sg_cL::synapse0x38a0940() {
   return (neuron0x3876a00()*0.823701);
}

double NNfunction_sg_cL::synapse0x38a0980() {
   return (neuron0x387b4d0()*0.000186944);
}

double NNfunction_sg_cL::synapse0x38a09c0() {
   return (neuron0x387bea0()*-0.0889769);
}

double NNfunction_sg_cL::synapse0x38a0a00() {
   return (neuron0x387c870()*-0.0483406);
}

double NNfunction_sg_cL::synapse0x38a0a40() {
   return (neuron0x387d240()*0.00256995);
}

double NNfunction_sg_cL::synapse0x38a04d0() {
   return (neuron0x387f050()*-0.787499);
}

double NNfunction_sg_cL::synapse0x38a0510() {
   return (neuron0x387f330()*0.0105993);
}

double NNfunction_sg_cL::synapse0x38a0b90() {
   return (neuron0x387fd00()*-0.117368);
}

double NNfunction_sg_cL::synapse0x38a0bd0() {
   return (neuron0x38806d0()*1.76927);
}

double NNfunction_sg_cL::synapse0x38a0c10() {
   return (neuron0x38810a0()*0.681942);
}

double NNfunction_sg_cL::synapse0x38a0c50() {
   return (neuron0x3881a70()*-0.647368);
}

double NNfunction_sg_cL::synapse0x38a0c90() {
   return (neuron0x387a5c0()*0.715746);
}

double NNfunction_sg_cL::synapse0x38a0cd0() {
   return (neuron0x387af90()*-0.325809);
}

double NNfunction_sg_cL::synapse0x38a0d10() {
   return (neuron0x3884800()*3.62934);
}

double NNfunction_sg_cL::synapse0x38a0d50() {
   return (neuron0x38851d0()*-0.53911);
}

double NNfunction_sg_cL::synapse0x38a0d90() {
   return (neuron0x3885ba0()*0.741836);
}

double NNfunction_sg_cL::synapse0x38a0dd0() {
   return (neuron0x3886570()*0.908269);
}

double NNfunction_sg_cL::synapse0x38a0e10() {
   return (neuron0x3886f40()*-0.00868896);
}

double NNfunction_sg_cL::synapse0x38a0e50() {
   return (neuron0x3887910()*-0.523811);
}

double NNfunction_sg_cL::synapse0x38a0e90() {
   return (neuron0x38882e0()*-0.597619);
}

double NNfunction_sg_cL::synapse0x38a0ed0() {
   return (neuron0x3888cb0()*1.57768);
}

double NNfunction_sg_cL::synapse0x38a0a80() {
   return (neuron0x387ed40()*2.32955);
}

double NNfunction_sg_cL::synapse0x38a0ac0() {
   return (neuron0x388b890()*0.0211708);
}

double NNfunction_sg_cL::synapse0x38a0b00() {
   return (neuron0x388c260()*-0.655859);
}

double NNfunction_sg_cL::synapse0x38a0b40() {
   return (neuron0x388cc30()*0.0792817);
}

double NNfunction_sg_cL::synapse0x38a1120() {
   return (neuron0x388d600()*-0.804632);
}

double NNfunction_sg_cL::synapse0x38a1160() {
   return (neuron0x388dfd0()*0.328333);
}

double NNfunction_sg_cL::synapse0x38a11a0() {
   return (neuron0x388e9a0()*-1.9532);
}

double NNfunction_sg_cL::synapse0x38a11e0() {
   return (neuron0x388f370()*-0.983351);
}

double NNfunction_sg_cL::synapse0x38a1220() {
   return (neuron0x388fd40()*0.197813);
}

double NNfunction_sg_cL::synapse0x38a1260() {
   return (neuron0x3890920()*-1.31281);
}

double NNfunction_sg_cL::synapse0x38a12a0() {
   return (neuron0x38912f0()*-0.132715);
}

double NNfunction_sg_cL::synapse0x38a12e0() {
   return (neuron0x3882170()*-0.870476);
}

double NNfunction_sg_cL::synapse0x38a1320() {
   return (neuron0x3882b40()*0.42148);
}

double NNfunction_sg_cL::synapse0x38a1360() {
   return (neuron0x3883510()*0.376837);
}

double NNfunction_sg_cL::synapse0x38a13a0() {
   return (neuron0x3895b50()*-0.135996);
}

double NNfunction_sg_cL::synapse0x38a13e0() {
   return (neuron0x3896400()*-0.983882);
}

double NNfunction_sg_cL::synapse0x38a1420() {
   return (neuron0x3896dd0()*0.228301);
}

double NNfunction_sg_cL::synapse0x38a1460() {
   return (neuron0x38977a0()*0.131196);
}

double NNfunction_sg_cL::synapse0x38a17e0() {
   return (neuron0x3872610()*4.00149);
}

double NNfunction_sg_cL::synapse0x38a1820() {
   return (neuron0x3872f60()*0.0425564);
}

double NNfunction_sg_cL::synapse0x38a1860() {
   return (neuron0x3873a40()*0.230807);
}

double NNfunction_sg_cL::synapse0x38a18a0() {
   return (neuron0x38734e0()*-2.95873);
}

double NNfunction_sg_cL::synapse0x38a18e0() {
   return (neuron0x3874820()*2.17182);
}

double NNfunction_sg_cL::synapse0x38a1920() {
   return (neuron0x3876300()*0.378768);
}

double NNfunction_sg_cL::synapse0x38a1960() {
   return (neuron0x38770d0()*-0.667824);
}

double NNfunction_sg_cL::synapse0x38a19a0() {
   return (neuron0x3877aa0()*0.0939715);
}

double NNfunction_sg_cL::synapse0x38a19e0() {
   return (neuron0x3878470()*1.60033);
}

double NNfunction_sg_cL::synapse0x38a1a20() {
   return (neuron0x3878f50()*0.470263);
}

double NNfunction_sg_cL::synapse0x38a1a60() {
   return (neuron0x3879920()*-0.382214);
}

double NNfunction_sg_cL::synapse0x38a1aa0() {
   return (neuron0x3876a00()*-0.941874);
}

double NNfunction_sg_cL::synapse0x38a1ae0() {
   return (neuron0x387b4d0()*-0.733649);
}

double NNfunction_sg_cL::synapse0x38a1b20() {
   return (neuron0x387bea0()*-0.479396);
}

double NNfunction_sg_cL::synapse0x38a1b60() {
   return (neuron0x387c870()*0.105082);
}

double NNfunction_sg_cL::synapse0x38a1ba0() {
   return (neuron0x387d240()*-0.208263);
}

double NNfunction_sg_cL::synapse0x38a1630() {
   return (neuron0x387f050()*-0.783183);
}

double NNfunction_sg_cL::synapse0x38a1670() {
   return (neuron0x387f330()*0.153137);
}

double NNfunction_sg_cL::synapse0x38a1cf0() {
   return (neuron0x387fd00()*0.119043);
}

double NNfunction_sg_cL::synapse0x38a1d30() {
   return (neuron0x38806d0()*1.24696);
}

double NNfunction_sg_cL::synapse0x38a1d70() {
   return (neuron0x38810a0()*-0.132148);
}

double NNfunction_sg_cL::synapse0x38a1db0() {
   return (neuron0x3881a70()*0.565925);
}

double NNfunction_sg_cL::synapse0x38a1df0() {
   return (neuron0x387a5c0()*1.10937);
}

double NNfunction_sg_cL::synapse0x38a1e30() {
   return (neuron0x387af90()*-0.0771026);
}

double NNfunction_sg_cL::synapse0x38a1e70() {
   return (neuron0x3884800()*2.32566);
}

double NNfunction_sg_cL::synapse0x38a1eb0() {
   return (neuron0x38851d0()*-1.33671);
}

double NNfunction_sg_cL::synapse0x38a1ef0() {
   return (neuron0x3885ba0()*0.301237);
}

double NNfunction_sg_cL::synapse0x38a1f30() {
   return (neuron0x3886570()*1.01792);
}

double NNfunction_sg_cL::synapse0x38a1f70() {
   return (neuron0x3886f40()*-1.99119);
}

double NNfunction_sg_cL::synapse0x38a1fb0() {
   return (neuron0x3887910()*1.37402);
}

double NNfunction_sg_cL::synapse0x38a1ff0() {
   return (neuron0x38882e0()*-0.952247);
}

double NNfunction_sg_cL::synapse0x38a2030() {
   return (neuron0x3888cb0()*-1.20562);
}

double NNfunction_sg_cL::synapse0x38a1be0() {
   return (neuron0x387ed40()*-2.75346);
}

double NNfunction_sg_cL::synapse0x38a1c20() {
   return (neuron0x388b890()*-0.113351);
}

double NNfunction_sg_cL::synapse0x38a1c60() {
   return (neuron0x388c260()*-3.47159);
}

double NNfunction_sg_cL::synapse0x38a1ca0() {
   return (neuron0x388cc30()*-0.0289285);
}

double NNfunction_sg_cL::synapse0x38a2280() {
   return (neuron0x388d600()*2.36213);
}

double NNfunction_sg_cL::synapse0x38a22c0() {
   return (neuron0x388dfd0()*0.810217);
}

double NNfunction_sg_cL::synapse0x38a2300() {
   return (neuron0x388e9a0()*1.93683);
}

double NNfunction_sg_cL::synapse0x38a2340() {
   return (neuron0x388f370()*-0.316756);
}

double NNfunction_sg_cL::synapse0x38a2380() {
   return (neuron0x388fd40()*-0.154338);
}

double NNfunction_sg_cL::synapse0x38a23c0() {
   return (neuron0x3890920()*0.673298);
}

double NNfunction_sg_cL::synapse0x38a2400() {
   return (neuron0x38912f0()*-0.573368);
}

double NNfunction_sg_cL::synapse0x38a2440() {
   return (neuron0x3882170()*0.517043);
}

double NNfunction_sg_cL::synapse0x38a2480() {
   return (neuron0x3882b40()*-1.05568);
}

double NNfunction_sg_cL::synapse0x38a24c0() {
   return (neuron0x3883510()*-1.53808);
}

double NNfunction_sg_cL::synapse0x38a2500() {
   return (neuron0x3895b50()*-0.295893);
}

double NNfunction_sg_cL::synapse0x38a2540() {
   return (neuron0x3896400()*-1.75972);
}

double NNfunction_sg_cL::synapse0x38a2580() {
   return (neuron0x3896dd0()*0.608837);
}

double NNfunction_sg_cL::synapse0x38a25c0() {
   return (neuron0x38977a0()*-0.0479232);
}

double NNfunction_sg_cL::synapse0x38a2820() {
   return (neuron0x389e9a0()*9.0389);
}

double NNfunction_sg_cL::synapse0x38a2860() {
   return (neuron0x389ed40()*-5.76899);
}

double NNfunction_sg_cL::synapse0x38a28a0() {
   return (neuron0x389f1e0()*-5.09513);
}

double NNfunction_sg_cL::synapse0x38a28e0() {
   return (neuron0x38a0340()*-7.51821);
}

double NNfunction_sg_cL::synapse0x38a2920() {
   return (neuron0x38a14a0()*-5.94558);
}

