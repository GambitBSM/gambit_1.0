#include "NNfunction_ns_chi03_cR.h"
#include <cmath>

double NNfunction_ns_chi03_cR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.9798)/15.2831;
   input1 = (in1 - 26.4945)/438.296;
   input2 = (in2 - 683.156)/647.116;
   input3 = (in3 - 7.47223)/805.193;
   input4 = (in4 - 966.252)/930.459;
   input5 = (in5 - 860.329)/952.914;
   input6 = (in6 - 856.839)/947.497;
   input7 = (in7 - 842.943)/917.711;
   input8 = (in8 - 856.73)/937.808;
   input9 = (in9 - 851.362)/925.689;
   input10 = (in10 - 904.997)/920.447;
   input11 = (in11 - 656.958)/800.602;
   input12 = (in12 - 655.102)/803.8;
   input13 = (in13 - 452.764)/469.746;
   input14 = (in14 - 713.816)/817.328;
   input15 = (in15 - 207.101)/167.97;
   input16 = (in16 - 518.1)/558.839;
   input17 = (in17 - 689.616)/837.329;
   input18 = (in18 - 682.243)/834.016;
   input19 = (in19 - 695.891)/796.132;
   input20 = (in20 - -14.2716)/472.704;
   input21 = (in21 - -27.5846)/1103.94;
   input22 = (in22 - 9.43357)/1135.6;
   input23 = (in23 - -49.5582)/166.313;
   switch(index) {
     case 0:
         return neuron0x2a6d6b0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_cR::Value(int index, double* input) {
   input0 = (input[0] - 23.9798)/15.2831;
   input1 = (input[1] - 26.4945)/438.296;
   input2 = (input[2] - 683.156)/647.116;
   input3 = (input[3] - 7.47223)/805.193;
   input4 = (input[4] - 966.252)/930.459;
   input5 = (input[5] - 860.329)/952.914;
   input6 = (input[6] - 856.839)/947.497;
   input7 = (input[7] - 842.943)/917.711;
   input8 = (input[8] - 856.73)/937.808;
   input9 = (input[9] - 851.362)/925.689;
   input10 = (input[10] - 904.997)/920.447;
   input11 = (input[11] - 656.958)/800.602;
   input12 = (input[12] - 655.102)/803.8;
   input13 = (input[13] - 452.764)/469.746;
   input14 = (input[14] - 713.816)/817.328;
   input15 = (input[15] - 207.101)/167.97;
   input16 = (input[16] - 518.1)/558.839;
   input17 = (input[17] - 689.616)/837.329;
   input18 = (input[18] - 682.243)/834.016;
   input19 = (input[19] - 695.891)/796.132;
   input20 = (input[20] - -14.2716)/472.704;
   input21 = (input[21] - -27.5846)/1103.94;
   input22 = (input[22] - 9.43357)/1135.6;
   input23 = (input[23] - -49.5582)/166.313;
   switch(index) {
     case 0:
         return neuron0x2a6d6b0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_cR::neuron0x2a397a0() {
   return input0;
}

double NNfunction_ns_chi03_cR::neuron0x2a39ae0() {
   return input1;
}

double NNfunction_ns_chi03_cR::neuron0x2a39e20() {
   return input2;
}

double NNfunction_ns_chi03_cR::neuron0x2a3a160() {
   return input3;
}

double NNfunction_ns_chi03_cR::neuron0x2a3a4a0() {
   return input4;
}

double NNfunction_ns_chi03_cR::neuron0x2a3a7e0() {
   return input5;
}

double NNfunction_ns_chi03_cR::neuron0x2a3ab20() {
   return input6;
}

double NNfunction_ns_chi03_cR::neuron0x2a3ae60() {
   return input7;
}

double NNfunction_ns_chi03_cR::neuron0x2a3b1a0() {
   return input8;
}

double NNfunction_ns_chi03_cR::neuron0x2a3b4e0() {
   return input9;
}

double NNfunction_ns_chi03_cR::neuron0x2a3b820() {
   return input10;
}

double NNfunction_ns_chi03_cR::neuron0x2a3bb60() {
   return input11;
}

double NNfunction_ns_chi03_cR::neuron0x2a3bea0() {
   return input12;
}

double NNfunction_ns_chi03_cR::neuron0x2a3c1e0() {
   return input13;
}

double NNfunction_ns_chi03_cR::neuron0x2a3c520() {
   return input14;
}

double NNfunction_ns_chi03_cR::neuron0x2a3c860() {
   return input15;
}

double NNfunction_ns_chi03_cR::neuron0x2a3cba0() {
   return input16;
}

double NNfunction_ns_chi03_cR::neuron0x2a3d100() {
   return input17;
}

double NNfunction_ns_chi03_cR::neuron0x2a3d320() {
   return input18;
}

double NNfunction_ns_chi03_cR::neuron0x2a3d660() {
   return input19;
}

double NNfunction_ns_chi03_cR::neuron0x2a3d9a0() {
   return input20;
}

double NNfunction_ns_chi03_cR::neuron0x2a3dce0() {
   return input21;
}

double NNfunction_ns_chi03_cR::neuron0x2a3e020() {
   return input22;
}

double NNfunction_ns_chi03_cR::neuron0x2a3e360() {
   return input23;
}

double NNfunction_ns_chi03_cR::input0x2a3e7d0() {
   double input = -1.84096;
   input += synapse0x2a39660();
   input += synapse0x2a396a0();
   input += synapse0x2a3ea80();
   input += synapse0x2a3eac0();
   input += synapse0x2a3eb00();
   input += synapse0x2a3eb40();
   input += synapse0x2a3eb80();
   input += synapse0x2a3ebc0();
   input += synapse0x2a3ec00();
   input += synapse0x2a3ec40();
   input += synapse0x2a3ec80();
   input += synapse0x2a3ecc0();
   input += synapse0x2a3ed00();
   input += synapse0x2a3ed40();
   input += synapse0x2a3ed80();
   input += synapse0x2a3edc0();
   input += synapse0x2a395d0();
   input += synapse0x2a39610();
   input += synapse0x27f4940();
   input += synapse0x27f4980();
   input += synapse0x2a3f020();
   input += synapse0x2a3f060();
   input += synapse0x2a3f0a0();
   input += synapse0x2a3f0e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a3e7d0() {
   double input = input0x2a3e7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a3f120() {
   double input = -1.77549;
   input += synapse0x2a3f460();
   input += synapse0x2a3f4a0();
   input += synapse0x2a3f4e0();
   input += synapse0x2a3f520();
   input += synapse0x2a3f560();
   input += synapse0x2a3f5a0();
   input += synapse0x2a3f5e0();
   input += synapse0x2a3f620();
   input += synapse0x2a3f660();
   input += synapse0x2a3ef10();
   input += synapse0x2a3ef50();
   input += synapse0x2a3ef90();
   input += synapse0x2a3efd0();
   input += synapse0x2a3f8b0();
   input += synapse0x2a3f8f0();
   input += synapse0x2a3f930();
   input += synapse0x2a3f2b0();
   input += synapse0x2a3f2f0();
   input += synapse0x2a3fa80();
   input += synapse0x2a3fac0();
   input += synapse0x2a3fb00();
   input += synapse0x2a3fb40();
   input += synapse0x2a3fb80();
   input += synapse0x2a3fbc0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a3f120() {
   double input = input0x2a3f120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a3fc00() {
   double input = -0.979452;
   input += synapse0x2a3ff40();
   input += synapse0x2a3ff80();
   input += synapse0x2a3ffc0();
   input += synapse0x2a40000();
   input += synapse0x2a40040();
   input += synapse0x2a40080();
   input += synapse0x2a400c0();
   input += synapse0x2a40100();
   input += synapse0x2a40140();
   input += synapse0x2a40180();
   input += synapse0x2a401c0();
   input += synapse0x2a40200();
   input += synapse0x2a40240();
   input += synapse0x2a40280();
   input += synapse0x2a402c0();
   input += synapse0x2a40300();
   input += synapse0x2a3fd90();
   input += synapse0x2a3fdd0();
   input += synapse0x27f5030();
   input += synapse0x2802900();
   input += synapse0x2802940();
   input += synapse0x2a28830();
   input += synapse0x2a28870();
   input += synapse0x2a288b0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a3fc00() {
   double input = input0x2a3fc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a3f6a0() {
   double input = 0.732346;
   input += synapse0x2803180();
   input += synapse0x2a3f830();
   input += synapse0x2a3f870();
   input += synapse0x2a40450();
   input += synapse0x2a40490();
   input += synapse0x2a404d0();
   input += synapse0x2a40510();
   input += synapse0x2a40550();
   input += synapse0x2a40590();
   input += synapse0x2a405d0();
   input += synapse0x2a40610();
   input += synapse0x2a40650();
   input += synapse0x2a40690();
   input += synapse0x2a406d0();
   input += synapse0x2a40710();
   input += synapse0x2a40750();
   input += synapse0x2a396e0();
   input += synapse0x2a39720();
   input += synapse0x2a39760();
   input += synapse0x2a408a0();
   input += synapse0x2a408e0();
   input += synapse0x2a40920();
   input += synapse0x2a40960();
   input += synapse0x2a409a0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a3f6a0() {
   double input = input0x2a3f6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a409e0() {
   double input = 1.21434;
   input += synapse0x2a40d20();
   input += synapse0x2a40d60();
   input += synapse0x2a40da0();
   input += synapse0x2a40de0();
   input += synapse0x2a40e20();
   input += synapse0x2a40e60();
   input += synapse0x2a40ea0();
   input += synapse0x2a40ee0();
   input += synapse0x2a40f20();
   input += synapse0x2a40f60();
   input += synapse0x2a40fa0();
   input += synapse0x2a40fe0();
   input += synapse0x2a41020();
   input += synapse0x2a41060();
   input += synapse0x2a410a0();
   input += synapse0x2a410e0();
   input += synapse0x2a40b70();
   input += synapse0x2a40bb0();
   input += synapse0x2a41230();
   input += synapse0x2a41270();
   input += synapse0x2a412b0();
   input += synapse0x2a412f0();
   input += synapse0x2a41330();
   input += synapse0x2a41370();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a409e0() {
   double input = input0x2a409e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a413b0() {
   double input = 1.56549;
   input += synapse0x2a416f0();
   input += synapse0x2a41730();
   input += synapse0x2a41770();
   input += synapse0x2a417b0();
   input += synapse0x2a417f0();
   input += synapse0x2a41830();
   input += synapse0x2a41870();
   input += synapse0x2a418b0();
   input += synapse0x2a418f0();
   input += synapse0x2802c50();
   input += synapse0x2802c90();
   input += synapse0x2802cd0();
   input += synapse0x2802d10();
   input += synapse0x2802d50();
   input += synapse0x2802d90();
   input += synapse0x2802dd0();
   input += synapse0x2a41540();
   input += synapse0x2a41580();
   input += synapse0x2802f20();
   input += synapse0x2802f60();
   input += synapse0x2802fa0();
   input += synapse0x2802fe0();
   input += synapse0x2803020();
   input += synapse0x2a42140();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a413b0() {
   double input = input0x2a413b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a42180() {
   double input = 0.456861;
   input += synapse0x2a424c0();
   input += synapse0x2a42500();
   input += synapse0x2a42540();
   input += synapse0x2a42580();
   input += synapse0x2a425c0();
   input += synapse0x2a42600();
   input += synapse0x2a42640();
   input += synapse0x2a42680();
   input += synapse0x2a426c0();
   input += synapse0x2a42700();
   input += synapse0x2a42740();
   input += synapse0x2a42780();
   input += synapse0x2a427c0();
   input += synapse0x2a42800();
   input += synapse0x2a42840();
   input += synapse0x2a42880();
   input += synapse0x2a42310();
   input += synapse0x2a42350();
   input += synapse0x2a429d0();
   input += synapse0x2a42a10();
   input += synapse0x2a42a50();
   input += synapse0x2a42a90();
   input += synapse0x2a42ad0();
   input += synapse0x2a42b10();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a42180() {
   double input = input0x2a42180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a42b50() {
   double input = -7.56739;
   input += synapse0x2a42e90();
   input += synapse0x2a42ed0();
   input += synapse0x2a42f10();
   input += synapse0x2a42f50();
   input += synapse0x2a42f90();
   input += synapse0x2a42fd0();
   input += synapse0x2a43010();
   input += synapse0x2a43050();
   input += synapse0x2a43090();
   input += synapse0x2a430d0();
   input += synapse0x2a43110();
   input += synapse0x2a43150();
   input += synapse0x2a43190();
   input += synapse0x2a431d0();
   input += synapse0x2a43210();
   input += synapse0x2a43250();
   input += synapse0x2a42ce0();
   input += synapse0x2a42d20();
   input += synapse0x2a433a0();
   input += synapse0x2a433e0();
   input += synapse0x2a43420();
   input += synapse0x2a43460();
   input += synapse0x2a434a0();
   input += synapse0x2a434e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a42b50() {
   double input = input0x2a42b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a43520() {
   double input = 0.0418773;
   input += synapse0x2a3cff0();
   input += synapse0x2a3d030();
   input += synapse0x2a3d070();
   input += synapse0x2a3d0b0();
   input += synapse0x2a43a70();
   input += synapse0x2a43ab0();
   input += synapse0x2a43af0();
   input += synapse0x2a43b30();
   input += synapse0x2a43b70();
   input += synapse0x2a43bb0();
   input += synapse0x2a43bf0();
   input += synapse0x2a43c30();
   input += synapse0x2a43c70();
   input += synapse0x2a43cb0();
   input += synapse0x2a43cf0();
   input += synapse0x2a43d30();
   input += synapse0x2a436b0();
   input += synapse0x2a436f0();
   input += synapse0x2a43e80();
   input += synapse0x2a43ec0();
   input += synapse0x2a43f00();
   input += synapse0x2a43f40();
   input += synapse0x2a43f80();
   input += synapse0x2a43fc0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a43520() {
   double input = input0x2a43520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a44000() {
   double input = 1.77337;
   input += synapse0x2a44340();
   input += synapse0x2a44380();
   input += synapse0x2a443c0();
   input += synapse0x2a44400();
   input += synapse0x2a44440();
   input += synapse0x2a44480();
   input += synapse0x2a444c0();
   input += synapse0x2a44500();
   input += synapse0x2a44540();
   input += synapse0x2a44580();
   input += synapse0x2a445c0();
   input += synapse0x2a44600();
   input += synapse0x2a44640();
   input += synapse0x2a44680();
   input += synapse0x2a446c0();
   input += synapse0x2a44700();
   input += synapse0x2a44190();
   input += synapse0x2a441d0();
   input += synapse0x2a44850();
   input += synapse0x2a44890();
   input += synapse0x2a448d0();
   input += synapse0x2a44910();
   input += synapse0x2a44950();
   input += synapse0x2a44990();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a44000() {
   double input = input0x2a44000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a449d0() {
   double input = -0.38481;
   input += synapse0x2a44d10();
   input += synapse0x2a44d50();
   input += synapse0x2a44d90();
   input += synapse0x2a44dd0();
   input += synapse0x2a44e10();
   input += synapse0x2a44e50();
   input += synapse0x2a44e90();
   input += synapse0x2a44ed0();
   input += synapse0x2a44f10();
   input += synapse0x2a44f50();
   input += synapse0x2a44f90();
   input += synapse0x2a44fd0();
   input += synapse0x2a45010();
   input += synapse0x2a45050();
   input += synapse0x2a45090();
   input += synapse0x2a450d0();
   input += synapse0x2a44b60();
   input += synapse0x2a44ba0();
   input += synapse0x2a41930();
   input += synapse0x2a41970();
   input += synapse0x2a419b0();
   input += synapse0x2a419f0();
   input += synapse0x2a41a30();
   input += synapse0x2a41a70();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a449d0() {
   double input = input0x2a449d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a41ab0() {
   double input = 1.63667;
   input += synapse0x2a41df0();
   input += synapse0x2a41e30();
   input += synapse0x2a41e70();
   input += synapse0x2a41eb0();
   input += synapse0x2a41ef0();
   input += synapse0x2a41f30();
   input += synapse0x2a41f70();
   input += synapse0x2a41fb0();
   input += synapse0x2a41ff0();
   input += synapse0x2a42030();
   input += synapse0x2a42070();
   input += synapse0x2a420b0();
   input += synapse0x2a420f0();
   input += synapse0x2a46230();
   input += synapse0x2a46270();
   input += synapse0x2a462b0();
   input += synapse0x2a41c40();
   input += synapse0x2a41c80();
   input += synapse0x2a46400();
   input += synapse0x2a46440();
   input += synapse0x2a46480();
   input += synapse0x2a464c0();
   input += synapse0x2a46500();
   input += synapse0x2a46540();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a41ab0() {
   double input = input0x2a41ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a46580() {
   double input = 0.0882045;
   input += synapse0x2a468c0();
   input += synapse0x2a46900();
   input += synapse0x2a46940();
   input += synapse0x2a46980();
   input += synapse0x2a469c0();
   input += synapse0x2a46a00();
   input += synapse0x2a46a40();
   input += synapse0x2a46a80();
   input += synapse0x2a46ac0();
   input += synapse0x2a46b00();
   input += synapse0x2a46b40();
   input += synapse0x2a46b80();
   input += synapse0x2a46bc0();
   input += synapse0x2a46c00();
   input += synapse0x2a46c40();
   input += synapse0x2a46c80();
   input += synapse0x2a46710();
   input += synapse0x2a46750();
   input += synapse0x2a46dd0();
   input += synapse0x2a46e10();
   input += synapse0x2a46e50();
   input += synapse0x2a46e90();
   input += synapse0x2a46ed0();
   input += synapse0x2a46f10();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a46580() {
   double input = input0x2a46580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a46f50() {
   double input = 2.13018;
   input += synapse0x2a47290();
   input += synapse0x2a472d0();
   input += synapse0x2a47310();
   input += synapse0x2a47350();
   input += synapse0x2a47390();
   input += synapse0x2a473d0();
   input += synapse0x2a47410();
   input += synapse0x2a47450();
   input += synapse0x2a47490();
   input += synapse0x2a474d0();
   input += synapse0x2a47510();
   input += synapse0x2a47550();
   input += synapse0x2a47590();
   input += synapse0x2a475d0();
   input += synapse0x2a47610();
   input += synapse0x2a47650();
   input += synapse0x2a470e0();
   input += synapse0x2a47120();
   input += synapse0x2a477a0();
   input += synapse0x2a477e0();
   input += synapse0x2a47820();
   input += synapse0x2a47860();
   input += synapse0x2a478a0();
   input += synapse0x2a478e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a46f50() {
   double input = input0x2a46f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a47920() {
   double input = -1.03313;
   input += synapse0x2a47c60();
   input += synapse0x2a47ca0();
   input += synapse0x2a47ce0();
   input += synapse0x2a47d20();
   input += synapse0x2a47d60();
   input += synapse0x2a47da0();
   input += synapse0x2a47de0();
   input += synapse0x2a47e20();
   input += synapse0x2a47e60();
   input += synapse0x2a47ea0();
   input += synapse0x2a47ee0();
   input += synapse0x2a47f20();
   input += synapse0x2a47f60();
   input += synapse0x2a47fa0();
   input += synapse0x2a47fe0();
   input += synapse0x2a48020();
   input += synapse0x2a47ab0();
   input += synapse0x2a47af0();
   input += synapse0x2a48170();
   input += synapse0x2a481b0();
   input += synapse0x2a481f0();
   input += synapse0x2a48230();
   input += synapse0x2a48270();
   input += synapse0x2a482b0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a47920() {
   double input = input0x2a47920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a482f0() {
   double input = -5.08315;
   input += synapse0x2a48630();
   input += synapse0x2a399c0();
   input += synapse0x2a39a00();
   input += synapse0x2a39d00();
   input += synapse0x2a39d40();
   input += synapse0x2a3a040();
   input += synapse0x2a3a080();
   input += synapse0x2a3a380();
   input += synapse0x2a3a3c0();
   input += synapse0x2a3a6c0();
   input += synapse0x2a3a700();
   input += synapse0x2a3aa00();
   input += synapse0x2a3aa40();
   input += synapse0x2a3ad40();
   input += synapse0x2a3ad80();
   input += synapse0x2a3b080();
   input += synapse0x2a3b0c0();
   input += synapse0x2a3b3c0();
   input += synapse0x2a3b400();
   input += synapse0x2a3b700();
   input += synapse0x2a3b740();
   input += synapse0x2a3ba40();
   input += synapse0x2a3ba80();
   input += synapse0x2a3bd80();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a482f0() {
   double input = input0x2a482f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4a100() {
   double input = 0.037731;
   input += synapse0x2a3bdc0();
   input += synapse0x2a3ca80();
   input += synapse0x2a3cac0();
   input += synapse0x2a48480();
   input += synapse0x2a484c0();
   input += synapse0x2a3cdc0();
   input += synapse0x2a3ce00();
   input += synapse0x27f4820();
   input += synapse0x27f4860();
   input += synapse0x2a3d540();
   input += synapse0x2a3d580();
   input += synapse0x2a3d880();
   input += synapse0x2a3d8c0();
   input += synapse0x2a3dbc0();
   input += synapse0x2a3dc00();
   input += synapse0x2a3df00();
   input += synapse0x2a3df40();
   input += synapse0x2a3e240();
   input += synapse0x2a3e280();
   input += synapse0x2a3e580();
   input += synapse0x2a3e5c0();
   input += synapse0x2a3c0c0();
   input += synapse0x2a3c100();
   input += synapse0x2a4a3a0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4a100() {
   double input = input0x2a4a100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4a3e0() {
   double input = 0.755955;
   input += synapse0x2a4a720();
   input += synapse0x2a4a760();
   input += synapse0x2a4a7a0();
   input += synapse0x2a4a7e0();
   input += synapse0x2a4a820();
   input += synapse0x2a4a860();
   input += synapse0x2a4a8a0();
   input += synapse0x2a4a8e0();
   input += synapse0x2a4a920();
   input += synapse0x2a4a960();
   input += synapse0x2a4a9a0();
   input += synapse0x2a4a9e0();
   input += synapse0x2a4aa20();
   input += synapse0x2a4aa60();
   input += synapse0x2a4aaa0();
   input += synapse0x2a4aae0();
   input += synapse0x2a4a570();
   input += synapse0x2a4a5b0();
   input += synapse0x2a4ac30();
   input += synapse0x2a4ac70();
   input += synapse0x2a4acb0();
   input += synapse0x2a4acf0();
   input += synapse0x2a4ad30();
   input += synapse0x2a4ad70();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4a3e0() {
   double input = input0x2a4a3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4adb0() {
   double input = 0.342474;
   input += synapse0x2a4b0f0();
   input += synapse0x2a4b130();
   input += synapse0x2a4b170();
   input += synapse0x2a4b1b0();
   input += synapse0x2a4b1f0();
   input += synapse0x2a4b230();
   input += synapse0x2a4b270();
   input += synapse0x2a4b2b0();
   input += synapse0x2a4b2f0();
   input += synapse0x2a4b330();
   input += synapse0x2a4b370();
   input += synapse0x2a4b3b0();
   input += synapse0x2a4b3f0();
   input += synapse0x2a4b430();
   input += synapse0x2a4b470();
   input += synapse0x2a4b4b0();
   input += synapse0x2a4af40();
   input += synapse0x2a4af80();
   input += synapse0x2a4b600();
   input += synapse0x2a4b640();
   input += synapse0x2a4b680();
   input += synapse0x2a4b6c0();
   input += synapse0x2a4b700();
   input += synapse0x2a4b740();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4adb0() {
   double input = input0x2a4adb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4b780() {
   double input = -2.43487;
   input += synapse0x2a4bac0();
   input += synapse0x2a4bb00();
   input += synapse0x2a4bb40();
   input += synapse0x2a4bb80();
   input += synapse0x2a4bbc0();
   input += synapse0x2a4bc00();
   input += synapse0x2a4bc40();
   input += synapse0x2a4bc80();
   input += synapse0x2a4bcc0();
   input += synapse0x2a4bd00();
   input += synapse0x2a4bd40();
   input += synapse0x2a4bd80();
   input += synapse0x2a4bdc0();
   input += synapse0x2a4be00();
   input += synapse0x2a4be40();
   input += synapse0x2a4be80();
   input += synapse0x2a4b910();
   input += synapse0x2a4b950();
   input += synapse0x2a4bfd0();
   input += synapse0x2a4c010();
   input += synapse0x2a4c050();
   input += synapse0x2a4c090();
   input += synapse0x2a4c0d0();
   input += synapse0x2a4c110();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4b780() {
   double input = input0x2a4b780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4c150() {
   double input = -0.944678;
   input += synapse0x2a4c490();
   input += synapse0x2a4c4d0();
   input += synapse0x2a4c510();
   input += synapse0x2a4c550();
   input += synapse0x2a4c590();
   input += synapse0x2a4c5d0();
   input += synapse0x2a4c610();
   input += synapse0x2a4c650();
   input += synapse0x2a4c690();
   input += synapse0x2a4c6d0();
   input += synapse0x2a4c710();
   input += synapse0x2a4c750();
   input += synapse0x2a4c790();
   input += synapse0x2a4c7d0();
   input += synapse0x2a4c810();
   input += synapse0x2a4c850();
   input += synapse0x2a4c2e0();
   input += synapse0x2a4c320();
   input += synapse0x2a4c9a0();
   input += synapse0x2a4c9e0();
   input += synapse0x2a4ca20();
   input += synapse0x2a4ca60();
   input += synapse0x2a4caa0();
   input += synapse0x2a4cae0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4c150() {
   double input = input0x2a4c150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4cb20() {
   double input = 0.516498;
   input += synapse0x2a4ce60();
   input += synapse0x2a4cea0();
   input += synapse0x2a4cee0();
   input += synapse0x2a4cf20();
   input += synapse0x2a4cf60();
   input += synapse0x2a4cfa0();
   input += synapse0x2a4cfe0();
   input += synapse0x2a4d020();
   input += synapse0x2a4d060();
   input += synapse0x2a45220();
   input += synapse0x2a45260();
   input += synapse0x2a452a0();
   input += synapse0x2a452e0();
   input += synapse0x2a45320();
   input += synapse0x2a45360();
   input += synapse0x2a453a0();
   input += synapse0x2a4ccb0();
   input += synapse0x2a4ccf0();
   input += synapse0x2a454f0();
   input += synapse0x2a45530();
   input += synapse0x2a45570();
   input += synapse0x2a455b0();
   input += synapse0x2a455f0();
   input += synapse0x2a45630();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4cb20() {
   double input = input0x2a4cb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a45670() {
   double input = 0.734785;
   input += synapse0x2a459b0();
   input += synapse0x2a459f0();
   input += synapse0x2a45a30();
   input += synapse0x2a45a70();
   input += synapse0x2a45ab0();
   input += synapse0x2a45af0();
   input += synapse0x2a45b30();
   input += synapse0x2a45b70();
   input += synapse0x2a45bb0();
   input += synapse0x2a45bf0();
   input += synapse0x2a45c30();
   input += synapse0x2a45c70();
   input += synapse0x2a45cb0();
   input += synapse0x2a45cf0();
   input += synapse0x2a45d30();
   input += synapse0x2a45d70();
   input += synapse0x2a45800();
   input += synapse0x2a45840();
   input += synapse0x2a45ec0();
   input += synapse0x2a45f00();
   input += synapse0x2a45f40();
   input += synapse0x2a45f80();
   input += synapse0x2a45fc0();
   input += synapse0x2a46000();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a45670() {
   double input = input0x2a45670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a46040() {
   double input = -0.565224;
   input += synapse0x2a461d0();
   input += synapse0x2a4f260();
   input += synapse0x2a4f2a0();
   input += synapse0x2a4f2e0();
   input += synapse0x2a4f320();
   input += synapse0x2a4f360();
   input += synapse0x2a4f3a0();
   input += synapse0x2a4f3e0();
   input += synapse0x2a4f420();
   input += synapse0x2a4f460();
   input += synapse0x2a4f4a0();
   input += synapse0x2a4f4e0();
   input += synapse0x2a4f520();
   input += synapse0x2a4f560();
   input += synapse0x2a4f5a0();
   input += synapse0x2a4f5e0();
   input += synapse0x2a4f0b0();
   input += synapse0x2a4f0f0();
   input += synapse0x2a4f730();
   input += synapse0x2a4f770();
   input += synapse0x2a4f7b0();
   input += synapse0x2a4f7f0();
   input += synapse0x2a4f830();
   input += synapse0x2a4f870();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a46040() {
   double input = input0x2a46040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4f8b0() {
   double input = 0.996223;
   input += synapse0x2a4fbf0();
   input += synapse0x2a4fc30();
   input += synapse0x2a4fc70();
   input += synapse0x2a4fcb0();
   input += synapse0x2a4fcf0();
   input += synapse0x2a4fd30();
   input += synapse0x2a4fd70();
   input += synapse0x2a4fdb0();
   input += synapse0x2a4fdf0();
   input += synapse0x2a4fe30();
   input += synapse0x2a4fe70();
   input += synapse0x2a4feb0();
   input += synapse0x2a4fef0();
   input += synapse0x2a4ff30();
   input += synapse0x2a4ff70();
   input += synapse0x2a4ffb0();
   input += synapse0x2a4fa40();
   input += synapse0x2a4fa80();
   input += synapse0x2a50100();
   input += synapse0x2a50140();
   input += synapse0x2a50180();
   input += synapse0x2a501c0();
   input += synapse0x2a50200();
   input += synapse0x2a50240();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4f8b0() {
   double input = input0x2a4f8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a50280() {
   double input = 2.7776;
   input += synapse0x2a505c0();
   input += synapse0x2a50600();
   input += synapse0x2a50640();
   input += synapse0x2a50680();
   input += synapse0x2a506c0();
   input += synapse0x2a50700();
   input += synapse0x2a50740();
   input += synapse0x2a50780();
   input += synapse0x2a507c0();
   input += synapse0x2a50800();
   input += synapse0x2a50840();
   input += synapse0x2a50880();
   input += synapse0x2a508c0();
   input += synapse0x2a50900();
   input += synapse0x2a50940();
   input += synapse0x2a50980();
   input += synapse0x2a50410();
   input += synapse0x2a50450();
   input += synapse0x2a50ad0();
   input += synapse0x2a50b10();
   input += synapse0x2a50b50();
   input += synapse0x2a50b90();
   input += synapse0x2a50bd0();
   input += synapse0x2a50c10();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a50280() {
   double input = input0x2a50280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a50c50() {
   double input = -1.0584;
   input += synapse0x2a50f90();
   input += synapse0x2a50fd0();
   input += synapse0x2a51010();
   input += synapse0x2a51050();
   input += synapse0x2a51090();
   input += synapse0x2a510d0();
   input += synapse0x2a51110();
   input += synapse0x2a51150();
   input += synapse0x2a51190();
   input += synapse0x2a511d0();
   input += synapse0x2a51210();
   input += synapse0x2a51250();
   input += synapse0x2a51290();
   input += synapse0x2a512d0();
   input += synapse0x2a51310();
   input += synapse0x2a51350();
   input += synapse0x2a50de0();
   input += synapse0x2a50e20();
   input += synapse0x2a514a0();
   input += synapse0x2a514e0();
   input += synapse0x2a51520();
   input += synapse0x2a51560();
   input += synapse0x2a515a0();
   input += synapse0x2a515e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a50c50() {
   double input = input0x2a50c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a51620() {
   double input = 0.739545;
   input += synapse0x2a51960();
   input += synapse0x2a519a0();
   input += synapse0x2a519e0();
   input += synapse0x2a51a20();
   input += synapse0x2a51a60();
   input += synapse0x2a51aa0();
   input += synapse0x2a51ae0();
   input += synapse0x2a51b20();
   input += synapse0x2a51b60();
   input += synapse0x2a51ba0();
   input += synapse0x2a51be0();
   input += synapse0x2a51c20();
   input += synapse0x2a51c60();
   input += synapse0x2a51ca0();
   input += synapse0x2a51ce0();
   input += synapse0x2a51d20();
   input += synapse0x2a517b0();
   input += synapse0x2a517f0();
   input += synapse0x2a51e70();
   input += synapse0x2a51eb0();
   input += synapse0x2a51ef0();
   input += synapse0x2a51f30();
   input += synapse0x2a51f70();
   input += synapse0x2a51fb0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a51620() {
   double input = input0x2a51620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a51ff0() {
   double input = -1.74787;
   input += synapse0x2a52330();
   input += synapse0x2a52370();
   input += synapse0x2a523b0();
   input += synapse0x2a523f0();
   input += synapse0x2a52430();
   input += synapse0x2a52470();
   input += synapse0x2a524b0();
   input += synapse0x2a524f0();
   input += synapse0x2a52530();
   input += synapse0x2a52570();
   input += synapse0x2a525b0();
   input += synapse0x2a525f0();
   input += synapse0x2a52630();
   input += synapse0x2a52670();
   input += synapse0x2a526b0();
   input += synapse0x2a526f0();
   input += synapse0x2a52180();
   input += synapse0x2a521c0();
   input += synapse0x2a52840();
   input += synapse0x2a52880();
   input += synapse0x2a528c0();
   input += synapse0x2a52900();
   input += synapse0x2a52940();
   input += synapse0x2a52980();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a51ff0() {
   double input = input0x2a51ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a529c0() {
   double input = 4.26859;
   input += synapse0x2a52d00();
   input += synapse0x2a52d40();
   input += synapse0x2a52d80();
   input += synapse0x2a52dc0();
   input += synapse0x2a52e00();
   input += synapse0x2a52e40();
   input += synapse0x2a52e80();
   input += synapse0x2a52ec0();
   input += synapse0x2a52f00();
   input += synapse0x2a52f40();
   input += synapse0x2a52f80();
   input += synapse0x2a52fc0();
   input += synapse0x2a53000();
   input += synapse0x2a53040();
   input += synapse0x2a53080();
   input += synapse0x2a530c0();
   input += synapse0x2a52b50();
   input += synapse0x2a52b90();
   input += synapse0x2a53210();
   input += synapse0x2a53250();
   input += synapse0x2a53290();
   input += synapse0x2a532d0();
   input += synapse0x2a53310();
   input += synapse0x2a53350();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a529c0() {
   double input = input0x2a529c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a53390() {
   double input = 1.65805;
   input += synapse0x2a536d0();
   input += synapse0x2a53710();
   input += synapse0x2a53750();
   input += synapse0x2a53790();
   input += synapse0x2a537d0();
   input += synapse0x2a53810();
   input += synapse0x2a53850();
   input += synapse0x2a53890();
   input += synapse0x2a538d0();
   input += synapse0x2a53910();
   input += synapse0x2a53950();
   input += synapse0x2a53990();
   input += synapse0x2a539d0();
   input += synapse0x2a53a10();
   input += synapse0x2a53a50();
   input += synapse0x2a53a90();
   input += synapse0x2a53520();
   input += synapse0x2a53560();
   input += synapse0x2a53be0();
   input += synapse0x2a53c20();
   input += synapse0x2a53c60();
   input += synapse0x2a53ca0();
   input += synapse0x2a53ce0();
   input += synapse0x2a53d20();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a53390() {
   double input = input0x2a53390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a53d60() {
   double input = 1.79183;
   input += synapse0x2a540a0();
   input += synapse0x2a48670();
   input += synapse0x2a486b0();
   input += synapse0x2a486f0();
   input += synapse0x2a48940();
   input += synapse0x2a48980();
   input += synapse0x2a489c0();
   input += synapse0x2a48c10();
   input += synapse0x2a48c50();
   input += synapse0x2a48ea0();
   input += synapse0x2a48ee0();
   input += synapse0x2a48f20();
   input += synapse0x2a49170();
   input += synapse0x2a491b0();
   input += synapse0x2a49400();
   input += synapse0x2a49440();
   input += synapse0x2a53ef0();
   input += synapse0x2a53f30();
   input += synapse0x2a49590();
   input += synapse0x2a49aa0();
   input += synapse0x2a49ae0();
   input += synapse0x2a49b20();
   input += synapse0x2a49d70();
   input += synapse0x2a49db0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a53d60() {
   double input = input0x2a53d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a49df0() {
   double input = 8.28089;
   input += synapse0x2a49660();
   input += synapse0x2a496a0();
   input += synapse0x2a496e0();
   input += synapse0x2a49720();
   input += synapse0x2a4a0a0();
   input += synapse0x2a563f0();
   input += synapse0x2a56430();
   input += synapse0x2a56470();
   input += synapse0x2a564b0();
   input += synapse0x2a564f0();
   input += synapse0x2a56530();
   input += synapse0x2a56570();
   input += synapse0x2a565b0();
   input += synapse0x2a565f0();
   input += synapse0x2a56630();
   input += synapse0x2a56670();
   input += synapse0x2a49f80();
   input += synapse0x2a49fc0();
   input += synapse0x2a567c0();
   input += synapse0x2a56800();
   input += synapse0x2a56840();
   input += synapse0x2a56880();
   input += synapse0x2a568c0();
   input += synapse0x2a56900();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a49df0() {
   double input = input0x2a49df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a56940() {
   double input = -0.835069;
   input += synapse0x2a56c80();
   input += synapse0x2a56cc0();
   input += synapse0x2a56d00();
   input += synapse0x2a56d40();
   input += synapse0x2a56d80();
   input += synapse0x2a56dc0();
   input += synapse0x2a56e00();
   input += synapse0x2a56e40();
   input += synapse0x2a56e80();
   input += synapse0x2a56ec0();
   input += synapse0x2a56f00();
   input += synapse0x2a56f40();
   input += synapse0x2a56f80();
   input += synapse0x2a56fc0();
   input += synapse0x2a57000();
   input += synapse0x2a57040();
   input += synapse0x2a56ad0();
   input += synapse0x2a56b10();
   input += synapse0x2a57190();
   input += synapse0x2a571d0();
   input += synapse0x2a57210();
   input += synapse0x2a57250();
   input += synapse0x2a57290();
   input += synapse0x2a572d0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a56940() {
   double input = input0x2a56940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a57310() {
   double input = 0.491776;
   input += synapse0x2a57650();
   input += synapse0x2a57690();
   input += synapse0x2a576d0();
   input += synapse0x2a57710();
   input += synapse0x2a57750();
   input += synapse0x2a57790();
   input += synapse0x2a577d0();
   input += synapse0x2a57810();
   input += synapse0x2a57850();
   input += synapse0x2a57890();
   input += synapse0x2a578d0();
   input += synapse0x2a57910();
   input += synapse0x2a57950();
   input += synapse0x2a57990();
   input += synapse0x2a579d0();
   input += synapse0x2a57a10();
   input += synapse0x2a574a0();
   input += synapse0x2a574e0();
   input += synapse0x2a57b60();
   input += synapse0x2a57ba0();
   input += synapse0x2a57be0();
   input += synapse0x2a57c20();
   input += synapse0x2a57c60();
   input += synapse0x2a57ca0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a57310() {
   double input = input0x2a57310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a57ce0() {
   double input = -2.77178;
   input += synapse0x2a58020();
   input += synapse0x2a58060();
   input += synapse0x2a580a0();
   input += synapse0x2a580e0();
   input += synapse0x2a58120();
   input += synapse0x2a58160();
   input += synapse0x2a581a0();
   input += synapse0x2a581e0();
   input += synapse0x2a58220();
   input += synapse0x2a58260();
   input += synapse0x2a582a0();
   input += synapse0x2a582e0();
   input += synapse0x2a58320();
   input += synapse0x2a58360();
   input += synapse0x2a583a0();
   input += synapse0x2a583e0();
   input += synapse0x2a57e70();
   input += synapse0x2a57eb0();
   input += synapse0x2a58530();
   input += synapse0x2a58570();
   input += synapse0x2a585b0();
   input += synapse0x2a585f0();
   input += synapse0x2a58630();
   input += synapse0x2a58670();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a57ce0() {
   double input = input0x2a57ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a586b0() {
   double input = 5.07206;
   input += synapse0x2a589f0();
   input += synapse0x2a58a30();
   input += synapse0x2a58a70();
   input += synapse0x2a58ab0();
   input += synapse0x2a58af0();
   input += synapse0x2a58b30();
   input += synapse0x2a58b70();
   input += synapse0x2a58bb0();
   input += synapse0x2a58bf0();
   input += synapse0x2a58c30();
   input += synapse0x2a58c70();
   input += synapse0x2a58cb0();
   input += synapse0x2a58cf0();
   input += synapse0x2a58d30();
   input += synapse0x2a58d70();
   input += synapse0x2a58db0();
   input += synapse0x2a58840();
   input += synapse0x2a58880();
   input += synapse0x2a58f00();
   input += synapse0x2a58f40();
   input += synapse0x2a58f80();
   input += synapse0x2a58fc0();
   input += synapse0x2a59000();
   input += synapse0x2a59040();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a586b0() {
   double input = input0x2a586b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a59080() {
   double input = 1.71721;
   input += synapse0x2a593c0();
   input += synapse0x2a59400();
   input += synapse0x2a59440();
   input += synapse0x2a59480();
   input += synapse0x2a594c0();
   input += synapse0x2a59500();
   input += synapse0x2a59540();
   input += synapse0x2a59580();
   input += synapse0x2a595c0();
   input += synapse0x2a59600();
   input += synapse0x2a59640();
   input += synapse0x2a59680();
   input += synapse0x2a596c0();
   input += synapse0x2a59700();
   input += synapse0x2a59740();
   input += synapse0x2a59780();
   input += synapse0x2a59210();
   input += synapse0x2a59250();
   input += synapse0x2a598d0();
   input += synapse0x2a59910();
   input += synapse0x2a59950();
   input += synapse0x2a59990();
   input += synapse0x2a599d0();
   input += synapse0x2a59a10();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a59080() {
   double input = input0x2a59080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a59a50() {
   double input = -0.446661;
   input += synapse0x2a59d90();
   input += synapse0x2a59dd0();
   input += synapse0x2a59e10();
   input += synapse0x2a59e50();
   input += synapse0x2a59e90();
   input += synapse0x2a59ed0();
   input += synapse0x2a59f10();
   input += synapse0x2a59f50();
   input += synapse0x2a59f90();
   input += synapse0x2a59fd0();
   input += synapse0x2a5a010();
   input += synapse0x2a5a050();
   input += synapse0x2a5a090();
   input += synapse0x2a5a0d0();
   input += synapse0x2a5a110();
   input += synapse0x2a5a150();
   input += synapse0x2a59be0();
   input += synapse0x2a59c20();
   input += synapse0x2a5a2a0();
   input += synapse0x2a5a2e0();
   input += synapse0x2a5a320();
   input += synapse0x2a5a360();
   input += synapse0x2a5a3a0();
   input += synapse0x2a5a3e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a59a50() {
   double input = input0x2a59a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a5a420() {
   double input = -0.441051;
   input += synapse0x2a5a760();
   input += synapse0x2a5a7a0();
   input += synapse0x2a5a7e0();
   input += synapse0x2a5a820();
   input += synapse0x2a5a860();
   input += synapse0x2a5a8a0();
   input += synapse0x2a5a8e0();
   input += synapse0x2a5a920();
   input += synapse0x2a5a960();
   input += synapse0x2a5a9a0();
   input += synapse0x2a5a9e0();
   input += synapse0x2a5aa20();
   input += synapse0x2a5aa60();
   input += synapse0x2a5aaa0();
   input += synapse0x2a5aae0();
   input += synapse0x2a5ab20();
   input += synapse0x2a5a5b0();
   input += synapse0x2a5a5f0();
   input += synapse0x2a5ac70();
   input += synapse0x2a5acb0();
   input += synapse0x2a5acf0();
   input += synapse0x2a5ad30();
   input += synapse0x2a5ad70();
   input += synapse0x2a5adb0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a5a420() {
   double input = input0x2a5a420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a5adf0() {
   double input = 1.31419;
   input += synapse0x2a43860();
   input += synapse0x2a438a0();
   input += synapse0x2a438e0();
   input += synapse0x2a43920();
   input += synapse0x2a43960();
   input += synapse0x2a439a0();
   input += synapse0x2a439e0();
   input += synapse0x2a43a20();
   input += synapse0x2a5b540();
   input += synapse0x2a5b580();
   input += synapse0x2a5b5c0();
   input += synapse0x2a5b600();
   input += synapse0x2a5b640();
   input += synapse0x2a5b680();
   input += synapse0x2a5b6c0();
   input += synapse0x2a5b700();
   input += synapse0x2a5af80();
   input += synapse0x2a5afc0();
   input += synapse0x2a5b850();
   input += synapse0x2a5b890();
   input += synapse0x2a5b8d0();
   input += synapse0x2a5b910();
   input += synapse0x2a5b950();
   input += synapse0x2a5b990();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a5adf0() {
   double input = input0x2a5adf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a5b9d0() {
   double input = -3.70686;
   input += synapse0x2a5bd10();
   input += synapse0x2a5bd50();
   input += synapse0x2a5bd90();
   input += synapse0x2a5bdd0();
   input += synapse0x2a5be10();
   input += synapse0x2a5be50();
   input += synapse0x2a5be90();
   input += synapse0x2a5bed0();
   input += synapse0x2a5bf10();
   input += synapse0x2a5bf50();
   input += synapse0x2a5bf90();
   input += synapse0x2a5bfd0();
   input += synapse0x2a5c010();
   input += synapse0x2a5c050();
   input += synapse0x2a5c090();
   input += synapse0x2a5c0d0();
   input += synapse0x2a5bb60();
   input += synapse0x2a5bba0();
   input += synapse0x2a5c220();
   input += synapse0x2a5c260();
   input += synapse0x2a5c2a0();
   input += synapse0x2a5c2e0();
   input += synapse0x2a5c320();
   input += synapse0x2a5c360();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a5b9d0() {
   double input = input0x2a5b9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a5c3a0() {
   double input = -0.626536;
   input += synapse0x2a5c6e0();
   input += synapse0x2a5c720();
   input += synapse0x2a5c760();
   input += synapse0x2a5c7a0();
   input += synapse0x2a5c7e0();
   input += synapse0x2a5c820();
   input += synapse0x2a5c860();
   input += synapse0x2a5c8a0();
   input += synapse0x2a5c8e0();
   input += synapse0x2a5c920();
   input += synapse0x2a5c960();
   input += synapse0x2a5c9a0();
   input += synapse0x2a5c9e0();
   input += synapse0x2a5ca20();
   input += synapse0x2a5ca60();
   input += synapse0x2a5caa0();
   input += synapse0x2a5c530();
   input += synapse0x2a5c570();
   input += synapse0x2a4d0a0();
   input += synapse0x2a4d0e0();
   input += synapse0x2a4d120();
   input += synapse0x2a4d160();
   input += synapse0x2a4d1a0();
   input += synapse0x2a4d1e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a5c3a0() {
   double input = input0x2a5c3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4d220() {
   double input = -4.27802;
   input += synapse0x2a4d560();
   input += synapse0x2a4d5a0();
   input += synapse0x2a4d5e0();
   input += synapse0x2a4d620();
   input += synapse0x2a4d660();
   input += synapse0x2a4d6a0();
   input += synapse0x2a4d6e0();
   input += synapse0x2a4d720();
   input += synapse0x2a4d760();
   input += synapse0x2a4d7a0();
   input += synapse0x2a4d7e0();
   input += synapse0x2a4d820();
   input += synapse0x2a4d860();
   input += synapse0x2a4d8a0();
   input += synapse0x2a4d8e0();
   input += synapse0x2a4d920();
   input += synapse0x2a4d3b0();
   input += synapse0x2a4d3f0();
   input += synapse0x2a4da70();
   input += synapse0x2a4dab0();
   input += synapse0x2a4daf0();
   input += synapse0x2a4db30();
   input += synapse0x2a4db70();
   input += synapse0x2a4dbb0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4d220() {
   double input = input0x2a4d220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4dbf0() {
   double input = 0.275424;
   input += synapse0x2a4df30();
   input += synapse0x2a4df70();
   input += synapse0x2a4dfb0();
   input += synapse0x2a4dff0();
   input += synapse0x2a4e030();
   input += synapse0x2a4e070();
   input += synapse0x2a4e0b0();
   input += synapse0x2a4e0f0();
   input += synapse0x2a4e130();
   input += synapse0x2a4e170();
   input += synapse0x2a4e1b0();
   input += synapse0x2a4e1f0();
   input += synapse0x2a4e230();
   input += synapse0x2a4e270();
   input += synapse0x2a4e2b0();
   input += synapse0x2a4e2f0();
   input += synapse0x2a4dd80();
   input += synapse0x2a4ddc0();
   input += synapse0x2a4e440();
   input += synapse0x2a4e480();
   input += synapse0x2a4e4c0();
   input += synapse0x2a4e500();
   input += synapse0x2a4e540();
   input += synapse0x2a4e580();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4dbf0() {
   double input = input0x2a4dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a4e5c0() {
   double input = 0.673581;
   input += synapse0x2a4e900();
   input += synapse0x2a4e940();
   input += synapse0x2a4e980();
   input += synapse0x2a4e9c0();
   input += synapse0x2a4ea00();
   input += synapse0x2a4ea40();
   input += synapse0x2a4ea80();
   input += synapse0x2a4eac0();
   input += synapse0x2a4eb00();
   input += synapse0x2a4eb40();
   input += synapse0x2a4eb80();
   input += synapse0x2a4ebc0();
   input += synapse0x2a4ec00();
   input += synapse0x2a4ec40();
   input += synapse0x2a4ec80();
   input += synapse0x2a4ecc0();
   input += synapse0x2a4e750();
   input += synapse0x2a4e790();
   input += synapse0x2a4ee10();
   input += synapse0x2a4ee50();
   input += synapse0x2a4ee90();
   input += synapse0x2a4eed0();
   input += synapse0x2a4ef10();
   input += synapse0x2a4ef50();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a4e5c0() {
   double input = input0x2a4e5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a60c00() {
   double input = -1.61229;
   input += synapse0x2a60e20();
   input += synapse0x2a60e60();
   input += synapse0x2a60ea0();
   input += synapse0x2a60ee0();
   input += synapse0x2a60f20();
   input += synapse0x2a60f60();
   input += synapse0x2a60fa0();
   input += synapse0x2a60fe0();
   input += synapse0x2a61020();
   input += synapse0x2a61060();
   input += synapse0x2a610a0();
   input += synapse0x2a610e0();
   input += synapse0x2a61120();
   input += synapse0x2a61160();
   input += synapse0x2a611a0();
   input += synapse0x2a611e0();
   input += synapse0x2a4ef90();
   input += synapse0x2a4efd0();
   input += synapse0x2a61330();
   input += synapse0x2a61370();
   input += synapse0x2a613b0();
   input += synapse0x2a613f0();
   input += synapse0x2a61430();
   input += synapse0x2a61470();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a60c00() {
   double input = input0x2a60c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a614b0() {
   double input = -0.822425;
   input += synapse0x2a617f0();
   input += synapse0x2a61830();
   input += synapse0x2a61870();
   input += synapse0x2a618b0();
   input += synapse0x2a618f0();
   input += synapse0x2a61930();
   input += synapse0x2a61970();
   input += synapse0x2a619b0();
   input += synapse0x2a619f0();
   input += synapse0x2a61a30();
   input += synapse0x2a61a70();
   input += synapse0x2a61ab0();
   input += synapse0x2a61af0();
   input += synapse0x2a61b30();
   input += synapse0x2a61b70();
   input += synapse0x2a61bb0();
   input += synapse0x2a61640();
   input += synapse0x2a61680();
   input += synapse0x2a61d00();
   input += synapse0x2a61d40();
   input += synapse0x2a61d80();
   input += synapse0x2a61dc0();
   input += synapse0x2a61e00();
   input += synapse0x2a61e40();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a614b0() {
   double input = input0x2a614b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a61e80() {
   double input = -2.14624;
   input += synapse0x2a621c0();
   input += synapse0x2a62200();
   input += synapse0x2a62240();
   input += synapse0x2a62280();
   input += synapse0x2a622c0();
   input += synapse0x2a62300();
   input += synapse0x2a62340();
   input += synapse0x2a62380();
   input += synapse0x2a623c0();
   input += synapse0x2a62400();
   input += synapse0x2a62440();
   input += synapse0x2a62480();
   input += synapse0x2a624c0();
   input += synapse0x2a62500();
   input += synapse0x2a62540();
   input += synapse0x2a62580();
   input += synapse0x2a62010();
   input += synapse0x2a62050();
   input += synapse0x2a626d0();
   input += synapse0x2a62710();
   input += synapse0x2a62750();
   input += synapse0x2a62790();
   input += synapse0x2a627d0();
   input += synapse0x2a62810();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a61e80() {
   double input = input0x2a61e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a62850() {
   double input = 0.586165;
   input += synapse0x2a62b90();
   input += synapse0x2a62bd0();
   input += synapse0x2a62c10();
   input += synapse0x2a62c50();
   input += synapse0x2a62c90();
   input += synapse0x2a62cd0();
   input += synapse0x2a62d10();
   input += synapse0x2a62d50();
   input += synapse0x2a62d90();
   input += synapse0x2a62dd0();
   input += synapse0x2a62e10();
   input += synapse0x2a62e50();
   input += synapse0x2a62e90();
   input += synapse0x2a62ed0();
   input += synapse0x2a62f10();
   input += synapse0x2a62f50();
   input += synapse0x2a629e0();
   input += synapse0x2a62a20();
   input += synapse0x2a630a0();
   input += synapse0x2a630e0();
   input += synapse0x2a63120();
   input += synapse0x2a63160();
   input += synapse0x2a631a0();
   input += synapse0x2a631e0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a62850() {
   double input = input0x2a62850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a69a50() {
   double input = -1.14547;
   input += synapse0x28030f0();
   input += synapse0x2803130();
   input += synapse0x2a40c90();
   input += synapse0x2a40cd0();
   input += synapse0x2a41660();
   input += synapse0x2a416a0();
   input += synapse0x2a42430();
   input += synapse0x2a42470();
   input += synapse0x2a42e00();
   input += synapse0x2a42e40();
   input += synapse0x2a437d0();
   input += synapse0x2a43810();
   input += synapse0x2a442b0();
   input += synapse0x2a442f0();
   input += synapse0x2a44c80();
   input += synapse0x2a44cc0();
   input += synapse0x2a41d60();
   input += synapse0x2a41da0();
   input += synapse0x2a46830();
   input += synapse0x2a46870();
   input += synapse0x2a47200();
   input += synapse0x2a47240();
   input += synapse0x2a47bd0();
   input += synapse0x2a47c10();
   input += synapse0x2a485a0();
   input += synapse0x2a485e0();
   input += synapse0x2a3c740();
   input += synapse0x2a3c780();
   input += synapse0x2a4a690();
   input += synapse0x2a4a6d0();
   input += synapse0x2a4b060();
   input += synapse0x2a4b0a0();
   input += synapse0x2a4ba30();
   input += synapse0x2a4ba70();
   input += synapse0x2a4c400();
   input += synapse0x2a4c440();
   input += synapse0x2a4cdd0();
   input += synapse0x2a4ce10();
   input += synapse0x2a45920();
   input += synapse0x2a45960();
   input += synapse0x2a4f1d0();
   input += synapse0x2a4f210();
   input += synapse0x2a4fb60();
   input += synapse0x2a4fba0();
   input += synapse0x2a50530();
   input += synapse0x2a50570();
   input += synapse0x2a50f00();
   input += synapse0x2a50f40();
   input += synapse0x2a518d0();
   input += synapse0x2a51910();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a69a50() {
   double input = input0x2a69a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a69df0() {
   double input = 1.58332;
   input += synapse0x2a54010();
   input += synapse0x2a54050();
   input += synapse0x2a495d0();
   input += synapse0x2a49610();
   input += synapse0x2a56bf0();
   input += synapse0x2a56c30();
   input += synapse0x2a575c0();
   input += synapse0x2a57600();
   input += synapse0x2a57f90();
   input += synapse0x2a57fd0();
   input += synapse0x2a58960();
   input += synapse0x2a589a0();
   input += synapse0x2a59330();
   input += synapse0x2a59370();
   input += synapse0x2a59d00();
   input += synapse0x2a59d40();
   input += synapse0x2a5a6d0();
   input += synapse0x2a5a710();
   input += synapse0x2a5b0a0();
   input += synapse0x2a5b0e0();
   input += synapse0x2a5bc80();
   input += synapse0x2a5bcc0();
   input += synapse0x2a5c650();
   input += synapse0x2a5c690();
   input += synapse0x2a4d4d0();
   input += synapse0x2a4d510();
   input += synapse0x2a4dea0();
   input += synapse0x2a4dee0();
   input += synapse0x2a4e870();
   input += synapse0x2a4e8b0();
   input += synapse0x2a60d90();
   input += synapse0x2a60dd0();
   input += synapse0x2a61760();
   input += synapse0x2a617a0();
   input += synapse0x2a62130();
   input += synapse0x2a62170();
   input += synapse0x2a62b00();
   input += synapse0x2a62b40();
   input += synapse0x2a3e9f0();
   input += synapse0x2a3ea30();
   input += synapse0x2a522a0();
   input += synapse0x2a522e0();
   input += synapse0x2a63220();
   input += synapse0x2a63260();
   input += synapse0x2a632a0();
   input += synapse0x2a632e0();
   input += synapse0x2a6a190();
   input += synapse0x2a6a1d0();
   input += synapse0x2a6a210();
   input += synapse0x2a6a250();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a69df0() {
   double input = input0x2a69df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a6a290() {
   double input = -0.277443;
   input += synapse0x2a6a5d0();
   input += synapse0x2a6a610();
   input += synapse0x2a6a650();
   input += synapse0x2a6a690();
   input += synapse0x2a6a6d0();
   input += synapse0x2a6a710();
   input += synapse0x2a6a750();
   input += synapse0x2a6a790();
   input += synapse0x2a6a7d0();
   input += synapse0x2a6a810();
   input += synapse0x2a6a850();
   input += synapse0x2a6a890();
   input += synapse0x2a6a8d0();
   input += synapse0x2a6a910();
   input += synapse0x2a6a950();
   input += synapse0x2a6a990();
   input += synapse0x2a6a420();
   input += synapse0x2a6a460();
   input += synapse0x2a6aae0();
   input += synapse0x2a6ab20();
   input += synapse0x2a6ab60();
   input += synapse0x2a6aba0();
   input += synapse0x2a6abe0();
   input += synapse0x2a6ac20();
   input += synapse0x2a6ac60();
   input += synapse0x2a6aca0();
   input += synapse0x2a6ace0();
   input += synapse0x2a6ad20();
   input += synapse0x2a6ad60();
   input += synapse0x2a6ada0();
   input += synapse0x2a6ade0();
   input += synapse0x2a6ae20();
   input += synapse0x2a6a9d0();
   input += synapse0x2a6aa10();
   input += synapse0x2a6aa50();
   input += synapse0x2a6aa90();
   input += synapse0x2a6b070();
   input += synapse0x2a6b0b0();
   input += synapse0x2a6b0f0();
   input += synapse0x2a6b130();
   input += synapse0x2a6b170();
   input += synapse0x2a6b1b0();
   input += synapse0x2a6b1f0();
   input += synapse0x2a6b230();
   input += synapse0x2a6b270();
   input += synapse0x2a6b2b0();
   input += synapse0x2a6b2f0();
   input += synapse0x2a6b330();
   input += synapse0x2a6b370();
   input += synapse0x2a6b3b0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a6a290() {
   double input = input0x2a6a290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a6b3f0() {
   double input = 0.170511;
   input += synapse0x2a6b730();
   input += synapse0x2a6b770();
   input += synapse0x2a6b7b0();
   input += synapse0x2a6b7f0();
   input += synapse0x2a6b830();
   input += synapse0x2a6b870();
   input += synapse0x2a6b8b0();
   input += synapse0x2a6b8f0();
   input += synapse0x2a6b930();
   input += synapse0x2a6b970();
   input += synapse0x2a6b9b0();
   input += synapse0x2a6b9f0();
   input += synapse0x2a6ba30();
   input += synapse0x2a6ba70();
   input += synapse0x2a6bab0();
   input += synapse0x2a6baf0();
   input += synapse0x2a6b580();
   input += synapse0x2a6b5c0();
   input += synapse0x2a6bc40();
   input += synapse0x2a6bc80();
   input += synapse0x2a6bcc0();
   input += synapse0x2a6bd00();
   input += synapse0x2a6bd40();
   input += synapse0x2a6bd80();
   input += synapse0x2a6bdc0();
   input += synapse0x2a6be00();
   input += synapse0x2a6be40();
   input += synapse0x2a6be80();
   input += synapse0x2a6bec0();
   input += synapse0x2a6bf00();
   input += synapse0x2a6bf40();
   input += synapse0x2a6bf80();
   input += synapse0x2a6bb30();
   input += synapse0x2a6bb70();
   input += synapse0x2a6bbb0();
   input += synapse0x2a6bbf0();
   input += synapse0x2a6c1d0();
   input += synapse0x2a6c210();
   input += synapse0x2a6c250();
   input += synapse0x2a6c290();
   input += synapse0x2a6c2d0();
   input += synapse0x2a6c310();
   input += synapse0x2a6c350();
   input += synapse0x2a6c390();
   input += synapse0x2a6c3d0();
   input += synapse0x2a6c410();
   input += synapse0x2a6c450();
   input += synapse0x2a6c490();
   input += synapse0x2a6c4d0();
   input += synapse0x2a6c510();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a6b3f0() {
   double input = input0x2a6b3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a6c550() {
   double input = 2.32483;
   input += synapse0x2a6c890();
   input += synapse0x2a6c8d0();
   input += synapse0x2a6c910();
   input += synapse0x2a6c950();
   input += synapse0x2a6c990();
   input += synapse0x2a6c9d0();
   input += synapse0x2a6ca10();
   input += synapse0x2a6ca50();
   input += synapse0x2a6ca90();
   input += synapse0x2a6cad0();
   input += synapse0x2a6cb10();
   input += synapse0x2a6cb50();
   input += synapse0x2a6cb90();
   input += synapse0x2a6cbd0();
   input += synapse0x2a6cc10();
   input += synapse0x2a6cc50();
   input += synapse0x2a6c6e0();
   input += synapse0x2a6c720();
   input += synapse0x2a6cda0();
   input += synapse0x2a6cde0();
   input += synapse0x2a6ce20();
   input += synapse0x2a6ce60();
   input += synapse0x2a6cea0();
   input += synapse0x2a6cee0();
   input += synapse0x2a6cf20();
   input += synapse0x2a6cf60();
   input += synapse0x2a6cfa0();
   input += synapse0x2a6cfe0();
   input += synapse0x2a6d020();
   input += synapse0x2a6d060();
   input += synapse0x2a6d0a0();
   input += synapse0x2a6d0e0();
   input += synapse0x2a6cc90();
   input += synapse0x2a6ccd0();
   input += synapse0x2a6cd10();
   input += synapse0x2a6cd50();
   input += synapse0x2a6d330();
   input += synapse0x2a6d370();
   input += synapse0x2a6d3b0();
   input += synapse0x2a6d3f0();
   input += synapse0x2a6d430();
   input += synapse0x2a6d470();
   input += synapse0x2a6d4b0();
   input += synapse0x2a6d4f0();
   input += synapse0x2a6d530();
   input += synapse0x2a6d570();
   input += synapse0x2a6d5b0();
   input += synapse0x2a6d5f0();
   input += synapse0x2a6d630();
   input += synapse0x2a6d670();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a6c550() {
   double input = input0x2a6c550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_cR::input0x2a6d6b0() {
   double input = 0.33021;
   input += synapse0x2a6d8d0();
   input += synapse0x2a6d910();
   input += synapse0x2a6d950();
   input += synapse0x2a6d990();
   input += synapse0x2a6d9d0();
   return input;
}

double NNfunction_ns_chi03_cR::neuron0x2a6d6b0() {
   double input = input0x2a6d6b0();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_cR::synapse0x2a39660() {
   return (neuron0x2a397a0()*-0.63994);
}

double NNfunction_ns_chi03_cR::synapse0x2a396a0() {
   return (neuron0x2a39ae0()*-0.990141);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ea80() {
   return (neuron0x2a39e20()*0.10932);
}

double NNfunction_ns_chi03_cR::synapse0x2a3eac0() {
   return (neuron0x2a3a160()*-0.552023);
}

double NNfunction_ns_chi03_cR::synapse0x2a3eb00() {
   return (neuron0x2a3a4a0()*-0.430181);
}

double NNfunction_ns_chi03_cR::synapse0x2a3eb40() {
   return (neuron0x2a3a7e0()*1.26706);
}

double NNfunction_ns_chi03_cR::synapse0x2a3eb80() {
   return (neuron0x2a3ab20()*1.56228);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ebc0() {
   return (neuron0x2a3ae60()*-0.293393);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ec00() {
   return (neuron0x2a3b1a0()*0.249357);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ec40() {
   return (neuron0x2a3b4e0()*0.350202);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ec80() {
   return (neuron0x2a3b820()*0.854332);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ecc0() {
   return (neuron0x2a3bb60()*-0.236179);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ed00() {
   return (neuron0x2a3bea0()*-0.205086);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ed40() {
   return (neuron0x2a3c1e0()*0.758088);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ed80() {
   return (neuron0x2a3c520()*-0.456689);
}

double NNfunction_ns_chi03_cR::synapse0x2a3edc0() {
   return (neuron0x2a3c860()*-0.399414);
}

double NNfunction_ns_chi03_cR::synapse0x2a395d0() {
   return (neuron0x2a3cba0()*0.953752);
}

double NNfunction_ns_chi03_cR::synapse0x2a39610() {
   return (neuron0x2a3d100()*-1.45992);
}

double NNfunction_ns_chi03_cR::synapse0x27f4940() {
   return (neuron0x2a3d320()*0.503747);
}

double NNfunction_ns_chi03_cR::synapse0x27f4980() {
   return (neuron0x2a3d660()*0.656886);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f020() {
   return (neuron0x2a3d9a0()*0.19178);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f060() {
   return (neuron0x2a3dce0()*-0.283803);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f0a0() {
   return (neuron0x2a3e020()*-0.631816);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f0e0() {
   return (neuron0x2a3e360()*2.12281);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f460() {
   return (neuron0x2a397a0()*0.0744873);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f4a0() {
   return (neuron0x2a39ae0()*-14.2183);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f4e0() {
   return (neuron0x2a39e20()*-0.0456176);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f520() {
   return (neuron0x2a3a160()*0.0533562);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f560() {
   return (neuron0x2a3a4a0()*-0.0137752);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f5a0() {
   return (neuron0x2a3a7e0()*-0.0144543);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f5e0() {
   return (neuron0x2a3ab20()*0.0141843);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f620() {
   return (neuron0x2a3ae60()*0.0106224);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f660() {
   return (neuron0x2a3b1a0()*-0.0270685);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ef10() {
   return (neuron0x2a3b4e0()*-0.00985166);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ef50() {
   return (neuron0x2a3b820()*0.0155414);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ef90() {
   return (neuron0x2a3bb60()*-0.0166867);
}

double NNfunction_ns_chi03_cR::synapse0x2a3efd0() {
   return (neuron0x2a3bea0()*-0.0181507);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f8b0() {
   return (neuron0x2a3c1e0()*-0.0469135);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f8f0() {
   return (neuron0x2a3c520()*0.0273361);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f930() {
   return (neuron0x2a3c860()*-0.0554156);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f2b0() {
   return (neuron0x2a3cba0()*0.0222489);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f2f0() {
   return (neuron0x2a3d100()*-0.0621784);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fa80() {
   return (neuron0x2a3d320()*-0.0225532);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fac0() {
   return (neuron0x2a3d660()*-0.0393509);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fb00() {
   return (neuron0x2a3d9a0()*-0.0206739);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fb40() {
   return (neuron0x2a3dce0()*0.00735022);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fb80() {
   return (neuron0x2a3e020()*0.0225891);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fbc0() {
   return (neuron0x2a3e360()*4.87323);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ff40() {
   return (neuron0x2a397a0()*0.0265214);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ff80() {
   return (neuron0x2a39ae0()*-0.101301);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ffc0() {
   return (neuron0x2a39e20()*-0.0763406);
}

double NNfunction_ns_chi03_cR::synapse0x2a40000() {
   return (neuron0x2a3a160()*-0.631128);
}

double NNfunction_ns_chi03_cR::synapse0x2a40040() {
   return (neuron0x2a3a4a0()*-0.0244929);
}

double NNfunction_ns_chi03_cR::synapse0x2a40080() {
   return (neuron0x2a3a7e0()*-0.124177);
}

double NNfunction_ns_chi03_cR::synapse0x2a400c0() {
   return (neuron0x2a3ab20()*0.0146165);
}

double NNfunction_ns_chi03_cR::synapse0x2a40100() {
   return (neuron0x2a3ae60()*-0.000390111);
}

double NNfunction_ns_chi03_cR::synapse0x2a40140() {
   return (neuron0x2a3b1a0()*0.0634552);
}

double NNfunction_ns_chi03_cR::synapse0x2a40180() {
   return (neuron0x2a3b4e0()*-0.0665883);
}

double NNfunction_ns_chi03_cR::synapse0x2a401c0() {
   return (neuron0x2a3b820()*-0.0658336);
}

double NNfunction_ns_chi03_cR::synapse0x2a40200() {
   return (neuron0x2a3bb60()*-0.139203);
}

double NNfunction_ns_chi03_cR::synapse0x2a40240() {
   return (neuron0x2a3bea0()*-0.378693);
}

double NNfunction_ns_chi03_cR::synapse0x2a40280() {
   return (neuron0x2a3c1e0()*0.0951151);
}

double NNfunction_ns_chi03_cR::synapse0x2a402c0() {
   return (neuron0x2a3c520()*-0.0249225);
}

double NNfunction_ns_chi03_cR::synapse0x2a40300() {
   return (neuron0x2a3c860()*0.219436);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fd90() {
   return (neuron0x2a3cba0()*0.0941428);
}

double NNfunction_ns_chi03_cR::synapse0x2a3fdd0() {
   return (neuron0x2a3d100()*-0.196424);
}

double NNfunction_ns_chi03_cR::synapse0x27f5030() {
   return (neuron0x2a3d320()*-0.134958);
}

double NNfunction_ns_chi03_cR::synapse0x2802900() {
   return (neuron0x2a3d660()*-0.071813);
}

double NNfunction_ns_chi03_cR::synapse0x2802940() {
   return (neuron0x2a3d9a0()*0.0444424);
}

double NNfunction_ns_chi03_cR::synapse0x2a28830() {
   return (neuron0x2a3dce0()*0.0258673);
}

double NNfunction_ns_chi03_cR::synapse0x2a28870() {
   return (neuron0x2a3e020()*0.055455);
}

double NNfunction_ns_chi03_cR::synapse0x2a288b0() {
   return (neuron0x2a3e360()*-0.00222425);
}

double NNfunction_ns_chi03_cR::synapse0x2803180() {
   return (neuron0x2a397a0()*-0.293273);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f830() {
   return (neuron0x2a39ae0()*2.59735);
}

double NNfunction_ns_chi03_cR::synapse0x2a3f870() {
   return (neuron0x2a39e20()*0.0503475);
}

double NNfunction_ns_chi03_cR::synapse0x2a40450() {
   return (neuron0x2a3a160()*0.604479);
}

double NNfunction_ns_chi03_cR::synapse0x2a40490() {
   return (neuron0x2a3a4a0()*0.232689);
}

double NNfunction_ns_chi03_cR::synapse0x2a404d0() {
   return (neuron0x2a3a7e0()*0.303755);
}

double NNfunction_ns_chi03_cR::synapse0x2a40510() {
   return (neuron0x2a3ab20()*0.610258);
}

double NNfunction_ns_chi03_cR::synapse0x2a40550() {
   return (neuron0x2a3ae60()*-0.444014);
}

double NNfunction_ns_chi03_cR::synapse0x2a40590() {
   return (neuron0x2a3b1a0()*-0.403125);
}

double NNfunction_ns_chi03_cR::synapse0x2a405d0() {
   return (neuron0x2a3b4e0()*-0.332606);
}

double NNfunction_ns_chi03_cR::synapse0x2a40610() {
   return (neuron0x2a3b820()*0.00112804);
}

double NNfunction_ns_chi03_cR::synapse0x2a40650() {
   return (neuron0x2a3bb60()*0.11381);
}

double NNfunction_ns_chi03_cR::synapse0x2a40690() {
   return (neuron0x2a3bea0()*-0.258236);
}

double NNfunction_ns_chi03_cR::synapse0x2a406d0() {
   return (neuron0x2a3c1e0()*-0.957924);
}

double NNfunction_ns_chi03_cR::synapse0x2a40710() {
   return (neuron0x2a3c520()*0.331927);
}

double NNfunction_ns_chi03_cR::synapse0x2a40750() {
   return (neuron0x2a3c860()*0.146268);
}

double NNfunction_ns_chi03_cR::synapse0x2a396e0() {
   return (neuron0x2a3cba0()*-0.233884);
}

double NNfunction_ns_chi03_cR::synapse0x2a39720() {
   return (neuron0x2a3d100()*-0.295755);
}

double NNfunction_ns_chi03_cR::synapse0x2a39760() {
   return (neuron0x2a3d320()*-0.0499387);
}

double NNfunction_ns_chi03_cR::synapse0x2a408a0() {
   return (neuron0x2a3d660()*-0.217073);
}

double NNfunction_ns_chi03_cR::synapse0x2a408e0() {
   return (neuron0x2a3d9a0()*-0.06862);
}

double NNfunction_ns_chi03_cR::synapse0x2a40920() {
   return (neuron0x2a3dce0()*0.0870332);
}

double NNfunction_ns_chi03_cR::synapse0x2a40960() {
   return (neuron0x2a3e020()*0.18941);
}

double NNfunction_ns_chi03_cR::synapse0x2a409a0() {
   return (neuron0x2a3e360()*-0.209803);
}

double NNfunction_ns_chi03_cR::synapse0x2a40d20() {
   return (neuron0x2a397a0()*0.0440465);
}

double NNfunction_ns_chi03_cR::synapse0x2a40d60() {
   return (neuron0x2a39ae0()*0.0850107);
}

double NNfunction_ns_chi03_cR::synapse0x2a40da0() {
   return (neuron0x2a39e20()*-0.657879);
}

double NNfunction_ns_chi03_cR::synapse0x2a40de0() {
   return (neuron0x2a3a160()*0.33918);
}

double NNfunction_ns_chi03_cR::synapse0x2a40e20() {
   return (neuron0x2a3a4a0()*-0.106232);
}

double NNfunction_ns_chi03_cR::synapse0x2a40e60() {
   return (neuron0x2a3a7e0()*-1.14244);
}

double NNfunction_ns_chi03_cR::synapse0x2a40ea0() {
   return (neuron0x2a3ab20()*0.725019);
}

double NNfunction_ns_chi03_cR::synapse0x2a40ee0() {
   return (neuron0x2a3ae60()*0.0207259);
}

double NNfunction_ns_chi03_cR::synapse0x2a40f20() {
   return (neuron0x2a3b1a0()*1.23044);
}

double NNfunction_ns_chi03_cR::synapse0x2a40f60() {
   return (neuron0x2a3b4e0()*1.70625);
}

double NNfunction_ns_chi03_cR::synapse0x2a40fa0() {
   return (neuron0x2a3b820()*-0.447314);
}

double NNfunction_ns_chi03_cR::synapse0x2a40fe0() {
   return (neuron0x2a3bb60()*-0.737118);
}

double NNfunction_ns_chi03_cR::synapse0x2a41020() {
   return (neuron0x2a3bea0()*-0.0799896);
}

double NNfunction_ns_chi03_cR::synapse0x2a41060() {
   return (neuron0x2a3c1e0()*0.390588);
}

double NNfunction_ns_chi03_cR::synapse0x2a410a0() {
   return (neuron0x2a3c520()*0.142029);
}

double NNfunction_ns_chi03_cR::synapse0x2a410e0() {
   return (neuron0x2a3c860()*-0.96486);
}

double NNfunction_ns_chi03_cR::synapse0x2a40b70() {
   return (neuron0x2a3cba0()*0.329649);
}

double NNfunction_ns_chi03_cR::synapse0x2a40bb0() {
   return (neuron0x2a3d100()*-1.15207);
}

double NNfunction_ns_chi03_cR::synapse0x2a41230() {
   return (neuron0x2a3d320()*-0.466097);
}

double NNfunction_ns_chi03_cR::synapse0x2a41270() {
   return (neuron0x2a3d660()*0.154746);
}

double NNfunction_ns_chi03_cR::synapse0x2a412b0() {
   return (neuron0x2a3d9a0()*-0.0764816);
}

double NNfunction_ns_chi03_cR::synapse0x2a412f0() {
   return (neuron0x2a3dce0()*-0.697276);
}

double NNfunction_ns_chi03_cR::synapse0x2a41330() {
   return (neuron0x2a3e020()*-0.0931813);
}

double NNfunction_ns_chi03_cR::synapse0x2a41370() {
   return (neuron0x2a3e360()*-0.186187);
}

double NNfunction_ns_chi03_cR::synapse0x2a416f0() {
   return (neuron0x2a397a0()*-0.00175441);
}

double NNfunction_ns_chi03_cR::synapse0x2a41730() {
   return (neuron0x2a39ae0()*3.71561);
}

double NNfunction_ns_chi03_cR::synapse0x2a41770() {
   return (neuron0x2a39e20()*1.23261);
}

double NNfunction_ns_chi03_cR::synapse0x2a417b0() {
   return (neuron0x2a3a160()*-0.077713);
}

double NNfunction_ns_chi03_cR::synapse0x2a417f0() {
   return (neuron0x2a3a4a0()*-0.0302277);
}

double NNfunction_ns_chi03_cR::synapse0x2a41830() {
   return (neuron0x2a3a7e0()*-0.0266338);
}

double NNfunction_ns_chi03_cR::synapse0x2a41870() {
   return (neuron0x2a3ab20()*0.0213798);
}

double NNfunction_ns_chi03_cR::synapse0x2a418b0() {
   return (neuron0x2a3ae60()*-0.0148636);
}

double NNfunction_ns_chi03_cR::synapse0x2a418f0() {
   return (neuron0x2a3b1a0()*0.0222303);
}

double NNfunction_ns_chi03_cR::synapse0x2802c50() {
   return (neuron0x2a3b4e0()*-0.0441871);
}

double NNfunction_ns_chi03_cR::synapse0x2802c90() {
   return (neuron0x2a3b820()*-0.018125);
}

double NNfunction_ns_chi03_cR::synapse0x2802cd0() {
   return (neuron0x2a3bb60()*0.00108777);
}

double NNfunction_ns_chi03_cR::synapse0x2802d10() {
   return (neuron0x2a3bea0()*0.0116559);
}

double NNfunction_ns_chi03_cR::synapse0x2802d50() {
   return (neuron0x2a3c1e0()*-0.00974671);
}

double NNfunction_ns_chi03_cR::synapse0x2802d90() {
   return (neuron0x2a3c520()*-0.0471085);
}

double NNfunction_ns_chi03_cR::synapse0x2802dd0() {
   return (neuron0x2a3c860()*0.0249499);
}

double NNfunction_ns_chi03_cR::synapse0x2a41540() {
   return (neuron0x2a3cba0()*-0.0691197);
}

double NNfunction_ns_chi03_cR::synapse0x2a41580() {
   return (neuron0x2a3d100()*0.0301958);
}

double NNfunction_ns_chi03_cR::synapse0x2802f20() {
   return (neuron0x2a3d320()*0.0151097);
}

double NNfunction_ns_chi03_cR::synapse0x2802f60() {
   return (neuron0x2a3d660()*-0.0264172);
}

double NNfunction_ns_chi03_cR::synapse0x2802fa0() {
   return (neuron0x2a3d9a0()*0.00432902);
}

double NNfunction_ns_chi03_cR::synapse0x2802fe0() {
   return (neuron0x2a3dce0()*0.0105369);
}

double NNfunction_ns_chi03_cR::synapse0x2803020() {
   return (neuron0x2a3e020()*-0.0225832);
}

double NNfunction_ns_chi03_cR::synapse0x2a42140() {
   return (neuron0x2a3e360()*1.56771);
}

double NNfunction_ns_chi03_cR::synapse0x2a424c0() {
   return (neuron0x2a397a0()*0.011232);
}

double NNfunction_ns_chi03_cR::synapse0x2a42500() {
   return (neuron0x2a39ae0()*-3.1081);
}

double NNfunction_ns_chi03_cR::synapse0x2a42540() {
   return (neuron0x2a39e20()*0.437474);
}

double NNfunction_ns_chi03_cR::synapse0x2a42580() {
   return (neuron0x2a3a160()*0.0461916);
}

double NNfunction_ns_chi03_cR::synapse0x2a425c0() {
   return (neuron0x2a3a4a0()*0.0213022);
}

double NNfunction_ns_chi03_cR::synapse0x2a42600() {
   return (neuron0x2a3a7e0()*-0.00509314);
}

double NNfunction_ns_chi03_cR::synapse0x2a42640() {
   return (neuron0x2a3ab20()*0.0128261);
}

double NNfunction_ns_chi03_cR::synapse0x2a42680() {
   return (neuron0x2a3ae60()*0.00793842);
}

double NNfunction_ns_chi03_cR::synapse0x2a426c0() {
   return (neuron0x2a3b1a0()*0.00945729);
}

double NNfunction_ns_chi03_cR::synapse0x2a42700() {
   return (neuron0x2a3b4e0()*0.0683527);
}

double NNfunction_ns_chi03_cR::synapse0x2a42740() {
   return (neuron0x2a3b820()*0.0376357);
}

double NNfunction_ns_chi03_cR::synapse0x2a42780() {
   return (neuron0x2a3bb60()*-0.00864009);
}

double NNfunction_ns_chi03_cR::synapse0x2a427c0() {
   return (neuron0x2a3bea0()*-0.0116697);
}

double NNfunction_ns_chi03_cR::synapse0x2a42800() {
   return (neuron0x2a3c1e0()*-0.0320108);
}

double NNfunction_ns_chi03_cR::synapse0x2a42840() {
   return (neuron0x2a3c520()*-0.0149449);
}

double NNfunction_ns_chi03_cR::synapse0x2a42880() {
   return (neuron0x2a3c860()*-0.523104);
}

double NNfunction_ns_chi03_cR::synapse0x2a42310() {
   return (neuron0x2a3cba0()*-0.0322205);
}

double NNfunction_ns_chi03_cR::synapse0x2a42350() {
   return (neuron0x2a3d100()*-0.00105313);
}

double NNfunction_ns_chi03_cR::synapse0x2a429d0() {
   return (neuron0x2a3d320()*-0.00890097);
}

double NNfunction_ns_chi03_cR::synapse0x2a42a10() {
   return (neuron0x2a3d660()*-0.00186023);
}

double NNfunction_ns_chi03_cR::synapse0x2a42a50() {
   return (neuron0x2a3d9a0()*-0.0328689);
}

double NNfunction_ns_chi03_cR::synapse0x2a42a90() {
   return (neuron0x2a3dce0()*0.00699063);
}

double NNfunction_ns_chi03_cR::synapse0x2a42ad0() {
   return (neuron0x2a3e020()*0.0120972);
}

double NNfunction_ns_chi03_cR::synapse0x2a42b10() {
   return (neuron0x2a3e360()*-0.557083);
}

double NNfunction_ns_chi03_cR::synapse0x2a42e90() {
   return (neuron0x2a397a0()*0.0365194);
}

double NNfunction_ns_chi03_cR::synapse0x2a42ed0() {
   return (neuron0x2a39ae0()*-0.0868053);
}

double NNfunction_ns_chi03_cR::synapse0x2a42f10() {
   return (neuron0x2a39e20()*-8.0211);
}

double NNfunction_ns_chi03_cR::synapse0x2a42f50() {
   return (neuron0x2a3a160()*-0.00900388);
}

double NNfunction_ns_chi03_cR::synapse0x2a42f90() {
   return (neuron0x2a3a4a0()*-0.0163489);
}

double NNfunction_ns_chi03_cR::synapse0x2a42fd0() {
   return (neuron0x2a3a7e0()*-0.0324149);
}

double NNfunction_ns_chi03_cR::synapse0x2a43010() {
   return (neuron0x2a3ab20()*-0.0402043);
}

double NNfunction_ns_chi03_cR::synapse0x2a43050() {
   return (neuron0x2a3ae60()*-0.0173064);
}

double NNfunction_ns_chi03_cR::synapse0x2a43090() {
   return (neuron0x2a3b1a0()*-0.0379739);
}

double NNfunction_ns_chi03_cR::synapse0x2a430d0() {
   return (neuron0x2a3b4e0()*0.0615962);
}

double NNfunction_ns_chi03_cR::synapse0x2a43110() {
   return (neuron0x2a3b820()*0.0458278);
}

double NNfunction_ns_chi03_cR::synapse0x2a43150() {
   return (neuron0x2a3bb60()*0.0124797);
}

double NNfunction_ns_chi03_cR::synapse0x2a43190() {
   return (neuron0x2a3bea0()*0.0663607);
}

double NNfunction_ns_chi03_cR::synapse0x2a431d0() {
   return (neuron0x2a3c1e0()*-0.0290169);
}

double NNfunction_ns_chi03_cR::synapse0x2a43210() {
   return (neuron0x2a3c520()*-0.0730492);
}

double NNfunction_ns_chi03_cR::synapse0x2a43250() {
   return (neuron0x2a3c860()*-0.493824);
}

double NNfunction_ns_chi03_cR::synapse0x2a42ce0() {
   return (neuron0x2a3cba0()*-0.0186948);
}

double NNfunction_ns_chi03_cR::synapse0x2a42d20() {
   return (neuron0x2a3d100()*0.0183484);
}

double NNfunction_ns_chi03_cR::synapse0x2a433a0() {
   return (neuron0x2a3d320()*-0.0302629);
}

double NNfunction_ns_chi03_cR::synapse0x2a433e0() {
   return (neuron0x2a3d660()*0.0572165);
}

double NNfunction_ns_chi03_cR::synapse0x2a43420() {
   return (neuron0x2a3d9a0()*0.00670314);
}

double NNfunction_ns_chi03_cR::synapse0x2a43460() {
   return (neuron0x2a3dce0()*-0.0714526);
}

double NNfunction_ns_chi03_cR::synapse0x2a434a0() {
   return (neuron0x2a3e020()*0.0203488);
}

double NNfunction_ns_chi03_cR::synapse0x2a434e0() {
   return (neuron0x2a3e360()*-1.36908);
}

double NNfunction_ns_chi03_cR::synapse0x2a3cff0() {
   return (neuron0x2a397a0()*-0.127324);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d030() {
   return (neuron0x2a39ae0()*0.0124776);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d070() {
   return (neuron0x2a39e20()*-0.41036);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d0b0() {
   return (neuron0x2a3a160()*-0.00999544);
}

double NNfunction_ns_chi03_cR::synapse0x2a43a70() {
   return (neuron0x2a3a4a0()*-0.205337);
}

double NNfunction_ns_chi03_cR::synapse0x2a43ab0() {
   return (neuron0x2a3a7e0()*0.0658368);
}

double NNfunction_ns_chi03_cR::synapse0x2a43af0() {
   return (neuron0x2a3ab20()*-0.0815093);
}

double NNfunction_ns_chi03_cR::synapse0x2a43b30() {
   return (neuron0x2a3ae60()*0.101871);
}

double NNfunction_ns_chi03_cR::synapse0x2a43b70() {
   return (neuron0x2a3b1a0()*-0.120014);
}

double NNfunction_ns_chi03_cR::synapse0x2a43bb0() {
   return (neuron0x2a3b4e0()*0.170873);
}

double NNfunction_ns_chi03_cR::synapse0x2a43bf0() {
   return (neuron0x2a3b820()*-0.168122);
}

double NNfunction_ns_chi03_cR::synapse0x2a43c30() {
   return (neuron0x2a3bb60()*0.393924);
}

double NNfunction_ns_chi03_cR::synapse0x2a43c70() {
   return (neuron0x2a3bea0()*0.0635516);
}

double NNfunction_ns_chi03_cR::synapse0x2a43cb0() {
   return (neuron0x2a3c1e0()*0.0209893);
}

double NNfunction_ns_chi03_cR::synapse0x2a43cf0() {
   return (neuron0x2a3c520()*-0.203575);
}

double NNfunction_ns_chi03_cR::synapse0x2a43d30() {
   return (neuron0x2a3c860()*-0.043738);
}

double NNfunction_ns_chi03_cR::synapse0x2a436b0() {
   return (neuron0x2a3cba0()*0.0499657);
}

double NNfunction_ns_chi03_cR::synapse0x2a436f0() {
   return (neuron0x2a3d100()*-0.311345);
}

double NNfunction_ns_chi03_cR::synapse0x2a43e80() {
   return (neuron0x2a3d320()*0.182201);
}

double NNfunction_ns_chi03_cR::synapse0x2a43ec0() {
   return (neuron0x2a3d660()*-1.57134);
}

double NNfunction_ns_chi03_cR::synapse0x2a43f00() {
   return (neuron0x2a3d9a0()*-0.0864776);
}

double NNfunction_ns_chi03_cR::synapse0x2a43f40() {
   return (neuron0x2a3dce0()*-0.0810445);
}

double NNfunction_ns_chi03_cR::synapse0x2a43f80() {
   return (neuron0x2a3e020()*-0.0234217);
}

double NNfunction_ns_chi03_cR::synapse0x2a43fc0() {
   return (neuron0x2a3e360()*0.0493347);
}

double NNfunction_ns_chi03_cR::synapse0x2a44340() {
   return (neuron0x2a397a0()*-0.495827);
}

double NNfunction_ns_chi03_cR::synapse0x2a44380() {
   return (neuron0x2a39ae0()*-2.39115);
}

double NNfunction_ns_chi03_cR::synapse0x2a443c0() {
   return (neuron0x2a39e20()*-0.100888);
}

double NNfunction_ns_chi03_cR::synapse0x2a44400() {
   return (neuron0x2a3a160()*0.214799);
}

double NNfunction_ns_chi03_cR::synapse0x2a44440() {
   return (neuron0x2a3a4a0()*-0.354258);
}

double NNfunction_ns_chi03_cR::synapse0x2a44480() {
   return (neuron0x2a3a7e0()*0.691619);
}

double NNfunction_ns_chi03_cR::synapse0x2a444c0() {
   return (neuron0x2a3ab20()*-0.125373);
}

double NNfunction_ns_chi03_cR::synapse0x2a44500() {
   return (neuron0x2a3ae60()*-0.0191892);
}

double NNfunction_ns_chi03_cR::synapse0x2a44540() {
   return (neuron0x2a3b1a0()*-0.0230839);
}

double NNfunction_ns_chi03_cR::synapse0x2a44580() {
   return (neuron0x2a3b4e0()*0.207027);
}

double NNfunction_ns_chi03_cR::synapse0x2a445c0() {
   return (neuron0x2a3b820()*2.61891);
}

double NNfunction_ns_chi03_cR::synapse0x2a44600() {
   return (neuron0x2a3bb60()*0.724569);
}

double NNfunction_ns_chi03_cR::synapse0x2a44640() {
   return (neuron0x2a3bea0()*-0.218081);
}

double NNfunction_ns_chi03_cR::synapse0x2a44680() {
   return (neuron0x2a3c1e0()*0.286126);
}

double NNfunction_ns_chi03_cR::synapse0x2a446c0() {
   return (neuron0x2a3c520()*0.304228);
}

double NNfunction_ns_chi03_cR::synapse0x2a44700() {
   return (neuron0x2a3c860()*2.43508);
}

double NNfunction_ns_chi03_cR::synapse0x2a44190() {
   return (neuron0x2a3cba0()*-0.229607);
}

double NNfunction_ns_chi03_cR::synapse0x2a441d0() {
   return (neuron0x2a3d100()*0.595713);
}

double NNfunction_ns_chi03_cR::synapse0x2a44850() {
   return (neuron0x2a3d320()*-0.0243842);
}

double NNfunction_ns_chi03_cR::synapse0x2a44890() {
   return (neuron0x2a3d660()*0.0949982);
}

double NNfunction_ns_chi03_cR::synapse0x2a448d0() {
   return (neuron0x2a3d9a0()*-0.208684);
}

double NNfunction_ns_chi03_cR::synapse0x2a44910() {
   return (neuron0x2a3dce0()*0.411221);
}

double NNfunction_ns_chi03_cR::synapse0x2a44950() {
   return (neuron0x2a3e020()*0.865042);
}

double NNfunction_ns_chi03_cR::synapse0x2a44990() {
   return (neuron0x2a3e360()*-0.692361);
}

double NNfunction_ns_chi03_cR::synapse0x2a44d10() {
   return (neuron0x2a397a0()*0.00116503);
}

double NNfunction_ns_chi03_cR::synapse0x2a44d50() {
   return (neuron0x2a39ae0()*3.39748);
}

double NNfunction_ns_chi03_cR::synapse0x2a44d90() {
   return (neuron0x2a39e20()*-0.467992);
}

double NNfunction_ns_chi03_cR::synapse0x2a44dd0() {
   return (neuron0x2a3a160()*0.0203398);
}

double NNfunction_ns_chi03_cR::synapse0x2a44e10() {
   return (neuron0x2a3a4a0()*0.00573142);
}

double NNfunction_ns_chi03_cR::synapse0x2a44e50() {
   return (neuron0x2a3a7e0()*0.00369327);
}

double NNfunction_ns_chi03_cR::synapse0x2a44e90() {
   return (neuron0x2a3ab20()*0.0274604);
}

double NNfunction_ns_chi03_cR::synapse0x2a44ed0() {
   return (neuron0x2a3ae60()*-0.00713057);
}

double NNfunction_ns_chi03_cR::synapse0x2a44f10() {
   return (neuron0x2a3b1a0()*0.00109381);
}

double NNfunction_ns_chi03_cR::synapse0x2a44f50() {
   return (neuron0x2a3b4e0()*0.00219651);
}

double NNfunction_ns_chi03_cR::synapse0x2a44f90() {
   return (neuron0x2a3b820()*-0.0118076);
}

double NNfunction_ns_chi03_cR::synapse0x2a44fd0() {
   return (neuron0x2a3bb60()*-0.0187562);
}

double NNfunction_ns_chi03_cR::synapse0x2a45010() {
   return (neuron0x2a3bea0()*-0.00637515);
}

double NNfunction_ns_chi03_cR::synapse0x2a45050() {
   return (neuron0x2a3c1e0()*-0.00187919);
}

double NNfunction_ns_chi03_cR::synapse0x2a45090() {
   return (neuron0x2a3c520()*-0.00149101);
}

double NNfunction_ns_chi03_cR::synapse0x2a450d0() {
   return (neuron0x2a3c860()*-0.0192858);
}

double NNfunction_ns_chi03_cR::synapse0x2a44b60() {
   return (neuron0x2a3cba0()*0.020581);
}

double NNfunction_ns_chi03_cR::synapse0x2a44ba0() {
   return (neuron0x2a3d100()*-0.0167645);
}

double NNfunction_ns_chi03_cR::synapse0x2a41930() {
   return (neuron0x2a3d320()*-0.0125125);
}

double NNfunction_ns_chi03_cR::synapse0x2a41970() {
   return (neuron0x2a3d660()*-0.00281384);
}

double NNfunction_ns_chi03_cR::synapse0x2a419b0() {
   return (neuron0x2a3d9a0()*-0.0211948);
}

double NNfunction_ns_chi03_cR::synapse0x2a419f0() {
   return (neuron0x2a3dce0()*0.0109512);
}

double NNfunction_ns_chi03_cR::synapse0x2a41a30() {
   return (neuron0x2a3e020()*-0.00141821);
}

double NNfunction_ns_chi03_cR::synapse0x2a41a70() {
   return (neuron0x2a3e360()*-1.11596);
}

double NNfunction_ns_chi03_cR::synapse0x2a41df0() {
   return (neuron0x2a397a0()*0.263202);
}

double NNfunction_ns_chi03_cR::synapse0x2a41e30() {
   return (neuron0x2a39ae0()*-0.121664);
}

double NNfunction_ns_chi03_cR::synapse0x2a41e70() {
   return (neuron0x2a39e20()*0.561717);
}

double NNfunction_ns_chi03_cR::synapse0x2a41eb0() {
   return (neuron0x2a3a160()*0.061497);
}

double NNfunction_ns_chi03_cR::synapse0x2a41ef0() {
   return (neuron0x2a3a4a0()*-0.133072);
}

double NNfunction_ns_chi03_cR::synapse0x2a41f30() {
   return (neuron0x2a3a7e0()*0.96062);
}

double NNfunction_ns_chi03_cR::synapse0x2a41f70() {
   return (neuron0x2a3ab20()*-0.159326);
}

double NNfunction_ns_chi03_cR::synapse0x2a41fb0() {
   return (neuron0x2a3ae60()*-0.0834804);
}

double NNfunction_ns_chi03_cR::synapse0x2a41ff0() {
   return (neuron0x2a3b1a0()*0.131552);
}

double NNfunction_ns_chi03_cR::synapse0x2a42030() {
   return (neuron0x2a3b4e0()*-0.0801671);
}

double NNfunction_ns_chi03_cR::synapse0x2a42070() {
   return (neuron0x2a3b820()*0.236452);
}

double NNfunction_ns_chi03_cR::synapse0x2a420b0() {
   return (neuron0x2a3bb60()*0.243811);
}

double NNfunction_ns_chi03_cR::synapse0x2a420f0() {
   return (neuron0x2a3bea0()*0.374113);
}

double NNfunction_ns_chi03_cR::synapse0x2a46230() {
   return (neuron0x2a3c1e0()*0.0242228);
}

double NNfunction_ns_chi03_cR::synapse0x2a46270() {
   return (neuron0x2a3c520()*0.504193);
}

double NNfunction_ns_chi03_cR::synapse0x2a462b0() {
   return (neuron0x2a3c860()*1.15023);
}

double NNfunction_ns_chi03_cR::synapse0x2a41c40() {
   return (neuron0x2a3cba0()*-0.189821);
}

double NNfunction_ns_chi03_cR::synapse0x2a41c80() {
   return (neuron0x2a3d100()*0.111273);
}

double NNfunction_ns_chi03_cR::synapse0x2a46400() {
   return (neuron0x2a3d320()*0.197024);
}

double NNfunction_ns_chi03_cR::synapse0x2a46440() {
   return (neuron0x2a3d660()*0.2322);
}

double NNfunction_ns_chi03_cR::synapse0x2a46480() {
   return (neuron0x2a3d9a0()*-0.0245525);
}

double NNfunction_ns_chi03_cR::synapse0x2a464c0() {
   return (neuron0x2a3dce0()*-0.0639794);
}

double NNfunction_ns_chi03_cR::synapse0x2a46500() {
   return (neuron0x2a3e020()*-0.0058377);
}

double NNfunction_ns_chi03_cR::synapse0x2a46540() {
   return (neuron0x2a3e360()*-0.104454);
}

double NNfunction_ns_chi03_cR::synapse0x2a468c0() {
   return (neuron0x2a397a0()*-0.0456835);
}

double NNfunction_ns_chi03_cR::synapse0x2a46900() {
   return (neuron0x2a39ae0()*2.37801);
}

double NNfunction_ns_chi03_cR::synapse0x2a46940() {
   return (neuron0x2a39e20()*-2.15981);
}

double NNfunction_ns_chi03_cR::synapse0x2a46980() {
   return (neuron0x2a3a160()*0.114904);
}

double NNfunction_ns_chi03_cR::synapse0x2a469c0() {
   return (neuron0x2a3a4a0()*0.00669359);
}

double NNfunction_ns_chi03_cR::synapse0x2a46a00() {
   return (neuron0x2a3a7e0()*-0.582298);
}

double NNfunction_ns_chi03_cR::synapse0x2a46a40() {
   return (neuron0x2a3ab20()*1.29816);
}

double NNfunction_ns_chi03_cR::synapse0x2a46a80() {
   return (neuron0x2a3ae60()*-0.235773);
}

double NNfunction_ns_chi03_cR::synapse0x2a46ac0() {
   return (neuron0x2a3b1a0()*0.48192);
}

double NNfunction_ns_chi03_cR::synapse0x2a46b00() {
   return (neuron0x2a3b4e0()*0.238883);
}

double NNfunction_ns_chi03_cR::synapse0x2a46b40() {
   return (neuron0x2a3b820()*0.225);
}

double NNfunction_ns_chi03_cR::synapse0x2a46b80() {
   return (neuron0x2a3bb60()*0.0172772);
}

double NNfunction_ns_chi03_cR::synapse0x2a46bc0() {
   return (neuron0x2a3bea0()*1.03648);
}

double NNfunction_ns_chi03_cR::synapse0x2a46c00() {
   return (neuron0x2a3c1e0()*-0.285519);
}

double NNfunction_ns_chi03_cR::synapse0x2a46c40() {
   return (neuron0x2a3c520()*0.839983);
}

double NNfunction_ns_chi03_cR::synapse0x2a46c80() {
   return (neuron0x2a3c860()*-0.507155);
}

double NNfunction_ns_chi03_cR::synapse0x2a46710() {
   return (neuron0x2a3cba0()*-0.424038);
}

double NNfunction_ns_chi03_cR::synapse0x2a46750() {
   return (neuron0x2a3d100()*-1.26737);
}

double NNfunction_ns_chi03_cR::synapse0x2a46dd0() {
   return (neuron0x2a3d320()*-0.240479);
}

double NNfunction_ns_chi03_cR::synapse0x2a46e10() {
   return (neuron0x2a3d660()*-0.219492);
}

double NNfunction_ns_chi03_cR::synapse0x2a46e50() {
   return (neuron0x2a3d9a0()*0.337108);
}

double NNfunction_ns_chi03_cR::synapse0x2a46e90() {
   return (neuron0x2a3dce0()*0.571969);
}

double NNfunction_ns_chi03_cR::synapse0x2a46ed0() {
   return (neuron0x2a3e020()*-0.446771);
}

double NNfunction_ns_chi03_cR::synapse0x2a46f10() {
   return (neuron0x2a3e360()*0.714965);
}

double NNfunction_ns_chi03_cR::synapse0x2a47290() {
   return (neuron0x2a397a0()*-0.000533524);
}

double NNfunction_ns_chi03_cR::synapse0x2a472d0() {
   return (neuron0x2a39ae0()*-1.52432);
}

double NNfunction_ns_chi03_cR::synapse0x2a47310() {
   return (neuron0x2a39e20()*0.172988);
}

double NNfunction_ns_chi03_cR::synapse0x2a47350() {
   return (neuron0x2a3a160()*0.0111451);
}

double NNfunction_ns_chi03_cR::synapse0x2a47390() {
   return (neuron0x2a3a4a0()*0.0491816);
}

double NNfunction_ns_chi03_cR::synapse0x2a473d0() {
   return (neuron0x2a3a7e0()*-0.0135031);
}

double NNfunction_ns_chi03_cR::synapse0x2a47410() {
   return (neuron0x2a3ab20()*-0.0136715);
}

double NNfunction_ns_chi03_cR::synapse0x2a47450() {
   return (neuron0x2a3ae60()*-0.0225869);
}

double NNfunction_ns_chi03_cR::synapse0x2a47490() {
   return (neuron0x2a3b1a0()*-0.0219555);
}

double NNfunction_ns_chi03_cR::synapse0x2a474d0() {
   return (neuron0x2a3b4e0()*-0.0498763);
}

double NNfunction_ns_chi03_cR::synapse0x2a47510() {
   return (neuron0x2a3b820()*-0.00642001);
}

double NNfunction_ns_chi03_cR::synapse0x2a47550() {
   return (neuron0x2a3bb60()*0.0203537);
}

double NNfunction_ns_chi03_cR::synapse0x2a47590() {
   return (neuron0x2a3bea0()*0.0394242);
}

double NNfunction_ns_chi03_cR::synapse0x2a475d0() {
   return (neuron0x2a3c1e0()*0.00662382);
}

double NNfunction_ns_chi03_cR::synapse0x2a47610() {
   return (neuron0x2a3c520()*-0.0258438);
}

double NNfunction_ns_chi03_cR::synapse0x2a47650() {
   return (neuron0x2a3c860()*-0.704526);
}

double NNfunction_ns_chi03_cR::synapse0x2a470e0() {
   return (neuron0x2a3cba0()*-0.0167958);
}

double NNfunction_ns_chi03_cR::synapse0x2a47120() {
   return (neuron0x2a3d100()*0.0206691);
}

double NNfunction_ns_chi03_cR::synapse0x2a477a0() {
   return (neuron0x2a3d320()*0.00248577);
}

double NNfunction_ns_chi03_cR::synapse0x2a477e0() {
   return (neuron0x2a3d660()*0.0331765);
}

double NNfunction_ns_chi03_cR::synapse0x2a47820() {
   return (neuron0x2a3d9a0()*-0.0158055);
}

double NNfunction_ns_chi03_cR::synapse0x2a47860() {
   return (neuron0x2a3dce0()*0.00351374);
}

double NNfunction_ns_chi03_cR::synapse0x2a478a0() {
   return (neuron0x2a3e020()*0.0123556);
}

double NNfunction_ns_chi03_cR::synapse0x2a478e0() {
   return (neuron0x2a3e360()*0.128269);
}

double NNfunction_ns_chi03_cR::synapse0x2a47c60() {
   return (neuron0x2a397a0()*-0.0169258);
}

double NNfunction_ns_chi03_cR::synapse0x2a47ca0() {
   return (neuron0x2a39ae0()*-0.222823);
}

double NNfunction_ns_chi03_cR::synapse0x2a47ce0() {
   return (neuron0x2a39e20()*-0.146172);
}

double NNfunction_ns_chi03_cR::synapse0x2a47d20() {
   return (neuron0x2a3a160()*-0.188137);
}

double NNfunction_ns_chi03_cR::synapse0x2a47d60() {
   return (neuron0x2a3a4a0()*-0.17649);
}

double NNfunction_ns_chi03_cR::synapse0x2a47da0() {
   return (neuron0x2a3a7e0()*0.0934697);
}

double NNfunction_ns_chi03_cR::synapse0x2a47de0() {
   return (neuron0x2a3ab20()*0.0630725);
}

double NNfunction_ns_chi03_cR::synapse0x2a47e20() {
   return (neuron0x2a3ae60()*0.0466046);
}

double NNfunction_ns_chi03_cR::synapse0x2a47e60() {
   return (neuron0x2a3b1a0()*-0.375792);
}

double NNfunction_ns_chi03_cR::synapse0x2a47ea0() {
   return (neuron0x2a3b4e0()*0.102195);
}

double NNfunction_ns_chi03_cR::synapse0x2a47ee0() {
   return (neuron0x2a3b820()*0.00579662);
}

double NNfunction_ns_chi03_cR::synapse0x2a47f20() {
   return (neuron0x2a3bb60()*-0.0668139);
}

double NNfunction_ns_chi03_cR::synapse0x2a47f60() {
   return (neuron0x2a3bea0()*-0.055415);
}

double NNfunction_ns_chi03_cR::synapse0x2a47fa0() {
   return (neuron0x2a3c1e0()*-0.0288565);
}

double NNfunction_ns_chi03_cR::synapse0x2a47fe0() {
   return (neuron0x2a3c520()*-0.0441678);
}

double NNfunction_ns_chi03_cR::synapse0x2a48020() {
   return (neuron0x2a3c860()*0.344106);
}

double NNfunction_ns_chi03_cR::synapse0x2a47ab0() {
   return (neuron0x2a3cba0()*0.00372405);
}

double NNfunction_ns_chi03_cR::synapse0x2a47af0() {
   return (neuron0x2a3d100()*-0.419901);
}

double NNfunction_ns_chi03_cR::synapse0x2a48170() {
   return (neuron0x2a3d320()*0.188048);
}

double NNfunction_ns_chi03_cR::synapse0x2a481b0() {
   return (neuron0x2a3d660()*0.0914569);
}

double NNfunction_ns_chi03_cR::synapse0x2a481f0() {
   return (neuron0x2a3d9a0()*0.00884196);
}

double NNfunction_ns_chi03_cR::synapse0x2a48230() {
   return (neuron0x2a3dce0()*0.0303847);
}

double NNfunction_ns_chi03_cR::synapse0x2a48270() {
   return (neuron0x2a3e020()*-0.0209373);
}

double NNfunction_ns_chi03_cR::synapse0x2a482b0() {
   return (neuron0x2a3e360()*0.641278);
}

double NNfunction_ns_chi03_cR::synapse0x2a48630() {
   return (neuron0x2a397a0()*-0.0406678);
}

double NNfunction_ns_chi03_cR::synapse0x2a399c0() {
   return (neuron0x2a39ae0()*-4.6342);
}

double NNfunction_ns_chi03_cR::synapse0x2a39a00() {
   return (neuron0x2a39e20()*-4.5616);
}

double NNfunction_ns_chi03_cR::synapse0x2a39d00() {
   return (neuron0x2a3a160()*-0.0412792);
}

double NNfunction_ns_chi03_cR::synapse0x2a39d40() {
   return (neuron0x2a3a4a0()*-0.0398992);
}

double NNfunction_ns_chi03_cR::synapse0x2a3a040() {
   return (neuron0x2a3a7e0()*-0.0371051);
}

double NNfunction_ns_chi03_cR::synapse0x2a3a080() {
   return (neuron0x2a3ab20()*-0.0657491);
}

double NNfunction_ns_chi03_cR::synapse0x2a3a380() {
   return (neuron0x2a3ae60()*-0.00543167);
}

double NNfunction_ns_chi03_cR::synapse0x2a3a3c0() {
   return (neuron0x2a3b1a0()*0.00227837);
}

double NNfunction_ns_chi03_cR::synapse0x2a3a6c0() {
   return (neuron0x2a3b4e0()*-0.0612962);
}

double NNfunction_ns_chi03_cR::synapse0x2a3a700() {
   return (neuron0x2a3b820()*0.0374253);
}

double NNfunction_ns_chi03_cR::synapse0x2a3aa00() {
   return (neuron0x2a3bb60()*-0.0108653);
}

double NNfunction_ns_chi03_cR::synapse0x2a3aa40() {
   return (neuron0x2a3bea0()*0.0529232);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ad40() {
   return (neuron0x2a3c1e0()*-0.000494625);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ad80() {
   return (neuron0x2a3c520()*0.0272383);
}

double NNfunction_ns_chi03_cR::synapse0x2a3b080() {
   return (neuron0x2a3c860()*0.0640365);
}

double NNfunction_ns_chi03_cR::synapse0x2a3b0c0() {
   return (neuron0x2a3cba0()*-0.00636045);
}

double NNfunction_ns_chi03_cR::synapse0x2a3b3c0() {
   return (neuron0x2a3d100()*-0.0231352);
}

double NNfunction_ns_chi03_cR::synapse0x2a3b400() {
   return (neuron0x2a3d320()*0.067653);
}

double NNfunction_ns_chi03_cR::synapse0x2a3b700() {
   return (neuron0x2a3d660()*-0.0153222);
}

double NNfunction_ns_chi03_cR::synapse0x2a3b740() {
   return (neuron0x2a3d9a0()*0.0114305);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ba40() {
   return (neuron0x2a3dce0()*-0.0401304);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ba80() {
   return (neuron0x2a3e020()*-0.0337266);
}

double NNfunction_ns_chi03_cR::synapse0x2a3bd80() {
   return (neuron0x2a3e360()*-1.46602);
}

double NNfunction_ns_chi03_cR::synapse0x2a3bdc0() {
   return (neuron0x2a397a0()*-0.248146);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ca80() {
   return (neuron0x2a39ae0()*2.8122);
}

double NNfunction_ns_chi03_cR::synapse0x2a3cac0() {
   return (neuron0x2a39e20()*-1.10058);
}

double NNfunction_ns_chi03_cR::synapse0x2a48480() {
   return (neuron0x2a3a160()*0.410193);
}

double NNfunction_ns_chi03_cR::synapse0x2a484c0() {
   return (neuron0x2a3a4a0()*-0.149681);
}

double NNfunction_ns_chi03_cR::synapse0x2a3cdc0() {
   return (neuron0x2a3a7e0()*-0.0297023);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ce00() {
   return (neuron0x2a3ab20()*-0.0488402);
}

double NNfunction_ns_chi03_cR::synapse0x27f4820() {
   return (neuron0x2a3ae60()*-0.340408);
}

double NNfunction_ns_chi03_cR::synapse0x27f4860() {
   return (neuron0x2a3b1a0()*-0.216272);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d540() {
   return (neuron0x2a3b4e0()*-0.647161);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d580() {
   return (neuron0x2a3b820()*-0.715436);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d880() {
   return (neuron0x2a3bb60()*0.339678);
}

double NNfunction_ns_chi03_cR::synapse0x2a3d8c0() {
   return (neuron0x2a3bea0()*-0.512464);
}

double NNfunction_ns_chi03_cR::synapse0x2a3dbc0() {
   return (neuron0x2a3c1e0()*0.257922);
}

double NNfunction_ns_chi03_cR::synapse0x2a3dc00() {
   return (neuron0x2a3c520()*0.547474);
}

double NNfunction_ns_chi03_cR::synapse0x2a3df00() {
   return (neuron0x2a3c860()*1.06872);
}

double NNfunction_ns_chi03_cR::synapse0x2a3df40() {
   return (neuron0x2a3cba0()*0.0377689);
}

double NNfunction_ns_chi03_cR::synapse0x2a3e240() {
   return (neuron0x2a3d100()*0.386169);
}

double NNfunction_ns_chi03_cR::synapse0x2a3e280() {
   return (neuron0x2a3d320()*-0.462932);
}

double NNfunction_ns_chi03_cR::synapse0x2a3e580() {
   return (neuron0x2a3d660()*0.282727);
}

double NNfunction_ns_chi03_cR::synapse0x2a3e5c0() {
   return (neuron0x2a3d9a0()*-0.201526);
}

double NNfunction_ns_chi03_cR::synapse0x2a3c0c0() {
   return (neuron0x2a3dce0()*0.355598);
}

double NNfunction_ns_chi03_cR::synapse0x2a3c100() {
   return (neuron0x2a3e020()*0.178391);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a3a0() {
   return (neuron0x2a3e360()*3.30917);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a720() {
   return (neuron0x2a397a0()*-1.26346);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a760() {
   return (neuron0x2a39ae0()*1.57415);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a7a0() {
   return (neuron0x2a39e20()*0.989508);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a7e0() {
   return (neuron0x2a3a160()*0.375236);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a820() {
   return (neuron0x2a3a4a0()*-0.390897);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a860() {
   return (neuron0x2a3a7e0()*-0.111701);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a8a0() {
   return (neuron0x2a3ab20()*-1.88873);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a8e0() {
   return (neuron0x2a3ae60()*-0.35221);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a920() {
   return (neuron0x2a3b1a0()*-1.23269);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a960() {
   return (neuron0x2a3b4e0()*-0.165817);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a9a0() {
   return (neuron0x2a3b820()*-0.106611);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a9e0() {
   return (neuron0x2a3bb60()*1.32567);
}

double NNfunction_ns_chi03_cR::synapse0x2a4aa20() {
   return (neuron0x2a3bea0()*-1.7653);
}

double NNfunction_ns_chi03_cR::synapse0x2a4aa60() {
   return (neuron0x2a3c1e0()*0.255293);
}

double NNfunction_ns_chi03_cR::synapse0x2a4aaa0() {
   return (neuron0x2a3c520()*-0.684255);
}

double NNfunction_ns_chi03_cR::synapse0x2a4aae0() {
   return (neuron0x2a3c860()*-0.75415);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a570() {
   return (neuron0x2a3cba0()*0.68875);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a5b0() {
   return (neuron0x2a3d100()*0.97693);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ac30() {
   return (neuron0x2a3d320()*0.106938);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ac70() {
   return (neuron0x2a3d660()*0.129813);
}

double NNfunction_ns_chi03_cR::synapse0x2a4acb0() {
   return (neuron0x2a3d9a0()*-0.443048);
}

double NNfunction_ns_chi03_cR::synapse0x2a4acf0() {
   return (neuron0x2a3dce0()*0.207659);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ad30() {
   return (neuron0x2a3e020()*0.198625);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ad70() {
   return (neuron0x2a3e360()*1.08883);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b0f0() {
   return (neuron0x2a397a0()*0.149407);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b130() {
   return (neuron0x2a39ae0()*-0.0584798);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b170() {
   return (neuron0x2a39e20()*0.175297);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b1b0() {
   return (neuron0x2a3a160()*-0.265977);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b1f0() {
   return (neuron0x2a3a4a0()*0.0057133);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b230() {
   return (neuron0x2a3a7e0()*-0.115364);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b270() {
   return (neuron0x2a3ab20()*0.0468467);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b2b0() {
   return (neuron0x2a3ae60()*0.240147);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b2f0() {
   return (neuron0x2a3b1a0()*-0.162344);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b330() {
   return (neuron0x2a3b4e0()*0.317575);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b370() {
   return (neuron0x2a3b820()*-0.324468);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b3b0() {
   return (neuron0x2a3bb60()*1.13048);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b3f0() {
   return (neuron0x2a3bea0()*-0.216662);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b430() {
   return (neuron0x2a3c1e0()*-0.0725142);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b470() {
   return (neuron0x2a3c520()*-0.043369);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b4b0() {
   return (neuron0x2a3c860()*-0.281401);
}

double NNfunction_ns_chi03_cR::synapse0x2a4af40() {
   return (neuron0x2a3cba0()*-0.0150289);
}

double NNfunction_ns_chi03_cR::synapse0x2a4af80() {
   return (neuron0x2a3d100()*-0.11656);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b600() {
   return (neuron0x2a3d320()*-0.160902);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b640() {
   return (neuron0x2a3d660()*0.113095);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b680() {
   return (neuron0x2a3d9a0()*-0.0146592);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b6c0() {
   return (neuron0x2a3dce0()*-0.080957);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b700() {
   return (neuron0x2a3e020()*0.0716943);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b740() {
   return (neuron0x2a3e360()*-0.390922);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bac0() {
   return (neuron0x2a397a0()*-0.0190413);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bb00() {
   return (neuron0x2a39ae0()*0.0367169);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bb40() {
   return (neuron0x2a39e20()*-0.0396754);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bb80() {
   return (neuron0x2a3a160()*0.0214489);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bbc0() {
   return (neuron0x2a3a4a0()*0.215395);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bc00() {
   return (neuron0x2a3a7e0()*0.307391);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bc40() {
   return (neuron0x2a3ab20()*-0.0220783);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bc80() {
   return (neuron0x2a3ae60()*-0.135533);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bcc0() {
   return (neuron0x2a3b1a0()*-0.0497797);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bd00() {
   return (neuron0x2a3b4e0()*2.79787e-05);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bd40() {
   return (neuron0x2a3b820()*-0.0366901);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bd80() {
   return (neuron0x2a3bb60()*-0.0438077);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bdc0() {
   return (neuron0x2a3bea0()*0.0416189);
}

double NNfunction_ns_chi03_cR::synapse0x2a4be00() {
   return (neuron0x2a3c1e0()*-0.0346464);
}

double NNfunction_ns_chi03_cR::synapse0x2a4be40() {
   return (neuron0x2a3c520()*0.00162707);
}

double NNfunction_ns_chi03_cR::synapse0x2a4be80() {
   return (neuron0x2a3c860()*-1.2781);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b910() {
   return (neuron0x2a3cba0()*0.0107647);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b950() {
   return (neuron0x2a3d100()*0.0345308);
}

double NNfunction_ns_chi03_cR::synapse0x2a4bfd0() {
   return (neuron0x2a3d320()*0.00977119);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c010() {
   return (neuron0x2a3d660()*0.0426317);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c050() {
   return (neuron0x2a3d9a0()*-0.0437378);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c090() {
   return (neuron0x2a3dce0()*0.0300831);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c0d0() {
   return (neuron0x2a3e020()*0.0242277);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c110() {
   return (neuron0x2a3e360()*0.124827);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c490() {
   return (neuron0x2a397a0()*-0.0120819);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c4d0() {
   return (neuron0x2a39ae0()*0.0130314);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c510() {
   return (neuron0x2a39e20()*0.041277);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c550() {
   return (neuron0x2a3a160()*1.33436);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c590() {
   return (neuron0x2a3a4a0()*-0.0161343);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c5d0() {
   return (neuron0x2a3a7e0()*-0.0479116);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c610() {
   return (neuron0x2a3ab20()*0.00539157);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c650() {
   return (neuron0x2a3ae60()*0.00148297);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c690() {
   return (neuron0x2a3b1a0()*0.0257525);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c6d0() {
   return (neuron0x2a3b4e0()*-0.0295179);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c710() {
   return (neuron0x2a3b820()*-0.0430899);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c750() {
   return (neuron0x2a3bb60()*-0.074895);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c790() {
   return (neuron0x2a3bea0()*-0.0730256);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c7d0() {
   return (neuron0x2a3c1e0()*-0.00737229);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c810() {
   return (neuron0x2a3c520()*0.0948077);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c850() {
   return (neuron0x2a3c860()*0.033959);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c2e0() {
   return (neuron0x2a3cba0()*0.0166217);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c320() {
   return (neuron0x2a3d100()*-0.0857718);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c9a0() {
   return (neuron0x2a3d320()*-0.0404528);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c9e0() {
   return (neuron0x2a3d660()*-0.0853263);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ca20() {
   return (neuron0x2a3d9a0()*0.0318816);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ca60() {
   return (neuron0x2a3dce0()*0.0157673);
}

double NNfunction_ns_chi03_cR::synapse0x2a4caa0() {
   return (neuron0x2a3e020()*0.0291391);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cae0() {
   return (neuron0x2a3e360()*-0.0771411);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ce60() {
   return (neuron0x2a397a0()*-0.0413793);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cea0() {
   return (neuron0x2a39ae0()*0.057129);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cee0() {
   return (neuron0x2a39e20()*0.0617637);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cf20() {
   return (neuron0x2a3a160()*0.454913);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cf60() {
   return (neuron0x2a3a4a0()*0.0549682);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cfa0() {
   return (neuron0x2a3a7e0()*-0.243036);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cfe0() {
   return (neuron0x2a3ab20()*-0.103871);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d020() {
   return (neuron0x2a3ae60()*-0.0169224);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d060() {
   return (neuron0x2a3b1a0()*0.0547754);
}

double NNfunction_ns_chi03_cR::synapse0x2a45220() {
   return (neuron0x2a3b4e0()*-0.0326069);
}

double NNfunction_ns_chi03_cR::synapse0x2a45260() {
   return (neuron0x2a3b820()*-0.00433751);
}

double NNfunction_ns_chi03_cR::synapse0x2a452a0() {
   return (neuron0x2a3bb60()*0.0673707);
}

double NNfunction_ns_chi03_cR::synapse0x2a452e0() {
   return (neuron0x2a3bea0()*0.100183);
}

double NNfunction_ns_chi03_cR::synapse0x2a45320() {
   return (neuron0x2a3c1e0()*0.141511);
}

double NNfunction_ns_chi03_cR::synapse0x2a45360() {
   return (neuron0x2a3c520()*0.820098);
}

double NNfunction_ns_chi03_cR::synapse0x2a453a0() {
   return (neuron0x2a3c860()*-0.429226);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ccb0() {
   return (neuron0x2a3cba0()*0.334511);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ccf0() {
   return (neuron0x2a3d100()*-0.0189422);
}

double NNfunction_ns_chi03_cR::synapse0x2a454f0() {
   return (neuron0x2a3d320()*-0.0707787);
}

double NNfunction_ns_chi03_cR::synapse0x2a45530() {
   return (neuron0x2a3d660()*0.12987);
}

double NNfunction_ns_chi03_cR::synapse0x2a45570() {
   return (neuron0x2a3d9a0()*0.0177332);
}

double NNfunction_ns_chi03_cR::synapse0x2a455b0() {
   return (neuron0x2a3dce0()*0.0465348);
}

double NNfunction_ns_chi03_cR::synapse0x2a455f0() {
   return (neuron0x2a3e020()*0.00142308);
}

double NNfunction_ns_chi03_cR::synapse0x2a45630() {
   return (neuron0x2a3e360()*0.059899);
}

double NNfunction_ns_chi03_cR::synapse0x2a459b0() {
   return (neuron0x2a397a0()*0.583343);
}

double NNfunction_ns_chi03_cR::synapse0x2a459f0() {
   return (neuron0x2a39ae0()*-0.316346);
}

double NNfunction_ns_chi03_cR::synapse0x2a45a30() {
   return (neuron0x2a39e20()*-1.09084);
}

double NNfunction_ns_chi03_cR::synapse0x2a45a70() {
   return (neuron0x2a3a160()*0.728169);
}

double NNfunction_ns_chi03_cR::synapse0x2a45ab0() {
   return (neuron0x2a3a4a0()*-0.661006);
}

double NNfunction_ns_chi03_cR::synapse0x2a45af0() {
   return (neuron0x2a3a7e0()*1.24548);
}

double NNfunction_ns_chi03_cR::synapse0x2a45b30() {
   return (neuron0x2a3ab20()*-0.732962);
}

double NNfunction_ns_chi03_cR::synapse0x2a45b70() {
   return (neuron0x2a3ae60()*-0.271123);
}

double NNfunction_ns_chi03_cR::synapse0x2a45bb0() {
   return (neuron0x2a3b1a0()*0.195717);
}

double NNfunction_ns_chi03_cR::synapse0x2a45bf0() {
   return (neuron0x2a3b4e0()*-0.36794);
}

double NNfunction_ns_chi03_cR::synapse0x2a45c30() {
   return (neuron0x2a3b820()*-0.749866);
}

double NNfunction_ns_chi03_cR::synapse0x2a45c70() {
   return (neuron0x2a3bb60()*-0.366751);
}

double NNfunction_ns_chi03_cR::synapse0x2a45cb0() {
   return (neuron0x2a3bea0()*-0.857037);
}

double NNfunction_ns_chi03_cR::synapse0x2a45cf0() {
   return (neuron0x2a3c1e0()*1.27838);
}

double NNfunction_ns_chi03_cR::synapse0x2a45d30() {
   return (neuron0x2a3c520()*-1.18397);
}

double NNfunction_ns_chi03_cR::synapse0x2a45d70() {
   return (neuron0x2a3c860()*-0.36888);
}

double NNfunction_ns_chi03_cR::synapse0x2a45800() {
   return (neuron0x2a3cba0()*-0.0192921);
}

double NNfunction_ns_chi03_cR::synapse0x2a45840() {
   return (neuron0x2a3d100()*-0.944);
}

double NNfunction_ns_chi03_cR::synapse0x2a45ec0() {
   return (neuron0x2a3d320()*-0.134398);
}

double NNfunction_ns_chi03_cR::synapse0x2a45f00() {
   return (neuron0x2a3d660()*0.856016);
}

double NNfunction_ns_chi03_cR::synapse0x2a45f40() {
   return (neuron0x2a3d9a0()*-0.407344);
}

double NNfunction_ns_chi03_cR::synapse0x2a45f80() {
   return (neuron0x2a3dce0()*-0.773396);
}

double NNfunction_ns_chi03_cR::synapse0x2a45fc0() {
   return (neuron0x2a3e020()*0.631497);
}

double NNfunction_ns_chi03_cR::synapse0x2a46000() {
   return (neuron0x2a3e360()*-0.690766);
}

double NNfunction_ns_chi03_cR::synapse0x2a461d0() {
   return (neuron0x2a397a0()*0.153691);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f260() {
   return (neuron0x2a39ae0()*-0.283132);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f2a0() {
   return (neuron0x2a39e20()*-0.138187);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f2e0() {
   return (neuron0x2a3a160()*-0.0863917);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f320() {
   return (neuron0x2a3a4a0()*0.10323);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f360() {
   return (neuron0x2a3a7e0()*-0.0076298);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f3a0() {
   return (neuron0x2a3ab20()*0.124039);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f3e0() {
   return (neuron0x2a3ae60()*-0.275043);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f420() {
   return (neuron0x2a3b1a0()*-0.8674);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f460() {
   return (neuron0x2a3b4e0()*-1.51681);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f4a0() {
   return (neuron0x2a3b820()*-0.168205);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f4e0() {
   return (neuron0x2a3bb60()*0.267259);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f520() {
   return (neuron0x2a3bea0()*0.163662);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f560() {
   return (neuron0x2a3c1e0()*0.0905234);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f5a0() {
   return (neuron0x2a3c520()*-0.0234712);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f5e0() {
   return (neuron0x2a3c860()*0.07218);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f0b0() {
   return (neuron0x2a3cba0()*-0.189587);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f0f0() {
   return (neuron0x2a3d100()*0.123442);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f730() {
   return (neuron0x2a3d320()*0.114317);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f770() {
   return (neuron0x2a3d660()*0.00218545);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f7b0() {
   return (neuron0x2a3d9a0()*-0.00132803);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f7f0() {
   return (neuron0x2a3dce0()*0.0127978);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f830() {
   return (neuron0x2a3e020()*-0.0542467);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f870() {
   return (neuron0x2a3e360()*-0.395611);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fbf0() {
   return (neuron0x2a397a0()*0.00527775);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fc30() {
   return (neuron0x2a39ae0()*4.6589);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fc70() {
   return (neuron0x2a39e20()*-1.41946);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fcb0() {
   return (neuron0x2a3a160()*0.0486198);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fcf0() {
   return (neuron0x2a3a4a0()*-0.107648);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fd30() {
   return (neuron0x2a3a7e0()*-0.0168528);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fd70() {
   return (neuron0x2a3ab20()*-0.0288903);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fdb0() {
   return (neuron0x2a3ae60()*-0.0324224);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fdf0() {
   return (neuron0x2a3b1a0()*-0.0137902);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fe30() {
   return (neuron0x2a3b4e0()*-0.0157325);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fe70() {
   return (neuron0x2a3b820()*-0.0718782);
}

double NNfunction_ns_chi03_cR::synapse0x2a4feb0() {
   return (neuron0x2a3bb60()*-0.035622);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fef0() {
   return (neuron0x2a3bea0()*0.0589637);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ff30() {
   return (neuron0x2a3c1e0()*-0.00296315);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ff70() {
   return (neuron0x2a3c520()*-0.0150218);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ffb0() {
   return (neuron0x2a3c860()*-0.147733);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fa40() {
   return (neuron0x2a3cba0()*0.0508369);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fa80() {
   return (neuron0x2a3d100()*-0.0100186);
}

double NNfunction_ns_chi03_cR::synapse0x2a50100() {
   return (neuron0x2a3d320()*0.0343079);
}

double NNfunction_ns_chi03_cR::synapse0x2a50140() {
   return (neuron0x2a3d660()*0.0471303);
}

double NNfunction_ns_chi03_cR::synapse0x2a50180() {
   return (neuron0x2a3d9a0()*-0.0209132);
}

double NNfunction_ns_chi03_cR::synapse0x2a501c0() {
   return (neuron0x2a3dce0()*0.0654282);
}

double NNfunction_ns_chi03_cR::synapse0x2a50200() {
   return (neuron0x2a3e020()*-0.0232672);
}

double NNfunction_ns_chi03_cR::synapse0x2a50240() {
   return (neuron0x2a3e360()*-1.50013);
}

double NNfunction_ns_chi03_cR::synapse0x2a505c0() {
   return (neuron0x2a397a0()*0.0755067);
}

double NNfunction_ns_chi03_cR::synapse0x2a50600() {
   return (neuron0x2a39ae0()*2.69134);
}

double NNfunction_ns_chi03_cR::synapse0x2a50640() {
   return (neuron0x2a39e20()*0.441928);
}

double NNfunction_ns_chi03_cR::synapse0x2a50680() {
   return (neuron0x2a3a160()*-0.00878882);
}

double NNfunction_ns_chi03_cR::synapse0x2a506c0() {
   return (neuron0x2a3a4a0()*0.035908);
}

double NNfunction_ns_chi03_cR::synapse0x2a50700() {
   return (neuron0x2a3a7e0()*-0.0199622);
}

double NNfunction_ns_chi03_cR::synapse0x2a50740() {
   return (neuron0x2a3ab20()*0.0158741);
}

double NNfunction_ns_chi03_cR::synapse0x2a50780() {
   return (neuron0x2a3ae60()*0.0328626);
}

double NNfunction_ns_chi03_cR::synapse0x2a507c0() {
   return (neuron0x2a3b1a0()*0.0139909);
}

double NNfunction_ns_chi03_cR::synapse0x2a50800() {
   return (neuron0x2a3b4e0()*-0.0160069);
}

double NNfunction_ns_chi03_cR::synapse0x2a50840() {
   return (neuron0x2a3b820()*0.0131843);
}

double NNfunction_ns_chi03_cR::synapse0x2a50880() {
   return (neuron0x2a3bb60()*-0.00889637);
}

double NNfunction_ns_chi03_cR::synapse0x2a508c0() {
   return (neuron0x2a3bea0()*0.0390957);
}

double NNfunction_ns_chi03_cR::synapse0x2a50900() {
   return (neuron0x2a3c1e0()*-0.0391659);
}

double NNfunction_ns_chi03_cR::synapse0x2a50940() {
   return (neuron0x2a3c520()*0.00403624);
}

double NNfunction_ns_chi03_cR::synapse0x2a50980() {
   return (neuron0x2a3c860()*-0.493516);
}

double NNfunction_ns_chi03_cR::synapse0x2a50410() {
   return (neuron0x2a3cba0()*0.000910288);
}

double NNfunction_ns_chi03_cR::synapse0x2a50450() {
   return (neuron0x2a3d100()*0.0332279);
}

double NNfunction_ns_chi03_cR::synapse0x2a50ad0() {
   return (neuron0x2a3d320()*-0.0405584);
}

double NNfunction_ns_chi03_cR::synapse0x2a50b10() {
   return (neuron0x2a3d660()*-0.0126919);
}

double NNfunction_ns_chi03_cR::synapse0x2a50b50() {
   return (neuron0x2a3d9a0()*0.0107129);
}

double NNfunction_ns_chi03_cR::synapse0x2a50b90() {
   return (neuron0x2a3dce0()*0.0416307);
}

double NNfunction_ns_chi03_cR::synapse0x2a50bd0() {
   return (neuron0x2a3e020()*-0.0102933);
}

double NNfunction_ns_chi03_cR::synapse0x2a50c10() {
   return (neuron0x2a3e360()*-0.00675427);
}

double NNfunction_ns_chi03_cR::synapse0x2a50f90() {
   return (neuron0x2a397a0()*0.13437);
}

double NNfunction_ns_chi03_cR::synapse0x2a50fd0() {
   return (neuron0x2a39ae0()*3.10325);
}

double NNfunction_ns_chi03_cR::synapse0x2a51010() {
   return (neuron0x2a39e20()*0.702688);
}

double NNfunction_ns_chi03_cR::synapse0x2a51050() {
   return (neuron0x2a3a160()*-0.122459);
}

double NNfunction_ns_chi03_cR::synapse0x2a51090() {
   return (neuron0x2a3a4a0()*-0.0431591);
}

double NNfunction_ns_chi03_cR::synapse0x2a510d0() {
   return (neuron0x2a3a7e0()*-0.0295134);
}

double NNfunction_ns_chi03_cR::synapse0x2a51110() {
   return (neuron0x2a3ab20()*-0.0396847);
}

double NNfunction_ns_chi03_cR::synapse0x2a51150() {
   return (neuron0x2a3ae60()*0.0199873);
}

double NNfunction_ns_chi03_cR::synapse0x2a51190() {
   return (neuron0x2a3b1a0()*0.019672);
}

double NNfunction_ns_chi03_cR::synapse0x2a511d0() {
   return (neuron0x2a3b4e0()*-0.0530428);
}

double NNfunction_ns_chi03_cR::synapse0x2a51210() {
   return (neuron0x2a3b820()*-0.0362079);
}

double NNfunction_ns_chi03_cR::synapse0x2a51250() {
   return (neuron0x2a3bb60()*-0.00661699);
}

double NNfunction_ns_chi03_cR::synapse0x2a51290() {
   return (neuron0x2a3bea0()*0.0356695);
}

double NNfunction_ns_chi03_cR::synapse0x2a512d0() {
   return (neuron0x2a3c1e0()*0.0180498);
}

double NNfunction_ns_chi03_cR::synapse0x2a51310() {
   return (neuron0x2a3c520()*-0.0494707);
}

double NNfunction_ns_chi03_cR::synapse0x2a51350() {
   return (neuron0x2a3c860()*0.81234);
}

double NNfunction_ns_chi03_cR::synapse0x2a50de0() {
   return (neuron0x2a3cba0()*-0.0396264);
}

double NNfunction_ns_chi03_cR::synapse0x2a50e20() {
   return (neuron0x2a3d100()*-0.0400281);
}

double NNfunction_ns_chi03_cR::synapse0x2a514a0() {
   return (neuron0x2a3d320()*0.0166832);
}

double NNfunction_ns_chi03_cR::synapse0x2a514e0() {
   return (neuron0x2a3d660()*0.0494748);
}

double NNfunction_ns_chi03_cR::synapse0x2a51520() {
   return (neuron0x2a3d9a0()*0.0162365);
}

double NNfunction_ns_chi03_cR::synapse0x2a51560() {
   return (neuron0x2a3dce0()*0.0606297);
}

double NNfunction_ns_chi03_cR::synapse0x2a515a0() {
   return (neuron0x2a3e020()*-0.0171547);
}

double NNfunction_ns_chi03_cR::synapse0x2a515e0() {
   return (neuron0x2a3e360()*0.365321);
}

double NNfunction_ns_chi03_cR::synapse0x2a51960() {
   return (neuron0x2a397a0()*-1.21412);
}

double NNfunction_ns_chi03_cR::synapse0x2a519a0() {
   return (neuron0x2a39ae0()*-0.0841329);
}

double NNfunction_ns_chi03_cR::synapse0x2a519e0() {
   return (neuron0x2a39e20()*-0.75396);
}

double NNfunction_ns_chi03_cR::synapse0x2a51a20() {
   return (neuron0x2a3a160()*0.484726);
}

double NNfunction_ns_chi03_cR::synapse0x2a51a60() {
   return (neuron0x2a3a4a0()*0.102035);
}

double NNfunction_ns_chi03_cR::synapse0x2a51aa0() {
   return (neuron0x2a3a7e0()*-0.413483);
}

double NNfunction_ns_chi03_cR::synapse0x2a51ae0() {
   return (neuron0x2a3ab20()*0.00624795);
}

double NNfunction_ns_chi03_cR::synapse0x2a51b20() {
   return (neuron0x2a3ae60()*0.44928);
}

double NNfunction_ns_chi03_cR::synapse0x2a51b60() {
   return (neuron0x2a3b1a0()*-0.367771);
}

double NNfunction_ns_chi03_cR::synapse0x2a51ba0() {
   return (neuron0x2a3b4e0()*-0.0192447);
}

double NNfunction_ns_chi03_cR::synapse0x2a51be0() {
   return (neuron0x2a3b820()*-0.881798);
}

double NNfunction_ns_chi03_cR::synapse0x2a51c20() {
   return (neuron0x2a3bb60()*-0.732619);
}

double NNfunction_ns_chi03_cR::synapse0x2a51c60() {
   return (neuron0x2a3bea0()*-0.747838);
}

double NNfunction_ns_chi03_cR::synapse0x2a51ca0() {
   return (neuron0x2a3c1e0()*-0.0843421);
}

double NNfunction_ns_chi03_cR::synapse0x2a51ce0() {
   return (neuron0x2a3c520()*0.67719);
}

double NNfunction_ns_chi03_cR::synapse0x2a51d20() {
   return (neuron0x2a3c860()*0.557712);
}

double NNfunction_ns_chi03_cR::synapse0x2a517b0() {
   return (neuron0x2a3cba0()*1.20864);
}

double NNfunction_ns_chi03_cR::synapse0x2a517f0() {
   return (neuron0x2a3d100()*-0.266962);
}

double NNfunction_ns_chi03_cR::synapse0x2a51e70() {
   return (neuron0x2a3d320()*-0.802172);
}

double NNfunction_ns_chi03_cR::synapse0x2a51eb0() {
   return (neuron0x2a3d660()*-0.440561);
}

double NNfunction_ns_chi03_cR::synapse0x2a51ef0() {
   return (neuron0x2a3d9a0()*-0.191477);
}

double NNfunction_ns_chi03_cR::synapse0x2a51f30() {
   return (neuron0x2a3dce0()*0.0377291);
}

double NNfunction_ns_chi03_cR::synapse0x2a51f70() {
   return (neuron0x2a3e020()*0.0817135);
}

double NNfunction_ns_chi03_cR::synapse0x2a51fb0() {
   return (neuron0x2a3e360()*1.51222);
}

double NNfunction_ns_chi03_cR::synapse0x2a52330() {
   return (neuron0x2a397a0()*0.147599);
}

double NNfunction_ns_chi03_cR::synapse0x2a52370() {
   return (neuron0x2a39ae0()*-0.160478);
}

double NNfunction_ns_chi03_cR::synapse0x2a523b0() {
   return (neuron0x2a39e20()*-0.0959691);
}

double NNfunction_ns_chi03_cR::synapse0x2a523f0() {
   return (neuron0x2a3a160()*-0.438395);
}

double NNfunction_ns_chi03_cR::synapse0x2a52430() {
   return (neuron0x2a3a4a0()*-0.712529);
}

double NNfunction_ns_chi03_cR::synapse0x2a52470() {
   return (neuron0x2a3a7e0()*0.328299);
}

double NNfunction_ns_chi03_cR::synapse0x2a524b0() {
   return (neuron0x2a3ab20()*0.447536);
}

double NNfunction_ns_chi03_cR::synapse0x2a524f0() {
   return (neuron0x2a3ae60()*0.331433);
}

double NNfunction_ns_chi03_cR::synapse0x2a52530() {
   return (neuron0x2a3b1a0()*0.086856);
}

double NNfunction_ns_chi03_cR::synapse0x2a52570() {
   return (neuron0x2a3b4e0()*0.170877);
}

double NNfunction_ns_chi03_cR::synapse0x2a525b0() {
   return (neuron0x2a3b820()*-0.0571495);
}

double NNfunction_ns_chi03_cR::synapse0x2a525f0() {
   return (neuron0x2a3bb60()*0.261531);
}

double NNfunction_ns_chi03_cR::synapse0x2a52630() {
   return (neuron0x2a3bea0()*0.0314268);
}

double NNfunction_ns_chi03_cR::synapse0x2a52670() {
   return (neuron0x2a3c1e0()*-0.0603958);
}

double NNfunction_ns_chi03_cR::synapse0x2a526b0() {
   return (neuron0x2a3c520()*0.143962);
}

double NNfunction_ns_chi03_cR::synapse0x2a526f0() {
   return (neuron0x2a3c860()*-0.807703);
}

double NNfunction_ns_chi03_cR::synapse0x2a52180() {
   return (neuron0x2a3cba0()*0.0914583);
}

double NNfunction_ns_chi03_cR::synapse0x2a521c0() {
   return (neuron0x2a3d100()*-0.360071);
}

double NNfunction_ns_chi03_cR::synapse0x2a52840() {
   return (neuron0x2a3d320()*0.0844487);
}

double NNfunction_ns_chi03_cR::synapse0x2a52880() {
   return (neuron0x2a3d660()*0.153812);
}

double NNfunction_ns_chi03_cR::synapse0x2a528c0() {
   return (neuron0x2a3d9a0()*-0.0517228);
}

double NNfunction_ns_chi03_cR::synapse0x2a52900() {
   return (neuron0x2a3dce0()*-0.0055347);
}

double NNfunction_ns_chi03_cR::synapse0x2a52940() {
   return (neuron0x2a3e020()*-0.317069);
}

double NNfunction_ns_chi03_cR::synapse0x2a52980() {
   return (neuron0x2a3e360()*1.01056);
}

double NNfunction_ns_chi03_cR::synapse0x2a52d00() {
   return (neuron0x2a397a0()*-0.0039091);
}

double NNfunction_ns_chi03_cR::synapse0x2a52d40() {
   return (neuron0x2a39ae0()*0.000638851);
}

double NNfunction_ns_chi03_cR::synapse0x2a52d80() {
   return (neuron0x2a39e20()*-0.0279716);
}

double NNfunction_ns_chi03_cR::synapse0x2a52dc0() {
   return (neuron0x2a3a160()*1.4932);
}

double NNfunction_ns_chi03_cR::synapse0x2a52e00() {
   return (neuron0x2a3a4a0()*-0.0225389);
}

double NNfunction_ns_chi03_cR::synapse0x2a52e40() {
   return (neuron0x2a3a7e0()*-0.0308754);
}

double NNfunction_ns_chi03_cR::synapse0x2a52e80() {
   return (neuron0x2a3ab20()*-0.0153436);
}

double NNfunction_ns_chi03_cR::synapse0x2a52ec0() {
   return (neuron0x2a3ae60()*0.0252606);
}

double NNfunction_ns_chi03_cR::synapse0x2a52f00() {
   return (neuron0x2a3b1a0()*-0.0162229);
}

double NNfunction_ns_chi03_cR::synapse0x2a52f40() {
   return (neuron0x2a3b4e0()*-0.0600444);
}

double NNfunction_ns_chi03_cR::synapse0x2a52f80() {
   return (neuron0x2a3b820()*-0.0473051);
}

double NNfunction_ns_chi03_cR::synapse0x2a52fc0() {
   return (neuron0x2a3bb60()*-0.0765898);
}

double NNfunction_ns_chi03_cR::synapse0x2a53000() {
   return (neuron0x2a3bea0()*-0.0754977);
}

double NNfunction_ns_chi03_cR::synapse0x2a53040() {
   return (neuron0x2a3c1e0()*0.0599592);
}

double NNfunction_ns_chi03_cR::synapse0x2a53080() {
   return (neuron0x2a3c520()*0.070769);
}

double NNfunction_ns_chi03_cR::synapse0x2a530c0() {
   return (neuron0x2a3c860()*0.287084);
}

double NNfunction_ns_chi03_cR::synapse0x2a52b50() {
   return (neuron0x2a3cba0()*0.0180191);
}

double NNfunction_ns_chi03_cR::synapse0x2a52b90() {
   return (neuron0x2a3d100()*-0.0996476);
}

double NNfunction_ns_chi03_cR::synapse0x2a53210() {
   return (neuron0x2a3d320()*-0.012632);
}

double NNfunction_ns_chi03_cR::synapse0x2a53250() {
   return (neuron0x2a3d660()*-0.0798032);
}

double NNfunction_ns_chi03_cR::synapse0x2a53290() {
   return (neuron0x2a3d9a0()*0.0202946);
}

double NNfunction_ns_chi03_cR::synapse0x2a532d0() {
   return (neuron0x2a3dce0()*0.000548566);
}

double NNfunction_ns_chi03_cR::synapse0x2a53310() {
   return (neuron0x2a3e020()*0.0233008);
}

double NNfunction_ns_chi03_cR::synapse0x2a53350() {
   return (neuron0x2a3e360()*-0.0913776);
}

double NNfunction_ns_chi03_cR::synapse0x2a536d0() {
   return (neuron0x2a397a0()*0.0231079);
}

double NNfunction_ns_chi03_cR::synapse0x2a53710() {
   return (neuron0x2a39ae0()*0.114699);
}

double NNfunction_ns_chi03_cR::synapse0x2a53750() {
   return (neuron0x2a39e20()*-0.217656);
}

double NNfunction_ns_chi03_cR::synapse0x2a53790() {
   return (neuron0x2a3a160()*0.0221417);
}

double NNfunction_ns_chi03_cR::synapse0x2a537d0() {
   return (neuron0x2a3a4a0()*0.0518775);
}

double NNfunction_ns_chi03_cR::synapse0x2a53810() {
   return (neuron0x2a3a7e0()*-0.0273413);
}

double NNfunction_ns_chi03_cR::synapse0x2a53850() {
   return (neuron0x2a3ab20()*0.0167479);
}

double NNfunction_ns_chi03_cR::synapse0x2a53890() {
   return (neuron0x2a3ae60()*0.0228684);
}

double NNfunction_ns_chi03_cR::synapse0x2a538d0() {
   return (neuron0x2a3b1a0()*0.0115715);
}

double NNfunction_ns_chi03_cR::synapse0x2a53910() {
   return (neuron0x2a3b4e0()*0.0339874);
}

double NNfunction_ns_chi03_cR::synapse0x2a53950() {
   return (neuron0x2a3b820()*-0.0133912);
}

double NNfunction_ns_chi03_cR::synapse0x2a53990() {
   return (neuron0x2a3bb60()*0.0283736);
}

double NNfunction_ns_chi03_cR::synapse0x2a539d0() {
   return (neuron0x2a3bea0()*-0.00404785);
}

double NNfunction_ns_chi03_cR::synapse0x2a53a10() {
   return (neuron0x2a3c1e0()*0.00798855);
}

double NNfunction_ns_chi03_cR::synapse0x2a53a50() {
   return (neuron0x2a3c520()*-0.0357119);
}

double NNfunction_ns_chi03_cR::synapse0x2a53a90() {
   return (neuron0x2a3c860()*-0.550972);
}

double NNfunction_ns_chi03_cR::synapse0x2a53520() {
   return (neuron0x2a3cba0()*0.00471495);
}

double NNfunction_ns_chi03_cR::synapse0x2a53560() {
   return (neuron0x2a3d100()*0.0998672);
}

double NNfunction_ns_chi03_cR::synapse0x2a53be0() {
   return (neuron0x2a3d320()*-0.0101597);
}

double NNfunction_ns_chi03_cR::synapse0x2a53c20() {
   return (neuron0x2a3d660()*-0.0383213);
}

double NNfunction_ns_chi03_cR::synapse0x2a53c60() {
   return (neuron0x2a3d9a0()*-0.00238266);
}

double NNfunction_ns_chi03_cR::synapse0x2a53ca0() {
   return (neuron0x2a3dce0()*-0.018101);
}

double NNfunction_ns_chi03_cR::synapse0x2a53ce0() {
   return (neuron0x2a3e020()*-0.0114919);
}

double NNfunction_ns_chi03_cR::synapse0x2a53d20() {
   return (neuron0x2a3e360()*-0.874441);
}

double NNfunction_ns_chi03_cR::synapse0x2a540a0() {
   return (neuron0x2a397a0()*0.156621);
}

double NNfunction_ns_chi03_cR::synapse0x2a48670() {
   return (neuron0x2a39ae0()*-1.68586);
}

double NNfunction_ns_chi03_cR::synapse0x2a486b0() {
   return (neuron0x2a39e20()*4.68265);
}

double NNfunction_ns_chi03_cR::synapse0x2a486f0() {
   return (neuron0x2a3a160()*-0.161811);
}

double NNfunction_ns_chi03_cR::synapse0x2a48940() {
   return (neuron0x2a3a4a0()*-0.105357);
}

double NNfunction_ns_chi03_cR::synapse0x2a48980() {
   return (neuron0x2a3a7e0()*-0.13323);
}

double NNfunction_ns_chi03_cR::synapse0x2a489c0() {
   return (neuron0x2a3ab20()*-0.130874);
}

double NNfunction_ns_chi03_cR::synapse0x2a48c10() {
   return (neuron0x2a3ae60()*-0.0954587);
}

double NNfunction_ns_chi03_cR::synapse0x2a48c50() {
   return (neuron0x2a3b1a0()*0.216577);
}

double NNfunction_ns_chi03_cR::synapse0x2a48ea0() {
   return (neuron0x2a3b4e0()*-0.0432554);
}

double NNfunction_ns_chi03_cR::synapse0x2a48ee0() {
   return (neuron0x2a3b820()*-0.010032);
}

double NNfunction_ns_chi03_cR::synapse0x2a48f20() {
   return (neuron0x2a3bb60()*0.150638);
}

double NNfunction_ns_chi03_cR::synapse0x2a49170() {
   return (neuron0x2a3bea0()*0.0374926);
}

double NNfunction_ns_chi03_cR::synapse0x2a491b0() {
   return (neuron0x2a3c1e0()*0.168962);
}

double NNfunction_ns_chi03_cR::synapse0x2a49400() {
   return (neuron0x2a3c520()*0.147328);
}

double NNfunction_ns_chi03_cR::synapse0x2a49440() {
   return (neuron0x2a3c860()*1.53166);
}

double NNfunction_ns_chi03_cR::synapse0x2a53ef0() {
   return (neuron0x2a3cba0()*-0.0180371);
}

double NNfunction_ns_chi03_cR::synapse0x2a53f30() {
   return (neuron0x2a3d100()*-0.15821);
}

double NNfunction_ns_chi03_cR::synapse0x2a49590() {
   return (neuron0x2a3d320()*-0.0477328);
}

double NNfunction_ns_chi03_cR::synapse0x2a49aa0() {
   return (neuron0x2a3d660()*0.0263433);
}

double NNfunction_ns_chi03_cR::synapse0x2a49ae0() {
   return (neuron0x2a3d9a0()*-0.0301199);
}

double NNfunction_ns_chi03_cR::synapse0x2a49b20() {
   return (neuron0x2a3dce0()*0.0123587);
}

double NNfunction_ns_chi03_cR::synapse0x2a49d70() {
   return (neuron0x2a3e020()*-0.0685624);
}

double NNfunction_ns_chi03_cR::synapse0x2a49db0() {
   return (neuron0x2a3e360()*0.166035);
}

double NNfunction_ns_chi03_cR::synapse0x2a49660() {
   return (neuron0x2a397a0()*-0.0466619);
}

double NNfunction_ns_chi03_cR::synapse0x2a496a0() {
   return (neuron0x2a39ae0()*-0.465183);
}

double NNfunction_ns_chi03_cR::synapse0x2a496e0() {
   return (neuron0x2a39e20()*6.99612);
}

double NNfunction_ns_chi03_cR::synapse0x2a49720() {
   return (neuron0x2a3a160()*0.0142856);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a0a0() {
   return (neuron0x2a3a4a0()*0.0559551);
}

double NNfunction_ns_chi03_cR::synapse0x2a563f0() {
   return (neuron0x2a3a7e0()*-0.00165573);
}

double NNfunction_ns_chi03_cR::synapse0x2a56430() {
   return (neuron0x2a3ab20()*-0.0113929);
}

double NNfunction_ns_chi03_cR::synapse0x2a56470() {
   return (neuron0x2a3ae60()*-0.0541235);
}

double NNfunction_ns_chi03_cR::synapse0x2a564b0() {
   return (neuron0x2a3b1a0()*-0.052798);
}

double NNfunction_ns_chi03_cR::synapse0x2a564f0() {
   return (neuron0x2a3b4e0()*-0.0454266);
}

double NNfunction_ns_chi03_cR::synapse0x2a56530() {
   return (neuron0x2a3b820()*-0.00350816);
}

double NNfunction_ns_chi03_cR::synapse0x2a56570() {
   return (neuron0x2a3bb60()*0.0455934);
}

double NNfunction_ns_chi03_cR::synapse0x2a565b0() {
   return (neuron0x2a3bea0()*-0.0230639);
}

double NNfunction_ns_chi03_cR::synapse0x2a565f0() {
   return (neuron0x2a3c1e0()*0.0428435);
}

double NNfunction_ns_chi03_cR::synapse0x2a56630() {
   return (neuron0x2a3c520()*-0.06398);
}

double NNfunction_ns_chi03_cR::synapse0x2a56670() {
   return (neuron0x2a3c860()*0.515498);
}

double NNfunction_ns_chi03_cR::synapse0x2a49f80() {
   return (neuron0x2a3cba0()*0.220087);
}

double NNfunction_ns_chi03_cR::synapse0x2a49fc0() {
   return (neuron0x2a3d100()*-0.0311306);
}

double NNfunction_ns_chi03_cR::synapse0x2a567c0() {
   return (neuron0x2a3d320()*0.0905704);
}

double NNfunction_ns_chi03_cR::synapse0x2a56800() {
   return (neuron0x2a3d660()*0.0544604);
}

double NNfunction_ns_chi03_cR::synapse0x2a56840() {
   return (neuron0x2a3d9a0()*0.0432323);
}

double NNfunction_ns_chi03_cR::synapse0x2a56880() {
   return (neuron0x2a3dce0()*-0.0633224);
}

double NNfunction_ns_chi03_cR::synapse0x2a568c0() {
   return (neuron0x2a3e020()*-0.024283);
}

double NNfunction_ns_chi03_cR::synapse0x2a56900() {
   return (neuron0x2a3e360()*-2.24058);
}

double NNfunction_ns_chi03_cR::synapse0x2a56c80() {
   return (neuron0x2a397a0()*-0.00133251);
}

double NNfunction_ns_chi03_cR::synapse0x2a56cc0() {
   return (neuron0x2a39ae0()*0.000743001);
}

double NNfunction_ns_chi03_cR::synapse0x2a56d00() {
   return (neuron0x2a39e20()*-0.00801962);
}

double NNfunction_ns_chi03_cR::synapse0x2a56d40() {
   return (neuron0x2a3a160()*-4.06698);
}

double NNfunction_ns_chi03_cR::synapse0x2a56d80() {
   return (neuron0x2a3a4a0()*0.0240452);
}

double NNfunction_ns_chi03_cR::synapse0x2a56dc0() {
   return (neuron0x2a3a7e0()*0.0159061);
}

double NNfunction_ns_chi03_cR::synapse0x2a56e00() {
   return (neuron0x2a3ab20()*0.0146052);
}

double NNfunction_ns_chi03_cR::synapse0x2a56e40() {
   return (neuron0x2a3ae60()*0.0255558);
}

double NNfunction_ns_chi03_cR::synapse0x2a56e80() {
   return (neuron0x2a3b1a0()*0.0147112);
}

double NNfunction_ns_chi03_cR::synapse0x2a56ec0() {
   return (neuron0x2a3b4e0()*0.0167634);
}

double NNfunction_ns_chi03_cR::synapse0x2a56f00() {
   return (neuron0x2a3b820()*0.00191383);
}

double NNfunction_ns_chi03_cR::synapse0x2a56f40() {
   return (neuron0x2a3bb60()*0.0214794);
}

double NNfunction_ns_chi03_cR::synapse0x2a56f80() {
   return (neuron0x2a3bea0()*0.0256185);
}

double NNfunction_ns_chi03_cR::synapse0x2a56fc0() {
   return (neuron0x2a3c1e0()*-0.0285089);
}

double NNfunction_ns_chi03_cR::synapse0x2a57000() {
   return (neuron0x2a3c520()*-0.00703405);
}

double NNfunction_ns_chi03_cR::synapse0x2a57040() {
   return (neuron0x2a3c860()*-0.0773961);
}

double NNfunction_ns_chi03_cR::synapse0x2a56ad0() {
   return (neuron0x2a3cba0()*-0.0228655);
}

double NNfunction_ns_chi03_cR::synapse0x2a56b10() {
   return (neuron0x2a3d100()*0.0168284);
}

double NNfunction_ns_chi03_cR::synapse0x2a57190() {
   return (neuron0x2a3d320()*7.85454e-05);
}

double NNfunction_ns_chi03_cR::synapse0x2a571d0() {
   return (neuron0x2a3d660()*-0.00616705);
}

double NNfunction_ns_chi03_cR::synapse0x2a57210() {
   return (neuron0x2a3d9a0()*-8.48518e-05);
}

double NNfunction_ns_chi03_cR::synapse0x2a57250() {
   return (neuron0x2a3dce0()*0.0145514);
}

double NNfunction_ns_chi03_cR::synapse0x2a57290() {
   return (neuron0x2a3e020()*-0.00131909);
}

double NNfunction_ns_chi03_cR::synapse0x2a572d0() {
   return (neuron0x2a3e360()*-0.00615509);
}

double NNfunction_ns_chi03_cR::synapse0x2a57650() {
   return (neuron0x2a397a0()*0.00919179);
}

double NNfunction_ns_chi03_cR::synapse0x2a57690() {
   return (neuron0x2a39ae0()*-0.0145809);
}

double NNfunction_ns_chi03_cR::synapse0x2a576d0() {
   return (neuron0x2a39e20()*-0.0428719);
}

double NNfunction_ns_chi03_cR::synapse0x2a57710() {
   return (neuron0x2a3a160()*3.178);
}

double NNfunction_ns_chi03_cR::synapse0x2a57750() {
   return (neuron0x2a3a4a0()*-0.0185431);
}

double NNfunction_ns_chi03_cR::synapse0x2a57790() {
   return (neuron0x2a3a7e0()*-0.000789926);
}

double NNfunction_ns_chi03_cR::synapse0x2a577d0() {
   return (neuron0x2a3ab20()*-0.00677597);
}

double NNfunction_ns_chi03_cR::synapse0x2a57810() {
   return (neuron0x2a3ae60()*-0.00449469);
}

double NNfunction_ns_chi03_cR::synapse0x2a57850() {
   return (neuron0x2a3b1a0()*-0.0294);
}

double NNfunction_ns_chi03_cR::synapse0x2a57890() {
   return (neuron0x2a3b4e0()*-0.0188621);
}

double NNfunction_ns_chi03_cR::synapse0x2a578d0() {
   return (neuron0x2a3b820()*-0.0161755);
}

double NNfunction_ns_chi03_cR::synapse0x2a57910() {
   return (neuron0x2a3bb60()*-0.0232731);
}

double NNfunction_ns_chi03_cR::synapse0x2a57950() {
   return (neuron0x2a3bea0()*-0.0121654);
}

double NNfunction_ns_chi03_cR::synapse0x2a57990() {
   return (neuron0x2a3c1e0()*0.0587864);
}

double NNfunction_ns_chi03_cR::synapse0x2a579d0() {
   return (neuron0x2a3c520()*-0.0175044);
}

double NNfunction_ns_chi03_cR::synapse0x2a57a10() {
   return (neuron0x2a3c860()*0.329636);
}

double NNfunction_ns_chi03_cR::synapse0x2a574a0() {
   return (neuron0x2a3cba0()*0.0466675);
}

double NNfunction_ns_chi03_cR::synapse0x2a574e0() {
   return (neuron0x2a3d100()*-0.021844);
}

double NNfunction_ns_chi03_cR::synapse0x2a57b60() {
   return (neuron0x2a3d320()*0.00527218);
}

double NNfunction_ns_chi03_cR::synapse0x2a57ba0() {
   return (neuron0x2a3d660()*-0.00888612);
}

double NNfunction_ns_chi03_cR::synapse0x2a57be0() {
   return (neuron0x2a3d9a0()*-0.00353018);
}

double NNfunction_ns_chi03_cR::synapse0x2a57c20() {
   return (neuron0x2a3dce0()*-0.00966217);
}

double NNfunction_ns_chi03_cR::synapse0x2a57c60() {
   return (neuron0x2a3e020()*-0.00806784);
}

double NNfunction_ns_chi03_cR::synapse0x2a57ca0() {
   return (neuron0x2a3e360()*-0.0238978);
}

double NNfunction_ns_chi03_cR::synapse0x2a58020() {
   return (neuron0x2a397a0()*-0.00542575);
}

double NNfunction_ns_chi03_cR::synapse0x2a58060() {
   return (neuron0x2a39ae0()*0.0196966);
}

double NNfunction_ns_chi03_cR::synapse0x2a580a0() {
   return (neuron0x2a39e20()*-0.0376648);
}

double NNfunction_ns_chi03_cR::synapse0x2a580e0() {
   return (neuron0x2a3a160()*1.07171);
}

double NNfunction_ns_chi03_cR::synapse0x2a58120() {
   return (neuron0x2a3a4a0()*0.00706571);
}

double NNfunction_ns_chi03_cR::synapse0x2a58160() {
   return (neuron0x2a3a7e0()*0.0173342);
}

double NNfunction_ns_chi03_cR::synapse0x2a581a0() {
   return (neuron0x2a3ab20()*-0.00605119);
}

double NNfunction_ns_chi03_cR::synapse0x2a581e0() {
   return (neuron0x2a3ae60()*-0.0554085);
}

double NNfunction_ns_chi03_cR::synapse0x2a58220() {
   return (neuron0x2a3b1a0()*0.0299298);
}

double NNfunction_ns_chi03_cR::synapse0x2a58260() {
   return (neuron0x2a3b4e0()*0.0622215);
}

double NNfunction_ns_chi03_cR::synapse0x2a582a0() {
   return (neuron0x2a3b820()*0.0274744);
}

double NNfunction_ns_chi03_cR::synapse0x2a582e0() {
   return (neuron0x2a3bb60()*0.0316201);
}

double NNfunction_ns_chi03_cR::synapse0x2a58320() {
   return (neuron0x2a3bea0()*-0.0428262);
}

double NNfunction_ns_chi03_cR::synapse0x2a58360() {
   return (neuron0x2a3c1e0()*-0.022175);
}

double NNfunction_ns_chi03_cR::synapse0x2a583a0() {
   return (neuron0x2a3c520()*-0.00283493);
}

double NNfunction_ns_chi03_cR::synapse0x2a583e0() {
   return (neuron0x2a3c860()*-0.121053);
}

double NNfunction_ns_chi03_cR::synapse0x2a57e70() {
   return (neuron0x2a3cba0()*0.0127444);
}

double NNfunction_ns_chi03_cR::synapse0x2a57eb0() {
   return (neuron0x2a3d100()*0.0211907);
}

double NNfunction_ns_chi03_cR::synapse0x2a58530() {
   return (neuron0x2a3d320()*-0.0205358);
}

double NNfunction_ns_chi03_cR::synapse0x2a58570() {
   return (neuron0x2a3d660()*0.0366583);
}

double NNfunction_ns_chi03_cR::synapse0x2a585b0() {
   return (neuron0x2a3d9a0()*-0.00600767);
}

double NNfunction_ns_chi03_cR::synapse0x2a585f0() {
   return (neuron0x2a3dce0()*0.00844538);
}

double NNfunction_ns_chi03_cR::synapse0x2a58630() {
   return (neuron0x2a3e020()*0.00633999);
}

double NNfunction_ns_chi03_cR::synapse0x2a58670() {
   return (neuron0x2a3e360()*0.0460541);
}

double NNfunction_ns_chi03_cR::synapse0x2a589f0() {
   return (neuron0x2a397a0()*0.0517136);
}

double NNfunction_ns_chi03_cR::synapse0x2a58a30() {
   return (neuron0x2a39ae0()*-1.93276);
}

double NNfunction_ns_chi03_cR::synapse0x2a58a70() {
   return (neuron0x2a39e20()*6.62957);
}

double NNfunction_ns_chi03_cR::synapse0x2a58ab0() {
   return (neuron0x2a3a160()*0.032112);
}

double NNfunction_ns_chi03_cR::synapse0x2a58af0() {
   return (neuron0x2a3a4a0()*0.0159638);
}

double NNfunction_ns_chi03_cR::synapse0x2a58b30() {
   return (neuron0x2a3a7e0()*0.0228236);
}

double NNfunction_ns_chi03_cR::synapse0x2a58b70() {
   return (neuron0x2a3ab20()*0.0213689);
}

double NNfunction_ns_chi03_cR::synapse0x2a58bb0() {
   return (neuron0x2a3ae60()*0.00893967);
}

double NNfunction_ns_chi03_cR::synapse0x2a58bf0() {
   return (neuron0x2a3b1a0()*0.0324652);
}

double NNfunction_ns_chi03_cR::synapse0x2a58c30() {
   return (neuron0x2a3b4e0()*-0.0251803);
}

double NNfunction_ns_chi03_cR::synapse0x2a58c70() {
   return (neuron0x2a3b820()*-0.0311459);
}

double NNfunction_ns_chi03_cR::synapse0x2a58cb0() {
   return (neuron0x2a3bb60()*-0.0225559);
}

double NNfunction_ns_chi03_cR::synapse0x2a58cf0() {
   return (neuron0x2a3bea0()*0.0243404);
}

double NNfunction_ns_chi03_cR::synapse0x2a58d30() {
   return (neuron0x2a3c1e0()*0.0159566);
}

double NNfunction_ns_chi03_cR::synapse0x2a58d70() {
   return (neuron0x2a3c520()*0.00594067);
}

double NNfunction_ns_chi03_cR::synapse0x2a58db0() {
   return (neuron0x2a3c860()*0.462132);
}

double NNfunction_ns_chi03_cR::synapse0x2a58840() {
   return (neuron0x2a3cba0()*0.024266);
}

double NNfunction_ns_chi03_cR::synapse0x2a58880() {
   return (neuron0x2a3d100()*0.0164878);
}

double NNfunction_ns_chi03_cR::synapse0x2a58f00() {
   return (neuron0x2a3d320()*-0.000643132);
}

double NNfunction_ns_chi03_cR::synapse0x2a58f40() {
   return (neuron0x2a3d660()*-0.032519);
}

double NNfunction_ns_chi03_cR::synapse0x2a58f80() {
   return (neuron0x2a3d9a0()*-0.0296778);
}

double NNfunction_ns_chi03_cR::synapse0x2a58fc0() {
   return (neuron0x2a3dce0()*0.0173681);
}

double NNfunction_ns_chi03_cR::synapse0x2a59000() {
   return (neuron0x2a3e020()*0.00906243);
}

double NNfunction_ns_chi03_cR::synapse0x2a59040() {
   return (neuron0x2a3e360()*0.0767072);
}

double NNfunction_ns_chi03_cR::synapse0x2a593c0() {
   return (neuron0x2a397a0()*-0.137872);
}

double NNfunction_ns_chi03_cR::synapse0x2a59400() {
   return (neuron0x2a39ae0()*0.111381);
}

double NNfunction_ns_chi03_cR::synapse0x2a59440() {
   return (neuron0x2a39e20()*-0.445717);
}

double NNfunction_ns_chi03_cR::synapse0x2a59480() {
   return (neuron0x2a3a160()*0.349249);
}

double NNfunction_ns_chi03_cR::synapse0x2a594c0() {
   return (neuron0x2a3a4a0()*-0.396327);
}

double NNfunction_ns_chi03_cR::synapse0x2a59500() {
   return (neuron0x2a3a7e0()*0.161581);
}

double NNfunction_ns_chi03_cR::synapse0x2a59540() {
   return (neuron0x2a3ab20()*-0.17542);
}

double NNfunction_ns_chi03_cR::synapse0x2a59580() {
   return (neuron0x2a3ae60()*-0.0981447);
}

double NNfunction_ns_chi03_cR::synapse0x2a595c0() {
   return (neuron0x2a3b1a0()*-0.106338);
}

double NNfunction_ns_chi03_cR::synapse0x2a59600() {
   return (neuron0x2a3b4e0()*-0.0719195);
}

double NNfunction_ns_chi03_cR::synapse0x2a59640() {
   return (neuron0x2a3b820()*-0.000201609);
}

double NNfunction_ns_chi03_cR::synapse0x2a59680() {
   return (neuron0x2a3bb60()*-0.208605);
}

double NNfunction_ns_chi03_cR::synapse0x2a596c0() {
   return (neuron0x2a3bea0()*-0.0684403);
}

double NNfunction_ns_chi03_cR::synapse0x2a59700() {
   return (neuron0x2a3c1e0()*0.0631446);
}

double NNfunction_ns_chi03_cR::synapse0x2a59740() {
   return (neuron0x2a3c520()*0.118796);
}

double NNfunction_ns_chi03_cR::synapse0x2a59780() {
   return (neuron0x2a3c860()*-0.40245);
}

double NNfunction_ns_chi03_cR::synapse0x2a59210() {
   return (neuron0x2a3cba0()*-0.126802);
}

double NNfunction_ns_chi03_cR::synapse0x2a59250() {
   return (neuron0x2a3d100()*-0.0738391);
}

double NNfunction_ns_chi03_cR::synapse0x2a598d0() {
   return (neuron0x2a3d320()*0.0442802);
}

double NNfunction_ns_chi03_cR::synapse0x2a59910() {
   return (neuron0x2a3d660()*-0.137686);
}

double NNfunction_ns_chi03_cR::synapse0x2a59950() {
   return (neuron0x2a3d9a0()*0.00253048);
}

double NNfunction_ns_chi03_cR::synapse0x2a59990() {
   return (neuron0x2a3dce0()*0.000763558);
}

double NNfunction_ns_chi03_cR::synapse0x2a599d0() {
   return (neuron0x2a3e020()*0.0596801);
}

double NNfunction_ns_chi03_cR::synapse0x2a59a10() {
   return (neuron0x2a3e360()*0.122235);
}

double NNfunction_ns_chi03_cR::synapse0x2a59d90() {
   return (neuron0x2a397a0()*-0.0814822);
}

double NNfunction_ns_chi03_cR::synapse0x2a59dd0() {
   return (neuron0x2a39ae0()*-3.51643);
}

double NNfunction_ns_chi03_cR::synapse0x2a59e10() {
   return (neuron0x2a39e20()*-0.753471);
}

double NNfunction_ns_chi03_cR::synapse0x2a59e50() {
   return (neuron0x2a3a160()*0.033646);
}

double NNfunction_ns_chi03_cR::synapse0x2a59e90() {
   return (neuron0x2a3a4a0()*0.00451833);
}

double NNfunction_ns_chi03_cR::synapse0x2a59ed0() {
   return (neuron0x2a3a7e0()*0.0492676);
}

double NNfunction_ns_chi03_cR::synapse0x2a59f10() {
   return (neuron0x2a3ab20()*0.00655804);
}

double NNfunction_ns_chi03_cR::synapse0x2a59f50() {
   return (neuron0x2a3ae60()*0.0143576);
}

double NNfunction_ns_chi03_cR::synapse0x2a59f90() {
   return (neuron0x2a3b1a0()*0.0068323);
}

double NNfunction_ns_chi03_cR::synapse0x2a59fd0() {
   return (neuron0x2a3b4e0()*-0.0293618);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a010() {
   return (neuron0x2a3b820()*-0.0512948);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a050() {
   return (neuron0x2a3bb60()*-0.0429088);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a090() {
   return (neuron0x2a3bea0()*-0.0781785);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a0d0() {
   return (neuron0x2a3c1e0()*-0.0752573);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a110() {
   return (neuron0x2a3c520()*0.0214005);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a150() {
   return (neuron0x2a3c860()*0.342609);
}

double NNfunction_ns_chi03_cR::synapse0x2a59be0() {
   return (neuron0x2a3cba0()*-0.0518731);
}

double NNfunction_ns_chi03_cR::synapse0x2a59c20() {
   return (neuron0x2a3d100()*-0.0153867);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a2a0() {
   return (neuron0x2a3d320()*0.0452757);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a2e0() {
   return (neuron0x2a3d660()*-0.0164585);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a320() {
   return (neuron0x2a3d9a0()*-0.0487631);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a360() {
   return (neuron0x2a3dce0()*0.036571);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a3a0() {
   return (neuron0x2a3e020()*0.0051204);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a3e0() {
   return (neuron0x2a3e360()*1.95405);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a760() {
   return (neuron0x2a397a0()*0.0079468);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a7a0() {
   return (neuron0x2a39ae0()*0.0290854);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a7e0() {
   return (neuron0x2a39e20()*0.103813);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a820() {
   return (neuron0x2a3a160()*-0.00961924);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a860() {
   return (neuron0x2a3a4a0()*-0.0669335);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a8a0() {
   return (neuron0x2a3a7e0()*0.0243954);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a8e0() {
   return (neuron0x2a3ab20()*-0.0481636);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a920() {
   return (neuron0x2a3ae60()*-0.0875843);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a960() {
   return (neuron0x2a3b1a0()*-0.0422409);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a9a0() {
   return (neuron0x2a3b4e0()*-0.0730345);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a9e0() {
   return (neuron0x2a3b820()*0.00467577);
}

double NNfunction_ns_chi03_cR::synapse0x2a5aa20() {
   return (neuron0x2a3bb60()*0.00302743);
}

double NNfunction_ns_chi03_cR::synapse0x2a5aa60() {
   return (neuron0x2a3bea0()*-0.0282189);
}

double NNfunction_ns_chi03_cR::synapse0x2a5aaa0() {
   return (neuron0x2a3c1e0()*0.0274117);
}

double NNfunction_ns_chi03_cR::synapse0x2a5aae0() {
   return (neuron0x2a3c520()*0.0240228);
}

double NNfunction_ns_chi03_cR::synapse0x2a5ab20() {
   return (neuron0x2a3c860()*0.686717);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a5b0() {
   return (neuron0x2a3cba0()*0.00960676);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a5f0() {
   return (neuron0x2a3d100()*0.0309268);
}

double NNfunction_ns_chi03_cR::synapse0x2a5ac70() {
   return (neuron0x2a3d320()*0.00305112);
}

double NNfunction_ns_chi03_cR::synapse0x2a5acb0() {
   return (neuron0x2a3d660()*0.0212576);
}

double NNfunction_ns_chi03_cR::synapse0x2a5acf0() {
   return (neuron0x2a3d9a0()*0.0198085);
}

double NNfunction_ns_chi03_cR::synapse0x2a5ad30() {
   return (neuron0x2a3dce0()*0.0536109);
}

double NNfunction_ns_chi03_cR::synapse0x2a5ad70() {
   return (neuron0x2a3e020()*-0.0243343);
}

double NNfunction_ns_chi03_cR::synapse0x2a5adb0() {
   return (neuron0x2a3e360()*-0.741451);
}

double NNfunction_ns_chi03_cR::synapse0x2a43860() {
   return (neuron0x2a397a0()*0.00711569);
}

double NNfunction_ns_chi03_cR::synapse0x2a438a0() {
   return (neuron0x2a39ae0()*0.0298053);
}

double NNfunction_ns_chi03_cR::synapse0x2a438e0() {
   return (neuron0x2a39e20()*-0.0305448);
}

double NNfunction_ns_chi03_cR::synapse0x2a43920() {
   return (neuron0x2a3a160()*1.70822);
}

double NNfunction_ns_chi03_cR::synapse0x2a43960() {
   return (neuron0x2a3a4a0()*0.0336951);
}

double NNfunction_ns_chi03_cR::synapse0x2a439a0() {
   return (neuron0x2a3a7e0()*0.0618367);
}

double NNfunction_ns_chi03_cR::synapse0x2a439e0() {
   return (neuron0x2a3ab20()*0.00378124);
}

double NNfunction_ns_chi03_cR::synapse0x2a43a20() {
   return (neuron0x2a3ae60()*-0.020096);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b540() {
   return (neuron0x2a3b1a0()*0.00511123);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b580() {
   return (neuron0x2a3b4e0()*0.0808257);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b5c0() {
   return (neuron0x2a3b820()*0.0244493);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b600() {
   return (neuron0x2a3bb60()*0.0615511);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b640() {
   return (neuron0x2a3bea0()*0.0729013);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b680() {
   return (neuron0x2a3c1e0()*-0.0128562);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b6c0() {
   return (neuron0x2a3c520()*-0.055698);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b700() {
   return (neuron0x2a3c860()*0.089952);
}

double NNfunction_ns_chi03_cR::synapse0x2a5af80() {
   return (neuron0x2a3cba0()*-0.00153108);
}

double NNfunction_ns_chi03_cR::synapse0x2a5afc0() {
   return (neuron0x2a3d100()*0.0771082);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b850() {
   return (neuron0x2a3d320()*0.0137479);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b890() {
   return (neuron0x2a3d660()*0.0598966);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b8d0() {
   return (neuron0x2a3d9a0()*-0.0170383);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b910() {
   return (neuron0x2a3dce0()*0.0037981);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b950() {
   return (neuron0x2a3e020()*-0.0298843);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b990() {
   return (neuron0x2a3e360()*0.00832934);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bd10() {
   return (neuron0x2a397a0()*-0.0491178);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bd50() {
   return (neuron0x2a39ae0()*-4.66309);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bd90() {
   return (neuron0x2a39e20()*-5.48613);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bdd0() {
   return (neuron0x2a3a160()*-0.0178703);
}

double NNfunction_ns_chi03_cR::synapse0x2a5be10() {
   return (neuron0x2a3a4a0()*-0.00525249);
}

double NNfunction_ns_chi03_cR::synapse0x2a5be50() {
   return (neuron0x2a3a7e0()*-0.0918875);
}

double NNfunction_ns_chi03_cR::synapse0x2a5be90() {
   return (neuron0x2a3ab20()*-0.0178025);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bed0() {
   return (neuron0x2a3ae60()*-0.029227);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bf10() {
   return (neuron0x2a3b1a0()*0.00299391);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bf50() {
   return (neuron0x2a3b4e0()*0.0107063);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bf90() {
   return (neuron0x2a3b820()*0.0451271);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bfd0() {
   return (neuron0x2a3bb60()*0.0423709);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c010() {
   return (neuron0x2a3bea0()*-0.0234731);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c050() {
   return (neuron0x2a3c1e0()*-0.00297458);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c090() {
   return (neuron0x2a3c520()*0.00794776);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c0d0() {
   return (neuron0x2a3c860()*-0.389821);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bb60() {
   return (neuron0x2a3cba0()*-0.0331649);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bba0() {
   return (neuron0x2a3d100()*-0.0846078);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c220() {
   return (neuron0x2a3d320()*-0.00363771);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c260() {
   return (neuron0x2a3d660()*-0.0362368);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c2a0() {
   return (neuron0x2a3d9a0()*-0.00566522);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c2e0() {
   return (neuron0x2a3dce0()*-0.0345114);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c320() {
   return (neuron0x2a3e020()*-0.037672);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c360() {
   return (neuron0x2a3e360()*-1.38632);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c6e0() {
   return (neuron0x2a397a0()*-0.00275404);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c720() {
   return (neuron0x2a39ae0()*-0.131553);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c760() {
   return (neuron0x2a39e20()*0.52548);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c7a0() {
   return (neuron0x2a3a160()*-0.122439);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c7e0() {
   return (neuron0x2a3a4a0()*-0.580771);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c820() {
   return (neuron0x2a3a7e0()*0.280289);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c860() {
   return (neuron0x2a3ab20()*-0.14767);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c8a0() {
   return (neuron0x2a3ae60()*0.26607);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c8e0() {
   return (neuron0x2a3b1a0()*-0.129663);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c920() {
   return (neuron0x2a3b4e0()*0.0081968);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c960() {
   return (neuron0x2a3b820()*2.54356);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c9a0() {
   return (neuron0x2a3bb60()*-0.176693);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c9e0() {
   return (neuron0x2a3bea0()*-0.0759055);
}

double NNfunction_ns_chi03_cR::synapse0x2a5ca20() {
   return (neuron0x2a3c1e0()*0.099745);
}

double NNfunction_ns_chi03_cR::synapse0x2a5ca60() {
   return (neuron0x2a3c520()*0.29295);
}

double NNfunction_ns_chi03_cR::synapse0x2a5caa0() {
   return (neuron0x2a3c860()*-0.62317);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c530() {
   return (neuron0x2a3cba0()*0.572245);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c570() {
   return (neuron0x2a3d100()*-0.195912);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d0a0() {
   return (neuron0x2a3d320()*0.138354);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d0e0() {
   return (neuron0x2a3d660()*-0.309448);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d120() {
   return (neuron0x2a3d9a0()*-0.294954);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d160() {
   return (neuron0x2a3dce0()*-0.0608346);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d1a0() {
   return (neuron0x2a3e020()*-0.262691);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d1e0() {
   return (neuron0x2a3e360()*0.210598);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d560() {
   return (neuron0x2a397a0()*-0.0146034);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d5a0() {
   return (neuron0x2a39ae0()*-1.01206);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d5e0() {
   return (neuron0x2a39e20()*-3.79407);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d620() {
   return (neuron0x2a3a160()*-0.0622973);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d660() {
   return (neuron0x2a3a4a0()*0.000918401);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d6a0() {
   return (neuron0x2a3a7e0()*0.190305);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d6e0() {
   return (neuron0x2a3ab20()*0.0741913);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d720() {
   return (neuron0x2a3ae60()*0.153322);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d760() {
   return (neuron0x2a3b1a0()*0.100055);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d7a0() {
   return (neuron0x2a3b4e0()*-0.147855);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d7e0() {
   return (neuron0x2a3b820()*-0.0591613);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d820() {
   return (neuron0x2a3bb60()*0.0841323);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d860() {
   return (neuron0x2a3bea0()*0.196578);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d8a0() {
   return (neuron0x2a3c1e0()*0.0484946);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d8e0() {
   return (neuron0x2a3c520()*-0.0241494);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d920() {
   return (neuron0x2a3c860()*0.257995);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d3b0() {
   return (neuron0x2a3cba0()*-0.161169);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d3f0() {
   return (neuron0x2a3d100()*0.00409763);
}

double NNfunction_ns_chi03_cR::synapse0x2a4da70() {
   return (neuron0x2a3d320()*0.343907);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dab0() {
   return (neuron0x2a3d660()*-0.0568806);
}

double NNfunction_ns_chi03_cR::synapse0x2a4daf0() {
   return (neuron0x2a3d9a0()*0.239384);
}

double NNfunction_ns_chi03_cR::synapse0x2a4db30() {
   return (neuron0x2a3dce0()*0.0901874);
}

double NNfunction_ns_chi03_cR::synapse0x2a4db70() {
   return (neuron0x2a3e020()*-0.194738);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dbb0() {
   return (neuron0x2a3e360()*-2.01966);
}

double NNfunction_ns_chi03_cR::synapse0x2a4df30() {
   return (neuron0x2a397a0()*-0.00662132);
}

double NNfunction_ns_chi03_cR::synapse0x2a4df70() {
   return (neuron0x2a39ae0()*9.67642);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dfb0() {
   return (neuron0x2a39e20()*-0.0205836);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dff0() {
   return (neuron0x2a3a160()*-0.01709);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e030() {
   return (neuron0x2a3a4a0()*-0.0133529);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e070() {
   return (neuron0x2a3a7e0()*0.032481);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e0b0() {
   return (neuron0x2a3ab20()*0.0224306);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e0f0() {
   return (neuron0x2a3ae60()*0.00768776);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e130() {
   return (neuron0x2a3b1a0()*0.06226);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e170() {
   return (neuron0x2a3b4e0()*-0.0359688);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e1b0() {
   return (neuron0x2a3b820()*0.0269406);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e1f0() {
   return (neuron0x2a3bb60()*-0.00881988);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e230() {
   return (neuron0x2a3bea0()*-0.0166022);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e270() {
   return (neuron0x2a3c1e0()*-0.0451276);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e2b0() {
   return (neuron0x2a3c520()*0.0210172);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e2f0() {
   return (neuron0x2a3c860()*0.00512703);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dd80() {
   return (neuron0x2a3cba0()*-0.029037);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ddc0() {
   return (neuron0x2a3d100()*-0.0140083);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e440() {
   return (neuron0x2a3d320()*0.0197682);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e480() {
   return (neuron0x2a3d660()*-0.0151113);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e4c0() {
   return (neuron0x2a3d9a0()*0.0169082);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e500() {
   return (neuron0x2a3dce0()*-0.00398204);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e540() {
   return (neuron0x2a3e020()*-0.0149081);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e580() {
   return (neuron0x2a3e360()*3.69028);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e900() {
   return (neuron0x2a397a0()*0.0291506);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e940() {
   return (neuron0x2a39ae0()*0.0915657);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e980() {
   return (neuron0x2a39e20()*2.15266);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e9c0() {
   return (neuron0x2a3a160()*-0.00805528);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ea00() {
   return (neuron0x2a3a4a0()*-0.0318349);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ea40() {
   return (neuron0x2a3a7e0()*0.0489998);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ea80() {
   return (neuron0x2a3ab20()*0.000691273);
}

double NNfunction_ns_chi03_cR::synapse0x2a4eac0() {
   return (neuron0x2a3ae60()*-0.0700494);
}

double NNfunction_ns_chi03_cR::synapse0x2a4eb00() {
   return (neuron0x2a3b1a0()*0.0494277);
}

double NNfunction_ns_chi03_cR::synapse0x2a4eb40() {
   return (neuron0x2a3b4e0()*-0.0340997);
}

double NNfunction_ns_chi03_cR::synapse0x2a4eb80() {
   return (neuron0x2a3b820()*-0.00286501);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ebc0() {
   return (neuron0x2a3bb60()*-0.0604183);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ec00() {
   return (neuron0x2a3bea0()*0.0198982);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ec40() {
   return (neuron0x2a3c1e0()*-0.0288963);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ec80() {
   return (neuron0x2a3c520()*0.0973014);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ecc0() {
   return (neuron0x2a3c860()*0.262691);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e750() {
   return (neuron0x2a3cba0()*-0.027626);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e790() {
   return (neuron0x2a3d100()*-0.0361596);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ee10() {
   return (neuron0x2a3d320()*-0.000799121);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ee50() {
   return (neuron0x2a3d660()*-0.00480445);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ee90() {
   return (neuron0x2a3d9a0()*0.0146488);
}

double NNfunction_ns_chi03_cR::synapse0x2a4eed0() {
   return (neuron0x2a3dce0()*0.0413839);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ef10() {
   return (neuron0x2a3e020()*0.0187);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ef50() {
   return (neuron0x2a3e360()*1.65396);
}

double NNfunction_ns_chi03_cR::synapse0x2a60e20() {
   return (neuron0x2a397a0()*-0.0450491);
}

double NNfunction_ns_chi03_cR::synapse0x2a60e60() {
   return (neuron0x2a39ae0()*-0.215331);
}

double NNfunction_ns_chi03_cR::synapse0x2a60ea0() {
   return (neuron0x2a39e20()*0.0883022);
}

double NNfunction_ns_chi03_cR::synapse0x2a60ee0() {
   return (neuron0x2a3a160()*-0.0691522);
}

double NNfunction_ns_chi03_cR::synapse0x2a60f20() {
   return (neuron0x2a3a4a0()*-0.245161);
}

double NNfunction_ns_chi03_cR::synapse0x2a60f60() {
   return (neuron0x2a3a7e0()*0.153431);
}

double NNfunction_ns_chi03_cR::synapse0x2a60fa0() {
   return (neuron0x2a3ab20()*-0.00459068);
}

double NNfunction_ns_chi03_cR::synapse0x2a60fe0() {
   return (neuron0x2a3ae60()*-0.0460088);
}

double NNfunction_ns_chi03_cR::synapse0x2a61020() {
   return (neuron0x2a3b1a0()*0.623624);
}

double NNfunction_ns_chi03_cR::synapse0x2a61060() {
   return (neuron0x2a3b4e0()*-0.415292);
}

double NNfunction_ns_chi03_cR::synapse0x2a610a0() {
   return (neuron0x2a3b820()*0.0779365);
}

double NNfunction_ns_chi03_cR::synapse0x2a610e0() {
   return (neuron0x2a3bb60()*0.320831);
}

double NNfunction_ns_chi03_cR::synapse0x2a61120() {
   return (neuron0x2a3bea0()*0.282442);
}

double NNfunction_ns_chi03_cR::synapse0x2a61160() {
   return (neuron0x2a3c1e0()*0.00502007);
}

double NNfunction_ns_chi03_cR::synapse0x2a611a0() {
   return (neuron0x2a3c520()*0.156498);
}

double NNfunction_ns_chi03_cR::synapse0x2a611e0() {
   return (neuron0x2a3c860()*0.709972);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ef90() {
   return (neuron0x2a3cba0()*-0.0600361);
}

double NNfunction_ns_chi03_cR::synapse0x2a4efd0() {
   return (neuron0x2a3d100()*-0.420743);
}

double NNfunction_ns_chi03_cR::synapse0x2a61330() {
   return (neuron0x2a3d320()*0.103067);
}

double NNfunction_ns_chi03_cR::synapse0x2a61370() {
   return (neuron0x2a3d660()*0.211084);
}

double NNfunction_ns_chi03_cR::synapse0x2a613b0() {
   return (neuron0x2a3d9a0()*-0.0242051);
}

double NNfunction_ns_chi03_cR::synapse0x2a613f0() {
   return (neuron0x2a3dce0()*-0.0561048);
}

double NNfunction_ns_chi03_cR::synapse0x2a61430() {
   return (neuron0x2a3e020()*-0.0535533);
}

double NNfunction_ns_chi03_cR::synapse0x2a61470() {
   return (neuron0x2a3e360()*0.81474);
}

double NNfunction_ns_chi03_cR::synapse0x2a617f0() {
   return (neuron0x2a397a0()*0.147867);
}

double NNfunction_ns_chi03_cR::synapse0x2a61830() {
   return (neuron0x2a39ae0()*0.361515);
}

double NNfunction_ns_chi03_cR::synapse0x2a61870() {
   return (neuron0x2a39e20()*0.341143);
}

double NNfunction_ns_chi03_cR::synapse0x2a618b0() {
   return (neuron0x2a3a160()*0.0884738);
}

double NNfunction_ns_chi03_cR::synapse0x2a618f0() {
   return (neuron0x2a3a4a0()*-0.1452);
}

double NNfunction_ns_chi03_cR::synapse0x2a61930() {
   return (neuron0x2a3a7e0()*0.358491);
}

double NNfunction_ns_chi03_cR::synapse0x2a61970() {
   return (neuron0x2a3ab20()*0.093127);
}

double NNfunction_ns_chi03_cR::synapse0x2a619b0() {
   return (neuron0x2a3ae60()*2.00384);
}

double NNfunction_ns_chi03_cR::synapse0x2a619f0() {
   return (neuron0x2a3b1a0()*-0.13296);
}

double NNfunction_ns_chi03_cR::synapse0x2a61a30() {
   return (neuron0x2a3b4e0()*0.496112);
}

double NNfunction_ns_chi03_cR::synapse0x2a61a70() {
   return (neuron0x2a3b820()*0.186863);
}

double NNfunction_ns_chi03_cR::synapse0x2a61ab0() {
   return (neuron0x2a3bb60()*-0.38921);
}

double NNfunction_ns_chi03_cR::synapse0x2a61af0() {
   return (neuron0x2a3bea0()*-0.104187);
}

double NNfunction_ns_chi03_cR::synapse0x2a61b30() {
   return (neuron0x2a3c1e0()*-0.136546);
}

double NNfunction_ns_chi03_cR::synapse0x2a61b70() {
   return (neuron0x2a3c520()*0.108254);
}

double NNfunction_ns_chi03_cR::synapse0x2a61bb0() {
   return (neuron0x2a3c860()*-1.66055);
}

double NNfunction_ns_chi03_cR::synapse0x2a61640() {
   return (neuron0x2a3cba0()*0.0740517);
}

double NNfunction_ns_chi03_cR::synapse0x2a61680() {
   return (neuron0x2a3d100()*0.513645);
}

double NNfunction_ns_chi03_cR::synapse0x2a61d00() {
   return (neuron0x2a3d320()*-0.152834);
}

double NNfunction_ns_chi03_cR::synapse0x2a61d40() {
   return (neuron0x2a3d660()*-0.149075);
}

double NNfunction_ns_chi03_cR::synapse0x2a61d80() {
   return (neuron0x2a3d9a0()*0.157468);
}

double NNfunction_ns_chi03_cR::synapse0x2a61dc0() {
   return (neuron0x2a3dce0()*0.110597);
}

double NNfunction_ns_chi03_cR::synapse0x2a61e00() {
   return (neuron0x2a3e020()*0.305465);
}

double NNfunction_ns_chi03_cR::synapse0x2a61e40() {
   return (neuron0x2a3e360()*0.243832);
}

double NNfunction_ns_chi03_cR::synapse0x2a621c0() {
   return (neuron0x2a397a0()*0.0455251);
}

double NNfunction_ns_chi03_cR::synapse0x2a62200() {
   return (neuron0x2a39ae0()*10.6067);
}

double NNfunction_ns_chi03_cR::synapse0x2a62240() {
   return (neuron0x2a39e20()*-0.0905535);
}

double NNfunction_ns_chi03_cR::synapse0x2a62280() {
   return (neuron0x2a3a160()*0.0266456);
}

double NNfunction_ns_chi03_cR::synapse0x2a622c0() {
   return (neuron0x2a3a4a0()*0.0939064);
}

double NNfunction_ns_chi03_cR::synapse0x2a62300() {
   return (neuron0x2a3a7e0()*0.0426999);
}

double NNfunction_ns_chi03_cR::synapse0x2a62340() {
   return (neuron0x2a3ab20()*0.183138);
}

double NNfunction_ns_chi03_cR::synapse0x2a62380() {
   return (neuron0x2a3ae60()*0.0730569);
}

double NNfunction_ns_chi03_cR::synapse0x2a623c0() {
   return (neuron0x2a3b1a0()*0.0974235);
}

double NNfunction_ns_chi03_cR::synapse0x2a62400() {
   return (neuron0x2a3b4e0()*0.0535321);
}

double NNfunction_ns_chi03_cR::synapse0x2a62440() {
   return (neuron0x2a3b820()*-0.118704);
}

double NNfunction_ns_chi03_cR::synapse0x2a62480() {
   return (neuron0x2a3bb60()*-0.0693067);
}

double NNfunction_ns_chi03_cR::synapse0x2a624c0() {
   return (neuron0x2a3bea0()*-0.309811);
}

double NNfunction_ns_chi03_cR::synapse0x2a62500() {
   return (neuron0x2a3c1e0()*-0.175246);
}

double NNfunction_ns_chi03_cR::synapse0x2a62540() {
   return (neuron0x2a3c520()*0.0421774);
}

double NNfunction_ns_chi03_cR::synapse0x2a62580() {
   return (neuron0x2a3c860()*0.281526);
}

double NNfunction_ns_chi03_cR::synapse0x2a62010() {
   return (neuron0x2a3cba0()*-0.0547162);
}

double NNfunction_ns_chi03_cR::synapse0x2a62050() {
   return (neuron0x2a3d100()*-0.0530484);
}

double NNfunction_ns_chi03_cR::synapse0x2a626d0() {
   return (neuron0x2a3d320()*0.0798189);
}

double NNfunction_ns_chi03_cR::synapse0x2a62710() {
   return (neuron0x2a3d660()*-0.0451618);
}

double NNfunction_ns_chi03_cR::synapse0x2a62750() {
   return (neuron0x2a3d9a0()*-0.0257686);
}

double NNfunction_ns_chi03_cR::synapse0x2a62790() {
   return (neuron0x2a3dce0()*0.0727547);
}

double NNfunction_ns_chi03_cR::synapse0x2a627d0() {
   return (neuron0x2a3e020()*-0.0807137);
}

double NNfunction_ns_chi03_cR::synapse0x2a62810() {
   return (neuron0x2a3e360()*2.56793);
}

double NNfunction_ns_chi03_cR::synapse0x2a62b90() {
   return (neuron0x2a397a0()*-0.068318);
}

double NNfunction_ns_chi03_cR::synapse0x2a62bd0() {
   return (neuron0x2a39ae0()*-11.1647);
}

double NNfunction_ns_chi03_cR::synapse0x2a62c10() {
   return (neuron0x2a39e20()*-0.122065);
}

double NNfunction_ns_chi03_cR::synapse0x2a62c50() {
   return (neuron0x2a3a160()*-0.0224528);
}

double NNfunction_ns_chi03_cR::synapse0x2a62c90() {
   return (neuron0x2a3a4a0()*0.0130563);
}

double NNfunction_ns_chi03_cR::synapse0x2a62cd0() {
   return (neuron0x2a3a7e0()*-0.0393489);
}

double NNfunction_ns_chi03_cR::synapse0x2a62d10() {
   return (neuron0x2a3ab20()*-0.0378193);
}

double NNfunction_ns_chi03_cR::synapse0x2a62d50() {
   return (neuron0x2a3ae60()*-0.0416836);
}

double NNfunction_ns_chi03_cR::synapse0x2a62d90() {
   return (neuron0x2a3b1a0()*-0.0495024);
}

double NNfunction_ns_chi03_cR::synapse0x2a62dd0() {
   return (neuron0x2a3b4e0()*0.0017996);
}

double NNfunction_ns_chi03_cR::synapse0x2a62e10() {
   return (neuron0x2a3b820()*0.0345935);
}

double NNfunction_ns_chi03_cR::synapse0x2a62e50() {
   return (neuron0x2a3bb60()*0.0318724);
}

double NNfunction_ns_chi03_cR::synapse0x2a62e90() {
   return (neuron0x2a3bea0()*0.0387305);
}

double NNfunction_ns_chi03_cR::synapse0x2a62ed0() {
   return (neuron0x2a3c1e0()*0.0719246);
}

double NNfunction_ns_chi03_cR::synapse0x2a62f10() {
   return (neuron0x2a3c520()*-0.0353846);
}

double NNfunction_ns_chi03_cR::synapse0x2a62f50() {
   return (neuron0x2a3c860()*0.282656);
}

double NNfunction_ns_chi03_cR::synapse0x2a629e0() {
   return (neuron0x2a3cba0()*0.0673618);
}

double NNfunction_ns_chi03_cR::synapse0x2a62a20() {
   return (neuron0x2a3d100()*-0.00539713);
}

double NNfunction_ns_chi03_cR::synapse0x2a630a0() {
   return (neuron0x2a3d320()*-0.027959);
}

double NNfunction_ns_chi03_cR::synapse0x2a630e0() {
   return (neuron0x2a3d660()*-0.0144716);
}

double NNfunction_ns_chi03_cR::synapse0x2a63120() {
   return (neuron0x2a3d9a0()*-0.00184445);
}

double NNfunction_ns_chi03_cR::synapse0x2a63160() {
   return (neuron0x2a3dce0()*-0.0472944);
}

double NNfunction_ns_chi03_cR::synapse0x2a631a0() {
   return (neuron0x2a3e020()*0.034329);
}

double NNfunction_ns_chi03_cR::synapse0x2a631e0() {
   return (neuron0x2a3e360()*-4.0085);
}

double NNfunction_ns_chi03_cR::synapse0x28030f0() {
   return (neuron0x2a3e7d0()*-0.240109);
}

double NNfunction_ns_chi03_cR::synapse0x2803130() {
   return (neuron0x2a3f120()*-0.711936);
}

double NNfunction_ns_chi03_cR::synapse0x2a40c90() {
   return (neuron0x2a3fc00()*-0.517725);
}

double NNfunction_ns_chi03_cR::synapse0x2a40cd0() {
   return (neuron0x2a3f6a0()*-0.442955);
}

double NNfunction_ns_chi03_cR::synapse0x2a41660() {
   return (neuron0x2a409e0()*0.196682);
}

double NNfunction_ns_chi03_cR::synapse0x2a416a0() {
   return (neuron0x2a413b0()*-0.56406);
}

double NNfunction_ns_chi03_cR::synapse0x2a42430() {
   return (neuron0x2a42180()*-0.0822953);
}

double NNfunction_ns_chi03_cR::synapse0x2a42470() {
   return (neuron0x2a42b50()*5.72649);
}

double NNfunction_ns_chi03_cR::synapse0x2a42e00() {
   return (neuron0x2a43520()*-0.00555868);
}

double NNfunction_ns_chi03_cR::synapse0x2a42e40() {
   return (neuron0x2a44000()*0.380874);
}

double NNfunction_ns_chi03_cR::synapse0x2a437d0() {
   return (neuron0x2a449d0()*2.17566);
}

double NNfunction_ns_chi03_cR::synapse0x2a43810() {
   return (neuron0x2a41ab0()*-0.32096);
}

double NNfunction_ns_chi03_cR::synapse0x2a442b0() {
   return (neuron0x2a46580()*-0.275991);
}

double NNfunction_ns_chi03_cR::synapse0x2a442f0() {
   return (neuron0x2a46f50()*-1.75024);
}

double NNfunction_ns_chi03_cR::synapse0x2a44c80() {
   return (neuron0x2a47920()*0.396489);
}

double NNfunction_ns_chi03_cR::synapse0x2a44cc0() {
   return (neuron0x2a482f0()*-1.132);
}

double NNfunction_ns_chi03_cR::synapse0x2a41d60() {
   return (neuron0x2a4a100()*-0.157622);
}

double NNfunction_ns_chi03_cR::synapse0x2a41da0() {
   return (neuron0x2a4a3e0()*-0.0271039);
}

double NNfunction_ns_chi03_cR::synapse0x2a46830() {
   return (neuron0x2a4adb0()*-0.112239);
}

double NNfunction_ns_chi03_cR::synapse0x2a46870() {
   return (neuron0x2a4b780()*-0.543179);
}

double NNfunction_ns_chi03_cR::synapse0x2a47200() {
   return (neuron0x2a4c150()*-0.0429577);
}

double NNfunction_ns_chi03_cR::synapse0x2a47240() {
   return (neuron0x2a4cb20()*-0.305296);
}

double NNfunction_ns_chi03_cR::synapse0x2a47bd0() {
   return (neuron0x2a45670()*-0.0497781);
}

double NNfunction_ns_chi03_cR::synapse0x2a47c10() {
   return (neuron0x2a46040()*0.298199);
}

double NNfunction_ns_chi03_cR::synapse0x2a485a0() {
   return (neuron0x2a4f8b0()*-1.54062);
}

double NNfunction_ns_chi03_cR::synapse0x2a485e0() {
   return (neuron0x2a50280()*1.76499);
}

double NNfunction_ns_chi03_cR::synapse0x2a3c740() {
   return (neuron0x2a50c50()*-3.93831);
}

double NNfunction_ns_chi03_cR::synapse0x2a3c780() {
   return (neuron0x2a51620()*0.225767);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a690() {
   return (neuron0x2a51ff0()*0.274915);
}

double NNfunction_ns_chi03_cR::synapse0x2a4a6d0() {
   return (neuron0x2a529c0()*0.670828);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b060() {
   return (neuron0x2a53390()*-2.61904);
}

double NNfunction_ns_chi03_cR::synapse0x2a4b0a0() {
   return (neuron0x2a53d60()*-0.408568);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ba30() {
   return (neuron0x2a49df0()*0.537438);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ba70() {
   return (neuron0x2a56940()*-1.11323);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c400() {
   return (neuron0x2a57310()*-1.17758);
}

double NNfunction_ns_chi03_cR::synapse0x2a4c440() {
   return (neuron0x2a57ce0()*0.138578);
}

double NNfunction_ns_chi03_cR::synapse0x2a4cdd0() {
   return (neuron0x2a586b0()*5.654);
}

double NNfunction_ns_chi03_cR::synapse0x2a4ce10() {
   return (neuron0x2a59080()*-0.3451);
}

double NNfunction_ns_chi03_cR::synapse0x2a45920() {
   return (neuron0x2a59a50()*0.883386);
}

double NNfunction_ns_chi03_cR::synapse0x2a45960() {
   return (neuron0x2a5a420()*1.08604);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f1d0() {
   return (neuron0x2a5adf0()*-0.253299);
}

double NNfunction_ns_chi03_cR::synapse0x2a4f210() {
   return (neuron0x2a5b9d0()*4.08402);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fb60() {
   return (neuron0x2a5c3a0()*-0.097929);
}

double NNfunction_ns_chi03_cR::synapse0x2a4fba0() {
   return (neuron0x2a4d220()*1.23779);
}

double NNfunction_ns_chi03_cR::synapse0x2a50530() {
   return (neuron0x2a4dbf0()*-3.89036);
}

double NNfunction_ns_chi03_cR::synapse0x2a50570() {
   return (neuron0x2a4e5c0()*0.629318);
}

double NNfunction_ns_chi03_cR::synapse0x2a50f00() {
   return (neuron0x2a60c00()*0.59877);
}

double NNfunction_ns_chi03_cR::synapse0x2a50f40() {
   return (neuron0x2a614b0()*-0.328735);
}

double NNfunction_ns_chi03_cR::synapse0x2a518d0() {
   return (neuron0x2a61e80()*1.79255);
}

double NNfunction_ns_chi03_cR::synapse0x2a51910() {
   return (neuron0x2a62850()*1.62985);
}

double NNfunction_ns_chi03_cR::synapse0x2a54010() {
   return (neuron0x2a3e7d0()*0.0568289);
}

double NNfunction_ns_chi03_cR::synapse0x2a54050() {
   return (neuron0x2a3f120()*5.19357);
}

double NNfunction_ns_chi03_cR::synapse0x2a495d0() {
   return (neuron0x2a3fc00()*0.0911663);
}

double NNfunction_ns_chi03_cR::synapse0x2a49610() {
   return (neuron0x2a3f6a0()*-0.0558577);
}

double NNfunction_ns_chi03_cR::synapse0x2a56bf0() {
   return (neuron0x2a409e0()*-0.155176);
}

double NNfunction_ns_chi03_cR::synapse0x2a56c30() {
   return (neuron0x2a413b0()*1.30943);
}

double NNfunction_ns_chi03_cR::synapse0x2a575c0() {
   return (neuron0x2a42180()*-0.683267);
}

double NNfunction_ns_chi03_cR::synapse0x2a57600() {
   return (neuron0x2a42b50()*-0.579648);
}

double NNfunction_ns_chi03_cR::synapse0x2a57f90() {
   return (neuron0x2a43520()*0.0348688);
}

double NNfunction_ns_chi03_cR::synapse0x2a57fd0() {
   return (neuron0x2a44000()*-0.042555);
}

double NNfunction_ns_chi03_cR::synapse0x2a58960() {
   return (neuron0x2a449d0()*4.18774);
}

double NNfunction_ns_chi03_cR::synapse0x2a589a0() {
   return (neuron0x2a41ab0()*-0.106507);
}

double NNfunction_ns_chi03_cR::synapse0x2a59330() {
   return (neuron0x2a46580()*-0.103798);
}

double NNfunction_ns_chi03_cR::synapse0x2a59370() {
   return (neuron0x2a46f50()*-3.48542);
}

double NNfunction_ns_chi03_cR::synapse0x2a59d00() {
   return (neuron0x2a47920()*0.204498);
}

double NNfunction_ns_chi03_cR::synapse0x2a59d40() {
   return (neuron0x2a482f0()*-4.64446);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a6d0() {
   return (neuron0x2a4a100()*0.302872);
}

double NNfunction_ns_chi03_cR::synapse0x2a5a710() {
   return (neuron0x2a4a3e0()*0.0394477);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b0a0() {
   return (neuron0x2a4adb0()*-0.291945);
}

double NNfunction_ns_chi03_cR::synapse0x2a5b0e0() {
   return (neuron0x2a4b780()*0.720347);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bc80() {
   return (neuron0x2a4c150()*0.0665664);
}

double NNfunction_ns_chi03_cR::synapse0x2a5bcc0() {
   return (neuron0x2a4cb20()*0.36644);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c650() {
   return (neuron0x2a45670()*-0.0281088);
}

double NNfunction_ns_chi03_cR::synapse0x2a5c690() {
   return (neuron0x2a46040()*-0.00548079);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d4d0() {
   return (neuron0x2a4f8b0()*-1.22803);
}

double NNfunction_ns_chi03_cR::synapse0x2a4d510() {
   return (neuron0x2a50280()*-1.17704);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dea0() {
   return (neuron0x2a50c50()*1.56812);
}

double NNfunction_ns_chi03_cR::synapse0x2a4dee0() {
   return (neuron0x2a51620()*-0.228121);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e870() {
   return (neuron0x2a51ff0()*-0.14264);
}

double NNfunction_ns_chi03_cR::synapse0x2a4e8b0() {
   return (neuron0x2a529c0()*0.506858);
}

double NNfunction_ns_chi03_cR::synapse0x2a60d90() {
   return (neuron0x2a53390()*1.22448);
}

double NNfunction_ns_chi03_cR::synapse0x2a60dd0() {
   return (neuron0x2a53d60()*0.250777);
}

double NNfunction_ns_chi03_cR::synapse0x2a61760() {
   return (neuron0x2a49df0()*-1.66176);
}

double NNfunction_ns_chi03_cR::synapse0x2a617a0() {
   return (neuron0x2a56940()*-0.935388);
}

double NNfunction_ns_chi03_cR::synapse0x2a62130() {
   return (neuron0x2a57310()*-1.16861);
}

double NNfunction_ns_chi03_cR::synapse0x2a62170() {
   return (neuron0x2a57ce0()*0.592862);
}

double NNfunction_ns_chi03_cR::synapse0x2a62b00() {
   return (neuron0x2a586b0()*-3.93626);
}

double NNfunction_ns_chi03_cR::synapse0x2a62b40() {
   return (neuron0x2a59080()*-0.275443);
}

double NNfunction_ns_chi03_cR::synapse0x2a3e9f0() {
   return (neuron0x2a59a50()*0.582077);
}

double NNfunction_ns_chi03_cR::synapse0x2a3ea30() {
   return (neuron0x2a5a420()*-1.88839);
}

double NNfunction_ns_chi03_cR::synapse0x2a522a0() {
   return (neuron0x2a5adf0()*0.0756232);
}

double NNfunction_ns_chi03_cR::synapse0x2a522e0() {
   return (neuron0x2a5b9d0()*0.470266);
}

double NNfunction_ns_chi03_cR::synapse0x2a63220() {
   return (neuron0x2a5c3a0()*-0.0765522);
}

double NNfunction_ns_chi03_cR::synapse0x2a63260() {
   return (neuron0x2a4d220()*-0.522699);
}

double NNfunction_ns_chi03_cR::synapse0x2a632a0() {
   return (neuron0x2a4dbf0()*1.82469);
}

double NNfunction_ns_chi03_cR::synapse0x2a632e0() {
   return (neuron0x2a4e5c0()*-0.671163);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a190() {
   return (neuron0x2a60c00()*-0.120529);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a1d0() {
   return (neuron0x2a614b0()*-0.0889384);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a210() {
   return (neuron0x2a61e80()*-0.703684);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a250() {
   return (neuron0x2a62850()*-0.919268);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a5d0() {
   return (neuron0x2a3e7d0()*0.0407801);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a610() {
   return (neuron0x2a3f120()*0.160871);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a650() {
   return (neuron0x2a3fc00()*1.62056);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a690() {
   return (neuron0x2a3f6a0()*0.0865828);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a6d0() {
   return (neuron0x2a409e0()*-0.0325362);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a710() {
   return (neuron0x2a413b0()*0.587906);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a750() {
   return (neuron0x2a42180()*1.32709);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a790() {
   return (neuron0x2a42b50()*0.728635);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a7d0() {
   return (neuron0x2a43520()*0.263448);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a810() {
   return (neuron0x2a44000()*-0.0630966);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a850() {
   return (neuron0x2a449d0()*-0.704842);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a890() {
   return (neuron0x2a41ab0()*0.297751);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a8d0() {
   return (neuron0x2a46580()*0.0144268);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a910() {
   return (neuron0x2a46f50()*0.78664);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a950() {
   return (neuron0x2a47920()*0.881982);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a990() {
   return (neuron0x2a482f0()*-0.453859);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a420() {
   return (neuron0x2a4a100()*0.0629181);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a460() {
   return (neuron0x2a4a3e0()*0.0298484);
}

double NNfunction_ns_chi03_cR::synapse0x2a6aae0() {
   return (neuron0x2a4adb0()*-0.424832);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ab20() {
   return (neuron0x2a4b780()*-1.00195);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ab60() {
   return (neuron0x2a4c150()*-2.09982);
}

double NNfunction_ns_chi03_cR::synapse0x2a6aba0() {
   return (neuron0x2a4cb20()*0.576068);
}

double NNfunction_ns_chi03_cR::synapse0x2a6abe0() {
   return (neuron0x2a45670()*-0.0305922);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ac20() {
   return (neuron0x2a46040()*0.203529);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ac60() {
   return (neuron0x2a4f8b0()*0.283803);
}

double NNfunction_ns_chi03_cR::synapse0x2a6aca0() {
   return (neuron0x2a50280()*0.0879149);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ace0() {
   return (neuron0x2a50c50()*0.435686);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ad20() {
   return (neuron0x2a51620()*0.0149571);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ad60() {
   return (neuron0x2a51ff0()*-0.307692);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ada0() {
   return (neuron0x2a529c0()*-4.8426);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ade0() {
   return (neuron0x2a53390()*3.33027);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ae20() {
   return (neuron0x2a53d60()*0.0381319);
}

double NNfunction_ns_chi03_cR::synapse0x2a6a9d0() {
   return (neuron0x2a49df0()*-0.18725);
}

double NNfunction_ns_chi03_cR::synapse0x2a6aa10() {
   return (neuron0x2a56940()*-3.94914);
}

double NNfunction_ns_chi03_cR::synapse0x2a6aa50() {
   return (neuron0x2a57310()*-5.03107);
}

double NNfunction_ns_chi03_cR::synapse0x2a6aa90() {
   return (neuron0x2a57ce0()*4.63084);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b070() {
   return (neuron0x2a586b0()*0.068646);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b0b0() {
   return (neuron0x2a59080()*0.599916);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b0f0() {
   return (neuron0x2a59a50()*-0.580597);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b130() {
   return (neuron0x2a5a420()*-1.27155);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b170() {
   return (neuron0x2a5adf0()*3.03509);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b1b0() {
   return (neuron0x2a5b9d0()*0.087786);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b1f0() {
   return (neuron0x2a5c3a0()*-0.145844);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b230() {
   return (neuron0x2a4d220()*0.0632575);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b270() {
   return (neuron0x2a4dbf0()*0.53706);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b2b0() {
   return (neuron0x2a4e5c0()*-0.527611);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b2f0() {
   return (neuron0x2a60c00()*0.487707);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b330() {
   return (neuron0x2a614b0()*0.105358);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b370() {
   return (neuron0x2a61e80()*-0.200279);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b3b0() {
   return (neuron0x2a62850()*0.0901033);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b730() {
   return (neuron0x2a3e7d0()*-1.592);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b770() {
   return (neuron0x2a3f120()*0.781999);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b7b0() {
   return (neuron0x2a3fc00()*-1.59628);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b7f0() {
   return (neuron0x2a3f6a0()*-1.13717);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b830() {
   return (neuron0x2a409e0()*-1.22563);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b870() {
   return (neuron0x2a413b0()*-1.46413);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b8b0() {
   return (neuron0x2a42180()*-1.0616);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b8f0() {
   return (neuron0x2a42b50()*8.86889);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b930() {
   return (neuron0x2a43520()*0.0135893);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b970() {
   return (neuron0x2a44000()*0.774434);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b9b0() {
   return (neuron0x2a449d0()*-6.68885);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b9f0() {
   return (neuron0x2a41ab0()*-1.33978);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ba30() {
   return (neuron0x2a46580()*1.4369);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ba70() {
   return (neuron0x2a46f50()*1.97027);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bab0() {
   return (neuron0x2a47920()*0.259889);
}

double NNfunction_ns_chi03_cR::synapse0x2a6baf0() {
   return (neuron0x2a482f0()*4.9849);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b580() {
   return (neuron0x2a4a100()*2.47861);
}

double NNfunction_ns_chi03_cR::synapse0x2a6b5c0() {
   return (neuron0x2a4a3e0()*-1.28001);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bc40() {
   return (neuron0x2a4adb0()*0.266705);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bc80() {
   return (neuron0x2a4b780()*1.79241);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bcc0() {
   return (neuron0x2a4c150()*0.345511);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bd00() {
   return (neuron0x2a4cb20()*-0.527732);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bd40() {
   return (neuron0x2a45670()*1.46671);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bd80() {
   return (neuron0x2a46040()*-1.38817);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bdc0() {
   return (neuron0x2a4f8b0()*-5.44847);
}

double NNfunction_ns_chi03_cR::synapse0x2a6be00() {
   return (neuron0x2a50280()*-1.53071);
}

double NNfunction_ns_chi03_cR::synapse0x2a6be40() {
   return (neuron0x2a50c50()*0.420338);
}

double NNfunction_ns_chi03_cR::synapse0x2a6be80() {
   return (neuron0x2a51620()*1.88474);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bec0() {
   return (neuron0x2a51ff0()*1.45907);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bf00() {
   return (neuron0x2a529c0()*-1.04979);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bf40() {
   return (neuron0x2a53390()*2.48666);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bf80() {
   return (neuron0x2a53d60()*-4.30806);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bb30() {
   return (neuron0x2a49df0()*-1.23602);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bb70() {
   return (neuron0x2a56940()*-2.05351);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bbb0() {
   return (neuron0x2a57310()*-1.75167);
}

double NNfunction_ns_chi03_cR::synapse0x2a6bbf0() {
   return (neuron0x2a57ce0()*-0.302357);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c1d0() {
   return (neuron0x2a586b0()*-1.79928);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c210() {
   return (neuron0x2a59080()*-1.95549);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c250() {
   return (neuron0x2a59a50()*4.91117);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c290() {
   return (neuron0x2a5a420()*-0.893645);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c2d0() {
   return (neuron0x2a5adf0()*-0.761166);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c310() {
   return (neuron0x2a5b9d0()*-4.19336);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c350() {
   return (neuron0x2a5c3a0()*1.19133);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c390() {
   return (neuron0x2a4d220()*4.60906);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c3d0() {
   return (neuron0x2a4dbf0()*-2.68302);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c410() {
   return (neuron0x2a4e5c0()*2.65264);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c450() {
   return (neuron0x2a60c00()*-0.792022);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c490() {
   return (neuron0x2a614b0()*-1.40465);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c4d0() {
   return (neuron0x2a61e80()*8.28404);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c510() {
   return (neuron0x2a62850()*-0.0467729);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c890() {
   return (neuron0x2a3e7d0()*0.260347);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c8d0() {
   return (neuron0x2a3f120()*-0.767089);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c910() {
   return (neuron0x2a3fc00()*0.0904888);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c950() {
   return (neuron0x2a3f6a0()*0.241701);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c990() {
   return (neuron0x2a409e0()*-0.0139264);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c9d0() {
   return (neuron0x2a413b0()*-0.322813);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ca10() {
   return (neuron0x2a42180()*1.68993);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ca50() {
   return (neuron0x2a42b50()*1.37427);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ca90() {
   return (neuron0x2a43520()*0.139662);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cad0() {
   return (neuron0x2a44000()*-0.22965);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cb10() {
   return (neuron0x2a449d0()*3.06594);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cb50() {
   return (neuron0x2a41ab0()*0.266628);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cb90() {
   return (neuron0x2a46580()*-0.0130539);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cbd0() {
   return (neuron0x2a46f50()*-0.326252);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cc10() {
   return (neuron0x2a47920()*-0.445632);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cc50() {
   return (neuron0x2a482f0()*-0.0128384);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c6e0() {
   return (neuron0x2a4a100()*-0.0739351);
}

double NNfunction_ns_chi03_cR::synapse0x2a6c720() {
   return (neuron0x2a4a3e0()*0.121752);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cda0() {
   return (neuron0x2a4adb0()*-0.0276804);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cde0() {
   return (neuron0x2a4b780()*-0.192765);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ce20() {
   return (neuron0x2a4c150()*0.894032);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ce60() {
   return (neuron0x2a4cb20()*0.05708);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cea0() {
   return (neuron0x2a45670()*-0.0733523);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cee0() {
   return (neuron0x2a46040()*0.0489547);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cf20() {
   return (neuron0x2a4f8b0()*0.505992);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cf60() {
   return (neuron0x2a50280()*-2.84124);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cfa0() {
   return (neuron0x2a50c50()*1.75187);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cfe0() {
   return (neuron0x2a51620()*-0.181882);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d020() {
   return (neuron0x2a51ff0()*-0.150727);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d060() {
   return (neuron0x2a529c0()*0.898535);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d0a0() {
   return (neuron0x2a53390()*-0.495686);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d0e0() {
   return (neuron0x2a53d60()*0.487968);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cc90() {
   return (neuron0x2a49df0()*3.35291);
}

double NNfunction_ns_chi03_cR::synapse0x2a6ccd0() {
   return (neuron0x2a56940()*-0.432053);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cd10() {
   return (neuron0x2a57310()*-0.605887);
}

double NNfunction_ns_chi03_cR::synapse0x2a6cd50() {
   return (neuron0x2a57ce0()*-0.827212);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d330() {
   return (neuron0x2a586b0()*-0.0404539);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d370() {
   return (neuron0x2a59080()*-0.338367);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d3b0() {
   return (neuron0x2a59a50()*-0.601242);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d3f0() {
   return (neuron0x2a5a420()*0.335572);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d430() {
   return (neuron0x2a5adf0()*-0.472691);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d470() {
   return (neuron0x2a5b9d0()*-0.101358);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d4b0() {
   return (neuron0x2a5c3a0()*-0.0746255);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d4f0() {
   return (neuron0x2a4d220()*-0.5045);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d530() {
   return (neuron0x2a4dbf0()*0.998461);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d570() {
   return (neuron0x2a4e5c0()*0.214218);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d5b0() {
   return (neuron0x2a60c00()*-0.182191);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d5f0() {
   return (neuron0x2a614b0()*0.26029);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d630() {
   return (neuron0x2a61e80()*-4.53028);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d670() {
   return (neuron0x2a62850()*-6.13176);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d8d0() {
   return (neuron0x2a69a50()*-3.18735);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d910() {
   return (neuron0x2a69df0()*-2.9177);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d950() {
   return (neuron0x2a6a290()*13.3138);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d990() {
   return (neuron0x2a6b3f0()*-2.49725);
}

double NNfunction_ns_chi03_cR::synapse0x2a6d9d0() {
   return (neuron0x2a6c550()*-3.27136);
}

