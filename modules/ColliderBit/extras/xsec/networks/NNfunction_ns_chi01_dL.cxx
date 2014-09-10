#include "NNfunction_ns_chi01_dL.h"
#include <cmath>

double NNfunction_ns_chi01_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3126)/15.1485;
   input1 = (in1 - 25.6725)/998.804;
   input2 = (in2 - 475.192)/540.644;
   input3 = (in3 - 85.3502)/749.367;
   input4 = (in4 - 920.344)/877.754;
   input5 = (in5 - 781.273)/853.916;
   input6 = (in6 - 780.451)/851.153;
   input7 = (in7 - 794.555)/839.71;
   input8 = (in8 - 797.869)/881.821;
   input9 = (in9 - 788.526)/869.901;
   input10 = (in10 - 830.784)/880.664;
   input11 = (in11 - 359.304)/284.757;
   input12 = (in12 - 696.079)/762.579;
   input13 = (in13 - 501.202)/453.373;
   input14 = (in14 - 684.988)/710.675;
   input15 = (in15 - 689.977)/714.054;
   input16 = (in16 - 495.651)/487.906;
   input17 = (in17 - 720.802)/794.61;
   input18 = (in18 - 722.139)/797.259;
   input19 = (in19 - 745.294)/775.241;
   input20 = (in20 - -81.959)/452.294;
   input21 = (in21 - -102.82)/1042.14;
   input22 = (in22 - 1.79234)/1068.95;
   input23 = (in23 - -119.175)/580.06;
   switch(index) {
     case 0:
         return neuron0x317cb70();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.3126)/15.1485;
   input1 = (input[1] - 25.6725)/998.804;
   input2 = (input[2] - 475.192)/540.644;
   input3 = (input[3] - 85.3502)/749.367;
   input4 = (input[4] - 920.344)/877.754;
   input5 = (input[5] - 781.273)/853.916;
   input6 = (input[6] - 780.451)/851.153;
   input7 = (input[7] - 794.555)/839.71;
   input8 = (input[8] - 797.869)/881.821;
   input9 = (input[9] - 788.526)/869.901;
   input10 = (input[10] - 830.784)/880.664;
   input11 = (input[11] - 359.304)/284.757;
   input12 = (input[12] - 696.079)/762.579;
   input13 = (input[13] - 501.202)/453.373;
   input14 = (input[14] - 684.988)/710.675;
   input15 = (input[15] - 689.977)/714.054;
   input16 = (input[16] - 495.651)/487.906;
   input17 = (input[17] - 720.802)/794.61;
   input18 = (input[18] - 722.139)/797.259;
   input19 = (input[19] - 745.294)/775.241;
   input20 = (input[20] - -81.959)/452.294;
   input21 = (input[21] - -102.82)/1042.14;
   input22 = (input[22] - 1.79234)/1068.95;
   input23 = (input[23] - -119.175)/580.06;
   switch(index) {
     case 0:
         return neuron0x317cb70();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_dL::neuron0x3148d30() {
   return input0;
}

double NNfunction_ns_chi01_dL::neuron0x3148fe0() {
   return input1;
}

double NNfunction_ns_chi01_dL::neuron0x3149320() {
   return input2;
}

double NNfunction_ns_chi01_dL::neuron0x3149660() {
   return input3;
}

double NNfunction_ns_chi01_dL::neuron0x31499a0() {
   return input4;
}

double NNfunction_ns_chi01_dL::neuron0x3149ce0() {
   return input5;
}

double NNfunction_ns_chi01_dL::neuron0x314a020() {
   return input6;
}

double NNfunction_ns_chi01_dL::neuron0x314a360() {
   return input7;
}

double NNfunction_ns_chi01_dL::neuron0x314a6a0() {
   return input8;
}

double NNfunction_ns_chi01_dL::neuron0x314a9e0() {
   return input9;
}

double NNfunction_ns_chi01_dL::neuron0x314ad20() {
   return input10;
}

double NNfunction_ns_chi01_dL::neuron0x314b060() {
   return input11;
}

double NNfunction_ns_chi01_dL::neuron0x314b3a0() {
   return input12;
}

double NNfunction_ns_chi01_dL::neuron0x314b6e0() {
   return input13;
}

double NNfunction_ns_chi01_dL::neuron0x314ba20() {
   return input14;
}

double NNfunction_ns_chi01_dL::neuron0x314bd60() {
   return input15;
}

double NNfunction_ns_chi01_dL::neuron0x314c0a0() {
   return input16;
}

double NNfunction_ns_chi01_dL::neuron0x314c600() {
   return input17;
}

double NNfunction_ns_chi01_dL::neuron0x314c820() {
   return input18;
}

double NNfunction_ns_chi01_dL::neuron0x314cb60() {
   return input19;
}

double NNfunction_ns_chi01_dL::neuron0x314cea0() {
   return input20;
}

double NNfunction_ns_chi01_dL::neuron0x314d1e0() {
   return input21;
}

double NNfunction_ns_chi01_dL::neuron0x314d520() {
   return input22;
}

double NNfunction_ns_chi01_dL::neuron0x314d860() {
   return input23;
}

double NNfunction_ns_chi01_dL::input0x314dcd0() {
   double input = 0.334753;
   input += synapse0x3148cb0();
   input += synapse0x3148cf0();
   input += synapse0x314df80();
   input += synapse0x314dfc0();
   input += synapse0x314e000();
   input += synapse0x314e040();
   input += synapse0x314e080();
   input += synapse0x314e0c0();
   input += synapse0x314e100();
   input += synapse0x314e140();
   input += synapse0x314e180();
   input += synapse0x314e1c0();
   input += synapse0x314e200();
   input += synapse0x314e240();
   input += synapse0x314e280();
   input += synapse0x314e2c0();
   input += synapse0x3148c20();
   input += synapse0x3148c60();
   input += synapse0x2f03df0();
   input += synapse0x2f03e30();
   input += synapse0x314e520();
   input += synapse0x314e560();
   input += synapse0x314e5a0();
   input += synapse0x314e5e0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x314dcd0() {
   double input = input0x314dcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x314e620() {
   double input = -1.9167;
   input += synapse0x314e960();
   input += synapse0x314e9a0();
   input += synapse0x314e9e0();
   input += synapse0x314ea20();
   input += synapse0x314ea60();
   input += synapse0x314eaa0();
   input += synapse0x314eae0();
   input += synapse0x314eb20();
   input += synapse0x314eb60();
   input += synapse0x314e410();
   input += synapse0x314e450();
   input += synapse0x314e490();
   input += synapse0x314e4d0();
   input += synapse0x314edb0();
   input += synapse0x314edf0();
   input += synapse0x314ee30();
   input += synapse0x314e7b0();
   input += synapse0x314e7f0();
   input += synapse0x314ef80();
   input += synapse0x314efc0();
   input += synapse0x314f000();
   input += synapse0x314f040();
   input += synapse0x314f080();
   input += synapse0x314f0c0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x314e620() {
   double input = input0x314e620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x314f100() {
   double input = 0.388039;
   input += synapse0x314f440();
   input += synapse0x314f480();
   input += synapse0x314f4c0();
   input += synapse0x314f500();
   input += synapse0x314f540();
   input += synapse0x314f580();
   input += synapse0x314f5c0();
   input += synapse0x314f600();
   input += synapse0x314f640();
   input += synapse0x314f680();
   input += synapse0x314f6c0();
   input += synapse0x314f700();
   input += synapse0x314f740();
   input += synapse0x314f780();
   input += synapse0x314f7c0();
   input += synapse0x314f800();
   input += synapse0x314f290();
   input += synapse0x314f2d0();
   input += synapse0x3137da0();
   input += synapse0x2f11cf0();
   input += synapse0x2f11d30();
   input += synapse0x302d240();
   input += synapse0x302d280();
   input += synapse0x3148a90();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x314f100() {
   double input = input0x314f100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x2f12450() {
   double input = 0.583501;
   input += synapse0x2f125e0();
   input += synapse0x314ecc0();
   input += synapse0x314ed00();
   input += synapse0x314ed40();
   input += synapse0x314f950();
   input += synapse0x314f990();
   input += synapse0x314f9d0();
   input += synapse0x314fa10();
   input += synapse0x314fa50();
   input += synapse0x314fa90();
   input += synapse0x314fad0();
   input += synapse0x314fb10();
   input += synapse0x314fb50();
   input += synapse0x314fb90();
   input += synapse0x314fbd0();
   input += synapse0x314fc10();
   input += synapse0x3148ad0();
   input += synapse0x3148b10();
   input += synapse0x3148b50();
   input += synapse0x314fd60();
   input += synapse0x314fda0();
   input += synapse0x314fde0();
   input += synapse0x314fe20();
   input += synapse0x314fe60();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x2f12450() {
   double input = input0x2f12450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x314fea0() {
   double input = 3.49953;
   input += synapse0x31501e0();
   input += synapse0x3150220();
   input += synapse0x3150260();
   input += synapse0x31502a0();
   input += synapse0x31502e0();
   input += synapse0x3150320();
   input += synapse0x3150360();
   input += synapse0x31503a0();
   input += synapse0x31503e0();
   input += synapse0x3150420();
   input += synapse0x3150460();
   input += synapse0x31504a0();
   input += synapse0x31504e0();
   input += synapse0x3150520();
   input += synapse0x3150560();
   input += synapse0x31505a0();
   input += synapse0x3150030();
   input += synapse0x3150070();
   input += synapse0x31506f0();
   input += synapse0x3150730();
   input += synapse0x3150770();
   input += synapse0x31507b0();
   input += synapse0x31507f0();
   input += synapse0x3150830();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x314fea0() {
   double input = input0x314fea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3150870() {
   double input = -0.0280209;
   input += synapse0x3150bb0();
   input += synapse0x3150bf0();
   input += synapse0x3150c30();
   input += synapse0x3150c70();
   input += synapse0x3150cb0();
   input += synapse0x3150cf0();
   input += synapse0x3150d30();
   input += synapse0x3150d70();
   input += synapse0x3150db0();
   input += synapse0x2f12040();
   input += synapse0x2f12080();
   input += synapse0x2f120c0();
   input += synapse0x2f12100();
   input += synapse0x2f12140();
   input += synapse0x2f12180();
   input += synapse0x2f121c0();
   input += synapse0x3150a00();
   input += synapse0x3150a40();
   input += synapse0x2f12310();
   input += synapse0x2f12350();
   input += synapse0x2f12390();
   input += synapse0x2f123d0();
   input += synapse0x2f12410();
   input += synapse0x3151600();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3150870() {
   double input = input0x3150870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3151640() {
   double input = 3.02788;
   input += synapse0x3151980();
   input += synapse0x31519c0();
   input += synapse0x3151a00();
   input += synapse0x3151a40();
   input += synapse0x3151a80();
   input += synapse0x3151ac0();
   input += synapse0x3151b00();
   input += synapse0x3151b40();
   input += synapse0x3151b80();
   input += synapse0x3151bc0();
   input += synapse0x3151c00();
   input += synapse0x3151c40();
   input += synapse0x3151c80();
   input += synapse0x3151cc0();
   input += synapse0x3151d00();
   input += synapse0x3151d40();
   input += synapse0x31517d0();
   input += synapse0x3151810();
   input += synapse0x3151e90();
   input += synapse0x3151ed0();
   input += synapse0x3151f10();
   input += synapse0x3151f50();
   input += synapse0x3151f90();
   input += synapse0x3151fd0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3151640() {
   double input = input0x3151640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3152010() {
   double input = 0.100714;
   input += synapse0x3152350();
   input += synapse0x3152390();
   input += synapse0x31523d0();
   input += synapse0x3152410();
   input += synapse0x3152450();
   input += synapse0x3152490();
   input += synapse0x31524d0();
   input += synapse0x3152510();
   input += synapse0x3152550();
   input += synapse0x3152590();
   input += synapse0x31525d0();
   input += synapse0x3152610();
   input += synapse0x3152650();
   input += synapse0x3152690();
   input += synapse0x31526d0();
   input += synapse0x3152710();
   input += synapse0x31521a0();
   input += synapse0x31521e0();
   input += synapse0x3152860();
   input += synapse0x31528a0();
   input += synapse0x31528e0();
   input += synapse0x3152920();
   input += synapse0x3152960();
   input += synapse0x31529a0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3152010() {
   double input = input0x3152010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31529e0() {
   double input = 0.214333;
   input += synapse0x314c4f0();
   input += synapse0x314c530();
   input += synapse0x314c570();
   input += synapse0x314c5b0();
   input += synapse0x3152f30();
   input += synapse0x3152f70();
   input += synapse0x3152fb0();
   input += synapse0x3152ff0();
   input += synapse0x3153030();
   input += synapse0x3153070();
   input += synapse0x31530b0();
   input += synapse0x31530f0();
   input += synapse0x3153130();
   input += synapse0x3153170();
   input += synapse0x31531b0();
   input += synapse0x31531f0();
   input += synapse0x3152b70();
   input += synapse0x3152bb0();
   input += synapse0x3153340();
   input += synapse0x3153380();
   input += synapse0x31533c0();
   input += synapse0x3153400();
   input += synapse0x3153440();
   input += synapse0x3153480();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31529e0() {
   double input = input0x31529e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31534c0() {
   double input = 0.628822;
   input += synapse0x3153800();
   input += synapse0x3153840();
   input += synapse0x3153880();
   input += synapse0x31538c0();
   input += synapse0x3153900();
   input += synapse0x3153940();
   input += synapse0x3153980();
   input += synapse0x31539c0();
   input += synapse0x3153a00();
   input += synapse0x3153a40();
   input += synapse0x3153a80();
   input += synapse0x3153ac0();
   input += synapse0x3153b00();
   input += synapse0x3153b40();
   input += synapse0x3153b80();
   input += synapse0x3153bc0();
   input += synapse0x3153650();
   input += synapse0x3153690();
   input += synapse0x3153d10();
   input += synapse0x3153d50();
   input += synapse0x3153d90();
   input += synapse0x3153dd0();
   input += synapse0x3153e10();
   input += synapse0x3153e50();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31534c0() {
   double input = input0x31534c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3153e90() {
   double input = -1.35699;
   input += synapse0x31541d0();
   input += synapse0x3154210();
   input += synapse0x3154250();
   input += synapse0x3154290();
   input += synapse0x31542d0();
   input += synapse0x3154310();
   input += synapse0x3154350();
   input += synapse0x3154390();
   input += synapse0x31543d0();
   input += synapse0x3154410();
   input += synapse0x3154450();
   input += synapse0x3154490();
   input += synapse0x31544d0();
   input += synapse0x3154510();
   input += synapse0x3154550();
   input += synapse0x3154590();
   input += synapse0x3154020();
   input += synapse0x3154060();
   input += synapse0x3150df0();
   input += synapse0x3150e30();
   input += synapse0x3150e70();
   input += synapse0x3150eb0();
   input += synapse0x3150ef0();
   input += synapse0x3150f30();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3153e90() {
   double input = input0x3153e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3150f70() {
   double input = 0.344783;
   input += synapse0x31512b0();
   input += synapse0x31512f0();
   input += synapse0x3151330();
   input += synapse0x3151370();
   input += synapse0x31513b0();
   input += synapse0x31513f0();
   input += synapse0x3151430();
   input += synapse0x3151470();
   input += synapse0x31514b0();
   input += synapse0x31514f0();
   input += synapse0x3151530();
   input += synapse0x3151570();
   input += synapse0x31515b0();
   input += synapse0x31556f0();
   input += synapse0x3155730();
   input += synapse0x3155770();
   input += synapse0x3151100();
   input += synapse0x3151140();
   input += synapse0x31558c0();
   input += synapse0x3155900();
   input += synapse0x3155940();
   input += synapse0x3155980();
   input += synapse0x31559c0();
   input += synapse0x3155a00();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3150f70() {
   double input = input0x3150f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3155a40() {
   double input = -3.73244;
   input += synapse0x3155d80();
   input += synapse0x3155dc0();
   input += synapse0x3155e00();
   input += synapse0x3155e40();
   input += synapse0x3155e80();
   input += synapse0x3155ec0();
   input += synapse0x3155f00();
   input += synapse0x3155f40();
   input += synapse0x3155f80();
   input += synapse0x3155fc0();
   input += synapse0x3156000();
   input += synapse0x3156040();
   input += synapse0x3156080();
   input += synapse0x31560c0();
   input += synapse0x3156100();
   input += synapse0x3156140();
   input += synapse0x3155bd0();
   input += synapse0x3155c10();
   input += synapse0x3156290();
   input += synapse0x31562d0();
   input += synapse0x3156310();
   input += synapse0x3156350();
   input += synapse0x3156390();
   input += synapse0x31563d0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3155a40() {
   double input = input0x3155a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3156410() {
   double input = -0.693868;
   input += synapse0x3156750();
   input += synapse0x3156790();
   input += synapse0x31567d0();
   input += synapse0x3156810();
   input += synapse0x3156850();
   input += synapse0x3156890();
   input += synapse0x31568d0();
   input += synapse0x3156910();
   input += synapse0x3156950();
   input += synapse0x3156990();
   input += synapse0x31569d0();
   input += synapse0x3156a10();
   input += synapse0x3156a50();
   input += synapse0x3156a90();
   input += synapse0x3156ad0();
   input += synapse0x3156b10();
   input += synapse0x31565a0();
   input += synapse0x31565e0();
   input += synapse0x3156c60();
   input += synapse0x3156ca0();
   input += synapse0x3156ce0();
   input += synapse0x3156d20();
   input += synapse0x3156d60();
   input += synapse0x3156da0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3156410() {
   double input = input0x3156410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3156de0() {
   double input = 1.2218;
   input += synapse0x3157120();
   input += synapse0x3157160();
   input += synapse0x31571a0();
   input += synapse0x31571e0();
   input += synapse0x3157220();
   input += synapse0x3157260();
   input += synapse0x31572a0();
   input += synapse0x31572e0();
   input += synapse0x3157320();
   input += synapse0x3157360();
   input += synapse0x31573a0();
   input += synapse0x31573e0();
   input += synapse0x3157420();
   input += synapse0x3157460();
   input += synapse0x31574a0();
   input += synapse0x31574e0();
   input += synapse0x3156f70();
   input += synapse0x3156fb0();
   input += synapse0x3157630();
   input += synapse0x3157670();
   input += synapse0x31576b0();
   input += synapse0x31576f0();
   input += synapse0x3157730();
   input += synapse0x3157770();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3156de0() {
   double input = input0x3156de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31577b0() {
   double input = 0.672993;
   input += synapse0x3157af0();
   input += synapse0x3148ec0();
   input += synapse0x3148f00();
   input += synapse0x3149200();
   input += synapse0x3149240();
   input += synapse0x3149540();
   input += synapse0x3149580();
   input += synapse0x3149880();
   input += synapse0x31498c0();
   input += synapse0x3149bc0();
   input += synapse0x3149c00();
   input += synapse0x3149f00();
   input += synapse0x3149f40();
   input += synapse0x314a240();
   input += synapse0x314a280();
   input += synapse0x314a580();
   input += synapse0x314a5c0();
   input += synapse0x314a8c0();
   input += synapse0x314a900();
   input += synapse0x314ac00();
   input += synapse0x314ac40();
   input += synapse0x314af40();
   input += synapse0x314af80();
   input += synapse0x314b280();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31577b0() {
   double input = input0x31577b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31595c0() {
   double input = -0.649221;
   input += synapse0x314b2c0();
   input += synapse0x314bf80();
   input += synapse0x314bfc0();
   input += synapse0x3157940();
   input += synapse0x3157980();
   input += synapse0x314c2c0();
   input += synapse0x314c300();
   input += synapse0x2f03cd0();
   input += synapse0x2f03d10();
   input += synapse0x314ca40();
   input += synapse0x314ca80();
   input += synapse0x314cd80();
   input += synapse0x314cdc0();
   input += synapse0x314d0c0();
   input += synapse0x314d100();
   input += synapse0x314d400();
   input += synapse0x314d440();
   input += synapse0x314d740();
   input += synapse0x314d780();
   input += synapse0x314da80();
   input += synapse0x314dac0();
   input += synapse0x314b5c0();
   input += synapse0x314b600();
   input += synapse0x3159860();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31595c0() {
   double input = input0x31595c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31598a0() {
   double input = 0.815952;
   input += synapse0x3159be0();
   input += synapse0x3159c20();
   input += synapse0x3159c60();
   input += synapse0x3159ca0();
   input += synapse0x3159ce0();
   input += synapse0x3159d20();
   input += synapse0x3159d60();
   input += synapse0x3159da0();
   input += synapse0x3159de0();
   input += synapse0x3159e20();
   input += synapse0x3159e60();
   input += synapse0x3159ea0();
   input += synapse0x3159ee0();
   input += synapse0x3159f20();
   input += synapse0x3159f60();
   input += synapse0x3159fa0();
   input += synapse0x3159a30();
   input += synapse0x3159a70();
   input += synapse0x315a0f0();
   input += synapse0x315a130();
   input += synapse0x315a170();
   input += synapse0x315a1b0();
   input += synapse0x315a1f0();
   input += synapse0x315a230();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31598a0() {
   double input = input0x31598a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315a270() {
   double input = 1.67052;
   input += synapse0x315a5b0();
   input += synapse0x315a5f0();
   input += synapse0x315a630();
   input += synapse0x315a670();
   input += synapse0x315a6b0();
   input += synapse0x315a6f0();
   input += synapse0x315a730();
   input += synapse0x315a770();
   input += synapse0x315a7b0();
   input += synapse0x315a7f0();
   input += synapse0x315a830();
   input += synapse0x315a870();
   input += synapse0x315a8b0();
   input += synapse0x315a8f0();
   input += synapse0x315a930();
   input += synapse0x315a970();
   input += synapse0x315a400();
   input += synapse0x315a440();
   input += synapse0x315aac0();
   input += synapse0x315ab00();
   input += synapse0x315ab40();
   input += synapse0x315ab80();
   input += synapse0x315abc0();
   input += synapse0x315ac00();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315a270() {
   double input = input0x315a270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315ac40() {
   double input = 1.11835;
   input += synapse0x315af80();
   input += synapse0x315afc0();
   input += synapse0x315b000();
   input += synapse0x315b040();
   input += synapse0x315b080();
   input += synapse0x315b0c0();
   input += synapse0x315b100();
   input += synapse0x315b140();
   input += synapse0x315b180();
   input += synapse0x315b1c0();
   input += synapse0x315b200();
   input += synapse0x315b240();
   input += synapse0x315b280();
   input += synapse0x315b2c0();
   input += synapse0x315b300();
   input += synapse0x315b340();
   input += synapse0x315add0();
   input += synapse0x315ae10();
   input += synapse0x315b490();
   input += synapse0x315b4d0();
   input += synapse0x315b510();
   input += synapse0x315b550();
   input += synapse0x315b590();
   input += synapse0x315b5d0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315ac40() {
   double input = input0x315ac40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315b610() {
   double input = -0.290307;
   input += synapse0x315b950();
   input += synapse0x315b990();
   input += synapse0x315b9d0();
   input += synapse0x315ba10();
   input += synapse0x315ba50();
   input += synapse0x315ba90();
   input += synapse0x315bad0();
   input += synapse0x315bb10();
   input += synapse0x315bb50();
   input += synapse0x315bb90();
   input += synapse0x315bbd0();
   input += synapse0x315bc10();
   input += synapse0x315bc50();
   input += synapse0x315bc90();
   input += synapse0x315bcd0();
   input += synapse0x315bd10();
   input += synapse0x315b7a0();
   input += synapse0x315b7e0();
   input += synapse0x315be60();
   input += synapse0x315bea0();
   input += synapse0x315bee0();
   input += synapse0x315bf20();
   input += synapse0x315bf60();
   input += synapse0x315bfa0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315b610() {
   double input = input0x315b610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315bfe0() {
   double input = 1.93746;
   input += synapse0x315c320();
   input += synapse0x315c360();
   input += synapse0x315c3a0();
   input += synapse0x315c3e0();
   input += synapse0x315c420();
   input += synapse0x315c460();
   input += synapse0x315c4a0();
   input += synapse0x315c4e0();
   input += synapse0x315c520();
   input += synapse0x31546e0();
   input += synapse0x3154720();
   input += synapse0x3154760();
   input += synapse0x31547a0();
   input += synapse0x31547e0();
   input += synapse0x3154820();
   input += synapse0x3154860();
   input += synapse0x315c170();
   input += synapse0x315c1b0();
   input += synapse0x31549b0();
   input += synapse0x31549f0();
   input += synapse0x3154a30();
   input += synapse0x3154a70();
   input += synapse0x3154ab0();
   input += synapse0x3154af0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315bfe0() {
   double input = input0x315bfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3154b30() {
   double input = 1.21927;
   input += synapse0x3154e70();
   input += synapse0x3154eb0();
   input += synapse0x3154ef0();
   input += synapse0x3154f30();
   input += synapse0x3154f70();
   input += synapse0x3154fb0();
   input += synapse0x3154ff0();
   input += synapse0x3155030();
   input += synapse0x3155070();
   input += synapse0x31550b0();
   input += synapse0x31550f0();
   input += synapse0x3155130();
   input += synapse0x3155170();
   input += synapse0x31551b0();
   input += synapse0x31551f0();
   input += synapse0x3155230();
   input += synapse0x3154cc0();
   input += synapse0x3154d00();
   input += synapse0x3155380();
   input += synapse0x31553c0();
   input += synapse0x3155400();
   input += synapse0x3155440();
   input += synapse0x3155480();
   input += synapse0x31554c0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3154b30() {
   double input = input0x3154b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3155500() {
   double input = -1.11411;
   input += synapse0x3155690();
   input += synapse0x315e720();
   input += synapse0x315e760();
   input += synapse0x315e7a0();
   input += synapse0x315e7e0();
   input += synapse0x315e820();
   input += synapse0x315e860();
   input += synapse0x315e8a0();
   input += synapse0x315e8e0();
   input += synapse0x315e920();
   input += synapse0x315e960();
   input += synapse0x315e9a0();
   input += synapse0x315e9e0();
   input += synapse0x315ea20();
   input += synapse0x315ea60();
   input += synapse0x315eaa0();
   input += synapse0x315e570();
   input += synapse0x315e5b0();
   input += synapse0x315ebf0();
   input += synapse0x315ec30();
   input += synapse0x315ec70();
   input += synapse0x315ecb0();
   input += synapse0x315ecf0();
   input += synapse0x315ed30();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3155500() {
   double input = input0x3155500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315ed70() {
   double input = 1.64386;
   input += synapse0x315f0b0();
   input += synapse0x315f0f0();
   input += synapse0x315f130();
   input += synapse0x315f170();
   input += synapse0x315f1b0();
   input += synapse0x315f1f0();
   input += synapse0x315f230();
   input += synapse0x315f270();
   input += synapse0x315f2b0();
   input += synapse0x315f2f0();
   input += synapse0x315f330();
   input += synapse0x315f370();
   input += synapse0x315f3b0();
   input += synapse0x315f3f0();
   input += synapse0x315f430();
   input += synapse0x315f470();
   input += synapse0x315ef00();
   input += synapse0x315ef40();
   input += synapse0x315f5c0();
   input += synapse0x315f600();
   input += synapse0x315f640();
   input += synapse0x315f680();
   input += synapse0x315f6c0();
   input += synapse0x315f700();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315ed70() {
   double input = input0x315ed70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315f740() {
   double input = 0.0446864;
   input += synapse0x315fa80();
   input += synapse0x315fac0();
   input += synapse0x315fb00();
   input += synapse0x315fb40();
   input += synapse0x315fb80();
   input += synapse0x315fbc0();
   input += synapse0x315fc00();
   input += synapse0x315fc40();
   input += synapse0x315fc80();
   input += synapse0x315fcc0();
   input += synapse0x315fd00();
   input += synapse0x315fd40();
   input += synapse0x315fd80();
   input += synapse0x315fdc0();
   input += synapse0x315fe00();
   input += synapse0x315fe40();
   input += synapse0x315f8d0();
   input += synapse0x315f910();
   input += synapse0x315ff90();
   input += synapse0x315ffd0();
   input += synapse0x3160010();
   input += synapse0x3160050();
   input += synapse0x3160090();
   input += synapse0x31600d0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315f740() {
   double input = input0x315f740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3160110() {
   double input = -6.34028;
   input += synapse0x3160450();
   input += synapse0x3160490();
   input += synapse0x31604d0();
   input += synapse0x3160510();
   input += synapse0x3160550();
   input += synapse0x3160590();
   input += synapse0x31605d0();
   input += synapse0x3160610();
   input += synapse0x3160650();
   input += synapse0x3160690();
   input += synapse0x31606d0();
   input += synapse0x3160710();
   input += synapse0x3160750();
   input += synapse0x3160790();
   input += synapse0x31607d0();
   input += synapse0x3160810();
   input += synapse0x31602a0();
   input += synapse0x31602e0();
   input += synapse0x3160960();
   input += synapse0x31609a0();
   input += synapse0x31609e0();
   input += synapse0x3160a20();
   input += synapse0x3160a60();
   input += synapse0x3160aa0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3160110() {
   double input = input0x3160110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3160ae0() {
   double input = 0.557659;
   input += synapse0x3160e20();
   input += synapse0x3160e60();
   input += synapse0x3160ea0();
   input += synapse0x3160ee0();
   input += synapse0x3160f20();
   input += synapse0x3160f60();
   input += synapse0x3160fa0();
   input += synapse0x3160fe0();
   input += synapse0x3161020();
   input += synapse0x3161060();
   input += synapse0x31610a0();
   input += synapse0x31610e0();
   input += synapse0x3161120();
   input += synapse0x3161160();
   input += synapse0x31611a0();
   input += synapse0x31611e0();
   input += synapse0x3160c70();
   input += synapse0x3160cb0();
   input += synapse0x3161330();
   input += synapse0x3161370();
   input += synapse0x31613b0();
   input += synapse0x31613f0();
   input += synapse0x3161430();
   input += synapse0x3161470();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3160ae0() {
   double input = input0x3160ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31614b0() {
   double input = -0.257382;
   input += synapse0x31617f0();
   input += synapse0x3161830();
   input += synapse0x3161870();
   input += synapse0x31618b0();
   input += synapse0x31618f0();
   input += synapse0x3161930();
   input += synapse0x3161970();
   input += synapse0x31619b0();
   input += synapse0x31619f0();
   input += synapse0x3161a30();
   input += synapse0x3161a70();
   input += synapse0x3161ab0();
   input += synapse0x3161af0();
   input += synapse0x3161b30();
   input += synapse0x3161b70();
   input += synapse0x3161bb0();
   input += synapse0x3161640();
   input += synapse0x3161680();
   input += synapse0x3161d00();
   input += synapse0x3161d40();
   input += synapse0x3161d80();
   input += synapse0x3161dc0();
   input += synapse0x3161e00();
   input += synapse0x3161e40();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31614b0() {
   double input = input0x31614b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3161e80() {
   double input = 3.3997;
   input += synapse0x31621c0();
   input += synapse0x3162200();
   input += synapse0x3162240();
   input += synapse0x3162280();
   input += synapse0x31622c0();
   input += synapse0x3162300();
   input += synapse0x3162340();
   input += synapse0x3162380();
   input += synapse0x31623c0();
   input += synapse0x3162400();
   input += synapse0x3162440();
   input += synapse0x3162480();
   input += synapse0x31624c0();
   input += synapse0x3162500();
   input += synapse0x3162540();
   input += synapse0x3162580();
   input += synapse0x3162010();
   input += synapse0x3162050();
   input += synapse0x31626d0();
   input += synapse0x3162710();
   input += synapse0x3162750();
   input += synapse0x3162790();
   input += synapse0x31627d0();
   input += synapse0x3162810();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3161e80() {
   double input = input0x3161e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3162850() {
   double input = 1.02902;
   input += synapse0x3162b90();
   input += synapse0x3162bd0();
   input += synapse0x3162c10();
   input += synapse0x3162c50();
   input += synapse0x3162c90();
   input += synapse0x3162cd0();
   input += synapse0x3162d10();
   input += synapse0x3162d50();
   input += synapse0x3162d90();
   input += synapse0x3162dd0();
   input += synapse0x3162e10();
   input += synapse0x3162e50();
   input += synapse0x3162e90();
   input += synapse0x3162ed0();
   input += synapse0x3162f10();
   input += synapse0x3162f50();
   input += synapse0x31629e0();
   input += synapse0x3162a20();
   input += synapse0x31630a0();
   input += synapse0x31630e0();
   input += synapse0x3163120();
   input += synapse0x3163160();
   input += synapse0x31631a0();
   input += synapse0x31631e0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3162850() {
   double input = input0x3162850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3163220() {
   double input = 0.168851;
   input += synapse0x3163560();
   input += synapse0x3157b30();
   input += synapse0x3157b70();
   input += synapse0x3157bb0();
   input += synapse0x3157e00();
   input += synapse0x3157e40();
   input += synapse0x3157e80();
   input += synapse0x31580d0();
   input += synapse0x3158110();
   input += synapse0x3158360();
   input += synapse0x31583a0();
   input += synapse0x31583e0();
   input += synapse0x3158630();
   input += synapse0x3158670();
   input += synapse0x31588c0();
   input += synapse0x3158900();
   input += synapse0x31633b0();
   input += synapse0x31633f0();
   input += synapse0x3158a50();
   input += synapse0x3158f60();
   input += synapse0x3158fa0();
   input += synapse0x3158fe0();
   input += synapse0x3159230();
   input += synapse0x3159270();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3163220() {
   double input = input0x3163220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31592b0() {
   double input = 1.14321;
   input += synapse0x3158b20();
   input += synapse0x3158b60();
   input += synapse0x3158ba0();
   input += synapse0x3158be0();
   input += synapse0x3159560();
   input += synapse0x31658b0();
   input += synapse0x31658f0();
   input += synapse0x3165930();
   input += synapse0x3165970();
   input += synapse0x31659b0();
   input += synapse0x31659f0();
   input += synapse0x3165a30();
   input += synapse0x3165a70();
   input += synapse0x3165ab0();
   input += synapse0x3165af0();
   input += synapse0x3165b30();
   input += synapse0x3159440();
   input += synapse0x3159480();
   input += synapse0x3165c80();
   input += synapse0x3165cc0();
   input += synapse0x3165d00();
   input += synapse0x3165d40();
   input += synapse0x3165d80();
   input += synapse0x3165dc0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31592b0() {
   double input = input0x31592b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3165e00() {
   double input = -0.901665;
   input += synapse0x3166140();
   input += synapse0x3166180();
   input += synapse0x31661c0();
   input += synapse0x3166200();
   input += synapse0x3166240();
   input += synapse0x3166280();
   input += synapse0x31662c0();
   input += synapse0x3166300();
   input += synapse0x3166340();
   input += synapse0x3166380();
   input += synapse0x31663c0();
   input += synapse0x3166400();
   input += synapse0x3166440();
   input += synapse0x3166480();
   input += synapse0x31664c0();
   input += synapse0x3166500();
   input += synapse0x3165f90();
   input += synapse0x3165fd0();
   input += synapse0x3166650();
   input += synapse0x3166690();
   input += synapse0x31666d0();
   input += synapse0x3166710();
   input += synapse0x3166750();
   input += synapse0x3166790();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3165e00() {
   double input = input0x3165e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31667d0() {
   double input = 0.44377;
   input += synapse0x3166b10();
   input += synapse0x3166b50();
   input += synapse0x3166b90();
   input += synapse0x3166bd0();
   input += synapse0x3166c10();
   input += synapse0x3166c50();
   input += synapse0x3166c90();
   input += synapse0x3166cd0();
   input += synapse0x3166d10();
   input += synapse0x3166d50();
   input += synapse0x3166d90();
   input += synapse0x3166dd0();
   input += synapse0x3166e10();
   input += synapse0x3166e50();
   input += synapse0x3166e90();
   input += synapse0x3166ed0();
   input += synapse0x3166960();
   input += synapse0x31669a0();
   input += synapse0x3167020();
   input += synapse0x3167060();
   input += synapse0x31670a0();
   input += synapse0x31670e0();
   input += synapse0x3167120();
   input += synapse0x3167160();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31667d0() {
   double input = input0x31667d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31671a0() {
   double input = -0.154552;
   input += synapse0x31674e0();
   input += synapse0x3167520();
   input += synapse0x3167560();
   input += synapse0x31675a0();
   input += synapse0x31675e0();
   input += synapse0x3167620();
   input += synapse0x3167660();
   input += synapse0x31676a0();
   input += synapse0x31676e0();
   input += synapse0x3167720();
   input += synapse0x3167760();
   input += synapse0x31677a0();
   input += synapse0x31677e0();
   input += synapse0x3167820();
   input += synapse0x3167860();
   input += synapse0x31678a0();
   input += synapse0x3167330();
   input += synapse0x3167370();
   input += synapse0x31679f0();
   input += synapse0x3167a30();
   input += synapse0x3167a70();
   input += synapse0x3167ab0();
   input += synapse0x3167af0();
   input += synapse0x3167b30();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31671a0() {
   double input = input0x31671a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3167b70() {
   double input = -0.247889;
   input += synapse0x3167eb0();
   input += synapse0x3167ef0();
   input += synapse0x3167f30();
   input += synapse0x3167f70();
   input += synapse0x3167fb0();
   input += synapse0x3167ff0();
   input += synapse0x3168030();
   input += synapse0x3168070();
   input += synapse0x31680b0();
   input += synapse0x31680f0();
   input += synapse0x3168130();
   input += synapse0x3168170();
   input += synapse0x31681b0();
   input += synapse0x31681f0();
   input += synapse0x3168230();
   input += synapse0x3168270();
   input += synapse0x3167d00();
   input += synapse0x3167d40();
   input += synapse0x31683c0();
   input += synapse0x3168400();
   input += synapse0x3168440();
   input += synapse0x3168480();
   input += synapse0x31684c0();
   input += synapse0x3168500();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3167b70() {
   double input = input0x3167b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3168540() {
   double input = 0.152579;
   input += synapse0x3168880();
   input += synapse0x31688c0();
   input += synapse0x3168900();
   input += synapse0x3168940();
   input += synapse0x3168980();
   input += synapse0x31689c0();
   input += synapse0x3168a00();
   input += synapse0x3168a40();
   input += synapse0x3168a80();
   input += synapse0x3168ac0();
   input += synapse0x3168b00();
   input += synapse0x3168b40();
   input += synapse0x3168b80();
   input += synapse0x3168bc0();
   input += synapse0x3168c00();
   input += synapse0x3168c40();
   input += synapse0x31686d0();
   input += synapse0x3168710();
   input += synapse0x3168d90();
   input += synapse0x3168dd0();
   input += synapse0x3168e10();
   input += synapse0x3168e50();
   input += synapse0x3168e90();
   input += synapse0x3168ed0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3168540() {
   double input = input0x3168540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3168f10() {
   double input = 4.2198;
   input += synapse0x3169250();
   input += synapse0x3169290();
   input += synapse0x31692d0();
   input += synapse0x3169310();
   input += synapse0x3169350();
   input += synapse0x3169390();
   input += synapse0x31693d0();
   input += synapse0x3169410();
   input += synapse0x3169450();
   input += synapse0x3169490();
   input += synapse0x31694d0();
   input += synapse0x3169510();
   input += synapse0x3169550();
   input += synapse0x3169590();
   input += synapse0x31695d0();
   input += synapse0x3169610();
   input += synapse0x31690a0();
   input += synapse0x31690e0();
   input += synapse0x3169760();
   input += synapse0x31697a0();
   input += synapse0x31697e0();
   input += synapse0x3169820();
   input += synapse0x3169860();
   input += synapse0x31698a0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3168f10() {
   double input = input0x3168f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31698e0() {
   double input = 0.713577;
   input += synapse0x3169c20();
   input += synapse0x3169c60();
   input += synapse0x3169ca0();
   input += synapse0x3169ce0();
   input += synapse0x3169d20();
   input += synapse0x3169d60();
   input += synapse0x3169da0();
   input += synapse0x3169de0();
   input += synapse0x3169e20();
   input += synapse0x3169e60();
   input += synapse0x3169ea0();
   input += synapse0x3169ee0();
   input += synapse0x3169f20();
   input += synapse0x3169f60();
   input += synapse0x3169fa0();
   input += synapse0x3169fe0();
   input += synapse0x3169a70();
   input += synapse0x3169ab0();
   input += synapse0x316a130();
   input += synapse0x316a170();
   input += synapse0x316a1b0();
   input += synapse0x316a1f0();
   input += synapse0x316a230();
   input += synapse0x316a270();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31698e0() {
   double input = input0x31698e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x316a2b0() {
   double input = 0.604283;
   input += synapse0x3152d20();
   input += synapse0x3152d60();
   input += synapse0x3152da0();
   input += synapse0x3152de0();
   input += synapse0x3152e20();
   input += synapse0x3152e60();
   input += synapse0x3152ea0();
   input += synapse0x3152ee0();
   input += synapse0x316aa00();
   input += synapse0x316aa40();
   input += synapse0x316aa80();
   input += synapse0x316aac0();
   input += synapse0x316ab00();
   input += synapse0x316ab40();
   input += synapse0x316ab80();
   input += synapse0x316abc0();
   input += synapse0x316a440();
   input += synapse0x316a480();
   input += synapse0x316ad10();
   input += synapse0x316ad50();
   input += synapse0x316ad90();
   input += synapse0x316add0();
   input += synapse0x316ae10();
   input += synapse0x316ae50();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x316a2b0() {
   double input = input0x316a2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x316ae90() {
   double input = 0.347657;
   input += synapse0x316b1d0();
   input += synapse0x316b210();
   input += synapse0x316b250();
   input += synapse0x316b290();
   input += synapse0x316b2d0();
   input += synapse0x316b310();
   input += synapse0x316b350();
   input += synapse0x316b390();
   input += synapse0x316b3d0();
   input += synapse0x316b410();
   input += synapse0x316b450();
   input += synapse0x316b490();
   input += synapse0x316b4d0();
   input += synapse0x316b510();
   input += synapse0x316b550();
   input += synapse0x316b590();
   input += synapse0x316b020();
   input += synapse0x316b060();
   input += synapse0x316b6e0();
   input += synapse0x316b720();
   input += synapse0x316b760();
   input += synapse0x316b7a0();
   input += synapse0x316b7e0();
   input += synapse0x316b820();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x316ae90() {
   double input = input0x316ae90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x316b860() {
   double input = -0.548678;
   input += synapse0x316bba0();
   input += synapse0x316bbe0();
   input += synapse0x316bc20();
   input += synapse0x316bc60();
   input += synapse0x316bca0();
   input += synapse0x316bce0();
   input += synapse0x316bd20();
   input += synapse0x316bd60();
   input += synapse0x316bda0();
   input += synapse0x316bde0();
   input += synapse0x316be20();
   input += synapse0x316be60();
   input += synapse0x316bea0();
   input += synapse0x316bee0();
   input += synapse0x316bf20();
   input += synapse0x316bf60();
   input += synapse0x316b9f0();
   input += synapse0x316ba30();
   input += synapse0x315c560();
   input += synapse0x315c5a0();
   input += synapse0x315c5e0();
   input += synapse0x315c620();
   input += synapse0x315c660();
   input += synapse0x315c6a0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x316b860() {
   double input = input0x316b860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315c6e0() {
   double input = 0.981475;
   input += synapse0x315ca20();
   input += synapse0x315ca60();
   input += synapse0x315caa0();
   input += synapse0x315cae0();
   input += synapse0x315cb20();
   input += synapse0x315cb60();
   input += synapse0x315cba0();
   input += synapse0x315cbe0();
   input += synapse0x315cc20();
   input += synapse0x315cc60();
   input += synapse0x315cca0();
   input += synapse0x315cce0();
   input += synapse0x315cd20();
   input += synapse0x315cd60();
   input += synapse0x315cda0();
   input += synapse0x315cde0();
   input += synapse0x315c870();
   input += synapse0x315c8b0();
   input += synapse0x315cf30();
   input += synapse0x315cf70();
   input += synapse0x315cfb0();
   input += synapse0x315cff0();
   input += synapse0x315d030();
   input += synapse0x315d070();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315c6e0() {
   double input = input0x315c6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315d0b0() {
   double input = 0.612545;
   input += synapse0x315d3f0();
   input += synapse0x315d430();
   input += synapse0x315d470();
   input += synapse0x315d4b0();
   input += synapse0x315d4f0();
   input += synapse0x315d530();
   input += synapse0x315d570();
   input += synapse0x315d5b0();
   input += synapse0x315d5f0();
   input += synapse0x315d630();
   input += synapse0x315d670();
   input += synapse0x315d6b0();
   input += synapse0x315d6f0();
   input += synapse0x315d730();
   input += synapse0x315d770();
   input += synapse0x315d7b0();
   input += synapse0x315d240();
   input += synapse0x315d280();
   input += synapse0x315d900();
   input += synapse0x315d940();
   input += synapse0x315d980();
   input += synapse0x315d9c0();
   input += synapse0x315da00();
   input += synapse0x315da40();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315d0b0() {
   double input = input0x315d0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x315da80() {
   double input = 0.483468;
   input += synapse0x315ddc0();
   input += synapse0x315de00();
   input += synapse0x315de40();
   input += synapse0x315de80();
   input += synapse0x315dec0();
   input += synapse0x315df00();
   input += synapse0x315df40();
   input += synapse0x315df80();
   input += synapse0x315dfc0();
   input += synapse0x315e000();
   input += synapse0x315e040();
   input += synapse0x315e080();
   input += synapse0x315e0c0();
   input += synapse0x315e100();
   input += synapse0x315e140();
   input += synapse0x315e180();
   input += synapse0x315dc10();
   input += synapse0x315dc50();
   input += synapse0x315e2d0();
   input += synapse0x315e310();
   input += synapse0x315e350();
   input += synapse0x315e390();
   input += synapse0x315e3d0();
   input += synapse0x315e410();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x315da80() {
   double input = input0x315da80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31700c0() {
   double input = -0.131994;
   input += synapse0x31702e0();
   input += synapse0x3170320();
   input += synapse0x3170360();
   input += synapse0x31703a0();
   input += synapse0x31703e0();
   input += synapse0x3170420();
   input += synapse0x3170460();
   input += synapse0x31704a0();
   input += synapse0x31704e0();
   input += synapse0x3170520();
   input += synapse0x3170560();
   input += synapse0x31705a0();
   input += synapse0x31705e0();
   input += synapse0x3170620();
   input += synapse0x3170660();
   input += synapse0x31706a0();
   input += synapse0x315e450();
   input += synapse0x315e490();
   input += synapse0x31707f0();
   input += synapse0x3170830();
   input += synapse0x3170870();
   input += synapse0x31708b0();
   input += synapse0x31708f0();
   input += synapse0x3170930();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31700c0() {
   double input = input0x31700c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3170970() {
   double input = 0.491655;
   input += synapse0x3170cb0();
   input += synapse0x3170cf0();
   input += synapse0x3170d30();
   input += synapse0x3170d70();
   input += synapse0x3170db0();
   input += synapse0x3170df0();
   input += synapse0x3170e30();
   input += synapse0x3170e70();
   input += synapse0x3170eb0();
   input += synapse0x3170ef0();
   input += synapse0x3170f30();
   input += synapse0x3170f70();
   input += synapse0x3170fb0();
   input += synapse0x3170ff0();
   input += synapse0x3171030();
   input += synapse0x3171070();
   input += synapse0x3170b00();
   input += synapse0x3170b40();
   input += synapse0x31711c0();
   input += synapse0x3171200();
   input += synapse0x3171240();
   input += synapse0x3171280();
   input += synapse0x31712c0();
   input += synapse0x3171300();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3170970() {
   double input = input0x3170970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3171340() {
   double input = 0.968871;
   input += synapse0x3171680();
   input += synapse0x31716c0();
   input += synapse0x3171700();
   input += synapse0x3171740();
   input += synapse0x3171780();
   input += synapse0x31717c0();
   input += synapse0x3171800();
   input += synapse0x3171840();
   input += synapse0x3171880();
   input += synapse0x31718c0();
   input += synapse0x3171900();
   input += synapse0x3171940();
   input += synapse0x3171980();
   input += synapse0x31719c0();
   input += synapse0x3171a00();
   input += synapse0x3171a40();
   input += synapse0x31714d0();
   input += synapse0x3171510();
   input += synapse0x3171b90();
   input += synapse0x3171bd0();
   input += synapse0x3171c10();
   input += synapse0x3171c50();
   input += synapse0x3171c90();
   input += synapse0x3171cd0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3171340() {
   double input = input0x3171340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3171d10() {
   double input = 2.4585;
   input += synapse0x3172050();
   input += synapse0x3172090();
   input += synapse0x31720d0();
   input += synapse0x3172110();
   input += synapse0x3172150();
   input += synapse0x3172190();
   input += synapse0x31721d0();
   input += synapse0x3172210();
   input += synapse0x3172250();
   input += synapse0x3172290();
   input += synapse0x31722d0();
   input += synapse0x3172310();
   input += synapse0x3172350();
   input += synapse0x3172390();
   input += synapse0x31723d0();
   input += synapse0x3172410();
   input += synapse0x3171ea0();
   input += synapse0x3171ee0();
   input += synapse0x3172560();
   input += synapse0x31725a0();
   input += synapse0x31725e0();
   input += synapse0x3172620();
   input += synapse0x3172660();
   input += synapse0x31726a0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3171d10() {
   double input = input0x3171d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3178f10() {
   double input = -0.978585;
   input += synapse0x314ec30();
   input += synapse0x314ec70();
   input += synapse0x3150150();
   input += synapse0x3150190();
   input += synapse0x3150b20();
   input += synapse0x3150b60();
   input += synapse0x31518f0();
   input += synapse0x3151930();
   input += synapse0x31522c0();
   input += synapse0x3152300();
   input += synapse0x3152c90();
   input += synapse0x3152cd0();
   input += synapse0x3153770();
   input += synapse0x31537b0();
   input += synapse0x3154140();
   input += synapse0x3154180();
   input += synapse0x3151220();
   input += synapse0x3151260();
   input += synapse0x3155cf0();
   input += synapse0x3155d30();
   input += synapse0x31566c0();
   input += synapse0x3156700();
   input += synapse0x3157090();
   input += synapse0x31570d0();
   input += synapse0x3157a60();
   input += synapse0x3157aa0();
   input += synapse0x314bc40();
   input += synapse0x314bc80();
   input += synapse0x3159b50();
   input += synapse0x3159b90();
   input += synapse0x315a520();
   input += synapse0x315a560();
   input += synapse0x315aef0();
   input += synapse0x315af30();
   input += synapse0x315b8c0();
   input += synapse0x315b900();
   input += synapse0x315c290();
   input += synapse0x315c2d0();
   input += synapse0x3154de0();
   input += synapse0x3154e20();
   input += synapse0x315e690();
   input += synapse0x315e6d0();
   input += synapse0x315f020();
   input += synapse0x315f060();
   input += synapse0x315f9f0();
   input += synapse0x315fa30();
   input += synapse0x31603c0();
   input += synapse0x3160400();
   input += synapse0x3160d90();
   input += synapse0x3160dd0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3178f10() {
   double input = input0x3178f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x31792b0() {
   double input = 1.41352;
   input += synapse0x31634d0();
   input += synapse0x3163510();
   input += synapse0x3158a90();
   input += synapse0x3158ad0();
   input += synapse0x31660b0();
   input += synapse0x31660f0();
   input += synapse0x3166a80();
   input += synapse0x3166ac0();
   input += synapse0x3167450();
   input += synapse0x3167490();
   input += synapse0x3167e20();
   input += synapse0x3167e60();
   input += synapse0x31687f0();
   input += synapse0x3168830();
   input += synapse0x31691c0();
   input += synapse0x3169200();
   input += synapse0x3169b90();
   input += synapse0x3169bd0();
   input += synapse0x316a560();
   input += synapse0x316a5a0();
   input += synapse0x316b140();
   input += synapse0x316b180();
   input += synapse0x316bb10();
   input += synapse0x316bb50();
   input += synapse0x315c990();
   input += synapse0x315c9d0();
   input += synapse0x315d360();
   input += synapse0x315d3a0();
   input += synapse0x315dd30();
   input += synapse0x315dd70();
   input += synapse0x3170250();
   input += synapse0x3170290();
   input += synapse0x3170c20();
   input += synapse0x3170c60();
   input += synapse0x31715f0();
   input += synapse0x3171630();
   input += synapse0x3171fc0();
   input += synapse0x3172000();
   input += synapse0x314def0();
   input += synapse0x314df30();
   input += synapse0x3161760();
   input += synapse0x31617a0();
   input += synapse0x31726e0();
   input += synapse0x3172720();
   input += synapse0x3172760();
   input += synapse0x31727a0();
   input += synapse0x3179650();
   input += synapse0x3179690();
   input += synapse0x31796d0();
   input += synapse0x3179710();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x31792b0() {
   double input = input0x31792b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x3179750() {
   double input = -0.147878;
   input += synapse0x3179a90();
   input += synapse0x3179ad0();
   input += synapse0x3179b10();
   input += synapse0x3179b50();
   input += synapse0x3179b90();
   input += synapse0x3179bd0();
   input += synapse0x3179c10();
   input += synapse0x3179c50();
   input += synapse0x3179c90();
   input += synapse0x3179cd0();
   input += synapse0x3179d10();
   input += synapse0x3179d50();
   input += synapse0x3179d90();
   input += synapse0x3179dd0();
   input += synapse0x3179e10();
   input += synapse0x3179e50();
   input += synapse0x31798e0();
   input += synapse0x3179920();
   input += synapse0x3179fa0();
   input += synapse0x3179fe0();
   input += synapse0x317a020();
   input += synapse0x317a060();
   input += synapse0x317a0a0();
   input += synapse0x317a0e0();
   input += synapse0x317a120();
   input += synapse0x317a160();
   input += synapse0x317a1a0();
   input += synapse0x317a1e0();
   input += synapse0x317a220();
   input += synapse0x317a260();
   input += synapse0x317a2a0();
   input += synapse0x317a2e0();
   input += synapse0x3179e90();
   input += synapse0x3179ed0();
   input += synapse0x3179f10();
   input += synapse0x3179f50();
   input += synapse0x317a530();
   input += synapse0x317a570();
   input += synapse0x317a5b0();
   input += synapse0x317a5f0();
   input += synapse0x317a630();
   input += synapse0x317a670();
   input += synapse0x317a6b0();
   input += synapse0x317a6f0();
   input += synapse0x317a730();
   input += synapse0x317a770();
   input += synapse0x317a7b0();
   input += synapse0x317a7f0();
   input += synapse0x317a830();
   input += synapse0x317a870();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x3179750() {
   double input = input0x3179750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x317a8b0() {
   double input = 0.484578;
   input += synapse0x317abf0();
   input += synapse0x317ac30();
   input += synapse0x317ac70();
   input += synapse0x317acb0();
   input += synapse0x317acf0();
   input += synapse0x317ad30();
   input += synapse0x317ad70();
   input += synapse0x317adb0();
   input += synapse0x317adf0();
   input += synapse0x317ae30();
   input += synapse0x317ae70();
   input += synapse0x317aeb0();
   input += synapse0x317aef0();
   input += synapse0x317af30();
   input += synapse0x317af70();
   input += synapse0x317afb0();
   input += synapse0x317aa40();
   input += synapse0x317aa80();
   input += synapse0x317b100();
   input += synapse0x317b140();
   input += synapse0x317b180();
   input += synapse0x317b1c0();
   input += synapse0x317b200();
   input += synapse0x317b240();
   input += synapse0x317b280();
   input += synapse0x317b2c0();
   input += synapse0x317b300();
   input += synapse0x317b340();
   input += synapse0x317b380();
   input += synapse0x317b3c0();
   input += synapse0x317b400();
   input += synapse0x317b440();
   input += synapse0x317aff0();
   input += synapse0x317b030();
   input += synapse0x317b070();
   input += synapse0x317b0b0();
   input += synapse0x317b690();
   input += synapse0x317b6d0();
   input += synapse0x317b710();
   input += synapse0x317b750();
   input += synapse0x317b790();
   input += synapse0x317b7d0();
   input += synapse0x317b810();
   input += synapse0x317b850();
   input += synapse0x317b890();
   input += synapse0x317b8d0();
   input += synapse0x317b910();
   input += synapse0x317b950();
   input += synapse0x317b990();
   input += synapse0x317b9d0();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x317a8b0() {
   double input = input0x317a8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x317ba10() {
   double input = -0.340634;
   input += synapse0x317bd50();
   input += synapse0x317bd90();
   input += synapse0x317bdd0();
   input += synapse0x317be10();
   input += synapse0x317be50();
   input += synapse0x317be90();
   input += synapse0x317bed0();
   input += synapse0x317bf10();
   input += synapse0x317bf50();
   input += synapse0x317bf90();
   input += synapse0x317bfd0();
   input += synapse0x317c010();
   input += synapse0x317c050();
   input += synapse0x317c090();
   input += synapse0x317c0d0();
   input += synapse0x317c110();
   input += synapse0x317bba0();
   input += synapse0x317bbe0();
   input += synapse0x317c260();
   input += synapse0x317c2a0();
   input += synapse0x317c2e0();
   input += synapse0x317c320();
   input += synapse0x317c360();
   input += synapse0x317c3a0();
   input += synapse0x317c3e0();
   input += synapse0x317c420();
   input += synapse0x317c460();
   input += synapse0x317c4a0();
   input += synapse0x317c4e0();
   input += synapse0x317c520();
   input += synapse0x317c560();
   input += synapse0x317c5a0();
   input += synapse0x317c150();
   input += synapse0x317c190();
   input += synapse0x317c1d0();
   input += synapse0x317c210();
   input += synapse0x317c7f0();
   input += synapse0x317c830();
   input += synapse0x317c870();
   input += synapse0x317c8b0();
   input += synapse0x317c8f0();
   input += synapse0x317c930();
   input += synapse0x317c970();
   input += synapse0x317c9b0();
   input += synapse0x317c9f0();
   input += synapse0x317ca30();
   input += synapse0x317ca70();
   input += synapse0x317cab0();
   input += synapse0x317caf0();
   input += synapse0x317cb30();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x317ba10() {
   double input = input0x317ba10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dL::input0x317cb70() {
   double input = 1.8353;
   input += synapse0x317cd90();
   input += synapse0x317cdd0();
   input += synapse0x317ce10();
   input += synapse0x317ce50();
   input += synapse0x317ce90();
   return input;
}

double NNfunction_ns_chi01_dL::neuron0x317cb70() {
   double input = input0x317cb70();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_dL::synapse0x3148cb0() {
   return (neuron0x3148d30()*-0.00159948);
}

double NNfunction_ns_chi01_dL::synapse0x3148cf0() {
   return (neuron0x3148fe0()*8.27921);
}

double NNfunction_ns_chi01_dL::synapse0x314df80() {
   return (neuron0x3149320()*0.18264);
}

double NNfunction_ns_chi01_dL::synapse0x314dfc0() {
   return (neuron0x3149660()*0.0639167);
}

double NNfunction_ns_chi01_dL::synapse0x314e000() {
   return (neuron0x31499a0()*-0.00970911);
}

double NNfunction_ns_chi01_dL::synapse0x314e040() {
   return (neuron0x3149ce0()*0.0422123);
}

double NNfunction_ns_chi01_dL::synapse0x314e080() {
   return (neuron0x314a020()*-0.0839678);
}

double NNfunction_ns_chi01_dL::synapse0x314e0c0() {
   return (neuron0x314a360()*-0.0409169);
}

double NNfunction_ns_chi01_dL::synapse0x314e100() {
   return (neuron0x314a6a0()*-0.0590756);
}

double NNfunction_ns_chi01_dL::synapse0x314e140() {
   return (neuron0x314a9e0()*0.00357488);
}

double NNfunction_ns_chi01_dL::synapse0x314e180() {
   return (neuron0x314ad20()*0.00310589);
}

double NNfunction_ns_chi01_dL::synapse0x314e1c0() {
   return (neuron0x314b060()*-0.465677);
}

double NNfunction_ns_chi01_dL::synapse0x314e200() {
   return (neuron0x314b3a0()*0.0332521);
}

double NNfunction_ns_chi01_dL::synapse0x314e240() {
   return (neuron0x314b6e0()*-0.0283729);
}

double NNfunction_ns_chi01_dL::synapse0x314e280() {
   return (neuron0x314ba20()*0.0118612);
}

double NNfunction_ns_chi01_dL::synapse0x314e2c0() {
   return (neuron0x314bd60()*-0.00125027);
}

double NNfunction_ns_chi01_dL::synapse0x3148c20() {
   return (neuron0x314c0a0()*-0.0472702);
}

double NNfunction_ns_chi01_dL::synapse0x3148c60() {
   return (neuron0x314c600()*-0.00357779);
}

double NNfunction_ns_chi01_dL::synapse0x2f03df0() {
   return (neuron0x314c820()*-0.0101466);
}

double NNfunction_ns_chi01_dL::synapse0x2f03e30() {
   return (neuron0x314cb60()*0.0257145);
}

double NNfunction_ns_chi01_dL::synapse0x314e520() {
   return (neuron0x314cea0()*0.016712);
}

double NNfunction_ns_chi01_dL::synapse0x314e560() {
   return (neuron0x314d1e0()*0.0351279);
}

double NNfunction_ns_chi01_dL::synapse0x314e5a0() {
   return (neuron0x314d520()*0.0046414);
}

double NNfunction_ns_chi01_dL::synapse0x314e5e0() {
   return (neuron0x314d860()*-6.34328);
}

double NNfunction_ns_chi01_dL::synapse0x314e960() {
   return (neuron0x3148d30()*-0.00388633);
}

double NNfunction_ns_chi01_dL::synapse0x314e9a0() {
   return (neuron0x3148fe0()*0.0192771);
}

double NNfunction_ns_chi01_dL::synapse0x314e9e0() {
   return (neuron0x3149320()*0.139932);
}

double NNfunction_ns_chi01_dL::synapse0x314ea20() {
   return (neuron0x3149660()*-0.172469);
}

double NNfunction_ns_chi01_dL::synapse0x314ea60() {
   return (neuron0x31499a0()*0.01689);
}

double NNfunction_ns_chi01_dL::synapse0x314eaa0() {
   return (neuron0x3149ce0()*0.00432733);
}

double NNfunction_ns_chi01_dL::synapse0x314eae0() {
   return (neuron0x314a020()*0.0127933);
}

double NNfunction_ns_chi01_dL::synapse0x314eb20() {
   return (neuron0x314a360()*-0.000611506);
}

double NNfunction_ns_chi01_dL::synapse0x314eb60() {
   return (neuron0x314a6a0()*-0.00473449);
}

double NNfunction_ns_chi01_dL::synapse0x314e410() {
   return (neuron0x314a9e0()*0.0090179);
}

double NNfunction_ns_chi01_dL::synapse0x314e450() {
   return (neuron0x314ad20()*-0.00189189);
}

double NNfunction_ns_chi01_dL::synapse0x314e490() {
   return (neuron0x314b060()*0.854856);
}

double NNfunction_ns_chi01_dL::synapse0x314e4d0() {
   return (neuron0x314b3a0()*0.0215633);
}

double NNfunction_ns_chi01_dL::synapse0x314edb0() {
   return (neuron0x314b6e0()*0.00563502);
}

double NNfunction_ns_chi01_dL::synapse0x314edf0() {
   return (neuron0x314ba20()*0.0285453);
}

double NNfunction_ns_chi01_dL::synapse0x314ee30() {
   return (neuron0x314bd60()*0.0391392);
}

double NNfunction_ns_chi01_dL::synapse0x314e7b0() {
   return (neuron0x314c0a0()*0.0111739);
}

double NNfunction_ns_chi01_dL::synapse0x314e7f0() {
   return (neuron0x314c600()*0.0111059);
}

double NNfunction_ns_chi01_dL::synapse0x314ef80() {
   return (neuron0x314c820()*0.00576264);
}

double NNfunction_ns_chi01_dL::synapse0x314efc0() {
   return (neuron0x314cb60()*0.0059031);
}

double NNfunction_ns_chi01_dL::synapse0x314f000() {
   return (neuron0x314cea0()*-0.0111545);
}

double NNfunction_ns_chi01_dL::synapse0x314f040() {
   return (neuron0x314d1e0()*-0.000263149);
}

double NNfunction_ns_chi01_dL::synapse0x314f080() {
   return (neuron0x314d520()*-0.00132817);
}

double NNfunction_ns_chi01_dL::synapse0x314f0c0() {
   return (neuron0x314d860()*0.031884);
}

double NNfunction_ns_chi01_dL::synapse0x314f440() {
   return (neuron0x3148d30()*0.0411813);
}

double NNfunction_ns_chi01_dL::synapse0x314f480() {
   return (neuron0x3148fe0()*11.0063);
}

double NNfunction_ns_chi01_dL::synapse0x314f4c0() {
   return (neuron0x3149320()*1.24911);
}

double NNfunction_ns_chi01_dL::synapse0x314f500() {
   return (neuron0x3149660()*-0.0464697);
}

double NNfunction_ns_chi01_dL::synapse0x314f540() {
   return (neuron0x31499a0()*0.0542838);
}

double NNfunction_ns_chi01_dL::synapse0x314f580() {
   return (neuron0x3149ce0()*0.0118073);
}

double NNfunction_ns_chi01_dL::synapse0x314f5c0() {
   return (neuron0x314a020()*0.0140645);
}

double NNfunction_ns_chi01_dL::synapse0x314f600() {
   return (neuron0x314a360()*0.0195882);
}

double NNfunction_ns_chi01_dL::synapse0x314f640() {
   return (neuron0x314a6a0()*0.0258576);
}

double NNfunction_ns_chi01_dL::synapse0x314f680() {
   return (neuron0x314a9e0()*0.0490553);
}

double NNfunction_ns_chi01_dL::synapse0x314f6c0() {
   return (neuron0x314ad20()*0.0228531);
}

double NNfunction_ns_chi01_dL::synapse0x314f700() {
   return (neuron0x314b060()*-0.173702);
}

double NNfunction_ns_chi01_dL::synapse0x314f740() {
   return (neuron0x314b3a0()*0.0112202);
}

double NNfunction_ns_chi01_dL::synapse0x314f780() {
   return (neuron0x314b6e0()*0.0131649);
}

double NNfunction_ns_chi01_dL::synapse0x314f7c0() {
   return (neuron0x314ba20()*0.0204132);
}

double NNfunction_ns_chi01_dL::synapse0x314f800() {
   return (neuron0x314bd60()*-0.0140421);
}

double NNfunction_ns_chi01_dL::synapse0x314f290() {
   return (neuron0x314c0a0()*-0.00287524);
}

double NNfunction_ns_chi01_dL::synapse0x314f2d0() {
   return (neuron0x314c600()*0.0165885);
}

double NNfunction_ns_chi01_dL::synapse0x3137da0() {
   return (neuron0x314c820()*0.0255975);
}

double NNfunction_ns_chi01_dL::synapse0x2f11cf0() {
   return (neuron0x314cb60()*0.0075607);
}

double NNfunction_ns_chi01_dL::synapse0x2f11d30() {
   return (neuron0x314cea0()*0.0170858);
}

double NNfunction_ns_chi01_dL::synapse0x302d240() {
   return (neuron0x314d1e0()*0.00273054);
}

double NNfunction_ns_chi01_dL::synapse0x302d280() {
   return (neuron0x314d520()*-0.000909102);
}

double NNfunction_ns_chi01_dL::synapse0x3148a90() {
   return (neuron0x314d860()*-0.0490168);
}

double NNfunction_ns_chi01_dL::synapse0x2f125e0() {
   return (neuron0x3148d30()*1.62162);
}

double NNfunction_ns_chi01_dL::synapse0x314ecc0() {
   return (neuron0x3148fe0()*-0.0796589);
}

double NNfunction_ns_chi01_dL::synapse0x314ed00() {
   return (neuron0x3149320()*0.492946);
}

double NNfunction_ns_chi01_dL::synapse0x314ed40() {
   return (neuron0x3149660()*0.0575934);
}

double NNfunction_ns_chi01_dL::synapse0x314f950() {
   return (neuron0x31499a0()*0.161365);
}

double NNfunction_ns_chi01_dL::synapse0x314f990() {
   return (neuron0x3149ce0()*0.155854);
}

double NNfunction_ns_chi01_dL::synapse0x314f9d0() {
   return (neuron0x314a020()*0.0278828);
}

double NNfunction_ns_chi01_dL::synapse0x314fa10() {
   return (neuron0x314a360()*0.0127105);
}

double NNfunction_ns_chi01_dL::synapse0x314fa50() {
   return (neuron0x314a6a0()*-0.092243);
}

double NNfunction_ns_chi01_dL::synapse0x314fa90() {
   return (neuron0x314a9e0()*-0.0173738);
}

double NNfunction_ns_chi01_dL::synapse0x314fad0() {
   return (neuron0x314ad20()*0.04717);
}

double NNfunction_ns_chi01_dL::synapse0x314fb10() {
   return (neuron0x314b060()*0.821864);
}

double NNfunction_ns_chi01_dL::synapse0x314fb50() {
   return (neuron0x314b3a0()*0.249028);
}

double NNfunction_ns_chi01_dL::synapse0x314fb90() {
   return (neuron0x314b6e0()*0.0591453);
}

double NNfunction_ns_chi01_dL::synapse0x314fbd0() {
   return (neuron0x314ba20()*0.215639);
}

double NNfunction_ns_chi01_dL::synapse0x314fc10() {
   return (neuron0x314bd60()*0.0907122);
}

double NNfunction_ns_chi01_dL::synapse0x3148ad0() {
   return (neuron0x314c0a0()*-0.00141336);
}

double NNfunction_ns_chi01_dL::synapse0x3148b10() {
   return (neuron0x314c600()*-0.0893066);
}

double NNfunction_ns_chi01_dL::synapse0x3148b50() {
   return (neuron0x314c820()*0.157576);
}

double NNfunction_ns_chi01_dL::synapse0x314fd60() {
   return (neuron0x314cb60()*0.0871034);
}

double NNfunction_ns_chi01_dL::synapse0x314fda0() {
   return (neuron0x314cea0()*-0.255966);
}

double NNfunction_ns_chi01_dL::synapse0x314fde0() {
   return (neuron0x314d1e0()*-0.0564975);
}

double NNfunction_ns_chi01_dL::synapse0x314fe20() {
   return (neuron0x314d520()*0.0797829);
}

double NNfunction_ns_chi01_dL::synapse0x314fe60() {
   return (neuron0x314d860()*1.74344);
}

double NNfunction_ns_chi01_dL::synapse0x31501e0() {
   return (neuron0x3148d30()*-0.0347625);
}

double NNfunction_ns_chi01_dL::synapse0x3150220() {
   return (neuron0x3148fe0()*0.00124198);
}

double NNfunction_ns_chi01_dL::synapse0x3150260() {
   return (neuron0x3149320()*-0.151245);
}

double NNfunction_ns_chi01_dL::synapse0x31502a0() {
   return (neuron0x3149660()*-0.017449);
}

double NNfunction_ns_chi01_dL::synapse0x31502e0() {
   return (neuron0x31499a0()*-0.072759);
}

double NNfunction_ns_chi01_dL::synapse0x3150320() {
   return (neuron0x3149ce0()*0.018061);
}

double NNfunction_ns_chi01_dL::synapse0x3150360() {
   return (neuron0x314a020()*0.0116944);
}

double NNfunction_ns_chi01_dL::synapse0x31503a0() {
   return (neuron0x314a360()*0.0048328);
}

double NNfunction_ns_chi01_dL::synapse0x31503e0() {
   return (neuron0x314a6a0()*0.00608389);
}

double NNfunction_ns_chi01_dL::synapse0x3150420() {
   return (neuron0x314a9e0()*-0.0133921);
}

double NNfunction_ns_chi01_dL::synapse0x3150460() {
   return (neuron0x314ad20()*-0.0179102);
}

double NNfunction_ns_chi01_dL::synapse0x31504a0() {
   return (neuron0x314b060()*-0.236372);
}

double NNfunction_ns_chi01_dL::synapse0x31504e0() {
   return (neuron0x314b3a0()*0.0185021);
}

double NNfunction_ns_chi01_dL::synapse0x3150520() {
   return (neuron0x314b6e0()*-0.00326866);
}

double NNfunction_ns_chi01_dL::synapse0x3150560() {
   return (neuron0x314ba20()*0.0162389);
}

double NNfunction_ns_chi01_dL::synapse0x31505a0() {
   return (neuron0x314bd60()*0.0194938);
}

double NNfunction_ns_chi01_dL::synapse0x3150030() {
   return (neuron0x314c0a0()*-0.00164985);
}

double NNfunction_ns_chi01_dL::synapse0x3150070() {
   return (neuron0x314c600()*-0.0218695);
}

double NNfunction_ns_chi01_dL::synapse0x31506f0() {
   return (neuron0x314c820()*-0.0137052);
}

double NNfunction_ns_chi01_dL::synapse0x3150730() {
   return (neuron0x314cb60()*0.00294792);
}

double NNfunction_ns_chi01_dL::synapse0x3150770() {
   return (neuron0x314cea0()*0.0119555);
}

double NNfunction_ns_chi01_dL::synapse0x31507b0() {
   return (neuron0x314d1e0()*0.00540523);
}

double NNfunction_ns_chi01_dL::synapse0x31507f0() {
   return (neuron0x314d520()*-0.00844647);
}

double NNfunction_ns_chi01_dL::synapse0x3150830() {
   return (neuron0x314d860()*-16.6404);
}

double NNfunction_ns_chi01_dL::synapse0x3150bb0() {
   return (neuron0x3148d30()*0.100511);
}

double NNfunction_ns_chi01_dL::synapse0x3150bf0() {
   return (neuron0x3148fe0()*-0.161732);
}

double NNfunction_ns_chi01_dL::synapse0x3150c30() {
   return (neuron0x3149320()*0.0501922);
}

double NNfunction_ns_chi01_dL::synapse0x3150c70() {
   return (neuron0x3149660()*-0.0315221);
}

double NNfunction_ns_chi01_dL::synapse0x3150cb0() {
   return (neuron0x31499a0()*-0.0602662);
}

double NNfunction_ns_chi01_dL::synapse0x3150cf0() {
   return (neuron0x3149ce0()*-0.186347);
}

double NNfunction_ns_chi01_dL::synapse0x3150d30() {
   return (neuron0x314a020()*1.31794);
}

double NNfunction_ns_chi01_dL::synapse0x3150d70() {
   return (neuron0x314a360()*0.154973);
}

double NNfunction_ns_chi01_dL::synapse0x3150db0() {
   return (neuron0x314a6a0()*0.240226);
}

double NNfunction_ns_chi01_dL::synapse0x2f12040() {
   return (neuron0x314a9e0()*-0.0606194);
}

double NNfunction_ns_chi01_dL::synapse0x2f12080() {
   return (neuron0x314ad20()*-0.0350927);
}

double NNfunction_ns_chi01_dL::synapse0x2f120c0() {
   return (neuron0x314b060()*0.839996);
}

double NNfunction_ns_chi01_dL::synapse0x2f12100() {
   return (neuron0x314b3a0()*0.389147);
}

double NNfunction_ns_chi01_dL::synapse0x2f12140() {
   return (neuron0x314b6e0()*-0.893281);
}

double NNfunction_ns_chi01_dL::synapse0x2f12180() {
   return (neuron0x314ba20()*0.560969);
}

double NNfunction_ns_chi01_dL::synapse0x2f121c0() {
   return (neuron0x314bd60()*0.404076);
}

double NNfunction_ns_chi01_dL::synapse0x3150a00() {
   return (neuron0x314c0a0()*-0.603361);
}

double NNfunction_ns_chi01_dL::synapse0x3150a40() {
   return (neuron0x314c600()*-0.508045);
}

double NNfunction_ns_chi01_dL::synapse0x2f12310() {
   return (neuron0x314c820()*0.0867135);
}

double NNfunction_ns_chi01_dL::synapse0x2f12350() {
   return (neuron0x314cb60()*0.432808);
}

double NNfunction_ns_chi01_dL::synapse0x2f12390() {
   return (neuron0x314cea0()*0.588458);
}

double NNfunction_ns_chi01_dL::synapse0x2f123d0() {
   return (neuron0x314d1e0()*0.0334232);
}

double NNfunction_ns_chi01_dL::synapse0x2f12410() {
   return (neuron0x314d520()*-0.178838);
}

double NNfunction_ns_chi01_dL::synapse0x3151600() {
   return (neuron0x314d860()*0.850383);
}

double NNfunction_ns_chi01_dL::synapse0x3151980() {
   return (neuron0x3148d30()*-0.0455119);
}

double NNfunction_ns_chi01_dL::synapse0x31519c0() {
   return (neuron0x3148fe0()*-9.22159);
}

double NNfunction_ns_chi01_dL::synapse0x3151a00() {
   return (neuron0x3149320()*3.98566);
}

double NNfunction_ns_chi01_dL::synapse0x3151a40() {
   return (neuron0x3149660()*0.0254721);
}

double NNfunction_ns_chi01_dL::synapse0x3151a80() {
   return (neuron0x31499a0()*-0.0361704);
}

double NNfunction_ns_chi01_dL::synapse0x3151ac0() {
   return (neuron0x3149ce0()*-0.0285151);
}

double NNfunction_ns_chi01_dL::synapse0x3151b00() {
   return (neuron0x314a020()*-0.0089931);
}

double NNfunction_ns_chi01_dL::synapse0x3151b40() {
   return (neuron0x314a360()*-0.0486004);
}

double NNfunction_ns_chi01_dL::synapse0x3151b80() {
   return (neuron0x314a6a0()*-0.0493442);
}

double NNfunction_ns_chi01_dL::synapse0x3151bc0() {
   return (neuron0x314a9e0()*0.000778833);
}

double NNfunction_ns_chi01_dL::synapse0x3151c00() {
   return (neuron0x314ad20()*-0.0240244);
}

double NNfunction_ns_chi01_dL::synapse0x3151c40() {
   return (neuron0x314b060()*0.160729);
}

double NNfunction_ns_chi01_dL::synapse0x3151c80() {
   return (neuron0x314b3a0()*0.0247703);
}

double NNfunction_ns_chi01_dL::synapse0x3151cc0() {
   return (neuron0x314b6e0()*0.0132351);
}

double NNfunction_ns_chi01_dL::synapse0x3151d00() {
   return (neuron0x314ba20()*0.0489719);
}

double NNfunction_ns_chi01_dL::synapse0x3151d40() {
   return (neuron0x314bd60()*0.083876);
}

double NNfunction_ns_chi01_dL::synapse0x31517d0() {
   return (neuron0x314c0a0()*-0.0327943);
}

double NNfunction_ns_chi01_dL::synapse0x3151810() {
   return (neuron0x314c600()*-0.0406904);
}

double NNfunction_ns_chi01_dL::synapse0x3151e90() {
   return (neuron0x314c820()*-0.00722577);
}

double NNfunction_ns_chi01_dL::synapse0x3151ed0() {
   return (neuron0x314cb60()*0.101646);
}

double NNfunction_ns_chi01_dL::synapse0x3151f10() {
   return (neuron0x314cea0()*0.0448385);
}

double NNfunction_ns_chi01_dL::synapse0x3151f50() {
   return (neuron0x314d1e0()*-0.0707689);
}

double NNfunction_ns_chi01_dL::synapse0x3151f90() {
   return (neuron0x314d520()*-0.0567231);
}

double NNfunction_ns_chi01_dL::synapse0x3151fd0() {
   return (neuron0x314d860()*-0.0607954);
}

double NNfunction_ns_chi01_dL::synapse0x3152350() {
   return (neuron0x3148d30()*0.862595);
}

double NNfunction_ns_chi01_dL::synapse0x3152390() {
   return (neuron0x3148fe0()*0.0987872);
}

double NNfunction_ns_chi01_dL::synapse0x31523d0() {
   return (neuron0x3149320()*1.01215);
}

double NNfunction_ns_chi01_dL::synapse0x3152410() {
   return (neuron0x3149660()*-0.156751);
}

double NNfunction_ns_chi01_dL::synapse0x3152450() {
   return (neuron0x31499a0()*0.20254);
}

double NNfunction_ns_chi01_dL::synapse0x3152490() {
   return (neuron0x3149ce0()*0.796229);
}

double NNfunction_ns_chi01_dL::synapse0x31524d0() {
   return (neuron0x314a020()*0.400422);
}

double NNfunction_ns_chi01_dL::synapse0x3152510() {
   return (neuron0x314a360()*0.317411);
}

double NNfunction_ns_chi01_dL::synapse0x3152550() {
   return (neuron0x314a6a0()*-0.301513);
}

double NNfunction_ns_chi01_dL::synapse0x3152590() {
   return (neuron0x314a9e0()*-0.453381);
}

double NNfunction_ns_chi01_dL::synapse0x31525d0() {
   return (neuron0x314ad20()*-0.137744);
}

double NNfunction_ns_chi01_dL::synapse0x3152610() {
   return (neuron0x314b060()*-0.522577);
}

double NNfunction_ns_chi01_dL::synapse0x3152650() {
   return (neuron0x314b3a0()*-0.97047);
}

double NNfunction_ns_chi01_dL::synapse0x3152690() {
   return (neuron0x314b6e0()*0.386561);
}

double NNfunction_ns_chi01_dL::synapse0x31526d0() {
   return (neuron0x314ba20()*-0.35046);
}

double NNfunction_ns_chi01_dL::synapse0x3152710() {
   return (neuron0x314bd60()*0.602431);
}

double NNfunction_ns_chi01_dL::synapse0x31521a0() {
   return (neuron0x314c0a0()*-0.96173);
}

double NNfunction_ns_chi01_dL::synapse0x31521e0() {
   return (neuron0x314c600()*-1.19499);
}

double NNfunction_ns_chi01_dL::synapse0x3152860() {
   return (neuron0x314c820()*0.611064);
}

double NNfunction_ns_chi01_dL::synapse0x31528a0() {
   return (neuron0x314cb60()*0.0924594);
}

double NNfunction_ns_chi01_dL::synapse0x31528e0() {
   return (neuron0x314cea0()*-0.690562);
}

double NNfunction_ns_chi01_dL::synapse0x3152920() {
   return (neuron0x314d1e0()*0.738368);
}

double NNfunction_ns_chi01_dL::synapse0x3152960() {
   return (neuron0x314d520()*0.135675);
}

double NNfunction_ns_chi01_dL::synapse0x31529a0() {
   return (neuron0x314d860()*-1.34344);
}

double NNfunction_ns_chi01_dL::synapse0x314c4f0() {
   return (neuron0x3148d30()*0.00599184);
}

double NNfunction_ns_chi01_dL::synapse0x314c530() {
   return (neuron0x3148fe0()*15.7839);
}

double NNfunction_ns_chi01_dL::synapse0x314c570() {
   return (neuron0x3149320()*-1.12532);
}

double NNfunction_ns_chi01_dL::synapse0x314c5b0() {
   return (neuron0x3149660()*-0.0255304);
}

double NNfunction_ns_chi01_dL::synapse0x3152f30() {
   return (neuron0x31499a0()*0.0292342);
}

double NNfunction_ns_chi01_dL::synapse0x3152f70() {
   return (neuron0x3149ce0()*-0.0101681);
}

double NNfunction_ns_chi01_dL::synapse0x3152fb0() {
   return (neuron0x314a020()*-0.00458307);
}

double NNfunction_ns_chi01_dL::synapse0x3152ff0() {
   return (neuron0x314a360()*0.00153431);
}

double NNfunction_ns_chi01_dL::synapse0x3153030() {
   return (neuron0x314a6a0()*0.0406971);
}

double NNfunction_ns_chi01_dL::synapse0x3153070() {
   return (neuron0x314a9e0()*0.0117983);
}

double NNfunction_ns_chi01_dL::synapse0x31530b0() {
   return (neuron0x314ad20()*0.00822366);
}

double NNfunction_ns_chi01_dL::synapse0x31530f0() {
   return (neuron0x314b060()*-0.0101176);
}

double NNfunction_ns_chi01_dL::synapse0x3153130() {
   return (neuron0x314b3a0()*0.00117368);
}

double NNfunction_ns_chi01_dL::synapse0x3153170() {
   return (neuron0x314b6e0()*-0.0084774);
}

double NNfunction_ns_chi01_dL::synapse0x31531b0() {
   return (neuron0x314ba20()*-5.44375e-05);
}

double NNfunction_ns_chi01_dL::synapse0x31531f0() {
   return (neuron0x314bd60()*-0.0121421);
}

double NNfunction_ns_chi01_dL::synapse0x3152b70() {
   return (neuron0x314c0a0()*0.0170683);
}

double NNfunction_ns_chi01_dL::synapse0x3152bb0() {
   return (neuron0x314c600()*0.000831409);
}

double NNfunction_ns_chi01_dL::synapse0x3153340() {
   return (neuron0x314c820()*0.00814427);
}

double NNfunction_ns_chi01_dL::synapse0x3153380() {
   return (neuron0x314cb60()*0.00900034);
}

double NNfunction_ns_chi01_dL::synapse0x31533c0() {
   return (neuron0x314cea0()*0.0143623);
}

double NNfunction_ns_chi01_dL::synapse0x3153400() {
   return (neuron0x314d1e0()*-0.00730579);
}

double NNfunction_ns_chi01_dL::synapse0x3153440() {
   return (neuron0x314d520()*0.0158326);
}

double NNfunction_ns_chi01_dL::synapse0x3153480() {
   return (neuron0x314d860()*0.0142609);
}

double NNfunction_ns_chi01_dL::synapse0x3153800() {
   return (neuron0x3148d30()*-0.319505);
}

double NNfunction_ns_chi01_dL::synapse0x3153840() {
   return (neuron0x3148fe0()*0.137634);
}

double NNfunction_ns_chi01_dL::synapse0x3153880() {
   return (neuron0x3149320()*-0.0204134);
}

double NNfunction_ns_chi01_dL::synapse0x31538c0() {
   return (neuron0x3149660()*0.120865);
}

double NNfunction_ns_chi01_dL::synapse0x3153900() {
   return (neuron0x31499a0()*-0.125867);
}

double NNfunction_ns_chi01_dL::synapse0x3153940() {
   return (neuron0x3149ce0()*0.046048);
}

double NNfunction_ns_chi01_dL::synapse0x3153980() {
   return (neuron0x314a020()*-0.562631);
}

double NNfunction_ns_chi01_dL::synapse0x31539c0() {
   return (neuron0x314a360()*-0.332544);
}

double NNfunction_ns_chi01_dL::synapse0x3153a00() {
   return (neuron0x314a6a0()*0.0239071);
}

double NNfunction_ns_chi01_dL::synapse0x3153a40() {
   return (neuron0x314a9e0()*0.260968);
}

double NNfunction_ns_chi01_dL::synapse0x3153a80() {
   return (neuron0x314ad20()*-0.0859337);
}

double NNfunction_ns_chi01_dL::synapse0x3153ac0() {
   return (neuron0x314b060()*-0.233444);
}

double NNfunction_ns_chi01_dL::synapse0x3153b00() {
   return (neuron0x314b3a0()*-0.207922);
}

double NNfunction_ns_chi01_dL::synapse0x3153b40() {
   return (neuron0x314b6e0()*0.174912);
}

double NNfunction_ns_chi01_dL::synapse0x3153b80() {
   return (neuron0x314ba20()*-0.293944);
}

double NNfunction_ns_chi01_dL::synapse0x3153bc0() {
   return (neuron0x314bd60()*-0.230935);
}

double NNfunction_ns_chi01_dL::synapse0x3153650() {
   return (neuron0x314c0a0()*0.51704);
}

double NNfunction_ns_chi01_dL::synapse0x3153690() {
   return (neuron0x314c600()*-0.0540583);
}

double NNfunction_ns_chi01_dL::synapse0x3153d10() {
   return (neuron0x314c820()*-0.00671455);
}

double NNfunction_ns_chi01_dL::synapse0x3153d50() {
   return (neuron0x314cb60()*-0.354781);
}

double NNfunction_ns_chi01_dL::synapse0x3153d90() {
   return (neuron0x314cea0()*0.185509);
}

double NNfunction_ns_chi01_dL::synapse0x3153dd0() {
   return (neuron0x314d1e0()*-0.255505);
}

double NNfunction_ns_chi01_dL::synapse0x3153e10() {
   return (neuron0x314d520()*0.0424657);
}

double NNfunction_ns_chi01_dL::synapse0x3153e50() {
   return (neuron0x314d860()*-0.199186);
}

double NNfunction_ns_chi01_dL::synapse0x31541d0() {
   return (neuron0x3148d30()*-0.120293);
}

double NNfunction_ns_chi01_dL::synapse0x3154210() {
   return (neuron0x3148fe0()*2.46457);
}

double NNfunction_ns_chi01_dL::synapse0x3154250() {
   return (neuron0x3149320()*-1.5648);
}

double NNfunction_ns_chi01_dL::synapse0x3154290() {
   return (neuron0x3149660()*-0.101626);
}

double NNfunction_ns_chi01_dL::synapse0x31542d0() {
   return (neuron0x31499a0()*-0.0110982);
}

double NNfunction_ns_chi01_dL::synapse0x3154310() {
   return (neuron0x3149ce0()*-0.0591125);
}

double NNfunction_ns_chi01_dL::synapse0x3154350() {
   return (neuron0x314a020()*-0.00012351);
}

double NNfunction_ns_chi01_dL::synapse0x3154390() {
   return (neuron0x314a360()*-0.0566727);
}

double NNfunction_ns_chi01_dL::synapse0x31543d0() {
   return (neuron0x314a6a0()*0.0788282);
}

double NNfunction_ns_chi01_dL::synapse0x3154410() {
   return (neuron0x314a9e0()*0.100487);
}

double NNfunction_ns_chi01_dL::synapse0x3154450() {
   return (neuron0x314ad20()*-0.0553006);
}

double NNfunction_ns_chi01_dL::synapse0x3154490() {
   return (neuron0x314b060()*0.372952);
}

double NNfunction_ns_chi01_dL::synapse0x31544d0() {
   return (neuron0x314b3a0()*0.0515989);
}

double NNfunction_ns_chi01_dL::synapse0x3154510() {
   return (neuron0x314b6e0()*-0.032388);
}

double NNfunction_ns_chi01_dL::synapse0x3154550() {
   return (neuron0x314ba20()*0.0346749);
}

double NNfunction_ns_chi01_dL::synapse0x3154590() {
   return (neuron0x314bd60()*0.061956);
}

double NNfunction_ns_chi01_dL::synapse0x3154020() {
   return (neuron0x314c0a0()*-0.0371626);
}

double NNfunction_ns_chi01_dL::synapse0x3154060() {
   return (neuron0x314c600()*0.0193108);
}

double NNfunction_ns_chi01_dL::synapse0x3150df0() {
   return (neuron0x314c820()*-0.00444946);
}

double NNfunction_ns_chi01_dL::synapse0x3150e30() {
   return (neuron0x314cb60()*-0.0049667);
}

double NNfunction_ns_chi01_dL::synapse0x3150e70() {
   return (neuron0x314cea0()*0.0507275);
}

double NNfunction_ns_chi01_dL::synapse0x3150eb0() {
   return (neuron0x314d1e0()*0.00065913);
}

double NNfunction_ns_chi01_dL::synapse0x3150ef0() {
   return (neuron0x314d520()*-0.00913211);
}

double NNfunction_ns_chi01_dL::synapse0x3150f30() {
   return (neuron0x314d860()*-1.04146);
}

double NNfunction_ns_chi01_dL::synapse0x31512b0() {
   return (neuron0x3148d30()*0.294813);
}

double NNfunction_ns_chi01_dL::synapse0x31512f0() {
   return (neuron0x3148fe0()*-0.187007);
}

double NNfunction_ns_chi01_dL::synapse0x3151330() {
   return (neuron0x3149320()*-1.87766);
}

double NNfunction_ns_chi01_dL::synapse0x3151370() {
   return (neuron0x3149660()*0.23054);
}

double NNfunction_ns_chi01_dL::synapse0x31513b0() {
   return (neuron0x31499a0()*0.0633724);
}

double NNfunction_ns_chi01_dL::synapse0x31513f0() {
   return (neuron0x3149ce0()*-0.138727);
}

double NNfunction_ns_chi01_dL::synapse0x3151430() {
   return (neuron0x314a020()*-0.177107);
}

double NNfunction_ns_chi01_dL::synapse0x3151470() {
   return (neuron0x314a360()*-0.00437194);
}

double NNfunction_ns_chi01_dL::synapse0x31514b0() {
   return (neuron0x314a6a0()*-0.0281336);
}

double NNfunction_ns_chi01_dL::synapse0x31514f0() {
   return (neuron0x314a9e0()*-0.0815998);
}

double NNfunction_ns_chi01_dL::synapse0x3151530() {
   return (neuron0x314ad20()*-0.0892042);
}

double NNfunction_ns_chi01_dL::synapse0x3151570() {
   return (neuron0x314b060()*0.305734);
}

double NNfunction_ns_chi01_dL::synapse0x31515b0() {
   return (neuron0x314b3a0()*-0.0848297);
}

double NNfunction_ns_chi01_dL::synapse0x31556f0() {
   return (neuron0x314b6e0()*-0.0377533);
}

double NNfunction_ns_chi01_dL::synapse0x3155730() {
   return (neuron0x314ba20()*-0.330745);
}

double NNfunction_ns_chi01_dL::synapse0x3155770() {
   return (neuron0x314bd60()*-0.0327491);
}

double NNfunction_ns_chi01_dL::synapse0x3151100() {
   return (neuron0x314c0a0()*0.123819);
}

double NNfunction_ns_chi01_dL::synapse0x3151140() {
   return (neuron0x314c600()*-0.0112353);
}

double NNfunction_ns_chi01_dL::synapse0x31558c0() {
   return (neuron0x314c820()*0.0606658);
}

double NNfunction_ns_chi01_dL::synapse0x3155900() {
   return (neuron0x314cb60()*-0.122629);
}

double NNfunction_ns_chi01_dL::synapse0x3155940() {
   return (neuron0x314cea0()*0.0983974);
}

double NNfunction_ns_chi01_dL::synapse0x3155980() {
   return (neuron0x314d1e0()*-0.0537774);
}

double NNfunction_ns_chi01_dL::synapse0x31559c0() {
   return (neuron0x314d520()*0.105748);
}

double NNfunction_ns_chi01_dL::synapse0x3155a00() {
   return (neuron0x314d860()*2.28562);
}

double NNfunction_ns_chi01_dL::synapse0x3155d80() {
   return (neuron0x3148d30()*-0.000828455);
}

double NNfunction_ns_chi01_dL::synapse0x3155dc0() {
   return (neuron0x3148fe0()*-0.0111987);
}

double NNfunction_ns_chi01_dL::synapse0x3155e00() {
   return (neuron0x3149320()*0.0816431);
}

double NNfunction_ns_chi01_dL::synapse0x3155e40() {
   return (neuron0x3149660()*0.00976855);
}

double NNfunction_ns_chi01_dL::synapse0x3155e80() {
   return (neuron0x31499a0()*0.051769);
}

double NNfunction_ns_chi01_dL::synapse0x3155ec0() {
   return (neuron0x3149ce0()*-0.00478788);
}

double NNfunction_ns_chi01_dL::synapse0x3155f00() {
   return (neuron0x314a020()*-0.00342367);
}

double NNfunction_ns_chi01_dL::synapse0x3155f40() {
   return (neuron0x314a360()*-0.00225915);
}

double NNfunction_ns_chi01_dL::synapse0x3155f80() {
   return (neuron0x314a6a0()*-0.00671046);
}

double NNfunction_ns_chi01_dL::synapse0x3155fc0() {
   return (neuron0x314a9e0()*0.00465252);
}

double NNfunction_ns_chi01_dL::synapse0x3156000() {
   return (neuron0x314ad20()*0.0162744);
}

double NNfunction_ns_chi01_dL::synapse0x3156040() {
   return (neuron0x314b060()*0.0464677);
}

double NNfunction_ns_chi01_dL::synapse0x3156080() {
   return (neuron0x314b3a0()*-0.0171175);
}

double NNfunction_ns_chi01_dL::synapse0x31560c0() {
   return (neuron0x314b6e0()*0.00220428);
}

double NNfunction_ns_chi01_dL::synapse0x3156100() {
   return (neuron0x314ba20()*-0.0120858);
}

double NNfunction_ns_chi01_dL::synapse0x3156140() {
   return (neuron0x314bd60()*-0.0100931);
}

double NNfunction_ns_chi01_dL::synapse0x3155bd0() {
   return (neuron0x314c0a0()*0.00698694);
}

double NNfunction_ns_chi01_dL::synapse0x3155c10() {
   return (neuron0x314c600()*0.00592571);
}

double NNfunction_ns_chi01_dL::synapse0x3156290() {
   return (neuron0x314c820()*0.00780382);
}

double NNfunction_ns_chi01_dL::synapse0x31562d0() {
   return (neuron0x314cb60()*-0.000587203);
}

double NNfunction_ns_chi01_dL::synapse0x3156310() {
   return (neuron0x314cea0()*-0.00978044);
}

double NNfunction_ns_chi01_dL::synapse0x3156350() {
   return (neuron0x314d1e0()*-0.00541907);
}

double NNfunction_ns_chi01_dL::synapse0x3156390() {
   return (neuron0x314d520()*0.00346655);
}

double NNfunction_ns_chi01_dL::synapse0x31563d0() {
   return (neuron0x314d860()*18.8174);
}

double NNfunction_ns_chi01_dL::synapse0x3156750() {
   return (neuron0x3148d30()*0.0196666);
}

double NNfunction_ns_chi01_dL::synapse0x3156790() {
   return (neuron0x3148fe0()*0.126182);
}

double NNfunction_ns_chi01_dL::synapse0x31567d0() {
   return (neuron0x3149320()*0.0388342);
}

double NNfunction_ns_chi01_dL::synapse0x3156810() {
   return (neuron0x3149660()*0.0493509);
}

double NNfunction_ns_chi01_dL::synapse0x3156850() {
   return (neuron0x31499a0()*-0.0146219);
}

double NNfunction_ns_chi01_dL::synapse0x3156890() {
   return (neuron0x3149ce0()*0.00924666);
}

double NNfunction_ns_chi01_dL::synapse0x31568d0() {
   return (neuron0x314a020()*-0.0469371);
}

double NNfunction_ns_chi01_dL::synapse0x3156910() {
   return (neuron0x314a360()*-0.0538734);
}

double NNfunction_ns_chi01_dL::synapse0x3156950() {
   return (neuron0x314a6a0()*-0.0503522);
}

double NNfunction_ns_chi01_dL::synapse0x3156990() {
   return (neuron0x314a9e0()*-0.0120592);
}

double NNfunction_ns_chi01_dL::synapse0x31569d0() {
   return (neuron0x314ad20()*-0.0180831);
}

double NNfunction_ns_chi01_dL::synapse0x3156a10() {
   return (neuron0x314b060()*0.271686);
}

double NNfunction_ns_chi01_dL::synapse0x3156a50() {
   return (neuron0x314b3a0()*-0.0401149);
}

double NNfunction_ns_chi01_dL::synapse0x3156a90() {
   return (neuron0x314b6e0()*-0.0255059);
}

double NNfunction_ns_chi01_dL::synapse0x3156ad0() {
   return (neuron0x314ba20()*-0.00452576);
}

double NNfunction_ns_chi01_dL::synapse0x3156b10() {
   return (neuron0x314bd60()*-0.0062801);
}

double NNfunction_ns_chi01_dL::synapse0x31565a0() {
   return (neuron0x314c0a0()*-0.0285729);
}

double NNfunction_ns_chi01_dL::synapse0x31565e0() {
   return (neuron0x314c600()*0.0203272);
}

double NNfunction_ns_chi01_dL::synapse0x3156c60() {
   return (neuron0x314c820()*-0.0183599);
}

double NNfunction_ns_chi01_dL::synapse0x3156ca0() {
   return (neuron0x314cb60()*-0.018968);
}

double NNfunction_ns_chi01_dL::synapse0x3156ce0() {
   return (neuron0x314cea0()*0.0276359);
}

double NNfunction_ns_chi01_dL::synapse0x3156d20() {
   return (neuron0x314d1e0()*0.0133978);
}

double NNfunction_ns_chi01_dL::synapse0x3156d60() {
   return (neuron0x314d520()*0.0135548);
}

double NNfunction_ns_chi01_dL::synapse0x3156da0() {
   return (neuron0x314d860()*6.266);
}

double NNfunction_ns_chi01_dL::synapse0x3157120() {
   return (neuron0x3148d30()*-0.0513853);
}

double NNfunction_ns_chi01_dL::synapse0x3157160() {
   return (neuron0x3148fe0()*0.0157353);
}

double NNfunction_ns_chi01_dL::synapse0x31571a0() {
   return (neuron0x3149320()*-0.433062);
}

double NNfunction_ns_chi01_dL::synapse0x31571e0() {
   return (neuron0x3149660()*-0.0796864);
}

double NNfunction_ns_chi01_dL::synapse0x3157220() {
   return (neuron0x31499a0()*0.0163506);
}

double NNfunction_ns_chi01_dL::synapse0x3157260() {
   return (neuron0x3149ce0()*0.00464029);
}

double NNfunction_ns_chi01_dL::synapse0x31572a0() {
   return (neuron0x314a020()*-0.00833768);
}

double NNfunction_ns_chi01_dL::synapse0x31572e0() {
   return (neuron0x314a360()*0.00232306);
}

double NNfunction_ns_chi01_dL::synapse0x3157320() {
   return (neuron0x314a6a0()*0.00118259);
}

double NNfunction_ns_chi01_dL::synapse0x3157360() {
   return (neuron0x314a9e0()*0.0100656);
}

double NNfunction_ns_chi01_dL::synapse0x31573a0() {
   return (neuron0x314ad20()*0.0178686);
}

double NNfunction_ns_chi01_dL::synapse0x31573e0() {
   return (neuron0x314b060()*1.77672);
}

double NNfunction_ns_chi01_dL::synapse0x3157420() {
   return (neuron0x314b3a0()*0.0150091);
}

double NNfunction_ns_chi01_dL::synapse0x3157460() {
   return (neuron0x314b6e0()*0.0196831);
}

double NNfunction_ns_chi01_dL::synapse0x31574a0() {
   return (neuron0x314ba20()*0.0356395);
}

double NNfunction_ns_chi01_dL::synapse0x31574e0() {
   return (neuron0x314bd60()*0.0204319);
}

double NNfunction_ns_chi01_dL::synapse0x3156f70() {
   return (neuron0x314c0a0()*0.00790105);
}

double NNfunction_ns_chi01_dL::synapse0x3156fb0() {
   return (neuron0x314c600()*0.0189224);
}

double NNfunction_ns_chi01_dL::synapse0x3157630() {
   return (neuron0x314c820()*-0.000245398);
}

double NNfunction_ns_chi01_dL::synapse0x3157670() {
   return (neuron0x314cb60()*0.0185263);
}

double NNfunction_ns_chi01_dL::synapse0x31576b0() {
   return (neuron0x314cea0()*0.0163189);
}

double NNfunction_ns_chi01_dL::synapse0x31576f0() {
   return (neuron0x314d1e0()*0.0136607);
}

double NNfunction_ns_chi01_dL::synapse0x3157730() {
   return (neuron0x314d520()*-0.00814248);
}

double NNfunction_ns_chi01_dL::synapse0x3157770() {
   return (neuron0x314d860()*0.0146912);
}

double NNfunction_ns_chi01_dL::synapse0x3157af0() {
   return (neuron0x3148d30()*0.250578);
}

double NNfunction_ns_chi01_dL::synapse0x3148ec0() {
   return (neuron0x3148fe0()*0.0113685);
}

double NNfunction_ns_chi01_dL::synapse0x3148f00() {
   return (neuron0x3149320()*-0.297883);
}

double NNfunction_ns_chi01_dL::synapse0x3149200() {
   return (neuron0x3149660()*-0.741002);
}

double NNfunction_ns_chi01_dL::synapse0x3149240() {
   return (neuron0x31499a0()*-0.336665);
}

double NNfunction_ns_chi01_dL::synapse0x3149540() {
   return (neuron0x3149ce0()*0.372834);
}

double NNfunction_ns_chi01_dL::synapse0x3149580() {
   return (neuron0x314a020()*-0.291234);
}

double NNfunction_ns_chi01_dL::synapse0x3149880() {
   return (neuron0x314a360()*-0.144803);
}

double NNfunction_ns_chi01_dL::synapse0x31498c0() {
   return (neuron0x314a6a0()*-0.334449);
}

double NNfunction_ns_chi01_dL::synapse0x3149bc0() {
   return (neuron0x314a9e0()*-0.646309);
}

double NNfunction_ns_chi01_dL::synapse0x3149c00() {
   return (neuron0x314ad20()*0.573597);
}

double NNfunction_ns_chi01_dL::synapse0x3149f00() {
   return (neuron0x314b060()*0.933392);
}

double NNfunction_ns_chi01_dL::synapse0x3149f40() {
   return (neuron0x314b3a0()*0.145922);
}

double NNfunction_ns_chi01_dL::synapse0x314a240() {
   return (neuron0x314b6e0()*0.108493);
}

double NNfunction_ns_chi01_dL::synapse0x314a280() {
   return (neuron0x314ba20()*-0.10098);
}

double NNfunction_ns_chi01_dL::synapse0x314a580() {
   return (neuron0x314bd60()*-0.179222);
}

double NNfunction_ns_chi01_dL::synapse0x314a5c0() {
   return (neuron0x314c0a0()*-0.207395);
}

double NNfunction_ns_chi01_dL::synapse0x314a8c0() {
   return (neuron0x314c600()*-0.0826498);
}

double NNfunction_ns_chi01_dL::synapse0x314a900() {
   return (neuron0x314c820()*0.0601864);
}

double NNfunction_ns_chi01_dL::synapse0x314ac00() {
   return (neuron0x314cb60()*-0.515725);
}

double NNfunction_ns_chi01_dL::synapse0x314ac40() {
   return (neuron0x314cea0()*-0.175926);
}

double NNfunction_ns_chi01_dL::synapse0x314af40() {
   return (neuron0x314d1e0()*0.223199);
}

double NNfunction_ns_chi01_dL::synapse0x314af80() {
   return (neuron0x314d520()*0.133045);
}

double NNfunction_ns_chi01_dL::synapse0x314b280() {
   return (neuron0x314d860()*-0.867291);
}

double NNfunction_ns_chi01_dL::synapse0x314b2c0() {
   return (neuron0x3148d30()*-0.00613503);
}

double NNfunction_ns_chi01_dL::synapse0x314bf80() {
   return (neuron0x3148fe0()*-0.00309926);
}

double NNfunction_ns_chi01_dL::synapse0x314bfc0() {
   return (neuron0x3149320()*-0.0108622);
}

double NNfunction_ns_chi01_dL::synapse0x3157940() {
   return (neuron0x3149660()*-1.97518);
}

double NNfunction_ns_chi01_dL::synapse0x3157980() {
   return (neuron0x31499a0()*-0.00235433);
}

double NNfunction_ns_chi01_dL::synapse0x314c2c0() {
   return (neuron0x3149ce0()*-0.00806161);
}

double NNfunction_ns_chi01_dL::synapse0x314c300() {
   return (neuron0x314a020()*-0.00184107);
}

double NNfunction_ns_chi01_dL::synapse0x2f03cd0() {
   return (neuron0x314a360()*0.0034911);
}

double NNfunction_ns_chi01_dL::synapse0x2f03d10() {
   return (neuron0x314a6a0()*-9.86222e-05);
}

double NNfunction_ns_chi01_dL::synapse0x314ca40() {
   return (neuron0x314a9e0()*-0.0172615);
}

double NNfunction_ns_chi01_dL::synapse0x314ca80() {
   return (neuron0x314ad20()*-0.0114864);
}

double NNfunction_ns_chi01_dL::synapse0x314cd80() {
   return (neuron0x314b060()*0.17732);
}

double NNfunction_ns_chi01_dL::synapse0x314cdc0() {
   return (neuron0x314b3a0()*0.00142749);
}

double NNfunction_ns_chi01_dL::synapse0x314d0c0() {
   return (neuron0x314b6e0()*0.023519);
}

double NNfunction_ns_chi01_dL::synapse0x314d100() {
   return (neuron0x314ba20()*-0.00578694);
}

double NNfunction_ns_chi01_dL::synapse0x314d400() {
   return (neuron0x314bd60()*0.00553273);
}

double NNfunction_ns_chi01_dL::synapse0x314d440() {
   return (neuron0x314c0a0()*0.000137198);
}

double NNfunction_ns_chi01_dL::synapse0x314d740() {
   return (neuron0x314c600()*-0.00484785);
}

double NNfunction_ns_chi01_dL::synapse0x314d780() {
   return (neuron0x314c820()*-0.0147311);
}

double NNfunction_ns_chi01_dL::synapse0x314da80() {
   return (neuron0x314cb60()*-0.00439097);
}

double NNfunction_ns_chi01_dL::synapse0x314dac0() {
   return (neuron0x314cea0()*-0.00861841);
}

double NNfunction_ns_chi01_dL::synapse0x314b5c0() {
   return (neuron0x314d1e0()*3.75458e-05);
}

double NNfunction_ns_chi01_dL::synapse0x314b600() {
   return (neuron0x314d520()*0.00438051);
}

double NNfunction_ns_chi01_dL::synapse0x3159860() {
   return (neuron0x314d860()*-0.0250684);
}

double NNfunction_ns_chi01_dL::synapse0x3159be0() {
   return (neuron0x3148d30()*0.456541);
}

double NNfunction_ns_chi01_dL::synapse0x3159c20() {
   return (neuron0x3148fe0()*0.0702488);
}

double NNfunction_ns_chi01_dL::synapse0x3159c60() {
   return (neuron0x3149320()*0.426439);
}

double NNfunction_ns_chi01_dL::synapse0x3159ca0() {
   return (neuron0x3149660()*0.207617);
}

double NNfunction_ns_chi01_dL::synapse0x3159ce0() {
   return (neuron0x31499a0()*0.272534);
}

double NNfunction_ns_chi01_dL::synapse0x3159d20() {
   return (neuron0x3149ce0()*0.626396);
}

double NNfunction_ns_chi01_dL::synapse0x3159d60() {
   return (neuron0x314a020()*0.26875);
}

double NNfunction_ns_chi01_dL::synapse0x3159da0() {
   return (neuron0x314a360()*-0.228034);
}

double NNfunction_ns_chi01_dL::synapse0x3159de0() {
   return (neuron0x314a6a0()*-0.259635);
}

double NNfunction_ns_chi01_dL::synapse0x3159e20() {
   return (neuron0x314a9e0()*-0.20382);
}

double NNfunction_ns_chi01_dL::synapse0x3159e60() {
   return (neuron0x314ad20()*-0.246425);
}

double NNfunction_ns_chi01_dL::synapse0x3159ea0() {
   return (neuron0x314b060()*0.56299);
}

double NNfunction_ns_chi01_dL::synapse0x3159ee0() {
   return (neuron0x314b3a0()*-0.782807);
}

double NNfunction_ns_chi01_dL::synapse0x3159f20() {
   return (neuron0x314b6e0()*0.133818);
}

double NNfunction_ns_chi01_dL::synapse0x3159f60() {
   return (neuron0x314ba20()*-0.137386);
}

double NNfunction_ns_chi01_dL::synapse0x3159fa0() {
   return (neuron0x314bd60()*0.307179);
}

double NNfunction_ns_chi01_dL::synapse0x3159a30() {
   return (neuron0x314c0a0()*-1.00602);
}

double NNfunction_ns_chi01_dL::synapse0x3159a70() {
   return (neuron0x314c600()*-0.670716);
}

double NNfunction_ns_chi01_dL::synapse0x315a0f0() {
   return (neuron0x314c820()*0.385235);
}

double NNfunction_ns_chi01_dL::synapse0x315a130() {
   return (neuron0x314cb60()*-0.0098381);
}

double NNfunction_ns_chi01_dL::synapse0x315a170() {
   return (neuron0x314cea0()*-0.436464);
}

double NNfunction_ns_chi01_dL::synapse0x315a1b0() {
   return (neuron0x314d1e0()*0.632461);
}

double NNfunction_ns_chi01_dL::synapse0x315a1f0() {
   return (neuron0x314d520()*-0.0615258);
}

double NNfunction_ns_chi01_dL::synapse0x315a230() {
   return (neuron0x314d860()*-1.08206);
}

double NNfunction_ns_chi01_dL::synapse0x315a5b0() {
   return (neuron0x3148d30()*0.00479203);
}

double NNfunction_ns_chi01_dL::synapse0x315a5f0() {
   return (neuron0x3148fe0()*0.0223613);
}

double NNfunction_ns_chi01_dL::synapse0x315a630() {
   return (neuron0x3149320()*0.0595113);
}

double NNfunction_ns_chi01_dL::synapse0x315a670() {
   return (neuron0x3149660()*2.18565);
}

double NNfunction_ns_chi01_dL::synapse0x315a6b0() {
   return (neuron0x31499a0()*0.0217537);
}

double NNfunction_ns_chi01_dL::synapse0x315a6f0() {
   return (neuron0x3149ce0()*0.0529167);
}

double NNfunction_ns_chi01_dL::synapse0x315a730() {
   return (neuron0x314a020()*0.00591219);
}

double NNfunction_ns_chi01_dL::synapse0x315a770() {
   return (neuron0x314a360()*0.00902779);
}

double NNfunction_ns_chi01_dL::synapse0x315a7b0() {
   return (neuron0x314a6a0()*-0.01896);
}

double NNfunction_ns_chi01_dL::synapse0x315a7f0() {
   return (neuron0x314a9e0()*0.0184983);
}

double NNfunction_ns_chi01_dL::synapse0x315a830() {
   return (neuron0x314ad20()*-0.000386477);
}

double NNfunction_ns_chi01_dL::synapse0x315a870() {
   return (neuron0x314b060()*-0.90102);
}

double NNfunction_ns_chi01_dL::synapse0x315a8b0() {
   return (neuron0x314b3a0()*0.0197008);
}

double NNfunction_ns_chi01_dL::synapse0x315a8f0() {
   return (neuron0x314b6e0()*-0.0474032);
}

double NNfunction_ns_chi01_dL::synapse0x315a930() {
   return (neuron0x314ba20()*0.0425387);
}

double NNfunction_ns_chi01_dL::synapse0x315a970() {
   return (neuron0x314bd60()*-0.00530061);
}

double NNfunction_ns_chi01_dL::synapse0x315a400() {
   return (neuron0x314c0a0()*-0.00756442);
}

double NNfunction_ns_chi01_dL::synapse0x315a440() {
   return (neuron0x314c600()*0.000933242);
}

double NNfunction_ns_chi01_dL::synapse0x315aac0() {
   return (neuron0x314c820()*0.0422152);
}

double NNfunction_ns_chi01_dL::synapse0x315ab00() {
   return (neuron0x314cb60()*-0.00222442);
}

double NNfunction_ns_chi01_dL::synapse0x315ab40() {
   return (neuron0x314cea0()*0.0520736);
}

double NNfunction_ns_chi01_dL::synapse0x315ab80() {
   return (neuron0x314d1e0()*0.00237768);
}

double NNfunction_ns_chi01_dL::synapse0x315abc0() {
   return (neuron0x314d520()*-0.0286803);
}

double NNfunction_ns_chi01_dL::synapse0x315ac00() {
   return (neuron0x314d860()*0.119257);
}

double NNfunction_ns_chi01_dL::synapse0x315af80() {
   return (neuron0x3148d30()*-0.017644);
}

double NNfunction_ns_chi01_dL::synapse0x315afc0() {
   return (neuron0x3148fe0()*18.5019);
}

double NNfunction_ns_chi01_dL::synapse0x315b000() {
   return (neuron0x3149320()*0.712666);
}

double NNfunction_ns_chi01_dL::synapse0x315b040() {
   return (neuron0x3149660()*-0.0272182);
}

double NNfunction_ns_chi01_dL::synapse0x315b080() {
   return (neuron0x31499a0()*0.00571808);
}

double NNfunction_ns_chi01_dL::synapse0x315b0c0() {
   return (neuron0x3149ce0()*0.00778851);
}

double NNfunction_ns_chi01_dL::synapse0x315b100() {
   return (neuron0x314a020()*-0.0195299);
}

double NNfunction_ns_chi01_dL::synapse0x315b140() {
   return (neuron0x314a360()*0.000850907);
}

double NNfunction_ns_chi01_dL::synapse0x315b180() {
   return (neuron0x314a6a0()*0.0312758);
}

double NNfunction_ns_chi01_dL::synapse0x315b1c0() {
   return (neuron0x314a9e0()*0.00315657);
}

double NNfunction_ns_chi01_dL::synapse0x315b200() {
   return (neuron0x314ad20()*-0.00621943);
}

double NNfunction_ns_chi01_dL::synapse0x315b240() {
   return (neuron0x314b060()*-0.101973);
}

double NNfunction_ns_chi01_dL::synapse0x315b280() {
   return (neuron0x314b3a0()*0.00825656);
}

double NNfunction_ns_chi01_dL::synapse0x315b2c0() {
   return (neuron0x314b6e0()*0.0209474);
}

double NNfunction_ns_chi01_dL::synapse0x315b300() {
   return (neuron0x314ba20()*-0.00632503);
}

double NNfunction_ns_chi01_dL::synapse0x315b340() {
   return (neuron0x314bd60()*-0.01903);
}

double NNfunction_ns_chi01_dL::synapse0x315add0() {
   return (neuron0x314c0a0()*0.00896878);
}

double NNfunction_ns_chi01_dL::synapse0x315ae10() {
   return (neuron0x314c600()*-0.0024025);
}

double NNfunction_ns_chi01_dL::synapse0x315b490() {
   return (neuron0x314c820()*0.00439022);
}

double NNfunction_ns_chi01_dL::synapse0x315b4d0() {
   return (neuron0x314cb60()*0.00432562);
}

double NNfunction_ns_chi01_dL::synapse0x315b510() {
   return (neuron0x314cea0()*-0.00576379);
}

double NNfunction_ns_chi01_dL::synapse0x315b550() {
   return (neuron0x314d1e0()*-0.0127008);
}

double NNfunction_ns_chi01_dL::synapse0x315b590() {
   return (neuron0x314d520()*0.0106337);
}

double NNfunction_ns_chi01_dL::synapse0x315b5d0() {
   return (neuron0x314d860()*0.00161154);
}

double NNfunction_ns_chi01_dL::synapse0x315b950() {
   return (neuron0x3148d30()*0.00807872);
}

double NNfunction_ns_chi01_dL::synapse0x315b990() {
   return (neuron0x3148fe0()*0.00334473);
}

double NNfunction_ns_chi01_dL::synapse0x315b9d0() {
   return (neuron0x3149320()*-0.00966163);
}

double NNfunction_ns_chi01_dL::synapse0x315ba10() {
   return (neuron0x3149660()*2.36829);
}

double NNfunction_ns_chi01_dL::synapse0x315ba50() {
   return (neuron0x31499a0()*-0.00130355);
}

double NNfunction_ns_chi01_dL::synapse0x315ba90() {
   return (neuron0x3149ce0()*-0.00322563);
}

double NNfunction_ns_chi01_dL::synapse0x315bad0() {
   return (neuron0x314a020()*-0.0126022);
}

double NNfunction_ns_chi01_dL::synapse0x315bb10() {
   return (neuron0x314a360()*-0.00257442);
}

double NNfunction_ns_chi01_dL::synapse0x315bb50() {
   return (neuron0x314a6a0()*0.00480565);
}

double NNfunction_ns_chi01_dL::synapse0x315bb90() {
   return (neuron0x314a9e0()*0.0254716);
}

double NNfunction_ns_chi01_dL::synapse0x315bbd0() {
   return (neuron0x314ad20()*0.0117558);
}

double NNfunction_ns_chi01_dL::synapse0x315bc10() {
   return (neuron0x314b060()*0.456417);
}

double NNfunction_ns_chi01_dL::synapse0x315bc50() {
   return (neuron0x314b3a0()*-0.00872099);
}

double NNfunction_ns_chi01_dL::synapse0x315bc90() {
   return (neuron0x314b6e0()*0.00840402);
}

double NNfunction_ns_chi01_dL::synapse0x315bcd0() {
   return (neuron0x314ba20()*0.00620912);
}

double NNfunction_ns_chi01_dL::synapse0x315bd10() {
   return (neuron0x314bd60()*-0.0134461);
}

double NNfunction_ns_chi01_dL::synapse0x315b7a0() {
   return (neuron0x314c0a0()*0.0341325);
}

double NNfunction_ns_chi01_dL::synapse0x315b7e0() {
   return (neuron0x314c600()*-0.00108744);
}

double NNfunction_ns_chi01_dL::synapse0x315be60() {
   return (neuron0x314c820()*0.0142109);
}

double NNfunction_ns_chi01_dL::synapse0x315bea0() {
   return (neuron0x314cb60()*0.0102624);
}

double NNfunction_ns_chi01_dL::synapse0x315bee0() {
   return (neuron0x314cea0()*0.0030196);
}

double NNfunction_ns_chi01_dL::synapse0x315bf20() {
   return (neuron0x314d1e0()*-0.00852829);
}

double NNfunction_ns_chi01_dL::synapse0x315bf60() {
   return (neuron0x314d520()*-0.0109013);
}

double NNfunction_ns_chi01_dL::synapse0x315bfa0() {
   return (neuron0x314d860()*0.00505233);
}

double NNfunction_ns_chi01_dL::synapse0x315c320() {
   return (neuron0x3148d30()*0.0905805);
}

double NNfunction_ns_chi01_dL::synapse0x315c360() {
   return (neuron0x3148fe0()*-0.0586982);
}

double NNfunction_ns_chi01_dL::synapse0x315c3a0() {
   return (neuron0x3149320()*3.19987);
}

double NNfunction_ns_chi01_dL::synapse0x315c3e0() {
   return (neuron0x3149660()*0.0133514);
}

double NNfunction_ns_chi01_dL::synapse0x315c420() {
   return (neuron0x31499a0()*0.0180912);
}

double NNfunction_ns_chi01_dL::synapse0x315c460() {
   return (neuron0x3149ce0()*0.0529647);
}

double NNfunction_ns_chi01_dL::synapse0x315c4a0() {
   return (neuron0x314a020()*0.0664381);
}

double NNfunction_ns_chi01_dL::synapse0x315c4e0() {
   return (neuron0x314a360()*0.0336041);
}

double NNfunction_ns_chi01_dL::synapse0x315c520() {
   return (neuron0x314a6a0()*0.0797976);
}

double NNfunction_ns_chi01_dL::synapse0x31546e0() {
   return (neuron0x314a9e0()*0.011599);
}

double NNfunction_ns_chi01_dL::synapse0x3154720() {
   return (neuron0x314ad20()*0.0504959);
}

double NNfunction_ns_chi01_dL::synapse0x3154760() {
   return (neuron0x314b060()*-0.55618);
}

double NNfunction_ns_chi01_dL::synapse0x31547a0() {
   return (neuron0x314b3a0()*0.00818478);
}

double NNfunction_ns_chi01_dL::synapse0x31547e0() {
   return (neuron0x314b6e0()*-0.0221675);
}

double NNfunction_ns_chi01_dL::synapse0x3154820() {
   return (neuron0x314ba20()*0.055122);
}

double NNfunction_ns_chi01_dL::synapse0x3154860() {
   return (neuron0x314bd60()*-0.0357791);
}

double NNfunction_ns_chi01_dL::synapse0x315c170() {
   return (neuron0x314c0a0()*0.0180924);
}

double NNfunction_ns_chi01_dL::synapse0x315c1b0() {
   return (neuron0x314c600()*0.0156931);
}

double NNfunction_ns_chi01_dL::synapse0x31549b0() {
   return (neuron0x314c820()*0.0217698);
}

double NNfunction_ns_chi01_dL::synapse0x31549f0() {
   return (neuron0x314cb60()*0.0439586);
}

double NNfunction_ns_chi01_dL::synapse0x3154a30() {
   return (neuron0x314cea0()*-0.0227597);
}

double NNfunction_ns_chi01_dL::synapse0x3154a70() {
   return (neuron0x314d1e0()*-0.00584977);
}

double NNfunction_ns_chi01_dL::synapse0x3154ab0() {
   return (neuron0x314d520()*0.0286246);
}

double NNfunction_ns_chi01_dL::synapse0x3154af0() {
   return (neuron0x314d860()*4.21807);
}

double NNfunction_ns_chi01_dL::synapse0x3154e70() {
   return (neuron0x3148d30()*-0.164605);
}

double NNfunction_ns_chi01_dL::synapse0x3154eb0() {
   return (neuron0x3148fe0()*-2.97329);
}

double NNfunction_ns_chi01_dL::synapse0x3154ef0() {
   return (neuron0x3149320()*-0.856739);
}

double NNfunction_ns_chi01_dL::synapse0x3154f30() {
   return (neuron0x3149660()*0.000640903);
}

double NNfunction_ns_chi01_dL::synapse0x3154f70() {
   return (neuron0x31499a0()*0.108223);
}

double NNfunction_ns_chi01_dL::synapse0x3154fb0() {
   return (neuron0x3149ce0()*0.013635);
}

double NNfunction_ns_chi01_dL::synapse0x3154ff0() {
   return (neuron0x314a020()*0.0234605);
}

double NNfunction_ns_chi01_dL::synapse0x3155030() {
   return (neuron0x314a360()*-0.0220384);
}

double NNfunction_ns_chi01_dL::synapse0x3155070() {
   return (neuron0x314a6a0()*0.0136631);
}

double NNfunction_ns_chi01_dL::synapse0x31550b0() {
   return (neuron0x314a9e0()*-0.0494302);
}

double NNfunction_ns_chi01_dL::synapse0x31550f0() {
   return (neuron0x314ad20()*-0.00407216);
}

double NNfunction_ns_chi01_dL::synapse0x3155130() {
   return (neuron0x314b060()*0.00393311);
}

double NNfunction_ns_chi01_dL::synapse0x3155170() {
   return (neuron0x314b3a0()*0.0301392);
}

double NNfunction_ns_chi01_dL::synapse0x31551b0() {
   return (neuron0x314b6e0()*0.044189);
}

double NNfunction_ns_chi01_dL::synapse0x31551f0() {
   return (neuron0x314ba20()*0.0599444);
}

double NNfunction_ns_chi01_dL::synapse0x3155230() {
   return (neuron0x314bd60()*-0.0759257);
}

double NNfunction_ns_chi01_dL::synapse0x3154cc0() {
   return (neuron0x314c0a0()*0.029152);
}

double NNfunction_ns_chi01_dL::synapse0x3154d00() {
   return (neuron0x314c600()*-0.000139246);
}

double NNfunction_ns_chi01_dL::synapse0x3155380() {
   return (neuron0x314c820()*-0.0161026);
}

double NNfunction_ns_chi01_dL::synapse0x31553c0() {
   return (neuron0x314cb60()*0.0289818);
}

double NNfunction_ns_chi01_dL::synapse0x3155400() {
   return (neuron0x314cea0()*-0.0427337);
}

double NNfunction_ns_chi01_dL::synapse0x3155440() {
   return (neuron0x314d1e0()*-0.0474179);
}

double NNfunction_ns_chi01_dL::synapse0x3155480() {
   return (neuron0x314d520()*0.0792968);
}

double NNfunction_ns_chi01_dL::synapse0x31554c0() {
   return (neuron0x314d860()*-3.61658);
}

double NNfunction_ns_chi01_dL::synapse0x3155690() {
   return (neuron0x3148d30()*0.265036);
}

double NNfunction_ns_chi01_dL::synapse0x315e720() {
   return (neuron0x3148fe0()*-0.513564);
}

double NNfunction_ns_chi01_dL::synapse0x315e760() {
   return (neuron0x3149320()*-0.12443);
}

double NNfunction_ns_chi01_dL::synapse0x315e7a0() {
   return (neuron0x3149660()*-0.0833129);
}

double NNfunction_ns_chi01_dL::synapse0x315e7e0() {
   return (neuron0x31499a0()*0.40822);
}

double NNfunction_ns_chi01_dL::synapse0x315e820() {
   return (neuron0x3149ce0()*0.980155);
}

double NNfunction_ns_chi01_dL::synapse0x315e860() {
   return (neuron0x314a020()*0.323696);
}

double NNfunction_ns_chi01_dL::synapse0x315e8a0() {
   return (neuron0x314a360()*0.344399);
}

double NNfunction_ns_chi01_dL::synapse0x315e8e0() {
   return (neuron0x314a6a0()*-0.10806);
}

double NNfunction_ns_chi01_dL::synapse0x315e920() {
   return (neuron0x314a9e0()*0.131065);
}

double NNfunction_ns_chi01_dL::synapse0x315e960() {
   return (neuron0x314ad20()*0.0746018);
}

double NNfunction_ns_chi01_dL::synapse0x315e9a0() {
   return (neuron0x314b060()*0.281032);
}

double NNfunction_ns_chi01_dL::synapse0x315e9e0() {
   return (neuron0x314b3a0()*-0.411365);
}

double NNfunction_ns_chi01_dL::synapse0x315ea20() {
   return (neuron0x314b6e0()*0.32434);
}

double NNfunction_ns_chi01_dL::synapse0x315ea60() {
   return (neuron0x314ba20()*-0.123344);
}

double NNfunction_ns_chi01_dL::synapse0x315eaa0() {
   return (neuron0x314bd60()*0.0875074);
}

double NNfunction_ns_chi01_dL::synapse0x315e570() {
   return (neuron0x314c0a0()*0.911577);
}

double NNfunction_ns_chi01_dL::synapse0x315e5b0() {
   return (neuron0x314c600()*-0.188845);
}

double NNfunction_ns_chi01_dL::synapse0x315ebf0() {
   return (neuron0x314c820()*-0.134906);
}

double NNfunction_ns_chi01_dL::synapse0x315ec30() {
   return (neuron0x314cb60()*-0.916646);
}

double NNfunction_ns_chi01_dL::synapse0x315ec70() {
   return (neuron0x314cea0()*-0.48791);
}

double NNfunction_ns_chi01_dL::synapse0x315ecb0() {
   return (neuron0x314d1e0()*-0.316949);
}

double NNfunction_ns_chi01_dL::synapse0x315ecf0() {
   return (neuron0x314d520()*0.874915);
}

double NNfunction_ns_chi01_dL::synapse0x315ed30() {
   return (neuron0x314d860()*-0.139162);
}

double NNfunction_ns_chi01_dL::synapse0x315f0b0() {
   return (neuron0x3148d30()*-0.0561846);
}

double NNfunction_ns_chi01_dL::synapse0x315f0f0() {
   return (neuron0x3148fe0()*0.00533816);
}

double NNfunction_ns_chi01_dL::synapse0x315f130() {
   return (neuron0x3149320()*-0.761222);
}

double NNfunction_ns_chi01_dL::synapse0x315f170() {
   return (neuron0x3149660()*-0.141844);
}

double NNfunction_ns_chi01_dL::synapse0x315f1b0() {
   return (neuron0x31499a0()*0.021489);
}

double NNfunction_ns_chi01_dL::synapse0x315f1f0() {
   return (neuron0x3149ce0()*0.0159309);
}

double NNfunction_ns_chi01_dL::synapse0x315f230() {
   return (neuron0x314a020()*-0.020364);
}

double NNfunction_ns_chi01_dL::synapse0x315f270() {
   return (neuron0x314a360()*0.0164945);
}

double NNfunction_ns_chi01_dL::synapse0x315f2b0() {
   return (neuron0x314a6a0()*0.00465344);
}

double NNfunction_ns_chi01_dL::synapse0x315f2f0() {
   return (neuron0x314a9e0()*0.000813577);
}

double NNfunction_ns_chi01_dL::synapse0x315f330() {
   return (neuron0x314ad20()*0.0241225);
}

double NNfunction_ns_chi01_dL::synapse0x315f370() {
   return (neuron0x314b060()*1.73039);
}

double NNfunction_ns_chi01_dL::synapse0x315f3b0() {
   return (neuron0x314b3a0()*0.0175988);
}

double NNfunction_ns_chi01_dL::synapse0x315f3f0() {
   return (neuron0x314b6e0()*0.0253554);
}

double NNfunction_ns_chi01_dL::synapse0x315f430() {
   return (neuron0x314ba20()*0.0407065);
}

double NNfunction_ns_chi01_dL::synapse0x315f470() {
   return (neuron0x314bd60()*0.0256985);
}

double NNfunction_ns_chi01_dL::synapse0x315ef00() {
   return (neuron0x314c0a0()*-2.41025e-05);
}

double NNfunction_ns_chi01_dL::synapse0x315ef40() {
   return (neuron0x314c600()*0.0159495);
}

double NNfunction_ns_chi01_dL::synapse0x315f5c0() {
   return (neuron0x314c820()*0.00397964);
}

double NNfunction_ns_chi01_dL::synapse0x315f600() {
   return (neuron0x314cb60()*0.0224125);
}

double NNfunction_ns_chi01_dL::synapse0x315f640() {
   return (neuron0x314cea0()*0.0267921);
}

double NNfunction_ns_chi01_dL::synapse0x315f680() {
   return (neuron0x314d1e0()*0.0202883);
}

double NNfunction_ns_chi01_dL::synapse0x315f6c0() {
   return (neuron0x314d520()*-0.00364057);
}

double NNfunction_ns_chi01_dL::synapse0x315f700() {
   return (neuron0x314d860()*-0.0155005);
}

double NNfunction_ns_chi01_dL::synapse0x315fa80() {
   return (neuron0x3148d30()*0.0800261);
}

double NNfunction_ns_chi01_dL::synapse0x315fac0() {
   return (neuron0x3148fe0()*-0.077618);
}

double NNfunction_ns_chi01_dL::synapse0x315fb00() {
   return (neuron0x3149320()*0.388658);
}

double NNfunction_ns_chi01_dL::synapse0x315fb40() {
   return (neuron0x3149660()*-0.0290618);
}

double NNfunction_ns_chi01_dL::synapse0x315fb80() {
   return (neuron0x31499a0()*0.0449256);
}

double NNfunction_ns_chi01_dL::synapse0x315fbc0() {
   return (neuron0x3149ce0()*-0.0121823);
}

double NNfunction_ns_chi01_dL::synapse0x315fc00() {
   return (neuron0x314a020()*0.0225538);
}

double NNfunction_ns_chi01_dL::synapse0x315fc40() {
   return (neuron0x314a360()*0.0489306);
}

double NNfunction_ns_chi01_dL::synapse0x315fc80() {
   return (neuron0x314a6a0()*0.0553022);
}

double NNfunction_ns_chi01_dL::synapse0x315fcc0() {
   return (neuron0x314a9e0()*0.012056);
}

double NNfunction_ns_chi01_dL::synapse0x315fd00() {
   return (neuron0x314ad20()*0.0108118);
}

double NNfunction_ns_chi01_dL::synapse0x315fd40() {
   return (neuron0x314b060()*-0.24766);
}

double NNfunction_ns_chi01_dL::synapse0x315fd80() {
   return (neuron0x314b3a0()*0.021669);
}

double NNfunction_ns_chi01_dL::synapse0x315fdc0() {
   return (neuron0x314b6e0()*0.0413654);
}

double NNfunction_ns_chi01_dL::synapse0x315fe00() {
   return (neuron0x314ba20()*-0.014148);
}

double NNfunction_ns_chi01_dL::synapse0x315fe40() {
   return (neuron0x314bd60()*-0.0171841);
}

double NNfunction_ns_chi01_dL::synapse0x315f8d0() {
   return (neuron0x314c0a0()*0.0457677);
}

double NNfunction_ns_chi01_dL::synapse0x315f910() {
   return (neuron0x314c600()*0.00526204);
}

double NNfunction_ns_chi01_dL::synapse0x315ff90() {
   return (neuron0x314c820()*0.0125338);
}

double NNfunction_ns_chi01_dL::synapse0x315ffd0() {
   return (neuron0x314cb60()*0.00321384);
}

double NNfunction_ns_chi01_dL::synapse0x3160010() {
   return (neuron0x314cea0()*-0.0309344);
}

double NNfunction_ns_chi01_dL::synapse0x3160050() {
   return (neuron0x314d1e0()*-0.00609933);
}

double NNfunction_ns_chi01_dL::synapse0x3160090() {
   return (neuron0x314d520()*-0.0212775);
}

double NNfunction_ns_chi01_dL::synapse0x31600d0() {
   return (neuron0x314d860()*-5.90555);
}

double NNfunction_ns_chi01_dL::synapse0x3160450() {
   return (neuron0x3148d30()*-0.0156462);
}

double NNfunction_ns_chi01_dL::synapse0x3160490() {
   return (neuron0x3148fe0()*0.00813255);
}

double NNfunction_ns_chi01_dL::synapse0x31604d0() {
   return (neuron0x3149320()*0.0457804);
}

double NNfunction_ns_chi01_dL::synapse0x3160510() {
   return (neuron0x3149660()*2.18583);
}

double NNfunction_ns_chi01_dL::synapse0x3160550() {
   return (neuron0x31499a0()*0.00157142);
}

double NNfunction_ns_chi01_dL::synapse0x3160590() {
   return (neuron0x3149ce0()*0.00679628);
}

double NNfunction_ns_chi01_dL::synapse0x31605d0() {
   return (neuron0x314a020()*-0.0110976);
}

double NNfunction_ns_chi01_dL::synapse0x3160610() {
   return (neuron0x314a360()*-0.0168997);
}

double NNfunction_ns_chi01_dL::synapse0x3160650() {
   return (neuron0x314a6a0()*-0.0128021);
}

double NNfunction_ns_chi01_dL::synapse0x3160690() {
   return (neuron0x314a9e0()*-0.00323178);
}

double NNfunction_ns_chi01_dL::synapse0x31606d0() {
   return (neuron0x314ad20()*0.0132301);
}

double NNfunction_ns_chi01_dL::synapse0x3160710() {
   return (neuron0x314b060()*-0.532609);
}

double NNfunction_ns_chi01_dL::synapse0x3160750() {
   return (neuron0x314b3a0()*-0.0275859);
}

double NNfunction_ns_chi01_dL::synapse0x3160790() {
   return (neuron0x314b6e0()*-0.00590695);
}

double NNfunction_ns_chi01_dL::synapse0x31607d0() {
   return (neuron0x314ba20()*-0.0100173);
}

double NNfunction_ns_chi01_dL::synapse0x3160810() {
   return (neuron0x314bd60()*0.0312583);
}

double NNfunction_ns_chi01_dL::synapse0x31602a0() {
   return (neuron0x314c0a0()*-0.00363577);
}

double NNfunction_ns_chi01_dL::synapse0x31602e0() {
   return (neuron0x314c600()*-0.00370481);
}

double NNfunction_ns_chi01_dL::synapse0x3160960() {
   return (neuron0x314c820()*-0.0277389);
}

double NNfunction_ns_chi01_dL::synapse0x31609a0() {
   return (neuron0x314cb60()*0.0196567);
}

double NNfunction_ns_chi01_dL::synapse0x31609e0() {
   return (neuron0x314cea0()*-0.0300645);
}

double NNfunction_ns_chi01_dL::synapse0x3160a20() {
   return (neuron0x314d1e0()*0.00527593);
}

double NNfunction_ns_chi01_dL::synapse0x3160a60() {
   return (neuron0x314d520()*0.019551);
}

double NNfunction_ns_chi01_dL::synapse0x3160aa0() {
   return (neuron0x314d860()*-0.0194889);
}

double NNfunction_ns_chi01_dL::synapse0x3160e20() {
   return (neuron0x3148d30()*0.0185716);
}

double NNfunction_ns_chi01_dL::synapse0x3160e60() {
   return (neuron0x3148fe0()*-10.0754);
}

double NNfunction_ns_chi01_dL::synapse0x3160ea0() {
   return (neuron0x3149320()*0.872819);
}

double NNfunction_ns_chi01_dL::synapse0x3160ee0() {
   return (neuron0x3149660()*0.0216098);
}

double NNfunction_ns_chi01_dL::synapse0x3160f20() {
   return (neuron0x31499a0()*-0.017588);
}

double NNfunction_ns_chi01_dL::synapse0x3160f60() {
   return (neuron0x3149ce0()*0.0152583);
}

double NNfunction_ns_chi01_dL::synapse0x3160fa0() {
   return (neuron0x314a020()*-0.00153678);
}

double NNfunction_ns_chi01_dL::synapse0x3160fe0() {
   return (neuron0x314a360()*0.00403362);
}

double NNfunction_ns_chi01_dL::synapse0x3161020() {
   return (neuron0x314a6a0()*-0.0276471);
}

double NNfunction_ns_chi01_dL::synapse0x3161060() {
   return (neuron0x314a9e0()*-0.0208291);
}

double NNfunction_ns_chi01_dL::synapse0x31610a0() {
   return (neuron0x314ad20()*0.00789066);
}

double NNfunction_ns_chi01_dL::synapse0x31610e0() {
   return (neuron0x314b060()*-0.0948741);
}

double NNfunction_ns_chi01_dL::synapse0x3161120() {
   return (neuron0x314b3a0()*-0.0158667);
}

double NNfunction_ns_chi01_dL::synapse0x3161160() {
   return (neuron0x314b6e0()*-0.00218518);
}

double NNfunction_ns_chi01_dL::synapse0x31611a0() {
   return (neuron0x314ba20()*-0.0244929);
}

double NNfunction_ns_chi01_dL::synapse0x31611e0() {
   return (neuron0x314bd60()*-0.0164832);
}

double NNfunction_ns_chi01_dL::synapse0x3160c70() {
   return (neuron0x314c0a0()*0.0178996);
}

double NNfunction_ns_chi01_dL::synapse0x3160cb0() {
   return (neuron0x314c600()*0.0205016);
}

double NNfunction_ns_chi01_dL::synapse0x3161330() {
   return (neuron0x314c820()*-0.0161835);
}

double NNfunction_ns_chi01_dL::synapse0x3161370() {
   return (neuron0x314cb60()*-0.0719546);
}

double NNfunction_ns_chi01_dL::synapse0x31613b0() {
   return (neuron0x314cea0()*-0.0146704);
}

double NNfunction_ns_chi01_dL::synapse0x31613f0() {
   return (neuron0x314d1e0()*0.0418255);
}

double NNfunction_ns_chi01_dL::synapse0x3161430() {
   return (neuron0x314d520()*0.00295313);
}

double NNfunction_ns_chi01_dL::synapse0x3161470() {
   return (neuron0x314d860()*0.0656898);
}

double NNfunction_ns_chi01_dL::synapse0x31617f0() {
   return (neuron0x3148d30()*-0.252127);
}

double NNfunction_ns_chi01_dL::synapse0x3161830() {
   return (neuron0x3148fe0()*0.0849554);
}

double NNfunction_ns_chi01_dL::synapse0x3161870() {
   return (neuron0x3149320()*0.120328);
}

double NNfunction_ns_chi01_dL::synapse0x31618b0() {
   return (neuron0x3149660()*-0.69725);
}

double NNfunction_ns_chi01_dL::synapse0x31618f0() {
   return (neuron0x31499a0()*0.643821);
}

double NNfunction_ns_chi01_dL::synapse0x3161930() {
   return (neuron0x3149ce0()*-0.302381);
}

double NNfunction_ns_chi01_dL::synapse0x3161970() {
   return (neuron0x314a020()*0.439958);
}

double NNfunction_ns_chi01_dL::synapse0x31619b0() {
   return (neuron0x314a360()*-1.00066);
}

double NNfunction_ns_chi01_dL::synapse0x31619f0() {
   return (neuron0x314a6a0()*0.336791);
}

double NNfunction_ns_chi01_dL::synapse0x3161a30() {
   return (neuron0x314a9e0()*-0.536669);
}

double NNfunction_ns_chi01_dL::synapse0x3161a70() {
   return (neuron0x314ad20()*-0.156961);
}

double NNfunction_ns_chi01_dL::synapse0x3161ab0() {
   return (neuron0x314b060()*0.605089);
}

double NNfunction_ns_chi01_dL::synapse0x3161af0() {
   return (neuron0x314b3a0()*-0.146498);
}

double NNfunction_ns_chi01_dL::synapse0x3161b30() {
   return (neuron0x314b6e0()*-0.317395);
}

double NNfunction_ns_chi01_dL::synapse0x3161b70() {
   return (neuron0x314ba20()*-0.150294);
}

double NNfunction_ns_chi01_dL::synapse0x3161bb0() {
   return (neuron0x314bd60()*-0.0969202);
}

double NNfunction_ns_chi01_dL::synapse0x3161640() {
   return (neuron0x314c0a0()*-0.0227889);
}

double NNfunction_ns_chi01_dL::synapse0x3161680() {
   return (neuron0x314c600()*-0.363602);
}

double NNfunction_ns_chi01_dL::synapse0x3161d00() {
   return (neuron0x314c820()*0.544264);
}

double NNfunction_ns_chi01_dL::synapse0x3161d40() {
   return (neuron0x314cb60()*-0.168576);
}

double NNfunction_ns_chi01_dL::synapse0x3161d80() {
   return (neuron0x314cea0()*0.701957);
}

double NNfunction_ns_chi01_dL::synapse0x3161dc0() {
   return (neuron0x314d1e0()*0.414878);
}

double NNfunction_ns_chi01_dL::synapse0x3161e00() {
   return (neuron0x314d520()*0.364192);
}

double NNfunction_ns_chi01_dL::synapse0x3161e40() {
   return (neuron0x314d860()*-0.686047);
}

double NNfunction_ns_chi01_dL::synapse0x31621c0() {
   return (neuron0x3148d30()*-0.0568436);
}

double NNfunction_ns_chi01_dL::synapse0x3162200() {
   return (neuron0x3148fe0()*-0.0185372);
}

double NNfunction_ns_chi01_dL::synapse0x3162240() {
   return (neuron0x3149320()*4.22501);
}

double NNfunction_ns_chi01_dL::synapse0x3162280() {
   return (neuron0x3149660()*0.00178291);
}

double NNfunction_ns_chi01_dL::synapse0x31622c0() {
   return (neuron0x31499a0()*-0.0311861);
}

double NNfunction_ns_chi01_dL::synapse0x3162300() {
   return (neuron0x3149ce0()*0.00488162);
}

double NNfunction_ns_chi01_dL::synapse0x3162340() {
   return (neuron0x314a020()*-0.0317746);
}

double NNfunction_ns_chi01_dL::synapse0x3162380() {
   return (neuron0x314a360()*0.0272665);
}

double NNfunction_ns_chi01_dL::synapse0x31623c0() {
   return (neuron0x314a6a0()*-0.00646344);
}

double NNfunction_ns_chi01_dL::synapse0x3162400() {
   return (neuron0x314a9e0()*0.000751411);
}

double NNfunction_ns_chi01_dL::synapse0x3162440() {
   return (neuron0x314ad20()*-0.0235641);
}

double NNfunction_ns_chi01_dL::synapse0x3162480() {
   return (neuron0x314b060()*-0.205833);
}

double NNfunction_ns_chi01_dL::synapse0x31624c0() {
   return (neuron0x314b3a0()*0.0224947);
}

double NNfunction_ns_chi01_dL::synapse0x3162500() {
   return (neuron0x314b6e0()*0.0209029);
}

double NNfunction_ns_chi01_dL::synapse0x3162540() {
   return (neuron0x314ba20()*0.000477076);
}

double NNfunction_ns_chi01_dL::synapse0x3162580() {
   return (neuron0x314bd60()*-0.0110731);
}

double NNfunction_ns_chi01_dL::synapse0x3162010() {
   return (neuron0x314c0a0()*-0.0224544);
}

double NNfunction_ns_chi01_dL::synapse0x3162050() {
   return (neuron0x314c600()*-0.0128668);
}

double NNfunction_ns_chi01_dL::synapse0x31626d0() {
   return (neuron0x314c820()*0.00560725);
}

double NNfunction_ns_chi01_dL::synapse0x3162710() {
   return (neuron0x314cb60()*0.0225205);
}

double NNfunction_ns_chi01_dL::synapse0x3162750() {
   return (neuron0x314cea0()*0.017512);
}

double NNfunction_ns_chi01_dL::synapse0x3162790() {
   return (neuron0x314d1e0()*-0.021848);
}

double NNfunction_ns_chi01_dL::synapse0x31627d0() {
   return (neuron0x314d520()*-0.0198742);
}

double NNfunction_ns_chi01_dL::synapse0x3162810() {
   return (neuron0x314d860()*-0.0770812);
}

double NNfunction_ns_chi01_dL::synapse0x3162b90() {
   return (neuron0x3148d30()*-0.504583);
}

double NNfunction_ns_chi01_dL::synapse0x3162bd0() {
   return (neuron0x3148fe0()*0.547873);
}

double NNfunction_ns_chi01_dL::synapse0x3162c10() {
   return (neuron0x3149320()*-0.511405);
}

double NNfunction_ns_chi01_dL::synapse0x3162c50() {
   return (neuron0x3149660()*-0.366448);
}

double NNfunction_ns_chi01_dL::synapse0x3162c90() {
   return (neuron0x31499a0()*0.367909);
}

double NNfunction_ns_chi01_dL::synapse0x3162cd0() {
   return (neuron0x3149ce0()*0.736011);
}

double NNfunction_ns_chi01_dL::synapse0x3162d10() {
   return (neuron0x314a020()*-0.271563);
}

double NNfunction_ns_chi01_dL::synapse0x3162d50() {
   return (neuron0x314a360()*-0.697451);
}

double NNfunction_ns_chi01_dL::synapse0x3162d90() {
   return (neuron0x314a6a0()*0.206777);
}

double NNfunction_ns_chi01_dL::synapse0x3162dd0() {
   return (neuron0x314a9e0()*-1.19034);
}

double NNfunction_ns_chi01_dL::synapse0x3162e10() {
   return (neuron0x314ad20()*0.37515);
}

double NNfunction_ns_chi01_dL::synapse0x3162e50() {
   return (neuron0x314b060()*0.402887);
}

double NNfunction_ns_chi01_dL::synapse0x3162e90() {
   return (neuron0x314b3a0()*0.0726041);
}

double NNfunction_ns_chi01_dL::synapse0x3162ed0() {
   return (neuron0x314b6e0()*-0.493091);
}

double NNfunction_ns_chi01_dL::synapse0x3162f10() {
   return (neuron0x314ba20()*-0.117349);
}

double NNfunction_ns_chi01_dL::synapse0x3162f50() {
   return (neuron0x314bd60()*0.233047);
}

double NNfunction_ns_chi01_dL::synapse0x31629e0() {
   return (neuron0x314c0a0()*-0.0969254);
}

double NNfunction_ns_chi01_dL::synapse0x3162a20() {
   return (neuron0x314c600()*-0.426636);
}

double NNfunction_ns_chi01_dL::synapse0x31630a0() {
   return (neuron0x314c820()*0.538298);
}

double NNfunction_ns_chi01_dL::synapse0x31630e0() {
   return (neuron0x314cb60()*-0.594939);
}

double NNfunction_ns_chi01_dL::synapse0x3163120() {
   return (neuron0x314cea0()*0.874667);
}

double NNfunction_ns_chi01_dL::synapse0x3163160() {
   return (neuron0x314d1e0()*0.394171);
}

double NNfunction_ns_chi01_dL::synapse0x31631a0() {
   return (neuron0x314d520()*0.418915);
}

double NNfunction_ns_chi01_dL::synapse0x31631e0() {
   return (neuron0x314d860()*-0.511479);
}

double NNfunction_ns_chi01_dL::synapse0x3163560() {
   return (neuron0x3148d30()*-0.411865);
}

double NNfunction_ns_chi01_dL::synapse0x3157b30() {
   return (neuron0x3148fe0()*0.427245);
}

double NNfunction_ns_chi01_dL::synapse0x3157b70() {
   return (neuron0x3149320()*0.31285);
}

double NNfunction_ns_chi01_dL::synapse0x3157bb0() {
   return (neuron0x3149660()*0.62709);
}

double NNfunction_ns_chi01_dL::synapse0x3157e00() {
   return (neuron0x31499a0()*0.182808);
}

double NNfunction_ns_chi01_dL::synapse0x3157e40() {
   return (neuron0x3149ce0()*0.554822);
}

double NNfunction_ns_chi01_dL::synapse0x3157e80() {
   return (neuron0x314a020()*-0.753212);
}

double NNfunction_ns_chi01_dL::synapse0x31580d0() {
   return (neuron0x314a360()*0.838542);
}

double NNfunction_ns_chi01_dL::synapse0x3158110() {
   return (neuron0x314a6a0()*0.237977);
}

double NNfunction_ns_chi01_dL::synapse0x3158360() {
   return (neuron0x314a9e0()*1.08823);
}

double NNfunction_ns_chi01_dL::synapse0x31583a0() {
   return (neuron0x314ad20()*-1.97982);
}

double NNfunction_ns_chi01_dL::synapse0x31583e0() {
   return (neuron0x314b060()*0.405557);
}

double NNfunction_ns_chi01_dL::synapse0x3158630() {
   return (neuron0x314b3a0()*-0.180629);
}

double NNfunction_ns_chi01_dL::synapse0x3158670() {
   return (neuron0x314b6e0()*-0.719312);
}

double NNfunction_ns_chi01_dL::synapse0x31588c0() {
   return (neuron0x314ba20()*0.813367);
}

double NNfunction_ns_chi01_dL::synapse0x3158900() {
   return (neuron0x314bd60()*0.199266);
}

double NNfunction_ns_chi01_dL::synapse0x31633b0() {
   return (neuron0x314c0a0()*-1.28648);
}

double NNfunction_ns_chi01_dL::synapse0x31633f0() {
   return (neuron0x314c600()*0.389648);
}

double NNfunction_ns_chi01_dL::synapse0x3158a50() {
   return (neuron0x314c820()*0.624724);
}

double NNfunction_ns_chi01_dL::synapse0x3158f60() {
   return (neuron0x314cb60()*-0.19005);
}

double NNfunction_ns_chi01_dL::synapse0x3158fa0() {
   return (neuron0x314cea0()*-0.518095);
}

double NNfunction_ns_chi01_dL::synapse0x3158fe0() {
   return (neuron0x314d1e0()*-0.342596);
}

double NNfunction_ns_chi01_dL::synapse0x3159230() {
   return (neuron0x314d520()*0.616519);
}

double NNfunction_ns_chi01_dL::synapse0x3159270() {
   return (neuron0x314d860()*-0.356279);
}

double NNfunction_ns_chi01_dL::synapse0x3158b20() {
   return (neuron0x3148d30()*-0.458057);
}

double NNfunction_ns_chi01_dL::synapse0x3158b60() {
   return (neuron0x3148fe0()*0.0355138);
}

double NNfunction_ns_chi01_dL::synapse0x3158ba0() {
   return (neuron0x3149320()*-0.50053);
}

double NNfunction_ns_chi01_dL::synapse0x3158be0() {
   return (neuron0x3149660()*-0.0263387);
}

double NNfunction_ns_chi01_dL::synapse0x3159560() {
   return (neuron0x31499a0()*-0.223156);
}

double NNfunction_ns_chi01_dL::synapse0x31658b0() {
   return (neuron0x3149ce0()*0.0722832);
}

double NNfunction_ns_chi01_dL::synapse0x31658f0() {
   return (neuron0x314a020()*-0.0127822);
}

double NNfunction_ns_chi01_dL::synapse0x3165930() {
   return (neuron0x314a360()*-0.0640269);
}

double NNfunction_ns_chi01_dL::synapse0x3165970() {
   return (neuron0x314a6a0()*0.0233535);
}

double NNfunction_ns_chi01_dL::synapse0x31659b0() {
   return (neuron0x314a9e0()*0.0117652);
}

double NNfunction_ns_chi01_dL::synapse0x31659f0() {
   return (neuron0x314ad20()*0.0178131);
}

double NNfunction_ns_chi01_dL::synapse0x3165a30() {
   return (neuron0x314b060()*1.41072);
}

double NNfunction_ns_chi01_dL::synapse0x3165a70() {
   return (neuron0x314b3a0()*-0.123363);
}

double NNfunction_ns_chi01_dL::synapse0x3165ab0() {
   return (neuron0x314b6e0()*-0.0424072);
}

double NNfunction_ns_chi01_dL::synapse0x3165af0() {
   return (neuron0x314ba20()*-0.0671679);
}

double NNfunction_ns_chi01_dL::synapse0x3165b30() {
   return (neuron0x314bd60()*-0.065762);
}

double NNfunction_ns_chi01_dL::synapse0x3159440() {
   return (neuron0x314c0a0()*0.0111947);
}

double NNfunction_ns_chi01_dL::synapse0x3159480() {
   return (neuron0x314c600()*-0.0752463);
}

double NNfunction_ns_chi01_dL::synapse0x3165c80() {
   return (neuron0x314c820()*-0.00477061);
}

double NNfunction_ns_chi01_dL::synapse0x3165cc0() {
   return (neuron0x314cb60()*0.132891);
}

double NNfunction_ns_chi01_dL::synapse0x3165d00() {
   return (neuron0x314cea0()*0.317726);
}

double NNfunction_ns_chi01_dL::synapse0x3165d40() {
   return (neuron0x314d1e0()*0.106871);
}

double NNfunction_ns_chi01_dL::synapse0x3165d80() {
   return (neuron0x314d520()*-0.0488484);
}

double NNfunction_ns_chi01_dL::synapse0x3165dc0() {
   return (neuron0x314d860()*3.09026);
}

double NNfunction_ns_chi01_dL::synapse0x3166140() {
   return (neuron0x3148d30()*0.0141821);
}

double NNfunction_ns_chi01_dL::synapse0x3166180() {
   return (neuron0x3148fe0()*-0.00111563);
}

double NNfunction_ns_chi01_dL::synapse0x31661c0() {
   return (neuron0x3149320()*-0.00660878);
}

double NNfunction_ns_chi01_dL::synapse0x3166200() {
   return (neuron0x3149660()*2.70271);
}

double NNfunction_ns_chi01_dL::synapse0x3166240() {
   return (neuron0x31499a0()*-0.0150147);
}

double NNfunction_ns_chi01_dL::synapse0x3166280() {
   return (neuron0x3149ce0()*-0.0316572);
}

double NNfunction_ns_chi01_dL::synapse0x31662c0() {
   return (neuron0x314a020()*-0.0307065);
}

double NNfunction_ns_chi01_dL::synapse0x3166300() {
   return (neuron0x314a360()*-0.011029);
}

double NNfunction_ns_chi01_dL::synapse0x3166340() {
   return (neuron0x314a6a0()*0.0154614);
}

double NNfunction_ns_chi01_dL::synapse0x3166380() {
   return (neuron0x314a9e0()*0.0335449);
}

double NNfunction_ns_chi01_dL::synapse0x31663c0() {
   return (neuron0x314ad20()*0.0277275);
}

double NNfunction_ns_chi01_dL::synapse0x3166400() {
   return (neuron0x314b060()*1.11406);
}

double NNfunction_ns_chi01_dL::synapse0x3166440() {
   return (neuron0x314b3a0()*-0.0152602);
}

double NNfunction_ns_chi01_dL::synapse0x3166480() {
   return (neuron0x314b6e0()*0.0244841);
}

double NNfunction_ns_chi01_dL::synapse0x31664c0() {
   return (neuron0x314ba20()*-0.00633625);
}

double NNfunction_ns_chi01_dL::synapse0x3166500() {
   return (neuron0x314bd60()*-0.026819);
}

double NNfunction_ns_chi01_dL::synapse0x3165f90() {
   return (neuron0x314c0a0()*0.0551365);
}

double NNfunction_ns_chi01_dL::synapse0x3165fd0() {
   return (neuron0x314c600()*0.00106168);
}

double NNfunction_ns_chi01_dL::synapse0x3166650() {
   return (neuron0x314c820()*0.0207732);
}

double NNfunction_ns_chi01_dL::synapse0x3166690() {
   return (neuron0x314cb60()*0.0165461);
}

double NNfunction_ns_chi01_dL::synapse0x31666d0() {
   return (neuron0x314cea0()*-0.0171615);
}

double NNfunction_ns_chi01_dL::synapse0x3166710() {
   return (neuron0x314d1e0()*-0.0128311);
}

double NNfunction_ns_chi01_dL::synapse0x3166750() {
   return (neuron0x314d520()*-0.014888);
}

double NNfunction_ns_chi01_dL::synapse0x3166790() {
   return (neuron0x314d860()*-0.0244093);
}

double NNfunction_ns_chi01_dL::synapse0x3166b10() {
   return (neuron0x3148d30()*-0.0973733);
}

double NNfunction_ns_chi01_dL::synapse0x3166b50() {
   return (neuron0x3148fe0()*0.279012);
}

double NNfunction_ns_chi01_dL::synapse0x3166b90() {
   return (neuron0x3149320()*-0.273784);
}

double NNfunction_ns_chi01_dL::synapse0x3166bd0() {
   return (neuron0x3149660()*-0.506021);
}

double NNfunction_ns_chi01_dL::synapse0x3166c10() {
   return (neuron0x31499a0()*-0.474971);
}

double NNfunction_ns_chi01_dL::synapse0x3166c50() {
   return (neuron0x3149ce0()*0.548555);
}

double NNfunction_ns_chi01_dL::synapse0x3166c90() {
   return (neuron0x314a020()*0.316445);
}

double NNfunction_ns_chi01_dL::synapse0x3166cd0() {
   return (neuron0x314a360()*0.984866);
}

double NNfunction_ns_chi01_dL::synapse0x3166d10() {
   return (neuron0x314a6a0()*-0.318497);
}

double NNfunction_ns_chi01_dL::synapse0x3166d50() {
   return (neuron0x314a9e0()*-0.502504);
}

double NNfunction_ns_chi01_dL::synapse0x3166d90() {
   return (neuron0x314ad20()*-0.283773);
}

double NNfunction_ns_chi01_dL::synapse0x3166dd0() {
   return (neuron0x314b060()*0.296704);
}

double NNfunction_ns_chi01_dL::synapse0x3166e10() {
   return (neuron0x314b3a0()*0.403144);
}

double NNfunction_ns_chi01_dL::synapse0x3166e50() {
   return (neuron0x314b6e0()*0.236865);
}

double NNfunction_ns_chi01_dL::synapse0x3166e90() {
   return (neuron0x314ba20()*-0.36713);
}

double NNfunction_ns_chi01_dL::synapse0x3166ed0() {
   return (neuron0x314bd60()*0.406434);
}

double NNfunction_ns_chi01_dL::synapse0x3166960() {
   return (neuron0x314c0a0()*0.364988);
}

double NNfunction_ns_chi01_dL::synapse0x31669a0() {
   return (neuron0x314c600()*0.0974858);
}

double NNfunction_ns_chi01_dL::synapse0x3167020() {
   return (neuron0x314c820()*-0.131617);
}

double NNfunction_ns_chi01_dL::synapse0x3167060() {
   return (neuron0x314cb60()*-0.0201501);
}

double NNfunction_ns_chi01_dL::synapse0x31670a0() {
   return (neuron0x314cea0()*0.685703);
}

double NNfunction_ns_chi01_dL::synapse0x31670e0() {
   return (neuron0x314d1e0()*-0.422816);
}

double NNfunction_ns_chi01_dL::synapse0x3167120() {
   return (neuron0x314d520()*-0.015622);
}

double NNfunction_ns_chi01_dL::synapse0x3167160() {
   return (neuron0x314d860()*0.405523);
}

double NNfunction_ns_chi01_dL::synapse0x31674e0() {
   return (neuron0x3148d30()*0.107978);
}

double NNfunction_ns_chi01_dL::synapse0x3167520() {
   return (neuron0x3148fe0()*-0.0428955);
}

double NNfunction_ns_chi01_dL::synapse0x3167560() {
   return (neuron0x3149320()*0.136638);
}

double NNfunction_ns_chi01_dL::synapse0x31675a0() {
   return (neuron0x3149660()*0.0400541);
}

double NNfunction_ns_chi01_dL::synapse0x31675e0() {
   return (neuron0x31499a0()*-0.00768775);
}

double NNfunction_ns_chi01_dL::synapse0x3167620() {
   return (neuron0x3149ce0()*-0.0179254);
}

double NNfunction_ns_chi01_dL::synapse0x3167660() {
   return (neuron0x314a020()*0.0197516);
}

double NNfunction_ns_chi01_dL::synapse0x31676a0() {
   return (neuron0x314a360()*-0.000102147);
}

double NNfunction_ns_chi01_dL::synapse0x31676e0() {
   return (neuron0x314a6a0()*-0.00735308);
}

double NNfunction_ns_chi01_dL::synapse0x3167720() {
   return (neuron0x314a9e0()*-0.00181016);
}

double NNfunction_ns_chi01_dL::synapse0x3167760() {
   return (neuron0x314ad20()*0.00939812);
}

double NNfunction_ns_chi01_dL::synapse0x31677a0() {
   return (neuron0x314b060()*-0.524841);
}

double NNfunction_ns_chi01_dL::synapse0x31677e0() {
   return (neuron0x314b3a0()*0.0206289);
}

double NNfunction_ns_chi01_dL::synapse0x3167820() {
   return (neuron0x314b6e0()*-0.0644249);
}

double NNfunction_ns_chi01_dL::synapse0x3167860() {
   return (neuron0x314ba20()*-0.00839637);
}

double NNfunction_ns_chi01_dL::synapse0x31678a0() {
   return (neuron0x314bd60()*0.0166205);
}

double NNfunction_ns_chi01_dL::synapse0x3167330() {
   return (neuron0x314c0a0()*-0.0328579);
}

double NNfunction_ns_chi01_dL::synapse0x3167370() {
   return (neuron0x314c600()*0.00465841);
}

double NNfunction_ns_chi01_dL::synapse0x31679f0() {
   return (neuron0x314c820()*0.0308107);
}

double NNfunction_ns_chi01_dL::synapse0x3167a30() {
   return (neuron0x314cb60()*-0.00535485);
}

double NNfunction_ns_chi01_dL::synapse0x3167a70() {
   return (neuron0x314cea0()*-0.0239097);
}

double NNfunction_ns_chi01_dL::synapse0x3167ab0() {
   return (neuron0x314d1e0()*-0.00621859);
}

double NNfunction_ns_chi01_dL::synapse0x3167af0() {
   return (neuron0x314d520()*0.0254972);
}

double NNfunction_ns_chi01_dL::synapse0x3167b30() {
   return (neuron0x314d860()*3.36121);
}

double NNfunction_ns_chi01_dL::synapse0x3167eb0() {
   return (neuron0x3148d30()*0.00416968);
}

double NNfunction_ns_chi01_dL::synapse0x3167ef0() {
   return (neuron0x3148fe0()*3.26181);
}

double NNfunction_ns_chi01_dL::synapse0x3167f30() {
   return (neuron0x3149320()*-0.725189);
}

double NNfunction_ns_chi01_dL::synapse0x3167f70() {
   return (neuron0x3149660()*-0.0343077);
}

double NNfunction_ns_chi01_dL::synapse0x3167fb0() {
   return (neuron0x31499a0()*0.0786519);
}

double NNfunction_ns_chi01_dL::synapse0x3167ff0() {
   return (neuron0x3149ce0()*0.0301517);
}

double NNfunction_ns_chi01_dL::synapse0x3168030() {
   return (neuron0x314a020()*0.0123064);
}

double NNfunction_ns_chi01_dL::synapse0x3168070() {
   return (neuron0x314a360()*-0.000972147);
}

double NNfunction_ns_chi01_dL::synapse0x31680b0() {
   return (neuron0x314a6a0()*0.00226061);
}

double NNfunction_ns_chi01_dL::synapse0x31680f0() {
   return (neuron0x314a9e0()*0.00659777);
}

double NNfunction_ns_chi01_dL::synapse0x3168130() {
   return (neuron0x314ad20()*0.0099171);
}

double NNfunction_ns_chi01_dL::synapse0x3168170() {
   return (neuron0x314b060()*0.218632);
}

double NNfunction_ns_chi01_dL::synapse0x31681b0() {
   return (neuron0x314b3a0()*-0.0145572);
}

double NNfunction_ns_chi01_dL::synapse0x31681f0() {
   return (neuron0x314b6e0()*0.0326894);
}

double NNfunction_ns_chi01_dL::synapse0x3168230() {
   return (neuron0x314ba20()*0.0274587);
}

double NNfunction_ns_chi01_dL::synapse0x3168270() {
   return (neuron0x314bd60()*-0.0232547);
}

double NNfunction_ns_chi01_dL::synapse0x3167d00() {
   return (neuron0x314c0a0()*0.0216776);
}

double NNfunction_ns_chi01_dL::synapse0x3167d40() {
   return (neuron0x314c600()*0.00816817);
}

double NNfunction_ns_chi01_dL::synapse0x31683c0() {
   return (neuron0x314c820()*0.00140019);
}

double NNfunction_ns_chi01_dL::synapse0x3168400() {
   return (neuron0x314cb60()*-0.0177394);
}

double NNfunction_ns_chi01_dL::synapse0x3168440() {
   return (neuron0x314cea0()*-0.0468471);
}

double NNfunction_ns_chi01_dL::synapse0x3168480() {
   return (neuron0x314d1e0()*-0.00119287);
}

double NNfunction_ns_chi01_dL::synapse0x31684c0() {
   return (neuron0x314d520()*0.000456136);
}

double NNfunction_ns_chi01_dL::synapse0x3168500() {
   return (neuron0x314d860()*-0.0315371);
}

double NNfunction_ns_chi01_dL::synapse0x3168880() {
   return (neuron0x3148d30()*-0.11732);
}

double NNfunction_ns_chi01_dL::synapse0x31688c0() {
   return (neuron0x3148fe0()*0.00426899);
}

double NNfunction_ns_chi01_dL::synapse0x3168900() {
   return (neuron0x3149320()*-0.0144059);
}

double NNfunction_ns_chi01_dL::synapse0x3168940() {
   return (neuron0x3149660()*0.225244);
}

double NNfunction_ns_chi01_dL::synapse0x3168980() {
   return (neuron0x31499a0()*0.0780904);
}

double NNfunction_ns_chi01_dL::synapse0x31689c0() {
   return (neuron0x3149ce0()*0.142282);
}

double NNfunction_ns_chi01_dL::synapse0x3168a00() {
   return (neuron0x314a020()*0.0117774);
}

double NNfunction_ns_chi01_dL::synapse0x3168a40() {
   return (neuron0x314a360()*-0.0765855);
}

double NNfunction_ns_chi01_dL::synapse0x3168a80() {
   return (neuron0x314a6a0()*0.0331262);
}

double NNfunction_ns_chi01_dL::synapse0x3168ac0() {
   return (neuron0x314a9e0()*-0.0801319);
}

double NNfunction_ns_chi01_dL::synapse0x3168b00() {
   return (neuron0x314ad20()*-0.043825);
}

double NNfunction_ns_chi01_dL::synapse0x3168b40() {
   return (neuron0x314b060()*0.175037);
}

double NNfunction_ns_chi01_dL::synapse0x3168b80() {
   return (neuron0x314b3a0()*-0.145895);
}

double NNfunction_ns_chi01_dL::synapse0x3168bc0() {
   return (neuron0x314b6e0()*-0.334862);
}

double NNfunction_ns_chi01_dL::synapse0x3168c00() {
   return (neuron0x314ba20()*-0.10593);
}

double NNfunction_ns_chi01_dL::synapse0x3168c40() {
   return (neuron0x314bd60()*0.534745);
}

double NNfunction_ns_chi01_dL::synapse0x31686d0() {
   return (neuron0x314c0a0()*-0.191967);
}

double NNfunction_ns_chi01_dL::synapse0x3168710() {
   return (neuron0x314c600()*-0.0979485);
}

double NNfunction_ns_chi01_dL::synapse0x3168d90() {
   return (neuron0x314c820()*0.0158013);
}

double NNfunction_ns_chi01_dL::synapse0x3168dd0() {
   return (neuron0x314cb60()*-0.0798708);
}

double NNfunction_ns_chi01_dL::synapse0x3168e10() {
   return (neuron0x314cea0()*-0.17314);
}

double NNfunction_ns_chi01_dL::synapse0x3168e50() {
   return (neuron0x314d1e0()*0.0747194);
}

double NNfunction_ns_chi01_dL::synapse0x3168e90() {
   return (neuron0x314d520()*-0.0692808);
}

double NNfunction_ns_chi01_dL::synapse0x3168ed0() {
   return (neuron0x314d860()*0.0066334);
}

double NNfunction_ns_chi01_dL::synapse0x3169250() {
   return (neuron0x3148d30()*0.0480204);
}

double NNfunction_ns_chi01_dL::synapse0x3169290() {
   return (neuron0x3148fe0()*0.0100938);
}

double NNfunction_ns_chi01_dL::synapse0x31692d0() {
   return (neuron0x3149320()*-0.00306738);
}

double NNfunction_ns_chi01_dL::synapse0x3169310() {
   return (neuron0x3149660()*-0.0120009);
}

double NNfunction_ns_chi01_dL::synapse0x3169350() {
   return (neuron0x31499a0()*-0.0305036);
}

double NNfunction_ns_chi01_dL::synapse0x3169390() {
   return (neuron0x3149ce0()*0.00226968);
}

double NNfunction_ns_chi01_dL::synapse0x31693d0() {
   return (neuron0x314a020()*-0.00669599);
}

double NNfunction_ns_chi01_dL::synapse0x3169410() {
   return (neuron0x314a360()*-0.00923394);
}

double NNfunction_ns_chi01_dL::synapse0x3169450() {
   return (neuron0x314a6a0()*0.00735028);
}

double NNfunction_ns_chi01_dL::synapse0x3169490() {
   return (neuron0x314a9e0()*0.00564355);
}

double NNfunction_ns_chi01_dL::synapse0x31694d0() {
   return (neuron0x314ad20()*-0.00919689);
}

double NNfunction_ns_chi01_dL::synapse0x3169510() {
   return (neuron0x314b060()*-0.0460483);
}

double NNfunction_ns_chi01_dL::synapse0x3169550() {
   return (neuron0x314b3a0()*0.0139319);
}

double NNfunction_ns_chi01_dL::synapse0x3169590() {
   return (neuron0x314b6e0()*-0.00222168);
}

double NNfunction_ns_chi01_dL::synapse0x31695d0() {
   return (neuron0x314ba20()*0.0108785);
}

double NNfunction_ns_chi01_dL::synapse0x3169610() {
   return (neuron0x314bd60()*0.00960482);
}

double NNfunction_ns_chi01_dL::synapse0x31690a0() {
   return (neuron0x314c0a0()*-0.0097145);
}

double NNfunction_ns_chi01_dL::synapse0x31690e0() {
   return (neuron0x314c600()*0.00860949);
}

double NNfunction_ns_chi01_dL::synapse0x3169760() {
   return (neuron0x314c820()*-0.00565235);
}

double NNfunction_ns_chi01_dL::synapse0x31697a0() {
   return (neuron0x314cb60()*-0.00481);
}

double NNfunction_ns_chi01_dL::synapse0x31697e0() {
   return (neuron0x314cea0()*0.0175664);
}

double NNfunction_ns_chi01_dL::synapse0x3169820() {
   return (neuron0x314d1e0()*-0.000321955);
}

double NNfunction_ns_chi01_dL::synapse0x3169860() {
   return (neuron0x314d520()*0.00308023);
}

double NNfunction_ns_chi01_dL::synapse0x31698a0() {
   return (neuron0x314d860()*-25.1301);
}

double NNfunction_ns_chi01_dL::synapse0x3169c20() {
   return (neuron0x3148d30()*-0.3216);
}

double NNfunction_ns_chi01_dL::synapse0x3169c60() {
   return (neuron0x3148fe0()*-0.0756022);
}

double NNfunction_ns_chi01_dL::synapse0x3169ca0() {
   return (neuron0x3149320()*-0.0724561);
}

double NNfunction_ns_chi01_dL::synapse0x3169ce0() {
   return (neuron0x3149660()*-0.0147595);
}

double NNfunction_ns_chi01_dL::synapse0x3169d20() {
   return (neuron0x31499a0()*-0.210782);
}

double NNfunction_ns_chi01_dL::synapse0x3169d60() {
   return (neuron0x3149ce0()*0.207545);
}

double NNfunction_ns_chi01_dL::synapse0x3169da0() {
   return (neuron0x314a020()*0.245654);
}

double NNfunction_ns_chi01_dL::synapse0x3169de0() {
   return (neuron0x314a360()*0.180346);
}

double NNfunction_ns_chi01_dL::synapse0x3169e20() {
   return (neuron0x314a6a0()*0.239031);
}

double NNfunction_ns_chi01_dL::synapse0x3169e60() {
   return (neuron0x314a9e0()*-0.219843);
}

double NNfunction_ns_chi01_dL::synapse0x3169ea0() {
   return (neuron0x314ad20()*-0.49318);
}

double NNfunction_ns_chi01_dL::synapse0x3169ee0() {
   return (neuron0x314b060()*0.225377);
}

double NNfunction_ns_chi01_dL::synapse0x3169f20() {
   return (neuron0x314b3a0()*-0.0863248);
}

double NNfunction_ns_chi01_dL::synapse0x3169f60() {
   return (neuron0x314b6e0()*-0.251343);
}

double NNfunction_ns_chi01_dL::synapse0x3169fa0() {
   return (neuron0x314ba20()*-0.204548);
}

double NNfunction_ns_chi01_dL::synapse0x3169fe0() {
   return (neuron0x314bd60()*0.137665);
}

double NNfunction_ns_chi01_dL::synapse0x3169a70() {
   return (neuron0x314c0a0()*-0.682774);
}

double NNfunction_ns_chi01_dL::synapse0x3169ab0() {
   return (neuron0x314c600()*-0.268201);
}

double NNfunction_ns_chi01_dL::synapse0x316a130() {
   return (neuron0x314c820()*0.0895363);
}

double NNfunction_ns_chi01_dL::synapse0x316a170() {
   return (neuron0x314cb60()*0.0629313);
}

double NNfunction_ns_chi01_dL::synapse0x316a1b0() {
   return (neuron0x314cea0()*0.147218);
}

double NNfunction_ns_chi01_dL::synapse0x316a1f0() {
   return (neuron0x314d1e0()*0.200713);
}

double NNfunction_ns_chi01_dL::synapse0x316a230() {
   return (neuron0x314d520()*-0.277583);
}

double NNfunction_ns_chi01_dL::synapse0x316a270() {
   return (neuron0x314d860()*0.225787);
}

double NNfunction_ns_chi01_dL::synapse0x3152d20() {
   return (neuron0x3148d30()*-0.192962);
}

double NNfunction_ns_chi01_dL::synapse0x3152d60() {
   return (neuron0x3148fe0()*-4.55658);
}

double NNfunction_ns_chi01_dL::synapse0x3152da0() {
   return (neuron0x3149320()*0.734666);
}

double NNfunction_ns_chi01_dL::synapse0x3152de0() {
   return (neuron0x3149660()*0.00429445);
}

double NNfunction_ns_chi01_dL::synapse0x3152e20() {
   return (neuron0x31499a0()*0.0951088);
}

double NNfunction_ns_chi01_dL::synapse0x3152e60() {
   return (neuron0x3149ce0()*0.0143885);
}

double NNfunction_ns_chi01_dL::synapse0x3152ea0() {
   return (neuron0x314a020()*-0.0490093);
}

double NNfunction_ns_chi01_dL::synapse0x3152ee0() {
   return (neuron0x314a360()*0.0166724);
}

double NNfunction_ns_chi01_dL::synapse0x316aa00() {
   return (neuron0x314a6a0()*0.0263516);
}

double NNfunction_ns_chi01_dL::synapse0x316aa40() {
   return (neuron0x314a9e0()*-0.0476187);
}

double NNfunction_ns_chi01_dL::synapse0x316aa80() {
   return (neuron0x314ad20()*0.0240702);
}

double NNfunction_ns_chi01_dL::synapse0x316aac0() {
   return (neuron0x314b060()*-0.467637);
}

double NNfunction_ns_chi01_dL::synapse0x316ab00() {
   return (neuron0x314b3a0()*0.0606662);
}

double NNfunction_ns_chi01_dL::synapse0x316ab40() {
   return (neuron0x314b6e0()*0.0173763);
}

double NNfunction_ns_chi01_dL::synapse0x316ab80() {
   return (neuron0x314ba20()*0.00497439);
}

double NNfunction_ns_chi01_dL::synapse0x316abc0() {
   return (neuron0x314bd60()*0.0101258);
}

double NNfunction_ns_chi01_dL::synapse0x316a440() {
   return (neuron0x314c0a0()*0.0226881);
}

double NNfunction_ns_chi01_dL::synapse0x316a480() {
   return (neuron0x314c600()*-0.0168883);
}

double NNfunction_ns_chi01_dL::synapse0x316ad10() {
   return (neuron0x314c820()*-0.011302);
}

double NNfunction_ns_chi01_dL::synapse0x316ad50() {
   return (neuron0x314cb60()*-0.00573434);
}

double NNfunction_ns_chi01_dL::synapse0x316ad90() {
   return (neuron0x314cea0()*-0.0159847);
}

double NNfunction_ns_chi01_dL::synapse0x316add0() {
   return (neuron0x314d1e0()*-0.0583996);
}

double NNfunction_ns_chi01_dL::synapse0x316ae10() {
   return (neuron0x314d520()*0.0695228);
}

double NNfunction_ns_chi01_dL::synapse0x316ae50() {
   return (neuron0x314d860()*-4.14478);
}

double NNfunction_ns_chi01_dL::synapse0x316b1d0() {
   return (neuron0x3148d30()*-0.0756997);
}

double NNfunction_ns_chi01_dL::synapse0x316b210() {
   return (neuron0x3148fe0()*-0.490613);
}

double NNfunction_ns_chi01_dL::synapse0x316b250() {
   return (neuron0x3149320()*1.01412);
}

double NNfunction_ns_chi01_dL::synapse0x316b290() {
   return (neuron0x3149660()*0.875771);
}

double NNfunction_ns_chi01_dL::synapse0x316b2d0() {
   return (neuron0x31499a0()*0.861288);
}

double NNfunction_ns_chi01_dL::synapse0x316b310() {
   return (neuron0x3149ce0()*-0.533571);
}

double NNfunction_ns_chi01_dL::synapse0x316b350() {
   return (neuron0x314a020()*-0.177138);
}

double NNfunction_ns_chi01_dL::synapse0x316b390() {
   return (neuron0x314a360()*-0.854484);
}

double NNfunction_ns_chi01_dL::synapse0x316b3d0() {
   return (neuron0x314a6a0()*0.198195);
}

double NNfunction_ns_chi01_dL::synapse0x316b410() {
   return (neuron0x314a9e0()*0.264816);
}

double NNfunction_ns_chi01_dL::synapse0x316b450() {
   return (neuron0x314ad20()*0.0289464);
}

double NNfunction_ns_chi01_dL::synapse0x316b490() {
   return (neuron0x314b060()*0.639592);
}

double NNfunction_ns_chi01_dL::synapse0x316b4d0() {
   return (neuron0x314b3a0()*-0.225227);
}

double NNfunction_ns_chi01_dL::synapse0x316b510() {
   return (neuron0x314b6e0()*-0.322535);
}

double NNfunction_ns_chi01_dL::synapse0x316b550() {
   return (neuron0x314ba20()*0.0542342);
}

double NNfunction_ns_chi01_dL::synapse0x316b590() {
   return (neuron0x314bd60()*-0.603453);
}

double NNfunction_ns_chi01_dL::synapse0x316b020() {
   return (neuron0x314c0a0()*-0.485662);
}

double NNfunction_ns_chi01_dL::synapse0x316b060() {
   return (neuron0x314c600()*0.592294);
}

double NNfunction_ns_chi01_dL::synapse0x316b6e0() {
   return (neuron0x314c820()*0.0615887);
}

double NNfunction_ns_chi01_dL::synapse0x316b720() {
   return (neuron0x314cb60()*-0.503389);
}

double NNfunction_ns_chi01_dL::synapse0x316b760() {
   return (neuron0x314cea0()*-0.347547);
}

double NNfunction_ns_chi01_dL::synapse0x316b7a0() {
   return (neuron0x314d1e0()*0.41031);
}

double NNfunction_ns_chi01_dL::synapse0x316b7e0() {
   return (neuron0x314d520()*0.299263);
}

double NNfunction_ns_chi01_dL::synapse0x316b820() {
   return (neuron0x314d860()*-0.926733);
}

double NNfunction_ns_chi01_dL::synapse0x316bba0() {
   return (neuron0x3148d30()*0.494557);
}

double NNfunction_ns_chi01_dL::synapse0x316bbe0() {
   return (neuron0x3148fe0()*0.361281);
}

double NNfunction_ns_chi01_dL::synapse0x316bc20() {
   return (neuron0x3149320()*0.239666);
}

double NNfunction_ns_chi01_dL::synapse0x316bc60() {
   return (neuron0x3149660()*-0.108057);
}

double NNfunction_ns_chi01_dL::synapse0x316bca0() {
   return (neuron0x31499a0()*0.242127);
}

double NNfunction_ns_chi01_dL::synapse0x316bce0() {
   return (neuron0x3149ce0()*0.0153018);
}

double NNfunction_ns_chi01_dL::synapse0x316bd20() {
   return (neuron0x314a020()*0.310813);
}

double NNfunction_ns_chi01_dL::synapse0x316bd60() {
   return (neuron0x314a360()*0.173677);
}

double NNfunction_ns_chi01_dL::synapse0x316bda0() {
   return (neuron0x314a6a0()*0.589995);
}

double NNfunction_ns_chi01_dL::synapse0x316bde0() {
   return (neuron0x314a9e0()*1.04689);
}

double NNfunction_ns_chi01_dL::synapse0x316be20() {
   return (neuron0x314ad20()*0.0873502);
}

double NNfunction_ns_chi01_dL::synapse0x316be60() {
   return (neuron0x314b060()*-0.505413);
}

double NNfunction_ns_chi01_dL::synapse0x316bea0() {
   return (neuron0x314b3a0()*0.0463746);
}

double NNfunction_ns_chi01_dL::synapse0x316bee0() {
   return (neuron0x314b6e0()*-0.45569);
}

double NNfunction_ns_chi01_dL::synapse0x316bf20() {
   return (neuron0x314ba20()*-0.0798874);
}

double NNfunction_ns_chi01_dL::synapse0x316bf60() {
   return (neuron0x314bd60()*0.251113);
}

double NNfunction_ns_chi01_dL::synapse0x316b9f0() {
   return (neuron0x314c0a0()*-0.198007);
}

double NNfunction_ns_chi01_dL::synapse0x316ba30() {
   return (neuron0x314c600()*-0.106157);
}

double NNfunction_ns_chi01_dL::synapse0x315c560() {
   return (neuron0x314c820()*0.00497182);
}

double NNfunction_ns_chi01_dL::synapse0x315c5a0() {
   return (neuron0x314cb60()*-0.369856);
}

double NNfunction_ns_chi01_dL::synapse0x315c5e0() {
   return (neuron0x314cea0()*0.0793217);
}

double NNfunction_ns_chi01_dL::synapse0x315c620() {
   return (neuron0x314d1e0()*0.126657);
}

double NNfunction_ns_chi01_dL::synapse0x315c660() {
   return (neuron0x314d520()*-0.184421);
}

double NNfunction_ns_chi01_dL::synapse0x315c6a0() {
   return (neuron0x314d860()*0.161264);
}

double NNfunction_ns_chi01_dL::synapse0x315ca20() {
   return (neuron0x3148d30()*0.101424);
}

double NNfunction_ns_chi01_dL::synapse0x315ca60() {
   return (neuron0x3148fe0()*0.285972);
}

double NNfunction_ns_chi01_dL::synapse0x315caa0() {
   return (neuron0x3149320()*2.9971);
}

double NNfunction_ns_chi01_dL::synapse0x315cae0() {
   return (neuron0x3149660()*0.0158333);
}

double NNfunction_ns_chi01_dL::synapse0x315cb20() {
   return (neuron0x31499a0()*-0.00527429);
}

double NNfunction_ns_chi01_dL::synapse0x315cb60() {
   return (neuron0x3149ce0()*-0.0117436);
}

double NNfunction_ns_chi01_dL::synapse0x315cba0() {
   return (neuron0x314a020()*0.0587386);
}

double NNfunction_ns_chi01_dL::synapse0x315cbe0() {
   return (neuron0x314a360()*-0.00848925);
}

double NNfunction_ns_chi01_dL::synapse0x315cc20() {
   return (neuron0x314a6a0()*-0.00666785);
}

double NNfunction_ns_chi01_dL::synapse0x315cc60() {
   return (neuron0x314a9e0()*0.0155741);
}

double NNfunction_ns_chi01_dL::synapse0x315cca0() {
   return (neuron0x314ad20()*-0.0401472);
}

double NNfunction_ns_chi01_dL::synapse0x315cce0() {
   return (neuron0x314b060()*-0.254874);
}

double NNfunction_ns_chi01_dL::synapse0x315cd20() {
   return (neuron0x314b3a0()*0.00776613);
}

double NNfunction_ns_chi01_dL::synapse0x315cd60() {
   return (neuron0x314b6e0()*0.0284807);
}

double NNfunction_ns_chi01_dL::synapse0x315cda0() {
   return (neuron0x314ba20()*0.00631001);
}

double NNfunction_ns_chi01_dL::synapse0x315cde0() {
   return (neuron0x314bd60()*0.0356867);
}

double NNfunction_ns_chi01_dL::synapse0x315c870() {
   return (neuron0x314c0a0()*-0.0294469);
}

double NNfunction_ns_chi01_dL::synapse0x315c8b0() {
   return (neuron0x314c600()*-0.0206897);
}

double NNfunction_ns_chi01_dL::synapse0x315cf30() {
   return (neuron0x314c820()*0.00757104);
}

double NNfunction_ns_chi01_dL::synapse0x315cf70() {
   return (neuron0x314cb60()*0.023633);
}

double NNfunction_ns_chi01_dL::synapse0x315cfb0() {
   return (neuron0x314cea0()*-0.0118255);
}

double NNfunction_ns_chi01_dL::synapse0x315cff0() {
   return (neuron0x314d1e0()*0.00770054);
}

double NNfunction_ns_chi01_dL::synapse0x315d030() {
   return (neuron0x314d520()*0.0144394);
}

double NNfunction_ns_chi01_dL::synapse0x315d070() {
   return (neuron0x314d860()*0.173505);
}

double NNfunction_ns_chi01_dL::synapse0x315d3f0() {
   return (neuron0x3148d30()*0.0171304);
}

double NNfunction_ns_chi01_dL::synapse0x315d430() {
   return (neuron0x3148fe0()*-0.00531363);
}

double NNfunction_ns_chi01_dL::synapse0x315d470() {
   return (neuron0x3149320()*-1.04348);
}

double NNfunction_ns_chi01_dL::synapse0x315d4b0() {
   return (neuron0x3149660()*0.147629);
}

double NNfunction_ns_chi01_dL::synapse0x315d4f0() {
   return (neuron0x31499a0()*0.00965053);
}

double NNfunction_ns_chi01_dL::synapse0x315d530() {
   return (neuron0x3149ce0()*-0.0516364);
}

double NNfunction_ns_chi01_dL::synapse0x315d570() {
   return (neuron0x314a020()*-0.031104);
}

double NNfunction_ns_chi01_dL::synapse0x315d5b0() {
   return (neuron0x314a360()*-0.0386825);
}

double NNfunction_ns_chi01_dL::synapse0x315d5f0() {
   return (neuron0x314a6a0()*-0.0188898);
}

double NNfunction_ns_chi01_dL::synapse0x315d630() {
   return (neuron0x314a9e0()*0.00907438);
}

double NNfunction_ns_chi01_dL::synapse0x315d670() {
   return (neuron0x314ad20()*-0.0230602);
}

double NNfunction_ns_chi01_dL::synapse0x315d6b0() {
   return (neuron0x314b060()*0.11636);
}

double NNfunction_ns_chi01_dL::synapse0x315d6f0() {
   return (neuron0x314b3a0()*-0.0089535);
}

double NNfunction_ns_chi01_dL::synapse0x315d730() {
   return (neuron0x314b6e0()*-0.0433001);
}

double NNfunction_ns_chi01_dL::synapse0x315d770() {
   return (neuron0x314ba20()*-0.0380762);
}

double NNfunction_ns_chi01_dL::synapse0x315d7b0() {
   return (neuron0x314bd60()*-0.0179914);
}

double NNfunction_ns_chi01_dL::synapse0x315d240() {
   return (neuron0x314c0a0()*-0.00961225);
}

double NNfunction_ns_chi01_dL::synapse0x315d280() {
   return (neuron0x314c600()*0.00774382);
}

double NNfunction_ns_chi01_dL::synapse0x315d900() {
   return (neuron0x314c820()*0.0156027);
}

double NNfunction_ns_chi01_dL::synapse0x315d940() {
   return (neuron0x314cb60()*-0.0294856);
}

double NNfunction_ns_chi01_dL::synapse0x315d980() {
   return (neuron0x314cea0()*0.0175388);
}

double NNfunction_ns_chi01_dL::synapse0x315d9c0() {
   return (neuron0x314d1e0()*-0.0223035);
}

double NNfunction_ns_chi01_dL::synapse0x315da00() {
   return (neuron0x314d520()*0.009722);
}

double NNfunction_ns_chi01_dL::synapse0x315da40() {
   return (neuron0x314d860()*0.0491485);
}

double NNfunction_ns_chi01_dL::synapse0x315ddc0() {
   return (neuron0x3148d30()*0.0286527);
}

double NNfunction_ns_chi01_dL::synapse0x315de00() {
   return (neuron0x3148fe0()*-0.0425514);
}

double NNfunction_ns_chi01_dL::synapse0x315de40() {
   return (neuron0x3149320()*-0.161503);
}

double NNfunction_ns_chi01_dL::synapse0x315de80() {
   return (neuron0x3149660()*0.392714);
}

double NNfunction_ns_chi01_dL::synapse0x315dec0() {
   return (neuron0x31499a0()*-0.0217281);
}

double NNfunction_ns_chi01_dL::synapse0x315df00() {
   return (neuron0x3149ce0()*-0.0279149);
}

double NNfunction_ns_chi01_dL::synapse0x315df40() {
   return (neuron0x314a020()*-0.00141116);
}

double NNfunction_ns_chi01_dL::synapse0x315df80() {
   return (neuron0x314a360()*0.00473946);
}

double NNfunction_ns_chi01_dL::synapse0x315dfc0() {
   return (neuron0x314a6a0()*0.0131619);
}

double NNfunction_ns_chi01_dL::synapse0x315e000() {
   return (neuron0x314a9e0()*0.00446111);
}

double NNfunction_ns_chi01_dL::synapse0x315e040() {
   return (neuron0x314ad20()*0.00461144);
}

double NNfunction_ns_chi01_dL::synapse0x315e080() {
   return (neuron0x314b060()*-0.146416);
}

double NNfunction_ns_chi01_dL::synapse0x315e0c0() {
   return (neuron0x314b3a0()*-0.0158742);
}

double NNfunction_ns_chi01_dL::synapse0x315e100() {
   return (neuron0x314b6e0()*-0.00453754);
}

double NNfunction_ns_chi01_dL::synapse0x315e140() {
   return (neuron0x314ba20()*-0.0354869);
}

double NNfunction_ns_chi01_dL::synapse0x315e180() {
   return (neuron0x314bd60()*-0.0657333);
}

double NNfunction_ns_chi01_dL::synapse0x315dc10() {
   return (neuron0x314c0a0()*-0.0207239);
}

double NNfunction_ns_chi01_dL::synapse0x315dc50() {
   return (neuron0x314c600()*-0.00678743);
}

double NNfunction_ns_chi01_dL::synapse0x315e2d0() {
   return (neuron0x314c820()*-0.00496024);
}

double NNfunction_ns_chi01_dL::synapse0x315e310() {
   return (neuron0x314cb60()*-0.00483297);
}

double NNfunction_ns_chi01_dL::synapse0x315e350() {
   return (neuron0x314cea0()*0.00546951);
}

double NNfunction_ns_chi01_dL::synapse0x315e390() {
   return (neuron0x314d1e0()*0.00224987);
}

double NNfunction_ns_chi01_dL::synapse0x315e3d0() {
   return (neuron0x314d520()*0.0109431);
}

double NNfunction_ns_chi01_dL::synapse0x315e410() {
   return (neuron0x314d860()*-0.00540122);
}

double NNfunction_ns_chi01_dL::synapse0x31702e0() {
   return (neuron0x3148d30()*-0.0194697);
}

double NNfunction_ns_chi01_dL::synapse0x3170320() {
   return (neuron0x3148fe0()*7.44239);
}

double NNfunction_ns_chi01_dL::synapse0x3170360() {
   return (neuron0x3149320()*-0.455973);
}

double NNfunction_ns_chi01_dL::synapse0x31703a0() {
   return (neuron0x3149660()*-0.019189);
}

double NNfunction_ns_chi01_dL::synapse0x31703e0() {
   return (neuron0x31499a0()*0.00527859);
}

double NNfunction_ns_chi01_dL::synapse0x3170420() {
   return (neuron0x3149ce0()*0.0125867);
}

double NNfunction_ns_chi01_dL::synapse0x3170460() {
   return (neuron0x314a020()*-0.00581324);
}

double NNfunction_ns_chi01_dL::synapse0x31704a0() {
   return (neuron0x314a360()*-0.00439998);
}

double NNfunction_ns_chi01_dL::synapse0x31704e0() {
   return (neuron0x314a6a0()*0.0153564);
}

double NNfunction_ns_chi01_dL::synapse0x3170520() {
   return (neuron0x314a9e0()*0.0244956);
}

double NNfunction_ns_chi01_dL::synapse0x3170560() {
   return (neuron0x314ad20()*-0.0142649);
}

double NNfunction_ns_chi01_dL::synapse0x31705a0() {
   return (neuron0x314b060()*0.248499);
}

double NNfunction_ns_chi01_dL::synapse0x31705e0() {
   return (neuron0x314b3a0()*0.008873);
}

double NNfunction_ns_chi01_dL::synapse0x3170620() {
   return (neuron0x314b6e0()*0.00828369);
}

double NNfunction_ns_chi01_dL::synapse0x3170660() {
   return (neuron0x314ba20()*0.0296045);
}

double NNfunction_ns_chi01_dL::synapse0x31706a0() {
   return (neuron0x314bd60()*0.0113314);
}

double NNfunction_ns_chi01_dL::synapse0x315e450() {
   return (neuron0x314c0a0()*-0.0257255);
}

double NNfunction_ns_chi01_dL::synapse0x315e490() {
   return (neuron0x314c600()*-0.0226376);
}

double NNfunction_ns_chi01_dL::synapse0x31707f0() {
   return (neuron0x314c820()*0.0204662);
}

double NNfunction_ns_chi01_dL::synapse0x3170830() {
   return (neuron0x314cb60()*0.0504082);
}

double NNfunction_ns_chi01_dL::synapse0x3170870() {
   return (neuron0x314cea0()*0.00609999);
}

double NNfunction_ns_chi01_dL::synapse0x31708b0() {
   return (neuron0x314d1e0()*-0.0340425);
}

double NNfunction_ns_chi01_dL::synapse0x31708f0() {
   return (neuron0x314d520()*-0.0139384);
}

double NNfunction_ns_chi01_dL::synapse0x3170930() {
   return (neuron0x314d860()*-0.138913);
}

double NNfunction_ns_chi01_dL::synapse0x3170cb0() {
   return (neuron0x3148d30()*-0.372191);
}

double NNfunction_ns_chi01_dL::synapse0x3170cf0() {
   return (neuron0x3148fe0()*-0.0924234);
}

double NNfunction_ns_chi01_dL::synapse0x3170d30() {
   return (neuron0x3149320()*0.501783);
}

double NNfunction_ns_chi01_dL::synapse0x3170d70() {
   return (neuron0x3149660()*-1.36802);
}

double NNfunction_ns_chi01_dL::synapse0x3170db0() {
   return (neuron0x31499a0()*-0.308671);
}

double NNfunction_ns_chi01_dL::synapse0x3170df0() {
   return (neuron0x3149ce0()*-0.195761);
}

double NNfunction_ns_chi01_dL::synapse0x3170e30() {
   return (neuron0x314a020()*-0.198471);
}

double NNfunction_ns_chi01_dL::synapse0x3170e70() {
   return (neuron0x314a360()*0.146054);
}

double NNfunction_ns_chi01_dL::synapse0x3170eb0() {
   return (neuron0x314a6a0()*-0.00502516);
}

double NNfunction_ns_chi01_dL::synapse0x3170ef0() {
   return (neuron0x314a9e0()*-0.28638);
}

double NNfunction_ns_chi01_dL::synapse0x3170f30() {
   return (neuron0x314ad20()*-0.143994);
}

double NNfunction_ns_chi01_dL::synapse0x3170f70() {
   return (neuron0x314b060()*1.37996);
}

double NNfunction_ns_chi01_dL::synapse0x3170fb0() {
   return (neuron0x314b3a0()*-0.44072);
}

double NNfunction_ns_chi01_dL::synapse0x3170ff0() {
   return (neuron0x314b6e0()*0.563429);
}

double NNfunction_ns_chi01_dL::synapse0x3171030() {
   return (neuron0x314ba20()*-0.0666559);
}

double NNfunction_ns_chi01_dL::synapse0x3171070() {
   return (neuron0x314bd60()*-0.396014);
}

double NNfunction_ns_chi01_dL::synapse0x3170b00() {
   return (neuron0x314c0a0()*0.0974439);
}

double NNfunction_ns_chi01_dL::synapse0x3170b40() {
   return (neuron0x314c600()*-0.596034);
}

double NNfunction_ns_chi01_dL::synapse0x31711c0() {
   return (neuron0x314c820()*-0.0984043);
}

double NNfunction_ns_chi01_dL::synapse0x3171200() {
   return (neuron0x314cb60()*0.351542);
}

double NNfunction_ns_chi01_dL::synapse0x3171240() {
   return (neuron0x314cea0()*-0.425958);
}

double NNfunction_ns_chi01_dL::synapse0x3171280() {
   return (neuron0x314d1e0()*-0.00194311);
}

double NNfunction_ns_chi01_dL::synapse0x31712c0() {
   return (neuron0x314d520()*0.18681);
}

double NNfunction_ns_chi01_dL::synapse0x3171300() {
   return (neuron0x314d860()*-0.280421);
}

double NNfunction_ns_chi01_dL::synapse0x3171680() {
   return (neuron0x3148d30()*-0.0667248);
}

double NNfunction_ns_chi01_dL::synapse0x31716c0() {
   return (neuron0x3148fe0()*0.466208);
}

double NNfunction_ns_chi01_dL::synapse0x3171700() {
   return (neuron0x3149320()*-1.21092);
}

double NNfunction_ns_chi01_dL::synapse0x3171740() {
   return (neuron0x3149660()*-0.0573473);
}

double NNfunction_ns_chi01_dL::synapse0x3171780() {
   return (neuron0x31499a0()*-0.171175);
}

double NNfunction_ns_chi01_dL::synapse0x31717c0() {
   return (neuron0x3149ce0()*0.176318);
}

double NNfunction_ns_chi01_dL::synapse0x3171800() {
   return (neuron0x314a020()*0.0492592);
}

double NNfunction_ns_chi01_dL::synapse0x3171840() {
   return (neuron0x314a360()*0.12901);
}

double NNfunction_ns_chi01_dL::synapse0x3171880() {
   return (neuron0x314a6a0()*0.0478084);
}

double NNfunction_ns_chi01_dL::synapse0x31718c0() {
   return (neuron0x314a9e0()*0.050752);
}

double NNfunction_ns_chi01_dL::synapse0x3171900() {
   return (neuron0x314ad20()*-0.0452588);
}

double NNfunction_ns_chi01_dL::synapse0x3171940() {
   return (neuron0x314b060()*-0.376825);
}

double NNfunction_ns_chi01_dL::synapse0x3171980() {
   return (neuron0x314b3a0()*0.143984);
}

double NNfunction_ns_chi01_dL::synapse0x31719c0() {
   return (neuron0x314b6e0()*0.0379303);
}

double NNfunction_ns_chi01_dL::synapse0x3171a00() {
   return (neuron0x314ba20()*0.0155299);
}

double NNfunction_ns_chi01_dL::synapse0x3171a40() {
   return (neuron0x314bd60()*0.226449);
}

double NNfunction_ns_chi01_dL::synapse0x31714d0() {
   return (neuron0x314c0a0()*0.173129);
}

double NNfunction_ns_chi01_dL::synapse0x3171510() {
   return (neuron0x314c600()*0.0288324);
}

double NNfunction_ns_chi01_dL::synapse0x3171b90() {
   return (neuron0x314c820()*-0.154397);
}

double NNfunction_ns_chi01_dL::synapse0x3171bd0() {
   return (neuron0x314cb60()*0.0960289);
}

double NNfunction_ns_chi01_dL::synapse0x3171c10() {
   return (neuron0x314cea0()*0.114013);
}

double NNfunction_ns_chi01_dL::synapse0x3171c50() {
   return (neuron0x314d1e0()*-0.112852);
}

double NNfunction_ns_chi01_dL::synapse0x3171c90() {
   return (neuron0x314d520()*-0.175024);
}

double NNfunction_ns_chi01_dL::synapse0x3171cd0() {
   return (neuron0x314d860()*0.592245);
}

double NNfunction_ns_chi01_dL::synapse0x3172050() {
   return (neuron0x3148d30()*1.2924);
}

double NNfunction_ns_chi01_dL::synapse0x3172090() {
   return (neuron0x3148fe0()*-0.0569861);
}

double NNfunction_ns_chi01_dL::synapse0x31720d0() {
   return (neuron0x3149320()*0.397034);
}

double NNfunction_ns_chi01_dL::synapse0x3172110() {
   return (neuron0x3149660()*0.0552502);
}

double NNfunction_ns_chi01_dL::synapse0x3172150() {
   return (neuron0x31499a0()*-0.0233754);
}

double NNfunction_ns_chi01_dL::synapse0x3172190() {
   return (neuron0x3149ce0()*0.23605);
}

double NNfunction_ns_chi01_dL::synapse0x31721d0() {
   return (neuron0x314a020()*0.0719001);
}

double NNfunction_ns_chi01_dL::synapse0x3172210() {
   return (neuron0x314a360()*-0.170245);
}

double NNfunction_ns_chi01_dL::synapse0x3172250() {
   return (neuron0x314a6a0()*-0.019943);
}

double NNfunction_ns_chi01_dL::synapse0x3172290() {
   return (neuron0x314a9e0()*-0.0515786);
}

double NNfunction_ns_chi01_dL::synapse0x31722d0() {
   return (neuron0x314ad20()*0.0459411);
}

double NNfunction_ns_chi01_dL::synapse0x3172310() {
   return (neuron0x314b060()*0.890349);
}

double NNfunction_ns_chi01_dL::synapse0x3172350() {
   return (neuron0x314b3a0()*0.082226);
}

double NNfunction_ns_chi01_dL::synapse0x3172390() {
   return (neuron0x314b6e0()*0.0112527);
}

double NNfunction_ns_chi01_dL::synapse0x31723d0() {
   return (neuron0x314ba20()*0.122802);
}

double NNfunction_ns_chi01_dL::synapse0x3172410() {
   return (neuron0x314bd60()*-0.050881);
}

double NNfunction_ns_chi01_dL::synapse0x3171ea0() {
   return (neuron0x314c0a0()*-0.0490551);
}

double NNfunction_ns_chi01_dL::synapse0x3171ee0() {
   return (neuron0x314c600()*-0.0353329);
}

double NNfunction_ns_chi01_dL::synapse0x3172560() {
   return (neuron0x314c820()*0.0584953);
}

double NNfunction_ns_chi01_dL::synapse0x31725a0() {
   return (neuron0x314cb60()*0.0259724);
}

double NNfunction_ns_chi01_dL::synapse0x31725e0() {
   return (neuron0x314cea0()*-0.0372574);
}

double NNfunction_ns_chi01_dL::synapse0x3172620() {
   return (neuron0x314d1e0()*0.00134647);
}

double NNfunction_ns_chi01_dL::synapse0x3172660() {
   return (neuron0x314d520()*0.102918);
}

double NNfunction_ns_chi01_dL::synapse0x31726a0() {
   return (neuron0x314d860()*2.65228);
}

double NNfunction_ns_chi01_dL::synapse0x314ec30() {
   return (neuron0x314dcd0()*-0.137654);
}

double NNfunction_ns_chi01_dL::synapse0x314ec70() {
   return (neuron0x314e620()*-1.96485);
}

double NNfunction_ns_chi01_dL::synapse0x3150150() {
   return (neuron0x314f100()*-5.10987);
}

double NNfunction_ns_chi01_dL::synapse0x3150190() {
   return (neuron0x2f12450()*0.456379);
}

double NNfunction_ns_chi01_dL::synapse0x3150b20() {
   return (neuron0x314fea0()*-5.19976);
}

double NNfunction_ns_chi01_dL::synapse0x3150b60() {
   return (neuron0x3150870()*0.0223818);
}

double NNfunction_ns_chi01_dL::synapse0x31518f0() {
   return (neuron0x3151640()*-0.205053);
}

double NNfunction_ns_chi01_dL::synapse0x3151930() {
   return (neuron0x3152010()*-0.242731);
}

double NNfunction_ns_chi01_dL::synapse0x31522c0() {
   return (neuron0x31529e0()*6.66474);
}

double NNfunction_ns_chi01_dL::synapse0x3152300() {
   return (neuron0x31534c0()*-0.0603985);
}

double NNfunction_ns_chi01_dL::synapse0x3152c90() {
   return (neuron0x3153e90()*0.275406);
}

double NNfunction_ns_chi01_dL::synapse0x3152cd0() {
   return (neuron0x3150f70()*0.215506);
}

double NNfunction_ns_chi01_dL::synapse0x3153770() {
   return (neuron0x3155a40()*1.77749);
}

double NNfunction_ns_chi01_dL::synapse0x31537b0() {
   return (neuron0x3156410()*-2.14216);
}

double NNfunction_ns_chi01_dL::synapse0x3154140() {
   return (neuron0x3156de0()*-0.149678);
}

double NNfunction_ns_chi01_dL::synapse0x3154180() {
   return (neuron0x31577b0()*0.209931);
}

double NNfunction_ns_chi01_dL::synapse0x3151220() {
   return (neuron0x31595c0()*-2.17459);
}

double NNfunction_ns_chi01_dL::synapse0x3151260() {
   return (neuron0x31598a0()*0.35068);
}

double NNfunction_ns_chi01_dL::synapse0x3155cf0() {
   return (neuron0x315a270()*-0.526502);
}

double NNfunction_ns_chi01_dL::synapse0x3155d30() {
   return (neuron0x315ac40()*-4.65196);
}

double NNfunction_ns_chi01_dL::synapse0x31566c0() {
   return (neuron0x315b610()*-1.85724);
}

double NNfunction_ns_chi01_dL::synapse0x3156700() {
   return (neuron0x315bfe0()*-0.0763496);
}

double NNfunction_ns_chi01_dL::synapse0x3157090() {
   return (neuron0x3154b30()*-1.18175);
}

double NNfunction_ns_chi01_dL::synapse0x31570d0() {
   return (neuron0x3155500()*-0.0720517);
}

double NNfunction_ns_chi01_dL::synapse0x3157a60() {
   return (neuron0x315ed70()*-0.519979);
}

double NNfunction_ns_chi01_dL::synapse0x3157aa0() {
   return (neuron0x315f740()*-1.01021);
}

double NNfunction_ns_chi01_dL::synapse0x314bc40() {
   return (neuron0x3160110()*1.22074);
}

double NNfunction_ns_chi01_dL::synapse0x314bc80() {
   return (neuron0x3160ae0()*-0.824142);
}

double NNfunction_ns_chi01_dL::synapse0x3159b50() {
   return (neuron0x31614b0()*0.160625);
}

double NNfunction_ns_chi01_dL::synapse0x3159b90() {
   return (neuron0x3161e80()*3.45344);
}

double NNfunction_ns_chi01_dL::synapse0x315a520() {
   return (neuron0x3162850()*-0.0959603);
}

double NNfunction_ns_chi01_dL::synapse0x315a560() {
   return (neuron0x3163220()*0.112579);
}

double NNfunction_ns_chi01_dL::synapse0x315aef0() {
   return (neuron0x31592b0()*0.653666);
}

double NNfunction_ns_chi01_dL::synapse0x315af30() {
   return (neuron0x3165e00()*0.600364);
}

double NNfunction_ns_chi01_dL::synapse0x315b8c0() {
   return (neuron0x31667d0()*0.163986);
}

double NNfunction_ns_chi01_dL::synapse0x315b900() {
   return (neuron0x31671a0()*0.395359);
}

double NNfunction_ns_chi01_dL::synapse0x315c290() {
   return (neuron0x3167b70()*1.67379);
}

double NNfunction_ns_chi01_dL::synapse0x315c2d0() {
   return (neuron0x3168540()*-0.116174);
}

double NNfunction_ns_chi01_dL::synapse0x3154de0() {
   return (neuron0x3168f10()*6.18301);
}

double NNfunction_ns_chi01_dL::synapse0x3154e20() {
   return (neuron0x31698e0()*-0.1767);
}

double NNfunction_ns_chi01_dL::synapse0x315e690() {
   return (neuron0x316a2b0()*1.41497);
}

double NNfunction_ns_chi01_dL::synapse0x315e6d0() {
   return (neuron0x316ae90()*0.176278);
}

double NNfunction_ns_chi01_dL::synapse0x315f020() {
   return (neuron0x316b860()*0.0722534);
}

double NNfunction_ns_chi01_dL::synapse0x315f060() {
   return (neuron0x315c6e0()*0.137553);
}

double NNfunction_ns_chi01_dL::synapse0x315f9f0() {
   return (neuron0x315d0b0()*-0.907046);
}

double NNfunction_ns_chi01_dL::synapse0x315fa30() {
   return (neuron0x315da80()*-1.07798);
}

double NNfunction_ns_chi01_dL::synapse0x31603c0() {
   return (neuron0x31700c0()*0.462356);
}

double NNfunction_ns_chi01_dL::synapse0x3160400() {
   return (neuron0x3170970()*0.151308);
}

double NNfunction_ns_chi01_dL::synapse0x3160d90() {
   return (neuron0x3171340()*0.521863);
}

double NNfunction_ns_chi01_dL::synapse0x3160dd0() {
   return (neuron0x3171d10()*-0.698086);
}

double NNfunction_ns_chi01_dL::synapse0x31634d0() {
   return (neuron0x314dcd0()*0.041766);
}

double NNfunction_ns_chi01_dL::synapse0x3163510() {
   return (neuron0x314e620()*-2.71631);
}

double NNfunction_ns_chi01_dL::synapse0x3158a90() {
   return (neuron0x314f100()*-0.519761);
}

double NNfunction_ns_chi01_dL::synapse0x3158ad0() {
   return (neuron0x2f12450()*-0.0115219);
}

double NNfunction_ns_chi01_dL::synapse0x31660b0() {
   return (neuron0x314fea0()*1.83769);
}

double NNfunction_ns_chi01_dL::synapse0x31660f0() {
   return (neuron0x3150870()*0.00638355);
}

double NNfunction_ns_chi01_dL::synapse0x3166a80() {
   return (neuron0x3151640()*-0.123899);
}

double NNfunction_ns_chi01_dL::synapse0x3166ac0() {
   return (neuron0x3152010()*0.0408787);
}

double NNfunction_ns_chi01_dL::synapse0x3167450() {
   return (neuron0x31529e0()*-0.35615);
}

double NNfunction_ns_chi01_dL::synapse0x3167490() {
   return (neuron0x31534c0()*-0.00442213);
}

double NNfunction_ns_chi01_dL::synapse0x3167e20() {
   return (neuron0x3153e90()*0.079331);
}

double NNfunction_ns_chi01_dL::synapse0x3167e60() {
   return (neuron0x3150f70()*0.0182564);
}

double NNfunction_ns_chi01_dL::synapse0x31687f0() {
   return (neuron0x3155a40()*5.59089);
}

double NNfunction_ns_chi01_dL::synapse0x3168830() {
   return (neuron0x3156410()*-0.60246);
}

double NNfunction_ns_chi01_dL::synapse0x31691c0() {
   return (neuron0x3156de0()*-1.98989);
}

double NNfunction_ns_chi01_dL::synapse0x3169200() {
   return (neuron0x31577b0()*-0.00880201);
}

double NNfunction_ns_chi01_dL::synapse0x3169b90() {
   return (neuron0x31595c0()*-3.46805);
}

double NNfunction_ns_chi01_dL::synapse0x3169bd0() {
   return (neuron0x31598a0()*0.0055325);
}

double NNfunction_ns_chi01_dL::synapse0x316a560() {
   return (neuron0x315a270()*-0.819779);
}

double NNfunction_ns_chi01_dL::synapse0x316a5a0() {
   return (neuron0x315ac40()*0.582093);
}

double NNfunction_ns_chi01_dL::synapse0x316b140() {
   return (neuron0x315b610()*-3.05296);
}

double NNfunction_ns_chi01_dL::synapse0x316b180() {
   return (neuron0x315bfe0()*-0.0549955);
}

double NNfunction_ns_chi01_dL::synapse0x316bb10() {
   return (neuron0x3154b30()*0.0673666);
}

double NNfunction_ns_chi01_dL::synapse0x316bb50() {
   return (neuron0x3155500()*-0.0220697);
}

double NNfunction_ns_chi01_dL::synapse0x315c990() {
   return (neuron0x315ed70()*1.16451);
}

double NNfunction_ns_chi01_dL::synapse0x315c9d0() {
   return (neuron0x315f740()*-0.309313);
}

double NNfunction_ns_chi01_dL::synapse0x315d360() {
   return (neuron0x3160110()*2.2088);
}

double NNfunction_ns_chi01_dL::synapse0x315d3a0() {
   return (neuron0x3160ae0()*-1.20678);
}

double NNfunction_ns_chi01_dL::synapse0x315dd30() {
   return (neuron0x31614b0()*-0.0338133);
}

double NNfunction_ns_chi01_dL::synapse0x315dd70() {
   return (neuron0x3161e80()*-0.101754);
}

double NNfunction_ns_chi01_dL::synapse0x3170250() {
   return (neuron0x3162850()*0.0239206);
}

double NNfunction_ns_chi01_dL::synapse0x3170290() {
   return (neuron0x3163220()*0.000202325);
}

double NNfunction_ns_chi01_dL::synapse0x3170c20() {
   return (neuron0x31592b0()*-0.0396342);
}

double NNfunction_ns_chi01_dL::synapse0x3170c60() {
   return (neuron0x3165e00()*1.06649);
}

double NNfunction_ns_chi01_dL::synapse0x31715f0() {
   return (neuron0x31667d0()*-0.0118116);
}

double NNfunction_ns_chi01_dL::synapse0x3171630() {
   return (neuron0x31671a0()*0.20469);
}

double NNfunction_ns_chi01_dL::synapse0x3171fc0() {
   return (neuron0x3167b70()*0.0569917);
}

double NNfunction_ns_chi01_dL::synapse0x3172000() {
   return (neuron0x3168540()*-0.282902);
}

double NNfunction_ns_chi01_dL::synapse0x314def0() {
   return (neuron0x3168f10()*3.51165);
}

double NNfunction_ns_chi01_dL::synapse0x314df30() {
   return (neuron0x31698e0()*0.0445121);
}

double NNfunction_ns_chi01_dL::synapse0x3161760() {
   return (neuron0x316a2b0()*-0.120984);
}

double NNfunction_ns_chi01_dL::synapse0x31617a0() {
   return (neuron0x316ae90()*0.0252419);
}

double NNfunction_ns_chi01_dL::synapse0x31726e0() {
   return (neuron0x316b860()*0.0496046);
}

double NNfunction_ns_chi01_dL::synapse0x3172720() {
   return (neuron0x315c6e0()*-0.419008);
}

double NNfunction_ns_chi01_dL::synapse0x3172760() {
   return (neuron0x315d0b0()*0.366515);
}

double NNfunction_ns_chi01_dL::synapse0x31727a0() {
   return (neuron0x315da80()*-2.99449);
}

double NNfunction_ns_chi01_dL::synapse0x3179650() {
   return (neuron0x31700c0()*-1.2915);
}

double NNfunction_ns_chi01_dL::synapse0x3179690() {
   return (neuron0x3170970()*0.00821612);
}

double NNfunction_ns_chi01_dL::synapse0x31796d0() {
   return (neuron0x3171340()*0.0394939);
}

double NNfunction_ns_chi01_dL::synapse0x3179710() {
   return (neuron0x3171d10()*0.0230335);
}

double NNfunction_ns_chi01_dL::synapse0x3179a90() {
   return (neuron0x314dcd0()*-1.57522);
}

double NNfunction_ns_chi01_dL::synapse0x3179ad0() {
   return (neuron0x314e620()*-0.149523);
}

double NNfunction_ns_chi01_dL::synapse0x3179b10() {
   return (neuron0x314f100()*0.0594065);
}

double NNfunction_ns_chi01_dL::synapse0x3179b50() {
   return (neuron0x2f12450()*-0.187843);
}

double NNfunction_ns_chi01_dL::synapse0x3179b90() {
   return (neuron0x314fea0()*1.4405);
}

double NNfunction_ns_chi01_dL::synapse0x3179bd0() {
   return (neuron0x3150870()*0.226311);
}

double NNfunction_ns_chi01_dL::synapse0x3179c10() {
   return (neuron0x3151640()*-2.36524);
}

double NNfunction_ns_chi01_dL::synapse0x3179c50() {
   return (neuron0x3152010()*0.817418);
}

double NNfunction_ns_chi01_dL::synapse0x3179c90() {
   return (neuron0x31529e0()*0.247255);
}

double NNfunction_ns_chi01_dL::synapse0x3179cd0() {
   return (neuron0x31534c0()*0.487692);
}

double NNfunction_ns_chi01_dL::synapse0x3179d10() {
   return (neuron0x3153e90()*1.48311);
}

double NNfunction_ns_chi01_dL::synapse0x3179d50() {
   return (neuron0x3150f70()*-0.261447);
}

double NNfunction_ns_chi01_dL::synapse0x3179d90() {
   return (neuron0x3155a40()*-0.853444);
}

double NNfunction_ns_chi01_dL::synapse0x3179dd0() {
   return (neuron0x3156410()*0.293451);
}

double NNfunction_ns_chi01_dL::synapse0x3179e10() {
   return (neuron0x3156de0()*-0.504452);
}

double NNfunction_ns_chi01_dL::synapse0x3179e50() {
   return (neuron0x31577b0()*-0.367505);
}

double NNfunction_ns_chi01_dL::synapse0x31798e0() {
   return (neuron0x31595c0()*0.627983);
}

double NNfunction_ns_chi01_dL::synapse0x3179920() {
   return (neuron0x31598a0()*-0.483096);
}

double NNfunction_ns_chi01_dL::synapse0x3179fa0() {
   return (neuron0x315a270()*0.333631);
}

double NNfunction_ns_chi01_dL::synapse0x3179fe0() {
   return (neuron0x315ac40()*-1.56515);
}

double NNfunction_ns_chi01_dL::synapse0x317a020() {
   return (neuron0x315b610()*0.490028);
}

double NNfunction_ns_chi01_dL::synapse0x317a060() {
   return (neuron0x315bfe0()*-0.346466);
}

double NNfunction_ns_chi01_dL::synapse0x317a0a0() {
   return (neuron0x3154b30()*0.509796);
}

double NNfunction_ns_chi01_dL::synapse0x317a0e0() {
   return (neuron0x3155500()*-0.232124);
}

double NNfunction_ns_chi01_dL::synapse0x317a120() {
   return (neuron0x315ed70()*-0.18659);
}

double NNfunction_ns_chi01_dL::synapse0x317a160() {
   return (neuron0x315f740()*-0.675725);
}

double NNfunction_ns_chi01_dL::synapse0x317a1a0() {
   return (neuron0x3160110()*0.0862259);
}

double NNfunction_ns_chi01_dL::synapse0x317a1e0() {
   return (neuron0x3160ae0()*0.0157124);
}

double NNfunction_ns_chi01_dL::synapse0x317a220() {
   return (neuron0x31614b0()*-0.630639);
}

double NNfunction_ns_chi01_dL::synapse0x317a260() {
   return (neuron0x3161e80()*0.661645);
}

double NNfunction_ns_chi01_dL::synapse0x317a2a0() {
   return (neuron0x3162850()*0.578082);
}

double NNfunction_ns_chi01_dL::synapse0x317a2e0() {
   return (neuron0x3163220()*-0.133247);
}

double NNfunction_ns_chi01_dL::synapse0x3179e90() {
   return (neuron0x31592b0()*-0.616305);
}

double NNfunction_ns_chi01_dL::synapse0x3179ed0() {
   return (neuron0x3165e00()*-0.565976);
}

double NNfunction_ns_chi01_dL::synapse0x3179f10() {
   return (neuron0x31667d0()*-0.195875);
}

double NNfunction_ns_chi01_dL::synapse0x3179f50() {
   return (neuron0x31671a0()*1.17004);
}

double NNfunction_ns_chi01_dL::synapse0x317a530() {
   return (neuron0x3167b70()*-0.265669);
}

double NNfunction_ns_chi01_dL::synapse0x317a570() {
   return (neuron0x3168540()*-0.409178);
}

double NNfunction_ns_chi01_dL::synapse0x317a5b0() {
   return (neuron0x3168f10()*-1.24217);
}

double NNfunction_ns_chi01_dL::synapse0x317a5f0() {
   return (neuron0x31698e0()*-0.0842843);
}

double NNfunction_ns_chi01_dL::synapse0x317a630() {
   return (neuron0x316a2b0()*0.456549);
}

double NNfunction_ns_chi01_dL::synapse0x317a670() {
   return (neuron0x316ae90()*0.325649);
}

double NNfunction_ns_chi01_dL::synapse0x317a6b0() {
   return (neuron0x316b860()*-0.221528);
}

double NNfunction_ns_chi01_dL::synapse0x317a6f0() {
   return (neuron0x315c6e0()*0.556546);
}

double NNfunction_ns_chi01_dL::synapse0x317a730() {
   return (neuron0x315d0b0()*0.0130485);
}

double NNfunction_ns_chi01_dL::synapse0x317a770() {
   return (neuron0x315da80()*0.0399839);
}

double NNfunction_ns_chi01_dL::synapse0x317a7b0() {
   return (neuron0x31700c0()*-0.511892);
}

double NNfunction_ns_chi01_dL::synapse0x317a7f0() {
   return (neuron0x3170970()*-0.245925);
}

double NNfunction_ns_chi01_dL::synapse0x317a830() {
   return (neuron0x3171340()*0.65768);
}

double NNfunction_ns_chi01_dL::synapse0x317a870() {
   return (neuron0x3171d10()*0.442567);
}

double NNfunction_ns_chi01_dL::synapse0x317abf0() {
   return (neuron0x314dcd0()*0.119026);
}

double NNfunction_ns_chi01_dL::synapse0x317ac30() {
   return (neuron0x314e620()*0.64685);
}

double NNfunction_ns_chi01_dL::synapse0x317ac70() {
   return (neuron0x314f100()*0.803309);
}

double NNfunction_ns_chi01_dL::synapse0x317acb0() {
   return (neuron0x2f12450()*0.221342);
}

double NNfunction_ns_chi01_dL::synapse0x317acf0() {
   return (neuron0x314fea0()*-0.230479);
}

double NNfunction_ns_chi01_dL::synapse0x317ad30() {
   return (neuron0x3150870()*0.438521);
}

double NNfunction_ns_chi01_dL::synapse0x317ad70() {
   return (neuron0x3151640()*0.96662);
}

double NNfunction_ns_chi01_dL::synapse0x317adb0() {
   return (neuron0x3152010()*0.0171626);
}

double NNfunction_ns_chi01_dL::synapse0x317adf0() {
   return (neuron0x31529e0()*0.771429);
}

double NNfunction_ns_chi01_dL::synapse0x317ae30() {
   return (neuron0x31534c0()*0.562329);
}

double NNfunction_ns_chi01_dL::synapse0x317ae70() {
   return (neuron0x3153e90()*-0.24509);
}

double NNfunction_ns_chi01_dL::synapse0x317aeb0() {
   return (neuron0x3150f70()*0.0335779);
}

double NNfunction_ns_chi01_dL::synapse0x317aef0() {
   return (neuron0x3155a40()*0.171636);
}

double NNfunction_ns_chi01_dL::synapse0x317af30() {
   return (neuron0x3156410()*-0.0742839);
}

double NNfunction_ns_chi01_dL::synapse0x317af70() {
   return (neuron0x3156de0()*0.449138);
}

double NNfunction_ns_chi01_dL::synapse0x317afb0() {
   return (neuron0x31577b0()*0.338936);
}

double NNfunction_ns_chi01_dL::synapse0x317aa40() {
   return (neuron0x31595c0()*0.129823);
}

double NNfunction_ns_chi01_dL::synapse0x317aa80() {
   return (neuron0x31598a0()*0.409388);
}

double NNfunction_ns_chi01_dL::synapse0x317b100() {
   return (neuron0x315a270()*0.553486);
}

double NNfunction_ns_chi01_dL::synapse0x317b140() {
   return (neuron0x315ac40()*-0.0421724);
}

double NNfunction_ns_chi01_dL::synapse0x317b180() {
   return (neuron0x315b610()*0.646892);
}

double NNfunction_ns_chi01_dL::synapse0x317b1c0() {
   return (neuron0x315bfe0()*0.214904);
}

double NNfunction_ns_chi01_dL::synapse0x317b200() {
   return (neuron0x3154b30()*0.0973274);
}

double NNfunction_ns_chi01_dL::synapse0x317b240() {
   return (neuron0x3155500()*0.353805);
}

double NNfunction_ns_chi01_dL::synapse0x317b280() {
   return (neuron0x315ed70()*-0.251168);
}

double NNfunction_ns_chi01_dL::synapse0x317b2c0() {
   return (neuron0x315f740()*0.278464);
}

double NNfunction_ns_chi01_dL::synapse0x317b300() {
   return (neuron0x3160110()*-0.247506);
}

double NNfunction_ns_chi01_dL::synapse0x317b340() {
   return (neuron0x3160ae0()*0.666117);
}

double NNfunction_ns_chi01_dL::synapse0x317b380() {
   return (neuron0x31614b0()*0.520129);
}

double NNfunction_ns_chi01_dL::synapse0x317b3c0() {
   return (neuron0x3161e80()*0.693816);
}

double NNfunction_ns_chi01_dL::synapse0x317b400() {
   return (neuron0x3162850()*-0.322399);
}

double NNfunction_ns_chi01_dL::synapse0x317b440() {
   return (neuron0x3163220()*0.0242556);
}

double NNfunction_ns_chi01_dL::synapse0x317aff0() {
   return (neuron0x31592b0()*-0.181368);
}

double NNfunction_ns_chi01_dL::synapse0x317b030() {
   return (neuron0x3165e00()*-0.523384);
}

double NNfunction_ns_chi01_dL::synapse0x317b070() {
   return (neuron0x31667d0()*0.0785121);
}

double NNfunction_ns_chi01_dL::synapse0x317b0b0() {
   return (neuron0x31671a0()*0.645672);
}

double NNfunction_ns_chi01_dL::synapse0x317b690() {
   return (neuron0x3167b70()*0.611755);
}

double NNfunction_ns_chi01_dL::synapse0x317b6d0() {
   return (neuron0x3168540()*0.690683);
}

double NNfunction_ns_chi01_dL::synapse0x317b710() {
   return (neuron0x3168f10()*-0.975113);
}

double NNfunction_ns_chi01_dL::synapse0x317b750() {
   return (neuron0x31698e0()*0.200851);
}

double NNfunction_ns_chi01_dL::synapse0x317b790() {
   return (neuron0x316a2b0()*0.17631);
}

double NNfunction_ns_chi01_dL::synapse0x317b7d0() {
   return (neuron0x316ae90()*0.338987);
}

double NNfunction_ns_chi01_dL::synapse0x317b810() {
   return (neuron0x316b860()*-0.208996);
}

double NNfunction_ns_chi01_dL::synapse0x317b850() {
   return (neuron0x315c6e0()*0.854254);
}

double NNfunction_ns_chi01_dL::synapse0x317b890() {
   return (neuron0x315d0b0()*-0.0492278);
}

double NNfunction_ns_chi01_dL::synapse0x317b8d0() {
   return (neuron0x315da80()*0.374234);
}

double NNfunction_ns_chi01_dL::synapse0x317b910() {
   return (neuron0x31700c0()*0.297765);
}

double NNfunction_ns_chi01_dL::synapse0x317b950() {
   return (neuron0x3170970()*-0.176898);
}

double NNfunction_ns_chi01_dL::synapse0x317b990() {
   return (neuron0x3171340()*-0.0603987);
}

double NNfunction_ns_chi01_dL::synapse0x317b9d0() {
   return (neuron0x3171d10()*0.440954);
}

double NNfunction_ns_chi01_dL::synapse0x317bd50() {
   return (neuron0x314dcd0()*1.4245);
}

double NNfunction_ns_chi01_dL::synapse0x317bd90() {
   return (neuron0x314e620()*1.09239);
}

double NNfunction_ns_chi01_dL::synapse0x317bdd0() {
   return (neuron0x314f100()*5.29188);
}

double NNfunction_ns_chi01_dL::synapse0x317be10() {
   return (neuron0x2f12450()*-0.113847);
}

double NNfunction_ns_chi01_dL::synapse0x317be50() {
   return (neuron0x314fea0()*-0.561119);
}

double NNfunction_ns_chi01_dL::synapse0x317be90() {
   return (neuron0x3150870()*-0.0289912);
}

double NNfunction_ns_chi01_dL::synapse0x317bed0() {
   return (neuron0x3151640()*3.23062);
}

double NNfunction_ns_chi01_dL::synapse0x317bf10() {
   return (neuron0x3152010()*-0.229388);
}

double NNfunction_ns_chi01_dL::synapse0x317bf50() {
   return (neuron0x31529e0()*-0.605805);
}

double NNfunction_ns_chi01_dL::synapse0x317bf90() {
   return (neuron0x31534c0()*0.00936705);
}

double NNfunction_ns_chi01_dL::synapse0x317bfd0() {
   return (neuron0x3153e90()*-1.15702);
}

double NNfunction_ns_chi01_dL::synapse0x317c010() {
   return (neuron0x3150f70()*0.349504);
}

double NNfunction_ns_chi01_dL::synapse0x317c050() {
   return (neuron0x3155a40()*-1.29038);
}

double NNfunction_ns_chi01_dL::synapse0x317c090() {
   return (neuron0x3156410()*-1.65826);
}

double NNfunction_ns_chi01_dL::synapse0x317c0d0() {
   return (neuron0x3156de0()*0.70452);
}

double NNfunction_ns_chi01_dL::synapse0x317c110() {
   return (neuron0x31577b0()*0.126177);
}

double NNfunction_ns_chi01_dL::synapse0x317bba0() {
   return (neuron0x31595c0()*0.943833);
}

double NNfunction_ns_chi01_dL::synapse0x317bbe0() {
   return (neuron0x31598a0()*0.0697652);
}

double NNfunction_ns_chi01_dL::synapse0x317c260() {
   return (neuron0x315a270()*0.145038);
}

double NNfunction_ns_chi01_dL::synapse0x317c2a0() {
   return (neuron0x315ac40()*4.21094);
}

double NNfunction_ns_chi01_dL::synapse0x317c2e0() {
   return (neuron0x315b610()*0.845238);
}

double NNfunction_ns_chi01_dL::synapse0x317c320() {
   return (neuron0x315bfe0()*1.29494);
}

double NNfunction_ns_chi01_dL::synapse0x317c360() {
   return (neuron0x3154b30()*0.714508);
}

double NNfunction_ns_chi01_dL::synapse0x317c3a0() {
   return (neuron0x3155500()*0.0712744);
}

double NNfunction_ns_chi01_dL::synapse0x317c3e0() {
   return (neuron0x315ed70()*-0.279087);
}

double NNfunction_ns_chi01_dL::synapse0x317c420() {
   return (neuron0x315f740()*-1.75567);
}

double NNfunction_ns_chi01_dL::synapse0x317c460() {
   return (neuron0x3160110()*-0.490558);
}

double NNfunction_ns_chi01_dL::synapse0x317c4a0() {
   return (neuron0x3160ae0()*4.56963);
}

double NNfunction_ns_chi01_dL::synapse0x317c4e0() {
   return (neuron0x31614b0()*0.247178);
}

double NNfunction_ns_chi01_dL::synapse0x317c520() {
   return (neuron0x3161e80()*-2.11415);
}

double NNfunction_ns_chi01_dL::synapse0x317c560() {
   return (neuron0x3162850()*-0.303752);
}

double NNfunction_ns_chi01_dL::synapse0x317c5a0() {
   return (neuron0x3163220()*0.0410087);
}

double NNfunction_ns_chi01_dL::synapse0x317c150() {
   return (neuron0x31592b0()*-0.406179);
}

double NNfunction_ns_chi01_dL::synapse0x317c190() {
   return (neuron0x3165e00()*-0.143915);
}

double NNfunction_ns_chi01_dL::synapse0x317c1d0() {
   return (neuron0x31667d0()*0.0674699);
}

double NNfunction_ns_chi01_dL::synapse0x317c210() {
   return (neuron0x31671a0()*-2.30612);
}

double NNfunction_ns_chi01_dL::synapse0x317c7f0() {
   return (neuron0x3167b70()*-0.582791);
}

double NNfunction_ns_chi01_dL::synapse0x317c830() {
   return (neuron0x3168540()*0.34813);
}

double NNfunction_ns_chi01_dL::synapse0x317c870() {
   return (neuron0x3168f10()*-1.51102);
}

double NNfunction_ns_chi01_dL::synapse0x317c8b0() {
   return (neuron0x31698e0()*0.0516916);
}

double NNfunction_ns_chi01_dL::synapse0x317c8f0() {
   return (neuron0x316a2b0()*-1.60654);
}

double NNfunction_ns_chi01_dL::synapse0x317c930() {
   return (neuron0x316ae90()*-0.216783);
}

double NNfunction_ns_chi01_dL::synapse0x317c970() {
   return (neuron0x316b860()*0.057378);
}

double NNfunction_ns_chi01_dL::synapse0x317c9b0() {
   return (neuron0x315c6e0()*-0.848649);
}

double NNfunction_ns_chi01_dL::synapse0x317c9f0() {
   return (neuron0x315d0b0()*-1.08935);
}

double NNfunction_ns_chi01_dL::synapse0x317ca30() {
   return (neuron0x315da80()*0.745461);
}

double NNfunction_ns_chi01_dL::synapse0x317ca70() {
   return (neuron0x31700c0()*-1.17315);
}

double NNfunction_ns_chi01_dL::synapse0x317cab0() {
   return (neuron0x3170970()*-0.0940607);
}

double NNfunction_ns_chi01_dL::synapse0x317caf0() {
   return (neuron0x3171340()*-0.794415);
}

double NNfunction_ns_chi01_dL::synapse0x317cb30() {
   return (neuron0x3171d10()*0.0626128);
}

double NNfunction_ns_chi01_dL::synapse0x317cd90() {
   return (neuron0x3178f10()*-9.06024);
}

double NNfunction_ns_chi01_dL::synapse0x317cdd0() {
   return (neuron0x31792b0()*12.2355);
}

double NNfunction_ns_chi01_dL::synapse0x317ce10() {
   return (neuron0x3179750()*-3.98477);
}

double NNfunction_ns_chi01_dL::synapse0x317ce50() {
   return (neuron0x317a8b0()*0.597991);
}

double NNfunction_ns_chi01_dL::synapse0x317ce90() {
   return (neuron0x317ba10()*-7.30512);
}

