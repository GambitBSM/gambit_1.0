#include "NNfunction_sg_uR.h"
#include <cmath>

double NNfunction_sg_uR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3743)/15.1393;
   input1 = (in1 - 54.3252)/889.246;
   input2 = (in2 - 483.019)/527.019;
   input3 = (in3 - 272.999)/764.726;
   input4 = (in4 - 1057.75)/853.805;
   input5 = (in5 - 970.673)/870.819;
   input6 = (in6 - 975.179)/871.4;
   input7 = (in7 - 966.911)/847.148;
   input8 = (in8 - 964.073)/877.945;
   input9 = (in9 - 956.05)/869.781;
   input10 = (in10 - 955.2)/849.033;
   input11 = (in11 - 953.492)/823.38;
   input12 = (in12 - 955.824)/824.883;
   input13 = (in13 - 723.443)/569.071;
   input14 = (in14 - 902.275)/740.663;
   input15 = (in15 - 962.271)/804.379;
   input16 = (in16 - 647.876)/515.047;
   input17 = (in17 - 966.7)/836.822;
   input18 = (in18 - 967.207)/840.169;
   input19 = (in19 - 959.83)/792.923;
   input20 = (in20 - -223.686)/550.048;
   input21 = (in21 - -296.376)/1141.11;
   input22 = (in22 - -29.9887)/1130.52;
   input23 = (in23 - -22.6524)/624.954;
   switch(index) {
     case 0:
         return neuron0x384a9f0();
     default:
         return 0.;
   }
}

double NNfunction_sg_uR::Value(int index, double* input) {
   input0 = (input[0] - 23.3743)/15.1393;
   input1 = (input[1] - 54.3252)/889.246;
   input2 = (input[2] - 483.019)/527.019;
   input3 = (input[3] - 272.999)/764.726;
   input4 = (input[4] - 1057.75)/853.805;
   input5 = (input[5] - 970.673)/870.819;
   input6 = (input[6] - 975.179)/871.4;
   input7 = (input[7] - 966.911)/847.148;
   input8 = (input[8] - 964.073)/877.945;
   input9 = (input[9] - 956.05)/869.781;
   input10 = (input[10] - 955.2)/849.033;
   input11 = (input[11] - 953.492)/823.38;
   input12 = (input[12] - 955.824)/824.883;
   input13 = (input[13] - 723.443)/569.071;
   input14 = (input[14] - 902.275)/740.663;
   input15 = (input[15] - 962.271)/804.379;
   input16 = (input[16] - 647.876)/515.047;
   input17 = (input[17] - 966.7)/836.822;
   input18 = (input[18] - 967.207)/840.169;
   input19 = (input[19] - 959.83)/792.923;
   input20 = (input[20] - -223.686)/550.048;
   input21 = (input[21] - -296.376)/1141.11;
   input22 = (input[22] - -29.9887)/1130.52;
   input23 = (input[23] - -22.6524)/624.954;
   switch(index) {
     case 0:
         return neuron0x384a9f0();
     default:
         return 0.;
   }
}

double NNfunction_sg_uR::neuron0x3815a60() {
   return input0;
}

double NNfunction_sg_uR::neuron0x3815d10() {
   return input1;
}

double NNfunction_sg_uR::neuron0x3816050() {
   return input2;
}

double NNfunction_sg_uR::neuron0x3816390() {
   return input3;
}

double NNfunction_sg_uR::neuron0x38166d0() {
   return input4;
}

double NNfunction_sg_uR::neuron0x3816a10() {
   return input5;
}

double NNfunction_sg_uR::neuron0x3816d50() {
   return input6;
}

double NNfunction_sg_uR::neuron0x3817090() {
   return input7;
}

double NNfunction_sg_uR::neuron0x38173d0() {
   return input8;
}

double NNfunction_sg_uR::neuron0x3817710() {
   return input9;
}

double NNfunction_sg_uR::neuron0x3817a50() {
   return input10;
}

double NNfunction_sg_uR::neuron0x3817d90() {
   return input11;
}

double NNfunction_sg_uR::neuron0x38180d0() {
   return input12;
}

double NNfunction_sg_uR::neuron0x3818410() {
   return input13;
}

double NNfunction_sg_uR::neuron0x3818750() {
   return input14;
}

double NNfunction_sg_uR::neuron0x3818a90() {
   return input15;
}

double NNfunction_sg_uR::neuron0x3818dd0() {
   return input16;
}

double NNfunction_sg_uR::neuron0x3819330() {
   return input17;
}

double NNfunction_sg_uR::neuron0x3819550() {
   return input18;
}

double NNfunction_sg_uR::neuron0x3819890() {
   return input19;
}

double NNfunction_sg_uR::neuron0x3819bd0() {
   return input20;
}

double NNfunction_sg_uR::neuron0x3819f10() {
   return input21;
}

double NNfunction_sg_uR::neuron0x381a250() {
   return input22;
}

double NNfunction_sg_uR::neuron0x381a590() {
   return input23;
}

double NNfunction_sg_uR::input0x381aa00() {
   double input = -0.0185948;
   input += synapse0x381ad40();
   input += synapse0x381ad80();
   input += synapse0x381adc0();
   input += synapse0x381ae00();
   input += synapse0x381ae40();
   input += synapse0x381ae80();
   input += synapse0x381aec0();
   input += synapse0x381af00();
   input += synapse0x381af40();
   input += synapse0x381af80();
   input += synapse0x381afc0();
   input += synapse0x381b000();
   input += synapse0x381b040();
   input += synapse0x381b080();
   input += synapse0x381b0c0();
   input += synapse0x381b100();
   input += synapse0x381ab90();
   input += synapse0x381abd0();
   input += synapse0x35d1fe0();
   input += synapse0x35d2020();
   input += synapse0x381b250();
   input += synapse0x381b290();
   input += synapse0x381b2d0();
   input += synapse0x381b310();
   return input;
}

double NNfunction_sg_uR::neuron0x381aa00() {
   double input = input0x381aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381b350() {
   double input = 0.442324;
   input += synapse0x381b690();
   input += synapse0x381b6d0();
   input += synapse0x381b710();
   input += synapse0x381b750();
   input += synapse0x381b790();
   input += synapse0x381b7d0();
   input += synapse0x381b810();
   input += synapse0x381b850();
   input += synapse0x381b890();
   input += synapse0x381b140();
   input += synapse0x381b180();
   input += synapse0x381b1c0();
   input += synapse0x381b200();
   input += synapse0x381bae0();
   input += synapse0x381bb20();
   input += synapse0x381bb60();
   input += synapse0x381b4e0();
   input += synapse0x381b520();
   input += synapse0x381bcb0();
   input += synapse0x381bcf0();
   input += synapse0x381bd30();
   input += synapse0x381bd70();
   input += synapse0x381bdb0();
   input += synapse0x381bdf0();
   return input;
}

double NNfunction_sg_uR::neuron0x381b350() {
   double input = input0x381b350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381be30() {
   double input = -0.0657035;
   input += synapse0x381c170();
   input += synapse0x381c1b0();
   input += synapse0x381c1f0();
   input += synapse0x381c230();
   input += synapse0x381c270();
   input += synapse0x381c2b0();
   input += synapse0x381c2f0();
   input += synapse0x381c330();
   input += synapse0x381c370();
   input += synapse0x381c3b0();
   input += synapse0x381c3f0();
   input += synapse0x381c430();
   input += synapse0x381c470();
   input += synapse0x381c4b0();
   input += synapse0x381c4f0();
   input += synapse0x381c530();
   input += synapse0x381bfc0();
   input += synapse0x381c000();
   input += synapse0x2382370();
   input += synapse0x35dfb10();
   input += synapse0x35dfb50();
   input += synapse0x381e470();
   input += synapse0x381e4b0();
   input += synapse0x38157a0();
   return input;
}

double NNfunction_sg_uR::neuron0x381be30() {
   double input = input0x381be30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381b8d0() {
   double input = 0.607389;
   input += synapse0x3815870();
   input += synapse0x35e0390();
   input += synapse0x381ba60();
   input += synapse0x381baa0();
   input += synapse0x381c680();
   input += synapse0x381c6c0();
   input += synapse0x381c700();
   input += synapse0x381c740();
   input += synapse0x381c780();
   input += synapse0x381c7c0();
   input += synapse0x381c800();
   input += synapse0x381c840();
   input += synapse0x381c880();
   input += synapse0x381c8c0();
   input += synapse0x381c900();
   input += synapse0x381c940();
   input += synapse0x38157e0();
   input += synapse0x3815820();
   input += synapse0x381ca90();
   input += synapse0x381cad0();
   input += synapse0x381cb10();
   input += synapse0x381cb50();
   input += synapse0x381cb90();
   input += synapse0x381cbd0();
   return input;
}

double NNfunction_sg_uR::neuron0x381b8d0() {
   double input = input0x381b8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381cc10() {
   double input = -0.30225;
   input += synapse0x381cf50();
   input += synapse0x381cf90();
   input += synapse0x381cfd0();
   input += synapse0x381d010();
   input += synapse0x381d050();
   input += synapse0x381d090();
   input += synapse0x381d0d0();
   input += synapse0x381d110();
   input += synapse0x381d150();
   input += synapse0x381d190();
   input += synapse0x381d1d0();
   input += synapse0x381d210();
   input += synapse0x381d250();
   input += synapse0x381d290();
   input += synapse0x381d2d0();
   input += synapse0x381d310();
   input += synapse0x381d460();
   input += synapse0x381cda0();
   input += synapse0x381cde0();
   input += synapse0x381e5b0();
   input += synapse0x381e5f0();
   input += synapse0x381e630();
   input += synapse0x381e670();
   input += synapse0x381e6b0();
   return input;
}

double NNfunction_sg_uR::neuron0x381cc10() {
   double input = input0x381cc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381e6f0() {
   double input = 1.54507;
   input += synapse0x381ea30();
   input += synapse0x381ea70();
   input += synapse0x381eab0();
   input += synapse0x381eaf0();
   input += synapse0x381eb30();
   input += synapse0x381eb70();
   input += synapse0x381ebb0();
   input += synapse0x381ebf0();
   input += synapse0x381ec30();
   input += synapse0x35dfe60();
   input += synapse0x35dfea0();
   input += synapse0x35dfee0();
   input += synapse0x35dff20();
   input += synapse0x35dff60();
   input += synapse0x35dffa0();
   input += synapse0x35dffe0();
   input += synapse0x381e880();
   input += synapse0x381e8c0();
   input += synapse0x35e0130();
   input += synapse0x35e0170();
   input += synapse0x35e01b0();
   input += synapse0x35e01f0();
   input += synapse0x35e0230();
   input += synapse0x381f480();
   return input;
}

double NNfunction_sg_uR::neuron0x381e6f0() {
   double input = input0x381e6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381f4c0() {
   double input = -0.0366552;
   input += synapse0x381f800();
   input += synapse0x381f840();
   input += synapse0x381f880();
   input += synapse0x381f8c0();
   input += synapse0x381f900();
   input += synapse0x381f940();
   input += synapse0x381f980();
   input += synapse0x381f9c0();
   input += synapse0x381fa00();
   input += synapse0x381fa40();
   input += synapse0x381fa80();
   input += synapse0x381fac0();
   input += synapse0x381fb00();
   input += synapse0x381fb40();
   input += synapse0x381fb80();
   input += synapse0x381fbc0();
   input += synapse0x381f650();
   input += synapse0x381f690();
   input += synapse0x381fd10();
   input += synapse0x381fd50();
   input += synapse0x381fd90();
   input += synapse0x381fdd0();
   input += synapse0x381fe10();
   input += synapse0x381fe50();
   return input;
}

double NNfunction_sg_uR::neuron0x381f4c0() {
   double input = input0x381f4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381fe90() {
   double input = -0.281061;
   input += synapse0x38201d0();
   input += synapse0x3820210();
   input += synapse0x3820250();
   input += synapse0x3820290();
   input += synapse0x38202d0();
   input += synapse0x3820310();
   input += synapse0x3820350();
   input += synapse0x3820390();
   input += synapse0x38203d0();
   input += synapse0x3820410();
   input += synapse0x3820450();
   input += synapse0x3820490();
   input += synapse0x38204d0();
   input += synapse0x3820510();
   input += synapse0x3820550();
   input += synapse0x3820590();
   input += synapse0x3820020();
   input += synapse0x3820060();
   input += synapse0x38206e0();
   input += synapse0x3820720();
   input += synapse0x3820760();
   input += synapse0x38207a0();
   input += synapse0x38207e0();
   input += synapse0x3820820();
   return input;
}

double NNfunction_sg_uR::neuron0x381fe90() {
   double input = input0x381fe90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3820860() {
   double input = 1.9399;
   input += synapse0x3819220();
   input += synapse0x3819260();
   input += synapse0x38192a0();
   input += synapse0x38192e0();
   input += synapse0x3820db0();
   input += synapse0x3820df0();
   input += synapse0x3820e30();
   input += synapse0x3820e70();
   input += synapse0x3820eb0();
   input += synapse0x3820ef0();
   input += synapse0x3820f30();
   input += synapse0x3820f70();
   input += synapse0x3820fb0();
   input += synapse0x3820ff0();
   input += synapse0x3821030();
   input += synapse0x3821070();
   input += synapse0x38209f0();
   input += synapse0x3820a30();
   input += synapse0x38211c0();
   input += synapse0x3821200();
   input += synapse0x3821240();
   input += synapse0x3821280();
   input += synapse0x38212c0();
   input += synapse0x3821300();
   return input;
}

double NNfunction_sg_uR::neuron0x3820860() {
   double input = input0x3820860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3821340() {
   double input = -2.72146;
   input += synapse0x3821680();
   input += synapse0x38216c0();
   input += synapse0x3821700();
   input += synapse0x3821740();
   input += synapse0x3821780();
   input += synapse0x38217c0();
   input += synapse0x3821800();
   input += synapse0x3821840();
   input += synapse0x3821880();
   input += synapse0x38218c0();
   input += synapse0x3821900();
   input += synapse0x3821940();
   input += synapse0x3821980();
   input += synapse0x38219c0();
   input += synapse0x3821a00();
   input += synapse0x3821a40();
   input += synapse0x38214d0();
   input += synapse0x3821510();
   input += synapse0x3821b90();
   input += synapse0x3821bd0();
   input += synapse0x3821c10();
   input += synapse0x3821c50();
   input += synapse0x3821c90();
   input += synapse0x3821cd0();
   return input;
}

double NNfunction_sg_uR::neuron0x3821340() {
   double input = input0x3821340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3821d10() {
   double input = 0.709075;
   input += synapse0x3822050();
   input += synapse0x3822090();
   input += synapse0x38220d0();
   input += synapse0x3822110();
   input += synapse0x3822150();
   input += synapse0x3822190();
   input += synapse0x38221d0();
   input += synapse0x3822210();
   input += synapse0x3822250();
   input += synapse0x3822290();
   input += synapse0x38222d0();
   input += synapse0x3822310();
   input += synapse0x3822350();
   input += synapse0x3822390();
   input += synapse0x38223d0();
   input += synapse0x3822410();
   input += synapse0x3821ea0();
   input += synapse0x3821ee0();
   input += synapse0x381ec70();
   input += synapse0x381ecb0();
   input += synapse0x381ecf0();
   input += synapse0x381ed30();
   input += synapse0x381ed70();
   input += synapse0x381edb0();
   return input;
}

double NNfunction_sg_uR::neuron0x3821d10() {
   double input = input0x3821d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x381edf0() {
   double input = -2.36668;
   input += synapse0x381f130();
   input += synapse0x381f170();
   input += synapse0x381f1b0();
   input += synapse0x381f1f0();
   input += synapse0x381f230();
   input += synapse0x381f270();
   input += synapse0x381f2b0();
   input += synapse0x381f2f0();
   input += synapse0x381f330();
   input += synapse0x381f370();
   input += synapse0x381f3b0();
   input += synapse0x381f3f0();
   input += synapse0x381f430();
   input += synapse0x3823570();
   input += synapse0x38235b0();
   input += synapse0x38235f0();
   input += synapse0x381ef80();
   input += synapse0x381efc0();
   input += synapse0x3823740();
   input += synapse0x3823780();
   input += synapse0x38237c0();
   input += synapse0x3823800();
   input += synapse0x3823840();
   input += synapse0x3823880();
   return input;
}

double NNfunction_sg_uR::neuron0x381edf0() {
   double input = input0x381edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38238c0() {
   double input = -0.615205;
   input += synapse0x3823c00();
   input += synapse0x3823c40();
   input += synapse0x3823c80();
   input += synapse0x3823cc0();
   input += synapse0x3823d00();
   input += synapse0x3823d40();
   input += synapse0x3823d80();
   input += synapse0x3823dc0();
   input += synapse0x3823e00();
   input += synapse0x3823e40();
   input += synapse0x3823e80();
   input += synapse0x3823ec0();
   input += synapse0x3823f00();
   input += synapse0x3823f40();
   input += synapse0x3823f80();
   input += synapse0x3823fc0();
   input += synapse0x3823a50();
   input += synapse0x3823a90();
   input += synapse0x3824110();
   input += synapse0x3824150();
   input += synapse0x3824190();
   input += synapse0x38241d0();
   input += synapse0x3824210();
   input += synapse0x3824250();
   return input;
}

double NNfunction_sg_uR::neuron0x38238c0() {
   double input = input0x38238c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3824290() {
   double input = -0.384672;
   input += synapse0x38245d0();
   input += synapse0x3824610();
   input += synapse0x3824650();
   input += synapse0x3824690();
   input += synapse0x38246d0();
   input += synapse0x3824710();
   input += synapse0x3824750();
   input += synapse0x3824790();
   input += synapse0x38247d0();
   input += synapse0x3824810();
   input += synapse0x3824850();
   input += synapse0x3824890();
   input += synapse0x38248d0();
   input += synapse0x3824910();
   input += synapse0x3824950();
   input += synapse0x3824990();
   input += synapse0x3824420();
   input += synapse0x3824460();
   input += synapse0x3824ae0();
   input += synapse0x3824b20();
   input += synapse0x3824b60();
   input += synapse0x3824ba0();
   input += synapse0x3824be0();
   input += synapse0x3824c20();
   return input;
}

double NNfunction_sg_uR::neuron0x3824290() {
   double input = input0x3824290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3824c60() {
   double input = 4.29621;
   input += synapse0x3824fa0();
   input += synapse0x3824fe0();
   input += synapse0x3825020();
   input += synapse0x3825060();
   input += synapse0x38250a0();
   input += synapse0x38250e0();
   input += synapse0x3825120();
   input += synapse0x3825160();
   input += synapse0x38251a0();
   input += synapse0x38251e0();
   input += synapse0x3825220();
   input += synapse0x3825260();
   input += synapse0x38252a0();
   input += synapse0x38252e0();
   input += synapse0x3825320();
   input += synapse0x3825360();
   input += synapse0x3824df0();
   input += synapse0x3824e30();
   input += synapse0x38254b0();
   input += synapse0x38254f0();
   input += synapse0x3825530();
   input += synapse0x3825570();
   input += synapse0x38255b0();
   input += synapse0x38255f0();
   return input;
}

double NNfunction_sg_uR::neuron0x3824c60() {
   double input = input0x3824c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3825630() {
   double input = -3.61903;
   input += synapse0x3825970();
   input += synapse0x3815bf0();
   input += synapse0x3815c30();
   input += synapse0x3815f30();
   input += synapse0x3815f70();
   input += synapse0x3816270();
   input += synapse0x38162b0();
   input += synapse0x38165b0();
   input += synapse0x38165f0();
   input += synapse0x38168f0();
   input += synapse0x3816930();
   input += synapse0x3816c30();
   input += synapse0x3816c70();
   input += synapse0x3816f70();
   input += synapse0x3816fb0();
   input += synapse0x38172b0();
   input += synapse0x38172f0();
   input += synapse0x38175f0();
   input += synapse0x3817630();
   input += synapse0x3817930();
   input += synapse0x3817970();
   input += synapse0x3817c70();
   input += synapse0x3817cb0();
   input += synapse0x3817fb0();
   return input;
}

double NNfunction_sg_uR::neuron0x3825630() {
   double input = input0x3825630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3827440() {
   double input = 0.416359;
   input += synapse0x3817ff0();
   input += synapse0x3818cb0();
   input += synapse0x3818cf0();
   input += synapse0x38257c0();
   input += synapse0x3825800();
   input += synapse0x3818ff0();
   input += synapse0x3819030();
   input += synapse0x23813a0();
   input += synapse0x23813e0();
   input += synapse0x3819770();
   input += synapse0x38197b0();
   input += synapse0x3819ab0();
   input += synapse0x3819af0();
   input += synapse0x3819df0();
   input += synapse0x3819e30();
   input += synapse0x381a130();
   input += synapse0x381a170();
   input += synapse0x381a470();
   input += synapse0x381a4b0();
   input += synapse0x381a7b0();
   input += synapse0x381a7f0();
   input += synapse0x38182f0();
   input += synapse0x3818330();
   input += synapse0x38276e0();
   return input;
}

double NNfunction_sg_uR::neuron0x3827440() {
   double input = input0x3827440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3827720() {
   double input = -0.808426;
   input += synapse0x3827a60();
   input += synapse0x3827aa0();
   input += synapse0x3827ae0();
   input += synapse0x3827b20();
   input += synapse0x3827b60();
   input += synapse0x3827ba0();
   input += synapse0x3827be0();
   input += synapse0x3827c20();
   input += synapse0x3827c60();
   input += synapse0x3827ca0();
   input += synapse0x3827ce0();
   input += synapse0x3827d20();
   input += synapse0x3827d60();
   input += synapse0x3827da0();
   input += synapse0x3827de0();
   input += synapse0x3827e20();
   input += synapse0x38278b0();
   input += synapse0x38278f0();
   input += synapse0x3827f70();
   input += synapse0x3827fb0();
   input += synapse0x3827ff0();
   input += synapse0x3828030();
   input += synapse0x3828070();
   input += synapse0x38280b0();
   return input;
}

double NNfunction_sg_uR::neuron0x3827720() {
   double input = input0x3827720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38280f0() {
   double input = -0.754858;
   input += synapse0x3828430();
   input += synapse0x3828470();
   input += synapse0x38284b0();
   input += synapse0x38284f0();
   input += synapse0x3828530();
   input += synapse0x3828570();
   input += synapse0x38285b0();
   input += synapse0x38285f0();
   input += synapse0x3828630();
   input += synapse0x3828670();
   input += synapse0x38286b0();
   input += synapse0x38286f0();
   input += synapse0x3828730();
   input += synapse0x3828770();
   input += synapse0x38287b0();
   input += synapse0x38287f0();
   input += synapse0x3828280();
   input += synapse0x38282c0();
   input += synapse0x3828940();
   input += synapse0x3828980();
   input += synapse0x38289c0();
   input += synapse0x3828a00();
   input += synapse0x3828a40();
   input += synapse0x3828a80();
   return input;
}

double NNfunction_sg_uR::neuron0x38280f0() {
   double input = input0x38280f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3828ac0() {
   double input = -0.372696;
   input += synapse0x3828e00();
   input += synapse0x3828e40();
   input += synapse0x3828e80();
   input += synapse0x3828ec0();
   input += synapse0x3828f00();
   input += synapse0x3828f40();
   input += synapse0x3828f80();
   input += synapse0x3828fc0();
   input += synapse0x3829000();
   input += synapse0x3829040();
   input += synapse0x3829080();
   input += synapse0x38290c0();
   input += synapse0x3829100();
   input += synapse0x3829140();
   input += synapse0x3829180();
   input += synapse0x38291c0();
   input += synapse0x3828c50();
   input += synapse0x3828c90();
   input += synapse0x3829310();
   input += synapse0x3829350();
   input += synapse0x3829390();
   input += synapse0x38293d0();
   input += synapse0x3829410();
   input += synapse0x3829450();
   return input;
}

double NNfunction_sg_uR::neuron0x3828ac0() {
   double input = input0x3828ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3829490() {
   double input = 1.24806;
   input += synapse0x38297d0();
   input += synapse0x3829810();
   input += synapse0x3829850();
   input += synapse0x3829890();
   input += synapse0x38298d0();
   input += synapse0x3829910();
   input += synapse0x3829950();
   input += synapse0x3829990();
   input += synapse0x38299d0();
   input += synapse0x3829a10();
   input += synapse0x3829a50();
   input += synapse0x3829a90();
   input += synapse0x3829ad0();
   input += synapse0x3829b10();
   input += synapse0x3829b50();
   input += synapse0x3829b90();
   input += synapse0x3829620();
   input += synapse0x3829660();
   input += synapse0x3829ce0();
   input += synapse0x3829d20();
   input += synapse0x3829d60();
   input += synapse0x3829da0();
   input += synapse0x3829de0();
   input += synapse0x3829e20();
   return input;
}

double NNfunction_sg_uR::neuron0x3829490() {
   double input = input0x3829490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3829e60() {
   double input = -2.01756;
   input += synapse0x382a1a0();
   input += synapse0x382a1e0();
   input += synapse0x382a220();
   input += synapse0x382a260();
   input += synapse0x382a2a0();
   input += synapse0x382a2e0();
   input += synapse0x382a320();
   input += synapse0x382a360();
   input += synapse0x382a3a0();
   input += synapse0x3822560();
   input += synapse0x38225a0();
   input += synapse0x38225e0();
   input += synapse0x3822620();
   input += synapse0x3822660();
   input += synapse0x38226a0();
   input += synapse0x38226e0();
   input += synapse0x3829ff0();
   input += synapse0x382a030();
   input += synapse0x3822830();
   input += synapse0x3822870();
   input += synapse0x38228b0();
   input += synapse0x38228f0();
   input += synapse0x3822930();
   input += synapse0x3822970();
   return input;
}

double NNfunction_sg_uR::neuron0x3829e60() {
   double input = input0x3829e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38229b0() {
   double input = 0.614487;
   input += synapse0x3822cf0();
   input += synapse0x3822d30();
   input += synapse0x3822d70();
   input += synapse0x3822db0();
   input += synapse0x3822df0();
   input += synapse0x3822e30();
   input += synapse0x3822e70();
   input += synapse0x3822eb0();
   input += synapse0x3822ef0();
   input += synapse0x3822f30();
   input += synapse0x3822f70();
   input += synapse0x3822fb0();
   input += synapse0x3822ff0();
   input += synapse0x3823030();
   input += synapse0x3823070();
   input += synapse0x38230b0();
   input += synapse0x3822b40();
   input += synapse0x3822b80();
   input += synapse0x3823200();
   input += synapse0x3823240();
   input += synapse0x3823280();
   input += synapse0x38232c0();
   input += synapse0x3823300();
   input += synapse0x3823340();
   return input;
}

double NNfunction_sg_uR::neuron0x38229b0() {
   double input = input0x38229b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3823380() {
   double input = 0.868972;
   input += synapse0x3823510();
   input += synapse0x382c5a0();
   input += synapse0x382c5e0();
   input += synapse0x382c620();
   input += synapse0x382c660();
   input += synapse0x382c6a0();
   input += synapse0x382c6e0();
   input += synapse0x382c720();
   input += synapse0x382c760();
   input += synapse0x382c7a0();
   input += synapse0x382c7e0();
   input += synapse0x382c820();
   input += synapse0x382c860();
   input += synapse0x382c8a0();
   input += synapse0x382c8e0();
   input += synapse0x382c920();
   input += synapse0x382c3f0();
   input += synapse0x382c430();
   input += synapse0x382ca70();
   input += synapse0x382cab0();
   input += synapse0x382caf0();
   input += synapse0x382cb30();
   input += synapse0x382cb70();
   input += synapse0x382cbb0();
   return input;
}

double NNfunction_sg_uR::neuron0x3823380() {
   double input = input0x3823380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382cbf0() {
   double input = 0.486722;
   input += synapse0x382cf30();
   input += synapse0x382cf70();
   input += synapse0x382cfb0();
   input += synapse0x382cff0();
   input += synapse0x382d030();
   input += synapse0x382d070();
   input += synapse0x382d0b0();
   input += synapse0x382d0f0();
   input += synapse0x382d130();
   input += synapse0x382d170();
   input += synapse0x382d1b0();
   input += synapse0x382d1f0();
   input += synapse0x382d230();
   input += synapse0x382d270();
   input += synapse0x382d2b0();
   input += synapse0x382d2f0();
   input += synapse0x382cd80();
   input += synapse0x382cdc0();
   input += synapse0x382d440();
   input += synapse0x382d480();
   input += synapse0x382d4c0();
   input += synapse0x382d500();
   input += synapse0x382d540();
   input += synapse0x382d580();
   return input;
}

double NNfunction_sg_uR::neuron0x382cbf0() {
   double input = input0x382cbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382d5c0() {
   double input = -1.02163;
   input += synapse0x382d900();
   input += synapse0x382d940();
   input += synapse0x382d980();
   input += synapse0x382d9c0();
   input += synapse0x382da00();
   input += synapse0x382da40();
   input += synapse0x382da80();
   input += synapse0x382dac0();
   input += synapse0x382db00();
   input += synapse0x382db40();
   input += synapse0x382db80();
   input += synapse0x382dbc0();
   input += synapse0x382dc00();
   input += synapse0x382dc40();
   input += synapse0x382dc80();
   input += synapse0x382dcc0();
   input += synapse0x382d750();
   input += synapse0x382d790();
   input += synapse0x382de10();
   input += synapse0x382de50();
   input += synapse0x382de90();
   input += synapse0x382ded0();
   input += synapse0x382df10();
   input += synapse0x382df50();
   return input;
}

double NNfunction_sg_uR::neuron0x382d5c0() {
   double input = input0x382d5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382df90() {
   double input = 0.0424226;
   input += synapse0x382e2d0();
   input += synapse0x382e310();
   input += synapse0x382e350();
   input += synapse0x382e390();
   input += synapse0x382e3d0();
   input += synapse0x382e410();
   input += synapse0x382e450();
   input += synapse0x382e490();
   input += synapse0x382e4d0();
   input += synapse0x382e510();
   input += synapse0x382e550();
   input += synapse0x382e590();
   input += synapse0x382e5d0();
   input += synapse0x382e610();
   input += synapse0x382e650();
   input += synapse0x382e690();
   input += synapse0x382e120();
   input += synapse0x382e160();
   input += synapse0x382e7e0();
   input += synapse0x382e820();
   input += synapse0x382e860();
   input += synapse0x382e8a0();
   input += synapse0x382e8e0();
   input += synapse0x382e920();
   return input;
}

double NNfunction_sg_uR::neuron0x382df90() {
   double input = input0x382df90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382e960() {
   double input = 0.0384128;
   input += synapse0x382eca0();
   input += synapse0x382ece0();
   input += synapse0x382ed20();
   input += synapse0x382ed60();
   input += synapse0x382eda0();
   input += synapse0x382ede0();
   input += synapse0x382ee20();
   input += synapse0x382ee60();
   input += synapse0x382eea0();
   input += synapse0x382eee0();
   input += synapse0x382ef20();
   input += synapse0x382ef60();
   input += synapse0x382efa0();
   input += synapse0x382efe0();
   input += synapse0x382f020();
   input += synapse0x382f060();
   input += synapse0x382eaf0();
   input += synapse0x382eb30();
   input += synapse0x382f1b0();
   input += synapse0x382f1f0();
   input += synapse0x382f230();
   input += synapse0x382f270();
   input += synapse0x382f2b0();
   input += synapse0x382f2f0();
   return input;
}

double NNfunction_sg_uR::neuron0x382e960() {
   double input = input0x382e960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382f330() {
   double input = -0.146772;
   input += synapse0x382f670();
   input += synapse0x382f6b0();
   input += synapse0x382f6f0();
   input += synapse0x382f730();
   input += synapse0x382f770();
   input += synapse0x382f7b0();
   input += synapse0x382f7f0();
   input += synapse0x382f830();
   input += synapse0x382f870();
   input += synapse0x382f8b0();
   input += synapse0x382f8f0();
   input += synapse0x382f930();
   input += synapse0x382f970();
   input += synapse0x382f9b0();
   input += synapse0x382f9f0();
   input += synapse0x382fa30();
   input += synapse0x382f4c0();
   input += synapse0x382f500();
   input += synapse0x382fb80();
   input += synapse0x382fbc0();
   input += synapse0x382fc00();
   input += synapse0x382fc40();
   input += synapse0x382fc80();
   input += synapse0x382fcc0();
   return input;
}

double NNfunction_sg_uR::neuron0x382f330() {
   double input = input0x382f330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382fd00() {
   double input = 0.480216;
   input += synapse0x3830040();
   input += synapse0x3830080();
   input += synapse0x38300c0();
   input += synapse0x3830100();
   input += synapse0x3830140();
   input += synapse0x3830180();
   input += synapse0x38301c0();
   input += synapse0x3830200();
   input += synapse0x3830240();
   input += synapse0x3830280();
   input += synapse0x38302c0();
   input += synapse0x3830300();
   input += synapse0x3830340();
   input += synapse0x3830380();
   input += synapse0x38303c0();
   input += synapse0x3830400();
   input += synapse0x382fe90();
   input += synapse0x382fed0();
   input += synapse0x3830550();
   input += synapse0x3830590();
   input += synapse0x38305d0();
   input += synapse0x3830610();
   input += synapse0x3830650();
   input += synapse0x3830690();
   return input;
}

double NNfunction_sg_uR::neuron0x382fd00() {
   double input = input0x382fd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38306d0() {
   double input = 0.0442791;
   input += synapse0x3830a10();
   input += synapse0x3830a50();
   input += synapse0x3830a90();
   input += synapse0x3830ad0();
   input += synapse0x3830b10();
   input += synapse0x3830b50();
   input += synapse0x3830b90();
   input += synapse0x3830bd0();
   input += synapse0x3830c10();
   input += synapse0x3830c50();
   input += synapse0x3830c90();
   input += synapse0x3830cd0();
   input += synapse0x3830d10();
   input += synapse0x3830d50();
   input += synapse0x3830d90();
   input += synapse0x3830dd0();
   input += synapse0x3830860();
   input += synapse0x38308a0();
   input += synapse0x3830f20();
   input += synapse0x3830f60();
   input += synapse0x3830fa0();
   input += synapse0x3830fe0();
   input += synapse0x3831020();
   input += synapse0x3831060();
   return input;
}

double NNfunction_sg_uR::neuron0x38306d0() {
   double input = input0x38306d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38310a0() {
   double input = 0.784021;
   input += synapse0x38313e0();
   input += synapse0x38259b0();
   input += synapse0x38259f0();
   input += synapse0x3825a30();
   input += synapse0x3825c80();
   input += synapse0x3825cc0();
   input += synapse0x3825d00();
   input += synapse0x3825f50();
   input += synapse0x3825f90();
   input += synapse0x38261e0();
   input += synapse0x3826220();
   input += synapse0x3826260();
   input += synapse0x38264b0();
   input += synapse0x38264f0();
   input += synapse0x3826740();
   input += synapse0x3826780();
   input += synapse0x3831230();
   input += synapse0x3831270();
   input += synapse0x38268d0();
   input += synapse0x3826de0();
   input += synapse0x3826e20();
   input += synapse0x3826e60();
   input += synapse0x38270b0();
   input += synapse0x38270f0();
   return input;
}

double NNfunction_sg_uR::neuron0x38310a0() {
   double input = input0x38310a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3827130() {
   double input = 0.570152;
   input += synapse0x38269a0();
   input += synapse0x38269e0();
   input += synapse0x3826a20();
   input += synapse0x3826a60();
   input += synapse0x38273e0();
   input += synapse0x3833730();
   input += synapse0x3833770();
   input += synapse0x38337b0();
   input += synapse0x38337f0();
   input += synapse0x3833830();
   input += synapse0x3833870();
   input += synapse0x38338b0();
   input += synapse0x38338f0();
   input += synapse0x3833930();
   input += synapse0x3833970();
   input += synapse0x38339b0();
   input += synapse0x38272c0();
   input += synapse0x3827300();
   input += synapse0x3833b00();
   input += synapse0x3833b40();
   input += synapse0x3833b80();
   input += synapse0x3833bc0();
   input += synapse0x3833c00();
   input += synapse0x3833c40();
   return input;
}

double NNfunction_sg_uR::neuron0x3827130() {
   double input = input0x3827130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3833c80() {
   double input = -0.0713028;
   input += synapse0x3833fc0();
   input += synapse0x3834000();
   input += synapse0x3834040();
   input += synapse0x3834080();
   input += synapse0x38340c0();
   input += synapse0x3834100();
   input += synapse0x3834140();
   input += synapse0x3834180();
   input += synapse0x38341c0();
   input += synapse0x3834200();
   input += synapse0x3834240();
   input += synapse0x3834280();
   input += synapse0x38342c0();
   input += synapse0x3834300();
   input += synapse0x3834340();
   input += synapse0x3834380();
   input += synapse0x3833e10();
   input += synapse0x3833e50();
   input += synapse0x38344d0();
   input += synapse0x3834510();
   input += synapse0x3834550();
   input += synapse0x3834590();
   input += synapse0x38345d0();
   input += synapse0x3834610();
   return input;
}

double NNfunction_sg_uR::neuron0x3833c80() {
   double input = input0x3833c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3834650() {
   double input = 0.25076;
   input += synapse0x3834990();
   input += synapse0x38349d0();
   input += synapse0x3834a10();
   input += synapse0x3834a50();
   input += synapse0x3834a90();
   input += synapse0x3834ad0();
   input += synapse0x3834b10();
   input += synapse0x3834b50();
   input += synapse0x3834b90();
   input += synapse0x3834bd0();
   input += synapse0x3834c10();
   input += synapse0x3834c50();
   input += synapse0x3834c90();
   input += synapse0x3834cd0();
   input += synapse0x3834d10();
   input += synapse0x3834d50();
   input += synapse0x38347e0();
   input += synapse0x3834820();
   input += synapse0x3834ea0();
   input += synapse0x3834ee0();
   input += synapse0x3834f20();
   input += synapse0x3834f60();
   input += synapse0x3834fa0();
   input += synapse0x3834fe0();
   return input;
}

double NNfunction_sg_uR::neuron0x3834650() {
   double input = input0x3834650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3835020() {
   double input = -0.610743;
   input += synapse0x3835360();
   input += synapse0x38353a0();
   input += synapse0x38353e0();
   input += synapse0x3835420();
   input += synapse0x3835460();
   input += synapse0x38354a0();
   input += synapse0x38354e0();
   input += synapse0x3835520();
   input += synapse0x3835560();
   input += synapse0x38355a0();
   input += synapse0x38355e0();
   input += synapse0x3835620();
   input += synapse0x3835660();
   input += synapse0x38356a0();
   input += synapse0x38356e0();
   input += synapse0x3835720();
   input += synapse0x38351b0();
   input += synapse0x38351f0();
   input += synapse0x3835870();
   input += synapse0x38358b0();
   input += synapse0x38358f0();
   input += synapse0x3835930();
   input += synapse0x3835970();
   input += synapse0x38359b0();
   return input;
}

double NNfunction_sg_uR::neuron0x3835020() {
   double input = input0x3835020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38359f0() {
   double input = -0.475462;
   input += synapse0x3835d30();
   input += synapse0x3835d70();
   input += synapse0x3835db0();
   input += synapse0x3835df0();
   input += synapse0x3835e30();
   input += synapse0x3835e70();
   input += synapse0x3835eb0();
   input += synapse0x3835ef0();
   input += synapse0x3835f30();
   input += synapse0x3835f70();
   input += synapse0x3835fb0();
   input += synapse0x3835ff0();
   input += synapse0x3836030();
   input += synapse0x3836070();
   input += synapse0x38360b0();
   input += synapse0x38360f0();
   input += synapse0x3835b80();
   input += synapse0x3835bc0();
   input += synapse0x3836240();
   input += synapse0x3836280();
   input += synapse0x38362c0();
   input += synapse0x3836300();
   input += synapse0x3836340();
   input += synapse0x3836380();
   return input;
}

double NNfunction_sg_uR::neuron0x38359f0() {
   double input = input0x38359f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38363c0() {
   double input = -3.41888;
   input += synapse0x3836700();
   input += synapse0x3836740();
   input += synapse0x3836780();
   input += synapse0x38367c0();
   input += synapse0x3836800();
   input += synapse0x3836840();
   input += synapse0x3836880();
   input += synapse0x38368c0();
   input += synapse0x3836900();
   input += synapse0x3836940();
   input += synapse0x3836980();
   input += synapse0x38369c0();
   input += synapse0x3836a00();
   input += synapse0x3836a40();
   input += synapse0x3836a80();
   input += synapse0x3836ac0();
   input += synapse0x3836550();
   input += synapse0x3836590();
   input += synapse0x3836c10();
   input += synapse0x3836c50();
   input += synapse0x3836c90();
   input += synapse0x3836cd0();
   input += synapse0x3836d10();
   input += synapse0x3836d50();
   return input;
}

double NNfunction_sg_uR::neuron0x38363c0() {
   double input = input0x38363c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3836d90() {
   double input = -0.910481;
   input += synapse0x38370d0();
   input += synapse0x3837110();
   input += synapse0x3837150();
   input += synapse0x3837190();
   input += synapse0x38371d0();
   input += synapse0x3837210();
   input += synapse0x3837250();
   input += synapse0x3837290();
   input += synapse0x38372d0();
   input += synapse0x3837310();
   input += synapse0x3837350();
   input += synapse0x3837390();
   input += synapse0x38373d0();
   input += synapse0x3837410();
   input += synapse0x3837450();
   input += synapse0x3837490();
   input += synapse0x3836f20();
   input += synapse0x3836f60();
   input += synapse0x38375e0();
   input += synapse0x3837620();
   input += synapse0x3837660();
   input += synapse0x38376a0();
   input += synapse0x38376e0();
   input += synapse0x3837720();
   return input;
}

double NNfunction_sg_uR::neuron0x3836d90() {
   double input = input0x3836d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3837760() {
   double input = 0.571731;
   input += synapse0x3837aa0();
   input += synapse0x3837ae0();
   input += synapse0x3837b20();
   input += synapse0x3837b60();
   input += synapse0x3837ba0();
   input += synapse0x3837be0();
   input += synapse0x3837c20();
   input += synapse0x3837c60();
   input += synapse0x3837ca0();
   input += synapse0x3837ce0();
   input += synapse0x3837d20();
   input += synapse0x3837d60();
   input += synapse0x3837da0();
   input += synapse0x3837de0();
   input += synapse0x3837e20();
   input += synapse0x3837e60();
   input += synapse0x38378f0();
   input += synapse0x3837930();
   input += synapse0x3837fb0();
   input += synapse0x3837ff0();
   input += synapse0x3838030();
   input += synapse0x3838070();
   input += synapse0x38380b0();
   input += synapse0x38380f0();
   return input;
}

double NNfunction_sg_uR::neuron0x3837760() {
   double input = input0x3837760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3838130() {
   double input = -0.583808;
   input += synapse0x3820ba0();
   input += synapse0x3820be0();
   input += synapse0x3820c20();
   input += synapse0x3820c60();
   input += synapse0x3820ca0();
   input += synapse0x3820ce0();
   input += synapse0x3820d20();
   input += synapse0x3820d60();
   input += synapse0x3838880();
   input += synapse0x38388c0();
   input += synapse0x3838900();
   input += synapse0x3838940();
   input += synapse0x3838980();
   input += synapse0x38389c0();
   input += synapse0x3838a00();
   input += synapse0x3838a40();
   input += synapse0x38382c0();
   input += synapse0x3838300();
   input += synapse0x3838b90();
   input += synapse0x3838bd0();
   input += synapse0x3838c10();
   input += synapse0x3838c50();
   input += synapse0x3838c90();
   input += synapse0x3838cd0();
   return input;
}

double NNfunction_sg_uR::neuron0x3838130() {
   double input = input0x3838130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3838d10() {
   double input = 0.900636;
   input += synapse0x3839050();
   input += synapse0x3839090();
   input += synapse0x38390d0();
   input += synapse0x3839110();
   input += synapse0x3839150();
   input += synapse0x3839190();
   input += synapse0x38391d0();
   input += synapse0x3839210();
   input += synapse0x3839250();
   input += synapse0x3839290();
   input += synapse0x38392d0();
   input += synapse0x3839310();
   input += synapse0x3839350();
   input += synapse0x3839390();
   input += synapse0x38393d0();
   input += synapse0x3839410();
   input += synapse0x3838ea0();
   input += synapse0x3838ee0();
   input += synapse0x3839560();
   input += synapse0x38395a0();
   input += synapse0x38395e0();
   input += synapse0x3839620();
   input += synapse0x3839660();
   input += synapse0x38396a0();
   return input;
}

double NNfunction_sg_uR::neuron0x3838d10() {
   double input = input0x3838d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38396e0() {
   double input = 4.34126;
   input += synapse0x3839a20();
   input += synapse0x3839a60();
   input += synapse0x3839aa0();
   input += synapse0x3839ae0();
   input += synapse0x3839b20();
   input += synapse0x3839b60();
   input += synapse0x3839ba0();
   input += synapse0x3839be0();
   input += synapse0x3839c20();
   input += synapse0x3839c60();
   input += synapse0x3839ca0();
   input += synapse0x3839ce0();
   input += synapse0x3839d20();
   input += synapse0x3839d60();
   input += synapse0x3839da0();
   input += synapse0x3839de0();
   input += synapse0x3839870();
   input += synapse0x38398b0();
   input += synapse0x382a3e0();
   input += synapse0x382a420();
   input += synapse0x382a460();
   input += synapse0x382a4a0();
   input += synapse0x382a4e0();
   input += synapse0x382a520();
   return input;
}

double NNfunction_sg_uR::neuron0x38396e0() {
   double input = input0x38396e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382a560() {
   double input = 0.888018;
   input += synapse0x382a8a0();
   input += synapse0x382a8e0();
   input += synapse0x382a920();
   input += synapse0x382a960();
   input += synapse0x382a9a0();
   input += synapse0x382a9e0();
   input += synapse0x382aa20();
   input += synapse0x382aa60();
   input += synapse0x382aaa0();
   input += synapse0x382aae0();
   input += synapse0x382ab20();
   input += synapse0x382ab60();
   input += synapse0x382aba0();
   input += synapse0x382abe0();
   input += synapse0x382ac20();
   input += synapse0x382ac60();
   input += synapse0x382a6f0();
   input += synapse0x382a730();
   input += synapse0x382adb0();
   input += synapse0x382adf0();
   input += synapse0x382ae30();
   input += synapse0x382ae70();
   input += synapse0x382aeb0();
   input += synapse0x382aef0();
   return input;
}

double NNfunction_sg_uR::neuron0x382a560() {
   double input = input0x382a560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382af30() {
   double input = 0.247431;
   input += synapse0x382b270();
   input += synapse0x382b2b0();
   input += synapse0x382b2f0();
   input += synapse0x382b330();
   input += synapse0x382b370();
   input += synapse0x382b3b0();
   input += synapse0x382b3f0();
   input += synapse0x382b430();
   input += synapse0x382b470();
   input += synapse0x382b4b0();
   input += synapse0x382b4f0();
   input += synapse0x382b530();
   input += synapse0x382b570();
   input += synapse0x382b5b0();
   input += synapse0x382b5f0();
   input += synapse0x382b630();
   input += synapse0x382b0c0();
   input += synapse0x382b100();
   input += synapse0x382b780();
   input += synapse0x382b7c0();
   input += synapse0x382b800();
   input += synapse0x382b840();
   input += synapse0x382b880();
   input += synapse0x382b8c0();
   return input;
}

double NNfunction_sg_uR::neuron0x382af30() {
   double input = input0x382af30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x382b900() {
   double input = -0.366247;
   input += synapse0x382bc40();
   input += synapse0x382bc80();
   input += synapse0x382bcc0();
   input += synapse0x382bd00();
   input += synapse0x382bd40();
   input += synapse0x382bd80();
   input += synapse0x382bdc0();
   input += synapse0x382be00();
   input += synapse0x382be40();
   input += synapse0x382be80();
   input += synapse0x382bec0();
   input += synapse0x382bf00();
   input += synapse0x382bf40();
   input += synapse0x382bf80();
   input += synapse0x382bfc0();
   input += synapse0x382c000();
   input += synapse0x382ba90();
   input += synapse0x382bad0();
   input += synapse0x382c150();
   input += synapse0x382c190();
   input += synapse0x382c1d0();
   input += synapse0x382c210();
   input += synapse0x382c250();
   input += synapse0x382c290();
   return input;
}

double NNfunction_sg_uR::neuron0x382b900() {
   double input = input0x382b900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x383df40() {
   double input = -0.958291;
   input += synapse0x383e160();
   input += synapse0x383e1a0();
   input += synapse0x383e1e0();
   input += synapse0x383e220();
   input += synapse0x383e260();
   input += synapse0x383e2a0();
   input += synapse0x383e2e0();
   input += synapse0x383e320();
   input += synapse0x383e360();
   input += synapse0x383e3a0();
   input += synapse0x383e3e0();
   input += synapse0x383e420();
   input += synapse0x383e460();
   input += synapse0x383e4a0();
   input += synapse0x383e4e0();
   input += synapse0x383e520();
   input += synapse0x382c2d0();
   input += synapse0x382c310();
   input += synapse0x383e670();
   input += synapse0x383e6b0();
   input += synapse0x383e6f0();
   input += synapse0x383e730();
   input += synapse0x383e770();
   input += synapse0x383e7b0();
   return input;
}

double NNfunction_sg_uR::neuron0x383df40() {
   double input = input0x383df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x383e7f0() {
   double input = 0.765591;
   input += synapse0x383eb30();
   input += synapse0x383eb70();
   input += synapse0x383ebb0();
   input += synapse0x383ebf0();
   input += synapse0x383ec30();
   input += synapse0x383ec70();
   input += synapse0x383ecb0();
   input += synapse0x383ecf0();
   input += synapse0x383ed30();
   input += synapse0x383ed70();
   input += synapse0x383edb0();
   input += synapse0x383edf0();
   input += synapse0x383ee30();
   input += synapse0x383ee70();
   input += synapse0x383eeb0();
   input += synapse0x383eef0();
   input += synapse0x383e980();
   input += synapse0x383e9c0();
   input += synapse0x383f040();
   input += synapse0x383f080();
   input += synapse0x383f0c0();
   input += synapse0x383f100();
   input += synapse0x383f140();
   input += synapse0x383f180();
   return input;
}

double NNfunction_sg_uR::neuron0x383e7f0() {
   double input = input0x383e7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x383f1c0() {
   double input = -0.921975;
   input += synapse0x383f500();
   input += synapse0x383f540();
   input += synapse0x383f580();
   input += synapse0x383f5c0();
   input += synapse0x383f600();
   input += synapse0x383f640();
   input += synapse0x383f680();
   input += synapse0x383f6c0();
   input += synapse0x383f700();
   input += synapse0x383f740();
   input += synapse0x383f780();
   input += synapse0x383f7c0();
   input += synapse0x383f800();
   input += synapse0x383f840();
   input += synapse0x383f880();
   input += synapse0x383f8c0();
   input += synapse0x383f350();
   input += synapse0x383f390();
   input += synapse0x383fa10();
   input += synapse0x383fa50();
   input += synapse0x383fa90();
   input += synapse0x383fad0();
   input += synapse0x383fb10();
   input += synapse0x383fb50();
   return input;
}

double NNfunction_sg_uR::neuron0x383f1c0() {
   double input = input0x383f1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x383fb90() {
   double input = 0.583274;
   input += synapse0x383fed0();
   input += synapse0x383ff10();
   input += synapse0x383ff50();
   input += synapse0x383ff90();
   input += synapse0x383ffd0();
   input += synapse0x3840010();
   input += synapse0x3840050();
   input += synapse0x3840090();
   input += synapse0x38400d0();
   input += synapse0x3840110();
   input += synapse0x3840150();
   input += synapse0x3840190();
   input += synapse0x38401d0();
   input += synapse0x3840210();
   input += synapse0x3840250();
   input += synapse0x3840290();
   input += synapse0x383fd20();
   input += synapse0x383fd60();
   input += synapse0x38403e0();
   input += synapse0x3840420();
   input += synapse0x3840460();
   input += synapse0x38404a0();
   input += synapse0x38404e0();
   input += synapse0x3840520();
   return input;
}

double NNfunction_sg_uR::neuron0x383fb90() {
   double input = input0x383fb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3846d90() {
   double input = -0.555618;
   input += synapse0x35e0300();
   input += synapse0x35e0340();
   input += synapse0x381cec0();
   input += synapse0x381cf00();
   input += synapse0x381e9a0();
   input += synapse0x381e9e0();
   input += synapse0x381f770();
   input += synapse0x381f7b0();
   input += synapse0x3820140();
   input += synapse0x3820180();
   input += synapse0x3820b10();
   input += synapse0x3820b50();
   input += synapse0x38215f0();
   input += synapse0x3821630();
   input += synapse0x3821fc0();
   input += synapse0x3822000();
   input += synapse0x381f0a0();
   input += synapse0x381f0e0();
   input += synapse0x3823b70();
   input += synapse0x3823bb0();
   input += synapse0x3824540();
   input += synapse0x3824580();
   input += synapse0x3824f10();
   input += synapse0x3824f50();
   input += synapse0x38258e0();
   input += synapse0x3825920();
   input += synapse0x3818970();
   input += synapse0x38189b0();
   input += synapse0x38279d0();
   input += synapse0x3827a10();
   input += synapse0x38283a0();
   input += synapse0x38283e0();
   input += synapse0x3828d70();
   input += synapse0x3828db0();
   input += synapse0x3829740();
   input += synapse0x3829780();
   input += synapse0x382a110();
   input += synapse0x382a150();
   input += synapse0x3822c60();
   input += synapse0x3822ca0();
   input += synapse0x382c510();
   input += synapse0x382c550();
   input += synapse0x382cea0();
   input += synapse0x382cee0();
   input += synapse0x382d870();
   input += synapse0x382d8b0();
   input += synapse0x382e240();
   input += synapse0x382e280();
   input += synapse0x382ec10();
   input += synapse0x382ec50();
   return input;
}

double NNfunction_sg_uR::neuron0x3846d90() {
   double input = input0x3846d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3847130() {
   double input = -0.432857;
   input += synapse0x3831350();
   input += synapse0x3831390();
   input += synapse0x3826910();
   input += synapse0x3826950();
   input += synapse0x3833f30();
   input += synapse0x3833f70();
   input += synapse0x3834900();
   input += synapse0x3834940();
   input += synapse0x38352d0();
   input += synapse0x3835310();
   input += synapse0x3835ca0();
   input += synapse0x3835ce0();
   input += synapse0x3836670();
   input += synapse0x38366b0();
   input += synapse0x3837040();
   input += synapse0x3837080();
   input += synapse0x3837a10();
   input += synapse0x3837a50();
   input += synapse0x38383e0();
   input += synapse0x3838420();
   input += synapse0x3838fc0();
   input += synapse0x3839000();
   input += synapse0x3839990();
   input += synapse0x38399d0();
   input += synapse0x382a810();
   input += synapse0x382a850();
   input += synapse0x382b1e0();
   input += synapse0x382b220();
   input += synapse0x382bbb0();
   input += synapse0x382bbf0();
   input += synapse0x383e0d0();
   input += synapse0x383e110();
   input += synapse0x383eaa0();
   input += synapse0x383eae0();
   input += synapse0x383f470();
   input += synapse0x383f4b0();
   input += synapse0x383fe40();
   input += synapse0x383fe80();
   input += synapse0x381acb0();
   input += synapse0x381acf0();
   input += synapse0x382f5e0();
   input += synapse0x382f620();
   input += synapse0x3840560();
   input += synapse0x38405a0();
   input += synapse0x38405e0();
   input += synapse0x3840620();
   input += synapse0x38474d0();
   input += synapse0x3847510();
   input += synapse0x3847550();
   input += synapse0x3847590();
   return input;
}

double NNfunction_sg_uR::neuron0x3847130() {
   double input = input0x3847130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x38475d0() {
   double input = 1.46031;
   input += synapse0x3847910();
   input += synapse0x3847950();
   input += synapse0x3847990();
   input += synapse0x38479d0();
   input += synapse0x3847a10();
   input += synapse0x3847a50();
   input += synapse0x3847a90();
   input += synapse0x3847ad0();
   input += synapse0x3847b10();
   input += synapse0x3847b50();
   input += synapse0x3847b90();
   input += synapse0x3847bd0();
   input += synapse0x3847c10();
   input += synapse0x3847c50();
   input += synapse0x3847c90();
   input += synapse0x3847cd0();
   input += synapse0x3847760();
   input += synapse0x38477a0();
   input += synapse0x3847e20();
   input += synapse0x3847e60();
   input += synapse0x3847ea0();
   input += synapse0x3847ee0();
   input += synapse0x3847f20();
   input += synapse0x3847f60();
   input += synapse0x3847fa0();
   input += synapse0x3847fe0();
   input += synapse0x3848020();
   input += synapse0x3848060();
   input += synapse0x38480a0();
   input += synapse0x38480e0();
   input += synapse0x3848120();
   input += synapse0x3848160();
   input += synapse0x3847d10();
   input += synapse0x3847d50();
   input += synapse0x3847d90();
   input += synapse0x3847dd0();
   input += synapse0x38483b0();
   input += synapse0x38483f0();
   input += synapse0x3848430();
   input += synapse0x3848470();
   input += synapse0x38484b0();
   input += synapse0x38484f0();
   input += synapse0x3848530();
   input += synapse0x3848570();
   input += synapse0x38485b0();
   input += synapse0x38485f0();
   input += synapse0x3848630();
   input += synapse0x3848670();
   input += synapse0x38486b0();
   input += synapse0x38486f0();
   return input;
}

double NNfunction_sg_uR::neuron0x38475d0() {
   double input = input0x38475d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3848730() {
   double input = -0.256915;
   input += synapse0x3848a70();
   input += synapse0x3848ab0();
   input += synapse0x3848af0();
   input += synapse0x3848b30();
   input += synapse0x3848b70();
   input += synapse0x3848bb0();
   input += synapse0x3848bf0();
   input += synapse0x3848c30();
   input += synapse0x3848c70();
   input += synapse0x3848cb0();
   input += synapse0x3848cf0();
   input += synapse0x3848d30();
   input += synapse0x3848d70();
   input += synapse0x3848db0();
   input += synapse0x3848df0();
   input += synapse0x3848e30();
   input += synapse0x38488c0();
   input += synapse0x3848900();
   input += synapse0x3848f80();
   input += synapse0x3848fc0();
   input += synapse0x3849000();
   input += synapse0x3849040();
   input += synapse0x3849080();
   input += synapse0x38490c0();
   input += synapse0x3849100();
   input += synapse0x3849140();
   input += synapse0x3849180();
   input += synapse0x38491c0();
   input += synapse0x3849200();
   input += synapse0x3849240();
   input += synapse0x3849280();
   input += synapse0x38492c0();
   input += synapse0x3848e70();
   input += synapse0x3848eb0();
   input += synapse0x3848ef0();
   input += synapse0x3848f30();
   input += synapse0x3849510();
   input += synapse0x3849550();
   input += synapse0x3849590();
   input += synapse0x38495d0();
   input += synapse0x3849610();
   input += synapse0x3849650();
   input += synapse0x3849690();
   input += synapse0x38496d0();
   input += synapse0x3849710();
   input += synapse0x3849750();
   input += synapse0x3849790();
   input += synapse0x38497d0();
   input += synapse0x3849810();
   input += synapse0x3849850();
   return input;
}

double NNfunction_sg_uR::neuron0x3848730() {
   double input = input0x3848730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x3849890() {
   double input = -0.558653;
   input += synapse0x3849bd0();
   input += synapse0x3849c10();
   input += synapse0x3849c50();
   input += synapse0x3849c90();
   input += synapse0x3849cd0();
   input += synapse0x3849d10();
   input += synapse0x3849d50();
   input += synapse0x3849d90();
   input += synapse0x3849dd0();
   input += synapse0x3849e10();
   input += synapse0x3849e50();
   input += synapse0x3849e90();
   input += synapse0x3849ed0();
   input += synapse0x3849f10();
   input += synapse0x3849f50();
   input += synapse0x3849f90();
   input += synapse0x3849a20();
   input += synapse0x3849a60();
   input += synapse0x384a0e0();
   input += synapse0x384a120();
   input += synapse0x384a160();
   input += synapse0x384a1a0();
   input += synapse0x384a1e0();
   input += synapse0x384a220();
   input += synapse0x384a260();
   input += synapse0x384a2a0();
   input += synapse0x384a2e0();
   input += synapse0x384a320();
   input += synapse0x384a360();
   input += synapse0x384a3a0();
   input += synapse0x384a3e0();
   input += synapse0x384a420();
   input += synapse0x3849fd0();
   input += synapse0x384a010();
   input += synapse0x384a050();
   input += synapse0x384a090();
   input += synapse0x384a670();
   input += synapse0x384a6b0();
   input += synapse0x384a6f0();
   input += synapse0x384a730();
   input += synapse0x384a770();
   input += synapse0x384a7b0();
   input += synapse0x384a7f0();
   input += synapse0x384a830();
   input += synapse0x384a870();
   input += synapse0x384a8b0();
   input += synapse0x384a8f0();
   input += synapse0x384a930();
   input += synapse0x384a970();
   input += synapse0x384a9b0();
   return input;
}

double NNfunction_sg_uR::neuron0x3849890() {
   double input = input0x3849890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uR::input0x384a9f0() {
   double input = 14.1739;
   input += synapse0x384ac10();
   input += synapse0x384ac50();
   input += synapse0x384ac90();
   input += synapse0x384acd0();
   input += synapse0x384ad10();
   return input;
}

double NNfunction_sg_uR::neuron0x384a9f0() {
   double input = input0x384a9f0();
   return (input * 1)+0;
}

double NNfunction_sg_uR::synapse0x381ad40() {
   return (neuron0x3815a60()*-0.189963);
}

double NNfunction_sg_uR::synapse0x381ad80() {
   return (neuron0x3815d10()*-0.147328);
}

double NNfunction_sg_uR::synapse0x381adc0() {
   return (neuron0x3816050()*-0.27242);
}

double NNfunction_sg_uR::synapse0x381ae00() {
   return (neuron0x3816390()*-0.922216);
}

double NNfunction_sg_uR::synapse0x381ae40() {
   return (neuron0x38166d0()*-0.737813);
}

double NNfunction_sg_uR::synapse0x381ae80() {
   return (neuron0x3816a10()*-1.02611);
}

double NNfunction_sg_uR::synapse0x381aec0() {
   return (neuron0x3816d50()*-0.680765);
}

double NNfunction_sg_uR::synapse0x381af00() {
   return (neuron0x3817090()*-0.829953);
}

double NNfunction_sg_uR::synapse0x381af40() {
   return (neuron0x38173d0()*-1.05937);
}

double NNfunction_sg_uR::synapse0x381af80() {
   return (neuron0x3817710()*-0.398325);
}

double NNfunction_sg_uR::synapse0x381afc0() {
   return (neuron0x3817a50()*-0.589974);
}

double NNfunction_sg_uR::synapse0x381b000() {
   return (neuron0x3817d90()*-1.6047);
}

double NNfunction_sg_uR::synapse0x381b040() {
   return (neuron0x38180d0()*-0.828453);
}

double NNfunction_sg_uR::synapse0x381b080() {
   return (neuron0x3818410()*-1.17452);
}

double NNfunction_sg_uR::synapse0x381b0c0() {
   return (neuron0x3818750()*-2.16268);
}

double NNfunction_sg_uR::synapse0x381b100() {
   return (neuron0x3818a90()*-0.766297);
}

double NNfunction_sg_uR::synapse0x381ab90() {
   return (neuron0x3818dd0()*-0.650094);
}

double NNfunction_sg_uR::synapse0x381abd0() {
   return (neuron0x3819330()*-1.15846);
}

double NNfunction_sg_uR::synapse0x35d1fe0() {
   return (neuron0x3819550()*-0.489244);
}

double NNfunction_sg_uR::synapse0x35d2020() {
   return (neuron0x3819890()*-1.1418);
}

double NNfunction_sg_uR::synapse0x381b250() {
   return (neuron0x3819bd0()*0.854433);
}

double NNfunction_sg_uR::synapse0x381b290() {
   return (neuron0x3819f10()*0.696097);
}

double NNfunction_sg_uR::synapse0x381b2d0() {
   return (neuron0x381a250()*-0.130953);
}

double NNfunction_sg_uR::synapse0x381b310() {
   return (neuron0x381a590()*-1.05181);
}

double NNfunction_sg_uR::synapse0x381b690() {
   return (neuron0x3815a60()*0.265559);
}

double NNfunction_sg_uR::synapse0x381b6d0() {
   return (neuron0x3815d10()*-0.190051);
}

double NNfunction_sg_uR::synapse0x381b710() {
   return (neuron0x3816050()*-0.00635966);
}

double NNfunction_sg_uR::synapse0x381b750() {
   return (neuron0x3816390()*-0.719339);
}

double NNfunction_sg_uR::synapse0x381b790() {
   return (neuron0x38166d0()*0.136568);
}

double NNfunction_sg_uR::synapse0x381b7d0() {
   return (neuron0x3816a10()*-0.25417);
}

double NNfunction_sg_uR::synapse0x381b810() {
   return (neuron0x3816d50()*-0.38274);
}

double NNfunction_sg_uR::synapse0x381b850() {
   return (neuron0x3817090()*-0.549868);
}

double NNfunction_sg_uR::synapse0x381b890() {
   return (neuron0x38173d0()*-0.666742);
}

double NNfunction_sg_uR::synapse0x381b140() {
   return (neuron0x3817710()*-0.731922);
}

double NNfunction_sg_uR::synapse0x381b180() {
   return (neuron0x3817a50()*-0.172384);
}

double NNfunction_sg_uR::synapse0x381b1c0() {
   return (neuron0x3817d90()*-0.5859);
}

double NNfunction_sg_uR::synapse0x381b200() {
   return (neuron0x38180d0()*-0.935514);
}

double NNfunction_sg_uR::synapse0x381bae0() {
   return (neuron0x3818410()*-0.885183);
}

double NNfunction_sg_uR::synapse0x381bb20() {
   return (neuron0x3818750()*-1.61624);
}

double NNfunction_sg_uR::synapse0x381bb60() {
   return (neuron0x3818a90()*-0.421933);
}

double NNfunction_sg_uR::synapse0x381b4e0() {
   return (neuron0x3818dd0()*-0.783542);
}

double NNfunction_sg_uR::synapse0x381b520() {
   return (neuron0x3819330()*-0.511265);
}

double NNfunction_sg_uR::synapse0x381bcb0() {
   return (neuron0x3819550()*-1.23107);
}

double NNfunction_sg_uR::synapse0x381bcf0() {
   return (neuron0x3819890()*-0.449224);
}

double NNfunction_sg_uR::synapse0x381bd30() {
   return (neuron0x3819bd0()*0.658197);
}

double NNfunction_sg_uR::synapse0x381bd70() {
   return (neuron0x3819f10()*0.661667);
}

double NNfunction_sg_uR::synapse0x381bdb0() {
   return (neuron0x381a250()*0.214231);
}

double NNfunction_sg_uR::synapse0x381bdf0() {
   return (neuron0x381a590()*-0.443466);
}

double NNfunction_sg_uR::synapse0x381c170() {
   return (neuron0x3815a60()*0.275035);
}

double NNfunction_sg_uR::synapse0x381c1b0() {
   return (neuron0x3815d10()*-0.128142);
}

double NNfunction_sg_uR::synapse0x381c1f0() {
   return (neuron0x3816050()*0.0972226);
}

double NNfunction_sg_uR::synapse0x381c230() {
   return (neuron0x3816390()*-0.1613);
}

double NNfunction_sg_uR::synapse0x381c270() {
   return (neuron0x38166d0()*-0.0631871);
}

double NNfunction_sg_uR::synapse0x381c2b0() {
   return (neuron0x3816a10()*-0.28728);
}

double NNfunction_sg_uR::synapse0x381c2f0() {
   return (neuron0x3816d50()*-0.151028);
}

double NNfunction_sg_uR::synapse0x381c330() {
   return (neuron0x3817090()*-0.404031);
}

double NNfunction_sg_uR::synapse0x381c370() {
   return (neuron0x38173d0()*-0.129902);
}

double NNfunction_sg_uR::synapse0x381c3b0() {
   return (neuron0x3817710()*0.0584597);
}

double NNfunction_sg_uR::synapse0x381c3f0() {
   return (neuron0x3817a50()*-0.675761);
}

double NNfunction_sg_uR::synapse0x381c430() {
   return (neuron0x3817d90()*0.388095);
}

double NNfunction_sg_uR::synapse0x381c470() {
   return (neuron0x38180d0()*-0.640433);
}

double NNfunction_sg_uR::synapse0x381c4b0() {
   return (neuron0x3818410()*-0.101968);
}

double NNfunction_sg_uR::synapse0x381c4f0() {
   return (neuron0x3818750()*-0.36728);
}

double NNfunction_sg_uR::synapse0x381c530() {
   return (neuron0x3818a90()*-0.433693);
}

double NNfunction_sg_uR::synapse0x381bfc0() {
   return (neuron0x3818dd0()*-0.699569);
}

double NNfunction_sg_uR::synapse0x381c000() {
   return (neuron0x3819330()*-0.699728);
}

double NNfunction_sg_uR::synapse0x2382370() {
   return (neuron0x3819550()*-0.699154);
}

double NNfunction_sg_uR::synapse0x35dfb10() {
   return (neuron0x3819890()*-0.371567);
}

double NNfunction_sg_uR::synapse0x35dfb50() {
   return (neuron0x3819bd0()*0.158143);
}

double NNfunction_sg_uR::synapse0x381e470() {
   return (neuron0x3819f10()*-0.12014);
}

double NNfunction_sg_uR::synapse0x381e4b0() {
   return (neuron0x381a250()*-0.537244);
}

double NNfunction_sg_uR::synapse0x38157a0() {
   return (neuron0x381a590()*-0.445603);
}

double NNfunction_sg_uR::synapse0x3815870() {
   return (neuron0x3815a60()*-0.0620703);
}

double NNfunction_sg_uR::synapse0x35e0390() {
   return (neuron0x3815d10()*-0.0838326);
}

double NNfunction_sg_uR::synapse0x381ba60() {
   return (neuron0x3816050()*0.492301);
}

double NNfunction_sg_uR::synapse0x381baa0() {
   return (neuron0x3816390()*-0.299008);
}

double NNfunction_sg_uR::synapse0x381c680() {
   return (neuron0x38166d0()*-0.441246);
}

double NNfunction_sg_uR::synapse0x381c6c0() {
   return (neuron0x3816a10()*-0.364749);
}

double NNfunction_sg_uR::synapse0x381c700() {
   return (neuron0x3816d50()*-0.540173);
}

double NNfunction_sg_uR::synapse0x381c740() {
   return (neuron0x3817090()*-0.179288);
}

double NNfunction_sg_uR::synapse0x381c780() {
   return (neuron0x38173d0()*-0.452025);
}

double NNfunction_sg_uR::synapse0x381c7c0() {
   return (neuron0x3817710()*-0.176734);
}

double NNfunction_sg_uR::synapse0x381c800() {
   return (neuron0x3817a50()*-0.361312);
}

double NNfunction_sg_uR::synapse0x381c840() {
   return (neuron0x3817d90()*-0.293755);
}

double NNfunction_sg_uR::synapse0x381c880() {
   return (neuron0x38180d0()*-0.505736);
}

double NNfunction_sg_uR::synapse0x381c8c0() {
   return (neuron0x3818410()*-0.33801);
}

double NNfunction_sg_uR::synapse0x381c900() {
   return (neuron0x3818750()*-1.26661);
}

double NNfunction_sg_uR::synapse0x381c940() {
   return (neuron0x3818a90()*-0.816696);
}

double NNfunction_sg_uR::synapse0x38157e0() {
   return (neuron0x3818dd0()*-0.342498);
}

double NNfunction_sg_uR::synapse0x3815820() {
   return (neuron0x3819330()*-0.466604);
}

double NNfunction_sg_uR::synapse0x381ca90() {
   return (neuron0x3819550()*-0.374742);
}

double NNfunction_sg_uR::synapse0x381cad0() {
   return (neuron0x3819890()*-0.731294);
}

double NNfunction_sg_uR::synapse0x381cb10() {
   return (neuron0x3819bd0()*0.50061);
}

double NNfunction_sg_uR::synapse0x381cb50() {
   return (neuron0x3819f10()*0.0838977);
}

double NNfunction_sg_uR::synapse0x381cb90() {
   return (neuron0x381a250()*-0.0228459);
}

double NNfunction_sg_uR::synapse0x381cbd0() {
   return (neuron0x381a590()*-0.708608);
}

double NNfunction_sg_uR::synapse0x381cf50() {
   return (neuron0x3815a60()*0.277327);
}

double NNfunction_sg_uR::synapse0x381cf90() {
   return (neuron0x3815d10()*0.299245);
}

double NNfunction_sg_uR::synapse0x381cfd0() {
   return (neuron0x3816050()*-0.0991515);
}

double NNfunction_sg_uR::synapse0x381d010() {
   return (neuron0x3816390()*0.714524);
}

double NNfunction_sg_uR::synapse0x381d050() {
   return (neuron0x38166d0()*0.319649);
}

double NNfunction_sg_uR::synapse0x381d090() {
   return (neuron0x3816a10()*0.432969);
}

double NNfunction_sg_uR::synapse0x381d0d0() {
   return (neuron0x3816d50()*0.318555);
}

double NNfunction_sg_uR::synapse0x381d110() {
   return (neuron0x3817090()*0.627596);
}

double NNfunction_sg_uR::synapse0x381d150() {
   return (neuron0x38173d0()*0.49994);
}

double NNfunction_sg_uR::synapse0x381d190() {
   return (neuron0x3817710()*0.424849);
}

double NNfunction_sg_uR::synapse0x381d1d0() {
   return (neuron0x3817a50()*0.161389);
}

double NNfunction_sg_uR::synapse0x381d210() {
   return (neuron0x3817d90()*0.96261);
}

double NNfunction_sg_uR::synapse0x381d250() {
   return (neuron0x38180d0()*1.05695);
}

double NNfunction_sg_uR::synapse0x381d290() {
   return (neuron0x3818410()*1.07843);
}

double NNfunction_sg_uR::synapse0x381d2d0() {
   return (neuron0x3818750()*2.06114);
}

double NNfunction_sg_uR::synapse0x381d310() {
   return (neuron0x3818a90()*0.609769);
}

double NNfunction_sg_uR::synapse0x381d460() {
   return (neuron0x3818dd0()*0.63968);
}

double NNfunction_sg_uR::synapse0x381cda0() {
   return (neuron0x3819330()*0.88653);
}

double NNfunction_sg_uR::synapse0x381cde0() {
   return (neuron0x3819550()*0.938469);
}

double NNfunction_sg_uR::synapse0x381e5b0() {
   return (neuron0x3819890()*0.911887);
}

double NNfunction_sg_uR::synapse0x381e5f0() {
   return (neuron0x3819bd0()*-0.863369);
}

double NNfunction_sg_uR::synapse0x381e630() {
   return (neuron0x3819f10()*-0.476059);
}

double NNfunction_sg_uR::synapse0x381e670() {
   return (neuron0x381a250()*-0.10741);
}

double NNfunction_sg_uR::synapse0x381e6b0() {
   return (neuron0x381a590()*0.349079);
}

double NNfunction_sg_uR::synapse0x381ea30() {
   return (neuron0x3815a60()*-0.00644127);
}

double NNfunction_sg_uR::synapse0x381ea70() {
   return (neuron0x3815d10()*0.0118267);
}

double NNfunction_sg_uR::synapse0x381eab0() {
   return (neuron0x3816050()*0.00651306);
}

double NNfunction_sg_uR::synapse0x381eaf0() {
   return (neuron0x3816390()*0.213485);
}

double NNfunction_sg_uR::synapse0x381eb30() {
   return (neuron0x38166d0()*0.00618015);
}

double NNfunction_sg_uR::synapse0x381eb70() {
   return (neuron0x3816a10()*0.122839);
}

double NNfunction_sg_uR::synapse0x381ebb0() {
   return (neuron0x3816d50()*0.0096149);
}

double NNfunction_sg_uR::synapse0x381ebf0() {
   return (neuron0x3817090()*0.014088);
}

double NNfunction_sg_uR::synapse0x381ec30() {
   return (neuron0x38173d0()*0.00760401);
}

double NNfunction_sg_uR::synapse0x35dfe60() {
   return (neuron0x3817710()*0.0114205);
}

double NNfunction_sg_uR::synapse0x35dfea0() {
   return (neuron0x3817a50()*0.000724936);
}

double NNfunction_sg_uR::synapse0x35dfee0() {
   return (neuron0x3817d90()*-0.0148601);
}

double NNfunction_sg_uR::synapse0x35dff20() {
   return (neuron0x38180d0()*0.018109);
}

double NNfunction_sg_uR::synapse0x35dff60() {
   return (neuron0x3818410()*-0.0066481);
}

double NNfunction_sg_uR::synapse0x35dffa0() {
   return (neuron0x3818750()*-0.496249);
}

double NNfunction_sg_uR::synapse0x35dffe0() {
   return (neuron0x3818a90()*0.0156916);
}

double NNfunction_sg_uR::synapse0x381e880() {
   return (neuron0x3818dd0()*0.011376);
}

double NNfunction_sg_uR::synapse0x381e8c0() {
   return (neuron0x3819330()*0.0035258);
}

double NNfunction_sg_uR::synapse0x35e0130() {
   return (neuron0x3819550()*-0.00827641);
}

double NNfunction_sg_uR::synapse0x35e0170() {
   return (neuron0x3819890()*-0.00446147);
}

double NNfunction_sg_uR::synapse0x35e01b0() {
   return (neuron0x3819bd0()*0.0102386);
}

double NNfunction_sg_uR::synapse0x35e01f0() {
   return (neuron0x3819f10()*0.00352647);
}

double NNfunction_sg_uR::synapse0x35e0230() {
   return (neuron0x381a250()*-0.000211943);
}

double NNfunction_sg_uR::synapse0x381f480() {
   return (neuron0x381a590()*-0.00595837);
}

double NNfunction_sg_uR::synapse0x381f800() {
   return (neuron0x3815a60()*0.0957425);
}

double NNfunction_sg_uR::synapse0x381f840() {
   return (neuron0x3815d10()*-0.374485);
}

double NNfunction_sg_uR::synapse0x381f880() {
   return (neuron0x3816050()*0.267994);
}

double NNfunction_sg_uR::synapse0x381f8c0() {
   return (neuron0x3816390()*-0.0755202);
}

double NNfunction_sg_uR::synapse0x381f900() {
   return (neuron0x38166d0()*-0.169184);
}

double NNfunction_sg_uR::synapse0x381f940() {
   return (neuron0x3816a10()*0.0371273);
}

double NNfunction_sg_uR::synapse0x381f980() {
   return (neuron0x3816d50()*0.0864787);
}

double NNfunction_sg_uR::synapse0x381f9c0() {
   return (neuron0x3817090()*-0.100865);
}

double NNfunction_sg_uR::synapse0x381fa00() {
   return (neuron0x38173d0()*-0.604821);
}

double NNfunction_sg_uR::synapse0x381fa40() {
   return (neuron0x3817710()*-0.36353);
}

double NNfunction_sg_uR::synapse0x381fa80() {
   return (neuron0x3817a50()*-0.613371);
}

double NNfunction_sg_uR::synapse0x381fac0() {
   return (neuron0x3817d90()*-0.914804);
}

double NNfunction_sg_uR::synapse0x381fb00() {
   return (neuron0x38180d0()*-0.574077);
}

double NNfunction_sg_uR::synapse0x381fb40() {
   return (neuron0x3818410()*0.0234575);
}

double NNfunction_sg_uR::synapse0x381fb80() {
   return (neuron0x3818750()*-0.782636);
}

double NNfunction_sg_uR::synapse0x381fbc0() {
   return (neuron0x3818a90()*-0.411787);
}

double NNfunction_sg_uR::synapse0x381f650() {
   return (neuron0x3818dd0()*-0.14694);
}

double NNfunction_sg_uR::synapse0x381f690() {
   return (neuron0x3819330()*0.049687);
}

double NNfunction_sg_uR::synapse0x381fd10() {
   return (neuron0x3819550()*-0.371351);
}

double NNfunction_sg_uR::synapse0x381fd50() {
   return (neuron0x3819890()*-0.318606);
}

double NNfunction_sg_uR::synapse0x381fd90() {
   return (neuron0x3819bd0()*0.376399);
}

double NNfunction_sg_uR::synapse0x381fdd0() {
   return (neuron0x3819f10()*-0.0362006);
}

double NNfunction_sg_uR::synapse0x381fe10() {
   return (neuron0x381a250()*0.315208);
}

double NNfunction_sg_uR::synapse0x381fe50() {
   return (neuron0x381a590()*-0.518446);
}

double NNfunction_sg_uR::synapse0x38201d0() {
   return (neuron0x3815a60()*0.260612);
}

double NNfunction_sg_uR::synapse0x3820210() {
   return (neuron0x3815d10()*-0.139845);
}

double NNfunction_sg_uR::synapse0x3820250() {
   return (neuron0x3816050()*-0.280995);
}

double NNfunction_sg_uR::synapse0x3820290() {
   return (neuron0x3816390()*-0.00176011);
}

double NNfunction_sg_uR::synapse0x38202d0() {
   return (neuron0x38166d0()*0.131485);
}

double NNfunction_sg_uR::synapse0x3820310() {
   return (neuron0x3816a10()*-0.117931);
}

double NNfunction_sg_uR::synapse0x3820350() {
   return (neuron0x3816d50()*-0.392561);
}

double NNfunction_sg_uR::synapse0x3820390() {
   return (neuron0x3817090()*-0.134689);
}

double NNfunction_sg_uR::synapse0x38203d0() {
   return (neuron0x38173d0()*-0.353938);
}

double NNfunction_sg_uR::synapse0x3820410() {
   return (neuron0x3817710()*-0.177434);
}

double NNfunction_sg_uR::synapse0x3820450() {
   return (neuron0x3817a50()*0.059599);
}

double NNfunction_sg_uR::synapse0x3820490() {
   return (neuron0x3817d90()*-0.483117);
}

double NNfunction_sg_uR::synapse0x38204d0() {
   return (neuron0x38180d0()*-0.332029);
}

double NNfunction_sg_uR::synapse0x3820510() {
   return (neuron0x3818410()*-0.584761);
}

double NNfunction_sg_uR::synapse0x3820550() {
   return (neuron0x3818750()*0.532881);
}

double NNfunction_sg_uR::synapse0x3820590() {
   return (neuron0x3818a90()*-0.387827);
}

double NNfunction_sg_uR::synapse0x3820020() {
   return (neuron0x3818dd0()*0.185775);
}

double NNfunction_sg_uR::synapse0x3820060() {
   return (neuron0x3819330()*0.12374);
}

double NNfunction_sg_uR::synapse0x38206e0() {
   return (neuron0x3819550()*0.300148);
}

double NNfunction_sg_uR::synapse0x3820720() {
   return (neuron0x3819890()*-0.309489);
}

double NNfunction_sg_uR::synapse0x3820760() {
   return (neuron0x3819bd0()*-0.246794);
}

double NNfunction_sg_uR::synapse0x38207a0() {
   return (neuron0x3819f10()*0.162563);
}

double NNfunction_sg_uR::synapse0x38207e0() {
   return (neuron0x381a250()*-0.287827);
}

double NNfunction_sg_uR::synapse0x3820820() {
   return (neuron0x381a590()*-0.420241);
}

double NNfunction_sg_uR::synapse0x3819220() {
   return (neuron0x3815a60()*0.0143173);
}

double NNfunction_sg_uR::synapse0x3819260() {
   return (neuron0x3815d10()*-0.00126913);
}

double NNfunction_sg_uR::synapse0x38192a0() {
   return (neuron0x3816050()*-0.00362196);
}

double NNfunction_sg_uR::synapse0x38192e0() {
   return (neuron0x3816390()*0.340697);
}

double NNfunction_sg_uR::synapse0x3820db0() {
   return (neuron0x38166d0()*0.0069304);
}

double NNfunction_sg_uR::synapse0x3820df0() {
   return (neuron0x3816a10()*-0.104996);
}

double NNfunction_sg_uR::synapse0x3820e30() {
   return (neuron0x3816d50()*0.00425418);
}

double NNfunction_sg_uR::synapse0x3820e70() {
   return (neuron0x3817090()*0.00902382);
}

double NNfunction_sg_uR::synapse0x3820eb0() {
   return (neuron0x38173d0()*-0.00968734);
}

double NNfunction_sg_uR::synapse0x3820ef0() {
   return (neuron0x3817710()*-0.0190459);
}

double NNfunction_sg_uR::synapse0x3820f30() {
   return (neuron0x3817a50()*-0.00906877);
}

double NNfunction_sg_uR::synapse0x3820f70() {
   return (neuron0x3817d90()*-0.00326004);
}

double NNfunction_sg_uR::synapse0x3820fb0() {
   return (neuron0x38180d0()*-0.0308382);
}

double NNfunction_sg_uR::synapse0x3820ff0() {
   return (neuron0x3818410()*0.0158911);
}

double NNfunction_sg_uR::synapse0x3821030() {
   return (neuron0x3818750()*-0.53872);
}

double NNfunction_sg_uR::synapse0x3821070() {
   return (neuron0x3818a90()*0.0138595);
}

double NNfunction_sg_uR::synapse0x38209f0() {
   return (neuron0x3818dd0()*-0.00912645);
}

double NNfunction_sg_uR::synapse0x3820a30() {
   return (neuron0x3819330()*-0.00365811);
}

double NNfunction_sg_uR::synapse0x38211c0() {
   return (neuron0x3819550()*0.0091471);
}

double NNfunction_sg_uR::synapse0x3821200() {
   return (neuron0x3819890()*-0.0311531);
}

double NNfunction_sg_uR::synapse0x3821240() {
   return (neuron0x3819bd0()*-0.00350461);
}

double NNfunction_sg_uR::synapse0x3821280() {
   return (neuron0x3819f10()*-0.000272785);
}

double NNfunction_sg_uR::synapse0x38212c0() {
   return (neuron0x381a250()*0.00667775);
}

double NNfunction_sg_uR::synapse0x3821300() {
   return (neuron0x381a590()*-0.00860212);
}

double NNfunction_sg_uR::synapse0x3821680() {
   return (neuron0x3815a60()*0.011329);
}

double NNfunction_sg_uR::synapse0x38216c0() {
   return (neuron0x3815d10()*0.0138939);
}

double NNfunction_sg_uR::synapse0x3821700() {
   return (neuron0x3816050()*-0.00837364);
}

double NNfunction_sg_uR::synapse0x3821740() {
   return (neuron0x3816390()*-0.973288);
}

double NNfunction_sg_uR::synapse0x3821780() {
   return (neuron0x38166d0()*-0.050727);
}

double NNfunction_sg_uR::synapse0x38217c0() {
   return (neuron0x3816a10()*0.00923619);
}

double NNfunction_sg_uR::synapse0x3821800() {
   return (neuron0x3816d50()*-0.0349784);
}

double NNfunction_sg_uR::synapse0x3821840() {
   return (neuron0x3817090()*0.0161159);
}

double NNfunction_sg_uR::synapse0x3821880() {
   return (neuron0x38173d0()*0.0181985);
}

double NNfunction_sg_uR::synapse0x38218c0() {
   return (neuron0x3817710()*0.0228914);
}

double NNfunction_sg_uR::synapse0x3821900() {
   return (neuron0x3817a50()*0.031835);
}

double NNfunction_sg_uR::synapse0x3821940() {
   return (neuron0x3817d90()*0.0542906);
}

double NNfunction_sg_uR::synapse0x3821980() {
   return (neuron0x38180d0()*0.0423152);
}

double NNfunction_sg_uR::synapse0x38219c0() {
   return (neuron0x3818410()*-0.037719);
}

double NNfunction_sg_uR::synapse0x3821a00() {
   return (neuron0x3818750()*-2.234);
}

double NNfunction_sg_uR::synapse0x3821a40() {
   return (neuron0x3818a90()*0.0187454);
}

double NNfunction_sg_uR::synapse0x38214d0() {
   return (neuron0x3818dd0()*-0.0294042);
}

double NNfunction_sg_uR::synapse0x3821510() {
   return (neuron0x3819330()*0.0112713);
}

double NNfunction_sg_uR::synapse0x3821b90() {
   return (neuron0x3819550()*0.0224827);
}

double NNfunction_sg_uR::synapse0x3821bd0() {
   return (neuron0x3819890()*0.0319527);
}

double NNfunction_sg_uR::synapse0x3821c10() {
   return (neuron0x3819bd0()*-0.0148809);
}

double NNfunction_sg_uR::synapse0x3821c50() {
   return (neuron0x3819f10()*0.0206027);
}

double NNfunction_sg_uR::synapse0x3821c90() {
   return (neuron0x381a250()*-0.00127692);
}

double NNfunction_sg_uR::synapse0x3821cd0() {
   return (neuron0x381a590()*-0.0184577);
}

double NNfunction_sg_uR::synapse0x3822050() {
   return (neuron0x3815a60()*0.0637391);
}

double NNfunction_sg_uR::synapse0x3822090() {
   return (neuron0x3815d10()*0.333903);
}

double NNfunction_sg_uR::synapse0x38220d0() {
   return (neuron0x3816050()*-0.000453594);
}

double NNfunction_sg_uR::synapse0x3822110() {
   return (neuron0x3816390()*-0.0631027);
}

double NNfunction_sg_uR::synapse0x3822150() {
   return (neuron0x38166d0()*-0.0229437);
}

double NNfunction_sg_uR::synapse0x3822190() {
   return (neuron0x3816a10()*-0.0409991);
}

double NNfunction_sg_uR::synapse0x38221d0() {
   return (neuron0x3816d50()*-0.0567314);
}

double NNfunction_sg_uR::synapse0x3822210() {
   return (neuron0x3817090()*-0.00673272);
}

double NNfunction_sg_uR::synapse0x3822250() {
   return (neuron0x38173d0()*0.671466);
}

double NNfunction_sg_uR::synapse0x3822290() {
   return (neuron0x3817710()*0.104882);
}

double NNfunction_sg_uR::synapse0x38222d0() {
   return (neuron0x3817a50()*0.020147);
}

double NNfunction_sg_uR::synapse0x3822310() {
   return (neuron0x3817d90()*0.465595);
}

double NNfunction_sg_uR::synapse0x3822350() {
   return (neuron0x38180d0()*0.192982);
}

double NNfunction_sg_uR::synapse0x3822390() {
   return (neuron0x3818410()*-0.0685235);
}

double NNfunction_sg_uR::synapse0x38223d0() {
   return (neuron0x3818750()*-0.373601);
}

double NNfunction_sg_uR::synapse0x3822410() {
   return (neuron0x3818a90()*-0.00188778);
}

double NNfunction_sg_uR::synapse0x3821ea0() {
   return (neuron0x3818dd0()*0.0245889);
}

double NNfunction_sg_uR::synapse0x3821ee0() {
   return (neuron0x3819330()*0.125665);
}

double NNfunction_sg_uR::synapse0x381ec70() {
   return (neuron0x3819550()*0.181709);
}

double NNfunction_sg_uR::synapse0x381ecb0() {
   return (neuron0x3819890()*0.0327798);
}

double NNfunction_sg_uR::synapse0x381ecf0() {
   return (neuron0x3819bd0()*0.0302052);
}

double NNfunction_sg_uR::synapse0x381ed30() {
   return (neuron0x3819f10()*-0.0186492);
}

double NNfunction_sg_uR::synapse0x381ed70() {
   return (neuron0x381a250()*0.00807789);
}

double NNfunction_sg_uR::synapse0x381edb0() {
   return (neuron0x381a590()*0.00526739);
}

double NNfunction_sg_uR::synapse0x381f130() {
   return (neuron0x3815a60()*0.00305084);
}

double NNfunction_sg_uR::synapse0x381f170() {
   return (neuron0x3815d10()*0.0109073);
}

double NNfunction_sg_uR::synapse0x381f1b0() {
   return (neuron0x3816050()*-5.50616e-05);
}

double NNfunction_sg_uR::synapse0x381f1f0() {
   return (neuron0x3816390()*-1.70462);
}

double NNfunction_sg_uR::synapse0x381f230() {
   return (neuron0x38166d0()*-0.00709872);
}

double NNfunction_sg_uR::synapse0x381f270() {
   return (neuron0x3816a10()*-0.000144069);
}

double NNfunction_sg_uR::synapse0x381f2b0() {
   return (neuron0x3816d50()*-0.00508974);
}

double NNfunction_sg_uR::synapse0x381f2f0() {
   return (neuron0x3817090()*0.00855405);
}

double NNfunction_sg_uR::synapse0x381f330() {
   return (neuron0x38173d0()*0.00128386);
}

double NNfunction_sg_uR::synapse0x381f370() {
   return (neuron0x3817710()*0.00195441);
}

double NNfunction_sg_uR::synapse0x381f3b0() {
   return (neuron0x3817a50()*0.00685896);
}

double NNfunction_sg_uR::synapse0x381f3f0() {
   return (neuron0x3817d90()*-0.0020892);
}

double NNfunction_sg_uR::synapse0x381f430() {
   return (neuron0x38180d0()*-0.00670288);
}

double NNfunction_sg_uR::synapse0x3823570() {
   return (neuron0x3818410()*0.00484235);
}

double NNfunction_sg_uR::synapse0x38235b0() {
   return (neuron0x3818750()*-0.223199);
}

double NNfunction_sg_uR::synapse0x38235f0() {
   return (neuron0x3818a90()*0.00393109);
}

double NNfunction_sg_uR::synapse0x381ef80() {
   return (neuron0x3818dd0()*-0.000879641);
}

double NNfunction_sg_uR::synapse0x381efc0() {
   return (neuron0x3819330()*-0.00338493);
}

double NNfunction_sg_uR::synapse0x3823740() {
   return (neuron0x3819550()*-0.000557665);
}

double NNfunction_sg_uR::synapse0x3823780() {
   return (neuron0x3819890()*0.00185105);
}

double NNfunction_sg_uR::synapse0x38237c0() {
   return (neuron0x3819bd0()*-0.00299772);
}

double NNfunction_sg_uR::synapse0x3823800() {
   return (neuron0x3819f10()*0.0062127);
}

double NNfunction_sg_uR::synapse0x3823840() {
   return (neuron0x381a250()*0.0011522);
}

double NNfunction_sg_uR::synapse0x3823880() {
   return (neuron0x381a590()*-0.00605129);
}

double NNfunction_sg_uR::synapse0x3823c00() {
   return (neuron0x3815a60()*0.203697);
}

double NNfunction_sg_uR::synapse0x3823c40() {
   return (neuron0x3815d10()*0.230969);
}

double NNfunction_sg_uR::synapse0x3823c80() {
   return (neuron0x3816050()*-0.257083);
}

double NNfunction_sg_uR::synapse0x3823cc0() {
   return (neuron0x3816390()*0.898471);
}

double NNfunction_sg_uR::synapse0x3823d00() {
   return (neuron0x38166d0()*1.26186);
}

double NNfunction_sg_uR::synapse0x3823d40() {
   return (neuron0x3816a10()*0.932662);
}

double NNfunction_sg_uR::synapse0x3823d80() {
   return (neuron0x3816d50()*0.638685);
}

double NNfunction_sg_uR::synapse0x3823dc0() {
   return (neuron0x3817090()*0.621765);
}

double NNfunction_sg_uR::synapse0x3823e00() {
   return (neuron0x38173d0()*0.500118);
}

double NNfunction_sg_uR::synapse0x3823e40() {
   return (neuron0x3817710()*1.0975);
}

double NNfunction_sg_uR::synapse0x3823e80() {
   return (neuron0x3817a50()*0.671469);
}

double NNfunction_sg_uR::synapse0x3823ec0() {
   return (neuron0x3817d90()*1.2224);
}

double NNfunction_sg_uR::synapse0x3823f00() {
   return (neuron0x38180d0()*1.66556);
}

double NNfunction_sg_uR::synapse0x3823f40() {
   return (neuron0x3818410()*1.29947);
}

double NNfunction_sg_uR::synapse0x3823f80() {
   return (neuron0x3818750()*2.91747);
}

double NNfunction_sg_uR::synapse0x3823fc0() {
   return (neuron0x3818a90()*1.55304);
}

double NNfunction_sg_uR::synapse0x3823a50() {
   return (neuron0x3818dd0()*1.65347);
}

double NNfunction_sg_uR::synapse0x3823a90() {
   return (neuron0x3819330()*1.15783);
}

double NNfunction_sg_uR::synapse0x3824110() {
   return (neuron0x3819550()*1.72227);
}

double NNfunction_sg_uR::synapse0x3824150() {
   return (neuron0x3819890()*0.95713);
}

double NNfunction_sg_uR::synapse0x3824190() {
   return (neuron0x3819bd0()*-1.14298);
}

double NNfunction_sg_uR::synapse0x38241d0() {
   return (neuron0x3819f10()*-1.01401);
}

double NNfunction_sg_uR::synapse0x3824210() {
   return (neuron0x381a250()*-0.536304);
}

double NNfunction_sg_uR::synapse0x3824250() {
   return (neuron0x381a590()*0.451595);
}

double NNfunction_sg_uR::synapse0x38245d0() {
   return (neuron0x3815a60()*0.0133424);
}

double NNfunction_sg_uR::synapse0x3824610() {
   return (neuron0x3815d10()*-0.0822688);
}

double NNfunction_sg_uR::synapse0x3824650() {
   return (neuron0x3816050()*-0.465971);
}

double NNfunction_sg_uR::synapse0x3824690() {
   return (neuron0x3816390()*0.826293);
}

double NNfunction_sg_uR::synapse0x38246d0() {
   return (neuron0x38166d0()*-0.0123338);
}

double NNfunction_sg_uR::synapse0x3824710() {
   return (neuron0x3816a10()*0.0731251);
}

double NNfunction_sg_uR::synapse0x3824750() {
   return (neuron0x3816d50()*0.182465);
}

double NNfunction_sg_uR::synapse0x3824790() {
   return (neuron0x3817090()*0.313884);
}

double NNfunction_sg_uR::synapse0x38247d0() {
   return (neuron0x38173d0()*0.530245);
}

double NNfunction_sg_uR::synapse0x3824810() {
   return (neuron0x3817710()*-0.251293);
}

double NNfunction_sg_uR::synapse0x3824850() {
   return (neuron0x3817a50()*0.753461);
}

double NNfunction_sg_uR::synapse0x3824890() {
   return (neuron0x3817d90()*-0.0782709);
}

double NNfunction_sg_uR::synapse0x38248d0() {
   return (neuron0x38180d0()*0.598846);
}

double NNfunction_sg_uR::synapse0x3824910() {
   return (neuron0x3818410()*0.545745);
}

double NNfunction_sg_uR::synapse0x3824950() {
   return (neuron0x3818750()*0.789693);
}

double NNfunction_sg_uR::synapse0x3824990() {
   return (neuron0x3818a90()*0.337222);
}

double NNfunction_sg_uR::synapse0x3824420() {
   return (neuron0x3818dd0()*0.113634);
}

double NNfunction_sg_uR::synapse0x3824460() {
   return (neuron0x3819330()*0.194612);
}

double NNfunction_sg_uR::synapse0x3824ae0() {
   return (neuron0x3819550()*0.778077);
}

double NNfunction_sg_uR::synapse0x3824b20() {
   return (neuron0x3819890()*0.739131);
}

double NNfunction_sg_uR::synapse0x3824b60() {
   return (neuron0x3819bd0()*-0.424144);
}

double NNfunction_sg_uR::synapse0x3824ba0() {
   return (neuron0x3819f10()*-0.229476);
}

double NNfunction_sg_uR::synapse0x3824be0() {
   return (neuron0x381a250()*-0.0653586);
}

double NNfunction_sg_uR::synapse0x3824c20() {
   return (neuron0x381a590()*0.115628);
}

double NNfunction_sg_uR::synapse0x3824fa0() {
   return (neuron0x3815a60()*-0.00844891);
}

double NNfunction_sg_uR::synapse0x3824fe0() {
   return (neuron0x3815d10()*-0.011978);
}

double NNfunction_sg_uR::synapse0x3825020() {
   return (neuron0x3816050()*-0.00307781);
}

double NNfunction_sg_uR::synapse0x3825060() {
   return (neuron0x3816390()*13.9007);
}

double NNfunction_sg_uR::synapse0x38250a0() {
   return (neuron0x38166d0()*0.00667063);
}

double NNfunction_sg_uR::synapse0x38250e0() {
   return (neuron0x3816a10()*0.013872);
}

double NNfunction_sg_uR::synapse0x3825120() {
   return (neuron0x3816d50()*0.00293922);
}

double NNfunction_sg_uR::synapse0x3825160() {
   return (neuron0x3817090()*-0.00539998);
}

double NNfunction_sg_uR::synapse0x38251a0() {
   return (neuron0x38173d0()*-0.0058725);
}

double NNfunction_sg_uR::synapse0x38251e0() {
   return (neuron0x3817710()*0.0051099);
}

double NNfunction_sg_uR::synapse0x3825220() {
   return (neuron0x3817a50()*-0.00484866);
}

double NNfunction_sg_uR::synapse0x3825260() {
   return (neuron0x3817d90()*-0.00734432);
}

double NNfunction_sg_uR::synapse0x38252a0() {
   return (neuron0x38180d0()*0.00542515);
}

double NNfunction_sg_uR::synapse0x38252e0() {
   return (neuron0x3818410()*-0.0164328);
}

double NNfunction_sg_uR::synapse0x3825320() {
   return (neuron0x3818750()*0.016374);
}

double NNfunction_sg_uR::synapse0x3825360() {
   return (neuron0x3818a90()*-0.00368271);
}

double NNfunction_sg_uR::synapse0x3824df0() {
   return (neuron0x3818dd0()*0.00979553);
}

double NNfunction_sg_uR::synapse0x3824e30() {
   return (neuron0x3819330()*0.00217636);
}

double NNfunction_sg_uR::synapse0x38254b0() {
   return (neuron0x3819550()*0.00610965);
}

double NNfunction_sg_uR::synapse0x38254f0() {
   return (neuron0x3819890()*0.00513849);
}

double NNfunction_sg_uR::synapse0x3825530() {
   return (neuron0x3819bd0()*0.00265039);
}

double NNfunction_sg_uR::synapse0x3825570() {
   return (neuron0x3819f10()*-0.0137833);
}

double NNfunction_sg_uR::synapse0x38255b0() {
   return (neuron0x381a250()*0.0045095);
}

double NNfunction_sg_uR::synapse0x38255f0() {
   return (neuron0x381a590()*0.00534349);
}

double NNfunction_sg_uR::synapse0x3825970() {
   return (neuron0x3815a60()*0.00221073);
}

double NNfunction_sg_uR::synapse0x3815bf0() {
   return (neuron0x3815d10()*-0.0164323);
}

double NNfunction_sg_uR::synapse0x3815c30() {
   return (neuron0x3816050()*0.00768297);
}

double NNfunction_sg_uR::synapse0x3815f30() {
   return (neuron0x3816390()*1.4528);
}

double NNfunction_sg_uR::synapse0x3815f70() {
   return (neuron0x38166d0()*-0.00572353);
}

double NNfunction_sg_uR::synapse0x3816270() {
   return (neuron0x3816a10()*-0.00327965);
}

double NNfunction_sg_uR::synapse0x38162b0() {
   return (neuron0x3816d50()*0.00362483);
}

double NNfunction_sg_uR::synapse0x38165b0() {
   return (neuron0x3817090()*-0.0157584);
}

double NNfunction_sg_uR::synapse0x38165f0() {
   return (neuron0x38173d0()*-0.00594123);
}

double NNfunction_sg_uR::synapse0x38168f0() {
   return (neuron0x3817710()*-0.00192119);
}

double NNfunction_sg_uR::synapse0x3816930() {
   return (neuron0x3817a50()*0.011254);
}

double NNfunction_sg_uR::synapse0x3816c30() {
   return (neuron0x3817d90()*0.0216216);
}

double NNfunction_sg_uR::synapse0x3816c70() {
   return (neuron0x38180d0()*0.018426);
}

double NNfunction_sg_uR::synapse0x3816f70() {
   return (neuron0x3818410()*-0.00138559);
}

double NNfunction_sg_uR::synapse0x3816fb0() {
   return (neuron0x3818750()*0.754636);
}

double NNfunction_sg_uR::synapse0x38172b0() {
   return (neuron0x3818a90()*-0.0245962);
}

double NNfunction_sg_uR::synapse0x38172f0() {
   return (neuron0x3818dd0()*0.00117157);
}

double NNfunction_sg_uR::synapse0x38175f0() {
   return (neuron0x3819330()*0.00981334);
}

double NNfunction_sg_uR::synapse0x3817630() {
   return (neuron0x3819550()*0.000623439);
}

double NNfunction_sg_uR::synapse0x3817930() {
   return (neuron0x3819890()*0.00764897);
}

double NNfunction_sg_uR::synapse0x3817970() {
   return (neuron0x3819bd0()*-0.00217786);
}

double NNfunction_sg_uR::synapse0x3817c70() {
   return (neuron0x3819f10()*0.0108963);
}

double NNfunction_sg_uR::synapse0x3817cb0() {
   return (neuron0x381a250()*-0.00121674);
}

double NNfunction_sg_uR::synapse0x3817fb0() {
   return (neuron0x381a590()*-0.00541676);
}

double NNfunction_sg_uR::synapse0x3817ff0() {
   return (neuron0x3815a60()*0.137685);
}

double NNfunction_sg_uR::synapse0x3818cb0() {
   return (neuron0x3815d10()*0.545169);
}

double NNfunction_sg_uR::synapse0x3818cf0() {
   return (neuron0x3816050()*0.162382);
}

double NNfunction_sg_uR::synapse0x38257c0() {
   return (neuron0x3816390()*0.0543914);
}

double NNfunction_sg_uR::synapse0x3825800() {
   return (neuron0x38166d0()*0.155551);
}

double NNfunction_sg_uR::synapse0x3818ff0() {
   return (neuron0x3816a10()*-0.0927119);
}

double NNfunction_sg_uR::synapse0x3819030() {
   return (neuron0x3816d50()*-0.103351);
}

double NNfunction_sg_uR::synapse0x23813a0() {
   return (neuron0x3817090()*0.00655494);
}

double NNfunction_sg_uR::synapse0x23813e0() {
   return (neuron0x38173d0()*0.0584337);
}

double NNfunction_sg_uR::synapse0x3819770() {
   return (neuron0x3817710()*-0.380738);
}

double NNfunction_sg_uR::synapse0x38197b0() {
   return (neuron0x3817a50()*0.109572);
}

double NNfunction_sg_uR::synapse0x3819ab0() {
   return (neuron0x3817d90()*-0.313109);
}

double NNfunction_sg_uR::synapse0x3819af0() {
   return (neuron0x38180d0()*-0.40566);
}

double NNfunction_sg_uR::synapse0x3819df0() {
   return (neuron0x3818410()*0.232522);
}

double NNfunction_sg_uR::synapse0x3819e30() {
   return (neuron0x3818750()*-1.06738);
}

double NNfunction_sg_uR::synapse0x381a130() {
   return (neuron0x3818a90()*-0.143785);
}

double NNfunction_sg_uR::synapse0x381a170() {
   return (neuron0x3818dd0()*0.00296428);
}

double NNfunction_sg_uR::synapse0x381a470() {
   return (neuron0x3819330()*0.0528732);
}

double NNfunction_sg_uR::synapse0x381a4b0() {
   return (neuron0x3819550()*-0.537776);
}

double NNfunction_sg_uR::synapse0x381a7b0() {
   return (neuron0x3819890()*-0.19036);
}

double NNfunction_sg_uR::synapse0x381a7f0() {
   return (neuron0x3819bd0()*-0.0523365);
}

double NNfunction_sg_uR::synapse0x38182f0() {
   return (neuron0x3819f10()*-0.0780618);
}

double NNfunction_sg_uR::synapse0x3818330() {
   return (neuron0x381a250()*-0.02662);
}

double NNfunction_sg_uR::synapse0x38276e0() {
   return (neuron0x381a590()*-0.0777251);
}

double NNfunction_sg_uR::synapse0x3827a60() {
   return (neuron0x3815a60()*0.101551);
}

double NNfunction_sg_uR::synapse0x3827aa0() {
   return (neuron0x3815d10()*-0.495025);
}

double NNfunction_sg_uR::synapse0x3827ae0() {
   return (neuron0x3816050()*0.39977);
}

double NNfunction_sg_uR::synapse0x3827b20() {
   return (neuron0x3816390()*0.350069);
}

double NNfunction_sg_uR::synapse0x3827b60() {
   return (neuron0x38166d0()*-0.0633291);
}

double NNfunction_sg_uR::synapse0x3827ba0() {
   return (neuron0x3816a10()*0.132998);
}

double NNfunction_sg_uR::synapse0x3827be0() {
   return (neuron0x3816d50()*0.480446);
}

double NNfunction_sg_uR::synapse0x3827c20() {
   return (neuron0x3817090()*0.102021);
}

double NNfunction_sg_uR::synapse0x3827c60() {
   return (neuron0x38173d0()*0.03808);
}

double NNfunction_sg_uR::synapse0x3827ca0() {
   return (neuron0x3817710()*0.418301);
}

double NNfunction_sg_uR::synapse0x3827ce0() {
   return (neuron0x3817a50()*-0.310501);
}

double NNfunction_sg_uR::synapse0x3827d20() {
   return (neuron0x3817d90()*0.916349);
}

double NNfunction_sg_uR::synapse0x3827d60() {
   return (neuron0x38180d0()*0.747124);
}

double NNfunction_sg_uR::synapse0x3827da0() {
   return (neuron0x3818410()*1.11972);
}

double NNfunction_sg_uR::synapse0x3827de0() {
   return (neuron0x3818750()*0.965404);
}

double NNfunction_sg_uR::synapse0x3827e20() {
   return (neuron0x3818a90()*0.88245);
}

double NNfunction_sg_uR::synapse0x38278b0() {
   return (neuron0x3818dd0()*0.596712);
}

double NNfunction_sg_uR::synapse0x38278f0() {
   return (neuron0x3819330()*1.18934);
}

double NNfunction_sg_uR::synapse0x3827f70() {
   return (neuron0x3819550()*0.322259);
}

double NNfunction_sg_uR::synapse0x3827fb0() {
   return (neuron0x3819890()*0.571196);
}

double NNfunction_sg_uR::synapse0x3827ff0() {
   return (neuron0x3819bd0()*-0.391104);
}

double NNfunction_sg_uR::synapse0x3828030() {
   return (neuron0x3819f10()*-0.378995);
}

double NNfunction_sg_uR::synapse0x3828070() {
   return (neuron0x381a250()*-0.265447);
}

double NNfunction_sg_uR::synapse0x38280b0() {
   return (neuron0x381a590()*0.191185);
}

double NNfunction_sg_uR::synapse0x3828430() {
   return (neuron0x3815a60()*0.0124455);
}

double NNfunction_sg_uR::synapse0x3828470() {
   return (neuron0x3815d10()*0.0226243);
}

double NNfunction_sg_uR::synapse0x38284b0() {
   return (neuron0x3816050()*0.00328835);
}

double NNfunction_sg_uR::synapse0x38284f0() {
   return (neuron0x3816390()*-1.04229);
}

double NNfunction_sg_uR::synapse0x3828530() {
   return (neuron0x38166d0()*0.0216348);
}

double NNfunction_sg_uR::synapse0x3828570() {
   return (neuron0x3816a10()*-0.00185776);
}

double NNfunction_sg_uR::synapse0x38285b0() {
   return (neuron0x3816d50()*-0.00604321);
}

double NNfunction_sg_uR::synapse0x38285f0() {
   return (neuron0x3817090()*0.0225454);
}

double NNfunction_sg_uR::synapse0x3828630() {
   return (neuron0x38173d0()*0.0353571);
}

double NNfunction_sg_uR::synapse0x3828670() {
   return (neuron0x3817710()*0.0191748);
}

double NNfunction_sg_uR::synapse0x38286b0() {
   return (neuron0x3817a50()*0.0130631);
}

double NNfunction_sg_uR::synapse0x38286f0() {
   return (neuron0x3817d90()*0.00259002);
}

double NNfunction_sg_uR::synapse0x3828730() {
   return (neuron0x38180d0()*-0.00401462);
}

double NNfunction_sg_uR::synapse0x3828770() {
   return (neuron0x3818410()*-0.00843779);
}

double NNfunction_sg_uR::synapse0x38287b0() {
   return (neuron0x3818750()*-1.70784);
}

double NNfunction_sg_uR::synapse0x38287f0() {
   return (neuron0x3818a90()*0.0592378);
}

double NNfunction_sg_uR::synapse0x3828280() {
   return (neuron0x3818dd0()*-0.0198234);
}

double NNfunction_sg_uR::synapse0x38282c0() {
   return (neuron0x3819330()*-3.36374e-05);
}

double NNfunction_sg_uR::synapse0x3828940() {
   return (neuron0x3819550()*0.0387912);
}

double NNfunction_sg_uR::synapse0x3828980() {
   return (neuron0x3819890()*-0.00499092);
}

double NNfunction_sg_uR::synapse0x38289c0() {
   return (neuron0x3819bd0()*0.0117119);
}

double NNfunction_sg_uR::synapse0x3828a00() {
   return (neuron0x3819f10()*-0.0119733);
}

double NNfunction_sg_uR::synapse0x3828a40() {
   return (neuron0x381a250()*0.01937);
}

double NNfunction_sg_uR::synapse0x3828a80() {
   return (neuron0x381a590()*-0.000749804);
}

double NNfunction_sg_uR::synapse0x3828e00() {
   return (neuron0x3815a60()*0.0589983);
}

double NNfunction_sg_uR::synapse0x3828e40() {
   return (neuron0x3815d10()*-0.178361);
}

double NNfunction_sg_uR::synapse0x3828e80() {
   return (neuron0x3816050()*-0.149436);
}

double NNfunction_sg_uR::synapse0x3828ec0() {
   return (neuron0x3816390()*0.113309);
}

double NNfunction_sg_uR::synapse0x3828f00() {
   return (neuron0x38166d0()*-0.0980574);
}

double NNfunction_sg_uR::synapse0x3828f40() {
   return (neuron0x3816a10()*0.293628);
}

double NNfunction_sg_uR::synapse0x3828f80() {
   return (neuron0x3816d50()*0.699847);
}

double NNfunction_sg_uR::synapse0x3828fc0() {
   return (neuron0x3817090()*-0.101518);
}

double NNfunction_sg_uR::synapse0x3829000() {
   return (neuron0x38173d0()*-0.140784);
}

double NNfunction_sg_uR::synapse0x3829040() {
   return (neuron0x3817710()*0.0299641);
}

double NNfunction_sg_uR::synapse0x3829080() {
   return (neuron0x3817a50()*0.678847);
}

double NNfunction_sg_uR::synapse0x38290c0() {
   return (neuron0x3817d90()*0.859911);
}

double NNfunction_sg_uR::synapse0x3829100() {
   return (neuron0x38180d0()*0.741472);
}

double NNfunction_sg_uR::synapse0x3829140() {
   return (neuron0x3818410()*0.931296);
}

double NNfunction_sg_uR::synapse0x3829180() {
   return (neuron0x3818750()*0.507869);
}

double NNfunction_sg_uR::synapse0x38291c0() {
   return (neuron0x3818a90()*0.081611);
}

double NNfunction_sg_uR::synapse0x3828c50() {
   return (neuron0x3818dd0()*0.0298012);
}

double NNfunction_sg_uR::synapse0x3828c90() {
   return (neuron0x3819330()*0.369685);
}

double NNfunction_sg_uR::synapse0x3829310() {
   return (neuron0x3819550()*0.757178);
}

double NNfunction_sg_uR::synapse0x3829350() {
   return (neuron0x3819890()*0.142548);
}

double NNfunction_sg_uR::synapse0x3829390() {
   return (neuron0x3819bd0()*0.0324383);
}

double NNfunction_sg_uR::synapse0x38293d0() {
   return (neuron0x3819f10()*-0.692952);
}

double NNfunction_sg_uR::synapse0x3829410() {
   return (neuron0x381a250()*-0.0357383);
}

double NNfunction_sg_uR::synapse0x3829450() {
   return (neuron0x381a590()*-0.185189);
}

double NNfunction_sg_uR::synapse0x38297d0() {
   return (neuron0x3815a60()*0.00994697);
}

double NNfunction_sg_uR::synapse0x3829810() {
   return (neuron0x3815d10()*-0.0755164);
}

double NNfunction_sg_uR::synapse0x3829850() {
   return (neuron0x3816050()*-0.0604371);
}

double NNfunction_sg_uR::synapse0x3829890() {
   return (neuron0x3816390()*-0.127919);
}

double NNfunction_sg_uR::synapse0x38298d0() {
   return (neuron0x38166d0()*-0.82453);
}

double NNfunction_sg_uR::synapse0x3829910() {
   return (neuron0x3816a10()*0.114371);
}

double NNfunction_sg_uR::synapse0x3829950() {
   return (neuron0x3816d50()*0.117846);
}

double NNfunction_sg_uR::synapse0x3829990() {
   return (neuron0x3817090()*0.150363);
}

double NNfunction_sg_uR::synapse0x38299d0() {
   return (neuron0x38173d0()*0.0105419);
}

double NNfunction_sg_uR::synapse0x3829a10() {
   return (neuron0x3817710()*0.0771212);
}

double NNfunction_sg_uR::synapse0x3829a50() {
   return (neuron0x3817a50()*0.0638294);
}

double NNfunction_sg_uR::synapse0x3829a90() {
   return (neuron0x3817d90()*0.0537743);
}

double NNfunction_sg_uR::synapse0x3829ad0() {
   return (neuron0x38180d0()*-0.0140575);
}

double NNfunction_sg_uR::synapse0x3829b10() {
   return (neuron0x3818410()*0.158528);
}

double NNfunction_sg_uR::synapse0x3829b50() {
   return (neuron0x3818750()*2.09211);
}

double NNfunction_sg_uR::synapse0x3829b90() {
   return (neuron0x3818a90()*0.306491);
}

double NNfunction_sg_uR::synapse0x3829620() {
   return (neuron0x3818dd0()*0.0181453);
}

double NNfunction_sg_uR::synapse0x3829660() {
   return (neuron0x3819330()*0.064554);
}

double NNfunction_sg_uR::synapse0x3829ce0() {
   return (neuron0x3819550()*0.128897);
}

double NNfunction_sg_uR::synapse0x3829d20() {
   return (neuron0x3819890()*0.0109765);
}

double NNfunction_sg_uR::synapse0x3829d60() {
   return (neuron0x3819bd0()*-0.144579);
}

double NNfunction_sg_uR::synapse0x3829da0() {
   return (neuron0x3819f10()*0.037344);
}

double NNfunction_sg_uR::synapse0x3829de0() {
   return (neuron0x381a250()*0.0800372);
}

double NNfunction_sg_uR::synapse0x3829e20() {
   return (neuron0x381a590()*0.114588);
}

double NNfunction_sg_uR::synapse0x382a1a0() {
   return (neuron0x3815a60()*0.0135854);
}

double NNfunction_sg_uR::synapse0x382a1e0() {
   return (neuron0x3815d10()*0.187285);
}

double NNfunction_sg_uR::synapse0x382a220() {
   return (neuron0x3816050()*-0.0328076);
}

double NNfunction_sg_uR::synapse0x382a260() {
   return (neuron0x3816390()*-0.224956);
}

double NNfunction_sg_uR::synapse0x382a2a0() {
   return (neuron0x38166d0()*-0.0153308);
}

double NNfunction_sg_uR::synapse0x382a2e0() {
   return (neuron0x3816a10()*0.0273766);
}

double NNfunction_sg_uR::synapse0x382a320() {
   return (neuron0x3816d50()*0.0133695);
}

double NNfunction_sg_uR::synapse0x382a360() {
   return (neuron0x3817090()*0.024257);
}

double NNfunction_sg_uR::synapse0x382a3a0() {
   return (neuron0x38173d0()*0.12747);
}

double NNfunction_sg_uR::synapse0x3822560() {
   return (neuron0x3817710()*0.0737717);
}

double NNfunction_sg_uR::synapse0x38225a0() {
   return (neuron0x3817a50()*-0.0523336);
}

double NNfunction_sg_uR::synapse0x38225e0() {
   return (neuron0x3817d90()*-0.853448);
}

double NNfunction_sg_uR::synapse0x3822620() {
   return (neuron0x38180d0()*-0.555446);
}

double NNfunction_sg_uR::synapse0x3822660() {
   return (neuron0x3818410()*0.0188244);
}

double NNfunction_sg_uR::synapse0x38226a0() {
   return (neuron0x3818750()*-0.267809);
}

double NNfunction_sg_uR::synapse0x38226e0() {
   return (neuron0x3818a90()*-0.110692);
}

double NNfunction_sg_uR::synapse0x3829ff0() {
   return (neuron0x3818dd0()*0.0737344);
}

double NNfunction_sg_uR::synapse0x382a030() {
   return (neuron0x3819330()*-0.106445);
}

double NNfunction_sg_uR::synapse0x3822830() {
   return (neuron0x3819550()*-0.0631535);
}

double NNfunction_sg_uR::synapse0x3822870() {
   return (neuron0x3819890()*0.0273038);
}

double NNfunction_sg_uR::synapse0x38228b0() {
   return (neuron0x3819bd0()*0.0447133);
}

double NNfunction_sg_uR::synapse0x38228f0() {
   return (neuron0x3819f10()*0.0196109);
}

double NNfunction_sg_uR::synapse0x3822930() {
   return (neuron0x381a250()*0.019995);
}

double NNfunction_sg_uR::synapse0x3822970() {
   return (neuron0x381a590()*-0.0152627);
}

double NNfunction_sg_uR::synapse0x3822cf0() {
   return (neuron0x3815a60()*0.0588448);
}

double NNfunction_sg_uR::synapse0x3822d30() {
   return (neuron0x3815d10()*-0.654739);
}

double NNfunction_sg_uR::synapse0x3822d70() {
   return (neuron0x3816050()*-0.145718);
}

double NNfunction_sg_uR::synapse0x3822db0() {
   return (neuron0x3816390()*-0.428127);
}

double NNfunction_sg_uR::synapse0x3822df0() {
   return (neuron0x38166d0()*-0.605099);
}

double NNfunction_sg_uR::synapse0x3822e30() {
   return (neuron0x3816a10()*-0.147948);
}

double NNfunction_sg_uR::synapse0x3822e70() {
   return (neuron0x3816d50()*0.0515961);
}

double NNfunction_sg_uR::synapse0x3822eb0() {
   return (neuron0x3817090()*-0.143996);
}

double NNfunction_sg_uR::synapse0x3822ef0() {
   return (neuron0x38173d0()*-0.0775821);
}

double NNfunction_sg_uR::synapse0x3822f30() {
   return (neuron0x3817710()*-0.108904);
}

double NNfunction_sg_uR::synapse0x3822f70() {
   return (neuron0x3817a50()*0.378387);
}

double NNfunction_sg_uR::synapse0x3822fb0() {
   return (neuron0x3817d90()*-0.91377);
}

double NNfunction_sg_uR::synapse0x3822ff0() {
   return (neuron0x38180d0()*-0.533449);
}

double NNfunction_sg_uR::synapse0x3823030() {
   return (neuron0x3818410()*-0.969913);
}

double NNfunction_sg_uR::synapse0x3823070() {
   return (neuron0x3818750()*-1.43115);
}

double NNfunction_sg_uR::synapse0x38230b0() {
   return (neuron0x3818a90()*-0.626729);
}

double NNfunction_sg_uR::synapse0x3822b40() {
   return (neuron0x3818dd0()*-0.726513);
}

double NNfunction_sg_uR::synapse0x3822b80() {
   return (neuron0x3819330()*-1.00576);
}

double NNfunction_sg_uR::synapse0x3823200() {
   return (neuron0x3819550()*-0.349789);
}

double NNfunction_sg_uR::synapse0x3823240() {
   return (neuron0x3819890()*-0.546688);
}

double NNfunction_sg_uR::synapse0x3823280() {
   return (neuron0x3819bd0()*0.951783);
}

double NNfunction_sg_uR::synapse0x38232c0() {
   return (neuron0x3819f10()*0.724531);
}

double NNfunction_sg_uR::synapse0x3823300() {
   return (neuron0x381a250()*-0.309475);
}

double NNfunction_sg_uR::synapse0x3823340() {
   return (neuron0x381a590()*-0.615898);
}

double NNfunction_sg_uR::synapse0x3823510() {
   return (neuron0x3815a60()*0.00457515);
}

double NNfunction_sg_uR::synapse0x382c5a0() {
   return (neuron0x3815d10()*-0.0183452);
}

double NNfunction_sg_uR::synapse0x382c5e0() {
   return (neuron0x3816050()*0.00323776);
}

double NNfunction_sg_uR::synapse0x382c620() {
   return (neuron0x3816390()*1.79492);
}

double NNfunction_sg_uR::synapse0x382c660() {
   return (neuron0x38166d0()*0.00953975);
}

double NNfunction_sg_uR::synapse0x382c6a0() {
   return (neuron0x3816a10()*-0.00665126);
}

double NNfunction_sg_uR::synapse0x382c6e0() {
   return (neuron0x3816d50()*0.0128866);
}

double NNfunction_sg_uR::synapse0x382c720() {
   return (neuron0x3817090()*-0.0137934);
}

double NNfunction_sg_uR::synapse0x382c760() {
   return (neuron0x38173d0()*-0.000922325);
}

double NNfunction_sg_uR::synapse0x382c7a0() {
   return (neuron0x3817710()*-0.00753148);
}

double NNfunction_sg_uR::synapse0x382c7e0() {
   return (neuron0x3817a50()*-0.00582229);
}

double NNfunction_sg_uR::synapse0x382c820() {
   return (neuron0x3817d90()*0.00179671);
}

double NNfunction_sg_uR::synapse0x382c860() {
   return (neuron0x38180d0()*0.0134028);
}

double NNfunction_sg_uR::synapse0x382c8a0() {
   return (neuron0x3818410()*-0.0013817);
}

double NNfunction_sg_uR::synapse0x382c8e0() {
   return (neuron0x3818750()*0.466785);
}

double NNfunction_sg_uR::synapse0x382c920() {
   return (neuron0x3818a90()*-0.010254);
}

double NNfunction_sg_uR::synapse0x382c3f0() {
   return (neuron0x3818dd0()*-0.00103156);
}

double NNfunction_sg_uR::synapse0x382c430() {
   return (neuron0x3819330()*0.00526308);
}

double NNfunction_sg_uR::synapse0x382ca70() {
   return (neuron0x3819550()*-0.00237716);
}

double NNfunction_sg_uR::synapse0x382cab0() {
   return (neuron0x3819890()*-0.00308454);
}

double NNfunction_sg_uR::synapse0x382caf0() {
   return (neuron0x3819bd0()*0.00269901);
}

double NNfunction_sg_uR::synapse0x382cb30() {
   return (neuron0x3819f10()*-0.00107303);
}

double NNfunction_sg_uR::synapse0x382cb70() {
   return (neuron0x381a250()*9.3712e-05);
}

double NNfunction_sg_uR::synapse0x382cbb0() {
   return (neuron0x381a590()*8.21673e-05);
}

double NNfunction_sg_uR::synapse0x382cf30() {
   return (neuron0x3815a60()*-0.120624);
}

double NNfunction_sg_uR::synapse0x382cf70() {
   return (neuron0x3815d10()*0.0507708);
}

double NNfunction_sg_uR::synapse0x382cfb0() {
   return (neuron0x3816050()*-0.0416195);
}

double NNfunction_sg_uR::synapse0x382cff0() {
   return (neuron0x3816390()*2.3669);
}

double NNfunction_sg_uR::synapse0x382d030() {
   return (neuron0x38166d0()*-0.09225);
}

double NNfunction_sg_uR::synapse0x382d070() {
   return (neuron0x3816a10()*0.0157185);
}

double NNfunction_sg_uR::synapse0x382d0b0() {
   return (neuron0x3816d50()*-0.0786989);
}

double NNfunction_sg_uR::synapse0x382d0f0() {
   return (neuron0x3817090()*-0.181137);
}

double NNfunction_sg_uR::synapse0x382d130() {
   return (neuron0x38173d0()*-0.0381885);
}

double NNfunction_sg_uR::synapse0x382d170() {
   return (neuron0x3817710()*0.0500612);
}

double NNfunction_sg_uR::synapse0x382d1b0() {
   return (neuron0x3817a50()*0.0803767);
}

double NNfunction_sg_uR::synapse0x382d1f0() {
   return (neuron0x3817d90()*0.236792);
}

double NNfunction_sg_uR::synapse0x382d230() {
   return (neuron0x38180d0()*0.122739);
}

double NNfunction_sg_uR::synapse0x382d270() {
   return (neuron0x3818410()*0.109425);
}

double NNfunction_sg_uR::synapse0x382d2b0() {
   return (neuron0x3818750()*0.287512);
}

double NNfunction_sg_uR::synapse0x382d2f0() {
   return (neuron0x3818a90()*0.0933495);
}

double NNfunction_sg_uR::synapse0x382cd80() {
   return (neuron0x3818dd0()*0.0459124);
}

double NNfunction_sg_uR::synapse0x382cdc0() {
   return (neuron0x3819330()*0.189841);
}

double NNfunction_sg_uR::synapse0x382d440() {
   return (neuron0x3819550()*0.256271);
}

double NNfunction_sg_uR::synapse0x382d480() {
   return (neuron0x3819890()*0.0664053);
}

double NNfunction_sg_uR::synapse0x382d4c0() {
   return (neuron0x3819bd0()*-0.160414);
}

double NNfunction_sg_uR::synapse0x382d500() {
   return (neuron0x3819f10()*-0.0378594);
}

double NNfunction_sg_uR::synapse0x382d540() {
   return (neuron0x381a250()*0.0554931);
}

double NNfunction_sg_uR::synapse0x382d580() {
   return (neuron0x381a590()*0.0532148);
}

double NNfunction_sg_uR::synapse0x382d900() {
   return (neuron0x3815a60()*0.0268937);
}

double NNfunction_sg_uR::synapse0x382d940() {
   return (neuron0x3815d10()*0.244868);
}

double NNfunction_sg_uR::synapse0x382d980() {
   return (neuron0x3816050()*-0.034366);
}

double NNfunction_sg_uR::synapse0x382d9c0() {
   return (neuron0x3816390()*0.228099);
}

double NNfunction_sg_uR::synapse0x382da00() {
   return (neuron0x38166d0()*-0.0369756);
}

double NNfunction_sg_uR::synapse0x382da40() {
   return (neuron0x3816a10()*0.0131665);
}

double NNfunction_sg_uR::synapse0x382da80() {
   return (neuron0x3816d50()*0.0114542);
}

double NNfunction_sg_uR::synapse0x382dac0() {
   return (neuron0x3817090()*0.0175354);
}

double NNfunction_sg_uR::synapse0x382db00() {
   return (neuron0x38173d0()*-0.199064);
}

double NNfunction_sg_uR::synapse0x382db40() {
   return (neuron0x3817710()*-0.0480081);
}

double NNfunction_sg_uR::synapse0x382db80() {
   return (neuron0x3817a50()*0.00550524);
}

double NNfunction_sg_uR::synapse0x382dbc0() {
   return (neuron0x3817d90()*0.260428);
}

double NNfunction_sg_uR::synapse0x382dc00() {
   return (neuron0x38180d0()*-0.324337);
}

double NNfunction_sg_uR::synapse0x382dc40() {
   return (neuron0x3818410()*0.120093);
}

double NNfunction_sg_uR::synapse0x382dc80() {
   return (neuron0x3818750()*0.242938);
}

double NNfunction_sg_uR::synapse0x382dcc0() {
   return (neuron0x3818a90()*0.0728219);
}

double NNfunction_sg_uR::synapse0x382d750() {
   return (neuron0x3818dd0()*0.0416352);
}

double NNfunction_sg_uR::synapse0x382d790() {
   return (neuron0x3819330()*0.260736);
}

double NNfunction_sg_uR::synapse0x382de10() {
   return (neuron0x3819550()*0.529883);
}

double NNfunction_sg_uR::synapse0x382de50() {
   return (neuron0x3819890()*-0.00533379);
}

double NNfunction_sg_uR::synapse0x382de90() {
   return (neuron0x3819bd0()*-0.0477017);
}

double NNfunction_sg_uR::synapse0x382ded0() {
   return (neuron0x3819f10()*-0.0500876);
}

double NNfunction_sg_uR::synapse0x382df10() {
   return (neuron0x381a250()*0.0584254);
}

double NNfunction_sg_uR::synapse0x382df50() {
   return (neuron0x381a590()*0.045883);
}

double NNfunction_sg_uR::synapse0x382e2d0() {
   return (neuron0x3815a60()*-0.0665965);
}

double NNfunction_sg_uR::synapse0x382e310() {
   return (neuron0x3815d10()*-0.0783124);
}

double NNfunction_sg_uR::synapse0x382e350() {
   return (neuron0x3816050()*-0.0640843);
}

double NNfunction_sg_uR::synapse0x382e390() {
   return (neuron0x3816390()*-0.296551);
}

double NNfunction_sg_uR::synapse0x382e3d0() {
   return (neuron0x38166d0()*-0.0981577);
}

double NNfunction_sg_uR::synapse0x382e410() {
   return (neuron0x3816a10()*-0.150379);
}

double NNfunction_sg_uR::synapse0x382e450() {
   return (neuron0x3816d50()*-0.28155);
}

double NNfunction_sg_uR::synapse0x382e490() {
   return (neuron0x3817090()*-0.283733);
}

double NNfunction_sg_uR::synapse0x382e4d0() {
   return (neuron0x38173d0()*-0.479602);
}

double NNfunction_sg_uR::synapse0x382e510() {
   return (neuron0x3817710()*-0.661763);
}

double NNfunction_sg_uR::synapse0x382e550() {
   return (neuron0x3817a50()*-0.756327);
}

double NNfunction_sg_uR::synapse0x382e590() {
   return (neuron0x3817d90()*0.190221);
}

double NNfunction_sg_uR::synapse0x382e5d0() {
   return (neuron0x38180d0()*-0.198252);
}

double NNfunction_sg_uR::synapse0x382e610() {
   return (neuron0x3818410()*-0.644779);
}

double NNfunction_sg_uR::synapse0x382e650() {
   return (neuron0x3818750()*-0.897441);
}

double NNfunction_sg_uR::synapse0x382e690() {
   return (neuron0x3818a90()*-0.082729);
}

double NNfunction_sg_uR::synapse0x382e120() {
   return (neuron0x3818dd0()*-0.435924);
}

double NNfunction_sg_uR::synapse0x382e160() {
   return (neuron0x3819330()*-0.344145);
}

double NNfunction_sg_uR::synapse0x382e7e0() {
   return (neuron0x3819550()*-0.106848);
}

double NNfunction_sg_uR::synapse0x382e820() {
   return (neuron0x3819890()*0.173821);
}

double NNfunction_sg_uR::synapse0x382e860() {
   return (neuron0x3819bd0()*0.0160923);
}

double NNfunction_sg_uR::synapse0x382e8a0() {
   return (neuron0x3819f10()*0.335739);
}

double NNfunction_sg_uR::synapse0x382e8e0() {
   return (neuron0x381a250()*0.193682);
}

double NNfunction_sg_uR::synapse0x382e920() {
   return (neuron0x381a590()*-0.10077);
}

double NNfunction_sg_uR::synapse0x382eca0() {
   return (neuron0x3815a60()*-0.481677);
}

double NNfunction_sg_uR::synapse0x382ece0() {
   return (neuron0x3815d10()*-0.351703);
}

double NNfunction_sg_uR::synapse0x382ed20() {
   return (neuron0x3816050()*-0.414107);
}

double NNfunction_sg_uR::synapse0x382ed60() {
   return (neuron0x3816390()*-0.649792);
}

double NNfunction_sg_uR::synapse0x382eda0() {
   return (neuron0x38166d0()*-0.545109);
}

double NNfunction_sg_uR::synapse0x382ede0() {
   return (neuron0x3816a10()*-1.03184);
}

double NNfunction_sg_uR::synapse0x382ee20() {
   return (neuron0x3816d50()*-0.835662);
}

double NNfunction_sg_uR::synapse0x382ee60() {
   return (neuron0x3817090()*-0.598116);
}

double NNfunction_sg_uR::synapse0x382eea0() {
   return (neuron0x38173d0()*-0.309825);
}

double NNfunction_sg_uR::synapse0x382eee0() {
   return (neuron0x3817710()*-0.671387);
}

double NNfunction_sg_uR::synapse0x382ef20() {
   return (neuron0x3817a50()*-0.260885);
}

double NNfunction_sg_uR::synapse0x382ef60() {
   return (neuron0x3817d90()*-0.667559);
}

double NNfunction_sg_uR::synapse0x382efa0() {
   return (neuron0x38180d0()*-0.89323);
}

double NNfunction_sg_uR::synapse0x382efe0() {
   return (neuron0x3818410()*-1.31161);
}

double NNfunction_sg_uR::synapse0x382f020() {
   return (neuron0x3818750()*-2.08412);
}

double NNfunction_sg_uR::synapse0x382f060() {
   return (neuron0x3818a90()*-1.10833);
}

double NNfunction_sg_uR::synapse0x382eaf0() {
   return (neuron0x3818dd0()*-0.621722);
}

double NNfunction_sg_uR::synapse0x382eb30() {
   return (neuron0x3819330()*-1.28286);
}

double NNfunction_sg_uR::synapse0x382f1b0() {
   return (neuron0x3819550()*-1.31501);
}

double NNfunction_sg_uR::synapse0x382f1f0() {
   return (neuron0x3819890()*-0.921167);
}

double NNfunction_sg_uR::synapse0x382f230() {
   return (neuron0x3819bd0()*0.826249);
}

double NNfunction_sg_uR::synapse0x382f270() {
   return (neuron0x3819f10()*0.30376);
}

double NNfunction_sg_uR::synapse0x382f2b0() {
   return (neuron0x381a250()*-0.15719);
}

double NNfunction_sg_uR::synapse0x382f2f0() {
   return (neuron0x381a590()*-0.201238);
}

double NNfunction_sg_uR::synapse0x382f670() {
   return (neuron0x3815a60()*-0.00353043);
}

double NNfunction_sg_uR::synapse0x382f6b0() {
   return (neuron0x3815d10()*0.0149129);
}

double NNfunction_sg_uR::synapse0x382f6f0() {
   return (neuron0x3816050()*-0.00566282);
}

double NNfunction_sg_uR::synapse0x382f730() {
   return (neuron0x3816390()*0.01652);
}

double NNfunction_sg_uR::synapse0x382f770() {
   return (neuron0x38166d0()*0.0374006);
}

double NNfunction_sg_uR::synapse0x382f7b0() {
   return (neuron0x3816a10()*0.107107);
}

double NNfunction_sg_uR::synapse0x382f7f0() {
   return (neuron0x3816d50()*0.0438946);
}

double NNfunction_sg_uR::synapse0x382f830() {
   return (neuron0x3817090()*0.0681965);
}

double NNfunction_sg_uR::synapse0x382f870() {
   return (neuron0x38173d0()*-0.0605485);
}

double NNfunction_sg_uR::synapse0x382f8b0() {
   return (neuron0x3817710()*-0.0467673);
}

double NNfunction_sg_uR::synapse0x382f8f0() {
   return (neuron0x3817a50()*-0.0594753);
}

double NNfunction_sg_uR::synapse0x382f930() {
   return (neuron0x3817d90()*-0.0908417);
}

double NNfunction_sg_uR::synapse0x382f970() {
   return (neuron0x38180d0()*-0.144122);
}

double NNfunction_sg_uR::synapse0x382f9b0() {
   return (neuron0x3818410()*0.0578291);
}

double NNfunction_sg_uR::synapse0x382f9f0() {
   return (neuron0x3818750()*-0.0730058);
}

double NNfunction_sg_uR::synapse0x382fa30() {
   return (neuron0x3818a90()*0.118957);
}

double NNfunction_sg_uR::synapse0x382f4c0() {
   return (neuron0x3818dd0()*0.036795);
}

double NNfunction_sg_uR::synapse0x382f500() {
   return (neuron0x3819330()*-0.0615476);
}

double NNfunction_sg_uR::synapse0x382fb80() {
   return (neuron0x3819550()*0.00102444);
}

double NNfunction_sg_uR::synapse0x382fbc0() {
   return (neuron0x3819890()*-0.0595379);
}

double NNfunction_sg_uR::synapse0x382fc00() {
   return (neuron0x3819bd0()*0.0188132);
}

double NNfunction_sg_uR::synapse0x382fc40() {
   return (neuron0x3819f10()*-0.0220663);
}

double NNfunction_sg_uR::synapse0x382fc80() {
   return (neuron0x381a250()*0.0107337);
}

double NNfunction_sg_uR::synapse0x382fcc0() {
   return (neuron0x381a590()*-0.00374664);
}

double NNfunction_sg_uR::synapse0x3830040() {
   return (neuron0x3815a60()*-0.0427993);
}

double NNfunction_sg_uR::synapse0x3830080() {
   return (neuron0x3815d10()*-0.261042);
}

double NNfunction_sg_uR::synapse0x38300c0() {
   return (neuron0x3816050()*0.324952);
}

double NNfunction_sg_uR::synapse0x3830100() {
   return (neuron0x3816390()*-0.439111);
}

double NNfunction_sg_uR::synapse0x3830140() {
   return (neuron0x38166d0()*-0.111443);
}

double NNfunction_sg_uR::synapse0x3830180() {
   return (neuron0x3816a10()*-0.210961);
}

double NNfunction_sg_uR::synapse0x38301c0() {
   return (neuron0x3816d50()*-0.244745);
}

double NNfunction_sg_uR::synapse0x3830200() {
   return (neuron0x3817090()*-0.280082);
}

double NNfunction_sg_uR::synapse0x3830240() {
   return (neuron0x38173d0()*-0.195537);
}

double NNfunction_sg_uR::synapse0x3830280() {
   return (neuron0x3817710()*0.0202871);
}

double NNfunction_sg_uR::synapse0x38302c0() {
   return (neuron0x3817a50()*0.243685);
}

double NNfunction_sg_uR::synapse0x3830300() {
   return (neuron0x3817d90()*0.0100265);
}

double NNfunction_sg_uR::synapse0x3830340() {
   return (neuron0x38180d0()*-0.181905);
}

double NNfunction_sg_uR::synapse0x3830380() {
   return (neuron0x3818410()*-0.656833);
}

double NNfunction_sg_uR::synapse0x38303c0() {
   return (neuron0x3818750()*-0.674791);
}

double NNfunction_sg_uR::synapse0x3830400() {
   return (neuron0x3818a90()*-0.250747);
}

double NNfunction_sg_uR::synapse0x382fe90() {
   return (neuron0x3818dd0()*-0.197397);
}

double NNfunction_sg_uR::synapse0x382fed0() {
   return (neuron0x3819330()*-0.927682);
}

double NNfunction_sg_uR::synapse0x3830550() {
   return (neuron0x3819550()*0.231736);
}

double NNfunction_sg_uR::synapse0x3830590() {
   return (neuron0x3819890()*-0.32326);
}

double NNfunction_sg_uR::synapse0x38305d0() {
   return (neuron0x3819bd0()*0.595933);
}

double NNfunction_sg_uR::synapse0x3830610() {
   return (neuron0x3819f10()*0.167233);
}

double NNfunction_sg_uR::synapse0x3830650() {
   return (neuron0x381a250()*-0.015778);
}

double NNfunction_sg_uR::synapse0x3830690() {
   return (neuron0x381a590()*-0.230334);
}

double NNfunction_sg_uR::synapse0x3830a10() {
   return (neuron0x3815a60()*0.557237);
}

double NNfunction_sg_uR::synapse0x3830a50() {
   return (neuron0x3815d10()*0.153924);
}

double NNfunction_sg_uR::synapse0x3830a90() {
   return (neuron0x3816050()*0.058175);
}

double NNfunction_sg_uR::synapse0x3830ad0() {
   return (neuron0x3816390()*-0.476219);
}

double NNfunction_sg_uR::synapse0x3830b10() {
   return (neuron0x38166d0()*-0.648108);
}

double NNfunction_sg_uR::synapse0x3830b50() {
   return (neuron0x3816a10()*-0.165814);
}

double NNfunction_sg_uR::synapse0x3830b90() {
   return (neuron0x3816d50()*-0.433204);
}

double NNfunction_sg_uR::synapse0x3830bd0() {
   return (neuron0x3817090()*-0.177214);
}

double NNfunction_sg_uR::synapse0x3830c10() {
   return (neuron0x38173d0()*-0.437927);
}

double NNfunction_sg_uR::synapse0x3830c50() {
   return (neuron0x3817710()*-0.112843);
}

double NNfunction_sg_uR::synapse0x3830c90() {
   return (neuron0x3817a50()*-0.755724);
}

double NNfunction_sg_uR::synapse0x3830cd0() {
   return (neuron0x3817d90()*-0.992401);
}

double NNfunction_sg_uR::synapse0x3830d10() {
   return (neuron0x38180d0()*-0.620631);
}

double NNfunction_sg_uR::synapse0x3830d50() {
   return (neuron0x3818410()*-0.943208);
}

double NNfunction_sg_uR::synapse0x3830d90() {
   return (neuron0x3818750()*-1.55937);
}

double NNfunction_sg_uR::synapse0x3830dd0() {
   return (neuron0x3818a90()*-0.758938);
}

double NNfunction_sg_uR::synapse0x3830860() {
   return (neuron0x3818dd0()*-0.891462);
}

double NNfunction_sg_uR::synapse0x38308a0() {
   return (neuron0x3819330()*-0.996427);
}

double NNfunction_sg_uR::synapse0x3830f20() {
   return (neuron0x3819550()*-1.01616);
}

double NNfunction_sg_uR::synapse0x3830f60() {
   return (neuron0x3819890()*-0.882816);
}

double NNfunction_sg_uR::synapse0x3830fa0() {
   return (neuron0x3819bd0()*0.569914);
}

double NNfunction_sg_uR::synapse0x3830fe0() {
   return (neuron0x3819f10()*0.107917);
}

double NNfunction_sg_uR::synapse0x3831020() {
   return (neuron0x381a250()*-0.397179);
}

double NNfunction_sg_uR::synapse0x3831060() {
   return (neuron0x381a590()*-0.436078);
}

double NNfunction_sg_uR::synapse0x38313e0() {
   return (neuron0x3815a60()*-0.00821784);
}

double NNfunction_sg_uR::synapse0x38259b0() {
   return (neuron0x3815d10()*-0.00376129);
}

double NNfunction_sg_uR::synapse0x38259f0() {
   return (neuron0x3816050()*-0.0195865);
}

double NNfunction_sg_uR::synapse0x3825a30() {
   return (neuron0x3816390()*-0.0660919);
}

double NNfunction_sg_uR::synapse0x3825c80() {
   return (neuron0x38166d0()*0.0182646);
}

double NNfunction_sg_uR::synapse0x3825cc0() {
   return (neuron0x3816a10()*-0.084172);
}

double NNfunction_sg_uR::synapse0x3825d00() {
   return (neuron0x3816d50()*-0.061175);
}

double NNfunction_sg_uR::synapse0x3825f50() {
   return (neuron0x3817090()*-0.0617063);
}

double NNfunction_sg_uR::synapse0x3825f90() {
   return (neuron0x38173d0()*0.0322647);
}

double NNfunction_sg_uR::synapse0x38261e0() {
   return (neuron0x3817710()*0.0285629);
}

double NNfunction_sg_uR::synapse0x3826220() {
   return (neuron0x3817a50()*0.0244749);
}

double NNfunction_sg_uR::synapse0x3826260() {
   return (neuron0x3817d90()*0.0471399);
}

double NNfunction_sg_uR::synapse0x38264b0() {
   return (neuron0x38180d0()*0.0838703);
}

double NNfunction_sg_uR::synapse0x38264f0() {
   return (neuron0x3818410()*-0.0409687);
}

double NNfunction_sg_uR::synapse0x3826740() {
   return (neuron0x3818750()*2.03947);
}

double NNfunction_sg_uR::synapse0x3826780() {
   return (neuron0x3818a90()*-0.0590553);
}

double NNfunction_sg_uR::synapse0x3831230() {
   return (neuron0x3818dd0()*-0.00850441);
}

double NNfunction_sg_uR::synapse0x3831270() {
   return (neuron0x3819330()*0.014069);
}

double NNfunction_sg_uR::synapse0x38268d0() {
   return (neuron0x3819550()*0.020843);
}

double NNfunction_sg_uR::synapse0x3826de0() {
   return (neuron0x3819890()*0.0435065);
}

double NNfunction_sg_uR::synapse0x3826e20() {
   return (neuron0x3819bd0()*-0.0185757);
}

double NNfunction_sg_uR::synapse0x3826e60() {
   return (neuron0x3819f10()*0.00884674);
}

double NNfunction_sg_uR::synapse0x38270b0() {
   return (neuron0x381a250()*-0.00528501);
}

double NNfunction_sg_uR::synapse0x38270f0() {
   return (neuron0x381a590()*-0.00908345);
}

double NNfunction_sg_uR::synapse0x38269a0() {
   return (neuron0x3815a60()*0.017769);
}

double NNfunction_sg_uR::synapse0x38269e0() {
   return (neuron0x3815d10()*-0.37973);
}

double NNfunction_sg_uR::synapse0x3826a20() {
   return (neuron0x3816050()*0.0084047);
}

double NNfunction_sg_uR::synapse0x3826a60() {
   return (neuron0x3816390()*0.022119);
}

double NNfunction_sg_uR::synapse0x38273e0() {
   return (neuron0x38166d0()*0.00498357);
}

double NNfunction_sg_uR::synapse0x3833730() {
   return (neuron0x3816a10()*-0.0914951);
}

double NNfunction_sg_uR::synapse0x3833770() {
   return (neuron0x3816d50()*-0.0316964);
}

double NNfunction_sg_uR::synapse0x38337b0() {
   return (neuron0x3817090()*0.00596237);
}

double NNfunction_sg_uR::synapse0x38337f0() {
   return (neuron0x38173d0()*0.15535);
}

double NNfunction_sg_uR::synapse0x3833830() {
   return (neuron0x3817710()*0.126393);
}

double NNfunction_sg_uR::synapse0x3833870() {
   return (neuron0x3817a50()*0.0787467);
}

double NNfunction_sg_uR::synapse0x38338b0() {
   return (neuron0x3817d90()*-0.0395041);
}

double NNfunction_sg_uR::synapse0x38338f0() {
   return (neuron0x38180d0()*-0.134052);
}

double NNfunction_sg_uR::synapse0x3833930() {
   return (neuron0x3818410()*0.0196303);
}

double NNfunction_sg_uR::synapse0x3833970() {
   return (neuron0x3818750()*-0.9416);
}

double NNfunction_sg_uR::synapse0x38339b0() {
   return (neuron0x3818a90()*-0.0177866);
}

double NNfunction_sg_uR::synapse0x38272c0() {
   return (neuron0x3818dd0()*0.0162822);
}

double NNfunction_sg_uR::synapse0x3827300() {
   return (neuron0x3819330()*0.403618);
}

double NNfunction_sg_uR::synapse0x3833b00() {
   return (neuron0x3819550()*0.217933);
}

double NNfunction_sg_uR::synapse0x3833b40() {
   return (neuron0x3819890()*-0.0284904);
}

double NNfunction_sg_uR::synapse0x3833b80() {
   return (neuron0x3819bd0()*-0.038528);
}

double NNfunction_sg_uR::synapse0x3833bc0() {
   return (neuron0x3819f10()*-0.00303106);
}

double NNfunction_sg_uR::synapse0x3833c00() {
   return (neuron0x381a250()*-0.0129062);
}

double NNfunction_sg_uR::synapse0x3833c40() {
   return (neuron0x381a590()*0.0116315);
}

double NNfunction_sg_uR::synapse0x3833fc0() {
   return (neuron0x3815a60()*0.222689);
}

double NNfunction_sg_uR::synapse0x3834000() {
   return (neuron0x3815d10()*-0.220848);
}

double NNfunction_sg_uR::synapse0x3834040() {
   return (neuron0x3816050()*0.459609);
}

double NNfunction_sg_uR::synapse0x3834080() {
   return (neuron0x3816390()*-0.520782);
}

double NNfunction_sg_uR::synapse0x38340c0() {
   return (neuron0x38166d0()*-0.810875);
}

double NNfunction_sg_uR::synapse0x3834100() {
   return (neuron0x3816a10()*-0.169454);
}

double NNfunction_sg_uR::synapse0x3834140() {
   return (neuron0x3816d50()*-0.339637);
}

double NNfunction_sg_uR::synapse0x3834180() {
   return (neuron0x3817090()*-0.229841);
}

double NNfunction_sg_uR::synapse0x38341c0() {
   return (neuron0x38173d0()*-0.772819);
}

double NNfunction_sg_uR::synapse0x3834200() {
   return (neuron0x3817710()*-0.629218);
}

double NNfunction_sg_uR::synapse0x3834240() {
   return (neuron0x3817a50()*-0.0352836);
}

double NNfunction_sg_uR::synapse0x3834280() {
   return (neuron0x3817d90()*-0.99715);
}

double NNfunction_sg_uR::synapse0x38342c0() {
   return (neuron0x38180d0()*-0.382554);
}

double NNfunction_sg_uR::synapse0x3834300() {
   return (neuron0x3818410()*-1.06821);
}

double NNfunction_sg_uR::synapse0x3834340() {
   return (neuron0x3818750()*-1.31215);
}

double NNfunction_sg_uR::synapse0x3834380() {
   return (neuron0x3818a90()*-0.482458);
}

double NNfunction_sg_uR::synapse0x3833e10() {
   return (neuron0x3818dd0()*-0.584197);
}

double NNfunction_sg_uR::synapse0x3833e50() {
   return (neuron0x3819330()*-0.475043);
}

double NNfunction_sg_uR::synapse0x38344d0() {
   return (neuron0x3819550()*-0.562982);
}

double NNfunction_sg_uR::synapse0x3834510() {
   return (neuron0x3819890()*-0.867523);
}

double NNfunction_sg_uR::synapse0x3834550() {
   return (neuron0x3819bd0()*1.06143);
}

double NNfunction_sg_uR::synapse0x3834590() {
   return (neuron0x3819f10()*0.288045);
}

double NNfunction_sg_uR::synapse0x38345d0() {
   return (neuron0x381a250()*-0.0109385);
}

double NNfunction_sg_uR::synapse0x3834610() {
   return (neuron0x381a590()*-0.601664);
}

double NNfunction_sg_uR::synapse0x3834990() {
   return (neuron0x3815a60()*-0.291153);
}

double NNfunction_sg_uR::synapse0x38349d0() {
   return (neuron0x3815d10()*0.420867);
}

double NNfunction_sg_uR::synapse0x3834a10() {
   return (neuron0x3816050()*-0.477257);
}

double NNfunction_sg_uR::synapse0x3834a50() {
   return (neuron0x3816390()*-0.560119);
}

double NNfunction_sg_uR::synapse0x3834a90() {
   return (neuron0x38166d0()*-0.242331);
}

double NNfunction_sg_uR::synapse0x3834ad0() {
   return (neuron0x3816a10()*-0.670074);
}

double NNfunction_sg_uR::synapse0x3834b10() {
   return (neuron0x3816d50()*0.153504);
}

double NNfunction_sg_uR::synapse0x3834b50() {
   return (neuron0x3817090()*-0.182292);
}

double NNfunction_sg_uR::synapse0x3834b90() {
   return (neuron0x38173d0()*-0.584881);
}

double NNfunction_sg_uR::synapse0x3834bd0() {
   return (neuron0x3817710()*-0.325518);
}

double NNfunction_sg_uR::synapse0x3834c10() {
   return (neuron0x3817a50()*-0.526096);
}

double NNfunction_sg_uR::synapse0x3834c50() {
   return (neuron0x3817d90()*-0.160623);
}

double NNfunction_sg_uR::synapse0x3834c90() {
   return (neuron0x38180d0()*-0.79695);
}

double NNfunction_sg_uR::synapse0x3834cd0() {
   return (neuron0x3818410()*-0.471351);
}

double NNfunction_sg_uR::synapse0x3834d10() {
   return (neuron0x3818750()*-0.409437);
}

double NNfunction_sg_uR::synapse0x3834d50() {
   return (neuron0x3818a90()*-0.091932);
}

double NNfunction_sg_uR::synapse0x38347e0() {
   return (neuron0x3818dd0()*-0.545775);
}

double NNfunction_sg_uR::synapse0x3834820() {
   return (neuron0x3819330()*-0.190858);
}

double NNfunction_sg_uR::synapse0x3834ea0() {
   return (neuron0x3819550()*-0.229725);
}

double NNfunction_sg_uR::synapse0x3834ee0() {
   return (neuron0x3819890()*-0.713801);
}

double NNfunction_sg_uR::synapse0x3834f20() {
   return (neuron0x3819bd0()*0.653045);
}

double NNfunction_sg_uR::synapse0x3834f60() {
   return (neuron0x3819f10()*0.440708);
}

double NNfunction_sg_uR::synapse0x3834fa0() {
   return (neuron0x381a250()*-0.0375472);
}

double NNfunction_sg_uR::synapse0x3834fe0() {
   return (neuron0x381a590()*-0.121201);
}

double NNfunction_sg_uR::synapse0x3835360() {
   return (neuron0x3815a60()*0.00261278);
}

double NNfunction_sg_uR::synapse0x38353a0() {
   return (neuron0x3815d10()*-0.0987761);
}

double NNfunction_sg_uR::synapse0x38353e0() {
   return (neuron0x3816050()*-0.0484741);
}

double NNfunction_sg_uR::synapse0x3835420() {
   return (neuron0x3816390()*0.215498);
}

double NNfunction_sg_uR::synapse0x3835460() {
   return (neuron0x38166d0()*-0.143105);
}

double NNfunction_sg_uR::synapse0x38354a0() {
   return (neuron0x3816a10()*-0.0719778);
}

double NNfunction_sg_uR::synapse0x38354e0() {
   return (neuron0x3816d50()*-0.0163545);
}

double NNfunction_sg_uR::synapse0x3835520() {
   return (neuron0x3817090()*0.262134);
}

double NNfunction_sg_uR::synapse0x3835560() {
   return (neuron0x38173d0()*0.0606308);
}

double NNfunction_sg_uR::synapse0x38355a0() {
   return (neuron0x3817710()*-0.100379);
}

double NNfunction_sg_uR::synapse0x38355e0() {
   return (neuron0x3817a50()*-0.00608186);
}

double NNfunction_sg_uR::synapse0x3835620() {
   return (neuron0x3817d90()*-0.0436036);
}

double NNfunction_sg_uR::synapse0x3835660() {
   return (neuron0x38180d0()*0.0509972);
}

double NNfunction_sg_uR::synapse0x38356a0() {
   return (neuron0x3818410()*0.120975);
}

double NNfunction_sg_uR::synapse0x38356e0() {
   return (neuron0x3818750()*-0.626298);
}

double NNfunction_sg_uR::synapse0x3835720() {
   return (neuron0x3818a90()*0.046445);
}

double NNfunction_sg_uR::synapse0x38351b0() {
   return (neuron0x3818dd0()*0.01188);
}

double NNfunction_sg_uR::synapse0x38351f0() {
   return (neuron0x3819330()*0.120838);
}

double NNfunction_sg_uR::synapse0x3835870() {
   return (neuron0x3819550()*0.0198104);
}

double NNfunction_sg_uR::synapse0x38358b0() {
   return (neuron0x3819890()*-1.1825);
}

double NNfunction_sg_uR::synapse0x38358f0() {
   return (neuron0x3819bd0()*-0.0822581);
}

double NNfunction_sg_uR::synapse0x3835930() {
   return (neuron0x3819f10()*-0.0683081);
}

double NNfunction_sg_uR::synapse0x3835970() {
   return (neuron0x381a250()*0.0413405);
}

double NNfunction_sg_uR::synapse0x38359b0() {
   return (neuron0x381a590()*-0.0463658);
}

double NNfunction_sg_uR::synapse0x3835d30() {
   return (neuron0x3815a60()*-0.0540504);
}

double NNfunction_sg_uR::synapse0x3835d70() {
   return (neuron0x3815d10()*0.0519933);
}

double NNfunction_sg_uR::synapse0x3835db0() {
   return (neuron0x3816050()*0.0244218);
}

double NNfunction_sg_uR::synapse0x3835df0() {
   return (neuron0x3816390()*-0.487896);
}

double NNfunction_sg_uR::synapse0x3835e30() {
   return (neuron0x38166d0()*-0.108712);
}

double NNfunction_sg_uR::synapse0x3835e70() {
   return (neuron0x3816a10()*0.199946);
}

double NNfunction_sg_uR::synapse0x3835eb0() {
   return (neuron0x3816d50()*0.135156);
}

double NNfunction_sg_uR::synapse0x3835ef0() {
   return (neuron0x3817090()*-0.0396031);
}

double NNfunction_sg_uR::synapse0x3835f30() {
   return (neuron0x38173d0()*-0.0473337);
}

double NNfunction_sg_uR::synapse0x3835f70() {
   return (neuron0x3817710()*-0.0672006);
}

double NNfunction_sg_uR::synapse0x3835fb0() {
   return (neuron0x3817a50()*0.0205946);
}

double NNfunction_sg_uR::synapse0x3835ff0() {
   return (neuron0x3817d90()*-0.0214691);
}

double NNfunction_sg_uR::synapse0x3836030() {
   return (neuron0x38180d0()*-0.113354);
}

double NNfunction_sg_uR::synapse0x3836070() {
   return (neuron0x3818410()*-0.100054);
}

double NNfunction_sg_uR::synapse0x38360b0() {
   return (neuron0x3818750()*0.987791);
}

double NNfunction_sg_uR::synapse0x38360f0() {
   return (neuron0x3818a90()*-0.966112);
}

double NNfunction_sg_uR::synapse0x3835b80() {
   return (neuron0x3818dd0()*0.0182641);
}

double NNfunction_sg_uR::synapse0x3835bc0() {
   return (neuron0x3819330()*-0.0911297);
}

double NNfunction_sg_uR::synapse0x3836240() {
   return (neuron0x3819550()*-0.013067);
}

double NNfunction_sg_uR::synapse0x3836280() {
   return (neuron0x3819890()*0.0221958);
}

double NNfunction_sg_uR::synapse0x38362c0() {
   return (neuron0x3819bd0()*-0.0344863);
}

double NNfunction_sg_uR::synapse0x3836300() {
   return (neuron0x3819f10()*0.0776132);
}

double NNfunction_sg_uR::synapse0x3836340() {
   return (neuron0x381a250()*0.0262628);
}

double NNfunction_sg_uR::synapse0x3836380() {
   return (neuron0x381a590()*-0.0557513);
}

double NNfunction_sg_uR::synapse0x3836700() {
   return (neuron0x3815a60()*-0.00404904);
}

double NNfunction_sg_uR::synapse0x3836740() {
   return (neuron0x3815d10()*0.0165086);
}

double NNfunction_sg_uR::synapse0x3836780() {
   return (neuron0x3816050()*-0.00221418);
}

double NNfunction_sg_uR::synapse0x38367c0() {
   return (neuron0x3816390()*-4.10492);
}

double NNfunction_sg_uR::synapse0x3836800() {
   return (neuron0x38166d0()*-0.00720258);
}

double NNfunction_sg_uR::synapse0x3836840() {
   return (neuron0x3816a10()*0.00766971);
}

double NNfunction_sg_uR::synapse0x3836880() {
   return (neuron0x3816d50()*-0.0118951);
}

double NNfunction_sg_uR::synapse0x38368c0() {
   return (neuron0x3817090()*0.0131142);
}

double NNfunction_sg_uR::synapse0x3836900() {
   return (neuron0x38173d0()*-0.00036092);
}

double NNfunction_sg_uR::synapse0x3836940() {
   return (neuron0x3817710()*0.00552868);
}

double NNfunction_sg_uR::synapse0x3836980() {
   return (neuron0x3817a50()*0.00223438);
}

double NNfunction_sg_uR::synapse0x38369c0() {
   return (neuron0x3817d90()*0.00412976);
}

double NNfunction_sg_uR::synapse0x3836a00() {
   return (neuron0x38180d0()*-0.0150097);
}

double NNfunction_sg_uR::synapse0x3836a40() {
   return (neuron0x3818410()*-0.00649675);
}

double NNfunction_sg_uR::synapse0x3836a80() {
   return (neuron0x3818750()*-0.160988);
}

double NNfunction_sg_uR::synapse0x3836ac0() {
   return (neuron0x3818a90()*0.0121809);
}

double NNfunction_sg_uR::synapse0x3836550() {
   return (neuron0x3818dd0()*-0.00642756);
}

double NNfunction_sg_uR::synapse0x3836590() {
   return (neuron0x3819330()*-0.0140066);
}

double NNfunction_sg_uR::synapse0x3836c10() {
   return (neuron0x3819550()*0.00223636);
}

double NNfunction_sg_uR::synapse0x3836c50() {
   return (neuron0x3819890()*0.00169778);
}

double NNfunction_sg_uR::synapse0x3836c90() {
   return (neuron0x3819bd0()*0.00599615);
}

double NNfunction_sg_uR::synapse0x3836cd0() {
   return (neuron0x3819f10()*-0.00216735);
}

double NNfunction_sg_uR::synapse0x3836d10() {
   return (neuron0x381a250()*0.00273421);
}

double NNfunction_sg_uR::synapse0x3836d50() {
   return (neuron0x381a590()*-0.000874403);
}

double NNfunction_sg_uR::synapse0x38370d0() {
   return (neuron0x3815a60()*-0.0323767);
}

double NNfunction_sg_uR::synapse0x3837110() {
   return (neuron0x3815d10()*-0.256825);
}

double NNfunction_sg_uR::synapse0x3837150() {
   return (neuron0x3816050()*0.143408);
}

double NNfunction_sg_uR::synapse0x3837190() {
   return (neuron0x3816390()*0.257532);
}

double NNfunction_sg_uR::synapse0x38371d0() {
   return (neuron0x38166d0()*-0.00621674);
}

double NNfunction_sg_uR::synapse0x3837210() {
   return (neuron0x3816a10()*-0.0327283);
}

double NNfunction_sg_uR::synapse0x3837250() {
   return (neuron0x3816d50()*0.0161905);
}

double NNfunction_sg_uR::synapse0x3837290() {
   return (neuron0x3817090()*0.055306);
}

double NNfunction_sg_uR::synapse0x38372d0() {
   return (neuron0x38173d0()*0.326778);
}

double NNfunction_sg_uR::synapse0x3837310() {
   return (neuron0x3817710()*-0.765605);
}

double NNfunction_sg_uR::synapse0x3837350() {
   return (neuron0x3817a50()*-0.510377);
}

double NNfunction_sg_uR::synapse0x3837390() {
   return (neuron0x3817d90()*-0.180059);
}

double NNfunction_sg_uR::synapse0x38373d0() {
   return (neuron0x38180d0()*-0.287799);
}

double NNfunction_sg_uR::synapse0x3837410() {
   return (neuron0x3818410()*-0.0532789);
}

double NNfunction_sg_uR::synapse0x3837450() {
   return (neuron0x3818750()*0.62633);
}

double NNfunction_sg_uR::synapse0x3837490() {
   return (neuron0x3818a90()*-0.0111383);
}

double NNfunction_sg_uR::synapse0x3836f20() {
   return (neuron0x3818dd0()*0.0242708);
}

double NNfunction_sg_uR::synapse0x3836f60() {
   return (neuron0x3819330()*-0.380265);
}

double NNfunction_sg_uR::synapse0x38375e0() {
   return (neuron0x3819550()*0.204681);
}

double NNfunction_sg_uR::synapse0x3837620() {
   return (neuron0x3819890()*0.0129713);
}

double NNfunction_sg_uR::synapse0x3837660() {
   return (neuron0x3819bd0()*0.144871);
}

double NNfunction_sg_uR::synapse0x38376a0() {
   return (neuron0x3819f10()*-0.0913658);
}

double NNfunction_sg_uR::synapse0x38376e0() {
   return (neuron0x381a250()*0.119199);
}

double NNfunction_sg_uR::synapse0x3837720() {
   return (neuron0x381a590()*0.0300657);
}

double NNfunction_sg_uR::synapse0x3837aa0() {
   return (neuron0x3815a60()*0.433576);
}

double NNfunction_sg_uR::synapse0x3837ae0() {
   return (neuron0x3815d10()*0.0766875);
}

double NNfunction_sg_uR::synapse0x3837b20() {
   return (neuron0x3816050()*0.127695);
}

double NNfunction_sg_uR::synapse0x3837b60() {
   return (neuron0x3816390()*0.373856);
}

double NNfunction_sg_uR::synapse0x3837ba0() {
   return (neuron0x38166d0()*0.597478);
}

double NNfunction_sg_uR::synapse0x3837be0() {
   return (neuron0x3816a10()*0.760146);
}

double NNfunction_sg_uR::synapse0x3837c20() {
   return (neuron0x3816d50()*-0.0216888);
}

double NNfunction_sg_uR::synapse0x3837c60() {
   return (neuron0x3817090()*0.322073);
}

double NNfunction_sg_uR::synapse0x3837ca0() {
   return (neuron0x38173d0()*0.381143);
}

double NNfunction_sg_uR::synapse0x3837ce0() {
   return (neuron0x3817710()*0.284034);
}

double NNfunction_sg_uR::synapse0x3837d20() {
   return (neuron0x3817a50()*0.50386);
}

double NNfunction_sg_uR::synapse0x3837d60() {
   return (neuron0x3817d90()*0.375088);
}

double NNfunction_sg_uR::synapse0x3837da0() {
   return (neuron0x38180d0()*0.403177);
}

double NNfunction_sg_uR::synapse0x3837de0() {
   return (neuron0x3818410()*0.627747);
}

double NNfunction_sg_uR::synapse0x3837e20() {
   return (neuron0x3818750()*1.64581);
}

double NNfunction_sg_uR::synapse0x3837e60() {
   return (neuron0x3818a90()*0.718673);
}

double NNfunction_sg_uR::synapse0x38378f0() {
   return (neuron0x3818dd0()*0.280424);
}

double NNfunction_sg_uR::synapse0x3837930() {
   return (neuron0x3819330()*0.397105);
}

double NNfunction_sg_uR::synapse0x3837fb0() {
   return (neuron0x3819550()*0.293487);
}

double NNfunction_sg_uR::synapse0x3837ff0() {
   return (neuron0x3819890()*0.0761295);
}

double NNfunction_sg_uR::synapse0x3838030() {
   return (neuron0x3819bd0()*-0.0104983);
}

double NNfunction_sg_uR::synapse0x3838070() {
   return (neuron0x3819f10()*-0.225685);
}

double NNfunction_sg_uR::synapse0x38380b0() {
   return (neuron0x381a250()*-0.130233);
}

double NNfunction_sg_uR::synapse0x38380f0() {
   return (neuron0x381a590()*0.117904);
}

double NNfunction_sg_uR::synapse0x3820ba0() {
   return (neuron0x3815a60()*-0.283197);
}

double NNfunction_sg_uR::synapse0x3820be0() {
   return (neuron0x3815d10()*0.248913);
}

double NNfunction_sg_uR::synapse0x3820c20() {
   return (neuron0x3816050()*-0.0584161);
}

double NNfunction_sg_uR::synapse0x3820c60() {
   return (neuron0x3816390()*0.584382);
}

double NNfunction_sg_uR::synapse0x3820ca0() {
   return (neuron0x38166d0()*0.0263034);
}

double NNfunction_sg_uR::synapse0x3820ce0() {
   return (neuron0x3816a10()*-0.255528);
}

double NNfunction_sg_uR::synapse0x3820d20() {
   return (neuron0x3816d50()*0.70717);
}

double NNfunction_sg_uR::synapse0x3820d60() {
   return (neuron0x3817090()*0.524325);
}

double NNfunction_sg_uR::synapse0x3838880() {
   return (neuron0x38173d0()*0.405319);
}

double NNfunction_sg_uR::synapse0x38388c0() {
   return (neuron0x3817710()*0.386025);
}

double NNfunction_sg_uR::synapse0x3838900() {
   return (neuron0x3817a50()*0.42832);
}

double NNfunction_sg_uR::synapse0x3838940() {
   return (neuron0x3817d90()*0.256909);
}

double NNfunction_sg_uR::synapse0x3838980() {
   return (neuron0x38180d0()*0.488404);
}

double NNfunction_sg_uR::synapse0x38389c0() {
   return (neuron0x3818410()*0.437871);
}

double NNfunction_sg_uR::synapse0x3838a00() {
   return (neuron0x3818750()*0.844889);
}

double NNfunction_sg_uR::synapse0x3838a40() {
   return (neuron0x3818a90()*0.174091);
}

double NNfunction_sg_uR::synapse0x38382c0() {
   return (neuron0x3818dd0()*0.716607);
}

double NNfunction_sg_uR::synapse0x3838300() {
   return (neuron0x3819330()*0.430123);
}

double NNfunction_sg_uR::synapse0x3838b90() {
   return (neuron0x3819550()*0.455121);
}

double NNfunction_sg_uR::synapse0x3838bd0() {
   return (neuron0x3819890()*0.411632);
}

double NNfunction_sg_uR::synapse0x3838c10() {
   return (neuron0x3819bd0()*-0.282504);
}

double NNfunction_sg_uR::synapse0x3838c50() {
   return (neuron0x3819f10()*-0.434964);
}

double NNfunction_sg_uR::synapse0x3838c90() {
   return (neuron0x381a250()*-0.299393);
}

double NNfunction_sg_uR::synapse0x3838cd0() {
   return (neuron0x381a590()*0.451216);
}

double NNfunction_sg_uR::synapse0x3839050() {
   return (neuron0x3815a60()*-0.0381419);
}

double NNfunction_sg_uR::synapse0x3839090() {
   return (neuron0x3815d10()*0.264396);
}

double NNfunction_sg_uR::synapse0x38390d0() {
   return (neuron0x3816050()*0.0423888);
}

double NNfunction_sg_uR::synapse0x3839110() {
   return (neuron0x3816390()*-0.0163543);
}

double NNfunction_sg_uR::synapse0x3839150() {
   return (neuron0x38166d0()*0.0409147);
}

double NNfunction_sg_uR::synapse0x3839190() {
   return (neuron0x3816a10()*0.0529342);
}

double NNfunction_sg_uR::synapse0x38391d0() {
   return (neuron0x3816d50()*-0.027255);
}

double NNfunction_sg_uR::synapse0x3839210() {
   return (neuron0x3817090()*-0.0177363);
}

double NNfunction_sg_uR::synapse0x3839250() {
   return (neuron0x38173d0()*-0.0502081);
}

double NNfunction_sg_uR::synapse0x3839290() {
   return (neuron0x3817710()*-0.0125065);
}

double NNfunction_sg_uR::synapse0x38392d0() {
   return (neuron0x3817a50()*-0.0678284);
}

double NNfunction_sg_uR::synapse0x3839310() {
   return (neuron0x3817d90()*-0.262761);
}

double NNfunction_sg_uR::synapse0x3839350() {
   return (neuron0x38180d0()*0.821582);
}

double NNfunction_sg_uR::synapse0x3839390() {
   return (neuron0x3818410()*-0.0944094);
}

double NNfunction_sg_uR::synapse0x38393d0() {
   return (neuron0x3818750()*-0.40197);
}

double NNfunction_sg_uR::synapse0x3839410() {
   return (neuron0x3818a90()*0.119744);
}

double NNfunction_sg_uR::synapse0x3838ea0() {
   return (neuron0x3818dd0()*-0.00622844);
}

double NNfunction_sg_uR::synapse0x3838ee0() {
   return (neuron0x3819330()*0.295763);
}

double NNfunction_sg_uR::synapse0x3839560() {
   return (neuron0x3819550()*0.363228);
}

double NNfunction_sg_uR::synapse0x38395a0() {
   return (neuron0x3819890()*0.0303503);
}

double NNfunction_sg_uR::synapse0x38395e0() {
   return (neuron0x3819bd0()*0.0683279);
}

double NNfunction_sg_uR::synapse0x3839620() {
   return (neuron0x3819f10()*0.033327);
}

double NNfunction_sg_uR::synapse0x3839660() {
   return (neuron0x381a250()*0.0253579);
}

double NNfunction_sg_uR::synapse0x38396a0() {
   return (neuron0x381a590()*-0.011384);
}

double NNfunction_sg_uR::synapse0x3839a20() {
   return (neuron0x3815a60()*-0.00238833);
}

double NNfunction_sg_uR::synapse0x3839a60() {
   return (neuron0x3815d10()*-0.0146849);
}

double NNfunction_sg_uR::synapse0x3839aa0() {
   return (neuron0x3816050()*0.00188651);
}

double NNfunction_sg_uR::synapse0x3839ae0() {
   return (neuron0x3816390()*11.8145);
}

double NNfunction_sg_uR::synapse0x3839b20() {
   return (neuron0x38166d0()*-0.00208225);
}

double NNfunction_sg_uR::synapse0x3839b60() {
   return (neuron0x3816a10()*-0.00270584);
}

double NNfunction_sg_uR::synapse0x3839ba0() {
   return (neuron0x3816d50()*-0.00516063);
}

double NNfunction_sg_uR::synapse0x3839be0() {
   return (neuron0x3817090()*-0.00194151);
}

double NNfunction_sg_uR::synapse0x3839c20() {
   return (neuron0x38173d0()*0.00422532);
}

double NNfunction_sg_uR::synapse0x3839c60() {
   return (neuron0x3817710()*0.00786625);
}

double NNfunction_sg_uR::synapse0x3839ca0() {
   return (neuron0x3817a50()*0.00935644);
}

double NNfunction_sg_uR::synapse0x3839ce0() {
   return (neuron0x3817d90()*-0.00901712);
}

double NNfunction_sg_uR::synapse0x3839d20() {
   return (neuron0x38180d0()*0.00414098);
}

double NNfunction_sg_uR::synapse0x3839d60() {
   return (neuron0x3818410()*-0.00904882);
}

double NNfunction_sg_uR::synapse0x3839da0() {
   return (neuron0x3818750()*-0.029581);
}

double NNfunction_sg_uR::synapse0x3839de0() {
   return (neuron0x3818a90()*-0.0280953);
}

double NNfunction_sg_uR::synapse0x3839870() {
   return (neuron0x3818dd0()*0.00265336);
}

double NNfunction_sg_uR::synapse0x38398b0() {
   return (neuron0x3819330()*0.00555387);
}

double NNfunction_sg_uR::synapse0x382a3e0() {
   return (neuron0x3819550()*0.00564279);
}

double NNfunction_sg_uR::synapse0x382a420() {
   return (neuron0x3819890()*0.00848727);
}

double NNfunction_sg_uR::synapse0x382a460() {
   return (neuron0x3819bd0()*-0.00413861);
}

double NNfunction_sg_uR::synapse0x382a4a0() {
   return (neuron0x3819f10()*-0.00136302);
}

double NNfunction_sg_uR::synapse0x382a4e0() {
   return (neuron0x381a250()*0.00318682);
}

double NNfunction_sg_uR::synapse0x382a520() {
   return (neuron0x381a590()*0.00340668);
}

double NNfunction_sg_uR::synapse0x382a8a0() {
   return (neuron0x3815a60()*-0.395767);
}

double NNfunction_sg_uR::synapse0x382a8e0() {
   return (neuron0x3815d10()*-0.789605);
}

double NNfunction_sg_uR::synapse0x382a920() {
   return (neuron0x3816050()*-0.23848);
}

double NNfunction_sg_uR::synapse0x382a960() {
   return (neuron0x3816390()*-0.301375);
}

double NNfunction_sg_uR::synapse0x382a9a0() {
   return (neuron0x38166d0()*-0.361682);
}

double NNfunction_sg_uR::synapse0x382a9e0() {
   return (neuron0x3816a10()*-0.0192845);
}

double NNfunction_sg_uR::synapse0x382aa20() {
   return (neuron0x3816d50()*-0.395145);
}

double NNfunction_sg_uR::synapse0x382aa60() {
   return (neuron0x3817090()*-0.108137);
}

double NNfunction_sg_uR::synapse0x382aaa0() {
   return (neuron0x38173d0()*0.0195363);
}

double NNfunction_sg_uR::synapse0x382aae0() {
   return (neuron0x3817710()*-0.676925);
}

double NNfunction_sg_uR::synapse0x382ab20() {
   return (neuron0x3817a50()*-0.119317);
}

double NNfunction_sg_uR::synapse0x382ab60() {
   return (neuron0x3817d90()*-0.514155);
}

double NNfunction_sg_uR::synapse0x382aba0() {
   return (neuron0x38180d0()*-0.593602);
}

double NNfunction_sg_uR::synapse0x382abe0() {
   return (neuron0x3818410()*-1.02893);
}

double NNfunction_sg_uR::synapse0x382ac20() {
   return (neuron0x3818750()*-0.574502);
}

double NNfunction_sg_uR::synapse0x382ac60() {
   return (neuron0x3818a90()*-0.201674);
}

double NNfunction_sg_uR::synapse0x382a6f0() {
   return (neuron0x3818dd0()*-0.35121);
}

double NNfunction_sg_uR::synapse0x382a730() {
   return (neuron0x3819330()*-0.194364);
}

double NNfunction_sg_uR::synapse0x382adb0() {
   return (neuron0x3819550()*-0.493014);
}

double NNfunction_sg_uR::synapse0x382adf0() {
   return (neuron0x3819890()*-0.198418);
}

double NNfunction_sg_uR::synapse0x382ae30() {
   return (neuron0x3819bd0()*0.304953);
}

double NNfunction_sg_uR::synapse0x382ae70() {
   return (neuron0x3819f10()*0.695544);
}

double NNfunction_sg_uR::synapse0x382aeb0() {
   return (neuron0x381a250()*-0.334028);
}

double NNfunction_sg_uR::synapse0x382aef0() {
   return (neuron0x381a590()*-0.298076);
}

double NNfunction_sg_uR::synapse0x382b270() {
   return (neuron0x3815a60()*-0.193119);
}

double NNfunction_sg_uR::synapse0x382b2b0() {
   return (neuron0x3815d10()*0.383196);
}

double NNfunction_sg_uR::synapse0x382b2f0() {
   return (neuron0x3816050()*-0.123105);
}

double NNfunction_sg_uR::synapse0x382b330() {
   return (neuron0x3816390()*0.085296);
}

double NNfunction_sg_uR::synapse0x382b370() {
   return (neuron0x38166d0()*-0.154302);
}

double NNfunction_sg_uR::synapse0x382b3b0() {
   return (neuron0x3816a10()*0.0437697);
}

double NNfunction_sg_uR::synapse0x382b3f0() {
   return (neuron0x3816d50()*0.455706);
}

double NNfunction_sg_uR::synapse0x382b430() {
   return (neuron0x3817090()*0.395888);
}

double NNfunction_sg_uR::synapse0x382b470() {
   return (neuron0x38173d0()*0.235556);
}

double NNfunction_sg_uR::synapse0x382b4b0() {
   return (neuron0x3817710()*0.483147);
}

double NNfunction_sg_uR::synapse0x382b4f0() {
   return (neuron0x3817a50()*-0.332509);
}

double NNfunction_sg_uR::synapse0x382b530() {
   return (neuron0x3817d90()*0.834922);
}

double NNfunction_sg_uR::synapse0x382b570() {
   return (neuron0x38180d0()*0.291911);
}

double NNfunction_sg_uR::synapse0x382b5b0() {
   return (neuron0x3818410()*0.156493);
}

double NNfunction_sg_uR::synapse0x382b5f0() {
   return (neuron0x3818750()*0.81095);
}

double NNfunction_sg_uR::synapse0x382b630() {
   return (neuron0x3818a90()*0.366915);
}

double NNfunction_sg_uR::synapse0x382b0c0() {
   return (neuron0x3818dd0()*0.237577);
}

double NNfunction_sg_uR::synapse0x382b100() {
   return (neuron0x3819330()*0.242644);
}

double NNfunction_sg_uR::synapse0x382b780() {
   return (neuron0x3819550()*0.282777);
}

double NNfunction_sg_uR::synapse0x382b7c0() {
   return (neuron0x3819890()*0.832612);
}

double NNfunction_sg_uR::synapse0x382b800() {
   return (neuron0x3819bd0()*-0.542759);
}

double NNfunction_sg_uR::synapse0x382b840() {
   return (neuron0x3819f10()*-0.381852);
}

double NNfunction_sg_uR::synapse0x382b880() {
   return (neuron0x381a250()*0.124083);
}

double NNfunction_sg_uR::synapse0x382b8c0() {
   return (neuron0x381a590()*-0.0137165);
}

double NNfunction_sg_uR::synapse0x382bc40() {
   return (neuron0x3815a60()*0.196744);
}

double NNfunction_sg_uR::synapse0x382bc80() {
   return (neuron0x3815d10()*0.10987);
}

double NNfunction_sg_uR::synapse0x382bcc0() {
   return (neuron0x3816050()*-0.152208);
}

double NNfunction_sg_uR::synapse0x382bd00() {
   return (neuron0x3816390()*0.563368);
}

double NNfunction_sg_uR::synapse0x382bd40() {
   return (neuron0x38166d0()*0.0618438);
}

double NNfunction_sg_uR::synapse0x382bd80() {
   return (neuron0x3816a10()*0.331295);
}

double NNfunction_sg_uR::synapse0x382bdc0() {
   return (neuron0x3816d50()*0.215068);
}

double NNfunction_sg_uR::synapse0x382be00() {
   return (neuron0x3817090()*0.821583);
}

double NNfunction_sg_uR::synapse0x382be40() {
   return (neuron0x38173d0()*0.355037);
}

double NNfunction_sg_uR::synapse0x382be80() {
   return (neuron0x3817710()*0.173185);
}

double NNfunction_sg_uR::synapse0x382bec0() {
   return (neuron0x3817a50()*-0.0455322);
}

double NNfunction_sg_uR::synapse0x382bf00() {
   return (neuron0x3817d90()*0.27459);
}

double NNfunction_sg_uR::synapse0x382bf40() {
   return (neuron0x38180d0()*0.0958685);
}

double NNfunction_sg_uR::synapse0x382bf80() {
   return (neuron0x3818410()*0.591526);
}

double NNfunction_sg_uR::synapse0x382bfc0() {
   return (neuron0x3818750()*0.379209);
}

double NNfunction_sg_uR::synapse0x382c000() {
   return (neuron0x3818a90()*-0.226231);
}

double NNfunction_sg_uR::synapse0x382ba90() {
   return (neuron0x3818dd0()*0.419532);
}

double NNfunction_sg_uR::synapse0x382bad0() {
   return (neuron0x3819330()*0.515241);
}

double NNfunction_sg_uR::synapse0x382c150() {
   return (neuron0x3819550()*0.177043);
}

double NNfunction_sg_uR::synapse0x382c190() {
   return (neuron0x3819890()*0.27679);
}

double NNfunction_sg_uR::synapse0x382c1d0() {
   return (neuron0x3819bd0()*-0.594532);
}

double NNfunction_sg_uR::synapse0x382c210() {
   return (neuron0x3819f10()*-0.134739);
}

double NNfunction_sg_uR::synapse0x382c250() {
   return (neuron0x381a250()*0.148185);
}

double NNfunction_sg_uR::synapse0x382c290() {
   return (neuron0x381a590()*0.0303573);
}

double NNfunction_sg_uR::synapse0x383e160() {
   return (neuron0x3815a60()*0.0451244);
}

double NNfunction_sg_uR::synapse0x383e1a0() {
   return (neuron0x3815d10()*0.204483);
}

double NNfunction_sg_uR::synapse0x383e1e0() {
   return (neuron0x3816050()*-0.191851);
}

double NNfunction_sg_uR::synapse0x383e220() {
   return (neuron0x3816390()*0.482056);
}

double NNfunction_sg_uR::synapse0x383e260() {
   return (neuron0x38166d0()*0.0500476);
}

double NNfunction_sg_uR::synapse0x383e2a0() {
   return (neuron0x3816a10()*0.426413);
}

double NNfunction_sg_uR::synapse0x383e2e0() {
   return (neuron0x3816d50()*0.124017);
}

double NNfunction_sg_uR::synapse0x383e320() {
   return (neuron0x3817090()*0.50198);
}

double NNfunction_sg_uR::synapse0x383e360() {
   return (neuron0x38173d0()*0.368929);
}

double NNfunction_sg_uR::synapse0x383e3a0() {
   return (neuron0x3817710()*-0.0841974);
}

double NNfunction_sg_uR::synapse0x383e3e0() {
   return (neuron0x3817a50()*0.42223);
}

double NNfunction_sg_uR::synapse0x383e420() {
   return (neuron0x3817d90()*0.85039);
}

double NNfunction_sg_uR::synapse0x383e460() {
   return (neuron0x38180d0()*0.775454);
}

double NNfunction_sg_uR::synapse0x383e4a0() {
   return (neuron0x3818410()*1.0329);
}

double NNfunction_sg_uR::synapse0x383e4e0() {
   return (neuron0x3818750()*0.756714);
}

double NNfunction_sg_uR::synapse0x383e520() {
   return (neuron0x3818a90()*0.215212);
}

double NNfunction_sg_uR::synapse0x382c2d0() {
   return (neuron0x3818dd0()*0.609409);
}

double NNfunction_sg_uR::synapse0x382c310() {
   return (neuron0x3819330()*0.321883);
}

double NNfunction_sg_uR::synapse0x383e670() {
   return (neuron0x3819550()*0.819477);
}

double NNfunction_sg_uR::synapse0x383e6b0() {
   return (neuron0x3819890()*0.565116);
}

double NNfunction_sg_uR::synapse0x383e6f0() {
   return (neuron0x3819bd0()*-0.925421);
}

double NNfunction_sg_uR::synapse0x383e730() {
   return (neuron0x3819f10()*-0.152668);
}

double NNfunction_sg_uR::synapse0x383e770() {
   return (neuron0x381a250()*-0.013797);
}

double NNfunction_sg_uR::synapse0x383e7b0() {
   return (neuron0x381a590()*0.370727);
}

double NNfunction_sg_uR::synapse0x383eb30() {
   return (neuron0x3815a60()*-0.0149383);
}

double NNfunction_sg_uR::synapse0x383eb70() {
   return (neuron0x3815d10()*-0.0365175);
}

double NNfunction_sg_uR::synapse0x383ebb0() {
   return (neuron0x3816050()*0.00513002);
}

double NNfunction_sg_uR::synapse0x383ebf0() {
   return (neuron0x3816390()*-1.97633);
}

double NNfunction_sg_uR::synapse0x383ec30() {
   return (neuron0x38166d0()*0.0134383);
}

double NNfunction_sg_uR::synapse0x383ec70() {
   return (neuron0x3816a10()*-0.00480221);
}

double NNfunction_sg_uR::synapse0x383ecb0() {
   return (neuron0x3816d50()*0.0204603);
}

double NNfunction_sg_uR::synapse0x383ecf0() {
   return (neuron0x3817090()*-0.0584385);
}

double NNfunction_sg_uR::synapse0x383ed30() {
   return (neuron0x38173d0()*-0.00407401);
}

double NNfunction_sg_uR::synapse0x383ed70() {
   return (neuron0x3817710()*0.0069339);
}

double NNfunction_sg_uR::synapse0x383edb0() {
   return (neuron0x3817a50()*-0.00188967);
}

double NNfunction_sg_uR::synapse0x383edf0() {
   return (neuron0x3817d90()*0.0159859);
}

double NNfunction_sg_uR::synapse0x383ee30() {
   return (neuron0x38180d0()*0.043359);
}

double NNfunction_sg_uR::synapse0x383ee70() {
   return (neuron0x3818410()*-0.00106106);
}

double NNfunction_sg_uR::synapse0x383eeb0() {
   return (neuron0x3818750()*0.0318366);
}

double NNfunction_sg_uR::synapse0x383eef0() {
   return (neuron0x3818a90()*-0.0105644);
}

double NNfunction_sg_uR::synapse0x383e980() {
   return (neuron0x3818dd0()*0.0141954);
}

double NNfunction_sg_uR::synapse0x383e9c0() {
   return (neuron0x3819330()*0.0433736);
}

double NNfunction_sg_uR::synapse0x383f040() {
   return (neuron0x3819550()*0.0181219);
}

double NNfunction_sg_uR::synapse0x383f080() {
   return (neuron0x3819890()*-2.13852e-05);
}

double NNfunction_sg_uR::synapse0x383f0c0() {
   return (neuron0x3819bd0()*-0.00339677);
}

double NNfunction_sg_uR::synapse0x383f100() {
   return (neuron0x3819f10()*-0.00738462);
}

double NNfunction_sg_uR::synapse0x383f140() {
   return (neuron0x381a250()*0.00380882);
}

double NNfunction_sg_uR::synapse0x383f180() {
   return (neuron0x381a590()*0.00797654);
}

double NNfunction_sg_uR::synapse0x383f500() {
   return (neuron0x3815a60()*-0.185493);
}

double NNfunction_sg_uR::synapse0x383f540() {
   return (neuron0x3815d10()*-0.217803);
}

double NNfunction_sg_uR::synapse0x383f580() {
   return (neuron0x3816050()*0.74205);
}

double NNfunction_sg_uR::synapse0x383f5c0() {
   return (neuron0x3816390()*-1.13287);
}

double NNfunction_sg_uR::synapse0x383f600() {
   return (neuron0x38166d0()*-0.163097);
}

double NNfunction_sg_uR::synapse0x383f640() {
   return (neuron0x3816a10()*-0.850488);
}

double NNfunction_sg_uR::synapse0x383f680() {
   return (neuron0x3816d50()*-0.897842);
}

double NNfunction_sg_uR::synapse0x383f6c0() {
   return (neuron0x3817090()*-0.0796421);
}

double NNfunction_sg_uR::synapse0x383f700() {
   return (neuron0x38173d0()*-0.62941);
}

double NNfunction_sg_uR::synapse0x383f740() {
   return (neuron0x3817710()*-0.512505);
}

double NNfunction_sg_uR::synapse0x383f780() {
   return (neuron0x3817a50()*-0.425434);
}

double NNfunction_sg_uR::synapse0x383f7c0() {
   return (neuron0x3817d90()*-0.251579);
}

double NNfunction_sg_uR::synapse0x383f800() {
   return (neuron0x38180d0()*-0.420358);
}

double NNfunction_sg_uR::synapse0x383f840() {
   return (neuron0x3818410()*-0.387395);
}

double NNfunction_sg_uR::synapse0x383f880() {
   return (neuron0x3818750()*-1.7749);
}

double NNfunction_sg_uR::synapse0x383f8c0() {
   return (neuron0x3818a90()*-0.509239);
}

double NNfunction_sg_uR::synapse0x383f350() {
   return (neuron0x3818dd0()*-0.0277588);
}

double NNfunction_sg_uR::synapse0x383f390() {
   return (neuron0x3819330()*-0.463815);
}

double NNfunction_sg_uR::synapse0x383fa10() {
   return (neuron0x3819550()*-0.628449);
}

double NNfunction_sg_uR::synapse0x383fa50() {
   return (neuron0x3819890()*-0.566441);
}

double NNfunction_sg_uR::synapse0x383fa90() {
   return (neuron0x3819bd0()*0.451056);
}

double NNfunction_sg_uR::synapse0x383fad0() {
   return (neuron0x3819f10()*0.415877);
}

double NNfunction_sg_uR::synapse0x383fb10() {
   return (neuron0x381a250()*0.274675);
}

double NNfunction_sg_uR::synapse0x383fb50() {
   return (neuron0x381a590()*-0.178962);
}

double NNfunction_sg_uR::synapse0x383fed0() {
   return (neuron0x3815a60()*0.0851593);
}

double NNfunction_sg_uR::synapse0x383ff10() {
   return (neuron0x3815d10()*-0.123691);
}

double NNfunction_sg_uR::synapse0x383ff50() {
   return (neuron0x3816050()*-0.181691);
}

double NNfunction_sg_uR::synapse0x383ff90() {
   return (neuron0x3816390()*-0.0621079);
}

double NNfunction_sg_uR::synapse0x383ffd0() {
   return (neuron0x38166d0()*0.161133);
}

double NNfunction_sg_uR::synapse0x3840010() {
   return (neuron0x3816a10()*0.195086);
}

double NNfunction_sg_uR::synapse0x3840050() {
   return (neuron0x3816d50()*0.389437);
}

double NNfunction_sg_uR::synapse0x3840090() {
   return (neuron0x3817090()*-0.0815425);
}

double NNfunction_sg_uR::synapse0x38400d0() {
   return (neuron0x38173d0()*0.490488);
}

double NNfunction_sg_uR::synapse0x3840110() {
   return (neuron0x3817710()*0.487212);
}

double NNfunction_sg_uR::synapse0x3840150() {
   return (neuron0x3817a50()*0.0678298);
}

double NNfunction_sg_uR::synapse0x3840190() {
   return (neuron0x3817d90()*-0.281272);
}

double NNfunction_sg_uR::synapse0x38401d0() {
   return (neuron0x38180d0()*-0.0493341);
}

double NNfunction_sg_uR::synapse0x3840210() {
   return (neuron0x3818410()*0.471994);
}

double NNfunction_sg_uR::synapse0x3840250() {
   return (neuron0x3818750()*0.666476);
}

double NNfunction_sg_uR::synapse0x3840290() {
   return (neuron0x3818a90()*0.205901);
}

double NNfunction_sg_uR::synapse0x383fd20() {
   return (neuron0x3818dd0()*0.443424);
}

double NNfunction_sg_uR::synapse0x383fd60() {
   return (neuron0x3819330()*0.736493);
}

double NNfunction_sg_uR::synapse0x38403e0() {
   return (neuron0x3819550()*0.528437);
}

double NNfunction_sg_uR::synapse0x3840420() {
   return (neuron0x3819890()*0.0770125);
}

double NNfunction_sg_uR::synapse0x3840460() {
   return (neuron0x3819bd0()*-0.232872);
}

double NNfunction_sg_uR::synapse0x38404a0() {
   return (neuron0x3819f10()*-0.253351);
}

double NNfunction_sg_uR::synapse0x38404e0() {
   return (neuron0x381a250()*0.0415091);
}

double NNfunction_sg_uR::synapse0x3840520() {
   return (neuron0x381a590()*0.0228035);
}

double NNfunction_sg_uR::synapse0x35e0300() {
   return (neuron0x381aa00()*0.0705312);
}

double NNfunction_sg_uR::synapse0x35e0340() {
   return (neuron0x381b350()*-0.713696);
}

double NNfunction_sg_uR::synapse0x381cec0() {
   return (neuron0x381be30()*-0.562277);
}

double NNfunction_sg_uR::synapse0x381cf00() {
   return (neuron0x381b8d0()*0.677198);
}

double NNfunction_sg_uR::synapse0x381e9a0() {
   return (neuron0x381cc10()*2.29718);
}

double NNfunction_sg_uR::synapse0x381e9e0() {
   return (neuron0x381e6f0()*-3.17266);
}

double NNfunction_sg_uR::synapse0x381f770() {
   return (neuron0x381f4c0()*-0.106114);
}

double NNfunction_sg_uR::synapse0x381f7b0() {
   return (neuron0x381fe90()*-0.728005);
}

double NNfunction_sg_uR::synapse0x3820140() {
   return (neuron0x3820860()*-1.91595);
}

double NNfunction_sg_uR::synapse0x3820180() {
   return (neuron0x3821340()*-2.15453);
}

double NNfunction_sg_uR::synapse0x3820b10() {
   return (neuron0x3821d10()*-2.73565);
}

double NNfunction_sg_uR::synapse0x3820b50() {
   return (neuron0x381edf0()*2.54066);
}

double NNfunction_sg_uR::synapse0x38215f0() {
   return (neuron0x38238c0()*0.01455);
}

double NNfunction_sg_uR::synapse0x3821630() {
   return (neuron0x3824290()*-1.46436);
}

double NNfunction_sg_uR::synapse0x3821fc0() {
   return (neuron0x3824c60()*-0.68576);
}

double NNfunction_sg_uR::synapse0x3822000() {
   return (neuron0x3825630()*2.88794);
}

double NNfunction_sg_uR::synapse0x381f0a0() {
   return (neuron0x3827440()*0.0321493);
}

double NNfunction_sg_uR::synapse0x381f0e0() {
   return (neuron0x3827720()*-1.88624);
}

double NNfunction_sg_uR::synapse0x3823b70() {
   return (neuron0x38280f0()*-2.51861);
}

double NNfunction_sg_uR::synapse0x3823bb0() {
   return (neuron0x3828ac0()*-2.2789);
}

double NNfunction_sg_uR::synapse0x3824540() {
   return (neuron0x3829490()*2.31325);
}

double NNfunction_sg_uR::synapse0x3824580() {
   return (neuron0x3829e60()*-3.2803);
}

double NNfunction_sg_uR::synapse0x3824f10() {
   return (neuron0x38229b0()*-0.535212);
}

double NNfunction_sg_uR::synapse0x3824f50() {
   return (neuron0x3823380()*2.51596);
}

double NNfunction_sg_uR::synapse0x38258e0() {
   return (neuron0x382cbf0()*-0.180226);
}

double NNfunction_sg_uR::synapse0x3825920() {
   return (neuron0x382d5c0()*0.0647088);
}

double NNfunction_sg_uR::synapse0x3818970() {
   return (neuron0x382df90()*-3.57417);
}

double NNfunction_sg_uR::synapse0x38189b0() {
   return (neuron0x382e960()*-1.60639);
}

double NNfunction_sg_uR::synapse0x38279d0() {
   return (neuron0x382f330()*2.77845);
}

double NNfunction_sg_uR::synapse0x3827a10() {
   return (neuron0x382fd00()*-2.7582);
}

double NNfunction_sg_uR::synapse0x38283a0() {
   return (neuron0x38306d0()*-0.0283426);
}

double NNfunction_sg_uR::synapse0x38283e0() {
   return (neuron0x38310a0()*-0.864137);
}

double NNfunction_sg_uR::synapse0x3828d70() {
   return (neuron0x3827130()*-1.60317);
}

double NNfunction_sg_uR::synapse0x3828db0() {
   return (neuron0x3833c80()*-1.81066);
}

double NNfunction_sg_uR::synapse0x3829740() {
   return (neuron0x3834650()*-1.0383);
}

double NNfunction_sg_uR::synapse0x3829780() {
   return (neuron0x3835020()*-0.837394);
}

double NNfunction_sg_uR::synapse0x382a110() {
   return (neuron0x38359f0()*1.56119);
}

double NNfunction_sg_uR::synapse0x382a150() {
   return (neuron0x38363c0()*-0.942644);
}

double NNfunction_sg_uR::synapse0x3822c60() {
   return (neuron0x3836d90()*2.50158);
}

double NNfunction_sg_uR::synapse0x3822ca0() {
   return (neuron0x3837760()*0.509754);
}

double NNfunction_sg_uR::synapse0x382c510() {
   return (neuron0x3838130()*0.23205);
}

double NNfunction_sg_uR::synapse0x382c550() {
   return (neuron0x3838d10()*-0.366473);
}

double NNfunction_sg_uR::synapse0x382cea0() {
   return (neuron0x38396e0()*-0.192081);
}

double NNfunction_sg_uR::synapse0x382cee0() {
   return (neuron0x382a560()*1.65576);
}

double NNfunction_sg_uR::synapse0x382d870() {
   return (neuron0x382af30()*1.46788);
}

double NNfunction_sg_uR::synapse0x382d8b0() {
   return (neuron0x382b900()*-0.28547);
}

double NNfunction_sg_uR::synapse0x382e240() {
   return (neuron0x383df40()*0.490124);
}

double NNfunction_sg_uR::synapse0x382e280() {
   return (neuron0x383e7f0()*-2.01307);
}

double NNfunction_sg_uR::synapse0x382ec10() {
   return (neuron0x383f1c0()*0.0787333);
}

double NNfunction_sg_uR::synapse0x382ec50() {
   return (neuron0x383fb90()*0.699533);
}

double NNfunction_sg_uR::synapse0x3831350() {
   return (neuron0x381aa00()*-0.153274);
}

double NNfunction_sg_uR::synapse0x3831390() {
   return (neuron0x381b350()*-0.694239);
}

double NNfunction_sg_uR::synapse0x3826910() {
   return (neuron0x381be30()*0.105361);
}

double NNfunction_sg_uR::synapse0x3826950() {
   return (neuron0x381b8d0()*-0.358741);
}

double NNfunction_sg_uR::synapse0x3833f30() {
   return (neuron0x381cc10()*0.55704);
}

double NNfunction_sg_uR::synapse0x3833f70() {
   return (neuron0x381e6f0()*-1.28308);
}

double NNfunction_sg_uR::synapse0x3834900() {
   return (neuron0x381f4c0()*-0.48032);
}

double NNfunction_sg_uR::synapse0x3834940() {
   return (neuron0x381fe90()*-0.416575);
}

double NNfunction_sg_uR::synapse0x38352d0() {
   return (neuron0x3820860()*-0.350094);
}

double NNfunction_sg_uR::synapse0x3835310() {
   return (neuron0x3821340()*-1.05719);
}

double NNfunction_sg_uR::synapse0x3835ca0() {
   return (neuron0x3821d10()*-0.82617);
}

double NNfunction_sg_uR::synapse0x3835ce0() {
   return (neuron0x381edf0()*-0.0586525);
}

double NNfunction_sg_uR::synapse0x3836670() {
   return (neuron0x38238c0()*0.129903);
}

double NNfunction_sg_uR::synapse0x38366b0() {
   return (neuron0x3824290()*-0.667319);
}

double NNfunction_sg_uR::synapse0x3837040() {
   return (neuron0x3824c60()*-0.769139);
}

double NNfunction_sg_uR::synapse0x3837080() {
   return (neuron0x3825630()*0.440716);
}

double NNfunction_sg_uR::synapse0x3837a10() {
   return (neuron0x3827440()*-0.000201011);
}

double NNfunction_sg_uR::synapse0x3837a50() {
   return (neuron0x3827720()*-0.721725);
}

double NNfunction_sg_uR::synapse0x38383e0() {
   return (neuron0x38280f0()*-0.93408);
}

double NNfunction_sg_uR::synapse0x3838420() {
   return (neuron0x3828ac0()*-0.375925);
}

double NNfunction_sg_uR::synapse0x3838fc0() {
   return (neuron0x3829490()*0.841306);
}

double NNfunction_sg_uR::synapse0x3839000() {
   return (neuron0x3829e60()*-1.20468);
}

double NNfunction_sg_uR::synapse0x3839990() {
   return (neuron0x38229b0()*-0.268829);
}

double NNfunction_sg_uR::synapse0x38399d0() {
   return (neuron0x3823380()*0.0360422);
}

double NNfunction_sg_uR::synapse0x382a810() {
   return (neuron0x382cbf0()*-0.685598);
}

double NNfunction_sg_uR::synapse0x382a850() {
   return (neuron0x382d5c0()*-0.568722);
}

double NNfunction_sg_uR::synapse0x382b1e0() {
   return (neuron0x382df90()*-0.589166);
}

double NNfunction_sg_uR::synapse0x382b220() {
   return (neuron0x382e960()*-0.376969);
}

double NNfunction_sg_uR::synapse0x382bbb0() {
   return (neuron0x382f330()*0.105007);
}

double NNfunction_sg_uR::synapse0x382bbf0() {
   return (neuron0x382fd00()*-1.20473);
}

double NNfunction_sg_uR::synapse0x383e0d0() {
   return (neuron0x38306d0()*0.240335);
}

double NNfunction_sg_uR::synapse0x383e110() {
   return (neuron0x38310a0()*-0.0363942);
}

double NNfunction_sg_uR::synapse0x383eaa0() {
   return (neuron0x3827130()*-0.424637);
}

double NNfunction_sg_uR::synapse0x383eae0() {
   return (neuron0x3833c80()*-0.768452);
}

double NNfunction_sg_uR::synapse0x383f470() {
   return (neuron0x3834650()*-0.380913);
}

double NNfunction_sg_uR::synapse0x383f4b0() {
   return (neuron0x3835020()*-0.131264);
}

double NNfunction_sg_uR::synapse0x383fe40() {
   return (neuron0x38359f0()*0.605061);
}

double NNfunction_sg_uR::synapse0x383fe80() {
   return (neuron0x38363c0()*-0.640755);
}

double NNfunction_sg_uR::synapse0x381acb0() {
   return (neuron0x3836d90()*0.163123);
}

double NNfunction_sg_uR::synapse0x381acf0() {
   return (neuron0x3837760()*-0.490588);
}

double NNfunction_sg_uR::synapse0x382f5e0() {
   return (neuron0x3838130()*-0.547643);
}

double NNfunction_sg_uR::synapse0x382f620() {
   return (neuron0x3838d10()*-0.761543);
}

double NNfunction_sg_uR::synapse0x3840560() {
   return (neuron0x38396e0()*-0.233426);
}

double NNfunction_sg_uR::synapse0x38405a0() {
   return (neuron0x382a560()*0.46832);
}

double NNfunction_sg_uR::synapse0x38405e0() {
   return (neuron0x382af30()*-0.216933);
}

double NNfunction_sg_uR::synapse0x3840620() {
   return (neuron0x382b900()*-0.581253);
}

double NNfunction_sg_uR::synapse0x38474d0() {
   return (neuron0x383df40()*-0.462809);
}

double NNfunction_sg_uR::synapse0x3847510() {
   return (neuron0x383e7f0()*-1.09785);
}

double NNfunction_sg_uR::synapse0x3847550() {
   return (neuron0x383f1c0()*-0.293469);
}

double NNfunction_sg_uR::synapse0x3847590() {
   return (neuron0x383fb90()*-0.137567);
}

double NNfunction_sg_uR::synapse0x3847910() {
   return (neuron0x381aa00()*0.215995);
}

double NNfunction_sg_uR::synapse0x3847950() {
   return (neuron0x381b350()*0.0859289);
}

double NNfunction_sg_uR::synapse0x3847990() {
   return (neuron0x381be30()*0.119985);
}

double NNfunction_sg_uR::synapse0x38479d0() {
   return (neuron0x381b8d0()*-0.230759);
}

double NNfunction_sg_uR::synapse0x3847a10() {
   return (neuron0x381cc10()*0.218185);
}

double NNfunction_sg_uR::synapse0x3847a50() {
   return (neuron0x381e6f0()*-0.0995134);
}

double NNfunction_sg_uR::synapse0x3847a90() {
   return (neuron0x381f4c0()*0.056709);
}

double NNfunction_sg_uR::synapse0x3847ad0() {
   return (neuron0x381fe90()*0.0370613);
}

double NNfunction_sg_uR::synapse0x3847b10() {
   return (neuron0x3820860()*1.66718);
}

double NNfunction_sg_uR::synapse0x3847b50() {
   return (neuron0x3821340()*-3.30505);
}

double NNfunction_sg_uR::synapse0x3847b90() {
   return (neuron0x3821d10()*0.165859);
}

double NNfunction_sg_uR::synapse0x3847bd0() {
   return (neuron0x381edf0()*1.16496);
}

double NNfunction_sg_uR::synapse0x3847c10() {
   return (neuron0x38238c0()*-0.109423);
}

double NNfunction_sg_uR::synapse0x3847c50() {
   return (neuron0x3824290()*-0.280249);
}

double NNfunction_sg_uR::synapse0x3847c90() {
   return (neuron0x3824c60()*4.15133);
}

double NNfunction_sg_uR::synapse0x3847cd0() {
   return (neuron0x3825630()*0.908412);
}

double NNfunction_sg_uR::synapse0x3847760() {
   return (neuron0x3827440()*0.233106);
}

double NNfunction_sg_uR::synapse0x38477a0() {
   return (neuron0x3827720()*-0.0746937);
}

double NNfunction_sg_uR::synapse0x3847e20() {
   return (neuron0x38280f0()*0.900035);
}

double NNfunction_sg_uR::synapse0x3847e60() {
   return (neuron0x3828ac0()*0.0883955);
}

double NNfunction_sg_uR::synapse0x3847ea0() {
   return (neuron0x3829490()*0.389912);
}

double NNfunction_sg_uR::synapse0x3847ee0() {
   return (neuron0x3829e60()*-0.350323);
}

double NNfunction_sg_uR::synapse0x3847f20() {
   return (neuron0x38229b0()*-0.125444);
}

double NNfunction_sg_uR::synapse0x3847f60() {
   return (neuron0x3823380()*2.42961);
}

double NNfunction_sg_uR::synapse0x3847fa0() {
   return (neuron0x382cbf0()*0.626083);
}

double NNfunction_sg_uR::synapse0x3847fe0() {
   return (neuron0x382d5c0()*-0.691653);
}

double NNfunction_sg_uR::synapse0x3848020() {
   return (neuron0x382df90()*0.245379);
}

double NNfunction_sg_uR::synapse0x3848060() {
   return (neuron0x382e960()*-0.0194115);
}

double NNfunction_sg_uR::synapse0x38480a0() {
   return (neuron0x382f330()*0.525341);
}

double NNfunction_sg_uR::synapse0x38480e0() {
   return (neuron0x382fd00()*0.317447);
}

double NNfunction_sg_uR::synapse0x3848120() {
   return (neuron0x38306d0()*-0.11655);
}

double NNfunction_sg_uR::synapse0x3848160() {
   return (neuron0x38310a0()*0.77455);
}

double NNfunction_sg_uR::synapse0x3847d10() {
   return (neuron0x3827130()*0.726367);
}

double NNfunction_sg_uR::synapse0x3847d50() {
   return (neuron0x3833c80()*0.0353093);
}

double NNfunction_sg_uR::synapse0x3847d90() {
   return (neuron0x3834650()*0.00832978);
}

double NNfunction_sg_uR::synapse0x3847dd0() {
   return (neuron0x3835020()*-0.193132);
}

double NNfunction_sg_uR::synapse0x38483b0() {
   return (neuron0x38359f0()*0.33001);
}

double NNfunction_sg_uR::synapse0x38483f0() {
   return (neuron0x38363c0()*4.21294);
}

double NNfunction_sg_uR::synapse0x3848430() {
   return (neuron0x3836d90()*-0.189367);
}

double NNfunction_sg_uR::synapse0x3848470() {
   return (neuron0x3837760()*0.216587);
}

double NNfunction_sg_uR::synapse0x38484b0() {
   return (neuron0x3838130()*0.259);
}

double NNfunction_sg_uR::synapse0x38484f0() {
   return (neuron0x3838d10()*0.362713);
}

double NNfunction_sg_uR::synapse0x3848530() {
   return (neuron0x38396e0()*-4.71698);
}

double NNfunction_sg_uR::synapse0x3848570() {
   return (neuron0x382a560()*0.0855054);
}

double NNfunction_sg_uR::synapse0x38485b0() {
   return (neuron0x382af30()*-0.120316);
}

double NNfunction_sg_uR::synapse0x38485f0() {
   return (neuron0x382b900()*0.201776);
}

double NNfunction_sg_uR::synapse0x3848630() {
   return (neuron0x383df40()*0.019831);
}

double NNfunction_sg_uR::synapse0x3848670() {
   return (neuron0x383e7f0()*-4.74624);
}

double NNfunction_sg_uR::synapse0x38486b0() {
   return (neuron0x383f1c0()*-0.0938898);
}

double NNfunction_sg_uR::synapse0x38486f0() {
   return (neuron0x383fb90()*-0.0423846);
}

double NNfunction_sg_uR::synapse0x3848a70() {
   return (neuron0x381aa00()*-0.0146858);
}

double NNfunction_sg_uR::synapse0x3848ab0() {
   return (neuron0x381b350()*0.00330259);
}

double NNfunction_sg_uR::synapse0x3848af0() {
   return (neuron0x381be30()*-0.00734687);
}

double NNfunction_sg_uR::synapse0x3848b30() {
   return (neuron0x381b8d0()*0.0105478);
}

double NNfunction_sg_uR::synapse0x3848b70() {
   return (neuron0x381cc10()*-0.00727208);
}

double NNfunction_sg_uR::synapse0x3848bb0() {
   return (neuron0x381e6f0()*-1.50469);
}

double NNfunction_sg_uR::synapse0x3848bf0() {
   return (neuron0x381f4c0()*0.00676672);
}

double NNfunction_sg_uR::synapse0x3848c30() {
   return (neuron0x381fe90()*-0.00982166);
}

double NNfunction_sg_uR::synapse0x3848c70() {
   return (neuron0x3820860()*-1.29092);
}

double NNfunction_sg_uR::synapse0x3848cb0() {
   return (neuron0x3821340()*-0.0921675);
}

double NNfunction_sg_uR::synapse0x3848cf0() {
   return (neuron0x3821d10()*0.0778147);
}

double NNfunction_sg_uR::synapse0x3848d30() {
   return (neuron0x381edf0()*2.16286);
}

double NNfunction_sg_uR::synapse0x3848d70() {
   return (neuron0x38238c0()*0.0080154);
}

double NNfunction_sg_uR::synapse0x3848db0() {
   return (neuron0x3824290()*0.00706248);
}

double NNfunction_sg_uR::synapse0x3848df0() {
   return (neuron0x3824c60()*0.805057);
}

double NNfunction_sg_uR::synapse0x3848e30() {
   return (neuron0x3825630()*1.58846);
}

double NNfunction_sg_uR::synapse0x38488c0() {
   return (neuron0x3827440()*0.00672195);
}

double NNfunction_sg_uR::synapse0x3848900() {
   return (neuron0x3827720()*0.00294061);
}

double NNfunction_sg_uR::synapse0x3848f80() {
   return (neuron0x38280f0()*-0.321297);
}

double NNfunction_sg_uR::synapse0x3848fc0() {
   return (neuron0x3828ac0()*-0.00805942);
}

double NNfunction_sg_uR::synapse0x3849000() {
   return (neuron0x3829490()*0.0067121);
}

double NNfunction_sg_uR::synapse0x3849040() {
   return (neuron0x3829e60()*-0.105484);
}

double NNfunction_sg_uR::synapse0x3849080() {
   return (neuron0x38229b0()*0.0133336);
}

double NNfunction_sg_uR::synapse0x38490c0() {
   return (neuron0x3823380()*2.22352);
}

double NNfunction_sg_uR::synapse0x3849100() {
   return (neuron0x382cbf0()*0.0937102);
}

double NNfunction_sg_uR::synapse0x3849140() {
   return (neuron0x382d5c0()*-0.0419525);
}

double NNfunction_sg_uR::synapse0x3849180() {
   return (neuron0x382df90()*-0.0230797);
}

double NNfunction_sg_uR::synapse0x38491c0() {
   return (neuron0x382e960()*0.00183269);
}

double NNfunction_sg_uR::synapse0x3849200() {
   return (neuron0x382f330()*0.632398);
}

double NNfunction_sg_uR::synapse0x3849240() {
   return (neuron0x382fd00()*-0.00783524);
}

double NNfunction_sg_uR::synapse0x3849280() {
   return (neuron0x38306d0()*0.00664634);
}

double NNfunction_sg_uR::synapse0x38492c0() {
   return (neuron0x38310a0()*0.28679);
}

double NNfunction_sg_uR::synapse0x3848e70() {
   return (neuron0x3827130()*0.0456735);
}

double NNfunction_sg_uR::synapse0x3848eb0() {
   return (neuron0x3833c80()*-0.00413944);
}

double NNfunction_sg_uR::synapse0x3848ef0() {
   return (neuron0x3834650()*0.00259879);
}

double NNfunction_sg_uR::synapse0x3848f30() {
   return (neuron0x3835020()*-0.021211);
}

double NNfunction_sg_uR::synapse0x3849510() {
   return (neuron0x38359f0()*0.0113567);
}

double NNfunction_sg_uR::synapse0x3849550() {
   return (neuron0x38363c0()*0.928547);
}

double NNfunction_sg_uR::synapse0x3849590() {
   return (neuron0x3836d90()*-0.0257467);
}

double NNfunction_sg_uR::synapse0x38495d0() {
   return (neuron0x3837760()*-0.0136232);
}

double NNfunction_sg_uR::synapse0x3849610() {
   return (neuron0x3838130()*-0.00713354);
}

double NNfunction_sg_uR::synapse0x3849650() {
   return (neuron0x3838d10()*0.0604984);
}

double NNfunction_sg_uR::synapse0x3849690() {
   return (neuron0x38396e0()*-0.967341);
}

double NNfunction_sg_uR::synapse0x38496d0() {
   return (neuron0x382a560()*-0.00632383);
}

double NNfunction_sg_uR::synapse0x3849710() {
   return (neuron0x382af30()*0.000184057);
}

double NNfunction_sg_uR::synapse0x3849750() {
   return (neuron0x382b900()*0.0010297);
}

double NNfunction_sg_uR::synapse0x3849790() {
   return (neuron0x383df40()*-0.00444167);
}

double NNfunction_sg_uR::synapse0x38497d0() {
   return (neuron0x383e7f0()*-0.480947);
}

double NNfunction_sg_uR::synapse0x3849810() {
   return (neuron0x383f1c0()*0.00689219);
}

double NNfunction_sg_uR::synapse0x3849850() {
   return (neuron0x383fb90()*0.0022425);
}

double NNfunction_sg_uR::synapse0x3849bd0() {
   return (neuron0x381aa00()*-0.61587);
}

double NNfunction_sg_uR::synapse0x3849c10() {
   return (neuron0x381b350()*-1.0417);
}

double NNfunction_sg_uR::synapse0x3849c50() {
   return (neuron0x381be30()*-0.246013);
}

double NNfunction_sg_uR::synapse0x3849c90() {
   return (neuron0x381b8d0()*-0.97633);
}

double NNfunction_sg_uR::synapse0x3849cd0() {
   return (neuron0x381cc10()*-0.249754);
}

double NNfunction_sg_uR::synapse0x3849d10() {
   return (neuron0x381e6f0()*-0.71751);
}

double NNfunction_sg_uR::synapse0x3849d50() {
   return (neuron0x381f4c0()*-0.44754);
}

double NNfunction_sg_uR::synapse0x3849d90() {
   return (neuron0x381fe90()*-0.103401);
}

double NNfunction_sg_uR::synapse0x3849dd0() {
   return (neuron0x3820860()*0.0316285);
}

double NNfunction_sg_uR::synapse0x3849e10() {
   return (neuron0x3821340()*-0.876285);
}

double NNfunction_sg_uR::synapse0x3849e50() {
   return (neuron0x3821d10()*-0.489667);
}

double NNfunction_sg_uR::synapse0x3849e90() {
   return (neuron0x381edf0()*-0.605904);
}

double NNfunction_sg_uR::synapse0x3849ed0() {
   return (neuron0x38238c0()*-0.497632);
}

double NNfunction_sg_uR::synapse0x3849f10() {
   return (neuron0x3824290()*-0.319875);
}

double NNfunction_sg_uR::synapse0x3849f50() {
   return (neuron0x3824c60()*-0.338254);
}

double NNfunction_sg_uR::synapse0x3849f90() {
   return (neuron0x3825630()*-1.05428);
}

double NNfunction_sg_uR::synapse0x3849a20() {
   return (neuron0x3827440()*-0.264928);
}

double NNfunction_sg_uR::synapse0x3849a60() {
   return (neuron0x3827720()*0.274474);
}

double NNfunction_sg_uR::synapse0x384a0e0() {
   return (neuron0x38280f0()*-0.419964);
}

double NNfunction_sg_uR::synapse0x384a120() {
   return (neuron0x3828ac0()*0.173813);
}

double NNfunction_sg_uR::synapse0x384a160() {
   return (neuron0x3829490()*-0.0959919);
}

double NNfunction_sg_uR::synapse0x384a1a0() {
   return (neuron0x3829e60()*-0.333397);
}

double NNfunction_sg_uR::synapse0x384a1e0() {
   return (neuron0x38229b0()*-1.1817);
}

double NNfunction_sg_uR::synapse0x384a220() {
   return (neuron0x3823380()*-1.0004);
}

double NNfunction_sg_uR::synapse0x384a260() {
   return (neuron0x382cbf0()*-0.101626);
}

double NNfunction_sg_uR::synapse0x384a2a0() {
   return (neuron0x382d5c0()*-0.747747);
}

double NNfunction_sg_uR::synapse0x384a2e0() {
   return (neuron0x382df90()*-0.344587);
}

double NNfunction_sg_uR::synapse0x384a320() {
   return (neuron0x382e960()*-0.262784);
}

double NNfunction_sg_uR::synapse0x384a360() {
   return (neuron0x382f330()*-0.897219);
}

double NNfunction_sg_uR::synapse0x384a3a0() {
   return (neuron0x382fd00()*-0.924208);
}

double NNfunction_sg_uR::synapse0x384a3e0() {
   return (neuron0x38306d0()*-0.418645);
}

double NNfunction_sg_uR::synapse0x384a420() {
   return (neuron0x38310a0()*-0.0985207);
}

double NNfunction_sg_uR::synapse0x3849fd0() {
   return (neuron0x3827130()*-0.157783);
}

double NNfunction_sg_uR::synapse0x384a010() {
   return (neuron0x3833c80()*-0.263163);
}

double NNfunction_sg_uR::synapse0x384a050() {
   return (neuron0x3834650()*-0.479294);
}

double NNfunction_sg_uR::synapse0x384a090() {
   return (neuron0x3835020()*-0.0197638);
}

double NNfunction_sg_uR::synapse0x384a670() {
   return (neuron0x38359f0()*-0.565234);
}

double NNfunction_sg_uR::synapse0x384a6b0() {
   return (neuron0x38363c0()*-0.150201);
}

double NNfunction_sg_uR::synapse0x384a6f0() {
   return (neuron0x3836d90()*-0.960254);
}

double NNfunction_sg_uR::synapse0x384a730() {
   return (neuron0x3837760()*-0.563539);
}

double NNfunction_sg_uR::synapse0x384a770() {
   return (neuron0x3838130()*0.226301);
}

double NNfunction_sg_uR::synapse0x384a7b0() {
   return (neuron0x3838d10()*-0.802664);
}

double NNfunction_sg_uR::synapse0x384a7f0() {
   return (neuron0x38396e0()*-0.189774);
}

double NNfunction_sg_uR::synapse0x384a830() {
   return (neuron0x382a560()*-0.787239);
}

double NNfunction_sg_uR::synapse0x384a870() {
   return (neuron0x382af30()*-0.798299);
}

double NNfunction_sg_uR::synapse0x384a8b0() {
   return (neuron0x382b900()*-0.123823);
}

double NNfunction_sg_uR::synapse0x384a8f0() {
   return (neuron0x383df40()*-0.487162);
}

double NNfunction_sg_uR::synapse0x384a930() {
   return (neuron0x383e7f0()*-0.86355);
}

double NNfunction_sg_uR::synapse0x384a970() {
   return (neuron0x383f1c0()*-1.08452);
}

double NNfunction_sg_uR::synapse0x384a9b0() {
   return (neuron0x383fb90()*-0.468274);
}

double NNfunction_sg_uR::synapse0x384ac10() {
   return (neuron0x3846d90()*-0.0130438);
}

double NNfunction_sg_uR::synapse0x384ac50() {
   return (neuron0x3847130()*1.02066);
}

double NNfunction_sg_uR::synapse0x384ac90() {
   return (neuron0x38475d0()*-11.0971);
}

double NNfunction_sg_uR::synapse0x384acd0() {
   return (neuron0x3848730()*-9.90227);
}

double NNfunction_sg_uR::synapse0x384ad10() {
   return (neuron0x3849890()*8.78217);
}

