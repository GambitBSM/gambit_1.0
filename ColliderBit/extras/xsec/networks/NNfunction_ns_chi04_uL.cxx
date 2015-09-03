#include "NNfunction_ns_chi04_uL.h"
#include <cmath>

double NNfunction_ns_chi04_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8378)/15.1044;
   input1 = (in1 - 25.5089)/457.37;
   input2 = (in2 - 493.457)/534.812;
   input3 = (in3 - 137.734)/719.217;
   input4 = (in4 - 848.763)/813.477;
   input5 = (in5 - 759.37)/813.166;
   input6 = (in6 - 757.155)/810.568;
   input7 = (in7 - 753.583)/791.164;
   input8 = (in8 - 762.587)/832.666;
   input9 = (in9 - 751.517)/817.197;
   input10 = (in10 - 777.108)/826.633;
   input11 = (in11 - 403.587)/316.933;
   input12 = (in12 - 687.774)/708.978;
   input13 = (in13 - 496.938)/418.583;
   input14 = (in14 - 694.886)/674.494;
   input15 = (in15 - 701.506)/681.081;
   input16 = (in16 - 500.112)/464.41;
   input17 = (in17 - 710.081)/736.249;
   input18 = (in18 - 713.02)/744.001;
   input19 = (in19 - 712.6)/707.488;
   input20 = (in20 - -108.797)/433.762;
   input21 = (in21 - -140.45)/978.968;
   input22 = (in22 - 5.03146)/990.28;
   input23 = (in23 - -44.5313)/338.98;
   switch(index) {
     case 0:
         return neuron0x3a70c80();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.8378)/15.1044;
   input1 = (input[1] - 25.5089)/457.37;
   input2 = (input[2] - 493.457)/534.812;
   input3 = (input[3] - 137.734)/719.217;
   input4 = (input[4] - 848.763)/813.477;
   input5 = (input[5] - 759.37)/813.166;
   input6 = (input[6] - 757.155)/810.568;
   input7 = (input[7] - 753.583)/791.164;
   input8 = (input[8] - 762.587)/832.666;
   input9 = (input[9] - 751.517)/817.197;
   input10 = (input[10] - 777.108)/826.633;
   input11 = (input[11] - 403.587)/316.933;
   input12 = (input[12] - 687.774)/708.978;
   input13 = (input[13] - 496.938)/418.583;
   input14 = (input[14] - 694.886)/674.494;
   input15 = (input[15] - 701.506)/681.081;
   input16 = (input[16] - 500.112)/464.41;
   input17 = (input[17] - 710.081)/736.249;
   input18 = (input[18] - 713.02)/744.001;
   input19 = (input[19] - 712.6)/707.488;
   input20 = (input[20] - -108.797)/433.762;
   input21 = (input[21] - -140.45)/978.968;
   input22 = (input[22] - 5.03146)/990.28;
   input23 = (input[23] - -44.5313)/338.98;
   switch(index) {
     case 0:
         return neuron0x3a70c80();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_uL::neuron0x3a3bcf0() {
   return input0;
}

double NNfunction_ns_chi04_uL::neuron0x3a3bfa0() {
   return input1;
}

double NNfunction_ns_chi04_uL::neuron0x3a3c2e0() {
   return input2;
}

double NNfunction_ns_chi04_uL::neuron0x3a3c620() {
   return input3;
}

double NNfunction_ns_chi04_uL::neuron0x3a3c960() {
   return input4;
}

double NNfunction_ns_chi04_uL::neuron0x3a3cca0() {
   return input5;
}

double NNfunction_ns_chi04_uL::neuron0x3a3cfe0() {
   return input6;
}

double NNfunction_ns_chi04_uL::neuron0x3a3d320() {
   return input7;
}

double NNfunction_ns_chi04_uL::neuron0x3a3d660() {
   return input8;
}

double NNfunction_ns_chi04_uL::neuron0x3a3d9a0() {
   return input9;
}

double NNfunction_ns_chi04_uL::neuron0x3a3dce0() {
   return input10;
}

double NNfunction_ns_chi04_uL::neuron0x3a3e020() {
   return input11;
}

double NNfunction_ns_chi04_uL::neuron0x3a3e360() {
   return input12;
}

double NNfunction_ns_chi04_uL::neuron0x3a3e6a0() {
   return input13;
}

double NNfunction_ns_chi04_uL::neuron0x3a3e9e0() {
   return input14;
}

double NNfunction_ns_chi04_uL::neuron0x3a3ed20() {
   return input15;
}

double NNfunction_ns_chi04_uL::neuron0x3a3f060() {
   return input16;
}

double NNfunction_ns_chi04_uL::neuron0x3a3f5c0() {
   return input17;
}

double NNfunction_ns_chi04_uL::neuron0x3a3f900() {
   return input18;
}

double NNfunction_ns_chi04_uL::neuron0x3a3fc40() {
   return input19;
}

double NNfunction_ns_chi04_uL::neuron0x3a3ff80() {
   return input20;
}

double NNfunction_ns_chi04_uL::neuron0x3a402c0() {
   return input21;
}

double NNfunction_ns_chi04_uL::neuron0x3a40600() {
   return input22;
}

double NNfunction_ns_chi04_uL::neuron0x3a40940() {
   return input23;
}

double NNfunction_ns_chi04_uL::input0x3a40db0() {
   double input = -0.593102;
   input += synapse0x3a410f0();
   input += synapse0x3a41130();
   input += synapse0x3a41170();
   input += synapse0x3a411b0();
   input += synapse0x3a411f0();
   input += synapse0x3a41230();
   input += synapse0x3a41270();
   input += synapse0x3a412b0();
   input += synapse0x3a412f0();
   input += synapse0x3a41330();
   input += synapse0x3a41370();
   input += synapse0x3a413b0();
   input += synapse0x3a413f0();
   input += synapse0x3a41430();
   input += synapse0x3a41470();
   input += synapse0x3a414b0();
   input += synapse0x3a40f40();
   input += synapse0x3a40f80();
   input += synapse0x37f7e70();
   input += synapse0x37f7eb0();
   input += synapse0x3a414f0();
   input += synapse0x3a41530();
   input += synapse0x3a41570();
   input += synapse0x3a415b0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a40db0() {
   double input = input0x3a40db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a415f0() {
   double input = -1.11927;
   input += synapse0x3a41930();
   input += synapse0x3a41970();
   input += synapse0x3a419b0();
   input += synapse0x3a419f0();
   input += synapse0x3a41a30();
   input += synapse0x3a41a70();
   input += synapse0x3a41ab0();
   input += synapse0x3a41af0();
   input += synapse0x3a41b30();
   input += synapse0x37f7cc0();
   input += synapse0x37f7d00();
   input += synapse0x37f7d40();
   input += synapse0x37f7d80();
   input += synapse0x3a41d80();
   input += synapse0x3a41dc0();
   input += synapse0x3a41e00();
   input += synapse0x3a41780();
   input += synapse0x3a417c0();
   input += synapse0x3a41f50();
   input += synapse0x3a41f90();
   input += synapse0x3a41fd0();
   input += synapse0x3a42010();
   input += synapse0x3a42050();
   input += synapse0x3a42090();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a415f0() {
   double input = input0x3a415f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a420d0() {
   double input = 1.3146;
   input += synapse0x3a42410();
   input += synapse0x3a42450();
   input += synapse0x3a42490();
   input += synapse0x3a424d0();
   input += synapse0x3a42510();
   input += synapse0x3a42550();
   input += synapse0x3a42590();
   input += synapse0x3a425d0();
   input += synapse0x3a42610();
   input += synapse0x3a42650();
   input += synapse0x3a42690();
   input += synapse0x3a426d0();
   input += synapse0x3a42710();
   input += synapse0x3a42750();
   input += synapse0x3a42790();
   input += synapse0x3a427d0();
   input += synapse0x3a42260();
   input += synapse0x3a422a0();
   input += synapse0x37f8560();
   input += synapse0x3805e30();
   input += synapse0x3805e70();
   input += synapse0x3a44700();
   input += synapse0x3a44740();
   input += synapse0x3a3ba30();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a420d0() {
   double input = input0x3a420d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a41b70() {
   double input = -6.71547;
   input += synapse0x3a3bb00();
   input += synapse0x38066b0();
   input += synapse0x3a41d00();
   input += synapse0x3a41d40();
   input += synapse0x3a42920();
   input += synapse0x3a42960();
   input += synapse0x3a429a0();
   input += synapse0x3a429e0();
   input += synapse0x3a42a20();
   input += synapse0x3a42a60();
   input += synapse0x3a42aa0();
   input += synapse0x3a42ae0();
   input += synapse0x3a42b20();
   input += synapse0x3a42b60();
   input += synapse0x3a42ba0();
   input += synapse0x3a42be0();
   input += synapse0x3a3ba70();
   input += synapse0x3a3bab0();
   input += synapse0x3a42d30();
   input += synapse0x3a42d70();
   input += synapse0x3a42db0();
   input += synapse0x3a42df0();
   input += synapse0x3a42e30();
   input += synapse0x3a42e70();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a41b70() {
   double input = input0x3a41b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a42eb0() {
   double input = -0.822632;
   input += synapse0x3a431f0();
   input += synapse0x3a43230();
   input += synapse0x3a43270();
   input += synapse0x3a432b0();
   input += synapse0x3a432f0();
   input += synapse0x3a43330();
   input += synapse0x3a43370();
   input += synapse0x3a433b0();
   input += synapse0x3a433f0();
   input += synapse0x3a43430();
   input += synapse0x3a43470();
   input += synapse0x3a434b0();
   input += synapse0x3a434f0();
   input += synapse0x3a43530();
   input += synapse0x3a43570();
   input += synapse0x3a435b0();
   input += synapse0x3a43700();
   input += synapse0x3a43040();
   input += synapse0x3a43080();
   input += synapse0x3a44840();
   input += synapse0x3a44880();
   input += synapse0x3a448c0();
   input += synapse0x3a44900();
   input += synapse0x3a44940();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a42eb0() {
   double input = input0x3a42eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a44980() {
   double input = -0.579106;
   input += synapse0x3a44cc0();
   input += synapse0x3a44d00();
   input += synapse0x3a44d40();
   input += synapse0x3a44d80();
   input += synapse0x3a44dc0();
   input += synapse0x3a44e00();
   input += synapse0x3a44e40();
   input += synapse0x3a44e80();
   input += synapse0x3a44ec0();
   input += synapse0x3806180();
   input += synapse0x38061c0();
   input += synapse0x3806200();
   input += synapse0x3806240();
   input += synapse0x3806280();
   input += synapse0x38062c0();
   input += synapse0x3806300();
   input += synapse0x3a44b10();
   input += synapse0x3a44b50();
   input += synapse0x3806450();
   input += synapse0x3806490();
   input += synapse0x38064d0();
   input += synapse0x3806510();
   input += synapse0x3806550();
   input += synapse0x3a45710();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a44980() {
   double input = input0x3a44980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a45750() {
   double input = 0.10913;
   input += synapse0x3a45a90();
   input += synapse0x3a45ad0();
   input += synapse0x3a45b10();
   input += synapse0x3a45b50();
   input += synapse0x3a45b90();
   input += synapse0x3a45bd0();
   input += synapse0x3a45c10();
   input += synapse0x3a45c50();
   input += synapse0x3a45c90();
   input += synapse0x3a45cd0();
   input += synapse0x3a45d10();
   input += synapse0x3a45d50();
   input += synapse0x3a45d90();
   input += synapse0x3a45dd0();
   input += synapse0x3a45e10();
   input += synapse0x3a45e50();
   input += synapse0x3a458e0();
   input += synapse0x3a45920();
   input += synapse0x3a45fa0();
   input += synapse0x3a45fe0();
   input += synapse0x3a46020();
   input += synapse0x3a46060();
   input += synapse0x3a460a0();
   input += synapse0x3a460e0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a45750() {
   double input = input0x3a45750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a46120() {
   double input = -0.444207;
   input += synapse0x3a46460();
   input += synapse0x3a464a0();
   input += synapse0x3a464e0();
   input += synapse0x3a46520();
   input += synapse0x3a46560();
   input += synapse0x3a465a0();
   input += synapse0x3a465e0();
   input += synapse0x3a46620();
   input += synapse0x3a46660();
   input += synapse0x3a466a0();
   input += synapse0x3a466e0();
   input += synapse0x3a46720();
   input += synapse0x3a46760();
   input += synapse0x3a467a0();
   input += synapse0x3a467e0();
   input += synapse0x3a46820();
   input += synapse0x3a462b0();
   input += synapse0x3a462f0();
   input += synapse0x3a46970();
   input += synapse0x3a469b0();
   input += synapse0x3a469f0();
   input += synapse0x3a46a30();
   input += synapse0x3a46a70();
   input += synapse0x3a46ab0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a46120() {
   double input = input0x3a46120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a46af0() {
   double input = 0.0927168;
   input += synapse0x3a3f4b0();
   input += synapse0x3a3f4f0();
   input += synapse0x3a3f530();
   input += synapse0x3a3f570();
   input += synapse0x3a47040();
   input += synapse0x3a47080();
   input += synapse0x3a470c0();
   input += synapse0x3a47100();
   input += synapse0x3a47140();
   input += synapse0x3a47180();
   input += synapse0x3a471c0();
   input += synapse0x3a47200();
   input += synapse0x3a47240();
   input += synapse0x3a47280();
   input += synapse0x3a472c0();
   input += synapse0x3a47300();
   input += synapse0x3a46c80();
   input += synapse0x3a46cc0();
   input += synapse0x3a47450();
   input += synapse0x3a47490();
   input += synapse0x3a474d0();
   input += synapse0x3a47510();
   input += synapse0x3a47550();
   input += synapse0x3a47590();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a46af0() {
   double input = input0x3a46af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a475d0() {
   double input = 0.000611128;
   input += synapse0x3a47910();
   input += synapse0x3a47950();
   input += synapse0x3a47990();
   input += synapse0x3a479d0();
   input += synapse0x3a47a10();
   input += synapse0x3a47a50();
   input += synapse0x3a47a90();
   input += synapse0x3a47ad0();
   input += synapse0x3a47b10();
   input += synapse0x3a47b50();
   input += synapse0x3a47b90();
   input += synapse0x3a47bd0();
   input += synapse0x3a47c10();
   input += synapse0x3a47c50();
   input += synapse0x3a47c90();
   input += synapse0x3a47cd0();
   input += synapse0x3a47760();
   input += synapse0x3a477a0();
   input += synapse0x3a47e20();
   input += synapse0x3a47e60();
   input += synapse0x3a47ea0();
   input += synapse0x3a47ee0();
   input += synapse0x3a47f20();
   input += synapse0x3a47f60();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a475d0() {
   double input = input0x3a475d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a47fa0() {
   double input = 2.49375;
   input += synapse0x3a482e0();
   input += synapse0x3a48320();
   input += synapse0x3a48360();
   input += synapse0x3a483a0();
   input += synapse0x3a483e0();
   input += synapse0x3a48420();
   input += synapse0x3a48460();
   input += synapse0x3a484a0();
   input += synapse0x3a484e0();
   input += synapse0x3a48520();
   input += synapse0x3a48560();
   input += synapse0x3a485a0();
   input += synapse0x3a485e0();
   input += synapse0x3a48620();
   input += synapse0x3a48660();
   input += synapse0x3a486a0();
   input += synapse0x3a48130();
   input += synapse0x3a48170();
   input += synapse0x3a44f00();
   input += synapse0x3a44f40();
   input += synapse0x3a44f80();
   input += synapse0x3a44fc0();
   input += synapse0x3a45000();
   input += synapse0x3a45040();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a47fa0() {
   double input = input0x3a47fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a45080() {
   double input = 0.282876;
   input += synapse0x3a453c0();
   input += synapse0x3a45400();
   input += synapse0x3a45440();
   input += synapse0x3a45480();
   input += synapse0x3a454c0();
   input += synapse0x3a45500();
   input += synapse0x3a45540();
   input += synapse0x3a45580();
   input += synapse0x3a455c0();
   input += synapse0x3a45600();
   input += synapse0x3a45640();
   input += synapse0x3a45680();
   input += synapse0x3a456c0();
   input += synapse0x3a49800();
   input += synapse0x3a49840();
   input += synapse0x3a49880();
   input += synapse0x3a45210();
   input += synapse0x3a45250();
   input += synapse0x3a499d0();
   input += synapse0x3a49a10();
   input += synapse0x3a49a50();
   input += synapse0x3a49a90();
   input += synapse0x3a49ad0();
   input += synapse0x3a49b10();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a45080() {
   double input = input0x3a45080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a49b50() {
   double input = -0.477928;
   input += synapse0x3a49e90();
   input += synapse0x3a49ed0();
   input += synapse0x3a49f10();
   input += synapse0x3a49f50();
   input += synapse0x3a49f90();
   input += synapse0x3a49fd0();
   input += synapse0x3a4a010();
   input += synapse0x3a4a050();
   input += synapse0x3a4a090();
   input += synapse0x3a4a0d0();
   input += synapse0x3a4a110();
   input += synapse0x3a4a150();
   input += synapse0x3a4a190();
   input += synapse0x3a4a1d0();
   input += synapse0x3a4a210();
   input += synapse0x3a4a250();
   input += synapse0x3a49ce0();
   input += synapse0x3a49d20();
   input += synapse0x3a4a3a0();
   input += synapse0x3a4a3e0();
   input += synapse0x3a4a420();
   input += synapse0x3a4a460();
   input += synapse0x3a4a4a0();
   input += synapse0x3a4a4e0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a49b50() {
   double input = input0x3a49b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4a520() {
   double input = 0.114361;
   input += synapse0x3a4a860();
   input += synapse0x3a4a8a0();
   input += synapse0x3a4a8e0();
   input += synapse0x3a4a920();
   input += synapse0x3a4a960();
   input += synapse0x3a4a9a0();
   input += synapse0x3a4a9e0();
   input += synapse0x3a4aa20();
   input += synapse0x3a4aa60();
   input += synapse0x3a4aaa0();
   input += synapse0x3a4aae0();
   input += synapse0x3a4ab20();
   input += synapse0x3a4ab60();
   input += synapse0x3a4aba0();
   input += synapse0x3a4abe0();
   input += synapse0x3a4ac20();
   input += synapse0x3a4a6b0();
   input += synapse0x3a4a6f0();
   input += synapse0x3a4ad70();
   input += synapse0x3a4adb0();
   input += synapse0x3a4adf0();
   input += synapse0x3a4ae30();
   input += synapse0x3a4ae70();
   input += synapse0x3a4aeb0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4a520() {
   double input = input0x3a4a520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4aef0() {
   double input = -0.218008;
   input += synapse0x3a4b230();
   input += synapse0x3a4b270();
   input += synapse0x3a4b2b0();
   input += synapse0x3a4b2f0();
   input += synapse0x3a4b330();
   input += synapse0x3a4b370();
   input += synapse0x3a4b3b0();
   input += synapse0x3a4b3f0();
   input += synapse0x3a4b430();
   input += synapse0x3a4b470();
   input += synapse0x3a4b4b0();
   input += synapse0x3a4b4f0();
   input += synapse0x3a4b530();
   input += synapse0x3a4b570();
   input += synapse0x3a4b5b0();
   input += synapse0x3a4b5f0();
   input += synapse0x3a4b080();
   input += synapse0x3a4b0c0();
   input += synapse0x3a4b740();
   input += synapse0x3a4b780();
   input += synapse0x3a4b7c0();
   input += synapse0x3a4b800();
   input += synapse0x3a4b840();
   input += synapse0x3a4b880();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4aef0() {
   double input = input0x3a4aef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4b8c0() {
   double input = -2.61968;
   input += synapse0x3a4bc00();
   input += synapse0x3a3be80();
   input += synapse0x3a3bec0();
   input += synapse0x3a3c1c0();
   input += synapse0x3a3c200();
   input += synapse0x3a3c500();
   input += synapse0x3a3c540();
   input += synapse0x3a3c840();
   input += synapse0x3a3c880();
   input += synapse0x3a3cb80();
   input += synapse0x3a3cbc0();
   input += synapse0x3a3cec0();
   input += synapse0x3a3cf00();
   input += synapse0x3a3d200();
   input += synapse0x3a3d240();
   input += synapse0x3a3d540();
   input += synapse0x3a3d580();
   input += synapse0x3a3d880();
   input += synapse0x3a3d8c0();
   input += synapse0x3a3dbc0();
   input += synapse0x3a3dc00();
   input += synapse0x3a3df00();
   input += synapse0x3a3df40();
   input += synapse0x3a3e240();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4b8c0() {
   double input = input0x3a4b8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4d6d0() {
   double input = 1.17728;
   input += synapse0x3a3e280();
   input += synapse0x3a3ef40();
   input += synapse0x3a3ef80();
   input += synapse0x3a4ba50();
   input += synapse0x3a4ba90();
   input += synapse0x3a3f280();
   input += synapse0x3a3f2c0();
   input += synapse0x3a3f7e0();
   input += synapse0x3a3f820();
   input += synapse0x3a3fb20();
   input += synapse0x3a3fb60();
   input += synapse0x3a3fe60();
   input += synapse0x3a3fea0();
   input += synapse0x3a401a0();
   input += synapse0x3a401e0();
   input += synapse0x3a404e0();
   input += synapse0x3a40520();
   input += synapse0x3a40820();
   input += synapse0x3a40860();
   input += synapse0x3a40b60();
   input += synapse0x3a40ba0();
   input += synapse0x3a3e580();
   input += synapse0x3a3e5c0();
   input += synapse0x3a4d970();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4d6d0() {
   double input = input0x3a4d6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4d9b0() {
   double input = -0.406615;
   input += synapse0x3a4dcf0();
   input += synapse0x3a4dd30();
   input += synapse0x3a4dd70();
   input += synapse0x3a4ddb0();
   input += synapse0x3a4ddf0();
   input += synapse0x3a4de30();
   input += synapse0x3a4de70();
   input += synapse0x3a4deb0();
   input += synapse0x3a4def0();
   input += synapse0x3a4df30();
   input += synapse0x3a4df70();
   input += synapse0x3a4dfb0();
   input += synapse0x3a4dff0();
   input += synapse0x3a4e030();
   input += synapse0x3a4e070();
   input += synapse0x3a4e0b0();
   input += synapse0x3a4db40();
   input += synapse0x3a4db80();
   input += synapse0x3a4e200();
   input += synapse0x3a4e240();
   input += synapse0x3a4e280();
   input += synapse0x3a4e2c0();
   input += synapse0x3a4e300();
   input += synapse0x3a4e340();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4d9b0() {
   double input = input0x3a4d9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4e380() {
   double input = -0.0393491;
   input += synapse0x3a4e6c0();
   input += synapse0x3a4e700();
   input += synapse0x3a4e740();
   input += synapse0x3a4e780();
   input += synapse0x3a4e7c0();
   input += synapse0x3a4e800();
   input += synapse0x3a4e840();
   input += synapse0x3a4e880();
   input += synapse0x3a4e8c0();
   input += synapse0x3a4e900();
   input += synapse0x3a4e940();
   input += synapse0x3a4e980();
   input += synapse0x3a4e9c0();
   input += synapse0x3a4ea00();
   input += synapse0x3a4ea40();
   input += synapse0x3a4ea80();
   input += synapse0x3a4e510();
   input += synapse0x3a4e550();
   input += synapse0x3a4ebd0();
   input += synapse0x3a4ec10();
   input += synapse0x3a4ec50();
   input += synapse0x3a4ec90();
   input += synapse0x3a4ecd0();
   input += synapse0x3a4ed10();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4e380() {
   double input = input0x3a4e380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4ed50() {
   double input = 0.417031;
   input += synapse0x3a4f090();
   input += synapse0x3a4f0d0();
   input += synapse0x3a4f110();
   input += synapse0x3a4f150();
   input += synapse0x3a4f190();
   input += synapse0x3a4f1d0();
   input += synapse0x3a4f210();
   input += synapse0x3a4f250();
   input += synapse0x3a4f290();
   input += synapse0x3a4f2d0();
   input += synapse0x3a4f310();
   input += synapse0x3a4f350();
   input += synapse0x3a4f390();
   input += synapse0x3a4f3d0();
   input += synapse0x3a4f410();
   input += synapse0x3a4f450();
   input += synapse0x3a4eee0();
   input += synapse0x3a4ef20();
   input += synapse0x3a4f5a0();
   input += synapse0x3a4f5e0();
   input += synapse0x3a4f620();
   input += synapse0x3a4f660();
   input += synapse0x3a4f6a0();
   input += synapse0x3a4f6e0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4ed50() {
   double input = input0x3a4ed50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4f720() {
   double input = -12.9221;
   input += synapse0x3a4fa60();
   input += synapse0x3a4faa0();
   input += synapse0x3a4fae0();
   input += synapse0x3a4fb20();
   input += synapse0x3a4fb60();
   input += synapse0x3a4fba0();
   input += synapse0x3a4fbe0();
   input += synapse0x3a4fc20();
   input += synapse0x3a4fc60();
   input += synapse0x3a4fca0();
   input += synapse0x3a4fce0();
   input += synapse0x3a4fd20();
   input += synapse0x3a4fd60();
   input += synapse0x3a4fda0();
   input += synapse0x3a4fde0();
   input += synapse0x3a4fe20();
   input += synapse0x3a4f8b0();
   input += synapse0x3a4f8f0();
   input += synapse0x3a4ff70();
   input += synapse0x3a4ffb0();
   input += synapse0x3a4fff0();
   input += synapse0x3a50030();
   input += synapse0x3a50070();
   input += synapse0x3a500b0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4f720() {
   double input = input0x3a4f720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a500f0() {
   double input = -0.187718;
   input += synapse0x3a50430();
   input += synapse0x3a50470();
   input += synapse0x3a504b0();
   input += synapse0x3a504f0();
   input += synapse0x3a50530();
   input += synapse0x3a50570();
   input += synapse0x3a505b0();
   input += synapse0x3a505f0();
   input += synapse0x3a50630();
   input += synapse0x3a487f0();
   input += synapse0x3a48830();
   input += synapse0x3a48870();
   input += synapse0x3a488b0();
   input += synapse0x3a488f0();
   input += synapse0x3a48930();
   input += synapse0x3a48970();
   input += synapse0x3a50280();
   input += synapse0x3a502c0();
   input += synapse0x3a48ac0();
   input += synapse0x3a48b00();
   input += synapse0x3a48b40();
   input += synapse0x3a48b80();
   input += synapse0x3a48bc0();
   input += synapse0x3a48c00();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a500f0() {
   double input = input0x3a500f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a48c40() {
   double input = 0.178223;
   input += synapse0x3a48f80();
   input += synapse0x3a48fc0();
   input += synapse0x3a49000();
   input += synapse0x3a49040();
   input += synapse0x3a49080();
   input += synapse0x3a490c0();
   input += synapse0x3a49100();
   input += synapse0x3a49140();
   input += synapse0x3a49180();
   input += synapse0x3a491c0();
   input += synapse0x3a49200();
   input += synapse0x3a49240();
   input += synapse0x3a49280();
   input += synapse0x3a492c0();
   input += synapse0x3a49300();
   input += synapse0x3a49340();
   input += synapse0x3a48dd0();
   input += synapse0x3a48e10();
   input += synapse0x3a49490();
   input += synapse0x3a494d0();
   input += synapse0x3a49510();
   input += synapse0x3a49550();
   input += synapse0x3a49590();
   input += synapse0x3a495d0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a48c40() {
   double input = input0x3a48c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a49610() {
   double input = -0.611971;
   input += synapse0x3a497a0();
   input += synapse0x3a52830();
   input += synapse0x3a52870();
   input += synapse0x3a528b0();
   input += synapse0x3a528f0();
   input += synapse0x3a52930();
   input += synapse0x3a52970();
   input += synapse0x3a529b0();
   input += synapse0x3a529f0();
   input += synapse0x3a52a30();
   input += synapse0x3a52a70();
   input += synapse0x3a52ab0();
   input += synapse0x3a52af0();
   input += synapse0x3a52b30();
   input += synapse0x3a52b70();
   input += synapse0x3a52bb0();
   input += synapse0x3a52680();
   input += synapse0x3a526c0();
   input += synapse0x3a52d00();
   input += synapse0x3a52d40();
   input += synapse0x3a52d80();
   input += synapse0x3a52dc0();
   input += synapse0x3a52e00();
   input += synapse0x3a52e40();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a49610() {
   double input = input0x3a49610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a52e80() {
   double input = -1.34801;
   input += synapse0x3a531c0();
   input += synapse0x3a53200();
   input += synapse0x3a53240();
   input += synapse0x3a53280();
   input += synapse0x3a532c0();
   input += synapse0x3a53300();
   input += synapse0x3a53340();
   input += synapse0x3a53380();
   input += synapse0x3a533c0();
   input += synapse0x3a53400();
   input += synapse0x3a53440();
   input += synapse0x3a53480();
   input += synapse0x3a534c0();
   input += synapse0x3a53500();
   input += synapse0x3a53540();
   input += synapse0x3a53580();
   input += synapse0x3a53010();
   input += synapse0x3a53050();
   input += synapse0x3a536d0();
   input += synapse0x3a53710();
   input += synapse0x3a53750();
   input += synapse0x3a53790();
   input += synapse0x3a537d0();
   input += synapse0x3a53810();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a52e80() {
   double input = input0x3a52e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a53850() {
   double input = -2.26042;
   input += synapse0x3a53b90();
   input += synapse0x3a53bd0();
   input += synapse0x3a53c10();
   input += synapse0x3a53c50();
   input += synapse0x3a53c90();
   input += synapse0x3a53cd0();
   input += synapse0x3a53d10();
   input += synapse0x3a53d50();
   input += synapse0x3a53d90();
   input += synapse0x3a53dd0();
   input += synapse0x3a53e10();
   input += synapse0x3a53e50();
   input += synapse0x3a53e90();
   input += synapse0x3a53ed0();
   input += synapse0x3a53f10();
   input += synapse0x3a53f50();
   input += synapse0x3a539e0();
   input += synapse0x3a53a20();
   input += synapse0x3a540a0();
   input += synapse0x3a540e0();
   input += synapse0x3a54120();
   input += synapse0x3a54160();
   input += synapse0x3a541a0();
   input += synapse0x3a541e0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a53850() {
   double input = input0x3a53850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a54220() {
   double input = 0.227555;
   input += synapse0x3a54560();
   input += synapse0x3a545a0();
   input += synapse0x3a545e0();
   input += synapse0x3a54620();
   input += synapse0x3a54660();
   input += synapse0x3a546a0();
   input += synapse0x3a546e0();
   input += synapse0x3a54720();
   input += synapse0x3a54760();
   input += synapse0x3a547a0();
   input += synapse0x3a547e0();
   input += synapse0x3a54820();
   input += synapse0x3a54860();
   input += synapse0x3a548a0();
   input += synapse0x3a548e0();
   input += synapse0x3a54920();
   input += synapse0x3a543b0();
   input += synapse0x3a543f0();
   input += synapse0x3a54a70();
   input += synapse0x3a54ab0();
   input += synapse0x3a54af0();
   input += synapse0x3a54b30();
   input += synapse0x3a54b70();
   input += synapse0x3a54bb0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a54220() {
   double input = input0x3a54220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a54bf0() {
   double input = 0.101665;
   input += synapse0x3a54f30();
   input += synapse0x3a54f70();
   input += synapse0x3a54fb0();
   input += synapse0x3a54ff0();
   input += synapse0x3a55030();
   input += synapse0x3a55070();
   input += synapse0x3a550b0();
   input += synapse0x3a550f0();
   input += synapse0x3a55130();
   input += synapse0x3a55170();
   input += synapse0x3a551b0();
   input += synapse0x3a551f0();
   input += synapse0x3a55230();
   input += synapse0x3a55270();
   input += synapse0x3a552b0();
   input += synapse0x3a552f0();
   input += synapse0x3a54d80();
   input += synapse0x3a54dc0();
   input += synapse0x3a55440();
   input += synapse0x3a55480();
   input += synapse0x3a554c0();
   input += synapse0x3a55500();
   input += synapse0x3a55540();
   input += synapse0x3a55580();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a54bf0() {
   double input = input0x3a54bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a555c0() {
   double input = -0.161286;
   input += synapse0x3a55900();
   input += synapse0x3a55940();
   input += synapse0x3a55980();
   input += synapse0x3a559c0();
   input += synapse0x3a55a00();
   input += synapse0x3a55a40();
   input += synapse0x3a55a80();
   input += synapse0x3a55ac0();
   input += synapse0x3a55b00();
   input += synapse0x3a55b40();
   input += synapse0x3a55b80();
   input += synapse0x3a55bc0();
   input += synapse0x3a55c00();
   input += synapse0x3a55c40();
   input += synapse0x3a55c80();
   input += synapse0x3a55cc0();
   input += synapse0x3a55750();
   input += synapse0x3a55790();
   input += synapse0x3a55e10();
   input += synapse0x3a55e50();
   input += synapse0x3a55e90();
   input += synapse0x3a55ed0();
   input += synapse0x3a55f10();
   input += synapse0x3a55f50();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a555c0() {
   double input = input0x3a555c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a55f90() {
   double input = -4.05274;
   input += synapse0x3a562d0();
   input += synapse0x3a56310();
   input += synapse0x3a56350();
   input += synapse0x3a56390();
   input += synapse0x3a563d0();
   input += synapse0x3a56410();
   input += synapse0x3a56450();
   input += synapse0x3a56490();
   input += synapse0x3a564d0();
   input += synapse0x3a56510();
   input += synapse0x3a56550();
   input += synapse0x3a56590();
   input += synapse0x3a565d0();
   input += synapse0x3a56610();
   input += synapse0x3a56650();
   input += synapse0x3a56690();
   input += synapse0x3a56120();
   input += synapse0x3a56160();
   input += synapse0x3a567e0();
   input += synapse0x3a56820();
   input += synapse0x3a56860();
   input += synapse0x3a568a0();
   input += synapse0x3a568e0();
   input += synapse0x3a56920();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a55f90() {
   double input = input0x3a55f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a56960() {
   double input = 0.40531;
   input += synapse0x3a56ca0();
   input += synapse0x3a56ce0();
   input += synapse0x3a56d20();
   input += synapse0x3a56d60();
   input += synapse0x3a56da0();
   input += synapse0x3a56de0();
   input += synapse0x3a56e20();
   input += synapse0x3a56e60();
   input += synapse0x3a56ea0();
   input += synapse0x3a56ee0();
   input += synapse0x3a56f20();
   input += synapse0x3a56f60();
   input += synapse0x3a56fa0();
   input += synapse0x3a56fe0();
   input += synapse0x3a57020();
   input += synapse0x3a57060();
   input += synapse0x3a56af0();
   input += synapse0x3a56b30();
   input += synapse0x3a571b0();
   input += synapse0x3a571f0();
   input += synapse0x3a57230();
   input += synapse0x3a57270();
   input += synapse0x3a572b0();
   input += synapse0x3a572f0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a56960() {
   double input = input0x3a56960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a57330() {
   double input = -9.28796;
   input += synapse0x3a57670();
   input += synapse0x3a4bc40();
   input += synapse0x3a4bc80();
   input += synapse0x3a4bcc0();
   input += synapse0x3a4bf10();
   input += synapse0x3a4bf50();
   input += synapse0x3a4bf90();
   input += synapse0x3a4c1e0();
   input += synapse0x3a4c220();
   input += synapse0x3a4c470();
   input += synapse0x3a4c4b0();
   input += synapse0x3a4c4f0();
   input += synapse0x3a4c740();
   input += synapse0x3a4c780();
   input += synapse0x3a4c9d0();
   input += synapse0x3a4ca10();
   input += synapse0x3a574c0();
   input += synapse0x3a57500();
   input += synapse0x3a4cb60();
   input += synapse0x3a4d070();
   input += synapse0x3a4d0b0();
   input += synapse0x3a4d0f0();
   input += synapse0x3a4d340();
   input += synapse0x3a4d380();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a57330() {
   double input = input0x3a57330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a4d3c0() {
   double input = 0.0709566;
   input += synapse0x3a4cc30();
   input += synapse0x3a4cc70();
   input += synapse0x3a4ccb0();
   input += synapse0x3a4ccf0();
   input += synapse0x3a4d670();
   input += synapse0x3a599c0();
   input += synapse0x3a59a00();
   input += synapse0x3a59a40();
   input += synapse0x3a59a80();
   input += synapse0x3a59ac0();
   input += synapse0x3a59b00();
   input += synapse0x3a59b40();
   input += synapse0x3a59b80();
   input += synapse0x3a59bc0();
   input += synapse0x3a59c00();
   input += synapse0x3a59c40();
   input += synapse0x3a4d550();
   input += synapse0x3a4d590();
   input += synapse0x3a59d90();
   input += synapse0x3a59dd0();
   input += synapse0x3a59e10();
   input += synapse0x3a59e50();
   input += synapse0x3a59e90();
   input += synapse0x3a59ed0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a4d3c0() {
   double input = input0x3a4d3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a59f10() {
   double input = -0.243606;
   input += synapse0x3a5a250();
   input += synapse0x3a5a290();
   input += synapse0x3a5a2d0();
   input += synapse0x3a5a310();
   input += synapse0x3a5a350();
   input += synapse0x3a5a390();
   input += synapse0x3a5a3d0();
   input += synapse0x3a5a410();
   input += synapse0x3a5a450();
   input += synapse0x3a5a490();
   input += synapse0x3a5a4d0();
   input += synapse0x3a5a510();
   input += synapse0x3a5a550();
   input += synapse0x3a5a590();
   input += synapse0x3a5a5d0();
   input += synapse0x3a5a610();
   input += synapse0x3a5a0a0();
   input += synapse0x3a5a0e0();
   input += synapse0x3a5a760();
   input += synapse0x3a5a7a0();
   input += synapse0x3a5a7e0();
   input += synapse0x3a5a820();
   input += synapse0x3a5a860();
   input += synapse0x3a5a8a0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a59f10() {
   double input = input0x3a59f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5a8e0() {
   double input = 0.79674;
   input += synapse0x3a5ac20();
   input += synapse0x3a5ac60();
   input += synapse0x3a5aca0();
   input += synapse0x3a5ace0();
   input += synapse0x3a5ad20();
   input += synapse0x3a5ad60();
   input += synapse0x3a5ada0();
   input += synapse0x3a5ade0();
   input += synapse0x3a5ae20();
   input += synapse0x3a5ae60();
   input += synapse0x3a5aea0();
   input += synapse0x3a5aee0();
   input += synapse0x3a5af20();
   input += synapse0x3a5af60();
   input += synapse0x3a5afa0();
   input += synapse0x3a5afe0();
   input += synapse0x3a5aa70();
   input += synapse0x3a5aab0();
   input += synapse0x3a5b130();
   input += synapse0x3a5b170();
   input += synapse0x3a5b1b0();
   input += synapse0x3a5b1f0();
   input += synapse0x3a5b230();
   input += synapse0x3a5b270();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5a8e0() {
   double input = input0x3a5a8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5b2b0() {
   double input = -0.201555;
   input += synapse0x3a5b5f0();
   input += synapse0x3a5b630();
   input += synapse0x3a5b670();
   input += synapse0x3a5b6b0();
   input += synapse0x3a5b6f0();
   input += synapse0x3a5b730();
   input += synapse0x3a5b770();
   input += synapse0x3a5b7b0();
   input += synapse0x3a5b7f0();
   input += synapse0x3a5b830();
   input += synapse0x3a5b870();
   input += synapse0x3a5b8b0();
   input += synapse0x3a5b8f0();
   input += synapse0x3a5b930();
   input += synapse0x3a5b970();
   input += synapse0x3a5b9b0();
   input += synapse0x3a5b440();
   input += synapse0x3a5b480();
   input += synapse0x3a5bb00();
   input += synapse0x3a5bb40();
   input += synapse0x3a5bb80();
   input += synapse0x3a5bbc0();
   input += synapse0x3a5bc00();
   input += synapse0x3a5bc40();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5b2b0() {
   double input = input0x3a5b2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5bc80() {
   double input = -4.23623;
   input += synapse0x3a5bfc0();
   input += synapse0x3a5c000();
   input += synapse0x3a5c040();
   input += synapse0x3a5c080();
   input += synapse0x3a5c0c0();
   input += synapse0x3a5c100();
   input += synapse0x3a5c140();
   input += synapse0x3a5c180();
   input += synapse0x3a5c1c0();
   input += synapse0x3a5c200();
   input += synapse0x3a5c240();
   input += synapse0x3a5c280();
   input += synapse0x3a5c2c0();
   input += synapse0x3a5c300();
   input += synapse0x3a5c340();
   input += synapse0x3a5c380();
   input += synapse0x3a5be10();
   input += synapse0x3a5be50();
   input += synapse0x3a5c4d0();
   input += synapse0x3a5c510();
   input += synapse0x3a5c550();
   input += synapse0x3a5c590();
   input += synapse0x3a5c5d0();
   input += synapse0x3a5c610();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5bc80() {
   double input = input0x3a5bc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5c650() {
   double input = -14.2217;
   input += synapse0x3a5c990();
   input += synapse0x3a5c9d0();
   input += synapse0x3a5ca10();
   input += synapse0x3a5ca50();
   input += synapse0x3a5ca90();
   input += synapse0x3a5cad0();
   input += synapse0x3a5cb10();
   input += synapse0x3a5cb50();
   input += synapse0x3a5cb90();
   input += synapse0x3a5cbd0();
   input += synapse0x3a5cc10();
   input += synapse0x3a5cc50();
   input += synapse0x3a5cc90();
   input += synapse0x3a5ccd0();
   input += synapse0x3a5cd10();
   input += synapse0x3a5cd50();
   input += synapse0x3a5c7e0();
   input += synapse0x3a5c820();
   input += synapse0x3a5cea0();
   input += synapse0x3a5cee0();
   input += synapse0x3a5cf20();
   input += synapse0x3a5cf60();
   input += synapse0x3a5cfa0();
   input += synapse0x3a5cfe0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5c650() {
   double input = input0x3a5c650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5d020() {
   double input = 0.0880117;
   input += synapse0x3a5d360();
   input += synapse0x3a5d3a0();
   input += synapse0x3a5d3e0();
   input += synapse0x3a5d420();
   input += synapse0x3a5d460();
   input += synapse0x3a5d4a0();
   input += synapse0x3a5d4e0();
   input += synapse0x3a5d520();
   input += synapse0x3a5d560();
   input += synapse0x3a5d5a0();
   input += synapse0x3a5d5e0();
   input += synapse0x3a5d620();
   input += synapse0x3a5d660();
   input += synapse0x3a5d6a0();
   input += synapse0x3a5d6e0();
   input += synapse0x3a5d720();
   input += synapse0x3a5d1b0();
   input += synapse0x3a5d1f0();
   input += synapse0x3a5d870();
   input += synapse0x3a5d8b0();
   input += synapse0x3a5d8f0();
   input += synapse0x3a5d930();
   input += synapse0x3a5d970();
   input += synapse0x3a5d9b0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5d020() {
   double input = input0x3a5d020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5d9f0() {
   double input = -6.06166;
   input += synapse0x3a5dd30();
   input += synapse0x3a5dd70();
   input += synapse0x3a5ddb0();
   input += synapse0x3a5ddf0();
   input += synapse0x3a5de30();
   input += synapse0x3a5de70();
   input += synapse0x3a5deb0();
   input += synapse0x3a5def0();
   input += synapse0x3a5df30();
   input += synapse0x3a5df70();
   input += synapse0x3a5dfb0();
   input += synapse0x3a5dff0();
   input += synapse0x3a5e030();
   input += synapse0x3a5e070();
   input += synapse0x3a5e0b0();
   input += synapse0x3a5e0f0();
   input += synapse0x3a5db80();
   input += synapse0x3a5dbc0();
   input += synapse0x3a5e240();
   input += synapse0x3a5e280();
   input += synapse0x3a5e2c0();
   input += synapse0x3a5e300();
   input += synapse0x3a5e340();
   input += synapse0x3a5e380();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5d9f0() {
   double input = input0x3a5d9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5e3c0() {
   double input = 11.6277;
   input += synapse0x3a46e30();
   input += synapse0x3a46e70();
   input += synapse0x3a46eb0();
   input += synapse0x3a46ef0();
   input += synapse0x3a46f30();
   input += synapse0x3a46f70();
   input += synapse0x3a46fb0();
   input += synapse0x3a46ff0();
   input += synapse0x3a5eb10();
   input += synapse0x3a5eb50();
   input += synapse0x3a5eb90();
   input += synapse0x3a5ebd0();
   input += synapse0x3a5ec10();
   input += synapse0x3a5ec50();
   input += synapse0x3a5ec90();
   input += synapse0x3a5ecd0();
   input += synapse0x3a5e550();
   input += synapse0x3a5e590();
   input += synapse0x3a5ee20();
   input += synapse0x3a5ee60();
   input += synapse0x3a5eea0();
   input += synapse0x3a5eee0();
   input += synapse0x3a5ef20();
   input += synapse0x3a5ef60();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5e3c0() {
   double input = input0x3a5e3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5efa0() {
   double input = -0.339441;
   input += synapse0x3a5f2e0();
   input += synapse0x3a5f320();
   input += synapse0x3a5f360();
   input += synapse0x3a5f3a0();
   input += synapse0x3a5f3e0();
   input += synapse0x3a5f420();
   input += synapse0x3a5f460();
   input += synapse0x3a5f4a0();
   input += synapse0x3a5f4e0();
   input += synapse0x3a5f520();
   input += synapse0x3a5f560();
   input += synapse0x3a5f5a0();
   input += synapse0x3a5f5e0();
   input += synapse0x3a5f620();
   input += synapse0x3a5f660();
   input += synapse0x3a5f6a0();
   input += synapse0x3a5f130();
   input += synapse0x3a5f170();
   input += synapse0x3a5f7f0();
   input += synapse0x3a5f830();
   input += synapse0x3a5f870();
   input += synapse0x3a5f8b0();
   input += synapse0x3a5f8f0();
   input += synapse0x3a5f930();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5efa0() {
   double input = input0x3a5efa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a5f970() {
   double input = 1.04609;
   input += synapse0x3a5fcb0();
   input += synapse0x3a5fcf0();
   input += synapse0x3a5fd30();
   input += synapse0x3a5fd70();
   input += synapse0x3a5fdb0();
   input += synapse0x3a5fdf0();
   input += synapse0x3a5fe30();
   input += synapse0x3a5fe70();
   input += synapse0x3a5feb0();
   input += synapse0x3a5fef0();
   input += synapse0x3a5ff30();
   input += synapse0x3a5ff70();
   input += synapse0x3a5ffb0();
   input += synapse0x3a5fff0();
   input += synapse0x3a60030();
   input += synapse0x3a60070();
   input += synapse0x3a5fb00();
   input += synapse0x3a5fb40();
   input += synapse0x3a50670();
   input += synapse0x3a506b0();
   input += synapse0x3a506f0();
   input += synapse0x3a50730();
   input += synapse0x3a50770();
   input += synapse0x3a507b0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a5f970() {
   double input = input0x3a5f970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a507f0() {
   double input = 0.286795;
   input += synapse0x3a50b30();
   input += synapse0x3a50b70();
   input += synapse0x3a50bb0();
   input += synapse0x3a50bf0();
   input += synapse0x3a50c30();
   input += synapse0x3a50c70();
   input += synapse0x3a50cb0();
   input += synapse0x3a50cf0();
   input += synapse0x3a50d30();
   input += synapse0x3a50d70();
   input += synapse0x3a50db0();
   input += synapse0x3a50df0();
   input += synapse0x3a50e30();
   input += synapse0x3a50e70();
   input += synapse0x3a50eb0();
   input += synapse0x3a50ef0();
   input += synapse0x3a50980();
   input += synapse0x3a509c0();
   input += synapse0x3a51040();
   input += synapse0x3a51080();
   input += synapse0x3a510c0();
   input += synapse0x3a51100();
   input += synapse0x3a51140();
   input += synapse0x3a51180();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a507f0() {
   double input = input0x3a507f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a511c0() {
   double input = -1.33348;
   input += synapse0x3a51500();
   input += synapse0x3a51540();
   input += synapse0x3a51580();
   input += synapse0x3a515c0();
   input += synapse0x3a51600();
   input += synapse0x3a51640();
   input += synapse0x3a51680();
   input += synapse0x3a516c0();
   input += synapse0x3a51700();
   input += synapse0x3a51740();
   input += synapse0x3a51780();
   input += synapse0x3a517c0();
   input += synapse0x3a51800();
   input += synapse0x3a51840();
   input += synapse0x3a51880();
   input += synapse0x3a518c0();
   input += synapse0x3a51350();
   input += synapse0x3a51390();
   input += synapse0x3a51a10();
   input += synapse0x3a51a50();
   input += synapse0x3a51a90();
   input += synapse0x3a51ad0();
   input += synapse0x3a51b10();
   input += synapse0x3a51b50();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a511c0() {
   double input = input0x3a511c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a51b90() {
   double input = -0.460753;
   input += synapse0x3a51ed0();
   input += synapse0x3a51f10();
   input += synapse0x3a51f50();
   input += synapse0x3a51f90();
   input += synapse0x3a51fd0();
   input += synapse0x3a52010();
   input += synapse0x3a52050();
   input += synapse0x3a52090();
   input += synapse0x3a520d0();
   input += synapse0x3a52110();
   input += synapse0x3a52150();
   input += synapse0x3a52190();
   input += synapse0x3a521d0();
   input += synapse0x3a52210();
   input += synapse0x3a52250();
   input += synapse0x3a52290();
   input += synapse0x3a51d20();
   input += synapse0x3a51d60();
   input += synapse0x3a523e0();
   input += synapse0x3a52420();
   input += synapse0x3a52460();
   input += synapse0x3a524a0();
   input += synapse0x3a524e0();
   input += synapse0x3a52520();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a51b90() {
   double input = input0x3a51b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a641d0() {
   double input = -1.30272;
   input += synapse0x3a643f0();
   input += synapse0x3a64430();
   input += synapse0x3a64470();
   input += synapse0x3a644b0();
   input += synapse0x3a644f0();
   input += synapse0x3a64530();
   input += synapse0x3a64570();
   input += synapse0x3a645b0();
   input += synapse0x3a645f0();
   input += synapse0x3a64630();
   input += synapse0x3a64670();
   input += synapse0x3a646b0();
   input += synapse0x3a646f0();
   input += synapse0x3a64730();
   input += synapse0x3a64770();
   input += synapse0x3a647b0();
   input += synapse0x3a52560();
   input += synapse0x3a525a0();
   input += synapse0x3a64900();
   input += synapse0x3a64940();
   input += synapse0x3a64980();
   input += synapse0x3a649c0();
   input += synapse0x3a64a00();
   input += synapse0x3a64a40();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a641d0() {
   double input = input0x3a641d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a64a80() {
   double input = 0.64612;
   input += synapse0x3a64dc0();
   input += synapse0x3a64e00();
   input += synapse0x3a64e40();
   input += synapse0x3a64e80();
   input += synapse0x3a64ec0();
   input += synapse0x3a64f00();
   input += synapse0x3a64f40();
   input += synapse0x3a64f80();
   input += synapse0x3a64fc0();
   input += synapse0x3a65000();
   input += synapse0x3a65040();
   input += synapse0x3a65080();
   input += synapse0x3a650c0();
   input += synapse0x3a65100();
   input += synapse0x3a65140();
   input += synapse0x3a65180();
   input += synapse0x3a64c10();
   input += synapse0x3a64c50();
   input += synapse0x3a652d0();
   input += synapse0x3a65310();
   input += synapse0x3a65350();
   input += synapse0x3a65390();
   input += synapse0x3a653d0();
   input += synapse0x3a65410();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a64a80() {
   double input = input0x3a64a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a65450() {
   double input = 0.26206;
   input += synapse0x3a65790();
   input += synapse0x3a657d0();
   input += synapse0x3a65810();
   input += synapse0x3a65850();
   input += synapse0x3a65890();
   input += synapse0x3a658d0();
   input += synapse0x3a65910();
   input += synapse0x3a65950();
   input += synapse0x3a65990();
   input += synapse0x3a659d0();
   input += synapse0x3a65a10();
   input += synapse0x3a65a50();
   input += synapse0x3a65a90();
   input += synapse0x3a65ad0();
   input += synapse0x3a65b10();
   input += synapse0x3a65b50();
   input += synapse0x3a655e0();
   input += synapse0x3a65620();
   input += synapse0x3a65ca0();
   input += synapse0x3a65ce0();
   input += synapse0x3a65d20();
   input += synapse0x3a65d60();
   input += synapse0x3a65da0();
   input += synapse0x3a65de0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a65450() {
   double input = input0x3a65450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a65e20() {
   double input = 1.41743;
   input += synapse0x3a66160();
   input += synapse0x3a661a0();
   input += synapse0x3a661e0();
   input += synapse0x3a66220();
   input += synapse0x3a66260();
   input += synapse0x3a662a0();
   input += synapse0x3a662e0();
   input += synapse0x3a66320();
   input += synapse0x3a66360();
   input += synapse0x3a663a0();
   input += synapse0x3a663e0();
   input += synapse0x3a66420();
   input += synapse0x3a66460();
   input += synapse0x3a664a0();
   input += synapse0x3a664e0();
   input += synapse0x3a66520();
   input += synapse0x3a65fb0();
   input += synapse0x3a65ff0();
   input += synapse0x3a66670();
   input += synapse0x3a666b0();
   input += synapse0x3a666f0();
   input += synapse0x3a66730();
   input += synapse0x3a66770();
   input += synapse0x3a667b0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a65e20() {
   double input = input0x3a65e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a6d020() {
   double input = 2.61987;
   input += synapse0x3806620();
   input += synapse0x3806660();
   input += synapse0x3a43160();
   input += synapse0x3a431a0();
   input += synapse0x3a44c30();
   input += synapse0x3a44c70();
   input += synapse0x3a45a00();
   input += synapse0x3a45a40();
   input += synapse0x3a463d0();
   input += synapse0x3a46410();
   input += synapse0x3a46da0();
   input += synapse0x3a46de0();
   input += synapse0x3a47880();
   input += synapse0x3a478c0();
   input += synapse0x3a48250();
   input += synapse0x3a48290();
   input += synapse0x3a45330();
   input += synapse0x3a45370();
   input += synapse0x3a49e00();
   input += synapse0x3a49e40();
   input += synapse0x3a4a7d0();
   input += synapse0x3a4a810();
   input += synapse0x3a4b1a0();
   input += synapse0x3a4b1e0();
   input += synapse0x3a4bb70();
   input += synapse0x3a4bbb0();
   input += synapse0x3a3ec00();
   input += synapse0x3a3ec40();
   input += synapse0x3a4dc60();
   input += synapse0x3a4dca0();
   input += synapse0x3a4e630();
   input += synapse0x3a4e670();
   input += synapse0x3a4f000();
   input += synapse0x3a4f040();
   input += synapse0x3a4f9d0();
   input += synapse0x3a4fa10();
   input += synapse0x3a503a0();
   input += synapse0x3a503e0();
   input += synapse0x3a48ef0();
   input += synapse0x3a48f30();
   input += synapse0x3a527a0();
   input += synapse0x3a527e0();
   input += synapse0x3a53130();
   input += synapse0x3a53170();
   input += synapse0x3a53b00();
   input += synapse0x3a53b40();
   input += synapse0x3a544d0();
   input += synapse0x3a54510();
   input += synapse0x3a54ea0();
   input += synapse0x3a54ee0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a6d020() {
   double input = input0x3a6d020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a6d3c0() {
   double input = 0.486559;
   input += synapse0x3a575e0();
   input += synapse0x3a57620();
   input += synapse0x3a4cba0();
   input += synapse0x3a4cbe0();
   input += synapse0x3a5a1c0();
   input += synapse0x3a5a200();
   input += synapse0x3a5ab90();
   input += synapse0x3a5abd0();
   input += synapse0x3a5b560();
   input += synapse0x3a5b5a0();
   input += synapse0x3a5bf30();
   input += synapse0x3a5bf70();
   input += synapse0x3a5c900();
   input += synapse0x3a5c940();
   input += synapse0x3a5d2d0();
   input += synapse0x3a5d310();
   input += synapse0x3a5dca0();
   input += synapse0x3a5dce0();
   input += synapse0x3a5e670();
   input += synapse0x3a5e6b0();
   input += synapse0x3a5f250();
   input += synapse0x3a5f290();
   input += synapse0x3a5fc20();
   input += synapse0x3a5fc60();
   input += synapse0x3a50aa0();
   input += synapse0x3a50ae0();
   input += synapse0x3a51470();
   input += synapse0x3a514b0();
   input += synapse0x3a51e40();
   input += synapse0x3a51e80();
   input += synapse0x3a64360();
   input += synapse0x3a643a0();
   input += synapse0x3a64d30();
   input += synapse0x3a64d70();
   input += synapse0x3a65700();
   input += synapse0x3a65740();
   input += synapse0x3a660d0();
   input += synapse0x3a66110();
   input += synapse0x3a41060();
   input += synapse0x3a410a0();
   input += synapse0x3a55870();
   input += synapse0x3a558b0();
   input += synapse0x3a667f0();
   input += synapse0x3a66830();
   input += synapse0x3a66870();
   input += synapse0x3a668b0();
   input += synapse0x3a6d760();
   input += synapse0x3a6d7a0();
   input += synapse0x3a6d7e0();
   input += synapse0x3a6d820();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a6d3c0() {
   double input = input0x3a6d3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a6d860() {
   double input = 0.0568336;
   input += synapse0x3a6dba0();
   input += synapse0x3a6dbe0();
   input += synapse0x3a6dc20();
   input += synapse0x3a6dc60();
   input += synapse0x3a6dca0();
   input += synapse0x3a6dce0();
   input += synapse0x3a6dd20();
   input += synapse0x3a6dd60();
   input += synapse0x3a6dda0();
   input += synapse0x3a6dde0();
   input += synapse0x3a6de20();
   input += synapse0x3a6de60();
   input += synapse0x3a6dea0();
   input += synapse0x3a6dee0();
   input += synapse0x3a6df20();
   input += synapse0x3a6df60();
   input += synapse0x3a6d9f0();
   input += synapse0x3a6da30();
   input += synapse0x3a6e0b0();
   input += synapse0x3a6e0f0();
   input += synapse0x3a6e130();
   input += synapse0x3a6e170();
   input += synapse0x3a6e1b0();
   input += synapse0x3a6e1f0();
   input += synapse0x3a6e230();
   input += synapse0x3a6e270();
   input += synapse0x3a6e2b0();
   input += synapse0x3a6e2f0();
   input += synapse0x3a6e330();
   input += synapse0x3a6e370();
   input += synapse0x3a6e3b0();
   input += synapse0x3a6e3f0();
   input += synapse0x3a6dfa0();
   input += synapse0x3a6dfe0();
   input += synapse0x3a6e020();
   input += synapse0x3a6e060();
   input += synapse0x3a6e640();
   input += synapse0x3a6e680();
   input += synapse0x3a6e6c0();
   input += synapse0x3a6e700();
   input += synapse0x3a6e740();
   input += synapse0x3a6e780();
   input += synapse0x3a6e7c0();
   input += synapse0x3a6e800();
   input += synapse0x3a6e840();
   input += synapse0x3a6e880();
   input += synapse0x3a6e8c0();
   input += synapse0x3a6e900();
   input += synapse0x3a6e940();
   input += synapse0x3a6e980();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a6d860() {
   double input = input0x3a6d860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a6e9c0() {
   double input = -0.83801;
   input += synapse0x3a6ed00();
   input += synapse0x3a6ed40();
   input += synapse0x3a6ed80();
   input += synapse0x3a6edc0();
   input += synapse0x3a6ee00();
   input += synapse0x3a6ee40();
   input += synapse0x3a6ee80();
   input += synapse0x3a6eec0();
   input += synapse0x3a6ef00();
   input += synapse0x3a6ef40();
   input += synapse0x3a6ef80();
   input += synapse0x3a6efc0();
   input += synapse0x3a6f000();
   input += synapse0x3a6f040();
   input += synapse0x3a6f080();
   input += synapse0x3a6f0c0();
   input += synapse0x3a6eb50();
   input += synapse0x3a6eb90();
   input += synapse0x3a6f210();
   input += synapse0x3a6f250();
   input += synapse0x3a6f290();
   input += synapse0x3a6f2d0();
   input += synapse0x3a6f310();
   input += synapse0x3a6f350();
   input += synapse0x3a6f390();
   input += synapse0x3a6f3d0();
   input += synapse0x3a6f410();
   input += synapse0x3a6f450();
   input += synapse0x3a6f490();
   input += synapse0x3a6f4d0();
   input += synapse0x3a6f510();
   input += synapse0x3a6f550();
   input += synapse0x3a6f100();
   input += synapse0x3a6f140();
   input += synapse0x3a6f180();
   input += synapse0x3a6f1c0();
   input += synapse0x3a6f7a0();
   input += synapse0x3a6f7e0();
   input += synapse0x3a6f820();
   input += synapse0x3a6f860();
   input += synapse0x3a6f8a0();
   input += synapse0x3a6f8e0();
   input += synapse0x3a6f920();
   input += synapse0x3a6f960();
   input += synapse0x3a6f9a0();
   input += synapse0x3a6f9e0();
   input += synapse0x3a6fa20();
   input += synapse0x3a6fa60();
   input += synapse0x3a6faa0();
   input += synapse0x3a6fae0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a6e9c0() {
   double input = input0x3a6e9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a6fb20() {
   double input = -3.05099;
   input += synapse0x3a6fe60();
   input += synapse0x3a6fea0();
   input += synapse0x3a6fee0();
   input += synapse0x3a6ff20();
   input += synapse0x3a6ff60();
   input += synapse0x3a6ffa0();
   input += synapse0x3a6ffe0();
   input += synapse0x3a70020();
   input += synapse0x3a70060();
   input += synapse0x3a700a0();
   input += synapse0x3a700e0();
   input += synapse0x3a70120();
   input += synapse0x3a70160();
   input += synapse0x3a701a0();
   input += synapse0x3a701e0();
   input += synapse0x3a70220();
   input += synapse0x3a6fcb0();
   input += synapse0x3a6fcf0();
   input += synapse0x3a70370();
   input += synapse0x3a703b0();
   input += synapse0x3a703f0();
   input += synapse0x3a70430();
   input += synapse0x3a70470();
   input += synapse0x3a704b0();
   input += synapse0x3a704f0();
   input += synapse0x3a70530();
   input += synapse0x3a70570();
   input += synapse0x3a705b0();
   input += synapse0x3a705f0();
   input += synapse0x3a70630();
   input += synapse0x3a70670();
   input += synapse0x3a706b0();
   input += synapse0x3a70260();
   input += synapse0x3a702a0();
   input += synapse0x3a702e0();
   input += synapse0x3a70320();
   input += synapse0x3a70900();
   input += synapse0x3a70940();
   input += synapse0x3a70980();
   input += synapse0x3a709c0();
   input += synapse0x3a70a00();
   input += synapse0x3a70a40();
   input += synapse0x3a70a80();
   input += synapse0x3a70ac0();
   input += synapse0x3a70b00();
   input += synapse0x3a70b40();
   input += synapse0x3a70b80();
   input += synapse0x3a70bc0();
   input += synapse0x3a70c00();
   input += synapse0x3a70c40();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a6fb20() {
   double input = input0x3a6fb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uL::input0x3a70c80() {
   double input = 3.0685;
   input += synapse0x3a70ea0();
   input += synapse0x3a70ee0();
   input += synapse0x3a70f20();
   input += synapse0x3a70f60();
   input += synapse0x3a70fa0();
   return input;
}

double NNfunction_ns_chi04_uL::neuron0x3a70c80() {
   double input = input0x3a70c80();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_uL::synapse0x3a410f0() {
   return (neuron0x3a3bcf0()*0.0705284);
}

double NNfunction_ns_chi04_uL::synapse0x3a41130() {
   return (neuron0x3a3bfa0()*-2.99887);
}

double NNfunction_ns_chi04_uL::synapse0x3a41170() {
   return (neuron0x3a3c2e0()*3.16274);
}

double NNfunction_ns_chi04_uL::synapse0x3a411b0() {
   return (neuron0x3a3c620()*-0.0400493);
}

double NNfunction_ns_chi04_uL::synapse0x3a411f0() {
   return (neuron0x3a3c960()*0.0150427);
}

double NNfunction_ns_chi04_uL::synapse0x3a41230() {
   return (neuron0x3a3cca0()*-0.0987177);
}

double NNfunction_ns_chi04_uL::synapse0x3a41270() {
   return (neuron0x3a3cfe0()*-0.0405395);
}

double NNfunction_ns_chi04_uL::synapse0x3a412b0() {
   return (neuron0x3a3d320()*-0.105556);
}

double NNfunction_ns_chi04_uL::synapse0x3a412f0() {
   return (neuron0x3a3d660()*0.0041587);
}

double NNfunction_ns_chi04_uL::synapse0x3a41330() {
   return (neuron0x3a3d9a0()*-0.118271);
}

double NNfunction_ns_chi04_uL::synapse0x3a41370() {
   return (neuron0x3a3dce0()*-0.0222207);
}

double NNfunction_ns_chi04_uL::synapse0x3a413b0() {
   return (neuron0x3a3e020()*0.398726);
}

double NNfunction_ns_chi04_uL::synapse0x3a413f0() {
   return (neuron0x3a3e360()*-0.00210017);
}

double NNfunction_ns_chi04_uL::synapse0x3a41430() {
   return (neuron0x3a3e6a0()*0.0366663);
}

double NNfunction_ns_chi04_uL::synapse0x3a41470() {
   return (neuron0x3a3e9e0()*0.0592744);
}

double NNfunction_ns_chi04_uL::synapse0x3a414b0() {
   return (neuron0x3a3ed20()*0.0394359);
}

double NNfunction_ns_chi04_uL::synapse0x3a40f40() {
   return (neuron0x3a3f060()*-0.00139008);
}

double NNfunction_ns_chi04_uL::synapse0x3a40f80() {
   return (neuron0x3a3f5c0()*0.0404223);
}

double NNfunction_ns_chi04_uL::synapse0x37f7e70() {
   return (neuron0x3a3f900()*0.0782596);
}

double NNfunction_ns_chi04_uL::synapse0x37f7eb0() {
   return (neuron0x3a3fc40()*0.0802234);
}

double NNfunction_ns_chi04_uL::synapse0x3a414f0() {
   return (neuron0x3a3ff80()*0.0400286);
}

double NNfunction_ns_chi04_uL::synapse0x3a41530() {
   return (neuron0x3a402c0()*0.048565);
}

double NNfunction_ns_chi04_uL::synapse0x3a41570() {
   return (neuron0x3a40600()*-0.112863);
}

double NNfunction_ns_chi04_uL::synapse0x3a415b0() {
   return (neuron0x3a40940()*-1.7859);
}

double NNfunction_ns_chi04_uL::synapse0x3a41930() {
   return (neuron0x3a3bcf0()*0.067591);
}

double NNfunction_ns_chi04_uL::synapse0x3a41970() {
   return (neuron0x3a3bfa0()*-0.838991);
}

double NNfunction_ns_chi04_uL::synapse0x3a419b0() {
   return (neuron0x3a3c2e0()*-0.50765);
}

double NNfunction_ns_chi04_uL::synapse0x3a419f0() {
   return (neuron0x3a3c620()*0.0402859);
}

double NNfunction_ns_chi04_uL::synapse0x3a41a30() {
   return (neuron0x3a3c960()*0.000574622);
}

double NNfunction_ns_chi04_uL::synapse0x3a41a70() {
   return (neuron0x3a3cca0()*0.0126666);
}

double NNfunction_ns_chi04_uL::synapse0x3a41ab0() {
   return (neuron0x3a3cfe0()*-0.0111236);
}

double NNfunction_ns_chi04_uL::synapse0x3a41af0() {
   return (neuron0x3a3d320()*0.00676497);
}

double NNfunction_ns_chi04_uL::synapse0x3a41b30() {
   return (neuron0x3a3d660()*-0.00989639);
}

double NNfunction_ns_chi04_uL::synapse0x37f7cc0() {
   return (neuron0x3a3d9a0()*-0.00839509);
}

double NNfunction_ns_chi04_uL::synapse0x37f7d00() {
   return (neuron0x3a3dce0()*-0.000374084);
}

double NNfunction_ns_chi04_uL::synapse0x37f7d40() {
   return (neuron0x3a3e020()*-0.119002);
}

double NNfunction_ns_chi04_uL::synapse0x37f7d80() {
   return (neuron0x3a3e360()*0.0202403);
}

double NNfunction_ns_chi04_uL::synapse0x3a41d80() {
   return (neuron0x3a3e6a0()*0.00374849);
}

double NNfunction_ns_chi04_uL::synapse0x3a41dc0() {
   return (neuron0x3a3e9e0()*-0.0180147);
}

double NNfunction_ns_chi04_uL::synapse0x3a41e00() {
   return (neuron0x3a3ed20()*0.00661497);
}

double NNfunction_ns_chi04_uL::synapse0x3a41780() {
   return (neuron0x3a3f060()*-0.000102146);
}

double NNfunction_ns_chi04_uL::synapse0x3a417c0() {
   return (neuron0x3a3f5c0()*-0.00760324);
}

double NNfunction_ns_chi04_uL::synapse0x3a41f50() {
   return (neuron0x3a3f900()*-0.00207262);
}

double NNfunction_ns_chi04_uL::synapse0x3a41f90() {
   return (neuron0x3a3fc40()*-0.0347594);
}

double NNfunction_ns_chi04_uL::synapse0x3a41fd0() {
   return (neuron0x3a3ff80()*-0.014134);
}

double NNfunction_ns_chi04_uL::synapse0x3a42010() {
   return (neuron0x3a402c0()*0.0139357);
}

double NNfunction_ns_chi04_uL::synapse0x3a42050() {
   return (neuron0x3a40600()*0.0262235);
}

double NNfunction_ns_chi04_uL::synapse0x3a42090() {
   return (neuron0x3a40940()*0.195422);
}

double NNfunction_ns_chi04_uL::synapse0x3a42410() {
   return (neuron0x3a3bcf0()*-0.0259602);
}

double NNfunction_ns_chi04_uL::synapse0x3a42450() {
   return (neuron0x3a3bfa0()*-0.00635945);
}

double NNfunction_ns_chi04_uL::synapse0x3a42490() {
   return (neuron0x3a3c2e0()*-0.413608);
}

double NNfunction_ns_chi04_uL::synapse0x3a424d0() {
   return (neuron0x3a3c620()*-0.200344);
}

double NNfunction_ns_chi04_uL::synapse0x3a42510() {
   return (neuron0x3a3c960()*-0.00180917);
}

double NNfunction_ns_chi04_uL::synapse0x3a42550() {
   return (neuron0x3a3cca0()*-0.00348363);
}

double NNfunction_ns_chi04_uL::synapse0x3a42590() {
   return (neuron0x3a3cfe0()*-0.00627945);
}

double NNfunction_ns_chi04_uL::synapse0x3a425d0() {
   return (neuron0x3a3d320()*-0.00563049);
}

double NNfunction_ns_chi04_uL::synapse0x3a42610() {
   return (neuron0x3a3d660()*0.00222921);
}

double NNfunction_ns_chi04_uL::synapse0x3a42650() {
   return (neuron0x3a3d9a0()*-0.00390277);
}

double NNfunction_ns_chi04_uL::synapse0x3a42690() {
   return (neuron0x3a3dce0()*-0.00101657);
}

double NNfunction_ns_chi04_uL::synapse0x3a426d0() {
   return (neuron0x3a3e020()*-0.66555);
}

double NNfunction_ns_chi04_uL::synapse0x3a42710() {
   return (neuron0x3a3e360()*-0.0119116);
}

double NNfunction_ns_chi04_uL::synapse0x3a42750() {
   return (neuron0x3a3e6a0()*-0.00246107);
}

double NNfunction_ns_chi04_uL::synapse0x3a42790() {
   return (neuron0x3a3e9e0()*-0.00617285);
}

double NNfunction_ns_chi04_uL::synapse0x3a427d0() {
   return (neuron0x3a3ed20()*-0.00509734);
}

double NNfunction_ns_chi04_uL::synapse0x3a42260() {
   return (neuron0x3a3f060()*-0.00506984);
}

double NNfunction_ns_chi04_uL::synapse0x3a422a0() {
   return (neuron0x3a3f5c0()*0.00826032);
}

double NNfunction_ns_chi04_uL::synapse0x37f8560() {
   return (neuron0x3a3f900()*-0.00491105);
}

double NNfunction_ns_chi04_uL::synapse0x3805e30() {
   return (neuron0x3a3fc40()*0.00287899);
}

double NNfunction_ns_chi04_uL::synapse0x3805e70() {
   return (neuron0x3a3ff80()*-0.00416673);
}

double NNfunction_ns_chi04_uL::synapse0x3a44700() {
   return (neuron0x3a402c0()*-0.00362468);
}

double NNfunction_ns_chi04_uL::synapse0x3a44740() {
   return (neuron0x3a40600()*0.000171617);
}

double NNfunction_ns_chi04_uL::synapse0x3a3ba30() {
   return (neuron0x3a40940()*0.0190545);
}

double NNfunction_ns_chi04_uL::synapse0x3a3bb00() {
   return (neuron0x3a3bcf0()*0.0281574);
}

double NNfunction_ns_chi04_uL::synapse0x38066b0() {
   return (neuron0x3a3bfa0()*0.146255);
}

double NNfunction_ns_chi04_uL::synapse0x3a41d00() {
   return (neuron0x3a3c2e0()*-6.15694);
}

double NNfunction_ns_chi04_uL::synapse0x3a41d40() {
   return (neuron0x3a3c620()*0.0177004);
}

double NNfunction_ns_chi04_uL::synapse0x3a42920() {
   return (neuron0x3a3c960()*0.00951394);
}

double NNfunction_ns_chi04_uL::synapse0x3a42960() {
   return (neuron0x3a3cca0()*-0.0577888);
}

double NNfunction_ns_chi04_uL::synapse0x3a429a0() {
   return (neuron0x3a3cfe0()*-0.0105235);
}

double NNfunction_ns_chi04_uL::synapse0x3a429e0() {
   return (neuron0x3a3d320()*-0.00834408);
}

double NNfunction_ns_chi04_uL::synapse0x3a42a20() {
   return (neuron0x3a3d660()*0.0238568);
}

double NNfunction_ns_chi04_uL::synapse0x3a42a60() {
   return (neuron0x3a3d9a0()*0.0382625);
}

double NNfunction_ns_chi04_uL::synapse0x3a42aa0() {
   return (neuron0x3a3dce0()*0.0377801);
}

double NNfunction_ns_chi04_uL::synapse0x3a42ae0() {
   return (neuron0x3a3e020()*0.0184118);
}

double NNfunction_ns_chi04_uL::synapse0x3a42b20() {
   return (neuron0x3a3e360()*-0.0454348);
}

double NNfunction_ns_chi04_uL::synapse0x3a42b60() {
   return (neuron0x3a3e6a0()*-0.0358886);
}

double NNfunction_ns_chi04_uL::synapse0x3a42ba0() {
   return (neuron0x3a3e9e0()*0.0073375);
}

double NNfunction_ns_chi04_uL::synapse0x3a42be0() {
   return (neuron0x3a3ed20()*0.0211258);
}

double NNfunction_ns_chi04_uL::synapse0x3a3ba70() {
   return (neuron0x3a3f060()*0.0015047);
}

double NNfunction_ns_chi04_uL::synapse0x3a3bab0() {
   return (neuron0x3a3f5c0()*0.00183973);
}

double NNfunction_ns_chi04_uL::synapse0x3a42d30() {
   return (neuron0x3a3f900()*-0.000839464);
}

double NNfunction_ns_chi04_uL::synapse0x3a42d70() {
   return (neuron0x3a3fc40()*0.0049909);
}

double NNfunction_ns_chi04_uL::synapse0x3a42db0() {
   return (neuron0x3a3ff80()*0.0595635);
}

double NNfunction_ns_chi04_uL::synapse0x3a42df0() {
   return (neuron0x3a402c0()*0.0304038);
}

double NNfunction_ns_chi04_uL::synapse0x3a42e30() {
   return (neuron0x3a40600()*0.0426359);
}

double NNfunction_ns_chi04_uL::synapse0x3a42e70() {
   return (neuron0x3a40940()*-4.03259);
}

double NNfunction_ns_chi04_uL::synapse0x3a431f0() {
   return (neuron0x3a3bcf0()*0.0146474);
}

double NNfunction_ns_chi04_uL::synapse0x3a43230() {
   return (neuron0x3a3bfa0()*0.00551772);
}

double NNfunction_ns_chi04_uL::synapse0x3a43270() {
   return (neuron0x3a3c2e0()*-0.0407175);
}

double NNfunction_ns_chi04_uL::synapse0x3a432b0() {
   return (neuron0x3a3c620()*-2.64002);
}

double NNfunction_ns_chi04_uL::synapse0x3a432f0() {
   return (neuron0x3a3c960()*-0.00042059);
}

double NNfunction_ns_chi04_uL::synapse0x3a43330() {
   return (neuron0x3a3cca0()*-0.00363795);
}

double NNfunction_ns_chi04_uL::synapse0x3a43370() {
   return (neuron0x3a3cfe0()*-0.0216576);
}

double NNfunction_ns_chi04_uL::synapse0x3a433b0() {
   return (neuron0x3a3d320()*0.000917809);
}

double NNfunction_ns_chi04_uL::synapse0x3a433f0() {
   return (neuron0x3a3d660()*-0.00119427);
}

double NNfunction_ns_chi04_uL::synapse0x3a43430() {
   return (neuron0x3a3d9a0()*-0.0166286);
}

double NNfunction_ns_chi04_uL::synapse0x3a43470() {
   return (neuron0x3a3dce0()*-0.00382206);
}

double NNfunction_ns_chi04_uL::synapse0x3a434b0() {
   return (neuron0x3a3e020()*0.0646517);
}

double NNfunction_ns_chi04_uL::synapse0x3a434f0() {
   return (neuron0x3a3e360()*-0.00522879);
}

double NNfunction_ns_chi04_uL::synapse0x3a43530() {
   return (neuron0x3a3e6a0()*0.0121373);
}

double NNfunction_ns_chi04_uL::synapse0x3a43570() {
   return (neuron0x3a3e9e0()*0.0133885);
}

double NNfunction_ns_chi04_uL::synapse0x3a435b0() {
   return (neuron0x3a3ed20()*0.00655054);
}

double NNfunction_ns_chi04_uL::synapse0x3a43700() {
   return (neuron0x3a3f060()*0.00538919);
}

double NNfunction_ns_chi04_uL::synapse0x3a43040() {
   return (neuron0x3a3f5c0()*0.0114237);
}

double NNfunction_ns_chi04_uL::synapse0x3a43080() {
   return (neuron0x3a3f900()*-0.00211522);
}

double NNfunction_ns_chi04_uL::synapse0x3a44840() {
   return (neuron0x3a3fc40()*-0.00528081);
}

double NNfunction_ns_chi04_uL::synapse0x3a44880() {
   return (neuron0x3a3ff80()*0.00401029);
}

double NNfunction_ns_chi04_uL::synapse0x3a448c0() {
   return (neuron0x3a402c0()*-0.0100517);
}

double NNfunction_ns_chi04_uL::synapse0x3a44900() {
   return (neuron0x3a40600()*-0.00807709);
}

double NNfunction_ns_chi04_uL::synapse0x3a44940() {
   return (neuron0x3a40940()*0.0318795);
}

double NNfunction_ns_chi04_uL::synapse0x3a44cc0() {
   return (neuron0x3a3bcf0()*0.14995);
}

double NNfunction_ns_chi04_uL::synapse0x3a44d00() {
   return (neuron0x3a3bfa0()*0.110053);
}

double NNfunction_ns_chi04_uL::synapse0x3a44d40() {
   return (neuron0x3a3c2e0()*1.43583);
}

double NNfunction_ns_chi04_uL::synapse0x3a44d80() {
   return (neuron0x3a3c620()*-0.111802);
}

double NNfunction_ns_chi04_uL::synapse0x3a44dc0() {
   return (neuron0x3a3c960()*-0.0614585);
}

double NNfunction_ns_chi04_uL::synapse0x3a44e00() {
   return (neuron0x3a3cca0()*-0.0102701);
}

double NNfunction_ns_chi04_uL::synapse0x3a44e40() {
   return (neuron0x3a3cfe0()*0.0139873);
}

double NNfunction_ns_chi04_uL::synapse0x3a44e80() {
   return (neuron0x3a3d320()*-0.0410969);
}

double NNfunction_ns_chi04_uL::synapse0x3a44ec0() {
   return (neuron0x3a3d660()*0.0222735);
}

double NNfunction_ns_chi04_uL::synapse0x3806180() {
   return (neuron0x3a3d9a0()*0.0168064);
}

double NNfunction_ns_chi04_uL::synapse0x38061c0() {
   return (neuron0x3a3dce0()*0.0146263);
}

double NNfunction_ns_chi04_uL::synapse0x3806200() {
   return (neuron0x3a3e020()*-0.116231);
}

double NNfunction_ns_chi04_uL::synapse0x3806240() {
   return (neuron0x3a3e360()*-0.00901524);
}

double NNfunction_ns_chi04_uL::synapse0x3806280() {
   return (neuron0x3a3e6a0()*-0.0111584);
}

double NNfunction_ns_chi04_uL::synapse0x38062c0() {
   return (neuron0x3a3e9e0()*-0.0455466);
}

double NNfunction_ns_chi04_uL::synapse0x3806300() {
   return (neuron0x3a3ed20()*-0.00825814);
}

double NNfunction_ns_chi04_uL::synapse0x3a44b10() {
   return (neuron0x3a3f060()*0.11603);
}

double NNfunction_ns_chi04_uL::synapse0x3a44b50() {
   return (neuron0x3a3f5c0()*-0.0413418);
}

double NNfunction_ns_chi04_uL::synapse0x3806450() {
   return (neuron0x3a3f900()*0.0190408);
}

double NNfunction_ns_chi04_uL::synapse0x3806490() {
   return (neuron0x3a3fc40()*-0.0168378);
}

double NNfunction_ns_chi04_uL::synapse0x38064d0() {
   return (neuron0x3a3ff80()*0.0380996);
}

double NNfunction_ns_chi04_uL::synapse0x3806510() {
   return (neuron0x3a402c0()*-0.0135934);
}

double NNfunction_ns_chi04_uL::synapse0x3806550() {
   return (neuron0x3a40600()*0.0578749);
}

double NNfunction_ns_chi04_uL::synapse0x3a45710() {
   return (neuron0x3a40940()*-0.726633);
}

double NNfunction_ns_chi04_uL::synapse0x3a45a90() {
   return (neuron0x3a3bcf0()*0.974135);
}

double NNfunction_ns_chi04_uL::synapse0x3a45ad0() {
   return (neuron0x3a3bfa0()*0.0183846);
}

double NNfunction_ns_chi04_uL::synapse0x3a45b10() {
   return (neuron0x3a3c2e0()*-0.393222);
}

double NNfunction_ns_chi04_uL::synapse0x3a45b50() {
   return (neuron0x3a3c620()*0.283673);
}

double NNfunction_ns_chi04_uL::synapse0x3a45b90() {
   return (neuron0x3a3c960()*0.217603);
}

double NNfunction_ns_chi04_uL::synapse0x3a45bd0() {
   return (neuron0x3a3cca0()*0.580566);
}

double NNfunction_ns_chi04_uL::synapse0x3a45c10() {
   return (neuron0x3a3cfe0()*0.296527);
}

double NNfunction_ns_chi04_uL::synapse0x3a45c50() {
   return (neuron0x3a3d320()*1.21551);
}

double NNfunction_ns_chi04_uL::synapse0x3a45c90() {
   return (neuron0x3a3d660()*0.7403);
}

double NNfunction_ns_chi04_uL::synapse0x3a45cd0() {
   return (neuron0x3a3d9a0()*-0.336089);
}

double NNfunction_ns_chi04_uL::synapse0x3a45d10() {
   return (neuron0x3a3dce0()*0.211116);
}

double NNfunction_ns_chi04_uL::synapse0x3a45d50() {
   return (neuron0x3a3e020()*-0.233736);
}

double NNfunction_ns_chi04_uL::synapse0x3a45d90() {
   return (neuron0x3a3e360()*-0.42084);
}

double NNfunction_ns_chi04_uL::synapse0x3a45dd0() {
   return (neuron0x3a3e6a0()*-0.147088);
}

double NNfunction_ns_chi04_uL::synapse0x3a45e10() {
   return (neuron0x3a3e9e0()*-0.401919);
}

double NNfunction_ns_chi04_uL::synapse0x3a45e50() {
   return (neuron0x3a3ed20()*0.305884);
}

double NNfunction_ns_chi04_uL::synapse0x3a458e0() {
   return (neuron0x3a3f060()*0.434587);
}

double NNfunction_ns_chi04_uL::synapse0x3a45920() {
   return (neuron0x3a3f5c0()*-0.0747966);
}

double NNfunction_ns_chi04_uL::synapse0x3a45fa0() {
   return (neuron0x3a3f900()*-0.445815);
}

double NNfunction_ns_chi04_uL::synapse0x3a45fe0() {
   return (neuron0x3a3fc40()*-0.240406);
}

double NNfunction_ns_chi04_uL::synapse0x3a46020() {
   return (neuron0x3a3ff80()*-0.245681);
}

double NNfunction_ns_chi04_uL::synapse0x3a46060() {
   return (neuron0x3a402c0()*-0.000693662);
}

double NNfunction_ns_chi04_uL::synapse0x3a460a0() {
   return (neuron0x3a40600()*-0.40172);
}

double NNfunction_ns_chi04_uL::synapse0x3a460e0() {
   return (neuron0x3a40940()*-0.509606);
}

double NNfunction_ns_chi04_uL::synapse0x3a46460() {
   return (neuron0x3a3bcf0()*-0.14628);
}

double NNfunction_ns_chi04_uL::synapse0x3a464a0() {
   return (neuron0x3a3bfa0()*3.51008);
}

double NNfunction_ns_chi04_uL::synapse0x3a464e0() {
   return (neuron0x3a3c2e0()*-1.63643);
}

double NNfunction_ns_chi04_uL::synapse0x3a46520() {
   return (neuron0x3a3c620()*-0.0623345);
}

double NNfunction_ns_chi04_uL::synapse0x3a46560() {
   return (neuron0x3a3c960()*-0.163789);
}

double NNfunction_ns_chi04_uL::synapse0x3a465a0() {
   return (neuron0x3a3cca0()*0.0240813);
}

double NNfunction_ns_chi04_uL::synapse0x3a465e0() {
   return (neuron0x3a3cfe0()*0.00121779);
}

double NNfunction_ns_chi04_uL::synapse0x3a46620() {
   return (neuron0x3a3d320()*0.00691832);
}

double NNfunction_ns_chi04_uL::synapse0x3a46660() {
   return (neuron0x3a3d660()*-0.0108441);
}

double NNfunction_ns_chi04_uL::synapse0x3a466a0() {
   return (neuron0x3a3d9a0()*0.0104773);
}

double NNfunction_ns_chi04_uL::synapse0x3a466e0() {
   return (neuron0x3a3dce0()*0.0606697);
}

double NNfunction_ns_chi04_uL::synapse0x3a46720() {
   return (neuron0x3a3e020()*0.190934);
}

double NNfunction_ns_chi04_uL::synapse0x3a46760() {
   return (neuron0x3a3e360()*-0.0384447);
}

double NNfunction_ns_chi04_uL::synapse0x3a467a0() {
   return (neuron0x3a3e6a0()*-0.0477524);
}

double NNfunction_ns_chi04_uL::synapse0x3a467e0() {
   return (neuron0x3a3e9e0()*0.0102975);
}

double NNfunction_ns_chi04_uL::synapse0x3a46820() {
   return (neuron0x3a3ed20()*-0.0327172);
}

double NNfunction_ns_chi04_uL::synapse0x3a462b0() {
   return (neuron0x3a3f060()*0.020981);
}

double NNfunction_ns_chi04_uL::synapse0x3a462f0() {
   return (neuron0x3a3f5c0()*0.0543698);
}

double NNfunction_ns_chi04_uL::synapse0x3a46970() {
   return (neuron0x3a3f900()*-0.028993);
}

double NNfunction_ns_chi04_uL::synapse0x3a469b0() {
   return (neuron0x3a3fc40()*-0.0428771);
}

double NNfunction_ns_chi04_uL::synapse0x3a469f0() {
   return (neuron0x3a3ff80()*0.0407153);
}

double NNfunction_ns_chi04_uL::synapse0x3a46a30() {
   return (neuron0x3a402c0()*-0.116754);
}

double NNfunction_ns_chi04_uL::synapse0x3a46a70() {
   return (neuron0x3a40600()*0.0551783);
}

double NNfunction_ns_chi04_uL::synapse0x3a46ab0() {
   return (neuron0x3a40940()*-2.32492);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f4b0() {
   return (neuron0x3a3bcf0()*0.260126);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f4f0() {
   return (neuron0x3a3bfa0()*0.18096);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f530() {
   return (neuron0x3a3c2e0()*0.579341);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f570() {
   return (neuron0x3a3c620()*-0.341739);
}

double NNfunction_ns_chi04_uL::synapse0x3a47040() {
   return (neuron0x3a3c960()*1.06733);
}

double NNfunction_ns_chi04_uL::synapse0x3a47080() {
   return (neuron0x3a3cca0()*-0.42779);
}

double NNfunction_ns_chi04_uL::synapse0x3a470c0() {
   return (neuron0x3a3cfe0()*0.36353);
}

double NNfunction_ns_chi04_uL::synapse0x3a47100() {
   return (neuron0x3a3d320()*-0.241393);
}

double NNfunction_ns_chi04_uL::synapse0x3a47140() {
   return (neuron0x3a3d660()*0.461144);
}

double NNfunction_ns_chi04_uL::synapse0x3a47180() {
   return (neuron0x3a3d9a0()*-0.343938);
}

double NNfunction_ns_chi04_uL::synapse0x3a471c0() {
   return (neuron0x3a3dce0()*-0.0568623);
}

double NNfunction_ns_chi04_uL::synapse0x3a47200() {
   return (neuron0x3a3e020()*-0.41051);
}

double NNfunction_ns_chi04_uL::synapse0x3a47240() {
   return (neuron0x3a3e360()*0.370004);
}

double NNfunction_ns_chi04_uL::synapse0x3a47280() {
   return (neuron0x3a3e6a0()*-0.504062);
}

double NNfunction_ns_chi04_uL::synapse0x3a472c0() {
   return (neuron0x3a3e9e0()*0.402944);
}

double NNfunction_ns_chi04_uL::synapse0x3a47300() {
   return (neuron0x3a3ed20()*1.14436);
}

double NNfunction_ns_chi04_uL::synapse0x3a46c80() {
   return (neuron0x3a3f060()*0.455003);
}

double NNfunction_ns_chi04_uL::synapse0x3a46cc0() {
   return (neuron0x3a3f5c0()*-0.199149);
}

double NNfunction_ns_chi04_uL::synapse0x3a47450() {
   return (neuron0x3a3f900()*0.306375);
}

double NNfunction_ns_chi04_uL::synapse0x3a47490() {
   return (neuron0x3a3fc40()*-0.626393);
}

double NNfunction_ns_chi04_uL::synapse0x3a474d0() {
   return (neuron0x3a3ff80()*-0.0894968);
}

double NNfunction_ns_chi04_uL::synapse0x3a47510() {
   return (neuron0x3a402c0()*-0.546572);
}

double NNfunction_ns_chi04_uL::synapse0x3a47550() {
   return (neuron0x3a40600()*-0.848224);
}

double NNfunction_ns_chi04_uL::synapse0x3a47590() {
   return (neuron0x3a40940()*0.0455823);
}

double NNfunction_ns_chi04_uL::synapse0x3a47910() {
   return (neuron0x3a3bcf0()*-0.645412);
}

double NNfunction_ns_chi04_uL::synapse0x3a47950() {
   return (neuron0x3a3bfa0()*-0.764222);
}

double NNfunction_ns_chi04_uL::synapse0x3a47990() {
   return (neuron0x3a3c2e0()*0.336503);
}

double NNfunction_ns_chi04_uL::synapse0x3a479d0() {
   return (neuron0x3a3c620()*0.130742);
}

double NNfunction_ns_chi04_uL::synapse0x3a47a10() {
   return (neuron0x3a3c960()*0.697833);
}

double NNfunction_ns_chi04_uL::synapse0x3a47a50() {
   return (neuron0x3a3cca0()*-0.124226);
}

double NNfunction_ns_chi04_uL::synapse0x3a47a90() {
   return (neuron0x3a3cfe0()*-0.329309);
}

double NNfunction_ns_chi04_uL::synapse0x3a47ad0() {
   return (neuron0x3a3d320()*0.636554);
}

double NNfunction_ns_chi04_uL::synapse0x3a47b10() {
   return (neuron0x3a3d660()*0.562498);
}

double NNfunction_ns_chi04_uL::synapse0x3a47b50() {
   return (neuron0x3a3d9a0()*-0.473612);
}

double NNfunction_ns_chi04_uL::synapse0x3a47b90() {
   return (neuron0x3a3dce0()*-0.227948);
}

double NNfunction_ns_chi04_uL::synapse0x3a47bd0() {
   return (neuron0x3a3e020()*-0.210699);
}

double NNfunction_ns_chi04_uL::synapse0x3a47c10() {
   return (neuron0x3a3e360()*0.398209);
}

double NNfunction_ns_chi04_uL::synapse0x3a47c50() {
   return (neuron0x3a3e6a0()*-0.839863);
}

double NNfunction_ns_chi04_uL::synapse0x3a47c90() {
   return (neuron0x3a3e9e0()*-0.627041);
}

double NNfunction_ns_chi04_uL::synapse0x3a47cd0() {
   return (neuron0x3a3ed20()*0.651667);
}

double NNfunction_ns_chi04_uL::synapse0x3a47760() {
   return (neuron0x3a3f060()*-0.403809);
}

double NNfunction_ns_chi04_uL::synapse0x3a477a0() {
   return (neuron0x3a3f5c0()*0.429193);
}

double NNfunction_ns_chi04_uL::synapse0x3a47e20() {
   return (neuron0x3a3f900()*-0.159743);
}

double NNfunction_ns_chi04_uL::synapse0x3a47e60() {
   return (neuron0x3a3fc40()*0.159228);
}

double NNfunction_ns_chi04_uL::synapse0x3a47ea0() {
   return (neuron0x3a3ff80()*-1.61647);
}

double NNfunction_ns_chi04_uL::synapse0x3a47ee0() {
   return (neuron0x3a402c0()*-0.849032);
}

double NNfunction_ns_chi04_uL::synapse0x3a47f20() {
   return (neuron0x3a40600()*-0.310964);
}

double NNfunction_ns_chi04_uL::synapse0x3a47f60() {
   return (neuron0x3a40940()*0.937947);
}

double NNfunction_ns_chi04_uL::synapse0x3a482e0() {
   return (neuron0x3a3bcf0()*0.0726026);
}

double NNfunction_ns_chi04_uL::synapse0x3a48320() {
   return (neuron0x3a3bfa0()*-1.12871);
}

double NNfunction_ns_chi04_uL::synapse0x3a48360() {
   return (neuron0x3a3c2e0()*1.1345);
}

double NNfunction_ns_chi04_uL::synapse0x3a483a0() {
   return (neuron0x3a3c620()*-0.139618);
}

double NNfunction_ns_chi04_uL::synapse0x3a483e0() {
   return (neuron0x3a3c960()*-0.00311612);
}

double NNfunction_ns_chi04_uL::synapse0x3a48420() {
   return (neuron0x3a3cca0()*-0.000888045);
}

double NNfunction_ns_chi04_uL::synapse0x3a48460() {
   return (neuron0x3a3cfe0()*-0.0419001);
}

double NNfunction_ns_chi04_uL::synapse0x3a484a0() {
   return (neuron0x3a3d320()*0.000886025);
}

double NNfunction_ns_chi04_uL::synapse0x3a484e0() {
   return (neuron0x3a3d660()*0.092563);
}

double NNfunction_ns_chi04_uL::synapse0x3a48520() {
   return (neuron0x3a3d9a0()*-0.0318269);
}

double NNfunction_ns_chi04_uL::synapse0x3a48560() {
   return (neuron0x3a3dce0()*0.0890751);
}

double NNfunction_ns_chi04_uL::synapse0x3a485a0() {
   return (neuron0x3a3e020()*-0.374182);
}

double NNfunction_ns_chi04_uL::synapse0x3a485e0() {
   return (neuron0x3a3e360()*0.0136112);
}

double NNfunction_ns_chi04_uL::synapse0x3a48620() {
   return (neuron0x3a3e6a0()*0.054661);
}

double NNfunction_ns_chi04_uL::synapse0x3a48660() {
   return (neuron0x3a3e9e0()*0.0444191);
}

double NNfunction_ns_chi04_uL::synapse0x3a486a0() {
   return (neuron0x3a3ed20()*-0.0115985);
}

double NNfunction_ns_chi04_uL::synapse0x3a48130() {
   return (neuron0x3a3f060()*0.0297094);
}

double NNfunction_ns_chi04_uL::synapse0x3a48170() {
   return (neuron0x3a3f5c0()*0.044952);
}

double NNfunction_ns_chi04_uL::synapse0x3a44f00() {
   return (neuron0x3a3f900()*0.0101804);
}

double NNfunction_ns_chi04_uL::synapse0x3a44f40() {
   return (neuron0x3a3fc40()*0.0601616);
}

double NNfunction_ns_chi04_uL::synapse0x3a44f80() {
   return (neuron0x3a3ff80()*0.119126);
}

double NNfunction_ns_chi04_uL::synapse0x3a44fc0() {
   return (neuron0x3a402c0()*-0.00590172);
}

double NNfunction_ns_chi04_uL::synapse0x3a45000() {
   return (neuron0x3a40600()*-0.0280731);
}

double NNfunction_ns_chi04_uL::synapse0x3a45040() {
   return (neuron0x3a40940()*1.3653);
}

double NNfunction_ns_chi04_uL::synapse0x3a453c0() {
   return (neuron0x3a3bcf0()*-0.00739164);
}

double NNfunction_ns_chi04_uL::synapse0x3a45400() {
   return (neuron0x3a3bfa0()*-0.760627);
}

double NNfunction_ns_chi04_uL::synapse0x3a45440() {
   return (neuron0x3a3c2e0()*-1.0757);
}

double NNfunction_ns_chi04_uL::synapse0x3a45480() {
   return (neuron0x3a3c620()*0.224052);
}

double NNfunction_ns_chi04_uL::synapse0x3a454c0() {
   return (neuron0x3a3c960()*-0.0256625);
}

double NNfunction_ns_chi04_uL::synapse0x3a45500() {
   return (neuron0x3a3cca0()*-0.00145335);
}

double NNfunction_ns_chi04_uL::synapse0x3a45540() {
   return (neuron0x3a3cfe0()*0.068496);
}

double NNfunction_ns_chi04_uL::synapse0x3a45580() {
   return (neuron0x3a3d320()*0.043337);
}

double NNfunction_ns_chi04_uL::synapse0x3a455c0() {
   return (neuron0x3a3d660()*0.0480879);
}

double NNfunction_ns_chi04_uL::synapse0x3a45600() {
   return (neuron0x3a3d9a0()*0.04197);
}

double NNfunction_ns_chi04_uL::synapse0x3a45640() {
   return (neuron0x3a3dce0()*-0.0640176);
}

double NNfunction_ns_chi04_uL::synapse0x3a45680() {
   return (neuron0x3a3e020()*2.51815);
}

double NNfunction_ns_chi04_uL::synapse0x3a456c0() {
   return (neuron0x3a3e360()*-0.0159881);
}

double NNfunction_ns_chi04_uL::synapse0x3a49800() {
   return (neuron0x3a3e6a0()*0.0595632);
}

double NNfunction_ns_chi04_uL::synapse0x3a49840() {
   return (neuron0x3a3e9e0()*0.0371365);
}

double NNfunction_ns_chi04_uL::synapse0x3a49880() {
   return (neuron0x3a3ed20()*0.0406007);
}

double NNfunction_ns_chi04_uL::synapse0x3a45210() {
   return (neuron0x3a3f060()*0.0767563);
}

double NNfunction_ns_chi04_uL::synapse0x3a45250() {
   return (neuron0x3a3f5c0()*-0.038981);
}

double NNfunction_ns_chi04_uL::synapse0x3a499d0() {
   return (neuron0x3a3f900()*-0.00113404);
}

double NNfunction_ns_chi04_uL::synapse0x3a49a10() {
   return (neuron0x3a3fc40()*-0.00841674);
}

double NNfunction_ns_chi04_uL::synapse0x3a49a50() {
   return (neuron0x3a3ff80()*-0.0340536);
}

double NNfunction_ns_chi04_uL::synapse0x3a49a90() {
   return (neuron0x3a402c0()*-0.0609877);
}

double NNfunction_ns_chi04_uL::synapse0x3a49ad0() {
   return (neuron0x3a40600()*0.0205443);
}

double NNfunction_ns_chi04_uL::synapse0x3a49b10() {
   return (neuron0x3a40940()*-0.355231);
}

double NNfunction_ns_chi04_uL::synapse0x3a49e90() {
   return (neuron0x3a3bcf0()*0.0275645);
}

double NNfunction_ns_chi04_uL::synapse0x3a49ed0() {
   return (neuron0x3a3bfa0()*0.00835952);
}

double NNfunction_ns_chi04_uL::synapse0x3a49f10() {
   return (neuron0x3a3c2e0()*-0.483269);
}

double NNfunction_ns_chi04_uL::synapse0x3a49f50() {
   return (neuron0x3a3c620()*-0.191709);
}

double NNfunction_ns_chi04_uL::synapse0x3a49f90() {
   return (neuron0x3a3c960()*0.00286793);
}

double NNfunction_ns_chi04_uL::synapse0x3a49fd0() {
   return (neuron0x3a3cca0()*-0.00241559);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a010() {
   return (neuron0x3a3cfe0()*0.00162379);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a050() {
   return (neuron0x3a3d320()*0.00485139);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a090() {
   return (neuron0x3a3d660()*0.00637639);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a0d0() {
   return (neuron0x3a3d9a0()*-0.000484686);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a110() {
   return (neuron0x3a3dce0()*0.000788825);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a150() {
   return (neuron0x3a3e020()*-0.150756);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a190() {
   return (neuron0x3a3e360()*0.00861968);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a1d0() {
   return (neuron0x3a3e6a0()*0.00207135);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a210() {
   return (neuron0x3a3e9e0()*0.0053441);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a250() {
   return (neuron0x3a3ed20()*0.00644371);
}

double NNfunction_ns_chi04_uL::synapse0x3a49ce0() {
   return (neuron0x3a3f060()*0.00624877);
}

double NNfunction_ns_chi04_uL::synapse0x3a49d20() {
   return (neuron0x3a3f5c0()*0.00274561);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a3a0() {
   return (neuron0x3a3f900()*0.00200237);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a3e0() {
   return (neuron0x3a3fc40()*-0.00215197);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a420() {
   return (neuron0x3a3ff80()*-4.49481e-05);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a460() {
   return (neuron0x3a402c0()*0.00426956);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a4a0() {
   return (neuron0x3a40600()*-6.33825e-05);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a4e0() {
   return (neuron0x3a40940()*-0.0161037);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a860() {
   return (neuron0x3a3bcf0()*-0.182298);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a8a0() {
   return (neuron0x3a3bfa0()*-0.122351);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a8e0() {
   return (neuron0x3a3c2e0()*-0.919042);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a920() {
   return (neuron0x3a3c620()*0.36082);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a960() {
   return (neuron0x3a3c960()*0.0202688);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a9a0() {
   return (neuron0x3a3cca0()*-0.0540268);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a9e0() {
   return (neuron0x3a3cfe0()*0.00401486);
}

double NNfunction_ns_chi04_uL::synapse0x3a4aa20() {
   return (neuron0x3a3d320()*0.0282926);
}

double NNfunction_ns_chi04_uL::synapse0x3a4aa60() {
   return (neuron0x3a3d660()*-0.0142673);
}

double NNfunction_ns_chi04_uL::synapse0x3a4aaa0() {
   return (neuron0x3a3d9a0()*-0.0217179);
}

double NNfunction_ns_chi04_uL::synapse0x3a4aae0() {
   return (neuron0x3a3dce0()*-0.00127936);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ab20() {
   return (neuron0x3a3e020()*-0.155568);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ab60() {
   return (neuron0x3a3e360()*-0.0132655);
}

double NNfunction_ns_chi04_uL::synapse0x3a4aba0() {
   return (neuron0x3a3e6a0()*-0.0414792);
}

double NNfunction_ns_chi04_uL::synapse0x3a4abe0() {
   return (neuron0x3a3e9e0()*0.0538413);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ac20() {
   return (neuron0x3a3ed20()*-0.066177);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a6b0() {
   return (neuron0x3a3f060()*-0.060461);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a6f0() {
   return (neuron0x3a3f5c0()*0.0250956);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ad70() {
   return (neuron0x3a3f900()*-0.0319227);
}

double NNfunction_ns_chi04_uL::synapse0x3a4adb0() {
   return (neuron0x3a3fc40()*0.04848);
}

double NNfunction_ns_chi04_uL::synapse0x3a4adf0() {
   return (neuron0x3a3ff80()*-0.0265129);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ae30() {
   return (neuron0x3a402c0()*0.00847295);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ae70() {
   return (neuron0x3a40600()*-0.069452);
}

double NNfunction_ns_chi04_uL::synapse0x3a4aeb0() {
   return (neuron0x3a40940()*-0.067923);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b230() {
   return (neuron0x3a3bcf0()*0.715886);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b270() {
   return (neuron0x3a3bfa0()*0.669753);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b2b0() {
   return (neuron0x3a3c2e0()*-0.120827);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b2f0() {
   return (neuron0x3a3c620()*-0.0966818);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b330() {
   return (neuron0x3a3c960()*-0.466866);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b370() {
   return (neuron0x3a3cca0()*0.158542);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b3b0() {
   return (neuron0x3a3cfe0()*-0.0869539);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b3f0() {
   return (neuron0x3a3d320()*-0.0603308);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b430() {
   return (neuron0x3a3d660()*0.345261);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b470() {
   return (neuron0x3a3d9a0()*0.203101);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b4b0() {
   return (neuron0x3a3dce0()*-0.196542);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b4f0() {
   return (neuron0x3a3e020()*-1.26727);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b530() {
   return (neuron0x3a3e360()*-0.445588);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b570() {
   return (neuron0x3a3e6a0()*0.100651);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b5b0() {
   return (neuron0x3a3e9e0()*0.438282);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b5f0() {
   return (neuron0x3a3ed20()*-0.25804);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b080() {
   return (neuron0x3a3f060()*0.263191);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b0c0() {
   return (neuron0x3a3f5c0()*0.10552);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b740() {
   return (neuron0x3a3f900()*-0.0408934);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b780() {
   return (neuron0x3a3fc40()*-0.119762);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b7c0() {
   return (neuron0x3a3ff80()*1.21542);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b800() {
   return (neuron0x3a402c0()*0.392745);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b840() {
   return (neuron0x3a40600()*0.195594);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b880() {
   return (neuron0x3a40940()*-1.67538);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bc00() {
   return (neuron0x3a3bcf0()*0.0858817);
}

double NNfunction_ns_chi04_uL::synapse0x3a3be80() {
   return (neuron0x3a3bfa0()*5.88748);
}

double NNfunction_ns_chi04_uL::synapse0x3a3bec0() {
   return (neuron0x3a3c2e0()*-1.81363);
}

double NNfunction_ns_chi04_uL::synapse0x3a3c1c0() {
   return (neuron0x3a3c620()*0.0265856);
}

double NNfunction_ns_chi04_uL::synapse0x3a3c200() {
   return (neuron0x3a3c960()*0.00928085);
}

double NNfunction_ns_chi04_uL::synapse0x3a3c500() {
   return (neuron0x3a3cca0()*-0.0276802);
}

double NNfunction_ns_chi04_uL::synapse0x3a3c540() {
   return (neuron0x3a3cfe0()*-0.00872958);
}

double NNfunction_ns_chi04_uL::synapse0x3a3c840() {
   return (neuron0x3a3d320()*0.0434752);
}

double NNfunction_ns_chi04_uL::synapse0x3a3c880() {
   return (neuron0x3a3d660()*-0.0112651);
}

double NNfunction_ns_chi04_uL::synapse0x3a3cb80() {
   return (neuron0x3a3d9a0()*0.00476705);
}

double NNfunction_ns_chi04_uL::synapse0x3a3cbc0() {
   return (neuron0x3a3dce0()*-0.0632003);
}

double NNfunction_ns_chi04_uL::synapse0x3a3cec0() {
   return (neuron0x3a3e020()*0.381789);
}

double NNfunction_ns_chi04_uL::synapse0x3a3cf00() {
   return (neuron0x3a3e360()*0.0758789);
}

double NNfunction_ns_chi04_uL::synapse0x3a3d200() {
   return (neuron0x3a3e6a0()*-0.00646699);
}

double NNfunction_ns_chi04_uL::synapse0x3a3d240() {
   return (neuron0x3a3e9e0()*-0.0296049);
}

double NNfunction_ns_chi04_uL::synapse0x3a3d540() {
   return (neuron0x3a3ed20()*0.0426311);
}

double NNfunction_ns_chi04_uL::synapse0x3a3d580() {
   return (neuron0x3a3f060()*-0.0534338);
}

double NNfunction_ns_chi04_uL::synapse0x3a3d880() {
   return (neuron0x3a3f5c0()*0.0129817);
}

double NNfunction_ns_chi04_uL::synapse0x3a3d8c0() {
   return (neuron0x3a3f900()*-0.0494245);
}

double NNfunction_ns_chi04_uL::synapse0x3a3dbc0() {
   return (neuron0x3a3fc40()*-0.025337);
}

double NNfunction_ns_chi04_uL::synapse0x3a3dc00() {
   return (neuron0x3a3ff80()*-0.0227883);
}

double NNfunction_ns_chi04_uL::synapse0x3a3df00() {
   return (neuron0x3a402c0()*0.0240433);
}

double NNfunction_ns_chi04_uL::synapse0x3a3df40() {
   return (neuron0x3a40600()*-0.0571216);
}

double NNfunction_ns_chi04_uL::synapse0x3a3e240() {
   return (neuron0x3a40940()*-3.00409);
}

double NNfunction_ns_chi04_uL::synapse0x3a3e280() {
   return (neuron0x3a3bcf0()*0.156168);
}

double NNfunction_ns_chi04_uL::synapse0x3a3ef40() {
   return (neuron0x3a3bfa0()*-7.93087);
}

double NNfunction_ns_chi04_uL::synapse0x3a3ef80() {
   return (neuron0x3a3c2e0()*3.38621);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ba50() {
   return (neuron0x3a3c620()*0.0077737);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ba90() {
   return (neuron0x3a3c960()*-0.118381);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f280() {
   return (neuron0x3a3cca0()*-0.139314);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f2c0() {
   return (neuron0x3a3cfe0()*0.0382136);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f7e0() {
   return (neuron0x3a3d320()*-0.112013);
}

double NNfunction_ns_chi04_uL::synapse0x3a3f820() {
   return (neuron0x3a3d660()*0.0539612);
}

double NNfunction_ns_chi04_uL::synapse0x3a3fb20() {
   return (neuron0x3a3d9a0()*0.0438508);
}

double NNfunction_ns_chi04_uL::synapse0x3a3fb60() {
   return (neuron0x3a3dce0()*0.0984307);
}

double NNfunction_ns_chi04_uL::synapse0x3a3fe60() {
   return (neuron0x3a3e020()*0.306498);
}

double NNfunction_ns_chi04_uL::synapse0x3a3fea0() {
   return (neuron0x3a3e360()*0.0405966);
}

double NNfunction_ns_chi04_uL::synapse0x3a401a0() {
   return (neuron0x3a3e6a0()*0.00276117);
}

double NNfunction_ns_chi04_uL::synapse0x3a401e0() {
   return (neuron0x3a3e9e0()*0.0272453);
}

double NNfunction_ns_chi04_uL::synapse0x3a404e0() {
   return (neuron0x3a3ed20()*-0.0755429);
}

double NNfunction_ns_chi04_uL::synapse0x3a40520() {
   return (neuron0x3a3f060()*0.0120252);
}

double NNfunction_ns_chi04_uL::synapse0x3a40820() {
   return (neuron0x3a3f5c0()*0.0541735);
}

double NNfunction_ns_chi04_uL::synapse0x3a40860() {
   return (neuron0x3a3f900()*-0.0971555);
}

double NNfunction_ns_chi04_uL::synapse0x3a40b60() {
   return (neuron0x3a3fc40()*-0.0100614);
}

double NNfunction_ns_chi04_uL::synapse0x3a40ba0() {
   return (neuron0x3a3ff80()*0.144797);
}

double NNfunction_ns_chi04_uL::synapse0x3a3e580() {
   return (neuron0x3a402c0()*0.0198164);
}

double NNfunction_ns_chi04_uL::synapse0x3a3e5c0() {
   return (neuron0x3a40600()*-0.0498704);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d970() {
   return (neuron0x3a40940()*-4.07114);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dcf0() {
   return (neuron0x3a3bcf0()*-0.0844567);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dd30() {
   return (neuron0x3a3bfa0()*5.76773);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dd70() {
   return (neuron0x3a3c2e0()*0.755849);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ddb0() {
   return (neuron0x3a3c620()*-0.0131421);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ddf0() {
   return (neuron0x3a3c960()*0.0850805);
}

double NNfunction_ns_chi04_uL::synapse0x3a4de30() {
   return (neuron0x3a3cca0()*0.146494);
}

double NNfunction_ns_chi04_uL::synapse0x3a4de70() {
   return (neuron0x3a3cfe0()*0.0834769);
}

double NNfunction_ns_chi04_uL::synapse0x3a4deb0() {
   return (neuron0x3a3d320()*0.0637453);
}

double NNfunction_ns_chi04_uL::synapse0x3a4def0() {
   return (neuron0x3a3d660()*-0.0140584);
}

double NNfunction_ns_chi04_uL::synapse0x3a4df30() {
   return (neuron0x3a3d9a0()*0.0358424);
}

double NNfunction_ns_chi04_uL::synapse0x3a4df70() {
   return (neuron0x3a3dce0()*-0.110386);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dfb0() {
   return (neuron0x3a3e020()*0.879665);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dff0() {
   return (neuron0x3a3e360()*0.0417334);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e030() {
   return (neuron0x3a3e6a0()*0.0397122);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e070() {
   return (neuron0x3a3e9e0()*-0.165761);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e0b0() {
   return (neuron0x3a3ed20()*-0.149043);
}

double NNfunction_ns_chi04_uL::synapse0x3a4db40() {
   return (neuron0x3a3f060()*-0.13764);
}

double NNfunction_ns_chi04_uL::synapse0x3a4db80() {
   return (neuron0x3a3f5c0()*0.0818291);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e200() {
   return (neuron0x3a3f900()*0.0315227);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e240() {
   return (neuron0x3a3fc40()*-0.0515348);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e280() {
   return (neuron0x3a3ff80()*-0.0759577);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e2c0() {
   return (neuron0x3a402c0()*-0.0181446);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e300() {
   return (neuron0x3a40600()*0.0157484);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e340() {
   return (neuron0x3a40940()*3.64133);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e6c0() {
   return (neuron0x3a3bcf0()*-0.184123);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e700() {
   return (neuron0x3a3bfa0()*-0.249203);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e740() {
   return (neuron0x3a3c2e0()*-0.76128);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e780() {
   return (neuron0x3a3c620()*0.3649);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e7c0() {
   return (neuron0x3a3c960()*0.407989);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e800() {
   return (neuron0x3a3cca0()*-0.164632);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e840() {
   return (neuron0x3a3cfe0()*0.769324);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e880() {
   return (neuron0x3a3d320()*-0.0271262);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e8c0() {
   return (neuron0x3a3d660()*0.303853);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e900() {
   return (neuron0x3a3d9a0()*-0.664739);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e940() {
   return (neuron0x3a3dce0()*-0.0446998);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e980() {
   return (neuron0x3a3e020()*0.710605);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e9c0() {
   return (neuron0x3a3e360()*0.435718);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ea00() {
   return (neuron0x3a3e6a0()*-0.0996198);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ea40() {
   return (neuron0x3a3e9e0()*0.618361);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ea80() {
   return (neuron0x3a3ed20()*-0.212836);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e510() {
   return (neuron0x3a3f060()*-0.378649);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e550() {
   return (neuron0x3a3f5c0()*-0.161996);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ebd0() {
   return (neuron0x3a3f900()*-0.255747);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ec10() {
   return (neuron0x3a3fc40()*-0.32229);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ec50() {
   return (neuron0x3a3ff80()*-0.603132);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ec90() {
   return (neuron0x3a402c0()*-0.474067);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ecd0() {
   return (neuron0x3a40600()*0.826812);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ed10() {
   return (neuron0x3a40940()*-0.0554047);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f090() {
   return (neuron0x3a3bcf0()*0.656655);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f0d0() {
   return (neuron0x3a3bfa0()*-0.468245);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f110() {
   return (neuron0x3a3c2e0()*1.27107);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f150() {
   return (neuron0x3a3c620()*0.0183682);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f190() {
   return (neuron0x3a3c960()*0.0783617);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f1d0() {
   return (neuron0x3a3cca0()*-0.137645);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f210() {
   return (neuron0x3a3cfe0()*-0.102887);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f250() {
   return (neuron0x3a3d320()*0.08351);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f290() {
   return (neuron0x3a3d660()*0.0485704);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f2d0() {
   return (neuron0x3a3d9a0()*-0.0505274);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f310() {
   return (neuron0x3a3dce0()*0.0302469);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f350() {
   return (neuron0x3a3e020()*0.174143);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f390() {
   return (neuron0x3a3e360()*0.125227);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f3d0() {
   return (neuron0x3a3e6a0()*-0.0724908);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f410() {
   return (neuron0x3a3e9e0()*0.0195771);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f450() {
   return (neuron0x3a3ed20()*0.00527686);
}

double NNfunction_ns_chi04_uL::synapse0x3a4eee0() {
   return (neuron0x3a3f060()*0.137184);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ef20() {
   return (neuron0x3a3f5c0()*0.0110254);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f5a0() {
   return (neuron0x3a3f900()*-0.0354509);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f5e0() {
   return (neuron0x3a3fc40()*-0.103549);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f620() {
   return (neuron0x3a3ff80()*-0.0421744);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f660() {
   return (neuron0x3a402c0()*0.101707);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f6a0() {
   return (neuron0x3a40600()*-0.0612111);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f6e0() {
   return (neuron0x3a40940()*0.82571);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fa60() {
   return (neuron0x3a3bcf0()*0.00394259);
}

double NNfunction_ns_chi04_uL::synapse0x3a4faa0() {
   return (neuron0x3a3bfa0()*-9.66956);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fae0() {
   return (neuron0x3a3c2e0()*-10.8652);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fb20() {
   return (neuron0x3a3c620()*0.0371143);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fb60() {
   return (neuron0x3a3c960()*-0.0621213);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fba0() {
   return (neuron0x3a3cca0()*-0.0337705);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fbe0() {
   return (neuron0x3a3cfe0()*-0.0412164);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fc20() {
   return (neuron0x3a3d320()*0.0678539);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fc60() {
   return (neuron0x3a3d660()*0.0320208);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fca0() {
   return (neuron0x3a3d9a0()*0.0531704);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fce0() {
   return (neuron0x3a3dce0()*-0.030909);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fd20() {
   return (neuron0x3a3e020()*-0.282004);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fd60() {
   return (neuron0x3a3e360()*-0.00205497);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fda0() {
   return (neuron0x3a3e6a0()*-0.0434004);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fde0() {
   return (neuron0x3a3e9e0()*-0.00259033);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fe20() {
   return (neuron0x3a3ed20()*0.0131637);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f8b0() {
   return (neuron0x3a3f060()*0.0106943);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f8f0() {
   return (neuron0x3a3f5c0()*0.0192349);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ff70() {
   return (neuron0x3a3f900()*0.0214907);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ffb0() {
   return (neuron0x3a3fc40()*-0.00451763);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fff0() {
   return (neuron0x3a3ff80()*0.0283005);
}

double NNfunction_ns_chi04_uL::synapse0x3a50030() {
   return (neuron0x3a402c0()*0.0160771);
}

double NNfunction_ns_chi04_uL::synapse0x3a50070() {
   return (neuron0x3a40600()*0.019418);
}

double NNfunction_ns_chi04_uL::synapse0x3a500b0() {
   return (neuron0x3a40940()*0.0067064);
}

double NNfunction_ns_chi04_uL::synapse0x3a50430() {
   return (neuron0x3a3bcf0()*0.0758183);
}

double NNfunction_ns_chi04_uL::synapse0x3a50470() {
   return (neuron0x3a3bfa0()*-0.274733);
}

double NNfunction_ns_chi04_uL::synapse0x3a504b0() {
   return (neuron0x3a3c2e0()*1.2451);
}

double NNfunction_ns_chi04_uL::synapse0x3a504f0() {
   return (neuron0x3a3c620()*-0.656176);
}

double NNfunction_ns_chi04_uL::synapse0x3a50530() {
   return (neuron0x3a3c960()*-0.852047);
}

double NNfunction_ns_chi04_uL::synapse0x3a50570() {
   return (neuron0x3a3cca0()*0.292907);
}

double NNfunction_ns_chi04_uL::synapse0x3a505b0() {
   return (neuron0x3a3cfe0()*0.604984);
}

double NNfunction_ns_chi04_uL::synapse0x3a505f0() {
   return (neuron0x3a3d320()*-0.322095);
}

double NNfunction_ns_chi04_uL::synapse0x3a50630() {
   return (neuron0x3a3d660()*-0.310784);
}

double NNfunction_ns_chi04_uL::synapse0x3a487f0() {
   return (neuron0x3a3d9a0()*0.529379);
}

double NNfunction_ns_chi04_uL::synapse0x3a48830() {
   return (neuron0x3a3dce0()*-0.0335194);
}

double NNfunction_ns_chi04_uL::synapse0x3a48870() {
   return (neuron0x3a3e020()*0.557437);
}

double NNfunction_ns_chi04_uL::synapse0x3a488b0() {
   return (neuron0x3a3e360()*-0.0323654);
}

double NNfunction_ns_chi04_uL::synapse0x3a488f0() {
   return (neuron0x3a3e6a0()*-0.122407);
}

double NNfunction_ns_chi04_uL::synapse0x3a48930() {
   return (neuron0x3a3e9e0()*-0.100476);
}

double NNfunction_ns_chi04_uL::synapse0x3a48970() {
   return (neuron0x3a3ed20()*-0.64245);
}

double NNfunction_ns_chi04_uL::synapse0x3a50280() {
   return (neuron0x3a3f060()*-0.268669);
}

double NNfunction_ns_chi04_uL::synapse0x3a502c0() {
   return (neuron0x3a3f5c0()*-0.604853);
}

double NNfunction_ns_chi04_uL::synapse0x3a48ac0() {
   return (neuron0x3a3f900()*0.124791);
}

double NNfunction_ns_chi04_uL::synapse0x3a48b00() {
   return (neuron0x3a3fc40()*0.296699);
}

double NNfunction_ns_chi04_uL::synapse0x3a48b40() {
   return (neuron0x3a3ff80()*0.953433);
}

double NNfunction_ns_chi04_uL::synapse0x3a48b80() {
   return (neuron0x3a402c0()*0.508515);
}

double NNfunction_ns_chi04_uL::synapse0x3a48bc0() {
   return (neuron0x3a40600()*0.691004);
}

double NNfunction_ns_chi04_uL::synapse0x3a48c00() {
   return (neuron0x3a40940()*0.00181966);
}

double NNfunction_ns_chi04_uL::synapse0x3a48f80() {
   return (neuron0x3a3bcf0()*-0.151259);
}

double NNfunction_ns_chi04_uL::synapse0x3a48fc0() {
   return (neuron0x3a3bfa0()*-1.45986);
}

double NNfunction_ns_chi04_uL::synapse0x3a49000() {
   return (neuron0x3a3c2e0()*0.336066);
}

double NNfunction_ns_chi04_uL::synapse0x3a49040() {
   return (neuron0x3a3c620()*-0.193188);
}

double NNfunction_ns_chi04_uL::synapse0x3a49080() {
   return (neuron0x3a3c960()*-0.303171);
}

double NNfunction_ns_chi04_uL::synapse0x3a490c0() {
   return (neuron0x3a3cca0()*-0.578381);
}

double NNfunction_ns_chi04_uL::synapse0x3a49100() {
   return (neuron0x3a3cfe0()*0.133363);
}

double NNfunction_ns_chi04_uL::synapse0x3a49140() {
   return (neuron0x3a3d320()*-0.616487);
}

double NNfunction_ns_chi04_uL::synapse0x3a49180() {
   return (neuron0x3a3d660()*0.350923);
}

double NNfunction_ns_chi04_uL::synapse0x3a491c0() {
   return (neuron0x3a3d9a0()*-0.0634575);
}

double NNfunction_ns_chi04_uL::synapse0x3a49200() {
   return (neuron0x3a3dce0()*-0.438127);
}

double NNfunction_ns_chi04_uL::synapse0x3a49240() {
   return (neuron0x3a3e020()*1.02037);
}

double NNfunction_ns_chi04_uL::synapse0x3a49280() {
   return (neuron0x3a3e360()*-0.629286);
}

double NNfunction_ns_chi04_uL::synapse0x3a492c0() {
   return (neuron0x3a3e6a0()*0.315186);
}

double NNfunction_ns_chi04_uL::synapse0x3a49300() {
   return (neuron0x3a3e9e0()*0.229722);
}

double NNfunction_ns_chi04_uL::synapse0x3a49340() {
   return (neuron0x3a3ed20()*0.946592);
}

double NNfunction_ns_chi04_uL::synapse0x3a48dd0() {
   return (neuron0x3a3f060()*-0.29712);
}

double NNfunction_ns_chi04_uL::synapse0x3a48e10() {
   return (neuron0x3a3f5c0()*-0.361222);
}

double NNfunction_ns_chi04_uL::synapse0x3a49490() {
   return (neuron0x3a3f900()*0.227673);
}

double NNfunction_ns_chi04_uL::synapse0x3a494d0() {
   return (neuron0x3a3fc40()*-0.0504644);
}

double NNfunction_ns_chi04_uL::synapse0x3a49510() {
   return (neuron0x3a3ff80()*0.0386511);
}

double NNfunction_ns_chi04_uL::synapse0x3a49550() {
   return (neuron0x3a402c0()*0.289023);
}

double NNfunction_ns_chi04_uL::synapse0x3a49590() {
   return (neuron0x3a40600()*-0.69056);
}

double NNfunction_ns_chi04_uL::synapse0x3a495d0() {
   return (neuron0x3a40940()*1.45298);
}

double NNfunction_ns_chi04_uL::synapse0x3a497a0() {
   return (neuron0x3a3bcf0()*-0.492089);
}

double NNfunction_ns_chi04_uL::synapse0x3a52830() {
   return (neuron0x3a3bfa0()*-0.0882233);
}

double NNfunction_ns_chi04_uL::synapse0x3a52870() {
   return (neuron0x3a3c2e0()*0.17275);
}

double NNfunction_ns_chi04_uL::synapse0x3a528b0() {
   return (neuron0x3a3c620()*0.0447132);
}

double NNfunction_ns_chi04_uL::synapse0x3a528f0() {
   return (neuron0x3a3c960()*-0.878829);
}

double NNfunction_ns_chi04_uL::synapse0x3a52930() {
   return (neuron0x3a3cca0()*0.255132);
}

double NNfunction_ns_chi04_uL::synapse0x3a52970() {
   return (neuron0x3a3cfe0()*-0.950406);
}

double NNfunction_ns_chi04_uL::synapse0x3a529b0() {
   return (neuron0x3a3d320()*0.661964);
}

double NNfunction_ns_chi04_uL::synapse0x3a529f0() {
   return (neuron0x3a3d660()*0.568993);
}

double NNfunction_ns_chi04_uL::synapse0x3a52a30() {
   return (neuron0x3a3d9a0()*0.0769878);
}

double NNfunction_ns_chi04_uL::synapse0x3a52a70() {
   return (neuron0x3a3dce0()*-0.0222483);
}

double NNfunction_ns_chi04_uL::synapse0x3a52ab0() {
   return (neuron0x3a3e020()*-0.512659);
}

double NNfunction_ns_chi04_uL::synapse0x3a52af0() {
   return (neuron0x3a3e360()*-0.500084);
}

double NNfunction_ns_chi04_uL::synapse0x3a52b30() {
   return (neuron0x3a3e6a0()*0.379104);
}

double NNfunction_ns_chi04_uL::synapse0x3a52b70() {
   return (neuron0x3a3e9e0()*-0.372695);
}

double NNfunction_ns_chi04_uL::synapse0x3a52bb0() {
   return (neuron0x3a3ed20()*0.0800396);
}

double NNfunction_ns_chi04_uL::synapse0x3a52680() {
   return (neuron0x3a3f060()*0.103336);
}

double NNfunction_ns_chi04_uL::synapse0x3a526c0() {
   return (neuron0x3a3f5c0()*-0.040168);
}

double NNfunction_ns_chi04_uL::synapse0x3a52d00() {
   return (neuron0x3a3f900()*-0.509331);
}

double NNfunction_ns_chi04_uL::synapse0x3a52d40() {
   return (neuron0x3a3fc40()*-0.362071);
}

double NNfunction_ns_chi04_uL::synapse0x3a52d80() {
   return (neuron0x3a3ff80()*0.938547);
}

double NNfunction_ns_chi04_uL::synapse0x3a52dc0() {
   return (neuron0x3a402c0()*-0.356516);
}

double NNfunction_ns_chi04_uL::synapse0x3a52e00() {
   return (neuron0x3a40600()*0.136768);
}

double NNfunction_ns_chi04_uL::synapse0x3a52e40() {
   return (neuron0x3a40940()*-0.279693);
}

double NNfunction_ns_chi04_uL::synapse0x3a531c0() {
   return (neuron0x3a3bcf0()*-0.09536);
}

double NNfunction_ns_chi04_uL::synapse0x3a53200() {
   return (neuron0x3a3bfa0()*0.143517);
}

double NNfunction_ns_chi04_uL::synapse0x3a53240() {
   return (neuron0x3a3c2e0()*-0.661777);
}

double NNfunction_ns_chi04_uL::synapse0x3a53280() {
   return (neuron0x3a3c620()*-0.869629);
}

double NNfunction_ns_chi04_uL::synapse0x3a532c0() {
   return (neuron0x3a3c960()*0.0717564);
}

double NNfunction_ns_chi04_uL::synapse0x3a53300() {
   return (neuron0x3a3cca0()*0.283572);
}

double NNfunction_ns_chi04_uL::synapse0x3a53340() {
   return (neuron0x3a3cfe0()*-1.02735);
}

double NNfunction_ns_chi04_uL::synapse0x3a53380() {
   return (neuron0x3a3d320()*1.07106);
}

double NNfunction_ns_chi04_uL::synapse0x3a533c0() {
   return (neuron0x3a3d660()*-0.351629);
}

double NNfunction_ns_chi04_uL::synapse0x3a53400() {
   return (neuron0x3a3d9a0()*0.618353);
}

double NNfunction_ns_chi04_uL::synapse0x3a53440() {
   return (neuron0x3a3dce0()*-0.413794);
}

double NNfunction_ns_chi04_uL::synapse0x3a53480() {
   return (neuron0x3a3e020()*0.147276);
}

double NNfunction_ns_chi04_uL::synapse0x3a534c0() {
   return (neuron0x3a3e360()*0.235499);
}

double NNfunction_ns_chi04_uL::synapse0x3a53500() {
   return (neuron0x3a3e6a0()*0.410141);
}

double NNfunction_ns_chi04_uL::synapse0x3a53540() {
   return (neuron0x3a3e9e0()*0.424587);
}

double NNfunction_ns_chi04_uL::synapse0x3a53580() {
   return (neuron0x3a3ed20()*-0.151406);
}

double NNfunction_ns_chi04_uL::synapse0x3a53010() {
   return (neuron0x3a3f060()*0.759582);
}

double NNfunction_ns_chi04_uL::synapse0x3a53050() {
   return (neuron0x3a3f5c0()*0.128674);
}

double NNfunction_ns_chi04_uL::synapse0x3a536d0() {
   return (neuron0x3a3f900()*-0.529071);
}

double NNfunction_ns_chi04_uL::synapse0x3a53710() {
   return (neuron0x3a3fc40()*-0.0445049);
}

double NNfunction_ns_chi04_uL::synapse0x3a53750() {
   return (neuron0x3a3ff80()*0.602214);
}

double NNfunction_ns_chi04_uL::synapse0x3a53790() {
   return (neuron0x3a402c0()*0.153799);
}

double NNfunction_ns_chi04_uL::synapse0x3a537d0() {
   return (neuron0x3a40600()*-0.58458);
}

double NNfunction_ns_chi04_uL::synapse0x3a53810() {
   return (neuron0x3a40940()*0.640945);
}

double NNfunction_ns_chi04_uL::synapse0x3a53b90() {
   return (neuron0x3a3bcf0()*0.0804925);
}

double NNfunction_ns_chi04_uL::synapse0x3a53bd0() {
   return (neuron0x3a3bfa0()*0.921526);
}

double NNfunction_ns_chi04_uL::synapse0x3a53c10() {
   return (neuron0x3a3c2e0()*-0.578032);
}

double NNfunction_ns_chi04_uL::synapse0x3a53c50() {
   return (neuron0x3a3c620()*2.70056e-06);
}

double NNfunction_ns_chi04_uL::synapse0x3a53c90() {
   return (neuron0x3a3c960()*-0.00262542);
}

double NNfunction_ns_chi04_uL::synapse0x3a53cd0() {
   return (neuron0x3a3cca0()*0.00198235);
}

double NNfunction_ns_chi04_uL::synapse0x3a53d10() {
   return (neuron0x3a3cfe0()*-0.0186778);
}

double NNfunction_ns_chi04_uL::synapse0x3a53d50() {
   return (neuron0x3a3d320()*0.00987906);
}

double NNfunction_ns_chi04_uL::synapse0x3a53d90() {
   return (neuron0x3a3d660()*0.0173633);
}

double NNfunction_ns_chi04_uL::synapse0x3a53dd0() {
   return (neuron0x3a3d9a0()*-0.00877847);
}

double NNfunction_ns_chi04_uL::synapse0x3a53e10() {
   return (neuron0x3a3dce0()*0.00729071);
}

double NNfunction_ns_chi04_uL::synapse0x3a53e50() {
   return (neuron0x3a3e020()*0.161384);
}

double NNfunction_ns_chi04_uL::synapse0x3a53e90() {
   return (neuron0x3a3e360()*0.0136235);
}

double NNfunction_ns_chi04_uL::synapse0x3a53ed0() {
   return (neuron0x3a3e6a0()*0.014102);
}

double NNfunction_ns_chi04_uL::synapse0x3a53f10() {
   return (neuron0x3a3e9e0()*0.00706916);
}

double NNfunction_ns_chi04_uL::synapse0x3a53f50() {
   return (neuron0x3a3ed20()*0.00481117);
}

double NNfunction_ns_chi04_uL::synapse0x3a539e0() {
   return (neuron0x3a3f060()*0.00852316);
}

double NNfunction_ns_chi04_uL::synapse0x3a53a20() {
   return (neuron0x3a3f5c0()*0.0124316);
}

double NNfunction_ns_chi04_uL::synapse0x3a540a0() {
   return (neuron0x3a3f900()*0.00744591);
}

double NNfunction_ns_chi04_uL::synapse0x3a540e0() {
   return (neuron0x3a3fc40()*-0.00569732);
}

double NNfunction_ns_chi04_uL::synapse0x3a54120() {
   return (neuron0x3a3ff80()*0.0102254);
}

double NNfunction_ns_chi04_uL::synapse0x3a54160() {
   return (neuron0x3a402c0()*-0.00264671);
}

double NNfunction_ns_chi04_uL::synapse0x3a541a0() {
   return (neuron0x3a40600()*0.00431384);
}

double NNfunction_ns_chi04_uL::synapse0x3a541e0() {
   return (neuron0x3a40940()*0.771717);
}

double NNfunction_ns_chi04_uL::synapse0x3a54560() {
   return (neuron0x3a3bcf0()*0.852117);
}

double NNfunction_ns_chi04_uL::synapse0x3a545a0() {
   return (neuron0x3a3bfa0()*0.616302);
}

double NNfunction_ns_chi04_uL::synapse0x3a545e0() {
   return (neuron0x3a3c2e0()*0.480503);
}

double NNfunction_ns_chi04_uL::synapse0x3a54620() {
   return (neuron0x3a3c620()*0.449477);
}

double NNfunction_ns_chi04_uL::synapse0x3a54660() {
   return (neuron0x3a3c960()*-0.359675);
}

double NNfunction_ns_chi04_uL::synapse0x3a546a0() {
   return (neuron0x3a3cca0()*0.499116);
}

double NNfunction_ns_chi04_uL::synapse0x3a546e0() {
   return (neuron0x3a3cfe0()*-0.269581);
}

double NNfunction_ns_chi04_uL::synapse0x3a54720() {
   return (neuron0x3a3d320()*0.245894);
}

double NNfunction_ns_chi04_uL::synapse0x3a54760() {
   return (neuron0x3a3d660()*0.0331912);
}

double NNfunction_ns_chi04_uL::synapse0x3a547a0() {
   return (neuron0x3a3d9a0()*1.48626);
}

double NNfunction_ns_chi04_uL::synapse0x3a547e0() {
   return (neuron0x3a3dce0()*-0.358523);
}

double NNfunction_ns_chi04_uL::synapse0x3a54820() {
   return (neuron0x3a3e020()*0.560447);
}

double NNfunction_ns_chi04_uL::synapse0x3a54860() {
   return (neuron0x3a3e360()*0.229286);
}

double NNfunction_ns_chi04_uL::synapse0x3a548a0() {
   return (neuron0x3a3e6a0()*-0.320496);
}

double NNfunction_ns_chi04_uL::synapse0x3a548e0() {
   return (neuron0x3a3e9e0()*0.260122);
}

double NNfunction_ns_chi04_uL::synapse0x3a54920() {
   return (neuron0x3a3ed20()*0.162486);
}

double NNfunction_ns_chi04_uL::synapse0x3a543b0() {
   return (neuron0x3a3f060()*-0.680532);
}

double NNfunction_ns_chi04_uL::synapse0x3a543f0() {
   return (neuron0x3a3f5c0()*-0.944244);
}

double NNfunction_ns_chi04_uL::synapse0x3a54a70() {
   return (neuron0x3a3f900()*0.510821);
}

double NNfunction_ns_chi04_uL::synapse0x3a54ab0() {
   return (neuron0x3a3fc40()*0.238872);
}

double NNfunction_ns_chi04_uL::synapse0x3a54af0() {
   return (neuron0x3a3ff80()*0.0706415);
}

double NNfunction_ns_chi04_uL::synapse0x3a54b30() {
   return (neuron0x3a402c0()*-0.790757);
}

double NNfunction_ns_chi04_uL::synapse0x3a54b70() {
   return (neuron0x3a40600()*-0.384688);
}

double NNfunction_ns_chi04_uL::synapse0x3a54bb0() {
   return (neuron0x3a40940()*0.790019);
}

double NNfunction_ns_chi04_uL::synapse0x3a54f30() {
   return (neuron0x3a3bcf0()*-0.340537);
}

double NNfunction_ns_chi04_uL::synapse0x3a54f70() {
   return (neuron0x3a3bfa0()*0.107822);
}

double NNfunction_ns_chi04_uL::synapse0x3a54fb0() {
   return (neuron0x3a3c2e0()*0.773514);
}

double NNfunction_ns_chi04_uL::synapse0x3a54ff0() {
   return (neuron0x3a3c620()*0.336125);
}

double NNfunction_ns_chi04_uL::synapse0x3a55030() {
   return (neuron0x3a3c960()*0.578239);
}

double NNfunction_ns_chi04_uL::synapse0x3a55070() {
   return (neuron0x3a3cca0()*-0.220119);
}

double NNfunction_ns_chi04_uL::synapse0x3a550b0() {
   return (neuron0x3a3cfe0()*0.309262);
}

double NNfunction_ns_chi04_uL::synapse0x3a550f0() {
   return (neuron0x3a3d320()*0.0452884);
}

double NNfunction_ns_chi04_uL::synapse0x3a55130() {
   return (neuron0x3a3d660()*0.210566);
}

double NNfunction_ns_chi04_uL::synapse0x3a55170() {
   return (neuron0x3a3d9a0()*-0.129043);
}

double NNfunction_ns_chi04_uL::synapse0x3a551b0() {
   return (neuron0x3a3dce0()*0.225723);
}

double NNfunction_ns_chi04_uL::synapse0x3a551f0() {
   return (neuron0x3a3e020()*0.00455347);
}

double NNfunction_ns_chi04_uL::synapse0x3a55230() {
   return (neuron0x3a3e360()*0.774645);
}

double NNfunction_ns_chi04_uL::synapse0x3a55270() {
   return (neuron0x3a3e6a0()*-0.349722);
}

double NNfunction_ns_chi04_uL::synapse0x3a552b0() {
   return (neuron0x3a3e9e0()*0.67171);
}

double NNfunction_ns_chi04_uL::synapse0x3a552f0() {
   return (neuron0x3a3ed20()*0.347295);
}

double NNfunction_ns_chi04_uL::synapse0x3a54d80() {
   return (neuron0x3a3f060()*-0.429316);
}

double NNfunction_ns_chi04_uL::synapse0x3a54dc0() {
   return (neuron0x3a3f5c0()*-0.406825);
}

double NNfunction_ns_chi04_uL::synapse0x3a55440() {
   return (neuron0x3a3f900()*-0.361599);
}

double NNfunction_ns_chi04_uL::synapse0x3a55480() {
   return (neuron0x3a3fc40()*-0.263499);
}

double NNfunction_ns_chi04_uL::synapse0x3a554c0() {
   return (neuron0x3a3ff80()*0.310607);
}

double NNfunction_ns_chi04_uL::synapse0x3a55500() {
   return (neuron0x3a402c0()*-0.286227);
}

double NNfunction_ns_chi04_uL::synapse0x3a55540() {
   return (neuron0x3a40600()*0.240994);
}

double NNfunction_ns_chi04_uL::synapse0x3a55580() {
   return (neuron0x3a40940()*-0.217585);
}

double NNfunction_ns_chi04_uL::synapse0x3a55900() {
   return (neuron0x3a3bcf0()*0.00999124);
}

double NNfunction_ns_chi04_uL::synapse0x3a55940() {
   return (neuron0x3a3bfa0()*0.0386599);
}

double NNfunction_ns_chi04_uL::synapse0x3a55980() {
   return (neuron0x3a3c2e0()*0.0233396);
}

double NNfunction_ns_chi04_uL::synapse0x3a559c0() {
   return (neuron0x3a3c620()*-2.45889);
}

double NNfunction_ns_chi04_uL::synapse0x3a55a00() {
   return (neuron0x3a3c960()*0.00437688);
}

double NNfunction_ns_chi04_uL::synapse0x3a55a40() {
   return (neuron0x3a3cca0()*-0.0014147);
}

double NNfunction_ns_chi04_uL::synapse0x3a55a80() {
   return (neuron0x3a3cfe0()*-0.0121082);
}

double NNfunction_ns_chi04_uL::synapse0x3a55ac0() {
   return (neuron0x3a3d320()*-0.00257344);
}

double NNfunction_ns_chi04_uL::synapse0x3a55b00() {
   return (neuron0x3a3d660()*0.00202421);
}

double NNfunction_ns_chi04_uL::synapse0x3a55b40() {
   return (neuron0x3a3d9a0()*-0.00654495);
}

double NNfunction_ns_chi04_uL::synapse0x3a55b80() {
   return (neuron0x3a3dce0()*-0.00955884);
}

double NNfunction_ns_chi04_uL::synapse0x3a55bc0() {
   return (neuron0x3a3e020()*-0.330248);
}

double NNfunction_ns_chi04_uL::synapse0x3a55c00() {
   return (neuron0x3a3e360()*-0.00749798);
}

double NNfunction_ns_chi04_uL::synapse0x3a55c40() {
   return (neuron0x3a3e6a0()*-0.0088763);
}

double NNfunction_ns_chi04_uL::synapse0x3a55c80() {
   return (neuron0x3a3e9e0()*0.0142974);
}

double NNfunction_ns_chi04_uL::synapse0x3a55cc0() {
   return (neuron0x3a3ed20()*0.00631076);
}

double NNfunction_ns_chi04_uL::synapse0x3a55750() {
   return (neuron0x3a3f060()*-0.0132235);
}

double NNfunction_ns_chi04_uL::synapse0x3a55790() {
   return (neuron0x3a3f5c0()*0.0187738);
}

double NNfunction_ns_chi04_uL::synapse0x3a55e10() {
   return (neuron0x3a3f900()*-0.000725249);
}

double NNfunction_ns_chi04_uL::synapse0x3a55e50() {
   return (neuron0x3a3fc40()*0.00399326);
}

double NNfunction_ns_chi04_uL::synapse0x3a55e90() {
   return (neuron0x3a3ff80()*0.0100016);
}

double NNfunction_ns_chi04_uL::synapse0x3a55ed0() {
   return (neuron0x3a402c0()*-0.00705676);
}

double NNfunction_ns_chi04_uL::synapse0x3a55f10() {
   return (neuron0x3a40600()*-0.00548325);
}

double NNfunction_ns_chi04_uL::synapse0x3a55f50() {
   return (neuron0x3a40940()*0.0014767);
}

double NNfunction_ns_chi04_uL::synapse0x3a562d0() {
   return (neuron0x3a3bcf0()*-0.0161426);
}

double NNfunction_ns_chi04_uL::synapse0x3a56310() {
   return (neuron0x3a3bfa0()*0.231149);
}

double NNfunction_ns_chi04_uL::synapse0x3a56350() {
   return (neuron0x3a3c2e0()*-3.20493);
}

double NNfunction_ns_chi04_uL::synapse0x3a56390() {
   return (neuron0x3a3c620()*-0.0104176);
}

double NNfunction_ns_chi04_uL::synapse0x3a563d0() {
   return (neuron0x3a3c960()*0.0331641);
}

double NNfunction_ns_chi04_uL::synapse0x3a56410() {
   return (neuron0x3a3cca0()*-0.0574115);
}

double NNfunction_ns_chi04_uL::synapse0x3a56450() {
   return (neuron0x3a3cfe0()*-0.0128243);
}

double NNfunction_ns_chi04_uL::synapse0x3a56490() {
   return (neuron0x3a3d320()*-0.000998088);
}

double NNfunction_ns_chi04_uL::synapse0x3a564d0() {
   return (neuron0x3a3d660()*0.026202);
}

double NNfunction_ns_chi04_uL::synapse0x3a56510() {
   return (neuron0x3a3d9a0()*0.0258647);
}

double NNfunction_ns_chi04_uL::synapse0x3a56550() {
   return (neuron0x3a3dce0()*0.0270512);
}

double NNfunction_ns_chi04_uL::synapse0x3a56590() {
   return (neuron0x3a3e020()*0.305212);
}

double NNfunction_ns_chi04_uL::synapse0x3a565d0() {
   return (neuron0x3a3e360()*-0.0438977);
}

double NNfunction_ns_chi04_uL::synapse0x3a56610() {
   return (neuron0x3a3e6a0()*0.0147017);
}

double NNfunction_ns_chi04_uL::synapse0x3a56650() {
   return (neuron0x3a3e9e0()*0.00892933);
}

double NNfunction_ns_chi04_uL::synapse0x3a56690() {
   return (neuron0x3a3ed20()*0.0203273);
}

double NNfunction_ns_chi04_uL::synapse0x3a56120() {
   return (neuron0x3a3f060()*-0.000429155);
}

double NNfunction_ns_chi04_uL::synapse0x3a56160() {
   return (neuron0x3a3f5c0()*0.0175502);
}

double NNfunction_ns_chi04_uL::synapse0x3a567e0() {
   return (neuron0x3a3f900()*0.0368288);
}

double NNfunction_ns_chi04_uL::synapse0x3a56820() {
   return (neuron0x3a3fc40()*-0.00202147);
}

double NNfunction_ns_chi04_uL::synapse0x3a56860() {
   return (neuron0x3a3ff80()*0.00657787);
}

double NNfunction_ns_chi04_uL::synapse0x3a568a0() {
   return (neuron0x3a402c0()*0.0179723);
}

double NNfunction_ns_chi04_uL::synapse0x3a568e0() {
   return (neuron0x3a40600()*0.0448679);
}

double NNfunction_ns_chi04_uL::synapse0x3a56920() {
   return (neuron0x3a40940()*-2.37389);
}

double NNfunction_ns_chi04_uL::synapse0x3a56ca0() {
   return (neuron0x3a3bcf0()*0.693285);
}

double NNfunction_ns_chi04_uL::synapse0x3a56ce0() {
   return (neuron0x3a3bfa0()*-0.345063);
}

double NNfunction_ns_chi04_uL::synapse0x3a56d20() {
   return (neuron0x3a3c2e0()*-0.118775);
}

double NNfunction_ns_chi04_uL::synapse0x3a56d60() {
   return (neuron0x3a3c620()*-0.885901);
}

double NNfunction_ns_chi04_uL::synapse0x3a56da0() {
   return (neuron0x3a3c960()*1.10921);
}

double NNfunction_ns_chi04_uL::synapse0x3a56de0() {
   return (neuron0x3a3cca0()*-0.000787022);
}

double NNfunction_ns_chi04_uL::synapse0x3a56e20() {
   return (neuron0x3a3cfe0()*0.0310433);
}

double NNfunction_ns_chi04_uL::synapse0x3a56e60() {
   return (neuron0x3a3d320()*0.416283);
}

double NNfunction_ns_chi04_uL::synapse0x3a56ea0() {
   return (neuron0x3a3d660()*0.869438);
}

double NNfunction_ns_chi04_uL::synapse0x3a56ee0() {
   return (neuron0x3a3d9a0()*0.136958);
}

double NNfunction_ns_chi04_uL::synapse0x3a56f20() {
   return (neuron0x3a3dce0()*-0.335568);
}

double NNfunction_ns_chi04_uL::synapse0x3a56f60() {
   return (neuron0x3a3e020()*-1.16088);
}

double NNfunction_ns_chi04_uL::synapse0x3a56fa0() {
   return (neuron0x3a3e360()*0.549653);
}

double NNfunction_ns_chi04_uL::synapse0x3a56fe0() {
   return (neuron0x3a3e6a0()*-0.650266);
}

double NNfunction_ns_chi04_uL::synapse0x3a57020() {
   return (neuron0x3a3e9e0()*0.465301);
}

double NNfunction_ns_chi04_uL::synapse0x3a57060() {
   return (neuron0x3a3ed20()*1.52797);
}

double NNfunction_ns_chi04_uL::synapse0x3a56af0() {
   return (neuron0x3a3f060()*-0.306817);
}

double NNfunction_ns_chi04_uL::synapse0x3a56b30() {
   return (neuron0x3a3f5c0()*-0.461867);
}

double NNfunction_ns_chi04_uL::synapse0x3a571b0() {
   return (neuron0x3a3f900()*0.198799);
}

double NNfunction_ns_chi04_uL::synapse0x3a571f0() {
   return (neuron0x3a3fc40()*0.156313);
}

double NNfunction_ns_chi04_uL::synapse0x3a57230() {
   return (neuron0x3a3ff80()*0.437803);
}

double NNfunction_ns_chi04_uL::synapse0x3a57270() {
   return (neuron0x3a402c0()*-0.0478182);
}

double NNfunction_ns_chi04_uL::synapse0x3a572b0() {
   return (neuron0x3a40600()*-0.0947818);
}

double NNfunction_ns_chi04_uL::synapse0x3a572f0() {
   return (neuron0x3a40940()*0.619043);
}

double NNfunction_ns_chi04_uL::synapse0x3a57670() {
   return (neuron0x3a3bcf0()*0.0259571);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bc40() {
   return (neuron0x3a3bfa0()*11.0744);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bc80() {
   return (neuron0x3a3c2e0()*-8.99227);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bcc0() {
   return (neuron0x3a3c620()*0.00542408);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bf10() {
   return (neuron0x3a3c960()*-0.0149933);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bf50() {
   return (neuron0x3a3cca0()*-0.0143058);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bf90() {
   return (neuron0x3a3cfe0()*0.0223969);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c1e0() {
   return (neuron0x3a3d320()*-0.0793941);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c220() {
   return (neuron0x3a3d660()*0.0595366);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c470() {
   return (neuron0x3a3d9a0()*0.0208914);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c4b0() {
   return (neuron0x3a3dce0()*0.0554739);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c4f0() {
   return (neuron0x3a3e020()*-0.147216);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c740() {
   return (neuron0x3a3e360()*-0.0426433);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c780() {
   return (neuron0x3a3e6a0()*0.000357092);
}

double NNfunction_ns_chi04_uL::synapse0x3a4c9d0() {
   return (neuron0x3a3e9e0()*0.023177);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ca10() {
   return (neuron0x3a3ed20()*0.0110178);
}

double NNfunction_ns_chi04_uL::synapse0x3a574c0() {
   return (neuron0x3a3f060()*0.0141351);
}

double NNfunction_ns_chi04_uL::synapse0x3a57500() {
   return (neuron0x3a3f5c0()*-0.0175944);
}

double NNfunction_ns_chi04_uL::synapse0x3a4cb60() {
   return (neuron0x3a3f900()*-0.0541178);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d070() {
   return (neuron0x3a3fc40()*0.000957303);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d0b0() {
   return (neuron0x3a3ff80()*0.0168381);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d0f0() {
   return (neuron0x3a402c0()*-0.0235253);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d340() {
   return (neuron0x3a40600()*-0.00618171);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d380() {
   return (neuron0x3a40940()*-0.108725);
}

double NNfunction_ns_chi04_uL::synapse0x3a4cc30() {
   return (neuron0x3a3bcf0()*-1.71046);
}

double NNfunction_ns_chi04_uL::synapse0x3a4cc70() {
   return (neuron0x3a3bfa0()*-0.0386913);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ccb0() {
   return (neuron0x3a3c2e0()*-0.452421);
}

double NNfunction_ns_chi04_uL::synapse0x3a4ccf0() {
   return (neuron0x3a3c620()*0.468572);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d670() {
   return (neuron0x3a3c960()*-0.636826);
}

double NNfunction_ns_chi04_uL::synapse0x3a599c0() {
   return (neuron0x3a3cca0()*-0.407073);
}

double NNfunction_ns_chi04_uL::synapse0x3a59a00() {
   return (neuron0x3a3cfe0()*-0.310953);
}

double NNfunction_ns_chi04_uL::synapse0x3a59a40() {
   return (neuron0x3a3d320()*0.976028);
}

double NNfunction_ns_chi04_uL::synapse0x3a59a80() {
   return (neuron0x3a3d660()*0.788108);
}

double NNfunction_ns_chi04_uL::synapse0x3a59ac0() {
   return (neuron0x3a3d9a0()*0.188982);
}

double NNfunction_ns_chi04_uL::synapse0x3a59b00() {
   return (neuron0x3a3dce0()*-0.247037);
}

double NNfunction_ns_chi04_uL::synapse0x3a59b40() {
   return (neuron0x3a3e020()*-0.0337523);
}

double NNfunction_ns_chi04_uL::synapse0x3a59b80() {
   return (neuron0x3a3e360()*0.255968);
}

double NNfunction_ns_chi04_uL::synapse0x3a59bc0() {
   return (neuron0x3a3e6a0()*0.493006);
}

double NNfunction_ns_chi04_uL::synapse0x3a59c00() {
   return (neuron0x3a3e9e0()*-0.62472);
}

double NNfunction_ns_chi04_uL::synapse0x3a59c40() {
   return (neuron0x3a3ed20()*0.328169);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d550() {
   return (neuron0x3a3f060()*-0.0756256);
}

double NNfunction_ns_chi04_uL::synapse0x3a4d590() {
   return (neuron0x3a3f5c0()*-0.0709218);
}

double NNfunction_ns_chi04_uL::synapse0x3a59d90() {
   return (neuron0x3a3f900()*-0.38071);
}

double NNfunction_ns_chi04_uL::synapse0x3a59dd0() {
   return (neuron0x3a3fc40()*-0.0977037);
}

double NNfunction_ns_chi04_uL::synapse0x3a59e10() {
   return (neuron0x3a3ff80()*-0.0918733);
}

double NNfunction_ns_chi04_uL::synapse0x3a59e50() {
   return (neuron0x3a402c0()*-0.483153);
}

double NNfunction_ns_chi04_uL::synapse0x3a59e90() {
   return (neuron0x3a40600()*-0.157099);
}

double NNfunction_ns_chi04_uL::synapse0x3a59ed0() {
   return (neuron0x3a40940()*-0.201369);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a250() {
   return (neuron0x3a3bcf0()*-0.197123);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a290() {
   return (neuron0x3a3bfa0()*0.0316953);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a2d0() {
   return (neuron0x3a3c2e0()*0.681522);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a310() {
   return (neuron0x3a3c620()*0.556565);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a350() {
   return (neuron0x3a3c960()*-0.322606);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a390() {
   return (neuron0x3a3cca0()*0.138627);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a3d0() {
   return (neuron0x3a3cfe0()*-0.357229);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a410() {
   return (neuron0x3a3d320()*-0.15517);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a450() {
   return (neuron0x3a3d660()*-0.491922);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a490() {
   return (neuron0x3a3d9a0()*-0.305115);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a4d0() {
   return (neuron0x3a3dce0()*-0.163048);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a510() {
   return (neuron0x3a3e020()*1.7876);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a550() {
   return (neuron0x3a3e360()*0.0988513);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a590() {
   return (neuron0x3a3e6a0()*0.494015);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a5d0() {
   return (neuron0x3a3e9e0()*-0.226464);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a610() {
   return (neuron0x3a3ed20()*-0.114642);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a0a0() {
   return (neuron0x3a3f060()*0.0647152);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a0e0() {
   return (neuron0x3a3f5c0()*0.305089);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a760() {
   return (neuron0x3a3f900()*-0.182559);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a7a0() {
   return (neuron0x3a3fc40()*0.0154773);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a7e0() {
   return (neuron0x3a3ff80()*0.146573);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a820() {
   return (neuron0x3a402c0()*-0.0835953);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a860() {
   return (neuron0x3a40600()*-0.417298);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a8a0() {
   return (neuron0x3a40940()*-0.389702);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ac20() {
   return (neuron0x3a3bcf0()*-0.0602683);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ac60() {
   return (neuron0x3a3bfa0()*1.21058);
}

double NNfunction_ns_chi04_uL::synapse0x3a5aca0() {
   return (neuron0x3a3c2e0()*0.774661);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ace0() {
   return (neuron0x3a3c620()*0.0151574);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ad20() {
   return (neuron0x3a3c960()*-0.00134458);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ad60() {
   return (neuron0x3a3cca0()*-0.0268021);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ada0() {
   return (neuron0x3a3cfe0()*0.0231148);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ade0() {
   return (neuron0x3a3d320()*0.00985902);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ae20() {
   return (neuron0x3a3d660()*0.0252009);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ae60() {
   return (neuron0x3a3d9a0()*-0.00392074);
}

double NNfunction_ns_chi04_uL::synapse0x3a5aea0() {
   return (neuron0x3a3dce0()*0.0156254);
}

double NNfunction_ns_chi04_uL::synapse0x3a5aee0() {
   return (neuron0x3a3e020()*0.0796741);
}

double NNfunction_ns_chi04_uL::synapse0x3a5af20() {
   return (neuron0x3a3e360()*0.00359179);
}

double NNfunction_ns_chi04_uL::synapse0x3a5af60() {
   return (neuron0x3a3e6a0()*0.00949549);
}

double NNfunction_ns_chi04_uL::synapse0x3a5afa0() {
   return (neuron0x3a3e9e0()*0.0267217);
}

double NNfunction_ns_chi04_uL::synapse0x3a5afe0() {
   return (neuron0x3a3ed20()*-0.0157569);
}

double NNfunction_ns_chi04_uL::synapse0x3a5aa70() {
   return (neuron0x3a3f060()*-0.0111139);
}

double NNfunction_ns_chi04_uL::synapse0x3a5aab0() {
   return (neuron0x3a3f5c0()*-0.00142579);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b130() {
   return (neuron0x3a3f900()*0.0137169);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b170() {
   return (neuron0x3a3fc40()*0.0444112);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b1b0() {
   return (neuron0x3a3ff80()*-0.0280102);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b1f0() {
   return (neuron0x3a402c0()*0.0116041);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b230() {
   return (neuron0x3a40600()*-0.0464658);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b270() {
   return (neuron0x3a40940()*-0.215364);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b5f0() {
   return (neuron0x3a3bcf0()*-0.0384982);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b630() {
   return (neuron0x3a3bfa0()*0.860704);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b670() {
   return (neuron0x3a3c2e0()*-0.379394);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b6b0() {
   return (neuron0x3a3c620()*0.502818);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b6f0() {
   return (neuron0x3a3c960()*0.195056);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b730() {
   return (neuron0x3a3cca0()*-0.0407849);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b770() {
   return (neuron0x3a3cfe0()*0.340532);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b7b0() {
   return (neuron0x3a3d320()*-0.0223211);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b7f0() {
   return (neuron0x3a3d660()*0.593384);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b830() {
   return (neuron0x3a3d9a0()*-0.214628);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b870() {
   return (neuron0x3a3dce0()*0.317485);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b8b0() {
   return (neuron0x3a3e020()*-0.0692079);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b8f0() {
   return (neuron0x3a3e360()*-0.671114);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b930() {
   return (neuron0x3a3e6a0()*-0.130439);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b970() {
   return (neuron0x3a3e9e0()*-0.639157);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b9b0() {
   return (neuron0x3a3ed20()*-0.0186348);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b440() {
   return (neuron0x3a3f060()*0.0189901);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b480() {
   return (neuron0x3a3f5c0()*0.549045);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bb00() {
   return (neuron0x3a3f900()*0.214099);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bb40() {
   return (neuron0x3a3fc40()*0.381062);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bb80() {
   return (neuron0x3a3ff80()*0.646897);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bbc0() {
   return (neuron0x3a402c0()*-0.0234266);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bc00() {
   return (neuron0x3a40600()*0.605642);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bc40() {
   return (neuron0x3a40940()*-0.463132);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bfc0() {
   return (neuron0x3a3bcf0()*-0.0897262);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c000() {
   return (neuron0x3a3bfa0()*0.082392);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c040() {
   return (neuron0x3a3c2e0()*-2.25932);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c080() {
   return (neuron0x3a3c620()*-0.01609);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c0c0() {
   return (neuron0x3a3c960()*0.0333454);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c100() {
   return (neuron0x3a3cca0()*-0.0200591);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c140() {
   return (neuron0x3a3cfe0()*-0.0113608);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c180() {
   return (neuron0x3a3d320()*0.00466307);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c1c0() {
   return (neuron0x3a3d660()*0.00837721);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c200() {
   return (neuron0x3a3d9a0()*0.00128601);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c240() {
   return (neuron0x3a3dce0()*0.00970544);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c280() {
   return (neuron0x3a3e020()*0.424249);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c2c0() {
   return (neuron0x3a3e360()*-0.0339308);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c300() {
   return (neuron0x3a3e6a0()*0.0331018);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c340() {
   return (neuron0x3a3e9e0()*0.012501);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c380() {
   return (neuron0x3a3ed20()*0.00333645);
}

double NNfunction_ns_chi04_uL::synapse0x3a5be10() {
   return (neuron0x3a3f060()*-0.004729);
}

double NNfunction_ns_chi04_uL::synapse0x3a5be50() {
   return (neuron0x3a3f5c0()*0.0126395);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c4d0() {
   return (neuron0x3a3f900()*0.0305156);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c510() {
   return (neuron0x3a3fc40()*-0.00243263);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c550() {
   return (neuron0x3a3ff80()*-0.024406);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c590() {
   return (neuron0x3a402c0()*-0.00169268);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c5d0() {
   return (neuron0x3a40600()*0.0129365);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c610() {
   return (neuron0x3a40940()*-1.77013);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c990() {
   return (neuron0x3a3bcf0()*-0.0345114);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c9d0() {
   return (neuron0x3a3bfa0()*11.1256);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ca10() {
   return (neuron0x3a3c2e0()*-12.4752);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ca50() {
   return (neuron0x3a3c620()*0.004738);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ca90() {
   return (neuron0x3a3c960()*-0.070553);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cad0() {
   return (neuron0x3a3cca0()*-0.0292479);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cb10() {
   return (neuron0x3a3cfe0()*-0.0174884);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cb50() {
   return (neuron0x3a3d320()*-0.118332);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cb90() {
   return (neuron0x3a3d660()*0.060903);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cbd0() {
   return (neuron0x3a3d9a0()*-0.000613946);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cc10() {
   return (neuron0x3a3dce0()*0.0805644);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cc50() {
   return (neuron0x3a3e020()*-0.393604);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cc90() {
   return (neuron0x3a3e360()*-0.0982528);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ccd0() {
   return (neuron0x3a3e6a0()*-0.0366183);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cd10() {
   return (neuron0x3a3e9e0()*0.041545);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cd50() {
   return (neuron0x3a3ed20()*0.020592);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c7e0() {
   return (neuron0x3a3f060()*0.0419483);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c820() {
   return (neuron0x3a3f5c0()*-0.010796);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cea0() {
   return (neuron0x3a3f900()*-0.0048688);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cee0() {
   return (neuron0x3a3fc40()*0.0299022);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cf20() {
   return (neuron0x3a3ff80()*0.0487628);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cf60() {
   return (neuron0x3a402c0()*-0.0293074);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cfa0() {
   return (neuron0x3a40600()*0.0297562);
}

double NNfunction_ns_chi04_uL::synapse0x3a5cfe0() {
   return (neuron0x3a40940()*0.205544);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d360() {
   return (neuron0x3a3bcf0()*-0.0967844);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d3a0() {
   return (neuron0x3a3bfa0()*0.29297);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d3e0() {
   return (neuron0x3a3c2e0()*0.106933);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d420() {
   return (neuron0x3a3c620()*0.262601);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d460() {
   return (neuron0x3a3c960()*0.00296705);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d4a0() {
   return (neuron0x3a3cca0()*-0.00984675);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d4e0() {
   return (neuron0x3a3cfe0()*0.0214524);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d520() {
   return (neuron0x3a3d320()*-0.0546385);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d560() {
   return (neuron0x3a3d660()*-0.00535523);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d5a0() {
   return (neuron0x3a3d9a0()*-0.00537193);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d5e0() {
   return (neuron0x3a3dce0()*-0.0113937);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d620() {
   return (neuron0x3a3e020()*1.61397);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d660() {
   return (neuron0x3a3e360()*-0.00755665);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d6a0() {
   return (neuron0x3a3e6a0()*0.0340927);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d6e0() {
   return (neuron0x3a3e9e0()*0.00583648);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d720() {
   return (neuron0x3a3ed20()*0.0205553);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d1b0() {
   return (neuron0x3a3f060()*-0.0027533);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d1f0() {
   return (neuron0x3a3f5c0()*0.0257924);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d870() {
   return (neuron0x3a3f900()*0.00421127);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d8b0() {
   return (neuron0x3a3fc40()*0.00649148);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d8f0() {
   return (neuron0x3a3ff80()*0.0505692);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d930() {
   return (neuron0x3a402c0()*0.0282085);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d970() {
   return (neuron0x3a40600()*-0.0462293);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d9b0() {
   return (neuron0x3a40940()*-0.0327634);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dd30() {
   return (neuron0x3a3bcf0()*-0.0213521);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dd70() {
   return (neuron0x3a3bfa0()*0.389656);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ddb0() {
   return (neuron0x3a3c2e0()*-4.73388);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ddf0() {
   return (neuron0x3a3c620()*0.0278397);
}

double NNfunction_ns_chi04_uL::synapse0x3a5de30() {
   return (neuron0x3a3c960()*-0.00835186);
}

double NNfunction_ns_chi04_uL::synapse0x3a5de70() {
   return (neuron0x3a3cca0()*0.0275699);
}

double NNfunction_ns_chi04_uL::synapse0x3a5deb0() {
   return (neuron0x3a3cfe0()*-0.0152128);
}

double NNfunction_ns_chi04_uL::synapse0x3a5def0() {
   return (neuron0x3a3d320()*-0.0110486);
}

double NNfunction_ns_chi04_uL::synapse0x3a5df30() {
   return (neuron0x3a3d660()*-0.0191185);
}

double NNfunction_ns_chi04_uL::synapse0x3a5df70() {
   return (neuron0x3a3d9a0()*-0.0111776);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dfb0() {
   return (neuron0x3a3dce0()*-0.0212532);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dff0() {
   return (neuron0x3a3e020()*0.196947);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e030() {
   return (neuron0x3a3e360()*-0.021493);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e070() {
   return (neuron0x3a3e6a0()*-0.0096448);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e0b0() {
   return (neuron0x3a3e9e0()*-0.0174065);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e0f0() {
   return (neuron0x3a3ed20()*-0.000547761);
}

double NNfunction_ns_chi04_uL::synapse0x3a5db80() {
   return (neuron0x3a3f060()*-0.0361283);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dbc0() {
   return (neuron0x3a3f5c0()*0.00170441);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e240() {
   return (neuron0x3a3f900()*-0.0205772);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e280() {
   return (neuron0x3a3fc40()*-0.0206792);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e2c0() {
   return (neuron0x3a3ff80()*-0.00038527);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e300() {
   return (neuron0x3a402c0()*-0.00135402);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e340() {
   return (neuron0x3a40600()*0.0162314);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e380() {
   return (neuron0x3a40940()*3.03973);
}

double NNfunction_ns_chi04_uL::synapse0x3a46e30() {
   return (neuron0x3a3bcf0()*-0.0217093);
}

double NNfunction_ns_chi04_uL::synapse0x3a46e70() {
   return (neuron0x3a3bfa0()*10.1402);
}

double NNfunction_ns_chi04_uL::synapse0x3a46eb0() {
   return (neuron0x3a3c2e0()*11.1183);
}

double NNfunction_ns_chi04_uL::synapse0x3a46ef0() {
   return (neuron0x3a3c620()*-0.0423822);
}

double NNfunction_ns_chi04_uL::synapse0x3a46f30() {
   return (neuron0x3a3c960()*0.0638795);
}

double NNfunction_ns_chi04_uL::synapse0x3a46f70() {
   return (neuron0x3a3cca0()*0.0406024);
}

double NNfunction_ns_chi04_uL::synapse0x3a46fb0() {
   return (neuron0x3a3cfe0()*0.043216);
}

double NNfunction_ns_chi04_uL::synapse0x3a46ff0() {
   return (neuron0x3a3d320()*-0.0839696);
}

double NNfunction_ns_chi04_uL::synapse0x3a5eb10() {
   return (neuron0x3a3d660()*-0.0325775);
}

double NNfunction_ns_chi04_uL::synapse0x3a5eb50() {
   return (neuron0x3a3d9a0()*-0.0722888);
}

double NNfunction_ns_chi04_uL::synapse0x3a5eb90() {
   return (neuron0x3a3dce0()*0.0300847);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ebd0() {
   return (neuron0x3a3e020()*0.140505);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ec10() {
   return (neuron0x3a3e360()*-0.0039384);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ec50() {
   return (neuron0x3a3e6a0()*0.0349535);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ec90() {
   return (neuron0x3a3e9e0()*0.0010863);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ecd0() {
   return (neuron0x3a3ed20()*-0.0138022);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e550() {
   return (neuron0x3a3f060()*-0.0151897);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e590() {
   return (neuron0x3a3f5c0()*-0.0209307);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ee20() {
   return (neuron0x3a3f900()*-0.0264602);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ee60() {
   return (neuron0x3a3fc40()*0.00962605);
}

double NNfunction_ns_chi04_uL::synapse0x3a5eea0() {
   return (neuron0x3a3ff80()*-0.0344414);
}

double NNfunction_ns_chi04_uL::synapse0x3a5eee0() {
   return (neuron0x3a402c0()*-0.0233135);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ef20() {
   return (neuron0x3a40600()*-0.0194295);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ef60() {
   return (neuron0x3a40940()*0.0246471);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f2e0() {
   return (neuron0x3a3bcf0()*-0.539746);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f320() {
   return (neuron0x3a3bfa0()*1.08199);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f360() {
   return (neuron0x3a3c2e0()*0.114378);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f3a0() {
   return (neuron0x3a3c620()*0.281069);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f3e0() {
   return (neuron0x3a3c960()*0.683735);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f420() {
   return (neuron0x3a3cca0()*0.426661);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f460() {
   return (neuron0x3a3cfe0()*0.413881);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f4a0() {
   return (neuron0x3a3d320()*-0.178981);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f4e0() {
   return (neuron0x3a3d660()*-0.248969);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f520() {
   return (neuron0x3a3d9a0()*-0.105016);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f560() {
   return (neuron0x3a3dce0()*0.0204375);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f5a0() {
   return (neuron0x3a3e020()*-0.773558);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f5e0() {
   return (neuron0x3a3e360()*0.0531132);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f620() {
   return (neuron0x3a3e6a0()*0.0877656);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f660() {
   return (neuron0x3a3e9e0()*-0.432817);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f6a0() {
   return (neuron0x3a3ed20()*-0.890811);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f130() {
   return (neuron0x3a3f060()*-0.104521);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f170() {
   return (neuron0x3a3f5c0()*0.436463);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f7f0() {
   return (neuron0x3a3f900()*-0.36719);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f830() {
   return (neuron0x3a3fc40()*0.293119);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f870() {
   return (neuron0x3a3ff80()*-0.0492532);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f8b0() {
   return (neuron0x3a402c0()*0.248412);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f8f0() {
   return (neuron0x3a40600()*0.329391);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f930() {
   return (neuron0x3a40940()*0.0380476);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fcb0() {
   return (neuron0x3a3bcf0()*-8.4858e-05);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fcf0() {
   return (neuron0x3a3bfa0()*-0.0959366);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fd30() {
   return (neuron0x3a3c2e0()*-1.90745);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fd70() {
   return (neuron0x3a3c620()*-0.051655);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fdb0() {
   return (neuron0x3a3c960()*-0.0115434);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fdf0() {
   return (neuron0x3a3cca0()*-0.0296881);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fe30() {
   return (neuron0x3a3cfe0()*-0.00849617);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fe70() {
   return (neuron0x3a3d320()*-0.00611975);
}

double NNfunction_ns_chi04_uL::synapse0x3a5feb0() {
   return (neuron0x3a3d660()*-0.00441509);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fef0() {
   return (neuron0x3a3d9a0()*0.00713735);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ff30() {
   return (neuron0x3a3dce0()*-0.0137899);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ff70() {
   return (neuron0x3a3e020()*-1.02216);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ffb0() {
   return (neuron0x3a3e360()*-0.030584);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fff0() {
   return (neuron0x3a3e6a0()*-0.00259046);
}

double NNfunction_ns_chi04_uL::synapse0x3a60030() {
   return (neuron0x3a3e9e0()*0.0417594);
}

double NNfunction_ns_chi04_uL::synapse0x3a60070() {
   return (neuron0x3a3ed20()*-0.00683295);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fb00() {
   return (neuron0x3a3f060()*-0.000948772);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fb40() {
   return (neuron0x3a3f5c0()*0.0154171);
}

double NNfunction_ns_chi04_uL::synapse0x3a50670() {
   return (neuron0x3a3f900()*-0.0203308);
}

double NNfunction_ns_chi04_uL::synapse0x3a506b0() {
   return (neuron0x3a3fc40()*0.0121105);
}

double NNfunction_ns_chi04_uL::synapse0x3a506f0() {
   return (neuron0x3a3ff80()*0.0224927);
}

double NNfunction_ns_chi04_uL::synapse0x3a50730() {
   return (neuron0x3a402c0()*0.00761479);
}

double NNfunction_ns_chi04_uL::synapse0x3a50770() {
   return (neuron0x3a40600()*-0.0237139);
}

double NNfunction_ns_chi04_uL::synapse0x3a507b0() {
   return (neuron0x3a40940()*-0.224986);
}

double NNfunction_ns_chi04_uL::synapse0x3a50b30() {
   return (neuron0x3a3bcf0()*-0.636574);
}

double NNfunction_ns_chi04_uL::synapse0x3a50b70() {
   return (neuron0x3a3bfa0()*-0.290892);
}

double NNfunction_ns_chi04_uL::synapse0x3a50bb0() {
   return (neuron0x3a3c2e0()*0.397442);
}

double NNfunction_ns_chi04_uL::synapse0x3a50bf0() {
   return (neuron0x3a3c620()*-0.0755156);
}

double NNfunction_ns_chi04_uL::synapse0x3a50c30() {
   return (neuron0x3a3c960()*-0.307579);
}

double NNfunction_ns_chi04_uL::synapse0x3a50c70() {
   return (neuron0x3a3cca0()*-0.457361);
}

double NNfunction_ns_chi04_uL::synapse0x3a50cb0() {
   return (neuron0x3a3cfe0()*-0.533648);
}

double NNfunction_ns_chi04_uL::synapse0x3a50cf0() {
   return (neuron0x3a3d320()*-1.05705);
}

double NNfunction_ns_chi04_uL::synapse0x3a50d30() {
   return (neuron0x3a3d660()*-0.395123);
}

double NNfunction_ns_chi04_uL::synapse0x3a50d70() {
   return (neuron0x3a3d9a0()*0.40969);
}

double NNfunction_ns_chi04_uL::synapse0x3a50db0() {
   return (neuron0x3a3dce0()*-0.168682);
}

double NNfunction_ns_chi04_uL::synapse0x3a50df0() {
   return (neuron0x3a3e020()*0.378557);
}

double NNfunction_ns_chi04_uL::synapse0x3a50e30() {
   return (neuron0x3a3e360()*0.691054);
}

double NNfunction_ns_chi04_uL::synapse0x3a50e70() {
   return (neuron0x3a3e6a0()*0.580257);
}

double NNfunction_ns_chi04_uL::synapse0x3a50eb0() {
   return (neuron0x3a3e9e0()*0.810613);
}

double NNfunction_ns_chi04_uL::synapse0x3a50ef0() {
   return (neuron0x3a3ed20()*-0.421572);
}

double NNfunction_ns_chi04_uL::synapse0x3a50980() {
   return (neuron0x3a3f060()*-0.423292);
}

double NNfunction_ns_chi04_uL::synapse0x3a509c0() {
   return (neuron0x3a3f5c0()*0.0308721);
}

double NNfunction_ns_chi04_uL::synapse0x3a51040() {
   return (neuron0x3a3f900()*0.0409837);
}

double NNfunction_ns_chi04_uL::synapse0x3a51080() {
   return (neuron0x3a3fc40()*0.139956);
}

double NNfunction_ns_chi04_uL::synapse0x3a510c0() {
   return (neuron0x3a3ff80()*0.312769);
}

double NNfunction_ns_chi04_uL::synapse0x3a51100() {
   return (neuron0x3a402c0()*-0.0728921);
}

double NNfunction_ns_chi04_uL::synapse0x3a51140() {
   return (neuron0x3a40600()*0.1187);
}

double NNfunction_ns_chi04_uL::synapse0x3a51180() {
   return (neuron0x3a40940()*-0.294027);
}

double NNfunction_ns_chi04_uL::synapse0x3a51500() {
   return (neuron0x3a3bcf0()*-0.601392);
}

double NNfunction_ns_chi04_uL::synapse0x3a51540() {
   return (neuron0x3a3bfa0()*0.168466);
}

double NNfunction_ns_chi04_uL::synapse0x3a51580() {
   return (neuron0x3a3c2e0()*-0.519704);
}

double NNfunction_ns_chi04_uL::synapse0x3a515c0() {
   return (neuron0x3a3c620()*-0.291062);
}

double NNfunction_ns_chi04_uL::synapse0x3a51600() {
   return (neuron0x3a3c960()*0.284498);
}

double NNfunction_ns_chi04_uL::synapse0x3a51640() {
   return (neuron0x3a3cca0()*-0.145217);
}

double NNfunction_ns_chi04_uL::synapse0x3a51680() {
   return (neuron0x3a3cfe0()*-0.421104);
}

double NNfunction_ns_chi04_uL::synapse0x3a516c0() {
   return (neuron0x3a3d320()*0.373381);
}

double NNfunction_ns_chi04_uL::synapse0x3a51700() {
   return (neuron0x3a3d660()*0.228059);
}

double NNfunction_ns_chi04_uL::synapse0x3a51740() {
   return (neuron0x3a3d9a0()*0.485749);
}

double NNfunction_ns_chi04_uL::synapse0x3a51780() {
   return (neuron0x3a3dce0()*-0.30278);
}

double NNfunction_ns_chi04_uL::synapse0x3a517c0() {
   return (neuron0x3a3e020()*-0.0153889);
}

double NNfunction_ns_chi04_uL::synapse0x3a51800() {
   return (neuron0x3a3e360()*0.342685);
}

double NNfunction_ns_chi04_uL::synapse0x3a51840() {
   return (neuron0x3a3e6a0()*-0.194351);
}

double NNfunction_ns_chi04_uL::synapse0x3a51880() {
   return (neuron0x3a3e9e0()*0.0164608);
}

double NNfunction_ns_chi04_uL::synapse0x3a518c0() {
   return (neuron0x3a3ed20()*-0.0250677);
}

double NNfunction_ns_chi04_uL::synapse0x3a51350() {
   return (neuron0x3a3f060()*1.00388);
}

double NNfunction_ns_chi04_uL::synapse0x3a51390() {
   return (neuron0x3a3f5c0()*0.268461);
}

double NNfunction_ns_chi04_uL::synapse0x3a51a10() {
   return (neuron0x3a3f900()*-0.307125);
}

double NNfunction_ns_chi04_uL::synapse0x3a51a50() {
   return (neuron0x3a3fc40()*0.350767);
}

double NNfunction_ns_chi04_uL::synapse0x3a51a90() {
   return (neuron0x3a3ff80()*0.388718);
}

double NNfunction_ns_chi04_uL::synapse0x3a51ad0() {
   return (neuron0x3a402c0()*0.244161);
}

double NNfunction_ns_chi04_uL::synapse0x3a51b10() {
   return (neuron0x3a40600()*0.124058);
}

double NNfunction_ns_chi04_uL::synapse0x3a51b50() {
   return (neuron0x3a40940()*-0.349785);
}

double NNfunction_ns_chi04_uL::synapse0x3a51ed0() {
   return (neuron0x3a3bcf0()*0.0270562);
}

double NNfunction_ns_chi04_uL::synapse0x3a51f10() {
   return (neuron0x3a3bfa0()*-0.00344064);
}

double NNfunction_ns_chi04_uL::synapse0x3a51f50() {
   return (neuron0x3a3c2e0()*0.0353479);
}

double NNfunction_ns_chi04_uL::synapse0x3a51f90() {
   return (neuron0x3a3c620()*0.859657);
}

double NNfunction_ns_chi04_uL::synapse0x3a51fd0() {
   return (neuron0x3a3c960()*-0.00224531);
}

double NNfunction_ns_chi04_uL::synapse0x3a52010() {
   return (neuron0x3a3cca0()*0.00313231);
}

double NNfunction_ns_chi04_uL::synapse0x3a52050() {
   return (neuron0x3a3cfe0()*0.00409659);
}

double NNfunction_ns_chi04_uL::synapse0x3a52090() {
   return (neuron0x3a3d320()*-0.00452111);
}

double NNfunction_ns_chi04_uL::synapse0x3a520d0() {
   return (neuron0x3a3d660()*-0.0116681);
}

double NNfunction_ns_chi04_uL::synapse0x3a52110() {
   return (neuron0x3a3d9a0()*-0.00196516);
}

double NNfunction_ns_chi04_uL::synapse0x3a52150() {
   return (neuron0x3a3dce0()*-0.00314623);
}

double NNfunction_ns_chi04_uL::synapse0x3a52190() {
   return (neuron0x3a3e020()*0.507992);
}

double NNfunction_ns_chi04_uL::synapse0x3a521d0() {
   return (neuron0x3a3e360()*0.0103041);
}

double NNfunction_ns_chi04_uL::synapse0x3a52210() {
   return (neuron0x3a3e6a0()*0.0080274);
}

double NNfunction_ns_chi04_uL::synapse0x3a52250() {
   return (neuron0x3a3e9e0()*0.00320425);
}

double NNfunction_ns_chi04_uL::synapse0x3a52290() {
   return (neuron0x3a3ed20()*0.0118331);
}

double NNfunction_ns_chi04_uL::synapse0x3a51d20() {
   return (neuron0x3a3f060()*0.0115237);
}

double NNfunction_ns_chi04_uL::synapse0x3a51d60() {
   return (neuron0x3a3f5c0()*-0.0155977);
}

double NNfunction_ns_chi04_uL::synapse0x3a523e0() {
   return (neuron0x3a3f900()*0.00684708);
}

double NNfunction_ns_chi04_uL::synapse0x3a52420() {
   return (neuron0x3a3fc40()*-0.0100785);
}

double NNfunction_ns_chi04_uL::synapse0x3a52460() {
   return (neuron0x3a3ff80()*0.00194502);
}

double NNfunction_ns_chi04_uL::synapse0x3a524a0() {
   return (neuron0x3a402c0()*0.0055455);
}

double NNfunction_ns_chi04_uL::synapse0x3a524e0() {
   return (neuron0x3a40600()*-0.00187303);
}

double NNfunction_ns_chi04_uL::synapse0x3a52520() {
   return (neuron0x3a40940()*-0.0107856);
}

double NNfunction_ns_chi04_uL::synapse0x3a643f0() {
   return (neuron0x3a3bcf0()*0.461491);
}

double NNfunction_ns_chi04_uL::synapse0x3a64430() {
   return (neuron0x3a3bfa0()*0.422454);
}

double NNfunction_ns_chi04_uL::synapse0x3a64470() {
   return (neuron0x3a3c2e0()*-1.00117);
}

double NNfunction_ns_chi04_uL::synapse0x3a644b0() {
   return (neuron0x3a3c620()*0.571591);
}

double NNfunction_ns_chi04_uL::synapse0x3a644f0() {
   return (neuron0x3a3c960()*0.448031);
}

double NNfunction_ns_chi04_uL::synapse0x3a64530() {
   return (neuron0x3a3cca0()*0.28832);
}

double NNfunction_ns_chi04_uL::synapse0x3a64570() {
   return (neuron0x3a3cfe0()*0.324509);
}

double NNfunction_ns_chi04_uL::synapse0x3a645b0() {
   return (neuron0x3a3d320()*0.450145);
}

double NNfunction_ns_chi04_uL::synapse0x3a645f0() {
   return (neuron0x3a3d660()*1.00914);
}

double NNfunction_ns_chi04_uL::synapse0x3a64630() {
   return (neuron0x3a3d9a0()*0.416718);
}

double NNfunction_ns_chi04_uL::synapse0x3a64670() {
   return (neuron0x3a3dce0()*0.698558);
}

double NNfunction_ns_chi04_uL::synapse0x3a646b0() {
   return (neuron0x3a3e020()*-1.00406);
}

double NNfunction_ns_chi04_uL::synapse0x3a646f0() {
   return (neuron0x3a3e360()*-0.414315);
}

double NNfunction_ns_chi04_uL::synapse0x3a64730() {
   return (neuron0x3a3e6a0()*0.138641);
}

double NNfunction_ns_chi04_uL::synapse0x3a64770() {
   return (neuron0x3a3e9e0()*0.430197);
}

double NNfunction_ns_chi04_uL::synapse0x3a647b0() {
   return (neuron0x3a3ed20()*-0.200902);
}

double NNfunction_ns_chi04_uL::synapse0x3a52560() {
   return (neuron0x3a3f060()*0.452964);
}

double NNfunction_ns_chi04_uL::synapse0x3a525a0() {
   return (neuron0x3a3f5c0()*0.342863);
}

double NNfunction_ns_chi04_uL::synapse0x3a64900() {
   return (neuron0x3a3f900()*-0.270949);
}

double NNfunction_ns_chi04_uL::synapse0x3a64940() {
   return (neuron0x3a3fc40()*0.228589);
}

double NNfunction_ns_chi04_uL::synapse0x3a64980() {
   return (neuron0x3a3ff80()*0.604289);
}

double NNfunction_ns_chi04_uL::synapse0x3a649c0() {
   return (neuron0x3a402c0()*-0.369091);
}

double NNfunction_ns_chi04_uL::synapse0x3a64a00() {
   return (neuron0x3a40600()*1.21815);
}

double NNfunction_ns_chi04_uL::synapse0x3a64a40() {
   return (neuron0x3a40940()*-0.0451569);
}

double NNfunction_ns_chi04_uL::synapse0x3a64dc0() {
   return (neuron0x3a3bcf0()*0.613039);
}

double NNfunction_ns_chi04_uL::synapse0x3a64e00() {
   return (neuron0x3a3bfa0()*0.230143);
}

double NNfunction_ns_chi04_uL::synapse0x3a64e40() {
   return (neuron0x3a3c2e0()*-0.240786);
}

double NNfunction_ns_chi04_uL::synapse0x3a64e80() {
   return (neuron0x3a3c620()*0.220679);
}

double NNfunction_ns_chi04_uL::synapse0x3a64ec0() {
   return (neuron0x3a3c960()*0.135013);
}

double NNfunction_ns_chi04_uL::synapse0x3a64f00() {
   return (neuron0x3a3cca0()*0.892523);
}

double NNfunction_ns_chi04_uL::synapse0x3a64f40() {
   return (neuron0x3a3cfe0()*0.0126664);
}

double NNfunction_ns_chi04_uL::synapse0x3a64f80() {
   return (neuron0x3a3d320()*-0.310957);
}

double NNfunction_ns_chi04_uL::synapse0x3a64fc0() {
   return (neuron0x3a3d660()*-0.15934);
}

double NNfunction_ns_chi04_uL::synapse0x3a65000() {
   return (neuron0x3a3d9a0()*0.692516);
}

double NNfunction_ns_chi04_uL::synapse0x3a65040() {
   return (neuron0x3a3dce0()*0.802554);
}

double NNfunction_ns_chi04_uL::synapse0x3a65080() {
   return (neuron0x3a3e020()*0.328547);
}

double NNfunction_ns_chi04_uL::synapse0x3a650c0() {
   return (neuron0x3a3e360()*0.353599);
}

double NNfunction_ns_chi04_uL::synapse0x3a65100() {
   return (neuron0x3a3e6a0()*1.29601);
}

double NNfunction_ns_chi04_uL::synapse0x3a65140() {
   return (neuron0x3a3e9e0()*0.290584);
}

double NNfunction_ns_chi04_uL::synapse0x3a65180() {
   return (neuron0x3a3ed20()*0.270495);
}

double NNfunction_ns_chi04_uL::synapse0x3a64c10() {
   return (neuron0x3a3f060()*0.247982);
}

double NNfunction_ns_chi04_uL::synapse0x3a64c50() {
   return (neuron0x3a3f5c0()*-0.0622747);
}

double NNfunction_ns_chi04_uL::synapse0x3a652d0() {
   return (neuron0x3a3f900()*-0.538476);
}

double NNfunction_ns_chi04_uL::synapse0x3a65310() {
   return (neuron0x3a3fc40()*0.745575);
}

double NNfunction_ns_chi04_uL::synapse0x3a65350() {
   return (neuron0x3a3ff80()*0.0919636);
}

double NNfunction_ns_chi04_uL::synapse0x3a65390() {
   return (neuron0x3a402c0()*-0.270066);
}

double NNfunction_ns_chi04_uL::synapse0x3a653d0() {
   return (neuron0x3a40600()*0.666683);
}

double NNfunction_ns_chi04_uL::synapse0x3a65410() {
   return (neuron0x3a40940()*-0.0447508);
}

double NNfunction_ns_chi04_uL::synapse0x3a65790() {
   return (neuron0x3a3bcf0()*0.130176);
}

double NNfunction_ns_chi04_uL::synapse0x3a657d0() {
   return (neuron0x3a3bfa0()*-0.476027);
}

double NNfunction_ns_chi04_uL::synapse0x3a65810() {
   return (neuron0x3a3c2e0()*-1.16869);
}

double NNfunction_ns_chi04_uL::synapse0x3a65850() {
   return (neuron0x3a3c620()*0.199833);
}

double NNfunction_ns_chi04_uL::synapse0x3a65890() {
   return (neuron0x3a3c960()*0.253409);
}

double NNfunction_ns_chi04_uL::synapse0x3a658d0() {
   return (neuron0x3a3cca0()*-0.351215);
}

double NNfunction_ns_chi04_uL::synapse0x3a65910() {
   return (neuron0x3a3cfe0()*-0.624587);
}

double NNfunction_ns_chi04_uL::synapse0x3a65950() {
   return (neuron0x3a3d320()*-0.0679433);
}

double NNfunction_ns_chi04_uL::synapse0x3a65990() {
   return (neuron0x3a3d660()*-0.192413);
}

double NNfunction_ns_chi04_uL::synapse0x3a659d0() {
   return (neuron0x3a3d9a0()*-0.0066543);
}

double NNfunction_ns_chi04_uL::synapse0x3a65a10() {
   return (neuron0x3a3dce0()*-0.194507);
}

double NNfunction_ns_chi04_uL::synapse0x3a65a50() {
   return (neuron0x3a3e020()*-0.326671);
}

double NNfunction_ns_chi04_uL::synapse0x3a65a90() {
   return (neuron0x3a3e360()*0.379546);
}

double NNfunction_ns_chi04_uL::synapse0x3a65ad0() {
   return (neuron0x3a3e6a0()*-1.10556);
}

double NNfunction_ns_chi04_uL::synapse0x3a65b10() {
   return (neuron0x3a3e9e0()*0.0816969);
}

double NNfunction_ns_chi04_uL::synapse0x3a65b50() {
   return (neuron0x3a3ed20()*-0.00903071);
}

double NNfunction_ns_chi04_uL::synapse0x3a655e0() {
   return (neuron0x3a3f060()*0.0298598);
}

double NNfunction_ns_chi04_uL::synapse0x3a65620() {
   return (neuron0x3a3f5c0()*-0.243748);
}

double NNfunction_ns_chi04_uL::synapse0x3a65ca0() {
   return (neuron0x3a3f900()*0.000368337);
}

double NNfunction_ns_chi04_uL::synapse0x3a65ce0() {
   return (neuron0x3a3fc40()*0.211992);
}

double NNfunction_ns_chi04_uL::synapse0x3a65d20() {
   return (neuron0x3a3ff80()*-0.0489045);
}

double NNfunction_ns_chi04_uL::synapse0x3a65d60() {
   return (neuron0x3a402c0()*0.183076);
}

double NNfunction_ns_chi04_uL::synapse0x3a65da0() {
   return (neuron0x3a40600()*-0.268321);
}

double NNfunction_ns_chi04_uL::synapse0x3a65de0() {
   return (neuron0x3a40940()*0.582418);
}

double NNfunction_ns_chi04_uL::synapse0x3a66160() {
   return (neuron0x3a3bcf0()*0.0638645);
}

double NNfunction_ns_chi04_uL::synapse0x3a661a0() {
   return (neuron0x3a3bfa0()*1.11665);
}

double NNfunction_ns_chi04_uL::synapse0x3a661e0() {
   return (neuron0x3a3c2e0()*1.75936);
}

double NNfunction_ns_chi04_uL::synapse0x3a66220() {
   return (neuron0x3a3c620()*0.385895);
}

double NNfunction_ns_chi04_uL::synapse0x3a66260() {
   return (neuron0x3a3c960()*-0.00469133);
}

double NNfunction_ns_chi04_uL::synapse0x3a662a0() {
   return (neuron0x3a3cca0()*0.0214957);
}

double NNfunction_ns_chi04_uL::synapse0x3a662e0() {
   return (neuron0x3a3cfe0()*-0.0308689);
}

double NNfunction_ns_chi04_uL::synapse0x3a66320() {
   return (neuron0x3a3d320()*0.0381959);
}

double NNfunction_ns_chi04_uL::synapse0x3a66360() {
   return (neuron0x3a3d660()*-0.042461);
}

double NNfunction_ns_chi04_uL::synapse0x3a663a0() {
   return (neuron0x3a3d9a0()*-0.0479464);
}

double NNfunction_ns_chi04_uL::synapse0x3a663e0() {
   return (neuron0x3a3dce0()*0.0500252);
}

double NNfunction_ns_chi04_uL::synapse0x3a66420() {
   return (neuron0x3a3e020()*-0.163878);
}

double NNfunction_ns_chi04_uL::synapse0x3a66460() {
   return (neuron0x3a3e360()*0.0554826);
}

double NNfunction_ns_chi04_uL::synapse0x3a664a0() {
   return (neuron0x3a3e6a0()*0.0411882);
}

double NNfunction_ns_chi04_uL::synapse0x3a664e0() {
   return (neuron0x3a3e9e0()*-0.0122271);
}

double NNfunction_ns_chi04_uL::synapse0x3a66520() {
   return (neuron0x3a3ed20()*-0.0174547);
}

double NNfunction_ns_chi04_uL::synapse0x3a65fb0() {
   return (neuron0x3a3f060()*-0.0476429);
}

double NNfunction_ns_chi04_uL::synapse0x3a65ff0() {
   return (neuron0x3a3f5c0()*-0.065342);
}

double NNfunction_ns_chi04_uL::synapse0x3a66670() {
   return (neuron0x3a3f900()*-0.0410141);
}

double NNfunction_ns_chi04_uL::synapse0x3a666b0() {
   return (neuron0x3a3fc40()*-0.0973127);
}

double NNfunction_ns_chi04_uL::synapse0x3a666f0() {
   return (neuron0x3a3ff80()*-0.118955);
}

double NNfunction_ns_chi04_uL::synapse0x3a66730() {
   return (neuron0x3a402c0()*-0.00217184);
}

double NNfunction_ns_chi04_uL::synapse0x3a66770() {
   return (neuron0x3a40600()*0.0160253);
}

double NNfunction_ns_chi04_uL::synapse0x3a667b0() {
   return (neuron0x3a40940()*0.156735);
}

double NNfunction_ns_chi04_uL::synapse0x3806620() {
   return (neuron0x3a40db0()*-0.000287978);
}

double NNfunction_ns_chi04_uL::synapse0x3806660() {
   return (neuron0x3a415f0()*0.573308);
}

double NNfunction_ns_chi04_uL::synapse0x3a43160() {
   return (neuron0x3a420d0()*-3.28518);
}

double NNfunction_ns_chi04_uL::synapse0x3a431a0() {
   return (neuron0x3a41b70()*1.95724);
}

double NNfunction_ns_chi04_uL::synapse0x3a44c30() {
   return (neuron0x3a42eb0()*0.959184);
}

double NNfunction_ns_chi04_uL::synapse0x3a44c70() {
   return (neuron0x3a44980()*-0.30903);
}

double NNfunction_ns_chi04_uL::synapse0x3a45a00() {
   return (neuron0x3a45750()*0.0384052);
}

double NNfunction_ns_chi04_uL::synapse0x3a45a40() {
   return (neuron0x3a46120()*-0.303495);
}

double NNfunction_ns_chi04_uL::synapse0x3a463d0() {
   return (neuron0x3a46af0()*0.0846792);
}

double NNfunction_ns_chi04_uL::synapse0x3a46410() {
   return (neuron0x3a475d0()*0.071078);
}

double NNfunction_ns_chi04_uL::synapse0x3a46da0() {
   return (neuron0x3a47fa0()*0.0638231);
}

double NNfunction_ns_chi04_uL::synapse0x3a46de0() {
   return (neuron0x3a45080()*-0.0470387);
}

double NNfunction_ns_chi04_uL::synapse0x3a47880() {
   return (neuron0x3a49b50()*-4.61484);
}

double NNfunction_ns_chi04_uL::synapse0x3a478c0() {
   return (neuron0x3a4a520()*-0.818407);
}

double NNfunction_ns_chi04_uL::synapse0x3a48250() {
   return (neuron0x3a4aef0()*0.0472715);
}

double NNfunction_ns_chi04_uL::synapse0x3a48290() {
   return (neuron0x3a4b8c0()*0.25849);
}

double NNfunction_ns_chi04_uL::synapse0x3a45330() {
   return (neuron0x3a4d6d0()*0.134979);
}

double NNfunction_ns_chi04_uL::synapse0x3a45370() {
   return (neuron0x3a4d9b0()*0.237773);
}

double NNfunction_ns_chi04_uL::synapse0x3a49e00() {
   return (neuron0x3a4e380()*0.0225172);
}

double NNfunction_ns_chi04_uL::synapse0x3a49e40() {
   return (neuron0x3a4ed50()*0.169203);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a7d0() {
   return (neuron0x3a4f720()*12.1763);
}

double NNfunction_ns_chi04_uL::synapse0x3a4a810() {
   return (neuron0x3a500f0()*0.0992104);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b1a0() {
   return (neuron0x3a48c40()*-0.031192);
}

double NNfunction_ns_chi04_uL::synapse0x3a4b1e0() {
   return (neuron0x3a49610()*-0.0779475);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bb70() {
   return (neuron0x3a52e80()*0.077128);
}

double NNfunction_ns_chi04_uL::synapse0x3a4bbb0() {
   return (neuron0x3a53850()*-0.765415);
}

double NNfunction_ns_chi04_uL::synapse0x3a3ec00() {
   return (neuron0x3a54220()*-0.0471373);
}

double NNfunction_ns_chi04_uL::synapse0x3a3ec40() {
   return (neuron0x3a54bf0()*-0.0731298);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dc60() {
   return (neuron0x3a555c0()*-1.22583);
}

double NNfunction_ns_chi04_uL::synapse0x3a4dca0() {
   return (neuron0x3a55f90()*-1.94993);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e630() {
   return (neuron0x3a56960()*-0.0376725);
}

double NNfunction_ns_chi04_uL::synapse0x3a4e670() {
   return (neuron0x3a57330()*0.112248);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f000() {
   return (neuron0x3a4d3c0()*0.0846097);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f040() {
   return (neuron0x3a59f10()*-0.0704313);
}

double NNfunction_ns_chi04_uL::synapse0x3a4f9d0() {
   return (neuron0x3a5a8e0()*0.744212);
}

double NNfunction_ns_chi04_uL::synapse0x3a4fa10() {
   return (neuron0x3a5b2b0()*0.0438767);
}

double NNfunction_ns_chi04_uL::synapse0x3a503a0() {
   return (neuron0x3a5bc80()*3.59667);
}

double NNfunction_ns_chi04_uL::synapse0x3a503e0() {
   return (neuron0x3a5c650()*7.83696);
}

double NNfunction_ns_chi04_uL::synapse0x3a48ef0() {
   return (neuron0x3a5d020()*0.0762666);
}

double NNfunction_ns_chi04_uL::synapse0x3a48f30() {
   return (neuron0x3a5d9f0()*1.78243);
}

double NNfunction_ns_chi04_uL::synapse0x3a527a0() {
   return (neuron0x3a5e3c0()*2.36108);
}

double NNfunction_ns_chi04_uL::synapse0x3a527e0() {
   return (neuron0x3a5efa0()*-0.0154784);
}

double NNfunction_ns_chi04_uL::synapse0x3a53130() {
   return (neuron0x3a5f970()*0.673763);
}

double NNfunction_ns_chi04_uL::synapse0x3a53170() {
   return (neuron0x3a507f0()*0.0600415);
}

double NNfunction_ns_chi04_uL::synapse0x3a53b00() {
   return (neuron0x3a511c0()*-0.0538847);
}

double NNfunction_ns_chi04_uL::synapse0x3a53b40() {
   return (neuron0x3a51b90()*-1.86313);
}

double NNfunction_ns_chi04_uL::synapse0x3a544d0() {
   return (neuron0x3a641d0()*-0.0195379);
}

double NNfunction_ns_chi04_uL::synapse0x3a54510() {
   return (neuron0x3a64a80()*0.0406298);
}

double NNfunction_ns_chi04_uL::synapse0x3a54ea0() {
   return (neuron0x3a65450()*0.0347072);
}

double NNfunction_ns_chi04_uL::synapse0x3a54ee0() {
   return (neuron0x3a65e20()*-0.205138);
}

double NNfunction_ns_chi04_uL::synapse0x3a575e0() {
   return (neuron0x3a40db0()*2.19664);
}

double NNfunction_ns_chi04_uL::synapse0x3a57620() {
   return (neuron0x3a415f0()*0.162216);
}

double NNfunction_ns_chi04_uL::synapse0x3a4cba0() {
   return (neuron0x3a420d0()*-1.17289);
}

double NNfunction_ns_chi04_uL::synapse0x3a4cbe0() {
   return (neuron0x3a41b70()*-0.789109);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a1c0() {
   return (neuron0x3a42eb0()*1.86574);
}

double NNfunction_ns_chi04_uL::synapse0x3a5a200() {
   return (neuron0x3a44980()*0.270551);
}

double NNfunction_ns_chi04_uL::synapse0x3a5ab90() {
   return (neuron0x3a45750()*-0.840614);
}

double NNfunction_ns_chi04_uL::synapse0x3a5abd0() {
   return (neuron0x3a46120()*0.42685);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b560() {
   return (neuron0x3a46af0()*-0.583679);
}

double NNfunction_ns_chi04_uL::synapse0x3a5b5a0() {
   return (neuron0x3a475d0()*-0.662652);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bf30() {
   return (neuron0x3a47fa0()*-1.72612);
}

double NNfunction_ns_chi04_uL::synapse0x3a5bf70() {
   return (neuron0x3a45080()*1.50842);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c900() {
   return (neuron0x3a49b50()*-0.742308);
}

double NNfunction_ns_chi04_uL::synapse0x3a5c940() {
   return (neuron0x3a4a520()*1.87831);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d2d0() {
   return (neuron0x3a4aef0()*-0.844136);
}

double NNfunction_ns_chi04_uL::synapse0x3a5d310() {
   return (neuron0x3a4b8c0()*3.75079);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dca0() {
   return (neuron0x3a4d6d0()*2.35199);
}

double NNfunction_ns_chi04_uL::synapse0x3a5dce0() {
   return (neuron0x3a4d9b0()*1.71518);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e670() {
   return (neuron0x3a4e380()*-0.587145);
}

double NNfunction_ns_chi04_uL::synapse0x3a5e6b0() {
   return (neuron0x3a4ed50()*1.59896);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f250() {
   return (neuron0x3a4f720()*4.52739);
}

double NNfunction_ns_chi04_uL::synapse0x3a5f290() {
   return (neuron0x3a500f0()*-0.571688);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fc20() {
   return (neuron0x3a48c40()*0.672198);
}

double NNfunction_ns_chi04_uL::synapse0x3a5fc60() {
   return (neuron0x3a49610()*0.628335);
}

double NNfunction_ns_chi04_uL::synapse0x3a50aa0() {
   return (neuron0x3a52e80()*-0.809149);
}

double NNfunction_ns_chi04_uL::synapse0x3a50ae0() {
   return (neuron0x3a53850()*3.37179);
}

double NNfunction_ns_chi04_uL::synapse0x3a51470() {
   return (neuron0x3a54220()*0.475142);
}

double NNfunction_ns_chi04_uL::synapse0x3a514b0() {
   return (neuron0x3a54bf0()*0.790461);
}

double NNfunction_ns_chi04_uL::synapse0x3a51e40() {
   return (neuron0x3a555c0()*-2.17224);
}

double NNfunction_ns_chi04_uL::synapse0x3a51e80() {
   return (neuron0x3a55f90()*-2.82531);
}

double NNfunction_ns_chi04_uL::synapse0x3a64360() {
   return (neuron0x3a56960()*0.496922);
}

double NNfunction_ns_chi04_uL::synapse0x3a643a0() {
   return (neuron0x3a57330()*-5.86443);
}

double NNfunction_ns_chi04_uL::synapse0x3a64d30() {
   return (neuron0x3a4d3c0()*-0.544533);
}

double NNfunction_ns_chi04_uL::synapse0x3a64d70() {
   return (neuron0x3a59f10()*0.940232);
}

double NNfunction_ns_chi04_uL::synapse0x3a65700() {
   return (neuron0x3a5a8e0()*2.15438);
}

double NNfunction_ns_chi04_uL::synapse0x3a65740() {
   return (neuron0x3a5b2b0()*-0.74607);
}

double NNfunction_ns_chi04_uL::synapse0x3a660d0() {
   return (neuron0x3a5bc80()*1.54799);
}

double NNfunction_ns_chi04_uL::synapse0x3a66110() {
   return (neuron0x3a5c650()*4.23656);
}

double NNfunction_ns_chi04_uL::synapse0x3a41060() {
   return (neuron0x3a5d020()*-2.01427);
}

double NNfunction_ns_chi04_uL::synapse0x3a410a0() {
   return (neuron0x3a5d9f0()*-0.3808);
}

double NNfunction_ns_chi04_uL::synapse0x3a55870() {
   return (neuron0x3a5e3c0()*4.31998);
}

double NNfunction_ns_chi04_uL::synapse0x3a558b0() {
   return (neuron0x3a5efa0()*0.763991);
}

double NNfunction_ns_chi04_uL::synapse0x3a667f0() {
   return (neuron0x3a5f970()*-1.56218);
}

double NNfunction_ns_chi04_uL::synapse0x3a66830() {
   return (neuron0x3a507f0()*-0.93981);
}

double NNfunction_ns_chi04_uL::synapse0x3a66870() {
   return (neuron0x3a511c0()*0.782935);
}

double NNfunction_ns_chi04_uL::synapse0x3a668b0() {
   return (neuron0x3a51b90()*-2.43732);
}

double NNfunction_ns_chi04_uL::synapse0x3a6d760() {
   return (neuron0x3a641d0()*0.623802);
}

double NNfunction_ns_chi04_uL::synapse0x3a6d7a0() {
   return (neuron0x3a64a80()*-0.517297);
}

double NNfunction_ns_chi04_uL::synapse0x3a6d7e0() {
   return (neuron0x3a65450()*-0.928827);
}

double NNfunction_ns_chi04_uL::synapse0x3a6d820() {
   return (neuron0x3a65e20()*0.517527);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dba0() {
   return (neuron0x3a40db0()*0.907935);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dbe0() {
   return (neuron0x3a415f0()*-0.688593);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dc20() {
   return (neuron0x3a420d0()*0.375539);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dc60() {
   return (neuron0x3a41b70()*0.737951);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dca0() {
   return (neuron0x3a42eb0()*0.11109);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dce0() {
   return (neuron0x3a44980()*0.302676);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dd20() {
   return (neuron0x3a45750()*0.193954);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dd60() {
   return (neuron0x3a46120()*-0.325015);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dda0() {
   return (neuron0x3a46af0()*0.358483);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dde0() {
   return (neuron0x3a475d0()*0.283005);
}

double NNfunction_ns_chi04_uL::synapse0x3a6de20() {
   return (neuron0x3a47fa0()*-0.609993);
}

double NNfunction_ns_chi04_uL::synapse0x3a6de60() {
   return (neuron0x3a45080()*-0.44452);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dea0() {
   return (neuron0x3a49b50()*0.718259);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dee0() {
   return (neuron0x3a4a520()*0.394228);
}

double NNfunction_ns_chi04_uL::synapse0x3a6df20() {
   return (neuron0x3a4aef0()*0.182762);
}

double NNfunction_ns_chi04_uL::synapse0x3a6df60() {
   return (neuron0x3a4b8c0()*0.12502);
}

double NNfunction_ns_chi04_uL::synapse0x3a6d9f0() {
   return (neuron0x3a4d6d0()*-0.265304);
}

double NNfunction_ns_chi04_uL::synapse0x3a6da30() {
   return (neuron0x3a4d9b0()*0.336499);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e0b0() {
   return (neuron0x3a4e380()*-0.0249472);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e0f0() {
   return (neuron0x3a4ed50()*0.00797543);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e130() {
   return (neuron0x3a4f720()*1.60937);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e170() {
   return (neuron0x3a500f0()*0.479894);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e1b0() {
   return (neuron0x3a48c40()*0.0313353);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e1f0() {
   return (neuron0x3a49610()*-0.315042);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e230() {
   return (neuron0x3a52e80()*0.298047);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e270() {
   return (neuron0x3a53850()*0.660157);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e2b0() {
   return (neuron0x3a54220()*-0.172596);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e2f0() {
   return (neuron0x3a54bf0()*-0.33677);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e330() {
   return (neuron0x3a555c0()*-0.130723);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e370() {
   return (neuron0x3a55f90()*0.499725);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e3b0() {
   return (neuron0x3a56960()*-0.0962481);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e3f0() {
   return (neuron0x3a57330()*0.0299737);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dfa0() {
   return (neuron0x3a4d3c0()*0.337588);
}

double NNfunction_ns_chi04_uL::synapse0x3a6dfe0() {
   return (neuron0x3a59f10()*-0.246387);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e020() {
   return (neuron0x3a5a8e0()*-0.038297);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e060() {
   return (neuron0x3a5b2b0()*0.130236);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e640() {
   return (neuron0x3a5bc80()*-0.147765);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e680() {
   return (neuron0x3a5c650()*0.964784);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e6c0() {
   return (neuron0x3a5d020()*0.34168);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e700() {
   return (neuron0x3a5d9f0()*2.15708);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e740() {
   return (neuron0x3a5e3c0()*1.17156);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e780() {
   return (neuron0x3a5efa0()*-0.0181436);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e7c0() {
   return (neuron0x3a5f970()*-0.896438);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e800() {
   return (neuron0x3a507f0()*0.204756);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e840() {
   return (neuron0x3a511c0()*-0.225452);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e880() {
   return (neuron0x3a51b90()*-0.0657261);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e8c0() {
   return (neuron0x3a641d0()*0.0473333);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e900() {
   return (neuron0x3a64a80()*0.229939);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e940() {
   return (neuron0x3a65450()*0.131502);
}

double NNfunction_ns_chi04_uL::synapse0x3a6e980() {
   return (neuron0x3a65e20()*0.534687);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ed00() {
   return (neuron0x3a40db0()*0.764307);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ed40() {
   return (neuron0x3a415f0()*-1.61757);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ed80() {
   return (neuron0x3a420d0()*0.141649);
}

double NNfunction_ns_chi04_uL::synapse0x3a6edc0() {
   return (neuron0x3a41b70()*-1.62687);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ee00() {
   return (neuron0x3a42eb0()*0.00890729);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ee40() {
   return (neuron0x3a44980()*1.49631);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ee80() {
   return (neuron0x3a45750()*-0.00665699);
}

double NNfunction_ns_chi04_uL::synapse0x3a6eec0() {
   return (neuron0x3a46120()*-0.82158);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ef00() {
   return (neuron0x3a46af0()*-0.732123);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ef40() {
   return (neuron0x3a475d0()*-0.378506);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ef80() {
   return (neuron0x3a47fa0()*-1.6045);
}

double NNfunction_ns_chi04_uL::synapse0x3a6efc0() {
   return (neuron0x3a45080()*0.3217);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f000() {
   return (neuron0x3a49b50()*0.149947);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f040() {
   return (neuron0x3a4a520()*-0.453938);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f080() {
   return (neuron0x3a4aef0()*-0.493738);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f0c0() {
   return (neuron0x3a4b8c0()*2.6955);
}

double NNfunction_ns_chi04_uL::synapse0x3a6eb50() {
   return (neuron0x3a4d6d0()*3.92016);
}

double NNfunction_ns_chi04_uL::synapse0x3a6eb90() {
   return (neuron0x3a4d9b0()*3.05683);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f210() {
   return (neuron0x3a4e380()*-0.272615);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f250() {
   return (neuron0x3a4ed50()*-0.135949);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f290() {
   return (neuron0x3a4f720()*0.234042);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f2d0() {
   return (neuron0x3a500f0()*-0.644662);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f310() {
   return (neuron0x3a48c40()*0.22788);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f350() {
   return (neuron0x3a49610()*0.385065);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f390() {
   return (neuron0x3a52e80()*-0.480316);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f3d0() {
   return (neuron0x3a53850()*-1.67408);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f410() {
   return (neuron0x3a54220()*0.294351);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f450() {
   return (neuron0x3a54bf0()*0.728824);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f490() {
   return (neuron0x3a555c0()*-0.296602);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f4d0() {
   return (neuron0x3a55f90()*0.312217);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f510() {
   return (neuron0x3a56960()*0.296738);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f550() {
   return (neuron0x3a57330()*-0.243429);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f100() {
   return (neuron0x3a4d3c0()*-0.489326);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f140() {
   return (neuron0x3a59f10()*0.557125);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f180() {
   return (neuron0x3a5a8e0()*2.25118);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f1c0() {
   return (neuron0x3a5b2b0()*-0.243267);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f7a0() {
   return (neuron0x3a5bc80()*1.50256);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f7e0() {
   return (neuron0x3a5c650()*-0.0581739);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f820() {
   return (neuron0x3a5d020()*-0.284411);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f860() {
   return (neuron0x3a5d9f0()*-1.52358);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f8a0() {
   return (neuron0x3a5e3c0()*2.15793);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f8e0() {
   return (neuron0x3a5efa0()*0.293564);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f920() {
   return (neuron0x3a5f970()*0.753111);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f960() {
   return (neuron0x3a507f0()*-0.195509);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f9a0() {
   return (neuron0x3a511c0()*0.455919);
}

double NNfunction_ns_chi04_uL::synapse0x3a6f9e0() {
   return (neuron0x3a51b90()*-1.44633);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fa20() {
   return (neuron0x3a641d0()*0.167006);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fa60() {
   return (neuron0x3a64a80()*-0.42863);
}

double NNfunction_ns_chi04_uL::synapse0x3a6faa0() {
   return (neuron0x3a65450()*-0.343581);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fae0() {
   return (neuron0x3a65e20()*0.956253);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fe60() {
   return (neuron0x3a40db0()*-0.393281);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fea0() {
   return (neuron0x3a415f0()*-2.73776);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fee0() {
   return (neuron0x3a420d0()*2.42869);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ff20() {
   return (neuron0x3a41b70()*0.1998);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ff60() {
   return (neuron0x3a42eb0()*-1.74936);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ffa0() {
   return (neuron0x3a44980()*-1.03176);
}

double NNfunction_ns_chi04_uL::synapse0x3a6ffe0() {
   return (neuron0x3a45750()*-0.0597512);
}

double NNfunction_ns_chi04_uL::synapse0x3a70020() {
   return (neuron0x3a46120()*-0.919864);
}

double NNfunction_ns_chi04_uL::synapse0x3a70060() {
   return (neuron0x3a46af0()*0.0507712);
}

double NNfunction_ns_chi04_uL::synapse0x3a700a0() {
   return (neuron0x3a475d0()*0.015754);
}

double NNfunction_ns_chi04_uL::synapse0x3a700e0() {
   return (neuron0x3a47fa0()*0.846261);
}

double NNfunction_ns_chi04_uL::synapse0x3a70120() {
   return (neuron0x3a45080()*-0.258461);
}

double NNfunction_ns_chi04_uL::synapse0x3a70160() {
   return (neuron0x3a49b50()*2.76108);
}

double NNfunction_ns_chi04_uL::synapse0x3a701a0() {
   return (neuron0x3a4a520()*-0.822367);
}

double NNfunction_ns_chi04_uL::synapse0x3a701e0() {
   return (neuron0x3a4aef0()*0.0536351);
}

double NNfunction_ns_chi04_uL::synapse0x3a70220() {
   return (neuron0x3a4b8c0()*0.808866);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fcb0() {
   return (neuron0x3a4d6d0()*0.531892);
}

double NNfunction_ns_chi04_uL::synapse0x3a6fcf0() {
   return (neuron0x3a4d9b0()*0.510787);
}

double NNfunction_ns_chi04_uL::synapse0x3a70370() {
   return (neuron0x3a4e380()*0.0848181);
}

double NNfunction_ns_chi04_uL::synapse0x3a703b0() {
   return (neuron0x3a4ed50()*0.0622963);
}

double NNfunction_ns_chi04_uL::synapse0x3a703f0() {
   return (neuron0x3a4f720()*-0.455475);
}

double NNfunction_ns_chi04_uL::synapse0x3a70430() {
   return (neuron0x3a500f0()*0.0331994);
}

double NNfunction_ns_chi04_uL::synapse0x3a70470() {
   return (neuron0x3a48c40()*-0.0578189);
}

double NNfunction_ns_chi04_uL::synapse0x3a704b0() {
   return (neuron0x3a49610()*-0.0264135);
}

double NNfunction_ns_chi04_uL::synapse0x3a704f0() {
   return (neuron0x3a52e80()*0.0451499);
}

double NNfunction_ns_chi04_uL::synapse0x3a70530() {
   return (neuron0x3a53850()*-2.71357);
}

double NNfunction_ns_chi04_uL::synapse0x3a70570() {
   return (neuron0x3a54220()*-0.0327003);
}

double NNfunction_ns_chi04_uL::synapse0x3a705b0() {
   return (neuron0x3a54bf0()*-0.0708147);
}

double NNfunction_ns_chi04_uL::synapse0x3a705f0() {
   return (neuron0x3a555c0()*2.19431);
}

double NNfunction_ns_chi04_uL::synapse0x3a70630() {
   return (neuron0x3a55f90()*-0.103463);
}

double NNfunction_ns_chi04_uL::synapse0x3a70670() {
   return (neuron0x3a56960()*-0.0576154);
}

double NNfunction_ns_chi04_uL::synapse0x3a706b0() {
   return (neuron0x3a57330()*0.421305);
}

double NNfunction_ns_chi04_uL::synapse0x3a70260() {
   return (neuron0x3a4d3c0()*0.0521608);
}

double NNfunction_ns_chi04_uL::synapse0x3a702a0() {
   return (neuron0x3a59f10()*-0.0551587);
}

double NNfunction_ns_chi04_uL::synapse0x3a702e0() {
   return (neuron0x3a5a8e0()*-1.09932);
}

double NNfunction_ns_chi04_uL::synapse0x3a70320() {
   return (neuron0x3a5b2b0()*0.0206575);
}

double NNfunction_ns_chi04_uL::synapse0x3a70900() {
   return (neuron0x3a5bc80()*-0.806512);
}

double NNfunction_ns_chi04_uL::synapse0x3a70940() {
   return (neuron0x3a5c650()*0.897258);
}

double NNfunction_ns_chi04_uL::synapse0x3a70980() {
   return (neuron0x3a5d020()*-0.954977);
}

double NNfunction_ns_chi04_uL::synapse0x3a709c0() {
   return (neuron0x3a5d9f0()*0.24032);
}

double NNfunction_ns_chi04_uL::synapse0x3a70a00() {
   return (neuron0x3a5e3c0()*-1.99975);
}

double NNfunction_ns_chi04_uL::synapse0x3a70a40() {
   return (neuron0x3a5efa0()*-0.046844);
}

double NNfunction_ns_chi04_uL::synapse0x3a70a80() {
   return (neuron0x3a5f970()*0.13242);
}

double NNfunction_ns_chi04_uL::synapse0x3a70ac0() {
   return (neuron0x3a507f0()*-0.0122406);
}

double NNfunction_ns_chi04_uL::synapse0x3a70b00() {
   return (neuron0x3a511c0()*-0.00978765);
}

double NNfunction_ns_chi04_uL::synapse0x3a70b40() {
   return (neuron0x3a51b90()*2.89314);
}

double NNfunction_ns_chi04_uL::synapse0x3a70b80() {
   return (neuron0x3a641d0()*-0.0554615);
}

double NNfunction_ns_chi04_uL::synapse0x3a70bc0() {
   return (neuron0x3a64a80()*-0.000455626);
}

double NNfunction_ns_chi04_uL::synapse0x3a70c00() {
   return (neuron0x3a65450()*0.0182858);
}

double NNfunction_ns_chi04_uL::synapse0x3a70c40() {
   return (neuron0x3a65e20()*0.0387109);
}

double NNfunction_ns_chi04_uL::synapse0x3a70ea0() {
   return (neuron0x3a6d020()*-8.51224);
}

double NNfunction_ns_chi04_uL::synapse0x3a70ee0() {
   return (neuron0x3a6d3c0()*-6.78584);
}

double NNfunction_ns_chi04_uL::synapse0x3a70f20() {
   return (neuron0x3a6d860()*5.2237);
}

double NNfunction_ns_chi04_uL::synapse0x3a70f60() {
   return (neuron0x3a6e9c0()*2.34216);
}

double NNfunction_ns_chi04_uL::synapse0x3a70fa0() {
   return (neuron0x3a6fb20()*9.28228);
}

