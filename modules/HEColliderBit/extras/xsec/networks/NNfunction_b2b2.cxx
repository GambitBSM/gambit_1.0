#include "NNfunction_b2b2.h"
#include <cmath>

double NNfunction_b2b2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5219)/15.3916;
   input1 = (in1 - -2.1343)/1143.78;
   input2 = (in2 - 660.244)/619.78;
   input3 = (in3 - -49.9006)/818.733;
   input4 = (in4 - 991.287)/935.649;
   input5 = (in5 - 888.936)/945.716;
   input6 = (in6 - 900.054)/947.858;
   input7 = (in7 - 914.927)/927.218;
   input8 = (in8 - 916.48)/971.871;
   input9 = (in9 - 904.139)/958.466;
   input10 = (in10 - 969.701)/952.163;
   input11 = (in11 - 723.085)/870.636;
   input12 = (in12 - 725.975)/872.296;
   input13 = (in13 - 354.724)/289.773;
   input14 = (in14 - 714.115)/810.821;
   input15 = (in15 - 715.732)/811.035;
   input16 = (in16 - 535.283)/556.441;
   input17 = (in17 - 756.305)/900.119;
   input18 = (in18 - 756.743)/906.023;
   input19 = (in19 - 362.218)/300.452;
   input20 = (in20 - -4.73204)/465.581;
   input21 = (in21 - -9.46482)/1133.54;
   input22 = (in22 - 0.337742)/1191.9;
   input23 = (in23 - -187.324)/543.007;
   switch(index) {
     case 0:
         return neuron0x249edd0();
     default:
         return 0.;
   }
}

double NNfunction_b2b2::Value(int index, double* input) {
   input0 = (input[0] - 23.5219)/15.3916;
   input1 = (input[1] - -2.1343)/1143.78;
   input2 = (input[2] - 660.244)/619.78;
   input3 = (input[3] - -49.9006)/818.733;
   input4 = (input[4] - 991.287)/935.649;
   input5 = (input[5] - 888.936)/945.716;
   input6 = (input[6] - 900.054)/947.858;
   input7 = (input[7] - 914.927)/927.218;
   input8 = (input[8] - 916.48)/971.871;
   input9 = (input[9] - 904.139)/958.466;
   input10 = (input[10] - 969.701)/952.163;
   input11 = (input[11] - 723.085)/870.636;
   input12 = (input[12] - 725.975)/872.296;
   input13 = (input[13] - 354.724)/289.773;
   input14 = (input[14] - 714.115)/810.821;
   input15 = (input[15] - 715.732)/811.035;
   input16 = (input[16] - 535.283)/556.441;
   input17 = (input[17] - 756.305)/900.119;
   input18 = (input[18] - 756.743)/906.023;
   input19 = (input[19] - 362.218)/300.452;
   input20 = (input[20] - -4.73204)/465.581;
   input21 = (input[21] - -9.46482)/1133.54;
   input22 = (input[22] - 0.337742)/1191.9;
   input23 = (input[23] - -187.324)/543.007;
   switch(index) {
     case 0:
         return neuron0x249edd0();
     default:
         return 0.;
   }
}

double NNfunction_b2b2::neuron0x246ae90() {
   return input0;
}

double NNfunction_b2b2::neuron0x246b1d0() {
   return input1;
}

double NNfunction_b2b2::neuron0x246b510() {
   return input2;
}

double NNfunction_b2b2::neuron0x246b850() {
   return input3;
}

double NNfunction_b2b2::neuron0x246bb90() {
   return input4;
}

double NNfunction_b2b2::neuron0x246bed0() {
   return input5;
}

double NNfunction_b2b2::neuron0x246c210() {
   return input6;
}

double NNfunction_b2b2::neuron0x246c550() {
   return input7;
}

double NNfunction_b2b2::neuron0x246c890() {
   return input8;
}

double NNfunction_b2b2::neuron0x246cbd0() {
   return input9;
}

double NNfunction_b2b2::neuron0x246cf10() {
   return input10;
}

double NNfunction_b2b2::neuron0x246d250() {
   return input11;
}

double NNfunction_b2b2::neuron0x246d590() {
   return input12;
}

double NNfunction_b2b2::neuron0x246d8d0() {
   return input13;
}

double NNfunction_b2b2::neuron0x246dc10() {
   return input14;
}

double NNfunction_b2b2::neuron0x246df50() {
   return input15;
}

double NNfunction_b2b2::neuron0x246e290() {
   return input16;
}

double NNfunction_b2b2::neuron0x246e7f0() {
   return input17;
}

double NNfunction_b2b2::neuron0x246ea10() {
   return input18;
}

double NNfunction_b2b2::neuron0x246ed50() {
   return input19;
}

double NNfunction_b2b2::neuron0x246f090() {
   return input20;
}

double NNfunction_b2b2::neuron0x246f3d0() {
   return input21;
}

double NNfunction_b2b2::neuron0x246f710() {
   return input22;
}

double NNfunction_b2b2::neuron0x246fa50() {
   return input23;
}

double NNfunction_b2b2::input0x246fef0() {
   double input = -1.43963;
   input += synapse0x222ad00();
   input += synapse0x246ad50();
   input += synapse0x246ad90();
   input += synapse0x24701a0();
   input += synapse0x24701e0();
   input += synapse0x2470220();
   input += synapse0x2470260();
   input += synapse0x24702a0();
   input += synapse0x24702e0();
   input += synapse0x2470320();
   input += synapse0x2470360();
   input += synapse0x24703a0();
   input += synapse0x24703e0();
   input += synapse0x2470420();
   input += synapse0x2470460();
   input += synapse0x24704a0();
   input += synapse0x246acc0();
   input += synapse0x246ad00();
   input += synapse0x221c560();
   input += synapse0x221c5a0();
   input += synapse0x2470700();
   input += synapse0x2470740();
   input += synapse0x2470780();
   input += synapse0x24707c0();
   return input;
}

double NNfunction_b2b2::neuron0x246fef0() {
   double input = input0x246fef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2470800() {
   double input = -0.0403434;
   input += synapse0x2470b40();
   input += synapse0x2470b80();
   input += synapse0x2470bc0();
   input += synapse0x2470c00();
   input += synapse0x2470c40();
   input += synapse0x2470c80();
   input += synapse0x2470cc0();
   input += synapse0x2470d00();
   input += synapse0x2470d40();
   input += synapse0x24705f0();
   input += synapse0x2470630();
   input += synapse0x2470670();
   input += synapse0x24706b0();
   input += synapse0x2470f90();
   input += synapse0x2470fd0();
   input += synapse0x2471010();
   input += synapse0x2470990();
   input += synapse0x24709d0();
   input += synapse0x2471160();
   input += synapse0x24711a0();
   input += synapse0x24711e0();
   input += synapse0x2471220();
   input += synapse0x2471260();
   input += synapse0x24712a0();
   return input;
}

double NNfunction_b2b2::neuron0x2470800() {
   double input = input0x2470800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24712e0() {
   double input = -2.86886;
   input += synapse0x2471620();
   input += synapse0x2471660();
   input += synapse0x24716a0();
   input += synapse0x24716e0();
   input += synapse0x2471720();
   input += synapse0x2471760();
   input += synapse0x24717a0();
   input += synapse0x24717e0();
   input += synapse0x2471820();
   input += synapse0x2471860();
   input += synapse0x24718a0();
   input += synapse0x24718e0();
   input += synapse0x2471920();
   input += synapse0x2471960();
   input += synapse0x24719a0();
   input += synapse0x24719e0();
   input += synapse0x2471470();
   input += synapse0x24714b0();
   input += synapse0x222a3d0();
   input += synapse0x222a410();
   input += synapse0x2459f20();
   input += synapse0x2459f60();
   input += synapse0x2459fa0();
   input += synapse0x246add0();
   return input;
}

double NNfunction_b2b2::neuron0x24712e0() {
   double input = input0x24712e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x222ab70() {
   double input = 0.631489;
   input += synapse0x2470f30();
   input += synapse0x246ae10();
   input += synapse0x246ae50();
   input += synapse0x2471b30();
   input += synapse0x2471b70();
   input += synapse0x2471bb0();
   input += synapse0x2471bf0();
   input += synapse0x2471c30();
   input += synapse0x2471c70();
   input += synapse0x2471cb0();
   input += synapse0x2471cf0();
   input += synapse0x2471d30();
   input += synapse0x2471d70();
   input += synapse0x2471db0();
   input += synapse0x2471df0();
   input += synapse0x2471e30();
   input += synapse0x2470d80();
   input += synapse0x2470dc0();
   input += synapse0x2471f80();
   input += synapse0x2471fc0();
   input += synapse0x2472000();
   input += synapse0x2472040();
   input += synapse0x2472080();
   input += synapse0x24720c0();
   return input;
}

double NNfunction_b2b2::neuron0x222ab70() {
   double input = input0x222ab70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2472100() {
   double input = -1.70156;
   input += synapse0x2472440();
   input += synapse0x2472480();
   input += synapse0x24724c0();
   input += synapse0x2472500();
   input += synapse0x2472540();
   input += synapse0x2472580();
   input += synapse0x24725c0();
   input += synapse0x2472600();
   input += synapse0x2472640();
   input += synapse0x2472680();
   input += synapse0x24726c0();
   input += synapse0x2472700();
   input += synapse0x2472740();
   input += synapse0x2472780();
   input += synapse0x24727c0();
   input += synapse0x2472800();
   input += synapse0x2472290();
   input += synapse0x24722d0();
   input += synapse0x2472950();
   input += synapse0x2472990();
   input += synapse0x24729d0();
   input += synapse0x2472a10();
   input += synapse0x2472a50();
   input += synapse0x2472a90();
   return input;
}

double NNfunction_b2b2::neuron0x2472100() {
   double input = input0x2472100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2472ad0() {
   double input = 1.84302;
   input += synapse0x2472e10();
   input += synapse0x2472e50();
   input += synapse0x2472e90();
   input += synapse0x2472ed0();
   input += synapse0x2472f10();
   input += synapse0x2472f50();
   input += synapse0x2472f90();
   input += synapse0x2472fd0();
   input += synapse0x2473010();
   input += synapse0x222a760();
   input += synapse0x222a7a0();
   input += synapse0x222a7e0();
   input += synapse0x222a820();
   input += synapse0x222a860();
   input += synapse0x222a8a0();
   input += synapse0x222a8e0();
   input += synapse0x2472c60();
   input += synapse0x2472ca0();
   input += synapse0x222aa30();
   input += synapse0x222aa70();
   input += synapse0x222aab0();
   input += synapse0x222aaf0();
   input += synapse0x222ab30();
   input += synapse0x2473860();
   return input;
}

double NNfunction_b2b2::neuron0x2472ad0() {
   double input = input0x2472ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24738a0() {
   double input = -1.09133;
   input += synapse0x2473be0();
   input += synapse0x2473c20();
   input += synapse0x2473c60();
   input += synapse0x2473ca0();
   input += synapse0x2473ce0();
   input += synapse0x2473d20();
   input += synapse0x2473d60();
   input += synapse0x2473da0();
   input += synapse0x2473de0();
   input += synapse0x2473e20();
   input += synapse0x2473e60();
   input += synapse0x2473ea0();
   input += synapse0x2473ee0();
   input += synapse0x2473f20();
   input += synapse0x2473f60();
   input += synapse0x2473fa0();
   input += synapse0x2473a30();
   input += synapse0x2473a70();
   input += synapse0x24740f0();
   input += synapse0x2474130();
   input += synapse0x2474170();
   input += synapse0x24741b0();
   input += synapse0x24741f0();
   input += synapse0x2474230();
   return input;
}

double NNfunction_b2b2::neuron0x24738a0() {
   double input = input0x24738a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2474270() {
   double input = -0.813773;
   input += synapse0x24745b0();
   input += synapse0x24745f0();
   input += synapse0x2474630();
   input += synapse0x2474670();
   input += synapse0x24746b0();
   input += synapse0x24746f0();
   input += synapse0x2474730();
   input += synapse0x2474770();
   input += synapse0x24747b0();
   input += synapse0x24747f0();
   input += synapse0x2474830();
   input += synapse0x2474870();
   input += synapse0x24748b0();
   input += synapse0x24748f0();
   input += synapse0x2474930();
   input += synapse0x2474970();
   input += synapse0x2474400();
   input += synapse0x2474440();
   input += synapse0x2474ac0();
   input += synapse0x2474b00();
   input += synapse0x2474b40();
   input += synapse0x2474b80();
   input += synapse0x2474bc0();
   input += synapse0x2474c00();
   return input;
}

double NNfunction_b2b2::neuron0x2474270() {
   double input = input0x2474270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2474c40() {
   double input = 0.196368;
   input += synapse0x246e6e0();
   input += synapse0x246e720();
   input += synapse0x246e760();
   input += synapse0x246e7a0();
   input += synapse0x2475190();
   input += synapse0x24751d0();
   input += synapse0x2475210();
   input += synapse0x2475250();
   input += synapse0x2475290();
   input += synapse0x24752d0();
   input += synapse0x2475310();
   input += synapse0x2475350();
   input += synapse0x2475390();
   input += synapse0x24753d0();
   input += synapse0x2475410();
   input += synapse0x2475450();
   input += synapse0x2474dd0();
   input += synapse0x2474e10();
   input += synapse0x24755a0();
   input += synapse0x24755e0();
   input += synapse0x2475620();
   input += synapse0x2475660();
   input += synapse0x24756a0();
   input += synapse0x24756e0();
   return input;
}

double NNfunction_b2b2::neuron0x2474c40() {
   double input = input0x2474c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2475720() {
   double input = 0.520649;
   input += synapse0x2475a60();
   input += synapse0x2475aa0();
   input += synapse0x2475ae0();
   input += synapse0x2475b20();
   input += synapse0x2475b60();
   input += synapse0x2475ba0();
   input += synapse0x2475be0();
   input += synapse0x2475c20();
   input += synapse0x2475c60();
   input += synapse0x2475ca0();
   input += synapse0x2475ce0();
   input += synapse0x2475d20();
   input += synapse0x2475d60();
   input += synapse0x2475da0();
   input += synapse0x2475de0();
   input += synapse0x2475e20();
   input += synapse0x24758b0();
   input += synapse0x24758f0();
   input += synapse0x2475f70();
   input += synapse0x2475fb0();
   input += synapse0x2475ff0();
   input += synapse0x2476030();
   input += synapse0x2476070();
   input += synapse0x24760b0();
   return input;
}

double NNfunction_b2b2::neuron0x2475720() {
   double input = input0x2475720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24760f0() {
   double input = -0.320231;
   input += synapse0x2476430();
   input += synapse0x2476470();
   input += synapse0x24764b0();
   input += synapse0x24764f0();
   input += synapse0x2476530();
   input += synapse0x2476570();
   input += synapse0x24765b0();
   input += synapse0x24765f0();
   input += synapse0x2476630();
   input += synapse0x2476670();
   input += synapse0x24766b0();
   input += synapse0x24766f0();
   input += synapse0x2476730();
   input += synapse0x2476770();
   input += synapse0x24767b0();
   input += synapse0x24767f0();
   input += synapse0x2476280();
   input += synapse0x24762c0();
   input += synapse0x2473050();
   input += synapse0x2473090();
   input += synapse0x24730d0();
   input += synapse0x2473110();
   input += synapse0x2473150();
   input += synapse0x2473190();
   return input;
}

double NNfunction_b2b2::neuron0x24760f0() {
   double input = input0x24760f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24731d0() {
   double input = -0.742288;
   input += synapse0x2473510();
   input += synapse0x2473550();
   input += synapse0x2473590();
   input += synapse0x24735d0();
   input += synapse0x2473610();
   input += synapse0x2473650();
   input += synapse0x2473690();
   input += synapse0x24736d0();
   input += synapse0x2473710();
   input += synapse0x2473750();
   input += synapse0x2473790();
   input += synapse0x24737d0();
   input += synapse0x2473810();
   input += synapse0x2477950();
   input += synapse0x2477990();
   input += synapse0x24779d0();
   input += synapse0x2473360();
   input += synapse0x24733a0();
   input += synapse0x2477b20();
   input += synapse0x2477b60();
   input += synapse0x2477ba0();
   input += synapse0x2477be0();
   input += synapse0x2477c20();
   input += synapse0x2477c60();
   return input;
}

double NNfunction_b2b2::neuron0x24731d0() {
   double input = input0x24731d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2477ca0() {
   double input = 0.14859;
   input += synapse0x2477fe0();
   input += synapse0x2478020();
   input += synapse0x2478060();
   input += synapse0x24780a0();
   input += synapse0x24780e0();
   input += synapse0x2478120();
   input += synapse0x2478160();
   input += synapse0x24781a0();
   input += synapse0x24781e0();
   input += synapse0x2478220();
   input += synapse0x2478260();
   input += synapse0x24782a0();
   input += synapse0x24782e0();
   input += synapse0x2478320();
   input += synapse0x2478360();
   input += synapse0x24783a0();
   input += synapse0x2477e30();
   input += synapse0x2477e70();
   input += synapse0x24784f0();
   input += synapse0x2478530();
   input += synapse0x2478570();
   input += synapse0x24785b0();
   input += synapse0x24785f0();
   input += synapse0x2478630();
   return input;
}

double NNfunction_b2b2::neuron0x2477ca0() {
   double input = input0x2477ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2478670() {
   double input = -0.378063;
   input += synapse0x24789b0();
   input += synapse0x24789f0();
   input += synapse0x2478a30();
   input += synapse0x2478a70();
   input += synapse0x2478ab0();
   input += synapse0x2478af0();
   input += synapse0x2478b30();
   input += synapse0x2478b70();
   input += synapse0x2478bb0();
   input += synapse0x2478bf0();
   input += synapse0x2478c30();
   input += synapse0x2478c70();
   input += synapse0x2478cb0();
   input += synapse0x2478cf0();
   input += synapse0x2478d30();
   input += synapse0x2478d70();
   input += synapse0x2478800();
   input += synapse0x2478840();
   input += synapse0x2478ec0();
   input += synapse0x2478f00();
   input += synapse0x2478f40();
   input += synapse0x2478f80();
   input += synapse0x2478fc0();
   input += synapse0x2479000();
   return input;
}

double NNfunction_b2b2::neuron0x2478670() {
   double input = input0x2478670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2479040() {
   double input = -0.233691;
   input += synapse0x2479380();
   input += synapse0x24793c0();
   input += synapse0x2479400();
   input += synapse0x2479440();
   input += synapse0x2479480();
   input += synapse0x24794c0();
   input += synapse0x2479500();
   input += synapse0x2479540();
   input += synapse0x2479580();
   input += synapse0x24795c0();
   input += synapse0x2479600();
   input += synapse0x2479640();
   input += synapse0x2479680();
   input += synapse0x24796c0();
   input += synapse0x2479700();
   input += synapse0x2479740();
   input += synapse0x24791d0();
   input += synapse0x2479210();
   input += synapse0x2479890();
   input += synapse0x24798d0();
   input += synapse0x2479910();
   input += synapse0x2479950();
   input += synapse0x2479990();
   input += synapse0x24799d0();
   return input;
}

double NNfunction_b2b2::neuron0x2479040() {
   double input = input0x2479040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2479a10() {
   double input = 0.487005;
   input += synapse0x2479d50();
   input += synapse0x246b0b0();
   input += synapse0x246b0f0();
   input += synapse0x246b3f0();
   input += synapse0x246b430();
   input += synapse0x246b730();
   input += synapse0x246b770();
   input += synapse0x246ba70();
   input += synapse0x246bab0();
   input += synapse0x246bdb0();
   input += synapse0x246bdf0();
   input += synapse0x246c0f0();
   input += synapse0x246c130();
   input += synapse0x246c430();
   input += synapse0x246c470();
   input += synapse0x246c770();
   input += synapse0x246c7b0();
   input += synapse0x246cab0();
   input += synapse0x246caf0();
   input += synapse0x246cdf0();
   input += synapse0x246ce30();
   input += synapse0x246d130();
   input += synapse0x246d170();
   input += synapse0x246d470();
   return input;
}

double NNfunction_b2b2::neuron0x2479a10() {
   double input = input0x2479a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247b820() {
   double input = -0.162295;
   input += synapse0x246d4b0();
   input += synapse0x246e170();
   input += synapse0x246e1b0();
   input += synapse0x2479ba0();
   input += synapse0x2479be0();
   input += synapse0x246e4b0();
   input += synapse0x246e4f0();
   input += synapse0x221c440();
   input += synapse0x221c480();
   input += synapse0x246ec30();
   input += synapse0x246ec70();
   input += synapse0x246ef70();
   input += synapse0x246efb0();
   input += synapse0x246f2b0();
   input += synapse0x246f2f0();
   input += synapse0x246f5f0();
   input += synapse0x246f630();
   input += synapse0x246f930();
   input += synapse0x246f970();
   input += synapse0x246fc70();
   input += synapse0x246fcb0();
   input += synapse0x246d7b0();
   input += synapse0x246d7f0();
   input += synapse0x247bac0();
   return input;
}

double NNfunction_b2b2::neuron0x247b820() {
   double input = input0x247b820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247bb00() {
   double input = 0.677199;
   input += synapse0x247be40();
   input += synapse0x247be80();
   input += synapse0x247bec0();
   input += synapse0x247bf00();
   input += synapse0x247bf40();
   input += synapse0x247bf80();
   input += synapse0x247bfc0();
   input += synapse0x247c000();
   input += synapse0x247c040();
   input += synapse0x247c080();
   input += synapse0x247c0c0();
   input += synapse0x247c100();
   input += synapse0x247c140();
   input += synapse0x247c180();
   input += synapse0x247c1c0();
   input += synapse0x247c200();
   input += synapse0x247bc90();
   input += synapse0x247bcd0();
   input += synapse0x247c350();
   input += synapse0x247c390();
   input += synapse0x247c3d0();
   input += synapse0x247c410();
   input += synapse0x247c450();
   input += synapse0x247c490();
   return input;
}

double NNfunction_b2b2::neuron0x247bb00() {
   double input = input0x247bb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247c4d0() {
   double input = -2.33107;
   input += synapse0x247c810();
   input += synapse0x247c850();
   input += synapse0x247c890();
   input += synapse0x247c8d0();
   input += synapse0x247c910();
   input += synapse0x247c950();
   input += synapse0x247c990();
   input += synapse0x247c9d0();
   input += synapse0x247ca10();
   input += synapse0x247ca50();
   input += synapse0x247ca90();
   input += synapse0x247cad0();
   input += synapse0x247cb10();
   input += synapse0x247cb50();
   input += synapse0x247cb90();
   input += synapse0x247cbd0();
   input += synapse0x247c660();
   input += synapse0x247c6a0();
   input += synapse0x247cd20();
   input += synapse0x247cd60();
   input += synapse0x247cda0();
   input += synapse0x247cde0();
   input += synapse0x247ce20();
   input += synapse0x247ce60();
   return input;
}

double NNfunction_b2b2::neuron0x247c4d0() {
   double input = input0x247c4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247cea0() {
   double input = -0.903332;
   input += synapse0x247d1e0();
   input += synapse0x247d220();
   input += synapse0x247d260();
   input += synapse0x247d2a0();
   input += synapse0x247d2e0();
   input += synapse0x247d320();
   input += synapse0x247d360();
   input += synapse0x247d3a0();
   input += synapse0x247d3e0();
   input += synapse0x247d420();
   input += synapse0x247d460();
   input += synapse0x247d4a0();
   input += synapse0x247d4e0();
   input += synapse0x247d520();
   input += synapse0x247d560();
   input += synapse0x247d5a0();
   input += synapse0x247d030();
   input += synapse0x247d070();
   input += synapse0x247d6f0();
   input += synapse0x247d730();
   input += synapse0x247d770();
   input += synapse0x247d7b0();
   input += synapse0x247d7f0();
   input += synapse0x247d830();
   return input;
}

double NNfunction_b2b2::neuron0x247cea0() {
   double input = input0x247cea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247d870() {
   double input = -1.20654;
   input += synapse0x247dbb0();
   input += synapse0x247dbf0();
   input += synapse0x247dc30();
   input += synapse0x247dc70();
   input += synapse0x247dcb0();
   input += synapse0x247dcf0();
   input += synapse0x247dd30();
   input += synapse0x247dd70();
   input += synapse0x247ddb0();
   input += synapse0x247ddf0();
   input += synapse0x247de30();
   input += synapse0x247de70();
   input += synapse0x247deb0();
   input += synapse0x247def0();
   input += synapse0x247df30();
   input += synapse0x247df70();
   input += synapse0x247da00();
   input += synapse0x247da40();
   input += synapse0x247e0c0();
   input += synapse0x247e100();
   input += synapse0x247e140();
   input += synapse0x247e180();
   input += synapse0x247e1c0();
   input += synapse0x247e200();
   return input;
}

double NNfunction_b2b2::neuron0x247d870() {
   double input = input0x247d870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247e240() {
   double input = -0.365977;
   input += synapse0x247e580();
   input += synapse0x247e5c0();
   input += synapse0x247e600();
   input += synapse0x247e640();
   input += synapse0x247e680();
   input += synapse0x247e6c0();
   input += synapse0x247e700();
   input += synapse0x247e740();
   input += synapse0x247e780();
   input += synapse0x2476940();
   input += synapse0x2476980();
   input += synapse0x24769c0();
   input += synapse0x2476a00();
   input += synapse0x2476a40();
   input += synapse0x2476a80();
   input += synapse0x2476ac0();
   input += synapse0x247e3d0();
   input += synapse0x247e410();
   input += synapse0x2476c10();
   input += synapse0x2476c50();
   input += synapse0x2476c90();
   input += synapse0x2476cd0();
   input += synapse0x2476d10();
   input += synapse0x2476d50();
   return input;
}

double NNfunction_b2b2::neuron0x247e240() {
   double input = input0x247e240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2476d90() {
   double input = 0.990334;
   input += synapse0x24770d0();
   input += synapse0x2477110();
   input += synapse0x2477150();
   input += synapse0x2477190();
   input += synapse0x24771d0();
   input += synapse0x2477210();
   input += synapse0x2477250();
   input += synapse0x2477290();
   input += synapse0x24772d0();
   input += synapse0x2477310();
   input += synapse0x2477350();
   input += synapse0x2477390();
   input += synapse0x24773d0();
   input += synapse0x2477410();
   input += synapse0x2477450();
   input += synapse0x2477490();
   input += synapse0x2476f20();
   input += synapse0x2476f60();
   input += synapse0x24775e0();
   input += synapse0x2477620();
   input += synapse0x2477660();
   input += synapse0x24776a0();
   input += synapse0x24776e0();
   input += synapse0x2477720();
   return input;
}

double NNfunction_b2b2::neuron0x2476d90() {
   double input = input0x2476d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2477760() {
   double input = 0.495524;
   input += synapse0x24778f0();
   input += synapse0x2480980();
   input += synapse0x24809c0();
   input += synapse0x2480a00();
   input += synapse0x2480a40();
   input += synapse0x2480a80();
   input += synapse0x2480ac0();
   input += synapse0x2480b00();
   input += synapse0x2480b40();
   input += synapse0x2480b80();
   input += synapse0x2480bc0();
   input += synapse0x2480c00();
   input += synapse0x2480c40();
   input += synapse0x2480c80();
   input += synapse0x2480cc0();
   input += synapse0x2480d00();
   input += synapse0x24807d0();
   input += synapse0x2480810();
   input += synapse0x2480e50();
   input += synapse0x2480e90();
   input += synapse0x2480ed0();
   input += synapse0x2480f10();
   input += synapse0x2480f50();
   input += synapse0x2480f90();
   return input;
}

double NNfunction_b2b2::neuron0x2477760() {
   double input = input0x2477760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2480fd0() {
   double input = 1.04982;
   input += synapse0x2481310();
   input += synapse0x2481350();
   input += synapse0x2481390();
   input += synapse0x24813d0();
   input += synapse0x2481410();
   input += synapse0x2481450();
   input += synapse0x2481490();
   input += synapse0x24814d0();
   input += synapse0x2481510();
   input += synapse0x2481550();
   input += synapse0x2481590();
   input += synapse0x24815d0();
   input += synapse0x2481610();
   input += synapse0x2481650();
   input += synapse0x2481690();
   input += synapse0x24816d0();
   input += synapse0x2481160();
   input += synapse0x24811a0();
   input += synapse0x2481820();
   input += synapse0x2481860();
   input += synapse0x24818a0();
   input += synapse0x24818e0();
   input += synapse0x2481920();
   input += synapse0x2481960();
   return input;
}

double NNfunction_b2b2::neuron0x2480fd0() {
   double input = input0x2480fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24819a0() {
   double input = 0.480504;
   input += synapse0x2481ce0();
   input += synapse0x2481d20();
   input += synapse0x2481d60();
   input += synapse0x2481da0();
   input += synapse0x2481de0();
   input += synapse0x2481e20();
   input += synapse0x2481e60();
   input += synapse0x2481ea0();
   input += synapse0x2481ee0();
   input += synapse0x2481f20();
   input += synapse0x2481f60();
   input += synapse0x2481fa0();
   input += synapse0x2481fe0();
   input += synapse0x2482020();
   input += synapse0x2482060();
   input += synapse0x24820a0();
   input += synapse0x2481b30();
   input += synapse0x2481b70();
   input += synapse0x24821f0();
   input += synapse0x2482230();
   input += synapse0x2482270();
   input += synapse0x24822b0();
   input += synapse0x24822f0();
   input += synapse0x2482330();
   return input;
}

double NNfunction_b2b2::neuron0x24819a0() {
   double input = input0x24819a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2482370() {
   double input = -0.525922;
   input += synapse0x24826b0();
   input += synapse0x24826f0();
   input += synapse0x2482730();
   input += synapse0x2482770();
   input += synapse0x24827b0();
   input += synapse0x24827f0();
   input += synapse0x2482830();
   input += synapse0x2482870();
   input += synapse0x24828b0();
   input += synapse0x24828f0();
   input += synapse0x2482930();
   input += synapse0x2482970();
   input += synapse0x24829b0();
   input += synapse0x24829f0();
   input += synapse0x2482a30();
   input += synapse0x2482a70();
   input += synapse0x2482500();
   input += synapse0x2482540();
   input += synapse0x2482bc0();
   input += synapse0x2482c00();
   input += synapse0x2482c40();
   input += synapse0x2482c80();
   input += synapse0x2482cc0();
   input += synapse0x2482d00();
   return input;
}

double NNfunction_b2b2::neuron0x2482370() {
   double input = input0x2482370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2482d40() {
   double input = -0.7892;
   input += synapse0x2483080();
   input += synapse0x24830c0();
   input += synapse0x2483100();
   input += synapse0x2483140();
   input += synapse0x2483180();
   input += synapse0x24831c0();
   input += synapse0x2483200();
   input += synapse0x2483240();
   input += synapse0x2483280();
   input += synapse0x24832c0();
   input += synapse0x2483300();
   input += synapse0x2483340();
   input += synapse0x2483380();
   input += synapse0x24833c0();
   input += synapse0x2483400();
   input += synapse0x2483440();
   input += synapse0x2482ed0();
   input += synapse0x2482f10();
   input += synapse0x2483590();
   input += synapse0x24835d0();
   input += synapse0x2483610();
   input += synapse0x2483650();
   input += synapse0x2483690();
   input += synapse0x24836d0();
   return input;
}

double NNfunction_b2b2::neuron0x2482d40() {
   double input = input0x2482d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2483710() {
   double input = 0.699147;
   input += synapse0x2483a50();
   input += synapse0x2483a90();
   input += synapse0x2483ad0();
   input += synapse0x2483b10();
   input += synapse0x2483b50();
   input += synapse0x2483b90();
   input += synapse0x2483bd0();
   input += synapse0x2483c10();
   input += synapse0x2483c50();
   input += synapse0x2483c90();
   input += synapse0x2483cd0();
   input += synapse0x2483d10();
   input += synapse0x2483d50();
   input += synapse0x2483d90();
   input += synapse0x2483dd0();
   input += synapse0x2483e10();
   input += synapse0x24838a0();
   input += synapse0x24838e0();
   input += synapse0x2483f60();
   input += synapse0x2483fa0();
   input += synapse0x2483fe0();
   input += synapse0x2484020();
   input += synapse0x2484060();
   input += synapse0x24840a0();
   return input;
}

double NNfunction_b2b2::neuron0x2483710() {
   double input = input0x2483710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24840e0() {
   double input = 0.492848;
   input += synapse0x2484420();
   input += synapse0x2484460();
   input += synapse0x24844a0();
   input += synapse0x24844e0();
   input += synapse0x2484520();
   input += synapse0x2484560();
   input += synapse0x24845a0();
   input += synapse0x24845e0();
   input += synapse0x2484620();
   input += synapse0x2484660();
   input += synapse0x24846a0();
   input += synapse0x24846e0();
   input += synapse0x2484720();
   input += synapse0x2484760();
   input += synapse0x24847a0();
   input += synapse0x24847e0();
   input += synapse0x2484270();
   input += synapse0x24842b0();
   input += synapse0x2484930();
   input += synapse0x2484970();
   input += synapse0x24849b0();
   input += synapse0x24849f0();
   input += synapse0x2484a30();
   input += synapse0x2484a70();
   return input;
}

double NNfunction_b2b2::neuron0x24840e0() {
   double input = input0x24840e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2484ab0() {
   double input = -0.551542;
   input += synapse0x2484df0();
   input += synapse0x2484e30();
   input += synapse0x2484e70();
   input += synapse0x2484eb0();
   input += synapse0x2484ef0();
   input += synapse0x2484f30();
   input += synapse0x2484f70();
   input += synapse0x2484fb0();
   input += synapse0x2484ff0();
   input += synapse0x2485030();
   input += synapse0x2485070();
   input += synapse0x24850b0();
   input += synapse0x24850f0();
   input += synapse0x2485130();
   input += synapse0x2485170();
   input += synapse0x24851b0();
   input += synapse0x2484c40();
   input += synapse0x2484c80();
   input += synapse0x2485300();
   input += synapse0x2485340();
   input += synapse0x2485380();
   input += synapse0x24853c0();
   input += synapse0x2485400();
   input += synapse0x2485440();
   return input;
}

double NNfunction_b2b2::neuron0x2484ab0() {
   double input = input0x2484ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2485480() {
   double input = 1.0868;
   input += synapse0x24857c0();
   input += synapse0x2479d90();
   input += synapse0x2479dd0();
   input += synapse0x2479e10();
   input += synapse0x247a060();
   input += synapse0x247a0a0();
   input += synapse0x247a0e0();
   input += synapse0x247a330();
   input += synapse0x247a370();
   input += synapse0x247a5c0();
   input += synapse0x247a600();
   input += synapse0x247a640();
   input += synapse0x247a890();
   input += synapse0x247a8d0();
   input += synapse0x247ab20();
   input += synapse0x247ab60();
   input += synapse0x2485610();
   input += synapse0x2485650();
   input += synapse0x247acb0();
   input += synapse0x247b1c0();
   input += synapse0x247b200();
   input += synapse0x247b240();
   input += synapse0x247b490();
   input += synapse0x247b4d0();
   return input;
}

double NNfunction_b2b2::neuron0x2485480() {
   double input = input0x2485480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247b510() {
   double input = 2.07336;
   input += synapse0x247ad80();
   input += synapse0x247adc0();
   input += synapse0x247ae00();
   input += synapse0x247ae40();
   input += synapse0x247b7c0();
   input += synapse0x2487b10();
   input += synapse0x2487b50();
   input += synapse0x2487b90();
   input += synapse0x2487bd0();
   input += synapse0x2487c10();
   input += synapse0x2487c50();
   input += synapse0x2487c90();
   input += synapse0x2487cd0();
   input += synapse0x2487d10();
   input += synapse0x2487d50();
   input += synapse0x2487d90();
   input += synapse0x247b6a0();
   input += synapse0x247b6e0();
   input += synapse0x2487ee0();
   input += synapse0x2487f20();
   input += synapse0x2487f60();
   input += synapse0x2487fa0();
   input += synapse0x2487fe0();
   input += synapse0x2488020();
   return input;
}

double NNfunction_b2b2::neuron0x247b510() {
   double input = input0x247b510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2488060() {
   double input = 0.673622;
   input += synapse0x24883a0();
   input += synapse0x24883e0();
   input += synapse0x2488420();
   input += synapse0x2488460();
   input += synapse0x24884a0();
   input += synapse0x24884e0();
   input += synapse0x2488520();
   input += synapse0x2488560();
   input += synapse0x24885a0();
   input += synapse0x24885e0();
   input += synapse0x2488620();
   input += synapse0x2488660();
   input += synapse0x24886a0();
   input += synapse0x24886e0();
   input += synapse0x2488720();
   input += synapse0x2488760();
   input += synapse0x24881f0();
   input += synapse0x2488230();
   input += synapse0x24888b0();
   input += synapse0x24888f0();
   input += synapse0x2488930();
   input += synapse0x2488970();
   input += synapse0x24889b0();
   input += synapse0x24889f0();
   return input;
}

double NNfunction_b2b2::neuron0x2488060() {
   double input = input0x2488060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2488a30() {
   double input = 0.181089;
   input += synapse0x2488d70();
   input += synapse0x2488db0();
   input += synapse0x2488df0();
   input += synapse0x2488e30();
   input += synapse0x2488e70();
   input += synapse0x2488eb0();
   input += synapse0x2488ef0();
   input += synapse0x2488f30();
   input += synapse0x2488f70();
   input += synapse0x2488fb0();
   input += synapse0x2488ff0();
   input += synapse0x2489030();
   input += synapse0x2489070();
   input += synapse0x24890b0();
   input += synapse0x24890f0();
   input += synapse0x2489130();
   input += synapse0x2488bc0();
   input += synapse0x2488c00();
   input += synapse0x2489280();
   input += synapse0x24892c0();
   input += synapse0x2489300();
   input += synapse0x2489340();
   input += synapse0x2489380();
   input += synapse0x24893c0();
   return input;
}

double NNfunction_b2b2::neuron0x2488a30() {
   double input = input0x2488a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2489400() {
   double input = 0.541447;
   input += synapse0x2489740();
   input += synapse0x2489780();
   input += synapse0x24897c0();
   input += synapse0x2489800();
   input += synapse0x2489840();
   input += synapse0x2489880();
   input += synapse0x24898c0();
   input += synapse0x2489900();
   input += synapse0x2489940();
   input += synapse0x2489980();
   input += synapse0x24899c0();
   input += synapse0x2489a00();
   input += synapse0x2489a40();
   input += synapse0x2489a80();
   input += synapse0x2489ac0();
   input += synapse0x2489b00();
   input += synapse0x2489590();
   input += synapse0x24895d0();
   input += synapse0x2489c50();
   input += synapse0x2489c90();
   input += synapse0x2489cd0();
   input += synapse0x2489d10();
   input += synapse0x2489d50();
   input += synapse0x2489d90();
   return input;
}

double NNfunction_b2b2::neuron0x2489400() {
   double input = input0x2489400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2489dd0() {
   double input = -1.873;
   input += synapse0x248a110();
   input += synapse0x248a150();
   input += synapse0x248a190();
   input += synapse0x248a1d0();
   input += synapse0x248a210();
   input += synapse0x248a250();
   input += synapse0x248a290();
   input += synapse0x248a2d0();
   input += synapse0x248a310();
   input += synapse0x248a350();
   input += synapse0x248a390();
   input += synapse0x248a3d0();
   input += synapse0x248a410();
   input += synapse0x248a450();
   input += synapse0x248a490();
   input += synapse0x248a4d0();
   input += synapse0x2489f60();
   input += synapse0x2489fa0();
   input += synapse0x248a620();
   input += synapse0x248a660();
   input += synapse0x248a6a0();
   input += synapse0x248a6e0();
   input += synapse0x248a720();
   input += synapse0x248a760();
   return input;
}

double NNfunction_b2b2::neuron0x2489dd0() {
   double input = input0x2489dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x248a7a0() {
   double input = 1.49277;
   input += synapse0x248aae0();
   input += synapse0x248ab20();
   input += synapse0x248ab60();
   input += synapse0x248aba0();
   input += synapse0x248abe0();
   input += synapse0x248ac20();
   input += synapse0x248ac60();
   input += synapse0x248aca0();
   input += synapse0x248ace0();
   input += synapse0x248ad20();
   input += synapse0x248ad60();
   input += synapse0x248ada0();
   input += synapse0x248ade0();
   input += synapse0x248ae20();
   input += synapse0x248ae60();
   input += synapse0x248aea0();
   input += synapse0x248a930();
   input += synapse0x248a970();
   input += synapse0x248aff0();
   input += synapse0x248b030();
   input += synapse0x248b070();
   input += synapse0x248b0b0();
   input += synapse0x248b0f0();
   input += synapse0x248b130();
   return input;
}

double NNfunction_b2b2::neuron0x248a7a0() {
   double input = input0x248a7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x248b170() {
   double input = 0.833386;
   input += synapse0x248b4b0();
   input += synapse0x248b4f0();
   input += synapse0x248b530();
   input += synapse0x248b570();
   input += synapse0x248b5b0();
   input += synapse0x248b5f0();
   input += synapse0x248b630();
   input += synapse0x248b670();
   input += synapse0x248b6b0();
   input += synapse0x248b6f0();
   input += synapse0x248b730();
   input += synapse0x248b770();
   input += synapse0x248b7b0();
   input += synapse0x248b7f0();
   input += synapse0x248b830();
   input += synapse0x248b870();
   input += synapse0x248b300();
   input += synapse0x248b340();
   input += synapse0x248b9c0();
   input += synapse0x248ba00();
   input += synapse0x248ba40();
   input += synapse0x248ba80();
   input += synapse0x248bac0();
   input += synapse0x248bb00();
   return input;
}

double NNfunction_b2b2::neuron0x248b170() {
   double input = input0x248b170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x248bb40() {
   double input = 0.945315;
   input += synapse0x248be80();
   input += synapse0x248bec0();
   input += synapse0x248bf00();
   input += synapse0x248bf40();
   input += synapse0x248bf80();
   input += synapse0x248bfc0();
   input += synapse0x248c000();
   input += synapse0x248c040();
   input += synapse0x248c080();
   input += synapse0x248c0c0();
   input += synapse0x248c100();
   input += synapse0x248c140();
   input += synapse0x248c180();
   input += synapse0x248c1c0();
   input += synapse0x248c200();
   input += synapse0x248c240();
   input += synapse0x248bcd0();
   input += synapse0x248bd10();
   input += synapse0x248c390();
   input += synapse0x248c3d0();
   input += synapse0x248c410();
   input += synapse0x248c450();
   input += synapse0x248c490();
   input += synapse0x248c4d0();
   return input;
}

double NNfunction_b2b2::neuron0x248bb40() {
   double input = input0x248bb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x248c510() {
   double input = 2.3526;
   input += synapse0x2474f80();
   input += synapse0x2474fc0();
   input += synapse0x2475000();
   input += synapse0x2475040();
   input += synapse0x2475080();
   input += synapse0x24750c0();
   input += synapse0x2475100();
   input += synapse0x2475140();
   input += synapse0x248cc60();
   input += synapse0x248cca0();
   input += synapse0x248cce0();
   input += synapse0x248cd20();
   input += synapse0x248cd60();
   input += synapse0x248cda0();
   input += synapse0x248cde0();
   input += synapse0x248ce20();
   input += synapse0x248c6a0();
   input += synapse0x248c6e0();
   input += synapse0x248cf70();
   input += synapse0x248cfb0();
   input += synapse0x248cff0();
   input += synapse0x248d030();
   input += synapse0x248d070();
   input += synapse0x248d0b0();
   return input;
}

double NNfunction_b2b2::neuron0x248c510() {
   double input = input0x248c510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x248d0f0() {
   double input = 0.751474;
   input += synapse0x248d430();
   input += synapse0x248d470();
   input += synapse0x248d4b0();
   input += synapse0x248d4f0();
   input += synapse0x248d530();
   input += synapse0x248d570();
   input += synapse0x248d5b0();
   input += synapse0x248d5f0();
   input += synapse0x248d630();
   input += synapse0x248d670();
   input += synapse0x248d6b0();
   input += synapse0x248d6f0();
   input += synapse0x248d730();
   input += synapse0x248d770();
   input += synapse0x248d7b0();
   input += synapse0x248d7f0();
   input += synapse0x248d280();
   input += synapse0x248d2c0();
   input += synapse0x248d940();
   input += synapse0x248d980();
   input += synapse0x248d9c0();
   input += synapse0x248da00();
   input += synapse0x248da40();
   input += synapse0x248da80();
   return input;
}

double NNfunction_b2b2::neuron0x248d0f0() {
   double input = input0x248d0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x248dac0() {
   double input = 0.388074;
   input += synapse0x248de00();
   input += synapse0x248de40();
   input += synapse0x248de80();
   input += synapse0x248dec0();
   input += synapse0x248df00();
   input += synapse0x248df40();
   input += synapse0x248df80();
   input += synapse0x248dfc0();
   input += synapse0x248e000();
   input += synapse0x248e040();
   input += synapse0x248e080();
   input += synapse0x248e0c0();
   input += synapse0x248e100();
   input += synapse0x248e140();
   input += synapse0x248e180();
   input += synapse0x248e1c0();
   input += synapse0x248dc50();
   input += synapse0x248dc90();
   input += synapse0x247e7c0();
   input += synapse0x247e800();
   input += synapse0x247e840();
   input += synapse0x247e880();
   input += synapse0x247e8c0();
   input += synapse0x247e900();
   return input;
}

double NNfunction_b2b2::neuron0x248dac0() {
   double input = input0x248dac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247e940() {
   double input = -2.425;
   input += synapse0x247ec80();
   input += synapse0x247ecc0();
   input += synapse0x247ed00();
   input += synapse0x247ed40();
   input += synapse0x247ed80();
   input += synapse0x247edc0();
   input += synapse0x247ee00();
   input += synapse0x247ee40();
   input += synapse0x247ee80();
   input += synapse0x247eec0();
   input += synapse0x247ef00();
   input += synapse0x247ef40();
   input += synapse0x247ef80();
   input += synapse0x247efc0();
   input += synapse0x247f000();
   input += synapse0x247f040();
   input += synapse0x247ead0();
   input += synapse0x247eb10();
   input += synapse0x247f190();
   input += synapse0x247f1d0();
   input += synapse0x247f210();
   input += synapse0x247f250();
   input += synapse0x247f290();
   input += synapse0x247f2d0();
   return input;
}

double NNfunction_b2b2::neuron0x247e940() {
   double input = input0x247e940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247f310() {
   double input = 0.87053;
   input += synapse0x247f650();
   input += synapse0x247f690();
   input += synapse0x247f6d0();
   input += synapse0x247f710();
   input += synapse0x247f750();
   input += synapse0x247f790();
   input += synapse0x247f7d0();
   input += synapse0x247f810();
   input += synapse0x247f850();
   input += synapse0x247f890();
   input += synapse0x247f8d0();
   input += synapse0x247f910();
   input += synapse0x247f950();
   input += synapse0x247f990();
   input += synapse0x247f9d0();
   input += synapse0x247fa10();
   input += synapse0x247f4a0();
   input += synapse0x247f4e0();
   input += synapse0x247fb60();
   input += synapse0x247fba0();
   input += synapse0x247fbe0();
   input += synapse0x247fc20();
   input += synapse0x247fc60();
   input += synapse0x247fca0();
   return input;
}

double NNfunction_b2b2::neuron0x247f310() {
   double input = input0x247f310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x247fce0() {
   double input = -0.870418;
   input += synapse0x2480020();
   input += synapse0x2480060();
   input += synapse0x24800a0();
   input += synapse0x24800e0();
   input += synapse0x2480120();
   input += synapse0x2480160();
   input += synapse0x24801a0();
   input += synapse0x24801e0();
   input += synapse0x2480220();
   input += synapse0x2480260();
   input += synapse0x24802a0();
   input += synapse0x24802e0();
   input += synapse0x2480320();
   input += synapse0x2480360();
   input += synapse0x24803a0();
   input += synapse0x24803e0();
   input += synapse0x247fe70();
   input += synapse0x247feb0();
   input += synapse0x2480530();
   input += synapse0x2480570();
   input += synapse0x24805b0();
   input += synapse0x24805f0();
   input += synapse0x2480630();
   input += synapse0x2480670();
   return input;
}

double NNfunction_b2b2::neuron0x247fce0() {
   double input = input0x247fce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2492320() {
   double input = 0.29327;
   input += synapse0x2492540();
   input += synapse0x2492580();
   input += synapse0x24925c0();
   input += synapse0x2492600();
   input += synapse0x2492640();
   input += synapse0x2492680();
   input += synapse0x24926c0();
   input += synapse0x2492700();
   input += synapse0x2492740();
   input += synapse0x2492780();
   input += synapse0x24927c0();
   input += synapse0x2492800();
   input += synapse0x2492840();
   input += synapse0x2492880();
   input += synapse0x24928c0();
   input += synapse0x2492900();
   input += synapse0x24806b0();
   input += synapse0x24806f0();
   input += synapse0x2492a50();
   input += synapse0x2492a90();
   input += synapse0x2492ad0();
   input += synapse0x2492b10();
   input += synapse0x2492b50();
   input += synapse0x2492b90();
   return input;
}

double NNfunction_b2b2::neuron0x2492320() {
   double input = input0x2492320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2492bd0() {
   double input = 1.61278;
   input += synapse0x2492f10();
   input += synapse0x2492f50();
   input += synapse0x2492f90();
   input += synapse0x2492fd0();
   input += synapse0x2493010();
   input += synapse0x2493050();
   input += synapse0x2493090();
   input += synapse0x24930d0();
   input += synapse0x2493110();
   input += synapse0x2493150();
   input += synapse0x2493190();
   input += synapse0x24931d0();
   input += synapse0x2493210();
   input += synapse0x2493250();
   input += synapse0x2493290();
   input += synapse0x24932d0();
   input += synapse0x2492d60();
   input += synapse0x2492da0();
   input += synapse0x2493420();
   input += synapse0x2493460();
   input += synapse0x24934a0();
   input += synapse0x24934e0();
   input += synapse0x2493520();
   input += synapse0x2493560();
   return input;
}

double NNfunction_b2b2::neuron0x2492bd0() {
   double input = input0x2492bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x24935a0() {
   double input = 0.897893;
   input += synapse0x24938e0();
   input += synapse0x2493920();
   input += synapse0x2493960();
   input += synapse0x24939a0();
   input += synapse0x24939e0();
   input += synapse0x2493a20();
   input += synapse0x2493a60();
   input += synapse0x2493aa0();
   input += synapse0x2493ae0();
   input += synapse0x2493b20();
   input += synapse0x2493b60();
   input += synapse0x2493ba0();
   input += synapse0x2493be0();
   input += synapse0x2493c20();
   input += synapse0x2493c60();
   input += synapse0x2493ca0();
   input += synapse0x2493730();
   input += synapse0x2493770();
   input += synapse0x2493df0();
   input += synapse0x2493e30();
   input += synapse0x2493e70();
   input += synapse0x2493eb0();
   input += synapse0x2493ef0();
   input += synapse0x2493f30();
   return input;
}

double NNfunction_b2b2::neuron0x24935a0() {
   double input = input0x24935a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x2493f70() {
   double input = -0.799989;
   input += synapse0x24942b0();
   input += synapse0x24942f0();
   input += synapse0x2494330();
   input += synapse0x2494370();
   input += synapse0x24943b0();
   input += synapse0x24943f0();
   input += synapse0x2494430();
   input += synapse0x2494470();
   input += synapse0x24944b0();
   input += synapse0x24944f0();
   input += synapse0x2494530();
   input += synapse0x2494570();
   input += synapse0x24945b0();
   input += synapse0x24945f0();
   input += synapse0x2494630();
   input += synapse0x2494670();
   input += synapse0x2494100();
   input += synapse0x2494140();
   input += synapse0x24947c0();
   input += synapse0x2494800();
   input += synapse0x2494840();
   input += synapse0x2494880();
   input += synapse0x24948c0();
   input += synapse0x2494900();
   return input;
}

double NNfunction_b2b2::neuron0x2493f70() {
   double input = input0x2493f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x249b170() {
   double input = 0.0501854;
   input += synapse0x2470ea0();
   input += synapse0x2470ee0();
   input += synapse0x24723b0();
   input += synapse0x24723f0();
   input += synapse0x2472d80();
   input += synapse0x2472dc0();
   input += synapse0x2473b50();
   input += synapse0x2473b90();
   input += synapse0x2474520();
   input += synapse0x2474560();
   input += synapse0x2474ef0();
   input += synapse0x2474f30();
   input += synapse0x24759d0();
   input += synapse0x2475a10();
   input += synapse0x24763a0();
   input += synapse0x24763e0();
   input += synapse0x2473480();
   input += synapse0x24734c0();
   input += synapse0x2477f50();
   input += synapse0x2477f90();
   input += synapse0x2478920();
   input += synapse0x2478960();
   input += synapse0x24792f0();
   input += synapse0x2479330();
   input += synapse0x2479cc0();
   input += synapse0x2479d00();
   input += synapse0x246de30();
   input += synapse0x246de70();
   input += synapse0x247bdb0();
   input += synapse0x247bdf0();
   input += synapse0x247c780();
   input += synapse0x247c7c0();
   input += synapse0x247d150();
   input += synapse0x247d190();
   input += synapse0x247db20();
   input += synapse0x247db60();
   input += synapse0x247e4f0();
   input += synapse0x247e530();
   input += synapse0x2477040();
   input += synapse0x2477080();
   input += synapse0x24808f0();
   input += synapse0x2480930();
   input += synapse0x2481280();
   input += synapse0x24812c0();
   input += synapse0x2481c50();
   input += synapse0x2481c90();
   input += synapse0x2482620();
   input += synapse0x2482660();
   input += synapse0x2482ff0();
   input += synapse0x2483030();
   return input;
}

double NNfunction_b2b2::neuron0x249b170() {
   double input = input0x249b170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x249b510() {
   double input = -0.4633;
   input += synapse0x2485730();
   input += synapse0x2485770();
   input += synapse0x247acf0();
   input += synapse0x247ad30();
   input += synapse0x2488310();
   input += synapse0x2488350();
   input += synapse0x2488ce0();
   input += synapse0x2488d20();
   input += synapse0x24896b0();
   input += synapse0x24896f0();
   input += synapse0x248a080();
   input += synapse0x248a0c0();
   input += synapse0x248aa50();
   input += synapse0x248aa90();
   input += synapse0x248b420();
   input += synapse0x248b460();
   input += synapse0x248bdf0();
   input += synapse0x248be30();
   input += synapse0x248c7c0();
   input += synapse0x248c800();
   input += synapse0x248d3a0();
   input += synapse0x248d3e0();
   input += synapse0x248dd70();
   input += synapse0x248ddb0();
   input += synapse0x247ebf0();
   input += synapse0x247ec30();
   input += synapse0x247f5c0();
   input += synapse0x247f600();
   input += synapse0x247ff90();
   input += synapse0x247ffd0();
   input += synapse0x24924b0();
   input += synapse0x24924f0();
   input += synapse0x2492e80();
   input += synapse0x2492ec0();
   input += synapse0x2493850();
   input += synapse0x2493890();
   input += synapse0x2494220();
   input += synapse0x2494260();
   input += synapse0x2470110();
   input += synapse0x2470150();
   input += synapse0x24839c0();
   input += synapse0x2483a00();
   input += synapse0x2494940();
   input += synapse0x2494980();
   input += synapse0x24949c0();
   input += synapse0x2494a00();
   input += synapse0x249b8b0();
   input += synapse0x249b8f0();
   input += synapse0x249b930();
   input += synapse0x249b970();
   return input;
}

double NNfunction_b2b2::neuron0x249b510() {
   double input = input0x249b510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x249b9b0() {
   double input = -0.494146;
   input += synapse0x249bcf0();
   input += synapse0x249bd30();
   input += synapse0x249bd70();
   input += synapse0x249bdb0();
   input += synapse0x249bdf0();
   input += synapse0x249be30();
   input += synapse0x249be70();
   input += synapse0x249beb0();
   input += synapse0x249bef0();
   input += synapse0x249bf30();
   input += synapse0x249bf70();
   input += synapse0x249bfb0();
   input += synapse0x249bff0();
   input += synapse0x249c030();
   input += synapse0x249c070();
   input += synapse0x249c0b0();
   input += synapse0x249bb40();
   input += synapse0x249bb80();
   input += synapse0x249c200();
   input += synapse0x249c240();
   input += synapse0x249c280();
   input += synapse0x249c2c0();
   input += synapse0x249c300();
   input += synapse0x249c340();
   input += synapse0x249c380();
   input += synapse0x249c3c0();
   input += synapse0x249c400();
   input += synapse0x249c440();
   input += synapse0x249c480();
   input += synapse0x249c4c0();
   input += synapse0x249c500();
   input += synapse0x249c540();
   input += synapse0x249c0f0();
   input += synapse0x249c130();
   input += synapse0x249c170();
   input += synapse0x249c1b0();
   input += synapse0x249c790();
   input += synapse0x249c7d0();
   input += synapse0x249c810();
   input += synapse0x249c850();
   input += synapse0x249c890();
   input += synapse0x249c8d0();
   input += synapse0x249c910();
   input += synapse0x249c950();
   input += synapse0x249c990();
   input += synapse0x249c9d0();
   input += synapse0x249ca10();
   input += synapse0x249ca50();
   input += synapse0x249ca90();
   input += synapse0x249cad0();
   return input;
}

double NNfunction_b2b2::neuron0x249b9b0() {
   double input = input0x249b9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x249cb10() {
   double input = 0.451529;
   input += synapse0x249ce50();
   input += synapse0x249ce90();
   input += synapse0x249ced0();
   input += synapse0x249cf10();
   input += synapse0x249cf50();
   input += synapse0x249cf90();
   input += synapse0x249cfd0();
   input += synapse0x249d010();
   input += synapse0x249d050();
   input += synapse0x249d090();
   input += synapse0x249d0d0();
   input += synapse0x249d110();
   input += synapse0x249d150();
   input += synapse0x249d190();
   input += synapse0x249d1d0();
   input += synapse0x249d210();
   input += synapse0x249cca0();
   input += synapse0x249cce0();
   input += synapse0x249d360();
   input += synapse0x249d3a0();
   input += synapse0x249d3e0();
   input += synapse0x249d420();
   input += synapse0x249d460();
   input += synapse0x249d4a0();
   input += synapse0x249d4e0();
   input += synapse0x249d520();
   input += synapse0x249d560();
   input += synapse0x249d5a0();
   input += synapse0x249d5e0();
   input += synapse0x249d620();
   input += synapse0x249d660();
   input += synapse0x249d6a0();
   input += synapse0x249d250();
   input += synapse0x249d290();
   input += synapse0x249d2d0();
   input += synapse0x249d310();
   input += synapse0x249d8f0();
   input += synapse0x249d930();
   input += synapse0x249d970();
   input += synapse0x249d9b0();
   input += synapse0x249d9f0();
   input += synapse0x249da30();
   input += synapse0x249da70();
   input += synapse0x249dab0();
   input += synapse0x249daf0();
   input += synapse0x249db30();
   input += synapse0x249db70();
   input += synapse0x249dbb0();
   input += synapse0x249dbf0();
   input += synapse0x249dc30();
   return input;
}

double NNfunction_b2b2::neuron0x249cb10() {
   double input = input0x249cb10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x249dc70() {
   double input = 0.414791;
   input += synapse0x249dfb0();
   input += synapse0x249dff0();
   input += synapse0x249e030();
   input += synapse0x249e070();
   input += synapse0x249e0b0();
   input += synapse0x249e0f0();
   input += synapse0x249e130();
   input += synapse0x249e170();
   input += synapse0x249e1b0();
   input += synapse0x249e1f0();
   input += synapse0x249e230();
   input += synapse0x249e270();
   input += synapse0x249e2b0();
   input += synapse0x249e2f0();
   input += synapse0x249e330();
   input += synapse0x249e370();
   input += synapse0x249de00();
   input += synapse0x249de40();
   input += synapse0x249e4c0();
   input += synapse0x249e500();
   input += synapse0x249e540();
   input += synapse0x249e580();
   input += synapse0x249e5c0();
   input += synapse0x249e600();
   input += synapse0x249e640();
   input += synapse0x249e680();
   input += synapse0x249e6c0();
   input += synapse0x249e700();
   input += synapse0x249e740();
   input += synapse0x249e780();
   input += synapse0x249e7c0();
   input += synapse0x249e800();
   input += synapse0x249e3b0();
   input += synapse0x249e3f0();
   input += synapse0x249e430();
   input += synapse0x249e470();
   input += synapse0x249ea50();
   input += synapse0x249ea90();
   input += synapse0x249ead0();
   input += synapse0x249eb10();
   input += synapse0x249eb50();
   input += synapse0x249eb90();
   input += synapse0x249ebd0();
   input += synapse0x249ec10();
   input += synapse0x249ec50();
   input += synapse0x249ec90();
   input += synapse0x249ecd0();
   input += synapse0x249ed10();
   input += synapse0x249ed50();
   input += synapse0x249ed90();
   return input;
}

double NNfunction_b2b2::neuron0x249dc70() {
   double input = input0x249dc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_b2b2::input0x249edd0() {
   double input = 0.649283;
   input += synapse0x246feb0();
   input += synapse0x249eff0();
   input += synapse0x249f030();
   input += synapse0x249f070();
   input += synapse0x249f0b0();
   return input;
}

double NNfunction_b2b2::neuron0x249edd0() {
   double input = input0x249edd0();
   return (input * 1)+0;
}

double NNfunction_b2b2::synapse0x222ad00() {
   return (neuron0x246ae90()*0.0948793);
}

double NNfunction_b2b2::synapse0x246ad50() {
   return (neuron0x246b1d0()*-0.00884828);
}

double NNfunction_b2b2::synapse0x246ad90() {
   return (neuron0x246b510()*-0.0633441);
}

double NNfunction_b2b2::synapse0x24701a0() {
   return (neuron0x246b850()*-0.0129422);
}

double NNfunction_b2b2::synapse0x24701e0() {
   return (neuron0x246bb90()*0.027179);
}

double NNfunction_b2b2::synapse0x2470220() {
   return (neuron0x246bed0()*-0.0416413);
}

double NNfunction_b2b2::synapse0x2470260() {
   return (neuron0x246c210()*0.0411548);
}

double NNfunction_b2b2::synapse0x24702a0() {
   return (neuron0x246c550()*0.00381666);
}

double NNfunction_b2b2::synapse0x24702e0() {
   return (neuron0x246c890()*0.00859256);
}

double NNfunction_b2b2::synapse0x2470320() {
   return (neuron0x246cbd0()*0.0170173);
}

double NNfunction_b2b2::synapse0x2470360() {
   return (neuron0x246cf10()*0.00149039);
}

double NNfunction_b2b2::synapse0x24703a0() {
   return (neuron0x246d250()*-0.00892567);
}

double NNfunction_b2b2::synapse0x24703e0() {
   return (neuron0x246d590()*0.00444422);
}

double NNfunction_b2b2::synapse0x2470420() {
   return (neuron0x246d8d0()*3.15825);
}

double NNfunction_b2b2::synapse0x2470460() {
   return (neuron0x246dc10()*-0.000402342);
}

double NNfunction_b2b2::synapse0x24704a0() {
   return (neuron0x246df50()*0.0166656);
}

double NNfunction_b2b2::synapse0x246acc0() {
   return (neuron0x246e290()*0.0529316);
}

double NNfunction_b2b2::synapse0x246ad00() {
   return (neuron0x246e7f0()*0.0108468);
}

double NNfunction_b2b2::synapse0x221c560() {
   return (neuron0x246ea10()*0.000941022);
}

double NNfunction_b2b2::synapse0x221c5a0() {
   return (neuron0x246ed50()*-4.09511);
}

double NNfunction_b2b2::synapse0x2470700() {
   return (neuron0x246f090()*-0.00640373);
}

double NNfunction_b2b2::synapse0x2470740() {
   return (neuron0x246f3d0()*-0.0335098);
}

double NNfunction_b2b2::synapse0x2470780() {
   return (neuron0x246f710()*0.0113129);
}

double NNfunction_b2b2::synapse0x24707c0() {
   return (neuron0x246fa50()*-0.249872);
}

double NNfunction_b2b2::synapse0x2470b40() {
   return (neuron0x246ae90()*0.782389);
}

double NNfunction_b2b2::synapse0x2470b80() {
   return (neuron0x246b1d0()*-0.0481341);
}

double NNfunction_b2b2::synapse0x2470bc0() {
   return (neuron0x246b510()*-0.0560389);
}

double NNfunction_b2b2::synapse0x2470c00() {
   return (neuron0x246b850()*0.00260334);
}

double NNfunction_b2b2::synapse0x2470c40() {
   return (neuron0x246bb90()*-0.408889);
}

double NNfunction_b2b2::synapse0x2470c80() {
   return (neuron0x246bed0()*-0.0122246);
}

double NNfunction_b2b2::synapse0x2470cc0() {
   return (neuron0x246c210()*0.0441277);
}

double NNfunction_b2b2::synapse0x2470d00() {
   return (neuron0x246c550()*-1.13444e-05);
}

double NNfunction_b2b2::synapse0x2470d40() {
   return (neuron0x246c890()*-0.0154989);
}

double NNfunction_b2b2::synapse0x24705f0() {
   return (neuron0x246cbd0()*0.0435408);
}

double NNfunction_b2b2::synapse0x2470630() {
   return (neuron0x246cf10()*0.0516532);
}

double NNfunction_b2b2::synapse0x2470670() {
   return (neuron0x246d250()*0.0418644);
}

double NNfunction_b2b2::synapse0x24706b0() {
   return (neuron0x246d590()*-0.00785599);
}

double NNfunction_b2b2::synapse0x2470f90() {
   return (neuron0x246d8d0()*-0.0793029);
}

double NNfunction_b2b2::synapse0x2470fd0() {
   return (neuron0x246dc10()*0.0570656);
}

double NNfunction_b2b2::synapse0x2471010() {
   return (neuron0x246df50()*0.0152041);
}

double NNfunction_b2b2::synapse0x2470990() {
   return (neuron0x246e290()*0.00913029);
}

double NNfunction_b2b2::synapse0x24709d0() {
   return (neuron0x246e7f0()*0.0112125);
}

double NNfunction_b2b2::synapse0x2471160() {
   return (neuron0x246ea10()*-0.00483083);
}

double NNfunction_b2b2::synapse0x24711a0() {
   return (neuron0x246ed50()*0.186311);
}

double NNfunction_b2b2::synapse0x24711e0() {
   return (neuron0x246f090()*-0.014009);
}

double NNfunction_b2b2::synapse0x2471220() {
   return (neuron0x246f3d0()*0.833884);
}

double NNfunction_b2b2::synapse0x2471260() {
   return (neuron0x246f710()*-0.0327451);
}

double NNfunction_b2b2::synapse0x24712a0() {
   return (neuron0x246fa50()*0.129821);
}

double NNfunction_b2b2::synapse0x2471620() {
   return (neuron0x246ae90()*-0.247991);
}

double NNfunction_b2b2::synapse0x2471660() {
   return (neuron0x246b1d0()*-0.00798311);
}

double NNfunction_b2b2::synapse0x24716a0() {
   return (neuron0x246b510()*0.0291923);
}

double NNfunction_b2b2::synapse0x24716e0() {
   return (neuron0x246b850()*1.57763);
}

double NNfunction_b2b2::synapse0x2471720() {
   return (neuron0x246bb90()*-0.0109826);
}

double NNfunction_b2b2::synapse0x2471760() {
   return (neuron0x246bed0()*-0.0208286);
}

double NNfunction_b2b2::synapse0x24717a0() {
   return (neuron0x246c210()*-0.0188587);
}

double NNfunction_b2b2::synapse0x24717e0() {
   return (neuron0x246c550()*0.00517619);
}

double NNfunction_b2b2::synapse0x2471820() {
   return (neuron0x246c890()*0.00566774);
}

double NNfunction_b2b2::synapse0x2471860() {
   return (neuron0x246cbd0()*-0.00830806);
}

double NNfunction_b2b2::synapse0x24718a0() {
   return (neuron0x246cf10()*-0.00469706);
}

double NNfunction_b2b2::synapse0x24718e0() {
   return (neuron0x246d250()*-0.040924);
}

double NNfunction_b2b2::synapse0x2471920() {
   return (neuron0x246d590()*0.000864076);
}

double NNfunction_b2b2::synapse0x2471960() {
   return (neuron0x246d8d0()*0.441856);
}

double NNfunction_b2b2::synapse0x24719a0() {
   return (neuron0x246dc10()*-0.0312218);
}

double NNfunction_b2b2::synapse0x24719e0() {
   return (neuron0x246df50()*-0.190487);
}

double NNfunction_b2b2::synapse0x2471470() {
   return (neuron0x246e290()*-0.179425);
}

double NNfunction_b2b2::synapse0x24714b0() {
   return (neuron0x246e7f0()*-0.00676129);
}

double NNfunction_b2b2::synapse0x222a3d0() {
   return (neuron0x246ea10()*-0.0156801);
}

double NNfunction_b2b2::synapse0x222a410() {
   return (neuron0x246ed50()*0.350107);
}

double NNfunction_b2b2::synapse0x2459f20() {
   return (neuron0x246f090()*0.00509889);
}

double NNfunction_b2b2::synapse0x2459f60() {
   return (neuron0x246f3d0()*0.0025326);
}

double NNfunction_b2b2::synapse0x2459fa0() {
   return (neuron0x246f710()*0.00685278);
}

double NNfunction_b2b2::synapse0x246add0() {
   return (neuron0x246fa50()*-0.0182686);
}

double NNfunction_b2b2::synapse0x2470f30() {
   return (neuron0x246ae90()*-0.149474);
}

double NNfunction_b2b2::synapse0x246ae10() {
   return (neuron0x246b1d0()*-0.255428);
}

double NNfunction_b2b2::synapse0x246ae50() {
   return (neuron0x246b510()*0.0705019);
}

double NNfunction_b2b2::synapse0x2471b30() {
   return (neuron0x246b850()*-0.0066691);
}

double NNfunction_b2b2::synapse0x2471b70() {
   return (neuron0x246bb90()*0.101173);
}

double NNfunction_b2b2::synapse0x2471bb0() {
   return (neuron0x246bed0()*0.0675498);
}

double NNfunction_b2b2::synapse0x2471bf0() {
   return (neuron0x246c210()*-0.332271);
}

double NNfunction_b2b2::synapse0x2471c30() {
   return (neuron0x246c550()*0.656944);
}

double NNfunction_b2b2::synapse0x2471c70() {
   return (neuron0x246c890()*0.018134);
}

double NNfunction_b2b2::synapse0x2471cb0() {
   return (neuron0x246cbd0()*0.124588);
}

double NNfunction_b2b2::synapse0x2471cf0() {
   return (neuron0x246cf10()*-0.0654135);
}

double NNfunction_b2b2::synapse0x2471d30() {
   return (neuron0x246d250()*-0.0312742);
}

double NNfunction_b2b2::synapse0x2471d70() {
   return (neuron0x246d590()*-0.0128554);
}

double NNfunction_b2b2::synapse0x2471db0() {
   return (neuron0x246d8d0()*-0.275192);
}

double NNfunction_b2b2::synapse0x2471df0() {
   return (neuron0x246dc10()*0.0277824);
}

double NNfunction_b2b2::synapse0x2471e30() {
   return (neuron0x246df50()*-0.137432);
}

double NNfunction_b2b2::synapse0x2470d80() {
   return (neuron0x246e290()*-0.180996);
}

double NNfunction_b2b2::synapse0x2470dc0() {
   return (neuron0x246e7f0()*-0.0300144);
}

double NNfunction_b2b2::synapse0x2471f80() {
   return (neuron0x246ea10()*-0.0446266);
}

double NNfunction_b2b2::synapse0x2471fc0() {
   return (neuron0x246ed50()*-0.384483);
}

double NNfunction_b2b2::synapse0x2472000() {
   return (neuron0x246f090()*0.0791889);
}

double NNfunction_b2b2::synapse0x2472040() {
   return (neuron0x246f3d0()*0.0820708);
}

double NNfunction_b2b2::synapse0x2472080() {
   return (neuron0x246f710()*-0.00600689);
}

double NNfunction_b2b2::synapse0x24720c0() {
   return (neuron0x246fa50()*0.122474);
}

double NNfunction_b2b2::synapse0x2472440() {
   return (neuron0x246ae90()*0.00287575);
}

double NNfunction_b2b2::synapse0x2472480() {
   return (neuron0x246b1d0()*-0.0190645);
}

double NNfunction_b2b2::synapse0x24724c0() {
   return (neuron0x246b510()*0.6724);
}

double NNfunction_b2b2::synapse0x2472500() {
   return (neuron0x246b850()*-0.407888);
}

double NNfunction_b2b2::synapse0x2472540() {
   return (neuron0x246bb90()*-0.0891852);
}

double NNfunction_b2b2::synapse0x2472580() {
   return (neuron0x246bed0()*-0.0421233);
}

double NNfunction_b2b2::synapse0x24725c0() {
   return (neuron0x246c210()*0.00835037);
}

double NNfunction_b2b2::synapse0x2472600() {
   return (neuron0x246c550()*0.0088252);
}

double NNfunction_b2b2::synapse0x2472640() {
   return (neuron0x246c890()*-0.00195219);
}

double NNfunction_b2b2::synapse0x2472680() {
   return (neuron0x246cbd0()*0.0286306);
}

double NNfunction_b2b2::synapse0x24726c0() {
   return (neuron0x246cf10()*-0.00984446);
}

double NNfunction_b2b2::synapse0x2472700() {
   return (neuron0x246d250()*-0.0408957);
}

double NNfunction_b2b2::synapse0x2472740() {
   return (neuron0x246d590()*0.0346863);
}

double NNfunction_b2b2::synapse0x2472780() {
   return (neuron0x246d8d0()*-0.674558);
}

double NNfunction_b2b2::synapse0x24727c0() {
   return (neuron0x246dc10()*0.120705);
}

double NNfunction_b2b2::synapse0x2472800() {
   return (neuron0x246df50()*0.0553299);
}

double NNfunction_b2b2::synapse0x2472290() {
   return (neuron0x246e290()*-0.101899);
}

double NNfunction_b2b2::synapse0x24722d0() {
   return (neuron0x246e7f0()*-0.0364949);
}

double NNfunction_b2b2::synapse0x2472950() {
   return (neuron0x246ea10()*-0.035296);
}

double NNfunction_b2b2::synapse0x2472990() {
   return (neuron0x246ed50()*0.206265);
}

double NNfunction_b2b2::synapse0x24729d0() {
   return (neuron0x246f090()*0.0467296);
}

double NNfunction_b2b2::synapse0x2472a10() {
   return (neuron0x246f3d0()*-0.014057);
}

double NNfunction_b2b2::synapse0x2472a50() {
   return (neuron0x246f710()*0.037225);
}

double NNfunction_b2b2::synapse0x2472a90() {
   return (neuron0x246fa50()*-0.384638);
}

double NNfunction_b2b2::synapse0x2472e10() {
   return (neuron0x246ae90()*0.485494);
}

double NNfunction_b2b2::synapse0x2472e50() {
   return (neuron0x246b1d0()*0.010707);
}

double NNfunction_b2b2::synapse0x2472e90() {
   return (neuron0x246b510()*0.00958809);
}

double NNfunction_b2b2::synapse0x2472ed0() {
   return (neuron0x246b850()*0.0756478);
}

double NNfunction_b2b2::synapse0x2472f10() {
   return (neuron0x246bb90()*0.391979);
}

double NNfunction_b2b2::synapse0x2472f50() {
   return (neuron0x246bed0()*-0.0188588);
}

double NNfunction_b2b2::synapse0x2472f90() {
   return (neuron0x246c210()*0.0214316);
}

double NNfunction_b2b2::synapse0x2472fd0() {
   return (neuron0x246c550()*-0.000980412);
}

double NNfunction_b2b2::synapse0x2473010() {
   return (neuron0x246c890()*-0.0760198);
}

double NNfunction_b2b2::synapse0x222a760() {
   return (neuron0x246cbd0()*0.0589101);
}

double NNfunction_b2b2::synapse0x222a7a0() {
   return (neuron0x246cf10()*0.0205504);
}

double NNfunction_b2b2::synapse0x222a7e0() {
   return (neuron0x246d250()*0.0035875);
}

double NNfunction_b2b2::synapse0x222a820() {
   return (neuron0x246d590()*0.00684665);
}

double NNfunction_b2b2::synapse0x222a860() {
   return (neuron0x246d8d0()*0.0422603);
}

double NNfunction_b2b2::synapse0x222a8a0() {
   return (neuron0x246dc10()*0.0434953);
}

double NNfunction_b2b2::synapse0x222a8e0() {
   return (neuron0x246df50()*0.0379417);
}

double NNfunction_b2b2::synapse0x2472c60() {
   return (neuron0x246e290()*0.0573234);
}

double NNfunction_b2b2::synapse0x2472ca0() {
   return (neuron0x246e7f0()*-0.00456177);
}

double NNfunction_b2b2::synapse0x222aa30() {
   return (neuron0x246ea10()*-0.0108997);
}

double NNfunction_b2b2::synapse0x222aa70() {
   return (neuron0x246ed50()*-0.16191);
}

double NNfunction_b2b2::synapse0x222aab0() {
   return (neuron0x246f090()*0.0360432);
}

double NNfunction_b2b2::synapse0x222aaf0() {
   return (neuron0x246f3d0()*0.0832835);
}

double NNfunction_b2b2::synapse0x222ab30() {
   return (neuron0x246f710()*0.0023771);
}

double NNfunction_b2b2::synapse0x2473860() {
   return (neuron0x246fa50()*-1.98438);
}

double NNfunction_b2b2::synapse0x2473be0() {
   return (neuron0x246ae90()*-0.0397382);
}

double NNfunction_b2b2::synapse0x2473c20() {
   return (neuron0x246b1d0()*-0.00322144);
}

double NNfunction_b2b2::synapse0x2473c60() {
   return (neuron0x246b510()*-0.0268488);
}

double NNfunction_b2b2::synapse0x2473ca0() {
   return (neuron0x246b850()*0.0324736);
}

double NNfunction_b2b2::synapse0x2473ce0() {
   return (neuron0x246bb90()*-0.00921053);
}

double NNfunction_b2b2::synapse0x2473d20() {
   return (neuron0x246bed0()*0.000145734);
}

double NNfunction_b2b2::synapse0x2473d60() {
   return (neuron0x246c210()*0.0068414);
}

double NNfunction_b2b2::synapse0x2473da0() {
   return (neuron0x246c550()*0.00146944);
}

double NNfunction_b2b2::synapse0x2473de0() {
   return (neuron0x246c890()*-0.0303905);
}

double NNfunction_b2b2::synapse0x2473e20() {
   return (neuron0x246cbd0()*0.0287195);
}

double NNfunction_b2b2::synapse0x2473e60() {
   return (neuron0x246cf10()*-0.0700717);
}

double NNfunction_b2b2::synapse0x2473ea0() {
   return (neuron0x246d250()*0.00707709);
}

double NNfunction_b2b2::synapse0x2473ee0() {
   return (neuron0x246d590()*0.0150097);
}

double NNfunction_b2b2::synapse0x2473f20() {
   return (neuron0x246d8d0()*0.42748);
}

double NNfunction_b2b2::synapse0x2473f60() {
   return (neuron0x246dc10()*0.00893931);
}

double NNfunction_b2b2::synapse0x2473fa0() {
   return (neuron0x246df50()*0.00348434);
}

double NNfunction_b2b2::synapse0x2473a30() {
   return (neuron0x246e290()*0.0622939);
}

double NNfunction_b2b2::synapse0x2473a70() {
   return (neuron0x246e7f0()*0.00307461);
}

double NNfunction_b2b2::synapse0x24740f0() {
   return (neuron0x246ea10()*0.0112819);
}

double NNfunction_b2b2::synapse0x2474130() {
   return (neuron0x246ed50()*0.303096);
}

double NNfunction_b2b2::synapse0x2474170() {
   return (neuron0x246f090()*-0.0101433);
}

double NNfunction_b2b2::synapse0x24741b0() {
   return (neuron0x246f3d0()*-0.0346332);
}

double NNfunction_b2b2::synapse0x24741f0() {
   return (neuron0x246f710()*-0.00582395);
}

double NNfunction_b2b2::synapse0x2474230() {
   return (neuron0x246fa50()*0.00164075);
}

double NNfunction_b2b2::synapse0x24745b0() {
   return (neuron0x246ae90()*0.696925);
}

double NNfunction_b2b2::synapse0x24745f0() {
   return (neuron0x246b1d0()*0.00338041);
}

double NNfunction_b2b2::synapse0x2474630() {
   return (neuron0x246b510()*-0.0191008);
}

double NNfunction_b2b2::synapse0x2474670() {
   return (neuron0x246b850()*0.0105931);
}

double NNfunction_b2b2::synapse0x24746b0() {
   return (neuron0x246bb90()*-0.856012);
}

double NNfunction_b2b2::synapse0x24746f0() {
   return (neuron0x246bed0()*-0.0017815);
}

double NNfunction_b2b2::synapse0x2474730() {
   return (neuron0x246c210()*0.047023);
}

double NNfunction_b2b2::synapse0x2474770() {
   return (neuron0x246c550()*-0.00234522);
}

double NNfunction_b2b2::synapse0x24747b0() {
   return (neuron0x246c890()*0.00568262);
}

double NNfunction_b2b2::synapse0x24747f0() {
   return (neuron0x246cbd0()*0.0263986);
}

double NNfunction_b2b2::synapse0x2474830() {
   return (neuron0x246cf10()*0.00373979);
}

double NNfunction_b2b2::synapse0x2474870() {
   return (neuron0x246d250()*0.0257528);
}

double NNfunction_b2b2::synapse0x24748b0() {
   return (neuron0x246d590()*0.0134364);
}

double NNfunction_b2b2::synapse0x24748f0() {
   return (neuron0x246d8d0()*0.157322);
}

double NNfunction_b2b2::synapse0x2474930() {
   return (neuron0x246dc10()*-0.00517356);
}

double NNfunction_b2b2::synapse0x2474970() {
   return (neuron0x246df50()*0.0222563);
}

double NNfunction_b2b2::synapse0x2474400() {
   return (neuron0x246e290()*-0.0451045);
}

double NNfunction_b2b2::synapse0x2474440() {
   return (neuron0x246e7f0()*-0.0180769);
}

double NNfunction_b2b2::synapse0x2474ac0() {
   return (neuron0x246ea10()*0.00130448);
}

double NNfunction_b2b2::synapse0x2474b00() {
   return (neuron0x246ed50()*-0.0329601);
}

double NNfunction_b2b2::synapse0x2474b40() {
   return (neuron0x246f090()*-0.0670115);
}

double NNfunction_b2b2::synapse0x2474b80() {
   return (neuron0x246f3d0()*-0.0907914);
}

double NNfunction_b2b2::synapse0x2474bc0() {
   return (neuron0x246f710()*0.0274567);
}

double NNfunction_b2b2::synapse0x2474c00() {
   return (neuron0x246fa50()*0.179673);
}

double NNfunction_b2b2::synapse0x246e6e0() {
   return (neuron0x246ae90()*-0.152876);
}

double NNfunction_b2b2::synapse0x246e720() {
   return (neuron0x246b1d0()*0.0533244);
}

double NNfunction_b2b2::synapse0x246e760() {
   return (neuron0x246b510()*-0.387611);
}

double NNfunction_b2b2::synapse0x246e7a0() {
   return (neuron0x246b850()*0.487491);
}

double NNfunction_b2b2::synapse0x2475190() {
   return (neuron0x246bb90()*-0.799642);
}

double NNfunction_b2b2::synapse0x24751d0() {
   return (neuron0x246bed0()*0.122395);
}

double NNfunction_b2b2::synapse0x2475210() {
   return (neuron0x246c210()*0.0703957);
}

double NNfunction_b2b2::synapse0x2475250() {
   return (neuron0x246c550()*0.137042);
}

double NNfunction_b2b2::synapse0x2475290() {
   return (neuron0x246c890()*0.0525572);
}

double NNfunction_b2b2::synapse0x24752d0() {
   return (neuron0x246cbd0()*0.104535);
}

double NNfunction_b2b2::synapse0x2475310() {
   return (neuron0x246cf10()*-0.0686539);
}

double NNfunction_b2b2::synapse0x2475350() {
   return (neuron0x246d250()*-0.0758218);
}

double NNfunction_b2b2::synapse0x2475390() {
   return (neuron0x246d590()*0.079836);
}

double NNfunction_b2b2::synapse0x24753d0() {
   return (neuron0x246d8d0()*-0.0939941);
}

double NNfunction_b2b2::synapse0x2475410() {
   return (neuron0x246dc10()*-0.0108486);
}

double NNfunction_b2b2::synapse0x2475450() {
   return (neuron0x246df50()*-0.158481);
}

double NNfunction_b2b2::synapse0x2474dd0() {
   return (neuron0x246e290()*0.140744);
}

double NNfunction_b2b2::synapse0x2474e10() {
   return (neuron0x246e7f0()*-0.0366877);
}

double NNfunction_b2b2::synapse0x24755a0() {
   return (neuron0x246ea10()*-0.00320895);
}

double NNfunction_b2b2::synapse0x24755e0() {
   return (neuron0x246ed50()*-0.278558);
}

double NNfunction_b2b2::synapse0x2475620() {
   return (neuron0x246f090()*0.0436729);
}

double NNfunction_b2b2::synapse0x2475660() {
   return (neuron0x246f3d0()*-0.0870641);
}

double NNfunction_b2b2::synapse0x24756a0() {
   return (neuron0x246f710()*0.00552759);
}

double NNfunction_b2b2::synapse0x24756e0() {
   return (neuron0x246fa50()*0.390243);
}

double NNfunction_b2b2::synapse0x2475a60() {
   return (neuron0x246ae90()*-0.217208);
}

double NNfunction_b2b2::synapse0x2475aa0() {
   return (neuron0x246b1d0()*0.00746584);
}

double NNfunction_b2b2::synapse0x2475ae0() {
   return (neuron0x246b510()*0.115224);
}

double NNfunction_b2b2::synapse0x2475b20() {
   return (neuron0x246b850()*-0.00548735);
}

double NNfunction_b2b2::synapse0x2475b60() {
   return (neuron0x246bb90()*-0.0738704);
}

double NNfunction_b2b2::synapse0x2475ba0() {
   return (neuron0x246bed0()*-0.0137078);
}

double NNfunction_b2b2::synapse0x2475be0() {
   return (neuron0x246c210()*-0.0338469);
}

double NNfunction_b2b2::synapse0x2475c20() {
   return (neuron0x246c550()*-0.003344);
}

double NNfunction_b2b2::synapse0x2475c60() {
   return (neuron0x246c890()*0.0122265);
}

double NNfunction_b2b2::synapse0x2475ca0() {
   return (neuron0x246cbd0()*-0.0122925);
}

double NNfunction_b2b2::synapse0x2475ce0() {
   return (neuron0x246cf10()*-0.00268645);
}

double NNfunction_b2b2::synapse0x2475d20() {
   return (neuron0x246d250()*-0.0214367);
}

double NNfunction_b2b2::synapse0x2475d60() {
   return (neuron0x246d590()*-0.0116243);
}

double NNfunction_b2b2::synapse0x2475da0() {
   return (neuron0x246d8d0()*-0.365475);
}

double NNfunction_b2b2::synapse0x2475de0() {
   return (neuron0x246dc10()*-0.00801051);
}

double NNfunction_b2b2::synapse0x2475e20() {
   return (neuron0x246df50()*-0.0155488);
}

double NNfunction_b2b2::synapse0x24758b0() {
   return (neuron0x246e290()*-0.032192);
}

double NNfunction_b2b2::synapse0x24758f0() {
   return (neuron0x246e7f0()*0.0068666);
}

double NNfunction_b2b2::synapse0x2475f70() {
   return (neuron0x246ea10()*-0.00518724);
}

double NNfunction_b2b2::synapse0x2475fb0() {
   return (neuron0x246ed50()*0.226886);
}

double NNfunction_b2b2::synapse0x2475ff0() {
   return (neuron0x246f090()*0.0523639);
}

double NNfunction_b2b2::synapse0x2476030() {
   return (neuron0x246f3d0()*0.109834);
}

double NNfunction_b2b2::synapse0x2476070() {
   return (neuron0x246f710()*0.0175969);
}

double NNfunction_b2b2::synapse0x24760b0() {
   return (neuron0x246fa50()*-3.61347);
}

double NNfunction_b2b2::synapse0x2476430() {
   return (neuron0x246ae90()*0.00676851);
}

double NNfunction_b2b2::synapse0x2476470() {
   return (neuron0x246b1d0()*-0.0394315);
}

double NNfunction_b2b2::synapse0x24764b0() {
   return (neuron0x246b510()*0.251329);
}

double NNfunction_b2b2::synapse0x24764f0() {
   return (neuron0x246b850()*-0.175969);
}

double NNfunction_b2b2::synapse0x2476530() {
   return (neuron0x246bb90()*-0.261374);
}

double NNfunction_b2b2::synapse0x2476570() {
   return (neuron0x246bed0()*0.108171);
}

double NNfunction_b2b2::synapse0x24765b0() {
   return (neuron0x246c210()*0.136693);
}

double NNfunction_b2b2::synapse0x24765f0() {
   return (neuron0x246c550()*-0.0221454);
}

double NNfunction_b2b2::synapse0x2476630() {
   return (neuron0x246c890()*-0.368815);
}

double NNfunction_b2b2::synapse0x2476670() {
   return (neuron0x246cbd0()*-0.178155);
}

double NNfunction_b2b2::synapse0x24766b0() {
   return (neuron0x246cf10()*-0.19608);
}

double NNfunction_b2b2::synapse0x24766f0() {
   return (neuron0x246d250()*0.0119646);
}

double NNfunction_b2b2::synapse0x2476730() {
   return (neuron0x246d590()*-0.0488325);
}

double NNfunction_b2b2::synapse0x2476770() {
   return (neuron0x246d8d0()*-0.541012);
}

double NNfunction_b2b2::synapse0x24767b0() {
   return (neuron0x246dc10()*0.0497727);
}

double NNfunction_b2b2::synapse0x24767f0() {
   return (neuron0x246df50()*0.170741);
}

double NNfunction_b2b2::synapse0x2476280() {
   return (neuron0x246e290()*-0.159868);
}

double NNfunction_b2b2::synapse0x24762c0() {
   return (neuron0x246e7f0()*0.140074);
}

double NNfunction_b2b2::synapse0x2473050() {
   return (neuron0x246ea10()*0.187579);
}

double NNfunction_b2b2::synapse0x2473090() {
   return (neuron0x246ed50()*-0.67143);
}

double NNfunction_b2b2::synapse0x24730d0() {
   return (neuron0x246f090()*-0.00260289);
}

double NNfunction_b2b2::synapse0x2473110() {
   return (neuron0x246f3d0()*0.0926809);
}

double NNfunction_b2b2::synapse0x2473150() {
   return (neuron0x246f710()*-0.198918);
}

double NNfunction_b2b2::synapse0x2473190() {
   return (neuron0x246fa50()*-0.0830334);
}

double NNfunction_b2b2::synapse0x2473510() {
   return (neuron0x246ae90()*0.0043009);
}

double NNfunction_b2b2::synapse0x2473550() {
   return (neuron0x246b1d0()*0.0295973);
}

double NNfunction_b2b2::synapse0x2473590() {
   return (neuron0x246b510()*-0.0224032);
}

double NNfunction_b2b2::synapse0x24735d0() {
   return (neuron0x246b850()*0.590786);
}

double NNfunction_b2b2::synapse0x2473610() {
   return (neuron0x246bb90()*-0.0208265);
}

double NNfunction_b2b2::synapse0x2473650() {
   return (neuron0x246bed0()*0.00882283);
}

double NNfunction_b2b2::synapse0x2473690() {
   return (neuron0x246c210()*0.113311);
}

double NNfunction_b2b2::synapse0x24736d0() {
   return (neuron0x246c550()*0.262636);
}

double NNfunction_b2b2::synapse0x2473710() {
   return (neuron0x246c890()*-0.0136489);
}

double NNfunction_b2b2::synapse0x2473750() {
   return (neuron0x246cbd0()*-0.0390255);
}

double NNfunction_b2b2::synapse0x2473790() {
   return (neuron0x246cf10()*-0.103698);
}

double NNfunction_b2b2::synapse0x24737d0() {
   return (neuron0x246d250()*-0.115263);
}

double NNfunction_b2b2::synapse0x2473810() {
   return (neuron0x246d590()*-0.154546);
}

double NNfunction_b2b2::synapse0x2477950() {
   return (neuron0x246d8d0()*0.914394);
}

double NNfunction_b2b2::synapse0x2477990() {
   return (neuron0x246dc10()*-0.345585);
}

double NNfunction_b2b2::synapse0x24779d0() {
   return (neuron0x246df50()*0.583552);
}

double NNfunction_b2b2::synapse0x2473360() {
   return (neuron0x246e290()*-0.0190077);
}

double NNfunction_b2b2::synapse0x24733a0() {
   return (neuron0x246e7f0()*0.0490502);
}

double NNfunction_b2b2::synapse0x2477b20() {
   return (neuron0x246ea10()*-0.00531983);
}

double NNfunction_b2b2::synapse0x2477b60() {
   return (neuron0x246ed50()*0.793153);
}

double NNfunction_b2b2::synapse0x2477ba0() {
   return (neuron0x246f090()*0.032456);
}

double NNfunction_b2b2::synapse0x2477be0() {
   return (neuron0x246f3d0()*-0.236281);
}

double NNfunction_b2b2::synapse0x2477c20() {
   return (neuron0x246f710()*-0.0415865);
}

double NNfunction_b2b2::synapse0x2477c60() {
   return (neuron0x246fa50()*-0.174173);
}

double NNfunction_b2b2::synapse0x2477fe0() {
   return (neuron0x246ae90()*0.00979472);
}

double NNfunction_b2b2::synapse0x2478020() {
   return (neuron0x246b1d0()*-6.0978e-05);
}

double NNfunction_b2b2::synapse0x2478060() {
   return (neuron0x246b510()*-0.00120454);
}

double NNfunction_b2b2::synapse0x24780a0() {
   return (neuron0x246b850()*-0.0828043);
}

double NNfunction_b2b2::synapse0x24780e0() {
   return (neuron0x246bb90()*0.0215175);
}

double NNfunction_b2b2::synapse0x2478120() {
   return (neuron0x246bed0()*-0.0118879);
}

double NNfunction_b2b2::synapse0x2478160() {
   return (neuron0x246c210()*0.0121433);
}

double NNfunction_b2b2::synapse0x24781a0() {
   return (neuron0x246c550()*-0.00284378);
}

double NNfunction_b2b2::synapse0x24781e0() {
   return (neuron0x246c890()*0.00205467);
}

double NNfunction_b2b2::synapse0x2478220() {
   return (neuron0x246cbd0()*0.00526369);
}

double NNfunction_b2b2::synapse0x2478260() {
   return (neuron0x246cf10()*-0.00547274);
}

double NNfunction_b2b2::synapse0x24782a0() {
   return (neuron0x246d250()*0.0307288);
}

double NNfunction_b2b2::synapse0x24782e0() {
   return (neuron0x246d590()*0.0202644);
}

double NNfunction_b2b2::synapse0x2478320() {
   return (neuron0x246d8d0()*-0.402947);
}

double NNfunction_b2b2::synapse0x2478360() {
   return (neuron0x246dc10()*0.000396488);
}

double NNfunction_b2b2::synapse0x24783a0() {
   return (neuron0x246df50()*0.0344685);
}

double NNfunction_b2b2::synapse0x2477e30() {
   return (neuron0x246e290()*-0.668207);
}

double NNfunction_b2b2::synapse0x2477e70() {
   return (neuron0x246e7f0()*-0.00210354);
}

double NNfunction_b2b2::synapse0x24784f0() {
   return (neuron0x246ea10()*0.00715508);
}

double NNfunction_b2b2::synapse0x2478530() {
   return (neuron0x246ed50()*0.591636);
}

double NNfunction_b2b2::synapse0x2478570() {
   return (neuron0x246f090()*0.0907024);
}

double NNfunction_b2b2::synapse0x24785b0() {
   return (neuron0x246f3d0()*-0.0460361);
}

double NNfunction_b2b2::synapse0x24785f0() {
   return (neuron0x246f710()*0.0127484);
}

double NNfunction_b2b2::synapse0x2478630() {
   return (neuron0x246fa50()*-0.00350022);
}

double NNfunction_b2b2::synapse0x24789b0() {
   return (neuron0x246ae90()*0.0317224);
}

double NNfunction_b2b2::synapse0x24789f0() {
   return (neuron0x246b1d0()*0.106478);
}

double NNfunction_b2b2::synapse0x2478a30() {
   return (neuron0x246b510()*0.333624);
}

double NNfunction_b2b2::synapse0x2478a70() {
   return (neuron0x246b850()*0.205147);
}

double NNfunction_b2b2::synapse0x2478ab0() {
   return (neuron0x246bb90()*0.318368);
}

double NNfunction_b2b2::synapse0x2478af0() {
   return (neuron0x246bed0()*0.0980536);
}

double NNfunction_b2b2::synapse0x2478b30() {
   return (neuron0x246c210()*0.167354);
}

double NNfunction_b2b2::synapse0x2478b70() {
   return (neuron0x246c550()*-0.0390971);
}

double NNfunction_b2b2::synapse0x2478bb0() {
   return (neuron0x246c890()*0.125334);
}

double NNfunction_b2b2::synapse0x2478bf0() {
   return (neuron0x246cbd0()*0.222492);
}

double NNfunction_b2b2::synapse0x2478c30() {
   return (neuron0x246cf10()*-0.164593);
}

double NNfunction_b2b2::synapse0x2478c70() {
   return (neuron0x246d250()*-0.147159);
}

double NNfunction_b2b2::synapse0x2478cb0() {
   return (neuron0x246d590()*-0.0792047);
}

double NNfunction_b2b2::synapse0x2478cf0() {
   return (neuron0x246d8d0()*-0.569892);
}

double NNfunction_b2b2::synapse0x2478d30() {
   return (neuron0x246dc10()*-0.0550496);
}

double NNfunction_b2b2::synapse0x2478d70() {
   return (neuron0x246df50()*-0.0581512);
}

double NNfunction_b2b2::synapse0x2478800() {
   return (neuron0x246e290()*-0.213785);
}

double NNfunction_b2b2::synapse0x2478840() {
   return (neuron0x246e7f0()*-0.0118623);
}

double NNfunction_b2b2::synapse0x2478ec0() {
   return (neuron0x246ea10()*-0.14191);
}

double NNfunction_b2b2::synapse0x2478f00() {
   return (neuron0x246ed50()*-0.317456);
}

double NNfunction_b2b2::synapse0x2478f40() {
   return (neuron0x246f090()*-0.114843);
}

double NNfunction_b2b2::synapse0x2478f80() {
   return (neuron0x246f3d0()*0.695511);
}

double NNfunction_b2b2::synapse0x2478fc0() {
   return (neuron0x246f710()*0.0177152);
}

double NNfunction_b2b2::synapse0x2479000() {
   return (neuron0x246fa50()*0.569016);
}

double NNfunction_b2b2::synapse0x2479380() {
   return (neuron0x246ae90()*0.00158544);
}

double NNfunction_b2b2::synapse0x24793c0() {
   return (neuron0x246b1d0()*0.0103695);
}

double NNfunction_b2b2::synapse0x2479400() {
   return (neuron0x246b510()*1.10265);
}

double NNfunction_b2b2::synapse0x2479440() {
   return (neuron0x246b850()*-0.132969);
}

double NNfunction_b2b2::synapse0x2479480() {
   return (neuron0x246bb90()*0.00927401);
}

double NNfunction_b2b2::synapse0x24794c0() {
   return (neuron0x246bed0()*-0.0104656);
}

double NNfunction_b2b2::synapse0x2479500() {
   return (neuron0x246c210()*0.0056998);
}

double NNfunction_b2b2::synapse0x2479540() {
   return (neuron0x246c550()*0.0150087);
}

double NNfunction_b2b2::synapse0x2479580() {
   return (neuron0x246c890()*-0.0149563);
}

double NNfunction_b2b2::synapse0x24795c0() {
   return (neuron0x246cbd0()*-0.0377276);
}

double NNfunction_b2b2::synapse0x2479600() {
   return (neuron0x246cf10()*-0.00859622);
}

double NNfunction_b2b2::synapse0x2479640() {
   return (neuron0x246d250()*-0.0475153);
}

double NNfunction_b2b2::synapse0x2479680() {
   return (neuron0x246d590()*-0.0434433);
}

double NNfunction_b2b2::synapse0x24796c0() {
   return (neuron0x246d8d0()*0.719659);
}

double NNfunction_b2b2::synapse0x2479700() {
   return (neuron0x246dc10()*-0.0185952);
}

double NNfunction_b2b2::synapse0x2479740() {
   return (neuron0x246df50()*-0.050295);
}

double NNfunction_b2b2::synapse0x24791d0() {
   return (neuron0x246e290()*0.00859309);
}

double NNfunction_b2b2::synapse0x2479210() {
   return (neuron0x246e7f0()*0.0142703);
}

double NNfunction_b2b2::synapse0x2479890() {
   return (neuron0x246ea10()*0.0258565);
}

double NNfunction_b2b2::synapse0x24798d0() {
   return (neuron0x246ed50()*-0.794142);
}

double NNfunction_b2b2::synapse0x2479910() {
   return (neuron0x246f090()*0.017566);
}

double NNfunction_b2b2::synapse0x2479950() {
   return (neuron0x246f3d0()*-0.0329116);
}

double NNfunction_b2b2::synapse0x2479990() {
   return (neuron0x246f710()*-0.000380217);
}

double NNfunction_b2b2::synapse0x24799d0() {
   return (neuron0x246fa50()*0.0711444);
}

double NNfunction_b2b2::synapse0x2479d50() {
   return (neuron0x246ae90()*-0.296933);
}

double NNfunction_b2b2::synapse0x246b0b0() {
   return (neuron0x246b1d0()*-0.0098505);
}

double NNfunction_b2b2::synapse0x246b0f0() {
   return (neuron0x246b510()*0.175646);
}

double NNfunction_b2b2::synapse0x246b3f0() {
   return (neuron0x246b850()*-0.0637712);
}

double NNfunction_b2b2::synapse0x246b430() {
   return (neuron0x246bb90()*-0.200225);
}

double NNfunction_b2b2::synapse0x246b730() {
   return (neuron0x246bed0()*-0.0582138);
}

double NNfunction_b2b2::synapse0x246b770() {
   return (neuron0x246c210()*0.202475);
}

double NNfunction_b2b2::synapse0x246ba70() {
   return (neuron0x246c550()*0.0359653);
}

double NNfunction_b2b2::synapse0x246bab0() {
   return (neuron0x246c890()*0.132509);
}

double NNfunction_b2b2::synapse0x246bdb0() {
   return (neuron0x246cbd0()*-0.132982);
}

double NNfunction_b2b2::synapse0x246bdf0() {
   return (neuron0x246cf10()*0.134839);
}

double NNfunction_b2b2::synapse0x246c0f0() {
   return (neuron0x246d250()*-0.0419734);
}

double NNfunction_b2b2::synapse0x246c130() {
   return (neuron0x246d590()*-0.0261372);
}

double NNfunction_b2b2::synapse0x246c430() {
   return (neuron0x246d8d0()*-0.0828643);
}

double NNfunction_b2b2::synapse0x246c470() {
   return (neuron0x246dc10()*-0.0668884);
}

double NNfunction_b2b2::synapse0x246c770() {
   return (neuron0x246df50()*0.0135394);
}

double NNfunction_b2b2::synapse0x246c7b0() {
   return (neuron0x246e290()*-0.386211);
}

double NNfunction_b2b2::synapse0x246cab0() {
   return (neuron0x246e7f0()*0.0324213);
}

double NNfunction_b2b2::synapse0x246caf0() {
   return (neuron0x246ea10()*-0.0672811);
}

double NNfunction_b2b2::synapse0x246cdf0() {
   return (neuron0x246ed50()*-0.551549);
}

double NNfunction_b2b2::synapse0x246ce30() {
   return (neuron0x246f090()*-0.00925974);
}

double NNfunction_b2b2::synapse0x246d130() {
   return (neuron0x246f3d0()*-0.188558);
}

double NNfunction_b2b2::synapse0x246d170() {
   return (neuron0x246f710()*0.0106193);
}

double NNfunction_b2b2::synapse0x246d470() {
   return (neuron0x246fa50()*0.00946491);
}

double NNfunction_b2b2::synapse0x246d4b0() {
   return (neuron0x246ae90()*-0.257825);
}

double NNfunction_b2b2::synapse0x246e170() {
   return (neuron0x246b1d0()*0.0366296);
}

double NNfunction_b2b2::synapse0x246e1b0() {
   return (neuron0x246b510()*-0.222787);
}

double NNfunction_b2b2::synapse0x2479ba0() {
   return (neuron0x246b850()*0.0637139);
}

double NNfunction_b2b2::synapse0x2479be0() {
   return (neuron0x246bb90()*-0.188751);
}

double NNfunction_b2b2::synapse0x246e4b0() {
   return (neuron0x246bed0()*0.0117625);
}

double NNfunction_b2b2::synapse0x246e4f0() {
   return (neuron0x246c210()*0.00768681);
}

double NNfunction_b2b2::synapse0x221c440() {
   return (neuron0x246c550()*0.0415817);
}

double NNfunction_b2b2::synapse0x221c480() {
   return (neuron0x246c890()*-0.0227138);
}

double NNfunction_b2b2::synapse0x246ec30() {
   return (neuron0x246cbd0()*0.00988994);
}

double NNfunction_b2b2::synapse0x246ec70() {
   return (neuron0x246cf10()*-0.0359935);
}

double NNfunction_b2b2::synapse0x246ef70() {
   return (neuron0x246d250()*-0.00492416);
}

double NNfunction_b2b2::synapse0x246efb0() {
   return (neuron0x246d590()*-0.0244667);
}

double NNfunction_b2b2::synapse0x246f2b0() {
   return (neuron0x246d8d0()*0.222296);
}

double NNfunction_b2b2::synapse0x246f2f0() {
   return (neuron0x246dc10()*-0.0225116);
}

double NNfunction_b2b2::synapse0x246f5f0() {
   return (neuron0x246df50()*-0.012598);
}

double NNfunction_b2b2::synapse0x246f630() {
   return (neuron0x246e290()*-0.0990738);
}

double NNfunction_b2b2::synapse0x246f930() {
   return (neuron0x246e7f0()*-0.0182152);
}

double NNfunction_b2b2::synapse0x246f970() {
   return (neuron0x246ea10()*-0.0174343);
}

double NNfunction_b2b2::synapse0x246fc70() {
   return (neuron0x246ed50()*0.0951228);
}

double NNfunction_b2b2::synapse0x246fcb0() {
   return (neuron0x246f090()*-0.0185746);
}

double NNfunction_b2b2::synapse0x246d7b0() {
   return (neuron0x246f3d0()*0.182772);
}

double NNfunction_b2b2::synapse0x246d7f0() {
   return (neuron0x246f710()*0.0437565);
}

double NNfunction_b2b2::synapse0x247bac0() {
   return (neuron0x246fa50()*-1.01232);
}

double NNfunction_b2b2::synapse0x247be40() {
   return (neuron0x246ae90()*1.09817);
}

double NNfunction_b2b2::synapse0x247be80() {
   return (neuron0x246b1d0()*0.0421189);
}

double NNfunction_b2b2::synapse0x247bec0() {
   return (neuron0x246b510()*-0.0928264);
}

double NNfunction_b2b2::synapse0x247bf00() {
   return (neuron0x246b850()*0.00839979);
}

double NNfunction_b2b2::synapse0x247bf40() {
   return (neuron0x246bb90()*-1.24768);
}

double NNfunction_b2b2::synapse0x247bf80() {
   return (neuron0x246bed0()*0.0388014);
}

double NNfunction_b2b2::synapse0x247bfc0() {
   return (neuron0x246c210()*-0.155489);
}

double NNfunction_b2b2::synapse0x247c000() {
   return (neuron0x246c550()*0.0204808);
}

double NNfunction_b2b2::synapse0x247c040() {
   return (neuron0x246c890()*0.074802);
}

double NNfunction_b2b2::synapse0x247c080() {
   return (neuron0x246cbd0()*0.0457363);
}

double NNfunction_b2b2::synapse0x247c0c0() {
   return (neuron0x246cf10()*-0.000368277);
}

double NNfunction_b2b2::synapse0x247c100() {
   return (neuron0x246d250()*-0.0544128);
}

double NNfunction_b2b2::synapse0x247c140() {
   return (neuron0x246d590()*0.112731);
}

double NNfunction_b2b2::synapse0x247c180() {
   return (neuron0x246d8d0()*-0.685873);
}

double NNfunction_b2b2::synapse0x247c1c0() {
   return (neuron0x246dc10()*0.0175948);
}

double NNfunction_b2b2::synapse0x247c200() {
   return (neuron0x246df50()*-0.241418);
}

double NNfunction_b2b2::synapse0x247bc90() {
   return (neuron0x246e290()*0.306793);
}

double NNfunction_b2b2::synapse0x247bcd0() {
   return (neuron0x246e7f0()*0.0377853);
}

double NNfunction_b2b2::synapse0x247c350() {
   return (neuron0x246ea10()*0.0417516);
}

double NNfunction_b2b2::synapse0x247c390() {
   return (neuron0x246ed50()*0.813232);
}

double NNfunction_b2b2::synapse0x247c3d0() {
   return (neuron0x246f090()*0.199176);
}

double NNfunction_b2b2::synapse0x247c410() {
   return (neuron0x246f3d0()*0.855371);
}

double NNfunction_b2b2::synapse0x247c450() {
   return (neuron0x246f710()*-0.0570827);
}

double NNfunction_b2b2::synapse0x247c490() {
   return (neuron0x246fa50()*0.140015);
}

double NNfunction_b2b2::synapse0x247c810() {
   return (neuron0x246ae90()*0.0225258);
}

double NNfunction_b2b2::synapse0x247c850() {
   return (neuron0x246b1d0()*0.0124694);
}

double NNfunction_b2b2::synapse0x247c890() {
   return (neuron0x246b510()*0.134995);
}

double NNfunction_b2b2::synapse0x247c8d0() {
   return (neuron0x246b850()*1.38915);
}

double NNfunction_b2b2::synapse0x247c910() {
   return (neuron0x246bb90()*-0.0532033);
}

double NNfunction_b2b2::synapse0x247c950() {
   return (neuron0x246bed0()*0.0162528);
}

double NNfunction_b2b2::synapse0x247c990() {
   return (neuron0x246c210()*-0.00574063);
}

double NNfunction_b2b2::synapse0x247c9d0() {
   return (neuron0x246c550()*0.0167694);
}

double NNfunction_b2b2::synapse0x247ca10() {
   return (neuron0x246c890()*-0.000600219);
}

double NNfunction_b2b2::synapse0x247ca50() {
   return (neuron0x246cbd0()*-0.0276798);
}

double NNfunction_b2b2::synapse0x247ca90() {
   return (neuron0x246cf10()*0.0449209);
}

double NNfunction_b2b2::synapse0x247cad0() {
   return (neuron0x246d250()*0.0216952);
}

double NNfunction_b2b2::synapse0x247cb10() {
   return (neuron0x246d590()*-0.0139766);
}

double NNfunction_b2b2::synapse0x247cb50() {
   return (neuron0x246d8d0()*0.383564);
}

double NNfunction_b2b2::synapse0x247cb90() {
   return (neuron0x246dc10()*-0.011699);
}

double NNfunction_b2b2::synapse0x247cbd0() {
   return (neuron0x246df50()*-0.0141153);
}

double NNfunction_b2b2::synapse0x247c660() {
   return (neuron0x246e290()*-0.121841);
}

double NNfunction_b2b2::synapse0x247c6a0() {
   return (neuron0x246e7f0()*-0.0173373);
}

double NNfunction_b2b2::synapse0x247cd20() {
   return (neuron0x246ea10()*0.00126447);
}

double NNfunction_b2b2::synapse0x247cd60() {
   return (neuron0x246ed50()*-0.323303);
}

double NNfunction_b2b2::synapse0x247cda0() {
   return (neuron0x246f090()*-0.0734642);
}

double NNfunction_b2b2::synapse0x247cde0() {
   return (neuron0x246f3d0()*0.0421889);
}

double NNfunction_b2b2::synapse0x247ce20() {
   return (neuron0x246f710()*0.00980573);
}

double NNfunction_b2b2::synapse0x247ce60() {
   return (neuron0x246fa50()*-0.208311);
}

double NNfunction_b2b2::synapse0x247d1e0() {
   return (neuron0x246ae90()*-0.102129);
}

double NNfunction_b2b2::synapse0x247d220() {
   return (neuron0x246b1d0()*0.0513633);
}

double NNfunction_b2b2::synapse0x247d260() {
   return (neuron0x246b510()*0.0357841);
}

double NNfunction_b2b2::synapse0x247d2a0() {
   return (neuron0x246b850()*0.0109135);
}

double NNfunction_b2b2::synapse0x247d2e0() {
   return (neuron0x246bb90()*0.00304046);
}

double NNfunction_b2b2::synapse0x247d320() {
   return (neuron0x246bed0()*-0.0275137);
}

double NNfunction_b2b2::synapse0x247d360() {
   return (neuron0x246c210()*0.0200869);
}

double NNfunction_b2b2::synapse0x247d3a0() {
   return (neuron0x246c550()*0.0485389);
}

double NNfunction_b2b2::synapse0x247d3e0() {
   return (neuron0x246c890()*-0.0189477);
}

double NNfunction_b2b2::synapse0x247d420() {
   return (neuron0x246cbd0()*-0.0557676);
}

double NNfunction_b2b2::synapse0x247d460() {
   return (neuron0x246cf10()*-0.0530634);
}

double NNfunction_b2b2::synapse0x247d4a0() {
   return (neuron0x246d250()*-0.0421042);
}

double NNfunction_b2b2::synapse0x247d4e0() {
   return (neuron0x246d590()*0.105791);
}

double NNfunction_b2b2::synapse0x247d520() {
   return (neuron0x246d8d0()*-0.412344);
}

double NNfunction_b2b2::synapse0x247d560() {
   return (neuron0x246dc10()*0.0154823);
}

double NNfunction_b2b2::synapse0x247d5a0() {
   return (neuron0x246df50()*0.139656);
}

double NNfunction_b2b2::synapse0x247d030() {
   return (neuron0x246e290()*0.193771);
}

double NNfunction_b2b2::synapse0x247d070() {
   return (neuron0x246e7f0()*0.0264682);
}

double NNfunction_b2b2::synapse0x247d6f0() {
   return (neuron0x246ea10()*0.0207491);
}

double NNfunction_b2b2::synapse0x247d730() {
   return (neuron0x246ed50()*0.445282);
}

double NNfunction_b2b2::synapse0x247d770() {
   return (neuron0x246f090()*-0.837623);
}

double NNfunction_b2b2::synapse0x247d7b0() {
   return (neuron0x246f3d0()*0.0159905);
}

double NNfunction_b2b2::synapse0x247d7f0() {
   return (neuron0x246f710()*-0.0172306);
}

double NNfunction_b2b2::synapse0x247d830() {
   return (neuron0x246fa50()*0.110849);
}

double NNfunction_b2b2::synapse0x247dbb0() {
   return (neuron0x246ae90()*0.343138);
}

double NNfunction_b2b2::synapse0x247dbf0() {
   return (neuron0x246b1d0()*0.00824419);
}

double NNfunction_b2b2::synapse0x247dc30() {
   return (neuron0x246b510()*-0.0618827);
}

double NNfunction_b2b2::synapse0x247dc70() {
   return (neuron0x246b850()*0.099299);
}

double NNfunction_b2b2::synapse0x247dcb0() {
   return (neuron0x246bb90()*0.444633);
}

double NNfunction_b2b2::synapse0x247dcf0() {
   return (neuron0x246bed0()*0.0110152);
}

double NNfunction_b2b2::synapse0x247dd30() {
   return (neuron0x246c210()*0.0361637);
}

double NNfunction_b2b2::synapse0x247dd70() {
   return (neuron0x246c550()*0.0154677);
}

double NNfunction_b2b2::synapse0x247ddb0() {
   return (neuron0x246c890()*0.00502416);
}

double NNfunction_b2b2::synapse0x247ddf0() {
   return (neuron0x246cbd0()*0.02031);
}

double NNfunction_b2b2::synapse0x247de30() {
   return (neuron0x246cf10()*0.0945117);
}

double NNfunction_b2b2::synapse0x247de70() {
   return (neuron0x246d250()*0.0187042);
}

double NNfunction_b2b2::synapse0x247deb0() {
   return (neuron0x246d590()*0.00569927);
}

double NNfunction_b2b2::synapse0x247def0() {
   return (neuron0x246d8d0()*0.026736);
}

double NNfunction_b2b2::synapse0x247df30() {
   return (neuron0x246dc10()*-0.00628183);
}

double NNfunction_b2b2::synapse0x247df70() {
   return (neuron0x246df50()*-0.0101713);
}

double NNfunction_b2b2::synapse0x247da00() {
   return (neuron0x246e290()*0.131194);
}

double NNfunction_b2b2::synapse0x247da40() {
   return (neuron0x246e7f0()*0.0301141);
}

double NNfunction_b2b2::synapse0x247e0c0() {
   return (neuron0x246ea10()*0.00944874);
}

double NNfunction_b2b2::synapse0x247e100() {
   return (neuron0x246ed50()*0.277834);
}

double NNfunction_b2b2::synapse0x247e140() {
   return (neuron0x246f090()*0.00837392);
}

double NNfunction_b2b2::synapse0x247e180() {
   return (neuron0x246f3d0()*-0.0490712);
}

double NNfunction_b2b2::synapse0x247e1c0() {
   return (neuron0x246f710()*-0.0266562);
}

double NNfunction_b2b2::synapse0x247e200() {
   return (neuron0x246fa50()*0.491906);
}

double NNfunction_b2b2::synapse0x247e580() {
   return (neuron0x246ae90()*0.0166509);
}

double NNfunction_b2b2::synapse0x247e5c0() {
   return (neuron0x246b1d0()*0.0289421);
}

double NNfunction_b2b2::synapse0x247e600() {
   return (neuron0x246b510()*-0.140648);
}

double NNfunction_b2b2::synapse0x247e640() {
   return (neuron0x246b850()*0.0787487);
}

double NNfunction_b2b2::synapse0x247e680() {
   return (neuron0x246bb90()*0.0594276);
}

double NNfunction_b2b2::synapse0x247e6c0() {
   return (neuron0x246bed0()*-0.0124247);
}

double NNfunction_b2b2::synapse0x247e700() {
   return (neuron0x246c210()*0.0686612);
}

double NNfunction_b2b2::synapse0x247e740() {
   return (neuron0x246c550()*-0.0570901);
}

double NNfunction_b2b2::synapse0x247e780() {
   return (neuron0x246c890()*-0.0079358);
}

double NNfunction_b2b2::synapse0x2476940() {
   return (neuron0x246cbd0()*-0.29265);
}

double NNfunction_b2b2::synapse0x2476980() {
   return (neuron0x246cf10()*-0.0518342);
}

double NNfunction_b2b2::synapse0x24769c0() {
   return (neuron0x246d250()*0.0182933);
}

double NNfunction_b2b2::synapse0x2476a00() {
   return (neuron0x246d590()*0.0713932);
}

double NNfunction_b2b2::synapse0x2476a40() {
   return (neuron0x246d8d0()*0.227122);
}

double NNfunction_b2b2::synapse0x2476a80() {
   return (neuron0x246dc10()*0.00199737);
}

double NNfunction_b2b2::synapse0x2476ac0() {
   return (neuron0x246df50()*0.03185);
}

double NNfunction_b2b2::synapse0x247e3d0() {
   return (neuron0x246e290()*0.261795);
}

double NNfunction_b2b2::synapse0x247e410() {
   return (neuron0x246e7f0()*0.0677048);
}

double NNfunction_b2b2::synapse0x2476c10() {
   return (neuron0x246ea10()*0.0438106);
}

double NNfunction_b2b2::synapse0x2476c50() {
   return (neuron0x246ed50()*0.892143);
}

double NNfunction_b2b2::synapse0x2476c90() {
   return (neuron0x246f090()*-0.0694302);
}

double NNfunction_b2b2::synapse0x2476cd0() {
   return (neuron0x246f3d0()*-0.00713883);
}

double NNfunction_b2b2::synapse0x2476d10() {
   return (neuron0x246f710()*-0.0345497);
}

double NNfunction_b2b2::synapse0x2476d50() {
   return (neuron0x246fa50()*0.0139096);
}

double NNfunction_b2b2::synapse0x24770d0() {
   return (neuron0x246ae90()*0.015984);
}

double NNfunction_b2b2::synapse0x2477110() {
   return (neuron0x246b1d0()*0.0875384);
}

double NNfunction_b2b2::synapse0x2477150() {
   return (neuron0x246b510()*-0.153748);
}

double NNfunction_b2b2::synapse0x2477190() {
   return (neuron0x246b850()*0.816352);
}

double NNfunction_b2b2::synapse0x24771d0() {
   return (neuron0x246bb90()*0.13058);
}

double NNfunction_b2b2::synapse0x2477210() {
   return (neuron0x246bed0()*0.0454881);
}

double NNfunction_b2b2::synapse0x2477250() {
   return (neuron0x246c210()*0.18715);
}

double NNfunction_b2b2::synapse0x2477290() {
   return (neuron0x246c550()*0.0978676);
}

double NNfunction_b2b2::synapse0x24772d0() {
   return (neuron0x246c890()*0.000841612);
}

double NNfunction_b2b2::synapse0x2477310() {
   return (neuron0x246cbd0()*0.0156748);
}

double NNfunction_b2b2::synapse0x2477350() {
   return (neuron0x246cf10()*-0.0484269);
}

double NNfunction_b2b2::synapse0x2477390() {
   return (neuron0x246d250()*0.0473888);
}

double NNfunction_b2b2::synapse0x24773d0() {
   return (neuron0x246d590()*0.000226676);
}

double NNfunction_b2b2::synapse0x2477410() {
   return (neuron0x246d8d0()*-0.2237);
}

double NNfunction_b2b2::synapse0x2477450() {
   return (neuron0x246dc10()*0.504244);
}

double NNfunction_b2b2::synapse0x2477490() {
   return (neuron0x246df50()*0.0640438);
}

double NNfunction_b2b2::synapse0x2476f20() {
   return (neuron0x246e290()*-0.0281582);
}

double NNfunction_b2b2::synapse0x2476f60() {
   return (neuron0x246e7f0()*0.00719745);
}

double NNfunction_b2b2::synapse0x24775e0() {
   return (neuron0x246ea10()*-0.00181205);
}

double NNfunction_b2b2::synapse0x2477620() {
   return (neuron0x246ed50()*-0.107806);
}

double NNfunction_b2b2::synapse0x2477660() {
   return (neuron0x246f090()*0.0265247);
}

double NNfunction_b2b2::synapse0x24776a0() {
   return (neuron0x246f3d0()*-0.0534721);
}

double NNfunction_b2b2::synapse0x24776e0() {
   return (neuron0x246f710()*0.00366775);
}

double NNfunction_b2b2::synapse0x2477720() {
   return (neuron0x246fa50()*-0.0451502);
}

double NNfunction_b2b2::synapse0x24778f0() {
   return (neuron0x246ae90()*-0.0169764);
}

double NNfunction_b2b2::synapse0x2480980() {
   return (neuron0x246b1d0()*0.00338216);
}

double NNfunction_b2b2::synapse0x24809c0() {
   return (neuron0x246b510()*-0.0117873);
}

double NNfunction_b2b2::synapse0x2480a00() {
   return (neuron0x246b850()*0.0208587);
}

double NNfunction_b2b2::synapse0x2480a40() {
   return (neuron0x246bb90()*0.0401368);
}

double NNfunction_b2b2::synapse0x2480a80() {
   return (neuron0x246bed0()*0.0104132);
}

double NNfunction_b2b2::synapse0x2480ac0() {
   return (neuron0x246c210()*0.0162567);
}

double NNfunction_b2b2::synapse0x2480b00() {
   return (neuron0x246c550()*0.0152726);
}

double NNfunction_b2b2::synapse0x2480b40() {
   return (neuron0x246c890()*-0.0400904);
}

double NNfunction_b2b2::synapse0x2480b80() {
   return (neuron0x246cbd0()*0.0175306);
}

double NNfunction_b2b2::synapse0x2480bc0() {
   return (neuron0x246cf10()*-0.10176);
}

double NNfunction_b2b2::synapse0x2480c00() {
   return (neuron0x246d250()*-5.21267e-05);
}

double NNfunction_b2b2::synapse0x2480c40() {
   return (neuron0x246d590()*-0.00247859);
}

double NNfunction_b2b2::synapse0x2480c80() {
   return (neuron0x246d8d0()*-0.366648);
}

double NNfunction_b2b2::synapse0x2480cc0() {
   return (neuron0x246dc10()*0.0110907);
}

double NNfunction_b2b2::synapse0x2480d00() {
   return (neuron0x246df50()*0.010098);
}

double NNfunction_b2b2::synapse0x24807d0() {
   return (neuron0x246e290()*-0.0635857);
}

double NNfunction_b2b2::synapse0x2480810() {
   return (neuron0x246e7f0()*-0.00993074);
}

double NNfunction_b2b2::synapse0x2480e50() {
   return (neuron0x246ea10()*0.00253848);
}

double NNfunction_b2b2::synapse0x2480e90() {
   return (neuron0x246ed50()*-0.235068);
}

double NNfunction_b2b2::synapse0x2480ed0() {
   return (neuron0x246f090()*-0.0117985);
}

double NNfunction_b2b2::synapse0x2480f10() {
   return (neuron0x246f3d0()*-0.0429051);
}

double NNfunction_b2b2::synapse0x2480f50() {
   return (neuron0x246f710()*-0.00408346);
}

double NNfunction_b2b2::synapse0x2480f90() {
   return (neuron0x246fa50()*-0.000381608);
}

double NNfunction_b2b2::synapse0x2481310() {
   return (neuron0x246ae90()*0.372956);
}

double NNfunction_b2b2::synapse0x2481350() {
   return (neuron0x246b1d0()*0.0192183);
}

double NNfunction_b2b2::synapse0x2481390() {
   return (neuron0x246b510()*0.125899);
}

double NNfunction_b2b2::synapse0x24813d0() {
   return (neuron0x246b850()*-0.0155837);
}

double NNfunction_b2b2::synapse0x2481410() {
   return (neuron0x246bb90()*-0.218638);
}

double NNfunction_b2b2::synapse0x2481450() {
   return (neuron0x246bed0()*-0.0260862);
}

double NNfunction_b2b2::synapse0x2481490() {
   return (neuron0x246c210()*-0.0244732);
}

double NNfunction_b2b2::synapse0x24814d0() {
   return (neuron0x246c550()*0.015911);
}

double NNfunction_b2b2::synapse0x2481510() {
   return (neuron0x246c890()*0.0477016);
}

double NNfunction_b2b2::synapse0x2481550() {
   return (neuron0x246cbd0()*-0.0449676);
}

double NNfunction_b2b2::synapse0x2481590() {
   return (neuron0x246cf10()*-0.0144537);
}

double NNfunction_b2b2::synapse0x24815d0() {
   return (neuron0x246d250()*-0.0254025);
}

double NNfunction_b2b2::synapse0x2481610() {
   return (neuron0x246d590()*-0.0209539);
}

double NNfunction_b2b2::synapse0x2481650() {
   return (neuron0x246d8d0()*-0.524656);
}

double NNfunction_b2b2::synapse0x2481690() {
   return (neuron0x246dc10()*-0.00317749);
}

double NNfunction_b2b2::synapse0x24816d0() {
   return (neuron0x246df50()*-0.0132619);
}

double NNfunction_b2b2::synapse0x2481160() {
   return (neuron0x246e290()*-0.0376454);
}

double NNfunction_b2b2::synapse0x24811a0() {
   return (neuron0x246e7f0()*0.0128504);
}

double NNfunction_b2b2::synapse0x2481820() {
   return (neuron0x246ea10()*-0.0216398);
}

double NNfunction_b2b2::synapse0x2481860() {
   return (neuron0x246ed50()*-0.080614);
}

double NNfunction_b2b2::synapse0x24818a0() {
   return (neuron0x246f090()*0.0589429);
}

double NNfunction_b2b2::synapse0x24818e0() {
   return (neuron0x246f3d0()*0.160811);
}

double NNfunction_b2b2::synapse0x2481920() {
   return (neuron0x246f710()*0.028044);
}

double NNfunction_b2b2::synapse0x2481960() {
   return (neuron0x246fa50()*-3.81324);
}

double NNfunction_b2b2::synapse0x2481ce0() {
   return (neuron0x246ae90()*-0.0424394);
}

double NNfunction_b2b2::synapse0x2481d20() {
   return (neuron0x246b1d0()*-0.0446304);
}

double NNfunction_b2b2::synapse0x2481d60() {
   return (neuron0x246b510()*0.000347057);
}

double NNfunction_b2b2::synapse0x2481da0() {
   return (neuron0x246b850()*0.0566524);
}

double NNfunction_b2b2::synapse0x2481de0() {
   return (neuron0x246bb90()*0.0983752);
}

double NNfunction_b2b2::synapse0x2481e20() {
   return (neuron0x246bed0()*-0.0432039);
}

double NNfunction_b2b2::synapse0x2481e60() {
   return (neuron0x246c210()*0.0585967);
}

double NNfunction_b2b2::synapse0x2481ea0() {
   return (neuron0x246c550()*0.0969409);
}

double NNfunction_b2b2::synapse0x2481ee0() {
   return (neuron0x246c890()*0.134308);
}

double NNfunction_b2b2::synapse0x2481f20() {
   return (neuron0x246cbd0()*-0.00894152);
}

double NNfunction_b2b2::synapse0x2481f60() {
   return (neuron0x246cf10()*-0.211827);
}

double NNfunction_b2b2::synapse0x2481fa0() {
   return (neuron0x246d250()*-0.0341473);
}

double NNfunction_b2b2::synapse0x2481fe0() {
   return (neuron0x246d590()*-0.0517582);
}

double NNfunction_b2b2::synapse0x2482020() {
   return (neuron0x246d8d0()*1.49126);
}

double NNfunction_b2b2::synapse0x2482060() {
   return (neuron0x246dc10()*0.0301305);
}

double NNfunction_b2b2::synapse0x24820a0() {
   return (neuron0x246df50()*0.0569215);
}

double NNfunction_b2b2::synapse0x2481b30() {
   return (neuron0x246e290()*-0.0989943);
}

double NNfunction_b2b2::synapse0x2481b70() {
   return (neuron0x246e7f0()*-0.0285935);
}

double NNfunction_b2b2::synapse0x24821f0() {
   return (neuron0x246ea10()*-0.0304705);
}

double NNfunction_b2b2::synapse0x2482230() {
   return (neuron0x246ed50()*0.661959);
}

double NNfunction_b2b2::synapse0x2482270() {
   return (neuron0x246f090()*0.00714392);
}

double NNfunction_b2b2::synapse0x24822b0() {
   return (neuron0x246f3d0()*-0.0454541);
}

double NNfunction_b2b2::synapse0x24822f0() {
   return (neuron0x246f710()*-0.00959498);
}

double NNfunction_b2b2::synapse0x2482330() {
   return (neuron0x246fa50()*0.0547644);
}

double NNfunction_b2b2::synapse0x24826b0() {
   return (neuron0x246ae90()*-0.202461);
}

double NNfunction_b2b2::synapse0x24826f0() {
   return (neuron0x246b1d0()*-0.290806);
}

double NNfunction_b2b2::synapse0x2482730() {
   return (neuron0x246b510()*-0.0698929);
}

double NNfunction_b2b2::synapse0x2482770() {
   return (neuron0x246b850()*0.0350101);
}

double NNfunction_b2b2::synapse0x24827b0() {
   return (neuron0x246bb90()*0.200825);
}

double NNfunction_b2b2::synapse0x24827f0() {
   return (neuron0x246bed0()*-0.0697383);
}

double NNfunction_b2b2::synapse0x2482830() {
   return (neuron0x246c210()*0.209966);
}

double NNfunction_b2b2::synapse0x2482870() {
   return (neuron0x246c550()*-0.0382575);
}

double NNfunction_b2b2::synapse0x24828b0() {
   return (neuron0x246c890()*0.00445953);
}

double NNfunction_b2b2::synapse0x24828f0() {
   return (neuron0x246cbd0()*-0.0961314);
}

double NNfunction_b2b2::synapse0x2482930() {
   return (neuron0x246cf10()*-0.0152503);
}

double NNfunction_b2b2::synapse0x2482970() {
   return (neuron0x246d250()*0.0483961);
}

double NNfunction_b2b2::synapse0x24829b0() {
   return (neuron0x246d590()*0.0453637);
}

double NNfunction_b2b2::synapse0x24829f0() {
   return (neuron0x246d8d0()*0.441875);
}

double NNfunction_b2b2::synapse0x2482a30() {
   return (neuron0x246dc10()*0.195311);
}

double NNfunction_b2b2::synapse0x2482a70() {
   return (neuron0x246df50()*0.123163);
}

double NNfunction_b2b2::synapse0x2482500() {
   return (neuron0x246e290()*-0.0338357);
}

double NNfunction_b2b2::synapse0x2482540() {
   return (neuron0x246e7f0()*0.0828571);
}

double NNfunction_b2b2::synapse0x2482bc0() {
   return (neuron0x246ea10()*0.0347711);
}

double NNfunction_b2b2::synapse0x2482c00() {
   return (neuron0x246ed50()*0.355086);
}

double NNfunction_b2b2::synapse0x2482c40() {
   return (neuron0x246f090()*0.021008);
}

double NNfunction_b2b2::synapse0x2482c80() {
   return (neuron0x246f3d0()*0.474656);
}

double NNfunction_b2b2::synapse0x2482cc0() {
   return (neuron0x246f710()*-0.0446047);
}

double NNfunction_b2b2::synapse0x2482d00() {
   return (neuron0x246fa50()*0.0456033);
}

double NNfunction_b2b2::synapse0x2483080() {
   return (neuron0x246ae90()*0.0747689);
}

double NNfunction_b2b2::synapse0x24830c0() {
   return (neuron0x246b1d0()*-0.00681592);
}

double NNfunction_b2b2::synapse0x2483100() {
   return (neuron0x246b510()*-0.0358524);
}

double NNfunction_b2b2::synapse0x2483140() {
   return (neuron0x246b850()*2.37268);
}

double NNfunction_b2b2::synapse0x2483180() {
   return (neuron0x246bb90()*0.0180657);
}

double NNfunction_b2b2::synapse0x24831c0() {
   return (neuron0x246bed0()*0.0132228);
}

double NNfunction_b2b2::synapse0x2483200() {
   return (neuron0x246c210()*-0.0118114);
}

double NNfunction_b2b2::synapse0x2483240() {
   return (neuron0x246c550()*-0.0119236);
}

double NNfunction_b2b2::synapse0x2483280() {
   return (neuron0x246c890()*0.00105723);
}

double NNfunction_b2b2::synapse0x24832c0() {
   return (neuron0x246cbd0()*0.00903933);
}

double NNfunction_b2b2::synapse0x2483300() {
   return (neuron0x246cf10()*0.00647731);
}

double NNfunction_b2b2::synapse0x2483340() {
   return (neuron0x246d250()*-0.00362826);
}

double NNfunction_b2b2::synapse0x2483380() {
   return (neuron0x246d590()*0.00610939);
}

double NNfunction_b2b2::synapse0x24833c0() {
   return (neuron0x246d8d0()*0.0330336);
}

double NNfunction_b2b2::synapse0x2483400() {
   return (neuron0x246dc10()*-0.00483045);
}

double NNfunction_b2b2::synapse0x2483440() {
   return (neuron0x246df50()*0.0389653);
}

double NNfunction_b2b2::synapse0x2482ed0() {
   return (neuron0x246e290()*0.0526407);
}

double NNfunction_b2b2::synapse0x2482f10() {
   return (neuron0x246e7f0()*0.00256301);
}

double NNfunction_b2b2::synapse0x2483590() {
   return (neuron0x246ea10()*0.00405501);
}

double NNfunction_b2b2::synapse0x24835d0() {
   return (neuron0x246ed50()*0.179013);
}

double NNfunction_b2b2::synapse0x2483610() {
   return (neuron0x246f090()*-0.00577439);
}

double NNfunction_b2b2::synapse0x2483650() {
   return (neuron0x246f3d0()*0.0276053);
}

double NNfunction_b2b2::synapse0x2483690() {
   return (neuron0x246f710()*-0.00104067);
}

double NNfunction_b2b2::synapse0x24836d0() {
   return (neuron0x246fa50()*-0.0854529);
}

double NNfunction_b2b2::synapse0x2483a50() {
   return (neuron0x246ae90()*-0.0255851);
}

double NNfunction_b2b2::synapse0x2483a90() {
   return (neuron0x246b1d0()*0.0319801);
}

double NNfunction_b2b2::synapse0x2483ad0() {
   return (neuron0x246b510()*0.0356205);
}

double NNfunction_b2b2::synapse0x2483b10() {
   return (neuron0x246b850()*-0.232215);
}

double NNfunction_b2b2::synapse0x2483b50() {
   return (neuron0x246bb90()*0.200589);
}

double NNfunction_b2b2::synapse0x2483b90() {
   return (neuron0x246bed0()*-0.0168082);
}

double NNfunction_b2b2::synapse0x2483bd0() {
   return (neuron0x246c210()*0.875838);
}

double NNfunction_b2b2::synapse0x2483c10() {
   return (neuron0x246c550()*0.219285);
}

double NNfunction_b2b2::synapse0x2483c50() {
   return (neuron0x246c890()*0.0681519);
}

double NNfunction_b2b2::synapse0x2483c90() {
   return (neuron0x246cbd0()*-0.0863908);
}

double NNfunction_b2b2::synapse0x2483cd0() {
   return (neuron0x246cf10()*-0.00258844);
}

double NNfunction_b2b2::synapse0x2483d10() {
   return (neuron0x246d250()*0.0396083);
}

double NNfunction_b2b2::synapse0x2483d50() {
   return (neuron0x246d590()*0.0929494);
}

double NNfunction_b2b2::synapse0x2483d90() {
   return (neuron0x246d8d0()*-0.366114);
}

double NNfunction_b2b2::synapse0x2483dd0() {
   return (neuron0x246dc10()*-0.328238);
}

double NNfunction_b2b2::synapse0x2483e10() {
   return (neuron0x246df50()*-0.277611);
}

double NNfunction_b2b2::synapse0x24838a0() {
   return (neuron0x246e290()*-0.00959176);
}

double NNfunction_b2b2::synapse0x24838e0() {
   return (neuron0x246e7f0()*0.0323813);
}

double NNfunction_b2b2::synapse0x2483f60() {
   return (neuron0x246ea10()*0.0260652);
}

double NNfunction_b2b2::synapse0x2483fa0() {
   return (neuron0x246ed50()*-0.306906);
}

double NNfunction_b2b2::synapse0x2483fe0() {
   return (neuron0x246f090()*-0.0671528);
}

double NNfunction_b2b2::synapse0x2484020() {
   return (neuron0x246f3d0()*-0.122837);
}

double NNfunction_b2b2::synapse0x2484060() {
   return (neuron0x246f710()*-0.0310283);
}

double NNfunction_b2b2::synapse0x24840a0() {
   return (neuron0x246fa50()*0.0946616);
}

double NNfunction_b2b2::synapse0x2484420() {
   return (neuron0x246ae90()*-0.785577);
}

double NNfunction_b2b2::synapse0x2484460() {
   return (neuron0x246b1d0()*0.070214);
}

double NNfunction_b2b2::synapse0x24844a0() {
   return (neuron0x246b510()*0.191748);
}

double NNfunction_b2b2::synapse0x24844e0() {
   return (neuron0x246b850()*-0.0975624);
}

double NNfunction_b2b2::synapse0x2484520() {
   return (neuron0x246bb90()*-1.42327);
}

double NNfunction_b2b2::synapse0x2484560() {
   return (neuron0x246bed0()*-0.0746175);
}

double NNfunction_b2b2::synapse0x24845a0() {
   return (neuron0x246c210()*-0.026116);
}

double NNfunction_b2b2::synapse0x24845e0() {
   return (neuron0x246c550()*-0.0388031);
}

double NNfunction_b2b2::synapse0x2484620() {
   return (neuron0x246c890()*0.0440653);
}

double NNfunction_b2b2::synapse0x2484660() {
   return (neuron0x246cbd0()*0.0794739);
}

double NNfunction_b2b2::synapse0x24846a0() {
   return (neuron0x246cf10()*-0.0173817);
}

double NNfunction_b2b2::synapse0x24846e0() {
   return (neuron0x246d250()*-0.0377755);
}

double NNfunction_b2b2::synapse0x2484720() {
   return (neuron0x246d590()*0.0401474);
}

double NNfunction_b2b2::synapse0x2484760() {
   return (neuron0x246d8d0()*-0.192762);
}

double NNfunction_b2b2::synapse0x24847a0() {
   return (neuron0x246dc10()*0.0107901);
}

double NNfunction_b2b2::synapse0x24847e0() {
   return (neuron0x246df50()*0.128685);
}

double NNfunction_b2b2::synapse0x2484270() {
   return (neuron0x246e290()*-0.168934);
}

double NNfunction_b2b2::synapse0x24842b0() {
   return (neuron0x246e7f0()*-0.0526126);
}

double NNfunction_b2b2::synapse0x2484930() {
   return (neuron0x246ea10()*0.0472791);
}

double NNfunction_b2b2::synapse0x2484970() {
   return (neuron0x246ed50()*-0.450348);
}

double NNfunction_b2b2::synapse0x24849b0() {
   return (neuron0x246f090()*0.0838257);
}

double NNfunction_b2b2::synapse0x24849f0() {
   return (neuron0x246f3d0()*1.06686);
}

double NNfunction_b2b2::synapse0x2484a30() {
   return (neuron0x246f710()*0.124816);
}

double NNfunction_b2b2::synapse0x2484a70() {
   return (neuron0x246fa50()*0.440072);
}

double NNfunction_b2b2::synapse0x2484df0() {
   return (neuron0x246ae90()*0.194829);
}

double NNfunction_b2b2::synapse0x2484e30() {
   return (neuron0x246b1d0()*-0.0301411);
}

double NNfunction_b2b2::synapse0x2484e70() {
   return (neuron0x246b510()*0.0950347);
}

double NNfunction_b2b2::synapse0x2484eb0() {
   return (neuron0x246b850()*0.114842);
}

double NNfunction_b2b2::synapse0x2484ef0() {
   return (neuron0x246bb90()*0.352351);
}

double NNfunction_b2b2::synapse0x2484f30() {
   return (neuron0x246bed0()*-0.0331427);
}

double NNfunction_b2b2::synapse0x2484f70() {
   return (neuron0x246c210()*0.0338217);
}

double NNfunction_b2b2::synapse0x2484fb0() {
   return (neuron0x246c550()*0.0490731);
}

double NNfunction_b2b2::synapse0x2484ff0() {
   return (neuron0x246c890()*0.198386);
}

double NNfunction_b2b2::synapse0x2485030() {
   return (neuron0x246cbd0()*-0.192237);
}

double NNfunction_b2b2::synapse0x2485070() {
   return (neuron0x246cf10()*-0.00968483);
}

double NNfunction_b2b2::synapse0x24850b0() {
   return (neuron0x246d250()*0.0770917);
}

double NNfunction_b2b2::synapse0x24850f0() {
   return (neuron0x246d590()*0.0334065);
}

double NNfunction_b2b2::synapse0x2485130() {
   return (neuron0x246d8d0()*-1.01708);
}

double NNfunction_b2b2::synapse0x2485170() {
   return (neuron0x246dc10()*0.0677838);
}

double NNfunction_b2b2::synapse0x24851b0() {
   return (neuron0x246df50()*0.0258433);
}

double NNfunction_b2b2::synapse0x2484c40() {
   return (neuron0x246e290()*-0.157558);
}

double NNfunction_b2b2::synapse0x2484c80() {
   return (neuron0x246e7f0()*-0.0213928);
}

double NNfunction_b2b2::synapse0x2485300() {
   return (neuron0x246ea10()*0.0525789);
}

double NNfunction_b2b2::synapse0x2485340() {
   return (neuron0x246ed50()*-0.905293);
}

double NNfunction_b2b2::synapse0x2485380() {
   return (neuron0x246f090()*0.0595489);
}

double NNfunction_b2b2::synapse0x24853c0() {
   return (neuron0x246f3d0()*0.291749);
}

double NNfunction_b2b2::synapse0x2485400() {
   return (neuron0x246f710()*0.010098);
}

double NNfunction_b2b2::synapse0x2485440() {
   return (neuron0x246fa50()*-0.219072);
}

double NNfunction_b2b2::synapse0x24857c0() {
   return (neuron0x246ae90()*-0.502933);
}

double NNfunction_b2b2::synapse0x2479d90() {
   return (neuron0x246b1d0()*-0.0204236);
}

double NNfunction_b2b2::synapse0x2479dd0() {
   return (neuron0x246b510()*-0.0056429);
}

double NNfunction_b2b2::synapse0x2479e10() {
   return (neuron0x246b850()*0.0423318);
}

double NNfunction_b2b2::synapse0x247a060() {
   return (neuron0x246bb90()*1.17676);
}

double NNfunction_b2b2::synapse0x247a0a0() {
   return (neuron0x246bed0()*-0.00379629);
}

double NNfunction_b2b2::synapse0x247a0e0() {
   return (neuron0x246c210()*-0.0228945);
}

double NNfunction_b2b2::synapse0x247a330() {
   return (neuron0x246c550()*0.0292001);
}

double NNfunction_b2b2::synapse0x247a370() {
   return (neuron0x246c890()*-0.0152255);
}

double NNfunction_b2b2::synapse0x247a5c0() {
   return (neuron0x246cbd0()*-0.040919);
}

double NNfunction_b2b2::synapse0x247a600() {
   return (neuron0x246cf10()*0.0315998);
}

double NNfunction_b2b2::synapse0x247a640() {
   return (neuron0x246d250()*-0.0331636);
}

double NNfunction_b2b2::synapse0x247a890() {
   return (neuron0x246d590()*-0.014633);
}

double NNfunction_b2b2::synapse0x247a8d0() {
   return (neuron0x246d8d0()*-0.0650324);
}

double NNfunction_b2b2::synapse0x247ab20() {
   return (neuron0x246dc10()*0.0486296);
}

double NNfunction_b2b2::synapse0x247ab60() {
   return (neuron0x246df50()*-0.0444359);
}

double NNfunction_b2b2::synapse0x2485610() {
   return (neuron0x246e290()*0.0161134);
}

double NNfunction_b2b2::synapse0x2485650() {
   return (neuron0x246e7f0()*0.0404832);
}

double NNfunction_b2b2::synapse0x247acb0() {
   return (neuron0x246ea10()*0.0064748);
}

double NNfunction_b2b2::synapse0x247b1c0() {
   return (neuron0x246ed50()*-0.00743325);
}

double NNfunction_b2b2::synapse0x247b200() {
   return (neuron0x246f090()*0.114451);
}

double NNfunction_b2b2::synapse0x247b240() {
   return (neuron0x246f3d0()*1.03397);
}

double NNfunction_b2b2::synapse0x247b490() {
   return (neuron0x246f710()*-0.0264713);
}

double NNfunction_b2b2::synapse0x247b4d0() {
   return (neuron0x246fa50()*-0.140773);
}

double NNfunction_b2b2::synapse0x247ad80() {
   return (neuron0x246ae90()*-0.0933968);
}

double NNfunction_b2b2::synapse0x247adc0() {
   return (neuron0x246b1d0()*0.000344465);
}

double NNfunction_b2b2::synapse0x247ae00() {
   return (neuron0x246b510()*0.0136207);
}

double NNfunction_b2b2::synapse0x247ae40() {
   return (neuron0x246b850()*0.094266);
}

double NNfunction_b2b2::synapse0x247b7c0() {
   return (neuron0x246bb90()*-0.0861453);
}

double NNfunction_b2b2::synapse0x2487b10() {
   return (neuron0x246bed0()*0.0053284);
}

double NNfunction_b2b2::synapse0x2487b50() {
   return (neuron0x246c210()*-0.00191497);
}

double NNfunction_b2b2::synapse0x2487b90() {
   return (neuron0x246c550()*0.00820574);
}

double NNfunction_b2b2::synapse0x2487bd0() {
   return (neuron0x246c890()*0.0191793);
}

double NNfunction_b2b2::synapse0x2487c10() {
   return (neuron0x246cbd0()*0.017834);
}

double NNfunction_b2b2::synapse0x2487c50() {
   return (neuron0x246cf10()*0.0127091);
}

double NNfunction_b2b2::synapse0x2487c90() {
   return (neuron0x246d250()*0.0294336);
}

double NNfunction_b2b2::synapse0x2487cd0() {
   return (neuron0x246d590()*0.0122724);
}

double NNfunction_b2b2::synapse0x2487d10() {
   return (neuron0x246d8d0()*-0.720791);
}

double NNfunction_b2b2::synapse0x2487d50() {
   return (neuron0x246dc10()*0.0112254);
}

double NNfunction_b2b2::synapse0x2487d90() {
   return (neuron0x246df50()*-6.28807e-05);
}

double NNfunction_b2b2::synapse0x247b6a0() {
   return (neuron0x246e290()*-0.127051);
}

double NNfunction_b2b2::synapse0x247b6e0() {
   return (neuron0x246e7f0()*0.0195544);
}

double NNfunction_b2b2::synapse0x2487ee0() {
   return (neuron0x246ea10()*0.0110438);
}

double NNfunction_b2b2::synapse0x2487f20() {
   return (neuron0x246ed50()*1.90581);
}

double NNfunction_b2b2::synapse0x2487f60() {
   return (neuron0x246f090()*-0.000511135);
}

double NNfunction_b2b2::synapse0x2487fa0() {
   return (neuron0x246f3d0()*0.0173699);
}

double NNfunction_b2b2::synapse0x2487fe0() {
   return (neuron0x246f710()*-0.00561024);
}

double NNfunction_b2b2::synapse0x2488020() {
   return (neuron0x246fa50()*0.016716);
}

double NNfunction_b2b2::synapse0x24883a0() {
   return (neuron0x246ae90()*0.148031);
}

double NNfunction_b2b2::synapse0x24883e0() {
   return (neuron0x246b1d0()*-0.0238868);
}

double NNfunction_b2b2::synapse0x2488420() {
   return (neuron0x246b510()*0.810279);
}

double NNfunction_b2b2::synapse0x2488460() {
   return (neuron0x246b850()*0.5917);
}

double NNfunction_b2b2::synapse0x24884a0() {
   return (neuron0x246bb90()*0.111848);
}

double NNfunction_b2b2::synapse0x24884e0() {
   return (neuron0x246bed0()*0.0434335);
}

double NNfunction_b2b2::synapse0x2488520() {
   return (neuron0x246c210()*-0.00182069);
}

double NNfunction_b2b2::synapse0x2488560() {
   return (neuron0x246c550()*-0.0121303);
}

double NNfunction_b2b2::synapse0x24885a0() {
   return (neuron0x246c890()*0.0138844);
}

double NNfunction_b2b2::synapse0x24885e0() {
   return (neuron0x246cbd0()*0.0171807);
}

double NNfunction_b2b2::synapse0x2488620() {
   return (neuron0x246cf10()*0.0471646);
}

double NNfunction_b2b2::synapse0x2488660() {
   return (neuron0x246d250()*0.0157012);
}

double NNfunction_b2b2::synapse0x24886a0() {
   return (neuron0x246d590()*-0.0952409);
}

double NNfunction_b2b2::synapse0x24886e0() {
   return (neuron0x246d8d0()*0.269928);
}

double NNfunction_b2b2::synapse0x2488720() {
   return (neuron0x246dc10()*-0.0336036);
}

double NNfunction_b2b2::synapse0x2488760() {
   return (neuron0x246df50()*0.0877615);
}

double NNfunction_b2b2::synapse0x24881f0() {
   return (neuron0x246e290()*0.0385069);
}

double NNfunction_b2b2::synapse0x2488230() {
   return (neuron0x246e7f0()*-0.0194204);
}

double NNfunction_b2b2::synapse0x24888b0() {
   return (neuron0x246ea10()*-0.0207937);
}

double NNfunction_b2b2::synapse0x24888f0() {
   return (neuron0x246ed50()*-0.763059);
}

double NNfunction_b2b2::synapse0x2488930() {
   return (neuron0x246f090()*0.0150312);
}

double NNfunction_b2b2::synapse0x2488970() {
   return (neuron0x246f3d0()*0.0690404);
}

double NNfunction_b2b2::synapse0x24889b0() {
   return (neuron0x246f710()*-0.034242);
}

double NNfunction_b2b2::synapse0x24889f0() {
   return (neuron0x246fa50()*0.336663);
}

double NNfunction_b2b2::synapse0x2488d70() {
   return (neuron0x246ae90()*0.0709776);
}

double NNfunction_b2b2::synapse0x2488db0() {
   return (neuron0x246b1d0()*-0.0219631);
}

double NNfunction_b2b2::synapse0x2488df0() {
   return (neuron0x246b510()*0.0962886);
}

double NNfunction_b2b2::synapse0x2488e30() {
   return (neuron0x246b850()*0.104852);
}

double NNfunction_b2b2::synapse0x2488e70() {
   return (neuron0x246bb90()*0.0188381);
}

double NNfunction_b2b2::synapse0x2488eb0() {
   return (neuron0x246bed0()*0.0409672);
}

double NNfunction_b2b2::synapse0x2488ef0() {
   return (neuron0x246c210()*-0.0937019);
}

double NNfunction_b2b2::synapse0x2488f30() {
   return (neuron0x246c550()*0.0779005);
}

double NNfunction_b2b2::synapse0x2488f70() {
   return (neuron0x246c890()*-0.241339);
}

double NNfunction_b2b2::synapse0x2488fb0() {
   return (neuron0x246cbd0()*-0.168144);
}

double NNfunction_b2b2::synapse0x2488ff0() {
   return (neuron0x246cf10()*0.148648);
}

double NNfunction_b2b2::synapse0x2489030() {
   return (neuron0x246d250()*-0.133581);
}

double NNfunction_b2b2::synapse0x2489070() {
   return (neuron0x246d590()*-0.0970872);
}

double NNfunction_b2b2::synapse0x24890b0() {
   return (neuron0x246d8d0()*0.677477);
}

double NNfunction_b2b2::synapse0x24890f0() {
   return (neuron0x246dc10()*0.0218536);
}

double NNfunction_b2b2::synapse0x2489130() {
   return (neuron0x246df50()*-0.0319);
}

double NNfunction_b2b2::synapse0x2488bc0() {
   return (neuron0x246e290()*-0.685646);
}

double NNfunction_b2b2::synapse0x2488c00() {
   return (neuron0x246e7f0()*-0.136211);
}

double NNfunction_b2b2::synapse0x2489280() {
   return (neuron0x246ea10()*-0.0821523);
}

double NNfunction_b2b2::synapse0x24892c0() {
   return (neuron0x246ed50()*1.23665);
}

double NNfunction_b2b2::synapse0x2489300() {
   return (neuron0x246f090()*0.0933397);
}

double NNfunction_b2b2::synapse0x2489340() {
   return (neuron0x246f3d0()*0.0980635);
}

double NNfunction_b2b2::synapse0x2489380() {
   return (neuron0x246f710()*-0.00986919);
}

double NNfunction_b2b2::synapse0x24893c0() {
   return (neuron0x246fa50()*0.0881736);
}

double NNfunction_b2b2::synapse0x2489740() {
   return (neuron0x246ae90()*0.107831);
}

double NNfunction_b2b2::synapse0x2489780() {
   return (neuron0x246b1d0()*0.0685762);
}

double NNfunction_b2b2::synapse0x24897c0() {
   return (neuron0x246b510()*0.00562768);
}

double NNfunction_b2b2::synapse0x2489800() {
   return (neuron0x246b850()*-0.0773753);
}

double NNfunction_b2b2::synapse0x2489840() {
   return (neuron0x246bb90()*-0.660513);
}

double NNfunction_b2b2::synapse0x2489880() {
   return (neuron0x246bed0()*0.0208092);
}

double NNfunction_b2b2::synapse0x24898c0() {
   return (neuron0x246c210()*0.0277529);
}

double NNfunction_b2b2::synapse0x2489900() {
   return (neuron0x246c550()*-0.0502164);
}

double NNfunction_b2b2::synapse0x2489940() {
   return (neuron0x246c890()*0.0161255);
}

double NNfunction_b2b2::synapse0x2489980() {
   return (neuron0x246cbd0()*-0.0571601);
}

double NNfunction_b2b2::synapse0x24899c0() {
   return (neuron0x246cf10()*0.00818494);
}

double NNfunction_b2b2::synapse0x2489a00() {
   return (neuron0x246d250()*0.0641681);
}

double NNfunction_b2b2::synapse0x2489a40() {
   return (neuron0x246d590()*0.0335302);
}

double NNfunction_b2b2::synapse0x2489a80() {
   return (neuron0x246d8d0()*1.09695);
}

double NNfunction_b2b2::synapse0x2489ac0() {
   return (neuron0x246dc10()*-0.0446529);
}

double NNfunction_b2b2::synapse0x2489b00() {
   return (neuron0x246df50()*-0.0308933);
}

double NNfunction_b2b2::synapse0x2489590() {
   return (neuron0x246e290()*0.0945415);
}

double NNfunction_b2b2::synapse0x24895d0() {
   return (neuron0x246e7f0()*0.0917835);
}

double NNfunction_b2b2::synapse0x2489c50() {
   return (neuron0x246ea10()*0.00311374);
}

double NNfunction_b2b2::synapse0x2489c90() {
   return (neuron0x246ed50()*-0.114334);
}

double NNfunction_b2b2::synapse0x2489cd0() {
   return (neuron0x246f090()*-0.129283);
}

double NNfunction_b2b2::synapse0x2489d10() {
   return (neuron0x246f3d0()*0.695926);
}

double NNfunction_b2b2::synapse0x2489d50() {
   return (neuron0x246f710()*-0.0546053);
}

double NNfunction_b2b2::synapse0x2489d90() {
   return (neuron0x246fa50()*-2.25341);
}

double NNfunction_b2b2::synapse0x248a110() {
   return (neuron0x246ae90()*0.0423364);
}

double NNfunction_b2b2::synapse0x248a150() {
   return (neuron0x246b1d0()*0.00295011);
}

double NNfunction_b2b2::synapse0x248a190() {
   return (neuron0x246b510()*0.00112797);
}

double NNfunction_b2b2::synapse0x248a1d0() {
   return (neuron0x246b850()*-0.0270443);
}

double NNfunction_b2b2::synapse0x248a210() {
   return (neuron0x246bb90()*0.0480803);
}

double NNfunction_b2b2::synapse0x248a250() {
   return (neuron0x246bed0()*0.00338718);
}

double NNfunction_b2b2::synapse0x248a290() {
   return (neuron0x246c210()*0.00177255);
}

double NNfunction_b2b2::synapse0x248a2d0() {
   return (neuron0x246c550()*-0.00193564);
}

double NNfunction_b2b2::synapse0x248a310() {
   return (neuron0x246c890()*-0.00876416);
}

double NNfunction_b2b2::synapse0x248a350() {
   return (neuron0x246cbd0()*-0.0101387);
}

double NNfunction_b2b2::synapse0x248a390() {
   return (neuron0x246cf10()*-0.00987336);
}

double NNfunction_b2b2::synapse0x248a3d0() {
   return (neuron0x246d250()*-0.0109729);
}

double NNfunction_b2b2::synapse0x248a410() {
   return (neuron0x246d590()*-0.00433326);
}

double NNfunction_b2b2::synapse0x248a450() {
   return (neuron0x246d8d0()*-1.02188);
}

double NNfunction_b2b2::synapse0x248a490() {
   return (neuron0x246dc10()*2.12023e-05);
}

double NNfunction_b2b2::synapse0x248a4d0() {
   return (neuron0x246df50()*0.00487016);
}

double NNfunction_b2b2::synapse0x2489f60() {
   return (neuron0x246e290()*-0.0362567);
}

double NNfunction_b2b2::synapse0x2489fa0() {
   return (neuron0x246e7f0()*-0.00866627);
}

double NNfunction_b2b2::synapse0x248a620() {
   return (neuron0x246ea10()*-0.00859833);
}

double NNfunction_b2b2::synapse0x248a660() {
   return (neuron0x246ed50()*0.711242);
}

double NNfunction_b2b2::synapse0x248a6a0() {
   return (neuron0x246f090()*0.00349267);
}

double NNfunction_b2b2::synapse0x248a6e0() {
   return (neuron0x246f3d0()*-0.00334575);
}

double NNfunction_b2b2::synapse0x248a720() {
   return (neuron0x246f710()*0.00454083);
}

double NNfunction_b2b2::synapse0x248a760() {
   return (neuron0x246fa50()*-0.0141589);
}

double NNfunction_b2b2::synapse0x248aae0() {
   return (neuron0x246ae90()*0.343287);
}

double NNfunction_b2b2::synapse0x248ab20() {
   return (neuron0x246b1d0()*0.033959);
}

double NNfunction_b2b2::synapse0x248ab60() {
   return (neuron0x246b510()*0.0164523);
}

double NNfunction_b2b2::synapse0x248aba0() {
   return (neuron0x246b850()*0.0451307);
}

double NNfunction_b2b2::synapse0x248abe0() {
   return (neuron0x246bb90()*0.786511);
}

double NNfunction_b2b2::synapse0x248ac20() {
   return (neuron0x246bed0()*-0.0169808);
}

double NNfunction_b2b2::synapse0x248ac60() {
   return (neuron0x246c210()*-0.0555534);
}

double NNfunction_b2b2::synapse0x248aca0() {
   return (neuron0x246c550()*0.0353821);
}

double NNfunction_b2b2::synapse0x248ace0() {
   return (neuron0x246c890()*0.0374425);
}

double NNfunction_b2b2::synapse0x248ad20() {
   return (neuron0x246cbd0()*-0.0346792);
}

double NNfunction_b2b2::synapse0x248ad60() {
   return (neuron0x246cf10()*0.0597838);
}

double NNfunction_b2b2::synapse0x248ada0() {
   return (neuron0x246d250()*-0.043807);
}

double NNfunction_b2b2::synapse0x248ade0() {
   return (neuron0x246d590()*-0.00641704);
}

double NNfunction_b2b2::synapse0x248ae20() {
   return (neuron0x246d8d0()*-0.294478);
}

double NNfunction_b2b2::synapse0x248ae60() {
   return (neuron0x246dc10()*0.0284746);
}

double NNfunction_b2b2::synapse0x248aea0() {
   return (neuron0x246df50()*-0.0281801);
}

double NNfunction_b2b2::synapse0x248a930() {
   return (neuron0x246e290()*0.061255);
}

double NNfunction_b2b2::synapse0x248a970() {
   return (neuron0x246e7f0()*0.00220327);
}

double NNfunction_b2b2::synapse0x248aff0() {
   return (neuron0x246ea10()*0.00939119);
}

double NNfunction_b2b2::synapse0x248b030() {
   return (neuron0x246ed50()*0.0127084);
}

double NNfunction_b2b2::synapse0x248b070() {
   return (neuron0x246f090()*0.117021);
}

double NNfunction_b2b2::synapse0x248b0b0() {
   return (neuron0x246f3d0()*1.13679);
}

double NNfunction_b2b2::synapse0x248b0f0() {
   return (neuron0x246f710()*-0.00760098);
}

double NNfunction_b2b2::synapse0x248b130() {
   return (neuron0x246fa50()*-0.0116644);
}

double NNfunction_b2b2::synapse0x248b4b0() {
   return (neuron0x246ae90()*0.0998611);
}

double NNfunction_b2b2::synapse0x248b4f0() {
   return (neuron0x246b1d0()*-0.0250834);
}

double NNfunction_b2b2::synapse0x248b530() {
   return (neuron0x246b510()*-0.0531244);
}

double NNfunction_b2b2::synapse0x248b570() {
   return (neuron0x246b850()*0.890639);
}

double NNfunction_b2b2::synapse0x248b5b0() {
   return (neuron0x246bb90()*0.124906);
}

double NNfunction_b2b2::synapse0x248b5f0() {
   return (neuron0x246bed0()*0.037549);
}

double NNfunction_b2b2::synapse0x248b630() {
   return (neuron0x246c210()*-0.0291361);
}

double NNfunction_b2b2::synapse0x248b670() {
   return (neuron0x246c550()*-0.0275909);
}

double NNfunction_b2b2::synapse0x248b6b0() {
   return (neuron0x246c890()*0.00259015);
}

double NNfunction_b2b2::synapse0x248b6f0() {
   return (neuron0x246cbd0()*0.0104834);
}

double NNfunction_b2b2::synapse0x248b730() {
   return (neuron0x246cf10()*0.0127128);
}

double NNfunction_b2b2::synapse0x248b770() {
   return (neuron0x246d250()*0.0305869);
}

double NNfunction_b2b2::synapse0x248b7b0() {
   return (neuron0x246d590()*0.0757067);
}

double NNfunction_b2b2::synapse0x248b7f0() {
   return (neuron0x246d8d0()*1.12199);
}

double NNfunction_b2b2::synapse0x248b830() {
   return (neuron0x246dc10()*-0.0405114);
}

double NNfunction_b2b2::synapse0x248b870() {
   return (neuron0x246df50()*-0.131715);
}

double NNfunction_b2b2::synapse0x248b300() {
   return (neuron0x246e290()*0.0265129);
}

double NNfunction_b2b2::synapse0x248b340() {
   return (neuron0x246e7f0()*-0.00260589);
}

double NNfunction_b2b2::synapse0x248b9c0() {
   return (neuron0x246ea10()*-0.00228862);
}

double NNfunction_b2b2::synapse0x248ba00() {
   return (neuron0x246ed50()*0.573642);
}

double NNfunction_b2b2::synapse0x248ba40() {
   return (neuron0x246f090()*-0.0113363);
}

double NNfunction_b2b2::synapse0x248ba80() {
   return (neuron0x246f3d0()*0.0556946);
}

double NNfunction_b2b2::synapse0x248bac0() {
   return (neuron0x246f710()*0.00445067);
}

double NNfunction_b2b2::synapse0x248bb00() {
   return (neuron0x246fa50()*-0.326995);
}

double NNfunction_b2b2::synapse0x248be80() {
   return (neuron0x246ae90()*-0.0881573);
}

double NNfunction_b2b2::synapse0x248bec0() {
   return (neuron0x246b1d0()*0.000652062);
}

double NNfunction_b2b2::synapse0x248bf00() {
   return (neuron0x246b510()*-0.0597711);
}

double NNfunction_b2b2::synapse0x248bf40() {
   return (neuron0x246b850()*-0.0379141);
}

double NNfunction_b2b2::synapse0x248bf80() {
   return (neuron0x246bb90()*-0.0238772);
}

double NNfunction_b2b2::synapse0x248bfc0() {
   return (neuron0x246bed0()*-0.0360713);
}

double NNfunction_b2b2::synapse0x248c000() {
   return (neuron0x246c210()*0.0340474);
}

double NNfunction_b2b2::synapse0x248c040() {
   return (neuron0x246c550()*0.00389825);
}

double NNfunction_b2b2::synapse0x248c080() {
   return (neuron0x246c890()*-0.00394471);
}

double NNfunction_b2b2::synapse0x248c0c0() {
   return (neuron0x246cbd0()*-0.00646746);
}

double NNfunction_b2b2::synapse0x248c100() {
   return (neuron0x246cf10()*-0.0122159);
}

double NNfunction_b2b2::synapse0x248c140() {
   return (neuron0x246d250()*0.000509312);
}

double NNfunction_b2b2::synapse0x248c180() {
   return (neuron0x246d590()*-0.00922807);
}

double NNfunction_b2b2::synapse0x248c1c0() {
   return (neuron0x246d8d0()*3.10698);
}

double NNfunction_b2b2::synapse0x248c200() {
   return (neuron0x246dc10()*0.0209782);
}

double NNfunction_b2b2::synapse0x248c240() {
   return (neuron0x246df50()*0.015776);
}

double NNfunction_b2b2::synapse0x248bcd0() {
   return (neuron0x246e290()*0.0138509);
}

double NNfunction_b2b2::synapse0x248bd10() {
   return (neuron0x246e7f0()*0.00406859);
}

double NNfunction_b2b2::synapse0x248c390() {
   return (neuron0x246ea10()*-0.00939491);
}

double NNfunction_b2b2::synapse0x248c3d0() {
   return (neuron0x246ed50()*-2.64103);
}

double NNfunction_b2b2::synapse0x248c410() {
   return (neuron0x246f090()*0.0136509);
}

double NNfunction_b2b2::synapse0x248c450() {
   return (neuron0x246f3d0()*-0.0520845);
}

double NNfunction_b2b2::synapse0x248c490() {
   return (neuron0x246f710()*0.00451232);
}

double NNfunction_b2b2::synapse0x248c4d0() {
   return (neuron0x246fa50()*0.0805185);
}

double NNfunction_b2b2::synapse0x2474f80() {
   return (neuron0x246ae90()*-0.0350421);
}

double NNfunction_b2b2::synapse0x2474fc0() {
   return (neuron0x246b1d0()*-0.0132563);
}

double NNfunction_b2b2::synapse0x2475000() {
   return (neuron0x246b510()*-0.00491451);
}

double NNfunction_b2b2::synapse0x2475040() {
   return (neuron0x246b850()*0.12095);
}

double NNfunction_b2b2::synapse0x2475080() {
   return (neuron0x246bb90()*0.0183844);
}

double NNfunction_b2b2::synapse0x24750c0() {
   return (neuron0x246bed0()*-0.00346834);
}

double NNfunction_b2b2::synapse0x2475100() {
   return (neuron0x246c210()*-0.0114492);
}

double NNfunction_b2b2::synapse0x2475140() {
   return (neuron0x246c550()*-0.0338325);
}

double NNfunction_b2b2::synapse0x248cc60() {
   return (neuron0x246c890()*-0.00752104);
}

double NNfunction_b2b2::synapse0x248cca0() {
   return (neuron0x246cbd0()*0.0384411);
}

double NNfunction_b2b2::synapse0x248cce0() {
   return (neuron0x246cf10()*0.0312606);
}

double NNfunction_b2b2::synapse0x248cd20() {
   return (neuron0x246d250()*0.0308584);
}

double NNfunction_b2b2::synapse0x248cd60() {
   return (neuron0x246d590()*0.0234165);
}

double NNfunction_b2b2::synapse0x248cda0() {
   return (neuron0x246d8d0()*1.76452);
}

double NNfunction_b2b2::synapse0x248cde0() {
   return (neuron0x246dc10()*-0.0319699);
}

double NNfunction_b2b2::synapse0x248ce20() {
   return (neuron0x246df50()*-0.0313665);
}

double NNfunction_b2b2::synapse0x248c6a0() {
   return (neuron0x246e290()*0.0393821);
}

double NNfunction_b2b2::synapse0x248c6e0() {
   return (neuron0x246e7f0()*0.0103707);
}

double NNfunction_b2b2::synapse0x248cf70() {
   return (neuron0x246ea10()*0.0217444);
}

double NNfunction_b2b2::synapse0x248cfb0() {
   return (neuron0x246ed50()*1.34656);
}

double NNfunction_b2b2::synapse0x248cff0() {
   return (neuron0x246f090()*-0.00446974);
}

double NNfunction_b2b2::synapse0x248d030() {
   return (neuron0x246f3d0()*0.066086);
}

double NNfunction_b2b2::synapse0x248d070() {
   return (neuron0x246f710()*-0.0138102);
}

double NNfunction_b2b2::synapse0x248d0b0() {
   return (neuron0x246fa50()*-0.224183);
}

double NNfunction_b2b2::synapse0x248d430() {
   return (neuron0x246ae90()*0.0900312);
}

double NNfunction_b2b2::synapse0x248d470() {
   return (neuron0x246b1d0()*0.114466);
}

double NNfunction_b2b2::synapse0x248d4b0() {
   return (neuron0x246b510()*0.252274);
}

double NNfunction_b2b2::synapse0x248d4f0() {
   return (neuron0x246b850()*-0.713717);
}

double NNfunction_b2b2::synapse0x248d530() {
   return (neuron0x246bb90()*0.216783);
}

double NNfunction_b2b2::synapse0x248d570() {
   return (neuron0x246bed0()*0.129837);
}

double NNfunction_b2b2::synapse0x248d5b0() {
   return (neuron0x246c210()*-0.0148186);
}

double NNfunction_b2b2::synapse0x248d5f0() {
   return (neuron0x246c550()*-0.0151046);
}

double NNfunction_b2b2::synapse0x248d630() {
   return (neuron0x246c890()*0.00812779);
}

double NNfunction_b2b2::synapse0x248d670() {
   return (neuron0x246cbd0()*-0.0207953);
}

double NNfunction_b2b2::synapse0x248d6b0() {
   return (neuron0x246cf10()*-0.0223564);
}

double NNfunction_b2b2::synapse0x248d6f0() {
   return (neuron0x246d250()*0.0484124);
}

double NNfunction_b2b2::synapse0x248d730() {
   return (neuron0x246d590()*-0.0187148);
}

double NNfunction_b2b2::synapse0x248d770() {
   return (neuron0x246d8d0()*0.468362);
}

double NNfunction_b2b2::synapse0x248d7b0() {
   return (neuron0x246dc10()*0.0823501);
}

double NNfunction_b2b2::synapse0x248d7f0() {
   return (neuron0x246df50()*-0.0735614);
}

double NNfunction_b2b2::synapse0x248d280() {
   return (neuron0x246e290()*-0.204406);
}

double NNfunction_b2b2::synapse0x248d2c0() {
   return (neuron0x246e7f0()*0.0111598);
}

double NNfunction_b2b2::synapse0x248d940() {
   return (neuron0x246ea10()*0.0722459);
}

double NNfunction_b2b2::synapse0x248d980() {
   return (neuron0x246ed50()*0.526575);
}

double NNfunction_b2b2::synapse0x248d9c0() {
   return (neuron0x246f090()*-0.0905285);
}

double NNfunction_b2b2::synapse0x248da00() {
   return (neuron0x246f3d0()*-0.143192);
}

double NNfunction_b2b2::synapse0x248da40() {
   return (neuron0x246f710()*0.0609219);
}

double NNfunction_b2b2::synapse0x248da80() {
   return (neuron0x246fa50()*0.540692);
}

double NNfunction_b2b2::synapse0x248de00() {
   return (neuron0x246ae90()*0.321506);
}

double NNfunction_b2b2::synapse0x248de40() {
   return (neuron0x246b1d0()*-0.28173);
}

double NNfunction_b2b2::synapse0x248de80() {
   return (neuron0x246b510()*0.210429);
}

double NNfunction_b2b2::synapse0x248dec0() {
   return (neuron0x246b850()*0.16751);
}

double NNfunction_b2b2::synapse0x248df00() {
   return (neuron0x246bb90()*0.0281391);
}

double NNfunction_b2b2::synapse0x248df40() {
   return (neuron0x246bed0()*0.00681622);
}

double NNfunction_b2b2::synapse0x248df80() {
   return (neuron0x246c210()*0.00776099);
}

double NNfunction_b2b2::synapse0x248dfc0() {
   return (neuron0x246c550()*-0.187712);
}

double NNfunction_b2b2::synapse0x248e000() {
   return (neuron0x246c890()*0.107587);
}

double NNfunction_b2b2::synapse0x248e040() {
   return (neuron0x246cbd0()*-0.129786);
}

double NNfunction_b2b2::synapse0x248e080() {
   return (neuron0x246cf10()*-0.135468);
}

double NNfunction_b2b2::synapse0x248e0c0() {
   return (neuron0x246d250()*-0.179295);
}

double NNfunction_b2b2::synapse0x248e100() {
   return (neuron0x246d590()*-0.119343);
}

double NNfunction_b2b2::synapse0x248e140() {
   return (neuron0x246d8d0()*-0.201546);
}

double NNfunction_b2b2::synapse0x248e180() {
   return (neuron0x246dc10()*0.115076);
}

double NNfunction_b2b2::synapse0x248e1c0() {
   return (neuron0x246df50()*-0.216747);
}

double NNfunction_b2b2::synapse0x248dc50() {
   return (neuron0x246e290()*-0.251575);
}

double NNfunction_b2b2::synapse0x248dc90() {
   return (neuron0x246e7f0()*0.0122199);
}

double NNfunction_b2b2::synapse0x247e7c0() {
   return (neuron0x246ea10()*-0.0417603);
}

double NNfunction_b2b2::synapse0x247e800() {
   return (neuron0x246ed50()*0.129927);
}

double NNfunction_b2b2::synapse0x247e840() {
   return (neuron0x246f090()*-0.0512644);
}

double NNfunction_b2b2::synapse0x247e880() {
   return (neuron0x246f3d0()*-0.220285);
}

double NNfunction_b2b2::synapse0x247e8c0() {
   return (neuron0x246f710()*0.105152);
}

double NNfunction_b2b2::synapse0x247e900() {
   return (neuron0x246fa50()*-0.0705372);
}

double NNfunction_b2b2::synapse0x247ec80() {
   return (neuron0x246ae90()*-0.135227);
}

double NNfunction_b2b2::synapse0x247ecc0() {
   return (neuron0x246b1d0()*0.0396352);
}

double NNfunction_b2b2::synapse0x247ed00() {
   return (neuron0x246b510()*0.113596);
}

double NNfunction_b2b2::synapse0x247ed40() {
   return (neuron0x246b850()*-1.41535);
}

double NNfunction_b2b2::synapse0x247ed80() {
   return (neuron0x246bb90()*-0.0211628);
}

double NNfunction_b2b2::synapse0x247edc0() {
   return (neuron0x246bed0()*0.0352322);
}

double NNfunction_b2b2::synapse0x247ee00() {
   return (neuron0x246c210()*0.00734169);
}

double NNfunction_b2b2::synapse0x247ee40() {
   return (neuron0x246c550()*0.0496863);
}

double NNfunction_b2b2::synapse0x247ee80() {
   return (neuron0x246c890()*-0.00580389);
}

double NNfunction_b2b2::synapse0x247eec0() {
   return (neuron0x246cbd0()*-0.0208247);
}

double NNfunction_b2b2::synapse0x247ef00() {
   return (neuron0x246cf10()*-0.00424307);
}

double NNfunction_b2b2::synapse0x247ef40() {
   return (neuron0x246d250()*-0.003934);
}

double NNfunction_b2b2::synapse0x247ef80() {
   return (neuron0x246d590()*-0.0427652);
}

double NNfunction_b2b2::synapse0x247efc0() {
   return (neuron0x246d8d0()*0.3501);
}

double NNfunction_b2b2::synapse0x247f000() {
   return (neuron0x246dc10()*0.0867284);
}

double NNfunction_b2b2::synapse0x247f040() {
   return (neuron0x246df50()*-0.148768);
}

double NNfunction_b2b2::synapse0x247ead0() {
   return (neuron0x246e290()*-0.178609);
}

double NNfunction_b2b2::synapse0x247eb10() {
   return (neuron0x246e7f0()*0.00319424);
}

double NNfunction_b2b2::synapse0x247f190() {
   return (neuron0x246ea10()*-0.0186661);
}

double NNfunction_b2b2::synapse0x247f1d0() {
   return (neuron0x246ed50()*0.3326);
}

double NNfunction_b2b2::synapse0x247f210() {
   return (neuron0x246f090()*-0.0429963);
}

double NNfunction_b2b2::synapse0x247f250() {
   return (neuron0x246f3d0()*-0.00151089);
}

double NNfunction_b2b2::synapse0x247f290() {
   return (neuron0x246f710()*-0.0155463);
}

double NNfunction_b2b2::synapse0x247f2d0() {
   return (neuron0x246fa50()*0.00733937);
}

double NNfunction_b2b2::synapse0x247f650() {
   return (neuron0x246ae90()*0.133272);
}

double NNfunction_b2b2::synapse0x247f690() {
   return (neuron0x246b1d0()*0.0220415);
}

double NNfunction_b2b2::synapse0x247f6d0() {
   return (neuron0x246b510()*0.0931043);
}

double NNfunction_b2b2::synapse0x247f710() {
   return (neuron0x246b850()*0.0706625);
}

double NNfunction_b2b2::synapse0x247f750() {
   return (neuron0x246bb90()*0.105029);
}

double NNfunction_b2b2::synapse0x247f790() {
   return (neuron0x246bed0()*-0.0563549);
}

double NNfunction_b2b2::synapse0x247f7d0() {
   return (neuron0x246c210()*0.000128438);
}

double NNfunction_b2b2::synapse0x247f810() {
   return (neuron0x246c550()*0.054703);
}

double NNfunction_b2b2::synapse0x247f850() {
   return (neuron0x246c890()*-0.00298565);
}

double NNfunction_b2b2::synapse0x247f890() {
   return (neuron0x246cbd0()*-0.017515);
}

double NNfunction_b2b2::synapse0x247f8d0() {
   return (neuron0x246cf10()*-0.0151245);
}

double NNfunction_b2b2::synapse0x247f910() {
   return (neuron0x246d250()*0.0644143);
}

double NNfunction_b2b2::synapse0x247f950() {
   return (neuron0x246d590()*0.0389179);
}

double NNfunction_b2b2::synapse0x247f990() {
   return (neuron0x246d8d0()*0.531433);
}

double NNfunction_b2b2::synapse0x247f9d0() {
   return (neuron0x246dc10()*0.0331812);
}

double NNfunction_b2b2::synapse0x247fa10() {
   return (neuron0x246df50()*-0.0686979);
}

double NNfunction_b2b2::synapse0x247f4a0() {
   return (neuron0x246e290()*-0.589382);
}

double NNfunction_b2b2::synapse0x247f4e0() {
   return (neuron0x246e7f0()*0.00579386);
}

double NNfunction_b2b2::synapse0x247fb60() {
   return (neuron0x246ea10()*0.0220211);
}

double NNfunction_b2b2::synapse0x247fba0() {
   return (neuron0x246ed50()*-0.0329378);
}

double NNfunction_b2b2::synapse0x247fbe0() {
   return (neuron0x246f090()*-0.754134);
}

double NNfunction_b2b2::synapse0x247fc20() {
   return (neuron0x246f3d0()*-0.0628417);
}

double NNfunction_b2b2::synapse0x247fc60() {
   return (neuron0x246f710()*-0.00583402);
}

double NNfunction_b2b2::synapse0x247fca0() {
   return (neuron0x246fa50()*0.216603);
}

double NNfunction_b2b2::synapse0x2480020() {
   return (neuron0x246ae90()*0.0504775);
}

double NNfunction_b2b2::synapse0x2480060() {
   return (neuron0x246b1d0()*-0.00186128);
}

double NNfunction_b2b2::synapse0x24800a0() {
   return (neuron0x246b510()*-0.0117053);
}

double NNfunction_b2b2::synapse0x24800e0() {
   return (neuron0x246b850()*-2.68459);
}

double NNfunction_b2b2::synapse0x2480120() {
   return (neuron0x246bb90()*-0.0130703);
}

double NNfunction_b2b2::synapse0x2480160() {
   return (neuron0x246bed0()*0.00263035);
}

double NNfunction_b2b2::synapse0x24801a0() {
   return (neuron0x246c210()*-0.0154997);
}

double NNfunction_b2b2::synapse0x24801e0() {
   return (neuron0x246c550()*-0.0158437);
}

double NNfunction_b2b2::synapse0x2480220() {
   return (neuron0x246c890()*0.004899);
}

double NNfunction_b2b2::synapse0x2480260() {
   return (neuron0x246cbd0()*0.00315947);
}

double NNfunction_b2b2::synapse0x24802a0() {
   return (neuron0x246cf10()*-0.000286207);
}

double NNfunction_b2b2::synapse0x24802e0() {
   return (neuron0x246d250()*-0.00150408);
}

double NNfunction_b2b2::synapse0x2480320() {
   return (neuron0x246d590()*0.0028266);
}

double NNfunction_b2b2::synapse0x2480360() {
   return (neuron0x246d8d0()*-0.148347);
}

double NNfunction_b2b2::synapse0x24803a0() {
   return (neuron0x246dc10()*-0.0136271);
}

double NNfunction_b2b2::synapse0x24803e0() {
   return (neuron0x246df50()*0.0233153);
}

double NNfunction_b2b2::synapse0x247fe70() {
   return (neuron0x246e290()*0.0400837);
}

double NNfunction_b2b2::synapse0x247feb0() {
   return (neuron0x246e7f0()*-0.000273823);
}

double NNfunction_b2b2::synapse0x2480530() {
   return (neuron0x246ea10()*0.00309143);
}

double NNfunction_b2b2::synapse0x2480570() {
   return (neuron0x246ed50()*0.264655);
}

double NNfunction_b2b2::synapse0x24805b0() {
   return (neuron0x246f090()*0.004001);
}

double NNfunction_b2b2::synapse0x24805f0() {
   return (neuron0x246f3d0()*-0.0090937);
}

double NNfunction_b2b2::synapse0x2480630() {
   return (neuron0x246f710()*-0.00152529);
}

double NNfunction_b2b2::synapse0x2480670() {
   return (neuron0x246fa50()*0.123981);
}

double NNfunction_b2b2::synapse0x2492540() {
   return (neuron0x246ae90()*-0.667841);
}

double NNfunction_b2b2::synapse0x2492580() {
   return (neuron0x246b1d0()*-0.0406039);
}

double NNfunction_b2b2::synapse0x24925c0() {
   return (neuron0x246b510()*-0.0801264);
}

double NNfunction_b2b2::synapse0x2492600() {
   return (neuron0x246b850()*-0.0147479);
}

double NNfunction_b2b2::synapse0x2492640() {
   return (neuron0x246bb90()*-0.686371);
}

double NNfunction_b2b2::synapse0x2492680() {
   return (neuron0x246bed0()*-0.0126635);
}

double NNfunction_b2b2::synapse0x24926c0() {
   return (neuron0x246c210()*-0.00958607);
}

double NNfunction_b2b2::synapse0x2492700() {
   return (neuron0x246c550()*-0.0441958);
}

double NNfunction_b2b2::synapse0x2492740() {
   return (neuron0x246c890()*-0.00816568);
}

double NNfunction_b2b2::synapse0x2492780() {
   return (neuron0x246cbd0()*0.0027967);
}

double NNfunction_b2b2::synapse0x24927c0() {
   return (neuron0x246cf10()*-0.0521984);
}

double NNfunction_b2b2::synapse0x2492800() {
   return (neuron0x246d250()*-0.000416935);
}

double NNfunction_b2b2::synapse0x2492840() {
   return (neuron0x246d590()*0.000206706);
}

double NNfunction_b2b2::synapse0x2492880() {
   return (neuron0x246d8d0()*0.248441);
}

double NNfunction_b2b2::synapse0x24928c0() {
   return (neuron0x246dc10()*0.0107487);
}

double NNfunction_b2b2::synapse0x2492900() {
   return (neuron0x246df50()*0.00622627);
}

double NNfunction_b2b2::synapse0x24806b0() {
   return (neuron0x246e290()*-0.0344953);
}

double NNfunction_b2b2::synapse0x24806f0() {
   return (neuron0x246e7f0()*0.00156123);
}

double NNfunction_b2b2::synapse0x2492a50() {
   return (neuron0x246ea10()*-0.0271412);
}

double NNfunction_b2b2::synapse0x2492a90() {
   return (neuron0x246ed50()*-0.385153);
}

double NNfunction_b2b2::synapse0x2492ad0() {
   return (neuron0x246f090()*-0.0209744);
}

double NNfunction_b2b2::synapse0x2492b10() {
   return (neuron0x246f3d0()*-0.184582);
}

double NNfunction_b2b2::synapse0x2492b50() {
   return (neuron0x246f710()*0.0215503);
}

double NNfunction_b2b2::synapse0x2492b90() {
   return (neuron0x246fa50()*-0.401332);
}

double NNfunction_b2b2::synapse0x2492f10() {
   return (neuron0x246ae90()*-0.113256);
}

double NNfunction_b2b2::synapse0x2492f50() {
   return (neuron0x246b1d0()*-0.00375521);
}

double NNfunction_b2b2::synapse0x2492f90() {
   return (neuron0x246b510()*-0.048172);
}

double NNfunction_b2b2::synapse0x2492fd0() {
   return (neuron0x246b850()*0.0844283);
}

double NNfunction_b2b2::synapse0x2493010() {
   return (neuron0x246bb90()*-0.138845);
}

double NNfunction_b2b2::synapse0x2493050() {
   return (neuron0x246bed0()*-0.00936148);
}

double NNfunction_b2b2::synapse0x2493090() {
   return (neuron0x246c210()*-0.00663259);
}

double NNfunction_b2b2::synapse0x24930d0() {
   return (neuron0x246c550()*-0.0212751);
}

double NNfunction_b2b2::synapse0x2493110() {
   return (neuron0x246c890()*-0.0233977);
}

double NNfunction_b2b2::synapse0x2493150() {
   return (neuron0x246cbd0()*0.0244117);
}

double NNfunction_b2b2::synapse0x2493190() {
   return (neuron0x246cf10()*0.0466033);
}

double NNfunction_b2b2::synapse0x24931d0() {
   return (neuron0x246d250()*0.0315759);
}

double NNfunction_b2b2::synapse0x2493210() {
   return (neuron0x246d590()*0.0334586);
}

double NNfunction_b2b2::synapse0x2493250() {
   return (neuron0x246d8d0()*-0.538659);
}

double NNfunction_b2b2::synapse0x2493290() {
   return (neuron0x246dc10()*-0.0134344);
}

double NNfunction_b2b2::synapse0x24932d0() {
   return (neuron0x246df50()*-0.000236188);
}

double NNfunction_b2b2::synapse0x2492d60() {
   return (neuron0x246e290()*0.233492);
}

double NNfunction_b2b2::synapse0x2492da0() {
   return (neuron0x246e7f0()*0.0262127);
}

double NNfunction_b2b2::synapse0x2493420() {
   return (neuron0x246ea10()*0.0361772);
}

double NNfunction_b2b2::synapse0x2493460() {
   return (neuron0x246ed50()*0.145157);
}

double NNfunction_b2b2::synapse0x24934a0() {
   return (neuron0x246f090()*0.00946511);
}

double NNfunction_b2b2::synapse0x24934e0() {
   return (neuron0x246f3d0()*0.00813886);
}

double NNfunction_b2b2::synapse0x2493520() {
   return (neuron0x246f710()*-0.00718206);
}

double NNfunction_b2b2::synapse0x2493560() {
   return (neuron0x246fa50()*-0.0417076);
}

double NNfunction_b2b2::synapse0x24938e0() {
   return (neuron0x246ae90()*0.0441014);
}

double NNfunction_b2b2::synapse0x2493920() {
   return (neuron0x246b1d0()*0.0250974);
}

double NNfunction_b2b2::synapse0x2493960() {
   return (neuron0x246b510()*-0.0373413);
}

double NNfunction_b2b2::synapse0x24939a0() {
   return (neuron0x246b850()*0.257811);
}

double NNfunction_b2b2::synapse0x24939e0() {
   return (neuron0x246bb90()*-0.00746314);
}

double NNfunction_b2b2::synapse0x2493a20() {
   return (neuron0x246bed0()*0.040018);
}

double NNfunction_b2b2::synapse0x2493a60() {
   return (neuron0x246c210()*-0.0697688);
}

double NNfunction_b2b2::synapse0x2493aa0() {
   return (neuron0x246c550()*-0.0335854);
}

double NNfunction_b2b2::synapse0x2493ae0() {
   return (neuron0x246c890()*-0.0140291);
}

double NNfunction_b2b2::synapse0x2493b20() {
   return (neuron0x246cbd0()*0.0206763);
}

double NNfunction_b2b2::synapse0x2493b60() {
   return (neuron0x246cf10()*-0.00855229);
}

double NNfunction_b2b2::synapse0x2493ba0() {
   return (neuron0x246d250()*-0.0993722);
}

double NNfunction_b2b2::synapse0x2493be0() {
   return (neuron0x246d590()*-0.0672464);
}

double NNfunction_b2b2::synapse0x2493c20() {
   return (neuron0x246d8d0()*0.489313);
}

double NNfunction_b2b2::synapse0x2493c60() {
   return (neuron0x246dc10()*-0.0411173);
}

double NNfunction_b2b2::synapse0x2493ca0() {
   return (neuron0x246df50()*-0.184531);
}

double NNfunction_b2b2::synapse0x2493730() {
   return (neuron0x246e290()*0.886567);
}

double NNfunction_b2b2::synapse0x2493770() {
   return (neuron0x246e7f0()*-0.00133994);
}

double NNfunction_b2b2::synapse0x2493df0() {
   return (neuron0x246ea10()*-0.0116261);
}

double NNfunction_b2b2::synapse0x2493e30() {
   return (neuron0x246ed50()*-1.2484);
}

double NNfunction_b2b2::synapse0x2493e70() {
   return (neuron0x246f090()*-0.236413);
}

double NNfunction_b2b2::synapse0x2493eb0() {
   return (neuron0x246f3d0()*0.0512212);
}

double NNfunction_b2b2::synapse0x2493ef0() {
   return (neuron0x246f710()*-0.0230989);
}

double NNfunction_b2b2::synapse0x2493f30() {
   return (neuron0x246fa50()*0.0892477);
}

double NNfunction_b2b2::synapse0x24942b0() {
   return (neuron0x246ae90()*0.374622);
}

double NNfunction_b2b2::synapse0x24942f0() {
   return (neuron0x246b1d0()*-0.147108);
}

double NNfunction_b2b2::synapse0x2494330() {
   return (neuron0x246b510()*-0.942516);
}

double NNfunction_b2b2::synapse0x2494370() {
   return (neuron0x246b850()*-0.453612);
}

double NNfunction_b2b2::synapse0x24943b0() {
   return (neuron0x246bb90()*0.404696);
}

double NNfunction_b2b2::synapse0x24943f0() {
   return (neuron0x246bed0()*-0.00525829);
}

double NNfunction_b2b2::synapse0x2494430() {
   return (neuron0x246c210()*-0.11495);
}

double NNfunction_b2b2::synapse0x2494470() {
   return (neuron0x246c550()*-0.0136597);
}

double NNfunction_b2b2::synapse0x24944b0() {
   return (neuron0x246c890()*-0.00745015);
}

double NNfunction_b2b2::synapse0x24944f0() {
   return (neuron0x246cbd0()*0.02686);
}

double NNfunction_b2b2::synapse0x2494530() {
   return (neuron0x246cf10()*0.000841413);
}

double NNfunction_b2b2::synapse0x2494570() {
   return (neuron0x246d250()*0.0168486);
}

double NNfunction_b2b2::synapse0x24945b0() {
   return (neuron0x246d590()*-0.0260592);
}

double NNfunction_b2b2::synapse0x24945f0() {
   return (neuron0x246d8d0()*-0.595894);
}

double NNfunction_b2b2::synapse0x2494630() {
   return (neuron0x246dc10()*-0.0467729);
}

double NNfunction_b2b2::synapse0x2494670() {
   return (neuron0x246df50()*-0.0370478);
}

double NNfunction_b2b2::synapse0x2494100() {
   return (neuron0x246e290()*0.15834);
}

double NNfunction_b2b2::synapse0x2494140() {
   return (neuron0x246e7f0()*-0.0541271);
}

double NNfunction_b2b2::synapse0x24947c0() {
   return (neuron0x246ea10()*-0.064726);
}

double NNfunction_b2b2::synapse0x2494800() {
   return (neuron0x246ed50()*-0.0968705);
}

double NNfunction_b2b2::synapse0x2494840() {
   return (neuron0x246f090()*-0.0957335);
}

double NNfunction_b2b2::synapse0x2494880() {
   return (neuron0x246f3d0()*0.26932);
}

double NNfunction_b2b2::synapse0x24948c0() {
   return (neuron0x246f710()*-0.00885381);
}

double NNfunction_b2b2::synapse0x2494900() {
   return (neuron0x246fa50()*0.607053);
}

double NNfunction_b2b2::synapse0x2470ea0() {
   return (neuron0x246fef0()*1.40753);
}

double NNfunction_b2b2::synapse0x2470ee0() {
   return (neuron0x2470800()*0.274684);
}

double NNfunction_b2b2::synapse0x24723b0() {
   return (neuron0x24712e0()*0.138319);
}

double NNfunction_b2b2::synapse0x24723f0() {
   return (neuron0x222ab70()*-0.433579);
}

double NNfunction_b2b2::synapse0x2472d80() {
   return (neuron0x2472100()*-0.0397664);
}

double NNfunction_b2b2::synapse0x2472dc0() {
   return (neuron0x2472ad0()*-0.65565);
}

double NNfunction_b2b2::synapse0x2473b50() {
   return (neuron0x24738a0()*0.83738);
}

double NNfunction_b2b2::synapse0x2473b90() {
   return (neuron0x2474270()*0.484652);
}

double NNfunction_b2b2::synapse0x2474520() {
   return (neuron0x2474c40()*-0.394604);
}

double NNfunction_b2b2::synapse0x2474560() {
   return (neuron0x2475720()*1.2243);
}

double NNfunction_b2b2::synapse0x2474ef0() {
   return (neuron0x24760f0()*-0.548082);
}

double NNfunction_b2b2::synapse0x2474f30() {
   return (neuron0x24731d0()*0.345121);
}

double NNfunction_b2b2::synapse0x24759d0() {
   return (neuron0x2477ca0()*0.209832);
}

double NNfunction_b2b2::synapse0x2475a10() {
   return (neuron0x2478670()*-0.492951);
}

double NNfunction_b2b2::synapse0x24763a0() {
   return (neuron0x2479040()*0.949555);
}

double NNfunction_b2b2::synapse0x24763e0() {
   return (neuron0x2479a10()*0.112619);
}

double NNfunction_b2b2::synapse0x2473480() {
   return (neuron0x247b820()*0.40798);
}

double NNfunction_b2b2::synapse0x24734c0() {
   return (neuron0x247bb00()*0.329985);
}

double NNfunction_b2b2::synapse0x2477f50() {
   return (neuron0x247c4d0()*-1.76166);
}

double NNfunction_b2b2::synapse0x2477f90() {
   return (neuron0x247cea0()*-0.197467);
}

double NNfunction_b2b2::synapse0x2478920() {
   return (neuron0x247d870()*-0.325594);
}

double NNfunction_b2b2::synapse0x2478960() {
   return (neuron0x247e240()*-0.219377);
}

double NNfunction_b2b2::synapse0x24792f0() {
   return (neuron0x2476d90()*0.210867);
}

double NNfunction_b2b2::synapse0x2479330() {
   return (neuron0x2477760()*-0.57984);
}

double NNfunction_b2b2::synapse0x2479cc0() {
   return (neuron0x2480fd0()*-1.08339);
}

double NNfunction_b2b2::synapse0x2479d00() {
   return (neuron0x24819a0()*0.753582);
}

double NNfunction_b2b2::synapse0x246de30() {
   return (neuron0x2482370()*0.734637);
}

double NNfunction_b2b2::synapse0x246de70() {
   return (neuron0x2482d40()*0.292512);
}

double NNfunction_b2b2::synapse0x247bdb0() {
   return (neuron0x2483710()*0.0179365);
}

double NNfunction_b2b2::synapse0x247bdf0() {
   return (neuron0x24840e0()*-0.406494);
}

double NNfunction_b2b2::synapse0x247c780() {
   return (neuron0x2484ab0()*-0.56346);
}

double NNfunction_b2b2::synapse0x247c7c0() {
   return (neuron0x2485480()*0.463967);
}

double NNfunction_b2b2::synapse0x247d150() {
   return (neuron0x247b510()*0.563765);
}

double NNfunction_b2b2::synapse0x247d190() {
   return (neuron0x2488060()*-0.311999);
}

double NNfunction_b2b2::synapse0x247db20() {
   return (neuron0x2488a30()*0.478258);
}

double NNfunction_b2b2::synapse0x247db60() {
   return (neuron0x2489400()*0.349245);
}

double NNfunction_b2b2::synapse0x247e4f0() {
   return (neuron0x2489dd0()*-0.0210449);
}

double NNfunction_b2b2::synapse0x247e530() {
   return (neuron0x248a7a0()*-0.522974);
}

double NNfunction_b2b2::synapse0x2477040() {
   return (neuron0x248b170()*1.58456);
}

double NNfunction_b2b2::synapse0x2477080() {
   return (neuron0x248bb40()*-0.61108);
}

double NNfunction_b2b2::synapse0x24808f0() {
   return (neuron0x248c510()*0.716567);
}

double NNfunction_b2b2::synapse0x2480930() {
   return (neuron0x248d0f0()*0.986613);
}

double NNfunction_b2b2::synapse0x2481280() {
   return (neuron0x248dac0()*-0.608966);
}

double NNfunction_b2b2::synapse0x24812c0() {
   return (neuron0x247e940()*-0.0364728);
}

double NNfunction_b2b2::synapse0x2481c50() {
   return (neuron0x247f310()*0.0277453);
}

double NNfunction_b2b2::synapse0x2481c90() {
   return (neuron0x247fce0()*0.180933);
}

double NNfunction_b2b2::synapse0x2482620() {
   return (neuron0x2492320()*0.268619);
}

double NNfunction_b2b2::synapse0x2482660() {
   return (neuron0x2492bd0()*0.158713);
}

double NNfunction_b2b2::synapse0x2482ff0() {
   return (neuron0x24935a0()*0.114003);
}

double NNfunction_b2b2::synapse0x2483030() {
   return (neuron0x2493f70()*0.369693);
}

double NNfunction_b2b2::synapse0x2485730() {
   return (neuron0x246fef0()*-0.155388);
}

double NNfunction_b2b2::synapse0x2485770() {
   return (neuron0x2470800()*0.0092538);
}

double NNfunction_b2b2::synapse0x247acf0() {
   return (neuron0x24712e0()*-0.0462109);
}

double NNfunction_b2b2::synapse0x247ad30() {
   return (neuron0x222ab70()*0.00283977);
}

double NNfunction_b2b2::synapse0x2488310() {
   return (neuron0x2472100()*0.0797592);
}

double NNfunction_b2b2::synapse0x2488350() {
   return (neuron0x2472ad0()*0.0467265);
}

double NNfunction_b2b2::synapse0x2488ce0() {
   return (neuron0x24738a0()*-1.78002);
}

double NNfunction_b2b2::synapse0x2488d20() {
   return (neuron0x2474270()*0.0213304);
}

double NNfunction_b2b2::synapse0x24896b0() {
   return (neuron0x2474c40()*-0.00594208);
}

double NNfunction_b2b2::synapse0x24896f0() {
   return (neuron0x2475720()*0.0295773);
}

double NNfunction_b2b2::synapse0x248a080() {
   return (neuron0x24760f0()*-0.0379573);
}

double NNfunction_b2b2::synapse0x248a0c0() {
   return (neuron0x24731d0()*-0.0211755);
}

double NNfunction_b2b2::synapse0x248aa50() {
   return (neuron0x2477ca0()*-0.236259);
}

double NNfunction_b2b2::synapse0x248aa90() {
   return (neuron0x2478670()*0.0158213);
}

double NNfunction_b2b2::synapse0x248b420() {
   return (neuron0x2479040()*-0.0343171);
}

double NNfunction_b2b2::synapse0x248b460() {
   return (neuron0x2479a10()*0.0656823);
}

double NNfunction_b2b2::synapse0x248bdf0() {
   return (neuron0x247b820()*-0.149404);
}

double NNfunction_b2b2::synapse0x248be30() {
   return (neuron0x247bb00()*0.00483869);
}

double NNfunction_b2b2::synapse0x248c7c0() {
   return (neuron0x247c4d0()*-0.127274);
}

double NNfunction_b2b2::synapse0x248c800() {
   return (neuron0x247cea0()*0.0567484);
}

double NNfunction_b2b2::synapse0x248d3a0() {
   return (neuron0x247d870()*-0.1174);
}

double NNfunction_b2b2::synapse0x248d3e0() {
   return (neuron0x247e240()*0.0130331);
}

double NNfunction_b2b2::synapse0x248dd70() {
   return (neuron0x2476d90()*0.00625491);
}

double NNfunction_b2b2::synapse0x248ddb0() {
   return (neuron0x2477760()*1.64574);
}

double NNfunction_b2b2::synapse0x247ebf0() {
   return (neuron0x2480fd0()*-0.0263616);
}

double NNfunction_b2b2::synapse0x247ec30() {
   return (neuron0x24819a0()*-0.104826);
}

double NNfunction_b2b2::synapse0x247f5c0() {
   return (neuron0x2482370()*-0.0559046);
}

double NNfunction_b2b2::synapse0x247f600() {
   return (neuron0x2482d40()*-0.0261694);
}

double NNfunction_b2b2::synapse0x247ff90() {
   return (neuron0x2483710()*-0.00156751);
}

double NNfunction_b2b2::synapse0x247ffd0() {
   return (neuron0x24840e0()*-0.0171588);
}

double NNfunction_b2b2::synapse0x24924b0() {
   return (neuron0x2484ab0()*0.0437282);
}

double NNfunction_b2b2::synapse0x24924f0() {
   return (neuron0x2485480()*0.0136519);
}

double NNfunction_b2b2::synapse0x2492e80() {
   return (neuron0x247b510()*0.562423);
}

double NNfunction_b2b2::synapse0x2492ec0() {
   return (neuron0x2488060()*-0.0750645);
}

double NNfunction_b2b2::synapse0x2493850() {
   return (neuron0x2488a30()*0.0205329);
}

double NNfunction_b2b2::synapse0x2493890() {
   return (neuron0x2489400()*0.0186134);
}

double NNfunction_b2b2::synapse0x2494220() {
   return (neuron0x2489dd0()*-1.81848);
}

double NNfunction_b2b2::synapse0x2494260() {
   return (neuron0x248a7a0()*0.00982556);
}

double NNfunction_b2b2::synapse0x2470110() {
   return (neuron0x248b170()*-0.0762259);
}

double NNfunction_b2b2::synapse0x2470150() {
   return (neuron0x248bb40()*0.256752);
}

double NNfunction_b2b2::synapse0x24839c0() {
   return (neuron0x248c510()*-0.461837);
}

double NNfunction_b2b2::synapse0x2483a00() {
   return (neuron0x248d0f0()*-0.0594326);
}

double NNfunction_b2b2::synapse0x2494940() {
   return (neuron0x248dac0()*0.0487753);
}

double NNfunction_b2b2::synapse0x2494980() {
   return (neuron0x247e940()*-0.0598275);
}

double NNfunction_b2b2::synapse0x24949c0() {
   return (neuron0x247f310()*-0.065491);
}

double NNfunction_b2b2::synapse0x2494a00() {
   return (neuron0x247fce0()*-0.0694111);
}

double NNfunction_b2b2::synapse0x249b8b0() {
   return (neuron0x2492320()*-0.104358);
}

double NNfunction_b2b2::synapse0x249b8f0() {
   return (neuron0x2492bd0()*0.700987);
}

double NNfunction_b2b2::synapse0x249b930() {
   return (neuron0x24935a0()*-0.107509);
}

double NNfunction_b2b2::synapse0x249b970() {
   return (neuron0x2493f70()*0.0390005);
}

double NNfunction_b2b2::synapse0x249bcf0() {
   return (neuron0x246fef0()*-3.04767);
}

double NNfunction_b2b2::synapse0x249bd30() {
   return (neuron0x2470800()*-1.40649);
}

double NNfunction_b2b2::synapse0x249bd70() {
   return (neuron0x24712e0()*0.954717);
}

double NNfunction_b2b2::synapse0x249bdb0() {
   return (neuron0x222ab70()*-0.0430291);
}

double NNfunction_b2b2::synapse0x249bdf0() {
   return (neuron0x2472100()*-1.24121);
}

double NNfunction_b2b2::synapse0x249be30() {
   return (neuron0x2472ad0()*0.550275);
}

double NNfunction_b2b2::synapse0x249be70() {
   return (neuron0x24738a0()*-1.14149);
}

double NNfunction_b2b2::synapse0x249beb0() {
   return (neuron0x2474270()*1.86572);
}

double NNfunction_b2b2::synapse0x249bef0() {
   return (neuron0x2474c40()*0.702864);
}

double NNfunction_b2b2::synapse0x249bf30() {
   return (neuron0x2475720()*-1.38269);
}

double NNfunction_b2b2::synapse0x249bf70() {
   return (neuron0x24760f0()*0.174081);
}

double NNfunction_b2b2::synapse0x249bfb0() {
   return (neuron0x24731d0()*0.217299);
}

double NNfunction_b2b2::synapse0x249bff0() {
   return (neuron0x2477ca0()*-0.498406);
}

double NNfunction_b2b2::synapse0x249c030() {
   return (neuron0x2478670()*0.504386);
}

double NNfunction_b2b2::synapse0x249c070() {
   return (neuron0x2479040()*-0.0112786);
}

double NNfunction_b2b2::synapse0x249c0b0() {
   return (neuron0x2479a10()*-0.773836);
}

double NNfunction_b2b2::synapse0x249bb40() {
   return (neuron0x247b820()*-0.109314);
}

double NNfunction_b2b2::synapse0x249bb80() {
   return (neuron0x247bb00()*-0.435509);
}

double NNfunction_b2b2::synapse0x249c200() {
   return (neuron0x247c4d0()*0.753535);
}

double NNfunction_b2b2::synapse0x249c240() {
   return (neuron0x247cea0()*-0.248449);
}

double NNfunction_b2b2::synapse0x249c280() {
   return (neuron0x247d870()*-0.48004);
}

double NNfunction_b2b2::synapse0x249c2c0() {
   return (neuron0x247e240()*-0.0651928);
}

double NNfunction_b2b2::synapse0x249c300() {
   return (neuron0x2476d90()*-0.387981);
}

double NNfunction_b2b2::synapse0x249c340() {
   return (neuron0x2477760()*0.182572);
}

double NNfunction_b2b2::synapse0x249c380() {
   return (neuron0x2480fd0()*0.961675);
}

double NNfunction_b2b2::synapse0x249c3c0() {
   return (neuron0x24819a0()*-1.30547);
}

double NNfunction_b2b2::synapse0x249c400() {
   return (neuron0x2482370()*0.669388);
}

double NNfunction_b2b2::synapse0x249c440() {
   return (neuron0x2482d40()*-2.79628);
}

double NNfunction_b2b2::synapse0x249c480() {
   return (neuron0x2483710()*-0.299865);
}

double NNfunction_b2b2::synapse0x249c4c0() {
   return (neuron0x24840e0()*0.368772);
}

double NNfunction_b2b2::synapse0x249c500() {
   return (neuron0x2484ab0()*0.703225);
}

double NNfunction_b2b2::synapse0x249c540() {
   return (neuron0x2485480()*1.36567);
}

double NNfunction_b2b2::synapse0x249c0f0() {
   return (neuron0x247b510()*1.46633);
}

double NNfunction_b2b2::synapse0x249c130() {
   return (neuron0x2488060()*0.768094);
}

double NNfunction_b2b2::synapse0x249c170() {
   return (neuron0x2488a30()*-0.191146);
}

double NNfunction_b2b2::synapse0x249c1b0() {
   return (neuron0x2489400()*0.43829);
}

double NNfunction_b2b2::synapse0x249c790() {
   return (neuron0x2489dd0()*-0.200177);
}

double NNfunction_b2b2::synapse0x249c7d0() {
   return (neuron0x248a7a0()*-0.673313);
}

double NNfunction_b2b2::synapse0x249c810() {
   return (neuron0x248b170()*0.353669);
}

double NNfunction_b2b2::synapse0x249c850() {
   return (neuron0x248bb40()*0.750716);
}

double NNfunction_b2b2::synapse0x249c890() {
   return (neuron0x248c510()*-1.62461);
}

double NNfunction_b2b2::synapse0x249c8d0() {
   return (neuron0x248d0f0()*-0.802351);
}

double NNfunction_b2b2::synapse0x249c910() {
   return (neuron0x248dac0()*-0.0874619);
}

double NNfunction_b2b2::synapse0x249c950() {
   return (neuron0x247e940()*0.59558);
}

double NNfunction_b2b2::synapse0x249c990() {
   return (neuron0x247f310()*0.47391);
}

double NNfunction_b2b2::synapse0x249c9d0() {
   return (neuron0x247fce0()*-1.80336);
}

double NNfunction_b2b2::synapse0x249ca10() {
   return (neuron0x2492320()*-0.74864);
}

double NNfunction_b2b2::synapse0x249ca50() {
   return (neuron0x2492bd0()*0.324241);
}

double NNfunction_b2b2::synapse0x249ca90() {
   return (neuron0x24935a0()*-0.255145);
}

double NNfunction_b2b2::synapse0x249cad0() {
   return (neuron0x2493f70()*-0.408728);
}

double NNfunction_b2b2::synapse0x249ce50() {
   return (neuron0x246fef0()*2.37553);
}

double NNfunction_b2b2::synapse0x249ce90() {
   return (neuron0x2470800()*0.059731);
}

double NNfunction_b2b2::synapse0x249ced0() {
   return (neuron0x24712e0()*-0.336701);
}

double NNfunction_b2b2::synapse0x249cf10() {
   return (neuron0x222ab70()*0.456051);
}

double NNfunction_b2b2::synapse0x249cf50() {
   return (neuron0x2472100()*0.371775);
}

double NNfunction_b2b2::synapse0x249cf90() {
   return (neuron0x2472ad0()*-1.21768);
}

double NNfunction_b2b2::synapse0x249cfd0() {
   return (neuron0x24738a0()*1.61748);
}

double NNfunction_b2b2::synapse0x249d010() {
   return (neuron0x2474270()*-0.561014);
}

double NNfunction_b2b2::synapse0x249d050() {
   return (neuron0x2474c40()*-1.13883);
}

double NNfunction_b2b2::synapse0x249d090() {
   return (neuron0x2475720()*1.78809);
}

double NNfunction_b2b2::synapse0x249d0d0() {
   return (neuron0x24760f0()*-0.112559);
}

double NNfunction_b2b2::synapse0x249d110() {
   return (neuron0x24731d0()*-0.194709);
}

double NNfunction_b2b2::synapse0x249d150() {
   return (neuron0x2477ca0()*0.302108);
}

double NNfunction_b2b2::synapse0x249d190() {
   return (neuron0x2478670()*0.927612);
}

double NNfunction_b2b2::synapse0x249d1d0() {
   return (neuron0x2479040()*0.180774);
}

double NNfunction_b2b2::synapse0x249d210() {
   return (neuron0x2479a10()*-0.121122);
}

double NNfunction_b2b2::synapse0x249cca0() {
   return (neuron0x247b820()*0.174101);
}

double NNfunction_b2b2::synapse0x249cce0() {
   return (neuron0x247bb00()*-1.74347);
}

double NNfunction_b2b2::synapse0x249d360() {
   return (neuron0x247c4d0()*-1.52341);
}

double NNfunction_b2b2::synapse0x249d3a0() {
   return (neuron0x247cea0()*-0.13579);
}

double NNfunction_b2b2::synapse0x249d3e0() {
   return (neuron0x247d870()*0.485808);
}

double NNfunction_b2b2::synapse0x249d420() {
   return (neuron0x247e240()*0.614437);
}

double NNfunction_b2b2::synapse0x249d460() {
   return (neuron0x2476d90()*0.00922128);
}

double NNfunction_b2b2::synapse0x249d4a0() {
   return (neuron0x2477760()*-1.14093);
}

double NNfunction_b2b2::synapse0x249d4e0() {
   return (neuron0x2480fd0()*-1.58247);
}

double NNfunction_b2b2::synapse0x249d520() {
   return (neuron0x24819a0()*0.418775);
}

double NNfunction_b2b2::synapse0x249d560() {
   return (neuron0x2482370()*0.251778);
}

double NNfunction_b2b2::synapse0x249d5a0() {
   return (neuron0x2482d40()*2.8484);
}

double NNfunction_b2b2::synapse0x249d5e0() {
   return (neuron0x2483710()*0.442014);
}

double NNfunction_b2b2::synapse0x249d620() {
   return (neuron0x24840e0()*1.38412);
}

double NNfunction_b2b2::synapse0x249d660() {
   return (neuron0x2484ab0()*-0.0576188);
}

double NNfunction_b2b2::synapse0x249d6a0() {
   return (neuron0x2485480()*-0.964933);
}

double NNfunction_b2b2::synapse0x249d250() {
   return (neuron0x247b510()*-0.185403);
}

double NNfunction_b2b2::synapse0x249d290() {
   return (neuron0x2488060()*-0.552468);
}

double NNfunction_b2b2::synapse0x249d2d0() {
   return (neuron0x2488a30()*0.687645);
}

double NNfunction_b2b2::synapse0x249d310() {
   return (neuron0x2489400()*1.58226);
}

double NNfunction_b2b2::synapse0x249d8f0() {
   return (neuron0x2489dd0()*0.742494);
}

double NNfunction_b2b2::synapse0x249d930() {
   return (neuron0x248a7a0()*1.38167);
}

double NNfunction_b2b2::synapse0x249d970() {
   return (neuron0x248b170()*-0.107844);
}

double NNfunction_b2b2::synapse0x249d9b0() {
   return (neuron0x248bb40()*-1.08672);
}

double NNfunction_b2b2::synapse0x249d9f0() {
   return (neuron0x248c510()*0.946697);
}

double NNfunction_b2b2::synapse0x249da30() {
   return (neuron0x248d0f0()*1.20704);
}

double NNfunction_b2b2::synapse0x249da70() {
   return (neuron0x248dac0()*-0.565385);
}

double NNfunction_b2b2::synapse0x249dab0() {
   return (neuron0x247e940()*0.600147);
}

double NNfunction_b2b2::synapse0x249daf0() {
   return (neuron0x247f310()*-0.681157);
}

double NNfunction_b2b2::synapse0x249db30() {
   return (neuron0x247fce0()*0.926749);
}

double NNfunction_b2b2::synapse0x249db70() {
   return (neuron0x2492320()*0.443355);
}

double NNfunction_b2b2::synapse0x249dbb0() {
   return (neuron0x2492bd0()*0.077016);
}

double NNfunction_b2b2::synapse0x249dbf0() {
   return (neuron0x24935a0()*0.29917);
}

double NNfunction_b2b2::synapse0x249dc30() {
   return (neuron0x2493f70()*1.33563);
}

double NNfunction_b2b2::synapse0x249dfb0() {
   return (neuron0x246fef0()*1.33075);
}

double NNfunction_b2b2::synapse0x249dff0() {
   return (neuron0x2470800()*0.636991);
}

double NNfunction_b2b2::synapse0x249e030() {
   return (neuron0x24712e0()*-2.81722);
}

double NNfunction_b2b2::synapse0x249e070() {
   return (neuron0x222ab70()*0.177826);
}

double NNfunction_b2b2::synapse0x249e0b0() {
   return (neuron0x2472100()*-2.03443);
}

double NNfunction_b2b2::synapse0x249e0f0() {
   return (neuron0x2472ad0()*-1.40222);
}

double NNfunction_b2b2::synapse0x249e130() {
   return (neuron0x24738a0()*1.3545);
}

double NNfunction_b2b2::synapse0x249e170() {
   return (neuron0x2474270()*-0.878407);
}

double NNfunction_b2b2::synapse0x249e1b0() {
   return (neuron0x2474c40()*0.0210701);
}

double NNfunction_b2b2::synapse0x249e1f0() {
   return (neuron0x2475720()*2.10719);
}

double NNfunction_b2b2::synapse0x249e230() {
   return (neuron0x24760f0()*-0.897639);
}

double NNfunction_b2b2::synapse0x249e270() {
   return (neuron0x24731d0()*-0.316843);
}

double NNfunction_b2b2::synapse0x249e2b0() {
   return (neuron0x2477ca0()*1.85009);
}

double NNfunction_b2b2::synapse0x249e2f0() {
   return (neuron0x2478670()*-0.273846);
}

double NNfunction_b2b2::synapse0x249e330() {
   return (neuron0x2479040()*1.68325);
}

double NNfunction_b2b2::synapse0x249e370() {
   return (neuron0x2479a10()*-0.867991);
}

double NNfunction_b2b2::synapse0x249de00() {
   return (neuron0x247b820()*0.858748);
}

double NNfunction_b2b2::synapse0x249de40() {
   return (neuron0x247bb00()*0.203343);
}

double NNfunction_b2b2::synapse0x249e4c0() {
   return (neuron0x247c4d0()*-2.34179);
}

double NNfunction_b2b2::synapse0x249e500() {
   return (neuron0x247cea0()*-0.979101);
}

double NNfunction_b2b2::synapse0x249e540() {
   return (neuron0x247d870()*1.89828);
}

double NNfunction_b2b2::synapse0x249e580() {
   return (neuron0x247e240()*1.83641);
}

double NNfunction_b2b2::synapse0x249e5c0() {
   return (neuron0x2476d90()*1.55677);
}

double NNfunction_b2b2::synapse0x249e600() {
   return (neuron0x2477760()*-1.21431);
}

double NNfunction_b2b2::synapse0x249e640() {
   return (neuron0x2480fd0()*-1.79657);
}

double NNfunction_b2b2::synapse0x249e680() {
   return (neuron0x24819a0()*1.19656);
}

double NNfunction_b2b2::synapse0x249e6c0() {
   return (neuron0x2482370()*-0.325667);
}

double NNfunction_b2b2::synapse0x249e700() {
   return (neuron0x2482d40()*3.74321);
}

double NNfunction_b2b2::synapse0x249e740() {
   return (neuron0x2483710()*0.355142);
}

double NNfunction_b2b2::synapse0x249e780() {
   return (neuron0x24840e0()*-0.0691641);
}

double NNfunction_b2b2::synapse0x249e7c0() {
   return (neuron0x2484ab0()*-1.2123);
}

double NNfunction_b2b2::synapse0x249e800() {
   return (neuron0x2485480()*-0.596737);
}

double NNfunction_b2b2::synapse0x249e3b0() {
   return (neuron0x247b510()*-2.47239);
}

double NNfunction_b2b2::synapse0x249e3f0() {
   return (neuron0x2488060()*1.14464);
}

double NNfunction_b2b2::synapse0x249e430() {
   return (neuron0x2488a30()*1.00414);
}

double NNfunction_b2b2::synapse0x249e470() {
   return (neuron0x2489400()*0.697359);
}

double NNfunction_b2b2::synapse0x249ea50() {
   return (neuron0x2489dd0()*1.92902);
}

double NNfunction_b2b2::synapse0x249ea90() {
   return (neuron0x248a7a0()*0.514524);
}

double NNfunction_b2b2::synapse0x249ead0() {
   return (neuron0x248b170()*-0.731342);
}

double NNfunction_b2b2::synapse0x249eb10() {
   return (neuron0x248bb40()*-3.35822);
}

double NNfunction_b2b2::synapse0x249eb50() {
   return (neuron0x248c510()*1.26971);
}

double NNfunction_b2b2::synapse0x249eb90() {
   return (neuron0x248d0f0()*-0.547621);
}

double NNfunction_b2b2::synapse0x249ebd0() {
   return (neuron0x248dac0()*0.209423);
}

double NNfunction_b2b2::synapse0x249ec10() {
   return (neuron0x247e940()*-3.28867);
}

double NNfunction_b2b2::synapse0x249ec50() {
   return (neuron0x247f310()*1.11886);
}

double NNfunction_b2b2::synapse0x249ec90() {
   return (neuron0x247fce0()*4.14558);
}

double NNfunction_b2b2::synapse0x249ecd0() {
   return (neuron0x2492320()*1.24722);
}

double NNfunction_b2b2::synapse0x249ed10() {
   return (neuron0x2492bd0()*-0.687771);
}

double NNfunction_b2b2::synapse0x249ed50() {
   return (neuron0x24935a0()*0.682694);
}

double NNfunction_b2b2::synapse0x249ed90() {
   return (neuron0x2493f70()*-0.319323);
}

double NNfunction_b2b2::synapse0x246feb0() {
   return (neuron0x249b170()*3.20831);
}

double NNfunction_b2b2::synapse0x249eff0() {
   return (neuron0x249b510()*9.70205);
}

double NNfunction_b2b2::synapse0x249f030() {
   return (neuron0x249b9b0()*4.91342);
}

double NNfunction_b2b2::synapse0x249f070() {
   return (neuron0x249cb10()*-2.9953);
}

double NNfunction_b2b2::synapse0x249f0b0() {
   return (neuron0x249dc70()*-7.19318);
}

