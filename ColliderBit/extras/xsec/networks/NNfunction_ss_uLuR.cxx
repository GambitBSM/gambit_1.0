#include "NNfunction_ss_uLuR.h"
#include <cmath>

double NNfunction_ss_uLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.1108)/15.0381;
   input1 = (in1 - 86.2957)/638.889;
   input2 = (in2 - 359.705)/408.725;
   input3 = (in3 - 453.356)/647.254;
   input4 = (in4 - 868.282)/639.986;
   input5 = (in5 - 793.73)/634.95;
   input6 = (in6 - 798.28)/637.233;
   input7 = (in7 - 778.785)/624.569;
   input8 = (in8 - 776.313)/649.912;
   input9 = (in9 - 768.972)/639.809;
   input10 = (in10 - 744.126)/642.144;
   input11 = (in11 - 836.185)/505.853;
   input12 = (in12 - 910.456)/598.652;
   input13 = (in13 - 721.697)/422.177;
   input14 = (in14 - 840.205)/503.217;
   input15 = (in15 - 902.245)/577.438;
   input16 = (in16 - 608.123)/388.444;
   input17 = (in17 - 908.724)/601.391;
   input18 = (in18 - 906.227)/604.002;
   input19 = (in19 - 882.288)/578.22;
   input20 = (in20 - -342.394)/482.649;
   input21 = (in21 - -451.229)/975.734;
   input22 = (in22 - -23.2932)/943.077;
   input23 = (in23 - 72.8963)/556.497;
   switch(index) {
     case 0:
         return neuron0x3a7d030();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.1108)/15.0381;
   input1 = (input[1] - 86.2957)/638.889;
   input2 = (input[2] - 359.705)/408.725;
   input3 = (input[3] - 453.356)/647.254;
   input4 = (input[4] - 868.282)/639.986;
   input5 = (input[5] - 793.73)/634.95;
   input6 = (input[6] - 798.28)/637.233;
   input7 = (input[7] - 778.785)/624.569;
   input8 = (input[8] - 776.313)/649.912;
   input9 = (input[9] - 768.972)/639.809;
   input10 = (input[10] - 744.126)/642.144;
   input11 = (input[11] - 836.185)/505.853;
   input12 = (input[12] - 910.456)/598.652;
   input13 = (input[13] - 721.697)/422.177;
   input14 = (input[14] - 840.205)/503.217;
   input15 = (input[15] - 902.245)/577.438;
   input16 = (input[16] - 608.123)/388.444;
   input17 = (input[17] - 908.724)/601.391;
   input18 = (input[18] - 906.227)/604.002;
   input19 = (input[19] - 882.288)/578.22;
   input20 = (input[20] - -342.394)/482.649;
   input21 = (input[21] - -451.229)/975.734;
   input22 = (input[22] - -23.2932)/943.077;
   input23 = (input[23] - 72.8963)/556.497;
   switch(index) {
     case 0:
         return neuron0x3a7d030();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLuR::neuron0x3a480a0() {
   return input0;
}

double NNfunction_ss_uLuR::neuron0x3a48350() {
   return input1;
}

double NNfunction_ss_uLuR::neuron0x3a48690() {
   return input2;
}

double NNfunction_ss_uLuR::neuron0x3a489d0() {
   return input3;
}

double NNfunction_ss_uLuR::neuron0x3a48d10() {
   return input4;
}

double NNfunction_ss_uLuR::neuron0x3a49050() {
   return input5;
}

double NNfunction_ss_uLuR::neuron0x3a49390() {
   return input6;
}

double NNfunction_ss_uLuR::neuron0x3a496d0() {
   return input7;
}

double NNfunction_ss_uLuR::neuron0x3a49a10() {
   return input8;
}

double NNfunction_ss_uLuR::neuron0x3a49d50() {
   return input9;
}

double NNfunction_ss_uLuR::neuron0x3a4a090() {
   return input10;
}

double NNfunction_ss_uLuR::neuron0x3a4a3d0() {
   return input11;
}

double NNfunction_ss_uLuR::neuron0x3a4a710() {
   return input12;
}

double NNfunction_ss_uLuR::neuron0x3a4aa50() {
   return input13;
}

double NNfunction_ss_uLuR::neuron0x3a4ad90() {
   return input14;
}

double NNfunction_ss_uLuR::neuron0x3a4b0d0() {
   return input15;
}

double NNfunction_ss_uLuR::neuron0x3a4b410() {
   return input16;
}

double NNfunction_ss_uLuR::neuron0x3a4b970() {
   return input17;
}

double NNfunction_ss_uLuR::neuron0x3a4bcb0() {
   return input18;
}

double NNfunction_ss_uLuR::neuron0x3a4bff0() {
   return input19;
}

double NNfunction_ss_uLuR::neuron0x3a4c330() {
   return input20;
}

double NNfunction_ss_uLuR::neuron0x3a4c670() {
   return input21;
}

double NNfunction_ss_uLuR::neuron0x3a4c9b0() {
   return input22;
}

double NNfunction_ss_uLuR::neuron0x3a4ccf0() {
   return input23;
}

double NNfunction_ss_uLuR::input0x3a4d160() {
   double input = -0.991318;
   input += synapse0x3a4d4a0();
   input += synapse0x3a4d4e0();
   input += synapse0x3a4d520();
   input += synapse0x3a4d560();
   input += synapse0x3a4d5a0();
   input += synapse0x3a4d5e0();
   input += synapse0x3a4d620();
   input += synapse0x3a4d660();
   input += synapse0x3a4d6a0();
   input += synapse0x3a4d6e0();
   input += synapse0x3a4d720();
   input += synapse0x3a4d760();
   input += synapse0x3a4d7a0();
   input += synapse0x3a4d7e0();
   input += synapse0x3a4d820();
   input += synapse0x3a4d860();
   input += synapse0x3a4d2f0();
   input += synapse0x3a4d330();
   input += synapse0x38042b0();
   input += synapse0x38042f0();
   input += synapse0x3a4d8a0();
   input += synapse0x3a4d8e0();
   input += synapse0x3a4d920();
   input += synapse0x3a4d960();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a4d160() {
   double input = input0x3a4d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a4d9a0() {
   double input = 0.738746;
   input += synapse0x3a4dce0();
   input += synapse0x3a4dd20();
   input += synapse0x3a4dd60();
   input += synapse0x3a4dda0();
   input += synapse0x3a4dde0();
   input += synapse0x3a4de20();
   input += synapse0x3a4de60();
   input += synapse0x3a4dea0();
   input += synapse0x3a4dee0();
   input += synapse0x3804100();
   input += synapse0x3804140();
   input += synapse0x3804180();
   input += synapse0x38041c0();
   input += synapse0x3a4e130();
   input += synapse0x3a4e170();
   input += synapse0x3a4e1b0();
   input += synapse0x3a4db30();
   input += synapse0x3a4db70();
   input += synapse0x3a4e300();
   input += synapse0x3a4e340();
   input += synapse0x3a4e380();
   input += synapse0x3a4e3c0();
   input += synapse0x3a4e400();
   input += synapse0x3a4e440();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a4d9a0() {
   double input = input0x3a4d9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a4e480() {
   double input = -1.29146;
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
   input += synapse0x3a4eac0();
   input += synapse0x3a4eb00();
   input += synapse0x3a4eb40();
   input += synapse0x3a4eb80();
   input += synapse0x3a4e610();
   input += synapse0x3a4e650();
   input += synapse0x3804960();
   input += synapse0x3812190();
   input += synapse0x38121d0();
   input += synapse0x3a50ab0();
   input += synapse0x3a50af0();
   input += synapse0x3a47de0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a4e480() {
   double input = input0x3a4e480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a4df20() {
   double input = -0.52794;
   input += synapse0x3a47eb0();
   input += synapse0x3812a10();
   input += synapse0x3a4e0b0();
   input += synapse0x3a4e0f0();
   input += synapse0x3a4ecd0();
   input += synapse0x3a4ed10();
   input += synapse0x3a4ed50();
   input += synapse0x3a4ed90();
   input += synapse0x3a4edd0();
   input += synapse0x3a4ee10();
   input += synapse0x3a4ee50();
   input += synapse0x3a4ee90();
   input += synapse0x3a4eed0();
   input += synapse0x3a4ef10();
   input += synapse0x3a4ef50();
   input += synapse0x3a4ef90();
   input += synapse0x3a47e20();
   input += synapse0x3a47e60();
   input += synapse0x3a4f0e0();
   input += synapse0x3a4f120();
   input += synapse0x3a4f160();
   input += synapse0x3a4f1a0();
   input += synapse0x3a4f1e0();
   input += synapse0x3a4f220();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a4df20() {
   double input = input0x3a4df20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a4f260() {
   double input = -0.827745;
   input += synapse0x3a4f5a0();
   input += synapse0x3a4f5e0();
   input += synapse0x3a4f620();
   input += synapse0x3a4f660();
   input += synapse0x3a4f6a0();
   input += synapse0x3a4f6e0();
   input += synapse0x3a4f720();
   input += synapse0x3a4f760();
   input += synapse0x3a4f7a0();
   input += synapse0x3a4f7e0();
   input += synapse0x3a4f820();
   input += synapse0x3a4f860();
   input += synapse0x3a4f8a0();
   input += synapse0x3a4f8e0();
   input += synapse0x3a4f920();
   input += synapse0x3a4f960();
   input += synapse0x3a4fab0();
   input += synapse0x3a4f3f0();
   input += synapse0x3a4f430();
   input += synapse0x3a50bf0();
   input += synapse0x3a50c30();
   input += synapse0x3a50c70();
   input += synapse0x3a50cb0();
   input += synapse0x3a50cf0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a4f260() {
   double input = input0x3a4f260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a50d30() {
   double input = 1.53892;
   input += synapse0x3a51070();
   input += synapse0x3a510b0();
   input += synapse0x3a510f0();
   input += synapse0x3a51130();
   input += synapse0x3a51170();
   input += synapse0x3a511b0();
   input += synapse0x3a511f0();
   input += synapse0x3a51230();
   input += synapse0x3a51270();
   input += synapse0x38124e0();
   input += synapse0x3812520();
   input += synapse0x3812560();
   input += synapse0x38125a0();
   input += synapse0x38125e0();
   input += synapse0x3812620();
   input += synapse0x3812660();
   input += synapse0x3a50ec0();
   input += synapse0x3a50f00();
   input += synapse0x38127b0();
   input += synapse0x38127f0();
   input += synapse0x3812830();
   input += synapse0x3812870();
   input += synapse0x38128b0();
   input += synapse0x3a51ac0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a50d30() {
   double input = input0x3a50d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a51b00() {
   double input = 0.904372;
   input += synapse0x3a51e40();
   input += synapse0x3a51e80();
   input += synapse0x3a51ec0();
   input += synapse0x3a51f00();
   input += synapse0x3a51f40();
   input += synapse0x3a51f80();
   input += synapse0x3a51fc0();
   input += synapse0x3a52000();
   input += synapse0x3a52040();
   input += synapse0x3a52080();
   input += synapse0x3a520c0();
   input += synapse0x3a52100();
   input += synapse0x3a52140();
   input += synapse0x3a52180();
   input += synapse0x3a521c0();
   input += synapse0x3a52200();
   input += synapse0x3a51c90();
   input += synapse0x3a51cd0();
   input += synapse0x3a52350();
   input += synapse0x3a52390();
   input += synapse0x3a523d0();
   input += synapse0x3a52410();
   input += synapse0x3a52450();
   input += synapse0x3a52490();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a51b00() {
   double input = input0x3a51b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a524d0() {
   double input = 0.887983;
   input += synapse0x3a52810();
   input += synapse0x3a52850();
   input += synapse0x3a52890();
   input += synapse0x3a528d0();
   input += synapse0x3a52910();
   input += synapse0x3a52950();
   input += synapse0x3a52990();
   input += synapse0x3a529d0();
   input += synapse0x3a52a10();
   input += synapse0x3a52a50();
   input += synapse0x3a52a90();
   input += synapse0x3a52ad0();
   input += synapse0x3a52b10();
   input += synapse0x3a52b50();
   input += synapse0x3a52b90();
   input += synapse0x3a52bd0();
   input += synapse0x3a52660();
   input += synapse0x3a526a0();
   input += synapse0x3a52d20();
   input += synapse0x3a52d60();
   input += synapse0x3a52da0();
   input += synapse0x3a52de0();
   input += synapse0x3a52e20();
   input += synapse0x3a52e60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a524d0() {
   double input = input0x3a524d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a52ea0() {
   double input = -0.795168;
   input += synapse0x3a4b860();
   input += synapse0x3a4b8a0();
   input += synapse0x3a4b8e0();
   input += synapse0x3a4b920();
   input += synapse0x3a533f0();
   input += synapse0x3a53430();
   input += synapse0x3a53470();
   input += synapse0x3a534b0();
   input += synapse0x3a534f0();
   input += synapse0x3a53530();
   input += synapse0x3a53570();
   input += synapse0x3a535b0();
   input += synapse0x3a535f0();
   input += synapse0x3a53630();
   input += synapse0x3a53670();
   input += synapse0x3a536b0();
   input += synapse0x3a53030();
   input += synapse0x3a53070();
   input += synapse0x3a53800();
   input += synapse0x3a53840();
   input += synapse0x3a53880();
   input += synapse0x3a538c0();
   input += synapse0x3a53900();
   input += synapse0x3a53940();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a52ea0() {
   double input = input0x3a52ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a53980() {
   double input = -1.04261;
   input += synapse0x3a53cc0();
   input += synapse0x3a53d00();
   input += synapse0x3a53d40();
   input += synapse0x3a53d80();
   input += synapse0x3a53dc0();
   input += synapse0x3a53e00();
   input += synapse0x3a53e40();
   input += synapse0x3a53e80();
   input += synapse0x3a53ec0();
   input += synapse0x3a53f00();
   input += synapse0x3a53f40();
   input += synapse0x3a53f80();
   input += synapse0x3a53fc0();
   input += synapse0x3a54000();
   input += synapse0x3a54040();
   input += synapse0x3a54080();
   input += synapse0x3a53b10();
   input += synapse0x3a53b50();
   input += synapse0x3a541d0();
   input += synapse0x3a54210();
   input += synapse0x3a54250();
   input += synapse0x3a54290();
   input += synapse0x3a542d0();
   input += synapse0x3a54310();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a53980() {
   double input = input0x3a53980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a54350() {
   double input = 1.09975;
   input += synapse0x3a54690();
   input += synapse0x3a546d0();
   input += synapse0x3a54710();
   input += synapse0x3a54750();
   input += synapse0x3a54790();
   input += synapse0x3a547d0();
   input += synapse0x3a54810();
   input += synapse0x3a54850();
   input += synapse0x3a54890();
   input += synapse0x3a548d0();
   input += synapse0x3a54910();
   input += synapse0x3a54950();
   input += synapse0x3a54990();
   input += synapse0x3a549d0();
   input += synapse0x3a54a10();
   input += synapse0x3a54a50();
   input += synapse0x3a544e0();
   input += synapse0x3a54520();
   input += synapse0x3a512b0();
   input += synapse0x3a512f0();
   input += synapse0x3a51330();
   input += synapse0x3a51370();
   input += synapse0x3a513b0();
   input += synapse0x3a513f0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a54350() {
   double input = input0x3a54350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a51430() {
   double input = 2.26864;
   input += synapse0x3a51770();
   input += synapse0x3a517b0();
   input += synapse0x3a517f0();
   input += synapse0x3a51830();
   input += synapse0x3a51870();
   input += synapse0x3a518b0();
   input += synapse0x3a518f0();
   input += synapse0x3a51930();
   input += synapse0x3a51970();
   input += synapse0x3a519b0();
   input += synapse0x3a519f0();
   input += synapse0x3a51a30();
   input += synapse0x3a51a70();
   input += synapse0x3a55bb0();
   input += synapse0x3a55bf0();
   input += synapse0x3a55c30();
   input += synapse0x3a515c0();
   input += synapse0x3a51600();
   input += synapse0x3a55d80();
   input += synapse0x3a55dc0();
   input += synapse0x3a55e00();
   input += synapse0x3a55e40();
   input += synapse0x3a55e80();
   input += synapse0x3a55ec0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a51430() {
   double input = input0x3a51430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a55f00() {
   double input = -1.67722;
   input += synapse0x3a56240();
   input += synapse0x3a56280();
   input += synapse0x3a562c0();
   input += synapse0x3a56300();
   input += synapse0x3a56340();
   input += synapse0x3a56380();
   input += synapse0x3a563c0();
   input += synapse0x3a56400();
   input += synapse0x3a56440();
   input += synapse0x3a56480();
   input += synapse0x3a564c0();
   input += synapse0x3a56500();
   input += synapse0x3a56540();
   input += synapse0x3a56580();
   input += synapse0x3a565c0();
   input += synapse0x3a56600();
   input += synapse0x3a56090();
   input += synapse0x3a560d0();
   input += synapse0x3a56750();
   input += synapse0x3a56790();
   input += synapse0x3a567d0();
   input += synapse0x3a56810();
   input += synapse0x3a56850();
   input += synapse0x3a56890();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a55f00() {
   double input = input0x3a55f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a568d0() {
   double input = -0.298415;
   input += synapse0x3a56c10();
   input += synapse0x3a56c50();
   input += synapse0x3a56c90();
   input += synapse0x3a56cd0();
   input += synapse0x3a56d10();
   input += synapse0x3a56d50();
   input += synapse0x3a56d90();
   input += synapse0x3a56dd0();
   input += synapse0x3a56e10();
   input += synapse0x3a56e50();
   input += synapse0x3a56e90();
   input += synapse0x3a56ed0();
   input += synapse0x3a56f10();
   input += synapse0x3a56f50();
   input += synapse0x3a56f90();
   input += synapse0x3a56fd0();
   input += synapse0x3a56a60();
   input += synapse0x3a56aa0();
   input += synapse0x3a57120();
   input += synapse0x3a57160();
   input += synapse0x3a571a0();
   input += synapse0x3a571e0();
   input += synapse0x3a57220();
   input += synapse0x3a57260();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a568d0() {
   double input = input0x3a568d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a572a0() {
   double input = 2.64568;
   input += synapse0x3a575e0();
   input += synapse0x3a57620();
   input += synapse0x3a57660();
   input += synapse0x3a576a0();
   input += synapse0x3a576e0();
   input += synapse0x3a57720();
   input += synapse0x3a57760();
   input += synapse0x3a577a0();
   input += synapse0x3a577e0();
   input += synapse0x3a57820();
   input += synapse0x3a57860();
   input += synapse0x3a578a0();
   input += synapse0x3a578e0();
   input += synapse0x3a57920();
   input += synapse0x3a57960();
   input += synapse0x3a579a0();
   input += synapse0x3a57430();
   input += synapse0x3a57470();
   input += synapse0x3a57af0();
   input += synapse0x3a57b30();
   input += synapse0x3a57b70();
   input += synapse0x3a57bb0();
   input += synapse0x3a57bf0();
   input += synapse0x3a57c30();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a572a0() {
   double input = input0x3a572a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a57c70() {
   double input = 1.18028;
   input += synapse0x3a57fb0();
   input += synapse0x3a48230();
   input += synapse0x3a48270();
   input += synapse0x3a48570();
   input += synapse0x3a485b0();
   input += synapse0x3a488b0();
   input += synapse0x3a488f0();
   input += synapse0x3a48bf0();
   input += synapse0x3a48c30();
   input += synapse0x3a48f30();
   input += synapse0x3a48f70();
   input += synapse0x3a49270();
   input += synapse0x3a492b0();
   input += synapse0x3a495b0();
   input += synapse0x3a495f0();
   input += synapse0x3a498f0();
   input += synapse0x3a49930();
   input += synapse0x3a49c30();
   input += synapse0x3a49c70();
   input += synapse0x3a49f70();
   input += synapse0x3a49fb0();
   input += synapse0x3a4a2b0();
   input += synapse0x3a4a2f0();
   input += synapse0x3a4a5f0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a57c70() {
   double input = input0x3a57c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a59a80() {
   double input = 0.149287;
   input += synapse0x3a4a630();
   input += synapse0x3a4b2f0();
   input += synapse0x3a4b330();
   input += synapse0x3a57e00();
   input += synapse0x3a57e40();
   input += synapse0x3a4b630();
   input += synapse0x3a4b670();
   input += synapse0x3a4bb90();
   input += synapse0x3a4bbd0();
   input += synapse0x3a4bed0();
   input += synapse0x3a4bf10();
   input += synapse0x3a4c210();
   input += synapse0x3a4c250();
   input += synapse0x3a4c550();
   input += synapse0x3a4c590();
   input += synapse0x3a4c890();
   input += synapse0x3a4c8d0();
   input += synapse0x3a4cbd0();
   input += synapse0x3a4cc10();
   input += synapse0x3a4cf10();
   input += synapse0x3a4cf50();
   input += synapse0x3a4a930();
   input += synapse0x3a4a970();
   input += synapse0x3a59d20();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a59a80() {
   double input = input0x3a59a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a59d60() {
   double input = 1.87469;
   input += synapse0x3a5a0a0();
   input += synapse0x3a5a0e0();
   input += synapse0x3a5a120();
   input += synapse0x3a5a160();
   input += synapse0x3a5a1a0();
   input += synapse0x3a5a1e0();
   input += synapse0x3a5a220();
   input += synapse0x3a5a260();
   input += synapse0x3a5a2a0();
   input += synapse0x3a5a2e0();
   input += synapse0x3a5a320();
   input += synapse0x3a5a360();
   input += synapse0x3a5a3a0();
   input += synapse0x3a5a3e0();
   input += synapse0x3a5a420();
   input += synapse0x3a5a460();
   input += synapse0x3a59ef0();
   input += synapse0x3a59f30();
   input += synapse0x3a5a5b0();
   input += synapse0x3a5a5f0();
   input += synapse0x3a5a630();
   input += synapse0x3a5a670();
   input += synapse0x3a5a6b0();
   input += synapse0x3a5a6f0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a59d60() {
   double input = input0x3a59d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5a730() {
   double input = 1.70502;
   input += synapse0x3a5aa70();
   input += synapse0x3a5aab0();
   input += synapse0x3a5aaf0();
   input += synapse0x3a5ab30();
   input += synapse0x3a5ab70();
   input += synapse0x3a5abb0();
   input += synapse0x3a5abf0();
   input += synapse0x3a5ac30();
   input += synapse0x3a5ac70();
   input += synapse0x3a5acb0();
   input += synapse0x3a5acf0();
   input += synapse0x3a5ad30();
   input += synapse0x3a5ad70();
   input += synapse0x3a5adb0();
   input += synapse0x3a5adf0();
   input += synapse0x3a5ae30();
   input += synapse0x3a5a8c0();
   input += synapse0x3a5a900();
   input += synapse0x3a5af80();
   input += synapse0x3a5afc0();
   input += synapse0x3a5b000();
   input += synapse0x3a5b040();
   input += synapse0x3a5b080();
   input += synapse0x3a5b0c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5a730() {
   double input = input0x3a5a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5b100() {
   double input = -2.68436;
   input += synapse0x3a5b440();
   input += synapse0x3a5b480();
   input += synapse0x3a5b4c0();
   input += synapse0x3a5b500();
   input += synapse0x3a5b540();
   input += synapse0x3a5b580();
   input += synapse0x3a5b5c0();
   input += synapse0x3a5b600();
   input += synapse0x3a5b640();
   input += synapse0x3a5b680();
   input += synapse0x3a5b6c0();
   input += synapse0x3a5b700();
   input += synapse0x3a5b740();
   input += synapse0x3a5b780();
   input += synapse0x3a5b7c0();
   input += synapse0x3a5b800();
   input += synapse0x3a5b290();
   input += synapse0x3a5b2d0();
   input += synapse0x3a5b950();
   input += synapse0x3a5b990();
   input += synapse0x3a5b9d0();
   input += synapse0x3a5ba10();
   input += synapse0x3a5ba50();
   input += synapse0x3a5ba90();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5b100() {
   double input = input0x3a5b100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5bad0() {
   double input = 0.0228121;
   input += synapse0x3a5be10();
   input += synapse0x3a5be50();
   input += synapse0x3a5be90();
   input += synapse0x3a5bed0();
   input += synapse0x3a5bf10();
   input += synapse0x3a5bf50();
   input += synapse0x3a5bf90();
   input += synapse0x3a5bfd0();
   input += synapse0x3a5c010();
   input += synapse0x3a5c050();
   input += synapse0x3a5c090();
   input += synapse0x3a5c0d0();
   input += synapse0x3a5c110();
   input += synapse0x3a5c150();
   input += synapse0x3a5c190();
   input += synapse0x3a5c1d0();
   input += synapse0x3a5bc60();
   input += synapse0x3a5bca0();
   input += synapse0x3a5c320();
   input += synapse0x3a5c360();
   input += synapse0x3a5c3a0();
   input += synapse0x3a5c3e0();
   input += synapse0x3a5c420();
   input += synapse0x3a5c460();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5bad0() {
   double input = input0x3a5bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5c4a0() {
   double input = -0.861539;
   input += synapse0x3a5c7e0();
   input += synapse0x3a5c820();
   input += synapse0x3a5c860();
   input += synapse0x3a5c8a0();
   input += synapse0x3a5c8e0();
   input += synapse0x3a5c920();
   input += synapse0x3a5c960();
   input += synapse0x3a5c9a0();
   input += synapse0x3a5c9e0();
   input += synapse0x3a54ba0();
   input += synapse0x3a54be0();
   input += synapse0x3a54c20();
   input += synapse0x3a54c60();
   input += synapse0x3a54ca0();
   input += synapse0x3a54ce0();
   input += synapse0x3a54d20();
   input += synapse0x3a5c630();
   input += synapse0x3a5c670();
   input += synapse0x3a54e70();
   input += synapse0x3a54eb0();
   input += synapse0x3a54ef0();
   input += synapse0x3a54f30();
   input += synapse0x3a54f70();
   input += synapse0x3a54fb0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5c4a0() {
   double input = input0x3a5c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a54ff0() {
   double input = -0.698184;
   input += synapse0x3a55330();
   input += synapse0x3a55370();
   input += synapse0x3a553b0();
   input += synapse0x3a553f0();
   input += synapse0x3a55430();
   input += synapse0x3a55470();
   input += synapse0x3a554b0();
   input += synapse0x3a554f0();
   input += synapse0x3a55530();
   input += synapse0x3a55570();
   input += synapse0x3a555b0();
   input += synapse0x3a555f0();
   input += synapse0x3a55630();
   input += synapse0x3a55670();
   input += synapse0x3a556b0();
   input += synapse0x3a556f0();
   input += synapse0x3a55180();
   input += synapse0x3a551c0();
   input += synapse0x3a55840();
   input += synapse0x3a55880();
   input += synapse0x3a558c0();
   input += synapse0x3a55900();
   input += synapse0x3a55940();
   input += synapse0x3a55980();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a54ff0() {
   double input = input0x3a54ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a559c0() {
   double input = 0.436166;
   input += synapse0x3a55b50();
   input += synapse0x3a5ebe0();
   input += synapse0x3a5ec20();
   input += synapse0x3a5ec60();
   input += synapse0x3a5eca0();
   input += synapse0x3a5ece0();
   input += synapse0x3a5ed20();
   input += synapse0x3a5ed60();
   input += synapse0x3a5eda0();
   input += synapse0x3a5ede0();
   input += synapse0x3a5ee20();
   input += synapse0x3a5ee60();
   input += synapse0x3a5eea0();
   input += synapse0x3a5eee0();
   input += synapse0x3a5ef20();
   input += synapse0x3a5ef60();
   input += synapse0x3a5ea30();
   input += synapse0x3a5ea70();
   input += synapse0x3a5f0b0();
   input += synapse0x3a5f0f0();
   input += synapse0x3a5f130();
   input += synapse0x3a5f170();
   input += synapse0x3a5f1b0();
   input += synapse0x3a5f1f0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a559c0() {
   double input = input0x3a559c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5f230() {
   double input = 0.510778;
   input += synapse0x3a5f570();
   input += synapse0x3a5f5b0();
   input += synapse0x3a5f5f0();
   input += synapse0x3a5f630();
   input += synapse0x3a5f670();
   input += synapse0x3a5f6b0();
   input += synapse0x3a5f6f0();
   input += synapse0x3a5f730();
   input += synapse0x3a5f770();
   input += synapse0x3a5f7b0();
   input += synapse0x3a5f7f0();
   input += synapse0x3a5f830();
   input += synapse0x3a5f870();
   input += synapse0x3a5f8b0();
   input += synapse0x3a5f8f0();
   input += synapse0x3a5f930();
   input += synapse0x3a5f3c0();
   input += synapse0x3a5f400();
   input += synapse0x3a5fa80();
   input += synapse0x3a5fac0();
   input += synapse0x3a5fb00();
   input += synapse0x3a5fb40();
   input += synapse0x3a5fb80();
   input += synapse0x3a5fbc0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5f230() {
   double input = input0x3a5f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5fc00() {
   double input = -0.607121;
   input += synapse0x3a5ff40();
   input += synapse0x3a5ff80();
   input += synapse0x3a5ffc0();
   input += synapse0x3a60000();
   input += synapse0x3a60040();
   input += synapse0x3a60080();
   input += synapse0x3a600c0();
   input += synapse0x3a60100();
   input += synapse0x3a60140();
   input += synapse0x3a60180();
   input += synapse0x3a601c0();
   input += synapse0x3a60200();
   input += synapse0x3a60240();
   input += synapse0x3a60280();
   input += synapse0x3a602c0();
   input += synapse0x3a60300();
   input += synapse0x3a5fd90();
   input += synapse0x3a5fdd0();
   input += synapse0x3a60450();
   input += synapse0x3a60490();
   input += synapse0x3a604d0();
   input += synapse0x3a60510();
   input += synapse0x3a60550();
   input += synapse0x3a60590();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5fc00() {
   double input = input0x3a5fc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a605d0() {
   double input = 0.481339;
   input += synapse0x3a60910();
   input += synapse0x3a60950();
   input += synapse0x3a60990();
   input += synapse0x3a609d0();
   input += synapse0x3a60a10();
   input += synapse0x3a60a50();
   input += synapse0x3a60a90();
   input += synapse0x3a60ad0();
   input += synapse0x3a60b10();
   input += synapse0x3a60b50();
   input += synapse0x3a60b90();
   input += synapse0x3a60bd0();
   input += synapse0x3a60c10();
   input += synapse0x3a60c50();
   input += synapse0x3a60c90();
   input += synapse0x3a60cd0();
   input += synapse0x3a60760();
   input += synapse0x3a607a0();
   input += synapse0x3a60e20();
   input += synapse0x3a60e60();
   input += synapse0x3a60ea0();
   input += synapse0x3a60ee0();
   input += synapse0x3a60f20();
   input += synapse0x3a60f60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a605d0() {
   double input = input0x3a605d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a60fa0() {
   double input = -0.442048;
   input += synapse0x3a612e0();
   input += synapse0x3a61320();
   input += synapse0x3a61360();
   input += synapse0x3a613a0();
   input += synapse0x3a613e0();
   input += synapse0x3a61420();
   input += synapse0x3a61460();
   input += synapse0x3a614a0();
   input += synapse0x3a614e0();
   input += synapse0x3a61520();
   input += synapse0x3a61560();
   input += synapse0x3a615a0();
   input += synapse0x3a615e0();
   input += synapse0x3a61620();
   input += synapse0x3a61660();
   input += synapse0x3a616a0();
   input += synapse0x3a61130();
   input += synapse0x3a61170();
   input += synapse0x3a617f0();
   input += synapse0x3a61830();
   input += synapse0x3a61870();
   input += synapse0x3a618b0();
   input += synapse0x3a618f0();
   input += synapse0x3a61930();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a60fa0() {
   double input = input0x3a60fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a61970() {
   double input = 1.22436;
   input += synapse0x3a61cb0();
   input += synapse0x3a61cf0();
   input += synapse0x3a61d30();
   input += synapse0x3a61d70();
   input += synapse0x3a61db0();
   input += synapse0x3a61df0();
   input += synapse0x3a61e30();
   input += synapse0x3a61e70();
   input += synapse0x3a61eb0();
   input += synapse0x3a61ef0();
   input += synapse0x3a61f30();
   input += synapse0x3a61f70();
   input += synapse0x3a61fb0();
   input += synapse0x3a61ff0();
   input += synapse0x3a62030();
   input += synapse0x3a62070();
   input += synapse0x3a61b00();
   input += synapse0x3a61b40();
   input += synapse0x3a621c0();
   input += synapse0x3a62200();
   input += synapse0x3a62240();
   input += synapse0x3a62280();
   input += synapse0x3a622c0();
   input += synapse0x3a62300();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a61970() {
   double input = input0x3a61970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a62340() {
   double input = -5.91487;
   input += synapse0x3a62680();
   input += synapse0x3a626c0();
   input += synapse0x3a62700();
   input += synapse0x3a62740();
   input += synapse0x3a62780();
   input += synapse0x3a627c0();
   input += synapse0x3a62800();
   input += synapse0x3a62840();
   input += synapse0x3a62880();
   input += synapse0x3a628c0();
   input += synapse0x3a62900();
   input += synapse0x3a62940();
   input += synapse0x3a62980();
   input += synapse0x3a629c0();
   input += synapse0x3a62a00();
   input += synapse0x3a62a40();
   input += synapse0x3a624d0();
   input += synapse0x3a62510();
   input += synapse0x3a62b90();
   input += synapse0x3a62bd0();
   input += synapse0x3a62c10();
   input += synapse0x3a62c50();
   input += synapse0x3a62c90();
   input += synapse0x3a62cd0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a62340() {
   double input = input0x3a62340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a62d10() {
   double input = -0.423394;
   input += synapse0x3a63050();
   input += synapse0x3a63090();
   input += synapse0x3a630d0();
   input += synapse0x3a63110();
   input += synapse0x3a63150();
   input += synapse0x3a63190();
   input += synapse0x3a631d0();
   input += synapse0x3a63210();
   input += synapse0x3a63250();
   input += synapse0x3a63290();
   input += synapse0x3a632d0();
   input += synapse0x3a63310();
   input += synapse0x3a63350();
   input += synapse0x3a63390();
   input += synapse0x3a633d0();
   input += synapse0x3a63410();
   input += synapse0x3a62ea0();
   input += synapse0x3a62ee0();
   input += synapse0x3a63560();
   input += synapse0x3a635a0();
   input += synapse0x3a635e0();
   input += synapse0x3a63620();
   input += synapse0x3a63660();
   input += synapse0x3a636a0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a62d10() {
   double input = input0x3a62d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a636e0() {
   double input = -2.29902;
   input += synapse0x3a63a20();
   input += synapse0x3a57ff0();
   input += synapse0x3a58030();
   input += synapse0x3a58070();
   input += synapse0x3a582c0();
   input += synapse0x3a58300();
   input += synapse0x3a58340();
   input += synapse0x3a58590();
   input += synapse0x3a585d0();
   input += synapse0x3a58820();
   input += synapse0x3a58860();
   input += synapse0x3a588a0();
   input += synapse0x3a58af0();
   input += synapse0x3a58b30();
   input += synapse0x3a58d80();
   input += synapse0x3a58dc0();
   input += synapse0x3a63870();
   input += synapse0x3a638b0();
   input += synapse0x3a58f10();
   input += synapse0x3a59420();
   input += synapse0x3a59460();
   input += synapse0x3a594a0();
   input += synapse0x3a596f0();
   input += synapse0x3a59730();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a636e0() {
   double input = input0x3a636e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a59770() {
   double input = -1.11707;
   input += synapse0x3a58fe0();
   input += synapse0x3a59020();
   input += synapse0x3a59060();
   input += synapse0x3a590a0();
   input += synapse0x3a59a20();
   input += synapse0x3a65d70();
   input += synapse0x3a65db0();
   input += synapse0x3a65df0();
   input += synapse0x3a65e30();
   input += synapse0x3a65e70();
   input += synapse0x3a65eb0();
   input += synapse0x3a65ef0();
   input += synapse0x3a65f30();
   input += synapse0x3a65f70();
   input += synapse0x3a65fb0();
   input += synapse0x3a65ff0();
   input += synapse0x3a59900();
   input += synapse0x3a59940();
   input += synapse0x3a66140();
   input += synapse0x3a66180();
   input += synapse0x3a661c0();
   input += synapse0x3a66200();
   input += synapse0x3a66240();
   input += synapse0x3a66280();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a59770() {
   double input = input0x3a59770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a662c0() {
   double input = -1.54699;
   input += synapse0x3a66600();
   input += synapse0x3a66640();
   input += synapse0x3a66680();
   input += synapse0x3a666c0();
   input += synapse0x3a66700();
   input += synapse0x3a66740();
   input += synapse0x3a66780();
   input += synapse0x3a667c0();
   input += synapse0x3a66800();
   input += synapse0x3a66840();
   input += synapse0x3a66880();
   input += synapse0x3a668c0();
   input += synapse0x3a66900();
   input += synapse0x3a66940();
   input += synapse0x3a66980();
   input += synapse0x3a669c0();
   input += synapse0x3a66450();
   input += synapse0x3a66490();
   input += synapse0x3a66b10();
   input += synapse0x3a66b50();
   input += synapse0x3a66b90();
   input += synapse0x3a66bd0();
   input += synapse0x3a66c10();
   input += synapse0x3a66c50();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a662c0() {
   double input = input0x3a662c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a66c90() {
   double input = -0.144005;
   input += synapse0x3a66fd0();
   input += synapse0x3a67010();
   input += synapse0x3a67050();
   input += synapse0x3a67090();
   input += synapse0x3a670d0();
   input += synapse0x3a67110();
   input += synapse0x3a67150();
   input += synapse0x3a67190();
   input += synapse0x3a671d0();
   input += synapse0x3a67210();
   input += synapse0x3a67250();
   input += synapse0x3a67290();
   input += synapse0x3a672d0();
   input += synapse0x3a67310();
   input += synapse0x3a67350();
   input += synapse0x3a67390();
   input += synapse0x3a66e20();
   input += synapse0x3a66e60();
   input += synapse0x3a674e0();
   input += synapse0x3a67520();
   input += synapse0x3a67560();
   input += synapse0x3a675a0();
   input += synapse0x3a675e0();
   input += synapse0x3a67620();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a66c90() {
   double input = input0x3a66c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a67660() {
   double input = 2.11687;
   input += synapse0x3a679a0();
   input += synapse0x3a679e0();
   input += synapse0x3a67a20();
   input += synapse0x3a67a60();
   input += synapse0x3a67aa0();
   input += synapse0x3a67ae0();
   input += synapse0x3a67b20();
   input += synapse0x3a67b60();
   input += synapse0x3a67ba0();
   input += synapse0x3a67be0();
   input += synapse0x3a67c20();
   input += synapse0x3a67c60();
   input += synapse0x3a67ca0();
   input += synapse0x3a67ce0();
   input += synapse0x3a67d20();
   input += synapse0x3a67d60();
   input += synapse0x3a677f0();
   input += synapse0x3a67830();
   input += synapse0x3a67eb0();
   input += synapse0x3a67ef0();
   input += synapse0x3a67f30();
   input += synapse0x3a67f70();
   input += synapse0x3a67fb0();
   input += synapse0x3a67ff0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a67660() {
   double input = input0x3a67660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a68030() {
   double input = 0.144824;
   input += synapse0x3a68370();
   input += synapse0x3a683b0();
   input += synapse0x3a683f0();
   input += synapse0x3a68430();
   input += synapse0x3a68470();
   input += synapse0x3a684b0();
   input += synapse0x3a684f0();
   input += synapse0x3a68530();
   input += synapse0x3a68570();
   input += synapse0x3a685b0();
   input += synapse0x3a685f0();
   input += synapse0x3a68630();
   input += synapse0x3a68670();
   input += synapse0x3a686b0();
   input += synapse0x3a686f0();
   input += synapse0x3a68730();
   input += synapse0x3a681c0();
   input += synapse0x3a68200();
   input += synapse0x3a68880();
   input += synapse0x3a688c0();
   input += synapse0x3a68900();
   input += synapse0x3a68940();
   input += synapse0x3a68980();
   input += synapse0x3a689c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a68030() {
   double input = input0x3a68030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a68a00() {
   double input = 1.27735;
   input += synapse0x3a68d40();
   input += synapse0x3a68d80();
   input += synapse0x3a68dc0();
   input += synapse0x3a68e00();
   input += synapse0x3a68e40();
   input += synapse0x3a68e80();
   input += synapse0x3a68ec0();
   input += synapse0x3a68f00();
   input += synapse0x3a68f40();
   input += synapse0x3a68f80();
   input += synapse0x3a68fc0();
   input += synapse0x3a69000();
   input += synapse0x3a69040();
   input += synapse0x3a69080();
   input += synapse0x3a690c0();
   input += synapse0x3a69100();
   input += synapse0x3a68b90();
   input += synapse0x3a68bd0();
   input += synapse0x3a69250();
   input += synapse0x3a69290();
   input += synapse0x3a692d0();
   input += synapse0x3a69310();
   input += synapse0x3a69350();
   input += synapse0x3a69390();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a68a00() {
   double input = input0x3a68a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a693d0() {
   double input = 0.180107;
   input += synapse0x3a69710();
   input += synapse0x3a69750();
   input += synapse0x3a69790();
   input += synapse0x3a697d0();
   input += synapse0x3a69810();
   input += synapse0x3a69850();
   input += synapse0x3a69890();
   input += synapse0x3a698d0();
   input += synapse0x3a69910();
   input += synapse0x3a69950();
   input += synapse0x3a69990();
   input += synapse0x3a699d0();
   input += synapse0x3a69a10();
   input += synapse0x3a69a50();
   input += synapse0x3a69a90();
   input += synapse0x3a69ad0();
   input += synapse0x3a69560();
   input += synapse0x3a695a0();
   input += synapse0x3a69c20();
   input += synapse0x3a69c60();
   input += synapse0x3a69ca0();
   input += synapse0x3a69ce0();
   input += synapse0x3a69d20();
   input += synapse0x3a69d60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a693d0() {
   double input = input0x3a693d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a69da0() {
   double input = 0.209648;
   input += synapse0x3a6a0e0();
   input += synapse0x3a6a120();
   input += synapse0x3a6a160();
   input += synapse0x3a6a1a0();
   input += synapse0x3a6a1e0();
   input += synapse0x3a6a220();
   input += synapse0x3a6a260();
   input += synapse0x3a6a2a0();
   input += synapse0x3a6a2e0();
   input += synapse0x3a6a320();
   input += synapse0x3a6a360();
   input += synapse0x3a6a3a0();
   input += synapse0x3a6a3e0();
   input += synapse0x3a6a420();
   input += synapse0x3a6a460();
   input += synapse0x3a6a4a0();
   input += synapse0x3a69f30();
   input += synapse0x3a69f70();
   input += synapse0x3a6a5f0();
   input += synapse0x3a6a630();
   input += synapse0x3a6a670();
   input += synapse0x3a6a6b0();
   input += synapse0x3a6a6f0();
   input += synapse0x3a6a730();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a69da0() {
   double input = input0x3a69da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a6a770() {
   double input = 0.602206;
   input += synapse0x3a531e0();
   input += synapse0x3a53220();
   input += synapse0x3a53260();
   input += synapse0x3a532a0();
   input += synapse0x3a532e0();
   input += synapse0x3a53320();
   input += synapse0x3a53360();
   input += synapse0x3a533a0();
   input += synapse0x3a6aec0();
   input += synapse0x3a6af00();
   input += synapse0x3a6af40();
   input += synapse0x3a6af80();
   input += synapse0x3a6afc0();
   input += synapse0x3a6b000();
   input += synapse0x3a6b040();
   input += synapse0x3a6b080();
   input += synapse0x3a6a900();
   input += synapse0x3a6a940();
   input += synapse0x3a6b1d0();
   input += synapse0x3a6b210();
   input += synapse0x3a6b250();
   input += synapse0x3a6b290();
   input += synapse0x3a6b2d0();
   input += synapse0x3a6b310();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a6a770() {
   double input = input0x3a6a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a6b350() {
   double input = -1.7299;
   input += synapse0x3a6b690();
   input += synapse0x3a6b6d0();
   input += synapse0x3a6b710();
   input += synapse0x3a6b750();
   input += synapse0x3a6b790();
   input += synapse0x3a6b7d0();
   input += synapse0x3a6b810();
   input += synapse0x3a6b850();
   input += synapse0x3a6b890();
   input += synapse0x3a6b8d0();
   input += synapse0x3a6b910();
   input += synapse0x3a6b950();
   input += synapse0x3a6b990();
   input += synapse0x3a6b9d0();
   input += synapse0x3a6ba10();
   input += synapse0x3a6ba50();
   input += synapse0x3a6b4e0();
   input += synapse0x3a6b520();
   input += synapse0x3a6bba0();
   input += synapse0x3a6bbe0();
   input += synapse0x3a6bc20();
   input += synapse0x3a6bc60();
   input += synapse0x3a6bca0();
   input += synapse0x3a6bce0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a6b350() {
   double input = input0x3a6b350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a6bd20() {
   double input = -2.15563;
   input += synapse0x3a6c060();
   input += synapse0x3a6c0a0();
   input += synapse0x3a6c0e0();
   input += synapse0x3a6c120();
   input += synapse0x3a6c160();
   input += synapse0x3a6c1a0();
   input += synapse0x3a6c1e0();
   input += synapse0x3a6c220();
   input += synapse0x3a6c260();
   input += synapse0x3a6c2a0();
   input += synapse0x3a6c2e0();
   input += synapse0x3a6c320();
   input += synapse0x3a6c360();
   input += synapse0x3a6c3a0();
   input += synapse0x3a6c3e0();
   input += synapse0x3a6c420();
   input += synapse0x3a6beb0();
   input += synapse0x3a6bef0();
   input += synapse0x3a5ca20();
   input += synapse0x3a5ca60();
   input += synapse0x3a5caa0();
   input += synapse0x3a5cae0();
   input += synapse0x3a5cb20();
   input += synapse0x3a5cb60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a6bd20() {
   double input = input0x3a6bd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5cba0() {
   double input = 0.189776;
   input += synapse0x3a5cee0();
   input += synapse0x3a5cf20();
   input += synapse0x3a5cf60();
   input += synapse0x3a5cfa0();
   input += synapse0x3a5cfe0();
   input += synapse0x3a5d020();
   input += synapse0x3a5d060();
   input += synapse0x3a5d0a0();
   input += synapse0x3a5d0e0();
   input += synapse0x3a5d120();
   input += synapse0x3a5d160();
   input += synapse0x3a5d1a0();
   input += synapse0x3a5d1e0();
   input += synapse0x3a5d220();
   input += synapse0x3a5d260();
   input += synapse0x3a5d2a0();
   input += synapse0x3a5cd30();
   input += synapse0x3a5cd70();
   input += synapse0x3a5d3f0();
   input += synapse0x3a5d430();
   input += synapse0x3a5d470();
   input += synapse0x3a5d4b0();
   input += synapse0x3a5d4f0();
   input += synapse0x3a5d530();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5cba0() {
   double input = input0x3a5cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5d570() {
   double input = -0.256752;
   input += synapse0x3a5d8b0();
   input += synapse0x3a5d8f0();
   input += synapse0x3a5d930();
   input += synapse0x3a5d970();
   input += synapse0x3a5d9b0();
   input += synapse0x3a5d9f0();
   input += synapse0x3a5da30();
   input += synapse0x3a5da70();
   input += synapse0x3a5dab0();
   input += synapse0x3a5daf0();
   input += synapse0x3a5db30();
   input += synapse0x3a5db70();
   input += synapse0x3a5dbb0();
   input += synapse0x3a5dbf0();
   input += synapse0x3a5dc30();
   input += synapse0x3a5dc70();
   input += synapse0x3a5d700();
   input += synapse0x3a5d740();
   input += synapse0x3a5ddc0();
   input += synapse0x3a5de00();
   input += synapse0x3a5de40();
   input += synapse0x3a5de80();
   input += synapse0x3a5dec0();
   input += synapse0x3a5df00();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5d570() {
   double input = input0x3a5d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a5df40() {
   double input = 0.089245;
   input += synapse0x3a5e280();
   input += synapse0x3a5e2c0();
   input += synapse0x3a5e300();
   input += synapse0x3a5e340();
   input += synapse0x3a5e380();
   input += synapse0x3a5e3c0();
   input += synapse0x3a5e400();
   input += synapse0x3a5e440();
   input += synapse0x3a5e480();
   input += synapse0x3a5e4c0();
   input += synapse0x3a5e500();
   input += synapse0x3a5e540();
   input += synapse0x3a5e580();
   input += synapse0x3a5e5c0();
   input += synapse0x3a5e600();
   input += synapse0x3a5e640();
   input += synapse0x3a5e0d0();
   input += synapse0x3a5e110();
   input += synapse0x3a5e790();
   input += synapse0x3a5e7d0();
   input += synapse0x3a5e810();
   input += synapse0x3a5e850();
   input += synapse0x3a5e890();
   input += synapse0x3a5e8d0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a5df40() {
   double input = input0x3a5df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a70580() {
   double input = 1.84512;
   input += synapse0x3a707a0();
   input += synapse0x3a707e0();
   input += synapse0x3a70820();
   input += synapse0x3a70860();
   input += synapse0x3a708a0();
   input += synapse0x3a708e0();
   input += synapse0x3a70920();
   input += synapse0x3a70960();
   input += synapse0x3a709a0();
   input += synapse0x3a709e0();
   input += synapse0x3a70a20();
   input += synapse0x3a70a60();
   input += synapse0x3a70aa0();
   input += synapse0x3a70ae0();
   input += synapse0x3a70b20();
   input += synapse0x3a70b60();
   input += synapse0x3a5e910();
   input += synapse0x3a5e950();
   input += synapse0x3a70cb0();
   input += synapse0x3a70cf0();
   input += synapse0x3a70d30();
   input += synapse0x3a70d70();
   input += synapse0x3a70db0();
   input += synapse0x3a70df0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a70580() {
   double input = input0x3a70580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a70e30() {
   double input = -0.440511;
   input += synapse0x3a71170();
   input += synapse0x3a711b0();
   input += synapse0x3a711f0();
   input += synapse0x3a71230();
   input += synapse0x3a71270();
   input += synapse0x3a712b0();
   input += synapse0x3a712f0();
   input += synapse0x3a71330();
   input += synapse0x3a71370();
   input += synapse0x3a713b0();
   input += synapse0x3a713f0();
   input += synapse0x3a71430();
   input += synapse0x3a71470();
   input += synapse0x3a714b0();
   input += synapse0x3a714f0();
   input += synapse0x3a71530();
   input += synapse0x3a70fc0();
   input += synapse0x3a71000();
   input += synapse0x3a71680();
   input += synapse0x3a716c0();
   input += synapse0x3a71700();
   input += synapse0x3a71740();
   input += synapse0x3a71780();
   input += synapse0x3a717c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a70e30() {
   double input = input0x3a70e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a71800() {
   double input = -0.211691;
   input += synapse0x3a71b40();
   input += synapse0x3a71b80();
   input += synapse0x3a71bc0();
   input += synapse0x3a71c00();
   input += synapse0x3a71c40();
   input += synapse0x3a71c80();
   input += synapse0x3a71cc0();
   input += synapse0x3a71d00();
   input += synapse0x3a71d40();
   input += synapse0x3a71d80();
   input += synapse0x3a71dc0();
   input += synapse0x3a71e00();
   input += synapse0x3a71e40();
   input += synapse0x3a71e80();
   input += synapse0x3a71ec0();
   input += synapse0x3a71f00();
   input += synapse0x3a71990();
   input += synapse0x3a719d0();
   input += synapse0x3a72050();
   input += synapse0x3a72090();
   input += synapse0x3a720d0();
   input += synapse0x3a72110();
   input += synapse0x3a72150();
   input += synapse0x3a72190();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a71800() {
   double input = input0x3a71800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a721d0() {
   double input = 1.61303;
   input += synapse0x3a72510();
   input += synapse0x3a72550();
   input += synapse0x3a72590();
   input += synapse0x3a725d0();
   input += synapse0x3a72610();
   input += synapse0x3a72650();
   input += synapse0x3a72690();
   input += synapse0x3a726d0();
   input += synapse0x3a72710();
   input += synapse0x3a72750();
   input += synapse0x3a72790();
   input += synapse0x3a727d0();
   input += synapse0x3a72810();
   input += synapse0x3a72850();
   input += synapse0x3a72890();
   input += synapse0x3a728d0();
   input += synapse0x3a72360();
   input += synapse0x3a723a0();
   input += synapse0x3a72a20();
   input += synapse0x3a72a60();
   input += synapse0x3a72aa0();
   input += synapse0x3a72ae0();
   input += synapse0x3a72b20();
   input += synapse0x3a72b60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a721d0() {
   double input = input0x3a721d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a793d0() {
   double input = -0.557836;
   input += synapse0x3812980();
   input += synapse0x38129c0();
   input += synapse0x3a4f510();
   input += synapse0x3a4f550();
   input += synapse0x3a50fe0();
   input += synapse0x3a51020();
   input += synapse0x3a51db0();
   input += synapse0x3a51df0();
   input += synapse0x3a52780();
   input += synapse0x3a527c0();
   input += synapse0x3a53150();
   input += synapse0x3a53190();
   input += synapse0x3a53c30();
   input += synapse0x3a53c70();
   input += synapse0x3a54600();
   input += synapse0x3a54640();
   input += synapse0x3a516e0();
   input += synapse0x3a51720();
   input += synapse0x3a561b0();
   input += synapse0x3a561f0();
   input += synapse0x3a56b80();
   input += synapse0x3a56bc0();
   input += synapse0x3a57550();
   input += synapse0x3a57590();
   input += synapse0x3a57f20();
   input += synapse0x3a57f60();
   input += synapse0x3a4afb0();
   input += synapse0x3a4aff0();
   input += synapse0x3a5a010();
   input += synapse0x3a5a050();
   input += synapse0x3a5a9e0();
   input += synapse0x3a5aa20();
   input += synapse0x3a5b3b0();
   input += synapse0x3a5b3f0();
   input += synapse0x3a5bd80();
   input += synapse0x3a5bdc0();
   input += synapse0x3a5c750();
   input += synapse0x3a5c790();
   input += synapse0x3a552a0();
   input += synapse0x3a552e0();
   input += synapse0x3a5eb50();
   input += synapse0x3a5eb90();
   input += synapse0x3a5f4e0();
   input += synapse0x3a5f520();
   input += synapse0x3a5feb0();
   input += synapse0x3a5fef0();
   input += synapse0x3a60880();
   input += synapse0x3a608c0();
   input += synapse0x3a61250();
   input += synapse0x3a61290();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a793d0() {
   double input = input0x3a793d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a79770() {
   double input = -0.221778;
   input += synapse0x3a63990();
   input += synapse0x3a639d0();
   input += synapse0x3a58f50();
   input += synapse0x3a58f90();
   input += synapse0x3a66570();
   input += synapse0x3a665b0();
   input += synapse0x3a66f40();
   input += synapse0x3a66f80();
   input += synapse0x3a67910();
   input += synapse0x3a67950();
   input += synapse0x3a682e0();
   input += synapse0x3a68320();
   input += synapse0x3a68cb0();
   input += synapse0x3a68cf0();
   input += synapse0x3a69680();
   input += synapse0x3a696c0();
   input += synapse0x3a6a050();
   input += synapse0x3a6a090();
   input += synapse0x3a6aa20();
   input += synapse0x3a6aa60();
   input += synapse0x3a6b600();
   input += synapse0x3a6b640();
   input += synapse0x3a6bfd0();
   input += synapse0x3a6c010();
   input += synapse0x3a5ce50();
   input += synapse0x3a5ce90();
   input += synapse0x3a5d820();
   input += synapse0x3a5d860();
   input += synapse0x3a5e1f0();
   input += synapse0x3a5e230();
   input += synapse0x3a70710();
   input += synapse0x3a70750();
   input += synapse0x3a710e0();
   input += synapse0x3a71120();
   input += synapse0x3a71ab0();
   input += synapse0x3a71af0();
   input += synapse0x3a72480();
   input += synapse0x3a724c0();
   input += synapse0x3a4d410();
   input += synapse0x3a4d450();
   input += synapse0x3a61c20();
   input += synapse0x3a61c60();
   input += synapse0x3a72ba0();
   input += synapse0x3a72be0();
   input += synapse0x3a72c20();
   input += synapse0x3a72c60();
   input += synapse0x3a79b10();
   input += synapse0x3a79b50();
   input += synapse0x3a79b90();
   input += synapse0x3a79bd0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a79770() {
   double input = input0x3a79770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a79c10() {
   double input = 0.564477;
   input += synapse0x3a79f50();
   input += synapse0x3a79f90();
   input += synapse0x3a79fd0();
   input += synapse0x3a7a010();
   input += synapse0x3a7a050();
   input += synapse0x3a7a090();
   input += synapse0x3a7a0d0();
   input += synapse0x3a7a110();
   input += synapse0x3a7a150();
   input += synapse0x3a7a190();
   input += synapse0x3a7a1d0();
   input += synapse0x3a7a210();
   input += synapse0x3a7a250();
   input += synapse0x3a7a290();
   input += synapse0x3a7a2d0();
   input += synapse0x3a7a310();
   input += synapse0x3a79da0();
   input += synapse0x3a79de0();
   input += synapse0x3a7a460();
   input += synapse0x3a7a4a0();
   input += synapse0x3a7a4e0();
   input += synapse0x3a7a520();
   input += synapse0x3a7a560();
   input += synapse0x3a7a5a0();
   input += synapse0x3a7a5e0();
   input += synapse0x3a7a620();
   input += synapse0x3a7a660();
   input += synapse0x3a7a6a0();
   input += synapse0x3a7a6e0();
   input += synapse0x3a7a720();
   input += synapse0x3a7a760();
   input += synapse0x3a7a7a0();
   input += synapse0x3a7a350();
   input += synapse0x3a7a390();
   input += synapse0x3a7a3d0();
   input += synapse0x3a7a410();
   input += synapse0x3a7a9f0();
   input += synapse0x3a7aa30();
   input += synapse0x3a7aa70();
   input += synapse0x3a7aab0();
   input += synapse0x3a7aaf0();
   input += synapse0x3a7ab30();
   input += synapse0x3a7ab70();
   input += synapse0x3a7abb0();
   input += synapse0x3a7abf0();
   input += synapse0x3a7ac30();
   input += synapse0x3a7ac70();
   input += synapse0x3a7acb0();
   input += synapse0x3a7acf0();
   input += synapse0x3a7ad30();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a79c10() {
   double input = input0x3a79c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a7ad70() {
   double input = -0.123416;
   input += synapse0x3a7b0b0();
   input += synapse0x3a7b0f0();
   input += synapse0x3a7b130();
   input += synapse0x3a7b170();
   input += synapse0x3a7b1b0();
   input += synapse0x3a7b1f0();
   input += synapse0x3a7b230();
   input += synapse0x3a7b270();
   input += synapse0x3a7b2b0();
   input += synapse0x3a7b2f0();
   input += synapse0x3a7b330();
   input += synapse0x3a7b370();
   input += synapse0x3a7b3b0();
   input += synapse0x3a7b3f0();
   input += synapse0x3a7b430();
   input += synapse0x3a7b470();
   input += synapse0x3a7af00();
   input += synapse0x3a7af40();
   input += synapse0x3a7b5c0();
   input += synapse0x3a7b600();
   input += synapse0x3a7b640();
   input += synapse0x3a7b680();
   input += synapse0x3a7b6c0();
   input += synapse0x3a7b700();
   input += synapse0x3a7b740();
   input += synapse0x3a7b780();
   input += synapse0x3a7b7c0();
   input += synapse0x3a7b800();
   input += synapse0x3a7b840();
   input += synapse0x3a7b880();
   input += synapse0x3a7b8c0();
   input += synapse0x3a7b900();
   input += synapse0x3a7b4b0();
   input += synapse0x3a7b4f0();
   input += synapse0x3a7b530();
   input += synapse0x3a7b570();
   input += synapse0x3a7bb50();
   input += synapse0x3a7bb90();
   input += synapse0x3a7bbd0();
   input += synapse0x3a7bc10();
   input += synapse0x3a7bc50();
   input += synapse0x3a7bc90();
   input += synapse0x3a7bcd0();
   input += synapse0x3a7bd10();
   input += synapse0x3a7bd50();
   input += synapse0x3a7bd90();
   input += synapse0x3a7bdd0();
   input += synapse0x3a7be10();
   input += synapse0x3a7be50();
   input += synapse0x3a7be90();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a7ad70() {
   double input = input0x3a7ad70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a7bed0() {
   double input = -0.222135;
   input += synapse0x3a7c210();
   input += synapse0x3a7c250();
   input += synapse0x3a7c290();
   input += synapse0x3a7c2d0();
   input += synapse0x3a7c310();
   input += synapse0x3a7c350();
   input += synapse0x3a7c390();
   input += synapse0x3a7c3d0();
   input += synapse0x3a7c410();
   input += synapse0x3a7c450();
   input += synapse0x3a7c490();
   input += synapse0x3a7c4d0();
   input += synapse0x3a7c510();
   input += synapse0x3a7c550();
   input += synapse0x3a7c590();
   input += synapse0x3a7c5d0();
   input += synapse0x3a7c060();
   input += synapse0x3a7c0a0();
   input += synapse0x3a7c720();
   input += synapse0x3a7c760();
   input += synapse0x3a7c7a0();
   input += synapse0x3a7c7e0();
   input += synapse0x3a7c820();
   input += synapse0x3a7c860();
   input += synapse0x3a7c8a0();
   input += synapse0x3a7c8e0();
   input += synapse0x3a7c920();
   input += synapse0x3a7c960();
   input += synapse0x3a7c9a0();
   input += synapse0x3a7c9e0();
   input += synapse0x3a7ca20();
   input += synapse0x3a7ca60();
   input += synapse0x3a7c610();
   input += synapse0x3a7c650();
   input += synapse0x3a7c690();
   input += synapse0x3a7c6d0();
   input += synapse0x3a7ccb0();
   input += synapse0x3a7ccf0();
   input += synapse0x3a7cd30();
   input += synapse0x3a7cd70();
   input += synapse0x3a7cdb0();
   input += synapse0x3a7cdf0();
   input += synapse0x3a7ce30();
   input += synapse0x3a7ce70();
   input += synapse0x3a7ceb0();
   input += synapse0x3a7cef0();
   input += synapse0x3a7cf30();
   input += synapse0x3a7cf70();
   input += synapse0x3a7cfb0();
   input += synapse0x3a7cff0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a7bed0() {
   double input = input0x3a7bed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x3a7d030() {
   double input = 4.97804;
   input += synapse0x3a7d250();
   input += synapse0x3a7d290();
   input += synapse0x3a7d2d0();
   input += synapse0x3a7d310();
   input += synapse0x3a7d350();
   return input;
}

double NNfunction_ss_uLuR::neuron0x3a7d030() {
   double input = input0x3a7d030();
   return (input * 1)+0;
}

double NNfunction_ss_uLuR::synapse0x3a4d4a0() {
   return (neuron0x3a480a0()*0.0095035);
}

double NNfunction_ss_uLuR::synapse0x3a4d4e0() {
   return (neuron0x3a48350()*-0.00817079);
}

double NNfunction_ss_uLuR::synapse0x3a4d520() {
   return (neuron0x3a48690()*-0.0567486);
}

double NNfunction_ss_uLuR::synapse0x3a4d560() {
   return (neuron0x3a489d0()*-4.71902);
}

double NNfunction_ss_uLuR::synapse0x3a4d5a0() {
   return (neuron0x3a48d10()*-0.00802718);
}

double NNfunction_ss_uLuR::synapse0x3a4d5e0() {
   return (neuron0x3a49050()*-0.00110195);
}

double NNfunction_ss_uLuR::synapse0x3a4d620() {
   return (neuron0x3a49390()*-0.0142376);
}

double NNfunction_ss_uLuR::synapse0x3a4d660() {
   return (neuron0x3a496d0()*0.0125572);
}

double NNfunction_ss_uLuR::synapse0x3a4d6a0() {
   return (neuron0x3a49a10()*0.00859697);
}

double NNfunction_ss_uLuR::synapse0x3a4d6e0() {
   return (neuron0x3a49d50()*0.00834991);
}

double NNfunction_ss_uLuR::synapse0x3a4d720() {
   return (neuron0x3a4a090()*-0.0270842);
}

double NNfunction_ss_uLuR::synapse0x3a4d760() {
   return (neuron0x3a4a3d0()*0.258563);
}

double NNfunction_ss_uLuR::synapse0x3a4d7a0() {
   return (neuron0x3a4a710()*0.0345543);
}

double NNfunction_ss_uLuR::synapse0x3a4d7e0() {
   return (neuron0x3a4aa50()*0.0284058);
}

double NNfunction_ss_uLuR::synapse0x3a4d820() {
   return (neuron0x3a4ad90()*0.199929);
}

double NNfunction_ss_uLuR::synapse0x3a4d860() {
   return (neuron0x3a4b0d0()*0.00611482);
}

double NNfunction_ss_uLuR::synapse0x3a4d2f0() {
   return (neuron0x3a4b410()*-0.0102499);
}

double NNfunction_ss_uLuR::synapse0x3a4d330() {
   return (neuron0x3a4b970()*0.0447392);
}

double NNfunction_ss_uLuR::synapse0x38042b0() {
   return (neuron0x3a4bcb0()*0.0402987);
}

double NNfunction_ss_uLuR::synapse0x38042f0() {
   return (neuron0x3a4bff0()*-0.000806297);
}

double NNfunction_ss_uLuR::synapse0x3a4d8a0() {
   return (neuron0x3a4c330()*-0.0597184);
}

double NNfunction_ss_uLuR::synapse0x3a4d8e0() {
   return (neuron0x3a4c670()*0.0158694);
}

double NNfunction_ss_uLuR::synapse0x3a4d920() {
   return (neuron0x3a4c9b0()*-0.00207408);
}

double NNfunction_ss_uLuR::synapse0x3a4d960() {
   return (neuron0x3a4ccf0()*-0.0239665);
}

double NNfunction_ss_uLuR::synapse0x3a4dce0() {
   return (neuron0x3a480a0()*0.0244122);
}

double NNfunction_ss_uLuR::synapse0x3a4dd20() {
   return (neuron0x3a48350()*-0.078813);
}

double NNfunction_ss_uLuR::synapse0x3a4dd60() {
   return (neuron0x3a48690()*-0.10796);
}

double NNfunction_ss_uLuR::synapse0x3a4dda0() {
   return (neuron0x3a489d0()*-0.602295);
}

double NNfunction_ss_uLuR::synapse0x3a4dde0() {
   return (neuron0x3a48d10()*0.165266);
}

double NNfunction_ss_uLuR::synapse0x3a4de20() {
   return (neuron0x3a49050()*-0.291419);
}

double NNfunction_ss_uLuR::synapse0x3a4de60() {
   return (neuron0x3a49390()*-0.247471);
}

double NNfunction_ss_uLuR::synapse0x3a4dea0() {
   return (neuron0x3a496d0()*-0.0825887);
}

double NNfunction_ss_uLuR::synapse0x3a4dee0() {
   return (neuron0x3a49a10()*-0.000823662);
}

double NNfunction_ss_uLuR::synapse0x3804100() {
   return (neuron0x3a49d50()*-0.0331502);
}

double NNfunction_ss_uLuR::synapse0x3804140() {
   return (neuron0x3a4a090()*0.110298);
}

double NNfunction_ss_uLuR::synapse0x3804180() {
   return (neuron0x3a4a3d0()*1.6562);
}

double NNfunction_ss_uLuR::synapse0x38041c0() {
   return (neuron0x3a4a710()*-1.00599);
}

double NNfunction_ss_uLuR::synapse0x3a4e130() {
   return (neuron0x3a4aa50()*0.193002);
}

double NNfunction_ss_uLuR::synapse0x3a4e170() {
   return (neuron0x3a4ad90()*1.32357);
}

double NNfunction_ss_uLuR::synapse0x3a4e1b0() {
   return (neuron0x3a4b0d0()*-0.245688);
}

double NNfunction_ss_uLuR::synapse0x3a4db30() {
   return (neuron0x3a4b410()*0.0826146);
}

double NNfunction_ss_uLuR::synapse0x3a4db70() {
   return (neuron0x3a4b970()*-0.45492);
}

double NNfunction_ss_uLuR::synapse0x3a4e300() {
   return (neuron0x3a4bcb0()*-0.315512);
}

double NNfunction_ss_uLuR::synapse0x3a4e340() {
   return (neuron0x3a4bff0()*0.17632);
}

double NNfunction_ss_uLuR::synapse0x3a4e380() {
   return (neuron0x3a4c330()*0.00917377);
}

double NNfunction_ss_uLuR::synapse0x3a4e3c0() {
   return (neuron0x3a4c670()*-0.272868);
}

double NNfunction_ss_uLuR::synapse0x3a4e400() {
   return (neuron0x3a4c9b0()*0.177464);
}

double NNfunction_ss_uLuR::synapse0x3a4e440() {
   return (neuron0x3a4ccf0()*0.0943623);
}

double NNfunction_ss_uLuR::synapse0x3a4e7c0() {
   return (neuron0x3a480a0()*-0.0143578);
}

double NNfunction_ss_uLuR::synapse0x3a4e800() {
   return (neuron0x3a48350()*-0.631416);
}

double NNfunction_ss_uLuR::synapse0x3a4e840() {
   return (neuron0x3a48690()*0.293862);
}

double NNfunction_ss_uLuR::synapse0x3a4e880() {
   return (neuron0x3a489d0()*0.39575);
}

double NNfunction_ss_uLuR::synapse0x3a4e8c0() {
   return (neuron0x3a48d10()*0.0140575);
}

double NNfunction_ss_uLuR::synapse0x3a4e900() {
   return (neuron0x3a49050()*0.114601);
}

double NNfunction_ss_uLuR::synapse0x3a4e940() {
   return (neuron0x3a49390()*-0.116251);
}

double NNfunction_ss_uLuR::synapse0x3a4e980() {
   return (neuron0x3a496d0()*-0.00879753);
}

double NNfunction_ss_uLuR::synapse0x3a4e9c0() {
   return (neuron0x3a49a10()*0.921127);
}

double NNfunction_ss_uLuR::synapse0x3a4ea00() {
   return (neuron0x3a49d50()*0.817729);
}

double NNfunction_ss_uLuR::synapse0x3a4ea40() {
   return (neuron0x3a4a090()*0.417308);
}

double NNfunction_ss_uLuR::synapse0x3a4ea80() {
   return (neuron0x3a4a3d0()*-1.21803);
}

double NNfunction_ss_uLuR::synapse0x3a4eac0() {
   return (neuron0x3a4a710()*-0.547537);
}

double NNfunction_ss_uLuR::synapse0x3a4eb00() {
   return (neuron0x3a4aa50()*0.0499472);
}

double NNfunction_ss_uLuR::synapse0x3a4eb40() {
   return (neuron0x3a4ad90()*-1.41656);
}

double NNfunction_ss_uLuR::synapse0x3a4eb80() {
   return (neuron0x3a4b0d0()*0.119347);
}

double NNfunction_ss_uLuR::synapse0x3a4e610() {
   return (neuron0x3a4b410()*0.041818);
}

double NNfunction_ss_uLuR::synapse0x3a4e650() {
   return (neuron0x3a4b970()*-0.35879);
}

double NNfunction_ss_uLuR::synapse0x3804960() {
   return (neuron0x3a4bcb0()*-0.674601);
}

double NNfunction_ss_uLuR::synapse0x3812190() {
   return (neuron0x3a4bff0()*0.656426);
}

double NNfunction_ss_uLuR::synapse0x38121d0() {
   return (neuron0x3a4c330()*-0.518625);
}

double NNfunction_ss_uLuR::synapse0x3a50ab0() {
   return (neuron0x3a4c670()*0.0634641);
}

double NNfunction_ss_uLuR::synapse0x3a50af0() {
   return (neuron0x3a4c9b0()*0.135185);
}

double NNfunction_ss_uLuR::synapse0x3a47de0() {
   return (neuron0x3a4ccf0()*-0.0251046);
}

double NNfunction_ss_uLuR::synapse0x3a47eb0() {
   return (neuron0x3a480a0()*-0.235971);
}

double NNfunction_ss_uLuR::synapse0x3812a10() {
   return (neuron0x3a48350()*0.109383);
}

double NNfunction_ss_uLuR::synapse0x3a4e0b0() {
   return (neuron0x3a48690()*-0.889365);
}

double NNfunction_ss_uLuR::synapse0x3a4e0f0() {
   return (neuron0x3a489d0()*0.410759);
}

double NNfunction_ss_uLuR::synapse0x3a4ecd0() {
   return (neuron0x3a48d10()*-0.812318);
}

double NNfunction_ss_uLuR::synapse0x3a4ed10() {
   return (neuron0x3a49050()*-0.795732);
}

double NNfunction_ss_uLuR::synapse0x3a4ed50() {
   return (neuron0x3a49390()*-0.601507);
}

double NNfunction_ss_uLuR::synapse0x3a4ed90() {
   return (neuron0x3a496d0()*0.138907);
}

double NNfunction_ss_uLuR::synapse0x3a4edd0() {
   return (neuron0x3a49a10()*0.0117101);
}

double NNfunction_ss_uLuR::synapse0x3a4ee10() {
   return (neuron0x3a49d50()*0.0764802);
}

double NNfunction_ss_uLuR::synapse0x3a4ee50() {
   return (neuron0x3a4a090()*-0.339859);
}

double NNfunction_ss_uLuR::synapse0x3a4ee90() {
   return (neuron0x3a4a3d0()*0.109051);
}

double NNfunction_ss_uLuR::synapse0x3a4eed0() {
   return (neuron0x3a4a710()*0.423991);
}

double NNfunction_ss_uLuR::synapse0x3a4ef10() {
   return (neuron0x3a4aa50()*-0.383699);
}

double NNfunction_ss_uLuR::synapse0x3a4ef50() {
   return (neuron0x3a4ad90()*1.20062);
}

double NNfunction_ss_uLuR::synapse0x3a4ef90() {
   return (neuron0x3a4b0d0()*-0.45688);
}

double NNfunction_ss_uLuR::synapse0x3a47e20() {
   return (neuron0x3a4b410()*0.270955);
}

double NNfunction_ss_uLuR::synapse0x3a47e60() {
   return (neuron0x3a4b970()*-0.189304);
}

double NNfunction_ss_uLuR::synapse0x3a4f0e0() {
   return (neuron0x3a4bcb0()*0.368618);
}

double NNfunction_ss_uLuR::synapse0x3a4f120() {
   return (neuron0x3a4bff0()*0.692691);
}

double NNfunction_ss_uLuR::synapse0x3a4f160() {
   return (neuron0x3a4c330()*0.105977);
}

double NNfunction_ss_uLuR::synapse0x3a4f1a0() {
   return (neuron0x3a4c670()*-0.14027);
}

double NNfunction_ss_uLuR::synapse0x3a4f1e0() {
   return (neuron0x3a4c9b0()*-0.188781);
}

double NNfunction_ss_uLuR::synapse0x3a4f220() {
   return (neuron0x3a4ccf0()*0.166868);
}

double NNfunction_ss_uLuR::synapse0x3a4f5a0() {
   return (neuron0x3a480a0()*-0.2366);
}

double NNfunction_ss_uLuR::synapse0x3a4f5e0() {
   return (neuron0x3a48350()*-0.752096);
}

double NNfunction_ss_uLuR::synapse0x3a4f620() {
   return (neuron0x3a48690()*-0.710948);
}

double NNfunction_ss_uLuR::synapse0x3a4f660() {
   return (neuron0x3a489d0()*-0.395402);
}

double NNfunction_ss_uLuR::synapse0x3a4f6a0() {
   return (neuron0x3a48d10()*-0.0472388);
}

double NNfunction_ss_uLuR::synapse0x3a4f6e0() {
   return (neuron0x3a49050()*0.254443);
}

double NNfunction_ss_uLuR::synapse0x3a4f720() {
   return (neuron0x3a49390()*0.456433);
}

double NNfunction_ss_uLuR::synapse0x3a4f760() {
   return (neuron0x3a496d0()*-0.805254);
}

double NNfunction_ss_uLuR::synapse0x3a4f7a0() {
   return (neuron0x3a49a10()*-0.653229);
}

double NNfunction_ss_uLuR::synapse0x3a4f7e0() {
   return (neuron0x3a49d50()*0.354392);
}

double NNfunction_ss_uLuR::synapse0x3a4f820() {
   return (neuron0x3a4a090()*-0.080284);
}

double NNfunction_ss_uLuR::synapse0x3a4f860() {
   return (neuron0x3a4a3d0()*-0.465466);
}

double NNfunction_ss_uLuR::synapse0x3a4f8a0() {
   return (neuron0x3a4a710()*0.556619);
}

double NNfunction_ss_uLuR::synapse0x3a4f8e0() {
   return (neuron0x3a4aa50()*0.374614);
}

double NNfunction_ss_uLuR::synapse0x3a4f920() {
   return (neuron0x3a4ad90()*-0.0960286);
}

double NNfunction_ss_uLuR::synapse0x3a4f960() {
   return (neuron0x3a4b0d0()*0.612883);
}

double NNfunction_ss_uLuR::synapse0x3a4fab0() {
   return (neuron0x3a4b410()*-0.0307281);
}

double NNfunction_ss_uLuR::synapse0x3a4f3f0() {
   return (neuron0x3a4b970()*-0.233736);
}

double NNfunction_ss_uLuR::synapse0x3a4f430() {
   return (neuron0x3a4bcb0()*0.131681);
}

double NNfunction_ss_uLuR::synapse0x3a50bf0() {
   return (neuron0x3a4bff0()*-0.00784278);
}

double NNfunction_ss_uLuR::synapse0x3a50c30() {
   return (neuron0x3a4c330()*0.346841);
}

double NNfunction_ss_uLuR::synapse0x3a50c70() {
   return (neuron0x3a4c670()*-0.484946);
}

double NNfunction_ss_uLuR::synapse0x3a50cb0() {
   return (neuron0x3a4c9b0()*-0.200733);
}

double NNfunction_ss_uLuR::synapse0x3a50cf0() {
   return (neuron0x3a4ccf0()*0.161229);
}

double NNfunction_ss_uLuR::synapse0x3a51070() {
   return (neuron0x3a480a0()*-0.00709919);
}

double NNfunction_ss_uLuR::synapse0x3a510b0() {
   return (neuron0x3a48350()*0.626059);
}

double NNfunction_ss_uLuR::synapse0x3a510f0() {
   return (neuron0x3a48690()*-0.646969);
}

double NNfunction_ss_uLuR::synapse0x3a51130() {
   return (neuron0x3a489d0()*0.128495);
}

double NNfunction_ss_uLuR::synapse0x3a51170() {
   return (neuron0x3a48d10()*0.72674);
}

double NNfunction_ss_uLuR::synapse0x3a511b0() {
   return (neuron0x3a49050()*-0.133666);
}

double NNfunction_ss_uLuR::synapse0x3a511f0() {
   return (neuron0x3a49390()*0.706456);
}

double NNfunction_ss_uLuR::synapse0x3a51230() {
   return (neuron0x3a496d0()*-0.170012);
}

double NNfunction_ss_uLuR::synapse0x3a51270() {
   return (neuron0x3a49a10()*0.644907);
}

double NNfunction_ss_uLuR::synapse0x38124e0() {
   return (neuron0x3a49d50()*-0.196875);
}

double NNfunction_ss_uLuR::synapse0x3812520() {
   return (neuron0x3a4a090()*-0.991211);
}

double NNfunction_ss_uLuR::synapse0x3812560() {
   return (neuron0x3a4a3d0()*0.968185);
}

double NNfunction_ss_uLuR::synapse0x38125a0() {
   return (neuron0x3a4a710()*0.109545);
}

double NNfunction_ss_uLuR::synapse0x38125e0() {
   return (neuron0x3a4aa50()*-0.446127);
}

double NNfunction_ss_uLuR::synapse0x3812620() {
   return (neuron0x3a4ad90()*-1.2668);
}

double NNfunction_ss_uLuR::synapse0x3812660() {
   return (neuron0x3a4b0d0()*0.144425);
}

double NNfunction_ss_uLuR::synapse0x3a50ec0() {
   return (neuron0x3a4b410()*0.375872);
}

double NNfunction_ss_uLuR::synapse0x3a50f00() {
   return (neuron0x3a4b970()*-0.443184);
}

double NNfunction_ss_uLuR::synapse0x38127b0() {
   return (neuron0x3a4bcb0()*-0.268983);
}

double NNfunction_ss_uLuR::synapse0x38127f0() {
   return (neuron0x3a4bff0()*0.36032);
}

double NNfunction_ss_uLuR::synapse0x3812830() {
   return (neuron0x3a4c330()*-0.65798);
}

double NNfunction_ss_uLuR::synapse0x3812870() {
   return (neuron0x3a4c670()*0.336827);
}

double NNfunction_ss_uLuR::synapse0x38128b0() {
   return (neuron0x3a4c9b0()*0.123664);
}

double NNfunction_ss_uLuR::synapse0x3a51ac0() {
   return (neuron0x3a4ccf0()*0.131672);
}

double NNfunction_ss_uLuR::synapse0x3a51e40() {
   return (neuron0x3a480a0()*-0.013831);
}

double NNfunction_ss_uLuR::synapse0x3a51e80() {
   return (neuron0x3a48350()*0.0793913);
}

double NNfunction_ss_uLuR::synapse0x3a51ec0() {
   return (neuron0x3a48690()*-0.0243768);
}

double NNfunction_ss_uLuR::synapse0x3a51f00() {
   return (neuron0x3a489d0()*-0.33006);
}

double NNfunction_ss_uLuR::synapse0x3a51f40() {
   return (neuron0x3a48d10()*0.122576);
}

double NNfunction_ss_uLuR::synapse0x3a51f80() {
   return (neuron0x3a49050()*0.14652);
}

double NNfunction_ss_uLuR::synapse0x3a51fc0() {
   return (neuron0x3a49390()*-0.0244405);
}

double NNfunction_ss_uLuR::synapse0x3a52000() {
   return (neuron0x3a496d0()*0.191331);
}

double NNfunction_ss_uLuR::synapse0x3a52040() {
   return (neuron0x3a49a10()*0.000271265);
}

double NNfunction_ss_uLuR::synapse0x3a52080() {
   return (neuron0x3a49d50()*0.148643);
}

double NNfunction_ss_uLuR::synapse0x3a520c0() {
   return (neuron0x3a4a090()*-0.204129);
}

double NNfunction_ss_uLuR::synapse0x3a52100() {
   return (neuron0x3a4a3d0()*-0.953532);
}

double NNfunction_ss_uLuR::synapse0x3a52140() {
   return (neuron0x3a4a710()*-0.406214);
}

double NNfunction_ss_uLuR::synapse0x3a52180() {
   return (neuron0x3a4aa50()*-0.101004);
}

double NNfunction_ss_uLuR::synapse0x3a521c0() {
   return (neuron0x3a4ad90()*-0.0875621);
}

double NNfunction_ss_uLuR::synapse0x3a52200() {
   return (neuron0x3a4b0d0()*-0.16476);
}

double NNfunction_ss_uLuR::synapse0x3a51c90() {
   return (neuron0x3a4b410()*0.255173);
}

double NNfunction_ss_uLuR::synapse0x3a51cd0() {
   return (neuron0x3a4b970()*-0.294573);
}

double NNfunction_ss_uLuR::synapse0x3a52350() {
   return (neuron0x3a4bcb0()*-0.258573);
}

double NNfunction_ss_uLuR::synapse0x3a52390() {
   return (neuron0x3a4bff0()*-0.186889);
}

double NNfunction_ss_uLuR::synapse0x3a523d0() {
   return (neuron0x3a4c330()*0.101171);
}

double NNfunction_ss_uLuR::synapse0x3a52410() {
   return (neuron0x3a4c670()*0.077665);
}

double NNfunction_ss_uLuR::synapse0x3a52450() {
   return (neuron0x3a4c9b0()*-0.0599299);
}

double NNfunction_ss_uLuR::synapse0x3a52490() {
   return (neuron0x3a4ccf0()*-0.0914225);
}

double NNfunction_ss_uLuR::synapse0x3a52810() {
   return (neuron0x3a480a0()*-0.00239288);
}

double NNfunction_ss_uLuR::synapse0x3a52850() {
   return (neuron0x3a48350()*-0.0313605);
}

double NNfunction_ss_uLuR::synapse0x3a52890() {
   return (neuron0x3a48690()*-0.721048);
}

double NNfunction_ss_uLuR::synapse0x3a528d0() {
   return (neuron0x3a489d0()*0.0661291);
}

double NNfunction_ss_uLuR::synapse0x3a52910() {
   return (neuron0x3a48d10()*0.0137998);
}

double NNfunction_ss_uLuR::synapse0x3a52950() {
   return (neuron0x3a49050()*-0.0224975);
}

double NNfunction_ss_uLuR::synapse0x3a52990() {
   return (neuron0x3a49390()*-0.0787801);
}

double NNfunction_ss_uLuR::synapse0x3a529d0() {
   return (neuron0x3a496d0()*-0.0469015);
}

double NNfunction_ss_uLuR::synapse0x3a52a10() {
   return (neuron0x3a49a10()*-0.00329911);
}

double NNfunction_ss_uLuR::synapse0x3a52a50() {
   return (neuron0x3a49d50()*0.0299266);
}

double NNfunction_ss_uLuR::synapse0x3a52a90() {
   return (neuron0x3a4a090()*-0.0150761);
}

double NNfunction_ss_uLuR::synapse0x3a52ad0() {
   return (neuron0x3a4a3d0()*0.386086);
}

double NNfunction_ss_uLuR::synapse0x3a52b10() {
   return (neuron0x3a4a710()*0.0228795);
}

double NNfunction_ss_uLuR::synapse0x3a52b50() {
   return (neuron0x3a4aa50()*-0.0127721);
}

double NNfunction_ss_uLuR::synapse0x3a52b90() {
   return (neuron0x3a4ad90()*-0.133618);
}

double NNfunction_ss_uLuR::synapse0x3a52bd0() {
   return (neuron0x3a4b0d0()*-0.0101111);
}

double NNfunction_ss_uLuR::synapse0x3a52660() {
   return (neuron0x3a4b410()*-0.00141154);
}

double NNfunction_ss_uLuR::synapse0x3a526a0() {
   return (neuron0x3a4b970()*0.0721083);
}

double NNfunction_ss_uLuR::synapse0x3a52d20() {
   return (neuron0x3a4bcb0()*0.045826);
}

double NNfunction_ss_uLuR::synapse0x3a52d60() {
   return (neuron0x3a4bff0()*0.0206765);
}

double NNfunction_ss_uLuR::synapse0x3a52da0() {
   return (neuron0x3a4c330()*0.00647389);
}

double NNfunction_ss_uLuR::synapse0x3a52de0() {
   return (neuron0x3a4c670()*-0.0723144);
}

double NNfunction_ss_uLuR::synapse0x3a52e20() {
   return (neuron0x3a4c9b0()*-0.0326364);
}

double NNfunction_ss_uLuR::synapse0x3a52e60() {
   return (neuron0x3a4ccf0()*0.0111799);
}

double NNfunction_ss_uLuR::synapse0x3a4b860() {
   return (neuron0x3a480a0()*-0.060013);
}

double NNfunction_ss_uLuR::synapse0x3a4b8a0() {
   return (neuron0x3a48350()*-0.223846);
}

double NNfunction_ss_uLuR::synapse0x3a4b8e0() {
   return (neuron0x3a48690()*-0.123694);
}

double NNfunction_ss_uLuR::synapse0x3a4b920() {
   return (neuron0x3a489d0()*0.539221);
}

double NNfunction_ss_uLuR::synapse0x3a533f0() {
   return (neuron0x3a48d10()*0.0328427);
}

double NNfunction_ss_uLuR::synapse0x3a53430() {
   return (neuron0x3a49050()*-0.263815);
}

double NNfunction_ss_uLuR::synapse0x3a53470() {
   return (neuron0x3a49390()*-0.30399);
}

double NNfunction_ss_uLuR::synapse0x3a534b0() {
   return (neuron0x3a496d0()*-0.0992458);
}

double NNfunction_ss_uLuR::synapse0x3a534f0() {
   return (neuron0x3a49a10()*-0.00731227);
}

double NNfunction_ss_uLuR::synapse0x3a53530() {
   return (neuron0x3a49d50()*-0.080622);
}

double NNfunction_ss_uLuR::synapse0x3a53570() {
   return (neuron0x3a4a090()*-0.105516);
}

double NNfunction_ss_uLuR::synapse0x3a535b0() {
   return (neuron0x3a4a3d0()*0.571643);
}

double NNfunction_ss_uLuR::synapse0x3a535f0() {
   return (neuron0x3a4a710()*-0.0652382);
}

double NNfunction_ss_uLuR::synapse0x3a53630() {
   return (neuron0x3a4aa50()*0.0271298);
}

double NNfunction_ss_uLuR::synapse0x3a53670() {
   return (neuron0x3a4ad90()*0.857109);
}

double NNfunction_ss_uLuR::synapse0x3a536b0() {
   return (neuron0x3a4b0d0()*-0.186136);
}

double NNfunction_ss_uLuR::synapse0x3a53030() {
   return (neuron0x3a4b410()*0.143946);
}

double NNfunction_ss_uLuR::synapse0x3a53070() {
   return (neuron0x3a4b970()*-0.144237);
}

double NNfunction_ss_uLuR::synapse0x3a53800() {
   return (neuron0x3a4bcb0()*0.135724);
}

double NNfunction_ss_uLuR::synapse0x3a53840() {
   return (neuron0x3a4bff0()*0.324072);
}

double NNfunction_ss_uLuR::synapse0x3a53880() {
   return (neuron0x3a4c330()*-0.341542);
}

double NNfunction_ss_uLuR::synapse0x3a538c0() {
   return (neuron0x3a4c670()*0.00285683);
}

double NNfunction_ss_uLuR::synapse0x3a53900() {
   return (neuron0x3a4c9b0()*0.12389);
}

double NNfunction_ss_uLuR::synapse0x3a53940() {
   return (neuron0x3a4ccf0()*-0.0711185);
}

double NNfunction_ss_uLuR::synapse0x3a53cc0() {
   return (neuron0x3a480a0()*0.0437945);
}

double NNfunction_ss_uLuR::synapse0x3a53d00() {
   return (neuron0x3a48350()*0.563702);
}

double NNfunction_ss_uLuR::synapse0x3a53d40() {
   return (neuron0x3a48690()*1.2966);
}

double NNfunction_ss_uLuR::synapse0x3a53d80() {
   return (neuron0x3a489d0()*-1.36718);
}

double NNfunction_ss_uLuR::synapse0x3a53dc0() {
   return (neuron0x3a48d10()*0.131384);
}

double NNfunction_ss_uLuR::synapse0x3a53e00() {
   return (neuron0x3a49050()*0.405501);
}

double NNfunction_ss_uLuR::synapse0x3a53e40() {
   return (neuron0x3a49390()*0.920793);
}

double NNfunction_ss_uLuR::synapse0x3a53e80() {
   return (neuron0x3a496d0()*-0.331406);
}

double NNfunction_ss_uLuR::synapse0x3a53ec0() {
   return (neuron0x3a49a10()*-0.451855);
}

double NNfunction_ss_uLuR::synapse0x3a53f00() {
   return (neuron0x3a49d50()*-0.992174);
}

double NNfunction_ss_uLuR::synapse0x3a53f40() {
   return (neuron0x3a4a090()*0.92633);
}

double NNfunction_ss_uLuR::synapse0x3a53f80() {
   return (neuron0x3a4a3d0()*-1.14248);
}

double NNfunction_ss_uLuR::synapse0x3a53fc0() {
   return (neuron0x3a4a710()*0.100655);
}

double NNfunction_ss_uLuR::synapse0x3a54000() {
   return (neuron0x3a4aa50()*-0.447588);
}

double NNfunction_ss_uLuR::synapse0x3a54040() {
   return (neuron0x3a4ad90()*-0.0594223);
}

double NNfunction_ss_uLuR::synapse0x3a54080() {
   return (neuron0x3a4b0d0()*-1.65771);
}

double NNfunction_ss_uLuR::synapse0x3a53b10() {
   return (neuron0x3a4b410()*0.361108);
}

double NNfunction_ss_uLuR::synapse0x3a53b50() {
   return (neuron0x3a4b970()*0.632621);
}

double NNfunction_ss_uLuR::synapse0x3a541d0() {
   return (neuron0x3a4bcb0()*0.497577);
}

double NNfunction_ss_uLuR::synapse0x3a54210() {
   return (neuron0x3a4bff0()*0.0105449);
}

double NNfunction_ss_uLuR::synapse0x3a54250() {
   return (neuron0x3a4c330()*0.0976799);
}

double NNfunction_ss_uLuR::synapse0x3a54290() {
   return (neuron0x3a4c670()*-1.14615);
}

double NNfunction_ss_uLuR::synapse0x3a542d0() {
   return (neuron0x3a4c9b0()*1.10409);
}

double NNfunction_ss_uLuR::synapse0x3a54310() {
   return (neuron0x3a4ccf0()*0.173238);
}

double NNfunction_ss_uLuR::synapse0x3a54690() {
   return (neuron0x3a480a0()*-0.00896554);
}

double NNfunction_ss_uLuR::synapse0x3a546d0() {
   return (neuron0x3a48350()*0.354263);
}

double NNfunction_ss_uLuR::synapse0x3a54710() {
   return (neuron0x3a48690()*-0.62011);
}

double NNfunction_ss_uLuR::synapse0x3a54750() {
   return (neuron0x3a489d0()*0.768807);
}

double NNfunction_ss_uLuR::synapse0x3a54790() {
   return (neuron0x3a48d10()*-0.73231);
}

double NNfunction_ss_uLuR::synapse0x3a547d0() {
   return (neuron0x3a49050()*0.0292821);
}

double NNfunction_ss_uLuR::synapse0x3a54810() {
   return (neuron0x3a49390()*-0.220516);
}

double NNfunction_ss_uLuR::synapse0x3a54850() {
   return (neuron0x3a496d0()*0.18149);
}

double NNfunction_ss_uLuR::synapse0x3a54890() {
   return (neuron0x3a49a10()*-0.321703);
}

double NNfunction_ss_uLuR::synapse0x3a548d0() {
   return (neuron0x3a49d50()*-0.155577);
}

double NNfunction_ss_uLuR::synapse0x3a54910() {
   return (neuron0x3a4a090()*1.20158);
}

double NNfunction_ss_uLuR::synapse0x3a54950() {
   return (neuron0x3a4a3d0()*-0.863591);
}

double NNfunction_ss_uLuR::synapse0x3a54990() {
   return (neuron0x3a4a710()*-0.928929);
}

double NNfunction_ss_uLuR::synapse0x3a549d0() {
   return (neuron0x3a4aa50()*0.689571);
}

double NNfunction_ss_uLuR::synapse0x3a54a10() {
   return (neuron0x3a4ad90()*-0.30804);
}

double NNfunction_ss_uLuR::synapse0x3a54a50() {
   return (neuron0x3a4b0d0()*0.31631);
}

double NNfunction_ss_uLuR::synapse0x3a544e0() {
   return (neuron0x3a4b410()*-0.763857);
}

double NNfunction_ss_uLuR::synapse0x3a54520() {
   return (neuron0x3a4b970()*0.499346);
}

double NNfunction_ss_uLuR::synapse0x3a512b0() {
   return (neuron0x3a4bcb0()*0.828083);
}

double NNfunction_ss_uLuR::synapse0x3a512f0() {
   return (neuron0x3a4bff0()*-0.339593);
}

double NNfunction_ss_uLuR::synapse0x3a51330() {
   return (neuron0x3a4c330()*-0.497685);
}

double NNfunction_ss_uLuR::synapse0x3a51370() {
   return (neuron0x3a4c670()*-0.102526);
}

double NNfunction_ss_uLuR::synapse0x3a513b0() {
   return (neuron0x3a4c9b0()*0.448805);
}

double NNfunction_ss_uLuR::synapse0x3a513f0() {
   return (neuron0x3a4ccf0()*0.146723);
}

double NNfunction_ss_uLuR::synapse0x3a51770() {
   return (neuron0x3a480a0()*-0.140449);
}

double NNfunction_ss_uLuR::synapse0x3a517b0() {
   return (neuron0x3a48350()*0.69125);
}

double NNfunction_ss_uLuR::synapse0x3a517f0() {
   return (neuron0x3a48690()*-0.268672);
}

double NNfunction_ss_uLuR::synapse0x3a51830() {
   return (neuron0x3a489d0()*0.835035);
}

double NNfunction_ss_uLuR::synapse0x3a51870() {
   return (neuron0x3a48d10()*-0.970674);
}

double NNfunction_ss_uLuR::synapse0x3a518b0() {
   return (neuron0x3a49050()*-0.63503);
}

double NNfunction_ss_uLuR::synapse0x3a518f0() {
   return (neuron0x3a49390()*-0.996116);
}

double NNfunction_ss_uLuR::synapse0x3a51930() {
   return (neuron0x3a496d0()*0.499294);
}

double NNfunction_ss_uLuR::synapse0x3a51970() {
   return (neuron0x3a49a10()*-0.121121);
}

double NNfunction_ss_uLuR::synapse0x3a519b0() {
   return (neuron0x3a49d50()*0.353302);
}

double NNfunction_ss_uLuR::synapse0x3a519f0() {
   return (neuron0x3a4a090()*0.967858);
}

double NNfunction_ss_uLuR::synapse0x3a51a30() {
   return (neuron0x3a4a3d0()*-0.24927);
}

double NNfunction_ss_uLuR::synapse0x3a51a70() {
   return (neuron0x3a4a710()*1.46975);
}

double NNfunction_ss_uLuR::synapse0x3a55bb0() {
   return (neuron0x3a4aa50()*0.806638);
}

double NNfunction_ss_uLuR::synapse0x3a55bf0() {
   return (neuron0x3a4ad90()*-0.361942);
}

double NNfunction_ss_uLuR::synapse0x3a55c30() {
   return (neuron0x3a4b0d0()*0.172289);
}

double NNfunction_ss_uLuR::synapse0x3a515c0() {
   return (neuron0x3a4b410()*-0.824671);
}

double NNfunction_ss_uLuR::synapse0x3a51600() {
   return (neuron0x3a4b970()*-0.21072);
}

double NNfunction_ss_uLuR::synapse0x3a55d80() {
   return (neuron0x3a4bcb0()*-0.413483);
}

double NNfunction_ss_uLuR::synapse0x3a55dc0() {
   return (neuron0x3a4bff0()*0.830907);
}

double NNfunction_ss_uLuR::synapse0x3a55e00() {
   return (neuron0x3a4c330()*-0.0318432);
}

double NNfunction_ss_uLuR::synapse0x3a55e40() {
   return (neuron0x3a4c670()*-0.777917);
}

double NNfunction_ss_uLuR::synapse0x3a55e80() {
   return (neuron0x3a4c9b0()*0.757605);
}

double NNfunction_ss_uLuR::synapse0x3a55ec0() {
   return (neuron0x3a4ccf0()*-0.0510581);
}

double NNfunction_ss_uLuR::synapse0x3a56240() {
   return (neuron0x3a480a0()*0.0242646);
}

double NNfunction_ss_uLuR::synapse0x3a56280() {
   return (neuron0x3a48350()*0.0236129);
}

double NNfunction_ss_uLuR::synapse0x3a562c0() {
   return (neuron0x3a48690()*0.0179195);
}

double NNfunction_ss_uLuR::synapse0x3a56300() {
   return (neuron0x3a489d0()*-1.9883);
}

double NNfunction_ss_uLuR::synapse0x3a56340() {
   return (neuron0x3a48d10()*0.0256301);
}

double NNfunction_ss_uLuR::synapse0x3a56380() {
   return (neuron0x3a49050()*0.0315822);
}

double NNfunction_ss_uLuR::synapse0x3a563c0() {
   return (neuron0x3a49390()*0.0259056);
}

double NNfunction_ss_uLuR::synapse0x3a56400() {
   return (neuron0x3a496d0()*0.00486859);
}

double NNfunction_ss_uLuR::synapse0x3a56440() {
   return (neuron0x3a49a10()*-0.010416);
}

double NNfunction_ss_uLuR::synapse0x3a56480() {
   return (neuron0x3a49d50()*-0.00109204);
}

double NNfunction_ss_uLuR::synapse0x3a564c0() {
   return (neuron0x3a4a090()*-0.0215861);
}

double NNfunction_ss_uLuR::synapse0x3a56500() {
   return (neuron0x3a4a3d0()*0.48323);
}

double NNfunction_ss_uLuR::synapse0x3a56540() {
   return (neuron0x3a4a710()*-0.0382099);
}

double NNfunction_ss_uLuR::synapse0x3a56580() {
   return (neuron0x3a4aa50()*0.00230946);
}

double NNfunction_ss_uLuR::synapse0x3a565c0() {
   return (neuron0x3a4ad90()*0.21075);
}

double NNfunction_ss_uLuR::synapse0x3a56600() {
   return (neuron0x3a4b0d0()*-0.0529456);
}

double NNfunction_ss_uLuR::synapse0x3a56090() {
   return (neuron0x3a4b410()*-0.0316238);
}

double NNfunction_ss_uLuR::synapse0x3a560d0() {
   return (neuron0x3a4b970()*-0.0395188);
}

double NNfunction_ss_uLuR::synapse0x3a56750() {
   return (neuron0x3a4bcb0()*-0.0263768);
}

double NNfunction_ss_uLuR::synapse0x3a56790() {
   return (neuron0x3a4bff0()*0.0122602);
}

double NNfunction_ss_uLuR::synapse0x3a567d0() {
   return (neuron0x3a4c330()*0.00838583);
}

double NNfunction_ss_uLuR::synapse0x3a56810() {
   return (neuron0x3a4c670()*0.0236955);
}

double NNfunction_ss_uLuR::synapse0x3a56850() {
   return (neuron0x3a4c9b0()*-0.00629161);
}

double NNfunction_ss_uLuR::synapse0x3a56890() {
   return (neuron0x3a4ccf0()*0.0115392);
}

double NNfunction_ss_uLuR::synapse0x3a56c10() {
   return (neuron0x3a480a0()*0.00444055);
}

double NNfunction_ss_uLuR::synapse0x3a56c50() {
   return (neuron0x3a48350()*-0.00724766);
}

double NNfunction_ss_uLuR::synapse0x3a56c90() {
   return (neuron0x3a48690()*-0.00256547);
}

double NNfunction_ss_uLuR::synapse0x3a56cd0() {
   return (neuron0x3a489d0()*0.06106);
}

double NNfunction_ss_uLuR::synapse0x3a56d10() {
   return (neuron0x3a48d10()*-0.00320942);
}

double NNfunction_ss_uLuR::synapse0x3a56d50() {
   return (neuron0x3a49050()*-0.0114849);
}

double NNfunction_ss_uLuR::synapse0x3a56d90() {
   return (neuron0x3a49390()*0.00986051);
}

double NNfunction_ss_uLuR::synapse0x3a56dd0() {
   return (neuron0x3a496d0()*-0.00688976);
}

double NNfunction_ss_uLuR::synapse0x3a56e10() {
   return (neuron0x3a49a10()*-0.0115255);
}

double NNfunction_ss_uLuR::synapse0x3a56e50() {
   return (neuron0x3a49d50()*-0.0181045);
}

double NNfunction_ss_uLuR::synapse0x3a56e90() {
   return (neuron0x3a4a090()*0.00463472);
}

double NNfunction_ss_uLuR::synapse0x3a56ed0() {
   return (neuron0x3a4a3d0()*0.854201);
}

double NNfunction_ss_uLuR::synapse0x3a56f10() {
   return (neuron0x3a4a710()*-0.00300826);
}

double NNfunction_ss_uLuR::synapse0x3a56f50() {
   return (neuron0x3a4aa50()*0.0148167);
}

double NNfunction_ss_uLuR::synapse0x3a56f90() {
   return (neuron0x3a4ad90()*-0.593411);
}

double NNfunction_ss_uLuR::synapse0x3a56fd0() {
   return (neuron0x3a4b0d0()*0.0181329);
}

double NNfunction_ss_uLuR::synapse0x3a56a60() {
   return (neuron0x3a4b410()*0.0100398);
}

double NNfunction_ss_uLuR::synapse0x3a56aa0() {
   return (neuron0x3a4b970()*0.0101334);
}

double NNfunction_ss_uLuR::synapse0x3a57120() {
   return (neuron0x3a4bcb0()*0.0057928);
}

double NNfunction_ss_uLuR::synapse0x3a57160() {
   return (neuron0x3a4bff0()*-0.00420823);
}

double NNfunction_ss_uLuR::synapse0x3a571a0() {
   return (neuron0x3a4c330()*0.00181653);
}

double NNfunction_ss_uLuR::synapse0x3a571e0() {
   return (neuron0x3a4c670()*-0.00443587);
}

double NNfunction_ss_uLuR::synapse0x3a57220() {
   return (neuron0x3a4c9b0()*-0.00135892);
}

double NNfunction_ss_uLuR::synapse0x3a57260() {
   return (neuron0x3a4ccf0()*-0.0029173);
}

double NNfunction_ss_uLuR::synapse0x3a575e0() {
   return (neuron0x3a480a0()*-0.385434);
}

double NNfunction_ss_uLuR::synapse0x3a57620() {
   return (neuron0x3a48350()*1.08459);
}

double NNfunction_ss_uLuR::synapse0x3a57660() {
   return (neuron0x3a48690()*-0.461615);
}

double NNfunction_ss_uLuR::synapse0x3a576a0() {
   return (neuron0x3a489d0()*0.413291);
}

double NNfunction_ss_uLuR::synapse0x3a576e0() {
   return (neuron0x3a48d10()*-0.134891);
}

double NNfunction_ss_uLuR::synapse0x3a57720() {
   return (neuron0x3a49050()*0.79044);
}

double NNfunction_ss_uLuR::synapse0x3a57760() {
   return (neuron0x3a49390()*1.2945);
}

double NNfunction_ss_uLuR::synapse0x3a577a0() {
   return (neuron0x3a496d0()*0.59498);
}

double NNfunction_ss_uLuR::synapse0x3a577e0() {
   return (neuron0x3a49a10()*-0.47062);
}

double NNfunction_ss_uLuR::synapse0x3a57820() {
   return (neuron0x3a49d50()*-0.467288);
}

double NNfunction_ss_uLuR::synapse0x3a57860() {
   return (neuron0x3a4a090()*-0.527835);
}

double NNfunction_ss_uLuR::synapse0x3a578a0() {
   return (neuron0x3a4a3d0()*-0.67849);
}

double NNfunction_ss_uLuR::synapse0x3a578e0() {
   return (neuron0x3a4a710()*1.392);
}

double NNfunction_ss_uLuR::synapse0x3a57920() {
   return (neuron0x3a4aa50()*0.0264707);
}

double NNfunction_ss_uLuR::synapse0x3a57960() {
   return (neuron0x3a4ad90()*-0.261179);
}

double NNfunction_ss_uLuR::synapse0x3a579a0() {
   return (neuron0x3a4b0d0()*-0.248134);
}

double NNfunction_ss_uLuR::synapse0x3a57430() {
   return (neuron0x3a4b410()*0.440118);
}

double NNfunction_ss_uLuR::synapse0x3a57470() {
   return (neuron0x3a4b970()*0.138847);
}

double NNfunction_ss_uLuR::synapse0x3a57af0() {
   return (neuron0x3a4bcb0()*0.147303);
}

double NNfunction_ss_uLuR::synapse0x3a57b30() {
   return (neuron0x3a4bff0()*-0.211585);
}

double NNfunction_ss_uLuR::synapse0x3a57b70() {
   return (neuron0x3a4c330()*0.0854814);
}

double NNfunction_ss_uLuR::synapse0x3a57bb0() {
   return (neuron0x3a4c670()*0.127459);
}

double NNfunction_ss_uLuR::synapse0x3a57bf0() {
   return (neuron0x3a4c9b0()*-0.0201554);
}

double NNfunction_ss_uLuR::synapse0x3a57c30() {
   return (neuron0x3a4ccf0()*-0.201767);
}

double NNfunction_ss_uLuR::synapse0x3a57fb0() {
   return (neuron0x3a480a0()*0.0469747);
}

double NNfunction_ss_uLuR::synapse0x3a48230() {
   return (neuron0x3a48350()*0.179703);
}

double NNfunction_ss_uLuR::synapse0x3a48270() {
   return (neuron0x3a48690()*0.374342);
}

double NNfunction_ss_uLuR::synapse0x3a48570() {
   return (neuron0x3a489d0()*2.23683);
}

double NNfunction_ss_uLuR::synapse0x3a485b0() {
   return (neuron0x3a48d10()*-0.25866);
}

double NNfunction_ss_uLuR::synapse0x3a488b0() {
   return (neuron0x3a49050()*0.518223);
}

double NNfunction_ss_uLuR::synapse0x3a488f0() {
   return (neuron0x3a49390()*0.426566);
}

double NNfunction_ss_uLuR::synapse0x3a48bf0() {
   return (neuron0x3a496d0()*0.352252);
}

double NNfunction_ss_uLuR::synapse0x3a48c30() {
   return (neuron0x3a49a10()*-0.331788);
}

double NNfunction_ss_uLuR::synapse0x3a48f30() {
   return (neuron0x3a49d50()*-0.993546);
}

double NNfunction_ss_uLuR::synapse0x3a48f70() {
   return (neuron0x3a4a090()*0.378541);
}

double NNfunction_ss_uLuR::synapse0x3a49270() {
   return (neuron0x3a4a3d0()*0.216594);
}

double NNfunction_ss_uLuR::synapse0x3a492b0() {
   return (neuron0x3a4a710()*-0.723208);
}

double NNfunction_ss_uLuR::synapse0x3a495b0() {
   return (neuron0x3a4aa50()*0.305568);
}

double NNfunction_ss_uLuR::synapse0x3a495f0() {
   return (neuron0x3a4ad90()*0.0712058);
}

double NNfunction_ss_uLuR::synapse0x3a498f0() {
   return (neuron0x3a4b0d0()*-0.261988);
}

double NNfunction_ss_uLuR::synapse0x3a49930() {
   return (neuron0x3a4b410()*-0.00655664);
}

double NNfunction_ss_uLuR::synapse0x3a49c30() {
   return (neuron0x3a4b970()*-0.102128);
}

double NNfunction_ss_uLuR::synapse0x3a49c70() {
   return (neuron0x3a4bcb0()*-0.209966);
}

double NNfunction_ss_uLuR::synapse0x3a49f70() {
   return (neuron0x3a4bff0()*0.163803);
}

double NNfunction_ss_uLuR::synapse0x3a49fb0() {
   return (neuron0x3a4c330()*-0.505669);
}

double NNfunction_ss_uLuR::synapse0x3a4a2b0() {
   return (neuron0x3a4c670()*0.0570733);
}

double NNfunction_ss_uLuR::synapse0x3a4a2f0() {
   return (neuron0x3a4c9b0()*0.127719);
}

double NNfunction_ss_uLuR::synapse0x3a4a5f0() {
   return (neuron0x3a4ccf0()*0.339339);
}

double NNfunction_ss_uLuR::synapse0x3a4a630() {
   return (neuron0x3a480a0()*-0.147818);
}

double NNfunction_ss_uLuR::synapse0x3a4b2f0() {
   return (neuron0x3a48350()*0.978696);
}

double NNfunction_ss_uLuR::synapse0x3a4b330() {
   return (neuron0x3a48690()*-3.35629);
}

double NNfunction_ss_uLuR::synapse0x3a57e00() {
   return (neuron0x3a489d0()*1.03792);
}

double NNfunction_ss_uLuR::synapse0x3a57e40() {
   return (neuron0x3a48d10()*-0.379177);
}

double NNfunction_ss_uLuR::synapse0x3a4b630() {
   return (neuron0x3a49050()*-0.6493);
}

double NNfunction_ss_uLuR::synapse0x3a4b670() {
   return (neuron0x3a49390()*-0.0564588);
}

double NNfunction_ss_uLuR::synapse0x3a4bb90() {
   return (neuron0x3a496d0()*-0.136621);
}

double NNfunction_ss_uLuR::synapse0x3a4bbd0() {
   return (neuron0x3a49a10()*-1.09785);
}

double NNfunction_ss_uLuR::synapse0x3a4bed0() {
   return (neuron0x3a49d50()*0.487349);
}

double NNfunction_ss_uLuR::synapse0x3a4bf10() {
   return (neuron0x3a4a090()*0.038191);
}

double NNfunction_ss_uLuR::synapse0x3a4c210() {
   return (neuron0x3a4a3d0()*1.03179);
}

double NNfunction_ss_uLuR::synapse0x3a4c250() {
   return (neuron0x3a4a710()*0.0635758);
}

double NNfunction_ss_uLuR::synapse0x3a4c550() {
   return (neuron0x3a4aa50()*0.643702);
}

double NNfunction_ss_uLuR::synapse0x3a4c590() {
   return (neuron0x3a4ad90()*0.00851886);
}

double NNfunction_ss_uLuR::synapse0x3a4c890() {
   return (neuron0x3a4b0d0()*-0.125215);
}

double NNfunction_ss_uLuR::synapse0x3a4c8d0() {
   return (neuron0x3a4b410()*-0.165845);
}

double NNfunction_ss_uLuR::synapse0x3a4cbd0() {
   return (neuron0x3a4b970()*0.658564);
}

double NNfunction_ss_uLuR::synapse0x3a4cc10() {
   return (neuron0x3a4bcb0()*1.73641);
}

double NNfunction_ss_uLuR::synapse0x3a4cf10() {
   return (neuron0x3a4bff0()*-0.746128);
}

double NNfunction_ss_uLuR::synapse0x3a4cf50() {
   return (neuron0x3a4c330()*-0.36495);
}

double NNfunction_ss_uLuR::synapse0x3a4a930() {
   return (neuron0x3a4c670()*0.197215);
}

double NNfunction_ss_uLuR::synapse0x3a4a970() {
   return (neuron0x3a4c9b0()*0.270871);
}

double NNfunction_ss_uLuR::synapse0x3a59d20() {
   return (neuron0x3a4ccf0()*0.441173);
}

double NNfunction_ss_uLuR::synapse0x3a5a0a0() {
   return (neuron0x3a480a0()*-0.165962);
}

double NNfunction_ss_uLuR::synapse0x3a5a0e0() {
   return (neuron0x3a48350()*-0.351169);
}

double NNfunction_ss_uLuR::synapse0x3a5a120() {
   return (neuron0x3a48690()*-0.0288203);
}

double NNfunction_ss_uLuR::synapse0x3a5a160() {
   return (neuron0x3a489d0()*0.419924);
}

double NNfunction_ss_uLuR::synapse0x3a5a1a0() {
   return (neuron0x3a48d10()*-0.123235);
}

double NNfunction_ss_uLuR::synapse0x3a5a1e0() {
   return (neuron0x3a49050()*-0.540502);
}

double NNfunction_ss_uLuR::synapse0x3a5a220() {
   return (neuron0x3a49390()*0.0769195);
}

double NNfunction_ss_uLuR::synapse0x3a5a260() {
   return (neuron0x3a496d0()*-0.540286);
}

double NNfunction_ss_uLuR::synapse0x3a5a2a0() {
   return (neuron0x3a49a10()*0.145376);
}

double NNfunction_ss_uLuR::synapse0x3a5a2e0() {
   return (neuron0x3a49d50()*-0.172045);
}

double NNfunction_ss_uLuR::synapse0x3a5a320() {
   return (neuron0x3a4a090()*0.30531);
}

double NNfunction_ss_uLuR::synapse0x3a5a360() {
   return (neuron0x3a4a3d0()*0.613891);
}

double NNfunction_ss_uLuR::synapse0x3a5a3a0() {
   return (neuron0x3a4a710()*0.048312);
}

double NNfunction_ss_uLuR::synapse0x3a5a3e0() {
   return (neuron0x3a4aa50()*-0.533344);
}

double NNfunction_ss_uLuR::synapse0x3a5a420() {
   return (neuron0x3a4ad90()*0.303851);
}

double NNfunction_ss_uLuR::synapse0x3a5a460() {
   return (neuron0x3a4b0d0()*0.292223);
}

double NNfunction_ss_uLuR::synapse0x3a59ef0() {
   return (neuron0x3a4b410()*0.265562);
}

double NNfunction_ss_uLuR::synapse0x3a59f30() {
   return (neuron0x3a4b970()*-0.631401);
}

double NNfunction_ss_uLuR::synapse0x3a5a5b0() {
   return (neuron0x3a4bcb0()*0.306632);
}

double NNfunction_ss_uLuR::synapse0x3a5a5f0() {
   return (neuron0x3a4bff0()*0.138717);
}

double NNfunction_ss_uLuR::synapse0x3a5a630() {
   return (neuron0x3a4c330()*-0.0152021);
}

double NNfunction_ss_uLuR::synapse0x3a5a670() {
   return (neuron0x3a4c670()*0.244554);
}

double NNfunction_ss_uLuR::synapse0x3a5a6b0() {
   return (neuron0x3a4c9b0()*-0.578459);
}

double NNfunction_ss_uLuR::synapse0x3a5a6f0() {
   return (neuron0x3a4ccf0()*-0.191175);
}

double NNfunction_ss_uLuR::synapse0x3a5aa70() {
   return (neuron0x3a480a0()*0.0111721);
}

double NNfunction_ss_uLuR::synapse0x3a5aab0() {
   return (neuron0x3a48350()*-0.00779998);
}

double NNfunction_ss_uLuR::synapse0x3a5aaf0() {
   return (neuron0x3a48690()*-0.212227);
}

double NNfunction_ss_uLuR::synapse0x3a5ab30() {
   return (neuron0x3a489d0()*4.43282);
}

double NNfunction_ss_uLuR::synapse0x3a5ab70() {
   return (neuron0x3a48d10()*0.0374262);
}

double NNfunction_ss_uLuR::synapse0x3a5abb0() {
   return (neuron0x3a49050()*0.00208842);
}

double NNfunction_ss_uLuR::synapse0x3a5abf0() {
   return (neuron0x3a49390()*0.0410317);
}

double NNfunction_ss_uLuR::synapse0x3a5ac30() {
   return (neuron0x3a496d0()*-0.0443446);
}

double NNfunction_ss_uLuR::synapse0x3a5ac70() {
   return (neuron0x3a49a10()*-0.00917849);
}

double NNfunction_ss_uLuR::synapse0x3a5acb0() {
   return (neuron0x3a49d50()*-0.00714366);
}

double NNfunction_ss_uLuR::synapse0x3a5acf0() {
   return (neuron0x3a4a090()*-0.10903);
}

double NNfunction_ss_uLuR::synapse0x3a5ad30() {
   return (neuron0x3a4a3d0()*0.131179);
}

double NNfunction_ss_uLuR::synapse0x3a5ad70() {
   return (neuron0x3a4a710()*0.112914);
}

double NNfunction_ss_uLuR::synapse0x3a5adb0() {
   return (neuron0x3a4aa50()*0.142556);
}

double NNfunction_ss_uLuR::synapse0x3a5adf0() {
   return (neuron0x3a4ad90()*0.120782);
}

double NNfunction_ss_uLuR::synapse0x3a5ae30() {
   return (neuron0x3a4b0d0()*-0.100346);
}

double NNfunction_ss_uLuR::synapse0x3a5a8c0() {
   return (neuron0x3a4b410()*-0.199141);
}

double NNfunction_ss_uLuR::synapse0x3a5a900() {
   return (neuron0x3a4b970()*0.0765054);
}

double NNfunction_ss_uLuR::synapse0x3a5af80() {
   return (neuron0x3a4bcb0()*0.154403);
}

double NNfunction_ss_uLuR::synapse0x3a5afc0() {
   return (neuron0x3a4bff0()*0.0188312);
}

double NNfunction_ss_uLuR::synapse0x3a5b000() {
   return (neuron0x3a4c330()*-0.172934);
}

double NNfunction_ss_uLuR::synapse0x3a5b040() {
   return (neuron0x3a4c670()*0.141059);
}

double NNfunction_ss_uLuR::synapse0x3a5b080() {
   return (neuron0x3a4c9b0()*-0.0440417);
}

double NNfunction_ss_uLuR::synapse0x3a5b0c0() {
   return (neuron0x3a4ccf0()*-0.00198309);
}

double NNfunction_ss_uLuR::synapse0x3a5b440() {
   return (neuron0x3a480a0()*-0.219124);
}

double NNfunction_ss_uLuR::synapse0x3a5b480() {
   return (neuron0x3a48350()*0.631158);
}

double NNfunction_ss_uLuR::synapse0x3a5b4c0() {
   return (neuron0x3a48690()*-0.423893);
}

double NNfunction_ss_uLuR::synapse0x3a5b500() {
   return (neuron0x3a489d0()*0.81755);
}

double NNfunction_ss_uLuR::synapse0x3a5b540() {
   return (neuron0x3a48d10()*-0.028693);
}

double NNfunction_ss_uLuR::synapse0x3a5b580() {
   return (neuron0x3a49050()*0.206703);
}

double NNfunction_ss_uLuR::synapse0x3a5b5c0() {
   return (neuron0x3a49390()*0.241276);
}

double NNfunction_ss_uLuR::synapse0x3a5b600() {
   return (neuron0x3a496d0()*-0.633281);
}

double NNfunction_ss_uLuR::synapse0x3a5b640() {
   return (neuron0x3a49a10()*0.213412);
}

double NNfunction_ss_uLuR::synapse0x3a5b680() {
   return (neuron0x3a49d50()*0.00116251);
}

double NNfunction_ss_uLuR::synapse0x3a5b6c0() {
   return (neuron0x3a4a090()*0.119653);
}

double NNfunction_ss_uLuR::synapse0x3a5b700() {
   return (neuron0x3a4a3d0()*0.848711);
}

double NNfunction_ss_uLuR::synapse0x3a5b740() {
   return (neuron0x3a4a710()*-0.232677);
}

double NNfunction_ss_uLuR::synapse0x3a5b780() {
   return (neuron0x3a4aa50()*-1.42293);
}

double NNfunction_ss_uLuR::synapse0x3a5b7c0() {
   return (neuron0x3a4ad90()*-0.32747);
}

double NNfunction_ss_uLuR::synapse0x3a5b800() {
   return (neuron0x3a4b0d0()*0.280571);
}

double NNfunction_ss_uLuR::synapse0x3a5b290() {
   return (neuron0x3a4b410()*0.253755);
}

double NNfunction_ss_uLuR::synapse0x3a5b2d0() {
   return (neuron0x3a4b970()*-0.0422979);
}

double NNfunction_ss_uLuR::synapse0x3a5b950() {
   return (neuron0x3a4bcb0()*0.345025);
}

double NNfunction_ss_uLuR::synapse0x3a5b990() {
   return (neuron0x3a4bff0()*-1.43155);
}

double NNfunction_ss_uLuR::synapse0x3a5b9d0() {
   return (neuron0x3a4c330()*0.727645);
}

double NNfunction_ss_uLuR::synapse0x3a5ba10() {
   return (neuron0x3a4c670()*-0.403157);
}

double NNfunction_ss_uLuR::synapse0x3a5ba50() {
   return (neuron0x3a4c9b0()*-0.00794955);
}

double NNfunction_ss_uLuR::synapse0x3a5ba90() {
   return (neuron0x3a4ccf0()*0.095388);
}

double NNfunction_ss_uLuR::synapse0x3a5be10() {
   return (neuron0x3a480a0()*0.0096307);
}

double NNfunction_ss_uLuR::synapse0x3a5be50() {
   return (neuron0x3a48350()*-0.204937);
}

double NNfunction_ss_uLuR::synapse0x3a5be90() {
   return (neuron0x3a48690()*0.893771);
}

double NNfunction_ss_uLuR::synapse0x3a5bed0() {
   return (neuron0x3a489d0()*0.231095);
}

double NNfunction_ss_uLuR::synapse0x3a5bf10() {
   return (neuron0x3a48d10()*0.264187);
}

double NNfunction_ss_uLuR::synapse0x3a5bf50() {
   return (neuron0x3a49050()*-0.14208);
}

double NNfunction_ss_uLuR::synapse0x3a5bf90() {
   return (neuron0x3a49390()*0.0513898);
}

double NNfunction_ss_uLuR::synapse0x3a5bfd0() {
   return (neuron0x3a496d0()*0.214488);
}

double NNfunction_ss_uLuR::synapse0x3a5c010() {
   return (neuron0x3a49a10()*0.236449);
}

double NNfunction_ss_uLuR::synapse0x3a5c050() {
   return (neuron0x3a49d50()*0.220823);
}

double NNfunction_ss_uLuR::synapse0x3a5c090() {
   return (neuron0x3a4a090()*-0.0431446);
}

double NNfunction_ss_uLuR::synapse0x3a5c0d0() {
   return (neuron0x3a4a3d0()*-0.153249);
}

double NNfunction_ss_uLuR::synapse0x3a5c110() {
   return (neuron0x3a4a710()*0.0928365);
}

double NNfunction_ss_uLuR::synapse0x3a5c150() {
   return (neuron0x3a4aa50()*-0.276543);
}

double NNfunction_ss_uLuR::synapse0x3a5c190() {
   return (neuron0x3a4ad90()*0.472946);
}

double NNfunction_ss_uLuR::synapse0x3a5c1d0() {
   return (neuron0x3a4b0d0()*-0.00373795);
}

double NNfunction_ss_uLuR::synapse0x3a5bc60() {
   return (neuron0x3a4b410()*0.0464013);
}

double NNfunction_ss_uLuR::synapse0x3a5bca0() {
   return (neuron0x3a4b970()*0.39801);
}

double NNfunction_ss_uLuR::synapse0x3a5c320() {
   return (neuron0x3a4bcb0()*0.425574);
}

double NNfunction_ss_uLuR::synapse0x3a5c360() {
   return (neuron0x3a4bff0()*0.245951);
}

double NNfunction_ss_uLuR::synapse0x3a5c3a0() {
   return (neuron0x3a4c330()*-0.0471542);
}

double NNfunction_ss_uLuR::synapse0x3a5c3e0() {
   return (neuron0x3a4c670()*-0.214383);
}

double NNfunction_ss_uLuR::synapse0x3a5c420() {
   return (neuron0x3a4c9b0()*0.340341);
}

double NNfunction_ss_uLuR::synapse0x3a5c460() {
   return (neuron0x3a4ccf0()*0.0589892);
}

double NNfunction_ss_uLuR::synapse0x3a5c7e0() {
   return (neuron0x3a480a0()*-0.0460485);
}

double NNfunction_ss_uLuR::synapse0x3a5c820() {
   return (neuron0x3a48350()*0.185253);
}

double NNfunction_ss_uLuR::synapse0x3a5c860() {
   return (neuron0x3a48690()*0.200356);
}

double NNfunction_ss_uLuR::synapse0x3a5c8a0() {
   return (neuron0x3a489d0()*-1.00838);
}

double NNfunction_ss_uLuR::synapse0x3a5c8e0() {
   return (neuron0x3a48d10()*-0.0807686);
}

double NNfunction_ss_uLuR::synapse0x3a5c920() {
   return (neuron0x3a49050()*-0.171933);
}

double NNfunction_ss_uLuR::synapse0x3a5c960() {
   return (neuron0x3a49390()*0.281053);
}

double NNfunction_ss_uLuR::synapse0x3a5c9a0() {
   return (neuron0x3a496d0()*0.0332348);
}

double NNfunction_ss_uLuR::synapse0x3a5c9e0() {
   return (neuron0x3a49a10()*-0.178015);
}

double NNfunction_ss_uLuR::synapse0x3a54ba0() {
   return (neuron0x3a49d50()*-0.0294187);
}

double NNfunction_ss_uLuR::synapse0x3a54be0() {
   return (neuron0x3a4a090()*0.0396998);
}

double NNfunction_ss_uLuR::synapse0x3a54c20() {
   return (neuron0x3a4a3d0()*0.0561232);
}

double NNfunction_ss_uLuR::synapse0x3a54c60() {
   return (neuron0x3a4a710()*0.969656);
}

double NNfunction_ss_uLuR::synapse0x3a54ca0() {
   return (neuron0x3a4aa50()*0.212615);
}

double NNfunction_ss_uLuR::synapse0x3a54ce0() {
   return (neuron0x3a4ad90()*-0.000551301);
}

double NNfunction_ss_uLuR::synapse0x3a54d20() {
   return (neuron0x3a4b0d0()*0.568915);
}

double NNfunction_ss_uLuR::synapse0x3a5c630() {
   return (neuron0x3a4b410()*-0.385522);
}

double NNfunction_ss_uLuR::synapse0x3a5c670() {
   return (neuron0x3a4b970()*-0.594159);
}

double NNfunction_ss_uLuR::synapse0x3a54e70() {
   return (neuron0x3a4bcb0()*-0.0168022);
}

double NNfunction_ss_uLuR::synapse0x3a54eb0() {
   return (neuron0x3a4bff0()*-0.355993);
}

double NNfunction_ss_uLuR::synapse0x3a54ef0() {
   return (neuron0x3a4c330()*0.0578278);
}

double NNfunction_ss_uLuR::synapse0x3a54f30() {
   return (neuron0x3a4c670()*0.0403326);
}

double NNfunction_ss_uLuR::synapse0x3a54f70() {
   return (neuron0x3a4c9b0()*-0.221651);
}

double NNfunction_ss_uLuR::synapse0x3a54fb0() {
   return (neuron0x3a4ccf0()*-0.200787);
}

double NNfunction_ss_uLuR::synapse0x3a55330() {
   return (neuron0x3a480a0()*-0.18034);
}

double NNfunction_ss_uLuR::synapse0x3a55370() {
   return (neuron0x3a48350()*0.00136377);
}

double NNfunction_ss_uLuR::synapse0x3a553b0() {
   return (neuron0x3a48690()*-0.219025);
}

double NNfunction_ss_uLuR::synapse0x3a553f0() {
   return (neuron0x3a489d0()*-0.107051);
}

double NNfunction_ss_uLuR::synapse0x3a55430() {
   return (neuron0x3a48d10()*-0.128654);
}

double NNfunction_ss_uLuR::synapse0x3a55470() {
   return (neuron0x3a49050()*0.247747);
}

double NNfunction_ss_uLuR::synapse0x3a554b0() {
   return (neuron0x3a49390()*-0.129294);
}

double NNfunction_ss_uLuR::synapse0x3a554f0() {
   return (neuron0x3a496d0()*0.246031);
}

double NNfunction_ss_uLuR::synapse0x3a55530() {
   return (neuron0x3a49a10()*-0.0758868);
}

double NNfunction_ss_uLuR::synapse0x3a55570() {
   return (neuron0x3a49d50()*-0.246051);
}

double NNfunction_ss_uLuR::synapse0x3a555b0() {
   return (neuron0x3a4a090()*-0.584202);
}

double NNfunction_ss_uLuR::synapse0x3a555f0() {
   return (neuron0x3a4a3d0()*-1.1711);
}

double NNfunction_ss_uLuR::synapse0x3a55630() {
   return (neuron0x3a4a710()*0.0830498);
}

double NNfunction_ss_uLuR::synapse0x3a55670() {
   return (neuron0x3a4aa50()*0.203859);
}

double NNfunction_ss_uLuR::synapse0x3a556b0() {
   return (neuron0x3a4ad90()*2.36441);
}

double NNfunction_ss_uLuR::synapse0x3a556f0() {
   return (neuron0x3a4b0d0()*-0.41727);
}

double NNfunction_ss_uLuR::synapse0x3a55180() {
   return (neuron0x3a4b410()*-0.199857);
}

double NNfunction_ss_uLuR::synapse0x3a551c0() {
   return (neuron0x3a4b970()*-0.132492);
}

double NNfunction_ss_uLuR::synapse0x3a55840() {
   return (neuron0x3a4bcb0()*0.204147);
}

double NNfunction_ss_uLuR::synapse0x3a55880() {
   return (neuron0x3a4bff0()*0.307549);
}

double NNfunction_ss_uLuR::synapse0x3a558c0() {
   return (neuron0x3a4c330()*-0.269711);
}

double NNfunction_ss_uLuR::synapse0x3a55900() {
   return (neuron0x3a4c670()*-0.0541973);
}

double NNfunction_ss_uLuR::synapse0x3a55940() {
   return (neuron0x3a4c9b0()*0.101474);
}

double NNfunction_ss_uLuR::synapse0x3a55980() {
   return (neuron0x3a4ccf0()*0.0900197);
}

double NNfunction_ss_uLuR::synapse0x3a55b50() {
   return (neuron0x3a480a0()*-0.0156756);
}

double NNfunction_ss_uLuR::synapse0x3a5ebe0() {
   return (neuron0x3a48350()*-1.05371);
}

double NNfunction_ss_uLuR::synapse0x3a5ec20() {
   return (neuron0x3a48690()*-2.15703);
}

double NNfunction_ss_uLuR::synapse0x3a5ec60() {
   return (neuron0x3a489d0()*0.43367);
}

double NNfunction_ss_uLuR::synapse0x3a5eca0() {
   return (neuron0x3a48d10()*-0.118563);
}

double NNfunction_ss_uLuR::synapse0x3a5ece0() {
   return (neuron0x3a49050()*-0.961362);
}

double NNfunction_ss_uLuR::synapse0x3a5ed20() {
   return (neuron0x3a49390()*-0.0615143);
}

double NNfunction_ss_uLuR::synapse0x3a5ed60() {
   return (neuron0x3a496d0()*-0.185483);
}

double NNfunction_ss_uLuR::synapse0x3a5eda0() {
   return (neuron0x3a49a10()*0.0539122);
}

double NNfunction_ss_uLuR::synapse0x3a5ede0() {
   return (neuron0x3a49d50()*-0.733883);
}

double NNfunction_ss_uLuR::synapse0x3a5ee20() {
   return (neuron0x3a4a090()*-0.00460873);
}

double NNfunction_ss_uLuR::synapse0x3a5ee60() {
   return (neuron0x3a4a3d0()*0.225947);
}

double NNfunction_ss_uLuR::synapse0x3a5eea0() {
   return (neuron0x3a4a710()*1.18065);
}

double NNfunction_ss_uLuR::synapse0x3a5eee0() {
   return (neuron0x3a4aa50()*-1.01372);
}

double NNfunction_ss_uLuR::synapse0x3a5ef20() {
   return (neuron0x3a4ad90()*1.68955);
}

double NNfunction_ss_uLuR::synapse0x3a5ef60() {
   return (neuron0x3a4b0d0()*0.125586);
}

double NNfunction_ss_uLuR::synapse0x3a5ea30() {
   return (neuron0x3a4b410()*-0.0289704);
}

double NNfunction_ss_uLuR::synapse0x3a5ea70() {
   return (neuron0x3a4b970()*-0.643594);
}

double NNfunction_ss_uLuR::synapse0x3a5f0b0() {
   return (neuron0x3a4bcb0()*0.457065);
}

double NNfunction_ss_uLuR::synapse0x3a5f0f0() {
   return (neuron0x3a4bff0()*0.6991);
}

double NNfunction_ss_uLuR::synapse0x3a5f130() {
   return (neuron0x3a4c330()*-0.567213);
}

double NNfunction_ss_uLuR::synapse0x3a5f170() {
   return (neuron0x3a4c670()*-0.218773);
}

double NNfunction_ss_uLuR::synapse0x3a5f1b0() {
   return (neuron0x3a4c9b0()*0.265215);
}

double NNfunction_ss_uLuR::synapse0x3a5f1f0() {
   return (neuron0x3a4ccf0()*0.236136);
}

double NNfunction_ss_uLuR::synapse0x3a5f570() {
   return (neuron0x3a480a0()*-0.22287);
}

double NNfunction_ss_uLuR::synapse0x3a5f5b0() {
   return (neuron0x3a48350()*0.277881);
}

double NNfunction_ss_uLuR::synapse0x3a5f5f0() {
   return (neuron0x3a48690()*0.100966);
}

double NNfunction_ss_uLuR::synapse0x3a5f630() {
   return (neuron0x3a489d0()*0.543851);
}

double NNfunction_ss_uLuR::synapse0x3a5f670() {
   return (neuron0x3a48d10()*0.297265);
}

double NNfunction_ss_uLuR::synapse0x3a5f6b0() {
   return (neuron0x3a49050()*0.3372);
}

double NNfunction_ss_uLuR::synapse0x3a5f6f0() {
   return (neuron0x3a49390()*0.469991);
}

double NNfunction_ss_uLuR::synapse0x3a5f730() {
   return (neuron0x3a496d0()*0.108624);
}

double NNfunction_ss_uLuR::synapse0x3a5f770() {
   return (neuron0x3a49a10()*-0.0516755);
}

double NNfunction_ss_uLuR::synapse0x3a5f7b0() {
   return (neuron0x3a49d50()*-0.412774);
}

double NNfunction_ss_uLuR::synapse0x3a5f7f0() {
   return (neuron0x3a4a090()*-0.048265);
}

double NNfunction_ss_uLuR::synapse0x3a5f830() {
   return (neuron0x3a4a3d0()*0.370281);
}

double NNfunction_ss_uLuR::synapse0x3a5f870() {
   return (neuron0x3a4a710()*-0.252027);
}

double NNfunction_ss_uLuR::synapse0x3a5f8b0() {
   return (neuron0x3a4aa50()*0.395325);
}

double NNfunction_ss_uLuR::synapse0x3a5f8f0() {
   return (neuron0x3a4ad90()*0.154767);
}

double NNfunction_ss_uLuR::synapse0x3a5f930() {
   return (neuron0x3a4b0d0()*0.483801);
}

double NNfunction_ss_uLuR::synapse0x3a5f3c0() {
   return (neuron0x3a4b410()*-0.0268456);
}

double NNfunction_ss_uLuR::synapse0x3a5f400() {
   return (neuron0x3a4b970()*-0.142867);
}

double NNfunction_ss_uLuR::synapse0x3a5fa80() {
   return (neuron0x3a4bcb0()*-0.368651);
}

double NNfunction_ss_uLuR::synapse0x3a5fac0() {
   return (neuron0x3a4bff0()*-0.197098);
}

double NNfunction_ss_uLuR::synapse0x3a5fb00() {
   return (neuron0x3a4c330()*-0.373707);
}

double NNfunction_ss_uLuR::synapse0x3a5fb40() {
   return (neuron0x3a4c670()*-0.0338952);
}

double NNfunction_ss_uLuR::synapse0x3a5fb80() {
   return (neuron0x3a4c9b0()*-0.461248);
}

double NNfunction_ss_uLuR::synapse0x3a5fbc0() {
   return (neuron0x3a4ccf0()*0.296447);
}

double NNfunction_ss_uLuR::synapse0x3a5ff40() {
   return (neuron0x3a480a0()*-0.0407686);
}

double NNfunction_ss_uLuR::synapse0x3a5ff80() {
   return (neuron0x3a48350()*-0.491844);
}

double NNfunction_ss_uLuR::synapse0x3a5ffc0() {
   return (neuron0x3a48690()*-0.0264086);
}

double NNfunction_ss_uLuR::synapse0x3a60000() {
   return (neuron0x3a489d0()*-0.440959);
}

double NNfunction_ss_uLuR::synapse0x3a60040() {
   return (neuron0x3a48d10()*0.131062);
}

double NNfunction_ss_uLuR::synapse0x3a60080() {
   return (neuron0x3a49050()*0.0406349);
}

double NNfunction_ss_uLuR::synapse0x3a600c0() {
   return (neuron0x3a49390()*0.422308);
}

double NNfunction_ss_uLuR::synapse0x3a60100() {
   return (neuron0x3a496d0()*-0.640537);
}

double NNfunction_ss_uLuR::synapse0x3a60140() {
   return (neuron0x3a49a10()*0.473853);
}

double NNfunction_ss_uLuR::synapse0x3a60180() {
   return (neuron0x3a49d50()*-0.996836);
}

double NNfunction_ss_uLuR::synapse0x3a601c0() {
   return (neuron0x3a4a090()*0.132483);
}

double NNfunction_ss_uLuR::synapse0x3a60200() {
   return (neuron0x3a4a3d0()*-0.297875);
}

double NNfunction_ss_uLuR::synapse0x3a60240() {
   return (neuron0x3a4a710()*0.75346);
}

double NNfunction_ss_uLuR::synapse0x3a60280() {
   return (neuron0x3a4aa50()*-0.173782);
}

double NNfunction_ss_uLuR::synapse0x3a602c0() {
   return (neuron0x3a4ad90()*0.389212);
}

double NNfunction_ss_uLuR::synapse0x3a60300() {
   return (neuron0x3a4b0d0()*-0.130917);
}

double NNfunction_ss_uLuR::synapse0x3a5fd90() {
   return (neuron0x3a4b410()*-0.103847);
}

double NNfunction_ss_uLuR::synapse0x3a5fdd0() {
   return (neuron0x3a4b970()*-0.044198);
}

double NNfunction_ss_uLuR::synapse0x3a60450() {
   return (neuron0x3a4bcb0()*0.377979);
}

double NNfunction_ss_uLuR::synapse0x3a60490() {
   return (neuron0x3a4bff0()*0.425853);
}

double NNfunction_ss_uLuR::synapse0x3a604d0() {
   return (neuron0x3a4c330()*-0.926042);
}

double NNfunction_ss_uLuR::synapse0x3a60510() {
   return (neuron0x3a4c670()*0.430699);
}

double NNfunction_ss_uLuR::synapse0x3a60550() {
   return (neuron0x3a4c9b0()*0.500978);
}

double NNfunction_ss_uLuR::synapse0x3a60590() {
   return (neuron0x3a4ccf0()*-0.0930533);
}

double NNfunction_ss_uLuR::synapse0x3a60910() {
   return (neuron0x3a480a0()*0.101146);
}

double NNfunction_ss_uLuR::synapse0x3a60950() {
   return (neuron0x3a48350()*-0.128571);
}

double NNfunction_ss_uLuR::synapse0x3a60990() {
   return (neuron0x3a48690()*-0.452659);
}

double NNfunction_ss_uLuR::synapse0x3a609d0() {
   return (neuron0x3a489d0()*-0.435147);
}

double NNfunction_ss_uLuR::synapse0x3a60a10() {
   return (neuron0x3a48d10()*-0.177098);
}

double NNfunction_ss_uLuR::synapse0x3a60a50() {
   return (neuron0x3a49050()*-0.0296683);
}

double NNfunction_ss_uLuR::synapse0x3a60a90() {
   return (neuron0x3a49390()*-0.0956711);
}

double NNfunction_ss_uLuR::synapse0x3a60ad0() {
   return (neuron0x3a496d0()*-0.158161);
}

double NNfunction_ss_uLuR::synapse0x3a60b10() {
   return (neuron0x3a49a10()*-0.0748327);
}

double NNfunction_ss_uLuR::synapse0x3a60b50() {
   return (neuron0x3a49d50()*-0.132337);
}

double NNfunction_ss_uLuR::synapse0x3a60b90() {
   return (neuron0x3a4a090()*-0.175233);
}

double NNfunction_ss_uLuR::synapse0x3a60bd0() {
   return (neuron0x3a4a3d0()*-0.0115542);
}

double NNfunction_ss_uLuR::synapse0x3a60c10() {
   return (neuron0x3a4a710()*-0.0958);
}

double NNfunction_ss_uLuR::synapse0x3a60c50() {
   return (neuron0x3a4aa50()*0.0259349);
}

double NNfunction_ss_uLuR::synapse0x3a60c90() {
   return (neuron0x3a4ad90()*0.131772);
}

double NNfunction_ss_uLuR::synapse0x3a60cd0() {
   return (neuron0x3a4b0d0()*0.442487);
}

double NNfunction_ss_uLuR::synapse0x3a60760() {
   return (neuron0x3a4b410()*-0.094786);
}

double NNfunction_ss_uLuR::synapse0x3a607a0() {
   return (neuron0x3a4b970()*-0.0965038);
}

double NNfunction_ss_uLuR::synapse0x3a60e20() {
   return (neuron0x3a4bcb0()*-0.00175856);
}

double NNfunction_ss_uLuR::synapse0x3a60e60() {
   return (neuron0x3a4bff0()*0.0909391);
}

double NNfunction_ss_uLuR::synapse0x3a60ea0() {
   return (neuron0x3a4c330()*0.0972348);
}

double NNfunction_ss_uLuR::synapse0x3a60ee0() {
   return (neuron0x3a4c670()*-0.0896366);
}

double NNfunction_ss_uLuR::synapse0x3a60f20() {
   return (neuron0x3a4c9b0()*-0.169003);
}

double NNfunction_ss_uLuR::synapse0x3a60f60() {
   return (neuron0x3a4ccf0()*0.129784);
}

double NNfunction_ss_uLuR::synapse0x3a612e0() {
   return (neuron0x3a480a0()*0.00898807);
}

double NNfunction_ss_uLuR::synapse0x3a61320() {
   return (neuron0x3a48350()*0.00781355);
}

double NNfunction_ss_uLuR::synapse0x3a61360() {
   return (neuron0x3a48690()*-0.00235735);
}

double NNfunction_ss_uLuR::synapse0x3a613a0() {
   return (neuron0x3a489d0()*0.148089);
}

double NNfunction_ss_uLuR::synapse0x3a613e0() {
   return (neuron0x3a48d10()*0.0083968);
}

double NNfunction_ss_uLuR::synapse0x3a61420() {
   return (neuron0x3a49050()*0.0146931);
}

double NNfunction_ss_uLuR::synapse0x3a61460() {
   return (neuron0x3a49390()*0.0421872);
}

double NNfunction_ss_uLuR::synapse0x3a614a0() {
   return (neuron0x3a496d0()*0.0341739);
}

double NNfunction_ss_uLuR::synapse0x3a614e0() {
   return (neuron0x3a49a10()*0.00257695);
}

double NNfunction_ss_uLuR::synapse0x3a61520() {
   return (neuron0x3a49d50()*-0.0247249);
}

double NNfunction_ss_uLuR::synapse0x3a61560() {
   return (neuron0x3a4a090()*0.0149417);
}

double NNfunction_ss_uLuR::synapse0x3a615a0() {
   return (neuron0x3a4a3d0()*0.832047);
}

double NNfunction_ss_uLuR::synapse0x3a615e0() {
   return (neuron0x3a4a710()*0.0272903);
}

double NNfunction_ss_uLuR::synapse0x3a61620() {
   return (neuron0x3a4aa50()*0.0650662);
}

double NNfunction_ss_uLuR::synapse0x3a61660() {
   return (neuron0x3a4ad90()*0.730401);
}

double NNfunction_ss_uLuR::synapse0x3a616a0() {
   return (neuron0x3a4b0d0()*0.00616136);
}

double NNfunction_ss_uLuR::synapse0x3a61130() {
   return (neuron0x3a4b410()*0.034431);
}

double NNfunction_ss_uLuR::synapse0x3a61170() {
   return (neuron0x3a4b970()*0.0566927);
}

double NNfunction_ss_uLuR::synapse0x3a617f0() {
   return (neuron0x3a4bcb0()*-0.0269222);
}

double NNfunction_ss_uLuR::synapse0x3a61830() {
   return (neuron0x3a4bff0()*0.0155618);
}

double NNfunction_ss_uLuR::synapse0x3a61870() {
   return (neuron0x3a4c330()*-0.0172265);
}

double NNfunction_ss_uLuR::synapse0x3a618b0() {
   return (neuron0x3a4c670()*0.00993161);
}

double NNfunction_ss_uLuR::synapse0x3a618f0() {
   return (neuron0x3a4c9b0()*-0.0154639);
}

double NNfunction_ss_uLuR::synapse0x3a61930() {
   return (neuron0x3a4ccf0()*0.069241);
}

double NNfunction_ss_uLuR::synapse0x3a61cb0() {
   return (neuron0x3a480a0()*-0.00549649);
}

double NNfunction_ss_uLuR::synapse0x3a61cf0() {
   return (neuron0x3a48350()*-0.00141175);
}

double NNfunction_ss_uLuR::synapse0x3a61d30() {
   return (neuron0x3a48690()*0.0661099);
}

double NNfunction_ss_uLuR::synapse0x3a61d70() {
   return (neuron0x3a489d0()*0.0219698);
}

double NNfunction_ss_uLuR::synapse0x3a61db0() {
   return (neuron0x3a48d10()*0.0240178);
}

double NNfunction_ss_uLuR::synapse0x3a61df0() {
   return (neuron0x3a49050()*0.0647922);
}

double NNfunction_ss_uLuR::synapse0x3a61e30() {
   return (neuron0x3a49390()*0.0532934);
}

double NNfunction_ss_uLuR::synapse0x3a61e70() {
   return (neuron0x3a496d0()*0.0891197);
}

double NNfunction_ss_uLuR::synapse0x3a61eb0() {
   return (neuron0x3a49a10()*0.017211);
}

double NNfunction_ss_uLuR::synapse0x3a61ef0() {
   return (neuron0x3a49d50()*-0.0471738);
}

double NNfunction_ss_uLuR::synapse0x3a61f30() {
   return (neuron0x3a4a090()*-0.0175455);
}

double NNfunction_ss_uLuR::synapse0x3a61f70() {
   return (neuron0x3a4a3d0()*-0.616786);
}

double NNfunction_ss_uLuR::synapse0x3a61fb0() {
   return (neuron0x3a4a710()*0.0330955);
}

double NNfunction_ss_uLuR::synapse0x3a61ff0() {
   return (neuron0x3a4aa50()*0.0363986);
}

double NNfunction_ss_uLuR::synapse0x3a62030() {
   return (neuron0x3a4ad90()*-0.674992);
}

double NNfunction_ss_uLuR::synapse0x3a62070() {
   return (neuron0x3a4b0d0()*-0.0480258);
}

double NNfunction_ss_uLuR::synapse0x3a61b00() {
   return (neuron0x3a4b410()*0.0790753);
}

double NNfunction_ss_uLuR::synapse0x3a61b40() {
   return (neuron0x3a4b970()*-0.00305461);
}

double NNfunction_ss_uLuR::synapse0x3a621c0() {
   return (neuron0x3a4bcb0()*-0.0699551);
}

double NNfunction_ss_uLuR::synapse0x3a62200() {
   return (neuron0x3a4bff0()*-0.0342703);
}

double NNfunction_ss_uLuR::synapse0x3a62240() {
   return (neuron0x3a4c330()*-0.00686144);
}

double NNfunction_ss_uLuR::synapse0x3a62280() {
   return (neuron0x3a4c670()*-0.0122906);
}

double NNfunction_ss_uLuR::synapse0x3a622c0() {
   return (neuron0x3a4c9b0()*-0.00709135);
}

double NNfunction_ss_uLuR::synapse0x3a62300() {
   return (neuron0x3a4ccf0()*0.000623823);
}

double NNfunction_ss_uLuR::synapse0x3a62680() {
   return (neuron0x3a480a0()*0.0353592);
}

double NNfunction_ss_uLuR::synapse0x3a626c0() {
   return (neuron0x3a48350()*-0.00403017);
}

double NNfunction_ss_uLuR::synapse0x3a62700() {
   return (neuron0x3a48690()*0.00472882);
}

double NNfunction_ss_uLuR::synapse0x3a62740() {
   return (neuron0x3a489d0()*-7.14717);
}

double NNfunction_ss_uLuR::synapse0x3a62780() {
   return (neuron0x3a48d10()*0.00243276);
}

double NNfunction_ss_uLuR::synapse0x3a627c0() {
   return (neuron0x3a49050()*0.0148256);
}

double NNfunction_ss_uLuR::synapse0x3a62800() {
   return (neuron0x3a49390()*-0.00651757);
}

double NNfunction_ss_uLuR::synapse0x3a62840() {
   return (neuron0x3a496d0()*0.0115916);
}

double NNfunction_ss_uLuR::synapse0x3a62880() {
   return (neuron0x3a49a10()*-0.00142934);
}

double NNfunction_ss_uLuR::synapse0x3a628c0() {
   return (neuron0x3a49d50()*0.00665943);
}

double NNfunction_ss_uLuR::synapse0x3a62900() {
   return (neuron0x3a4a090()*-0.00347462);
}

double NNfunction_ss_uLuR::synapse0x3a62940() {
   return (neuron0x3a4a3d0()*-0.268833);
}

double NNfunction_ss_uLuR::synapse0x3a62980() {
   return (neuron0x3a4a710()*-0.00347897);
}

double NNfunction_ss_uLuR::synapse0x3a629c0() {
   return (neuron0x3a4aa50()*-0.0143338);
}

double NNfunction_ss_uLuR::synapse0x3a62a00() {
   return (neuron0x3a4ad90()*-0.358284);
}

double NNfunction_ss_uLuR::synapse0x3a62a40() {
   return (neuron0x3a4b0d0()*0.00563399);
}

double NNfunction_ss_uLuR::synapse0x3a624d0() {
   return (neuron0x3a4b410()*0.00092778);
}

double NNfunction_ss_uLuR::synapse0x3a62510() {
   return (neuron0x3a4b970()*-0.0113335);
}

double NNfunction_ss_uLuR::synapse0x3a62b90() {
   return (neuron0x3a4bcb0()*-0.0157273);
}

double NNfunction_ss_uLuR::synapse0x3a62bd0() {
   return (neuron0x3a4bff0()*0.00699127);
}

double NNfunction_ss_uLuR::synapse0x3a62c10() {
   return (neuron0x3a4c330()*-0.0157931);
}

double NNfunction_ss_uLuR::synapse0x3a62c50() {
   return (neuron0x3a4c670()*-0.00704418);
}

double NNfunction_ss_uLuR::synapse0x3a62c90() {
   return (neuron0x3a4c9b0()*0.019105);
}

double NNfunction_ss_uLuR::synapse0x3a62cd0() {
   return (neuron0x3a4ccf0()*-0.0051181);
}

double NNfunction_ss_uLuR::synapse0x3a63050() {
   return (neuron0x3a480a0()*-0.0885034);
}

double NNfunction_ss_uLuR::synapse0x3a63090() {
   return (neuron0x3a48350()*-0.0663438);
}

double NNfunction_ss_uLuR::synapse0x3a630d0() {
   return (neuron0x3a48690()*0.155363);
}

double NNfunction_ss_uLuR::synapse0x3a63110() {
   return (neuron0x3a489d0()*-0.186466);
}

double NNfunction_ss_uLuR::synapse0x3a63150() {
   return (neuron0x3a48d10()*-0.00662698);
}

double NNfunction_ss_uLuR::synapse0x3a63190() {
   return (neuron0x3a49050()*-0.717395);
}

double NNfunction_ss_uLuR::synapse0x3a631d0() {
   return (neuron0x3a49390()*-0.0447098);
}

double NNfunction_ss_uLuR::synapse0x3a63210() {
   return (neuron0x3a496d0()*-1.10781);
}

double NNfunction_ss_uLuR::synapse0x3a63250() {
   return (neuron0x3a49a10()*-0.170571);
}

double NNfunction_ss_uLuR::synapse0x3a63290() {
   return (neuron0x3a49d50()*-0.166768);
}

double NNfunction_ss_uLuR::synapse0x3a632d0() {
   return (neuron0x3a4a090()*0.0732559);
}

double NNfunction_ss_uLuR::synapse0x3a63310() {
   return (neuron0x3a4a3d0()*-0.776509);
}

double NNfunction_ss_uLuR::synapse0x3a63350() {
   return (neuron0x3a4a710()*0.549347);
}

double NNfunction_ss_uLuR::synapse0x3a63390() {
   return (neuron0x3a4aa50()*0.643146);
}

double NNfunction_ss_uLuR::synapse0x3a633d0() {
   return (neuron0x3a4ad90()*0.530049);
}

double NNfunction_ss_uLuR::synapse0x3a63410() {
   return (neuron0x3a4b0d0()*-0.0225227);
}

double NNfunction_ss_uLuR::synapse0x3a62ea0() {
   return (neuron0x3a4b410()*-0.490132);
}

double NNfunction_ss_uLuR::synapse0x3a62ee0() {
   return (neuron0x3a4b970()*0.452136);
}

double NNfunction_ss_uLuR::synapse0x3a63560() {
   return (neuron0x3a4bcb0()*-0.164017);
}

double NNfunction_ss_uLuR::synapse0x3a635a0() {
   return (neuron0x3a4bff0()*0.405828);
}

double NNfunction_ss_uLuR::synapse0x3a635e0() {
   return (neuron0x3a4c330()*-0.1287);
}

double NNfunction_ss_uLuR::synapse0x3a63620() {
   return (neuron0x3a4c670()*-0.551621);
}

double NNfunction_ss_uLuR::synapse0x3a63660() {
   return (neuron0x3a4c9b0()*0.32156);
}

double NNfunction_ss_uLuR::synapse0x3a636a0() {
   return (neuron0x3a4ccf0()*0.202281);
}

double NNfunction_ss_uLuR::synapse0x3a63a20() {
   return (neuron0x3a480a0()*0.00786723);
}

double NNfunction_ss_uLuR::synapse0x3a57ff0() {
   return (neuron0x3a48350()*-0.00597717);
}

double NNfunction_ss_uLuR::synapse0x3a58030() {
   return (neuron0x3a48690()*-0.00921688);
}

double NNfunction_ss_uLuR::synapse0x3a58070() {
   return (neuron0x3a489d0()*-5.58832);
}

double NNfunction_ss_uLuR::synapse0x3a582c0() {
   return (neuron0x3a48d10()*-0.00410848);
}

double NNfunction_ss_uLuR::synapse0x3a58300() {
   return (neuron0x3a49050()*0.00191158);
}

double NNfunction_ss_uLuR::synapse0x3a58340() {
   return (neuron0x3a49390()*-0.0212742);
}

double NNfunction_ss_uLuR::synapse0x3a58590() {
   return (neuron0x3a496d0()*0.0212355);
}

double NNfunction_ss_uLuR::synapse0x3a585d0() {
   return (neuron0x3a49a10()*0.0118122);
}

double NNfunction_ss_uLuR::synapse0x3a58820() {
   return (neuron0x3a49d50()*0.0124144);
}

double NNfunction_ss_uLuR::synapse0x3a58860() {
   return (neuron0x3a4a090()*-0.00783199);
}

double NNfunction_ss_uLuR::synapse0x3a588a0() {
   return (neuron0x3a4a3d0()*0.413617);
}

double NNfunction_ss_uLuR::synapse0x3a58af0() {
   return (neuron0x3a4a710()*0.00663725);
}

double NNfunction_ss_uLuR::synapse0x3a58b30() {
   return (neuron0x3a4aa50()*0.00333417);
}

double NNfunction_ss_uLuR::synapse0x3a58d80() {
   return (neuron0x3a4ad90()*0.451649);
}

double NNfunction_ss_uLuR::synapse0x3a58dc0() {
   return (neuron0x3a4b0d0()*0.0201639);
}

double NNfunction_ss_uLuR::synapse0x3a63870() {
   return (neuron0x3a4b410()*0.027449);
}

double NNfunction_ss_uLuR::synapse0x3a638b0() {
   return (neuron0x3a4b970()*0.0230072);
}

double NNfunction_ss_uLuR::synapse0x3a58f10() {
   return (neuron0x3a4bcb0()*-0.00645144);
}

double NNfunction_ss_uLuR::synapse0x3a59420() {
   return (neuron0x3a4bff0()*-0.0134084);
}

double NNfunction_ss_uLuR::synapse0x3a59460() {
   return (neuron0x3a4c330()*-0.0292132);
}

double NNfunction_ss_uLuR::synapse0x3a594a0() {
   return (neuron0x3a4c670()*-0.0111542);
}

double NNfunction_ss_uLuR::synapse0x3a596f0() {
   return (neuron0x3a4c9b0()*0.00207749);
}

double NNfunction_ss_uLuR::synapse0x3a59730() {
   return (neuron0x3a4ccf0()*-0.0157185);
}

double NNfunction_ss_uLuR::synapse0x3a58fe0() {
   return (neuron0x3a480a0()*0.0321004);
}

double NNfunction_ss_uLuR::synapse0x3a59020() {
   return (neuron0x3a48350()*0.694658);
}

double NNfunction_ss_uLuR::synapse0x3a59060() {
   return (neuron0x3a48690()*0.0222598);
}

double NNfunction_ss_uLuR::synapse0x3a590a0() {
   return (neuron0x3a489d0()*-0.421249);
}

double NNfunction_ss_uLuR::synapse0x3a59a20() {
   return (neuron0x3a48d10()*-0.27415);
}

double NNfunction_ss_uLuR::synapse0x3a65d70() {
   return (neuron0x3a49050()*-0.158917);
}

double NNfunction_ss_uLuR::synapse0x3a65db0() {
   return (neuron0x3a49390()*-0.681219);
}

double NNfunction_ss_uLuR::synapse0x3a65df0() {
   return (neuron0x3a496d0()*1.22922);
}

double NNfunction_ss_uLuR::synapse0x3a65e30() {
   return (neuron0x3a49a10()*-0.835082);
}

double NNfunction_ss_uLuR::synapse0x3a65e70() {
   return (neuron0x3a49d50()*0.15785);
}

double NNfunction_ss_uLuR::synapse0x3a65eb0() {
   return (neuron0x3a4a090()*0.399795);
}

double NNfunction_ss_uLuR::synapse0x3a65ef0() {
   return (neuron0x3a4a3d0()*0.125633);
}

double NNfunction_ss_uLuR::synapse0x3a65f30() {
   return (neuron0x3a4a710()*-0.337592);
}

double NNfunction_ss_uLuR::synapse0x3a65f70() {
   return (neuron0x3a4aa50()*-0.315587);
}

double NNfunction_ss_uLuR::synapse0x3a65fb0() {
   return (neuron0x3a4ad90()*-0.839607);
}

double NNfunction_ss_uLuR::synapse0x3a65ff0() {
   return (neuron0x3a4b0d0()*0.41644);
}

double NNfunction_ss_uLuR::synapse0x3a59900() {
   return (neuron0x3a4b410()*0.116611);
}

double NNfunction_ss_uLuR::synapse0x3a59940() {
   return (neuron0x3a4b970()*0.275537);
}

double NNfunction_ss_uLuR::synapse0x3a66140() {
   return (neuron0x3a4bcb0()*0.0556066);
}

double NNfunction_ss_uLuR::synapse0x3a66180() {
   return (neuron0x3a4bff0()*0.988393);
}

double NNfunction_ss_uLuR::synapse0x3a661c0() {
   return (neuron0x3a4c330()*0.0414771);
}

double NNfunction_ss_uLuR::synapse0x3a66200() {
   return (neuron0x3a4c670()*0.345894);
}

double NNfunction_ss_uLuR::synapse0x3a66240() {
   return (neuron0x3a4c9b0()*-0.125669);
}

double NNfunction_ss_uLuR::synapse0x3a66280() {
   return (neuron0x3a4ccf0()*-0.299814);
}

double NNfunction_ss_uLuR::synapse0x3a66600() {
   return (neuron0x3a480a0()*-0.0911525);
}

double NNfunction_ss_uLuR::synapse0x3a66640() {
   return (neuron0x3a48350()*1.18343);
}

double NNfunction_ss_uLuR::synapse0x3a66680() {
   return (neuron0x3a48690()*0.0624239);
}

double NNfunction_ss_uLuR::synapse0x3a666c0() {
   return (neuron0x3a489d0()*0.599712);
}

double NNfunction_ss_uLuR::synapse0x3a66700() {
   return (neuron0x3a48d10()*0.0926626);
}

double NNfunction_ss_uLuR::synapse0x3a66740() {
   return (neuron0x3a49050()*-0.167488);
}

double NNfunction_ss_uLuR::synapse0x3a66780() {
   return (neuron0x3a49390()*-1.14881);
}

double NNfunction_ss_uLuR::synapse0x3a667c0() {
   return (neuron0x3a496d0()*-0.288058);
}

double NNfunction_ss_uLuR::synapse0x3a66800() {
   return (neuron0x3a49a10()*0.606127);
}

double NNfunction_ss_uLuR::synapse0x3a66840() {
   return (neuron0x3a49d50()*0.988988);
}

double NNfunction_ss_uLuR::synapse0x3a66880() {
   return (neuron0x3a4a090()*0.18651);
}

double NNfunction_ss_uLuR::synapse0x3a668c0() {
   return (neuron0x3a4a3d0()*0.561089);
}

double NNfunction_ss_uLuR::synapse0x3a66900() {
   return (neuron0x3a4a710()*-1.51965);
}

double NNfunction_ss_uLuR::synapse0x3a66940() {
   return (neuron0x3a4aa50()*0.529334);
}

double NNfunction_ss_uLuR::synapse0x3a66980() {
   return (neuron0x3a4ad90()*0.337412);
}

double NNfunction_ss_uLuR::synapse0x3a669c0() {
   return (neuron0x3a4b0d0()*-1.24008);
}

double NNfunction_ss_uLuR::synapse0x3a66450() {
   return (neuron0x3a4b410()*0.300786);
}

double NNfunction_ss_uLuR::synapse0x3a66490() {
   return (neuron0x3a4b970()*0.924688);
}

double NNfunction_ss_uLuR::synapse0x3a66b10() {
   return (neuron0x3a4bcb0()*0.00397127);
}

double NNfunction_ss_uLuR::synapse0x3a66b50() {
   return (neuron0x3a4bff0()*-0.635761);
}

double NNfunction_ss_uLuR::synapse0x3a66b90() {
   return (neuron0x3a4c330()*-0.28036);
}

double NNfunction_ss_uLuR::synapse0x3a66bd0() {
   return (neuron0x3a4c670()*0.672343);
}

double NNfunction_ss_uLuR::synapse0x3a66c10() {
   return (neuron0x3a4c9b0()*-0.487884);
}

double NNfunction_ss_uLuR::synapse0x3a66c50() {
   return (neuron0x3a4ccf0()*-0.245171);
}

double NNfunction_ss_uLuR::synapse0x3a66fd0() {
   return (neuron0x3a480a0()*-0.0575638);
}

double NNfunction_ss_uLuR::synapse0x3a67010() {
   return (neuron0x3a48350()*-0.163384);
}

double NNfunction_ss_uLuR::synapse0x3a67050() {
   return (neuron0x3a48690()*-0.578889);
}

double NNfunction_ss_uLuR::synapse0x3a67090() {
   return (neuron0x3a489d0()*0.111763);
}

double NNfunction_ss_uLuR::synapse0x3a670d0() {
   return (neuron0x3a48d10()*0.321517);
}

double NNfunction_ss_uLuR::synapse0x3a67110() {
   return (neuron0x3a49050()*-0.501331);
}

double NNfunction_ss_uLuR::synapse0x3a67150() {
   return (neuron0x3a49390()*-1.24321);
}

double NNfunction_ss_uLuR::synapse0x3a67190() {
   return (neuron0x3a496d0()*0.754154);
}

double NNfunction_ss_uLuR::synapse0x3a671d0() {
   return (neuron0x3a49a10()*-1.30592);
}

double NNfunction_ss_uLuR::synapse0x3a67210() {
   return (neuron0x3a49d50()*-0.673441);
}

double NNfunction_ss_uLuR::synapse0x3a67250() {
   return (neuron0x3a4a090()*-0.821337);
}

double NNfunction_ss_uLuR::synapse0x3a67290() {
   return (neuron0x3a4a3d0()*0.589081);
}

double NNfunction_ss_uLuR::synapse0x3a672d0() {
   return (neuron0x3a4a710()*0.105916);
}

double NNfunction_ss_uLuR::synapse0x3a67310() {
   return (neuron0x3a4aa50()*-0.0917945);
}

double NNfunction_ss_uLuR::synapse0x3a67350() {
   return (neuron0x3a4ad90()*0.62458);
}

double NNfunction_ss_uLuR::synapse0x3a67390() {
   return (neuron0x3a4b0d0()*1.26822);
}

double NNfunction_ss_uLuR::synapse0x3a66e20() {
   return (neuron0x3a4b410()*0.982577);
}

double NNfunction_ss_uLuR::synapse0x3a66e60() {
   return (neuron0x3a4b970()*0.0935145);
}

double NNfunction_ss_uLuR::synapse0x3a674e0() {
   return (neuron0x3a4bcb0()*-0.500381);
}

double NNfunction_ss_uLuR::synapse0x3a67520() {
   return (neuron0x3a4bff0()*-0.493441);
}

double NNfunction_ss_uLuR::synapse0x3a67560() {
   return (neuron0x3a4c330()*-0.784197);
}

double NNfunction_ss_uLuR::synapse0x3a675a0() {
   return (neuron0x3a4c670()*-0.10795);
}

double NNfunction_ss_uLuR::synapse0x3a675e0() {
   return (neuron0x3a4c9b0()*0.662313);
}

double NNfunction_ss_uLuR::synapse0x3a67620() {
   return (neuron0x3a4ccf0()*0.179541);
}

double NNfunction_ss_uLuR::synapse0x3a679a0() {
   return (neuron0x3a480a0()*0.0267205);
}

double NNfunction_ss_uLuR::synapse0x3a679e0() {
   return (neuron0x3a48350()*-0.473928);
}

double NNfunction_ss_uLuR::synapse0x3a67a20() {
   return (neuron0x3a48690()*-0.602753);
}

double NNfunction_ss_uLuR::synapse0x3a67a60() {
   return (neuron0x3a489d0()*0.757983);
}

double NNfunction_ss_uLuR::synapse0x3a67aa0() {
   return (neuron0x3a48d10()*0.128651);
}

double NNfunction_ss_uLuR::synapse0x3a67ae0() {
   return (neuron0x3a49050()*0.507472);
}

double NNfunction_ss_uLuR::synapse0x3a67b20() {
   return (neuron0x3a49390()*0.0400005);
}

double NNfunction_ss_uLuR::synapse0x3a67b60() {
   return (neuron0x3a496d0()*-0.291404);
}

double NNfunction_ss_uLuR::synapse0x3a67ba0() {
   return (neuron0x3a49a10()*-0.592816);
}

double NNfunction_ss_uLuR::synapse0x3a67be0() {
   return (neuron0x3a49d50()*-0.00916366);
}

double NNfunction_ss_uLuR::synapse0x3a67c20() {
   return (neuron0x3a4a090()*0.326163);
}

double NNfunction_ss_uLuR::synapse0x3a67c60() {
   return (neuron0x3a4a3d0()*-0.86333);
}

double NNfunction_ss_uLuR::synapse0x3a67ca0() {
   return (neuron0x3a4a710()*-0.386836);
}

double NNfunction_ss_uLuR::synapse0x3a67ce0() {
   return (neuron0x3a4aa50()*0.814672);
}

double NNfunction_ss_uLuR::synapse0x3a67d20() {
   return (neuron0x3a4ad90()*0.653003);
}

double NNfunction_ss_uLuR::synapse0x3a67d60() {
   return (neuron0x3a4b0d0()*0.598172);
}

double NNfunction_ss_uLuR::synapse0x3a677f0() {
   return (neuron0x3a4b410()*0.0762911);
}

double NNfunction_ss_uLuR::synapse0x3a67830() {
   return (neuron0x3a4b970()*0.965416);
}

double NNfunction_ss_uLuR::synapse0x3a67eb0() {
   return (neuron0x3a4bcb0()*-0.778192);
}

double NNfunction_ss_uLuR::synapse0x3a67ef0() {
   return (neuron0x3a4bff0()*-0.448156);
}

double NNfunction_ss_uLuR::synapse0x3a67f30() {
   return (neuron0x3a4c330()*0.314412);
}

double NNfunction_ss_uLuR::synapse0x3a67f70() {
   return (neuron0x3a4c670()*-0.0402273);
}

double NNfunction_ss_uLuR::synapse0x3a67fb0() {
   return (neuron0x3a4c9b0()*-0.221771);
}

double NNfunction_ss_uLuR::synapse0x3a67ff0() {
   return (neuron0x3a4ccf0()*0.304001);
}

double NNfunction_ss_uLuR::synapse0x3a68370() {
   return (neuron0x3a480a0()*-0.196666);
}

double NNfunction_ss_uLuR::synapse0x3a683b0() {
   return (neuron0x3a48350()*-0.188661);
}

double NNfunction_ss_uLuR::synapse0x3a683f0() {
   return (neuron0x3a48690()*-0.187063);
}

double NNfunction_ss_uLuR::synapse0x3a68430() {
   return (neuron0x3a489d0()*-0.151938);
}

double NNfunction_ss_uLuR::synapse0x3a68470() {
   return (neuron0x3a48d10()*0.399816);
}

double NNfunction_ss_uLuR::synapse0x3a684b0() {
   return (neuron0x3a49050()*0.0531077);
}

double NNfunction_ss_uLuR::synapse0x3a684f0() {
   return (neuron0x3a49390()*0.149582);
}

double NNfunction_ss_uLuR::synapse0x3a68530() {
   return (neuron0x3a496d0()*0.206704);
}

double NNfunction_ss_uLuR::synapse0x3a68570() {
   return (neuron0x3a49a10()*-0.760417);
}

double NNfunction_ss_uLuR::synapse0x3a685b0() {
   return (neuron0x3a49d50()*-0.0626154);
}

double NNfunction_ss_uLuR::synapse0x3a685f0() {
   return (neuron0x3a4a090()*0.385044);
}

double NNfunction_ss_uLuR::synapse0x3a68630() {
   return (neuron0x3a4a3d0()*-0.393006);
}

double NNfunction_ss_uLuR::synapse0x3a68670() {
   return (neuron0x3a4a710()*0.0262457);
}

double NNfunction_ss_uLuR::synapse0x3a686b0() {
   return (neuron0x3a4aa50()*0.369756);
}

double NNfunction_ss_uLuR::synapse0x3a686f0() {
   return (neuron0x3a4ad90()*-0.160725);
}

double NNfunction_ss_uLuR::synapse0x3a68730() {
   return (neuron0x3a4b0d0()*-0.140302);
}

double NNfunction_ss_uLuR::synapse0x3a681c0() {
   return (neuron0x3a4b410()*0.454137);
}

double NNfunction_ss_uLuR::synapse0x3a68200() {
   return (neuron0x3a4b970()*0.110656);
}

double NNfunction_ss_uLuR::synapse0x3a68880() {
   return (neuron0x3a4bcb0()*-0.291569);
}

double NNfunction_ss_uLuR::synapse0x3a688c0() {
   return (neuron0x3a4bff0()*-0.406699);
}

double NNfunction_ss_uLuR::synapse0x3a68900() {
   return (neuron0x3a4c330()*-0.0398006);
}

double NNfunction_ss_uLuR::synapse0x3a68940() {
   return (neuron0x3a4c670()*0.0698785);
}

double NNfunction_ss_uLuR::synapse0x3a68980() {
   return (neuron0x3a4c9b0()*0.131491);
}

double NNfunction_ss_uLuR::synapse0x3a689c0() {
   return (neuron0x3a4ccf0()*-0.293556);
}

double NNfunction_ss_uLuR::synapse0x3a68d40() {
   return (neuron0x3a480a0()*-0.175498);
}

double NNfunction_ss_uLuR::synapse0x3a68d80() {
   return (neuron0x3a48350()*0.0433686);
}

double NNfunction_ss_uLuR::synapse0x3a68dc0() {
   return (neuron0x3a48690()*0.208773);
}

double NNfunction_ss_uLuR::synapse0x3a68e00() {
   return (neuron0x3a489d0()*-0.182581);
}

double NNfunction_ss_uLuR::synapse0x3a68e40() {
   return (neuron0x3a48d10()*-0.0339839);
}

double NNfunction_ss_uLuR::synapse0x3a68e80() {
   return (neuron0x3a49050()*0.413329);
}

double NNfunction_ss_uLuR::synapse0x3a68ec0() {
   return (neuron0x3a49390()*-0.16524);
}

double NNfunction_ss_uLuR::synapse0x3a68f00() {
   return (neuron0x3a496d0()*-0.189927);
}

double NNfunction_ss_uLuR::synapse0x3a68f40() {
   return (neuron0x3a49a10()*0.0760817);
}

double NNfunction_ss_uLuR::synapse0x3a68f80() {
   return (neuron0x3a49d50()*0.218589);
}

double NNfunction_ss_uLuR::synapse0x3a68fc0() {
   return (neuron0x3a4a090()*-0.102287);
}

double NNfunction_ss_uLuR::synapse0x3a69000() {
   return (neuron0x3a4a3d0()*-0.372191);
}

double NNfunction_ss_uLuR::synapse0x3a69040() {
   return (neuron0x3a4a710()*-0.2874);
}

double NNfunction_ss_uLuR::synapse0x3a69080() {
   return (neuron0x3a4aa50()*-0.159416);
}

double NNfunction_ss_uLuR::synapse0x3a690c0() {
   return (neuron0x3a4ad90()*-0.508008);
}

double NNfunction_ss_uLuR::synapse0x3a69100() {
   return (neuron0x3a4b0d0()*0.901143);
}

double NNfunction_ss_uLuR::synapse0x3a68b90() {
   return (neuron0x3a4b410()*0.512347);
}

double NNfunction_ss_uLuR::synapse0x3a68bd0() {
   return (neuron0x3a4b970()*-0.340031);
}

double NNfunction_ss_uLuR::synapse0x3a69250() {
   return (neuron0x3a4bcb0()*-0.562369);
}

double NNfunction_ss_uLuR::synapse0x3a69290() {
   return (neuron0x3a4bff0()*0.254661);
}

double NNfunction_ss_uLuR::synapse0x3a692d0() {
   return (neuron0x3a4c330()*0.0706296);
}

double NNfunction_ss_uLuR::synapse0x3a69310() {
   return (neuron0x3a4c670()*-0.0427768);
}

double NNfunction_ss_uLuR::synapse0x3a69350() {
   return (neuron0x3a4c9b0()*-0.0627882);
}

double NNfunction_ss_uLuR::synapse0x3a69390() {
   return (neuron0x3a4ccf0()*0.130907);
}

double NNfunction_ss_uLuR::synapse0x3a69710() {
   return (neuron0x3a480a0()*-0.0155953);
}

double NNfunction_ss_uLuR::synapse0x3a69750() {
   return (neuron0x3a48350()*0.0013156);
}

double NNfunction_ss_uLuR::synapse0x3a69790() {
   return (neuron0x3a48690()*-0.0472013);
}

double NNfunction_ss_uLuR::synapse0x3a697d0() {
   return (neuron0x3a489d0()*-0.0186537);
}

double NNfunction_ss_uLuR::synapse0x3a69810() {
   return (neuron0x3a48d10()*-0.00943672);
}

double NNfunction_ss_uLuR::synapse0x3a69850() {
   return (neuron0x3a49050()*0.0204582);
}

double NNfunction_ss_uLuR::synapse0x3a69890() {
   return (neuron0x3a49390()*-0.00789384);
}

double NNfunction_ss_uLuR::synapse0x3a698d0() {
   return (neuron0x3a496d0()*0.0161334);
}

double NNfunction_ss_uLuR::synapse0x3a69910() {
   return (neuron0x3a49a10()*0.00354543);
}

double NNfunction_ss_uLuR::synapse0x3a69950() {
   return (neuron0x3a49d50()*-0.00169081);
}

double NNfunction_ss_uLuR::synapse0x3a69990() {
   return (neuron0x3a4a090()*-0.00841479);
}

double NNfunction_ss_uLuR::synapse0x3a699d0() {
   return (neuron0x3a4a3d0()*-0.485779);
}

double NNfunction_ss_uLuR::synapse0x3a69a10() {
   return (neuron0x3a4a710()*0.00169042);
}

double NNfunction_ss_uLuR::synapse0x3a69a50() {
   return (neuron0x3a4aa50()*-0.00522633);
}

double NNfunction_ss_uLuR::synapse0x3a69a90() {
   return (neuron0x3a4ad90()*0.921009);
}

double NNfunction_ss_uLuR::synapse0x3a69ad0() {
   return (neuron0x3a4b0d0()*-0.0116748);
}

double NNfunction_ss_uLuR::synapse0x3a69560() {
   return (neuron0x3a4b410()*-0.0123383);
}

double NNfunction_ss_uLuR::synapse0x3a695a0() {
   return (neuron0x3a4b970()*-0.0234606);
}

double NNfunction_ss_uLuR::synapse0x3a69c20() {
   return (neuron0x3a4bcb0()*-0.00604989);
}

double NNfunction_ss_uLuR::synapse0x3a69c60() {
   return (neuron0x3a4bff0()*0.00932725);
}

double NNfunction_ss_uLuR::synapse0x3a69ca0() {
   return (neuron0x3a4c330()*0.00398984);
}

double NNfunction_ss_uLuR::synapse0x3a69ce0() {
   return (neuron0x3a4c670()*0.00198019);
}

double NNfunction_ss_uLuR::synapse0x3a69d20() {
   return (neuron0x3a4c9b0()*0.0205235);
}

double NNfunction_ss_uLuR::synapse0x3a69d60() {
   return (neuron0x3a4ccf0()*-0.0153359);
}

double NNfunction_ss_uLuR::synapse0x3a6a0e0() {
   return (neuron0x3a480a0()*0.169508);
}

double NNfunction_ss_uLuR::synapse0x3a6a120() {
   return (neuron0x3a48350()*0.583917);
}

double NNfunction_ss_uLuR::synapse0x3a6a160() {
   return (neuron0x3a48690()*-0.289369);
}

double NNfunction_ss_uLuR::synapse0x3a6a1a0() {
   return (neuron0x3a489d0()*-0.565391);
}

double NNfunction_ss_uLuR::synapse0x3a6a1e0() {
   return (neuron0x3a48d10()*0.222024);
}

double NNfunction_ss_uLuR::synapse0x3a6a220() {
   return (neuron0x3a49050()*0.2734);
}

double NNfunction_ss_uLuR::synapse0x3a6a260() {
   return (neuron0x3a49390()*0.174707);
}

double NNfunction_ss_uLuR::synapse0x3a6a2a0() {
   return (neuron0x3a496d0()*-0.022137);
}

double NNfunction_ss_uLuR::synapse0x3a6a2e0() {
   return (neuron0x3a49a10()*0.0386989);
}

double NNfunction_ss_uLuR::synapse0x3a6a320() {
   return (neuron0x3a49d50()*0.00463457);
}

double NNfunction_ss_uLuR::synapse0x3a6a360() {
   return (neuron0x3a4a090()*0.127941);
}

double NNfunction_ss_uLuR::synapse0x3a6a3a0() {
   return (neuron0x3a4a3d0()*-0.813003);
}

double NNfunction_ss_uLuR::synapse0x3a6a3e0() {
   return (neuron0x3a4a710()*0.320501);
}

double NNfunction_ss_uLuR::synapse0x3a6a420() {
   return (neuron0x3a4aa50()*-0.171818);
}

double NNfunction_ss_uLuR::synapse0x3a6a460() {
   return (neuron0x3a4ad90()*0.192497);
}

double NNfunction_ss_uLuR::synapse0x3a6a4a0() {
   return (neuron0x3a4b0d0()*-0.158373);
}

double NNfunction_ss_uLuR::synapse0x3a69f30() {
   return (neuron0x3a4b410()*-0.32446);
}

double NNfunction_ss_uLuR::synapse0x3a69f70() {
   return (neuron0x3a4b970()*-0.0444372);
}

double NNfunction_ss_uLuR::synapse0x3a6a5f0() {
   return (neuron0x3a4bcb0()*0.146455);
}

double NNfunction_ss_uLuR::synapse0x3a6a630() {
   return (neuron0x3a4bff0()*-0.00771198);
}

double NNfunction_ss_uLuR::synapse0x3a6a670() {
   return (neuron0x3a4c330()*0.368298);
}

double NNfunction_ss_uLuR::synapse0x3a6a6b0() {
   return (neuron0x3a4c670()*0.083254);
}

double NNfunction_ss_uLuR::synapse0x3a6a6f0() {
   return (neuron0x3a4c9b0()*0.0826602);
}

double NNfunction_ss_uLuR::synapse0x3a6a730() {
   return (neuron0x3a4ccf0()*-0.0784235);
}

double NNfunction_ss_uLuR::synapse0x3a531e0() {
   return (neuron0x3a480a0()*0.000803992);
}

double NNfunction_ss_uLuR::synapse0x3a53220() {
   return (neuron0x3a48350()*1.55721);
}

double NNfunction_ss_uLuR::synapse0x3a53260() {
   return (neuron0x3a48690()*-1.37992);
}

double NNfunction_ss_uLuR::synapse0x3a532a0() {
   return (neuron0x3a489d0()*-0.530847);
}

double NNfunction_ss_uLuR::synapse0x3a532e0() {
   return (neuron0x3a48d10()*0.289189);
}

double NNfunction_ss_uLuR::synapse0x3a53320() {
   return (neuron0x3a49050()*-0.954317);
}

double NNfunction_ss_uLuR::synapse0x3a53360() {
   return (neuron0x3a49390()*-1.15142);
}

double NNfunction_ss_uLuR::synapse0x3a533a0() {
   return (neuron0x3a496d0()*-0.791994);
}

double NNfunction_ss_uLuR::synapse0x3a6aec0() {
   return (neuron0x3a49a10()*0.176491);
}

double NNfunction_ss_uLuR::synapse0x3a6af00() {
   return (neuron0x3a49d50()*0.785036);
}

double NNfunction_ss_uLuR::synapse0x3a6af40() {
   return (neuron0x3a4a090()*0.126722);
}

double NNfunction_ss_uLuR::synapse0x3a6af80() {
   return (neuron0x3a4a3d0()*0.95008);
}

double NNfunction_ss_uLuR::synapse0x3a6afc0() {
   return (neuron0x3a4a710()*-0.174126);
}

double NNfunction_ss_uLuR::synapse0x3a6b000() {
   return (neuron0x3a4aa50()*-0.833752);
}

double NNfunction_ss_uLuR::synapse0x3a6b040() {
   return (neuron0x3a4ad90()*0.247505);
}

double NNfunction_ss_uLuR::synapse0x3a6b080() {
   return (neuron0x3a4b0d0()*-0.136194);
}

double NNfunction_ss_uLuR::synapse0x3a6a900() {
   return (neuron0x3a4b410()*0.077586);
}

double NNfunction_ss_uLuR::synapse0x3a6a940() {
   return (neuron0x3a4b970()*1.28302);
}

double NNfunction_ss_uLuR::synapse0x3a6b1d0() {
   return (neuron0x3a4bcb0()*0.451097);
}

double NNfunction_ss_uLuR::synapse0x3a6b210() {
   return (neuron0x3a4bff0()*-0.246541);
}

double NNfunction_ss_uLuR::synapse0x3a6b250() {
   return (neuron0x3a4c330()*0.404293);
}

double NNfunction_ss_uLuR::synapse0x3a6b290() {
   return (neuron0x3a4c670()*-0.605646);
}

double NNfunction_ss_uLuR::synapse0x3a6b2d0() {
   return (neuron0x3a4c9b0()*0.229256);
}

double NNfunction_ss_uLuR::synapse0x3a6b310() {
   return (neuron0x3a4ccf0()*0.208846);
}

double NNfunction_ss_uLuR::synapse0x3a6b690() {
   return (neuron0x3a480a0()*0.0611972);
}

double NNfunction_ss_uLuR::synapse0x3a6b6d0() {
   return (neuron0x3a48350()*-0.0363501);
}

double NNfunction_ss_uLuR::synapse0x3a6b710() {
   return (neuron0x3a48690()*0.091329);
}

double NNfunction_ss_uLuR::synapse0x3a6b750() {
   return (neuron0x3a489d0()*1.29531);
}

double NNfunction_ss_uLuR::synapse0x3a6b790() {
   return (neuron0x3a48d10()*0.0195824);
}

double NNfunction_ss_uLuR::synapse0x3a6b7d0() {
   return (neuron0x3a49050()*-0.053544);
}

double NNfunction_ss_uLuR::synapse0x3a6b810() {
   return (neuron0x3a49390()*0.0479308);
}

double NNfunction_ss_uLuR::synapse0x3a6b850() {
   return (neuron0x3a496d0()*-0.0459095);
}

double NNfunction_ss_uLuR::synapse0x3a6b890() {
   return (neuron0x3a49a10()*0.0341118);
}

double NNfunction_ss_uLuR::synapse0x3a6b8d0() {
   return (neuron0x3a49d50()*-0.016408);
}

double NNfunction_ss_uLuR::synapse0x3a6b910() {
   return (neuron0x3a4a090()*0.0825323);
}

double NNfunction_ss_uLuR::synapse0x3a6b950() {
   return (neuron0x3a4a3d0()*-1.44512);
}

double NNfunction_ss_uLuR::synapse0x3a6b990() {
   return (neuron0x3a4a710()*0.00332119);
}

double NNfunction_ss_uLuR::synapse0x3a6b9d0() {
   return (neuron0x3a4aa50()*-0.0313122);
}

double NNfunction_ss_uLuR::synapse0x3a6ba10() {
   return (neuron0x3a4ad90()*0.670564);
}

double NNfunction_ss_uLuR::synapse0x3a6ba50() {
   return (neuron0x3a4b0d0()*0.0886028);
}

double NNfunction_ss_uLuR::synapse0x3a6b4e0() {
   return (neuron0x3a4b410()*-0.0336882);
}

double NNfunction_ss_uLuR::synapse0x3a6b520() {
   return (neuron0x3a4b970()*0.0115437);
}

double NNfunction_ss_uLuR::synapse0x3a6bba0() {
   return (neuron0x3a4bcb0()*-0.04505);
}

double NNfunction_ss_uLuR::synapse0x3a6bbe0() {
   return (neuron0x3a4bff0()*-0.014275);
}

double NNfunction_ss_uLuR::synapse0x3a6bc20() {
   return (neuron0x3a4c330()*0.0449726);
}

double NNfunction_ss_uLuR::synapse0x3a6bc60() {
   return (neuron0x3a4c670()*0.047945);
}

double NNfunction_ss_uLuR::synapse0x3a6bca0() {
   return (neuron0x3a4c9b0()*-0.0514776);
}

double NNfunction_ss_uLuR::synapse0x3a6bce0() {
   return (neuron0x3a4ccf0()*0.0370076);
}

double NNfunction_ss_uLuR::synapse0x3a6c060() {
   return (neuron0x3a480a0()*-0.170917);
}

double NNfunction_ss_uLuR::synapse0x3a6c0a0() {
   return (neuron0x3a48350()*0.460722);
}

double NNfunction_ss_uLuR::synapse0x3a6c0e0() {
   return (neuron0x3a48690()*-1.09084);
}

double NNfunction_ss_uLuR::synapse0x3a6c120() {
   return (neuron0x3a489d0()*0.385361);
}

double NNfunction_ss_uLuR::synapse0x3a6c160() {
   return (neuron0x3a48d10()*-0.407397);
}

double NNfunction_ss_uLuR::synapse0x3a6c1a0() {
   return (neuron0x3a49050()*-1.2019);
}

double NNfunction_ss_uLuR::synapse0x3a6c1e0() {
   return (neuron0x3a49390()*0.181878);
}

double NNfunction_ss_uLuR::synapse0x3a6c220() {
   return (neuron0x3a496d0()*-0.00989819);
}

double NNfunction_ss_uLuR::synapse0x3a6c260() {
   return (neuron0x3a49a10()*-0.200196);
}

double NNfunction_ss_uLuR::synapse0x3a6c2a0() {
   return (neuron0x3a49d50()*0.582104);
}

double NNfunction_ss_uLuR::synapse0x3a6c2e0() {
   return (neuron0x3a4a090()*-0.0586064);
}

double NNfunction_ss_uLuR::synapse0x3a6c320() {
   return (neuron0x3a4a3d0()*-1.73914);
}

double NNfunction_ss_uLuR::synapse0x3a6c360() {
   return (neuron0x3a4a710()*0.377412);
}

double NNfunction_ss_uLuR::synapse0x3a6c3a0() {
   return (neuron0x3a4aa50()*-0.0299735);
}

double NNfunction_ss_uLuR::synapse0x3a6c3e0() {
   return (neuron0x3a4ad90()*1.89827);
}

double NNfunction_ss_uLuR::synapse0x3a6c420() {
   return (neuron0x3a4b0d0()*-0.0327588);
}

double NNfunction_ss_uLuR::synapse0x3a6beb0() {
   return (neuron0x3a4b410()*0.386449);
}

double NNfunction_ss_uLuR::synapse0x3a6bef0() {
   return (neuron0x3a4b970()*-0.199824);
}

double NNfunction_ss_uLuR::synapse0x3a5ca20() {
   return (neuron0x3a4bcb0()*0.853148);
}

double NNfunction_ss_uLuR::synapse0x3a5ca60() {
   return (neuron0x3a4bff0()*0.0664517);
}

double NNfunction_ss_uLuR::synapse0x3a5caa0() {
   return (neuron0x3a4c330()*0.0348374);
}

double NNfunction_ss_uLuR::synapse0x3a5cae0() {
   return (neuron0x3a4c670()*-0.227224);
}

double NNfunction_ss_uLuR::synapse0x3a5cb20() {
   return (neuron0x3a4c9b0()*0.193654);
}

double NNfunction_ss_uLuR::synapse0x3a5cb60() {
   return (neuron0x3a4ccf0()*0.147299);
}

double NNfunction_ss_uLuR::synapse0x3a5cee0() {
   return (neuron0x3a480a0()*0.479063);
}

double NNfunction_ss_uLuR::synapse0x3a5cf20() {
   return (neuron0x3a48350()*0.0124714);
}

double NNfunction_ss_uLuR::synapse0x3a5cf60() {
   return (neuron0x3a48690()*-0.319354);
}

double NNfunction_ss_uLuR::synapse0x3a5cfa0() {
   return (neuron0x3a489d0()*0.172566);
}

double NNfunction_ss_uLuR::synapse0x3a5cfe0() {
   return (neuron0x3a48d10()*0.201503);
}

double NNfunction_ss_uLuR::synapse0x3a5d020() {
   return (neuron0x3a49050()*0.240085);
}

double NNfunction_ss_uLuR::synapse0x3a5d060() {
   return (neuron0x3a49390()*-0.494672);
}

double NNfunction_ss_uLuR::synapse0x3a5d0a0() {
   return (neuron0x3a496d0()*-0.0643169);
}

double NNfunction_ss_uLuR::synapse0x3a5d0e0() {
   return (neuron0x3a49a10()*-0.331394);
}

double NNfunction_ss_uLuR::synapse0x3a5d120() {
   return (neuron0x3a49d50()*0.0121064);
}

double NNfunction_ss_uLuR::synapse0x3a5d160() {
   return (neuron0x3a4a090()*-0.487528);
}

double NNfunction_ss_uLuR::synapse0x3a5d1a0() {
   return (neuron0x3a4a3d0()*-0.0487301);
}

double NNfunction_ss_uLuR::synapse0x3a5d1e0() {
   return (neuron0x3a4a710()*-0.147124);
}

double NNfunction_ss_uLuR::synapse0x3a5d220() {
   return (neuron0x3a4aa50()*-0.0690601);
}

double NNfunction_ss_uLuR::synapse0x3a5d260() {
   return (neuron0x3a4ad90()*0.339827);
}

double NNfunction_ss_uLuR::synapse0x3a5d2a0() {
   return (neuron0x3a4b0d0()*0.0615917);
}

double NNfunction_ss_uLuR::synapse0x3a5cd30() {
   return (neuron0x3a4b410()*-0.0585973);
}

double NNfunction_ss_uLuR::synapse0x3a5cd70() {
   return (neuron0x3a4b970()*0.205118);
}

double NNfunction_ss_uLuR::synapse0x3a5d3f0() {
   return (neuron0x3a4bcb0()*-0.0335469);
}

double NNfunction_ss_uLuR::synapse0x3a5d430() {
   return (neuron0x3a4bff0()*-0.0687365);
}

double NNfunction_ss_uLuR::synapse0x3a5d470() {
   return (neuron0x3a4c330()*0.509387);
}

double NNfunction_ss_uLuR::synapse0x3a5d4b0() {
   return (neuron0x3a4c670()*-0.217669);
}

double NNfunction_ss_uLuR::synapse0x3a5d4f0() {
   return (neuron0x3a4c9b0()*-0.146009);
}

double NNfunction_ss_uLuR::synapse0x3a5d530() {
   return (neuron0x3a4ccf0()*0.104241);
}

double NNfunction_ss_uLuR::synapse0x3a5d8b0() {
   return (neuron0x3a480a0()*0.232584);
}

double NNfunction_ss_uLuR::synapse0x3a5d8f0() {
   return (neuron0x3a48350()*-0.442974);
}

double NNfunction_ss_uLuR::synapse0x3a5d930() {
   return (neuron0x3a48690()*-0.0718507);
}

double NNfunction_ss_uLuR::synapse0x3a5d970() {
   return (neuron0x3a489d0()*0.843846);
}

double NNfunction_ss_uLuR::synapse0x3a5d9b0() {
   return (neuron0x3a48d10()*1.06258);
}

double NNfunction_ss_uLuR::synapse0x3a5d9f0() {
   return (neuron0x3a49050()*-0.137675);
}

double NNfunction_ss_uLuR::synapse0x3a5da30() {
   return (neuron0x3a49390()*-0.0232031);
}

double NNfunction_ss_uLuR::synapse0x3a5da70() {
   return (neuron0x3a496d0()*0.863435);
}

double NNfunction_ss_uLuR::synapse0x3a5dab0() {
   return (neuron0x3a49a10()*0.459007);
}

double NNfunction_ss_uLuR::synapse0x3a5daf0() {
   return (neuron0x3a49d50()*0.0533025);
}

double NNfunction_ss_uLuR::synapse0x3a5db30() {
   return (neuron0x3a4a090()*0.331709);
}

double NNfunction_ss_uLuR::synapse0x3a5db70() {
   return (neuron0x3a4a3d0()*-0.201177);
}

double NNfunction_ss_uLuR::synapse0x3a5dbb0() {
   return (neuron0x3a4a710()*0.170985);
}

double NNfunction_ss_uLuR::synapse0x3a5dbf0() {
   return (neuron0x3a4aa50()*-0.0300106);
}

double NNfunction_ss_uLuR::synapse0x3a5dc30() {
   return (neuron0x3a4ad90()*-0.29427);
}

double NNfunction_ss_uLuR::synapse0x3a5dc70() {
   return (neuron0x3a4b0d0()*0.552249);
}

double NNfunction_ss_uLuR::synapse0x3a5d700() {
   return (neuron0x3a4b410()*0.172481);
}

double NNfunction_ss_uLuR::synapse0x3a5d740() {
   return (neuron0x3a4b970()*-0.00414296);
}

double NNfunction_ss_uLuR::synapse0x3a5ddc0() {
   return (neuron0x3a4bcb0()*-0.786458);
}

double NNfunction_ss_uLuR::synapse0x3a5de00() {
   return (neuron0x3a4bff0()*-0.809726);
}

double NNfunction_ss_uLuR::synapse0x3a5de40() {
   return (neuron0x3a4c330()*0.128455);
}

double NNfunction_ss_uLuR::synapse0x3a5de80() {
   return (neuron0x3a4c670()*-0.427286);
}

double NNfunction_ss_uLuR::synapse0x3a5dec0() {
   return (neuron0x3a4c9b0()*0.328155);
}

double NNfunction_ss_uLuR::synapse0x3a5df00() {
   return (neuron0x3a4ccf0()*0.00174602);
}

double NNfunction_ss_uLuR::synapse0x3a5e280() {
   return (neuron0x3a480a0()*-0.16389);
}

double NNfunction_ss_uLuR::synapse0x3a5e2c0() {
   return (neuron0x3a48350()*-0.179222);
}

double NNfunction_ss_uLuR::synapse0x3a5e300() {
   return (neuron0x3a48690()*-0.00145715);
}

double NNfunction_ss_uLuR::synapse0x3a5e340() {
   return (neuron0x3a489d0()*0.0923433);
}

double NNfunction_ss_uLuR::synapse0x3a5e380() {
   return (neuron0x3a48d10()*0.629177);
}

double NNfunction_ss_uLuR::synapse0x3a5e3c0() {
   return (neuron0x3a49050()*-0.593403);
}

double NNfunction_ss_uLuR::synapse0x3a5e400() {
   return (neuron0x3a49390()*-0.188697);
}

double NNfunction_ss_uLuR::synapse0x3a5e440() {
   return (neuron0x3a496d0()*0.314131);
}

double NNfunction_ss_uLuR::synapse0x3a5e480() {
   return (neuron0x3a49a10()*1.04642);
}

double NNfunction_ss_uLuR::synapse0x3a5e4c0() {
   return (neuron0x3a49d50()*0.201969);
}

double NNfunction_ss_uLuR::synapse0x3a5e500() {
   return (neuron0x3a4a090()*-0.272358);
}

double NNfunction_ss_uLuR::synapse0x3a5e540() {
   return (neuron0x3a4a3d0()*0.749106);
}

double NNfunction_ss_uLuR::synapse0x3a5e580() {
   return (neuron0x3a4a710()*-0.444847);
}

double NNfunction_ss_uLuR::synapse0x3a5e5c0() {
   return (neuron0x3a4aa50()*0.460507);
}

double NNfunction_ss_uLuR::synapse0x3a5e600() {
   return (neuron0x3a4ad90()*0.190265);
}

double NNfunction_ss_uLuR::synapse0x3a5e640() {
   return (neuron0x3a4b0d0()*0.222091);
}

double NNfunction_ss_uLuR::synapse0x3a5e0d0() {
   return (neuron0x3a4b410()*0.340253);
}

double NNfunction_ss_uLuR::synapse0x3a5e110() {
   return (neuron0x3a4b970()*-0.0407477);
}

double NNfunction_ss_uLuR::synapse0x3a5e790() {
   return (neuron0x3a4bcb0()*0.13543);
}

double NNfunction_ss_uLuR::synapse0x3a5e7d0() {
   return (neuron0x3a4bff0()*-0.163967);
}

double NNfunction_ss_uLuR::synapse0x3a5e810() {
   return (neuron0x3a4c330()*-0.635268);
}

double NNfunction_ss_uLuR::synapse0x3a5e850() {
   return (neuron0x3a4c670()*0.209668);
}

double NNfunction_ss_uLuR::synapse0x3a5e890() {
   return (neuron0x3a4c9b0()*-0.543572);
}

double NNfunction_ss_uLuR::synapse0x3a5e8d0() {
   return (neuron0x3a4ccf0()*0.261598);
}

double NNfunction_ss_uLuR::synapse0x3a707a0() {
   return (neuron0x3a480a0()*-0.0039461);
}

double NNfunction_ss_uLuR::synapse0x3a707e0() {
   return (neuron0x3a48350()*-0.00828349);
}

double NNfunction_ss_uLuR::synapse0x3a70820() {
   return (neuron0x3a48690()*-0.0762642);
}

double NNfunction_ss_uLuR::synapse0x3a70860() {
   return (neuron0x3a489d0()*0.0839605);
}

double NNfunction_ss_uLuR::synapse0x3a708a0() {
   return (neuron0x3a48d10()*0.0130243);
}

double NNfunction_ss_uLuR::synapse0x3a708e0() {
   return (neuron0x3a49050()*-0.0231963);
}

double NNfunction_ss_uLuR::synapse0x3a70920() {
   return (neuron0x3a49390()*-0.00783866);
}

double NNfunction_ss_uLuR::synapse0x3a70960() {
   return (neuron0x3a496d0()*-0.0172294);
}

double NNfunction_ss_uLuR::synapse0x3a709a0() {
   return (neuron0x3a49a10()*-0.00897516);
}

double NNfunction_ss_uLuR::synapse0x3a709e0() {
   return (neuron0x3a49d50()*0.0138088);
}

double NNfunction_ss_uLuR::synapse0x3a70a20() {
   return (neuron0x3a4a090()*0.0138632);
}

double NNfunction_ss_uLuR::synapse0x3a70a60() {
   return (neuron0x3a4a3d0()*0.515871);
}

double NNfunction_ss_uLuR::synapse0x3a70aa0() {
   return (neuron0x3a4a710()*-0.00105593);
}

double NNfunction_ss_uLuR::synapse0x3a70ae0() {
   return (neuron0x3a4aa50()*-0.0035395);
}

double NNfunction_ss_uLuR::synapse0x3a70b20() {
   return (neuron0x3a4ad90()*0.435282);
}

double NNfunction_ss_uLuR::synapse0x3a70b60() {
   return (neuron0x3a4b0d0()*0.0175758);
}

double NNfunction_ss_uLuR::synapse0x3a5e910() {
   return (neuron0x3a4b410()*0.0003503);
}

double NNfunction_ss_uLuR::synapse0x3a5e950() {
   return (neuron0x3a4b970()*0.0479467);
}

double NNfunction_ss_uLuR::synapse0x3a70cb0() {
   return (neuron0x3a4bcb0()*0.0204225);
}

double NNfunction_ss_uLuR::synapse0x3a70cf0() {
   return (neuron0x3a4bff0()*-0.0238262);
}

double NNfunction_ss_uLuR::synapse0x3a70d30() {
   return (neuron0x3a4c330()*-0.00705366);
}

double NNfunction_ss_uLuR::synapse0x3a70d70() {
   return (neuron0x3a4c670()*-0.0105041);
}

double NNfunction_ss_uLuR::synapse0x3a70db0() {
   return (neuron0x3a4c9b0()*-0.0270047);
}

double NNfunction_ss_uLuR::synapse0x3a70df0() {
   return (neuron0x3a4ccf0()*0.0493456);
}

double NNfunction_ss_uLuR::synapse0x3a71170() {
   return (neuron0x3a480a0()*-0.199846);
}

double NNfunction_ss_uLuR::synapse0x3a711b0() {
   return (neuron0x3a48350()*-0.00929423);
}

double NNfunction_ss_uLuR::synapse0x3a711f0() {
   return (neuron0x3a48690()*0.195881);
}

double NNfunction_ss_uLuR::synapse0x3a71230() {
   return (neuron0x3a489d0()*-0.457712);
}

double NNfunction_ss_uLuR::synapse0x3a71270() {
   return (neuron0x3a48d10()*-0.128854);
}

double NNfunction_ss_uLuR::synapse0x3a712b0() {
   return (neuron0x3a49050()*-0.0163252);
}

double NNfunction_ss_uLuR::synapse0x3a712f0() {
   return (neuron0x3a49390()*-0.160497);
}

double NNfunction_ss_uLuR::synapse0x3a71330() {
   return (neuron0x3a496d0()*-0.155588);
}

double NNfunction_ss_uLuR::synapse0x3a71370() {
   return (neuron0x3a49a10()*0.374403);
}

double NNfunction_ss_uLuR::synapse0x3a713b0() {
   return (neuron0x3a49d50()*-0.021817);
}

double NNfunction_ss_uLuR::synapse0x3a713f0() {
   return (neuron0x3a4a090()*0.149757);
}

double NNfunction_ss_uLuR::synapse0x3a71430() {
   return (neuron0x3a4a3d0()*-0.548717);
}

double NNfunction_ss_uLuR::synapse0x3a71470() {
   return (neuron0x3a4a710()*-0.847165);
}

double NNfunction_ss_uLuR::synapse0x3a714b0() {
   return (neuron0x3a4aa50()*0.130115);
}

double NNfunction_ss_uLuR::synapse0x3a714f0() {
   return (neuron0x3a4ad90()*0.264692);
}

double NNfunction_ss_uLuR::synapse0x3a71530() {
   return (neuron0x3a4b0d0()*-0.392013);
}

double NNfunction_ss_uLuR::synapse0x3a70fc0() {
   return (neuron0x3a4b410()*-0.241692);
}

double NNfunction_ss_uLuR::synapse0x3a71000() {
   return (neuron0x3a4b970()*-0.00267829);
}

double NNfunction_ss_uLuR::synapse0x3a71680() {
   return (neuron0x3a4bcb0()*0.350064);
}

double NNfunction_ss_uLuR::synapse0x3a716c0() {
   return (neuron0x3a4bff0()*0.148752);
}

double NNfunction_ss_uLuR::synapse0x3a71700() {
   return (neuron0x3a4c330()*-0.257904);
}

double NNfunction_ss_uLuR::synapse0x3a71740() {
   return (neuron0x3a4c670()*0.00367653);
}

double NNfunction_ss_uLuR::synapse0x3a71780() {
   return (neuron0x3a4c9b0()*0.152923);
}

double NNfunction_ss_uLuR::synapse0x3a717c0() {
   return (neuron0x3a4ccf0()*0.186688);
}

double NNfunction_ss_uLuR::synapse0x3a71b40() {
   return (neuron0x3a480a0()*-0.00814965);
}

double NNfunction_ss_uLuR::synapse0x3a71b80() {
   return (neuron0x3a48350()*0.127948);
}

double NNfunction_ss_uLuR::synapse0x3a71bc0() {
   return (neuron0x3a48690()*0.309464);
}

double NNfunction_ss_uLuR::synapse0x3a71c00() {
   return (neuron0x3a489d0()*-0.027166);
}

double NNfunction_ss_uLuR::synapse0x3a71c40() {
   return (neuron0x3a48d10()*-0.0508102);
}

double NNfunction_ss_uLuR::synapse0x3a71c80() {
   return (neuron0x3a49050()*-0.31637);
}

double NNfunction_ss_uLuR::synapse0x3a71cc0() {
   return (neuron0x3a49390()*0.28062);
}

double NNfunction_ss_uLuR::synapse0x3a71d00() {
   return (neuron0x3a496d0()*-0.00422829);
}

double NNfunction_ss_uLuR::synapse0x3a71d40() {
   return (neuron0x3a49a10()*-0.141092);
}

double NNfunction_ss_uLuR::synapse0x3a71d80() {
   return (neuron0x3a49d50()*0.0360377);
}

double NNfunction_ss_uLuR::synapse0x3a71dc0() {
   return (neuron0x3a4a090()*0.209654);
}

double NNfunction_ss_uLuR::synapse0x3a71e00() {
   return (neuron0x3a4a3d0()*-0.21228);
}

double NNfunction_ss_uLuR::synapse0x3a71e40() {
   return (neuron0x3a4a710()*0.0381133);
}

double NNfunction_ss_uLuR::synapse0x3a71e80() {
   return (neuron0x3a4aa50()*0.0633571);
}

double NNfunction_ss_uLuR::synapse0x3a71ec0() {
   return (neuron0x3a4ad90()*-0.212196);
}

double NNfunction_ss_uLuR::synapse0x3a71f00() {
   return (neuron0x3a4b0d0()*0.0692325);
}

double NNfunction_ss_uLuR::synapse0x3a71990() {
   return (neuron0x3a4b410()*-0.271412);
}

double NNfunction_ss_uLuR::synapse0x3a719d0() {
   return (neuron0x3a4b970()*-0.073888);
}

double NNfunction_ss_uLuR::synapse0x3a72050() {
   return (neuron0x3a4bcb0()*0.165932);
}

double NNfunction_ss_uLuR::synapse0x3a72090() {
   return (neuron0x3a4bff0()*0.0726534);
}

double NNfunction_ss_uLuR::synapse0x3a720d0() {
   return (neuron0x3a4c330()*0.0111394);
}

double NNfunction_ss_uLuR::synapse0x3a72110() {
   return (neuron0x3a4c670()*0.262264);
}

double NNfunction_ss_uLuR::synapse0x3a72150() {
   return (neuron0x3a4c9b0()*0.0573739);
}

double NNfunction_ss_uLuR::synapse0x3a72190() {
   return (neuron0x3a4ccf0()*0.219909);
}

double NNfunction_ss_uLuR::synapse0x3a72510() {
   return (neuron0x3a480a0()*0.0175818);
}

double NNfunction_ss_uLuR::synapse0x3a72550() {
   return (neuron0x3a48350()*-0.37333);
}

double NNfunction_ss_uLuR::synapse0x3a72590() {
   return (neuron0x3a48690()*0.415295);
}

double NNfunction_ss_uLuR::synapse0x3a725d0() {
   return (neuron0x3a489d0()*-0.117944);
}

double NNfunction_ss_uLuR::synapse0x3a72610() {
   return (neuron0x3a48d10()*0.0827866);
}

double NNfunction_ss_uLuR::synapse0x3a72650() {
   return (neuron0x3a49050()*-0.0495493);
}

double NNfunction_ss_uLuR::synapse0x3a72690() {
   return (neuron0x3a49390()*-0.0365115);
}

double NNfunction_ss_uLuR::synapse0x3a726d0() {
   return (neuron0x3a496d0()*-0.354078);
}

double NNfunction_ss_uLuR::synapse0x3a72710() {
   return (neuron0x3a49a10()*0.114239);
}

double NNfunction_ss_uLuR::synapse0x3a72750() {
   return (neuron0x3a49d50()*0.236492);
}

double NNfunction_ss_uLuR::synapse0x3a72790() {
   return (neuron0x3a4a090()*-0.0987142);
}

double NNfunction_ss_uLuR::synapse0x3a727d0() {
   return (neuron0x3a4a3d0()*-0.662265);
}

double NNfunction_ss_uLuR::synapse0x3a72810() {
   return (neuron0x3a4a710()*0.552128);
}

double NNfunction_ss_uLuR::synapse0x3a72850() {
   return (neuron0x3a4aa50()*-0.215186);
}

double NNfunction_ss_uLuR::synapse0x3a72890() {
   return (neuron0x3a4ad90()*-1.305);
}

double NNfunction_ss_uLuR::synapse0x3a728d0() {
   return (neuron0x3a4b0d0()*-0.249419);
}

double NNfunction_ss_uLuR::synapse0x3a72360() {
   return (neuron0x3a4b410()*-0.135934);
}

double NNfunction_ss_uLuR::synapse0x3a723a0() {
   return (neuron0x3a4b970()*-0.0587152);
}

double NNfunction_ss_uLuR::synapse0x3a72a20() {
   return (neuron0x3a4bcb0()*2.20099);
}

double NNfunction_ss_uLuR::synapse0x3a72a60() {
   return (neuron0x3a4bff0()*0.0634295);
}

double NNfunction_ss_uLuR::synapse0x3a72aa0() {
   return (neuron0x3a4c330()*0.0304752);
}

double NNfunction_ss_uLuR::synapse0x3a72ae0() {
   return (neuron0x3a4c670()*-0.262502);
}

double NNfunction_ss_uLuR::synapse0x3a72b20() {
   return (neuron0x3a4c9b0()*0.237876);
}

double NNfunction_ss_uLuR::synapse0x3a72b60() {
   return (neuron0x3a4ccf0()*-0.226284);
}

double NNfunction_ss_uLuR::synapse0x3812980() {
   return (neuron0x3a4d160()*0.345427);
}

double NNfunction_ss_uLuR::synapse0x38129c0() {
   return (neuron0x3a4d9a0()*0.0534343);
}

double NNfunction_ss_uLuR::synapse0x3a4f510() {
   return (neuron0x3a4e480()*0.020199);
}

double NNfunction_ss_uLuR::synapse0x3a4f550() {
   return (neuron0x3a4df20()*-0.167877);
}

double NNfunction_ss_uLuR::synapse0x3a50fe0() {
   return (neuron0x3a4f260()*-0.0689381);
}

double NNfunction_ss_uLuR::synapse0x3a51020() {
   return (neuron0x3a50d30()*-0.0212603);
}

double NNfunction_ss_uLuR::synapse0x3a51db0() {
   return (neuron0x3a51b00()*-0.158326);
}

double NNfunction_ss_uLuR::synapse0x3a51df0() {
   return (neuron0x3a524d0()*-0.161692);
}

double NNfunction_ss_uLuR::synapse0x3a52780() {
   return (neuron0x3a52ea0()*0.360099);
}

double NNfunction_ss_uLuR::synapse0x3a527c0() {
   return (neuron0x3a53980()*-0.0608727);
}

double NNfunction_ss_uLuR::synapse0x3a53150() {
   return (neuron0x3a54350()*-0.00459247);
}

double NNfunction_ss_uLuR::synapse0x3a53190() {
   return (neuron0x3a51430()*0.130665);
}

double NNfunction_ss_uLuR::synapse0x3a53c30() {
   return (neuron0x3a55f00()*-0.0968841);
}

double NNfunction_ss_uLuR::synapse0x3a53c70() {
   return (neuron0x3a568d0()*2.28062);
}

double NNfunction_ss_uLuR::synapse0x3a54600() {
   return (neuron0x3a572a0()*0.0999599);
}

double NNfunction_ss_uLuR::synapse0x3a54640() {
   return (neuron0x3a57c70()*-0.184387);
}

double NNfunction_ss_uLuR::synapse0x3a516e0() {
   return (neuron0x3a59a80()*0.0721127);
}

double NNfunction_ss_uLuR::synapse0x3a51720() {
   return (neuron0x3a59d60()*0.151969);
}

double NNfunction_ss_uLuR::synapse0x3a561b0() {
   return (neuron0x3a5a730()*-0.472988);
}

double NNfunction_ss_uLuR::synapse0x3a561f0() {
   return (neuron0x3a5b100()*0.000595653);
}

double NNfunction_ss_uLuR::synapse0x3a56b80() {
   return (neuron0x3a5bad0()*-0.0803836);
}

double NNfunction_ss_uLuR::synapse0x3a56bc0() {
   return (neuron0x3a5c4a0()*-0.191787);
}

double NNfunction_ss_uLuR::synapse0x3a57550() {
   return (neuron0x3a54ff0()*0.294305);
}

double NNfunction_ss_uLuR::synapse0x3a57590() {
   return (neuron0x3a559c0()*0.068237);
}

double NNfunction_ss_uLuR::synapse0x3a57f20() {
   return (neuron0x3a5f230()*0.282029);
}

double NNfunction_ss_uLuR::synapse0x3a57f60() {
   return (neuron0x3a5fc00()*-0.0592894);
}

double NNfunction_ss_uLuR::synapse0x3a4afb0() {
   return (neuron0x3a605d0()*-0.652341);
}

double NNfunction_ss_uLuR::synapse0x3a4aff0() {
   return (neuron0x3a60fa0()*0.478664);
}

double NNfunction_ss_uLuR::synapse0x3a5a010() {
   return (neuron0x3a61970()*-0.793177);
}

double NNfunction_ss_uLuR::synapse0x3a5a050() {
   return (neuron0x3a62340()*-4.28032);
}

double NNfunction_ss_uLuR::synapse0x3a5a9e0() {
   return (neuron0x3a62d10()*-0.118585);
}

double NNfunction_ss_uLuR::synapse0x3a5aa20() {
   return (neuron0x3a636e0()*4.66693);
}

double NNfunction_ss_uLuR::synapse0x3a5b3b0() {
   return (neuron0x3a59770()*-0.0880661);
}

double NNfunction_ss_uLuR::synapse0x3a5b3f0() {
   return (neuron0x3a662c0()*-0.0163677);
}

double NNfunction_ss_uLuR::synapse0x3a5bd80() {
   return (neuron0x3a66c90()*-0.0325758);
}

double NNfunction_ss_uLuR::synapse0x3a5bdc0() {
   return (neuron0x3a67660()*0.0299831);
}

double NNfunction_ss_uLuR::synapse0x3a5c750() {
   return (neuron0x3a68030()*-0.231087);
}

double NNfunction_ss_uLuR::synapse0x3a5c790() {
   return (neuron0x3a68a00()*-0.0225056);
}

double NNfunction_ss_uLuR::synapse0x3a552a0() {
   return (neuron0x3a693d0()*1.26879);
}

double NNfunction_ss_uLuR::synapse0x3a552e0() {
   return (neuron0x3a69da0()*-0.0929101);
}

double NNfunction_ss_uLuR::synapse0x3a5eb50() {
   return (neuron0x3a6a770()*-0.0495685);
}

double NNfunction_ss_uLuR::synapse0x3a5eb90() {
   return (neuron0x3a6b350()*1.00079);
}

double NNfunction_ss_uLuR::synapse0x3a5f4e0() {
   return (neuron0x3a6bd20()*0.106857);
}

double NNfunction_ss_uLuR::synapse0x3a5f520() {
   return (neuron0x3a5cba0()*0.256187);
}

double NNfunction_ss_uLuR::synapse0x3a5feb0() {
   return (neuron0x3a5d570()*0.0239793);
}

double NNfunction_ss_uLuR::synapse0x3a5fef0() {
   return (neuron0x3a5df40()*-0.156394);
}

double NNfunction_ss_uLuR::synapse0x3a60880() {
   return (neuron0x3a70580()*1.385);
}

double NNfunction_ss_uLuR::synapse0x3a608c0() {
   return (neuron0x3a70e30()*-0.125776);
}

double NNfunction_ss_uLuR::synapse0x3a61250() {
   return (neuron0x3a71800()*0.0345477);
}

double NNfunction_ss_uLuR::synapse0x3a61290() {
   return (neuron0x3a721d0()*0.0176163);
}

double NNfunction_ss_uLuR::synapse0x3a63990() {
   return (neuron0x3a4d160()*-0.988624);
}

double NNfunction_ss_uLuR::synapse0x3a639d0() {
   return (neuron0x3a4d9a0()*-1.05568);
}

double NNfunction_ss_uLuR::synapse0x3a58f50() {
   return (neuron0x3a4e480()*1.09083);
}

double NNfunction_ss_uLuR::synapse0x3a58f90() {
   return (neuron0x3a4df20()*0.719748);
}

double NNfunction_ss_uLuR::synapse0x3a66570() {
   return (neuron0x3a4f260()*1.44116);
}

double NNfunction_ss_uLuR::synapse0x3a665b0() {
   return (neuron0x3a50d30()*-1.09083);
}

double NNfunction_ss_uLuR::synapse0x3a66f40() {
   return (neuron0x3a51b00()*1.35117);
}

double NNfunction_ss_uLuR::synapse0x3a66f80() {
   return (neuron0x3a524d0()*1.25923);
}

double NNfunction_ss_uLuR::synapse0x3a67910() {
   return (neuron0x3a52ea0()*1.26952);
}

double NNfunction_ss_uLuR::synapse0x3a67950() {
   return (neuron0x3a53980()*1.2286);
}

double NNfunction_ss_uLuR::synapse0x3a682e0() {
   return (neuron0x3a54350()*-1.28016);
}

double NNfunction_ss_uLuR::synapse0x3a68320() {
   return (neuron0x3a51430()*-0.942989);
}

double NNfunction_ss_uLuR::synapse0x3a68cb0() {
   return (neuron0x3a55f00()*1.5412);
}

double NNfunction_ss_uLuR::synapse0x3a68cf0() {
   return (neuron0x3a568d0()*1.53378);
}

double NNfunction_ss_uLuR::synapse0x3a69680() {
   return (neuron0x3a572a0()*-0.903338);
}

double NNfunction_ss_uLuR::synapse0x3a696c0() {
   return (neuron0x3a57c70()*0.451353);
}

double NNfunction_ss_uLuR::synapse0x3a6a050() {
   return (neuron0x3a59a80()*-0.836503);
}

double NNfunction_ss_uLuR::synapse0x3a6a090() {
   return (neuron0x3a59d60()*-1.37711);
}

double NNfunction_ss_uLuR::synapse0x3a6aa20() {
   return (neuron0x3a5a730()*1.24556);
}

double NNfunction_ss_uLuR::synapse0x3a6aa60() {
   return (neuron0x3a5b100()*1.3541);
}

double NNfunction_ss_uLuR::synapse0x3a6b600() {
   return (neuron0x3a5bad0()*-0.965169);
}

double NNfunction_ss_uLuR::synapse0x3a6b640() {
   return (neuron0x3a5c4a0()*1.20943);
}

double NNfunction_ss_uLuR::synapse0x3a6bfd0() {
   return (neuron0x3a54ff0()*-1.24062);
}

double NNfunction_ss_uLuR::synapse0x3a6c010() {
   return (neuron0x3a559c0()*-1.5185);
}

double NNfunction_ss_uLuR::synapse0x3a5ce50() {
   return (neuron0x3a5f230()*-0.110977);
}

double NNfunction_ss_uLuR::synapse0x3a5ce90() {
   return (neuron0x3a5fc00()*1.69391);
}

double NNfunction_ss_uLuR::synapse0x3a5d820() {
   return (neuron0x3a605d0()*1.14896);
}

double NNfunction_ss_uLuR::synapse0x3a5d860() {
   return (neuron0x3a60fa0()*1.56172);
}

double NNfunction_ss_uLuR::synapse0x3a5e1f0() {
   return (neuron0x3a61970()*-0.498094);
}

double NNfunction_ss_uLuR::synapse0x3a5e230() {
   return (neuron0x3a62340()*-0.294249);
}

double NNfunction_ss_uLuR::synapse0x3a70710() {
   return (neuron0x3a62d10()*1.00342);
}

double NNfunction_ss_uLuR::synapse0x3a70750() {
   return (neuron0x3a636e0()*-0.0559345);
}

double NNfunction_ss_uLuR::synapse0x3a710e0() {
   return (neuron0x3a59770()*1.51394);
}

double NNfunction_ss_uLuR::synapse0x3a71120() {
   return (neuron0x3a662c0()*1.31645);
}

double NNfunction_ss_uLuR::synapse0x3a71ab0() {
   return (neuron0x3a66c90()*0.673013);
}

double NNfunction_ss_uLuR::synapse0x3a71af0() {
   return (neuron0x3a67660()*-1.5677);
}

double NNfunction_ss_uLuR::synapse0x3a72480() {
   return (neuron0x3a68030()*-0.597079);
}

double NNfunction_ss_uLuR::synapse0x3a724c0() {
   return (neuron0x3a68a00()*-0.698328);
}

double NNfunction_ss_uLuR::synapse0x3a4d410() {
   return (neuron0x3a693d0()*1.38242);
}

double NNfunction_ss_uLuR::synapse0x3a4d450() {
   return (neuron0x3a69da0()*0.233756);
}

double NNfunction_ss_uLuR::synapse0x3a61c20() {
   return (neuron0x3a6a770()*-1.10784);
}

double NNfunction_ss_uLuR::synapse0x3a61c60() {
   return (neuron0x3a6b350()*-0.899293);
}

double NNfunction_ss_uLuR::synapse0x3a72ba0() {
   return (neuron0x3a6bd20()*2.13995);
}

double NNfunction_ss_uLuR::synapse0x3a72be0() {
   return (neuron0x3a5cba0()*0.697742);
}

double NNfunction_ss_uLuR::synapse0x3a72c20() {
   return (neuron0x3a5d570()*1.04211);
}

double NNfunction_ss_uLuR::synapse0x3a72c60() {
   return (neuron0x3a5df40()*0.101106);
}

double NNfunction_ss_uLuR::synapse0x3a79b10() {
   return (neuron0x3a70580()*2.46819);
}

double NNfunction_ss_uLuR::synapse0x3a79b50() {
   return (neuron0x3a70e30()*0.984797);
}

double NNfunction_ss_uLuR::synapse0x3a79b90() {
   return (neuron0x3a71800()*0.796037);
}

double NNfunction_ss_uLuR::synapse0x3a79bd0() {
   return (neuron0x3a721d0()*-1.31211);
}

double NNfunction_ss_uLuR::synapse0x3a79f50() {
   return (neuron0x3a4d160()*0.405982);
}

double NNfunction_ss_uLuR::synapse0x3a79f90() {
   return (neuron0x3a4d9a0()*-0.0589338);
}

double NNfunction_ss_uLuR::synapse0x3a79fd0() {
   return (neuron0x3a4e480()*0.264683);
}

double NNfunction_ss_uLuR::synapse0x3a7a010() {
   return (neuron0x3a4df20()*0.307893);
}

double NNfunction_ss_uLuR::synapse0x3a7a050() {
   return (neuron0x3a4f260()*0.532471);
}

double NNfunction_ss_uLuR::synapse0x3a7a090() {
   return (neuron0x3a50d30()*0.170891);
}

double NNfunction_ss_uLuR::synapse0x3a7a0d0() {
   return (neuron0x3a51b00()*0.694347);
}

double NNfunction_ss_uLuR::synapse0x3a7a110() {
   return (neuron0x3a524d0()*0.869801);
}

double NNfunction_ss_uLuR::synapse0x3a7a150() {
   return (neuron0x3a52ea0()*-0.0561226);
}

double NNfunction_ss_uLuR::synapse0x3a7a190() {
   return (neuron0x3a53980()*0.60331);
}

double NNfunction_ss_uLuR::synapse0x3a7a1d0() {
   return (neuron0x3a54350()*0.428456);
}

double NNfunction_ss_uLuR::synapse0x3a7a210() {
   return (neuron0x3a51430()*0.142106);
}

double NNfunction_ss_uLuR::synapse0x3a7a250() {
   return (neuron0x3a55f00()*0.703129);
}

double NNfunction_ss_uLuR::synapse0x3a7a290() {
   return (neuron0x3a568d0()*0.409167);
}

double NNfunction_ss_uLuR::synapse0x3a7a2d0() {
   return (neuron0x3a572a0()*0.410106);
}

double NNfunction_ss_uLuR::synapse0x3a7a310() {
   return (neuron0x3a57c70()*0.00631147);
}

double NNfunction_ss_uLuR::synapse0x3a79da0() {
   return (neuron0x3a59a80()*0.0994873);
}

double NNfunction_ss_uLuR::synapse0x3a79de0() {
   return (neuron0x3a59d60()*0.131378);
}

double NNfunction_ss_uLuR::synapse0x3a7a460() {
   return (neuron0x3a5a730()*0.201851);
}

double NNfunction_ss_uLuR::synapse0x3a7a4a0() {
   return (neuron0x3a5b100()*0.385191);
}

double NNfunction_ss_uLuR::synapse0x3a7a4e0() {
   return (neuron0x3a5bad0()*0.298726);
}

double NNfunction_ss_uLuR::synapse0x3a7a520() {
   return (neuron0x3a5c4a0()*0.279021);
}

double NNfunction_ss_uLuR::synapse0x3a7a560() {
   return (neuron0x3a54ff0()*0.68549);
}

double NNfunction_ss_uLuR::synapse0x3a7a5a0() {
   return (neuron0x3a559c0()*0.0724156);
}

double NNfunction_ss_uLuR::synapse0x3a7a5e0() {
   return (neuron0x3a5f230()*0.927692);
}

double NNfunction_ss_uLuR::synapse0x3a7a620() {
   return (neuron0x3a5fc00()*0.566652);
}

double NNfunction_ss_uLuR::synapse0x3a7a660() {
   return (neuron0x3a605d0()*0.3649);
}

double NNfunction_ss_uLuR::synapse0x3a7a6a0() {
   return (neuron0x3a60fa0()*0.0457985);
}

double NNfunction_ss_uLuR::synapse0x3a7a6e0() {
   return (neuron0x3a61970()*0.391785);
}

double NNfunction_ss_uLuR::synapse0x3a7a720() {
   return (neuron0x3a62340()*-0.40914);
}

double NNfunction_ss_uLuR::synapse0x3a7a760() {
   return (neuron0x3a62d10()*0.321075);
}

double NNfunction_ss_uLuR::synapse0x3a7a7a0() {
   return (neuron0x3a636e0()*0.609282);
}

double NNfunction_ss_uLuR::synapse0x3a7a350() {
   return (neuron0x3a59770()*0.47409);
}

double NNfunction_ss_uLuR::synapse0x3a7a390() {
   return (neuron0x3a662c0()*0.104178);
}

double NNfunction_ss_uLuR::synapse0x3a7a3d0() {
   return (neuron0x3a66c90()*0.342462);
}

double NNfunction_ss_uLuR::synapse0x3a7a410() {
   return (neuron0x3a67660()*0.369696);
}

double NNfunction_ss_uLuR::synapse0x3a7a9f0() {
   return (neuron0x3a68030()*-0.225935);
}

double NNfunction_ss_uLuR::synapse0x3a7aa30() {
   return (neuron0x3a68a00()*0.105203);
}

double NNfunction_ss_uLuR::synapse0x3a7aa70() {
   return (neuron0x3a693d0()*0.589307);
}

double NNfunction_ss_uLuR::synapse0x3a7aab0() {
   return (neuron0x3a69da0()*0.377215);
}

double NNfunction_ss_uLuR::synapse0x3a7aaf0() {
   return (neuron0x3a6a770()*-0.149785);
}

double NNfunction_ss_uLuR::synapse0x3a7ab30() {
   return (neuron0x3a6b350()*0.361506);
}

double NNfunction_ss_uLuR::synapse0x3a7ab70() {
   return (neuron0x3a6bd20()*-0.0707676);
}

double NNfunction_ss_uLuR::synapse0x3a7abb0() {
   return (neuron0x3a5cba0()*0.0962653);
}

double NNfunction_ss_uLuR::synapse0x3a7abf0() {
   return (neuron0x3a5d570()*-0.0448266);
}

double NNfunction_ss_uLuR::synapse0x3a7ac30() {
   return (neuron0x3a5df40()*0.621213);
}

double NNfunction_ss_uLuR::synapse0x3a7ac70() {
   return (neuron0x3a70580()*0.669014);
}

double NNfunction_ss_uLuR::synapse0x3a7acb0() {
   return (neuron0x3a70e30()*0.026974);
}

double NNfunction_ss_uLuR::synapse0x3a7acf0() {
   return (neuron0x3a71800()*0.00858445);
}

double NNfunction_ss_uLuR::synapse0x3a7ad30() {
   return (neuron0x3a721d0()*0.144684);
}

double NNfunction_ss_uLuR::synapse0x3a7b0b0() {
   return (neuron0x3a4d160()*3.55937);
}

double NNfunction_ss_uLuR::synapse0x3a7b0f0() {
   return (neuron0x3a4d9a0()*0.175575);
}

double NNfunction_ss_uLuR::synapse0x3a7b130() {
   return (neuron0x3a4e480()*0.0187556);
}

double NNfunction_ss_uLuR::synapse0x3a7b170() {
   return (neuron0x3a4df20()*-0.25555);
}

double NNfunction_ss_uLuR::synapse0x3a7b1b0() {
   return (neuron0x3a4f260()*0.0144152);
}

double NNfunction_ss_uLuR::synapse0x3a7b1f0() {
   return (neuron0x3a50d30()*-0.147258);
}

double NNfunction_ss_uLuR::synapse0x3a7b230() {
   return (neuron0x3a51b00()*-0.400274);
}

double NNfunction_ss_uLuR::synapse0x3a7b270() {
   return (neuron0x3a524d0()*0.563976);
}

double NNfunction_ss_uLuR::synapse0x3a7b2b0() {
   return (neuron0x3a52ea0()*0.422148);
}

double NNfunction_ss_uLuR::synapse0x3a7b2f0() {
   return (neuron0x3a53980()*-0.020833);
}

double NNfunction_ss_uLuR::synapse0x3a7b330() {
   return (neuron0x3a54350()*-0.1372);
}

double NNfunction_ss_uLuR::synapse0x3a7b370() {
   return (neuron0x3a51430()*0.0832897);
}

double NNfunction_ss_uLuR::synapse0x3a7b3b0() {
   return (neuron0x3a55f00()*-1.31941);
}

double NNfunction_ss_uLuR::synapse0x3a7b3f0() {
   return (neuron0x3a568d0()*-0.263348);
}

double NNfunction_ss_uLuR::synapse0x3a7b430() {
   return (neuron0x3a572a0()*0.0943674);
}

double NNfunction_ss_uLuR::synapse0x3a7b470() {
   return (neuron0x3a57c70()*-0.230461);
}

double NNfunction_ss_uLuR::synapse0x3a7af00() {
   return (neuron0x3a59a80()*0.0331965);
}

double NNfunction_ss_uLuR::synapse0x3a7af40() {
   return (neuron0x3a59d60()*0.0548041);
}

double NNfunction_ss_uLuR::synapse0x3a7b5c0() {
   return (neuron0x3a5a730()*-1.10272);
}

double NNfunction_ss_uLuR::synapse0x3a7b600() {
   return (neuron0x3a5b100()*0.0997295);
}

double NNfunction_ss_uLuR::synapse0x3a7b640() {
   return (neuron0x3a5bad0()*-0.249109);
}

double NNfunction_ss_uLuR::synapse0x3a7b680() {
   return (neuron0x3a5c4a0()*-0.187525);
}

double NNfunction_ss_uLuR::synapse0x3a7b6c0() {
   return (neuron0x3a54ff0()*0.383663);
}

double NNfunction_ss_uLuR::synapse0x3a7b700() {
   return (neuron0x3a559c0()*0.0337425);
}

double NNfunction_ss_uLuR::synapse0x3a7b740() {
   return (neuron0x3a5f230()*0.410773);
}

double NNfunction_ss_uLuR::synapse0x3a7b780() {
   return (neuron0x3a5fc00()*0.0477708);
}

double NNfunction_ss_uLuR::synapse0x3a7b7c0() {
   return (neuron0x3a605d0()*-0.907546);
}

double NNfunction_ss_uLuR::synapse0x3a7b800() {
   return (neuron0x3a60fa0()*-0.931094);
}

double NNfunction_ss_uLuR::synapse0x3a7b840() {
   return (neuron0x3a61970()*0.843405);
}

double NNfunction_ss_uLuR::synapse0x3a7b880() {
   return (neuron0x3a62340()*0.885809);
}

double NNfunction_ss_uLuR::synapse0x3a7b8c0() {
   return (neuron0x3a62d10()*-0.13498);
}

double NNfunction_ss_uLuR::synapse0x3a7b900() {
   return (neuron0x3a636e0()*-3.23423);
}

double NNfunction_ss_uLuR::synapse0x3a7b4b0() {
   return (neuron0x3a59770()*-0.00958019);
}

double NNfunction_ss_uLuR::synapse0x3a7b4f0() {
   return (neuron0x3a662c0()*0.0720196);
}

double NNfunction_ss_uLuR::synapse0x3a7b530() {
   return (neuron0x3a66c90()*-0.0186204);
}

double NNfunction_ss_uLuR::synapse0x3a7b570() {
   return (neuron0x3a67660()*-0.0441337);
}

double NNfunction_ss_uLuR::synapse0x3a7bb50() {
   return (neuron0x3a68030()*-0.383203);
}

double NNfunction_ss_uLuR::synapse0x3a7bb90() {
   return (neuron0x3a68a00()*0.0189082);
}

double NNfunction_ss_uLuR::synapse0x3a7bbd0() {
   return (neuron0x3a693d0()*-1.51191);
}

double NNfunction_ss_uLuR::synapse0x3a7bc10() {
   return (neuron0x3a69da0()*-0.288808);
}

double NNfunction_ss_uLuR::synapse0x3a7bc50() {
   return (neuron0x3a6a770()*-0.139822);
}

double NNfunction_ss_uLuR::synapse0x3a7bc90() {
   return (neuron0x3a6b350()*1.35154);
}

double NNfunction_ss_uLuR::synapse0x3a7bcd0() {
   return (neuron0x3a6bd20()*0.323127);
}

double NNfunction_ss_uLuR::synapse0x3a7bd10() {
   return (neuron0x3a5cba0()*0.402581);
}

double NNfunction_ss_uLuR::synapse0x3a7bd50() {
   return (neuron0x3a5d570()*0.128097);
}

double NNfunction_ss_uLuR::synapse0x3a7bd90() {
   return (neuron0x3a5df40()*-0.258303);
}

double NNfunction_ss_uLuR::synapse0x3a7bdd0() {
   return (neuron0x3a70580()*-0.409202);
}

double NNfunction_ss_uLuR::synapse0x3a7be10() {
   return (neuron0x3a70e30()*0.0138503);
}

double NNfunction_ss_uLuR::synapse0x3a7be50() {
   return (neuron0x3a71800()*0.317031);
}

double NNfunction_ss_uLuR::synapse0x3a7be90() {
   return (neuron0x3a721d0()*-0.144891);
}

double NNfunction_ss_uLuR::synapse0x3a7c210() {
   return (neuron0x3a4d160()*-0.805844);
}

double NNfunction_ss_uLuR::synapse0x3a7c250() {
   return (neuron0x3a4d9a0()*0.5674);
}

double NNfunction_ss_uLuR::synapse0x3a7c290() {
   return (neuron0x3a4e480()*-0.213756);
}

double NNfunction_ss_uLuR::synapse0x3a7c2d0() {
   return (neuron0x3a4df20()*-0.440364);
}

double NNfunction_ss_uLuR::synapse0x3a7c310() {
   return (neuron0x3a4f260()*0.0549108);
}

double NNfunction_ss_uLuR::synapse0x3a7c350() {
   return (neuron0x3a50d30()*-0.352189);
}

double NNfunction_ss_uLuR::synapse0x3a7c390() {
   return (neuron0x3a51b00()*-0.384478);
}

double NNfunction_ss_uLuR::synapse0x3a7c3d0() {
   return (neuron0x3a524d0()*0.13737);
}

double NNfunction_ss_uLuR::synapse0x3a7c410() {
   return (neuron0x3a52ea0()*0.322128);
}

double NNfunction_ss_uLuR::synapse0x3a7c450() {
   return (neuron0x3a53980()*-0.0255417);
}

double NNfunction_ss_uLuR::synapse0x3a7c490() {
   return (neuron0x3a54350()*-0.326962);
}

double NNfunction_ss_uLuR::synapse0x3a7c4d0() {
   return (neuron0x3a51430()*0.0327765);
}

double NNfunction_ss_uLuR::synapse0x3a7c510() {
   return (neuron0x3a55f00()*0.0448732);
}

double NNfunction_ss_uLuR::synapse0x3a7c550() {
   return (neuron0x3a568d0()*0.912462);
}

double NNfunction_ss_uLuR::synapse0x3a7c590() {
   return (neuron0x3a572a0()*0.161872);
}

double NNfunction_ss_uLuR::synapse0x3a7c5d0() {
   return (neuron0x3a57c70()*-0.349212);
}

double NNfunction_ss_uLuR::synapse0x3a7c060() {
   return (neuron0x3a59a80()*0.0189915);
}

double NNfunction_ss_uLuR::synapse0x3a7c0a0() {
   return (neuron0x3a59d60()*-0.100132);
}

double NNfunction_ss_uLuR::synapse0x3a7c720() {
   return (neuron0x3a5a730()*-1.03809);
}

double NNfunction_ss_uLuR::synapse0x3a7c760() {
   return (neuron0x3a5b100()*0.160027);
}

double NNfunction_ss_uLuR::synapse0x3a7c7a0() {
   return (neuron0x3a5bad0()*-0.462776);
}

double NNfunction_ss_uLuR::synapse0x3a7c7e0() {
   return (neuron0x3a5c4a0()*-0.0548427);
}

double NNfunction_ss_uLuR::synapse0x3a7c820() {
   return (neuron0x3a54ff0()*0.225055);
}

double NNfunction_ss_uLuR::synapse0x3a7c860() {
   return (neuron0x3a559c0()*0.0834774);
}

double NNfunction_ss_uLuR::synapse0x3a7c8a0() {
   return (neuron0x3a5f230()*0.425675);
}

double NNfunction_ss_uLuR::synapse0x3a7c8e0() {
   return (neuron0x3a5fc00()*0.149484);
}

double NNfunction_ss_uLuR::synapse0x3a7c920() {
   return (neuron0x3a605d0()*-1.11884);
}

double NNfunction_ss_uLuR::synapse0x3a7c960() {
   return (neuron0x3a60fa0()*0.870104);
}

double NNfunction_ss_uLuR::synapse0x3a7c9a0() {
   return (neuron0x3a61970()*-1.31903);
}

double NNfunction_ss_uLuR::synapse0x3a7c9e0() {
   return (neuron0x3a62340()*0.731287);
}

double NNfunction_ss_uLuR::synapse0x3a7ca20() {
   return (neuron0x3a62d10()*-0.286271);
}

double NNfunction_ss_uLuR::synapse0x3a7ca60() {
   return (neuron0x3a636e0()*-0.0631981);
}

double NNfunction_ss_uLuR::synapse0x3a7c610() {
   return (neuron0x3a59770()*0.115216);
}

double NNfunction_ss_uLuR::synapse0x3a7c650() {
   return (neuron0x3a662c0()*0.0721225);
}

double NNfunction_ss_uLuR::synapse0x3a7c690() {
   return (neuron0x3a66c90()*-0.0505352);
}

double NNfunction_ss_uLuR::synapse0x3a7c6d0() {
   return (neuron0x3a67660()*-0.0548876);
}

double NNfunction_ss_uLuR::synapse0x3a7ccb0() {
   return (neuron0x3a68030()*-0.553956);
}

double NNfunction_ss_uLuR::synapse0x3a7ccf0() {
   return (neuron0x3a68a00()*-0.111026);
}

double NNfunction_ss_uLuR::synapse0x3a7cd30() {
   return (neuron0x3a693d0()*0.242233);
}

double NNfunction_ss_uLuR::synapse0x3a7cd70() {
   return (neuron0x3a69da0()*-0.50145);
}

double NNfunction_ss_uLuR::synapse0x3a7cdb0() {
   return (neuron0x3a6a770()*-0.174921);
}

double NNfunction_ss_uLuR::synapse0x3a7cdf0() {
   return (neuron0x3a6b350()*1.06619);
}

double NNfunction_ss_uLuR::synapse0x3a7ce30() {
   return (neuron0x3a6bd20()*0.551332);
}

double NNfunction_ss_uLuR::synapse0x3a7ce70() {
   return (neuron0x3a5cba0()*0.104501);
}

double NNfunction_ss_uLuR::synapse0x3a7ceb0() {
   return (neuron0x3a5d570()*0.283355);
}

double NNfunction_ss_uLuR::synapse0x3a7cef0() {
   return (neuron0x3a5df40()*-0.362084);
}

double NNfunction_ss_uLuR::synapse0x3a7cf30() {
   return (neuron0x3a70580()*0.378739);
}

double NNfunction_ss_uLuR::synapse0x3a7cf70() {
   return (neuron0x3a70e30()*-0.0220067);
}

double NNfunction_ss_uLuR::synapse0x3a7cfb0() {
   return (neuron0x3a71800()*-0.344223);
}

double NNfunction_ss_uLuR::synapse0x3a7cff0() {
   return (neuron0x3a721d0()*-0.208897);
}

double NNfunction_ss_uLuR::synapse0x3a7d250() {
   return (neuron0x3a793d0()*-7.70227);
}

double NNfunction_ss_uLuR::synapse0x3a7d290() {
   return (neuron0x3a79770()*-5.27919);
}

double NNfunction_ss_uLuR::synapse0x3a7d2d0() {
   return (neuron0x3a79c10()*3.38052);
}

double NNfunction_ss_uLuR::synapse0x3a7d310() {
   return (neuron0x3a7ad70()*7.49514);
}

double NNfunction_ss_uLuR::synapse0x3a7d350() {
   return (neuron0x3a7bed0()*-3.0863);
}

