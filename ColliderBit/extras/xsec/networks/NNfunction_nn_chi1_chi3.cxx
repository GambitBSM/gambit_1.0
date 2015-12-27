#include "NNfunction_nn_chi1_chi3.h"
#include <cmath>

double NNfunction_nn_chi1_chi3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.5736)/14.9452;
   input1 = (in1 - 34.5216)/806.286;
   input2 = (in2 - 344.242)/431.832;
   input3 = (in3 - 210.324)/720.027;
   input4 = (in4 - 1007.23)/864.016;
   input5 = (in5 - 988.122)/936.59;
   input6 = (in6 - 992.076)/936.026;
   input7 = (in7 - 976.289)/908.114;
   input8 = (in8 - 990.509)/948.48;
   input9 = (in9 - 981.523)/942.01;
   input10 = (in10 - 970.155)/903.263;
   input11 = (in11 - 895.444)/883.344;
   input12 = (in12 - 926.999)/893.781;
   input13 = (in13 - 687.933)/621.611;
   input14 = (in14 - 911.251)/863.493;
   input15 = (in15 - 924.802)/869.538;
   input16 = (in16 - 628.955)/554.109;
   input17 = (in17 - 939.975)/906.6;
   input18 = (in18 - 937.919)/907.3;
   input19 = (in19 - 910.814)/846.669;
   input20 = (in20 - -157.869)/448.655;
   input21 = (in21 - -203.878)/949.461;
   input22 = (in22 - 8.0257)/963.04;
   input23 = (in23 - 23.1479)/258.457;
   switch(index) {
     case 0:
         return neuron0x32bd030();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi3::Value(int index, double* input) {
   input0 = (input[0] - 24.5736)/14.9452;
   input1 = (input[1] - 34.5216)/806.286;
   input2 = (input[2] - 344.242)/431.832;
   input3 = (input[3] - 210.324)/720.027;
   input4 = (input[4] - 1007.23)/864.016;
   input5 = (input[5] - 988.122)/936.59;
   input6 = (input[6] - 992.076)/936.026;
   input7 = (input[7] - 976.289)/908.114;
   input8 = (input[8] - 990.509)/948.48;
   input9 = (input[9] - 981.523)/942.01;
   input10 = (input[10] - 970.155)/903.263;
   input11 = (input[11] - 895.444)/883.344;
   input12 = (input[12] - 926.999)/893.781;
   input13 = (input[13] - 687.933)/621.611;
   input14 = (input[14] - 911.251)/863.493;
   input15 = (input[15] - 924.802)/869.538;
   input16 = (input[16] - 628.955)/554.109;
   input17 = (input[17] - 939.975)/906.6;
   input18 = (input[18] - 937.919)/907.3;
   input19 = (input[19] - 910.814)/846.669;
   input20 = (input[20] - -157.869)/448.655;
   input21 = (input[21] - -203.878)/949.461;
   input22 = (input[22] - 8.0257)/963.04;
   input23 = (input[23] - 23.1479)/258.457;
   switch(index) {
     case 0:
         return neuron0x32bd030();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi3::neuron0x32880a0() {
   return input0;
}

double NNfunction_nn_chi1_chi3::neuron0x3288350() {
   return input1;
}

double NNfunction_nn_chi1_chi3::neuron0x3288690() {
   return input2;
}

double NNfunction_nn_chi1_chi3::neuron0x32889d0() {
   return input3;
}

double NNfunction_nn_chi1_chi3::neuron0x3288d10() {
   return input4;
}

double NNfunction_nn_chi1_chi3::neuron0x3289050() {
   return input5;
}

double NNfunction_nn_chi1_chi3::neuron0x3289390() {
   return input6;
}

double NNfunction_nn_chi1_chi3::neuron0x32896d0() {
   return input7;
}

double NNfunction_nn_chi1_chi3::neuron0x3289a10() {
   return input8;
}

double NNfunction_nn_chi1_chi3::neuron0x3289d50() {
   return input9;
}

double NNfunction_nn_chi1_chi3::neuron0x328a090() {
   return input10;
}

double NNfunction_nn_chi1_chi3::neuron0x328a3d0() {
   return input11;
}

double NNfunction_nn_chi1_chi3::neuron0x328a710() {
   return input12;
}

double NNfunction_nn_chi1_chi3::neuron0x328aa50() {
   return input13;
}

double NNfunction_nn_chi1_chi3::neuron0x328ad90() {
   return input14;
}

double NNfunction_nn_chi1_chi3::neuron0x328b0d0() {
   return input15;
}

double NNfunction_nn_chi1_chi3::neuron0x328b410() {
   return input16;
}

double NNfunction_nn_chi1_chi3::neuron0x328b970() {
   return input17;
}

double NNfunction_nn_chi1_chi3::neuron0x328bcb0() {
   return input18;
}

double NNfunction_nn_chi1_chi3::neuron0x328bff0() {
   return input19;
}

double NNfunction_nn_chi1_chi3::neuron0x328c330() {
   return input20;
}

double NNfunction_nn_chi1_chi3::neuron0x328c670() {
   return input21;
}

double NNfunction_nn_chi1_chi3::neuron0x328c9b0() {
   return input22;
}

double NNfunction_nn_chi1_chi3::neuron0x328ccf0() {
   return input23;
}

double NNfunction_nn_chi1_chi3::input0x328d160() {
   double input = 0.465123;
   input += synapse0x328d4a0();
   input += synapse0x328d4e0();
   input += synapse0x328d520();
   input += synapse0x328d560();
   input += synapse0x328d5a0();
   input += synapse0x328d5e0();
   input += synapse0x328d620();
   input += synapse0x328d660();
   input += synapse0x328d6a0();
   input += synapse0x328d6e0();
   input += synapse0x328d720();
   input += synapse0x328d760();
   input += synapse0x328d7a0();
   input += synapse0x328d7e0();
   input += synapse0x328d820();
   input += synapse0x328d860();
   input += synapse0x328d2f0();
   input += synapse0x328d330();
   input += synapse0x3044390();
   input += synapse0x30443d0();
   input += synapse0x328d8a0();
   input += synapse0x328d8e0();
   input += synapse0x328d920();
   input += synapse0x328d960();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x328d160() {
   double input = input0x328d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x328d9a0() {
   double input = 1.67533;
   input += synapse0x328dce0();
   input += synapse0x328dd20();
   input += synapse0x328dd60();
   input += synapse0x328dda0();
   input += synapse0x328dde0();
   input += synapse0x328de20();
   input += synapse0x328de60();
   input += synapse0x328dea0();
   input += synapse0x328dee0();
   input += synapse0x30441e0();
   input += synapse0x3044220();
   input += synapse0x3044260();
   input += synapse0x30442a0();
   input += synapse0x328e130();
   input += synapse0x328e170();
   input += synapse0x328e1b0();
   input += synapse0x328db30();
   input += synapse0x328db70();
   input += synapse0x328e300();
   input += synapse0x328e340();
   input += synapse0x328e380();
   input += synapse0x328e3c0();
   input += synapse0x328e400();
   input += synapse0x328e440();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x328d9a0() {
   double input = input0x328d9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x328e480() {
   double input = 3.0351;
   input += synapse0x328e7c0();
   input += synapse0x328e800();
   input += synapse0x328e840();
   input += synapse0x328e880();
   input += synapse0x328e8c0();
   input += synapse0x328e900();
   input += synapse0x328e940();
   input += synapse0x328e980();
   input += synapse0x328e9c0();
   input += synapse0x328ea00();
   input += synapse0x328ea40();
   input += synapse0x328ea80();
   input += synapse0x328eac0();
   input += synapse0x328eb00();
   input += synapse0x328eb40();
   input += synapse0x328eb80();
   input += synapse0x328e610();
   input += synapse0x328e650();
   input += synapse0x1fbbf10();
   input += synapse0x3052120();
   input += synapse0x3052160();
   input += synapse0x3290ab0();
   input += synapse0x3290af0();
   input += synapse0x3287de0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x328e480() {
   double input = input0x328e480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x328df20() {
   double input = 0.716558;
   input += synapse0x3287eb0();
   input += synapse0x30529c0();
   input += synapse0x328e0b0();
   input += synapse0x328e0f0();
   input += synapse0x328ecd0();
   input += synapse0x328ed10();
   input += synapse0x328ed50();
   input += synapse0x328ed90();
   input += synapse0x328edd0();
   input += synapse0x328ee10();
   input += synapse0x328ee50();
   input += synapse0x328ee90();
   input += synapse0x328eed0();
   input += synapse0x328ef10();
   input += synapse0x328ef50();
   input += synapse0x328ef90();
   input += synapse0x3287e20();
   input += synapse0x3287e60();
   input += synapse0x328f0e0();
   input += synapse0x328f120();
   input += synapse0x328f160();
   input += synapse0x328f1a0();
   input += synapse0x328f1e0();
   input += synapse0x328f220();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x328df20() {
   double input = input0x328df20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x328f260() {
   double input = -3.19782;
   input += synapse0x328f5a0();
   input += synapse0x328f5e0();
   input += synapse0x328f620();
   input += synapse0x328f660();
   input += synapse0x328f6a0();
   input += synapse0x328f6e0();
   input += synapse0x328f720();
   input += synapse0x328f760();
   input += synapse0x328f7a0();
   input += synapse0x328f7e0();
   input += synapse0x328f820();
   input += synapse0x328f860();
   input += synapse0x328f8a0();
   input += synapse0x328f8e0();
   input += synapse0x328f920();
   input += synapse0x328f960();
   input += synapse0x328fab0();
   input += synapse0x328f3f0();
   input += synapse0x328f430();
   input += synapse0x3290bf0();
   input += synapse0x3290c30();
   input += synapse0x3290c70();
   input += synapse0x3290cb0();
   input += synapse0x3290cf0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x328f260() {
   double input = input0x328f260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3290d30() {
   double input = 1.25666;
   input += synapse0x3291070();
   input += synapse0x32910b0();
   input += synapse0x32910f0();
   input += synapse0x3291130();
   input += synapse0x3291170();
   input += synapse0x32911b0();
   input += synapse0x32911f0();
   input += synapse0x3291230();
   input += synapse0x3291270();
   input += synapse0x3052490();
   input += synapse0x30524d0();
   input += synapse0x3052510();
   input += synapse0x3052550();
   input += synapse0x3052590();
   input += synapse0x30525d0();
   input += synapse0x3052610();
   input += synapse0x3290ec0();
   input += synapse0x3290f00();
   input += synapse0x3052760();
   input += synapse0x30527a0();
   input += synapse0x30527e0();
   input += synapse0x3052820();
   input += synapse0x3052860();
   input += synapse0x3291ac0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3290d30() {
   double input = input0x3290d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3291b00() {
   double input = -3.71312;
   input += synapse0x3291e40();
   input += synapse0x3291e80();
   input += synapse0x3291ec0();
   input += synapse0x3291f00();
   input += synapse0x3291f40();
   input += synapse0x3291f80();
   input += synapse0x3291fc0();
   input += synapse0x3292000();
   input += synapse0x3292040();
   input += synapse0x3292080();
   input += synapse0x32920c0();
   input += synapse0x3292100();
   input += synapse0x3292140();
   input += synapse0x3292180();
   input += synapse0x32921c0();
   input += synapse0x3292200();
   input += synapse0x3291c90();
   input += synapse0x3291cd0();
   input += synapse0x3292350();
   input += synapse0x3292390();
   input += synapse0x32923d0();
   input += synapse0x3292410();
   input += synapse0x3292450();
   input += synapse0x3292490();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3291b00() {
   double input = input0x3291b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32924d0() {
   double input = -4.33948;
   input += synapse0x3292810();
   input += synapse0x3292850();
   input += synapse0x3292890();
   input += synapse0x32928d0();
   input += synapse0x3292910();
   input += synapse0x3292950();
   input += synapse0x3292990();
   input += synapse0x32929d0();
   input += synapse0x3292a10();
   input += synapse0x3292a50();
   input += synapse0x3292a90();
   input += synapse0x3292ad0();
   input += synapse0x3292b10();
   input += synapse0x3292b50();
   input += synapse0x3292b90();
   input += synapse0x3292bd0();
   input += synapse0x3292660();
   input += synapse0x32926a0();
   input += synapse0x3292d20();
   input += synapse0x3292d60();
   input += synapse0x3292da0();
   input += synapse0x3292de0();
   input += synapse0x3292e20();
   input += synapse0x3292e60();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32924d0() {
   double input = input0x32924d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3292ea0() {
   double input = 4.12099;
   input += synapse0x328b860();
   input += synapse0x328b8a0();
   input += synapse0x328b8e0();
   input += synapse0x328b920();
   input += synapse0x32933f0();
   input += synapse0x3293430();
   input += synapse0x3293470();
   input += synapse0x32934b0();
   input += synapse0x32934f0();
   input += synapse0x3293530();
   input += synapse0x3293570();
   input += synapse0x32935b0();
   input += synapse0x32935f0();
   input += synapse0x3293630();
   input += synapse0x3293670();
   input += synapse0x32936b0();
   input += synapse0x3293030();
   input += synapse0x3293070();
   input += synapse0x3293800();
   input += synapse0x3293840();
   input += synapse0x3293880();
   input += synapse0x32938c0();
   input += synapse0x3293900();
   input += synapse0x3293940();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3292ea0() {
   double input = input0x3292ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3293980() {
   double input = 1.5669;
   input += synapse0x3293cc0();
   input += synapse0x3293d00();
   input += synapse0x3293d40();
   input += synapse0x3293d80();
   input += synapse0x3293dc0();
   input += synapse0x3293e00();
   input += synapse0x3293e40();
   input += synapse0x3293e80();
   input += synapse0x3293ec0();
   input += synapse0x3293f00();
   input += synapse0x3293f40();
   input += synapse0x3293f80();
   input += synapse0x3293fc0();
   input += synapse0x3294000();
   input += synapse0x3294040();
   input += synapse0x3294080();
   input += synapse0x3293b10();
   input += synapse0x3293b50();
   input += synapse0x32941d0();
   input += synapse0x3294210();
   input += synapse0x3294250();
   input += synapse0x3294290();
   input += synapse0x32942d0();
   input += synapse0x3294310();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3293980() {
   double input = input0x3293980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3294350() {
   double input = 2.99457;
   input += synapse0x3294690();
   input += synapse0x32946d0();
   input += synapse0x3294710();
   input += synapse0x3294750();
   input += synapse0x3294790();
   input += synapse0x32947d0();
   input += synapse0x3294810();
   input += synapse0x3294850();
   input += synapse0x3294890();
   input += synapse0x32948d0();
   input += synapse0x3294910();
   input += synapse0x3294950();
   input += synapse0x3294990();
   input += synapse0x32949d0();
   input += synapse0x3294a10();
   input += synapse0x3294a50();
   input += synapse0x32944e0();
   input += synapse0x3294520();
   input += synapse0x32912b0();
   input += synapse0x32912f0();
   input += synapse0x3291330();
   input += synapse0x3291370();
   input += synapse0x32913b0();
   input += synapse0x32913f0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3294350() {
   double input = input0x3294350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3291430() {
   double input = -9.75668;
   input += synapse0x3291770();
   input += synapse0x32917b0();
   input += synapse0x32917f0();
   input += synapse0x3291830();
   input += synapse0x3291870();
   input += synapse0x32918b0();
   input += synapse0x32918f0();
   input += synapse0x3291930();
   input += synapse0x3291970();
   input += synapse0x32919b0();
   input += synapse0x32919f0();
   input += synapse0x3291a30();
   input += synapse0x3291a70();
   input += synapse0x3295bb0();
   input += synapse0x3295bf0();
   input += synapse0x3295c30();
   input += synapse0x32915c0();
   input += synapse0x3291600();
   input += synapse0x3295d80();
   input += synapse0x3295dc0();
   input += synapse0x3295e00();
   input += synapse0x3295e40();
   input += synapse0x3295e80();
   input += synapse0x3295ec0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3291430() {
   double input = input0x3291430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3295f00() {
   double input = -0.458584;
   input += synapse0x3296240();
   input += synapse0x3296280();
   input += synapse0x32962c0();
   input += synapse0x3296300();
   input += synapse0x3296340();
   input += synapse0x3296380();
   input += synapse0x32963c0();
   input += synapse0x3296400();
   input += synapse0x3296440();
   input += synapse0x3296480();
   input += synapse0x32964c0();
   input += synapse0x3296500();
   input += synapse0x3296540();
   input += synapse0x3296580();
   input += synapse0x32965c0();
   input += synapse0x3296600();
   input += synapse0x3296090();
   input += synapse0x32960d0();
   input += synapse0x3296750();
   input += synapse0x3296790();
   input += synapse0x32967d0();
   input += synapse0x3296810();
   input += synapse0x3296850();
   input += synapse0x3296890();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3295f00() {
   double input = input0x3295f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32968d0() {
   double input = -0.4407;
   input += synapse0x3296c10();
   input += synapse0x3296c50();
   input += synapse0x3296c90();
   input += synapse0x3296cd0();
   input += synapse0x3296d10();
   input += synapse0x3296d50();
   input += synapse0x3296d90();
   input += synapse0x3296dd0();
   input += synapse0x3296e10();
   input += synapse0x3296e50();
   input += synapse0x3296e90();
   input += synapse0x3296ed0();
   input += synapse0x3296f10();
   input += synapse0x3296f50();
   input += synapse0x3296f90();
   input += synapse0x3296fd0();
   input += synapse0x3296a60();
   input += synapse0x3296aa0();
   input += synapse0x3297120();
   input += synapse0x3297160();
   input += synapse0x32971a0();
   input += synapse0x32971e0();
   input += synapse0x3297220();
   input += synapse0x3297260();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32968d0() {
   double input = input0x32968d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32972a0() {
   double input = 9.01153;
   input += synapse0x32975e0();
   input += synapse0x3297620();
   input += synapse0x3297660();
   input += synapse0x32976a0();
   input += synapse0x32976e0();
   input += synapse0x3297720();
   input += synapse0x3297760();
   input += synapse0x32977a0();
   input += synapse0x32977e0();
   input += synapse0x3297820();
   input += synapse0x3297860();
   input += synapse0x32978a0();
   input += synapse0x32978e0();
   input += synapse0x3297920();
   input += synapse0x3297960();
   input += synapse0x32979a0();
   input += synapse0x3297430();
   input += synapse0x3297470();
   input += synapse0x3297af0();
   input += synapse0x3297b30();
   input += synapse0x3297b70();
   input += synapse0x3297bb0();
   input += synapse0x3297bf0();
   input += synapse0x3297c30();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32972a0() {
   double input = input0x32972a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3297c70() {
   double input = -1.23644;
   input += synapse0x3297fb0();
   input += synapse0x3288230();
   input += synapse0x3288270();
   input += synapse0x3288570();
   input += synapse0x32885b0();
   input += synapse0x32888b0();
   input += synapse0x32888f0();
   input += synapse0x3288bf0();
   input += synapse0x3288c30();
   input += synapse0x3288f30();
   input += synapse0x3288f70();
   input += synapse0x3289270();
   input += synapse0x32892b0();
   input += synapse0x32895b0();
   input += synapse0x32895f0();
   input += synapse0x32898f0();
   input += synapse0x3289930();
   input += synapse0x3289c30();
   input += synapse0x3289c70();
   input += synapse0x3289f70();
   input += synapse0x3289fb0();
   input += synapse0x328a2b0();
   input += synapse0x328a2f0();
   input += synapse0x328a5f0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3297c70() {
   double input = input0x3297c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3299a80() {
   double input = 1.66672;
   input += synapse0x328a630();
   input += synapse0x328b2f0();
   input += synapse0x328b330();
   input += synapse0x3297e00();
   input += synapse0x3297e40();
   input += synapse0x328b630();
   input += synapse0x328b670();
   input += synapse0x328bb90();
   input += synapse0x328bbd0();
   input += synapse0x328bed0();
   input += synapse0x328bf10();
   input += synapse0x328c210();
   input += synapse0x328c250();
   input += synapse0x328c550();
   input += synapse0x328c590();
   input += synapse0x328c890();
   input += synapse0x328c8d0();
   input += synapse0x328cbd0();
   input += synapse0x328cc10();
   input += synapse0x328cf10();
   input += synapse0x328cf50();
   input += synapse0x328a930();
   input += synapse0x328a970();
   input += synapse0x3299d20();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3299a80() {
   double input = input0x3299a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3299d60() {
   double input = 1.63681;
   input += synapse0x329a0a0();
   input += synapse0x329a0e0();
   input += synapse0x329a120();
   input += synapse0x329a160();
   input += synapse0x329a1a0();
   input += synapse0x329a1e0();
   input += synapse0x329a220();
   input += synapse0x329a260();
   input += synapse0x329a2a0();
   input += synapse0x329a2e0();
   input += synapse0x329a320();
   input += synapse0x329a360();
   input += synapse0x329a3a0();
   input += synapse0x329a3e0();
   input += synapse0x329a420();
   input += synapse0x329a460();
   input += synapse0x3299ef0();
   input += synapse0x3299f30();
   input += synapse0x329a5b0();
   input += synapse0x329a5f0();
   input += synapse0x329a630();
   input += synapse0x329a670();
   input += synapse0x329a6b0();
   input += synapse0x329a6f0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3299d60() {
   double input = input0x3299d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329a730() {
   double input = -0.551957;
   input += synapse0x329aa70();
   input += synapse0x329aab0();
   input += synapse0x329aaf0();
   input += synapse0x329ab30();
   input += synapse0x329ab70();
   input += synapse0x329abb0();
   input += synapse0x329abf0();
   input += synapse0x329ac30();
   input += synapse0x329ac70();
   input += synapse0x329acb0();
   input += synapse0x329acf0();
   input += synapse0x329ad30();
   input += synapse0x329ad70();
   input += synapse0x329adb0();
   input += synapse0x329adf0();
   input += synapse0x329ae30();
   input += synapse0x329a8c0();
   input += synapse0x329a900();
   input += synapse0x329af80();
   input += synapse0x329afc0();
   input += synapse0x329b000();
   input += synapse0x329b040();
   input += synapse0x329b080();
   input += synapse0x329b0c0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329a730() {
   double input = input0x329a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329b100() {
   double input = 10.3662;
   input += synapse0x329b440();
   input += synapse0x329b480();
   input += synapse0x329b4c0();
   input += synapse0x329b500();
   input += synapse0x329b540();
   input += synapse0x329b580();
   input += synapse0x329b5c0();
   input += synapse0x329b600();
   input += synapse0x329b640();
   input += synapse0x329b680();
   input += synapse0x329b6c0();
   input += synapse0x329b700();
   input += synapse0x329b740();
   input += synapse0x329b780();
   input += synapse0x329b7c0();
   input += synapse0x329b800();
   input += synapse0x329b290();
   input += synapse0x329b2d0();
   input += synapse0x329b950();
   input += synapse0x329b990();
   input += synapse0x329b9d0();
   input += synapse0x329ba10();
   input += synapse0x329ba50();
   input += synapse0x329ba90();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329b100() {
   double input = input0x329b100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329bad0() {
   double input = 2.9089;
   input += synapse0x329be10();
   input += synapse0x329be50();
   input += synapse0x329be90();
   input += synapse0x329bed0();
   input += synapse0x329bf10();
   input += synapse0x329bf50();
   input += synapse0x329bf90();
   input += synapse0x329bfd0();
   input += synapse0x329c010();
   input += synapse0x329c050();
   input += synapse0x329c090();
   input += synapse0x329c0d0();
   input += synapse0x329c110();
   input += synapse0x329c150();
   input += synapse0x329c190();
   input += synapse0x329c1d0();
   input += synapse0x329bc60();
   input += synapse0x329bca0();
   input += synapse0x329c320();
   input += synapse0x329c360();
   input += synapse0x329c3a0();
   input += synapse0x329c3e0();
   input += synapse0x329c420();
   input += synapse0x329c460();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329bad0() {
   double input = input0x329bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329c4a0() {
   double input = 1.78215;
   input += synapse0x329c7e0();
   input += synapse0x329c820();
   input += synapse0x329c860();
   input += synapse0x329c8a0();
   input += synapse0x329c8e0();
   input += synapse0x329c920();
   input += synapse0x329c960();
   input += synapse0x329c9a0();
   input += synapse0x329c9e0();
   input += synapse0x3294ba0();
   input += synapse0x3294be0();
   input += synapse0x3294c20();
   input += synapse0x3294c60();
   input += synapse0x3294ca0();
   input += synapse0x3294ce0();
   input += synapse0x3294d20();
   input += synapse0x329c630();
   input += synapse0x329c670();
   input += synapse0x3294e70();
   input += synapse0x3294eb0();
   input += synapse0x3294ef0();
   input += synapse0x3294f30();
   input += synapse0x3294f70();
   input += synapse0x3294fb0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329c4a0() {
   double input = input0x329c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3294ff0() {
   double input = -0.143803;
   input += synapse0x3295330();
   input += synapse0x3295370();
   input += synapse0x32953b0();
   input += synapse0x32953f0();
   input += synapse0x3295430();
   input += synapse0x3295470();
   input += synapse0x32954b0();
   input += synapse0x32954f0();
   input += synapse0x3295530();
   input += synapse0x3295570();
   input += synapse0x32955b0();
   input += synapse0x32955f0();
   input += synapse0x3295630();
   input += synapse0x3295670();
   input += synapse0x32956b0();
   input += synapse0x32956f0();
   input += synapse0x3295180();
   input += synapse0x32951c0();
   input += synapse0x3295840();
   input += synapse0x3295880();
   input += synapse0x32958c0();
   input += synapse0x3295900();
   input += synapse0x3295940();
   input += synapse0x3295980();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3294ff0() {
   double input = input0x3294ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32959c0() {
   double input = -1.01623;
   input += synapse0x3295b50();
   input += synapse0x329ebe0();
   input += synapse0x329ec20();
   input += synapse0x329ec60();
   input += synapse0x329eca0();
   input += synapse0x329ece0();
   input += synapse0x329ed20();
   input += synapse0x329ed60();
   input += synapse0x329eda0();
   input += synapse0x329ede0();
   input += synapse0x329ee20();
   input += synapse0x329ee60();
   input += synapse0x329eea0();
   input += synapse0x329eee0();
   input += synapse0x329ef20();
   input += synapse0x329ef60();
   input += synapse0x329ea30();
   input += synapse0x329ea70();
   input += synapse0x329f0b0();
   input += synapse0x329f0f0();
   input += synapse0x329f130();
   input += synapse0x329f170();
   input += synapse0x329f1b0();
   input += synapse0x329f1f0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32959c0() {
   double input = input0x32959c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329f230() {
   double input = 2.24257;
   input += synapse0x329f570();
   input += synapse0x329f5b0();
   input += synapse0x329f5f0();
   input += synapse0x329f630();
   input += synapse0x329f670();
   input += synapse0x329f6b0();
   input += synapse0x329f6f0();
   input += synapse0x329f730();
   input += synapse0x329f770();
   input += synapse0x329f7b0();
   input += synapse0x329f7f0();
   input += synapse0x329f830();
   input += synapse0x329f870();
   input += synapse0x329f8b0();
   input += synapse0x329f8f0();
   input += synapse0x329f930();
   input += synapse0x329f3c0();
   input += synapse0x329f400();
   input += synapse0x329fa80();
   input += synapse0x329fac0();
   input += synapse0x329fb00();
   input += synapse0x329fb40();
   input += synapse0x329fb80();
   input += synapse0x329fbc0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329f230() {
   double input = input0x329f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329fc00() {
   double input = 0.187547;
   input += synapse0x329ff40();
   input += synapse0x329ff80();
   input += synapse0x329ffc0();
   input += synapse0x32a0000();
   input += synapse0x32a0040();
   input += synapse0x32a0080();
   input += synapse0x32a00c0();
   input += synapse0x32a0100();
   input += synapse0x32a0140();
   input += synapse0x32a0180();
   input += synapse0x32a01c0();
   input += synapse0x32a0200();
   input += synapse0x32a0240();
   input += synapse0x32a0280();
   input += synapse0x32a02c0();
   input += synapse0x32a0300();
   input += synapse0x329fd90();
   input += synapse0x329fdd0();
   input += synapse0x32a0450();
   input += synapse0x32a0490();
   input += synapse0x32a04d0();
   input += synapse0x32a0510();
   input += synapse0x32a0550();
   input += synapse0x32a0590();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329fc00() {
   double input = input0x329fc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a05d0() {
   double input = 1.10355;
   input += synapse0x32a0910();
   input += synapse0x32a0950();
   input += synapse0x32a0990();
   input += synapse0x32a09d0();
   input += synapse0x32a0a10();
   input += synapse0x32a0a50();
   input += synapse0x32a0a90();
   input += synapse0x32a0ad0();
   input += synapse0x32a0b10();
   input += synapse0x32a0b50();
   input += synapse0x32a0b90();
   input += synapse0x32a0bd0();
   input += synapse0x32a0c10();
   input += synapse0x32a0c50();
   input += synapse0x32a0c90();
   input += synapse0x32a0cd0();
   input += synapse0x32a0760();
   input += synapse0x32a07a0();
   input += synapse0x32a0e20();
   input += synapse0x32a0e60();
   input += synapse0x32a0ea0();
   input += synapse0x32a0ee0();
   input += synapse0x32a0f20();
   input += synapse0x32a0f60();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a05d0() {
   double input = input0x32a05d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a0fa0() {
   double input = 0.648263;
   input += synapse0x32a12e0();
   input += synapse0x32a1320();
   input += synapse0x32a1360();
   input += synapse0x32a13a0();
   input += synapse0x32a13e0();
   input += synapse0x32a1420();
   input += synapse0x32a1460();
   input += synapse0x32a14a0();
   input += synapse0x32a14e0();
   input += synapse0x32a1520();
   input += synapse0x32a1560();
   input += synapse0x32a15a0();
   input += synapse0x32a15e0();
   input += synapse0x32a1620();
   input += synapse0x32a1660();
   input += synapse0x32a16a0();
   input += synapse0x32a1130();
   input += synapse0x32a1170();
   input += synapse0x32a17f0();
   input += synapse0x32a1830();
   input += synapse0x32a1870();
   input += synapse0x32a18b0();
   input += synapse0x32a18f0();
   input += synapse0x32a1930();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a0fa0() {
   double input = input0x32a0fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a1970() {
   double input = 3.09228;
   input += synapse0x32a1cb0();
   input += synapse0x32a1cf0();
   input += synapse0x32a1d30();
   input += synapse0x32a1d70();
   input += synapse0x32a1db0();
   input += synapse0x32a1df0();
   input += synapse0x32a1e30();
   input += synapse0x32a1e70();
   input += synapse0x32a1eb0();
   input += synapse0x32a1ef0();
   input += synapse0x32a1f30();
   input += synapse0x32a1f70();
   input += synapse0x32a1fb0();
   input += synapse0x32a1ff0();
   input += synapse0x32a2030();
   input += synapse0x32a2070();
   input += synapse0x32a1b00();
   input += synapse0x32a1b40();
   input += synapse0x32a21c0();
   input += synapse0x32a2200();
   input += synapse0x32a2240();
   input += synapse0x32a2280();
   input += synapse0x32a22c0();
   input += synapse0x32a2300();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a1970() {
   double input = input0x32a1970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a2340() {
   double input = -3.26021;
   input += synapse0x32a2680();
   input += synapse0x32a26c0();
   input += synapse0x32a2700();
   input += synapse0x32a2740();
   input += synapse0x32a2780();
   input += synapse0x32a27c0();
   input += synapse0x32a2800();
   input += synapse0x32a2840();
   input += synapse0x32a2880();
   input += synapse0x32a28c0();
   input += synapse0x32a2900();
   input += synapse0x32a2940();
   input += synapse0x32a2980();
   input += synapse0x32a29c0();
   input += synapse0x32a2a00();
   input += synapse0x32a2a40();
   input += synapse0x32a24d0();
   input += synapse0x32a2510();
   input += synapse0x32a2b90();
   input += synapse0x32a2bd0();
   input += synapse0x32a2c10();
   input += synapse0x32a2c50();
   input += synapse0x32a2c90();
   input += synapse0x32a2cd0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a2340() {
   double input = input0x32a2340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a2d10() {
   double input = -0.848634;
   input += synapse0x32a3050();
   input += synapse0x32a3090();
   input += synapse0x32a30d0();
   input += synapse0x32a3110();
   input += synapse0x32a3150();
   input += synapse0x32a3190();
   input += synapse0x32a31d0();
   input += synapse0x32a3210();
   input += synapse0x32a3250();
   input += synapse0x32a3290();
   input += synapse0x32a32d0();
   input += synapse0x32a3310();
   input += synapse0x32a3350();
   input += synapse0x32a3390();
   input += synapse0x32a33d0();
   input += synapse0x32a3410();
   input += synapse0x32a2ea0();
   input += synapse0x32a2ee0();
   input += synapse0x32a3560();
   input += synapse0x32a35a0();
   input += synapse0x32a35e0();
   input += synapse0x32a3620();
   input += synapse0x32a3660();
   input += synapse0x32a36a0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a2d10() {
   double input = input0x32a2d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a36e0() {
   double input = -0.280675;
   input += synapse0x32a3a20();
   input += synapse0x3297ff0();
   input += synapse0x3298030();
   input += synapse0x3298070();
   input += synapse0x32982c0();
   input += synapse0x3298300();
   input += synapse0x3298340();
   input += synapse0x3298590();
   input += synapse0x32985d0();
   input += synapse0x3298820();
   input += synapse0x3298860();
   input += synapse0x32988a0();
   input += synapse0x3298af0();
   input += synapse0x3298b30();
   input += synapse0x3298d80();
   input += synapse0x3298dc0();
   input += synapse0x32a3870();
   input += synapse0x32a38b0();
   input += synapse0x3298f10();
   input += synapse0x3299420();
   input += synapse0x3299460();
   input += synapse0x32994a0();
   input += synapse0x32996f0();
   input += synapse0x3299730();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a36e0() {
   double input = input0x32a36e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x3299770() {
   double input = -1.874;
   input += synapse0x3298fe0();
   input += synapse0x3299020();
   input += synapse0x3299060();
   input += synapse0x32990a0();
   input += synapse0x3299a20();
   input += synapse0x32a5d70();
   input += synapse0x32a5db0();
   input += synapse0x32a5df0();
   input += synapse0x32a5e30();
   input += synapse0x32a5e70();
   input += synapse0x32a5eb0();
   input += synapse0x32a5ef0();
   input += synapse0x32a5f30();
   input += synapse0x32a5f70();
   input += synapse0x32a5fb0();
   input += synapse0x32a5ff0();
   input += synapse0x3299900();
   input += synapse0x3299940();
   input += synapse0x32a6140();
   input += synapse0x32a6180();
   input += synapse0x32a61c0();
   input += synapse0x32a6200();
   input += synapse0x32a6240();
   input += synapse0x32a6280();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x3299770() {
   double input = input0x3299770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a62c0() {
   double input = -3.56337;
   input += synapse0x32a6600();
   input += synapse0x32a6640();
   input += synapse0x32a6680();
   input += synapse0x32a66c0();
   input += synapse0x32a6700();
   input += synapse0x32a6740();
   input += synapse0x32a6780();
   input += synapse0x32a67c0();
   input += synapse0x32a6800();
   input += synapse0x32a6840();
   input += synapse0x32a6880();
   input += synapse0x32a68c0();
   input += synapse0x32a6900();
   input += synapse0x32a6940();
   input += synapse0x32a6980();
   input += synapse0x32a69c0();
   input += synapse0x32a6450();
   input += synapse0x32a6490();
   input += synapse0x32a6b10();
   input += synapse0x32a6b50();
   input += synapse0x32a6b90();
   input += synapse0x32a6bd0();
   input += synapse0x32a6c10();
   input += synapse0x32a6c50();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a62c0() {
   double input = input0x32a62c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a6c90() {
   double input = -2.36275;
   input += synapse0x32a6fd0();
   input += synapse0x32a7010();
   input += synapse0x32a7050();
   input += synapse0x32a7090();
   input += synapse0x32a70d0();
   input += synapse0x32a7110();
   input += synapse0x32a7150();
   input += synapse0x32a7190();
   input += synapse0x32a71d0();
   input += synapse0x32a7210();
   input += synapse0x32a7250();
   input += synapse0x32a7290();
   input += synapse0x32a72d0();
   input += synapse0x32a7310();
   input += synapse0x32a7350();
   input += synapse0x32a7390();
   input += synapse0x32a6e20();
   input += synapse0x32a6e60();
   input += synapse0x32a74e0();
   input += synapse0x32a7520();
   input += synapse0x32a7560();
   input += synapse0x32a75a0();
   input += synapse0x32a75e0();
   input += synapse0x32a7620();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a6c90() {
   double input = input0x32a6c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a7660() {
   double input = -0.875804;
   input += synapse0x32a79a0();
   input += synapse0x32a79e0();
   input += synapse0x32a7a20();
   input += synapse0x32a7a60();
   input += synapse0x32a7aa0();
   input += synapse0x32a7ae0();
   input += synapse0x32a7b20();
   input += synapse0x32a7b60();
   input += synapse0x32a7ba0();
   input += synapse0x32a7be0();
   input += synapse0x32a7c20();
   input += synapse0x32a7c60();
   input += synapse0x32a7ca0();
   input += synapse0x32a7ce0();
   input += synapse0x32a7d20();
   input += synapse0x32a7d60();
   input += synapse0x32a77f0();
   input += synapse0x32a7830();
   input += synapse0x32a7eb0();
   input += synapse0x32a7ef0();
   input += synapse0x32a7f30();
   input += synapse0x32a7f70();
   input += synapse0x32a7fb0();
   input += synapse0x32a7ff0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a7660() {
   double input = input0x32a7660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a8030() {
   double input = 3.35242;
   input += synapse0x32a8370();
   input += synapse0x32a83b0();
   input += synapse0x32a83f0();
   input += synapse0x32a8430();
   input += synapse0x32a8470();
   input += synapse0x32a84b0();
   input += synapse0x32a84f0();
   input += synapse0x32a8530();
   input += synapse0x32a8570();
   input += synapse0x32a85b0();
   input += synapse0x32a85f0();
   input += synapse0x32a8630();
   input += synapse0x32a8670();
   input += synapse0x32a86b0();
   input += synapse0x32a86f0();
   input += synapse0x32a8730();
   input += synapse0x32a81c0();
   input += synapse0x32a8200();
   input += synapse0x32a8880();
   input += synapse0x32a88c0();
   input += synapse0x32a8900();
   input += synapse0x32a8940();
   input += synapse0x32a8980();
   input += synapse0x32a89c0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a8030() {
   double input = input0x32a8030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a8a00() {
   double input = -2.84041;
   input += synapse0x32a8d40();
   input += synapse0x32a8d80();
   input += synapse0x32a8dc0();
   input += synapse0x32a8e00();
   input += synapse0x32a8e40();
   input += synapse0x32a8e80();
   input += synapse0x32a8ec0();
   input += synapse0x32a8f00();
   input += synapse0x32a8f40();
   input += synapse0x32a8f80();
   input += synapse0x32a8fc0();
   input += synapse0x32a9000();
   input += synapse0x32a9040();
   input += synapse0x32a9080();
   input += synapse0x32a90c0();
   input += synapse0x32a9100();
   input += synapse0x32a8b90();
   input += synapse0x32a8bd0();
   input += synapse0x32a9250();
   input += synapse0x32a9290();
   input += synapse0x32a92d0();
   input += synapse0x32a9310();
   input += synapse0x32a9350();
   input += synapse0x32a9390();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a8a00() {
   double input = input0x32a8a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a93d0() {
   double input = 0.800543;
   input += synapse0x32a9710();
   input += synapse0x32a9750();
   input += synapse0x32a9790();
   input += synapse0x32a97d0();
   input += synapse0x32a9810();
   input += synapse0x32a9850();
   input += synapse0x32a9890();
   input += synapse0x32a98d0();
   input += synapse0x32a9910();
   input += synapse0x32a9950();
   input += synapse0x32a9990();
   input += synapse0x32a99d0();
   input += synapse0x32a9a10();
   input += synapse0x32a9a50();
   input += synapse0x32a9a90();
   input += synapse0x32a9ad0();
   input += synapse0x32a9560();
   input += synapse0x32a95a0();
   input += synapse0x32a9c20();
   input += synapse0x32a9c60();
   input += synapse0x32a9ca0();
   input += synapse0x32a9ce0();
   input += synapse0x32a9d20();
   input += synapse0x32a9d60();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a93d0() {
   double input = input0x32a93d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32a9da0() {
   double input = -1.10605;
   input += synapse0x32aa0e0();
   input += synapse0x32aa120();
   input += synapse0x32aa160();
   input += synapse0x32aa1a0();
   input += synapse0x32aa1e0();
   input += synapse0x32aa220();
   input += synapse0x32aa260();
   input += synapse0x32aa2a0();
   input += synapse0x32aa2e0();
   input += synapse0x32aa320();
   input += synapse0x32aa360();
   input += synapse0x32aa3a0();
   input += synapse0x32aa3e0();
   input += synapse0x32aa420();
   input += synapse0x32aa460();
   input += synapse0x32aa4a0();
   input += synapse0x32a9f30();
   input += synapse0x32a9f70();
   input += synapse0x32aa5f0();
   input += synapse0x32aa630();
   input += synapse0x32aa670();
   input += synapse0x32aa6b0();
   input += synapse0x32aa6f0();
   input += synapse0x32aa730();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32a9da0() {
   double input = input0x32a9da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32aa770() {
   double input = 0.554257;
   input += synapse0x32931e0();
   input += synapse0x3293220();
   input += synapse0x3293260();
   input += synapse0x32932a0();
   input += synapse0x32932e0();
   input += synapse0x3293320();
   input += synapse0x3293360();
   input += synapse0x32933a0();
   input += synapse0x32aaec0();
   input += synapse0x32aaf00();
   input += synapse0x32aaf40();
   input += synapse0x32aaf80();
   input += synapse0x32aafc0();
   input += synapse0x32ab000();
   input += synapse0x32ab040();
   input += synapse0x32ab080();
   input += synapse0x32aa900();
   input += synapse0x32aa940();
   input += synapse0x32ab1d0();
   input += synapse0x32ab210();
   input += synapse0x32ab250();
   input += synapse0x32ab290();
   input += synapse0x32ab2d0();
   input += synapse0x32ab310();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32aa770() {
   double input = input0x32aa770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32ab350() {
   double input = -6.85615;
   input += synapse0x32ab690();
   input += synapse0x32ab6d0();
   input += synapse0x32ab710();
   input += synapse0x32ab750();
   input += synapse0x32ab790();
   input += synapse0x32ab7d0();
   input += synapse0x32ab810();
   input += synapse0x32ab850();
   input += synapse0x32ab890();
   input += synapse0x32ab8d0();
   input += synapse0x32ab910();
   input += synapse0x32ab950();
   input += synapse0x32ab990();
   input += synapse0x32ab9d0();
   input += synapse0x32aba10();
   input += synapse0x32aba50();
   input += synapse0x32ab4e0();
   input += synapse0x32ab520();
   input += synapse0x32abba0();
   input += synapse0x32abbe0();
   input += synapse0x32abc20();
   input += synapse0x32abc60();
   input += synapse0x32abca0();
   input += synapse0x32abce0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32ab350() {
   double input = input0x32ab350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32abd20() {
   double input = 1.74941;
   input += synapse0x32ac060();
   input += synapse0x32ac0a0();
   input += synapse0x32ac0e0();
   input += synapse0x32ac120();
   input += synapse0x32ac160();
   input += synapse0x32ac1a0();
   input += synapse0x32ac1e0();
   input += synapse0x32ac220();
   input += synapse0x32ac260();
   input += synapse0x32ac2a0();
   input += synapse0x32ac2e0();
   input += synapse0x32ac320();
   input += synapse0x32ac360();
   input += synapse0x32ac3a0();
   input += synapse0x32ac3e0();
   input += synapse0x32ac420();
   input += synapse0x32abeb0();
   input += synapse0x32abef0();
   input += synapse0x329ca20();
   input += synapse0x329ca60();
   input += synapse0x329caa0();
   input += synapse0x329cae0();
   input += synapse0x329cb20();
   input += synapse0x329cb60();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32abd20() {
   double input = input0x32abd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329cba0() {
   double input = -0.814948;
   input += synapse0x329cee0();
   input += synapse0x329cf20();
   input += synapse0x329cf60();
   input += synapse0x329cfa0();
   input += synapse0x329cfe0();
   input += synapse0x329d020();
   input += synapse0x329d060();
   input += synapse0x329d0a0();
   input += synapse0x329d0e0();
   input += synapse0x329d120();
   input += synapse0x329d160();
   input += synapse0x329d1a0();
   input += synapse0x329d1e0();
   input += synapse0x329d220();
   input += synapse0x329d260();
   input += synapse0x329d2a0();
   input += synapse0x329cd30();
   input += synapse0x329cd70();
   input += synapse0x329d3f0();
   input += synapse0x329d430();
   input += synapse0x329d470();
   input += synapse0x329d4b0();
   input += synapse0x329d4f0();
   input += synapse0x329d530();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329cba0() {
   double input = input0x329cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329d570() {
   double input = -0.590108;
   input += synapse0x329d8b0();
   input += synapse0x329d8f0();
   input += synapse0x329d930();
   input += synapse0x329d970();
   input += synapse0x329d9b0();
   input += synapse0x329d9f0();
   input += synapse0x329da30();
   input += synapse0x329da70();
   input += synapse0x329dab0();
   input += synapse0x329daf0();
   input += synapse0x329db30();
   input += synapse0x329db70();
   input += synapse0x329dbb0();
   input += synapse0x329dbf0();
   input += synapse0x329dc30();
   input += synapse0x329dc70();
   input += synapse0x329d700();
   input += synapse0x329d740();
   input += synapse0x329ddc0();
   input += synapse0x329de00();
   input += synapse0x329de40();
   input += synapse0x329de80();
   input += synapse0x329dec0();
   input += synapse0x329df00();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329d570() {
   double input = input0x329d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x329df40() {
   double input = 2.20075;
   input += synapse0x329e280();
   input += synapse0x329e2c0();
   input += synapse0x329e300();
   input += synapse0x329e340();
   input += synapse0x329e380();
   input += synapse0x329e3c0();
   input += synapse0x329e400();
   input += synapse0x329e440();
   input += synapse0x329e480();
   input += synapse0x329e4c0();
   input += synapse0x329e500();
   input += synapse0x329e540();
   input += synapse0x329e580();
   input += synapse0x329e5c0();
   input += synapse0x329e600();
   input += synapse0x329e640();
   input += synapse0x329e0d0();
   input += synapse0x329e110();
   input += synapse0x329e790();
   input += synapse0x329e7d0();
   input += synapse0x329e810();
   input += synapse0x329e850();
   input += synapse0x329e890();
   input += synapse0x329e8d0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x329df40() {
   double input = input0x329df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b0580() {
   double input = 2.5606;
   input += synapse0x32b07a0();
   input += synapse0x32b07e0();
   input += synapse0x32b0820();
   input += synapse0x32b0860();
   input += synapse0x32b08a0();
   input += synapse0x32b08e0();
   input += synapse0x32b0920();
   input += synapse0x32b0960();
   input += synapse0x32b09a0();
   input += synapse0x32b09e0();
   input += synapse0x32b0a20();
   input += synapse0x32b0a60();
   input += synapse0x32b0aa0();
   input += synapse0x32b0ae0();
   input += synapse0x32b0b20();
   input += synapse0x32b0b60();
   input += synapse0x329e910();
   input += synapse0x329e950();
   input += synapse0x32b0cb0();
   input += synapse0x32b0cf0();
   input += synapse0x32b0d30();
   input += synapse0x32b0d70();
   input += synapse0x32b0db0();
   input += synapse0x32b0df0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b0580() {
   double input = input0x32b0580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b0e30() {
   double input = -0.62859;
   input += synapse0x32b1170();
   input += synapse0x32b11b0();
   input += synapse0x32b11f0();
   input += synapse0x32b1230();
   input += synapse0x32b1270();
   input += synapse0x32b12b0();
   input += synapse0x32b12f0();
   input += synapse0x32b1330();
   input += synapse0x32b1370();
   input += synapse0x32b13b0();
   input += synapse0x32b13f0();
   input += synapse0x32b1430();
   input += synapse0x32b1470();
   input += synapse0x32b14b0();
   input += synapse0x32b14f0();
   input += synapse0x32b1530();
   input += synapse0x32b0fc0();
   input += synapse0x32b1000();
   input += synapse0x32b1680();
   input += synapse0x32b16c0();
   input += synapse0x32b1700();
   input += synapse0x32b1740();
   input += synapse0x32b1780();
   input += synapse0x32b17c0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b0e30() {
   double input = input0x32b0e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b1800() {
   double input = -0.724814;
   input += synapse0x32b1b40();
   input += synapse0x32b1b80();
   input += synapse0x32b1bc0();
   input += synapse0x32b1c00();
   input += synapse0x32b1c40();
   input += synapse0x32b1c80();
   input += synapse0x32b1cc0();
   input += synapse0x32b1d00();
   input += synapse0x32b1d40();
   input += synapse0x32b1d80();
   input += synapse0x32b1dc0();
   input += synapse0x32b1e00();
   input += synapse0x32b1e40();
   input += synapse0x32b1e80();
   input += synapse0x32b1ec0();
   input += synapse0x32b1f00();
   input += synapse0x32b1990();
   input += synapse0x32b19d0();
   input += synapse0x32b2050();
   input += synapse0x32b2090();
   input += synapse0x32b20d0();
   input += synapse0x32b2110();
   input += synapse0x32b2150();
   input += synapse0x32b2190();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b1800() {
   double input = input0x32b1800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b21d0() {
   double input = 0.61776;
   input += synapse0x32b2510();
   input += synapse0x32b2550();
   input += synapse0x32b2590();
   input += synapse0x32b25d0();
   input += synapse0x32b2610();
   input += synapse0x32b2650();
   input += synapse0x32b2690();
   input += synapse0x32b26d0();
   input += synapse0x32b2710();
   input += synapse0x32b2750();
   input += synapse0x32b2790();
   input += synapse0x32b27d0();
   input += synapse0x32b2810();
   input += synapse0x32b2850();
   input += synapse0x32b2890();
   input += synapse0x32b28d0();
   input += synapse0x32b2360();
   input += synapse0x32b23a0();
   input += synapse0x32b2a20();
   input += synapse0x32b2a60();
   input += synapse0x32b2aa0();
   input += synapse0x32b2ae0();
   input += synapse0x32b2b20();
   input += synapse0x32b2b60();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b21d0() {
   double input = input0x32b21d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b93d0() {
   double input = -5.32459;
   input += synapse0x3052930();
   input += synapse0x3052970();
   input += synapse0x328f510();
   input += synapse0x328f550();
   input += synapse0x3290fe0();
   input += synapse0x3291020();
   input += synapse0x3291db0();
   input += synapse0x3291df0();
   input += synapse0x3292780();
   input += synapse0x32927c0();
   input += synapse0x3293150();
   input += synapse0x3293190();
   input += synapse0x3293c30();
   input += synapse0x3293c70();
   input += synapse0x3294600();
   input += synapse0x3294640();
   input += synapse0x32916e0();
   input += synapse0x3291720();
   input += synapse0x32961b0();
   input += synapse0x32961f0();
   input += synapse0x3296b80();
   input += synapse0x3296bc0();
   input += synapse0x3297550();
   input += synapse0x3297590();
   input += synapse0x3297f20();
   input += synapse0x3297f60();
   input += synapse0x328afb0();
   input += synapse0x328aff0();
   input += synapse0x329a010();
   input += synapse0x329a050();
   input += synapse0x329a9e0();
   input += synapse0x329aa20();
   input += synapse0x329b3b0();
   input += synapse0x329b3f0();
   input += synapse0x329bd80();
   input += synapse0x329bdc0();
   input += synapse0x329c750();
   input += synapse0x329c790();
   input += synapse0x32952a0();
   input += synapse0x32952e0();
   input += synapse0x329eb50();
   input += synapse0x329eb90();
   input += synapse0x329f4e0();
   input += synapse0x329f520();
   input += synapse0x329feb0();
   input += synapse0x329fef0();
   input += synapse0x32a0880();
   input += synapse0x32a08c0();
   input += synapse0x32a1250();
   input += synapse0x32a1290();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b93d0() {
   double input = input0x32b93d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b9770() {
   double input = -1.40105;
   input += synapse0x32a3990();
   input += synapse0x32a39d0();
   input += synapse0x3298f50();
   input += synapse0x3298f90();
   input += synapse0x32a6570();
   input += synapse0x32a65b0();
   input += synapse0x32a6f40();
   input += synapse0x32a6f80();
   input += synapse0x32a7910();
   input += synapse0x32a7950();
   input += synapse0x32a82e0();
   input += synapse0x32a8320();
   input += synapse0x32a8cb0();
   input += synapse0x32a8cf0();
   input += synapse0x32a9680();
   input += synapse0x32a96c0();
   input += synapse0x32aa050();
   input += synapse0x32aa090();
   input += synapse0x32aaa20();
   input += synapse0x32aaa60();
   input += synapse0x32ab600();
   input += synapse0x32ab640();
   input += synapse0x32abfd0();
   input += synapse0x32ac010();
   input += synapse0x329ce50();
   input += synapse0x329ce90();
   input += synapse0x329d820();
   input += synapse0x329d860();
   input += synapse0x329e1f0();
   input += synapse0x329e230();
   input += synapse0x32b0710();
   input += synapse0x32b0750();
   input += synapse0x32b10e0();
   input += synapse0x32b1120();
   input += synapse0x32b1ab0();
   input += synapse0x32b1af0();
   input += synapse0x32b2480();
   input += synapse0x32b24c0();
   input += synapse0x328d410();
   input += synapse0x328d450();
   input += synapse0x32a1c20();
   input += synapse0x32a1c60();
   input += synapse0x32b2ba0();
   input += synapse0x32b2be0();
   input += synapse0x32b2c20();
   input += synapse0x32b2c60();
   input += synapse0x32b9b10();
   input += synapse0x32b9b50();
   input += synapse0x32b9b90();
   input += synapse0x32b9bd0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b9770() {
   double input = input0x32b9770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32b9c10() {
   double input = 0.652114;
   input += synapse0x32b9f50();
   input += synapse0x32b9f90();
   input += synapse0x32b9fd0();
   input += synapse0x32ba010();
   input += synapse0x32ba050();
   input += synapse0x32ba090();
   input += synapse0x32ba0d0();
   input += synapse0x32ba110();
   input += synapse0x32ba150();
   input += synapse0x32ba190();
   input += synapse0x32ba1d0();
   input += synapse0x32ba210();
   input += synapse0x32ba250();
   input += synapse0x32ba290();
   input += synapse0x32ba2d0();
   input += synapse0x32ba310();
   input += synapse0x32b9da0();
   input += synapse0x32b9de0();
   input += synapse0x32ba460();
   input += synapse0x32ba4a0();
   input += synapse0x32ba4e0();
   input += synapse0x32ba520();
   input += synapse0x32ba560();
   input += synapse0x32ba5a0();
   input += synapse0x32ba5e0();
   input += synapse0x32ba620();
   input += synapse0x32ba660();
   input += synapse0x32ba6a0();
   input += synapse0x32ba6e0();
   input += synapse0x32ba720();
   input += synapse0x32ba760();
   input += synapse0x32ba7a0();
   input += synapse0x32ba350();
   input += synapse0x32ba390();
   input += synapse0x32ba3d0();
   input += synapse0x32ba410();
   input += synapse0x32ba9f0();
   input += synapse0x32baa30();
   input += synapse0x32baa70();
   input += synapse0x32baab0();
   input += synapse0x32baaf0();
   input += synapse0x32bab30();
   input += synapse0x32bab70();
   input += synapse0x32babb0();
   input += synapse0x32babf0();
   input += synapse0x32bac30();
   input += synapse0x32bac70();
   input += synapse0x32bacb0();
   input += synapse0x32bacf0();
   input += synapse0x32bad30();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32b9c10() {
   double input = input0x32b9c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32bad70() {
   double input = 3.42803;
   input += synapse0x32bb0b0();
   input += synapse0x32bb0f0();
   input += synapse0x32bb130();
   input += synapse0x32bb170();
   input += synapse0x32bb1b0();
   input += synapse0x32bb1f0();
   input += synapse0x32bb230();
   input += synapse0x32bb270();
   input += synapse0x32bb2b0();
   input += synapse0x32bb2f0();
   input += synapse0x32bb330();
   input += synapse0x32bb370();
   input += synapse0x32bb3b0();
   input += synapse0x32bb3f0();
   input += synapse0x32bb430();
   input += synapse0x32bb470();
   input += synapse0x32baf00();
   input += synapse0x32baf40();
   input += synapse0x32bb5c0();
   input += synapse0x32bb600();
   input += synapse0x32bb640();
   input += synapse0x32bb680();
   input += synapse0x32bb6c0();
   input += synapse0x32bb700();
   input += synapse0x32bb740();
   input += synapse0x32bb780();
   input += synapse0x32bb7c0();
   input += synapse0x32bb800();
   input += synapse0x32bb840();
   input += synapse0x32bb880();
   input += synapse0x32bb8c0();
   input += synapse0x32bb900();
   input += synapse0x32bb4b0();
   input += synapse0x32bb4f0();
   input += synapse0x32bb530();
   input += synapse0x32bb570();
   input += synapse0x32bbb50();
   input += synapse0x32bbb90();
   input += synapse0x32bbbd0();
   input += synapse0x32bbc10();
   input += synapse0x32bbc50();
   input += synapse0x32bbc90();
   input += synapse0x32bbcd0();
   input += synapse0x32bbd10();
   input += synapse0x32bbd50();
   input += synapse0x32bbd90();
   input += synapse0x32bbdd0();
   input += synapse0x32bbe10();
   input += synapse0x32bbe50();
   input += synapse0x32bbe90();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32bad70() {
   double input = input0x32bad70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32bbed0() {
   double input = -5.75907;
   input += synapse0x32bc210();
   input += synapse0x32bc250();
   input += synapse0x32bc290();
   input += synapse0x32bc2d0();
   input += synapse0x32bc310();
   input += synapse0x32bc350();
   input += synapse0x32bc390();
   input += synapse0x32bc3d0();
   input += synapse0x32bc410();
   input += synapse0x32bc450();
   input += synapse0x32bc490();
   input += synapse0x32bc4d0();
   input += synapse0x32bc510();
   input += synapse0x32bc550();
   input += synapse0x32bc590();
   input += synapse0x32bc5d0();
   input += synapse0x32bc060();
   input += synapse0x32bc0a0();
   input += synapse0x32bc720();
   input += synapse0x32bc760();
   input += synapse0x32bc7a0();
   input += synapse0x32bc7e0();
   input += synapse0x32bc820();
   input += synapse0x32bc860();
   input += synapse0x32bc8a0();
   input += synapse0x32bc8e0();
   input += synapse0x32bc920();
   input += synapse0x32bc960();
   input += synapse0x32bc9a0();
   input += synapse0x32bc9e0();
   input += synapse0x32bca20();
   input += synapse0x32bca60();
   input += synapse0x32bc610();
   input += synapse0x32bc650();
   input += synapse0x32bc690();
   input += synapse0x32bc6d0();
   input += synapse0x32bccb0();
   input += synapse0x32bccf0();
   input += synapse0x32bcd30();
   input += synapse0x32bcd70();
   input += synapse0x32bcdb0();
   input += synapse0x32bcdf0();
   input += synapse0x32bce30();
   input += synapse0x32bce70();
   input += synapse0x32bceb0();
   input += synapse0x32bcef0();
   input += synapse0x32bcf30();
   input += synapse0x32bcf70();
   input += synapse0x32bcfb0();
   input += synapse0x32bcff0();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32bbed0() {
   double input = input0x32bbed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi3::input0x32bd030() {
   double input = 3.09192;
   input += synapse0x32bd250();
   input += synapse0x32bd290();
   input += synapse0x32bd2d0();
   input += synapse0x32bd310();
   input += synapse0x32bd350();
   return input;
}

double NNfunction_nn_chi1_chi3::neuron0x32bd030() {
   double input = input0x32bd030();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_chi3::synapse0x328d4a0() {
   return (neuron0x32880a0()*0.15452);
}

double NNfunction_nn_chi1_chi3::synapse0x328d4e0() {
   return (neuron0x3288350()*-0.0202295);
}

double NNfunction_nn_chi1_chi3::synapse0x328d520() {
   return (neuron0x3288690()*3.21758);
}

double NNfunction_nn_chi1_chi3::synapse0x328d560() {
   return (neuron0x32889d0()*0.0416616);
}

double NNfunction_nn_chi1_chi3::synapse0x328d5a0() {
   return (neuron0x3288d10()*-0.0445919);
}

double NNfunction_nn_chi1_chi3::synapse0x328d5e0() {
   return (neuron0x3289050()*0.00738923);
}

double NNfunction_nn_chi1_chi3::synapse0x328d620() {
   return (neuron0x3289390()*-0.00977244);
}

double NNfunction_nn_chi1_chi3::synapse0x328d660() {
   return (neuron0x32896d0()*-0.00221413);
}

double NNfunction_nn_chi1_chi3::synapse0x328d6a0() {
   return (neuron0x3289a10()*0.166381);
}

double NNfunction_nn_chi1_chi3::synapse0x328d6e0() {
   return (neuron0x3289d50()*-0.0434665);
}

double NNfunction_nn_chi1_chi3::synapse0x328d720() {
   return (neuron0x328a090()*0.190947);
}

double NNfunction_nn_chi1_chi3::synapse0x328d760() {
   return (neuron0x328a3d0()*1.11208);
}

double NNfunction_nn_chi1_chi3::synapse0x328d7a0() {
   return (neuron0x328a710()*0.0866002);
}

double NNfunction_nn_chi1_chi3::synapse0x328d7e0() {
   return (neuron0x328aa50()*-0.232633);
}

double NNfunction_nn_chi1_chi3::synapse0x328d820() {
   return (neuron0x328ad90()*-0.0420293);
}

double NNfunction_nn_chi1_chi3::synapse0x328d860() {
   return (neuron0x328b0d0()*-0.0742309);
}

double NNfunction_nn_chi1_chi3::synapse0x328d2f0() {
   return (neuron0x328b410()*0.170414);
}

double NNfunction_nn_chi1_chi3::synapse0x328d330() {
   return (neuron0x328b970()*0.0164008);
}

double NNfunction_nn_chi1_chi3::synapse0x3044390() {
   return (neuron0x328bcb0()*-0.0360553);
}

double NNfunction_nn_chi1_chi3::synapse0x30443d0() {
   return (neuron0x328bff0()*-0.0289255);
}

double NNfunction_nn_chi1_chi3::synapse0x328d8a0() {
   return (neuron0x328c330()*-0.0819342);
}

double NNfunction_nn_chi1_chi3::synapse0x328d8e0() {
   return (neuron0x328c670()*0.0457003);
}

double NNfunction_nn_chi1_chi3::synapse0x328d920() {
   return (neuron0x328c9b0()*0.0137456);
}

double NNfunction_nn_chi1_chi3::synapse0x328d960() {
   return (neuron0x328ccf0()*1.34642);
}

double NNfunction_nn_chi1_chi3::synapse0x328dce0() {
   return (neuron0x32880a0()*-0.394787);
}

double NNfunction_nn_chi1_chi3::synapse0x328dd20() {
   return (neuron0x3288350()*0.733204);
}

double NNfunction_nn_chi1_chi3::synapse0x328dd60() {
   return (neuron0x3288690()*-1.68091);
}

double NNfunction_nn_chi1_chi3::synapse0x328dda0() {
   return (neuron0x32889d0()*0.13327);
}

double NNfunction_nn_chi1_chi3::synapse0x328dde0() {
   return (neuron0x3288d10()*0.129427);
}

double NNfunction_nn_chi1_chi3::synapse0x328de20() {
   return (neuron0x3289050()*-0.482103);
}

double NNfunction_nn_chi1_chi3::synapse0x328de60() {
   return (neuron0x3289390()*0.162603);
}

double NNfunction_nn_chi1_chi3::synapse0x328dea0() {
   return (neuron0x32896d0()*0.434432);
}

double NNfunction_nn_chi1_chi3::synapse0x328dee0() {
   return (neuron0x3289a10()*-0.675027);
}

double NNfunction_nn_chi1_chi3::synapse0x30441e0() {
   return (neuron0x3289d50()*0.125681);
}

double NNfunction_nn_chi1_chi3::synapse0x3044220() {
   return (neuron0x328a090()*-0.138913);
}

double NNfunction_nn_chi1_chi3::synapse0x3044260() {
   return (neuron0x328a3d0()*-1.85202);
}

double NNfunction_nn_chi1_chi3::synapse0x30442a0() {
   return (neuron0x328a710()*-0.404801);
}

double NNfunction_nn_chi1_chi3::synapse0x328e130() {
   return (neuron0x328aa50()*0.632188);
}

double NNfunction_nn_chi1_chi3::synapse0x328e170() {
   return (neuron0x328ad90()*-0.351159);
}

double NNfunction_nn_chi1_chi3::synapse0x328e1b0() {
   return (neuron0x328b0d0()*-0.868009);
}

double NNfunction_nn_chi1_chi3::synapse0x328db30() {
   return (neuron0x328b410()*0.392601);
}

double NNfunction_nn_chi1_chi3::synapse0x328db70() {
   return (neuron0x328b970()*-0.494826);
}

double NNfunction_nn_chi1_chi3::synapse0x328e300() {
   return (neuron0x328bcb0()*-0.0149853);
}

double NNfunction_nn_chi1_chi3::synapse0x328e340() {
   return (neuron0x328bff0()*-1.04259);
}

double NNfunction_nn_chi1_chi3::synapse0x328e380() {
   return (neuron0x328c330()*0.501038);
}

double NNfunction_nn_chi1_chi3::synapse0x328e3c0() {
   return (neuron0x328c670()*0.0840961);
}

double NNfunction_nn_chi1_chi3::synapse0x328e400() {
   return (neuron0x328c9b0()*0.113635);
}

double NNfunction_nn_chi1_chi3::synapse0x328e440() {
   return (neuron0x328ccf0()*-4.365);
}

double NNfunction_nn_chi1_chi3::synapse0x328e7c0() {
   return (neuron0x32880a0()*-0.774998);
}

double NNfunction_nn_chi1_chi3::synapse0x328e800() {
   return (neuron0x3288350()*0.180365);
}

double NNfunction_nn_chi1_chi3::synapse0x328e840() {
   return (neuron0x3288690()*0.495484);
}

double NNfunction_nn_chi1_chi3::synapse0x328e880() {
   return (neuron0x32889d0()*-1.58153);
}

double NNfunction_nn_chi1_chi3::synapse0x328e8c0() {
   return (neuron0x3288d10()*0.56231);
}

double NNfunction_nn_chi1_chi3::synapse0x328e900() {
   return (neuron0x3289050()*0.0645439);
}

double NNfunction_nn_chi1_chi3::synapse0x328e940() {
   return (neuron0x3289390()*-0.939656);
}

double NNfunction_nn_chi1_chi3::synapse0x328e980() {
   return (neuron0x32896d0()*0.24317);
}

double NNfunction_nn_chi1_chi3::synapse0x328e9c0() {
   return (neuron0x3289a10()*0.836741);
}

double NNfunction_nn_chi1_chi3::synapse0x328ea00() {
   return (neuron0x3289d50()*2.7856);
}

double NNfunction_nn_chi1_chi3::synapse0x328ea40() {
   return (neuron0x328a090()*1.66967);
}

double NNfunction_nn_chi1_chi3::synapse0x328ea80() {
   return (neuron0x328a3d0()*-0.570441);
}

double NNfunction_nn_chi1_chi3::synapse0x328eac0() {
   return (neuron0x328a710()*0.55494);
}

double NNfunction_nn_chi1_chi3::synapse0x328eb00() {
   return (neuron0x328aa50()*-0.578304);
}

double NNfunction_nn_chi1_chi3::synapse0x328eb40() {
   return (neuron0x328ad90()*-1.77824);
}

double NNfunction_nn_chi1_chi3::synapse0x328eb80() {
   return (neuron0x328b0d0()*-0.185657);
}

double NNfunction_nn_chi1_chi3::synapse0x328e610() {
   return (neuron0x328b410()*2.15834);
}

double NNfunction_nn_chi1_chi3::synapse0x328e650() {
   return (neuron0x328b970()*1.29969);
}

double NNfunction_nn_chi1_chi3::synapse0x1fbbf10() {
   return (neuron0x328bcb0()*0.801942);
}

double NNfunction_nn_chi1_chi3::synapse0x3052120() {
   return (neuron0x328bff0()*1.57171);
}

double NNfunction_nn_chi1_chi3::synapse0x3052160() {
   return (neuron0x328c330()*-0.495865);
}

double NNfunction_nn_chi1_chi3::synapse0x3290ab0() {
   return (neuron0x328c670()*0.745688);
}

double NNfunction_nn_chi1_chi3::synapse0x3290af0() {
   return (neuron0x328c9b0()*0.707855);
}

double NNfunction_nn_chi1_chi3::synapse0x3287de0() {
   return (neuron0x328ccf0()*-0.69972);
}

double NNfunction_nn_chi1_chi3::synapse0x3287eb0() {
   return (neuron0x32880a0()*-0.386176);
}

double NNfunction_nn_chi1_chi3::synapse0x30529c0() {
   return (neuron0x3288350()*0.712911);
}

double NNfunction_nn_chi1_chi3::synapse0x328e0b0() {
   return (neuron0x3288690()*1.28609);
}

double NNfunction_nn_chi1_chi3::synapse0x328e0f0() {
   return (neuron0x32889d0()*1.81836);
}

double NNfunction_nn_chi1_chi3::synapse0x328ecd0() {
   return (neuron0x3288d10()*0.366884);
}

double NNfunction_nn_chi1_chi3::synapse0x328ed10() {
   return (neuron0x3289050()*-0.318015);
}

double NNfunction_nn_chi1_chi3::synapse0x328ed50() {
   return (neuron0x3289390()*-0.796363);
}

double NNfunction_nn_chi1_chi3::synapse0x328ed90() {
   return (neuron0x32896d0()*1.12569);
}

double NNfunction_nn_chi1_chi3::synapse0x328edd0() {
   return (neuron0x3289a10()*-0.366843);
}

double NNfunction_nn_chi1_chi3::synapse0x328ee10() {
   return (neuron0x3289d50()*0.588657);
}

double NNfunction_nn_chi1_chi3::synapse0x328ee50() {
   return (neuron0x328a090()*-0.14962);
}

double NNfunction_nn_chi1_chi3::synapse0x328ee90() {
   return (neuron0x328a3d0()*-1.33965);
}

double NNfunction_nn_chi1_chi3::synapse0x328eed0() {
   return (neuron0x328a710()*-0.31477);
}

double NNfunction_nn_chi1_chi3::synapse0x328ef10() {
   return (neuron0x328aa50()*0.527965);
}

double NNfunction_nn_chi1_chi3::synapse0x328ef50() {
   return (neuron0x328ad90()*2.25092);
}

double NNfunction_nn_chi1_chi3::synapse0x328ef90() {
   return (neuron0x328b0d0()*0.894251);
}

double NNfunction_nn_chi1_chi3::synapse0x3287e20() {
   return (neuron0x328b410()*1.22835);
}

double NNfunction_nn_chi1_chi3::synapse0x3287e60() {
   return (neuron0x328b970()*-0.770926);
}

double NNfunction_nn_chi1_chi3::synapse0x328f0e0() {
   return (neuron0x328bcb0()*-0.0865513);
}

double NNfunction_nn_chi1_chi3::synapse0x328f120() {
   return (neuron0x328bff0()*1.37824);
}

double NNfunction_nn_chi1_chi3::synapse0x328f160() {
   return (neuron0x328c330()*-0.71149);
}

double NNfunction_nn_chi1_chi3::synapse0x328f1a0() {
   return (neuron0x328c670()*-0.978349);
}

double NNfunction_nn_chi1_chi3::synapse0x328f1e0() {
   return (neuron0x328c9b0()*-0.885343);
}

double NNfunction_nn_chi1_chi3::synapse0x328f220() {
   return (neuron0x328ccf0()*0.666688);
}

double NNfunction_nn_chi1_chi3::synapse0x328f5a0() {
   return (neuron0x32880a0()*0.959277);
}

double NNfunction_nn_chi1_chi3::synapse0x328f5e0() {
   return (neuron0x3288350()*-0.287717);
}

double NNfunction_nn_chi1_chi3::synapse0x328f620() {
   return (neuron0x3288690()*-0.51377);
}

double NNfunction_nn_chi1_chi3::synapse0x328f660() {
   return (neuron0x32889d0()*1.52253);
}

double NNfunction_nn_chi1_chi3::synapse0x328f6a0() {
   return (neuron0x3288d10()*-0.416472);
}

double NNfunction_nn_chi1_chi3::synapse0x328f6e0() {
   return (neuron0x3289050()*-0.0393523);
}

double NNfunction_nn_chi1_chi3::synapse0x328f720() {
   return (neuron0x3289390()*0.713832);
}

double NNfunction_nn_chi1_chi3::synapse0x328f760() {
   return (neuron0x32896d0()*-0.19581);
}

double NNfunction_nn_chi1_chi3::synapse0x328f7a0() {
   return (neuron0x3289a10()*-0.852494);
}

double NNfunction_nn_chi1_chi3::synapse0x328f7e0() {
   return (neuron0x3289d50()*-2.6866);
}

double NNfunction_nn_chi1_chi3::synapse0x328f820() {
   return (neuron0x328a090()*-1.57946);
}

double NNfunction_nn_chi1_chi3::synapse0x328f860() {
   return (neuron0x328a3d0()*0.35404);
}

double NNfunction_nn_chi1_chi3::synapse0x328f8a0() {
   return (neuron0x328a710()*-0.560384);
}

double NNfunction_nn_chi1_chi3::synapse0x328f8e0() {
   return (neuron0x328aa50()*0.548605);
}

double NNfunction_nn_chi1_chi3::synapse0x328f920() {
   return (neuron0x328ad90()*1.3416);
}

double NNfunction_nn_chi1_chi3::synapse0x328f960() {
   return (neuron0x328b0d0()*-0.0244796);
}

double NNfunction_nn_chi1_chi3::synapse0x328fab0() {
   return (neuron0x328b410()*-1.89093);
}

double NNfunction_nn_chi1_chi3::synapse0x328f3f0() {
   return (neuron0x328b970()*-0.997614);
}

double NNfunction_nn_chi1_chi3::synapse0x328f430() {
   return (neuron0x328bcb0()*-0.76229);
}

double NNfunction_nn_chi1_chi3::synapse0x3290bf0() {
   return (neuron0x328bff0()*-1.67874);
}

double NNfunction_nn_chi1_chi3::synapse0x3290c30() {
   return (neuron0x328c330()*0.133177);
}

double NNfunction_nn_chi1_chi3::synapse0x3290c70() {
   return (neuron0x328c670()*-0.695806);
}

double NNfunction_nn_chi1_chi3::synapse0x3290cb0() {
   return (neuron0x328c9b0()*-0.784848);
}

double NNfunction_nn_chi1_chi3::synapse0x3290cf0() {
   return (neuron0x328ccf0()*0.836881);
}

double NNfunction_nn_chi1_chi3::synapse0x3291070() {
   return (neuron0x32880a0()*-0.0283448);
}

double NNfunction_nn_chi1_chi3::synapse0x32910b0() {
   return (neuron0x3288350()*-8.38331);
}

double NNfunction_nn_chi1_chi3::synapse0x32910f0() {
   return (neuron0x3288690()*0.480967);
}

double NNfunction_nn_chi1_chi3::synapse0x3291130() {
   return (neuron0x32889d0()*-0.00727535);
}

double NNfunction_nn_chi1_chi3::synapse0x3291170() {
   return (neuron0x3288d10()*-0.0115955);
}

double NNfunction_nn_chi1_chi3::synapse0x32911b0() {
   return (neuron0x3289050()*-0.0155111);
}

double NNfunction_nn_chi1_chi3::synapse0x32911f0() {
   return (neuron0x3289390()*-0.00228798);
}

double NNfunction_nn_chi1_chi3::synapse0x3291230() {
   return (neuron0x32896d0()*-0.0344942);
}

double NNfunction_nn_chi1_chi3::synapse0x3291270() {
   return (neuron0x3289a10()*-0.00374529);
}

double NNfunction_nn_chi1_chi3::synapse0x3052490() {
   return (neuron0x3289d50()*-0.00237919);
}

double NNfunction_nn_chi1_chi3::synapse0x30524d0() {
   return (neuron0x328a090()*0.00845845);
}

double NNfunction_nn_chi1_chi3::synapse0x3052510() {
   return (neuron0x328a3d0()*0.00805943);
}

double NNfunction_nn_chi1_chi3::synapse0x3052550() {
   return (neuron0x328a710()*0.0145987);
}

double NNfunction_nn_chi1_chi3::synapse0x3052590() {
   return (neuron0x328aa50()*-0.00964397);
}

double NNfunction_nn_chi1_chi3::synapse0x30525d0() {
   return (neuron0x328ad90()*-0.0258782);
}

double NNfunction_nn_chi1_chi3::synapse0x3052610() {
   return (neuron0x328b0d0()*-0.00982254);
}

double NNfunction_nn_chi1_chi3::synapse0x3290ec0() {
   return (neuron0x328b410()*-0.0207207);
}

double NNfunction_nn_chi1_chi3::synapse0x3290f00() {
   return (neuron0x328b970()*-0.0168264);
}

double NNfunction_nn_chi1_chi3::synapse0x3052760() {
   return (neuron0x328bcb0()*0.0107907);
}

double NNfunction_nn_chi1_chi3::synapse0x30527a0() {
   return (neuron0x328bff0()*-0.0250245);
}

double NNfunction_nn_chi1_chi3::synapse0x30527e0() {
   return (neuron0x328c330()*-0.000972204);
}

double NNfunction_nn_chi1_chi3::synapse0x3052820() {
   return (neuron0x328c670()*-0.004505);
}

double NNfunction_nn_chi1_chi3::synapse0x3052860() {
   return (neuron0x328c9b0()*0.000361439);
}

double NNfunction_nn_chi1_chi3::synapse0x3291ac0() {
   return (neuron0x328ccf0()*2.99537);
}

double NNfunction_nn_chi1_chi3::synapse0x3291e40() {
   return (neuron0x32880a0()*-0.0129418);
}

double NNfunction_nn_chi1_chi3::synapse0x3291e80() {
   return (neuron0x3288350()*0.0217635);
}

double NNfunction_nn_chi1_chi3::synapse0x3291ec0() {
   return (neuron0x3288690()*0.110501);
}

double NNfunction_nn_chi1_chi3::synapse0x3291f00() {
   return (neuron0x32889d0()*0.0435055);
}

double NNfunction_nn_chi1_chi3::synapse0x3291f40() {
   return (neuron0x3288d10()*-0.0137615);
}

double NNfunction_nn_chi1_chi3::synapse0x3291f80() {
   return (neuron0x3289050()*0.012847);
}

double NNfunction_nn_chi1_chi3::synapse0x3291fc0() {
   return (neuron0x3289390()*-0.0252067);
}

double NNfunction_nn_chi1_chi3::synapse0x3292000() {
   return (neuron0x32896d0()*-0.0405418);
}

double NNfunction_nn_chi1_chi3::synapse0x3292040() {
   return (neuron0x3289a10()*-0.0233421);
}

double NNfunction_nn_chi1_chi3::synapse0x3292080() {
   return (neuron0x3289d50()*-0.00214746);
}

double NNfunction_nn_chi1_chi3::synapse0x32920c0() {
   return (neuron0x328a090()*0.0113576);
}

double NNfunction_nn_chi1_chi3::synapse0x3292100() {
   return (neuron0x328a3d0()*0.0301729);
}

double NNfunction_nn_chi1_chi3::synapse0x3292140() {
   return (neuron0x328a710()*0.0481416);
}

double NNfunction_nn_chi1_chi3::synapse0x3292180() {
   return (neuron0x328aa50()*-0.0157691);
}

double NNfunction_nn_chi1_chi3::synapse0x32921c0() {
   return (neuron0x328ad90()*-0.381166);
}

double NNfunction_nn_chi1_chi3::synapse0x3292200() {
   return (neuron0x328b0d0()*0.0271462);
}

double NNfunction_nn_chi1_chi3::synapse0x3291c90() {
   return (neuron0x328b410()*-0.00667379);
}

double NNfunction_nn_chi1_chi3::synapse0x3291cd0() {
   return (neuron0x328b970()*0.00924101);
}

double NNfunction_nn_chi1_chi3::synapse0x3292350() {
   return (neuron0x328bcb0()*-0.00785262);
}

double NNfunction_nn_chi1_chi3::synapse0x3292390() {
   return (neuron0x328bff0()*-0.0350928);
}

double NNfunction_nn_chi1_chi3::synapse0x32923d0() {
   return (neuron0x328c330()*-0.00594542);
}

double NNfunction_nn_chi1_chi3::synapse0x3292410() {
   return (neuron0x328c670()*-0.0146172);
}

double NNfunction_nn_chi1_chi3::synapse0x3292450() {
   return (neuron0x328c9b0()*0.0495408);
}

double NNfunction_nn_chi1_chi3::synapse0x3292490() {
   return (neuron0x328ccf0()*-6.92866);
}

double NNfunction_nn_chi1_chi3::synapse0x3292810() {
   return (neuron0x32880a0()*0.0604261);
}

double NNfunction_nn_chi1_chi3::synapse0x3292850() {
   return (neuron0x3288350()*-18.6933);
}

double NNfunction_nn_chi1_chi3::synapse0x3292890() {
   return (neuron0x3288690()*-5.32794);
}

double NNfunction_nn_chi1_chi3::synapse0x32928d0() {
   return (neuron0x32889d0()*0.0369879);
}

double NNfunction_nn_chi1_chi3::synapse0x3292910() {
   return (neuron0x3288d10()*0.0623964);
}

double NNfunction_nn_chi1_chi3::synapse0x3292950() {
   return (neuron0x3289050()*-0.0512648);
}

double NNfunction_nn_chi1_chi3::synapse0x3292990() {
   return (neuron0x3289390()*-0.0977877);
}

double NNfunction_nn_chi1_chi3::synapse0x32929d0() {
   return (neuron0x32896d0()*-0.0582688);
}

double NNfunction_nn_chi1_chi3::synapse0x3292a10() {
   return (neuron0x3289a10()*0.00208225);
}

double NNfunction_nn_chi1_chi3::synapse0x3292a50() {
   return (neuron0x3289d50()*0.0581725);
}

double NNfunction_nn_chi1_chi3::synapse0x3292a90() {
   return (neuron0x328a090()*-0.0122563);
}

double NNfunction_nn_chi1_chi3::synapse0x3292ad0() {
   return (neuron0x328a3d0()*0.0544868);
}

double NNfunction_nn_chi1_chi3::synapse0x3292b10() {
   return (neuron0x328a710()*0.125239);
}

double NNfunction_nn_chi1_chi3::synapse0x3292b50() {
   return (neuron0x328aa50()*0.0128503);
}

double NNfunction_nn_chi1_chi3::synapse0x3292b90() {
   return (neuron0x328ad90()*-0.0375669);
}

double NNfunction_nn_chi1_chi3::synapse0x3292bd0() {
   return (neuron0x328b0d0()*0.0531369);
}

double NNfunction_nn_chi1_chi3::synapse0x3292660() {
   return (neuron0x328b410()*0.106234);
}

double NNfunction_nn_chi1_chi3::synapse0x32926a0() {
   return (neuron0x328b970()*-0.0376608);
}

double NNfunction_nn_chi1_chi3::synapse0x3292d20() {
   return (neuron0x328bcb0()*-0.036361);
}

double NNfunction_nn_chi1_chi3::synapse0x3292d60() {
   return (neuron0x328bff0()*-0.0328772);
}

double NNfunction_nn_chi1_chi3::synapse0x3292da0() {
   return (neuron0x328c330()*-0.0269366);
}

double NNfunction_nn_chi1_chi3::synapse0x3292de0() {
   return (neuron0x328c670()*-0.0566162);
}

double NNfunction_nn_chi1_chi3::synapse0x3292e20() {
   return (neuron0x328c9b0()*-0.000929673);
}

double NNfunction_nn_chi1_chi3::synapse0x3292e60() {
   return (neuron0x328ccf0()*8.36728);
}

double NNfunction_nn_chi1_chi3::synapse0x328b860() {
   return (neuron0x32880a0()*-0.078401);
}

double NNfunction_nn_chi1_chi3::synapse0x328b8a0() {
   return (neuron0x3288350()*-1.81385);
}

double NNfunction_nn_chi1_chi3::synapse0x328b8e0() {
   return (neuron0x3288690()*-0.40342);
}

double NNfunction_nn_chi1_chi3::synapse0x328b920() {
   return (neuron0x32889d0()*0.0717397);
}

double NNfunction_nn_chi1_chi3::synapse0x32933f0() {
   return (neuron0x3288d10()*-0.0232196);
}

double NNfunction_nn_chi1_chi3::synapse0x3293430() {
   return (neuron0x3289050()*0.0219645);
}

double NNfunction_nn_chi1_chi3::synapse0x3293470() {
   return (neuron0x3289390()*0.0729662);
}

double NNfunction_nn_chi1_chi3::synapse0x32934b0() {
   return (neuron0x32896d0()*-0.0581058);
}

double NNfunction_nn_chi1_chi3::synapse0x32934f0() {
   return (neuron0x3289a10()*-0.173151);
}

double NNfunction_nn_chi1_chi3::synapse0x3293530() {
   return (neuron0x3289d50()*0.00521839);
}

double NNfunction_nn_chi1_chi3::synapse0x3293570() {
   return (neuron0x328a090()*-0.00405333);
}

double NNfunction_nn_chi1_chi3::synapse0x32935b0() {
   return (neuron0x328a3d0()*-0.077419);
}

double NNfunction_nn_chi1_chi3::synapse0x32935f0() {
   return (neuron0x328a710()*-0.114073);
}

double NNfunction_nn_chi1_chi3::synapse0x3293630() {
   return (neuron0x328aa50()*0.040194);
}

double NNfunction_nn_chi1_chi3::synapse0x3293670() {
   return (neuron0x328ad90()*4.75702);
}

double NNfunction_nn_chi1_chi3::synapse0x32936b0() {
   return (neuron0x328b0d0()*-0.0381925);
}

double NNfunction_nn_chi1_chi3::synapse0x3293030() {
   return (neuron0x328b410()*-0.0821351);
}

double NNfunction_nn_chi1_chi3::synapse0x3293070() {
   return (neuron0x328b970()*-0.0863494);
}

double NNfunction_nn_chi1_chi3::synapse0x3293800() {
   return (neuron0x328bcb0()*0.0388563);
}

double NNfunction_nn_chi1_chi3::synapse0x3293840() {
   return (neuron0x328bff0()*-0.0301438);
}

double NNfunction_nn_chi1_chi3::synapse0x3293880() {
   return (neuron0x328c330()*0.0193717);
}

double NNfunction_nn_chi1_chi3::synapse0x32938c0() {
   return (neuron0x328c670()*-0.0779081);
}

double NNfunction_nn_chi1_chi3::synapse0x3293900() {
   return (neuron0x328c9b0()*0.0469153);
}

double NNfunction_nn_chi1_chi3::synapse0x3293940() {
   return (neuron0x328ccf0()*0.00189081);
}

double NNfunction_nn_chi1_chi3::synapse0x3293cc0() {
   return (neuron0x32880a0()*0.0044868);
}

double NNfunction_nn_chi1_chi3::synapse0x3293d00() {
   return (neuron0x3288350()*-0.00323388);
}

double NNfunction_nn_chi1_chi3::synapse0x3293d40() {
   return (neuron0x3288690()*-1.79674);
}

double NNfunction_nn_chi1_chi3::synapse0x3293d80() {
   return (neuron0x32889d0()*-0.0130798);
}

double NNfunction_nn_chi1_chi3::synapse0x3293dc0() {
   return (neuron0x3288d10()*0.000674757);
}

double NNfunction_nn_chi1_chi3::synapse0x3293e00() {
   return (neuron0x3289050()*-0.0192096);
}

double NNfunction_nn_chi1_chi3::synapse0x3293e40() {
   return (neuron0x3289390()*-0.0135441);
}

double NNfunction_nn_chi1_chi3::synapse0x3293e80() {
   return (neuron0x32896d0()*-0.0134126);
}

double NNfunction_nn_chi1_chi3::synapse0x3293ec0() {
   return (neuron0x3289a10()*0.00956308);
}

double NNfunction_nn_chi1_chi3::synapse0x3293f00() {
   return (neuron0x3289d50()*0.0438673);
}

double NNfunction_nn_chi1_chi3::synapse0x3293f40() {
   return (neuron0x328a090()*-0.00621978);
}

double NNfunction_nn_chi1_chi3::synapse0x3293f80() {
   return (neuron0x328a3d0()*2.7561);
}

double NNfunction_nn_chi1_chi3::synapse0x3293fc0() {
   return (neuron0x328a710()*-0.1219);
}

double NNfunction_nn_chi1_chi3::synapse0x3294000() {
   return (neuron0x328aa50()*-0.0423007);
}

double NNfunction_nn_chi1_chi3::synapse0x3294040() {
   return (neuron0x328ad90()*-0.0144839);
}

double NNfunction_nn_chi1_chi3::synapse0x3294080() {
   return (neuron0x328b0d0()*0.00678583);
}

double NNfunction_nn_chi1_chi3::synapse0x3293b10() {
   return (neuron0x328b410()*0.0115119);
}

double NNfunction_nn_chi1_chi3::synapse0x3293b50() {
   return (neuron0x328b970()*0.00247346);
}

double NNfunction_nn_chi1_chi3::synapse0x32941d0() {
   return (neuron0x328bcb0()*-0.0103927);
}

double NNfunction_nn_chi1_chi3::synapse0x3294210() {
   return (neuron0x328bff0()*-0.00446594);
}

double NNfunction_nn_chi1_chi3::synapse0x3294250() {
   return (neuron0x328c330()*-0.0256986);
}

double NNfunction_nn_chi1_chi3::synapse0x3294290() {
   return (neuron0x328c670()*0.0107241);
}

double NNfunction_nn_chi1_chi3::synapse0x32942d0() {
   return (neuron0x328c9b0()*-0.0241599);
}

double NNfunction_nn_chi1_chi3::synapse0x3294310() {
   return (neuron0x328ccf0()*0.257802);
}

double NNfunction_nn_chi1_chi3::synapse0x3294690() {
   return (neuron0x32880a0()*-0.0526409);
}

double NNfunction_nn_chi1_chi3::synapse0x32946d0() {
   return (neuron0x3288350()*0.00785271);
}

double NNfunction_nn_chi1_chi3::synapse0x3294710() {
   return (neuron0x3288690()*4.46953);
}

double NNfunction_nn_chi1_chi3::synapse0x3294750() {
   return (neuron0x32889d0()*-0.0352747);
}

double NNfunction_nn_chi1_chi3::synapse0x3294790() {
   return (neuron0x3288d10()*0.0464074);
}

double NNfunction_nn_chi1_chi3::synapse0x32947d0() {
   return (neuron0x3289050()*-0.00257572);
}

double NNfunction_nn_chi1_chi3::synapse0x3294810() {
   return (neuron0x3289390()*0.0410191);
}

double NNfunction_nn_chi1_chi3::synapse0x3294850() {
   return (neuron0x32896d0()*-0.0193523);
}

double NNfunction_nn_chi1_chi3::synapse0x3294890() {
   return (neuron0x3289a10()*-0.0555181);
}

double NNfunction_nn_chi1_chi3::synapse0x32948d0() {
   return (neuron0x3289d50()*-0.0013515);
}

double NNfunction_nn_chi1_chi3::synapse0x3294910() {
   return (neuron0x328a090()*0.0702314);
}

double NNfunction_nn_chi1_chi3::synapse0x3294950() {
   return (neuron0x328a3d0()*-0.28044);
}

double NNfunction_nn_chi1_chi3::synapse0x3294990() {
   return (neuron0x328a710()*-0.0641209);
}

double NNfunction_nn_chi1_chi3::synapse0x32949d0() {
   return (neuron0x328aa50()*0.0371195);
}

double NNfunction_nn_chi1_chi3::synapse0x3294a10() {
   return (neuron0x328ad90()*-0.154209);
}

double NNfunction_nn_chi1_chi3::synapse0x3294a50() {
   return (neuron0x328b0d0()*-0.0256341);
}

double NNfunction_nn_chi1_chi3::synapse0x32944e0() {
   return (neuron0x328b410()*-0.0345842);
}

double NNfunction_nn_chi1_chi3::synapse0x3294520() {
   return (neuron0x328b970()*0.00368695);
}

double NNfunction_nn_chi1_chi3::synapse0x32912b0() {
   return (neuron0x328bcb0()*-0.0481837);
}

double NNfunction_nn_chi1_chi3::synapse0x32912f0() {
   return (neuron0x328bff0()*-0.0341374);
}

double NNfunction_nn_chi1_chi3::synapse0x3291330() {
   return (neuron0x328c330()*0.0709318);
}

double NNfunction_nn_chi1_chi3::synapse0x3291370() {
   return (neuron0x328c670()*-0.00907736);
}

double NNfunction_nn_chi1_chi3::synapse0x32913b0() {
   return (neuron0x328c9b0()*-0.0238951);
}

double NNfunction_nn_chi1_chi3::synapse0x32913f0() {
   return (neuron0x328ccf0()*-2.1823);
}

double NNfunction_nn_chi1_chi3::synapse0x3291770() {
   return (neuron0x32880a0()*0.236693);
}

double NNfunction_nn_chi1_chi3::synapse0x32917b0() {
   return (neuron0x3288350()*-0.0149315);
}

double NNfunction_nn_chi1_chi3::synapse0x32917f0() {
   return (neuron0x3288690()*-8.90624);
}

double NNfunction_nn_chi1_chi3::synapse0x3291830() {
   return (neuron0x32889d0()*0.0556446);
}

double NNfunction_nn_chi1_chi3::synapse0x3291870() {
   return (neuron0x3288d10()*0.0659225);
}

double NNfunction_nn_chi1_chi3::synapse0x32918b0() {
   return (neuron0x3289050()*-0.1206);
}

double NNfunction_nn_chi1_chi3::synapse0x32918f0() {
   return (neuron0x3289390()*0.0274542);
}

double NNfunction_nn_chi1_chi3::synapse0x3291930() {
   return (neuron0x32896d0()*-0.0275503);
}

double NNfunction_nn_chi1_chi3::synapse0x3291970() {
   return (neuron0x3289a10()*-0.052199);
}

double NNfunction_nn_chi1_chi3::synapse0x32919b0() {
   return (neuron0x3289d50()*0.00706363);
}

double NNfunction_nn_chi1_chi3::synapse0x32919f0() {
   return (neuron0x328a090()*0.0622562);
}

double NNfunction_nn_chi1_chi3::synapse0x3291a30() {
   return (neuron0x328a3d0()*-0.428845);
}

double NNfunction_nn_chi1_chi3::synapse0x3291a70() {
   return (neuron0x328a710()*-0.0862379);
}

double NNfunction_nn_chi1_chi3::synapse0x3295bb0() {
   return (neuron0x328aa50()*-0.0277808);
}

double NNfunction_nn_chi1_chi3::synapse0x3295bf0() {
   return (neuron0x328ad90()*-0.0987051);
}

double NNfunction_nn_chi1_chi3::synapse0x3295c30() {
   return (neuron0x328b0d0()*-0.0121079);
}

double NNfunction_nn_chi1_chi3::synapse0x32915c0() {
   return (neuron0x328b410()*-0.156281);
}

double NNfunction_nn_chi1_chi3::synapse0x3291600() {
   return (neuron0x328b970()*0.00522422);
}

double NNfunction_nn_chi1_chi3::synapse0x3295d80() {
   return (neuron0x328bcb0()*-0.0678302);
}

double NNfunction_nn_chi1_chi3::synapse0x3295dc0() {
   return (neuron0x328bff0()*-0.108192);
}

double NNfunction_nn_chi1_chi3::synapse0x3295e00() {
   return (neuron0x328c330()*0.0708692);
}

double NNfunction_nn_chi1_chi3::synapse0x3295e40() {
   return (neuron0x328c670()*-0.0204818);
}

double NNfunction_nn_chi1_chi3::synapse0x3295e80() {
   return (neuron0x328c9b0()*-0.0464214);
}

double NNfunction_nn_chi1_chi3::synapse0x3295ec0() {
   return (neuron0x328ccf0()*-11.8851);
}

double NNfunction_nn_chi1_chi3::synapse0x3296240() {
   return (neuron0x32880a0()*0.0120978);
}

double NNfunction_nn_chi1_chi3::synapse0x3296280() {
   return (neuron0x3288350()*-0.0162679);
}

double NNfunction_nn_chi1_chi3::synapse0x32962c0() {
   return (neuron0x3288690()*0.111842);
}

double NNfunction_nn_chi1_chi3::synapse0x3296300() {
   return (neuron0x32889d0()*-0.00955198);
}

double NNfunction_nn_chi1_chi3::synapse0x3296340() {
   return (neuron0x3288d10()*-0.00678386);
}

double NNfunction_nn_chi1_chi3::synapse0x3296380() {
   return (neuron0x3289050()*0.0201886);
}

double NNfunction_nn_chi1_chi3::synapse0x32963c0() {
   return (neuron0x3289390()*-0.0551177);
}

double NNfunction_nn_chi1_chi3::synapse0x3296400() {
   return (neuron0x32896d0()*0.0460922);
}

double NNfunction_nn_chi1_chi3::synapse0x3296440() {
   return (neuron0x3289a10()*-0.00567945);
}

double NNfunction_nn_chi1_chi3::synapse0x3296480() {
   return (neuron0x3289d50()*0.00516243);
}

double NNfunction_nn_chi1_chi3::synapse0x32964c0() {
   return (neuron0x328a090()*-0.0201025);
}

double NNfunction_nn_chi1_chi3::synapse0x3296500() {
   return (neuron0x328a3d0()*-0.0921169);
}

double NNfunction_nn_chi1_chi3::synapse0x3296540() {
   return (neuron0x328a710()*-0.0204622);
}

double NNfunction_nn_chi1_chi3::synapse0x3296580() {
   return (neuron0x328aa50()*-0.0262567);
}

double NNfunction_nn_chi1_chi3::synapse0x32965c0() {
   return (neuron0x328ad90()*-0.0140851);
}

double NNfunction_nn_chi1_chi3::synapse0x3296600() {
   return (neuron0x328b0d0()*-0.0134122);
}

double NNfunction_nn_chi1_chi3::synapse0x3296090() {
   return (neuron0x328b410()*0.015066);
}

double NNfunction_nn_chi1_chi3::synapse0x32960d0() {
   return (neuron0x328b970()*-0.0366384);
}

double NNfunction_nn_chi1_chi3::synapse0x3296750() {
   return (neuron0x328bcb0()*0.0194241);
}

double NNfunction_nn_chi1_chi3::synapse0x3296790() {
   return (neuron0x328bff0()*0.00339459);
}

double NNfunction_nn_chi1_chi3::synapse0x32967d0() {
   return (neuron0x328c330()*0.00142376);
}

double NNfunction_nn_chi1_chi3::synapse0x3296810() {
   return (neuron0x328c670()*0.00916553);
}

double NNfunction_nn_chi1_chi3::synapse0x3296850() {
   return (neuron0x328c9b0()*-0.0311743);
}

double NNfunction_nn_chi1_chi3::synapse0x3296890() {
   return (neuron0x328ccf0()*7.99712);
}

double NNfunction_nn_chi1_chi3::synapse0x3296c10() {
   return (neuron0x32880a0()*-0.943756);
}

double NNfunction_nn_chi1_chi3::synapse0x3296c50() {
   return (neuron0x3288350()*-0.836081);
}

double NNfunction_nn_chi1_chi3::synapse0x3296c90() {
   return (neuron0x3288690()*0.0498641);
}

double NNfunction_nn_chi1_chi3::synapse0x3296cd0() {
   return (neuron0x32889d0()*0.231809);
}

double NNfunction_nn_chi1_chi3::synapse0x3296d10() {
   return (neuron0x3288d10()*-0.629702);
}

double NNfunction_nn_chi1_chi3::synapse0x3296d50() {
   return (neuron0x3289050()*1.08978);
}

double NNfunction_nn_chi1_chi3::synapse0x3296d90() {
   return (neuron0x3289390()*0.444789);
}

double NNfunction_nn_chi1_chi3::synapse0x3296dd0() {
   return (neuron0x32896d0()*-2.17767);
}

double NNfunction_nn_chi1_chi3::synapse0x3296e10() {
   return (neuron0x3289a10()*-0.583809);
}

double NNfunction_nn_chi1_chi3::synapse0x3296e50() {
   return (neuron0x3289d50()*0.19481);
}

double NNfunction_nn_chi1_chi3::synapse0x3296e90() {
   return (neuron0x328a090()*1.0864);
}

double NNfunction_nn_chi1_chi3::synapse0x3296ed0() {
   return (neuron0x328a3d0()*1.39943);
}

double NNfunction_nn_chi1_chi3::synapse0x3296f10() {
   return (neuron0x328a710()*-1.45159);
}

double NNfunction_nn_chi1_chi3::synapse0x3296f50() {
   return (neuron0x328aa50()*0.871898);
}

double NNfunction_nn_chi1_chi3::synapse0x3296f90() {
   return (neuron0x328ad90()*0.341556);
}

double NNfunction_nn_chi1_chi3::synapse0x3296fd0() {
   return (neuron0x328b0d0()*0.728718);
}

double NNfunction_nn_chi1_chi3::synapse0x3296a60() {
   return (neuron0x328b410()*0.658522);
}

double NNfunction_nn_chi1_chi3::synapse0x3296aa0() {
   return (neuron0x328b970()*0.477223);
}

double NNfunction_nn_chi1_chi3::synapse0x3297120() {
   return (neuron0x328bcb0()*1.08489);
}

double NNfunction_nn_chi1_chi3::synapse0x3297160() {
   return (neuron0x328bff0()*-0.974135);
}

double NNfunction_nn_chi1_chi3::synapse0x32971a0() {
   return (neuron0x328c330()*-0.693441);
}

double NNfunction_nn_chi1_chi3::synapse0x32971e0() {
   return (neuron0x328c670()*-0.784916);
}

double NNfunction_nn_chi1_chi3::synapse0x3297220() {
   return (neuron0x328c9b0()*0.627624);
}

double NNfunction_nn_chi1_chi3::synapse0x3297260() {
   return (neuron0x328ccf0()*1.25216);
}

double NNfunction_nn_chi1_chi3::synapse0x32975e0() {
   return (neuron0x32880a0()*4.51286);
}

double NNfunction_nn_chi1_chi3::synapse0x3297620() {
   return (neuron0x3288350()*-0.00273671);
}

double NNfunction_nn_chi1_chi3::synapse0x3297660() {
   return (neuron0x3288690()*2.87511);
}

double NNfunction_nn_chi1_chi3::synapse0x32976a0() {
   return (neuron0x32889d0()*-0.0891055);
}

double NNfunction_nn_chi1_chi3::synapse0x32976e0() {
   return (neuron0x3288d10()*0.0817453);
}

double NNfunction_nn_chi1_chi3::synapse0x3297720() {
   return (neuron0x3289050()*0.0592595);
}

double NNfunction_nn_chi1_chi3::synapse0x3297760() {
   return (neuron0x3289390()*0.0111696);
}

double NNfunction_nn_chi1_chi3::synapse0x32977a0() {
   return (neuron0x32896d0()*-0.0602501);
}

double NNfunction_nn_chi1_chi3::synapse0x32977e0() {
   return (neuron0x3289a10()*0.0577311);
}

double NNfunction_nn_chi1_chi3::synapse0x3297820() {
   return (neuron0x3289d50()*0.0345823);
}

double NNfunction_nn_chi1_chi3::synapse0x3297860() {
   return (neuron0x328a090()*0.0165736);
}

double NNfunction_nn_chi1_chi3::synapse0x32978a0() {
   return (neuron0x328a3d0()*-0.232094);
}

double NNfunction_nn_chi1_chi3::synapse0x32978e0() {
   return (neuron0x328a710()*-0.0782381);
}

double NNfunction_nn_chi1_chi3::synapse0x3297920() {
   return (neuron0x328aa50()*-0.0719495);
}

double NNfunction_nn_chi1_chi3::synapse0x3297960() {
   return (neuron0x328ad90()*-0.0174867);
}

double NNfunction_nn_chi1_chi3::synapse0x32979a0() {
   return (neuron0x328b0d0()*0.082387);
}

double NNfunction_nn_chi1_chi3::synapse0x3297430() {
   return (neuron0x328b410()*0.0177963);
}

double NNfunction_nn_chi1_chi3::synapse0x3297470() {
   return (neuron0x328b970()*-0.00364131);
}

double NNfunction_nn_chi1_chi3::synapse0x3297af0() {
   return (neuron0x328bcb0()*0.0211395);
}

double NNfunction_nn_chi1_chi3::synapse0x3297b30() {
   return (neuron0x328bff0()*0.0399422);
}

double NNfunction_nn_chi1_chi3::synapse0x3297b70() {
   return (neuron0x328c330()*0.141542);
}

double NNfunction_nn_chi1_chi3::synapse0x3297bb0() {
   return (neuron0x328c670()*0.00921778);
}

double NNfunction_nn_chi1_chi3::synapse0x3297bf0() {
   return (neuron0x328c9b0()*0.0316987);
}

double NNfunction_nn_chi1_chi3::synapse0x3297c30() {
   return (neuron0x328ccf0()*0.145986);
}

double NNfunction_nn_chi1_chi3::synapse0x3297fb0() {
   return (neuron0x32880a0()*-0.00596728);
}

double NNfunction_nn_chi1_chi3::synapse0x3288230() {
   return (neuron0x3288350()*-0.00245358);
}

double NNfunction_nn_chi1_chi3::synapse0x3288270() {
   return (neuron0x3288690()*0.626679);
}

double NNfunction_nn_chi1_chi3::synapse0x3288570() {
   return (neuron0x32889d0()*-0.0164449);
}

double NNfunction_nn_chi1_chi3::synapse0x32885b0() {
   return (neuron0x3288d10()*0.00144383);
}

double NNfunction_nn_chi1_chi3::synapse0x32888b0() {
   return (neuron0x3289050()*0.0138977);
}

double NNfunction_nn_chi1_chi3::synapse0x32888f0() {
   return (neuron0x3289390()*-0.00227896);
}

double NNfunction_nn_chi1_chi3::synapse0x3288bf0() {
   return (neuron0x32896d0()*-0.010031);
}

double NNfunction_nn_chi1_chi3::synapse0x3288c30() {
   return (neuron0x3289a10()*0.00618034);
}

double NNfunction_nn_chi1_chi3::synapse0x3288f30() {
   return (neuron0x3289d50()*0.000638608);
}

double NNfunction_nn_chi1_chi3::synapse0x3288f70() {
   return (neuron0x328a090()*0.00322719);
}

double NNfunction_nn_chi1_chi3::synapse0x3289270() {
   return (neuron0x328a3d0()*0.149411);
}

double NNfunction_nn_chi1_chi3::synapse0x32892b0() {
   return (neuron0x328a710()*0.0351482);
}

double NNfunction_nn_chi1_chi3::synapse0x32895b0() {
   return (neuron0x328aa50()*0.0151776);
}

double NNfunction_nn_chi1_chi3::synapse0x32895f0() {
   return (neuron0x328ad90()*-0.0141198);
}

double NNfunction_nn_chi1_chi3::synapse0x32898f0() {
   return (neuron0x328b0d0()*0.00797314);
}

double NNfunction_nn_chi1_chi3::synapse0x3289930() {
   return (neuron0x328b410()*-0.00915211);
}

double NNfunction_nn_chi1_chi3::synapse0x3289c30() {
   return (neuron0x328b970()*0.000309713);
}

double NNfunction_nn_chi1_chi3::synapse0x3289c70() {
   return (neuron0x328bcb0()*0.0118665);
}

double NNfunction_nn_chi1_chi3::synapse0x3289f70() {
   return (neuron0x328bff0()*-0.00556508);
}

double NNfunction_nn_chi1_chi3::synapse0x3289fb0() {
   return (neuron0x328c330()*0.00569327);
}

double NNfunction_nn_chi1_chi3::synapse0x328a2b0() {
   return (neuron0x328c670()*-0.00312169);
}

double NNfunction_nn_chi1_chi3::synapse0x328a2f0() {
   return (neuron0x328c9b0()*-0.00319353);
}

double NNfunction_nn_chi1_chi3::synapse0x328a5f0() {
   return (neuron0x328ccf0()*0.590445);
}

double NNfunction_nn_chi1_chi3::synapse0x328a630() {
   return (neuron0x32880a0()*-0.00411728);
}

double NNfunction_nn_chi1_chi3::synapse0x328b2f0() {
   return (neuron0x3288350()*-0.00641693);
}

double NNfunction_nn_chi1_chi3::synapse0x328b330() {
   return (neuron0x3288690()*-0.0297405);
}

double NNfunction_nn_chi1_chi3::synapse0x3297e00() {
   return (neuron0x32889d0()*-0.00110989);
}

double NNfunction_nn_chi1_chi3::synapse0x3297e40() {
   return (neuron0x3288d10()*-0.0123536);
}

double NNfunction_nn_chi1_chi3::synapse0x328b630() {
   return (neuron0x3289050()*0.00366147);
}

double NNfunction_nn_chi1_chi3::synapse0x328b670() {
   return (neuron0x3289390()*0.00451001);
}

double NNfunction_nn_chi1_chi3::synapse0x328bb90() {
   return (neuron0x32896d0()*0.00232694);
}

double NNfunction_nn_chi1_chi3::synapse0x328bbd0() {
   return (neuron0x3289a10()*0.011257);
}

double NNfunction_nn_chi1_chi3::synapse0x328bed0() {
   return (neuron0x3289d50()*0.00302635);
}

double NNfunction_nn_chi1_chi3::synapse0x328bf10() {
   return (neuron0x328a090()*-0.00228496);
}

double NNfunction_nn_chi1_chi3::synapse0x328c210() {
   return (neuron0x328a3d0()*0.0489796);
}

double NNfunction_nn_chi1_chi3::synapse0x328c250() {
   return (neuron0x328a710()*-0.00551617);
}

double NNfunction_nn_chi1_chi3::synapse0x328c550() {
   return (neuron0x328aa50()*0.00325451);
}

double NNfunction_nn_chi1_chi3::synapse0x328c590() {
   return (neuron0x328ad90()*0.0406861);
}

double NNfunction_nn_chi1_chi3::synapse0x328c890() {
   return (neuron0x328b0d0()*-0.0167959);
}

double NNfunction_nn_chi1_chi3::synapse0x328c8d0() {
   return (neuron0x328b410()*0.00652171);
}

double NNfunction_nn_chi1_chi3::synapse0x328cbd0() {
   return (neuron0x328b970()*-0.00704714);
}

double NNfunction_nn_chi1_chi3::synapse0x328cc10() {
   return (neuron0x328bcb0()*-0.00543601);
}

double NNfunction_nn_chi1_chi3::synapse0x328cf10() {
   return (neuron0x328bff0()*0.0176214);
}

double NNfunction_nn_chi1_chi3::synapse0x328cf50() {
   return (neuron0x328c330()*-0.00439418);
}

double NNfunction_nn_chi1_chi3::synapse0x328a930() {
   return (neuron0x328c670()*0.00036109);
}

double NNfunction_nn_chi1_chi3::synapse0x328a970() {
   return (neuron0x328c9b0()*-0.0167156);
}

double NNfunction_nn_chi1_chi3::synapse0x3299d20() {
   return (neuron0x328ccf0()*5.10204);
}

double NNfunction_nn_chi1_chi3::synapse0x329a0a0() {
   return (neuron0x32880a0()*0.079745);
}

double NNfunction_nn_chi1_chi3::synapse0x329a0e0() {
   return (neuron0x3288350()*27.2545);
}

double NNfunction_nn_chi1_chi3::synapse0x329a120() {
   return (neuron0x3288690()*0.46838);
}

double NNfunction_nn_chi1_chi3::synapse0x329a160() {
   return (neuron0x32889d0()*0.0146916);
}

double NNfunction_nn_chi1_chi3::synapse0x329a1a0() {
   return (neuron0x3288d10()*0.0289493);
}

double NNfunction_nn_chi1_chi3::synapse0x329a1e0() {
   return (neuron0x3289050()*0.0244995);
}

double NNfunction_nn_chi1_chi3::synapse0x329a220() {
   return (neuron0x3289390()*-0.042892);
}

double NNfunction_nn_chi1_chi3::synapse0x329a260() {
   return (neuron0x32896d0()*0.0233593);
}

double NNfunction_nn_chi1_chi3::synapse0x329a2a0() {
   return (neuron0x3289a10()*-0.00525422);
}

double NNfunction_nn_chi1_chi3::synapse0x329a2e0() {
   return (neuron0x3289d50()*0.0268722);
}

double NNfunction_nn_chi1_chi3::synapse0x329a320() {
   return (neuron0x328a090()*-0.0236323);
}

double NNfunction_nn_chi1_chi3::synapse0x329a360() {
   return (neuron0x328a3d0()*-0.00978536);
}

double NNfunction_nn_chi1_chi3::synapse0x329a3a0() {
   return (neuron0x328a710()*-0.028203);
}

double NNfunction_nn_chi1_chi3::synapse0x329a3e0() {
   return (neuron0x328aa50()*0.0305471);
}

double NNfunction_nn_chi1_chi3::synapse0x329a420() {
   return (neuron0x328ad90()*0.0726192);
}

double NNfunction_nn_chi1_chi3::synapse0x329a460() {
   return (neuron0x328b0d0()*0.0108661);
}

double NNfunction_nn_chi1_chi3::synapse0x3299ef0() {
   return (neuron0x328b410()*0.0117965);
}

double NNfunction_nn_chi1_chi3::synapse0x3299f30() {
   return (neuron0x328b970()*0.00390801);
}

double NNfunction_nn_chi1_chi3::synapse0x329a5b0() {
   return (neuron0x328bcb0()*0.0120726);
}

double NNfunction_nn_chi1_chi3::synapse0x329a5f0() {
   return (neuron0x328bff0()*-0.00692441);
}

double NNfunction_nn_chi1_chi3::synapse0x329a630() {
   return (neuron0x328c330()*0.046992);
}

double NNfunction_nn_chi1_chi3::synapse0x329a670() {
   return (neuron0x328c670()*0.00686001);
}

double NNfunction_nn_chi1_chi3::synapse0x329a6b0() {
   return (neuron0x328c9b0()*-0.00373461);
}

double NNfunction_nn_chi1_chi3::synapse0x329a6f0() {
   return (neuron0x328ccf0()*1.4093);
}

double NNfunction_nn_chi1_chi3::synapse0x329aa70() {
   return (neuron0x32880a0()*-0.188333);
}

double NNfunction_nn_chi1_chi3::synapse0x329aab0() {
   return (neuron0x3288350()*0.372019);
}

double NNfunction_nn_chi1_chi3::synapse0x329aaf0() {
   return (neuron0x3288690()*-1.17406);
}

double NNfunction_nn_chi1_chi3::synapse0x329ab30() {
   return (neuron0x32889d0()*0.859061);
}

double NNfunction_nn_chi1_chi3::synapse0x329ab70() {
   return (neuron0x3288d10()*0.126607);
}

double NNfunction_nn_chi1_chi3::synapse0x329abb0() {
   return (neuron0x3289050()*0.15368);
}

double NNfunction_nn_chi1_chi3::synapse0x329abf0() {
   return (neuron0x3289390()*0.652198);
}

double NNfunction_nn_chi1_chi3::synapse0x329ac30() {
   return (neuron0x32896d0()*-1.44388);
}

double NNfunction_nn_chi1_chi3::synapse0x329ac70() {
   return (neuron0x3289a10()*-0.395921);
}

double NNfunction_nn_chi1_chi3::synapse0x329acb0() {
   return (neuron0x3289d50()*0.785361);
}

double NNfunction_nn_chi1_chi3::synapse0x329acf0() {
   return (neuron0x328a090()*0.431851);
}

double NNfunction_nn_chi1_chi3::synapse0x329ad30() {
   return (neuron0x328a3d0()*0.0213895);
}

double NNfunction_nn_chi1_chi3::synapse0x329ad70() {
   return (neuron0x328a710()*-0.135564);
}

double NNfunction_nn_chi1_chi3::synapse0x329adb0() {
   return (neuron0x328aa50()*0.319779);
}

double NNfunction_nn_chi1_chi3::synapse0x329adf0() {
   return (neuron0x328ad90()*1.84274);
}

double NNfunction_nn_chi1_chi3::synapse0x329ae30() {
   return (neuron0x328b0d0()*-0.130502);
}

double NNfunction_nn_chi1_chi3::synapse0x329a8c0() {
   return (neuron0x328b410()*-0.470935);
}

double NNfunction_nn_chi1_chi3::synapse0x329a900() {
   return (neuron0x328b970()*-0.0453883);
}

double NNfunction_nn_chi1_chi3::synapse0x329af80() {
   return (neuron0x328bcb0()*-0.48561);
}

double NNfunction_nn_chi1_chi3::synapse0x329afc0() {
   return (neuron0x328bff0()*-0.976251);
}

double NNfunction_nn_chi1_chi3::synapse0x329b000() {
   return (neuron0x328c330()*0.0349423);
}

double NNfunction_nn_chi1_chi3::synapse0x329b040() {
   return (neuron0x328c670()*0.510118);
}

double NNfunction_nn_chi1_chi3::synapse0x329b080() {
   return (neuron0x328c9b0()*1.0667);
}

double NNfunction_nn_chi1_chi3::synapse0x329b0c0() {
   return (neuron0x328ccf0()*-0.51461);
}

double NNfunction_nn_chi1_chi3::synapse0x329b440() {
   return (neuron0x32880a0()*-0.0348872);
}

double NNfunction_nn_chi1_chi3::synapse0x329b480() {
   return (neuron0x3288350()*-0.023416);
}

double NNfunction_nn_chi1_chi3::synapse0x329b4c0() {
   return (neuron0x3288690()*13.3653);
}

double NNfunction_nn_chi1_chi3::synapse0x329b500() {
   return (neuron0x32889d0()*0.0876689);
}

double NNfunction_nn_chi1_chi3::synapse0x329b540() {
   return (neuron0x3288d10()*-0.00776243);
}

double NNfunction_nn_chi1_chi3::synapse0x329b580() {
   return (neuron0x3289050()*-0.0281062);
}

double NNfunction_nn_chi1_chi3::synapse0x329b5c0() {
   return (neuron0x3289390()*0.0212905);
}

double NNfunction_nn_chi1_chi3::synapse0x329b600() {
   return (neuron0x32896d0()*0.0357806);
}

double NNfunction_nn_chi1_chi3::synapse0x329b640() {
   return (neuron0x3289a10()*0.0191899);
}

double NNfunction_nn_chi1_chi3::synapse0x329b680() {
   return (neuron0x3289d50()*-0.049711);
}

double NNfunction_nn_chi1_chi3::synapse0x329b6c0() {
   return (neuron0x328a090()*-0.0403787);
}

double NNfunction_nn_chi1_chi3::synapse0x329b700() {
   return (neuron0x328a3d0()*-0.340753);
}

double NNfunction_nn_chi1_chi3::synapse0x329b740() {
   return (neuron0x328a710()*0.022186);
}

double NNfunction_nn_chi1_chi3::synapse0x329b780() {
   return (neuron0x328aa50()*0.0124309);
}

double NNfunction_nn_chi1_chi3::synapse0x329b7c0() {
   return (neuron0x328ad90()*0.0753198);
}

double NNfunction_nn_chi1_chi3::synapse0x329b800() {
   return (neuron0x328b0d0()*-0.0142185);
}

double NNfunction_nn_chi1_chi3::synapse0x329b290() {
   return (neuron0x328b410()*0.0224026);
}

double NNfunction_nn_chi1_chi3::synapse0x329b2d0() {
   return (neuron0x328b970()*-0.0098381);
}

double NNfunction_nn_chi1_chi3::synapse0x329b950() {
   return (neuron0x328bcb0()*0.0341871);
}

double NNfunction_nn_chi1_chi3::synapse0x329b990() {
   return (neuron0x328bff0()*-0.0252024);
}

double NNfunction_nn_chi1_chi3::synapse0x329b9d0() {
   return (neuron0x328c330()*-0.00116408);
}

double NNfunction_nn_chi1_chi3::synapse0x329ba10() {
   return (neuron0x328c670()*-0.0236871);
}

double NNfunction_nn_chi1_chi3::synapse0x329ba50() {
   return (neuron0x328c9b0()*0.0314929);
}

double NNfunction_nn_chi1_chi3::synapse0x329ba90() {
   return (neuron0x328ccf0()*-0.281837);
}

double NNfunction_nn_chi1_chi3::synapse0x329be10() {
   return (neuron0x32880a0()*-0.0475268);
}

double NNfunction_nn_chi1_chi3::synapse0x329be50() {
   return (neuron0x3288350()*11.99);
}

double NNfunction_nn_chi1_chi3::synapse0x329be90() {
   return (neuron0x3288690()*4.41499);
}

double NNfunction_nn_chi1_chi3::synapse0x329bed0() {
   return (neuron0x32889d0()*-0.0105571);
}

double NNfunction_nn_chi1_chi3::synapse0x329bf10() {
   return (neuron0x3288d10()*-0.052075);
}

double NNfunction_nn_chi1_chi3::synapse0x329bf50() {
   return (neuron0x3289050()*0.00978721);
}

double NNfunction_nn_chi1_chi3::synapse0x329bf90() {
   return (neuron0x3289390()*0.0676695);
}

double NNfunction_nn_chi1_chi3::synapse0x329bfd0() {
   return (neuron0x32896d0()*0.0260731);
}

double NNfunction_nn_chi1_chi3::synapse0x329c010() {
   return (neuron0x3289a10()*0.00627688);
}

double NNfunction_nn_chi1_chi3::synapse0x329c050() {
   return (neuron0x3289d50()*-0.0434239);
}

double NNfunction_nn_chi1_chi3::synapse0x329c090() {
   return (neuron0x328a090()*0.0128134);
}

double NNfunction_nn_chi1_chi3::synapse0x329c0d0() {
   return (neuron0x328a3d0()*-0.0810066);
}

double NNfunction_nn_chi1_chi3::synapse0x329c110() {
   return (neuron0x328a710()*-0.103704);
}

double NNfunction_nn_chi1_chi3::synapse0x329c150() {
   return (neuron0x328aa50()*-0.0143081);
}

double NNfunction_nn_chi1_chi3::synapse0x329c190() {
   return (neuron0x328ad90()*-0.00963046);
}

double NNfunction_nn_chi1_chi3::synapse0x329c1d0() {
   return (neuron0x328b0d0()*-0.0550737);
}

double NNfunction_nn_chi1_chi3::synapse0x329bc60() {
   return (neuron0x328b410()*-0.0978086);
}

double NNfunction_nn_chi1_chi3::synapse0x329bca0() {
   return (neuron0x328b970()*-0.0155692);
}

double NNfunction_nn_chi1_chi3::synapse0x329c320() {
   return (neuron0x328bcb0()*0.017317);
}

double NNfunction_nn_chi1_chi3::synapse0x329c360() {
   return (neuron0x328bff0()*0.0210396);
}

double NNfunction_nn_chi1_chi3::synapse0x329c3a0() {
   return (neuron0x328c330()*0.0212383);
}

double NNfunction_nn_chi1_chi3::synapse0x329c3e0() {
   return (neuron0x328c670()*0.0228034);
}

double NNfunction_nn_chi1_chi3::synapse0x329c420() {
   return (neuron0x328c9b0()*0.017729);
}

double NNfunction_nn_chi1_chi3::synapse0x329c460() {
   return (neuron0x328ccf0()*-5.86093);
}

double NNfunction_nn_chi1_chi3::synapse0x329c7e0() {
   return (neuron0x32880a0()*-0.187817);
}

double NNfunction_nn_chi1_chi3::synapse0x329c820() {
   return (neuron0x3288350()*0.0344969);
}

double NNfunction_nn_chi1_chi3::synapse0x329c860() {
   return (neuron0x3288690()*5.23986);
}

double NNfunction_nn_chi1_chi3::synapse0x329c8a0() {
   return (neuron0x32889d0()*-0.0474722);
}

double NNfunction_nn_chi1_chi3::synapse0x329c8e0() {
   return (neuron0x3288d10()*0.0123438);
}

double NNfunction_nn_chi1_chi3::synapse0x329c920() {
   return (neuron0x3289050()*-0.0122279);
}

double NNfunction_nn_chi1_chi3::synapse0x329c960() {
   return (neuron0x3289390()*0.0363447);
}

double NNfunction_nn_chi1_chi3::synapse0x329c9a0() {
   return (neuron0x32896d0()*0.00291124);
}

double NNfunction_nn_chi1_chi3::synapse0x329c9e0() {
   return (neuron0x3289a10()*-0.0453971);
}

double NNfunction_nn_chi1_chi3::synapse0x3294ba0() {
   return (neuron0x3289d50()*-0.0563362);
}

double NNfunction_nn_chi1_chi3::synapse0x3294be0() {
   return (neuron0x328a090()*-0.00316116);
}

double NNfunction_nn_chi1_chi3::synapse0x3294c20() {
   return (neuron0x328a3d0()*-0.186578);
}

double NNfunction_nn_chi1_chi3::synapse0x3294c60() {
   return (neuron0x328a710()*0.0364091);
}

double NNfunction_nn_chi1_chi3::synapse0x3294ca0() {
   return (neuron0x328aa50()*0.0120569);
}

double NNfunction_nn_chi1_chi3::synapse0x3294ce0() {
   return (neuron0x328ad90()*-0.151674);
}

double NNfunction_nn_chi1_chi3::synapse0x3294d20() {
   return (neuron0x328b0d0()*-0.0436226);
}

double NNfunction_nn_chi1_chi3::synapse0x329c630() {
   return (neuron0x328b410()*-0.0306699);
}

double NNfunction_nn_chi1_chi3::synapse0x329c670() {
   return (neuron0x328b970()*-0.00425942);
}

double NNfunction_nn_chi1_chi3::synapse0x3294e70() {
   return (neuron0x328bcb0()*-0.0147589);
}

double NNfunction_nn_chi1_chi3::synapse0x3294eb0() {
   return (neuron0x328bff0()*-0.0118168);
}

double NNfunction_nn_chi1_chi3::synapse0x3294ef0() {
   return (neuron0x328c330()*-0.0145074);
}

double NNfunction_nn_chi1_chi3::synapse0x3294f30() {
   return (neuron0x328c670()*0.067301);
}

double NNfunction_nn_chi1_chi3::synapse0x3294f70() {
   return (neuron0x328c9b0()*-0.0170483);
}

double NNfunction_nn_chi1_chi3::synapse0x3294fb0() {
   return (neuron0x328ccf0()*3.36778);
}

double NNfunction_nn_chi1_chi3::synapse0x3295330() {
   return (neuron0x32880a0()*0.26915);
}

double NNfunction_nn_chi1_chi3::synapse0x3295370() {
   return (neuron0x3288350()*-1.29261);
}

double NNfunction_nn_chi1_chi3::synapse0x32953b0() {
   return (neuron0x3288690()*-2.41776);
}

double NNfunction_nn_chi1_chi3::synapse0x32953f0() {
   return (neuron0x32889d0()*-0.534586);
}

double NNfunction_nn_chi1_chi3::synapse0x3295430() {
   return (neuron0x3288d10()*0.739383);
}

double NNfunction_nn_chi1_chi3::synapse0x3295470() {
   return (neuron0x3289050()*-0.805245);
}

double NNfunction_nn_chi1_chi3::synapse0x32954b0() {
   return (neuron0x3289390()*-0.031111);
}

double NNfunction_nn_chi1_chi3::synapse0x32954f0() {
   return (neuron0x32896d0()*0.572188);
}

double NNfunction_nn_chi1_chi3::synapse0x3295530() {
   return (neuron0x3289a10()*-0.564897);
}

double NNfunction_nn_chi1_chi3::synapse0x3295570() {
   return (neuron0x3289d50()*-0.142697);
}

double NNfunction_nn_chi1_chi3::synapse0x32955b0() {
   return (neuron0x328a090()*-0.450233);
}

double NNfunction_nn_chi1_chi3::synapse0x32955f0() {
   return (neuron0x328a3d0()*-0.185389);
}

double NNfunction_nn_chi1_chi3::synapse0x3295630() {
   return (neuron0x328a710()*-0.202804);
}

double NNfunction_nn_chi1_chi3::synapse0x3295670() {
   return (neuron0x328aa50()*1.26519);
}

double NNfunction_nn_chi1_chi3::synapse0x32956b0() {
   return (neuron0x328ad90()*-0.0105186);
}

double NNfunction_nn_chi1_chi3::synapse0x32956f0() {
   return (neuron0x328b0d0()*0.460141);
}

double NNfunction_nn_chi1_chi3::synapse0x3295180() {
   return (neuron0x328b410()*-1.66177);
}

double NNfunction_nn_chi1_chi3::synapse0x32951c0() {
   return (neuron0x328b970()*-0.806806);
}

double NNfunction_nn_chi1_chi3::synapse0x3295840() {
   return (neuron0x328bcb0()*-0.018034);
}

double NNfunction_nn_chi1_chi3::synapse0x3295880() {
   return (neuron0x328bff0()*0.11057);
}

double NNfunction_nn_chi1_chi3::synapse0x32958c0() {
   return (neuron0x328c330()*0.94191);
}

double NNfunction_nn_chi1_chi3::synapse0x3295900() {
   return (neuron0x328c670()*-0.0886439);
}

double NNfunction_nn_chi1_chi3::synapse0x3295940() {
   return (neuron0x328c9b0()*-1.04625);
}

double NNfunction_nn_chi1_chi3::synapse0x3295980() {
   return (neuron0x328ccf0()*0.36531);
}

double NNfunction_nn_chi1_chi3::synapse0x3295b50() {
   return (neuron0x32880a0()*-0.679624);
}

double NNfunction_nn_chi1_chi3::synapse0x329ebe0() {
   return (neuron0x3288350()*-1.2822);
}

double NNfunction_nn_chi1_chi3::synapse0x329ec20() {
   return (neuron0x3288690()*2.47816);
}

double NNfunction_nn_chi1_chi3::synapse0x329ec60() {
   return (neuron0x32889d0()*-0.510989);
}

double NNfunction_nn_chi1_chi3::synapse0x329eca0() {
   return (neuron0x3288d10()*0.0639673);
}

double NNfunction_nn_chi1_chi3::synapse0x329ece0() {
   return (neuron0x3289050()*-0.400248);
}

double NNfunction_nn_chi1_chi3::synapse0x329ed20() {
   return (neuron0x3289390()*0.339016);
}

double NNfunction_nn_chi1_chi3::synapse0x329ed60() {
   return (neuron0x32896d0()*0.309888);
}

double NNfunction_nn_chi1_chi3::synapse0x329eda0() {
   return (neuron0x3289a10()*0.0287581);
}

double NNfunction_nn_chi1_chi3::synapse0x329ede0() {
   return (neuron0x3289d50()*0.892193);
}

double NNfunction_nn_chi1_chi3::synapse0x329ee20() {
   return (neuron0x328a090()*0.530722);
}

double NNfunction_nn_chi1_chi3::synapse0x329ee60() {
   return (neuron0x328a3d0()*0.334543);
}

double NNfunction_nn_chi1_chi3::synapse0x329eea0() {
   return (neuron0x328a710()*0.326703);
}

double NNfunction_nn_chi1_chi3::synapse0x329eee0() {
   return (neuron0x328aa50()*0.296747);
}

double NNfunction_nn_chi1_chi3::synapse0x329ef20() {
   return (neuron0x328ad90()*-0.128073);
}

double NNfunction_nn_chi1_chi3::synapse0x329ef60() {
   return (neuron0x328b0d0()*0.14766);
}

double NNfunction_nn_chi1_chi3::synapse0x329ea30() {
   return (neuron0x328b410()*-0.195521);
}

double NNfunction_nn_chi1_chi3::synapse0x329ea70() {
   return (neuron0x328b970()*-1.02824);
}

double NNfunction_nn_chi1_chi3::synapse0x329f0b0() {
   return (neuron0x328bcb0()*-0.480753);
}

double NNfunction_nn_chi1_chi3::synapse0x329f0f0() {
   return (neuron0x328bff0()*0.278212);
}

double NNfunction_nn_chi1_chi3::synapse0x329f130() {
   return (neuron0x328c330()*0.750837);
}

double NNfunction_nn_chi1_chi3::synapse0x329f170() {
   return (neuron0x328c670()*-0.143011);
}

double NNfunction_nn_chi1_chi3::synapse0x329f1b0() {
   return (neuron0x328c9b0()*0.191657);
}

double NNfunction_nn_chi1_chi3::synapse0x329f1f0() {
   return (neuron0x328ccf0()*-2.00903);
}

double NNfunction_nn_chi1_chi3::synapse0x329f570() {
   return (neuron0x32880a0()*-0.470379);
}

double NNfunction_nn_chi1_chi3::synapse0x329f5b0() {
   return (neuron0x3288350()*-0.340821);
}

double NNfunction_nn_chi1_chi3::synapse0x329f5f0() {
   return (neuron0x3288690()*1.50707);
}

double NNfunction_nn_chi1_chi3::synapse0x329f630() {
   return (neuron0x32889d0()*-0.157465);
}

double NNfunction_nn_chi1_chi3::synapse0x329f670() {
   return (neuron0x3288d10()*0.742049);
}

double NNfunction_nn_chi1_chi3::synapse0x329f6b0() {
   return (neuron0x3289050()*1.10504);
}

double NNfunction_nn_chi1_chi3::synapse0x329f6f0() {
   return (neuron0x3289390()*-0.15146);
}

double NNfunction_nn_chi1_chi3::synapse0x329f730() {
   return (neuron0x32896d0()*-0.464315);
}

double NNfunction_nn_chi1_chi3::synapse0x329f770() {
   return (neuron0x3289a10()*-0.481382);
}

double NNfunction_nn_chi1_chi3::synapse0x329f7b0() {
   return (neuron0x3289d50()*-0.589891);
}

double NNfunction_nn_chi1_chi3::synapse0x329f7f0() {
   return (neuron0x328a090()*0.342798);
}

double NNfunction_nn_chi1_chi3::synapse0x329f830() {
   return (neuron0x328a3d0()*0.983502);
}

double NNfunction_nn_chi1_chi3::synapse0x329f870() {
   return (neuron0x328a710()*0.147132);
}

double NNfunction_nn_chi1_chi3::synapse0x329f8b0() {
   return (neuron0x328aa50()*0.548399);
}

double NNfunction_nn_chi1_chi3::synapse0x329f8f0() {
   return (neuron0x328ad90()*0.711885);
}

double NNfunction_nn_chi1_chi3::synapse0x329f930() {
   return (neuron0x328b0d0()*-0.620864);
}

double NNfunction_nn_chi1_chi3::synapse0x329f3c0() {
   return (neuron0x328b410()*1.33011);
}

double NNfunction_nn_chi1_chi3::synapse0x329f400() {
   return (neuron0x328b970()*0.679703);
}

double NNfunction_nn_chi1_chi3::synapse0x329fa80() {
   return (neuron0x328bcb0()*3.32754);
}

double NNfunction_nn_chi1_chi3::synapse0x329fac0() {
   return (neuron0x328bff0()*-2.62788);
}

double NNfunction_nn_chi1_chi3::synapse0x329fb00() {
   return (neuron0x328c330()*0.19491);
}

double NNfunction_nn_chi1_chi3::synapse0x329fb40() {
   return (neuron0x328c670()*1.15296);
}

double NNfunction_nn_chi1_chi3::synapse0x329fb80() {
   return (neuron0x328c9b0()*1.00274);
}

double NNfunction_nn_chi1_chi3::synapse0x329fbc0() {
   return (neuron0x328ccf0()*0.927782);
}

double NNfunction_nn_chi1_chi3::synapse0x329ff40() {
   return (neuron0x32880a0()*-0.0294749);
}

double NNfunction_nn_chi1_chi3::synapse0x329ff80() {
   return (neuron0x3288350()*0.0893282);
}

double NNfunction_nn_chi1_chi3::synapse0x329ffc0() {
   return (neuron0x3288690()*-1.08555);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0000() {
   return (neuron0x32889d0()*-0.411384);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0040() {
   return (neuron0x3288d10()*0.348121);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0080() {
   return (neuron0x3289050()*0.0838145);
}

double NNfunction_nn_chi1_chi3::synapse0x32a00c0() {
   return (neuron0x3289390()*-0.139336);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0100() {
   return (neuron0x32896d0()*-0.291016);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0140() {
   return (neuron0x3289a10()*0.433565);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0180() {
   return (neuron0x3289d50()*-0.0620497);
}

double NNfunction_nn_chi1_chi3::synapse0x32a01c0() {
   return (neuron0x328a090()*0.176032);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0200() {
   return (neuron0x328a3d0()*-0.197548);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0240() {
   return (neuron0x328a710()*-0.272679);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0280() {
   return (neuron0x328aa50()*-0.405375);
}

double NNfunction_nn_chi1_chi3::synapse0x32a02c0() {
   return (neuron0x328ad90()*0.0850005);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0300() {
   return (neuron0x328b0d0()*0.0891848);
}

double NNfunction_nn_chi1_chi3::synapse0x329fd90() {
   return (neuron0x328b410()*0.169076);
}

double NNfunction_nn_chi1_chi3::synapse0x329fdd0() {
   return (neuron0x328b970()*-0.0364565);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0450() {
   return (neuron0x328bcb0()*-0.423217);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0490() {
   return (neuron0x328bff0()*-1.42364);
}

double NNfunction_nn_chi1_chi3::synapse0x32a04d0() {
   return (neuron0x328c330()*-0.171751);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0510() {
   return (neuron0x328c670()*0.44492);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0550() {
   return (neuron0x328c9b0()*-0.107531);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0590() {
   return (neuron0x328ccf0()*-0.633788);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0910() {
   return (neuron0x32880a0()*0.176931);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0950() {
   return (neuron0x3288350()*-0.066464);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0990() {
   return (neuron0x3288690()*-0.0208815);
}

double NNfunction_nn_chi1_chi3::synapse0x32a09d0() {
   return (neuron0x32889d0()*-0.416997);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0a10() {
   return (neuron0x3288d10()*-0.819138);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0a50() {
   return (neuron0x3289050()*-0.0190271);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0a90() {
   return (neuron0x3289390()*-0.202109);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0ad0() {
   return (neuron0x32896d0()*-0.760447);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0b10() {
   return (neuron0x3289a10()*0.926834);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0b50() {
   return (neuron0x3289d50()*-0.480359);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0b90() {
   return (neuron0x328a090()*0.198638);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0bd0() {
   return (neuron0x328a3d0()*-0.271003);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0c10() {
   return (neuron0x328a710()*-1.79643);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0c50() {
   return (neuron0x328aa50()*0.245466);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0c90() {
   return (neuron0x328ad90()*-0.698797);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0cd0() {
   return (neuron0x328b0d0()*0.0233814);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0760() {
   return (neuron0x328b410()*0.860483);
}

double NNfunction_nn_chi1_chi3::synapse0x32a07a0() {
   return (neuron0x328b970()*0.101511);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0e20() {
   return (neuron0x328bcb0()*0.955792);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0e60() {
   return (neuron0x328bff0()*0.773394);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0ea0() {
   return (neuron0x328c330()*0.0861939);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0ee0() {
   return (neuron0x328c670()*-0.0992076);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0f20() {
   return (neuron0x328c9b0()*-0.702239);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0f60() {
   return (neuron0x328ccf0()*-0.366853);
}

double NNfunction_nn_chi1_chi3::synapse0x32a12e0() {
   return (neuron0x32880a0()*1.17704);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1320() {
   return (neuron0x3288350()*-0.988652);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1360() {
   return (neuron0x3288690()*1.76273);
}

double NNfunction_nn_chi1_chi3::synapse0x32a13a0() {
   return (neuron0x32889d0()*0.277475);
}

double NNfunction_nn_chi1_chi3::synapse0x32a13e0() {
   return (neuron0x3288d10()*0.0540442);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1420() {
   return (neuron0x3289050()*-0.263854);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1460() {
   return (neuron0x3289390()*-0.173115);
}

double NNfunction_nn_chi1_chi3::synapse0x32a14a0() {
   return (neuron0x32896d0()*1.20341);
}

double NNfunction_nn_chi1_chi3::synapse0x32a14e0() {
   return (neuron0x3289a10()*-0.277421);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1520() {
   return (neuron0x3289d50()*-0.181525);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1560() {
   return (neuron0x328a090()*0.333303);
}

double NNfunction_nn_chi1_chi3::synapse0x32a15a0() {
   return (neuron0x328a3d0()*0.0401069);
}

double NNfunction_nn_chi1_chi3::synapse0x32a15e0() {
   return (neuron0x328a710()*1.11578);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1620() {
   return (neuron0x328aa50()*1.48325);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1660() {
   return (neuron0x328ad90()*-0.586801);
}

double NNfunction_nn_chi1_chi3::synapse0x32a16a0() {
   return (neuron0x328b0d0()*0.361602);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1130() {
   return (neuron0x328b410()*0.915574);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1170() {
   return (neuron0x328b970()*1.12388);
}

double NNfunction_nn_chi1_chi3::synapse0x32a17f0() {
   return (neuron0x328bcb0()*-0.613356);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1830() {
   return (neuron0x328bff0()*-0.491131);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1870() {
   return (neuron0x328c330()*1.39476);
}

double NNfunction_nn_chi1_chi3::synapse0x32a18b0() {
   return (neuron0x328c670()*-0.145594);
}

double NNfunction_nn_chi1_chi3::synapse0x32a18f0() {
   return (neuron0x328c9b0()*-0.816454);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1930() {
   return (neuron0x328ccf0()*-2.79697);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1cb0() {
   return (neuron0x32880a0()*1.43779);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1cf0() {
   return (neuron0x3288350()*-0.152598);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1d30() {
   return (neuron0x3288690()*-0.0723389);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1d70() {
   return (neuron0x32889d0()*1.578);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1db0() {
   return (neuron0x3288d10()*-0.177694);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1df0() {
   return (neuron0x3289050()*1.1512);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1e30() {
   return (neuron0x3289390()*-0.454226);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1e70() {
   return (neuron0x32896d0()*0.654376);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1eb0() {
   return (neuron0x3289a10()*-0.2387);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1ef0() {
   return (neuron0x3289d50()*-0.76973);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1f30() {
   return (neuron0x328a090()*-0.537519);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1f70() {
   return (neuron0x328a3d0()*-0.477013);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1fb0() {
   return (neuron0x328a710()*-1.87421);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1ff0() {
   return (neuron0x328aa50()*-0.932248);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2030() {
   return (neuron0x328ad90()*-0.405326);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2070() {
   return (neuron0x328b0d0()*0.412314);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1b00() {
   return (neuron0x328b410()*-0.66969);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1b40() {
   return (neuron0x328b970()*-0.113568);
}

double NNfunction_nn_chi1_chi3::synapse0x32a21c0() {
   return (neuron0x328bcb0()*-0.895679);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2200() {
   return (neuron0x328bff0()*-0.405013);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2240() {
   return (neuron0x328c330()*-0.0934898);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2280() {
   return (neuron0x328c670()*1.52616);
}

double NNfunction_nn_chi1_chi3::synapse0x32a22c0() {
   return (neuron0x328c9b0()*-0.528064);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2300() {
   return (neuron0x328ccf0()*-1.13646);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2680() {
   return (neuron0x32880a0()*0.0154208);
}

double NNfunction_nn_chi1_chi3::synapse0x32a26c0() {
   return (neuron0x3288350()*12.2147);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2700() {
   return (neuron0x3288690()*-4.27735);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2740() {
   return (neuron0x32889d0()*0.00993386);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2780() {
   return (neuron0x3288d10()*0.0207191);
}

double NNfunction_nn_chi1_chi3::synapse0x32a27c0() {
   return (neuron0x3289050()*0.0134372);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2800() {
   return (neuron0x3289390()*-0.0294073);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2840() {
   return (neuron0x32896d0()*0.0603406);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2880() {
   return (neuron0x3289a10()*-0.0272311);
}

double NNfunction_nn_chi1_chi3::synapse0x32a28c0() {
   return (neuron0x3289d50()*0.0323706);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2900() {
   return (neuron0x328a090()*-0.0652046);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2940() {
   return (neuron0x328a3d0()*0.0180773);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2980() {
   return (neuron0x328a710()*-0.0182144);
}

double NNfunction_nn_chi1_chi3::synapse0x32a29c0() {
   return (neuron0x328aa50()*0.0275824);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2a00() {
   return (neuron0x328ad90()*-0.0510038);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2a40() {
   return (neuron0x328b0d0()*0.0027015);
}

double NNfunction_nn_chi1_chi3::synapse0x32a24d0() {
   return (neuron0x328b410()*0.0103375);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2510() {
   return (neuron0x328b970()*0.0351566);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2b90() {
   return (neuron0x328bcb0()*0.03562);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2bd0() {
   return (neuron0x328bff0()*0.00573873);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2c10() {
   return (neuron0x328c330()*-0.0119962);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2c50() {
   return (neuron0x328c670()*0.0650932);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2c90() {
   return (neuron0x328c9b0()*-0.0141109);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2cd0() {
   return (neuron0x328ccf0()*-0.178915);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3050() {
   return (neuron0x32880a0()*1.2972);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3090() {
   return (neuron0x3288350()*0.272612);
}

double NNfunction_nn_chi1_chi3::synapse0x32a30d0() {
   return (neuron0x3288690()*1.87176);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3110() {
   return (neuron0x32889d0()*0.581433);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3150() {
   return (neuron0x3288d10()*-1.35047);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3190() {
   return (neuron0x3289050()*-0.590731);
}

double NNfunction_nn_chi1_chi3::synapse0x32a31d0() {
   return (neuron0x3289390()*0.141612);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3210() {
   return (neuron0x32896d0()*0.136124);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3250() {
   return (neuron0x3289a10()*-0.10591);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3290() {
   return (neuron0x3289d50()*0.379811);
}

double NNfunction_nn_chi1_chi3::synapse0x32a32d0() {
   return (neuron0x328a090()*0.623198);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3310() {
   return (neuron0x328a3d0()*0.687446);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3350() {
   return (neuron0x328a710()*0.402363);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3390() {
   return (neuron0x328aa50()*0.28689);
}

double NNfunction_nn_chi1_chi3::synapse0x32a33d0() {
   return (neuron0x328ad90()*-1.03687);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3410() {
   return (neuron0x328b0d0()*1.19615);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2ea0() {
   return (neuron0x328b410()*0.450123);
}

double NNfunction_nn_chi1_chi3::synapse0x32a2ee0() {
   return (neuron0x328b970()*1.69097);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3560() {
   return (neuron0x328bcb0()*-1.01053);
}

double NNfunction_nn_chi1_chi3::synapse0x32a35a0() {
   return (neuron0x328bff0()*1.13903);
}

double NNfunction_nn_chi1_chi3::synapse0x32a35e0() {
   return (neuron0x328c330()*2.0211);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3620() {
   return (neuron0x328c670()*-0.0761332);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3660() {
   return (neuron0x328c9b0()*-1.5131);
}

double NNfunction_nn_chi1_chi3::synapse0x32a36a0() {
   return (neuron0x328ccf0()*-0.595315);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3a20() {
   return (neuron0x32880a0()*-0.0453848);
}

double NNfunction_nn_chi1_chi3::synapse0x3297ff0() {
   return (neuron0x3288350()*-0.00816563);
}

double NNfunction_nn_chi1_chi3::synapse0x3298030() {
   return (neuron0x3288690()*0.51813);
}

double NNfunction_nn_chi1_chi3::synapse0x3298070() {
   return (neuron0x32889d0()*-0.0117816);
}

double NNfunction_nn_chi1_chi3::synapse0x32982c0() {
   return (neuron0x3288d10()*0.0376404);
}

double NNfunction_nn_chi1_chi3::synapse0x3298300() {
   return (neuron0x3289050()*-0.00873269);
}

double NNfunction_nn_chi1_chi3::synapse0x3298340() {
   return (neuron0x3289390()*0.00504763);
}

double NNfunction_nn_chi1_chi3::synapse0x3298590() {
   return (neuron0x32896d0()*-0.0178364);
}

double NNfunction_nn_chi1_chi3::synapse0x32985d0() {
   return (neuron0x3289a10()*-0.00981852);
}

double NNfunction_nn_chi1_chi3::synapse0x3298820() {
   return (neuron0x3289d50()*-0.00842448);
}

double NNfunction_nn_chi1_chi3::synapse0x3298860() {
   return (neuron0x328a090()*-0.00239467);
}

double NNfunction_nn_chi1_chi3::synapse0x32988a0() {
   return (neuron0x328a3d0()*0.278505);
}

double NNfunction_nn_chi1_chi3::synapse0x3298af0() {
   return (neuron0x328a710()*0.0417128);
}

double NNfunction_nn_chi1_chi3::synapse0x3298b30() {
   return (neuron0x328aa50()*0.0224773);
}

double NNfunction_nn_chi1_chi3::synapse0x3298d80() {
   return (neuron0x328ad90()*-0.0116162);
}

double NNfunction_nn_chi1_chi3::synapse0x3298dc0() {
   return (neuron0x328b0d0()*0.0318146);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3870() {
   return (neuron0x328b410()*-0.0134968);
}

double NNfunction_nn_chi1_chi3::synapse0x32a38b0() {
   return (neuron0x328b970()*0.0129999);
}

double NNfunction_nn_chi1_chi3::synapse0x3298f10() {
   return (neuron0x328bcb0()*0.00191473);
}

double NNfunction_nn_chi1_chi3::synapse0x3299420() {
   return (neuron0x328bff0()*-0.0223355);
}

double NNfunction_nn_chi1_chi3::synapse0x3299460() {
   return (neuron0x328c330()*0.00810705);
}

double NNfunction_nn_chi1_chi3::synapse0x32994a0() {
   return (neuron0x328c670()*-0.0106815);
}

double NNfunction_nn_chi1_chi3::synapse0x32996f0() {
   return (neuron0x328c9b0()*0.0242758);
}

double NNfunction_nn_chi1_chi3::synapse0x3299730() {
   return (neuron0x328ccf0()*-5.86781);
}

double NNfunction_nn_chi1_chi3::synapse0x3298fe0() {
   return (neuron0x32880a0()*0.00359051);
}

double NNfunction_nn_chi1_chi3::synapse0x3299020() {
   return (neuron0x3288350()*-3.56611);
}

double NNfunction_nn_chi1_chi3::synapse0x3299060() {
   return (neuron0x3288690()*-2.18745);
}

double NNfunction_nn_chi1_chi3::synapse0x32990a0() {
   return (neuron0x32889d0()*-0.0104825);
}

double NNfunction_nn_chi1_chi3::synapse0x3299a20() {
   return (neuron0x3288d10()*0.012317);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5d70() {
   return (neuron0x3289050()*0.0171812);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5db0() {
   return (neuron0x3289390()*-0.0200224);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5df0() {
   return (neuron0x32896d0()*0.030445);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5e30() {
   return (neuron0x3289a10()*-0.0373124);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5e70() {
   return (neuron0x3289d50()*-0.00481567);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5eb0() {
   return (neuron0x328a090()*-0.00943612);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5ef0() {
   return (neuron0x328a3d0()*-0.313203);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5f30() {
   return (neuron0x328a710()*-0.0746636);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5f70() {
   return (neuron0x328aa50()*0.031032);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5fb0() {
   return (neuron0x328ad90()*0.00817236);
}

double NNfunction_nn_chi1_chi3::synapse0x32a5ff0() {
   return (neuron0x328b0d0()*0.0395821);
}

double NNfunction_nn_chi1_chi3::synapse0x3299900() {
   return (neuron0x328b410()*0.0171281);
}

double NNfunction_nn_chi1_chi3::synapse0x3299940() {
   return (neuron0x328b970()*0.00563944);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6140() {
   return (neuron0x328bcb0()*0.0134023);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6180() {
   return (neuron0x328bff0()*-0.0263958);
}

double NNfunction_nn_chi1_chi3::synapse0x32a61c0() {
   return (neuron0x328c330()*-0.0350691);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6200() {
   return (neuron0x328c670()*0.0035577);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6240() {
   return (neuron0x328c9b0()*-0.0109684);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6280() {
   return (neuron0x328ccf0()*-1.34668);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6600() {
   return (neuron0x32880a0()*-0.020207);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6640() {
   return (neuron0x3288350()*-0.0275973);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6680() {
   return (neuron0x3288690()*-0.156488);
}

double NNfunction_nn_chi1_chi3::synapse0x32a66c0() {
   return (neuron0x32889d0()*-0.00949143);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6700() {
   return (neuron0x3288d10()*-0.00604377);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6740() {
   return (neuron0x3289050()*-0.00396439);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6780() {
   return (neuron0x3289390()*-0.00855842);
}

double NNfunction_nn_chi1_chi3::synapse0x32a67c0() {
   return (neuron0x32896d0()*-0.00663008);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6800() {
   return (neuron0x3289a10()*0.00320947);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6840() {
   return (neuron0x3289d50()*0.0199771);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6880() {
   return (neuron0x328a090()*0.0126712);
}

double NNfunction_nn_chi1_chi3::synapse0x32a68c0() {
   return (neuron0x328a3d0()*-0.0440245);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6900() {
   return (neuron0x328a710()*0.0169794);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6940() {
   return (neuron0x328aa50()*0.0233748);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6980() {
   return (neuron0x328ad90()*-0.0518256);
}

double NNfunction_nn_chi1_chi3::synapse0x32a69c0() {
   return (neuron0x328b0d0()*0.00237449);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6450() {
   return (neuron0x328b410()*0.000192158);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6490() {
   return (neuron0x328b970()*-0.0014466);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6b10() {
   return (neuron0x328bcb0()*-0.00026328);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6b50() {
   return (neuron0x328bff0()*-0.00607755);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6b90() {
   return (neuron0x328c330()*0.0174807);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6bd0() {
   return (neuron0x328c670()*0.00635024);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6c10() {
   return (neuron0x328c9b0()*0.00477947);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6c50() {
   return (neuron0x328ccf0()*-1.8246);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6fd0() {
   return (neuron0x32880a0()*0.0292701);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7010() {
   return (neuron0x3288350()*0.0238917);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7050() {
   return (neuron0x3288690()*-1.1539);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7090() {
   return (neuron0x32889d0()*-0.0223107);
}

double NNfunction_nn_chi1_chi3::synapse0x32a70d0() {
   return (neuron0x3288d10()*0.00794095);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7110() {
   return (neuron0x3289050()*0.0284571);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7150() {
   return (neuron0x3289390()*0.00372388);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7190() {
   return (neuron0x32896d0()*0.00957138);
}

double NNfunction_nn_chi1_chi3::synapse0x32a71d0() {
   return (neuron0x3289a10()*0.00775421);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7210() {
   return (neuron0x3289d50()*0.0244962);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7250() {
   return (neuron0x328a090()*-0.0382553);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7290() {
   return (neuron0x328a3d0()*-0.124796);
}

double NNfunction_nn_chi1_chi3::synapse0x32a72d0() {
   return (neuron0x328a710()*0.0373295);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7310() {
   return (neuron0x328aa50()*-0.0170134);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7350() {
   return (neuron0x328ad90()*0.042024);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7390() {
   return (neuron0x328b0d0()*0.030972);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6e20() {
   return (neuron0x328b410()*-4.27182e-05);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6e60() {
   return (neuron0x328b970()*0.016784);
}

double NNfunction_nn_chi1_chi3::synapse0x32a74e0() {
   return (neuron0x328bcb0()*0.00191477);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7520() {
   return (neuron0x328bff0()*0.0269071);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7560() {
   return (neuron0x328c330()*-0.0187199);
}

double NNfunction_nn_chi1_chi3::synapse0x32a75a0() {
   return (neuron0x328c670()*0.0180149);
}

double NNfunction_nn_chi1_chi3::synapse0x32a75e0() {
   return (neuron0x328c9b0()*-0.00405268);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7620() {
   return (neuron0x328ccf0()*1.79086);
}

double NNfunction_nn_chi1_chi3::synapse0x32a79a0() {
   return (neuron0x32880a0()*-0.637551);
}

double NNfunction_nn_chi1_chi3::synapse0x32a79e0() {
   return (neuron0x3288350()*2.11897);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7a20() {
   return (neuron0x3288690()*3.72854);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7a60() {
   return (neuron0x32889d0()*-0.150968);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7aa0() {
   return (neuron0x3288d10()*0.0192543);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7ae0() {
   return (neuron0x3289050()*-0.567668);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7b20() {
   return (neuron0x3289390()*1.58292);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7b60() {
   return (neuron0x32896d0()*-0.387385);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7ba0() {
   return (neuron0x3289a10()*-1.22142);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7be0() {
   return (neuron0x3289d50()*1.76844);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7c20() {
   return (neuron0x328a090()*1.29686);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7c60() {
   return (neuron0x328a3d0()*-0.858652);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7ca0() {
   return (neuron0x328a710()*0.697686);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7ce0() {
   return (neuron0x328aa50()*-2.62295);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7d20() {
   return (neuron0x328ad90()*0.0430072);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7d60() {
   return (neuron0x328b0d0()*-0.798114);
}

double NNfunction_nn_chi1_chi3::synapse0x32a77f0() {
   return (neuron0x328b410()*1.27521);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7830() {
   return (neuron0x328b970()*1.79648);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7eb0() {
   return (neuron0x328bcb0()*-0.0125402);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7ef0() {
   return (neuron0x328bff0()*0.1007);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7f30() {
   return (neuron0x328c330()*-0.892023);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7f70() {
   return (neuron0x328c670()*-0.577962);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7fb0() {
   return (neuron0x328c9b0()*-2.06977);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7ff0() {
   return (neuron0x328ccf0()*-2.78195);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8370() {
   return (neuron0x32880a0()*-1.0279);
}

double NNfunction_nn_chi1_chi3::synapse0x32a83b0() {
   return (neuron0x3288350()*0.584874);
}

double NNfunction_nn_chi1_chi3::synapse0x32a83f0() {
   return (neuron0x3288690()*1.35066);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8430() {
   return (neuron0x32889d0()*-0.630428);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8470() {
   return (neuron0x3288d10()*-0.94881);
}

double NNfunction_nn_chi1_chi3::synapse0x32a84b0() {
   return (neuron0x3289050()*-0.671976);
}

double NNfunction_nn_chi1_chi3::synapse0x32a84f0() {
   return (neuron0x3289390()*-0.872117);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8530() {
   return (neuron0x32896d0()*1.30258);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8570() {
   return (neuron0x3289a10()*0.346399);
}

double NNfunction_nn_chi1_chi3::synapse0x32a85b0() {
   return (neuron0x3289d50()*-0.538851);
}

double NNfunction_nn_chi1_chi3::synapse0x32a85f0() {
   return (neuron0x328a090()*-1.29984);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8630() {
   return (neuron0x328a3d0()*-0.338904);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8670() {
   return (neuron0x328a710()*0.951631);
}

double NNfunction_nn_chi1_chi3::synapse0x32a86b0() {
   return (neuron0x328aa50()*-0.0683333);
}

double NNfunction_nn_chi1_chi3::synapse0x32a86f0() {
   return (neuron0x328ad90()*-0.811984);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8730() {
   return (neuron0x328b0d0()*0.414175);
}

double NNfunction_nn_chi1_chi3::synapse0x32a81c0() {
   return (neuron0x328b410()*-1.62003);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8200() {
   return (neuron0x328b970()*-0.0876895);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8880() {
   return (neuron0x328bcb0()*0.000423866);
}

double NNfunction_nn_chi1_chi3::synapse0x32a88c0() {
   return (neuron0x328bff0()*0.774251);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8900() {
   return (neuron0x328c330()*0.408416);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8940() {
   return (neuron0x328c670()*0.517109);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8980() {
   return (neuron0x328c9b0()*-0.58363);
}

double NNfunction_nn_chi1_chi3::synapse0x32a89c0() {
   return (neuron0x328ccf0()*8.06872);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8d40() {
   return (neuron0x32880a0()*-0.0470547);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8d80() {
   return (neuron0x3288350()*0.0844674);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8dc0() {
   return (neuron0x3288690()*-7.95647);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8e00() {
   return (neuron0x32889d0()*-0.00965787);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8e40() {
   return (neuron0x3288d10()*-0.0771953);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8e80() {
   return (neuron0x3289050()*0.0620688);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8ec0() {
   return (neuron0x3289390()*-0.020898);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8f00() {
   return (neuron0x32896d0()*-0.00278894);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8f40() {
   return (neuron0x3289a10()*0.0680039);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8f80() {
   return (neuron0x3289d50()*-0.0694919);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8fc0() {
   return (neuron0x328a090()*-0.0466441);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9000() {
   return (neuron0x328a3d0()*0.197276);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9040() {
   return (neuron0x328a710()*-0.0257886);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9080() {
   return (neuron0x328aa50()*-0.0909658);
}

double NNfunction_nn_chi1_chi3::synapse0x32a90c0() {
   return (neuron0x328ad90()*0.216668);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9100() {
   return (neuron0x328b0d0()*-0.0349766);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8b90() {
   return (neuron0x328b410()*0.0269935);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8bd0() {
   return (neuron0x328b970()*-0.00964944);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9250() {
   return (neuron0x328bcb0()*0.0434759);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9290() {
   return (neuron0x328bff0()*-0.0324937);
}

double NNfunction_nn_chi1_chi3::synapse0x32a92d0() {
   return (neuron0x328c330()*-0.0579605);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9310() {
   return (neuron0x328c670()*0.132042);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9350() {
   return (neuron0x328c9b0()*0.00632312);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9390() {
   return (neuron0x328ccf0()*5.50112);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9710() {
   return (neuron0x32880a0()*-0.14718);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9750() {
   return (neuron0x3288350()*0.683429);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9790() {
   return (neuron0x3288690()*1.51448);
}

double NNfunction_nn_chi1_chi3::synapse0x32a97d0() {
   return (neuron0x32889d0()*2.54892);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9810() {
   return (neuron0x3288d10()*0.132394);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9850() {
   return (neuron0x3289050()*-0.463956);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9890() {
   return (neuron0x3289390()*-1.06284);
}

double NNfunction_nn_chi1_chi3::synapse0x32a98d0() {
   return (neuron0x32896d0()*0.798379);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9910() {
   return (neuron0x3289a10()*-0.657855);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9950() {
   return (neuron0x3289d50()*0.619155);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9990() {
   return (neuron0x328a090()*-0.349107);
}

double NNfunction_nn_chi1_chi3::synapse0x32a99d0() {
   return (neuron0x328a3d0()*-2.13847);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9a10() {
   return (neuron0x328a710()*-0.0364753);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9a50() {
   return (neuron0x328aa50()*0.256293);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9a90() {
   return (neuron0x328ad90()*3.1341);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9ad0() {
   return (neuron0x328b0d0()*1.29048);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9560() {
   return (neuron0x328b410()*1.24095);
}

double NNfunction_nn_chi1_chi3::synapse0x32a95a0() {
   return (neuron0x328b970()*-0.152677);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9c20() {
   return (neuron0x328bcb0()*-0.209743);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9c60() {
   return (neuron0x328bff0()*0.810516);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9ca0() {
   return (neuron0x328c330()*-0.809882);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9ce0() {
   return (neuron0x328c670()*-0.615129);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9d20() {
   return (neuron0x328c9b0()*-1.20076);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9d60() {
   return (neuron0x328ccf0()*0.404774);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa0e0() {
   return (neuron0x32880a0()*-2.04948);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa120() {
   return (neuron0x3288350()*-0.113016);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa160() {
   return (neuron0x3288690()*-2.09839);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa1a0() {
   return (neuron0x32889d0()*0.251128);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa1e0() {
   return (neuron0x3288d10()*-0.262307);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa220() {
   return (neuron0x3289050()*-0.373928);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa260() {
   return (neuron0x3289390()*-0.782043);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa2a0() {
   return (neuron0x32896d0()*0.595187);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa2e0() {
   return (neuron0x3289a10()*0.63816);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa320() {
   return (neuron0x3289d50()*-0.755251);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa360() {
   return (neuron0x328a090()*-1.58016);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa3a0() {
   return (neuron0x328a3d0()*0.815896);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa3e0() {
   return (neuron0x328a710()*0.0109752);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa420() {
   return (neuron0x328aa50()*1.21781);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa460() {
   return (neuron0x328ad90()*1.50237);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa4a0() {
   return (neuron0x328b0d0()*-0.103767);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9f30() {
   return (neuron0x328b410()*-0.253224);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9f70() {
   return (neuron0x328b970()*-1.18621);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa5f0() {
   return (neuron0x328bcb0()*1.51055);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa630() {
   return (neuron0x328bff0()*0.102954);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa670() {
   return (neuron0x328c330()*0.748836);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa6b0() {
   return (neuron0x328c670()*0.412887);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa6f0() {
   return (neuron0x328c9b0()*1.46388);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa730() {
   return (neuron0x328ccf0()*1.41816);
}

double NNfunction_nn_chi1_chi3::synapse0x32931e0() {
   return (neuron0x32880a0()*0.110788);
}

double NNfunction_nn_chi1_chi3::synapse0x3293220() {
   return (neuron0x3288350()*16.0957);
}

double NNfunction_nn_chi1_chi3::synapse0x3293260() {
   return (neuron0x3288690()*0.402871);
}

double NNfunction_nn_chi1_chi3::synapse0x32932a0() {
   return (neuron0x32889d0()*-0.0366798);
}

double NNfunction_nn_chi1_chi3::synapse0x32932e0() {
   return (neuron0x3288d10()*-0.0166685);
}

double NNfunction_nn_chi1_chi3::synapse0x3293320() {
   return (neuron0x3289050()*0.00588847);
}

double NNfunction_nn_chi1_chi3::synapse0x3293360() {
   return (neuron0x3289390()*-0.00102228);
}

double NNfunction_nn_chi1_chi3::synapse0x32933a0() {
   return (neuron0x32896d0()*0.0164962);
}

double NNfunction_nn_chi1_chi3::synapse0x32aaec0() {
   return (neuron0x3289a10()*0.0281426);
}

double NNfunction_nn_chi1_chi3::synapse0x32aaf00() {
   return (neuron0x3289d50()*0.00913539);
}

double NNfunction_nn_chi1_chi3::synapse0x32aaf40() {
   return (neuron0x328a090()*0.0229156);
}

double NNfunction_nn_chi1_chi3::synapse0x32aaf80() {
   return (neuron0x328a3d0()*-0.0443778);
}

double NNfunction_nn_chi1_chi3::synapse0x32aafc0() {
   return (neuron0x328a710()*-0.0334466);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab000() {
   return (neuron0x328aa50()*0.0217698);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab040() {
   return (neuron0x328ad90()*0.0886846);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab080() {
   return (neuron0x328b0d0()*-0.0227578);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa900() {
   return (neuron0x328b410()*-0.0277232);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa940() {
   return (neuron0x328b970()*-0.0132624);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab1d0() {
   return (neuron0x328bcb0()*-0.0122068);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab210() {
   return (neuron0x328bff0()*-0.00304239);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab250() {
   return (neuron0x328c330()*-0.00477202);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab290() {
   return (neuron0x328c670()*0.0127872);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab2d0() {
   return (neuron0x328c9b0()*0.0264435);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab310() {
   return (neuron0x328ccf0()*6.86031);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab690() {
   return (neuron0x32880a0()*-0.21282);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab6d0() {
   return (neuron0x3288350()*0.0394278);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab710() {
   return (neuron0x3288690()*-10.0025);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab750() {
   return (neuron0x32889d0()*0.00856317);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab790() {
   return (neuron0x3288d10()*-0.0704952);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab7d0() {
   return (neuron0x3289050()*0.0292029);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab810() {
   return (neuron0x3289390()*0.00938308);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab850() {
   return (neuron0x32896d0()*0.0714329);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab890() {
   return (neuron0x3289a10()*0.0523876);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab8d0() {
   return (neuron0x3289d50()*0.0364573);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab910() {
   return (neuron0x328a090()*-0.0464636);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab950() {
   return (neuron0x328a3d0()*-0.300401);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab990() {
   return (neuron0x328a710()*-0.0805077);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab9d0() {
   return (neuron0x328aa50()*-0.106924);
}

double NNfunction_nn_chi1_chi3::synapse0x32aba10() {
   return (neuron0x328ad90()*-0.0778812);
}

double NNfunction_nn_chi1_chi3::synapse0x32aba50() {
   return (neuron0x328b0d0()*-0.0504704);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab4e0() {
   return (neuron0x328b410()*0.0454762);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab520() {
   return (neuron0x328b970()*-0.0235205);
}

double NNfunction_nn_chi1_chi3::synapse0x32abba0() {
   return (neuron0x328bcb0()*0.00495795);
}

double NNfunction_nn_chi1_chi3::synapse0x32abbe0() {
   return (neuron0x328bff0()*0.0706494);
}

double NNfunction_nn_chi1_chi3::synapse0x32abc20() {
   return (neuron0x328c330()*-0.056925);
}

double NNfunction_nn_chi1_chi3::synapse0x32abc60() {
   return (neuron0x328c670()*-0.00865084);
}

double NNfunction_nn_chi1_chi3::synapse0x32abca0() {
   return (neuron0x328c9b0()*0.0057479);
}

double NNfunction_nn_chi1_chi3::synapse0x32abce0() {
   return (neuron0x328ccf0()*12.1605);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac060() {
   return (neuron0x32880a0()*-0.409015);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac0a0() {
   return (neuron0x3288350()*-0.302995);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac0e0() {
   return (neuron0x3288690()*-3.26327);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac120() {
   return (neuron0x32889d0()*-1.63493);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac160() {
   return (neuron0x3288d10()*-0.289175);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac1a0() {
   return (neuron0x3289050()*0.0556952);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac1e0() {
   return (neuron0x3289390()*-0.045111);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac220() {
   return (neuron0x32896d0()*-0.66448);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac260() {
   return (neuron0x3289a10()*3.13891);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac2a0() {
   return (neuron0x3289d50()*-0.190693);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac2e0() {
   return (neuron0x328a090()*1.53395);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac320() {
   return (neuron0x328a3d0()*0.126794);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac360() {
   return (neuron0x328a710()*-1.29297);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac3a0() {
   return (neuron0x328aa50()*-1.08038);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac3e0() {
   return (neuron0x328ad90()*-1.99359);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac420() {
   return (neuron0x328b0d0()*0.0513746);
}

double NNfunction_nn_chi1_chi3::synapse0x32abeb0() {
   return (neuron0x328b410()*0.738687);
}

double NNfunction_nn_chi1_chi3::synapse0x32abef0() {
   return (neuron0x328b970()*-0.198767);
}

double NNfunction_nn_chi1_chi3::synapse0x329ca20() {
   return (neuron0x328bcb0()*0.123549);
}

double NNfunction_nn_chi1_chi3::synapse0x329ca60() {
   return (neuron0x328bff0()*-0.950818);
}

double NNfunction_nn_chi1_chi3::synapse0x329caa0() {
   return (neuron0x328c330()*1.14851);
}

double NNfunction_nn_chi1_chi3::synapse0x329cae0() {
   return (neuron0x328c670()*0.825006);
}

double NNfunction_nn_chi1_chi3::synapse0x329cb20() {
   return (neuron0x328c9b0()*1.06112);
}

double NNfunction_nn_chi1_chi3::synapse0x329cb60() {
   return (neuron0x328ccf0()*0.966511);
}

double NNfunction_nn_chi1_chi3::synapse0x329cee0() {
   return (neuron0x32880a0()*-0.0815277);
}

double NNfunction_nn_chi1_chi3::synapse0x329cf20() {
   return (neuron0x3288350()*-0.0226007);
}

double NNfunction_nn_chi1_chi3::synapse0x329cf60() {
   return (neuron0x3288690()*2.75765);
}

double NNfunction_nn_chi1_chi3::synapse0x329cfa0() {
   return (neuron0x32889d0()*-0.00497078);
}

double NNfunction_nn_chi1_chi3::synapse0x329cfe0() {
   return (neuron0x3288d10()*0.0219445);
}

double NNfunction_nn_chi1_chi3::synapse0x329d020() {
   return (neuron0x3289050()*-0.0164463);
}

double NNfunction_nn_chi1_chi3::synapse0x329d060() {
   return (neuron0x3289390()*0.0159377);
}

double NNfunction_nn_chi1_chi3::synapse0x329d0a0() {
   return (neuron0x32896d0()*0.0238956);
}

double NNfunction_nn_chi1_chi3::synapse0x329d0e0() {
   return (neuron0x3289a10()*0.0038484);
}

double NNfunction_nn_chi1_chi3::synapse0x329d120() {
   return (neuron0x3289d50()*-0.0784631);
}

double NNfunction_nn_chi1_chi3::synapse0x329d160() {
   return (neuron0x328a090()*-0.0106304);
}

double NNfunction_nn_chi1_chi3::synapse0x329d1a0() {
   return (neuron0x328a3d0()*-0.27214);
}

double NNfunction_nn_chi1_chi3::synapse0x329d1e0() {
   return (neuron0x328a710()*0.00600044);
}

double NNfunction_nn_chi1_chi3::synapse0x329d220() {
   return (neuron0x328aa50()*0.0303571);
}

double NNfunction_nn_chi1_chi3::synapse0x329d260() {
   return (neuron0x328ad90()*0.0462818);
}

double NNfunction_nn_chi1_chi3::synapse0x329d2a0() {
   return (neuron0x328b0d0()*-0.0275175);
}

double NNfunction_nn_chi1_chi3::synapse0x329cd30() {
   return (neuron0x328b410()*0.0169138);
}

double NNfunction_nn_chi1_chi3::synapse0x329cd70() {
   return (neuron0x328b970()*-0.00432437);
}

double NNfunction_nn_chi1_chi3::synapse0x329d3f0() {
   return (neuron0x328bcb0()*-0.0179021);
}

double NNfunction_nn_chi1_chi3::synapse0x329d430() {
   return (neuron0x328bff0()*0.000132873);
}

double NNfunction_nn_chi1_chi3::synapse0x329d470() {
   return (neuron0x328c330()*-0.00041586);
}

double NNfunction_nn_chi1_chi3::synapse0x329d4b0() {
   return (neuron0x328c670()*-0.0198757);
}

double NNfunction_nn_chi1_chi3::synapse0x329d4f0() {
   return (neuron0x328c9b0()*0.0158575);
}

double NNfunction_nn_chi1_chi3::synapse0x329d530() {
   return (neuron0x328ccf0()*-1.00517);
}

double NNfunction_nn_chi1_chi3::synapse0x329d8b0() {
   return (neuron0x32880a0()*-1.03348);
}

double NNfunction_nn_chi1_chi3::synapse0x329d8f0() {
   return (neuron0x3288350()*-0.823451);
}

double NNfunction_nn_chi1_chi3::synapse0x329d930() {
   return (neuron0x3288690()*0.0754522);
}

double NNfunction_nn_chi1_chi3::synapse0x329d970() {
   return (neuron0x32889d0()*0.0653762);
}

double NNfunction_nn_chi1_chi3::synapse0x329d9b0() {
   return (neuron0x3288d10()*-0.52591);
}

double NNfunction_nn_chi1_chi3::synapse0x329d9f0() {
   return (neuron0x3289050()*0.791081);
}

double NNfunction_nn_chi1_chi3::synapse0x329da30() {
   return (neuron0x3289390()*0.127962);
}

double NNfunction_nn_chi1_chi3::synapse0x329da70() {
   return (neuron0x32896d0()*-1.79207);
}

double NNfunction_nn_chi1_chi3::synapse0x329dab0() {
   return (neuron0x3289a10()*-0.234363);
}

double NNfunction_nn_chi1_chi3::synapse0x329daf0() {
   return (neuron0x3289d50()*0.198623);
}

double NNfunction_nn_chi1_chi3::synapse0x329db30() {
   return (neuron0x328a090()*0.890814);
}

double NNfunction_nn_chi1_chi3::synapse0x329db70() {
   return (neuron0x328a3d0()*0.996555);
}

double NNfunction_nn_chi1_chi3::synapse0x329dbb0() {
   return (neuron0x328a710()*-1.2478);
}

double NNfunction_nn_chi1_chi3::synapse0x329dbf0() {
   return (neuron0x328aa50()*0.519022);
}

double NNfunction_nn_chi1_chi3::synapse0x329dc30() {
   return (neuron0x328ad90()*0.469779);
}

double NNfunction_nn_chi1_chi3::synapse0x329dc70() {
   return (neuron0x328b0d0()*0.770616);
}

double NNfunction_nn_chi1_chi3::synapse0x329d700() {
   return (neuron0x328b410()*0.751531);
}

double NNfunction_nn_chi1_chi3::synapse0x329d740() {
   return (neuron0x328b970()*0.509132);
}

double NNfunction_nn_chi1_chi3::synapse0x329ddc0() {
   return (neuron0x328bcb0()*0.840913);
}

double NNfunction_nn_chi1_chi3::synapse0x329de00() {
   return (neuron0x328bff0()*-0.53398);
}

double NNfunction_nn_chi1_chi3::synapse0x329de40() {
   return (neuron0x328c330()*-0.612197);
}

double NNfunction_nn_chi1_chi3::synapse0x329de80() {
   return (neuron0x328c670()*-0.888826);
}

double NNfunction_nn_chi1_chi3::synapse0x329dec0() {
   return (neuron0x328c9b0()*0.46244);
}

double NNfunction_nn_chi1_chi3::synapse0x329df00() {
   return (neuron0x328ccf0()*1.0612);
}

double NNfunction_nn_chi1_chi3::synapse0x329e280() {
   return (neuron0x32880a0()*-0.010709);
}

double NNfunction_nn_chi1_chi3::synapse0x329e2c0() {
   return (neuron0x3288350()*-0.0318621);
}

double NNfunction_nn_chi1_chi3::synapse0x329e300() {
   return (neuron0x3288690()*0.951233);
}

double NNfunction_nn_chi1_chi3::synapse0x329e340() {
   return (neuron0x32889d0()*0.00860658);
}

double NNfunction_nn_chi1_chi3::synapse0x329e380() {
   return (neuron0x3288d10()*0.00261272);
}

double NNfunction_nn_chi1_chi3::synapse0x329e3c0() {
   return (neuron0x3289050()*-0.00131641);
}

double NNfunction_nn_chi1_chi3::synapse0x329e400() {
   return (neuron0x3289390()*0.00579851);
}

double NNfunction_nn_chi1_chi3::synapse0x329e440() {
   return (neuron0x32896d0()*-0.0545601);
}

double NNfunction_nn_chi1_chi3::synapse0x329e480() {
   return (neuron0x3289a10()*-0.00583032);
}

double NNfunction_nn_chi1_chi3::synapse0x329e4c0() {
   return (neuron0x3289d50()*0.0184518);
}

double NNfunction_nn_chi1_chi3::synapse0x329e500() {
   return (neuron0x328a090()*0.00323857);
}

double NNfunction_nn_chi1_chi3::synapse0x329e540() {
   return (neuron0x328a3d0()*0.0567667);
}

double NNfunction_nn_chi1_chi3::synapse0x329e580() {
   return (neuron0x328a710()*0.0231929);
}

double NNfunction_nn_chi1_chi3::synapse0x329e5c0() {
   return (neuron0x328aa50()*-0.0105653);
}

double NNfunction_nn_chi1_chi3::synapse0x329e600() {
   return (neuron0x328ad90()*0.0364188);
}

double NNfunction_nn_chi1_chi3::synapse0x329e640() {
   return (neuron0x328b0d0()*-0.0156694);
}

double NNfunction_nn_chi1_chi3::synapse0x329e0d0() {
   return (neuron0x328b410()*-0.00810899);
}

double NNfunction_nn_chi1_chi3::synapse0x329e110() {
   return (neuron0x328b970()*-0.0297989);
}

double NNfunction_nn_chi1_chi3::synapse0x329e790() {
   return (neuron0x328bcb0()*-0.00290656);
}

double NNfunction_nn_chi1_chi3::synapse0x329e7d0() {
   return (neuron0x328bff0()*-0.0336554);
}

double NNfunction_nn_chi1_chi3::synapse0x329e810() {
   return (neuron0x328c330()*0.00187132);
}

double NNfunction_nn_chi1_chi3::synapse0x329e850() {
   return (neuron0x328c670()*-0.026591);
}

double NNfunction_nn_chi1_chi3::synapse0x329e890() {
   return (neuron0x328c9b0()*-0.00188134);
}

double NNfunction_nn_chi1_chi3::synapse0x329e8d0() {
   return (neuron0x328ccf0()*5.424);
}

double NNfunction_nn_chi1_chi3::synapse0x32b07a0() {
   return (neuron0x32880a0()*0.000826683);
}

double NNfunction_nn_chi1_chi3::synapse0x32b07e0() {
   return (neuron0x3288350()*9.17476);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0820() {
   return (neuron0x3288690()*0.298871);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0860() {
   return (neuron0x32889d0()*-0.0483252);
}

double NNfunction_nn_chi1_chi3::synapse0x32b08a0() {
   return (neuron0x3288d10()*-0.00247389);
}

double NNfunction_nn_chi1_chi3::synapse0x32b08e0() {
   return (neuron0x3289050()*-0.00897134);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0920() {
   return (neuron0x3289390()*-0.0114931);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0960() {
   return (neuron0x32896d0()*0.00375381);
}

double NNfunction_nn_chi1_chi3::synapse0x32b09a0() {
   return (neuron0x3289a10()*-0.00582038);
}

double NNfunction_nn_chi1_chi3::synapse0x32b09e0() {
   return (neuron0x3289d50()*-0.011286);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0a20() {
   return (neuron0x328a090()*-0.0113898);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0a60() {
   return (neuron0x328a3d0()*-0.0674096);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0aa0() {
   return (neuron0x328a710()*-0.0138102);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0ae0() {
   return (neuron0x328aa50()*0.0387958);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0b20() {
   return (neuron0x328ad90()*0.0240154);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0b60() {
   return (neuron0x328b0d0()*0.0217219);
}

double NNfunction_nn_chi1_chi3::synapse0x329e910() {
   return (neuron0x328b410()*0.00429661);
}

double NNfunction_nn_chi1_chi3::synapse0x329e950() {
   return (neuron0x328b970()*-0.0124857);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0cb0() {
   return (neuron0x328bcb0()*0.0207422);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0cf0() {
   return (neuron0x328bff0()*-0.0157466);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0d30() {
   return (neuron0x328c330()*0.00496535);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0d70() {
   return (neuron0x328c670()*-0.012869);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0db0() {
   return (neuron0x328c9b0()*-0.0101826);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0df0() {
   return (neuron0x328ccf0()*0.626689);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1170() {
   return (neuron0x32880a0()*0.0908228);
}

double NNfunction_nn_chi1_chi3::synapse0x32b11b0() {
   return (neuron0x3288350()*0.100979);
}

double NNfunction_nn_chi1_chi3::synapse0x32b11f0() {
   return (neuron0x3288690()*4.50509);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1230() {
   return (neuron0x32889d0()*-0.0905759);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1270() {
   return (neuron0x3288d10()*0.000208582);
}

double NNfunction_nn_chi1_chi3::synapse0x32b12b0() {
   return (neuron0x3289050()*0.161205);
}

double NNfunction_nn_chi1_chi3::synapse0x32b12f0() {
   return (neuron0x3289390()*0.0308006);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1330() {
   return (neuron0x32896d0()*0.0515756);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1370() {
   return (neuron0x3289a10()*0.14497);
}

double NNfunction_nn_chi1_chi3::synapse0x32b13b0() {
   return (neuron0x3289d50()*0.165928);
}

double NNfunction_nn_chi1_chi3::synapse0x32b13f0() {
   return (neuron0x328a090()*-0.110609);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1430() {
   return (neuron0x328a3d0()*-0.143318);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1470() {
   return (neuron0x328a710()*0.317214);
}

double NNfunction_nn_chi1_chi3::synapse0x32b14b0() {
   return (neuron0x328aa50()*-0.0815042);
}

double NNfunction_nn_chi1_chi3::synapse0x32b14f0() {
   return (neuron0x328ad90()*0.0775741);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1530() {
   return (neuron0x328b0d0()*0.148562);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0fc0() {
   return (neuron0x328b410()*0.00172135);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1000() {
   return (neuron0x328b970()*0.109519);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1680() {
   return (neuron0x328bcb0()*0.0397219);
}

double NNfunction_nn_chi1_chi3::synapse0x32b16c0() {
   return (neuron0x328bff0()*0.208425);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1700() {
   return (neuron0x328c330()*-0.0636536);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1740() {
   return (neuron0x328c670()*0.0138304);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1780() {
   return (neuron0x328c9b0()*0.00508562);
}

double NNfunction_nn_chi1_chi3::synapse0x32b17c0() {
   return (neuron0x328ccf0()*3.02277);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1b40() {
   return (neuron0x32880a0()*2.09428);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1b80() {
   return (neuron0x3288350()*0.635277);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1bc0() {
   return (neuron0x3288690()*0.780593);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1c00() {
   return (neuron0x32889d0()*-0.523634);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1c40() {
   return (neuron0x3288d10()*0.620062);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1c80() {
   return (neuron0x3289050()*1.04353);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1cc0() {
   return (neuron0x3289390()*-0.916304);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1d00() {
   return (neuron0x32896d0()*0.134999);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1d40() {
   return (neuron0x3289a10()*0.129995);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1d80() {
   return (neuron0x3289d50()*-1.20777);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1dc0() {
   return (neuron0x328a090()*-0.730569);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1e00() {
   return (neuron0x328a3d0()*-0.0866191);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1e40() {
   return (neuron0x328a710()*0.480816);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1e80() {
   return (neuron0x328aa50()*-1.35235);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1ec0() {
   return (neuron0x328ad90()*-1.36648);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1f00() {
   return (neuron0x328b0d0()*1.30185);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1990() {
   return (neuron0x328b410()*0.529981);
}

double NNfunction_nn_chi1_chi3::synapse0x32b19d0() {
   return (neuron0x328b970()*0.577877);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2050() {
   return (neuron0x328bcb0()*-2.07135);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2090() {
   return (neuron0x328bff0()*1.90464);
}

double NNfunction_nn_chi1_chi3::synapse0x32b20d0() {
   return (neuron0x328c330()*-1.41046);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2110() {
   return (neuron0x328c670()*-2.06703);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2150() {
   return (neuron0x328c9b0()*-3.06484);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2190() {
   return (neuron0x328ccf0()*-0.679191);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2510() {
   return (neuron0x32880a0()*-0.0459275);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2550() {
   return (neuron0x3288350()*-10.143);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2590() {
   return (neuron0x3288690()*0.21123);
}

double NNfunction_nn_chi1_chi3::synapse0x32b25d0() {
   return (neuron0x32889d0()*-0.0588621);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2610() {
   return (neuron0x3288d10()*-0.0100211);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2650() {
   return (neuron0x3289050()*-0.00112118);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2690() {
   return (neuron0x3289390()*-0.00862827);
}

double NNfunction_nn_chi1_chi3::synapse0x32b26d0() {
   return (neuron0x32896d0()*0.0163113);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2710() {
   return (neuron0x3289a10()*0.00845513);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2750() {
   return (neuron0x3289d50()*-0.00985698);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2790() {
   return (neuron0x328a090()*0.0333867);
}

double NNfunction_nn_chi1_chi3::synapse0x32b27d0() {
   return (neuron0x328a3d0()*-0.0230562);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2810() {
   return (neuron0x328a710()*0.00361548);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2850() {
   return (neuron0x328aa50()*0.0179522);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2890() {
   return (neuron0x328ad90()*-0.0399364);
}

double NNfunction_nn_chi1_chi3::synapse0x32b28d0() {
   return (neuron0x328b0d0()*-0.0179677);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2360() {
   return (neuron0x328b410()*-0.0231298);
}

double NNfunction_nn_chi1_chi3::synapse0x32b23a0() {
   return (neuron0x328b970()*-0.0282877);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2a20() {
   return (neuron0x328bcb0()*0.0153056);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2a60() {
   return (neuron0x328bff0()*0.0288975);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2aa0() {
   return (neuron0x328c330()*-0.0034894);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2ae0() {
   return (neuron0x328c670()*0.00714572);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2b20() {
   return (neuron0x328c9b0()*-0.028221);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2b60() {
   return (neuron0x328ccf0()*-2.86487);
}

double NNfunction_nn_chi1_chi3::synapse0x3052930() {
   return (neuron0x328d160()*0.198088);
}

double NNfunction_nn_chi1_chi3::synapse0x3052970() {
   return (neuron0x328d9a0()*-0.0218565);
}

double NNfunction_nn_chi1_chi3::synapse0x328f510() {
   return (neuron0x328e480()*-0.263078);
}

double NNfunction_nn_chi1_chi3::synapse0x328f550() {
   return (neuron0x328df20()*-0.0759111);
}

double NNfunction_nn_chi1_chi3::synapse0x3290fe0() {
   return (neuron0x328f260()*-0.293326);
}

double NNfunction_nn_chi1_chi3::synapse0x3291020() {
   return (neuron0x3290d30()*1.30521);
}

double NNfunction_nn_chi1_chi3::synapse0x3291db0() {
   return (neuron0x3291b00()*2.83248);
}

double NNfunction_nn_chi1_chi3::synapse0x3291df0() {
   return (neuron0x32924d0()*1.13419);
}

double NNfunction_nn_chi1_chi3::synapse0x3292780() {
   return (neuron0x3292ea0()*-1.32901);
}

double NNfunction_nn_chi1_chi3::synapse0x32927c0() {
   return (neuron0x3293980()*0.293486);
}

double NNfunction_nn_chi1_chi3::synapse0x3293150() {
   return (neuron0x3294350()*-0.510228);
}

double NNfunction_nn_chi1_chi3::synapse0x3293190() {
   return (neuron0x3291430()*-1.88242);
}

double NNfunction_nn_chi1_chi3::synapse0x3293c30() {
   return (neuron0x3295f00()*2.10416);
}

double NNfunction_nn_chi1_chi3::synapse0x3293c70() {
   return (neuron0x32968d0()*0.233951);
}

double NNfunction_nn_chi1_chi3::synapse0x3294600() {
   return (neuron0x32972a0()*-1.64174);
}

double NNfunction_nn_chi1_chi3::synapse0x3294640() {
   return (neuron0x3297c70()*-4.48531);
}

double NNfunction_nn_chi1_chi3::synapse0x32916e0() {
   return (neuron0x3299a80()*0.812142);
}

double NNfunction_nn_chi1_chi3::synapse0x3291720() {
   return (neuron0x3299d60()*-0.688935);
}

double NNfunction_nn_chi1_chi3::synapse0x32961b0() {
   return (neuron0x329a730()*-0.000632733);
}

double NNfunction_nn_chi1_chi3::synapse0x32961f0() {
   return (neuron0x329b100()*1.80747);
}

double NNfunction_nn_chi1_chi3::synapse0x3296b80() {
   return (neuron0x329bad0()*2.65324);
}

double NNfunction_nn_chi1_chi3::synapse0x3296bc0() {
   return (neuron0x329c4a0()*-0.0916203);
}

double NNfunction_nn_chi1_chi3::synapse0x3297550() {
   return (neuron0x3294ff0()*-0.0321122);
}

double NNfunction_nn_chi1_chi3::synapse0x3297590() {
   return (neuron0x32959c0()*-0.0701634);
}

double NNfunction_nn_chi1_chi3::synapse0x3297f20() {
   return (neuron0x329f230()*-0.0194648);
}

double NNfunction_nn_chi1_chi3::synapse0x3297f60() {
   return (neuron0x329fc00()*-0.246571);
}

double NNfunction_nn_chi1_chi3::synapse0x328afb0() {
   return (neuron0x32a05d0()*-0.009829);
}

double NNfunction_nn_chi1_chi3::synapse0x328aff0() {
   return (neuron0x32a0fa0()*-0.061963);
}

double NNfunction_nn_chi1_chi3::synapse0x329a010() {
   return (neuron0x32a1970()*-0.0278286);
}

double NNfunction_nn_chi1_chi3::synapse0x329a050() {
   return (neuron0x32a2340()*-2.88922);
}

double NNfunction_nn_chi1_chi3::synapse0x329a9e0() {
   return (neuron0x32a2d10()*-0.0629128);
}

double NNfunction_nn_chi1_chi3::synapse0x329aa20() {
   return (neuron0x32a36e0()*1.28906);
}

double NNfunction_nn_chi1_chi3::synapse0x329b3b0() {
   return (neuron0x3299770()*-1.96048);
}

double NNfunction_nn_chi1_chi3::synapse0x329b3f0() {
   return (neuron0x32a62c0()*-1.77058);
}

double NNfunction_nn_chi1_chi3::synapse0x329bd80() {
   return (neuron0x32a6c90()*1.33331);
}

double NNfunction_nn_chi1_chi3::synapse0x329bdc0() {
   return (neuron0x32a7660()*0.0287898);
}

double NNfunction_nn_chi1_chi3::synapse0x329c750() {
   return (neuron0x32a8030()*-0.0462162);
}

double NNfunction_nn_chi1_chi3::synapse0x329c790() {
   return (neuron0x32a8a00()*-1.97415);
}

double NNfunction_nn_chi1_chi3::synapse0x32952a0() {
   return (neuron0x32a93d0()*-0.00796068);
}

double NNfunction_nn_chi1_chi3::synapse0x32952e0() {
   return (neuron0x32a9da0()*-0.0958865);
}

double NNfunction_nn_chi1_chi3::synapse0x329eb50() {
   return (neuron0x32aa770()*0.446639);
}

double NNfunction_nn_chi1_chi3::synapse0x329eb90() {
   return (neuron0x32ab350()*-0.523822);
}

double NNfunction_nn_chi1_chi3::synapse0x329f4e0() {
   return (neuron0x32abd20()*-0.0671914);
}

double NNfunction_nn_chi1_chi3::synapse0x329f520() {
   return (neuron0x329cba0()*-0.718914);
}

double NNfunction_nn_chi1_chi3::synapse0x329feb0() {
   return (neuron0x329d570()*-0.321331);
}

double NNfunction_nn_chi1_chi3::synapse0x329fef0() {
   return (neuron0x329df40()*2.53434);
}

double NNfunction_nn_chi1_chi3::synapse0x32a0880() {
   return (neuron0x32b0580()*1.87835);
}

double NNfunction_nn_chi1_chi3::synapse0x32a08c0() {
   return (neuron0x32b0e30()*-1.86252);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1250() {
   return (neuron0x32b1800()*-0.077002);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1290() {
   return (neuron0x32b21d0()*1.45541);
}

double NNfunction_nn_chi1_chi3::synapse0x32a3990() {
   return (neuron0x328d160()*0.797137);
}

double NNfunction_nn_chi1_chi3::synapse0x32a39d0() {
   return (neuron0x328d9a0()*-0.134897);
}

double NNfunction_nn_chi1_chi3::synapse0x3298f50() {
   return (neuron0x328e480()*-0.73152);
}

double NNfunction_nn_chi1_chi3::synapse0x3298f90() {
   return (neuron0x328df20()*0.160541);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6570() {
   return (neuron0x328f260()*-0.876302);
}

double NNfunction_nn_chi1_chi3::synapse0x32a65b0() {
   return (neuron0x3290d30()*-2.76633);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6f40() {
   return (neuron0x3291b00()*-1.64038);
}

double NNfunction_nn_chi1_chi3::synapse0x32a6f80() {
   return (neuron0x32924d0()*2.21257);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7910() {
   return (neuron0x3292ea0()*-0.288818);
}

double NNfunction_nn_chi1_chi3::synapse0x32a7950() {
   return (neuron0x3293980()*1.08451);
}

double NNfunction_nn_chi1_chi3::synapse0x32a82e0() {
   return (neuron0x3294350()*0.115421);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8320() {
   return (neuron0x3291430()*-0.235911);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8cb0() {
   return (neuron0x3295f00()*-0.867844);
}

double NNfunction_nn_chi1_chi3::synapse0x32a8cf0() {
   return (neuron0x32968d0()*0.731405);
}

double NNfunction_nn_chi1_chi3::synapse0x32a9680() {
   return (neuron0x32972a0()*4.28602);
}

double NNfunction_nn_chi1_chi3::synapse0x32a96c0() {
   return (neuron0x3297c70()*1.30703);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa050() {
   return (neuron0x3299a80()*-0.152987);
}

double NNfunction_nn_chi1_chi3::synapse0x32aa090() {
   return (neuron0x3299d60()*3.0258);
}

double NNfunction_nn_chi1_chi3::synapse0x32aaa20() {
   return (neuron0x329a730()*-0.173913);
}

double NNfunction_nn_chi1_chi3::synapse0x32aaa60() {
   return (neuron0x329b100()*3.8947);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab600() {
   return (neuron0x329bad0()*-0.71252);
}

double NNfunction_nn_chi1_chi3::synapse0x32ab640() {
   return (neuron0x329c4a0()*0.402565);
}

double NNfunction_nn_chi1_chi3::synapse0x32abfd0() {
   return (neuron0x3294ff0()*0.162025);
}

double NNfunction_nn_chi1_chi3::synapse0x32ac010() {
   return (neuron0x32959c0()*-0.199492);
}

double NNfunction_nn_chi1_chi3::synapse0x329ce50() {
   return (neuron0x329f230()*-0.176955);
}

double NNfunction_nn_chi1_chi3::synapse0x329ce90() {
   return (neuron0x329fc00()*0.132068);
}

double NNfunction_nn_chi1_chi3::synapse0x329d820() {
   return (neuron0x32a05d0()*-0.115674);
}

double NNfunction_nn_chi1_chi3::synapse0x329d860() {
   return (neuron0x32a0fa0()*-0.0873949);
}

double NNfunction_nn_chi1_chi3::synapse0x329e1f0() {
   return (neuron0x32a1970()*-0.129283);
}

double NNfunction_nn_chi1_chi3::synapse0x329e230() {
   return (neuron0x32a2340()*-2.47461);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0710() {
   return (neuron0x32a2d10()*0.0785679);
}

double NNfunction_nn_chi1_chi3::synapse0x32b0750() {
   return (neuron0x32a36e0()*2.1477);
}

double NNfunction_nn_chi1_chi3::synapse0x32b10e0() {
   return (neuron0x3299770()*-1.21108);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1120() {
   return (neuron0x32a62c0()*4.89772);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1ab0() {
   return (neuron0x32a6c90()*-0.903925);
}

double NNfunction_nn_chi1_chi3::synapse0x32b1af0() {
   return (neuron0x32a7660()*-0.173692);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2480() {
   return (neuron0x32a8030()*-0.00606827);
}

double NNfunction_nn_chi1_chi3::synapse0x32b24c0() {
   return (neuron0x32a8a00()*0.34591);
}

double NNfunction_nn_chi1_chi3::synapse0x328d410() {
   return (neuron0x32a93d0()*-0.290982);
}

double NNfunction_nn_chi1_chi3::synapse0x328d450() {
   return (neuron0x32a9da0()*-0.256485);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1c20() {
   return (neuron0x32aa770()*0.816687);
}

double NNfunction_nn_chi1_chi3::synapse0x32a1c60() {
   return (neuron0x32ab350()*-0.351375);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2ba0() {
   return (neuron0x32abd20()*-0.0138529);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2be0() {
   return (neuron0x329cba0()*0.662793);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2c20() {
   return (neuron0x329d570()*-0.700669);
}

double NNfunction_nn_chi1_chi3::synapse0x32b2c60() {
   return (neuron0x329df40()*1.55727);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9b10() {
   return (neuron0x32b0580()*-4.29338);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9b50() {
   return (neuron0x32b0e30()*0.234014);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9b90() {
   return (neuron0x32b1800()*-0.159087);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9bd0() {
   return (neuron0x32b21d0()*-1.69671);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9f50() {
   return (neuron0x328d160()*1.06979);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9f90() {
   return (neuron0x328d9a0()*-0.110935);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9fd0() {
   return (neuron0x328e480()*-0.390703);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba010() {
   return (neuron0x328df20()*0.0534171);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba050() {
   return (neuron0x328f260()*-0.44744);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba090() {
   return (neuron0x3290d30()*-1.20465);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba0d0() {
   return (neuron0x3291b00()*-1.08365);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba110() {
   return (neuron0x32924d0()*0.640254);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba150() {
   return (neuron0x3292ea0()*-0.112757);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba190() {
   return (neuron0x3293980()*0.140479);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba1d0() {
   return (neuron0x3294350()*4.16714);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba210() {
   return (neuron0x3291430()*-2.38705);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba250() {
   return (neuron0x3295f00()*3.25588);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba290() {
   return (neuron0x32968d0()*0.238762);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba2d0() {
   return (neuron0x32972a0()*0.599126);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba310() {
   return (neuron0x3297c70()*-0.125686);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9da0() {
   return (neuron0x3299a80()*-5.16499);
}

double NNfunction_nn_chi1_chi3::synapse0x32b9de0() {
   return (neuron0x3299d60()*-0.592202);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba460() {
   return (neuron0x329a730()*-0.152193);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba4a0() {
   return (neuron0x329b100()*3.20037);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba4e0() {
   return (neuron0x329bad0()*-0.606269);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba520() {
   return (neuron0x329c4a0()*-1.02303);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba560() {
   return (neuron0x3294ff0()*-0.0110704);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba5a0() {
   return (neuron0x32959c0()*-0.0672485);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba5e0() {
   return (neuron0x329f230()*-0.113217);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba620() {
   return (neuron0x329fc00()*0.0580374);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba660() {
   return (neuron0x32a05d0()*-0.0463978);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba6a0() {
   return (neuron0x32a0fa0()*-0.13693);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba6e0() {
   return (neuron0x32a1970()*-0.0644234);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba720() {
   return (neuron0x32a2340()*1.06037);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba760() {
   return (neuron0x32a2d10()*0.0852179);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba7a0() {
   return (neuron0x32a36e0()*-0.367277);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba350() {
   return (neuron0x3299770()*-0.345063);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba390() {
   return (neuron0x32a62c0()*5.42181);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba3d0() {
   return (neuron0x32a6c90()*7.46456);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba410() {
   return (neuron0x32a7660()*-0.0564582);
}

double NNfunction_nn_chi1_chi3::synapse0x32ba9f0() {
   return (neuron0x32a8030()*-0.0737555);
}

double NNfunction_nn_chi1_chi3::synapse0x32baa30() {
   return (neuron0x32a8a00()*1.63132);
}

double NNfunction_nn_chi1_chi3::synapse0x32baa70() {
   return (neuron0x32a93d0()*-0.104575);
}

double NNfunction_nn_chi1_chi3::synapse0x32baab0() {
   return (neuron0x32a9da0()*-0.0441477);
}

double NNfunction_nn_chi1_chi3::synapse0x32baaf0() {
   return (neuron0x32aa770()*-0.159111);
}

double NNfunction_nn_chi1_chi3::synapse0x32bab30() {
   return (neuron0x32ab350()*-3.89603);
}

double NNfunction_nn_chi1_chi3::synapse0x32bab70() {
   return (neuron0x32abd20()*-0.11239);
}

double NNfunction_nn_chi1_chi3::synapse0x32babb0() {
   return (neuron0x329cba0()*0.916739);
}

double NNfunction_nn_chi1_chi3::synapse0x32babf0() {
   return (neuron0x329d570()*-0.269222);
}

double NNfunction_nn_chi1_chi3::synapse0x32bac30() {
   return (neuron0x329df40()*2.01546);
}

double NNfunction_nn_chi1_chi3::synapse0x32bac70() {
   return (neuron0x32b0580()*-2.39075);
}

double NNfunction_nn_chi1_chi3::synapse0x32bacb0() {
   return (neuron0x32b0e30()*-1.74615);
}

double NNfunction_nn_chi1_chi3::synapse0x32bacf0() {
   return (neuron0x32b1800()*-0.112019);
}

double NNfunction_nn_chi1_chi3::synapse0x32bad30() {
   return (neuron0x32b21d0()*-1.58641);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb0b0() {
   return (neuron0x328d160()*0.142659);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb0f0() {
   return (neuron0x328d9a0()*0.0703926);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb130() {
   return (neuron0x328e480()*0.0196664);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb170() {
   return (neuron0x328df20()*-0.02948);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb1b0() {
   return (neuron0x328f260()*0.0273327);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb1f0() {
   return (neuron0x3290d30()*-0.103917);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb230() {
   return (neuron0x3291b00()*-0.407024);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb270() {
   return (neuron0x32924d0()*0.677946);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb2b0() {
   return (neuron0x3292ea0()*-0.0715309);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb2f0() {
   return (neuron0x3293980()*1.60717);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb330() {
   return (neuron0x3294350()*-1.90536);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb370() {
   return (neuron0x3291430()*0.179734);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb3b0() {
   return (neuron0x3295f00()*-1.99919);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb3f0() {
   return (neuron0x32968d0()*-0.0278377);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb430() {
   return (neuron0x32972a0()*0.941274);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb470() {
   return (neuron0x3297c70()*7.38266);
}

double NNfunction_nn_chi1_chi3::synapse0x32baf00() {
   return (neuron0x3299a80()*-4.01559);
}

double NNfunction_nn_chi1_chi3::synapse0x32baf40() {
   return (neuron0x3299d60()*1.50352);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb5c0() {
   return (neuron0x329a730()*0.0670512);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb600() {
   return (neuron0x329b100()*-0.398311);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb640() {
   return (neuron0x329bad0()*0.598131);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb680() {
   return (neuron0x329c4a0()*1.00507);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb6c0() {
   return (neuron0x3294ff0()*-0.0029636);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb700() {
   return (neuron0x32959c0()*-0.0113189);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb740() {
   return (neuron0x329f230()*0.0243923);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb780() {
   return (neuron0x329fc00()*-0.130939);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb7c0() {
   return (neuron0x32a05d0()*-0.0578201);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb800() {
   return (neuron0x32a0fa0()*0.0557226);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb840() {
   return (neuron0x32a1970()*0.0217983);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb880() {
   return (neuron0x32a2340()*-2.77538);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb8c0() {
   return (neuron0x32a2d10()*-0.00551146);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb900() {
   return (neuron0x32a36e0()*-3.94598);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb4b0() {
   return (neuron0x3299770()*-0.129735);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb4f0() {
   return (neuron0x32a62c0()*2.14613);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb530() {
   return (neuron0x32a6c90()*-2.56094);
}

double NNfunction_nn_chi1_chi3::synapse0x32bb570() {
   return (neuron0x32a7660()*0.0239298);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbb50() {
   return (neuron0x32a8030()*0.0109883);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbb90() {
   return (neuron0x32a8a00()*-0.806062);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbbd0() {
   return (neuron0x32a93d0()*0.0399086);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbc10() {
   return (neuron0x32a9da0()*0.0133875);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbc50() {
   return (neuron0x32aa770()*0.054665);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbc90() {
   return (neuron0x32ab350()*0.234347);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbcd0() {
   return (neuron0x32abd20()*0.00191876);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbd10() {
   return (neuron0x329cba0()*1.29478);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbd50() {
   return (neuron0x329d570()*0.0142688);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbd90() {
   return (neuron0x329df40()*0.670718);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbdd0() {
   return (neuron0x32b0580()*1.09593);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbe10() {
   return (neuron0x32b0e30()*0.413044);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbe50() {
   return (neuron0x32b1800()*0.0215919);
}

double NNfunction_nn_chi1_chi3::synapse0x32bbe90() {
   return (neuron0x32b21d0()*0.00706171);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc210() {
   return (neuron0x328d160()*-1.06105);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc250() {
   return (neuron0x328d9a0()*-0.63391);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc290() {
   return (neuron0x328e480()*-1.68408);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc2d0() {
   return (neuron0x328df20()*0.825386);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc310() {
   return (neuron0x328f260()*-1.75218);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc350() {
   return (neuron0x3290d30()*15.2505);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc390() {
   return (neuron0x3291b00()*-2.18755);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc3d0() {
   return (neuron0x32924d0()*-8.08587);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc410() {
   return (neuron0x3292ea0()*0.494185);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc450() {
   return (neuron0x3293980()*0.239056);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc490() {
   return (neuron0x3294350()*2.2228);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc4d0() {
   return (neuron0x3291430()*-1.39042);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc510() {
   return (neuron0x3295f00()*3.89823);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc550() {
   return (neuron0x32968d0()*1.15884);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc590() {
   return (neuron0x32972a0()*0.335139);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc5d0() {
   return (neuron0x3297c70()*-5.38099);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc060() {
   return (neuron0x3299a80()*-1.79769);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc0a0() {
   return (neuron0x3299d60()*7.3623);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc720() {
   return (neuron0x329a730()*-0.522386);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc760() {
   return (neuron0x329b100()*3.82253);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc7a0() {
   return (neuron0x329bad0()*-11.2171);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc7e0() {
   return (neuron0x329c4a0()*-2.38834);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc820() {
   return (neuron0x3294ff0()*-0.435888);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc860() {
   return (neuron0x32959c0()*-0.551656);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc8a0() {
   return (neuron0x329f230()*-0.394982);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc8e0() {
   return (neuron0x329fc00()*0.872082);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc920() {
   return (neuron0x32a05d0()*-0.459521);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc960() {
   return (neuron0x32a0fa0()*-0.512326);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc9a0() {
   return (neuron0x32a1970()*-0.396742);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc9e0() {
   return (neuron0x32a2340()*3.0571);
}

double NNfunction_nn_chi1_chi3::synapse0x32bca20() {
   return (neuron0x32a2d10()*0.581396);
}

double NNfunction_nn_chi1_chi3::synapse0x32bca60() {
   return (neuron0x32a36e0()*-2.24159);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc610() {
   return (neuron0x3299770()*-5.81254);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc650() {
   return (neuron0x32a62c0()*-9.57124);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc690() {
   return (neuron0x32a6c90()*-5.608);
}

double NNfunction_nn_chi1_chi3::synapse0x32bc6d0() {
   return (neuron0x32a7660()*-0.393869);
}

double NNfunction_nn_chi1_chi3::synapse0x32bccb0() {
   return (neuron0x32a8030()*-0.517816);
}

double NNfunction_nn_chi1_chi3::synapse0x32bccf0() {
   return (neuron0x32a8a00()*0.385261);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcd30() {
   return (neuron0x32a93d0()*-0.837224);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcd70() {
   return (neuron0x32a9da0()*-0.321911);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcdb0() {
   return (neuron0x32aa770()*-7.4301);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcdf0() {
   return (neuron0x32ab350()*-0.88568);
}

double NNfunction_nn_chi1_chi3::synapse0x32bce30() {
   return (neuron0x32abd20()*-0.401461);
}

double NNfunction_nn_chi1_chi3::synapse0x32bce70() {
   return (neuron0x329cba0()*0.990065);
}

double NNfunction_nn_chi1_chi3::synapse0x32bceb0() {
   return (neuron0x329d570()*-1.27076);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcef0() {
   return (neuron0x329df40()*-8.72502);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcf30() {
   return (neuron0x32b0580()*9.11132);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcf70() {
   return (neuron0x32b0e30()*-0.182255);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcfb0() {
   return (neuron0x32b1800()*-0.390316);
}

double NNfunction_nn_chi1_chi3::synapse0x32bcff0() {
   return (neuron0x32b21d0()*4.71139);
}

double NNfunction_nn_chi1_chi3::synapse0x32bd250() {
   return (neuron0x32b93d0()*2.5486);
}

double NNfunction_nn_chi1_chi3::synapse0x32bd290() {
   return (neuron0x32b9770()*2.60855);
}

double NNfunction_nn_chi1_chi3::synapse0x32bd2d0() {
   return (neuron0x32b9c10()*-4.52399);
}

double NNfunction_nn_chi1_chi3::synapse0x32bd310() {
   return (neuron0x32bad70()*-5.71617);
}

double NNfunction_nn_chi1_chi3::synapse0x32bd350() {
   return (neuron0x32bbed0()*13.6936);
}

