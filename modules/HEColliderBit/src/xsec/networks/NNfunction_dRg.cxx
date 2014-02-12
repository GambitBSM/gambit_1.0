#include "NNfunction_dRg.h"
#include <cmath>

double NNfunction_dRg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5722)/15.3413;
   input1 = (in1 - -0.237218)/1159.89;
   input2 = (in2 - 664.223)/630.884;
   input3 = (in3 - -42.8329)/808.97;
   input4 = (in4 - 1065.53)/961.16;
   input5 = (in5 - 903.075)/954.614;
   input6 = (in6 - 909.582)/954.141;
   input7 = (in7 - 930.874)/936.127;
   input8 = (in8 - 930.397)/978.207;
   input9 = (in9 - 914.699)/961.531;
   input10 = (in10 - 984.032)/954.581;
   input11 = (in11 - 729.812)/872.015;
   input12 = (in12 - 733.645)/874.555;
   input13 = (in13 - 503.395)/516.408;
   input14 = (in14 - 727.5)/819.436;
   input15 = (in15 - 730.433)/821.888;
   input16 = (in16 - 542.203)/569.429;
   input17 = (in17 - 567.019)/629.18;
   input18 = (in18 - 761.64)/906.718;
   input19 = (in19 - 808.319)/879.609;
   input20 = (in20 - -4.7455)/493.359;
   input21 = (in21 - 0.899592)/1153.25;
   input22 = (in22 - -1.58732)/1205.47;
   input23 = (in23 - -205.649)/610.121;
   switch(index) {
     case 0:
         return neuron0x199ece0();
     default:
         return 0.;
   }
}

double NNfunction_dRg::Value(int index, double* input) {
   input0 = (input[0] - 23.5722)/15.3413;
   input1 = (input[1] - -0.237218)/1159.89;
   input2 = (input[2] - 664.223)/630.884;
   input3 = (input[3] - -42.8329)/808.97;
   input4 = (input[4] - 1065.53)/961.16;
   input5 = (input[5] - 903.075)/954.614;
   input6 = (input[6] - 909.582)/954.141;
   input7 = (input[7] - 930.874)/936.127;
   input8 = (input[8] - 930.397)/978.207;
   input9 = (input[9] - 914.699)/961.531;
   input10 = (input[10] - 984.032)/954.581;
   input11 = (input[11] - 729.812)/872.015;
   input12 = (input[12] - 733.645)/874.555;
   input13 = (input[13] - 503.395)/516.408;
   input14 = (input[14] - 727.5)/819.436;
   input15 = (input[15] - 730.433)/821.888;
   input16 = (input[16] - 542.203)/569.429;
   input17 = (input[17] - 567.019)/629.18;
   input18 = (input[18] - 761.64)/906.718;
   input19 = (input[19] - 808.319)/879.609;
   input20 = (input[20] - -4.7455)/493.359;
   input21 = (input[21] - 0.899592)/1153.25;
   input22 = (input[22] - -1.58732)/1205.47;
   input23 = (input[23] - -205.649)/610.121;
   switch(index) {
     case 0:
         return neuron0x199ece0();
     default:
         return 0.;
   }
}

double NNfunction_dRg::neuron0x196add0() {
   return input0;
}

double NNfunction_dRg::neuron0x196b110() {
   return input1;
}

double NNfunction_dRg::neuron0x196b450() {
   return input2;
}

double NNfunction_dRg::neuron0x196b790() {
   return input3;
}

double NNfunction_dRg::neuron0x196bad0() {
   return input4;
}

double NNfunction_dRg::neuron0x196be10() {
   return input5;
}

double NNfunction_dRg::neuron0x196c150() {
   return input6;
}

double NNfunction_dRg::neuron0x196c490() {
   return input7;
}

double NNfunction_dRg::neuron0x196c7d0() {
   return input8;
}

double NNfunction_dRg::neuron0x196cb10() {
   return input9;
}

double NNfunction_dRg::neuron0x196ce50() {
   return input10;
}

double NNfunction_dRg::neuron0x196d190() {
   return input11;
}

double NNfunction_dRg::neuron0x196d4d0() {
   return input12;
}

double NNfunction_dRg::neuron0x196d810() {
   return input13;
}

double NNfunction_dRg::neuron0x196db50() {
   return input14;
}

double NNfunction_dRg::neuron0x196de90() {
   return input15;
}

double NNfunction_dRg::neuron0x196e1d0() {
   return input16;
}

double NNfunction_dRg::neuron0x196e730() {
   return input17;
}

double NNfunction_dRg::neuron0x196e950() {
   return input18;
}

double NNfunction_dRg::neuron0x196ec90() {
   return input19;
}

double NNfunction_dRg::neuron0x196efd0() {
   return input20;
}

double NNfunction_dRg::neuron0x196f310() {
   return input21;
}

double NNfunction_dRg::neuron0x196f650() {
   return input22;
}

double NNfunction_dRg::neuron0x196f990() {
   return input23;
}

double NNfunction_dRg::input0x196fe00() {
   double input = 0.739562;
   input += synapse0x196ac90();
   input += synapse0x196acd0();
   input += synapse0x19700b0();
   input += synapse0x19700f0();
   input += synapse0x1970130();
   input += synapse0x1970170();
   input += synapse0x19701b0();
   input += synapse0x19701f0();
   input += synapse0x1970230();
   input += synapse0x1970270();
   input += synapse0x19702b0();
   input += synapse0x19702f0();
   input += synapse0x1970330();
   input += synapse0x1970370();
   input += synapse0x19703b0();
   input += synapse0x19703f0();
   input += synapse0x196ac00();
   input += synapse0x196ac40();
   input += synapse0x171c840();
   input += synapse0x171c880();
   input += synapse0x1970650();
   input += synapse0x1970690();
   input += synapse0x19706d0();
   input += synapse0x1970710();
   return input;
}

double NNfunction_dRg::neuron0x196fe00() {
   double input = input0x196fe00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1970750() {
   double input = 1.63859;
   input += synapse0x1970a90();
   input += synapse0x1970ad0();
   input += synapse0x1970b10();
   input += synapse0x1970b50();
   input += synapse0x1970b90();
   input += synapse0x1970bd0();
   input += synapse0x1970c10();
   input += synapse0x1970c50();
   input += synapse0x1970c90();
   input += synapse0x1970540();
   input += synapse0x1970580();
   input += synapse0x19705c0();
   input += synapse0x1970600();
   input += synapse0x1970ee0();
   input += synapse0x1970f20();
   input += synapse0x1970f60();
   input += synapse0x19708e0();
   input += synapse0x1970920();
   input += synapse0x19710b0();
   input += synapse0x19710f0();
   input += synapse0x1971130();
   input += synapse0x1971170();
   input += synapse0x19711b0();
   input += synapse0x19711f0();
   return input;
}

double NNfunction_dRg::neuron0x1970750() {
   double input = input0x1970750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1971230() {
   double input = 0.524356;
   input += synapse0x1971570();
   input += synapse0x19715b0();
   input += synapse0x19715f0();
   input += synapse0x1971630();
   input += synapse0x1971670();
   input += synapse0x19716b0();
   input += synapse0x19716f0();
   input += synapse0x1971730();
   input += synapse0x1971770();
   input += synapse0x19717b0();
   input += synapse0x19717f0();
   input += synapse0x1971830();
   input += synapse0x1971870();
   input += synapse0x19718b0();
   input += synapse0x19718f0();
   input += synapse0x1971930();
   input += synapse0x19713c0();
   input += synapse0x1971400();
   input += synapse0x171cc70();
   input += synapse0x172a3d0();
   input += synapse0x172a410();
   input += synapse0x1959e60();
   input += synapse0x1959ea0();
   input += synapse0x1959ee0();
   return input;
}

double NNfunction_dRg::neuron0x1971230() {
   double input = input0x1971230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1970cd0() {
   double input = -0.0767902;
   input += synapse0x172ac70();
   input += synapse0x1970e60();
   input += synapse0x1970ea0();
   input += synapse0x1971a80();
   input += synapse0x1971ac0();
   input += synapse0x1971b00();
   input += synapse0x1971b40();
   input += synapse0x1971b80();
   input += synapse0x1971bc0();
   input += synapse0x1971c00();
   input += synapse0x1971c40();
   input += synapse0x1971c80();
   input += synapse0x1971cc0();
   input += synapse0x1971d00();
   input += synapse0x1971d40();
   input += synapse0x1971d80();
   input += synapse0x196ad10();
   input += synapse0x196ad50();
   input += synapse0x196ad90();
   input += synapse0x1971ed0();
   input += synapse0x1971f10();
   input += synapse0x1971f50();
   input += synapse0x1971f90();
   input += synapse0x1971fd0();
   return input;
}

double NNfunction_dRg::neuron0x1970cd0() {
   double input = input0x1970cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1972010() {
   double input = -0.100152;
   input += synapse0x1972350();
   input += synapse0x1972390();
   input += synapse0x19723d0();
   input += synapse0x1972410();
   input += synapse0x1972450();
   input += synapse0x1972490();
   input += synapse0x19724d0();
   input += synapse0x1972510();
   input += synapse0x1972550();
   input += synapse0x1972590();
   input += synapse0x19725d0();
   input += synapse0x1972610();
   input += synapse0x1972650();
   input += synapse0x1972690();
   input += synapse0x19726d0();
   input += synapse0x1972710();
   input += synapse0x19721a0();
   input += synapse0x19721e0();
   input += synapse0x1972860();
   input += synapse0x19728a0();
   input += synapse0x19728e0();
   input += synapse0x1972920();
   input += synapse0x1972960();
   input += synapse0x19729a0();
   return input;
}

double NNfunction_dRg::neuron0x1972010() {
   double input = input0x1972010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x19729e0() {
   double input = 1.40159;
   input += synapse0x1972d20();
   input += synapse0x1972d60();
   input += synapse0x1972da0();
   input += synapse0x1972de0();
   input += synapse0x1972e20();
   input += synapse0x1972e60();
   input += synapse0x1972ea0();
   input += synapse0x1972ee0();
   input += synapse0x1972f20();
   input += synapse0x172a740();
   input += synapse0x172a780();
   input += synapse0x172a7c0();
   input += synapse0x172a800();
   input += synapse0x172a840();
   input += synapse0x172a880();
   input += synapse0x172a8c0();
   input += synapse0x1972b70();
   input += synapse0x1972bb0();
   input += synapse0x172aa10();
   input += synapse0x172aa50();
   input += synapse0x172aa90();
   input += synapse0x172aad0();
   input += synapse0x172ab10();
   input += synapse0x1973770();
   return input;
}

double NNfunction_dRg::neuron0x19729e0() {
   double input = input0x19729e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x19737b0() {
   double input = 0.922907;
   input += synapse0x1973af0();
   input += synapse0x1973b30();
   input += synapse0x1973b70();
   input += synapse0x1973bb0();
   input += synapse0x1973bf0();
   input += synapse0x1973c30();
   input += synapse0x1973c70();
   input += synapse0x1973cb0();
   input += synapse0x1973cf0();
   input += synapse0x1973d30();
   input += synapse0x1973d70();
   input += synapse0x1973db0();
   input += synapse0x1973df0();
   input += synapse0x1973e30();
   input += synapse0x1973e70();
   input += synapse0x1973eb0();
   input += synapse0x1973940();
   input += synapse0x1973980();
   input += synapse0x1974000();
   input += synapse0x1974040();
   input += synapse0x1974080();
   input += synapse0x19740c0();
   input += synapse0x1974100();
   input += synapse0x1974140();
   return input;
}

double NNfunction_dRg::neuron0x19737b0() {
   double input = input0x19737b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1974180() {
   double input = -0.00334959;
   input += synapse0x19744c0();
   input += synapse0x1974500();
   input += synapse0x1974540();
   input += synapse0x1974580();
   input += synapse0x19745c0();
   input += synapse0x1974600();
   input += synapse0x1974640();
   input += synapse0x1974680();
   input += synapse0x19746c0();
   input += synapse0x1974700();
   input += synapse0x1974740();
   input += synapse0x1974780();
   input += synapse0x19747c0();
   input += synapse0x1974800();
   input += synapse0x1974840();
   input += synapse0x1974880();
   input += synapse0x1974310();
   input += synapse0x1974350();
   input += synapse0x19749d0();
   input += synapse0x1974a10();
   input += synapse0x1974a50();
   input += synapse0x1974a90();
   input += synapse0x1974ad0();
   input += synapse0x1974b10();
   return input;
}

double NNfunction_dRg::neuron0x1974180() {
   double input = input0x1974180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1974b50() {
   double input = 0.221981;
   input += synapse0x196e620();
   input += synapse0x196e660();
   input += synapse0x196e6a0();
   input += synapse0x196e6e0();
   input += synapse0x19750a0();
   input += synapse0x19750e0();
   input += synapse0x1975120();
   input += synapse0x1975160();
   input += synapse0x19751a0();
   input += synapse0x19751e0();
   input += synapse0x1975220();
   input += synapse0x1975260();
   input += synapse0x19752a0();
   input += synapse0x19752e0();
   input += synapse0x1975320();
   input += synapse0x1975360();
   input += synapse0x1974ce0();
   input += synapse0x1974d20();
   input += synapse0x19754b0();
   input += synapse0x19754f0();
   input += synapse0x1975530();
   input += synapse0x1975570();
   input += synapse0x19755b0();
   input += synapse0x19755f0();
   return input;
}

double NNfunction_dRg::neuron0x1974b50() {
   double input = input0x1974b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1975630() {
   double input = -0.153066;
   input += synapse0x1975970();
   input += synapse0x19759b0();
   input += synapse0x19759f0();
   input += synapse0x1975a30();
   input += synapse0x1975a70();
   input += synapse0x1975ab0();
   input += synapse0x1975af0();
   input += synapse0x1975b30();
   input += synapse0x1975b70();
   input += synapse0x1975bb0();
   input += synapse0x1975bf0();
   input += synapse0x1975c30();
   input += synapse0x1975c70();
   input += synapse0x1975cb0();
   input += synapse0x1975cf0();
   input += synapse0x1975d30();
   input += synapse0x19757c0();
   input += synapse0x1975800();
   input += synapse0x1975e80();
   input += synapse0x1975ec0();
   input += synapse0x1975f00();
   input += synapse0x1975f40();
   input += synapse0x1975f80();
   input += synapse0x1975fc0();
   return input;
}

double NNfunction_dRg::neuron0x1975630() {
   double input = input0x1975630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1976000() {
   double input = -0.922991;
   input += synapse0x1976340();
   input += synapse0x1976380();
   input += synapse0x19763c0();
   input += synapse0x1976400();
   input += synapse0x1976440();
   input += synapse0x1976480();
   input += synapse0x19764c0();
   input += synapse0x1976500();
   input += synapse0x1976540();
   input += synapse0x1976580();
   input += synapse0x19765c0();
   input += synapse0x1976600();
   input += synapse0x1976640();
   input += synapse0x1976680();
   input += synapse0x19766c0();
   input += synapse0x1976700();
   input += synapse0x1976190();
   input += synapse0x19761d0();
   input += synapse0x1972f60();
   input += synapse0x1972fa0();
   input += synapse0x1972fe0();
   input += synapse0x1973020();
   input += synapse0x1973060();
   input += synapse0x19730a0();
   return input;
}

double NNfunction_dRg::neuron0x1976000() {
   double input = input0x1976000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x19730e0() {
   double input = -4.45492;
   input += synapse0x1973420();
   input += synapse0x1973460();
   input += synapse0x19734a0();
   input += synapse0x19734e0();
   input += synapse0x1973520();
   input += synapse0x1973560();
   input += synapse0x19735a0();
   input += synapse0x19735e0();
   input += synapse0x1973620();
   input += synapse0x1973660();
   input += synapse0x19736a0();
   input += synapse0x19736e0();
   input += synapse0x1973720();
   input += synapse0x1977860();
   input += synapse0x19778a0();
   input += synapse0x19778e0();
   input += synapse0x1973270();
   input += synapse0x19732b0();
   input += synapse0x1977a30();
   input += synapse0x1977a70();
   input += synapse0x1977ab0();
   input += synapse0x1977af0();
   input += synapse0x1977b30();
   input += synapse0x1977b70();
   return input;
}

double NNfunction_dRg::neuron0x19730e0() {
   double input = input0x19730e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1977bb0() {
   double input = -0.931919;
   input += synapse0x1977ef0();
   input += synapse0x1977f30();
   input += synapse0x1977f70();
   input += synapse0x1977fb0();
   input += synapse0x1977ff0();
   input += synapse0x1978030();
   input += synapse0x1978070();
   input += synapse0x19780b0();
   input += synapse0x19780f0();
   input += synapse0x1978130();
   input += synapse0x1978170();
   input += synapse0x19781b0();
   input += synapse0x19781f0();
   input += synapse0x1978230();
   input += synapse0x1978270();
   input += synapse0x19782b0();
   input += synapse0x1977d40();
   input += synapse0x1977d80();
   input += synapse0x1978400();
   input += synapse0x1978440();
   input += synapse0x1978480();
   input += synapse0x19784c0();
   input += synapse0x1978500();
   input += synapse0x1978540();
   return input;
}

double NNfunction_dRg::neuron0x1977bb0() {
   double input = input0x1977bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1978580() {
   double input = -0.178604;
   input += synapse0x19788c0();
   input += synapse0x1978900();
   input += synapse0x1978940();
   input += synapse0x1978980();
   input += synapse0x19789c0();
   input += synapse0x1978a00();
   input += synapse0x1978a40();
   input += synapse0x1978a80();
   input += synapse0x1978ac0();
   input += synapse0x1978b00();
   input += synapse0x1978b40();
   input += synapse0x1978b80();
   input += synapse0x1978bc0();
   input += synapse0x1978c00();
   input += synapse0x1978c40();
   input += synapse0x1978c80();
   input += synapse0x1978710();
   input += synapse0x1978750();
   input += synapse0x1978dd0();
   input += synapse0x1978e10();
   input += synapse0x1978e50();
   input += synapse0x1978e90();
   input += synapse0x1978ed0();
   input += synapse0x1978f10();
   return input;
}

double NNfunction_dRg::neuron0x1978580() {
   double input = input0x1978580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1978f50() {
   double input = 0.375703;
   input += synapse0x1979290();
   input += synapse0x19792d0();
   input += synapse0x1979310();
   input += synapse0x1979350();
   input += synapse0x1979390();
   input += synapse0x19793d0();
   input += synapse0x1979410();
   input += synapse0x1979450();
   input += synapse0x1979490();
   input += synapse0x19794d0();
   input += synapse0x1979510();
   input += synapse0x1979550();
   input += synapse0x1979590();
   input += synapse0x19795d0();
   input += synapse0x1979610();
   input += synapse0x1979650();
   input += synapse0x19790e0();
   input += synapse0x1979120();
   input += synapse0x19797a0();
   input += synapse0x19797e0();
   input += synapse0x1979820();
   input += synapse0x1979860();
   input += synapse0x19798a0();
   input += synapse0x19798e0();
   return input;
}

double NNfunction_dRg::neuron0x1978f50() {
   double input = input0x1978f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1979920() {
   double input = 0.731013;
   input += synapse0x1979c60();
   input += synapse0x196aff0();
   input += synapse0x196b030();
   input += synapse0x196b330();
   input += synapse0x196b370();
   input += synapse0x196b670();
   input += synapse0x196b6b0();
   input += synapse0x196b9b0();
   input += synapse0x196b9f0();
   input += synapse0x196bcf0();
   input += synapse0x196bd30();
   input += synapse0x196c030();
   input += synapse0x196c070();
   input += synapse0x196c370();
   input += synapse0x196c3b0();
   input += synapse0x196c6b0();
   input += synapse0x196c6f0();
   input += synapse0x196c9f0();
   input += synapse0x196ca30();
   input += synapse0x196cd30();
   input += synapse0x196cd70();
   input += synapse0x196d070();
   input += synapse0x196d0b0();
   input += synapse0x196d3b0();
   return input;
}

double NNfunction_dRg::neuron0x1979920() {
   double input = input0x1979920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197b730() {
   double input = 0.878611;
   input += synapse0x196d3f0();
   input += synapse0x196e0b0();
   input += synapse0x196e0f0();
   input += synapse0x1979ab0();
   input += synapse0x1979af0();
   input += synapse0x196e3f0();
   input += synapse0x196e430();
   input += synapse0x171c720();
   input += synapse0x171c760();
   input += synapse0x196eb70();
   input += synapse0x196ebb0();
   input += synapse0x196eeb0();
   input += synapse0x196eef0();
   input += synapse0x196f1f0();
   input += synapse0x196f230();
   input += synapse0x196f530();
   input += synapse0x196f570();
   input += synapse0x196f870();
   input += synapse0x196f8b0();
   input += synapse0x196fbb0();
   input += synapse0x196fbf0();
   input += synapse0x196d6f0();
   input += synapse0x196d730();
   input += synapse0x197b9d0();
   return input;
}

double NNfunction_dRg::neuron0x197b730() {
   double input = input0x197b730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197ba10() {
   double input = 0.127977;
   input += synapse0x197bd50();
   input += synapse0x197bd90();
   input += synapse0x197bdd0();
   input += synapse0x197be10();
   input += synapse0x197be50();
   input += synapse0x197be90();
   input += synapse0x197bed0();
   input += synapse0x197bf10();
   input += synapse0x197bf50();
   input += synapse0x197bf90();
   input += synapse0x197bfd0();
   input += synapse0x197c010();
   input += synapse0x197c050();
   input += synapse0x197c090();
   input += synapse0x197c0d0();
   input += synapse0x197c110();
   input += synapse0x197bba0();
   input += synapse0x197bbe0();
   input += synapse0x197c260();
   input += synapse0x197c2a0();
   input += synapse0x197c2e0();
   input += synapse0x197c320();
   input += synapse0x197c360();
   input += synapse0x197c3a0();
   return input;
}

double NNfunction_dRg::neuron0x197ba10() {
   double input = input0x197ba10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197c3e0() {
   double input = 0.437866;
   input += synapse0x197c720();
   input += synapse0x197c760();
   input += synapse0x197c7a0();
   input += synapse0x197c7e0();
   input += synapse0x197c820();
   input += synapse0x197c860();
   input += synapse0x197c8a0();
   input += synapse0x197c8e0();
   input += synapse0x197c920();
   input += synapse0x197c960();
   input += synapse0x197c9a0();
   input += synapse0x197c9e0();
   input += synapse0x197ca20();
   input += synapse0x197ca60();
   input += synapse0x197caa0();
   input += synapse0x197cae0();
   input += synapse0x197c570();
   input += synapse0x197c5b0();
   input += synapse0x197cc30();
   input += synapse0x197cc70();
   input += synapse0x197ccb0();
   input += synapse0x197ccf0();
   input += synapse0x197cd30();
   input += synapse0x197cd70();
   return input;
}

double NNfunction_dRg::neuron0x197c3e0() {
   double input = input0x197c3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197cdb0() {
   double input = 2.189;
   input += synapse0x197d0f0();
   input += synapse0x197d130();
   input += synapse0x197d170();
   input += synapse0x197d1b0();
   input += synapse0x197d1f0();
   input += synapse0x197d230();
   input += synapse0x197d270();
   input += synapse0x197d2b0();
   input += synapse0x197d2f0();
   input += synapse0x197d330();
   input += synapse0x197d370();
   input += synapse0x197d3b0();
   input += synapse0x197d3f0();
   input += synapse0x197d430();
   input += synapse0x197d470();
   input += synapse0x197d4b0();
   input += synapse0x197cf40();
   input += synapse0x197cf80();
   input += synapse0x197d600();
   input += synapse0x197d640();
   input += synapse0x197d680();
   input += synapse0x197d6c0();
   input += synapse0x197d700();
   input += synapse0x197d740();
   return input;
}

double NNfunction_dRg::neuron0x197cdb0() {
   double input = input0x197cdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197d780() {
   double input = 0.224526;
   input += synapse0x197dac0();
   input += synapse0x197db00();
   input += synapse0x197db40();
   input += synapse0x197db80();
   input += synapse0x197dbc0();
   input += synapse0x197dc00();
   input += synapse0x197dc40();
   input += synapse0x197dc80();
   input += synapse0x197dcc0();
   input += synapse0x197dd00();
   input += synapse0x197dd40();
   input += synapse0x197dd80();
   input += synapse0x197ddc0();
   input += synapse0x197de00();
   input += synapse0x197de40();
   input += synapse0x197de80();
   input += synapse0x197d910();
   input += synapse0x197d950();
   input += synapse0x197dfd0();
   input += synapse0x197e010();
   input += synapse0x197e050();
   input += synapse0x197e090();
   input += synapse0x197e0d0();
   input += synapse0x197e110();
   return input;
}

double NNfunction_dRg::neuron0x197d780() {
   double input = input0x197d780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197e150() {
   double input = -0.172656;
   input += synapse0x197e490();
   input += synapse0x197e4d0();
   input += synapse0x197e510();
   input += synapse0x197e550();
   input += synapse0x197e590();
   input += synapse0x197e5d0();
   input += synapse0x197e610();
   input += synapse0x197e650();
   input += synapse0x197e690();
   input += synapse0x1976850();
   input += synapse0x1976890();
   input += synapse0x19768d0();
   input += synapse0x1976910();
   input += synapse0x1976950();
   input += synapse0x1976990();
   input += synapse0x19769d0();
   input += synapse0x197e2e0();
   input += synapse0x197e320();
   input += synapse0x1976b20();
   input += synapse0x1976b60();
   input += synapse0x1976ba0();
   input += synapse0x1976be0();
   input += synapse0x1976c20();
   input += synapse0x1976c60();
   return input;
}

double NNfunction_dRg::neuron0x197e150() {
   double input = input0x197e150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1976ca0() {
   double input = 0.863522;
   input += synapse0x1976fe0();
   input += synapse0x1977020();
   input += synapse0x1977060();
   input += synapse0x19770a0();
   input += synapse0x19770e0();
   input += synapse0x1977120();
   input += synapse0x1977160();
   input += synapse0x19771a0();
   input += synapse0x19771e0();
   input += synapse0x1977220();
   input += synapse0x1977260();
   input += synapse0x19772a0();
   input += synapse0x19772e0();
   input += synapse0x1977320();
   input += synapse0x1977360();
   input += synapse0x19773a0();
   input += synapse0x1976e30();
   input += synapse0x1976e70();
   input += synapse0x19774f0();
   input += synapse0x1977530();
   input += synapse0x1977570();
   input += synapse0x19775b0();
   input += synapse0x19775f0();
   input += synapse0x1977630();
   return input;
}

double NNfunction_dRg::neuron0x1976ca0() {
   double input = input0x1976ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1977670() {
   double input = -0.94574;
   input += synapse0x1977800();
   input += synapse0x1980890();
   input += synapse0x19808d0();
   input += synapse0x1980910();
   input += synapse0x1980950();
   input += synapse0x1980990();
   input += synapse0x19809d0();
   input += synapse0x1980a10();
   input += synapse0x1980a50();
   input += synapse0x1980a90();
   input += synapse0x1980ad0();
   input += synapse0x1980b10();
   input += synapse0x1980b50();
   input += synapse0x1980b90();
   input += synapse0x1980bd0();
   input += synapse0x1980c10();
   input += synapse0x19806e0();
   input += synapse0x1980720();
   input += synapse0x1980d60();
   input += synapse0x1980da0();
   input += synapse0x1980de0();
   input += synapse0x1980e20();
   input += synapse0x1980e60();
   input += synapse0x1980ea0();
   return input;
}

double NNfunction_dRg::neuron0x1977670() {
   double input = input0x1977670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1980ee0() {
   double input = 0.366852;
   input += synapse0x1981220();
   input += synapse0x1981260();
   input += synapse0x19812a0();
   input += synapse0x19812e0();
   input += synapse0x1981320();
   input += synapse0x1981360();
   input += synapse0x19813a0();
   input += synapse0x19813e0();
   input += synapse0x1981420();
   input += synapse0x1981460();
   input += synapse0x19814a0();
   input += synapse0x19814e0();
   input += synapse0x1981520();
   input += synapse0x1981560();
   input += synapse0x19815a0();
   input += synapse0x19815e0();
   input += synapse0x1981070();
   input += synapse0x19810b0();
   input += synapse0x1981730();
   input += synapse0x1981770();
   input += synapse0x19817b0();
   input += synapse0x19817f0();
   input += synapse0x1981830();
   input += synapse0x1981870();
   return input;
}

double NNfunction_dRg::neuron0x1980ee0() {
   double input = input0x1980ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x19818b0() {
   double input = -0.724005;
   input += synapse0x1981bf0();
   input += synapse0x1981c30();
   input += synapse0x1981c70();
   input += synapse0x1981cb0();
   input += synapse0x1981cf0();
   input += synapse0x1981d30();
   input += synapse0x1981d70();
   input += synapse0x1981db0();
   input += synapse0x1981df0();
   input += synapse0x1981e30();
   input += synapse0x1981e70();
   input += synapse0x1981eb0();
   input += synapse0x1981ef0();
   input += synapse0x1981f30();
   input += synapse0x1981f70();
   input += synapse0x1981fb0();
   input += synapse0x1981a40();
   input += synapse0x1981a80();
   input += synapse0x1982100();
   input += synapse0x1982140();
   input += synapse0x1982180();
   input += synapse0x19821c0();
   input += synapse0x1982200();
   input += synapse0x1982240();
   return input;
}

double NNfunction_dRg::neuron0x19818b0() {
   double input = input0x19818b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1982280() {
   double input = -0.801407;
   input += synapse0x19825c0();
   input += synapse0x1982600();
   input += synapse0x1982640();
   input += synapse0x1982680();
   input += synapse0x19826c0();
   input += synapse0x1982700();
   input += synapse0x1982740();
   input += synapse0x1982780();
   input += synapse0x19827c0();
   input += synapse0x1982800();
   input += synapse0x1982840();
   input += synapse0x1982880();
   input += synapse0x19828c0();
   input += synapse0x1982900();
   input += synapse0x1982940();
   input += synapse0x1982980();
   input += synapse0x1982410();
   input += synapse0x1982450();
   input += synapse0x1982ad0();
   input += synapse0x1982b10();
   input += synapse0x1982b50();
   input += synapse0x1982b90();
   input += synapse0x1982bd0();
   input += synapse0x1982c10();
   return input;
}

double NNfunction_dRg::neuron0x1982280() {
   double input = input0x1982280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1982c50() {
   double input = 0.437827;
   input += synapse0x1982f90();
   input += synapse0x1982fd0();
   input += synapse0x1983010();
   input += synapse0x1983050();
   input += synapse0x1983090();
   input += synapse0x19830d0();
   input += synapse0x1983110();
   input += synapse0x1983150();
   input += synapse0x1983190();
   input += synapse0x19831d0();
   input += synapse0x1983210();
   input += synapse0x1983250();
   input += synapse0x1983290();
   input += synapse0x19832d0();
   input += synapse0x1983310();
   input += synapse0x1983350();
   input += synapse0x1982de0();
   input += synapse0x1982e20();
   input += synapse0x19834a0();
   input += synapse0x19834e0();
   input += synapse0x1983520();
   input += synapse0x1983560();
   input += synapse0x19835a0();
   input += synapse0x19835e0();
   return input;
}

double NNfunction_dRg::neuron0x1982c50() {
   double input = input0x1982c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1983620() {
   double input = 1.15541;
   input += synapse0x1983960();
   input += synapse0x19839a0();
   input += synapse0x19839e0();
   input += synapse0x1983a20();
   input += synapse0x1983a60();
   input += synapse0x1983aa0();
   input += synapse0x1983ae0();
   input += synapse0x1983b20();
   input += synapse0x1983b60();
   input += synapse0x1983ba0();
   input += synapse0x1983be0();
   input += synapse0x1983c20();
   input += synapse0x1983c60();
   input += synapse0x1983ca0();
   input += synapse0x1983ce0();
   input += synapse0x1983d20();
   input += synapse0x19837b0();
   input += synapse0x19837f0();
   input += synapse0x1983e70();
   input += synapse0x1983eb0();
   input += synapse0x1983ef0();
   input += synapse0x1983f30();
   input += synapse0x1983f70();
   input += synapse0x1983fb0();
   return input;
}

double NNfunction_dRg::neuron0x1983620() {
   double input = input0x1983620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1983ff0() {
   double input = 0.303899;
   input += synapse0x1984330();
   input += synapse0x1984370();
   input += synapse0x19843b0();
   input += synapse0x19843f0();
   input += synapse0x1984430();
   input += synapse0x1984470();
   input += synapse0x19844b0();
   input += synapse0x19844f0();
   input += synapse0x1984530();
   input += synapse0x1984570();
   input += synapse0x19845b0();
   input += synapse0x19845f0();
   input += synapse0x1984630();
   input += synapse0x1984670();
   input += synapse0x19846b0();
   input += synapse0x19846f0();
   input += synapse0x1984180();
   input += synapse0x19841c0();
   input += synapse0x1984840();
   input += synapse0x1984880();
   input += synapse0x19848c0();
   input += synapse0x1984900();
   input += synapse0x1984940();
   input += synapse0x1984980();
   return input;
}

double NNfunction_dRg::neuron0x1983ff0() {
   double input = input0x1983ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x19849c0() {
   double input = 0.0863449;
   input += synapse0x1984d00();
   input += synapse0x1984d40();
   input += synapse0x1984d80();
   input += synapse0x1984dc0();
   input += synapse0x1984e00();
   input += synapse0x1984e40();
   input += synapse0x1984e80();
   input += synapse0x1984ec0();
   input += synapse0x1984f00();
   input += synapse0x1984f40();
   input += synapse0x1984f80();
   input += synapse0x1984fc0();
   input += synapse0x1985000();
   input += synapse0x1985040();
   input += synapse0x1985080();
   input += synapse0x19850c0();
   input += synapse0x1984b50();
   input += synapse0x1984b90();
   input += synapse0x1985210();
   input += synapse0x1985250();
   input += synapse0x1985290();
   input += synapse0x19852d0();
   input += synapse0x1985310();
   input += synapse0x1985350();
   return input;
}

double NNfunction_dRg::neuron0x19849c0() {
   double input = input0x19849c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1985390() {
   double input = -0.139754;
   input += synapse0x19856d0();
   input += synapse0x1979ca0();
   input += synapse0x1979ce0();
   input += synapse0x1979d20();
   input += synapse0x1979f70();
   input += synapse0x1979fb0();
   input += synapse0x1979ff0();
   input += synapse0x197a240();
   input += synapse0x197a280();
   input += synapse0x197a4d0();
   input += synapse0x197a510();
   input += synapse0x197a550();
   input += synapse0x197a7a0();
   input += synapse0x197a7e0();
   input += synapse0x197aa30();
   input += synapse0x197aa70();
   input += synapse0x1985520();
   input += synapse0x1985560();
   input += synapse0x197abc0();
   input += synapse0x197b0d0();
   input += synapse0x197b110();
   input += synapse0x197b150();
   input += synapse0x197b3a0();
   input += synapse0x197b3e0();
   return input;
}

double NNfunction_dRg::neuron0x1985390() {
   double input = input0x1985390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197b420() {
   double input = 0.914083;
   input += synapse0x197ac90();
   input += synapse0x197acd0();
   input += synapse0x197ad10();
   input += synapse0x197ad50();
   input += synapse0x197b6d0();
   input += synapse0x1987a20();
   input += synapse0x1987a60();
   input += synapse0x1987aa0();
   input += synapse0x1987ae0();
   input += synapse0x1987b20();
   input += synapse0x1987b60();
   input += synapse0x1987ba0();
   input += synapse0x1987be0();
   input += synapse0x1987c20();
   input += synapse0x1987c60();
   input += synapse0x1987ca0();
   input += synapse0x197b5b0();
   input += synapse0x197b5f0();
   input += synapse0x1987df0();
   input += synapse0x1987e30();
   input += synapse0x1987e70();
   input += synapse0x1987eb0();
   input += synapse0x1987ef0();
   input += synapse0x1987f30();
   return input;
}

double NNfunction_dRg::neuron0x197b420() {
   double input = input0x197b420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1987f70() {
   double input = 0.792958;
   input += synapse0x19882b0();
   input += synapse0x19882f0();
   input += synapse0x1988330();
   input += synapse0x1988370();
   input += synapse0x19883b0();
   input += synapse0x19883f0();
   input += synapse0x1988430();
   input += synapse0x1988470();
   input += synapse0x19884b0();
   input += synapse0x19884f0();
   input += synapse0x1988530();
   input += synapse0x1988570();
   input += synapse0x19885b0();
   input += synapse0x19885f0();
   input += synapse0x1988630();
   input += synapse0x1988670();
   input += synapse0x1988100();
   input += synapse0x1988140();
   input += synapse0x19887c0();
   input += synapse0x1988800();
   input += synapse0x1988840();
   input += synapse0x1988880();
   input += synapse0x19888c0();
   input += synapse0x1988900();
   return input;
}

double NNfunction_dRg::neuron0x1987f70() {
   double input = input0x1987f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1988940() {
   double input = 0.852315;
   input += synapse0x1988c80();
   input += synapse0x1988cc0();
   input += synapse0x1988d00();
   input += synapse0x1988d40();
   input += synapse0x1988d80();
   input += synapse0x1988dc0();
   input += synapse0x1988e00();
   input += synapse0x1988e40();
   input += synapse0x1988e80();
   input += synapse0x1988ec0();
   input += synapse0x1988f00();
   input += synapse0x1988f40();
   input += synapse0x1988f80();
   input += synapse0x1988fc0();
   input += synapse0x1989000();
   input += synapse0x1989040();
   input += synapse0x1988ad0();
   input += synapse0x1988b10();
   input += synapse0x1989190();
   input += synapse0x19891d0();
   input += synapse0x1989210();
   input += synapse0x1989250();
   input += synapse0x1989290();
   input += synapse0x19892d0();
   return input;
}

double NNfunction_dRg::neuron0x1988940() {
   double input = input0x1988940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1989310() {
   double input = -0.0174776;
   input += synapse0x1989650();
   input += synapse0x1989690();
   input += synapse0x19896d0();
   input += synapse0x1989710();
   input += synapse0x1989750();
   input += synapse0x1989790();
   input += synapse0x19897d0();
   input += synapse0x1989810();
   input += synapse0x1989850();
   input += synapse0x1989890();
   input += synapse0x19898d0();
   input += synapse0x1989910();
   input += synapse0x1989950();
   input += synapse0x1989990();
   input += synapse0x19899d0();
   input += synapse0x1989a10();
   input += synapse0x19894a0();
   input += synapse0x19894e0();
   input += synapse0x1989b60();
   input += synapse0x1989ba0();
   input += synapse0x1989be0();
   input += synapse0x1989c20();
   input += synapse0x1989c60();
   input += synapse0x1989ca0();
   return input;
}

double NNfunction_dRg::neuron0x1989310() {
   double input = input0x1989310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1989ce0() {
   double input = -0.238433;
   input += synapse0x198a020();
   input += synapse0x198a060();
   input += synapse0x198a0a0();
   input += synapse0x198a0e0();
   input += synapse0x198a120();
   input += synapse0x198a160();
   input += synapse0x198a1a0();
   input += synapse0x198a1e0();
   input += synapse0x198a220();
   input += synapse0x198a260();
   input += synapse0x198a2a0();
   input += synapse0x198a2e0();
   input += synapse0x198a320();
   input += synapse0x198a360();
   input += synapse0x198a3a0();
   input += synapse0x198a3e0();
   input += synapse0x1989e70();
   input += synapse0x1989eb0();
   input += synapse0x198a530();
   input += synapse0x198a570();
   input += synapse0x198a5b0();
   input += synapse0x198a5f0();
   input += synapse0x198a630();
   input += synapse0x198a670();
   return input;
}

double NNfunction_dRg::neuron0x1989ce0() {
   double input = input0x1989ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x198a6b0() {
   double input = 1.30951;
   input += synapse0x198a9f0();
   input += synapse0x198aa30();
   input += synapse0x198aa70();
   input += synapse0x198aab0();
   input += synapse0x198aaf0();
   input += synapse0x198ab30();
   input += synapse0x198ab70();
   input += synapse0x198abb0();
   input += synapse0x198abf0();
   input += synapse0x198ac30();
   input += synapse0x198ac70();
   input += synapse0x198acb0();
   input += synapse0x198acf0();
   input += synapse0x198ad30();
   input += synapse0x198ad70();
   input += synapse0x198adb0();
   input += synapse0x198a840();
   input += synapse0x198a880();
   input += synapse0x198af00();
   input += synapse0x198af40();
   input += synapse0x198af80();
   input += synapse0x198afc0();
   input += synapse0x198b000();
   input += synapse0x198b040();
   return input;
}

double NNfunction_dRg::neuron0x198a6b0() {
   double input = input0x198a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x198b080() {
   double input = -0.349553;
   input += synapse0x198b3c0();
   input += synapse0x198b400();
   input += synapse0x198b440();
   input += synapse0x198b480();
   input += synapse0x198b4c0();
   input += synapse0x198b500();
   input += synapse0x198b540();
   input += synapse0x198b580();
   input += synapse0x198b5c0();
   input += synapse0x198b600();
   input += synapse0x198b640();
   input += synapse0x198b680();
   input += synapse0x198b6c0();
   input += synapse0x198b700();
   input += synapse0x198b740();
   input += synapse0x198b780();
   input += synapse0x198b210();
   input += synapse0x198b250();
   input += synapse0x198b8d0();
   input += synapse0x198b910();
   input += synapse0x198b950();
   input += synapse0x198b990();
   input += synapse0x198b9d0();
   input += synapse0x198ba10();
   return input;
}

double NNfunction_dRg::neuron0x198b080() {
   double input = input0x198b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x198ba50() {
   double input = -1.07316;
   input += synapse0x198bd90();
   input += synapse0x198bdd0();
   input += synapse0x198be10();
   input += synapse0x198be50();
   input += synapse0x198be90();
   input += synapse0x198bed0();
   input += synapse0x198bf10();
   input += synapse0x198bf50();
   input += synapse0x198bf90();
   input += synapse0x198bfd0();
   input += synapse0x198c010();
   input += synapse0x198c050();
   input += synapse0x198c090();
   input += synapse0x198c0d0();
   input += synapse0x198c110();
   input += synapse0x198c150();
   input += synapse0x198bbe0();
   input += synapse0x198bc20();
   input += synapse0x198c2a0();
   input += synapse0x198c2e0();
   input += synapse0x198c320();
   input += synapse0x198c360();
   input += synapse0x198c3a0();
   input += synapse0x198c3e0();
   return input;
}

double NNfunction_dRg::neuron0x198ba50() {
   double input = input0x198ba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x198c420() {
   double input = -0.469975;
   input += synapse0x1974e90();
   input += synapse0x1974ed0();
   input += synapse0x1974f10();
   input += synapse0x1974f50();
   input += synapse0x1974f90();
   input += synapse0x1974fd0();
   input += synapse0x1975010();
   input += synapse0x1975050();
   input += synapse0x198cb70();
   input += synapse0x198cbb0();
   input += synapse0x198cbf0();
   input += synapse0x198cc30();
   input += synapse0x198cc70();
   input += synapse0x198ccb0();
   input += synapse0x198ccf0();
   input += synapse0x198cd30();
   input += synapse0x198c5b0();
   input += synapse0x198c5f0();
   input += synapse0x198ce80();
   input += synapse0x198cec0();
   input += synapse0x198cf00();
   input += synapse0x198cf40();
   input += synapse0x198cf80();
   input += synapse0x198cfc0();
   return input;
}

double NNfunction_dRg::neuron0x198c420() {
   double input = input0x198c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x198d000() {
   double input = 1.47332;
   input += synapse0x198d340();
   input += synapse0x198d380();
   input += synapse0x198d3c0();
   input += synapse0x198d400();
   input += synapse0x198d440();
   input += synapse0x198d480();
   input += synapse0x198d4c0();
   input += synapse0x198d500();
   input += synapse0x198d540();
   input += synapse0x198d580();
   input += synapse0x198d5c0();
   input += synapse0x198d600();
   input += synapse0x198d640();
   input += synapse0x198d680();
   input += synapse0x198d6c0();
   input += synapse0x198d700();
   input += synapse0x198d190();
   input += synapse0x198d1d0();
   input += synapse0x198d850();
   input += synapse0x198d890();
   input += synapse0x198d8d0();
   input += synapse0x198d910();
   input += synapse0x198d950();
   input += synapse0x198d990();
   return input;
}

double NNfunction_dRg::neuron0x198d000() {
   double input = input0x198d000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x198d9d0() {
   double input = -1.07547;
   input += synapse0x198dd10();
   input += synapse0x198dd50();
   input += synapse0x198dd90();
   input += synapse0x198ddd0();
   input += synapse0x198de10();
   input += synapse0x198de50();
   input += synapse0x198de90();
   input += synapse0x198ded0();
   input += synapse0x198df10();
   input += synapse0x198df50();
   input += synapse0x198df90();
   input += synapse0x198dfd0();
   input += synapse0x198e010();
   input += synapse0x198e050();
   input += synapse0x198e090();
   input += synapse0x198e0d0();
   input += synapse0x198db60();
   input += synapse0x198dba0();
   input += synapse0x197e6d0();
   input += synapse0x197e710();
   input += synapse0x197e750();
   input += synapse0x197e790();
   input += synapse0x197e7d0();
   input += synapse0x197e810();
   return input;
}

double NNfunction_dRg::neuron0x198d9d0() {
   double input = input0x198d9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197e850() {
   double input = 0.186775;
   input += synapse0x197eb90();
   input += synapse0x197ebd0();
   input += synapse0x197ec10();
   input += synapse0x197ec50();
   input += synapse0x197ec90();
   input += synapse0x197ecd0();
   input += synapse0x197ed10();
   input += synapse0x197ed50();
   input += synapse0x197ed90();
   input += synapse0x197edd0();
   input += synapse0x197ee10();
   input += synapse0x197ee50();
   input += synapse0x197ee90();
   input += synapse0x197eed0();
   input += synapse0x197ef10();
   input += synapse0x197ef50();
   input += synapse0x197e9e0();
   input += synapse0x197ea20();
   input += synapse0x197f0a0();
   input += synapse0x197f0e0();
   input += synapse0x197f120();
   input += synapse0x197f160();
   input += synapse0x197f1a0();
   input += synapse0x197f1e0();
   return input;
}

double NNfunction_dRg::neuron0x197e850() {
   double input = input0x197e850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197f220() {
   double input = 0.0973932;
   input += synapse0x197f560();
   input += synapse0x197f5a0();
   input += synapse0x197f5e0();
   input += synapse0x197f620();
   input += synapse0x197f660();
   input += synapse0x197f6a0();
   input += synapse0x197f6e0();
   input += synapse0x197f720();
   input += synapse0x197f760();
   input += synapse0x197f7a0();
   input += synapse0x197f7e0();
   input += synapse0x197f820();
   input += synapse0x197f860();
   input += synapse0x197f8a0();
   input += synapse0x197f8e0();
   input += synapse0x197f920();
   input += synapse0x197f3b0();
   input += synapse0x197f3f0();
   input += synapse0x197fa70();
   input += synapse0x197fab0();
   input += synapse0x197faf0();
   input += synapse0x197fb30();
   input += synapse0x197fb70();
   input += synapse0x197fbb0();
   return input;
}

double NNfunction_dRg::neuron0x197f220() {
   double input = input0x197f220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x197fbf0() {
   double input = 1.06912;
   input += synapse0x197ff30();
   input += synapse0x197ff70();
   input += synapse0x197ffb0();
   input += synapse0x197fff0();
   input += synapse0x1980030();
   input += synapse0x1980070();
   input += synapse0x19800b0();
   input += synapse0x19800f0();
   input += synapse0x1980130();
   input += synapse0x1980170();
   input += synapse0x19801b0();
   input += synapse0x19801f0();
   input += synapse0x1980230();
   input += synapse0x1980270();
   input += synapse0x19802b0();
   input += synapse0x19802f0();
   input += synapse0x197fd80();
   input += synapse0x197fdc0();
   input += synapse0x1980440();
   input += synapse0x1980480();
   input += synapse0x19804c0();
   input += synapse0x1980500();
   input += synapse0x1980540();
   input += synapse0x1980580();
   return input;
}

double NNfunction_dRg::neuron0x197fbf0() {
   double input = input0x197fbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1992230() {
   double input = -0.117336;
   input += synapse0x1992450();
   input += synapse0x1992490();
   input += synapse0x19924d0();
   input += synapse0x1992510();
   input += synapse0x1992550();
   input += synapse0x1992590();
   input += synapse0x19925d0();
   input += synapse0x1992610();
   input += synapse0x1992650();
   input += synapse0x1992690();
   input += synapse0x19926d0();
   input += synapse0x1992710();
   input += synapse0x1992750();
   input += synapse0x1992790();
   input += synapse0x19927d0();
   input += synapse0x1992810();
   input += synapse0x19805c0();
   input += synapse0x1980600();
   input += synapse0x1992960();
   input += synapse0x19929a0();
   input += synapse0x19929e0();
   input += synapse0x1992a20();
   input += synapse0x1992a60();
   input += synapse0x1992aa0();
   return input;
}

double NNfunction_dRg::neuron0x1992230() {
   double input = input0x1992230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1992ae0() {
   double input = 0.560753;
   input += synapse0x1992e20();
   input += synapse0x1992e60();
   input += synapse0x1992ea0();
   input += synapse0x1992ee0();
   input += synapse0x1992f20();
   input += synapse0x1992f60();
   input += synapse0x1992fa0();
   input += synapse0x1992fe0();
   input += synapse0x1993020();
   input += synapse0x1993060();
   input += synapse0x19930a0();
   input += synapse0x19930e0();
   input += synapse0x1993120();
   input += synapse0x1993160();
   input += synapse0x19931a0();
   input += synapse0x19931e0();
   input += synapse0x1992c70();
   input += synapse0x1992cb0();
   input += synapse0x1993330();
   input += synapse0x1993370();
   input += synapse0x19933b0();
   input += synapse0x19933f0();
   input += synapse0x1993430();
   input += synapse0x1993470();
   return input;
}

double NNfunction_dRg::neuron0x1992ae0() {
   double input = input0x1992ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x19934b0() {
   double input = -0.0197959;
   input += synapse0x19937f0();
   input += synapse0x1993830();
   input += synapse0x1993870();
   input += synapse0x19938b0();
   input += synapse0x19938f0();
   input += synapse0x1993930();
   input += synapse0x1993970();
   input += synapse0x19939b0();
   input += synapse0x19939f0();
   input += synapse0x1993a30();
   input += synapse0x1993a70();
   input += synapse0x1993ab0();
   input += synapse0x1993af0();
   input += synapse0x1993b30();
   input += synapse0x1993b70();
   input += synapse0x1993bb0();
   input += synapse0x1993640();
   input += synapse0x1993680();
   input += synapse0x1993d00();
   input += synapse0x1993d40();
   input += synapse0x1993d80();
   input += synapse0x1993dc0();
   input += synapse0x1993e00();
   input += synapse0x1993e40();
   return input;
}

double NNfunction_dRg::neuron0x19934b0() {
   double input = input0x19934b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x1993e80() {
   double input = -0.787676;
   input += synapse0x19941c0();
   input += synapse0x1994200();
   input += synapse0x1994240();
   input += synapse0x1994280();
   input += synapse0x19942c0();
   input += synapse0x1994300();
   input += synapse0x1994340();
   input += synapse0x1994380();
   input += synapse0x19943c0();
   input += synapse0x1994400();
   input += synapse0x1994440();
   input += synapse0x1994480();
   input += synapse0x19944c0();
   input += synapse0x1994500();
   input += synapse0x1994540();
   input += synapse0x1994580();
   input += synapse0x1994010();
   input += synapse0x1994050();
   input += synapse0x19946d0();
   input += synapse0x1994710();
   input += synapse0x1994750();
   input += synapse0x1994790();
   input += synapse0x19947d0();
   input += synapse0x1994810();
   return input;
}

double NNfunction_dRg::neuron0x1993e80() {
   double input = input0x1993e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x199b080() {
   double input = 0.535975;
   input += synapse0x172abe0();
   input += synapse0x172ac20();
   input += synapse0x19722c0();
   input += synapse0x1972300();
   input += synapse0x1972c90();
   input += synapse0x1972cd0();
   input += synapse0x1973a60();
   input += synapse0x1973aa0();
   input += synapse0x1974430();
   input += synapse0x1974470();
   input += synapse0x1974e00();
   input += synapse0x1974e40();
   input += synapse0x19758e0();
   input += synapse0x1975920();
   input += synapse0x19762b0();
   input += synapse0x19762f0();
   input += synapse0x1973390();
   input += synapse0x19733d0();
   input += synapse0x1977e60();
   input += synapse0x1977ea0();
   input += synapse0x1978830();
   input += synapse0x1978870();
   input += synapse0x1979200();
   input += synapse0x1979240();
   input += synapse0x1979bd0();
   input += synapse0x1979c10();
   input += synapse0x196dd70();
   input += synapse0x196ddb0();
   input += synapse0x197bcc0();
   input += synapse0x197bd00();
   input += synapse0x197c690();
   input += synapse0x197c6d0();
   input += synapse0x197d060();
   input += synapse0x197d0a0();
   input += synapse0x197da30();
   input += synapse0x197da70();
   input += synapse0x197e400();
   input += synapse0x197e440();
   input += synapse0x1976f50();
   input += synapse0x1976f90();
   input += synapse0x1980800();
   input += synapse0x1980840();
   input += synapse0x1981190();
   input += synapse0x19811d0();
   input += synapse0x1981b60();
   input += synapse0x1981ba0();
   input += synapse0x1982530();
   input += synapse0x1982570();
   input += synapse0x1982f00();
   input += synapse0x1982f40();
   return input;
}

double NNfunction_dRg::neuron0x199b080() {
   double input = input0x199b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x199b420() {
   double input = -0.0230115;
   input += synapse0x1985640();
   input += synapse0x1985680();
   input += synapse0x197ac00();
   input += synapse0x197ac40();
   input += synapse0x1988220();
   input += synapse0x1988260();
   input += synapse0x1988bf0();
   input += synapse0x1988c30();
   input += synapse0x19895c0();
   input += synapse0x1989600();
   input += synapse0x1989f90();
   input += synapse0x1989fd0();
   input += synapse0x198a960();
   input += synapse0x198a9a0();
   input += synapse0x198b330();
   input += synapse0x198b370();
   input += synapse0x198bd00();
   input += synapse0x198bd40();
   input += synapse0x198c6d0();
   input += synapse0x198c710();
   input += synapse0x198d2b0();
   input += synapse0x198d2f0();
   input += synapse0x198dc80();
   input += synapse0x198dcc0();
   input += synapse0x197eb00();
   input += synapse0x197eb40();
   input += synapse0x197f4d0();
   input += synapse0x197f510();
   input += synapse0x197fea0();
   input += synapse0x197fee0();
   input += synapse0x19923c0();
   input += synapse0x1992400();
   input += synapse0x1992d90();
   input += synapse0x1992dd0();
   input += synapse0x1993760();
   input += synapse0x19937a0();
   input += synapse0x1994130();
   input += synapse0x1994170();
   input += synapse0x1970020();
   input += synapse0x1970060();
   input += synapse0x19838d0();
   input += synapse0x1983910();
   input += synapse0x1994850();
   input += synapse0x1994890();
   input += synapse0x19948d0();
   input += synapse0x1994910();
   input += synapse0x199b7c0();
   input += synapse0x199b800();
   input += synapse0x199b840();
   input += synapse0x199b880();
   return input;
}

double NNfunction_dRg::neuron0x199b420() {
   double input = input0x199b420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x199b8c0() {
   double input = 0.353257;
   input += synapse0x199bc00();
   input += synapse0x199bc40();
   input += synapse0x199bc80();
   input += synapse0x199bcc0();
   input += synapse0x199bd00();
   input += synapse0x199bd40();
   input += synapse0x199bd80();
   input += synapse0x199bdc0();
   input += synapse0x199be00();
   input += synapse0x199be40();
   input += synapse0x199be80();
   input += synapse0x199bec0();
   input += synapse0x199bf00();
   input += synapse0x199bf40();
   input += synapse0x199bf80();
   input += synapse0x199bfc0();
   input += synapse0x199ba50();
   input += synapse0x199ba90();
   input += synapse0x199c110();
   input += synapse0x199c150();
   input += synapse0x199c190();
   input += synapse0x199c1d0();
   input += synapse0x199c210();
   input += synapse0x199c250();
   input += synapse0x199c290();
   input += synapse0x199c2d0();
   input += synapse0x199c310();
   input += synapse0x199c350();
   input += synapse0x199c390();
   input += synapse0x199c3d0();
   input += synapse0x199c410();
   input += synapse0x199c450();
   input += synapse0x199c000();
   input += synapse0x199c040();
   input += synapse0x199c080();
   input += synapse0x199c0c0();
   input += synapse0x199c6a0();
   input += synapse0x199c6e0();
   input += synapse0x199c720();
   input += synapse0x199c760();
   input += synapse0x199c7a0();
   input += synapse0x199c7e0();
   input += synapse0x199c820();
   input += synapse0x199c860();
   input += synapse0x199c8a0();
   input += synapse0x199c8e0();
   input += synapse0x199c920();
   input += synapse0x199c960();
   input += synapse0x199c9a0();
   input += synapse0x199c9e0();
   return input;
}

double NNfunction_dRg::neuron0x199b8c0() {
   double input = input0x199b8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x199ca20() {
   double input = 0.492487;
   input += synapse0x199cd60();
   input += synapse0x199cda0();
   input += synapse0x199cde0();
   input += synapse0x199ce20();
   input += synapse0x199ce60();
   input += synapse0x199cea0();
   input += synapse0x199cee0();
   input += synapse0x199cf20();
   input += synapse0x199cf60();
   input += synapse0x199cfa0();
   input += synapse0x199cfe0();
   input += synapse0x199d020();
   input += synapse0x199d060();
   input += synapse0x199d0a0();
   input += synapse0x199d0e0();
   input += synapse0x199d120();
   input += synapse0x199cbb0();
   input += synapse0x199cbf0();
   input += synapse0x199d270();
   input += synapse0x199d2b0();
   input += synapse0x199d2f0();
   input += synapse0x199d330();
   input += synapse0x199d370();
   input += synapse0x199d3b0();
   input += synapse0x199d3f0();
   input += synapse0x199d430();
   input += synapse0x199d470();
   input += synapse0x199d4b0();
   input += synapse0x199d4f0();
   input += synapse0x199d530();
   input += synapse0x199d570();
   input += synapse0x199d5b0();
   input += synapse0x199d160();
   input += synapse0x199d1a0();
   input += synapse0x199d1e0();
   input += synapse0x199d220();
   input += synapse0x199d800();
   input += synapse0x199d840();
   input += synapse0x199d880();
   input += synapse0x199d8c0();
   input += synapse0x199d900();
   input += synapse0x199d940();
   input += synapse0x199d980();
   input += synapse0x199d9c0();
   input += synapse0x199da00();
   input += synapse0x199da40();
   input += synapse0x199da80();
   input += synapse0x199dac0();
   input += synapse0x199db00();
   input += synapse0x199db40();
   return input;
}

double NNfunction_dRg::neuron0x199ca20() {
   double input = input0x199ca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x199db80() {
   double input = 0.344948;
   input += synapse0x199dec0();
   input += synapse0x199df00();
   input += synapse0x199df40();
   input += synapse0x199df80();
   input += synapse0x199dfc0();
   input += synapse0x199e000();
   input += synapse0x199e040();
   input += synapse0x199e080();
   input += synapse0x199e0c0();
   input += synapse0x199e100();
   input += synapse0x199e140();
   input += synapse0x199e180();
   input += synapse0x199e1c0();
   input += synapse0x199e200();
   input += synapse0x199e240();
   input += synapse0x199e280();
   input += synapse0x199dd10();
   input += synapse0x199dd50();
   input += synapse0x199e3d0();
   input += synapse0x199e410();
   input += synapse0x199e450();
   input += synapse0x199e490();
   input += synapse0x199e4d0();
   input += synapse0x199e510();
   input += synapse0x199e550();
   input += synapse0x199e590();
   input += synapse0x199e5d0();
   input += synapse0x199e610();
   input += synapse0x199e650();
   input += synapse0x199e690();
   input += synapse0x199e6d0();
   input += synapse0x199e710();
   input += synapse0x199e2c0();
   input += synapse0x199e300();
   input += synapse0x199e340();
   input += synapse0x199e380();
   input += synapse0x199e960();
   input += synapse0x199e9a0();
   input += synapse0x199e9e0();
   input += synapse0x199ea20();
   input += synapse0x199ea60();
   input += synapse0x199eaa0();
   input += synapse0x199eae0();
   input += synapse0x199eb20();
   input += synapse0x199eb60();
   input += synapse0x199eba0();
   input += synapse0x199ebe0();
   input += synapse0x199ec20();
   input += synapse0x199ec60();
   input += synapse0x199eca0();
   return input;
}

double NNfunction_dRg::neuron0x199db80() {
   double input = input0x199db80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dRg::input0x199ece0() {
   double input = 4.31285;
   input += synapse0x199ef00();
   input += synapse0x199ef40();
   input += synapse0x199ef80();
   input += synapse0x199efc0();
   input += synapse0x199f000();
   return input;
}

double NNfunction_dRg::neuron0x199ece0() {
   double input = input0x199ece0();
   return (input * 1)+0;
}

double NNfunction_dRg::synapse0x196ac90() {
   return (neuron0x196add0()*0.0967234);
}

double NNfunction_dRg::synapse0x196acd0() {
   return (neuron0x196b110()*-0.0374525);
}

double NNfunction_dRg::synapse0x19700b0() {
   return (neuron0x196b450()*-0.0929226);
}

double NNfunction_dRg::synapse0x19700f0() {
   return (neuron0x196b790()*0.731519);
}

double NNfunction_dRg::synapse0x1970130() {
   return (neuron0x196bad0()*-0.196784);
}

double NNfunction_dRg::synapse0x1970170() {
   return (neuron0x196be10()*0.229215);
}

double NNfunction_dRg::synapse0x19701b0() {
   return (neuron0x196c150()*-0.0965994);
}

double NNfunction_dRg::synapse0x19701f0() {
   return (neuron0x196c490()*-0.0945302);
}

double NNfunction_dRg::synapse0x1970230() {
   return (neuron0x196c7d0()*0.116563);
}

double NNfunction_dRg::synapse0x1970270() {
   return (neuron0x196cb10()*0.0103535);
}

double NNfunction_dRg::synapse0x19702b0() {
   return (neuron0x196ce50()*-0.169357);
}

double NNfunction_dRg::synapse0x19702f0() {
   return (neuron0x196d190()*0.0745801);
}

double NNfunction_dRg::synapse0x1970330() {
   return (neuron0x196d4d0()*0.209239);
}

double NNfunction_dRg::synapse0x1970370() {
   return (neuron0x196d810()*-0.174548);
}

double NNfunction_dRg::synapse0x19703b0() {
   return (neuron0x196db50()*-0.257558);
}

double NNfunction_dRg::synapse0x19703f0() {
   return (neuron0x196de90()*-0.121292);
}

double NNfunction_dRg::synapse0x196ac00() {
   return (neuron0x196e1d0()*0.00950851);
}

double NNfunction_dRg::synapse0x196ac40() {
   return (neuron0x196e730()*-0.677909);
}

double NNfunction_dRg::synapse0x171c840() {
   return (neuron0x196e950()*-0.139949);
}

double NNfunction_dRg::synapse0x171c880() {
   return (neuron0x196ec90()*0.136001);
}

double NNfunction_dRg::synapse0x1970650() {
   return (neuron0x196efd0()*-0.0333057);
}

double NNfunction_dRg::synapse0x1970690() {
   return (neuron0x196f310()*-0.128763);
}

double NNfunction_dRg::synapse0x19706d0() {
   return (neuron0x196f650()*-0.0586162);
}

double NNfunction_dRg::synapse0x1970710() {
   return (neuron0x196f990()*-0.0198149);
}

double NNfunction_dRg::synapse0x1970a90() {
   return (neuron0x196add0()*-0.000429767);
}

double NNfunction_dRg::synapse0x1970ad0() {
   return (neuron0x196b110()*-0.00378627);
}

double NNfunction_dRg::synapse0x1970b10() {
   return (neuron0x196b450()*-0.00468184);
}

double NNfunction_dRg::synapse0x1970b50() {
   return (neuron0x196b790()*4.34561);
}

double NNfunction_dRg::synapse0x1970b90() {
   return (neuron0x196bad0()*0.00924083);
}

double NNfunction_dRg::synapse0x1970bd0() {
   return (neuron0x196be10()*-0.00255598);
}

double NNfunction_dRg::synapse0x1970c10() {
   return (neuron0x196c150()*0.00055002);
}

double NNfunction_dRg::synapse0x1970c50() {
   return (neuron0x196c490()*-0.000415721);
}

double NNfunction_dRg::synapse0x1970c90() {
   return (neuron0x196c7d0()*0.000788363);
}

double NNfunction_dRg::synapse0x1970540() {
   return (neuron0x196cb10()*0.00470377);
}

double NNfunction_dRg::synapse0x1970580() {
   return (neuron0x196ce50()*0.00743767);
}

double NNfunction_dRg::synapse0x19705c0() {
   return (neuron0x196d190()*-0.00858203);
}

double NNfunction_dRg::synapse0x1970600() {
   return (neuron0x196d4d0()*-0.00666836);
}

double NNfunction_dRg::synapse0x1970ee0() {
   return (neuron0x196d810()*0.0120413);
}

double NNfunction_dRg::synapse0x1970f20() {
   return (neuron0x196db50()*0.0122263);
}

double NNfunction_dRg::synapse0x1970f60() {
   return (neuron0x196de90()*-0.00151804);
}

double NNfunction_dRg::synapse0x19708e0() {
   return (neuron0x196e1d0()*0.0126815);
}

double NNfunction_dRg::synapse0x1970920() {
   return (neuron0x196e730()*0.33747);
}

double NNfunction_dRg::synapse0x19710b0() {
   return (neuron0x196e950()*-0.0022181);
}

double NNfunction_dRg::synapse0x19710f0() {
   return (neuron0x196ec90()*-0.00684323);
}

double NNfunction_dRg::synapse0x1971130() {
   return (neuron0x196efd0()*-0.000438284);
}

double NNfunction_dRg::synapse0x1971170() {
   return (neuron0x196f310()*-0.00394267);
}

double NNfunction_dRg::synapse0x19711b0() {
   return (neuron0x196f650()*0.00139366);
}

double NNfunction_dRg::synapse0x19711f0() {
   return (neuron0x196f990()*0.00525096);
}

double NNfunction_dRg::synapse0x1971570() {
   return (neuron0x196add0()*-0.00753834);
}

double NNfunction_dRg::synapse0x19715b0() {
   return (neuron0x196b110()*-0.0172195);
}

double NNfunction_dRg::synapse0x19715f0() {
   return (neuron0x196b450()*-0.144072);
}

double NNfunction_dRg::synapse0x1971630() {
   return (neuron0x196b790()*-1.68108);
}

double NNfunction_dRg::synapse0x1971670() {
   return (neuron0x196bad0()*-0.011178);
}

double NNfunction_dRg::synapse0x19716b0() {
   return (neuron0x196be10()*-0.00205262);
}

double NNfunction_dRg::synapse0x19716f0() {
   return (neuron0x196c150()*0.100279);
}

double NNfunction_dRg::synapse0x1971730() {
   return (neuron0x196c490()*0.00750106);
}

double NNfunction_dRg::synapse0x1971770() {
   return (neuron0x196c7d0()*0.135048);
}

double NNfunction_dRg::synapse0x19717b0() {
   return (neuron0x196cb10()*-0.0727454);
}

double NNfunction_dRg::synapse0x19717f0() {
   return (neuron0x196ce50()*-0.195185);
}

double NNfunction_dRg::synapse0x1971830() {
   return (neuron0x196d190()*0.209931);
}

double NNfunction_dRg::synapse0x1971870() {
   return (neuron0x196d4d0()*0.345022);
}

double NNfunction_dRg::synapse0x19718b0() {
   return (neuron0x196d810()*0.275526);
}

double NNfunction_dRg::synapse0x19718f0() {
   return (neuron0x196db50()*0.158345);
}

double NNfunction_dRg::synapse0x1971930() {
   return (neuron0x196de90()*0.0883308);
}

double NNfunction_dRg::synapse0x19713c0() {
   return (neuron0x196e1d0()*0.10747);
}

double NNfunction_dRg::synapse0x1971400() {
   return (neuron0x196e730()*-0.616767);
}

double NNfunction_dRg::synapse0x171cc70() {
   return (neuron0x196e950()*0.318858);
}

double NNfunction_dRg::synapse0x172a3d0() {
   return (neuron0x196ec90()*0.203151);
}

double NNfunction_dRg::synapse0x172a410() {
   return (neuron0x196efd0()*0.0448636);
}

double NNfunction_dRg::synapse0x1959e60() {
   return (neuron0x196f310()*-0.0746871);
}

double NNfunction_dRg::synapse0x1959ea0() {
   return (neuron0x196f650()*0.0234475);
}

double NNfunction_dRg::synapse0x1959ee0() {
   return (neuron0x196f990()*0.0233926);
}

double NNfunction_dRg::synapse0x172ac70() {
   return (neuron0x196add0()*0.0317409);
}

double NNfunction_dRg::synapse0x1970e60() {
   return (neuron0x196b110()*-0.19444);
}

double NNfunction_dRg::synapse0x1970ea0() {
   return (neuron0x196b450()*-0.0107889);
}

double NNfunction_dRg::synapse0x1971a80() {
   return (neuron0x196b790()*0.943584);
}

double NNfunction_dRg::synapse0x1971ac0() {
   return (neuron0x196bad0()*-0.257375);
}

double NNfunction_dRg::synapse0x1971b00() {
   return (neuron0x196be10()*0.146541);
}

double NNfunction_dRg::synapse0x1971b40() {
   return (neuron0x196c150()*-0.174464);
}

double NNfunction_dRg::synapse0x1971b80() {
   return (neuron0x196c490()*-0.119964);
}

double NNfunction_dRg::synapse0x1971bc0() {
   return (neuron0x196c7d0()*0.0340495);
}

double NNfunction_dRg::synapse0x1971c00() {
   return (neuron0x196cb10()*0.035452);
}

double NNfunction_dRg::synapse0x1971c40() {
   return (neuron0x196ce50()*0.212023);
}

double NNfunction_dRg::synapse0x1971c80() {
   return (neuron0x196d190()*-0.128489);
}

double NNfunction_dRg::synapse0x1971cc0() {
   return (neuron0x196d4d0()*0.537547);
}

double NNfunction_dRg::synapse0x1971d00() {
   return (neuron0x196d810()*0.0515954);
}

double NNfunction_dRg::synapse0x1971d40() {
   return (neuron0x196db50()*-0.166704);
}

double NNfunction_dRg::synapse0x1971d80() {
   return (neuron0x196de90()*-0.0229238);
}

double NNfunction_dRg::synapse0x196ad10() {
   return (neuron0x196e1d0()*0.202636);
}

double NNfunction_dRg::synapse0x196ad50() {
   return (neuron0x196e730()*-0.201178);
}

double NNfunction_dRg::synapse0x196ad90() {
   return (neuron0x196e950()*-0.0216639);
}

double NNfunction_dRg::synapse0x1971ed0() {
   return (neuron0x196ec90()*0.14028);
}

double NNfunction_dRg::synapse0x1971f10() {
   return (neuron0x196efd0()*-0.0447563);
}

double NNfunction_dRg::synapse0x1971f50() {
   return (neuron0x196f310()*-0.0420931);
}

double NNfunction_dRg::synapse0x1971f90() {
   return (neuron0x196f650()*0.0816254);
}

double NNfunction_dRg::synapse0x1971fd0() {
   return (neuron0x196f990()*0.132843);
}

double NNfunction_dRg::synapse0x1972350() {
   return (neuron0x196add0()*0.00595774);
}

double NNfunction_dRg::synapse0x1972390() {
   return (neuron0x196b110()*0.0118452);
}

double NNfunction_dRg::synapse0x19723d0() {
   return (neuron0x196b450()*-0.0267123);
}

double NNfunction_dRg::synapse0x1972410() {
   return (neuron0x196b790()*1.46875);
}

double NNfunction_dRg::synapse0x1972450() {
   return (neuron0x196bad0()*-0.0716123);
}

double NNfunction_dRg::synapse0x1972490() {
   return (neuron0x196be10()*-0.0363407);
}

double NNfunction_dRg::synapse0x19724d0() {
   return (neuron0x196c150()*-0.0155588);
}

double NNfunction_dRg::synapse0x1972510() {
   return (neuron0x196c490()*0.000429789);
}

double NNfunction_dRg::synapse0x1972550() {
   return (neuron0x196c7d0()*-0.00309976);
}

double NNfunction_dRg::synapse0x1972590() {
   return (neuron0x196cb10()*0.00945514);
}

double NNfunction_dRg::synapse0x19725d0() {
   return (neuron0x196ce50()*0.0290938);
}

double NNfunction_dRg::synapse0x1972610() {
   return (neuron0x196d190()*0.142866);
}

double NNfunction_dRg::synapse0x1972650() {
   return (neuron0x196d4d0()*0.079708);
}

double NNfunction_dRg::synapse0x1972690() {
   return (neuron0x196d810()*0.130802);
}

double NNfunction_dRg::synapse0x19726d0() {
   return (neuron0x196db50()*0.00902197);
}

double NNfunction_dRg::synapse0x1972710() {
   return (neuron0x196de90()*-0.00210108);
}

double NNfunction_dRg::synapse0x19721a0() {
   return (neuron0x196e1d0()*0.100798);
}

double NNfunction_dRg::synapse0x19721e0() {
   return (neuron0x196e730()*0.679862);
}

double NNfunction_dRg::synapse0x1972860() {
   return (neuron0x196e950()*0.10091);
}

double NNfunction_dRg::synapse0x19728a0() {
   return (neuron0x196ec90()*0.0592444);
}

double NNfunction_dRg::synapse0x19728e0() {
   return (neuron0x196efd0()*-0.030635);
}

double NNfunction_dRg::synapse0x1972920() {
   return (neuron0x196f310()*0.0324696);
}

double NNfunction_dRg::synapse0x1972960() {
   return (neuron0x196f650()*0.00874585);
}

double NNfunction_dRg::synapse0x19729a0() {
   return (neuron0x196f990()*-0.0236501);
}

double NNfunction_dRg::synapse0x1972d20() {
   return (neuron0x196add0()*0.011557);
}

double NNfunction_dRg::synapse0x1972d60() {
   return (neuron0x196b110()*0.00276208);
}

double NNfunction_dRg::synapse0x1972da0() {
   return (neuron0x196b450()*0.00541676);
}

double NNfunction_dRg::synapse0x1972de0() {
   return (neuron0x196b790()*2.17734);
}

double NNfunction_dRg::synapse0x1972e20() {
   return (neuron0x196bad0()*-0.00151853);
}

double NNfunction_dRg::synapse0x1972e60() {
   return (neuron0x196be10()*0.00519537);
}

double NNfunction_dRg::synapse0x1972ea0() {
   return (neuron0x196c150()*0.00565792);
}

double NNfunction_dRg::synapse0x1972ee0() {
   return (neuron0x196c490()*0.00750898);
}

double NNfunction_dRg::synapse0x1972f20() {
   return (neuron0x196c7d0()*0.0411735);
}

double NNfunction_dRg::synapse0x172a740() {
   return (neuron0x196cb10()*-0.0121365);
}

double NNfunction_dRg::synapse0x172a780() {
   return (neuron0x196ce50()*-0.0557005);
}

double NNfunction_dRg::synapse0x172a7c0() {
   return (neuron0x196d190()*-0.0354915);
}

double NNfunction_dRg::synapse0x172a800() {
   return (neuron0x196d4d0()*-0.0489909);
}

double NNfunction_dRg::synapse0x172a840() {
   return (neuron0x196d810()*-0.0191876);
}

double NNfunction_dRg::synapse0x172a880() {
   return (neuron0x196db50()*-0.0206106);
}

double NNfunction_dRg::synapse0x172a8c0() {
   return (neuron0x196de90()*-0.00318916);
}

double NNfunction_dRg::synapse0x1972b70() {
   return (neuron0x196e1d0()*-0.0172566);
}

double NNfunction_dRg::synapse0x1972bb0() {
   return (neuron0x196e730()*0.302555);
}

double NNfunction_dRg::synapse0x172aa10() {
   return (neuron0x196e950()*-0.0354441);
}

double NNfunction_dRg::synapse0x172aa50() {
   return (neuron0x196ec90()*0.00659823);
}

double NNfunction_dRg::synapse0x172aa90() {
   return (neuron0x196efd0()*-0.0026411);
}

double NNfunction_dRg::synapse0x172aad0() {
   return (neuron0x196f310()*-0.00562947);
}

double NNfunction_dRg::synapse0x172ab10() {
   return (neuron0x196f650()*0.000494898);
}

double NNfunction_dRg::synapse0x1973770() {
   return (neuron0x196f990()*-0.0105858);
}

double NNfunction_dRg::synapse0x1973af0() {
   return (neuron0x196add0()*-0.00533391);
}

double NNfunction_dRg::synapse0x1973b30() {
   return (neuron0x196b110()*0.0268477);
}

double NNfunction_dRg::synapse0x1973b70() {
   return (neuron0x196b450()*0.0043979);
}

double NNfunction_dRg::synapse0x1973bb0() {
   return (neuron0x196b790()*-16.1299);
}

double NNfunction_dRg::synapse0x1973bf0() {
   return (neuron0x196bad0()*-0.0115963);
}

double NNfunction_dRg::synapse0x1973c30() {
   return (neuron0x196be10()*-0.00699062);
}

double NNfunction_dRg::synapse0x1973c70() {
   return (neuron0x196c150()*-0.00822724);
}

double NNfunction_dRg::synapse0x1973cb0() {
   return (neuron0x196c490()*-0.00756706);
}

double NNfunction_dRg::synapse0x1973cf0() {
   return (neuron0x196c7d0()*0.00370028);
}

double NNfunction_dRg::synapse0x1973d30() {
   return (neuron0x196cb10()*-0.0126977);
}

double NNfunction_dRg::synapse0x1973d70() {
   return (neuron0x196ce50()*-0.00518111);
}

double NNfunction_dRg::synapse0x1973db0() {
   return (neuron0x196d190()*0.0378398);
}

double NNfunction_dRg::synapse0x1973df0() {
   return (neuron0x196d4d0()*0.0423296);
}

double NNfunction_dRg::synapse0x1973e30() {
   return (neuron0x196d810()*-0.00557374);
}

double NNfunction_dRg::synapse0x1973e70() {
   return (neuron0x196db50()*-0.000668148);
}

double NNfunction_dRg::synapse0x1973eb0() {
   return (neuron0x196de90()*-0.00279218);
}

double NNfunction_dRg::synapse0x1973940() {
   return (neuron0x196e1d0()*0.00443839);
}

double NNfunction_dRg::synapse0x1973980() {
   return (neuron0x196e730()*0.0194583);
}

double NNfunction_dRg::synapse0x1974000() {
   return (neuron0x196e950()*0.0290378);
}

double NNfunction_dRg::synapse0x1974040() {
   return (neuron0x196ec90()*0.0133001);
}

double NNfunction_dRg::synapse0x1974080() {
   return (neuron0x196efd0()*0.00494623);
}

double NNfunction_dRg::synapse0x19740c0() {
   return (neuron0x196f310()*0.0192351);
}

double NNfunction_dRg::synapse0x1974100() {
   return (neuron0x196f650()*-0.00774294);
}

double NNfunction_dRg::synapse0x1974140() {
   return (neuron0x196f990()*-0.0115239);
}

double NNfunction_dRg::synapse0x19744c0() {
   return (neuron0x196add0()*-0.0351069);
}

double NNfunction_dRg::synapse0x1974500() {
   return (neuron0x196b110()*0.0538757);
}

double NNfunction_dRg::synapse0x1974540() {
   return (neuron0x196b450()*-0.0518136);
}

double NNfunction_dRg::synapse0x1974580() {
   return (neuron0x196b790()*1.29193);
}

double NNfunction_dRg::synapse0x19745c0() {
   return (neuron0x196bad0()*-0.0771936);
}

double NNfunction_dRg::synapse0x1974600() {
   return (neuron0x196be10()*0.0304396);
}

double NNfunction_dRg::synapse0x1974640() {
   return (neuron0x196c150()*0.131517);
}

double NNfunction_dRg::synapse0x1974680() {
   return (neuron0x196c490()*0.017593);
}

double NNfunction_dRg::synapse0x19746c0() {
   return (neuron0x196c7d0()*-0.0456678);
}

double NNfunction_dRg::synapse0x1974700() {
   return (neuron0x196cb10()*0.0382475);
}

double NNfunction_dRg::synapse0x1974740() {
   return (neuron0x196ce50()*-0.00133959);
}

double NNfunction_dRg::synapse0x1974780() {
   return (neuron0x196d190()*0.177325);
}

double NNfunction_dRg::synapse0x19747c0() {
   return (neuron0x196d4d0()*0.000435751);
}

double NNfunction_dRg::synapse0x1974800() {
   return (neuron0x196d810()*0.0597604);
}

double NNfunction_dRg::synapse0x1974840() {
   return (neuron0x196db50()*-0.0633855);
}

double NNfunction_dRg::synapse0x1974880() {
   return (neuron0x196de90()*-0.870123);
}

double NNfunction_dRg::synapse0x1974310() {
   return (neuron0x196e1d0()*0.13552);
}

double NNfunction_dRg::synapse0x1974350() {
   return (neuron0x196e730()*0.148373);
}

double NNfunction_dRg::synapse0x19749d0() {
   return (neuron0x196e950()*0.0942885);
}

double NNfunction_dRg::synapse0x1974a10() {
   return (neuron0x196ec90()*0.0598766);
}

double NNfunction_dRg::synapse0x1974a50() {
   return (neuron0x196efd0()*0.0850381);
}

double NNfunction_dRg::synapse0x1974a90() {
   return (neuron0x196f310()*-0.0205687);
}

double NNfunction_dRg::synapse0x1974ad0() {
   return (neuron0x196f650()*0.0540433);
}

double NNfunction_dRg::synapse0x1974b10() {
   return (neuron0x196f990()*0.0180806);
}

double NNfunction_dRg::synapse0x196e620() {
   return (neuron0x196add0()*0.000843558);
}

double NNfunction_dRg::synapse0x196e660() {
   return (neuron0x196b110()*-0.00161933);
}

double NNfunction_dRg::synapse0x196e6a0() {
   return (neuron0x196b450()*0.00566335);
}

double NNfunction_dRg::synapse0x196e6e0() {
   return (neuron0x196b790()*2.18364);
}

double NNfunction_dRg::synapse0x19750a0() {
   return (neuron0x196bad0()*5.91056e-05);
}

double NNfunction_dRg::synapse0x19750e0() {
   return (neuron0x196be10()*-0.00936704);
}

double NNfunction_dRg::synapse0x1975120() {
   return (neuron0x196c150()*-0.00279411);
}

double NNfunction_dRg::synapse0x1975160() {
   return (neuron0x196c490()*0.00398553);
}

double NNfunction_dRg::synapse0x19751a0() {
   return (neuron0x196c7d0()*0.00441228);
}

double NNfunction_dRg::synapse0x19751e0() {
   return (neuron0x196cb10()*-0.000371352);
}

double NNfunction_dRg::synapse0x1975220() {
   return (neuron0x196ce50()*0.0178961);
}

double NNfunction_dRg::synapse0x1975260() {
   return (neuron0x196d190()*-0.0480892);
}

double NNfunction_dRg::synapse0x19752a0() {
   return (neuron0x196d4d0()*-0.0397253);
}

double NNfunction_dRg::synapse0x19752e0() {
   return (neuron0x196d810()*0.0103029);
}

double NNfunction_dRg::synapse0x1975320() {
   return (neuron0x196db50()*-0.016377);
}

double NNfunction_dRg::synapse0x1975360() {
   return (neuron0x196de90()*-0.016945);
}

double NNfunction_dRg::synapse0x1974ce0() {
   return (neuron0x196e1d0()*0.00358159);
}

double NNfunction_dRg::synapse0x1974d20() {
   return (neuron0x196e730()*0.793871);
}

double NNfunction_dRg::synapse0x19754b0() {
   return (neuron0x196e950()*-0.0277647);
}

double NNfunction_dRg::synapse0x19754f0() {
   return (neuron0x196ec90()*-0.00663475);
}

double NNfunction_dRg::synapse0x1975530() {
   return (neuron0x196efd0()*0.00166048);
}

double NNfunction_dRg::synapse0x1975570() {
   return (neuron0x196f310()*-0.00689917);
}

double NNfunction_dRg::synapse0x19755b0() {
   return (neuron0x196f650()*-0.00196456);
}

double NNfunction_dRg::synapse0x19755f0() {
   return (neuron0x196f990()*0.00501723);
}

double NNfunction_dRg::synapse0x1975970() {
   return (neuron0x196add0()*0.00537996);
}

double NNfunction_dRg::synapse0x19759b0() {
   return (neuron0x196b110()*-0.077032);
}

double NNfunction_dRg::synapse0x19759f0() {
   return (neuron0x196b450()*0.0408582);
}

double NNfunction_dRg::synapse0x1975a30() {
   return (neuron0x196b790()*-0.450395);
}

double NNfunction_dRg::synapse0x1975a70() {
   return (neuron0x196bad0()*-0.0247727);
}

double NNfunction_dRg::synapse0x1975ab0() {
   return (neuron0x196be10()*-0.0181696);
}

double NNfunction_dRg::synapse0x1975af0() {
   return (neuron0x196c150()*0.121046);
}

double NNfunction_dRg::synapse0x1975b30() {
   return (neuron0x196c490()*0.0515848);
}

double NNfunction_dRg::synapse0x1975b70() {
   return (neuron0x196c7d0()*-0.104465);
}

double NNfunction_dRg::synapse0x1975bb0() {
   return (neuron0x196cb10()*-0.145242);
}

double NNfunction_dRg::synapse0x1975bf0() {
   return (neuron0x196ce50()*0.638315);
}

double NNfunction_dRg::synapse0x1975c30() {
   return (neuron0x196d190()*-0.319688);
}

double NNfunction_dRg::synapse0x1975c70() {
   return (neuron0x196d4d0()*0.0159236);
}

double NNfunction_dRg::synapse0x1975cb0() {
   return (neuron0x196d810()*0.0791695);
}

double NNfunction_dRg::synapse0x1975cf0() {
   return (neuron0x196db50()*0.0713505);
}

double NNfunction_dRg::synapse0x1975d30() {
   return (neuron0x196de90()*0.156232);
}

double NNfunction_dRg::synapse0x19757c0() {
   return (neuron0x196e1d0()*0.135488);
}

double NNfunction_dRg::synapse0x1975800() {
   return (neuron0x196e730()*-0.299841);
}

double NNfunction_dRg::synapse0x1975e80() {
   return (neuron0x196e950()*-0.0150214);
}

double NNfunction_dRg::synapse0x1975ec0() {
   return (neuron0x196ec90()*-0.149943);
}

double NNfunction_dRg::synapse0x1975f00() {
   return (neuron0x196efd0()*-0.0320302);
}

double NNfunction_dRg::synapse0x1975f40() {
   return (neuron0x196f310()*0.00142533);
}

double NNfunction_dRg::synapse0x1975f80() {
   return (neuron0x196f650()*-0.060216);
}

double NNfunction_dRg::synapse0x1975fc0() {
   return (neuron0x196f990()*0.0677934);
}

double NNfunction_dRg::synapse0x1976340() {
   return (neuron0x196add0()*0.0164542);
}

double NNfunction_dRg::synapse0x1976380() {
   return (neuron0x196b110()*0.145432);
}

double NNfunction_dRg::synapse0x19763c0() {
   return (neuron0x196b450()*-0.0117579);
}

double NNfunction_dRg::synapse0x1976400() {
   return (neuron0x196b790()*0.863953);
}

double NNfunction_dRg::synapse0x1976440() {
   return (neuron0x196bad0()*-0.449418);
}

double NNfunction_dRg::synapse0x1976480() {
   return (neuron0x196be10()*-0.00731157);
}

double NNfunction_dRg::synapse0x19764c0() {
   return (neuron0x196c150()*-0.300791);
}

double NNfunction_dRg::synapse0x1976500() {
   return (neuron0x196c490()*0.269993);
}

double NNfunction_dRg::synapse0x1976540() {
   return (neuron0x196c7d0()*0.00262101);
}

double NNfunction_dRg::synapse0x1976580() {
   return (neuron0x196cb10()*0.0392196);
}

double NNfunction_dRg::synapse0x19765c0() {
   return (neuron0x196ce50()*0.00906885);
}

double NNfunction_dRg::synapse0x1976600() {
   return (neuron0x196d190()*0.137643);
}

double NNfunction_dRg::synapse0x1976640() {
   return (neuron0x196d4d0()*-0.163444);
}

double NNfunction_dRg::synapse0x1976680() {
   return (neuron0x196d810()*0.0531531);
}

double NNfunction_dRg::synapse0x19766c0() {
   return (neuron0x196db50()*-0.33288);
}

double NNfunction_dRg::synapse0x1976700() {
   return (neuron0x196de90()*0.354434);
}

double NNfunction_dRg::synapse0x1976190() {
   return (neuron0x196e1d0()*0.0934827);
}

double NNfunction_dRg::synapse0x19761d0() {
   return (neuron0x196e730()*0.456997);
}

double NNfunction_dRg::synapse0x1972f60() {
   return (neuron0x196e950()*0.00971816);
}

double NNfunction_dRg::synapse0x1972fa0() {
   return (neuron0x196ec90()*0.0125734);
}

double NNfunction_dRg::synapse0x1972fe0() {
   return (neuron0x196efd0()*0.0374004);
}

double NNfunction_dRg::synapse0x1973020() {
   return (neuron0x196f310()*0.0608562);
}

double NNfunction_dRg::synapse0x1973060() {
   return (neuron0x196f650()*-0.0383696);
}

double NNfunction_dRg::synapse0x19730a0() {
   return (neuron0x196f990()*0.0466071);
}

double NNfunction_dRg::synapse0x1973420() {
   return (neuron0x196add0()*0.0100063);
}

double NNfunction_dRg::synapse0x1973460() {
   return (neuron0x196b110()*0.0074431);
}

double NNfunction_dRg::synapse0x19734a0() {
   return (neuron0x196b450()*0.0105687);
}

double NNfunction_dRg::synapse0x19734e0() {
   return (neuron0x196b790()*-4.19065);
}

double NNfunction_dRg::synapse0x1973520() {
   return (neuron0x196bad0()*-0.010129);
}

double NNfunction_dRg::synapse0x1973560() {
   return (neuron0x196be10()*0.0226269);
}

double NNfunction_dRg::synapse0x19735a0() {
   return (neuron0x196c150()*0.00111921);
}

double NNfunction_dRg::synapse0x19735e0() {
   return (neuron0x196c490()*0.026901);
}

double NNfunction_dRg::synapse0x1973620() {
   return (neuron0x196c7d0()*0.00439242);
}

double NNfunction_dRg::synapse0x1973660() {
   return (neuron0x196cb10()*-0.0275204);
}

double NNfunction_dRg::synapse0x19736a0() {
   return (neuron0x196ce50()*-0.0112524);
}

double NNfunction_dRg::synapse0x19736e0() {
   return (neuron0x196d190()*0.0556553);
}

double NNfunction_dRg::synapse0x1973720() {
   return (neuron0x196d4d0()*0.0616847);
}

double NNfunction_dRg::synapse0x1977860() {
   return (neuron0x196d810()*-0.0474281);
}

double NNfunction_dRg::synapse0x19778a0() {
   return (neuron0x196db50()*-0.000790015);
}

double NNfunction_dRg::synapse0x19778e0() {
   return (neuron0x196de90()*0.0558406);
}

double NNfunction_dRg::synapse0x1973270() {
   return (neuron0x196e1d0()*-0.0517531);
}

double NNfunction_dRg::synapse0x19732b0() {
   return (neuron0x196e730()*-4.41567);
}

double NNfunction_dRg::synapse0x1977a30() {
   return (neuron0x196e950()*0.0297634);
}

double NNfunction_dRg::synapse0x1977a70() {
   return (neuron0x196ec90()*0.0246056);
}

double NNfunction_dRg::synapse0x1977ab0() {
   return (neuron0x196efd0()*-0.0162987);
}

double NNfunction_dRg::synapse0x1977af0() {
   return (neuron0x196f310()*0.0131849);
}

double NNfunction_dRg::synapse0x1977b30() {
   return (neuron0x196f650()*-0.0202216);
}

double NNfunction_dRg::synapse0x1977b70() {
   return (neuron0x196f990()*-0.00845955);
}

double NNfunction_dRg::synapse0x1977ef0() {
   return (neuron0x196add0()*-0.00440629);
}

double NNfunction_dRg::synapse0x1977f30() {
   return (neuron0x196b110()*-1.0136e-05);
}

double NNfunction_dRg::synapse0x1977f70() {
   return (neuron0x196b450()*0.00337175);
}

double NNfunction_dRg::synapse0x1977fb0() {
   return (neuron0x196b790()*0.00271984);
}

double NNfunction_dRg::synapse0x1977ff0() {
   return (neuron0x196bad0()*0.00786272);
}

double NNfunction_dRg::synapse0x1978030() {
   return (neuron0x196be10()*0.00445865);
}

double NNfunction_dRg::synapse0x1978070() {
   return (neuron0x196c150()*0.00767204);
}

double NNfunction_dRg::synapse0x19780b0() {
   return (neuron0x196c490()*-0.00150204);
}

double NNfunction_dRg::synapse0x19780f0() {
   return (neuron0x196c7d0()*-0.0680329);
}

double NNfunction_dRg::synapse0x1978130() {
   return (neuron0x196cb10()*-0.0383879);
}

double NNfunction_dRg::synapse0x1978170() {
   return (neuron0x196ce50()*-0.0545691);
}

double NNfunction_dRg::synapse0x19781b0() {
   return (neuron0x196d190()*0.000721038);
}

double NNfunction_dRg::synapse0x19781f0() {
   return (neuron0x196d4d0()*0.00172576);
}

double NNfunction_dRg::synapse0x1978230() {
   return (neuron0x196d810()*-0.000384372);
}

double NNfunction_dRg::synapse0x1978270() {
   return (neuron0x196db50()*0.00219504);
}

double NNfunction_dRg::synapse0x19782b0() {
   return (neuron0x196de90()*0.0049742);
}

double NNfunction_dRg::synapse0x1977d40() {
   return (neuron0x196e1d0()*0.00525858);
}

double NNfunction_dRg::synapse0x1977d80() {
   return (neuron0x196e730()*0.451172);
}

double NNfunction_dRg::synapse0x1978400() {
   return (neuron0x196e950()*0.00619075);
}

double NNfunction_dRg::synapse0x1978440() {
   return (neuron0x196ec90()*-0.00687817);
}

double NNfunction_dRg::synapse0x1978480() {
   return (neuron0x196efd0()*1.92657e-05);
}

double NNfunction_dRg::synapse0x19784c0() {
   return (neuron0x196f310()*-0.0016946);
}

double NNfunction_dRg::synapse0x1978500() {
   return (neuron0x196f650()*0.00211346);
}

double NNfunction_dRg::synapse0x1978540() {
   return (neuron0x196f990()*0.00419183);
}

double NNfunction_dRg::synapse0x19788c0() {
   return (neuron0x196add0()*0.00124119);
}

double NNfunction_dRg::synapse0x1978900() {
   return (neuron0x196b110()*-0.00998129);
}

double NNfunction_dRg::synapse0x1978940() {
   return (neuron0x196b450()*-0.000699445);
}

double NNfunction_dRg::synapse0x1978980() {
   return (neuron0x196b790()*5.30015);
}

double NNfunction_dRg::synapse0x19789c0() {
   return (neuron0x196bad0()*0.00334976);
}

double NNfunction_dRg::synapse0x1978a00() {
   return (neuron0x196be10()*-0.00682038);
}

double NNfunction_dRg::synapse0x1978a40() {
   return (neuron0x196c150()*-0.00300823);
}

double NNfunction_dRg::synapse0x1978a80() {
   return (neuron0x196c490()*0.000349607);
}

double NNfunction_dRg::synapse0x1978ac0() {
   return (neuron0x196c7d0()*-0.00268141);
}

double NNfunction_dRg::synapse0x1978b00() {
   return (neuron0x196cb10()*0.00331514);
}

double NNfunction_dRg::synapse0x1978b40() {
   return (neuron0x196ce50()*0.00801184);
}

double NNfunction_dRg::synapse0x1978b80() {
   return (neuron0x196d190()*0.0203741);
}

double NNfunction_dRg::synapse0x1978bc0() {
   return (neuron0x196d4d0()*0.0138181);
}

double NNfunction_dRg::synapse0x1978c00() {
   return (neuron0x196d810()*-0.0172927);
}

double NNfunction_dRg::synapse0x1978c40() {
   return (neuron0x196db50()*0.0140033);
}

double NNfunction_dRg::synapse0x1978c80() {
   return (neuron0x196de90()*0.0194336);
}

double NNfunction_dRg::synapse0x1978710() {
   return (neuron0x196e1d0()*-0.016593);
}

double NNfunction_dRg::synapse0x1978750() {
   return (neuron0x196e730()*0.218487);
}

double NNfunction_dRg::synapse0x1978dd0() {
   return (neuron0x196e950()*0.00979118);
}

double NNfunction_dRg::synapse0x1978e10() {
   return (neuron0x196ec90()*-0.0115715);
}

double NNfunction_dRg::synapse0x1978e50() {
   return (neuron0x196efd0()*-0.00138286);
}

double NNfunction_dRg::synapse0x1978e90() {
   return (neuron0x196f310()*-0.00128764);
}

double NNfunction_dRg::synapse0x1978ed0() {
   return (neuron0x196f650()*0.00434011);
}

double NNfunction_dRg::synapse0x1978f10() {
   return (neuron0x196f990()*0.0108086);
}

double NNfunction_dRg::synapse0x1979290() {
   return (neuron0x196add0()*0.0920858);
}

double NNfunction_dRg::synapse0x19792d0() {
   return (neuron0x196b110()*-0.139);
}

double NNfunction_dRg::synapse0x1979310() {
   return (neuron0x196b450()*0.078485);
}

double NNfunction_dRg::synapse0x1979350() {
   return (neuron0x196b790()*-0.429109);
}

double NNfunction_dRg::synapse0x1979390() {
   return (neuron0x196bad0()*0.042538);
}

double NNfunction_dRg::synapse0x19793d0() {
   return (neuron0x196be10()*0.114333);
}

double NNfunction_dRg::synapse0x1979410() {
   return (neuron0x196c150()*0.0296059);
}

double NNfunction_dRg::synapse0x1979450() {
   return (neuron0x196c490()*0.0965848);
}

double NNfunction_dRg::synapse0x1979490() {
   return (neuron0x196c7d0()*-0.209677);
}

double NNfunction_dRg::synapse0x19794d0() {
   return (neuron0x196cb10()*-0.469356);
}

double NNfunction_dRg::synapse0x1979510() {
   return (neuron0x196ce50()*-0.161682);
}

double NNfunction_dRg::synapse0x1979550() {
   return (neuron0x196d190()*-0.036146);
}

double NNfunction_dRg::synapse0x1979590() {
   return (neuron0x196d4d0()*-0.0240205);
}

double NNfunction_dRg::synapse0x19795d0() {
   return (neuron0x196d810()*0.143855);
}

double NNfunction_dRg::synapse0x1979610() {
   return (neuron0x196db50()*0.0451345);
}

double NNfunction_dRg::synapse0x1979650() {
   return (neuron0x196de90()*0.103992);
}

double NNfunction_dRg::synapse0x19790e0() {
   return (neuron0x196e1d0()*0.0356161);
}

double NNfunction_dRg::synapse0x1979120() {
   return (neuron0x196e730()*-0.468426);
}

double NNfunction_dRg::synapse0x19797a0() {
   return (neuron0x196e950()*-0.175156);
}

double NNfunction_dRg::synapse0x19797e0() {
   return (neuron0x196ec90()*0.105255);
}

double NNfunction_dRg::synapse0x1979820() {
   return (neuron0x196efd0()*-0.111775);
}

double NNfunction_dRg::synapse0x1979860() {
   return (neuron0x196f310()*0.0820021);
}

double NNfunction_dRg::synapse0x19798a0() {
   return (neuron0x196f650()*0.130684);
}

double NNfunction_dRg::synapse0x19798e0() {
   return (neuron0x196f990()*-0.121112);
}

double NNfunction_dRg::synapse0x1979c60() {
   return (neuron0x196add0()*-0.00543547);
}

double NNfunction_dRg::synapse0x196aff0() {
   return (neuron0x196b110()*-0.159418);
}

double NNfunction_dRg::synapse0x196b030() {
   return (neuron0x196b450()*0.0116696);
}

double NNfunction_dRg::synapse0x196b330() {
   return (neuron0x196b790()*0.0973715);
}

double NNfunction_dRg::synapse0x196b370() {
   return (neuron0x196bad0()*-0.294309);
}

double NNfunction_dRg::synapse0x196b670() {
   return (neuron0x196be10()*-0.329042);
}

double NNfunction_dRg::synapse0x196b6b0() {
   return (neuron0x196c150()*0.266517);
}

double NNfunction_dRg::synapse0x196b9b0() {
   return (neuron0x196c490()*-0.156383);
}

double NNfunction_dRg::synapse0x196b9f0() {
   return (neuron0x196c7d0()*-0.0471138);
}

double NNfunction_dRg::synapse0x196bcf0() {
   return (neuron0x196cb10()*0.0111492);
}

double NNfunction_dRg::synapse0x196bd30() {
   return (neuron0x196ce50()*0.082167);
}

double NNfunction_dRg::synapse0x196c030() {
   return (neuron0x196d190()*0.143595);
}

double NNfunction_dRg::synapse0x196c070() {
   return (neuron0x196d4d0()*0.0525548);
}

double NNfunction_dRg::synapse0x196c370() {
   return (neuron0x196d810()*0.0494996);
}

double NNfunction_dRg::synapse0x196c3b0() {
   return (neuron0x196db50()*-0.216097);
}

double NNfunction_dRg::synapse0x196c6b0() {
   return (neuron0x196de90()*0.031428);
}

double NNfunction_dRg::synapse0x196c6f0() {
   return (neuron0x196e1d0()*-0.15107);
}

double NNfunction_dRg::synapse0x196c9f0() {
   return (neuron0x196e730()*-0.571383);
}

double NNfunction_dRg::synapse0x196ca30() {
   return (neuron0x196e950()*0.00997705);
}

double NNfunction_dRg::synapse0x196cd30() {
   return (neuron0x196ec90()*0.0370826);
}

double NNfunction_dRg::synapse0x196cd70() {
   return (neuron0x196efd0()*0.0129579);
}

double NNfunction_dRg::synapse0x196d070() {
   return (neuron0x196f310()*-0.0305923);
}

double NNfunction_dRg::synapse0x196d0b0() {
   return (neuron0x196f650()*-0.0208835);
}

double NNfunction_dRg::synapse0x196d3b0() {
   return (neuron0x196f990()*-0.00153884);
}

double NNfunction_dRg::synapse0x196d3f0() {
   return (neuron0x196add0()*-0.0100137);
}

double NNfunction_dRg::synapse0x196e0b0() {
   return (neuron0x196b110()*-0.159316);
}

double NNfunction_dRg::synapse0x196e0f0() {
   return (neuron0x196b450()*0.0320323);
}

double NNfunction_dRg::synapse0x1979ab0() {
   return (neuron0x196b790()*0.207126);
}

double NNfunction_dRg::synapse0x1979af0() {
   return (neuron0x196bad0()*-0.0747436);
}

double NNfunction_dRg::synapse0x196e3f0() {
   return (neuron0x196be10()*0.0507057);
}

double NNfunction_dRg::synapse0x196e430() {
   return (neuron0x196c150()*-0.124161);
}

double NNfunction_dRg::synapse0x171c720() {
   return (neuron0x196c490()*-0.266457);
}

double NNfunction_dRg::synapse0x171c760() {
   return (neuron0x196c7d0()*-0.00434416);
}

double NNfunction_dRg::synapse0x196eb70() {
   return (neuron0x196cb10()*0.0184197);
}

double NNfunction_dRg::synapse0x196ebb0() {
   return (neuron0x196ce50()*0.0319038);
}

double NNfunction_dRg::synapse0x196eeb0() {
   return (neuron0x196d190()*-0.133143);
}

double NNfunction_dRg::synapse0x196eef0() {
   return (neuron0x196d4d0()*-0.206605);
}

double NNfunction_dRg::synapse0x196f1f0() {
   return (neuron0x196d810()*0.123495);
}

double NNfunction_dRg::synapse0x196f230() {
   return (neuron0x196db50()*-0.0359864);
}

double NNfunction_dRg::synapse0x196f530() {
   return (neuron0x196de90()*-0.135926);
}

double NNfunction_dRg::synapse0x196f570() {
   return (neuron0x196e1d0()*0.39341);
}

double NNfunction_dRg::synapse0x196f870() {
   return (neuron0x196e730()*-0.515455);
}

double NNfunction_dRg::synapse0x196f8b0() {
   return (neuron0x196e950()*-0.0718421);
}

double NNfunction_dRg::synapse0x196fbb0() {
   return (neuron0x196ec90()*-0.096018);
}

double NNfunction_dRg::synapse0x196fbf0() {
   return (neuron0x196efd0()*0.00996282);
}

double NNfunction_dRg::synapse0x196d6f0() {
   return (neuron0x196f310()*0.0196568);
}

double NNfunction_dRg::synapse0x196d730() {
   return (neuron0x196f650()*0.0155003);
}

double NNfunction_dRg::synapse0x197b9d0() {
   return (neuron0x196f990()*-0.0128882);
}

double NNfunction_dRg::synapse0x197bd50() {
   return (neuron0x196add0()*0.0982435);
}

double NNfunction_dRg::synapse0x197bd90() {
   return (neuron0x196b110()*-0.394144);
}

double NNfunction_dRg::synapse0x197bdd0() {
   return (neuron0x196b450()*-0.011269);
}

double NNfunction_dRg::synapse0x197be10() {
   return (neuron0x196b790()*-1.0455);
}

double NNfunction_dRg::synapse0x197be50() {
   return (neuron0x196bad0()*-0.365624);
}

double NNfunction_dRg::synapse0x197be90() {
   return (neuron0x196be10()*-0.19118);
}

double NNfunction_dRg::synapse0x197bed0() {
   return (neuron0x196c150()*0.0622138);
}

double NNfunction_dRg::synapse0x197bf10() {
   return (neuron0x196c490()*0.254785);
}

double NNfunction_dRg::synapse0x197bf50() {
   return (neuron0x196c7d0()*-0.0285061);
}

double NNfunction_dRg::synapse0x197bf90() {
   return (neuron0x196cb10()*-0.0714162);
}

double NNfunction_dRg::synapse0x197bfd0() {
   return (neuron0x196ce50()*-0.210044);
}

double NNfunction_dRg::synapse0x197c010() {
   return (neuron0x196d190()*0.227811);
}

double NNfunction_dRg::synapse0x197c050() {
   return (neuron0x196d4d0()*-0.332711);
}

double NNfunction_dRg::synapse0x197c090() {
   return (neuron0x196d810()*0.0228129);
}

double NNfunction_dRg::synapse0x197c0d0() {
   return (neuron0x196db50()*0.00390361);
}

double NNfunction_dRg::synapse0x197c110() {
   return (neuron0x196de90()*0.526362);
}

double NNfunction_dRg::synapse0x197bba0() {
   return (neuron0x196e1d0()*0.111957);
}

double NNfunction_dRg::synapse0x197bbe0() {
   return (neuron0x196e730()*0.459886);
}

double NNfunction_dRg::synapse0x197c260() {
   return (neuron0x196e950()*-0.336226);
}

double NNfunction_dRg::synapse0x197c2a0() {
   return (neuron0x196ec90()*-0.0664884);
}

double NNfunction_dRg::synapse0x197c2e0() {
   return (neuron0x196efd0()*-0.215072);
}

double NNfunction_dRg::synapse0x197c320() {
   return (neuron0x196f310()*0.201785);
}

double NNfunction_dRg::synapse0x197c360() {
   return (neuron0x196f650()*0.184522);
}

double NNfunction_dRg::synapse0x197c3a0() {
   return (neuron0x196f990()*0.0973212);
}

double NNfunction_dRg::synapse0x197c720() {
   return (neuron0x196add0()*-0.0892295);
}

double NNfunction_dRg::synapse0x197c760() {
   return (neuron0x196b110()*0.321822);
}

double NNfunction_dRg::synapse0x197c7a0() {
   return (neuron0x196b450()*0.0417071);
}

double NNfunction_dRg::synapse0x197c7e0() {
   return (neuron0x196b790()*0.173823);
}

double NNfunction_dRg::synapse0x197c820() {
   return (neuron0x196bad0()*-0.0470897);
}

double NNfunction_dRg::synapse0x197c860() {
   return (neuron0x196be10()*-0.00109677);
}

double NNfunction_dRg::synapse0x197c8a0() {
   return (neuron0x196c150()*0.542584);
}

double NNfunction_dRg::synapse0x197c8e0() {
   return (neuron0x196c490()*0.259468);
}

double NNfunction_dRg::synapse0x197c920() {
   return (neuron0x196c7d0()*0.00222672);
}

double NNfunction_dRg::synapse0x197c960() {
   return (neuron0x196cb10()*-0.150735);
}

double NNfunction_dRg::synapse0x197c9a0() {
   return (neuron0x196ce50()*0.0481927);
}

double NNfunction_dRg::synapse0x197c9e0() {
   return (neuron0x196d190()*-0.208714);
}

double NNfunction_dRg::synapse0x197ca20() {
   return (neuron0x196d4d0()*-0.0920705);
}

double NNfunction_dRg::synapse0x197ca60() {
   return (neuron0x196d810()*-0.0379222);
}

double NNfunction_dRg::synapse0x197caa0() {
   return (neuron0x196db50()*-0.0653934);
}

double NNfunction_dRg::synapse0x197cae0() {
   return (neuron0x196de90()*-0.0660032);
}

double NNfunction_dRg::synapse0x197c570() {
   return (neuron0x196e1d0()*0.505908);
}

double NNfunction_dRg::synapse0x197c5b0() {
   return (neuron0x196e730()*-0.494458);
}

double NNfunction_dRg::synapse0x197cc30() {
   return (neuron0x196e950()*-0.11928);
}

double NNfunction_dRg::synapse0x197cc70() {
   return (neuron0x196ec90()*-0.0611468);
}

double NNfunction_dRg::synapse0x197ccb0() {
   return (neuron0x196efd0()*-0.00114602);
}

double NNfunction_dRg::synapse0x197ccf0() {
   return (neuron0x196f310()*-0.0991727);
}

double NNfunction_dRg::synapse0x197cd30() {
   return (neuron0x196f650()*-0.0242379);
}

double NNfunction_dRg::synapse0x197cd70() {
   return (neuron0x196f990()*-0.0192253);
}

double NNfunction_dRg::synapse0x197d0f0() {
   return (neuron0x196add0()*-0.00390062);
}

double NNfunction_dRg::synapse0x197d130() {
   return (neuron0x196b110()*0.00819554);
}

double NNfunction_dRg::synapse0x197d170() {
   return (neuron0x196b450()*0.00100018);
}

double NNfunction_dRg::synapse0x197d1b0() {
   return (neuron0x196b790()*-1.21649);
}

double NNfunction_dRg::synapse0x197d1f0() {
   return (neuron0x196bad0()*0.000622572);
}

double NNfunction_dRg::synapse0x197d230() {
   return (neuron0x196be10()*0.0104194);
}

double NNfunction_dRg::synapse0x197d270() {
   return (neuron0x196c150()*0.00452509);
}

double NNfunction_dRg::synapse0x197d2b0() {
   return (neuron0x196c490()*0.00822646);
}

double NNfunction_dRg::synapse0x197d2f0() {
   return (neuron0x196c7d0()*0.00487593);
}

double NNfunction_dRg::synapse0x197d330() {
   return (neuron0x196cb10()*0.00752691);
}

double NNfunction_dRg::synapse0x197d370() {
   return (neuron0x196ce50()*-0.00103155);
}

double NNfunction_dRg::synapse0x197d3b0() {
   return (neuron0x196d190()*-0.0291659);
}

double NNfunction_dRg::synapse0x197d3f0() {
   return (neuron0x196d4d0()*-0.0202244);
}

double NNfunction_dRg::synapse0x197d430() {
   return (neuron0x196d810()*0.00629607);
}

double NNfunction_dRg::synapse0x197d470() {
   return (neuron0x196db50()*-0.0171002);
}

double NNfunction_dRg::synapse0x197d4b0() {
   return (neuron0x196de90()*-0.0220232);
}

double NNfunction_dRg::synapse0x197cf40() {
   return (neuron0x196e1d0()*-0.00138014);
}

double NNfunction_dRg::synapse0x197cf80() {
   return (neuron0x196e730()*0.930053);
}

double NNfunction_dRg::synapse0x197d600() {
   return (neuron0x196e950()*-0.0114631);
}

double NNfunction_dRg::synapse0x197d640() {
   return (neuron0x196ec90()*0.00541004);
}

double NNfunction_dRg::synapse0x197d680() {
   return (neuron0x196efd0()*-0.00272693);
}

double NNfunction_dRg::synapse0x197d6c0() {
   return (neuron0x196f310()*-0.000822815);
}

double NNfunction_dRg::synapse0x197d700() {
   return (neuron0x196f650()*0.00159876);
}

double NNfunction_dRg::synapse0x197d740() {
   return (neuron0x196f990()*-0.00563857);
}

double NNfunction_dRg::synapse0x197dac0() {
   return (neuron0x196add0()*0.0132544);
}

double NNfunction_dRg::synapse0x197db00() {
   return (neuron0x196b110()*-0.00257752);
}

double NNfunction_dRg::synapse0x197db40() {
   return (neuron0x196b450()*-0.0116356);
}

double NNfunction_dRg::synapse0x197db80() {
   return (neuron0x196b790()*0.0486089);
}

double NNfunction_dRg::synapse0x197dbc0() {
   return (neuron0x196bad0()*-0.00867629);
}

double NNfunction_dRg::synapse0x197dc00() {
   return (neuron0x196be10()*-0.0175939);
}

double NNfunction_dRg::synapse0x197dc40() {
   return (neuron0x196c150()*0.00283175);
}

double NNfunction_dRg::synapse0x197dc80() {
   return (neuron0x196c490()*-0.0161928);
}

double NNfunction_dRg::synapse0x197dcc0() {
   return (neuron0x196c7d0()*-0.240714);
}

double NNfunction_dRg::synapse0x197dd00() {
   return (neuron0x196cb10()*0.0609448);
}

double NNfunction_dRg::synapse0x197dd40() {
   return (neuron0x196ce50()*0.00571978);
}

double NNfunction_dRg::synapse0x197dd80() {
   return (neuron0x196d190()*0.004085);
}

double NNfunction_dRg::synapse0x197ddc0() {
   return (neuron0x196d4d0()*0.000207052);
}

double NNfunction_dRg::synapse0x197de00() {
   return (neuron0x196d810()*-0.0012431);
}

double NNfunction_dRg::synapse0x197de40() {
   return (neuron0x196db50()*0.00825624);
}

double NNfunction_dRg::synapse0x197de80() {
   return (neuron0x196de90()*0.0106411);
}

double NNfunction_dRg::synapse0x197d910() {
   return (neuron0x196e1d0()*0.0304636);
}

double NNfunction_dRg::synapse0x197d950() {
   return (neuron0x196e730()*-1.55454);
}

double NNfunction_dRg::synapse0x197dfd0() {
   return (neuron0x196e950()*-0.0133435);
}

double NNfunction_dRg::synapse0x197e010() {
   return (neuron0x196ec90()*-0.00700216);
}

double NNfunction_dRg::synapse0x197e050() {
   return (neuron0x196efd0()*-0.0174217);
}

double NNfunction_dRg::synapse0x197e090() {
   return (neuron0x196f310()*-0.00647455);
}

double NNfunction_dRg::synapse0x197e0d0() {
   return (neuron0x196f650()*-0.0192798);
}

double NNfunction_dRg::synapse0x197e110() {
   return (neuron0x196f990()*0.00105611);
}

double NNfunction_dRg::synapse0x197e490() {
   return (neuron0x196add0()*-0.0266139);
}

double NNfunction_dRg::synapse0x197e4d0() {
   return (neuron0x196b110()*0.312713);
}

double NNfunction_dRg::synapse0x197e510() {
   return (neuron0x196b450()*-0.304987);
}

double NNfunction_dRg::synapse0x197e550() {
   return (neuron0x196b790()*-0.217338);
}

double NNfunction_dRg::synapse0x197e590() {
   return (neuron0x196bad0()*-0.0470667);
}

double NNfunction_dRg::synapse0x197e5d0() {
   return (neuron0x196be10()*0.398531);
}

double NNfunction_dRg::synapse0x197e610() {
   return (neuron0x196c150()*0.220322);
}

double NNfunction_dRg::synapse0x197e650() {
   return (neuron0x196c490()*-0.122979);
}

double NNfunction_dRg::synapse0x197e690() {
   return (neuron0x196c7d0()*-0.0266762);
}

double NNfunction_dRg::synapse0x1976850() {
   return (neuron0x196cb10()*0.0810929);
}

double NNfunction_dRg::synapse0x1976890() {
   return (neuron0x196ce50()*-0.115633);
}

double NNfunction_dRg::synapse0x19768d0() {
   return (neuron0x196d190()*-0.045745);
}

double NNfunction_dRg::synapse0x1976910() {
   return (neuron0x196d4d0()*-0.268323);
}

double NNfunction_dRg::synapse0x1976950() {
   return (neuron0x196d810()*-0.248855);
}

double NNfunction_dRg::synapse0x1976990() {
   return (neuron0x196db50()*-0.478926);
}

double NNfunction_dRg::synapse0x19769d0() {
   return (neuron0x196de90()*0.448072);
}

double NNfunction_dRg::synapse0x197e2e0() {
   return (neuron0x196e1d0()*-0.193814);
}

double NNfunction_dRg::synapse0x197e320() {
   return (neuron0x196e730()*-0.0646988);
}

double NNfunction_dRg::synapse0x1976b20() {
   return (neuron0x196e950()*-0.27955);
}

double NNfunction_dRg::synapse0x1976b60() {
   return (neuron0x196ec90()*-0.277594);
}

double NNfunction_dRg::synapse0x1976ba0() {
   return (neuron0x196efd0()*0.141542);
}

double NNfunction_dRg::synapse0x1976be0() {
   return (neuron0x196f310()*0.0327934);
}

double NNfunction_dRg::synapse0x1976c20() {
   return (neuron0x196f650()*0.00422557);
}

double NNfunction_dRg::synapse0x1976c60() {
   return (neuron0x196f990()*0.379756);
}

double NNfunction_dRg::synapse0x1976fe0() {
   return (neuron0x196add0()*-0.000847289);
}

double NNfunction_dRg::synapse0x1977020() {
   return (neuron0x196b110()*-0.024989);
}

double NNfunction_dRg::synapse0x1977060() {
   return (neuron0x196b450()*-0.0220762);
}

double NNfunction_dRg::synapse0x19770a0() {
   return (neuron0x196b790()*-1.86773);
}

double NNfunction_dRg::synapse0x19770e0() {
   return (neuron0x196bad0()*0.0204415);
}

double NNfunction_dRg::synapse0x1977120() {
   return (neuron0x196be10()*0.039926);
}

double NNfunction_dRg::synapse0x1977160() {
   return (neuron0x196c150()*0.0156858);
}

double NNfunction_dRg::synapse0x19771a0() {
   return (neuron0x196c490()*-0.0366787);
}

double NNfunction_dRg::synapse0x19771e0() {
   return (neuron0x196c7d0()*-0.0130423);
}

double NNfunction_dRg::synapse0x1977220() {
   return (neuron0x196cb10()*0.00159192);
}

double NNfunction_dRg::synapse0x1977260() {
   return (neuron0x196ce50()*-0.0150589);
}

double NNfunction_dRg::synapse0x19772a0() {
   return (neuron0x196d190()*0.836823);
}

double NNfunction_dRg::synapse0x19772e0() {
   return (neuron0x196d4d0()*0.806552);
}

double NNfunction_dRg::synapse0x1977320() {
   return (neuron0x196d810()*-0.00659689);
}

double NNfunction_dRg::synapse0x1977360() {
   return (neuron0x196db50()*0.322858);
}

double NNfunction_dRg::synapse0x19773a0() {
   return (neuron0x196de90()*0.412327);
}

double NNfunction_dRg::synapse0x1976e30() {
   return (neuron0x196e1d0()*0.0827561);
}

double NNfunction_dRg::synapse0x1976e70() {
   return (neuron0x196e730()*0.0379499);
}

double NNfunction_dRg::synapse0x19774f0() {
   return (neuron0x196e950()*0.395787);
}

double NNfunction_dRg::synapse0x1977530() {
   return (neuron0x196ec90()*0.019608);
}

double NNfunction_dRg::synapse0x1977570() {
   return (neuron0x196efd0()*0.00552812);
}

double NNfunction_dRg::synapse0x19775b0() {
   return (neuron0x196f310()*-0.0301295);
}

double NNfunction_dRg::synapse0x19775f0() {
   return (neuron0x196f650()*0.0582635);
}

double NNfunction_dRg::synapse0x1977630() {
   return (neuron0x196f990()*-0.0135519);
}

double NNfunction_dRg::synapse0x1977800() {
   return (neuron0x196add0()*0.00356993);
}

double NNfunction_dRg::synapse0x1980890() {
   return (neuron0x196b110()*0.000389567);
}

double NNfunction_dRg::synapse0x19808d0() {
   return (neuron0x196b450()*-0.00188873);
}

double NNfunction_dRg::synapse0x1980910() {
   return (neuron0x196b790()*-0.89511);
}

double NNfunction_dRg::synapse0x1980950() {
   return (neuron0x196bad0()*-0.00191256);
}

double NNfunction_dRg::synapse0x1980990() {
   return (neuron0x196be10()*0.00179586);
}

double NNfunction_dRg::synapse0x19809d0() {
   return (neuron0x196c150()*-0.00257465);
}

double NNfunction_dRg::synapse0x1980a10() {
   return (neuron0x196c490()*0.00559177);
}

double NNfunction_dRg::synapse0x1980a50() {
   return (neuron0x196c7d0()*0.00844827);
}

double NNfunction_dRg::synapse0x1980a90() {
   return (neuron0x196cb10()*-0.019432);
}

double NNfunction_dRg::synapse0x1980ad0() {
   return (neuron0x196ce50()*0.017912);
}

double NNfunction_dRg::synapse0x1980b10() {
   return (neuron0x196d190()*-0.00509315);
}

double NNfunction_dRg::synapse0x1980b50() {
   return (neuron0x196d4d0()*0.00152387);
}

double NNfunction_dRg::synapse0x1980b90() {
   return (neuron0x196d810()*-0.00379546);
}

double NNfunction_dRg::synapse0x1980bd0() {
   return (neuron0x196db50()*-0.00340891);
}

double NNfunction_dRg::synapse0x1980c10() {
   return (neuron0x196de90()*0.00976528);
}

double NNfunction_dRg::synapse0x19806e0() {
   return (neuron0x196e1d0()*-0.00440593);
}

double NNfunction_dRg::synapse0x1980720() {
   return (neuron0x196e730()*-0.603954);
}

double NNfunction_dRg::synapse0x1980d60() {
   return (neuron0x196e950()*0.00357031);
}

double NNfunction_dRg::synapse0x1980da0() {
   return (neuron0x196ec90()*0.000202035);
}

double NNfunction_dRg::synapse0x1980de0() {
   return (neuron0x196efd0()*-0.00480691);
}

double NNfunction_dRg::synapse0x1980e20() {
   return (neuron0x196f310()*-0.00543606);
}

double NNfunction_dRg::synapse0x1980e60() {
   return (neuron0x196f650()*-0.00438499);
}

double NNfunction_dRg::synapse0x1980ea0() {
   return (neuron0x196f990()*0.00602017);
}

double NNfunction_dRg::synapse0x1981220() {
   return (neuron0x196add0()*-0.170001);
}

double NNfunction_dRg::synapse0x1981260() {
   return (neuron0x196b110()*0.0454614);
}

double NNfunction_dRg::synapse0x19812a0() {
   return (neuron0x196b450()*-0.00187622);
}

double NNfunction_dRg::synapse0x19812e0() {
   return (neuron0x196b790()*0.0937157);
}

double NNfunction_dRg::synapse0x1981320() {
   return (neuron0x196bad0()*-0.124495);
}

double NNfunction_dRg::synapse0x1981360() {
   return (neuron0x196be10()*0.237604);
}

double NNfunction_dRg::synapse0x19813a0() {
   return (neuron0x196c150()*-0.126548);
}

double NNfunction_dRg::synapse0x19813e0() {
   return (neuron0x196c490()*0.0265725);
}

double NNfunction_dRg::synapse0x1981420() {
   return (neuron0x196c7d0()*0.244414);
}

double NNfunction_dRg::synapse0x1981460() {
   return (neuron0x196cb10()*0.89867);
}

double NNfunction_dRg::synapse0x19814a0() {
   return (neuron0x196ce50()*-0.00637111);
}

double NNfunction_dRg::synapse0x19814e0() {
   return (neuron0x196d190()*-0.143427);
}

double NNfunction_dRg::synapse0x1981520() {
   return (neuron0x196d4d0()*0.0838445);
}

double NNfunction_dRg::synapse0x1981560() {
   return (neuron0x196d810()*0.0749074);
}

double NNfunction_dRg::synapse0x19815a0() {
   return (neuron0x196db50()*-0.0346633);
}

double NNfunction_dRg::synapse0x19815e0() {
   return (neuron0x196de90()*0.00852323);
}

double NNfunction_dRg::synapse0x1981070() {
   return (neuron0x196e1d0()*-0.0969765);
}

double NNfunction_dRg::synapse0x19810b0() {
   return (neuron0x196e730()*-0.456826);
}

double NNfunction_dRg::synapse0x1981730() {
   return (neuron0x196e950()*-0.260431);
}

double NNfunction_dRg::synapse0x1981770() {
   return (neuron0x196ec90()*-0.0374238);
}

double NNfunction_dRg::synapse0x19817b0() {
   return (neuron0x196efd0()*0.0621646);
}

double NNfunction_dRg::synapse0x19817f0() {
   return (neuron0x196f310()*-0.375854);
}

double NNfunction_dRg::synapse0x1981830() {
   return (neuron0x196f650()*0.0497208);
}

double NNfunction_dRg::synapse0x1981870() {
   return (neuron0x196f990()*0.0262208);
}

double NNfunction_dRg::synapse0x1981bf0() {
   return (neuron0x196add0()*-0.0733329);
}

double NNfunction_dRg::synapse0x1981c30() {
   return (neuron0x196b110()*-0.177677);
}

double NNfunction_dRg::synapse0x1981c70() {
   return (neuron0x196b450()*0.0294069);
}

double NNfunction_dRg::synapse0x1981cb0() {
   return (neuron0x196b790()*-0.271859);
}

double NNfunction_dRg::synapse0x1981cf0() {
   return (neuron0x196bad0()*-0.170798);
}

double NNfunction_dRg::synapse0x1981d30() {
   return (neuron0x196be10()*0.3278);
}

double NNfunction_dRg::synapse0x1981d70() {
   return (neuron0x196c150()*0.176228);
}

double NNfunction_dRg::synapse0x1981db0() {
   return (neuron0x196c490()*0.0253508);
}

double NNfunction_dRg::synapse0x1981df0() {
   return (neuron0x196c7d0()*-0.0218826);
}

double NNfunction_dRg::synapse0x1981e30() {
   return (neuron0x196cb10()*-0.0335737);
}

double NNfunction_dRg::synapse0x1981e70() {
   return (neuron0x196ce50()*-0.0367208);
}

double NNfunction_dRg::synapse0x1981eb0() {
   return (neuron0x196d190()*0.0825576);
}

double NNfunction_dRg::synapse0x1981ef0() {
   return (neuron0x196d4d0()*0.0870196);
}

double NNfunction_dRg::synapse0x1981f30() {
   return (neuron0x196d810()*-0.0486088);
}

double NNfunction_dRg::synapse0x1981f70() {
   return (neuron0x196db50()*0.199075);
}

double NNfunction_dRg::synapse0x1981fb0() {
   return (neuron0x196de90()*0.162658);
}

double NNfunction_dRg::synapse0x1981a40() {
   return (neuron0x196e1d0()*-0.0743711);
}

double NNfunction_dRg::synapse0x1981a80() {
   return (neuron0x196e730()*0.426787);
}

double NNfunction_dRg::synapse0x1982100() {
   return (neuron0x196e950()*0.0471294);
}

double NNfunction_dRg::synapse0x1982140() {
   return (neuron0x196ec90()*0.00993165);
}

double NNfunction_dRg::synapse0x1982180() {
   return (neuron0x196efd0()*0.0287505);
}

double NNfunction_dRg::synapse0x19821c0() {
   return (neuron0x196f310()*-0.0239621);
}

double NNfunction_dRg::synapse0x1982200() {
   return (neuron0x196f650()*-0.0274152);
}

double NNfunction_dRg::synapse0x1982240() {
   return (neuron0x196f990()*0.0504275);
}

double NNfunction_dRg::synapse0x19825c0() {
   return (neuron0x196add0()*0.00664467);
}

double NNfunction_dRg::synapse0x1982600() {
   return (neuron0x196b110()*0.002492);
}

double NNfunction_dRg::synapse0x1982640() {
   return (neuron0x196b450()*0.00331857);
}

double NNfunction_dRg::synapse0x1982680() {
   return (neuron0x196b790()*-1.51717);
}

double NNfunction_dRg::synapse0x19826c0() {
   return (neuron0x196bad0()*0.0146649);
}

double NNfunction_dRg::synapse0x1982700() {
   return (neuron0x196be10()*0.0137461);
}

double NNfunction_dRg::synapse0x1982740() {
   return (neuron0x196c150()*0.0121884);
}

double NNfunction_dRg::synapse0x1982780() {
   return (neuron0x196c490()*0.000555819);
}

double NNfunction_dRg::synapse0x19827c0() {
   return (neuron0x196c7d0()*0.0260519);
}

double NNfunction_dRg::synapse0x1982800() {
   return (neuron0x196cb10()*0.000496806);
}

double NNfunction_dRg::synapse0x1982840() {
   return (neuron0x196ce50()*-0.0888127);
}

double NNfunction_dRg::synapse0x1982880() {
   return (neuron0x196d190()*0.0382677);
}

double NNfunction_dRg::synapse0x19828c0() {
   return (neuron0x196d4d0()*0.00790513);
}

double NNfunction_dRg::synapse0x1982900() {
   return (neuron0x196d810()*-0.0295745);
}

double NNfunction_dRg::synapse0x1982940() {
   return (neuron0x196db50()*0.0316352);
}

double NNfunction_dRg::synapse0x1982980() {
   return (neuron0x196de90()*0.0316372);
}

double NNfunction_dRg::synapse0x1982410() {
   return (neuron0x196e1d0()*-0.0173412);
}

double NNfunction_dRg::synapse0x1982450() {
   return (neuron0x196e730()*-0.345404);
}

double NNfunction_dRg::synapse0x1982ad0() {
   return (neuron0x196e950()*-0.00208491);
}

double NNfunction_dRg::synapse0x1982b10() {
   return (neuron0x196ec90()*-0.00164697);
}

double NNfunction_dRg::synapse0x1982b50() {
   return (neuron0x196efd0()*0.00598924);
}

double NNfunction_dRg::synapse0x1982b90() {
   return (neuron0x196f310()*0.00728971);
}

double NNfunction_dRg::synapse0x1982bd0() {
   return (neuron0x196f650()*0.00688504);
}

double NNfunction_dRg::synapse0x1982c10() {
   return (neuron0x196f990()*-0.0195223);
}

double NNfunction_dRg::synapse0x1982f90() {
   return (neuron0x196add0()*-0.081188);
}

double NNfunction_dRg::synapse0x1982fd0() {
   return (neuron0x196b110()*0.0853284);
}

double NNfunction_dRg::synapse0x1983010() {
   return (neuron0x196b450()*-0.00693651);
}

double NNfunction_dRg::synapse0x1983050() {
   return (neuron0x196b790()*0.77749);
}

double NNfunction_dRg::synapse0x1983090() {
   return (neuron0x196bad0()*-0.00857992);
}

double NNfunction_dRg::synapse0x19830d0() {
   return (neuron0x196be10()*-0.0121823);
}

double NNfunction_dRg::synapse0x1983110() {
   return (neuron0x196c150()*-0.227627);
}

double NNfunction_dRg::synapse0x1983150() {
   return (neuron0x196c490()*0.161447);
}

double NNfunction_dRg::synapse0x1983190() {
   return (neuron0x196c7d0()*0.114173);
}

double NNfunction_dRg::synapse0x19831d0() {
   return (neuron0x196cb10()*0.0709547);
}

double NNfunction_dRg::synapse0x1983210() {
   return (neuron0x196ce50()*0.0634286);
}

double NNfunction_dRg::synapse0x1983250() {
   return (neuron0x196d190()*-0.0144173);
}

double NNfunction_dRg::synapse0x1983290() {
   return (neuron0x196d4d0()*0.265698);
}

double NNfunction_dRg::synapse0x19832d0() {
   return (neuron0x196d810()*0.0795868);
}

double NNfunction_dRg::synapse0x1983310() {
   return (neuron0x196db50()*-0.346445);
}

double NNfunction_dRg::synapse0x1983350() {
   return (neuron0x196de90()*-0.168992);
}

double NNfunction_dRg::synapse0x1982de0() {
   return (neuron0x196e1d0()*-0.217829);
}

double NNfunction_dRg::synapse0x1982e20() {
   return (neuron0x196e730()*-0.1312);
}

double NNfunction_dRg::synapse0x19834a0() {
   return (neuron0x196e950()*0.242955);
}

double NNfunction_dRg::synapse0x19834e0() {
   return (neuron0x196ec90()*-0.0600643);
}

double NNfunction_dRg::synapse0x1983520() {
   return (neuron0x196efd0()*0.0765447);
}

double NNfunction_dRg::synapse0x1983560() {
   return (neuron0x196f310()*0.0557348);
}

double NNfunction_dRg::synapse0x19835a0() {
   return (neuron0x196f650()*-0.0397816);
}

double NNfunction_dRg::synapse0x19835e0() {
   return (neuron0x196f990()*0.0438389);
}

double NNfunction_dRg::synapse0x1983960() {
   return (neuron0x196add0()*-0.015768);
}

double NNfunction_dRg::synapse0x19839a0() {
   return (neuron0x196b110()*0.00235384);
}

double NNfunction_dRg::synapse0x19839e0() {
   return (neuron0x196b450()*-0.000606814);
}

double NNfunction_dRg::synapse0x1983a20() {
   return (neuron0x196b790()*-0.0866819);
}

double NNfunction_dRg::synapse0x1983a60() {
   return (neuron0x196bad0()*0.00393152);
}

double NNfunction_dRg::synapse0x1983aa0() {
   return (neuron0x196be10()*0.000822762);
}

double NNfunction_dRg::synapse0x1983ae0() {
   return (neuron0x196c150()*0.00328208);
}

double NNfunction_dRg::synapse0x1983b20() {
   return (neuron0x196c490()*-0.0108745);
}

double NNfunction_dRg::synapse0x1983b60() {
   return (neuron0x196c7d0()*-0.0658066);
}

double NNfunction_dRg::synapse0x1983ba0() {
   return (neuron0x196cb10()*-0.10295);
}

double NNfunction_dRg::synapse0x1983be0() {
   return (neuron0x196ce50()*0.0548394);
}

double NNfunction_dRg::synapse0x1983c20() {
   return (neuron0x196d190()*0.00991819);
}

double NNfunction_dRg::synapse0x1983c60() {
   return (neuron0x196d4d0()*0.0138691);
}

double NNfunction_dRg::synapse0x1983ca0() {
   return (neuron0x196d810()*-0.00358233);
}

double NNfunction_dRg::synapse0x1983ce0() {
   return (neuron0x196db50()*0.0187276);
}

double NNfunction_dRg::synapse0x1983d20() {
   return (neuron0x196de90()*-0.0017902);
}

double NNfunction_dRg::synapse0x19837b0() {
   return (neuron0x196e1d0()*0.00436932);
}

double NNfunction_dRg::synapse0x19837f0() {
   return (neuron0x196e730()*-0.454352);
}

double NNfunction_dRg::synapse0x1983e70() {
   return (neuron0x196e950()*0.00582272);
}

double NNfunction_dRg::synapse0x1983eb0() {
   return (neuron0x196ec90()*-0.00659452);
}

double NNfunction_dRg::synapse0x1983ef0() {
   return (neuron0x196efd0()*0.00531146);
}

double NNfunction_dRg::synapse0x1983f30() {
   return (neuron0x196f310()*-0.00579862);
}

double NNfunction_dRg::synapse0x1983f70() {
   return (neuron0x196f650()*0.0112452);
}

double NNfunction_dRg::synapse0x1983fb0() {
   return (neuron0x196f990()*0.00148774);
}

double NNfunction_dRg::synapse0x1984330() {
   return (neuron0x196add0()*-0.178556);
}

double NNfunction_dRg::synapse0x1984370() {
   return (neuron0x196b110()*-0.0815357);
}

double NNfunction_dRg::synapse0x19843b0() {
   return (neuron0x196b450()*-0.0585938);
}

double NNfunction_dRg::synapse0x19843f0() {
   return (neuron0x196b790()*-1.06749);
}

double NNfunction_dRg::synapse0x1984430() {
   return (neuron0x196bad0()*0.111289);
}

double NNfunction_dRg::synapse0x1984470() {
   return (neuron0x196be10()*-0.108041);
}

double NNfunction_dRg::synapse0x19844b0() {
   return (neuron0x196c150()*-0.157311);
}

double NNfunction_dRg::synapse0x19844f0() {
   return (neuron0x196c490()*0.0603314);
}

double NNfunction_dRg::synapse0x1984530() {
   return (neuron0x196c7d0()*0.0865256);
}

double NNfunction_dRg::synapse0x1984570() {
   return (neuron0x196cb10()*-0.0219452);
}

double NNfunction_dRg::synapse0x19845b0() {
   return (neuron0x196ce50()*-0.236195);
}

double NNfunction_dRg::synapse0x19845f0() {
   return (neuron0x196d190()*-0.26726);
}

double NNfunction_dRg::synapse0x1984630() {
   return (neuron0x196d4d0()*0.174776);
}

double NNfunction_dRg::synapse0x1984670() {
   return (neuron0x196d810()*-0.247872);
}

double NNfunction_dRg::synapse0x19846b0() {
   return (neuron0x196db50()*-0.297306);
}

double NNfunction_dRg::synapse0x19846f0() {
   return (neuron0x196de90()*-0.131572);
}

double NNfunction_dRg::synapse0x1984180() {
   return (neuron0x196e1d0()*-0.290758);
}

double NNfunction_dRg::synapse0x19841c0() {
   return (neuron0x196e730()*0.294894);
}

double NNfunction_dRg::synapse0x1984840() {
   return (neuron0x196e950()*0.0385031);
}

double NNfunction_dRg::synapse0x1984880() {
   return (neuron0x196ec90()*0.154153);
}

double NNfunction_dRg::synapse0x19848c0() {
   return (neuron0x196efd0()*-0.073514);
}

double NNfunction_dRg::synapse0x1984900() {
   return (neuron0x196f310()*-0.203633);
}

double NNfunction_dRg::synapse0x1984940() {
   return (neuron0x196f650()*-0.00929149);
}

double NNfunction_dRg::synapse0x1984980() {
   return (neuron0x196f990()*-0.00994952);
}

double NNfunction_dRg::synapse0x1984d00() {
   return (neuron0x196add0()*-0.057365);
}

double NNfunction_dRg::synapse0x1984d40() {
   return (neuron0x196b110()*-0.120373);
}

double NNfunction_dRg::synapse0x1984d80() {
   return (neuron0x196b450()*-0.0243716);
}

double NNfunction_dRg::synapse0x1984dc0() {
   return (neuron0x196b790()*-0.795847);
}

double NNfunction_dRg::synapse0x1984e00() {
   return (neuron0x196bad0()*-0.0164387);
}

double NNfunction_dRg::synapse0x1984e40() {
   return (neuron0x196be10()*0.139282);
}

double NNfunction_dRg::synapse0x1984e80() {
   return (neuron0x196c150()*0.074848);
}

double NNfunction_dRg::synapse0x1984ec0() {
   return (neuron0x196c490()*0.0680734);
}

double NNfunction_dRg::synapse0x1984f00() {
   return (neuron0x196c7d0()*-0.0750779);
}

double NNfunction_dRg::synapse0x1984f40() {
   return (neuron0x196cb10()*0.028703);
}

double NNfunction_dRg::synapse0x1984f80() {
   return (neuron0x196ce50()*0.024639);
}

double NNfunction_dRg::synapse0x1984fc0() {
   return (neuron0x196d190()*-0.0015257);
}

double NNfunction_dRg::synapse0x1985000() {
   return (neuron0x196d4d0()*0.0237057);
}

double NNfunction_dRg::synapse0x1985040() {
   return (neuron0x196d810()*0.0715094);
}

double NNfunction_dRg::synapse0x1985080() {
   return (neuron0x196db50()*-0.0805103);
}

double NNfunction_dRg::synapse0x19850c0() {
   return (neuron0x196de90()*-1.01476);
}

double NNfunction_dRg::synapse0x1984b50() {
   return (neuron0x196e1d0()*-0.0186526);
}

double NNfunction_dRg::synapse0x1984b90() {
   return (neuron0x196e730()*0.0192084);
}

double NNfunction_dRg::synapse0x1985210() {
   return (neuron0x196e950()*-0.0379551);
}

double NNfunction_dRg::synapse0x1985250() {
   return (neuron0x196ec90()*-0.0281659);
}

double NNfunction_dRg::synapse0x1985290() {
   return (neuron0x196efd0()*0.0244851);
}

double NNfunction_dRg::synapse0x19852d0() {
   return (neuron0x196f310()*0.000371372);
}

double NNfunction_dRg::synapse0x1985310() {
   return (neuron0x196f650()*0.0411913);
}

double NNfunction_dRg::synapse0x1985350() {
   return (neuron0x196f990()*-0.0577951);
}

double NNfunction_dRg::synapse0x19856d0() {
   return (neuron0x196add0()*0.00904214);
}

double NNfunction_dRg::synapse0x1979ca0() {
   return (neuron0x196b110()*0.00715392);
}

double NNfunction_dRg::synapse0x1979ce0() {
   return (neuron0x196b450()*-0.017535);
}

double NNfunction_dRg::synapse0x1979d20() {
   return (neuron0x196b790()*-0.911106);
}

double NNfunction_dRg::synapse0x1979f70() {
   return (neuron0x196bad0()*-0.137204);
}

double NNfunction_dRg::synapse0x1979fb0() {
   return (neuron0x196be10()*-0.0272309);
}

double NNfunction_dRg::synapse0x1979ff0() {
   return (neuron0x196c150()*-0.0505378);
}

double NNfunction_dRg::synapse0x197a240() {
   return (neuron0x196c490()*-0.00346071);
}

double NNfunction_dRg::synapse0x197a280() {
   return (neuron0x196c7d0()*0.0429042);
}

double NNfunction_dRg::synapse0x197a4d0() {
   return (neuron0x196cb10()*0.0564631);
}

double NNfunction_dRg::synapse0x197a510() {
   return (neuron0x196ce50()*0.0614536);
}

double NNfunction_dRg::synapse0x197a550() {
   return (neuron0x196d190()*-0.528853);
}

double NNfunction_dRg::synapse0x197a7a0() {
   return (neuron0x196d4d0()*-0.510432);
}

double NNfunction_dRg::synapse0x197a7e0() {
   return (neuron0x196d810()*0.114672);
}

double NNfunction_dRg::synapse0x197aa30() {
   return (neuron0x196db50()*-0.278371);
}

double NNfunction_dRg::synapse0x197aa70() {
   return (neuron0x196de90()*-0.189133);
}

double NNfunction_dRg::synapse0x1985520() {
   return (neuron0x196e1d0()*0.0554667);
}

double NNfunction_dRg::synapse0x1985560() {
   return (neuron0x196e730()*0.240383);
}

double NNfunction_dRg::synapse0x197abc0() {
   return (neuron0x196e950()*-0.182148);
}

double NNfunction_dRg::synapse0x197b0d0() {
   return (neuron0x196ec90()*0.0672652);
}

double NNfunction_dRg::synapse0x197b110() {
   return (neuron0x196efd0()*-0.0124375);
}

double NNfunction_dRg::synapse0x197b150() {
   return (neuron0x196f310()*-0.00429769);
}

double NNfunction_dRg::synapse0x197b3a0() {
   return (neuron0x196f650()*-0.000984871);
}

double NNfunction_dRg::synapse0x197b3e0() {
   return (neuron0x196f990()*0.0388151);
}

double NNfunction_dRg::synapse0x197ac90() {
   return (neuron0x196add0()*0.00140567);
}

double NNfunction_dRg::synapse0x197acd0() {
   return (neuron0x196b110()*-0.00535935);
}

double NNfunction_dRg::synapse0x197ad10() {
   return (neuron0x196b450()*-0.00162905);
}

double NNfunction_dRg::synapse0x197ad50() {
   return (neuron0x196b790()*-0.608874);
}

double NNfunction_dRg::synapse0x197b6d0() {
   return (neuron0x196bad0()*-0.00970751);
}

double NNfunction_dRg::synapse0x1987a20() {
   return (neuron0x196be10()*0.00175397);
}

double NNfunction_dRg::synapse0x1987a60() {
   return (neuron0x196c150()*-0.00650364);
}

double NNfunction_dRg::synapse0x1987aa0() {
   return (neuron0x196c490()*0.00679065);
}

double NNfunction_dRg::synapse0x1987ae0() {
   return (neuron0x196c7d0()*0.0612681);
}

double NNfunction_dRg::synapse0x1987b20() {
   return (neuron0x196cb10()*-0.0235997);
}

double NNfunction_dRg::synapse0x1987b60() {
   return (neuron0x196ce50()*0.0163607);
}

double NNfunction_dRg::synapse0x1987ba0() {
   return (neuron0x196d190()*-0.00879646);
}

double NNfunction_dRg::synapse0x1987be0() {
   return (neuron0x196d4d0()*-0.0102789);
}

double NNfunction_dRg::synapse0x1987c20() {
   return (neuron0x196d810()*-0.00596208);
}

double NNfunction_dRg::synapse0x1987c60() {
   return (neuron0x196db50()*-0.0195775);
}

double NNfunction_dRg::synapse0x1987ca0() {
   return (neuron0x196de90()*-0.000973398);
}

double NNfunction_dRg::synapse0x197b5b0() {
   return (neuron0x196e1d0()*-0.0319032);
}

double NNfunction_dRg::synapse0x197b5f0() {
   return (neuron0x196e730()*-2.19355);
}

double NNfunction_dRg::synapse0x1987df0() {
   return (neuron0x196e950()*0.00916646);
}

double NNfunction_dRg::synapse0x1987e30() {
   return (neuron0x196ec90()*-0.0144382);
}

double NNfunction_dRg::synapse0x1987e70() {
   return (neuron0x196efd0()*-0.00639297);
}

double NNfunction_dRg::synapse0x1987eb0() {
   return (neuron0x196f310()*0.00205444);
}

double NNfunction_dRg::synapse0x1987ef0() {
   return (neuron0x196f650()*0.00496884);
}

double NNfunction_dRg::synapse0x1987f30() {
   return (neuron0x196f990()*0.00820698);
}

double NNfunction_dRg::synapse0x19882b0() {
   return (neuron0x196add0()*-0.0023671);
}

double NNfunction_dRg::synapse0x19882f0() {
   return (neuron0x196b110()*0.00960196);
}

double NNfunction_dRg::synapse0x1988330() {
   return (neuron0x196b450()*0.00321226);
}

double NNfunction_dRg::synapse0x1988370() {
   return (neuron0x196b790()*-0.0180568);
}

double NNfunction_dRg::synapse0x19883b0() {
   return (neuron0x196bad0()*0.0230366);
}

double NNfunction_dRg::synapse0x19883f0() {
   return (neuron0x196be10()*0.0197215);
}

double NNfunction_dRg::synapse0x1988430() {
   return (neuron0x196c150()*0.0159121);
}

double NNfunction_dRg::synapse0x1988470() {
   return (neuron0x196c490()*0.0175702);
}

double NNfunction_dRg::synapse0x19884b0() {
   return (neuron0x196c7d0()*-0.0950682);
}

double NNfunction_dRg::synapse0x19884f0() {
   return (neuron0x196cb10()*0.0102894);
}

double NNfunction_dRg::synapse0x1988530() {
   return (neuron0x196ce50()*-0.0179262);
}

double NNfunction_dRg::synapse0x1988570() {
   return (neuron0x196d190()*0.0122842);
}

double NNfunction_dRg::synapse0x19885b0() {
   return (neuron0x196d4d0()*0.0101039);
}

double NNfunction_dRg::synapse0x19885f0() {
   return (neuron0x196d810()*0.000667327);
}

double NNfunction_dRg::synapse0x1988630() {
   return (neuron0x196db50()*0.0235183);
}

double NNfunction_dRg::synapse0x1988670() {
   return (neuron0x196de90()*0.0481582);
}

double NNfunction_dRg::synapse0x1988100() {
   return (neuron0x196e1d0()*-0.0194585);
}

double NNfunction_dRg::synapse0x1988140() {
   return (neuron0x196e730()*2.79057);
}

double NNfunction_dRg::synapse0x19887c0() {
   return (neuron0x196e950()*-0.00525261);
}

double NNfunction_dRg::synapse0x1988800() {
   return (neuron0x196ec90()*0.017737);
}

double NNfunction_dRg::synapse0x1988840() {
   return (neuron0x196efd0()*-0.00143542);
}

double NNfunction_dRg::synapse0x1988880() {
   return (neuron0x196f310()*-0.00573148);
}

double NNfunction_dRg::synapse0x19888c0() {
   return (neuron0x196f650()*-0.00614878);
}

double NNfunction_dRg::synapse0x1988900() {
   return (neuron0x196f990()*0.00525996);
}

double NNfunction_dRg::synapse0x1988c80() {
   return (neuron0x196add0()*-0.0322365);
}

double NNfunction_dRg::synapse0x1988cc0() {
   return (neuron0x196b110()*0.0784671);
}

double NNfunction_dRg::synapse0x1988d00() {
   return (neuron0x196b450()*-0.0346545);
}

double NNfunction_dRg::synapse0x1988d40() {
   return (neuron0x196b790()*-0.75322);
}

double NNfunction_dRg::synapse0x1988d80() {
   return (neuron0x196bad0()*-0.165872);
}

double NNfunction_dRg::synapse0x1988dc0() {
   return (neuron0x196be10()*0.168998);
}

double NNfunction_dRg::synapse0x1988e00() {
   return (neuron0x196c150()*-0.100211);
}

double NNfunction_dRg::synapse0x1988e40() {
   return (neuron0x196c490()*-0.00788257);
}

double NNfunction_dRg::synapse0x1988e80() {
   return (neuron0x196c7d0()*0.0320436);
}

double NNfunction_dRg::synapse0x1988ec0() {
   return (neuron0x196cb10()*0.0657569);
}

double NNfunction_dRg::synapse0x1988f00() {
   return (neuron0x196ce50()*0.0305927);
}

double NNfunction_dRg::synapse0x1988f40() {
   return (neuron0x196d190()*-0.0549898);
}

double NNfunction_dRg::synapse0x1988f80() {
   return (neuron0x196d4d0()*0.0137748);
}

double NNfunction_dRg::synapse0x1988fc0() {
   return (neuron0x196d810()*-0.00392835);
}

double NNfunction_dRg::synapse0x1989000() {
   return (neuron0x196db50()*-0.172171);
}

double NNfunction_dRg::synapse0x1989040() {
   return (neuron0x196de90()*-0.258082);
}

double NNfunction_dRg::synapse0x1988ad0() {
   return (neuron0x196e1d0()*-0.100407);
}

double NNfunction_dRg::synapse0x1988b10() {
   return (neuron0x196e730()*-0.403692);
}

double NNfunction_dRg::synapse0x1989190() {
   return (neuron0x196e950()*-0.00750247);
}

double NNfunction_dRg::synapse0x19891d0() {
   return (neuron0x196ec90()*0.0562815);
}

double NNfunction_dRg::synapse0x1989210() {
   return (neuron0x196efd0()*0.0214649);
}

double NNfunction_dRg::synapse0x1989250() {
   return (neuron0x196f310()*0.0164883);
}

double NNfunction_dRg::synapse0x1989290() {
   return (neuron0x196f650()*-0.00297399);
}

double NNfunction_dRg::synapse0x19892d0() {
   return (neuron0x196f990()*-0.00800524);
}

double NNfunction_dRg::synapse0x1989650() {
   return (neuron0x196add0()*0.0186545);
}

double NNfunction_dRg::synapse0x1989690() {
   return (neuron0x196b110()*0.164784);
}

double NNfunction_dRg::synapse0x19896d0() {
   return (neuron0x196b450()*-0.0502758);
}

double NNfunction_dRg::synapse0x1989710() {
   return (neuron0x196b790()*0.15959);
}

double NNfunction_dRg::synapse0x1989750() {
   return (neuron0x196bad0()*-0.313866);
}

double NNfunction_dRg::synapse0x1989790() {
   return (neuron0x196be10()*0.0195518);
}

double NNfunction_dRg::synapse0x19897d0() {
   return (neuron0x196c150()*0.258632);
}

double NNfunction_dRg::synapse0x1989810() {
   return (neuron0x196c490()*0.00681768);
}

double NNfunction_dRg::synapse0x1989850() {
   return (neuron0x196c7d0()*-0.372794);
}

double NNfunction_dRg::synapse0x1989890() {
   return (neuron0x196cb10()*0.0428794);
}

double NNfunction_dRg::synapse0x19898d0() {
   return (neuron0x196ce50()*-0.169501);
}

double NNfunction_dRg::synapse0x1989910() {
   return (neuron0x196d190()*0.407843);
}

double NNfunction_dRg::synapse0x1989950() {
   return (neuron0x196d4d0()*0.781334);
}

double NNfunction_dRg::synapse0x1989990() {
   return (neuron0x196d810()*-0.49994);
}

double NNfunction_dRg::synapse0x19899d0() {
   return (neuron0x196db50()*-0.335996);
}

double NNfunction_dRg::synapse0x1989a10() {
   return (neuron0x196de90()*-0.191947);
}

double NNfunction_dRg::synapse0x19894a0() {
   return (neuron0x196e1d0()*-0.636828);
}

double NNfunction_dRg::synapse0x19894e0() {
   return (neuron0x196e730()*-0.609703);
}

double NNfunction_dRg::synapse0x1989b60() {
   return (neuron0x196e950()*-0.166736);
}

double NNfunction_dRg::synapse0x1989ba0() {
   return (neuron0x196ec90()*-0.176391);
}

double NNfunction_dRg::synapse0x1989be0() {
   return (neuron0x196efd0()*0.155487);
}

double NNfunction_dRg::synapse0x1989c20() {
   return (neuron0x196f310()*-0.0443302);
}

double NNfunction_dRg::synapse0x1989c60() {
   return (neuron0x196f650()*-0.0585792);
}

double NNfunction_dRg::synapse0x1989ca0() {
   return (neuron0x196f990()*-0.138865);
}

double NNfunction_dRg::synapse0x198a020() {
   return (neuron0x196add0()*0.00886067);
}

double NNfunction_dRg::synapse0x198a060() {
   return (neuron0x196b110()*-0.456023);
}

double NNfunction_dRg::synapse0x198a0a0() {
   return (neuron0x196b450()*-0.192962);
}

double NNfunction_dRg::synapse0x198a0e0() {
   return (neuron0x196b790()*0.37926);
}

double NNfunction_dRg::synapse0x198a120() {
   return (neuron0x196bad0()*-0.206888);
}

double NNfunction_dRg::synapse0x198a160() {
   return (neuron0x196be10()*-0.444566);
}

double NNfunction_dRg::synapse0x198a1a0() {
   return (neuron0x196c150()*-0.080716);
}

double NNfunction_dRg::synapse0x198a1e0() {
   return (neuron0x196c490()*-0.202406);
}

double NNfunction_dRg::synapse0x198a220() {
   return (neuron0x196c7d0()*0.00883652);
}

double NNfunction_dRg::synapse0x198a260() {
   return (neuron0x196cb10()*-0.00401026);
}

double NNfunction_dRg::synapse0x198a2a0() {
   return (neuron0x196ce50()*0.102122);
}

double NNfunction_dRg::synapse0x198a2e0() {
   return (neuron0x196d190()*-0.14319);
}

double NNfunction_dRg::synapse0x198a320() {
   return (neuron0x196d4d0()*0.380211);
}

double NNfunction_dRg::synapse0x198a360() {
   return (neuron0x196d810()*-0.113206);
}

double NNfunction_dRg::synapse0x198a3a0() {
   return (neuron0x196db50()*-0.383551);
}

double NNfunction_dRg::synapse0x198a3e0() {
   return (neuron0x196de90()*-0.544994);
}

double NNfunction_dRg::synapse0x1989e70() {
   return (neuron0x196e1d0()*0.0436285);
}

double NNfunction_dRg::synapse0x1989eb0() {
   return (neuron0x196e730()*-0.0820881);
}

double NNfunction_dRg::synapse0x198a530() {
   return (neuron0x196e950()*0.179918);
}

double NNfunction_dRg::synapse0x198a570() {
   return (neuron0x196ec90()*0.209406);
}

double NNfunction_dRg::synapse0x198a5b0() {
   return (neuron0x196efd0()*0.023173);
}

double NNfunction_dRg::synapse0x198a5f0() {
   return (neuron0x196f310()*0.173969);
}

double NNfunction_dRg::synapse0x198a630() {
   return (neuron0x196f650()*-0.0136273);
}

double NNfunction_dRg::synapse0x198a670() {
   return (neuron0x196f990()*-0.00142086);
}

double NNfunction_dRg::synapse0x198a9f0() {
   return (neuron0x196add0()*-0.00279151);
}

double NNfunction_dRg::synapse0x198aa30() {
   return (neuron0x196b110()*-0.00250165);
}

double NNfunction_dRg::synapse0x198aa70() {
   return (neuron0x196b450()*-0.00519125);
}

double NNfunction_dRg::synapse0x198aab0() {
   return (neuron0x196b790()*-2.05944);
}

double NNfunction_dRg::synapse0x198aaf0() {
   return (neuron0x196bad0()*0.013342);
}

double NNfunction_dRg::synapse0x198ab30() {
   return (neuron0x196be10()*0.0241683);
}

double NNfunction_dRg::synapse0x198ab70() {
   return (neuron0x196c150()*0.0251945);
}

double NNfunction_dRg::synapse0x198abb0() {
   return (neuron0x196c490()*0.0104724);
}

double NNfunction_dRg::synapse0x198abf0() {
   return (neuron0x196c7d0()*0.0129615);
}

double NNfunction_dRg::synapse0x198ac30() {
   return (neuron0x196cb10()*-0.0162026);
}

double NNfunction_dRg::synapse0x198ac70() {
   return (neuron0x196ce50()*-0.0197842);
}

double NNfunction_dRg::synapse0x198acb0() {
   return (neuron0x196d190()*0.00997115);
}

double NNfunction_dRg::synapse0x198acf0() {
   return (neuron0x196d4d0()*0.0100153);
}

double NNfunction_dRg::synapse0x198ad30() {
   return (neuron0x196d810()*0.00738886);
}

double NNfunction_dRg::synapse0x198ad70() {
   return (neuron0x196db50()*0.00261994);
}

double NNfunction_dRg::synapse0x198adb0() {
   return (neuron0x196de90()*0.0119472);
}

double NNfunction_dRg::synapse0x198a840() {
   return (neuron0x196e1d0()*0.0302563);
}

double NNfunction_dRg::synapse0x198a880() {
   return (neuron0x196e730()*0.0563045);
}

double NNfunction_dRg::synapse0x198af00() {
   return (neuron0x196e950()*0.00374384);
}

double NNfunction_dRg::synapse0x198af40() {
   return (neuron0x196ec90()*-0.0111348);
}

double NNfunction_dRg::synapse0x198af80() {
   return (neuron0x196efd0()*-0.0045861);
}

double NNfunction_dRg::synapse0x198afc0() {
   return (neuron0x196f310()*-0.0083524);
}

double NNfunction_dRg::synapse0x198b000() {
   return (neuron0x196f650()*0.000379762);
}

double NNfunction_dRg::synapse0x198b040() {
   return (neuron0x196f990()*-0.00885488);
}

double NNfunction_dRg::synapse0x198b3c0() {
   return (neuron0x196add0()*-0.00830999);
}

double NNfunction_dRg::synapse0x198b400() {
   return (neuron0x196b110()*-0.111969);
}

double NNfunction_dRg::synapse0x198b440() {
   return (neuron0x196b450()*0.00296877);
}

double NNfunction_dRg::synapse0x198b480() {
   return (neuron0x196b790()*-0.0773733);
}

double NNfunction_dRg::synapse0x198b4c0() {
   return (neuron0x196bad0()*0.246014);
}

double NNfunction_dRg::synapse0x198b500() {
   return (neuron0x196be10()*0.524953);
}

double NNfunction_dRg::synapse0x198b540() {
   return (neuron0x196c150()*0.197349);
}

double NNfunction_dRg::synapse0x198b580() {
   return (neuron0x196c490()*0.165001);
}

double NNfunction_dRg::synapse0x198b5c0() {
   return (neuron0x196c7d0()*-0.0660504);
}

double NNfunction_dRg::synapse0x198b600() {
   return (neuron0x196cb10()*-0.127467);
}

double NNfunction_dRg::synapse0x198b640() {
   return (neuron0x196ce50()*-0.0685141);
}

double NNfunction_dRg::synapse0x198b680() {
   return (neuron0x196d190()*-0.131001);
}

double NNfunction_dRg::synapse0x198b6c0() {
   return (neuron0x196d4d0()*-0.0544923);
}

double NNfunction_dRg::synapse0x198b700() {
   return (neuron0x196d810()*0.00349043);
}

double NNfunction_dRg::synapse0x198b740() {
   return (neuron0x196db50()*0.0127051);
}

double NNfunction_dRg::synapse0x198b780() {
   return (neuron0x196de90()*0.377854);
}

double NNfunction_dRg::synapse0x198b210() {
   return (neuron0x196e1d0()*-0.0338974);
}

double NNfunction_dRg::synapse0x198b250() {
   return (neuron0x196e730()*-0.906562);
}

double NNfunction_dRg::synapse0x198b8d0() {
   return (neuron0x196e950()*-0.055661);
}

double NNfunction_dRg::synapse0x198b910() {
   return (neuron0x196ec90()*-0.0727395);
}

double NNfunction_dRg::synapse0x198b950() {
   return (neuron0x196efd0()*-0.0680132);
}

double NNfunction_dRg::synapse0x198b990() {
   return (neuron0x196f310()*-0.0578995);
}

double NNfunction_dRg::synapse0x198b9d0() {
   return (neuron0x196f650()*-0.0116925);
}

double NNfunction_dRg::synapse0x198ba10() {
   return (neuron0x196f990()*0.0140141);
}

double NNfunction_dRg::synapse0x198bd90() {
   return (neuron0x196add0()*-0.000123158);
}

double NNfunction_dRg::synapse0x198bdd0() {
   return (neuron0x196b110()*0.0128222);
}

double NNfunction_dRg::synapse0x198be10() {
   return (neuron0x196b450()*0.000908852);
}

double NNfunction_dRg::synapse0x198be50() {
   return (neuron0x196b790()*-8.02772);
}

double NNfunction_dRg::synapse0x198be90() {
   return (neuron0x196bad0()*0.00334678);
}

double NNfunction_dRg::synapse0x198bed0() {
   return (neuron0x196be10()*0.00433894);
}

double NNfunction_dRg::synapse0x198bf10() {
   return (neuron0x196c150()*-0.000801998);
}

double NNfunction_dRg::synapse0x198bf50() {
   return (neuron0x196c490()*-0.000379778);
}

double NNfunction_dRg::synapse0x198bf90() {
   return (neuron0x196c7d0()*-0.00392084);
}

double NNfunction_dRg::synapse0x198bfd0() {
   return (neuron0x196cb10()*-0.00999863);
}

double NNfunction_dRg::synapse0x198c010() {
   return (neuron0x196ce50()*-0.00897473);
}

double NNfunction_dRg::synapse0x198c050() {
   return (neuron0x196d190()*0.0238099);
}

double NNfunction_dRg::synapse0x198c090() {
   return (neuron0x196d4d0()*0.0254111);
}

double NNfunction_dRg::synapse0x198c0d0() {
   return (neuron0x196d810()*-0.00465975);
}

double NNfunction_dRg::synapse0x198c110() {
   return (neuron0x196db50()*0.00496714);
}

double NNfunction_dRg::synapse0x198c150() {
   return (neuron0x196de90()*-0.00378602);
}

double NNfunction_dRg::synapse0x198bbe0() {
   return (neuron0x196e1d0()*0.00302515);
}

double NNfunction_dRg::synapse0x198bc20() {
   return (neuron0x196e730()*-0.0599741);
}

double NNfunction_dRg::synapse0x198c2a0() {
   return (neuron0x196e950()*0.0154018);
}

double NNfunction_dRg::synapse0x198c2e0() {
   return (neuron0x196ec90()*0.00101873);
}

double NNfunction_dRg::synapse0x198c320() {
   return (neuron0x196efd0()*0.00389537);
}

double NNfunction_dRg::synapse0x198c360() {
   return (neuron0x196f310()*0.00895102);
}

double NNfunction_dRg::synapse0x198c3a0() {
   return (neuron0x196f650()*-0.00803539);
}

double NNfunction_dRg::synapse0x198c3e0() {
   return (neuron0x196f990()*-0.00800185);
}

double NNfunction_dRg::synapse0x1974e90() {
   return (neuron0x196add0()*-0.0118885);
}

double NNfunction_dRg::synapse0x1974ed0() {
   return (neuron0x196b110()*-0.141462);
}

double NNfunction_dRg::synapse0x1974f10() {
   return (neuron0x196b450()*0.0109251);
}

double NNfunction_dRg::synapse0x1974f50() {
   return (neuron0x196b790()*-0.594396);
}

double NNfunction_dRg::synapse0x1974f90() {
   return (neuron0x196bad0()*0.190177);
}

double NNfunction_dRg::synapse0x1974fd0() {
   return (neuron0x196be10()*0.0625774);
}

double NNfunction_dRg::synapse0x1975010() {
   return (neuron0x196c150()*0.0311237);
}

double NNfunction_dRg::synapse0x1975050() {
   return (neuron0x196c490()*0.0004772);
}

double NNfunction_dRg::synapse0x198cb70() {
   return (neuron0x196c7d0()*-0.0307585);
}

double NNfunction_dRg::synapse0x198cbb0() {
   return (neuron0x196cb10()*0.0356189);
}

double NNfunction_dRg::synapse0x198cbf0() {
   return (neuron0x196ce50()*0.0164149);
}

double NNfunction_dRg::synapse0x198cc30() {
   return (neuron0x196d190()*-0.0134039);
}

double NNfunction_dRg::synapse0x198cc70() {
   return (neuron0x196d4d0()*-0.0117535);
}

double NNfunction_dRg::synapse0x198ccb0() {
   return (neuron0x196d810()*-0.0607268);
}

double NNfunction_dRg::synapse0x198ccf0() {
   return (neuron0x196db50()*-0.903729);
}

double NNfunction_dRg::synapse0x198cd30() {
   return (neuron0x196de90()*0.128961);
}

double NNfunction_dRg::synapse0x198c5b0() {
   return (neuron0x196e1d0()*0.0276578);
}

double NNfunction_dRg::synapse0x198c5f0() {
   return (neuron0x196e730()*0.304347);
}

double NNfunction_dRg::synapse0x198ce80() {
   return (neuron0x196e950()*-0.0166118);
}

double NNfunction_dRg::synapse0x198cec0() {
   return (neuron0x196ec90()*-0.0538888);
}

double NNfunction_dRg::synapse0x198cf00() {
   return (neuron0x196efd0()*-0.0397055);
}

double NNfunction_dRg::synapse0x198cf40() {
   return (neuron0x196f310()*0.00195562);
}

double NNfunction_dRg::synapse0x198cf80() {
   return (neuron0x196f650()*0.0649405);
}

double NNfunction_dRg::synapse0x198cfc0() {
   return (neuron0x196f990()*0.0196439);
}

double NNfunction_dRg::synapse0x198d340() {
   return (neuron0x196add0()*0.00328391);
}

double NNfunction_dRg::synapse0x198d380() {
   return (neuron0x196b110()*-0.00693755);
}

double NNfunction_dRg::synapse0x198d3c0() {
   return (neuron0x196b450()*-0.00140343);
}

double NNfunction_dRg::synapse0x198d400() {
   return (neuron0x196b790()*-0.18434);
}

double NNfunction_dRg::synapse0x198d440() {
   return (neuron0x196bad0()*-0.00430158);
}

double NNfunction_dRg::synapse0x198d480() {
   return (neuron0x196be10()*0.00826316);
}

double NNfunction_dRg::synapse0x198d4c0() {
   return (neuron0x196c150()*-0.00736943);
}

double NNfunction_dRg::synapse0x198d500() {
   return (neuron0x196c490()*0.00117552);
}

double NNfunction_dRg::synapse0x198d540() {
   return (neuron0x196c7d0()*-0.0606031);
}

double NNfunction_dRg::synapse0x198d580() {
   return (neuron0x196cb10()*0.0682572);
}

double NNfunction_dRg::synapse0x198d5c0() {
   return (neuron0x196ce50()*-0.062176);
}

double NNfunction_dRg::synapse0x198d600() {
   return (neuron0x196d190()*0.000239363);
}

double NNfunction_dRg::synapse0x198d640() {
   return (neuron0x196d4d0()*-0.00739812);
}

double NNfunction_dRg::synapse0x198d680() {
   return (neuron0x196d810()*-0.00341074);
}

double NNfunction_dRg::synapse0x198d6c0() {
   return (neuron0x196db50()*-0.0091178);
}

double NNfunction_dRg::synapse0x198d700() {
   return (neuron0x196de90()*0.000691355);
}

double NNfunction_dRg::synapse0x198d190() {
   return (neuron0x196e1d0()*-0.0115831);
}

double NNfunction_dRg::synapse0x198d1d0() {
   return (neuron0x196e730()*-0.528411);
}

double NNfunction_dRg::synapse0x198d850() {
   return (neuron0x196e950()*0.010151);
}

double NNfunction_dRg::synapse0x198d890() {
   return (neuron0x196ec90()*-0.0109882);
}

double NNfunction_dRg::synapse0x198d8d0() {
   return (neuron0x196efd0()*-0.00562238);
}

double NNfunction_dRg::synapse0x198d910() {
   return (neuron0x196f310()*0.00698855);
}

double NNfunction_dRg::synapse0x198d950() {
   return (neuron0x196f650()*0.00795429);
}

double NNfunction_dRg::synapse0x198d990() {
   return (neuron0x196f990()*0.00647465);
}

double NNfunction_dRg::synapse0x198dd10() {
   return (neuron0x196add0()*-0.00581378);
}

double NNfunction_dRg::synapse0x198dd50() {
   return (neuron0x196b110()*-0.0199468);
}

double NNfunction_dRg::synapse0x198dd90() {
   return (neuron0x196b450()*-0.00818212);
}

double NNfunction_dRg::synapse0x198ddd0() {
   return (neuron0x196b790()*1.52229);
}

double NNfunction_dRg::synapse0x198de10() {
   return (neuron0x196bad0()*0.0378996);
}

double NNfunction_dRg::synapse0x198de50() {
   return (neuron0x196be10()*0.0396772);
}

double NNfunction_dRg::synapse0x198de90() {
   return (neuron0x196c150()*0.045196);
}

double NNfunction_dRg::synapse0x198ded0() {
   return (neuron0x196c490()*0.0305646);
}

double NNfunction_dRg::synapse0x198df10() {
   return (neuron0x196c7d0()*0.00139319);
}

double NNfunction_dRg::synapse0x198df50() {
   return (neuron0x196cb10()*-0.0232497);
}

double NNfunction_dRg::synapse0x198df90() {
   return (neuron0x196ce50()*-0.0253143);
}

double NNfunction_dRg::synapse0x198dfd0() {
   return (neuron0x196d190()*-0.0183283);
}

double NNfunction_dRg::synapse0x198e010() {
   return (neuron0x196d4d0()*-0.0182067);
}

double NNfunction_dRg::synapse0x198e050() {
   return (neuron0x196d810()*0.013372);
}

double NNfunction_dRg::synapse0x198e090() {
   return (neuron0x196db50()*0.0292455);
}

double NNfunction_dRg::synapse0x198e0d0() {
   return (neuron0x196de90()*0.0413893);
}

double NNfunction_dRg::synapse0x198db60() {
   return (neuron0x196e1d0()*0.0453754);
}

double NNfunction_dRg::synapse0x198dba0() {
   return (neuron0x196e730()*-0.158101);
}

double NNfunction_dRg::synapse0x197e6d0() {
   return (neuron0x196e950()*-0.00857296);
}

double NNfunction_dRg::synapse0x197e710() {
   return (neuron0x196ec90()*-0.0336103);
}

double NNfunction_dRg::synapse0x197e750() {
   return (neuron0x196efd0()*-0.0156696);
}

double NNfunction_dRg::synapse0x197e790() {
   return (neuron0x196f310()*-0.0213992);
}

double NNfunction_dRg::synapse0x197e7d0() {
   return (neuron0x196f650()*0.00666861);
}

double NNfunction_dRg::synapse0x197e810() {
   return (neuron0x196f990()*-0.00910754);
}

double NNfunction_dRg::synapse0x197eb90() {
   return (neuron0x196add0()*-0.0135941);
}

double NNfunction_dRg::synapse0x197ebd0() {
   return (neuron0x196b110()*0.211267);
}

double NNfunction_dRg::synapse0x197ec10() {
   return (neuron0x196b450()*-0.0378145);
}

double NNfunction_dRg::synapse0x197ec50() {
   return (neuron0x196b790()*-0.0697831);
}

double NNfunction_dRg::synapse0x197ec90() {
   return (neuron0x196bad0()*0.274926);
}

double NNfunction_dRg::synapse0x197ecd0() {
   return (neuron0x196be10()*0.145032);
}

double NNfunction_dRg::synapse0x197ed10() {
   return (neuron0x196c150()*0.309805);
}

double NNfunction_dRg::synapse0x197ed50() {
   return (neuron0x196c490()*-0.150703);
}

double NNfunction_dRg::synapse0x197ed90() {
   return (neuron0x196c7d0()*-0.08893);
}

double NNfunction_dRg::synapse0x197edd0() {
   return (neuron0x196cb10()*0.025596);
}

double NNfunction_dRg::synapse0x197ee10() {
   return (neuron0x196ce50()*-0.0320137);
}

double NNfunction_dRg::synapse0x197ee50() {
   return (neuron0x196d190()*-0.0651212);
}

double NNfunction_dRg::synapse0x197ee90() {
   return (neuron0x196d4d0()*-0.0536807);
}

double NNfunction_dRg::synapse0x197eed0() {
   return (neuron0x196d810()*0.197885);
}

double NNfunction_dRg::synapse0x197ef10() {
   return (neuron0x196db50()*-0.370426);
}

double NNfunction_dRg::synapse0x197ef50() {
   return (neuron0x196de90()*0.0721185);
}

double NNfunction_dRg::synapse0x197e9e0() {
   return (neuron0x196e1d0()*-0.0118155);
}

double NNfunction_dRg::synapse0x197ea20() {
   return (neuron0x196e730()*1.30051);
}

double NNfunction_dRg::synapse0x197f0a0() {
   return (neuron0x196e950()*-0.170761);
}

double NNfunction_dRg::synapse0x197f0e0() {
   return (neuron0x196ec90()*-0.0506147);
}

double NNfunction_dRg::synapse0x197f120() {
   return (neuron0x196efd0()*0.00346053);
}

double NNfunction_dRg::synapse0x197f160() {
   return (neuron0x196f310()*0.0248255);
}

double NNfunction_dRg::synapse0x197f1a0() {
   return (neuron0x196f650()*-0.0589937);
}

double NNfunction_dRg::synapse0x197f1e0() {
   return (neuron0x196f990()*-0.00871181);
}

double NNfunction_dRg::synapse0x197f560() {
   return (neuron0x196add0()*-0.212361);
}

double NNfunction_dRg::synapse0x197f5a0() {
   return (neuron0x196b110()*0.141476);
}

double NNfunction_dRg::synapse0x197f5e0() {
   return (neuron0x196b450()*-0.133761);
}

double NNfunction_dRg::synapse0x197f620() {
   return (neuron0x196b790()*0.485926);
}

double NNfunction_dRg::synapse0x197f660() {
   return (neuron0x196bad0()*-0.00607456);
}

double NNfunction_dRg::synapse0x197f6a0() {
   return (neuron0x196be10()*-0.290377);
}

double NNfunction_dRg::synapse0x197f6e0() {
   return (neuron0x196c150()*0.222755);
}

double NNfunction_dRg::synapse0x197f720() {
   return (neuron0x196c490()*0.255005);
}

double NNfunction_dRg::synapse0x197f760() {
   return (neuron0x196c7d0()*0.140906);
}

double NNfunction_dRg::synapse0x197f7a0() {
   return (neuron0x196cb10()*-0.120619);
}

double NNfunction_dRg::synapse0x197f7e0() {
   return (neuron0x196ce50()*-0.250684);
}

double NNfunction_dRg::synapse0x197f820() {
   return (neuron0x196d190()*-0.225757);
}

double NNfunction_dRg::synapse0x197f860() {
   return (neuron0x196d4d0()*-0.285298);
}

double NNfunction_dRg::synapse0x197f8a0() {
   return (neuron0x196d810()*-0.29502);
}

double NNfunction_dRg::synapse0x197f8e0() {
   return (neuron0x196db50()*0.194071);
}

double NNfunction_dRg::synapse0x197f920() {
   return (neuron0x196de90()*0.0183713);
}

double NNfunction_dRg::synapse0x197f3b0() {
   return (neuron0x196e1d0()*0.0189174);
}

double NNfunction_dRg::synapse0x197f3f0() {
   return (neuron0x196e730()*0.408243);
}

double NNfunction_dRg::synapse0x197fa70() {
   return (neuron0x196e950()*-0.125617);
}

double NNfunction_dRg::synapse0x197fab0() {
   return (neuron0x196ec90()*-0.20849);
}

double NNfunction_dRg::synapse0x197faf0() {
   return (neuron0x196efd0()*-0.291402);
}

double NNfunction_dRg::synapse0x197fb30() {
   return (neuron0x196f310()*-0.0620679);
}

double NNfunction_dRg::synapse0x197fb70() {
   return (neuron0x196f650()*0.165684);
}

double NNfunction_dRg::synapse0x197fbb0() {
   return (neuron0x196f990()*-0.154591);
}

double NNfunction_dRg::synapse0x197ff30() {
   return (neuron0x196add0()*-0.024901);
}

double NNfunction_dRg::synapse0x197ff70() {
   return (neuron0x196b110()*0.0116898);
}

double NNfunction_dRg::synapse0x197ffb0() {
   return (neuron0x196b450()*-0.0234891);
}

double NNfunction_dRg::synapse0x197fff0() {
   return (neuron0x196b790()*2.43548);
}

double NNfunction_dRg::synapse0x1980030() {
   return (neuron0x196bad0()*0.0111289);
}

double NNfunction_dRg::synapse0x1980070() {
   return (neuron0x196be10()*-0.00286087);
}

double NNfunction_dRg::synapse0x19800b0() {
   return (neuron0x196c150()*-0.0276745);
}

double NNfunction_dRg::synapse0x19800f0() {
   return (neuron0x196c490()*0.0029652);
}

double NNfunction_dRg::synapse0x1980130() {
   return (neuron0x196c7d0()*-0.0455187);
}

double NNfunction_dRg::synapse0x1980170() {
   return (neuron0x196cb10()*-0.0395214);
}

double NNfunction_dRg::synapse0x19801b0() {
   return (neuron0x196ce50()*0.00288954);
}

double NNfunction_dRg::synapse0x19801f0() {
   return (neuron0x196d190()*0.58362);
}

double NNfunction_dRg::synapse0x1980230() {
   return (neuron0x196d4d0()*0.582571);
}

double NNfunction_dRg::synapse0x1980270() {
   return (neuron0x196d810()*-0.013533);
}

double NNfunction_dRg::synapse0x19802b0() {
   return (neuron0x196db50()*0.27117);
}

double NNfunction_dRg::synapse0x19802f0() {
   return (neuron0x196de90()*0.265989);
}

double NNfunction_dRg::synapse0x197fd80() {
   return (neuron0x196e1d0()*0.0306572);
}

double NNfunction_dRg::synapse0x197fdc0() {
   return (neuron0x196e730()*-0.0358021);
}

double NNfunction_dRg::synapse0x1980440() {
   return (neuron0x196e950()*0.320136);
}

double NNfunction_dRg::synapse0x1980480() {
   return (neuron0x196ec90()*-0.019033);
}

double NNfunction_dRg::synapse0x19804c0() {
   return (neuron0x196efd0()*-0.00263499);
}

double NNfunction_dRg::synapse0x1980500() {
   return (neuron0x196f310()*0.0314084);
}

double NNfunction_dRg::synapse0x1980540() {
   return (neuron0x196f650()*-0.0238331);
}

double NNfunction_dRg::synapse0x1980580() {
   return (neuron0x196f990()*-0.0326616);
}

double NNfunction_dRg::synapse0x1992450() {
   return (neuron0x196add0()*0.234594);
}

double NNfunction_dRg::synapse0x1992490() {
   return (neuron0x196b110()*-0.369588);
}

double NNfunction_dRg::synapse0x19924d0() {
   return (neuron0x196b450()*-0.237549);
}

double NNfunction_dRg::synapse0x1992510() {
   return (neuron0x196b790()*0.85979);
}

double NNfunction_dRg::synapse0x1992550() {
   return (neuron0x196bad0()*-0.344094);
}

double NNfunction_dRg::synapse0x1992590() {
   return (neuron0x196be10()*0.0452696);
}

double NNfunction_dRg::synapse0x19925d0() {
   return (neuron0x196c150()*0.263563);
}

double NNfunction_dRg::synapse0x1992610() {
   return (neuron0x196c490()*0.238418);
}

double NNfunction_dRg::synapse0x1992650() {
   return (neuron0x196c7d0()*-0.277002);
}

double NNfunction_dRg::synapse0x1992690() {
   return (neuron0x196cb10()*-0.0175052);
}

double NNfunction_dRg::synapse0x19926d0() {
   return (neuron0x196ce50()*-0.122344);
}

double NNfunction_dRg::synapse0x1992710() {
   return (neuron0x196d190()*0.0257427);
}

double NNfunction_dRg::synapse0x1992750() {
   return (neuron0x196d4d0()*0.0222058);
}

double NNfunction_dRg::synapse0x1992790() {
   return (neuron0x196d810()*0.214403);
}

double NNfunction_dRg::synapse0x19927d0() {
   return (neuron0x196db50()*-0.0404056);
}

double NNfunction_dRg::synapse0x1992810() {
   return (neuron0x196de90()*-0.0475192);
}

double NNfunction_dRg::synapse0x19805c0() {
   return (neuron0x196e1d0()*0.30384);
}

double NNfunction_dRg::synapse0x1980600() {
   return (neuron0x196e730()*-0.113346);
}

double NNfunction_dRg::synapse0x1992960() {
   return (neuron0x196e950()*0.4939);
}

double NNfunction_dRg::synapse0x19929a0() {
   return (neuron0x196ec90()*-0.159697);
}

double NNfunction_dRg::synapse0x19929e0() {
   return (neuron0x196efd0()*0.192198);
}

double NNfunction_dRg::synapse0x1992a20() {
   return (neuron0x196f310()*-0.514432);
}

double NNfunction_dRg::synapse0x1992a60() {
   return (neuron0x196f650()*0.387084);
}

double NNfunction_dRg::synapse0x1992aa0() {
   return (neuron0x196f990()*-0.118805);
}

double NNfunction_dRg::synapse0x1992e20() {
   return (neuron0x196add0()*0.0145988);
}

double NNfunction_dRg::synapse0x1992e60() {
   return (neuron0x196b110()*0.0202344);
}

double NNfunction_dRg::synapse0x1992ea0() {
   return (neuron0x196b450()*0.0136973);
}

double NNfunction_dRg::synapse0x1992ee0() {
   return (neuron0x196b790()*0.0730201);
}

double NNfunction_dRg::synapse0x1992f20() {
   return (neuron0x196bad0()*0.0256034);
}

double NNfunction_dRg::synapse0x1992f60() {
   return (neuron0x196be10()*0.0207001);
}

double NNfunction_dRg::synapse0x1992fa0() {
   return (neuron0x196c150()*0.0219379);
}

double NNfunction_dRg::synapse0x1992fe0() {
   return (neuron0x196c490()*0.0242222);
}

double NNfunction_dRg::synapse0x1993020() {
   return (neuron0x196c7d0()*0.114487);
}

double NNfunction_dRg::synapse0x1993060() {
   return (neuron0x196cb10()*-0.132564);
}

double NNfunction_dRg::synapse0x19930a0() {
   return (neuron0x196ce50()*-0.199524);
}

double NNfunction_dRg::synapse0x19930e0() {
   return (neuron0x196d190()*-0.015638);
}

double NNfunction_dRg::synapse0x1993120() {
   return (neuron0x196d4d0()*0.0118834);
}

double NNfunction_dRg::synapse0x1993160() {
   return (neuron0x196d810()*-0.0519888);
}

double NNfunction_dRg::synapse0x19931a0() {
   return (neuron0x196db50()*0.0586895);
}

double NNfunction_dRg::synapse0x19931e0() {
   return (neuron0x196de90()*0.0761373);
}

double NNfunction_dRg::synapse0x1992c70() {
   return (neuron0x196e1d0()*0.00365199);
}

double NNfunction_dRg::synapse0x1992cb0() {
   return (neuron0x196e730()*-0.338458);
}

double NNfunction_dRg::synapse0x1993330() {
   return (neuron0x196e950()*-0.0186071);
}

double NNfunction_dRg::synapse0x1993370() {
   return (neuron0x196ec90()*-0.0230093);
}

double NNfunction_dRg::synapse0x19933b0() {
   return (neuron0x196efd0()*0.000496833);
}

double NNfunction_dRg::synapse0x19933f0() {
   return (neuron0x196f310()*-0.0385753);
}

double NNfunction_dRg::synapse0x1993430() {
   return (neuron0x196f650()*-0.0348614);
}

double NNfunction_dRg::synapse0x1993470() {
   return (neuron0x196f990()*-0.0158583);
}

double NNfunction_dRg::synapse0x19937f0() {
   return (neuron0x196add0()*0.0796277);
}

double NNfunction_dRg::synapse0x1993830() {
   return (neuron0x196b110()*0.273944);
}

double NNfunction_dRg::synapse0x1993870() {
   return (neuron0x196b450()*-0.0391342);
}

double NNfunction_dRg::synapse0x19938b0() {
   return (neuron0x196b790()*0.589213);
}

double NNfunction_dRg::synapse0x19938f0() {
   return (neuron0x196bad0()*-0.211854);
}

double NNfunction_dRg::synapse0x1993930() {
   return (neuron0x196be10()*-0.0855811);
}

double NNfunction_dRg::synapse0x1993970() {
   return (neuron0x196c150()*0.251245);
}

double NNfunction_dRg::synapse0x19939b0() {
   return (neuron0x196c490()*0.239491);
}

double NNfunction_dRg::synapse0x19939f0() {
   return (neuron0x196c7d0()*-0.225229);
}

double NNfunction_dRg::synapse0x1993a30() {
   return (neuron0x196cb10()*-0.322473);
}

double NNfunction_dRg::synapse0x1993a70() {
   return (neuron0x196ce50()*0.657099);
}

double NNfunction_dRg::synapse0x1993ab0() {
   return (neuron0x196d190()*0.426744);
}

double NNfunction_dRg::synapse0x1993af0() {
   return (neuron0x196d4d0()*0.44645);
}

double NNfunction_dRg::synapse0x1993b30() {
   return (neuron0x196d810()*0.147354);
}

double NNfunction_dRg::synapse0x1993b70() {
   return (neuron0x196db50()*0.155014);
}

double NNfunction_dRg::synapse0x1993bb0() {
   return (neuron0x196de90()*0.040525);
}

double NNfunction_dRg::synapse0x1993640() {
   return (neuron0x196e1d0()*0.163199);
}

double NNfunction_dRg::synapse0x1993680() {
   return (neuron0x196e730()*0.774823);
}

double NNfunction_dRg::synapse0x1993d00() {
   return (neuron0x196e950()*0.311735);
}

double NNfunction_dRg::synapse0x1993d40() {
   return (neuron0x196ec90()*0.287945);
}

double NNfunction_dRg::synapse0x1993d80() {
   return (neuron0x196efd0()*-0.193996);
}

double NNfunction_dRg::synapse0x1993dc0() {
   return (neuron0x196f310()*-0.049371);
}

double NNfunction_dRg::synapse0x1993e00() {
   return (neuron0x196f650()*-0.0711956);
}

double NNfunction_dRg::synapse0x1993e40() {
   return (neuron0x196f990()*0.0346478);
}

double NNfunction_dRg::synapse0x19941c0() {
   return (neuron0x196add0()*-0.0338418);
}

double NNfunction_dRg::synapse0x1994200() {
   return (neuron0x196b110()*0.378974);
}

double NNfunction_dRg::synapse0x1994240() {
   return (neuron0x196b450()*-0.0693968);
}

double NNfunction_dRg::synapse0x1994280() {
   return (neuron0x196b790()*-0.0912559);
}

double NNfunction_dRg::synapse0x19942c0() {
   return (neuron0x196bad0()*-0.0349092);
}

double NNfunction_dRg::synapse0x1994300() {
   return (neuron0x196be10()*-0.0349177);
}

double NNfunction_dRg::synapse0x1994340() {
   return (neuron0x196c150()*-0.0368198);
}

double NNfunction_dRg::synapse0x1994380() {
   return (neuron0x196c490()*-0.583318);
}

double NNfunction_dRg::synapse0x19943c0() {
   return (neuron0x196c7d0()*-0.03952);
}

double NNfunction_dRg::synapse0x1994400() {
   return (neuron0x196cb10()*-0.0408635);
}

double NNfunction_dRg::synapse0x1994440() {
   return (neuron0x196ce50()*-0.0513802);
}

double NNfunction_dRg::synapse0x1994480() {
   return (neuron0x196d190()*0.0639582);
}

double NNfunction_dRg::synapse0x19944c0() {
   return (neuron0x196d4d0()*0.0926448);
}

double NNfunction_dRg::synapse0x1994500() {
   return (neuron0x196d810()*-0.231625);
}

double NNfunction_dRg::synapse0x1994540() {
   return (neuron0x196db50()*0.0380805);
}

double NNfunction_dRg::synapse0x1994580() {
   return (neuron0x196de90()*0.169719);
}

double NNfunction_dRg::synapse0x1994010() {
   return (neuron0x196e1d0()*-0.0764045);
}

double NNfunction_dRg::synapse0x1994050() {
   return (neuron0x196e730()*0.370191);
}

double NNfunction_dRg::synapse0x19946d0() {
   return (neuron0x196e950()*0.0236243);
}

double NNfunction_dRg::synapse0x1994710() {
   return (neuron0x196ec90()*0.0152335);
}

double NNfunction_dRg::synapse0x1994750() {
   return (neuron0x196efd0()*0.0264488);
}

double NNfunction_dRg::synapse0x1994790() {
   return (neuron0x196f310()*-0.00618011);
}

double NNfunction_dRg::synapse0x19947d0() {
   return (neuron0x196f650()*-0.00496846);
}

double NNfunction_dRg::synapse0x1994810() {
   return (neuron0x196f990()*0.0712295);
}

double NNfunction_dRg::synapse0x172abe0() {
   return (neuron0x196fe00()*0.0240039);
}

double NNfunction_dRg::synapse0x172ac20() {
   return (neuron0x1970750()*0.107044);
}

double NNfunction_dRg::synapse0x19722c0() {
   return (neuron0x1971230()*0.486528);
}

double NNfunction_dRg::synapse0x1972300() {
   return (neuron0x1970cd0()*0.0344012);
}

double NNfunction_dRg::synapse0x1972c90() {
   return (neuron0x1972010()*0.0801119);
}

double NNfunction_dRg::synapse0x1972cd0() {
   return (neuron0x19729e0()*-0.0753196);
}

double NNfunction_dRg::synapse0x1973a60() {
   return (neuron0x19737b0()*0.552266);
}

double NNfunction_dRg::synapse0x1973aa0() {
   return (neuron0x1974180()*0.284084);
}

double NNfunction_dRg::synapse0x1974430() {
   return (neuron0x1974b50()*-0.234981);
}

double NNfunction_dRg::synapse0x1974470() {
   return (neuron0x1975630()*0.367566);
}

double NNfunction_dRg::synapse0x1974e00() {
   return (neuron0x1976000()*0.534712);
}

double NNfunction_dRg::synapse0x1974e40() {
   return (neuron0x19730e0()*0.961033);
}

double NNfunction_dRg::synapse0x19758e0() {
   return (neuron0x1977bb0()*-0.139047);
}

double NNfunction_dRg::synapse0x1975920() {
   return (neuron0x1978580()*0.600058);
}

double NNfunction_dRg::synapse0x19762b0() {
   return (neuron0x1978f50()*0.71775);
}

double NNfunction_dRg::synapse0x19762f0() {
   return (neuron0x1979920()*-0.291374);
}

double NNfunction_dRg::synapse0x1973390() {
   return (neuron0x197b730()*0.288095);
}

double NNfunction_dRg::synapse0x19733d0() {
   return (neuron0x197ba10()*0.805768);
}

double NNfunction_dRg::synapse0x1977e60() {
   return (neuron0x197c3e0()*0.534114);
}

double NNfunction_dRg::synapse0x1977ea0() {
   return (neuron0x197cdb0()*0.733471);
}

double NNfunction_dRg::synapse0x1978830() {
   return (neuron0x197d780()*0.449648);
}

double NNfunction_dRg::synapse0x1978870() {
   return (neuron0x197e150()*0.583213);
}

double NNfunction_dRg::synapse0x1979200() {
   return (neuron0x1976ca0()*0.260209);
}

double NNfunction_dRg::synapse0x1979240() {
   return (neuron0x1977670()*0.588406);
}

double NNfunction_dRg::synapse0x1979bd0() {
   return (neuron0x1980ee0()*-0.564875);
}

double NNfunction_dRg::synapse0x1979c10() {
   return (neuron0x19818b0()*0.682984);
}

double NNfunction_dRg::synapse0x196dd70() {
   return (neuron0x1982280()*-0.0511656);
}

double NNfunction_dRg::synapse0x196ddb0() {
   return (neuron0x1982c50()*-0.638896);
}

double NNfunction_dRg::synapse0x197bcc0() {
   return (neuron0x1983620()*0.576727);
}

double NNfunction_dRg::synapse0x197bd00() {
   return (neuron0x1983ff0()*0.56021);
}

double NNfunction_dRg::synapse0x197c690() {
   return (neuron0x19849c0()*0.662461);
}

double NNfunction_dRg::synapse0x197c6d0() {
   return (neuron0x1985390()*0.607866);
}

double NNfunction_dRg::synapse0x197d060() {
   return (neuron0x197b420()*0.162071);
}

double NNfunction_dRg::synapse0x197d0a0() {
   return (neuron0x1987f70()*0.568044);
}

double NNfunction_dRg::synapse0x197da30() {
   return (neuron0x1988940()*-0.0996205);
}

double NNfunction_dRg::synapse0x197da70() {
   return (neuron0x1989310()*-0.150821);
}

double NNfunction_dRg::synapse0x197e400() {
   return (neuron0x1989ce0()*-0.200378);
}

double NNfunction_dRg::synapse0x197e440() {
   return (neuron0x198a6b0()*0.0601985);
}

double NNfunction_dRg::synapse0x1976f50() {
   return (neuron0x198b080()*-0.0105873);
}

double NNfunction_dRg::synapse0x1976f90() {
   return (neuron0x198ba50()*1.01247);
}

double NNfunction_dRg::synapse0x1980800() {
   return (neuron0x198c420()*0.537099);
}

double NNfunction_dRg::synapse0x1980840() {
   return (neuron0x198d000()*0.743942);
}

double NNfunction_dRg::synapse0x1981190() {
   return (neuron0x198d9d0()*0.395083);
}

double NNfunction_dRg::synapse0x19811d0() {
   return (neuron0x197e850()*-0.171599);
}

double NNfunction_dRg::synapse0x1981b60() {
   return (neuron0x197f220()*0.515968);
}

double NNfunction_dRg::synapse0x1981ba0() {
   return (neuron0x197fbf0()*0.220319);
}

double NNfunction_dRg::synapse0x1982530() {
   return (neuron0x1992230()*-0.467729);
}

double NNfunction_dRg::synapse0x1982570() {
   return (neuron0x1992ae0()*0.452429);
}

double NNfunction_dRg::synapse0x1982f00() {
   return (neuron0x19934b0()*0.459424);
}

double NNfunction_dRg::synapse0x1982f40() {
   return (neuron0x1993e80()*0.525904);
}

double NNfunction_dRg::synapse0x1985640() {
   return (neuron0x196fe00()*0.0192249);
}

double NNfunction_dRg::synapse0x1985680() {
   return (neuron0x1970750()*1.00273);
}

double NNfunction_dRg::synapse0x197ac00() {
   return (neuron0x1971230()*-0.0858968);
}

double NNfunction_dRg::synapse0x197ac40() {
   return (neuron0x1970cd0()*0.104484);
}

double NNfunction_dRg::synapse0x1988220() {
   return (neuron0x1972010()*0.339534);
}

double NNfunction_dRg::synapse0x1988260() {
   return (neuron0x19729e0()*1.04357);
}

double NNfunction_dRg::synapse0x1988bf0() {
   return (neuron0x19737b0()*-5.03341);
}

double NNfunction_dRg::synapse0x1988c30() {
   return (neuron0x1974180()*0.780592);
}

double NNfunction_dRg::synapse0x19895c0() {
   return (neuron0x1974b50()*0.037934);
}

double NNfunction_dRg::synapse0x1989600() {
   return (neuron0x1975630()*-0.0660068);
}

double NNfunction_dRg::synapse0x1989f90() {
   return (neuron0x1976000()*0.189877);
}

double NNfunction_dRg::synapse0x1989fd0() {
   return (neuron0x19730e0()*1.90942);
}

double NNfunction_dRg::synapse0x198a960() {
   return (neuron0x1977bb0()*-0.320082);
}

double NNfunction_dRg::synapse0x198a9a0() {
   return (neuron0x1978580()*0.79342);
}

double NNfunction_dRg::synapse0x198b330() {
   return (neuron0x1978f50()*0.384648);
}

double NNfunction_dRg::synapse0x198b370() {
   return (neuron0x1979920()*-0.0991565);
}

double NNfunction_dRg::synapse0x198bd00() {
   return (neuron0x197b730()*-0.233729);
}

double NNfunction_dRg::synapse0x198bd40() {
   return (neuron0x197ba10()*-0.194861);
}

double NNfunction_dRg::synapse0x198c6d0() {
   return (neuron0x197c3e0()*-0.133096);
}

double NNfunction_dRg::synapse0x198c710() {
   return (neuron0x197cdb0()*-0.324969);
}

double NNfunction_dRg::synapse0x198d2b0() {
   return (neuron0x197d780()*0.378272);
}

double NNfunction_dRg::synapse0x198d2f0() {
   return (neuron0x197e150()*-0.119258);
}

double NNfunction_dRg::synapse0x198dc80() {
   return (neuron0x1976ca0()*-1.01124);
}

double NNfunction_dRg::synapse0x198dcc0() {
   return (neuron0x1977670()*-1.20086);
}

double NNfunction_dRg::synapse0x197eb00() {
   return (neuron0x1980ee0()*0.172321);
}

double NNfunction_dRg::synapse0x197eb40() {
   return (neuron0x19818b0()*0.354084);
}

double NNfunction_dRg::synapse0x197f4d0() {
   return (neuron0x1982280()*-0.988896);
}

double NNfunction_dRg::synapse0x197f510() {
   return (neuron0x1982c50()*0.213461);
}

double NNfunction_dRg::synapse0x197fea0() {
   return (neuron0x1983620()*-0.0213179);
}

double NNfunction_dRg::synapse0x197fee0() {
   return (neuron0x1983ff0()*-0.391074);
}

double NNfunction_dRg::synapse0x19923c0() {
   return (neuron0x19849c0()*-0.645973);
}

double NNfunction_dRg::synapse0x1992400() {
   return (neuron0x1985390()*-0.573883);
}

double NNfunction_dRg::synapse0x1992d90() {
   return (neuron0x197b420()*0.943895);
}

double NNfunction_dRg::synapse0x1992dd0() {
   return (neuron0x1987f70()*0.195);
}

double NNfunction_dRg::synapse0x1993760() {
   return (neuron0x1988940()*-0.346236);
}

double NNfunction_dRg::synapse0x19937a0() {
   return (neuron0x1989310()*-0.0262364);
}

double NNfunction_dRg::synapse0x1994130() {
   return (neuron0x1989ce0()*0.256885);
}

double NNfunction_dRg::synapse0x1994170() {
   return (neuron0x198a6b0()*-0.26538);
}

double NNfunction_dRg::synapse0x1970020() {
   return (neuron0x198b080()*-0.11444);
}

double NNfunction_dRg::synapse0x1970060() {
   return (neuron0x198ba50()*-0.434547);
}

double NNfunction_dRg::synapse0x19838d0() {
   return (neuron0x198c420()*0.190968);
}

double NNfunction_dRg::synapse0x1983910() {
   return (neuron0x198d000()*0.254102);
}

double NNfunction_dRg::synapse0x1994850() {
   return (neuron0x198d9d0()*0.804928);
}

double NNfunction_dRg::synapse0x1994890() {
   return (neuron0x197e850()*0.0498538);
}

double NNfunction_dRg::synapse0x19948d0() {
   return (neuron0x197f220()*0.175971);
}

double NNfunction_dRg::synapse0x1994910() {
   return (neuron0x197fbf0()*0.914017);
}

double NNfunction_dRg::synapse0x199b7c0() {
   return (neuron0x1992230()*-0.07681);
}

double NNfunction_dRg::synapse0x199b800() {
   return (neuron0x1992ae0()*0.399321);
}

double NNfunction_dRg::synapse0x199b840() {
   return (neuron0x19934b0()*-0.0530303);
}

double NNfunction_dRg::synapse0x199b880() {
   return (neuron0x1993e80()*0.230722);
}

double NNfunction_dRg::synapse0x199bc00() {
   return (neuron0x196fe00()*0.0377611);
}

double NNfunction_dRg::synapse0x199bc40() {
   return (neuron0x1970750()*-0.622006);
}

double NNfunction_dRg::synapse0x199bc80() {
   return (neuron0x1971230()*0.0619047);
}

double NNfunction_dRg::synapse0x199bcc0() {
   return (neuron0x1970cd0()*-0.0306294);
}

double NNfunction_dRg::synapse0x199bd00() {
   return (neuron0x1972010()*0.00221302);
}

double NNfunction_dRg::synapse0x199bd40() {
   return (neuron0x19729e0()*-0.811139);
}

double NNfunction_dRg::synapse0x199bd80() {
   return (neuron0x19737b0()*0.243123);
}

double NNfunction_dRg::synapse0x199bdc0() {
   return (neuron0x1974180()*-0.00138664);
}

double NNfunction_dRg::synapse0x199be00() {
   return (neuron0x1974b50()*1.09501);
}

double NNfunction_dRg::synapse0x199be40() {
   return (neuron0x1975630()*0.0706007);
}

double NNfunction_dRg::synapse0x199be80() {
   return (neuron0x1976000()*0.0352855);
}

double NNfunction_dRg::synapse0x199bec0() {
   return (neuron0x19730e0()*0.00247197);
}

double NNfunction_dRg::synapse0x199bf00() {
   return (neuron0x1977bb0()*1.81724);
}

double NNfunction_dRg::synapse0x199bf40() {
   return (neuron0x1978580()*1.43856);
}

double NNfunction_dRg::synapse0x199bf80() {
   return (neuron0x1978f50()*0.0198774);
}

double NNfunction_dRg::synapse0x199bfc0() {
   return (neuron0x1979920()*-0.0333455);
}

double NNfunction_dRg::synapse0x199ba50() {
   return (neuron0x197b730()*-0.0207842);
}

double NNfunction_dRg::synapse0x199ba90() {
   return (neuron0x197ba10()*0.00698787);
}

double NNfunction_dRg::synapse0x199c110() {
   return (neuron0x197c3e0()*-0.032909);
}

double NNfunction_dRg::synapse0x199c150() {
   return (neuron0x197cdb0()*-0.944164);
}

double NNfunction_dRg::synapse0x199c190() {
   return (neuron0x197d780()*-0.166134);
}

double NNfunction_dRg::synapse0x199c1d0() {
   return (neuron0x197e150()*-0.0175761);
}

double NNfunction_dRg::synapse0x199c210() {
   return (neuron0x1976ca0()*0.0842);
}

double NNfunction_dRg::synapse0x199c250() {
   return (neuron0x1977670()*1.79406);
}

double NNfunction_dRg::synapse0x199c290() {
   return (neuron0x1980ee0()*0.025917);
}

double NNfunction_dRg::synapse0x199c2d0() {
   return (neuron0x19818b0()*0.0365557);
}

double NNfunction_dRg::synapse0x199c310() {
   return (neuron0x1982280()*0.987438);
}

double NNfunction_dRg::synapse0x199c350() {
   return (neuron0x1982c50()*-0.0106965);
}

double NNfunction_dRg::synapse0x199c390() {
   return (neuron0x1983620()*-1.12925);
}

double NNfunction_dRg::synapse0x199c3d0() {
   return (neuron0x1983ff0()*-0.00347458);
}

double NNfunction_dRg::synapse0x199c410() {
   return (neuron0x19849c0()*0.00686277);
}

double NNfunction_dRg::synapse0x199c450() {
   return (neuron0x1985390()*-0.0550333);
}

double NNfunction_dRg::synapse0x199c000() {
   return (neuron0x197b420()*-0.334195);
}

double NNfunction_dRg::synapse0x199c040() {
   return (neuron0x1987f70()*0.092841);
}

double NNfunction_dRg::synapse0x199c080() {
   return (neuron0x1988940()*0.0665827);
}

double NNfunction_dRg::synapse0x199c0c0() {
   return (neuron0x1989310()*-0.0130375);
}

double NNfunction_dRg::synapse0x199c6a0() {
   return (neuron0x1989ce0()*0.00240657);
}

double NNfunction_dRg::synapse0x199c6e0() {
   return (neuron0x198a6b0()*-1.02937);
}

double NNfunction_dRg::synapse0x199c720() {
   return (neuron0x198b080()*-0.0593138);
}

double NNfunction_dRg::synapse0x199c760() {
   return (neuron0x198ba50()*1.1027);
}

double NNfunction_dRg::synapse0x199c7a0() {
   return (neuron0x198c420()*0.0108503);
}

double NNfunction_dRg::synapse0x199c7e0() {
   return (neuron0x198d000()*-1.36393);
}

double NNfunction_dRg::synapse0x199c820() {
   return (neuron0x198d9d0()*0.639601);
}

double NNfunction_dRg::synapse0x199c860() {
   return (neuron0x197e850()*0.029156);
}

double NNfunction_dRg::synapse0x199c8a0() {
   return (neuron0x197f220()*0.0185597);
}

double NNfunction_dRg::synapse0x199c8e0() {
   return (neuron0x197fbf0()*-0.0851648);
}

double NNfunction_dRg::synapse0x199c920() {
   return (neuron0x1992230()*0.0035417);
}

double NNfunction_dRg::synapse0x199c960() {
   return (neuron0x1992ae0()*-0.380236);
}

double NNfunction_dRg::synapse0x199c9a0() {
   return (neuron0x19934b0()*-0.00121125);
}

double NNfunction_dRg::synapse0x199c9e0() {
   return (neuron0x1993e80()*0.0308307);
}

double NNfunction_dRg::synapse0x199cd60() {
   return (neuron0x196fe00()*0.0731691);
}

double NNfunction_dRg::synapse0x199cda0() {
   return (neuron0x1970750()*-1.83279);
}

double NNfunction_dRg::synapse0x199cde0() {
   return (neuron0x1971230()*-0.245928);
}

double NNfunction_dRg::synapse0x199ce20() {
   return (neuron0x1970cd0()*0.144251);
}

double NNfunction_dRg::synapse0x199ce60() {
   return (neuron0x1972010()*1.12653);
}

double NNfunction_dRg::synapse0x199cea0() {
   return (neuron0x19729e0()*-0.9275);
}

double NNfunction_dRg::synapse0x199cee0() {
   return (neuron0x19737b0()*0.774021);
}

double NNfunction_dRg::synapse0x199cf20() {
   return (neuron0x1974180()*-0.126422);
}

double NNfunction_dRg::synapse0x199cf60() {
   return (neuron0x1974b50()*1.55997);
}

double NNfunction_dRg::synapse0x199cfa0() {
   return (neuron0x1975630()*-0.40924);
}

double NNfunction_dRg::synapse0x199cfe0() {
   return (neuron0x1976000()*-0.315898);
}

double NNfunction_dRg::synapse0x199d020() {
   return (neuron0x19730e0()*-0.259882);
}

double NNfunction_dRg::synapse0x199d060() {
   return (neuron0x1977bb0()*0.283886);
}

double NNfunction_dRg::synapse0x199d0a0() {
   return (neuron0x1978580()*2.73979);
}

double NNfunction_dRg::synapse0x199d0e0() {
   return (neuron0x1978f50()*-0.139125);
}

double NNfunction_dRg::synapse0x199d120() {
   return (neuron0x1979920()*0.445864);
}

double NNfunction_dRg::synapse0x199cbb0() {
   return (neuron0x197b730()*0.571081);
}

double NNfunction_dRg::synapse0x199cbf0() {
   return (neuron0x197ba10()*-0.0534247);
}

double NNfunction_dRg::synapse0x199d270() {
   return (neuron0x197c3e0()*0.297411);
}

double NNfunction_dRg::synapse0x199d2b0() {
   return (neuron0x197cdb0()*-0.730261);
}

double NNfunction_dRg::synapse0x199d2f0() {
   return (neuron0x197d780()*-0.979558);
}

double NNfunction_dRg::synapse0x199d330() {
   return (neuron0x197e150()*0.0695428);
}

double NNfunction_dRg::synapse0x199d370() {
   return (neuron0x1976ca0()*-0.095136);
}

double NNfunction_dRg::synapse0x199d3b0() {
   return (neuron0x1977670()*0.930489);
}

double NNfunction_dRg::synapse0x199d3f0() {
   return (neuron0x1980ee0()*-0.104325);
}

double NNfunction_dRg::synapse0x199d430() {
   return (neuron0x19818b0()*-0.56348);
}

double NNfunction_dRg::synapse0x199d470() {
   return (neuron0x1982280()*0.743331);
}

double NNfunction_dRg::synapse0x199d4b0() {
   return (neuron0x1982c50()*0.193111);
}

double NNfunction_dRg::synapse0x199d4f0() {
   return (neuron0x1983620()*0.189697);
}

double NNfunction_dRg::synapse0x199d530() {
   return (neuron0x1983ff0()*0.0613798);
}

double NNfunction_dRg::synapse0x199d570() {
   return (neuron0x19849c0()*-0.256575);
}

double NNfunction_dRg::synapse0x199d5b0() {
   return (neuron0x1985390()*-0.177114);
}

double NNfunction_dRg::synapse0x199d160() {
   return (neuron0x197b420()*-0.645333);
}

double NNfunction_dRg::synapse0x199d1a0() {
   return (neuron0x1987f70()*1.82574);
}

double NNfunction_dRg::synapse0x199d1e0() {
   return (neuron0x1988940()*0.507118);
}

double NNfunction_dRg::synapse0x199d220() {
   return (neuron0x1989310()*0.0506429);
}

double NNfunction_dRg::synapse0x199d800() {
   return (neuron0x1989ce0()*-0.00573228);
}

double NNfunction_dRg::synapse0x199d840() {
   return (neuron0x198a6b0()*-0.0622009);
}

double NNfunction_dRg::synapse0x199d880() {
   return (neuron0x198b080()*0.360248);
}

double NNfunction_dRg::synapse0x199d8c0() {
   return (neuron0x198ba50()*1.55682);
}

double NNfunction_dRg::synapse0x199d900() {
   return (neuron0x198c420()*-0.360829);
}

double NNfunction_dRg::synapse0x199d940() {
   return (neuron0x198d000()*-0.26743);
}

double NNfunction_dRg::synapse0x199d980() {
   return (neuron0x198d9d0()*0.656507);
}

double NNfunction_dRg::synapse0x199d9c0() {
   return (neuron0x197e850()*-0.183975);
}

double NNfunction_dRg::synapse0x199da00() {
   return (neuron0x197f220()*-0.0869541);
}

double NNfunction_dRg::synapse0x199da40() {
   return (neuron0x197fbf0()*-0.196149);
}

double NNfunction_dRg::synapse0x199da80() {
   return (neuron0x1992230()*-0.0329838);
}

double NNfunction_dRg::synapse0x199dac0() {
   return (neuron0x1992ae0()*-0.504455);
}

double NNfunction_dRg::synapse0x199db00() {
   return (neuron0x19934b0()*0.0111854);
}

double NNfunction_dRg::synapse0x199db40() {
   return (neuron0x1993e80()*-0.285571);
}

double NNfunction_dRg::synapse0x199dec0() {
   return (neuron0x196fe00()*-0.205876);
}

double NNfunction_dRg::synapse0x199df00() {
   return (neuron0x1970750()*1.02508);
}

double NNfunction_dRg::synapse0x199df40() {
   return (neuron0x1971230()*-0.19516);
}

double NNfunction_dRg::synapse0x199df80() {
   return (neuron0x1970cd0()*0.323439);
}

double NNfunction_dRg::synapse0x199dfc0() {
   return (neuron0x1972010()*0.217323);
}

double NNfunction_dRg::synapse0x199e000() {
   return (neuron0x19729e0()*0.533537);
}

double NNfunction_dRg::synapse0x199e040() {
   return (neuron0x19737b0()*-5.24053);
}

double NNfunction_dRg::synapse0x199e080() {
   return (neuron0x1974180()*0.284407);
}

double NNfunction_dRg::synapse0x199e0c0() {
   return (neuron0x1974b50()*-0.264668);
}

double NNfunction_dRg::synapse0x199e100() {
   return (neuron0x1975630()*-0.422878);
}

double NNfunction_dRg::synapse0x199e140() {
   return (neuron0x1976000()*-0.00956867);
}

double NNfunction_dRg::synapse0x199e180() {
   return (neuron0x19730e0()*-3.20047);
}

double NNfunction_dRg::synapse0x199e1c0() {
   return (neuron0x1977bb0()*-0.0238822);
}

double NNfunction_dRg::synapse0x199e200() {
   return (neuron0x1978580()*0.463141);
}

double NNfunction_dRg::synapse0x199e240() {
   return (neuron0x1978f50()*0.0874351);
}

double NNfunction_dRg::synapse0x199e280() {
   return (neuron0x1979920()*0.108908);
}

double NNfunction_dRg::synapse0x199dd10() {
   return (neuron0x197b730()*-0.0998198);
}

double NNfunction_dRg::synapse0x199dd50() {
   return (neuron0x197ba10()*-0.116532);
}

double NNfunction_dRg::synapse0x199e3d0() {
   return (neuron0x197c3e0()*0.0510755);
}

double NNfunction_dRg::synapse0x199e410() {
   return (neuron0x197cdb0()*0.693022);
}

double NNfunction_dRg::synapse0x199e450() {
   return (neuron0x197d780()*0.343672);
}

double NNfunction_dRg::synapse0x199e490() {
   return (neuron0x197e150()*-0.0140028);
}

double NNfunction_dRg::synapse0x199e4d0() {
   return (neuron0x1976ca0()*-1.21103);
}

double NNfunction_dRg::synapse0x199e510() {
   return (neuron0x1977670()*0.19523);
}

double NNfunction_dRg::synapse0x199e550() {
   return (neuron0x1980ee0()*-0.0270197);
}

double NNfunction_dRg::synapse0x199e590() {
   return (neuron0x19818b0()*-0.014162);
}

double NNfunction_dRg::synapse0x199e5d0() {
   return (neuron0x1982280()*0.0771232);
}

double NNfunction_dRg::synapse0x199e610() {
   return (neuron0x1982c50()*0.0585435);
}

double NNfunction_dRg::synapse0x199e650() {
   return (neuron0x1983620()*-0.0864793);
}

double NNfunction_dRg::synapse0x199e690() {
   return (neuron0x1983ff0()*-0.210278);
}

double NNfunction_dRg::synapse0x199e6d0() {
   return (neuron0x19849c0()*-0.351612);
}

double NNfunction_dRg::synapse0x199e710() {
   return (neuron0x1985390()*-0.431824);
}

double NNfunction_dRg::synapse0x199e2c0() {
   return (neuron0x197b420()*-0.00357521);
}

double NNfunction_dRg::synapse0x199e300() {
   return (neuron0x1987f70()*-0.570688);
}

double NNfunction_dRg::synapse0x199e340() {
   return (neuron0x1988940()*0.114409);
}

double NNfunction_dRg::synapse0x199e380() {
   return (neuron0x1989310()*-0.0134689);
}

double NNfunction_dRg::synapse0x199e960() {
   return (neuron0x1989ce0()*0.0417679);
}

double NNfunction_dRg::synapse0x199e9a0() {
   return (neuron0x198a6b0()*0.911375);
}

double NNfunction_dRg::synapse0x199e9e0() {
   return (neuron0x198b080()*0.171835);
}

double NNfunction_dRg::synapse0x199ea20() {
   return (neuron0x198ba50()*-2.98451);
}

double NNfunction_dRg::synapse0x199ea60() {
   return (neuron0x198c420()*0.0682366);
}

double NNfunction_dRg::synapse0x199eaa0() {
   return (neuron0x198d000()*-0.346088);
}

double NNfunction_dRg::synapse0x199eae0() {
   return (neuron0x198d9d0()*-0.392988);
}

double NNfunction_dRg::synapse0x199eb20() {
   return (neuron0x197e850()*-0.0741959);
}

double NNfunction_dRg::synapse0x199eb60() {
   return (neuron0x197f220()*0.0558078);
}

double NNfunction_dRg::synapse0x199eba0() {
   return (neuron0x197fbf0()*1.62599);
}

double NNfunction_dRg::synapse0x199ebe0() {
   return (neuron0x1992230()*0.00436256);
}

double NNfunction_dRg::synapse0x199ec20() {
   return (neuron0x1992ae0()*0.185843);
}

double NNfunction_dRg::synapse0x199ec60() {
   return (neuron0x19934b0()*0.0459778);
}

double NNfunction_dRg::synapse0x199eca0() {
   return (neuron0x1993e80()*0.0421913);
}

double NNfunction_dRg::synapse0x199ef00() {
   return (neuron0x199b080()*3.10497);
}

double NNfunction_dRg::synapse0x199ef40() {
   return (neuron0x199b420()*8.32342);
}

double NNfunction_dRg::synapse0x199ef80() {
   return (neuron0x199b8c0()*-9.77117);
}

double NNfunction_dRg::synapse0x199efc0() {
   return (neuron0x199ca20()*-5.50239);
}

double NNfunction_dRg::synapse0x199f000() {
   return (neuron0x199db80()*-8.40514);
}

