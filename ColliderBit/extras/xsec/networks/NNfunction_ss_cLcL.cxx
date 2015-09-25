#include "NNfunction_ss_cLcL.h"
#include <cmath>

double NNfunction_ss_cLcL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.8603)/15.4486;
   input1 = (in1 - 224.842)/693.945;
   input2 = (in2 - 619.282)/508.881;
   input3 = (in3 - 1110.45)/1339.49;
   input4 = (in4 - 1501.91)/1067.97;
   input5 = (in5 - 1476.94)/1092.28;
   input6 = (in6 - 1478.67)/1091.76;
   input7 = (in7 - 1422.49)/1036.47;
   input8 = (in8 - 1435.62)/1088.56;
   input9 = (in9 - 1426.5)/1087.4;
   input10 = (in10 - 1303.97)/991.245;
   input11 = (in11 - 1825.41)/1357.54;
   input12 = (in12 - 1697.73)/1395.11;
   input13 = (in13 - 1467.25)/1118.53;
   input14 = (in14 - 1797.96)/1323.54;
   input15 = (in15 - 1796.17)/1324.37;
   input16 = (in16 - 1210.6)/913.975;
   input17 = (in17 - 1809.06)/1326.86;
   input18 = (in18 - 1805.58)/1330.03;
   input19 = (in19 - 1709.77)/1226.93;
   input20 = (in20 - -873.276)/1125.97;
   input21 = (in21 - -1192.83)/1922.29;
   input22 = (in22 - -236.449)/1579.27;
   input23 = (in23 - 617.381)/877.773;
   switch(index) {
     case 0:
         return neuron0x299ef80();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcL::Value(int index, double* input) {
   input0 = (input[0] - 24.8603)/15.4486;
   input1 = (input[1] - 224.842)/693.945;
   input2 = (input[2] - 619.282)/508.881;
   input3 = (input[3] - 1110.45)/1339.49;
   input4 = (input[4] - 1501.91)/1067.97;
   input5 = (input[5] - 1476.94)/1092.28;
   input6 = (input[6] - 1478.67)/1091.76;
   input7 = (input[7] - 1422.49)/1036.47;
   input8 = (input[8] - 1435.62)/1088.56;
   input9 = (input[9] - 1426.5)/1087.4;
   input10 = (input[10] - 1303.97)/991.245;
   input11 = (input[11] - 1825.41)/1357.54;
   input12 = (input[12] - 1697.73)/1395.11;
   input13 = (input[13] - 1467.25)/1118.53;
   input14 = (input[14] - 1797.96)/1323.54;
   input15 = (input[15] - 1796.17)/1324.37;
   input16 = (input[16] - 1210.6)/913.975;
   input17 = (input[17] - 1809.06)/1326.86;
   input18 = (input[18] - 1805.58)/1330.03;
   input19 = (input[19] - 1709.77)/1226.93;
   input20 = (input[20] - -873.276)/1125.97;
   input21 = (input[21] - -1192.83)/1922.29;
   input22 = (input[22] - -236.449)/1579.27;
   input23 = (input[23] - 617.381)/877.773;
   switch(index) {
     case 0:
         return neuron0x299ef80();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcL::neuron0x2969ff0() {
   return input0;
}

double NNfunction_ss_cLcL::neuron0x296a2a0() {
   return input1;
}

double NNfunction_ss_cLcL::neuron0x296a5e0() {
   return input2;
}

double NNfunction_ss_cLcL::neuron0x296a920() {
   return input3;
}

double NNfunction_ss_cLcL::neuron0x296ac60() {
   return input4;
}

double NNfunction_ss_cLcL::neuron0x296afa0() {
   return input5;
}

double NNfunction_ss_cLcL::neuron0x296b2e0() {
   return input6;
}

double NNfunction_ss_cLcL::neuron0x296b620() {
   return input7;
}

double NNfunction_ss_cLcL::neuron0x296b960() {
   return input8;
}

double NNfunction_ss_cLcL::neuron0x296bca0() {
   return input9;
}

double NNfunction_ss_cLcL::neuron0x296bfe0() {
   return input10;
}

double NNfunction_ss_cLcL::neuron0x296c320() {
   return input11;
}

double NNfunction_ss_cLcL::neuron0x296c660() {
   return input12;
}

double NNfunction_ss_cLcL::neuron0x296c9a0() {
   return input13;
}

double NNfunction_ss_cLcL::neuron0x296cce0() {
   return input14;
}

double NNfunction_ss_cLcL::neuron0x296d020() {
   return input15;
}

double NNfunction_ss_cLcL::neuron0x296d360() {
   return input16;
}

double NNfunction_ss_cLcL::neuron0x296d8c0() {
   return input17;
}

double NNfunction_ss_cLcL::neuron0x296dc00() {
   return input18;
}

double NNfunction_ss_cLcL::neuron0x296df40() {
   return input19;
}

double NNfunction_ss_cLcL::neuron0x296e280() {
   return input20;
}

double NNfunction_ss_cLcL::neuron0x296e5c0() {
   return input21;
}

double NNfunction_ss_cLcL::neuron0x296e900() {
   return input22;
}

double NNfunction_ss_cLcL::neuron0x296ec40() {
   return input23;
}

double NNfunction_ss_cLcL::input0x296f0b0() {
   double input = 1.37892;
   input += synapse0x296f3f0();
   input += synapse0x296f430();
   input += synapse0x296f470();
   input += synapse0x296f4b0();
   input += synapse0x296f4f0();
   input += synapse0x296f530();
   input += synapse0x296f570();
   input += synapse0x296f5b0();
   input += synapse0x296f5f0();
   input += synapse0x296f630();
   input += synapse0x296f670();
   input += synapse0x296f6b0();
   input += synapse0x296f6f0();
   input += synapse0x296f730();
   input += synapse0x296f770();
   input += synapse0x296f7b0();
   input += synapse0x296f240();
   input += synapse0x296f280();
   input += synapse0x27261b0();
   input += synapse0x27261f0();
   input += synapse0x296f7f0();
   input += synapse0x296f830();
   input += synapse0x296f870();
   input += synapse0x296f8b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x296f0b0() {
   double input = input0x296f0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x296f8f0() {
   double input = -3.64882;
   input += synapse0x296fc30();
   input += synapse0x296fc70();
   input += synapse0x296fcb0();
   input += synapse0x296fcf0();
   input += synapse0x296fd30();
   input += synapse0x296fd70();
   input += synapse0x296fdb0();
   input += synapse0x296fdf0();
   input += synapse0x296fe30();
   input += synapse0x2726000();
   input += synapse0x2726040();
   input += synapse0x2726080();
   input += synapse0x27260c0();
   input += synapse0x2970080();
   input += synapse0x29700c0();
   input += synapse0x2970100();
   input += synapse0x296fa80();
   input += synapse0x296fac0();
   input += synapse0x2970250();
   input += synapse0x2970290();
   input += synapse0x29702d0();
   input += synapse0x2970310();
   input += synapse0x2970350();
   input += synapse0x2970390();
   return input;
}

double NNfunction_ss_cLcL::neuron0x296f8f0() {
   double input = input0x296f8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29703d0() {
   double input = -1.46412;
   input += synapse0x2970710();
   input += synapse0x2970750();
   input += synapse0x2970790();
   input += synapse0x29707d0();
   input += synapse0x2970810();
   input += synapse0x2970850();
   input += synapse0x2970890();
   input += synapse0x29708d0();
   input += synapse0x2970910();
   input += synapse0x2970950();
   input += synapse0x2970990();
   input += synapse0x29709d0();
   input += synapse0x2970a10();
   input += synapse0x2970a50();
   input += synapse0x2970a90();
   input += synapse0x2970ad0();
   input += synapse0x2970560();
   input += synapse0x29705a0();
   input += synapse0x2726860();
   input += synapse0x2734130();
   input += synapse0x2734170();
   input += synapse0x2972a00();
   input += synapse0x2972a40();
   input += synapse0x2969d30();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29703d0() {
   double input = input0x29703d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x296fe70() {
   double input = -2.08502;
   input += synapse0x2969e00();
   input += synapse0x27349b0();
   input += synapse0x2970000();
   input += synapse0x2970040();
   input += synapse0x2970c20();
   input += synapse0x2970c60();
   input += synapse0x2970ca0();
   input += synapse0x2970ce0();
   input += synapse0x2970d20();
   input += synapse0x2970d60();
   input += synapse0x2970da0();
   input += synapse0x2970de0();
   input += synapse0x2970e20();
   input += synapse0x2970e60();
   input += synapse0x2970ea0();
   input += synapse0x2970ee0();
   input += synapse0x2969d70();
   input += synapse0x2969db0();
   input += synapse0x2971030();
   input += synapse0x2971070();
   input += synapse0x29710b0();
   input += synapse0x29710f0();
   input += synapse0x2971130();
   input += synapse0x2971170();
   return input;
}

double NNfunction_ss_cLcL::neuron0x296fe70() {
   double input = input0x296fe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29711b0() {
   double input = -0.255846;
   input += synapse0x29714f0();
   input += synapse0x2971530();
   input += synapse0x2971570();
   input += synapse0x29715b0();
   input += synapse0x29715f0();
   input += synapse0x2971630();
   input += synapse0x2971670();
   input += synapse0x29716b0();
   input += synapse0x29716f0();
   input += synapse0x2971730();
   input += synapse0x2971770();
   input += synapse0x29717b0();
   input += synapse0x29717f0();
   input += synapse0x2971830();
   input += synapse0x2971870();
   input += synapse0x29718b0();
   input += synapse0x2971a00();
   input += synapse0x2971340();
   input += synapse0x2971380();
   input += synapse0x2972b40();
   input += synapse0x2972b80();
   input += synapse0x2972bc0();
   input += synapse0x2972c00();
   input += synapse0x2972c40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29711b0() {
   double input = input0x29711b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2972c80() {
   double input = 0.0280823;
   input += synapse0x2972fc0();
   input += synapse0x2973000();
   input += synapse0x2973040();
   input += synapse0x2973080();
   input += synapse0x29730c0();
   input += synapse0x2973100();
   input += synapse0x2973140();
   input += synapse0x2973180();
   input += synapse0x29731c0();
   input += synapse0x2734480();
   input += synapse0x27344c0();
   input += synapse0x2734500();
   input += synapse0x2734540();
   input += synapse0x2734580();
   input += synapse0x27345c0();
   input += synapse0x2734600();
   input += synapse0x2972e10();
   input += synapse0x2972e50();
   input += synapse0x2734750();
   input += synapse0x2734790();
   input += synapse0x27347d0();
   input += synapse0x2734810();
   input += synapse0x2734850();
   input += synapse0x2973a10();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2972c80() {
   double input = input0x2972c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2973a50() {
   double input = 1.608;
   input += synapse0x2973d90();
   input += synapse0x2973dd0();
   input += synapse0x2973e10();
   input += synapse0x2973e50();
   input += synapse0x2973e90();
   input += synapse0x2973ed0();
   input += synapse0x2973f10();
   input += synapse0x2973f50();
   input += synapse0x2973f90();
   input += synapse0x2973fd0();
   input += synapse0x2974010();
   input += synapse0x2974050();
   input += synapse0x2974090();
   input += synapse0x29740d0();
   input += synapse0x2974110();
   input += synapse0x2974150();
   input += synapse0x2973be0();
   input += synapse0x2973c20();
   input += synapse0x29742a0();
   input += synapse0x29742e0();
   input += synapse0x2974320();
   input += synapse0x2974360();
   input += synapse0x29743a0();
   input += synapse0x29743e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2973a50() {
   double input = input0x2973a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2974420() {
   double input = -0.828739;
   input += synapse0x2974760();
   input += synapse0x29747a0();
   input += synapse0x29747e0();
   input += synapse0x2974820();
   input += synapse0x2974860();
   input += synapse0x29748a0();
   input += synapse0x29748e0();
   input += synapse0x2974920();
   input += synapse0x2974960();
   input += synapse0x29749a0();
   input += synapse0x29749e0();
   input += synapse0x2974a20();
   input += synapse0x2974a60();
   input += synapse0x2974aa0();
   input += synapse0x2974ae0();
   input += synapse0x2974b20();
   input += synapse0x29745b0();
   input += synapse0x29745f0();
   input += synapse0x2974c70();
   input += synapse0x2974cb0();
   input += synapse0x2974cf0();
   input += synapse0x2974d30();
   input += synapse0x2974d70();
   input += synapse0x2974db0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2974420() {
   double input = input0x2974420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2974df0() {
   double input = 8.2562;
   input += synapse0x296d7b0();
   input += synapse0x296d7f0();
   input += synapse0x296d830();
   input += synapse0x296d870();
   input += synapse0x2975340();
   input += synapse0x2975380();
   input += synapse0x29753c0();
   input += synapse0x2975400();
   input += synapse0x2975440();
   input += synapse0x2975480();
   input += synapse0x29754c0();
   input += synapse0x2975500();
   input += synapse0x2975540();
   input += synapse0x2975580();
   input += synapse0x29755c0();
   input += synapse0x2975600();
   input += synapse0x2974f80();
   input += synapse0x2974fc0();
   input += synapse0x2975750();
   input += synapse0x2975790();
   input += synapse0x29757d0();
   input += synapse0x2975810();
   input += synapse0x2975850();
   input += synapse0x2975890();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2974df0() {
   double input = input0x2974df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29758d0() {
   double input = 0.312979;
   input += synapse0x2975c10();
   input += synapse0x2975c50();
   input += synapse0x2975c90();
   input += synapse0x2975cd0();
   input += synapse0x2975d10();
   input += synapse0x2975d50();
   input += synapse0x2975d90();
   input += synapse0x2975dd0();
   input += synapse0x2975e10();
   input += synapse0x2975e50();
   input += synapse0x2975e90();
   input += synapse0x2975ed0();
   input += synapse0x2975f10();
   input += synapse0x2975f50();
   input += synapse0x2975f90();
   input += synapse0x2975fd0();
   input += synapse0x2975a60();
   input += synapse0x2975aa0();
   input += synapse0x2976120();
   input += synapse0x2976160();
   input += synapse0x29761a0();
   input += synapse0x29761e0();
   input += synapse0x2976220();
   input += synapse0x2976260();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29758d0() {
   double input = input0x29758d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29762a0() {
   double input = 4.31351;
   input += synapse0x29765e0();
   input += synapse0x2976620();
   input += synapse0x2976660();
   input += synapse0x29766a0();
   input += synapse0x29766e0();
   input += synapse0x2976720();
   input += synapse0x2976760();
   input += synapse0x29767a0();
   input += synapse0x29767e0();
   input += synapse0x2976820();
   input += synapse0x2976860();
   input += synapse0x29768a0();
   input += synapse0x29768e0();
   input += synapse0x2976920();
   input += synapse0x2976960();
   input += synapse0x29769a0();
   input += synapse0x2976430();
   input += synapse0x2976470();
   input += synapse0x2973200();
   input += synapse0x2973240();
   input += synapse0x2973280();
   input += synapse0x29732c0();
   input += synapse0x2973300();
   input += synapse0x2973340();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29762a0() {
   double input = input0x29762a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2973380() {
   double input = 0.809007;
   input += synapse0x29736c0();
   input += synapse0x2973700();
   input += synapse0x2973740();
   input += synapse0x2973780();
   input += synapse0x29737c0();
   input += synapse0x2973800();
   input += synapse0x2973840();
   input += synapse0x2973880();
   input += synapse0x29738c0();
   input += synapse0x2973900();
   input += synapse0x2973940();
   input += synapse0x2973980();
   input += synapse0x29739c0();
   input += synapse0x2977b00();
   input += synapse0x2977b40();
   input += synapse0x2977b80();
   input += synapse0x2973510();
   input += synapse0x2973550();
   input += synapse0x2977cd0();
   input += synapse0x2977d10();
   input += synapse0x2977d50();
   input += synapse0x2977d90();
   input += synapse0x2977dd0();
   input += synapse0x2977e10();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2973380() {
   double input = input0x2973380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2977e50() {
   double input = -1.16675;
   input += synapse0x2978190();
   input += synapse0x29781d0();
   input += synapse0x2978210();
   input += synapse0x2978250();
   input += synapse0x2978290();
   input += synapse0x29782d0();
   input += synapse0x2978310();
   input += synapse0x2978350();
   input += synapse0x2978390();
   input += synapse0x29783d0();
   input += synapse0x2978410();
   input += synapse0x2978450();
   input += synapse0x2978490();
   input += synapse0x29784d0();
   input += synapse0x2978510();
   input += synapse0x2978550();
   input += synapse0x2977fe0();
   input += synapse0x2978020();
   input += synapse0x29786a0();
   input += synapse0x29786e0();
   input += synapse0x2978720();
   input += synapse0x2978760();
   input += synapse0x29787a0();
   input += synapse0x29787e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2977e50() {
   double input = input0x2977e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2978820() {
   double input = -0.264542;
   input += synapse0x2978b60();
   input += synapse0x2978ba0();
   input += synapse0x2978be0();
   input += synapse0x2978c20();
   input += synapse0x2978c60();
   input += synapse0x2978ca0();
   input += synapse0x2978ce0();
   input += synapse0x2978d20();
   input += synapse0x2978d60();
   input += synapse0x2978da0();
   input += synapse0x2978de0();
   input += synapse0x2978e20();
   input += synapse0x2978e60();
   input += synapse0x2978ea0();
   input += synapse0x2978ee0();
   input += synapse0x2978f20();
   input += synapse0x29789b0();
   input += synapse0x29789f0();
   input += synapse0x2979070();
   input += synapse0x29790b0();
   input += synapse0x29790f0();
   input += synapse0x2979130();
   input += synapse0x2979170();
   input += synapse0x29791b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2978820() {
   double input = input0x2978820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29791f0() {
   double input = -0.156466;
   input += synapse0x2979530();
   input += synapse0x2979570();
   input += synapse0x29795b0();
   input += synapse0x29795f0();
   input += synapse0x2979630();
   input += synapse0x2979670();
   input += synapse0x29796b0();
   input += synapse0x29796f0();
   input += synapse0x2979730();
   input += synapse0x2979770();
   input += synapse0x29797b0();
   input += synapse0x29797f0();
   input += synapse0x2979830();
   input += synapse0x2979870();
   input += synapse0x29798b0();
   input += synapse0x29798f0();
   input += synapse0x2979380();
   input += synapse0x29793c0();
   input += synapse0x2979a40();
   input += synapse0x2979a80();
   input += synapse0x2979ac0();
   input += synapse0x2979b00();
   input += synapse0x2979b40();
   input += synapse0x2979b80();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29791f0() {
   double input = input0x29791f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2979bc0() {
   double input = 0.626923;
   input += synapse0x2979f00();
   input += synapse0x296a180();
   input += synapse0x296a1c0();
   input += synapse0x296a4c0();
   input += synapse0x296a500();
   input += synapse0x296a800();
   input += synapse0x296a840();
   input += synapse0x296ab40();
   input += synapse0x296ab80();
   input += synapse0x296ae80();
   input += synapse0x296aec0();
   input += synapse0x296b1c0();
   input += synapse0x296b200();
   input += synapse0x296b500();
   input += synapse0x296b540();
   input += synapse0x296b840();
   input += synapse0x296b880();
   input += synapse0x296bb80();
   input += synapse0x296bbc0();
   input += synapse0x296bec0();
   input += synapse0x296bf00();
   input += synapse0x296c200();
   input += synapse0x296c240();
   input += synapse0x296c540();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2979bc0() {
   double input = input0x2979bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297b9d0() {
   double input = -14.9348;
   input += synapse0x296c580();
   input += synapse0x296d240();
   input += synapse0x296d280();
   input += synapse0x2979d50();
   input += synapse0x2979d90();
   input += synapse0x296d580();
   input += synapse0x296d5c0();
   input += synapse0x296dae0();
   input += synapse0x296db20();
   input += synapse0x296de20();
   input += synapse0x296de60();
   input += synapse0x296e160();
   input += synapse0x296e1a0();
   input += synapse0x296e4a0();
   input += synapse0x296e4e0();
   input += synapse0x296e7e0();
   input += synapse0x296e820();
   input += synapse0x296eb20();
   input += synapse0x296eb60();
   input += synapse0x296ee60();
   input += synapse0x296eea0();
   input += synapse0x296c880();
   input += synapse0x296c8c0();
   input += synapse0x297bc70();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297b9d0() {
   double input = input0x297b9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297bcb0() {
   double input = -4.30986;
   input += synapse0x297bff0();
   input += synapse0x297c030();
   input += synapse0x297c070();
   input += synapse0x297c0b0();
   input += synapse0x297c0f0();
   input += synapse0x297c130();
   input += synapse0x297c170();
   input += synapse0x297c1b0();
   input += synapse0x297c1f0();
   input += synapse0x297c230();
   input += synapse0x297c270();
   input += synapse0x297c2b0();
   input += synapse0x297c2f0();
   input += synapse0x297c330();
   input += synapse0x297c370();
   input += synapse0x297c3b0();
   input += synapse0x297be40();
   input += synapse0x297be80();
   input += synapse0x297c500();
   input += synapse0x297c540();
   input += synapse0x297c580();
   input += synapse0x297c5c0();
   input += synapse0x297c600();
   input += synapse0x297c640();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297bcb0() {
   double input = input0x297bcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297c680() {
   double input = 0.562256;
   input += synapse0x297c9c0();
   input += synapse0x297ca00();
   input += synapse0x297ca40();
   input += synapse0x297ca80();
   input += synapse0x297cac0();
   input += synapse0x297cb00();
   input += synapse0x297cb40();
   input += synapse0x297cb80();
   input += synapse0x297cbc0();
   input += synapse0x297cc00();
   input += synapse0x297cc40();
   input += synapse0x297cc80();
   input += synapse0x297ccc0();
   input += synapse0x297cd00();
   input += synapse0x297cd40();
   input += synapse0x297cd80();
   input += synapse0x297c810();
   input += synapse0x297c850();
   input += synapse0x297ced0();
   input += synapse0x297cf10();
   input += synapse0x297cf50();
   input += synapse0x297cf90();
   input += synapse0x297cfd0();
   input += synapse0x297d010();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297c680() {
   double input = input0x297c680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297d050() {
   double input = -0.246256;
   input += synapse0x297d390();
   input += synapse0x297d3d0();
   input += synapse0x297d410();
   input += synapse0x297d450();
   input += synapse0x297d490();
   input += synapse0x297d4d0();
   input += synapse0x297d510();
   input += synapse0x297d550();
   input += synapse0x297d590();
   input += synapse0x297d5d0();
   input += synapse0x297d610();
   input += synapse0x297d650();
   input += synapse0x297d690();
   input += synapse0x297d6d0();
   input += synapse0x297d710();
   input += synapse0x297d750();
   input += synapse0x297d1e0();
   input += synapse0x297d220();
   input += synapse0x297d8a0();
   input += synapse0x297d8e0();
   input += synapse0x297d920();
   input += synapse0x297d960();
   input += synapse0x297d9a0();
   input += synapse0x297d9e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297d050() {
   double input = input0x297d050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297da20() {
   double input = 0.278039;
   input += synapse0x297dd60();
   input += synapse0x297dda0();
   input += synapse0x297dde0();
   input += synapse0x297de20();
   input += synapse0x297de60();
   input += synapse0x297dea0();
   input += synapse0x297dee0();
   input += synapse0x297df20();
   input += synapse0x297df60();
   input += synapse0x297dfa0();
   input += synapse0x297dfe0();
   input += synapse0x297e020();
   input += synapse0x297e060();
   input += synapse0x297e0a0();
   input += synapse0x297e0e0();
   input += synapse0x297e120();
   input += synapse0x297dbb0();
   input += synapse0x297dbf0();
   input += synapse0x297e270();
   input += synapse0x297e2b0();
   input += synapse0x297e2f0();
   input += synapse0x297e330();
   input += synapse0x297e370();
   input += synapse0x297e3b0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297da20() {
   double input = input0x297da20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297e3f0() {
   double input = -0.668085;
   input += synapse0x297e730();
   input += synapse0x297e770();
   input += synapse0x297e7b0();
   input += synapse0x297e7f0();
   input += synapse0x297e830();
   input += synapse0x297e870();
   input += synapse0x297e8b0();
   input += synapse0x297e8f0();
   input += synapse0x297e930();
   input += synapse0x2976af0();
   input += synapse0x2976b30();
   input += synapse0x2976b70();
   input += synapse0x2976bb0();
   input += synapse0x2976bf0();
   input += synapse0x2976c30();
   input += synapse0x2976c70();
   input += synapse0x297e580();
   input += synapse0x297e5c0();
   input += synapse0x2976dc0();
   input += synapse0x2976e00();
   input += synapse0x2976e40();
   input += synapse0x2976e80();
   input += synapse0x2976ec0();
   input += synapse0x2976f00();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297e3f0() {
   double input = input0x297e3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2976f40() {
   double input = -2.32301;
   input += synapse0x2977280();
   input += synapse0x29772c0();
   input += synapse0x2977300();
   input += synapse0x2977340();
   input += synapse0x2977380();
   input += synapse0x29773c0();
   input += synapse0x2977400();
   input += synapse0x2977440();
   input += synapse0x2977480();
   input += synapse0x29774c0();
   input += synapse0x2977500();
   input += synapse0x2977540();
   input += synapse0x2977580();
   input += synapse0x29775c0();
   input += synapse0x2977600();
   input += synapse0x2977640();
   input += synapse0x29770d0();
   input += synapse0x2977110();
   input += synapse0x2977790();
   input += synapse0x29777d0();
   input += synapse0x2977810();
   input += synapse0x2977850();
   input += synapse0x2977890();
   input += synapse0x29778d0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2976f40() {
   double input = input0x2976f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2977910() {
   double input = -1.39252;
   input += synapse0x2977aa0();
   input += synapse0x2980b30();
   input += synapse0x2980b70();
   input += synapse0x2980bb0();
   input += synapse0x2980bf0();
   input += synapse0x2980c30();
   input += synapse0x2980c70();
   input += synapse0x2980cb0();
   input += synapse0x2980cf0();
   input += synapse0x2980d30();
   input += synapse0x2980d70();
   input += synapse0x2980db0();
   input += synapse0x2980df0();
   input += synapse0x2980e30();
   input += synapse0x2980e70();
   input += synapse0x2980eb0();
   input += synapse0x2980980();
   input += synapse0x29809c0();
   input += synapse0x2981000();
   input += synapse0x2981040();
   input += synapse0x2981080();
   input += synapse0x29810c0();
   input += synapse0x2981100();
   input += synapse0x2981140();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2977910() {
   double input = input0x2977910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2981180() {
   double input = 8.93264;
   input += synapse0x29814c0();
   input += synapse0x2981500();
   input += synapse0x2981540();
   input += synapse0x2981580();
   input += synapse0x29815c0();
   input += synapse0x2981600();
   input += synapse0x2981640();
   input += synapse0x2981680();
   input += synapse0x29816c0();
   input += synapse0x2981700();
   input += synapse0x2981740();
   input += synapse0x2981780();
   input += synapse0x29817c0();
   input += synapse0x2981800();
   input += synapse0x2981840();
   input += synapse0x2981880();
   input += synapse0x2981310();
   input += synapse0x2981350();
   input += synapse0x29819d0();
   input += synapse0x2981a10();
   input += synapse0x2981a50();
   input += synapse0x2981a90();
   input += synapse0x2981ad0();
   input += synapse0x2981b10();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2981180() {
   double input = input0x2981180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2981b50() {
   double input = 1.78679;
   input += synapse0x2981e90();
   input += synapse0x2981ed0();
   input += synapse0x2981f10();
   input += synapse0x2981f50();
   input += synapse0x2981f90();
   input += synapse0x2981fd0();
   input += synapse0x2982010();
   input += synapse0x2982050();
   input += synapse0x2982090();
   input += synapse0x29820d0();
   input += synapse0x2982110();
   input += synapse0x2982150();
   input += synapse0x2982190();
   input += synapse0x29821d0();
   input += synapse0x2982210();
   input += synapse0x2982250();
   input += synapse0x2981ce0();
   input += synapse0x2981d20();
   input += synapse0x29823a0();
   input += synapse0x29823e0();
   input += synapse0x2982420();
   input += synapse0x2982460();
   input += synapse0x29824a0();
   input += synapse0x29824e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2981b50() {
   double input = input0x2981b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2982520() {
   double input = -0.255562;
   input += synapse0x2982860();
   input += synapse0x29828a0();
   input += synapse0x29828e0();
   input += synapse0x2982920();
   input += synapse0x2982960();
   input += synapse0x29829a0();
   input += synapse0x29829e0();
   input += synapse0x2982a20();
   input += synapse0x2982a60();
   input += synapse0x2982aa0();
   input += synapse0x2982ae0();
   input += synapse0x2982b20();
   input += synapse0x2982b60();
   input += synapse0x2982ba0();
   input += synapse0x2982be0();
   input += synapse0x2982c20();
   input += synapse0x29826b0();
   input += synapse0x29826f0();
   input += synapse0x2982d70();
   input += synapse0x2982db0();
   input += synapse0x2982df0();
   input += synapse0x2982e30();
   input += synapse0x2982e70();
   input += synapse0x2982eb0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2982520() {
   double input = input0x2982520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2982ef0() {
   double input = -0.0545788;
   input += synapse0x2983230();
   input += synapse0x2983270();
   input += synapse0x29832b0();
   input += synapse0x29832f0();
   input += synapse0x2983330();
   input += synapse0x2983370();
   input += synapse0x29833b0();
   input += synapse0x29833f0();
   input += synapse0x2983430();
   input += synapse0x2983470();
   input += synapse0x29834b0();
   input += synapse0x29834f0();
   input += synapse0x2983530();
   input += synapse0x2983570();
   input += synapse0x29835b0();
   input += synapse0x29835f0();
   input += synapse0x2983080();
   input += synapse0x29830c0();
   input += synapse0x2983740();
   input += synapse0x2983780();
   input += synapse0x29837c0();
   input += synapse0x2983800();
   input += synapse0x2983840();
   input += synapse0x2983880();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2982ef0() {
   double input = input0x2982ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29838c0() {
   double input = 1.23403;
   input += synapse0x2983c00();
   input += synapse0x2983c40();
   input += synapse0x2983c80();
   input += synapse0x2983cc0();
   input += synapse0x2983d00();
   input += synapse0x2983d40();
   input += synapse0x2983d80();
   input += synapse0x2983dc0();
   input += synapse0x2983e00();
   input += synapse0x2983e40();
   input += synapse0x2983e80();
   input += synapse0x2983ec0();
   input += synapse0x2983f00();
   input += synapse0x2983f40();
   input += synapse0x2983f80();
   input += synapse0x2983fc0();
   input += synapse0x2983a50();
   input += synapse0x2983a90();
   input += synapse0x2984110();
   input += synapse0x2984150();
   input += synapse0x2984190();
   input += synapse0x29841d0();
   input += synapse0x2984210();
   input += synapse0x2984250();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29838c0() {
   double input = input0x29838c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2984290() {
   double input = -0.690669;
   input += synapse0x29845d0();
   input += synapse0x2984610();
   input += synapse0x2984650();
   input += synapse0x2984690();
   input += synapse0x29846d0();
   input += synapse0x2984710();
   input += synapse0x2984750();
   input += synapse0x2984790();
   input += synapse0x29847d0();
   input += synapse0x2984810();
   input += synapse0x2984850();
   input += synapse0x2984890();
   input += synapse0x29848d0();
   input += synapse0x2984910();
   input += synapse0x2984950();
   input += synapse0x2984990();
   input += synapse0x2984420();
   input += synapse0x2984460();
   input += synapse0x2984ae0();
   input += synapse0x2984b20();
   input += synapse0x2984b60();
   input += synapse0x2984ba0();
   input += synapse0x2984be0();
   input += synapse0x2984c20();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2984290() {
   double input = input0x2984290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2984c60() {
   double input = 7.31484;
   input += synapse0x2984fa0();
   input += synapse0x2984fe0();
   input += synapse0x2985020();
   input += synapse0x2985060();
   input += synapse0x29850a0();
   input += synapse0x29850e0();
   input += synapse0x2985120();
   input += synapse0x2985160();
   input += synapse0x29851a0();
   input += synapse0x29851e0();
   input += synapse0x2985220();
   input += synapse0x2985260();
   input += synapse0x29852a0();
   input += synapse0x29852e0();
   input += synapse0x2985320();
   input += synapse0x2985360();
   input += synapse0x2984df0();
   input += synapse0x2984e30();
   input += synapse0x29854b0();
   input += synapse0x29854f0();
   input += synapse0x2985530();
   input += synapse0x2985570();
   input += synapse0x29855b0();
   input += synapse0x29855f0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2984c60() {
   double input = input0x2984c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2985630() {
   double input = -3.4337;
   input += synapse0x2985970();
   input += synapse0x2979f40();
   input += synapse0x2979f80();
   input += synapse0x2979fc0();
   input += synapse0x297a210();
   input += synapse0x297a250();
   input += synapse0x297a290();
   input += synapse0x297a4e0();
   input += synapse0x297a520();
   input += synapse0x297a770();
   input += synapse0x297a7b0();
   input += synapse0x297a7f0();
   input += synapse0x297aa40();
   input += synapse0x297aa80();
   input += synapse0x297acd0();
   input += synapse0x297ad10();
   input += synapse0x29857c0();
   input += synapse0x2985800();
   input += synapse0x297ae60();
   input += synapse0x297b370();
   input += synapse0x297b3b0();
   input += synapse0x297b3f0();
   input += synapse0x297b640();
   input += synapse0x297b680();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2985630() {
   double input = input0x2985630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297b6c0() {
   double input = 1.40862;
   input += synapse0x297af30();
   input += synapse0x297af70();
   input += synapse0x297afb0();
   input += synapse0x297aff0();
   input += synapse0x297b970();
   input += synapse0x2987cc0();
   input += synapse0x2987d00();
   input += synapse0x2987d40();
   input += synapse0x2987d80();
   input += synapse0x2987dc0();
   input += synapse0x2987e00();
   input += synapse0x2987e40();
   input += synapse0x2987e80();
   input += synapse0x2987ec0();
   input += synapse0x2987f00();
   input += synapse0x2987f40();
   input += synapse0x297b850();
   input += synapse0x297b890();
   input += synapse0x2988090();
   input += synapse0x29880d0();
   input += synapse0x2988110();
   input += synapse0x2988150();
   input += synapse0x2988190();
   input += synapse0x29881d0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297b6c0() {
   double input = input0x297b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2988210() {
   double input = -10.0442;
   input += synapse0x2988550();
   input += synapse0x2988590();
   input += synapse0x29885d0();
   input += synapse0x2988610();
   input += synapse0x2988650();
   input += synapse0x2988690();
   input += synapse0x29886d0();
   input += synapse0x2988710();
   input += synapse0x2988750();
   input += synapse0x2988790();
   input += synapse0x29887d0();
   input += synapse0x2988810();
   input += synapse0x2988850();
   input += synapse0x2988890();
   input += synapse0x29888d0();
   input += synapse0x2988910();
   input += synapse0x29883a0();
   input += synapse0x29883e0();
   input += synapse0x2988a60();
   input += synapse0x2988aa0();
   input += synapse0x2988ae0();
   input += synapse0x2988b20();
   input += synapse0x2988b60();
   input += synapse0x2988ba0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2988210() {
   double input = input0x2988210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2988be0() {
   double input = -1.82684;
   input += synapse0x2988f20();
   input += synapse0x2988f60();
   input += synapse0x2988fa0();
   input += synapse0x2988fe0();
   input += synapse0x2989020();
   input += synapse0x2989060();
   input += synapse0x29890a0();
   input += synapse0x29890e0();
   input += synapse0x2989120();
   input += synapse0x2989160();
   input += synapse0x29891a0();
   input += synapse0x29891e0();
   input += synapse0x2989220();
   input += synapse0x2989260();
   input += synapse0x29892a0();
   input += synapse0x29892e0();
   input += synapse0x2988d70();
   input += synapse0x2988db0();
   input += synapse0x2989430();
   input += synapse0x2989470();
   input += synapse0x29894b0();
   input += synapse0x29894f0();
   input += synapse0x2989530();
   input += synapse0x2989570();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2988be0() {
   double input = input0x2988be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29895b0() {
   double input = -2.53692;
   input += synapse0x29898f0();
   input += synapse0x2989930();
   input += synapse0x2989970();
   input += synapse0x29899b0();
   input += synapse0x29899f0();
   input += synapse0x2989a30();
   input += synapse0x2989a70();
   input += synapse0x2989ab0();
   input += synapse0x2989af0();
   input += synapse0x2989b30();
   input += synapse0x2989b70();
   input += synapse0x2989bb0();
   input += synapse0x2989bf0();
   input += synapse0x2989c30();
   input += synapse0x2989c70();
   input += synapse0x2989cb0();
   input += synapse0x2989740();
   input += synapse0x2989780();
   input += synapse0x2989e00();
   input += synapse0x2989e40();
   input += synapse0x2989e80();
   input += synapse0x2989ec0();
   input += synapse0x2989f00();
   input += synapse0x2989f40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29895b0() {
   double input = input0x29895b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2989f80() {
   double input = -3.11344;
   input += synapse0x298a2c0();
   input += synapse0x298a300();
   input += synapse0x298a340();
   input += synapse0x298a380();
   input += synapse0x298a3c0();
   input += synapse0x298a400();
   input += synapse0x298a440();
   input += synapse0x298a480();
   input += synapse0x298a4c0();
   input += synapse0x298a500();
   input += synapse0x298a540();
   input += synapse0x298a580();
   input += synapse0x298a5c0();
   input += synapse0x298a600();
   input += synapse0x298a640();
   input += synapse0x298a680();
   input += synapse0x298a110();
   input += synapse0x298a150();
   input += synapse0x298a7d0();
   input += synapse0x298a810();
   input += synapse0x298a850();
   input += synapse0x298a890();
   input += synapse0x298a8d0();
   input += synapse0x298a910();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2989f80() {
   double input = input0x2989f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x298a950() {
   double input = -0.0206321;
   input += synapse0x298ac90();
   input += synapse0x298acd0();
   input += synapse0x298ad10();
   input += synapse0x298ad50();
   input += synapse0x298ad90();
   input += synapse0x298add0();
   input += synapse0x298ae10();
   input += synapse0x298ae50();
   input += synapse0x298ae90();
   input += synapse0x298aed0();
   input += synapse0x298af10();
   input += synapse0x298af50();
   input += synapse0x298af90();
   input += synapse0x298afd0();
   input += synapse0x298b010();
   input += synapse0x298b050();
   input += synapse0x298aae0();
   input += synapse0x298ab20();
   input += synapse0x298b1a0();
   input += synapse0x298b1e0();
   input += synapse0x298b220();
   input += synapse0x298b260();
   input += synapse0x298b2a0();
   input += synapse0x298b2e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x298a950() {
   double input = input0x298a950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x298b320() {
   double input = 5.79649;
   input += synapse0x298b660();
   input += synapse0x298b6a0();
   input += synapse0x298b6e0();
   input += synapse0x298b720();
   input += synapse0x298b760();
   input += synapse0x298b7a0();
   input += synapse0x298b7e0();
   input += synapse0x298b820();
   input += synapse0x298b860();
   input += synapse0x298b8a0();
   input += synapse0x298b8e0();
   input += synapse0x298b920();
   input += synapse0x298b960();
   input += synapse0x298b9a0();
   input += synapse0x298b9e0();
   input += synapse0x298ba20();
   input += synapse0x298b4b0();
   input += synapse0x298b4f0();
   input += synapse0x298bb70();
   input += synapse0x298bbb0();
   input += synapse0x298bbf0();
   input += synapse0x298bc30();
   input += synapse0x298bc70();
   input += synapse0x298bcb0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x298b320() {
   double input = input0x298b320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x298bcf0() {
   double input = 5.96839;
   input += synapse0x298c030();
   input += synapse0x298c070();
   input += synapse0x298c0b0();
   input += synapse0x298c0f0();
   input += synapse0x298c130();
   input += synapse0x298c170();
   input += synapse0x298c1b0();
   input += synapse0x298c1f0();
   input += synapse0x298c230();
   input += synapse0x298c270();
   input += synapse0x298c2b0();
   input += synapse0x298c2f0();
   input += synapse0x298c330();
   input += synapse0x298c370();
   input += synapse0x298c3b0();
   input += synapse0x298c3f0();
   input += synapse0x298be80();
   input += synapse0x298bec0();
   input += synapse0x298c540();
   input += synapse0x298c580();
   input += synapse0x298c5c0();
   input += synapse0x298c600();
   input += synapse0x298c640();
   input += synapse0x298c680();
   return input;
}

double NNfunction_ss_cLcL::neuron0x298bcf0() {
   double input = input0x298bcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x298c6c0() {
   double input = -1.14511;
   input += synapse0x2975130();
   input += synapse0x2975170();
   input += synapse0x29751b0();
   input += synapse0x29751f0();
   input += synapse0x2975230();
   input += synapse0x2975270();
   input += synapse0x29752b0();
   input += synapse0x29752f0();
   input += synapse0x298ce10();
   input += synapse0x298ce50();
   input += synapse0x298ce90();
   input += synapse0x298ced0();
   input += synapse0x298cf10();
   input += synapse0x298cf50();
   input += synapse0x298cf90();
   input += synapse0x298cfd0();
   input += synapse0x298c850();
   input += synapse0x298c890();
   input += synapse0x298d120();
   input += synapse0x298d160();
   input += synapse0x298d1a0();
   input += synapse0x298d1e0();
   input += synapse0x298d220();
   input += synapse0x298d260();
   return input;
}

double NNfunction_ss_cLcL::neuron0x298c6c0() {
   double input = input0x298c6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x298d2a0() {
   double input = -0.740968;
   input += synapse0x298d5e0();
   input += synapse0x298d620();
   input += synapse0x298d660();
   input += synapse0x298d6a0();
   input += synapse0x298d6e0();
   input += synapse0x298d720();
   input += synapse0x298d760();
   input += synapse0x298d7a0();
   input += synapse0x298d7e0();
   input += synapse0x298d820();
   input += synapse0x298d860();
   input += synapse0x298d8a0();
   input += synapse0x298d8e0();
   input += synapse0x298d920();
   input += synapse0x298d960();
   input += synapse0x298d9a0();
   input += synapse0x298d430();
   input += synapse0x298d470();
   input += synapse0x298daf0();
   input += synapse0x298db30();
   input += synapse0x298db70();
   input += synapse0x298dbb0();
   input += synapse0x298dbf0();
   input += synapse0x298dc30();
   return input;
}

double NNfunction_ss_cLcL::neuron0x298d2a0() {
   double input = input0x298d2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x298dc70() {
   double input = 6.03482;
   input += synapse0x298dfb0();
   input += synapse0x298dff0();
   input += synapse0x298e030();
   input += synapse0x298e070();
   input += synapse0x298e0b0();
   input += synapse0x298e0f0();
   input += synapse0x298e130();
   input += synapse0x298e170();
   input += synapse0x298e1b0();
   input += synapse0x298e1f0();
   input += synapse0x298e230();
   input += synapse0x298e270();
   input += synapse0x298e2b0();
   input += synapse0x298e2f0();
   input += synapse0x298e330();
   input += synapse0x298e370();
   input += synapse0x298de00();
   input += synapse0x298de40();
   input += synapse0x297e970();
   input += synapse0x297e9b0();
   input += synapse0x297e9f0();
   input += synapse0x297ea30();
   input += synapse0x297ea70();
   input += synapse0x297eab0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x298dc70() {
   double input = input0x298dc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297eaf0() {
   double input = 6.38583;
   input += synapse0x297ee30();
   input += synapse0x297ee70();
   input += synapse0x297eeb0();
   input += synapse0x297eef0();
   input += synapse0x297ef30();
   input += synapse0x297ef70();
   input += synapse0x297efb0();
   input += synapse0x297eff0();
   input += synapse0x297f030();
   input += synapse0x297f070();
   input += synapse0x297f0b0();
   input += synapse0x297f0f0();
   input += synapse0x297f130();
   input += synapse0x297f170();
   input += synapse0x297f1b0();
   input += synapse0x297f1f0();
   input += synapse0x297ec80();
   input += synapse0x297ecc0();
   input += synapse0x297f340();
   input += synapse0x297f380();
   input += synapse0x297f3c0();
   input += synapse0x297f400();
   input += synapse0x297f440();
   input += synapse0x297f480();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297eaf0() {
   double input = input0x297eaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297f4c0() {
   double input = -2.03601;
   input += synapse0x297f800();
   input += synapse0x297f840();
   input += synapse0x297f880();
   input += synapse0x297f8c0();
   input += synapse0x297f900();
   input += synapse0x297f940();
   input += synapse0x297f980();
   input += synapse0x297f9c0();
   input += synapse0x297fa00();
   input += synapse0x297fa40();
   input += synapse0x297fa80();
   input += synapse0x297fac0();
   input += synapse0x297fb00();
   input += synapse0x297fb40();
   input += synapse0x297fb80();
   input += synapse0x297fbc0();
   input += synapse0x297f650();
   input += synapse0x297f690();
   input += synapse0x297fd10();
   input += synapse0x297fd50();
   input += synapse0x297fd90();
   input += synapse0x297fdd0();
   input += synapse0x297fe10();
   input += synapse0x297fe50();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297f4c0() {
   double input = input0x297f4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x297fe90() {
   double input = 1.24776;
   input += synapse0x29801d0();
   input += synapse0x2980210();
   input += synapse0x2980250();
   input += synapse0x2980290();
   input += synapse0x29802d0();
   input += synapse0x2980310();
   input += synapse0x2980350();
   input += synapse0x2980390();
   input += synapse0x29803d0();
   input += synapse0x2980410();
   input += synapse0x2980450();
   input += synapse0x2980490();
   input += synapse0x29804d0();
   input += synapse0x2980510();
   input += synapse0x2980550();
   input += synapse0x2980590();
   input += synapse0x2980020();
   input += synapse0x2980060();
   input += synapse0x29806e0();
   input += synapse0x2980720();
   input += synapse0x2980760();
   input += synapse0x29807a0();
   input += synapse0x29807e0();
   input += synapse0x2980820();
   return input;
}

double NNfunction_ss_cLcL::neuron0x297fe90() {
   double input = input0x297fe90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x29924d0() {
   double input = 2.47719;
   input += synapse0x29926f0();
   input += synapse0x2992730();
   input += synapse0x2992770();
   input += synapse0x29927b0();
   input += synapse0x29927f0();
   input += synapse0x2992830();
   input += synapse0x2992870();
   input += synapse0x29928b0();
   input += synapse0x29928f0();
   input += synapse0x2992930();
   input += synapse0x2992970();
   input += synapse0x29929b0();
   input += synapse0x29929f0();
   input += synapse0x2992a30();
   input += synapse0x2992a70();
   input += synapse0x2992ab0();
   input += synapse0x2980860();
   input += synapse0x29808a0();
   input += synapse0x2992c00();
   input += synapse0x2992c40();
   input += synapse0x2992c80();
   input += synapse0x2992cc0();
   input += synapse0x2992d00();
   input += synapse0x2992d40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x29924d0() {
   double input = input0x29924d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2992d80() {
   double input = -2.98537;
   input += synapse0x29930c0();
   input += synapse0x2993100();
   input += synapse0x2993140();
   input += synapse0x2993180();
   input += synapse0x29931c0();
   input += synapse0x2993200();
   input += synapse0x2993240();
   input += synapse0x2993280();
   input += synapse0x29932c0();
   input += synapse0x2993300();
   input += synapse0x2993340();
   input += synapse0x2993380();
   input += synapse0x29933c0();
   input += synapse0x2993400();
   input += synapse0x2993440();
   input += synapse0x2993480();
   input += synapse0x2992f10();
   input += synapse0x2992f50();
   input += synapse0x29935d0();
   input += synapse0x2993610();
   input += synapse0x2993650();
   input += synapse0x2993690();
   input += synapse0x29936d0();
   input += synapse0x2993710();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2992d80() {
   double input = input0x2992d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2993750() {
   double input = 4.33669;
   input += synapse0x2993a90();
   input += synapse0x2993ad0();
   input += synapse0x2993b10();
   input += synapse0x2993b50();
   input += synapse0x2993b90();
   input += synapse0x2993bd0();
   input += synapse0x2993c10();
   input += synapse0x2993c50();
   input += synapse0x2993c90();
   input += synapse0x2993cd0();
   input += synapse0x2993d10();
   input += synapse0x2993d50();
   input += synapse0x2993d90();
   input += synapse0x2993dd0();
   input += synapse0x2993e10();
   input += synapse0x2993e50();
   input += synapse0x29938e0();
   input += synapse0x2993920();
   input += synapse0x2993fa0();
   input += synapse0x2993fe0();
   input += synapse0x2994020();
   input += synapse0x2994060();
   input += synapse0x29940a0();
   input += synapse0x29940e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2993750() {
   double input = input0x2993750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x2994120() {
   double input = 0.617722;
   input += synapse0x2994460();
   input += synapse0x29944a0();
   input += synapse0x29944e0();
   input += synapse0x2994520();
   input += synapse0x2994560();
   input += synapse0x29945a0();
   input += synapse0x29945e0();
   input += synapse0x2994620();
   input += synapse0x2994660();
   input += synapse0x29946a0();
   input += synapse0x29946e0();
   input += synapse0x2994720();
   input += synapse0x2994760();
   input += synapse0x29947a0();
   input += synapse0x29947e0();
   input += synapse0x2994820();
   input += synapse0x29942b0();
   input += synapse0x29942f0();
   input += synapse0x2994970();
   input += synapse0x29949b0();
   input += synapse0x29949f0();
   input += synapse0x2994a30();
   input += synapse0x2994a70();
   input += synapse0x2994ab0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x2994120() {
   double input = input0x2994120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x299b320() {
   double input = -0.822486;
   input += synapse0x2734920();
   input += synapse0x2734960();
   input += synapse0x2971460();
   input += synapse0x29714a0();
   input += synapse0x2972f30();
   input += synapse0x2972f70();
   input += synapse0x2973d00();
   input += synapse0x2973d40();
   input += synapse0x29746d0();
   input += synapse0x2974710();
   input += synapse0x29750a0();
   input += synapse0x29750e0();
   input += synapse0x2975b80();
   input += synapse0x2975bc0();
   input += synapse0x2976550();
   input += synapse0x2976590();
   input += synapse0x2973630();
   input += synapse0x2973670();
   input += synapse0x2978100();
   input += synapse0x2978140();
   input += synapse0x2978ad0();
   input += synapse0x2978b10();
   input += synapse0x29794a0();
   input += synapse0x29794e0();
   input += synapse0x2979e70();
   input += synapse0x2979eb0();
   input += synapse0x296cf00();
   input += synapse0x296cf40();
   input += synapse0x297bf60();
   input += synapse0x297bfa0();
   input += synapse0x297c930();
   input += synapse0x297c970();
   input += synapse0x297d300();
   input += synapse0x297d340();
   input += synapse0x297dcd0();
   input += synapse0x297dd10();
   input += synapse0x297e6a0();
   input += synapse0x297e6e0();
   input += synapse0x29771f0();
   input += synapse0x2977230();
   input += synapse0x2980aa0();
   input += synapse0x2980ae0();
   input += synapse0x2981430();
   input += synapse0x2981470();
   input += synapse0x2981e00();
   input += synapse0x2981e40();
   input += synapse0x29827d0();
   input += synapse0x2982810();
   input += synapse0x29831a0();
   input += synapse0x29831e0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x299b320() {
   double input = input0x299b320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x299b6c0() {
   double input = 0.466877;
   input += synapse0x29858e0();
   input += synapse0x2985920();
   input += synapse0x297aea0();
   input += synapse0x297aee0();
   input += synapse0x29884c0();
   input += synapse0x2988500();
   input += synapse0x2988e90();
   input += synapse0x2988ed0();
   input += synapse0x2989860();
   input += synapse0x29898a0();
   input += synapse0x298a230();
   input += synapse0x298a270();
   input += synapse0x298ac00();
   input += synapse0x298ac40();
   input += synapse0x298b5d0();
   input += synapse0x298b610();
   input += synapse0x298bfa0();
   input += synapse0x298bfe0();
   input += synapse0x298c970();
   input += synapse0x298c9b0();
   input += synapse0x298d550();
   input += synapse0x298d590();
   input += synapse0x298df20();
   input += synapse0x298df60();
   input += synapse0x297eda0();
   input += synapse0x297ede0();
   input += synapse0x297f770();
   input += synapse0x297f7b0();
   input += synapse0x2980140();
   input += synapse0x2980180();
   input += synapse0x2992660();
   input += synapse0x29926a0();
   input += synapse0x2993030();
   input += synapse0x2993070();
   input += synapse0x2993a00();
   input += synapse0x2993a40();
   input += synapse0x29943d0();
   input += synapse0x2994410();
   input += synapse0x296f360();
   input += synapse0x296f3a0();
   input += synapse0x2983b70();
   input += synapse0x2983bb0();
   input += synapse0x2994af0();
   input += synapse0x2994b30();
   input += synapse0x2994b70();
   input += synapse0x2994bb0();
   input += synapse0x299ba60();
   input += synapse0x299baa0();
   input += synapse0x299bae0();
   input += synapse0x299bb20();
   return input;
}

double NNfunction_ss_cLcL::neuron0x299b6c0() {
   double input = input0x299b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x299bb60() {
   double input = -0.501669;
   input += synapse0x299bea0();
   input += synapse0x299bee0();
   input += synapse0x299bf20();
   input += synapse0x299bf60();
   input += synapse0x299bfa0();
   input += synapse0x299bfe0();
   input += synapse0x299c020();
   input += synapse0x299c060();
   input += synapse0x299c0a0();
   input += synapse0x299c0e0();
   input += synapse0x299c120();
   input += synapse0x299c160();
   input += synapse0x299c1a0();
   input += synapse0x299c1e0();
   input += synapse0x299c220();
   input += synapse0x299c260();
   input += synapse0x299bcf0();
   input += synapse0x299bd30();
   input += synapse0x299c3b0();
   input += synapse0x299c3f0();
   input += synapse0x299c430();
   input += synapse0x299c470();
   input += synapse0x299c4b0();
   input += synapse0x299c4f0();
   input += synapse0x299c530();
   input += synapse0x299c570();
   input += synapse0x299c5b0();
   input += synapse0x299c5f0();
   input += synapse0x299c630();
   input += synapse0x299c670();
   input += synapse0x299c6b0();
   input += synapse0x299c6f0();
   input += synapse0x299c2a0();
   input += synapse0x299c2e0();
   input += synapse0x299c320();
   input += synapse0x299c360();
   input += synapse0x299c940();
   input += synapse0x299c980();
   input += synapse0x299c9c0();
   input += synapse0x299ca00();
   input += synapse0x299ca40();
   input += synapse0x299ca80();
   input += synapse0x299cac0();
   input += synapse0x299cb00();
   input += synapse0x299cb40();
   input += synapse0x299cb80();
   input += synapse0x299cbc0();
   input += synapse0x299cc00();
   input += synapse0x299cc40();
   input += synapse0x299cc80();
   return input;
}

double NNfunction_ss_cLcL::neuron0x299bb60() {
   double input = input0x299bb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x299ccc0() {
   double input = -2.08639;
   input += synapse0x299d000();
   input += synapse0x299d040();
   input += synapse0x299d080();
   input += synapse0x299d0c0();
   input += synapse0x299d100();
   input += synapse0x299d140();
   input += synapse0x299d180();
   input += synapse0x299d1c0();
   input += synapse0x299d200();
   input += synapse0x299d240();
   input += synapse0x299d280();
   input += synapse0x299d2c0();
   input += synapse0x299d300();
   input += synapse0x299d340();
   input += synapse0x299d380();
   input += synapse0x299d3c0();
   input += synapse0x299ce50();
   input += synapse0x299ce90();
   input += synapse0x299d510();
   input += synapse0x299d550();
   input += synapse0x299d590();
   input += synapse0x299d5d0();
   input += synapse0x299d610();
   input += synapse0x299d650();
   input += synapse0x299d690();
   input += synapse0x299d6d0();
   input += synapse0x299d710();
   input += synapse0x299d750();
   input += synapse0x299d790();
   input += synapse0x299d7d0();
   input += synapse0x299d810();
   input += synapse0x299d850();
   input += synapse0x299d400();
   input += synapse0x299d440();
   input += synapse0x299d480();
   input += synapse0x299d4c0();
   input += synapse0x299daa0();
   input += synapse0x299dae0();
   input += synapse0x299db20();
   input += synapse0x299db60();
   input += synapse0x299dba0();
   input += synapse0x299dbe0();
   input += synapse0x299dc20();
   input += synapse0x299dc60();
   input += synapse0x299dca0();
   input += synapse0x299dce0();
   input += synapse0x299dd20();
   input += synapse0x299dd60();
   input += synapse0x299dda0();
   input += synapse0x299dde0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x299ccc0() {
   double input = input0x299ccc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x299de20() {
   double input = 0.303149;
   input += synapse0x299e160();
   input += synapse0x299e1a0();
   input += synapse0x299e1e0();
   input += synapse0x299e220();
   input += synapse0x299e260();
   input += synapse0x299e2a0();
   input += synapse0x299e2e0();
   input += synapse0x299e320();
   input += synapse0x299e360();
   input += synapse0x299e3a0();
   input += synapse0x299e3e0();
   input += synapse0x299e420();
   input += synapse0x299e460();
   input += synapse0x299e4a0();
   input += synapse0x299e4e0();
   input += synapse0x299e520();
   input += synapse0x299dfb0();
   input += synapse0x299dff0();
   input += synapse0x299e670();
   input += synapse0x299e6b0();
   input += synapse0x299e6f0();
   input += synapse0x299e730();
   input += synapse0x299e770();
   input += synapse0x299e7b0();
   input += synapse0x299e7f0();
   input += synapse0x299e830();
   input += synapse0x299e870();
   input += synapse0x299e8b0();
   input += synapse0x299e8f0();
   input += synapse0x299e930();
   input += synapse0x299e970();
   input += synapse0x299e9b0();
   input += synapse0x299e560();
   input += synapse0x299e5a0();
   input += synapse0x299e5e0();
   input += synapse0x299e620();
   input += synapse0x299ec00();
   input += synapse0x299ec40();
   input += synapse0x299ec80();
   input += synapse0x299ecc0();
   input += synapse0x299ed00();
   input += synapse0x299ed40();
   input += synapse0x299ed80();
   input += synapse0x299edc0();
   input += synapse0x299ee00();
   input += synapse0x299ee40();
   input += synapse0x299ee80();
   input += synapse0x299eec0();
   input += synapse0x299ef00();
   input += synapse0x299ef40();
   return input;
}

double NNfunction_ss_cLcL::neuron0x299de20() {
   double input = input0x299de20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcL::input0x299ef80() {
   double input = 11.682;
   input += synapse0x299f1a0();
   input += synapse0x299f1e0();
   input += synapse0x299f220();
   input += synapse0x299f260();
   input += synapse0x299f2a0();
   return input;
}

double NNfunction_ss_cLcL::neuron0x299ef80() {
   double input = input0x299ef80();
   return (input * 1)+0;
}

double NNfunction_ss_cLcL::synapse0x296f3f0() {
   return (neuron0x2969ff0()*0.188674);
}

double NNfunction_ss_cLcL::synapse0x296f430() {
   return (neuron0x296a2a0()*-1.86744);
}

double NNfunction_ss_cLcL::synapse0x296f470() {
   return (neuron0x296a5e0()*2.26579);
}

double NNfunction_ss_cLcL::synapse0x296f4b0() {
   return (neuron0x296a920()*-1.80936);
}

double NNfunction_ss_cLcL::synapse0x296f4f0() {
   return (neuron0x296ac60()*-0.744654);
}

double NNfunction_ss_cLcL::synapse0x296f530() {
   return (neuron0x296afa0()*0.0165734);
}

double NNfunction_ss_cLcL::synapse0x296f570() {
   return (neuron0x296b2e0()*1.31323);
}

double NNfunction_ss_cLcL::synapse0x296f5b0() {
   return (neuron0x296b620()*-0.758526);
}

double NNfunction_ss_cLcL::synapse0x296f5f0() {
   return (neuron0x296b960()*1.30653);
}

double NNfunction_ss_cLcL::synapse0x296f630() {
   return (neuron0x296bca0()*-0.556346);
}

double NNfunction_ss_cLcL::synapse0x296f670() {
   return (neuron0x296bfe0()*0.454888);
}

double NNfunction_ss_cLcL::synapse0x296f6b0() {
   return (neuron0x296c320()*0.360633);
}

double NNfunction_ss_cLcL::synapse0x296f6f0() {
   return (neuron0x296c660()*-2.68459);
}

double NNfunction_ss_cLcL::synapse0x296f730() {
   return (neuron0x296c9a0()*-0.318113);
}

double NNfunction_ss_cLcL::synapse0x296f770() {
   return (neuron0x296cce0()*-0.4101);
}

double NNfunction_ss_cLcL::synapse0x296f7b0() {
   return (neuron0x296d020()*-0.816828);
}

double NNfunction_ss_cLcL::synapse0x296f240() {
   return (neuron0x296d360()*0.200559);
}

double NNfunction_ss_cLcL::synapse0x296f280() {
   return (neuron0x296d8c0()*-0.0636676);
}

double NNfunction_ss_cLcL::synapse0x27261b0() {
   return (neuron0x296dc00()*-0.914968);
}

double NNfunction_ss_cLcL::synapse0x27261f0() {
   return (neuron0x296df40()*-0.472236);
}

double NNfunction_ss_cLcL::synapse0x296f7f0() {
   return (neuron0x296e280()*0.233211);
}

double NNfunction_ss_cLcL::synapse0x296f830() {
   return (neuron0x296e5c0()*-0.367361);
}

double NNfunction_ss_cLcL::synapse0x296f870() {
   return (neuron0x296e900()*-0.665849);
}

double NNfunction_ss_cLcL::synapse0x296f8b0() {
   return (neuron0x296ec40()*0.220182);
}

double NNfunction_ss_cLcL::synapse0x296fc30() {
   return (neuron0x2969ff0()*0.160498);
}

double NNfunction_ss_cLcL::synapse0x296fc70() {
   return (neuron0x296a2a0()*0.240159);
}

double NNfunction_ss_cLcL::synapse0x296fcb0() {
   return (neuron0x296a5e0()*2.05562);
}

double NNfunction_ss_cLcL::synapse0x296fcf0() {
   return (neuron0x296a920()*0.00732971);
}

double NNfunction_ss_cLcL::synapse0x296fd30() {
   return (neuron0x296ac60()*0.0669534);
}

double NNfunction_ss_cLcL::synapse0x296fd70() {
   return (neuron0x296afa0()*0.296463);
}

double NNfunction_ss_cLcL::synapse0x296fdb0() {
   return (neuron0x296b2e0()*0.122238);
}

double NNfunction_ss_cLcL::synapse0x296fdf0() {
   return (neuron0x296b620()*0.0898036);
}

double NNfunction_ss_cLcL::synapse0x296fe30() {
   return (neuron0x296b960()*0.421372);
}

double NNfunction_ss_cLcL::synapse0x2726000() {
   return (neuron0x296bca0()*0.416268);
}

double NNfunction_ss_cLcL::synapse0x2726040() {
   return (neuron0x296bfe0()*0.174924);
}

double NNfunction_ss_cLcL::synapse0x2726080() {
   return (neuron0x296c320()*-0.288654);
}

double NNfunction_ss_cLcL::synapse0x27260c0() {
   return (neuron0x296c660()*-1.4638);
}

double NNfunction_ss_cLcL::synapse0x2970080() {
   return (neuron0x296c9a0()*1.41568);
}

double NNfunction_ss_cLcL::synapse0x29700c0() {
   return (neuron0x296cce0()*0.976312);
}

double NNfunction_ss_cLcL::synapse0x2970100() {
   return (neuron0x296d020()*0.0982313);
}

double NNfunction_ss_cLcL::synapse0x296fa80() {
   return (neuron0x296d360()*0.785144);
}

double NNfunction_ss_cLcL::synapse0x296fac0() {
   return (neuron0x296d8c0()*0.267742);
}

double NNfunction_ss_cLcL::synapse0x2970250() {
   return (neuron0x296dc00()*0.356397);
}

double NNfunction_ss_cLcL::synapse0x2970290() {
   return (neuron0x296df40()*-0.231278);
}

double NNfunction_ss_cLcL::synapse0x29702d0() {
   return (neuron0x296e280()*0.300969);
}

double NNfunction_ss_cLcL::synapse0x2970310() {
   return (neuron0x296e5c0()*0.27536);
}

double NNfunction_ss_cLcL::synapse0x2970350() {
   return (neuron0x296e900()*-0.117795);
}

double NNfunction_ss_cLcL::synapse0x2970390() {
   return (neuron0x296ec40()*0.381872);
}

double NNfunction_ss_cLcL::synapse0x2970710() {
   return (neuron0x2969ff0()*0.372629);
}

double NNfunction_ss_cLcL::synapse0x2970750() {
   return (neuron0x296a2a0()*-0.267401);
}

double NNfunction_ss_cLcL::synapse0x2970790() {
   return (neuron0x296a5e0()*-0.408291);
}

double NNfunction_ss_cLcL::synapse0x29707d0() {
   return (neuron0x296a920()*0.729706);
}

double NNfunction_ss_cLcL::synapse0x2970810() {
   return (neuron0x296ac60()*0.30351);
}

double NNfunction_ss_cLcL::synapse0x2970850() {
   return (neuron0x296afa0()*0.685639);
}

double NNfunction_ss_cLcL::synapse0x2970890() {
   return (neuron0x296b2e0()*1.05765);
}

double NNfunction_ss_cLcL::synapse0x29708d0() {
   return (neuron0x296b620()*1.16897);
}

double NNfunction_ss_cLcL::synapse0x2970910() {
   return (neuron0x296b960()*0.505924);
}

double NNfunction_ss_cLcL::synapse0x2970950() {
   return (neuron0x296bca0()*0.898188);
}

double NNfunction_ss_cLcL::synapse0x2970990() {
   return (neuron0x296bfe0()*-0.296523);
}

double NNfunction_ss_cLcL::synapse0x29709d0() {
   return (neuron0x296c320()*0.496096);
}

double NNfunction_ss_cLcL::synapse0x2970a10() {
   return (neuron0x296c660()*-5.67733);
}

double NNfunction_ss_cLcL::synapse0x2970a50() {
   return (neuron0x296c9a0()*-1.13382);
}

double NNfunction_ss_cLcL::synapse0x2970a90() {
   return (neuron0x296cce0()*0.652396);
}

double NNfunction_ss_cLcL::synapse0x2970ad0() {
   return (neuron0x296d020()*1.0972);
}

double NNfunction_ss_cLcL::synapse0x2970560() {
   return (neuron0x296d360()*-0.967918);
}

double NNfunction_ss_cLcL::synapse0x29705a0() {
   return (neuron0x296d8c0()*-0.323335);
}

double NNfunction_ss_cLcL::synapse0x2726860() {
   return (neuron0x296dc00()*0.2874);
}

double NNfunction_ss_cLcL::synapse0x2734130() {
   return (neuron0x296df40()*-0.394847);
}

double NNfunction_ss_cLcL::synapse0x2734170() {
   return (neuron0x296e280()*0.451395);
}

double NNfunction_ss_cLcL::synapse0x2972a00() {
   return (neuron0x296e5c0()*-0.544312);
}

double NNfunction_ss_cLcL::synapse0x2972a40() {
   return (neuron0x296e900()*-0.276161);
}

double NNfunction_ss_cLcL::synapse0x2969d30() {
   return (neuron0x296ec40()*0.259418);
}

double NNfunction_ss_cLcL::synapse0x2969e00() {
   return (neuron0x2969ff0()*0.617502);
}

double NNfunction_ss_cLcL::synapse0x27349b0() {
   return (neuron0x296a2a0()*-0.555248);
}

double NNfunction_ss_cLcL::synapse0x2970000() {
   return (neuron0x296a5e0()*0.479915);
}

double NNfunction_ss_cLcL::synapse0x2970040() {
   return (neuron0x296a920()*-3.2014);
}

double NNfunction_ss_cLcL::synapse0x2970c20() {
   return (neuron0x296ac60()*0.846862);
}

double NNfunction_ss_cLcL::synapse0x2970c60() {
   return (neuron0x296afa0()*0.193828);
}

double NNfunction_ss_cLcL::synapse0x2970ca0() {
   return (neuron0x296b2e0()*1.05513);
}

double NNfunction_ss_cLcL::synapse0x2970ce0() {
   return (neuron0x296b620()*1.01127);
}

double NNfunction_ss_cLcL::synapse0x2970d20() {
   return (neuron0x296b960()*1.51283);
}

double NNfunction_ss_cLcL::synapse0x2970d60() {
   return (neuron0x296bca0()*0.586667);
}

double NNfunction_ss_cLcL::synapse0x2970da0() {
   return (neuron0x296bfe0()*1.00601);
}

double NNfunction_ss_cLcL::synapse0x2970de0() {
   return (neuron0x296c320()*-0.770762);
}

double NNfunction_ss_cLcL::synapse0x2970e20() {
   return (neuron0x296c660()*1.3947);
}

double NNfunction_ss_cLcL::synapse0x2970e60() {
   return (neuron0x296c9a0()*-1.69783);
}

double NNfunction_ss_cLcL::synapse0x2970ea0() {
   return (neuron0x296cce0()*-1.33017);
}

double NNfunction_ss_cLcL::synapse0x2970ee0() {
   return (neuron0x296d020()*-1.5261);
}

double NNfunction_ss_cLcL::synapse0x2969d70() {
   return (neuron0x296d360()*-3.66686);
}

double NNfunction_ss_cLcL::synapse0x2969db0() {
   return (neuron0x296d8c0()*-0.762243);
}

double NNfunction_ss_cLcL::synapse0x2971030() {
   return (neuron0x296dc00()*-0.670709);
}

double NNfunction_ss_cLcL::synapse0x2971070() {
   return (neuron0x296df40()*-0.401091);
}

double NNfunction_ss_cLcL::synapse0x29710b0() {
   return (neuron0x296e280()*1.87754);
}

double NNfunction_ss_cLcL::synapse0x29710f0() {
   return (neuron0x296e5c0()*0.393014);
}

double NNfunction_ss_cLcL::synapse0x2971130() {
   return (neuron0x296e900()*-2.11231);
}

double NNfunction_ss_cLcL::synapse0x2971170() {
   return (neuron0x296ec40()*-1.08976);
}

double NNfunction_ss_cLcL::synapse0x29714f0() {
   return (neuron0x2969ff0()*-0.404394);
}

double NNfunction_ss_cLcL::synapse0x2971530() {
   return (neuron0x296a2a0()*0.198359);
}

double NNfunction_ss_cLcL::synapse0x2971570() {
   return (neuron0x296a5e0()*0.124583);
}

double NNfunction_ss_cLcL::synapse0x29715b0() {
   return (neuron0x296a920()*-0.0128514);
}

double NNfunction_ss_cLcL::synapse0x29715f0() {
   return (neuron0x296ac60()*-0.13822);
}

double NNfunction_ss_cLcL::synapse0x2971630() {
   return (neuron0x296afa0()*0.238927);
}

double NNfunction_ss_cLcL::synapse0x2971670() {
   return (neuron0x296b2e0()*-0.372898);
}

double NNfunction_ss_cLcL::synapse0x29716b0() {
   return (neuron0x296b620()*-0.656078);
}

double NNfunction_ss_cLcL::synapse0x29716f0() {
   return (neuron0x296b960()*-0.166239);
}

double NNfunction_ss_cLcL::synapse0x2971730() {
   return (neuron0x296bca0()*-1.32252);
}

double NNfunction_ss_cLcL::synapse0x2971770() {
   return (neuron0x296bfe0()*0.412286);
}

double NNfunction_ss_cLcL::synapse0x29717b0() {
   return (neuron0x296c320()*-0.508118);
}

double NNfunction_ss_cLcL::synapse0x29717f0() {
   return (neuron0x296c660()*-1.5292);
}

double NNfunction_ss_cLcL::synapse0x2971830() {
   return (neuron0x296c9a0()*0.576555);
}

double NNfunction_ss_cLcL::synapse0x2971870() {
   return (neuron0x296cce0()*-0.623548);
}

double NNfunction_ss_cLcL::synapse0x29718b0() {
   return (neuron0x296d020()*-0.567514);
}

double NNfunction_ss_cLcL::synapse0x2971a00() {
   return (neuron0x296d360()*0.329671);
}

double NNfunction_ss_cLcL::synapse0x2971340() {
   return (neuron0x296d8c0()*0.425564);
}

double NNfunction_ss_cLcL::synapse0x2971380() {
   return (neuron0x296dc00()*-0.267528);
}

double NNfunction_ss_cLcL::synapse0x2972b40() {
   return (neuron0x296df40()*1.13507);
}

double NNfunction_ss_cLcL::synapse0x2972b80() {
   return (neuron0x296e280()*0.194044);
}

double NNfunction_ss_cLcL::synapse0x2972bc0() {
   return (neuron0x296e5c0()*0.966857);
}

double NNfunction_ss_cLcL::synapse0x2972c00() {
   return (neuron0x296e900()*0.425806);
}

double NNfunction_ss_cLcL::synapse0x2972c40() {
   return (neuron0x296ec40()*-0.178812);
}

double NNfunction_ss_cLcL::synapse0x2972fc0() {
   return (neuron0x2969ff0()*0.093504);
}

double NNfunction_ss_cLcL::synapse0x2973000() {
   return (neuron0x296a2a0()*0.00448186);
}

double NNfunction_ss_cLcL::synapse0x2973040() {
   return (neuron0x296a5e0()*0.123394);
}

double NNfunction_ss_cLcL::synapse0x2973080() {
   return (neuron0x296a920()*-2.9894);
}

double NNfunction_ss_cLcL::synapse0x29730c0() {
   return (neuron0x296ac60()*0.100468);
}

double NNfunction_ss_cLcL::synapse0x2973100() {
   return (neuron0x296afa0()*0.0472528);
}

double NNfunction_ss_cLcL::synapse0x2973140() {
   return (neuron0x296b2e0()*0.126082);
}

double NNfunction_ss_cLcL::synapse0x2973180() {
   return (neuron0x296b620()*0.0643955);
}

double NNfunction_ss_cLcL::synapse0x29731c0() {
   return (neuron0x296b960()*0.0892217);
}

double NNfunction_ss_cLcL::synapse0x2734480() {
   return (neuron0x296bca0()*0.0292466);
}

double NNfunction_ss_cLcL::synapse0x27344c0() {
   return (neuron0x296bfe0()*0.0713285);
}

double NNfunction_ss_cLcL::synapse0x2734500() {
   return (neuron0x296c320()*-0.0606811);
}

double NNfunction_ss_cLcL::synapse0x2734540() {
   return (neuron0x296c660()*-2.4514);
}

double NNfunction_ss_cLcL::synapse0x2734580() {
   return (neuron0x296c9a0()*-0.290013);
}

double NNfunction_ss_cLcL::synapse0x27345c0() {
   return (neuron0x296cce0()*0.0257889);
}

double NNfunction_ss_cLcL::synapse0x2734600() {
   return (neuron0x296d020()*0.111761);
}

double NNfunction_ss_cLcL::synapse0x2972e10() {
   return (neuron0x296d360()*-0.162541);
}

double NNfunction_ss_cLcL::synapse0x2972e50() {
   return (neuron0x296d8c0()*-0.0743595);
}

double NNfunction_ss_cLcL::synapse0x2734750() {
   return (neuron0x296dc00()*0.066413);
}

double NNfunction_ss_cLcL::synapse0x2734790() {
   return (neuron0x296df40()*-0.23439);
}

double NNfunction_ss_cLcL::synapse0x27347d0() {
   return (neuron0x296e280()*0.271956);
}

double NNfunction_ss_cLcL::synapse0x2734810() {
   return (neuron0x296e5c0()*-0.100734);
}

double NNfunction_ss_cLcL::synapse0x2734850() {
   return (neuron0x296e900()*-0.158849);
}

double NNfunction_ss_cLcL::synapse0x2973a10() {
   return (neuron0x296ec40()*0.110569);
}

double NNfunction_ss_cLcL::synapse0x2973d90() {
   return (neuron0x2969ff0()*-0.0715338);
}

double NNfunction_ss_cLcL::synapse0x2973dd0() {
   return (neuron0x296a2a0()*0.483875);
}

double NNfunction_ss_cLcL::synapse0x2973e10() {
   return (neuron0x296a5e0()*0.311338);
}

double NNfunction_ss_cLcL::synapse0x2973e50() {
   return (neuron0x296a920()*-1.22291);
}

double NNfunction_ss_cLcL::synapse0x2973e90() {
   return (neuron0x296ac60()*0.1833);
}

double NNfunction_ss_cLcL::synapse0x2973ed0() {
   return (neuron0x296afa0()*-0.0381937);
}

double NNfunction_ss_cLcL::synapse0x2973f10() {
   return (neuron0x296b2e0()*-0.0307576);
}

double NNfunction_ss_cLcL::synapse0x2973f50() {
   return (neuron0x296b620()*-0.282675);
}

double NNfunction_ss_cLcL::synapse0x2973f90() {
   return (neuron0x296b960()*0.341636);
}

double NNfunction_ss_cLcL::synapse0x2973fd0() {
   return (neuron0x296bca0()*-0.210842);
}

double NNfunction_ss_cLcL::synapse0x2974010() {
   return (neuron0x296bfe0()*0.519145);
}

double NNfunction_ss_cLcL::synapse0x2974050() {
   return (neuron0x296c320()*-0.146481);
}

double NNfunction_ss_cLcL::synapse0x2974090() {
   return (neuron0x296c660()*3.15145);
}

double NNfunction_ss_cLcL::synapse0x29740d0() {
   return (neuron0x296c9a0()*-0.42419);
}

double NNfunction_ss_cLcL::synapse0x2974110() {
   return (neuron0x296cce0()*0.290457);
}

double NNfunction_ss_cLcL::synapse0x2974150() {
   return (neuron0x296d020()*0.226757);
}

double NNfunction_ss_cLcL::synapse0x2973be0() {
   return (neuron0x296d360()*0.757354);
}

double NNfunction_ss_cLcL::synapse0x2973c20() {
   return (neuron0x296d8c0()*0.772138);
}

double NNfunction_ss_cLcL::synapse0x29742a0() {
   return (neuron0x296dc00()*0.846251);
}

double NNfunction_ss_cLcL::synapse0x29742e0() {
   return (neuron0x296df40()*-0.183123);
}

double NNfunction_ss_cLcL::synapse0x2974320() {
   return (neuron0x296e280()*1.62956);
}

double NNfunction_ss_cLcL::synapse0x2974360() {
   return (neuron0x296e5c0()*0.640385);
}

double NNfunction_ss_cLcL::synapse0x29743a0() {
   return (neuron0x296e900()*-0.148419);
}

double NNfunction_ss_cLcL::synapse0x29743e0() {
   return (neuron0x296ec40()*0.169383);
}

double NNfunction_ss_cLcL::synapse0x2974760() {
   return (neuron0x2969ff0()*0.910236);
}

double NNfunction_ss_cLcL::synapse0x29747a0() {
   return (neuron0x296a2a0()*-0.112428);
}

double NNfunction_ss_cLcL::synapse0x29747e0() {
   return (neuron0x296a5e0()*-0.263735);
}

double NNfunction_ss_cLcL::synapse0x2974820() {
   return (neuron0x296a920()*0.857204);
}

double NNfunction_ss_cLcL::synapse0x2974860() {
   return (neuron0x296ac60()*-0.247521);
}

double NNfunction_ss_cLcL::synapse0x29748a0() {
   return (neuron0x296afa0()*-0.245029);
}

double NNfunction_ss_cLcL::synapse0x29748e0() {
   return (neuron0x296b2e0()*-0.59432);
}

double NNfunction_ss_cLcL::synapse0x2974920() {
   return (neuron0x296b620()*-0.725477);
}

double NNfunction_ss_cLcL::synapse0x2974960() {
   return (neuron0x296b960()*-0.456528);
}

double NNfunction_ss_cLcL::synapse0x29749a0() {
   return (neuron0x296bca0()*-1.10363);
}

double NNfunction_ss_cLcL::synapse0x29749e0() {
   return (neuron0x296bfe0()*-2.57915);
}

double NNfunction_ss_cLcL::synapse0x2974a20() {
   return (neuron0x296c320()*0.344571);
}

double NNfunction_ss_cLcL::synapse0x2974a60() {
   return (neuron0x296c660()*1.42772);
}

double NNfunction_ss_cLcL::synapse0x2974aa0() {
   return (neuron0x296c9a0()*2.12732);
}

double NNfunction_ss_cLcL::synapse0x2974ae0() {
   return (neuron0x296cce0()*0.292459);
}

double NNfunction_ss_cLcL::synapse0x2974b20() {
   return (neuron0x296d020()*-0.232281);
}

double NNfunction_ss_cLcL::synapse0x29745b0() {
   return (neuron0x296d360()*0.545281);
}

double NNfunction_ss_cLcL::synapse0x29745f0() {
   return (neuron0x296d8c0()*0.687837);
}

double NNfunction_ss_cLcL::synapse0x2974c70() {
   return (neuron0x296dc00()*-0.558284);
}

double NNfunction_ss_cLcL::synapse0x2974cb0() {
   return (neuron0x296df40()*0.474124);
}

double NNfunction_ss_cLcL::synapse0x2974cf0() {
   return (neuron0x296e280()*-1.30661);
}

double NNfunction_ss_cLcL::synapse0x2974d30() {
   return (neuron0x296e5c0()*-1.33391);
}

double NNfunction_ss_cLcL::synapse0x2974d70() {
   return (neuron0x296e900()*0.23175);
}

double NNfunction_ss_cLcL::synapse0x2974db0() {
   return (neuron0x296ec40()*0.236764);
}

double NNfunction_ss_cLcL::synapse0x296d7b0() {
   return (neuron0x2969ff0()*0.0304793);
}

double NNfunction_ss_cLcL::synapse0x296d7f0() {
   return (neuron0x296a2a0()*0.0316288);
}

double NNfunction_ss_cLcL::synapse0x296d830() {
   return (neuron0x296a5e0()*-0.634049);
}

double NNfunction_ss_cLcL::synapse0x296d870() {
   return (neuron0x296a920()*3.61898);
}

double NNfunction_ss_cLcL::synapse0x2975340() {
   return (neuron0x296ac60()*-0.0179023);
}

double NNfunction_ss_cLcL::synapse0x2975380() {
   return (neuron0x296afa0()*-0.00758621);
}

double NNfunction_ss_cLcL::synapse0x29753c0() {
   return (neuron0x296b2e0()*-0.16062);
}

double NNfunction_ss_cLcL::synapse0x2975400() {
   return (neuron0x296b620()*-0.0799387);
}

double NNfunction_ss_cLcL::synapse0x2975440() {
   return (neuron0x296b960()*-0.0701637);
}

double NNfunction_ss_cLcL::synapse0x2975480() {
   return (neuron0x296bca0()*-0.130517);
}

double NNfunction_ss_cLcL::synapse0x29754c0() {
   return (neuron0x296bfe0()*-0.0419704);
}

double NNfunction_ss_cLcL::synapse0x2975500() {
   return (neuron0x296c320()*-0.0987518);
}

double NNfunction_ss_cLcL::synapse0x2975540() {
   return (neuron0x296c660()*1.59669);
}

double NNfunction_ss_cLcL::synapse0x2975580() {
   return (neuron0x296c9a0()*-0.13508);
}

double NNfunction_ss_cLcL::synapse0x29755c0() {
   return (neuron0x296cce0()*-0.0336236);
}

double NNfunction_ss_cLcL::synapse0x2975600() {
   return (neuron0x296d020()*-0.0872225);
}

double NNfunction_ss_cLcL::synapse0x2974f80() {
   return (neuron0x296d360()*0.0762683);
}

double NNfunction_ss_cLcL::synapse0x2974fc0() {
   return (neuron0x296d8c0()*-0.0121076);
}

double NNfunction_ss_cLcL::synapse0x2975750() {
   return (neuron0x296dc00()*-0.20889);
}

double NNfunction_ss_cLcL::synapse0x2975790() {
   return (neuron0x296df40()*0.0526645);
}

double NNfunction_ss_cLcL::synapse0x29757d0() {
   return (neuron0x296e280()*-0.0424624);
}

double NNfunction_ss_cLcL::synapse0x2975810() {
   return (neuron0x296e5c0()*0.10716);
}

double NNfunction_ss_cLcL::synapse0x2975850() {
   return (neuron0x296e900()*0.0436236);
}

double NNfunction_ss_cLcL::synapse0x2975890() {
   return (neuron0x296ec40()*0.0676745);
}

double NNfunction_ss_cLcL::synapse0x2975c10() {
   return (neuron0x2969ff0()*-0.107741);
}

double NNfunction_ss_cLcL::synapse0x2975c50() {
   return (neuron0x296a2a0()*2.76738);
}

double NNfunction_ss_cLcL::synapse0x2975c90() {
   return (neuron0x296a5e0()*-2.18235);
}

double NNfunction_ss_cLcL::synapse0x2975cd0() {
   return (neuron0x296a920()*3.2817);
}

double NNfunction_ss_cLcL::synapse0x2975d10() {
   return (neuron0x296ac60()*0.34316);
}

double NNfunction_ss_cLcL::synapse0x2975d50() {
   return (neuron0x296afa0()*0.111875);
}

double NNfunction_ss_cLcL::synapse0x2975d90() {
   return (neuron0x296b2e0()*0.368246);
}

double NNfunction_ss_cLcL::synapse0x2975dd0() {
   return (neuron0x296b620()*-0.0187665);
}

double NNfunction_ss_cLcL::synapse0x2975e10() {
   return (neuron0x296b960()*-1.22026);
}

double NNfunction_ss_cLcL::synapse0x2975e50() {
   return (neuron0x296bca0()*-0.359486);
}

double NNfunction_ss_cLcL::synapse0x2975e90() {
   return (neuron0x296bfe0()*-2.13466);
}

double NNfunction_ss_cLcL::synapse0x2975ed0() {
   return (neuron0x296c320()*0.573984);
}

double NNfunction_ss_cLcL::synapse0x2975f10() {
   return (neuron0x296c660()*-0.476382);
}

double NNfunction_ss_cLcL::synapse0x2975f50() {
   return (neuron0x296c9a0()*0.795239);
}

double NNfunction_ss_cLcL::synapse0x2975f90() {
   return (neuron0x296cce0()*1.48279);
}

double NNfunction_ss_cLcL::synapse0x2975fd0() {
   return (neuron0x296d020()*1.05067);
}

double NNfunction_ss_cLcL::synapse0x2975a60() {
   return (neuron0x296d360()*-0.0175058);
}

double NNfunction_ss_cLcL::synapse0x2975aa0() {
   return (neuron0x296d8c0()*0.171754);
}

double NNfunction_ss_cLcL::synapse0x2976120() {
   return (neuron0x296dc00()*0.0427638);
}

double NNfunction_ss_cLcL::synapse0x2976160() {
   return (neuron0x296df40()*-0.340414);
}

double NNfunction_ss_cLcL::synapse0x29761a0() {
   return (neuron0x296e280()*-1.85239);
}

double NNfunction_ss_cLcL::synapse0x29761e0() {
   return (neuron0x296e5c0()*-1.69534);
}

double NNfunction_ss_cLcL::synapse0x2976220() {
   return (neuron0x296e900()*1.88594);
}

double NNfunction_ss_cLcL::synapse0x2976260() {
   return (neuron0x296ec40()*-0.42989);
}

double NNfunction_ss_cLcL::synapse0x29765e0() {
   return (neuron0x2969ff0()*0.0107512);
}

double NNfunction_ss_cLcL::synapse0x2976620() {
   return (neuron0x296a2a0()*0.00777015);
}

double NNfunction_ss_cLcL::synapse0x2976660() {
   return (neuron0x296a5e0()*-0.0160149);
}

double NNfunction_ss_cLcL::synapse0x29766a0() {
   return (neuron0x296a920()*5.73826);
}

double NNfunction_ss_cLcL::synapse0x29766e0() {
   return (neuron0x296ac60()*0.0135948);
}

double NNfunction_ss_cLcL::synapse0x2976720() {
   return (neuron0x296afa0()*0.0112174);
}

double NNfunction_ss_cLcL::synapse0x2976760() {
   return (neuron0x296b2e0()*-0.0128447);
}

double NNfunction_ss_cLcL::synapse0x29767a0() {
   return (neuron0x296b620()*0.0215829);
}

double NNfunction_ss_cLcL::synapse0x29767e0() {
   return (neuron0x296b960()*0.0211984);
}

double NNfunction_ss_cLcL::synapse0x2976820() {
   return (neuron0x296bca0()*0.0236418);
}

double NNfunction_ss_cLcL::synapse0x2976860() {
   return (neuron0x296bfe0()*0.0113916);
}

double NNfunction_ss_cLcL::synapse0x29768a0() {
   return (neuron0x296c320()*0.0176963);
}

double NNfunction_ss_cLcL::synapse0x29768e0() {
   return (neuron0x296c660()*-1.58904);
}

double NNfunction_ss_cLcL::synapse0x2976920() {
   return (neuron0x296c9a0()*-0.121652);
}

double NNfunction_ss_cLcL::synapse0x2976960() {
   return (neuron0x296cce0()*0.0658841);
}

double NNfunction_ss_cLcL::synapse0x29769a0() {
   return (neuron0x296d020()*0.0262113);
}

double NNfunction_ss_cLcL::synapse0x2976430() {
   return (neuron0x296d360()*-0.0753426);
}

double NNfunction_ss_cLcL::synapse0x2976470() {
   return (neuron0x296d8c0()*0.0458559);
}

double NNfunction_ss_cLcL::synapse0x2973200() {
   return (neuron0x296dc00()*0.0119429);
}

double NNfunction_ss_cLcL::synapse0x2973240() {
   return (neuron0x296df40()*-0.0246461);
}

double NNfunction_ss_cLcL::synapse0x2973280() {
   return (neuron0x296e280()*-0.013939);
}

double NNfunction_ss_cLcL::synapse0x29732c0() {
   return (neuron0x296e5c0()*0.00339775);
}

double NNfunction_ss_cLcL::synapse0x2973300() {
   return (neuron0x296e900()*-0.0186886);
}

double NNfunction_ss_cLcL::synapse0x2973340() {
   return (neuron0x296ec40()*-0.00387066);
}

double NNfunction_ss_cLcL::synapse0x29736c0() {
   return (neuron0x2969ff0()*-0.433383);
}

double NNfunction_ss_cLcL::synapse0x2973700() {
   return (neuron0x296a2a0()*4.0601);
}

double NNfunction_ss_cLcL::synapse0x2973740() {
   return (neuron0x296a5e0()*2.22102);
}

double NNfunction_ss_cLcL::synapse0x2973780() {
   return (neuron0x296a920()*2.56135);
}

double NNfunction_ss_cLcL::synapse0x29737c0() {
   return (neuron0x296ac60()*0.163546);
}

double NNfunction_ss_cLcL::synapse0x2973800() {
   return (neuron0x296afa0()*-0.718604);
}

double NNfunction_ss_cLcL::synapse0x2973840() {
   return (neuron0x296b2e0()*-0.787489);
}

double NNfunction_ss_cLcL::synapse0x2973880() {
   return (neuron0x296b620()*-0.0700721);
}

double NNfunction_ss_cLcL::synapse0x29738c0() {
   return (neuron0x296b960()*-0.638435);
}

double NNfunction_ss_cLcL::synapse0x2973900() {
   return (neuron0x296bca0()*0.675085);
}

double NNfunction_ss_cLcL::synapse0x2973940() {
   return (neuron0x296bfe0()*-0.940983);
}

double NNfunction_ss_cLcL::synapse0x2973980() {
   return (neuron0x296c320()*0.603812);
}

double NNfunction_ss_cLcL::synapse0x29739c0() {
   return (neuron0x296c660()*-0.34955);
}

double NNfunction_ss_cLcL::synapse0x2977b00() {
   return (neuron0x296c9a0()*0.92866);
}

double NNfunction_ss_cLcL::synapse0x2977b40() {
   return (neuron0x296cce0()*0.0361672);
}

double NNfunction_ss_cLcL::synapse0x2977b80() {
   return (neuron0x296d020()*0.337381);
}

double NNfunction_ss_cLcL::synapse0x2973510() {
   return (neuron0x296d360()*0.167528);
}

double NNfunction_ss_cLcL::synapse0x2973550() {
   return (neuron0x296d8c0()*-0.0448087);
}

double NNfunction_ss_cLcL::synapse0x2977cd0() {
   return (neuron0x296dc00()*-0.00873835);
}

double NNfunction_ss_cLcL::synapse0x2977d10() {
   return (neuron0x296df40()*-0.112273);
}

double NNfunction_ss_cLcL::synapse0x2977d50() {
   return (neuron0x296e280()*0.0998937);
}

double NNfunction_ss_cLcL::synapse0x2977d90() {
   return (neuron0x296e5c0()*-1.46733);
}

double NNfunction_ss_cLcL::synapse0x2977dd0() {
   return (neuron0x296e900()*1.33766);
}

double NNfunction_ss_cLcL::synapse0x2977e10() {
   return (neuron0x296ec40()*-2.15351);
}

double NNfunction_ss_cLcL::synapse0x2978190() {
   return (neuron0x2969ff0()*-0.670421);
}

double NNfunction_ss_cLcL::synapse0x29781d0() {
   return (neuron0x296a2a0()*-0.352944);
}

double NNfunction_ss_cLcL::synapse0x2978210() {
   return (neuron0x296a5e0()*-0.445406);
}

double NNfunction_ss_cLcL::synapse0x2978250() {
   return (neuron0x296a920()*0.150014);
}

double NNfunction_ss_cLcL::synapse0x2978290() {
   return (neuron0x296ac60()*-0.174147);
}

double NNfunction_ss_cLcL::synapse0x29782d0() {
   return (neuron0x296afa0()*0.047385);
}

double NNfunction_ss_cLcL::synapse0x2978310() {
   return (neuron0x296b2e0()*0.0949507);
}

double NNfunction_ss_cLcL::synapse0x2978350() {
   return (neuron0x296b620()*-0.659958);
}

double NNfunction_ss_cLcL::synapse0x2978390() {
   return (neuron0x296b960()*-0.555698);
}

double NNfunction_ss_cLcL::synapse0x29783d0() {
   return (neuron0x296bca0()*-0.298654);
}

double NNfunction_ss_cLcL::synapse0x2978410() {
   return (neuron0x296bfe0()*0.501028);
}

double NNfunction_ss_cLcL::synapse0x2978450() {
   return (neuron0x296c320()*0.126479);
}

double NNfunction_ss_cLcL::synapse0x2978490() {
   return (neuron0x296c660()*0.0817078);
}

double NNfunction_ss_cLcL::synapse0x29784d0() {
   return (neuron0x296c9a0()*0.151213);
}

double NNfunction_ss_cLcL::synapse0x2978510() {
   return (neuron0x296cce0()*0.563693);
}

double NNfunction_ss_cLcL::synapse0x2978550() {
   return (neuron0x296d020()*-0.574482);
}

double NNfunction_ss_cLcL::synapse0x2977fe0() {
   return (neuron0x296d360()*0.843759);
}

double NNfunction_ss_cLcL::synapse0x2978020() {
   return (neuron0x296d8c0()*-1.58615);
}

double NNfunction_ss_cLcL::synapse0x29786a0() {
   return (neuron0x296dc00()*0.0673659);
}

double NNfunction_ss_cLcL::synapse0x29786e0() {
   return (neuron0x296df40()*-0.506895);
}

double NNfunction_ss_cLcL::synapse0x2978720() {
   return (neuron0x296e280()*-1.63305);
}

double NNfunction_ss_cLcL::synapse0x2978760() {
   return (neuron0x296e5c0()*0.0437333);
}

double NNfunction_ss_cLcL::synapse0x29787a0() {
   return (neuron0x296e900()*-1.01458);
}

double NNfunction_ss_cLcL::synapse0x29787e0() {
   return (neuron0x296ec40()*1.6788);
}

double NNfunction_ss_cLcL::synapse0x2978b60() {
   return (neuron0x2969ff0()*-0.359849);
}

double NNfunction_ss_cLcL::synapse0x2978ba0() {
   return (neuron0x296a2a0()*0.176712);
}

double NNfunction_ss_cLcL::synapse0x2978be0() {
   return (neuron0x296a5e0()*-0.208407);
}

double NNfunction_ss_cLcL::synapse0x2978c20() {
   return (neuron0x296a920()*1.86284);
}

double NNfunction_ss_cLcL::synapse0x2978c60() {
   return (neuron0x296ac60()*-0.489658);
}

double NNfunction_ss_cLcL::synapse0x2978ca0() {
   return (neuron0x296afa0()*0.0207831);
}

double NNfunction_ss_cLcL::synapse0x2978ce0() {
   return (neuron0x296b2e0()*0.0865225);
}

double NNfunction_ss_cLcL::synapse0x2978d20() {
   return (neuron0x296b620()*-0.566171);
}

double NNfunction_ss_cLcL::synapse0x2978d60() {
   return (neuron0x296b960()*0.0503845);
}

double NNfunction_ss_cLcL::synapse0x2978da0() {
   return (neuron0x296bca0()*0.158838);
}

double NNfunction_ss_cLcL::synapse0x2978de0() {
   return (neuron0x296bfe0()*-0.583518);
}

double NNfunction_ss_cLcL::synapse0x2978e20() {
   return (neuron0x296c320()*0.916435);
}

double NNfunction_ss_cLcL::synapse0x2978e60() {
   return (neuron0x296c660()*1.73111);
}

double NNfunction_ss_cLcL::synapse0x2978ea0() {
   return (neuron0x296c9a0()*0.934714);
}

double NNfunction_ss_cLcL::synapse0x2978ee0() {
   return (neuron0x296cce0()*1.40144);
}

double NNfunction_ss_cLcL::synapse0x2978f20() {
   return (neuron0x296d020()*0.637625);
}

double NNfunction_ss_cLcL::synapse0x29789b0() {
   return (neuron0x296d360()*0.581839);
}

double NNfunction_ss_cLcL::synapse0x29789f0() {
   return (neuron0x296d8c0()*0.352529);
}

double NNfunction_ss_cLcL::synapse0x2979070() {
   return (neuron0x296dc00()*0.537689);
}

double NNfunction_ss_cLcL::synapse0x29790b0() {
   return (neuron0x296df40()*0.716422);
}

double NNfunction_ss_cLcL::synapse0x29790f0() {
   return (neuron0x296e280()*-0.945275);
}

double NNfunction_ss_cLcL::synapse0x2979130() {
   return (neuron0x296e5c0()*0.570186);
}

double NNfunction_ss_cLcL::synapse0x2979170() {
   return (neuron0x296e900()*1.21163);
}

double NNfunction_ss_cLcL::synapse0x29791b0() {
   return (neuron0x296ec40()*1.56862);
}

double NNfunction_ss_cLcL::synapse0x2979530() {
   return (neuron0x2969ff0()*0.103561);
}

double NNfunction_ss_cLcL::synapse0x2979570() {
   return (neuron0x296a2a0()*0.00174308);
}

double NNfunction_ss_cLcL::synapse0x29795b0() {
   return (neuron0x296a5e0()*-1.69227);
}

double NNfunction_ss_cLcL::synapse0x29795f0() {
   return (neuron0x296a920()*-0.210725);
}

double NNfunction_ss_cLcL::synapse0x2979630() {
   return (neuron0x296ac60()*-0.0525802);
}

double NNfunction_ss_cLcL::synapse0x2979670() {
   return (neuron0x296afa0()*0.128018);
}

double NNfunction_ss_cLcL::synapse0x29796b0() {
   return (neuron0x296b2e0()*0.0873466);
}

double NNfunction_ss_cLcL::synapse0x29796f0() {
   return (neuron0x296b620()*-0.0260668);
}

double NNfunction_ss_cLcL::synapse0x2979730() {
   return (neuron0x296b960()*0.0179193);
}

double NNfunction_ss_cLcL::synapse0x2979770() {
   return (neuron0x296bca0()*0.0991501);
}

double NNfunction_ss_cLcL::synapse0x29797b0() {
   return (neuron0x296bfe0()*-0.0316047);
}

double NNfunction_ss_cLcL::synapse0x29797f0() {
   return (neuron0x296c320()*-0.0976477);
}

double NNfunction_ss_cLcL::synapse0x2979830() {
   return (neuron0x296c660()*0.0778095);
}

double NNfunction_ss_cLcL::synapse0x2979870() {
   return (neuron0x296c9a0()*0.313271);
}

double NNfunction_ss_cLcL::synapse0x29798b0() {
   return (neuron0x296cce0()*0.0169327);
}

double NNfunction_ss_cLcL::synapse0x29798f0() {
   return (neuron0x296d020()*-0.0207544);
}

double NNfunction_ss_cLcL::synapse0x2979380() {
   return (neuron0x296d360()*0.0516376);
}

double NNfunction_ss_cLcL::synapse0x29793c0() {
   return (neuron0x296d8c0()*0.0100707);
}

double NNfunction_ss_cLcL::synapse0x2979a40() {
   return (neuron0x296dc00()*0.024129);
}

double NNfunction_ss_cLcL::synapse0x2979a80() {
   return (neuron0x296df40()*0.0012883);
}

double NNfunction_ss_cLcL::synapse0x2979ac0() {
   return (neuron0x296e280()*0.0817568);
}

double NNfunction_ss_cLcL::synapse0x2979b00() {
   return (neuron0x296e5c0()*0.0982631);
}

double NNfunction_ss_cLcL::synapse0x2979b40() {
   return (neuron0x296e900()*0.0255567);
}

double NNfunction_ss_cLcL::synapse0x2979b80() {
   return (neuron0x296ec40()*0.0841723);
}

double NNfunction_ss_cLcL::synapse0x2979f00() {
   return (neuron0x2969ff0()*1.76449);
}

double NNfunction_ss_cLcL::synapse0x296a180() {
   return (neuron0x296a2a0()*2.45956);
}

double NNfunction_ss_cLcL::synapse0x296a1c0() {
   return (neuron0x296a5e0()*1.0969);
}

double NNfunction_ss_cLcL::synapse0x296a4c0() {
   return (neuron0x296a920()*-0.0724802);
}

double NNfunction_ss_cLcL::synapse0x296a500() {
   return (neuron0x296ac60()*1.15824);
}

double NNfunction_ss_cLcL::synapse0x296a800() {
   return (neuron0x296afa0()*0.519327);
}

double NNfunction_ss_cLcL::synapse0x296a840() {
   return (neuron0x296b2e0()*-0.284475);
}

double NNfunction_ss_cLcL::synapse0x296ab40() {
   return (neuron0x296b620()*-0.668482);
}

double NNfunction_ss_cLcL::synapse0x296ab80() {
   return (neuron0x296b960()*-0.922362);
}

double NNfunction_ss_cLcL::synapse0x296ae80() {
   return (neuron0x296bca0()*-0.254145);
}

double NNfunction_ss_cLcL::synapse0x296aec0() {
   return (neuron0x296bfe0()*-0.198056);
}

double NNfunction_ss_cLcL::synapse0x296b1c0() {
   return (neuron0x296c320()*-1.18751);
}

double NNfunction_ss_cLcL::synapse0x296b200() {
   return (neuron0x296c660()*-4.30278);
}

double NNfunction_ss_cLcL::synapse0x296b500() {
   return (neuron0x296c9a0()*1.1798);
}

double NNfunction_ss_cLcL::synapse0x296b540() {
   return (neuron0x296cce0()*-0.864309);
}

double NNfunction_ss_cLcL::synapse0x296b840() {
   return (neuron0x296d020()*-0.560776);
}

double NNfunction_ss_cLcL::synapse0x296b880() {
   return (neuron0x296d360()*0.534991);
}

double NNfunction_ss_cLcL::synapse0x296bb80() {
   return (neuron0x296d8c0()*0.749377);
}

double NNfunction_ss_cLcL::synapse0x296bbc0() {
   return (neuron0x296dc00()*1.17321);
}

double NNfunction_ss_cLcL::synapse0x296bec0() {
   return (neuron0x296df40()*1.44308);
}

double NNfunction_ss_cLcL::synapse0x296bf00() {
   return (neuron0x296e280()*1.36116);
}

double NNfunction_ss_cLcL::synapse0x296c200() {
   return (neuron0x296e5c0()*1.83707);
}

double NNfunction_ss_cLcL::synapse0x296c240() {
   return (neuron0x296e900()*1.28416);
}

double NNfunction_ss_cLcL::synapse0x296c540() {
   return (neuron0x296ec40()*0.378952);
}

double NNfunction_ss_cLcL::synapse0x296c580() {
   return (neuron0x2969ff0()*-0.419917);
}

double NNfunction_ss_cLcL::synapse0x296d240() {
   return (neuron0x296a2a0()*-3.68797);
}

double NNfunction_ss_cLcL::synapse0x296d280() {
   return (neuron0x296a5e0()*2.84748);
}

double NNfunction_ss_cLcL::synapse0x2979d50() {
   return (neuron0x296a920()*-1.5306);
}

double NNfunction_ss_cLcL::synapse0x2979d90() {
   return (neuron0x296ac60()*-0.538904);
}

double NNfunction_ss_cLcL::synapse0x296d580() {
   return (neuron0x296afa0()*-0.892667);
}

double NNfunction_ss_cLcL::synapse0x296d5c0() {
   return (neuron0x296b2e0()*-1.04644);
}

double NNfunction_ss_cLcL::synapse0x296dae0() {
   return (neuron0x296b620()*0.746434);
}

double NNfunction_ss_cLcL::synapse0x296db20() {
   return (neuron0x296b960()*0.905291);
}

double NNfunction_ss_cLcL::synapse0x296de20() {
   return (neuron0x296bca0()*-0.493636);
}

double NNfunction_ss_cLcL::synapse0x296de60() {
   return (neuron0x296bfe0()*0.12356);
}

double NNfunction_ss_cLcL::synapse0x296e160() {
   return (neuron0x296c320()*-2.38318);
}

double NNfunction_ss_cLcL::synapse0x296e1a0() {
   return (neuron0x296c660()*3.54306);
}

double NNfunction_ss_cLcL::synapse0x296e4a0() {
   return (neuron0x296c9a0()*-2.47927);
}

double NNfunction_ss_cLcL::synapse0x296e4e0() {
   return (neuron0x296cce0()*-2.09343);
}

double NNfunction_ss_cLcL::synapse0x296e7e0() {
   return (neuron0x296d020()*-1.07607);
}

double NNfunction_ss_cLcL::synapse0x296e820() {
   return (neuron0x296d360()*-2.05297);
}

double NNfunction_ss_cLcL::synapse0x296eb20() {
   return (neuron0x296d8c0()*-1.68327);
}

double NNfunction_ss_cLcL::synapse0x296eb60() {
   return (neuron0x296dc00()*-2.48595);
}

double NNfunction_ss_cLcL::synapse0x296ee60() {
   return (neuron0x296df40()*-1.10601);
}

double NNfunction_ss_cLcL::synapse0x296eea0() {
   return (neuron0x296e280()*2.94629);
}

double NNfunction_ss_cLcL::synapse0x296c880() {
   return (neuron0x296e5c0()*1.06005);
}

double NNfunction_ss_cLcL::synapse0x296c8c0() {
   return (neuron0x296e900()*-1.43133);
}

double NNfunction_ss_cLcL::synapse0x297bc70() {
   return (neuron0x296ec40()*-7.54057);
}

double NNfunction_ss_cLcL::synapse0x297bff0() {
   return (neuron0x2969ff0()*-0.0181565);
}

double NNfunction_ss_cLcL::synapse0x297c030() {
   return (neuron0x296a2a0()*-1.9703);
}

double NNfunction_ss_cLcL::synapse0x297c070() {
   return (neuron0x296a5e0()*3.21555);
}

double NNfunction_ss_cLcL::synapse0x297c0b0() {
   return (neuron0x296a920()*-2.55363);
}

double NNfunction_ss_cLcL::synapse0x297c0f0() {
   return (neuron0x296ac60()*-0.785464);
}

double NNfunction_ss_cLcL::synapse0x297c130() {
   return (neuron0x296afa0()*0.347664);
}

double NNfunction_ss_cLcL::synapse0x297c170() {
   return (neuron0x296b2e0()*0.749645);
}

double NNfunction_ss_cLcL::synapse0x297c1b0() {
   return (neuron0x296b620()*-0.149862);
}

double NNfunction_ss_cLcL::synapse0x297c1f0() {
   return (neuron0x296b960()*1.11921);
}

double NNfunction_ss_cLcL::synapse0x297c230() {
   return (neuron0x296bca0()*-0.0883421);
}

double NNfunction_ss_cLcL::synapse0x297c270() {
   return (neuron0x296bfe0()*1.58779);
}

double NNfunction_ss_cLcL::synapse0x297c2b0() {
   return (neuron0x296c320()*0.398635);
}

double NNfunction_ss_cLcL::synapse0x297c2f0() {
   return (neuron0x296c660()*-6.32021);
}

double NNfunction_ss_cLcL::synapse0x297c330() {
   return (neuron0x296c9a0()*-0.081391);
}

double NNfunction_ss_cLcL::synapse0x297c370() {
   return (neuron0x296cce0()*-0.843658);
}

double NNfunction_ss_cLcL::synapse0x297c3b0() {
   return (neuron0x296d020()*-0.920721);
}

double NNfunction_ss_cLcL::synapse0x297be40() {
   return (neuron0x296d360()*0.143052);
}

double NNfunction_ss_cLcL::synapse0x297be80() {
   return (neuron0x296d8c0()*-0.123369);
}

double NNfunction_ss_cLcL::synapse0x297c500() {
   return (neuron0x296dc00()*-0.558465);
}

double NNfunction_ss_cLcL::synapse0x297c540() {
   return (neuron0x296df40()*-0.0131276);
}

double NNfunction_ss_cLcL::synapse0x297c580() {
   return (neuron0x296e280()*0.538618);
}

double NNfunction_ss_cLcL::synapse0x297c5c0() {
   return (neuron0x296e5c0()*0.459233);
}

double NNfunction_ss_cLcL::synapse0x297c600() {
   return (neuron0x296e900()*-0.653337);
}

double NNfunction_ss_cLcL::synapse0x297c640() {
   return (neuron0x296ec40()*0.268261);
}

double NNfunction_ss_cLcL::synapse0x297c9c0() {
   return (neuron0x2969ff0()*-0.545588);
}

double NNfunction_ss_cLcL::synapse0x297ca00() {
   return (neuron0x296a2a0()*-0.284992);
}

double NNfunction_ss_cLcL::synapse0x297ca40() {
   return (neuron0x296a5e0()*1.38704);
}

double NNfunction_ss_cLcL::synapse0x297ca80() {
   return (neuron0x296a920()*0.371838);
}

double NNfunction_ss_cLcL::synapse0x297cac0() {
   return (neuron0x296ac60()*-0.0841001);
}

double NNfunction_ss_cLcL::synapse0x297cb00() {
   return (neuron0x296afa0()*-0.163906);
}

double NNfunction_ss_cLcL::synapse0x297cb40() {
   return (neuron0x296b2e0()*0.636315);
}

double NNfunction_ss_cLcL::synapse0x297cb80() {
   return (neuron0x296b620()*0.228771);
}

double NNfunction_ss_cLcL::synapse0x297cbc0() {
   return (neuron0x296b960()*1.1513);
}

double NNfunction_ss_cLcL::synapse0x297cc00() {
   return (neuron0x296bca0()*-0.766183);
}

double NNfunction_ss_cLcL::synapse0x297cc40() {
   return (neuron0x296bfe0()*0.0903101);
}

double NNfunction_ss_cLcL::synapse0x297cc80() {
   return (neuron0x296c320()*1.59909);
}

double NNfunction_ss_cLcL::synapse0x297ccc0() {
   return (neuron0x296c660()*-0.2715);
}

double NNfunction_ss_cLcL::synapse0x297cd00() {
   return (neuron0x296c9a0()*1.11453);
}

double NNfunction_ss_cLcL::synapse0x297cd40() {
   return (neuron0x296cce0()*1.21883);
}

double NNfunction_ss_cLcL::synapse0x297cd80() {
   return (neuron0x296d020()*0.306156);
}

double NNfunction_ss_cLcL::synapse0x297c810() {
   return (neuron0x296d360()*0.184746);
}

double NNfunction_ss_cLcL::synapse0x297c850() {
   return (neuron0x296d8c0()*-0.221536);
}

double NNfunction_ss_cLcL::synapse0x297ced0() {
   return (neuron0x296dc00()*-0.452961);
}

double NNfunction_ss_cLcL::synapse0x297cf10() {
   return (neuron0x296df40()*0.253495);
}

double NNfunction_ss_cLcL::synapse0x297cf50() {
   return (neuron0x296e280()*-0.421349);
}

double NNfunction_ss_cLcL::synapse0x297cf90() {
   return (neuron0x296e5c0()*-0.57439);
}

double NNfunction_ss_cLcL::synapse0x297cfd0() {
   return (neuron0x296e900()*0.652049);
}

double NNfunction_ss_cLcL::synapse0x297d010() {
   return (neuron0x296ec40()*0.653715);
}

double NNfunction_ss_cLcL::synapse0x297d390() {
   return (neuron0x2969ff0()*-0.0769526);
}

double NNfunction_ss_cLcL::synapse0x297d3d0() {
   return (neuron0x296a2a0()*-0.874524);
}

double NNfunction_ss_cLcL::synapse0x297d410() {
   return (neuron0x296a5e0()*1.65556);
}

double NNfunction_ss_cLcL::synapse0x297d450() {
   return (neuron0x296a920()*1.02623);
}

double NNfunction_ss_cLcL::synapse0x297d490() {
   return (neuron0x296ac60()*1.12455);
}

double NNfunction_ss_cLcL::synapse0x297d4d0() {
   return (neuron0x296afa0()*0.144332);
}

double NNfunction_ss_cLcL::synapse0x297d510() {
   return (neuron0x296b2e0()*0.845561);
}

double NNfunction_ss_cLcL::synapse0x297d550() {
   return (neuron0x296b620()*0.416269);
}

double NNfunction_ss_cLcL::synapse0x297d590() {
   return (neuron0x296b960()*0.69326);
}

double NNfunction_ss_cLcL::synapse0x297d5d0() {
   return (neuron0x296bca0()*-0.0445324);
}

double NNfunction_ss_cLcL::synapse0x297d610() {
   return (neuron0x296bfe0()*0.133384);
}

double NNfunction_ss_cLcL::synapse0x297d650() {
   return (neuron0x296c320()*-1.17895);
}

double NNfunction_ss_cLcL::synapse0x297d690() {
   return (neuron0x296c660()*-1.96875);
}

double NNfunction_ss_cLcL::synapse0x297d6d0() {
   return (neuron0x296c9a0()*-0.361826);
}

double NNfunction_ss_cLcL::synapse0x297d710() {
   return (neuron0x296cce0()*-0.985412);
}

double NNfunction_ss_cLcL::synapse0x297d750() {
   return (neuron0x296d020()*-1.10967);
}

double NNfunction_ss_cLcL::synapse0x297d1e0() {
   return (neuron0x296d360()*0.54691);
}

double NNfunction_ss_cLcL::synapse0x297d220() {
   return (neuron0x296d8c0()*-0.0479442);
}

double NNfunction_ss_cLcL::synapse0x297d8a0() {
   return (neuron0x296dc00()*-0.316498);
}

double NNfunction_ss_cLcL::synapse0x297d8e0() {
   return (neuron0x296df40()*-0.0522886);
}

double NNfunction_ss_cLcL::synapse0x297d920() {
   return (neuron0x296e280()*0.886102);
}

double NNfunction_ss_cLcL::synapse0x297d960() {
   return (neuron0x296e5c0()*-0.440467);
}

double NNfunction_ss_cLcL::synapse0x297d9a0() {
   return (neuron0x296e900()*-1.20558);
}

double NNfunction_ss_cLcL::synapse0x297d9e0() {
   return (neuron0x296ec40()*-0.482586);
}

double NNfunction_ss_cLcL::synapse0x297dd60() {
   return (neuron0x2969ff0()*0.206688);
}

double NNfunction_ss_cLcL::synapse0x297dda0() {
   return (neuron0x296a2a0()*0.0814169);
}

double NNfunction_ss_cLcL::synapse0x297dde0() {
   return (neuron0x296a5e0()*0.609351);
}

double NNfunction_ss_cLcL::synapse0x297de20() {
   return (neuron0x296a920()*-0.741217);
}

double NNfunction_ss_cLcL::synapse0x297de60() {
   return (neuron0x296ac60()*0.263351);
}

double NNfunction_ss_cLcL::synapse0x297dea0() {
   return (neuron0x296afa0()*0.116128);
}

double NNfunction_ss_cLcL::synapse0x297dee0() {
   return (neuron0x296b2e0()*-0.0202736);
}

double NNfunction_ss_cLcL::synapse0x297df20() {
   return (neuron0x296b620()*0.167443);
}

double NNfunction_ss_cLcL::synapse0x297df60() {
   return (neuron0x296b960()*-0.150591);
}

double NNfunction_ss_cLcL::synapse0x297dfa0() {
   return (neuron0x296bca0()*-0.237048);
}

double NNfunction_ss_cLcL::synapse0x297dfe0() {
   return (neuron0x296bfe0()*0.139763);
}

double NNfunction_ss_cLcL::synapse0x297e020() {
   return (neuron0x296c320()*-0.288011);
}

double NNfunction_ss_cLcL::synapse0x297e060() {
   return (neuron0x296c660()*-1.02605);
}

double NNfunction_ss_cLcL::synapse0x297e0a0() {
   return (neuron0x296c9a0()*-0.767891);
}

double NNfunction_ss_cLcL::synapse0x297e0e0() {
   return (neuron0x296cce0()*-1.48619);
}

double NNfunction_ss_cLcL::synapse0x297e120() {
   return (neuron0x296d020()*-0.535166);
}

double NNfunction_ss_cLcL::synapse0x297dbb0() {
   return (neuron0x296d360()*-0.281535);
}

double NNfunction_ss_cLcL::synapse0x297dbf0() {
   return (neuron0x296d8c0()*-0.341541);
}

double NNfunction_ss_cLcL::synapse0x297e270() {
   return (neuron0x296dc00()*-0.547981);
}

double NNfunction_ss_cLcL::synapse0x297e2b0() {
   return (neuron0x296df40()*-0.457301);
}

double NNfunction_ss_cLcL::synapse0x297e2f0() {
   return (neuron0x296e280()*0.632584);
}

double NNfunction_ss_cLcL::synapse0x297e330() {
   return (neuron0x296e5c0()*-0.160804);
}

double NNfunction_ss_cLcL::synapse0x297e370() {
   return (neuron0x296e900()*-0.367776);
}

double NNfunction_ss_cLcL::synapse0x297e3b0() {
   return (neuron0x296ec40()*-0.6802);
}

double NNfunction_ss_cLcL::synapse0x297e730() {
   return (neuron0x2969ff0()*-0.273327);
}

double NNfunction_ss_cLcL::synapse0x297e770() {
   return (neuron0x296a2a0()*-1.23402);
}

double NNfunction_ss_cLcL::synapse0x297e7b0() {
   return (neuron0x296a5e0()*1.07426);
}

double NNfunction_ss_cLcL::synapse0x297e7f0() {
   return (neuron0x296a920()*-0.584984);
}

double NNfunction_ss_cLcL::synapse0x297e830() {
   return (neuron0x296ac60()*0.480208);
}

double NNfunction_ss_cLcL::synapse0x297e870() {
   return (neuron0x296afa0()*-0.790241);
}

double NNfunction_ss_cLcL::synapse0x297e8b0() {
   return (neuron0x296b2e0()*0.183309);
}

double NNfunction_ss_cLcL::synapse0x297e8f0() {
   return (neuron0x296b620()*-0.479098);
}

double NNfunction_ss_cLcL::synapse0x297e930() {
   return (neuron0x296b960()*-0.406993);
}

double NNfunction_ss_cLcL::synapse0x2976af0() {
   return (neuron0x296bca0()*0.0119867);
}

double NNfunction_ss_cLcL::synapse0x2976b30() {
   return (neuron0x296bfe0()*-0.212078);
}

double NNfunction_ss_cLcL::synapse0x2976b70() {
   return (neuron0x296c320()*-0.232617);
}

double NNfunction_ss_cLcL::synapse0x2976bb0() {
   return (neuron0x296c660()*-1.57129);
}

double NNfunction_ss_cLcL::synapse0x2976bf0() {
   return (neuron0x296c9a0()*-0.327118);
}

double NNfunction_ss_cLcL::synapse0x2976c30() {
   return (neuron0x296cce0()*-1.03851);
}

double NNfunction_ss_cLcL::synapse0x2976c70() {
   return (neuron0x296d020()*0.101286);
}

double NNfunction_ss_cLcL::synapse0x297e580() {
   return (neuron0x296d360()*-0.83554);
}

double NNfunction_ss_cLcL::synapse0x297e5c0() {
   return (neuron0x296d8c0()*-0.718176);
}

double NNfunction_ss_cLcL::synapse0x2976dc0() {
   return (neuron0x296dc00()*-0.776287);
}

double NNfunction_ss_cLcL::synapse0x2976e00() {
   return (neuron0x296df40()*0.00409192);
}

double NNfunction_ss_cLcL::synapse0x2976e40() {
   return (neuron0x296e280()*1.25585);
}

double NNfunction_ss_cLcL::synapse0x2976e80() {
   return (neuron0x296e5c0()*0.91009);
}

double NNfunction_ss_cLcL::synapse0x2976ec0() {
   return (neuron0x296e900()*0.798831);
}

double NNfunction_ss_cLcL::synapse0x2976f00() {
   return (neuron0x296ec40()*-1.69351);
}

double NNfunction_ss_cLcL::synapse0x2977280() {
   return (neuron0x2969ff0()*0.195331);
}

double NNfunction_ss_cLcL::synapse0x29772c0() {
   return (neuron0x296a2a0()*0.210224);
}

double NNfunction_ss_cLcL::synapse0x2977300() {
   return (neuron0x296a5e0()*-0.781661);
}

double NNfunction_ss_cLcL::synapse0x2977340() {
   return (neuron0x296a920()*-2.33973);
}

double NNfunction_ss_cLcL::synapse0x2977380() {
   return (neuron0x296ac60()*0.103879);
}

double NNfunction_ss_cLcL::synapse0x29773c0() {
   return (neuron0x296afa0()*0.268762);
}

double NNfunction_ss_cLcL::synapse0x2977400() {
   return (neuron0x296b2e0()*-0.0187719);
}

double NNfunction_ss_cLcL::synapse0x2977440() {
   return (neuron0x296b620()*0.292884);
}

double NNfunction_ss_cLcL::synapse0x2977480() {
   return (neuron0x296b960()*0.249961);
}

double NNfunction_ss_cLcL::synapse0x29774c0() {
   return (neuron0x296bca0()*0.218302);
}

double NNfunction_ss_cLcL::synapse0x2977500() {
   return (neuron0x296bfe0()*0.189025);
}

double NNfunction_ss_cLcL::synapse0x2977540() {
   return (neuron0x296c320()*-0.159983);
}

double NNfunction_ss_cLcL::synapse0x2977580() {
   return (neuron0x296c660()*1.06627);
}

double NNfunction_ss_cLcL::synapse0x29775c0() {
   return (neuron0x296c9a0()*-0.0471478);
}

double NNfunction_ss_cLcL::synapse0x2977600() {
   return (neuron0x296cce0()*0.352076);
}

double NNfunction_ss_cLcL::synapse0x2977640() {
   return (neuron0x296d020()*-0.0245826);
}

double NNfunction_ss_cLcL::synapse0x29770d0() {
   return (neuron0x296d360()*0.0659048);
}

double NNfunction_ss_cLcL::synapse0x2977110() {
   return (neuron0x296d8c0()*0.327457);
}

double NNfunction_ss_cLcL::synapse0x2977790() {
   return (neuron0x296dc00()*0.420521);
}

double NNfunction_ss_cLcL::synapse0x29777d0() {
   return (neuron0x296df40()*0.200918);
}

double NNfunction_ss_cLcL::synapse0x2977810() {
   return (neuron0x296e280()*0.284634);
}

double NNfunction_ss_cLcL::synapse0x2977850() {
   return (neuron0x296e5c0()*0.137233);
}

double NNfunction_ss_cLcL::synapse0x2977890() {
   return (neuron0x296e900()*-0.194474);
}

double NNfunction_ss_cLcL::synapse0x29778d0() {
   return (neuron0x296ec40()*0.147669);
}

double NNfunction_ss_cLcL::synapse0x2977aa0() {
   return (neuron0x2969ff0()*-1.59106);
}

double NNfunction_ss_cLcL::synapse0x2980b30() {
   return (neuron0x296a2a0()*-1.91348);
}

double NNfunction_ss_cLcL::synapse0x2980b70() {
   return (neuron0x296a5e0()*-2.11579);
}

double NNfunction_ss_cLcL::synapse0x2980bb0() {
   return (neuron0x296a920()*0.586341);
}

double NNfunction_ss_cLcL::synapse0x2980bf0() {
   return (neuron0x296ac60()*-1.61836);
}

double NNfunction_ss_cLcL::synapse0x2980c30() {
   return (neuron0x296afa0()*0.154544);
}

double NNfunction_ss_cLcL::synapse0x2980c70() {
   return (neuron0x296b2e0()*-0.142878);
}

double NNfunction_ss_cLcL::synapse0x2980cb0() {
   return (neuron0x296b620()*0.331782);
}

double NNfunction_ss_cLcL::synapse0x2980cf0() {
   return (neuron0x296b960()*-0.711155);
}

double NNfunction_ss_cLcL::synapse0x2980d30() {
   return (neuron0x296bca0()*0.114051);
}

double NNfunction_ss_cLcL::synapse0x2980d70() {
   return (neuron0x296bfe0()*0.602554);
}

double NNfunction_ss_cLcL::synapse0x2980db0() {
   return (neuron0x296c320()*-1.18317);
}

double NNfunction_ss_cLcL::synapse0x2980df0() {
   return (neuron0x296c660()*1.22619);
}

double NNfunction_ss_cLcL::synapse0x2980e30() {
   return (neuron0x296c9a0()*-0.669814);
}

double NNfunction_ss_cLcL::synapse0x2980e70() {
   return (neuron0x296cce0()*-0.620113);
}

double NNfunction_ss_cLcL::synapse0x2980eb0() {
   return (neuron0x296d020()*0.151364);
}

double NNfunction_ss_cLcL::synapse0x2980980() {
   return (neuron0x296d360()*-1.0615);
}

double NNfunction_ss_cLcL::synapse0x29809c0() {
   return (neuron0x296d8c0()*-0.341778);
}

double NNfunction_ss_cLcL::synapse0x2981000() {
   return (neuron0x296dc00()*0.0470339);
}

double NNfunction_ss_cLcL::synapse0x2981040() {
   return (neuron0x296df40()*-0.533968);
}

double NNfunction_ss_cLcL::synapse0x2981080() {
   return (neuron0x296e280()*0.304818);
}

double NNfunction_ss_cLcL::synapse0x29810c0() {
   return (neuron0x296e5c0()*-0.610725);
}

double NNfunction_ss_cLcL::synapse0x2981100() {
   return (neuron0x296e900()*-1.88261);
}

double NNfunction_ss_cLcL::synapse0x2981140() {
   return (neuron0x296ec40()*0.813452);
}

double NNfunction_ss_cLcL::synapse0x29814c0() {
   return (neuron0x2969ff0()*-0.0732989);
}

double NNfunction_ss_cLcL::synapse0x2981500() {
   return (neuron0x296a2a0()*6.19077);
}

double NNfunction_ss_cLcL::synapse0x2981540() {
   return (neuron0x296a5e0()*-3.41568);
}

double NNfunction_ss_cLcL::synapse0x2981580() {
   return (neuron0x296a920()*1.5721);
}

double NNfunction_ss_cLcL::synapse0x29815c0() {
   return (neuron0x296ac60()*-2.93958);
}

double NNfunction_ss_cLcL::synapse0x2981600() {
   return (neuron0x296afa0()*-0.611896);
}

double NNfunction_ss_cLcL::synapse0x2981640() {
   return (neuron0x296b2e0()*1.27363);
}

double NNfunction_ss_cLcL::synapse0x2981680() {
   return (neuron0x296b620()*0.11104);
}

double NNfunction_ss_cLcL::synapse0x29816c0() {
   return (neuron0x296b960()*1.32599);
}

double NNfunction_ss_cLcL::synapse0x2981700() {
   return (neuron0x296bca0()*0.0255723);
}

double NNfunction_ss_cLcL::synapse0x2981740() {
   return (neuron0x296bfe0()*-1.0355);
}

double NNfunction_ss_cLcL::synapse0x2981780() {
   return (neuron0x296c320()*1.84896);
}

double NNfunction_ss_cLcL::synapse0x29817c0() {
   return (neuron0x296c660()*0.837338);
}

double NNfunction_ss_cLcL::synapse0x2981800() {
   return (neuron0x296c9a0()*2.49251);
}

double NNfunction_ss_cLcL::synapse0x2981840() {
   return (neuron0x296cce0()*1.34349);
}

double NNfunction_ss_cLcL::synapse0x2981880() {
   return (neuron0x296d020()*0.58284);
}

double NNfunction_ss_cLcL::synapse0x2981310() {
   return (neuron0x296d360()*1.69077);
}

double NNfunction_ss_cLcL::synapse0x2981350() {
   return (neuron0x296d8c0()*0.499328);
}

double NNfunction_ss_cLcL::synapse0x29819d0() {
   return (neuron0x296dc00()*3.3803);
}

double NNfunction_ss_cLcL::synapse0x2981a10() {
   return (neuron0x296df40()*1.98049);
}

double NNfunction_ss_cLcL::synapse0x2981a50() {
   return (neuron0x296e280()*3.99466);
}

double NNfunction_ss_cLcL::synapse0x2981a90() {
   return (neuron0x296e5c0()*0.404359);
}

double NNfunction_ss_cLcL::synapse0x2981ad0() {
   return (neuron0x296e900()*-2.77355);
}

double NNfunction_ss_cLcL::synapse0x2981b10() {
   return (neuron0x296ec40()*2.20813);
}

double NNfunction_ss_cLcL::synapse0x2981e90() {
   return (neuron0x2969ff0()*-0.136212);
}

double NNfunction_ss_cLcL::synapse0x2981ed0() {
   return (neuron0x296a2a0()*-0.12526);
}

double NNfunction_ss_cLcL::synapse0x2981f10() {
   return (neuron0x296a5e0()*-0.601354);
}

double NNfunction_ss_cLcL::synapse0x2981f50() {
   return (neuron0x296a920()*0.150387);
}

double NNfunction_ss_cLcL::synapse0x2981f90() {
   return (neuron0x296ac60()*-0.31761);
}

double NNfunction_ss_cLcL::synapse0x2981fd0() {
   return (neuron0x296afa0()*-0.102645);
}

double NNfunction_ss_cLcL::synapse0x2982010() {
   return (neuron0x296b2e0()*-0.040402);
}

double NNfunction_ss_cLcL::synapse0x2982050() {
   return (neuron0x296b620()*-0.271004);
}

double NNfunction_ss_cLcL::synapse0x2982090() {
   return (neuron0x296b960()*0.205719);
}

double NNfunction_ss_cLcL::synapse0x29820d0() {
   return (neuron0x296bca0()*-0.0184049);
}

double NNfunction_ss_cLcL::synapse0x2982110() {
   return (neuron0x296bfe0()*-0.143234);
}

double NNfunction_ss_cLcL::synapse0x2982150() {
   return (neuron0x296c320()*0.195738);
}

double NNfunction_ss_cLcL::synapse0x2982190() {
   return (neuron0x296c660()*4.76249);
}

double NNfunction_ss_cLcL::synapse0x29821d0() {
   return (neuron0x296c9a0()*0.662826);
}

double NNfunction_ss_cLcL::synapse0x2982210() {
   return (neuron0x296cce0()*0.164623);
}

double NNfunction_ss_cLcL::synapse0x2982250() {
   return (neuron0x296d020()*-0.146894);
}

double NNfunction_ss_cLcL::synapse0x2981ce0() {
   return (neuron0x296d360()*0.540289);
}

double NNfunction_ss_cLcL::synapse0x2981d20() {
   return (neuron0x296d8c0()*0.269015);
}

double NNfunction_ss_cLcL::synapse0x29823a0() {
   return (neuron0x296dc00()*0.115852);
}

double NNfunction_ss_cLcL::synapse0x29823e0() {
   return (neuron0x296df40()*0.0289662);
}

double NNfunction_ss_cLcL::synapse0x2982420() {
   return (neuron0x296e280()*-0.544077);
}

double NNfunction_ss_cLcL::synapse0x2982460() {
   return (neuron0x296e5c0()*0.0210681);
}

double NNfunction_ss_cLcL::synapse0x29824a0() {
   return (neuron0x296e900()*0.11321);
}

double NNfunction_ss_cLcL::synapse0x29824e0() {
   return (neuron0x296ec40()*0.409766);
}

double NNfunction_ss_cLcL::synapse0x2982860() {
   return (neuron0x2969ff0()*0.158418);
}

double NNfunction_ss_cLcL::synapse0x29828a0() {
   return (neuron0x296a2a0()*-0.00403028);
}

double NNfunction_ss_cLcL::synapse0x29828e0() {
   return (neuron0x296a5e0()*0.0069951);
}

double NNfunction_ss_cLcL::synapse0x2982920() {
   return (neuron0x296a920()*-0.137615);
}

double NNfunction_ss_cLcL::synapse0x2982960() {
   return (neuron0x296ac60()*-0.115829);
}

double NNfunction_ss_cLcL::synapse0x29829a0() {
   return (neuron0x296afa0()*-0.091399);
}

double NNfunction_ss_cLcL::synapse0x29829e0() {
   return (neuron0x296b2e0()*0.595426);
}

double NNfunction_ss_cLcL::synapse0x2982a20() {
   return (neuron0x296b620()*-0.42059);
}

double NNfunction_ss_cLcL::synapse0x2982a60() {
   return (neuron0x296b960()*0.39161);
}

double NNfunction_ss_cLcL::synapse0x2982aa0() {
   return (neuron0x296bca0()*-0.601557);
}

double NNfunction_ss_cLcL::synapse0x2982ae0() {
   return (neuron0x296bfe0()*-0.530447);
}

double NNfunction_ss_cLcL::synapse0x2982b20() {
   return (neuron0x296c320()*-0.130961);
}

double NNfunction_ss_cLcL::synapse0x2982b60() {
   return (neuron0x296c660()*0.317722);
}

double NNfunction_ss_cLcL::synapse0x2982ba0() {
   return (neuron0x296c9a0()*-0.714493);
}

double NNfunction_ss_cLcL::synapse0x2982be0() {
   return (neuron0x296cce0()*-0.738383);
}

double NNfunction_ss_cLcL::synapse0x2982c20() {
   return (neuron0x296d020()*0.190712);
}

double NNfunction_ss_cLcL::synapse0x29826b0() {
   return (neuron0x296d360()*-0.0697809);
}

double NNfunction_ss_cLcL::synapse0x29826f0() {
   return (neuron0x296d8c0()*-0.133851);
}

double NNfunction_ss_cLcL::synapse0x2982d70() {
   return (neuron0x296dc00()*-0.271489);
}

double NNfunction_ss_cLcL::synapse0x2982db0() {
   return (neuron0x296df40()*-0.693349);
}

double NNfunction_ss_cLcL::synapse0x2982df0() {
   return (neuron0x296e280()*0.797296);
}

double NNfunction_ss_cLcL::synapse0x2982e30() {
   return (neuron0x296e5c0()*0.114225);
}

double NNfunction_ss_cLcL::synapse0x2982e70() {
   return (neuron0x296e900()*0.24656);
}

double NNfunction_ss_cLcL::synapse0x2982eb0() {
   return (neuron0x296ec40()*-1.33298);
}

double NNfunction_ss_cLcL::synapse0x2983230() {
   return (neuron0x2969ff0()*0.00519196);
}

double NNfunction_ss_cLcL::synapse0x2983270() {
   return (neuron0x296a2a0()*-0.0257823);
}

double NNfunction_ss_cLcL::synapse0x29832b0() {
   return (neuron0x296a5e0()*-0.265309);
}

double NNfunction_ss_cLcL::synapse0x29832f0() {
   return (neuron0x296a920()*0.772014);
}

double NNfunction_ss_cLcL::synapse0x2983330() {
   return (neuron0x296ac60()*0.267236);
}

double NNfunction_ss_cLcL::synapse0x2983370() {
   return (neuron0x296afa0()*-0.0573209);
}

double NNfunction_ss_cLcL::synapse0x29833b0() {
   return (neuron0x296b2e0()*0.365632);
}

double NNfunction_ss_cLcL::synapse0x29833f0() {
   return (neuron0x296b620()*0.321644);
}

double NNfunction_ss_cLcL::synapse0x2983430() {
   return (neuron0x296b960()*0.117178);
}

double NNfunction_ss_cLcL::synapse0x2983470() {
   return (neuron0x296bca0()*0.235523);
}

double NNfunction_ss_cLcL::synapse0x29834b0() {
   return (neuron0x296bfe0()*-0.1132);
}

double NNfunction_ss_cLcL::synapse0x29834f0() {
   return (neuron0x296c320()*-0.688956);
}

double NNfunction_ss_cLcL::synapse0x2983530() {
   return (neuron0x296c660()*-0.206302);
}

double NNfunction_ss_cLcL::synapse0x2983570() {
   return (neuron0x296c9a0()*-2.02033);
}

double NNfunction_ss_cLcL::synapse0x29835b0() {
   return (neuron0x296cce0()*-0.471958);
}

double NNfunction_ss_cLcL::synapse0x29835f0() {
   return (neuron0x296d020()*0.0123373);
}

double NNfunction_ss_cLcL::synapse0x2983080() {
   return (neuron0x296d360()*-0.313354);
}

double NNfunction_ss_cLcL::synapse0x29830c0() {
   return (neuron0x296d8c0()*-0.444588);
}

double NNfunction_ss_cLcL::synapse0x2983740() {
   return (neuron0x296dc00()*-0.981719);
}

double NNfunction_ss_cLcL::synapse0x2983780() {
   return (neuron0x296df40()*-0.0297909);
}

double NNfunction_ss_cLcL::synapse0x29837c0() {
   return (neuron0x296e280()*0.297062);
}

double NNfunction_ss_cLcL::synapse0x2983800() {
   return (neuron0x296e5c0()*-0.189318);
}

double NNfunction_ss_cLcL::synapse0x2983840() {
   return (neuron0x296e900()*0.208116);
}

double NNfunction_ss_cLcL::synapse0x2983880() {
   return (neuron0x296ec40()*-0.301175);
}

double NNfunction_ss_cLcL::synapse0x2983c00() {
   return (neuron0x2969ff0()*0.488469);
}

double NNfunction_ss_cLcL::synapse0x2983c40() {
   return (neuron0x296a2a0()*-5.16522);
}

double NNfunction_ss_cLcL::synapse0x2983c80() {
   return (neuron0x296a5e0()*3.92084);
}

double NNfunction_ss_cLcL::synapse0x2983cc0() {
   return (neuron0x296a920()*-4.42531);
}

double NNfunction_ss_cLcL::synapse0x2983d00() {
   return (neuron0x296ac60()*2.9272);
}

double NNfunction_ss_cLcL::synapse0x2983d40() {
   return (neuron0x296afa0()*2.15551);
}

double NNfunction_ss_cLcL::synapse0x2983d80() {
   return (neuron0x296b2e0()*0.09417);
}

double NNfunction_ss_cLcL::synapse0x2983dc0() {
   return (neuron0x296b620()*3.22661);
}

double NNfunction_ss_cLcL::synapse0x2983e00() {
   return (neuron0x296b960()*1.5112);
}

double NNfunction_ss_cLcL::synapse0x2983e40() {
   return (neuron0x296bca0()*0.012477);
}

double NNfunction_ss_cLcL::synapse0x2983e80() {
   return (neuron0x296bfe0()*2.72532);
}

double NNfunction_ss_cLcL::synapse0x2983ec0() {
   return (neuron0x296c320()*-1.05569);
}

double NNfunction_ss_cLcL::synapse0x2983f00() {
   return (neuron0x296c660()*-1.76651);
}

double NNfunction_ss_cLcL::synapse0x2983f40() {
   return (neuron0x296c9a0()*-1.92194);
}

double NNfunction_ss_cLcL::synapse0x2983f80() {
   return (neuron0x296cce0()*0.884845);
}

double NNfunction_ss_cLcL::synapse0x2983fc0() {
   return (neuron0x296d020()*-0.36375);
}

double NNfunction_ss_cLcL::synapse0x2983a50() {
   return (neuron0x296d360()*-2.13047);
}

double NNfunction_ss_cLcL::synapse0x2983a90() {
   return (neuron0x296d8c0()*2.07544);
}

double NNfunction_ss_cLcL::synapse0x2984110() {
   return (neuron0x296dc00()*-2.03969);
}

double NNfunction_ss_cLcL::synapse0x2984150() {
   return (neuron0x296df40()*-0.501126);
}

double NNfunction_ss_cLcL::synapse0x2984190() {
   return (neuron0x296e280()*5.87705);
}

double NNfunction_ss_cLcL::synapse0x29841d0() {
   return (neuron0x296e5c0()*0.115317);
}

double NNfunction_ss_cLcL::synapse0x2984210() {
   return (neuron0x296e900()*-2.44269);
}

double NNfunction_ss_cLcL::synapse0x2984250() {
   return (neuron0x296ec40()*0.568572);
}

double NNfunction_ss_cLcL::synapse0x29845d0() {
   return (neuron0x2969ff0()*0.452192);
}

double NNfunction_ss_cLcL::synapse0x2984610() {
   return (neuron0x296a2a0()*0.134511);
}

double NNfunction_ss_cLcL::synapse0x2984650() {
   return (neuron0x296a5e0()*0.0864586);
}

double NNfunction_ss_cLcL::synapse0x2984690() {
   return (neuron0x296a920()*0.921934);
}

double NNfunction_ss_cLcL::synapse0x29846d0() {
   return (neuron0x296ac60()*-1.01831);
}

double NNfunction_ss_cLcL::synapse0x2984710() {
   return (neuron0x296afa0()*0.462863);
}

double NNfunction_ss_cLcL::synapse0x2984750() {
   return (neuron0x296b2e0()*0.00540328);
}

double NNfunction_ss_cLcL::synapse0x2984790() {
   return (neuron0x296b620()*-0.428486);
}

double NNfunction_ss_cLcL::synapse0x29847d0() {
   return (neuron0x296b960()*-0.0505707);
}

double NNfunction_ss_cLcL::synapse0x2984810() {
   return (neuron0x296bca0()*-0.459037);
}

double NNfunction_ss_cLcL::synapse0x2984850() {
   return (neuron0x296bfe0()*-0.228405);
}

double NNfunction_ss_cLcL::synapse0x2984890() {
   return (neuron0x296c320()*1.07339);
}

double NNfunction_ss_cLcL::synapse0x29848d0() {
   return (neuron0x296c660()*-2.08197);
}

double NNfunction_ss_cLcL::synapse0x2984910() {
   return (neuron0x296c9a0()*0.717357);
}

double NNfunction_ss_cLcL::synapse0x2984950() {
   return (neuron0x296cce0()*1.45806);
}

double NNfunction_ss_cLcL::synapse0x2984990() {
   return (neuron0x296d020()*-0.424289);
}

double NNfunction_ss_cLcL::synapse0x2984420() {
   return (neuron0x296d360()*0.343069);
}

double NNfunction_ss_cLcL::synapse0x2984460() {
   return (neuron0x296d8c0()*0.173969);
}

double NNfunction_ss_cLcL::synapse0x2984ae0() {
   return (neuron0x296dc00()*0.134663);
}

double NNfunction_ss_cLcL::synapse0x2984b20() {
   return (neuron0x296df40()*0.167406);
}

double NNfunction_ss_cLcL::synapse0x2984b60() {
   return (neuron0x296e280()*-0.665534);
}

double NNfunction_ss_cLcL::synapse0x2984ba0() {
   return (neuron0x296e5c0()*-0.547938);
}

double NNfunction_ss_cLcL::synapse0x2984be0() {
   return (neuron0x296e900()*0.0907633);
}

double NNfunction_ss_cLcL::synapse0x2984c20() {
   return (neuron0x296ec40()*1.91416);
}

double NNfunction_ss_cLcL::synapse0x2984fa0() {
   return (neuron0x2969ff0()*-0.185647);
}

double NNfunction_ss_cLcL::synapse0x2984fe0() {
   return (neuron0x296a2a0()*-0.0174742);
}

double NNfunction_ss_cLcL::synapse0x2985020() {
   return (neuron0x296a5e0()*-0.279698);
}

double NNfunction_ss_cLcL::synapse0x2985060() {
   return (neuron0x296a920()*1.38168);
}

double NNfunction_ss_cLcL::synapse0x29850a0() {
   return (neuron0x296ac60()*-0.0966437);
}

double NNfunction_ss_cLcL::synapse0x29850e0() {
   return (neuron0x296afa0()*-0.0639115);
}

double NNfunction_ss_cLcL::synapse0x2985120() {
   return (neuron0x296b2e0()*-0.228416);
}

double NNfunction_ss_cLcL::synapse0x2985160() {
   return (neuron0x296b620()*-0.0920713);
}

double NNfunction_ss_cLcL::synapse0x29851a0() {
   return (neuron0x296b960()*0.011854);
}

double NNfunction_ss_cLcL::synapse0x29851e0() {
   return (neuron0x296bca0()*-0.0721666);
}

double NNfunction_ss_cLcL::synapse0x2985220() {
   return (neuron0x296bfe0()*0.0390961);
}

double NNfunction_ss_cLcL::synapse0x2985260() {
   return (neuron0x296c320()*-0.0581369);
}

double NNfunction_ss_cLcL::synapse0x29852a0() {
   return (neuron0x296c660()*5.84384);
}

double NNfunction_ss_cLcL::synapse0x29852e0() {
   return (neuron0x296c9a0()*2.17132e-05);
}

double NNfunction_ss_cLcL::synapse0x2985320() {
   return (neuron0x296cce0()*-0.107738);
}

double NNfunction_ss_cLcL::synapse0x2985360() {
   return (neuron0x296d020()*-0.249828);
}

double NNfunction_ss_cLcL::synapse0x2984df0() {
   return (neuron0x296d360()*-0.0965472);
}

double NNfunction_ss_cLcL::synapse0x2984e30() {
   return (neuron0x296d8c0()*0.112202);
}

double NNfunction_ss_cLcL::synapse0x29854b0() {
   return (neuron0x296dc00()*-0.105698);
}

double NNfunction_ss_cLcL::synapse0x29854f0() {
   return (neuron0x296df40()*0.00687191);
}

double NNfunction_ss_cLcL::synapse0x2985530() {
   return (neuron0x296e280()*-0.166403);
}

double NNfunction_ss_cLcL::synapse0x2985570() {
   return (neuron0x296e5c0()*0.0790357);
}

double NNfunction_ss_cLcL::synapse0x29855b0() {
   return (neuron0x296e900()*0.142158);
}

double NNfunction_ss_cLcL::synapse0x29855f0() {
   return (neuron0x296ec40()*-0.125979);
}

double NNfunction_ss_cLcL::synapse0x2985970() {
   return (neuron0x2969ff0()*0.398134);
}

double NNfunction_ss_cLcL::synapse0x2979f40() {
   return (neuron0x296a2a0()*2.42327);
}

double NNfunction_ss_cLcL::synapse0x2979f80() {
   return (neuron0x296a5e0()*-4.08823);
}

double NNfunction_ss_cLcL::synapse0x2979fc0() {
   return (neuron0x296a920()*-0.176178);
}

double NNfunction_ss_cLcL::synapse0x297a210() {
   return (neuron0x296ac60()*-0.161845);
}

double NNfunction_ss_cLcL::synapse0x297a250() {
   return (neuron0x296afa0()*-0.724703);
}

double NNfunction_ss_cLcL::synapse0x297a290() {
   return (neuron0x296b2e0()*0.0796742);
}

double NNfunction_ss_cLcL::synapse0x297a4e0() {
   return (neuron0x296b620()*-1.24875);
}

double NNfunction_ss_cLcL::synapse0x297a520() {
   return (neuron0x296b960()*-0.399924);
}

double NNfunction_ss_cLcL::synapse0x297a770() {
   return (neuron0x296bca0()*-0.570354);
}

double NNfunction_ss_cLcL::synapse0x297a7b0() {
   return (neuron0x296bfe0()*-0.25536);
}

double NNfunction_ss_cLcL::synapse0x297a7f0() {
   return (neuron0x296c320()*-0.919247);
}

double NNfunction_ss_cLcL::synapse0x297aa40() {
   return (neuron0x296c660()*-0.516411);
}

double NNfunction_ss_cLcL::synapse0x297aa80() {
   return (neuron0x296c9a0()*1.34062);
}

double NNfunction_ss_cLcL::synapse0x297acd0() {
   return (neuron0x296cce0()*0.709044);
}

double NNfunction_ss_cLcL::synapse0x297ad10() {
   return (neuron0x296d020()*-1.62965);
}

double NNfunction_ss_cLcL::synapse0x29857c0() {
   return (neuron0x296d360()*-0.951746);
}

double NNfunction_ss_cLcL::synapse0x2985800() {
   return (neuron0x296d8c0()*1.75175);
}

double NNfunction_ss_cLcL::synapse0x297ae60() {
   return (neuron0x296dc00()*0.166886);
}

double NNfunction_ss_cLcL::synapse0x297b370() {
   return (neuron0x296df40()*0.787464);
}

double NNfunction_ss_cLcL::synapse0x297b3b0() {
   return (neuron0x296e280()*-2.72978);
}

double NNfunction_ss_cLcL::synapse0x297b3f0() {
   return (neuron0x296e5c0()*-0.826252);
}

double NNfunction_ss_cLcL::synapse0x297b640() {
   return (neuron0x296e900()*-2.0222);
}

double NNfunction_ss_cLcL::synapse0x297b680() {
   return (neuron0x296ec40()*2.14871);
}

double NNfunction_ss_cLcL::synapse0x297af30() {
   return (neuron0x2969ff0()*-0.462867);
}

double NNfunction_ss_cLcL::synapse0x297af70() {
   return (neuron0x296a2a0()*1.57173);
}

double NNfunction_ss_cLcL::synapse0x297afb0() {
   return (neuron0x296a5e0()*0.133224);
}

double NNfunction_ss_cLcL::synapse0x297aff0() {
   return (neuron0x296a920()*0.755243);
}

double NNfunction_ss_cLcL::synapse0x297b970() {
   return (neuron0x296ac60()*-0.0463924);
}

double NNfunction_ss_cLcL::synapse0x2987cc0() {
   return (neuron0x296afa0()*-0.208379);
}

double NNfunction_ss_cLcL::synapse0x2987d00() {
   return (neuron0x296b2e0()*-1.00637);
}

double NNfunction_ss_cLcL::synapse0x2987d40() {
   return (neuron0x296b620()*-1.05022);
}

double NNfunction_ss_cLcL::synapse0x2987d80() {
   return (neuron0x296b960()*-1.37478);
}

double NNfunction_ss_cLcL::synapse0x2987dc0() {
   return (neuron0x296bca0()*-0.511793);
}

double NNfunction_ss_cLcL::synapse0x2987e00() {
   return (neuron0x296bfe0()*0.440004);
}

double NNfunction_ss_cLcL::synapse0x2987e40() {
   return (neuron0x296c320()*0.946458);
}

double NNfunction_ss_cLcL::synapse0x2987e80() {
   return (neuron0x296c660()*-1.672);
}

double NNfunction_ss_cLcL::synapse0x2987ec0() {
   return (neuron0x296c9a0()*1.02552);
}

double NNfunction_ss_cLcL::synapse0x2987f00() {
   return (neuron0x296cce0()*-0.0539192);
}

double NNfunction_ss_cLcL::synapse0x2987f40() {
   return (neuron0x296d020()*0.62261);
}

double NNfunction_ss_cLcL::synapse0x297b850() {
   return (neuron0x296d360()*2.4052);
}

double NNfunction_ss_cLcL::synapse0x297b890() {
   return (neuron0x296d8c0()*0.581351);
}

double NNfunction_ss_cLcL::synapse0x2988090() {
   return (neuron0x296dc00()*0.519985);
}

double NNfunction_ss_cLcL::synapse0x29880d0() {
   return (neuron0x296df40()*1.12978);
}

double NNfunction_ss_cLcL::synapse0x2988110() {
   return (neuron0x296e280()*-2.98219);
}

double NNfunction_ss_cLcL::synapse0x2988150() {
   return (neuron0x296e5c0()*0.254428);
}

double NNfunction_ss_cLcL::synapse0x2988190() {
   return (neuron0x296e900()*2.35411);
}

double NNfunction_ss_cLcL::synapse0x29881d0() {
   return (neuron0x296ec40()*-0.141079);
}

double NNfunction_ss_cLcL::synapse0x2988550() {
   return (neuron0x2969ff0()*0.0197622);
}

double NNfunction_ss_cLcL::synapse0x2988590() {
   return (neuron0x296a2a0()*0.0411612);
}

double NNfunction_ss_cLcL::synapse0x29885d0() {
   return (neuron0x296a5e0()*-0.0101477);
}

double NNfunction_ss_cLcL::synapse0x2988610() {
   return (neuron0x296a920()*-9.11082);
}

double NNfunction_ss_cLcL::synapse0x2988650() {
   return (neuron0x296ac60()*0.0215012);
}

double NNfunction_ss_cLcL::synapse0x2988690() {
   return (neuron0x296afa0()*0.0250889);
}

double NNfunction_ss_cLcL::synapse0x29886d0() {
   return (neuron0x296b2e0()*0.0782901);
}

double NNfunction_ss_cLcL::synapse0x2988710() {
   return (neuron0x296b620()*0.109323);
}

double NNfunction_ss_cLcL::synapse0x2988750() {
   return (neuron0x296b960()*0.0651822);
}

double NNfunction_ss_cLcL::synapse0x2988790() {
   return (neuron0x296bca0()*0.0885963);
}

double NNfunction_ss_cLcL::synapse0x29887d0() {
   return (neuron0x296bfe0()*0.0465607);
}

double NNfunction_ss_cLcL::synapse0x2988810() {
   return (neuron0x296c320()*0.120638);
}

double NNfunction_ss_cLcL::synapse0x2988850() {
   return (neuron0x296c660()*-3.90476);
}

double NNfunction_ss_cLcL::synapse0x2988890() {
   return (neuron0x296c9a0()*-0.193654);
}

double NNfunction_ss_cLcL::synapse0x29888d0() {
   return (neuron0x296cce0()*0.140384);
}

double NNfunction_ss_cLcL::synapse0x2988910() {
   return (neuron0x296d020()*0.00290892);
}

double NNfunction_ss_cLcL::synapse0x29883a0() {
   return (neuron0x296d360()*-0.173686);
}

double NNfunction_ss_cLcL::synapse0x29883e0() {
   return (neuron0x296d8c0()*0.0908514);
}

double NNfunction_ss_cLcL::synapse0x2988a60() {
   return (neuron0x296dc00()*0.137661);
}

double NNfunction_ss_cLcL::synapse0x2988aa0() {
   return (neuron0x296df40()*0.0209014);
}

double NNfunction_ss_cLcL::synapse0x2988ae0() {
   return (neuron0x296e280()*0.027654);
}

double NNfunction_ss_cLcL::synapse0x2988b20() {
   return (neuron0x296e5c0()*-0.0804192);
}

double NNfunction_ss_cLcL::synapse0x2988b60() {
   return (neuron0x296e900()*-0.0677814);
}

double NNfunction_ss_cLcL::synapse0x2988ba0() {
   return (neuron0x296ec40()*0.0881009);
}

double NNfunction_ss_cLcL::synapse0x2988f20() {
   return (neuron0x2969ff0()*0.503499);
}

double NNfunction_ss_cLcL::synapse0x2988f60() {
   return (neuron0x296a2a0()*0.241587);
}

double NNfunction_ss_cLcL::synapse0x2988fa0() {
   return (neuron0x296a5e0()*-2.77648);
}

double NNfunction_ss_cLcL::synapse0x2988fe0() {
   return (neuron0x296a920()*0.572012);
}

double NNfunction_ss_cLcL::synapse0x2989020() {
   return (neuron0x296ac60()*-0.437168);
}

double NNfunction_ss_cLcL::synapse0x2989060() {
   return (neuron0x296afa0()*0.059029);
}

double NNfunction_ss_cLcL::synapse0x29890a0() {
   return (neuron0x296b2e0()*-1.05535);
}

double NNfunction_ss_cLcL::synapse0x29890e0() {
   return (neuron0x296b620()*-0.307112);
}

double NNfunction_ss_cLcL::synapse0x2989120() {
   return (neuron0x296b960()*-0.811969);
}

double NNfunction_ss_cLcL::synapse0x2989160() {
   return (neuron0x296bca0()*-0.647924);
}

double NNfunction_ss_cLcL::synapse0x29891a0() {
   return (neuron0x296bfe0()*-0.172256);
}

double NNfunction_ss_cLcL::synapse0x29891e0() {
   return (neuron0x296c320()*-0.0160168);
}

double NNfunction_ss_cLcL::synapse0x2989220() {
   return (neuron0x296c660()*1.24974);
}

double NNfunction_ss_cLcL::synapse0x2989260() {
   return (neuron0x296c9a0()*0.906836);
}

double NNfunction_ss_cLcL::synapse0x29892a0() {
   return (neuron0x296cce0()*0.464647);
}

double NNfunction_ss_cLcL::synapse0x29892e0() {
   return (neuron0x296d020()*0.441426);
}

double NNfunction_ss_cLcL::synapse0x2988d70() {
   return (neuron0x296d360()*0.167662);
}

double NNfunction_ss_cLcL::synapse0x2988db0() {
   return (neuron0x296d8c0()*0.495988);
}

double NNfunction_ss_cLcL::synapse0x2989430() {
   return (neuron0x296dc00()*0.408143);
}

double NNfunction_ss_cLcL::synapse0x2989470() {
   return (neuron0x296df40()*-0.195021);
}

double NNfunction_ss_cLcL::synapse0x29894b0() {
   return (neuron0x296e280()*-1.46709);
}

double NNfunction_ss_cLcL::synapse0x29894f0() {
   return (neuron0x296e5c0()*-0.116104);
}

double NNfunction_ss_cLcL::synapse0x2989530() {
   return (neuron0x296e900()*1.47569);
}

double NNfunction_ss_cLcL::synapse0x2989570() {
   return (neuron0x296ec40()*2.09159);
}

double NNfunction_ss_cLcL::synapse0x29898f0() {
   return (neuron0x2969ff0()*-0.276731);
}

double NNfunction_ss_cLcL::synapse0x2989930() {
   return (neuron0x296a2a0()*0.43922);
}

double NNfunction_ss_cLcL::synapse0x2989970() {
   return (neuron0x296a5e0()*0.832943);
}

double NNfunction_ss_cLcL::synapse0x29899b0() {
   return (neuron0x296a920()*0.958329);
}

double NNfunction_ss_cLcL::synapse0x29899f0() {
   return (neuron0x296ac60()*0.231615);
}

double NNfunction_ss_cLcL::synapse0x2989a30() {
   return (neuron0x296afa0()*0.325559);
}

double NNfunction_ss_cLcL::synapse0x2989a70() {
   return (neuron0x296b2e0()*0.176984);
}

double NNfunction_ss_cLcL::synapse0x2989ab0() {
   return (neuron0x296b620()*0.306692);
}

double NNfunction_ss_cLcL::synapse0x2989af0() {
   return (neuron0x296b960()*0.259055);
}

double NNfunction_ss_cLcL::synapse0x2989b30() {
   return (neuron0x296bca0()*0.205951);
}

double NNfunction_ss_cLcL::synapse0x2989b70() {
   return (neuron0x296bfe0()*0.179997);
}

double NNfunction_ss_cLcL::synapse0x2989bb0() {
   return (neuron0x296c320()*-0.330263);
}

double NNfunction_ss_cLcL::synapse0x2989bf0() {
   return (neuron0x296c660()*-4.70815);
}

double NNfunction_ss_cLcL::synapse0x2989c30() {
   return (neuron0x296c9a0()*-0.00666687);
}

double NNfunction_ss_cLcL::synapse0x2989c70() {
   return (neuron0x296cce0()*-0.515728);
}

double NNfunction_ss_cLcL::synapse0x2989cb0() {
   return (neuron0x296d020()*0.0782824);
}

double NNfunction_ss_cLcL::synapse0x2989740() {
   return (neuron0x296d360()*-0.555052);
}

double NNfunction_ss_cLcL::synapse0x2989780() {
   return (neuron0x296d8c0()*0.45992);
}

double NNfunction_ss_cLcL::synapse0x2989e00() {
   return (neuron0x296dc00()*0.748138);
}

double NNfunction_ss_cLcL::synapse0x2989e40() {
   return (neuron0x296df40()*0.303124);
}

double NNfunction_ss_cLcL::synapse0x2989e80() {
   return (neuron0x296e280()*0.996515);
}

double NNfunction_ss_cLcL::synapse0x2989ec0() {
   return (neuron0x296e5c0()*0.451021);
}

double NNfunction_ss_cLcL::synapse0x2989f00() {
   return (neuron0x296e900()*0.28967);
}

double NNfunction_ss_cLcL::synapse0x2989f40() {
   return (neuron0x296ec40()*-0.997428);
}

double NNfunction_ss_cLcL::synapse0x298a2c0() {
   return (neuron0x2969ff0()*-0.150022);
}

double NNfunction_ss_cLcL::synapse0x298a300() {
   return (neuron0x296a2a0()*-0.11175);
}

double NNfunction_ss_cLcL::synapse0x298a340() {
   return (neuron0x296a5e0()*0.0576614);
}

double NNfunction_ss_cLcL::synapse0x298a380() {
   return (neuron0x296a920()*0.252107);
}

double NNfunction_ss_cLcL::synapse0x298a3c0() {
   return (neuron0x296ac60()*-0.0734964);
}

double NNfunction_ss_cLcL::synapse0x298a400() {
   return (neuron0x296afa0()*-0.273525);
}

double NNfunction_ss_cLcL::synapse0x298a440() {
   return (neuron0x296b2e0()*-0.316795);
}

double NNfunction_ss_cLcL::synapse0x298a480() {
   return (neuron0x296b620()*-0.327289);
}

double NNfunction_ss_cLcL::synapse0x298a4c0() {
   return (neuron0x296b960()*-0.399246);
}

double NNfunction_ss_cLcL::synapse0x298a500() {
   return (neuron0x296bca0()*-0.476077);
}

double NNfunction_ss_cLcL::synapse0x298a540() {
   return (neuron0x296bfe0()*-0.269063);
}

double NNfunction_ss_cLcL::synapse0x298a580() {
   return (neuron0x296c320()*0.220891);
}

double NNfunction_ss_cLcL::synapse0x298a5c0() {
   return (neuron0x296c660()*-2.69255);
}

double NNfunction_ss_cLcL::synapse0x298a600() {
   return (neuron0x296c9a0()*-0.0779392);
}

double NNfunction_ss_cLcL::synapse0x298a640() {
   return (neuron0x296cce0()*-0.147842);
}

double NNfunction_ss_cLcL::synapse0x298a680() {
   return (neuron0x296d020()*-0.0316222);
}

double NNfunction_ss_cLcL::synapse0x298a110() {
   return (neuron0x296d360()*-0.0475017);
}

double NNfunction_ss_cLcL::synapse0x298a150() {
   return (neuron0x296d8c0()*-0.0868786);
}

double NNfunction_ss_cLcL::synapse0x298a7d0() {
   return (neuron0x296dc00()*-0.428063);
}

double NNfunction_ss_cLcL::synapse0x298a810() {
   return (neuron0x296df40()*-0.17497);
}

double NNfunction_ss_cLcL::synapse0x298a850() {
   return (neuron0x296e280()*-0.243984);
}

double NNfunction_ss_cLcL::synapse0x298a890() {
   return (neuron0x296e5c0()*0.0929209);
}

double NNfunction_ss_cLcL::synapse0x298a8d0() {
   return (neuron0x296e900()*0.0861784);
}

double NNfunction_ss_cLcL::synapse0x298a910() {
   return (neuron0x296ec40()*-0.15698);
}

double NNfunction_ss_cLcL::synapse0x298ac90() {
   return (neuron0x2969ff0()*-0.92424);
}

double NNfunction_ss_cLcL::synapse0x298acd0() {
   return (neuron0x296a2a0()*0.0530624);
}

double NNfunction_ss_cLcL::synapse0x298ad10() {
   return (neuron0x296a5e0()*0.594691);
}

double NNfunction_ss_cLcL::synapse0x298ad50() {
   return (neuron0x296a920()*-0.452085);
}

double NNfunction_ss_cLcL::synapse0x298ad90() {
   return (neuron0x296ac60()*0.195739);
}

double NNfunction_ss_cLcL::synapse0x298add0() {
   return (neuron0x296afa0()*0.319362);
}

double NNfunction_ss_cLcL::synapse0x298ae10() {
   return (neuron0x296b2e0()*0.316507);
}

double NNfunction_ss_cLcL::synapse0x298ae50() {
   return (neuron0x296b620()*0.558432);
}

double NNfunction_ss_cLcL::synapse0x298ae90() {
   return (neuron0x296b960()*0.215319);
}

double NNfunction_ss_cLcL::synapse0x298aed0() {
   return (neuron0x296bca0()*0.335606);
}

double NNfunction_ss_cLcL::synapse0x298af10() {
   return (neuron0x296bfe0()*0.442286);
}

double NNfunction_ss_cLcL::synapse0x298af50() {
   return (neuron0x296c320()*0.359685);
}

double NNfunction_ss_cLcL::synapse0x298af90() {
   return (neuron0x296c660()*-2.47129);
}

double NNfunction_ss_cLcL::synapse0x298afd0() {
   return (neuron0x296c9a0()*0.191378);
}

double NNfunction_ss_cLcL::synapse0x298b010() {
   return (neuron0x296cce0()*-0.322851);
}

double NNfunction_ss_cLcL::synapse0x298b050() {
   return (neuron0x296d020()*0.363332);
}

double NNfunction_ss_cLcL::synapse0x298aae0() {
   return (neuron0x296d360()*-0.0949268);
}

double NNfunction_ss_cLcL::synapse0x298ab20() {
   return (neuron0x296d8c0()*0.0529772);
}

double NNfunction_ss_cLcL::synapse0x298b1a0() {
   return (neuron0x296dc00()*0.845367);
}

double NNfunction_ss_cLcL::synapse0x298b1e0() {
   return (neuron0x296df40()*0.114988);
}

double NNfunction_ss_cLcL::synapse0x298b220() {
   return (neuron0x296e280()*0.204521);
}

double NNfunction_ss_cLcL::synapse0x298b260() {
   return (neuron0x296e5c0()*-0.0809128);
}

double NNfunction_ss_cLcL::synapse0x298b2a0() {
   return (neuron0x296e900()*0.172155);
}

double NNfunction_ss_cLcL::synapse0x298b2e0() {
   return (neuron0x296ec40()*-0.324728);
}

double NNfunction_ss_cLcL::synapse0x298b660() {
   return (neuron0x2969ff0()*0.0134565);
}

double NNfunction_ss_cLcL::synapse0x298b6a0() {
   return (neuron0x296a2a0()*0.966741);
}

double NNfunction_ss_cLcL::synapse0x298b6e0() {
   return (neuron0x296a5e0()*-0.72708);
}

double NNfunction_ss_cLcL::synapse0x298b720() {
   return (neuron0x296a920()*1.3396);
}

double NNfunction_ss_cLcL::synapse0x298b760() {
   return (neuron0x296ac60()*-0.851322);
}

double NNfunction_ss_cLcL::synapse0x298b7a0() {
   return (neuron0x296afa0()*0.0173822);
}

double NNfunction_ss_cLcL::synapse0x298b7e0() {
   return (neuron0x296b2e0()*0.10568);
}

double NNfunction_ss_cLcL::synapse0x298b820() {
   return (neuron0x296b620()*-0.831215);
}

double NNfunction_ss_cLcL::synapse0x298b860() {
   return (neuron0x296b960()*-0.885844);
}

double NNfunction_ss_cLcL::synapse0x298b8a0() {
   return (neuron0x296bca0()*-0.102462);
}

double NNfunction_ss_cLcL::synapse0x298b8e0() {
   return (neuron0x296bfe0()*-0.268047);
}

double NNfunction_ss_cLcL::synapse0x298b920() {
   return (neuron0x296c320()*1.205);
}

double NNfunction_ss_cLcL::synapse0x298b960() {
   return (neuron0x296c660()*0.0161432);
}

double NNfunction_ss_cLcL::synapse0x298b9a0() {
   return (neuron0x296c9a0()*0.464567);
}

double NNfunction_ss_cLcL::synapse0x298b9e0() {
   return (neuron0x296cce0()*1.36746);
}

double NNfunction_ss_cLcL::synapse0x298ba20() {
   return (neuron0x296d020()*0.601883);
}

double NNfunction_ss_cLcL::synapse0x298b4b0() {
   return (neuron0x296d360()*2.23062);
}

double NNfunction_ss_cLcL::synapse0x298b4f0() {
   return (neuron0x296d8c0()*-0.126924);
}

double NNfunction_ss_cLcL::synapse0x298bb70() {
   return (neuron0x296dc00()*0.792059);
}

double NNfunction_ss_cLcL::synapse0x298bbb0() {
   return (neuron0x296df40()*0.622312);
}

double NNfunction_ss_cLcL::synapse0x298bbf0() {
   return (neuron0x296e280()*-1.57453);
}

double NNfunction_ss_cLcL::synapse0x298bc30() {
   return (neuron0x296e5c0()*-1.25611);
}

double NNfunction_ss_cLcL::synapse0x298bc70() {
   return (neuron0x296e900()*0.575617);
}

double NNfunction_ss_cLcL::synapse0x298bcb0() {
   return (neuron0x296ec40()*2.55506);
}

double NNfunction_ss_cLcL::synapse0x298c030() {
   return (neuron0x2969ff0()*-0.00799413);
}

double NNfunction_ss_cLcL::synapse0x298c070() {
   return (neuron0x296a2a0()*-0.0155101);
}

double NNfunction_ss_cLcL::synapse0x298c0b0() {
   return (neuron0x296a5e0()*0.0607256);
}

double NNfunction_ss_cLcL::synapse0x298c0f0() {
   return (neuron0x296a920()*-8.52097);
}

double NNfunction_ss_cLcL::synapse0x298c130() {
   return (neuron0x296ac60()*-0.000964086);
}

double NNfunction_ss_cLcL::synapse0x298c170() {
   return (neuron0x296afa0()*-0.0331524);
}

double NNfunction_ss_cLcL::synapse0x298c1b0() {
   return (neuron0x296b2e0()*0.0438816);
}

double NNfunction_ss_cLcL::synapse0x298c1f0() {
   return (neuron0x296b620()*-0.0379163);
}

double NNfunction_ss_cLcL::synapse0x298c230() {
   return (neuron0x296b960()*-0.0289709);
}

double NNfunction_ss_cLcL::synapse0x298c270() {
   return (neuron0x296bca0()*-0.0336258);
}

double NNfunction_ss_cLcL::synapse0x298c2b0() {
   return (neuron0x296bfe0()*0.0307401);
}

double NNfunction_ss_cLcL::synapse0x298c2f0() {
   return (neuron0x296c320()*0.0236289);
}

double NNfunction_ss_cLcL::synapse0x298c330() {
   return (neuron0x296c660()*2.68224);
}

double NNfunction_ss_cLcL::synapse0x298c370() {
   return (neuron0x296c9a0()*-0.14893);
}

double NNfunction_ss_cLcL::synapse0x298c3b0() {
   return (neuron0x296cce0()*0.0166051);
}

double NNfunction_ss_cLcL::synapse0x298c3f0() {
   return (neuron0x296d020()*0.0597187);
}

double NNfunction_ss_cLcL::synapse0x298be80() {
   return (neuron0x296d360()*-0.128694);
}

double NNfunction_ss_cLcL::synapse0x298bec0() {
   return (neuron0x296d8c0()*-0.0422914);
}

double NNfunction_ss_cLcL::synapse0x298c540() {
   return (neuron0x296dc00()*0.0254701);
}

double NNfunction_ss_cLcL::synapse0x298c580() {
   return (neuron0x296df40()*-0.0698461);
}

double NNfunction_ss_cLcL::synapse0x298c5c0() {
   return (neuron0x296e280()*0.134557);
}

double NNfunction_ss_cLcL::synapse0x298c600() {
   return (neuron0x296e5c0()*-0.035965);
}

double NNfunction_ss_cLcL::synapse0x298c640() {
   return (neuron0x296e900()*-0.0318352);
}

double NNfunction_ss_cLcL::synapse0x298c680() {
   return (neuron0x296ec40()*0.0707738);
}

double NNfunction_ss_cLcL::synapse0x2975130() {
   return (neuron0x2969ff0()*-1.2275);
}

double NNfunction_ss_cLcL::synapse0x2975170() {
   return (neuron0x296a2a0()*-0.21061);
}

double NNfunction_ss_cLcL::synapse0x29751b0() {
   return (neuron0x296a5e0()*0.932091);
}

double NNfunction_ss_cLcL::synapse0x29751f0() {
   return (neuron0x296a920()*-0.333859);
}

double NNfunction_ss_cLcL::synapse0x2975230() {
   return (neuron0x296ac60()*-0.30841);
}

double NNfunction_ss_cLcL::synapse0x2975270() {
   return (neuron0x296afa0()*-0.700909);
}

double NNfunction_ss_cLcL::synapse0x29752b0() {
   return (neuron0x296b2e0()*-0.746827);
}

double NNfunction_ss_cLcL::synapse0x29752f0() {
   return (neuron0x296b620()*-1.07808);
}

double NNfunction_ss_cLcL::synapse0x298ce10() {
   return (neuron0x296b960()*-0.548338);
}

double NNfunction_ss_cLcL::synapse0x298ce50() {
   return (neuron0x296bca0()*0.771993);
}

double NNfunction_ss_cLcL::synapse0x298ce90() {
   return (neuron0x296bfe0()*1.01856);
}

double NNfunction_ss_cLcL::synapse0x298ced0() {
   return (neuron0x296c320()*-0.621796);
}

double NNfunction_ss_cLcL::synapse0x298cf10() {
   return (neuron0x296c660()*-1.64628);
}

double NNfunction_ss_cLcL::synapse0x298cf50() {
   return (neuron0x296c9a0()*0.466462);
}

double NNfunction_ss_cLcL::synapse0x298cf90() {
   return (neuron0x296cce0()*-0.753609);
}

double NNfunction_ss_cLcL::synapse0x298cfd0() {
   return (neuron0x296d020()*-0.984855);
}

double NNfunction_ss_cLcL::synapse0x298c850() {
   return (neuron0x296d360()*0.129242);
}

double NNfunction_ss_cLcL::synapse0x298c890() {
   return (neuron0x296d8c0()*0.428244);
}

double NNfunction_ss_cLcL::synapse0x298d120() {
   return (neuron0x296dc00()*-0.121919);
}

double NNfunction_ss_cLcL::synapse0x298d160() {
   return (neuron0x296df40()*-0.511406);
}

double NNfunction_ss_cLcL::synapse0x298d1a0() {
   return (neuron0x296e280()*-0.424671);
}

double NNfunction_ss_cLcL::synapse0x298d1e0() {
   return (neuron0x296e5c0()*0.311131);
}

double NNfunction_ss_cLcL::synapse0x298d220() {
   return (neuron0x296e900()*0.371967);
}

double NNfunction_ss_cLcL::synapse0x298d260() {
   return (neuron0x296ec40()*-1.33038);
}

double NNfunction_ss_cLcL::synapse0x298d5e0() {
   return (neuron0x2969ff0()*-0.184282);
}

double NNfunction_ss_cLcL::synapse0x298d620() {
   return (neuron0x296a2a0()*0.2567);
}

double NNfunction_ss_cLcL::synapse0x298d660() {
   return (neuron0x296a5e0()*0.209744);
}

double NNfunction_ss_cLcL::synapse0x298d6a0() {
   return (neuron0x296a920()*1.27728);
}

double NNfunction_ss_cLcL::synapse0x298d6e0() {
   return (neuron0x296ac60()*-0.0973744);
}

double NNfunction_ss_cLcL::synapse0x298d720() {
   return (neuron0x296afa0()*0.0865024);
}

double NNfunction_ss_cLcL::synapse0x298d760() {
   return (neuron0x296b2e0()*0.281573);
}

double NNfunction_ss_cLcL::synapse0x298d7a0() {
   return (neuron0x296b620()*0.000448372);
}

double NNfunction_ss_cLcL::synapse0x298d7e0() {
   return (neuron0x296b960()*0.644825);
}

double NNfunction_ss_cLcL::synapse0x298d820() {
   return (neuron0x296bca0()*-0.0933749);
}

double NNfunction_ss_cLcL::synapse0x298d860() {
   return (neuron0x296bfe0()*0.113394);
}

double NNfunction_ss_cLcL::synapse0x298d8a0() {
   return (neuron0x296c320()*0.473026);
}

double NNfunction_ss_cLcL::synapse0x298d8e0() {
   return (neuron0x296c660()*2.30408);
}

double NNfunction_ss_cLcL::synapse0x298d920() {
   return (neuron0x296c9a0()*0.491412);
}

double NNfunction_ss_cLcL::synapse0x298d960() {
   return (neuron0x296cce0()*0.947613);
}

double NNfunction_ss_cLcL::synapse0x298d9a0() {
   return (neuron0x296d020()*0.302246);
}

double NNfunction_ss_cLcL::synapse0x298d430() {
   return (neuron0x296d360()*0.372957);
}

double NNfunction_ss_cLcL::synapse0x298d470() {
   return (neuron0x296d8c0()*-0.176056);
}

double NNfunction_ss_cLcL::synapse0x298daf0() {
   return (neuron0x296dc00()*-0.0906819);
}

double NNfunction_ss_cLcL::synapse0x298db30() {
   return (neuron0x296df40()*0.398492);
}

double NNfunction_ss_cLcL::synapse0x298db70() {
   return (neuron0x296e280()*-1.29379);
}

double NNfunction_ss_cLcL::synapse0x298dbb0() {
   return (neuron0x296e5c0()*-0.504114);
}

double NNfunction_ss_cLcL::synapse0x298dbf0() {
   return (neuron0x296e900()*-0.245379);
}

double NNfunction_ss_cLcL::synapse0x298dc30() {
   return (neuron0x296ec40()*1.75557);
}

double NNfunction_ss_cLcL::synapse0x298dfb0() {
   return (neuron0x2969ff0()*0.43402);
}

double NNfunction_ss_cLcL::synapse0x298dff0() {
   return (neuron0x296a2a0()*1.63691);
}

double NNfunction_ss_cLcL::synapse0x298e030() {
   return (neuron0x296a5e0()*-0.708237);
}

double NNfunction_ss_cLcL::synapse0x298e070() {
   return (neuron0x296a920()*1.98527);
}

double NNfunction_ss_cLcL::synapse0x298e0b0() {
   return (neuron0x296ac60()*0.025176);
}

double NNfunction_ss_cLcL::synapse0x298e0f0() {
   return (neuron0x296afa0()*0.0156184);
}

double NNfunction_ss_cLcL::synapse0x298e130() {
   return (neuron0x296b2e0()*-0.00394537);
}

double NNfunction_ss_cLcL::synapse0x298e170() {
   return (neuron0x296b620()*-0.375307);
}

double NNfunction_ss_cLcL::synapse0x298e1b0() {
   return (neuron0x296b960()*-0.480706);
}

double NNfunction_ss_cLcL::synapse0x298e1f0() {
   return (neuron0x296bca0()*-0.251484);
}

double NNfunction_ss_cLcL::synapse0x298e230() {
   return (neuron0x296bfe0()*-0.919631);
}

double NNfunction_ss_cLcL::synapse0x298e270() {
   return (neuron0x296c320()*1.64711);
}

double NNfunction_ss_cLcL::synapse0x298e2b0() {
   return (neuron0x296c660()*-0.728117);
}

double NNfunction_ss_cLcL::synapse0x298e2f0() {
   return (neuron0x296c9a0()*1.60601);
}

double NNfunction_ss_cLcL::synapse0x298e330() {
   return (neuron0x296cce0()*1.19505);
}

double NNfunction_ss_cLcL::synapse0x298e370() {
   return (neuron0x296d020()*0.815318);
}

double NNfunction_ss_cLcL::synapse0x298de00() {
   return (neuron0x296d360()*0.855332);
}

double NNfunction_ss_cLcL::synapse0x298de40() {
   return (neuron0x296d8c0()*-0.238134);
}

double NNfunction_ss_cLcL::synapse0x297e970() {
   return (neuron0x296dc00()*1.15332);
}

double NNfunction_ss_cLcL::synapse0x297e9b0() {
   return (neuron0x296df40()*0.0193042);
}

double NNfunction_ss_cLcL::synapse0x297e9f0() {
   return (neuron0x296e280()*-1.36258);
}

double NNfunction_ss_cLcL::synapse0x297ea30() {
   return (neuron0x296e5c0()*-2.0497);
}

double NNfunction_ss_cLcL::synapse0x297ea70() {
   return (neuron0x296e900()*2.01423);
}

double NNfunction_ss_cLcL::synapse0x297eab0() {
   return (neuron0x296ec40()*2.53118);
}

double NNfunction_ss_cLcL::synapse0x297ee30() {
   return (neuron0x2969ff0()*0.031744);
}

double NNfunction_ss_cLcL::synapse0x297ee70() {
   return (neuron0x296a2a0()*0.00256365);
}

double NNfunction_ss_cLcL::synapse0x297eeb0() {
   return (neuron0x296a5e0()*-0.0876689);
}

double NNfunction_ss_cLcL::synapse0x297eef0() {
   return (neuron0x296a920()*0.216101);
}

double NNfunction_ss_cLcL::synapse0x297ef30() {
   return (neuron0x296ac60()*0.00463046);
}

double NNfunction_ss_cLcL::synapse0x297ef70() {
   return (neuron0x296afa0()*-0.00622516);
}

double NNfunction_ss_cLcL::synapse0x297efb0() {
   return (neuron0x296b2e0()*0.00162564);
}

double NNfunction_ss_cLcL::synapse0x297eff0() {
   return (neuron0x296b620()*-0.0307138);
}

double NNfunction_ss_cLcL::synapse0x297f030() {
   return (neuron0x296b960()*-0.0279684);
}

double NNfunction_ss_cLcL::synapse0x297f070() {
   return (neuron0x296bca0()*-0.0220881);
}

double NNfunction_ss_cLcL::synapse0x297f0b0() {
   return (neuron0x296bfe0()*-0.0139438);
}

double NNfunction_ss_cLcL::synapse0x297f0f0() {
   return (neuron0x296c320()*0.107662);
}

double NNfunction_ss_cLcL::synapse0x297f130() {
   return (neuron0x296c660()*5.98693);
}

double NNfunction_ss_cLcL::synapse0x297f170() {
   return (neuron0x296c9a0()*-0.0214386);
}

double NNfunction_ss_cLcL::synapse0x297f1b0() {
   return (neuron0x296cce0()*0.0855804);
}

double NNfunction_ss_cLcL::synapse0x297f1f0() {
   return (neuron0x296d020()*0.0831045);
}

double NNfunction_ss_cLcL::synapse0x297ec80() {
   return (neuron0x296d360()*-0.00830379);
}

double NNfunction_ss_cLcL::synapse0x297ecc0() {
   return (neuron0x296d8c0()*0.0452402);
}

double NNfunction_ss_cLcL::synapse0x297f340() {
   return (neuron0x296dc00()*0.0479202);
}

double NNfunction_ss_cLcL::synapse0x297f380() {
   return (neuron0x296df40()*-0.0269739);
}

double NNfunction_ss_cLcL::synapse0x297f3c0() {
   return (neuron0x296e280()*0.00836728);
}

double NNfunction_ss_cLcL::synapse0x297f400() {
   return (neuron0x296e5c0()*0.00640636);
}

double NNfunction_ss_cLcL::synapse0x297f440() {
   return (neuron0x296e900()*-0.031384);
}

double NNfunction_ss_cLcL::synapse0x297f480() {
   return (neuron0x296ec40()*0.0240851);
}

double NNfunction_ss_cLcL::synapse0x297f800() {
   return (neuron0x2969ff0()*-0.0331249);
}

double NNfunction_ss_cLcL::synapse0x297f840() {
   return (neuron0x296a2a0()*-0.0048446);
}

double NNfunction_ss_cLcL::synapse0x297f880() {
   return (neuron0x296a5e0()*-0.00878075);
}

double NNfunction_ss_cLcL::synapse0x297f8c0() {
   return (neuron0x296a920()*0.111324);
}

double NNfunction_ss_cLcL::synapse0x297f900() {
   return (neuron0x296ac60()*0.120497);
}

double NNfunction_ss_cLcL::synapse0x297f940() {
   return (neuron0x296afa0()*0.000388854);
}

double NNfunction_ss_cLcL::synapse0x297f980() {
   return (neuron0x296b2e0()*-0.0722824);
}

double NNfunction_ss_cLcL::synapse0x297f9c0() {
   return (neuron0x296b620()*-0.123961);
}

double NNfunction_ss_cLcL::synapse0x297fa00() {
   return (neuron0x296b960()*0.0286205);
}

double NNfunction_ss_cLcL::synapse0x297fa40() {
   return (neuron0x296bca0()*-0.105259);
}

double NNfunction_ss_cLcL::synapse0x297fa80() {
   return (neuron0x296bfe0()*-0.0109561);
}

double NNfunction_ss_cLcL::synapse0x297fac0() {
   return (neuron0x296c320()*0.985662);
}

double NNfunction_ss_cLcL::synapse0x297fb00() {
   return (neuron0x296c660()*-0.477157);
}

double NNfunction_ss_cLcL::synapse0x297fb40() {
   return (neuron0x296c9a0()*-0.668397);
}

double NNfunction_ss_cLcL::synapse0x297fb80() {
   return (neuron0x296cce0()*0.576608);
}

double NNfunction_ss_cLcL::synapse0x297fbc0() {
   return (neuron0x296d020()*0.663951);
}

double NNfunction_ss_cLcL::synapse0x297f650() {
   return (neuron0x296d360()*-0.612329);
}

double NNfunction_ss_cLcL::synapse0x297f690() {
   return (neuron0x296d8c0()*0.541512);
}

double NNfunction_ss_cLcL::synapse0x297fd10() {
   return (neuron0x296dc00()*0.532295);
}

double NNfunction_ss_cLcL::synapse0x297fd50() {
   return (neuron0x296df40()*0.0165154);
}

double NNfunction_ss_cLcL::synapse0x297fd90() {
   return (neuron0x296e280()*0.0383047);
}

double NNfunction_ss_cLcL::synapse0x297fdd0() {
   return (neuron0x296e5c0()*0.0174659);
}

double NNfunction_ss_cLcL::synapse0x297fe10() {
   return (neuron0x296e900()*-0.0722512);
}

double NNfunction_ss_cLcL::synapse0x297fe50() {
   return (neuron0x296ec40()*-0.0184214);
}

double NNfunction_ss_cLcL::synapse0x29801d0() {
   return (neuron0x2969ff0()*-0.449239);
}

double NNfunction_ss_cLcL::synapse0x2980210() {
   return (neuron0x296a2a0()*0.0284329);
}

double NNfunction_ss_cLcL::synapse0x2980250() {
   return (neuron0x296a5e0()*0.389735);
}

double NNfunction_ss_cLcL::synapse0x2980290() {
   return (neuron0x296a920()*-0.126968);
}

double NNfunction_ss_cLcL::synapse0x29802d0() {
   return (neuron0x296ac60()*0.366854);
}

double NNfunction_ss_cLcL::synapse0x2980310() {
   return (neuron0x296afa0()*-0.486518);
}

double NNfunction_ss_cLcL::synapse0x2980350() {
   return (neuron0x296b2e0()*-0.291858);
}

double NNfunction_ss_cLcL::synapse0x2980390() {
   return (neuron0x296b620()*0.558542);
}

double NNfunction_ss_cLcL::synapse0x29803d0() {
   return (neuron0x296b960()*-0.433306);
}

double NNfunction_ss_cLcL::synapse0x2980410() {
   return (neuron0x296bca0()*0.277225);
}

double NNfunction_ss_cLcL::synapse0x2980450() {
   return (neuron0x296bfe0()*-0.403165);
}

double NNfunction_ss_cLcL::synapse0x2980490() {
   return (neuron0x296c320()*-1.61222);
}

double NNfunction_ss_cLcL::synapse0x29804d0() {
   return (neuron0x296c660()*-1.58067);
}

double NNfunction_ss_cLcL::synapse0x2980510() {
   return (neuron0x296c9a0()*0.419905);
}

double NNfunction_ss_cLcL::synapse0x2980550() {
   return (neuron0x296cce0()*-0.570293);
}

double NNfunction_ss_cLcL::synapse0x2980590() {
   return (neuron0x296d020()*0.411272);
}

double NNfunction_ss_cLcL::synapse0x2980020() {
   return (neuron0x296d360()*-0.548516);
}

double NNfunction_ss_cLcL::synapse0x2980060() {
   return (neuron0x296d8c0()*-0.0226543);
}

double NNfunction_ss_cLcL::synapse0x29806e0() {
   return (neuron0x296dc00()*-0.0976335);
}

double NNfunction_ss_cLcL::synapse0x2980720() {
   return (neuron0x296df40()*-0.283415);
}

double NNfunction_ss_cLcL::synapse0x2980760() {
   return (neuron0x296e280()*0.0532871);
}

double NNfunction_ss_cLcL::synapse0x29807a0() {
   return (neuron0x296e5c0()*0.947098);
}

double NNfunction_ss_cLcL::synapse0x29807e0() {
   return (neuron0x296e900()*-0.691345);
}

double NNfunction_ss_cLcL::synapse0x2980820() {
   return (neuron0x296ec40()*-0.0551365);
}

double NNfunction_ss_cLcL::synapse0x29926f0() {
   return (neuron0x2969ff0()*0.0100455);
}

double NNfunction_ss_cLcL::synapse0x2992730() {
   return (neuron0x296a2a0()*0.00643738);
}

double NNfunction_ss_cLcL::synapse0x2992770() {
   return (neuron0x296a5e0()*-0.011295);
}

double NNfunction_ss_cLcL::synapse0x29927b0() {
   return (neuron0x296a920()*0.0973799);
}

double NNfunction_ss_cLcL::synapse0x29927f0() {
   return (neuron0x296ac60()*0.0138158);
}

double NNfunction_ss_cLcL::synapse0x2992830() {
   return (neuron0x296afa0()*0.0048155);
}

double NNfunction_ss_cLcL::synapse0x2992870() {
   return (neuron0x296b2e0()*0.00165207);
}

double NNfunction_ss_cLcL::synapse0x29928b0() {
   return (neuron0x296b620()*-0.00466999);
}

double NNfunction_ss_cLcL::synapse0x29928f0() {
   return (neuron0x296b960()*-0.00109032);
}

double NNfunction_ss_cLcL::synapse0x2992930() {
   return (neuron0x296bca0()*-0.0101572);
}

double NNfunction_ss_cLcL::synapse0x2992970() {
   return (neuron0x296bfe0()*0.000517838);
}

double NNfunction_ss_cLcL::synapse0x29929b0() {
   return (neuron0x296c320()*0.0907224);
}

double NNfunction_ss_cLcL::synapse0x29929f0() {
   return (neuron0x296c660()*6.97779);
}

double NNfunction_ss_cLcL::synapse0x2992a30() {
   return (neuron0x296c9a0()*-0.0375253);
}

double NNfunction_ss_cLcL::synapse0x2992a70() {
   return (neuron0x296cce0()*0.0532336);
}

double NNfunction_ss_cLcL::synapse0x2992ab0() {
   return (neuron0x296d020()*0.0520063);
}

double NNfunction_ss_cLcL::synapse0x2980860() {
   return (neuron0x296d360()*-0.0291493);
}

double NNfunction_ss_cLcL::synapse0x29808a0() {
   return (neuron0x296d8c0()*0.0279962);
}

double NNfunction_ss_cLcL::synapse0x2992c00() {
   return (neuron0x296dc00()*0.0465674);
}

double NNfunction_ss_cLcL::synapse0x2992c40() {
   return (neuron0x296df40()*-0.00667352);
}

double NNfunction_ss_cLcL::synapse0x2992c80() {
   return (neuron0x296e280()*0.0232779);
}

double NNfunction_ss_cLcL::synapse0x2992cc0() {
   return (neuron0x296e5c0()*-0.00168534);
}

double NNfunction_ss_cLcL::synapse0x2992d00() {
   return (neuron0x296e900()*0.000180844);
}

double NNfunction_ss_cLcL::synapse0x2992d40() {
   return (neuron0x296ec40()*0.0123445);
}

double NNfunction_ss_cLcL::synapse0x29930c0() {
   return (neuron0x2969ff0()*-0.470888);
}

double NNfunction_ss_cLcL::synapse0x2993100() {
   return (neuron0x296a2a0()*0.733053);
}

double NNfunction_ss_cLcL::synapse0x2993140() {
   return (neuron0x296a5e0()*1.94297);
}

double NNfunction_ss_cLcL::synapse0x2993180() {
   return (neuron0x296a920()*0.387198);
}

double NNfunction_ss_cLcL::synapse0x29931c0() {
   return (neuron0x296ac60()*0.0999679);
}

double NNfunction_ss_cLcL::synapse0x2993200() {
   return (neuron0x296afa0()*-0.00655871);
}

double NNfunction_ss_cLcL::synapse0x2993240() {
   return (neuron0x296b2e0()*-0.129241);
}

double NNfunction_ss_cLcL::synapse0x2993280() {
   return (neuron0x296b620()*1.20075);
}

double NNfunction_ss_cLcL::synapse0x29932c0() {
   return (neuron0x296b960()*0.278913);
}

double NNfunction_ss_cLcL::synapse0x2993300() {
   return (neuron0x296bca0()*0.395979);
}

double NNfunction_ss_cLcL::synapse0x2993340() {
   return (neuron0x296bfe0()*0.841053);
}

double NNfunction_ss_cLcL::synapse0x2993380() {
   return (neuron0x296c320()*1.7749);
}

double NNfunction_ss_cLcL::synapse0x29933c0() {
   return (neuron0x296c660()*-2.22234);
}

double NNfunction_ss_cLcL::synapse0x2993400() {
   return (neuron0x296c9a0()*0.87586);
}

double NNfunction_ss_cLcL::synapse0x2993440() {
   return (neuron0x296cce0()*0.449553);
}

double NNfunction_ss_cLcL::synapse0x2993480() {
   return (neuron0x296d020()*0.804735);
}

double NNfunction_ss_cLcL::synapse0x2992f10() {
   return (neuron0x296d360()*-0.37335);
}

double NNfunction_ss_cLcL::synapse0x2992f50() {
   return (neuron0x296d8c0()*0.564403);
}

double NNfunction_ss_cLcL::synapse0x29935d0() {
   return (neuron0x296dc00()*0.676388);
}

double NNfunction_ss_cLcL::synapse0x2993610() {
   return (neuron0x296df40()*1.07204);
}

double NNfunction_ss_cLcL::synapse0x2993650() {
   return (neuron0x296e280()*-1.71648);
}

double NNfunction_ss_cLcL::synapse0x2993690() {
   return (neuron0x296e5c0()*-0.598448);
}

double NNfunction_ss_cLcL::synapse0x29936d0() {
   return (neuron0x296e900()*0.0983853);
}

double NNfunction_ss_cLcL::synapse0x2993710() {
   return (neuron0x296ec40()*1.25487);
}

double NNfunction_ss_cLcL::synapse0x2993a90() {
   return (neuron0x2969ff0()*0.0912199);
}

double NNfunction_ss_cLcL::synapse0x2993ad0() {
   return (neuron0x296a2a0()*-1.26888);
}

double NNfunction_ss_cLcL::synapse0x2993b10() {
   return (neuron0x296a5e0()*3.16957);
}

double NNfunction_ss_cLcL::synapse0x2993b50() {
   return (neuron0x296a920()*-1.47605);
}

double NNfunction_ss_cLcL::synapse0x2993b90() {
   return (neuron0x296ac60()*0.477107);
}

double NNfunction_ss_cLcL::synapse0x2993bd0() {
   return (neuron0x296afa0()*0.908647);
}

double NNfunction_ss_cLcL::synapse0x2993c10() {
   return (neuron0x296b2e0()*0.734071);
}

double NNfunction_ss_cLcL::synapse0x2993c50() {
   return (neuron0x296b620()*0.872331);
}

double NNfunction_ss_cLcL::synapse0x2993c90() {
   return (neuron0x296b960()*1.00449);
}

double NNfunction_ss_cLcL::synapse0x2993cd0() {
   return (neuron0x296bca0()*1.17593);
}

double NNfunction_ss_cLcL::synapse0x2993d10() {
   return (neuron0x296bfe0()*2.55743);
}

double NNfunction_ss_cLcL::synapse0x2993d50() {
   return (neuron0x296c320()*-1.48411);
}

double NNfunction_ss_cLcL::synapse0x2993d90() {
   return (neuron0x296c660()*-2.589);
}

double NNfunction_ss_cLcL::synapse0x2993dd0() {
   return (neuron0x296c9a0()*0.0409038);
}

double NNfunction_ss_cLcL::synapse0x2993e10() {
   return (neuron0x296cce0()*-1.18267);
}

double NNfunction_ss_cLcL::synapse0x2993e50() {
   return (neuron0x296d020()*0.524812);
}

double NNfunction_ss_cLcL::synapse0x29938e0() {
   return (neuron0x296d360()*-0.585693);
}

double NNfunction_ss_cLcL::synapse0x2993920() {
   return (neuron0x296d8c0()*-0.339461);
}

double NNfunction_ss_cLcL::synapse0x2993fa0() {
   return (neuron0x296dc00()*0.605557);
}

double NNfunction_ss_cLcL::synapse0x2993fe0() {
   return (neuron0x296df40()*-0.278862);
}

double NNfunction_ss_cLcL::synapse0x2994020() {
   return (neuron0x296e280()*1.31504);
}

double NNfunction_ss_cLcL::synapse0x2994060() {
   return (neuron0x296e5c0()*-0.225813);
}

double NNfunction_ss_cLcL::synapse0x29940a0() {
   return (neuron0x296e900()*-1.27149);
}

double NNfunction_ss_cLcL::synapse0x29940e0() {
   return (neuron0x296ec40()*-2.34778);
}

double NNfunction_ss_cLcL::synapse0x2994460() {
   return (neuron0x2969ff0()*-0.000880012);
}

double NNfunction_ss_cLcL::synapse0x29944a0() {
   return (neuron0x296a2a0()*0.154916);
}

double NNfunction_ss_cLcL::synapse0x29944e0() {
   return (neuron0x296a5e0()*4.65359);
}

double NNfunction_ss_cLcL::synapse0x2994520() {
   return (neuron0x296a920()*-1.13981);
}

double NNfunction_ss_cLcL::synapse0x2994560() {
   return (neuron0x296ac60()*1.14655);
}

double NNfunction_ss_cLcL::synapse0x29945a0() {
   return (neuron0x296afa0()*0.629074);
}

double NNfunction_ss_cLcL::synapse0x29945e0() {
   return (neuron0x296b2e0()*1.03309);
}

double NNfunction_ss_cLcL::synapse0x2994620() {
   return (neuron0x296b620()*0.612292);
}

double NNfunction_ss_cLcL::synapse0x2994660() {
   return (neuron0x296b960()*0.761739);
}

double NNfunction_ss_cLcL::synapse0x29946a0() {
   return (neuron0x296bca0()*0.326433);
}

double NNfunction_ss_cLcL::synapse0x29946e0() {
   return (neuron0x296bfe0()*0.829884);
}

double NNfunction_ss_cLcL::synapse0x2994720() {
   return (neuron0x296c320()*0.237398);
}

double NNfunction_ss_cLcL::synapse0x2994760() {
   return (neuron0x296c660()*-12.6578);
}

double NNfunction_ss_cLcL::synapse0x29947a0() {
   return (neuron0x296c9a0()*0.185734);
}

double NNfunction_ss_cLcL::synapse0x29947e0() {
   return (neuron0x296cce0()*-0.309505);
}

double NNfunction_ss_cLcL::synapse0x2994820() {
   return (neuron0x296d020()*-0.0920185);
}

double NNfunction_ss_cLcL::synapse0x29942b0() {
   return (neuron0x296d360()*1.1131);
}

double NNfunction_ss_cLcL::synapse0x29942f0() {
   return (neuron0x296d8c0()*0.179858);
}

double NNfunction_ss_cLcL::synapse0x2994970() {
   return (neuron0x296dc00()*0.480165);
}

double NNfunction_ss_cLcL::synapse0x29949b0() {
   return (neuron0x296df40()*0.293453);
}

double NNfunction_ss_cLcL::synapse0x29949f0() {
   return (neuron0x296e280()*1.06307);
}

double NNfunction_ss_cLcL::synapse0x2994a30() {
   return (neuron0x296e5c0()*-0.72443);
}

double NNfunction_ss_cLcL::synapse0x2994a70() {
   return (neuron0x296e900()*0.0795412);
}

double NNfunction_ss_cLcL::synapse0x2994ab0() {
   return (neuron0x296ec40()*-0.700386);
}

double NNfunction_ss_cLcL::synapse0x2734920() {
   return (neuron0x296f0b0()*-1.36513);
}

double NNfunction_ss_cLcL::synapse0x2734960() {
   return (neuron0x296f8f0()*-0.636175);
}

double NNfunction_ss_cLcL::synapse0x2971460() {
   return (neuron0x29703d0()*-1.26704);
}

double NNfunction_ss_cLcL::synapse0x29714a0() {
   return (neuron0x296fe70()*0.163702);
}

double NNfunction_ss_cLcL::synapse0x2972f30() {
   return (neuron0x29711b0()*-0.881323);
}

double NNfunction_ss_cLcL::synapse0x2972f70() {
   return (neuron0x2972c80()*-0.468659);
}

double NNfunction_ss_cLcL::synapse0x2973d00() {
   return (neuron0x2973a50()*-0.759516);
}

double NNfunction_ss_cLcL::synapse0x2973d40() {
   return (neuron0x2974420()*-0.447657);
}

double NNfunction_ss_cLcL::synapse0x29746d0() {
   return (neuron0x2974df0()*-1.01469);
}

double NNfunction_ss_cLcL::synapse0x2974710() {
   return (neuron0x29758d0()*-0.927797);
}

double NNfunction_ss_cLcL::synapse0x29750a0() {
   return (neuron0x29762a0()*-0.479698);
}

double NNfunction_ss_cLcL::synapse0x29750e0() {
   return (neuron0x2973380()*-0.636644);
}

double NNfunction_ss_cLcL::synapse0x2975b80() {
   return (neuron0x2977e50()*-0.774066);
}

double NNfunction_ss_cLcL::synapse0x2975bc0() {
   return (neuron0x2978820()*-0.262144);
}

double NNfunction_ss_cLcL::synapse0x2976550() {
   return (neuron0x29791f0()*-0.343082);
}

double NNfunction_ss_cLcL::synapse0x2976590() {
   return (neuron0x2979bc0()*-0.842283);
}

double NNfunction_ss_cLcL::synapse0x2973630() {
   return (neuron0x297b9d0()*0.264375);
}

double NNfunction_ss_cLcL::synapse0x2973670() {
   return (neuron0x297bcb0()*-0.721632);
}

double NNfunction_ss_cLcL::synapse0x2978100() {
   return (neuron0x297c680()*-0.492624);
}

double NNfunction_ss_cLcL::synapse0x2978140() {
   return (neuron0x297d050()*-0.677182);
}

double NNfunction_ss_cLcL::synapse0x2978ad0() {
   return (neuron0x297da20()*-0.422307);
}

double NNfunction_ss_cLcL::synapse0x2978b10() {
   return (neuron0x297e3f0()*-0.313783);
}

double NNfunction_ss_cLcL::synapse0x29794a0() {
   return (neuron0x2976f40()*-0.625511);
}

double NNfunction_ss_cLcL::synapse0x29794e0() {
   return (neuron0x2977910()*0.340496);
}

double NNfunction_ss_cLcL::synapse0x2979e70() {
   return (neuron0x2981180()*-1.29243);
}

double NNfunction_ss_cLcL::synapse0x2979eb0() {
   return (neuron0x2981b50()*-0.85346);
}

double NNfunction_ss_cLcL::synapse0x296cf00() {
   return (neuron0x2982520()*0.0503849);
}

double NNfunction_ss_cLcL::synapse0x296cf40() {
   return (neuron0x2982ef0()*-0.222796);
}

double NNfunction_ss_cLcL::synapse0x297bf60() {
   return (neuron0x29838c0()*-1.36394);
}

double NNfunction_ss_cLcL::synapse0x297bfa0() {
   return (neuron0x2984290()*-0.703772);
}

double NNfunction_ss_cLcL::synapse0x297c930() {
   return (neuron0x2984c60()*0.706583);
}

double NNfunction_ss_cLcL::synapse0x297c970() {
   return (neuron0x2985630()*0.23637);
}

double NNfunction_ss_cLcL::synapse0x297d300() {
   return (neuron0x297b6c0()*-0.525834);
}

double NNfunction_ss_cLcL::synapse0x297d340() {
   return (neuron0x2988210()*-0.282613);
}

double NNfunction_ss_cLcL::synapse0x297dcd0() {
   return (neuron0x2988be0()*-0.166845);
}

double NNfunction_ss_cLcL::synapse0x297dd10() {
   return (neuron0x29895b0()*-1.30456);
}

double NNfunction_ss_cLcL::synapse0x297e6a0() {
   return (neuron0x2989f80()*-0.0885872);
}

double NNfunction_ss_cLcL::synapse0x297e6e0() {
   return (neuron0x298a950()*-0.713803);
}

double NNfunction_ss_cLcL::synapse0x29771f0() {
   return (neuron0x298b320()*-0.371798);
}

double NNfunction_ss_cLcL::synapse0x2977230() {
   return (neuron0x298bcf0()*-0.226501);
}

double NNfunction_ss_cLcL::synapse0x2980aa0() {
   return (neuron0x298c6c0()*0.231987);
}

double NNfunction_ss_cLcL::synapse0x2980ae0() {
   return (neuron0x298d2a0()*-0.526632);
}

double NNfunction_ss_cLcL::synapse0x2981430() {
   return (neuron0x298dc70()*-0.159418);
}

double NNfunction_ss_cLcL::synapse0x2981470() {
   return (neuron0x297eaf0()*-0.454581);
}

double NNfunction_ss_cLcL::synapse0x2981e00() {
   return (neuron0x297f4c0()*-0.12915);
}

double NNfunction_ss_cLcL::synapse0x2981e40() {
   return (neuron0x297fe90()*-0.769824);
}

double NNfunction_ss_cLcL::synapse0x29827d0() {
   return (neuron0x29924d0()*-0.210691);
}

double NNfunction_ss_cLcL::synapse0x2982810() {
   return (neuron0x2992d80()*-1.12248);
}

double NNfunction_ss_cLcL::synapse0x29831a0() {
   return (neuron0x2993750()*-0.767924);
}

double NNfunction_ss_cLcL::synapse0x29831e0() {
   return (neuron0x2994120()*-1.4051);
}

double NNfunction_ss_cLcL::synapse0x29858e0() {
   return (neuron0x296f0b0()*0.0538541);
}

double NNfunction_ss_cLcL::synapse0x2985920() {
   return (neuron0x296f8f0()*-0.00682493);
}

double NNfunction_ss_cLcL::synapse0x297aea0() {
   return (neuron0x29703d0()*0.0158455);
}

double NNfunction_ss_cLcL::synapse0x297aee0() {
   return (neuron0x296fe70()*0.0213518);
}

double NNfunction_ss_cLcL::synapse0x29884c0() {
   return (neuron0x29711b0()*0.0170531);
}

double NNfunction_ss_cLcL::synapse0x2988500() {
   return (neuron0x2972c80()*-0.94821);
}

double NNfunction_ss_cLcL::synapse0x2988e90() {
   return (neuron0x2973a50()*-0.024373);
}

double NNfunction_ss_cLcL::synapse0x2988ed0() {
   return (neuron0x2974420()*-0.0307664);
}

double NNfunction_ss_cLcL::synapse0x2989860() {
   return (neuron0x2974df0()*0.00112552);
}

double NNfunction_ss_cLcL::synapse0x29898a0() {
   return (neuron0x29758d0()*-0.0243049);
}

double NNfunction_ss_cLcL::synapse0x298a230() {
   return (neuron0x29762a0()*-0.65008);
}

double NNfunction_ss_cLcL::synapse0x298a270() {
   return (neuron0x2973380()*-0.00971879);
}

double NNfunction_ss_cLcL::synapse0x298ac00() {
   return (neuron0x2977e50()*-0.0413152);
}

double NNfunction_ss_cLcL::synapse0x298ac40() {
   return (neuron0x2978820()*0.43065);
}

double NNfunction_ss_cLcL::synapse0x298b5d0() {
   return (neuron0x29791f0()*-0.208368);
}

double NNfunction_ss_cLcL::synapse0x298b610() {
   return (neuron0x2979bc0()*-0.00853602);
}

double NNfunction_ss_cLcL::synapse0x298bfa0() {
   return (neuron0x297b9d0()*-0.00774427);
}

double NNfunction_ss_cLcL::synapse0x298bfe0() {
   return (neuron0x297bcb0()*-0.0567773);
}

double NNfunction_ss_cLcL::synapse0x298c970() {
   return (neuron0x297c680()*-0.0115988);
}

double NNfunction_ss_cLcL::synapse0x298c9b0() {
   return (neuron0x297d050()*-0.00197797);
}

double NNfunction_ss_cLcL::synapse0x298d550() {
   return (neuron0x297da20()*0.344654);
}

double NNfunction_ss_cLcL::synapse0x298d590() {
   return (neuron0x297e3f0()*-0.0211656);
}

double NNfunction_ss_cLcL::synapse0x298df20() {
   return (neuron0x2976f40()*0.00569094);
}

double NNfunction_ss_cLcL::synapse0x298df60() {
   return (neuron0x2977910()*-0.00814457);
}

double NNfunction_ss_cLcL::synapse0x297eda0() {
   return (neuron0x2981180()*-0.000938938);
}

double NNfunction_ss_cLcL::synapse0x297ede0() {
   return (neuron0x2981b50()*0.350637);
}

double NNfunction_ss_cLcL::synapse0x297f770() {
   return (neuron0x2982520()*0.0184721);
}

double NNfunction_ss_cLcL::synapse0x297f7b0() {
   return (neuron0x2982ef0()*0.00712877);
}

double NNfunction_ss_cLcL::synapse0x2980140() {
   return (neuron0x29838c0()*-0.00298316);
}

double NNfunction_ss_cLcL::synapse0x2980180() {
   return (neuron0x2984290()*-0.00387182);
}

double NNfunction_ss_cLcL::synapse0x2992660() {
   return (neuron0x2984c60()*0.271017);
}

double NNfunction_ss_cLcL::synapse0x29926a0() {
   return (neuron0x2985630()*-0.00493979);
}

double NNfunction_ss_cLcL::synapse0x2993030() {
   return (neuron0x297b6c0()*-0.0069644);
}

double NNfunction_ss_cLcL::synapse0x2993070() {
   return (neuron0x2988210()*-0.370637);
}

double NNfunction_ss_cLcL::synapse0x2993a00() {
   return (neuron0x2988be0()*-0.0126527);
}

double NNfunction_ss_cLcL::synapse0x2993a40() {
   return (neuron0x29895b0()*-0.0260929);
}

double NNfunction_ss_cLcL::synapse0x29943d0() {
   return (neuron0x2989f80()*-0.142709);
}

double NNfunction_ss_cLcL::synapse0x2994410() {
   return (neuron0x298a950()*0.0395658);
}

double NNfunction_ss_cLcL::synapse0x296f360() {
   return (neuron0x298b320()*-0.00514624);
}

double NNfunction_ss_cLcL::synapse0x296f3a0() {
   return (neuron0x298bcf0()*0.890266);
}

double NNfunction_ss_cLcL::synapse0x2983b70() {
   return (neuron0x298c6c0()*0.0283489);
}

double NNfunction_ss_cLcL::synapse0x2983bb0() {
   return (neuron0x298d2a0()*2.10832);
}

double NNfunction_ss_cLcL::synapse0x2994af0() {
   return (neuron0x298dc70()*0.00879595);
}

double NNfunction_ss_cLcL::synapse0x2994b30() {
   return (neuron0x297eaf0()*1.61053);
}

double NNfunction_ss_cLcL::synapse0x2994b70() {
   return (neuron0x297f4c0()*-0.302287);
}

double NNfunction_ss_cLcL::synapse0x2994bb0() {
   return (neuron0x297fe90()*0.0591371);
}

double NNfunction_ss_cLcL::synapse0x299ba60() {
   return (neuron0x29924d0()*5.49362);
}

double NNfunction_ss_cLcL::synapse0x299baa0() {
   return (neuron0x2992d80()*-0.00325708);
}

double NNfunction_ss_cLcL::synapse0x299bae0() {
   return (neuron0x2993750()*0.0495503);
}

double NNfunction_ss_cLcL::synapse0x299bb20() {
   return (neuron0x2994120()*-0.463462);
}

double NNfunction_ss_cLcL::synapse0x299bea0() {
   return (neuron0x296f0b0()*-2.29971);
}

double NNfunction_ss_cLcL::synapse0x299bee0() {
   return (neuron0x296f8f0()*-0.394204);
}

double NNfunction_ss_cLcL::synapse0x299bf20() {
   return (neuron0x29703d0()*-2.24881);
}

double NNfunction_ss_cLcL::synapse0x299bf60() {
   return (neuron0x296fe70()*5.14004);
}

double NNfunction_ss_cLcL::synapse0x299bfa0() {
   return (neuron0x29711b0()*0.0752389);
}

double NNfunction_ss_cLcL::synapse0x299bfe0() {
   return (neuron0x2972c80()*0.325158);
}

double NNfunction_ss_cLcL::synapse0x299c020() {
   return (neuron0x2973a50()*1.53048);
}

double NNfunction_ss_cLcL::synapse0x299c060() {
   return (neuron0x2974420()*0.824894);
}

double NNfunction_ss_cLcL::synapse0x299c0a0() {
   return (neuron0x2974df0()*-2.02399);
}

double NNfunction_ss_cLcL::synapse0x299c0e0() {
   return (neuron0x29758d0()*-1.72044);
}

double NNfunction_ss_cLcL::synapse0x299c120() {
   return (neuron0x29762a0()*3.92516);
}

double NNfunction_ss_cLcL::synapse0x299c160() {
   return (neuron0x2973380()*-4.54249);
}

double NNfunction_ss_cLcL::synapse0x299c1a0() {
   return (neuron0x2977e50()*-0.106445);
}

double NNfunction_ss_cLcL::synapse0x299c1e0() {
   return (neuron0x2978820()*-0.764468);
}

double NNfunction_ss_cLcL::synapse0x299c220() {
   return (neuron0x29791f0()*2.23482);
}

double NNfunction_ss_cLcL::synapse0x299c260() {
   return (neuron0x2979bc0()*-3.74607);
}

double NNfunction_ss_cLcL::synapse0x299bcf0() {
   return (neuron0x297b9d0()*13.6448);
}

double NNfunction_ss_cLcL::synapse0x299bd30() {
   return (neuron0x297bcb0()*-3.70714);
}

double NNfunction_ss_cLcL::synapse0x299c3b0() {
   return (neuron0x297c680()*-0.248068);
}

double NNfunction_ss_cLcL::synapse0x299c3f0() {
   return (neuron0x297d050()*-3.68937);
}

double NNfunction_ss_cLcL::synapse0x299c430() {
   return (neuron0x297da20()*-0.0436277);
}

double NNfunction_ss_cLcL::synapse0x299c470() {
   return (neuron0x297e3f0()*0.975624);
}

double NNfunction_ss_cLcL::synapse0x299c4b0() {
   return (neuron0x2976f40()*1.61192);
}

double NNfunction_ss_cLcL::synapse0x299c4f0() {
   return (neuron0x2977910()*2.79403);
}

double NNfunction_ss_cLcL::synapse0x299c530() {
   return (neuron0x2981180()*-7.84621);
}

double NNfunction_ss_cLcL::synapse0x299c570() {
   return (neuron0x2981b50()*0.00269739);
}

double NNfunction_ss_cLcL::synapse0x299c5b0() {
   return (neuron0x2982520()*0.453704);
}

double NNfunction_ss_cLcL::synapse0x299c5f0() {
   return (neuron0x2982ef0()*-0.0123996);
}

double NNfunction_ss_cLcL::synapse0x299c630() {
   return (neuron0x29838c0()*-8.5988);
}

double NNfunction_ss_cLcL::synapse0x299c670() {
   return (neuron0x2984290()*-2.55462);
}

double NNfunction_ss_cLcL::synapse0x299c6b0() {
   return (neuron0x2984c60()*2.834);
}

double NNfunction_ss_cLcL::synapse0x299c6f0() {
   return (neuron0x2985630()*7.12385);
}

double NNfunction_ss_cLcL::synapse0x299c2a0() {
   return (neuron0x297b6c0()*-3.3464);
}

double NNfunction_ss_cLcL::synapse0x299c2e0() {
   return (neuron0x2988210()*-2.30249);
}

double NNfunction_ss_cLcL::synapse0x299c320() {
   return (neuron0x2988be0()*4.67014);
}

double NNfunction_ss_cLcL::synapse0x299c360() {
   return (neuron0x29895b0()*-0.423519);
}

double NNfunction_ss_cLcL::synapse0x299c940() {
   return (neuron0x2989f80()*0.0521352);
}

double NNfunction_ss_cLcL::synapse0x299c980() {
   return (neuron0x298a950()*-1.3143);
}

double NNfunction_ss_cLcL::synapse0x299c9c0() {
   return (neuron0x298b320()*-4.32274);
}

double NNfunction_ss_cLcL::synapse0x299ca00() {
   return (neuron0x298bcf0()*0.643938);
}

double NNfunction_ss_cLcL::synapse0x299ca40() {
   return (neuron0x298c6c0()*1.17601);
}

double NNfunction_ss_cLcL::synapse0x299ca80() {
   return (neuron0x298d2a0()*-0.206167);
}

double NNfunction_ss_cLcL::synapse0x299cac0() {
   return (neuron0x298dc70()*-5.59072);
}

double NNfunction_ss_cLcL::synapse0x299cb00() {
   return (neuron0x297eaf0()*0.0429747);
}

double NNfunction_ss_cLcL::synapse0x299cb40() {
   return (neuron0x297f4c0()*0.899489);
}

double NNfunction_ss_cLcL::synapse0x299cb80() {
   return (neuron0x297fe90()*-1.45008);
}

double NNfunction_ss_cLcL::synapse0x299cbc0() {
   return (neuron0x29924d0()*0.0134218);
}

double NNfunction_ss_cLcL::synapse0x299cc00() {
   return (neuron0x2992d80()*-1.48767);
}

double NNfunction_ss_cLcL::synapse0x299cc40() {
   return (neuron0x2993750()*-6.71493);
}

double NNfunction_ss_cLcL::synapse0x299cc80() {
   return (neuron0x2994120()*-8.37961);
}

double NNfunction_ss_cLcL::synapse0x299d000() {
   return (neuron0x296f0b0()*-3.52606);
}

double NNfunction_ss_cLcL::synapse0x299d040() {
   return (neuron0x296f8f0()*-2.43958);
}

double NNfunction_ss_cLcL::synapse0x299d080() {
   return (neuron0x29703d0()*2.21788);
}

double NNfunction_ss_cLcL::synapse0x299d0c0() {
   return (neuron0x296fe70()*0.20687);
}

double NNfunction_ss_cLcL::synapse0x299d100() {
   return (neuron0x29711b0()*-2.30197);
}

double NNfunction_ss_cLcL::synapse0x299d140() {
   return (neuron0x2972c80()*-0.111458);
}

double NNfunction_ss_cLcL::synapse0x299d180() {
   return (neuron0x2973a50()*2.16854);
}

double NNfunction_ss_cLcL::synapse0x299d1c0() {
   return (neuron0x2974420()*1.67944);
}

double NNfunction_ss_cLcL::synapse0x299d200() {
   return (neuron0x2974df0()*7.15967);
}

double NNfunction_ss_cLcL::synapse0x299d240() {
   return (neuron0x29758d0()*1.71284);
}

double NNfunction_ss_cLcL::synapse0x299d280() {
   return (neuron0x29762a0()*-12.3083);
}

double NNfunction_ss_cLcL::synapse0x299d2c0() {
   return (neuron0x2973380()*0.598855);
}

double NNfunction_ss_cLcL::synapse0x299d300() {
   return (neuron0x2977e50()*1.5508);
}

double NNfunction_ss_cLcL::synapse0x299d340() {
   return (neuron0x2978820()*-3.57016);
}

double NNfunction_ss_cLcL::synapse0x299d380() {
   return (neuron0x29791f0()*-2.09058);
}

double NNfunction_ss_cLcL::synapse0x299d3c0() {
   return (neuron0x2979bc0()*0.0786982);
}

double NNfunction_ss_cLcL::synapse0x299ce50() {
   return (neuron0x297b9d0()*0.290892);
}

double NNfunction_ss_cLcL::synapse0x299ce90() {
   return (neuron0x297bcb0()*3.75657);
}

double NNfunction_ss_cLcL::synapse0x299d510() {
   return (neuron0x297c680()*0.894435);
}

double NNfunction_ss_cLcL::synapse0x299d550() {
   return (neuron0x297d050()*0.618392);
}

double NNfunction_ss_cLcL::synapse0x299d590() {
   return (neuron0x297da20()*0.71837);
}

double NNfunction_ss_cLcL::synapse0x299d5d0() {
   return (neuron0x297e3f0()*2.69895);
}

double NNfunction_ss_cLcL::synapse0x299d610() {
   return (neuron0x2976f40()*-5.31654);
}

double NNfunction_ss_cLcL::synapse0x299d650() {
   return (neuron0x2977910()*0.34806);
}

double NNfunction_ss_cLcL::synapse0x299d690() {
   return (neuron0x2981180()*-0.154111);
}

double NNfunction_ss_cLcL::synapse0x299d6d0() {
   return (neuron0x2981b50()*-6.08572);
}

double NNfunction_ss_cLcL::synapse0x299d710() {
   return (neuron0x2982520()*-2.52108);
}

double NNfunction_ss_cLcL::synapse0x299d750() {
   return (neuron0x2982ef0()*-2.91933);
}

double NNfunction_ss_cLcL::synapse0x299d790() {
   return (neuron0x29838c0()*0.060825);
}

double NNfunction_ss_cLcL::synapse0x299d7d0() {
   return (neuron0x2984290()*-2.4483);
}

double NNfunction_ss_cLcL::synapse0x299d810() {
   return (neuron0x2984c60()*5.79887);
}

double NNfunction_ss_cLcL::synapse0x299d850() {
   return (neuron0x2985630()*0.258645);
}

double NNfunction_ss_cLcL::synapse0x299d400() {
   return (neuron0x297b6c0()*0.0685895);
}

double NNfunction_ss_cLcL::synapse0x299d440() {
   return (neuron0x2988210()*-5.62019);
}

double NNfunction_ss_cLcL::synapse0x299d480() {
   return (neuron0x2988be0()*1.43925);
}

double NNfunction_ss_cLcL::synapse0x299d4c0() {
   return (neuron0x29895b0()*3.68331);
}

double NNfunction_ss_cLcL::synapse0x299daa0() {
   return (neuron0x2989f80()*-2.81358);
}

double NNfunction_ss_cLcL::synapse0x299dae0() {
   return (neuron0x298a950()*-2.60342);
}

double NNfunction_ss_cLcL::synapse0x299db20() {
   return (neuron0x298b320()*1.29706);
}

double NNfunction_ss_cLcL::synapse0x299db60() {
   return (neuron0x298bcf0()*4.83158);
}

double NNfunction_ss_cLcL::synapse0x299dba0() {
   return (neuron0x298c6c0()*-2.19935);
}

double NNfunction_ss_cLcL::synapse0x299dbe0() {
   return (neuron0x298d2a0()*-2.59324);
}

double NNfunction_ss_cLcL::synapse0x299dc20() {
   return (neuron0x298dc70()*-0.901748);
}

double NNfunction_ss_cLcL::synapse0x299dc60() {
   return (neuron0x297eaf0()*3.76372);
}

double NNfunction_ss_cLcL::synapse0x299dca0() {
   return (neuron0x297f4c0()*-2.38832);
}

double NNfunction_ss_cLcL::synapse0x299dce0() {
   return (neuron0x297fe90()*-2.73577);
}

double NNfunction_ss_cLcL::synapse0x299dd20() {
   return (neuron0x29924d0()*-1.90989);
}

double NNfunction_ss_cLcL::synapse0x299dd60() {
   return (neuron0x2992d80()*-1.52739);
}

double NNfunction_ss_cLcL::synapse0x299dda0() {
   return (neuron0x2993750()*-2.36455);
}

double NNfunction_ss_cLcL::synapse0x299dde0() {
   return (neuron0x2994120()*10.6239);
}

double NNfunction_ss_cLcL::synapse0x299e160() {
   return (neuron0x296f0b0()*-0.59021);
}

double NNfunction_ss_cLcL::synapse0x299e1a0() {
   return (neuron0x296f8f0()*5.04869);
}

double NNfunction_ss_cLcL::synapse0x299e1e0() {
   return (neuron0x29703d0()*-0.787413);
}

double NNfunction_ss_cLcL::synapse0x299e220() {
   return (neuron0x296fe70()*0.857894);
}

double NNfunction_ss_cLcL::synapse0x299e260() {
   return (neuron0x29711b0()*1.43275);
}

double NNfunction_ss_cLcL::synapse0x299e2a0() {
   return (neuron0x2972c80()*1.9624);
}

double NNfunction_ss_cLcL::synapse0x299e2e0() {
   return (neuron0x2973a50()*-1.59592);
}

double NNfunction_ss_cLcL::synapse0x299e320() {
   return (neuron0x2974420()*-1.89508);
}

double NNfunction_ss_cLcL::synapse0x299e360() {
   return (neuron0x2974df0()*-1.8419);
}

double NNfunction_ss_cLcL::synapse0x299e3a0() {
   return (neuron0x29758d0()*-2.09183);
}

double NNfunction_ss_cLcL::synapse0x299e3e0() {
   return (neuron0x29762a0()*4.10058);
}

double NNfunction_ss_cLcL::synapse0x299e420() {
   return (neuron0x2973380()*-0.101508);
}

double NNfunction_ss_cLcL::synapse0x299e460() {
   return (neuron0x2977e50()*-0.992988);
}

double NNfunction_ss_cLcL::synapse0x299e4a0() {
   return (neuron0x2978820()*-0.934048);
}

double NNfunction_ss_cLcL::synapse0x299e4e0() {
   return (neuron0x29791f0()*-0.311452);
}

double NNfunction_ss_cLcL::synapse0x299e520() {
   return (neuron0x2979bc0()*-1.36598);
}

double NNfunction_ss_cLcL::synapse0x299dfb0() {
   return (neuron0x297b9d0()*2.76508);
}

double NNfunction_ss_cLcL::synapse0x299dff0() {
   return (neuron0x297bcb0()*-1.45522);
}

double NNfunction_ss_cLcL::synapse0x299e670() {
   return (neuron0x297c680()*-0.8423);
}

double NNfunction_ss_cLcL::synapse0x299e6b0() {
   return (neuron0x297d050()*-1.91879);
}

double NNfunction_ss_cLcL::synapse0x299e6f0() {
   return (neuron0x297da20()*0.293074);
}

double NNfunction_ss_cLcL::synapse0x299e730() {
   return (neuron0x297e3f0()*0.437125);
}

double NNfunction_ss_cLcL::synapse0x299e770() {
   return (neuron0x2976f40()*1.07913);
}

double NNfunction_ss_cLcL::synapse0x299e7b0() {
   return (neuron0x2977910()*0.0548088);
}

double NNfunction_ss_cLcL::synapse0x299e7f0() {
   return (neuron0x2981180()*-4.85548);
}

double NNfunction_ss_cLcL::synapse0x299e830() {
   return (neuron0x2981b50()*-0.951825);
}

double NNfunction_ss_cLcL::synapse0x299e870() {
   return (neuron0x2982520()*1.105);
}

double NNfunction_ss_cLcL::synapse0x299e8b0() {
   return (neuron0x2982ef0()*1.26293);
}

double NNfunction_ss_cLcL::synapse0x299e8f0() {
   return (neuron0x29838c0()*-3.91692);
}

double NNfunction_ss_cLcL::synapse0x299e930() {
   return (neuron0x2984290()*1.05661);
}

double NNfunction_ss_cLcL::synapse0x299e970() {
   return (neuron0x2984c60()*-2.04355);
}

double NNfunction_ss_cLcL::synapse0x299e9b0() {
   return (neuron0x2985630()*2.91339);
}

double NNfunction_ss_cLcL::synapse0x299e560() {
   return (neuron0x297b6c0()*-2.72444);
}

double NNfunction_ss_cLcL::synapse0x299e5a0() {
   return (neuron0x2988210()*1.10107);
}

double NNfunction_ss_cLcL::synapse0x299e5e0() {
   return (neuron0x2988be0()*0.434662);
}

double NNfunction_ss_cLcL::synapse0x299e620() {
   return (neuron0x29895b0()*-1.60284);
}

double NNfunction_ss_cLcL::synapse0x299ec00() {
   return (neuron0x2989f80()*2.9681);
}

double NNfunction_ss_cLcL::synapse0x299ec40() {
   return (neuron0x298a950()*-0.573649);
}

double NNfunction_ss_cLcL::synapse0x299ec80() {
   return (neuron0x298b320()*-3.76202);
}

double NNfunction_ss_cLcL::synapse0x299ecc0() {
   return (neuron0x298bcf0()*-2.15055);
}

double NNfunction_ss_cLcL::synapse0x299ed00() {
   return (neuron0x298c6c0()*1.2987);
}

double NNfunction_ss_cLcL::synapse0x299ed40() {
   return (neuron0x298d2a0()*0.0443005);
}

double NNfunction_ss_cLcL::synapse0x299ed80() {
   return (neuron0x298dc70()*-1.11599);
}

double NNfunction_ss_cLcL::synapse0x299edc0() {
   return (neuron0x297eaf0()*-0.884798);
}

double NNfunction_ss_cLcL::synapse0x299ee00() {
   return (neuron0x297f4c0()*0.176246);
}

double NNfunction_ss_cLcL::synapse0x299ee40() {
   return (neuron0x297fe90()*1.04722);
}

double NNfunction_ss_cLcL::synapse0x299ee80() {
   return (neuron0x29924d0()*-2.5336);
}

double NNfunction_ss_cLcL::synapse0x299eec0() {
   return (neuron0x2992d80()*2.10748);
}

double NNfunction_ss_cLcL::synapse0x299ef00() {
   return (neuron0x2993750()*-3.27373);
}

double NNfunction_ss_cLcL::synapse0x299ef40() {
   return (neuron0x2994120()*-2.35209);
}

double NNfunction_ss_cLcL::synapse0x299f1a0() {
   return (neuron0x299b320()*-3.37125);
}

double NNfunction_ss_cLcL::synapse0x299f1e0() {
   return (neuron0x299b6c0()*-11.6845);
}

double NNfunction_ss_cLcL::synapse0x299f220() {
   return (neuron0x299bb60()*-4.41915);
}

double NNfunction_ss_cLcL::synapse0x299f260() {
   return (neuron0x299ccc0()*-4.22266);
}

double NNfunction_ss_cLcL::synapse0x299f2a0() {
   return (neuron0x299de20()*1.57237);
}

