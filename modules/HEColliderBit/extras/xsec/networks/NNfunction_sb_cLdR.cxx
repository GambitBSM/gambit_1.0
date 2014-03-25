#include "NNfunction_sb_cLdR.h"
#include <cmath>

double NNfunction_sb_cLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6259)/15.3495;
   input1 = (in1 - -0.326665)/1151.34;
   input2 = (in2 - 666.341)/624.439;
   input3 = (in3 - -53.4912)/824.847;
   input4 = (in4 - 1045.77)/945.194;
   input5 = (in5 - 881.851)/930.665;
   input6 = (in6 - 892.109)/933.712;
   input7 = (in7 - 922.037)/926.347;
   input8 = (in8 - 926.502)/981.373;
   input9 = (in9 - 898.602)/958.007;
   input10 = (in10 - 992.878)/961.635;
   input11 = (in11 - 733.286)/884.797;
   input12 = (in12 - 367.477)/374.811;
   input13 = (in13 - 499.279)/519.232;
   input14 = (in14 - 705.12)/804.029;
   input15 = (in15 - 703.42)/801.975;
   input16 = (in16 - 527.843)/554.464;
   input17 = (in17 - 373.499)/381.907;
   input18 = (in18 - 761.099)/915.82;
   input19 = (in19 - 808.567)/887.669;
   input20 = (in20 - -5.2192)/484.971;
   input21 = (in21 - -1.72247)/1151.6;
   input22 = (in22 - -4.51128)/1207.47;
   input23 = (in23 - -201.131)/607.099;
   switch(index) {
     case 0:
         return neuron0x16534a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.6259)/15.3495;
   input1 = (input[1] - -0.326665)/1151.34;
   input2 = (input[2] - 666.341)/624.439;
   input3 = (input[3] - -53.4912)/824.847;
   input4 = (input[4] - 1045.77)/945.194;
   input5 = (input[5] - 881.851)/930.665;
   input6 = (input[6] - 892.109)/933.712;
   input7 = (input[7] - 922.037)/926.347;
   input8 = (input[8] - 926.502)/981.373;
   input9 = (input[9] - 898.602)/958.007;
   input10 = (input[10] - 992.878)/961.635;
   input11 = (input[11] - 733.286)/884.797;
   input12 = (input[12] - 367.477)/374.811;
   input13 = (input[13] - 499.279)/519.232;
   input14 = (input[14] - 705.12)/804.029;
   input15 = (input[15] - 703.42)/801.975;
   input16 = (input[16] - 527.843)/554.464;
   input17 = (input[17] - 373.499)/381.907;
   input18 = (input[18] - 761.099)/915.82;
   input19 = (input[19] - 808.567)/887.669;
   input20 = (input[20] - -5.2192)/484.971;
   input21 = (input[21] - -1.72247)/1151.6;
   input22 = (input[22] - -4.51128)/1207.47;
   input23 = (input[23] - -201.131)/607.099;
   switch(index) {
     case 0:
         return neuron0x16534a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdR::neuron0x161f560() {
   return input0;
}

double NNfunction_sb_cLdR::neuron0x161f8a0() {
   return input1;
}

double NNfunction_sb_cLdR::neuron0x161fbe0() {
   return input2;
}

double NNfunction_sb_cLdR::neuron0x161ff20() {
   return input3;
}

double NNfunction_sb_cLdR::neuron0x1620260() {
   return input4;
}

double NNfunction_sb_cLdR::neuron0x16205a0() {
   return input5;
}

double NNfunction_sb_cLdR::neuron0x16208e0() {
   return input6;
}

double NNfunction_sb_cLdR::neuron0x1620c20() {
   return input7;
}

double NNfunction_sb_cLdR::neuron0x1620f60() {
   return input8;
}

double NNfunction_sb_cLdR::neuron0x16212a0() {
   return input9;
}

double NNfunction_sb_cLdR::neuron0x16215e0() {
   return input10;
}

double NNfunction_sb_cLdR::neuron0x1621920() {
   return input11;
}

double NNfunction_sb_cLdR::neuron0x1621c60() {
   return input12;
}

double NNfunction_sb_cLdR::neuron0x1621fa0() {
   return input13;
}

double NNfunction_sb_cLdR::neuron0x16222e0() {
   return input14;
}

double NNfunction_sb_cLdR::neuron0x1622620() {
   return input15;
}

double NNfunction_sb_cLdR::neuron0x1622960() {
   return input16;
}

double NNfunction_sb_cLdR::neuron0x1622ec0() {
   return input17;
}

double NNfunction_sb_cLdR::neuron0x16230e0() {
   return input18;
}

double NNfunction_sb_cLdR::neuron0x1623420() {
   return input19;
}

double NNfunction_sb_cLdR::neuron0x1623760() {
   return input20;
}

double NNfunction_sb_cLdR::neuron0x1623aa0() {
   return input21;
}

double NNfunction_sb_cLdR::neuron0x1623de0() {
   return input22;
}

double NNfunction_sb_cLdR::neuron0x1624120() {
   return input23;
}

double NNfunction_sb_cLdR::input0x16245c0() {
   double input = -0.873118;
   input += synapse0x13df3d0();
   input += synapse0x161f420();
   input += synapse0x161f460();
   input += synapse0x1624870();
   input += synapse0x16248b0();
   input += synapse0x16248f0();
   input += synapse0x1624930();
   input += synapse0x1624970();
   input += synapse0x16249b0();
   input += synapse0x16249f0();
   input += synapse0x1624a30();
   input += synapse0x1624a70();
   input += synapse0x1624ab0();
   input += synapse0x1624af0();
   input += synapse0x1624b30();
   input += synapse0x1624b70();
   input += synapse0x161f390();
   input += synapse0x161f3d0();
   input += synapse0x13d0c70();
   input += synapse0x13d0cb0();
   input += synapse0x1624dd0();
   input += synapse0x1624e10();
   input += synapse0x1624e50();
   input += synapse0x1624e90();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16245c0() {
   double input = input0x16245c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1624ed0() {
   double input = 0.658689;
   input += synapse0x1625210();
   input += synapse0x1625250();
   input += synapse0x1625290();
   input += synapse0x16252d0();
   input += synapse0x1625310();
   input += synapse0x1625350();
   input += synapse0x1625390();
   input += synapse0x16253d0();
   input += synapse0x1625410();
   input += synapse0x1624cc0();
   input += synapse0x1624d00();
   input += synapse0x1624d40();
   input += synapse0x1624d80();
   input += synapse0x1625660();
   input += synapse0x16256a0();
   input += synapse0x16256e0();
   input += synapse0x1625060();
   input += synapse0x16250a0();
   input += synapse0x1625830();
   input += synapse0x1625870();
   input += synapse0x16258b0();
   input += synapse0x16258f0();
   input += synapse0x1625930();
   input += synapse0x1625970();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1624ed0() {
   double input = input0x1624ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16259b0() {
   double input = 0.670152;
   input += synapse0x1625cf0();
   input += synapse0x1625d30();
   input += synapse0x1625d70();
   input += synapse0x1625db0();
   input += synapse0x1625df0();
   input += synapse0x1625e30();
   input += synapse0x1625e70();
   input += synapse0x1625eb0();
   input += synapse0x1625ef0();
   input += synapse0x1625f30();
   input += synapse0x1625f70();
   input += synapse0x1625fb0();
   input += synapse0x1625ff0();
   input += synapse0x1626030();
   input += synapse0x1626070();
   input += synapse0x16260b0();
   input += synapse0x1625b40();
   input += synapse0x1625b80();
   input += synapse0x13deac0();
   input += synapse0x13deb00();
   input += synapse0x160e5f0();
   input += synapse0x160e630();
   input += synapse0x160e670();
   input += synapse0x161f4a0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16259b0() {
   double input = input0x16259b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x13df240() {
   double input = 0.965164;
   input += synapse0x1625600();
   input += synapse0x161f4e0();
   input += synapse0x161f520();
   input += synapse0x1626200();
   input += synapse0x1626240();
   input += synapse0x1626280();
   input += synapse0x16262c0();
   input += synapse0x1626300();
   input += synapse0x1626340();
   input += synapse0x1626380();
   input += synapse0x16263c0();
   input += synapse0x1626400();
   input += synapse0x1626440();
   input += synapse0x1626480();
   input += synapse0x16264c0();
   input += synapse0x1626500();
   input += synapse0x1625450();
   input += synapse0x1625490();
   input += synapse0x1626650();
   input += synapse0x1626690();
   input += synapse0x16266d0();
   input += synapse0x1626710();
   input += synapse0x1626750();
   input += synapse0x1626790();
   return input;
}

double NNfunction_sb_cLdR::neuron0x13df240() {
   double input = input0x13df240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16267d0() {
   double input = -0.455016;
   input += synapse0x1626b10();
   input += synapse0x1626b50();
   input += synapse0x1626b90();
   input += synapse0x1626bd0();
   input += synapse0x1626c10();
   input += synapse0x1626c50();
   input += synapse0x1626c90();
   input += synapse0x1626cd0();
   input += synapse0x1626d10();
   input += synapse0x1626d50();
   input += synapse0x1626d90();
   input += synapse0x1626dd0();
   input += synapse0x1626e10();
   input += synapse0x1626e50();
   input += synapse0x1626e90();
   input += synapse0x1626ed0();
   input += synapse0x1626960();
   input += synapse0x16269a0();
   input += synapse0x1627020();
   input += synapse0x1627060();
   input += synapse0x16270a0();
   input += synapse0x16270e0();
   input += synapse0x1627120();
   input += synapse0x1627160();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16267d0() {
   double input = input0x16267d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16271a0() {
   double input = -0.385093;
   input += synapse0x16274e0();
   input += synapse0x1627520();
   input += synapse0x1627560();
   input += synapse0x16275a0();
   input += synapse0x16275e0();
   input += synapse0x1627620();
   input += synapse0x1627660();
   input += synapse0x16276a0();
   input += synapse0x16276e0();
   input += synapse0x13dee30();
   input += synapse0x13dee70();
   input += synapse0x13deeb0();
   input += synapse0x13deef0();
   input += synapse0x13def30();
   input += synapse0x13def70();
   input += synapse0x13defb0();
   input += synapse0x1627330();
   input += synapse0x1627370();
   input += synapse0x13df100();
   input += synapse0x13df140();
   input += synapse0x13df180();
   input += synapse0x13df1c0();
   input += synapse0x13df200();
   input += synapse0x1627f30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16271a0() {
   double input = input0x16271a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1627f70() {
   double input = 2.89067;
   input += synapse0x16282b0();
   input += synapse0x16282f0();
   input += synapse0x1628330();
   input += synapse0x1628370();
   input += synapse0x16283b0();
   input += synapse0x16283f0();
   input += synapse0x1628430();
   input += synapse0x1628470();
   input += synapse0x16284b0();
   input += synapse0x16284f0();
   input += synapse0x1628530();
   input += synapse0x1628570();
   input += synapse0x16285b0();
   input += synapse0x16285f0();
   input += synapse0x1628630();
   input += synapse0x1628670();
   input += synapse0x1628100();
   input += synapse0x1628140();
   input += synapse0x16287c0();
   input += synapse0x1628800();
   input += synapse0x1628840();
   input += synapse0x1628880();
   input += synapse0x16288c0();
   input += synapse0x1628900();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1627f70() {
   double input = input0x1627f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1628940() {
   double input = 1.41478;
   input += synapse0x1628c80();
   input += synapse0x1628cc0();
   input += synapse0x1628d00();
   input += synapse0x1628d40();
   input += synapse0x1628d80();
   input += synapse0x1628dc0();
   input += synapse0x1628e00();
   input += synapse0x1628e40();
   input += synapse0x1628e80();
   input += synapse0x1628ec0();
   input += synapse0x1628f00();
   input += synapse0x1628f40();
   input += synapse0x1628f80();
   input += synapse0x1628fc0();
   input += synapse0x1629000();
   input += synapse0x1629040();
   input += synapse0x1628ad0();
   input += synapse0x1628b10();
   input += synapse0x1629190();
   input += synapse0x16291d0();
   input += synapse0x1629210();
   input += synapse0x1629250();
   input += synapse0x1629290();
   input += synapse0x16292d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1628940() {
   double input = input0x1628940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1629310() {
   double input = 0.200579;
   input += synapse0x1622db0();
   input += synapse0x1622df0();
   input += synapse0x1622e30();
   input += synapse0x1622e70();
   input += synapse0x1629860();
   input += synapse0x16298a0();
   input += synapse0x16298e0();
   input += synapse0x1629920();
   input += synapse0x1629960();
   input += synapse0x16299a0();
   input += synapse0x16299e0();
   input += synapse0x1629a20();
   input += synapse0x1629a60();
   input += synapse0x1629aa0();
   input += synapse0x1629ae0();
   input += synapse0x1629b20();
   input += synapse0x16294a0();
   input += synapse0x16294e0();
   input += synapse0x1629c70();
   input += synapse0x1629cb0();
   input += synapse0x1629cf0();
   input += synapse0x1629d30();
   input += synapse0x1629d70();
   input += synapse0x1629db0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1629310() {
   double input = input0x1629310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1629df0() {
   double input = 1.21245;
   input += synapse0x162a130();
   input += synapse0x162a170();
   input += synapse0x162a1b0();
   input += synapse0x162a1f0();
   input += synapse0x162a230();
   input += synapse0x162a270();
   input += synapse0x162a2b0();
   input += synapse0x162a2f0();
   input += synapse0x162a330();
   input += synapse0x162a370();
   input += synapse0x162a3b0();
   input += synapse0x162a3f0();
   input += synapse0x162a430();
   input += synapse0x162a470();
   input += synapse0x162a4b0();
   input += synapse0x162a4f0();
   input += synapse0x1629f80();
   input += synapse0x1629fc0();
   input += synapse0x162a640();
   input += synapse0x162a680();
   input += synapse0x162a6c0();
   input += synapse0x162a700();
   input += synapse0x162a740();
   input += synapse0x162a780();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1629df0() {
   double input = input0x1629df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162a7c0() {
   double input = 0.421536;
   input += synapse0x162ab00();
   input += synapse0x162ab40();
   input += synapse0x162ab80();
   input += synapse0x162abc0();
   input += synapse0x162ac00();
   input += synapse0x162ac40();
   input += synapse0x162ac80();
   input += synapse0x162acc0();
   input += synapse0x162ad00();
   input += synapse0x162ad40();
   input += synapse0x162ad80();
   input += synapse0x162adc0();
   input += synapse0x162ae00();
   input += synapse0x162ae40();
   input += synapse0x162ae80();
   input += synapse0x162aec0();
   input += synapse0x162a950();
   input += synapse0x162a990();
   input += synapse0x1627720();
   input += synapse0x1627760();
   input += synapse0x16277a0();
   input += synapse0x16277e0();
   input += synapse0x1627820();
   input += synapse0x1627860();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162a7c0() {
   double input = input0x162a7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16278a0() {
   double input = 0.226041;
   input += synapse0x1627be0();
   input += synapse0x1627c20();
   input += synapse0x1627c60();
   input += synapse0x1627ca0();
   input += synapse0x1627ce0();
   input += synapse0x1627d20();
   input += synapse0x1627d60();
   input += synapse0x1627da0();
   input += synapse0x1627de0();
   input += synapse0x1627e20();
   input += synapse0x1627e60();
   input += synapse0x1627ea0();
   input += synapse0x1627ee0();
   input += synapse0x162c020();
   input += synapse0x162c060();
   input += synapse0x162c0a0();
   input += synapse0x1627a30();
   input += synapse0x1627a70();
   input += synapse0x162c1f0();
   input += synapse0x162c230();
   input += synapse0x162c270();
   input += synapse0x162c2b0();
   input += synapse0x162c2f0();
   input += synapse0x162c330();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16278a0() {
   double input = input0x16278a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162c370() {
   double input = -0.490455;
   input += synapse0x162c6b0();
   input += synapse0x162c6f0();
   input += synapse0x162c730();
   input += synapse0x162c770();
   input += synapse0x162c7b0();
   input += synapse0x162c7f0();
   input += synapse0x162c830();
   input += synapse0x162c870();
   input += synapse0x162c8b0();
   input += synapse0x162c8f0();
   input += synapse0x162c930();
   input += synapse0x162c970();
   input += synapse0x162c9b0();
   input += synapse0x162c9f0();
   input += synapse0x162ca30();
   input += synapse0x162ca70();
   input += synapse0x162c500();
   input += synapse0x162c540();
   input += synapse0x162cbc0();
   input += synapse0x162cc00();
   input += synapse0x162cc40();
   input += synapse0x162cc80();
   input += synapse0x162ccc0();
   input += synapse0x162cd00();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162c370() {
   double input = input0x162c370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162cd40() {
   double input = -2.1155;
   input += synapse0x162d080();
   input += synapse0x162d0c0();
   input += synapse0x162d100();
   input += synapse0x162d140();
   input += synapse0x162d180();
   input += synapse0x162d1c0();
   input += synapse0x162d200();
   input += synapse0x162d240();
   input += synapse0x162d280();
   input += synapse0x162d2c0();
   input += synapse0x162d300();
   input += synapse0x162d340();
   input += synapse0x162d380();
   input += synapse0x162d3c0();
   input += synapse0x162d400();
   input += synapse0x162d440();
   input += synapse0x162ced0();
   input += synapse0x162cf10();
   input += synapse0x162d590();
   input += synapse0x162d5d0();
   input += synapse0x162d610();
   input += synapse0x162d650();
   input += synapse0x162d690();
   input += synapse0x162d6d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162cd40() {
   double input = input0x162cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162d710() {
   double input = -0.165276;
   input += synapse0x162da50();
   input += synapse0x162da90();
   input += synapse0x162dad0();
   input += synapse0x162db10();
   input += synapse0x162db50();
   input += synapse0x162db90();
   input += synapse0x162dbd0();
   input += synapse0x162dc10();
   input += synapse0x162dc50();
   input += synapse0x162dc90();
   input += synapse0x162dcd0();
   input += synapse0x162dd10();
   input += synapse0x162dd50();
   input += synapse0x162dd90();
   input += synapse0x162ddd0();
   input += synapse0x162de10();
   input += synapse0x162d8a0();
   input += synapse0x162d8e0();
   input += synapse0x162df60();
   input += synapse0x162dfa0();
   input += synapse0x162dfe0();
   input += synapse0x162e020();
   input += synapse0x162e060();
   input += synapse0x162e0a0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162d710() {
   double input = input0x162d710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162e0e0() {
   double input = 3.34008;
   input += synapse0x162e420();
   input += synapse0x161f780();
   input += synapse0x161f7c0();
   input += synapse0x161fac0();
   input += synapse0x161fb00();
   input += synapse0x161fe00();
   input += synapse0x161fe40();
   input += synapse0x1620140();
   input += synapse0x1620180();
   input += synapse0x1620480();
   input += synapse0x16204c0();
   input += synapse0x16207c0();
   input += synapse0x1620800();
   input += synapse0x1620b00();
   input += synapse0x1620b40();
   input += synapse0x1620e40();
   input += synapse0x1620e80();
   input += synapse0x1621180();
   input += synapse0x16211c0();
   input += synapse0x16214c0();
   input += synapse0x1621500();
   input += synapse0x1621800();
   input += synapse0x1621840();
   input += synapse0x1621b40();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162e0e0() {
   double input = input0x162e0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162fef0() {
   double input = -0.112238;
   input += synapse0x1621b80();
   input += synapse0x1622840();
   input += synapse0x1622880();
   input += synapse0x162e270();
   input += synapse0x162e2b0();
   input += synapse0x1622b80();
   input += synapse0x1622bc0();
   input += synapse0x13d0b50();
   input += synapse0x13d0b90();
   input += synapse0x1623300();
   input += synapse0x1623340();
   input += synapse0x1623640();
   input += synapse0x1623680();
   input += synapse0x1623980();
   input += synapse0x16239c0();
   input += synapse0x1623cc0();
   input += synapse0x1623d00();
   input += synapse0x1624000();
   input += synapse0x1624040();
   input += synapse0x1624340();
   input += synapse0x1624380();
   input += synapse0x1621e80();
   input += synapse0x1621ec0();
   input += synapse0x1630190();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162fef0() {
   double input = input0x162fef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16301d0() {
   double input = 0.221616;
   input += synapse0x1630510();
   input += synapse0x1630550();
   input += synapse0x1630590();
   input += synapse0x16305d0();
   input += synapse0x1630610();
   input += synapse0x1630650();
   input += synapse0x1630690();
   input += synapse0x16306d0();
   input += synapse0x1630710();
   input += synapse0x1630750();
   input += synapse0x1630790();
   input += synapse0x16307d0();
   input += synapse0x1630810();
   input += synapse0x1630850();
   input += synapse0x1630890();
   input += synapse0x16308d0();
   input += synapse0x1630360();
   input += synapse0x16303a0();
   input += synapse0x1630a20();
   input += synapse0x1630a60();
   input += synapse0x1630aa0();
   input += synapse0x1630ae0();
   input += synapse0x1630b20();
   input += synapse0x1630b60();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16301d0() {
   double input = input0x16301d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1630ba0() {
   double input = -0.839896;
   input += synapse0x1630ee0();
   input += synapse0x1630f20();
   input += synapse0x1630f60();
   input += synapse0x1630fa0();
   input += synapse0x1630fe0();
   input += synapse0x1631020();
   input += synapse0x1631060();
   input += synapse0x16310a0();
   input += synapse0x16310e0();
   input += synapse0x1631120();
   input += synapse0x1631160();
   input += synapse0x16311a0();
   input += synapse0x16311e0();
   input += synapse0x1631220();
   input += synapse0x1631260();
   input += synapse0x16312a0();
   input += synapse0x1630d30();
   input += synapse0x1630d70();
   input += synapse0x16313f0();
   input += synapse0x1631430();
   input += synapse0x1631470();
   input += synapse0x16314b0();
   input += synapse0x16314f0();
   input += synapse0x1631530();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1630ba0() {
   double input = input0x1630ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1631570() {
   double input = -1.40004;
   input += synapse0x16318b0();
   input += synapse0x16318f0();
   input += synapse0x1631930();
   input += synapse0x1631970();
   input += synapse0x16319b0();
   input += synapse0x16319f0();
   input += synapse0x1631a30();
   input += synapse0x1631a70();
   input += synapse0x1631ab0();
   input += synapse0x1631af0();
   input += synapse0x1631b30();
   input += synapse0x1631b70();
   input += synapse0x1631bb0();
   input += synapse0x1631bf0();
   input += synapse0x1631c30();
   input += synapse0x1631c70();
   input += synapse0x1631700();
   input += synapse0x1631740();
   input += synapse0x1631dc0();
   input += synapse0x1631e00();
   input += synapse0x1631e40();
   input += synapse0x1631e80();
   input += synapse0x1631ec0();
   input += synapse0x1631f00();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1631570() {
   double input = input0x1631570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1631f40() {
   double input = -0.103207;
   input += synapse0x1632280();
   input += synapse0x16322c0();
   input += synapse0x1632300();
   input += synapse0x1632340();
   input += synapse0x1632380();
   input += synapse0x16323c0();
   input += synapse0x1632400();
   input += synapse0x1632440();
   input += synapse0x1632480();
   input += synapse0x16324c0();
   input += synapse0x1632500();
   input += synapse0x1632540();
   input += synapse0x1632580();
   input += synapse0x16325c0();
   input += synapse0x1632600();
   input += synapse0x1632640();
   input += synapse0x16320d0();
   input += synapse0x1632110();
   input += synapse0x1632790();
   input += synapse0x16327d0();
   input += synapse0x1632810();
   input += synapse0x1632850();
   input += synapse0x1632890();
   input += synapse0x16328d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1631f40() {
   double input = input0x1631f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1632910() {
   double input = -0.907377;
   input += synapse0x1632c50();
   input += synapse0x1632c90();
   input += synapse0x1632cd0();
   input += synapse0x1632d10();
   input += synapse0x1632d50();
   input += synapse0x1632d90();
   input += synapse0x1632dd0();
   input += synapse0x1632e10();
   input += synapse0x1632e50();
   input += synapse0x162b010();
   input += synapse0x162b050();
   input += synapse0x162b090();
   input += synapse0x162b0d0();
   input += synapse0x162b110();
   input += synapse0x162b150();
   input += synapse0x162b190();
   input += synapse0x1632aa0();
   input += synapse0x1632ae0();
   input += synapse0x162b2e0();
   input += synapse0x162b320();
   input += synapse0x162b360();
   input += synapse0x162b3a0();
   input += synapse0x162b3e0();
   input += synapse0x162b420();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1632910() {
   double input = input0x1632910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162b460() {
   double input = -3.5163;
   input += synapse0x162b7a0();
   input += synapse0x162b7e0();
   input += synapse0x162b820();
   input += synapse0x162b860();
   input += synapse0x162b8a0();
   input += synapse0x162b8e0();
   input += synapse0x162b920();
   input += synapse0x162b960();
   input += synapse0x162b9a0();
   input += synapse0x162b9e0();
   input += synapse0x162ba20();
   input += synapse0x162ba60();
   input += synapse0x162baa0();
   input += synapse0x162bae0();
   input += synapse0x162bb20();
   input += synapse0x162bb60();
   input += synapse0x162b5f0();
   input += synapse0x162b630();
   input += synapse0x162bcb0();
   input += synapse0x162bcf0();
   input += synapse0x162bd30();
   input += synapse0x162bd70();
   input += synapse0x162bdb0();
   input += synapse0x162bdf0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162b460() {
   double input = input0x162b460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162be30() {
   double input = -0.357783;
   input += synapse0x162bfc0();
   input += synapse0x1635050();
   input += synapse0x1635090();
   input += synapse0x16350d0();
   input += synapse0x1635110();
   input += synapse0x1635150();
   input += synapse0x1635190();
   input += synapse0x16351d0();
   input += synapse0x1635210();
   input += synapse0x1635250();
   input += synapse0x1635290();
   input += synapse0x16352d0();
   input += synapse0x1635310();
   input += synapse0x1635350();
   input += synapse0x1635390();
   input += synapse0x16353d0();
   input += synapse0x1634ea0();
   input += synapse0x1634ee0();
   input += synapse0x1635520();
   input += synapse0x1635560();
   input += synapse0x16355a0();
   input += synapse0x16355e0();
   input += synapse0x1635620();
   input += synapse0x1635660();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162be30() {
   double input = input0x162be30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16356a0() {
   double input = 1.75393;
   input += synapse0x16359e0();
   input += synapse0x1635a20();
   input += synapse0x1635a60();
   input += synapse0x1635aa0();
   input += synapse0x1635ae0();
   input += synapse0x1635b20();
   input += synapse0x1635b60();
   input += synapse0x1635ba0();
   input += synapse0x1635be0();
   input += synapse0x1635c20();
   input += synapse0x1635c60();
   input += synapse0x1635ca0();
   input += synapse0x1635ce0();
   input += synapse0x1635d20();
   input += synapse0x1635d60();
   input += synapse0x1635da0();
   input += synapse0x1635830();
   input += synapse0x1635870();
   input += synapse0x1635ef0();
   input += synapse0x1635f30();
   input += synapse0x1635f70();
   input += synapse0x1635fb0();
   input += synapse0x1635ff0();
   input += synapse0x1636030();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16356a0() {
   double input = input0x16356a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1636070() {
   double input = 0.300432;
   input += synapse0x16363b0();
   input += synapse0x16363f0();
   input += synapse0x1636430();
   input += synapse0x1636470();
   input += synapse0x16364b0();
   input += synapse0x16364f0();
   input += synapse0x1636530();
   input += synapse0x1636570();
   input += synapse0x16365b0();
   input += synapse0x16365f0();
   input += synapse0x1636630();
   input += synapse0x1636670();
   input += synapse0x16366b0();
   input += synapse0x16366f0();
   input += synapse0x1636730();
   input += synapse0x1636770();
   input += synapse0x1636200();
   input += synapse0x1636240();
   input += synapse0x16368c0();
   input += synapse0x1636900();
   input += synapse0x1636940();
   input += synapse0x1636980();
   input += synapse0x16369c0();
   input += synapse0x1636a00();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1636070() {
   double input = input0x1636070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1636a40() {
   double input = 0.000659104;
   input += synapse0x1636d80();
   input += synapse0x1636dc0();
   input += synapse0x1636e00();
   input += synapse0x1636e40();
   input += synapse0x1636e80();
   input += synapse0x1636ec0();
   input += synapse0x1636f00();
   input += synapse0x1636f40();
   input += synapse0x1636f80();
   input += synapse0x1636fc0();
   input += synapse0x1637000();
   input += synapse0x1637040();
   input += synapse0x1637080();
   input += synapse0x16370c0();
   input += synapse0x1637100();
   input += synapse0x1637140();
   input += synapse0x1636bd0();
   input += synapse0x1636c10();
   input += synapse0x1637290();
   input += synapse0x16372d0();
   input += synapse0x1637310();
   input += synapse0x1637350();
   input += synapse0x1637390();
   input += synapse0x16373d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1636a40() {
   double input = input0x1636a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1637410() {
   double input = 4.37857;
   input += synapse0x1637750();
   input += synapse0x1637790();
   input += synapse0x16377d0();
   input += synapse0x1637810();
   input += synapse0x1637850();
   input += synapse0x1637890();
   input += synapse0x16378d0();
   input += synapse0x1637910();
   input += synapse0x1637950();
   input += synapse0x1637990();
   input += synapse0x16379d0();
   input += synapse0x1637a10();
   input += synapse0x1637a50();
   input += synapse0x1637a90();
   input += synapse0x1637ad0();
   input += synapse0x1637b10();
   input += synapse0x16375a0();
   input += synapse0x16375e0();
   input += synapse0x1637c60();
   input += synapse0x1637ca0();
   input += synapse0x1637ce0();
   input += synapse0x1637d20();
   input += synapse0x1637d60();
   input += synapse0x1637da0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1637410() {
   double input = input0x1637410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1637de0() {
   double input = 1.96629;
   input += synapse0x1638120();
   input += synapse0x1638160();
   input += synapse0x16381a0();
   input += synapse0x16381e0();
   input += synapse0x1638220();
   input += synapse0x1638260();
   input += synapse0x16382a0();
   input += synapse0x16382e0();
   input += synapse0x1638320();
   input += synapse0x1638360();
   input += synapse0x16383a0();
   input += synapse0x16383e0();
   input += synapse0x1638420();
   input += synapse0x1638460();
   input += synapse0x16384a0();
   input += synapse0x16384e0();
   input += synapse0x1637f70();
   input += synapse0x1637fb0();
   input += synapse0x1638630();
   input += synapse0x1638670();
   input += synapse0x16386b0();
   input += synapse0x16386f0();
   input += synapse0x1638730();
   input += synapse0x1638770();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1637de0() {
   double input = input0x1637de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16387b0() {
   double input = -0.24044;
   input += synapse0x1638af0();
   input += synapse0x1638b30();
   input += synapse0x1638b70();
   input += synapse0x1638bb0();
   input += synapse0x1638bf0();
   input += synapse0x1638c30();
   input += synapse0x1638c70();
   input += synapse0x1638cb0();
   input += synapse0x1638cf0();
   input += synapse0x1638d30();
   input += synapse0x1638d70();
   input += synapse0x1638db0();
   input += synapse0x1638df0();
   input += synapse0x1638e30();
   input += synapse0x1638e70();
   input += synapse0x1638eb0();
   input += synapse0x1638940();
   input += synapse0x1638980();
   input += synapse0x1639000();
   input += synapse0x1639040();
   input += synapse0x1639080();
   input += synapse0x16390c0();
   input += synapse0x1639100();
   input += synapse0x1639140();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16387b0() {
   double input = input0x16387b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1639180() {
   double input = 0.0596772;
   input += synapse0x16394c0();
   input += synapse0x1639500();
   input += synapse0x1639540();
   input += synapse0x1639580();
   input += synapse0x16395c0();
   input += synapse0x1639600();
   input += synapse0x1639640();
   input += synapse0x1639680();
   input += synapse0x16396c0();
   input += synapse0x1639700();
   input += synapse0x1639740();
   input += synapse0x1639780();
   input += synapse0x16397c0();
   input += synapse0x1639800();
   input += synapse0x1639840();
   input += synapse0x1639880();
   input += synapse0x1639310();
   input += synapse0x1639350();
   input += synapse0x16399d0();
   input += synapse0x1639a10();
   input += synapse0x1639a50();
   input += synapse0x1639a90();
   input += synapse0x1639ad0();
   input += synapse0x1639b10();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1639180() {
   double input = input0x1639180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1639b50() {
   double input = -1.21362;
   input += synapse0x1639e90();
   input += synapse0x162e460();
   input += synapse0x162e4a0();
   input += synapse0x162e4e0();
   input += synapse0x162e730();
   input += synapse0x162e770();
   input += synapse0x162e7b0();
   input += synapse0x162ea00();
   input += synapse0x162ea40();
   input += synapse0x162ec90();
   input += synapse0x162ecd0();
   input += synapse0x162ed10();
   input += synapse0x162ef60();
   input += synapse0x162efa0();
   input += synapse0x162f1f0();
   input += synapse0x162f230();
   input += synapse0x1639ce0();
   input += synapse0x1639d20();
   input += synapse0x162f380();
   input += synapse0x162f890();
   input += synapse0x162f8d0();
   input += synapse0x162f910();
   input += synapse0x162fb60();
   input += synapse0x162fba0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1639b50() {
   double input = input0x1639b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x162fbe0() {
   double input = -1.2504;
   input += synapse0x162f450();
   input += synapse0x162f490();
   input += synapse0x162f4d0();
   input += synapse0x162f510();
   input += synapse0x162fe90();
   input += synapse0x163c1e0();
   input += synapse0x163c220();
   input += synapse0x163c260();
   input += synapse0x163c2a0();
   input += synapse0x163c2e0();
   input += synapse0x163c320();
   input += synapse0x163c360();
   input += synapse0x163c3a0();
   input += synapse0x163c3e0();
   input += synapse0x163c420();
   input += synapse0x163c460();
   input += synapse0x162fd70();
   input += synapse0x162fdb0();
   input += synapse0x163c5b0();
   input += synapse0x163c5f0();
   input += synapse0x163c630();
   input += synapse0x163c670();
   input += synapse0x163c6b0();
   input += synapse0x163c6f0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x162fbe0() {
   double input = input0x162fbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x163c730() {
   double input = -3.85694;
   input += synapse0x163ca70();
   input += synapse0x163cab0();
   input += synapse0x163caf0();
   input += synapse0x163cb30();
   input += synapse0x163cb70();
   input += synapse0x163cbb0();
   input += synapse0x163cbf0();
   input += synapse0x163cc30();
   input += synapse0x163cc70();
   input += synapse0x163ccb0();
   input += synapse0x163ccf0();
   input += synapse0x163cd30();
   input += synapse0x163cd70();
   input += synapse0x163cdb0();
   input += synapse0x163cdf0();
   input += synapse0x163ce30();
   input += synapse0x163c8c0();
   input += synapse0x163c900();
   input += synapse0x163cf80();
   input += synapse0x163cfc0();
   input += synapse0x163d000();
   input += synapse0x163d040();
   input += synapse0x163d080();
   input += synapse0x163d0c0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x163c730() {
   double input = input0x163c730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x163d100() {
   double input = 0.251563;
   input += synapse0x163d440();
   input += synapse0x163d480();
   input += synapse0x163d4c0();
   input += synapse0x163d500();
   input += synapse0x163d540();
   input += synapse0x163d580();
   input += synapse0x163d5c0();
   input += synapse0x163d600();
   input += synapse0x163d640();
   input += synapse0x163d680();
   input += synapse0x163d6c0();
   input += synapse0x163d700();
   input += synapse0x163d740();
   input += synapse0x163d780();
   input += synapse0x163d7c0();
   input += synapse0x163d800();
   input += synapse0x163d290();
   input += synapse0x163d2d0();
   input += synapse0x163d950();
   input += synapse0x163d990();
   input += synapse0x163d9d0();
   input += synapse0x163da10();
   input += synapse0x163da50();
   input += synapse0x163da90();
   return input;
}

double NNfunction_sb_cLdR::neuron0x163d100() {
   double input = input0x163d100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x163dad0() {
   double input = -0.635296;
   input += synapse0x163de10();
   input += synapse0x163de50();
   input += synapse0x163de90();
   input += synapse0x163ded0();
   input += synapse0x163df10();
   input += synapse0x163df50();
   input += synapse0x163df90();
   input += synapse0x163dfd0();
   input += synapse0x163e010();
   input += synapse0x163e050();
   input += synapse0x163e090();
   input += synapse0x163e0d0();
   input += synapse0x163e110();
   input += synapse0x163e150();
   input += synapse0x163e190();
   input += synapse0x163e1d0();
   input += synapse0x163dc60();
   input += synapse0x163dca0();
   input += synapse0x163e320();
   input += synapse0x163e360();
   input += synapse0x163e3a0();
   input += synapse0x163e3e0();
   input += synapse0x163e420();
   input += synapse0x163e460();
   return input;
}

double NNfunction_sb_cLdR::neuron0x163dad0() {
   double input = input0x163dad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x163e4a0() {
   double input = 0.77815;
   input += synapse0x163e7e0();
   input += synapse0x163e820();
   input += synapse0x163e860();
   input += synapse0x163e8a0();
   input += synapse0x163e8e0();
   input += synapse0x163e920();
   input += synapse0x163e960();
   input += synapse0x163e9a0();
   input += synapse0x163e9e0();
   input += synapse0x163ea20();
   input += synapse0x163ea60();
   input += synapse0x163eaa0();
   input += synapse0x163eae0();
   input += synapse0x163eb20();
   input += synapse0x163eb60();
   input += synapse0x163eba0();
   input += synapse0x163e630();
   input += synapse0x163e670();
   input += synapse0x163ecf0();
   input += synapse0x163ed30();
   input += synapse0x163ed70();
   input += synapse0x163edb0();
   input += synapse0x163edf0();
   input += synapse0x163ee30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x163e4a0() {
   double input = input0x163e4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x163ee70() {
   double input = -1.23942;
   input += synapse0x163f1b0();
   input += synapse0x163f1f0();
   input += synapse0x163f230();
   input += synapse0x163f270();
   input += synapse0x163f2b0();
   input += synapse0x163f2f0();
   input += synapse0x163f330();
   input += synapse0x163f370();
   input += synapse0x163f3b0();
   input += synapse0x163f3f0();
   input += synapse0x163f430();
   input += synapse0x163f470();
   input += synapse0x163f4b0();
   input += synapse0x163f4f0();
   input += synapse0x163f530();
   input += synapse0x163f570();
   input += synapse0x163f000();
   input += synapse0x163f040();
   input += synapse0x163f6c0();
   input += synapse0x163f700();
   input += synapse0x163f740();
   input += synapse0x163f780();
   input += synapse0x163f7c0();
   input += synapse0x163f800();
   return input;
}

double NNfunction_sb_cLdR::neuron0x163ee70() {
   double input = input0x163ee70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x163f840() {
   double input = -0.0977246;
   input += synapse0x163fb80();
   input += synapse0x163fbc0();
   input += synapse0x163fc00();
   input += synapse0x163fc40();
   input += synapse0x163fc80();
   input += synapse0x163fcc0();
   input += synapse0x163fd00();
   input += synapse0x163fd40();
   input += synapse0x163fd80();
   input += synapse0x163fdc0();
   input += synapse0x163fe00();
   input += synapse0x163fe40();
   input += synapse0x163fe80();
   input += synapse0x163fec0();
   input += synapse0x163ff00();
   input += synapse0x163ff40();
   input += synapse0x163f9d0();
   input += synapse0x163fa10();
   input += synapse0x1640090();
   input += synapse0x16400d0();
   input += synapse0x1640110();
   input += synapse0x1640150();
   input += synapse0x1640190();
   input += synapse0x16401d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x163f840() {
   double input = input0x163f840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1640210() {
   double input = 0.898246;
   input += synapse0x1640550();
   input += synapse0x1640590();
   input += synapse0x16405d0();
   input += synapse0x1640610();
   input += synapse0x1640650();
   input += synapse0x1640690();
   input += synapse0x16406d0();
   input += synapse0x1640710();
   input += synapse0x1640750();
   input += synapse0x1640790();
   input += synapse0x16407d0();
   input += synapse0x1640810();
   input += synapse0x1640850();
   input += synapse0x1640890();
   input += synapse0x16408d0();
   input += synapse0x1640910();
   input += synapse0x16403a0();
   input += synapse0x16403e0();
   input += synapse0x1640a60();
   input += synapse0x1640aa0();
   input += synapse0x1640ae0();
   input += synapse0x1640b20();
   input += synapse0x1640b60();
   input += synapse0x1640ba0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1640210() {
   double input = input0x1640210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1640be0() {
   double input = -0.00387151;
   input += synapse0x1629650();
   input += synapse0x1629690();
   input += synapse0x16296d0();
   input += synapse0x1629710();
   input += synapse0x1629750();
   input += synapse0x1629790();
   input += synapse0x16297d0();
   input += synapse0x1629810();
   input += synapse0x1641330();
   input += synapse0x1641370();
   input += synapse0x16413b0();
   input += synapse0x16413f0();
   input += synapse0x1641430();
   input += synapse0x1641470();
   input += synapse0x16414b0();
   input += synapse0x16414f0();
   input += synapse0x1640d70();
   input += synapse0x1640db0();
   input += synapse0x1641640();
   input += synapse0x1641680();
   input += synapse0x16416c0();
   input += synapse0x1641700();
   input += synapse0x1641740();
   input += synapse0x1641780();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1640be0() {
   double input = input0x1640be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16417c0() {
   double input = 0.0466913;
   input += synapse0x1641b00();
   input += synapse0x1641b40();
   input += synapse0x1641b80();
   input += synapse0x1641bc0();
   input += synapse0x1641c00();
   input += synapse0x1641c40();
   input += synapse0x1641c80();
   input += synapse0x1641cc0();
   input += synapse0x1641d00();
   input += synapse0x1641d40();
   input += synapse0x1641d80();
   input += synapse0x1641dc0();
   input += synapse0x1641e00();
   input += synapse0x1641e40();
   input += synapse0x1641e80();
   input += synapse0x1641ec0();
   input += synapse0x1641950();
   input += synapse0x1641990();
   input += synapse0x1642010();
   input += synapse0x1642050();
   input += synapse0x1642090();
   input += synapse0x16420d0();
   input += synapse0x1642110();
   input += synapse0x1642150();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16417c0() {
   double input = input0x16417c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1642190() {
   double input = 0.540858;
   input += synapse0x16424d0();
   input += synapse0x1642510();
   input += synapse0x1642550();
   input += synapse0x1642590();
   input += synapse0x16425d0();
   input += synapse0x1642610();
   input += synapse0x1642650();
   input += synapse0x1642690();
   input += synapse0x16426d0();
   input += synapse0x1642710();
   input += synapse0x1642750();
   input += synapse0x1642790();
   input += synapse0x16427d0();
   input += synapse0x1642810();
   input += synapse0x1642850();
   input += synapse0x1642890();
   input += synapse0x1642320();
   input += synapse0x1642360();
   input += synapse0x1632e90();
   input += synapse0x1632ed0();
   input += synapse0x1632f10();
   input += synapse0x1632f50();
   input += synapse0x1632f90();
   input += synapse0x1632fd0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1642190() {
   double input = input0x1642190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1633010() {
   double input = 1.12993;
   input += synapse0x1633350();
   input += synapse0x1633390();
   input += synapse0x16333d0();
   input += synapse0x1633410();
   input += synapse0x1633450();
   input += synapse0x1633490();
   input += synapse0x16334d0();
   input += synapse0x1633510();
   input += synapse0x1633550();
   input += synapse0x1633590();
   input += synapse0x16335d0();
   input += synapse0x1633610();
   input += synapse0x1633650();
   input += synapse0x1633690();
   input += synapse0x16336d0();
   input += synapse0x1633710();
   input += synapse0x16331a0();
   input += synapse0x16331e0();
   input += synapse0x1633860();
   input += synapse0x16338a0();
   input += synapse0x16338e0();
   input += synapse0x1633920();
   input += synapse0x1633960();
   input += synapse0x16339a0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1633010() {
   double input = input0x1633010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16339e0() {
   double input = 0.805274;
   input += synapse0x1633d20();
   input += synapse0x1633d60();
   input += synapse0x1633da0();
   input += synapse0x1633de0();
   input += synapse0x1633e20();
   input += synapse0x1633e60();
   input += synapse0x1633ea0();
   input += synapse0x1633ee0();
   input += synapse0x1633f20();
   input += synapse0x1633f60();
   input += synapse0x1633fa0();
   input += synapse0x1633fe0();
   input += synapse0x1634020();
   input += synapse0x1634060();
   input += synapse0x16340a0();
   input += synapse0x16340e0();
   input += synapse0x1633b70();
   input += synapse0x1633bb0();
   input += synapse0x1634230();
   input += synapse0x1634270();
   input += synapse0x16342b0();
   input += synapse0x16342f0();
   input += synapse0x1634330();
   input += synapse0x1634370();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16339e0() {
   double input = input0x16339e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16343b0() {
   double input = 0.0851858;
   input += synapse0x16346f0();
   input += synapse0x1634730();
   input += synapse0x1634770();
   input += synapse0x16347b0();
   input += synapse0x16347f0();
   input += synapse0x1634830();
   input += synapse0x1634870();
   input += synapse0x16348b0();
   input += synapse0x16348f0();
   input += synapse0x1634930();
   input += synapse0x1634970();
   input += synapse0x16349b0();
   input += synapse0x16349f0();
   input += synapse0x1634a30();
   input += synapse0x1634a70();
   input += synapse0x1634ab0();
   input += synapse0x1634540();
   input += synapse0x1634580();
   input += synapse0x1634c00();
   input += synapse0x1634c40();
   input += synapse0x1634c80();
   input += synapse0x1634cc0();
   input += synapse0x1634d00();
   input += synapse0x1634d40();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16343b0() {
   double input = input0x16343b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16469f0() {
   double input = 0.67649;
   input += synapse0x1646c10();
   input += synapse0x1646c50();
   input += synapse0x1646c90();
   input += synapse0x1646cd0();
   input += synapse0x1646d10();
   input += synapse0x1646d50();
   input += synapse0x1646d90();
   input += synapse0x1646dd0();
   input += synapse0x1646e10();
   input += synapse0x1646e50();
   input += synapse0x1646e90();
   input += synapse0x1646ed0();
   input += synapse0x1646f10();
   input += synapse0x1646f50();
   input += synapse0x1646f90();
   input += synapse0x1646fd0();
   input += synapse0x1634d80();
   input += synapse0x1634dc0();
   input += synapse0x1647120();
   input += synapse0x1647160();
   input += synapse0x16471a0();
   input += synapse0x16471e0();
   input += synapse0x1647220();
   input += synapse0x1647260();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16469f0() {
   double input = input0x16469f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16472a0() {
   double input = 1.91309;
   input += synapse0x16475e0();
   input += synapse0x1647620();
   input += synapse0x1647660();
   input += synapse0x16476a0();
   input += synapse0x16476e0();
   input += synapse0x1647720();
   input += synapse0x1647760();
   input += synapse0x16477a0();
   input += synapse0x16477e0();
   input += synapse0x1647820();
   input += synapse0x1647860();
   input += synapse0x16478a0();
   input += synapse0x16478e0();
   input += synapse0x1647920();
   input += synapse0x1647960();
   input += synapse0x16479a0();
   input += synapse0x1647430();
   input += synapse0x1647470();
   input += synapse0x1647af0();
   input += synapse0x1647b30();
   input += synapse0x1647b70();
   input += synapse0x1647bb0();
   input += synapse0x1647bf0();
   input += synapse0x1647c30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16472a0() {
   double input = input0x16472a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1647c70() {
   double input = 0.715007;
   input += synapse0x1647fb0();
   input += synapse0x1647ff0();
   input += synapse0x1648030();
   input += synapse0x1648070();
   input += synapse0x16480b0();
   input += synapse0x16480f0();
   input += synapse0x1648130();
   input += synapse0x1648170();
   input += synapse0x16481b0();
   input += synapse0x16481f0();
   input += synapse0x1648230();
   input += synapse0x1648270();
   input += synapse0x16482b0();
   input += synapse0x16482f0();
   input += synapse0x1648330();
   input += synapse0x1648370();
   input += synapse0x1647e00();
   input += synapse0x1647e40();
   input += synapse0x16484c0();
   input += synapse0x1648500();
   input += synapse0x1648540();
   input += synapse0x1648580();
   input += synapse0x16485c0();
   input += synapse0x1648600();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1647c70() {
   double input = input0x1647c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1648640() {
   double input = -1.34294;
   input += synapse0x1648980();
   input += synapse0x16489c0();
   input += synapse0x1648a00();
   input += synapse0x1648a40();
   input += synapse0x1648a80();
   input += synapse0x1648ac0();
   input += synapse0x1648b00();
   input += synapse0x1648b40();
   input += synapse0x1648b80();
   input += synapse0x1648bc0();
   input += synapse0x1648c00();
   input += synapse0x1648c40();
   input += synapse0x1648c80();
   input += synapse0x1648cc0();
   input += synapse0x1648d00();
   input += synapse0x1648d40();
   input += synapse0x16487d0();
   input += synapse0x1648810();
   input += synapse0x1648e90();
   input += synapse0x1648ed0();
   input += synapse0x1648f10();
   input += synapse0x1648f50();
   input += synapse0x1648f90();
   input += synapse0x1648fd0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1648640() {
   double input = input0x1648640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x164f840() {
   double input = -0.60621;
   input += synapse0x1625570();
   input += synapse0x16255b0();
   input += synapse0x1626a80();
   input += synapse0x1626ac0();
   input += synapse0x1627450();
   input += synapse0x1627490();
   input += synapse0x1628220();
   input += synapse0x1628260();
   input += synapse0x1628bf0();
   input += synapse0x1628c30();
   input += synapse0x16295c0();
   input += synapse0x1629600();
   input += synapse0x162a0a0();
   input += synapse0x162a0e0();
   input += synapse0x162aa70();
   input += synapse0x162aab0();
   input += synapse0x1627b50();
   input += synapse0x1627b90();
   input += synapse0x162c620();
   input += synapse0x162c660();
   input += synapse0x162cff0();
   input += synapse0x162d030();
   input += synapse0x162d9c0();
   input += synapse0x162da00();
   input += synapse0x162e390();
   input += synapse0x162e3d0();
   input += synapse0x1622500();
   input += synapse0x1622540();
   input += synapse0x1630480();
   input += synapse0x16304c0();
   input += synapse0x1630e50();
   input += synapse0x1630e90();
   input += synapse0x1631820();
   input += synapse0x1631860();
   input += synapse0x16321f0();
   input += synapse0x1632230();
   input += synapse0x1632bc0();
   input += synapse0x1632c00();
   input += synapse0x162b710();
   input += synapse0x162b750();
   input += synapse0x1634fc0();
   input += synapse0x1635000();
   input += synapse0x1635950();
   input += synapse0x1635990();
   input += synapse0x1636320();
   input += synapse0x1636360();
   input += synapse0x1636cf0();
   input += synapse0x1636d30();
   input += synapse0x16376c0();
   input += synapse0x1637700();
   return input;
}

double NNfunction_sb_cLdR::neuron0x164f840() {
   double input = input0x164f840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x164fbe0() {
   double input = -0.566043;
   input += synapse0x1639e00();
   input += synapse0x1639e40();
   input += synapse0x162f3c0();
   input += synapse0x162f400();
   input += synapse0x163c9e0();
   input += synapse0x163ca20();
   input += synapse0x163d3b0();
   input += synapse0x163d3f0();
   input += synapse0x163dd80();
   input += synapse0x163ddc0();
   input += synapse0x163e750();
   input += synapse0x163e790();
   input += synapse0x163f120();
   input += synapse0x163f160();
   input += synapse0x163faf0();
   input += synapse0x163fb30();
   input += synapse0x16404c0();
   input += synapse0x1640500();
   input += synapse0x1640e90();
   input += synapse0x1640ed0();
   input += synapse0x1641a70();
   input += synapse0x1641ab0();
   input += synapse0x1642440();
   input += synapse0x1642480();
   input += synapse0x16332c0();
   input += synapse0x1633300();
   input += synapse0x1633c90();
   input += synapse0x1633cd0();
   input += synapse0x1634660();
   input += synapse0x16346a0();
   input += synapse0x1646b80();
   input += synapse0x1646bc0();
   input += synapse0x1647550();
   input += synapse0x1647590();
   input += synapse0x1647f20();
   input += synapse0x1647f60();
   input += synapse0x16488f0();
   input += synapse0x1648930();
   input += synapse0x16247e0();
   input += synapse0x1624820();
   input += synapse0x1638090();
   input += synapse0x16380d0();
   input += synapse0x1649010();
   input += synapse0x1649050();
   input += synapse0x1649090();
   input += synapse0x16490d0();
   input += synapse0x164ff80();
   input += synapse0x164ffc0();
   input += synapse0x1650000();
   input += synapse0x1650040();
   return input;
}

double NNfunction_sb_cLdR::neuron0x164fbe0() {
   double input = input0x164fbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1650080() {
   double input = -0.221207;
   input += synapse0x16503c0();
   input += synapse0x1650400();
   input += synapse0x1650440();
   input += synapse0x1650480();
   input += synapse0x16504c0();
   input += synapse0x1650500();
   input += synapse0x1650540();
   input += synapse0x1650580();
   input += synapse0x16505c0();
   input += synapse0x1650600();
   input += synapse0x1650640();
   input += synapse0x1650680();
   input += synapse0x16506c0();
   input += synapse0x1650700();
   input += synapse0x1650740();
   input += synapse0x1650780();
   input += synapse0x1650210();
   input += synapse0x1650250();
   input += synapse0x16508d0();
   input += synapse0x1650910();
   input += synapse0x1650950();
   input += synapse0x1650990();
   input += synapse0x16509d0();
   input += synapse0x1650a10();
   input += synapse0x1650a50();
   input += synapse0x1650a90();
   input += synapse0x1650ad0();
   input += synapse0x1650b10();
   input += synapse0x1650b50();
   input += synapse0x1650b90();
   input += synapse0x1650bd0();
   input += synapse0x1650c10();
   input += synapse0x16507c0();
   input += synapse0x1650800();
   input += synapse0x1650840();
   input += synapse0x1650880();
   input += synapse0x1650e60();
   input += synapse0x1650ea0();
   input += synapse0x1650ee0();
   input += synapse0x1650f20();
   input += synapse0x1650f60();
   input += synapse0x1650fa0();
   input += synapse0x1650fe0();
   input += synapse0x1651020();
   input += synapse0x1651060();
   input += synapse0x16510a0();
   input += synapse0x16510e0();
   input += synapse0x1651120();
   input += synapse0x1651160();
   input += synapse0x16511a0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1650080() {
   double input = input0x1650080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16511e0() {
   double input = -0.433477;
   input += synapse0x1651520();
   input += synapse0x1651560();
   input += synapse0x16515a0();
   input += synapse0x16515e0();
   input += synapse0x1651620();
   input += synapse0x1651660();
   input += synapse0x16516a0();
   input += synapse0x16516e0();
   input += synapse0x1651720();
   input += synapse0x1651760();
   input += synapse0x16517a0();
   input += synapse0x16517e0();
   input += synapse0x1651820();
   input += synapse0x1651860();
   input += synapse0x16518a0();
   input += synapse0x16518e0();
   input += synapse0x1651370();
   input += synapse0x16513b0();
   input += synapse0x1651a30();
   input += synapse0x1651a70();
   input += synapse0x1651ab0();
   input += synapse0x1651af0();
   input += synapse0x1651b30();
   input += synapse0x1651b70();
   input += synapse0x1651bb0();
   input += synapse0x1651bf0();
   input += synapse0x1651c30();
   input += synapse0x1651c70();
   input += synapse0x1651cb0();
   input += synapse0x1651cf0();
   input += synapse0x1651d30();
   input += synapse0x1651d70();
   input += synapse0x1651920();
   input += synapse0x1651960();
   input += synapse0x16519a0();
   input += synapse0x16519e0();
   input += synapse0x1651fc0();
   input += synapse0x1652000();
   input += synapse0x1652040();
   input += synapse0x1652080();
   input += synapse0x16520c0();
   input += synapse0x1652100();
   input += synapse0x1652140();
   input += synapse0x1652180();
   input += synapse0x16521c0();
   input += synapse0x1652200();
   input += synapse0x1652240();
   input += synapse0x1652280();
   input += synapse0x16522c0();
   input += synapse0x1652300();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16511e0() {
   double input = input0x16511e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x1652340() {
   double input = 1.20518;
   input += synapse0x1652680();
   input += synapse0x16526c0();
   input += synapse0x1652700();
   input += synapse0x1652740();
   input += synapse0x1652780();
   input += synapse0x16527c0();
   input += synapse0x1652800();
   input += synapse0x1652840();
   input += synapse0x1652880();
   input += synapse0x16528c0();
   input += synapse0x1652900();
   input += synapse0x1652940();
   input += synapse0x1652980();
   input += synapse0x16529c0();
   input += synapse0x1652a00();
   input += synapse0x1652a40();
   input += synapse0x16524d0();
   input += synapse0x1652510();
   input += synapse0x1652b90();
   input += synapse0x1652bd0();
   input += synapse0x1652c10();
   input += synapse0x1652c50();
   input += synapse0x1652c90();
   input += synapse0x1652cd0();
   input += synapse0x1652d10();
   input += synapse0x1652d50();
   input += synapse0x1652d90();
   input += synapse0x1652dd0();
   input += synapse0x1652e10();
   input += synapse0x1652e50();
   input += synapse0x1652e90();
   input += synapse0x1652ed0();
   input += synapse0x1652a80();
   input += synapse0x1652ac0();
   input += synapse0x1652b00();
   input += synapse0x1652b40();
   input += synapse0x1653120();
   input += synapse0x1653160();
   input += synapse0x16531a0();
   input += synapse0x16531e0();
   input += synapse0x1653220();
   input += synapse0x1653260();
   input += synapse0x16532a0();
   input += synapse0x16532e0();
   input += synapse0x1653320();
   input += synapse0x1653360();
   input += synapse0x16533a0();
   input += synapse0x16533e0();
   input += synapse0x1653420();
   input += synapse0x1653460();
   return input;
}

double NNfunction_sb_cLdR::neuron0x1652340() {
   double input = input0x1652340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x16534a0() {
   double input = 0.709448;
   input += synapse0x1624580();
   input += synapse0x16536c0();
   input += synapse0x1653700();
   input += synapse0x1653740();
   input += synapse0x1653780();
   return input;
}

double NNfunction_sb_cLdR::neuron0x16534a0() {
   double input = input0x16534a0();
   return (input * 1)+0;
}

double NNfunction_sb_cLdR::synapse0x13df3d0() {
   return (neuron0x161f560()*-0.0155362);
}

double NNfunction_sb_cLdR::synapse0x161f420() {
   return (neuron0x161f8a0()*0.0074826);
}

double NNfunction_sb_cLdR::synapse0x161f460() {
   return (neuron0x161fbe0()*-0.0755794);
}

double NNfunction_sb_cLdR::synapse0x1624870() {
   return (neuron0x161ff20()*-0.187335);
}

double NNfunction_sb_cLdR::synapse0x16248b0() {
   return (neuron0x1620260()*-0.0127689);
}

double NNfunction_sb_cLdR::synapse0x16248f0() {
   return (neuron0x16205a0()*0.0059377);
}

double NNfunction_sb_cLdR::synapse0x1624930() {
   return (neuron0x16208e0()*0.0003389);
}

double NNfunction_sb_cLdR::synapse0x1624970() {
   return (neuron0x1620c20()*-0.012351);
}

double NNfunction_sb_cLdR::synapse0x16249b0() {
   return (neuron0x1620f60()*0.0229874);
}

double NNfunction_sb_cLdR::synapse0x16249f0() {
   return (neuron0x16212a0()*-0.0230833);
}

double NNfunction_sb_cLdR::synapse0x1624a30() {
   return (neuron0x16215e0()*0.00707158);
}

double NNfunction_sb_cLdR::synapse0x1624a70() {
   return (neuron0x1621920()*0.0424993);
}

double NNfunction_sb_cLdR::synapse0x1624ab0() {
   return (neuron0x1621c60()*1.2258);
}

double NNfunction_sb_cLdR::synapse0x1624af0() {
   return (neuron0x1621fa0()*0.044062);
}

double NNfunction_sb_cLdR::synapse0x1624b30() {
   return (neuron0x16222e0()*0.015361);
}

double NNfunction_sb_cLdR::synapse0x1624b70() {
   return (neuron0x1622620()*0.0149474);
}

double NNfunction_sb_cLdR::synapse0x161f390() {
   return (neuron0x1622960()*0.0055993);
}

double NNfunction_sb_cLdR::synapse0x161f3d0() {
   return (neuron0x1622ec0()*-0.024121);
}

double NNfunction_sb_cLdR::synapse0x13d0c70() {
   return (neuron0x16230e0()*0.04271);
}

double NNfunction_sb_cLdR::synapse0x13d0cb0() {
   return (neuron0x1623420()*0.0180956);
}

double NNfunction_sb_cLdR::synapse0x1624dd0() {
   return (neuron0x1623760()*-0.00121862);
}

double NNfunction_sb_cLdR::synapse0x1624e10() {
   return (neuron0x1623aa0()*0.00183576);
}

double NNfunction_sb_cLdR::synapse0x1624e50() {
   return (neuron0x1623de0()*0.00224951);
}

double NNfunction_sb_cLdR::synapse0x1624e90() {
   return (neuron0x1624120()*-0.0129279);
}

double NNfunction_sb_cLdR::synapse0x1625210() {
   return (neuron0x161f560()*-0.00912977);
}

double NNfunction_sb_cLdR::synapse0x1625250() {
   return (neuron0x161f8a0()*-0.353433);
}

double NNfunction_sb_cLdR::synapse0x1625290() {
   return (neuron0x161fbe0()*-0.149192);
}

double NNfunction_sb_cLdR::synapse0x16252d0() {
   return (neuron0x161ff20()*0.766499);
}

double NNfunction_sb_cLdR::synapse0x1625310() {
   return (neuron0x1620260()*0.0529614);
}

double NNfunction_sb_cLdR::synapse0x1625350() {
   return (neuron0x16205a0()*0.268424);
}

double NNfunction_sb_cLdR::synapse0x1625390() {
   return (neuron0x16208e0()*-0.0587052);
}

double NNfunction_sb_cLdR::synapse0x16253d0() {
   return (neuron0x1620c20()*-0.182885);
}

double NNfunction_sb_cLdR::synapse0x1625410() {
   return (neuron0x1620f60()*0.176946);
}

double NNfunction_sb_cLdR::synapse0x1624cc0() {
   return (neuron0x16212a0()*-0.00220158);
}

double NNfunction_sb_cLdR::synapse0x1624d00() {
   return (neuron0x16215e0()*-0.1834);
}

double NNfunction_sb_cLdR::synapse0x1624d40() {
   return (neuron0x1621920()*0.0189822);
}

double NNfunction_sb_cLdR::synapse0x1624d80() {
   return (neuron0x1621c60()*-0.58845);
}

double NNfunction_sb_cLdR::synapse0x1625660() {
   return (neuron0x1621fa0()*-0.253726);
}

double NNfunction_sb_cLdR::synapse0x16256a0() {
   return (neuron0x16222e0()*-0.38697);
}

double NNfunction_sb_cLdR::synapse0x16256e0() {
   return (neuron0x1622620()*0.0136404);
}

double NNfunction_sb_cLdR::synapse0x1625060() {
   return (neuron0x1622960()*0.276249);
}

double NNfunction_sb_cLdR::synapse0x16250a0() {
   return (neuron0x1622ec0()*-0.546456);
}

double NNfunction_sb_cLdR::synapse0x1625830() {
   return (neuron0x16230e0()*-0.157111);
}

double NNfunction_sb_cLdR::synapse0x1625870() {
   return (neuron0x1623420()*-0.0951957);
}

double NNfunction_sb_cLdR::synapse0x16258b0() {
   return (neuron0x1623760()*-0.134749);
}

double NNfunction_sb_cLdR::synapse0x16258f0() {
   return (neuron0x1623aa0()*-0.147214);
}

double NNfunction_sb_cLdR::synapse0x1625930() {
   return (neuron0x1623de0()*0.0249456);
}

double NNfunction_sb_cLdR::synapse0x1625970() {
   return (neuron0x1624120()*-0.0662341);
}

double NNfunction_sb_cLdR::synapse0x1625cf0() {
   return (neuron0x161f560()*-0.30057);
}

double NNfunction_sb_cLdR::synapse0x1625d30() {
   return (neuron0x161f8a0()*0.0267238);
}

double NNfunction_sb_cLdR::synapse0x1625d70() {
   return (neuron0x161fbe0()*-0.910096);
}

double NNfunction_sb_cLdR::synapse0x1625db0() {
   return (neuron0x161ff20()*0.305154);
}

double NNfunction_sb_cLdR::synapse0x1625df0() {
   return (neuron0x1620260()*-0.160626);
}

double NNfunction_sb_cLdR::synapse0x1625e30() {
   return (neuron0x16205a0()*-0.0820672);
}

double NNfunction_sb_cLdR::synapse0x1625e70() {
   return (neuron0x16208e0()*0.401213);
}

double NNfunction_sb_cLdR::synapse0x1625eb0() {
   return (neuron0x1620c20()*0.0673763);
}

double NNfunction_sb_cLdR::synapse0x1625ef0() {
   return (neuron0x1620f60()*-0.271785);
}

double NNfunction_sb_cLdR::synapse0x1625f30() {
   return (neuron0x16212a0()*0.478434);
}

double NNfunction_sb_cLdR::synapse0x1625f70() {
   return (neuron0x16215e0()*-0.496197);
}

double NNfunction_sb_cLdR::synapse0x1625fb0() {
   return (neuron0x1621920()*0.232388);
}

double NNfunction_sb_cLdR::synapse0x1625ff0() {
   return (neuron0x1621c60()*-0.249389);
}

double NNfunction_sb_cLdR::synapse0x1626030() {
   return (neuron0x1621fa0()*0.0598096);
}

double NNfunction_sb_cLdR::synapse0x1626070() {
   return (neuron0x16222e0()*-0.374835);
}

double NNfunction_sb_cLdR::synapse0x16260b0() {
   return (neuron0x1622620()*-0.5122);
}

double NNfunction_sb_cLdR::synapse0x1625b40() {
   return (neuron0x1622960()*-0.196562);
}

double NNfunction_sb_cLdR::synapse0x1625b80() {
   return (neuron0x1622ec0()*-0.46804);
}

double NNfunction_sb_cLdR::synapse0x13deac0() {
   return (neuron0x16230e0()*0.042323);
}

double NNfunction_sb_cLdR::synapse0x13deb00() {
   return (neuron0x1623420()*-0.288368);
}

double NNfunction_sb_cLdR::synapse0x160e5f0() {
   return (neuron0x1623760()*-0.101106);
}

double NNfunction_sb_cLdR::synapse0x160e630() {
   return (neuron0x1623aa0()*0.0655185);
}

double NNfunction_sb_cLdR::synapse0x160e670() {
   return (neuron0x1623de0()*0.0540154);
}

double NNfunction_sb_cLdR::synapse0x161f4a0() {
   return (neuron0x1624120()*-0.47684);
}

double NNfunction_sb_cLdR::synapse0x1625600() {
   return (neuron0x161f560()*0.0293122);
}

double NNfunction_sb_cLdR::synapse0x161f4e0() {
   return (neuron0x161f8a0()*0.0043724);
}

double NNfunction_sb_cLdR::synapse0x161f520() {
   return (neuron0x161fbe0()*0.0492936);
}

double NNfunction_sb_cLdR::synapse0x1626200() {
   return (neuron0x161ff20()*-0.131618);
}

double NNfunction_sb_cLdR::synapse0x1626240() {
   return (neuron0x1620260()*0.0750172);
}

double NNfunction_sb_cLdR::synapse0x1626280() {
   return (neuron0x16205a0()*-0.0259118);
}

double NNfunction_sb_cLdR::synapse0x16262c0() {
   return (neuron0x16208e0()*-0.0171359);
}

double NNfunction_sb_cLdR::synapse0x1626300() {
   return (neuron0x1620c20()*-0.00763044);
}

double NNfunction_sb_cLdR::synapse0x1626340() {
   return (neuron0x1620f60()*-0.017826);
}

double NNfunction_sb_cLdR::synapse0x1626380() {
   return (neuron0x16212a0()*-0.0424582);
}

double NNfunction_sb_cLdR::synapse0x16263c0() {
   return (neuron0x16215e0()*-0.0225618);
}

double NNfunction_sb_cLdR::synapse0x1626400() {
   return (neuron0x1621920()*-0.166844);
}

double NNfunction_sb_cLdR::synapse0x1626440() {
   return (neuron0x1621c60()*0.300732);
}

double NNfunction_sb_cLdR::synapse0x1626480() {
   return (neuron0x1621fa0()*0.0124498);
}

double NNfunction_sb_cLdR::synapse0x16264c0() {
   return (neuron0x16222e0()*-0.049633);
}

double NNfunction_sb_cLdR::synapse0x1626500() {
   return (neuron0x1622620()*-0.00592183);
}

double NNfunction_sb_cLdR::synapse0x1625450() {
   return (neuron0x1622960()*-0.0255298);
}

double NNfunction_sb_cLdR::synapse0x1625490() {
   return (neuron0x1622ec0()*1.59804);
}

double NNfunction_sb_cLdR::synapse0x1626650() {
   return (neuron0x16230e0()*-0.10469);
}

double NNfunction_sb_cLdR::synapse0x1626690() {
   return (neuron0x1623420()*0.0141488);
}

double NNfunction_sb_cLdR::synapse0x16266d0() {
   return (neuron0x1623760()*0.0605794);
}

double NNfunction_sb_cLdR::synapse0x1626710() {
   return (neuron0x1623aa0()*0.0118821);
}

double NNfunction_sb_cLdR::synapse0x1626750() {
   return (neuron0x1623de0()*-0.000364758);
}

double NNfunction_sb_cLdR::synapse0x1626790() {
   return (neuron0x1624120()*0.0205449);
}

double NNfunction_sb_cLdR::synapse0x1626b10() {
   return (neuron0x161f560()*-0.00204212);
}

double NNfunction_sb_cLdR::synapse0x1626b50() {
   return (neuron0x161f8a0()*0.00635295);
}

double NNfunction_sb_cLdR::synapse0x1626b90() {
   return (neuron0x161fbe0()*-0.124013);
}

double NNfunction_sb_cLdR::synapse0x1626bd0() {
   return (neuron0x161ff20()*0.259799);
}

double NNfunction_sb_cLdR::synapse0x1626c10() {
   return (neuron0x1620260()*-0.064104);
}

double NNfunction_sb_cLdR::synapse0x1626c50() {
   return (neuron0x16205a0()*-0.179693);
}

double NNfunction_sb_cLdR::synapse0x1626c90() {
   return (neuron0x16208e0()*0.0277266);
}

double NNfunction_sb_cLdR::synapse0x1626cd0() {
   return (neuron0x1620c20()*0.0984921);
}

double NNfunction_sb_cLdR::synapse0x1626d10() {
   return (neuron0x1620f60()*0.469817);
}

double NNfunction_sb_cLdR::synapse0x1626d50() {
   return (neuron0x16212a0()*0.20812);
}

double NNfunction_sb_cLdR::synapse0x1626d90() {
   return (neuron0x16215e0()*-0.174451);
}

double NNfunction_sb_cLdR::synapse0x1626dd0() {
   return (neuron0x1621920()*0.0287934);
}

double NNfunction_sb_cLdR::synapse0x1626e10() {
   return (neuron0x1621c60()*-1.53378);
}

double NNfunction_sb_cLdR::synapse0x1626e50() {
   return (neuron0x1621fa0()*0.120973);
}

double NNfunction_sb_cLdR::synapse0x1626e90() {
   return (neuron0x16222e0()*0.0511471);
}

double NNfunction_sb_cLdR::synapse0x1626ed0() {
   return (neuron0x1622620()*0.211917);
}

double NNfunction_sb_cLdR::synapse0x1626960() {
   return (neuron0x1622960()*-0.065364);
}

double NNfunction_sb_cLdR::synapse0x16269a0() {
   return (neuron0x1622ec0()*-0.506381);
}

double NNfunction_sb_cLdR::synapse0x1627020() {
   return (neuron0x16230e0()*0.236362);
}

double NNfunction_sb_cLdR::synapse0x1627060() {
   return (neuron0x1623420()*0.259153);
}

double NNfunction_sb_cLdR::synapse0x16270a0() {
   return (neuron0x1623760()*-0.0624471);
}

double NNfunction_sb_cLdR::synapse0x16270e0() {
   return (neuron0x1623aa0()*-0.111863);
}

double NNfunction_sb_cLdR::synapse0x1627120() {
   return (neuron0x1623de0()*-0.282082);
}

double NNfunction_sb_cLdR::synapse0x1627160() {
   return (neuron0x1624120()*0.0408008);
}

double NNfunction_sb_cLdR::synapse0x16274e0() {
   return (neuron0x161f560()*-0.074749);
}

double NNfunction_sb_cLdR::synapse0x1627520() {
   return (neuron0x161f8a0()*0.129325);
}

double NNfunction_sb_cLdR::synapse0x1627560() {
   return (neuron0x161fbe0()*-0.25601);
}

double NNfunction_sb_cLdR::synapse0x16275a0() {
   return (neuron0x161ff20()*3.26349);
}

double NNfunction_sb_cLdR::synapse0x16275e0() {
   return (neuron0x1620260()*-0.0982765);
}

double NNfunction_sb_cLdR::synapse0x1627620() {
   return (neuron0x16205a0()*0.00817177);
}

double NNfunction_sb_cLdR::synapse0x1627660() {
   return (neuron0x16208e0()*-0.150566);
}

double NNfunction_sb_cLdR::synapse0x16276a0() {
   return (neuron0x1620c20()*0.0183107);
}

double NNfunction_sb_cLdR::synapse0x16276e0() {
   return (neuron0x1620f60()*-0.0376374);
}

double NNfunction_sb_cLdR::synapse0x13dee30() {
   return (neuron0x16212a0()*-0.208551);
}

double NNfunction_sb_cLdR::synapse0x13dee70() {
   return (neuron0x16215e0()*-0.0546878);
}

double NNfunction_sb_cLdR::synapse0x13deeb0() {
   return (neuron0x1621920()*-0.182948);
}

double NNfunction_sb_cLdR::synapse0x13deef0() {
   return (neuron0x1621c60()*0.11713);
}

double NNfunction_sb_cLdR::synapse0x13def30() {
   return (neuron0x1621fa0()*0.423049);
}

double NNfunction_sb_cLdR::synapse0x13def70() {
   return (neuron0x16222e0()*0.195544);
}

double NNfunction_sb_cLdR::synapse0x13defb0() {
   return (neuron0x1622620()*-0.097645);
}

double NNfunction_sb_cLdR::synapse0x1627330() {
   return (neuron0x1622960()*-0.19149);
}

double NNfunction_sb_cLdR::synapse0x1627370() {
   return (neuron0x1622ec0()*-0.124903);
}

double NNfunction_sb_cLdR::synapse0x13df100() {
   return (neuron0x16230e0()*-0.0523451);
}

double NNfunction_sb_cLdR::synapse0x13df140() {
   return (neuron0x1623420()*0.0917529);
}

double NNfunction_sb_cLdR::synapse0x13df180() {
   return (neuron0x1623760()*-0.0334902);
}

double NNfunction_sb_cLdR::synapse0x13df1c0() {
   return (neuron0x1623aa0()*0.358731);
}

double NNfunction_sb_cLdR::synapse0x13df200() {
   return (neuron0x1623de0()*-0.147667);
}

double NNfunction_sb_cLdR::synapse0x1627f30() {
   return (neuron0x1624120()*0.037676);
}

double NNfunction_sb_cLdR::synapse0x16282b0() {
   return (neuron0x161f560()*-0.00629574);
}

double NNfunction_sb_cLdR::synapse0x16282f0() {
   return (neuron0x161f8a0()*-0.00652419);
}

double NNfunction_sb_cLdR::synapse0x1628330() {
   return (neuron0x161fbe0()*0.0121031);
}

double NNfunction_sb_cLdR::synapse0x1628370() {
   return (neuron0x161ff20()*-1.84716);
}

double NNfunction_sb_cLdR::synapse0x16283b0() {
   return (neuron0x1620260()*0.00454041);
}

double NNfunction_sb_cLdR::synapse0x16283f0() {
   return (neuron0x16205a0()*0.0126824);
}

double NNfunction_sb_cLdR::synapse0x1628430() {
   return (neuron0x16208e0()*0.0220009);
}

double NNfunction_sb_cLdR::synapse0x1628470() {
   return (neuron0x1620c20()*-0.0137125);
}

double NNfunction_sb_cLdR::synapse0x16284b0() {
   return (neuron0x1620f60()*-0.0191641);
}

double NNfunction_sb_cLdR::synapse0x16284f0() {
   return (neuron0x16212a0()*0.00912763);
}

double NNfunction_sb_cLdR::synapse0x1628530() {
   return (neuron0x16215e0()*-0.0101254);
}

double NNfunction_sb_cLdR::synapse0x1628570() {
   return (neuron0x1621920()*0.00364857);
}

double NNfunction_sb_cLdR::synapse0x16285b0() {
   return (neuron0x1621c60()*0.128465);
}

double NNfunction_sb_cLdR::synapse0x16285f0() {
   return (neuron0x1621fa0()*0.0137086);
}

double NNfunction_sb_cLdR::synapse0x1628630() {
   return (neuron0x16222e0()*-0.0155782);
}

double NNfunction_sb_cLdR::synapse0x1628670() {
   return (neuron0x1622620()*0.0301828);
}

double NNfunction_sb_cLdR::synapse0x1628100() {
   return (neuron0x1622960()*0.0106398);
}

double NNfunction_sb_cLdR::synapse0x1628140() {
   return (neuron0x1622ec0()*0.120202);
}

double NNfunction_sb_cLdR::synapse0x16287c0() {
   return (neuron0x16230e0()*0.0133167);
}

double NNfunction_sb_cLdR::synapse0x1628800() {
   return (neuron0x1623420()*0.0100678);
}

double NNfunction_sb_cLdR::synapse0x1628840() {
   return (neuron0x1623760()*-0.0051428);
}

double NNfunction_sb_cLdR::synapse0x1628880() {
   return (neuron0x1623aa0()*-0.000593183);
}

double NNfunction_sb_cLdR::synapse0x16288c0() {
   return (neuron0x1623de0()*-0.00399734);
}

double NNfunction_sb_cLdR::synapse0x1628900() {
   return (neuron0x1624120()*0.000476141);
}

double NNfunction_sb_cLdR::synapse0x1628c80() {
   return (neuron0x161f560()*-0.0150657);
}

double NNfunction_sb_cLdR::synapse0x1628cc0() {
   return (neuron0x161f8a0()*-0.0319096);
}

double NNfunction_sb_cLdR::synapse0x1628d00() {
   return (neuron0x161fbe0()*0.0092617);
}

double NNfunction_sb_cLdR::synapse0x1628d40() {
   return (neuron0x161ff20()*0.373851);
}

double NNfunction_sb_cLdR::synapse0x1628d80() {
   return (neuron0x1620260()*-0.0168795);
}

double NNfunction_sb_cLdR::synapse0x1628dc0() {
   return (neuron0x16205a0()*-0.00431946);
}

double NNfunction_sb_cLdR::synapse0x1628e00() {
   return (neuron0x16208e0()*0.0172117);
}

double NNfunction_sb_cLdR::synapse0x1628e40() {
   return (neuron0x1620c20()*-0.00117566);
}

double NNfunction_sb_cLdR::synapse0x1628e80() {
   return (neuron0x1620f60()*-0.0109206);
}

double NNfunction_sb_cLdR::synapse0x1628ec0() {
   return (neuron0x16212a0()*0.00271537);
}

double NNfunction_sb_cLdR::synapse0x1628f00() {
   return (neuron0x16215e0()*0.00483924);
}

double NNfunction_sb_cLdR::synapse0x1628f40() {
   return (neuron0x1621920()*0.000940231);
}

double NNfunction_sb_cLdR::synapse0x1628f80() {
   return (neuron0x1621c60()*-0.779253);
}

double NNfunction_sb_cLdR::synapse0x1628fc0() {
   return (neuron0x1621fa0()*0.00616829);
}

double NNfunction_sb_cLdR::synapse0x1629000() {
   return (neuron0x16222e0()*0.0274098);
}

double NNfunction_sb_cLdR::synapse0x1629040() {
   return (neuron0x1622620()*-0.00330545);
}

double NNfunction_sb_cLdR::synapse0x1628ad0() {
   return (neuron0x1622960()*-0.0471459);
}

double NNfunction_sb_cLdR::synapse0x1628b10() {
   return (neuron0x1622ec0()*-0.812001);
}

double NNfunction_sb_cLdR::synapse0x1629190() {
   return (neuron0x16230e0()*0.00530958);
}

double NNfunction_sb_cLdR::synapse0x16291d0() {
   return (neuron0x1623420()*0.00556634);
}

double NNfunction_sb_cLdR::synapse0x1629210() {
   return (neuron0x1623760()*-0.0101845);
}

double NNfunction_sb_cLdR::synapse0x1629250() {
   return (neuron0x1623aa0()*0.0281008);
}

double NNfunction_sb_cLdR::synapse0x1629290() {
   return (neuron0x1623de0()*-0.00192766);
}

double NNfunction_sb_cLdR::synapse0x16292d0() {
   return (neuron0x1624120()*0.0252222);
}

double NNfunction_sb_cLdR::synapse0x1622db0() {
   return (neuron0x161f560()*0.340643);
}

double NNfunction_sb_cLdR::synapse0x1622df0() {
   return (neuron0x161f8a0()*0.137992);
}

double NNfunction_sb_cLdR::synapse0x1622e30() {
   return (neuron0x161fbe0()*-1.01707);
}

double NNfunction_sb_cLdR::synapse0x1622e70() {
   return (neuron0x161ff20()*0.0446142);
}

double NNfunction_sb_cLdR::synapse0x1629860() {
   return (neuron0x1620260()*-0.349413);
}

double NNfunction_sb_cLdR::synapse0x16298a0() {
   return (neuron0x16205a0()*0.452955);
}

double NNfunction_sb_cLdR::synapse0x16298e0() {
   return (neuron0x16208e0()*-0.70967);
}

double NNfunction_sb_cLdR::synapse0x1629920() {
   return (neuron0x1620c20()*0.457232);
}

double NNfunction_sb_cLdR::synapse0x1629960() {
   return (neuron0x1620f60()*-0.0560294);
}

double NNfunction_sb_cLdR::synapse0x16299a0() {
   return (neuron0x16212a0()*-0.586753);
}

double NNfunction_sb_cLdR::synapse0x16299e0() {
   return (neuron0x16215e0()*0.696032);
}

double NNfunction_sb_cLdR::synapse0x1629a20() {
   return (neuron0x1621920()*0.69663);
}

double NNfunction_sb_cLdR::synapse0x1629a60() {
   return (neuron0x1621c60()*-0.602096);
}

double NNfunction_sb_cLdR::synapse0x1629aa0() {
   return (neuron0x1621fa0()*0.0239158);
}

double NNfunction_sb_cLdR::synapse0x1629ae0() {
   return (neuron0x16222e0()*-0.00122023);
}

double NNfunction_sb_cLdR::synapse0x1629b20() {
   return (neuron0x1622620()*0.963295);
}

double NNfunction_sb_cLdR::synapse0x16294a0() {
   return (neuron0x1622960()*-0.79903);
}

double NNfunction_sb_cLdR::synapse0x16294e0() {
   return (neuron0x1622ec0()*-0.294825);
}

double NNfunction_sb_cLdR::synapse0x1629c70() {
   return (neuron0x16230e0()*0.760549);
}

double NNfunction_sb_cLdR::synapse0x1629cb0() {
   return (neuron0x1623420()*-0.0641645);
}

double NNfunction_sb_cLdR::synapse0x1629cf0() {
   return (neuron0x1623760()*0.0765467);
}

double NNfunction_sb_cLdR::synapse0x1629d30() {
   return (neuron0x1623aa0()*0.0234199);
}

double NNfunction_sb_cLdR::synapse0x1629d70() {
   return (neuron0x1623de0()*-0.0808085);
}

double NNfunction_sb_cLdR::synapse0x1629db0() {
   return (neuron0x1624120()*0.444126);
}

double NNfunction_sb_cLdR::synapse0x162a130() {
   return (neuron0x161f560()*-0.0158921);
}

double NNfunction_sb_cLdR::synapse0x162a170() {
   return (neuron0x161f8a0()*0.0213725);
}

double NNfunction_sb_cLdR::synapse0x162a1b0() {
   return (neuron0x161fbe0()*0.000653513);
}

double NNfunction_sb_cLdR::synapse0x162a1f0() {
   return (neuron0x161ff20()*1.50604);
}

double NNfunction_sb_cLdR::synapse0x162a230() {
   return (neuron0x1620260()*-0.0224445);
}

double NNfunction_sb_cLdR::synapse0x162a270() {
   return (neuron0x16205a0()*-0.0362445);
}

double NNfunction_sb_cLdR::synapse0x162a2b0() {
   return (neuron0x16208e0()*-0.00737484);
}

double NNfunction_sb_cLdR::synapse0x162a2f0() {
   return (neuron0x1620c20()*0.0189061);
}

double NNfunction_sb_cLdR::synapse0x162a330() {
   return (neuron0x1620f60()*-0.038448);
}

double NNfunction_sb_cLdR::synapse0x162a370() {
   return (neuron0x16212a0()*0.0568661);
}

double NNfunction_sb_cLdR::synapse0x162a3b0() {
   return (neuron0x16215e0()*0.00829702);
}

double NNfunction_sb_cLdR::synapse0x162a3f0() {
   return (neuron0x1621920()*-0.0821273);
}

double NNfunction_sb_cLdR::synapse0x162a430() {
   return (neuron0x1621c60()*-0.632354);
}

double NNfunction_sb_cLdR::synapse0x162a470() {
   return (neuron0x1621fa0()*-0.0318659);
}

double NNfunction_sb_cLdR::synapse0x162a4b0() {
   return (neuron0x16222e0()*0.00293469);
}

double NNfunction_sb_cLdR::synapse0x162a4f0() {
   return (neuron0x1622620()*-0.0501259);
}

double NNfunction_sb_cLdR::synapse0x1629f80() {
   return (neuron0x1622960()*-0.0243163);
}

double NNfunction_sb_cLdR::synapse0x1629fc0() {
   return (neuron0x1622ec0()*0.371288);
}

double NNfunction_sb_cLdR::synapse0x162a640() {
   return (neuron0x16230e0()*-0.0177309);
}

double NNfunction_sb_cLdR::synapse0x162a680() {
   return (neuron0x1623420()*0.0156525);
}

double NNfunction_sb_cLdR::synapse0x162a6c0() {
   return (neuron0x1623760()*-0.000713071);
}

double NNfunction_sb_cLdR::synapse0x162a700() {
   return (neuron0x1623aa0()*0.0318442);
}

double NNfunction_sb_cLdR::synapse0x162a740() {
   return (neuron0x1623de0()*-0.0173723);
}

double NNfunction_sb_cLdR::synapse0x162a780() {
   return (neuron0x1624120()*0.0573142);
}

double NNfunction_sb_cLdR::synapse0x162ab00() {
   return (neuron0x161f560()*-0.0845674);
}

double NNfunction_sb_cLdR::synapse0x162ab40() {
   return (neuron0x161f8a0()*0.266027);
}

double NNfunction_sb_cLdR::synapse0x162ab80() {
   return (neuron0x161fbe0()*0.334939);
}

double NNfunction_sb_cLdR::synapse0x162abc0() {
   return (neuron0x161ff20()*0.358956);
}

double NNfunction_sb_cLdR::synapse0x162ac00() {
   return (neuron0x1620260()*0.24186);
}

double NNfunction_sb_cLdR::synapse0x162ac40() {
   return (neuron0x16205a0()*0.0351488);
}

double NNfunction_sb_cLdR::synapse0x162ac80() {
   return (neuron0x16208e0()*0.614092);
}

double NNfunction_sb_cLdR::synapse0x162acc0() {
   return (neuron0x1620c20()*0.874987);
}

double NNfunction_sb_cLdR::synapse0x162ad00() {
   return (neuron0x1620f60()*-0.0510922);
}

double NNfunction_sb_cLdR::synapse0x162ad40() {
   return (neuron0x16212a0()*-0.0577163);
}

double NNfunction_sb_cLdR::synapse0x162ad80() {
   return (neuron0x16215e0()*0.14561);
}

double NNfunction_sb_cLdR::synapse0x162adc0() {
   return (neuron0x1621920()*0.0864475);
}

double NNfunction_sb_cLdR::synapse0x162ae00() {
   return (neuron0x1621c60()*-0.309067);
}

double NNfunction_sb_cLdR::synapse0x162ae40() {
   return (neuron0x1621fa0()*0.0230909);
}

double NNfunction_sb_cLdR::synapse0x162ae80() {
   return (neuron0x16222e0()*0.371216);
}

double NNfunction_sb_cLdR::synapse0x162aec0() {
   return (neuron0x1622620()*0.247629);
}

double NNfunction_sb_cLdR::synapse0x162a950() {
   return (neuron0x1622960()*-0.0296617);
}

double NNfunction_sb_cLdR::synapse0x162a990() {
   return (neuron0x1622ec0()*-0.0287068);
}

double NNfunction_sb_cLdR::synapse0x1627720() {
   return (neuron0x16230e0()*-0.0629763);
}

double NNfunction_sb_cLdR::synapse0x1627760() {
   return (neuron0x1623420()*-0.203821);
}

double NNfunction_sb_cLdR::synapse0x16277a0() {
   return (neuron0x1623760()*-0.0833819);
}

double NNfunction_sb_cLdR::synapse0x16277e0() {
   return (neuron0x1623aa0()*0.0484424);
}

double NNfunction_sb_cLdR::synapse0x1627820() {
   return (neuron0x1623de0()*0.265552);
}

double NNfunction_sb_cLdR::synapse0x1627860() {
   return (neuron0x1624120()*-0.20861);
}

double NNfunction_sb_cLdR::synapse0x1627be0() {
   return (neuron0x161f560()*0.177051);
}

double NNfunction_sb_cLdR::synapse0x1627c20() {
   return (neuron0x161f8a0()*-0.218294);
}

double NNfunction_sb_cLdR::synapse0x1627c60() {
   return (neuron0x161fbe0()*0.0542716);
}

double NNfunction_sb_cLdR::synapse0x1627ca0() {
   return (neuron0x161ff20()*-0.41623);
}

double NNfunction_sb_cLdR::synapse0x1627ce0() {
   return (neuron0x1620260()*-0.0553211);
}

double NNfunction_sb_cLdR::synapse0x1627d20() {
   return (neuron0x16205a0()*-0.244741);
}

double NNfunction_sb_cLdR::synapse0x1627d60() {
   return (neuron0x16208e0()*-0.682114);
}

double NNfunction_sb_cLdR::synapse0x1627da0() {
   return (neuron0x1620c20()*-0.300169);
}

double NNfunction_sb_cLdR::synapse0x1627de0() {
   return (neuron0x1620f60()*0.442787);
}

double NNfunction_sb_cLdR::synapse0x1627e20() {
   return (neuron0x16212a0()*0.538818);
}

double NNfunction_sb_cLdR::synapse0x1627e60() {
   return (neuron0x16215e0()*-0.0650999);
}

double NNfunction_sb_cLdR::synapse0x1627ea0() {
   return (neuron0x1621920()*-0.157022);
}

double NNfunction_sb_cLdR::synapse0x1627ee0() {
   return (neuron0x1621c60()*0.336442);
}

double NNfunction_sb_cLdR::synapse0x162c020() {
   return (neuron0x1621fa0()*-0.231834);
}

double NNfunction_sb_cLdR::synapse0x162c060() {
   return (neuron0x16222e0()*-0.313936);
}

double NNfunction_sb_cLdR::synapse0x162c0a0() {
   return (neuron0x1622620()*-0.711008);
}

double NNfunction_sb_cLdR::synapse0x1627a30() {
   return (neuron0x1622960()*-0.00416368);
}

double NNfunction_sb_cLdR::synapse0x1627a70() {
   return (neuron0x1622ec0()*0.159274);
}

double NNfunction_sb_cLdR::synapse0x162c1f0() {
   return (neuron0x16230e0()*-0.899337);
}

double NNfunction_sb_cLdR::synapse0x162c230() {
   return (neuron0x1623420()*0.811363);
}

double NNfunction_sb_cLdR::synapse0x162c270() {
   return (neuron0x1623760()*0.198608);
}

double NNfunction_sb_cLdR::synapse0x162c2b0() {
   return (neuron0x1623aa0()*0.141135);
}

double NNfunction_sb_cLdR::synapse0x162c2f0() {
   return (neuron0x1623de0()*0.233425);
}

double NNfunction_sb_cLdR::synapse0x162c330() {
   return (neuron0x1624120()*0.127893);
}

double NNfunction_sb_cLdR::synapse0x162c6b0() {
   return (neuron0x161f560()*0.124649);
}

double NNfunction_sb_cLdR::synapse0x162c6f0() {
   return (neuron0x161f8a0()*0.441632);
}

double NNfunction_sb_cLdR::synapse0x162c730() {
   return (neuron0x161fbe0()*0.0765155);
}

double NNfunction_sb_cLdR::synapse0x162c770() {
   return (neuron0x161ff20()*-0.281927);
}

double NNfunction_sb_cLdR::synapse0x162c7b0() {
   return (neuron0x1620260()*-0.197411);
}

double NNfunction_sb_cLdR::synapse0x162c7f0() {
   return (neuron0x16205a0()*-0.110547);
}

double NNfunction_sb_cLdR::synapse0x162c830() {
   return (neuron0x16208e0()*0.323159);
}

double NNfunction_sb_cLdR::synapse0x162c870() {
   return (neuron0x1620c20()*0.840133);
}

double NNfunction_sb_cLdR::synapse0x162c8b0() {
   return (neuron0x1620f60()*-0.866891);
}

double NNfunction_sb_cLdR::synapse0x162c8f0() {
   return (neuron0x16212a0()*-0.472395);
}

double NNfunction_sb_cLdR::synapse0x162c930() {
   return (neuron0x16215e0()*0.16007);
}

double NNfunction_sb_cLdR::synapse0x162c970() {
   return (neuron0x1621920()*0.286243);
}

double NNfunction_sb_cLdR::synapse0x162c9b0() {
   return (neuron0x1621c60()*-0.348235);
}

double NNfunction_sb_cLdR::synapse0x162c9f0() {
   return (neuron0x1621fa0()*0.742717);
}

double NNfunction_sb_cLdR::synapse0x162ca30() {
   return (neuron0x16222e0()*0.0401652);
}

double NNfunction_sb_cLdR::synapse0x162ca70() {
   return (neuron0x1622620()*0.0926494);
}

double NNfunction_sb_cLdR::synapse0x162c500() {
   return (neuron0x1622960()*-0.787488);
}

double NNfunction_sb_cLdR::synapse0x162c540() {
   return (neuron0x1622ec0()*-0.44462);
}

double NNfunction_sb_cLdR::synapse0x162cbc0() {
   return (neuron0x16230e0()*0.393913);
}

double NNfunction_sb_cLdR::synapse0x162cc00() {
   return (neuron0x1623420()*0.0512206);
}

double NNfunction_sb_cLdR::synapse0x162cc40() {
   return (neuron0x1623760()*0.410331);
}

double NNfunction_sb_cLdR::synapse0x162cc80() {
   return (neuron0x1623aa0()*0.123538);
}

double NNfunction_sb_cLdR::synapse0x162ccc0() {
   return (neuron0x1623de0()*-0.429411);
}

double NNfunction_sb_cLdR::synapse0x162cd00() {
   return (neuron0x1624120()*-0.162218);
}

double NNfunction_sb_cLdR::synapse0x162d080() {
   return (neuron0x161f560()*-0.227871);
}

double NNfunction_sb_cLdR::synapse0x162d0c0() {
   return (neuron0x161f8a0()*-0.117234);
}

double NNfunction_sb_cLdR::synapse0x162d100() {
   return (neuron0x161fbe0()*0.410207);
}

double NNfunction_sb_cLdR::synapse0x162d140() {
   return (neuron0x161ff20()*1.24018);
}

double NNfunction_sb_cLdR::synapse0x162d180() {
   return (neuron0x1620260()*0.0302968);
}

double NNfunction_sb_cLdR::synapse0x162d1c0() {
   return (neuron0x16205a0()*0.00089997);
}

double NNfunction_sb_cLdR::synapse0x162d200() {
   return (neuron0x16208e0()*0.298862);
}

double NNfunction_sb_cLdR::synapse0x162d240() {
   return (neuron0x1620c20()*-0.407495);
}

double NNfunction_sb_cLdR::synapse0x162d280() {
   return (neuron0x1620f60()*0.0320028);
}

double NNfunction_sb_cLdR::synapse0x162d2c0() {
   return (neuron0x16212a0()*0.0581976);
}

double NNfunction_sb_cLdR::synapse0x162d300() {
   return (neuron0x16215e0()*0.136638);
}

double NNfunction_sb_cLdR::synapse0x162d340() {
   return (neuron0x1621920()*0.0215412);
}

double NNfunction_sb_cLdR::synapse0x162d380() {
   return (neuron0x1621c60()*0.298558);
}

double NNfunction_sb_cLdR::synapse0x162d3c0() {
   return (neuron0x1621fa0()*-0.0373496);
}

double NNfunction_sb_cLdR::synapse0x162d400() {
   return (neuron0x16222e0()*-0.00180589);
}

double NNfunction_sb_cLdR::synapse0x162d440() {
   return (neuron0x1622620()*0.247257);
}

double NNfunction_sb_cLdR::synapse0x162ced0() {
   return (neuron0x1622960()*-0.454952);
}

double NNfunction_sb_cLdR::synapse0x162cf10() {
   return (neuron0x1622ec0()*0.279641);
}

double NNfunction_sb_cLdR::synapse0x162d590() {
   return (neuron0x16230e0()*0.154469);
}

double NNfunction_sb_cLdR::synapse0x162d5d0() {
   return (neuron0x1623420()*0.194969);
}

double NNfunction_sb_cLdR::synapse0x162d610() {
   return (neuron0x1623760()*0.110132);
}

double NNfunction_sb_cLdR::synapse0x162d650() {
   return (neuron0x1623aa0()*-0.0266488);
}

double NNfunction_sb_cLdR::synapse0x162d690() {
   return (neuron0x1623de0()*0.00624662);
}

double NNfunction_sb_cLdR::synapse0x162d6d0() {
   return (neuron0x1624120()*-0.0882764);
}

double NNfunction_sb_cLdR::synapse0x162da50() {
   return (neuron0x161f560()*0.0651557);
}

double NNfunction_sb_cLdR::synapse0x162da90() {
   return (neuron0x161f8a0()*0.00230277);
}

double NNfunction_sb_cLdR::synapse0x162dad0() {
   return (neuron0x161fbe0()*0.0572358);
}

double NNfunction_sb_cLdR::synapse0x162db10() {
   return (neuron0x161ff20()*-0.46326);
}

double NNfunction_sb_cLdR::synapse0x162db50() {
   return (neuron0x1620260()*-0.00782374);
}

double NNfunction_sb_cLdR::synapse0x162db90() {
   return (neuron0x16205a0()*0.0687476);
}

double NNfunction_sb_cLdR::synapse0x162dbd0() {
   return (neuron0x16208e0()*-0.0376025);
}

double NNfunction_sb_cLdR::synapse0x162dc10() {
   return (neuron0x1620c20()*-0.0619436);
}

double NNfunction_sb_cLdR::synapse0x162dc50() {
   return (neuron0x1620f60()*0.165479);
}

double NNfunction_sb_cLdR::synapse0x162dc90() {
   return (neuron0x16212a0()*0.0087933);
}

double NNfunction_sb_cLdR::synapse0x162dcd0() {
   return (neuron0x16215e0()*-0.233534);
}

double NNfunction_sb_cLdR::synapse0x162dd10() {
   return (neuron0x1621920()*-0.0415197);
}

double NNfunction_sb_cLdR::synapse0x162dd50() {
   return (neuron0x1621c60()*1.81909);
}

double NNfunction_sb_cLdR::synapse0x162dd90() {
   return (neuron0x1621fa0()*-0.0649241);
}

double NNfunction_sb_cLdR::synapse0x162ddd0() {
   return (neuron0x16222e0()*-0.0674846);
}

double NNfunction_sb_cLdR::synapse0x162de10() {
   return (neuron0x1622620()*0.101556);
}

double NNfunction_sb_cLdR::synapse0x162d8a0() {
   return (neuron0x1622960()*0.0943108);
}

double NNfunction_sb_cLdR::synapse0x162d8e0() {
   return (neuron0x1622ec0()*0.292131);
}

double NNfunction_sb_cLdR::synapse0x162df60() {
   return (neuron0x16230e0()*-0.0435084);
}

double NNfunction_sb_cLdR::synapse0x162dfa0() {
   return (neuron0x1623420()*0.0291956);
}

double NNfunction_sb_cLdR::synapse0x162dfe0() {
   return (neuron0x1623760()*0.00159043);
}

double NNfunction_sb_cLdR::synapse0x162e020() {
   return (neuron0x1623aa0()*-0.0913176);
}

double NNfunction_sb_cLdR::synapse0x162e060() {
   return (neuron0x1623de0()*-0.0879794);
}

double NNfunction_sb_cLdR::synapse0x162e0a0() {
   return (neuron0x1624120()*-0.101809);
}

double NNfunction_sb_cLdR::synapse0x162e420() {
   return (neuron0x161f560()*-0.00954242);
}

double NNfunction_sb_cLdR::synapse0x161f780() {
   return (neuron0x161f8a0()*-0.0462837);
}

double NNfunction_sb_cLdR::synapse0x161f7c0() {
   return (neuron0x161fbe0()*0.0448471);
}

double NNfunction_sb_cLdR::synapse0x161fac0() {
   return (neuron0x161ff20()*2.68689);
}

double NNfunction_sb_cLdR::synapse0x161fb00() {
   return (neuron0x1620260()*-0.0101366);
}

double NNfunction_sb_cLdR::synapse0x161fe00() {
   return (neuron0x16205a0()*-0.0132714);
}

double NNfunction_sb_cLdR::synapse0x161fe40() {
   return (neuron0x16208e0()*-0.0362343);
}

double NNfunction_sb_cLdR::synapse0x1620140() {
   return (neuron0x1620c20()*-0.00145021);
}

double NNfunction_sb_cLdR::synapse0x1620180() {
   return (neuron0x1620f60()*-0.00682741);
}

double NNfunction_sb_cLdR::synapse0x1620480() {
   return (neuron0x16212a0()*0.0211841);
}

double NNfunction_sb_cLdR::synapse0x16204c0() {
   return (neuron0x16215e0()*0.0118187);
}

double NNfunction_sb_cLdR::synapse0x16207c0() {
   return (neuron0x1621920()*-0.0194834);
}

double NNfunction_sb_cLdR::synapse0x1620800() {
   return (neuron0x1621c60()*0.121562);
}

double NNfunction_sb_cLdR::synapse0x1620b00() {
   return (neuron0x1621fa0()*-0.00938097);
}

double NNfunction_sb_cLdR::synapse0x1620b40() {
   return (neuron0x16222e0()*-0.00863553);
}

double NNfunction_sb_cLdR::synapse0x1620e40() {
   return (neuron0x1622620()*-0.0444782);
}

double NNfunction_sb_cLdR::synapse0x1620e80() {
   return (neuron0x1622960()*0.0178229);
}

double NNfunction_sb_cLdR::synapse0x1621180() {
   return (neuron0x1622ec0()*0.360899);
}

double NNfunction_sb_cLdR::synapse0x16211c0() {
   return (neuron0x16230e0()*0.0280048);
}

double NNfunction_sb_cLdR::synapse0x16214c0() {
   return (neuron0x1623420()*-0.0124686);
}

double NNfunction_sb_cLdR::synapse0x1621500() {
   return (neuron0x1623760()*0.0166413);
}

double NNfunction_sb_cLdR::synapse0x1621800() {
   return (neuron0x1623aa0()*0.00321098);
}

double NNfunction_sb_cLdR::synapse0x1621840() {
   return (neuron0x1623de0()*0.0149103);
}

double NNfunction_sb_cLdR::synapse0x1621b40() {
   return (neuron0x1624120()*0.0215183);
}

double NNfunction_sb_cLdR::synapse0x1621b80() {
   return (neuron0x161f560()*0.381888);
}

double NNfunction_sb_cLdR::synapse0x1622840() {
   return (neuron0x161f8a0()*-0.293536);
}

double NNfunction_sb_cLdR::synapse0x1622880() {
   return (neuron0x161fbe0()*0.397809);
}

double NNfunction_sb_cLdR::synapse0x162e270() {
   return (neuron0x161ff20()*0.249819);
}

double NNfunction_sb_cLdR::synapse0x162e2b0() {
   return (neuron0x1620260()*-0.427886);
}

double NNfunction_sb_cLdR::synapse0x1622b80() {
   return (neuron0x16205a0()*-0.345308);
}

double NNfunction_sb_cLdR::synapse0x1622bc0() {
   return (neuron0x16208e0()*-0.342171);
}

double NNfunction_sb_cLdR::synapse0x13d0b50() {
   return (neuron0x1620c20()*-0.292288);
}

double NNfunction_sb_cLdR::synapse0x13d0b90() {
   return (neuron0x1620f60()*-0.989473);
}

double NNfunction_sb_cLdR::synapse0x1623300() {
   return (neuron0x16212a0()*0.195508);
}

double NNfunction_sb_cLdR::synapse0x1623340() {
   return (neuron0x16215e0()*0.0954647);
}

double NNfunction_sb_cLdR::synapse0x1623640() {
   return (neuron0x1621920()*0.0501732);
}

double NNfunction_sb_cLdR::synapse0x1623680() {
   return (neuron0x1621c60()*-0.1313);
}

double NNfunction_sb_cLdR::synapse0x1623980() {
   return (neuron0x1621fa0()*-0.104775);
}

double NNfunction_sb_cLdR::synapse0x16239c0() {
   return (neuron0x16222e0()*-0.0844599);
}

double NNfunction_sb_cLdR::synapse0x1623cc0() {
   return (neuron0x1622620()*-0.328404);
}

double NNfunction_sb_cLdR::synapse0x1623d00() {
   return (neuron0x1622960()*-0.068656);
}

double NNfunction_sb_cLdR::synapse0x1624000() {
   return (neuron0x1622ec0()*-1.14498);
}

double NNfunction_sb_cLdR::synapse0x1624040() {
   return (neuron0x16230e0()*-0.361747);
}

double NNfunction_sb_cLdR::synapse0x1624340() {
   return (neuron0x1623420()*-0.216898);
}

double NNfunction_sb_cLdR::synapse0x1624380() {
   return (neuron0x1623760()*-0.807779);
}

double NNfunction_sb_cLdR::synapse0x1621e80() {
   return (neuron0x1623aa0()*-0.255793);
}

double NNfunction_sb_cLdR::synapse0x1621ec0() {
   return (neuron0x1623de0()*-0.110403);
}

double NNfunction_sb_cLdR::synapse0x1630190() {
   return (neuron0x1624120()*0.251858);
}

double NNfunction_sb_cLdR::synapse0x1630510() {
   return (neuron0x161f560()*0.481753);
}

double NNfunction_sb_cLdR::synapse0x1630550() {
   return (neuron0x161f8a0()*0.461575);
}

double NNfunction_sb_cLdR::synapse0x1630590() {
   return (neuron0x161fbe0()*0.187589);
}

double NNfunction_sb_cLdR::synapse0x16305d0() {
   return (neuron0x161ff20()*-0.0260256);
}

double NNfunction_sb_cLdR::synapse0x1630610() {
   return (neuron0x1620260()*0.29367);
}

double NNfunction_sb_cLdR::synapse0x1630650() {
   return (neuron0x16205a0()*0.440169);
}

double NNfunction_sb_cLdR::synapse0x1630690() {
   return (neuron0x16208e0()*0.063371);
}

double NNfunction_sb_cLdR::synapse0x16306d0() {
   return (neuron0x1620c20()*-0.155062);
}

double NNfunction_sb_cLdR::synapse0x1630710() {
   return (neuron0x1620f60()*-0.419753);
}

double NNfunction_sb_cLdR::synapse0x1630750() {
   return (neuron0x16212a0()*0.4188);
}

double NNfunction_sb_cLdR::synapse0x1630790() {
   return (neuron0x16215e0()*0.4882);
}

double NNfunction_sb_cLdR::synapse0x16307d0() {
   return (neuron0x1621920()*0.101185);
}

double NNfunction_sb_cLdR::synapse0x1630810() {
   return (neuron0x1621c60()*-0.293576);
}

double NNfunction_sb_cLdR::synapse0x1630850() {
   return (neuron0x1621fa0()*-0.182123);
}

double NNfunction_sb_cLdR::synapse0x1630890() {
   return (neuron0x16222e0()*-0.0334476);
}

double NNfunction_sb_cLdR::synapse0x16308d0() {
   return (neuron0x1622620()*0.922671);
}

double NNfunction_sb_cLdR::synapse0x1630360() {
   return (neuron0x1622960()*-0.0742425);
}

double NNfunction_sb_cLdR::synapse0x16303a0() {
   return (neuron0x1622ec0()*-0.333561);
}

double NNfunction_sb_cLdR::synapse0x1630a20() {
   return (neuron0x16230e0()*0.364918);
}

double NNfunction_sb_cLdR::synapse0x1630a60() {
   return (neuron0x1623420()*-0.838738);
}

double NNfunction_sb_cLdR::synapse0x1630aa0() {
   return (neuron0x1623760()*1.15379);
}

double NNfunction_sb_cLdR::synapse0x1630ae0() {
   return (neuron0x1623aa0()*0.544638);
}

double NNfunction_sb_cLdR::synapse0x1630b20() {
   return (neuron0x1623de0()*-0.979196);
}

double NNfunction_sb_cLdR::synapse0x1630b60() {
   return (neuron0x1624120()*0.352737);
}

double NNfunction_sb_cLdR::synapse0x1630ee0() {
   return (neuron0x161f560()*0.276613);
}

double NNfunction_sb_cLdR::synapse0x1630f20() {
   return (neuron0x161f8a0()*0.0523043);
}

double NNfunction_sb_cLdR::synapse0x1630f60() {
   return (neuron0x161fbe0()*-0.0619346);
}

double NNfunction_sb_cLdR::synapse0x1630fa0() {
   return (neuron0x161ff20()*-1.24156);
}

double NNfunction_sb_cLdR::synapse0x1630fe0() {
   return (neuron0x1620260()*-0.255937);
}

double NNfunction_sb_cLdR::synapse0x1631020() {
   return (neuron0x16205a0()*0.0699919);
}

double NNfunction_sb_cLdR::synapse0x1631060() {
   return (neuron0x16208e0()*0.296045);
}

double NNfunction_sb_cLdR::synapse0x16310a0() {
   return (neuron0x1620c20()*-0.232791);
}

double NNfunction_sb_cLdR::synapse0x16310e0() {
   return (neuron0x1620f60()*-0.558087);
}

double NNfunction_sb_cLdR::synapse0x1631120() {
   return (neuron0x16212a0()*0.268436);
}

double NNfunction_sb_cLdR::synapse0x1631160() {
   return (neuron0x16215e0()*0.612585);
}

double NNfunction_sb_cLdR::synapse0x16311a0() {
   return (neuron0x1621920()*0.199781);
}

double NNfunction_sb_cLdR::synapse0x16311e0() {
   return (neuron0x1621c60()*0.253316);
}

double NNfunction_sb_cLdR::synapse0x1631220() {
   return (neuron0x1621fa0()*-0.324524);
}

double NNfunction_sb_cLdR::synapse0x1631260() {
   return (neuron0x16222e0()*0.296919);
}

double NNfunction_sb_cLdR::synapse0x16312a0() {
   return (neuron0x1622620()*-0.307672);
}

double NNfunction_sb_cLdR::synapse0x1630d30() {
   return (neuron0x1622960()*-0.14354);
}

double NNfunction_sb_cLdR::synapse0x1630d70() {
   return (neuron0x1622ec0()*-0.410813);
}

double NNfunction_sb_cLdR::synapse0x16313f0() {
   return (neuron0x16230e0()*-0.20226);
}

double NNfunction_sb_cLdR::synapse0x1631430() {
   return (neuron0x1623420()*-0.336112);
}

double NNfunction_sb_cLdR::synapse0x1631470() {
   return (neuron0x1623760()*-0.709286);
}

double NNfunction_sb_cLdR::synapse0x16314b0() {
   return (neuron0x1623aa0()*0.0919972);
}

double NNfunction_sb_cLdR::synapse0x16314f0() {
   return (neuron0x1623de0()*0.146521);
}

double NNfunction_sb_cLdR::synapse0x1631530() {
   return (neuron0x1624120()*0.424084);
}

double NNfunction_sb_cLdR::synapse0x16318b0() {
   return (neuron0x161f560()*-0.641944);
}

double NNfunction_sb_cLdR::synapse0x16318f0() {
   return (neuron0x161f8a0()*-0.0533914);
}

double NNfunction_sb_cLdR::synapse0x1631930() {
   return (neuron0x161fbe0()*-0.0891674);
}

double NNfunction_sb_cLdR::synapse0x1631970() {
   return (neuron0x161ff20()*0.762492);
}

double NNfunction_sb_cLdR::synapse0x16319b0() {
   return (neuron0x1620260()*0.328348);
}

double NNfunction_sb_cLdR::synapse0x16319f0() {
   return (neuron0x16205a0()*0.465303);
}

double NNfunction_sb_cLdR::synapse0x1631a30() {
   return (neuron0x16208e0()*-0.453284);
}

double NNfunction_sb_cLdR::synapse0x1631a70() {
   return (neuron0x1620c20()*-0.712957);
}

double NNfunction_sb_cLdR::synapse0x1631ab0() {
   return (neuron0x1620f60()*-0.000172528);
}

double NNfunction_sb_cLdR::synapse0x1631af0() {
   return (neuron0x16212a0()*-0.124147);
}

double NNfunction_sb_cLdR::synapse0x1631b30() {
   return (neuron0x16215e0()*-0.0928889);
}

double NNfunction_sb_cLdR::synapse0x1631b70() {
   return (neuron0x1621920()*-0.767127);
}

double NNfunction_sb_cLdR::synapse0x1631bb0() {
   return (neuron0x1621c60()*-0.698786);
}

double NNfunction_sb_cLdR::synapse0x1631bf0() {
   return (neuron0x1621fa0()*-0.0824026);
}

double NNfunction_sb_cLdR::synapse0x1631c30() {
   return (neuron0x16222e0()*-0.295648);
}

double NNfunction_sb_cLdR::synapse0x1631c70() {
   return (neuron0x1622620()*-0.0516379);
}

double NNfunction_sb_cLdR::synapse0x1631700() {
   return (neuron0x1622960()*0.26544);
}

double NNfunction_sb_cLdR::synapse0x1631740() {
   return (neuron0x1622ec0()*-0.982702);
}

double NNfunction_sb_cLdR::synapse0x1631dc0() {
   return (neuron0x16230e0()*-0.626505);
}

double NNfunction_sb_cLdR::synapse0x1631e00() {
   return (neuron0x1623420()*-0.119598);
}

double NNfunction_sb_cLdR::synapse0x1631e40() {
   return (neuron0x1623760()*-0.0316265);
}

double NNfunction_sb_cLdR::synapse0x1631e80() {
   return (neuron0x1623aa0()*-0.0600178);
}

double NNfunction_sb_cLdR::synapse0x1631ec0() {
   return (neuron0x1623de0()*0.354208);
}

double NNfunction_sb_cLdR::synapse0x1631f00() {
   return (neuron0x1624120()*-0.173311);
}

double NNfunction_sb_cLdR::synapse0x1632280() {
   return (neuron0x161f560()*-0.209324);
}

double NNfunction_sb_cLdR::synapse0x16322c0() {
   return (neuron0x161f8a0()*0.074545);
}

double NNfunction_sb_cLdR::synapse0x1632300() {
   return (neuron0x161fbe0()*0.0743555);
}

double NNfunction_sb_cLdR::synapse0x1632340() {
   return (neuron0x161ff20()*0.0799155);
}

double NNfunction_sb_cLdR::synapse0x1632380() {
   return (neuron0x1620260()*-0.193572);
}

double NNfunction_sb_cLdR::synapse0x16323c0() {
   return (neuron0x16205a0()*0.0886912);
}

double NNfunction_sb_cLdR::synapse0x1632400() {
   return (neuron0x16208e0()*-0.322204);
}

double NNfunction_sb_cLdR::synapse0x1632440() {
   return (neuron0x1620c20()*0.179473);
}

double NNfunction_sb_cLdR::synapse0x1632480() {
   return (neuron0x1620f60()*-0.0261276);
}

double NNfunction_sb_cLdR::synapse0x16324c0() {
   return (neuron0x16212a0()*0.268333);
}

double NNfunction_sb_cLdR::synapse0x1632500() {
   return (neuron0x16215e0()*0.218896);
}

double NNfunction_sb_cLdR::synapse0x1632540() {
   return (neuron0x1621920()*-0.0583284);
}

double NNfunction_sb_cLdR::synapse0x1632580() {
   return (neuron0x1621c60()*0.536445);
}

double NNfunction_sb_cLdR::synapse0x16325c0() {
   return (neuron0x1621fa0()*-0.0545478);
}

double NNfunction_sb_cLdR::synapse0x1632600() {
   return (neuron0x16222e0()*-0.170661);
}

double NNfunction_sb_cLdR::synapse0x1632640() {
   return (neuron0x1622620()*-0.0567712);
}

double NNfunction_sb_cLdR::synapse0x16320d0() {
   return (neuron0x1622960()*0.0407219);
}

double NNfunction_sb_cLdR::synapse0x1632110() {
   return (neuron0x1622ec0()*-0.936313);
}

double NNfunction_sb_cLdR::synapse0x1632790() {
   return (neuron0x16230e0()*-0.0549947);
}

double NNfunction_sb_cLdR::synapse0x16327d0() {
   return (neuron0x1623420()*-0.241339);
}

double NNfunction_sb_cLdR::synapse0x1632810() {
   return (neuron0x1623760()*0.0847186);
}

double NNfunction_sb_cLdR::synapse0x1632850() {
   return (neuron0x1623aa0()*-0.00279345);
}

double NNfunction_sb_cLdR::synapse0x1632890() {
   return (neuron0x1623de0()*-0.0371512);
}

double NNfunction_sb_cLdR::synapse0x16328d0() {
   return (neuron0x1624120()*-0.0198858);
}

double NNfunction_sb_cLdR::synapse0x1632c50() {
   return (neuron0x161f560()*-0.679428);
}

double NNfunction_sb_cLdR::synapse0x1632c90() {
   return (neuron0x161f8a0()*0.145939);
}

double NNfunction_sb_cLdR::synapse0x1632cd0() {
   return (neuron0x161fbe0()*-0.362578);
}

double NNfunction_sb_cLdR::synapse0x1632d10() {
   return (neuron0x161ff20()*-0.716088);
}

double NNfunction_sb_cLdR::synapse0x1632d50() {
   return (neuron0x1620260()*0.633203);
}

double NNfunction_sb_cLdR::synapse0x1632d90() {
   return (neuron0x16205a0()*0.710581);
}

double NNfunction_sb_cLdR::synapse0x1632dd0() {
   return (neuron0x16208e0()*0.123706);
}

double NNfunction_sb_cLdR::synapse0x1632e10() {
   return (neuron0x1620c20()*-0.313249);
}

double NNfunction_sb_cLdR::synapse0x1632e50() {
   return (neuron0x1620f60()*-0.0688128);
}

double NNfunction_sb_cLdR::synapse0x162b010() {
   return (neuron0x16212a0()*-0.0302935);
}

double NNfunction_sb_cLdR::synapse0x162b050() {
   return (neuron0x16215e0()*0.0920756);
}

double NNfunction_sb_cLdR::synapse0x162b090() {
   return (neuron0x1621920()*-0.823915);
}

double NNfunction_sb_cLdR::synapse0x162b0d0() {
   return (neuron0x1621c60()*-0.417209);
}

double NNfunction_sb_cLdR::synapse0x162b110() {
   return (neuron0x1621fa0()*-0.0706768);
}

double NNfunction_sb_cLdR::synapse0x162b150() {
   return (neuron0x16222e0()*0.208074);
}

double NNfunction_sb_cLdR::synapse0x162b190() {
   return (neuron0x1622620()*-0.414507);
}

double NNfunction_sb_cLdR::synapse0x1632aa0() {
   return (neuron0x1622960()*-0.047612);
}

double NNfunction_sb_cLdR::synapse0x1632ae0() {
   return (neuron0x1622ec0()*-0.912775);
}

double NNfunction_sb_cLdR::synapse0x162b2e0() {
   return (neuron0x16230e0()*-0.706857);
}

double NNfunction_sb_cLdR::synapse0x162b320() {
   return (neuron0x1623420()*0.0687283);
}

double NNfunction_sb_cLdR::synapse0x162b360() {
   return (neuron0x1623760()*-0.0408211);
}

double NNfunction_sb_cLdR::synapse0x162b3a0() {
   return (neuron0x1623aa0()*0.0980603);
}

double NNfunction_sb_cLdR::synapse0x162b3e0() {
   return (neuron0x1623de0()*0.17986);
}

double NNfunction_sb_cLdR::synapse0x162b420() {
   return (neuron0x1624120()*-0.100773);
}

double NNfunction_sb_cLdR::synapse0x162b7a0() {
   return (neuron0x161f560()*0.00948719);
}

double NNfunction_sb_cLdR::synapse0x162b7e0() {
   return (neuron0x161f8a0()*-0.0386185);
}

double NNfunction_sb_cLdR::synapse0x162b820() {
   return (neuron0x161fbe0()*0.0176166);
}

double NNfunction_sb_cLdR::synapse0x162b860() {
   return (neuron0x161ff20()*0.055024);
}

double NNfunction_sb_cLdR::synapse0x162b8a0() {
   return (neuron0x1620260()*-0.0188999);
}

double NNfunction_sb_cLdR::synapse0x162b8e0() {
   return (neuron0x16205a0()*0.00386301);
}

double NNfunction_sb_cLdR::synapse0x162b920() {
   return (neuron0x16208e0()*-0.0264682);
}

double NNfunction_sb_cLdR::synapse0x162b960() {
   return (neuron0x1620c20()*-0.016673);
}

double NNfunction_sb_cLdR::synapse0x162b9a0() {
   return (neuron0x1620f60()*0.0370041);
}

double NNfunction_sb_cLdR::synapse0x162b9e0() {
   return (neuron0x16212a0()*0.0323778);
}

double NNfunction_sb_cLdR::synapse0x162ba20() {
   return (neuron0x16215e0()*-0.0248027);
}

double NNfunction_sb_cLdR::synapse0x162ba60() {
   return (neuron0x1621920()*0.0075184);
}

double NNfunction_sb_cLdR::synapse0x162baa0() {
   return (neuron0x1621c60()*0.43003);
}

double NNfunction_sb_cLdR::synapse0x162bae0() {
   return (neuron0x1621fa0()*-0.0317112);
}

double NNfunction_sb_cLdR::synapse0x162bb20() {
   return (neuron0x16222e0()*-0.0197801);
}

double NNfunction_sb_cLdR::synapse0x162bb60() {
   return (neuron0x1622620()*-0.06848);
}

double NNfunction_sb_cLdR::synapse0x162b5f0() {
   return (neuron0x1622960()*0.0364343);
}

double NNfunction_sb_cLdR::synapse0x162b630() {
   return (neuron0x1622ec0()*-3.16113);
}

double NNfunction_sb_cLdR::synapse0x162bcb0() {
   return (neuron0x16230e0()*-0.0462734);
}

double NNfunction_sb_cLdR::synapse0x162bcf0() {
   return (neuron0x1623420()*-0.0317529);
}

double NNfunction_sb_cLdR::synapse0x162bd30() {
   return (neuron0x1623760()*-0.029228);
}

double NNfunction_sb_cLdR::synapse0x162bd70() {
   return (neuron0x1623aa0()*-0.0250616);
}

double NNfunction_sb_cLdR::synapse0x162bdb0() {
   return (neuron0x1623de0()*0.00662275);
}

double NNfunction_sb_cLdR::synapse0x162bdf0() {
   return (neuron0x1624120()*-0.0121222);
}

double NNfunction_sb_cLdR::synapse0x162bfc0() {
   return (neuron0x161f560()*0.0118922);
}

double NNfunction_sb_cLdR::synapse0x1635050() {
   return (neuron0x161f8a0()*-0.000320735);
}

double NNfunction_sb_cLdR::synapse0x1635090() {
   return (neuron0x161fbe0()*-0.021941);
}

double NNfunction_sb_cLdR::synapse0x16350d0() {
   return (neuron0x161ff20()*-4.91208);
}

double NNfunction_sb_cLdR::synapse0x1635110() {
   return (neuron0x1620260()*-0.0201596);
}

double NNfunction_sb_cLdR::synapse0x1635150() {
   return (neuron0x16205a0()*0.0135195);
}

double NNfunction_sb_cLdR::synapse0x1635190() {
   return (neuron0x16208e0()*0.0378948);
}

double NNfunction_sb_cLdR::synapse0x16351d0() {
   return (neuron0x1620c20()*0.0355063);
}

double NNfunction_sb_cLdR::synapse0x1635210() {
   return (neuron0x1620f60()*-0.016637);
}

double NNfunction_sb_cLdR::synapse0x1635250() {
   return (neuron0x16212a0()*0.01624);
}

double NNfunction_sb_cLdR::synapse0x1635290() {
   return (neuron0x16215e0()*-0.00169);
}

double NNfunction_sb_cLdR::synapse0x16352d0() {
   return (neuron0x1621920()*-0.0705799);
}

double NNfunction_sb_cLdR::synapse0x1635310() {
   return (neuron0x1621c60()*0.00290074);
}

double NNfunction_sb_cLdR::synapse0x1635350() {
   return (neuron0x1621fa0()*0.0829494);
}

double NNfunction_sb_cLdR::synapse0x1635390() {
   return (neuron0x16222e0()*-0.0407781);
}

double NNfunction_sb_cLdR::synapse0x16353d0() {
   return (neuron0x1622620()*-0.0125017);
}

double NNfunction_sb_cLdR::synapse0x1634ea0() {
   return (neuron0x1622960()*-0.0124016);
}

double NNfunction_sb_cLdR::synapse0x1634ee0() {
   return (neuron0x1622ec0()*-0.136219);
}

double NNfunction_sb_cLdR::synapse0x1635520() {
   return (neuron0x16230e0()*-0.0441751);
}

double NNfunction_sb_cLdR::synapse0x1635560() {
   return (neuron0x1623420()*0.00672509);
}

double NNfunction_sb_cLdR::synapse0x16355a0() {
   return (neuron0x1623760()*-0.0234253);
}

double NNfunction_sb_cLdR::synapse0x16355e0() {
   return (neuron0x1623aa0()*0.0164039);
}

double NNfunction_sb_cLdR::synapse0x1635620() {
   return (neuron0x1623de0()*-0.00909018);
}

double NNfunction_sb_cLdR::synapse0x1635660() {
   return (neuron0x1624120()*-0.00826497);
}

double NNfunction_sb_cLdR::synapse0x16359e0() {
   return (neuron0x161f560()*-0.0132979);
}

double NNfunction_sb_cLdR::synapse0x1635a20() {
   return (neuron0x161f8a0()*0.0113039);
}

double NNfunction_sb_cLdR::synapse0x1635a60() {
   return (neuron0x161fbe0()*0.0127007);
}

double NNfunction_sb_cLdR::synapse0x1635aa0() {
   return (neuron0x161ff20()*-5.6637);
}

double NNfunction_sb_cLdR::synapse0x1635ae0() {
   return (neuron0x1620260()*-0.0196412);
}

double NNfunction_sb_cLdR::synapse0x1635b20() {
   return (neuron0x16205a0()*0.00109832);
}

double NNfunction_sb_cLdR::synapse0x1635b60() {
   return (neuron0x16208e0()*0.0154311);
}

double NNfunction_sb_cLdR::synapse0x1635ba0() {
   return (neuron0x1620c20()*-0.022593);
}

double NNfunction_sb_cLdR::synapse0x1635be0() {
   return (neuron0x1620f60()*-0.0101124);
}

double NNfunction_sb_cLdR::synapse0x1635c20() {
   return (neuron0x16212a0()*-0.00694963);
}

double NNfunction_sb_cLdR::synapse0x1635c60() {
   return (neuron0x16215e0()*-0.0116155);
}

double NNfunction_sb_cLdR::synapse0x1635ca0() {
   return (neuron0x1621920()*0.0585633);
}

double NNfunction_sb_cLdR::synapse0x1635ce0() {
   return (neuron0x1621c60()*-0.196132);
}

double NNfunction_sb_cLdR::synapse0x1635d20() {
   return (neuron0x1621fa0()*-0.00740549);
}

double NNfunction_sb_cLdR::synapse0x1635d60() {
   return (neuron0x16222e0()*0.0220469);
}

double NNfunction_sb_cLdR::synapse0x1635da0() {
   return (neuron0x1622620()*0.0269881);
}

double NNfunction_sb_cLdR::synapse0x1635830() {
   return (neuron0x1622960()*-0.0152534);
}

double NNfunction_sb_cLdR::synapse0x1635870() {
   return (neuron0x1622ec0()*-0.180272);
}

double NNfunction_sb_cLdR::synapse0x1635ef0() {
   return (neuron0x16230e0()*0.0198278);
}

double NNfunction_sb_cLdR::synapse0x1635f30() {
   return (neuron0x1623420()*-0.00476658);
}

double NNfunction_sb_cLdR::synapse0x1635f70() {
   return (neuron0x1623760()*-0.00551562);
}

double NNfunction_sb_cLdR::synapse0x1635fb0() {
   return (neuron0x1623aa0()*0.0217608);
}

double NNfunction_sb_cLdR::synapse0x1635ff0() {
   return (neuron0x1623de0()*0.00558901);
}

double NNfunction_sb_cLdR::synapse0x1636030() {
   return (neuron0x1624120()*0.0124155);
}

double NNfunction_sb_cLdR::synapse0x16363b0() {
   return (neuron0x161f560()*0.0827165);
}

double NNfunction_sb_cLdR::synapse0x16363f0() {
   return (neuron0x161f8a0()*-0.0735823);
}

double NNfunction_sb_cLdR::synapse0x1636430() {
   return (neuron0x161fbe0()*0.109114);
}

double NNfunction_sb_cLdR::synapse0x1636470() {
   return (neuron0x161ff20()*0.212691);
}

double NNfunction_sb_cLdR::synapse0x16364b0() {
   return (neuron0x1620260()*0.025157);
}

double NNfunction_sb_cLdR::synapse0x16364f0() {
   return (neuron0x16205a0()*0.106487);
}

double NNfunction_sb_cLdR::synapse0x1636530() {
   return (neuron0x16208e0()*-0.10705);
}

double NNfunction_sb_cLdR::synapse0x1636570() {
   return (neuron0x1620c20()*-0.0225775);
}

double NNfunction_sb_cLdR::synapse0x16365b0() {
   return (neuron0x1620f60()*-0.0375592);
}

double NNfunction_sb_cLdR::synapse0x16365f0() {
   return (neuron0x16212a0()*0.0123488);
}

double NNfunction_sb_cLdR::synapse0x1636630() {
   return (neuron0x16215e0()*-0.407362);
}

double NNfunction_sb_cLdR::synapse0x1636670() {
   return (neuron0x1621920()*-0.0379058);
}

double NNfunction_sb_cLdR::synapse0x16366b0() {
   return (neuron0x1621c60()*-1.12398);
}

double NNfunction_sb_cLdR::synapse0x16366f0() {
   return (neuron0x1621fa0()*-0.167177);
}

double NNfunction_sb_cLdR::synapse0x1636730() {
   return (neuron0x16222e0()*0.0229112);
}

double NNfunction_sb_cLdR::synapse0x1636770() {
   return (neuron0x1622620()*-0.0526968);
}

double NNfunction_sb_cLdR::synapse0x1636200() {
   return (neuron0x1622960()*0.0972426);
}

double NNfunction_sb_cLdR::synapse0x1636240() {
   return (neuron0x1622ec0()*-0.0853178);
}

double NNfunction_sb_cLdR::synapse0x16368c0() {
   return (neuron0x16230e0()*-0.166378);
}

double NNfunction_sb_cLdR::synapse0x1636900() {
   return (neuron0x1623420()*-0.0749182);
}

double NNfunction_sb_cLdR::synapse0x1636940() {
   return (neuron0x1623760()*-0.0217336);
}

double NNfunction_sb_cLdR::synapse0x1636980() {
   return (neuron0x1623aa0()*-0.00582273);
}

double NNfunction_sb_cLdR::synapse0x16369c0() {
   return (neuron0x1623de0()*-0.0166152);
}

double NNfunction_sb_cLdR::synapse0x1636a00() {
   return (neuron0x1624120()*0.00429516);
}

double NNfunction_sb_cLdR::synapse0x1636d80() {
   return (neuron0x161f560()*0.0219635);
}

double NNfunction_sb_cLdR::synapse0x1636dc0() {
   return (neuron0x161f8a0()*-0.00678557);
}

double NNfunction_sb_cLdR::synapse0x1636e00() {
   return (neuron0x161fbe0()*1.16909);
}

double NNfunction_sb_cLdR::synapse0x1636e40() {
   return (neuron0x161ff20()*0.0206158);
}

double NNfunction_sb_cLdR::synapse0x1636e80() {
   return (neuron0x1620260()*-0.0148374);
}

double NNfunction_sb_cLdR::synapse0x1636ec0() {
   return (neuron0x16205a0()*0.0455815);
}

double NNfunction_sb_cLdR::synapse0x1636f00() {
   return (neuron0x16208e0()*-0.036706);
}

double NNfunction_sb_cLdR::synapse0x1636f40() {
   return (neuron0x1620c20()*-0.033348);
}

double NNfunction_sb_cLdR::synapse0x1636f80() {
   return (neuron0x1620f60()*0.034929);
}

double NNfunction_sb_cLdR::synapse0x1636fc0() {
   return (neuron0x16212a0()*-0.042279);
}

double NNfunction_sb_cLdR::synapse0x1637000() {
   return (neuron0x16215e0()*0.0289336);
}

double NNfunction_sb_cLdR::synapse0x1637040() {
   return (neuron0x1621920()*0.0377499);
}

double NNfunction_sb_cLdR::synapse0x1637080() {
   return (neuron0x1621c60()*-0.516434);
}

double NNfunction_sb_cLdR::synapse0x16370c0() {
   return (neuron0x1621fa0()*-0.0038179);
}

double NNfunction_sb_cLdR::synapse0x1637100() {
   return (neuron0x16222e0()*-0.00810307);
}

double NNfunction_sb_cLdR::synapse0x1637140() {
   return (neuron0x1622620()*0.042942);
}

double NNfunction_sb_cLdR::synapse0x1636bd0() {
   return (neuron0x1622960()*0.0238487);
}

double NNfunction_sb_cLdR::synapse0x1636c10() {
   return (neuron0x1622ec0()*0.135176);
}

double NNfunction_sb_cLdR::synapse0x1637290() {
   return (neuron0x16230e0()*-0.0287218);
}

double NNfunction_sb_cLdR::synapse0x16372d0() {
   return (neuron0x1623420()*0.00652896);
}

double NNfunction_sb_cLdR::synapse0x1637310() {
   return (neuron0x1623760()*0.0115338);
}

double NNfunction_sb_cLdR::synapse0x1637350() {
   return (neuron0x1623aa0()*0.00189771);
}

double NNfunction_sb_cLdR::synapse0x1637390() {
   return (neuron0x1623de0()*-0.00155959);
}

double NNfunction_sb_cLdR::synapse0x16373d0() {
   return (neuron0x1624120()*-0.0261046);
}

double NNfunction_sb_cLdR::synapse0x1637750() {
   return (neuron0x161f560()*-0.0092974);
}

double NNfunction_sb_cLdR::synapse0x1637790() {
   return (neuron0x161f8a0()*0.0119749);
}

double NNfunction_sb_cLdR::synapse0x16377d0() {
   return (neuron0x161fbe0()*-0.0447819);
}

double NNfunction_sb_cLdR::synapse0x1637810() {
   return (neuron0x161ff20()*2.21563);
}

double NNfunction_sb_cLdR::synapse0x1637850() {
   return (neuron0x1620260()*-0.0178592);
}

double NNfunction_sb_cLdR::synapse0x1637890() {
   return (neuron0x16205a0()*0.00391001);
}

double NNfunction_sb_cLdR::synapse0x16378d0() {
   return (neuron0x16208e0()*-0.0237788);
}

double NNfunction_sb_cLdR::synapse0x1637910() {
   return (neuron0x1620c20()*-0.00145344);
}

double NNfunction_sb_cLdR::synapse0x1637950() {
   return (neuron0x1620f60()*-0.0192128);
}

double NNfunction_sb_cLdR::synapse0x1637990() {
   return (neuron0x16212a0()*0.0197871);
}

double NNfunction_sb_cLdR::synapse0x16379d0() {
   return (neuron0x16215e0()*0.00573204);
}

double NNfunction_sb_cLdR::synapse0x1637a10() {
   return (neuron0x1621920()*-0.0173555);
}

double NNfunction_sb_cLdR::synapse0x1637a50() {
   return (neuron0x1621c60()*-0.304653);
}

double NNfunction_sb_cLdR::synapse0x1637a90() {
   return (neuron0x1621fa0()*0.00702039);
}

double NNfunction_sb_cLdR::synapse0x1637ad0() {
   return (neuron0x16222e0()*-0.0126132);
}

double NNfunction_sb_cLdR::synapse0x1637b10() {
   return (neuron0x1622620()*-0.0490078);
}

double NNfunction_sb_cLdR::synapse0x16375a0() {
   return (neuron0x1622960()*0.00362257);
}

double NNfunction_sb_cLdR::synapse0x16375e0() {
   return (neuron0x1622ec0()*-0.0330771);
}

double NNfunction_sb_cLdR::synapse0x1637c60() {
   return (neuron0x16230e0()*0.0257488);
}

double NNfunction_sb_cLdR::synapse0x1637ca0() {
   return (neuron0x1623420()*0.0121424);
}

double NNfunction_sb_cLdR::synapse0x1637ce0() {
   return (neuron0x1623760()*-0.00208867);
}

double NNfunction_sb_cLdR::synapse0x1637d20() {
   return (neuron0x1623aa0()*0.00458244);
}

double NNfunction_sb_cLdR::synapse0x1637d60() {
   return (neuron0x1623de0()*-0.0159448);
}

double NNfunction_sb_cLdR::synapse0x1637da0() {
   return (neuron0x1624120()*0.0146049);
}

double NNfunction_sb_cLdR::synapse0x1638120() {
   return (neuron0x161f560()*-0.0207496);
}

double NNfunction_sb_cLdR::synapse0x1638160() {
   return (neuron0x161f8a0()*0.000434558);
}

double NNfunction_sb_cLdR::synapse0x16381a0() {
   return (neuron0x161fbe0()*-0.0766215);
}

double NNfunction_sb_cLdR::synapse0x16381e0() {
   return (neuron0x161ff20()*-0.566564);
}

double NNfunction_sb_cLdR::synapse0x1638220() {
   return (neuron0x1620260()*-0.00747217);
}

double NNfunction_sb_cLdR::synapse0x1638260() {
   return (neuron0x16205a0()*0.0102028);
}

double NNfunction_sb_cLdR::synapse0x16382a0() {
   return (neuron0x16208e0()*0.0394212);
}

double NNfunction_sb_cLdR::synapse0x16382e0() {
   return (neuron0x1620c20()*-0.0273566);
}

double NNfunction_sb_cLdR::synapse0x1638320() {
   return (neuron0x1620f60()*-0.00323978);
}

double NNfunction_sb_cLdR::synapse0x1638360() {
   return (neuron0x16212a0()*0.00799743);
}

double NNfunction_sb_cLdR::synapse0x16383a0() {
   return (neuron0x16215e0()*0.00251611);
}

double NNfunction_sb_cLdR::synapse0x16383e0() {
   return (neuron0x1621920()*-0.0840033);
}

double NNfunction_sb_cLdR::synapse0x1638420() {
   return (neuron0x1621c60()*0.0660408);
}

double NNfunction_sb_cLdR::synapse0x1638460() {
   return (neuron0x1621fa0()*0.0193212);
}

double NNfunction_sb_cLdR::synapse0x16384a0() {
   return (neuron0x16222e0()*-0.0560372);
}

double NNfunction_sb_cLdR::synapse0x16384e0() {
   return (neuron0x1622620()*-0.0565869);
}

double NNfunction_sb_cLdR::synapse0x1637f70() {
   return (neuron0x1622960()*0.00833538);
}

double NNfunction_sb_cLdR::synapse0x1637fb0() {
   return (neuron0x1622ec0()*0.112958);
}

double NNfunction_sb_cLdR::synapse0x1638630() {
   return (neuron0x16230e0()*-0.0365511);
}

double NNfunction_sb_cLdR::synapse0x1638670() {
   return (neuron0x1623420()*0.0196519);
}

double NNfunction_sb_cLdR::synapse0x16386b0() {
   return (neuron0x1623760()*-0.00797);
}

double NNfunction_sb_cLdR::synapse0x16386f0() {
   return (neuron0x1623aa0()*0.000929395);
}

double NNfunction_sb_cLdR::synapse0x1638730() {
   return (neuron0x1623de0()*-0.0128852);
}

double NNfunction_sb_cLdR::synapse0x1638770() {
   return (neuron0x1624120()*0.000299296);
}

double NNfunction_sb_cLdR::synapse0x1638af0() {
   return (neuron0x161f560()*-0.272452);
}

double NNfunction_sb_cLdR::synapse0x1638b30() {
   return (neuron0x161f8a0()*0.176316);
}

double NNfunction_sb_cLdR::synapse0x1638b70() {
   return (neuron0x161fbe0()*0.0802039);
}

double NNfunction_sb_cLdR::synapse0x1638bb0() {
   return (neuron0x161ff20()*0.298573);
}

double NNfunction_sb_cLdR::synapse0x1638bf0() {
   return (neuron0x1620260()*-0.0374881);
}

double NNfunction_sb_cLdR::synapse0x1638c30() {
   return (neuron0x16205a0()*-0.0351694);
}

double NNfunction_sb_cLdR::synapse0x1638c70() {
   return (neuron0x16208e0()*0.141152);
}

double NNfunction_sb_cLdR::synapse0x1638cb0() {
   return (neuron0x1620c20()*0.15966);
}

double NNfunction_sb_cLdR::synapse0x1638cf0() {
   return (neuron0x1620f60()*-0.1975);
}

double NNfunction_sb_cLdR::synapse0x1638d30() {
   return (neuron0x16212a0()*0.887895);
}

double NNfunction_sb_cLdR::synapse0x1638d70() {
   return (neuron0x16215e0()*0.178797);
}

double NNfunction_sb_cLdR::synapse0x1638db0() {
   return (neuron0x1621920()*0.0253527);
}

double NNfunction_sb_cLdR::synapse0x1638df0() {
   return (neuron0x1621c60()*-0.202762);
}

double NNfunction_sb_cLdR::synapse0x1638e30() {
   return (neuron0x1621fa0()*-0.29902);
}

double NNfunction_sb_cLdR::synapse0x1638e70() {
   return (neuron0x16222e0()*0.288522);
}

double NNfunction_sb_cLdR::synapse0x1638eb0() {
   return (neuron0x1622620()*0.412597);
}

double NNfunction_sb_cLdR::synapse0x1638940() {
   return (neuron0x1622960()*0.120422);
}

double NNfunction_sb_cLdR::synapse0x1638980() {
   return (neuron0x1622ec0()*-0.685893);
}

double NNfunction_sb_cLdR::synapse0x1639000() {
   return (neuron0x16230e0()*-0.211209);
}

double NNfunction_sb_cLdR::synapse0x1639040() {
   return (neuron0x1623420()*-0.295013);
}

double NNfunction_sb_cLdR::synapse0x1639080() {
   return (neuron0x1623760()*0.0816361);
}

double NNfunction_sb_cLdR::synapse0x16390c0() {
   return (neuron0x1623aa0()*0.169653);
}

double NNfunction_sb_cLdR::synapse0x1639100() {
   return (neuron0x1623de0()*-0.0613609);
}

double NNfunction_sb_cLdR::synapse0x1639140() {
   return (neuron0x1624120()*0.240952);
}

double NNfunction_sb_cLdR::synapse0x16394c0() {
   return (neuron0x161f560()*-0.595668);
}

double NNfunction_sb_cLdR::synapse0x1639500() {
   return (neuron0x161f8a0()*-0.420521);
}

double NNfunction_sb_cLdR::synapse0x1639540() {
   return (neuron0x161fbe0()*0.146759);
}

double NNfunction_sb_cLdR::synapse0x1639580() {
   return (neuron0x161ff20()*0.258985);
}

double NNfunction_sb_cLdR::synapse0x16395c0() {
   return (neuron0x1620260()*-0.0692794);
}

double NNfunction_sb_cLdR::synapse0x1639600() {
   return (neuron0x16205a0()*0.00431597);
}

double NNfunction_sb_cLdR::synapse0x1639640() {
   return (neuron0x16208e0()*-0.293298);
}

double NNfunction_sb_cLdR::synapse0x1639680() {
   return (neuron0x1620c20()*-0.593389);
}

double NNfunction_sb_cLdR::synapse0x16396c0() {
   return (neuron0x1620f60()*0.147304);
}

double NNfunction_sb_cLdR::synapse0x1639700() {
   return (neuron0x16212a0()*0.0579542);
}

double NNfunction_sb_cLdR::synapse0x1639740() {
   return (neuron0x16215e0()*-0.00682549);
}

double NNfunction_sb_cLdR::synapse0x1639780() {
   return (neuron0x1621920()*-0.305788);
}

double NNfunction_sb_cLdR::synapse0x16397c0() {
   return (neuron0x1621c60()*-0.893898);
}

double NNfunction_sb_cLdR::synapse0x1639800() {
   return (neuron0x1621fa0()*0.134743);
}

double NNfunction_sb_cLdR::synapse0x1639840() {
   return (neuron0x16222e0()*-0.684696);
}

double NNfunction_sb_cLdR::synapse0x1639880() {
   return (neuron0x1622620()*0.0185089);
}

double NNfunction_sb_cLdR::synapse0x1639310() {
   return (neuron0x1622960()*0.0269368);
}

double NNfunction_sb_cLdR::synapse0x1639350() {
   return (neuron0x1622ec0()*-0.816287);
}

double NNfunction_sb_cLdR::synapse0x16399d0() {
   return (neuron0x16230e0()*-0.184256);
}

double NNfunction_sb_cLdR::synapse0x1639a10() {
   return (neuron0x1623420()*0.255796);
}

double NNfunction_sb_cLdR::synapse0x1639a50() {
   return (neuron0x1623760()*-0.00938117);
}

double NNfunction_sb_cLdR::synapse0x1639a90() {
   return (neuron0x1623aa0()*-0.356452);
}

double NNfunction_sb_cLdR::synapse0x1639ad0() {
   return (neuron0x1623de0()*0.0430378);
}

double NNfunction_sb_cLdR::synapse0x1639b10() {
   return (neuron0x1624120()*-0.0179231);
}

double NNfunction_sb_cLdR::synapse0x1639e90() {
   return (neuron0x161f560()*-0.0933354);
}

double NNfunction_sb_cLdR::synapse0x162e460() {
   return (neuron0x161f8a0()*-0.049165);
}

double NNfunction_sb_cLdR::synapse0x162e4a0() {
   return (neuron0x161fbe0()*0.169867);
}

double NNfunction_sb_cLdR::synapse0x162e4e0() {
   return (neuron0x161ff20()*0.887124);
}

double NNfunction_sb_cLdR::synapse0x162e730() {
   return (neuron0x1620260()*-0.136249);
}

double NNfunction_sb_cLdR::synapse0x162e770() {
   return (neuron0x16205a0()*-0.0184345);
}

double NNfunction_sb_cLdR::synapse0x162e7b0() {
   return (neuron0x16208e0()*0.207107);
}

double NNfunction_sb_cLdR::synapse0x162ea00() {
   return (neuron0x1620c20()*0.140394);
}

double NNfunction_sb_cLdR::synapse0x162ea40() {
   return (neuron0x1620f60()*0.204547);
}

double NNfunction_sb_cLdR::synapse0x162ec90() {
   return (neuron0x16212a0()*-0.0291935);
}

double NNfunction_sb_cLdR::synapse0x162ecd0() {
   return (neuron0x16215e0()*0.0470518);
}

double NNfunction_sb_cLdR::synapse0x162ed10() {
   return (neuron0x1621920()*-0.0252995);
}

double NNfunction_sb_cLdR::synapse0x162ef60() {
   return (neuron0x1621c60()*-2.07683);
}

double NNfunction_sb_cLdR::synapse0x162efa0() {
   return (neuron0x1621fa0()*-0.111861);
}

double NNfunction_sb_cLdR::synapse0x162f1f0() {
   return (neuron0x16222e0()*-0.0408883);
}

double NNfunction_sb_cLdR::synapse0x162f230() {
   return (neuron0x1622620()*-0.275082);
}

double NNfunction_sb_cLdR::synapse0x1639ce0() {
   return (neuron0x1622960()*0.381252);
}

double NNfunction_sb_cLdR::synapse0x1639d20() {
   return (neuron0x1622ec0()*0.160548);
}

double NNfunction_sb_cLdR::synapse0x162f380() {
   return (neuron0x16230e0()*0.053334);
}

double NNfunction_sb_cLdR::synapse0x162f890() {
   return (neuron0x1623420()*0.088853);
}

double NNfunction_sb_cLdR::synapse0x162f8d0() {
   return (neuron0x1623760()*-0.115009);
}

double NNfunction_sb_cLdR::synapse0x162f910() {
   return (neuron0x1623aa0()*-0.00728431);
}

double NNfunction_sb_cLdR::synapse0x162fb60() {
   return (neuron0x1623de0()*-0.0309881);
}

double NNfunction_sb_cLdR::synapse0x162fba0() {
   return (neuron0x1624120()*0.115119);
}

double NNfunction_sb_cLdR::synapse0x162f450() {
   return (neuron0x161f560()*-0.182693);
}

double NNfunction_sb_cLdR::synapse0x162f490() {
   return (neuron0x161f8a0()*-0.0648399);
}

double NNfunction_sb_cLdR::synapse0x162f4d0() {
   return (neuron0x161fbe0()*0.086949);
}

double NNfunction_sb_cLdR::synapse0x162f510() {
   return (neuron0x161ff20()*0.565682);
}

double NNfunction_sb_cLdR::synapse0x162fe90() {
   return (neuron0x1620260()*-0.197963);
}

double NNfunction_sb_cLdR::synapse0x163c1e0() {
   return (neuron0x16205a0()*-0.235923);
}

double NNfunction_sb_cLdR::synapse0x163c220() {
   return (neuron0x16208e0()*-0.679949);
}

double NNfunction_sb_cLdR::synapse0x163c260() {
   return (neuron0x1620c20()*0.426665);
}

double NNfunction_sb_cLdR::synapse0x163c2a0() {
   return (neuron0x1620f60()*-0.0770621);
}

double NNfunction_sb_cLdR::synapse0x163c2e0() {
   return (neuron0x16212a0()*0.315346);
}

double NNfunction_sb_cLdR::synapse0x163c320() {
   return (neuron0x16215e0()*-0.148778);
}

double NNfunction_sb_cLdR::synapse0x163c360() {
   return (neuron0x1621920()*0.0200247);
}

double NNfunction_sb_cLdR::synapse0x163c3a0() {
   return (neuron0x1621c60()*-0.38898);
}

double NNfunction_sb_cLdR::synapse0x163c3e0() {
   return (neuron0x1621fa0()*-0.145263);
}

double NNfunction_sb_cLdR::synapse0x163c420() {
   return (neuron0x16222e0()*-0.446697);
}

double NNfunction_sb_cLdR::synapse0x163c460() {
   return (neuron0x1622620()*0.483457);
}

double NNfunction_sb_cLdR::synapse0x162fd70() {
   return (neuron0x1622960()*0.0212618);
}

double NNfunction_sb_cLdR::synapse0x162fdb0() {
   return (neuron0x1622ec0()*-0.269791);
}

double NNfunction_sb_cLdR::synapse0x163c5b0() {
   return (neuron0x16230e0()*0.286712);
}

double NNfunction_sb_cLdR::synapse0x163c5f0() {
   return (neuron0x1623420()*0.0584778);
}

double NNfunction_sb_cLdR::synapse0x163c630() {
   return (neuron0x1623760()*0.112046);
}

double NNfunction_sb_cLdR::synapse0x163c670() {
   return (neuron0x1623aa0()*-0.309766);
}

double NNfunction_sb_cLdR::synapse0x163c6b0() {
   return (neuron0x1623de0()*-0.297334);
}

double NNfunction_sb_cLdR::synapse0x163c6f0() {
   return (neuron0x1624120()*-0.211826);
}

double NNfunction_sb_cLdR::synapse0x163ca70() {
   return (neuron0x161f560()*0.00042377);
}

double NNfunction_sb_cLdR::synapse0x163cab0() {
   return (neuron0x161f8a0()*0.0290724);
}

double NNfunction_sb_cLdR::synapse0x163caf0() {
   return (neuron0x161fbe0()*-0.0533367);
}

double NNfunction_sb_cLdR::synapse0x163cb30() {
   return (neuron0x161ff20()*1.62);
}

double NNfunction_sb_cLdR::synapse0x163cb70() {
   return (neuron0x1620260()*-0.0143897);
}

double NNfunction_sb_cLdR::synapse0x163cbb0() {
   return (neuron0x16205a0()*-0.00149205);
}

double NNfunction_sb_cLdR::synapse0x163cbf0() {
   return (neuron0x16208e0()*0.010214);
}

double NNfunction_sb_cLdR::synapse0x163cc30() {
   return (neuron0x1620c20()*-0.00992808);
}

double NNfunction_sb_cLdR::synapse0x163cc70() {
   return (neuron0x1620f60()*0.0221185);
}

double NNfunction_sb_cLdR::synapse0x163ccb0() {
   return (neuron0x16212a0()*-0.01097);
}

double NNfunction_sb_cLdR::synapse0x163ccf0() {
   return (neuron0x16215e0()*0.0104829);
}

double NNfunction_sb_cLdR::synapse0x163cd30() {
   return (neuron0x1621920()*-0.0330434);
}

double NNfunction_sb_cLdR::synapse0x163cd70() {
   return (neuron0x1621c60()*0.040873);
}

double NNfunction_sb_cLdR::synapse0x163cdb0() {
   return (neuron0x1621fa0()*-0.0126264);
}

double NNfunction_sb_cLdR::synapse0x163cdf0() {
   return (neuron0x16222e0()*-0.023749);
}

double NNfunction_sb_cLdR::synapse0x163ce30() {
   return (neuron0x1622620()*-0.0399555);
}

double NNfunction_sb_cLdR::synapse0x163c8c0() {
   return (neuron0x1622960()*-0.00295553);
}

double NNfunction_sb_cLdR::synapse0x163c900() {
   return (neuron0x1622ec0()*-0.0125893);
}

double NNfunction_sb_cLdR::synapse0x163cf80() {
   return (neuron0x16230e0()*-0.0345529);
}

double NNfunction_sb_cLdR::synapse0x163cfc0() {
   return (neuron0x1623420()*-0.00342988);
}

double NNfunction_sb_cLdR::synapse0x163d000() {
   return (neuron0x1623760()*-0.00378738);
}

double NNfunction_sb_cLdR::synapse0x163d040() {
   return (neuron0x1623aa0()*-0.00702559);
}

double NNfunction_sb_cLdR::synapse0x163d080() {
   return (neuron0x1623de0()*0.00472169);
}

double NNfunction_sb_cLdR::synapse0x163d0c0() {
   return (neuron0x1624120()*-0.0157873);
}

double NNfunction_sb_cLdR::synapse0x163d440() {
   return (neuron0x161f560()*0.032511);
}

double NNfunction_sb_cLdR::synapse0x163d480() {
   return (neuron0x161f8a0()*-0.0217497);
}

double NNfunction_sb_cLdR::synapse0x163d4c0() {
   return (neuron0x161fbe0()*0.289387);
}

double NNfunction_sb_cLdR::synapse0x163d500() {
   return (neuron0x161ff20()*-0.200642);
}

double NNfunction_sb_cLdR::synapse0x163d540() {
   return (neuron0x1620260()*-0.0109562);
}

double NNfunction_sb_cLdR::synapse0x163d580() {
   return (neuron0x16205a0()*0.0476965);
}

double NNfunction_sb_cLdR::synapse0x163d5c0() {
   return (neuron0x16208e0()*-0.31651);
}

double NNfunction_sb_cLdR::synapse0x163d600() {
   return (neuron0x1620c20()*0.146882);
}

double NNfunction_sb_cLdR::synapse0x163d640() {
   return (neuron0x1620f60()*-0.219105);
}

double NNfunction_sb_cLdR::synapse0x163d680() {
   return (neuron0x16212a0()*0.218241);
}

double NNfunction_sb_cLdR::synapse0x163d6c0() {
   return (neuron0x16215e0()*0.224296);
}

double NNfunction_sb_cLdR::synapse0x163d700() {
   return (neuron0x1621920()*-0.0901523);
}

double NNfunction_sb_cLdR::synapse0x163d740() {
   return (neuron0x1621c60()*0.663725);
}

double NNfunction_sb_cLdR::synapse0x163d780() {
   return (neuron0x1621fa0()*0.0891282);
}

double NNfunction_sb_cLdR::synapse0x163d7c0() {
   return (neuron0x16222e0()*-0.0639911);
}

double NNfunction_sb_cLdR::synapse0x163d800() {
   return (neuron0x1622620()*0.0775134);
}

double NNfunction_sb_cLdR::synapse0x163d290() {
   return (neuron0x1622960()*0.00720155);
}

double NNfunction_sb_cLdR::synapse0x163d2d0() {
   return (neuron0x1622ec0()*-0.911527);
}

double NNfunction_sb_cLdR::synapse0x163d950() {
   return (neuron0x16230e0()*-0.232434);
}

double NNfunction_sb_cLdR::synapse0x163d990() {
   return (neuron0x1623420()*0.0976591);
}

double NNfunction_sb_cLdR::synapse0x163d9d0() {
   return (neuron0x1623760()*-0.06856);
}

double NNfunction_sb_cLdR::synapse0x163da10() {
   return (neuron0x1623aa0()*0.11017);
}

double NNfunction_sb_cLdR::synapse0x163da50() {
   return (neuron0x1623de0()*-0.0283768);
}

double NNfunction_sb_cLdR::synapse0x163da90() {
   return (neuron0x1624120()*-0.109314);
}

double NNfunction_sb_cLdR::synapse0x163de10() {
   return (neuron0x161f560()*-0.0248879);
}

double NNfunction_sb_cLdR::synapse0x163de50() {
   return (neuron0x161f8a0()*-0.0651128);
}

double NNfunction_sb_cLdR::synapse0x163de90() {
   return (neuron0x161fbe0()*-0.0369163);
}

double NNfunction_sb_cLdR::synapse0x163ded0() {
   return (neuron0x161ff20()*0.767549);
}

double NNfunction_sb_cLdR::synapse0x163df10() {
   return (neuron0x1620260()*0.0135897);
}

double NNfunction_sb_cLdR::synapse0x163df50() {
   return (neuron0x16205a0()*-0.0367121);
}

double NNfunction_sb_cLdR::synapse0x163df90() {
   return (neuron0x16208e0()*0.029363);
}

double NNfunction_sb_cLdR::synapse0x163dfd0() {
   return (neuron0x1620c20()*-0.0575397);
}

double NNfunction_sb_cLdR::synapse0x163e010() {
   return (neuron0x1620f60()*0.0568366);
}

double NNfunction_sb_cLdR::synapse0x163e050() {
   return (neuron0x16212a0()*-0.0331531);
}

double NNfunction_sb_cLdR::synapse0x163e090() {
   return (neuron0x16215e0()*0.00126042);
}

double NNfunction_sb_cLdR::synapse0x163e0d0() {
   return (neuron0x1621920()*-0.233594);
}

double NNfunction_sb_cLdR::synapse0x163e110() {
   return (neuron0x1621c60()*-0.405507);
}

double NNfunction_sb_cLdR::synapse0x163e150() {
   return (neuron0x1621fa0()*0.000909897);
}

double NNfunction_sb_cLdR::synapse0x163e190() {
   return (neuron0x16222e0()*-0.0461423);
}

double NNfunction_sb_cLdR::synapse0x163e1d0() {
   return (neuron0x1622620()*-0.115799);
}

double NNfunction_sb_cLdR::synapse0x163dc60() {
   return (neuron0x1622960()*-0.0436349);
}

double NNfunction_sb_cLdR::synapse0x163dca0() {
   return (neuron0x1622ec0()*-0.71167);
}

double NNfunction_sb_cLdR::synapse0x163e320() {
   return (neuron0x16230e0()*-0.128741);
}

double NNfunction_sb_cLdR::synapse0x163e360() {
   return (neuron0x1623420()*0.0210561);
}

double NNfunction_sb_cLdR::synapse0x163e3a0() {
   return (neuron0x1623760()*0.00312339);
}

double NNfunction_sb_cLdR::synapse0x163e3e0() {
   return (neuron0x1623aa0()*0.0584266);
}

double NNfunction_sb_cLdR::synapse0x163e420() {
   return (neuron0x1623de0()*-0.0344328);
}

double NNfunction_sb_cLdR::synapse0x163e460() {
   return (neuron0x1624120()*0.0117676);
}

double NNfunction_sb_cLdR::synapse0x163e7e0() {
   return (neuron0x161f560()*-0.0618359);
}

double NNfunction_sb_cLdR::synapse0x163e820() {
   return (neuron0x161f8a0()*-0.0967287);
}

double NNfunction_sb_cLdR::synapse0x163e860() {
   return (neuron0x161fbe0()*-0.236665);
}

double NNfunction_sb_cLdR::synapse0x163e8a0() {
   return (neuron0x161ff20()*-0.00830708);
}

double NNfunction_sb_cLdR::synapse0x163e8e0() {
   return (neuron0x1620260()*-0.0220442);
}

double NNfunction_sb_cLdR::synapse0x163e920() {
   return (neuron0x16205a0()*-0.0958042);
}

double NNfunction_sb_cLdR::synapse0x163e960() {
   return (neuron0x16208e0()*0.0702565);
}

double NNfunction_sb_cLdR::synapse0x163e9a0() {
   return (neuron0x1620c20()*-0.0338076);
}

double NNfunction_sb_cLdR::synapse0x163e9e0() {
   return (neuron0x1620f60()*0.00873511);
}

double NNfunction_sb_cLdR::synapse0x163ea20() {
   return (neuron0x16212a0()*0.0336394);
}

double NNfunction_sb_cLdR::synapse0x163ea60() {
   return (neuron0x16215e0()*0.0197777);
}

double NNfunction_sb_cLdR::synapse0x163eaa0() {
   return (neuron0x1621920()*0.140018);
}

double NNfunction_sb_cLdR::synapse0x163eae0() {
   return (neuron0x1621c60()*-0.0168552);
}

double NNfunction_sb_cLdR::synapse0x163eb20() {
   return (neuron0x1621fa0()*0.000682324);
}

double NNfunction_sb_cLdR::synapse0x163eb60() {
   return (neuron0x16222e0()*-0.0260432);
}

double NNfunction_sb_cLdR::synapse0x163eba0() {
   return (neuron0x1622620()*0.453565);
}

double NNfunction_sb_cLdR::synapse0x163e630() {
   return (neuron0x1622960()*-0.0819633);
}

double NNfunction_sb_cLdR::synapse0x163e670() {
   return (neuron0x1622ec0()*0.0923954);
}

double NNfunction_sb_cLdR::synapse0x163ecf0() {
   return (neuron0x16230e0()*0.085452);
}

double NNfunction_sb_cLdR::synapse0x163ed30() {
   return (neuron0x1623420()*-0.0163498);
}

double NNfunction_sb_cLdR::synapse0x163ed70() {
   return (neuron0x1623760()*-0.04311);
}

double NNfunction_sb_cLdR::synapse0x163edb0() {
   return (neuron0x1623aa0()*0.0860739);
}

double NNfunction_sb_cLdR::synapse0x163edf0() {
   return (neuron0x1623de0()*0.00426223);
}

double NNfunction_sb_cLdR::synapse0x163ee30() {
   return (neuron0x1624120()*-0.013348);
}

double NNfunction_sb_cLdR::synapse0x163f1b0() {
   return (neuron0x161f560()*-0.00649406);
}

double NNfunction_sb_cLdR::synapse0x163f1f0() {
   return (neuron0x161f8a0()*-0.0776019);
}

double NNfunction_sb_cLdR::synapse0x163f230() {
   return (neuron0x161fbe0()*0.237239);
}

double NNfunction_sb_cLdR::synapse0x163f270() {
   return (neuron0x161ff20()*0.201178);
}

double NNfunction_sb_cLdR::synapse0x163f2b0() {
   return (neuron0x1620260()*0.0334375);
}

double NNfunction_sb_cLdR::synapse0x163f2f0() {
   return (neuron0x16205a0()*-0.0546044);
}

double NNfunction_sb_cLdR::synapse0x163f330() {
   return (neuron0x16208e0()*-0.0322749);
}

double NNfunction_sb_cLdR::synapse0x163f370() {
   return (neuron0x1620c20()*0.112114);
}

double NNfunction_sb_cLdR::synapse0x163f3b0() {
   return (neuron0x1620f60()*-0.0319343);
}

double NNfunction_sb_cLdR::synapse0x163f3f0() {
   return (neuron0x16212a0()*-0.0210171);
}

double NNfunction_sb_cLdR::synapse0x163f430() {
   return (neuron0x16215e0()*0.00982512);
}

double NNfunction_sb_cLdR::synapse0x163f470() {
   return (neuron0x1621920()*-0.58816);
}

double NNfunction_sb_cLdR::synapse0x163f4b0() {
   return (neuron0x1621c60()*0.0948877);
}

double NNfunction_sb_cLdR::synapse0x163f4f0() {
   return (neuron0x1621fa0()*0.231385);
}

double NNfunction_sb_cLdR::synapse0x163f530() {
   return (neuron0x16222e0()*-0.504621);
}

double NNfunction_sb_cLdR::synapse0x163f570() {
   return (neuron0x1622620()*-0.0670462);
}

double NNfunction_sb_cLdR::synapse0x163f000() {
   return (neuron0x1622960()*0.240585);
}

double NNfunction_sb_cLdR::synapse0x163f040() {
   return (neuron0x1622ec0()*0.0439489);
}

double NNfunction_sb_cLdR::synapse0x163f6c0() {
   return (neuron0x16230e0()*-0.294157);
}

double NNfunction_sb_cLdR::synapse0x163f700() {
   return (neuron0x1623420()*-0.0698071);
}

double NNfunction_sb_cLdR::synapse0x163f740() {
   return (neuron0x1623760()*-0.00147398);
}

double NNfunction_sb_cLdR::synapse0x163f780() {
   return (neuron0x1623aa0()*-0.023672);
}

double NNfunction_sb_cLdR::synapse0x163f7c0() {
   return (neuron0x1623de0()*-0.0152218);
}

double NNfunction_sb_cLdR::synapse0x163f800() {
   return (neuron0x1624120()*-0.0662588);
}

double NNfunction_sb_cLdR::synapse0x163fb80() {
   return (neuron0x161f560()*-0.706143);
}

double NNfunction_sb_cLdR::synapse0x163fbc0() {
   return (neuron0x161f8a0()*-0.0187637);
}

double NNfunction_sb_cLdR::synapse0x163fc00() {
   return (neuron0x161fbe0()*-0.432151);
}

double NNfunction_sb_cLdR::synapse0x163fc40() {
   return (neuron0x161ff20()*0.281087);
}

double NNfunction_sb_cLdR::synapse0x163fc80() {
   return (neuron0x1620260()*0.271782);
}

double NNfunction_sb_cLdR::synapse0x163fcc0() {
   return (neuron0x16205a0()*0.130008);
}

double NNfunction_sb_cLdR::synapse0x163fd00() {
   return (neuron0x16208e0()*-0.0433438);
}

double NNfunction_sb_cLdR::synapse0x163fd40() {
   return (neuron0x1620c20()*0.174392);
}

double NNfunction_sb_cLdR::synapse0x163fd80() {
   return (neuron0x1620f60()*-0.299106);
}

double NNfunction_sb_cLdR::synapse0x163fdc0() {
   return (neuron0x16212a0()*-0.815377);
}

double NNfunction_sb_cLdR::synapse0x163fe00() {
   return (neuron0x16215e0()*0.320767);
}

double NNfunction_sb_cLdR::synapse0x163fe40() {
   return (neuron0x1621920()*-0.789556);
}

double NNfunction_sb_cLdR::synapse0x163fe80() {
   return (neuron0x1621c60()*-0.0053993);
}

double NNfunction_sb_cLdR::synapse0x163fec0() {
   return (neuron0x1621fa0()*-0.766353);
}

double NNfunction_sb_cLdR::synapse0x163ff00() {
   return (neuron0x16222e0()*-0.377161);
}

double NNfunction_sb_cLdR::synapse0x163ff40() {
   return (neuron0x1622620()*-0.779835);
}

double NNfunction_sb_cLdR::synapse0x163f9d0() {
   return (neuron0x1622960()*-0.109591);
}

double NNfunction_sb_cLdR::synapse0x163fa10() {
   return (neuron0x1622ec0()*-0.0747486);
}

double NNfunction_sb_cLdR::synapse0x1640090() {
   return (neuron0x16230e0()*-0.897765);
}

double NNfunction_sb_cLdR::synapse0x16400d0() {
   return (neuron0x1623420()*0.06604);
}

double NNfunction_sb_cLdR::synapse0x1640110() {
   return (neuron0x1623760()*1.25827);
}

double NNfunction_sb_cLdR::synapse0x1640150() {
   return (neuron0x1623aa0()*-0.345707);
}

double NNfunction_sb_cLdR::synapse0x1640190() {
   return (neuron0x1623de0()*-0.0451085);
}

double NNfunction_sb_cLdR::synapse0x16401d0() {
   return (neuron0x1624120()*-0.208511);
}

double NNfunction_sb_cLdR::synapse0x1640550() {
   return (neuron0x161f560()*-0.810172);
}

double NNfunction_sb_cLdR::synapse0x1640590() {
   return (neuron0x161f8a0()*-0.149483);
}

double NNfunction_sb_cLdR::synapse0x16405d0() {
   return (neuron0x161fbe0()*-0.178882);
}

double NNfunction_sb_cLdR::synapse0x1640610() {
   return (neuron0x161ff20()*-0.83926);
}

double NNfunction_sb_cLdR::synapse0x1640650() {
   return (neuron0x1620260()*0.53205);
}

double NNfunction_sb_cLdR::synapse0x1640690() {
   return (neuron0x16205a0()*-0.199226);
}

double NNfunction_sb_cLdR::synapse0x16406d0() {
   return (neuron0x16208e0()*0.227861);
}

double NNfunction_sb_cLdR::synapse0x1640710() {
   return (neuron0x1620c20()*0.808959);
}

double NNfunction_sb_cLdR::synapse0x1640750() {
   return (neuron0x1620f60()*0.12245);
}

double NNfunction_sb_cLdR::synapse0x1640790() {
   return (neuron0x16212a0()*0.0109755);
}

double NNfunction_sb_cLdR::synapse0x16407d0() {
   return (neuron0x16215e0()*0.122711);
}

double NNfunction_sb_cLdR::synapse0x1640810() {
   return (neuron0x1621920()*-0.744861);
}

double NNfunction_sb_cLdR::synapse0x1640850() {
   return (neuron0x1621c60()*0.433459);
}

double NNfunction_sb_cLdR::synapse0x1640890() {
   return (neuron0x1621fa0()*0.0715353);
}

double NNfunction_sb_cLdR::synapse0x16408d0() {
   return (neuron0x16222e0()*-0.156113);
}

double NNfunction_sb_cLdR::synapse0x1640910() {
   return (neuron0x1622620()*-0.522312);
}

double NNfunction_sb_cLdR::synapse0x16403a0() {
   return (neuron0x1622960()*0.327908);
}

double NNfunction_sb_cLdR::synapse0x16403e0() {
   return (neuron0x1622ec0()*-0.353369);
}

double NNfunction_sb_cLdR::synapse0x1640a60() {
   return (neuron0x16230e0()*-0.151151);
}

double NNfunction_sb_cLdR::synapse0x1640aa0() {
   return (neuron0x1623420()*0.562734);
}

double NNfunction_sb_cLdR::synapse0x1640ae0() {
   return (neuron0x1623760()*0.421899);
}

double NNfunction_sb_cLdR::synapse0x1640b20() {
   return (neuron0x1623aa0()*-0.0295299);
}

double NNfunction_sb_cLdR::synapse0x1640b60() {
   return (neuron0x1623de0()*-0.0748649);
}

double NNfunction_sb_cLdR::synapse0x1640ba0() {
   return (neuron0x1624120()*-0.0777179);
}

double NNfunction_sb_cLdR::synapse0x1629650() {
   return (neuron0x161f560()*-0.605956);
}

double NNfunction_sb_cLdR::synapse0x1629690() {
   return (neuron0x161f8a0()*-0.0874591);
}

double NNfunction_sb_cLdR::synapse0x16296d0() {
   return (neuron0x161fbe0()*1.3354);
}

double NNfunction_sb_cLdR::synapse0x1629710() {
   return (neuron0x161ff20()*-0.859597);
}

double NNfunction_sb_cLdR::synapse0x1629750() {
   return (neuron0x1620260()*0.193235);
}

double NNfunction_sb_cLdR::synapse0x1629790() {
   return (neuron0x16205a0()*-0.904391);
}

double NNfunction_sb_cLdR::synapse0x16297d0() {
   return (neuron0x16208e0()*0.464033);
}

double NNfunction_sb_cLdR::synapse0x1629810() {
   return (neuron0x1620c20()*-0.724217);
}

double NNfunction_sb_cLdR::synapse0x1641330() {
   return (neuron0x1620f60()*-0.553389);
}

double NNfunction_sb_cLdR::synapse0x1641370() {
   return (neuron0x16212a0()*0.549191);
}

double NNfunction_sb_cLdR::synapse0x16413b0() {
   return (neuron0x16215e0()*-0.893237);
}

double NNfunction_sb_cLdR::synapse0x16413f0() {
   return (neuron0x1621920()*-0.63787);
}

double NNfunction_sb_cLdR::synapse0x1641430() {
   return (neuron0x1621c60()*0.31376);
}

double NNfunction_sb_cLdR::synapse0x1641470() {
   return (neuron0x1621fa0()*-0.187908);
}

double NNfunction_sb_cLdR::synapse0x16414b0() {
   return (neuron0x16222e0()*0.0719022);
}

double NNfunction_sb_cLdR::synapse0x16414f0() {
   return (neuron0x1622620()*-0.561582);
}

double NNfunction_sb_cLdR::synapse0x1640d70() {
   return (neuron0x1622960()*0.849521);
}

double NNfunction_sb_cLdR::synapse0x1640db0() {
   return (neuron0x1622ec0()*-0.0538877);
}

double NNfunction_sb_cLdR::synapse0x1641640() {
   return (neuron0x16230e0()*-0.276931);
}

double NNfunction_sb_cLdR::synapse0x1641680() {
   return (neuron0x1623420()*0.0350339);
}

double NNfunction_sb_cLdR::synapse0x16416c0() {
   return (neuron0x1623760()*-0.604211);
}

double NNfunction_sb_cLdR::synapse0x1641700() {
   return (neuron0x1623aa0()*0.285107);
}

double NNfunction_sb_cLdR::synapse0x1641740() {
   return (neuron0x1623de0()*0.171005);
}

double NNfunction_sb_cLdR::synapse0x1641780() {
   return (neuron0x1624120()*-0.436508);
}

double NNfunction_sb_cLdR::synapse0x1641b00() {
   return (neuron0x161f560()*-0.000579416);
}

double NNfunction_sb_cLdR::synapse0x1641b40() {
   return (neuron0x161f8a0()*-0.139217);
}

double NNfunction_sb_cLdR::synapse0x1641b80() {
   return (neuron0x161fbe0()*0.276427);
}

double NNfunction_sb_cLdR::synapse0x1641bc0() {
   return (neuron0x161ff20()*-0.00532972);
}

double NNfunction_sb_cLdR::synapse0x1641c00() {
   return (neuron0x1620260()*0.0280686);
}

double NNfunction_sb_cLdR::synapse0x1641c40() {
   return (neuron0x16205a0()*0.0446614);
}

double NNfunction_sb_cLdR::synapse0x1641c80() {
   return (neuron0x16208e0()*0.00127943);
}

double NNfunction_sb_cLdR::synapse0x1641cc0() {
   return (neuron0x1620c20()*0.0793183);
}

double NNfunction_sb_cLdR::synapse0x1641d00() {
   return (neuron0x1620f60()*0.251901);
}

double NNfunction_sb_cLdR::synapse0x1641d40() {
   return (neuron0x16212a0()*-0.212312);
}

double NNfunction_sb_cLdR::synapse0x1641d80() {
   return (neuron0x16215e0()*0.156871);
}

double NNfunction_sb_cLdR::synapse0x1641dc0() {
   return (neuron0x1621920()*-0.0499454);
}

double NNfunction_sb_cLdR::synapse0x1641e00() {
   return (neuron0x1621c60()*-0.111279);
}

double NNfunction_sb_cLdR::synapse0x1641e40() {
   return (neuron0x1621fa0()*-0.0920308);
}

double NNfunction_sb_cLdR::synapse0x1641e80() {
   return (neuron0x16222e0()*0.107705);
}

double NNfunction_sb_cLdR::synapse0x1641ec0() {
   return (neuron0x1622620()*0.00134422);
}

double NNfunction_sb_cLdR::synapse0x1641950() {
   return (neuron0x1622960()*-0.135963);
}

double NNfunction_sb_cLdR::synapse0x1641990() {
   return (neuron0x1622ec0()*-0.61263);
}

double NNfunction_sb_cLdR::synapse0x1642010() {
   return (neuron0x16230e0()*-0.0772813);
}

double NNfunction_sb_cLdR::synapse0x1642050() {
   return (neuron0x1623420()*-0.229514);
}

double NNfunction_sb_cLdR::synapse0x1642090() {
   return (neuron0x1623760()*0.0886992);
}

double NNfunction_sb_cLdR::synapse0x16420d0() {
   return (neuron0x1623aa0()*0.0531353);
}

double NNfunction_sb_cLdR::synapse0x1642110() {
   return (neuron0x1623de0()*0.0610046);
}

double NNfunction_sb_cLdR::synapse0x1642150() {
   return (neuron0x1624120()*0.0472545);
}

double NNfunction_sb_cLdR::synapse0x16424d0() {
   return (neuron0x161f560()*0.188086);
}

double NNfunction_sb_cLdR::synapse0x1642510() {
   return (neuron0x161f8a0()*-0.0740014);
}

double NNfunction_sb_cLdR::synapse0x1642550() {
   return (neuron0x161fbe0()*0.22256);
}

double NNfunction_sb_cLdR::synapse0x1642590() {
   return (neuron0x161ff20()*0.254978);
}

double NNfunction_sb_cLdR::synapse0x16425d0() {
   return (neuron0x1620260()*0.000869836);
}

double NNfunction_sb_cLdR::synapse0x1642610() {
   return (neuron0x16205a0()*0.0893013);
}

double NNfunction_sb_cLdR::synapse0x1642650() {
   return (neuron0x16208e0()*-0.0967608);
}

double NNfunction_sb_cLdR::synapse0x1642690() {
   return (neuron0x1620c20()*0.0234783);
}

double NNfunction_sb_cLdR::synapse0x16426d0() {
   return (neuron0x1620f60()*0.0452083);
}

double NNfunction_sb_cLdR::synapse0x1642710() {
   return (neuron0x16212a0()*0.180526);
}

double NNfunction_sb_cLdR::synapse0x1642750() {
   return (neuron0x16215e0()*-0.18479);
}

double NNfunction_sb_cLdR::synapse0x1642790() {
   return (neuron0x1621920()*-0.202641);
}

double NNfunction_sb_cLdR::synapse0x16427d0() {
   return (neuron0x1621c60()*-0.232081);
}

double NNfunction_sb_cLdR::synapse0x1642810() {
   return (neuron0x1621fa0()*-0.12234);
}

double NNfunction_sb_cLdR::synapse0x1642850() {
   return (neuron0x16222e0()*0.838499);
}

double NNfunction_sb_cLdR::synapse0x1642890() {
   return (neuron0x1622620()*0.598181);
}

double NNfunction_sb_cLdR::synapse0x1642320() {
   return (neuron0x1622960()*0.325515);
}

double NNfunction_sb_cLdR::synapse0x1642360() {
   return (neuron0x1622ec0()*-0.680385);
}

double NNfunction_sb_cLdR::synapse0x1632e90() {
   return (neuron0x16230e0()*-0.332732);
}

double NNfunction_sb_cLdR::synapse0x1632ed0() {
   return (neuron0x1623420()*-0.0490534);
}

double NNfunction_sb_cLdR::synapse0x1632f10() {
   return (neuron0x1623760()*-0.0433773);
}

double NNfunction_sb_cLdR::synapse0x1632f50() {
   return (neuron0x1623aa0()*0.0835493);
}

double NNfunction_sb_cLdR::synapse0x1632f90() {
   return (neuron0x1623de0()*0.0363202);
}

double NNfunction_sb_cLdR::synapse0x1632fd0() {
   return (neuron0x1624120()*0.0191749);
}

double NNfunction_sb_cLdR::synapse0x1633350() {
   return (neuron0x161f560()*0.264483);
}

double NNfunction_sb_cLdR::synapse0x1633390() {
   return (neuron0x161f8a0()*-0.0539005);
}

double NNfunction_sb_cLdR::synapse0x16333d0() {
   return (neuron0x161fbe0()*-0.163545);
}

double NNfunction_sb_cLdR::synapse0x1633410() {
   return (neuron0x161ff20()*0.432038);
}

double NNfunction_sb_cLdR::synapse0x1633450() {
   return (neuron0x1620260()*0.172558);
}

double NNfunction_sb_cLdR::synapse0x1633490() {
   return (neuron0x16205a0()*0.291512);
}

double NNfunction_sb_cLdR::synapse0x16334d0() {
   return (neuron0x16208e0()*0.646491);
}

double NNfunction_sb_cLdR::synapse0x1633510() {
   return (neuron0x1620c20()*0.0971709);
}

double NNfunction_sb_cLdR::synapse0x1633550() {
   return (neuron0x1620f60()*0.408789);
}

double NNfunction_sb_cLdR::synapse0x1633590() {
   return (neuron0x16212a0()*-0.420014);
}

double NNfunction_sb_cLdR::synapse0x16335d0() {
   return (neuron0x16215e0()*0.0489268);
}

double NNfunction_sb_cLdR::synapse0x1633610() {
   return (neuron0x1621920()*0.194498);
}

double NNfunction_sb_cLdR::synapse0x1633650() {
   return (neuron0x1621c60()*0.545095);
}

double NNfunction_sb_cLdR::synapse0x1633690() {
   return (neuron0x1621fa0()*-0.150843);
}

double NNfunction_sb_cLdR::synapse0x16336d0() {
   return (neuron0x16222e0()*0.223902);
}

double NNfunction_sb_cLdR::synapse0x1633710() {
   return (neuron0x1622620()*-0.252179);
}

double NNfunction_sb_cLdR::synapse0x16331a0() {
   return (neuron0x1622960()*-0.216662);
}

double NNfunction_sb_cLdR::synapse0x16331e0() {
   return (neuron0x1622ec0()*1.03394);
}

double NNfunction_sb_cLdR::synapse0x1633860() {
   return (neuron0x16230e0()*0.0675708);
}

double NNfunction_sb_cLdR::synapse0x16338a0() {
   return (neuron0x1623420()*0.260601);
}

double NNfunction_sb_cLdR::synapse0x16338e0() {
   return (neuron0x1623760()*0.054961);
}

double NNfunction_sb_cLdR::synapse0x1633920() {
   return (neuron0x1623aa0()*0.143026);
}

double NNfunction_sb_cLdR::synapse0x1633960() {
   return (neuron0x1623de0()*0.00382157);
}

double NNfunction_sb_cLdR::synapse0x16339a0() {
   return (neuron0x1624120()*0.165704);
}

double NNfunction_sb_cLdR::synapse0x1633d20() {
   return (neuron0x161f560()*0.0185313);
}

double NNfunction_sb_cLdR::synapse0x1633d60() {
   return (neuron0x161f8a0()*-0.00303691);
}

double NNfunction_sb_cLdR::synapse0x1633da0() {
   return (neuron0x161fbe0()*-0.0274534);
}

double NNfunction_sb_cLdR::synapse0x1633de0() {
   return (neuron0x161ff20()*-14.624);
}

double NNfunction_sb_cLdR::synapse0x1633e20() {
   return (neuron0x1620260()*0.0266374);
}

double NNfunction_sb_cLdR::synapse0x1633e60() {
   return (neuron0x16205a0()*0.0380085);
}

double NNfunction_sb_cLdR::synapse0x1633ea0() {
   return (neuron0x16208e0()*0.0111778);
}

double NNfunction_sb_cLdR::synapse0x1633ee0() {
   return (neuron0x1620c20()*0.0212756);
}

double NNfunction_sb_cLdR::synapse0x1633f20() {
   return (neuron0x1620f60()*-0.0214598);
}

double NNfunction_sb_cLdR::synapse0x1633f60() {
   return (neuron0x16212a0()*0.0148453);
}

double NNfunction_sb_cLdR::synapse0x1633fa0() {
   return (neuron0x16215e0()*0.0187465);
}

double NNfunction_sb_cLdR::synapse0x1633fe0() {
   return (neuron0x1621920()*-0.085294);
}

double NNfunction_sb_cLdR::synapse0x1634020() {
   return (neuron0x1621c60()*-0.0838846);
}

double NNfunction_sb_cLdR::synapse0x1634060() {
   return (neuron0x1621fa0()*-0.00631062);
}

double NNfunction_sb_cLdR::synapse0x16340a0() {
   return (neuron0x16222e0()*-0.0573689);
}

double NNfunction_sb_cLdR::synapse0x16340e0() {
   return (neuron0x1622620()*0.00155793);
}

double NNfunction_sb_cLdR::synapse0x1633b70() {
   return (neuron0x1622960()*0.00768719);
}

double NNfunction_sb_cLdR::synapse0x1633bb0() {
   return (neuron0x1622ec0()*-0.0829379);
}

double NNfunction_sb_cLdR::synapse0x1634230() {
   return (neuron0x16230e0()*-0.067461);
}

double NNfunction_sb_cLdR::synapse0x1634270() {
   return (neuron0x1623420()*-0.0730935);
}

double NNfunction_sb_cLdR::synapse0x16342b0() {
   return (neuron0x1623760()*0.00143671);
}

double NNfunction_sb_cLdR::synapse0x16342f0() {
   return (neuron0x1623aa0()*-0.0564011);
}

double NNfunction_sb_cLdR::synapse0x1634330() {
   return (neuron0x1623de0()*0.00362375);
}

double NNfunction_sb_cLdR::synapse0x1634370() {
   return (neuron0x1624120()*-0.0245672);
}

double NNfunction_sb_cLdR::synapse0x16346f0() {
   return (neuron0x161f560()*-0.0655966);
}

double NNfunction_sb_cLdR::synapse0x1634730() {
   return (neuron0x161f8a0()*-0.0796384);
}

double NNfunction_sb_cLdR::synapse0x1634770() {
   return (neuron0x161fbe0()*0.0502006);
}

double NNfunction_sb_cLdR::synapse0x16347b0() {
   return (neuron0x161ff20()*0.965315);
}

double NNfunction_sb_cLdR::synapse0x16347f0() {
   return (neuron0x1620260()*0.505067);
}

double NNfunction_sb_cLdR::synapse0x1634830() {
   return (neuron0x16205a0()*-0.14197);
}

double NNfunction_sb_cLdR::synapse0x1634870() {
   return (neuron0x16208e0()*0.293692);
}

double NNfunction_sb_cLdR::synapse0x16348b0() {
   return (neuron0x1620c20()*-0.00831785);
}

double NNfunction_sb_cLdR::synapse0x16348f0() {
   return (neuron0x1620f60()*-0.40232);
}

double NNfunction_sb_cLdR::synapse0x1634930() {
   return (neuron0x16212a0()*0.668389);
}

double NNfunction_sb_cLdR::synapse0x1634970() {
   return (neuron0x16215e0()*0.344771);
}

double NNfunction_sb_cLdR::synapse0x16349b0() {
   return (neuron0x1621920()*0.378807);
}

double NNfunction_sb_cLdR::synapse0x16349f0() {
   return (neuron0x1621c60()*-0.1267);
}

double NNfunction_sb_cLdR::synapse0x1634a30() {
   return (neuron0x1621fa0()*-0.388754);
}

double NNfunction_sb_cLdR::synapse0x1634a70() {
   return (neuron0x16222e0()*0.389578);
}

double NNfunction_sb_cLdR::synapse0x1634ab0() {
   return (neuron0x1622620()*-0.376524);
}

double NNfunction_sb_cLdR::synapse0x1634540() {
   return (neuron0x1622960()*-0.234699);
}

double NNfunction_sb_cLdR::synapse0x1634580() {
   return (neuron0x1622ec0()*0.208905);
}

double NNfunction_sb_cLdR::synapse0x1634c00() {
   return (neuron0x16230e0()*-0.0452369);
}

double NNfunction_sb_cLdR::synapse0x1634c40() {
   return (neuron0x1623420()*0.183733);
}

double NNfunction_sb_cLdR::synapse0x1634c80() {
   return (neuron0x1623760()*0.413415);
}

double NNfunction_sb_cLdR::synapse0x1634cc0() {
   return (neuron0x1623aa0()*0.00463029);
}

double NNfunction_sb_cLdR::synapse0x1634d00() {
   return (neuron0x1623de0()*0.165103);
}

double NNfunction_sb_cLdR::synapse0x1634d40() {
   return (neuron0x1624120()*-0.121795);
}

double NNfunction_sb_cLdR::synapse0x1646c10() {
   return (neuron0x161f560()*-0.341148);
}

double NNfunction_sb_cLdR::synapse0x1646c50() {
   return (neuron0x161f8a0()*-1.07993);
}

double NNfunction_sb_cLdR::synapse0x1646c90() {
   return (neuron0x161fbe0()*-0.273532);
}

double NNfunction_sb_cLdR::synapse0x1646cd0() {
   return (neuron0x161ff20()*0.495917);
}

double NNfunction_sb_cLdR::synapse0x1646d10() {
   return (neuron0x1620260()*0.250403);
}

double NNfunction_sb_cLdR::synapse0x1646d50() {
   return (neuron0x16205a0()*0.293565);
}

double NNfunction_sb_cLdR::synapse0x1646d90() {
   return (neuron0x16208e0()*-0.870182);
}

double NNfunction_sb_cLdR::synapse0x1646dd0() {
   return (neuron0x1620c20()*-0.109159);
}

double NNfunction_sb_cLdR::synapse0x1646e10() {
   return (neuron0x1620f60()*0.0306263);
}

double NNfunction_sb_cLdR::synapse0x1646e50() {
   return (neuron0x16212a0()*-0.242304);
}

double NNfunction_sb_cLdR::synapse0x1646e90() {
   return (neuron0x16215e0()*-0.133743);
}

double NNfunction_sb_cLdR::synapse0x1646ed0() {
   return (neuron0x1621920()*-0.267655);
}

double NNfunction_sb_cLdR::synapse0x1646f10() {
   return (neuron0x1621c60()*-0.530393);
}

double NNfunction_sb_cLdR::synapse0x1646f50() {
   return (neuron0x1621fa0()*-0.365128);
}

double NNfunction_sb_cLdR::synapse0x1646f90() {
   return (neuron0x16222e0()*0.65309);
}

double NNfunction_sb_cLdR::synapse0x1646fd0() {
   return (neuron0x1622620()*-0.165762);
}

double NNfunction_sb_cLdR::synapse0x1634d80() {
   return (neuron0x1622960()*-0.0793635);
}

double NNfunction_sb_cLdR::synapse0x1634dc0() {
   return (neuron0x1622ec0()*-0.392072);
}

double NNfunction_sb_cLdR::synapse0x1647120() {
   return (neuron0x16230e0()*-0.329299);
}

double NNfunction_sb_cLdR::synapse0x1647160() {
   return (neuron0x1623420()*-0.143944);
}

double NNfunction_sb_cLdR::synapse0x16471a0() {
   return (neuron0x1623760()*0.297133);
}

double NNfunction_sb_cLdR::synapse0x16471e0() {
   return (neuron0x1623aa0()*-0.469361);
}

double NNfunction_sb_cLdR::synapse0x1647220() {
   return (neuron0x1623de0()*-0.279164);
}

double NNfunction_sb_cLdR::synapse0x1647260() {
   return (neuron0x1624120()*-0.497824);
}

double NNfunction_sb_cLdR::synapse0x16475e0() {
   return (neuron0x161f560()*-0.0102391);
}

double NNfunction_sb_cLdR::synapse0x1647620() {
   return (neuron0x161f8a0()*-0.0269574);
}

double NNfunction_sb_cLdR::synapse0x1647660() {
   return (neuron0x161fbe0()*-0.000237939);
}

double NNfunction_sb_cLdR::synapse0x16476a0() {
   return (neuron0x161ff20()*-7.33851);
}

double NNfunction_sb_cLdR::synapse0x16476e0() {
   return (neuron0x1620260()*-0.0415211);
}

double NNfunction_sb_cLdR::synapse0x1647720() {
   return (neuron0x16205a0()*-0.0324304);
}

double NNfunction_sb_cLdR::synapse0x1647760() {
   return (neuron0x16208e0()*-0.0369914);
}

double NNfunction_sb_cLdR::synapse0x16477a0() {
   return (neuron0x1620c20()*-0.0332129);
}

double NNfunction_sb_cLdR::synapse0x16477e0() {
   return (neuron0x1620f60()*0.0425958);
}

double NNfunction_sb_cLdR::synapse0x1647820() {
   return (neuron0x16212a0()*0.00576627);
}

double NNfunction_sb_cLdR::synapse0x1647860() {
   return (neuron0x16215e0()*0.00897593);
}

double NNfunction_sb_cLdR::synapse0x16478a0() {
   return (neuron0x1621920()*-0.0407691);
}

double NNfunction_sb_cLdR::synapse0x16478e0() {
   return (neuron0x1621c60()*0.764387);
}

double NNfunction_sb_cLdR::synapse0x1647920() {
   return (neuron0x1621fa0()*-0.0835426);
}

double NNfunction_sb_cLdR::synapse0x1647960() {
   return (neuron0x16222e0()*-0.0335864);
}

double NNfunction_sb_cLdR::synapse0x16479a0() {
   return (neuron0x1622620()*-0.0360387);
}

double NNfunction_sb_cLdR::synapse0x1647430() {
   return (neuron0x1622960()*0.095931);
}

double NNfunction_sb_cLdR::synapse0x1647470() {
   return (neuron0x1622ec0()*0.526739);
}

double NNfunction_sb_cLdR::synapse0x1647af0() {
   return (neuron0x16230e0()*-0.0601052);
}

double NNfunction_sb_cLdR::synapse0x1647b30() {
   return (neuron0x1623420()*-0.0875565);
}

double NNfunction_sb_cLdR::synapse0x1647b70() {
   return (neuron0x1623760()*0.00157917);
}

double NNfunction_sb_cLdR::synapse0x1647bb0() {
   return (neuron0x1623aa0()*-0.0134213);
}

double NNfunction_sb_cLdR::synapse0x1647bf0() {
   return (neuron0x1623de0()*-0.0293087);
}

double NNfunction_sb_cLdR::synapse0x1647c30() {
   return (neuron0x1624120()*-0.0102331);
}

double NNfunction_sb_cLdR::synapse0x1647fb0() {
   return (neuron0x161f560()*-0.0849872);
}

double NNfunction_sb_cLdR::synapse0x1647ff0() {
   return (neuron0x161f8a0()*0.0457392);
}

double NNfunction_sb_cLdR::synapse0x1648030() {
   return (neuron0x161fbe0()*0.187836);
}

double NNfunction_sb_cLdR::synapse0x1648070() {
   return (neuron0x161ff20()*-0.942585);
}

double NNfunction_sb_cLdR::synapse0x16480b0() {
   return (neuron0x1620260()*-0.102947);
}

double NNfunction_sb_cLdR::synapse0x16480f0() {
   return (neuron0x16205a0()*0.135154);
}

double NNfunction_sb_cLdR::synapse0x1648130() {
   return (neuron0x16208e0()*0.251464);
}

double NNfunction_sb_cLdR::synapse0x1648170() {
   return (neuron0x1620c20()*0.090297);
}

double NNfunction_sb_cLdR::synapse0x16481b0() {
   return (neuron0x1620f60()*-0.129798);
}

double NNfunction_sb_cLdR::synapse0x16481f0() {
   return (neuron0x16212a0()*-0.0895652);
}

double NNfunction_sb_cLdR::synapse0x1648230() {
   return (neuron0x16215e0()*0.147073);
}

double NNfunction_sb_cLdR::synapse0x1648270() {
   return (neuron0x1621920()*-0.0412212);
}

double NNfunction_sb_cLdR::synapse0x16482b0() {
   return (neuron0x1621c60()*1.15311);
}

double NNfunction_sb_cLdR::synapse0x16482f0() {
   return (neuron0x1621fa0()*-0.112826);
}

double NNfunction_sb_cLdR::synapse0x1648330() {
   return (neuron0x16222e0()*-0.112273);
}

double NNfunction_sb_cLdR::synapse0x1648370() {
   return (neuron0x1622620()*0.0448311);
}

double NNfunction_sb_cLdR::synapse0x1647e00() {
   return (neuron0x1622960()*0.127952);
}

double NNfunction_sb_cLdR::synapse0x1647e40() {
   return (neuron0x1622ec0()*-0.0354745);
}

double NNfunction_sb_cLdR::synapse0x16484c0() {
   return (neuron0x16230e0()*0.0629818);
}

double NNfunction_sb_cLdR::synapse0x1648500() {
   return (neuron0x1623420()*-0.0644201);
}

double NNfunction_sb_cLdR::synapse0x1648540() {
   return (neuron0x1623760()*-0.0554637);
}

double NNfunction_sb_cLdR::synapse0x1648580() {
   return (neuron0x1623aa0()*-0.021102);
}

double NNfunction_sb_cLdR::synapse0x16485c0() {
   return (neuron0x1623de0()*0.0947678);
}

double NNfunction_sb_cLdR::synapse0x1648600() {
   return (neuron0x1624120()*0.0208753);
}

double NNfunction_sb_cLdR::synapse0x1648980() {
   return (neuron0x161f560()*-0.000847676);
}

double NNfunction_sb_cLdR::synapse0x16489c0() {
   return (neuron0x161f8a0()*0.253473);
}

double NNfunction_sb_cLdR::synapse0x1648a00() {
   return (neuron0x161fbe0()*-0.0361298);
}

double NNfunction_sb_cLdR::synapse0x1648a40() {
   return (neuron0x161ff20()*-1.00196);
}

double NNfunction_sb_cLdR::synapse0x1648a80() {
   return (neuron0x1620260()*-0.0013362);
}

double NNfunction_sb_cLdR::synapse0x1648ac0() {
   return (neuron0x16205a0()*0.0795209);
}

double NNfunction_sb_cLdR::synapse0x1648b00() {
   return (neuron0x16208e0()*0.0688018);
}

double NNfunction_sb_cLdR::synapse0x1648b40() {
   return (neuron0x1620c20()*-0.0659625);
}

double NNfunction_sb_cLdR::synapse0x1648b80() {
   return (neuron0x1620f60()*-0.0128089);
}

double NNfunction_sb_cLdR::synapse0x1648bc0() {
   return (neuron0x16212a0()*0.0277702);
}

double NNfunction_sb_cLdR::synapse0x1648c00() {
   return (neuron0x16215e0()*-0.0396914);
}

double NNfunction_sb_cLdR::synapse0x1648c40() {
   return (neuron0x1621920()*0.00299848);
}

double NNfunction_sb_cLdR::synapse0x1648c80() {
   return (neuron0x1621c60()*0.183527);
}

double NNfunction_sb_cLdR::synapse0x1648cc0() {
   return (neuron0x1621fa0()*-0.0448079);
}

double NNfunction_sb_cLdR::synapse0x1648d00() {
   return (neuron0x16222e0()*-0.0741085);
}

double NNfunction_sb_cLdR::synapse0x1648d40() {
   return (neuron0x1622620()*0.232468);
}

double NNfunction_sb_cLdR::synapse0x16487d0() {
   return (neuron0x1622960()*0.0746846);
}

double NNfunction_sb_cLdR::synapse0x1648810() {
   return (neuron0x1622ec0()*0.264538);
}

double NNfunction_sb_cLdR::synapse0x1648e90() {
   return (neuron0x16230e0()*-0.00603569);
}

double NNfunction_sb_cLdR::synapse0x1648ed0() {
   return (neuron0x1623420()*0.0644077);
}

double NNfunction_sb_cLdR::synapse0x1648f10() {
   return (neuron0x1623760()*-0.0374777);
}

double NNfunction_sb_cLdR::synapse0x1648f50() {
   return (neuron0x1623aa0()*-0.0426502);
}

double NNfunction_sb_cLdR::synapse0x1648f90() {
   return (neuron0x1623de0()*-0.0631601);
}

double NNfunction_sb_cLdR::synapse0x1648fd0() {
   return (neuron0x1624120()*-0.0930893);
}

double NNfunction_sb_cLdR::synapse0x1625570() {
   return (neuron0x16245c0()*-0.627921);
}

double NNfunction_sb_cLdR::synapse0x16255b0() {
   return (neuron0x1624ed0()*0.0465167);
}

double NNfunction_sb_cLdR::synapse0x1626a80() {
   return (neuron0x16259b0()*0.00832733);
}

double NNfunction_sb_cLdR::synapse0x1626ac0() {
   return (neuron0x13df240()*-0.202551);
}

double NNfunction_sb_cLdR::synapse0x1627450() {
   return (neuron0x16267d0()*-0.083381);
}

double NNfunction_sb_cLdR::synapse0x1627490() {
   return (neuron0x16271a0()*-0.0888847);
}

double NNfunction_sb_cLdR::synapse0x1628220() {
   return (neuron0x1627f70()*2.90487);
}

double NNfunction_sb_cLdR::synapse0x1628260() {
   return (neuron0x1628940()*1.50697);
}

double NNfunction_sb_cLdR::synapse0x1628bf0() {
   return (neuron0x1629310()*0.0185656);
}

double NNfunction_sb_cLdR::synapse0x1628c30() {
   return (neuron0x1629df0()*-0.365703);
}

double NNfunction_sb_cLdR::synapse0x16295c0() {
   return (neuron0x162a7c0()*0.0139039);
}

double NNfunction_sb_cLdR::synapse0x1629600() {
   return (neuron0x16278a0()*0.0218984);
}

double NNfunction_sb_cLdR::synapse0x162a0a0() {
   return (neuron0x162c370()*0.00243095);
}

double NNfunction_sb_cLdR::synapse0x162a0e0() {
   return (neuron0x162cd40()*-0.0481836);
}

double NNfunction_sb_cLdR::synapse0x162aa70() {
   return (neuron0x162d710()*0.135092);
}

double NNfunction_sb_cLdR::synapse0x162aab0() {
   return (neuron0x162e0e0()*0.526753);
}

double NNfunction_sb_cLdR::synapse0x1627b50() {
   return (neuron0x162fef0()*-0.0103015);
}

double NNfunction_sb_cLdR::synapse0x1627b90() {
   return (neuron0x16301d0()*0.00925314);
}

double NNfunction_sb_cLdR::synapse0x162c620() {
   return (neuron0x1630ba0()*0.00726559);
}

double NNfunction_sb_cLdR::synapse0x162c660() {
   return (neuron0x1631570()*0.00600445);
}

double NNfunction_sb_cLdR::synapse0x162cff0() {
   return (neuron0x1631f40()*0.0655574);
}

double NNfunction_sb_cLdR::synapse0x162d030() {
   return (neuron0x1632910()*0.00536155);
}

double NNfunction_sb_cLdR::synapse0x162d9c0() {
   return (neuron0x162b460()*-0.246517);
}

double NNfunction_sb_cLdR::synapse0x162da00() {
   return (neuron0x162be30()*0.161663);
}

double NNfunction_sb_cLdR::synapse0x162e390() {
   return (neuron0x16356a0()*0.102495);
}

double NNfunction_sb_cLdR::synapse0x162e3d0() {
   return (neuron0x1636070()*-0.19766);
}

double NNfunction_sb_cLdR::synapse0x1622500() {
   return (neuron0x1636a40()*-0.144528);
}

double NNfunction_sb_cLdR::synapse0x1622540() {
   return (neuron0x1637410()*-0.938553);
}

double NNfunction_sb_cLdR::synapse0x1630480() {
   return (neuron0x1637de0()*-3.19619);
}

double NNfunction_sb_cLdR::synapse0x16304c0() {
   return (neuron0x16387b0()*-0.0177098);
}

double NNfunction_sb_cLdR::synapse0x1630e50() {
   return (neuron0x1639180()*-0.00954806);
}

double NNfunction_sb_cLdR::synapse0x1630e90() {
   return (neuron0x1639b50()*0.0380294);
}

double NNfunction_sb_cLdR::synapse0x1631820() {
   return (neuron0x162fbe0()*-0.00640695);
}

double NNfunction_sb_cLdR::synapse0x1631860() {
   return (neuron0x163c730()*2.70981);
}

double NNfunction_sb_cLdR::synapse0x16321f0() {
   return (neuron0x163d100()*-0.100561);
}

double NNfunction_sb_cLdR::synapse0x1632230() {
   return (neuron0x163dad0()*0.55955);
}

double NNfunction_sb_cLdR::synapse0x1632bc0() {
   return (neuron0x163e4a0()*-0.258965);
}

double NNfunction_sb_cLdR::synapse0x1632c00() {
   return (neuron0x163ee70()*0.127355);
}

double NNfunction_sb_cLdR::synapse0x162b710() {
   return (neuron0x163f840()*0.00665485);
}

double NNfunction_sb_cLdR::synapse0x162b750() {
   return (neuron0x1640210()*0.0132661);
}

double NNfunction_sb_cLdR::synapse0x1634fc0() {
   return (neuron0x1640be0()*0.00793011);
}

double NNfunction_sb_cLdR::synapse0x1635000() {
   return (neuron0x16417c0()*-0.139202);
}

double NNfunction_sb_cLdR::synapse0x1635950() {
   return (neuron0x1642190()*0.0104318);
}

double NNfunction_sb_cLdR::synapse0x1635990() {
   return (neuron0x1633010()*-0.0138235);
}

double NNfunction_sb_cLdR::synapse0x1636320() {
   return (neuron0x16339e0()*2.07094);
}

double NNfunction_sb_cLdR::synapse0x1636360() {
   return (neuron0x16343b0()*-0.0204376);
}

double NNfunction_sb_cLdR::synapse0x1636cf0() {
   return (neuron0x16469f0()*0.00086949);
}

double NNfunction_sb_cLdR::synapse0x1636d30() {
   return (neuron0x16472a0()*-0.0200637);
}

double NNfunction_sb_cLdR::synapse0x16376c0() {
   return (neuron0x1647c70()*-0.0999453);
}

double NNfunction_sb_cLdR::synapse0x1637700() {
   return (neuron0x1648640()*0.199941);
}

double NNfunction_sb_cLdR::synapse0x1639e00() {
   return (neuron0x16245c0()*-0.614538);
}

double NNfunction_sb_cLdR::synapse0x1639e40() {
   return (neuron0x1624ed0()*-0.444163);
}

double NNfunction_sb_cLdR::synapse0x162f3c0() {
   return (neuron0x16259b0()*-0.160257);
}

double NNfunction_sb_cLdR::synapse0x162f400() {
   return (neuron0x13df240()*-0.320396);
}

double NNfunction_sb_cLdR::synapse0x163c9e0() {
   return (neuron0x16267d0()*-0.595552);
}

double NNfunction_sb_cLdR::synapse0x163ca20() {
   return (neuron0x16271a0()*-0.335727);
}

double NNfunction_sb_cLdR::synapse0x163d3b0() {
   return (neuron0x1627f70()*-0.822217);
}

double NNfunction_sb_cLdR::synapse0x163d3f0() {
   return (neuron0x1628940()*-0.523896);
}

double NNfunction_sb_cLdR::synapse0x163dd80() {
   return (neuron0x1629310()*-0.160633);
}

double NNfunction_sb_cLdR::synapse0x163ddc0() {
   return (neuron0x1629df0()*0.00507894);
}

double NNfunction_sb_cLdR::synapse0x163e750() {
   return (neuron0x162a7c0()*-0.567131);
}

double NNfunction_sb_cLdR::synapse0x163e790() {
   return (neuron0x16278a0()*-0.411391);
}

double NNfunction_sb_cLdR::synapse0x163f120() {
   return (neuron0x162c370()*-0.376345);
}

double NNfunction_sb_cLdR::synapse0x163f160() {
   return (neuron0x162cd40()*-0.290296);
}

double NNfunction_sb_cLdR::synapse0x163faf0() {
   return (neuron0x162d710()*-0.694256);
}

double NNfunction_sb_cLdR::synapse0x163fb30() {
   return (neuron0x162e0e0()*-0.954675);
}

double NNfunction_sb_cLdR::synapse0x16404c0() {
   return (neuron0x162fef0()*-0.146475);
}

double NNfunction_sb_cLdR::synapse0x1640500() {
   return (neuron0x16301d0()*-0.59578);
}

double NNfunction_sb_cLdR::synapse0x1640e90() {
   return (neuron0x1630ba0()*0.518139);
}

double NNfunction_sb_cLdR::synapse0x1640ed0() {
   return (neuron0x1631570()*-0.0289979);
}

double NNfunction_sb_cLdR::synapse0x1641a70() {
   return (neuron0x1631f40()*-0.343201);
}

double NNfunction_sb_cLdR::synapse0x1641ab0() {
   return (neuron0x1632910()*-0.458047);
}

double NNfunction_sb_cLdR::synapse0x1642440() {
   return (neuron0x162b460()*0.0232011);
}

double NNfunction_sb_cLdR::synapse0x1642480() {
   return (neuron0x162be30()*0.522745);
}

double NNfunction_sb_cLdR::synapse0x16332c0() {
   return (neuron0x16356a0()*-0.459744);
}

double NNfunction_sb_cLdR::synapse0x1633300() {
   return (neuron0x1636070()*-0.643083);
}

double NNfunction_sb_cLdR::synapse0x1633c90() {
   return (neuron0x1636a40()*0.214004);
}

double NNfunction_sb_cLdR::synapse0x1633cd0() {
   return (neuron0x1637410()*0.213283);
}

double NNfunction_sb_cLdR::synapse0x1634660() {
   return (neuron0x1637de0()*-0.611518);
}

double NNfunction_sb_cLdR::synapse0x16346a0() {
   return (neuron0x16387b0()*0.127983);
}

double NNfunction_sb_cLdR::synapse0x1646b80() {
   return (neuron0x1639180()*0.00422412);
}

double NNfunction_sb_cLdR::synapse0x1646bc0() {
   return (neuron0x1639b50()*0.409903);
}

double NNfunction_sb_cLdR::synapse0x1647550() {
   return (neuron0x162fbe0()*-0.325655);
}

double NNfunction_sb_cLdR::synapse0x1647590() {
   return (neuron0x163c730()*0.0842958);
}

double NNfunction_sb_cLdR::synapse0x1647f20() {
   return (neuron0x163d100()*-0.538132);
}

double NNfunction_sb_cLdR::synapse0x1647f60() {
   return (neuron0x163dad0()*-0.815916);
}

double NNfunction_sb_cLdR::synapse0x16488f0() {
   return (neuron0x163e4a0()*-0.0379964);
}

double NNfunction_sb_cLdR::synapse0x1648930() {
   return (neuron0x163ee70()*-0.0153268);
}

double NNfunction_sb_cLdR::synapse0x16247e0() {
   return (neuron0x163f840()*0.0630014);
}

double NNfunction_sb_cLdR::synapse0x1624820() {
   return (neuron0x1640210()*-0.113818);
}

double NNfunction_sb_cLdR::synapse0x1638090() {
   return (neuron0x1640be0()*0.662244);
}

double NNfunction_sb_cLdR::synapse0x16380d0() {
   return (neuron0x16417c0()*-0.931859);
}

double NNfunction_sb_cLdR::synapse0x1649010() {
   return (neuron0x1642190()*-0.328548);
}

double NNfunction_sb_cLdR::synapse0x1649050() {
   return (neuron0x1633010()*-0.379056);
}

double NNfunction_sb_cLdR::synapse0x1649090() {
   return (neuron0x16339e0()*-0.38741);
}

double NNfunction_sb_cLdR::synapse0x16490d0() {
   return (neuron0x16343b0()*-0.722004);
}

double NNfunction_sb_cLdR::synapse0x164ff80() {
   return (neuron0x16469f0()*0.164055);
}

double NNfunction_sb_cLdR::synapse0x164ffc0() {
   return (neuron0x16472a0()*0.318027);
}

double NNfunction_sb_cLdR::synapse0x1650000() {
   return (neuron0x1647c70()*-0.545204);
}

double NNfunction_sb_cLdR::synapse0x1650040() {
   return (neuron0x1648640()*-0.732321);
}

double NNfunction_sb_cLdR::synapse0x16503c0() {
   return (neuron0x16245c0()*1.87398);
}

double NNfunction_sb_cLdR::synapse0x1650400() {
   return (neuron0x1624ed0()*0.718664);
}

double NNfunction_sb_cLdR::synapse0x1650440() {
   return (neuron0x16259b0()*-0.0287072);
}

double NNfunction_sb_cLdR::synapse0x1650480() {
   return (neuron0x13df240()*1.39063);
}

double NNfunction_sb_cLdR::synapse0x16504c0() {
   return (neuron0x16267d0()*-0.594193);
}

double NNfunction_sb_cLdR::synapse0x1650500() {
   return (neuron0x16271a0()*-0.199533);
}

double NNfunction_sb_cLdR::synapse0x1650540() {
   return (neuron0x1627f70()*0.41783);
}

double NNfunction_sb_cLdR::synapse0x1650580() {
   return (neuron0x1628940()*-2.02993);
}

double NNfunction_sb_cLdR::synapse0x16505c0() {
   return (neuron0x1629310()*0.143028);
}

double NNfunction_sb_cLdR::synapse0x1650600() {
   return (neuron0x1629df0()*2.23861);
}

double NNfunction_sb_cLdR::synapse0x1650640() {
   return (neuron0x162a7c0()*0.376708);
}

double NNfunction_sb_cLdR::synapse0x1650680() {
   return (neuron0x16278a0()*-0.00951843);
}

double NNfunction_sb_cLdR::synapse0x16506c0() {
   return (neuron0x162c370()*-0.0408296);
}

double NNfunction_sb_cLdR::synapse0x1650700() {
   return (neuron0x162cd40()*-0.653658);
}

double NNfunction_sb_cLdR::synapse0x1650740() {
   return (neuron0x162d710()*1.36477);
}

double NNfunction_sb_cLdR::synapse0x1650780() {
   return (neuron0x162e0e0()*-3.54522);
}

double NNfunction_sb_cLdR::synapse0x1650210() {
   return (neuron0x162fef0()*0.00124632);
}

double NNfunction_sb_cLdR::synapse0x1650250() {
   return (neuron0x16301d0()*0.0612581);
}

double NNfunction_sb_cLdR::synapse0x16508d0() {
   return (neuron0x1630ba0()*0.0429466);
}

double NNfunction_sb_cLdR::synapse0x1650910() {
   return (neuron0x1631570()*0.0206016);
}

double NNfunction_sb_cLdR::synapse0x1650950() {
   return (neuron0x1631f40()*0.995321);
}

double NNfunction_sb_cLdR::synapse0x1650990() {
   return (neuron0x1632910()*0.0197298);
}

double NNfunction_sb_cLdR::synapse0x16509d0() {
   return (neuron0x162b460()*0.738712);
}

double NNfunction_sb_cLdR::synapse0x1650a10() {
   return (neuron0x162be30()*2.41465);
}

double NNfunction_sb_cLdR::synapse0x1650a50() {
   return (neuron0x16356a0()*-2.89224);
}

double NNfunction_sb_cLdR::synapse0x1650a90() {
   return (neuron0x1636070()*-1.60854);
}

double NNfunction_sb_cLdR::synapse0x1650ad0() {
   return (neuron0x1636a40()*1.26332);
}

double NNfunction_sb_cLdR::synapse0x1650b10() {
   return (neuron0x1637410()*4.53306);
}

double NNfunction_sb_cLdR::synapse0x1650b50() {
   return (neuron0x1637de0()*1.90495);
}

double NNfunction_sb_cLdR::synapse0x1650b90() {
   return (neuron0x16387b0()*-0.36154);
}

double NNfunction_sb_cLdR::synapse0x1650bd0() {
   return (neuron0x1639180()*-0.228275);
}

double NNfunction_sb_cLdR::synapse0x1650c10() {
   return (neuron0x1639b50()*0.137777);
}

double NNfunction_sb_cLdR::synapse0x16507c0() {
   return (neuron0x162fbe0()*-0.0612996);
}

double NNfunction_sb_cLdR::synapse0x1650800() {
   return (neuron0x163c730()*-1.68233);
}

double NNfunction_sb_cLdR::synapse0x1650840() {
   return (neuron0x163d100()*-1.04286);
}

double NNfunction_sb_cLdR::synapse0x1650880() {
   return (neuron0x163dad0()*0.116867);
}

double NNfunction_sb_cLdR::synapse0x1650e60() {
   return (neuron0x163e4a0()*0.910963);
}

double NNfunction_sb_cLdR::synapse0x1650ea0() {
   return (neuron0x163ee70()*-0.787493);
}

double NNfunction_sb_cLdR::synapse0x1650ee0() {
   return (neuron0x163f840()*0.0501479);
}

double NNfunction_sb_cLdR::synapse0x1650f20() {
   return (neuron0x1640210()*0.024636);
}

double NNfunction_sb_cLdR::synapse0x1650f60() {
   return (neuron0x1640be0()*0.0883384);
}

double NNfunction_sb_cLdR::synapse0x1650fa0() {
   return (neuron0x16417c0()*-1.47646);
}

double NNfunction_sb_cLdR::synapse0x1650fe0() {
   return (neuron0x1642190()*0.37204);
}

double NNfunction_sb_cLdR::synapse0x1651020() {
   return (neuron0x1633010()*-0.0161242);
}

double NNfunction_sb_cLdR::synapse0x1651060() {
   return (neuron0x16339e0()*-2.57969);
}

double NNfunction_sb_cLdR::synapse0x16510a0() {
   return (neuron0x16343b0()*-0.0393476);
}

double NNfunction_sb_cLdR::synapse0x16510e0() {
   return (neuron0x16469f0()*0.0492575);
}

double NNfunction_sb_cLdR::synapse0x1651120() {
   return (neuron0x16472a0()*2.23916);
}

double NNfunction_sb_cLdR::synapse0x1651160() {
   return (neuron0x1647c70()*-0.921975);
}

double NNfunction_sb_cLdR::synapse0x16511a0() {
   return (neuron0x1648640()*-1.6197);
}

double NNfunction_sb_cLdR::synapse0x1651520() {
   return (neuron0x16245c0()*-0.711042);
}

double NNfunction_sb_cLdR::synapse0x1651560() {
   return (neuron0x1624ed0()*-1.03889);
}

double NNfunction_sb_cLdR::synapse0x16515a0() {
   return (neuron0x16259b0()*1.07597);
}

double NNfunction_sb_cLdR::synapse0x16515e0() {
   return (neuron0x13df240()*-0.37593);
}

double NNfunction_sb_cLdR::synapse0x1651620() {
   return (neuron0x16267d0()*0.800748);
}

double NNfunction_sb_cLdR::synapse0x1651660() {
   return (neuron0x16271a0()*-3.60613);
}

double NNfunction_sb_cLdR::synapse0x16516a0() {
   return (neuron0x1627f70()*1.18304);
}

double NNfunction_sb_cLdR::synapse0x16516e0() {
   return (neuron0x1628940()*-1.36152);
}

double NNfunction_sb_cLdR::synapse0x1651720() {
   return (neuron0x1629310()*0.928702);
}

double NNfunction_sb_cLdR::synapse0x1651760() {
   return (neuron0x1629df0()*-1.25503);
}

double NNfunction_sb_cLdR::synapse0x16517a0() {
   return (neuron0x162a7c0()*-0.212921);
}

double NNfunction_sb_cLdR::synapse0x16517e0() {
   return (neuron0x16278a0()*1.38868);
}

double NNfunction_sb_cLdR::synapse0x1651820() {
   return (neuron0x162c370()*0.961543);
}

double NNfunction_sb_cLdR::synapse0x1651860() {
   return (neuron0x162cd40()*-1.76687);
}

double NNfunction_sb_cLdR::synapse0x16518a0() {
   return (neuron0x162d710()*-1.38986);
}

double NNfunction_sb_cLdR::synapse0x16518e0() {
   return (neuron0x162e0e0()*-1.97965);
}

double NNfunction_sb_cLdR::synapse0x1651370() {
   return (neuron0x162fef0()*-0.987029);
}

double NNfunction_sb_cLdR::synapse0x16513b0() {
   return (neuron0x16301d0()*0.788176);
}

double NNfunction_sb_cLdR::synapse0x1651a30() {
   return (neuron0x1630ba0()*1.42431);
}

double NNfunction_sb_cLdR::synapse0x1651a70() {
   return (neuron0x1631570()*-1.56495);
}

double NNfunction_sb_cLdR::synapse0x1651ab0() {
   return (neuron0x1631f40()*-0.782603);
}

double NNfunction_sb_cLdR::synapse0x1651af0() {
   return (neuron0x1632910()*1.47217);
}

double NNfunction_sb_cLdR::synapse0x1651b30() {
   return (neuron0x162b460()*-3.26549);
}

double NNfunction_sb_cLdR::synapse0x1651b70() {
   return (neuron0x162be30()*3.02612);
}

double NNfunction_sb_cLdR::synapse0x1651bb0() {
   return (neuron0x16356a0()*3.59458);
}

double NNfunction_sb_cLdR::synapse0x1651bf0() {
   return (neuron0x1636070()*-0.16932);
}

double NNfunction_sb_cLdR::synapse0x1651c30() {
   return (neuron0x1636a40()*0.466467);
}

double NNfunction_sb_cLdR::synapse0x1651c70() {
   return (neuron0x1637410()*-0.892143);
}

double NNfunction_sb_cLdR::synapse0x1651cb0() {
   return (neuron0x1637de0()*-0.0908707);
}

double NNfunction_sb_cLdR::synapse0x1651cf0() {
   return (neuron0x16387b0()*-1.02707);
}

double NNfunction_sb_cLdR::synapse0x1651d30() {
   return (neuron0x1639180()*0.893108);
}

double NNfunction_sb_cLdR::synapse0x1651d70() {
   return (neuron0x1639b50()*-1.8171);
}

double NNfunction_sb_cLdR::synapse0x1651920() {
   return (neuron0x162fbe0()*-1.43374);
}

double NNfunction_sb_cLdR::synapse0x1651960() {
   return (neuron0x163c730()*-0.805445);
}

double NNfunction_sb_cLdR::synapse0x16519a0() {
   return (neuron0x163d100()*-0.377999);
}

double NNfunction_sb_cLdR::synapse0x16519e0() {
   return (neuron0x163dad0()*-0.518844);
}

double NNfunction_sb_cLdR::synapse0x1651fc0() {
   return (neuron0x163e4a0()*-0.498552);
}

double NNfunction_sb_cLdR::synapse0x1652000() {
   return (neuron0x163ee70()*-0.204527);
}

double NNfunction_sb_cLdR::synapse0x1652040() {
   return (neuron0x163f840()*-0.513749);
}

double NNfunction_sb_cLdR::synapse0x1652080() {
   return (neuron0x1640210()*1.18899);
}

double NNfunction_sb_cLdR::synapse0x16520c0() {
   return (neuron0x1640be0()*0.818968);
}

double NNfunction_sb_cLdR::synapse0x1652100() {
   return (neuron0x16417c0()*0.5605);
}

double NNfunction_sb_cLdR::synapse0x1652140() {
   return (neuron0x1642190()*0.714246);
}

double NNfunction_sb_cLdR::synapse0x1652180() {
   return (neuron0x1633010()*-1.72198);
}

double NNfunction_sb_cLdR::synapse0x16521c0() {
   return (neuron0x16339e0()*0.212449);
}

double NNfunction_sb_cLdR::synapse0x1652200() {
   return (neuron0x16343b0()*-1.78277);
}

double NNfunction_sb_cLdR::synapse0x1652240() {
   return (neuron0x16469f0()*0.812312);
}

double NNfunction_sb_cLdR::synapse0x1652280() {
   return (neuron0x16472a0()*3.77033);
}

double NNfunction_sb_cLdR::synapse0x16522c0() {
   return (neuron0x1647c70()*1.04596);
}

double NNfunction_sb_cLdR::synapse0x1652300() {
   return (neuron0x1648640()*0.589414);
}

double NNfunction_sb_cLdR::synapse0x1652680() {
   return (neuron0x16245c0()*-0.474882);
}

double NNfunction_sb_cLdR::synapse0x16526c0() {
   return (neuron0x1624ed0()*0.719273);
}

double NNfunction_sb_cLdR::synapse0x1652700() {
   return (neuron0x16259b0()*0.322977);
}

double NNfunction_sb_cLdR::synapse0x1652740() {
   return (neuron0x13df240()*0.609102);
}

double NNfunction_sb_cLdR::synapse0x1652780() {
   return (neuron0x16267d0()*0.284516);
}

double NNfunction_sb_cLdR::synapse0x16527c0() {
   return (neuron0x16271a0()*0.847498);
}

double NNfunction_sb_cLdR::synapse0x1652800() {
   return (neuron0x1627f70()*-0.111395);
}

double NNfunction_sb_cLdR::synapse0x1652840() {
   return (neuron0x1628940()*0.329634);
}

double NNfunction_sb_cLdR::synapse0x1652880() {
   return (neuron0x1629310()*0.969926);
}

double NNfunction_sb_cLdR::synapse0x16528c0() {
   return (neuron0x1629df0()*0.49765);
}

double NNfunction_sb_cLdR::synapse0x1652900() {
   return (neuron0x162a7c0()*1.11326);
}

double NNfunction_sb_cLdR::synapse0x1652940() {
   return (neuron0x16278a0()*0.519845);
}

double NNfunction_sb_cLdR::synapse0x1652980() {
   return (neuron0x162c370()*-0.334453);
}

double NNfunction_sb_cLdR::synapse0x16529c0() {
   return (neuron0x162cd40()*-0.363145);
}

double NNfunction_sb_cLdR::synapse0x1652a00() {
   return (neuron0x162d710()*0.256387);
}

double NNfunction_sb_cLdR::synapse0x1652a40() {
   return (neuron0x162e0e0()*0.135307);
}

double NNfunction_sb_cLdR::synapse0x16524d0() {
   return (neuron0x162fef0()*-0.571527);
}

double NNfunction_sb_cLdR::synapse0x1652510() {
   return (neuron0x16301d0()*0.540524);
}

double NNfunction_sb_cLdR::synapse0x1652b90() {
   return (neuron0x1630ba0()*0.565339);
}

double NNfunction_sb_cLdR::synapse0x1652bd0() {
   return (neuron0x1631570()*0.492728);
}

double NNfunction_sb_cLdR::synapse0x1652c10() {
   return (neuron0x1631f40()*-0.104549);
}

double NNfunction_sb_cLdR::synapse0x1652c50() {
   return (neuron0x1632910()*0.510001);
}

double NNfunction_sb_cLdR::synapse0x1652c90() {
   return (neuron0x162b460()*0.0205048);
}

double NNfunction_sb_cLdR::synapse0x1652cd0() {
   return (neuron0x162be30()*1.27063);
}

double NNfunction_sb_cLdR::synapse0x1652d10() {
   return (neuron0x16356a0()*-0.777506);
}

double NNfunction_sb_cLdR::synapse0x1652d50() {
   return (neuron0x1636070()*0.938994);
}

double NNfunction_sb_cLdR::synapse0x1652d90() {
   return (neuron0x1636a40()*0.957918);
}

double NNfunction_sb_cLdR::synapse0x1652dd0() {
   return (neuron0x1637410()*1.5942);
}

double NNfunction_sb_cLdR::synapse0x1652e10() {
   return (neuron0x1637de0()*0.799002);
}

double NNfunction_sb_cLdR::synapse0x1652e50() {
   return (neuron0x16387b0()*-0.0633585);
}

double NNfunction_sb_cLdR::synapse0x1652e90() {
   return (neuron0x1639180()*0.597819);
}

double NNfunction_sb_cLdR::synapse0x1652ed0() {
   return (neuron0x1639b50()*0.393674);
}

double NNfunction_sb_cLdR::synapse0x1652a80() {
   return (neuron0x162fbe0()*0.264043);
}

double NNfunction_sb_cLdR::synapse0x1652ac0() {
   return (neuron0x163c730()*0.22113);
}

double NNfunction_sb_cLdR::synapse0x1652b00() {
   return (neuron0x163d100()*0.560837);
}

double NNfunction_sb_cLdR::synapse0x1652b40() {
   return (neuron0x163dad0()*-0.216677);
}

double NNfunction_sb_cLdR::synapse0x1653120() {
   return (neuron0x163e4a0()*0.172817);
}

double NNfunction_sb_cLdR::synapse0x1653160() {
   return (neuron0x163ee70()*-0.333215);
}

double NNfunction_sb_cLdR::synapse0x16531a0() {
   return (neuron0x163f840()*0.478442);
}

double NNfunction_sb_cLdR::synapse0x16531e0() {
   return (neuron0x1640210()*1.20279);
}

double NNfunction_sb_cLdR::synapse0x1653220() {
   return (neuron0x1640be0()*1.48107);
}

double NNfunction_sb_cLdR::synapse0x1653260() {
   return (neuron0x16417c0()*-0.576758);
}

double NNfunction_sb_cLdR::synapse0x16532a0() {
   return (neuron0x1642190()*0.399992);
}

double NNfunction_sb_cLdR::synapse0x16532e0() {
   return (neuron0x1633010()*-0.544722);
}

double NNfunction_sb_cLdR::synapse0x1653320() {
   return (neuron0x16339e0()*-0.0130179);
}

double NNfunction_sb_cLdR::synapse0x1653360() {
   return (neuron0x16343b0()*0.466593);
}

double NNfunction_sb_cLdR::synapse0x16533a0() {
   return (neuron0x16469f0()*0.800353);
}

double NNfunction_sb_cLdR::synapse0x16533e0() {
   return (neuron0x16472a0()*0.650844);
}

double NNfunction_sb_cLdR::synapse0x1653420() {
   return (neuron0x1647c70()*0.358497);
}

double NNfunction_sb_cLdR::synapse0x1653460() {
   return (neuron0x1648640()*0.168826);
}

double NNfunction_sb_cLdR::synapse0x1624580() {
   return (neuron0x164f840()*12.2929);
}

double NNfunction_sb_cLdR::synapse0x16536c0() {
   return (neuron0x164fbe0()*0.492323);
}

double NNfunction_sb_cLdR::synapse0x1653700() {
   return (neuron0x1650080()*-8.31772);
}

double NNfunction_sb_cLdR::synapse0x1653740() {
   return (neuron0x16511e0()*-6.26109);
}

double NNfunction_sb_cLdR::synapse0x1653780() {
   return (neuron0x1652340()*1.59377);
}

