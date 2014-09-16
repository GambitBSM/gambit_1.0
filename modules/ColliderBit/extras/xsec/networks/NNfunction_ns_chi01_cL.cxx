#include "NNfunction_ns_chi01_cL.h"
#include <cmath>

double NNfunction_ns_chi01_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0241)/15.2012;
   input1 = (in1 - 1.10889)/1099.38;
   input2 = (in2 - 510.521)/555.181;
   input3 = (in3 - -8.63423)/796.128;
   input4 = (in4 - 1015.81)/940.204;
   input5 = (in5 - 852.228)/930.151;
   input6 = (in6 - 848.569)/924.551;
   input7 = (in7 - 873.777)/909.468;
   input8 = (in8 - 877.181)/959.789;
   input9 = (in9 - 860.495)/942.587;
   input10 = (in10 - 929.84)/947.296;
   input11 = (in11 - 699.73)/841.662;
   input12 = (in12 - 218.102)/180.921;
   input13 = (in13 - 484.757)/492.287;
   input14 = (in14 - 693.781)/785.151;
   input15 = (in15 - 694.658)/786.71;
   input16 = (in16 - 502.119)/531.508;
   input17 = (in17 - 735.073)/880.43;
   input18 = (in18 - 738.386)/882.345;
   input19 = (in19 - 771.825)/855.054;
   input20 = (in20 - -19.3936)/468.951;
   input21 = (in21 - -21.9708)/1115.87;
   input22 = (in22 - 9.68029)/1158.35;
   input23 = (in23 - -177.02)/596.922;
   switch(index) {
     case 0:
         return neuron0x3914ad0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.0241)/15.2012;
   input1 = (input[1] - 1.10889)/1099.38;
   input2 = (input[2] - 510.521)/555.181;
   input3 = (input[3] - -8.63423)/796.128;
   input4 = (input[4] - 1015.81)/940.204;
   input5 = (input[5] - 852.228)/930.151;
   input6 = (input[6] - 848.569)/924.551;
   input7 = (input[7] - 873.777)/909.468;
   input8 = (input[8] - 877.181)/959.789;
   input9 = (input[9] - 860.495)/942.587;
   input10 = (input[10] - 929.84)/947.296;
   input11 = (input[11] - 699.73)/841.662;
   input12 = (input[12] - 218.102)/180.921;
   input13 = (input[13] - 484.757)/492.287;
   input14 = (input[14] - 693.781)/785.151;
   input15 = (input[15] - 694.658)/786.71;
   input16 = (input[16] - 502.119)/531.508;
   input17 = (input[17] - 735.073)/880.43;
   input18 = (input[18] - 738.386)/882.345;
   input19 = (input[19] - 771.825)/855.054;
   input20 = (input[20] - -19.3936)/468.951;
   input21 = (input[21] - -21.9708)/1115.87;
   input22 = (input[22] - 9.68029)/1158.35;
   input23 = (input[23] - -177.02)/596.922;
   switch(index) {
     case 0:
         return neuron0x3914ad0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_cL::neuron0x38dfb40() {
   return input0;
}

double NNfunction_ns_chi01_cL::neuron0x38dfdf0() {
   return input1;
}

double NNfunction_ns_chi01_cL::neuron0x38e0130() {
   return input2;
}

double NNfunction_ns_chi01_cL::neuron0x38e0470() {
   return input3;
}

double NNfunction_ns_chi01_cL::neuron0x38e07b0() {
   return input4;
}

double NNfunction_ns_chi01_cL::neuron0x38e0af0() {
   return input5;
}

double NNfunction_ns_chi01_cL::neuron0x38e0e30() {
   return input6;
}

double NNfunction_ns_chi01_cL::neuron0x38e1170() {
   return input7;
}

double NNfunction_ns_chi01_cL::neuron0x38e14b0() {
   return input8;
}

double NNfunction_ns_chi01_cL::neuron0x38e17f0() {
   return input9;
}

double NNfunction_ns_chi01_cL::neuron0x38e1b30() {
   return input10;
}

double NNfunction_ns_chi01_cL::neuron0x38e1e70() {
   return input11;
}

double NNfunction_ns_chi01_cL::neuron0x38e21b0() {
   return input12;
}

double NNfunction_ns_chi01_cL::neuron0x38e24f0() {
   return input13;
}

double NNfunction_ns_chi01_cL::neuron0x38e2830() {
   return input14;
}

double NNfunction_ns_chi01_cL::neuron0x38e2b70() {
   return input15;
}

double NNfunction_ns_chi01_cL::neuron0x38e2eb0() {
   return input16;
}

double NNfunction_ns_chi01_cL::neuron0x38e3410() {
   return input17;
}

double NNfunction_ns_chi01_cL::neuron0x38e3750() {
   return input18;
}

double NNfunction_ns_chi01_cL::neuron0x38e3a90() {
   return input19;
}

double NNfunction_ns_chi01_cL::neuron0x38e3dd0() {
   return input20;
}

double NNfunction_ns_chi01_cL::neuron0x38e4110() {
   return input21;
}

double NNfunction_ns_chi01_cL::neuron0x38e4450() {
   return input22;
}

double NNfunction_ns_chi01_cL::neuron0x38e4790() {
   return input23;
}

double NNfunction_ns_chi01_cL::input0x38e4c00() {
   double input = -3.64564;
   input += synapse0x38e4f40();
   input += synapse0x38e4f80();
   input += synapse0x38e4fc0();
   input += synapse0x38e5000();
   input += synapse0x38e5040();
   input += synapse0x38e5080();
   input += synapse0x38e50c0();
   input += synapse0x38e5100();
   input += synapse0x38e5140();
   input += synapse0x38e5180();
   input += synapse0x38e51c0();
   input += synapse0x38e5200();
   input += synapse0x38e5240();
   input += synapse0x38e5280();
   input += synapse0x38e52c0();
   input += synapse0x38e5300();
   input += synapse0x38e4d90();
   input += synapse0x38e4dd0();
   input += synapse0x369bcc0();
   input += synapse0x369bd00();
   input += synapse0x38e5340();
   input += synapse0x38e5380();
   input += synapse0x38e53c0();
   input += synapse0x38e5400();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e4c00() {
   double input = input0x38e4c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e5440() {
   double input = -0.141495;
   input += synapse0x38e5780();
   input += synapse0x38e57c0();
   input += synapse0x38e5800();
   input += synapse0x38e5840();
   input += synapse0x38e5880();
   input += synapse0x38e58c0();
   input += synapse0x38e5900();
   input += synapse0x38e5940();
   input += synapse0x38e5980();
   input += synapse0x369bb10();
   input += synapse0x369bb50();
   input += synapse0x369bb90();
   input += synapse0x369bbd0();
   input += synapse0x38e5bd0();
   input += synapse0x38e5c10();
   input += synapse0x38e5c50();
   input += synapse0x38e55d0();
   input += synapse0x38e5610();
   input += synapse0x38e5da0();
   input += synapse0x38e5de0();
   input += synapse0x38e5e20();
   input += synapse0x38e5e60();
   input += synapse0x38e5ea0();
   input += synapse0x38e5ee0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e5440() {
   double input = input0x38e5440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e5f20() {
   double input = -1.16089;
   input += synapse0x38e6260();
   input += synapse0x38e62a0();
   input += synapse0x38e62e0();
   input += synapse0x38e6320();
   input += synapse0x38e6360();
   input += synapse0x38e63a0();
   input += synapse0x38e63e0();
   input += synapse0x38e6420();
   input += synapse0x38e6460();
   input += synapse0x38e64a0();
   input += synapse0x38e64e0();
   input += synapse0x38e6520();
   input += synapse0x38e6560();
   input += synapse0x38e65a0();
   input += synapse0x38e65e0();
   input += synapse0x38e6620();
   input += synapse0x38e60b0();
   input += synapse0x38e60f0();
   input += synapse0x369c3b0();
   input += synapse0x36a9c80();
   input += synapse0x36a9cc0();
   input += synapse0x38e8550();
   input += synapse0x38e8590();
   input += synapse0x38df880();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e5f20() {
   double input = input0x38e5f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e59c0() {
   double input = -0.181536;
   input += synapse0x38df950();
   input += synapse0x36aa500();
   input += synapse0x38e5b50();
   input += synapse0x38e5b90();
   input += synapse0x38e6770();
   input += synapse0x38e67b0();
   input += synapse0x38e67f0();
   input += synapse0x38e6830();
   input += synapse0x38e6870();
   input += synapse0x38e68b0();
   input += synapse0x38e68f0();
   input += synapse0x38e6930();
   input += synapse0x38e6970();
   input += synapse0x38e69b0();
   input += synapse0x38e69f0();
   input += synapse0x38e6a30();
   input += synapse0x38df8c0();
   input += synapse0x38df900();
   input += synapse0x38e6b80();
   input += synapse0x38e6bc0();
   input += synapse0x38e6c00();
   input += synapse0x38e6c40();
   input += synapse0x38e6c80();
   input += synapse0x38e6cc0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e59c0() {
   double input = input0x38e59c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e6d00() {
   double input = 3.64873;
   input += synapse0x38e7040();
   input += synapse0x38e7080();
   input += synapse0x38e70c0();
   input += synapse0x38e7100();
   input += synapse0x38e7140();
   input += synapse0x38e7180();
   input += synapse0x38e71c0();
   input += synapse0x38e7200();
   input += synapse0x38e7240();
   input += synapse0x38e7280();
   input += synapse0x38e72c0();
   input += synapse0x38e7300();
   input += synapse0x38e7340();
   input += synapse0x38e7380();
   input += synapse0x38e73c0();
   input += synapse0x38e7400();
   input += synapse0x38e7550();
   input += synapse0x38e6e90();
   input += synapse0x38e6ed0();
   input += synapse0x38e8690();
   input += synapse0x38e86d0();
   input += synapse0x38e8710();
   input += synapse0x38e8750();
   input += synapse0x38e8790();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e6d00() {
   double input = input0x38e6d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e87d0() {
   double input = 5.9994;
   input += synapse0x38e8b10();
   input += synapse0x38e8b50();
   input += synapse0x38e8b90();
   input += synapse0x38e8bd0();
   input += synapse0x38e8c10();
   input += synapse0x38e8c50();
   input += synapse0x38e8c90();
   input += synapse0x38e8cd0();
   input += synapse0x38e8d10();
   input += synapse0x36a9fd0();
   input += synapse0x36aa010();
   input += synapse0x36aa050();
   input += synapse0x36aa090();
   input += synapse0x36aa0d0();
   input += synapse0x36aa110();
   input += synapse0x36aa150();
   input += synapse0x38e8960();
   input += synapse0x38e89a0();
   input += synapse0x36aa2a0();
   input += synapse0x36aa2e0();
   input += synapse0x36aa320();
   input += synapse0x36aa360();
   input += synapse0x36aa3a0();
   input += synapse0x38e9560();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e87d0() {
   double input = input0x38e87d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e95a0() {
   double input = 0.226777;
   input += synapse0x38e98e0();
   input += synapse0x38e9920();
   input += synapse0x38e9960();
   input += synapse0x38e99a0();
   input += synapse0x38e99e0();
   input += synapse0x38e9a20();
   input += synapse0x38e9a60();
   input += synapse0x38e9aa0();
   input += synapse0x38e9ae0();
   input += synapse0x38e9b20();
   input += synapse0x38e9b60();
   input += synapse0x38e9ba0();
   input += synapse0x38e9be0();
   input += synapse0x38e9c20();
   input += synapse0x38e9c60();
   input += synapse0x38e9ca0();
   input += synapse0x38e9730();
   input += synapse0x38e9770();
   input += synapse0x38e9df0();
   input += synapse0x38e9e30();
   input += synapse0x38e9e70();
   input += synapse0x38e9eb0();
   input += synapse0x38e9ef0();
   input += synapse0x38e9f30();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e95a0() {
   double input = input0x38e95a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e9f70() {
   double input = -0.906431;
   input += synapse0x38ea2b0();
   input += synapse0x38ea2f0();
   input += synapse0x38ea330();
   input += synapse0x38ea370();
   input += synapse0x38ea3b0();
   input += synapse0x38ea3f0();
   input += synapse0x38ea430();
   input += synapse0x38ea470();
   input += synapse0x38ea4b0();
   input += synapse0x38ea4f0();
   input += synapse0x38ea530();
   input += synapse0x38ea570();
   input += synapse0x38ea5b0();
   input += synapse0x38ea5f0();
   input += synapse0x38ea630();
   input += synapse0x38ea670();
   input += synapse0x38ea100();
   input += synapse0x38ea140();
   input += synapse0x38ea7c0();
   input += synapse0x38ea800();
   input += synapse0x38ea840();
   input += synapse0x38ea880();
   input += synapse0x38ea8c0();
   input += synapse0x38ea900();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e9f70() {
   double input = input0x38e9f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ea940() {
   double input = 2.90892;
   input += synapse0x38e3300();
   input += synapse0x38e3340();
   input += synapse0x38e3380();
   input += synapse0x38e33c0();
   input += synapse0x38eae90();
   input += synapse0x38eaed0();
   input += synapse0x38eaf10();
   input += synapse0x38eaf50();
   input += synapse0x38eaf90();
   input += synapse0x38eafd0();
   input += synapse0x38eb010();
   input += synapse0x38eb050();
   input += synapse0x38eb090();
   input += synapse0x38eb0d0();
   input += synapse0x38eb110();
   input += synapse0x38eb150();
   input += synapse0x38eaad0();
   input += synapse0x38eab10();
   input += synapse0x38eb2a0();
   input += synapse0x38eb2e0();
   input += synapse0x38eb320();
   input += synapse0x38eb360();
   input += synapse0x38eb3a0();
   input += synapse0x38eb3e0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ea940() {
   double input = input0x38ea940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38eb420() {
   double input = -1.31054;
   input += synapse0x38eb760();
   input += synapse0x38eb7a0();
   input += synapse0x38eb7e0();
   input += synapse0x38eb820();
   input += synapse0x38eb860();
   input += synapse0x38eb8a0();
   input += synapse0x38eb8e0();
   input += synapse0x38eb920();
   input += synapse0x38eb960();
   input += synapse0x38eb9a0();
   input += synapse0x38eb9e0();
   input += synapse0x38eba20();
   input += synapse0x38eba60();
   input += synapse0x38ebaa0();
   input += synapse0x38ebae0();
   input += synapse0x38ebb20();
   input += synapse0x38eb5b0();
   input += synapse0x38eb5f0();
   input += synapse0x38ebc70();
   input += synapse0x38ebcb0();
   input += synapse0x38ebcf0();
   input += synapse0x38ebd30();
   input += synapse0x38ebd70();
   input += synapse0x38ebdb0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38eb420() {
   double input = input0x38eb420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ebdf0() {
   double input = 1.50146;
   input += synapse0x38ec130();
   input += synapse0x38ec170();
   input += synapse0x38ec1b0();
   input += synapse0x38ec1f0();
   input += synapse0x38ec230();
   input += synapse0x38ec270();
   input += synapse0x38ec2b0();
   input += synapse0x38ec2f0();
   input += synapse0x38ec330();
   input += synapse0x38ec370();
   input += synapse0x38ec3b0();
   input += synapse0x38ec3f0();
   input += synapse0x38ec430();
   input += synapse0x38ec470();
   input += synapse0x38ec4b0();
   input += synapse0x38ec4f0();
   input += synapse0x38ebf80();
   input += synapse0x38ebfc0();
   input += synapse0x38e8d50();
   input += synapse0x38e8d90();
   input += synapse0x38e8dd0();
   input += synapse0x38e8e10();
   input += synapse0x38e8e50();
   input += synapse0x38e8e90();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ebdf0() {
   double input = input0x38ebdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38e8ed0() {
   double input = -2.62861;
   input += synapse0x38e9210();
   input += synapse0x38e9250();
   input += synapse0x38e9290();
   input += synapse0x38e92d0();
   input += synapse0x38e9310();
   input += synapse0x38e9350();
   input += synapse0x38e9390();
   input += synapse0x38e93d0();
   input += synapse0x38e9410();
   input += synapse0x38e9450();
   input += synapse0x38e9490();
   input += synapse0x38e94d0();
   input += synapse0x38e9510();
   input += synapse0x38ed650();
   input += synapse0x38ed690();
   input += synapse0x38ed6d0();
   input += synapse0x38e9060();
   input += synapse0x38e90a0();
   input += synapse0x38ed820();
   input += synapse0x38ed860();
   input += synapse0x38ed8a0();
   input += synapse0x38ed8e0();
   input += synapse0x38ed920();
   input += synapse0x38ed960();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38e8ed0() {
   double input = input0x38e8ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ed9a0() {
   double input = -0.399071;
   input += synapse0x38edce0();
   input += synapse0x38edd20();
   input += synapse0x38edd60();
   input += synapse0x38edda0();
   input += synapse0x38edde0();
   input += synapse0x38ede20();
   input += synapse0x38ede60();
   input += synapse0x38edea0();
   input += synapse0x38edee0();
   input += synapse0x38edf20();
   input += synapse0x38edf60();
   input += synapse0x38edfa0();
   input += synapse0x38edfe0();
   input += synapse0x38ee020();
   input += synapse0x38ee060();
   input += synapse0x38ee0a0();
   input += synapse0x38edb30();
   input += synapse0x38edb70();
   input += synapse0x38ee1f0();
   input += synapse0x38ee230();
   input += synapse0x38ee270();
   input += synapse0x38ee2b0();
   input += synapse0x38ee2f0();
   input += synapse0x38ee330();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ed9a0() {
   double input = input0x38ed9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ee370() {
   double input = 0.221384;
   input += synapse0x38ee6b0();
   input += synapse0x38ee6f0();
   input += synapse0x38ee730();
   input += synapse0x38ee770();
   input += synapse0x38ee7b0();
   input += synapse0x38ee7f0();
   input += synapse0x38ee830();
   input += synapse0x38ee870();
   input += synapse0x38ee8b0();
   input += synapse0x38ee8f0();
   input += synapse0x38ee930();
   input += synapse0x38ee970();
   input += synapse0x38ee9b0();
   input += synapse0x38ee9f0();
   input += synapse0x38eea30();
   input += synapse0x38eea70();
   input += synapse0x38ee500();
   input += synapse0x38ee540();
   input += synapse0x38eebc0();
   input += synapse0x38eec00();
   input += synapse0x38eec40();
   input += synapse0x38eec80();
   input += synapse0x38eecc0();
   input += synapse0x38eed00();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ee370() {
   double input = input0x38ee370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38eed40() {
   double input = 0.168022;
   input += synapse0x38ef080();
   input += synapse0x38ef0c0();
   input += synapse0x38ef100();
   input += synapse0x38ef140();
   input += synapse0x38ef180();
   input += synapse0x38ef1c0();
   input += synapse0x38ef200();
   input += synapse0x38ef240();
   input += synapse0x38ef280();
   input += synapse0x38ef2c0();
   input += synapse0x38ef300();
   input += synapse0x38ef340();
   input += synapse0x38ef380();
   input += synapse0x38ef3c0();
   input += synapse0x38ef400();
   input += synapse0x38ef440();
   input += synapse0x38eeed0();
   input += synapse0x38eef10();
   input += synapse0x38ef590();
   input += synapse0x38ef5d0();
   input += synapse0x38ef610();
   input += synapse0x38ef650();
   input += synapse0x38ef690();
   input += synapse0x38ef6d0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38eed40() {
   double input = input0x38eed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ef710() {
   double input = 1.55587;
   input += synapse0x38efa50();
   input += synapse0x38dfcd0();
   input += synapse0x38dfd10();
   input += synapse0x38e0010();
   input += synapse0x38e0050();
   input += synapse0x38e0350();
   input += synapse0x38e0390();
   input += synapse0x38e0690();
   input += synapse0x38e06d0();
   input += synapse0x38e09d0();
   input += synapse0x38e0a10();
   input += synapse0x38e0d10();
   input += synapse0x38e0d50();
   input += synapse0x38e1050();
   input += synapse0x38e1090();
   input += synapse0x38e1390();
   input += synapse0x38e13d0();
   input += synapse0x38e16d0();
   input += synapse0x38e1710();
   input += synapse0x38e1a10();
   input += synapse0x38e1a50();
   input += synapse0x38e1d50();
   input += synapse0x38e1d90();
   input += synapse0x38e2090();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ef710() {
   double input = input0x38ef710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f1520() {
   double input = -0.792507;
   input += synapse0x38e20d0();
   input += synapse0x38e2d90();
   input += synapse0x38e2dd0();
   input += synapse0x38ef8a0();
   input += synapse0x38ef8e0();
   input += synapse0x38e30d0();
   input += synapse0x38e3110();
   input += synapse0x38e3630();
   input += synapse0x38e3670();
   input += synapse0x38e3970();
   input += synapse0x38e39b0();
   input += synapse0x38e3cb0();
   input += synapse0x38e3cf0();
   input += synapse0x38e3ff0();
   input += synapse0x38e4030();
   input += synapse0x38e4330();
   input += synapse0x38e4370();
   input += synapse0x38e4670();
   input += synapse0x38e46b0();
   input += synapse0x38e49b0();
   input += synapse0x38e49f0();
   input += synapse0x38e23d0();
   input += synapse0x38e2410();
   input += synapse0x38f17c0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f1520() {
   double input = input0x38f1520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f1800() {
   double input = 0.959056;
   input += synapse0x38f1b40();
   input += synapse0x38f1b80();
   input += synapse0x38f1bc0();
   input += synapse0x38f1c00();
   input += synapse0x38f1c40();
   input += synapse0x38f1c80();
   input += synapse0x38f1cc0();
   input += synapse0x38f1d00();
   input += synapse0x38f1d40();
   input += synapse0x38f1d80();
   input += synapse0x38f1dc0();
   input += synapse0x38f1e00();
   input += synapse0x38f1e40();
   input += synapse0x38f1e80();
   input += synapse0x38f1ec0();
   input += synapse0x38f1f00();
   input += synapse0x38f1990();
   input += synapse0x38f19d0();
   input += synapse0x38f2050();
   input += synapse0x38f2090();
   input += synapse0x38f20d0();
   input += synapse0x38f2110();
   input += synapse0x38f2150();
   input += synapse0x38f2190();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f1800() {
   double input = input0x38f1800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f21d0() {
   double input = 8.07685;
   input += synapse0x38f2510();
   input += synapse0x38f2550();
   input += synapse0x38f2590();
   input += synapse0x38f25d0();
   input += synapse0x38f2610();
   input += synapse0x38f2650();
   input += synapse0x38f2690();
   input += synapse0x38f26d0();
   input += synapse0x38f2710();
   input += synapse0x38f2750();
   input += synapse0x38f2790();
   input += synapse0x38f27d0();
   input += synapse0x38f2810();
   input += synapse0x38f2850();
   input += synapse0x38f2890();
   input += synapse0x38f28d0();
   input += synapse0x38f2360();
   input += synapse0x38f23a0();
   input += synapse0x38f2a20();
   input += synapse0x38f2a60();
   input += synapse0x38f2aa0();
   input += synapse0x38f2ae0();
   input += synapse0x38f2b20();
   input += synapse0x38f2b60();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f21d0() {
   double input = input0x38f21d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f2ba0() {
   double input = -0.736988;
   input += synapse0x38f2ee0();
   input += synapse0x38f2f20();
   input += synapse0x38f2f60();
   input += synapse0x38f2fa0();
   input += synapse0x38f2fe0();
   input += synapse0x38f3020();
   input += synapse0x38f3060();
   input += synapse0x38f30a0();
   input += synapse0x38f30e0();
   input += synapse0x38f3120();
   input += synapse0x38f3160();
   input += synapse0x38f31a0();
   input += synapse0x38f31e0();
   input += synapse0x38f3220();
   input += synapse0x38f3260();
   input += synapse0x38f32a0();
   input += synapse0x38f2d30();
   input += synapse0x38f2d70();
   input += synapse0x38f33f0();
   input += synapse0x38f3430();
   input += synapse0x38f3470();
   input += synapse0x38f34b0();
   input += synapse0x38f34f0();
   input += synapse0x38f3530();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f2ba0() {
   double input = input0x38f2ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f3570() {
   double input = -1.48379;
   input += synapse0x38f38b0();
   input += synapse0x38f38f0();
   input += synapse0x38f3930();
   input += synapse0x38f3970();
   input += synapse0x38f39b0();
   input += synapse0x38f39f0();
   input += synapse0x38f3a30();
   input += synapse0x38f3a70();
   input += synapse0x38f3ab0();
   input += synapse0x38f3af0();
   input += synapse0x38f3b30();
   input += synapse0x38f3b70();
   input += synapse0x38f3bb0();
   input += synapse0x38f3bf0();
   input += synapse0x38f3c30();
   input += synapse0x38f3c70();
   input += synapse0x38f3700();
   input += synapse0x38f3740();
   input += synapse0x38f3dc0();
   input += synapse0x38f3e00();
   input += synapse0x38f3e40();
   input += synapse0x38f3e80();
   input += synapse0x38f3ec0();
   input += synapse0x38f3f00();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f3570() {
   double input = input0x38f3570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f3f40() {
   double input = 1.76683;
   input += synapse0x38f4280();
   input += synapse0x38f42c0();
   input += synapse0x38f4300();
   input += synapse0x38f4340();
   input += synapse0x38f4380();
   input += synapse0x38f43c0();
   input += synapse0x38f4400();
   input += synapse0x38f4440();
   input += synapse0x38f4480();
   input += synapse0x38ec640();
   input += synapse0x38ec680();
   input += synapse0x38ec6c0();
   input += synapse0x38ec700();
   input += synapse0x38ec740();
   input += synapse0x38ec780();
   input += synapse0x38ec7c0();
   input += synapse0x38f40d0();
   input += synapse0x38f4110();
   input += synapse0x38ec910();
   input += synapse0x38ec950();
   input += synapse0x38ec990();
   input += synapse0x38ec9d0();
   input += synapse0x38eca10();
   input += synapse0x38eca50();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f3f40() {
   double input = input0x38f3f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38eca90() {
   double input = -0.478948;
   input += synapse0x38ecdd0();
   input += synapse0x38ece10();
   input += synapse0x38ece50();
   input += synapse0x38ece90();
   input += synapse0x38eced0();
   input += synapse0x38ecf10();
   input += synapse0x38ecf50();
   input += synapse0x38ecf90();
   input += synapse0x38ecfd0();
   input += synapse0x38ed010();
   input += synapse0x38ed050();
   input += synapse0x38ed090();
   input += synapse0x38ed0d0();
   input += synapse0x38ed110();
   input += synapse0x38ed150();
   input += synapse0x38ed190();
   input += synapse0x38ecc20();
   input += synapse0x38ecc60();
   input += synapse0x38ed2e0();
   input += synapse0x38ed320();
   input += synapse0x38ed360();
   input += synapse0x38ed3a0();
   input += synapse0x38ed3e0();
   input += synapse0x38ed420();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38eca90() {
   double input = input0x38eca90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ed460() {
   double input = -0.686925;
   input += synapse0x38ed5f0();
   input += synapse0x38f6680();
   input += synapse0x38f66c0();
   input += synapse0x38f6700();
   input += synapse0x38f6740();
   input += synapse0x38f6780();
   input += synapse0x38f67c0();
   input += synapse0x38f6800();
   input += synapse0x38f6840();
   input += synapse0x38f6880();
   input += synapse0x38f68c0();
   input += synapse0x38f6900();
   input += synapse0x38f6940();
   input += synapse0x38f6980();
   input += synapse0x38f69c0();
   input += synapse0x38f6a00();
   input += synapse0x38f64d0();
   input += synapse0x38f6510();
   input += synapse0x38f6b50();
   input += synapse0x38f6b90();
   input += synapse0x38f6bd0();
   input += synapse0x38f6c10();
   input += synapse0x38f6c50();
   input += synapse0x38f6c90();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ed460() {
   double input = input0x38ed460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f6cd0() {
   double input = 0.348462;
   input += synapse0x38f7010();
   input += synapse0x38f7050();
   input += synapse0x38f7090();
   input += synapse0x38f70d0();
   input += synapse0x38f7110();
   input += synapse0x38f7150();
   input += synapse0x38f7190();
   input += synapse0x38f71d0();
   input += synapse0x38f7210();
   input += synapse0x38f7250();
   input += synapse0x38f7290();
   input += synapse0x38f72d0();
   input += synapse0x38f7310();
   input += synapse0x38f7350();
   input += synapse0x38f7390();
   input += synapse0x38f73d0();
   input += synapse0x38f6e60();
   input += synapse0x38f6ea0();
   input += synapse0x38f7520();
   input += synapse0x38f7560();
   input += synapse0x38f75a0();
   input += synapse0x38f75e0();
   input += synapse0x38f7620();
   input += synapse0x38f7660();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f6cd0() {
   double input = input0x38f6cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f76a0() {
   double input = -3.6573;
   input += synapse0x38f79e0();
   input += synapse0x38f7a20();
   input += synapse0x38f7a60();
   input += synapse0x38f7aa0();
   input += synapse0x38f7ae0();
   input += synapse0x38f7b20();
   input += synapse0x38f7b60();
   input += synapse0x38f7ba0();
   input += synapse0x38f7be0();
   input += synapse0x38f7c20();
   input += synapse0x38f7c60();
   input += synapse0x38f7ca0();
   input += synapse0x38f7ce0();
   input += synapse0x38f7d20();
   input += synapse0x38f7d60();
   input += synapse0x38f7da0();
   input += synapse0x38f7830();
   input += synapse0x38f7870();
   input += synapse0x38f7ef0();
   input += synapse0x38f7f30();
   input += synapse0x38f7f70();
   input += synapse0x38f7fb0();
   input += synapse0x38f7ff0();
   input += synapse0x38f8030();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f76a0() {
   double input = input0x38f76a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f8070() {
   double input = -0.153678;
   input += synapse0x38f83b0();
   input += synapse0x38f83f0();
   input += synapse0x38f8430();
   input += synapse0x38f8470();
   input += synapse0x38f84b0();
   input += synapse0x38f84f0();
   input += synapse0x38f8530();
   input += synapse0x38f8570();
   input += synapse0x38f85b0();
   input += synapse0x38f85f0();
   input += synapse0x38f8630();
   input += synapse0x38f8670();
   input += synapse0x38f86b0();
   input += synapse0x38f86f0();
   input += synapse0x38f8730();
   input += synapse0x38f8770();
   input += synapse0x38f8200();
   input += synapse0x38f8240();
   input += synapse0x38f88c0();
   input += synapse0x38f8900();
   input += synapse0x38f8940();
   input += synapse0x38f8980();
   input += synapse0x38f89c0();
   input += synapse0x38f8a00();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f8070() {
   double input = input0x38f8070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f8a40() {
   double input = -1.22428;
   input += synapse0x38f8d80();
   input += synapse0x38f8dc0();
   input += synapse0x38f8e00();
   input += synapse0x38f8e40();
   input += synapse0x38f8e80();
   input += synapse0x38f8ec0();
   input += synapse0x38f8f00();
   input += synapse0x38f8f40();
   input += synapse0x38f8f80();
   input += synapse0x38f8fc0();
   input += synapse0x38f9000();
   input += synapse0x38f9040();
   input += synapse0x38f9080();
   input += synapse0x38f90c0();
   input += synapse0x38f9100();
   input += synapse0x38f9140();
   input += synapse0x38f8bd0();
   input += synapse0x38f8c10();
   input += synapse0x38f9290();
   input += synapse0x38f92d0();
   input += synapse0x38f9310();
   input += synapse0x38f9350();
   input += synapse0x38f9390();
   input += synapse0x38f93d0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f8a40() {
   double input = input0x38f8a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f9410() {
   double input = 0.995626;
   input += synapse0x38f9750();
   input += synapse0x38f9790();
   input += synapse0x38f97d0();
   input += synapse0x38f9810();
   input += synapse0x38f9850();
   input += synapse0x38f9890();
   input += synapse0x38f98d0();
   input += synapse0x38f9910();
   input += synapse0x38f9950();
   input += synapse0x38f9990();
   input += synapse0x38f99d0();
   input += synapse0x38f9a10();
   input += synapse0x38f9a50();
   input += synapse0x38f9a90();
   input += synapse0x38f9ad0();
   input += synapse0x38f9b10();
   input += synapse0x38f95a0();
   input += synapse0x38f95e0();
   input += synapse0x38f9c60();
   input += synapse0x38f9ca0();
   input += synapse0x38f9ce0();
   input += synapse0x38f9d20();
   input += synapse0x38f9d60();
   input += synapse0x38f9da0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f9410() {
   double input = input0x38f9410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f9de0() {
   double input = 0.588501;
   input += synapse0x38fa120();
   input += synapse0x38fa160();
   input += synapse0x38fa1a0();
   input += synapse0x38fa1e0();
   input += synapse0x38fa220();
   input += synapse0x38fa260();
   input += synapse0x38fa2a0();
   input += synapse0x38fa2e0();
   input += synapse0x38fa320();
   input += synapse0x38fa360();
   input += synapse0x38fa3a0();
   input += synapse0x38fa3e0();
   input += synapse0x38fa420();
   input += synapse0x38fa460();
   input += synapse0x38fa4a0();
   input += synapse0x38fa4e0();
   input += synapse0x38f9f70();
   input += synapse0x38f9fb0();
   input += synapse0x38fa630();
   input += synapse0x38fa670();
   input += synapse0x38fa6b0();
   input += synapse0x38fa6f0();
   input += synapse0x38fa730();
   input += synapse0x38fa770();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f9de0() {
   double input = input0x38f9de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38fa7b0() {
   double input = -0.254356;
   input += synapse0x38faaf0();
   input += synapse0x38fab30();
   input += synapse0x38fab70();
   input += synapse0x38fabb0();
   input += synapse0x38fabf0();
   input += synapse0x38fac30();
   input += synapse0x38fac70();
   input += synapse0x38facb0();
   input += synapse0x38facf0();
   input += synapse0x38fad30();
   input += synapse0x38fad70();
   input += synapse0x38fadb0();
   input += synapse0x38fadf0();
   input += synapse0x38fae30();
   input += synapse0x38fae70();
   input += synapse0x38faeb0();
   input += synapse0x38fa940();
   input += synapse0x38fa980();
   input += synapse0x38fb000();
   input += synapse0x38fb040();
   input += synapse0x38fb080();
   input += synapse0x38fb0c0();
   input += synapse0x38fb100();
   input += synapse0x38fb140();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38fa7b0() {
   double input = input0x38fa7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38fb180() {
   double input = -0.786329;
   input += synapse0x38fb4c0();
   input += synapse0x38efa90();
   input += synapse0x38efad0();
   input += synapse0x38efb10();
   input += synapse0x38efd60();
   input += synapse0x38efda0();
   input += synapse0x38efde0();
   input += synapse0x38f0030();
   input += synapse0x38f0070();
   input += synapse0x38f02c0();
   input += synapse0x38f0300();
   input += synapse0x38f0340();
   input += synapse0x38f0590();
   input += synapse0x38f05d0();
   input += synapse0x38f0820();
   input += synapse0x38f0860();
   input += synapse0x38fb310();
   input += synapse0x38fb350();
   input += synapse0x38f09b0();
   input += synapse0x38f0ec0();
   input += synapse0x38f0f00();
   input += synapse0x38f0f40();
   input += synapse0x38f1190();
   input += synapse0x38f11d0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38fb180() {
   double input = input0x38fb180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f1210() {
   double input = -2.0196;
   input += synapse0x38f0a80();
   input += synapse0x38f0ac0();
   input += synapse0x38f0b00();
   input += synapse0x38f0b40();
   input += synapse0x38f14c0();
   input += synapse0x38fd810();
   input += synapse0x38fd850();
   input += synapse0x38fd890();
   input += synapse0x38fd8d0();
   input += synapse0x38fd910();
   input += synapse0x38fd950();
   input += synapse0x38fd990();
   input += synapse0x38fd9d0();
   input += synapse0x38fda10();
   input += synapse0x38fda50();
   input += synapse0x38fda90();
   input += synapse0x38f13a0();
   input += synapse0x38f13e0();
   input += synapse0x38fdbe0();
   input += synapse0x38fdc20();
   input += synapse0x38fdc60();
   input += synapse0x38fdca0();
   input += synapse0x38fdce0();
   input += synapse0x38fdd20();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f1210() {
   double input = input0x38f1210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38fdd60() {
   double input = 0.107357;
   input += synapse0x38fe0a0();
   input += synapse0x38fe0e0();
   input += synapse0x38fe120();
   input += synapse0x38fe160();
   input += synapse0x38fe1a0();
   input += synapse0x38fe1e0();
   input += synapse0x38fe220();
   input += synapse0x38fe260();
   input += synapse0x38fe2a0();
   input += synapse0x38fe2e0();
   input += synapse0x38fe320();
   input += synapse0x38fe360();
   input += synapse0x38fe3a0();
   input += synapse0x38fe3e0();
   input += synapse0x38fe420();
   input += synapse0x38fe460();
   input += synapse0x38fdef0();
   input += synapse0x38fdf30();
   input += synapse0x38fe5b0();
   input += synapse0x38fe5f0();
   input += synapse0x38fe630();
   input += synapse0x38fe670();
   input += synapse0x38fe6b0();
   input += synapse0x38fe6f0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38fdd60() {
   double input = input0x38fdd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38fe730() {
   double input = -1.47217;
   input += synapse0x38fea70();
   input += synapse0x38feab0();
   input += synapse0x38feaf0();
   input += synapse0x38feb30();
   input += synapse0x38feb70();
   input += synapse0x38febb0();
   input += synapse0x38febf0();
   input += synapse0x38fec30();
   input += synapse0x38fec70();
   input += synapse0x38fecb0();
   input += synapse0x38fecf0();
   input += synapse0x38fed30();
   input += synapse0x38fed70();
   input += synapse0x38fedb0();
   input += synapse0x38fedf0();
   input += synapse0x38fee30();
   input += synapse0x38fe8c0();
   input += synapse0x38fe900();
   input += synapse0x38fef80();
   input += synapse0x38fefc0();
   input += synapse0x38ff000();
   input += synapse0x38ff040();
   input += synapse0x38ff080();
   input += synapse0x38ff0c0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38fe730() {
   double input = input0x38fe730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ff100() {
   double input = 1.77587;
   input += synapse0x38ff440();
   input += synapse0x38ff480();
   input += synapse0x38ff4c0();
   input += synapse0x38ff500();
   input += synapse0x38ff540();
   input += synapse0x38ff580();
   input += synapse0x38ff5c0();
   input += synapse0x38ff600();
   input += synapse0x38ff640();
   input += synapse0x38ff680();
   input += synapse0x38ff6c0();
   input += synapse0x38ff700();
   input += synapse0x38ff740();
   input += synapse0x38ff780();
   input += synapse0x38ff7c0();
   input += synapse0x38ff800();
   input += synapse0x38ff290();
   input += synapse0x38ff2d0();
   input += synapse0x38ff950();
   input += synapse0x38ff990();
   input += synapse0x38ff9d0();
   input += synapse0x38ffa10();
   input += synapse0x38ffa50();
   input += synapse0x38ffa90();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ff100() {
   double input = input0x38ff100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38ffad0() {
   double input = 0.31439;
   input += synapse0x38ffe10();
   input += synapse0x38ffe50();
   input += synapse0x38ffe90();
   input += synapse0x38ffed0();
   input += synapse0x38fff10();
   input += synapse0x38fff50();
   input += synapse0x38fff90();
   input += synapse0x38fffd0();
   input += synapse0x3900010();
   input += synapse0x3900050();
   input += synapse0x3900090();
   input += synapse0x39000d0();
   input += synapse0x3900110();
   input += synapse0x3900150();
   input += synapse0x3900190();
   input += synapse0x39001d0();
   input += synapse0x38ffc60();
   input += synapse0x38ffca0();
   input += synapse0x3900320();
   input += synapse0x3900360();
   input += synapse0x39003a0();
   input += synapse0x39003e0();
   input += synapse0x3900420();
   input += synapse0x3900460();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38ffad0() {
   double input = input0x38ffad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x39004a0() {
   double input = -0.357735;
   input += synapse0x39007e0();
   input += synapse0x3900820();
   input += synapse0x3900860();
   input += synapse0x39008a0();
   input += synapse0x39008e0();
   input += synapse0x3900920();
   input += synapse0x3900960();
   input += synapse0x39009a0();
   input += synapse0x39009e0();
   input += synapse0x3900a20();
   input += synapse0x3900a60();
   input += synapse0x3900aa0();
   input += synapse0x3900ae0();
   input += synapse0x3900b20();
   input += synapse0x3900b60();
   input += synapse0x3900ba0();
   input += synapse0x3900630();
   input += synapse0x3900670();
   input += synapse0x3900cf0();
   input += synapse0x3900d30();
   input += synapse0x3900d70();
   input += synapse0x3900db0();
   input += synapse0x3900df0();
   input += synapse0x3900e30();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x39004a0() {
   double input = input0x39004a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3900e70() {
   double input = 9.37991;
   input += synapse0x39011b0();
   input += synapse0x39011f0();
   input += synapse0x3901230();
   input += synapse0x3901270();
   input += synapse0x39012b0();
   input += synapse0x39012f0();
   input += synapse0x3901330();
   input += synapse0x3901370();
   input += synapse0x39013b0();
   input += synapse0x39013f0();
   input += synapse0x3901430();
   input += synapse0x3901470();
   input += synapse0x39014b0();
   input += synapse0x39014f0();
   input += synapse0x3901530();
   input += synapse0x3901570();
   input += synapse0x3901000();
   input += synapse0x3901040();
   input += synapse0x39016c0();
   input += synapse0x3901700();
   input += synapse0x3901740();
   input += synapse0x3901780();
   input += synapse0x39017c0();
   input += synapse0x3901800();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3900e70() {
   double input = input0x3900e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3901840() {
   double input = 0.656367;
   input += synapse0x3901b80();
   input += synapse0x3901bc0();
   input += synapse0x3901c00();
   input += synapse0x3901c40();
   input += synapse0x3901c80();
   input += synapse0x3901cc0();
   input += synapse0x3901d00();
   input += synapse0x3901d40();
   input += synapse0x3901d80();
   input += synapse0x3901dc0();
   input += synapse0x3901e00();
   input += synapse0x3901e40();
   input += synapse0x3901e80();
   input += synapse0x3901ec0();
   input += synapse0x3901f00();
   input += synapse0x3901f40();
   input += synapse0x39019d0();
   input += synapse0x3901a10();
   input += synapse0x3902090();
   input += synapse0x39020d0();
   input += synapse0x3902110();
   input += synapse0x3902150();
   input += synapse0x3902190();
   input += synapse0x39021d0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3901840() {
   double input = input0x3901840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3902210() {
   double input = 1.57414;
   input += synapse0x38eac80();
   input += synapse0x38eacc0();
   input += synapse0x38ead00();
   input += synapse0x38ead40();
   input += synapse0x38ead80();
   input += synapse0x38eadc0();
   input += synapse0x38eae00();
   input += synapse0x38eae40();
   input += synapse0x3902960();
   input += synapse0x39029a0();
   input += synapse0x39029e0();
   input += synapse0x3902a20();
   input += synapse0x3902a60();
   input += synapse0x3902aa0();
   input += synapse0x3902ae0();
   input += synapse0x3902b20();
   input += synapse0x39023a0();
   input += synapse0x39023e0();
   input += synapse0x3902c70();
   input += synapse0x3902cb0();
   input += synapse0x3902cf0();
   input += synapse0x3902d30();
   input += synapse0x3902d70();
   input += synapse0x3902db0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3902210() {
   double input = input0x3902210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3902df0() {
   double input = 1.20723;
   input += synapse0x3903130();
   input += synapse0x3903170();
   input += synapse0x39031b0();
   input += synapse0x39031f0();
   input += synapse0x3903230();
   input += synapse0x3903270();
   input += synapse0x39032b0();
   input += synapse0x39032f0();
   input += synapse0x3903330();
   input += synapse0x3903370();
   input += synapse0x39033b0();
   input += synapse0x39033f0();
   input += synapse0x3903430();
   input += synapse0x3903470();
   input += synapse0x39034b0();
   input += synapse0x39034f0();
   input += synapse0x3902f80();
   input += synapse0x3902fc0();
   input += synapse0x3903640();
   input += synapse0x3903680();
   input += synapse0x39036c0();
   input += synapse0x3903700();
   input += synapse0x3903740();
   input += synapse0x3903780();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3902df0() {
   double input = input0x3902df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x39037c0() {
   double input = 9.13433;
   input += synapse0x3903b00();
   input += synapse0x3903b40();
   input += synapse0x3903b80();
   input += synapse0x3903bc0();
   input += synapse0x3903c00();
   input += synapse0x3903c40();
   input += synapse0x3903c80();
   input += synapse0x3903cc0();
   input += synapse0x3903d00();
   input += synapse0x3903d40();
   input += synapse0x3903d80();
   input += synapse0x3903dc0();
   input += synapse0x3903e00();
   input += synapse0x3903e40();
   input += synapse0x3903e80();
   input += synapse0x3903ec0();
   input += synapse0x3903950();
   input += synapse0x3903990();
   input += synapse0x38f44c0();
   input += synapse0x38f4500();
   input += synapse0x38f4540();
   input += synapse0x38f4580();
   input += synapse0x38f45c0();
   input += synapse0x38f4600();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x39037c0() {
   double input = input0x39037c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f4640() {
   double input = -5.05374;
   input += synapse0x38f4980();
   input += synapse0x38f49c0();
   input += synapse0x38f4a00();
   input += synapse0x38f4a40();
   input += synapse0x38f4a80();
   input += synapse0x38f4ac0();
   input += synapse0x38f4b00();
   input += synapse0x38f4b40();
   input += synapse0x38f4b80();
   input += synapse0x38f4bc0();
   input += synapse0x38f4c00();
   input += synapse0x38f4c40();
   input += synapse0x38f4c80();
   input += synapse0x38f4cc0();
   input += synapse0x38f4d00();
   input += synapse0x38f4d40();
   input += synapse0x38f47d0();
   input += synapse0x38f4810();
   input += synapse0x38f4e90();
   input += synapse0x38f4ed0();
   input += synapse0x38f4f10();
   input += synapse0x38f4f50();
   input += synapse0x38f4f90();
   input += synapse0x38f4fd0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f4640() {
   double input = input0x38f4640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f5010() {
   double input = 0.80148;
   input += synapse0x38f5350();
   input += synapse0x38f5390();
   input += synapse0x38f53d0();
   input += synapse0x38f5410();
   input += synapse0x38f5450();
   input += synapse0x38f5490();
   input += synapse0x38f54d0();
   input += synapse0x38f5510();
   input += synapse0x38f5550();
   input += synapse0x38f5590();
   input += synapse0x38f55d0();
   input += synapse0x38f5610();
   input += synapse0x38f5650();
   input += synapse0x38f5690();
   input += synapse0x38f56d0();
   input += synapse0x38f5710();
   input += synapse0x38f51a0();
   input += synapse0x38f51e0();
   input += synapse0x38f5860();
   input += synapse0x38f58a0();
   input += synapse0x38f58e0();
   input += synapse0x38f5920();
   input += synapse0x38f5960();
   input += synapse0x38f59a0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f5010() {
   double input = input0x38f5010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x38f59e0() {
   double input = 1.25204;
   input += synapse0x38f5d20();
   input += synapse0x38f5d60();
   input += synapse0x38f5da0();
   input += synapse0x38f5de0();
   input += synapse0x38f5e20();
   input += synapse0x38f5e60();
   input += synapse0x38f5ea0();
   input += synapse0x38f5ee0();
   input += synapse0x38f5f20();
   input += synapse0x38f5f60();
   input += synapse0x38f5fa0();
   input += synapse0x38f5fe0();
   input += synapse0x38f6020();
   input += synapse0x38f6060();
   input += synapse0x38f60a0();
   input += synapse0x38f60e0();
   input += synapse0x38f5b70();
   input += synapse0x38f5bb0();
   input += synapse0x38f6230();
   input += synapse0x38f6270();
   input += synapse0x38f62b0();
   input += synapse0x38f62f0();
   input += synapse0x38f6330();
   input += synapse0x38f6370();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x38f59e0() {
   double input = input0x38f59e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3908020() {
   double input = -0.216757;
   input += synapse0x3908240();
   input += synapse0x3908280();
   input += synapse0x39082c0();
   input += synapse0x3908300();
   input += synapse0x3908340();
   input += synapse0x3908380();
   input += synapse0x39083c0();
   input += synapse0x3908400();
   input += synapse0x3908440();
   input += synapse0x3908480();
   input += synapse0x39084c0();
   input += synapse0x3908500();
   input += synapse0x3908540();
   input += synapse0x3908580();
   input += synapse0x39085c0();
   input += synapse0x3908600();
   input += synapse0x38f63b0();
   input += synapse0x38f63f0();
   input += synapse0x3908750();
   input += synapse0x3908790();
   input += synapse0x39087d0();
   input += synapse0x3908810();
   input += synapse0x3908850();
   input += synapse0x3908890();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3908020() {
   double input = input0x3908020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x39088d0() {
   double input = 0.0119252;
   input += synapse0x3908c10();
   input += synapse0x3908c50();
   input += synapse0x3908c90();
   input += synapse0x3908cd0();
   input += synapse0x3908d10();
   input += synapse0x3908d50();
   input += synapse0x3908d90();
   input += synapse0x3908dd0();
   input += synapse0x3908e10();
   input += synapse0x3908e50();
   input += synapse0x3908e90();
   input += synapse0x3908ed0();
   input += synapse0x3908f10();
   input += synapse0x3908f50();
   input += synapse0x3908f90();
   input += synapse0x3908fd0();
   input += synapse0x3908a60();
   input += synapse0x3908aa0();
   input += synapse0x3909120();
   input += synapse0x3909160();
   input += synapse0x39091a0();
   input += synapse0x39091e0();
   input += synapse0x3909220();
   input += synapse0x3909260();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x39088d0() {
   double input = input0x39088d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x39092a0() {
   double input = 0.866167;
   input += synapse0x39095e0();
   input += synapse0x3909620();
   input += synapse0x3909660();
   input += synapse0x39096a0();
   input += synapse0x39096e0();
   input += synapse0x3909720();
   input += synapse0x3909760();
   input += synapse0x39097a0();
   input += synapse0x39097e0();
   input += synapse0x3909820();
   input += synapse0x3909860();
   input += synapse0x39098a0();
   input += synapse0x39098e0();
   input += synapse0x3909920();
   input += synapse0x3909960();
   input += synapse0x39099a0();
   input += synapse0x3909430();
   input += synapse0x3909470();
   input += synapse0x3909af0();
   input += synapse0x3909b30();
   input += synapse0x3909b70();
   input += synapse0x3909bb0();
   input += synapse0x3909bf0();
   input += synapse0x3909c30();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x39092a0() {
   double input = input0x39092a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3909c70() {
   double input = 0.057469;
   input += synapse0x3909fb0();
   input += synapse0x3909ff0();
   input += synapse0x390a030();
   input += synapse0x390a070();
   input += synapse0x390a0b0();
   input += synapse0x390a0f0();
   input += synapse0x390a130();
   input += synapse0x390a170();
   input += synapse0x390a1b0();
   input += synapse0x390a1f0();
   input += synapse0x390a230();
   input += synapse0x390a270();
   input += synapse0x390a2b0();
   input += synapse0x390a2f0();
   input += synapse0x390a330();
   input += synapse0x390a370();
   input += synapse0x3909e00();
   input += synapse0x3909e40();
   input += synapse0x390a4c0();
   input += synapse0x390a500();
   input += synapse0x390a540();
   input += synapse0x390a580();
   input += synapse0x390a5c0();
   input += synapse0x390a600();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3909c70() {
   double input = input0x3909c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3910e70() {
   double input = 1.12241;
   input += synapse0x36aa470();
   input += synapse0x36aa4b0();
   input += synapse0x38e6fb0();
   input += synapse0x38e6ff0();
   input += synapse0x38e8a80();
   input += synapse0x38e8ac0();
   input += synapse0x38e9850();
   input += synapse0x38e9890();
   input += synapse0x38ea220();
   input += synapse0x38ea260();
   input += synapse0x38eabf0();
   input += synapse0x38eac30();
   input += synapse0x38eb6d0();
   input += synapse0x38eb710();
   input += synapse0x38ec0a0();
   input += synapse0x38ec0e0();
   input += synapse0x38e9180();
   input += synapse0x38e91c0();
   input += synapse0x38edc50();
   input += synapse0x38edc90();
   input += synapse0x38ee620();
   input += synapse0x38ee660();
   input += synapse0x38eeff0();
   input += synapse0x38ef030();
   input += synapse0x38ef9c0();
   input += synapse0x38efa00();
   input += synapse0x38e2a50();
   input += synapse0x38e2a90();
   input += synapse0x38f1ab0();
   input += synapse0x38f1af0();
   input += synapse0x38f2480();
   input += synapse0x38f24c0();
   input += synapse0x38f2e50();
   input += synapse0x38f2e90();
   input += synapse0x38f3820();
   input += synapse0x38f3860();
   input += synapse0x38f41f0();
   input += synapse0x38f4230();
   input += synapse0x38ecd40();
   input += synapse0x38ecd80();
   input += synapse0x38f65f0();
   input += synapse0x38f6630();
   input += synapse0x38f6f80();
   input += synapse0x38f6fc0();
   input += synapse0x38f7950();
   input += synapse0x38f7990();
   input += synapse0x38f8320();
   input += synapse0x38f8360();
   input += synapse0x38f8cf0();
   input += synapse0x38f8d30();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3910e70() {
   double input = input0x3910e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3911210() {
   double input = -1.01461;
   input += synapse0x38fb430();
   input += synapse0x38fb470();
   input += synapse0x38f09f0();
   input += synapse0x38f0a30();
   input += synapse0x38fe010();
   input += synapse0x38fe050();
   input += synapse0x38fe9e0();
   input += synapse0x38fea20();
   input += synapse0x38ff3b0();
   input += synapse0x38ff3f0();
   input += synapse0x38ffd80();
   input += synapse0x38ffdc0();
   input += synapse0x3900750();
   input += synapse0x3900790();
   input += synapse0x3901120();
   input += synapse0x3901160();
   input += synapse0x3901af0();
   input += synapse0x3901b30();
   input += synapse0x39024c0();
   input += synapse0x3902500();
   input += synapse0x39030a0();
   input += synapse0x39030e0();
   input += synapse0x3903a70();
   input += synapse0x3903ab0();
   input += synapse0x38f48f0();
   input += synapse0x38f4930();
   input += synapse0x38f52c0();
   input += synapse0x38f5300();
   input += synapse0x38f5c90();
   input += synapse0x38f5cd0();
   input += synapse0x39081b0();
   input += synapse0x39081f0();
   input += synapse0x3908b80();
   input += synapse0x3908bc0();
   input += synapse0x3909550();
   input += synapse0x3909590();
   input += synapse0x3909f20();
   input += synapse0x3909f60();
   input += synapse0x38e4eb0();
   input += synapse0x38e4ef0();
   input += synapse0x38f96c0();
   input += synapse0x38f9700();
   input += synapse0x390a640();
   input += synapse0x390a680();
   input += synapse0x390a6c0();
   input += synapse0x390a700();
   input += synapse0x39115b0();
   input += synapse0x39115f0();
   input += synapse0x3911630();
   input += synapse0x3911670();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3911210() {
   double input = input0x3911210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x39116b0() {
   double input = 3.05399;
   input += synapse0x39119f0();
   input += synapse0x3911a30();
   input += synapse0x3911a70();
   input += synapse0x3911ab0();
   input += synapse0x3911af0();
   input += synapse0x3911b30();
   input += synapse0x3911b70();
   input += synapse0x3911bb0();
   input += synapse0x3911bf0();
   input += synapse0x3911c30();
   input += synapse0x3911c70();
   input += synapse0x3911cb0();
   input += synapse0x3911cf0();
   input += synapse0x3911d30();
   input += synapse0x3911d70();
   input += synapse0x3911db0();
   input += synapse0x3911840();
   input += synapse0x3911880();
   input += synapse0x3911f00();
   input += synapse0x3911f40();
   input += synapse0x3911f80();
   input += synapse0x3911fc0();
   input += synapse0x3912000();
   input += synapse0x3912040();
   input += synapse0x3912080();
   input += synapse0x39120c0();
   input += synapse0x3912100();
   input += synapse0x3912140();
   input += synapse0x3912180();
   input += synapse0x39121c0();
   input += synapse0x3912200();
   input += synapse0x3912240();
   input += synapse0x3911df0();
   input += synapse0x3911e30();
   input += synapse0x3911e70();
   input += synapse0x3911eb0();
   input += synapse0x3912490();
   input += synapse0x39124d0();
   input += synapse0x3912510();
   input += synapse0x3912550();
   input += synapse0x3912590();
   input += synapse0x39125d0();
   input += synapse0x3912610();
   input += synapse0x3912650();
   input += synapse0x3912690();
   input += synapse0x39126d0();
   input += synapse0x3912710();
   input += synapse0x3912750();
   input += synapse0x3912790();
   input += synapse0x39127d0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x39116b0() {
   double input = input0x39116b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3912810() {
   double input = -1.7689;
   input += synapse0x3912b50();
   input += synapse0x3912b90();
   input += synapse0x3912bd0();
   input += synapse0x3912c10();
   input += synapse0x3912c50();
   input += synapse0x3912c90();
   input += synapse0x3912cd0();
   input += synapse0x3912d10();
   input += synapse0x3912d50();
   input += synapse0x3912d90();
   input += synapse0x3912dd0();
   input += synapse0x3912e10();
   input += synapse0x3912e50();
   input += synapse0x3912e90();
   input += synapse0x3912ed0();
   input += synapse0x3912f10();
   input += synapse0x39129a0();
   input += synapse0x39129e0();
   input += synapse0x3913060();
   input += synapse0x39130a0();
   input += synapse0x39130e0();
   input += synapse0x3913120();
   input += synapse0x3913160();
   input += synapse0x39131a0();
   input += synapse0x39131e0();
   input += synapse0x3913220();
   input += synapse0x3913260();
   input += synapse0x39132a0();
   input += synapse0x39132e0();
   input += synapse0x3913320();
   input += synapse0x3913360();
   input += synapse0x39133a0();
   input += synapse0x3912f50();
   input += synapse0x3912f90();
   input += synapse0x3912fd0();
   input += synapse0x3913010();
   input += synapse0x39135f0();
   input += synapse0x3913630();
   input += synapse0x3913670();
   input += synapse0x39136b0();
   input += synapse0x39136f0();
   input += synapse0x3913730();
   input += synapse0x3913770();
   input += synapse0x39137b0();
   input += synapse0x39137f0();
   input += synapse0x3913830();
   input += synapse0x3913870();
   input += synapse0x39138b0();
   input += synapse0x39138f0();
   input += synapse0x3913930();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3912810() {
   double input = input0x3912810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3913970() {
   double input = 2.87909;
   input += synapse0x3913cb0();
   input += synapse0x3913cf0();
   input += synapse0x3913d30();
   input += synapse0x3913d70();
   input += synapse0x3913db0();
   input += synapse0x3913df0();
   input += synapse0x3913e30();
   input += synapse0x3913e70();
   input += synapse0x3913eb0();
   input += synapse0x3913ef0();
   input += synapse0x3913f30();
   input += synapse0x3913f70();
   input += synapse0x3913fb0();
   input += synapse0x3913ff0();
   input += synapse0x3914030();
   input += synapse0x3914070();
   input += synapse0x3913b00();
   input += synapse0x3913b40();
   input += synapse0x39141c0();
   input += synapse0x3914200();
   input += synapse0x3914240();
   input += synapse0x3914280();
   input += synapse0x39142c0();
   input += synapse0x3914300();
   input += synapse0x3914340();
   input += synapse0x3914380();
   input += synapse0x39143c0();
   input += synapse0x3914400();
   input += synapse0x3914440();
   input += synapse0x3914480();
   input += synapse0x39144c0();
   input += synapse0x3914500();
   input += synapse0x39140b0();
   input += synapse0x39140f0();
   input += synapse0x3914130();
   input += synapse0x3914170();
   input += synapse0x3914750();
   input += synapse0x3914790();
   input += synapse0x39147d0();
   input += synapse0x3914810();
   input += synapse0x3914850();
   input += synapse0x3914890();
   input += synapse0x39148d0();
   input += synapse0x3914910();
   input += synapse0x3914950();
   input += synapse0x3914990();
   input += synapse0x39149d0();
   input += synapse0x3914a10();
   input += synapse0x3914a50();
   input += synapse0x3914a90();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3913970() {
   double input = input0x3913970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_cL::input0x3914ad0() {
   double input = 5.37292;
   input += synapse0x3914cf0();
   input += synapse0x3914d30();
   input += synapse0x3914d70();
   input += synapse0x3914db0();
   input += synapse0x3914df0();
   return input;
}

double NNfunction_ns_chi01_cL::neuron0x3914ad0() {
   double input = input0x3914ad0();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_cL::synapse0x38e4f40() {
   return (neuron0x38dfb40()*0.129127);
}

double NNfunction_ns_chi01_cL::synapse0x38e4f80() {
   return (neuron0x38dfdf0()*-0.0123568);
}

double NNfunction_ns_chi01_cL::synapse0x38e4fc0() {
   return (neuron0x38e0130()*-0.774252);
}

double NNfunction_ns_chi01_cL::synapse0x38e5000() {
   return (neuron0x38e0470()*-0.00349638);
}

double NNfunction_ns_chi01_cL::synapse0x38e5040() {
   return (neuron0x38e07b0()*0.0138966);
}

double NNfunction_ns_chi01_cL::synapse0x38e5080() {
   return (neuron0x38e0af0()*-0.00493595);
}

double NNfunction_ns_chi01_cL::synapse0x38e50c0() {
   return (neuron0x38e0e30()*-0.00156989);
}

double NNfunction_ns_chi01_cL::synapse0x38e5100() {
   return (neuron0x38e1170()*0.00909745);
}

double NNfunction_ns_chi01_cL::synapse0x38e5140() {
   return (neuron0x38e14b0()*0.00660699);
}

double NNfunction_ns_chi01_cL::synapse0x38e5180() {
   return (neuron0x38e17f0()*0.00470729);
}

double NNfunction_ns_chi01_cL::synapse0x38e51c0() {
   return (neuron0x38e1b30()*0.00913704);
}

double NNfunction_ns_chi01_cL::synapse0x38e5200() {
   return (neuron0x38e1e70()*0.00946461);
}

double NNfunction_ns_chi01_cL::synapse0x38e5240() {
   return (neuron0x38e21b0()*0.0185456);
}

double NNfunction_ns_chi01_cL::synapse0x38e5280() {
   return (neuron0x38e24f0()*-0.00748549);
}

double NNfunction_ns_chi01_cL::synapse0x38e52c0() {
   return (neuron0x38e2830()*0.0057225);
}

double NNfunction_ns_chi01_cL::synapse0x38e5300() {
   return (neuron0x38e2b70()*0.0114417);
}

double NNfunction_ns_chi01_cL::synapse0x38e4d90() {
   return (neuron0x38e2eb0()*0.000318972);
}

double NNfunction_ns_chi01_cL::synapse0x38e4dd0() {
   return (neuron0x38e3410()*-0.0055118);
}

double NNfunction_ns_chi01_cL::synapse0x369bcc0() {
   return (neuron0x38e3750()*0.0241784);
}

double NNfunction_ns_chi01_cL::synapse0x369bd00() {
   return (neuron0x38e3a90()*0.00445455);
}

double NNfunction_ns_chi01_cL::synapse0x38e5340() {
   return (neuron0x38e3dd0()*-0.01078);
}

double NNfunction_ns_chi01_cL::synapse0x38e5380() {
   return (neuron0x38e4110()*-0.00624247);
}

double NNfunction_ns_chi01_cL::synapse0x38e53c0() {
   return (neuron0x38e4450()*0.00872011);
}

double NNfunction_ns_chi01_cL::synapse0x38e5400() {
   return (neuron0x38e4790()*8.99592);
}

double NNfunction_ns_chi01_cL::synapse0x38e5780() {
   return (neuron0x38dfb40()*1.48965);
}

double NNfunction_ns_chi01_cL::synapse0x38e57c0() {
   return (neuron0x38dfdf0()*1.19827);
}

double NNfunction_ns_chi01_cL::synapse0x38e5800() {
   return (neuron0x38e0130()*1.12916);
}

double NNfunction_ns_chi01_cL::synapse0x38e5840() {
   return (neuron0x38e0470()*0.12077);
}

double NNfunction_ns_chi01_cL::synapse0x38e5880() {
   return (neuron0x38e07b0()*0.859524);
}

double NNfunction_ns_chi01_cL::synapse0x38e58c0() {
   return (neuron0x38e0af0()*-1.63608);
}

double NNfunction_ns_chi01_cL::synapse0x38e5900() {
   return (neuron0x38e0e30()*0.259054);
}

double NNfunction_ns_chi01_cL::synapse0x38e5940() {
   return (neuron0x38e1170()*0.357226);
}

double NNfunction_ns_chi01_cL::synapse0x38e5980() {
   return (neuron0x38e14b0()*-0.222645);
}

double NNfunction_ns_chi01_cL::synapse0x369bb10() {
   return (neuron0x38e17f0()*-0.273927);
}

double NNfunction_ns_chi01_cL::synapse0x369bb50() {
   return (neuron0x38e1b30()*-1.04718);
}

double NNfunction_ns_chi01_cL::synapse0x369bb90() {
   return (neuron0x38e1e70()*1.83788);
}

double NNfunction_ns_chi01_cL::synapse0x369bbd0() {
   return (neuron0x38e21b0()*-0.755809);
}

double NNfunction_ns_chi01_cL::synapse0x38e5bd0() {
   return (neuron0x38e24f0()*1.30056);
}

double NNfunction_ns_chi01_cL::synapse0x38e5c10() {
   return (neuron0x38e2830()*0.0270027);
}

double NNfunction_ns_chi01_cL::synapse0x38e5c50() {
   return (neuron0x38e2b70()*-0.458984);
}

double NNfunction_ns_chi01_cL::synapse0x38e55d0() {
   return (neuron0x38e2eb0()*-1.04546);
}

double NNfunction_ns_chi01_cL::synapse0x38e5610() {
   return (neuron0x38e3410()*-0.134995);
}

double NNfunction_ns_chi01_cL::synapse0x38e5da0() {
   return (neuron0x38e3750()*-1.23231);
}

double NNfunction_ns_chi01_cL::synapse0x38e5de0() {
   return (neuron0x38e3a90()*0.0424206);
}

double NNfunction_ns_chi01_cL::synapse0x38e5e20() {
   return (neuron0x38e3dd0()*-0.879856);
}

double NNfunction_ns_chi01_cL::synapse0x38e5e60() {
   return (neuron0x38e4110()*0.533631);
}

double NNfunction_ns_chi01_cL::synapse0x38e5ea0() {
   return (neuron0x38e4450()*0.795089);
}

double NNfunction_ns_chi01_cL::synapse0x38e5ee0() {
   return (neuron0x38e4790()*0.200345);
}

double NNfunction_ns_chi01_cL::synapse0x38e6260() {
   return (neuron0x38dfb40()*0.103876);
}

double NNfunction_ns_chi01_cL::synapse0x38e62a0() {
   return (neuron0x38dfdf0()*-0.421751);
}

double NNfunction_ns_chi01_cL::synapse0x38e62e0() {
   return (neuron0x38e0130()*-0.336712);
}

double NNfunction_ns_chi01_cL::synapse0x38e6320() {
   return (neuron0x38e0470()*1.10196);
}

double NNfunction_ns_chi01_cL::synapse0x38e6360() {
   return (neuron0x38e07b0()*-0.171759);
}

double NNfunction_ns_chi01_cL::synapse0x38e63a0() {
   return (neuron0x38e0af0()*0.411448);
}

double NNfunction_ns_chi01_cL::synapse0x38e63e0() {
   return (neuron0x38e0e30()*-0.199096);
}

double NNfunction_ns_chi01_cL::synapse0x38e6420() {
   return (neuron0x38e1170()*-0.51337);
}

double NNfunction_ns_chi01_cL::synapse0x38e6460() {
   return (neuron0x38e14b0()*0.319518);
}

double NNfunction_ns_chi01_cL::synapse0x38e64a0() {
   return (neuron0x38e17f0()*-2.01849);
}

double NNfunction_ns_chi01_cL::synapse0x38e64e0() {
   return (neuron0x38e1b30()*0.483166);
}

double NNfunction_ns_chi01_cL::synapse0x38e6520() {
   return (neuron0x38e1e70()*1.33154);
}

double NNfunction_ns_chi01_cL::synapse0x38e6560() {
   return (neuron0x38e21b0()*-0.327475);
}

double NNfunction_ns_chi01_cL::synapse0x38e65a0() {
   return (neuron0x38e24f0()*-0.23148);
}

double NNfunction_ns_chi01_cL::synapse0x38e65e0() {
   return (neuron0x38e2830()*-0.239088);
}

double NNfunction_ns_chi01_cL::synapse0x38e6620() {
   return (neuron0x38e2b70()*-0.0994938);
}

double NNfunction_ns_chi01_cL::synapse0x38e60b0() {
   return (neuron0x38e2eb0()*-0.610624);
}

double NNfunction_ns_chi01_cL::synapse0x38e60f0() {
   return (neuron0x38e3410()*-0.080057);
}

double NNfunction_ns_chi01_cL::synapse0x369c3b0() {
   return (neuron0x38e3750()*-0.677099);
}

double NNfunction_ns_chi01_cL::synapse0x36a9c80() {
   return (neuron0x38e3a90()*0.258848);
}

double NNfunction_ns_chi01_cL::synapse0x36a9cc0() {
   return (neuron0x38e3dd0()*0.443175);
}

double NNfunction_ns_chi01_cL::synapse0x38e8550() {
   return (neuron0x38e4110()*-0.168121);
}

double NNfunction_ns_chi01_cL::synapse0x38e8590() {
   return (neuron0x38e4450()*0.264483);
}

double NNfunction_ns_chi01_cL::synapse0x38df880() {
   return (neuron0x38e4790()*0.183145);
}

double NNfunction_ns_chi01_cL::synapse0x38df950() {
   return (neuron0x38dfb40()*-0.0799805);
}

double NNfunction_ns_chi01_cL::synapse0x36aa500() {
   return (neuron0x38dfdf0()*8.84627);
}

double NNfunction_ns_chi01_cL::synapse0x38e5b50() {
   return (neuron0x38e0130()*-0.175242);
}

double NNfunction_ns_chi01_cL::synapse0x38e5b90() {
   return (neuron0x38e0470()*-0.0395378);
}

double NNfunction_ns_chi01_cL::synapse0x38e6770() {
   return (neuron0x38e07b0()*0.0543258);
}

double NNfunction_ns_chi01_cL::synapse0x38e67b0() {
   return (neuron0x38e0af0()*0.0339272);
}

double NNfunction_ns_chi01_cL::synapse0x38e67f0() {
   return (neuron0x38e0e30()*-0.067461);
}

double NNfunction_ns_chi01_cL::synapse0x38e6830() {
   return (neuron0x38e1170()*-0.0481796);
}

double NNfunction_ns_chi01_cL::synapse0x38e6870() {
   return (neuron0x38e14b0()*-0.0232548);
}

double NNfunction_ns_chi01_cL::synapse0x38e68b0() {
   return (neuron0x38e17f0()*-0.0310322);
}

double NNfunction_ns_chi01_cL::synapse0x38e68f0() {
   return (neuron0x38e1b30()*-0.0242803);
}

double NNfunction_ns_chi01_cL::synapse0x38e6930() {
   return (neuron0x38e1e70()*-0.0734044);
}

double NNfunction_ns_chi01_cL::synapse0x38e6970() {
   return (neuron0x38e21b0()*0.037814);
}

double NNfunction_ns_chi01_cL::synapse0x38e69b0() {
   return (neuron0x38e24f0()*-0.00419512);
}

double NNfunction_ns_chi01_cL::synapse0x38e69f0() {
   return (neuron0x38e2830()*0.00809042);
}

double NNfunction_ns_chi01_cL::synapse0x38e6a30() {
   return (neuron0x38e2b70()*-0.0310007);
}

double NNfunction_ns_chi01_cL::synapse0x38df8c0() {
   return (neuron0x38e2eb0()*0.0468823);
}

double NNfunction_ns_chi01_cL::synapse0x38df900() {
   return (neuron0x38e3410()*-0.0410113);
}

double NNfunction_ns_chi01_cL::synapse0x38e6b80() {
   return (neuron0x38e3750()*-0.00211787);
}

double NNfunction_ns_chi01_cL::synapse0x38e6bc0() {
   return (neuron0x38e3a90()*-0.0564835);
}

double NNfunction_ns_chi01_cL::synapse0x38e6c00() {
   return (neuron0x38e3dd0()*0.0716927);
}

double NNfunction_ns_chi01_cL::synapse0x38e6c40() {
   return (neuron0x38e4110()*-0.00499061);
}

double NNfunction_ns_chi01_cL::synapse0x38e6c80() {
   return (neuron0x38e4450()*-0.00301543);
}

double NNfunction_ns_chi01_cL::synapse0x38e6cc0() {
   return (neuron0x38e4790()*-1.70183);
}

double NNfunction_ns_chi01_cL::synapse0x38e7040() {
   return (neuron0x38dfb40()*0.0170016);
}

double NNfunction_ns_chi01_cL::synapse0x38e7080() {
   return (neuron0x38dfdf0()*17.2259);
}

double NNfunction_ns_chi01_cL::synapse0x38e70c0() {
   return (neuron0x38e0130()*4.43127);
}

double NNfunction_ns_chi01_cL::synapse0x38e7100() {
   return (neuron0x38e0470()*-0.00977267);
}

double NNfunction_ns_chi01_cL::synapse0x38e7140() {
   return (neuron0x38e07b0()*0.00528569);
}

double NNfunction_ns_chi01_cL::synapse0x38e7180() {
   return (neuron0x38e0af0()*0.0307346);
}

double NNfunction_ns_chi01_cL::synapse0x38e71c0() {
   return (neuron0x38e0e30()*0.00173825);
}

double NNfunction_ns_chi01_cL::synapse0x38e7200() {
   return (neuron0x38e1170()*0.00114785);
}

double NNfunction_ns_chi01_cL::synapse0x38e7240() {
   return (neuron0x38e14b0()*-0.00982039);
}

double NNfunction_ns_chi01_cL::synapse0x38e7280() {
   return (neuron0x38e17f0()*0.00703254);
}

double NNfunction_ns_chi01_cL::synapse0x38e72c0() {
   return (neuron0x38e1b30()*-0.012757);
}

double NNfunction_ns_chi01_cL::synapse0x38e7300() {
   return (neuron0x38e1e70()*0.025872);
}

double NNfunction_ns_chi01_cL::synapse0x38e7340() {
   return (neuron0x38e21b0()*-0.0586365);
}

double NNfunction_ns_chi01_cL::synapse0x38e7380() {
   return (neuron0x38e24f0()*-0.0188068);
}

double NNfunction_ns_chi01_cL::synapse0x38e73c0() {
   return (neuron0x38e2830()*0.0286155);
}

double NNfunction_ns_chi01_cL::synapse0x38e7400() {
   return (neuron0x38e2b70()*0.0574722);
}

double NNfunction_ns_chi01_cL::synapse0x38e7550() {
   return (neuron0x38e2eb0()*0.00427027);
}

double NNfunction_ns_chi01_cL::synapse0x38e6e90() {
   return (neuron0x38e3410()*-0.0157998);
}

double NNfunction_ns_chi01_cL::synapse0x38e6ed0() {
   return (neuron0x38e3750()*-0.0370978);
}

double NNfunction_ns_chi01_cL::synapse0x38e8690() {
   return (neuron0x38e3a90()*-0.00103823);
}

double NNfunction_ns_chi01_cL::synapse0x38e86d0() {
   return (neuron0x38e3dd0()*-0.00702774);
}

double NNfunction_ns_chi01_cL::synapse0x38e8710() {
   return (neuron0x38e4110()*-0.0039115);
}

double NNfunction_ns_chi01_cL::synapse0x38e8750() {
   return (neuron0x38e4450()*-0.0233149);
}

double NNfunction_ns_chi01_cL::synapse0x38e8790() {
   return (neuron0x38e4790()*0.00667876);
}

double NNfunction_ns_chi01_cL::synapse0x38e8b10() {
   return (neuron0x38dfb40()*0.0382209);
}

double NNfunction_ns_chi01_cL::synapse0x38e8b50() {
   return (neuron0x38dfdf0()*0.106331);
}

double NNfunction_ns_chi01_cL::synapse0x38e8b90() {
   return (neuron0x38e0130()*-1.55816);
}

double NNfunction_ns_chi01_cL::synapse0x38e8bd0() {
   return (neuron0x38e0470()*0.17678);
}

double NNfunction_ns_chi01_cL::synapse0x38e8c10() {
   return (neuron0x38e07b0()*0.220567);
}

double NNfunction_ns_chi01_cL::synapse0x38e8c50() {
   return (neuron0x38e0af0()*0.0633987);
}

double NNfunction_ns_chi01_cL::synapse0x38e8c90() {
   return (neuron0x38e0e30()*0.0258908);
}

double NNfunction_ns_chi01_cL::synapse0x38e8cd0() {
   return (neuron0x38e1170()*0.000279025);
}

double NNfunction_ns_chi01_cL::synapse0x38e8d10() {
   return (neuron0x38e14b0()*-0.010401);
}

double NNfunction_ns_chi01_cL::synapse0x36a9fd0() {
   return (neuron0x38e17f0()*0.0357597);
}

double NNfunction_ns_chi01_cL::synapse0x36aa010() {
   return (neuron0x38e1b30()*0.113658);
}

double NNfunction_ns_chi01_cL::synapse0x36aa050() {
   return (neuron0x38e1e70()*-0.0577777);
}

double NNfunction_ns_chi01_cL::synapse0x36aa090() {
   return (neuron0x38e21b0()*0.239503);
}

double NNfunction_ns_chi01_cL::synapse0x36aa0d0() {
   return (neuron0x38e24f0()*-0.184738);
}

double NNfunction_ns_chi01_cL::synapse0x36aa110() {
   return (neuron0x38e2830()*0.0585985);
}

double NNfunction_ns_chi01_cL::synapse0x36aa150() {
   return (neuron0x38e2b70()*-0.0100536);
}

double NNfunction_ns_chi01_cL::synapse0x38e8960() {
   return (neuron0x38e2eb0()*-0.120258);
}

double NNfunction_ns_chi01_cL::synapse0x38e89a0() {
   return (neuron0x38e3410()*-0.0455494);
}

double NNfunction_ns_chi01_cL::synapse0x36aa2a0() {
   return (neuron0x38e3750()*0.0865151);
}

double NNfunction_ns_chi01_cL::synapse0x36aa2e0() {
   return (neuron0x38e3a90()*0.0115956);
}

double NNfunction_ns_chi01_cL::synapse0x36aa320() {
   return (neuron0x38e3dd0()*-0.0165423);
}

double NNfunction_ns_chi01_cL::synapse0x36aa360() {
   return (neuron0x38e4110()*-0.00649395);
}

double NNfunction_ns_chi01_cL::synapse0x36aa3a0() {
   return (neuron0x38e4450()*0.019567);
}

double NNfunction_ns_chi01_cL::synapse0x38e9560() {
   return (neuron0x38e4790()*0.163842);
}

double NNfunction_ns_chi01_cL::synapse0x38e98e0() {
   return (neuron0x38dfb40()*-0.374447);
}

double NNfunction_ns_chi01_cL::synapse0x38e9920() {
   return (neuron0x38dfdf0()*0.668596);
}

double NNfunction_ns_chi01_cL::synapse0x38e9960() {
   return (neuron0x38e0130()*1.10752);
}

double NNfunction_ns_chi01_cL::synapse0x38e99a0() {
   return (neuron0x38e0470()*0.941987);
}

double NNfunction_ns_chi01_cL::synapse0x38e99e0() {
   return (neuron0x38e07b0()*0.492075);
}

double NNfunction_ns_chi01_cL::synapse0x38e9a20() {
   return (neuron0x38e0af0()*-0.37138);
}

double NNfunction_ns_chi01_cL::synapse0x38e9a60() {
   return (neuron0x38e0e30()*0.0772758);
}

double NNfunction_ns_chi01_cL::synapse0x38e9aa0() {
   return (neuron0x38e1170()*1.42727);
}

double NNfunction_ns_chi01_cL::synapse0x38e9ae0() {
   return (neuron0x38e14b0()*0.970368);
}

double NNfunction_ns_chi01_cL::synapse0x38e9b20() {
   return (neuron0x38e17f0()*0.691149);
}

double NNfunction_ns_chi01_cL::synapse0x38e9b60() {
   return (neuron0x38e1b30()*-0.43061);
}

double NNfunction_ns_chi01_cL::synapse0x38e9ba0() {
   return (neuron0x38e1e70()*0.926632);
}

double NNfunction_ns_chi01_cL::synapse0x38e9be0() {
   return (neuron0x38e21b0()*-1.0718);
}

double NNfunction_ns_chi01_cL::synapse0x38e9c20() {
   return (neuron0x38e24f0()*-0.597037);
}

double NNfunction_ns_chi01_cL::synapse0x38e9c60() {
   return (neuron0x38e2830()*1.90992);
}

double NNfunction_ns_chi01_cL::synapse0x38e9ca0() {
   return (neuron0x38e2b70()*-0.912917);
}

double NNfunction_ns_chi01_cL::synapse0x38e9730() {
   return (neuron0x38e2eb0()*0.163402);
}

double NNfunction_ns_chi01_cL::synapse0x38e9770() {
   return (neuron0x38e3410()*-0.0810822);
}

double NNfunction_ns_chi01_cL::synapse0x38e9df0() {
   return (neuron0x38e3750()*0.909064);
}

double NNfunction_ns_chi01_cL::synapse0x38e9e30() {
   return (neuron0x38e3a90()*0.86368);
}

double NNfunction_ns_chi01_cL::synapse0x38e9e70() {
   return (neuron0x38e3dd0()*0.686549);
}

double NNfunction_ns_chi01_cL::synapse0x38e9eb0() {
   return (neuron0x38e4110()*-0.519849);
}

double NNfunction_ns_chi01_cL::synapse0x38e9ef0() {
   return (neuron0x38e4450()*-0.559832);
}

double NNfunction_ns_chi01_cL::synapse0x38e9f30() {
   return (neuron0x38e4790()*0.94883);
}

double NNfunction_ns_chi01_cL::synapse0x38ea2b0() {
   return (neuron0x38dfb40()*-0.0224735);
}

double NNfunction_ns_chi01_cL::synapse0x38ea2f0() {
   return (neuron0x38dfdf0()*0.0715304);
}

double NNfunction_ns_chi01_cL::synapse0x38ea330() {
   return (neuron0x38e0130()*1.27825);
}

double NNfunction_ns_chi01_cL::synapse0x38ea370() {
   return (neuron0x38e0470()*-2.10025);
}

double NNfunction_ns_chi01_cL::synapse0x38ea3b0() {
   return (neuron0x38e07b0()*0.175298);
}

double NNfunction_ns_chi01_cL::synapse0x38ea3f0() {
   return (neuron0x38e0af0()*-0.0824147);
}

double NNfunction_ns_chi01_cL::synapse0x38ea430() {
   return (neuron0x38e0e30()*-0.0441689);
}

double NNfunction_ns_chi01_cL::synapse0x38ea470() {
   return (neuron0x38e1170()*-0.389124);
}

double NNfunction_ns_chi01_cL::synapse0x38ea4b0() {
   return (neuron0x38e14b0()*0.104539);
}

double NNfunction_ns_chi01_cL::synapse0x38ea4f0() {
   return (neuron0x38e17f0()*-0.110586);
}

double NNfunction_ns_chi01_cL::synapse0x38ea530() {
   return (neuron0x38e1b30()*0.149473);
}

double NNfunction_ns_chi01_cL::synapse0x38ea570() {
   return (neuron0x38e1e70()*0.049125);
}

double NNfunction_ns_chi01_cL::synapse0x38ea5b0() {
   return (neuron0x38e21b0()*1.36798);
}

double NNfunction_ns_chi01_cL::synapse0x38ea5f0() {
   return (neuron0x38e24f0()*-0.200038);
}

double NNfunction_ns_chi01_cL::synapse0x38ea630() {
   return (neuron0x38e2830()*0.273452);
}

double NNfunction_ns_chi01_cL::synapse0x38ea670() {
   return (neuron0x38e2b70()*0.00946275);
}

double NNfunction_ns_chi01_cL::synapse0x38ea100() {
   return (neuron0x38e2eb0()*-0.0923498);
}

double NNfunction_ns_chi01_cL::synapse0x38ea140() {
   return (neuron0x38e3410()*-0.16431);
}

double NNfunction_ns_chi01_cL::synapse0x38ea7c0() {
   return (neuron0x38e3750()*0.259073);
}

double NNfunction_ns_chi01_cL::synapse0x38ea800() {
   return (neuron0x38e3a90()*-0.0392053);
}

double NNfunction_ns_chi01_cL::synapse0x38ea840() {
   return (neuron0x38e3dd0()*-0.176092);
}

double NNfunction_ns_chi01_cL::synapse0x38ea880() {
   return (neuron0x38e4110()*-0.016565);
}

double NNfunction_ns_chi01_cL::synapse0x38ea8c0() {
   return (neuron0x38e4450()*0.102473);
}

double NNfunction_ns_chi01_cL::synapse0x38ea900() {
   return (neuron0x38e4790()*0.143337);
}

double NNfunction_ns_chi01_cL::synapse0x38e3300() {
   return (neuron0x38dfb40()*-0.0975988);
}

double NNfunction_ns_chi01_cL::synapse0x38e3340() {
   return (neuron0x38dfdf0()*-14.4901);
}

double NNfunction_ns_chi01_cL::synapse0x38e3380() {
   return (neuron0x38e0130()*0.0927014);
}

double NNfunction_ns_chi01_cL::synapse0x38e33c0() {
   return (neuron0x38e0470()*-0.0210557);
}

double NNfunction_ns_chi01_cL::synapse0x38eae90() {
   return (neuron0x38e07b0()*0.0363051);
}

double NNfunction_ns_chi01_cL::synapse0x38eaed0() {
   return (neuron0x38e0af0()*0.00164859);
}

double NNfunction_ns_chi01_cL::synapse0x38eaf10() {
   return (neuron0x38e0e30()*0.0323096);
}

double NNfunction_ns_chi01_cL::synapse0x38eaf50() {
   return (neuron0x38e1170()*-0.0460799);
}

double NNfunction_ns_chi01_cL::synapse0x38eaf90() {
   return (neuron0x38e14b0()*0.000591566);
}

double NNfunction_ns_chi01_cL::synapse0x38eafd0() {
   return (neuron0x38e17f0()*-0.0104172);
}

double NNfunction_ns_chi01_cL::synapse0x38eb010() {
   return (neuron0x38e1b30()*0.00683837);
}

double NNfunction_ns_chi01_cL::synapse0x38eb050() {
   return (neuron0x38e1e70()*-0.0804195);
}

double NNfunction_ns_chi01_cL::synapse0x38eb090() {
   return (neuron0x38e21b0()*0.390498);
}

double NNfunction_ns_chi01_cL::synapse0x38eb0d0() {
   return (neuron0x38e24f0()*-0.0157869);
}

double NNfunction_ns_chi01_cL::synapse0x38eb110() {
   return (neuron0x38e2830()*-0.0267721);
}

double NNfunction_ns_chi01_cL::synapse0x38eb150() {
   return (neuron0x38e2b70()*-0.0310462);
}

double NNfunction_ns_chi01_cL::synapse0x38eaad0() {
   return (neuron0x38e2eb0()*0.0337357);
}

double NNfunction_ns_chi01_cL::synapse0x38eab10() {
   return (neuron0x38e3410()*0.0260033);
}

double NNfunction_ns_chi01_cL::synapse0x38eb2a0() {
   return (neuron0x38e3750()*-0.0509083);
}

double NNfunction_ns_chi01_cL::synapse0x38eb2e0() {
   return (neuron0x38e3a90()*-0.00705814);
}

double NNfunction_ns_chi01_cL::synapse0x38eb320() {
   return (neuron0x38e3dd0()*-0.0111058);
}

double NNfunction_ns_chi01_cL::synapse0x38eb360() {
   return (neuron0x38e4110()*-0.0338782);
}

double NNfunction_ns_chi01_cL::synapse0x38eb3a0() {
   return (neuron0x38e4450()*0.0285137);
}

double NNfunction_ns_chi01_cL::synapse0x38eb3e0() {
   return (neuron0x38e4790()*-10.6532);
}

double NNfunction_ns_chi01_cL::synapse0x38eb760() {
   return (neuron0x38dfb40()*-0.196819);
}

double NNfunction_ns_chi01_cL::synapse0x38eb7a0() {
   return (neuron0x38dfdf0()*-0.201754);
}

double NNfunction_ns_chi01_cL::synapse0x38eb7e0() {
   return (neuron0x38e0130()*-0.0685826);
}

double NNfunction_ns_chi01_cL::synapse0x38eb820() {
   return (neuron0x38e0470()*-0.228361);
}

double NNfunction_ns_chi01_cL::synapse0x38eb860() {
   return (neuron0x38e07b0()*0.783638);
}

double NNfunction_ns_chi01_cL::synapse0x38eb8a0() {
   return (neuron0x38e0af0()*-0.0901391);
}

double NNfunction_ns_chi01_cL::synapse0x38eb8e0() {
   return (neuron0x38e0e30()*0.134114);
}

double NNfunction_ns_chi01_cL::synapse0x38eb920() {
   return (neuron0x38e1170()*-0.0919294);
}

double NNfunction_ns_chi01_cL::synapse0x38eb960() {
   return (neuron0x38e14b0()*0.166427);
}

double NNfunction_ns_chi01_cL::synapse0x38eb9a0() {
   return (neuron0x38e17f0()*-0.333644);
}

double NNfunction_ns_chi01_cL::synapse0x38eb9e0() {
   return (neuron0x38e1b30()*-0.0746635);
}

double NNfunction_ns_chi01_cL::synapse0x38eba20() {
   return (neuron0x38e1e70()*0.6645);
}

double NNfunction_ns_chi01_cL::synapse0x38eba60() {
   return (neuron0x38e21b0()*-0.000956765);
}

double NNfunction_ns_chi01_cL::synapse0x38ebaa0() {
   return (neuron0x38e24f0()*-0.34878);
}

double NNfunction_ns_chi01_cL::synapse0x38ebae0() {
   return (neuron0x38e2830()*-0.518692);
}

double NNfunction_ns_chi01_cL::synapse0x38ebb20() {
   return (neuron0x38e2b70()*0.615888);
}

double NNfunction_ns_chi01_cL::synapse0x38eb5b0() {
   return (neuron0x38e2eb0()*0.200259);
}

double NNfunction_ns_chi01_cL::synapse0x38eb5f0() {
   return (neuron0x38e3410()*-0.193554);
}

double NNfunction_ns_chi01_cL::synapse0x38ebc70() {
   return (neuron0x38e3750()*-0.1133);
}

double NNfunction_ns_chi01_cL::synapse0x38ebcb0() {
   return (neuron0x38e3a90()*0.0151772);
}

double NNfunction_ns_chi01_cL::synapse0x38ebcf0() {
   return (neuron0x38e3dd0()*0.0405701);
}

double NNfunction_ns_chi01_cL::synapse0x38ebd30() {
   return (neuron0x38e4110()*-0.210387);
}

double NNfunction_ns_chi01_cL::synapse0x38ebd70() {
   return (neuron0x38e4450()*-0.0947659);
}

double NNfunction_ns_chi01_cL::synapse0x38ebdb0() {
   return (neuron0x38e4790()*-0.0944252);
}

double NNfunction_ns_chi01_cL::synapse0x38ec130() {
   return (neuron0x38dfb40()*-0.0479983);
}

double NNfunction_ns_chi01_cL::synapse0x38ec170() {
   return (neuron0x38dfdf0()*0.620488);
}

double NNfunction_ns_chi01_cL::synapse0x38ec1b0() {
   return (neuron0x38e0130()*1.14063);
}

double NNfunction_ns_chi01_cL::synapse0x38ec1f0() {
   return (neuron0x38e0470()*1.37153);
}

double NNfunction_ns_chi01_cL::synapse0x38ec230() {
   return (neuron0x38e07b0()*0.625235);
}

double NNfunction_ns_chi01_cL::synapse0x38ec270() {
   return (neuron0x38e0af0()*0.706861);
}

double NNfunction_ns_chi01_cL::synapse0x38ec2b0() {
   return (neuron0x38e0e30()*-0.652217);
}

double NNfunction_ns_chi01_cL::synapse0x38ec2f0() {
   return (neuron0x38e1170()*0.624827);
}

double NNfunction_ns_chi01_cL::synapse0x38ec330() {
   return (neuron0x38e14b0()*-0.42076);
}

double NNfunction_ns_chi01_cL::synapse0x38ec370() {
   return (neuron0x38e17f0()*0.64597);
}

double NNfunction_ns_chi01_cL::synapse0x38ec3b0() {
   return (neuron0x38e1b30()*0.799264);
}

double NNfunction_ns_chi01_cL::synapse0x38ec3f0() {
   return (neuron0x38e1e70()*-0.796474);
}

double NNfunction_ns_chi01_cL::synapse0x38ec430() {
   return (neuron0x38e21b0()*-1.08114);
}

double NNfunction_ns_chi01_cL::synapse0x38ec470() {
   return (neuron0x38e24f0()*0.771481);
}

double NNfunction_ns_chi01_cL::synapse0x38ec4b0() {
   return (neuron0x38e2830()*-0.995778);
}

double NNfunction_ns_chi01_cL::synapse0x38ec4f0() {
   return (neuron0x38e2b70()*-0.0824161);
}

double NNfunction_ns_chi01_cL::synapse0x38ebf80() {
   return (neuron0x38e2eb0()*1.11242);
}

double NNfunction_ns_chi01_cL::synapse0x38ebfc0() {
   return (neuron0x38e3410()*-0.422523);
}

double NNfunction_ns_chi01_cL::synapse0x38e8d50() {
   return (neuron0x38e3750()*-0.616075);
}

double NNfunction_ns_chi01_cL::synapse0x38e8d90() {
   return (neuron0x38e3a90()*-1.17926);
}

double NNfunction_ns_chi01_cL::synapse0x38e8dd0() {
   return (neuron0x38e3dd0()*0.418804);
}

double NNfunction_ns_chi01_cL::synapse0x38e8e10() {
   return (neuron0x38e4110()*-0.486);
}

double NNfunction_ns_chi01_cL::synapse0x38e8e50() {
   return (neuron0x38e4450()*0.736744);
}

double NNfunction_ns_chi01_cL::synapse0x38e8e90() {
   return (neuron0x38e4790()*-0.269646);
}

double NNfunction_ns_chi01_cL::synapse0x38e9210() {
   return (neuron0x38dfb40()*-0.0417641);
}

double NNfunction_ns_chi01_cL::synapse0x38e9250() {
   return (neuron0x38dfdf0()*-0.0266168);
}

double NNfunction_ns_chi01_cL::synapse0x38e9290() {
   return (neuron0x38e0130()*0.153049);
}

double NNfunction_ns_chi01_cL::synapse0x38e92d0() {
   return (neuron0x38e0470()*2.85635);
}

double NNfunction_ns_chi01_cL::synapse0x38e9310() {
   return (neuron0x38e07b0()*-0.00918808);
}

double NNfunction_ns_chi01_cL::synapse0x38e9350() {
   return (neuron0x38e0af0()*0.00245378);
}

double NNfunction_ns_chi01_cL::synapse0x38e9390() {
   return (neuron0x38e0e30()*0.0357975);
}

double NNfunction_ns_chi01_cL::synapse0x38e93d0() {
   return (neuron0x38e1170()*-0.00500627);
}

double NNfunction_ns_chi01_cL::synapse0x38e9410() {
   return (neuron0x38e14b0()*0.0241619);
}

double NNfunction_ns_chi01_cL::synapse0x38e9450() {
   return (neuron0x38e17f0()*0.0363794);
}

double NNfunction_ns_chi01_cL::synapse0x38e9490() {
   return (neuron0x38e1b30()*-0.0444626);
}

double NNfunction_ns_chi01_cL::synapse0x38e94d0() {
   return (neuron0x38e1e70()*-0.0436398);
}

double NNfunction_ns_chi01_cL::synapse0x38e9510() {
   return (neuron0x38e21b0()*-0.0618289);
}

double NNfunction_ns_chi01_cL::synapse0x38ed650() {
   return (neuron0x38e24f0()*0.00495872);
}

double NNfunction_ns_chi01_cL::synapse0x38ed690() {
   return (neuron0x38e2830()*-0.0538496);
}

double NNfunction_ns_chi01_cL::synapse0x38ed6d0() {
   return (neuron0x38e2b70()*-0.0719059);
}

double NNfunction_ns_chi01_cL::synapse0x38e9060() {
   return (neuron0x38e2eb0()*-0.00860478);
}

double NNfunction_ns_chi01_cL::synapse0x38e90a0() {
   return (neuron0x38e3410()*0.0152155);
}

double NNfunction_ns_chi01_cL::synapse0x38ed820() {
   return (neuron0x38e3750()*0.0165466);
}

double NNfunction_ns_chi01_cL::synapse0x38ed860() {
   return (neuron0x38e3a90()*-0.0208298);
}

double NNfunction_ns_chi01_cL::synapse0x38ed8a0() {
   return (neuron0x38e3dd0()*-0.0228217);
}

double NNfunction_ns_chi01_cL::synapse0x38ed8e0() {
   return (neuron0x38e4110()*-0.00545697);
}

double NNfunction_ns_chi01_cL::synapse0x38ed920() {
   return (neuron0x38e4450()*0.0310051);
}

double NNfunction_ns_chi01_cL::synapse0x38ed960() {
   return (neuron0x38e4790()*0.0941236);
}

double NNfunction_ns_chi01_cL::synapse0x38edce0() {
   return (neuron0x38dfb40()*-0.11914);
}

double NNfunction_ns_chi01_cL::synapse0x38edd20() {
   return (neuron0x38dfdf0()*-0.207864);
}

double NNfunction_ns_chi01_cL::synapse0x38edd60() {
   return (neuron0x38e0130()*1.03001);
}

double NNfunction_ns_chi01_cL::synapse0x38edda0() {
   return (neuron0x38e0470()*-0.394494);
}

double NNfunction_ns_chi01_cL::synapse0x38edde0() {
   return (neuron0x38e07b0()*0.154655);
}

double NNfunction_ns_chi01_cL::synapse0x38ede20() {
   return (neuron0x38e0af0()*-0.285312);
}

double NNfunction_ns_chi01_cL::synapse0x38ede60() {
   return (neuron0x38e0e30()*0.0534893);
}

double NNfunction_ns_chi01_cL::synapse0x38edea0() {
   return (neuron0x38e1170()*0.0755749);
}

double NNfunction_ns_chi01_cL::synapse0x38edee0() {
   return (neuron0x38e14b0()*1.18508);
}

double NNfunction_ns_chi01_cL::synapse0x38edf20() {
   return (neuron0x38e17f0()*-0.375005);
}

double NNfunction_ns_chi01_cL::synapse0x38edf60() {
   return (neuron0x38e1b30()*-1.01433);
}

double NNfunction_ns_chi01_cL::synapse0x38edfa0() {
   return (neuron0x38e1e70()*-0.427441);
}

double NNfunction_ns_chi01_cL::synapse0x38edfe0() {
   return (neuron0x38e21b0()*0.951444);
}

double NNfunction_ns_chi01_cL::synapse0x38ee020() {
   return (neuron0x38e24f0()*-0.806628);
}

double NNfunction_ns_chi01_cL::synapse0x38ee060() {
   return (neuron0x38e2830()*-0.813088);
}

double NNfunction_ns_chi01_cL::synapse0x38ee0a0() {
   return (neuron0x38e2b70()*-0.216217);
}

double NNfunction_ns_chi01_cL::synapse0x38edb30() {
   return (neuron0x38e2eb0()*-0.0828724);
}

double NNfunction_ns_chi01_cL::synapse0x38edb70() {
   return (neuron0x38e3410()*-0.494778);
}

double NNfunction_ns_chi01_cL::synapse0x38ee1f0() {
   return (neuron0x38e3750()*0.658738);
}

double NNfunction_ns_chi01_cL::synapse0x38ee230() {
   return (neuron0x38e3a90()*1.1282);
}

double NNfunction_ns_chi01_cL::synapse0x38ee270() {
   return (neuron0x38e3dd0()*-0.0264384);
}

double NNfunction_ns_chi01_cL::synapse0x38ee2b0() {
   return (neuron0x38e4110()*0.613763);
}

double NNfunction_ns_chi01_cL::synapse0x38ee2f0() {
   return (neuron0x38e4450()*0.268424);
}

double NNfunction_ns_chi01_cL::synapse0x38ee330() {
   return (neuron0x38e4790()*-0.061221);
}

double NNfunction_ns_chi01_cL::synapse0x38ee6b0() {
   return (neuron0x38dfb40()*0.279291);
}

double NNfunction_ns_chi01_cL::synapse0x38ee6f0() {
   return (neuron0x38dfdf0()*-0.0533337);
}

double NNfunction_ns_chi01_cL::synapse0x38ee730() {
   return (neuron0x38e0130()*-0.765089);
}

double NNfunction_ns_chi01_cL::synapse0x38ee770() {
   return (neuron0x38e0470()*0.397317);
}

double NNfunction_ns_chi01_cL::synapse0x38ee7b0() {
   return (neuron0x38e07b0()*-0.292343);
}

double NNfunction_ns_chi01_cL::synapse0x38ee7f0() {
   return (neuron0x38e0af0()*-0.096552);
}

double NNfunction_ns_chi01_cL::synapse0x38ee830() {
   return (neuron0x38e0e30()*0.303181);
}

double NNfunction_ns_chi01_cL::synapse0x38ee870() {
   return (neuron0x38e1170()*0.0156583);
}

double NNfunction_ns_chi01_cL::synapse0x38ee8b0() {
   return (neuron0x38e14b0()*-0.367824);
}

double NNfunction_ns_chi01_cL::synapse0x38ee8f0() {
   return (neuron0x38e17f0()*-0.381453);
}

double NNfunction_ns_chi01_cL::synapse0x38ee930() {
   return (neuron0x38e1b30()*-0.410911);
}

double NNfunction_ns_chi01_cL::synapse0x38ee970() {
   return (neuron0x38e1e70()*0.727673);
}

double NNfunction_ns_chi01_cL::synapse0x38ee9b0() {
   return (neuron0x38e21b0()*0.0367284);
}

double NNfunction_ns_chi01_cL::synapse0x38ee9f0() {
   return (neuron0x38e24f0()*0.754008);
}

double NNfunction_ns_chi01_cL::synapse0x38eea30() {
   return (neuron0x38e2830()*-0.0340718);
}

double NNfunction_ns_chi01_cL::synapse0x38eea70() {
   return (neuron0x38e2b70()*-0.250975);
}

double NNfunction_ns_chi01_cL::synapse0x38ee500() {
   return (neuron0x38e2eb0()*0.5373);
}

double NNfunction_ns_chi01_cL::synapse0x38ee540() {
   return (neuron0x38e3410()*0.452645);
}

double NNfunction_ns_chi01_cL::synapse0x38eebc0() {
   return (neuron0x38e3750()*-0.444948);
}

double NNfunction_ns_chi01_cL::synapse0x38eec00() {
   return (neuron0x38e3a90()*0.777772);
}

double NNfunction_ns_chi01_cL::synapse0x38eec40() {
   return (neuron0x38e3dd0()*0.0354109);
}

double NNfunction_ns_chi01_cL::synapse0x38eec80() {
   return (neuron0x38e4110()*0.148189);
}

double NNfunction_ns_chi01_cL::synapse0x38eecc0() {
   return (neuron0x38e4450()*0.121146);
}

double NNfunction_ns_chi01_cL::synapse0x38eed00() {
   return (neuron0x38e4790()*-0.197554);
}

double NNfunction_ns_chi01_cL::synapse0x38ef080() {
   return (neuron0x38dfb40()*0.0107312);
}

double NNfunction_ns_chi01_cL::synapse0x38ef0c0() {
   return (neuron0x38dfdf0()*-0.0180179);
}

double NNfunction_ns_chi01_cL::synapse0x38ef100() {
   return (neuron0x38e0130()*-0.0775728);
}

double NNfunction_ns_chi01_cL::synapse0x38ef140() {
   return (neuron0x38e0470()*3.4335);
}

double NNfunction_ns_chi01_cL::synapse0x38ef180() {
   return (neuron0x38e07b0()*-0.0453846);
}

double NNfunction_ns_chi01_cL::synapse0x38ef1c0() {
   return (neuron0x38e0af0()*-0.0186658);
}

double NNfunction_ns_chi01_cL::synapse0x38ef200() {
   return (neuron0x38e0e30()*-0.0329701);
}

double NNfunction_ns_chi01_cL::synapse0x38ef240() {
   return (neuron0x38e1170()*0.0344363);
}

double NNfunction_ns_chi01_cL::synapse0x38ef280() {
   return (neuron0x38e14b0()*-0.00985904);
}

double NNfunction_ns_chi01_cL::synapse0x38ef2c0() {
   return (neuron0x38e17f0()*0.0137924);
}

double NNfunction_ns_chi01_cL::synapse0x38ef300() {
   return (neuron0x38e1b30()*-0.0120195);
}

double NNfunction_ns_chi01_cL::synapse0x38ef340() {
   return (neuron0x38e1e70()*0.0233284);
}

double NNfunction_ns_chi01_cL::synapse0x38ef380() {
   return (neuron0x38e21b0()*-0.360056);
}

double NNfunction_ns_chi01_cL::synapse0x38ef3c0() {
   return (neuron0x38e24f0()*-0.0149348);
}

double NNfunction_ns_chi01_cL::synapse0x38ef400() {
   return (neuron0x38e2830()*-0.0218036);
}

double NNfunction_ns_chi01_cL::synapse0x38ef440() {
   return (neuron0x38e2b70()*-0.00982685);
}

double NNfunction_ns_chi01_cL::synapse0x38eeed0() {
   return (neuron0x38e2eb0()*0.0208473);
}

double NNfunction_ns_chi01_cL::synapse0x38eef10() {
   return (neuron0x38e3410()*-0.00330919);
}

double NNfunction_ns_chi01_cL::synapse0x38ef590() {
   return (neuron0x38e3750()*-0.0226175);
}

double NNfunction_ns_chi01_cL::synapse0x38ef5d0() {
   return (neuron0x38e3a90()*0.0147308);
}

double NNfunction_ns_chi01_cL::synapse0x38ef610() {
   return (neuron0x38e3dd0()*-0.00709828);
}

double NNfunction_ns_chi01_cL::synapse0x38ef650() {
   return (neuron0x38e4110()*0.00597841);
}

double NNfunction_ns_chi01_cL::synapse0x38ef690() {
   return (neuron0x38e4450()*-0.00768101);
}

double NNfunction_ns_chi01_cL::synapse0x38ef6d0() {
   return (neuron0x38e4790()*-0.0367889);
}

double NNfunction_ns_chi01_cL::synapse0x38efa50() {
   return (neuron0x38dfb40()*-0.106823);
}

double NNfunction_ns_chi01_cL::synapse0x38dfcd0() {
   return (neuron0x38dfdf0()*-0.0140512);
}

double NNfunction_ns_chi01_cL::synapse0x38dfd10() {
   return (neuron0x38e0130()*-1.33222);
}

double NNfunction_ns_chi01_cL::synapse0x38e0010() {
   return (neuron0x38e0470()*0.0109685);
}

double NNfunction_ns_chi01_cL::synapse0x38e0050() {
   return (neuron0x38e07b0()*-0.00699571);
}

double NNfunction_ns_chi01_cL::synapse0x38e0350() {
   return (neuron0x38e0af0()*0.0188577);
}

double NNfunction_ns_chi01_cL::synapse0x38e0390() {
   return (neuron0x38e0e30()*-0.00879858);
}

double NNfunction_ns_chi01_cL::synapse0x38e0690() {
   return (neuron0x38e1170()*0.00795724);
}

double NNfunction_ns_chi01_cL::synapse0x38e06d0() {
   return (neuron0x38e14b0()*0.0190046);
}

double NNfunction_ns_chi01_cL::synapse0x38e09d0() {
   return (neuron0x38e17f0()*0.00910819);
}

double NNfunction_ns_chi01_cL::synapse0x38e0a10() {
   return (neuron0x38e1b30()*0.0185762);
}

double NNfunction_ns_chi01_cL::synapse0x38e0d10() {
   return (neuron0x38e1e70()*-0.0222381);
}

double NNfunction_ns_chi01_cL::synapse0x38e0d50() {
   return (neuron0x38e21b0()*0.181746);
}

double NNfunction_ns_chi01_cL::synapse0x38e1050() {
   return (neuron0x38e24f0()*-0.00879366);
}

double NNfunction_ns_chi01_cL::synapse0x38e1090() {
   return (neuron0x38e2830()*0.0415888);
}

double NNfunction_ns_chi01_cL::synapse0x38e1390() {
   return (neuron0x38e2b70()*0.0143803);
}

double NNfunction_ns_chi01_cL::synapse0x38e13d0() {
   return (neuron0x38e2eb0()*-0.00706839);
}

double NNfunction_ns_chi01_cL::synapse0x38e16d0() {
   return (neuron0x38e3410()*-0.0042749);
}

double NNfunction_ns_chi01_cL::synapse0x38e1710() {
   return (neuron0x38e3750()*-0.00524736);
}

double NNfunction_ns_chi01_cL::synapse0x38e1a10() {
   return (neuron0x38e3a90()*-0.00235669);
}

double NNfunction_ns_chi01_cL::synapse0x38e1a50() {
   return (neuron0x38e3dd0()*0.0227257);
}

double NNfunction_ns_chi01_cL::synapse0x38e1d50() {
   return (neuron0x38e4110()*0.013784);
}

double NNfunction_ns_chi01_cL::synapse0x38e1d90() {
   return (neuron0x38e4450()*0.00624738);
}

double NNfunction_ns_chi01_cL::synapse0x38e2090() {
   return (neuron0x38e4790()*-6.9351);
}

double NNfunction_ns_chi01_cL::synapse0x38e20d0() {
   return (neuron0x38dfb40()*2.27686);
}

double NNfunction_ns_chi01_cL::synapse0x38e2d90() {
   return (neuron0x38dfdf0()*0.17679);
}

double NNfunction_ns_chi01_cL::synapse0x38e2dd0() {
   return (neuron0x38e0130()*-0.0375289);
}

double NNfunction_ns_chi01_cL::synapse0x38ef8a0() {
   return (neuron0x38e0470()*0.199015);
}

double NNfunction_ns_chi01_cL::synapse0x38ef8e0() {
   return (neuron0x38e07b0()*-0.748129);
}

double NNfunction_ns_chi01_cL::synapse0x38e30d0() {
   return (neuron0x38e0af0()*-1.16484);
}

double NNfunction_ns_chi01_cL::synapse0x38e3110() {
   return (neuron0x38e0e30()*-0.55035);
}

double NNfunction_ns_chi01_cL::synapse0x38e3630() {
   return (neuron0x38e1170()*-1.13758);
}

double NNfunction_ns_chi01_cL::synapse0x38e3670() {
   return (neuron0x38e14b0()*-0.536579);
}

double NNfunction_ns_chi01_cL::synapse0x38e3970() {
   return (neuron0x38e17f0()*0.408913);
}

double NNfunction_ns_chi01_cL::synapse0x38e39b0() {
   return (neuron0x38e1b30()*-2.12388);
}

double NNfunction_ns_chi01_cL::synapse0x38e3cb0() {
   return (neuron0x38e1e70()*2.04057);
}

double NNfunction_ns_chi01_cL::synapse0x38e3cf0() {
   return (neuron0x38e21b0()*2.75422);
}

double NNfunction_ns_chi01_cL::synapse0x38e3ff0() {
   return (neuron0x38e24f0()*-0.463575);
}

double NNfunction_ns_chi01_cL::synapse0x38e4030() {
   return (neuron0x38e2830()*-0.503119);
}

double NNfunction_ns_chi01_cL::synapse0x38e4330() {
   return (neuron0x38e2b70()*-0.754182);
}

double NNfunction_ns_chi01_cL::synapse0x38e4370() {
   return (neuron0x38e2eb0()*0.0258788);
}

double NNfunction_ns_chi01_cL::synapse0x38e4670() {
   return (neuron0x38e3410()*0.872949);
}

double NNfunction_ns_chi01_cL::synapse0x38e46b0() {
   return (neuron0x38e3750()*1.2735);
}

double NNfunction_ns_chi01_cL::synapse0x38e49b0() {
   return (neuron0x38e3a90()*1.63229);
}

double NNfunction_ns_chi01_cL::synapse0x38e49f0() {
   return (neuron0x38e3dd0()*0.495414);
}

double NNfunction_ns_chi01_cL::synapse0x38e23d0() {
   return (neuron0x38e4110()*-0.618648);
}

double NNfunction_ns_chi01_cL::synapse0x38e2410() {
   return (neuron0x38e4450()*0.492672);
}

double NNfunction_ns_chi01_cL::synapse0x38f17c0() {
   return (neuron0x38e4790()*2.16337);
}

double NNfunction_ns_chi01_cL::synapse0x38f1b40() {
   return (neuron0x38dfb40()*4.15759);
}

double NNfunction_ns_chi01_cL::synapse0x38f1b80() {
   return (neuron0x38dfdf0()*0.125908);
}

double NNfunction_ns_chi01_cL::synapse0x38f1bc0() {
   return (neuron0x38e0130()*-0.495253);
}

double NNfunction_ns_chi01_cL::synapse0x38f1c00() {
   return (neuron0x38e0470()*1.8316);
}

double NNfunction_ns_chi01_cL::synapse0x38f1c40() {
   return (neuron0x38e07b0()*0.681393);
}

double NNfunction_ns_chi01_cL::synapse0x38f1c80() {
   return (neuron0x38e0af0()*-0.610584);
}

double NNfunction_ns_chi01_cL::synapse0x38f1cc0() {
   return (neuron0x38e0e30()*-0.403904);
}

double NNfunction_ns_chi01_cL::synapse0x38f1d00() {
   return (neuron0x38e1170()*0.406213);
}

double NNfunction_ns_chi01_cL::synapse0x38f1d40() {
   return (neuron0x38e14b0()*-0.191529);
}

double NNfunction_ns_chi01_cL::synapse0x38f1d80() {
   return (neuron0x38e17f0()*0.175041);
}

double NNfunction_ns_chi01_cL::synapse0x38f1dc0() {
   return (neuron0x38e1b30()*0.982876);
}

double NNfunction_ns_chi01_cL::synapse0x38f1e00() {
   return (neuron0x38e1e70()*-0.210707);
}

double NNfunction_ns_chi01_cL::synapse0x38f1e40() {
   return (neuron0x38e21b0()*2.83975);
}

double NNfunction_ns_chi01_cL::synapse0x38f1e80() {
   return (neuron0x38e24f0()*0.141497);
}

double NNfunction_ns_chi01_cL::synapse0x38f1ec0() {
   return (neuron0x38e2830()*0.739129);
}

double NNfunction_ns_chi01_cL::synapse0x38f1f00() {
   return (neuron0x38e2b70()*-0.53579);
}

double NNfunction_ns_chi01_cL::synapse0x38f1990() {
   return (neuron0x38e2eb0()*-0.945138);
}

double NNfunction_ns_chi01_cL::synapse0x38f19d0() {
   return (neuron0x38e3410()*-1.325);
}

double NNfunction_ns_chi01_cL::synapse0x38f2050() {
   return (neuron0x38e3750()*-1.72141);
}

double NNfunction_ns_chi01_cL::synapse0x38f2090() {
   return (neuron0x38e3a90()*-1.54699);
}

double NNfunction_ns_chi01_cL::synapse0x38f20d0() {
   return (neuron0x38e3dd0()*0.620658);
}

double NNfunction_ns_chi01_cL::synapse0x38f2110() {
   return (neuron0x38e4110()*-1.12767);
}

double NNfunction_ns_chi01_cL::synapse0x38f2150() {
   return (neuron0x38e4450()*0.428316);
}

double NNfunction_ns_chi01_cL::synapse0x38f2190() {
   return (neuron0x38e4790()*2.02074);
}

double NNfunction_ns_chi01_cL::synapse0x38f2510() {
   return (neuron0x38dfb40()*0.00480366);
}

double NNfunction_ns_chi01_cL::synapse0x38f2550() {
   return (neuron0x38dfdf0()*0.0136699);
}

double NNfunction_ns_chi01_cL::synapse0x38f2590() {
   return (neuron0x38e0130()*-0.11708);
}

double NNfunction_ns_chi01_cL::synapse0x38f25d0() {
   return (neuron0x38e0470()*0.0133538);
}

double NNfunction_ns_chi01_cL::synapse0x38f2610() {
   return (neuron0x38e07b0()*0.0281432);
}

double NNfunction_ns_chi01_cL::synapse0x38f2650() {
   return (neuron0x38e0af0()*-0.00427347);
}

double NNfunction_ns_chi01_cL::synapse0x38f2690() {
   return (neuron0x38e0e30()*0.00507626);
}

double NNfunction_ns_chi01_cL::synapse0x38f26d0() {
   return (neuron0x38e1170()*0.00877449);
}

double NNfunction_ns_chi01_cL::synapse0x38f2710() {
   return (neuron0x38e14b0()*0.00587763);
}

double NNfunction_ns_chi01_cL::synapse0x38f2750() {
   return (neuron0x38e17f0()*-0.0135739);
}

double NNfunction_ns_chi01_cL::synapse0x38f2790() {
   return (neuron0x38e1b30()*-0.000375755);
}

double NNfunction_ns_chi01_cL::synapse0x38f27d0() {
   return (neuron0x38e1e70()*-0.00977046);
}

double NNfunction_ns_chi01_cL::synapse0x38f2810() {
   return (neuron0x38e21b0()*-0.00265043);
}

double NNfunction_ns_chi01_cL::synapse0x38f2850() {
   return (neuron0x38e24f0()*-0.0184376);
}

double NNfunction_ns_chi01_cL::synapse0x38f2890() {
   return (neuron0x38e2830()*-4.3112e-05);
}

double NNfunction_ns_chi01_cL::synapse0x38f28d0() {
   return (neuron0x38e2b70()*-0.0170284);
}

double NNfunction_ns_chi01_cL::synapse0x38f2360() {
   return (neuron0x38e2eb0()*0.0176827);
}

double NNfunction_ns_chi01_cL::synapse0x38f23a0() {
   return (neuron0x38e3410()*-0.00334048);
}

double NNfunction_ns_chi01_cL::synapse0x38f2a20() {
   return (neuron0x38e3750()*-0.0277433);
}

double NNfunction_ns_chi01_cL::synapse0x38f2a60() {
   return (neuron0x38e3a90()*-0.037433);
}

double NNfunction_ns_chi01_cL::synapse0x38f2aa0() {
   return (neuron0x38e3dd0()*0.0164562);
}

double NNfunction_ns_chi01_cL::synapse0x38f2ae0() {
   return (neuron0x38e4110()*-0.0114041);
}

double NNfunction_ns_chi01_cL::synapse0x38f2b20() {
   return (neuron0x38e4450()*-0.0137141);
}

double NNfunction_ns_chi01_cL::synapse0x38f2b60() {
   return (neuron0x38e4790()*-28.3769);
}

double NNfunction_ns_chi01_cL::synapse0x38f2ee0() {
   return (neuron0x38dfb40()*-1.40175);
}

double NNfunction_ns_chi01_cL::synapse0x38f2f20() {
   return (neuron0x38dfdf0()*0.719653);
}

double NNfunction_ns_chi01_cL::synapse0x38f2f60() {
   return (neuron0x38e0130()*-0.484708);
}

double NNfunction_ns_chi01_cL::synapse0x38f2fa0() {
   return (neuron0x38e0470()*0.930075);
}

double NNfunction_ns_chi01_cL::synapse0x38f2fe0() {
   return (neuron0x38e07b0()*0.254719);
}

double NNfunction_ns_chi01_cL::synapse0x38f3020() {
   return (neuron0x38e0af0()*1.12528);
}

double NNfunction_ns_chi01_cL::synapse0x38f3060() {
   return (neuron0x38e0e30()*0.00749105);
}

double NNfunction_ns_chi01_cL::synapse0x38f30a0() {
   return (neuron0x38e1170()*-0.420741);
}

double NNfunction_ns_chi01_cL::synapse0x38f30e0() {
   return (neuron0x38e14b0()*0.839515);
}

double NNfunction_ns_chi01_cL::synapse0x38f3120() {
   return (neuron0x38e17f0()*0.0402581);
}

double NNfunction_ns_chi01_cL::synapse0x38f3160() {
   return (neuron0x38e1b30()*-0.52004);
}

double NNfunction_ns_chi01_cL::synapse0x38f31a0() {
   return (neuron0x38e1e70()*-1.24652);
}

double NNfunction_ns_chi01_cL::synapse0x38f31e0() {
   return (neuron0x38e21b0()*0.315289);
}

double NNfunction_ns_chi01_cL::synapse0x38f3220() {
   return (neuron0x38e24f0()*-1.17736);
}

double NNfunction_ns_chi01_cL::synapse0x38f3260() {
   return (neuron0x38e2830()*0.957774);
}

double NNfunction_ns_chi01_cL::synapse0x38f32a0() {
   return (neuron0x38e2b70()*-0.460788);
}

double NNfunction_ns_chi01_cL::synapse0x38f2d30() {
   return (neuron0x38e2eb0()*1.14613);
}

double NNfunction_ns_chi01_cL::synapse0x38f2d70() {
   return (neuron0x38e3410()*-0.25444);
}

double NNfunction_ns_chi01_cL::synapse0x38f33f0() {
   return (neuron0x38e3750()*-0.963129);
}

double NNfunction_ns_chi01_cL::synapse0x38f3430() {
   return (neuron0x38e3a90()*0.946029);
}

double NNfunction_ns_chi01_cL::synapse0x38f3470() {
   return (neuron0x38e3dd0()*0.706968);
}

double NNfunction_ns_chi01_cL::synapse0x38f34b0() {
   return (neuron0x38e4110()*-1.42616);
}

double NNfunction_ns_chi01_cL::synapse0x38f34f0() {
   return (neuron0x38e4450()*-1.79036);
}

double NNfunction_ns_chi01_cL::synapse0x38f3530() {
   return (neuron0x38e4790()*0.361731);
}

double NNfunction_ns_chi01_cL::synapse0x38f38b0() {
   return (neuron0x38dfb40()*-0.0167792);
}

double NNfunction_ns_chi01_cL::synapse0x38f38f0() {
   return (neuron0x38dfdf0()*26.5916);
}

double NNfunction_ns_chi01_cL::synapse0x38f3930() {
   return (neuron0x38e0130()*-0.763377);
}

double NNfunction_ns_chi01_cL::synapse0x38f3970() {
   return (neuron0x38e0470()*0.00555107);
}

double NNfunction_ns_chi01_cL::synapse0x38f39b0() {
   return (neuron0x38e07b0()*-0.053136);
}

double NNfunction_ns_chi01_cL::synapse0x38f39f0() {
   return (neuron0x38e0af0()*0.00114444);
}

double NNfunction_ns_chi01_cL::synapse0x38f3a30() {
   return (neuron0x38e0e30()*-0.0163506);
}

double NNfunction_ns_chi01_cL::synapse0x38f3a70() {
   return (neuron0x38e1170()*-0.0118003);
}

double NNfunction_ns_chi01_cL::synapse0x38f3ab0() {
   return (neuron0x38e14b0()*-0.0180517);
}

double NNfunction_ns_chi01_cL::synapse0x38f3af0() {
   return (neuron0x38e17f0()*0.0132167);
}

double NNfunction_ns_chi01_cL::synapse0x38f3b30() {
   return (neuron0x38e1b30()*-0.00728096);
}

double NNfunction_ns_chi01_cL::synapse0x38f3b70() {
   return (neuron0x38e1e70()*-0.0187953);
}

double NNfunction_ns_chi01_cL::synapse0x38f3bb0() {
   return (neuron0x38e21b0()*-0.0368799);
}

double NNfunction_ns_chi01_cL::synapse0x38f3bf0() {
   return (neuron0x38e24f0()*-0.0443937);
}

double NNfunction_ns_chi01_cL::synapse0x38f3c30() {
   return (neuron0x38e2830()*0.0171182);
}

double NNfunction_ns_chi01_cL::synapse0x38f3c70() {
   return (neuron0x38e2b70()*0.0202235);
}

double NNfunction_ns_chi01_cL::synapse0x38f3700() {
   return (neuron0x38e2eb0()*-0.000856411);
}

double NNfunction_ns_chi01_cL::synapse0x38f3740() {
   return (neuron0x38e3410()*0.00334514);
}

double NNfunction_ns_chi01_cL::synapse0x38f3dc0() {
   return (neuron0x38e3750()*-0.048433);
}

double NNfunction_ns_chi01_cL::synapse0x38f3e00() {
   return (neuron0x38e3a90()*-0.00493164);
}

double NNfunction_ns_chi01_cL::synapse0x38f3e40() {
   return (neuron0x38e3dd0()*0.00833337);
}

double NNfunction_ns_chi01_cL::synapse0x38f3e80() {
   return (neuron0x38e4110()*5.85725e-06);
}

double NNfunction_ns_chi01_cL::synapse0x38f3ec0() {
   return (neuron0x38e4450()*-0.000128206);
}

double NNfunction_ns_chi01_cL::synapse0x38f3f00() {
   return (neuron0x38e4790()*-0.00346038);
}

double NNfunction_ns_chi01_cL::synapse0x38f4280() {
   return (neuron0x38dfb40()*0.0431638);
}

double NNfunction_ns_chi01_cL::synapse0x38f42c0() {
   return (neuron0x38dfdf0()*-0.0644878);
}

double NNfunction_ns_chi01_cL::synapse0x38f4300() {
   return (neuron0x38e0130()*3.86457);
}

double NNfunction_ns_chi01_cL::synapse0x38f4340() {
   return (neuron0x38e0470()*-0.0297282);
}

double NNfunction_ns_chi01_cL::synapse0x38f4380() {
   return (neuron0x38e07b0()*0.0176695);
}

double NNfunction_ns_chi01_cL::synapse0x38f43c0() {
   return (neuron0x38e0af0()*0.0209891);
}

double NNfunction_ns_chi01_cL::synapse0x38f4400() {
   return (neuron0x38e0e30()*0.00419554);
}

double NNfunction_ns_chi01_cL::synapse0x38f4440() {
   return (neuron0x38e1170()*-0.0101586);
}

double NNfunction_ns_chi01_cL::synapse0x38f4480() {
   return (neuron0x38e14b0()*-0.0106893);
}

double NNfunction_ns_chi01_cL::synapse0x38ec640() {
   return (neuron0x38e17f0()*0.00294286);
}

double NNfunction_ns_chi01_cL::synapse0x38ec680() {
   return (neuron0x38e1b30()*-0.0455677);
}

double NNfunction_ns_chi01_cL::synapse0x38ec6c0() {
   return (neuron0x38e1e70()*0.0217752);
}

double NNfunction_ns_chi01_cL::synapse0x38ec700() {
   return (neuron0x38e21b0()*-0.42666);
}

double NNfunction_ns_chi01_cL::synapse0x38ec740() {
   return (neuron0x38e24f0()*-0.00319724);
}

double NNfunction_ns_chi01_cL::synapse0x38ec780() {
   return (neuron0x38e2830()*0.0228826);
}

double NNfunction_ns_chi01_cL::synapse0x38ec7c0() {
   return (neuron0x38e2b70()*0.0200613);
}

double NNfunction_ns_chi01_cL::synapse0x38f40d0() {
   return (neuron0x38e2eb0()*-0.0178142);
}

double NNfunction_ns_chi01_cL::synapse0x38f4110() {
   return (neuron0x38e3410()*-0.0104921);
}

double NNfunction_ns_chi01_cL::synapse0x38ec910() {
   return (neuron0x38e3750()*-0.0325783);
}

double NNfunction_ns_chi01_cL::synapse0x38ec950() {
   return (neuron0x38e3a90()*-0.00682684);
}

double NNfunction_ns_chi01_cL::synapse0x38ec990() {
   return (neuron0x38e3dd0()*-0.0188321);
}

double NNfunction_ns_chi01_cL::synapse0x38ec9d0() {
   return (neuron0x38e4110()*-0.00759199);
}

double NNfunction_ns_chi01_cL::synapse0x38eca10() {
   return (neuron0x38e4450()*-0.0131781);
}

double NNfunction_ns_chi01_cL::synapse0x38eca50() {
   return (neuron0x38e4790()*0.156204);
}

double NNfunction_ns_chi01_cL::synapse0x38ecdd0() {
   return (neuron0x38dfb40()*-0.00697784);
}

double NNfunction_ns_chi01_cL::synapse0x38ece10() {
   return (neuron0x38dfdf0()*-0.48295);
}

double NNfunction_ns_chi01_cL::synapse0x38ece50() {
   return (neuron0x38e0130()*0.00699614);
}

double NNfunction_ns_chi01_cL::synapse0x38ece90() {
   return (neuron0x38e0470()*-1.24769);
}

double NNfunction_ns_chi01_cL::synapse0x38eced0() {
   return (neuron0x38e07b0()*1.58943);
}

double NNfunction_ns_chi01_cL::synapse0x38ecf10() {
   return (neuron0x38e0af0()*0.394917);
}

double NNfunction_ns_chi01_cL::synapse0x38ecf50() {
   return (neuron0x38e0e30()*-0.113151);
}

double NNfunction_ns_chi01_cL::synapse0x38ecf90() {
   return (neuron0x38e1170()*0.501617);
}

double NNfunction_ns_chi01_cL::synapse0x38ecfd0() {
   return (neuron0x38e14b0()*0.919925);
}

double NNfunction_ns_chi01_cL::synapse0x38ed010() {
   return (neuron0x38e17f0()*-0.872234);
}

double NNfunction_ns_chi01_cL::synapse0x38ed050() {
   return (neuron0x38e1b30()*-2.5137);
}

double NNfunction_ns_chi01_cL::synapse0x38ed090() {
   return (neuron0x38e1e70()*0.893098);
}

double NNfunction_ns_chi01_cL::synapse0x38ed0d0() {
   return (neuron0x38e21b0()*1.21659);
}

double NNfunction_ns_chi01_cL::synapse0x38ed110() {
   return (neuron0x38e24f0()*-0.856588);
}

double NNfunction_ns_chi01_cL::synapse0x38ed150() {
   return (neuron0x38e2830()*-0.553042);
}

double NNfunction_ns_chi01_cL::synapse0x38ed190() {
   return (neuron0x38e2b70()*0.0325655);
}

double NNfunction_ns_chi01_cL::synapse0x38ecc20() {
   return (neuron0x38e2eb0()*-0.296559);
}

double NNfunction_ns_chi01_cL::synapse0x38ecc60() {
   return (neuron0x38e3410()*-0.49887);
}

double NNfunction_ns_chi01_cL::synapse0x38ed2e0() {
   return (neuron0x38e3750()*-0.941226);
}

double NNfunction_ns_chi01_cL::synapse0x38ed320() {
   return (neuron0x38e3a90()*-0.626831);
}

double NNfunction_ns_chi01_cL::synapse0x38ed360() {
   return (neuron0x38e3dd0()*0.597598);
}

double NNfunction_ns_chi01_cL::synapse0x38ed3a0() {
   return (neuron0x38e4110()*-0.904227);
}

double NNfunction_ns_chi01_cL::synapse0x38ed3e0() {
   return (neuron0x38e4450()*-0.354634);
}

double NNfunction_ns_chi01_cL::synapse0x38ed420() {
   return (neuron0x38e4790()*-0.469815);
}

double NNfunction_ns_chi01_cL::synapse0x38ed5f0() {
   return (neuron0x38dfb40()*0.438679);
}

double NNfunction_ns_chi01_cL::synapse0x38f6680() {
   return (neuron0x38dfdf0()*0.606161);
}

double NNfunction_ns_chi01_cL::synapse0x38f66c0() {
   return (neuron0x38e0130()*-0.274179);
}

double NNfunction_ns_chi01_cL::synapse0x38f6700() {
   return (neuron0x38e0470()*1.56527);
}

double NNfunction_ns_chi01_cL::synapse0x38f6740() {
   return (neuron0x38e07b0()*0.364506);
}

double NNfunction_ns_chi01_cL::synapse0x38f6780() {
   return (neuron0x38e0af0()*1.1672);
}

double NNfunction_ns_chi01_cL::synapse0x38f67c0() {
   return (neuron0x38e0e30()*0.193511);
}

double NNfunction_ns_chi01_cL::synapse0x38f6800() {
   return (neuron0x38e1170()*0.717164);
}

double NNfunction_ns_chi01_cL::synapse0x38f6840() {
   return (neuron0x38e14b0()*1.30208);
}

double NNfunction_ns_chi01_cL::synapse0x38f6880() {
   return (neuron0x38e17f0()*-1.38063);
}

double NNfunction_ns_chi01_cL::synapse0x38f68c0() {
   return (neuron0x38e1b30()*-1.91427);
}

double NNfunction_ns_chi01_cL::synapse0x38f6900() {
   return (neuron0x38e1e70()*1.26155);
}

double NNfunction_ns_chi01_cL::synapse0x38f6940() {
   return (neuron0x38e21b0()*-2.48902);
}

double NNfunction_ns_chi01_cL::synapse0x38f6980() {
   return (neuron0x38e24f0()*-0.128984);
}

double NNfunction_ns_chi01_cL::synapse0x38f69c0() {
   return (neuron0x38e2830()*0.0316402);
}

double NNfunction_ns_chi01_cL::synapse0x38f6a00() {
   return (neuron0x38e2b70()*0.208682);
}

double NNfunction_ns_chi01_cL::synapse0x38f64d0() {
   return (neuron0x38e2eb0()*0.906936);
}

double NNfunction_ns_chi01_cL::synapse0x38f6510() {
   return (neuron0x38e3410()*-0.201126);
}

double NNfunction_ns_chi01_cL::synapse0x38f6b50() {
   return (neuron0x38e3750()*0.390806);
}

double NNfunction_ns_chi01_cL::synapse0x38f6b90() {
   return (neuron0x38e3a90()*-1.57371);
}

double NNfunction_ns_chi01_cL::synapse0x38f6bd0() {
   return (neuron0x38e3dd0()*0.0326216);
}

double NNfunction_ns_chi01_cL::synapse0x38f6c10() {
   return (neuron0x38e4110()*0.325739);
}

double NNfunction_ns_chi01_cL::synapse0x38f6c50() {
   return (neuron0x38e4450()*-0.0336273);
}

double NNfunction_ns_chi01_cL::synapse0x38f6c90() {
   return (neuron0x38e4790()*0.135221);
}

double NNfunction_ns_chi01_cL::synapse0x38f7010() {
   return (neuron0x38dfb40()*-0.00809221);
}

double NNfunction_ns_chi01_cL::synapse0x38f7050() {
   return (neuron0x38dfdf0()*-0.0786393);
}

double NNfunction_ns_chi01_cL::synapse0x38f7090() {
   return (neuron0x38e0130()*-0.760604);
}

double NNfunction_ns_chi01_cL::synapse0x38f70d0() {
   return (neuron0x38e0470()*0.261572);
}

double NNfunction_ns_chi01_cL::synapse0x38f7110() {
   return (neuron0x38e07b0()*-0.555868);
}

double NNfunction_ns_chi01_cL::synapse0x38f7150() {
   return (neuron0x38e0af0()*0.373047);
}

double NNfunction_ns_chi01_cL::synapse0x38f7190() {
   return (neuron0x38e0e30()*0.951836);
}

double NNfunction_ns_chi01_cL::synapse0x38f71d0() {
   return (neuron0x38e1170()*-0.242415);
}

double NNfunction_ns_chi01_cL::synapse0x38f7210() {
   return (neuron0x38e14b0()*-1.05271);
}

double NNfunction_ns_chi01_cL::synapse0x38f7250() {
   return (neuron0x38e17f0()*0.13864);
}

double NNfunction_ns_chi01_cL::synapse0x38f7290() {
   return (neuron0x38e1b30()*0.249321);
}

double NNfunction_ns_chi01_cL::synapse0x38f72d0() {
   return (neuron0x38e1e70()*-0.268166);
}

double NNfunction_ns_chi01_cL::synapse0x38f7310() {
   return (neuron0x38e21b0()*-0.433058);
}

double NNfunction_ns_chi01_cL::synapse0x38f7350() {
   return (neuron0x38e24f0()*-0.663805);
}

double NNfunction_ns_chi01_cL::synapse0x38f7390() {
   return (neuron0x38e2830()*-0.579559);
}

double NNfunction_ns_chi01_cL::synapse0x38f73d0() {
   return (neuron0x38e2b70()*-0.75219);
}

double NNfunction_ns_chi01_cL::synapse0x38f6e60() {
   return (neuron0x38e2eb0()*1.88919);
}

double NNfunction_ns_chi01_cL::synapse0x38f6ea0() {
   return (neuron0x38e3410()*0.392033);
}

double NNfunction_ns_chi01_cL::synapse0x38f7520() {
   return (neuron0x38e3750()*-1.83782);
}

double NNfunction_ns_chi01_cL::synapse0x38f7560() {
   return (neuron0x38e3a90()*0.503093);
}

double NNfunction_ns_chi01_cL::synapse0x38f75a0() {
   return (neuron0x38e3dd0()*-0.517161);
}

double NNfunction_ns_chi01_cL::synapse0x38f75e0() {
   return (neuron0x38e4110()*0.266127);
}

double NNfunction_ns_chi01_cL::synapse0x38f7620() {
   return (neuron0x38e4450()*0.304859);
}

double NNfunction_ns_chi01_cL::synapse0x38f7660() {
   return (neuron0x38e4790()*-1.63379);
}

double NNfunction_ns_chi01_cL::synapse0x38f79e0() {
   return (neuron0x38dfb40()*0.107339);
}

double NNfunction_ns_chi01_cL::synapse0x38f7a20() {
   return (neuron0x38dfdf0()*-0.0140367);
}

double NNfunction_ns_chi01_cL::synapse0x38f7a60() {
   return (neuron0x38e0130()*-6.10584);
}

double NNfunction_ns_chi01_cL::synapse0x38f7aa0() {
   return (neuron0x38e0470()*-0.108272);
}

double NNfunction_ns_chi01_cL::synapse0x38f7ae0() {
   return (neuron0x38e07b0()*0.0449475);
}

double NNfunction_ns_chi01_cL::synapse0x38f7b20() {
   return (neuron0x38e0af0()*-0.064705);
}

double NNfunction_ns_chi01_cL::synapse0x38f7b60() {
   return (neuron0x38e0e30()*0.0633141);
}

double NNfunction_ns_chi01_cL::synapse0x38f7ba0() {
   return (neuron0x38e1170()*0.0542494);
}

double NNfunction_ns_chi01_cL::synapse0x38f7be0() {
   return (neuron0x38e14b0()*-0.018334);
}

double NNfunction_ns_chi01_cL::synapse0x38f7c20() {
   return (neuron0x38e17f0()*0.0111515);
}

double NNfunction_ns_chi01_cL::synapse0x38f7c60() {
   return (neuron0x38e1b30()*-0.0159894);
}

double NNfunction_ns_chi01_cL::synapse0x38f7ca0() {
   return (neuron0x38e1e70()*0.0664908);
}

double NNfunction_ns_chi01_cL::synapse0x38f7ce0() {
   return (neuron0x38e21b0()*0.179878);
}

double NNfunction_ns_chi01_cL::synapse0x38f7d20() {
   return (neuron0x38e24f0()*-0.00543625);
}

double NNfunction_ns_chi01_cL::synapse0x38f7d60() {
   return (neuron0x38e2830()*-0.0720229);
}

double NNfunction_ns_chi01_cL::synapse0x38f7da0() {
   return (neuron0x38e2b70()*-0.00104988);
}

double NNfunction_ns_chi01_cL::synapse0x38f7830() {
   return (neuron0x38e2eb0()*-0.0338727);
}

double NNfunction_ns_chi01_cL::synapse0x38f7870() {
   return (neuron0x38e3410()*-0.00712239);
}

double NNfunction_ns_chi01_cL::synapse0x38f7ef0() {
   return (neuron0x38e3750()*-0.00372821);
}

double NNfunction_ns_chi01_cL::synapse0x38f7f30() {
   return (neuron0x38e3a90()*0.124859);
}

double NNfunction_ns_chi01_cL::synapse0x38f7f70() {
   return (neuron0x38e3dd0()*0.0265613);
}

double NNfunction_ns_chi01_cL::synapse0x38f7fb0() {
   return (neuron0x38e4110()*0.0490301);
}

double NNfunction_ns_chi01_cL::synapse0x38f7ff0() {
   return (neuron0x38e4450()*-0.00867062);
}

double NNfunction_ns_chi01_cL::synapse0x38f8030() {
   return (neuron0x38e4790()*-9.07128);
}

double NNfunction_ns_chi01_cL::synapse0x38f83b0() {
   return (neuron0x38dfb40()*0.399696);
}

double NNfunction_ns_chi01_cL::synapse0x38f83f0() {
   return (neuron0x38dfdf0()*-0.467892);
}

double NNfunction_ns_chi01_cL::synapse0x38f8430() {
   return (neuron0x38e0130()*1.46732);
}

double NNfunction_ns_chi01_cL::synapse0x38f8470() {
   return (neuron0x38e0470()*1.91782);
}

double NNfunction_ns_chi01_cL::synapse0x38f84b0() {
   return (neuron0x38e07b0()*1.12742);
}

double NNfunction_ns_chi01_cL::synapse0x38f84f0() {
   return (neuron0x38e0af0()*0.626794);
}

double NNfunction_ns_chi01_cL::synapse0x38f8530() {
   return (neuron0x38e0e30()*0.240496);
}

double NNfunction_ns_chi01_cL::synapse0x38f8570() {
   return (neuron0x38e1170()*0.331706);
}

double NNfunction_ns_chi01_cL::synapse0x38f85b0() {
   return (neuron0x38e14b0()*0.880918);
}

double NNfunction_ns_chi01_cL::synapse0x38f85f0() {
   return (neuron0x38e17f0()*0.451169);
}

double NNfunction_ns_chi01_cL::synapse0x38f8630() {
   return (neuron0x38e1b30()*-0.330098);
}

double NNfunction_ns_chi01_cL::synapse0x38f8670() {
   return (neuron0x38e1e70()*0.326595);
}

double NNfunction_ns_chi01_cL::synapse0x38f86b0() {
   return (neuron0x38e21b0()*-0.275686);
}

double NNfunction_ns_chi01_cL::synapse0x38f86f0() {
   return (neuron0x38e24f0()*-3.91683);
}

double NNfunction_ns_chi01_cL::synapse0x38f8730() {
   return (neuron0x38e2830()*-1.33616);
}

double NNfunction_ns_chi01_cL::synapse0x38f8770() {
   return (neuron0x38e2b70()*0.219725);
}

double NNfunction_ns_chi01_cL::synapse0x38f8200() {
   return (neuron0x38e2eb0()*-0.179325);
}

double NNfunction_ns_chi01_cL::synapse0x38f8240() {
   return (neuron0x38e3410()*0.304021);
}

double NNfunction_ns_chi01_cL::synapse0x38f88c0() {
   return (neuron0x38e3750()*0.612588);
}

double NNfunction_ns_chi01_cL::synapse0x38f8900() {
   return (neuron0x38e3a90()*-0.246935);
}

double NNfunction_ns_chi01_cL::synapse0x38f8940() {
   return (neuron0x38e3dd0()*0.393951);
}

double NNfunction_ns_chi01_cL::synapse0x38f8980() {
   return (neuron0x38e4110()*0.104048);
}

double NNfunction_ns_chi01_cL::synapse0x38f89c0() {
   return (neuron0x38e4450()*-0.0748082);
}

double NNfunction_ns_chi01_cL::synapse0x38f8a00() {
   return (neuron0x38e4790()*0.857432);
}

double NNfunction_ns_chi01_cL::synapse0x38f8d80() {
   return (neuron0x38dfb40()*-0.0129231);
}

double NNfunction_ns_chi01_cL::synapse0x38f8dc0() {
   return (neuron0x38dfdf0()*-6.4372);
}

double NNfunction_ns_chi01_cL::synapse0x38f8e00() {
   return (neuron0x38e0130()*-2.07309);
}

double NNfunction_ns_chi01_cL::synapse0x38f8e40() {
   return (neuron0x38e0470()*-0.048926);
}

double NNfunction_ns_chi01_cL::synapse0x38f8e80() {
   return (neuron0x38e07b0()*0.0409715);
}

double NNfunction_ns_chi01_cL::synapse0x38f8ec0() {
   return (neuron0x38e0af0()*-0.0120808);
}

double NNfunction_ns_chi01_cL::synapse0x38f8f00() {
   return (neuron0x38e0e30()*0.00894025);
}

double NNfunction_ns_chi01_cL::synapse0x38f8f40() {
   return (neuron0x38e1170()*-0.0220782);
}

double NNfunction_ns_chi01_cL::synapse0x38f8f80() {
   return (neuron0x38e14b0()*0.00459458);
}

double NNfunction_ns_chi01_cL::synapse0x38f8fc0() {
   return (neuron0x38e17f0()*0.010456);
}

double NNfunction_ns_chi01_cL::synapse0x38f9000() {
   return (neuron0x38e1b30()*0.0177938);
}

double NNfunction_ns_chi01_cL::synapse0x38f9040() {
   return (neuron0x38e1e70()*-0.00936548);
}

double NNfunction_ns_chi01_cL::synapse0x38f9080() {
   return (neuron0x38e21b0()*0.32137);
}

double NNfunction_ns_chi01_cL::synapse0x38f90c0() {
   return (neuron0x38e24f0()*-0.0562473);
}

double NNfunction_ns_chi01_cL::synapse0x38f9100() {
   return (neuron0x38e2830()*0.027239);
}

double NNfunction_ns_chi01_cL::synapse0x38f9140() {
   return (neuron0x38e2b70()*0.018908);
}

double NNfunction_ns_chi01_cL::synapse0x38f8bd0() {
   return (neuron0x38e2eb0()*0.0107381);
}

double NNfunction_ns_chi01_cL::synapse0x38f8c10() {
   return (neuron0x38e3410()*-0.0329614);
}

double NNfunction_ns_chi01_cL::synapse0x38f9290() {
   return (neuron0x38e3750()*-0.00604323);
}

double NNfunction_ns_chi01_cL::synapse0x38f92d0() {
   return (neuron0x38e3a90()*0.0167657);
}

double NNfunction_ns_chi01_cL::synapse0x38f9310() {
   return (neuron0x38e3dd0()*0.0380451);
}

double NNfunction_ns_chi01_cL::synapse0x38f9350() {
   return (neuron0x38e4110()*-0.00502792);
}

double NNfunction_ns_chi01_cL::synapse0x38f9390() {
   return (neuron0x38e4450()*-0.0202832);
}

double NNfunction_ns_chi01_cL::synapse0x38f93d0() {
   return (neuron0x38e4790()*-0.00018047);
}

double NNfunction_ns_chi01_cL::synapse0x38f9750() {
   return (neuron0x38dfb40()*-0.0264283);
}

double NNfunction_ns_chi01_cL::synapse0x38f9790() {
   return (neuron0x38dfdf0()*0.00744242);
}

double NNfunction_ns_chi01_cL::synapse0x38f97d0() {
   return (neuron0x38e0130()*0.02406);
}

double NNfunction_ns_chi01_cL::synapse0x38f9810() {
   return (neuron0x38e0470()*-4.89148);
}

double NNfunction_ns_chi01_cL::synapse0x38f9850() {
   return (neuron0x38e07b0()*-0.0543324);
}

double NNfunction_ns_chi01_cL::synapse0x38f9890() {
   return (neuron0x38e0af0()*0.000859439);
}

double NNfunction_ns_chi01_cL::synapse0x38f98d0() {
   return (neuron0x38e0e30()*-0.0103906);
}

double NNfunction_ns_chi01_cL::synapse0x38f9910() {
   return (neuron0x38e1170()*0.00389083);
}

double NNfunction_ns_chi01_cL::synapse0x38f9950() {
   return (neuron0x38e14b0()*0.00356989);
}

double NNfunction_ns_chi01_cL::synapse0x38f9990() {
   return (neuron0x38e17f0()*-0.024778);
}

double NNfunction_ns_chi01_cL::synapse0x38f99d0() {
   return (neuron0x38e1b30()*-0.00133872);
}

double NNfunction_ns_chi01_cL::synapse0x38f9a10() {
   return (neuron0x38e1e70()*-0.00734721);
}

double NNfunction_ns_chi01_cL::synapse0x38f9a50() {
   return (neuron0x38e21b0()*-0.0966161);
}

double NNfunction_ns_chi01_cL::synapse0x38f9a90() {
   return (neuron0x38e24f0()*-9.80613e-05);
}

double NNfunction_ns_chi01_cL::synapse0x38f9ad0() {
   return (neuron0x38e2830()*-0.0231558);
}

double NNfunction_ns_chi01_cL::synapse0x38f9b10() {
   return (neuron0x38e2b70()*-0.0072367);
}

double NNfunction_ns_chi01_cL::synapse0x38f95a0() {
   return (neuron0x38e2eb0()*-0.0470763);
}

double NNfunction_ns_chi01_cL::synapse0x38f95e0() {
   return (neuron0x38e3410()*-0.000963187);
}

double NNfunction_ns_chi01_cL::synapse0x38f9c60() {
   return (neuron0x38e3750()*0.0111068);
}

double NNfunction_ns_chi01_cL::synapse0x38f9ca0() {
   return (neuron0x38e3a90()*-0.000946741);
}

double NNfunction_ns_chi01_cL::synapse0x38f9ce0() {
   return (neuron0x38e3dd0()*-0.0143568);
}

double NNfunction_ns_chi01_cL::synapse0x38f9d20() {
   return (neuron0x38e4110()*0.0100229);
}

double NNfunction_ns_chi01_cL::synapse0x38f9d60() {
   return (neuron0x38e4450()*0.0128611);
}

double NNfunction_ns_chi01_cL::synapse0x38f9da0() {
   return (neuron0x38e4790()*0.0150141);
}

double NNfunction_ns_chi01_cL::synapse0x38fa120() {
   return (neuron0x38dfb40()*-0.0252219);
}

double NNfunction_ns_chi01_cL::synapse0x38fa160() {
   return (neuron0x38dfdf0()*-11.8463);
}

double NNfunction_ns_chi01_cL::synapse0x38fa1a0() {
   return (neuron0x38e0130()*1.97884);
}

double NNfunction_ns_chi01_cL::synapse0x38fa1e0() {
   return (neuron0x38e0470()*-0.00497189);
}

double NNfunction_ns_chi01_cL::synapse0x38fa220() {
   return (neuron0x38e07b0()*-0.0334269);
}

double NNfunction_ns_chi01_cL::synapse0x38fa260() {
   return (neuron0x38e0af0()*0.00549588);
}

double NNfunction_ns_chi01_cL::synapse0x38fa2a0() {
   return (neuron0x38e0e30()*-0.0328288);
}

double NNfunction_ns_chi01_cL::synapse0x38fa2e0() {
   return (neuron0x38e1170()*-0.0235973);
}

double NNfunction_ns_chi01_cL::synapse0x38fa320() {
   return (neuron0x38e14b0()*0.00930355);
}

double NNfunction_ns_chi01_cL::synapse0x38fa360() {
   return (neuron0x38e17f0()*0.0210921);
}

double NNfunction_ns_chi01_cL::synapse0x38fa3a0() {
   return (neuron0x38e1b30()*-0.00169352);
}

double NNfunction_ns_chi01_cL::synapse0x38fa3e0() {
   return (neuron0x38e1e70()*-0.0220345);
}

double NNfunction_ns_chi01_cL::synapse0x38fa420() {
   return (neuron0x38e21b0()*-0.390075);
}

double NNfunction_ns_chi01_cL::synapse0x38fa460() {
   return (neuron0x38e24f0()*-0.0406073);
}

double NNfunction_ns_chi01_cL::synapse0x38fa4a0() {
   return (neuron0x38e2830()*-0.0280111);
}

double NNfunction_ns_chi01_cL::synapse0x38fa4e0() {
   return (neuron0x38e2b70()*-0.0246489);
}

double NNfunction_ns_chi01_cL::synapse0x38f9f70() {
   return (neuron0x38e2eb0()*0.00144542);
}

double NNfunction_ns_chi01_cL::synapse0x38f9fb0() {
   return (neuron0x38e3410()*0.0130698);
}

double NNfunction_ns_chi01_cL::synapse0x38fa630() {
   return (neuron0x38e3750()*0.00264424);
}

double NNfunction_ns_chi01_cL::synapse0x38fa670() {
   return (neuron0x38e3a90()*-0.0437288);
}

double NNfunction_ns_chi01_cL::synapse0x38fa6b0() {
   return (neuron0x38e3dd0()*0.00327488);
}

double NNfunction_ns_chi01_cL::synapse0x38fa6f0() {
   return (neuron0x38e4110()*-0.00703073);
}

double NNfunction_ns_chi01_cL::synapse0x38fa730() {
   return (neuron0x38e4450()*-0.0074425);
}

double NNfunction_ns_chi01_cL::synapse0x38fa770() {
   return (neuron0x38e4790()*-0.0451313);
}

double NNfunction_ns_chi01_cL::synapse0x38faaf0() {
   return (neuron0x38dfb40()*-0.0590154);
}

double NNfunction_ns_chi01_cL::synapse0x38fab30() {
   return (neuron0x38dfdf0()*0.00170229);
}

double NNfunction_ns_chi01_cL::synapse0x38fab70() {
   return (neuron0x38e0130()*-0.149396);
}

double NNfunction_ns_chi01_cL::synapse0x38fabb0() {
   return (neuron0x38e0470()*0.0498372);
}

double NNfunction_ns_chi01_cL::synapse0x38fabf0() {
   return (neuron0x38e07b0()*-0.0392515);
}

double NNfunction_ns_chi01_cL::synapse0x38fac30() {
   return (neuron0x38e0af0()*0.0179223);
}

double NNfunction_ns_chi01_cL::synapse0x38fac70() {
   return (neuron0x38e0e30()*-0.0273897);
}

double NNfunction_ns_chi01_cL::synapse0x38facb0() {
   return (neuron0x38e1170()*-0.0114261);
}

double NNfunction_ns_chi01_cL::synapse0x38facf0() {
   return (neuron0x38e14b0()*-0.0103032);
}

double NNfunction_ns_chi01_cL::synapse0x38fad30() {
   return (neuron0x38e17f0()*-0.00429869);
}

double NNfunction_ns_chi01_cL::synapse0x38fad70() {
   return (neuron0x38e1b30()*0.0119551);
}

double NNfunction_ns_chi01_cL::synapse0x38fadb0() {
   return (neuron0x38e1e70()*0.0149081);
}

double NNfunction_ns_chi01_cL::synapse0x38fadf0() {
   return (neuron0x38e21b0()*2.31356);
}

double NNfunction_ns_chi01_cL::synapse0x38fae30() {
   return (neuron0x38e24f0()*0.0871152);
}

double NNfunction_ns_chi01_cL::synapse0x38fae70() {
   return (neuron0x38e2830()*-0.00931788);
}

double NNfunction_ns_chi01_cL::synapse0x38faeb0() {
   return (neuron0x38e2b70()*0.0196254);
}

double NNfunction_ns_chi01_cL::synapse0x38fa940() {
   return (neuron0x38e2eb0()*0.0644364);
}

double NNfunction_ns_chi01_cL::synapse0x38fa980() {
   return (neuron0x38e3410()*0.0148535);
}

double NNfunction_ns_chi01_cL::synapse0x38fb000() {
   return (neuron0x38e3750()*0.0241602);
}

double NNfunction_ns_chi01_cL::synapse0x38fb040() {
   return (neuron0x38e3a90()*0.0110508);
}

double NNfunction_ns_chi01_cL::synapse0x38fb080() {
   return (neuron0x38e3dd0()*-0.0524573);
}

double NNfunction_ns_chi01_cL::synapse0x38fb0c0() {
   return (neuron0x38e4110()*-0.00944569);
}

double NNfunction_ns_chi01_cL::synapse0x38fb100() {
   return (neuron0x38e4450()*0.0100461);
}

double NNfunction_ns_chi01_cL::synapse0x38fb140() {
   return (neuron0x38e4790()*0.0374582);
}

double NNfunction_ns_chi01_cL::synapse0x38fb4c0() {
   return (neuron0x38dfb40()*0.20589);
}

double NNfunction_ns_chi01_cL::synapse0x38efa90() {
   return (neuron0x38dfdf0()*0.21867);
}

double NNfunction_ns_chi01_cL::synapse0x38efad0() {
   return (neuron0x38e0130()*1.01357);
}

double NNfunction_ns_chi01_cL::synapse0x38efb10() {
   return (neuron0x38e0470()*1.16069);
}

double NNfunction_ns_chi01_cL::synapse0x38efd60() {
   return (neuron0x38e07b0()*0.765995);
}

double NNfunction_ns_chi01_cL::synapse0x38efda0() {
   return (neuron0x38e0af0()*-0.154924);
}

double NNfunction_ns_chi01_cL::synapse0x38efde0() {
   return (neuron0x38e0e30()*-1.38088);
}

double NNfunction_ns_chi01_cL::synapse0x38f0030() {
   return (neuron0x38e1170()*-0.827937);
}

double NNfunction_ns_chi01_cL::synapse0x38f0070() {
   return (neuron0x38e14b0()*0.193196);
}

double NNfunction_ns_chi01_cL::synapse0x38f02c0() {
   return (neuron0x38e17f0()*-0.566988);
}

double NNfunction_ns_chi01_cL::synapse0x38f0300() {
   return (neuron0x38e1b30()*0.692878);
}

double NNfunction_ns_chi01_cL::synapse0x38f0340() {
   return (neuron0x38e1e70()*-0.0871857);
}

double NNfunction_ns_chi01_cL::synapse0x38f0590() {
   return (neuron0x38e21b0()*0.338915);
}

double NNfunction_ns_chi01_cL::synapse0x38f05d0() {
   return (neuron0x38e24f0()*0.227731);
}

double NNfunction_ns_chi01_cL::synapse0x38f0820() {
   return (neuron0x38e2830()*0.407442);
}

double NNfunction_ns_chi01_cL::synapse0x38f0860() {
   return (neuron0x38e2b70()*-1.06614);
}

double NNfunction_ns_chi01_cL::synapse0x38fb310() {
   return (neuron0x38e2eb0()*-0.273484);
}

double NNfunction_ns_chi01_cL::synapse0x38fb350() {
   return (neuron0x38e3410()*0.334685);
}

double NNfunction_ns_chi01_cL::synapse0x38f09b0() {
   return (neuron0x38e3750()*-1.62636);
}

double NNfunction_ns_chi01_cL::synapse0x38f0ec0() {
   return (neuron0x38e3a90()*-0.814969);
}

double NNfunction_ns_chi01_cL::synapse0x38f0f00() {
   return (neuron0x38e3dd0()*0.132842);
}

double NNfunction_ns_chi01_cL::synapse0x38f0f40() {
   return (neuron0x38e4110()*-1.1324);
}

double NNfunction_ns_chi01_cL::synapse0x38f1190() {
   return (neuron0x38e4450()*0.213444);
}

double NNfunction_ns_chi01_cL::synapse0x38f11d0() {
   return (neuron0x38e4790()*0.703953);
}

double NNfunction_ns_chi01_cL::synapse0x38f0a80() {
   return (neuron0x38dfb40()*0.001015);
}

double NNfunction_ns_chi01_cL::synapse0x38f0ac0() {
   return (neuron0x38dfdf0()*0.00417709);
}

double NNfunction_ns_chi01_cL::synapse0x38f0b00() {
   return (neuron0x38e0130()*0.243285);
}

double NNfunction_ns_chi01_cL::synapse0x38f0b40() {
   return (neuron0x38e0470()*0.0341637);
}

double NNfunction_ns_chi01_cL::synapse0x38f14c0() {
   return (neuron0x38e07b0()*-0.023723);
}

double NNfunction_ns_chi01_cL::synapse0x38fd810() {
   return (neuron0x38e0af0()*-0.0211427);
}

double NNfunction_ns_chi01_cL::synapse0x38fd850() {
   return (neuron0x38e0e30()*-0.00392276);
}

double NNfunction_ns_chi01_cL::synapse0x38fd890() {
   return (neuron0x38e1170()*-0.00845581);
}

double NNfunction_ns_chi01_cL::synapse0x38fd8d0() {
   return (neuron0x38e14b0()*-0.00166753);
}

double NNfunction_ns_chi01_cL::synapse0x38fd910() {
   return (neuron0x38e17f0()*0.00258647);
}

double NNfunction_ns_chi01_cL::synapse0x38fd950() {
   return (neuron0x38e1b30()*0.000294043);
}

double NNfunction_ns_chi01_cL::synapse0x38fd990() {
   return (neuron0x38e1e70()*0.00188512);
}

double NNfunction_ns_chi01_cL::synapse0x38fd9d0() {
   return (neuron0x38e21b0()*0.916614);
}

double NNfunction_ns_chi01_cL::synapse0x38fda10() {
   return (neuron0x38e24f0()*0.0243617);
}

double NNfunction_ns_chi01_cL::synapse0x38fda50() {
   return (neuron0x38e2830()*-0.0126546);
}

double NNfunction_ns_chi01_cL::synapse0x38fda90() {
   return (neuron0x38e2b70()*-0.0136518);
}

double NNfunction_ns_chi01_cL::synapse0x38f13a0() {
   return (neuron0x38e2eb0()*0.0118606);
}

double NNfunction_ns_chi01_cL::synapse0x38f13e0() {
   return (neuron0x38e3410()*0.0104361);
}

double NNfunction_ns_chi01_cL::synapse0x38fdbe0() {
   return (neuron0x38e3750()*-0.00776917);
}

double NNfunction_ns_chi01_cL::synapse0x38fdc20() {
   return (neuron0x38e3a90()*0.0165837);
}

double NNfunction_ns_chi01_cL::synapse0x38fdc60() {
   return (neuron0x38e3dd0()*-0.00632953);
}

double NNfunction_ns_chi01_cL::synapse0x38fdca0() {
   return (neuron0x38e4110()*0.0143399);
}

double NNfunction_ns_chi01_cL::synapse0x38fdce0() {
   return (neuron0x38e4450()*0.00188238);
}

double NNfunction_ns_chi01_cL::synapse0x38fdd20() {
   return (neuron0x38e4790()*0.0290573);
}

double NNfunction_ns_chi01_cL::synapse0x38fe0a0() {
   return (neuron0x38dfb40()*0.174192);
}

double NNfunction_ns_chi01_cL::synapse0x38fe0e0() {
   return (neuron0x38dfdf0()*0.0757715);
}

double NNfunction_ns_chi01_cL::synapse0x38fe120() {
   return (neuron0x38e0130()*0.448642);
}

double NNfunction_ns_chi01_cL::synapse0x38fe160() {
   return (neuron0x38e0470()*3.17436);
}

double NNfunction_ns_chi01_cL::synapse0x38fe1a0() {
   return (neuron0x38e07b0()*-0.214407);
}

double NNfunction_ns_chi01_cL::synapse0x38fe1e0() {
   return (neuron0x38e0af0()*-0.165497);
}

double NNfunction_ns_chi01_cL::synapse0x38fe220() {
   return (neuron0x38e0e30()*-0.0898256);
}

double NNfunction_ns_chi01_cL::synapse0x38fe260() {
   return (neuron0x38e1170()*-0.0873955);
}

double NNfunction_ns_chi01_cL::synapse0x38fe2a0() {
   return (neuron0x38e14b0()*0.0699254);
}

double NNfunction_ns_chi01_cL::synapse0x38fe2e0() {
   return (neuron0x38e17f0()*-0.0757466);
}

double NNfunction_ns_chi01_cL::synapse0x38fe320() {
   return (neuron0x38e1b30()*-0.0287684);
}

double NNfunction_ns_chi01_cL::synapse0x38fe360() {
   return (neuron0x38e1e70()*0.13643);
}

double NNfunction_ns_chi01_cL::synapse0x38fe3a0() {
   return (neuron0x38e21b0()*-0.0876367);
}

double NNfunction_ns_chi01_cL::synapse0x38fe3e0() {
   return (neuron0x38e24f0()*-0.0094612);
}

double NNfunction_ns_chi01_cL::synapse0x38fe420() {
   return (neuron0x38e2830()*0.0118044);
}

double NNfunction_ns_chi01_cL::synapse0x38fe460() {
   return (neuron0x38e2b70()*0.083331);
}

double NNfunction_ns_chi01_cL::synapse0x38fdef0() {
   return (neuron0x38e2eb0()*-0.0257317);
}

double NNfunction_ns_chi01_cL::synapse0x38fdf30() {
   return (neuron0x38e3410()*0.0702106);
}

double NNfunction_ns_chi01_cL::synapse0x38fe5b0() {
   return (neuron0x38e3750()*0.0949742);
}

double NNfunction_ns_chi01_cL::synapse0x38fe5f0() {
   return (neuron0x38e3a90()*0.0533063);
}

double NNfunction_ns_chi01_cL::synapse0x38fe630() {
   return (neuron0x38e3dd0()*-0.0842939);
}

double NNfunction_ns_chi01_cL::synapse0x38fe670() {
   return (neuron0x38e4110()*-0.0283082);
}

double NNfunction_ns_chi01_cL::synapse0x38fe6b0() {
   return (neuron0x38e4450()*0.0219044);
}

double NNfunction_ns_chi01_cL::synapse0x38fe6f0() {
   return (neuron0x38e4790()*0.805422);
}

double NNfunction_ns_chi01_cL::synapse0x38fea70() {
   return (neuron0x38dfb40()*0.594617);
}

double NNfunction_ns_chi01_cL::synapse0x38feab0() {
   return (neuron0x38dfdf0()*0.48565);
}

double NNfunction_ns_chi01_cL::synapse0x38feaf0() {
   return (neuron0x38e0130()*0.028093);
}

double NNfunction_ns_chi01_cL::synapse0x38feb30() {
   return (neuron0x38e0470()*-0.386394);
}

double NNfunction_ns_chi01_cL::synapse0x38feb70() {
   return (neuron0x38e07b0()*0.252005);
}

double NNfunction_ns_chi01_cL::synapse0x38febb0() {
   return (neuron0x38e0af0()*-1.3358);
}

double NNfunction_ns_chi01_cL::synapse0x38febf0() {
   return (neuron0x38e0e30()*0.879588);
}

double NNfunction_ns_chi01_cL::synapse0x38fec30() {
   return (neuron0x38e1170()*-0.0537408);
}

double NNfunction_ns_chi01_cL::synapse0x38fec70() {
   return (neuron0x38e14b0()*-1.06938);
}

double NNfunction_ns_chi01_cL::synapse0x38fecb0() {
   return (neuron0x38e17f0()*-1.15905);
}

double NNfunction_ns_chi01_cL::synapse0x38fecf0() {
   return (neuron0x38e1b30()*-0.225988);
}

double NNfunction_ns_chi01_cL::synapse0x38fed30() {
   return (neuron0x38e1e70()*-0.394777);
}

double NNfunction_ns_chi01_cL::synapse0x38fed70() {
   return (neuron0x38e21b0()*-2.81922);
}

double NNfunction_ns_chi01_cL::synapse0x38fedb0() {
   return (neuron0x38e24f0()*-0.870282);
}

double NNfunction_ns_chi01_cL::synapse0x38fedf0() {
   return (neuron0x38e2830()*-1.13101);
}

double NNfunction_ns_chi01_cL::synapse0x38fee30() {
   return (neuron0x38e2b70()*-0.57588);
}

double NNfunction_ns_chi01_cL::synapse0x38fe8c0() {
   return (neuron0x38e2eb0()*-0.537939);
}

double NNfunction_ns_chi01_cL::synapse0x38fe900() {
   return (neuron0x38e3410()*-0.380807);
}

double NNfunction_ns_chi01_cL::synapse0x38fef80() {
   return (neuron0x38e3750()*-0.000565649);
}

double NNfunction_ns_chi01_cL::synapse0x38fefc0() {
   return (neuron0x38e3a90()*0.552597);
}

double NNfunction_ns_chi01_cL::synapse0x38ff000() {
   return (neuron0x38e3dd0()*1.61568);
}

double NNfunction_ns_chi01_cL::synapse0x38ff040() {
   return (neuron0x38e4110()*-0.290563);
}

double NNfunction_ns_chi01_cL::synapse0x38ff080() {
   return (neuron0x38e4450()*-0.450432);
}

double NNfunction_ns_chi01_cL::synapse0x38ff0c0() {
   return (neuron0x38e4790()*-0.0371684);
}

double NNfunction_ns_chi01_cL::synapse0x38ff440() {
   return (neuron0x38dfb40()*-0.101473);
}

double NNfunction_ns_chi01_cL::synapse0x38ff480() {
   return (neuron0x38dfdf0()*0.112768);
}

double NNfunction_ns_chi01_cL::synapse0x38ff4c0() {
   return (neuron0x38e0130()*-0.257181);
}

double NNfunction_ns_chi01_cL::synapse0x38ff500() {
   return (neuron0x38e0470()*-0.856512);
}

double NNfunction_ns_chi01_cL::synapse0x38ff540() {
   return (neuron0x38e07b0()*0.017317);
}

double NNfunction_ns_chi01_cL::synapse0x38ff580() {
   return (neuron0x38e0af0()*0.0972477);
}

double NNfunction_ns_chi01_cL::synapse0x38ff5c0() {
   return (neuron0x38e0e30()*-0.0615204);
}

double NNfunction_ns_chi01_cL::synapse0x38ff600() {
   return (neuron0x38e1170()*0.0565826);
}

double NNfunction_ns_chi01_cL::synapse0x38ff640() {
   return (neuron0x38e14b0()*-0.0195601);
}

double NNfunction_ns_chi01_cL::synapse0x38ff680() {
   return (neuron0x38e17f0()*0.0791253);
}

double NNfunction_ns_chi01_cL::synapse0x38ff6c0() {
   return (neuron0x38e1b30()*0.106553);
}

double NNfunction_ns_chi01_cL::synapse0x38ff700() {
   return (neuron0x38e1e70()*-0.193591);
}

double NNfunction_ns_chi01_cL::synapse0x38ff740() {
   return (neuron0x38e21b0()*0.159001);
}

double NNfunction_ns_chi01_cL::synapse0x38ff780() {
   return (neuron0x38e24f0()*-0.0138699);
}

double NNfunction_ns_chi01_cL::synapse0x38ff7c0() {
   return (neuron0x38e2830()*0.314319);
}

double NNfunction_ns_chi01_cL::synapse0x38ff800() {
   return (neuron0x38e2b70()*0.281595);
}

double NNfunction_ns_chi01_cL::synapse0x38ff290() {
   return (neuron0x38e2eb0()*0.0984654);
}

double NNfunction_ns_chi01_cL::synapse0x38ff2d0() {
   return (neuron0x38e3410()*0.0438854);
}

double NNfunction_ns_chi01_cL::synapse0x38ff950() {
   return (neuron0x38e3750()*-0.104184);
}

double NNfunction_ns_chi01_cL::synapse0x38ff990() {
   return (neuron0x38e3a90()*-0.162439);
}

double NNfunction_ns_chi01_cL::synapse0x38ff9d0() {
   return (neuron0x38e3dd0()*-0.0690501);
}

double NNfunction_ns_chi01_cL::synapse0x38ffa10() {
   return (neuron0x38e4110()*0.0192576);
}

double NNfunction_ns_chi01_cL::synapse0x38ffa50() {
   return (neuron0x38e4450()*-0.0808637);
}

double NNfunction_ns_chi01_cL::synapse0x38ffa90() {
   return (neuron0x38e4790()*-0.146941);
}

double NNfunction_ns_chi01_cL::synapse0x38ffe10() {
   return (neuron0x38dfb40()*0.281981);
}

double NNfunction_ns_chi01_cL::synapse0x38ffe50() {
   return (neuron0x38dfdf0()*-0.29834);
}

double NNfunction_ns_chi01_cL::synapse0x38ffe90() {
   return (neuron0x38e0130()*-0.180158);
}

double NNfunction_ns_chi01_cL::synapse0x38ffed0() {
   return (neuron0x38e0470()*1.183);
}

double NNfunction_ns_chi01_cL::synapse0x38fff10() {
   return (neuron0x38e07b0()*-1.01686);
}

double NNfunction_ns_chi01_cL::synapse0x38fff50() {
   return (neuron0x38e0af0()*-0.324836);
}

double NNfunction_ns_chi01_cL::synapse0x38fff90() {
   return (neuron0x38e0e30()*-0.374787);
}

double NNfunction_ns_chi01_cL::synapse0x38fffd0() {
   return (neuron0x38e1170()*-0.952559);
}

double NNfunction_ns_chi01_cL::synapse0x3900010() {
   return (neuron0x38e14b0()*-0.447231);
}

double NNfunction_ns_chi01_cL::synapse0x3900050() {
   return (neuron0x38e17f0()*-0.552226);
}

double NNfunction_ns_chi01_cL::synapse0x3900090() {
   return (neuron0x38e1b30()*-1.66912);
}

double NNfunction_ns_chi01_cL::synapse0x39000d0() {
   return (neuron0x38e1e70()*0.354655);
}

double NNfunction_ns_chi01_cL::synapse0x3900110() {
   return (neuron0x38e21b0()*0.476864);
}

double NNfunction_ns_chi01_cL::synapse0x3900150() {
   return (neuron0x38e24f0()*1.04334);
}

double NNfunction_ns_chi01_cL::synapse0x3900190() {
   return (neuron0x38e2830()*0.411417);
}

double NNfunction_ns_chi01_cL::synapse0x39001d0() {
   return (neuron0x38e2b70()*-0.707176);
}

double NNfunction_ns_chi01_cL::synapse0x38ffc60() {
   return (neuron0x38e2eb0()*0.807319);
}

double NNfunction_ns_chi01_cL::synapse0x38ffca0() {
   return (neuron0x38e3410()*-0.157279);
}

double NNfunction_ns_chi01_cL::synapse0x3900320() {
   return (neuron0x38e3750()*-0.251265);
}

double NNfunction_ns_chi01_cL::synapse0x3900360() {
   return (neuron0x38e3a90()*0.651546);
}

double NNfunction_ns_chi01_cL::synapse0x39003a0() {
   return (neuron0x38e3dd0()*-0.264152);
}

double NNfunction_ns_chi01_cL::synapse0x39003e0() {
   return (neuron0x38e4110()*-0.309842);
}

double NNfunction_ns_chi01_cL::synapse0x3900420() {
   return (neuron0x38e4450()*-0.667565);
}

double NNfunction_ns_chi01_cL::synapse0x3900460() {
   return (neuron0x38e4790()*-0.271281);
}

double NNfunction_ns_chi01_cL::synapse0x39007e0() {
   return (neuron0x38dfb40()*0.00887228);
}

double NNfunction_ns_chi01_cL::synapse0x3900820() {
   return (neuron0x38dfdf0()*-5.56318);
}

double NNfunction_ns_chi01_cL::synapse0x3900860() {
   return (neuron0x38e0130()*-0.372461);
}

double NNfunction_ns_chi01_cL::synapse0x39008a0() {
   return (neuron0x38e0470()*0.0208663);
}

double NNfunction_ns_chi01_cL::synapse0x39008e0() {
   return (neuron0x38e07b0()*0.0231717);
}

double NNfunction_ns_chi01_cL::synapse0x3900920() {
   return (neuron0x38e0af0()*-0.00542511);
}

double NNfunction_ns_chi01_cL::synapse0x3900960() {
   return (neuron0x38e0e30()*0.0478133);
}

double NNfunction_ns_chi01_cL::synapse0x39009a0() {
   return (neuron0x38e1170()*0.033434);
}

double NNfunction_ns_chi01_cL::synapse0x39009e0() {
   return (neuron0x38e14b0()*0.0244116);
}

double NNfunction_ns_chi01_cL::synapse0x3900a20() {
   return (neuron0x38e17f0()*-0.0313592);
}

double NNfunction_ns_chi01_cL::synapse0x3900a60() {
   return (neuron0x38e1b30()*-0.00835514);
}

double NNfunction_ns_chi01_cL::synapse0x3900aa0() {
   return (neuron0x38e1e70()*0.00141667);
}

double NNfunction_ns_chi01_cL::synapse0x3900ae0() {
   return (neuron0x38e21b0()*-0.14105);
}

double NNfunction_ns_chi01_cL::synapse0x3900b20() {
   return (neuron0x38e24f0()*0.0563641);
}

double NNfunction_ns_chi01_cL::synapse0x3900b60() {
   return (neuron0x38e2830()*0.0205657);
}

double NNfunction_ns_chi01_cL::synapse0x3900ba0() {
   return (neuron0x38e2b70()*0.0240754);
}

double NNfunction_ns_chi01_cL::synapse0x3900630() {
   return (neuron0x38e2eb0()*-0.0415483);
}

double NNfunction_ns_chi01_cL::synapse0x3900670() {
   return (neuron0x38e3410()*0.00885889);
}

double NNfunction_ns_chi01_cL::synapse0x3900cf0() {
   return (neuron0x38e3750()*0.0140839);
}

double NNfunction_ns_chi01_cL::synapse0x3900d30() {
   return (neuron0x38e3a90()*0.0449338);
}

double NNfunction_ns_chi01_cL::synapse0x3900d70() {
   return (neuron0x38e3dd0()*-0.05967);
}

double NNfunction_ns_chi01_cL::synapse0x3900db0() {
   return (neuron0x38e4110()*0.000237843);
}

double NNfunction_ns_chi01_cL::synapse0x3900df0() {
   return (neuron0x38e4450()*0.0171714);
}

double NNfunction_ns_chi01_cL::synapse0x3900e30() {
   return (neuron0x38e4790()*0.876304);
}

double NNfunction_ns_chi01_cL::synapse0x39011b0() {
   return (neuron0x38dfb40()*0.0261538);
}

double NNfunction_ns_chi01_cL::synapse0x39011f0() {
   return (neuron0x38dfdf0()*0.0138731);
}

double NNfunction_ns_chi01_cL::synapse0x3901230() {
   return (neuron0x38e0130()*-0.0540421);
}

double NNfunction_ns_chi01_cL::synapse0x3901270() {
   return (neuron0x38e0470()*0.0133045);
}

double NNfunction_ns_chi01_cL::synapse0x39012b0() {
   return (neuron0x38e07b0()*0.023819);
}

double NNfunction_ns_chi01_cL::synapse0x39012f0() {
   return (neuron0x38e0af0()*-0.0105);
}

double NNfunction_ns_chi01_cL::synapse0x3901330() {
   return (neuron0x38e0e30()*0.00599411);
}

double NNfunction_ns_chi01_cL::synapse0x3901370() {
   return (neuron0x38e1170()*0.013606);
}

double NNfunction_ns_chi01_cL::synapse0x39013b0() {
   return (neuron0x38e14b0()*0.000431797);
}

double NNfunction_ns_chi01_cL::synapse0x39013f0() {
   return (neuron0x38e17f0()*-0.0172241);
}

double NNfunction_ns_chi01_cL::synapse0x3901430() {
   return (neuron0x38e1b30()*0.00405876);
}

double NNfunction_ns_chi01_cL::synapse0x3901470() {
   return (neuron0x38e1e70()*-0.00910173);
}

double NNfunction_ns_chi01_cL::synapse0x39014b0() {
   return (neuron0x38e21b0()*-0.0503482);
}

double NNfunction_ns_chi01_cL::synapse0x39014f0() {
   return (neuron0x38e24f0()*-0.00941885);
}

double NNfunction_ns_chi01_cL::synapse0x3901530() {
   return (neuron0x38e2830()*0.00299182);
}

double NNfunction_ns_chi01_cL::synapse0x3901570() {
   return (neuron0x38e2b70()*-0.00929686);
}

double NNfunction_ns_chi01_cL::synapse0x3901000() {
   return (neuron0x38e2eb0()*0.0212766);
}

double NNfunction_ns_chi01_cL::synapse0x3901040() {
   return (neuron0x38e3410()*-0.00984613);
}

double NNfunction_ns_chi01_cL::synapse0x39016c0() {
   return (neuron0x38e3750()*-0.0193489);
}

double NNfunction_ns_chi01_cL::synapse0x3901700() {
   return (neuron0x38e3a90()*-0.0316789);
}

double NNfunction_ns_chi01_cL::synapse0x3901740() {
   return (neuron0x38e3dd0()*0.014671);
}

double NNfunction_ns_chi01_cL::synapse0x3901780() {
   return (neuron0x38e4110()*-0.0113151);
}

double NNfunction_ns_chi01_cL::synapse0x39017c0() {
   return (neuron0x38e4450()*-0.00841254);
}

double NNfunction_ns_chi01_cL::synapse0x3901800() {
   return (neuron0x38e4790()*-34.6916);
}

double NNfunction_ns_chi01_cL::synapse0x3901b80() {
   return (neuron0x38dfb40()*0.317181);
}

double NNfunction_ns_chi01_cL::synapse0x3901bc0() {
   return (neuron0x38dfdf0()*0.156085);
}

double NNfunction_ns_chi01_cL::synapse0x3901c00() {
   return (neuron0x38e0130()*-0.0150242);
}

double NNfunction_ns_chi01_cL::synapse0x3901c40() {
   return (neuron0x38e0470()*-0.143153);
}

double NNfunction_ns_chi01_cL::synapse0x3901c80() {
   return (neuron0x38e07b0()*-0.0238997);
}

double NNfunction_ns_chi01_cL::synapse0x3901cc0() {
   return (neuron0x38e0af0()*0.18054);
}

double NNfunction_ns_chi01_cL::synapse0x3901d00() {
   return (neuron0x38e0e30()*-0.117698);
}

double NNfunction_ns_chi01_cL::synapse0x3901d40() {
   return (neuron0x38e1170()*0.229506);
}

double NNfunction_ns_chi01_cL::synapse0x3901d80() {
   return (neuron0x38e14b0()*0.0263851);
}

double NNfunction_ns_chi01_cL::synapse0x3901dc0() {
   return (neuron0x38e17f0()*0.177235);
}

double NNfunction_ns_chi01_cL::synapse0x3901e00() {
   return (neuron0x38e1b30()*0.0347523);
}

double NNfunction_ns_chi01_cL::synapse0x3901e40() {
   return (neuron0x38e1e70()*-0.0902149);
}

double NNfunction_ns_chi01_cL::synapse0x3901e80() {
   return (neuron0x38e21b0()*0.248464);
}

double NNfunction_ns_chi01_cL::synapse0x3901ec0() {
   return (neuron0x38e24f0()*-0.149322);
}

double NNfunction_ns_chi01_cL::synapse0x3901f00() {
   return (neuron0x38e2830()*0.111532);
}

double NNfunction_ns_chi01_cL::synapse0x3901f40() {
   return (neuron0x38e2b70()*-0.0721773);
}

double NNfunction_ns_chi01_cL::synapse0x39019d0() {
   return (neuron0x38e2eb0()*0.00335171);
}

double NNfunction_ns_chi01_cL::synapse0x3901a10() {
   return (neuron0x38e3410()*0.0066325);
}

double NNfunction_ns_chi01_cL::synapse0x3902090() {
   return (neuron0x38e3750()*0.0670589);
}

double NNfunction_ns_chi01_cL::synapse0x39020d0() {
   return (neuron0x38e3a90()*-0.174202);
}

double NNfunction_ns_chi01_cL::synapse0x3902110() {
   return (neuron0x38e3dd0()*0.0472947);
}

double NNfunction_ns_chi01_cL::synapse0x3902150() {
   return (neuron0x38e4110()*0.0347845);
}

double NNfunction_ns_chi01_cL::synapse0x3902190() {
   return (neuron0x38e4450()*0.11018);
}

double NNfunction_ns_chi01_cL::synapse0x39021d0() {
   return (neuron0x38e4790()*-0.567821);
}

double NNfunction_ns_chi01_cL::synapse0x38eac80() {
   return (neuron0x38dfb40()*-0.0359815);
}

double NNfunction_ns_chi01_cL::synapse0x38eacc0() {
   return (neuron0x38dfdf0()*-0.0205568);
}

double NNfunction_ns_chi01_cL::synapse0x38ead00() {
   return (neuron0x38e0130()*3.94649);
}

double NNfunction_ns_chi01_cL::synapse0x38ead40() {
   return (neuron0x38e0470()*0.072682);
}

double NNfunction_ns_chi01_cL::synapse0x38ead80() {
   return (neuron0x38e07b0()*-0.0166841);
}

double NNfunction_ns_chi01_cL::synapse0x38eadc0() {
   return (neuron0x38e0af0()*-0.0355391);
}

double NNfunction_ns_chi01_cL::synapse0x38eae00() {
   return (neuron0x38e0e30()*-0.00177951);
}

double NNfunction_ns_chi01_cL::synapse0x38eae40() {
   return (neuron0x38e1170()*-0.0583903);
}

double NNfunction_ns_chi01_cL::synapse0x3902960() {
   return (neuron0x38e14b0()*-0.0212779);
}

double NNfunction_ns_chi01_cL::synapse0x39029a0() {
   return (neuron0x38e17f0()*0.00894149);
}

double NNfunction_ns_chi01_cL::synapse0x39029e0() {
   return (neuron0x38e1b30()*0.000760172);
}

double NNfunction_ns_chi01_cL::synapse0x3902a20() {
   return (neuron0x38e1e70()*0.010435);
}

double NNfunction_ns_chi01_cL::synapse0x3902a60() {
   return (neuron0x38e21b0()*-0.0707173);
}

double NNfunction_ns_chi01_cL::synapse0x3902aa0() {
   return (neuron0x38e24f0()*0.0846866);
}

double NNfunction_ns_chi01_cL::synapse0x3902ae0() {
   return (neuron0x38e2830()*-0.0316118);
}

double NNfunction_ns_chi01_cL::synapse0x3902b20() {
   return (neuron0x38e2b70()*-0.0167548);
}

double NNfunction_ns_chi01_cL::synapse0x39023a0() {
   return (neuron0x38e2eb0()*-0.0195507);
}

double NNfunction_ns_chi01_cL::synapse0x39023e0() {
   return (neuron0x38e3410()*0.0271582);
}

double NNfunction_ns_chi01_cL::synapse0x3902c70() {
   return (neuron0x38e3750()*0.0186227);
}

double NNfunction_ns_chi01_cL::synapse0x3902cb0() {
   return (neuron0x38e3a90()*-0.0179075);
}

double NNfunction_ns_chi01_cL::synapse0x3902cf0() {
   return (neuron0x38e3dd0()*0.0354857);
}

double NNfunction_ns_chi01_cL::synapse0x3902d30() {
   return (neuron0x38e4110()*0.0155621);
}

double NNfunction_ns_chi01_cL::synapse0x3902d70() {
   return (neuron0x38e4450()*-0.0352139);
}

double NNfunction_ns_chi01_cL::synapse0x3902db0() {
   return (neuron0x38e4790()*-0.54418);
}

double NNfunction_ns_chi01_cL::synapse0x3903130() {
   return (neuron0x38dfb40()*0.097732);
}

double NNfunction_ns_chi01_cL::synapse0x3903170() {
   return (neuron0x38dfdf0()*-0.0374399);
}

double NNfunction_ns_chi01_cL::synapse0x39031b0() {
   return (neuron0x38e0130()*-0.511427);
}

double NNfunction_ns_chi01_cL::synapse0x39031f0() {
   return (neuron0x38e0470()*-1.10535);
}

double NNfunction_ns_chi01_cL::synapse0x3903230() {
   return (neuron0x38e07b0()*-0.028883);
}

double NNfunction_ns_chi01_cL::synapse0x3903270() {
   return (neuron0x38e0af0()*0.0586813);
}

double NNfunction_ns_chi01_cL::synapse0x39032b0() {
   return (neuron0x38e0e30()*-0.0994329);
}

double NNfunction_ns_chi01_cL::synapse0x39032f0() {
   return (neuron0x38e1170()*-0.044708);
}

double NNfunction_ns_chi01_cL::synapse0x3903330() {
   return (neuron0x38e14b0()*-0.0166702);
}

double NNfunction_ns_chi01_cL::synapse0x3903370() {
   return (neuron0x38e17f0()*-0.12048);
}

double NNfunction_ns_chi01_cL::synapse0x39033b0() {
   return (neuron0x38e1b30()*0.0537534);
}

double NNfunction_ns_chi01_cL::synapse0x39033f0() {
   return (neuron0x38e1e70()*0.21352);
}

double NNfunction_ns_chi01_cL::synapse0x3903430() {
   return (neuron0x38e21b0()*-0.426046);
}

double NNfunction_ns_chi01_cL::synapse0x3903470() {
   return (neuron0x38e24f0()*0.0482464);
}

double NNfunction_ns_chi01_cL::synapse0x39034b0() {
   return (neuron0x38e2830()*-0.0177146);
}

double NNfunction_ns_chi01_cL::synapse0x39034f0() {
   return (neuron0x38e2b70()*0.0244777);
}

double NNfunction_ns_chi01_cL::synapse0x3902f80() {
   return (neuron0x38e2eb0()*-0.102193);
}

double NNfunction_ns_chi01_cL::synapse0x3902fc0() {
   return (neuron0x38e3410()*-0.0157798);
}

double NNfunction_ns_chi01_cL::synapse0x3903640() {
   return (neuron0x38e3750()*-0.0266343);
}

double NNfunction_ns_chi01_cL::synapse0x3903680() {
   return (neuron0x38e3a90()*0.069384);
}

double NNfunction_ns_chi01_cL::synapse0x39036c0() {
   return (neuron0x38e3dd0()*0.0801668);
}

double NNfunction_ns_chi01_cL::synapse0x3903700() {
   return (neuron0x38e4110()*-0.00334702);
}

double NNfunction_ns_chi01_cL::synapse0x3903740() {
   return (neuron0x38e4450()*0.0540289);
}

double NNfunction_ns_chi01_cL::synapse0x3903780() {
   return (neuron0x38e4790()*-0.0675707);
}

double NNfunction_ns_chi01_cL::synapse0x3903b00() {
   return (neuron0x38dfb40()*-0.0171039);
}

double NNfunction_ns_chi01_cL::synapse0x3903b40() {
   return (neuron0x38dfdf0()*0.012053);
}

double NNfunction_ns_chi01_cL::synapse0x3903b80() {
   return (neuron0x38e0130()*-0.136235);
}

double NNfunction_ns_chi01_cL::synapse0x3903bc0() {
   return (neuron0x38e0470()*4.29338);
}

double NNfunction_ns_chi01_cL::synapse0x3903c00() {
   return (neuron0x38e07b0()*0.0839953);
}

double NNfunction_ns_chi01_cL::synapse0x3903c40() {
   return (neuron0x38e0af0()*0.0137631);
}

double NNfunction_ns_chi01_cL::synapse0x3903c80() {
   return (neuron0x38e0e30()*0.0468007);
}

double NNfunction_ns_chi01_cL::synapse0x3903cc0() {
   return (neuron0x38e1170()*-0.0498932);
}

double NNfunction_ns_chi01_cL::synapse0x3903d00() {
   return (neuron0x38e14b0()*0.0285266);
}

double NNfunction_ns_chi01_cL::synapse0x3903d40() {
   return (neuron0x38e17f0()*-0.0448674);
}

double NNfunction_ns_chi01_cL::synapse0x3903d80() {
   return (neuron0x38e1b30()*0.0340736);
}

double NNfunction_ns_chi01_cL::synapse0x3903dc0() {
   return (neuron0x38e1e70()*0.043604);
}

double NNfunction_ns_chi01_cL::synapse0x3903e00() {
   return (neuron0x38e21b0()*0.185629);
}

double NNfunction_ns_chi01_cL::synapse0x3903e40() {
   return (neuron0x38e24f0()*-0.0245745);
}

double NNfunction_ns_chi01_cL::synapse0x3903e80() {
   return (neuron0x38e2830()*0.00699069);
}

double NNfunction_ns_chi01_cL::synapse0x3903ec0() {
   return (neuron0x38e2b70()*0.0296804);
}

double NNfunction_ns_chi01_cL::synapse0x3903950() {
   return (neuron0x38e2eb0()*-0.0591414);
}

double NNfunction_ns_chi01_cL::synapse0x3903990() {
   return (neuron0x38e3410()*0.00540693);
}

double NNfunction_ns_chi01_cL::synapse0x38f44c0() {
   return (neuron0x38e3750()*0.0300562);
}

double NNfunction_ns_chi01_cL::synapse0x38f4500() {
   return (neuron0x38e3a90()*-0.00216724);
}

double NNfunction_ns_chi01_cL::synapse0x38f4540() {
   return (neuron0x38e3dd0()*0.0711505);
}

double NNfunction_ns_chi01_cL::synapse0x38f4580() {
   return (neuron0x38e4110()*0.0101142);
}

double NNfunction_ns_chi01_cL::synapse0x38f45c0() {
   return (neuron0x38e4450()*-0.00155939);
}

double NNfunction_ns_chi01_cL::synapse0x38f4600() {
   return (neuron0x38e4790()*-0.0443551);
}

double NNfunction_ns_chi01_cL::synapse0x38f4980() {
   return (neuron0x38dfb40()*0.0012682);
}

double NNfunction_ns_chi01_cL::synapse0x38f49c0() {
   return (neuron0x38dfdf0()*0.0291411);
}

double NNfunction_ns_chi01_cL::synapse0x38f4a00() {
   return (neuron0x38e0130()*-0.0717821);
}

double NNfunction_ns_chi01_cL::synapse0x38f4a40() {
   return (neuron0x38e0470()*2.35387);
}

double NNfunction_ns_chi01_cL::synapse0x38f4a80() {
   return (neuron0x38e07b0()*-0.0692164);
}

double NNfunction_ns_chi01_cL::synapse0x38f4ac0() {
   return (neuron0x38e0af0()*-0.013695);
}

double NNfunction_ns_chi01_cL::synapse0x38f4b00() {
   return (neuron0x38e0e30()*-0.0583598);
}

double NNfunction_ns_chi01_cL::synapse0x38f4b40() {
   return (neuron0x38e1170()*-0.026361);
}

double NNfunction_ns_chi01_cL::synapse0x38f4b80() {
   return (neuron0x38e14b0()*-0.000508004);
}

double NNfunction_ns_chi01_cL::synapse0x38f4bc0() {
   return (neuron0x38e17f0()*-0.0311827);
}

double NNfunction_ns_chi01_cL::synapse0x38f4c00() {
   return (neuron0x38e1b30()*0.0378211);
}

double NNfunction_ns_chi01_cL::synapse0x38f4c40() {
   return (neuron0x38e1e70()*-0.00250586);
}

double NNfunction_ns_chi01_cL::synapse0x38f4c80() {
   return (neuron0x38e21b0()*0.0690905);
}

double NNfunction_ns_chi01_cL::synapse0x38f4cc0() {
   return (neuron0x38e24f0()*0.0244632);
}

double NNfunction_ns_chi01_cL::synapse0x38f4d00() {
   return (neuron0x38e2830()*0.0261777);
}

double NNfunction_ns_chi01_cL::synapse0x38f4d40() {
   return (neuron0x38e2b70()*0.0689618);
}

double NNfunction_ns_chi01_cL::synapse0x38f47d0() {
   return (neuron0x38e2eb0()*0.0317701);
}

double NNfunction_ns_chi01_cL::synapse0x38f4810() {
   return (neuron0x38e3410()*0.0111728);
}

double NNfunction_ns_chi01_cL::synapse0x38f4e90() {
   return (neuron0x38e3750()*-0.0183517);
}

double NNfunction_ns_chi01_cL::synapse0x38f4ed0() {
   return (neuron0x38e3a90()*-0.0189538);
}

double NNfunction_ns_chi01_cL::synapse0x38f4f10() {
   return (neuron0x38e3dd0()*-0.0472748);
}

double NNfunction_ns_chi01_cL::synapse0x38f4f50() {
   return (neuron0x38e4110()*0.0075993);
}

double NNfunction_ns_chi01_cL::synapse0x38f4f90() {
   return (neuron0x38e4450()*-0.0233432);
}

double NNfunction_ns_chi01_cL::synapse0x38f4fd0() {
   return (neuron0x38e4790()*-0.0414648);
}

double NNfunction_ns_chi01_cL::synapse0x38f5350() {
   return (neuron0x38dfb40()*-0.585291);
}

double NNfunction_ns_chi01_cL::synapse0x38f5390() {
   return (neuron0x38dfdf0()*0.0595571);
}

double NNfunction_ns_chi01_cL::synapse0x38f53d0() {
   return (neuron0x38e0130()*-2.068);
}

double NNfunction_ns_chi01_cL::synapse0x38f5410() {
   return (neuron0x38e0470()*-0.399044);
}

double NNfunction_ns_chi01_cL::synapse0x38f5450() {
   return (neuron0x38e07b0()*0.0978257);
}

double NNfunction_ns_chi01_cL::synapse0x38f5490() {
   return (neuron0x38e0af0()*0.429815);
}

double NNfunction_ns_chi01_cL::synapse0x38f54d0() {
   return (neuron0x38e0e30()*0.224551);
}

double NNfunction_ns_chi01_cL::synapse0x38f5510() {
   return (neuron0x38e1170()*0.585524);
}

double NNfunction_ns_chi01_cL::synapse0x38f5550() {
   return (neuron0x38e14b0()*-1.80823);
}

double NNfunction_ns_chi01_cL::synapse0x38f5590() {
   return (neuron0x38e17f0()*-0.27112);
}

double NNfunction_ns_chi01_cL::synapse0x38f55d0() {
   return (neuron0x38e1b30()*-0.0191778);
}

double NNfunction_ns_chi01_cL::synapse0x38f5610() {
   return (neuron0x38e1e70()*-1.14985);
}

double NNfunction_ns_chi01_cL::synapse0x38f5650() {
   return (neuron0x38e21b0()*-1.06059);
}

double NNfunction_ns_chi01_cL::synapse0x38f5690() {
   return (neuron0x38e24f0()*0.632041);
}

double NNfunction_ns_chi01_cL::synapse0x38f56d0() {
   return (neuron0x38e2830()*1.41383);
}

double NNfunction_ns_chi01_cL::synapse0x38f5710() {
   return (neuron0x38e2b70()*0.644075);
}

double NNfunction_ns_chi01_cL::synapse0x38f51a0() {
   return (neuron0x38e2eb0()*0.682238);
}

double NNfunction_ns_chi01_cL::synapse0x38f51e0() {
   return (neuron0x38e3410()*0.453652);
}

double NNfunction_ns_chi01_cL::synapse0x38f5860() {
   return (neuron0x38e3750()*-0.014038);
}

double NNfunction_ns_chi01_cL::synapse0x38f58a0() {
   return (neuron0x38e3a90()*1.26885);
}

double NNfunction_ns_chi01_cL::synapse0x38f58e0() {
   return (neuron0x38e3dd0()*2.59538);
}

double NNfunction_ns_chi01_cL::synapse0x38f5920() {
   return (neuron0x38e4110()*-0.273649);
}

double NNfunction_ns_chi01_cL::synapse0x38f5960() {
   return (neuron0x38e4450()*-0.887264);
}

double NNfunction_ns_chi01_cL::synapse0x38f59a0() {
   return (neuron0x38e4790()*-1.20001);
}

double NNfunction_ns_chi01_cL::synapse0x38f5d20() {
   return (neuron0x38dfb40()*-0.0231416);
}

double NNfunction_ns_chi01_cL::synapse0x38f5d60() {
   return (neuron0x38dfdf0()*0.169883);
}

double NNfunction_ns_chi01_cL::synapse0x38f5da0() {
   return (neuron0x38e0130()*-0.139562);
}

double NNfunction_ns_chi01_cL::synapse0x38f5de0() {
   return (neuron0x38e0470()*-0.476686);
}

double NNfunction_ns_chi01_cL::synapse0x38f5e20() {
   return (neuron0x38e07b0()*-0.0482712);
}

double NNfunction_ns_chi01_cL::synapse0x38f5e60() {
   return (neuron0x38e0af0()*-0.300222);
}

double NNfunction_ns_chi01_cL::synapse0x38f5ea0() {
   return (neuron0x38e0e30()*0.0764848);
}

double NNfunction_ns_chi01_cL::synapse0x38f5ee0() {
   return (neuron0x38e1170()*-0.0698743);
}

double NNfunction_ns_chi01_cL::synapse0x38f5f20() {
   return (neuron0x38e14b0()*-0.00921923);
}

double NNfunction_ns_chi01_cL::synapse0x38f5f60() {
   return (neuron0x38e17f0()*-0.0432665);
}

double NNfunction_ns_chi01_cL::synapse0x38f5fa0() {
   return (neuron0x38e1b30()*-0.0174294);
}

double NNfunction_ns_chi01_cL::synapse0x38f5fe0() {
   return (neuron0x38e1e70()*-0.060087);
}

double NNfunction_ns_chi01_cL::synapse0x38f6020() {
   return (neuron0x38e21b0()*0.361862);
}

double NNfunction_ns_chi01_cL::synapse0x38f6060() {
   return (neuron0x38e24f0()*-0.0592232);
}

double NNfunction_ns_chi01_cL::synapse0x38f60a0() {
   return (neuron0x38e2830()*-0.248735);
}

double NNfunction_ns_chi01_cL::synapse0x38f60e0() {
   return (neuron0x38e2b70()*-0.163221);
}

double NNfunction_ns_chi01_cL::synapse0x38f5b70() {
   return (neuron0x38e2eb0()*0.0219054);
}

double NNfunction_ns_chi01_cL::synapse0x38f5bb0() {
   return (neuron0x38e3410()*-0.0376667);
}

double NNfunction_ns_chi01_cL::synapse0x38f6230() {
   return (neuron0x38e3750()*0.00608254);
}

double NNfunction_ns_chi01_cL::synapse0x38f6270() {
   return (neuron0x38e3a90()*0.0517779);
}

double NNfunction_ns_chi01_cL::synapse0x38f62b0() {
   return (neuron0x38e3dd0()*0.057806);
}

double NNfunction_ns_chi01_cL::synapse0x38f62f0() {
   return (neuron0x38e4110()*0.00145708);
}

double NNfunction_ns_chi01_cL::synapse0x38f6330() {
   return (neuron0x38e4450()*-0.0963864);
}

double NNfunction_ns_chi01_cL::synapse0x38f6370() {
   return (neuron0x38e4790()*-0.19327);
}

double NNfunction_ns_chi01_cL::synapse0x3908240() {
   return (neuron0x38dfb40()*-0.380293);
}

double NNfunction_ns_chi01_cL::synapse0x3908280() {
   return (neuron0x38dfdf0()*-0.271767);
}

double NNfunction_ns_chi01_cL::synapse0x39082c0() {
   return (neuron0x38e0130()*-0.0465956);
}

double NNfunction_ns_chi01_cL::synapse0x3908300() {
   return (neuron0x38e0470()*0.411632);
}

double NNfunction_ns_chi01_cL::synapse0x3908340() {
   return (neuron0x38e07b0()*-0.426097);
}

double NNfunction_ns_chi01_cL::synapse0x3908380() {
   return (neuron0x38e0af0()*-0.19227);
}

double NNfunction_ns_chi01_cL::synapse0x39083c0() {
   return (neuron0x38e0e30()*0.110877);
}

double NNfunction_ns_chi01_cL::synapse0x3908400() {
   return (neuron0x38e1170()*-0.843803);
}

double NNfunction_ns_chi01_cL::synapse0x3908440() {
   return (neuron0x38e14b0()*-0.143042);
}

double NNfunction_ns_chi01_cL::synapse0x3908480() {
   return (neuron0x38e17f0()*-0.233103);
}

double NNfunction_ns_chi01_cL::synapse0x39084c0() {
   return (neuron0x38e1b30()*-0.0762715);
}

double NNfunction_ns_chi01_cL::synapse0x3908500() {
   return (neuron0x38e1e70()*-0.037337);
}

double NNfunction_ns_chi01_cL::synapse0x3908540() {
   return (neuron0x38e21b0()*0.0751147);
}

double NNfunction_ns_chi01_cL::synapse0x3908580() {
   return (neuron0x38e24f0()*0.361976);
}

double NNfunction_ns_chi01_cL::synapse0x39085c0() {
   return (neuron0x38e2830()*0.210825);
}

double NNfunction_ns_chi01_cL::synapse0x3908600() {
   return (neuron0x38e2b70()*-0.0465092);
}

double NNfunction_ns_chi01_cL::synapse0x38f63b0() {
   return (neuron0x38e2eb0()*0.115315);
}

double NNfunction_ns_chi01_cL::synapse0x38f63f0() {
   return (neuron0x38e3410()*0.0312509);
}

double NNfunction_ns_chi01_cL::synapse0x3908750() {
   return (neuron0x38e3750()*-0.130319);
}

double NNfunction_ns_chi01_cL::synapse0x3908790() {
   return (neuron0x38e3a90()*0.279689);
}

double NNfunction_ns_chi01_cL::synapse0x39087d0() {
   return (neuron0x38e3dd0()*-0.200121);
}

double NNfunction_ns_chi01_cL::synapse0x3908810() {
   return (neuron0x38e4110()*-0.122856);
}

double NNfunction_ns_chi01_cL::synapse0x3908850() {
   return (neuron0x38e4450()*-0.310137);
}

double NNfunction_ns_chi01_cL::synapse0x3908890() {
   return (neuron0x38e4790()*0.227219);
}

double NNfunction_ns_chi01_cL::synapse0x3908c10() {
   return (neuron0x38dfb40()*0.278007);
}

double NNfunction_ns_chi01_cL::synapse0x3908c50() {
   return (neuron0x38dfdf0()*-0.148128);
}

double NNfunction_ns_chi01_cL::synapse0x3908c90() {
   return (neuron0x38e0130()*0.0190019);
}

double NNfunction_ns_chi01_cL::synapse0x3908cd0() {
   return (neuron0x38e0470()*-0.218799);
}

double NNfunction_ns_chi01_cL::synapse0x3908d10() {
   return (neuron0x38e07b0()*0.0692426);
}

double NNfunction_ns_chi01_cL::synapse0x3908d50() {
   return (neuron0x38e0af0()*-0.386816);
}

double NNfunction_ns_chi01_cL::synapse0x3908d90() {
   return (neuron0x38e0e30()*-0.824304);
}

double NNfunction_ns_chi01_cL::synapse0x3908dd0() {
   return (neuron0x38e1170()*-0.304572);
}

double NNfunction_ns_chi01_cL::synapse0x3908e10() {
   return (neuron0x38e14b0()*0.186811);
}

double NNfunction_ns_chi01_cL::synapse0x3908e50() {
   return (neuron0x38e17f0()*0.338215);
}

double NNfunction_ns_chi01_cL::synapse0x3908e90() {
   return (neuron0x38e1b30()*0.187724);
}

double NNfunction_ns_chi01_cL::synapse0x3908ed0() {
   return (neuron0x38e1e70()*-0.650143);
}

double NNfunction_ns_chi01_cL::synapse0x3908f10() {
   return (neuron0x38e21b0()*-0.512127);
}

double NNfunction_ns_chi01_cL::synapse0x3908f50() {
   return (neuron0x38e24f0()*-0.777309);
}

double NNfunction_ns_chi01_cL::synapse0x3908f90() {
   return (neuron0x38e2830()*0.231495);
}

double NNfunction_ns_chi01_cL::synapse0x3908fd0() {
   return (neuron0x38e2b70()*0.158814);
}

double NNfunction_ns_chi01_cL::synapse0x3908a60() {
   return (neuron0x38e2eb0()*-0.320854);
}

double NNfunction_ns_chi01_cL::synapse0x3908aa0() {
   return (neuron0x38e3410()*-0.158651);
}

double NNfunction_ns_chi01_cL::synapse0x3909120() {
   return (neuron0x38e3750()*0.776402);
}

double NNfunction_ns_chi01_cL::synapse0x3909160() {
   return (neuron0x38e3a90()*-0.989975);
}

double NNfunction_ns_chi01_cL::synapse0x39091a0() {
   return (neuron0x38e3dd0()*-0.172239);
}

double NNfunction_ns_chi01_cL::synapse0x39091e0() {
   return (neuron0x38e4110()*-0.530702);
}

double NNfunction_ns_chi01_cL::synapse0x3909220() {
   return (neuron0x38e4450()*-0.375035);
}

double NNfunction_ns_chi01_cL::synapse0x3909260() {
   return (neuron0x38e4790()*0.694889);
}

double NNfunction_ns_chi01_cL::synapse0x39095e0() {
   return (neuron0x38dfb40()*0.00611097);
}

double NNfunction_ns_chi01_cL::synapse0x3909620() {
   return (neuron0x38dfdf0()*0.0440291);
}

double NNfunction_ns_chi01_cL::synapse0x3909660() {
   return (neuron0x38e0130()*-1.62058);
}

double NNfunction_ns_chi01_cL::synapse0x39096a0() {
   return (neuron0x38e0470()*-0.010435);
}

double NNfunction_ns_chi01_cL::synapse0x39096e0() {
   return (neuron0x38e07b0()*0.0176976);
}

double NNfunction_ns_chi01_cL::synapse0x3909720() {
   return (neuron0x38e0af0()*-0.0185486);
}

double NNfunction_ns_chi01_cL::synapse0x3909760() {
   return (neuron0x38e0e30()*0.00688764);
}

double NNfunction_ns_chi01_cL::synapse0x39097a0() {
   return (neuron0x38e1170()*0.0111259);
}

double NNfunction_ns_chi01_cL::synapse0x39097e0() {
   return (neuron0x38e14b0()*0.0158502);
}

double NNfunction_ns_chi01_cL::synapse0x3909820() {
   return (neuron0x38e17f0()*-0.00459272);
}

double NNfunction_ns_chi01_cL::synapse0x3909860() {
   return (neuron0x38e1b30()*-0.00543452);
}

double NNfunction_ns_chi01_cL::synapse0x39098a0() {
   return (neuron0x38e1e70()*-0.000958346);
}

double NNfunction_ns_chi01_cL::synapse0x39098e0() {
   return (neuron0x38e21b0()*0.159991);
}

double NNfunction_ns_chi01_cL::synapse0x3909920() {
   return (neuron0x38e24f0()*-0.0128837);
}

double NNfunction_ns_chi01_cL::synapse0x3909960() {
   return (neuron0x38e2830()*-0.0110437);
}

double NNfunction_ns_chi01_cL::synapse0x39099a0() {
   return (neuron0x38e2b70()*0.000714945);
}

double NNfunction_ns_chi01_cL::synapse0x3909430() {
   return (neuron0x38e2eb0()*-0.0111487);
}

double NNfunction_ns_chi01_cL::synapse0x3909470() {
   return (neuron0x38e3410()*-0.00819561);
}

double NNfunction_ns_chi01_cL::synapse0x3909af0() {
   return (neuron0x38e3750()*0.0106326);
}

double NNfunction_ns_chi01_cL::synapse0x3909b30() {
   return (neuron0x38e3a90()*0.0169165);
}

double NNfunction_ns_chi01_cL::synapse0x3909b70() {
   return (neuron0x38e3dd0()*0.0353958);
}

double NNfunction_ns_chi01_cL::synapse0x3909bb0() {
   return (neuron0x38e4110()*0.0028284);
}

double NNfunction_ns_chi01_cL::synapse0x3909bf0() {
   return (neuron0x38e4450()*-0.00827448);
}

double NNfunction_ns_chi01_cL::synapse0x3909c30() {
   return (neuron0x38e4790()*0.00996102);
}

double NNfunction_ns_chi01_cL::synapse0x3909fb0() {
   return (neuron0x38dfb40()*0.00513238);
}

double NNfunction_ns_chi01_cL::synapse0x3909ff0() {
   return (neuron0x38dfdf0()*11.4402);
}

double NNfunction_ns_chi01_cL::synapse0x390a030() {
   return (neuron0x38e0130()*0.926242);
}

double NNfunction_ns_chi01_cL::synapse0x390a070() {
   return (neuron0x38e0470()*0.00152229);
}

double NNfunction_ns_chi01_cL::synapse0x390a0b0() {
   return (neuron0x38e07b0()*0.00245662);
}

double NNfunction_ns_chi01_cL::synapse0x390a0f0() {
   return (neuron0x38e0af0()*0.0121578);
}

double NNfunction_ns_chi01_cL::synapse0x390a130() {
   return (neuron0x38e0e30()*-0.00958566);
}

double NNfunction_ns_chi01_cL::synapse0x390a170() {
   return (neuron0x38e1170()*0.00577793);
}

double NNfunction_ns_chi01_cL::synapse0x390a1b0() {
   return (neuron0x38e14b0()*0.00456809);
}

double NNfunction_ns_chi01_cL::synapse0x390a1f0() {
   return (neuron0x38e17f0()*-0.0430929);
}

double NNfunction_ns_chi01_cL::synapse0x390a230() {
   return (neuron0x38e1b30()*-0.00413453);
}

double NNfunction_ns_chi01_cL::synapse0x390a270() {
   return (neuron0x38e1e70()*-0.00943078);
}

double NNfunction_ns_chi01_cL::synapse0x390a2b0() {
   return (neuron0x38e21b0()*-0.31537);
}

double NNfunction_ns_chi01_cL::synapse0x390a2f0() {
   return (neuron0x38e24f0()*0.0482849);
}

double NNfunction_ns_chi01_cL::synapse0x390a330() {
   return (neuron0x38e2830()*0.0287756);
}

double NNfunction_ns_chi01_cL::synapse0x390a370() {
   return (neuron0x38e2b70()*0.0049032);
}

double NNfunction_ns_chi01_cL::synapse0x3909e00() {
   return (neuron0x38e2eb0()*0.0235452);
}

double NNfunction_ns_chi01_cL::synapse0x3909e40() {
   return (neuron0x38e3410()*0.000760501);
}

double NNfunction_ns_chi01_cL::synapse0x390a4c0() {
   return (neuron0x38e3750()*0.000851819);
}

double NNfunction_ns_chi01_cL::synapse0x390a500() {
   return (neuron0x38e3a90()*0.0312724);
}

double NNfunction_ns_chi01_cL::synapse0x390a540() {
   return (neuron0x38e3dd0()*-0.0239266);
}

double NNfunction_ns_chi01_cL::synapse0x390a580() {
   return (neuron0x38e4110()*0.0125044);
}

double NNfunction_ns_chi01_cL::synapse0x390a5c0() {
   return (neuron0x38e4450()*0.0155728);
}

double NNfunction_ns_chi01_cL::synapse0x390a600() {
   return (neuron0x38e4790()*0.0547367);
}

double NNfunction_ns_chi01_cL::synapse0x36aa470() {
   return (neuron0x38e4c00()*-1.04581);
}

double NNfunction_ns_chi01_cL::synapse0x36aa4b0() {
   return (neuron0x38e5440()*-0.00472657);
}

double NNfunction_ns_chi01_cL::synapse0x38e6fb0() {
   return (neuron0x38e5f20()*0.0231332);
}

double NNfunction_ns_chi01_cL::synapse0x38e6ff0() {
   return (neuron0x38e59c0()*0.555076);
}

double NNfunction_ns_chi01_cL::synapse0x38e8a80() {
   return (neuron0x38e6d00()*-0.458819);
}

double NNfunction_ns_chi01_cL::synapse0x38e8ac0() {
   return (neuron0x38e87d0()*0.0634485);
}

double NNfunction_ns_chi01_cL::synapse0x38e9850() {
   return (neuron0x38e95a0()*0.0105605);
}

double NNfunction_ns_chi01_cL::synapse0x38e9890() {
   return (neuron0x38e9f70()*-0.075603);
}

double NNfunction_ns_chi01_cL::synapse0x38ea220() {
   return (neuron0x38ea940()*-0.927066);
}

double NNfunction_ns_chi01_cL::synapse0x38ea260() {
   return (neuron0x38eb420()*0.0458315);
}

double NNfunction_ns_chi01_cL::synapse0x38eabf0() {
   return (neuron0x38ebdf0()*0.005208);
}

double NNfunction_ns_chi01_cL::synapse0x38eac30() {
   return (neuron0x38e8ed0()*0.621753);
}

double NNfunction_ns_chi01_cL::synapse0x38eb6d0() {
   return (neuron0x38ed9a0()*0.0320148);
}

double NNfunction_ns_chi01_cL::synapse0x38eb710() {
   return (neuron0x38ee370()*-0.021766);
}

double NNfunction_ns_chi01_cL::synapse0x38ec0a0() {
   return (neuron0x38eed40()*-0.971381);
}

double NNfunction_ns_chi01_cL::synapse0x38ec0e0() {
   return (neuron0x38ef710()*-0.223514);
}

double NNfunction_ns_chi01_cL::synapse0x38e9180() {
   return (neuron0x38f1520()*-0.000447384);
}

double NNfunction_ns_chi01_cL::synapse0x38e91c0() {
   return (neuron0x38f1800()*0.00288257);
}

double NNfunction_ns_chi01_cL::synapse0x38edc50() {
   return (neuron0x38f21d0()*4.41818);
}

double NNfunction_ns_chi01_cL::synapse0x38edc90() {
   return (neuron0x38f2ba0()*0.0126695);
}

double NNfunction_ns_chi01_cL::synapse0x38ee620() {
   return (neuron0x38f3570()*0.534069);
}

double NNfunction_ns_chi01_cL::synapse0x38ee660() {
   return (neuron0x38f3f40()*0.833784);
}

double NNfunction_ns_chi01_cL::synapse0x38eeff0() {
   return (neuron0x38eca90()*0.0122441);
}

double NNfunction_ns_chi01_cL::synapse0x38ef030() {
   return (neuron0x38ed460()*0.00191504);
}

double NNfunction_ns_chi01_cL::synapse0x38ef9c0() {
   return (neuron0x38f6cd0()*-0.00926873);
}

double NNfunction_ns_chi01_cL::synapse0x38efa00() {
   return (neuron0x38f76a0()*-0.115696);
}

double NNfunction_ns_chi01_cL::synapse0x38e2a50() {
   return (neuron0x38f8070()*-0.00935929);
}

double NNfunction_ns_chi01_cL::synapse0x38e2a90() {
   return (neuron0x38f8a40()*0.56458);
}

double NNfunction_ns_chi01_cL::synapse0x38f1ab0() {
   return (neuron0x38f9410()*-0.735442);
}

double NNfunction_ns_chi01_cL::synapse0x38f1af0() {
   return (neuron0x38f9de0()*-1.17847);
}

double NNfunction_ns_chi01_cL::synapse0x38f2480() {
   return (neuron0x38fa7b0()*0.503305);
}

double NNfunction_ns_chi01_cL::synapse0x38f24c0() {
   return (neuron0x38fb180()*-0.016147);
}

double NNfunction_ns_chi01_cL::synapse0x38f2e50() {
   return (neuron0x38f1210()*2.1054);
}

double NNfunction_ns_chi01_cL::synapse0x38f2e90() {
   return (neuron0x38fdd60()*0.125844);
}

double NNfunction_ns_chi01_cL::synapse0x38f3820() {
   return (neuron0x38fe730()*0.0115041);
}

double NNfunction_ns_chi01_cL::synapse0x38f3860() {
   return (neuron0x38ff100()*0.305102);
}

double NNfunction_ns_chi01_cL::synapse0x38f41f0() {
   return (neuron0x38ffad0()*-0.0416808);
}

double NNfunction_ns_chi01_cL::synapse0x38f4230() {
   return (neuron0x39004a0()*0.986039);
}

double NNfunction_ns_chi01_cL::synapse0x38ecd40() {
   return (neuron0x3900e70()*-4.31126);
}

double NNfunction_ns_chi01_cL::synapse0x38ecd80() {
   return (neuron0x3901840()*0.4806);
}

double NNfunction_ns_chi01_cL::synapse0x38f65f0() {
   return (neuron0x3902210()*0.2559);
}

double NNfunction_ns_chi01_cL::synapse0x38f6630() {
   return (neuron0x3902df0()*0.386222);
}

double NNfunction_ns_chi01_cL::synapse0x38f6f80() {
   return (neuron0x39037c0()*0.568184);
}

double NNfunction_ns_chi01_cL::synapse0x38f6fc0() {
   return (neuron0x38f4640()*-0.485631);
}

double NNfunction_ns_chi01_cL::synapse0x38f7950() {
   return (neuron0x38f5010()*0.00871833);
}

double NNfunction_ns_chi01_cL::synapse0x38f7990() {
   return (neuron0x38f59e0()*0.418066);
}

double NNfunction_ns_chi01_cL::synapse0x38f8320() {
   return (neuron0x3908020()*0.113883);
}

double NNfunction_ns_chi01_cL::synapse0x38f8360() {
   return (neuron0x39088d0()*-0.0194388);
}

double NNfunction_ns_chi01_cL::synapse0x38f8cf0() {
   return (neuron0x39092a0()*-1.32155);
}

double NNfunction_ns_chi01_cL::synapse0x38f8d30() {
   return (neuron0x3909c70()*-1.22563);
}

double NNfunction_ns_chi01_cL::synapse0x38fb430() {
   return (neuron0x38e4c00()*3.8177);
}

double NNfunction_ns_chi01_cL::synapse0x38fb470() {
   return (neuron0x38e5440()*-3.23601);
}

double NNfunction_ns_chi01_cL::synapse0x38f09f0() {
   return (neuron0x38e5f20()*-0.639605);
}

double NNfunction_ns_chi01_cL::synapse0x38f0a30() {
   return (neuron0x38e59c0()*0.502715);
}

double NNfunction_ns_chi01_cL::synapse0x38fe010() {
   return (neuron0x38e6d00()*0.14118);
}

double NNfunction_ns_chi01_cL::synapse0x38fe050() {
   return (neuron0x38e87d0()*-1.09676);
}

double NNfunction_ns_chi01_cL::synapse0x38fe9e0() {
   return (neuron0x38e95a0()*1.40793);
}

double NNfunction_ns_chi01_cL::synapse0x38fea20() {
   return (neuron0x38e9f70()*-3.15999);
}

double NNfunction_ns_chi01_cL::synapse0x38ff3b0() {
   return (neuron0x38ea940()*-0.929455);
}

double NNfunction_ns_chi01_cL::synapse0x38ff3f0() {
   return (neuron0x38eb420()*-0.595139);
}

double NNfunction_ns_chi01_cL::synapse0x38ffd80() {
   return (neuron0x38ebdf0()*-2.04197);
}

double NNfunction_ns_chi01_cL::synapse0x38ffdc0() {
   return (neuron0x38e8ed0()*-1.65614);
}

double NNfunction_ns_chi01_cL::synapse0x3900750() {
   return (neuron0x38ed9a0()*0.408167);
}

double NNfunction_ns_chi01_cL::synapse0x3900790() {
   return (neuron0x38ee370()*0.035991);
}

double NNfunction_ns_chi01_cL::synapse0x3901120() {
   return (neuron0x38eed40()*1.68055);
}

double NNfunction_ns_chi01_cL::synapse0x3901160() {
   return (neuron0x38ef710()*-0.342071);
}

double NNfunction_ns_chi01_cL::synapse0x3901af0() {
   return (neuron0x38f1520()*1.98069);
}

double NNfunction_ns_chi01_cL::synapse0x3901b30() {
   return (neuron0x38f1800()*2.92792);
}

double NNfunction_ns_chi01_cL::synapse0x39024c0() {
   return (neuron0x38f21d0()*2.26439);
}

double NNfunction_ns_chi01_cL::synapse0x3902500() {
   return (neuron0x38f2ba0()*-2.44973);
}

double NNfunction_ns_chi01_cL::synapse0x39030a0() {
   return (neuron0x38f3570()*0.843776);
}

double NNfunction_ns_chi01_cL::synapse0x39030e0() {
   return (neuron0x38f3f40()*-1.74787);
}

double NNfunction_ns_chi01_cL::synapse0x3903a70() {
   return (neuron0x38eca90()*2.14424);
}

double NNfunction_ns_chi01_cL::synapse0x3903ab0() {
   return (neuron0x38ed460()*-2.70228);
}

double NNfunction_ns_chi01_cL::synapse0x38f48f0() {
   return (neuron0x38f6cd0()*2.03423);
}

double NNfunction_ns_chi01_cL::synapse0x38f4930() {
   return (neuron0x38f76a0()*-1.55368);
}

double NNfunction_ns_chi01_cL::synapse0x38f52c0() {
   return (neuron0x38f8070()*-3.65333);
}

double NNfunction_ns_chi01_cL::synapse0x38f5300() {
   return (neuron0x38f8a40()*0.382749);
}

double NNfunction_ns_chi01_cL::synapse0x38f5c90() {
   return (neuron0x38f9410()*-0.393161);
}

double NNfunction_ns_chi01_cL::synapse0x38f5cd0() {
   return (neuron0x38f9de0()*-4.44266);
}

double NNfunction_ns_chi01_cL::synapse0x39081b0() {
   return (neuron0x38fa7b0()*-1.38603);
}

double NNfunction_ns_chi01_cL::synapse0x39081f0() {
   return (neuron0x38fb180()*1.10644);
}

double NNfunction_ns_chi01_cL::synapse0x3908b80() {
   return (neuron0x38f1210()*-3.19658);
}

double NNfunction_ns_chi01_cL::synapse0x3908bc0() {
   return (neuron0x38fdd60()*0.500704);
}

double NNfunction_ns_chi01_cL::synapse0x3909550() {
   return (neuron0x38fe730()*2.07346);
}

double NNfunction_ns_chi01_cL::synapse0x3909590() {
   return (neuron0x38ff100()*-0.659962);
}

double NNfunction_ns_chi01_cL::synapse0x3909f20() {
   return (neuron0x38ffad0()*-0.756974);
}

double NNfunction_ns_chi01_cL::synapse0x3909f60() {
   return (neuron0x39004a0()*1.19513);
}

double NNfunction_ns_chi01_cL::synapse0x38e4eb0() {
   return (neuron0x3900e70()*2.13283);
}

double NNfunction_ns_chi01_cL::synapse0x38e4ef0() {
   return (neuron0x3901840()*0.949757);
}

double NNfunction_ns_chi01_cL::synapse0x38f96c0() {
   return (neuron0x3902210()*-0.481865);
}

double NNfunction_ns_chi01_cL::synapse0x38f9700() {
   return (neuron0x3902df0()*-0.248092);
}

double NNfunction_ns_chi01_cL::synapse0x390a640() {
   return (neuron0x39037c0()*-0.893788);
}

double NNfunction_ns_chi01_cL::synapse0x390a680() {
   return (neuron0x38f4640()*-0.66029);
}

double NNfunction_ns_chi01_cL::synapse0x390a6c0() {
   return (neuron0x38f5010()*-2.53495);
}

double NNfunction_ns_chi01_cL::synapse0x390a700() {
   return (neuron0x38f59e0()*-1.23927);
}

double NNfunction_ns_chi01_cL::synapse0x39115b0() {
   return (neuron0x3908020()*-1.31693);
}

double NNfunction_ns_chi01_cL::synapse0x39115f0() {
   return (neuron0x39088d0()*0.14442);
}

double NNfunction_ns_chi01_cL::synapse0x3911630() {
   return (neuron0x39092a0()*-0.249348);
}

double NNfunction_ns_chi01_cL::synapse0x3911670() {
   return (neuron0x3909c70()*-4.52176);
}

double NNfunction_ns_chi01_cL::synapse0x39119f0() {
   return (neuron0x38e4c00()*-4.87842);
}

double NNfunction_ns_chi01_cL::synapse0x3911a30() {
   return (neuron0x38e5440()*0.0149294);
}

double NNfunction_ns_chi01_cL::synapse0x3911a70() {
   return (neuron0x38e5f20()*0.0109883);
}

double NNfunction_ns_chi01_cL::synapse0x3911ab0() {
   return (neuron0x38e59c0()*-0.270522);
}

double NNfunction_ns_chi01_cL::synapse0x3911af0() {
   return (neuron0x38e6d00()*-2.49847);
}

double NNfunction_ns_chi01_cL::synapse0x3911b30() {
   return (neuron0x38e87d0()*1.81984);
}

double NNfunction_ns_chi01_cL::synapse0x3911b70() {
   return (neuron0x38e95a0()*0.130442);
}

double NNfunction_ns_chi01_cL::synapse0x3911bb0() {
   return (neuron0x38e9f70()*-0.201367);
}

double NNfunction_ns_chi01_cL::synapse0x3911bf0() {
   return (neuron0x38ea940()*-0.495983);
}

double NNfunction_ns_chi01_cL::synapse0x3911c30() {
   return (neuron0x38eb420()*0.418565);
}

double NNfunction_ns_chi01_cL::synapse0x3911c70() {
   return (neuron0x38ebdf0()*-0.033459);
}

double NNfunction_ns_chi01_cL::synapse0x3911cb0() {
   return (neuron0x38e8ed0()*0.0265426);
}

double NNfunction_ns_chi01_cL::synapse0x3911cf0() {
   return (neuron0x38ed9a0()*0.212901);
}

double NNfunction_ns_chi01_cL::synapse0x3911d30() {
   return (neuron0x38ee370()*-0.066981);
}

double NNfunction_ns_chi01_cL::synapse0x3911d70() {
   return (neuron0x38eed40()*0.36359);
}

double NNfunction_ns_chi01_cL::synapse0x3911db0() {
   return (neuron0x38ef710()*-2.31684);
}

double NNfunction_ns_chi01_cL::synapse0x3911840() {
   return (neuron0x38f1520()*-0.135866);
}

double NNfunction_ns_chi01_cL::synapse0x3911880() {
   return (neuron0x38f1800()*-0.0302614);
}

double NNfunction_ns_chi01_cL::synapse0x3911f00() {
   return (neuron0x38f21d0()*0.17741);
}

double NNfunction_ns_chi01_cL::synapse0x3911f40() {
   return (neuron0x38f2ba0()*-0.123173);
}

double NNfunction_ns_chi01_cL::synapse0x3911f80() {
   return (neuron0x38f3570()*-4.47885);
}

double NNfunction_ns_chi01_cL::synapse0x3911fc0() {
   return (neuron0x38f3f40()*2.8337);
}

double NNfunction_ns_chi01_cL::synapse0x3912000() {
   return (neuron0x38eca90()*0.122693);
}

double NNfunction_ns_chi01_cL::synapse0x3912040() {
   return (neuron0x38ed460()*-0.0793853);
}

double NNfunction_ns_chi01_cL::synapse0x3912080() {
   return (neuron0x38f6cd0()*0.0742921);
}

double NNfunction_ns_chi01_cL::synapse0x39120c0() {
   return (neuron0x38f76a0()*-1.92977);
}

double NNfunction_ns_chi01_cL::synapse0x3912100() {
   return (neuron0x38f8070()*-0.0960617);
}

double NNfunction_ns_chi01_cL::synapse0x3912140() {
   return (neuron0x38f8a40()*-3.59605);
}

double NNfunction_ns_chi01_cL::synapse0x3912180() {
   return (neuron0x38f9410()*0.696218);
}

double NNfunction_ns_chi01_cL::synapse0x39121c0() {
   return (neuron0x38f9de0()*-5.40667);
}

double NNfunction_ns_chi01_cL::synapse0x3912200() {
   return (neuron0x38fa7b0()*-0.462894);
}

double NNfunction_ns_chi01_cL::synapse0x3912240() {
   return (neuron0x38fb180()*-0.0174127);
}

double NNfunction_ns_chi01_cL::synapse0x3911df0() {
   return (neuron0x38f1210()*-3.41213);
}

double NNfunction_ns_chi01_cL::synapse0x3911e30() {
   return (neuron0x38fdd60()*0.905436);
}

double NNfunction_ns_chi01_cL::synapse0x3911e70() {
   return (neuron0x38fe730()*-0.106515);
}

double NNfunction_ns_chi01_cL::synapse0x3911eb0() {
   return (neuron0x38ff100()*0.409011);
}

double NNfunction_ns_chi01_cL::synapse0x3912490() {
   return (neuron0x38ffad0()*-0.209965);
}

double NNfunction_ns_chi01_cL::synapse0x39124d0() {
   return (neuron0x39004a0()*-1.51313);
}

double NNfunction_ns_chi01_cL::synapse0x3912510() {
   return (neuron0x3900e70()*-1.12418);
}

double NNfunction_ns_chi01_cL::synapse0x3912550() {
   return (neuron0x3901840()*1.73978);
}

double NNfunction_ns_chi01_cL::synapse0x3912590() {
   return (neuron0x3902210()*-1.84095);
}

double NNfunction_ns_chi01_cL::synapse0x39125d0() {
   return (neuron0x3902df0()*0.637489);
}

double NNfunction_ns_chi01_cL::synapse0x3912610() {
   return (neuron0x39037c0()*-0.0141021);
}

double NNfunction_ns_chi01_cL::synapse0x3912650() {
   return (neuron0x38f4640()*1.0961);
}

double NNfunction_ns_chi01_cL::synapse0x3912690() {
   return (neuron0x38f5010()*0.157459);
}

double NNfunction_ns_chi01_cL::synapse0x39126d0() {
   return (neuron0x38f59e0()*0.683029);
}

double NNfunction_ns_chi01_cL::synapse0x3912710() {
   return (neuron0x3908020()*0.93061);
}

double NNfunction_ns_chi01_cL::synapse0x3912750() {
   return (neuron0x39088d0()*-0.107564);
}

double NNfunction_ns_chi01_cL::synapse0x3912790() {
   return (neuron0x39092a0()*2.54029);
}

double NNfunction_ns_chi01_cL::synapse0x39127d0() {
   return (neuron0x3909c70()*-4.6442);
}

double NNfunction_ns_chi01_cL::synapse0x3912b50() {
   return (neuron0x38e4c00()*5.39212);
}

double NNfunction_ns_chi01_cL::synapse0x3912b90() {
   return (neuron0x38e5440()*0.00743344);
}

double NNfunction_ns_chi01_cL::synapse0x3912bd0() {
   return (neuron0x38e5f20()*-0.00612689);
}

double NNfunction_ns_chi01_cL::synapse0x3912c10() {
   return (neuron0x38e59c0()*0.0505583);
}

double NNfunction_ns_chi01_cL::synapse0x3912c50() {
   return (neuron0x38e6d00()*11.0272);
}

double NNfunction_ns_chi01_cL::synapse0x3912c90() {
   return (neuron0x38e87d0()*-1.23829);
}

double NNfunction_ns_chi01_cL::synapse0x3912cd0() {
   return (neuron0x38e95a0()*0.050793);
}

double NNfunction_ns_chi01_cL::synapse0x3912d10() {
   return (neuron0x38e9f70()*-0.0161612);
}

double NNfunction_ns_chi01_cL::synapse0x3912d50() {
   return (neuron0x38ea940()*2.97144);
}

double NNfunction_ns_chi01_cL::synapse0x3912d90() {
   return (neuron0x38eb420()*0.0327359);
}

double NNfunction_ns_chi01_cL::synapse0x3912dd0() {
   return (neuron0x38ebdf0()*-0.0778107);
}

double NNfunction_ns_chi01_cL::synapse0x3912e10() {
   return (neuron0x38e8ed0()*0.851803);
}

double NNfunction_ns_chi01_cL::synapse0x3912e50() {
   return (neuron0x38ed9a0()*-0.0166505);
}

double NNfunction_ns_chi01_cL::synapse0x3912e90() {
   return (neuron0x38ee370()*-0.325837);
}

double NNfunction_ns_chi01_cL::synapse0x3912ed0() {
   return (neuron0x38eed40()*0.0426864);
}

double NNfunction_ns_chi01_cL::synapse0x3912f10() {
   return (neuron0x38ef710()*2.47084);
}

double NNfunction_ns_chi01_cL::synapse0x39129a0() {
   return (neuron0x38f1520()*0.0662391);
}

double NNfunction_ns_chi01_cL::synapse0x39129e0() {
   return (neuron0x38f1800()*-0.0353616);
}

double NNfunction_ns_chi01_cL::synapse0x3913060() {
   return (neuron0x38f21d0()*7.48609);
}

double NNfunction_ns_chi01_cL::synapse0x39130a0() {
   return (neuron0x38f2ba0()*0.00786176);
}

double NNfunction_ns_chi01_cL::synapse0x39130e0() {
   return (neuron0x38f3570()*-10.0994);
}

double NNfunction_ns_chi01_cL::synapse0x3913120() {
   return (neuron0x38f3f40()*0.900161);
}

double NNfunction_ns_chi01_cL::synapse0x3913160() {
   return (neuron0x38eca90()*-0.0495532);
}

double NNfunction_ns_chi01_cL::synapse0x39131a0() {
   return (neuron0x38ed460()*-0.0193696);
}

double NNfunction_ns_chi01_cL::synapse0x39131e0() {
   return (neuron0x38f6cd0()*-0.0178608);
}

double NNfunction_ns_chi01_cL::synapse0x3913220() {
   return (neuron0x38f76a0()*-1.19234);
}

double NNfunction_ns_chi01_cL::synapse0x3913260() {
   return (neuron0x38f8070()*0.0155351);
}

double NNfunction_ns_chi01_cL::synapse0x39132a0() {
   return (neuron0x38f8a40()*-3.62358);
}

double NNfunction_ns_chi01_cL::synapse0x39132e0() {
   return (neuron0x38f9410()*-0.39032);
}

double NNfunction_ns_chi01_cL::synapse0x3913320() {
   return (neuron0x38f9de0()*2.65046);
}

double NNfunction_ns_chi01_cL::synapse0x3913360() {
   return (neuron0x38fa7b0()*0.94177);
}

double NNfunction_ns_chi01_cL::synapse0x39133a0() {
   return (neuron0x38fb180()*-0.00222464);
}

double NNfunction_ns_chi01_cL::synapse0x3912f50() {
   return (neuron0x38f1210()*3.46465);
}

double NNfunction_ns_chi01_cL::synapse0x3912f90() {
   return (neuron0x38fdd60()*-0.695547);
}

double NNfunction_ns_chi01_cL::synapse0x3912fd0() {
   return (neuron0x38fe730()*0.0562998);
}

double NNfunction_ns_chi01_cL::synapse0x3913010() {
   return (neuron0x38ff100()*0.448223);
}

double NNfunction_ns_chi01_cL::synapse0x39135f0() {
   return (neuron0x38ffad0()*0.0613361);
}

double NNfunction_ns_chi01_cL::synapse0x3913630() {
   return (neuron0x39004a0()*-0.699232);
}

double NNfunction_ns_chi01_cL::synapse0x3913670() {
   return (neuron0x3900e70()*-6.22105);
}

double NNfunction_ns_chi01_cL::synapse0x39136b0() {
   return (neuron0x3901840()*-0.723307);
}

double NNfunction_ns_chi01_cL::synapse0x39136f0() {
   return (neuron0x3902210()*-0.508641);
}

double NNfunction_ns_chi01_cL::synapse0x3913730() {
   return (neuron0x3902df0()*0.376509);
}

double NNfunction_ns_chi01_cL::synapse0x3913770() {
   return (neuron0x39037c0()*0.358392);
}

double NNfunction_ns_chi01_cL::synapse0x39137b0() {
   return (neuron0x38f4640()*-0.688366);
}

double NNfunction_ns_chi01_cL::synapse0x39137f0() {
   return (neuron0x38f5010()*0.0213614);
}

double NNfunction_ns_chi01_cL::synapse0x3913830() {
   return (neuron0x38f59e0()*0.309534);
}

double NNfunction_ns_chi01_cL::synapse0x3913870() {
   return (neuron0x3908020()*-0.292787);
}

double NNfunction_ns_chi01_cL::synapse0x39138b0() {
   return (neuron0x39088d0()*-0.176978);
}

double NNfunction_ns_chi01_cL::synapse0x39138f0() {
   return (neuron0x39092a0()*-3.44667);
}

double NNfunction_ns_chi01_cL::synapse0x3913930() {
   return (neuron0x3909c70()*0.393001);
}

double NNfunction_ns_chi01_cL::synapse0x3913cb0() {
   return (neuron0x38e4c00()*-2.16711);
}

double NNfunction_ns_chi01_cL::synapse0x3913cf0() {
   return (neuron0x38e5440()*0.180175);
}

double NNfunction_ns_chi01_cL::synapse0x3913d30() {
   return (neuron0x38e5f20()*-0.492753);
}

double NNfunction_ns_chi01_cL::synapse0x3913d70() {
   return (neuron0x38e59c0()*2.67339);
}

double NNfunction_ns_chi01_cL::synapse0x3913db0() {
   return (neuron0x38e6d00()*0.650755);
}

double NNfunction_ns_chi01_cL::synapse0x3913df0() {
   return (neuron0x38e87d0()*-4.72995);
}

double NNfunction_ns_chi01_cL::synapse0x3913e30() {
   return (neuron0x38e95a0()*-0.340376);
}

double NNfunction_ns_chi01_cL::synapse0x3913e70() {
   return (neuron0x38e9f70()*0.944218);
}

double NNfunction_ns_chi01_cL::synapse0x3913eb0() {
   return (neuron0x38ea940()*-0.164071);
}

double NNfunction_ns_chi01_cL::synapse0x3913ef0() {
   return (neuron0x38eb420()*1.24212);
}

double NNfunction_ns_chi01_cL::synapse0x3913f30() {
   return (neuron0x38ebdf0()*-0.557226);
}

double NNfunction_ns_chi01_cL::synapse0x3913f70() {
   return (neuron0x38e8ed0()*-4.65313);
}

double NNfunction_ns_chi01_cL::synapse0x3913fb0() {
   return (neuron0x38ed9a0()*-0.46048);
}

double NNfunction_ns_chi01_cL::synapse0x3913ff0() {
   return (neuron0x38ee370()*-0.151226);
}

double NNfunction_ns_chi01_cL::synapse0x3914030() {
   return (neuron0x38eed40()*7.38205);
}

double NNfunction_ns_chi01_cL::synapse0x3914070() {
   return (neuron0x38ef710()*-1.17981);
}

double NNfunction_ns_chi01_cL::synapse0x3913b00() {
   return (neuron0x38f1520()*0.0259728);
}

double NNfunction_ns_chi01_cL::synapse0x3913b40() {
   return (neuron0x38f1800()*-0.155905);
}

double NNfunction_ns_chi01_cL::synapse0x39141c0() {
   return (neuron0x38f21d0()*-1.2673);
}

double NNfunction_ns_chi01_cL::synapse0x3914200() {
   return (neuron0x38f2ba0()*0.316935);
}

double NNfunction_ns_chi01_cL::synapse0x3914240() {
   return (neuron0x38f3570()*-1.57793);
}

double NNfunction_ns_chi01_cL::synapse0x3914280() {
   return (neuron0x38f3f40()*-0.648821);
}

double NNfunction_ns_chi01_cL::synapse0x39142c0() {
   return (neuron0x38eca90()*-0.41884);
}

double NNfunction_ns_chi01_cL::synapse0x3914300() {
   return (neuron0x38ed460()*0.243647);
}

double NNfunction_ns_chi01_cL::synapse0x3914340() {
   return (neuron0x38f6cd0()*-0.497476);
}

double NNfunction_ns_chi01_cL::synapse0x3914380() {
   return (neuron0x38f76a0()*-0.476839);
}

double NNfunction_ns_chi01_cL::synapse0x39143c0() {
   return (neuron0x38f8070()*0.239157);
}

double NNfunction_ns_chi01_cL::synapse0x3914400() {
   return (neuron0x38f8a40()*0.429355);
}

double NNfunction_ns_chi01_cL::synapse0x3914440() {
   return (neuron0x38f9410()*6.48341);
}

double NNfunction_ns_chi01_cL::synapse0x3914480() {
   return (neuron0x38f9de0()*-0.140169);
}

double NNfunction_ns_chi01_cL::synapse0x39144c0() {
   return (neuron0x38fa7b0()*-5.76476);
}

double NNfunction_ns_chi01_cL::synapse0x3914500() {
   return (neuron0x38fb180()*0.365305);
}

double NNfunction_ns_chi01_cL::synapse0x39140b0() {
   return (neuron0x38f1210()*-1.64413);
}

double NNfunction_ns_chi01_cL::synapse0x39140f0() {
   return (neuron0x38fdd60()*0.462255);
}

double NNfunction_ns_chi01_cL::synapse0x3914130() {
   return (neuron0x38fe730()*0.313335);
}

double NNfunction_ns_chi01_cL::synapse0x3914170() {
   return (neuron0x38ff100()*-2.90907);
}

double NNfunction_ns_chi01_cL::synapse0x3914750() {
   return (neuron0x38ffad0()*-0.427924);
}

double NNfunction_ns_chi01_cL::synapse0x3914790() {
   return (neuron0x39004a0()*3.12202);
}

double NNfunction_ns_chi01_cL::synapse0x39147d0() {
   return (neuron0x3900e70()*0.640572);
}

double NNfunction_ns_chi01_cL::synapse0x3914810() {
   return (neuron0x3901840()*2.23281);
}

double NNfunction_ns_chi01_cL::synapse0x3914850() {
   return (neuron0x3902210()*-0.640462);
}

double NNfunction_ns_chi01_cL::synapse0x3914890() {
   return (neuron0x3902df0()*-3.12588);
}

double NNfunction_ns_chi01_cL::synapse0x39148d0() {
   return (neuron0x39037c0()*-6.00912);
}

double NNfunction_ns_chi01_cL::synapse0x3914910() {
   return (neuron0x38f4640()*7.07911);
}

double NNfunction_ns_chi01_cL::synapse0x3914950() {
   return (neuron0x38f5010()*0.282047);
}

double NNfunction_ns_chi01_cL::synapse0x3914990() {
   return (neuron0x38f59e0()*-2.05166);
}

double NNfunction_ns_chi01_cL::synapse0x39149d0() {
   return (neuron0x3908020()*0.810321);
}

double NNfunction_ns_chi01_cL::synapse0x3914a10() {
   return (neuron0x39088d0()*-0.783013);
}

double NNfunction_ns_chi01_cL::synapse0x3914a50() {
   return (neuron0x39092a0()*2.37546);
}

double NNfunction_ns_chi01_cL::synapse0x3914a90() {
   return (neuron0x3909c70()*1.44772);
}

double NNfunction_ns_chi01_cL::synapse0x3914cf0() {
   return (neuron0x3910e70()*-7.78659);
}

double NNfunction_ns_chi01_cL::synapse0x3914d30() {
   return (neuron0x3911210()*-6.51462);
}

double NNfunction_ns_chi01_cL::synapse0x3914d70() {
   return (neuron0x39116b0()*6.90821);
}

double NNfunction_ns_chi01_cL::synapse0x3914db0() {
   return (neuron0x3912810()*-2.61698);
}

double NNfunction_ns_chi01_cL::synapse0x3914df0() {
   return (neuron0x3913970()*12.3145);
}

