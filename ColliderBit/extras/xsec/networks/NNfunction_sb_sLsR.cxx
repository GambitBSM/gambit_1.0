#include "NNfunction_sb_sLsR.h"
#include <cmath>

double NNfunction_sb_sLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8005)/15.0199;
   input1 = (in1 - 40.7811)/805.001;
   input2 = (in2 - 404.479)/517.106;
   input3 = (in3 - 182.41)/636.873;
   input4 = (in4 - 719.965)/748.039;
   input5 = (in5 - 612.645)/714.641;
   input6 = (in6 - 617.066)/718.9;
   input7 = (in7 - 620.811)/716.9;
   input8 = (in8 - 623.616)/759.142;
   input9 = (in9 - 610.679)/741.99;
   input10 = (in10 - 639.077)/769.473;
   input11 = (in11 - 617.093)/627.924;
   input12 = (in12 - 415.785)/254.535;
   input13 = (in13 - 465.717)/372.088;
   input14 = (in14 - 606.54)/584.195;
   input15 = (in15 - 601.201)/579.851;
   input16 = (in16 - 435.032)/402.32;
   input17 = (in17 - 637.045)/661.079;
   input18 = (in18 - 406.64)/251.998;
   input19 = (in19 - 642.993)/653.315;
   input20 = (in20 - -153.178)/396.324;
   input21 = (in21 - -189.234)/892.157;
   input22 = (in22 - 4.82781)/901.755;
   input23 = (in23 - -52.3234)/493.083;
   switch(index) {
     case 0:
         return neuron0x1b6f080();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.8005)/15.0199;
   input1 = (input[1] - 40.7811)/805.001;
   input2 = (input[2] - 404.479)/517.106;
   input3 = (input[3] - 182.41)/636.873;
   input4 = (input[4] - 719.965)/748.039;
   input5 = (input[5] - 612.645)/714.641;
   input6 = (input[6] - 617.066)/718.9;
   input7 = (input[7] - 620.811)/716.9;
   input8 = (input[8] - 623.616)/759.142;
   input9 = (input[9] - 610.679)/741.99;
   input10 = (input[10] - 639.077)/769.473;
   input11 = (input[11] - 617.093)/627.924;
   input12 = (input[12] - 415.785)/254.535;
   input13 = (input[13] - 465.717)/372.088;
   input14 = (input[14] - 606.54)/584.195;
   input15 = (input[15] - 601.201)/579.851;
   input16 = (input[16] - 435.032)/402.32;
   input17 = (input[17] - 637.045)/661.079;
   input18 = (input[18] - 406.64)/251.998;
   input19 = (input[19] - 642.993)/653.315;
   input20 = (input[20] - -153.178)/396.324;
   input21 = (input[21] - -189.234)/892.157;
   input22 = (input[22] - 4.82781)/901.755;
   input23 = (input[23] - -52.3234)/493.083;
   switch(index) {
     case 0:
         return neuron0x1b6f080();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsR::neuron0x1b3b170() {
   return input0;
}

double NNfunction_sb_sLsR::neuron0x1b3b4b0() {
   return input1;
}

double NNfunction_sb_sLsR::neuron0x1b3b7f0() {
   return input2;
}

double NNfunction_sb_sLsR::neuron0x1b3bb30() {
   return input3;
}

double NNfunction_sb_sLsR::neuron0x1b3be70() {
   return input4;
}

double NNfunction_sb_sLsR::neuron0x1b3c1b0() {
   return input5;
}

double NNfunction_sb_sLsR::neuron0x1b3c4f0() {
   return input6;
}

double NNfunction_sb_sLsR::neuron0x1b3c830() {
   return input7;
}

double NNfunction_sb_sLsR::neuron0x1b3cb70() {
   return input8;
}

double NNfunction_sb_sLsR::neuron0x1b3ceb0() {
   return input9;
}

double NNfunction_sb_sLsR::neuron0x1b3d1f0() {
   return input10;
}

double NNfunction_sb_sLsR::neuron0x1b3d530() {
   return input11;
}

double NNfunction_sb_sLsR::neuron0x1b3d870() {
   return input12;
}

double NNfunction_sb_sLsR::neuron0x1b3dbb0() {
   return input13;
}

double NNfunction_sb_sLsR::neuron0x1b3def0() {
   return input14;
}

double NNfunction_sb_sLsR::neuron0x1b3e230() {
   return input15;
}

double NNfunction_sb_sLsR::neuron0x1b3e570() {
   return input16;
}

double NNfunction_sb_sLsR::neuron0x1b3ead0() {
   return input17;
}

double NNfunction_sb_sLsR::neuron0x1b3ecf0() {
   return input18;
}

double NNfunction_sb_sLsR::neuron0x1b3f030() {
   return input19;
}

double NNfunction_sb_sLsR::neuron0x1b3f370() {
   return input20;
}

double NNfunction_sb_sLsR::neuron0x1b3f6b0() {
   return input21;
}

double NNfunction_sb_sLsR::neuron0x1b3f9f0() {
   return input22;
}

double NNfunction_sb_sLsR::neuron0x1b3fd30() {
   return input23;
}

double NNfunction_sb_sLsR::input0x1b401a0() {
   double input = -0.241584;
   input += synapse0x1b3b030();
   input += synapse0x1b3b070();
   input += synapse0x1b40450();
   input += synapse0x1b40490();
   input += synapse0x1b404d0();
   input += synapse0x1b40510();
   input += synapse0x1b40550();
   input += synapse0x1b40590();
   input += synapse0x1b405d0();
   input += synapse0x1b40610();
   input += synapse0x1b40650();
   input += synapse0x1b40690();
   input += synapse0x1b406d0();
   input += synapse0x1b40710();
   input += synapse0x1b40750();
   input += synapse0x1b40790();
   input += synapse0x1b3afa0();
   input += synapse0x1b3afe0();
   input += synapse0x18f6390();
   input += synapse0x18f63d0();
   input += synapse0x1b409f0();
   input += synapse0x1b40a30();
   input += synapse0x1b40a70();
   input += synapse0x1b40ab0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b401a0() {
   double input = input0x1b401a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b40af0() {
   double input = -0.200506;
   input += synapse0x1b40e30();
   input += synapse0x1b40e70();
   input += synapse0x1b40eb0();
   input += synapse0x1b40ef0();
   input += synapse0x1b40f30();
   input += synapse0x1b40f70();
   input += synapse0x1b40fb0();
   input += synapse0x1b40ff0();
   input += synapse0x1b41030();
   input += synapse0x1b408e0();
   input += synapse0x1b40920();
   input += synapse0x1b40960();
   input += synapse0x1b409a0();
   input += synapse0x1b41280();
   input += synapse0x1b412c0();
   input += synapse0x1b41300();
   input += synapse0x1b40c80();
   input += synapse0x1b40cc0();
   input += synapse0x1b41450();
   input += synapse0x1b41490();
   input += synapse0x1b414d0();
   input += synapse0x1b41510();
   input += synapse0x1b41550();
   input += synapse0x1b41590();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b40af0() {
   double input = input0x1b40af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b415d0() {
   double input = 0.132677;
   input += synapse0x1b41910();
   input += synapse0x1b41950();
   input += synapse0x1b41990();
   input += synapse0x1b419d0();
   input += synapse0x1b41a10();
   input += synapse0x1b41a50();
   input += synapse0x1b41a90();
   input += synapse0x1b41ad0();
   input += synapse0x1b41b10();
   input += synapse0x1b41b50();
   input += synapse0x1b41b90();
   input += synapse0x1b41bd0();
   input += synapse0x1b41c10();
   input += synapse0x1b41c50();
   input += synapse0x1b41c90();
   input += synapse0x1b41cd0();
   input += synapse0x1b41760();
   input += synapse0x1b417a0();
   input += synapse0x18f54e0();
   input += synapse0x19042e0();
   input += synapse0x1904320();
   input += synapse0x1b2a200();
   input += synapse0x1b2a240();
   input += synapse0x1b2a280();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b415d0() {
   double input = input0x1b415d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b41070() {
   double input = -0.795847;
   input += synapse0x1904b60();
   input += synapse0x1b41200();
   input += synapse0x1b41240();
   input += synapse0x1b41e20();
   input += synapse0x1b41e60();
   input += synapse0x1b41ea0();
   input += synapse0x1b41ee0();
   input += synapse0x1b41f20();
   input += synapse0x1b41f60();
   input += synapse0x1b41fa0();
   input += synapse0x1b41fe0();
   input += synapse0x1b42020();
   input += synapse0x1b42060();
   input += synapse0x1b420a0();
   input += synapse0x1b420e0();
   input += synapse0x1b42120();
   input += synapse0x1b3b0b0();
   input += synapse0x1b3b0f0();
   input += synapse0x1b3b130();
   input += synapse0x1b42270();
   input += synapse0x1b422b0();
   input += synapse0x1b422f0();
   input += synapse0x1b42330();
   input += synapse0x1b42370();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b41070() {
   double input = input0x1b41070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b423b0() {
   double input = 1.67484;
   input += synapse0x1b426f0();
   input += synapse0x1b42730();
   input += synapse0x1b42770();
   input += synapse0x1b427b0();
   input += synapse0x1b427f0();
   input += synapse0x1b42830();
   input += synapse0x1b42870();
   input += synapse0x1b428b0();
   input += synapse0x1b428f0();
   input += synapse0x1b42930();
   input += synapse0x1b42970();
   input += synapse0x1b429b0();
   input += synapse0x1b429f0();
   input += synapse0x1b42a30();
   input += synapse0x1b42a70();
   input += synapse0x1b42ab0();
   input += synapse0x1b42540();
   input += synapse0x1b42580();
   input += synapse0x1b42c00();
   input += synapse0x1b42c40();
   input += synapse0x1b42c80();
   input += synapse0x1b42cc0();
   input += synapse0x1b42d00();
   input += synapse0x1b42d40();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b423b0() {
   double input = input0x1b423b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b42d80() {
   double input = -1.70447;
   input += synapse0x1b430c0();
   input += synapse0x1b43100();
   input += synapse0x1b43140();
   input += synapse0x1b43180();
   input += synapse0x1b431c0();
   input += synapse0x1b43200();
   input += synapse0x1b43240();
   input += synapse0x1b43280();
   input += synapse0x1b432c0();
   input += synapse0x1904630();
   input += synapse0x1904670();
   input += synapse0x19046b0();
   input += synapse0x19046f0();
   input += synapse0x1904730();
   input += synapse0x1904770();
   input += synapse0x19047b0();
   input += synapse0x1b42f10();
   input += synapse0x1b42f50();
   input += synapse0x1904900();
   input += synapse0x1904940();
   input += synapse0x1904980();
   input += synapse0x19049c0();
   input += synapse0x1904a00();
   input += synapse0x1b43b10();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b42d80() {
   double input = input0x1b42d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b43b50() {
   double input = 0.859661;
   input += synapse0x1b43e90();
   input += synapse0x1b43ed0();
   input += synapse0x1b43f10();
   input += synapse0x1b43f50();
   input += synapse0x1b43f90();
   input += synapse0x1b43fd0();
   input += synapse0x1b44010();
   input += synapse0x1b44050();
   input += synapse0x1b44090();
   input += synapse0x1b440d0();
   input += synapse0x1b44110();
   input += synapse0x1b44150();
   input += synapse0x1b44190();
   input += synapse0x1b441d0();
   input += synapse0x1b44210();
   input += synapse0x1b44250();
   input += synapse0x1b43ce0();
   input += synapse0x1b43d20();
   input += synapse0x1b443a0();
   input += synapse0x1b443e0();
   input += synapse0x1b44420();
   input += synapse0x1b44460();
   input += synapse0x1b444a0();
   input += synapse0x1b444e0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b43b50() {
   double input = input0x1b43b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b44520() {
   double input = -0.204977;
   input += synapse0x1b44860();
   input += synapse0x1b448a0();
   input += synapse0x1b448e0();
   input += synapse0x1b44920();
   input += synapse0x1b44960();
   input += synapse0x1b449a0();
   input += synapse0x1b449e0();
   input += synapse0x1b44a20();
   input += synapse0x1b44a60();
   input += synapse0x1b44aa0();
   input += synapse0x1b44ae0();
   input += synapse0x1b44b20();
   input += synapse0x1b44b60();
   input += synapse0x1b44ba0();
   input += synapse0x1b44be0();
   input += synapse0x1b44c20();
   input += synapse0x1b446b0();
   input += synapse0x1b446f0();
   input += synapse0x1b44d70();
   input += synapse0x1b44db0();
   input += synapse0x1b44df0();
   input += synapse0x1b44e30();
   input += synapse0x1b44e70();
   input += synapse0x1b44eb0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b44520() {
   double input = input0x1b44520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b44ef0() {
   double input = -0.121894;
   input += synapse0x1b3e9c0();
   input += synapse0x1b3ea00();
   input += synapse0x1b3ea40();
   input += synapse0x1b3ea80();
   input += synapse0x1b45440();
   input += synapse0x1b45480();
   input += synapse0x1b454c0();
   input += synapse0x1b45500();
   input += synapse0x1b45540();
   input += synapse0x1b45580();
   input += synapse0x1b455c0();
   input += synapse0x1b45600();
   input += synapse0x1b45640();
   input += synapse0x1b45680();
   input += synapse0x1b456c0();
   input += synapse0x1b45700();
   input += synapse0x1b45080();
   input += synapse0x1b450c0();
   input += synapse0x1b45850();
   input += synapse0x1b45890();
   input += synapse0x1b458d0();
   input += synapse0x1b45910();
   input += synapse0x1b45950();
   input += synapse0x1b45990();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b44ef0() {
   double input = input0x1b44ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b459d0() {
   double input = -0.278628;
   input += synapse0x1b45d10();
   input += synapse0x1b45d50();
   input += synapse0x1b45d90();
   input += synapse0x1b45dd0();
   input += synapse0x1b45e10();
   input += synapse0x1b45e50();
   input += synapse0x1b45e90();
   input += synapse0x1b45ed0();
   input += synapse0x1b45f10();
   input += synapse0x1b45f50();
   input += synapse0x1b45f90();
   input += synapse0x1b45fd0();
   input += synapse0x1b46010();
   input += synapse0x1b46050();
   input += synapse0x1b46090();
   input += synapse0x1b460d0();
   input += synapse0x1b45b60();
   input += synapse0x1b45ba0();
   input += synapse0x1b46220();
   input += synapse0x1b46260();
   input += synapse0x1b462a0();
   input += synapse0x1b462e0();
   input += synapse0x1b46320();
   input += synapse0x1b46360();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b459d0() {
   double input = input0x1b459d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b463a0() {
   double input = -0.171158;
   input += synapse0x1b466e0();
   input += synapse0x1b46720();
   input += synapse0x1b46760();
   input += synapse0x1b467a0();
   input += synapse0x1b467e0();
   input += synapse0x1b46820();
   input += synapse0x1b46860();
   input += synapse0x1b468a0();
   input += synapse0x1b468e0();
   input += synapse0x1b46920();
   input += synapse0x1b46960();
   input += synapse0x1b469a0();
   input += synapse0x1b469e0();
   input += synapse0x1b46a20();
   input += synapse0x1b46a60();
   input += synapse0x1b46aa0();
   input += synapse0x1b46530();
   input += synapse0x1b46570();
   input += synapse0x1b43300();
   input += synapse0x1b43340();
   input += synapse0x1b43380();
   input += synapse0x1b433c0();
   input += synapse0x1b43400();
   input += synapse0x1b43440();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b463a0() {
   double input = input0x1b463a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b43480() {
   double input = 0.293241;
   input += synapse0x1b437c0();
   input += synapse0x1b43800();
   input += synapse0x1b43840();
   input += synapse0x1b43880();
   input += synapse0x1b438c0();
   input += synapse0x1b43900();
   input += synapse0x1b43940();
   input += synapse0x1b43980();
   input += synapse0x1b439c0();
   input += synapse0x1b43a00();
   input += synapse0x1b43a40();
   input += synapse0x1b43a80();
   input += synapse0x1b43ac0();
   input += synapse0x1b47c00();
   input += synapse0x1b47c40();
   input += synapse0x1b47c80();
   input += synapse0x1b43610();
   input += synapse0x1b43650();
   input += synapse0x1b47dd0();
   input += synapse0x1b47e10();
   input += synapse0x1b47e50();
   input += synapse0x1b47e90();
   input += synapse0x1b47ed0();
   input += synapse0x1b47f10();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b43480() {
   double input = input0x1b43480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b47f50() {
   double input = -0.414511;
   input += synapse0x1b48290();
   input += synapse0x1b482d0();
   input += synapse0x1b48310();
   input += synapse0x1b48350();
   input += synapse0x1b48390();
   input += synapse0x1b483d0();
   input += synapse0x1b48410();
   input += synapse0x1b48450();
   input += synapse0x1b48490();
   input += synapse0x1b484d0();
   input += synapse0x1b48510();
   input += synapse0x1b48550();
   input += synapse0x1b48590();
   input += synapse0x1b485d0();
   input += synapse0x1b48610();
   input += synapse0x1b48650();
   input += synapse0x1b480e0();
   input += synapse0x1b48120();
   input += synapse0x1b487a0();
   input += synapse0x1b487e0();
   input += synapse0x1b48820();
   input += synapse0x1b48860();
   input += synapse0x1b488a0();
   input += synapse0x1b488e0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b47f50() {
   double input = input0x1b47f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b48920() {
   double input = 0.198165;
   input += synapse0x1b48c60();
   input += synapse0x1b48ca0();
   input += synapse0x1b48ce0();
   input += synapse0x1b48d20();
   input += synapse0x1b48d60();
   input += synapse0x1b48da0();
   input += synapse0x1b48de0();
   input += synapse0x1b48e20();
   input += synapse0x1b48e60();
   input += synapse0x1b48ea0();
   input += synapse0x1b48ee0();
   input += synapse0x1b48f20();
   input += synapse0x1b48f60();
   input += synapse0x1b48fa0();
   input += synapse0x1b48fe0();
   input += synapse0x1b49020();
   input += synapse0x1b48ab0();
   input += synapse0x1b48af0();
   input += synapse0x1b49170();
   input += synapse0x1b491b0();
   input += synapse0x1b491f0();
   input += synapse0x1b49230();
   input += synapse0x1b49270();
   input += synapse0x1b492b0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b48920() {
   double input = input0x1b48920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b492f0() {
   double input = -1.77559;
   input += synapse0x1b49630();
   input += synapse0x1b49670();
   input += synapse0x1b496b0();
   input += synapse0x1b496f0();
   input += synapse0x1b49730();
   input += synapse0x1b49770();
   input += synapse0x1b497b0();
   input += synapse0x1b497f0();
   input += synapse0x1b49830();
   input += synapse0x1b49870();
   input += synapse0x1b498b0();
   input += synapse0x1b498f0();
   input += synapse0x1b49930();
   input += synapse0x1b49970();
   input += synapse0x1b499b0();
   input += synapse0x1b499f0();
   input += synapse0x1b49480();
   input += synapse0x1b494c0();
   input += synapse0x1b49b40();
   input += synapse0x1b49b80();
   input += synapse0x1b49bc0();
   input += synapse0x1b49c00();
   input += synapse0x1b49c40();
   input += synapse0x1b49c80();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b492f0() {
   double input = input0x1b492f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b49cc0() {
   double input = 0.310247;
   input += synapse0x1b4a000();
   input += synapse0x1b3b390();
   input += synapse0x1b3b3d0();
   input += synapse0x1b3b6d0();
   input += synapse0x1b3b710();
   input += synapse0x1b3ba10();
   input += synapse0x1b3ba50();
   input += synapse0x1b3bd50();
   input += synapse0x1b3bd90();
   input += synapse0x1b3c090();
   input += synapse0x1b3c0d0();
   input += synapse0x1b3c3d0();
   input += synapse0x1b3c410();
   input += synapse0x1b3c710();
   input += synapse0x1b3c750();
   input += synapse0x1b3ca50();
   input += synapse0x1b3ca90();
   input += synapse0x1b3cd90();
   input += synapse0x1b3cdd0();
   input += synapse0x1b3d0d0();
   input += synapse0x1b3d110();
   input += synapse0x1b3d410();
   input += synapse0x1b3d450();
   input += synapse0x1b3d750();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b49cc0() {
   double input = input0x1b49cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4bad0() {
   double input = 2.60514;
   input += synapse0x1b3d790();
   input += synapse0x1b3e450();
   input += synapse0x1b3e490();
   input += synapse0x1b49e50();
   input += synapse0x1b49e90();
   input += synapse0x1b3e790();
   input += synapse0x1b3e7d0();
   input += synapse0x18f6270();
   input += synapse0x18f62b0();
   input += synapse0x1b3ef10();
   input += synapse0x1b3ef50();
   input += synapse0x1b3f250();
   input += synapse0x1b3f290();
   input += synapse0x1b3f590();
   input += synapse0x1b3f5d0();
   input += synapse0x1b3f8d0();
   input += synapse0x1b3f910();
   input += synapse0x1b3fc10();
   input += synapse0x1b3fc50();
   input += synapse0x1b3ff50();
   input += synapse0x1b3ff90();
   input += synapse0x1b3da90();
   input += synapse0x1b3dad0();
   input += synapse0x1b4bd70();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4bad0() {
   double input = input0x1b4bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4bdb0() {
   double input = -1.50156;
   input += synapse0x1b4c0f0();
   input += synapse0x1b4c130();
   input += synapse0x1b4c170();
   input += synapse0x1b4c1b0();
   input += synapse0x1b4c1f0();
   input += synapse0x1b4c230();
   input += synapse0x1b4c270();
   input += synapse0x1b4c2b0();
   input += synapse0x1b4c2f0();
   input += synapse0x1b4c330();
   input += synapse0x1b4c370();
   input += synapse0x1b4c3b0();
   input += synapse0x1b4c3f0();
   input += synapse0x1b4c430();
   input += synapse0x1b4c470();
   input += synapse0x1b4c4b0();
   input += synapse0x1b4bf40();
   input += synapse0x1b4bf80();
   input += synapse0x1b4c600();
   input += synapse0x1b4c640();
   input += synapse0x1b4c680();
   input += synapse0x1b4c6c0();
   input += synapse0x1b4c700();
   input += synapse0x1b4c740();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4bdb0() {
   double input = input0x1b4bdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4c780() {
   double input = -0.857162;
   input += synapse0x1b4cac0();
   input += synapse0x1b4cb00();
   input += synapse0x1b4cb40();
   input += synapse0x1b4cb80();
   input += synapse0x1b4cbc0();
   input += synapse0x1b4cc00();
   input += synapse0x1b4cc40();
   input += synapse0x1b4cc80();
   input += synapse0x1b4ccc0();
   input += synapse0x1b4cd00();
   input += synapse0x1b4cd40();
   input += synapse0x1b4cd80();
   input += synapse0x1b4cdc0();
   input += synapse0x1b4ce00();
   input += synapse0x1b4ce40();
   input += synapse0x1b4ce80();
   input += synapse0x1b4c910();
   input += synapse0x1b4c950();
   input += synapse0x1b4cfd0();
   input += synapse0x1b4d010();
   input += synapse0x1b4d050();
   input += synapse0x1b4d090();
   input += synapse0x1b4d0d0();
   input += synapse0x1b4d110();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4c780() {
   double input = input0x1b4c780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4d150() {
   double input = -0.295278;
   input += synapse0x1b4d490();
   input += synapse0x1b4d4d0();
   input += synapse0x1b4d510();
   input += synapse0x1b4d550();
   input += synapse0x1b4d590();
   input += synapse0x1b4d5d0();
   input += synapse0x1b4d610();
   input += synapse0x1b4d650();
   input += synapse0x1b4d690();
   input += synapse0x1b4d6d0();
   input += synapse0x1b4d710();
   input += synapse0x1b4d750();
   input += synapse0x1b4d790();
   input += synapse0x1b4d7d0();
   input += synapse0x1b4d810();
   input += synapse0x1b4d850();
   input += synapse0x1b4d2e0();
   input += synapse0x1b4d320();
   input += synapse0x1b4d9a0();
   input += synapse0x1b4d9e0();
   input += synapse0x1b4da20();
   input += synapse0x1b4da60();
   input += synapse0x1b4daa0();
   input += synapse0x1b4dae0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4d150() {
   double input = input0x1b4d150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4db20() {
   double input = 0.490031;
   input += synapse0x1b4de60();
   input += synapse0x1b4dea0();
   input += synapse0x1b4dee0();
   input += synapse0x1b4df20();
   input += synapse0x1b4df60();
   input += synapse0x1b4dfa0();
   input += synapse0x1b4dfe0();
   input += synapse0x1b4e020();
   input += synapse0x1b4e060();
   input += synapse0x1b4e0a0();
   input += synapse0x1b4e0e0();
   input += synapse0x1b4e120();
   input += synapse0x1b4e160();
   input += synapse0x1b4e1a0();
   input += synapse0x1b4e1e0();
   input += synapse0x1b4e220();
   input += synapse0x1b4dcb0();
   input += synapse0x1b4dcf0();
   input += synapse0x1b4e370();
   input += synapse0x1b4e3b0();
   input += synapse0x1b4e3f0();
   input += synapse0x1b4e430();
   input += synapse0x1b4e470();
   input += synapse0x1b4e4b0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4db20() {
   double input = input0x1b4db20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4e4f0() {
   double input = -0.149065;
   input += synapse0x1b4e830();
   input += synapse0x1b4e870();
   input += synapse0x1b4e8b0();
   input += synapse0x1b4e8f0();
   input += synapse0x1b4e930();
   input += synapse0x1b4e970();
   input += synapse0x1b4e9b0();
   input += synapse0x1b4e9f0();
   input += synapse0x1b4ea30();
   input += synapse0x1b46bf0();
   input += synapse0x1b46c30();
   input += synapse0x1b46c70();
   input += synapse0x1b46cb0();
   input += synapse0x1b46cf0();
   input += synapse0x1b46d30();
   input += synapse0x1b46d70();
   input += synapse0x1b4e680();
   input += synapse0x1b4e6c0();
   input += synapse0x1b46ec0();
   input += synapse0x1b46f00();
   input += synapse0x1b46f40();
   input += synapse0x1b46f80();
   input += synapse0x1b46fc0();
   input += synapse0x1b47000();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4e4f0() {
   double input = input0x1b4e4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b47040() {
   double input = 0.191216;
   input += synapse0x1b47380();
   input += synapse0x1b473c0();
   input += synapse0x1b47400();
   input += synapse0x1b47440();
   input += synapse0x1b47480();
   input += synapse0x1b474c0();
   input += synapse0x1b47500();
   input += synapse0x1b47540();
   input += synapse0x1b47580();
   input += synapse0x1b475c0();
   input += synapse0x1b47600();
   input += synapse0x1b47640();
   input += synapse0x1b47680();
   input += synapse0x1b476c0();
   input += synapse0x1b47700();
   input += synapse0x1b47740();
   input += synapse0x1b471d0();
   input += synapse0x1b47210();
   input += synapse0x1b47890();
   input += synapse0x1b478d0();
   input += synapse0x1b47910();
   input += synapse0x1b47950();
   input += synapse0x1b47990();
   input += synapse0x1b479d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b47040() {
   double input = input0x1b47040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b47a10() {
   double input = -1.52783;
   input += synapse0x1b47ba0();
   input += synapse0x1b50c30();
   input += synapse0x1b50c70();
   input += synapse0x1b50cb0();
   input += synapse0x1b50cf0();
   input += synapse0x1b50d30();
   input += synapse0x1b50d70();
   input += synapse0x1b50db0();
   input += synapse0x1b50df0();
   input += synapse0x1b50e30();
   input += synapse0x1b50e70();
   input += synapse0x1b50eb0();
   input += synapse0x1b50ef0();
   input += synapse0x1b50f30();
   input += synapse0x1b50f70();
   input += synapse0x1b50fb0();
   input += synapse0x1b50a80();
   input += synapse0x1b50ac0();
   input += synapse0x1b51100();
   input += synapse0x1b51140();
   input += synapse0x1b51180();
   input += synapse0x1b511c0();
   input += synapse0x1b51200();
   input += synapse0x1b51240();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b47a10() {
   double input = input0x1b47a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b51280() {
   double input = 0.48097;
   input += synapse0x1b515c0();
   input += synapse0x1b51600();
   input += synapse0x1b51640();
   input += synapse0x1b51680();
   input += synapse0x1b516c0();
   input += synapse0x1b51700();
   input += synapse0x1b51740();
   input += synapse0x1b51780();
   input += synapse0x1b517c0();
   input += synapse0x1b51800();
   input += synapse0x1b51840();
   input += synapse0x1b51880();
   input += synapse0x1b518c0();
   input += synapse0x1b51900();
   input += synapse0x1b51940();
   input += synapse0x1b51980();
   input += synapse0x1b51410();
   input += synapse0x1b51450();
   input += synapse0x1b51ad0();
   input += synapse0x1b51b10();
   input += synapse0x1b51b50();
   input += synapse0x1b51b90();
   input += synapse0x1b51bd0();
   input += synapse0x1b51c10();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b51280() {
   double input = input0x1b51280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b51c50() {
   double input = 0.232278;
   input += synapse0x1b51f90();
   input += synapse0x1b51fd0();
   input += synapse0x1b52010();
   input += synapse0x1b52050();
   input += synapse0x1b52090();
   input += synapse0x1b520d0();
   input += synapse0x1b52110();
   input += synapse0x1b52150();
   input += synapse0x1b52190();
   input += synapse0x1b521d0();
   input += synapse0x1b52210();
   input += synapse0x1b52250();
   input += synapse0x1b52290();
   input += synapse0x1b522d0();
   input += synapse0x1b52310();
   input += synapse0x1b52350();
   input += synapse0x1b51de0();
   input += synapse0x1b51e20();
   input += synapse0x1b524a0();
   input += synapse0x1b524e0();
   input += synapse0x1b52520();
   input += synapse0x1b52560();
   input += synapse0x1b525a0();
   input += synapse0x1b525e0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b51c50() {
   double input = input0x1b51c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b52620() {
   double input = -0.420798;
   input += synapse0x1b52960();
   input += synapse0x1b529a0();
   input += synapse0x1b529e0();
   input += synapse0x1b52a20();
   input += synapse0x1b52a60();
   input += synapse0x1b52aa0();
   input += synapse0x1b52ae0();
   input += synapse0x1b52b20();
   input += synapse0x1b52b60();
   input += synapse0x1b52ba0();
   input += synapse0x1b52be0();
   input += synapse0x1b52c20();
   input += synapse0x1b52c60();
   input += synapse0x1b52ca0();
   input += synapse0x1b52ce0();
   input += synapse0x1b52d20();
   input += synapse0x1b527b0();
   input += synapse0x1b527f0();
   input += synapse0x1b52e70();
   input += synapse0x1b52eb0();
   input += synapse0x1b52ef0();
   input += synapse0x1b52f30();
   input += synapse0x1b52f70();
   input += synapse0x1b52fb0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b52620() {
   double input = input0x1b52620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b52ff0() {
   double input = -0.961908;
   input += synapse0x1b53330();
   input += synapse0x1b53370();
   input += synapse0x1b533b0();
   input += synapse0x1b533f0();
   input += synapse0x1b53430();
   input += synapse0x1b53470();
   input += synapse0x1b534b0();
   input += synapse0x1b534f0();
   input += synapse0x1b53530();
   input += synapse0x1b53570();
   input += synapse0x1b535b0();
   input += synapse0x1b535f0();
   input += synapse0x1b53630();
   input += synapse0x1b53670();
   input += synapse0x1b536b0();
   input += synapse0x1b536f0();
   input += synapse0x1b53180();
   input += synapse0x1b531c0();
   input += synapse0x1b53840();
   input += synapse0x1b53880();
   input += synapse0x1b538c0();
   input += synapse0x1b53900();
   input += synapse0x1b53940();
   input += synapse0x1b53980();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b52ff0() {
   double input = input0x1b52ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b539c0() {
   double input = -0.566795;
   input += synapse0x1b53d00();
   input += synapse0x1b53d40();
   input += synapse0x1b53d80();
   input += synapse0x1b53dc0();
   input += synapse0x1b53e00();
   input += synapse0x1b53e40();
   input += synapse0x1b53e80();
   input += synapse0x1b53ec0();
   input += synapse0x1b53f00();
   input += synapse0x1b53f40();
   input += synapse0x1b53f80();
   input += synapse0x1b53fc0();
   input += synapse0x1b54000();
   input += synapse0x1b54040();
   input += synapse0x1b54080();
   input += synapse0x1b540c0();
   input += synapse0x1b53b50();
   input += synapse0x1b53b90();
   input += synapse0x1b54210();
   input += synapse0x1b54250();
   input += synapse0x1b54290();
   input += synapse0x1b542d0();
   input += synapse0x1b54310();
   input += synapse0x1b54350();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b539c0() {
   double input = input0x1b539c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b54390() {
   double input = 0.549782;
   input += synapse0x1b546d0();
   input += synapse0x1b54710();
   input += synapse0x1b54750();
   input += synapse0x1b54790();
   input += synapse0x1b547d0();
   input += synapse0x1b54810();
   input += synapse0x1b54850();
   input += synapse0x1b54890();
   input += synapse0x1b548d0();
   input += synapse0x1b54910();
   input += synapse0x1b54950();
   input += synapse0x1b54990();
   input += synapse0x1b549d0();
   input += synapse0x1b54a10();
   input += synapse0x1b54a50();
   input += synapse0x1b54a90();
   input += synapse0x1b54520();
   input += synapse0x1b54560();
   input += synapse0x1b54be0();
   input += synapse0x1b54c20();
   input += synapse0x1b54c60();
   input += synapse0x1b54ca0();
   input += synapse0x1b54ce0();
   input += synapse0x1b54d20();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b54390() {
   double input = input0x1b54390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b54d60() {
   double input = -3.1463;
   input += synapse0x1b550a0();
   input += synapse0x1b550e0();
   input += synapse0x1b55120();
   input += synapse0x1b55160();
   input += synapse0x1b551a0();
   input += synapse0x1b551e0();
   input += synapse0x1b55220();
   input += synapse0x1b55260();
   input += synapse0x1b552a0();
   input += synapse0x1b552e0();
   input += synapse0x1b55320();
   input += synapse0x1b55360();
   input += synapse0x1b553a0();
   input += synapse0x1b553e0();
   input += synapse0x1b55420();
   input += synapse0x1b55460();
   input += synapse0x1b54ef0();
   input += synapse0x1b54f30();
   input += synapse0x1b555b0();
   input += synapse0x1b555f0();
   input += synapse0x1b55630();
   input += synapse0x1b55670();
   input += synapse0x1b556b0();
   input += synapse0x1b556f0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b54d60() {
   double input = input0x1b54d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b55730() {
   double input = -0.566296;
   input += synapse0x1b55a70();
   input += synapse0x1b4a040();
   input += synapse0x1b4a080();
   input += synapse0x1b4a0c0();
   input += synapse0x1b4a310();
   input += synapse0x1b4a350();
   input += synapse0x1b4a390();
   input += synapse0x1b4a5e0();
   input += synapse0x1b4a620();
   input += synapse0x1b4a870();
   input += synapse0x1b4a8b0();
   input += synapse0x1b4a8f0();
   input += synapse0x1b4ab40();
   input += synapse0x1b4ab80();
   input += synapse0x1b4add0();
   input += synapse0x1b4ae10();
   input += synapse0x1b558c0();
   input += synapse0x1b55900();
   input += synapse0x1b4af60();
   input += synapse0x1b4b470();
   input += synapse0x1b4b4b0();
   input += synapse0x1b4b4f0();
   input += synapse0x1b4b740();
   input += synapse0x1b4b780();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b55730() {
   double input = input0x1b55730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4b7c0() {
   double input = 0.285101;
   input += synapse0x1b4b030();
   input += synapse0x1b4b070();
   input += synapse0x1b4b0b0();
   input += synapse0x1b4b0f0();
   input += synapse0x1b4ba70();
   input += synapse0x1b57dc0();
   input += synapse0x1b57e00();
   input += synapse0x1b57e40();
   input += synapse0x1b57e80();
   input += synapse0x1b57ec0();
   input += synapse0x1b57f00();
   input += synapse0x1b57f40();
   input += synapse0x1b57f80();
   input += synapse0x1b57fc0();
   input += synapse0x1b58000();
   input += synapse0x1b58040();
   input += synapse0x1b4b950();
   input += synapse0x1b4b990();
   input += synapse0x1b58190();
   input += synapse0x1b581d0();
   input += synapse0x1b58210();
   input += synapse0x1b58250();
   input += synapse0x1b58290();
   input += synapse0x1b582d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4b7c0() {
   double input = input0x1b4b7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b58310() {
   double input = -0.21344;
   input += synapse0x1b58650();
   input += synapse0x1b58690();
   input += synapse0x1b586d0();
   input += synapse0x1b58710();
   input += synapse0x1b58750();
   input += synapse0x1b58790();
   input += synapse0x1b587d0();
   input += synapse0x1b58810();
   input += synapse0x1b58850();
   input += synapse0x1b58890();
   input += synapse0x1b588d0();
   input += synapse0x1b58910();
   input += synapse0x1b58950();
   input += synapse0x1b58990();
   input += synapse0x1b589d0();
   input += synapse0x1b58a10();
   input += synapse0x1b584a0();
   input += synapse0x1b584e0();
   input += synapse0x1b58b60();
   input += synapse0x1b58ba0();
   input += synapse0x1b58be0();
   input += synapse0x1b58c20();
   input += synapse0x1b58c60();
   input += synapse0x1b58ca0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b58310() {
   double input = input0x1b58310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b58ce0() {
   double input = 0.570999;
   input += synapse0x1b59020();
   input += synapse0x1b59060();
   input += synapse0x1b590a0();
   input += synapse0x1b590e0();
   input += synapse0x1b59120();
   input += synapse0x1b59160();
   input += synapse0x1b591a0();
   input += synapse0x1b591e0();
   input += synapse0x1b59220();
   input += synapse0x1b59260();
   input += synapse0x1b592a0();
   input += synapse0x1b592e0();
   input += synapse0x1b59320();
   input += synapse0x1b59360();
   input += synapse0x1b593a0();
   input += synapse0x1b593e0();
   input += synapse0x1b58e70();
   input += synapse0x1b58eb0();
   input += synapse0x1b59530();
   input += synapse0x1b59570();
   input += synapse0x1b595b0();
   input += synapse0x1b595f0();
   input += synapse0x1b59630();
   input += synapse0x1b59670();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b58ce0() {
   double input = input0x1b58ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b596b0() {
   double input = 0.0836918;
   input += synapse0x1b599f0();
   input += synapse0x1b59a30();
   input += synapse0x1b59a70();
   input += synapse0x1b59ab0();
   input += synapse0x1b59af0();
   input += synapse0x1b59b30();
   input += synapse0x1b59b70();
   input += synapse0x1b59bb0();
   input += synapse0x1b59bf0();
   input += synapse0x1b59c30();
   input += synapse0x1b59c70();
   input += synapse0x1b59cb0();
   input += synapse0x1b59cf0();
   input += synapse0x1b59d30();
   input += synapse0x1b59d70();
   input += synapse0x1b59db0();
   input += synapse0x1b59840();
   input += synapse0x1b59880();
   input += synapse0x1b59f00();
   input += synapse0x1b59f40();
   input += synapse0x1b59f80();
   input += synapse0x1b59fc0();
   input += synapse0x1b5a000();
   input += synapse0x1b5a040();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b596b0() {
   double input = input0x1b596b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5a080() {
   double input = 0.47103;
   input += synapse0x1b5a3c0();
   input += synapse0x1b5a400();
   input += synapse0x1b5a440();
   input += synapse0x1b5a480();
   input += synapse0x1b5a4c0();
   input += synapse0x1b5a500();
   input += synapse0x1b5a540();
   input += synapse0x1b5a580();
   input += synapse0x1b5a5c0();
   input += synapse0x1b5a600();
   input += synapse0x1b5a640();
   input += synapse0x1b5a680();
   input += synapse0x1b5a6c0();
   input += synapse0x1b5a700();
   input += synapse0x1b5a740();
   input += synapse0x1b5a780();
   input += synapse0x1b5a210();
   input += synapse0x1b5a250();
   input += synapse0x1b5a8d0();
   input += synapse0x1b5a910();
   input += synapse0x1b5a950();
   input += synapse0x1b5a990();
   input += synapse0x1b5a9d0();
   input += synapse0x1b5aa10();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5a080() {
   double input = input0x1b5a080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5aa50() {
   double input = -1.47106;
   input += synapse0x1b5ad90();
   input += synapse0x1b5add0();
   input += synapse0x1b5ae10();
   input += synapse0x1b5ae50();
   input += synapse0x1b5ae90();
   input += synapse0x1b5aed0();
   input += synapse0x1b5af10();
   input += synapse0x1b5af50();
   input += synapse0x1b5af90();
   input += synapse0x1b5afd0();
   input += synapse0x1b5b010();
   input += synapse0x1b5b050();
   input += synapse0x1b5b090();
   input += synapse0x1b5b0d0();
   input += synapse0x1b5b110();
   input += synapse0x1b5b150();
   input += synapse0x1b5abe0();
   input += synapse0x1b5ac20();
   input += synapse0x1b5b2a0();
   input += synapse0x1b5b2e0();
   input += synapse0x1b5b320();
   input += synapse0x1b5b360();
   input += synapse0x1b5b3a0();
   input += synapse0x1b5b3e0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5aa50() {
   double input = input0x1b5aa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5b420() {
   double input = -0.62065;
   input += synapse0x1b5b760();
   input += synapse0x1b5b7a0();
   input += synapse0x1b5b7e0();
   input += synapse0x1b5b820();
   input += synapse0x1b5b860();
   input += synapse0x1b5b8a0();
   input += synapse0x1b5b8e0();
   input += synapse0x1b5b920();
   input += synapse0x1b5b960();
   input += synapse0x1b5b9a0();
   input += synapse0x1b5b9e0();
   input += synapse0x1b5ba20();
   input += synapse0x1b5ba60();
   input += synapse0x1b5baa0();
   input += synapse0x1b5bae0();
   input += synapse0x1b5bb20();
   input += synapse0x1b5b5b0();
   input += synapse0x1b5b5f0();
   input += synapse0x1b5bc70();
   input += synapse0x1b5bcb0();
   input += synapse0x1b5bcf0();
   input += synapse0x1b5bd30();
   input += synapse0x1b5bd70();
   input += synapse0x1b5bdb0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5b420() {
   double input = input0x1b5b420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5bdf0() {
   double input = -1.6318;
   input += synapse0x1b5c130();
   input += synapse0x1b5c170();
   input += synapse0x1b5c1b0();
   input += synapse0x1b5c1f0();
   input += synapse0x1b5c230();
   input += synapse0x1b5c270();
   input += synapse0x1b5c2b0();
   input += synapse0x1b5c2f0();
   input += synapse0x1b5c330();
   input += synapse0x1b5c370();
   input += synapse0x1b5c3b0();
   input += synapse0x1b5c3f0();
   input += synapse0x1b5c430();
   input += synapse0x1b5c470();
   input += synapse0x1b5c4b0();
   input += synapse0x1b5c4f0();
   input += synapse0x1b5bf80();
   input += synapse0x1b5bfc0();
   input += synapse0x1b5c640();
   input += synapse0x1b5c680();
   input += synapse0x1b5c6c0();
   input += synapse0x1b5c700();
   input += synapse0x1b5c740();
   input += synapse0x1b5c780();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5bdf0() {
   double input = input0x1b5bdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5c7c0() {
   double input = -2.69569;
   input += synapse0x1b45230();
   input += synapse0x1b45270();
   input += synapse0x1b452b0();
   input += synapse0x1b452f0();
   input += synapse0x1b45330();
   input += synapse0x1b45370();
   input += synapse0x1b453b0();
   input += synapse0x1b453f0();
   input += synapse0x1b5cf10();
   input += synapse0x1b5cf50();
   input += synapse0x1b5cf90();
   input += synapse0x1b5cfd0();
   input += synapse0x1b5d010();
   input += synapse0x1b5d050();
   input += synapse0x1b5d090();
   input += synapse0x1b5d0d0();
   input += synapse0x1b5c950();
   input += synapse0x1b5c990();
   input += synapse0x1b5d220();
   input += synapse0x1b5d260();
   input += synapse0x1b5d2a0();
   input += synapse0x1b5d2e0();
   input += synapse0x1b5d320();
   input += synapse0x1b5d360();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5c7c0() {
   double input = input0x1b5c7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5d3a0() {
   double input = -1.32261;
   input += synapse0x1b5d6e0();
   input += synapse0x1b5d720();
   input += synapse0x1b5d760();
   input += synapse0x1b5d7a0();
   input += synapse0x1b5d7e0();
   input += synapse0x1b5d820();
   input += synapse0x1b5d860();
   input += synapse0x1b5d8a0();
   input += synapse0x1b5d8e0();
   input += synapse0x1b5d920();
   input += synapse0x1b5d960();
   input += synapse0x1b5d9a0();
   input += synapse0x1b5d9e0();
   input += synapse0x1b5da20();
   input += synapse0x1b5da60();
   input += synapse0x1b5daa0();
   input += synapse0x1b5d530();
   input += synapse0x1b5d570();
   input += synapse0x1b5dbf0();
   input += synapse0x1b5dc30();
   input += synapse0x1b5dc70();
   input += synapse0x1b5dcb0();
   input += synapse0x1b5dcf0();
   input += synapse0x1b5dd30();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5d3a0() {
   double input = input0x1b5d3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b5dd70() {
   double input = -1.82915;
   input += synapse0x1b5e0b0();
   input += synapse0x1b5e0f0();
   input += synapse0x1b5e130();
   input += synapse0x1b5e170();
   input += synapse0x1b5e1b0();
   input += synapse0x1b5e1f0();
   input += synapse0x1b5e230();
   input += synapse0x1b5e270();
   input += synapse0x1b5e2b0();
   input += synapse0x1b5e2f0();
   input += synapse0x1b5e330();
   input += synapse0x1b5e370();
   input += synapse0x1b5e3b0();
   input += synapse0x1b5e3f0();
   input += synapse0x1b5e430();
   input += synapse0x1b5e470();
   input += synapse0x1b5df00();
   input += synapse0x1b5df40();
   input += synapse0x1b4ea70();
   input += synapse0x1b4eab0();
   input += synapse0x1b4eaf0();
   input += synapse0x1b4eb30();
   input += synapse0x1b4eb70();
   input += synapse0x1b4ebb0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b5dd70() {
   double input = input0x1b5dd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4ebf0() {
   double input = -2.29619;
   input += synapse0x1b4ef30();
   input += synapse0x1b4ef70();
   input += synapse0x1b4efb0();
   input += synapse0x1b4eff0();
   input += synapse0x1b4f030();
   input += synapse0x1b4f070();
   input += synapse0x1b4f0b0();
   input += synapse0x1b4f0f0();
   input += synapse0x1b4f130();
   input += synapse0x1b4f170();
   input += synapse0x1b4f1b0();
   input += synapse0x1b4f1f0();
   input += synapse0x1b4f230();
   input += synapse0x1b4f270();
   input += synapse0x1b4f2b0();
   input += synapse0x1b4f2f0();
   input += synapse0x1b4ed80();
   input += synapse0x1b4edc0();
   input += synapse0x1b4f440();
   input += synapse0x1b4f480();
   input += synapse0x1b4f4c0();
   input += synapse0x1b4f500();
   input += synapse0x1b4f540();
   input += synapse0x1b4f580();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4ebf0() {
   double input = input0x1b4ebf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4f5c0() {
   double input = 1.66309;
   input += synapse0x1b4f900();
   input += synapse0x1b4f940();
   input += synapse0x1b4f980();
   input += synapse0x1b4f9c0();
   input += synapse0x1b4fa00();
   input += synapse0x1b4fa40();
   input += synapse0x1b4fa80();
   input += synapse0x1b4fac0();
   input += synapse0x1b4fb00();
   input += synapse0x1b4fb40();
   input += synapse0x1b4fb80();
   input += synapse0x1b4fbc0();
   input += synapse0x1b4fc00();
   input += synapse0x1b4fc40();
   input += synapse0x1b4fc80();
   input += synapse0x1b4fcc0();
   input += synapse0x1b4f750();
   input += synapse0x1b4f790();
   input += synapse0x1b4fe10();
   input += synapse0x1b4fe50();
   input += synapse0x1b4fe90();
   input += synapse0x1b4fed0();
   input += synapse0x1b4ff10();
   input += synapse0x1b4ff50();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4f5c0() {
   double input = input0x1b4f5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b4ff90() {
   double input = 1.28899;
   input += synapse0x1b502d0();
   input += synapse0x1b50310();
   input += synapse0x1b50350();
   input += synapse0x1b50390();
   input += synapse0x1b503d0();
   input += synapse0x1b50410();
   input += synapse0x1b50450();
   input += synapse0x1b50490();
   input += synapse0x1b504d0();
   input += synapse0x1b50510();
   input += synapse0x1b50550();
   input += synapse0x1b50590();
   input += synapse0x1b505d0();
   input += synapse0x1b50610();
   input += synapse0x1b50650();
   input += synapse0x1b50690();
   input += synapse0x1b50120();
   input += synapse0x1b50160();
   input += synapse0x1b507e0();
   input += synapse0x1b50820();
   input += synapse0x1b50860();
   input += synapse0x1b508a0();
   input += synapse0x1b508e0();
   input += synapse0x1b50920();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b4ff90() {
   double input = input0x1b4ff90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b625d0() {
   double input = 0.636677;
   input += synapse0x1b627f0();
   input += synapse0x1b62830();
   input += synapse0x1b62870();
   input += synapse0x1b628b0();
   input += synapse0x1b628f0();
   input += synapse0x1b62930();
   input += synapse0x1b62970();
   input += synapse0x1b629b0();
   input += synapse0x1b629f0();
   input += synapse0x1b62a30();
   input += synapse0x1b62a70();
   input += synapse0x1b62ab0();
   input += synapse0x1b62af0();
   input += synapse0x1b62b30();
   input += synapse0x1b62b70();
   input += synapse0x1b62bb0();
   input += synapse0x1b50960();
   input += synapse0x1b509a0();
   input += synapse0x1b62d00();
   input += synapse0x1b62d40();
   input += synapse0x1b62d80();
   input += synapse0x1b62dc0();
   input += synapse0x1b62e00();
   input += synapse0x1b62e40();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b625d0() {
   double input = input0x1b625d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b62e80() {
   double input = -2.73531;
   input += synapse0x1b631c0();
   input += synapse0x1b63200();
   input += synapse0x1b63240();
   input += synapse0x1b63280();
   input += synapse0x1b632c0();
   input += synapse0x1b63300();
   input += synapse0x1b63340();
   input += synapse0x1b63380();
   input += synapse0x1b633c0();
   input += synapse0x1b63400();
   input += synapse0x1b63440();
   input += synapse0x1b63480();
   input += synapse0x1b634c0();
   input += synapse0x1b63500();
   input += synapse0x1b63540();
   input += synapse0x1b63580();
   input += synapse0x1b63010();
   input += synapse0x1b63050();
   input += synapse0x1b636d0();
   input += synapse0x1b63710();
   input += synapse0x1b63750();
   input += synapse0x1b63790();
   input += synapse0x1b637d0();
   input += synapse0x1b63810();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b62e80() {
   double input = input0x1b62e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b63850() {
   double input = 0.55905;
   input += synapse0x1b63b90();
   input += synapse0x1b63bd0();
   input += synapse0x1b63c10();
   input += synapse0x1b63c50();
   input += synapse0x1b63c90();
   input += synapse0x1b63cd0();
   input += synapse0x1b63d10();
   input += synapse0x1b63d50();
   input += synapse0x1b63d90();
   input += synapse0x1b63dd0();
   input += synapse0x1b63e10();
   input += synapse0x1b63e50();
   input += synapse0x1b63e90();
   input += synapse0x1b63ed0();
   input += synapse0x1b63f10();
   input += synapse0x1b63f50();
   input += synapse0x1b639e0();
   input += synapse0x1b63a20();
   input += synapse0x1b640a0();
   input += synapse0x1b640e0();
   input += synapse0x1b64120();
   input += synapse0x1b64160();
   input += synapse0x1b641a0();
   input += synapse0x1b641e0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b63850() {
   double input = input0x1b63850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b64220() {
   double input = -0.657761;
   input += synapse0x1b64560();
   input += synapse0x1b645a0();
   input += synapse0x1b645e0();
   input += synapse0x1b64620();
   input += synapse0x1b64660();
   input += synapse0x1b646a0();
   input += synapse0x1b646e0();
   input += synapse0x1b64720();
   input += synapse0x1b64760();
   input += synapse0x1b647a0();
   input += synapse0x1b647e0();
   input += synapse0x1b64820();
   input += synapse0x1b64860();
   input += synapse0x1b648a0();
   input += synapse0x1b648e0();
   input += synapse0x1b64920();
   input += synapse0x1b643b0();
   input += synapse0x1b643f0();
   input += synapse0x1b64a70();
   input += synapse0x1b64ab0();
   input += synapse0x1b64af0();
   input += synapse0x1b64b30();
   input += synapse0x1b64b70();
   input += synapse0x1b64bb0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b64220() {
   double input = input0x1b64220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b6b420() {
   double input = 1.41962;
   input += synapse0x1904ad0();
   input += synapse0x1904b10();
   input += synapse0x1b42660();
   input += synapse0x1b426a0();
   input += synapse0x1b43030();
   input += synapse0x1b43070();
   input += synapse0x1b43e00();
   input += synapse0x1b43e40();
   input += synapse0x1b447d0();
   input += synapse0x1b44810();
   input += synapse0x1b451a0();
   input += synapse0x1b451e0();
   input += synapse0x1b45c80();
   input += synapse0x1b45cc0();
   input += synapse0x1b46650();
   input += synapse0x1b46690();
   input += synapse0x1b43730();
   input += synapse0x1b43770();
   input += synapse0x1b48200();
   input += synapse0x1b48240();
   input += synapse0x1b48bd0();
   input += synapse0x1b48c10();
   input += synapse0x1b495a0();
   input += synapse0x1b495e0();
   input += synapse0x1b49f70();
   input += synapse0x1b49fb0();
   input += synapse0x1b3e110();
   input += synapse0x1b3e150();
   input += synapse0x1b4c060();
   input += synapse0x1b4c0a0();
   input += synapse0x1b4ca30();
   input += synapse0x1b4ca70();
   input += synapse0x1b4d400();
   input += synapse0x1b4d440();
   input += synapse0x1b4ddd0();
   input += synapse0x1b4de10();
   input += synapse0x1b4e7a0();
   input += synapse0x1b4e7e0();
   input += synapse0x1b472f0();
   input += synapse0x1b47330();
   input += synapse0x1b50ba0();
   input += synapse0x1b50be0();
   input += synapse0x1b51530();
   input += synapse0x1b51570();
   input += synapse0x1b51f00();
   input += synapse0x1b51f40();
   input += synapse0x1b528d0();
   input += synapse0x1b52910();
   input += synapse0x1b532a0();
   input += synapse0x1b532e0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b6b420() {
   double input = input0x1b6b420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b6b7c0() {
   double input = -0.490091;
   input += synapse0x1b559e0();
   input += synapse0x1b55a20();
   input += synapse0x1b4afa0();
   input += synapse0x1b4afe0();
   input += synapse0x1b585c0();
   input += synapse0x1b58600();
   input += synapse0x1b58f90();
   input += synapse0x1b58fd0();
   input += synapse0x1b59960();
   input += synapse0x1b599a0();
   input += synapse0x1b5a330();
   input += synapse0x1b5a370();
   input += synapse0x1b5ad00();
   input += synapse0x1b5ad40();
   input += synapse0x1b5b6d0();
   input += synapse0x1b5b710();
   input += synapse0x1b5c0a0();
   input += synapse0x1b5c0e0();
   input += synapse0x1b5ca70();
   input += synapse0x1b5cab0();
   input += synapse0x1b5d650();
   input += synapse0x1b5d690();
   input += synapse0x1b5e020();
   input += synapse0x1b5e060();
   input += synapse0x1b4eea0();
   input += synapse0x1b4eee0();
   input += synapse0x1b4f870();
   input += synapse0x1b4f8b0();
   input += synapse0x1b50240();
   input += synapse0x1b50280();
   input += synapse0x1b62760();
   input += synapse0x1b627a0();
   input += synapse0x1b63130();
   input += synapse0x1b63170();
   input += synapse0x1b63b00();
   input += synapse0x1b63b40();
   input += synapse0x1b644d0();
   input += synapse0x1b64510();
   input += synapse0x1b403c0();
   input += synapse0x1b40400();
   input += synapse0x1b53c70();
   input += synapse0x1b53cb0();
   input += synapse0x1b64bf0();
   input += synapse0x1b64c30();
   input += synapse0x1b64c70();
   input += synapse0x1b64cb0();
   input += synapse0x1b6bb60();
   input += synapse0x1b6bba0();
   input += synapse0x1b6bbe0();
   input += synapse0x1b6bc20();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b6b7c0() {
   double input = input0x1b6b7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b6bc60() {
   double input = 0.407695;
   input += synapse0x1b6bfa0();
   input += synapse0x1b6bfe0();
   input += synapse0x1b6c020();
   input += synapse0x1b6c060();
   input += synapse0x1b6c0a0();
   input += synapse0x1b6c0e0();
   input += synapse0x1b6c120();
   input += synapse0x1b6c160();
   input += synapse0x1b6c1a0();
   input += synapse0x1b6c1e0();
   input += synapse0x1b6c220();
   input += synapse0x1b6c260();
   input += synapse0x1b6c2a0();
   input += synapse0x1b6c2e0();
   input += synapse0x1b6c320();
   input += synapse0x1b6c360();
   input += synapse0x1b6bdf0();
   input += synapse0x1b6be30();
   input += synapse0x1b6c4b0();
   input += synapse0x1b6c4f0();
   input += synapse0x1b6c530();
   input += synapse0x1b6c570();
   input += synapse0x1b6c5b0();
   input += synapse0x1b6c5f0();
   input += synapse0x1b6c630();
   input += synapse0x1b6c670();
   input += synapse0x1b6c6b0();
   input += synapse0x1b6c6f0();
   input += synapse0x1b6c730();
   input += synapse0x1b6c770();
   input += synapse0x1b6c7b0();
   input += synapse0x1b6c7f0();
   input += synapse0x1b6c3a0();
   input += synapse0x1b6c3e0();
   input += synapse0x1b6c420();
   input += synapse0x1b6c460();
   input += synapse0x1b6ca40();
   input += synapse0x1b6ca80();
   input += synapse0x1b6cac0();
   input += synapse0x1b6cb00();
   input += synapse0x1b6cb40();
   input += synapse0x1b6cb80();
   input += synapse0x1b6cbc0();
   input += synapse0x1b6cc00();
   input += synapse0x1b6cc40();
   input += synapse0x1b6cc80();
   input += synapse0x1b6ccc0();
   input += synapse0x1b6cd00();
   input += synapse0x1b6cd40();
   input += synapse0x1b6cd80();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b6bc60() {
   double input = input0x1b6bc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b6cdc0() {
   double input = 1.91434;
   input += synapse0x1b6d100();
   input += synapse0x1b6d140();
   input += synapse0x1b6d180();
   input += synapse0x1b6d1c0();
   input += synapse0x1b6d200();
   input += synapse0x1b6d240();
   input += synapse0x1b6d280();
   input += synapse0x1b6d2c0();
   input += synapse0x1b6d300();
   input += synapse0x1b6d340();
   input += synapse0x1b6d380();
   input += synapse0x1b6d3c0();
   input += synapse0x1b6d400();
   input += synapse0x1b6d440();
   input += synapse0x1b6d480();
   input += synapse0x1b6d4c0();
   input += synapse0x1b6cf50();
   input += synapse0x1b6cf90();
   input += synapse0x1b6d610();
   input += synapse0x1b6d650();
   input += synapse0x1b6d690();
   input += synapse0x1b6d6d0();
   input += synapse0x1b6d710();
   input += synapse0x1b6d750();
   input += synapse0x1b6d790();
   input += synapse0x1b6d7d0();
   input += synapse0x1b6d810();
   input += synapse0x1b6d850();
   input += synapse0x1b6d890();
   input += synapse0x1b6d8d0();
   input += synapse0x1b6d910();
   input += synapse0x1b6d950();
   input += synapse0x1b6d500();
   input += synapse0x1b6d540();
   input += synapse0x1b6d580();
   input += synapse0x1b6d5c0();
   input += synapse0x1b6dba0();
   input += synapse0x1b6dbe0();
   input += synapse0x1b6dc20();
   input += synapse0x1b6dc60();
   input += synapse0x1b6dca0();
   input += synapse0x1b6dce0();
   input += synapse0x1b6dd20();
   input += synapse0x1b6dd60();
   input += synapse0x1b6dda0();
   input += synapse0x1b6dde0();
   input += synapse0x1b6de20();
   input += synapse0x1b6de60();
   input += synapse0x1b6dea0();
   input += synapse0x1b6dee0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b6cdc0() {
   double input = input0x1b6cdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b6df20() {
   double input = 0.347272;
   input += synapse0x1b6e260();
   input += synapse0x1b6e2a0();
   input += synapse0x1b6e2e0();
   input += synapse0x1b6e320();
   input += synapse0x1b6e360();
   input += synapse0x1b6e3a0();
   input += synapse0x1b6e3e0();
   input += synapse0x1b6e420();
   input += synapse0x1b6e460();
   input += synapse0x1b6e4a0();
   input += synapse0x1b6e4e0();
   input += synapse0x1b6e520();
   input += synapse0x1b6e560();
   input += synapse0x1b6e5a0();
   input += synapse0x1b6e5e0();
   input += synapse0x1b6e620();
   input += synapse0x1b6e0b0();
   input += synapse0x1b6e0f0();
   input += synapse0x1b6e770();
   input += synapse0x1b6e7b0();
   input += synapse0x1b6e7f0();
   input += synapse0x1b6e830();
   input += synapse0x1b6e870();
   input += synapse0x1b6e8b0();
   input += synapse0x1b6e8f0();
   input += synapse0x1b6e930();
   input += synapse0x1b6e970();
   input += synapse0x1b6e9b0();
   input += synapse0x1b6e9f0();
   input += synapse0x1b6ea30();
   input += synapse0x1b6ea70();
   input += synapse0x1b6eab0();
   input += synapse0x1b6e660();
   input += synapse0x1b6e6a0();
   input += synapse0x1b6e6e0();
   input += synapse0x1b6e720();
   input += synapse0x1b6ed00();
   input += synapse0x1b6ed40();
   input += synapse0x1b6ed80();
   input += synapse0x1b6edc0();
   input += synapse0x1b6ee00();
   input += synapse0x1b6ee40();
   input += synapse0x1b6ee80();
   input += synapse0x1b6eec0();
   input += synapse0x1b6ef00();
   input += synapse0x1b6ef40();
   input += synapse0x1b6ef80();
   input += synapse0x1b6efc0();
   input += synapse0x1b6f000();
   input += synapse0x1b6f040();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b6df20() {
   double input = input0x1b6df20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1b6f080() {
   double input = 3.64751;
   input += synapse0x1b6f2a0();
   input += synapse0x1b6f2e0();
   input += synapse0x1b6f320();
   input += synapse0x1b6f360();
   input += synapse0x1b6f3a0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1b6f080() {
   double input = input0x1b6f080();
   return (input * 1)+0;
}

double NNfunction_sb_sLsR::synapse0x1b3b030() {
   return (neuron0x1b3b170()*0.00918181);
}

double NNfunction_sb_sLsR::synapse0x1b3b070() {
   return (neuron0x1b3b4b0()*-0.0166484);
}

double NNfunction_sb_sLsR::synapse0x1b40450() {
   return (neuron0x1b3b7f0()*0.0370709);
}

double NNfunction_sb_sLsR::synapse0x1b40490() {
   return (neuron0x1b3bb30()*1.88743);
}

double NNfunction_sb_sLsR::synapse0x1b404d0() {
   return (neuron0x1b3be70()*0.0904179);
}

double NNfunction_sb_sLsR::synapse0x1b40510() {
   return (neuron0x1b3c1b0()*-0.0265199);
}

double NNfunction_sb_sLsR::synapse0x1b40550() {
   return (neuron0x1b3c4f0()*0.0591923);
}

double NNfunction_sb_sLsR::synapse0x1b40590() {
   return (neuron0x1b3c830()*-0.11837);
}

double NNfunction_sb_sLsR::synapse0x1b405d0() {
   return (neuron0x1b3cb70()*0.171119);
}

double NNfunction_sb_sLsR::synapse0x1b40610() {
   return (neuron0x1b3ceb0()*-0.234137);
}

double NNfunction_sb_sLsR::synapse0x1b40650() {
   return (neuron0x1b3d1f0()*0.00313599);
}

double NNfunction_sb_sLsR::synapse0x1b40690() {
   return (neuron0x1b3d530()*-0.115828);
}

double NNfunction_sb_sLsR::synapse0x1b406d0() {
   return (neuron0x1b3d870()*0.453306);
}

double NNfunction_sb_sLsR::synapse0x1b40710() {
   return (neuron0x1b3dbb0()*0.0362211);
}

double NNfunction_sb_sLsR::synapse0x1b40750() {
   return (neuron0x1b3def0()*0.201371);
}

double NNfunction_sb_sLsR::synapse0x1b40790() {
   return (neuron0x1b3e230()*-0.123249);
}

double NNfunction_sb_sLsR::synapse0x1b3afa0() {
   return (neuron0x1b3e570()*0.0521262);
}

double NNfunction_sb_sLsR::synapse0x1b3afe0() {
   return (neuron0x1b3ead0()*0.12068);
}

double NNfunction_sb_sLsR::synapse0x18f6390() {
   return (neuron0x1b3ecf0()*1.41709);
}

double NNfunction_sb_sLsR::synapse0x18f63d0() {
   return (neuron0x1b3f030()*0.0293285);
}

double NNfunction_sb_sLsR::synapse0x1b409f0() {
   return (neuron0x1b3f370()*0.113618);
}

double NNfunction_sb_sLsR::synapse0x1b40a30() {
   return (neuron0x1b3f6b0()*0.257206);
}

double NNfunction_sb_sLsR::synapse0x1b40a70() {
   return (neuron0x1b3f9f0()*0.415004);
}

double NNfunction_sb_sLsR::synapse0x1b40ab0() {
   return (neuron0x1b3fd30()*0.0735269);
}

double NNfunction_sb_sLsR::synapse0x1b40e30() {
   return (neuron0x1b3b170()*-0.230179);
}

double NNfunction_sb_sLsR::synapse0x1b40e70() {
   return (neuron0x1b3b4b0()*0.105749);
}

double NNfunction_sb_sLsR::synapse0x1b40eb0() {
   return (neuron0x1b3b7f0()*-0.673401);
}

double NNfunction_sb_sLsR::synapse0x1b40ef0() {
   return (neuron0x1b3bb30()*0.087892);
}

double NNfunction_sb_sLsR::synapse0x1b40f30() {
   return (neuron0x1b3be70()*-0.16858);
}

double NNfunction_sb_sLsR::synapse0x1b40f70() {
   return (neuron0x1b3c1b0()*-0.325123);
}

double NNfunction_sb_sLsR::synapse0x1b40fb0() {
   return (neuron0x1b3c4f0()*0.238081);
}

double NNfunction_sb_sLsR::synapse0x1b40ff0() {
   return (neuron0x1b3c830()*0.161566);
}

double NNfunction_sb_sLsR::synapse0x1b41030() {
   return (neuron0x1b3cb70()*-0.0418722);
}

double NNfunction_sb_sLsR::synapse0x1b408e0() {
   return (neuron0x1b3ceb0()*0.30804);
}

double NNfunction_sb_sLsR::synapse0x1b40920() {
   return (neuron0x1b3d1f0()*-0.502276);
}

double NNfunction_sb_sLsR::synapse0x1b40960() {
   return (neuron0x1b3d530()*-0.0894224);
}

double NNfunction_sb_sLsR::synapse0x1b409a0() {
   return (neuron0x1b3d870()*0.528665);
}

double NNfunction_sb_sLsR::synapse0x1b41280() {
   return (neuron0x1b3dbb0()*0.186458);
}

double NNfunction_sb_sLsR::synapse0x1b412c0() {
   return (neuron0x1b3def0()*0.386466);
}

double NNfunction_sb_sLsR::synapse0x1b41300() {
   return (neuron0x1b3e230()*0.235754);
}

double NNfunction_sb_sLsR::synapse0x1b40c80() {
   return (neuron0x1b3e570()*0.0321775);
}

double NNfunction_sb_sLsR::synapse0x1b40cc0() {
   return (neuron0x1b3ead0()*0.626928);
}

double NNfunction_sb_sLsR::synapse0x1b41450() {
   return (neuron0x1b3ecf0()*1.52784);
}

double NNfunction_sb_sLsR::synapse0x1b41490() {
   return (neuron0x1b3f030()*0.680403);
}

double NNfunction_sb_sLsR::synapse0x1b414d0() {
   return (neuron0x1b3f370()*0.483924);
}

double NNfunction_sb_sLsR::synapse0x1b41510() {
   return (neuron0x1b3f6b0()*-0.159694);
}

double NNfunction_sb_sLsR::synapse0x1b41550() {
   return (neuron0x1b3f9f0()*-0.123034);
}

double NNfunction_sb_sLsR::synapse0x1b41590() {
   return (neuron0x1b3fd30()*0.891377);
}

double NNfunction_sb_sLsR::synapse0x1b41910() {
   return (neuron0x1b3b170()*-0.0715901);
}

double NNfunction_sb_sLsR::synapse0x1b41950() {
   return (neuron0x1b3b4b0()*-0.065106);
}

double NNfunction_sb_sLsR::synapse0x1b41990() {
   return (neuron0x1b3b7f0()*-0.149396);
}

double NNfunction_sb_sLsR::synapse0x1b419d0() {
   return (neuron0x1b3bb30()*-0.594035);
}

double NNfunction_sb_sLsR::synapse0x1b41a10() {
   return (neuron0x1b3be70()*-0.152548);
}

double NNfunction_sb_sLsR::synapse0x1b41a50() {
   return (neuron0x1b3c1b0()*-0.0892694);
}

double NNfunction_sb_sLsR::synapse0x1b41a90() {
   return (neuron0x1b3c4f0()*-0.00246816);
}

double NNfunction_sb_sLsR::synapse0x1b41ad0() {
   return (neuron0x1b3c830()*-0.210014);
}

double NNfunction_sb_sLsR::synapse0x1b41b10() {
   return (neuron0x1b3cb70()*0.315009);
}

double NNfunction_sb_sLsR::synapse0x1b41b50() {
   return (neuron0x1b3ceb0()*0.101273);
}

double NNfunction_sb_sLsR::synapse0x1b41b90() {
   return (neuron0x1b3d1f0()*0.0431279);
}

double NNfunction_sb_sLsR::synapse0x1b41bd0() {
   return (neuron0x1b3d530()*-0.404032);
}

double NNfunction_sb_sLsR::synapse0x1b41c10() {
   return (neuron0x1b3d870()*-0.154433);
}

double NNfunction_sb_sLsR::synapse0x1b41c50() {
   return (neuron0x1b3dbb0()*0.124543);
}

double NNfunction_sb_sLsR::synapse0x1b41c90() {
   return (neuron0x1b3def0()*0.0802802);
}

double NNfunction_sb_sLsR::synapse0x1b41cd0() {
   return (neuron0x1b3e230()*-0.0117782);
}

double NNfunction_sb_sLsR::synapse0x1b41760() {
   return (neuron0x1b3e570()*-0.017144);
}

double NNfunction_sb_sLsR::synapse0x1b417a0() {
   return (neuron0x1b3ead0()*0.362823);
}

double NNfunction_sb_sLsR::synapse0x18f54e0() {
   return (neuron0x1b3ecf0()*-1.08209);
}

double NNfunction_sb_sLsR::synapse0x19042e0() {
   return (neuron0x1b3f030()*0.0584938);
}

double NNfunction_sb_sLsR::synapse0x1904320() {
   return (neuron0x1b3f370()*-0.085145);
}

double NNfunction_sb_sLsR::synapse0x1b2a200() {
   return (neuron0x1b3f6b0()*-0.0661001);
}

double NNfunction_sb_sLsR::synapse0x1b2a240() {
   return (neuron0x1b3f9f0()*0.0758678);
}

double NNfunction_sb_sLsR::synapse0x1b2a280() {
   return (neuron0x1b3fd30()*-0.100795);
}

double NNfunction_sb_sLsR::synapse0x1904b60() {
   return (neuron0x1b3b170()*-0.183136);
}

double NNfunction_sb_sLsR::synapse0x1b41200() {
   return (neuron0x1b3b4b0()*0.304489);
}

double NNfunction_sb_sLsR::synapse0x1b41240() {
   return (neuron0x1b3b7f0()*0.712596);
}

double NNfunction_sb_sLsR::synapse0x1b41e20() {
   return (neuron0x1b3bb30()*0.238167);
}

double NNfunction_sb_sLsR::synapse0x1b41e60() {
   return (neuron0x1b3be70()*-0.0632036);
}

double NNfunction_sb_sLsR::synapse0x1b41ea0() {
   return (neuron0x1b3c1b0()*-0.249251);
}

double NNfunction_sb_sLsR::synapse0x1b41ee0() {
   return (neuron0x1b3c4f0()*-0.549461);
}

double NNfunction_sb_sLsR::synapse0x1b41f20() {
   return (neuron0x1b3c830()*-0.0401113);
}

double NNfunction_sb_sLsR::synapse0x1b41f60() {
   return (neuron0x1b3cb70()*-0.120716);
}

double NNfunction_sb_sLsR::synapse0x1b41fa0() {
   return (neuron0x1b3ceb0()*-0.00426658);
}

double NNfunction_sb_sLsR::synapse0x1b41fe0() {
   return (neuron0x1b3d1f0()*-0.169393);
}

double NNfunction_sb_sLsR::synapse0x1b42020() {
   return (neuron0x1b3d530()*-0.211258);
}

double NNfunction_sb_sLsR::synapse0x1b42060() {
   return (neuron0x1b3d870()*0.266884);
}

double NNfunction_sb_sLsR::synapse0x1b420a0() {
   return (neuron0x1b3dbb0()*0.413108);
}

double NNfunction_sb_sLsR::synapse0x1b420e0() {
   return (neuron0x1b3def0()*-0.403147);
}

double NNfunction_sb_sLsR::synapse0x1b42120() {
   return (neuron0x1b3e230()*-0.487799);
}

double NNfunction_sb_sLsR::synapse0x1b3b0b0() {
   return (neuron0x1b3e570()*-0.390284);
}

double NNfunction_sb_sLsR::synapse0x1b3b0f0() {
   return (neuron0x1b3ead0()*-0.494964);
}

double NNfunction_sb_sLsR::synapse0x1b3b130() {
   return (neuron0x1b3ecf0()*0.157834);
}

double NNfunction_sb_sLsR::synapse0x1b42270() {
   return (neuron0x1b3f030()*0.0786833);
}

double NNfunction_sb_sLsR::synapse0x1b422b0() {
   return (neuron0x1b3f370()*-0.0993808);
}

double NNfunction_sb_sLsR::synapse0x1b422f0() {
   return (neuron0x1b3f6b0()*-0.485622);
}

double NNfunction_sb_sLsR::synapse0x1b42330() {
   return (neuron0x1b3f9f0()*-0.0965044);
}

double NNfunction_sb_sLsR::synapse0x1b42370() {
   return (neuron0x1b3fd30()*-0.382152);
}

double NNfunction_sb_sLsR::synapse0x1b426f0() {
   return (neuron0x1b3b170()*0.0380865);
}

double NNfunction_sb_sLsR::synapse0x1b42730() {
   return (neuron0x1b3b4b0()*-0.115467);
}

double NNfunction_sb_sLsR::synapse0x1b42770() {
   return (neuron0x1b3b7f0()*0.0725583);
}

double NNfunction_sb_sLsR::synapse0x1b427b0() {
   return (neuron0x1b3bb30()*0.603469);
}

double NNfunction_sb_sLsR::synapse0x1b427f0() {
   return (neuron0x1b3be70()*-0.0481869);
}

double NNfunction_sb_sLsR::synapse0x1b42830() {
   return (neuron0x1b3c1b0()*0.0530879);
}

double NNfunction_sb_sLsR::synapse0x1b42870() {
   return (neuron0x1b3c4f0()*0.115265);
}

double NNfunction_sb_sLsR::synapse0x1b428b0() {
   return (neuron0x1b3c830()*-0.257377);
}

double NNfunction_sb_sLsR::synapse0x1b428f0() {
   return (neuron0x1b3cb70()*0.0577657);
}

double NNfunction_sb_sLsR::synapse0x1b42930() {
   return (neuron0x1b3ceb0()*-0.0126609);
}

double NNfunction_sb_sLsR::synapse0x1b42970() {
   return (neuron0x1b3d1f0()*0.0765535);
}

double NNfunction_sb_sLsR::synapse0x1b429b0() {
   return (neuron0x1b3d530()*0.0716588);
}

double NNfunction_sb_sLsR::synapse0x1b429f0() {
   return (neuron0x1b3d870()*-1.16974);
}

double NNfunction_sb_sLsR::synapse0x1b42a30() {
   return (neuron0x1b3dbb0()*0.0299955);
}

double NNfunction_sb_sLsR::synapse0x1b42a70() {
   return (neuron0x1b3def0()*0.0447862);
}

double NNfunction_sb_sLsR::synapse0x1b42ab0() {
   return (neuron0x1b3e230()*-0.264532);
}

double NNfunction_sb_sLsR::synapse0x1b42540() {
   return (neuron0x1b3e570()*-0.132462);
}

double NNfunction_sb_sLsR::synapse0x1b42580() {
   return (neuron0x1b3ead0()*-0.0790057);
}

double NNfunction_sb_sLsR::synapse0x1b42c00() {
   return (neuron0x1b3ecf0()*-1.00024);
}

double NNfunction_sb_sLsR::synapse0x1b42c40() {
   return (neuron0x1b3f030()*0.0318928);
}

double NNfunction_sb_sLsR::synapse0x1b42c80() {
   return (neuron0x1b3f370()*-0.126005);
}

double NNfunction_sb_sLsR::synapse0x1b42cc0() {
   return (neuron0x1b3f6b0()*0.131103);
}

double NNfunction_sb_sLsR::synapse0x1b42d00() {
   return (neuron0x1b3f9f0()*0.0328254);
}

double NNfunction_sb_sLsR::synapse0x1b42d40() {
   return (neuron0x1b3fd30()*-0.0816198);
}

double NNfunction_sb_sLsR::synapse0x1b430c0() {
   return (neuron0x1b3b170()*0.284205);
}

double NNfunction_sb_sLsR::synapse0x1b43100() {
   return (neuron0x1b3b4b0()*-0.103057);
}

double NNfunction_sb_sLsR::synapse0x1b43140() {
   return (neuron0x1b3b7f0()*0.416408);
}

double NNfunction_sb_sLsR::synapse0x1b43180() {
   return (neuron0x1b3bb30()*-0.567952);
}

double NNfunction_sb_sLsR::synapse0x1b431c0() {
   return (neuron0x1b3be70()*-0.123975);
}

double NNfunction_sb_sLsR::synapse0x1b43200() {
   return (neuron0x1b3c1b0()*-0.0788082);
}

double NNfunction_sb_sLsR::synapse0x1b43240() {
   return (neuron0x1b3c4f0()*-0.162068);
}

double NNfunction_sb_sLsR::synapse0x1b43280() {
   return (neuron0x1b3c830()*0.245479);
}

double NNfunction_sb_sLsR::synapse0x1b432c0() {
   return (neuron0x1b3cb70()*0.195833);
}

double NNfunction_sb_sLsR::synapse0x1904630() {
   return (neuron0x1b3ceb0()*-0.135171);
}

double NNfunction_sb_sLsR::synapse0x1904670() {
   return (neuron0x1b3d1f0()*0.165124);
}

double NNfunction_sb_sLsR::synapse0x19046b0() {
   return (neuron0x1b3d530()*0.289296);
}

double NNfunction_sb_sLsR::synapse0x19046f0() {
   return (neuron0x1b3d870()*0.406705);
}

double NNfunction_sb_sLsR::synapse0x1904730() {
   return (neuron0x1b3dbb0()*0.200308);
}

double NNfunction_sb_sLsR::synapse0x1904770() {
   return (neuron0x1b3def0()*0.497057);
}

double NNfunction_sb_sLsR::synapse0x19047b0() {
   return (neuron0x1b3e230()*-0.430931);
}

double NNfunction_sb_sLsR::synapse0x1b42f10() {
   return (neuron0x1b3e570()*0.0338643);
}

double NNfunction_sb_sLsR::synapse0x1b42f50() {
   return (neuron0x1b3ead0()*-0.0427248);
}

double NNfunction_sb_sLsR::synapse0x1904900() {
   return (neuron0x1b3ecf0()*0.398039);
}

double NNfunction_sb_sLsR::synapse0x1904940() {
   return (neuron0x1b3f030()*0.167691);
}

double NNfunction_sb_sLsR::synapse0x1904980() {
   return (neuron0x1b3f370()*0.139746);
}

double NNfunction_sb_sLsR::synapse0x19049c0() {
   return (neuron0x1b3f6b0()*0.206862);
}

double NNfunction_sb_sLsR::synapse0x1904a00() {
   return (neuron0x1b3f9f0()*0.160181);
}

double NNfunction_sb_sLsR::synapse0x1b43b10() {
   return (neuron0x1b3fd30()*0.0788665);
}

double NNfunction_sb_sLsR::synapse0x1b43e90() {
   return (neuron0x1b3b170()*-0.0829205);
}

double NNfunction_sb_sLsR::synapse0x1b43ed0() {
   return (neuron0x1b3b4b0()*0.293552);
}

double NNfunction_sb_sLsR::synapse0x1b43f10() {
   return (neuron0x1b3b7f0()*-0.382457);
}

double NNfunction_sb_sLsR::synapse0x1b43f50() {
   return (neuron0x1b3bb30()*0.236391);
}

double NNfunction_sb_sLsR::synapse0x1b43f90() {
   return (neuron0x1b3be70()*0.242036);
}

double NNfunction_sb_sLsR::synapse0x1b43fd0() {
   return (neuron0x1b3c1b0()*0.172739);
}

double NNfunction_sb_sLsR::synapse0x1b44010() {
   return (neuron0x1b3c4f0()*-0.152565);
}

double NNfunction_sb_sLsR::synapse0x1b44050() {
   return (neuron0x1b3c830()*-0.342171);
}

double NNfunction_sb_sLsR::synapse0x1b44090() {
   return (neuron0x1b3cb70()*-0.314285);
}

double NNfunction_sb_sLsR::synapse0x1b440d0() {
   return (neuron0x1b3ceb0()*0.315474);
}

double NNfunction_sb_sLsR::synapse0x1b44110() {
   return (neuron0x1b3d1f0()*0.0415579);
}

double NNfunction_sb_sLsR::synapse0x1b44150() {
   return (neuron0x1b3d530()*-0.0662438);
}

double NNfunction_sb_sLsR::synapse0x1b44190() {
   return (neuron0x1b3d870()*-1.22934);
}

double NNfunction_sb_sLsR::synapse0x1b441d0() {
   return (neuron0x1b3dbb0()*-0.302026);
}

double NNfunction_sb_sLsR::synapse0x1b44210() {
   return (neuron0x1b3def0()*-0.0622522);
}

double NNfunction_sb_sLsR::synapse0x1b44250() {
   return (neuron0x1b3e230()*0.0302399);
}

double NNfunction_sb_sLsR::synapse0x1b43ce0() {
   return (neuron0x1b3e570()*0.113613);
}

double NNfunction_sb_sLsR::synapse0x1b43d20() {
   return (neuron0x1b3ead0()*0.232545);
}

double NNfunction_sb_sLsR::synapse0x1b443a0() {
   return (neuron0x1b3ecf0()*-0.882902);
}

double NNfunction_sb_sLsR::synapse0x1b443e0() {
   return (neuron0x1b3f030()*-0.161034);
}

double NNfunction_sb_sLsR::synapse0x1b44420() {
   return (neuron0x1b3f370()*-0.00884111);
}

double NNfunction_sb_sLsR::synapse0x1b44460() {
   return (neuron0x1b3f6b0()*0.27774);
}

double NNfunction_sb_sLsR::synapse0x1b444a0() {
   return (neuron0x1b3f9f0()*-0.0348266);
}

double NNfunction_sb_sLsR::synapse0x1b444e0() {
   return (neuron0x1b3fd30()*-0.0391045);
}

double NNfunction_sb_sLsR::synapse0x1b44860() {
   return (neuron0x1b3b170()*-0.0204835);
}

double NNfunction_sb_sLsR::synapse0x1b448a0() {
   return (neuron0x1b3b4b0()*0.0454188);
}

double NNfunction_sb_sLsR::synapse0x1b448e0() {
   return (neuron0x1b3b7f0()*-0.19839);
}

double NNfunction_sb_sLsR::synapse0x1b44920() {
   return (neuron0x1b3bb30()*0.394476);
}

double NNfunction_sb_sLsR::synapse0x1b44960() {
   return (neuron0x1b3be70()*-0.114704);
}

double NNfunction_sb_sLsR::synapse0x1b449a0() {
   return (neuron0x1b3c1b0()*0.254762);
}

double NNfunction_sb_sLsR::synapse0x1b449e0() {
   return (neuron0x1b3c4f0()*-0.120356);
}

double NNfunction_sb_sLsR::synapse0x1b44a20() {
   return (neuron0x1b3c830()*-0.168824);
}

double NNfunction_sb_sLsR::synapse0x1b44a60() {
   return (neuron0x1b3cb70()*0.194395);
}

double NNfunction_sb_sLsR::synapse0x1b44aa0() {
   return (neuron0x1b3ceb0()*-0.0182816);
}

double NNfunction_sb_sLsR::synapse0x1b44ae0() {
   return (neuron0x1b3d1f0()*-0.153229);
}

double NNfunction_sb_sLsR::synapse0x1b44b20() {
   return (neuron0x1b3d530()*-1.16743);
}

double NNfunction_sb_sLsR::synapse0x1b44b60() {
   return (neuron0x1b3d870()*-0.738959);
}

double NNfunction_sb_sLsR::synapse0x1b44ba0() {
   return (neuron0x1b3dbb0()*0.161811);
}

double NNfunction_sb_sLsR::synapse0x1b44be0() {
   return (neuron0x1b3def0()*-0.845727);
}

double NNfunction_sb_sLsR::synapse0x1b44c20() {
   return (neuron0x1b3e230()*-0.543375);
}

double NNfunction_sb_sLsR::synapse0x1b446b0() {
   return (neuron0x1b3e570()*-0.0239305);
}

double NNfunction_sb_sLsR::synapse0x1b446f0() {
   return (neuron0x1b3ead0()*0.189128);
}

double NNfunction_sb_sLsR::synapse0x1b44d70() {
   return (neuron0x1b3ecf0()*0.414463);
}

double NNfunction_sb_sLsR::synapse0x1b44db0() {
   return (neuron0x1b3f030()*-0.0368321);
}

double NNfunction_sb_sLsR::synapse0x1b44df0() {
   return (neuron0x1b3f370()*-0.158984);
}

double NNfunction_sb_sLsR::synapse0x1b44e30() {
   return (neuron0x1b3f6b0()*-0.187797);
}

double NNfunction_sb_sLsR::synapse0x1b44e70() {
   return (neuron0x1b3f9f0()*0.157036);
}

double NNfunction_sb_sLsR::synapse0x1b44eb0() {
   return (neuron0x1b3fd30()*0.0028959);
}

double NNfunction_sb_sLsR::synapse0x1b3e9c0() {
   return (neuron0x1b3b170()*0.109511);
}

double NNfunction_sb_sLsR::synapse0x1b3ea00() {
   return (neuron0x1b3b4b0()*-0.287767);
}

double NNfunction_sb_sLsR::synapse0x1b3ea40() {
   return (neuron0x1b3b7f0()*0.516917);
}

double NNfunction_sb_sLsR::synapse0x1b3ea80() {
   return (neuron0x1b3bb30()*0.350497);
}

double NNfunction_sb_sLsR::synapse0x1b45440() {
   return (neuron0x1b3be70()*1.1024);
}

double NNfunction_sb_sLsR::synapse0x1b45480() {
   return (neuron0x1b3c1b0()*0.0137781);
}

double NNfunction_sb_sLsR::synapse0x1b454c0() {
   return (neuron0x1b3c4f0()*-0.198623);
}

double NNfunction_sb_sLsR::synapse0x1b45500() {
   return (neuron0x1b3c830()*-0.268893);
}

double NNfunction_sb_sLsR::synapse0x1b45540() {
   return (neuron0x1b3cb70()*-0.212204);
}

double NNfunction_sb_sLsR::synapse0x1b45580() {
   return (neuron0x1b3ceb0()*0.181142);
}

double NNfunction_sb_sLsR::synapse0x1b455c0() {
   return (neuron0x1b3d1f0()*-0.286666);
}

double NNfunction_sb_sLsR::synapse0x1b45600() {
   return (neuron0x1b3d530()*0.148187);
}

double NNfunction_sb_sLsR::synapse0x1b45640() {
   return (neuron0x1b3d870()*-0.0315278);
}

double NNfunction_sb_sLsR::synapse0x1b45680() {
   return (neuron0x1b3dbb0()*-0.174415);
}

double NNfunction_sb_sLsR::synapse0x1b456c0() {
   return (neuron0x1b3def0()*-0.0672221);
}

double NNfunction_sb_sLsR::synapse0x1b45700() {
   return (neuron0x1b3e230()*-0.144797);
}

double NNfunction_sb_sLsR::synapse0x1b45080() {
   return (neuron0x1b3e570()*0.832977);
}

double NNfunction_sb_sLsR::synapse0x1b450c0() {
   return (neuron0x1b3ead0()*0.604073);
}

double NNfunction_sb_sLsR::synapse0x1b45850() {
   return (neuron0x1b3ecf0()*0.0223961);
}

double NNfunction_sb_sLsR::synapse0x1b45890() {
   return (neuron0x1b3f030()*0.0375398);
}

double NNfunction_sb_sLsR::synapse0x1b458d0() {
   return (neuron0x1b3f370()*0.215987);
}

double NNfunction_sb_sLsR::synapse0x1b45910() {
   return (neuron0x1b3f6b0()*0.0360014);
}

double NNfunction_sb_sLsR::synapse0x1b45950() {
   return (neuron0x1b3f9f0()*0.126376);
}

double NNfunction_sb_sLsR::synapse0x1b45990() {
   return (neuron0x1b3fd30()*0.150565);
}

double NNfunction_sb_sLsR::synapse0x1b45d10() {
   return (neuron0x1b3b170()*-0.00760301);
}

double NNfunction_sb_sLsR::synapse0x1b45d50() {
   return (neuron0x1b3b4b0()*-0.380949);
}

double NNfunction_sb_sLsR::synapse0x1b45d90() {
   return (neuron0x1b3b7f0()*0.157661);
}

double NNfunction_sb_sLsR::synapse0x1b45dd0() {
   return (neuron0x1b3bb30()*-0.0117648);
}

double NNfunction_sb_sLsR::synapse0x1b45e10() {
   return (neuron0x1b3be70()*-0.186813);
}

double NNfunction_sb_sLsR::synapse0x1b45e50() {
   return (neuron0x1b3c1b0()*0.164986);
}

double NNfunction_sb_sLsR::synapse0x1b45e90() {
   return (neuron0x1b3c4f0()*-0.181714);
}

double NNfunction_sb_sLsR::synapse0x1b45ed0() {
   return (neuron0x1b3c830()*-0.0903798);
}

double NNfunction_sb_sLsR::synapse0x1b45f10() {
   return (neuron0x1b3cb70()*-0.184641);
}

double NNfunction_sb_sLsR::synapse0x1b45f50() {
   return (neuron0x1b3ceb0()*0.250311);
}

double NNfunction_sb_sLsR::synapse0x1b45f90() {
   return (neuron0x1b3d1f0()*-0.0594115);
}

double NNfunction_sb_sLsR::synapse0x1b45fd0() {
   return (neuron0x1b3d530()*-0.936319);
}

double NNfunction_sb_sLsR::synapse0x1b46010() {
   return (neuron0x1b3d870()*0.564542);
}

double NNfunction_sb_sLsR::synapse0x1b46050() {
   return (neuron0x1b3dbb0()*-0.00993459);
}

double NNfunction_sb_sLsR::synapse0x1b46090() {
   return (neuron0x1b3def0()*-0.301225);
}

double NNfunction_sb_sLsR::synapse0x1b460d0() {
   return (neuron0x1b3e230()*-0.524779);
}

double NNfunction_sb_sLsR::synapse0x1b45b60() {
   return (neuron0x1b3e570()*0.409587);
}

double NNfunction_sb_sLsR::synapse0x1b45ba0() {
   return (neuron0x1b3ead0()*-0.286622);
}

double NNfunction_sb_sLsR::synapse0x1b46220() {
   return (neuron0x1b3ecf0()*1.02453);
}

double NNfunction_sb_sLsR::synapse0x1b46260() {
   return (neuron0x1b3f030()*-0.0750053);
}

double NNfunction_sb_sLsR::synapse0x1b462a0() {
   return (neuron0x1b3f370()*-0.148021);
}

double NNfunction_sb_sLsR::synapse0x1b462e0() {
   return (neuron0x1b3f6b0()*0.0167981);
}

double NNfunction_sb_sLsR::synapse0x1b46320() {
   return (neuron0x1b3f9f0()*-0.131351);
}

double NNfunction_sb_sLsR::synapse0x1b46360() {
   return (neuron0x1b3fd30()*-0.324249);
}

double NNfunction_sb_sLsR::synapse0x1b466e0() {
   return (neuron0x1b3b170()*0.421519);
}

double NNfunction_sb_sLsR::synapse0x1b46720() {
   return (neuron0x1b3b4b0()*-0.436533);
}

double NNfunction_sb_sLsR::synapse0x1b46760() {
   return (neuron0x1b3b7f0()*-0.0333625);
}

double NNfunction_sb_sLsR::synapse0x1b467a0() {
   return (neuron0x1b3bb30()*-0.0975372);
}

double NNfunction_sb_sLsR::synapse0x1b467e0() {
   return (neuron0x1b3be70()*-0.165678);
}

double NNfunction_sb_sLsR::synapse0x1b46820() {
   return (neuron0x1b3c1b0()*0.0616128);
}

double NNfunction_sb_sLsR::synapse0x1b46860() {
   return (neuron0x1b3c4f0()*-0.0550287);
}

double NNfunction_sb_sLsR::synapse0x1b468a0() {
   return (neuron0x1b3c830()*0.255368);
}

double NNfunction_sb_sLsR::synapse0x1b468e0() {
   return (neuron0x1b3cb70()*-0.0831911);
}

double NNfunction_sb_sLsR::synapse0x1b46920() {
   return (neuron0x1b3ceb0()*-0.0871028);
}

double NNfunction_sb_sLsR::synapse0x1b46960() {
   return (neuron0x1b3d1f0()*-0.199616);
}

double NNfunction_sb_sLsR::synapse0x1b469a0() {
   return (neuron0x1b3d530()*0.144737);
}

double NNfunction_sb_sLsR::synapse0x1b469e0() {
   return (neuron0x1b3d870()*0.0680835);
}

double NNfunction_sb_sLsR::synapse0x1b46a20() {
   return (neuron0x1b3dbb0()*0.185521);
}

double NNfunction_sb_sLsR::synapse0x1b46a60() {
   return (neuron0x1b3def0()*-0.783163);
}

double NNfunction_sb_sLsR::synapse0x1b46aa0() {
   return (neuron0x1b3e230()*0.191003);
}

double NNfunction_sb_sLsR::synapse0x1b46530() {
   return (neuron0x1b3e570()*0.107203);
}

double NNfunction_sb_sLsR::synapse0x1b46570() {
   return (neuron0x1b3ead0()*0.0576375);
}

double NNfunction_sb_sLsR::synapse0x1b43300() {
   return (neuron0x1b3ecf0()*0.15363);
}

double NNfunction_sb_sLsR::synapse0x1b43340() {
   return (neuron0x1b3f030()*-0.16407);
}

double NNfunction_sb_sLsR::synapse0x1b43380() {
   return (neuron0x1b3f370()*-0.0225481);
}

double NNfunction_sb_sLsR::synapse0x1b433c0() {
   return (neuron0x1b3f6b0()*-0.0015739);
}

double NNfunction_sb_sLsR::synapse0x1b43400() {
   return (neuron0x1b3f9f0()*-0.204283);
}

double NNfunction_sb_sLsR::synapse0x1b43440() {
   return (neuron0x1b3fd30()*0.277354);
}

double NNfunction_sb_sLsR::synapse0x1b437c0() {
   return (neuron0x1b3b170()*0.0711241);
}

double NNfunction_sb_sLsR::synapse0x1b43800() {
   return (neuron0x1b3b4b0()*0.402346);
}

double NNfunction_sb_sLsR::synapse0x1b43840() {
   return (neuron0x1b3b7f0()*-0.462066);
}

double NNfunction_sb_sLsR::synapse0x1b43880() {
   return (neuron0x1b3bb30()*0.111421);
}

double NNfunction_sb_sLsR::synapse0x1b438c0() {
   return (neuron0x1b3be70()*0.217465);
}

double NNfunction_sb_sLsR::synapse0x1b43900() {
   return (neuron0x1b3c1b0()*-0.00272111);
}

double NNfunction_sb_sLsR::synapse0x1b43940() {
   return (neuron0x1b3c4f0()*0.0110744);
}

double NNfunction_sb_sLsR::synapse0x1b43980() {
   return (neuron0x1b3c830()*0.410965);
}

double NNfunction_sb_sLsR::synapse0x1b439c0() {
   return (neuron0x1b3cb70()*0.236298);
}

double NNfunction_sb_sLsR::synapse0x1b43a00() {
   return (neuron0x1b3ceb0()*-0.299726);
}

double NNfunction_sb_sLsR::synapse0x1b43a40() {
   return (neuron0x1b3d1f0()*-0.639542);
}

double NNfunction_sb_sLsR::synapse0x1b43a80() {
   return (neuron0x1b3d530()*-0.62979);
}

double NNfunction_sb_sLsR::synapse0x1b43ac0() {
   return (neuron0x1b3d870()*0.324915);
}

double NNfunction_sb_sLsR::synapse0x1b47c00() {
   return (neuron0x1b3dbb0()*-0.673971);
}

double NNfunction_sb_sLsR::synapse0x1b47c40() {
   return (neuron0x1b3def0()*-0.243839);
}

double NNfunction_sb_sLsR::synapse0x1b47c80() {
   return (neuron0x1b3e230()*-0.0285429);
}

double NNfunction_sb_sLsR::synapse0x1b43610() {
   return (neuron0x1b3e570()*-0.409099);
}

double NNfunction_sb_sLsR::synapse0x1b43650() {
   return (neuron0x1b3ead0()*-0.319802);
}

double NNfunction_sb_sLsR::synapse0x1b47dd0() {
   return (neuron0x1b3ecf0()*0.72187);
}

double NNfunction_sb_sLsR::synapse0x1b47e10() {
   return (neuron0x1b3f030()*-0.0729535);
}

double NNfunction_sb_sLsR::synapse0x1b47e50() {
   return (neuron0x1b3f370()*-0.119705);
}

double NNfunction_sb_sLsR::synapse0x1b47e90() {
   return (neuron0x1b3f6b0()*-0.0755323);
}

double NNfunction_sb_sLsR::synapse0x1b47ed0() {
   return (neuron0x1b3f9f0()*-0.864219);
}

double NNfunction_sb_sLsR::synapse0x1b47f10() {
   return (neuron0x1b3fd30()*-0.448624);
}

double NNfunction_sb_sLsR::synapse0x1b48290() {
   return (neuron0x1b3b170()*0.220569);
}

double NNfunction_sb_sLsR::synapse0x1b482d0() {
   return (neuron0x1b3b4b0()*0.224569);
}

double NNfunction_sb_sLsR::synapse0x1b48310() {
   return (neuron0x1b3b7f0()*-0.0985782);
}

double NNfunction_sb_sLsR::synapse0x1b48350() {
   return (neuron0x1b3bb30()*0.396754);
}

double NNfunction_sb_sLsR::synapse0x1b48390() {
   return (neuron0x1b3be70()*0.51409);
}

double NNfunction_sb_sLsR::synapse0x1b483d0() {
   return (neuron0x1b3c1b0()*0.158879);
}

double NNfunction_sb_sLsR::synapse0x1b48410() {
   return (neuron0x1b3c4f0()*-0.242264);
}

double NNfunction_sb_sLsR::synapse0x1b48450() {
   return (neuron0x1b3c830()*-0.0912564);
}

double NNfunction_sb_sLsR::synapse0x1b48490() {
   return (neuron0x1b3cb70()*0.0202573);
}

double NNfunction_sb_sLsR::synapse0x1b484d0() {
   return (neuron0x1b3ceb0()*0.107861);
}

double NNfunction_sb_sLsR::synapse0x1b48510() {
   return (neuron0x1b3d1f0()*0.121225);
}

double NNfunction_sb_sLsR::synapse0x1b48550() {
   return (neuron0x1b3d530()*0.305826);
}

double NNfunction_sb_sLsR::synapse0x1b48590() {
   return (neuron0x1b3d870()*-0.285111);
}

double NNfunction_sb_sLsR::synapse0x1b485d0() {
   return (neuron0x1b3dbb0()*-0.522031);
}

double NNfunction_sb_sLsR::synapse0x1b48610() {
   return (neuron0x1b3def0()*-0.531005);
}

double NNfunction_sb_sLsR::synapse0x1b48650() {
   return (neuron0x1b3e230()*-0.367937);
}

double NNfunction_sb_sLsR::synapse0x1b480e0() {
   return (neuron0x1b3e570()*0.274255);
}

double NNfunction_sb_sLsR::synapse0x1b48120() {
   return (neuron0x1b3ead0()*0.061493);
}

double NNfunction_sb_sLsR::synapse0x1b487a0() {
   return (neuron0x1b3ecf0()*0.520616);
}

double NNfunction_sb_sLsR::synapse0x1b487e0() {
   return (neuron0x1b3f030()*-0.187287);
}

double NNfunction_sb_sLsR::synapse0x1b48820() {
   return (neuron0x1b3f370()*-0.409934);
}

double NNfunction_sb_sLsR::synapse0x1b48860() {
   return (neuron0x1b3f6b0()*0.0467611);
}

double NNfunction_sb_sLsR::synapse0x1b488a0() {
   return (neuron0x1b3f9f0()*0.222435);
}

double NNfunction_sb_sLsR::synapse0x1b488e0() {
   return (neuron0x1b3fd30()*-0.246052);
}

double NNfunction_sb_sLsR::synapse0x1b48c60() {
   return (neuron0x1b3b170()*-0.200036);
}

double NNfunction_sb_sLsR::synapse0x1b48ca0() {
   return (neuron0x1b3b4b0()*-0.57507);
}

double NNfunction_sb_sLsR::synapse0x1b48ce0() {
   return (neuron0x1b3b7f0()*0.567897);
}

double NNfunction_sb_sLsR::synapse0x1b48d20() {
   return (neuron0x1b3bb30()*-0.0251244);
}

double NNfunction_sb_sLsR::synapse0x1b48d60() {
   return (neuron0x1b3be70()*-0.242837);
}

double NNfunction_sb_sLsR::synapse0x1b48da0() {
   return (neuron0x1b3c1b0()*-0.170437);
}

double NNfunction_sb_sLsR::synapse0x1b48de0() {
   return (neuron0x1b3c4f0()*0.891922);
}

double NNfunction_sb_sLsR::synapse0x1b48e20() {
   return (neuron0x1b3c830()*-0.598841);
}

double NNfunction_sb_sLsR::synapse0x1b48e60() {
   return (neuron0x1b3cb70()*0.0092919);
}

double NNfunction_sb_sLsR::synapse0x1b48ea0() {
   return (neuron0x1b3ceb0()*0.545762);
}

double NNfunction_sb_sLsR::synapse0x1b48ee0() {
   return (neuron0x1b3d1f0()*-0.0128473);
}

double NNfunction_sb_sLsR::synapse0x1b48f20() {
   return (neuron0x1b3d530()*0.277551);
}

double NNfunction_sb_sLsR::synapse0x1b48f60() {
   return (neuron0x1b3d870()*-0.0975248);
}

double NNfunction_sb_sLsR::synapse0x1b48fa0() {
   return (neuron0x1b3dbb0()*-0.102773);
}

double NNfunction_sb_sLsR::synapse0x1b48fe0() {
   return (neuron0x1b3def0()*0.0383186);
}

double NNfunction_sb_sLsR::synapse0x1b49020() {
   return (neuron0x1b3e230()*-0.300465);
}

double NNfunction_sb_sLsR::synapse0x1b48ab0() {
   return (neuron0x1b3e570()*0.164853);
}

double NNfunction_sb_sLsR::synapse0x1b48af0() {
   return (neuron0x1b3ead0()*0.402754);
}

double NNfunction_sb_sLsR::synapse0x1b49170() {
   return (neuron0x1b3ecf0()*0.128362);
}

double NNfunction_sb_sLsR::synapse0x1b491b0() {
   return (neuron0x1b3f030()*0.512359);
}

double NNfunction_sb_sLsR::synapse0x1b491f0() {
   return (neuron0x1b3f370()*0.1005);
}

double NNfunction_sb_sLsR::synapse0x1b49230() {
   return (neuron0x1b3f6b0()*-0.364446);
}

double NNfunction_sb_sLsR::synapse0x1b49270() {
   return (neuron0x1b3f9f0()*0.620582);
}

double NNfunction_sb_sLsR::synapse0x1b492b0() {
   return (neuron0x1b3fd30()*0.40639);
}

double NNfunction_sb_sLsR::synapse0x1b49630() {
   return (neuron0x1b3b170()*0.16911);
}

double NNfunction_sb_sLsR::synapse0x1b49670() {
   return (neuron0x1b3b4b0()*-0.0487405);
}

double NNfunction_sb_sLsR::synapse0x1b496b0() {
   return (neuron0x1b3b7f0()*0.594405);
}

double NNfunction_sb_sLsR::synapse0x1b496f0() {
   return (neuron0x1b3bb30()*0.707057);
}

double NNfunction_sb_sLsR::synapse0x1b49730() {
   return (neuron0x1b3be70()*0.017608);
}

double NNfunction_sb_sLsR::synapse0x1b49770() {
   return (neuron0x1b3c1b0()*-0.0735703);
}

double NNfunction_sb_sLsR::synapse0x1b497b0() {
   return (neuron0x1b3c4f0()*0.131229);
}

double NNfunction_sb_sLsR::synapse0x1b497f0() {
   return (neuron0x1b3c830()*0.160877);
}

double NNfunction_sb_sLsR::synapse0x1b49830() {
   return (neuron0x1b3cb70()*-0.00274084);
}

double NNfunction_sb_sLsR::synapse0x1b49870() {
   return (neuron0x1b3ceb0()*0.0234577);
}

double NNfunction_sb_sLsR::synapse0x1b498b0() {
   return (neuron0x1b3d1f0()*0.0309413);
}

double NNfunction_sb_sLsR::synapse0x1b498f0() {
   return (neuron0x1b3d530()*-0.0559201);
}

double NNfunction_sb_sLsR::synapse0x1b49930() {
   return (neuron0x1b3d870()*0.272154);
}

double NNfunction_sb_sLsR::synapse0x1b49970() {
   return (neuron0x1b3dbb0()*0.0363441);
}

double NNfunction_sb_sLsR::synapse0x1b499b0() {
   return (neuron0x1b3def0()*0.0987526);
}

double NNfunction_sb_sLsR::synapse0x1b499f0() {
   return (neuron0x1b3e230()*0.137728);
}

double NNfunction_sb_sLsR::synapse0x1b49480() {
   return (neuron0x1b3e570()*-0.080467);
}

double NNfunction_sb_sLsR::synapse0x1b494c0() {
   return (neuron0x1b3ead0()*0.0738674);
}

double NNfunction_sb_sLsR::synapse0x1b49b40() {
   return (neuron0x1b3ecf0()*-0.178296);
}

double NNfunction_sb_sLsR::synapse0x1b49b80() {
   return (neuron0x1b3f030()*-0.0974687);
}

double NNfunction_sb_sLsR::synapse0x1b49bc0() {
   return (neuron0x1b3f370()*0.135459);
}

double NNfunction_sb_sLsR::synapse0x1b49c00() {
   return (neuron0x1b3f6b0()*0.117314);
}

double NNfunction_sb_sLsR::synapse0x1b49c40() {
   return (neuron0x1b3f9f0()*-0.132015);
}

double NNfunction_sb_sLsR::synapse0x1b49c80() {
   return (neuron0x1b3fd30()*-0.126276);
}

double NNfunction_sb_sLsR::synapse0x1b4a000() {
   return (neuron0x1b3b170()*-0.348877);
}

double NNfunction_sb_sLsR::synapse0x1b3b390() {
   return (neuron0x1b3b4b0()*0.0599212);
}

double NNfunction_sb_sLsR::synapse0x1b3b3d0() {
   return (neuron0x1b3b7f0()*0.303648);
}

double NNfunction_sb_sLsR::synapse0x1b3b6d0() {
   return (neuron0x1b3bb30()*0.533222);
}

double NNfunction_sb_sLsR::synapse0x1b3b710() {
   return (neuron0x1b3be70()*0.0493703);
}

double NNfunction_sb_sLsR::synapse0x1b3ba10() {
   return (neuron0x1b3c1b0()*0.0234364);
}

double NNfunction_sb_sLsR::synapse0x1b3ba50() {
   return (neuron0x1b3c4f0()*0.513271);
}

double NNfunction_sb_sLsR::synapse0x1b3bd50() {
   return (neuron0x1b3c830()*0.463814);
}

double NNfunction_sb_sLsR::synapse0x1b3bd90() {
   return (neuron0x1b3cb70()*0.632532);
}

double NNfunction_sb_sLsR::synapse0x1b3c090() {
   return (neuron0x1b3ceb0()*-0.756556);
}

double NNfunction_sb_sLsR::synapse0x1b3c0d0() {
   return (neuron0x1b3d1f0()*1.23489);
}

double NNfunction_sb_sLsR::synapse0x1b3c3d0() {
   return (neuron0x1b3d530()*-0.0467361);
}

double NNfunction_sb_sLsR::synapse0x1b3c410() {
   return (neuron0x1b3d870()*-0.23622);
}

double NNfunction_sb_sLsR::synapse0x1b3c710() {
   return (neuron0x1b3dbb0()*-0.0759586);
}

double NNfunction_sb_sLsR::synapse0x1b3c750() {
   return (neuron0x1b3def0()*0.445933);
}

double NNfunction_sb_sLsR::synapse0x1b3ca50() {
   return (neuron0x1b3e230()*-0.082897);
}

double NNfunction_sb_sLsR::synapse0x1b3ca90() {
   return (neuron0x1b3e570()*-0.205463);
}

double NNfunction_sb_sLsR::synapse0x1b3cd90() {
   return (neuron0x1b3ead0()*-0.424435);
}

double NNfunction_sb_sLsR::synapse0x1b3cdd0() {
   return (neuron0x1b3ecf0()*-0.21416);
}

double NNfunction_sb_sLsR::synapse0x1b3d0d0() {
   return (neuron0x1b3f030()*0.745015);
}

double NNfunction_sb_sLsR::synapse0x1b3d110() {
   return (neuron0x1b3f370()*0.250893);
}

double NNfunction_sb_sLsR::synapse0x1b3d410() {
   return (neuron0x1b3f6b0()*0.157261);
}

double NNfunction_sb_sLsR::synapse0x1b3d450() {
   return (neuron0x1b3f9f0()*-0.226709);
}

double NNfunction_sb_sLsR::synapse0x1b3d750() {
   return (neuron0x1b3fd30()*0.731564);
}

double NNfunction_sb_sLsR::synapse0x1b3d790() {
   return (neuron0x1b3b170()*0.0595204);
}

double NNfunction_sb_sLsR::synapse0x1b3e450() {
   return (neuron0x1b3b4b0()*0.0186563);
}

double NNfunction_sb_sLsR::synapse0x1b3e490() {
   return (neuron0x1b3b7f0()*-0.368901);
}

double NNfunction_sb_sLsR::synapse0x1b49e50() {
   return (neuron0x1b3bb30()*0.748692);
}

double NNfunction_sb_sLsR::synapse0x1b49e90() {
   return (neuron0x1b3be70()*-0.0437322);
}

double NNfunction_sb_sLsR::synapse0x1b3e790() {
   return (neuron0x1b3c1b0()*-0.0740599);
}

double NNfunction_sb_sLsR::synapse0x1b3e7d0() {
   return (neuron0x1b3c4f0()*0.00849981);
}

double NNfunction_sb_sLsR::synapse0x18f6270() {
   return (neuron0x1b3c830()*-0.0540993);
}

double NNfunction_sb_sLsR::synapse0x18f62b0() {
   return (neuron0x1b3cb70()*-0.0281114);
}

double NNfunction_sb_sLsR::synapse0x1b3ef10() {
   return (neuron0x1b3ceb0()*-0.0158847);
}

double NNfunction_sb_sLsR::synapse0x1b3ef50() {
   return (neuron0x1b3d1f0()*0.0322547);
}

double NNfunction_sb_sLsR::synapse0x1b3f250() {
   return (neuron0x1b3d530()*-0.0552527);
}

double NNfunction_sb_sLsR::synapse0x1b3f290() {
   return (neuron0x1b3d870()*0.118925);
}

double NNfunction_sb_sLsR::synapse0x1b3f590() {
   return (neuron0x1b3dbb0()*0.0232129);
}

double NNfunction_sb_sLsR::synapse0x1b3f5d0() {
   return (neuron0x1b3def0()*-0.0867272);
}

double NNfunction_sb_sLsR::synapse0x1b3f8d0() {
   return (neuron0x1b3e230()*-0.150285);
}

double NNfunction_sb_sLsR::synapse0x1b3f910() {
   return (neuron0x1b3e570()*-0.015341);
}

double NNfunction_sb_sLsR::synapse0x1b3fc10() {
   return (neuron0x1b3ead0()*-0.0561691);
}

double NNfunction_sb_sLsR::synapse0x1b3fc50() {
   return (neuron0x1b3ecf0()*0.146279);
}

double NNfunction_sb_sLsR::synapse0x1b3ff50() {
   return (neuron0x1b3f030()*0.0237625);
}

double NNfunction_sb_sLsR::synapse0x1b3ff90() {
   return (neuron0x1b3f370()*-0.00693592);
}

double NNfunction_sb_sLsR::synapse0x1b3da90() {
   return (neuron0x1b3f6b0()*0.0140916);
}

double NNfunction_sb_sLsR::synapse0x1b3dad0() {
   return (neuron0x1b3f9f0()*0.0342905);
}

double NNfunction_sb_sLsR::synapse0x1b4bd70() {
   return (neuron0x1b3fd30()*-0.0317763);
}

double NNfunction_sb_sLsR::synapse0x1b4c0f0() {
   return (neuron0x1b3b170()*-0.0584436);
}

double NNfunction_sb_sLsR::synapse0x1b4c130() {
   return (neuron0x1b3b4b0()*0.0596623);
}

double NNfunction_sb_sLsR::synapse0x1b4c170() {
   return (neuron0x1b3b7f0()*0.0388259);
}

double NNfunction_sb_sLsR::synapse0x1b4c1b0() {
   return (neuron0x1b3bb30()*-0.258943);
}

double NNfunction_sb_sLsR::synapse0x1b4c1f0() {
   return (neuron0x1b3be70()*0.0171429);
}

double NNfunction_sb_sLsR::synapse0x1b4c230() {
   return (neuron0x1b3c1b0()*-0.0773796);
}

double NNfunction_sb_sLsR::synapse0x1b4c270() {
   return (neuron0x1b3c4f0()*0.149395);
}

double NNfunction_sb_sLsR::synapse0x1b4c2b0() {
   return (neuron0x1b3c830()*0.0110635);
}

double NNfunction_sb_sLsR::synapse0x1b4c2f0() {
   return (neuron0x1b3cb70()*-0.0354552);
}

double NNfunction_sb_sLsR::synapse0x1b4c330() {
   return (neuron0x1b3ceb0()*-0.0595074);
}

double NNfunction_sb_sLsR::synapse0x1b4c370() {
   return (neuron0x1b3d1f0()*-0.0479212);
}

double NNfunction_sb_sLsR::synapse0x1b4c3b0() {
   return (neuron0x1b3d530()*-0.908716);
}

double NNfunction_sb_sLsR::synapse0x1b4c3f0() {
   return (neuron0x1b3d870()*0.501794);
}

double NNfunction_sb_sLsR::synapse0x1b4c430() {
   return (neuron0x1b3dbb0()*0.0408439);
}

double NNfunction_sb_sLsR::synapse0x1b4c470() {
   return (neuron0x1b3def0()*-0.492356);
}

double NNfunction_sb_sLsR::synapse0x1b4c4b0() {
   return (neuron0x1b3e230()*-0.464184);
}

double NNfunction_sb_sLsR::synapse0x1b4bf40() {
   return (neuron0x1b3e570()*0.107817);
}

double NNfunction_sb_sLsR::synapse0x1b4bf80() {
   return (neuron0x1b3ead0()*-0.479326);
}

double NNfunction_sb_sLsR::synapse0x1b4c600() {
   return (neuron0x1b3ecf0()*0.307894);
}

double NNfunction_sb_sLsR::synapse0x1b4c640() {
   return (neuron0x1b3f030()*0.0915045);
}

double NNfunction_sb_sLsR::synapse0x1b4c680() {
   return (neuron0x1b3f370()*0.0668562);
}

double NNfunction_sb_sLsR::synapse0x1b4c6c0() {
   return (neuron0x1b3f6b0()*0.159839);
}

double NNfunction_sb_sLsR::synapse0x1b4c700() {
   return (neuron0x1b3f9f0()*-0.0724619);
}

double NNfunction_sb_sLsR::synapse0x1b4c740() {
   return (neuron0x1b3fd30()*0.0724909);
}

double NNfunction_sb_sLsR::synapse0x1b4cac0() {
   return (neuron0x1b3b170()*-0.0862746);
}

double NNfunction_sb_sLsR::synapse0x1b4cb00() {
   return (neuron0x1b3b4b0()*0.102993);
}

double NNfunction_sb_sLsR::synapse0x1b4cb40() {
   return (neuron0x1b3b7f0()*-0.77651);
}

double NNfunction_sb_sLsR::synapse0x1b4cb80() {
   return (neuron0x1b3bb30()*1.57111);
}

double NNfunction_sb_sLsR::synapse0x1b4cbc0() {
   return (neuron0x1b3be70()*-0.268442);
}

double NNfunction_sb_sLsR::synapse0x1b4cc00() {
   return (neuron0x1b3c1b0()*-0.119619);
}

double NNfunction_sb_sLsR::synapse0x1b4cc40() {
   return (neuron0x1b3c4f0()*-0.157755);
}

double NNfunction_sb_sLsR::synapse0x1b4cc80() {
   return (neuron0x1b3c830()*-0.172651);
}

double NNfunction_sb_sLsR::synapse0x1b4ccc0() {
   return (neuron0x1b3cb70()*-0.104267);
}

double NNfunction_sb_sLsR::synapse0x1b4cd00() {
   return (neuron0x1b3ceb0()*-0.221475);
}

double NNfunction_sb_sLsR::synapse0x1b4cd40() {
   return (neuron0x1b3d1f0()*0.165);
}

double NNfunction_sb_sLsR::synapse0x1b4cd80() {
   return (neuron0x1b3d530()*-0.321308);
}

double NNfunction_sb_sLsR::synapse0x1b4cdc0() {
   return (neuron0x1b3d870()*0.47662);
}

double NNfunction_sb_sLsR::synapse0x1b4ce00() {
   return (neuron0x1b3dbb0()*-0.235324);
}

double NNfunction_sb_sLsR::synapse0x1b4ce40() {
   return (neuron0x1b3def0()*-0.10215);
}

double NNfunction_sb_sLsR::synapse0x1b4ce80() {
   return (neuron0x1b3e230()*-0.00934232);
}

double NNfunction_sb_sLsR::synapse0x1b4c910() {
   return (neuron0x1b3e570()*-0.206511);
}

double NNfunction_sb_sLsR::synapse0x1b4c950() {
   return (neuron0x1b3ead0()*-0.334721);
}

double NNfunction_sb_sLsR::synapse0x1b4cfd0() {
   return (neuron0x1b3ecf0()*0.359058);
}

double NNfunction_sb_sLsR::synapse0x1b4d010() {
   return (neuron0x1b3f030()*-0.270727);
}

double NNfunction_sb_sLsR::synapse0x1b4d050() {
   return (neuron0x1b3f370()*-0.152519);
}

double NNfunction_sb_sLsR::synapse0x1b4d090() {
   return (neuron0x1b3f6b0()*-0.0470008);
}

double NNfunction_sb_sLsR::synapse0x1b4d0d0() {
   return (neuron0x1b3f9f0()*-0.227896);
}

double NNfunction_sb_sLsR::synapse0x1b4d110() {
   return (neuron0x1b3fd30()*-0.186152);
}

double NNfunction_sb_sLsR::synapse0x1b4d490() {
   return (neuron0x1b3b170()*-0.061571);
}

double NNfunction_sb_sLsR::synapse0x1b4d4d0() {
   return (neuron0x1b3b4b0()*-0.0989667);
}

double NNfunction_sb_sLsR::synapse0x1b4d510() {
   return (neuron0x1b3b7f0()*-0.152754);
}

double NNfunction_sb_sLsR::synapse0x1b4d550() {
   return (neuron0x1b3bb30()*-0.19497);
}

double NNfunction_sb_sLsR::synapse0x1b4d590() {
   return (neuron0x1b3be70()*0.192457);
}

double NNfunction_sb_sLsR::synapse0x1b4d5d0() {
   return (neuron0x1b3c1b0()*0.0137821);
}

double NNfunction_sb_sLsR::synapse0x1b4d610() {
   return (neuron0x1b3c4f0()*0.334621);
}

double NNfunction_sb_sLsR::synapse0x1b4d650() {
   return (neuron0x1b3c830()*0.213458);
}

double NNfunction_sb_sLsR::synapse0x1b4d690() {
   return (neuron0x1b3cb70()*-0.214187);
}

double NNfunction_sb_sLsR::synapse0x1b4d6d0() {
   return (neuron0x1b3ceb0()*0.233023);
}

double NNfunction_sb_sLsR::synapse0x1b4d710() {
   return (neuron0x1b3d1f0()*-0.195796);
}

double NNfunction_sb_sLsR::synapse0x1b4d750() {
   return (neuron0x1b3d530()*0.0675817);
}

double NNfunction_sb_sLsR::synapse0x1b4d790() {
   return (neuron0x1b3d870()*-0.294011);
}

double NNfunction_sb_sLsR::synapse0x1b4d7d0() {
   return (neuron0x1b3dbb0()*-0.161842);
}

double NNfunction_sb_sLsR::synapse0x1b4d810() {
   return (neuron0x1b3def0()*-0.0389607);
}

double NNfunction_sb_sLsR::synapse0x1b4d850() {
   return (neuron0x1b3e230()*0.0684305);
}

double NNfunction_sb_sLsR::synapse0x1b4d2e0() {
   return (neuron0x1b3e570()*0.315084);
}

double NNfunction_sb_sLsR::synapse0x1b4d320() {
   return (neuron0x1b3ead0()*-0.153082);
}

double NNfunction_sb_sLsR::synapse0x1b4d9a0() {
   return (neuron0x1b3ecf0()*0.0623114);
}

double NNfunction_sb_sLsR::synapse0x1b4d9e0() {
   return (neuron0x1b3f030()*0.187692);
}

double NNfunction_sb_sLsR::synapse0x1b4da20() {
   return (neuron0x1b3f370()*0.189212);
}

double NNfunction_sb_sLsR::synapse0x1b4da60() {
   return (neuron0x1b3f6b0()*-0.289399);
}

double NNfunction_sb_sLsR::synapse0x1b4daa0() {
   return (neuron0x1b3f9f0()*0.110346);
}

double NNfunction_sb_sLsR::synapse0x1b4dae0() {
   return (neuron0x1b3fd30()*-0.220216);
}

double NNfunction_sb_sLsR::synapse0x1b4de60() {
   return (neuron0x1b3b170()*0.120415);
}

double NNfunction_sb_sLsR::synapse0x1b4dea0() {
   return (neuron0x1b3b4b0()*0.302275);
}

double NNfunction_sb_sLsR::synapse0x1b4dee0() {
   return (neuron0x1b3b7f0()*-0.462927);
}

double NNfunction_sb_sLsR::synapse0x1b4df20() {
   return (neuron0x1b3bb30()*-0.00619441);
}

double NNfunction_sb_sLsR::synapse0x1b4df60() {
   return (neuron0x1b3be70()*-0.420109);
}

double NNfunction_sb_sLsR::synapse0x1b4dfa0() {
   return (neuron0x1b3c1b0()*-0.608074);
}

double NNfunction_sb_sLsR::synapse0x1b4dfe0() {
   return (neuron0x1b3c4f0()*-0.253601);
}

double NNfunction_sb_sLsR::synapse0x1b4e020() {
   return (neuron0x1b3c830()*0.184251);
}

double NNfunction_sb_sLsR::synapse0x1b4e060() {
   return (neuron0x1b3cb70()*0.275072);
}

double NNfunction_sb_sLsR::synapse0x1b4e0a0() {
   return (neuron0x1b3ceb0()*0.272236);
}

double NNfunction_sb_sLsR::synapse0x1b4e0e0() {
   return (neuron0x1b3d1f0()*0.255509);
}

double NNfunction_sb_sLsR::synapse0x1b4e120() {
   return (neuron0x1b3d530()*-0.180555);
}

double NNfunction_sb_sLsR::synapse0x1b4e160() {
   return (neuron0x1b3d870()*-0.500028);
}

double NNfunction_sb_sLsR::synapse0x1b4e1a0() {
   return (neuron0x1b3dbb0()*-0.126107);
}

double NNfunction_sb_sLsR::synapse0x1b4e1e0() {
   return (neuron0x1b3def0()*0.370941);
}

double NNfunction_sb_sLsR::synapse0x1b4e220() {
   return (neuron0x1b3e230()*-0.0671539);
}

double NNfunction_sb_sLsR::synapse0x1b4dcb0() {
   return (neuron0x1b3e570()*-0.362581);
}

double NNfunction_sb_sLsR::synapse0x1b4dcf0() {
   return (neuron0x1b3ead0()*0.630252);
}

double NNfunction_sb_sLsR::synapse0x1b4e370() {
   return (neuron0x1b3ecf0()*0.0465285);
}

double NNfunction_sb_sLsR::synapse0x1b4e3b0() {
   return (neuron0x1b3f030()*-0.036565);
}

double NNfunction_sb_sLsR::synapse0x1b4e3f0() {
   return (neuron0x1b3f370()*0.361788);
}

double NNfunction_sb_sLsR::synapse0x1b4e430() {
   return (neuron0x1b3f6b0()*-0.11364);
}

double NNfunction_sb_sLsR::synapse0x1b4e470() {
   return (neuron0x1b3f9f0()*0.124503);
}

double NNfunction_sb_sLsR::synapse0x1b4e4b0() {
   return (neuron0x1b3fd30()*0.352865);
}

double NNfunction_sb_sLsR::synapse0x1b4e830() {
   return (neuron0x1b3b170()*-0.168133);
}

double NNfunction_sb_sLsR::synapse0x1b4e870() {
   return (neuron0x1b3b4b0()*0.252311);
}

double NNfunction_sb_sLsR::synapse0x1b4e8b0() {
   return (neuron0x1b3b7f0()*-0.253526);
}

double NNfunction_sb_sLsR::synapse0x1b4e8f0() {
   return (neuron0x1b3bb30()*0.792371);
}

double NNfunction_sb_sLsR::synapse0x1b4e930() {
   return (neuron0x1b3be70()*0.366873);
}

double NNfunction_sb_sLsR::synapse0x1b4e970() {
   return (neuron0x1b3c1b0()*0.0701788);
}

double NNfunction_sb_sLsR::synapse0x1b4e9b0() {
   return (neuron0x1b3c4f0()*-0.068595);
}

double NNfunction_sb_sLsR::synapse0x1b4e9f0() {
   return (neuron0x1b3c830()*0.345766);
}

double NNfunction_sb_sLsR::synapse0x1b4ea30() {
   return (neuron0x1b3cb70()*0.273125);
}

double NNfunction_sb_sLsR::synapse0x1b46bf0() {
   return (neuron0x1b3ceb0()*-0.329383);
}

double NNfunction_sb_sLsR::synapse0x1b46c30() {
   return (neuron0x1b3d1f0()*-0.230754);
}

double NNfunction_sb_sLsR::synapse0x1b46c70() {
   return (neuron0x1b3d530()*0.295604);
}

double NNfunction_sb_sLsR::synapse0x1b46cb0() {
   return (neuron0x1b3d870()*-0.343279);
}

double NNfunction_sb_sLsR::synapse0x1b46cf0() {
   return (neuron0x1b3dbb0()*0.220094);
}

double NNfunction_sb_sLsR::synapse0x1b46d30() {
   return (neuron0x1b3def0()*0.437028);
}

double NNfunction_sb_sLsR::synapse0x1b46d70() {
   return (neuron0x1b3e230()*0.759318);
}

double NNfunction_sb_sLsR::synapse0x1b4e680() {
   return (neuron0x1b3e570()*-0.125512);
}

double NNfunction_sb_sLsR::synapse0x1b4e6c0() {
   return (neuron0x1b3ead0()*-0.102304);
}

double NNfunction_sb_sLsR::synapse0x1b46ec0() {
   return (neuron0x1b3ecf0()*-0.318976);
}

double NNfunction_sb_sLsR::synapse0x1b46f00() {
   return (neuron0x1b3f030()*0.268487);
}

double NNfunction_sb_sLsR::synapse0x1b46f40() {
   return (neuron0x1b3f370()*-0.103965);
}

double NNfunction_sb_sLsR::synapse0x1b46f80() {
   return (neuron0x1b3f6b0()*-0.160276);
}

double NNfunction_sb_sLsR::synapse0x1b46fc0() {
   return (neuron0x1b3f9f0()*-0.122783);
}

double NNfunction_sb_sLsR::synapse0x1b47000() {
   return (neuron0x1b3fd30()*0.014878);
}

double NNfunction_sb_sLsR::synapse0x1b47380() {
   return (neuron0x1b3b170()*-0.185716);
}

double NNfunction_sb_sLsR::synapse0x1b473c0() {
   return (neuron0x1b3b4b0()*0.88216);
}

double NNfunction_sb_sLsR::synapse0x1b47400() {
   return (neuron0x1b3b7f0()*-0.542893);
}

double NNfunction_sb_sLsR::synapse0x1b47440() {
   return (neuron0x1b3bb30()*0.72463);
}

double NNfunction_sb_sLsR::synapse0x1b47480() {
   return (neuron0x1b3be70()*0.208762);
}

double NNfunction_sb_sLsR::synapse0x1b474c0() {
   return (neuron0x1b3c1b0()*0.128465);
}

double NNfunction_sb_sLsR::synapse0x1b47500() {
   return (neuron0x1b3c4f0()*-0.416732);
}

double NNfunction_sb_sLsR::synapse0x1b47540() {
   return (neuron0x1b3c830()*-0.648047);
}

double NNfunction_sb_sLsR::synapse0x1b47580() {
   return (neuron0x1b3cb70()*-0.22109);
}

double NNfunction_sb_sLsR::synapse0x1b475c0() {
   return (neuron0x1b3ceb0()*-0.153667);
}

double NNfunction_sb_sLsR::synapse0x1b47600() {
   return (neuron0x1b3d1f0()*0.275161);
}

double NNfunction_sb_sLsR::synapse0x1b47640() {
   return (neuron0x1b3d530()*0.32811);
}

double NNfunction_sb_sLsR::synapse0x1b47680() {
   return (neuron0x1b3d870()*-0.625423);
}

double NNfunction_sb_sLsR::synapse0x1b476c0() {
   return (neuron0x1b3dbb0()*-0.175018);
}

double NNfunction_sb_sLsR::synapse0x1b47700() {
   return (neuron0x1b3def0()*0.0347358);
}

double NNfunction_sb_sLsR::synapse0x1b47740() {
   return (neuron0x1b3e230()*0.0205013);
}

double NNfunction_sb_sLsR::synapse0x1b471d0() {
   return (neuron0x1b3e570()*-0.59271);
}

double NNfunction_sb_sLsR::synapse0x1b47210() {
   return (neuron0x1b3ead0()*0.0262841);
}

double NNfunction_sb_sLsR::synapse0x1b47890() {
   return (neuron0x1b3ecf0()*-0.837861);
}

double NNfunction_sb_sLsR::synapse0x1b478d0() {
   return (neuron0x1b3f030()*0.0743598);
}

double NNfunction_sb_sLsR::synapse0x1b47910() {
   return (neuron0x1b3f370()*0.666294);
}

double NNfunction_sb_sLsR::synapse0x1b47950() {
   return (neuron0x1b3f6b0()*0.493342);
}

double NNfunction_sb_sLsR::synapse0x1b47990() {
   return (neuron0x1b3f9f0()*-0.217156);
}

double NNfunction_sb_sLsR::synapse0x1b479d0() {
   return (neuron0x1b3fd30()*0.121175);
}

double NNfunction_sb_sLsR::synapse0x1b47ba0() {
   return (neuron0x1b3b170()*-0.00337882);
}

double NNfunction_sb_sLsR::synapse0x1b50c30() {
   return (neuron0x1b3b4b0()*0.0185896);
}

double NNfunction_sb_sLsR::synapse0x1b50c70() {
   return (neuron0x1b3b7f0()*0.0624676);
}

double NNfunction_sb_sLsR::synapse0x1b50cb0() {
   return (neuron0x1b3bb30()*-0.0976751);
}

double NNfunction_sb_sLsR::synapse0x1b50cf0() {
   return (neuron0x1b3be70()*0.00620446);
}

double NNfunction_sb_sLsR::synapse0x1b50d30() {
   return (neuron0x1b3c1b0()*-0.00724324);
}

double NNfunction_sb_sLsR::synapse0x1b50d70() {
   return (neuron0x1b3c4f0()*-0.00582721);
}

double NNfunction_sb_sLsR::synapse0x1b50db0() {
   return (neuron0x1b3c830()*-0.000525183);
}

double NNfunction_sb_sLsR::synapse0x1b50df0() {
   return (neuron0x1b3cb70()*-0.000907515);
}

double NNfunction_sb_sLsR::synapse0x1b50e30() {
   return (neuron0x1b3ceb0()*-0.0105137);
}

double NNfunction_sb_sLsR::synapse0x1b50e70() {
   return (neuron0x1b3d1f0()*0.0177582);
}

double NNfunction_sb_sLsR::synapse0x1b50eb0() {
   return (neuron0x1b3d530()*0.00281871);
}

double NNfunction_sb_sLsR::synapse0x1b50ef0() {
   return (neuron0x1b3d870()*-1.87526);
}

double NNfunction_sb_sLsR::synapse0x1b50f30() {
   return (neuron0x1b3dbb0()*-0.00645582);
}

double NNfunction_sb_sLsR::synapse0x1b50f70() {
   return (neuron0x1b3def0()*0.024075);
}

double NNfunction_sb_sLsR::synapse0x1b50fb0() {
   return (neuron0x1b3e230()*-0.0127261);
}

double NNfunction_sb_sLsR::synapse0x1b50a80() {
   return (neuron0x1b3e570()*-0.0111572);
}

double NNfunction_sb_sLsR::synapse0x1b50ac0() {
   return (neuron0x1b3ead0()*0.0103186);
}

double NNfunction_sb_sLsR::synapse0x1b51100() {
   return (neuron0x1b3ecf0()*0.225361);
}

double NNfunction_sb_sLsR::synapse0x1b51140() {
   return (neuron0x1b3f030()*-0.0163444);
}

double NNfunction_sb_sLsR::synapse0x1b51180() {
   return (neuron0x1b3f370()*0.0154091);
}

double NNfunction_sb_sLsR::synapse0x1b511c0() {
   return (neuron0x1b3f6b0()*-0.00924319);
}

double NNfunction_sb_sLsR::synapse0x1b51200() {
   return (neuron0x1b3f9f0()*0.000928943);
}

double NNfunction_sb_sLsR::synapse0x1b51240() {
   return (neuron0x1b3fd30()*0.0199977);
}

double NNfunction_sb_sLsR::synapse0x1b515c0() {
   return (neuron0x1b3b170()*-0.0238777);
}

double NNfunction_sb_sLsR::synapse0x1b51600() {
   return (neuron0x1b3b4b0()*0.00684638);
}

double NNfunction_sb_sLsR::synapse0x1b51640() {
   return (neuron0x1b3b7f0()*-0.987752);
}

double NNfunction_sb_sLsR::synapse0x1b51680() {
   return (neuron0x1b3bb30()*-0.028686);
}

double NNfunction_sb_sLsR::synapse0x1b516c0() {
   return (neuron0x1b3be70()*0.0280449);
}

double NNfunction_sb_sLsR::synapse0x1b51700() {
   return (neuron0x1b3c1b0()*-0.0647381);
}

double NNfunction_sb_sLsR::synapse0x1b51740() {
   return (neuron0x1b3c4f0()*0.0734731);
}

double NNfunction_sb_sLsR::synapse0x1b51780() {
   return (neuron0x1b3c830()*0.0446903);
}

double NNfunction_sb_sLsR::synapse0x1b517c0() {
   return (neuron0x1b3cb70()*-0.0329861);
}

double NNfunction_sb_sLsR::synapse0x1b51800() {
   return (neuron0x1b3ceb0()*0.0575957);
}

double NNfunction_sb_sLsR::synapse0x1b51840() {
   return (neuron0x1b3d1f0()*-0.0124712);
}

double NNfunction_sb_sLsR::synapse0x1b51880() {
   return (neuron0x1b3d530()*-0.0237524);
}

double NNfunction_sb_sLsR::synapse0x1b518c0() {
   return (neuron0x1b3d870()*0.397083);
}

double NNfunction_sb_sLsR::synapse0x1b51900() {
   return (neuron0x1b3dbb0()*-0.0352005);
}

double NNfunction_sb_sLsR::synapse0x1b51940() {
   return (neuron0x1b3def0()*-0.0195095);
}

double NNfunction_sb_sLsR::synapse0x1b51980() {
   return (neuron0x1b3e230()*0.0608314);
}

double NNfunction_sb_sLsR::synapse0x1b51410() {
   return (neuron0x1b3e570()*-0.00830421);
}

double NNfunction_sb_sLsR::synapse0x1b51450() {
   return (neuron0x1b3ead0()*0.0370373);
}

double NNfunction_sb_sLsR::synapse0x1b51ad0() {
   return (neuron0x1b3ecf0()*-0.0423192);
}

double NNfunction_sb_sLsR::synapse0x1b51b10() {
   return (neuron0x1b3f030()*-0.00374227);
}

double NNfunction_sb_sLsR::synapse0x1b51b50() {
   return (neuron0x1b3f370()*0.0373782);
}

double NNfunction_sb_sLsR::synapse0x1b51b90() {
   return (neuron0x1b3f6b0()*-0.0451657);
}

double NNfunction_sb_sLsR::synapse0x1b51bd0() {
   return (neuron0x1b3f9f0()*0.0665011);
}

double NNfunction_sb_sLsR::synapse0x1b51c10() {
   return (neuron0x1b3fd30()*-0.0513347);
}

double NNfunction_sb_sLsR::synapse0x1b51f90() {
   return (neuron0x1b3b170()*0.0971446);
}

double NNfunction_sb_sLsR::synapse0x1b51fd0() {
   return (neuron0x1b3b4b0()*0.150302);
}

double NNfunction_sb_sLsR::synapse0x1b52010() {
   return (neuron0x1b3b7f0()*0.934204);
}

double NNfunction_sb_sLsR::synapse0x1b52050() {
   return (neuron0x1b3bb30()*0.058492);
}

double NNfunction_sb_sLsR::synapse0x1b52090() {
   return (neuron0x1b3be70()*0.273848);
}

double NNfunction_sb_sLsR::synapse0x1b520d0() {
   return (neuron0x1b3c1b0()*-0.161197);
}

double NNfunction_sb_sLsR::synapse0x1b52110() {
   return (neuron0x1b3c4f0()*0.448194);
}

double NNfunction_sb_sLsR::synapse0x1b52150() {
   return (neuron0x1b3c830()*0.602278);
}

double NNfunction_sb_sLsR::synapse0x1b52190() {
   return (neuron0x1b3cb70()*-0.186095);
}

double NNfunction_sb_sLsR::synapse0x1b521d0() {
   return (neuron0x1b3ceb0()*-0.251673);
}

double NNfunction_sb_sLsR::synapse0x1b52210() {
   return (neuron0x1b3d1f0()*0.290874);
}

double NNfunction_sb_sLsR::synapse0x1b52250() {
   return (neuron0x1b3d530()*-0.0363588);
}

double NNfunction_sb_sLsR::synapse0x1b52290() {
   return (neuron0x1b3d870()*0.719424);
}

double NNfunction_sb_sLsR::synapse0x1b522d0() {
   return (neuron0x1b3dbb0()*0.154278);
}

double NNfunction_sb_sLsR::synapse0x1b52310() {
   return (neuron0x1b3def0()*-0.154229);
}

double NNfunction_sb_sLsR::synapse0x1b52350() {
   return (neuron0x1b3e230()*0.211425);
}

double NNfunction_sb_sLsR::synapse0x1b51de0() {
   return (neuron0x1b3e570()*0.147345);
}

double NNfunction_sb_sLsR::synapse0x1b51e20() {
   return (neuron0x1b3ead0()*-0.505252);
}

double NNfunction_sb_sLsR::synapse0x1b524a0() {
   return (neuron0x1b3ecf0()*-0.63392);
}

double NNfunction_sb_sLsR::synapse0x1b524e0() {
   return (neuron0x1b3f030()*0.117594);
}

double NNfunction_sb_sLsR::synapse0x1b52520() {
   return (neuron0x1b3f370()*-0.0809069);
}

double NNfunction_sb_sLsR::synapse0x1b52560() {
   return (neuron0x1b3f6b0()*-0.0200243);
}

double NNfunction_sb_sLsR::synapse0x1b525a0() {
   return (neuron0x1b3f9f0()*0.487919);
}

double NNfunction_sb_sLsR::synapse0x1b525e0() {
   return (neuron0x1b3fd30()*-0.27809);
}

double NNfunction_sb_sLsR::synapse0x1b52960() {
   return (neuron0x1b3b170()*-0.0331698);
}

double NNfunction_sb_sLsR::synapse0x1b529a0() {
   return (neuron0x1b3b4b0()*-0.0920719);
}

double NNfunction_sb_sLsR::synapse0x1b529e0() {
   return (neuron0x1b3b7f0()*-0.0229473);
}

double NNfunction_sb_sLsR::synapse0x1b52a20() {
   return (neuron0x1b3bb30()*-1.69467);
}

double NNfunction_sb_sLsR::synapse0x1b52a60() {
   return (neuron0x1b3be70()*-0.0652142);
}

double NNfunction_sb_sLsR::synapse0x1b52aa0() {
   return (neuron0x1b3c1b0()*0.0469342);
}

double NNfunction_sb_sLsR::synapse0x1b52ae0() {
   return (neuron0x1b3c4f0()*-0.0660819);
}

double NNfunction_sb_sLsR::synapse0x1b52b20() {
   return (neuron0x1b3c830()*-0.162991);
}

double NNfunction_sb_sLsR::synapse0x1b52b60() {
   return (neuron0x1b3cb70()*-0.0138689);
}

double NNfunction_sb_sLsR::synapse0x1b52ba0() {
   return (neuron0x1b3ceb0()*0.0263709);
}

double NNfunction_sb_sLsR::synapse0x1b52be0() {
   return (neuron0x1b3d1f0()*-0.0599683);
}

double NNfunction_sb_sLsR::synapse0x1b52c20() {
   return (neuron0x1b3d530()*0.16411);
}

double NNfunction_sb_sLsR::synapse0x1b52c60() {
   return (neuron0x1b3d870()*0.433869);
}

double NNfunction_sb_sLsR::synapse0x1b52ca0() {
   return (neuron0x1b3dbb0()*-0.0473324);
}

double NNfunction_sb_sLsR::synapse0x1b52ce0() {
   return (neuron0x1b3def0()*-0.0316812);
}

double NNfunction_sb_sLsR::synapse0x1b52d20() {
   return (neuron0x1b3e230()*-0.0464152);
}

double NNfunction_sb_sLsR::synapse0x1b527b0() {
   return (neuron0x1b3e570()*0.0450844);
}

double NNfunction_sb_sLsR::synapse0x1b527f0() {
   return (neuron0x1b3ead0()*0.264553);
}

double NNfunction_sb_sLsR::synapse0x1b52e70() {
   return (neuron0x1b3ecf0()*-1.62843);
}

double NNfunction_sb_sLsR::synapse0x1b52eb0() {
   return (neuron0x1b3f030()*-0.0594436);
}

double NNfunction_sb_sLsR::synapse0x1b52ef0() {
   return (neuron0x1b3f370()*0.104937);
}

double NNfunction_sb_sLsR::synapse0x1b52f30() {
   return (neuron0x1b3f6b0()*-0.125362);
}

double NNfunction_sb_sLsR::synapse0x1b52f70() {
   return (neuron0x1b3f9f0()*0.113075);
}

double NNfunction_sb_sLsR::synapse0x1b52fb0() {
   return (neuron0x1b3fd30()*0.254992);
}

double NNfunction_sb_sLsR::synapse0x1b53330() {
   return (neuron0x1b3b170()*-0.242674);
}

double NNfunction_sb_sLsR::synapse0x1b53370() {
   return (neuron0x1b3b4b0()*-0.0348272);
}

double NNfunction_sb_sLsR::synapse0x1b533b0() {
   return (neuron0x1b3b7f0()*-0.126401);
}

double NNfunction_sb_sLsR::synapse0x1b533f0() {
   return (neuron0x1b3bb30()*1.21695);
}

double NNfunction_sb_sLsR::synapse0x1b53430() {
   return (neuron0x1b3be70()*-0.131439);
}

double NNfunction_sb_sLsR::synapse0x1b53470() {
   return (neuron0x1b3c1b0()*0.0773817);
}

double NNfunction_sb_sLsR::synapse0x1b534b0() {
   return (neuron0x1b3c4f0()*-0.0959697);
}

double NNfunction_sb_sLsR::synapse0x1b534f0() {
   return (neuron0x1b3c830()*-0.115207);
}

double NNfunction_sb_sLsR::synapse0x1b53530() {
   return (neuron0x1b3cb70()*0.249918);
}

double NNfunction_sb_sLsR::synapse0x1b53570() {
   return (neuron0x1b3ceb0()*0.216104);
}

double NNfunction_sb_sLsR::synapse0x1b535b0() {
   return (neuron0x1b3d1f0()*0.000708947);
}

double NNfunction_sb_sLsR::synapse0x1b535f0() {
   return (neuron0x1b3d530()*-0.043902);
}

double NNfunction_sb_sLsR::synapse0x1b53630() {
   return (neuron0x1b3d870()*1.09781);
}

double NNfunction_sb_sLsR::synapse0x1b53670() {
   return (neuron0x1b3dbb0()*-0.0840472);
}

double NNfunction_sb_sLsR::synapse0x1b536b0() {
   return (neuron0x1b3def0()*-0.0258701);
}

double NNfunction_sb_sLsR::synapse0x1b536f0() {
   return (neuron0x1b3e230()*-0.16259);
}

double NNfunction_sb_sLsR::synapse0x1b53180() {
   return (neuron0x1b3e570()*0.164219);
}

double NNfunction_sb_sLsR::synapse0x1b531c0() {
   return (neuron0x1b3ead0()*0.185973);
}

double NNfunction_sb_sLsR::synapse0x1b53840() {
   return (neuron0x1b3ecf0()*-0.323421);
}

double NNfunction_sb_sLsR::synapse0x1b53880() {
   return (neuron0x1b3f030()*0.183549);
}

double NNfunction_sb_sLsR::synapse0x1b538c0() {
   return (neuron0x1b3f370()*0.13387);
}

double NNfunction_sb_sLsR::synapse0x1b53900() {
   return (neuron0x1b3f6b0()*0.107001);
}

double NNfunction_sb_sLsR::synapse0x1b53940() {
   return (neuron0x1b3f9f0()*0.0507936);
}

double NNfunction_sb_sLsR::synapse0x1b53980() {
   return (neuron0x1b3fd30()*-0.0436535);
}

double NNfunction_sb_sLsR::synapse0x1b53d00() {
   return (neuron0x1b3b170()*-0.309749);
}

double NNfunction_sb_sLsR::synapse0x1b53d40() {
   return (neuron0x1b3b4b0()*-0.524496);
}

double NNfunction_sb_sLsR::synapse0x1b53d80() {
   return (neuron0x1b3b7f0()*0.886657);
}

double NNfunction_sb_sLsR::synapse0x1b53dc0() {
   return (neuron0x1b3bb30()*-0.12668);
}

double NNfunction_sb_sLsR::synapse0x1b53e00() {
   return (neuron0x1b3be70()*0.687314);
}

double NNfunction_sb_sLsR::synapse0x1b53e40() {
   return (neuron0x1b3c1b0()*-0.540691);
}

double NNfunction_sb_sLsR::synapse0x1b53e80() {
   return (neuron0x1b3c4f0()*0.164754);
}

double NNfunction_sb_sLsR::synapse0x1b53ec0() {
   return (neuron0x1b3c830()*0.243485);
}

double NNfunction_sb_sLsR::synapse0x1b53f00() {
   return (neuron0x1b3cb70()*0.375259);
}

double NNfunction_sb_sLsR::synapse0x1b53f40() {
   return (neuron0x1b3ceb0()*0.310888);
}

double NNfunction_sb_sLsR::synapse0x1b53f80() {
   return (neuron0x1b3d1f0()*0.735483);
}

double NNfunction_sb_sLsR::synapse0x1b53fc0() {
   return (neuron0x1b3d530()*-0.237002);
}

double NNfunction_sb_sLsR::synapse0x1b54000() {
   return (neuron0x1b3d870()*1.03726);
}

double NNfunction_sb_sLsR::synapse0x1b54040() {
   return (neuron0x1b3dbb0()*-0.598338);
}

double NNfunction_sb_sLsR::synapse0x1b54080() {
   return (neuron0x1b3def0()*0.140414);
}

double NNfunction_sb_sLsR::synapse0x1b540c0() {
   return (neuron0x1b3e230()*-0.284855);
}

double NNfunction_sb_sLsR::synapse0x1b53b50() {
   return (neuron0x1b3e570()*-0.336374);
}

double NNfunction_sb_sLsR::synapse0x1b53b90() {
   return (neuron0x1b3ead0()*0.0215361);
}

double NNfunction_sb_sLsR::synapse0x1b54210() {
   return (neuron0x1b3ecf0()*0.652014);
}

double NNfunction_sb_sLsR::synapse0x1b54250() {
   return (neuron0x1b3f030()*-0.174885);
}

double NNfunction_sb_sLsR::synapse0x1b54290() {
   return (neuron0x1b3f370()*-0.225843);
}

double NNfunction_sb_sLsR::synapse0x1b542d0() {
   return (neuron0x1b3f6b0()*0.0215079);
}

double NNfunction_sb_sLsR::synapse0x1b54310() {
   return (neuron0x1b3f9f0()*0.325559);
}

double NNfunction_sb_sLsR::synapse0x1b54350() {
   return (neuron0x1b3fd30()*0.423742);
}

double NNfunction_sb_sLsR::synapse0x1b546d0() {
   return (neuron0x1b3b170()*-0.0470196);
}

double NNfunction_sb_sLsR::synapse0x1b54710() {
   return (neuron0x1b3b4b0()*-0.250528);
}

double NNfunction_sb_sLsR::synapse0x1b54750() {
   return (neuron0x1b3b7f0()*0.390662);
}

double NNfunction_sb_sLsR::synapse0x1b54790() {
   return (neuron0x1b3bb30()*1.06239);
}

double NNfunction_sb_sLsR::synapse0x1b547d0() {
   return (neuron0x1b3be70()*0.174784);
}

double NNfunction_sb_sLsR::synapse0x1b54810() {
   return (neuron0x1b3c1b0()*-0.119187);
}

double NNfunction_sb_sLsR::synapse0x1b54850() {
   return (neuron0x1b3c4f0()*0.145639);
}

double NNfunction_sb_sLsR::synapse0x1b54890() {
   return (neuron0x1b3c830()*0.0542992);
}

double NNfunction_sb_sLsR::synapse0x1b548d0() {
   return (neuron0x1b3cb70()*0.367953);
}

double NNfunction_sb_sLsR::synapse0x1b54910() {
   return (neuron0x1b3ceb0()*-0.344083);
}

double NNfunction_sb_sLsR::synapse0x1b54950() {
   return (neuron0x1b3d1f0()*0.612455);
}

double NNfunction_sb_sLsR::synapse0x1b54990() {
   return (neuron0x1b3d530()*-0.00364916);
}

double NNfunction_sb_sLsR::synapse0x1b549d0() {
   return (neuron0x1b3d870()*-0.680652);
}

double NNfunction_sb_sLsR::synapse0x1b54a10() {
   return (neuron0x1b3dbb0()*0.039217);
}

double NNfunction_sb_sLsR::synapse0x1b54a50() {
   return (neuron0x1b3def0()*-0.00930841);
}

double NNfunction_sb_sLsR::synapse0x1b54a90() {
   return (neuron0x1b3e230()*-0.0504682);
}

double NNfunction_sb_sLsR::synapse0x1b54520() {
   return (neuron0x1b3e570()*0.0155082);
}

double NNfunction_sb_sLsR::synapse0x1b54560() {
   return (neuron0x1b3ead0()*-0.236088);
}

double NNfunction_sb_sLsR::synapse0x1b54be0() {
   return (neuron0x1b3ecf0()*0.13053);
}

double NNfunction_sb_sLsR::synapse0x1b54c20() {
   return (neuron0x1b3f030()*0.218039);
}

double NNfunction_sb_sLsR::synapse0x1b54c60() {
   return (neuron0x1b3f370()*0.0855957);
}

double NNfunction_sb_sLsR::synapse0x1b54ca0() {
   return (neuron0x1b3f6b0()*0.17409);
}

double NNfunction_sb_sLsR::synapse0x1b54ce0() {
   return (neuron0x1b3f9f0()*0.268883);
}

double NNfunction_sb_sLsR::synapse0x1b54d20() {
   return (neuron0x1b3fd30()*0.249683);
}

double NNfunction_sb_sLsR::synapse0x1b550a0() {
   return (neuron0x1b3b170()*-0.0282273);
}

double NNfunction_sb_sLsR::synapse0x1b550e0() {
   return (neuron0x1b3b4b0()*0.0467101);
}

double NNfunction_sb_sLsR::synapse0x1b55120() {
   return (neuron0x1b3b7f0()*0.0391658);
}

double NNfunction_sb_sLsR::synapse0x1b55160() {
   return (neuron0x1b3bb30()*-4.07084);
}

double NNfunction_sb_sLsR::synapse0x1b551a0() {
   return (neuron0x1b3be70()*-0.00152074);
}

double NNfunction_sb_sLsR::synapse0x1b551e0() {
   return (neuron0x1b3c1b0()*-0.0304168);
}

double NNfunction_sb_sLsR::synapse0x1b55220() {
   return (neuron0x1b3c4f0()*-0.00516253);
}

double NNfunction_sb_sLsR::synapse0x1b55260() {
   return (neuron0x1b3c830()*-0.0169606);
}

double NNfunction_sb_sLsR::synapse0x1b552a0() {
   return (neuron0x1b3cb70()*0.00631812);
}

double NNfunction_sb_sLsR::synapse0x1b552e0() {
   return (neuron0x1b3ceb0()*0.00373951);
}

double NNfunction_sb_sLsR::synapse0x1b55320() {
   return (neuron0x1b3d1f0()*0.00156138);
}

double NNfunction_sb_sLsR::synapse0x1b55360() {
   return (neuron0x1b3d530()*-0.0124254);
}

double NNfunction_sb_sLsR::synapse0x1b553a0() {
   return (neuron0x1b3d870()*0.162284);
}

double NNfunction_sb_sLsR::synapse0x1b553e0() {
   return (neuron0x1b3dbb0()*-0.00357279);
}

double NNfunction_sb_sLsR::synapse0x1b55420() {
   return (neuron0x1b3def0()*0.0173783);
}

double NNfunction_sb_sLsR::synapse0x1b55460() {
   return (neuron0x1b3e230()*-0.0259155);
}

double NNfunction_sb_sLsR::synapse0x1b54ef0() {
   return (neuron0x1b3e570()*-0.021447);
}

double NNfunction_sb_sLsR::synapse0x1b54f30() {
   return (neuron0x1b3ead0()*0.0100242);
}

double NNfunction_sb_sLsR::synapse0x1b555b0() {
   return (neuron0x1b3ecf0()*0.187811);
}

double NNfunction_sb_sLsR::synapse0x1b555f0() {
   return (neuron0x1b3f030()*-0.0326978);
}

double NNfunction_sb_sLsR::synapse0x1b55630() {
   return (neuron0x1b3f370()*-0.0248945);
}

double NNfunction_sb_sLsR::synapse0x1b55670() {
   return (neuron0x1b3f6b0()*0.0151703);
}

double NNfunction_sb_sLsR::synapse0x1b556b0() {
   return (neuron0x1b3f9f0()*0.00727401);
}

double NNfunction_sb_sLsR::synapse0x1b556f0() {
   return (neuron0x1b3fd30()*-0.00855866);
}

double NNfunction_sb_sLsR::synapse0x1b55a70() {
   return (neuron0x1b3b170()*-0.159453);
}

double NNfunction_sb_sLsR::synapse0x1b4a040() {
   return (neuron0x1b3b4b0()*0.0745672);
}

double NNfunction_sb_sLsR::synapse0x1b4a080() {
   return (neuron0x1b3b7f0()*0.215739);
}

double NNfunction_sb_sLsR::synapse0x1b4a0c0() {
   return (neuron0x1b3bb30()*-0.864451);
}

double NNfunction_sb_sLsR::synapse0x1b4a310() {
   return (neuron0x1b3be70()*-0.135085);
}

double NNfunction_sb_sLsR::synapse0x1b4a350() {
   return (neuron0x1b3c1b0()*-0.145982);
}

double NNfunction_sb_sLsR::synapse0x1b4a390() {
   return (neuron0x1b3c4f0()*-0.00410948);
}

double NNfunction_sb_sLsR::synapse0x1b4a5e0() {
   return (neuron0x1b3c830()*-0.144982);
}

double NNfunction_sb_sLsR::synapse0x1b4a620() {
   return (neuron0x1b3cb70()*0.259662);
}

double NNfunction_sb_sLsR::synapse0x1b4a870() {
   return (neuron0x1b3ceb0()*-0.011315);
}

double NNfunction_sb_sLsR::synapse0x1b4a8b0() {
   return (neuron0x1b3d1f0()*0.0711141);
}

double NNfunction_sb_sLsR::synapse0x1b4a8f0() {
   return (neuron0x1b3d530()*-0.172376);
}

double NNfunction_sb_sLsR::synapse0x1b4ab40() {
   return (neuron0x1b3d870()*0.0137157);
}

double NNfunction_sb_sLsR::synapse0x1b4ab80() {
   return (neuron0x1b3dbb0()*0.163688);
}

double NNfunction_sb_sLsR::synapse0x1b4add0() {
   return (neuron0x1b3def0()*-0.201479);
}

double NNfunction_sb_sLsR::synapse0x1b4ae10() {
   return (neuron0x1b3e230()*-0.104307);
}

double NNfunction_sb_sLsR::synapse0x1b558c0() {
   return (neuron0x1b3e570()*-0.220827);
}

double NNfunction_sb_sLsR::synapse0x1b55900() {
   return (neuron0x1b3ead0()*0.0619606);
}

double NNfunction_sb_sLsR::synapse0x1b4af60() {
   return (neuron0x1b3ecf0()*0.613672);
}

double NNfunction_sb_sLsR::synapse0x1b4b470() {
   return (neuron0x1b3f030()*0.0039786);
}

double NNfunction_sb_sLsR::synapse0x1b4b4b0() {
   return (neuron0x1b3f370()*-0.146601);
}

double NNfunction_sb_sLsR::synapse0x1b4b4f0() {
   return (neuron0x1b3f6b0()*-0.0548988);
}

double NNfunction_sb_sLsR::synapse0x1b4b740() {
   return (neuron0x1b3f9f0()*0.0748648);
}

double NNfunction_sb_sLsR::synapse0x1b4b780() {
   return (neuron0x1b3fd30()*-0.0159829);
}

double NNfunction_sb_sLsR::synapse0x1b4b030() {
   return (neuron0x1b3b170()*-0.0747344);
}

double NNfunction_sb_sLsR::synapse0x1b4b070() {
   return (neuron0x1b3b4b0()*-0.0877917);
}

double NNfunction_sb_sLsR::synapse0x1b4b0b0() {
   return (neuron0x1b3b7f0()*-0.422016);
}

double NNfunction_sb_sLsR::synapse0x1b4b0f0() {
   return (neuron0x1b3bb30()*0.502677);
}

double NNfunction_sb_sLsR::synapse0x1b4ba70() {
   return (neuron0x1b3be70()*0.111289);
}

double NNfunction_sb_sLsR::synapse0x1b57dc0() {
   return (neuron0x1b3c1b0()*-0.0197268);
}

double NNfunction_sb_sLsR::synapse0x1b57e00() {
   return (neuron0x1b3c4f0()*0.201391);
}

double NNfunction_sb_sLsR::synapse0x1b57e40() {
   return (neuron0x1b3c830()*0.141947);
}

double NNfunction_sb_sLsR::synapse0x1b57e80() {
   return (neuron0x1b3cb70()*-0.44785);
}

double NNfunction_sb_sLsR::synapse0x1b57ec0() {
   return (neuron0x1b3ceb0()*0.232206);
}

double NNfunction_sb_sLsR::synapse0x1b57f00() {
   return (neuron0x1b3d1f0()*0.161799);
}

double NNfunction_sb_sLsR::synapse0x1b57f40() {
   return (neuron0x1b3d530()*-0.286866);
}

double NNfunction_sb_sLsR::synapse0x1b57f80() {
   return (neuron0x1b3d870()*1.08022);
}

double NNfunction_sb_sLsR::synapse0x1b57fc0() {
   return (neuron0x1b3dbb0()*-0.48585);
}

double NNfunction_sb_sLsR::synapse0x1b58000() {
   return (neuron0x1b3def0()*-0.243626);
}

double NNfunction_sb_sLsR::synapse0x1b58040() {
   return (neuron0x1b3e230()*-0.0453603);
}

double NNfunction_sb_sLsR::synapse0x1b4b950() {
   return (neuron0x1b3e570()*-0.153659);
}

double NNfunction_sb_sLsR::synapse0x1b4b990() {
   return (neuron0x1b3ead0()*0.155092);
}

double NNfunction_sb_sLsR::synapse0x1b58190() {
   return (neuron0x1b3ecf0()*0.332315);
}

double NNfunction_sb_sLsR::synapse0x1b581d0() {
   return (neuron0x1b3f030()*-0.0648018);
}

double NNfunction_sb_sLsR::synapse0x1b58210() {
   return (neuron0x1b3f370()*0.0309763);
}

double NNfunction_sb_sLsR::synapse0x1b58250() {
   return (neuron0x1b3f6b0()*-0.0712722);
}

double NNfunction_sb_sLsR::synapse0x1b58290() {
   return (neuron0x1b3f9f0()*0.0434508);
}

double NNfunction_sb_sLsR::synapse0x1b582d0() {
   return (neuron0x1b3fd30()*-0.143651);
}

double NNfunction_sb_sLsR::synapse0x1b58650() {
   return (neuron0x1b3b170()*0.00593625);
}

double NNfunction_sb_sLsR::synapse0x1b58690() {
   return (neuron0x1b3b4b0()*0.0120741);
}

double NNfunction_sb_sLsR::synapse0x1b586d0() {
   return (neuron0x1b3b7f0()*-0.0426111);
}

double NNfunction_sb_sLsR::synapse0x1b58710() {
   return (neuron0x1b3bb30()*-0.0301308);
}

double NNfunction_sb_sLsR::synapse0x1b58750() {
   return (neuron0x1b3be70()*0.00324165);
}

double NNfunction_sb_sLsR::synapse0x1b58790() {
   return (neuron0x1b3c1b0()*-0.00381699);
}

double NNfunction_sb_sLsR::synapse0x1b587d0() {
   return (neuron0x1b3c4f0()*-0.00772319);
}

double NNfunction_sb_sLsR::synapse0x1b58810() {
   return (neuron0x1b3c830()*0.0180891);
}

double NNfunction_sb_sLsR::synapse0x1b58850() {
   return (neuron0x1b3cb70()*0.00744652);
}

double NNfunction_sb_sLsR::synapse0x1b58890() {
   return (neuron0x1b3ceb0()*-0.0107375);
}

double NNfunction_sb_sLsR::synapse0x1b588d0() {
   return (neuron0x1b3d1f0()*-0.0108283);
}

double NNfunction_sb_sLsR::synapse0x1b58910() {
   return (neuron0x1b3d530()*-0.0186499);
}

double NNfunction_sb_sLsR::synapse0x1b58950() {
   return (neuron0x1b3d870()*0.632478);
}

double NNfunction_sb_sLsR::synapse0x1b58990() {
   return (neuron0x1b3dbb0()*0.0197829);
}

double NNfunction_sb_sLsR::synapse0x1b589d0() {
   return (neuron0x1b3def0()*0.000783581);
}

double NNfunction_sb_sLsR::synapse0x1b58a10() {
   return (neuron0x1b3e230()*0.028698);
}

double NNfunction_sb_sLsR::synapse0x1b584a0() {
   return (neuron0x1b3e570()*0.0122699);
}

double NNfunction_sb_sLsR::synapse0x1b584e0() {
   return (neuron0x1b3ead0()*-0.0027277);
}

double NNfunction_sb_sLsR::synapse0x1b58b60() {
   return (neuron0x1b3ecf0()*0.409661);
}

double NNfunction_sb_sLsR::synapse0x1b58ba0() {
   return (neuron0x1b3f030()*0.00499122);
}

double NNfunction_sb_sLsR::synapse0x1b58be0() {
   return (neuron0x1b3f370()*0.0142545);
}

double NNfunction_sb_sLsR::synapse0x1b58c20() {
   return (neuron0x1b3f6b0()*-0.010204);
}

double NNfunction_sb_sLsR::synapse0x1b58c60() {
   return (neuron0x1b3f9f0()*-0.00699063);
}

double NNfunction_sb_sLsR::synapse0x1b58ca0() {
   return (neuron0x1b3fd30()*0.00997933);
}

double NNfunction_sb_sLsR::synapse0x1b59020() {
   return (neuron0x1b3b170()*0.165374);
}

double NNfunction_sb_sLsR::synapse0x1b59060() {
   return (neuron0x1b3b4b0()*0.17462);
}

double NNfunction_sb_sLsR::synapse0x1b590a0() {
   return (neuron0x1b3b7f0()*-0.111838);
}

double NNfunction_sb_sLsR::synapse0x1b590e0() {
   return (neuron0x1b3bb30()*-0.163505);
}

double NNfunction_sb_sLsR::synapse0x1b59120() {
   return (neuron0x1b3be70()*-0.126429);
}

double NNfunction_sb_sLsR::synapse0x1b59160() {
   return (neuron0x1b3c1b0()*0.378416);
}

double NNfunction_sb_sLsR::synapse0x1b591a0() {
   return (neuron0x1b3c4f0()*0.17406);
}

double NNfunction_sb_sLsR::synapse0x1b591e0() {
   return (neuron0x1b3c830()*0.10402);
}

double NNfunction_sb_sLsR::synapse0x1b59220() {
   return (neuron0x1b3cb70()*0.227051);
}

double NNfunction_sb_sLsR::synapse0x1b59260() {
   return (neuron0x1b3ceb0()*-0.087715);
}

double NNfunction_sb_sLsR::synapse0x1b592a0() {
   return (neuron0x1b3d1f0()*0.188275);
}

double NNfunction_sb_sLsR::synapse0x1b592e0() {
   return (neuron0x1b3d530()*-0.270711);
}

double NNfunction_sb_sLsR::synapse0x1b59320() {
   return (neuron0x1b3d870()*-0.988596);
}

double NNfunction_sb_sLsR::synapse0x1b59360() {
   return (neuron0x1b3dbb0()*0.888024);
}

double NNfunction_sb_sLsR::synapse0x1b593a0() {
   return (neuron0x1b3def0()*0.153071);
}

double NNfunction_sb_sLsR::synapse0x1b593e0() {
   return (neuron0x1b3e230()*-0.0747692);
}

double NNfunction_sb_sLsR::synapse0x1b58e70() {
   return (neuron0x1b3e570()*0.596751);
}

double NNfunction_sb_sLsR::synapse0x1b58eb0() {
   return (neuron0x1b3ead0()*-0.35921);
}

double NNfunction_sb_sLsR::synapse0x1b59530() {
   return (neuron0x1b3ecf0()*0.534742);
}

double NNfunction_sb_sLsR::synapse0x1b59570() {
   return (neuron0x1b3f030()*0.0221977);
}

double NNfunction_sb_sLsR::synapse0x1b595b0() {
   return (neuron0x1b3f370()*-0.244922);
}

double NNfunction_sb_sLsR::synapse0x1b595f0() {
   return (neuron0x1b3f6b0()*-0.128653);
}

double NNfunction_sb_sLsR::synapse0x1b59630() {
   return (neuron0x1b3f9f0()*0.0990263);
}

double NNfunction_sb_sLsR::synapse0x1b59670() {
   return (neuron0x1b3fd30()*0.553868);
}

double NNfunction_sb_sLsR::synapse0x1b599f0() {
   return (neuron0x1b3b170()*0.194605);
}

double NNfunction_sb_sLsR::synapse0x1b59a30() {
   return (neuron0x1b3b4b0()*0.12429);
}

double NNfunction_sb_sLsR::synapse0x1b59a70() {
   return (neuron0x1b3b7f0()*-1.10093);
}

double NNfunction_sb_sLsR::synapse0x1b59ab0() {
   return (neuron0x1b3bb30()*0.554449);
}

double NNfunction_sb_sLsR::synapse0x1b59af0() {
   return (neuron0x1b3be70()*0.482154);
}

double NNfunction_sb_sLsR::synapse0x1b59b30() {
   return (neuron0x1b3c1b0()*0.526597);
}

double NNfunction_sb_sLsR::synapse0x1b59b70() {
   return (neuron0x1b3c4f0()*0.228831);
}

double NNfunction_sb_sLsR::synapse0x1b59bb0() {
   return (neuron0x1b3c830()*-0.463111);
}

double NNfunction_sb_sLsR::synapse0x1b59bf0() {
   return (neuron0x1b3cb70()*-0.252434);
}

double NNfunction_sb_sLsR::synapse0x1b59c30() {
   return (neuron0x1b3ceb0()*0.278238);
}

double NNfunction_sb_sLsR::synapse0x1b59c70() {
   return (neuron0x1b3d1f0()*-0.0867378);
}

double NNfunction_sb_sLsR::synapse0x1b59cb0() {
   return (neuron0x1b3d530()*-1.24319);
}

double NNfunction_sb_sLsR::synapse0x1b59cf0() {
   return (neuron0x1b3d870()*-0.44145);
}

double NNfunction_sb_sLsR::synapse0x1b59d30() {
   return (neuron0x1b3dbb0()*-0.218725);
}

double NNfunction_sb_sLsR::synapse0x1b59d70() {
   return (neuron0x1b3def0()*0.422099);
}

double NNfunction_sb_sLsR::synapse0x1b59db0() {
   return (neuron0x1b3e230()*-0.173747);
}

double NNfunction_sb_sLsR::synapse0x1b59840() {
   return (neuron0x1b3e570()*0.811851);
}

double NNfunction_sb_sLsR::synapse0x1b59880() {
   return (neuron0x1b3ead0()*-0.0789995);
}

double NNfunction_sb_sLsR::synapse0x1b59f00() {
   return (neuron0x1b3ecf0()*-0.258851);
}

double NNfunction_sb_sLsR::synapse0x1b59f40() {
   return (neuron0x1b3f030()*-0.447937);
}

double NNfunction_sb_sLsR::synapse0x1b59f80() {
   return (neuron0x1b3f370()*-0.290988);
}

double NNfunction_sb_sLsR::synapse0x1b59fc0() {
   return (neuron0x1b3f6b0()*-0.17945);
}

double NNfunction_sb_sLsR::synapse0x1b5a000() {
   return (neuron0x1b3f9f0()*-0.338467);
}

double NNfunction_sb_sLsR::synapse0x1b5a040() {
   return (neuron0x1b3fd30()*-0.208098);
}

double NNfunction_sb_sLsR::synapse0x1b5a3c0() {
   return (neuron0x1b3b170()*-0.0331943);
}

double NNfunction_sb_sLsR::synapse0x1b5a400() {
   return (neuron0x1b3b4b0()*0.0181529);
}

double NNfunction_sb_sLsR::synapse0x1b5a440() {
   return (neuron0x1b3b7f0()*-0.0144235);
}

double NNfunction_sb_sLsR::synapse0x1b5a480() {
   return (neuron0x1b3bb30()*1.52525);
}

double NNfunction_sb_sLsR::synapse0x1b5a4c0() {
   return (neuron0x1b3be70()*-0.00955822);
}

double NNfunction_sb_sLsR::synapse0x1b5a500() {
   return (neuron0x1b3c1b0()*-0.00961272);
}

double NNfunction_sb_sLsR::synapse0x1b5a540() {
   return (neuron0x1b3c4f0()*0.00173561);
}

double NNfunction_sb_sLsR::synapse0x1b5a580() {
   return (neuron0x1b3c830()*-0.00332155);
}

double NNfunction_sb_sLsR::synapse0x1b5a5c0() {
   return (neuron0x1b3cb70()*-0.0055805);
}

double NNfunction_sb_sLsR::synapse0x1b5a600() {
   return (neuron0x1b3ceb0()*-0.00376779);
}

double NNfunction_sb_sLsR::synapse0x1b5a640() {
   return (neuron0x1b3d1f0()*0.00255414);
}

double NNfunction_sb_sLsR::synapse0x1b5a680() {
   return (neuron0x1b3d530()*0.0249355);
}

double NNfunction_sb_sLsR::synapse0x1b5a6c0() {
   return (neuron0x1b3d870()*-0.203689);
}

double NNfunction_sb_sLsR::synapse0x1b5a700() {
   return (neuron0x1b3dbb0()*-0.00990262);
}

double NNfunction_sb_sLsR::synapse0x1b5a740() {
   return (neuron0x1b3def0()*0.0297011);
}

double NNfunction_sb_sLsR::synapse0x1b5a780() {
   return (neuron0x1b3e230()*0.0099769);
}

double NNfunction_sb_sLsR::synapse0x1b5a210() {
   return (neuron0x1b3e570()*-0.0269443);
}

double NNfunction_sb_sLsR::synapse0x1b5a250() {
   return (neuron0x1b3ead0()*0.0243871);
}

double NNfunction_sb_sLsR::synapse0x1b5a8d0() {
   return (neuron0x1b3ecf0()*-0.291771);
}

double NNfunction_sb_sLsR::synapse0x1b5a910() {
   return (neuron0x1b3f030()*-0.00364416);
}

double NNfunction_sb_sLsR::synapse0x1b5a950() {
   return (neuron0x1b3f370()*-0.0101809);
}

double NNfunction_sb_sLsR::synapse0x1b5a990() {
   return (neuron0x1b3f6b0()*-0.00285593);
}

double NNfunction_sb_sLsR::synapse0x1b5a9d0() {
   return (neuron0x1b3f9f0()*0.00624796);
}

double NNfunction_sb_sLsR::synapse0x1b5aa10() {
   return (neuron0x1b3fd30()*-0.00268055);
}

double NNfunction_sb_sLsR::synapse0x1b5ad90() {
   return (neuron0x1b3b170()*0.351732);
}

double NNfunction_sb_sLsR::synapse0x1b5add0() {
   return (neuron0x1b3b4b0()*-0.0280861);
}

double NNfunction_sb_sLsR::synapse0x1b5ae10() {
   return (neuron0x1b3b7f0()*0.123714);
}

double NNfunction_sb_sLsR::synapse0x1b5ae50() {
   return (neuron0x1b3bb30()*-0.757342);
}

double NNfunction_sb_sLsR::synapse0x1b5ae90() {
   return (neuron0x1b3be70()*-0.069924);
}

double NNfunction_sb_sLsR::synapse0x1b5aed0() {
   return (neuron0x1b3c1b0()*-0.211154);
}

double NNfunction_sb_sLsR::synapse0x1b5af10() {
   return (neuron0x1b3c4f0()*-0.0631309);
}

double NNfunction_sb_sLsR::synapse0x1b5af50() {
   return (neuron0x1b3c830()*-0.509861);
}

double NNfunction_sb_sLsR::synapse0x1b5af90() {
   return (neuron0x1b3cb70()*0.0156739);
}

double NNfunction_sb_sLsR::synapse0x1b5afd0() {
   return (neuron0x1b3ceb0()*-0.23889);
}

double NNfunction_sb_sLsR::synapse0x1b5b010() {
   return (neuron0x1b3d1f0()*0.161891);
}

double NNfunction_sb_sLsR::synapse0x1b5b050() {
   return (neuron0x1b3d530()*0.0150506);
}

double NNfunction_sb_sLsR::synapse0x1b5b090() {
   return (neuron0x1b3d870()*0.150252);
}

double NNfunction_sb_sLsR::synapse0x1b5b0d0() {
   return (neuron0x1b3dbb0()*-0.000323651);
}

double NNfunction_sb_sLsR::synapse0x1b5b110() {
   return (neuron0x1b3def0()*0.362278);
}

double NNfunction_sb_sLsR::synapse0x1b5b150() {
   return (neuron0x1b3e230()*0.356134);
}

double NNfunction_sb_sLsR::synapse0x1b5abe0() {
   return (neuron0x1b3e570()*-0.096632);
}

double NNfunction_sb_sLsR::synapse0x1b5ac20() {
   return (neuron0x1b3ead0()*0.0716243);
}

double NNfunction_sb_sLsR::synapse0x1b5b2a0() {
   return (neuron0x1b3ecf0()*-0.231551);
}

double NNfunction_sb_sLsR::synapse0x1b5b2e0() {
   return (neuron0x1b3f030()*0.123708);
}

double NNfunction_sb_sLsR::synapse0x1b5b320() {
   return (neuron0x1b3f370()*0.146803);
}

double NNfunction_sb_sLsR::synapse0x1b5b360() {
   return (neuron0x1b3f6b0()*0.166384);
}

double NNfunction_sb_sLsR::synapse0x1b5b3a0() {
   return (neuron0x1b3f9f0()*0.0793502);
}

double NNfunction_sb_sLsR::synapse0x1b5b3e0() {
   return (neuron0x1b3fd30()*0.435316);
}

double NNfunction_sb_sLsR::synapse0x1b5b760() {
   return (neuron0x1b3b170()*-0.600327);
}

double NNfunction_sb_sLsR::synapse0x1b5b7a0() {
   return (neuron0x1b3b4b0()*-0.489925);
}

double NNfunction_sb_sLsR::synapse0x1b5b7e0() {
   return (neuron0x1b3b7f0()*-0.370317);
}

double NNfunction_sb_sLsR::synapse0x1b5b820() {
   return (neuron0x1b3bb30()*-0.000734289);
}

double NNfunction_sb_sLsR::synapse0x1b5b860() {
   return (neuron0x1b3be70()*0.447062);
}

double NNfunction_sb_sLsR::synapse0x1b5b8a0() {
   return (neuron0x1b3c1b0()*-0.149318);
}

double NNfunction_sb_sLsR::synapse0x1b5b8e0() {
   return (neuron0x1b3c4f0()*-0.94114);
}

double NNfunction_sb_sLsR::synapse0x1b5b920() {
   return (neuron0x1b3c830()*0.102172);
}

double NNfunction_sb_sLsR::synapse0x1b5b960() {
   return (neuron0x1b3cb70()*-0.367131);
}

double NNfunction_sb_sLsR::synapse0x1b5b9a0() {
   return (neuron0x1b3ceb0()*-0.173126);
}

double NNfunction_sb_sLsR::synapse0x1b5b9e0() {
   return (neuron0x1b3d1f0()*-0.420877);
}

double NNfunction_sb_sLsR::synapse0x1b5ba20() {
   return (neuron0x1b3d530()*-0.221054);
}

double NNfunction_sb_sLsR::synapse0x1b5ba60() {
   return (neuron0x1b3d870()*0.416447);
}

double NNfunction_sb_sLsR::synapse0x1b5baa0() {
   return (neuron0x1b3dbb0()*-0.0187863);
}

double NNfunction_sb_sLsR::synapse0x1b5bae0() {
   return (neuron0x1b3def0()*0.345138);
}

double NNfunction_sb_sLsR::synapse0x1b5bb20() {
   return (neuron0x1b3e230()*0.0676937);
}

double NNfunction_sb_sLsR::synapse0x1b5b5b0() {
   return (neuron0x1b3e570()*-0.593679);
}

double NNfunction_sb_sLsR::synapse0x1b5b5f0() {
   return (neuron0x1b3ead0()*-0.0768852);
}

double NNfunction_sb_sLsR::synapse0x1b5bc70() {
   return (neuron0x1b3ecf0()*0.427087);
}

double NNfunction_sb_sLsR::synapse0x1b5bcb0() {
   return (neuron0x1b3f030()*-0.402193);
}

double NNfunction_sb_sLsR::synapse0x1b5bcf0() {
   return (neuron0x1b3f370()*0.0209291);
}

double NNfunction_sb_sLsR::synapse0x1b5bd30() {
   return (neuron0x1b3f6b0()*0.192255);
}

double NNfunction_sb_sLsR::synapse0x1b5bd70() {
   return (neuron0x1b3f9f0()*0.389113);
}

double NNfunction_sb_sLsR::synapse0x1b5bdb0() {
   return (neuron0x1b3fd30()*0.198712);
}

double NNfunction_sb_sLsR::synapse0x1b5c130() {
   return (neuron0x1b3b170()*-0.0182682);
}

double NNfunction_sb_sLsR::synapse0x1b5c170() {
   return (neuron0x1b3b4b0()*0.0594832);
}

double NNfunction_sb_sLsR::synapse0x1b5c1b0() {
   return (neuron0x1b3b7f0()*0.155178);
}

double NNfunction_sb_sLsR::synapse0x1b5c1f0() {
   return (neuron0x1b3bb30()*0.494254);
}

double NNfunction_sb_sLsR::synapse0x1b5c230() {
   return (neuron0x1b3be70()*0.0537718);
}

double NNfunction_sb_sLsR::synapse0x1b5c270() {
   return (neuron0x1b3c1b0()*0.0223335);
}

double NNfunction_sb_sLsR::synapse0x1b5c2b0() {
   return (neuron0x1b3c4f0()*-0.0327353);
}

double NNfunction_sb_sLsR::synapse0x1b5c2f0() {
   return (neuron0x1b3c830()*0.0302931);
}

double NNfunction_sb_sLsR::synapse0x1b5c330() {
   return (neuron0x1b3cb70()*-0.0335983);
}

double NNfunction_sb_sLsR::synapse0x1b5c370() {
   return (neuron0x1b3ceb0()*-0.0162552);
}

double NNfunction_sb_sLsR::synapse0x1b5c3b0() {
   return (neuron0x1b3d1f0()*-0.00446084);
}

double NNfunction_sb_sLsR::synapse0x1b5c3f0() {
   return (neuron0x1b3d530()*-0.0442193);
}

double NNfunction_sb_sLsR::synapse0x1b5c430() {
   return (neuron0x1b3d870()*-0.439355);
}

double NNfunction_sb_sLsR::synapse0x1b5c470() {
   return (neuron0x1b3dbb0()*-0.0142779);
}

double NNfunction_sb_sLsR::synapse0x1b5c4b0() {
   return (neuron0x1b3def0()*-0.0341844);
}

double NNfunction_sb_sLsR::synapse0x1b5c4f0() {
   return (neuron0x1b3e230()*0.0234699);
}

double NNfunction_sb_sLsR::synapse0x1b5bf80() {
   return (neuron0x1b3e570()*0.0364796);
}

double NNfunction_sb_sLsR::synapse0x1b5bfc0() {
   return (neuron0x1b3ead0()*-0.0561787);
}

double NNfunction_sb_sLsR::synapse0x1b5c640() {
   return (neuron0x1b3ecf0()*-0.19593);
}

double NNfunction_sb_sLsR::synapse0x1b5c680() {
   return (neuron0x1b3f030()*0.00418432);
}

double NNfunction_sb_sLsR::synapse0x1b5c6c0() {
   return (neuron0x1b3f370()*-0.00803446);
}

double NNfunction_sb_sLsR::synapse0x1b5c700() {
   return (neuron0x1b3f6b0()*-0.00238437);
}

double NNfunction_sb_sLsR::synapse0x1b5c740() {
   return (neuron0x1b3f9f0()*0.0114626);
}

double NNfunction_sb_sLsR::synapse0x1b5c780() {
   return (neuron0x1b3fd30()*0.0307267);
}

double NNfunction_sb_sLsR::synapse0x1b45230() {
   return (neuron0x1b3b170()*0.0188453);
}

double NNfunction_sb_sLsR::synapse0x1b45270() {
   return (neuron0x1b3b4b0()*-0.0443921);
}

double NNfunction_sb_sLsR::synapse0x1b452b0() {
   return (neuron0x1b3b7f0()*0.0284425);
}

double NNfunction_sb_sLsR::synapse0x1b452f0() {
   return (neuron0x1b3bb30()*-9.92233);
}

double NNfunction_sb_sLsR::synapse0x1b45330() {
   return (neuron0x1b3be70()*0.0143016);
}

double NNfunction_sb_sLsR::synapse0x1b45370() {
   return (neuron0x1b3c1b0()*-0.0163857);
}

double NNfunction_sb_sLsR::synapse0x1b453b0() {
   return (neuron0x1b3c4f0()*-0.0617144);
}

double NNfunction_sb_sLsR::synapse0x1b453f0() {
   return (neuron0x1b3c830()*0.0108094);
}

double NNfunction_sb_sLsR::synapse0x1b5cf10() {
   return (neuron0x1b3cb70()*0.0522989);
}

double NNfunction_sb_sLsR::synapse0x1b5cf50() {
   return (neuron0x1b3ceb0()*-0.0506948);
}

double NNfunction_sb_sLsR::synapse0x1b5cf90() {
   return (neuron0x1b3d1f0()*-0.025932);
}

double NNfunction_sb_sLsR::synapse0x1b5cfd0() {
   return (neuron0x1b3d530()*0.0202525);
}

double NNfunction_sb_sLsR::synapse0x1b5d010() {
   return (neuron0x1b3d870()*-0.137025);
}

double NNfunction_sb_sLsR::synapse0x1b5d050() {
   return (neuron0x1b3dbb0()*-0.0356545);
}

double NNfunction_sb_sLsR::synapse0x1b5d090() {
   return (neuron0x1b3def0()*-0.0517081);
}

double NNfunction_sb_sLsR::synapse0x1b5d0d0() {
   return (neuron0x1b3e230()*-0.00017617);
}

double NNfunction_sb_sLsR::synapse0x1b5c950() {
   return (neuron0x1b3e570()*0.048859);
}

double NNfunction_sb_sLsR::synapse0x1b5c990() {
   return (neuron0x1b3ead0()*-0.0284766);
}

double NNfunction_sb_sLsR::synapse0x1b5d220() {
   return (neuron0x1b3ecf0()*-0.108511);
}

double NNfunction_sb_sLsR::synapse0x1b5d260() {
   return (neuron0x1b3f030()*0.00887259);
}

double NNfunction_sb_sLsR::synapse0x1b5d2a0() {
   return (neuron0x1b3f370()*-0.00732304);
}

double NNfunction_sb_sLsR::synapse0x1b5d2e0() {
   return (neuron0x1b3f6b0()*-0.00194404);
}

double NNfunction_sb_sLsR::synapse0x1b5d320() {
   return (neuron0x1b3f9f0()*-0.00860832);
}

double NNfunction_sb_sLsR::synapse0x1b5d360() {
   return (neuron0x1b3fd30()*-0.00607411);
}

double NNfunction_sb_sLsR::synapse0x1b5d6e0() {
   return (neuron0x1b3b170()*0.209101);
}

double NNfunction_sb_sLsR::synapse0x1b5d720() {
   return (neuron0x1b3b4b0()*-0.221943);
}

double NNfunction_sb_sLsR::synapse0x1b5d760() {
   return (neuron0x1b3b7f0()*-0.312665);
}

double NNfunction_sb_sLsR::synapse0x1b5d7a0() {
   return (neuron0x1b3bb30()*1.03084);
}

double NNfunction_sb_sLsR::synapse0x1b5d7e0() {
   return (neuron0x1b3be70()*-0.0126569);
}

double NNfunction_sb_sLsR::synapse0x1b5d820() {
   return (neuron0x1b3c1b0()*0.16489);
}

double NNfunction_sb_sLsR::synapse0x1b5d860() {
   return (neuron0x1b3c4f0()*0.150763);
}

double NNfunction_sb_sLsR::synapse0x1b5d8a0() {
   return (neuron0x1b3c830()*0.234988);
}

double NNfunction_sb_sLsR::synapse0x1b5d8e0() {
   return (neuron0x1b3cb70()*0.32322);
}

double NNfunction_sb_sLsR::synapse0x1b5d920() {
   return (neuron0x1b3ceb0()*0.197524);
}

double NNfunction_sb_sLsR::synapse0x1b5d960() {
   return (neuron0x1b3d1f0()*-0.0575952);
}

double NNfunction_sb_sLsR::synapse0x1b5d9a0() {
   return (neuron0x1b3d530()*0.446222);
}

double NNfunction_sb_sLsR::synapse0x1b5d9e0() {
   return (neuron0x1b3d870()*0.31741);
}

double NNfunction_sb_sLsR::synapse0x1b5da20() {
   return (neuron0x1b3dbb0()*0.0381682);
}

double NNfunction_sb_sLsR::synapse0x1b5da60() {
   return (neuron0x1b3def0()*-0.272672);
}

double NNfunction_sb_sLsR::synapse0x1b5daa0() {
   return (neuron0x1b3e230()*0.344602);
}

double NNfunction_sb_sLsR::synapse0x1b5d530() {
   return (neuron0x1b3e570()*0.190077);
}

double NNfunction_sb_sLsR::synapse0x1b5d570() {
   return (neuron0x1b3ead0()*-0.0337335);
}

double NNfunction_sb_sLsR::synapse0x1b5dbf0() {
   return (neuron0x1b3ecf0()*0.410686);
}

double NNfunction_sb_sLsR::synapse0x1b5dc30() {
   return (neuron0x1b3f030()*-0.0458712);
}

double NNfunction_sb_sLsR::synapse0x1b5dc70() {
   return (neuron0x1b3f370()*-0.331752);
}

double NNfunction_sb_sLsR::synapse0x1b5dcb0() {
   return (neuron0x1b3f6b0()*-0.53749);
}

double NNfunction_sb_sLsR::synapse0x1b5dcf0() {
   return (neuron0x1b3f9f0()*-0.0208676);
}

double NNfunction_sb_sLsR::synapse0x1b5dd30() {
   return (neuron0x1b3fd30()*-0.0961349);
}

double NNfunction_sb_sLsR::synapse0x1b5e0b0() {
   return (neuron0x1b3b170()*-0.00429355);
}

double NNfunction_sb_sLsR::synapse0x1b5e0f0() {
   return (neuron0x1b3b4b0()*0.0184929);
}

double NNfunction_sb_sLsR::synapse0x1b5e130() {
   return (neuron0x1b3b7f0()*0.0210449);
}

double NNfunction_sb_sLsR::synapse0x1b5e170() {
   return (neuron0x1b3bb30()*2.41996);
}

double NNfunction_sb_sLsR::synapse0x1b5e1b0() {
   return (neuron0x1b3be70()*0.0170398);
}

double NNfunction_sb_sLsR::synapse0x1b5e1f0() {
   return (neuron0x1b3c1b0()*-0.00690679);
}

double NNfunction_sb_sLsR::synapse0x1b5e230() {
   return (neuron0x1b3c4f0()*0.000869338);
}

double NNfunction_sb_sLsR::synapse0x1b5e270() {
   return (neuron0x1b3c830()*0.00246825);
}

double NNfunction_sb_sLsR::synapse0x1b5e2b0() {
   return (neuron0x1b3cb70()*-0.00274047);
}

double NNfunction_sb_sLsR::synapse0x1b5e2f0() {
   return (neuron0x1b3ceb0()*0.0221724);
}

double NNfunction_sb_sLsR::synapse0x1b5e330() {
   return (neuron0x1b3d1f0()*0.00507613);
}

double NNfunction_sb_sLsR::synapse0x1b5e370() {
   return (neuron0x1b3d530()*-0.00327191);
}

double NNfunction_sb_sLsR::synapse0x1b5e3b0() {
   return (neuron0x1b3d870()*-0.0189781);
}

double NNfunction_sb_sLsR::synapse0x1b5e3f0() {
   return (neuron0x1b3dbb0()*0.0139884);
}

double NNfunction_sb_sLsR::synapse0x1b5e430() {
   return (neuron0x1b3def0()*-0.0110879);
}

double NNfunction_sb_sLsR::synapse0x1b5e470() {
   return (neuron0x1b3e230()*-0.0132684);
}

double NNfunction_sb_sLsR::synapse0x1b5df00() {
   return (neuron0x1b3e570()*0.00224795);
}

double NNfunction_sb_sLsR::synapse0x1b5df40() {
   return (neuron0x1b3ead0()*0.00103055);
}

double NNfunction_sb_sLsR::synapse0x1b4ea70() {
   return (neuron0x1b3ecf0()*-0.0384107);
}

double NNfunction_sb_sLsR::synapse0x1b4eab0() {
   return (neuron0x1b3f030()*-0.00125418);
}

double NNfunction_sb_sLsR::synapse0x1b4eaf0() {
   return (neuron0x1b3f370()*-0.00664712);
}

double NNfunction_sb_sLsR::synapse0x1b4eb30() {
   return (neuron0x1b3f6b0()*-0.0054694);
}

double NNfunction_sb_sLsR::synapse0x1b4eb70() {
   return (neuron0x1b3f9f0()*-2.58916e-05);
}

double NNfunction_sb_sLsR::synapse0x1b4ebb0() {
   return (neuron0x1b3fd30()*0.0044218);
}

double NNfunction_sb_sLsR::synapse0x1b4ef30() {
   return (neuron0x1b3b170()*0.0331881);
}

double NNfunction_sb_sLsR::synapse0x1b4ef70() {
   return (neuron0x1b3b4b0()*-0.0861894);
}

double NNfunction_sb_sLsR::synapse0x1b4efb0() {
   return (neuron0x1b3b7f0()*-0.00617632);
}

double NNfunction_sb_sLsR::synapse0x1b4eff0() {
   return (neuron0x1b3bb30()*-6.99519);
}

double NNfunction_sb_sLsR::synapse0x1b4f030() {
   return (neuron0x1b3be70()*0.0116713);
}

double NNfunction_sb_sLsR::synapse0x1b4f070() {
   return (neuron0x1b3c1b0()*-0.0347047);
}

double NNfunction_sb_sLsR::synapse0x1b4f0b0() {
   return (neuron0x1b3c4f0()*-0.0370752);
}

double NNfunction_sb_sLsR::synapse0x1b4f0f0() {
   return (neuron0x1b3c830()*0.0211177);
}

double NNfunction_sb_sLsR::synapse0x1b4f130() {
   return (neuron0x1b3cb70()*0.0801779);
}

double NNfunction_sb_sLsR::synapse0x1b4f170() {
   return (neuron0x1b3ceb0()*-0.035452);
}

double NNfunction_sb_sLsR::synapse0x1b4f1b0() {
   return (neuron0x1b3d1f0()*0.00693434);
}

double NNfunction_sb_sLsR::synapse0x1b4f1f0() {
   return (neuron0x1b3d530()*0.0655522);
}

double NNfunction_sb_sLsR::synapse0x1b4f230() {
   return (neuron0x1b3d870()*-0.25449);
}

double NNfunction_sb_sLsR::synapse0x1b4f270() {
   return (neuron0x1b3dbb0()*-0.00654361);
}

double NNfunction_sb_sLsR::synapse0x1b4f2b0() {
   return (neuron0x1b3def0()*-0.0706293);
}

double NNfunction_sb_sLsR::synapse0x1b4f2f0() {
   return (neuron0x1b3e230()*0.0577189);
}

double NNfunction_sb_sLsR::synapse0x1b4ed80() {
   return (neuron0x1b3e570()*0.0812766);
}

double NNfunction_sb_sLsR::synapse0x1b4edc0() {
   return (neuron0x1b3ead0()*-0.0767758);
}

double NNfunction_sb_sLsR::synapse0x1b4f440() {
   return (neuron0x1b3ecf0()*0.509937);
}

double NNfunction_sb_sLsR::synapse0x1b4f480() {
   return (neuron0x1b3f030()*0.0860203);
}

double NNfunction_sb_sLsR::synapse0x1b4f4c0() {
   return (neuron0x1b3f370()*0.0265656);
}

double NNfunction_sb_sLsR::synapse0x1b4f500() {
   return (neuron0x1b3f6b0()*0.0360165);
}

double NNfunction_sb_sLsR::synapse0x1b4f540() {
   return (neuron0x1b3f9f0()*0.0463607);
}

double NNfunction_sb_sLsR::synapse0x1b4f580() {
   return (neuron0x1b3fd30()*-0.00348888);
}

double NNfunction_sb_sLsR::synapse0x1b4f900() {
   return (neuron0x1b3b170()*0.0112615);
}

double NNfunction_sb_sLsR::synapse0x1b4f940() {
   return (neuron0x1b3b4b0()*-0.00648117);
}

double NNfunction_sb_sLsR::synapse0x1b4f980() {
   return (neuron0x1b3b7f0()*-0.0261851);
}

double NNfunction_sb_sLsR::synapse0x1b4f9c0() {
   return (neuron0x1b3bb30()*0.0405182);
}

double NNfunction_sb_sLsR::synapse0x1b4fa00() {
   return (neuron0x1b3be70()*-0.00734985);
}

double NNfunction_sb_sLsR::synapse0x1b4fa40() {
   return (neuron0x1b3c1b0()*0.00152002);
}

double NNfunction_sb_sLsR::synapse0x1b4fa80() {
   return (neuron0x1b3c4f0()*0.0124854);
}

double NNfunction_sb_sLsR::synapse0x1b4fac0() {
   return (neuron0x1b3c830()*-0.00149099);
}

double NNfunction_sb_sLsR::synapse0x1b4fb00() {
   return (neuron0x1b3cb70()*-0.00968891);
}

double NNfunction_sb_sLsR::synapse0x1b4fb40() {
   return (neuron0x1b3ceb0()*-0.00280589);
}

double NNfunction_sb_sLsR::synapse0x1b4fb80() {
   return (neuron0x1b3d1f0()*-0.00753609);
}

double NNfunction_sb_sLsR::synapse0x1b4fbc0() {
   return (neuron0x1b3d530()*-0.00442806);
}

double NNfunction_sb_sLsR::synapse0x1b4fc00() {
   return (neuron0x1b3d870()*0.961664);
}

double NNfunction_sb_sLsR::synapse0x1b4fc40() {
   return (neuron0x1b3dbb0()*0.0144696);
}

double NNfunction_sb_sLsR::synapse0x1b4fc80() {
   return (neuron0x1b3def0()*-0.0108357);
}

double NNfunction_sb_sLsR::synapse0x1b4fcc0() {
   return (neuron0x1b3e230()*-0.00760252);
}

double NNfunction_sb_sLsR::synapse0x1b4f750() {
   return (neuron0x1b3e570()*0.00603424);
}

double NNfunction_sb_sLsR::synapse0x1b4f790() {
   return (neuron0x1b3ead0()*-0.0232494);
}

double NNfunction_sb_sLsR::synapse0x1b4fe10() {
   return (neuron0x1b3ecf0()*-0.461684);
}

double NNfunction_sb_sLsR::synapse0x1b4fe50() {
   return (neuron0x1b3f030()*0.0205849);
}

double NNfunction_sb_sLsR::synapse0x1b4fe90() {
   return (neuron0x1b3f370()*-0.00754188);
}

double NNfunction_sb_sLsR::synapse0x1b4fed0() {
   return (neuron0x1b3f6b0()*0.00678974);
}

double NNfunction_sb_sLsR::synapse0x1b4ff10() {
   return (neuron0x1b3f9f0()*0.00476948);
}

double NNfunction_sb_sLsR::synapse0x1b4ff50() {
   return (neuron0x1b3fd30()*-0.0203644);
}

double NNfunction_sb_sLsR::synapse0x1b502d0() {
   return (neuron0x1b3b170()*0.00542918);
}

double NNfunction_sb_sLsR::synapse0x1b50310() {
   return (neuron0x1b3b4b0()*-0.351628);
}

double NNfunction_sb_sLsR::synapse0x1b50350() {
   return (neuron0x1b3b7f0()*-0.0072088);
}

double NNfunction_sb_sLsR::synapse0x1b50390() {
   return (neuron0x1b3bb30()*-0.582864);
}

double NNfunction_sb_sLsR::synapse0x1b503d0() {
   return (neuron0x1b3be70()*-0.27421);
}

double NNfunction_sb_sLsR::synapse0x1b50410() {
   return (neuron0x1b3c1b0()*0.17285);
}

double NNfunction_sb_sLsR::synapse0x1b50450() {
   return (neuron0x1b3c4f0()*-0.539538);
}

double NNfunction_sb_sLsR::synapse0x1b50490() {
   return (neuron0x1b3c830()*-0.53009);
}

double NNfunction_sb_sLsR::synapse0x1b504d0() {
   return (neuron0x1b3cb70()*-0.111973);
}

double NNfunction_sb_sLsR::synapse0x1b50510() {
   return (neuron0x1b3ceb0()*0.215533);
}

double NNfunction_sb_sLsR::synapse0x1b50550() {
   return (neuron0x1b3d1f0()*-0.0157341);
}

double NNfunction_sb_sLsR::synapse0x1b50590() {
   return (neuron0x1b3d530()*-0.549304);
}

double NNfunction_sb_sLsR::synapse0x1b505d0() {
   return (neuron0x1b3d870()*-0.383995);
}

double NNfunction_sb_sLsR::synapse0x1b50610() {
   return (neuron0x1b3dbb0()*-0.0471842);
}

double NNfunction_sb_sLsR::synapse0x1b50650() {
   return (neuron0x1b3def0()*-0.199786);
}

double NNfunction_sb_sLsR::synapse0x1b50690() {
   return (neuron0x1b3e230()*-0.361929);
}

double NNfunction_sb_sLsR::synapse0x1b50120() {
   return (neuron0x1b3e570()*0.510552);
}

double NNfunction_sb_sLsR::synapse0x1b50160() {
   return (neuron0x1b3ead0()*0.159258);
}

double NNfunction_sb_sLsR::synapse0x1b507e0() {
   return (neuron0x1b3ecf0()*-0.283406);
}

double NNfunction_sb_sLsR::synapse0x1b50820() {
   return (neuron0x1b3f030()*-0.142924);
}

double NNfunction_sb_sLsR::synapse0x1b50860() {
   return (neuron0x1b3f370()*0.0636436);
}

double NNfunction_sb_sLsR::synapse0x1b508a0() {
   return (neuron0x1b3f6b0()*0.137274);
}

double NNfunction_sb_sLsR::synapse0x1b508e0() {
   return (neuron0x1b3f9f0()*0.102899);
}

double NNfunction_sb_sLsR::synapse0x1b50920() {
   return (neuron0x1b3fd30()*-0.458101);
}

double NNfunction_sb_sLsR::synapse0x1b627f0() {
   return (neuron0x1b3b170()*-0.108787);
}

double NNfunction_sb_sLsR::synapse0x1b62830() {
   return (neuron0x1b3b4b0()*-0.170335);
}

double NNfunction_sb_sLsR::synapse0x1b62870() {
   return (neuron0x1b3b7f0()*-0.328274);
}

double NNfunction_sb_sLsR::synapse0x1b628b0() {
   return (neuron0x1b3bb30()*1.00502);
}

double NNfunction_sb_sLsR::synapse0x1b628f0() {
   return (neuron0x1b3be70()*-0.450632);
}

double NNfunction_sb_sLsR::synapse0x1b62930() {
   return (neuron0x1b3c1b0()*-0.199044);
}

double NNfunction_sb_sLsR::synapse0x1b62970() {
   return (neuron0x1b3c4f0()*-0.053467);
}

double NNfunction_sb_sLsR::synapse0x1b629b0() {
   return (neuron0x1b3c830()*-0.138543);
}

double NNfunction_sb_sLsR::synapse0x1b629f0() {
   return (neuron0x1b3cb70()*-0.126053);
}

double NNfunction_sb_sLsR::synapse0x1b62a30() {
   return (neuron0x1b3ceb0()*-0.00975984);
}

double NNfunction_sb_sLsR::synapse0x1b62a70() {
   return (neuron0x1b3d1f0()*-0.232101);
}

double NNfunction_sb_sLsR::synapse0x1b62ab0() {
   return (neuron0x1b3d530()*0.618156);
}

double NNfunction_sb_sLsR::synapse0x1b62af0() {
   return (neuron0x1b3d870()*0.617317);
}

double NNfunction_sb_sLsR::synapse0x1b62b30() {
   return (neuron0x1b3dbb0()*-0.263905);
}

double NNfunction_sb_sLsR::synapse0x1b62b70() {
   return (neuron0x1b3def0()*-0.837036);
}

double NNfunction_sb_sLsR::synapse0x1b62bb0() {
   return (neuron0x1b3e230()*1.21119);
}

double NNfunction_sb_sLsR::synapse0x1b50960() {
   return (neuron0x1b3e570()*0.165479);
}

double NNfunction_sb_sLsR::synapse0x1b509a0() {
   return (neuron0x1b3ead0()*-0.0448369);
}

double NNfunction_sb_sLsR::synapse0x1b62d00() {
   return (neuron0x1b3ecf0()*-0.771829);
}

double NNfunction_sb_sLsR::synapse0x1b62d40() {
   return (neuron0x1b3f030()*0.106257);
}

double NNfunction_sb_sLsR::synapse0x1b62d80() {
   return (neuron0x1b3f370()*-0.243287);
}

double NNfunction_sb_sLsR::synapse0x1b62dc0() {
   return (neuron0x1b3f6b0()*0.1385);
}

double NNfunction_sb_sLsR::synapse0x1b62e00() {
   return (neuron0x1b3f9f0()*0.148591);
}

double NNfunction_sb_sLsR::synapse0x1b62e40() {
   return (neuron0x1b3fd30()*-0.217931);
}

double NNfunction_sb_sLsR::synapse0x1b631c0() {
   return (neuron0x1b3b170()*-0.0147952);
}

double NNfunction_sb_sLsR::synapse0x1b63200() {
   return (neuron0x1b3b4b0()*0.00548085);
}

double NNfunction_sb_sLsR::synapse0x1b63240() {
   return (neuron0x1b3b7f0()*0.0141003);
}

double NNfunction_sb_sLsR::synapse0x1b63280() {
   return (neuron0x1b3bb30()*-13.2171);
}

double NNfunction_sb_sLsR::synapse0x1b632c0() {
   return (neuron0x1b3be70()*0.00539839);
}

double NNfunction_sb_sLsR::synapse0x1b63300() {
   return (neuron0x1b3c1b0()*-0.00742205);
}

double NNfunction_sb_sLsR::synapse0x1b63340() {
   return (neuron0x1b3c4f0()*-0.0355474);
}

double NNfunction_sb_sLsR::synapse0x1b63380() {
   return (neuron0x1b3c830()*0.0204985);
}

double NNfunction_sb_sLsR::synapse0x1b633c0() {
   return (neuron0x1b3cb70()*0.0392445);
}

double NNfunction_sb_sLsR::synapse0x1b63400() {
   return (neuron0x1b3ceb0()*-0.0270676);
}

double NNfunction_sb_sLsR::synapse0x1b63440() {
   return (neuron0x1b3d1f0()*-0.0405227);
}

double NNfunction_sb_sLsR::synapse0x1b63480() {
   return (neuron0x1b3d530()*0.0284689);
}

double NNfunction_sb_sLsR::synapse0x1b634c0() {
   return (neuron0x1b3d870()*0.00577267);
}

double NNfunction_sb_sLsR::synapse0x1b63500() {
   return (neuron0x1b3dbb0()*-0.0196938);
}

double NNfunction_sb_sLsR::synapse0x1b63540() {
   return (neuron0x1b3def0()*-0.0389619);
}

double NNfunction_sb_sLsR::synapse0x1b63580() {
   return (neuron0x1b3e230()*-0.0333094);
}

double NNfunction_sb_sLsR::synapse0x1b63010() {
   return (neuron0x1b3e570()*0.0455751);
}

double NNfunction_sb_sLsR::synapse0x1b63050() {
   return (neuron0x1b3ead0()*0.00142995);
}

double NNfunction_sb_sLsR::synapse0x1b636d0() {
   return (neuron0x1b3ecf0()*0.0576026);
}

double NNfunction_sb_sLsR::synapse0x1b63710() {
   return (neuron0x1b3f030()*0.00106593);
}

double NNfunction_sb_sLsR::synapse0x1b63750() {
   return (neuron0x1b3f370()*-0.0209313);
}

double NNfunction_sb_sLsR::synapse0x1b63790() {
   return (neuron0x1b3f6b0()*-0.0272644);
}

double NNfunction_sb_sLsR::synapse0x1b637d0() {
   return (neuron0x1b3f9f0()*-0.020039);
}

double NNfunction_sb_sLsR::synapse0x1b63810() {
   return (neuron0x1b3fd30()*-0.0126834);
}

double NNfunction_sb_sLsR::synapse0x1b63b90() {
   return (neuron0x1b3b170()*-0.35044);
}

double NNfunction_sb_sLsR::synapse0x1b63bd0() {
   return (neuron0x1b3b4b0()*0.377523);
}

double NNfunction_sb_sLsR::synapse0x1b63c10() {
   return (neuron0x1b3b7f0()*0.222243);
}

double NNfunction_sb_sLsR::synapse0x1b63c50() {
   return (neuron0x1b3bb30()*-0.422661);
}

double NNfunction_sb_sLsR::synapse0x1b63c90() {
   return (neuron0x1b3be70()*0.0100768);
}

double NNfunction_sb_sLsR::synapse0x1b63cd0() {
   return (neuron0x1b3c1b0()*-0.291643);
}

double NNfunction_sb_sLsR::synapse0x1b63d10() {
   return (neuron0x1b3c4f0()*-0.448554);
}

double NNfunction_sb_sLsR::synapse0x1b63d50() {
   return (neuron0x1b3c830()*0.0978865);
}

double NNfunction_sb_sLsR::synapse0x1b63d90() {
   return (neuron0x1b3cb70()*0.515309);
}

double NNfunction_sb_sLsR::synapse0x1b63dd0() {
   return (neuron0x1b3ceb0()*0.245395);
}

double NNfunction_sb_sLsR::synapse0x1b63e10() {
   return (neuron0x1b3d1f0()*0.122339);
}

double NNfunction_sb_sLsR::synapse0x1b63e50() {
   return (neuron0x1b3d530()*-0.358461);
}

double NNfunction_sb_sLsR::synapse0x1b63e90() {
   return (neuron0x1b3d870()*-0.578765);
}

double NNfunction_sb_sLsR::synapse0x1b63ed0() {
   return (neuron0x1b3dbb0()*-0.501184);
}

double NNfunction_sb_sLsR::synapse0x1b63f10() {
   return (neuron0x1b3def0()*-0.00163648);
}

double NNfunction_sb_sLsR::synapse0x1b63f50() {
   return (neuron0x1b3e230()*-0.124163);
}

double NNfunction_sb_sLsR::synapse0x1b639e0() {
   return (neuron0x1b3e570()*-0.202971);
}

double NNfunction_sb_sLsR::synapse0x1b63a20() {
   return (neuron0x1b3ead0()*0.321261);
}

double NNfunction_sb_sLsR::synapse0x1b640a0() {
   return (neuron0x1b3ecf0()*0.896235);
}

double NNfunction_sb_sLsR::synapse0x1b640e0() {
   return (neuron0x1b3f030()*0.0162789);
}

double NNfunction_sb_sLsR::synapse0x1b64120() {
   return (neuron0x1b3f370()*0.240828);
}

double NNfunction_sb_sLsR::synapse0x1b64160() {
   return (neuron0x1b3f6b0()*0.230592);
}

double NNfunction_sb_sLsR::synapse0x1b641a0() {
   return (neuron0x1b3f9f0()*-0.21159);
}

double NNfunction_sb_sLsR::synapse0x1b641e0() {
   return (neuron0x1b3fd30()*-0.318002);
}

double NNfunction_sb_sLsR::synapse0x1b64560() {
   return (neuron0x1b3b170()*-0.198827);
}

double NNfunction_sb_sLsR::synapse0x1b645a0() {
   return (neuron0x1b3b4b0()*-0.023544);
}

double NNfunction_sb_sLsR::synapse0x1b645e0() {
   return (neuron0x1b3b7f0()*0.0296922);
}

double NNfunction_sb_sLsR::synapse0x1b64620() {
   return (neuron0x1b3bb30()*-0.959322);
}

double NNfunction_sb_sLsR::synapse0x1b64660() {
   return (neuron0x1b3be70()*0.0301159);
}

double NNfunction_sb_sLsR::synapse0x1b646a0() {
   return (neuron0x1b3c1b0()*-0.0358681);
}

double NNfunction_sb_sLsR::synapse0x1b646e0() {
   return (neuron0x1b3c4f0()*0.0127242);
}

double NNfunction_sb_sLsR::synapse0x1b64720() {
   return (neuron0x1b3c830()*0.150549);
}

double NNfunction_sb_sLsR::synapse0x1b64760() {
   return (neuron0x1b3cb70()*0.057192);
}

double NNfunction_sb_sLsR::synapse0x1b647a0() {
   return (neuron0x1b3ceb0()*0.0174799);
}

double NNfunction_sb_sLsR::synapse0x1b647e0() {
   return (neuron0x1b3d1f0()*0.0659122);
}

double NNfunction_sb_sLsR::synapse0x1b64820() {
   return (neuron0x1b3d530()*0.00156087);
}

double NNfunction_sb_sLsR::synapse0x1b64860() {
   return (neuron0x1b3d870()*0.852027);
}

double NNfunction_sb_sLsR::synapse0x1b648a0() {
   return (neuron0x1b3dbb0()*-0.0696954);
}

double NNfunction_sb_sLsR::synapse0x1b648e0() {
   return (neuron0x1b3def0()*-0.0631334);
}

double NNfunction_sb_sLsR::synapse0x1b64920() {
   return (neuron0x1b3e230()*0.0799871);
}

double NNfunction_sb_sLsR::synapse0x1b643b0() {
   return (neuron0x1b3e570()*-0.0211287);
}

double NNfunction_sb_sLsR::synapse0x1b643f0() {
   return (neuron0x1b3ead0()*0.11535);
}

double NNfunction_sb_sLsR::synapse0x1b64a70() {
   return (neuron0x1b3ecf0()*-0.189552);
}

double NNfunction_sb_sLsR::synapse0x1b64ab0() {
   return (neuron0x1b3f030()*0.0140308);
}

double NNfunction_sb_sLsR::synapse0x1b64af0() {
   return (neuron0x1b3f370()*-0.114283);
}

double NNfunction_sb_sLsR::synapse0x1b64b30() {
   return (neuron0x1b3f6b0()*0.00957645);
}

double NNfunction_sb_sLsR::synapse0x1b64b70() {
   return (neuron0x1b3f9f0()*0.131303);
}

double NNfunction_sb_sLsR::synapse0x1b64bb0() {
   return (neuron0x1b3fd30()*0.0185681);
}

double NNfunction_sb_sLsR::synapse0x1904ad0() {
   return (neuron0x1b401a0()*0.0690665);
}

double NNfunction_sb_sLsR::synapse0x1904b10() {
   return (neuron0x1b40af0()*-0.0199981);
}

double NNfunction_sb_sLsR::synapse0x1b42660() {
   return (neuron0x1b415d0()*-0.0579279);
}

double NNfunction_sb_sLsR::synapse0x1b426a0() {
   return (neuron0x1b41070()*0.011758);
}

double NNfunction_sb_sLsR::synapse0x1b43030() {
   return (neuron0x1b423b0()*0.257297);
}

double NNfunction_sb_sLsR::synapse0x1b43070() {
   return (neuron0x1b42d80()*0.00208125);
}

double NNfunction_sb_sLsR::synapse0x1b43e00() {
   return (neuron0x1b43b50()*0.113335);
}

double NNfunction_sb_sLsR::synapse0x1b43e40() {
   return (neuron0x1b44520()*-0.026259);
}

double NNfunction_sb_sLsR::synapse0x1b447d0() {
   return (neuron0x1b44ef0()*0.0649712);
}

double NNfunction_sb_sLsR::synapse0x1b44810() {
   return (neuron0x1b459d0()*-0.070098);
}

double NNfunction_sb_sLsR::synapse0x1b451a0() {
   return (neuron0x1b463a0()*-0.026704);
}

double NNfunction_sb_sLsR::synapse0x1b451e0() {
   return (neuron0x1b43480()*0.0108255);
}

double NNfunction_sb_sLsR::synapse0x1b45c80() {
   return (neuron0x1b47f50()*0.049349);
}

double NNfunction_sb_sLsR::synapse0x1b45cc0() {
   return (neuron0x1b48920()*0.0160906);
}

double NNfunction_sb_sLsR::synapse0x1b46650() {
   return (neuron0x1b492f0()*0.00850032);
}

double NNfunction_sb_sLsR::synapse0x1b46690() {
   return (neuron0x1b49cc0()*0.0771655);
}

double NNfunction_sb_sLsR::synapse0x1b43730() {
   return (neuron0x1b4bad0()*0.446801);
}

double NNfunction_sb_sLsR::synapse0x1b43770() {
   return (neuron0x1b4bdb0()*-0.117573);
}

double NNfunction_sb_sLsR::synapse0x1b48200() {
   return (neuron0x1b4c780()*0.104851);
}

double NNfunction_sb_sLsR::synapse0x1b48240() {
   return (neuron0x1b4d150()*0.0919341);
}

double NNfunction_sb_sLsR::synapse0x1b48bd0() {
   return (neuron0x1b4db20()*0.0207005);
}

double NNfunction_sb_sLsR::synapse0x1b48c10() {
   return (neuron0x1b4e4f0()*-0.022933);
}

double NNfunction_sb_sLsR::synapse0x1b495a0() {
   return (neuron0x1b47040()*-0.030748);
}

double NNfunction_sb_sLsR::synapse0x1b495e0() {
   return (neuron0x1b47a10()*-0.469382);
}

double NNfunction_sb_sLsR::synapse0x1b49f70() {
   return (neuron0x1b51280()*-0.38494);
}

double NNfunction_sb_sLsR::synapse0x1b49fb0() {
   return (neuron0x1b51c50()*0.0254412);
}

double NNfunction_sb_sLsR::synapse0x1b3e110() {
   return (neuron0x1b52620()*-0.105635);
}

double NNfunction_sb_sLsR::synapse0x1b3e150() {
   return (neuron0x1b52ff0()*0.124046);
}

double NNfunction_sb_sLsR::synapse0x1b4c060() {
   return (neuron0x1b539c0()*-0.129476);
}

double NNfunction_sb_sLsR::synapse0x1b4c0a0() {
   return (neuron0x1b54390()*-0.146745);
}

double NNfunction_sb_sLsR::synapse0x1b4ca30() {
   return (neuron0x1b54d60()*-0.174179);
}

double NNfunction_sb_sLsR::synapse0x1b4ca70() {
   return (neuron0x1b55730()*0.155765);
}

double NNfunction_sb_sLsR::synapse0x1b4d400() {
   return (neuron0x1b4b7c0()*0.0690307);
}

double NNfunction_sb_sLsR::synapse0x1b4d440() {
   return (neuron0x1b58310()*1.82732);
}

double NNfunction_sb_sLsR::synapse0x1b4ddd0() {
   return (neuron0x1b58ce0()*-0.00466843);
}

double NNfunction_sb_sLsR::synapse0x1b4de10() {
   return (neuron0x1b596b0()*-0.013831);
}

double NNfunction_sb_sLsR::synapse0x1b4e7a0() {
   return (neuron0x1b5a080()*-1.6261);
}

double NNfunction_sb_sLsR::synapse0x1b4e7e0() {
   return (neuron0x1b5aa50()*0.100506);
}

double NNfunction_sb_sLsR::synapse0x1b472f0() {
   return (neuron0x1b5b420()*0.071048);
}

double NNfunction_sb_sLsR::synapse0x1b47330() {
   return (neuron0x1b5bdf0()*-0.915475);
}

double NNfunction_sb_sLsR::synapse0x1b50ba0() {
   return (neuron0x1b5c7c0()*-3.65322);
}

double NNfunction_sb_sLsR::synapse0x1b50be0() {
   return (neuron0x1b5d3a0()*0.0341174);
}

double NNfunction_sb_sLsR::synapse0x1b51530() {
   return (neuron0x1b5dd70()*1.32497);
}

double NNfunction_sb_sLsR::synapse0x1b51570() {
   return (neuron0x1b4ebf0()*-0.740865);
}

double NNfunction_sb_sLsR::synapse0x1b51f00() {
   return (neuron0x1b4f5c0()*-1.79869);
}

double NNfunction_sb_sLsR::synapse0x1b51f40() {
   return (neuron0x1b4ff90()*-0.0132203);
}

double NNfunction_sb_sLsR::synapse0x1b528d0() {
   return (neuron0x1b625d0()*-0.0355085);
}

double NNfunction_sb_sLsR::synapse0x1b52910() {
   return (neuron0x1b62e80()*3.96837);
}

double NNfunction_sb_sLsR::synapse0x1b532a0() {
   return (neuron0x1b63850()*-0.0555374);
}

double NNfunction_sb_sLsR::synapse0x1b532e0() {
   return (neuron0x1b64220()*0.320879);
}

double NNfunction_sb_sLsR::synapse0x1b559e0() {
   return (neuron0x1b401a0()*0.121476);
}

double NNfunction_sb_sLsR::synapse0x1b55a20() {
   return (neuron0x1b40af0()*0.0962638);
}

double NNfunction_sb_sLsR::synapse0x1b4afa0() {
   return (neuron0x1b415d0()*0.0754728);
}

double NNfunction_sb_sLsR::synapse0x1b4afe0() {
   return (neuron0x1b41070()*0.0242341);
}

double NNfunction_sb_sLsR::synapse0x1b585c0() {
   return (neuron0x1b423b0()*-1.04732);
}

double NNfunction_sb_sLsR::synapse0x1b58600() {
   return (neuron0x1b42d80()*0.154963);
}

double NNfunction_sb_sLsR::synapse0x1b58f90() {
   return (neuron0x1b43b50()*-0.096972);
}

double NNfunction_sb_sLsR::synapse0x1b58fd0() {
   return (neuron0x1b44520()*-0.0925885);
}

double NNfunction_sb_sLsR::synapse0x1b59960() {
   return (neuron0x1b44ef0()*-0.0752235);
}

double NNfunction_sb_sLsR::synapse0x1b599a0() {
   return (neuron0x1b459d0()*0.223293);
}

double NNfunction_sb_sLsR::synapse0x1b5a330() {
   return (neuron0x1b463a0()*-0.0714218);
}

double NNfunction_sb_sLsR::synapse0x1b5a370() {
   return (neuron0x1b43480()*0.0063588);
}

double NNfunction_sb_sLsR::synapse0x1b5ad00() {
   return (neuron0x1b47f50()*0.125999);
}

double NNfunction_sb_sLsR::synapse0x1b5ad40() {
   return (neuron0x1b48920()*0.169122);
}

double NNfunction_sb_sLsR::synapse0x1b5b6d0() {
   return (neuron0x1b492f0()*0.0357603);
}

double NNfunction_sb_sLsR::synapse0x1b5b710() {
   return (neuron0x1b49cc0()*-0.134625);
}

double NNfunction_sb_sLsR::synapse0x1b5c0a0() {
   return (neuron0x1b4bad0()*-0.509036);
}

double NNfunction_sb_sLsR::synapse0x1b5c0e0() {
   return (neuron0x1b4bdb0()*0.0469922);
}

double NNfunction_sb_sLsR::synapse0x1b5ca70() {
   return (neuron0x1b4c780()*0.0495555);
}

double NNfunction_sb_sLsR::synapse0x1b5cab0() {
   return (neuron0x1b4d150()*-0.4679);
}

double NNfunction_sb_sLsR::synapse0x1b5d650() {
   return (neuron0x1b4db20()*-0.215181);
}

double NNfunction_sb_sLsR::synapse0x1b5d690() {
   return (neuron0x1b4e4f0()*-0.128422);
}

double NNfunction_sb_sLsR::synapse0x1b5e020() {
   return (neuron0x1b47040()*-0.0777235);
}

double NNfunction_sb_sLsR::synapse0x1b5e060() {
   return (neuron0x1b47a10()*-1.68675);
}

double NNfunction_sb_sLsR::synapse0x1b4eea0() {
   return (neuron0x1b51280()*0.54812);
}

double NNfunction_sb_sLsR::synapse0x1b4eee0() {
   return (neuron0x1b51c50()*-0.160234);
}

double NNfunction_sb_sLsR::synapse0x1b4f870() {
   return (neuron0x1b52620()*-0.0166391);
}

double NNfunction_sb_sLsR::synapse0x1b4f8b0() {
   return (neuron0x1b52ff0()*-0.130383);
}

double NNfunction_sb_sLsR::synapse0x1b50240() {
   return (neuron0x1b539c0()*0.1338);
}

double NNfunction_sb_sLsR::synapse0x1b50280() {
   return (neuron0x1b54390()*0.31571);
}

double NNfunction_sb_sLsR::synapse0x1b62760() {
   return (neuron0x1b54d60()*-0.247079);
}

double NNfunction_sb_sLsR::synapse0x1b627a0() {
   return (neuron0x1b55730()*0.0316187);
}

double NNfunction_sb_sLsR::synapse0x1b63130() {
   return (neuron0x1b4b7c0()*-0.0080272);
}

double NNfunction_sb_sLsR::synapse0x1b63170() {
   return (neuron0x1b58310()*1.21139);
}

double NNfunction_sb_sLsR::synapse0x1b63b00() {
   return (neuron0x1b58ce0()*-0.171646);
}

double NNfunction_sb_sLsR::synapse0x1b63b40() {
   return (neuron0x1b596b0()*-0.0281608);
}

double NNfunction_sb_sLsR::synapse0x1b644d0() {
   return (neuron0x1b5a080()*0.0745737);
}

double NNfunction_sb_sLsR::synapse0x1b64510() {
   return (neuron0x1b5aa50()*-0.260344);
}

double NNfunction_sb_sLsR::synapse0x1b403c0() {
   return (neuron0x1b5b420()*-0.102564);
}

double NNfunction_sb_sLsR::synapse0x1b40400() {
   return (neuron0x1b5bdf0()*-0.726765);
}

double NNfunction_sb_sLsR::synapse0x1b53c70() {
   return (neuron0x1b5c7c0()*0.153888);
}

double NNfunction_sb_sLsR::synapse0x1b53cb0() {
   return (neuron0x1b5d3a0()*-0.118959);
}

double NNfunction_sb_sLsR::synapse0x1b64bf0() {
   return (neuron0x1b5dd70()*-0.557403);
}

double NNfunction_sb_sLsR::synapse0x1b64c30() {
   return (neuron0x1b4ebf0()*1.45853);
}

double NNfunction_sb_sLsR::synapse0x1b64c70() {
   return (neuron0x1b4f5c0()*-0.0631743);
}

double NNfunction_sb_sLsR::synapse0x1b64cb0() {
   return (neuron0x1b4ff90()*-0.199399);
}

double NNfunction_sb_sLsR::synapse0x1b6bb60() {
   return (neuron0x1b625d0()*0.0304846);
}

double NNfunction_sb_sLsR::synapse0x1b6bba0() {
   return (neuron0x1b62e80()*-1.26146);
}

double NNfunction_sb_sLsR::synapse0x1b6bbe0() {
   return (neuron0x1b63850()*-0.0056102);
}

double NNfunction_sb_sLsR::synapse0x1b6bc20() {
   return (neuron0x1b64220()*-0.617786);
}

double NNfunction_sb_sLsR::synapse0x1b6bfa0() {
   return (neuron0x1b401a0()*-1.47546);
}

double NNfunction_sb_sLsR::synapse0x1b6bfe0() {
   return (neuron0x1b40af0()*-0.658333);
}

double NNfunction_sb_sLsR::synapse0x1b6c020() {
   return (neuron0x1b415d0()*1.56682);
}

double NNfunction_sb_sLsR::synapse0x1b6c060() {
   return (neuron0x1b41070()*0.294379);
}

double NNfunction_sb_sLsR::synapse0x1b6c0a0() {
   return (neuron0x1b423b0()*-0.833069);
}

double NNfunction_sb_sLsR::synapse0x1b6c0e0() {
   return (neuron0x1b42d80()*1.41362);
}

double NNfunction_sb_sLsR::synapse0x1b6c120() {
   return (neuron0x1b43b50()*1.47054);
}

double NNfunction_sb_sLsR::synapse0x1b6c160() {
   return (neuron0x1b44520()*-0.546076);
}

double NNfunction_sb_sLsR::synapse0x1b6c1a0() {
   return (neuron0x1b44ef0()*-0.700191);
}

double NNfunction_sb_sLsR::synapse0x1b6c1e0() {
   return (neuron0x1b459d0()*-1.06626);
}

double NNfunction_sb_sLsR::synapse0x1b6c220() {
   return (neuron0x1b463a0()*0.873787);
}

double NNfunction_sb_sLsR::synapse0x1b6c260() {
   return (neuron0x1b43480()*-0.645532);
}

double NNfunction_sb_sLsR::synapse0x1b6c2a0() {
   return (neuron0x1b47f50()*0.738415);
}

double NNfunction_sb_sLsR::synapse0x1b6c2e0() {
   return (neuron0x1b48920()*-0.622346);
}

double NNfunction_sb_sLsR::synapse0x1b6c320() {
   return (neuron0x1b492f0()*-0.495695);
}

double NNfunction_sb_sLsR::synapse0x1b6c360() {
   return (neuron0x1b49cc0()*0.712175);
}

double NNfunction_sb_sLsR::synapse0x1b6bdf0() {
   return (neuron0x1b4bad0()*-2.92098);
}

double NNfunction_sb_sLsR::synapse0x1b6be30() {
   return (neuron0x1b4bdb0()*0.959846);
}

double NNfunction_sb_sLsR::synapse0x1b6c4b0() {
   return (neuron0x1b4c780()*-1.30498);
}

double NNfunction_sb_sLsR::synapse0x1b6c4f0() {
   return (neuron0x1b4d150()*1.92658);
}

double NNfunction_sb_sLsR::synapse0x1b6c530() {
   return (neuron0x1b4db20()*-0.840288);
}

double NNfunction_sb_sLsR::synapse0x1b6c570() {
   return (neuron0x1b4e4f0()*-0.713877);
}

double NNfunction_sb_sLsR::synapse0x1b6c5b0() {
   return (neuron0x1b47040()*-0.469067);
}

double NNfunction_sb_sLsR::synapse0x1b6c5f0() {
   return (neuron0x1b47a10()*1.98287);
}

double NNfunction_sb_sLsR::synapse0x1b6c630() {
   return (neuron0x1b51280()*1.19311);
}

double NNfunction_sb_sLsR::synapse0x1b6c670() {
   return (neuron0x1b51c50()*-0.49052);
}

double NNfunction_sb_sLsR::synapse0x1b6c6b0() {
   return (neuron0x1b52620()*0.27501);
}

double NNfunction_sb_sLsR::synapse0x1b6c6f0() {
   return (neuron0x1b52ff0()*0.264226);
}

double NNfunction_sb_sLsR::synapse0x1b6c730() {
   return (neuron0x1b539c0()*-0.480904);
}

double NNfunction_sb_sLsR::synapse0x1b6c770() {
   return (neuron0x1b54390()*-1.18612);
}

double NNfunction_sb_sLsR::synapse0x1b6c7b0() {
   return (neuron0x1b54d60()*-6.74937);
}

double NNfunction_sb_sLsR::synapse0x1b6c7f0() {
   return (neuron0x1b55730()*2.33788);
}

double NNfunction_sb_sLsR::synapse0x1b6c3a0() {
   return (neuron0x1b4b7c0()*-0.488614);
}

double NNfunction_sb_sLsR::synapse0x1b6c3e0() {
   return (neuron0x1b58310()*-0.888215);
}

double NNfunction_sb_sLsR::synapse0x1b6c420() {
   return (neuron0x1b58ce0()*-0.677425);
}

double NNfunction_sb_sLsR::synapse0x1b6c460() {
   return (neuron0x1b596b0()*0.418914);
}

double NNfunction_sb_sLsR::synapse0x1b6ca40() {
   return (neuron0x1b5a080()*-2.20948);
}

double NNfunction_sb_sLsR::synapse0x1b6ca80() {
   return (neuron0x1b5aa50()*1.38816);
}

double NNfunction_sb_sLsR::synapse0x1b6cac0() {
   return (neuron0x1b5b420()*0.405267);
}

double NNfunction_sb_sLsR::synapse0x1b6cb00() {
   return (neuron0x1b5bdf0()*0.800827);
}

double NNfunction_sb_sLsR::synapse0x1b6cb40() {
   return (neuron0x1b5c7c0()*3.62124);
}

double NNfunction_sb_sLsR::synapse0x1b6cb80() {
   return (neuron0x1b5d3a0()*-1.22511);
}

double NNfunction_sb_sLsR::synapse0x1b6cbc0() {
   return (neuron0x1b5dd70()*-3.17134);
}

double NNfunction_sb_sLsR::synapse0x1b6cc00() {
   return (neuron0x1b4ebf0()*-4.21532);
}

double NNfunction_sb_sLsR::synapse0x1b6cc40() {
   return (neuron0x1b4f5c0()*0.994319);
}

double NNfunction_sb_sLsR::synapse0x1b6cc80() {
   return (neuron0x1b4ff90()*-0.93538);
}

double NNfunction_sb_sLsR::synapse0x1b6ccc0() {
   return (neuron0x1b625d0()*-0.425057);
}

double NNfunction_sb_sLsR::synapse0x1b6cd00() {
   return (neuron0x1b62e80()*-0.768911);
}

double NNfunction_sb_sLsR::synapse0x1b6cd40() {
   return (neuron0x1b63850()*0.199645);
}

double NNfunction_sb_sLsR::synapse0x1b6cd80() {
   return (neuron0x1b64220()*1.39235);
}

double NNfunction_sb_sLsR::synapse0x1b6d100() {
   return (neuron0x1b401a0()*-0.811793);
}

double NNfunction_sb_sLsR::synapse0x1b6d140() {
   return (neuron0x1b40af0()*0.346873);
}

double NNfunction_sb_sLsR::synapse0x1b6d180() {
   return (neuron0x1b415d0()*0.0830047);
}

double NNfunction_sb_sLsR::synapse0x1b6d1c0() {
   return (neuron0x1b41070()*-0.660087);
}

double NNfunction_sb_sLsR::synapse0x1b6d200() {
   return (neuron0x1b423b0()*-0.0189322);
}

double NNfunction_sb_sLsR::synapse0x1b6d240() {
   return (neuron0x1b42d80()*-0.0789767);
}

double NNfunction_sb_sLsR::synapse0x1b6d280() {
   return (neuron0x1b43b50()*-0.980503);
}

double NNfunction_sb_sLsR::synapse0x1b6d2c0() {
   return (neuron0x1b44520()*-0.0618212);
}

double NNfunction_sb_sLsR::synapse0x1b6d300() {
   return (neuron0x1b44ef0()*-0.692067);
}

double NNfunction_sb_sLsR::synapse0x1b6d340() {
   return (neuron0x1b459d0()*0.175926);
}

double NNfunction_sb_sLsR::synapse0x1b6d380() {
   return (neuron0x1b463a0()*0.13787);
}

double NNfunction_sb_sLsR::synapse0x1b6d3c0() {
   return (neuron0x1b43480()*-0.0222395);
}

double NNfunction_sb_sLsR::synapse0x1b6d400() {
   return (neuron0x1b47f50()*-0.383004);
}

double NNfunction_sb_sLsR::synapse0x1b6d440() {
   return (neuron0x1b48920()*-0.229199);
}

double NNfunction_sb_sLsR::synapse0x1b6d480() {
   return (neuron0x1b492f0()*-2.03593);
}

double NNfunction_sb_sLsR::synapse0x1b6d4c0() {
   return (neuron0x1b49cc0()*-0.747106);
}

double NNfunction_sb_sLsR::synapse0x1b6cf50() {
   return (neuron0x1b4bad0()*2.16239);
}

double NNfunction_sb_sLsR::synapse0x1b6cf90() {
   return (neuron0x1b4bdb0()*-0.414094);
}

double NNfunction_sb_sLsR::synapse0x1b6d610() {
   return (neuron0x1b4c780()*-1.43776);
}

double NNfunction_sb_sLsR::synapse0x1b6d650() {
   return (neuron0x1b4d150()*0.142532);
}

double NNfunction_sb_sLsR::synapse0x1b6d690() {
   return (neuron0x1b4db20()*-0.558522);
}

double NNfunction_sb_sLsR::synapse0x1b6d6d0() {
   return (neuron0x1b4e4f0()*0.709733);
}

double NNfunction_sb_sLsR::synapse0x1b6d710() {
   return (neuron0x1b47040()*0.45442);
}

double NNfunction_sb_sLsR::synapse0x1b6d750() {
   return (neuron0x1b47a10()*-1.79471);
}

double NNfunction_sb_sLsR::synapse0x1b6d790() {
   return (neuron0x1b51280()*-0.796874);
}

double NNfunction_sb_sLsR::synapse0x1b6d7d0() {
   return (neuron0x1b51c50()*0.354181);
}

double NNfunction_sb_sLsR::synapse0x1b6d810() {
   return (neuron0x1b52620()*2.26151);
}

double NNfunction_sb_sLsR::synapse0x1b6d850() {
   return (neuron0x1b52ff0()*-2.7074);
}

double NNfunction_sb_sLsR::synapse0x1b6d890() {
   return (neuron0x1b539c0()*1.13136);
}

double NNfunction_sb_sLsR::synapse0x1b6d8d0() {
   return (neuron0x1b54390()*0.739846);
}

double NNfunction_sb_sLsR::synapse0x1b6d910() {
   return (neuron0x1b54d60()*3.20187);
}

double NNfunction_sb_sLsR::synapse0x1b6d950() {
   return (neuron0x1b55730()*-1.0121);
}

double NNfunction_sb_sLsR::synapse0x1b6d500() {
   return (neuron0x1b4b7c0()*0.151347);
}

double NNfunction_sb_sLsR::synapse0x1b6d540() {
   return (neuron0x1b58310()*2.92098);
}

double NNfunction_sb_sLsR::synapse0x1b6d580() {
   return (neuron0x1b58ce0()*0.659541);
}

double NNfunction_sb_sLsR::synapse0x1b6d5c0() {
   return (neuron0x1b596b0()*0.137095);
}

double NNfunction_sb_sLsR::synapse0x1b6dba0() {
   return (neuron0x1b5a080()*1.20269);
}

double NNfunction_sb_sLsR::synapse0x1b6dbe0() {
   return (neuron0x1b5aa50()*-1.03491);
}

double NNfunction_sb_sLsR::synapse0x1b6dc20() {
   return (neuron0x1b5b420()*-0.734806);
}

double NNfunction_sb_sLsR::synapse0x1b6dc60() {
   return (neuron0x1b5bdf0()*-2.68688);
}

double NNfunction_sb_sLsR::synapse0x1b6dca0() {
   return (neuron0x1b5c7c0()*0.521814);
}

double NNfunction_sb_sLsR::synapse0x1b6dce0() {
   return (neuron0x1b5d3a0()*-1.19444);
}

double NNfunction_sb_sLsR::synapse0x1b6dd20() {
   return (neuron0x1b5dd70()*2.61969);
}

double NNfunction_sb_sLsR::synapse0x1b6dd60() {
   return (neuron0x1b4ebf0()*-1.11152);
}

double NNfunction_sb_sLsR::synapse0x1b6dda0() {
   return (neuron0x1b4f5c0()*-0.157592);
}

double NNfunction_sb_sLsR::synapse0x1b6dde0() {
   return (neuron0x1b4ff90()*0.925188);
}

double NNfunction_sb_sLsR::synapse0x1b6de20() {
   return (neuron0x1b625d0()*0.850535);
}

double NNfunction_sb_sLsR::synapse0x1b6de60() {
   return (neuron0x1b62e80()*-1.27196);
}

double NNfunction_sb_sLsR::synapse0x1b6dea0() {
   return (neuron0x1b63850()*1.37294);
}

double NNfunction_sb_sLsR::synapse0x1b6dee0() {
   return (neuron0x1b64220()*-0.505835);
}

double NNfunction_sb_sLsR::synapse0x1b6e260() {
   return (neuron0x1b401a0()*0.545083);
}

double NNfunction_sb_sLsR::synapse0x1b6e2a0() {
   return (neuron0x1b40af0()*0.211532);
}

double NNfunction_sb_sLsR::synapse0x1b6e2e0() {
   return (neuron0x1b415d0()*-0.284452);
}

double NNfunction_sb_sLsR::synapse0x1b6e320() {
   return (neuron0x1b41070()*0.19205);
}

double NNfunction_sb_sLsR::synapse0x1b6e360() {
   return (neuron0x1b423b0()*0.136349);
}

double NNfunction_sb_sLsR::synapse0x1b6e3a0() {
   return (neuron0x1b42d80()*0.0541645);
}

double NNfunction_sb_sLsR::synapse0x1b6e3e0() {
   return (neuron0x1b43b50()*0.181612);
}

double NNfunction_sb_sLsR::synapse0x1b6e420() {
   return (neuron0x1b44520()*0.542207);
}

double NNfunction_sb_sLsR::synapse0x1b6e460() {
   return (neuron0x1b44ef0()*0.420614);
}

double NNfunction_sb_sLsR::synapse0x1b6e4a0() {
   return (neuron0x1b459d0()*0.46296);
}

double NNfunction_sb_sLsR::synapse0x1b6e4e0() {
   return (neuron0x1b463a0()*-0.0513319);
}

double NNfunction_sb_sLsR::synapse0x1b6e520() {
   return (neuron0x1b43480()*0.408954);
}

double NNfunction_sb_sLsR::synapse0x1b6e560() {
   return (neuron0x1b47f50()*0.502087);
}

double NNfunction_sb_sLsR::synapse0x1b6e5a0() {
   return (neuron0x1b48920()*0.51595);
}

double NNfunction_sb_sLsR::synapse0x1b6e5e0() {
   return (neuron0x1b492f0()*0.663475);
}

double NNfunction_sb_sLsR::synapse0x1b6e620() {
   return (neuron0x1b49cc0()*0.0689673);
}

double NNfunction_sb_sLsR::synapse0x1b6e0b0() {
   return (neuron0x1b4bad0()*0.739851);
}

double NNfunction_sb_sLsR::synapse0x1b6e0f0() {
   return (neuron0x1b4bdb0()*0.0756151);
}

double NNfunction_sb_sLsR::synapse0x1b6e770() {
   return (neuron0x1b4c780()*0.0695075);
}

double NNfunction_sb_sLsR::synapse0x1b6e7b0() {
   return (neuron0x1b4d150()*-0.384243);
}

double NNfunction_sb_sLsR::synapse0x1b6e7f0() {
   return (neuron0x1b4db20()*0.26615);
}

double NNfunction_sb_sLsR::synapse0x1b6e830() {
   return (neuron0x1b4e4f0()*0.29207);
}

double NNfunction_sb_sLsR::synapse0x1b6e870() {
   return (neuron0x1b47040()*-0.1393);
}

double NNfunction_sb_sLsR::synapse0x1b6e8b0() {
   return (neuron0x1b47a10()*0.172537);
}

double NNfunction_sb_sLsR::synapse0x1b6e8f0() {
   return (neuron0x1b51280()*0.18672);
}

double NNfunction_sb_sLsR::synapse0x1b6e930() {
   return (neuron0x1b51c50()*0.0669942);
}

double NNfunction_sb_sLsR::synapse0x1b6e970() {
   return (neuron0x1b52620()*0.135161);
}

double NNfunction_sb_sLsR::synapse0x1b6e9b0() {
   return (neuron0x1b52ff0()*-0.133071);
}

double NNfunction_sb_sLsR::synapse0x1b6e9f0() {
   return (neuron0x1b539c0()*-0.546263);
}

double NNfunction_sb_sLsR::synapse0x1b6ea30() {
   return (neuron0x1b54390()*0.238651);
}

double NNfunction_sb_sLsR::synapse0x1b6ea70() {
   return (neuron0x1b54d60()*-0.22403);
}

double NNfunction_sb_sLsR::synapse0x1b6eab0() {
   return (neuron0x1b55730()*0.287608);
}

double NNfunction_sb_sLsR::synapse0x1b6e660() {
   return (neuron0x1b4b7c0()*0.244534);
}

double NNfunction_sb_sLsR::synapse0x1b6e6a0() {
   return (neuron0x1b58310()*0.684185);
}

double NNfunction_sb_sLsR::synapse0x1b6e6e0() {
   return (neuron0x1b58ce0()*0.0580747);
}

double NNfunction_sb_sLsR::synapse0x1b6e720() {
   return (neuron0x1b596b0()*-0.153946);
}

double NNfunction_sb_sLsR::synapse0x1b6ed00() {
   return (neuron0x1b5a080()*0.0476029);
}

double NNfunction_sb_sLsR::synapse0x1b6ed40() {
   return (neuron0x1b5aa50()*-0.0197486);
}

double NNfunction_sb_sLsR::synapse0x1b6ed80() {
   return (neuron0x1b5b420()*0.265814);
}

double NNfunction_sb_sLsR::synapse0x1b6edc0() {
   return (neuron0x1b5bdf0()*0.142276);
}

double NNfunction_sb_sLsR::synapse0x1b6ee00() {
   return (neuron0x1b5c7c0()*0.218893);
}

double NNfunction_sb_sLsR::synapse0x1b6ee40() {
   return (neuron0x1b5d3a0()*0.291204);
}

double NNfunction_sb_sLsR::synapse0x1b6ee80() {
   return (neuron0x1b5dd70()*0.599077);
}

double NNfunction_sb_sLsR::synapse0x1b6eec0() {
   return (neuron0x1b4ebf0()*0.429671);
}

double NNfunction_sb_sLsR::synapse0x1b6ef00() {
   return (neuron0x1b4f5c0()*-0.479895);
}

double NNfunction_sb_sLsR::synapse0x1b6ef40() {
   return (neuron0x1b4ff90()*0.0184969);
}

double NNfunction_sb_sLsR::synapse0x1b6ef80() {
   return (neuron0x1b625d0()*-0.0175137);
}

double NNfunction_sb_sLsR::synapse0x1b6efc0() {
   return (neuron0x1b62e80()*0.397453);
}

double NNfunction_sb_sLsR::synapse0x1b6f000() {
   return (neuron0x1b63850()*-0.29597);
}

double NNfunction_sb_sLsR::synapse0x1b6f040() {
   return (neuron0x1b64220()*-0.361282);
}

double NNfunction_sb_sLsR::synapse0x1b6f2a0() {
   return (neuron0x1b6b420()*-6.55701);
}

double NNfunction_sb_sLsR::synapse0x1b6f2e0() {
   return (neuron0x1b6b7c0()*-2.8245);
}

double NNfunction_sb_sLsR::synapse0x1b6f320() {
   return (neuron0x1b6bc60()*8.10138);
}

double NNfunction_sb_sLsR::synapse0x1b6f360() {
   return (neuron0x1b6cdc0()*-5.45419);
}

double NNfunction_sb_sLsR::synapse0x1b6f3a0() {
   return (neuron0x1b6df20()*3.51327);
}

