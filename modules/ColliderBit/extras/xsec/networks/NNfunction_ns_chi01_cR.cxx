#include "NNfunction_ns_chi01_cR.h"
#include <cmath>

double NNfunction_ns_chi01_cR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0649)/15.1251;
   input1 = (in1 - 46.2164)/465.396;
   input2 = (in2 - 529.503)/579.448;
   input3 = (in3 - 152.509)/698.379;
   input4 = (in4 - 823.125)/817.246;
   input5 = (in5 - 711.781)/799.413;
   input6 = (in6 - 712.067)/800.805;
   input7 = (in7 - 711.766)/788.322;
   input8 = (in8 - 712.037)/799.984;
   input9 = (in9 - 702.078)/786.08;
   input10 = (in10 - 735.866)/804.489;
   input11 = (in11 - 649.244)/661.316;
   input12 = (in12 - 649.371)/662.931;
   input13 = (in13 - 483.961)/397.222;
   input14 = (in14 - 682.026)/673.504;
   input15 = (in15 - 346.609)/252.41;
   input16 = (in16 - 477.321)/452.236;
   input17 = (in17 - 667.657)/693.77;
   input18 = (in18 - 664.982)/689.387;
   input19 = (in19 - 681.001)/676.465;
   input20 = (in20 - -126.138)/432.13;
   input21 = (in21 - -162.483)/966.572;
   input22 = (in22 - 3.75252)/977.794;
   input23 = (in23 - -95.8914)/519.158;
   switch(index) {
     case 0:
         return neuron0x2c73980();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_cR::Value(int index, double* input) {
   input0 = (input[0] - 23.0649)/15.1251;
   input1 = (input[1] - 46.2164)/465.396;
   input2 = (input[2] - 529.503)/579.448;
   input3 = (input[3] - 152.509)/698.379;
   input4 = (input[4] - 823.125)/817.246;
   input5 = (input[5] - 711.781)/799.413;
   input6 = (input[6] - 712.067)/800.805;
   input7 = (input[7] - 711.766)/788.322;
   input8 = (input[8] - 712.037)/799.984;
   input9 = (input[9] - 702.078)/786.08;
   input10 = (input[10] - 735.866)/804.489;
   input11 = (input[11] - 649.244)/661.316;
   input12 = (input[12] - 649.371)/662.931;
   input13 = (input[13] - 483.961)/397.222;
   input14 = (input[14] - 682.026)/673.504;
   input15 = (input[15] - 346.609)/252.41;
   input16 = (input[16] - 477.321)/452.236;
   input17 = (input[17] - 667.657)/693.77;
   input18 = (input[18] - 664.982)/689.387;
   input19 = (input[19] - 681.001)/676.465;
   input20 = (input[20] - -126.138)/432.13;
   input21 = (input[21] - -162.483)/966.572;
   input22 = (input[22] - 3.75252)/977.794;
   input23 = (input[23] - -95.8914)/519.158;
   switch(index) {
     case 0:
         return neuron0x2c73980();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_cR::neuron0x2c3e9f0() {
   return input0;
}

double NNfunction_ns_chi01_cR::neuron0x2c3eca0() {
   return input1;
}

double NNfunction_ns_chi01_cR::neuron0x2c3efe0() {
   return input2;
}

double NNfunction_ns_chi01_cR::neuron0x2c3f320() {
   return input3;
}

double NNfunction_ns_chi01_cR::neuron0x2c3f660() {
   return input4;
}

double NNfunction_ns_chi01_cR::neuron0x2c3f9a0() {
   return input5;
}

double NNfunction_ns_chi01_cR::neuron0x2c3fce0() {
   return input6;
}

double NNfunction_ns_chi01_cR::neuron0x2c40020() {
   return input7;
}

double NNfunction_ns_chi01_cR::neuron0x2c40360() {
   return input8;
}

double NNfunction_ns_chi01_cR::neuron0x2c406a0() {
   return input9;
}

double NNfunction_ns_chi01_cR::neuron0x2c409e0() {
   return input10;
}

double NNfunction_ns_chi01_cR::neuron0x2c40d20() {
   return input11;
}

double NNfunction_ns_chi01_cR::neuron0x2c41060() {
   return input12;
}

double NNfunction_ns_chi01_cR::neuron0x2c413a0() {
   return input13;
}

double NNfunction_ns_chi01_cR::neuron0x2c416e0() {
   return input14;
}

double NNfunction_ns_chi01_cR::neuron0x2c41a20() {
   return input15;
}

double NNfunction_ns_chi01_cR::neuron0x2c41d60() {
   return input16;
}

double NNfunction_ns_chi01_cR::neuron0x2c422c0() {
   return input17;
}

double NNfunction_ns_chi01_cR::neuron0x2c42600() {
   return input18;
}

double NNfunction_ns_chi01_cR::neuron0x2c42940() {
   return input19;
}

double NNfunction_ns_chi01_cR::neuron0x2c42c80() {
   return input20;
}

double NNfunction_ns_chi01_cR::neuron0x2c42fc0() {
   return input21;
}

double NNfunction_ns_chi01_cR::neuron0x2c43300() {
   return input22;
}

double NNfunction_ns_chi01_cR::neuron0x2c43640() {
   return input23;
}

double NNfunction_ns_chi01_cR::input0x2c43ab0() {
   double input = 1.75565;
   input += synapse0x2c43df0();
   input += synapse0x2c43e30();
   input += synapse0x2c43e70();
   input += synapse0x2c43eb0();
   input += synapse0x2c43ef0();
   input += synapse0x2c43f30();
   input += synapse0x2c43f70();
   input += synapse0x2c43fb0();
   input += synapse0x2c43ff0();
   input += synapse0x2c44030();
   input += synapse0x2c44070();
   input += synapse0x2c440b0();
   input += synapse0x2c440f0();
   input += synapse0x2c44130();
   input += synapse0x2c44170();
   input += synapse0x2c441b0();
   input += synapse0x2c43c40();
   input += synapse0x2c43c80();
   input += synapse0x29fab70();
   input += synapse0x29fabb0();
   input += synapse0x2c441f0();
   input += synapse0x2c44230();
   input += synapse0x2c44270();
   input += synapse0x2c442b0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c43ab0() {
   double input = input0x2c43ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c442f0() {
   double input = -9.88863;
   input += synapse0x2c44630();
   input += synapse0x2c44670();
   input += synapse0x2c446b0();
   input += synapse0x2c446f0();
   input += synapse0x2c44730();
   input += synapse0x2c44770();
   input += synapse0x2c447b0();
   input += synapse0x2c447f0();
   input += synapse0x2c44830();
   input += synapse0x29fa9c0();
   input += synapse0x29faa00();
   input += synapse0x29faa40();
   input += synapse0x29faa80();
   input += synapse0x2c44a80();
   input += synapse0x2c44ac0();
   input += synapse0x2c44b00();
   input += synapse0x2c44480();
   input += synapse0x2c444c0();
   input += synapse0x2c44c50();
   input += synapse0x2c44c90();
   input += synapse0x2c44cd0();
   input += synapse0x2c44d10();
   input += synapse0x2c44d50();
   input += synapse0x2c44d90();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c442f0() {
   double input = input0x2c442f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c44dd0() {
   double input = 8.58191;
   input += synapse0x2c45110();
   input += synapse0x2c45150();
   input += synapse0x2c45190();
   input += synapse0x2c451d0();
   input += synapse0x2c45210();
   input += synapse0x2c45250();
   input += synapse0x2c45290();
   input += synapse0x2c452d0();
   input += synapse0x2c45310();
   input += synapse0x2c45350();
   input += synapse0x2c45390();
   input += synapse0x2c453d0();
   input += synapse0x2c45410();
   input += synapse0x2c45450();
   input += synapse0x2c45490();
   input += synapse0x2c454d0();
   input += synapse0x2c44f60();
   input += synapse0x2c44fa0();
   input += synapse0x29fb260();
   input += synapse0x2a08b30();
   input += synapse0x2a08b70();
   input += synapse0x2c47400();
   input += synapse0x2c47440();
   input += synapse0x2c3e730();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c44dd0() {
   double input = input0x2c44dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c44870() {
   double input = 0.621197;
   input += synapse0x2c3e800();
   input += synapse0x2a093b0();
   input += synapse0x2c44a00();
   input += synapse0x2c44a40();
   input += synapse0x2c45620();
   input += synapse0x2c45660();
   input += synapse0x2c456a0();
   input += synapse0x2c456e0();
   input += synapse0x2c45720();
   input += synapse0x2c45760();
   input += synapse0x2c457a0();
   input += synapse0x2c457e0();
   input += synapse0x2c45820();
   input += synapse0x2c45860();
   input += synapse0x2c458a0();
   input += synapse0x2c458e0();
   input += synapse0x2c3e770();
   input += synapse0x2c3e7b0();
   input += synapse0x2c45a30();
   input += synapse0x2c45a70();
   input += synapse0x2c45ab0();
   input += synapse0x2c45af0();
   input += synapse0x2c45b30();
   input += synapse0x2c45b70();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c44870() {
   double input = input0x2c44870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c45bb0() {
   double input = 5.1518;
   input += synapse0x2c45ef0();
   input += synapse0x2c45f30();
   input += synapse0x2c45f70();
   input += synapse0x2c45fb0();
   input += synapse0x2c45ff0();
   input += synapse0x2c46030();
   input += synapse0x2c46070();
   input += synapse0x2c460b0();
   input += synapse0x2c460f0();
   input += synapse0x2c46130();
   input += synapse0x2c46170();
   input += synapse0x2c461b0();
   input += synapse0x2c461f0();
   input += synapse0x2c46230();
   input += synapse0x2c46270();
   input += synapse0x2c462b0();
   input += synapse0x2c46400();
   input += synapse0x2c45d40();
   input += synapse0x2c45d80();
   input += synapse0x2c47540();
   input += synapse0x2c47580();
   input += synapse0x2c475c0();
   input += synapse0x2c47600();
   input += synapse0x2c47640();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c45bb0() {
   double input = input0x2c45bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c47680() {
   double input = -0.884421;
   input += synapse0x2c479c0();
   input += synapse0x2c47a00();
   input += synapse0x2c47a40();
   input += synapse0x2c47a80();
   input += synapse0x2c47ac0();
   input += synapse0x2c47b00();
   input += synapse0x2c47b40();
   input += synapse0x2c47b80();
   input += synapse0x2c47bc0();
   input += synapse0x2a08e80();
   input += synapse0x2a08ec0();
   input += synapse0x2a08f00();
   input += synapse0x2a08f40();
   input += synapse0x2a08f80();
   input += synapse0x2a08fc0();
   input += synapse0x2a09000();
   input += synapse0x2c47810();
   input += synapse0x2c47850();
   input += synapse0x2a09150();
   input += synapse0x2a09190();
   input += synapse0x2a091d0();
   input += synapse0x2a09210();
   input += synapse0x2a09250();
   input += synapse0x2c48410();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c47680() {
   double input = input0x2c47680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c48450() {
   double input = -0.360732;
   input += synapse0x2c48790();
   input += synapse0x2c487d0();
   input += synapse0x2c48810();
   input += synapse0x2c48850();
   input += synapse0x2c48890();
   input += synapse0x2c488d0();
   input += synapse0x2c48910();
   input += synapse0x2c48950();
   input += synapse0x2c48990();
   input += synapse0x2c489d0();
   input += synapse0x2c48a10();
   input += synapse0x2c48a50();
   input += synapse0x2c48a90();
   input += synapse0x2c48ad0();
   input += synapse0x2c48b10();
   input += synapse0x2c48b50();
   input += synapse0x2c485e0();
   input += synapse0x2c48620();
   input += synapse0x2c48ca0();
   input += synapse0x2c48ce0();
   input += synapse0x2c48d20();
   input += synapse0x2c48d60();
   input += synapse0x2c48da0();
   input += synapse0x2c48de0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c48450() {
   double input = input0x2c48450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c48e20() {
   double input = -2.32472;
   input += synapse0x2c49160();
   input += synapse0x2c491a0();
   input += synapse0x2c491e0();
   input += synapse0x2c49220();
   input += synapse0x2c49260();
   input += synapse0x2c492a0();
   input += synapse0x2c492e0();
   input += synapse0x2c49320();
   input += synapse0x2c49360();
   input += synapse0x2c493a0();
   input += synapse0x2c493e0();
   input += synapse0x2c49420();
   input += synapse0x2c49460();
   input += synapse0x2c494a0();
   input += synapse0x2c494e0();
   input += synapse0x2c49520();
   input += synapse0x2c48fb0();
   input += synapse0x2c48ff0();
   input += synapse0x2c49670();
   input += synapse0x2c496b0();
   input += synapse0x2c496f0();
   input += synapse0x2c49730();
   input += synapse0x2c49770();
   input += synapse0x2c497b0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c48e20() {
   double input = input0x2c48e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c497f0() {
   double input = -0.187603;
   input += synapse0x2c421b0();
   input += synapse0x2c421f0();
   input += synapse0x2c42230();
   input += synapse0x2c42270();
   input += synapse0x2c49d40();
   input += synapse0x2c49d80();
   input += synapse0x2c49dc0();
   input += synapse0x2c49e00();
   input += synapse0x2c49e40();
   input += synapse0x2c49e80();
   input += synapse0x2c49ec0();
   input += synapse0x2c49f00();
   input += synapse0x2c49f40();
   input += synapse0x2c49f80();
   input += synapse0x2c49fc0();
   input += synapse0x2c4a000();
   input += synapse0x2c49980();
   input += synapse0x2c499c0();
   input += synapse0x2c4a150();
   input += synapse0x2c4a190();
   input += synapse0x2c4a1d0();
   input += synapse0x2c4a210();
   input += synapse0x2c4a250();
   input += synapse0x2c4a290();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c497f0() {
   double input = input0x2c497f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4a2d0() {
   double input = 1.16005;
   input += synapse0x2c4a610();
   input += synapse0x2c4a650();
   input += synapse0x2c4a690();
   input += synapse0x2c4a6d0();
   input += synapse0x2c4a710();
   input += synapse0x2c4a750();
   input += synapse0x2c4a790();
   input += synapse0x2c4a7d0();
   input += synapse0x2c4a810();
   input += synapse0x2c4a850();
   input += synapse0x2c4a890();
   input += synapse0x2c4a8d0();
   input += synapse0x2c4a910();
   input += synapse0x2c4a950();
   input += synapse0x2c4a990();
   input += synapse0x2c4a9d0();
   input += synapse0x2c4a460();
   input += synapse0x2c4a4a0();
   input += synapse0x2c4ab20();
   input += synapse0x2c4ab60();
   input += synapse0x2c4aba0();
   input += synapse0x2c4abe0();
   input += synapse0x2c4ac20();
   input += synapse0x2c4ac60();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4a2d0() {
   double input = input0x2c4a2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4aca0() {
   double input = -0.0670148;
   input += synapse0x2c4afe0();
   input += synapse0x2c4b020();
   input += synapse0x2c4b060();
   input += synapse0x2c4b0a0();
   input += synapse0x2c4b0e0();
   input += synapse0x2c4b120();
   input += synapse0x2c4b160();
   input += synapse0x2c4b1a0();
   input += synapse0x2c4b1e0();
   input += synapse0x2c4b220();
   input += synapse0x2c4b260();
   input += synapse0x2c4b2a0();
   input += synapse0x2c4b2e0();
   input += synapse0x2c4b320();
   input += synapse0x2c4b360();
   input += synapse0x2c4b3a0();
   input += synapse0x2c4ae30();
   input += synapse0x2c4ae70();
   input += synapse0x2c47c00();
   input += synapse0x2c47c40();
   input += synapse0x2c47c80();
   input += synapse0x2c47cc0();
   input += synapse0x2c47d00();
   input += synapse0x2c47d40();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4aca0() {
   double input = input0x2c4aca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c47d80() {
   double input = 2.14869;
   input += synapse0x2c480c0();
   input += synapse0x2c48100();
   input += synapse0x2c48140();
   input += synapse0x2c48180();
   input += synapse0x2c481c0();
   input += synapse0x2c48200();
   input += synapse0x2c48240();
   input += synapse0x2c48280();
   input += synapse0x2c482c0();
   input += synapse0x2c48300();
   input += synapse0x2c48340();
   input += synapse0x2c48380();
   input += synapse0x2c483c0();
   input += synapse0x2c4c500();
   input += synapse0x2c4c540();
   input += synapse0x2c4c580();
   input += synapse0x2c47f10();
   input += synapse0x2c47f50();
   input += synapse0x2c4c6d0();
   input += synapse0x2c4c710();
   input += synapse0x2c4c750();
   input += synapse0x2c4c790();
   input += synapse0x2c4c7d0();
   input += synapse0x2c4c810();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c47d80() {
   double input = input0x2c47d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4c850() {
   double input = -0.0502633;
   input += synapse0x2c4cb90();
   input += synapse0x2c4cbd0();
   input += synapse0x2c4cc10();
   input += synapse0x2c4cc50();
   input += synapse0x2c4cc90();
   input += synapse0x2c4ccd0();
   input += synapse0x2c4cd10();
   input += synapse0x2c4cd50();
   input += synapse0x2c4cd90();
   input += synapse0x2c4cdd0();
   input += synapse0x2c4ce10();
   input += synapse0x2c4ce50();
   input += synapse0x2c4ce90();
   input += synapse0x2c4ced0();
   input += synapse0x2c4cf10();
   input += synapse0x2c4cf50();
   input += synapse0x2c4c9e0();
   input += synapse0x2c4ca20();
   input += synapse0x2c4d0a0();
   input += synapse0x2c4d0e0();
   input += synapse0x2c4d120();
   input += synapse0x2c4d160();
   input += synapse0x2c4d1a0();
   input += synapse0x2c4d1e0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4c850() {
   double input = input0x2c4c850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4d220() {
   double input = -0.852875;
   input += synapse0x2c4d560();
   input += synapse0x2c4d5a0();
   input += synapse0x2c4d5e0();
   input += synapse0x2c4d620();
   input += synapse0x2c4d660();
   input += synapse0x2c4d6a0();
   input += synapse0x2c4d6e0();
   input += synapse0x2c4d720();
   input += synapse0x2c4d760();
   input += synapse0x2c4d7a0();
   input += synapse0x2c4d7e0();
   input += synapse0x2c4d820();
   input += synapse0x2c4d860();
   input += synapse0x2c4d8a0();
   input += synapse0x2c4d8e0();
   input += synapse0x2c4d920();
   input += synapse0x2c4d3b0();
   input += synapse0x2c4d3f0();
   input += synapse0x2c4da70();
   input += synapse0x2c4dab0();
   input += synapse0x2c4daf0();
   input += synapse0x2c4db30();
   input += synapse0x2c4db70();
   input += synapse0x2c4dbb0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4d220() {
   double input = input0x2c4d220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4dbf0() {
   double input = -0.0190062;
   input += synapse0x2c4df30();
   input += synapse0x2c4df70();
   input += synapse0x2c4dfb0();
   input += synapse0x2c4dff0();
   input += synapse0x2c4e030();
   input += synapse0x2c4e070();
   input += synapse0x2c4e0b0();
   input += synapse0x2c4e0f0();
   input += synapse0x2c4e130();
   input += synapse0x2c4e170();
   input += synapse0x2c4e1b0();
   input += synapse0x2c4e1f0();
   input += synapse0x2c4e230();
   input += synapse0x2c4e270();
   input += synapse0x2c4e2b0();
   input += synapse0x2c4e2f0();
   input += synapse0x2c4dd80();
   input += synapse0x2c4ddc0();
   input += synapse0x2c4e440();
   input += synapse0x2c4e480();
   input += synapse0x2c4e4c0();
   input += synapse0x2c4e500();
   input += synapse0x2c4e540();
   input += synapse0x2c4e580();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4dbf0() {
   double input = input0x2c4dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4e5c0() {
   double input = -0.72733;
   input += synapse0x2c4e900();
   input += synapse0x2c3eb80();
   input += synapse0x2c3ebc0();
   input += synapse0x2c3eec0();
   input += synapse0x2c3ef00();
   input += synapse0x2c3f200();
   input += synapse0x2c3f240();
   input += synapse0x2c3f540();
   input += synapse0x2c3f580();
   input += synapse0x2c3f880();
   input += synapse0x2c3f8c0();
   input += synapse0x2c3fbc0();
   input += synapse0x2c3fc00();
   input += synapse0x2c3ff00();
   input += synapse0x2c3ff40();
   input += synapse0x2c40240();
   input += synapse0x2c40280();
   input += synapse0x2c40580();
   input += synapse0x2c405c0();
   input += synapse0x2c408c0();
   input += synapse0x2c40900();
   input += synapse0x2c40c00();
   input += synapse0x2c40c40();
   input += synapse0x2c40f40();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4e5c0() {
   double input = input0x2c4e5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c503d0() {
   double input = -0.54715;
   input += synapse0x2c40f80();
   input += synapse0x2c41c40();
   input += synapse0x2c41c80();
   input += synapse0x2c4e750();
   input += synapse0x2c4e790();
   input += synapse0x2c41f80();
   input += synapse0x2c41fc0();
   input += synapse0x2c424e0();
   input += synapse0x2c42520();
   input += synapse0x2c42820();
   input += synapse0x2c42860();
   input += synapse0x2c42b60();
   input += synapse0x2c42ba0();
   input += synapse0x2c42ea0();
   input += synapse0x2c42ee0();
   input += synapse0x2c431e0();
   input += synapse0x2c43220();
   input += synapse0x2c43520();
   input += synapse0x2c43560();
   input += synapse0x2c43860();
   input += synapse0x2c438a0();
   input += synapse0x2c41280();
   input += synapse0x2c412c0();
   input += synapse0x2c50670();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c503d0() {
   double input = input0x2c503d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c506b0() {
   double input = 0.449086;
   input += synapse0x2c509f0();
   input += synapse0x2c50a30();
   input += synapse0x2c50a70();
   input += synapse0x2c50ab0();
   input += synapse0x2c50af0();
   input += synapse0x2c50b30();
   input += synapse0x2c50b70();
   input += synapse0x2c50bb0();
   input += synapse0x2c50bf0();
   input += synapse0x2c50c30();
   input += synapse0x2c50c70();
   input += synapse0x2c50cb0();
   input += synapse0x2c50cf0();
   input += synapse0x2c50d30();
   input += synapse0x2c50d70();
   input += synapse0x2c50db0();
   input += synapse0x2c50840();
   input += synapse0x2c50880();
   input += synapse0x2c50f00();
   input += synapse0x2c50f40();
   input += synapse0x2c50f80();
   input += synapse0x2c50fc0();
   input += synapse0x2c51000();
   input += synapse0x2c51040();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c506b0() {
   double input = input0x2c506b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c51080() {
   double input = 1.61351;
   input += synapse0x2c513c0();
   input += synapse0x2c51400();
   input += synapse0x2c51440();
   input += synapse0x2c51480();
   input += synapse0x2c514c0();
   input += synapse0x2c51500();
   input += synapse0x2c51540();
   input += synapse0x2c51580();
   input += synapse0x2c515c0();
   input += synapse0x2c51600();
   input += synapse0x2c51640();
   input += synapse0x2c51680();
   input += synapse0x2c516c0();
   input += synapse0x2c51700();
   input += synapse0x2c51740();
   input += synapse0x2c51780();
   input += synapse0x2c51210();
   input += synapse0x2c51250();
   input += synapse0x2c518d0();
   input += synapse0x2c51910();
   input += synapse0x2c51950();
   input += synapse0x2c51990();
   input += synapse0x2c519d0();
   input += synapse0x2c51a10();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c51080() {
   double input = input0x2c51080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c51a50() {
   double input = 3.40923;
   input += synapse0x2c51d90();
   input += synapse0x2c51dd0();
   input += synapse0x2c51e10();
   input += synapse0x2c51e50();
   input += synapse0x2c51e90();
   input += synapse0x2c51ed0();
   input += synapse0x2c51f10();
   input += synapse0x2c51f50();
   input += synapse0x2c51f90();
   input += synapse0x2c51fd0();
   input += synapse0x2c52010();
   input += synapse0x2c52050();
   input += synapse0x2c52090();
   input += synapse0x2c520d0();
   input += synapse0x2c52110();
   input += synapse0x2c52150();
   input += synapse0x2c51be0();
   input += synapse0x2c51c20();
   input += synapse0x2c522a0();
   input += synapse0x2c522e0();
   input += synapse0x2c52320();
   input += synapse0x2c52360();
   input += synapse0x2c523a0();
   input += synapse0x2c523e0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c51a50() {
   double input = input0x2c51a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c52420() {
   double input = -2.99723;
   input += synapse0x2c52760();
   input += synapse0x2c527a0();
   input += synapse0x2c527e0();
   input += synapse0x2c52820();
   input += synapse0x2c52860();
   input += synapse0x2c528a0();
   input += synapse0x2c528e0();
   input += synapse0x2c52920();
   input += synapse0x2c52960();
   input += synapse0x2c529a0();
   input += synapse0x2c529e0();
   input += synapse0x2c52a20();
   input += synapse0x2c52a60();
   input += synapse0x2c52aa0();
   input += synapse0x2c52ae0();
   input += synapse0x2c52b20();
   input += synapse0x2c525b0();
   input += synapse0x2c525f0();
   input += synapse0x2c52c70();
   input += synapse0x2c52cb0();
   input += synapse0x2c52cf0();
   input += synapse0x2c52d30();
   input += synapse0x2c52d70();
   input += synapse0x2c52db0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c52420() {
   double input = input0x2c52420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c52df0() {
   double input = 0.282739;
   input += synapse0x2c53130();
   input += synapse0x2c53170();
   input += synapse0x2c531b0();
   input += synapse0x2c531f0();
   input += synapse0x2c53230();
   input += synapse0x2c53270();
   input += synapse0x2c532b0();
   input += synapse0x2c532f0();
   input += synapse0x2c53330();
   input += synapse0x2c4b4f0();
   input += synapse0x2c4b530();
   input += synapse0x2c4b570();
   input += synapse0x2c4b5b0();
   input += synapse0x2c4b5f0();
   input += synapse0x2c4b630();
   input += synapse0x2c4b670();
   input += synapse0x2c52f80();
   input += synapse0x2c52fc0();
   input += synapse0x2c4b7c0();
   input += synapse0x2c4b800();
   input += synapse0x2c4b840();
   input += synapse0x2c4b880();
   input += synapse0x2c4b8c0();
   input += synapse0x2c4b900();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c52df0() {
   double input = input0x2c52df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4b940() {
   double input = -1.58233;
   input += synapse0x2c4bc80();
   input += synapse0x2c4bcc0();
   input += synapse0x2c4bd00();
   input += synapse0x2c4bd40();
   input += synapse0x2c4bd80();
   input += synapse0x2c4bdc0();
   input += synapse0x2c4be00();
   input += synapse0x2c4be40();
   input += synapse0x2c4be80();
   input += synapse0x2c4bec0();
   input += synapse0x2c4bf00();
   input += synapse0x2c4bf40();
   input += synapse0x2c4bf80();
   input += synapse0x2c4bfc0();
   input += synapse0x2c4c000();
   input += synapse0x2c4c040();
   input += synapse0x2c4bad0();
   input += synapse0x2c4bb10();
   input += synapse0x2c4c190();
   input += synapse0x2c4c1d0();
   input += synapse0x2c4c210();
   input += synapse0x2c4c250();
   input += synapse0x2c4c290();
   input += synapse0x2c4c2d0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4b940() {
   double input = input0x2c4b940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c4c310() {
   double input = -2.49893;
   input += synapse0x2c4c4a0();
   input += synapse0x2c55530();
   input += synapse0x2c55570();
   input += synapse0x2c555b0();
   input += synapse0x2c555f0();
   input += synapse0x2c55630();
   input += synapse0x2c55670();
   input += synapse0x2c556b0();
   input += synapse0x2c556f0();
   input += synapse0x2c55730();
   input += synapse0x2c55770();
   input += synapse0x2c557b0();
   input += synapse0x2c557f0();
   input += synapse0x2c55830();
   input += synapse0x2c55870();
   input += synapse0x2c558b0();
   input += synapse0x2c55380();
   input += synapse0x2c553c0();
   input += synapse0x2c55a00();
   input += synapse0x2c55a40();
   input += synapse0x2c55a80();
   input += synapse0x2c55ac0();
   input += synapse0x2c55b00();
   input += synapse0x2c55b40();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c4c310() {
   double input = input0x2c4c310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c55b80() {
   double input = -1.01346;
   input += synapse0x2c55ec0();
   input += synapse0x2c55f00();
   input += synapse0x2c55f40();
   input += synapse0x2c55f80();
   input += synapse0x2c55fc0();
   input += synapse0x2c56000();
   input += synapse0x2c56040();
   input += synapse0x2c56080();
   input += synapse0x2c560c0();
   input += synapse0x2c56100();
   input += synapse0x2c56140();
   input += synapse0x2c56180();
   input += synapse0x2c561c0();
   input += synapse0x2c56200();
   input += synapse0x2c56240();
   input += synapse0x2c56280();
   input += synapse0x2c55d10();
   input += synapse0x2c55d50();
   input += synapse0x2c563d0();
   input += synapse0x2c56410();
   input += synapse0x2c56450();
   input += synapse0x2c56490();
   input += synapse0x2c564d0();
   input += synapse0x2c56510();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c55b80() {
   double input = input0x2c55b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c56550() {
   double input = 1.65322;
   input += synapse0x2c56890();
   input += synapse0x2c568d0();
   input += synapse0x2c56910();
   input += synapse0x2c56950();
   input += synapse0x2c56990();
   input += synapse0x2c569d0();
   input += synapse0x2c56a10();
   input += synapse0x2c56a50();
   input += synapse0x2c56a90();
   input += synapse0x2c56ad0();
   input += synapse0x2c56b10();
   input += synapse0x2c56b50();
   input += synapse0x2c56b90();
   input += synapse0x2c56bd0();
   input += synapse0x2c56c10();
   input += synapse0x2c56c50();
   input += synapse0x2c566e0();
   input += synapse0x2c56720();
   input += synapse0x2c56da0();
   input += synapse0x2c56de0();
   input += synapse0x2c56e20();
   input += synapse0x2c56e60();
   input += synapse0x2c56ea0();
   input += synapse0x2c56ee0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c56550() {
   double input = input0x2c56550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c56f20() {
   double input = 0.325401;
   input += synapse0x2c57260();
   input += synapse0x2c572a0();
   input += synapse0x2c572e0();
   input += synapse0x2c57320();
   input += synapse0x2c57360();
   input += synapse0x2c573a0();
   input += synapse0x2c573e0();
   input += synapse0x2c57420();
   input += synapse0x2c57460();
   input += synapse0x2c574a0();
   input += synapse0x2c574e0();
   input += synapse0x2c57520();
   input += synapse0x2c57560();
   input += synapse0x2c575a0();
   input += synapse0x2c575e0();
   input += synapse0x2c57620();
   input += synapse0x2c570b0();
   input += synapse0x2c570f0();
   input += synapse0x2c57770();
   input += synapse0x2c577b0();
   input += synapse0x2c577f0();
   input += synapse0x2c57830();
   input += synapse0x2c57870();
   input += synapse0x2c578b0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c56f20() {
   double input = input0x2c56f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c578f0() {
   double input = -1.16819;
   input += synapse0x2c57c30();
   input += synapse0x2c57c70();
   input += synapse0x2c57cb0();
   input += synapse0x2c57cf0();
   input += synapse0x2c57d30();
   input += synapse0x2c57d70();
   input += synapse0x2c57db0();
   input += synapse0x2c57df0();
   input += synapse0x2c57e30();
   input += synapse0x2c57e70();
   input += synapse0x2c57eb0();
   input += synapse0x2c57ef0();
   input += synapse0x2c57f30();
   input += synapse0x2c57f70();
   input += synapse0x2c57fb0();
   input += synapse0x2c57ff0();
   input += synapse0x2c57a80();
   input += synapse0x2c57ac0();
   input += synapse0x2c58140();
   input += synapse0x2c58180();
   input += synapse0x2c581c0();
   input += synapse0x2c58200();
   input += synapse0x2c58240();
   input += synapse0x2c58280();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c578f0() {
   double input = input0x2c578f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c582c0() {
   double input = 0.159612;
   input += synapse0x2c58600();
   input += synapse0x2c58640();
   input += synapse0x2c58680();
   input += synapse0x2c586c0();
   input += synapse0x2c58700();
   input += synapse0x2c58740();
   input += synapse0x2c58780();
   input += synapse0x2c587c0();
   input += synapse0x2c58800();
   input += synapse0x2c58840();
   input += synapse0x2c58880();
   input += synapse0x2c588c0();
   input += synapse0x2c58900();
   input += synapse0x2c58940();
   input += synapse0x2c58980();
   input += synapse0x2c589c0();
   input += synapse0x2c58450();
   input += synapse0x2c58490();
   input += synapse0x2c58b10();
   input += synapse0x2c58b50();
   input += synapse0x2c58b90();
   input += synapse0x2c58bd0();
   input += synapse0x2c58c10();
   input += synapse0x2c58c50();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c582c0() {
   double input = input0x2c582c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c58c90() {
   double input = -1.19465;
   input += synapse0x2c58fd0();
   input += synapse0x2c59010();
   input += synapse0x2c59050();
   input += synapse0x2c59090();
   input += synapse0x2c590d0();
   input += synapse0x2c59110();
   input += synapse0x2c59150();
   input += synapse0x2c59190();
   input += synapse0x2c591d0();
   input += synapse0x2c59210();
   input += synapse0x2c59250();
   input += synapse0x2c59290();
   input += synapse0x2c592d0();
   input += synapse0x2c59310();
   input += synapse0x2c59350();
   input += synapse0x2c59390();
   input += synapse0x2c58e20();
   input += synapse0x2c58e60();
   input += synapse0x2c594e0();
   input += synapse0x2c59520();
   input += synapse0x2c59560();
   input += synapse0x2c595a0();
   input += synapse0x2c595e0();
   input += synapse0x2c59620();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c58c90() {
   double input = input0x2c58c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c59660() {
   double input = -0.437499;
   input += synapse0x2c599a0();
   input += synapse0x2c599e0();
   input += synapse0x2c59a20();
   input += synapse0x2c59a60();
   input += synapse0x2c59aa0();
   input += synapse0x2c59ae0();
   input += synapse0x2c59b20();
   input += synapse0x2c59b60();
   input += synapse0x2c59ba0();
   input += synapse0x2c59be0();
   input += synapse0x2c59c20();
   input += synapse0x2c59c60();
   input += synapse0x2c59ca0();
   input += synapse0x2c59ce0();
   input += synapse0x2c59d20();
   input += synapse0x2c59d60();
   input += synapse0x2c597f0();
   input += synapse0x2c59830();
   input += synapse0x2c59eb0();
   input += synapse0x2c59ef0();
   input += synapse0x2c59f30();
   input += synapse0x2c59f70();
   input += synapse0x2c59fb0();
   input += synapse0x2c59ff0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c59660() {
   double input = input0x2c59660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5a030() {
   double input = -0.395918;
   input += synapse0x2c5a370();
   input += synapse0x2c4e940();
   input += synapse0x2c4e980();
   input += synapse0x2c4e9c0();
   input += synapse0x2c4ec10();
   input += synapse0x2c4ec50();
   input += synapse0x2c4ec90();
   input += synapse0x2c4eee0();
   input += synapse0x2c4ef20();
   input += synapse0x2c4f170();
   input += synapse0x2c4f1b0();
   input += synapse0x2c4f1f0();
   input += synapse0x2c4f440();
   input += synapse0x2c4f480();
   input += synapse0x2c4f6d0();
   input += synapse0x2c4f710();
   input += synapse0x2c5a1c0();
   input += synapse0x2c5a200();
   input += synapse0x2c4f860();
   input += synapse0x2c4fd70();
   input += synapse0x2c4fdb0();
   input += synapse0x2c4fdf0();
   input += synapse0x2c50040();
   input += synapse0x2c50080();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5a030() {
   double input = input0x2c5a030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c500c0() {
   double input = -15.9754;
   input += synapse0x2c4f930();
   input += synapse0x2c4f970();
   input += synapse0x2c4f9b0();
   input += synapse0x2c4f9f0();
   input += synapse0x2c50370();
   input += synapse0x2c5c6c0();
   input += synapse0x2c5c700();
   input += synapse0x2c5c740();
   input += synapse0x2c5c780();
   input += synapse0x2c5c7c0();
   input += synapse0x2c5c800();
   input += synapse0x2c5c840();
   input += synapse0x2c5c880();
   input += synapse0x2c5c8c0();
   input += synapse0x2c5c900();
   input += synapse0x2c5c940();
   input += synapse0x2c50250();
   input += synapse0x2c50290();
   input += synapse0x2c5ca90();
   input += synapse0x2c5cad0();
   input += synapse0x2c5cb10();
   input += synapse0x2c5cb50();
   input += synapse0x2c5cb90();
   input += synapse0x2c5cbd0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c500c0() {
   double input = input0x2c500c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5cc10() {
   double input = -2.63664;
   input += synapse0x2c5cf50();
   input += synapse0x2c5cf90();
   input += synapse0x2c5cfd0();
   input += synapse0x2c5d010();
   input += synapse0x2c5d050();
   input += synapse0x2c5d090();
   input += synapse0x2c5d0d0();
   input += synapse0x2c5d110();
   input += synapse0x2c5d150();
   input += synapse0x2c5d190();
   input += synapse0x2c5d1d0();
   input += synapse0x2c5d210();
   input += synapse0x2c5d250();
   input += synapse0x2c5d290();
   input += synapse0x2c5d2d0();
   input += synapse0x2c5d310();
   input += synapse0x2c5cda0();
   input += synapse0x2c5cde0();
   input += synapse0x2c5d460();
   input += synapse0x2c5d4a0();
   input += synapse0x2c5d4e0();
   input += synapse0x2c5d520();
   input += synapse0x2c5d560();
   input += synapse0x2c5d5a0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5cc10() {
   double input = input0x2c5cc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5d5e0() {
   double input = 0.42702;
   input += synapse0x2c5d920();
   input += synapse0x2c5d960();
   input += synapse0x2c5d9a0();
   input += synapse0x2c5d9e0();
   input += synapse0x2c5da20();
   input += synapse0x2c5da60();
   input += synapse0x2c5daa0();
   input += synapse0x2c5dae0();
   input += synapse0x2c5db20();
   input += synapse0x2c5db60();
   input += synapse0x2c5dba0();
   input += synapse0x2c5dbe0();
   input += synapse0x2c5dc20();
   input += synapse0x2c5dc60();
   input += synapse0x2c5dca0();
   input += synapse0x2c5dce0();
   input += synapse0x2c5d770();
   input += synapse0x2c5d7b0();
   input += synapse0x2c5de30();
   input += synapse0x2c5de70();
   input += synapse0x2c5deb0();
   input += synapse0x2c5def0();
   input += synapse0x2c5df30();
   input += synapse0x2c5df70();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5d5e0() {
   double input = input0x2c5d5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5dfb0() {
   double input = 0.605185;
   input += synapse0x2c5e2f0();
   input += synapse0x2c5e330();
   input += synapse0x2c5e370();
   input += synapse0x2c5e3b0();
   input += synapse0x2c5e3f0();
   input += synapse0x2c5e430();
   input += synapse0x2c5e470();
   input += synapse0x2c5e4b0();
   input += synapse0x2c5e4f0();
   input += synapse0x2c5e530();
   input += synapse0x2c5e570();
   input += synapse0x2c5e5b0();
   input += synapse0x2c5e5f0();
   input += synapse0x2c5e630();
   input += synapse0x2c5e670();
   input += synapse0x2c5e6b0();
   input += synapse0x2c5e140();
   input += synapse0x2c5e180();
   input += synapse0x2c5e800();
   input += synapse0x2c5e840();
   input += synapse0x2c5e880();
   input += synapse0x2c5e8c0();
   input += synapse0x2c5e900();
   input += synapse0x2c5e940();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5dfb0() {
   double input = input0x2c5dfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5e980() {
   double input = 0.146112;
   input += synapse0x2c5ecc0();
   input += synapse0x2c5ed00();
   input += synapse0x2c5ed40();
   input += synapse0x2c5ed80();
   input += synapse0x2c5edc0();
   input += synapse0x2c5ee00();
   input += synapse0x2c5ee40();
   input += synapse0x2c5ee80();
   input += synapse0x2c5eec0();
   input += synapse0x2c5ef00();
   input += synapse0x2c5ef40();
   input += synapse0x2c5ef80();
   input += synapse0x2c5efc0();
   input += synapse0x2c5f000();
   input += synapse0x2c5f040();
   input += synapse0x2c5f080();
   input += synapse0x2c5eb10();
   input += synapse0x2c5eb50();
   input += synapse0x2c5f1d0();
   input += synapse0x2c5f210();
   input += synapse0x2c5f250();
   input += synapse0x2c5f290();
   input += synapse0x2c5f2d0();
   input += synapse0x2c5f310();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5e980() {
   double input = input0x2c5e980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5f350() {
   double input = -13.5329;
   input += synapse0x2c5f690();
   input += synapse0x2c5f6d0();
   input += synapse0x2c5f710();
   input += synapse0x2c5f750();
   input += synapse0x2c5f790();
   input += synapse0x2c5f7d0();
   input += synapse0x2c5f810();
   input += synapse0x2c5f850();
   input += synapse0x2c5f890();
   input += synapse0x2c5f8d0();
   input += synapse0x2c5f910();
   input += synapse0x2c5f950();
   input += synapse0x2c5f990();
   input += synapse0x2c5f9d0();
   input += synapse0x2c5fa10();
   input += synapse0x2c5fa50();
   input += synapse0x2c5f4e0();
   input += synapse0x2c5f520();
   input += synapse0x2c5fba0();
   input += synapse0x2c5fbe0();
   input += synapse0x2c5fc20();
   input += synapse0x2c5fc60();
   input += synapse0x2c5fca0();
   input += synapse0x2c5fce0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5f350() {
   double input = input0x2c5f350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c5fd20() {
   double input = -0.477838;
   input += synapse0x2c60060();
   input += synapse0x2c600a0();
   input += synapse0x2c600e0();
   input += synapse0x2c60120();
   input += synapse0x2c60160();
   input += synapse0x2c601a0();
   input += synapse0x2c601e0();
   input += synapse0x2c60220();
   input += synapse0x2c60260();
   input += synapse0x2c602a0();
   input += synapse0x2c602e0();
   input += synapse0x2c60320();
   input += synapse0x2c60360();
   input += synapse0x2c603a0();
   input += synapse0x2c603e0();
   input += synapse0x2c60420();
   input += synapse0x2c5feb0();
   input += synapse0x2c5fef0();
   input += synapse0x2c60570();
   input += synapse0x2c605b0();
   input += synapse0x2c605f0();
   input += synapse0x2c60630();
   input += synapse0x2c60670();
   input += synapse0x2c606b0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c5fd20() {
   double input = input0x2c5fd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c606f0() {
   double input = -0.997364;
   input += synapse0x2c60a30();
   input += synapse0x2c60a70();
   input += synapse0x2c60ab0();
   input += synapse0x2c60af0();
   input += synapse0x2c60b30();
   input += synapse0x2c60b70();
   input += synapse0x2c60bb0();
   input += synapse0x2c60bf0();
   input += synapse0x2c60c30();
   input += synapse0x2c60c70();
   input += synapse0x2c60cb0();
   input += synapse0x2c60cf0();
   input += synapse0x2c60d30();
   input += synapse0x2c60d70();
   input += synapse0x2c60db0();
   input += synapse0x2c60df0();
   input += synapse0x2c60880();
   input += synapse0x2c608c0();
   input += synapse0x2c60f40();
   input += synapse0x2c60f80();
   input += synapse0x2c60fc0();
   input += synapse0x2c61000();
   input += synapse0x2c61040();
   input += synapse0x2c61080();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c606f0() {
   double input = input0x2c606f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c610c0() {
   double input = 0.26308;
   input += synapse0x2c49b30();
   input += synapse0x2c49b70();
   input += synapse0x2c49bb0();
   input += synapse0x2c49bf0();
   input += synapse0x2c49c30();
   input += synapse0x2c49c70();
   input += synapse0x2c49cb0();
   input += synapse0x2c49cf0();
   input += synapse0x2c61810();
   input += synapse0x2c61850();
   input += synapse0x2c61890();
   input += synapse0x2c618d0();
   input += synapse0x2c61910();
   input += synapse0x2c61950();
   input += synapse0x2c61990();
   input += synapse0x2c619d0();
   input += synapse0x2c61250();
   input += synapse0x2c61290();
   input += synapse0x2c61b20();
   input += synapse0x2c61b60();
   input += synapse0x2c61ba0();
   input += synapse0x2c61be0();
   input += synapse0x2c61c20();
   input += synapse0x2c61c60();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c610c0() {
   double input = input0x2c610c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c61ca0() {
   double input = 0.924931;
   input += synapse0x2c61fe0();
   input += synapse0x2c62020();
   input += synapse0x2c62060();
   input += synapse0x2c620a0();
   input += synapse0x2c620e0();
   input += synapse0x2c62120();
   input += synapse0x2c62160();
   input += synapse0x2c621a0();
   input += synapse0x2c621e0();
   input += synapse0x2c62220();
   input += synapse0x2c62260();
   input += synapse0x2c622a0();
   input += synapse0x2c622e0();
   input += synapse0x2c62320();
   input += synapse0x2c62360();
   input += synapse0x2c623a0();
   input += synapse0x2c61e30();
   input += synapse0x2c61e70();
   input += synapse0x2c624f0();
   input += synapse0x2c62530();
   input += synapse0x2c62570();
   input += synapse0x2c625b0();
   input += synapse0x2c625f0();
   input += synapse0x2c62630();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c61ca0() {
   double input = input0x2c61ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c62670() {
   double input = 0.023144;
   input += synapse0x2c629b0();
   input += synapse0x2c629f0();
   input += synapse0x2c62a30();
   input += synapse0x2c62a70();
   input += synapse0x2c62ab0();
   input += synapse0x2c62af0();
   input += synapse0x2c62b30();
   input += synapse0x2c62b70();
   input += synapse0x2c62bb0();
   input += synapse0x2c62bf0();
   input += synapse0x2c62c30();
   input += synapse0x2c62c70();
   input += synapse0x2c62cb0();
   input += synapse0x2c62cf0();
   input += synapse0x2c62d30();
   input += synapse0x2c62d70();
   input += synapse0x2c62800();
   input += synapse0x2c62840();
   input += synapse0x2c53370();
   input += synapse0x2c533b0();
   input += synapse0x2c533f0();
   input += synapse0x2c53430();
   input += synapse0x2c53470();
   input += synapse0x2c534b0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c62670() {
   double input = input0x2c62670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c534f0() {
   double input = -1.67699;
   input += synapse0x2c53830();
   input += synapse0x2c53870();
   input += synapse0x2c538b0();
   input += synapse0x2c538f0();
   input += synapse0x2c53930();
   input += synapse0x2c53970();
   input += synapse0x2c539b0();
   input += synapse0x2c539f0();
   input += synapse0x2c53a30();
   input += synapse0x2c53a70();
   input += synapse0x2c53ab0();
   input += synapse0x2c53af0();
   input += synapse0x2c53b30();
   input += synapse0x2c53b70();
   input += synapse0x2c53bb0();
   input += synapse0x2c53bf0();
   input += synapse0x2c53680();
   input += synapse0x2c536c0();
   input += synapse0x2c53d40();
   input += synapse0x2c53d80();
   input += synapse0x2c53dc0();
   input += synapse0x2c53e00();
   input += synapse0x2c53e40();
   input += synapse0x2c53e80();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c534f0() {
   double input = input0x2c534f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c53ec0() {
   double input = -1.83876;
   input += synapse0x2c54200();
   input += synapse0x2c54240();
   input += synapse0x2c54280();
   input += synapse0x2c542c0();
   input += synapse0x2c54300();
   input += synapse0x2c54340();
   input += synapse0x2c54380();
   input += synapse0x2c543c0();
   input += synapse0x2c54400();
   input += synapse0x2c54440();
   input += synapse0x2c54480();
   input += synapse0x2c544c0();
   input += synapse0x2c54500();
   input += synapse0x2c54540();
   input += synapse0x2c54580();
   input += synapse0x2c545c0();
   input += synapse0x2c54050();
   input += synapse0x2c54090();
   input += synapse0x2c54710();
   input += synapse0x2c54750();
   input += synapse0x2c54790();
   input += synapse0x2c547d0();
   input += synapse0x2c54810();
   input += synapse0x2c54850();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c53ec0() {
   double input = input0x2c53ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c54890() {
   double input = -1.89529;
   input += synapse0x2c54bd0();
   input += synapse0x2c54c10();
   input += synapse0x2c54c50();
   input += synapse0x2c54c90();
   input += synapse0x2c54cd0();
   input += synapse0x2c54d10();
   input += synapse0x2c54d50();
   input += synapse0x2c54d90();
   input += synapse0x2c54dd0();
   input += synapse0x2c54e10();
   input += synapse0x2c54e50();
   input += synapse0x2c54e90();
   input += synapse0x2c54ed0();
   input += synapse0x2c54f10();
   input += synapse0x2c54f50();
   input += synapse0x2c54f90();
   input += synapse0x2c54a20();
   input += synapse0x2c54a60();
   input += synapse0x2c550e0();
   input += synapse0x2c55120();
   input += synapse0x2c55160();
   input += synapse0x2c551a0();
   input += synapse0x2c551e0();
   input += synapse0x2c55220();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c54890() {
   double input = input0x2c54890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c66ed0() {
   double input = -1.47528;
   input += synapse0x2c670f0();
   input += synapse0x2c67130();
   input += synapse0x2c67170();
   input += synapse0x2c671b0();
   input += synapse0x2c671f0();
   input += synapse0x2c67230();
   input += synapse0x2c67270();
   input += synapse0x2c672b0();
   input += synapse0x2c672f0();
   input += synapse0x2c67330();
   input += synapse0x2c67370();
   input += synapse0x2c673b0();
   input += synapse0x2c673f0();
   input += synapse0x2c67430();
   input += synapse0x2c67470();
   input += synapse0x2c674b0();
   input += synapse0x2c55260();
   input += synapse0x2c552a0();
   input += synapse0x2c67600();
   input += synapse0x2c67640();
   input += synapse0x2c67680();
   input += synapse0x2c676c0();
   input += synapse0x2c67700();
   input += synapse0x2c67740();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c66ed0() {
   double input = input0x2c66ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c67780() {
   double input = 0.728596;
   input += synapse0x2c67ac0();
   input += synapse0x2c67b00();
   input += synapse0x2c67b40();
   input += synapse0x2c67b80();
   input += synapse0x2c67bc0();
   input += synapse0x2c67c00();
   input += synapse0x2c67c40();
   input += synapse0x2c67c80();
   input += synapse0x2c67cc0();
   input += synapse0x2c67d00();
   input += synapse0x2c67d40();
   input += synapse0x2c67d80();
   input += synapse0x2c67dc0();
   input += synapse0x2c67e00();
   input += synapse0x2c67e40();
   input += synapse0x2c67e80();
   input += synapse0x2c67910();
   input += synapse0x2c67950();
   input += synapse0x2c67fd0();
   input += synapse0x2c68010();
   input += synapse0x2c68050();
   input += synapse0x2c68090();
   input += synapse0x2c680d0();
   input += synapse0x2c68110();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c67780() {
   double input = input0x2c67780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c68150() {
   double input = -1.36242;
   input += synapse0x2c68490();
   input += synapse0x2c684d0();
   input += synapse0x2c68510();
   input += synapse0x2c68550();
   input += synapse0x2c68590();
   input += synapse0x2c685d0();
   input += synapse0x2c68610();
   input += synapse0x2c68650();
   input += synapse0x2c68690();
   input += synapse0x2c686d0();
   input += synapse0x2c68710();
   input += synapse0x2c68750();
   input += synapse0x2c68790();
   input += synapse0x2c687d0();
   input += synapse0x2c68810();
   input += synapse0x2c68850();
   input += synapse0x2c682e0();
   input += synapse0x2c68320();
   input += synapse0x2c689a0();
   input += synapse0x2c689e0();
   input += synapse0x2c68a20();
   input += synapse0x2c68a60();
   input += synapse0x2c68aa0();
   input += synapse0x2c68ae0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c68150() {
   double input = input0x2c68150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c68b20() {
   double input = 0.516938;
   input += synapse0x2c68e60();
   input += synapse0x2c68ea0();
   input += synapse0x2c68ee0();
   input += synapse0x2c68f20();
   input += synapse0x2c68f60();
   input += synapse0x2c68fa0();
   input += synapse0x2c68fe0();
   input += synapse0x2c69020();
   input += synapse0x2c69060();
   input += synapse0x2c690a0();
   input += synapse0x2c690e0();
   input += synapse0x2c69120();
   input += synapse0x2c69160();
   input += synapse0x2c691a0();
   input += synapse0x2c691e0();
   input += synapse0x2c69220();
   input += synapse0x2c68cb0();
   input += synapse0x2c68cf0();
   input += synapse0x2c69370();
   input += synapse0x2c693b0();
   input += synapse0x2c693f0();
   input += synapse0x2c69430();
   input += synapse0x2c69470();
   input += synapse0x2c694b0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c68b20() {
   double input = input0x2c68b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c6fd20() {
   double input = -0.343132;
   input += synapse0x2a09320();
   input += synapse0x2a09360();
   input += synapse0x2c45e60();
   input += synapse0x2c45ea0();
   input += synapse0x2c47930();
   input += synapse0x2c47970();
   input += synapse0x2c48700();
   input += synapse0x2c48740();
   input += synapse0x2c490d0();
   input += synapse0x2c49110();
   input += synapse0x2c49aa0();
   input += synapse0x2c49ae0();
   input += synapse0x2c4a580();
   input += synapse0x2c4a5c0();
   input += synapse0x2c4af50();
   input += synapse0x2c4af90();
   input += synapse0x2c48030();
   input += synapse0x2c48070();
   input += synapse0x2c4cb00();
   input += synapse0x2c4cb40();
   input += synapse0x2c4d4d0();
   input += synapse0x2c4d510();
   input += synapse0x2c4dea0();
   input += synapse0x2c4dee0();
   input += synapse0x2c4e870();
   input += synapse0x2c4e8b0();
   input += synapse0x2c41900();
   input += synapse0x2c41940();
   input += synapse0x2c50960();
   input += synapse0x2c509a0();
   input += synapse0x2c51330();
   input += synapse0x2c51370();
   input += synapse0x2c51d00();
   input += synapse0x2c51d40();
   input += synapse0x2c526d0();
   input += synapse0x2c52710();
   input += synapse0x2c530a0();
   input += synapse0x2c530e0();
   input += synapse0x2c4bbf0();
   input += synapse0x2c4bc30();
   input += synapse0x2c554a0();
   input += synapse0x2c554e0();
   input += synapse0x2c55e30();
   input += synapse0x2c55e70();
   input += synapse0x2c56800();
   input += synapse0x2c56840();
   input += synapse0x2c571d0();
   input += synapse0x2c57210();
   input += synapse0x2c57ba0();
   input += synapse0x2c57be0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c6fd20() {
   double input = input0x2c6fd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c700c0() {
   double input = 3.21611;
   input += synapse0x2c5a2e0();
   input += synapse0x2c5a320();
   input += synapse0x2c4f8a0();
   input += synapse0x2c4f8e0();
   input += synapse0x2c5cec0();
   input += synapse0x2c5cf00();
   input += synapse0x2c5d890();
   input += synapse0x2c5d8d0();
   input += synapse0x2c5e260();
   input += synapse0x2c5e2a0();
   input += synapse0x2c5ec30();
   input += synapse0x2c5ec70();
   input += synapse0x2c5f600();
   input += synapse0x2c5f640();
   input += synapse0x2c5ffd0();
   input += synapse0x2c60010();
   input += synapse0x2c609a0();
   input += synapse0x2c609e0();
   input += synapse0x2c61370();
   input += synapse0x2c613b0();
   input += synapse0x2c61f50();
   input += synapse0x2c61f90();
   input += synapse0x2c62920();
   input += synapse0x2c62960();
   input += synapse0x2c537a0();
   input += synapse0x2c537e0();
   input += synapse0x2c54170();
   input += synapse0x2c541b0();
   input += synapse0x2c54b40();
   input += synapse0x2c54b80();
   input += synapse0x2c67060();
   input += synapse0x2c670a0();
   input += synapse0x2c67a30();
   input += synapse0x2c67a70();
   input += synapse0x2c68400();
   input += synapse0x2c68440();
   input += synapse0x2c68dd0();
   input += synapse0x2c68e10();
   input += synapse0x2c43d60();
   input += synapse0x2c43da0();
   input += synapse0x2c58570();
   input += synapse0x2c585b0();
   input += synapse0x2c694f0();
   input += synapse0x2c69530();
   input += synapse0x2c69570();
   input += synapse0x2c695b0();
   input += synapse0x2c70460();
   input += synapse0x2c704a0();
   input += synapse0x2c704e0();
   input += synapse0x2c70520();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c700c0() {
   double input = input0x2c700c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c70560() {
   double input = 0.868195;
   input += synapse0x2c708a0();
   input += synapse0x2c708e0();
   input += synapse0x2c70920();
   input += synapse0x2c70960();
   input += synapse0x2c709a0();
   input += synapse0x2c709e0();
   input += synapse0x2c70a20();
   input += synapse0x2c70a60();
   input += synapse0x2c70aa0();
   input += synapse0x2c70ae0();
   input += synapse0x2c70b20();
   input += synapse0x2c70b60();
   input += synapse0x2c70ba0();
   input += synapse0x2c70be0();
   input += synapse0x2c70c20();
   input += synapse0x2c70c60();
   input += synapse0x2c706f0();
   input += synapse0x2c70730();
   input += synapse0x2c70db0();
   input += synapse0x2c70df0();
   input += synapse0x2c70e30();
   input += synapse0x2c70e70();
   input += synapse0x2c70eb0();
   input += synapse0x2c70ef0();
   input += synapse0x2c70f30();
   input += synapse0x2c70f70();
   input += synapse0x2c70fb0();
   input += synapse0x2c70ff0();
   input += synapse0x2c71030();
   input += synapse0x2c71070();
   input += synapse0x2c710b0();
   input += synapse0x2c710f0();
   input += synapse0x2c70ca0();
   input += synapse0x2c70ce0();
   input += synapse0x2c70d20();
   input += synapse0x2c70d60();
   input += synapse0x2c71340();
   input += synapse0x2c71380();
   input += synapse0x2c713c0();
   input += synapse0x2c71400();
   input += synapse0x2c71440();
   input += synapse0x2c71480();
   input += synapse0x2c714c0();
   input += synapse0x2c71500();
   input += synapse0x2c71540();
   input += synapse0x2c71580();
   input += synapse0x2c715c0();
   input += synapse0x2c71600();
   input += synapse0x2c71640();
   input += synapse0x2c71680();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c70560() {
   double input = input0x2c70560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c716c0() {
   double input = 2.27658;
   input += synapse0x2c71a00();
   input += synapse0x2c71a40();
   input += synapse0x2c71a80();
   input += synapse0x2c71ac0();
   input += synapse0x2c71b00();
   input += synapse0x2c71b40();
   input += synapse0x2c71b80();
   input += synapse0x2c71bc0();
   input += synapse0x2c71c00();
   input += synapse0x2c71c40();
   input += synapse0x2c71c80();
   input += synapse0x2c71cc0();
   input += synapse0x2c71d00();
   input += synapse0x2c71d40();
   input += synapse0x2c71d80();
   input += synapse0x2c71dc0();
   input += synapse0x2c71850();
   input += synapse0x2c71890();
   input += synapse0x2c71f10();
   input += synapse0x2c71f50();
   input += synapse0x2c71f90();
   input += synapse0x2c71fd0();
   input += synapse0x2c72010();
   input += synapse0x2c72050();
   input += synapse0x2c72090();
   input += synapse0x2c720d0();
   input += synapse0x2c72110();
   input += synapse0x2c72150();
   input += synapse0x2c72190();
   input += synapse0x2c721d0();
   input += synapse0x2c72210();
   input += synapse0x2c72250();
   input += synapse0x2c71e00();
   input += synapse0x2c71e40();
   input += synapse0x2c71e80();
   input += synapse0x2c71ec0();
   input += synapse0x2c724a0();
   input += synapse0x2c724e0();
   input += synapse0x2c72520();
   input += synapse0x2c72560();
   input += synapse0x2c725a0();
   input += synapse0x2c725e0();
   input += synapse0x2c72620();
   input += synapse0x2c72660();
   input += synapse0x2c726a0();
   input += synapse0x2c726e0();
   input += synapse0x2c72720();
   input += synapse0x2c72760();
   input += synapse0x2c727a0();
   input += synapse0x2c727e0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c716c0() {
   double input = input0x2c716c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c72820() {
   double input = -5.01505;
   input += synapse0x2c72b60();
   input += synapse0x2c72ba0();
   input += synapse0x2c72be0();
   input += synapse0x2c72c20();
   input += synapse0x2c72c60();
   input += synapse0x2c72ca0();
   input += synapse0x2c72ce0();
   input += synapse0x2c72d20();
   input += synapse0x2c72d60();
   input += synapse0x2c72da0();
   input += synapse0x2c72de0();
   input += synapse0x2c72e20();
   input += synapse0x2c72e60();
   input += synapse0x2c72ea0();
   input += synapse0x2c72ee0();
   input += synapse0x2c72f20();
   input += synapse0x2c729b0();
   input += synapse0x2c729f0();
   input += synapse0x2c73070();
   input += synapse0x2c730b0();
   input += synapse0x2c730f0();
   input += synapse0x2c73130();
   input += synapse0x2c73170();
   input += synapse0x2c731b0();
   input += synapse0x2c731f0();
   input += synapse0x2c73230();
   input += synapse0x2c73270();
   input += synapse0x2c732b0();
   input += synapse0x2c732f0();
   input += synapse0x2c73330();
   input += synapse0x2c73370();
   input += synapse0x2c733b0();
   input += synapse0x2c72f60();
   input += synapse0x2c72fa0();
   input += synapse0x2c72fe0();
   input += synapse0x2c73020();
   input += synapse0x2c73600();
   input += synapse0x2c73640();
   input += synapse0x2c73680();
   input += synapse0x2c736c0();
   input += synapse0x2c73700();
   input += synapse0x2c73740();
   input += synapse0x2c73780();
   input += synapse0x2c737c0();
   input += synapse0x2c73800();
   input += synapse0x2c73840();
   input += synapse0x2c73880();
   input += synapse0x2c738c0();
   input += synapse0x2c73900();
   input += synapse0x2c73940();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c72820() {
   double input = input0x2c72820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cR::input0x2c73980() {
   double input = 7.44463;
   input += synapse0x2c73ba0();
   input += synapse0x2c73be0();
   input += synapse0x2c73c20();
   input += synapse0x2c73c60();
   input += synapse0x2c73ca0();
   return input;
}

double NNfunction_ns_chi01_cR::neuron0x2c73980() {
   double input = input0x2c73980();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_cR::synapse0x2c43df0() {
   return (neuron0x2c3e9f0()*-0.0362445);
}

double NNfunction_ns_chi01_cR::synapse0x2c43e30() {
   return (neuron0x2c3eca0()*-0.0106423);
}

double NNfunction_ns_chi01_cR::synapse0x2c43e70() {
   return (neuron0x2c3efe0()*0.00328727);
}

double NNfunction_ns_chi01_cR::synapse0x2c43eb0() {
   return (neuron0x2c3f320()*-0.00132673);
}

double NNfunction_ns_chi01_cR::synapse0x2c43ef0() {
   return (neuron0x2c3f660()*-0.0137896);
}

double NNfunction_ns_chi01_cR::synapse0x2c43f30() {
   return (neuron0x2c3f9a0()*0.00238417);
}

double NNfunction_ns_chi01_cR::synapse0x2c43f70() {
   return (neuron0x2c3fce0()*-0.0098296);
}

double NNfunction_ns_chi01_cR::synapse0x2c43fb0() {
   return (neuron0x2c40020()*0.00208566);
}

double NNfunction_ns_chi01_cR::synapse0x2c43ff0() {
   return (neuron0x2c40360()*-0.0158763);
}

double NNfunction_ns_chi01_cR::synapse0x2c44030() {
   return (neuron0x2c406a0()*-0.0169839);
}

double NNfunction_ns_chi01_cR::synapse0x2c44070() {
   return (neuron0x2c409e0()*0.00531839);
}

double NNfunction_ns_chi01_cR::synapse0x2c440b0() {
   return (neuron0x2c40d20()*-0.00452477);
}

double NNfunction_ns_chi01_cR::synapse0x2c440f0() {
   return (neuron0x2c41060()*0.000533251);
}

double NNfunction_ns_chi01_cR::synapse0x2c44130() {
   return (neuron0x2c413a0()*0.0116974);
}

double NNfunction_ns_chi01_cR::synapse0x2c44170() {
   return (neuron0x2c416e0()*-0.0303756);
}

double NNfunction_ns_chi01_cR::synapse0x2c441b0() {
   return (neuron0x2c41a20()*0.0582474);
}

double NNfunction_ns_chi01_cR::synapse0x2c43c40() {
   return (neuron0x2c41d60()*0.01979);
}

double NNfunction_ns_chi01_cR::synapse0x2c43c80() {
   return (neuron0x2c422c0()*0.000953167);
}

double NNfunction_ns_chi01_cR::synapse0x29fab70() {
   return (neuron0x2c42600()*0.00233266);
}

double NNfunction_ns_chi01_cR::synapse0x29fabb0() {
   return (neuron0x2c42940()*0.0074556);
}

double NNfunction_ns_chi01_cR::synapse0x2c441f0() {
   return (neuron0x2c42c80()*-0.0217962);
}

double NNfunction_ns_chi01_cR::synapse0x2c44230() {
   return (neuron0x2c42fc0()*0.00411082);
}

double NNfunction_ns_chi01_cR::synapse0x2c44270() {
   return (neuron0x2c43300()*-0.0201712);
}

double NNfunction_ns_chi01_cR::synapse0x2c442b0() {
   return (neuron0x2c43640()*-6.84742);
}

double NNfunction_ns_chi01_cR::synapse0x2c44630() {
   return (neuron0x2c3e9f0()*-0.00847263);
}

double NNfunction_ns_chi01_cR::synapse0x2c44670() {
   return (neuron0x2c3eca0()*-0.0130769);
}

double NNfunction_ns_chi01_cR::synapse0x2c446b0() {
   return (neuron0x2c3efe0()*0.0374869);
}

double NNfunction_ns_chi01_cR::synapse0x2c446f0() {
   return (neuron0x2c3f320()*-3.03939);
}

double NNfunction_ns_chi01_cR::synapse0x2c44730() {
   return (neuron0x2c3f660()*-0.0244403);
}

double NNfunction_ns_chi01_cR::synapse0x2c44770() {
   return (neuron0x2c3f9a0()*-0.0402483);
}

double NNfunction_ns_chi01_cR::synapse0x2c447b0() {
   return (neuron0x2c3fce0()*0.0141428);
}

double NNfunction_ns_chi01_cR::synapse0x2c447f0() {
   return (neuron0x2c40020()*-0.0355737);
}

double NNfunction_ns_chi01_cR::synapse0x2c44830() {
   return (neuron0x2c40360()*0.019364);
}

double NNfunction_ns_chi01_cR::synapse0x29fa9c0() {
   return (neuron0x2c406a0()*0.0189522);
}

double NNfunction_ns_chi01_cR::synapse0x29faa00() {
   return (neuron0x2c409e0()*0.0589059);
}

double NNfunction_ns_chi01_cR::synapse0x29faa40() {
   return (neuron0x2c40d20()*0.0183708);
}

double NNfunction_ns_chi01_cR::synapse0x29faa80() {
   return (neuron0x2c41060()*0.0314691);
}

double NNfunction_ns_chi01_cR::synapse0x2c44a80() {
   return (neuron0x2c413a0()*0.00180834);
}

double NNfunction_ns_chi01_cR::synapse0x2c44ac0() {
   return (neuron0x2c416e0()*-0.0313727);
}

double NNfunction_ns_chi01_cR::synapse0x2c44b00() {
   return (neuron0x2c41a20()*-0.844466);
}

double NNfunction_ns_chi01_cR::synapse0x2c44480() {
   return (neuron0x2c41d60()*-0.0112347);
}

double NNfunction_ns_chi01_cR::synapse0x2c444c0() {
   return (neuron0x2c422c0()*0.040999);
}

double NNfunction_ns_chi01_cR::synapse0x2c44c50() {
   return (neuron0x2c42600()*0.0193322);
}

double NNfunction_ns_chi01_cR::synapse0x2c44c90() {
   return (neuron0x2c42940()*0.0119606);
}

double NNfunction_ns_chi01_cR::synapse0x2c44cd0() {
   return (neuron0x2c42c80()*0.012691);
}

double NNfunction_ns_chi01_cR::synapse0x2c44d10() {
   return (neuron0x2c42fc0()*-0.00420661);
}

double NNfunction_ns_chi01_cR::synapse0x2c44d50() {
   return (neuron0x2c43300()*0.000956479);
}

double NNfunction_ns_chi01_cR::synapse0x2c44d90() {
   return (neuron0x2c43640()*-0.0346619);
}

double NNfunction_ns_chi01_cR::synapse0x2c45110() {
   return (neuron0x2c3e9f0()*-0.154578);
}

double NNfunction_ns_chi01_cR::synapse0x2c45150() {
   return (neuron0x2c3eca0()*0.0256375);
}

double NNfunction_ns_chi01_cR::synapse0x2c45190() {
   return (neuron0x2c3efe0()*7.68598);
}

double NNfunction_ns_chi01_cR::synapse0x2c451d0() {
   return (neuron0x2c3f320()*0.0470829);
}

double NNfunction_ns_chi01_cR::synapse0x2c45210() {
   return (neuron0x2c3f660()*0.0639439);
}

double NNfunction_ns_chi01_cR::synapse0x2c45250() {
   return (neuron0x2c3f9a0()*0.0324084);
}

double NNfunction_ns_chi01_cR::synapse0x2c45290() {
   return (neuron0x2c3fce0()*-0.0148266);
}

double NNfunction_ns_chi01_cR::synapse0x2c452d0() {
   return (neuron0x2c40020()*0.00911842);
}

double NNfunction_ns_chi01_cR::synapse0x2c45310() {
   return (neuron0x2c40360()*0.0269202);
}

double NNfunction_ns_chi01_cR::synapse0x2c45350() {
   return (neuron0x2c406a0()*-0.0212324);
}

double NNfunction_ns_chi01_cR::synapse0x2c45390() {
   return (neuron0x2c409e0()*0.0356659);
}

double NNfunction_ns_chi01_cR::synapse0x2c453d0() {
   return (neuron0x2c40d20()*0.027317);
}

double NNfunction_ns_chi01_cR::synapse0x2c45410() {
   return (neuron0x2c41060()*0.0433995);
}

double NNfunction_ns_chi01_cR::synapse0x2c45450() {
   return (neuron0x2c413a0()*0.0445389);
}

double NNfunction_ns_chi01_cR::synapse0x2c45490() {
   return (neuron0x2c416e0()*0.0278516);
}

double NNfunction_ns_chi01_cR::synapse0x2c454d0() {
   return (neuron0x2c41a20()*-0.044491);
}

double NNfunction_ns_chi01_cR::synapse0x2c44f60() {
   return (neuron0x2c41d60()*0.017997);
}

double NNfunction_ns_chi01_cR::synapse0x2c44fa0() {
   return (neuron0x2c422c0()*0.0416245);
}

double NNfunction_ns_chi01_cR::synapse0x29fb260() {
   return (neuron0x2c42600()*0.0144531);
}

double NNfunction_ns_chi01_cR::synapse0x2a08b30() {
   return (neuron0x2c42940()*0.065319);
}

double NNfunction_ns_chi01_cR::synapse0x2a08b70() {
   return (neuron0x2c42c80()*-0.0444802);
}

double NNfunction_ns_chi01_cR::synapse0x2c47400() {
   return (neuron0x2c42fc0()*0.0114665);
}

double NNfunction_ns_chi01_cR::synapse0x2c47440() {
   return (neuron0x2c43300()*0.00236542);
}

double NNfunction_ns_chi01_cR::synapse0x2c3e730() {
   return (neuron0x2c43640()*0.143928);
}

double NNfunction_ns_chi01_cR::synapse0x2c3e800() {
   return (neuron0x2c3e9f0()*0.0262414);
}

double NNfunction_ns_chi01_cR::synapse0x2a093b0() {
   return (neuron0x2c3eca0()*0.0733225);
}

double NNfunction_ns_chi01_cR::synapse0x2c44a00() {
   return (neuron0x2c3efe0()*-0.091182);
}

double NNfunction_ns_chi01_cR::synapse0x2c44a40() {
   return (neuron0x2c3f320()*0.0624415);
}

double NNfunction_ns_chi01_cR::synapse0x2c45620() {
   return (neuron0x2c3f660()*-0.454858);
}

double NNfunction_ns_chi01_cR::synapse0x2c45660() {
   return (neuron0x2c3f9a0()*-0.636609);
}

double NNfunction_ns_chi01_cR::synapse0x2c456a0() {
   return (neuron0x2c3fce0()*0.183679);
}

double NNfunction_ns_chi01_cR::synapse0x2c456e0() {
   return (neuron0x2c40020()*0.049847);
}

double NNfunction_ns_chi01_cR::synapse0x2c45720() {
   return (neuron0x2c40360()*-0.162393);
}

double NNfunction_ns_chi01_cR::synapse0x2c45760() {
   return (neuron0x2c406a0()*-0.314878);
}

double NNfunction_ns_chi01_cR::synapse0x2c457a0() {
   return (neuron0x2c409e0()*-0.00987907);
}

double NNfunction_ns_chi01_cR::synapse0x2c457e0() {
   return (neuron0x2c40d20()*-0.0901241);
}

double NNfunction_ns_chi01_cR::synapse0x2c45820() {
   return (neuron0x2c41060()*0.0751679);
}

double NNfunction_ns_chi01_cR::synapse0x2c45860() {
   return (neuron0x2c413a0()*-0.0518654);
}

double NNfunction_ns_chi01_cR::synapse0x2c458a0() {
   return (neuron0x2c416e0()*0.0979668);
}

double NNfunction_ns_chi01_cR::synapse0x2c458e0() {
   return (neuron0x2c41a20()*0.778302);
}

double NNfunction_ns_chi01_cR::synapse0x2c3e770() {
   return (neuron0x2c41d60()*0.136895);
}

double NNfunction_ns_chi01_cR::synapse0x2c3e7b0() {
   return (neuron0x2c422c0()*0.0452383);
}

double NNfunction_ns_chi01_cR::synapse0x2c45a30() {
   return (neuron0x2c42600()*-0.00554724);
}

double NNfunction_ns_chi01_cR::synapse0x2c45a70() {
   return (neuron0x2c42940()*0.0473957);
}

double NNfunction_ns_chi01_cR::synapse0x2c45ab0() {
   return (neuron0x2c42c80()*0.0539379);
}

double NNfunction_ns_chi01_cR::synapse0x2c45af0() {
   return (neuron0x2c42fc0()*-0.100061);
}

double NNfunction_ns_chi01_cR::synapse0x2c45b30() {
   return (neuron0x2c43300()*0.15599);
}

double NNfunction_ns_chi01_cR::synapse0x2c45b70() {
   return (neuron0x2c43640()*0.161209);
}

double NNfunction_ns_chi01_cR::synapse0x2c45ef0() {
   return (neuron0x2c3e9f0()*-0.0174269);
}

double NNfunction_ns_chi01_cR::synapse0x2c45f30() {
   return (neuron0x2c3eca0()*0.0213056);
}

double NNfunction_ns_chi01_cR::synapse0x2c45f70() {
   return (neuron0x2c3efe0()*-0.0490876);
}

double NNfunction_ns_chi01_cR::synapse0x2c45fb0() {
   return (neuron0x2c3f320()*-0.0170896);
}

double NNfunction_ns_chi01_cR::synapse0x2c45ff0() {
   return (neuron0x2c3f660()*-0.0174903);
}

double NNfunction_ns_chi01_cR::synapse0x2c46030() {
   return (neuron0x2c3f9a0()*-0.00478775);
}

double NNfunction_ns_chi01_cR::synapse0x2c46070() {
   return (neuron0x2c3fce0()*0.0293554);
}

double NNfunction_ns_chi01_cR::synapse0x2c460b0() {
   return (neuron0x2c40020()*0.00291053);
}

double NNfunction_ns_chi01_cR::synapse0x2c460f0() {
   return (neuron0x2c40360()*0.00839935);
}

double NNfunction_ns_chi01_cR::synapse0x2c46130() {
   return (neuron0x2c406a0()*-0.00914765);
}

double NNfunction_ns_chi01_cR::synapse0x2c46170() {
   return (neuron0x2c409e0()*-0.00331512);
}

double NNfunction_ns_chi01_cR::synapse0x2c461b0() {
   return (neuron0x2c40d20()*0.00420921);
}

double NNfunction_ns_chi01_cR::synapse0x2c461f0() {
   return (neuron0x2c41060()*-0.0137693);
}

double NNfunction_ns_chi01_cR::synapse0x2c46230() {
   return (neuron0x2c413a0()*-0.00381341);
}

double NNfunction_ns_chi01_cR::synapse0x2c46270() {
   return (neuron0x2c416e0()*-0.0139499);
}

double NNfunction_ns_chi01_cR::synapse0x2c462b0() {
   return (neuron0x2c41a20()*0.17024);
}

double NNfunction_ns_chi01_cR::synapse0x2c46400() {
   return (neuron0x2c41d60()*0.0202004);
}

double NNfunction_ns_chi01_cR::synapse0x2c45d40() {
   return (neuron0x2c422c0()*-0.011275);
}

double NNfunction_ns_chi01_cR::synapse0x2c45d80() {
   return (neuron0x2c42600()*0.0156326);
}

double NNfunction_ns_chi01_cR::synapse0x2c47540() {
   return (neuron0x2c42940()*-0.0111974);
}

double NNfunction_ns_chi01_cR::synapse0x2c47580() {
   return (neuron0x2c42c80()*0.00183702);
}

double NNfunction_ns_chi01_cR::synapse0x2c475c0() {
   return (neuron0x2c42fc0()*0.0099082);
}

double NNfunction_ns_chi01_cR::synapse0x2c47600() {
   return (neuron0x2c43300()*-0.0183436);
}

double NNfunction_ns_chi01_cR::synapse0x2c47640() {
   return (neuron0x2c43640()*-22.6632);
}

double NNfunction_ns_chi01_cR::synapse0x2c479c0() {
   return (neuron0x2c3e9f0()*-0.00776739);
}

double NNfunction_ns_chi01_cR::synapse0x2c47a00() {
   return (neuron0x2c3eca0()*0.0625289);
}

double NNfunction_ns_chi01_cR::synapse0x2c47a40() {
   return (neuron0x2c3efe0()*0.209611);
}

double NNfunction_ns_chi01_cR::synapse0x2c47a80() {
   return (neuron0x2c3f320()*-0.124054);
}

double NNfunction_ns_chi01_cR::synapse0x2c47ac0() {
   return (neuron0x2c3f660()*0.205343);
}

double NNfunction_ns_chi01_cR::synapse0x2c47b00() {
   return (neuron0x2c3f9a0()*0.261337);
}

double NNfunction_ns_chi01_cR::synapse0x2c47b40() {
   return (neuron0x2c3fce0()*-0.0144015);
}

double NNfunction_ns_chi01_cR::synapse0x2c47b80() {
   return (neuron0x2c40020()*-0.0315816);
}

double NNfunction_ns_chi01_cR::synapse0x2c47bc0() {
   return (neuron0x2c40360()*-0.110768);
}

double NNfunction_ns_chi01_cR::synapse0x2a08e80() {
   return (neuron0x2c406a0()*0.802971);
}

double NNfunction_ns_chi01_cR::synapse0x2a08ec0() {
   return (neuron0x2c409e0()*0.0349782);
}

double NNfunction_ns_chi01_cR::synapse0x2a08f00() {
   return (neuron0x2c40d20()*-0.00397851);
}

double NNfunction_ns_chi01_cR::synapse0x2a08f40() {
   return (neuron0x2c41060()*-0.0224236);
}

double NNfunction_ns_chi01_cR::synapse0x2a08f80() {
   return (neuron0x2c413a0()*0.0472928);
}

double NNfunction_ns_chi01_cR::synapse0x2a08fc0() {
   return (neuron0x2c416e0()*0.039855);
}

double NNfunction_ns_chi01_cR::synapse0x2a09000() {
   return (neuron0x2c41a20()*-0.803011);
}

double NNfunction_ns_chi01_cR::synapse0x2c47810() {
   return (neuron0x2c41d60()*-0.0569068);
}

double NNfunction_ns_chi01_cR::synapse0x2c47850() {
   return (neuron0x2c422c0()*-0.0717433);
}

double NNfunction_ns_chi01_cR::synapse0x2a09150() {
   return (neuron0x2c42600()*-0.0460134);
}

double NNfunction_ns_chi01_cR::synapse0x2a09190() {
   return (neuron0x2c42940()*-0.0948672);
}

double NNfunction_ns_chi01_cR::synapse0x2a091d0() {
   return (neuron0x2c42c80()*-0.019372);
}

double NNfunction_ns_chi01_cR::synapse0x2a09210() {
   return (neuron0x2c42fc0()*0.00393227);
}

double NNfunction_ns_chi01_cR::synapse0x2a09250() {
   return (neuron0x2c43300()*-0.132202);
}

double NNfunction_ns_chi01_cR::synapse0x2c48410() {
   return (neuron0x2c43640()*-0.154011);
}

double NNfunction_ns_chi01_cR::synapse0x2c48790() {
   return (neuron0x2c3e9f0()*-0.164245);
}

double NNfunction_ns_chi01_cR::synapse0x2c487d0() {
   return (neuron0x2c3eca0()*-0.113487);
}

double NNfunction_ns_chi01_cR::synapse0x2c48810() {
   return (neuron0x2c3efe0()*-0.0490068);
}

double NNfunction_ns_chi01_cR::synapse0x2c48850() {
   return (neuron0x2c3f320()*0.160406);
}

double NNfunction_ns_chi01_cR::synapse0x2c48890() {
   return (neuron0x2c3f660()*0.522962);
}

double NNfunction_ns_chi01_cR::synapse0x2c488d0() {
   return (neuron0x2c3f9a0()*-0.393188);
}

double NNfunction_ns_chi01_cR::synapse0x2c48910() {
   return (neuron0x2c3fce0()*-0.0747809);
}

double NNfunction_ns_chi01_cR::synapse0x2c48950() {
   return (neuron0x2c40020()*1.13931);
}

double NNfunction_ns_chi01_cR::synapse0x2c48990() {
   return (neuron0x2c40360()*0.129113);
}

double NNfunction_ns_chi01_cR::synapse0x2c489d0() {
   return (neuron0x2c406a0()*0.225779);
}

double NNfunction_ns_chi01_cR::synapse0x2c48a10() {
   return (neuron0x2c409e0()*-0.180351);
}

double NNfunction_ns_chi01_cR::synapse0x2c48a50() {
   return (neuron0x2c40d20()*0.695493);
}

double NNfunction_ns_chi01_cR::synapse0x2c48a90() {
   return (neuron0x2c41060()*0.518096);
}

double NNfunction_ns_chi01_cR::synapse0x2c48ad0() {
   return (neuron0x2c413a0()*-0.0209423);
}

double NNfunction_ns_chi01_cR::synapse0x2c48b10() {
   return (neuron0x2c416e0()*-0.0861891);
}

double NNfunction_ns_chi01_cR::synapse0x2c48b50() {
   return (neuron0x2c41a20()*-0.137066);
}

double NNfunction_ns_chi01_cR::synapse0x2c485e0() {
   return (neuron0x2c41d60()*0.440495);
}

double NNfunction_ns_chi01_cR::synapse0x2c48620() {
   return (neuron0x2c422c0()*0.14186);
}

double NNfunction_ns_chi01_cR::synapse0x2c48ca0() {
   return (neuron0x2c42600()*-0.0351735);
}

double NNfunction_ns_chi01_cR::synapse0x2c48ce0() {
   return (neuron0x2c42940()*-2.91214);
}

double NNfunction_ns_chi01_cR::synapse0x2c48d20() {
   return (neuron0x2c42c80()*-0.203538);
}

double NNfunction_ns_chi01_cR::synapse0x2c48d60() {
   return (neuron0x2c42fc0()*0.148248);
}

double NNfunction_ns_chi01_cR::synapse0x2c48da0() {
   return (neuron0x2c43300()*-0.150535);
}

double NNfunction_ns_chi01_cR::synapse0x2c48de0() {
   return (neuron0x2c43640()*0.0170281);
}

double NNfunction_ns_chi01_cR::synapse0x2c49160() {
   return (neuron0x2c3e9f0()*-0.0384413);
}

double NNfunction_ns_chi01_cR::synapse0x2c491a0() {
   return (neuron0x2c3eca0()*-0.00384659);
}

double NNfunction_ns_chi01_cR::synapse0x2c491e0() {
   return (neuron0x2c3efe0()*0.0176213);
}

double NNfunction_ns_chi01_cR::synapse0x2c49220() {
   return (neuron0x2c3f320()*0.349569);
}

double NNfunction_ns_chi01_cR::synapse0x2c49260() {
   return (neuron0x2c3f660()*-0.0455674);
}

double NNfunction_ns_chi01_cR::synapse0x2c492a0() {
   return (neuron0x2c3f9a0()*-0.0266722);
}

double NNfunction_ns_chi01_cR::synapse0x2c492e0() {
   return (neuron0x2c3fce0()*-0.0364134);
}

double NNfunction_ns_chi01_cR::synapse0x2c49320() {
   return (neuron0x2c40020()*-0.00910292);
}

double NNfunction_ns_chi01_cR::synapse0x2c49360() {
   return (neuron0x2c40360()*0.133949);
}

double NNfunction_ns_chi01_cR::synapse0x2c493a0() {
   return (neuron0x2c406a0()*0.13173);
}

double NNfunction_ns_chi01_cR::synapse0x2c493e0() {
   return (neuron0x2c409e0()*0.112044);
}

double NNfunction_ns_chi01_cR::synapse0x2c49420() {
   return (neuron0x2c40d20()*0.221903);
}

double NNfunction_ns_chi01_cR::synapse0x2c49460() {
   return (neuron0x2c41060()*0.0263869);
}

double NNfunction_ns_chi01_cR::synapse0x2c494a0() {
   return (neuron0x2c413a0()*-0.049438);
}

double NNfunction_ns_chi01_cR::synapse0x2c494e0() {
   return (neuron0x2c416e0()*-0.035055);
}

double NNfunction_ns_chi01_cR::synapse0x2c49520() {
   return (neuron0x2c41a20()*-0.564837);
}

double NNfunction_ns_chi01_cR::synapse0x2c48fb0() {
   return (neuron0x2c41d60()*-0.061619);
}

double NNfunction_ns_chi01_cR::synapse0x2c48ff0() {
   return (neuron0x2c422c0()*0.0469904);
}

double NNfunction_ns_chi01_cR::synapse0x2c49670() {
   return (neuron0x2c42600()*0.000568885);
}

double NNfunction_ns_chi01_cR::synapse0x2c496b0() {
   return (neuron0x2c42940()*0.0635574);
}

double NNfunction_ns_chi01_cR::synapse0x2c496f0() {
   return (neuron0x2c42c80()*-0.0428444);
}

double NNfunction_ns_chi01_cR::synapse0x2c49730() {
   return (neuron0x2c42fc0()*0.0153829);
}

double NNfunction_ns_chi01_cR::synapse0x2c49770() {
   return (neuron0x2c43300()*-0.00884699);
}

double NNfunction_ns_chi01_cR::synapse0x2c497b0() {
   return (neuron0x2c43640()*0.0619873);
}

double NNfunction_ns_chi01_cR::synapse0x2c421b0() {
   return (neuron0x2c3e9f0()*-0.181847);
}

double NNfunction_ns_chi01_cR::synapse0x2c421f0() {
   return (neuron0x2c3eca0()*0.305093);
}

double NNfunction_ns_chi01_cR::synapse0x2c42230() {
   return (neuron0x2c3efe0()*-0.196689);
}

double NNfunction_ns_chi01_cR::synapse0x2c42270() {
   return (neuron0x2c3f320()*0.168309);
}

double NNfunction_ns_chi01_cR::synapse0x2c49d40() {
   return (neuron0x2c3f660()*0.509906);
}

double NNfunction_ns_chi01_cR::synapse0x2c49d80() {
   return (neuron0x2c3f9a0()*0.247037);
}

double NNfunction_ns_chi01_cR::synapse0x2c49dc0() {
   return (neuron0x2c3fce0()*0.486711);
}

double NNfunction_ns_chi01_cR::synapse0x2c49e00() {
   return (neuron0x2c40020()*-0.207461);
}

double NNfunction_ns_chi01_cR::synapse0x2c49e40() {
   return (neuron0x2c40360()*0.265057);
}

double NNfunction_ns_chi01_cR::synapse0x2c49e80() {
   return (neuron0x2c406a0()*0.180688);
}

double NNfunction_ns_chi01_cR::synapse0x2c49ec0() {
   return (neuron0x2c409e0()*-0.0604267);
}

double NNfunction_ns_chi01_cR::synapse0x2c49f00() {
   return (neuron0x2c40d20()*-0.341346);
}

double NNfunction_ns_chi01_cR::synapse0x2c49f40() {
   return (neuron0x2c41060()*-0.141522);
}

double NNfunction_ns_chi01_cR::synapse0x2c49f80() {
   return (neuron0x2c413a0()*0.341193);
}

double NNfunction_ns_chi01_cR::synapse0x2c49fc0() {
   return (neuron0x2c416e0()*1.56219);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a000() {
   return (neuron0x2c41a20()*-0.87186);
}

double NNfunction_ns_chi01_cR::synapse0x2c49980() {
   return (neuron0x2c41d60()*-0.0547698);
}

double NNfunction_ns_chi01_cR::synapse0x2c499c0() {
   return (neuron0x2c422c0()*0.185415);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a150() {
   return (neuron0x2c42600()*0.204271);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a190() {
   return (neuron0x2c42940()*-0.280873);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a1d0() {
   return (neuron0x2c42c80()*0.156952);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a210() {
   return (neuron0x2c42fc0()*-0.105628);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a250() {
   return (neuron0x2c43300()*-0.189201);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a290() {
   return (neuron0x2c43640()*-0.314194);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a610() {
   return (neuron0x2c3e9f0()*0.0730659);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a650() {
   return (neuron0x2c3eca0()*-0.762836);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a690() {
   return (neuron0x2c3efe0()*0.00239879);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a6d0() {
   return (neuron0x2c3f320()*0.841331);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a710() {
   return (neuron0x2c3f660()*-0.858753);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a750() {
   return (neuron0x2c3f9a0()*-0.475681);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a790() {
   return (neuron0x2c3fce0()*-0.281639);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a7d0() {
   return (neuron0x2c40020()*-0.752937);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a810() {
   return (neuron0x2c40360()*1.12912);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a850() {
   return (neuron0x2c406a0()*-0.417789);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a890() {
   return (neuron0x2c409e0()*0.00430559);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a8d0() {
   return (neuron0x2c40d20()*-0.251583);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a910() {
   return (neuron0x2c41060()*-0.403549);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a950() {
   return (neuron0x2c413a0()*0.790298);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a990() {
   return (neuron0x2c416e0()*-0.764611);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a9d0() {
   return (neuron0x2c41a20()*-0.0991362);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a460() {
   return (neuron0x2c41d60()*-0.0758059);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a4a0() {
   return (neuron0x2c422c0()*0.211941);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ab20() {
   return (neuron0x2c42600()*-0.181668);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ab60() {
   return (neuron0x2c42940()*-1.10322);
}

double NNfunction_ns_chi01_cR::synapse0x2c4aba0() {
   return (neuron0x2c42c80()*-1.32716);
}

double NNfunction_ns_chi01_cR::synapse0x2c4abe0() {
   return (neuron0x2c42fc0()*-0.317045);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ac20() {
   return (neuron0x2c43300()*-0.526118);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ac60() {
   return (neuron0x2c43640()*1.34319);
}

double NNfunction_ns_chi01_cR::synapse0x2c4afe0() {
   return (neuron0x2c3e9f0()*-0.638186);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b020() {
   return (neuron0x2c3eca0()*1.26084);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b060() {
   return (neuron0x2c3efe0()*1.25043);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b0a0() {
   return (neuron0x2c3f320()*-0.205846);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b0e0() {
   return (neuron0x2c3f660()*-0.0998553);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b120() {
   return (neuron0x2c3f9a0()*0.000169158);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b160() {
   return (neuron0x2c3fce0()*0.0931002);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b1a0() {
   return (neuron0x2c40020()*1.24662);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b1e0() {
   return (neuron0x2c40360()*1.14015);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b220() {
   return (neuron0x2c406a0()*0.671081);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b260() {
   return (neuron0x2c409e0()*0.0270346);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b2a0() {
   return (neuron0x2c40d20()*-0.340629);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b2e0() {
   return (neuron0x2c41060()*-0.105355);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b320() {
   return (neuron0x2c413a0()*0.972363);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b360() {
   return (neuron0x2c416e0()*-0.44108);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b3a0() {
   return (neuron0x2c41a20()*-0.795545);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ae30() {
   return (neuron0x2c41d60()*-0.504239);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ae70() {
   return (neuron0x2c422c0()*0.627997);
}

double NNfunction_ns_chi01_cR::synapse0x2c47c00() {
   return (neuron0x2c42600()*2.01507);
}

double NNfunction_ns_chi01_cR::synapse0x2c47c40() {
   return (neuron0x2c42940()*-0.393274);
}

double NNfunction_ns_chi01_cR::synapse0x2c47c80() {
   return (neuron0x2c42c80()*-1.56953);
}

double NNfunction_ns_chi01_cR::synapse0x2c47cc0() {
   return (neuron0x2c42fc0()*0.324353);
}

double NNfunction_ns_chi01_cR::synapse0x2c47d00() {
   return (neuron0x2c43300()*-0.706877);
}

double NNfunction_ns_chi01_cR::synapse0x2c47d40() {
   return (neuron0x2c43640()*0.189243);
}

double NNfunction_ns_chi01_cR::synapse0x2c480c0() {
   return (neuron0x2c3e9f0()*-0.179135);
}

double NNfunction_ns_chi01_cR::synapse0x2c48100() {
   return (neuron0x2c3eca0()*-6.32095);
}

double NNfunction_ns_chi01_cR::synapse0x2c48140() {
   return (neuron0x2c3efe0()*0.0313182);
}

double NNfunction_ns_chi01_cR::synapse0x2c48180() {
   return (neuron0x2c3f320()*0.0970908);
}

double NNfunction_ns_chi01_cR::synapse0x2c481c0() {
   return (neuron0x2c3f660()*-0.0148493);
}

double NNfunction_ns_chi01_cR::synapse0x2c48200() {
   return (neuron0x2c3f9a0()*0.0511324);
}

double NNfunction_ns_chi01_cR::synapse0x2c48240() {
   return (neuron0x2c3fce0()*-0.0258888);
}

double NNfunction_ns_chi01_cR::synapse0x2c48280() {
   return (neuron0x2c40020()*-0.0563208);
}

double NNfunction_ns_chi01_cR::synapse0x2c482c0() {
   return (neuron0x2c40360()*0.0132032);
}

double NNfunction_ns_chi01_cR::synapse0x2c48300() {
   return (neuron0x2c406a0()*-0.0229887);
}

double NNfunction_ns_chi01_cR::synapse0x2c48340() {
   return (neuron0x2c409e0()*0.00203882);
}

double NNfunction_ns_chi01_cR::synapse0x2c48380() {
   return (neuron0x2c40d20()*0.0323404);
}

double NNfunction_ns_chi01_cR::synapse0x2c483c0() {
   return (neuron0x2c41060()*-0.0273709);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c500() {
   return (neuron0x2c413a0()*0.104025);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c540() {
   return (neuron0x2c416e0()*-0.12066);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c580() {
   return (neuron0x2c41a20()*-0.648568);
}

double NNfunction_ns_chi01_cR::synapse0x2c47f10() {
   return (neuron0x2c41d60()*-0.101377);
}

double NNfunction_ns_chi01_cR::synapse0x2c47f50() {
   return (neuron0x2c422c0()*0.0134407);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c6d0() {
   return (neuron0x2c42600()*-0.0652829);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c710() {
   return (neuron0x2c42940()*0.0601855);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c750() {
   return (neuron0x2c42c80()*-0.0693767);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c790() {
   return (neuron0x2c42fc0()*-0.0167803);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c7d0() {
   return (neuron0x2c43300()*-0.0283878);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c810() {
   return (neuron0x2c43640()*-6.54934);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cb90() {
   return (neuron0x2c3e9f0()*0.125166);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cbd0() {
   return (neuron0x2c3eca0()*0.603301);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cc10() {
   return (neuron0x2c3efe0()*1.53956);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cc50() {
   return (neuron0x2c3f320()*-2.77623);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cc90() {
   return (neuron0x2c3f660()*-0.444919);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ccd0() {
   return (neuron0x2c3f9a0()*0.318977);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cd10() {
   return (neuron0x2c3fce0()*-0.16407);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cd50() {
   return (neuron0x2c40020()*0.283148);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cd90() {
   return (neuron0x2c40360()*0.291702);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cdd0() {
   return (neuron0x2c406a0()*-0.318034);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ce10() {
   return (neuron0x2c409e0()*-0.104148);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ce50() {
   return (neuron0x2c40d20()*0.431592);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ce90() {
   return (neuron0x2c41060()*-0.14174);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ced0() {
   return (neuron0x2c413a0()*-0.123602);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cf10() {
   return (neuron0x2c416e0()*0.365427);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cf50() {
   return (neuron0x2c41a20()*1.2903);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c9e0() {
   return (neuron0x2c41d60()*-0.347084);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ca20() {
   return (neuron0x2c422c0()*-0.710697);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d0a0() {
   return (neuron0x2c42600()*0.387036);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d0e0() {
   return (neuron0x2c42940()*-0.0044566);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d120() {
   return (neuron0x2c42c80()*-0.0273916);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d160() {
   return (neuron0x2c42fc0()*0.520637);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d1a0() {
   return (neuron0x2c43300()*-0.761187);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d1e0() {
   return (neuron0x2c43640()*0.045513);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d560() {
   return (neuron0x2c3e9f0()*-0.00727927);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d5a0() {
   return (neuron0x2c3eca0()*-1.48345);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d5e0() {
   return (neuron0x2c3efe0()*-0.0158422);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d620() {
   return (neuron0x2c3f320()*-0.0144192);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d660() {
   return (neuron0x2c3f660()*0.00292696);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d6a0() {
   return (neuron0x2c3f9a0()*-0.0080475);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d6e0() {
   return (neuron0x2c3fce0()*0.00662716);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d720() {
   return (neuron0x2c40020()*0.0104683);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d760() {
   return (neuron0x2c40360()*-0.00975656);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d7a0() {
   return (neuron0x2c406a0()*-0.0199328);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d7e0() {
   return (neuron0x2c409e0()*-0.0165293);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d820() {
   return (neuron0x2c40d20()*0.00107669);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d860() {
   return (neuron0x2c41060()*0.00387655);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d8a0() {
   return (neuron0x2c413a0()*-0.00225088);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d8e0() {
   return (neuron0x2c416e0()*0.0154439);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d920() {
   return (neuron0x2c41a20()*0.507656);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d3b0() {
   return (neuron0x2c41d60()*-0.0201822);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d3f0() {
   return (neuron0x2c422c0()*-0.0112184);
}

double NNfunction_ns_chi01_cR::synapse0x2c4da70() {
   return (neuron0x2c42600()*-0.00129011);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dab0() {
   return (neuron0x2c42940()*0.00492169);
}

double NNfunction_ns_chi01_cR::synapse0x2c4daf0() {
   return (neuron0x2c42c80()*0.00800621);
}

double NNfunction_ns_chi01_cR::synapse0x2c4db30() {
   return (neuron0x2c42fc0()*0.000307143);
}

double NNfunction_ns_chi01_cR::synapse0x2c4db70() {
   return (neuron0x2c43300()*0.00528929);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dbb0() {
   return (neuron0x2c43640()*0.0226213);
}

double NNfunction_ns_chi01_cR::synapse0x2c4df30() {
   return (neuron0x2c3e9f0()*-0.0128465);
}

double NNfunction_ns_chi01_cR::synapse0x2c4df70() {
   return (neuron0x2c3eca0()*-5.7149);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dfb0() {
   return (neuron0x2c3efe0()*1.01876);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dff0() {
   return (neuron0x2c3f320()*-0.0405698);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e030() {
   return (neuron0x2c3f660()*0.878058);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e070() {
   return (neuron0x2c3f9a0()*-0.638719);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e0b0() {
   return (neuron0x2c3fce0()*0.488378);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e0f0() {
   return (neuron0x2c40020()*0.0865569);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e130() {
   return (neuron0x2c40360()*-0.326989);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e170() {
   return (neuron0x2c406a0()*-0.0903169);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e1b0() {
   return (neuron0x2c409e0()*0.356397);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e1f0() {
   return (neuron0x2c40d20()*-0.581024);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e230() {
   return (neuron0x2c41060()*-0.209078);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e270() {
   return (neuron0x2c413a0()*0.947057);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e2b0() {
   return (neuron0x2c416e0()*-0.796409);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e2f0() {
   return (neuron0x2c41a20()*2.28846);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dd80() {
   return (neuron0x2c41d60()*-0.247216);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ddc0() {
   return (neuron0x2c422c0()*0.427415);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e440() {
   return (neuron0x2c42600()*-0.458759);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e480() {
   return (neuron0x2c42940()*-0.917975);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e4c0() {
   return (neuron0x2c42c80()*-0.802751);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e500() {
   return (neuron0x2c42fc0()*-0.263228);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e540() {
   return (neuron0x2c43300()*-0.0207176);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e580() {
   return (neuron0x2c43640()*1.09623);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e900() {
   return (neuron0x2c3e9f0()*0.0585124);
}

double NNfunction_ns_chi01_cR::synapse0x2c3eb80() {
   return (neuron0x2c3eca0()*-0.441008);
}

double NNfunction_ns_chi01_cR::synapse0x2c3ebc0() {
   return (neuron0x2c3efe0()*0.0213966);
}

double NNfunction_ns_chi01_cR::synapse0x2c3eec0() {
   return (neuron0x2c3f320()*-0.0623923);
}

double NNfunction_ns_chi01_cR::synapse0x2c3ef00() {
   return (neuron0x2c3f660()*0.079408);
}

double NNfunction_ns_chi01_cR::synapse0x2c3f200() {
   return (neuron0x2c3f9a0()*-0.0314605);
}

double NNfunction_ns_chi01_cR::synapse0x2c3f240() {
   return (neuron0x2c3fce0()*-0.0333036);
}

double NNfunction_ns_chi01_cR::synapse0x2c3f540() {
   return (neuron0x2c40020()*-0.0276447);
}

double NNfunction_ns_chi01_cR::synapse0x2c3f580() {
   return (neuron0x2c40360()*0.0462437);
}

double NNfunction_ns_chi01_cR::synapse0x2c3f880() {
   return (neuron0x2c406a0()*0.171562);
}

double NNfunction_ns_chi01_cR::synapse0x2c3f8c0() {
   return (neuron0x2c409e0()*0.0454908);
}

double NNfunction_ns_chi01_cR::synapse0x2c3fbc0() {
   return (neuron0x2c40d20()*-0.0445956);
}

double NNfunction_ns_chi01_cR::synapse0x2c3fc00() {
   return (neuron0x2c41060()*-0.139221);
}

double NNfunction_ns_chi01_cR::synapse0x2c3ff00() {
   return (neuron0x2c413a0()*-0.0449109);
}

double NNfunction_ns_chi01_cR::synapse0x2c3ff40() {
   return (neuron0x2c416e0()*0.0560311);
}

double NNfunction_ns_chi01_cR::synapse0x2c40240() {
   return (neuron0x2c41a20()*-1.01607);
}

double NNfunction_ns_chi01_cR::synapse0x2c40280() {
   return (neuron0x2c41d60()*0.0577357);
}

double NNfunction_ns_chi01_cR::synapse0x2c40580() {
   return (neuron0x2c422c0()*0.192292);
}

double NNfunction_ns_chi01_cR::synapse0x2c405c0() {
   return (neuron0x2c42600()*0.0709675);
}

double NNfunction_ns_chi01_cR::synapse0x2c408c0() {
   return (neuron0x2c42940()*-0.10267);
}

double NNfunction_ns_chi01_cR::synapse0x2c40900() {
   return (neuron0x2c42c80()*0.0151702);
}

double NNfunction_ns_chi01_cR::synapse0x2c40c00() {
   return (neuron0x2c42fc0()*0.0403023);
}

double NNfunction_ns_chi01_cR::synapse0x2c40c40() {
   return (neuron0x2c43300()*-0.0153596);
}

double NNfunction_ns_chi01_cR::synapse0x2c40f40() {
   return (neuron0x2c43640()*-0.0508252);
}

double NNfunction_ns_chi01_cR::synapse0x2c40f80() {
   return (neuron0x2c3e9f0()*-0.419836);
}

double NNfunction_ns_chi01_cR::synapse0x2c41c40() {
   return (neuron0x2c3eca0()*0.145896);
}

double NNfunction_ns_chi01_cR::synapse0x2c41c80() {
   return (neuron0x2c3efe0()*-0.732447);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e750() {
   return (neuron0x2c3f320()*-0.220813);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e790() {
   return (neuron0x2c3f660()*0.819625);
}

double NNfunction_ns_chi01_cR::synapse0x2c41f80() {
   return (neuron0x2c3f9a0()*0.108054);
}

double NNfunction_ns_chi01_cR::synapse0x2c41fc0() {
   return (neuron0x2c3fce0()*0.385729);
}

double NNfunction_ns_chi01_cR::synapse0x2c424e0() {
   return (neuron0x2c40020()*0.135332);
}

double NNfunction_ns_chi01_cR::synapse0x2c42520() {
   return (neuron0x2c40360()*-0.500109);
}

double NNfunction_ns_chi01_cR::synapse0x2c42820() {
   return (neuron0x2c406a0()*-0.468797);
}

double NNfunction_ns_chi01_cR::synapse0x2c42860() {
   return (neuron0x2c409e0()*0.0366681);
}

double NNfunction_ns_chi01_cR::synapse0x2c42b60() {
   return (neuron0x2c40d20()*0.110984);
}

double NNfunction_ns_chi01_cR::synapse0x2c42ba0() {
   return (neuron0x2c41060()*0.246382);
}

double NNfunction_ns_chi01_cR::synapse0x2c42ea0() {
   return (neuron0x2c413a0()*-0.0822134);
}

double NNfunction_ns_chi01_cR::synapse0x2c42ee0() {
   return (neuron0x2c416e0()*-0.523487);
}

double NNfunction_ns_chi01_cR::synapse0x2c431e0() {
   return (neuron0x2c41a20()*0.245444);
}

double NNfunction_ns_chi01_cR::synapse0x2c43220() {
   return (neuron0x2c41d60()*-0.0139468);
}

double NNfunction_ns_chi01_cR::synapse0x2c43520() {
   return (neuron0x2c422c0()*-0.257795);
}

double NNfunction_ns_chi01_cR::synapse0x2c43560() {
   return (neuron0x2c42600()*0.0436262);
}

double NNfunction_ns_chi01_cR::synapse0x2c43860() {
   return (neuron0x2c42940()*-0.00636181);
}

double NNfunction_ns_chi01_cR::synapse0x2c438a0() {
   return (neuron0x2c42c80()*0.00977972);
}

double NNfunction_ns_chi01_cR::synapse0x2c41280() {
   return (neuron0x2c42fc0()*0.0758967);
}

double NNfunction_ns_chi01_cR::synapse0x2c412c0() {
   return (neuron0x2c43300()*0.150294);
}

double NNfunction_ns_chi01_cR::synapse0x2c50670() {
   return (neuron0x2c43640()*0.361372);
}

double NNfunction_ns_chi01_cR::synapse0x2c509f0() {
   return (neuron0x2c3e9f0()*-0.0361282);
}

double NNfunction_ns_chi01_cR::synapse0x2c50a30() {
   return (neuron0x2c3eca0()*-0.0220306);
}

double NNfunction_ns_chi01_cR::synapse0x2c50a70() {
   return (neuron0x2c3efe0()*0.00186948);
}

double NNfunction_ns_chi01_cR::synapse0x2c50ab0() {
   return (neuron0x2c3f320()*0.2763);
}

double NNfunction_ns_chi01_cR::synapse0x2c50af0() {
   return (neuron0x2c3f660()*-0.117918);
}

double NNfunction_ns_chi01_cR::synapse0x2c50b30() {
   return (neuron0x2c3f9a0()*0.101757);
}

double NNfunction_ns_chi01_cR::synapse0x2c50b70() {
   return (neuron0x2c3fce0()*0.0646667);
}

double NNfunction_ns_chi01_cR::synapse0x2c50bb0() {
   return (neuron0x2c40020()*0.0665888);
}

double NNfunction_ns_chi01_cR::synapse0x2c50bf0() {
   return (neuron0x2c40360()*-0.106789);
}

double NNfunction_ns_chi01_cR::synapse0x2c50c30() {
   return (neuron0x2c406a0()*-0.116899);
}

double NNfunction_ns_chi01_cR::synapse0x2c50c70() {
   return (neuron0x2c409e0()*-0.0565084);
}

double NNfunction_ns_chi01_cR::synapse0x2c50cb0() {
   return (neuron0x2c40d20()*0.0153462);
}

double NNfunction_ns_chi01_cR::synapse0x2c50cf0() {
   return (neuron0x2c41060()*-0.0454653);
}

double NNfunction_ns_chi01_cR::synapse0x2c50d30() {
   return (neuron0x2c413a0()*0.0149907);
}

double NNfunction_ns_chi01_cR::synapse0x2c50d70() {
   return (neuron0x2c416e0()*-0.0152168);
}

double NNfunction_ns_chi01_cR::synapse0x2c50db0() {
   return (neuron0x2c41a20()*2.05804);
}

double NNfunction_ns_chi01_cR::synapse0x2c50840() {
   return (neuron0x2c41d60()*0.0152576);
}

double NNfunction_ns_chi01_cR::synapse0x2c50880() {
   return (neuron0x2c422c0()*-0.0594819);
}

double NNfunction_ns_chi01_cR::synapse0x2c50f00() {
   return (neuron0x2c42600()*-0.0302288);
}

double NNfunction_ns_chi01_cR::synapse0x2c50f40() {
   return (neuron0x2c42940()*0.0369415);
}

double NNfunction_ns_chi01_cR::synapse0x2c50f80() {
   return (neuron0x2c42c80()*0.0121164);
}

double NNfunction_ns_chi01_cR::synapse0x2c50fc0() {
   return (neuron0x2c42fc0()*0.0476621);
}

double NNfunction_ns_chi01_cR::synapse0x2c51000() {
   return (neuron0x2c43300()*0.00456815);
}

double NNfunction_ns_chi01_cR::synapse0x2c51040() {
   return (neuron0x2c43640()*-0.0158759);
}

double NNfunction_ns_chi01_cR::synapse0x2c513c0() {
   return (neuron0x2c3e9f0()*-0.0452277);
}

double NNfunction_ns_chi01_cR::synapse0x2c51400() {
   return (neuron0x2c3eca0()*-1.40003);
}

double NNfunction_ns_chi01_cR::synapse0x2c51440() {
   return (neuron0x2c3efe0()*-0.340901);
}

double NNfunction_ns_chi01_cR::synapse0x2c51480() {
   return (neuron0x2c3f320()*0.0447236);
}

double NNfunction_ns_chi01_cR::synapse0x2c514c0() {
   return (neuron0x2c3f660()*-0.142578);
}

double NNfunction_ns_chi01_cR::synapse0x2c51500() {
   return (neuron0x2c3f9a0()*0.00702289);
}

double NNfunction_ns_chi01_cR::synapse0x2c51540() {
   return (neuron0x2c3fce0()*0.0651878);
}

double NNfunction_ns_chi01_cR::synapse0x2c51580() {
   return (neuron0x2c40020()*-0.00585716);
}

double NNfunction_ns_chi01_cR::synapse0x2c515c0() {
   return (neuron0x2c40360()*0.0796933);
}

double NNfunction_ns_chi01_cR::synapse0x2c51600() {
   return (neuron0x2c406a0()*-0.0252734);
}

double NNfunction_ns_chi01_cR::synapse0x2c51640() {
   return (neuron0x2c409e0()*0.0732881);
}

double NNfunction_ns_chi01_cR::synapse0x2c51680() {
   return (neuron0x2c40d20()*0.0350194);
}

double NNfunction_ns_chi01_cR::synapse0x2c516c0() {
   return (neuron0x2c41060()*0.0265735);
}

double NNfunction_ns_chi01_cR::synapse0x2c51700() {
   return (neuron0x2c413a0()*-0.089445);
}

double NNfunction_ns_chi01_cR::synapse0x2c51740() {
   return (neuron0x2c416e0()*-0.0261222);
}

double NNfunction_ns_chi01_cR::synapse0x2c51780() {
   return (neuron0x2c41a20()*-2.36476);
}

double NNfunction_ns_chi01_cR::synapse0x2c51210() {
   return (neuron0x2c41d60()*0.0612855);
}

double NNfunction_ns_chi01_cR::synapse0x2c51250() {
   return (neuron0x2c422c0()*-0.0186284);
}

double NNfunction_ns_chi01_cR::synapse0x2c518d0() {
   return (neuron0x2c42600()*0.0504516);
}

double NNfunction_ns_chi01_cR::synapse0x2c51910() {
   return (neuron0x2c42940()*-0.00547893);
}

double NNfunction_ns_chi01_cR::synapse0x2c51950() {
   return (neuron0x2c42c80()*0.0233917);
}

double NNfunction_ns_chi01_cR::synapse0x2c51990() {
   return (neuron0x2c42fc0()*0.0999654);
}

double NNfunction_ns_chi01_cR::synapse0x2c519d0() {
   return (neuron0x2c43300()*-0.0134013);
}

double NNfunction_ns_chi01_cR::synapse0x2c51a10() {
   return (neuron0x2c43640()*0.101768);
}

double NNfunction_ns_chi01_cR::synapse0x2c51d90() {
   return (neuron0x2c3e9f0()*-0.0858426);
}

double NNfunction_ns_chi01_cR::synapse0x2c51dd0() {
   return (neuron0x2c3eca0()*2.25329);
}

double NNfunction_ns_chi01_cR::synapse0x2c51e10() {
   return (neuron0x2c3efe0()*2.56185);
}

double NNfunction_ns_chi01_cR::synapse0x2c51e50() {
   return (neuron0x2c3f320()*-0.0346501);
}

double NNfunction_ns_chi01_cR::synapse0x2c51e90() {
   return (neuron0x2c3f660()*0.0166852);
}

double NNfunction_ns_chi01_cR::synapse0x2c51ed0() {
   return (neuron0x2c3f9a0()*-0.0974203);
}

double NNfunction_ns_chi01_cR::synapse0x2c51f10() {
   return (neuron0x2c3fce0()*-0.0514207);
}

double NNfunction_ns_chi01_cR::synapse0x2c51f50() {
   return (neuron0x2c40020()*-0.0736734);
}

double NNfunction_ns_chi01_cR::synapse0x2c51f90() {
   return (neuron0x2c40360()*-0.0292067);
}

double NNfunction_ns_chi01_cR::synapse0x2c51fd0() {
   return (neuron0x2c406a0()*-0.0140172);
}

double NNfunction_ns_chi01_cR::synapse0x2c52010() {
   return (neuron0x2c409e0()*0.00313368);
}

double NNfunction_ns_chi01_cR::synapse0x2c52050() {
   return (neuron0x2c40d20()*-0.0582473);
}

double NNfunction_ns_chi01_cR::synapse0x2c52090() {
   return (neuron0x2c41060()*0.0406809);
}

double NNfunction_ns_chi01_cR::synapse0x2c520d0() {
   return (neuron0x2c413a0()*0.0757307);
}

double NNfunction_ns_chi01_cR::synapse0x2c52110() {
   return (neuron0x2c416e0()*0.00968838);
}

double NNfunction_ns_chi01_cR::synapse0x2c52150() {
   return (neuron0x2c41a20()*-0.539187);
}

double NNfunction_ns_chi01_cR::synapse0x2c51be0() {
   return (neuron0x2c41d60()*-0.240824);
}

double NNfunction_ns_chi01_cR::synapse0x2c51c20() {
   return (neuron0x2c422c0()*0.0756562);
}

double NNfunction_ns_chi01_cR::synapse0x2c522a0() {
   return (neuron0x2c42600()*-0.106149);
}

double NNfunction_ns_chi01_cR::synapse0x2c522e0() {
   return (neuron0x2c42940()*0.11788);
}

double NNfunction_ns_chi01_cR::synapse0x2c52320() {
   return (neuron0x2c42c80()*0.122142);
}

double NNfunction_ns_chi01_cR::synapse0x2c52360() {
   return (neuron0x2c42fc0()*0.0218262);
}

double NNfunction_ns_chi01_cR::synapse0x2c523a0() {
   return (neuron0x2c43300()*-0.0414039);
}

double NNfunction_ns_chi01_cR::synapse0x2c523e0() {
   return (neuron0x2c43640()*-0.395422);
}

double NNfunction_ns_chi01_cR::synapse0x2c52760() {
   return (neuron0x2c3e9f0()*0.0667464);
}

double NNfunction_ns_chi01_cR::synapse0x2c527a0() {
   return (neuron0x2c3eca0()*-6.68318);
}

double NNfunction_ns_chi01_cR::synapse0x2c527e0() {
   return (neuron0x2c3efe0()*0.0534081);
}

double NNfunction_ns_chi01_cR::synapse0x2c52820() {
   return (neuron0x2c3f320()*0.0199817);
}

double NNfunction_ns_chi01_cR::synapse0x2c52860() {
   return (neuron0x2c3f660()*0.0487758);
}

double NNfunction_ns_chi01_cR::synapse0x2c528a0() {
   return (neuron0x2c3f9a0()*0.0297136);
}

double NNfunction_ns_chi01_cR::synapse0x2c528e0() {
   return (neuron0x2c3fce0()*0.054137);
}

double NNfunction_ns_chi01_cR::synapse0x2c52920() {
   return (neuron0x2c40020()*0.0238389);
}

double NNfunction_ns_chi01_cR::synapse0x2c52960() {
   return (neuron0x2c40360()*-0.0184205);
}

double NNfunction_ns_chi01_cR::synapse0x2c529a0() {
   return (neuron0x2c406a0()*0.00274111);
}

double NNfunction_ns_chi01_cR::synapse0x2c529e0() {
   return (neuron0x2c409e0()*-0.0405598);
}

double NNfunction_ns_chi01_cR::synapse0x2c52a20() {
   return (neuron0x2c40d20()*0.0422669);
}

double NNfunction_ns_chi01_cR::synapse0x2c52a60() {
   return (neuron0x2c41060()*0.0035207);
}

double NNfunction_ns_chi01_cR::synapse0x2c52aa0() {
   return (neuron0x2c413a0()*-0.0263666);
}

double NNfunction_ns_chi01_cR::synapse0x2c52ae0() {
   return (neuron0x2c416e0()*0.0118189);
}

double NNfunction_ns_chi01_cR::synapse0x2c52b20() {
   return (neuron0x2c41a20()*-0.324342);
}

double NNfunction_ns_chi01_cR::synapse0x2c525b0() {
   return (neuron0x2c41d60()*-0.0176391);
}

double NNfunction_ns_chi01_cR::synapse0x2c525f0() {
   return (neuron0x2c422c0()*-0.0136312);
}

double NNfunction_ns_chi01_cR::synapse0x2c52c70() {
   return (neuron0x2c42600()*-0.0227383);
}

double NNfunction_ns_chi01_cR::synapse0x2c52cb0() {
   return (neuron0x2c42940()*0.0184084);
}

double NNfunction_ns_chi01_cR::synapse0x2c52cf0() {
   return (neuron0x2c42c80()*0.015952);
}

double NNfunction_ns_chi01_cR::synapse0x2c52d30() {
   return (neuron0x2c42fc0()*-0.00378827);
}

double NNfunction_ns_chi01_cR::synapse0x2c52d70() {
   return (neuron0x2c43300()*0.0298866);
}

double NNfunction_ns_chi01_cR::synapse0x2c52db0() {
   return (neuron0x2c43640()*8.87958);
}

double NNfunction_ns_chi01_cR::synapse0x2c53130() {
   return (neuron0x2c3e9f0()*-0.161849);
}

double NNfunction_ns_chi01_cR::synapse0x2c53170() {
   return (neuron0x2c3eca0()*0.00269322);
}

double NNfunction_ns_chi01_cR::synapse0x2c531b0() {
   return (neuron0x2c3efe0()*0.035327);
}

double NNfunction_ns_chi01_cR::synapse0x2c531f0() {
   return (neuron0x2c3f320()*0.0533705);
}

double NNfunction_ns_chi01_cR::synapse0x2c53230() {
   return (neuron0x2c3f660()*0.0483188);
}

double NNfunction_ns_chi01_cR::synapse0x2c53270() {
   return (neuron0x2c3f9a0()*0.112431);
}

double NNfunction_ns_chi01_cR::synapse0x2c532b0() {
   return (neuron0x2c3fce0()*0.043294);
}

double NNfunction_ns_chi01_cR::synapse0x2c532f0() {
   return (neuron0x2c40020()*-0.0337699);
}

double NNfunction_ns_chi01_cR::synapse0x2c53330() {
   return (neuron0x2c40360()*0.204251);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b4f0() {
   return (neuron0x2c406a0()*-0.0371158);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b530() {
   return (neuron0x2c409e0()*0.0468464);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b570() {
   return (neuron0x2c40d20()*0.138896);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b5b0() {
   return (neuron0x2c41060()*-0.0139736);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b5f0() {
   return (neuron0x2c413a0()*0.0143289);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b630() {
   return (neuron0x2c416e0()*0.0146209);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b670() {
   return (neuron0x2c41a20()*-0.129466);
}

double NNfunction_ns_chi01_cR::synapse0x2c52f80() {
   return (neuron0x2c41d60()*-0.0884254);
}

double NNfunction_ns_chi01_cR::synapse0x2c52fc0() {
   return (neuron0x2c422c0()*-0.182822);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b7c0() {
   return (neuron0x2c42600()*0.719552);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b800() {
   return (neuron0x2c42940()*0.012937);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b840() {
   return (neuron0x2c42c80()*-0.276952);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b880() {
   return (neuron0x2c42fc0()*0.0416657);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b8c0() {
   return (neuron0x2c43300()*-0.0607764);
}

double NNfunction_ns_chi01_cR::synapse0x2c4b900() {
   return (neuron0x2c43640()*-0.148051);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bc80() {
   return (neuron0x2c3e9f0()*0.0180921);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bcc0() {
   return (neuron0x2c3eca0()*0.0490469);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bd00() {
   return (neuron0x2c3efe0()*-0.024862);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bd40() {
   return (neuron0x2c3f320()*0.484421);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bd80() {
   return (neuron0x2c3f660()*-0.0601514);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bdc0() {
   return (neuron0x2c3f9a0()*-0.0636951);
}

double NNfunction_ns_chi01_cR::synapse0x2c4be00() {
   return (neuron0x2c3fce0()*-0.0149145);
}

double NNfunction_ns_chi01_cR::synapse0x2c4be40() {
   return (neuron0x2c40020()*-0.0160484);
}

double NNfunction_ns_chi01_cR::synapse0x2c4be80() {
   return (neuron0x2c40360()*-0.00718514);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bec0() {
   return (neuron0x2c406a0()*0.0851093);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bf00() {
   return (neuron0x2c409e0()*0.127353);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bf40() {
   return (neuron0x2c40d20()*-0.320954);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bf80() {
   return (neuron0x2c41060()*0.166407);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bfc0() {
   return (neuron0x2c413a0()*0.0359213);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c000() {
   return (neuron0x2c416e0()*0.051868);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c040() {
   return (neuron0x2c41a20()*-0.416455);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bad0() {
   return (neuron0x2c41d60()*0.0129609);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bb10() {
   return (neuron0x2c422c0()*0.0899664);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c190() {
   return (neuron0x2c42600()*0.144105);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c1d0() {
   return (neuron0x2c42940()*0.000924767);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c210() {
   return (neuron0x2c42c80()*0.0134416);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c250() {
   return (neuron0x2c42fc0()*-0.049935);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c290() {
   return (neuron0x2c43300()*0.0114496);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c2d0() {
   return (neuron0x2c43640()*0.0213296);
}

double NNfunction_ns_chi01_cR::synapse0x2c4c4a0() {
   return (neuron0x2c3e9f0()*0.0585094);
}

double NNfunction_ns_chi01_cR::synapse0x2c55530() {
   return (neuron0x2c3eca0()*-3.03169);
}

double NNfunction_ns_chi01_cR::synapse0x2c55570() {
   return (neuron0x2c3efe0()*0.379538);
}

double NNfunction_ns_chi01_cR::synapse0x2c555b0() {
   return (neuron0x2c3f320()*0.0975809);
}

double NNfunction_ns_chi01_cR::synapse0x2c555f0() {
   return (neuron0x2c3f660()*-0.00388758);
}

double NNfunction_ns_chi01_cR::synapse0x2c55630() {
   return (neuron0x2c3f9a0()*-0.0101501);
}

double NNfunction_ns_chi01_cR::synapse0x2c55670() {
   return (neuron0x2c3fce0()*0.0228753);
}

double NNfunction_ns_chi01_cR::synapse0x2c556b0() {
   return (neuron0x2c40020()*-0.0461375);
}

double NNfunction_ns_chi01_cR::synapse0x2c556f0() {
   return (neuron0x2c40360()*-0.00522919);
}

double NNfunction_ns_chi01_cR::synapse0x2c55730() {
   return (neuron0x2c406a0()*0.0839465);
}

double NNfunction_ns_chi01_cR::synapse0x2c55770() {
   return (neuron0x2c409e0()*0.00792567);
}

double NNfunction_ns_chi01_cR::synapse0x2c557b0() {
   return (neuron0x2c40d20()*0.0622858);
}

double NNfunction_ns_chi01_cR::synapse0x2c557f0() {
   return (neuron0x2c41060()*0.0261316);
}

double NNfunction_ns_chi01_cR::synapse0x2c55830() {
   return (neuron0x2c413a0()*0.0446205);
}

double NNfunction_ns_chi01_cR::synapse0x2c55870() {
   return (neuron0x2c416e0()*0.00984324);
}

double NNfunction_ns_chi01_cR::synapse0x2c558b0() {
   return (neuron0x2c41a20()*-1.15159);
}

double NNfunction_ns_chi01_cR::synapse0x2c55380() {
   return (neuron0x2c41d60()*0.021964);
}

double NNfunction_ns_chi01_cR::synapse0x2c553c0() {
   return (neuron0x2c422c0()*0.0214938);
}

double NNfunction_ns_chi01_cR::synapse0x2c55a00() {
   return (neuron0x2c42600()*0.0144871);
}

double NNfunction_ns_chi01_cR::synapse0x2c55a40() {
   return (neuron0x2c42940()*0.192304);
}

double NNfunction_ns_chi01_cR::synapse0x2c55a80() {
   return (neuron0x2c42c80()*0.0103832);
}

double NNfunction_ns_chi01_cR::synapse0x2c55ac0() {
   return (neuron0x2c42fc0()*0.104298);
}

double NNfunction_ns_chi01_cR::synapse0x2c55b00() {
   return (neuron0x2c43300()*0.0561083);
}

double NNfunction_ns_chi01_cR::synapse0x2c55b40() {
   return (neuron0x2c43640()*3.03106);
}

double NNfunction_ns_chi01_cR::synapse0x2c55ec0() {
   return (neuron0x2c3e9f0()*0.206491);
}

double NNfunction_ns_chi01_cR::synapse0x2c55f00() {
   return (neuron0x2c3eca0()*-0.328496);
}

double NNfunction_ns_chi01_cR::synapse0x2c55f40() {
   return (neuron0x2c3efe0()*0.563981);
}

double NNfunction_ns_chi01_cR::synapse0x2c55f80() {
   return (neuron0x2c3f320()*-0.402162);
}

double NNfunction_ns_chi01_cR::synapse0x2c55fc0() {
   return (neuron0x2c3f660()*0.492838);
}

double NNfunction_ns_chi01_cR::synapse0x2c56000() {
   return (neuron0x2c3f9a0()*-0.130445);
}

double NNfunction_ns_chi01_cR::synapse0x2c56040() {
   return (neuron0x2c3fce0()*1.34508);
}

double NNfunction_ns_chi01_cR::synapse0x2c56080() {
   return (neuron0x2c40020()*-0.360604);
}

double NNfunction_ns_chi01_cR::synapse0x2c560c0() {
   return (neuron0x2c40360()*-0.0064292);
}

double NNfunction_ns_chi01_cR::synapse0x2c56100() {
   return (neuron0x2c406a0()*-0.0399215);
}

double NNfunction_ns_chi01_cR::synapse0x2c56140() {
   return (neuron0x2c409e0()*0.651299);
}

double NNfunction_ns_chi01_cR::synapse0x2c56180() {
   return (neuron0x2c40d20()*-0.0122619);
}

double NNfunction_ns_chi01_cR::synapse0x2c561c0() {
   return (neuron0x2c41060()*0.0302159);
}

double NNfunction_ns_chi01_cR::synapse0x2c56200() {
   return (neuron0x2c413a0()*0.0753292);
}

double NNfunction_ns_chi01_cR::synapse0x2c56240() {
   return (neuron0x2c416e0()*-0.55434);
}

double NNfunction_ns_chi01_cR::synapse0x2c56280() {
   return (neuron0x2c41a20()*-0.808667);
}

double NNfunction_ns_chi01_cR::synapse0x2c55d10() {
   return (neuron0x2c41d60()*-0.155103);
}

double NNfunction_ns_chi01_cR::synapse0x2c55d50() {
   return (neuron0x2c422c0()*-0.145679);
}

double NNfunction_ns_chi01_cR::synapse0x2c563d0() {
   return (neuron0x2c42600()*0.0168577);
}

double NNfunction_ns_chi01_cR::synapse0x2c56410() {
   return (neuron0x2c42940()*-0.0632637);
}

double NNfunction_ns_chi01_cR::synapse0x2c56450() {
   return (neuron0x2c42c80()*0.0220848);
}

double NNfunction_ns_chi01_cR::synapse0x2c56490() {
   return (neuron0x2c42fc0()*0.248758);
}

double NNfunction_ns_chi01_cR::synapse0x2c564d0() {
   return (neuron0x2c43300()*0.0139446);
}

double NNfunction_ns_chi01_cR::synapse0x2c56510() {
   return (neuron0x2c43640()*-0.33264);
}

double NNfunction_ns_chi01_cR::synapse0x2c56890() {
   return (neuron0x2c3e9f0()*-0.0297574);
}

double NNfunction_ns_chi01_cR::synapse0x2c568d0() {
   return (neuron0x2c3eca0()*-0.49531);
}

double NNfunction_ns_chi01_cR::synapse0x2c56910() {
   return (neuron0x2c3efe0()*-1.20561);
}

double NNfunction_ns_chi01_cR::synapse0x2c56950() {
   return (neuron0x2c3f320()*-0.36556);
}

double NNfunction_ns_chi01_cR::synapse0x2c56990() {
   return (neuron0x2c3f660()*-0.241105);
}

double NNfunction_ns_chi01_cR::synapse0x2c569d0() {
   return (neuron0x2c3f9a0()*-0.26098);
}

double NNfunction_ns_chi01_cR::synapse0x2c56a10() {
   return (neuron0x2c3fce0()*-0.0784328);
}

double NNfunction_ns_chi01_cR::synapse0x2c56a50() {
   return (neuron0x2c40020()*0.404585);
}

double NNfunction_ns_chi01_cR::synapse0x2c56a90() {
   return (neuron0x2c40360()*0.0439673);
}

double NNfunction_ns_chi01_cR::synapse0x2c56ad0() {
   return (neuron0x2c406a0()*-0.818325);
}

double NNfunction_ns_chi01_cR::synapse0x2c56b10() {
   return (neuron0x2c409e0()*0.0616041);
}

double NNfunction_ns_chi01_cR::synapse0x2c56b50() {
   return (neuron0x2c40d20()*-0.267721);
}

double NNfunction_ns_chi01_cR::synapse0x2c56b90() {
   return (neuron0x2c41060()*-0.192576);
}

double NNfunction_ns_chi01_cR::synapse0x2c56bd0() {
   return (neuron0x2c413a0()*0.00198368);
}

double NNfunction_ns_chi01_cR::synapse0x2c56c10() {
   return (neuron0x2c416e0()*0.143688);
}

double NNfunction_ns_chi01_cR::synapse0x2c56c50() {
   return (neuron0x2c41a20()*0.524196);
}

double NNfunction_ns_chi01_cR::synapse0x2c566e0() {
   return (neuron0x2c41d60()*0.428044);
}

double NNfunction_ns_chi01_cR::synapse0x2c56720() {
   return (neuron0x2c422c0()*-0.243);
}

double NNfunction_ns_chi01_cR::synapse0x2c56da0() {
   return (neuron0x2c42600()*0.0758534);
}

double NNfunction_ns_chi01_cR::synapse0x2c56de0() {
   return (neuron0x2c42940()*-0.15911);
}

double NNfunction_ns_chi01_cR::synapse0x2c56e20() {
   return (neuron0x2c42c80()*0.0504875);
}

double NNfunction_ns_chi01_cR::synapse0x2c56e60() {
   return (neuron0x2c42fc0()*0.0212404);
}

double NNfunction_ns_chi01_cR::synapse0x2c56ea0() {
   return (neuron0x2c43300()*-0.0455378);
}

double NNfunction_ns_chi01_cR::synapse0x2c56ee0() {
   return (neuron0x2c43640()*-1.91904);
}

double NNfunction_ns_chi01_cR::synapse0x2c57260() {
   return (neuron0x2c3e9f0()*-0.635374);
}

double NNfunction_ns_chi01_cR::synapse0x2c572a0() {
   return (neuron0x2c3eca0()*0.217823);
}

double NNfunction_ns_chi01_cR::synapse0x2c572e0() {
   return (neuron0x2c3efe0()*-0.136659);
}

double NNfunction_ns_chi01_cR::synapse0x2c57320() {
   return (neuron0x2c3f320()*0.995777);
}

double NNfunction_ns_chi01_cR::synapse0x2c57360() {
   return (neuron0x2c3f660()*-0.0257224);
}

double NNfunction_ns_chi01_cR::synapse0x2c573a0() {
   return (neuron0x2c3f9a0()*0.112705);
}

double NNfunction_ns_chi01_cR::synapse0x2c573e0() {
   return (neuron0x2c3fce0()*0.383729);
}

double NNfunction_ns_chi01_cR::synapse0x2c57420() {
   return (neuron0x2c40020()*-0.233706);
}

double NNfunction_ns_chi01_cR::synapse0x2c57460() {
   return (neuron0x2c40360()*-0.0174925);
}

double NNfunction_ns_chi01_cR::synapse0x2c574a0() {
   return (neuron0x2c406a0()*0.328909);
}

double NNfunction_ns_chi01_cR::synapse0x2c574e0() {
   return (neuron0x2c409e0()*0.424317);
}

double NNfunction_ns_chi01_cR::synapse0x2c57520() {
   return (neuron0x2c40d20()*-0.0804388);
}

double NNfunction_ns_chi01_cR::synapse0x2c57560() {
   return (neuron0x2c41060()*-0.447613);
}

double NNfunction_ns_chi01_cR::synapse0x2c575a0() {
   return (neuron0x2c413a0()*0.420338);
}

double NNfunction_ns_chi01_cR::synapse0x2c575e0() {
   return (neuron0x2c416e0()*-1.09048);
}

double NNfunction_ns_chi01_cR::synapse0x2c57620() {
   return (neuron0x2c41a20()*1.23179);
}

double NNfunction_ns_chi01_cR::synapse0x2c570b0() {
   return (neuron0x2c41d60()*-1.19846);
}

double NNfunction_ns_chi01_cR::synapse0x2c570f0() {
   return (neuron0x2c422c0()*0.0265568);
}

double NNfunction_ns_chi01_cR::synapse0x2c57770() {
   return (neuron0x2c42600()*-0.480151);
}

double NNfunction_ns_chi01_cR::synapse0x2c577b0() {
   return (neuron0x2c42940()*0.0233993);
}

double NNfunction_ns_chi01_cR::synapse0x2c577f0() {
   return (neuron0x2c42c80()*0.23426);
}

double NNfunction_ns_chi01_cR::synapse0x2c57830() {
   return (neuron0x2c42fc0()*0.0490626);
}

double NNfunction_ns_chi01_cR::synapse0x2c57870() {
   return (neuron0x2c43300()*-0.143077);
}

double NNfunction_ns_chi01_cR::synapse0x2c578b0() {
   return (neuron0x2c43640()*-0.860037);
}

double NNfunction_ns_chi01_cR::synapse0x2c57c30() {
   return (neuron0x2c3e9f0()*-0.534905);
}

double NNfunction_ns_chi01_cR::synapse0x2c57c70() {
   return (neuron0x2c3eca0()*-2.01733);
}

double NNfunction_ns_chi01_cR::synapse0x2c57cb0() {
   return (neuron0x2c3efe0()*0.235736);
}

double NNfunction_ns_chi01_cR::synapse0x2c57cf0() {
   return (neuron0x2c3f320()*-0.91937);
}

double NNfunction_ns_chi01_cR::synapse0x2c57d30() {
   return (neuron0x2c3f660()*1.04354);
}

double NNfunction_ns_chi01_cR::synapse0x2c57d70() {
   return (neuron0x2c3f9a0()*0.474403);
}

double NNfunction_ns_chi01_cR::synapse0x2c57db0() {
   return (neuron0x2c3fce0()*-0.161299);
}

double NNfunction_ns_chi01_cR::synapse0x2c57df0() {
   return (neuron0x2c40020()*0.366586);
}

double NNfunction_ns_chi01_cR::synapse0x2c57e30() {
   return (neuron0x2c40360()*-0.855445);
}

double NNfunction_ns_chi01_cR::synapse0x2c57e70() {
   return (neuron0x2c406a0()*-1.16905);
}

double NNfunction_ns_chi01_cR::synapse0x2c57eb0() {
   return (neuron0x2c409e0()*0.210831);
}

double NNfunction_ns_chi01_cR::synapse0x2c57ef0() {
   return (neuron0x2c40d20()*-0.461196);
}

double NNfunction_ns_chi01_cR::synapse0x2c57f30() {
   return (neuron0x2c41060()*-0.489857);
}

double NNfunction_ns_chi01_cR::synapse0x2c57f70() {
   return (neuron0x2c413a0()*-0.279348);
}

double NNfunction_ns_chi01_cR::synapse0x2c57fb0() {
   return (neuron0x2c416e0()*-0.11393);
}

double NNfunction_ns_chi01_cR::synapse0x2c57ff0() {
   return (neuron0x2c41a20()*0.215084);
}

double NNfunction_ns_chi01_cR::synapse0x2c57a80() {
   return (neuron0x2c41d60()*1.08562);
}

double NNfunction_ns_chi01_cR::synapse0x2c57ac0() {
   return (neuron0x2c422c0()*0.0441586);
}

double NNfunction_ns_chi01_cR::synapse0x2c58140() {
   return (neuron0x2c42600()*-0.0866863);
}

double NNfunction_ns_chi01_cR::synapse0x2c58180() {
   return (neuron0x2c42940()*0.849015);
}

double NNfunction_ns_chi01_cR::synapse0x2c581c0() {
   return (neuron0x2c42c80()*-0.16295);
}

double NNfunction_ns_chi01_cR::synapse0x2c58200() {
   return (neuron0x2c42fc0()*0.544373);
}

double NNfunction_ns_chi01_cR::synapse0x2c58240() {
   return (neuron0x2c43300()*-0.320672);
}

double NNfunction_ns_chi01_cR::synapse0x2c58280() {
   return (neuron0x2c43640()*-0.150138);
}

double NNfunction_ns_chi01_cR::synapse0x2c58600() {
   return (neuron0x2c3e9f0()*-0.0182199);
}

double NNfunction_ns_chi01_cR::synapse0x2c58640() {
   return (neuron0x2c3eca0()*0.0114572);
}

double NNfunction_ns_chi01_cR::synapse0x2c58680() {
   return (neuron0x2c3efe0()*-0.0382007);
}

double NNfunction_ns_chi01_cR::synapse0x2c586c0() {
   return (neuron0x2c3f320()*-0.0229063);
}

double NNfunction_ns_chi01_cR::synapse0x2c58700() {
   return (neuron0x2c3f660()*-0.0554801);
}

double NNfunction_ns_chi01_cR::synapse0x2c58740() {
   return (neuron0x2c3f9a0()*-0.0918757);
}

double NNfunction_ns_chi01_cR::synapse0x2c58780() {
   return (neuron0x2c3fce0()*0.0249985);
}

double NNfunction_ns_chi01_cR::synapse0x2c587c0() {
   return (neuron0x2c40020()*0.0259376);
}

double NNfunction_ns_chi01_cR::synapse0x2c58800() {
   return (neuron0x2c40360()*-0.688812);
}

double NNfunction_ns_chi01_cR::synapse0x2c58840() {
   return (neuron0x2c406a0()*-0.0652183);
}

double NNfunction_ns_chi01_cR::synapse0x2c58880() {
   return (neuron0x2c409e0()*0.00533195);
}

double NNfunction_ns_chi01_cR::synapse0x2c588c0() {
   return (neuron0x2c40d20()*0.224215);
}

double NNfunction_ns_chi01_cR::synapse0x2c58900() {
   return (neuron0x2c41060()*-0.0192793);
}

double NNfunction_ns_chi01_cR::synapse0x2c58940() {
   return (neuron0x2c413a0()*-0.188485);
}

double NNfunction_ns_chi01_cR::synapse0x2c58980() {
   return (neuron0x2c416e0()*-0.0717365);
}

double NNfunction_ns_chi01_cR::synapse0x2c589c0() {
   return (neuron0x2c41a20()*0.600501);
}

double NNfunction_ns_chi01_cR::synapse0x2c58450() {
   return (neuron0x2c41d60()*-0.0697664);
}

double NNfunction_ns_chi01_cR::synapse0x2c58490() {
   return (neuron0x2c422c0()*0.0620756);
}

double NNfunction_ns_chi01_cR::synapse0x2c58b10() {
   return (neuron0x2c42600()*0.161587);
}

double NNfunction_ns_chi01_cR::synapse0x2c58b50() {
   return (neuron0x2c42940()*0.0839362);
}

double NNfunction_ns_chi01_cR::synapse0x2c58b90() {
   return (neuron0x2c42c80()*0.0145226);
}

double NNfunction_ns_chi01_cR::synapse0x2c58bd0() {
   return (neuron0x2c42fc0()*0.0847974);
}

double NNfunction_ns_chi01_cR::synapse0x2c58c10() {
   return (neuron0x2c43300()*-0.0129876);
}

double NNfunction_ns_chi01_cR::synapse0x2c58c50() {
   return (neuron0x2c43640()*0.215738);
}

double NNfunction_ns_chi01_cR::synapse0x2c58fd0() {
   return (neuron0x2c3e9f0()*0.13732);
}

double NNfunction_ns_chi01_cR::synapse0x2c59010() {
   return (neuron0x2c3eca0()*6.42989);
}

double NNfunction_ns_chi01_cR::synapse0x2c59050() {
   return (neuron0x2c3efe0()*0.0478562);
}

double NNfunction_ns_chi01_cR::synapse0x2c59090() {
   return (neuron0x2c3f320()*0.0469403);
}

double NNfunction_ns_chi01_cR::synapse0x2c590d0() {
   return (neuron0x2c3f660()*0.0690399);
}

double NNfunction_ns_chi01_cR::synapse0x2c59110() {
   return (neuron0x2c3f9a0()*-0.0538252);
}

double NNfunction_ns_chi01_cR::synapse0x2c59150() {
   return (neuron0x2c3fce0()*0.000442547);
}

double NNfunction_ns_chi01_cR::synapse0x2c59190() {
   return (neuron0x2c40020()*0.0138849);
}

double NNfunction_ns_chi01_cR::synapse0x2c591d0() {
   return (neuron0x2c40360()*0.0137652);
}

double NNfunction_ns_chi01_cR::synapse0x2c59210() {
   return (neuron0x2c406a0()*-0.0335713);
}

double NNfunction_ns_chi01_cR::synapse0x2c59250() {
   return (neuron0x2c409e0()*0.0035913);
}

double NNfunction_ns_chi01_cR::synapse0x2c59290() {
   return (neuron0x2c40d20()*-0.052256);
}

double NNfunction_ns_chi01_cR::synapse0x2c592d0() {
   return (neuron0x2c41060()*0.0261293);
}

double NNfunction_ns_chi01_cR::synapse0x2c59310() {
   return (neuron0x2c413a0()*-0.0139829);
}

double NNfunction_ns_chi01_cR::synapse0x2c59350() {
   return (neuron0x2c416e0()*-0.0256807);
}

double NNfunction_ns_chi01_cR::synapse0x2c59390() {
   return (neuron0x2c41a20()*-0.157127);
}

double NNfunction_ns_chi01_cR::synapse0x2c58e20() {
   return (neuron0x2c41d60()*0.0175791);
}

double NNfunction_ns_chi01_cR::synapse0x2c58e60() {
   return (neuron0x2c422c0()*0.0208016);
}

double NNfunction_ns_chi01_cR::synapse0x2c594e0() {
   return (neuron0x2c42600()*-0.00342525);
}

double NNfunction_ns_chi01_cR::synapse0x2c59520() {
   return (neuron0x2c42940()*-0.0262473);
}

double NNfunction_ns_chi01_cR::synapse0x2c59560() {
   return (neuron0x2c42c80()*-0.0514641);
}

double NNfunction_ns_chi01_cR::synapse0x2c595a0() {
   return (neuron0x2c42fc0()*-0.00441913);
}

double NNfunction_ns_chi01_cR::synapse0x2c595e0() {
   return (neuron0x2c43300()*0.0303654);
}

double NNfunction_ns_chi01_cR::synapse0x2c59620() {
   return (neuron0x2c43640()*-0.13593);
}

double NNfunction_ns_chi01_cR::synapse0x2c599a0() {
   return (neuron0x2c3e9f0()*0.175707);
}

double NNfunction_ns_chi01_cR::synapse0x2c599e0() {
   return (neuron0x2c3eca0()*-0.0905802);
}

double NNfunction_ns_chi01_cR::synapse0x2c59a20() {
   return (neuron0x2c3efe0()*0.0350449);
}

double NNfunction_ns_chi01_cR::synapse0x2c59a60() {
   return (neuron0x2c3f320()*0.0204171);
}

double NNfunction_ns_chi01_cR::synapse0x2c59aa0() {
   return (neuron0x2c3f660()*0.0348975);
}

double NNfunction_ns_chi01_cR::synapse0x2c59ae0() {
   return (neuron0x2c3f9a0()*-0.0456976);
}

double NNfunction_ns_chi01_cR::synapse0x2c59b20() {
   return (neuron0x2c3fce0()*-0.0470844);
}

double NNfunction_ns_chi01_cR::synapse0x2c59b60() {
   return (neuron0x2c40020()*-0.0237983);
}

double NNfunction_ns_chi01_cR::synapse0x2c59ba0() {
   return (neuron0x2c40360()*0.0279597);
}

double NNfunction_ns_chi01_cR::synapse0x2c59be0() {
   return (neuron0x2c406a0()*0.00526438);
}

double NNfunction_ns_chi01_cR::synapse0x2c59c20() {
   return (neuron0x2c409e0()*0.0484992);
}

double NNfunction_ns_chi01_cR::synapse0x2c59c60() {
   return (neuron0x2c40d20()*-0.0332962);
}

double NNfunction_ns_chi01_cR::synapse0x2c59ca0() {
   return (neuron0x2c41060()*0.0188642);
}

double NNfunction_ns_chi01_cR::synapse0x2c59ce0() {
   return (neuron0x2c413a0()*0.014366);
}

double NNfunction_ns_chi01_cR::synapse0x2c59d20() {
   return (neuron0x2c416e0()*-0.0150782);
}

double NNfunction_ns_chi01_cR::synapse0x2c59d60() {
   return (neuron0x2c41a20()*-0.330928);
}

double NNfunction_ns_chi01_cR::synapse0x2c597f0() {
   return (neuron0x2c41d60()*-0.0326738);
}

double NNfunction_ns_chi01_cR::synapse0x2c59830() {
   return (neuron0x2c422c0()*0.000993434);
}

double NNfunction_ns_chi01_cR::synapse0x2c59eb0() {
   return (neuron0x2c42600()*0.00902089);
}

double NNfunction_ns_chi01_cR::synapse0x2c59ef0() {
   return (neuron0x2c42940()*0.0248818);
}

double NNfunction_ns_chi01_cR::synapse0x2c59f30() {
   return (neuron0x2c42c80()*0.00933935);
}

double NNfunction_ns_chi01_cR::synapse0x2c59f70() {
   return (neuron0x2c42fc0()*0.00168438);
}

double NNfunction_ns_chi01_cR::synapse0x2c59fb0() {
   return (neuron0x2c43300()*0.0150332);
}

double NNfunction_ns_chi01_cR::synapse0x2c59ff0() {
   return (neuron0x2c43640()*8.40211);
}

double NNfunction_ns_chi01_cR::synapse0x2c5a370() {
   return (neuron0x2c3e9f0()*0.105312);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e940() {
   return (neuron0x2c3eca0()*-0.173166);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e980() {
   return (neuron0x2c3efe0()*-0.0636596);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e9c0() {
   return (neuron0x2c3f320()*-0.200551);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ec10() {
   return (neuron0x2c3f660()*-0.0815391);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ec50() {
   return (neuron0x2c3f9a0()*0.00158696);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ec90() {
   return (neuron0x2c3fce0()*0.0258925);
}

double NNfunction_ns_chi01_cR::synapse0x2c4eee0() {
   return (neuron0x2c40020()*0.0362645);
}

double NNfunction_ns_chi01_cR::synapse0x2c4ef20() {
   return (neuron0x2c40360()*-0.0529544);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f170() {
   return (neuron0x2c406a0()*-0.0314456);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f1b0() {
   return (neuron0x2c409e0()*-0.0228672);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f1f0() {
   return (neuron0x2c40d20()*0.236698);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f440() {
   return (neuron0x2c41060()*0.576461);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f480() {
   return (neuron0x2c413a0()*-0.214348);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f6d0() {
   return (neuron0x2c416e0()*-0.0275974);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f710() {
   return (neuron0x2c41a20()*-0.827515);
}

double NNfunction_ns_chi01_cR::synapse0x2c5a1c0() {
   return (neuron0x2c41d60()*-0.179221);
}

double NNfunction_ns_chi01_cR::synapse0x2c5a200() {
   return (neuron0x2c422c0()*0.0678854);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f860() {
   return (neuron0x2c42600()*-0.0621717);
}

double NNfunction_ns_chi01_cR::synapse0x2c4fd70() {
   return (neuron0x2c42940()*0.0675689);
}

double NNfunction_ns_chi01_cR::synapse0x2c4fdb0() {
   return (neuron0x2c42c80()*-0.0619391);
}

double NNfunction_ns_chi01_cR::synapse0x2c4fdf0() {
   return (neuron0x2c42fc0()*-0.0137011);
}

double NNfunction_ns_chi01_cR::synapse0x2c50040() {
   return (neuron0x2c43300()*0.0453566);
}

double NNfunction_ns_chi01_cR::synapse0x2c50080() {
   return (neuron0x2c43640()*-0.0386442);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f930() {
   return (neuron0x2c3e9f0()*0.0176798);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f970() {
   return (neuron0x2c3eca0()*10.883);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f9b0() {
   return (neuron0x2c3efe0()*-16.0741);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f9f0() {
   return (neuron0x2c3f320()*-0.00563011);
}

double NNfunction_ns_chi01_cR::synapse0x2c50370() {
   return (neuron0x2c3f660()*0.0296766);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c6c0() {
   return (neuron0x2c3f9a0()*-0.00963055);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c700() {
   return (neuron0x2c3fce0()*-0.00223656);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c740() {
   return (neuron0x2c40020()*-0.016201);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c780() {
   return (neuron0x2c40360()*-0.0212759);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c7c0() {
   return (neuron0x2c406a0()*-0.00421255);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c800() {
   return (neuron0x2c409e0()*0.0354825);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c840() {
   return (neuron0x2c40d20()*0.0146467);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c880() {
   return (neuron0x2c41060()*-0.0333857);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c8c0() {
   return (neuron0x2c413a0()*-0.0609961);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c900() {
   return (neuron0x2c416e0()*0.0209535);
}

double NNfunction_ns_chi01_cR::synapse0x2c5c940() {
   return (neuron0x2c41a20()*-0.294409);
}

double NNfunction_ns_chi01_cR::synapse0x2c50250() {
   return (neuron0x2c41d60()*-0.0420814);
}

double NNfunction_ns_chi01_cR::synapse0x2c50290() {
   return (neuron0x2c422c0()*0.0421464);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ca90() {
   return (neuron0x2c42600()*0.0460945);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cad0() {
   return (neuron0x2c42940()*0.0662041);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cb10() {
   return (neuron0x2c42c80()*0.0565213);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cb50() {
   return (neuron0x2c42fc0()*-0.0271608);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cb90() {
   return (neuron0x2c43300()*-0.00292737);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cbd0() {
   return (neuron0x2c43640()*0.0697023);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cf50() {
   return (neuron0x2c3e9f0()*0.142992);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cf90() {
   return (neuron0x2c3eca0()*-1.07366);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cfd0() {
   return (neuron0x2c3efe0()*-3.177);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d010() {
   return (neuron0x2c3f320()*-0.217572);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d050() {
   return (neuron0x2c3f660()*-0.0646093);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d090() {
   return (neuron0x2c3f9a0()*-0.0809361);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d0d0() {
   return (neuron0x2c3fce0()*0.0104119);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d110() {
   return (neuron0x2c40020()*0.0876946);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d150() {
   return (neuron0x2c40360()*-0.142463);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d190() {
   return (neuron0x2c406a0()*0.00686906);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d1d0() {
   return (neuron0x2c409e0()*0.0592838);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d210() {
   return (neuron0x2c40d20()*0.00542733);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d250() {
   return (neuron0x2c41060()*-0.0275031);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d290() {
   return (neuron0x2c413a0()*-0.119328);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d2d0() {
   return (neuron0x2c416e0()*-0.0644907);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d310() {
   return (neuron0x2c41a20()*-0.225533);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cda0() {
   return (neuron0x2c41d60()*0.149518);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cde0() {
   return (neuron0x2c422c0()*-0.0392608);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d460() {
   return (neuron0x2c42600()*0.114464);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d4a0() {
   return (neuron0x2c42940()*-0.12376);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d4e0() {
   return (neuron0x2c42c80()*-0.0598877);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d520() {
   return (neuron0x2c42fc0()*0.0887488);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d560() {
   return (neuron0x2c43300()*-0.060102);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d5a0() {
   return (neuron0x2c43640()*0.198384);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d920() {
   return (neuron0x2c3e9f0()*-0.0247583);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d960() {
   return (neuron0x2c3eca0()*-0.0852695);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d9a0() {
   return (neuron0x2c3efe0()*0.0242442);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d9e0() {
   return (neuron0x2c3f320()*0.127504);
}

double NNfunction_ns_chi01_cR::synapse0x2c5da20() {
   return (neuron0x2c3f660()*-0.248056);
}

double NNfunction_ns_chi01_cR::synapse0x2c5da60() {
   return (neuron0x2c3f9a0()*0.166608);
}

double NNfunction_ns_chi01_cR::synapse0x2c5daa0() {
   return (neuron0x2c3fce0()*-0.0117237);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dae0() {
   return (neuron0x2c40020()*0.284399);
}

double NNfunction_ns_chi01_cR::synapse0x2c5db20() {
   return (neuron0x2c40360()*0.169029);
}

double NNfunction_ns_chi01_cR::synapse0x2c5db60() {
   return (neuron0x2c406a0()*0.326902);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dba0() {
   return (neuron0x2c409e0()*-1.44411);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dbe0() {
   return (neuron0x2c40d20()*0.0707301);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dc20() {
   return (neuron0x2c41060()*0.149196);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dc60() {
   return (neuron0x2c413a0()*0.0134603);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dca0() {
   return (neuron0x2c416e0()*0.345434);
}

double NNfunction_ns_chi01_cR::synapse0x2c5dce0() {
   return (neuron0x2c41a20()*0.671183);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d770() {
   return (neuron0x2c41d60()*0.0385022);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d7b0() {
   return (neuron0x2c422c0()*0.0724821);
}

double NNfunction_ns_chi01_cR::synapse0x2c5de30() {
   return (neuron0x2c42600()*0.18215);
}

double NNfunction_ns_chi01_cR::synapse0x2c5de70() {
   return (neuron0x2c42940()*0.144126);
}

double NNfunction_ns_chi01_cR::synapse0x2c5deb0() {
   return (neuron0x2c42c80()*-0.135978);
}

double NNfunction_ns_chi01_cR::synapse0x2c5def0() {
   return (neuron0x2c42fc0()*0.0201853);
}

double NNfunction_ns_chi01_cR::synapse0x2c5df30() {
   return (neuron0x2c43300()*0.136939);
}

double NNfunction_ns_chi01_cR::synapse0x2c5df70() {
   return (neuron0x2c43640()*0.159105);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e2f0() {
   return (neuron0x2c3e9f0()*-0.0919165);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e330() {
   return (neuron0x2c3eca0()*-5.74736);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e370() {
   return (neuron0x2c3efe0()*-0.00329004);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e3b0() {
   return (neuron0x2c3f320()*-0.117201);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e3f0() {
   return (neuron0x2c3f660()*-0.0639833);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e430() {
   return (neuron0x2c3f9a0()*0.0877522);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e470() {
   return (neuron0x2c3fce0()*0.0489895);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e4b0() {
   return (neuron0x2c40020()*0.0367618);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e4f0() {
   return (neuron0x2c40360()*-0.0126517);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e530() {
   return (neuron0x2c406a0()*0.0211883);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e570() {
   return (neuron0x2c409e0()*-0.0390694);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e5b0() {
   return (neuron0x2c40d20()*0.0453478);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e5f0() {
   return (neuron0x2c41060()*-0.00127946);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e630() {
   return (neuron0x2c413a0()*0.0204616);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e670() {
   return (neuron0x2c416e0()*0.0588657);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e6b0() {
   return (neuron0x2c41a20()*0.513268);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e140() {
   return (neuron0x2c41d60()*-0.0205901);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e180() {
   return (neuron0x2c422c0()*-0.072354);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e800() {
   return (neuron0x2c42600()*0.0204887);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e840() {
   return (neuron0x2c42940()*-0.0508101);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e880() {
   return (neuron0x2c42c80()*0.0723503);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e8c0() {
   return (neuron0x2c42fc0()*0.0102755);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e900() {
   return (neuron0x2c43300()*-0.0382043);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e940() {
   return (neuron0x2c43640()*0.308772);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ecc0() {
   return (neuron0x2c3e9f0()*-0.032244);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ed00() {
   return (neuron0x2c3eca0()*-0.0813172);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ed40() {
   return (neuron0x2c3efe0()*0.0063027);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ed80() {
   return (neuron0x2c3f320()*0.991965);
}

double NNfunction_ns_chi01_cR::synapse0x2c5edc0() {
   return (neuron0x2c3f660()*-0.0352228);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ee00() {
   return (neuron0x2c3f9a0()*0.0795419);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ee40() {
   return (neuron0x2c3fce0()*0.0488564);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ee80() {
   return (neuron0x2c40020()*0.043448);
}

double NNfunction_ns_chi01_cR::synapse0x2c5eec0() {
   return (neuron0x2c40360()*-0.154342);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ef00() {
   return (neuron0x2c406a0()*-0.144111);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ef40() {
   return (neuron0x2c409e0()*-0.0894541);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ef80() {
   return (neuron0x2c40d20()*0.048355);
}

double NNfunction_ns_chi01_cR::synapse0x2c5efc0() {
   return (neuron0x2c41060()*-0.0889099);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f000() {
   return (neuron0x2c413a0()*0.022083);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f040() {
   return (neuron0x2c416e0()*-0.0528292);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f080() {
   return (neuron0x2c41a20()*1.65682);
}

double NNfunction_ns_chi01_cR::synapse0x2c5eb10() {
   return (neuron0x2c41d60()*0.00740324);
}

double NNfunction_ns_chi01_cR::synapse0x2c5eb50() {
   return (neuron0x2c422c0()*-0.0902397);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f1d0() {
   return (neuron0x2c42600()*-0.0885112);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f210() {
   return (neuron0x2c42940()*-0.0292891);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f250() {
   return (neuron0x2c42c80()*0.0248777);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f290() {
   return (neuron0x2c42fc0()*0.057896);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f2d0() {
   return (neuron0x2c43300()*-0.0118146);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f310() {
   return (neuron0x2c43640()*-0.068109);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f690() {
   return (neuron0x2c3e9f0()*-0.0379736);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f6d0() {
   return (neuron0x2c3eca0()*-9.17514);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f710() {
   return (neuron0x2c3efe0()*-12.379);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f750() {
   return (neuron0x2c3f320()*0.00178817);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f790() {
   return (neuron0x2c3f660()*-0.0071574);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f7d0() {
   return (neuron0x2c3f9a0()*-0.0190916);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f810() {
   return (neuron0x2c3fce0()*-0.0255842);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f850() {
   return (neuron0x2c40020()*-0.0411952);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f890() {
   return (neuron0x2c40360()*0.0768862);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f8d0() {
   return (neuron0x2c406a0()*-0.0151293);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f910() {
   return (neuron0x2c409e0()*0.0276876);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f950() {
   return (neuron0x2c40d20()*-0.0470968);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f990() {
   return (neuron0x2c41060()*-0.0471224);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f9d0() {
   return (neuron0x2c413a0()*-0.0189901);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fa10() {
   return (neuron0x2c416e0()*-0.00365151);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fa50() {
   return (neuron0x2c41a20()*-0.559141);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f4e0() {
   return (neuron0x2c41d60()*-0.036776);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f520() {
   return (neuron0x2c422c0()*0.0825324);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fba0() {
   return (neuron0x2c42600()*0.0633999);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fbe0() {
   return (neuron0x2c42940()*0.0215097);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fc20() {
   return (neuron0x2c42c80()*0.0209681);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fc60() {
   return (neuron0x2c42fc0()*0.0504774);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fca0() {
   return (neuron0x2c43300()*-0.0133751);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fce0() {
   return (neuron0x2c43640()*0.122015);
}

double NNfunction_ns_chi01_cR::synapse0x2c60060() {
   return (neuron0x2c3e9f0()*0.560166);
}

double NNfunction_ns_chi01_cR::synapse0x2c600a0() {
   return (neuron0x2c3eca0()*-3.07314);
}

double NNfunction_ns_chi01_cR::synapse0x2c600e0() {
   return (neuron0x2c3efe0()*0.205829);
}

double NNfunction_ns_chi01_cR::synapse0x2c60120() {
   return (neuron0x2c3f320()*0.615743);
}

double NNfunction_ns_chi01_cR::synapse0x2c60160() {
   return (neuron0x2c3f660()*0.485917);
}

double NNfunction_ns_chi01_cR::synapse0x2c601a0() {
   return (neuron0x2c3f9a0()*-0.0882415);
}

double NNfunction_ns_chi01_cR::synapse0x2c601e0() {
   return (neuron0x2c3fce0()*0.628173);
}

double NNfunction_ns_chi01_cR::synapse0x2c60220() {
   return (neuron0x2c40020()*0.333162);
}

double NNfunction_ns_chi01_cR::synapse0x2c60260() {
   return (neuron0x2c40360()*-0.123868);
}

double NNfunction_ns_chi01_cR::synapse0x2c602a0() {
   return (neuron0x2c406a0()*0.311619);
}

double NNfunction_ns_chi01_cR::synapse0x2c602e0() {
   return (neuron0x2c409e0()*-1.0392);
}

double NNfunction_ns_chi01_cR::synapse0x2c60320() {
   return (neuron0x2c40d20()*0.258183);
}

double NNfunction_ns_chi01_cR::synapse0x2c60360() {
   return (neuron0x2c41060()*-0.308224);
}

double NNfunction_ns_chi01_cR::synapse0x2c603a0() {
   return (neuron0x2c413a0()*0.325603);
}

double NNfunction_ns_chi01_cR::synapse0x2c603e0() {
   return (neuron0x2c416e0()*0.309312);
}

double NNfunction_ns_chi01_cR::synapse0x2c60420() {
   return (neuron0x2c41a20()*-0.174908);
}

double NNfunction_ns_chi01_cR::synapse0x2c5feb0() {
   return (neuron0x2c41d60()*0.443854);
}

double NNfunction_ns_chi01_cR::synapse0x2c5fef0() {
   return (neuron0x2c422c0()*1.49623);
}

double NNfunction_ns_chi01_cR::synapse0x2c60570() {
   return (neuron0x2c42600()*-0.838719);
}

double NNfunction_ns_chi01_cR::synapse0x2c605b0() {
   return (neuron0x2c42940()*-0.373509);
}

double NNfunction_ns_chi01_cR::synapse0x2c605f0() {
   return (neuron0x2c42c80()*0.102297);
}

double NNfunction_ns_chi01_cR::synapse0x2c60630() {
   return (neuron0x2c42fc0()*0.582257);
}

double NNfunction_ns_chi01_cR::synapse0x2c60670() {
   return (neuron0x2c43300()*-0.149371);
}

double NNfunction_ns_chi01_cR::synapse0x2c606b0() {
   return (neuron0x2c43640()*-0.954168);
}

double NNfunction_ns_chi01_cR::synapse0x2c60a30() {
   return (neuron0x2c3e9f0()*-0.27152);
}

double NNfunction_ns_chi01_cR::synapse0x2c60a70() {
   return (neuron0x2c3eca0()*0.114726);
}

double NNfunction_ns_chi01_cR::synapse0x2c60ab0() {
   return (neuron0x2c3efe0()*0.0280415);
}

double NNfunction_ns_chi01_cR::synapse0x2c60af0() {
   return (neuron0x2c3f320()*-0.0120489);
}

double NNfunction_ns_chi01_cR::synapse0x2c60b30() {
   return (neuron0x2c3f660()*-0.561462);
}

double NNfunction_ns_chi01_cR::synapse0x2c60b70() {
   return (neuron0x2c3f9a0()*0.34815);
}

double NNfunction_ns_chi01_cR::synapse0x2c60bb0() {
   return (neuron0x2c3fce0()*0.224005);
}

double NNfunction_ns_chi01_cR::synapse0x2c60bf0() {
   return (neuron0x2c40020()*0.334555);
}

double NNfunction_ns_chi01_cR::synapse0x2c60c30() {
   return (neuron0x2c40360()*0.0998645);
}

double NNfunction_ns_chi01_cR::synapse0x2c60c70() {
   return (neuron0x2c406a0()*-0.0162052);
}

double NNfunction_ns_chi01_cR::synapse0x2c60cb0() {
   return (neuron0x2c409e0()*-0.174917);
}

double NNfunction_ns_chi01_cR::synapse0x2c60cf0() {
   return (neuron0x2c40d20()*3.41938e-05);
}

double NNfunction_ns_chi01_cR::synapse0x2c60d30() {
   return (neuron0x2c41060()*0.0930689);
}

double NNfunction_ns_chi01_cR::synapse0x2c60d70() {
   return (neuron0x2c413a0()*0.0723578);
}

double NNfunction_ns_chi01_cR::synapse0x2c60db0() {
   return (neuron0x2c416e0()*-0.0918394);
}

double NNfunction_ns_chi01_cR::synapse0x2c60df0() {
   return (neuron0x2c41a20()*-2.89694);
}

double NNfunction_ns_chi01_cR::synapse0x2c60880() {
   return (neuron0x2c41d60()*-0.101087);
}

double NNfunction_ns_chi01_cR::synapse0x2c608c0() {
   return (neuron0x2c422c0()*-0.0786473);
}

double NNfunction_ns_chi01_cR::synapse0x2c60f40() {
   return (neuron0x2c42600()*0.0628427);
}

double NNfunction_ns_chi01_cR::synapse0x2c60f80() {
   return (neuron0x2c42940()*0.139526);
}

double NNfunction_ns_chi01_cR::synapse0x2c60fc0() {
   return (neuron0x2c42c80()*-0.0751829);
}

double NNfunction_ns_chi01_cR::synapse0x2c61000() {
   return (neuron0x2c42fc0()*0.0139295);
}

double NNfunction_ns_chi01_cR::synapse0x2c61040() {
   return (neuron0x2c43300()*0.101537);
}

double NNfunction_ns_chi01_cR::synapse0x2c61080() {
   return (neuron0x2c43640()*-1.30198);
}

double NNfunction_ns_chi01_cR::synapse0x2c49b30() {
   return (neuron0x2c3e9f0()*0.166532);
}

double NNfunction_ns_chi01_cR::synapse0x2c49b70() {
   return (neuron0x2c3eca0()*-0.0854717);
}

double NNfunction_ns_chi01_cR::synapse0x2c49bb0() {
   return (neuron0x2c3efe0()*0.602628);
}

double NNfunction_ns_chi01_cR::synapse0x2c49bf0() {
   return (neuron0x2c3f320()*0.0982237);
}

double NNfunction_ns_chi01_cR::synapse0x2c49c30() {
   return (neuron0x2c3f660()*0.31082);
}

double NNfunction_ns_chi01_cR::synapse0x2c49c70() {
   return (neuron0x2c3f9a0()*0.11132);
}

double NNfunction_ns_chi01_cR::synapse0x2c49cb0() {
   return (neuron0x2c3fce0()*-0.0201359);
}

double NNfunction_ns_chi01_cR::synapse0x2c49cf0() {
   return (neuron0x2c40020()*0.209009);
}

double NNfunction_ns_chi01_cR::synapse0x2c61810() {
   return (neuron0x2c40360()*0.00515871);
}

double NNfunction_ns_chi01_cR::synapse0x2c61850() {
   return (neuron0x2c406a0()*0.0618412);
}

double NNfunction_ns_chi01_cR::synapse0x2c61890() {
   return (neuron0x2c409e0()*-0.321686);
}

double NNfunction_ns_chi01_cR::synapse0x2c618d0() {
   return (neuron0x2c40d20()*0.333512);
}

double NNfunction_ns_chi01_cR::synapse0x2c61910() {
   return (neuron0x2c41060()*-0.13947);
}

double NNfunction_ns_chi01_cR::synapse0x2c61950() {
   return (neuron0x2c413a0()*0.146858);
}

double NNfunction_ns_chi01_cR::synapse0x2c61990() {
   return (neuron0x2c416e0()*0.182459);
}

double NNfunction_ns_chi01_cR::synapse0x2c619d0() {
   return (neuron0x2c41a20()*0.396964);
}

double NNfunction_ns_chi01_cR::synapse0x2c61250() {
   return (neuron0x2c41d60()*-0.181255);
}

double NNfunction_ns_chi01_cR::synapse0x2c61290() {
   return (neuron0x2c422c0()*1.85997);
}

double NNfunction_ns_chi01_cR::synapse0x2c61b20() {
   return (neuron0x2c42600()*0.0426871);
}

double NNfunction_ns_chi01_cR::synapse0x2c61b60() {
   return (neuron0x2c42940()*-0.173159);
}

double NNfunction_ns_chi01_cR::synapse0x2c61ba0() {
   return (neuron0x2c42c80()*-0.114718);
}

double NNfunction_ns_chi01_cR::synapse0x2c61be0() {
   return (neuron0x2c42fc0()*0.173384);
}

double NNfunction_ns_chi01_cR::synapse0x2c61c20() {
   return (neuron0x2c43300()*-0.201978);
}

double NNfunction_ns_chi01_cR::synapse0x2c61c60() {
   return (neuron0x2c43640()*-0.153181);
}

double NNfunction_ns_chi01_cR::synapse0x2c61fe0() {
   return (neuron0x2c3e9f0()*0.221737);
}

double NNfunction_ns_chi01_cR::synapse0x2c62020() {
   return (neuron0x2c3eca0()*2.39584);
}

double NNfunction_ns_chi01_cR::synapse0x2c62060() {
   return (neuron0x2c3efe0()*-0.503637);
}

double NNfunction_ns_chi01_cR::synapse0x2c620a0() {
   return (neuron0x2c3f320()*0.675908);
}

double NNfunction_ns_chi01_cR::synapse0x2c620e0() {
   return (neuron0x2c3f660()*-0.336775);
}

double NNfunction_ns_chi01_cR::synapse0x2c62120() {
   return (neuron0x2c3f9a0()*0.275959);
}

double NNfunction_ns_chi01_cR::synapse0x2c62160() {
   return (neuron0x2c3fce0()*2.09896);
}

double NNfunction_ns_chi01_cR::synapse0x2c621a0() {
   return (neuron0x2c40020()*-0.209122);
}

double NNfunction_ns_chi01_cR::synapse0x2c621e0() {
   return (neuron0x2c40360()*-0.317657);
}

double NNfunction_ns_chi01_cR::synapse0x2c62220() {
   return (neuron0x2c406a0()*-0.225697);
}

double NNfunction_ns_chi01_cR::synapse0x2c62260() {
   return (neuron0x2c409e0()*0.0774788);
}

double NNfunction_ns_chi01_cR::synapse0x2c622a0() {
   return (neuron0x2c40d20()*-0.223466);
}

double NNfunction_ns_chi01_cR::synapse0x2c622e0() {
   return (neuron0x2c41060()*-1.76963);
}

double NNfunction_ns_chi01_cR::synapse0x2c62320() {
   return (neuron0x2c413a0()*-0.162581);
}

double NNfunction_ns_chi01_cR::synapse0x2c62360() {
   return (neuron0x2c416e0()*0.0966947);
}

double NNfunction_ns_chi01_cR::synapse0x2c623a0() {
   return (neuron0x2c41a20()*1.1927);
}

double NNfunction_ns_chi01_cR::synapse0x2c61e30() {
   return (neuron0x2c41d60()*-0.919338);
}

double NNfunction_ns_chi01_cR::synapse0x2c61e70() {
   return (neuron0x2c422c0()*0.0687351);
}

double NNfunction_ns_chi01_cR::synapse0x2c624f0() {
   return (neuron0x2c42600()*-0.0448821);
}

double NNfunction_ns_chi01_cR::synapse0x2c62530() {
   return (neuron0x2c42940()*0.311443);
}

double NNfunction_ns_chi01_cR::synapse0x2c62570() {
   return (neuron0x2c42c80()*-0.0944189);
}

double NNfunction_ns_chi01_cR::synapse0x2c625b0() {
   return (neuron0x2c42fc0()*0.83751);
}

double NNfunction_ns_chi01_cR::synapse0x2c625f0() {
   return (neuron0x2c43300()*0.405462);
}

double NNfunction_ns_chi01_cR::synapse0x2c62630() {
   return (neuron0x2c43640()*-1.05283);
}

double NNfunction_ns_chi01_cR::synapse0x2c629b0() {
   return (neuron0x2c3e9f0()*0.805103);
}

double NNfunction_ns_chi01_cR::synapse0x2c629f0() {
   return (neuron0x2c3eca0()*-2.56336);
}

double NNfunction_ns_chi01_cR::synapse0x2c62a30() {
   return (neuron0x2c3efe0()*-0.421062);
}

double NNfunction_ns_chi01_cR::synapse0x2c62a70() {
   return (neuron0x2c3f320()*-0.314616);
}

double NNfunction_ns_chi01_cR::synapse0x2c62ab0() {
   return (neuron0x2c3f660()*-0.894892);
}

double NNfunction_ns_chi01_cR::synapse0x2c62af0() {
   return (neuron0x2c3f9a0()*-0.475519);
}

double NNfunction_ns_chi01_cR::synapse0x2c62b30() {
   return (neuron0x2c3fce0()*-1.39652);
}

double NNfunction_ns_chi01_cR::synapse0x2c62b70() {
   return (neuron0x2c40020()*0.16092);
}

double NNfunction_ns_chi01_cR::synapse0x2c62bb0() {
   return (neuron0x2c40360()*0.579608);
}

double NNfunction_ns_chi01_cR::synapse0x2c62bf0() {
   return (neuron0x2c406a0()*-0.322654);
}

double NNfunction_ns_chi01_cR::synapse0x2c62c30() {
   return (neuron0x2c409e0()*-0.148491);
}

double NNfunction_ns_chi01_cR::synapse0x2c62c70() {
   return (neuron0x2c40d20()*0.355471);
}

double NNfunction_ns_chi01_cR::synapse0x2c62cb0() {
   return (neuron0x2c41060()*0.656533);
}

double NNfunction_ns_chi01_cR::synapse0x2c62cf0() {
   return (neuron0x2c413a0()*-0.341135);
}

double NNfunction_ns_chi01_cR::synapse0x2c62d30() {
   return (neuron0x2c416e0()*0.611549);
}

double NNfunction_ns_chi01_cR::synapse0x2c62d70() {
   return (neuron0x2c41a20()*0.0387803);
}

double NNfunction_ns_chi01_cR::synapse0x2c62800() {
   return (neuron0x2c41d60()*-1.04407);
}

double NNfunction_ns_chi01_cR::synapse0x2c62840() {
   return (neuron0x2c422c0()*-0.308539);
}

double NNfunction_ns_chi01_cR::synapse0x2c53370() {
   return (neuron0x2c42600()*-0.371202);
}

double NNfunction_ns_chi01_cR::synapse0x2c533b0() {
   return (neuron0x2c42940()*0.678588);
}

double NNfunction_ns_chi01_cR::synapse0x2c533f0() {
   return (neuron0x2c42c80()*0.695049);
}

double NNfunction_ns_chi01_cR::synapse0x2c53430() {
   return (neuron0x2c42fc0()*-1.16668);
}

double NNfunction_ns_chi01_cR::synapse0x2c53470() {
   return (neuron0x2c43300()*1.01059);
}

double NNfunction_ns_chi01_cR::synapse0x2c534b0() {
   return (neuron0x2c43640()*0.862042);
}

double NNfunction_ns_chi01_cR::synapse0x2c53830() {
   return (neuron0x2c3e9f0()*1.00708);
}

double NNfunction_ns_chi01_cR::synapse0x2c53870() {
   return (neuron0x2c3eca0()*-1.09212);
}

double NNfunction_ns_chi01_cR::synapse0x2c538b0() {
   return (neuron0x2c3efe0()*-0.133429);
}

double NNfunction_ns_chi01_cR::synapse0x2c538f0() {
   return (neuron0x2c3f320()*-0.147217);
}

double NNfunction_ns_chi01_cR::synapse0x2c53930() {
   return (neuron0x2c3f660()*1.37661);
}

double NNfunction_ns_chi01_cR::synapse0x2c53970() {
   return (neuron0x2c3f9a0()*-0.68236);
}

double NNfunction_ns_chi01_cR::synapse0x2c539b0() {
   return (neuron0x2c3fce0()*-0.540445);
}

double NNfunction_ns_chi01_cR::synapse0x2c539f0() {
   return (neuron0x2c40020()*-0.90649);
}

double NNfunction_ns_chi01_cR::synapse0x2c53a30() {
   return (neuron0x2c40360()*0.505808);
}

double NNfunction_ns_chi01_cR::synapse0x2c53a70() {
   return (neuron0x2c406a0()*1.09004);
}

double NNfunction_ns_chi01_cR::synapse0x2c53ab0() {
   return (neuron0x2c409e0()*0.528222);
}

double NNfunction_ns_chi01_cR::synapse0x2c53af0() {
   return (neuron0x2c40d20()*0.878316);
}

double NNfunction_ns_chi01_cR::synapse0x2c53b30() {
   return (neuron0x2c41060()*-0.28871);
}

double NNfunction_ns_chi01_cR::synapse0x2c53b70() {
   return (neuron0x2c413a0()*-0.73961);
}

double NNfunction_ns_chi01_cR::synapse0x2c53bb0() {
   return (neuron0x2c416e0()*0.647445);
}

double NNfunction_ns_chi01_cR::synapse0x2c53bf0() {
   return (neuron0x2c41a20()*1.19918);
}

double NNfunction_ns_chi01_cR::synapse0x2c53680() {
   return (neuron0x2c41d60()*0.206136);
}

double NNfunction_ns_chi01_cR::synapse0x2c536c0() {
   return (neuron0x2c422c0()*0.611437);
}

double NNfunction_ns_chi01_cR::synapse0x2c53d40() {
   return (neuron0x2c42600()*1.07117);
}

double NNfunction_ns_chi01_cR::synapse0x2c53d80() {
   return (neuron0x2c42940()*-0.99095);
}

double NNfunction_ns_chi01_cR::synapse0x2c53dc0() {
   return (neuron0x2c42c80()*0.312109);
}

double NNfunction_ns_chi01_cR::synapse0x2c53e00() {
   return (neuron0x2c42fc0()*-0.365182);
}

double NNfunction_ns_chi01_cR::synapse0x2c53e40() {
   return (neuron0x2c43300()*0.654109);
}

double NNfunction_ns_chi01_cR::synapse0x2c53e80() {
   return (neuron0x2c43640()*1.41552);
}

double NNfunction_ns_chi01_cR::synapse0x2c54200() {
   return (neuron0x2c3e9f0()*0.40448);
}

double NNfunction_ns_chi01_cR::synapse0x2c54240() {
   return (neuron0x2c3eca0()*-3.00957);
}

double NNfunction_ns_chi01_cR::synapse0x2c54280() {
   return (neuron0x2c3efe0()*-0.134884);
}

double NNfunction_ns_chi01_cR::synapse0x2c542c0() {
   return (neuron0x2c3f320()*-0.329455);
}

double NNfunction_ns_chi01_cR::synapse0x2c54300() {
   return (neuron0x2c3f660()*0.948469);
}

double NNfunction_ns_chi01_cR::synapse0x2c54340() {
   return (neuron0x2c3f9a0()*0.615412);
}

double NNfunction_ns_chi01_cR::synapse0x2c54380() {
   return (neuron0x2c3fce0()*0.218491);
}

double NNfunction_ns_chi01_cR::synapse0x2c543c0() {
   return (neuron0x2c40020()*0.010294);
}

double NNfunction_ns_chi01_cR::synapse0x2c54400() {
   return (neuron0x2c40360()*-0.0720347);
}

double NNfunction_ns_chi01_cR::synapse0x2c54440() {
   return (neuron0x2c406a0()*0.097276);
}

double NNfunction_ns_chi01_cR::synapse0x2c54480() {
   return (neuron0x2c409e0()*0.64922);
}

double NNfunction_ns_chi01_cR::synapse0x2c544c0() {
   return (neuron0x2c40d20()*0.0638399);
}

double NNfunction_ns_chi01_cR::synapse0x2c54500() {
   return (neuron0x2c41060()*-0.501923);
}

double NNfunction_ns_chi01_cR::synapse0x2c54540() {
   return (neuron0x2c413a0()*0.045942);
}

double NNfunction_ns_chi01_cR::synapse0x2c54580() {
   return (neuron0x2c416e0()*-0.498709);
}

double NNfunction_ns_chi01_cR::synapse0x2c545c0() {
   return (neuron0x2c41a20()*-1.74238);
}

double NNfunction_ns_chi01_cR::synapse0x2c54050() {
   return (neuron0x2c41d60()*0.798176);
}

double NNfunction_ns_chi01_cR::synapse0x2c54090() {
   return (neuron0x2c422c0()*-0.452675);
}

double NNfunction_ns_chi01_cR::synapse0x2c54710() {
   return (neuron0x2c42600()*-0.184218);
}

double NNfunction_ns_chi01_cR::synapse0x2c54750() {
   return (neuron0x2c42940()*0.46026);
}

double NNfunction_ns_chi01_cR::synapse0x2c54790() {
   return (neuron0x2c42c80()*-0.139471);
}

double NNfunction_ns_chi01_cR::synapse0x2c547d0() {
   return (neuron0x2c42fc0()*0.267935);
}

double NNfunction_ns_chi01_cR::synapse0x2c54810() {
   return (neuron0x2c43300()*-0.198743);
}

double NNfunction_ns_chi01_cR::synapse0x2c54850() {
   return (neuron0x2c43640()*-0.121712);
}

double NNfunction_ns_chi01_cR::synapse0x2c54bd0() {
   return (neuron0x2c3e9f0()*-0.031945);
}

double NNfunction_ns_chi01_cR::synapse0x2c54c10() {
   return (neuron0x2c3eca0()*6.1243);
}

double NNfunction_ns_chi01_cR::synapse0x2c54c50() {
   return (neuron0x2c3efe0()*-0.0121535);
}

double NNfunction_ns_chi01_cR::synapse0x2c54c90() {
   return (neuron0x2c3f320()*0.0340979);
}

double NNfunction_ns_chi01_cR::synapse0x2c54cd0() {
   return (neuron0x2c3f660()*-0.0471972);
}

double NNfunction_ns_chi01_cR::synapse0x2c54d10() {
   return (neuron0x2c3f9a0()*-0.00980831);
}

double NNfunction_ns_chi01_cR::synapse0x2c54d50() {
   return (neuron0x2c3fce0()*-0.013924);
}

double NNfunction_ns_chi01_cR::synapse0x2c54d90() {
   return (neuron0x2c40020()*-0.0244872);
}

double NNfunction_ns_chi01_cR::synapse0x2c54dd0() {
   return (neuron0x2c40360()*0.0381778);
}

double NNfunction_ns_chi01_cR::synapse0x2c54e10() {
   return (neuron0x2c406a0()*0.0303484);
}

double NNfunction_ns_chi01_cR::synapse0x2c54e50() {
   return (neuron0x2c409e0()*0.0361572);
}

double NNfunction_ns_chi01_cR::synapse0x2c54e90() {
   return (neuron0x2c40d20()*-0.00937275);
}

double NNfunction_ns_chi01_cR::synapse0x2c54ed0() {
   return (neuron0x2c41060()*-0.0230319);
}

double NNfunction_ns_chi01_cR::synapse0x2c54f10() {
   return (neuron0x2c413a0()*-0.0145523);
}

double NNfunction_ns_chi01_cR::synapse0x2c54f50() {
   return (neuron0x2c416e0()*0.0234263);
}

double NNfunction_ns_chi01_cR::synapse0x2c54f90() {
   return (neuron0x2c41a20()*-0.414058);
}

double NNfunction_ns_chi01_cR::synapse0x2c54a20() {
   return (neuron0x2c41d60()*-0.0426117);
}

double NNfunction_ns_chi01_cR::synapse0x2c54a60() {
   return (neuron0x2c422c0()*0.0381979);
}

double NNfunction_ns_chi01_cR::synapse0x2c550e0() {
   return (neuron0x2c42600()*0.00804281);
}

double NNfunction_ns_chi01_cR::synapse0x2c55120() {
   return (neuron0x2c42940()*0.0217046);
}

double NNfunction_ns_chi01_cR::synapse0x2c55160() {
   return (neuron0x2c42c80()*0.00882325);
}

double NNfunction_ns_chi01_cR::synapse0x2c551a0() {
   return (neuron0x2c42fc0()*0.0130492);
}

double NNfunction_ns_chi01_cR::synapse0x2c551e0() {
   return (neuron0x2c43300()*0.0107392);
}

double NNfunction_ns_chi01_cR::synapse0x2c55220() {
   return (neuron0x2c43640()*11.1159);
}

double NNfunction_ns_chi01_cR::synapse0x2c670f0() {
   return (neuron0x2c3e9f0()*-0.0440879);
}

double NNfunction_ns_chi01_cR::synapse0x2c67130() {
   return (neuron0x2c3eca0()*2.08615);
}

double NNfunction_ns_chi01_cR::synapse0x2c67170() {
   return (neuron0x2c3efe0()*-0.0268845);
}

double NNfunction_ns_chi01_cR::synapse0x2c671b0() {
   return (neuron0x2c3f320()*-0.0177055);
}

double NNfunction_ns_chi01_cR::synapse0x2c671f0() {
   return (neuron0x2c3f660()*-0.0244508);
}

double NNfunction_ns_chi01_cR::synapse0x2c67230() {
   return (neuron0x2c3f9a0()*-0.000295247);
}

double NNfunction_ns_chi01_cR::synapse0x2c67270() {
   return (neuron0x2c3fce0()*0.0148163);
}

double NNfunction_ns_chi01_cR::synapse0x2c672b0() {
   return (neuron0x2c40020()*0.00293979);
}

double NNfunction_ns_chi01_cR::synapse0x2c672f0() {
   return (neuron0x2c40360()*-0.000144513);
}

double NNfunction_ns_chi01_cR::synapse0x2c67330() {
   return (neuron0x2c406a0()*-0.0214122);
}

double NNfunction_ns_chi01_cR::synapse0x2c67370() {
   return (neuron0x2c409e0()*0.000278403);
}

double NNfunction_ns_chi01_cR::synapse0x2c673b0() {
   return (neuron0x2c40d20()*0.00480804);
}

double NNfunction_ns_chi01_cR::synapse0x2c673f0() {
   return (neuron0x2c41060()*0.00126736);
}

double NNfunction_ns_chi01_cR::synapse0x2c67430() {
   return (neuron0x2c413a0()*0.00495281);
}

double NNfunction_ns_chi01_cR::synapse0x2c67470() {
   return (neuron0x2c416e0()*-0.00550267);
}

double NNfunction_ns_chi01_cR::synapse0x2c674b0() {
   return (neuron0x2c41a20()*0.300684);
}

double NNfunction_ns_chi01_cR::synapse0x2c55260() {
   return (neuron0x2c41d60()*0.00652557);
}

double NNfunction_ns_chi01_cR::synapse0x2c552a0() {
   return (neuron0x2c422c0()*-0.0267675);
}

double NNfunction_ns_chi01_cR::synapse0x2c67600() {
   return (neuron0x2c42600()*-0.00698044);
}

double NNfunction_ns_chi01_cR::synapse0x2c67640() {
   return (neuron0x2c42940()*-0.00264069);
}

double NNfunction_ns_chi01_cR::synapse0x2c67680() {
   return (neuron0x2c42c80()*0.0077568);
}

double NNfunction_ns_chi01_cR::synapse0x2c676c0() {
   return (neuron0x2c42fc0()*0.00411928);
}

double NNfunction_ns_chi01_cR::synapse0x2c67700() {
   return (neuron0x2c43300()*-0.00589836);
}

double NNfunction_ns_chi01_cR::synapse0x2c67740() {
   return (neuron0x2c43640()*0.0186342);
}

double NNfunction_ns_chi01_cR::synapse0x2c67ac0() {
   return (neuron0x2c3e9f0()*0.124363);
}

double NNfunction_ns_chi01_cR::synapse0x2c67b00() {
   return (neuron0x2c3eca0()*0.0429797);
}

double NNfunction_ns_chi01_cR::synapse0x2c67b40() {
   return (neuron0x2c3efe0()*-1.30783);
}

double NNfunction_ns_chi01_cR::synapse0x2c67b80() {
   return (neuron0x2c3f320()*-2.17945);
}

double NNfunction_ns_chi01_cR::synapse0x2c67bc0() {
   return (neuron0x2c3f660()*-0.261792);
}

double NNfunction_ns_chi01_cR::synapse0x2c67c00() {
   return (neuron0x2c3f9a0()*-0.0415749);
}

double NNfunction_ns_chi01_cR::synapse0x2c67c40() {
   return (neuron0x2c3fce0()*-0.230333);
}

double NNfunction_ns_chi01_cR::synapse0x2c67c80() {
   return (neuron0x2c40020()*0.0721265);
}

double NNfunction_ns_chi01_cR::synapse0x2c67cc0() {
   return (neuron0x2c40360()*-0.551218);
}

double NNfunction_ns_chi01_cR::synapse0x2c67d00() {
   return (neuron0x2c406a0()*0.926583);
}

double NNfunction_ns_chi01_cR::synapse0x2c67d40() {
   return (neuron0x2c409e0()*-0.601168);
}

double NNfunction_ns_chi01_cR::synapse0x2c67d80() {
   return (neuron0x2c40d20()*-0.518421);
}

double NNfunction_ns_chi01_cR::synapse0x2c67dc0() {
   return (neuron0x2c41060()*-0.597339);
}

double NNfunction_ns_chi01_cR::synapse0x2c67e00() {
   return (neuron0x2c413a0()*1.44947);
}

double NNfunction_ns_chi01_cR::synapse0x2c67e40() {
   return (neuron0x2c416e0()*0.441702);
}

double NNfunction_ns_chi01_cR::synapse0x2c67e80() {
   return (neuron0x2c41a20()*0.117625);
}

double NNfunction_ns_chi01_cR::synapse0x2c67910() {
   return (neuron0x2c41d60()*-0.836617);
}

double NNfunction_ns_chi01_cR::synapse0x2c67950() {
   return (neuron0x2c422c0()*0.308235);
}

double NNfunction_ns_chi01_cR::synapse0x2c67fd0() {
   return (neuron0x2c42600()*-0.704056);
}

double NNfunction_ns_chi01_cR::synapse0x2c68010() {
   return (neuron0x2c42940()*0.0985962);
}

double NNfunction_ns_chi01_cR::synapse0x2c68050() {
   return (neuron0x2c42c80()*0.951281);
}

double NNfunction_ns_chi01_cR::synapse0x2c68090() {
   return (neuron0x2c42fc0()*0.497678);
}

double NNfunction_ns_chi01_cR::synapse0x2c680d0() {
   return (neuron0x2c43300()*0.131518);
}

double NNfunction_ns_chi01_cR::synapse0x2c68110() {
   return (neuron0x2c43640()*-0.968885);
}

double NNfunction_ns_chi01_cR::synapse0x2c68490() {
   return (neuron0x2c3e9f0()*0.00475766);
}

double NNfunction_ns_chi01_cR::synapse0x2c684d0() {
   return (neuron0x2c3eca0()*0.00846023);
}

double NNfunction_ns_chi01_cR::synapse0x2c68510() {
   return (neuron0x2c3efe0()*0.00673575);
}

double NNfunction_ns_chi01_cR::synapse0x2c68550() {
   return (neuron0x2c3f320()*-3.24774);
}

double NNfunction_ns_chi01_cR::synapse0x2c68590() {
   return (neuron0x2c3f660()*0.0267052);
}

double NNfunction_ns_chi01_cR::synapse0x2c685d0() {
   return (neuron0x2c3f9a0()*-0.00224774);
}

double NNfunction_ns_chi01_cR::synapse0x2c68610() {
   return (neuron0x2c3fce0()*0.00605928);
}

double NNfunction_ns_chi01_cR::synapse0x2c68650() {
   return (neuron0x2c40020()*-0.00163979);
}

double NNfunction_ns_chi01_cR::synapse0x2c68690() {
   return (neuron0x2c40360()*-0.00816198);
}

double NNfunction_ns_chi01_cR::synapse0x2c686d0() {
   return (neuron0x2c406a0()*0.00741846);
}

double NNfunction_ns_chi01_cR::synapse0x2c68710() {
   return (neuron0x2c409e0()*-0.0283745);
}

double NNfunction_ns_chi01_cR::synapse0x2c68750() {
   return (neuron0x2c40d20()*-0.0163826);
}

double NNfunction_ns_chi01_cR::synapse0x2c68790() {
   return (neuron0x2c41060()*-0.0114875);
}

double NNfunction_ns_chi01_cR::synapse0x2c687d0() {
   return (neuron0x2c413a0()*0.0259188);
}

double NNfunction_ns_chi01_cR::synapse0x2c68810() {
   return (neuron0x2c416e0()*0.0231268);
}

double NNfunction_ns_chi01_cR::synapse0x2c68850() {
   return (neuron0x2c41a20()*0.176948);
}

double NNfunction_ns_chi01_cR::synapse0x2c682e0() {
   return (neuron0x2c41d60()*0.0216012);
}

double NNfunction_ns_chi01_cR::synapse0x2c68320() {
   return (neuron0x2c422c0()*-0.012154);
}

double NNfunction_ns_chi01_cR::synapse0x2c689a0() {
   return (neuron0x2c42600()*-0.0163314);
}

double NNfunction_ns_chi01_cR::synapse0x2c689e0() {
   return (neuron0x2c42940()*0.00437151);
}

double NNfunction_ns_chi01_cR::synapse0x2c68a20() {
   return (neuron0x2c42c80()*0.0159748);
}

double NNfunction_ns_chi01_cR::synapse0x2c68a60() {
   return (neuron0x2c42fc0()*-0.00347654);
}

double NNfunction_ns_chi01_cR::synapse0x2c68aa0() {
   return (neuron0x2c43300()*0.00698919);
}

double NNfunction_ns_chi01_cR::synapse0x2c68ae0() {
   return (neuron0x2c43640()*0.0156878);
}

double NNfunction_ns_chi01_cR::synapse0x2c68e60() {
   return (neuron0x2c3e9f0()*-0.00558199);
}

double NNfunction_ns_chi01_cR::synapse0x2c68ea0() {
   return (neuron0x2c3eca0()*0.00590009);
}

double NNfunction_ns_chi01_cR::synapse0x2c68ee0() {
   return (neuron0x2c3efe0()*-0.00718784);
}

double NNfunction_ns_chi01_cR::synapse0x2c68f20() {
   return (neuron0x2c3f320()*2.30883);
}

double NNfunction_ns_chi01_cR::synapse0x2c68f60() {
   return (neuron0x2c3f660()*-0.00581467);
}

double NNfunction_ns_chi01_cR::synapse0x2c68fa0() {
   return (neuron0x2c3f9a0()*0.0122075);
}

double NNfunction_ns_chi01_cR::synapse0x2c68fe0() {
   return (neuron0x2c3fce0()*0.0048827);
}

double NNfunction_ns_chi01_cR::synapse0x2c69020() {
   return (neuron0x2c40020()*0.00255947);
}

double NNfunction_ns_chi01_cR::synapse0x2c69060() {
   return (neuron0x2c40360()*0.00181233);
}

double NNfunction_ns_chi01_cR::synapse0x2c690a0() {
   return (neuron0x2c406a0()*-0.0235608);
}

double NNfunction_ns_chi01_cR::synapse0x2c690e0() {
   return (neuron0x2c409e0()*0.00164009);
}

double NNfunction_ns_chi01_cR::synapse0x2c69120() {
   return (neuron0x2c40d20()*0.00206748);
}

double NNfunction_ns_chi01_cR::synapse0x2c69160() {
   return (neuron0x2c41060()*-0.0110903);
}

double NNfunction_ns_chi01_cR::synapse0x2c691a0() {
   return (neuron0x2c413a0()*0.00215409);
}

double NNfunction_ns_chi01_cR::synapse0x2c691e0() {
   return (neuron0x2c416e0()*-0.0209412);
}

double NNfunction_ns_chi01_cR::synapse0x2c69220() {
   return (neuron0x2c41a20()*0.349595);
}

double NNfunction_ns_chi01_cR::synapse0x2c68cb0() {
   return (neuron0x2c41d60()*0.0138257);
}

double NNfunction_ns_chi01_cR::synapse0x2c68cf0() {
   return (neuron0x2c422c0()*-0.0151517);
}

double NNfunction_ns_chi01_cR::synapse0x2c69370() {
   return (neuron0x2c42600()*0.00997871);
}

double NNfunction_ns_chi01_cR::synapse0x2c693b0() {
   return (neuron0x2c42940()*-0.0176895);
}

double NNfunction_ns_chi01_cR::synapse0x2c693f0() {
   return (neuron0x2c42c80()*-0.0142238);
}

double NNfunction_ns_chi01_cR::synapse0x2c69430() {
   return (neuron0x2c42fc0()*0.00640412);
}

double NNfunction_ns_chi01_cR::synapse0x2c69470() {
   return (neuron0x2c43300()*-0.0126742);
}

double NNfunction_ns_chi01_cR::synapse0x2c694b0() {
   return (neuron0x2c43640()*0.00941519);
}

double NNfunction_ns_chi01_cR::synapse0x2a09320() {
   return (neuron0x2c43ab0()*-2.86952);
}

double NNfunction_ns_chi01_cR::synapse0x2a09360() {
   return (neuron0x2c442f0()*-4.76094);
}

double NNfunction_ns_chi01_cR::synapse0x2c45e60() {
   return (neuron0x2c44dd0()*-3.59645);
}

double NNfunction_ns_chi01_cR::synapse0x2c45ea0() {
   return (neuron0x2c44870()*1.21689);
}

double NNfunction_ns_chi01_cR::synapse0x2c47930() {
   return (neuron0x2c45bb0()*1.08509);
}

double NNfunction_ns_chi01_cR::synapse0x2c47970() {
   return (neuron0x2c47680()*1.14581);
}

double NNfunction_ns_chi01_cR::synapse0x2c48700() {
   return (neuron0x2c48450()*-0.191319);
}

double NNfunction_ns_chi01_cR::synapse0x2c48740() {
   return (neuron0x2c48e20()*-3.84648);
}

double NNfunction_ns_chi01_cR::synapse0x2c490d0() {
   return (neuron0x2c497f0()*-0.288212);
}

double NNfunction_ns_chi01_cR::synapse0x2c49110() {
   return (neuron0x2c4a2d0()*-0.0970687);
}

double NNfunction_ns_chi01_cR::synapse0x2c49aa0() {
   return (neuron0x2c4aca0()*-0.0345003);
}

double NNfunction_ns_chi01_cR::synapse0x2c49ae0() {
   return (neuron0x2c47d80()*0.809395);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a580() {
   return (neuron0x2c4c850()*0.0303021);
}

double NNfunction_ns_chi01_cR::synapse0x2c4a5c0() {
   return (neuron0x2c4d220()*0.50898);
}

double NNfunction_ns_chi01_cR::synapse0x2c4af50() {
   return (neuron0x2c4dbf0()*0.0760737);
}

double NNfunction_ns_chi01_cR::synapse0x2c4af90() {
   return (neuron0x2c4e5c0()*1.76642);
}

double NNfunction_ns_chi01_cR::synapse0x2c48030() {
   return (neuron0x2c503d0()*0.341356);
}

double NNfunction_ns_chi01_cR::synapse0x2c48070() {
   return (neuron0x2c506b0()*3.26526);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cb00() {
   return (neuron0x2c51080()*-0.616022);
}

double NNfunction_ns_chi01_cR::synapse0x2c4cb40() {
   return (neuron0x2c51a50()*-0.542648);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d4d0() {
   return (neuron0x2c52420()*-0.825557);
}

double NNfunction_ns_chi01_cR::synapse0x2c4d510() {
   return (neuron0x2c52df0()*0.889497);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dea0() {
   return (neuron0x2c4b940()*-2.33116);
}

double NNfunction_ns_chi01_cR::synapse0x2c4dee0() {
   return (neuron0x2c4c310()*0.787989);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e870() {
   return (neuron0x2c55b80()*-0.355344);
}

double NNfunction_ns_chi01_cR::synapse0x2c4e8b0() {
   return (neuron0x2c56550()*0.169462);
}

double NNfunction_ns_chi01_cR::synapse0x2c41900() {
   return (neuron0x2c56f20()*0.161666);
}

double NNfunction_ns_chi01_cR::synapse0x2c41940() {
   return (neuron0x2c578f0()*-0.0466247);
}

double NNfunction_ns_chi01_cR::synapse0x2c50960() {
   return (neuron0x2c582c0()*-1.17954);
}

double NNfunction_ns_chi01_cR::synapse0x2c509a0() {
   return (neuron0x2c58c90()*2.22465);
}

double NNfunction_ns_chi01_cR::synapse0x2c51330() {
   return (neuron0x2c59660()*-1.80045);
}

double NNfunction_ns_chi01_cR::synapse0x2c51370() {
   return (neuron0x2c5a030()*1.2077);
}

double NNfunction_ns_chi01_cR::synapse0x2c51d00() {
   return (neuron0x2c500c0()*-0.446188);
}

double NNfunction_ns_chi01_cR::synapse0x2c51d40() {
   return (neuron0x2c5cc10()*-0.307551);
}

double NNfunction_ns_chi01_cR::synapse0x2c526d0() {
   return (neuron0x2c5d5e0()*-0.453281);
}

double NNfunction_ns_chi01_cR::synapse0x2c52710() {
   return (neuron0x2c5dfb0()*2.09682);
}

double NNfunction_ns_chi01_cR::synapse0x2c530a0() {
   return (neuron0x2c5e980()*-2.17935);
}

double NNfunction_ns_chi01_cR::synapse0x2c530e0() {
   return (neuron0x2c5f350()*-0.164073);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bbf0() {
   return (neuron0x2c5fd20()*-0.15124);
}

double NNfunction_ns_chi01_cR::synapse0x2c4bc30() {
   return (neuron0x2c606f0()*-0.688062);
}

double NNfunction_ns_chi01_cR::synapse0x2c554a0() {
   return (neuron0x2c610c0()*0.346909);
}

double NNfunction_ns_chi01_cR::synapse0x2c554e0() {
   return (neuron0x2c61ca0()*-0.0377861);
}

double NNfunction_ns_chi01_cR::synapse0x2c55e30() {
   return (neuron0x2c62670()*0.0418664);
}

double NNfunction_ns_chi01_cR::synapse0x2c55e70() {
   return (neuron0x2c534f0()*-0.159333);
}

double NNfunction_ns_chi01_cR::synapse0x2c56800() {
   return (neuron0x2c53ec0()*0.0676996);
}

double NNfunction_ns_chi01_cR::synapse0x2c56840() {
   return (neuron0x2c54890()*0.520056);
}

double NNfunction_ns_chi01_cR::synapse0x2c571d0() {
   return (neuron0x2c66ed0()*1.51338);
}

double NNfunction_ns_chi01_cR::synapse0x2c57210() {
   return (neuron0x2c67780()*0.159764);
}

double NNfunction_ns_chi01_cR::synapse0x2c57ba0() {
   return (neuron0x2c68150()*4.36075);
}

double NNfunction_ns_chi01_cR::synapse0x2c57be0() {
   return (neuron0x2c68b20()*6.4827);
}

double NNfunction_ns_chi01_cR::synapse0x2c5a2e0() {
   return (neuron0x2c43ab0()*-3.55608);
}

double NNfunction_ns_chi01_cR::synapse0x2c5a320() {
   return (neuron0x2c442f0()*-0.68331);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f8a0() {
   return (neuron0x2c44dd0()*3.68179);
}

double NNfunction_ns_chi01_cR::synapse0x2c4f8e0() {
   return (neuron0x2c44870()*1.37778);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cec0() {
   return (neuron0x2c45bb0()*0.911703);
}

double NNfunction_ns_chi01_cR::synapse0x2c5cf00() {
   return (neuron0x2c47680()*0.0679584);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d890() {
   return (neuron0x2c48450()*0.00943497);
}

double NNfunction_ns_chi01_cR::synapse0x2c5d8d0() {
   return (neuron0x2c48e20()*-1.8263);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e260() {
   return (neuron0x2c497f0()*0.154306);
}

double NNfunction_ns_chi01_cR::synapse0x2c5e2a0() {
   return (neuron0x2c4a2d0()*0.352043);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ec30() {
   return (neuron0x2c4aca0()*0.437199);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ec70() {
   return (neuron0x2c47d80()*-1.75478);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f600() {
   return (neuron0x2c4c850()*0.765914);
}

double NNfunction_ns_chi01_cR::synapse0x2c5f640() {
   return (neuron0x2c4d220()*-3.77356);
}

double NNfunction_ns_chi01_cR::synapse0x2c5ffd0() {
   return (neuron0x2c4dbf0()*-0.572888);
}

double NNfunction_ns_chi01_cR::synapse0x2c60010() {
   return (neuron0x2c4e5c0()*-0.110144);
}

double NNfunction_ns_chi01_cR::synapse0x2c609a0() {
   return (neuron0x2c503d0()*1.2198);
}

double NNfunction_ns_chi01_cR::synapse0x2c609e0() {
   return (neuron0x2c506b0()*-0.0578592);
}

double NNfunction_ns_chi01_cR::synapse0x2c61370() {
   return (neuron0x2c51080()*1.07341);
}

double NNfunction_ns_chi01_cR::synapse0x2c613b0() {
   return (neuron0x2c51a50()*1.46385);
}

double NNfunction_ns_chi01_cR::synapse0x2c61f50() {
   return (neuron0x2c52420()*-2.7353);
}

double NNfunction_ns_chi01_cR::synapse0x2c61f90() {
   return (neuron0x2c52df0()*-0.745781);
}

double NNfunction_ns_chi01_cR::synapse0x2c62920() {
   return (neuron0x2c4b940()*-0.479855);
}

double NNfunction_ns_chi01_cR::synapse0x2c62960() {
   return (neuron0x2c4c310()*-1.32581);
}

double NNfunction_ns_chi01_cR::synapse0x2c537a0() {
   return (neuron0x2c55b80()*-0.679068);
}

double NNfunction_ns_chi01_cR::synapse0x2c537e0() {
   return (neuron0x2c56550()*-1.05881);
}

double NNfunction_ns_chi01_cR::synapse0x2c54170() {
   return (neuron0x2c56f20()*-0.32323);
}

double NNfunction_ns_chi01_cR::synapse0x2c541b0() {
   return (neuron0x2c578f0()*-0.408721);
}

double NNfunction_ns_chi01_cR::synapse0x2c54b40() {
   return (neuron0x2c582c0()*-0.431884);
}

double NNfunction_ns_chi01_cR::synapse0x2c54b80() {
   return (neuron0x2c58c90()*-2.21574);
}

double NNfunction_ns_chi01_cR::synapse0x2c67060() {
   return (neuron0x2c59660()*-3.29934);
}

double NNfunction_ns_chi01_cR::synapse0x2c670a0() {
   return (neuron0x2c5a030()*0.172378);
}

double NNfunction_ns_chi01_cR::synapse0x2c67a30() {
   return (neuron0x2c500c0()*-4.60717);
}

double NNfunction_ns_chi01_cR::synapse0x2c67a70() {
   return (neuron0x2c5cc10()*-0.590791);
}

double NNfunction_ns_chi01_cR::synapse0x2c68400() {
   return (neuron0x2c5d5e0()*-0.0720935);
}

double NNfunction_ns_chi01_cR::synapse0x2c68440() {
   return (neuron0x2c5dfb0()*-0.894296);
}

double NNfunction_ns_chi01_cR::synapse0x2c68dd0() {
   return (neuron0x2c5e980()*-0.430163);
}

double NNfunction_ns_chi01_cR::synapse0x2c68e10() {
   return (neuron0x2c5f350()*-9.14741);
}

double NNfunction_ns_chi01_cR::synapse0x2c43d60() {
   return (neuron0x2c5fd20()*-0.425489);
}

double NNfunction_ns_chi01_cR::synapse0x2c43da0() {
   return (neuron0x2c606f0()*-0.563906);
}

double NNfunction_ns_chi01_cR::synapse0x2c58570() {
   return (neuron0x2c610c0()*0.410592);
}

double NNfunction_ns_chi01_cR::synapse0x2c585b0() {
   return (neuron0x2c61ca0()*0.424339);
}

double NNfunction_ns_chi01_cR::synapse0x2c694f0() {
   return (neuron0x2c62670()*0.0679155);
}

double NNfunction_ns_chi01_cR::synapse0x2c69530() {
   return (neuron0x2c534f0()*0.0114722);
}

double NNfunction_ns_chi01_cR::synapse0x2c69570() {
   return (neuron0x2c53ec0()*1.04821);
}

double NNfunction_ns_chi01_cR::synapse0x2c695b0() {
   return (neuron0x2c54890()*1.96686);
}

double NNfunction_ns_chi01_cR::synapse0x2c70460() {
   return (neuron0x2c66ed0()*-0.750816);
}

double NNfunction_ns_chi01_cR::synapse0x2c704a0() {
   return (neuron0x2c67780()*0.21284);
}

double NNfunction_ns_chi01_cR::synapse0x2c704e0() {
   return (neuron0x2c68150()*1.15976);
}

double NNfunction_ns_chi01_cR::synapse0x2c70520() {
   return (neuron0x2c68b20()*2.39845);
}

double NNfunction_ns_chi01_cR::synapse0x2c708a0() {
   return (neuron0x2c43ab0()*-1.07251);
}

double NNfunction_ns_chi01_cR::synapse0x2c708e0() {
   return (neuron0x2c442f0()*0.782596);
}

double NNfunction_ns_chi01_cR::synapse0x2c70920() {
   return (neuron0x2c44dd0()*0.471382);
}

double NNfunction_ns_chi01_cR::synapse0x2c70960() {
   return (neuron0x2c44870()*0.333845);
}

double NNfunction_ns_chi01_cR::synapse0x2c709a0() {
   return (neuron0x2c45bb0()*2.11747);
}

double NNfunction_ns_chi01_cR::synapse0x2c709e0() {
   return (neuron0x2c47680()*-0.735464);
}

double NNfunction_ns_chi01_cR::synapse0x2c70a20() {
   return (neuron0x2c48450()*0.0523572);
}

double NNfunction_ns_chi01_cR::synapse0x2c70a60() {
   return (neuron0x2c48e20()*-0.0833543);
}

double NNfunction_ns_chi01_cR::synapse0x2c70aa0() {
   return (neuron0x2c497f0()*0.251377);
}

double NNfunction_ns_chi01_cR::synapse0x2c70ae0() {
   return (neuron0x2c4a2d0()*0.266984);
}

double NNfunction_ns_chi01_cR::synapse0x2c70b20() {
   return (neuron0x2c4aca0()*0.483974);
}

double NNfunction_ns_chi01_cR::synapse0x2c70b60() {
   return (neuron0x2c47d80()*0.877286);
}

double NNfunction_ns_chi01_cR::synapse0x2c70ba0() {
   return (neuron0x2c4c850()*0.343235);
}

double NNfunction_ns_chi01_cR::synapse0x2c70be0() {
   return (neuron0x2c4d220()*-1.67837);
}

double NNfunction_ns_chi01_cR::synapse0x2c70c20() {
   return (neuron0x2c4dbf0()*-0.656644);
}

double NNfunction_ns_chi01_cR::synapse0x2c70c60() {
   return (neuron0x2c4e5c0()*-0.0411409);
}

double NNfunction_ns_chi01_cR::synapse0x2c706f0() {
   return (neuron0x2c503d0()*0.741403);
}

double NNfunction_ns_chi01_cR::synapse0x2c70730() {
   return (neuron0x2c506b0()*-0.241034);
}

double NNfunction_ns_chi01_cR::synapse0x2c70db0() {
   return (neuron0x2c51080()*-0.566768);
}

double NNfunction_ns_chi01_cR::synapse0x2c70df0() {
   return (neuron0x2c51a50()*1.36973);
}

double NNfunction_ns_chi01_cR::synapse0x2c70e30() {
   return (neuron0x2c52420()*-3.34097);
}

double NNfunction_ns_chi01_cR::synapse0x2c70e70() {
   return (neuron0x2c52df0()*-1.26143);
}

double NNfunction_ns_chi01_cR::synapse0x2c70eb0() {
   return (neuron0x2c4b940()*-0.25362);
}

double NNfunction_ns_chi01_cR::synapse0x2c70ef0() {
   return (neuron0x2c4c310()*-0.728009);
}

double NNfunction_ns_chi01_cR::synapse0x2c70f30() {
   return (neuron0x2c55b80()*-0.644398);
}

double NNfunction_ns_chi01_cR::synapse0x2c70f70() {
   return (neuron0x2c56550()*-0.581263);
}

double NNfunction_ns_chi01_cR::synapse0x2c70fb0() {
   return (neuron0x2c56f20()*-0.564837);
}

double NNfunction_ns_chi01_cR::synapse0x2c70ff0() {
   return (neuron0x2c578f0()*-0.799236);
}

double NNfunction_ns_chi01_cR::synapse0x2c71030() {
   return (neuron0x2c582c0()*0.155332);
}

double NNfunction_ns_chi01_cR::synapse0x2c71070() {
   return (neuron0x2c58c90()*-1.51842);
}

double NNfunction_ns_chi01_cR::synapse0x2c710b0() {
   return (neuron0x2c59660()*0.410947);
}

double NNfunction_ns_chi01_cR::synapse0x2c710f0() {
   return (neuron0x2c5a030()*0.14943);
}

double NNfunction_ns_chi01_cR::synapse0x2c70ca0() {
   return (neuron0x2c500c0()*2.62603);
}

double NNfunction_ns_chi01_cR::synapse0x2c70ce0() {
   return (neuron0x2c5cc10()*0.497309);
}

double NNfunction_ns_chi01_cR::synapse0x2c70d20() {
   return (neuron0x2c5d5e0()*-0.160078);
}

double NNfunction_ns_chi01_cR::synapse0x2c70d60() {
   return (neuron0x2c5dfb0()*-1.1967);
}

double NNfunction_ns_chi01_cR::synapse0x2c71340() {
   return (neuron0x2c5e980()*0.269161);
}

double NNfunction_ns_chi01_cR::synapse0x2c71380() {
   return (neuron0x2c5f350()*-4.79817);
}

double NNfunction_ns_chi01_cR::synapse0x2c713c0() {
   return (neuron0x2c5fd20()*-0.424928);
}

double NNfunction_ns_chi01_cR::synapse0x2c71400() {
   return (neuron0x2c606f0()*0.1607);
}

double NNfunction_ns_chi01_cR::synapse0x2c71440() {
   return (neuron0x2c610c0()*0.0311183);
}

double NNfunction_ns_chi01_cR::synapse0x2c71480() {
   return (neuron0x2c61ca0()*0.333996);
}

double NNfunction_ns_chi01_cR::synapse0x2c714c0() {
   return (neuron0x2c62670()*-0.466768);
}

double NNfunction_ns_chi01_cR::synapse0x2c71500() {
   return (neuron0x2c534f0()*0.17618);
}

double NNfunction_ns_chi01_cR::synapse0x2c71540() {
   return (neuron0x2c53ec0()*0.817418);
}

double NNfunction_ns_chi01_cR::synapse0x2c71580() {
   return (neuron0x2c54890()*5.40568);
}

double NNfunction_ns_chi01_cR::synapse0x2c715c0() {
   return (neuron0x2c66ed0()*-1.49235);
}

double NNfunction_ns_chi01_cR::synapse0x2c71600() {
   return (neuron0x2c67780()*0.0354572);
}

double NNfunction_ns_chi01_cR::synapse0x2c71640() {
   return (neuron0x2c68150()*-1.41588);
}

double NNfunction_ns_chi01_cR::synapse0x2c71680() {
   return (neuron0x2c68b20()*-1.37148);
}

double NNfunction_ns_chi01_cR::synapse0x2c71a00() {
   return (neuron0x2c43ab0()*0.771883);
}

double NNfunction_ns_chi01_cR::synapse0x2c71a40() {
   return (neuron0x2c442f0()*-0.61219);
}

double NNfunction_ns_chi01_cR::synapse0x2c71a80() {
   return (neuron0x2c44dd0()*0.826895);
}

double NNfunction_ns_chi01_cR::synapse0x2c71ac0() {
   return (neuron0x2c44870()*0.447491);
}

double NNfunction_ns_chi01_cR::synapse0x2c71b00() {
   return (neuron0x2c45bb0()*-11.3952);
}

double NNfunction_ns_chi01_cR::synapse0x2c71b40() {
   return (neuron0x2c47680()*0.910117);
}

double NNfunction_ns_chi01_cR::synapse0x2c71b80() {
   return (neuron0x2c48450()*-0.119026);
}

double NNfunction_ns_chi01_cR::synapse0x2c71bc0() {
   return (neuron0x2c48e20()*-1.37979);
}

double NNfunction_ns_chi01_cR::synapse0x2c71c00() {
   return (neuron0x2c497f0()*-0.477902);
}

double NNfunction_ns_chi01_cR::synapse0x2c71c40() {
   return (neuron0x2c4a2d0()*0.00233532);
}

double NNfunction_ns_chi01_cR::synapse0x2c71c80() {
   return (neuron0x2c4aca0()*-0.118393);
}

double NNfunction_ns_chi01_cR::synapse0x2c71cc0() {
   return (neuron0x2c47d80()*-0.0328862);
}

double NNfunction_ns_chi01_cR::synapse0x2c71d00() {
   return (neuron0x2c4c850()*-0.139654);
}

double NNfunction_ns_chi01_cR::synapse0x2c71d40() {
   return (neuron0x2c4d220()*1.77475);
}

double NNfunction_ns_chi01_cR::synapse0x2c71d80() {
   return (neuron0x2c4dbf0()*0.0629797);
}

double NNfunction_ns_chi01_cR::synapse0x2c71dc0() {
   return (neuron0x2c4e5c0()*0.441284);
}

double NNfunction_ns_chi01_cR::synapse0x2c71850() {
   return (neuron0x2c503d0()*0.00600244);
}

double NNfunction_ns_chi01_cR::synapse0x2c71890() {
   return (neuron0x2c506b0()*0.872973);
}

double NNfunction_ns_chi01_cR::synapse0x2c71f10() {
   return (neuron0x2c51080()*-0.136822);
}

double NNfunction_ns_chi01_cR::synapse0x2c71f50() {
   return (neuron0x2c51a50()*0.676917);
}

double NNfunction_ns_chi01_cR::synapse0x2c71f90() {
   return (neuron0x2c52420()*3.31547);
}

double NNfunction_ns_chi01_cR::synapse0x2c71fd0() {
   return (neuron0x2c52df0()*1.11442);
}

double NNfunction_ns_chi01_cR::synapse0x2c72010() {
   return (neuron0x2c4b940()*0.104359);
}

double NNfunction_ns_chi01_cR::synapse0x2c72050() {
   return (neuron0x2c4c310()*-0.749995);
}

double NNfunction_ns_chi01_cR::synapse0x2c72090() {
   return (neuron0x2c55b80()*0.153429);
}

double NNfunction_ns_chi01_cR::synapse0x2c720d0() {
   return (neuron0x2c56550()*0.351002);
}

double NNfunction_ns_chi01_cR::synapse0x2c72110() {
   return (neuron0x2c56f20()*0.0917444);
}

double NNfunction_ns_chi01_cR::synapse0x2c72150() {
   return (neuron0x2c578f0()*0.152662);
}

double NNfunction_ns_chi01_cR::synapse0x2c72190() {
   return (neuron0x2c582c0()*-0.889216);
}

double NNfunction_ns_chi01_cR::synapse0x2c721d0() {
   return (neuron0x2c58c90()*0.903141);
}

double NNfunction_ns_chi01_cR::synapse0x2c72210() {
   return (neuron0x2c59660()*-3.02247);
}

double NNfunction_ns_chi01_cR::synapse0x2c72250() {
   return (neuron0x2c5a030()*0.41088);
}

double NNfunction_ns_chi01_cR::synapse0x2c71e00() {
   return (neuron0x2c500c0()*0.5707);
}

double NNfunction_ns_chi01_cR::synapse0x2c71e40() {
   return (neuron0x2c5cc10()*1.56838);
}

double NNfunction_ns_chi01_cR::synapse0x2c71e80() {
   return (neuron0x2c5d5e0()*-0.0652535);
}

double NNfunction_ns_chi01_cR::synapse0x2c71ec0() {
   return (neuron0x2c5dfb0()*2.12336);
}

double NNfunction_ns_chi01_cR::synapse0x2c724a0() {
   return (neuron0x2c5e980()*-0.296095);
}

double NNfunction_ns_chi01_cR::synapse0x2c724e0() {
   return (neuron0x2c5f350()*5.40487);
}

double NNfunction_ns_chi01_cR::synapse0x2c72520() {
   return (neuron0x2c5fd20()*0.210586);
}

double NNfunction_ns_chi01_cR::synapse0x2c72560() {
   return (neuron0x2c606f0()*-1.43083);
}

double NNfunction_ns_chi01_cR::synapse0x2c725a0() {
   return (neuron0x2c610c0()*0.283911);
}

double NNfunction_ns_chi01_cR::synapse0x2c725e0() {
   return (neuron0x2c61ca0()*-0.0161836);
}

double NNfunction_ns_chi01_cR::synapse0x2c72620() {
   return (neuron0x2c62670()*0.298073);
}

double NNfunction_ns_chi01_cR::synapse0x2c72660() {
   return (neuron0x2c534f0()*-0.297571);
}

double NNfunction_ns_chi01_cR::synapse0x2c726a0() {
   return (neuron0x2c53ec0()*0.0684975);
}

double NNfunction_ns_chi01_cR::synapse0x2c726e0() {
   return (neuron0x2c54890()*4.20743);
}

double NNfunction_ns_chi01_cR::synapse0x2c72720() {
   return (neuron0x2c66ed0()*2.78929);
}

double NNfunction_ns_chi01_cR::synapse0x2c72760() {
   return (neuron0x2c67780()*0.00304511);
}

double NNfunction_ns_chi01_cR::synapse0x2c727a0() {
   return (neuron0x2c68150()*2.23583);
}

double NNfunction_ns_chi01_cR::synapse0x2c727e0() {
   return (neuron0x2c68b20()*2.773);
}

double NNfunction_ns_chi01_cR::synapse0x2c72b60() {
   return (neuron0x2c43ab0()*1.67795);
}

double NNfunction_ns_chi01_cR::synapse0x2c72ba0() {
   return (neuron0x2c442f0()*0.607255);
}

double NNfunction_ns_chi01_cR::synapse0x2c72be0() {
   return (neuron0x2c44dd0()*2.77096);
}

double NNfunction_ns_chi01_cR::synapse0x2c72c20() {
   return (neuron0x2c44870()*0.0420622);
}

double NNfunction_ns_chi01_cR::synapse0x2c72c60() {
   return (neuron0x2c45bb0()*2.51496);
}

double NNfunction_ns_chi01_cR::synapse0x2c72ca0() {
   return (neuron0x2c47680()*-0.713097);
}

double NNfunction_ns_chi01_cR::synapse0x2c72ce0() {
   return (neuron0x2c48450()*0.0632253);
}

double NNfunction_ns_chi01_cR::synapse0x2c72d20() {
   return (neuron0x2c48e20()*0.178041);
}

double NNfunction_ns_chi01_cR::synapse0x2c72d60() {
   return (neuron0x2c497f0()*0.262032);
}

double NNfunction_ns_chi01_cR::synapse0x2c72da0() {
   return (neuron0x2c4a2d0()*0.238414);
}

double NNfunction_ns_chi01_cR::synapse0x2c72de0() {
   return (neuron0x2c4aca0()*0.369934);
}

double NNfunction_ns_chi01_cR::synapse0x2c72e20() {
   return (neuron0x2c47d80()*0.0538748);
}

double NNfunction_ns_chi01_cR::synapse0x2c72e60() {
   return (neuron0x2c4c850()*0.267923);
}

double NNfunction_ns_chi01_cR::synapse0x2c72ea0() {
   return (neuron0x2c4d220()*1.29638);
}

double NNfunction_ns_chi01_cR::synapse0x2c72ee0() {
   return (neuron0x2c4dbf0()*-0.493992);
}

double NNfunction_ns_chi01_cR::synapse0x2c72f20() {
   return (neuron0x2c4e5c0()*0.125174);
}

double NNfunction_ns_chi01_cR::synapse0x2c729b0() {
   return (neuron0x2c503d0()*0.485029);
}

double NNfunction_ns_chi01_cR::synapse0x2c729f0() {
   return (neuron0x2c506b0()*-0.15776);
}

double NNfunction_ns_chi01_cR::synapse0x2c73070() {
   return (neuron0x2c51080()*-0.503639);
}

double NNfunction_ns_chi01_cR::synapse0x2c730b0() {
   return (neuron0x2c51a50()*0.925489);
}

double NNfunction_ns_chi01_cR::synapse0x2c730f0() {
   return (neuron0x2c52420()*-1.60173);
}

double NNfunction_ns_chi01_cR::synapse0x2c73130() {
   return (neuron0x2c52df0()*-1.15628);
}

double NNfunction_ns_chi01_cR::synapse0x2c73170() {
   return (neuron0x2c4b940()*-0.078351);
}

double NNfunction_ns_chi01_cR::synapse0x2c731b0() {
   return (neuron0x2c4c310()*-0.80999);
}

double NNfunction_ns_chi01_cR::synapse0x2c731f0() {
   return (neuron0x2c55b80()*-0.433267);
}

double NNfunction_ns_chi01_cR::synapse0x2c73230() {
   return (neuron0x2c56550()*-0.555179);
}

double NNfunction_ns_chi01_cR::synapse0x2c73270() {
   return (neuron0x2c56f20()*-0.423529);
}

double NNfunction_ns_chi01_cR::synapse0x2c732b0() {
   return (neuron0x2c578f0()*-0.561977);
}

double NNfunction_ns_chi01_cR::synapse0x2c732f0() {
   return (neuron0x2c582c0()*0.312652);
}

double NNfunction_ns_chi01_cR::synapse0x2c73330() {
   return (neuron0x2c58c90()*-1.41685);
}

double NNfunction_ns_chi01_cR::synapse0x2c73370() {
   return (neuron0x2c59660()*1.17944);
}

double NNfunction_ns_chi01_cR::synapse0x2c733b0() {
   return (neuron0x2c5a030()*-0.0146473);
}

double NNfunction_ns_chi01_cR::synapse0x2c72f60() {
   return (neuron0x2c500c0()*8.37457);
}

double NNfunction_ns_chi01_cR::synapse0x2c72fa0() {
   return (neuron0x2c5cc10()*0.243464);
}

double NNfunction_ns_chi01_cR::synapse0x2c72fe0() {
   return (neuron0x2c5d5e0()*-0.0766289);
}

double NNfunction_ns_chi01_cR::synapse0x2c73020() {
   return (neuron0x2c5dfb0()*-1.60607);
}

double NNfunction_ns_chi01_cR::synapse0x2c73600() {
   return (neuron0x2c5e980()*0.155126);
}

double NNfunction_ns_chi01_cR::synapse0x2c73640() {
   return (neuron0x2c5f350()*-7.17849);
}

double NNfunction_ns_chi01_cR::synapse0x2c73680() {
   return (neuron0x2c5fd20()*-0.301916);
}

double NNfunction_ns_chi01_cR::synapse0x2c736c0() {
   return (neuron0x2c606f0()*0.424541);
}

double NNfunction_ns_chi01_cR::synapse0x2c73700() {
   return (neuron0x2c610c0()*-0.0594027);
}

double NNfunction_ns_chi01_cR::synapse0x2c73740() {
   return (neuron0x2c61ca0()*0.238594);
}

double NNfunction_ns_chi01_cR::synapse0x2c73780() {
   return (neuron0x2c62670()*-0.343008);
}

double NNfunction_ns_chi01_cR::synapse0x2c737c0() {
   return (neuron0x2c534f0()*0.206157);
}

double NNfunction_ns_chi01_cR::synapse0x2c73800() {
   return (neuron0x2c53ec0()*0.595248);
}

double NNfunction_ns_chi01_cR::synapse0x2c73840() {
   return (neuron0x2c54890()*4.80548);
}

double NNfunction_ns_chi01_cR::synapse0x2c73880() {
   return (neuron0x2c66ed0()*0.675803);
}

double NNfunction_ns_chi01_cR::synapse0x2c738c0() {
   return (neuron0x2c67780()*-0.0013158);
}

double NNfunction_ns_chi01_cR::synapse0x2c73900() {
   return (neuron0x2c68150()*-0.969795);
}

double NNfunction_ns_chi01_cR::synapse0x2c73940() {
   return (neuron0x2c68b20()*-0.956574);
}

double NNfunction_ns_chi01_cR::synapse0x2c73ba0() {
   return (neuron0x2c6fd20()*-10.4729);
}

double NNfunction_ns_chi01_cR::synapse0x2c73be0() {
   return (neuron0x2c700c0()*2.43445);
}

double NNfunction_ns_chi01_cR::synapse0x2c73c20() {
   return (neuron0x2c70560()*5.58111);
}

double NNfunction_ns_chi01_cR::synapse0x2c73c60() {
   return (neuron0x2c716c0()*-1.70155);
}

double NNfunction_ns_chi01_cR::synapse0x2c73ca0() {
   return (neuron0x2c72820()*-7.77525);
}

