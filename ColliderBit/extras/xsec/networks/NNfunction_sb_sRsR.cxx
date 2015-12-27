#include "NNfunction_sb_sRsR.h"
#include <cmath>

double NNfunction_sb_sRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8754)/15.0509;
   input1 = (in1 - 58.0984)/734.813;
   input2 = (in2 - 379.705)/473.297;
   input3 = (in3 - 293.616)/634.356;
   input4 = (in4 - 758.285)/687.37;
   input5 = (in5 - 656.366)/656.995;
   input6 = (in6 - 664.693)/666.193;
   input7 = (in7 - 654.942)/655.167;
   input8 = (in8 - 653.54)/689.678;
   input9 = (in9 - 645.782)/676.214;
   input10 = (in10 - 651.209)/696.596;
   input11 = (in11 - 712.376)/582.72;
   input12 = (in12 - 716.143)/588.96;
   input13 = (in13 - 554.498)/369.551;
   input14 = (in14 - 703.418)/551.49;
   input15 = (in15 - 703.235)/551.391;
   input16 = (in16 - 496.618)/386.483;
   input17 = (in17 - 720.38)/604.092;
   input18 = (in18 - 537.737)/313.714;
   input19 = (in19 - 718.005)/597.206;
   input20 = (in20 - -230.855)/420.467;
   input21 = (in21 - -295.441)/902.165;
   input22 = (in22 - -2.93383)/888.915;
   input23 = (in23 - -2.68624)/510.906;
   switch(index) {
     case 0:
         return neuron0x2772e50();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRsR::Value(int index, double* input) {
   input0 = (input[0] - 22.8754)/15.0509;
   input1 = (input[1] - 58.0984)/734.813;
   input2 = (input[2] - 379.705)/473.297;
   input3 = (input[3] - 293.616)/634.356;
   input4 = (input[4] - 758.285)/687.37;
   input5 = (input[5] - 656.366)/656.995;
   input6 = (input[6] - 664.693)/666.193;
   input7 = (input[7] - 654.942)/655.167;
   input8 = (input[8] - 653.54)/689.678;
   input9 = (input[9] - 645.782)/676.214;
   input10 = (input[10] - 651.209)/696.596;
   input11 = (input[11] - 712.376)/582.72;
   input12 = (input[12] - 716.143)/588.96;
   input13 = (input[13] - 554.498)/369.551;
   input14 = (input[14] - 703.418)/551.49;
   input15 = (input[15] - 703.235)/551.391;
   input16 = (input[16] - 496.618)/386.483;
   input17 = (input[17] - 720.38)/604.092;
   input18 = (input[18] - 537.737)/313.714;
   input19 = (input[19] - 718.005)/597.206;
   input20 = (input[20] - -230.855)/420.467;
   input21 = (input[21] - -295.441)/902.165;
   input22 = (input[22] - -2.93383)/888.915;
   input23 = (input[23] - -2.68624)/510.906;
   switch(index) {
     case 0:
         return neuron0x2772e50();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRsR::neuron0x273dec0() {
   return input0;
}

double NNfunction_sb_sRsR::neuron0x273e170() {
   return input1;
}

double NNfunction_sb_sRsR::neuron0x273e4b0() {
   return input2;
}

double NNfunction_sb_sRsR::neuron0x273e7f0() {
   return input3;
}

double NNfunction_sb_sRsR::neuron0x273eb30() {
   return input4;
}

double NNfunction_sb_sRsR::neuron0x273ee70() {
   return input5;
}

double NNfunction_sb_sRsR::neuron0x273f1b0() {
   return input6;
}

double NNfunction_sb_sRsR::neuron0x273f4f0() {
   return input7;
}

double NNfunction_sb_sRsR::neuron0x273f830() {
   return input8;
}

double NNfunction_sb_sRsR::neuron0x273fb70() {
   return input9;
}

double NNfunction_sb_sRsR::neuron0x273feb0() {
   return input10;
}

double NNfunction_sb_sRsR::neuron0x27401f0() {
   return input11;
}

double NNfunction_sb_sRsR::neuron0x2740530() {
   return input12;
}

double NNfunction_sb_sRsR::neuron0x2740870() {
   return input13;
}

double NNfunction_sb_sRsR::neuron0x2740bb0() {
   return input14;
}

double NNfunction_sb_sRsR::neuron0x2740ef0() {
   return input15;
}

double NNfunction_sb_sRsR::neuron0x2741230() {
   return input16;
}

double NNfunction_sb_sRsR::neuron0x2741790() {
   return input17;
}

double NNfunction_sb_sRsR::neuron0x2741ad0() {
   return input18;
}

double NNfunction_sb_sRsR::neuron0x2741e10() {
   return input19;
}

double NNfunction_sb_sRsR::neuron0x2742150() {
   return input20;
}

double NNfunction_sb_sRsR::neuron0x2742490() {
   return input21;
}

double NNfunction_sb_sRsR::neuron0x27427d0() {
   return input22;
}

double NNfunction_sb_sRsR::neuron0x2742b10() {
   return input23;
}

double NNfunction_sb_sRsR::input0x2742f80() {
   double input = -1.32511;
   input += synapse0x27432c0();
   input += synapse0x2743300();
   input += synapse0x2743340();
   input += synapse0x2743380();
   input += synapse0x27433c0();
   input += synapse0x2743400();
   input += synapse0x2743440();
   input += synapse0x2743480();
   input += synapse0x27434c0();
   input += synapse0x2743500();
   input += synapse0x2743540();
   input += synapse0x2743580();
   input += synapse0x27435c0();
   input += synapse0x2743600();
   input += synapse0x2743640();
   input += synapse0x2743680();
   input += synapse0x2743110();
   input += synapse0x2743150();
   input += synapse0x24fa070();
   input += synapse0x24fa0b0();
   input += synapse0x27436c0();
   input += synapse0x2743700();
   input += synapse0x2743740();
   input += synapse0x2743780();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2742f80() {
   double input = input0x2742f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27437c0() {
   double input = 1.40498;
   input += synapse0x2743b00();
   input += synapse0x2743b40();
   input += synapse0x2743b80();
   input += synapse0x2743bc0();
   input += synapse0x2743c00();
   input += synapse0x2743c40();
   input += synapse0x2743c80();
   input += synapse0x2743cc0();
   input += synapse0x2743d00();
   input += synapse0x24f9ec0();
   input += synapse0x24f9f00();
   input += synapse0x24f9f40();
   input += synapse0x24f9f80();
   input += synapse0x2743f50();
   input += synapse0x2743f90();
   input += synapse0x2743fd0();
   input += synapse0x2743950();
   input += synapse0x2743990();
   input += synapse0x2744120();
   input += synapse0x2744160();
   input += synapse0x27441a0();
   input += synapse0x27441e0();
   input += synapse0x2744220();
   input += synapse0x2744260();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27437c0() {
   double input = input0x27437c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27442a0() {
   double input = 0.35035;
   input += synapse0x27445e0();
   input += synapse0x2744620();
   input += synapse0x2744660();
   input += synapse0x27446a0();
   input += synapse0x27446e0();
   input += synapse0x2744720();
   input += synapse0x2744760();
   input += synapse0x27447a0();
   input += synapse0x27447e0();
   input += synapse0x2744820();
   input += synapse0x2744860();
   input += synapse0x27448a0();
   input += synapse0x27448e0();
   input += synapse0x2744920();
   input += synapse0x2744960();
   input += synapse0x27449a0();
   input += synapse0x2744430();
   input += synapse0x2744470();
   input += synapse0x24fa720();
   input += synapse0x2507fb0();
   input += synapse0x2507ff0();
   input += synapse0x27468d0();
   input += synapse0x2746910();
   input += synapse0x273dc00();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27442a0() {
   double input = input0x27442a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2743d40() {
   double input = 0.577848;
   input += synapse0x273dcd0();
   input += synapse0x2508830();
   input += synapse0x2743ed0();
   input += synapse0x2743f10();
   input += synapse0x2744af0();
   input += synapse0x2744b30();
   input += synapse0x2744b70();
   input += synapse0x2744bb0();
   input += synapse0x2744bf0();
   input += synapse0x2744c30();
   input += synapse0x2744c70();
   input += synapse0x2744cb0();
   input += synapse0x2744cf0();
   input += synapse0x2744d30();
   input += synapse0x2744d70();
   input += synapse0x2744db0();
   input += synapse0x273dc40();
   input += synapse0x273dc80();
   input += synapse0x2744f00();
   input += synapse0x2744f40();
   input += synapse0x2744f80();
   input += synapse0x2744fc0();
   input += synapse0x2745000();
   input += synapse0x2745040();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2743d40() {
   double input = input0x2743d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2745080() {
   double input = -1.80559;
   input += synapse0x27453c0();
   input += synapse0x2745400();
   input += synapse0x2745440();
   input += synapse0x2745480();
   input += synapse0x27454c0();
   input += synapse0x2745500();
   input += synapse0x2745540();
   input += synapse0x2745580();
   input += synapse0x27455c0();
   input += synapse0x2745600();
   input += synapse0x2745640();
   input += synapse0x2745680();
   input += synapse0x27456c0();
   input += synapse0x2745700();
   input += synapse0x2745740();
   input += synapse0x2745780();
   input += synapse0x27458d0();
   input += synapse0x2745210();
   input += synapse0x2745250();
   input += synapse0x2746a10();
   input += synapse0x2746a50();
   input += synapse0x2746a90();
   input += synapse0x2746ad0();
   input += synapse0x2746b10();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2745080() {
   double input = input0x2745080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2746b50() {
   double input = 0.581708;
   input += synapse0x2746e90();
   input += synapse0x2746ed0();
   input += synapse0x2746f10();
   input += synapse0x2746f50();
   input += synapse0x2746f90();
   input += synapse0x2746fd0();
   input += synapse0x2747010();
   input += synapse0x2747050();
   input += synapse0x2747090();
   input += synapse0x2508300();
   input += synapse0x2508340();
   input += synapse0x2508380();
   input += synapse0x25083c0();
   input += synapse0x2508400();
   input += synapse0x2508440();
   input += synapse0x2508480();
   input += synapse0x2746ce0();
   input += synapse0x2746d20();
   input += synapse0x25085d0();
   input += synapse0x2508610();
   input += synapse0x2508650();
   input += synapse0x2508690();
   input += synapse0x25086d0();
   input += synapse0x27478e0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2746b50() {
   double input = input0x2746b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2747920() {
   double input = 0.743158;
   input += synapse0x2747c60();
   input += synapse0x2747ca0();
   input += synapse0x2747ce0();
   input += synapse0x2747d20();
   input += synapse0x2747d60();
   input += synapse0x2747da0();
   input += synapse0x2747de0();
   input += synapse0x2747e20();
   input += synapse0x2747e60();
   input += synapse0x2747ea0();
   input += synapse0x2747ee0();
   input += synapse0x2747f20();
   input += synapse0x2747f60();
   input += synapse0x2747fa0();
   input += synapse0x2747fe0();
   input += synapse0x2748020();
   input += synapse0x2747ab0();
   input += synapse0x2747af0();
   input += synapse0x2748170();
   input += synapse0x27481b0();
   input += synapse0x27481f0();
   input += synapse0x2748230();
   input += synapse0x2748270();
   input += synapse0x27482b0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2747920() {
   double input = input0x2747920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27482f0() {
   double input = -0.569823;
   input += synapse0x2748630();
   input += synapse0x2748670();
   input += synapse0x27486b0();
   input += synapse0x27486f0();
   input += synapse0x2748730();
   input += synapse0x2748770();
   input += synapse0x27487b0();
   input += synapse0x27487f0();
   input += synapse0x2748830();
   input += synapse0x2748870();
   input += synapse0x27488b0();
   input += synapse0x27488f0();
   input += synapse0x2748930();
   input += synapse0x2748970();
   input += synapse0x27489b0();
   input += synapse0x27489f0();
   input += synapse0x2748480();
   input += synapse0x27484c0();
   input += synapse0x2748b40();
   input += synapse0x2748b80();
   input += synapse0x2748bc0();
   input += synapse0x2748c00();
   input += synapse0x2748c40();
   input += synapse0x2748c80();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27482f0() {
   double input = input0x27482f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2748cc0() {
   double input = -0.971351;
   input += synapse0x2741680();
   input += synapse0x27416c0();
   input += synapse0x2741700();
   input += synapse0x2741740();
   input += synapse0x2749210();
   input += synapse0x2749250();
   input += synapse0x2749290();
   input += synapse0x27492d0();
   input += synapse0x2749310();
   input += synapse0x2749350();
   input += synapse0x2749390();
   input += synapse0x27493d0();
   input += synapse0x2749410();
   input += synapse0x2749450();
   input += synapse0x2749490();
   input += synapse0x27494d0();
   input += synapse0x2748e50();
   input += synapse0x2748e90();
   input += synapse0x2749620();
   input += synapse0x2749660();
   input += synapse0x27496a0();
   input += synapse0x27496e0();
   input += synapse0x2749720();
   input += synapse0x2749760();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2748cc0() {
   double input = input0x2748cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27497a0() {
   double input = 0.384411;
   input += synapse0x2749ae0();
   input += synapse0x2749b20();
   input += synapse0x2749b60();
   input += synapse0x2749ba0();
   input += synapse0x2749be0();
   input += synapse0x2749c20();
   input += synapse0x2749c60();
   input += synapse0x2749ca0();
   input += synapse0x2749ce0();
   input += synapse0x2749d20();
   input += synapse0x2749d60();
   input += synapse0x2749da0();
   input += synapse0x2749de0();
   input += synapse0x2749e20();
   input += synapse0x2749e60();
   input += synapse0x2749ea0();
   input += synapse0x2749930();
   input += synapse0x2749970();
   input += synapse0x2749ff0();
   input += synapse0x274a030();
   input += synapse0x274a070();
   input += synapse0x274a0b0();
   input += synapse0x274a0f0();
   input += synapse0x274a130();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27497a0() {
   double input = input0x27497a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274a170() {
   double input = -1.02679;
   input += synapse0x274a4b0();
   input += synapse0x274a4f0();
   input += synapse0x274a530();
   input += synapse0x274a570();
   input += synapse0x274a5b0();
   input += synapse0x274a5f0();
   input += synapse0x274a630();
   input += synapse0x274a670();
   input += synapse0x274a6b0();
   input += synapse0x274a6f0();
   input += synapse0x274a730();
   input += synapse0x274a770();
   input += synapse0x274a7b0();
   input += synapse0x274a7f0();
   input += synapse0x274a830();
   input += synapse0x274a870();
   input += synapse0x274a300();
   input += synapse0x274a340();
   input += synapse0x27470d0();
   input += synapse0x2747110();
   input += synapse0x2747150();
   input += synapse0x2747190();
   input += synapse0x27471d0();
   input += synapse0x2747210();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274a170() {
   double input = input0x274a170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2747250() {
   double input = 0.661954;
   input += synapse0x2747590();
   input += synapse0x27475d0();
   input += synapse0x2747610();
   input += synapse0x2747650();
   input += synapse0x2747690();
   input += synapse0x27476d0();
   input += synapse0x2747710();
   input += synapse0x2747750();
   input += synapse0x2747790();
   input += synapse0x27477d0();
   input += synapse0x2747810();
   input += synapse0x2747850();
   input += synapse0x2747890();
   input += synapse0x274b9d0();
   input += synapse0x274ba10();
   input += synapse0x274ba50();
   input += synapse0x27473e0();
   input += synapse0x2747420();
   input += synapse0x274bba0();
   input += synapse0x274bbe0();
   input += synapse0x274bc20();
   input += synapse0x274bc60();
   input += synapse0x274bca0();
   input += synapse0x274bce0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2747250() {
   double input = input0x2747250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274bd20() {
   double input = 0.973299;
   input += synapse0x274c060();
   input += synapse0x274c0a0();
   input += synapse0x274c0e0();
   input += synapse0x274c120();
   input += synapse0x274c160();
   input += synapse0x274c1a0();
   input += synapse0x274c1e0();
   input += synapse0x274c220();
   input += synapse0x274c260();
   input += synapse0x274c2a0();
   input += synapse0x274c2e0();
   input += synapse0x274c320();
   input += synapse0x274c360();
   input += synapse0x274c3a0();
   input += synapse0x274c3e0();
   input += synapse0x274c420();
   input += synapse0x274beb0();
   input += synapse0x274bef0();
   input += synapse0x274c570();
   input += synapse0x274c5b0();
   input += synapse0x274c5f0();
   input += synapse0x274c630();
   input += synapse0x274c670();
   input += synapse0x274c6b0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274bd20() {
   double input = input0x274bd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274c6f0() {
   double input = 0.885261;
   input += synapse0x274ca30();
   input += synapse0x274ca70();
   input += synapse0x274cab0();
   input += synapse0x274caf0();
   input += synapse0x274cb30();
   input += synapse0x274cb70();
   input += synapse0x274cbb0();
   input += synapse0x274cbf0();
   input += synapse0x274cc30();
   input += synapse0x274cc70();
   input += synapse0x274ccb0();
   input += synapse0x274ccf0();
   input += synapse0x274cd30();
   input += synapse0x274cd70();
   input += synapse0x274cdb0();
   input += synapse0x274cdf0();
   input += synapse0x274c880();
   input += synapse0x274c8c0();
   input += synapse0x274cf40();
   input += synapse0x274cf80();
   input += synapse0x274cfc0();
   input += synapse0x274d000();
   input += synapse0x274d040();
   input += synapse0x274d080();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274c6f0() {
   double input = input0x274c6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274d0c0() {
   double input = -0.523385;
   input += synapse0x274d400();
   input += synapse0x274d440();
   input += synapse0x274d480();
   input += synapse0x274d4c0();
   input += synapse0x274d500();
   input += synapse0x274d540();
   input += synapse0x274d580();
   input += synapse0x274d5c0();
   input += synapse0x274d600();
   input += synapse0x274d640();
   input += synapse0x274d680();
   input += synapse0x274d6c0();
   input += synapse0x274d700();
   input += synapse0x274d740();
   input += synapse0x274d780();
   input += synapse0x274d7c0();
   input += synapse0x274d250();
   input += synapse0x274d290();
   input += synapse0x274d910();
   input += synapse0x274d950();
   input += synapse0x274d990();
   input += synapse0x274d9d0();
   input += synapse0x274da10();
   input += synapse0x274da50();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274d0c0() {
   double input = input0x274d0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274da90() {
   double input = 1.857;
   input += synapse0x274ddd0();
   input += synapse0x273e050();
   input += synapse0x273e090();
   input += synapse0x273e390();
   input += synapse0x273e3d0();
   input += synapse0x273e6d0();
   input += synapse0x273e710();
   input += synapse0x273ea10();
   input += synapse0x273ea50();
   input += synapse0x273ed50();
   input += synapse0x273ed90();
   input += synapse0x273f090();
   input += synapse0x273f0d0();
   input += synapse0x273f3d0();
   input += synapse0x273f410();
   input += synapse0x273f710();
   input += synapse0x273f750();
   input += synapse0x273fa50();
   input += synapse0x273fa90();
   input += synapse0x273fd90();
   input += synapse0x273fdd0();
   input += synapse0x27400d0();
   input += synapse0x2740110();
   input += synapse0x2740410();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274da90() {
   double input = input0x274da90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274f8a0() {
   double input = -0.790443;
   input += synapse0x2740450();
   input += synapse0x2741110();
   input += synapse0x2741150();
   input += synapse0x274dc20();
   input += synapse0x274dc60();
   input += synapse0x2741450();
   input += synapse0x2741490();
   input += synapse0x27419b0();
   input += synapse0x27419f0();
   input += synapse0x2741cf0();
   input += synapse0x2741d30();
   input += synapse0x2742030();
   input += synapse0x2742070();
   input += synapse0x2742370();
   input += synapse0x27423b0();
   input += synapse0x27426b0();
   input += synapse0x27426f0();
   input += synapse0x27429f0();
   input += synapse0x2742a30();
   input += synapse0x2742d30();
   input += synapse0x2742d70();
   input += synapse0x2740750();
   input += synapse0x2740790();
   input += synapse0x274fb40();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274f8a0() {
   double input = input0x274f8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274fb80() {
   double input = 0.441813;
   input += synapse0x274fec0();
   input += synapse0x274ff00();
   input += synapse0x274ff40();
   input += synapse0x274ff80();
   input += synapse0x274ffc0();
   input += synapse0x2750000();
   input += synapse0x2750040();
   input += synapse0x2750080();
   input += synapse0x27500c0();
   input += synapse0x2750100();
   input += synapse0x2750140();
   input += synapse0x2750180();
   input += synapse0x27501c0();
   input += synapse0x2750200();
   input += synapse0x2750240();
   input += synapse0x2750280();
   input += synapse0x274fd10();
   input += synapse0x274fd50();
   input += synapse0x27503d0();
   input += synapse0x2750410();
   input += synapse0x2750450();
   input += synapse0x2750490();
   input += synapse0x27504d0();
   input += synapse0x2750510();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274fb80() {
   double input = input0x274fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2750550() {
   double input = -2.64454;
   input += synapse0x2750890();
   input += synapse0x27508d0();
   input += synapse0x2750910();
   input += synapse0x2750950();
   input += synapse0x2750990();
   input += synapse0x27509d0();
   input += synapse0x2750a10();
   input += synapse0x2750a50();
   input += synapse0x2750a90();
   input += synapse0x2750ad0();
   input += synapse0x2750b10();
   input += synapse0x2750b50();
   input += synapse0x2750b90();
   input += synapse0x2750bd0();
   input += synapse0x2750c10();
   input += synapse0x2750c50();
   input += synapse0x27506e0();
   input += synapse0x2750720();
   input += synapse0x2750da0();
   input += synapse0x2750de0();
   input += synapse0x2750e20();
   input += synapse0x2750e60();
   input += synapse0x2750ea0();
   input += synapse0x2750ee0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2750550() {
   double input = input0x2750550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2750f20() {
   double input = 7.39477;
   input += synapse0x2751260();
   input += synapse0x27512a0();
   input += synapse0x27512e0();
   input += synapse0x2751320();
   input += synapse0x2751360();
   input += synapse0x27513a0();
   input += synapse0x27513e0();
   input += synapse0x2751420();
   input += synapse0x2751460();
   input += synapse0x27514a0();
   input += synapse0x27514e0();
   input += synapse0x2751520();
   input += synapse0x2751560();
   input += synapse0x27515a0();
   input += synapse0x27515e0();
   input += synapse0x2751620();
   input += synapse0x27510b0();
   input += synapse0x27510f0();
   input += synapse0x2751770();
   input += synapse0x27517b0();
   input += synapse0x27517f0();
   input += synapse0x2751830();
   input += synapse0x2751870();
   input += synapse0x27518b0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2750f20() {
   double input = input0x2750f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27518f0() {
   double input = 1.22788;
   input += synapse0x2751c30();
   input += synapse0x2751c70();
   input += synapse0x2751cb0();
   input += synapse0x2751cf0();
   input += synapse0x2751d30();
   input += synapse0x2751d70();
   input += synapse0x2751db0();
   input += synapse0x2751df0();
   input += synapse0x2751e30();
   input += synapse0x2751e70();
   input += synapse0x2751eb0();
   input += synapse0x2751ef0();
   input += synapse0x2751f30();
   input += synapse0x2751f70();
   input += synapse0x2751fb0();
   input += synapse0x2751ff0();
   input += synapse0x2751a80();
   input += synapse0x2751ac0();
   input += synapse0x2752140();
   input += synapse0x2752180();
   input += synapse0x27521c0();
   input += synapse0x2752200();
   input += synapse0x2752240();
   input += synapse0x2752280();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27518f0() {
   double input = input0x27518f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27522c0() {
   double input = 0.178936;
   input += synapse0x2752600();
   input += synapse0x2752640();
   input += synapse0x2752680();
   input += synapse0x27526c0();
   input += synapse0x2752700();
   input += synapse0x2752740();
   input += synapse0x2752780();
   input += synapse0x27527c0();
   input += synapse0x2752800();
   input += synapse0x274a9c0();
   input += synapse0x274aa00();
   input += synapse0x274aa40();
   input += synapse0x274aa80();
   input += synapse0x274aac0();
   input += synapse0x274ab00();
   input += synapse0x274ab40();
   input += synapse0x2752450();
   input += synapse0x2752490();
   input += synapse0x274ac90();
   input += synapse0x274acd0();
   input += synapse0x274ad10();
   input += synapse0x274ad50();
   input += synapse0x274ad90();
   input += synapse0x274add0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27522c0() {
   double input = input0x27522c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274ae10() {
   double input = -0.574977;
   input += synapse0x274b150();
   input += synapse0x274b190();
   input += synapse0x274b1d0();
   input += synapse0x274b210();
   input += synapse0x274b250();
   input += synapse0x274b290();
   input += synapse0x274b2d0();
   input += synapse0x274b310();
   input += synapse0x274b350();
   input += synapse0x274b390();
   input += synapse0x274b3d0();
   input += synapse0x274b410();
   input += synapse0x274b450();
   input += synapse0x274b490();
   input += synapse0x274b4d0();
   input += synapse0x274b510();
   input += synapse0x274afa0();
   input += synapse0x274afe0();
   input += synapse0x274b660();
   input += synapse0x274b6a0();
   input += synapse0x274b6e0();
   input += synapse0x274b720();
   input += synapse0x274b760();
   input += synapse0x274b7a0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274ae10() {
   double input = input0x274ae10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274b7e0() {
   double input = 2.05265;
   input += synapse0x274b970();
   input += synapse0x2754a00();
   input += synapse0x2754a40();
   input += synapse0x2754a80();
   input += synapse0x2754ac0();
   input += synapse0x2754b00();
   input += synapse0x2754b40();
   input += synapse0x2754b80();
   input += synapse0x2754bc0();
   input += synapse0x2754c00();
   input += synapse0x2754c40();
   input += synapse0x2754c80();
   input += synapse0x2754cc0();
   input += synapse0x2754d00();
   input += synapse0x2754d40();
   input += synapse0x2754d80();
   input += synapse0x2754850();
   input += synapse0x2754890();
   input += synapse0x2754ed0();
   input += synapse0x2754f10();
   input += synapse0x2754f50();
   input += synapse0x2754f90();
   input += synapse0x2754fd0();
   input += synapse0x2755010();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274b7e0() {
   double input = input0x274b7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2755050() {
   double input = -0.0167247;
   input += synapse0x2755390();
   input += synapse0x27553d0();
   input += synapse0x2755410();
   input += synapse0x2755450();
   input += synapse0x2755490();
   input += synapse0x27554d0();
   input += synapse0x2755510();
   input += synapse0x2755550();
   input += synapse0x2755590();
   input += synapse0x27555d0();
   input += synapse0x2755610();
   input += synapse0x2755650();
   input += synapse0x2755690();
   input += synapse0x27556d0();
   input += synapse0x2755710();
   input += synapse0x2755750();
   input += synapse0x27551e0();
   input += synapse0x2755220();
   input += synapse0x27558a0();
   input += synapse0x27558e0();
   input += synapse0x2755920();
   input += synapse0x2755960();
   input += synapse0x27559a0();
   input += synapse0x27559e0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2755050() {
   double input = input0x2755050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2755a20() {
   double input = -0.385506;
   input += synapse0x2755d60();
   input += synapse0x2755da0();
   input += synapse0x2755de0();
   input += synapse0x2755e20();
   input += synapse0x2755e60();
   input += synapse0x2755ea0();
   input += synapse0x2755ee0();
   input += synapse0x2755f20();
   input += synapse0x2755f60();
   input += synapse0x2755fa0();
   input += synapse0x2755fe0();
   input += synapse0x2756020();
   input += synapse0x2756060();
   input += synapse0x27560a0();
   input += synapse0x27560e0();
   input += synapse0x2756120();
   input += synapse0x2755bb0();
   input += synapse0x2755bf0();
   input += synapse0x2756270();
   input += synapse0x27562b0();
   input += synapse0x27562f0();
   input += synapse0x2756330();
   input += synapse0x2756370();
   input += synapse0x27563b0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2755a20() {
   double input = input0x2755a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27563f0() {
   double input = -0.123173;
   input += synapse0x2756730();
   input += synapse0x2756770();
   input += synapse0x27567b0();
   input += synapse0x27567f0();
   input += synapse0x2756830();
   input += synapse0x2756870();
   input += synapse0x27568b0();
   input += synapse0x27568f0();
   input += synapse0x2756930();
   input += synapse0x2756970();
   input += synapse0x27569b0();
   input += synapse0x27569f0();
   input += synapse0x2756a30();
   input += synapse0x2756a70();
   input += synapse0x2756ab0();
   input += synapse0x2756af0();
   input += synapse0x2756580();
   input += synapse0x27565c0();
   input += synapse0x2756c40();
   input += synapse0x2756c80();
   input += synapse0x2756cc0();
   input += synapse0x2756d00();
   input += synapse0x2756d40();
   input += synapse0x2756d80();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27563f0() {
   double input = input0x27563f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2756dc0() {
   double input = -0.578438;
   input += synapse0x2757100();
   input += synapse0x2757140();
   input += synapse0x2757180();
   input += synapse0x27571c0();
   input += synapse0x2757200();
   input += synapse0x2757240();
   input += synapse0x2757280();
   input += synapse0x27572c0();
   input += synapse0x2757300();
   input += synapse0x2757340();
   input += synapse0x2757380();
   input += synapse0x27573c0();
   input += synapse0x2757400();
   input += synapse0x2757440();
   input += synapse0x2757480();
   input += synapse0x27574c0();
   input += synapse0x2756f50();
   input += synapse0x2756f90();
   input += synapse0x2757610();
   input += synapse0x2757650();
   input += synapse0x2757690();
   input += synapse0x27576d0();
   input += synapse0x2757710();
   input += synapse0x2757750();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2756dc0() {
   double input = input0x2756dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2757790() {
   double input = 0.629324;
   input += synapse0x2757ad0();
   input += synapse0x2757b10();
   input += synapse0x2757b50();
   input += synapse0x2757b90();
   input += synapse0x2757bd0();
   input += synapse0x2757c10();
   input += synapse0x2757c50();
   input += synapse0x2757c90();
   input += synapse0x2757cd0();
   input += synapse0x2757d10();
   input += synapse0x2757d50();
   input += synapse0x2757d90();
   input += synapse0x2757dd0();
   input += synapse0x2757e10();
   input += synapse0x2757e50();
   input += synapse0x2757e90();
   input += synapse0x2757920();
   input += synapse0x2757960();
   input += synapse0x2757fe0();
   input += synapse0x2758020();
   input += synapse0x2758060();
   input += synapse0x27580a0();
   input += synapse0x27580e0();
   input += synapse0x2758120();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2757790() {
   double input = input0x2757790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2758160() {
   double input = -0.199623;
   input += synapse0x27584a0();
   input += synapse0x27584e0();
   input += synapse0x2758520();
   input += synapse0x2758560();
   input += synapse0x27585a0();
   input += synapse0x27585e0();
   input += synapse0x2758620();
   input += synapse0x2758660();
   input += synapse0x27586a0();
   input += synapse0x27586e0();
   input += synapse0x2758720();
   input += synapse0x2758760();
   input += synapse0x27587a0();
   input += synapse0x27587e0();
   input += synapse0x2758820();
   input += synapse0x2758860();
   input += synapse0x27582f0();
   input += synapse0x2758330();
   input += synapse0x27589b0();
   input += synapse0x27589f0();
   input += synapse0x2758a30();
   input += synapse0x2758a70();
   input += synapse0x2758ab0();
   input += synapse0x2758af0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2758160() {
   double input = input0x2758160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2758b30() {
   double input = 0.303718;
   input += synapse0x2758e70();
   input += synapse0x2758eb0();
   input += synapse0x2758ef0();
   input += synapse0x2758f30();
   input += synapse0x2758f70();
   input += synapse0x2758fb0();
   input += synapse0x2758ff0();
   input += synapse0x2759030();
   input += synapse0x2759070();
   input += synapse0x27590b0();
   input += synapse0x27590f0();
   input += synapse0x2759130();
   input += synapse0x2759170();
   input += synapse0x27591b0();
   input += synapse0x27591f0();
   input += synapse0x2759230();
   input += synapse0x2758cc0();
   input += synapse0x2758d00();
   input += synapse0x2759380();
   input += synapse0x27593c0();
   input += synapse0x2759400();
   input += synapse0x2759440();
   input += synapse0x2759480();
   input += synapse0x27594c0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2758b30() {
   double input = input0x2758b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2759500() {
   double input = 0.25751;
   input += synapse0x2759840();
   input += synapse0x274de10();
   input += synapse0x274de50();
   input += synapse0x274de90();
   input += synapse0x274e0e0();
   input += synapse0x274e120();
   input += synapse0x274e160();
   input += synapse0x274e3b0();
   input += synapse0x274e3f0();
   input += synapse0x274e640();
   input += synapse0x274e680();
   input += synapse0x274e6c0();
   input += synapse0x274e910();
   input += synapse0x274e950();
   input += synapse0x274eba0();
   input += synapse0x274ebe0();
   input += synapse0x2759690();
   input += synapse0x27596d0();
   input += synapse0x274ed30();
   input += synapse0x274f240();
   input += synapse0x274f280();
   input += synapse0x274f2c0();
   input += synapse0x274f510();
   input += synapse0x274f550();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2759500() {
   double input = input0x2759500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x274f590() {
   double input = 2.04932;
   input += synapse0x274ee00();
   input += synapse0x274ee40();
   input += synapse0x274ee80();
   input += synapse0x274eec0();
   input += synapse0x274f840();
   input += synapse0x275bb90();
   input += synapse0x275bbd0();
   input += synapse0x275bc10();
   input += synapse0x275bc50();
   input += synapse0x275bc90();
   input += synapse0x275bcd0();
   input += synapse0x275bd10();
   input += synapse0x275bd50();
   input += synapse0x275bd90();
   input += synapse0x275bdd0();
   input += synapse0x275be10();
   input += synapse0x274f720();
   input += synapse0x274f760();
   input += synapse0x275bf60();
   input += synapse0x275bfa0();
   input += synapse0x275bfe0();
   input += synapse0x275c020();
   input += synapse0x275c060();
   input += synapse0x275c0a0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x274f590() {
   double input = input0x274f590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275c0e0() {
   double input = 0.114137;
   input += synapse0x275c420();
   input += synapse0x275c460();
   input += synapse0x275c4a0();
   input += synapse0x275c4e0();
   input += synapse0x275c520();
   input += synapse0x275c560();
   input += synapse0x275c5a0();
   input += synapse0x275c5e0();
   input += synapse0x275c620();
   input += synapse0x275c660();
   input += synapse0x275c6a0();
   input += synapse0x275c6e0();
   input += synapse0x275c720();
   input += synapse0x275c760();
   input += synapse0x275c7a0();
   input += synapse0x275c7e0();
   input += synapse0x275c270();
   input += synapse0x275c2b0();
   input += synapse0x275c930();
   input += synapse0x275c970();
   input += synapse0x275c9b0();
   input += synapse0x275c9f0();
   input += synapse0x275ca30();
   input += synapse0x275ca70();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275c0e0() {
   double input = input0x275c0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275cab0() {
   double input = 0.14665;
   input += synapse0x275cdf0();
   input += synapse0x275ce30();
   input += synapse0x275ce70();
   input += synapse0x275ceb0();
   input += synapse0x275cef0();
   input += synapse0x275cf30();
   input += synapse0x275cf70();
   input += synapse0x275cfb0();
   input += synapse0x275cff0();
   input += synapse0x275d030();
   input += synapse0x275d070();
   input += synapse0x275d0b0();
   input += synapse0x275d0f0();
   input += synapse0x275d130();
   input += synapse0x275d170();
   input += synapse0x275d1b0();
   input += synapse0x275cc40();
   input += synapse0x275cc80();
   input += synapse0x275d300();
   input += synapse0x275d340();
   input += synapse0x275d380();
   input += synapse0x275d3c0();
   input += synapse0x275d400();
   input += synapse0x275d440();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275cab0() {
   double input = input0x275cab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275d480() {
   double input = -0.726568;
   input += synapse0x275d7c0();
   input += synapse0x275d800();
   input += synapse0x275d840();
   input += synapse0x275d880();
   input += synapse0x275d8c0();
   input += synapse0x275d900();
   input += synapse0x275d940();
   input += synapse0x275d980();
   input += synapse0x275d9c0();
   input += synapse0x275da00();
   input += synapse0x275da40();
   input += synapse0x275da80();
   input += synapse0x275dac0();
   input += synapse0x275db00();
   input += synapse0x275db40();
   input += synapse0x275db80();
   input += synapse0x275d610();
   input += synapse0x275d650();
   input += synapse0x275dcd0();
   input += synapse0x275dd10();
   input += synapse0x275dd50();
   input += synapse0x275dd90();
   input += synapse0x275ddd0();
   input += synapse0x275de10();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275d480() {
   double input = input0x275d480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275de50() {
   double input = -0.110112;
   input += synapse0x275e190();
   input += synapse0x275e1d0();
   input += synapse0x275e210();
   input += synapse0x275e250();
   input += synapse0x275e290();
   input += synapse0x275e2d0();
   input += synapse0x275e310();
   input += synapse0x275e350();
   input += synapse0x275e390();
   input += synapse0x275e3d0();
   input += synapse0x275e410();
   input += synapse0x275e450();
   input += synapse0x275e490();
   input += synapse0x275e4d0();
   input += synapse0x275e510();
   input += synapse0x275e550();
   input += synapse0x275dfe0();
   input += synapse0x275e020();
   input += synapse0x275e6a0();
   input += synapse0x275e6e0();
   input += synapse0x275e720();
   input += synapse0x275e760();
   input += synapse0x275e7a0();
   input += synapse0x275e7e0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275de50() {
   double input = input0x275de50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275e820() {
   double input = -0.576639;
   input += synapse0x275eb60();
   input += synapse0x275eba0();
   input += synapse0x275ebe0();
   input += synapse0x275ec20();
   input += synapse0x275ec60();
   input += synapse0x275eca0();
   input += synapse0x275ece0();
   input += synapse0x275ed20();
   input += synapse0x275ed60();
   input += synapse0x275eda0();
   input += synapse0x275ede0();
   input += synapse0x275ee20();
   input += synapse0x275ee60();
   input += synapse0x275eea0();
   input += synapse0x275eee0();
   input += synapse0x275ef20();
   input += synapse0x275e9b0();
   input += synapse0x275e9f0();
   input += synapse0x275f070();
   input += synapse0x275f0b0();
   input += synapse0x275f0f0();
   input += synapse0x275f130();
   input += synapse0x275f170();
   input += synapse0x275f1b0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275e820() {
   double input = input0x275e820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275f1f0() {
   double input = -0.624999;
   input += synapse0x275f530();
   input += synapse0x275f570();
   input += synapse0x275f5b0();
   input += synapse0x275f5f0();
   input += synapse0x275f630();
   input += synapse0x275f670();
   input += synapse0x275f6b0();
   input += synapse0x275f6f0();
   input += synapse0x275f730();
   input += synapse0x275f770();
   input += synapse0x275f7b0();
   input += synapse0x275f7f0();
   input += synapse0x275f830();
   input += synapse0x275f870();
   input += synapse0x275f8b0();
   input += synapse0x275f8f0();
   input += synapse0x275f380();
   input += synapse0x275f3c0();
   input += synapse0x275fa40();
   input += synapse0x275fa80();
   input += synapse0x275fac0();
   input += synapse0x275fb00();
   input += synapse0x275fb40();
   input += synapse0x275fb80();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275f1f0() {
   double input = input0x275f1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x275fbc0() {
   double input = 0.320463;
   input += synapse0x275ff00();
   input += synapse0x275ff40();
   input += synapse0x275ff80();
   input += synapse0x275ffc0();
   input += synapse0x2760000();
   input += synapse0x2760040();
   input += synapse0x2760080();
   input += synapse0x27600c0();
   input += synapse0x2760100();
   input += synapse0x2760140();
   input += synapse0x2760180();
   input += synapse0x27601c0();
   input += synapse0x2760200();
   input += synapse0x2760240();
   input += synapse0x2760280();
   input += synapse0x27602c0();
   input += synapse0x275fd50();
   input += synapse0x275fd90();
   input += synapse0x2760410();
   input += synapse0x2760450();
   input += synapse0x2760490();
   input += synapse0x27604d0();
   input += synapse0x2760510();
   input += synapse0x2760550();
   return input;
}

double NNfunction_sb_sRsR::neuron0x275fbc0() {
   double input = input0x275fbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2760590() {
   double input = -0.436058;
   input += synapse0x2749000();
   input += synapse0x2749040();
   input += synapse0x2749080();
   input += synapse0x27490c0();
   input += synapse0x2749100();
   input += synapse0x2749140();
   input += synapse0x2749180();
   input += synapse0x27491c0();
   input += synapse0x2760ce0();
   input += synapse0x2760d20();
   input += synapse0x2760d60();
   input += synapse0x2760da0();
   input += synapse0x2760de0();
   input += synapse0x2760e20();
   input += synapse0x2760e60();
   input += synapse0x2760ea0();
   input += synapse0x2760720();
   input += synapse0x2760760();
   input += synapse0x2760ff0();
   input += synapse0x2761030();
   input += synapse0x2761070();
   input += synapse0x27610b0();
   input += synapse0x27610f0();
   input += synapse0x2761130();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2760590() {
   double input = input0x2760590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2761170() {
   double input = -3.48067;
   input += synapse0x27614b0();
   input += synapse0x27614f0();
   input += synapse0x2761530();
   input += synapse0x2761570();
   input += synapse0x27615b0();
   input += synapse0x27615f0();
   input += synapse0x2761630();
   input += synapse0x2761670();
   input += synapse0x27616b0();
   input += synapse0x27616f0();
   input += synapse0x2761730();
   input += synapse0x2761770();
   input += synapse0x27617b0();
   input += synapse0x27617f0();
   input += synapse0x2761830();
   input += synapse0x2761870();
   input += synapse0x2761300();
   input += synapse0x2761340();
   input += synapse0x27619c0();
   input += synapse0x2761a00();
   input += synapse0x2761a40();
   input += synapse0x2761a80();
   input += synapse0x2761ac0();
   input += synapse0x2761b00();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2761170() {
   double input = input0x2761170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2761b40() {
   double input = 0.346615;
   input += synapse0x2761e80();
   input += synapse0x2761ec0();
   input += synapse0x2761f00();
   input += synapse0x2761f40();
   input += synapse0x2761f80();
   input += synapse0x2761fc0();
   input += synapse0x2762000();
   input += synapse0x2762040();
   input += synapse0x2762080();
   input += synapse0x27620c0();
   input += synapse0x2762100();
   input += synapse0x2762140();
   input += synapse0x2762180();
   input += synapse0x27621c0();
   input += synapse0x2762200();
   input += synapse0x2762240();
   input += synapse0x2761cd0();
   input += synapse0x2761d10();
   input += synapse0x2752840();
   input += synapse0x2752880();
   input += synapse0x27528c0();
   input += synapse0x2752900();
   input += synapse0x2752940();
   input += synapse0x2752980();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2761b40() {
   double input = input0x2761b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27529c0() {
   double input = 0.28603;
   input += synapse0x2752d00();
   input += synapse0x2752d40();
   input += synapse0x2752d80();
   input += synapse0x2752dc0();
   input += synapse0x2752e00();
   input += synapse0x2752e40();
   input += synapse0x2752e80();
   input += synapse0x2752ec0();
   input += synapse0x2752f00();
   input += synapse0x2752f40();
   input += synapse0x2752f80();
   input += synapse0x2752fc0();
   input += synapse0x2753000();
   input += synapse0x2753040();
   input += synapse0x2753080();
   input += synapse0x27530c0();
   input += synapse0x2752b50();
   input += synapse0x2752b90();
   input += synapse0x2753210();
   input += synapse0x2753250();
   input += synapse0x2753290();
   input += synapse0x27532d0();
   input += synapse0x2753310();
   input += synapse0x2753350();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27529c0() {
   double input = input0x27529c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2753390() {
   double input = -0.580888;
   input += synapse0x27536d0();
   input += synapse0x2753710();
   input += synapse0x2753750();
   input += synapse0x2753790();
   input += synapse0x27537d0();
   input += synapse0x2753810();
   input += synapse0x2753850();
   input += synapse0x2753890();
   input += synapse0x27538d0();
   input += synapse0x2753910();
   input += synapse0x2753950();
   input += synapse0x2753990();
   input += synapse0x27539d0();
   input += synapse0x2753a10();
   input += synapse0x2753a50();
   input += synapse0x2753a90();
   input += synapse0x2753520();
   input += synapse0x2753560();
   input += synapse0x2753be0();
   input += synapse0x2753c20();
   input += synapse0x2753c60();
   input += synapse0x2753ca0();
   input += synapse0x2753ce0();
   input += synapse0x2753d20();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2753390() {
   double input = input0x2753390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2753d60() {
   double input = -0.227241;
   input += synapse0x27540a0();
   input += synapse0x27540e0();
   input += synapse0x2754120();
   input += synapse0x2754160();
   input += synapse0x27541a0();
   input += synapse0x27541e0();
   input += synapse0x2754220();
   input += synapse0x2754260();
   input += synapse0x27542a0();
   input += synapse0x27542e0();
   input += synapse0x2754320();
   input += synapse0x2754360();
   input += synapse0x27543a0();
   input += synapse0x27543e0();
   input += synapse0x2754420();
   input += synapse0x2754460();
   input += synapse0x2753ef0();
   input += synapse0x2753f30();
   input += synapse0x27545b0();
   input += synapse0x27545f0();
   input += synapse0x2754630();
   input += synapse0x2754670();
   input += synapse0x27546b0();
   input += synapse0x27546f0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2753d60() {
   double input = input0x2753d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x27663a0() {
   double input = 1.70401;
   input += synapse0x27665c0();
   input += synapse0x2766600();
   input += synapse0x2766640();
   input += synapse0x2766680();
   input += synapse0x27666c0();
   input += synapse0x2766700();
   input += synapse0x2766740();
   input += synapse0x2766780();
   input += synapse0x27667c0();
   input += synapse0x2766800();
   input += synapse0x2766840();
   input += synapse0x2766880();
   input += synapse0x27668c0();
   input += synapse0x2766900();
   input += synapse0x2766940();
   input += synapse0x2766980();
   input += synapse0x2754730();
   input += synapse0x2754770();
   input += synapse0x2766ad0();
   input += synapse0x2766b10();
   input += synapse0x2766b50();
   input += synapse0x2766b90();
   input += synapse0x2766bd0();
   input += synapse0x2766c10();
   return input;
}

double NNfunction_sb_sRsR::neuron0x27663a0() {
   double input = input0x27663a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2766c50() {
   double input = -0.25936;
   input += synapse0x2766f90();
   input += synapse0x2766fd0();
   input += synapse0x2767010();
   input += synapse0x2767050();
   input += synapse0x2767090();
   input += synapse0x27670d0();
   input += synapse0x2767110();
   input += synapse0x2767150();
   input += synapse0x2767190();
   input += synapse0x27671d0();
   input += synapse0x2767210();
   input += synapse0x2767250();
   input += synapse0x2767290();
   input += synapse0x27672d0();
   input += synapse0x2767310();
   input += synapse0x2767350();
   input += synapse0x2766de0();
   input += synapse0x2766e20();
   input += synapse0x27674a0();
   input += synapse0x27674e0();
   input += synapse0x2767520();
   input += synapse0x2767560();
   input += synapse0x27675a0();
   input += synapse0x27675e0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2766c50() {
   double input = input0x2766c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2767620() {
   double input = 0.0602066;
   input += synapse0x2767960();
   input += synapse0x27679a0();
   input += synapse0x27679e0();
   input += synapse0x2767a20();
   input += synapse0x2767a60();
   input += synapse0x2767aa0();
   input += synapse0x2767ae0();
   input += synapse0x2767b20();
   input += synapse0x2767b60();
   input += synapse0x2767ba0();
   input += synapse0x2767be0();
   input += synapse0x2767c20();
   input += synapse0x2767c60();
   input += synapse0x2767ca0();
   input += synapse0x2767ce0();
   input += synapse0x2767d20();
   input += synapse0x27677b0();
   input += synapse0x27677f0();
   input += synapse0x2767e70();
   input += synapse0x2767eb0();
   input += synapse0x2767ef0();
   input += synapse0x2767f30();
   input += synapse0x2767f70();
   input += synapse0x2767fb0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2767620() {
   double input = input0x2767620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2767ff0() {
   double input = -1.77312;
   input += synapse0x2768330();
   input += synapse0x2768370();
   input += synapse0x27683b0();
   input += synapse0x27683f0();
   input += synapse0x2768430();
   input += synapse0x2768470();
   input += synapse0x27684b0();
   input += synapse0x27684f0();
   input += synapse0x2768530();
   input += synapse0x2768570();
   input += synapse0x27685b0();
   input += synapse0x27685f0();
   input += synapse0x2768630();
   input += synapse0x2768670();
   input += synapse0x27686b0();
   input += synapse0x27686f0();
   input += synapse0x2768180();
   input += synapse0x27681c0();
   input += synapse0x2768840();
   input += synapse0x2768880();
   input += synapse0x27688c0();
   input += synapse0x2768900();
   input += synapse0x2768940();
   input += synapse0x2768980();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2767ff0() {
   double input = input0x2767ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x276f1f0() {
   double input = -0.888748;
   input += synapse0x25087a0();
   input += synapse0x25087e0();
   input += synapse0x2745330();
   input += synapse0x2745370();
   input += synapse0x2746e00();
   input += synapse0x2746e40();
   input += synapse0x2747bd0();
   input += synapse0x2747c10();
   input += synapse0x27485a0();
   input += synapse0x27485e0();
   input += synapse0x2748f70();
   input += synapse0x2748fb0();
   input += synapse0x2749a50();
   input += synapse0x2749a90();
   input += synapse0x274a420();
   input += synapse0x274a460();
   input += synapse0x2747500();
   input += synapse0x2747540();
   input += synapse0x274bfd0();
   input += synapse0x274c010();
   input += synapse0x274c9a0();
   input += synapse0x274c9e0();
   input += synapse0x274d370();
   input += synapse0x274d3b0();
   input += synapse0x274dd40();
   input += synapse0x274dd80();
   input += synapse0x2740dd0();
   input += synapse0x2740e10();
   input += synapse0x274fe30();
   input += synapse0x274fe70();
   input += synapse0x2750800();
   input += synapse0x2750840();
   input += synapse0x27511d0();
   input += synapse0x2751210();
   input += synapse0x2751ba0();
   input += synapse0x2751be0();
   input += synapse0x2752570();
   input += synapse0x27525b0();
   input += synapse0x274b0c0();
   input += synapse0x274b100();
   input += synapse0x2754970();
   input += synapse0x27549b0();
   input += synapse0x2755300();
   input += synapse0x2755340();
   input += synapse0x2755cd0();
   input += synapse0x2755d10();
   input += synapse0x27566a0();
   input += synapse0x27566e0();
   input += synapse0x2757070();
   input += synapse0x27570b0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x276f1f0() {
   double input = input0x276f1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x276f590() {
   double input = 0.650877;
   input += synapse0x27597b0();
   input += synapse0x27597f0();
   input += synapse0x274ed70();
   input += synapse0x274edb0();
   input += synapse0x275c390();
   input += synapse0x275c3d0();
   input += synapse0x275cd60();
   input += synapse0x275cda0();
   input += synapse0x275d730();
   input += synapse0x275d770();
   input += synapse0x275e100();
   input += synapse0x275e140();
   input += synapse0x275ead0();
   input += synapse0x275eb10();
   input += synapse0x275f4a0();
   input += synapse0x275f4e0();
   input += synapse0x275fe70();
   input += synapse0x275feb0();
   input += synapse0x2760840();
   input += synapse0x2760880();
   input += synapse0x2761420();
   input += synapse0x2761460();
   input += synapse0x2761df0();
   input += synapse0x2761e30();
   input += synapse0x2752c70();
   input += synapse0x2752cb0();
   input += synapse0x2753640();
   input += synapse0x2753680();
   input += synapse0x2754010();
   input += synapse0x2754050();
   input += synapse0x2766530();
   input += synapse0x2766570();
   input += synapse0x2766f00();
   input += synapse0x2766f40();
   input += synapse0x27678d0();
   input += synapse0x2767910();
   input += synapse0x27682a0();
   input += synapse0x27682e0();
   input += synapse0x2743230();
   input += synapse0x2743270();
   input += synapse0x2757a40();
   input += synapse0x2757a80();
   input += synapse0x27689c0();
   input += synapse0x2768a00();
   input += synapse0x2768a40();
   input += synapse0x2768a80();
   input += synapse0x276f930();
   input += synapse0x276f970();
   input += synapse0x276f9b0();
   input += synapse0x276f9f0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x276f590() {
   double input = input0x276f590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x276fa30() {
   double input = 0.760636;
   input += synapse0x276fd70();
   input += synapse0x276fdb0();
   input += synapse0x276fdf0();
   input += synapse0x276fe30();
   input += synapse0x276fe70();
   input += synapse0x276feb0();
   input += synapse0x276fef0();
   input += synapse0x276ff30();
   input += synapse0x276ff70();
   input += synapse0x276ffb0();
   input += synapse0x276fff0();
   input += synapse0x2770030();
   input += synapse0x2770070();
   input += synapse0x27700b0();
   input += synapse0x27700f0();
   input += synapse0x2770130();
   input += synapse0x276fbc0();
   input += synapse0x276fc00();
   input += synapse0x2770280();
   input += synapse0x27702c0();
   input += synapse0x2770300();
   input += synapse0x2770340();
   input += synapse0x2770380();
   input += synapse0x27703c0();
   input += synapse0x2770400();
   input += synapse0x2770440();
   input += synapse0x2770480();
   input += synapse0x27704c0();
   input += synapse0x2770500();
   input += synapse0x2770540();
   input += synapse0x2770580();
   input += synapse0x27705c0();
   input += synapse0x2770170();
   input += synapse0x27701b0();
   input += synapse0x27701f0();
   input += synapse0x2770230();
   input += synapse0x2770810();
   input += synapse0x2770850();
   input += synapse0x2770890();
   input += synapse0x27708d0();
   input += synapse0x2770910();
   input += synapse0x2770950();
   input += synapse0x2770990();
   input += synapse0x27709d0();
   input += synapse0x2770a10();
   input += synapse0x2770a50();
   input += synapse0x2770a90();
   input += synapse0x2770ad0();
   input += synapse0x2770b10();
   input += synapse0x2770b50();
   return input;
}

double NNfunction_sb_sRsR::neuron0x276fa30() {
   double input = input0x276fa30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2770b90() {
   double input = 0.0853946;
   input += synapse0x2770ed0();
   input += synapse0x2770f10();
   input += synapse0x2770f50();
   input += synapse0x2770f90();
   input += synapse0x2770fd0();
   input += synapse0x2771010();
   input += synapse0x2771050();
   input += synapse0x2771090();
   input += synapse0x27710d0();
   input += synapse0x2771110();
   input += synapse0x2771150();
   input += synapse0x2771190();
   input += synapse0x27711d0();
   input += synapse0x2771210();
   input += synapse0x2771250();
   input += synapse0x2771290();
   input += synapse0x2770d20();
   input += synapse0x2770d60();
   input += synapse0x27713e0();
   input += synapse0x2771420();
   input += synapse0x2771460();
   input += synapse0x27714a0();
   input += synapse0x27714e0();
   input += synapse0x2771520();
   input += synapse0x2771560();
   input += synapse0x27715a0();
   input += synapse0x27715e0();
   input += synapse0x2771620();
   input += synapse0x2771660();
   input += synapse0x27716a0();
   input += synapse0x27716e0();
   input += synapse0x2771720();
   input += synapse0x27712d0();
   input += synapse0x2771310();
   input += synapse0x2771350();
   input += synapse0x2771390();
   input += synapse0x2771970();
   input += synapse0x27719b0();
   input += synapse0x27719f0();
   input += synapse0x2771a30();
   input += synapse0x2771a70();
   input += synapse0x2771ab0();
   input += synapse0x2771af0();
   input += synapse0x2771b30();
   input += synapse0x2771b70();
   input += synapse0x2771bb0();
   input += synapse0x2771bf0();
   input += synapse0x2771c30();
   input += synapse0x2771c70();
   input += synapse0x2771cb0();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2770b90() {
   double input = input0x2770b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2771cf0() {
   double input = 0.827304;
   input += synapse0x2772030();
   input += synapse0x2772070();
   input += synapse0x27720b0();
   input += synapse0x27720f0();
   input += synapse0x2772130();
   input += synapse0x2772170();
   input += synapse0x27721b0();
   input += synapse0x27721f0();
   input += synapse0x2772230();
   input += synapse0x2772270();
   input += synapse0x27722b0();
   input += synapse0x27722f0();
   input += synapse0x2772330();
   input += synapse0x2772370();
   input += synapse0x27723b0();
   input += synapse0x27723f0();
   input += synapse0x2771e80();
   input += synapse0x2771ec0();
   input += synapse0x2772540();
   input += synapse0x2772580();
   input += synapse0x27725c0();
   input += synapse0x2772600();
   input += synapse0x2772640();
   input += synapse0x2772680();
   input += synapse0x27726c0();
   input += synapse0x2772700();
   input += synapse0x2772740();
   input += synapse0x2772780();
   input += synapse0x27727c0();
   input += synapse0x2772800();
   input += synapse0x2772840();
   input += synapse0x2772880();
   input += synapse0x2772430();
   input += synapse0x2772470();
   input += synapse0x27724b0();
   input += synapse0x27724f0();
   input += synapse0x2772ad0();
   input += synapse0x2772b10();
   input += synapse0x2772b50();
   input += synapse0x2772b90();
   input += synapse0x2772bd0();
   input += synapse0x2772c10();
   input += synapse0x2772c50();
   input += synapse0x2772c90();
   input += synapse0x2772cd0();
   input += synapse0x2772d10();
   input += synapse0x2772d50();
   input += synapse0x2772d90();
   input += synapse0x2772dd0();
   input += synapse0x2772e10();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2771cf0() {
   double input = input0x2771cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRsR::input0x2772e50() {
   double input = 5.56021;
   input += synapse0x2773070();
   input += synapse0x27730b0();
   input += synapse0x27730f0();
   input += synapse0x2773130();
   input += synapse0x2773170();
   return input;
}

double NNfunction_sb_sRsR::neuron0x2772e50() {
   double input = input0x2772e50();
   return (input * 1)+0;
}

double NNfunction_sb_sRsR::synapse0x27432c0() {
   return (neuron0x273dec0()*-0.233567);
}

double NNfunction_sb_sRsR::synapse0x2743300() {
   return (neuron0x273e170()*-0.0245576);
}

double NNfunction_sb_sRsR::synapse0x2743340() {
   return (neuron0x273e4b0()*0.20569);
}

double NNfunction_sb_sRsR::synapse0x2743380() {
   return (neuron0x273e7f0()*-1.42527);
}

double NNfunction_sb_sRsR::synapse0x27433c0() {
   return (neuron0x273eb30()*0.00365476);
}

double NNfunction_sb_sRsR::synapse0x2743400() {
   return (neuron0x273ee70()*0.744743);
}

double NNfunction_sb_sRsR::synapse0x2743440() {
   return (neuron0x273f1b0()*-0.388678);
}

double NNfunction_sb_sRsR::synapse0x2743480() {
   return (neuron0x273f4f0()*0.373625);
}

double NNfunction_sb_sRsR::synapse0x27434c0() {
   return (neuron0x273f830()*-0.657804);
}

double NNfunction_sb_sRsR::synapse0x2743500() {
   return (neuron0x273fb70()*0.165018);
}

double NNfunction_sb_sRsR::synapse0x2743540() {
   return (neuron0x273feb0()*-0.465372);
}

double NNfunction_sb_sRsR::synapse0x2743580() {
   return (neuron0x27401f0()*-0.117499);
}

double NNfunction_sb_sRsR::synapse0x27435c0() {
   return (neuron0x2740530()*-0.57071);
}

double NNfunction_sb_sRsR::synapse0x2743600() {
   return (neuron0x2740870()*-0.909048);
}

double NNfunction_sb_sRsR::synapse0x2743640() {
   return (neuron0x2740bb0()*-0.095124);
}

double NNfunction_sb_sRsR::synapse0x2743680() {
   return (neuron0x2740ef0()*-0.0759172);
}

double NNfunction_sb_sRsR::synapse0x2743110() {
   return (neuron0x2741230()*-0.302674);
}

double NNfunction_sb_sRsR::synapse0x2743150() {
   return (neuron0x2741790()*-0.658486);
}

double NNfunction_sb_sRsR::synapse0x24fa070() {
   return (neuron0x2741ad0()*0.444135);
}

double NNfunction_sb_sRsR::synapse0x24fa0b0() {
   return (neuron0x2741e10()*0.488052);
}

double NNfunction_sb_sRsR::synapse0x27436c0() {
   return (neuron0x2742150()*-0.415061);
}

double NNfunction_sb_sRsR::synapse0x2743700() {
   return (neuron0x2742490()*-0.212564);
}

double NNfunction_sb_sRsR::synapse0x2743740() {
   return (neuron0x27427d0()*-0.80166);
}

double NNfunction_sb_sRsR::synapse0x2743780() {
   return (neuron0x2742b10()*-0.188374);
}

double NNfunction_sb_sRsR::synapse0x2743b00() {
   return (neuron0x273dec0()*-0.342376);
}

double NNfunction_sb_sRsR::synapse0x2743b40() {
   return (neuron0x273e170()*0.00826753);
}

double NNfunction_sb_sRsR::synapse0x2743b80() {
   return (neuron0x273e4b0()*-0.108501);
}

double NNfunction_sb_sRsR::synapse0x2743bc0() {
   return (neuron0x273e7f0()*0.0211522);
}

double NNfunction_sb_sRsR::synapse0x2743c00() {
   return (neuron0x273eb30()*-0.114576);
}

double NNfunction_sb_sRsR::synapse0x2743c40() {
   return (neuron0x273ee70()*-0.0460254);
}

double NNfunction_sb_sRsR::synapse0x2743c80() {
   return (neuron0x273f1b0()*0.0373063);
}

double NNfunction_sb_sRsR::synapse0x2743cc0() {
   return (neuron0x273f4f0()*-0.166999);
}

double NNfunction_sb_sRsR::synapse0x2743d00() {
   return (neuron0x273f830()*0.00892549);
}

double NNfunction_sb_sRsR::synapse0x24f9ec0() {
   return (neuron0x273fb70()*0.139543);
}

double NNfunction_sb_sRsR::synapse0x24f9f00() {
   return (neuron0x273feb0()*0.00774661);
}

double NNfunction_sb_sRsR::synapse0x24f9f40() {
   return (neuron0x27401f0()*0.126785);
}

double NNfunction_sb_sRsR::synapse0x24f9f80() {
   return (neuron0x2740530()*-0.0845694);
}

double NNfunction_sb_sRsR::synapse0x2743f50() {
   return (neuron0x2740870()*0.0794207);
}

double NNfunction_sb_sRsR::synapse0x2743f90() {
   return (neuron0x2740bb0()*-0.165177);
}

double NNfunction_sb_sRsR::synapse0x2743fd0() {
   return (neuron0x2740ef0()*-0.0536571);
}

double NNfunction_sb_sRsR::synapse0x2743950() {
   return (neuron0x2741230()*0.0895327);
}

double NNfunction_sb_sRsR::synapse0x2743990() {
   return (neuron0x2741790()*0.00466161);
}

double NNfunction_sb_sRsR::synapse0x2744120() {
   return (neuron0x2741ad0()*1.38572);
}

double NNfunction_sb_sRsR::synapse0x2744160() {
   return (neuron0x2741e10()*0.337571);
}

double NNfunction_sb_sRsR::synapse0x27441a0() {
   return (neuron0x2742150()*-0.123167);
}

double NNfunction_sb_sRsR::synapse0x27441e0() {
   return (neuron0x2742490()*-0.0258449);
}

double NNfunction_sb_sRsR::synapse0x2744220() {
   return (neuron0x27427d0()*-0.0726553);
}

double NNfunction_sb_sRsR::synapse0x2744260() {
   return (neuron0x2742b10()*-0.213006);
}

double NNfunction_sb_sRsR::synapse0x27445e0() {
   return (neuron0x273dec0()*-0.15611);
}

double NNfunction_sb_sRsR::synapse0x2744620() {
   return (neuron0x273e170()*0.327778);
}

double NNfunction_sb_sRsR::synapse0x2744660() {
   return (neuron0x273e4b0()*0.0835583);
}

double NNfunction_sb_sRsR::synapse0x27446a0() {
   return (neuron0x273e7f0()*-0.465463);
}

double NNfunction_sb_sRsR::synapse0x27446e0() {
   return (neuron0x273eb30()*-0.198692);
}

double NNfunction_sb_sRsR::synapse0x2744720() {
   return (neuron0x273ee70()*0.0708458);
}

double NNfunction_sb_sRsR::synapse0x2744760() {
   return (neuron0x273f1b0()*-0.360253);
}

double NNfunction_sb_sRsR::synapse0x27447a0() {
   return (neuron0x273f4f0()*-0.172895);
}

double NNfunction_sb_sRsR::synapse0x27447e0() {
   return (neuron0x273f830()*0.29719);
}

double NNfunction_sb_sRsR::synapse0x2744820() {
   return (neuron0x273fb70()*0.241726);
}

double NNfunction_sb_sRsR::synapse0x2744860() {
   return (neuron0x273feb0()*0.420849);
}

double NNfunction_sb_sRsR::synapse0x27448a0() {
   return (neuron0x27401f0()*0.000734532);
}

double NNfunction_sb_sRsR::synapse0x27448e0() {
   return (neuron0x2740530()*0.0351166);
}

double NNfunction_sb_sRsR::synapse0x2744920() {
   return (neuron0x2740870()*-0.157483);
}

double NNfunction_sb_sRsR::synapse0x2744960() {
   return (neuron0x2740bb0()*1.21827);
}

double NNfunction_sb_sRsR::synapse0x27449a0() {
   return (neuron0x2740ef0()*-0.0764431);
}

double NNfunction_sb_sRsR::synapse0x2744430() {
   return (neuron0x2741230()*-0.655591);
}

double NNfunction_sb_sRsR::synapse0x2744470() {
   return (neuron0x2741790()*0.802505);
}

double NNfunction_sb_sRsR::synapse0x24fa720() {
   return (neuron0x2741ad0()*0.429075);
}

double NNfunction_sb_sRsR::synapse0x2507fb0() {
   return (neuron0x2741e10()*0.620607);
}

double NNfunction_sb_sRsR::synapse0x2507ff0() {
   return (neuron0x2742150()*-0.146425);
}

double NNfunction_sb_sRsR::synapse0x27468d0() {
   return (neuron0x2742490()*-0.292406);
}

double NNfunction_sb_sRsR::synapse0x2746910() {
   return (neuron0x27427d0()*-0.495857);
}

double NNfunction_sb_sRsR::synapse0x273dc00() {
   return (neuron0x2742b10()*0.0370212);
}

double NNfunction_sb_sRsR::synapse0x273dcd0() {
   return (neuron0x273dec0()*-0.101295);
}

double NNfunction_sb_sRsR::synapse0x2508830() {
   return (neuron0x273e170()*0.32584);
}

double NNfunction_sb_sRsR::synapse0x2743ed0() {
   return (neuron0x273e4b0()*-0.00627464);
}

double NNfunction_sb_sRsR::synapse0x2743f10() {
   return (neuron0x273e7f0()*-0.640533);
}

double NNfunction_sb_sRsR::synapse0x2744af0() {
   return (neuron0x273eb30()*-0.187266);
}

double NNfunction_sb_sRsR::synapse0x2744b30() {
   return (neuron0x273ee70()*0.133316);
}

double NNfunction_sb_sRsR::synapse0x2744b70() {
   return (neuron0x273f1b0()*-0.208395);
}

double NNfunction_sb_sRsR::synapse0x2744bb0() {
   return (neuron0x273f4f0()*0.18054);
}

double NNfunction_sb_sRsR::synapse0x2744bf0() {
   return (neuron0x273f830()*0.0653824);
}

double NNfunction_sb_sRsR::synapse0x2744c30() {
   return (neuron0x273fb70()*0.0484895);
}

double NNfunction_sb_sRsR::synapse0x2744c70() {
   return (neuron0x273feb0()*0.160401);
}

double NNfunction_sb_sRsR::synapse0x2744cb0() {
   return (neuron0x27401f0()*-0.0206968);
}

double NNfunction_sb_sRsR::synapse0x2744cf0() {
   return (neuron0x2740530()*-0.0417091);
}

double NNfunction_sb_sRsR::synapse0x2744d30() {
   return (neuron0x2740870()*0.0807292);
}

double NNfunction_sb_sRsR::synapse0x2744d70() {
   return (neuron0x2740bb0()*-0.0248022);
}

double NNfunction_sb_sRsR::synapse0x2744db0() {
   return (neuron0x2740ef0()*-0.0743147);
}

double NNfunction_sb_sRsR::synapse0x273dc40() {
   return (neuron0x2741230()*-0.0472681);
}

double NNfunction_sb_sRsR::synapse0x273dc80() {
   return (neuron0x2741790()*0.021471);
}

double NNfunction_sb_sRsR::synapse0x2744f00() {
   return (neuron0x2741ad0()*-0.376664);
}

double NNfunction_sb_sRsR::synapse0x2744f40() {
   return (neuron0x2741e10()*0.0803004);
}

double NNfunction_sb_sRsR::synapse0x2744f80() {
   return (neuron0x2742150()*0.0956272);
}

double NNfunction_sb_sRsR::synapse0x2744fc0() {
   return (neuron0x2742490()*0.0386808);
}

double NNfunction_sb_sRsR::synapse0x2745000() {
   return (neuron0x27427d0()*-0.00815627);
}

double NNfunction_sb_sRsR::synapse0x2745040() {
   return (neuron0x2742b10()*-0.261035);
}

double NNfunction_sb_sRsR::synapse0x27453c0() {
   return (neuron0x273dec0()*-0.0331683);
}

double NNfunction_sb_sRsR::synapse0x2745400() {
   return (neuron0x273e170()*0.0176299);
}

double NNfunction_sb_sRsR::synapse0x2745440() {
   return (neuron0x273e4b0()*0.0330395);
}

double NNfunction_sb_sRsR::synapse0x2745480() {
   return (neuron0x273e7f0()*2.75403);
}

double NNfunction_sb_sRsR::synapse0x27454c0() {
   return (neuron0x273eb30()*-0.0400095);
}

double NNfunction_sb_sRsR::synapse0x2745500() {
   return (neuron0x273ee70()*0.00713199);
}

double NNfunction_sb_sRsR::synapse0x2745540() {
   return (neuron0x273f1b0()*-0.0273112);
}

double NNfunction_sb_sRsR::synapse0x2745580() {
   return (neuron0x273f4f0()*0.00610288);
}

double NNfunction_sb_sRsR::synapse0x27455c0() {
   return (neuron0x273f830()*0.0165862);
}

double NNfunction_sb_sRsR::synapse0x2745600() {
   return (neuron0x273fb70()*0.0111151);
}

double NNfunction_sb_sRsR::synapse0x2745640() {
   return (neuron0x273feb0()*0.0287917);
}

double NNfunction_sb_sRsR::synapse0x2745680() {
   return (neuron0x27401f0()*-0.0353528);
}

double NNfunction_sb_sRsR::synapse0x27456c0() {
   return (neuron0x2740530()*-0.0741853);
}

double NNfunction_sb_sRsR::synapse0x2745700() {
   return (neuron0x2740870()*-0.00582532);
}

double NNfunction_sb_sRsR::synapse0x2745740() {
   return (neuron0x2740bb0()*-0.00469777);
}

double NNfunction_sb_sRsR::synapse0x2745780() {
   return (neuron0x2740ef0()*-0.00684284);
}

double NNfunction_sb_sRsR::synapse0x27458d0() {
   return (neuron0x2741230()*0.0413953);
}

double NNfunction_sb_sRsR::synapse0x2745210() {
   return (neuron0x2741790()*-0.00881978);
}

double NNfunction_sb_sRsR::synapse0x2745250() {
   return (neuron0x2741ad0()*2.106);
}

double NNfunction_sb_sRsR::synapse0x2746a10() {
   return (neuron0x2741e10()*0.00343888);
}

double NNfunction_sb_sRsR::synapse0x2746a50() {
   return (neuron0x2742150()*0.0270037);
}

double NNfunction_sb_sRsR::synapse0x2746a90() {
   return (neuron0x2742490()*-0.0157137);
}

double NNfunction_sb_sRsR::synapse0x2746ad0() {
   return (neuron0x27427d0()*0.00511126);
}

double NNfunction_sb_sRsR::synapse0x2746b10() {
   return (neuron0x2742b10()*-0.052946);
}

double NNfunction_sb_sRsR::synapse0x2746e90() {
   return (neuron0x273dec0()*0.0520437);
}

double NNfunction_sb_sRsR::synapse0x2746ed0() {
   return (neuron0x273e170()*0.0104752);
}

double NNfunction_sb_sRsR::synapse0x2746f10() {
   return (neuron0x273e4b0()*-0.0159754);
}

double NNfunction_sb_sRsR::synapse0x2746f50() {
   return (neuron0x273e7f0()*0.0723906);
}

double NNfunction_sb_sRsR::synapse0x2746f90() {
   return (neuron0x273eb30()*-0.0745324);
}

double NNfunction_sb_sRsR::synapse0x2746fd0() {
   return (neuron0x273ee70()*0.00469592);
}

double NNfunction_sb_sRsR::synapse0x2747010() {
   return (neuron0x273f1b0()*-0.0349194);
}

double NNfunction_sb_sRsR::synapse0x2747050() {
   return (neuron0x273f4f0()*-0.0219928);
}

double NNfunction_sb_sRsR::synapse0x2747090() {
   return (neuron0x273f830()*-0.0144539);
}

double NNfunction_sb_sRsR::synapse0x2508300() {
   return (neuron0x273fb70()*0.105252);
}

double NNfunction_sb_sRsR::synapse0x2508340() {
   return (neuron0x273feb0()*0.090833);
}

double NNfunction_sb_sRsR::synapse0x2508380() {
   return (neuron0x27401f0()*-0.0762082);
}

double NNfunction_sb_sRsR::synapse0x25083c0() {
   return (neuron0x2740530()*0.00271681);
}

double NNfunction_sb_sRsR::synapse0x2508400() {
   return (neuron0x2740870()*0.00178766);
}

double NNfunction_sb_sRsR::synapse0x2508440() {
   return (neuron0x2740bb0()*0.0150603);
}

double NNfunction_sb_sRsR::synapse0x2508480() {
   return (neuron0x2740ef0()*0.0305104);
}

double NNfunction_sb_sRsR::synapse0x2746ce0() {
   return (neuron0x2741230()*-0.0123444);
}

double NNfunction_sb_sRsR::synapse0x2746d20() {
   return (neuron0x2741790()*0.171459);
}

double NNfunction_sb_sRsR::synapse0x25085d0() {
   return (neuron0x2741ad0()*2.053);
}

double NNfunction_sb_sRsR::synapse0x2508610() {
   return (neuron0x2741e10()*-0.0263123);
}

double NNfunction_sb_sRsR::synapse0x2508650() {
   return (neuron0x2742150()*0.0148199);
}

double NNfunction_sb_sRsR::synapse0x2508690() {
   return (neuron0x2742490()*-0.00211864);
}

double NNfunction_sb_sRsR::synapse0x25086d0() {
   return (neuron0x27427d0()*0.0326441);
}

double NNfunction_sb_sRsR::synapse0x27478e0() {
   return (neuron0x2742b10()*0.092446);
}

double NNfunction_sb_sRsR::synapse0x2747c60() {
   return (neuron0x273dec0()*-0.309312);
}

double NNfunction_sb_sRsR::synapse0x2747ca0() {
   return (neuron0x273e170()*0.00825652);
}

double NNfunction_sb_sRsR::synapse0x2747ce0() {
   return (neuron0x273e4b0()*-0.324884);
}

double NNfunction_sb_sRsR::synapse0x2747d20() {
   return (neuron0x273e7f0()*-0.0389599);
}

double NNfunction_sb_sRsR::synapse0x2747d60() {
   return (neuron0x273eb30()*-0.384817);
}

double NNfunction_sb_sRsR::synapse0x2747da0() {
   return (neuron0x273ee70()*0.159711);
}

double NNfunction_sb_sRsR::synapse0x2747de0() {
   return (neuron0x273f1b0()*0.00906857);
}

double NNfunction_sb_sRsR::synapse0x2747e20() {
   return (neuron0x273f4f0()*0.994082);
}

double NNfunction_sb_sRsR::synapse0x2747e60() {
   return (neuron0x273f830()*-0.0819999);
}

double NNfunction_sb_sRsR::synapse0x2747ea0() {
   return (neuron0x273fb70()*0.299472);
}

double NNfunction_sb_sRsR::synapse0x2747ee0() {
   return (neuron0x273feb0()*0.145682);
}

double NNfunction_sb_sRsR::synapse0x2747f20() {
   return (neuron0x27401f0()*0.515995);
}

double NNfunction_sb_sRsR::synapse0x2747f60() {
   return (neuron0x2740530()*0.356821);
}

double NNfunction_sb_sRsR::synapse0x2747fa0() {
   return (neuron0x2740870()*-0.465055);
}

double NNfunction_sb_sRsR::synapse0x2747fe0() {
   return (neuron0x2740bb0()*-0.316844);
}

double NNfunction_sb_sRsR::synapse0x2748020() {
   return (neuron0x2740ef0()*0.983095);
}

double NNfunction_sb_sRsR::synapse0x2747ab0() {
   return (neuron0x2741230()*-0.160444);
}

double NNfunction_sb_sRsR::synapse0x2747af0() {
   return (neuron0x2741790()*0.0868651);
}

double NNfunction_sb_sRsR::synapse0x2748170() {
   return (neuron0x2741ad0()*-0.181737);
}

double NNfunction_sb_sRsR::synapse0x27481b0() {
   return (neuron0x2741e10()*-0.0399476);
}

double NNfunction_sb_sRsR::synapse0x27481f0() {
   return (neuron0x2742150()*-0.0444516);
}

double NNfunction_sb_sRsR::synapse0x2748230() {
   return (neuron0x2742490()*0.0463843);
}

double NNfunction_sb_sRsR::synapse0x2748270() {
   return (neuron0x27427d0()*0.27037);
}

double NNfunction_sb_sRsR::synapse0x27482b0() {
   return (neuron0x2742b10()*0.147613);
}

double NNfunction_sb_sRsR::synapse0x2748630() {
   return (neuron0x273dec0()*-0.000964915);
}

double NNfunction_sb_sRsR::synapse0x2748670() {
   return (neuron0x273e170()*-0.185559);
}

double NNfunction_sb_sRsR::synapse0x27486b0() {
   return (neuron0x273e4b0()*0.0992463);
}

double NNfunction_sb_sRsR::synapse0x27486f0() {
   return (neuron0x273e7f0()*0.216792);
}

double NNfunction_sb_sRsR::synapse0x2748730() {
   return (neuron0x273eb30()*-0.0496469);
}

double NNfunction_sb_sRsR::synapse0x2748770() {
   return (neuron0x273ee70()*0.4168);
}

double NNfunction_sb_sRsR::synapse0x27487b0() {
   return (neuron0x273f1b0()*-0.150822);
}

double NNfunction_sb_sRsR::synapse0x27487f0() {
   return (neuron0x273f4f0()*0.0153821);
}

double NNfunction_sb_sRsR::synapse0x2748830() {
   return (neuron0x273f830()*-0.0202568);
}

double NNfunction_sb_sRsR::synapse0x2748870() {
   return (neuron0x273fb70()*0.186769);
}

double NNfunction_sb_sRsR::synapse0x27488b0() {
   return (neuron0x273feb0()*0.018007);
}

double NNfunction_sb_sRsR::synapse0x27488f0() {
   return (neuron0x27401f0()*-0.0713253);
}

double NNfunction_sb_sRsR::synapse0x2748930() {
   return (neuron0x2740530()*-0.0817598);
}

double NNfunction_sb_sRsR::synapse0x2748970() {
   return (neuron0x2740870()*-0.0130228);
}

double NNfunction_sb_sRsR::synapse0x27489b0() {
   return (neuron0x2740bb0()*0.303903);
}

double NNfunction_sb_sRsR::synapse0x27489f0() {
   return (neuron0x2740ef0()*-0.0695264);
}

double NNfunction_sb_sRsR::synapse0x2748480() {
   return (neuron0x2741230()*0.401867);
}

double NNfunction_sb_sRsR::synapse0x27484c0() {
   return (neuron0x2741790()*-0.148165);
}

double NNfunction_sb_sRsR::synapse0x2748b40() {
   return (neuron0x2741ad0()*-1.27609);
}

double NNfunction_sb_sRsR::synapse0x2748b80() {
   return (neuron0x2741e10()*-0.239424);
}

double NNfunction_sb_sRsR::synapse0x2748bc0() {
   return (neuron0x2742150()*0.0127215);
}

double NNfunction_sb_sRsR::synapse0x2748c00() {
   return (neuron0x2742490()*0.06949);
}

double NNfunction_sb_sRsR::synapse0x2748c40() {
   return (neuron0x27427d0()*0.100321);
}

double NNfunction_sb_sRsR::synapse0x2748c80() {
   return (neuron0x2742b10()*0.0529082);
}

double NNfunction_sb_sRsR::synapse0x2741680() {
   return (neuron0x273dec0()*0.07305);
}

double NNfunction_sb_sRsR::synapse0x27416c0() {
   return (neuron0x273e170()*0.717829);
}

double NNfunction_sb_sRsR::synapse0x2741700() {
   return (neuron0x273e4b0()*0.295681);
}

double NNfunction_sb_sRsR::synapse0x2741740() {
   return (neuron0x273e7f0()*-0.368446);
}

double NNfunction_sb_sRsR::synapse0x2749210() {
   return (neuron0x273eb30()*-0.65837);
}

double NNfunction_sb_sRsR::synapse0x2749250() {
   return (neuron0x273ee70()*0.890692);
}

double NNfunction_sb_sRsR::synapse0x2749290() {
   return (neuron0x273f1b0()*0.310794);
}

double NNfunction_sb_sRsR::synapse0x27492d0() {
   return (neuron0x273f4f0()*-0.662266);
}

double NNfunction_sb_sRsR::synapse0x2749310() {
   return (neuron0x273f830()*0.116957);
}

double NNfunction_sb_sRsR::synapse0x2749350() {
   return (neuron0x273fb70()*-0.819362);
}

double NNfunction_sb_sRsR::synapse0x2749390() {
   return (neuron0x273feb0()*-0.162337);
}

double NNfunction_sb_sRsR::synapse0x27493d0() {
   return (neuron0x27401f0()*-0.0266274);
}

double NNfunction_sb_sRsR::synapse0x2749410() {
   return (neuron0x2740530()*-0.208861);
}

double NNfunction_sb_sRsR::synapse0x2749450() {
   return (neuron0x2740870()*0.150256);
}

double NNfunction_sb_sRsR::synapse0x2749490() {
   return (neuron0x2740bb0()*-0.0131858);
}

double NNfunction_sb_sRsR::synapse0x27494d0() {
   return (neuron0x2740ef0()*0.143569);
}

double NNfunction_sb_sRsR::synapse0x2748e50() {
   return (neuron0x2741230()*0.649735);
}

double NNfunction_sb_sRsR::synapse0x2748e90() {
   return (neuron0x2741790()*0.0192237);
}

double NNfunction_sb_sRsR::synapse0x2749620() {
   return (neuron0x2741ad0()*0.0679431);
}

double NNfunction_sb_sRsR::synapse0x2749660() {
   return (neuron0x2741e10()*-0.436288);
}

double NNfunction_sb_sRsR::synapse0x27496a0() {
   return (neuron0x2742150()*0.357549);
}

double NNfunction_sb_sRsR::synapse0x27496e0() {
   return (neuron0x2742490()*-0.738598);
}

double NNfunction_sb_sRsR::synapse0x2749720() {
   return (neuron0x27427d0()*0.435545);
}

double NNfunction_sb_sRsR::synapse0x2749760() {
   return (neuron0x2742b10()*-0.285687);
}

double NNfunction_sb_sRsR::synapse0x2749ae0() {
   return (neuron0x273dec0()*0.297684);
}

double NNfunction_sb_sRsR::synapse0x2749b20() {
   return (neuron0x273e170()*0.0697653);
}

double NNfunction_sb_sRsR::synapse0x2749b60() {
   return (neuron0x273e4b0()*0.0350078);
}

double NNfunction_sb_sRsR::synapse0x2749ba0() {
   return (neuron0x273e7f0()*0.069176);
}

double NNfunction_sb_sRsR::synapse0x2749be0() {
   return (neuron0x273eb30()*-0.0542661);
}

double NNfunction_sb_sRsR::synapse0x2749c20() {
   return (neuron0x273ee70()*0.0128076);
}

double NNfunction_sb_sRsR::synapse0x2749c60() {
   return (neuron0x273f1b0()*-0.0492227);
}

double NNfunction_sb_sRsR::synapse0x2749ca0() {
   return (neuron0x273f4f0()*0.174402);
}

double NNfunction_sb_sRsR::synapse0x2749ce0() {
   return (neuron0x273f830()*0.0860049);
}

double NNfunction_sb_sRsR::synapse0x2749d20() {
   return (neuron0x273fb70()*0.358221);
}

double NNfunction_sb_sRsR::synapse0x2749d60() {
   return (neuron0x273feb0()*0.0189475);
}

double NNfunction_sb_sRsR::synapse0x2749da0() {
   return (neuron0x27401f0()*0.05733);
}

double NNfunction_sb_sRsR::synapse0x2749de0() {
   return (neuron0x2740530()*0.108139);
}

double NNfunction_sb_sRsR::synapse0x2749e20() {
   return (neuron0x2740870()*0.0773831);
}

double NNfunction_sb_sRsR::synapse0x2749e60() {
   return (neuron0x2740bb0()*0.225281);
}

double NNfunction_sb_sRsR::synapse0x2749ea0() {
   return (neuron0x2740ef0()*0.179315);
}

double NNfunction_sb_sRsR::synapse0x2749930() {
   return (neuron0x2741230()*0.0363644);
}

double NNfunction_sb_sRsR::synapse0x2749970() {
   return (neuron0x2741790()*-0.292424);
}

double NNfunction_sb_sRsR::synapse0x2749ff0() {
   return (neuron0x2741ad0()*-1.15397);
}

double NNfunction_sb_sRsR::synapse0x274a030() {
   return (neuron0x2741e10()*-0.486412);
}

double NNfunction_sb_sRsR::synapse0x274a070() {
   return (neuron0x2742150()*0.104446);
}

double NNfunction_sb_sRsR::synapse0x274a0b0() {
   return (neuron0x2742490()*-0.0833347);
}

double NNfunction_sb_sRsR::synapse0x274a0f0() {
   return (neuron0x27427d0()*0.118371);
}

double NNfunction_sb_sRsR::synapse0x274a130() {
   return (neuron0x2742b10()*0.10631);
}

double NNfunction_sb_sRsR::synapse0x274a4b0() {
   return (neuron0x273dec0()*-0.317671);
}

double NNfunction_sb_sRsR::synapse0x274a4f0() {
   return (neuron0x273e170()*0.0228111);
}

double NNfunction_sb_sRsR::synapse0x274a530() {
   return (neuron0x273e4b0()*-0.0534533);
}

double NNfunction_sb_sRsR::synapse0x274a570() {
   return (neuron0x273e7f0()*-0.00587267);
}

double NNfunction_sb_sRsR::synapse0x274a5b0() {
   return (neuron0x273eb30()*-0.0092739);
}

double NNfunction_sb_sRsR::synapse0x274a5f0() {
   return (neuron0x273ee70()*0.0130885);
}

double NNfunction_sb_sRsR::synapse0x274a630() {
   return (neuron0x273f1b0()*0.065806);
}

double NNfunction_sb_sRsR::synapse0x274a670() {
   return (neuron0x273f4f0()*-0.190074);
}

double NNfunction_sb_sRsR::synapse0x274a6b0() {
   return (neuron0x273f830()*-0.00506057);
}

double NNfunction_sb_sRsR::synapse0x274a6f0() {
   return (neuron0x273fb70()*0.0575399);
}

double NNfunction_sb_sRsR::synapse0x274a730() {
   return (neuron0x273feb0()*0.0468028);
}

double NNfunction_sb_sRsR::synapse0x274a770() {
   return (neuron0x27401f0()*-0.026299);
}

double NNfunction_sb_sRsR::synapse0x274a7b0() {
   return (neuron0x2740530()*-0.150063);
}

double NNfunction_sb_sRsR::synapse0x274a7f0() {
   return (neuron0x2740870()*0.0597623);
}

double NNfunction_sb_sRsR::synapse0x274a830() {
   return (neuron0x2740bb0()*-0.183617);
}

double NNfunction_sb_sRsR::synapse0x274a870() {
   return (neuron0x2740ef0()*0.0243776);
}

double NNfunction_sb_sRsR::synapse0x274a300() {
   return (neuron0x2741230()*0.0806544);
}

double NNfunction_sb_sRsR::synapse0x274a340() {
   return (neuron0x2741790()*0.0509236);
}

double NNfunction_sb_sRsR::synapse0x27470d0() {
   return (neuron0x2741ad0()*-0.931553);
}

double NNfunction_sb_sRsR::synapse0x2747110() {
   return (neuron0x2741e10()*0.225093);
}

double NNfunction_sb_sRsR::synapse0x2747150() {
   return (neuron0x2742150()*-0.0537764);
}

double NNfunction_sb_sRsR::synapse0x2747190() {
   return (neuron0x2742490()*0.0049923);
}

double NNfunction_sb_sRsR::synapse0x27471d0() {
   return (neuron0x27427d0()*-0.0193208);
}

double NNfunction_sb_sRsR::synapse0x2747210() {
   return (neuron0x2742b10()*-0.134509);
}

double NNfunction_sb_sRsR::synapse0x2747590() {
   return (neuron0x273dec0()*0.630413);
}

double NNfunction_sb_sRsR::synapse0x27475d0() {
   return (neuron0x273e170()*-0.1928);
}

double NNfunction_sb_sRsR::synapse0x2747610() {
   return (neuron0x273e4b0()*0.636765);
}

double NNfunction_sb_sRsR::synapse0x2747650() {
   return (neuron0x273e7f0()*-0.99231);
}

double NNfunction_sb_sRsR::synapse0x2747690() {
   return (neuron0x273eb30()*-0.0188459);
}

double NNfunction_sb_sRsR::synapse0x27476d0() {
   return (neuron0x273ee70()*-0.0843279);
}

double NNfunction_sb_sRsR::synapse0x2747710() {
   return (neuron0x273f1b0()*0.0118508);
}

double NNfunction_sb_sRsR::synapse0x2747750() {
   return (neuron0x273f4f0()*0.114445);
}

double NNfunction_sb_sRsR::synapse0x2747790() {
   return (neuron0x273f830()*0.448504);
}

double NNfunction_sb_sRsR::synapse0x27477d0() {
   return (neuron0x273fb70()*-0.0729247);
}

double NNfunction_sb_sRsR::synapse0x2747810() {
   return (neuron0x273feb0()*-0.702943);
}

double NNfunction_sb_sRsR::synapse0x2747850() {
   return (neuron0x27401f0()*-0.241489);
}

double NNfunction_sb_sRsR::synapse0x2747890() {
   return (neuron0x2740530()*-0.636466);
}

double NNfunction_sb_sRsR::synapse0x274b9d0() {
   return (neuron0x2740870()*-0.228274);
}

double NNfunction_sb_sRsR::synapse0x274ba10() {
   return (neuron0x2740bb0()*-0.139268);
}

double NNfunction_sb_sRsR::synapse0x274ba50() {
   return (neuron0x2740ef0()*-0.0762606);
}

double NNfunction_sb_sRsR::synapse0x27473e0() {
   return (neuron0x2741230()*0.48848);
}

double NNfunction_sb_sRsR::synapse0x2747420() {
   return (neuron0x2741790()*0.150379);
}

double NNfunction_sb_sRsR::synapse0x274bba0() {
   return (neuron0x2741ad0()*0.115917);
}

double NNfunction_sb_sRsR::synapse0x274bbe0() {
   return (neuron0x2741e10()*-0.433749);
}

double NNfunction_sb_sRsR::synapse0x274bc20() {
   return (neuron0x2742150()*0.0660873);
}

double NNfunction_sb_sRsR::synapse0x274bc60() {
   return (neuron0x2742490()*0.790663);
}

double NNfunction_sb_sRsR::synapse0x274bca0() {
   return (neuron0x27427d0()*0.0670413);
}

double NNfunction_sb_sRsR::synapse0x274bce0() {
   return (neuron0x2742b10()*0.788367);
}

double NNfunction_sb_sRsR::synapse0x274c060() {
   return (neuron0x273dec0()*0.2647);
}

double NNfunction_sb_sRsR::synapse0x274c0a0() {
   return (neuron0x273e170()*0.143638);
}

double NNfunction_sb_sRsR::synapse0x274c0e0() {
   return (neuron0x273e4b0()*-0.0593399);
}

double NNfunction_sb_sRsR::synapse0x274c120() {
   return (neuron0x273e7f0()*0.228184);
}

double NNfunction_sb_sRsR::synapse0x274c160() {
   return (neuron0x273eb30()*-0.172562);
}

double NNfunction_sb_sRsR::synapse0x274c1a0() {
   return (neuron0x273ee70()*0.0777346);
}

double NNfunction_sb_sRsR::synapse0x274c1e0() {
   return (neuron0x273f1b0()*-0.0777838);
}

double NNfunction_sb_sRsR::synapse0x274c220() {
   return (neuron0x273f4f0()*0.119968);
}

double NNfunction_sb_sRsR::synapse0x274c260() {
   return (neuron0x273f830()*-0.309157);
}

double NNfunction_sb_sRsR::synapse0x274c2a0() {
   return (neuron0x273fb70()*0.196487);
}

double NNfunction_sb_sRsR::synapse0x274c2e0() {
   return (neuron0x273feb0()*0.64747);
}

double NNfunction_sb_sRsR::synapse0x274c320() {
   return (neuron0x27401f0()*-0.169682);
}

double NNfunction_sb_sRsR::synapse0x274c360() {
   return (neuron0x2740530()*-0.158903);
}

double NNfunction_sb_sRsR::synapse0x274c3a0() {
   return (neuron0x2740870()*-0.298885);
}

double NNfunction_sb_sRsR::synapse0x274c3e0() {
   return (neuron0x2740bb0()*0.0185262);
}

double NNfunction_sb_sRsR::synapse0x274c420() {
   return (neuron0x2740ef0()*0.00372588);
}

double NNfunction_sb_sRsR::synapse0x274beb0() {
   return (neuron0x2741230()*-0.0894295);
}

double NNfunction_sb_sRsR::synapse0x274bef0() {
   return (neuron0x2741790()*-0.0883576);
}

double NNfunction_sb_sRsR::synapse0x274c570() {
   return (neuron0x2741ad0()*2.26451);
}

double NNfunction_sb_sRsR::synapse0x274c5b0() {
   return (neuron0x2741e10()*0.0951689);
}

double NNfunction_sb_sRsR::synapse0x274c5f0() {
   return (neuron0x2742150()*-0.218511);
}

double NNfunction_sb_sRsR::synapse0x274c630() {
   return (neuron0x2742490()*-0.259927);
}

double NNfunction_sb_sRsR::synapse0x274c670() {
   return (neuron0x27427d0()*0.0273648);
}

double NNfunction_sb_sRsR::synapse0x274c6b0() {
   return (neuron0x2742b10()*-0.10597);
}

double NNfunction_sb_sRsR::synapse0x274ca30() {
   return (neuron0x273dec0()*-0.10355);
}

double NNfunction_sb_sRsR::synapse0x274ca70() {
   return (neuron0x273e170()*0.0506526);
}

double NNfunction_sb_sRsR::synapse0x274cab0() {
   return (neuron0x273e4b0()*-0.0308787);
}

double NNfunction_sb_sRsR::synapse0x274caf0() {
   return (neuron0x273e7f0()*-0.514946);
}

double NNfunction_sb_sRsR::synapse0x274cb30() {
   return (neuron0x273eb30()*-0.243836);
}

double NNfunction_sb_sRsR::synapse0x274cb70() {
   return (neuron0x273ee70()*-0.190018);
}

double NNfunction_sb_sRsR::synapse0x274cbb0() {
   return (neuron0x273f1b0()*-0.0341407);
}

double NNfunction_sb_sRsR::synapse0x274cbf0() {
   return (neuron0x273f4f0()*-0.209294);
}

double NNfunction_sb_sRsR::synapse0x274cc30() {
   return (neuron0x273f830()*-0.0277924);
}

double NNfunction_sb_sRsR::synapse0x274cc70() {
   return (neuron0x273fb70()*0.0344259);
}

double NNfunction_sb_sRsR::synapse0x274ccb0() {
   return (neuron0x273feb0()*-0.0191877);
}

double NNfunction_sb_sRsR::synapse0x274ccf0() {
   return (neuron0x27401f0()*-0.0648968);
}

double NNfunction_sb_sRsR::synapse0x274cd30() {
   return (neuron0x2740530()*-0.125225);
}

double NNfunction_sb_sRsR::synapse0x274cd70() {
   return (neuron0x2740870()*0.031532);
}

double NNfunction_sb_sRsR::synapse0x274cdb0() {
   return (neuron0x2740bb0()*0.281824);
}

double NNfunction_sb_sRsR::synapse0x274cdf0() {
   return (neuron0x2740ef0()*0.385454);
}

double NNfunction_sb_sRsR::synapse0x274c880() {
   return (neuron0x2741230()*0.085812);
}

double NNfunction_sb_sRsR::synapse0x274c8c0() {
   return (neuron0x2741790()*-0.0394);
}

double NNfunction_sb_sRsR::synapse0x274cf40() {
   return (neuron0x2741ad0()*-0.710539);
}

double NNfunction_sb_sRsR::synapse0x274cf80() {
   return (neuron0x2741e10()*-0.0194173);
}

double NNfunction_sb_sRsR::synapse0x274cfc0() {
   return (neuron0x2742150()*0.00053841);
}

double NNfunction_sb_sRsR::synapse0x274d000() {
   return (neuron0x2742490()*-0.0408227);
}

double NNfunction_sb_sRsR::synapse0x274d040() {
   return (neuron0x27427d0()*-0.0152005);
}

double NNfunction_sb_sRsR::synapse0x274d080() {
   return (neuron0x2742b10()*0.126602);
}

double NNfunction_sb_sRsR::synapse0x274d400() {
   return (neuron0x273dec0()*-0.813437);
}

double NNfunction_sb_sRsR::synapse0x274d440() {
   return (neuron0x273e170()*0.533069);
}

double NNfunction_sb_sRsR::synapse0x274d480() {
   return (neuron0x273e4b0()*0.648281);
}

double NNfunction_sb_sRsR::synapse0x274d4c0() {
   return (neuron0x273e7f0()*0.841312);
}

double NNfunction_sb_sRsR::synapse0x274d500() {
   return (neuron0x273eb30()*-0.145995);
}

double NNfunction_sb_sRsR::synapse0x274d540() {
   return (neuron0x273ee70()*0.984166);
}

double NNfunction_sb_sRsR::synapse0x274d580() {
   return (neuron0x273f1b0()*-0.405841);
}

double NNfunction_sb_sRsR::synapse0x274d5c0() {
   return (neuron0x273f4f0()*0.319625);
}

double NNfunction_sb_sRsR::synapse0x274d600() {
   return (neuron0x273f830()*0.102936);
}

double NNfunction_sb_sRsR::synapse0x274d640() {
   return (neuron0x273fb70()*0.418484);
}

double NNfunction_sb_sRsR::synapse0x274d680() {
   return (neuron0x273feb0()*-0.00713707);
}

double NNfunction_sb_sRsR::synapse0x274d6c0() {
   return (neuron0x27401f0()*-0.40591);
}

double NNfunction_sb_sRsR::synapse0x274d700() {
   return (neuron0x2740530()*0.502791);
}

double NNfunction_sb_sRsR::synapse0x274d740() {
   return (neuron0x2740870()*-0.0448667);
}

double NNfunction_sb_sRsR::synapse0x274d780() {
   return (neuron0x2740bb0()*-0.0314876);
}

double NNfunction_sb_sRsR::synapse0x274d7c0() {
   return (neuron0x2740ef0()*0.239777);
}

double NNfunction_sb_sRsR::synapse0x274d250() {
   return (neuron0x2741230()*-0.184369);
}

double NNfunction_sb_sRsR::synapse0x274d290() {
   return (neuron0x2741790()*-0.0562437);
}

double NNfunction_sb_sRsR::synapse0x274d910() {
   return (neuron0x2741ad0()*0.118076);
}

double NNfunction_sb_sRsR::synapse0x274d950() {
   return (neuron0x2741e10()*0.574514);
}

double NNfunction_sb_sRsR::synapse0x274d990() {
   return (neuron0x2742150()*-0.643625);
}

double NNfunction_sb_sRsR::synapse0x274d9d0() {
   return (neuron0x2742490()*0.192618);
}

double NNfunction_sb_sRsR::synapse0x274da10() {
   return (neuron0x27427d0()*-0.639162);
}

double NNfunction_sb_sRsR::synapse0x274da50() {
   return (neuron0x2742b10()*0.126011);
}

double NNfunction_sb_sRsR::synapse0x274ddd0() {
   return (neuron0x273dec0()*-0.173995);
}

double NNfunction_sb_sRsR::synapse0x273e050() {
   return (neuron0x273e170()*-0.00981077);
}

double NNfunction_sb_sRsR::synapse0x273e090() {
   return (neuron0x273e4b0()*-0.0453852);
}

double NNfunction_sb_sRsR::synapse0x273e390() {
   return (neuron0x273e7f0()*-0.0556518);
}

double NNfunction_sb_sRsR::synapse0x273e3d0() {
   return (neuron0x273eb30()*-0.0233707);
}

double NNfunction_sb_sRsR::synapse0x273e6d0() {
   return (neuron0x273ee70()*0.0233924);
}

double NNfunction_sb_sRsR::synapse0x273e710() {
   return (neuron0x273f1b0()*0.0246255);
}

double NNfunction_sb_sRsR::synapse0x273ea10() {
   return (neuron0x273f4f0()*-0.146387);
}

double NNfunction_sb_sRsR::synapse0x273ea50() {
   return (neuron0x273f830()*0.0175218);
}

double NNfunction_sb_sRsR::synapse0x273ed50() {
   return (neuron0x273fb70()*0.0173481);
}

double NNfunction_sb_sRsR::synapse0x273ed90() {
   return (neuron0x273feb0()*0.026342);
}

double NNfunction_sb_sRsR::synapse0x273f090() {
   return (neuron0x27401f0()*-0.130664);
}

double NNfunction_sb_sRsR::synapse0x273f0d0() {
   return (neuron0x2740530()*-0.168388);
}

double NNfunction_sb_sRsR::synapse0x273f3d0() {
   return (neuron0x2740870()*0.0563935);
}

double NNfunction_sb_sRsR::synapse0x273f410() {
   return (neuron0x2740bb0()*-0.281647);
}

double NNfunction_sb_sRsR::synapse0x273f710() {
   return (neuron0x2740ef0()*-0.165577);
}

double NNfunction_sb_sRsR::synapse0x273f750() {
   return (neuron0x2741230()*0.0623921);
}

double NNfunction_sb_sRsR::synapse0x273fa50() {
   return (neuron0x2741790()*-0.0263798);
}

double NNfunction_sb_sRsR::synapse0x273fa90() {
   return (neuron0x2741ad0()*-0.196508);
}

double NNfunction_sb_sRsR::synapse0x273fd90() {
   return (neuron0x2741e10()*0.0836145);
}

double NNfunction_sb_sRsR::synapse0x273fdd0() {
   return (neuron0x2742150()*-0.0555283);
}

double NNfunction_sb_sRsR::synapse0x27400d0() {
   return (neuron0x2742490()*0.0165797);
}

double NNfunction_sb_sRsR::synapse0x2740110() {
   return (neuron0x27427d0()*-0.0216357);
}

double NNfunction_sb_sRsR::synapse0x2740410() {
   return (neuron0x2742b10()*-0.0743167);
}

double NNfunction_sb_sRsR::synapse0x2740450() {
   return (neuron0x273dec0()*-0.448313);
}

double NNfunction_sb_sRsR::synapse0x2741110() {
   return (neuron0x273e170()*-0.0213698);
}

double NNfunction_sb_sRsR::synapse0x2741150() {
   return (neuron0x273e4b0()*0.0397176);
}

double NNfunction_sb_sRsR::synapse0x274dc20() {
   return (neuron0x273e7f0()*-0.0277467);
}

double NNfunction_sb_sRsR::synapse0x274dc60() {
   return (neuron0x273eb30()*-0.0765908);
}

double NNfunction_sb_sRsR::synapse0x2741450() {
   return (neuron0x273ee70()*-0.0405643);
}

double NNfunction_sb_sRsR::synapse0x2741490() {
   return (neuron0x273f1b0()*0.230358);
}

double NNfunction_sb_sRsR::synapse0x27419b0() {
   return (neuron0x273f4f0()*-0.20156);
}

double NNfunction_sb_sRsR::synapse0x27419f0() {
   return (neuron0x273f830()*0.319797);
}

double NNfunction_sb_sRsR::synapse0x2741cf0() {
   return (neuron0x273fb70()*0.655067);
}

double NNfunction_sb_sRsR::synapse0x2741d30() {
   return (neuron0x273feb0()*-0.549865);
}

double NNfunction_sb_sRsR::synapse0x2742030() {
   return (neuron0x27401f0()*-0.332974);
}

double NNfunction_sb_sRsR::synapse0x2742070() {
   return (neuron0x2740530()*-0.0305022);
}

double NNfunction_sb_sRsR::synapse0x2742370() {
   return (neuron0x2740870()*-0.30141);
}

double NNfunction_sb_sRsR::synapse0x27423b0() {
   return (neuron0x2740bb0()*-0.287851);
}

double NNfunction_sb_sRsR::synapse0x27426b0() {
   return (neuron0x2740ef0()*-0.0741587);
}

double NNfunction_sb_sRsR::synapse0x27426f0() {
   return (neuron0x2741230()*-0.110206);
}

double NNfunction_sb_sRsR::synapse0x27429f0() {
   return (neuron0x2741790()*-0.653235);
}

double NNfunction_sb_sRsR::synapse0x2742a30() {
   return (neuron0x2741ad0()*0.91439);
}

double NNfunction_sb_sRsR::synapse0x2742d30() {
   return (neuron0x2741e10()*0.0113181);
}

double NNfunction_sb_sRsR::synapse0x2742d70() {
   return (neuron0x2742150()*0.0863508);
}

double NNfunction_sb_sRsR::synapse0x2740750() {
   return (neuron0x2742490()*-0.133643);
}

double NNfunction_sb_sRsR::synapse0x2740790() {
   return (neuron0x27427d0()*-0.0945521);
}

double NNfunction_sb_sRsR::synapse0x274fb40() {
   return (neuron0x2742b10()*0.179435);
}

double NNfunction_sb_sRsR::synapse0x274fec0() {
   return (neuron0x273dec0()*-0.649805);
}

double NNfunction_sb_sRsR::synapse0x274ff00() {
   return (neuron0x273e170()*0.0915227);
}

double NNfunction_sb_sRsR::synapse0x274ff40() {
   return (neuron0x273e4b0()*0.660193);
}

double NNfunction_sb_sRsR::synapse0x274ff80() {
   return (neuron0x273e7f0()*0.106317);
}

double NNfunction_sb_sRsR::synapse0x274ffc0() {
   return (neuron0x273eb30()*-0.326489);
}

double NNfunction_sb_sRsR::synapse0x2750000() {
   return (neuron0x273ee70()*-0.132255);
}

double NNfunction_sb_sRsR::synapse0x2750040() {
   return (neuron0x273f1b0()*0.357392);
}

double NNfunction_sb_sRsR::synapse0x2750080() {
   return (neuron0x273f4f0()*-0.266355);
}

double NNfunction_sb_sRsR::synapse0x27500c0() {
   return (neuron0x273f830()*-0.322563);
}

double NNfunction_sb_sRsR::synapse0x2750100() {
   return (neuron0x273fb70()*0.151051);
}

double NNfunction_sb_sRsR::synapse0x2750140() {
   return (neuron0x273feb0()*-0.257466);
}

double NNfunction_sb_sRsR::synapse0x2750180() {
   return (neuron0x27401f0()*0.217599);
}

double NNfunction_sb_sRsR::synapse0x27501c0() {
   return (neuron0x2740530()*0.699844);
}

double NNfunction_sb_sRsR::synapse0x2750200() {
   return (neuron0x2740870()*1.03463);
}

double NNfunction_sb_sRsR::synapse0x2750240() {
   return (neuron0x2740bb0()*-0.149175);
}

double NNfunction_sb_sRsR::synapse0x2750280() {
   return (neuron0x2740ef0()*0.932555);
}

double NNfunction_sb_sRsR::synapse0x274fd10() {
   return (neuron0x2741230()*0.815248);
}

double NNfunction_sb_sRsR::synapse0x274fd50() {
   return (neuron0x2741790()*0.910279);
}

double NNfunction_sb_sRsR::synapse0x27503d0() {
   return (neuron0x2741ad0()*0.969398);
}

double NNfunction_sb_sRsR::synapse0x2750410() {
   return (neuron0x2741e10()*0.0913229);
}

double NNfunction_sb_sRsR::synapse0x2750450() {
   return (neuron0x2742150()*-0.199921);
}

double NNfunction_sb_sRsR::synapse0x2750490() {
   return (neuron0x2742490()*-0.706586);
}

double NNfunction_sb_sRsR::synapse0x27504d0() {
   return (neuron0x27427d0()*0.131035);
}

double NNfunction_sb_sRsR::synapse0x2750510() {
   return (neuron0x2742b10()*0.678366);
}

double NNfunction_sb_sRsR::synapse0x2750890() {
   return (neuron0x273dec0()*0.00652379);
}

double NNfunction_sb_sRsR::synapse0x27508d0() {
   return (neuron0x273e170()*0.0157458);
}

double NNfunction_sb_sRsR::synapse0x2750910() {
   return (neuron0x273e4b0()*-0.00133105);
}

double NNfunction_sb_sRsR::synapse0x2750950() {
   return (neuron0x273e7f0()*-3.20732);
}

double NNfunction_sb_sRsR::synapse0x2750990() {
   return (neuron0x273eb30()*-0.00218881);
}

double NNfunction_sb_sRsR::synapse0x27509d0() {
   return (neuron0x273ee70()*-0.00231988);
}

double NNfunction_sb_sRsR::synapse0x2750a10() {
   return (neuron0x273f1b0()*-0.000105276);
}

double NNfunction_sb_sRsR::synapse0x2750a50() {
   return (neuron0x273f4f0()*-0.00167714);
}

double NNfunction_sb_sRsR::synapse0x2750a90() {
   return (neuron0x273f830()*-0.00243639);
}

double NNfunction_sb_sRsR::synapse0x2750ad0() {
   return (neuron0x273fb70()*0.00063356);
}

double NNfunction_sb_sRsR::synapse0x2750b10() {
   return (neuron0x273feb0()*-0.0137752);
}

double NNfunction_sb_sRsR::synapse0x2750b50() {
   return (neuron0x27401f0()*-0.0206728);
}

double NNfunction_sb_sRsR::synapse0x2750b90() {
   return (neuron0x2740530()*-0.0118852);
}

double NNfunction_sb_sRsR::synapse0x2750bd0() {
   return (neuron0x2740870()*0.0399754);
}

double NNfunction_sb_sRsR::synapse0x2750c10() {
   return (neuron0x2740bb0()*-0.0068014);
}

double NNfunction_sb_sRsR::synapse0x2750c50() {
   return (neuron0x2740ef0()*-0.000431824);
}

double NNfunction_sb_sRsR::synapse0x27506e0() {
   return (neuron0x2741230()*0.022558);
}

double NNfunction_sb_sRsR::synapse0x2750720() {
   return (neuron0x2741790()*-0.01432);
}

double NNfunction_sb_sRsR::synapse0x2750da0() {
   return (neuron0x2741ad0()*0.189455);
}

double NNfunction_sb_sRsR::synapse0x2750de0() {
   return (neuron0x2741e10()*0.00454785);
}

double NNfunction_sb_sRsR::synapse0x2750e20() {
   return (neuron0x2742150()*0.00692147);
}

double NNfunction_sb_sRsR::synapse0x2750e60() {
   return (neuron0x2742490()*0.00909067);
}

double NNfunction_sb_sRsR::synapse0x2750ea0() {
   return (neuron0x27427d0()*-0.0125574);
}

double NNfunction_sb_sRsR::synapse0x2750ee0() {
   return (neuron0x2742b10()*0.00640289);
}

double NNfunction_sb_sRsR::synapse0x2751260() {
   return (neuron0x273dec0()*-0.0109407);
}

double NNfunction_sb_sRsR::synapse0x27512a0() {
   return (neuron0x273e170()*0.0284701);
}

double NNfunction_sb_sRsR::synapse0x27512e0() {
   return (neuron0x273e4b0()*0.0116853);
}

double NNfunction_sb_sRsR::synapse0x2751320() {
   return (neuron0x273e7f0()*2.88307);
}

double NNfunction_sb_sRsR::synapse0x2751360() {
   return (neuron0x273eb30()*-0.0104732);
}

double NNfunction_sb_sRsR::synapse0x27513a0() {
   return (neuron0x273ee70()*-0.00255405);
}

double NNfunction_sb_sRsR::synapse0x27513e0() {
   return (neuron0x273f1b0()*0.00195962);
}

double NNfunction_sb_sRsR::synapse0x2751420() {
   return (neuron0x273f4f0()*0.00573181);
}

double NNfunction_sb_sRsR::synapse0x2751460() {
   return (neuron0x273f830()*0.0128868);
}

double NNfunction_sb_sRsR::synapse0x27514a0() {
   return (neuron0x273fb70()*0.0126009);
}

double NNfunction_sb_sRsR::synapse0x27514e0() {
   return (neuron0x273feb0()*-0.00562812);
}

double NNfunction_sb_sRsR::synapse0x2751520() {
   return (neuron0x27401f0()*0.0111038);
}

double NNfunction_sb_sRsR::synapse0x2751560() {
   return (neuron0x2740530()*0.03359);
}

double NNfunction_sb_sRsR::synapse0x27515a0() {
   return (neuron0x2740870()*0.0109432);
}

double NNfunction_sb_sRsR::synapse0x27515e0() {
   return (neuron0x2740bb0()*-0.0125526);
}

double NNfunction_sb_sRsR::synapse0x2751620() {
   return (neuron0x2740ef0()*-0.0128775);
}

double NNfunction_sb_sRsR::synapse0x27510b0() {
   return (neuron0x2741230()*-0.0381417);
}

double NNfunction_sb_sRsR::synapse0x27510f0() {
   return (neuron0x2741790()*0.0178968);
}

double NNfunction_sb_sRsR::synapse0x2751770() {
   return (neuron0x2741ad0()*-0.696362);
}

double NNfunction_sb_sRsR::synapse0x27517b0() {
   return (neuron0x2741e10()*0.0286753);
}

double NNfunction_sb_sRsR::synapse0x27517f0() {
   return (neuron0x2742150()*0.0109498);
}

double NNfunction_sb_sRsR::synapse0x2751830() {
   return (neuron0x2742490()*0.021949);
}

double NNfunction_sb_sRsR::synapse0x2751870() {
   return (neuron0x27427d0()*-0.0219011);
}

double NNfunction_sb_sRsR::synapse0x27518b0() {
   return (neuron0x2742b10()*0.0214997);
}

double NNfunction_sb_sRsR::synapse0x2751c30() {
   return (neuron0x273dec0()*-0.130945);
}

double NNfunction_sb_sRsR::synapse0x2751c70() {
   return (neuron0x273e170()*0.000508804);
}

double NNfunction_sb_sRsR::synapse0x2751cb0() {
   return (neuron0x273e4b0()*-0.00295383);
}

double NNfunction_sb_sRsR::synapse0x2751cf0() {
   return (neuron0x273e7f0()*-0.065912);
}

double NNfunction_sb_sRsR::synapse0x2751d30() {
   return (neuron0x273eb30()*0.0215684);
}

double NNfunction_sb_sRsR::synapse0x2751d70() {
   return (neuron0x273ee70()*0.0108426);
}

double NNfunction_sb_sRsR::synapse0x2751db0() {
   return (neuron0x273f1b0()*0.0725863);
}

double NNfunction_sb_sRsR::synapse0x2751df0() {
   return (neuron0x273f4f0()*-0.15047);
}

double NNfunction_sb_sRsR::synapse0x2751e30() {
   return (neuron0x273f830()*0.00197303);
}

double NNfunction_sb_sRsR::synapse0x2751e70() {
   return (neuron0x273fb70()*0.008541);
}

double NNfunction_sb_sRsR::synapse0x2751eb0() {
   return (neuron0x273feb0()*-0.0157759);
}

double NNfunction_sb_sRsR::synapse0x2751ef0() {
   return (neuron0x27401f0()*0.341305);
}

double NNfunction_sb_sRsR::synapse0x2751f30() {
   return (neuron0x2740530()*0.336437);
}

double NNfunction_sb_sRsR::synapse0x2751f70() {
   return (neuron0x2740870()*-0.0069378);
}

double NNfunction_sb_sRsR::synapse0x2751fb0() {
   return (neuron0x2740bb0()*0.0303019);
}

double NNfunction_sb_sRsR::synapse0x2751ff0() {
   return (neuron0x2740ef0()*0.185961);
}

double NNfunction_sb_sRsR::synapse0x2751a80() {
   return (neuron0x2741230()*-0.0132024);
}

double NNfunction_sb_sRsR::synapse0x2751ac0() {
   return (neuron0x2741790()*0.174809);
}

double NNfunction_sb_sRsR::synapse0x2752140() {
   return (neuron0x2741ad0()*-0.263381);
}

double NNfunction_sb_sRsR::synapse0x2752180() {
   return (neuron0x2741e10()*0.0992375);
}

double NNfunction_sb_sRsR::synapse0x27521c0() {
   return (neuron0x2742150()*-0.0216711);
}

double NNfunction_sb_sRsR::synapse0x2752200() {
   return (neuron0x2742490()*0.000580894);
}

double NNfunction_sb_sRsR::synapse0x2752240() {
   return (neuron0x27427d0()*0.00737435);
}

double NNfunction_sb_sRsR::synapse0x2752280() {
   return (neuron0x2742b10()*-0.0542289);
}

double NNfunction_sb_sRsR::synapse0x2752600() {
   return (neuron0x273dec0()*0.0346357);
}

double NNfunction_sb_sRsR::synapse0x2752640() {
   return (neuron0x273e170()*0.0695526);
}

double NNfunction_sb_sRsR::synapse0x2752680() {
   return (neuron0x273e4b0()*-0.0503425);
}

double NNfunction_sb_sRsR::synapse0x27526c0() {
   return (neuron0x273e7f0()*-0.496282);
}

double NNfunction_sb_sRsR::synapse0x2752700() {
   return (neuron0x273eb30()*-0.0624119);
}

double NNfunction_sb_sRsR::synapse0x2752740() {
   return (neuron0x273ee70()*0.349383);
}

double NNfunction_sb_sRsR::synapse0x2752780() {
   return (neuron0x273f1b0()*0.486742);
}

double NNfunction_sb_sRsR::synapse0x27527c0() {
   return (neuron0x273f4f0()*0.384662);
}

double NNfunction_sb_sRsR::synapse0x2752800() {
   return (neuron0x273f830()*0.0134076);
}

double NNfunction_sb_sRsR::synapse0x274a9c0() {
   return (neuron0x273fb70()*0.0236737);
}

double NNfunction_sb_sRsR::synapse0x274aa00() {
   return (neuron0x273feb0()*-0.0295622);
}

double NNfunction_sb_sRsR::synapse0x274aa40() {
   return (neuron0x27401f0()*0.0147465);
}

double NNfunction_sb_sRsR::synapse0x274aa80() {
   return (neuron0x2740530()*-0.0690158);
}

double NNfunction_sb_sRsR::synapse0x274aac0() {
   return (neuron0x2740870()*0.27176);
}

double NNfunction_sb_sRsR::synapse0x274ab00() {
   return (neuron0x2740bb0()*-0.292177);
}

double NNfunction_sb_sRsR::synapse0x274ab40() {
   return (neuron0x2740ef0()*-0.0444917);
}

double NNfunction_sb_sRsR::synapse0x2752450() {
   return (neuron0x2741230()*0.449138);
}

double NNfunction_sb_sRsR::synapse0x2752490() {
   return (neuron0x2741790()*-0.0124264);
}

double NNfunction_sb_sRsR::synapse0x274ac90() {
   return (neuron0x2741ad0()*-0.729924);
}

double NNfunction_sb_sRsR::synapse0x274acd0() {
   return (neuron0x2741e10()*-0.0208859);
}

double NNfunction_sb_sRsR::synapse0x274ad10() {
   return (neuron0x2742150()*0.0252409);
}

double NNfunction_sb_sRsR::synapse0x274ad50() {
   return (neuron0x2742490()*-0.173401);
}

double NNfunction_sb_sRsR::synapse0x274ad90() {
   return (neuron0x27427d0()*-0.196854);
}

double NNfunction_sb_sRsR::synapse0x274add0() {
   return (neuron0x2742b10()*0.0188626);
}

double NNfunction_sb_sRsR::synapse0x274b150() {
   return (neuron0x273dec0()*-0.00131162);
}

double NNfunction_sb_sRsR::synapse0x274b190() {
   return (neuron0x273e170()*0.00252155);
}

double NNfunction_sb_sRsR::synapse0x274b1d0() {
   return (neuron0x273e4b0()*0.00971363);
}

double NNfunction_sb_sRsR::synapse0x274b210() {
   return (neuron0x273e7f0()*-3.09683);
}

double NNfunction_sb_sRsR::synapse0x274b250() {
   return (neuron0x273eb30()*-0.0034455);
}

double NNfunction_sb_sRsR::synapse0x274b290() {
   return (neuron0x273ee70()*-0.00553969);
}

double NNfunction_sb_sRsR::synapse0x274b2d0() {
   return (neuron0x273f1b0()*-0.000682472);
}

double NNfunction_sb_sRsR::synapse0x274b310() {
   return (neuron0x273f4f0()*0.00257357);
}

double NNfunction_sb_sRsR::synapse0x274b350() {
   return (neuron0x273f830()*-0.00586931);
}

double NNfunction_sb_sRsR::synapse0x274b390() {
   return (neuron0x273fb70()*-0.00434373);
}

double NNfunction_sb_sRsR::synapse0x274b3d0() {
   return (neuron0x273feb0()*0.0142127);
}

double NNfunction_sb_sRsR::synapse0x274b410() {
   return (neuron0x27401f0()*0.0140836);
}

double NNfunction_sb_sRsR::synapse0x274b450() {
   return (neuron0x2740530()*0.00551278);
}

double NNfunction_sb_sRsR::synapse0x274b490() {
   return (neuron0x2740870()*-0.041923);
}

double NNfunction_sb_sRsR::synapse0x274b4d0() {
   return (neuron0x2740bb0()*0.00367154);
}

double NNfunction_sb_sRsR::synapse0x274b510() {
   return (neuron0x2740ef0()*0.00302073);
}

double NNfunction_sb_sRsR::synapse0x274afa0() {
   return (neuron0x2741230()*-0.0203032);
}

double NNfunction_sb_sRsR::synapse0x274afe0() {
   return (neuron0x2741790()*0.0274489);
}

double NNfunction_sb_sRsR::synapse0x274b660() {
   return (neuron0x2741ad0()*-0.421281);
}

double NNfunction_sb_sRsR::synapse0x274b6a0() {
   return (neuron0x2741e10()*0.00169267);
}

double NNfunction_sb_sRsR::synapse0x274b6e0() {
   return (neuron0x2742150()*0.00059707);
}

double NNfunction_sb_sRsR::synapse0x274b720() {
   return (neuron0x2742490()*0.00295016);
}

double NNfunction_sb_sRsR::synapse0x274b760() {
   return (neuron0x27427d0()*0.00371579);
}

double NNfunction_sb_sRsR::synapse0x274b7a0() {
   return (neuron0x2742b10()*-0.00695422);
}

double NNfunction_sb_sRsR::synapse0x274b970() {
   return (neuron0x273dec0()*-0.301282);
}

double NNfunction_sb_sRsR::synapse0x2754a00() {
   return (neuron0x273e170()*0.000910975);
}

double NNfunction_sb_sRsR::synapse0x2754a40() {
   return (neuron0x273e4b0()*-0.0896727);
}

double NNfunction_sb_sRsR::synapse0x2754a80() {
   return (neuron0x273e7f0()*-0.0466014);
}

double NNfunction_sb_sRsR::synapse0x2754ac0() {
   return (neuron0x273eb30()*-0.0439357);
}

double NNfunction_sb_sRsR::synapse0x2754b00() {
   return (neuron0x273ee70()*0.0377974);
}

double NNfunction_sb_sRsR::synapse0x2754b40() {
   return (neuron0x273f1b0()*0.0306878);
}

double NNfunction_sb_sRsR::synapse0x2754b80() {
   return (neuron0x273f4f0()*-0.187314);
}

double NNfunction_sb_sRsR::synapse0x2754bc0() {
   return (neuron0x273f830()*0.0294727);
}

double NNfunction_sb_sRsR::synapse0x2754c00() {
   return (neuron0x273fb70()*0.044161);
}

double NNfunction_sb_sRsR::synapse0x2754c40() {
   return (neuron0x273feb0()*0.0621862);
}

double NNfunction_sb_sRsR::synapse0x2754c80() {
   return (neuron0x27401f0()*-0.101814);
}

double NNfunction_sb_sRsR::synapse0x2754cc0() {
   return (neuron0x2740530()*-0.209842);
}

double NNfunction_sb_sRsR::synapse0x2754d00() {
   return (neuron0x2740870()*0.0766369);
}

double NNfunction_sb_sRsR::synapse0x2754d40() {
   return (neuron0x2740bb0()*-0.317898);
}

double NNfunction_sb_sRsR::synapse0x2754d80() {
   return (neuron0x2740ef0()*-0.175194);
}

double NNfunction_sb_sRsR::synapse0x2754850() {
   return (neuron0x2741230()*0.117095);
}

double NNfunction_sb_sRsR::synapse0x2754890() {
   return (neuron0x2741790()*0.0358961);
}

double NNfunction_sb_sRsR::synapse0x2754ed0() {
   return (neuron0x2741ad0()*-0.353177);
}

double NNfunction_sb_sRsR::synapse0x2754f10() {
   return (neuron0x2741e10()*0.161509);
}

double NNfunction_sb_sRsR::synapse0x2754f50() {
   return (neuron0x2742150()*-0.098965);
}

double NNfunction_sb_sRsR::synapse0x2754f90() {
   return (neuron0x2742490()*0.034112);
}

double NNfunction_sb_sRsR::synapse0x2754fd0() {
   return (neuron0x27427d0()*-0.0567057);
}

double NNfunction_sb_sRsR::synapse0x2755010() {
   return (neuron0x2742b10()*-0.14142);
}

double NNfunction_sb_sRsR::synapse0x2755390() {
   return (neuron0x273dec0()*0.112486);
}

double NNfunction_sb_sRsR::synapse0x27553d0() {
   return (neuron0x273e170()*-0.616968);
}

double NNfunction_sb_sRsR::synapse0x2755410() {
   return (neuron0x273e4b0()*-0.349297);
}

double NNfunction_sb_sRsR::synapse0x2755450() {
   return (neuron0x273e7f0()*0.595761);
}

double NNfunction_sb_sRsR::synapse0x2755490() {
   return (neuron0x273eb30()*-0.563191);
}

double NNfunction_sb_sRsR::synapse0x27554d0() {
   return (neuron0x273ee70()*-0.556804);
}

double NNfunction_sb_sRsR::synapse0x2755510() {
   return (neuron0x273f1b0()*-0.414351);
}

double NNfunction_sb_sRsR::synapse0x2755550() {
   return (neuron0x273f4f0()*0.56333);
}

double NNfunction_sb_sRsR::synapse0x2755590() {
   return (neuron0x273f830()*-0.267883);
}

double NNfunction_sb_sRsR::synapse0x27555d0() {
   return (neuron0x273fb70()*-0.39724);
}

double NNfunction_sb_sRsR::synapse0x2755610() {
   return (neuron0x273feb0()*0.139756);
}

double NNfunction_sb_sRsR::synapse0x2755650() {
   return (neuron0x27401f0()*-0.253806);
}

double NNfunction_sb_sRsR::synapse0x2755690() {
   return (neuron0x2740530()*-0.202127);
}

double NNfunction_sb_sRsR::synapse0x27556d0() {
   return (neuron0x2740870()*0.301029);
}

double NNfunction_sb_sRsR::synapse0x2755710() {
   return (neuron0x2740bb0()*0.285405);
}

double NNfunction_sb_sRsR::synapse0x2755750() {
   return (neuron0x2740ef0()*-0.131003);
}

double NNfunction_sb_sRsR::synapse0x27551e0() {
   return (neuron0x2741230()*0.625662);
}

double NNfunction_sb_sRsR::synapse0x2755220() {
   return (neuron0x2741790()*0.0965983);
}

double NNfunction_sb_sRsR::synapse0x27558a0() {
   return (neuron0x2741ad0()*0.994054);
}

double NNfunction_sb_sRsR::synapse0x27558e0() {
   return (neuron0x2741e10()*-0.0478664);
}

double NNfunction_sb_sRsR::synapse0x2755920() {
   return (neuron0x2742150()*-0.391708);
}

double NNfunction_sb_sRsR::synapse0x2755960() {
   return (neuron0x2742490()*-0.13448);
}

double NNfunction_sb_sRsR::synapse0x27559a0() {
   return (neuron0x27427d0()*0.140077);
}

double NNfunction_sb_sRsR::synapse0x27559e0() {
   return (neuron0x2742b10()*-0.344573);
}

double NNfunction_sb_sRsR::synapse0x2755d60() {
   return (neuron0x273dec0()*0.0362605);
}

double NNfunction_sb_sRsR::synapse0x2755da0() {
   return (neuron0x273e170()*-0.11925);
}

double NNfunction_sb_sRsR::synapse0x2755de0() {
   return (neuron0x273e4b0()*-0.0554407);
}

double NNfunction_sb_sRsR::synapse0x2755e20() {
   return (neuron0x273e7f0()*0.120186);
}

double NNfunction_sb_sRsR::synapse0x2755e60() {
   return (neuron0x273eb30()*-0.298004);
}

double NNfunction_sb_sRsR::synapse0x2755ea0() {
   return (neuron0x273ee70()*0.279468);
}

double NNfunction_sb_sRsR::synapse0x2755ee0() {
   return (neuron0x273f1b0()*0.000606673);
}

double NNfunction_sb_sRsR::synapse0x2755f20() {
   return (neuron0x273f4f0()*-0.0714376);
}

double NNfunction_sb_sRsR::synapse0x2755f60() {
   return (neuron0x273f830()*-0.084675);
}

double NNfunction_sb_sRsR::synapse0x2755fa0() {
   return (neuron0x273fb70()*0.0354058);
}

double NNfunction_sb_sRsR::synapse0x2755fe0() {
   return (neuron0x273feb0()*-0.00767096);
}

double NNfunction_sb_sRsR::synapse0x2756020() {
   return (neuron0x27401f0()*-0.0104966);
}

double NNfunction_sb_sRsR::synapse0x2756060() {
   return (neuron0x2740530()*0.0540785);
}

double NNfunction_sb_sRsR::synapse0x27560a0() {
   return (neuron0x2740870()*-0.0879243);
}

double NNfunction_sb_sRsR::synapse0x27560e0() {
   return (neuron0x2740bb0()*-0.0353484);
}

double NNfunction_sb_sRsR::synapse0x2756120() {
   return (neuron0x2740ef0()*0.0373678);
}

double NNfunction_sb_sRsR::synapse0x2755bb0() {
   return (neuron0x2741230()*-0.208263);
}

double NNfunction_sb_sRsR::synapse0x2755bf0() {
   return (neuron0x2741790()*0.0719182);
}

double NNfunction_sb_sRsR::synapse0x2756270() {
   return (neuron0x2741ad0()*0.564453);
}

double NNfunction_sb_sRsR::synapse0x27562b0() {
   return (neuron0x2741e10()*0.0574767);
}

double NNfunction_sb_sRsR::synapse0x27562f0() {
   return (neuron0x2742150()*-0.0578367);
}

double NNfunction_sb_sRsR::synapse0x2756330() {
   return (neuron0x2742490()*-0.016051);
}

double NNfunction_sb_sRsR::synapse0x2756370() {
   return (neuron0x27427d0()*0.0156152);
}

double NNfunction_sb_sRsR::synapse0x27563b0() {
   return (neuron0x2742b10()*0.0781854);
}

double NNfunction_sb_sRsR::synapse0x2756730() {
   return (neuron0x273dec0()*-0.404826);
}

double NNfunction_sb_sRsR::synapse0x2756770() {
   return (neuron0x273e170()*0.0039441);
}

double NNfunction_sb_sRsR::synapse0x27567b0() {
   return (neuron0x273e4b0()*-0.0695582);
}

double NNfunction_sb_sRsR::synapse0x27567f0() {
   return (neuron0x273e7f0()*-0.635566);
}

double NNfunction_sb_sRsR::synapse0x2756830() {
   return (neuron0x273eb30()*0.0511066);
}

double NNfunction_sb_sRsR::synapse0x2756870() {
   return (neuron0x273ee70()*-0.0675112);
}

double NNfunction_sb_sRsR::synapse0x27568b0() {
   return (neuron0x273f1b0()*-0.023984);
}

double NNfunction_sb_sRsR::synapse0x27568f0() {
   return (neuron0x273f4f0()*-0.11573);
}

double NNfunction_sb_sRsR::synapse0x2756930() {
   return (neuron0x273f830()*0.33718);
}

double NNfunction_sb_sRsR::synapse0x2756970() {
   return (neuron0x273fb70()*0.242142);
}

double NNfunction_sb_sRsR::synapse0x27569b0() {
   return (neuron0x273feb0()*0.771062);
}

double NNfunction_sb_sRsR::synapse0x27569f0() {
   return (neuron0x27401f0()*0.126686);
}

double NNfunction_sb_sRsR::synapse0x2756a30() {
   return (neuron0x2740530()*0.174158);
}

double NNfunction_sb_sRsR::synapse0x2756a70() {
   return (neuron0x2740870()*0.267669);
}

double NNfunction_sb_sRsR::synapse0x2756ab0() {
   return (neuron0x2740bb0()*-0.14896);
}

double NNfunction_sb_sRsR::synapse0x2756af0() {
   return (neuron0x2740ef0()*-0.125135);
}

double NNfunction_sb_sRsR::synapse0x2756580() {
   return (neuron0x2741230()*0.0326948);
}

double NNfunction_sb_sRsR::synapse0x27565c0() {
   return (neuron0x2741790()*-0.0909768);
}

double NNfunction_sb_sRsR::synapse0x2756c40() {
   return (neuron0x2741ad0()*-0.650188);
}

double NNfunction_sb_sRsR::synapse0x2756c80() {
   return (neuron0x2741e10()*0.0992389);
}

double NNfunction_sb_sRsR::synapse0x2756cc0() {
   return (neuron0x2742150()*0.117391);
}

double NNfunction_sb_sRsR::synapse0x2756d00() {
   return (neuron0x2742490()*0.0951376);
}

double NNfunction_sb_sRsR::synapse0x2756d40() {
   return (neuron0x27427d0()*-0.0257247);
}

double NNfunction_sb_sRsR::synapse0x2756d80() {
   return (neuron0x2742b10()*-0.206291);
}

double NNfunction_sb_sRsR::synapse0x2757100() {
   return (neuron0x273dec0()*-0.00476273);
}

double NNfunction_sb_sRsR::synapse0x2757140() {
   return (neuron0x273e170()*-0.0471761);
}

double NNfunction_sb_sRsR::synapse0x2757180() {
   return (neuron0x273e4b0()*0.862594);
}

double NNfunction_sb_sRsR::synapse0x27571c0() {
   return (neuron0x273e7f0()*0.140992);
}

double NNfunction_sb_sRsR::synapse0x2757200() {
   return (neuron0x273eb30()*-0.311569);
}

double NNfunction_sb_sRsR::synapse0x2757240() {
   return (neuron0x273ee70()*-0.0787345);
}

double NNfunction_sb_sRsR::synapse0x2757280() {
   return (neuron0x273f1b0()*-0.457428);
}

double NNfunction_sb_sRsR::synapse0x27572c0() {
   return (neuron0x273f4f0()*-0.352836);
}

double NNfunction_sb_sRsR::synapse0x2757300() {
   return (neuron0x273f830()*0.208167);
}

double NNfunction_sb_sRsR::synapse0x2757340() {
   return (neuron0x273fb70()*-0.409001);
}

double NNfunction_sb_sRsR::synapse0x2757380() {
   return (neuron0x273feb0()*0.293332);
}

double NNfunction_sb_sRsR::synapse0x27573c0() {
   return (neuron0x27401f0()*0.62326);
}

double NNfunction_sb_sRsR::synapse0x2757400() {
   return (neuron0x2740530()*0.309647);
}

double NNfunction_sb_sRsR::synapse0x2757440() {
   return (neuron0x2740870()*0.33107);
}

double NNfunction_sb_sRsR::synapse0x2757480() {
   return (neuron0x2740bb0()*-0.34185);
}

double NNfunction_sb_sRsR::synapse0x27574c0() {
   return (neuron0x2740ef0()*0.401825);
}

double NNfunction_sb_sRsR::synapse0x2756f50() {
   return (neuron0x2741230()*0.0801372);
}

double NNfunction_sb_sRsR::synapse0x2756f90() {
   return (neuron0x2741790()*0.0156268);
}

double NNfunction_sb_sRsR::synapse0x2757610() {
   return (neuron0x2741ad0()*-0.112197);
}

double NNfunction_sb_sRsR::synapse0x2757650() {
   return (neuron0x2741e10()*-0.673459);
}

double NNfunction_sb_sRsR::synapse0x2757690() {
   return (neuron0x2742150()*-0.0906916);
}

double NNfunction_sb_sRsR::synapse0x27576d0() {
   return (neuron0x2742490()*-0.477665);
}

double NNfunction_sb_sRsR::synapse0x2757710() {
   return (neuron0x27427d0()*0.600984);
}

double NNfunction_sb_sRsR::synapse0x2757750() {
   return (neuron0x2742b10()*0.705152);
}

double NNfunction_sb_sRsR::synapse0x2757ad0() {
   return (neuron0x273dec0()*-0.0759112);
}

double NNfunction_sb_sRsR::synapse0x2757b10() {
   return (neuron0x273e170()*0.284808);
}

double NNfunction_sb_sRsR::synapse0x2757b50() {
   return (neuron0x273e4b0()*-0.174073);
}

double NNfunction_sb_sRsR::synapse0x2757b90() {
   return (neuron0x273e7f0()*-0.0333495);
}

double NNfunction_sb_sRsR::synapse0x2757bd0() {
   return (neuron0x273eb30()*-0.00340031);
}

double NNfunction_sb_sRsR::synapse0x2757c10() {
   return (neuron0x273ee70()*-0.38205);
}

double NNfunction_sb_sRsR::synapse0x2757c50() {
   return (neuron0x273f1b0()*0.237624);
}

double NNfunction_sb_sRsR::synapse0x2757c90() {
   return (neuron0x273f4f0()*-0.268898);
}

double NNfunction_sb_sRsR::synapse0x2757cd0() {
   return (neuron0x273f830()*0.302641);
}

double NNfunction_sb_sRsR::synapse0x2757d10() {
   return (neuron0x273fb70()*-1.04345);
}

double NNfunction_sb_sRsR::synapse0x2757d50() {
   return (neuron0x273feb0()*-0.466746);
}

double NNfunction_sb_sRsR::synapse0x2757d90() {
   return (neuron0x27401f0()*-0.0791113);
}

double NNfunction_sb_sRsR::synapse0x2757dd0() {
   return (neuron0x2740530()*0.0554042);
}

double NNfunction_sb_sRsR::synapse0x2757e10() {
   return (neuron0x2740870()*0.135697);
}

double NNfunction_sb_sRsR::synapse0x2757e50() {
   return (neuron0x2740bb0()*0.0772307);
}

double NNfunction_sb_sRsR::synapse0x2757e90() {
   return (neuron0x2740ef0()*-0.00321162);
}

double NNfunction_sb_sRsR::synapse0x2757920() {
   return (neuron0x2741230()*-0.106211);
}

double NNfunction_sb_sRsR::synapse0x2757960() {
   return (neuron0x2741790()*0.399245);
}

double NNfunction_sb_sRsR::synapse0x2757fe0() {
   return (neuron0x2741ad0()*0.78343);
}

double NNfunction_sb_sRsR::synapse0x2758020() {
   return (neuron0x2741e10()*0.0136162);
}

double NNfunction_sb_sRsR::synapse0x2758060() {
   return (neuron0x2742150()*-0.144793);
}

double NNfunction_sb_sRsR::synapse0x27580a0() {
   return (neuron0x2742490()*-0.275934);
}

double NNfunction_sb_sRsR::synapse0x27580e0() {
   return (neuron0x27427d0()*-0.00324571);
}

double NNfunction_sb_sRsR::synapse0x2758120() {
   return (neuron0x2742b10()*-0.0584747);
}

double NNfunction_sb_sRsR::synapse0x27584a0() {
   return (neuron0x273dec0()*0.0802677);
}

double NNfunction_sb_sRsR::synapse0x27584e0() {
   return (neuron0x273e170()*0.26721);
}

double NNfunction_sb_sRsR::synapse0x2758520() {
   return (neuron0x273e4b0()*-0.565173);
}

double NNfunction_sb_sRsR::synapse0x2758560() {
   return (neuron0x273e7f0()*-0.034747);
}

double NNfunction_sb_sRsR::synapse0x27585a0() {
   return (neuron0x273eb30()*0.0419467);
}

double NNfunction_sb_sRsR::synapse0x27585e0() {
   return (neuron0x273ee70()*-0.283307);
}

double NNfunction_sb_sRsR::synapse0x2758620() {
   return (neuron0x273f1b0()*-0.274798);
}

double NNfunction_sb_sRsR::synapse0x2758660() {
   return (neuron0x273f4f0()*-0.0899349);
}

double NNfunction_sb_sRsR::synapse0x27586a0() {
   return (neuron0x273f830()*-0.191243);
}

double NNfunction_sb_sRsR::synapse0x27586e0() {
   return (neuron0x273fb70()*0.311583);
}

double NNfunction_sb_sRsR::synapse0x2758720() {
   return (neuron0x273feb0()*-0.286238);
}

double NNfunction_sb_sRsR::synapse0x2758760() {
   return (neuron0x27401f0()*0.654061);
}

double NNfunction_sb_sRsR::synapse0x27587a0() {
   return (neuron0x2740530()*0.25209);
}

double NNfunction_sb_sRsR::synapse0x27587e0() {
   return (neuron0x2740870()*0.272099);
}

double NNfunction_sb_sRsR::synapse0x2758820() {
   return (neuron0x2740bb0()*-0.421656);
}

double NNfunction_sb_sRsR::synapse0x2758860() {
   return (neuron0x2740ef0()*0.0969628);
}

double NNfunction_sb_sRsR::synapse0x27582f0() {
   return (neuron0x2741230()*0.231948);
}

double NNfunction_sb_sRsR::synapse0x2758330() {
   return (neuron0x2741790()*0.192277);
}

double NNfunction_sb_sRsR::synapse0x27589b0() {
   return (neuron0x2741ad0()*0.430461);
}

double NNfunction_sb_sRsR::synapse0x27589f0() {
   return (neuron0x2741e10()*0.513126);
}

double NNfunction_sb_sRsR::synapse0x2758a30() {
   return (neuron0x2742150()*-0.102929);
}

double NNfunction_sb_sRsR::synapse0x2758a70() {
   return (neuron0x2742490()*-0.139493);
}

double NNfunction_sb_sRsR::synapse0x2758ab0() {
   return (neuron0x27427d0()*-0.542754);
}

double NNfunction_sb_sRsR::synapse0x2758af0() {
   return (neuron0x2742b10()*-0.291212);
}

double NNfunction_sb_sRsR::synapse0x2758e70() {
   return (neuron0x273dec0()*-0.00221831);
}

double NNfunction_sb_sRsR::synapse0x2758eb0() {
   return (neuron0x273e170()*-0.225058);
}

double NNfunction_sb_sRsR::synapse0x2758ef0() {
   return (neuron0x273e4b0()*0.0865252);
}

double NNfunction_sb_sRsR::synapse0x2758f30() {
   return (neuron0x273e7f0()*-0.181669);
}

double NNfunction_sb_sRsR::synapse0x2758f70() {
   return (neuron0x273eb30()*0.208889);
}

double NNfunction_sb_sRsR::synapse0x2758fb0() {
   return (neuron0x273ee70()*0.113392);
}

double NNfunction_sb_sRsR::synapse0x2758ff0() {
   return (neuron0x273f1b0()*-0.13367);
}

double NNfunction_sb_sRsR::synapse0x2759030() {
   return (neuron0x273f4f0()*0.0698339);
}

double NNfunction_sb_sRsR::synapse0x2759070() {
   return (neuron0x273f830()*-0.0112621);
}

double NNfunction_sb_sRsR::synapse0x27590b0() {
   return (neuron0x273fb70()*0.0253847);
}

double NNfunction_sb_sRsR::synapse0x27590f0() {
   return (neuron0x273feb0()*0.018804);
}

double NNfunction_sb_sRsR::synapse0x2759130() {
   return (neuron0x27401f0()*0.01097);
}

double NNfunction_sb_sRsR::synapse0x2759170() {
   return (neuron0x2740530()*-0.011905);
}

double NNfunction_sb_sRsR::synapse0x27591b0() {
   return (neuron0x2740870()*0.0584417);
}

double NNfunction_sb_sRsR::synapse0x27591f0() {
   return (neuron0x2740bb0()*-0.127444);
}

double NNfunction_sb_sRsR::synapse0x2759230() {
   return (neuron0x2740ef0()*0.388725);
}

double NNfunction_sb_sRsR::synapse0x2758cc0() {
   return (neuron0x2741230()*-0.0591224);
}

double NNfunction_sb_sRsR::synapse0x2758d00() {
   return (neuron0x2741790()*0.0238619);
}

double NNfunction_sb_sRsR::synapse0x2759380() {
   return (neuron0x2741ad0()*-0.50286);
}

double NNfunction_sb_sRsR::synapse0x27593c0() {
   return (neuron0x2741e10()*0.00242408);
}

double NNfunction_sb_sRsR::synapse0x2759400() {
   return (neuron0x2742150()*0.0621128);
}

double NNfunction_sb_sRsR::synapse0x2759440() {
   return (neuron0x2742490()*-0.0221555);
}

double NNfunction_sb_sRsR::synapse0x2759480() {
   return (neuron0x27427d0()*-0.0281491);
}

double NNfunction_sb_sRsR::synapse0x27594c0() {
   return (neuron0x2742b10()*-0.0743467);
}

double NNfunction_sb_sRsR::synapse0x2759840() {
   return (neuron0x273dec0()*0.0598059);
}

double NNfunction_sb_sRsR::synapse0x274de10() {
   return (neuron0x273e170()*0.325575);
}

double NNfunction_sb_sRsR::synapse0x274de50() {
   return (neuron0x273e4b0()*-0.489166);
}

double NNfunction_sb_sRsR::synapse0x274de90() {
   return (neuron0x273e7f0()*0.155134);
}

double NNfunction_sb_sRsR::synapse0x274e0e0() {
   return (neuron0x273eb30()*0.113309);
}

double NNfunction_sb_sRsR::synapse0x274e120() {
   return (neuron0x273ee70()*0.237919);
}

double NNfunction_sb_sRsR::synapse0x274e160() {
   return (neuron0x273f1b0()*-1.08213);
}

double NNfunction_sb_sRsR::synapse0x274e3b0() {
   return (neuron0x273f4f0()*-0.114548);
}

double NNfunction_sb_sRsR::synapse0x274e3f0() {
   return (neuron0x273f830()*-0.217755);
}

double NNfunction_sb_sRsR::synapse0x274e640() {
   return (neuron0x273fb70()*0.109061);
}

double NNfunction_sb_sRsR::synapse0x274e680() {
   return (neuron0x273feb0()*-0.0426572);
}

double NNfunction_sb_sRsR::synapse0x274e6c0() {
   return (neuron0x27401f0()*0.18276);
}

double NNfunction_sb_sRsR::synapse0x274e910() {
   return (neuron0x2740530()*0.129279);
}

double NNfunction_sb_sRsR::synapse0x274e950() {
   return (neuron0x2740870()*0.161398);
}

double NNfunction_sb_sRsR::synapse0x274eba0() {
   return (neuron0x2740bb0()*-0.136193);
}

double NNfunction_sb_sRsR::synapse0x274ebe0() {
   return (neuron0x2740ef0()*0.222936);
}

double NNfunction_sb_sRsR::synapse0x2759690() {
   return (neuron0x2741230()*-0.0107103);
}

double NNfunction_sb_sRsR::synapse0x27596d0() {
   return (neuron0x2741790()*0.468299);
}

double NNfunction_sb_sRsR::synapse0x274ed30() {
   return (neuron0x2741ad0()*0.816564);
}

double NNfunction_sb_sRsR::synapse0x274f240() {
   return (neuron0x2741e10()*-0.102676);
}

double NNfunction_sb_sRsR::synapse0x274f280() {
   return (neuron0x2742150()*-0.162428);
}

double NNfunction_sb_sRsR::synapse0x274f2c0() {
   return (neuron0x2742490()*-0.189334);
}

double NNfunction_sb_sRsR::synapse0x274f510() {
   return (neuron0x27427d0()*-0.260377);
}

double NNfunction_sb_sRsR::synapse0x274f550() {
   return (neuron0x2742b10()*0.109929);
}

double NNfunction_sb_sRsR::synapse0x274ee00() {
   return (neuron0x273dec0()*-0.0269042);
}

double NNfunction_sb_sRsR::synapse0x274ee40() {
   return (neuron0x273e170()*0.0188933);
}

double NNfunction_sb_sRsR::synapse0x274ee80() {
   return (neuron0x273e4b0()*-0.0163177);
}

double NNfunction_sb_sRsR::synapse0x274eec0() {
   return (neuron0x273e7f0()*-0.678128);
}

double NNfunction_sb_sRsR::synapse0x274f840() {
   return (neuron0x273eb30()*-0.00672916);
}

double NNfunction_sb_sRsR::synapse0x275bb90() {
   return (neuron0x273ee70()*-0.0139904);
}

double NNfunction_sb_sRsR::synapse0x275bbd0() {
   return (neuron0x273f1b0()*-0.0323224);
}

double NNfunction_sb_sRsR::synapse0x275bc10() {
   return (neuron0x273f4f0()*0.0252373);
}

double NNfunction_sb_sRsR::synapse0x275bc50() {
   return (neuron0x273f830()*-0.0324382);
}

double NNfunction_sb_sRsR::synapse0x275bc90() {
   return (neuron0x273fb70()*0.00678597);
}

double NNfunction_sb_sRsR::synapse0x275bcd0() {
   return (neuron0x273feb0()*-0.0693045);
}

double NNfunction_sb_sRsR::synapse0x275bd10() {
   return (neuron0x27401f0()*0.0410307);
}

double NNfunction_sb_sRsR::synapse0x275bd50() {
   return (neuron0x2740530()*0.00258801);
}

double NNfunction_sb_sRsR::synapse0x275bd90() {
   return (neuron0x2740870()*0.0473663);
}

double NNfunction_sb_sRsR::synapse0x275bdd0() {
   return (neuron0x2740bb0()*-0.0126373);
}

double NNfunction_sb_sRsR::synapse0x275be10() {
   return (neuron0x2740ef0()*0.00516987);
}

double NNfunction_sb_sRsR::synapse0x274f720() {
   return (neuron0x2741230()*0.0195982);
}

double NNfunction_sb_sRsR::synapse0x274f760() {
   return (neuron0x2741790()*-0.0236813);
}

double NNfunction_sb_sRsR::synapse0x275bf60() {
   return (neuron0x2741ad0()*3.10198);
}

double NNfunction_sb_sRsR::synapse0x275bfa0() {
   return (neuron0x2741e10()*-0.0170719);
}

double NNfunction_sb_sRsR::synapse0x275bfe0() {
   return (neuron0x2742150()*0.0194301);
}

double NNfunction_sb_sRsR::synapse0x275c020() {
   return (neuron0x2742490()*-0.0235223);
}

double NNfunction_sb_sRsR::synapse0x275c060() {
   return (neuron0x27427d0()*0.000203892);
}

double NNfunction_sb_sRsR::synapse0x275c0a0() {
   return (neuron0x2742b10()*-0.0432308);
}

double NNfunction_sb_sRsR::synapse0x275c420() {
   return (neuron0x273dec0()*-0.0786882);
}

double NNfunction_sb_sRsR::synapse0x275c460() {
   return (neuron0x273e170()*-0.106867);
}

double NNfunction_sb_sRsR::synapse0x275c4a0() {
   return (neuron0x273e4b0()*0.0210947);
}

double NNfunction_sb_sRsR::synapse0x275c4e0() {
   return (neuron0x273e7f0()*-0.22788);
}

double NNfunction_sb_sRsR::synapse0x275c520() {
   return (neuron0x273eb30()*-0.121393);
}

double NNfunction_sb_sRsR::synapse0x275c560() {
   return (neuron0x273ee70()*-0.170283);
}

double NNfunction_sb_sRsR::synapse0x275c5a0() {
   return (neuron0x273f1b0()*-0.201298);
}

double NNfunction_sb_sRsR::synapse0x275c5e0() {
   return (neuron0x273f4f0()*0.0433901);
}

double NNfunction_sb_sRsR::synapse0x275c620() {
   return (neuron0x273f830()*-0.117859);
}

double NNfunction_sb_sRsR::synapse0x275c660() {
   return (neuron0x273fb70()*-0.0240374);
}

double NNfunction_sb_sRsR::synapse0x275c6a0() {
   return (neuron0x273feb0()*-0.00228072);
}

double NNfunction_sb_sRsR::synapse0x275c6e0() {
   return (neuron0x27401f0()*-0.0320684);
}

double NNfunction_sb_sRsR::synapse0x275c720() {
   return (neuron0x2740530()*0.0545674);
}

double NNfunction_sb_sRsR::synapse0x275c760() {
   return (neuron0x2740870()*-0.0136071);
}

double NNfunction_sb_sRsR::synapse0x275c7a0() {
   return (neuron0x2740bb0()*-0.431871);
}

double NNfunction_sb_sRsR::synapse0x275c7e0() {
   return (neuron0x2740ef0()*-0.144611);
}

double NNfunction_sb_sRsR::synapse0x275c270() {
   return (neuron0x2741230()*0.123231);
}

double NNfunction_sb_sRsR::synapse0x275c2b0() {
   return (neuron0x2741790()*-0.202669);
}

double NNfunction_sb_sRsR::synapse0x275c930() {
   return (neuron0x2741ad0()*0.700783);
}

double NNfunction_sb_sRsR::synapse0x275c970() {
   return (neuron0x2741e10()*-0.0708416);
}

double NNfunction_sb_sRsR::synapse0x275c9b0() {
   return (neuron0x2742150()*0.259427);
}

double NNfunction_sb_sRsR::synapse0x275c9f0() {
   return (neuron0x2742490()*-0.122262);
}

double NNfunction_sb_sRsR::synapse0x275ca30() {
   return (neuron0x27427d0()*-0.0243175);
}

double NNfunction_sb_sRsR::synapse0x275ca70() {
   return (neuron0x2742b10()*0.0894443);
}

double NNfunction_sb_sRsR::synapse0x275cdf0() {
   return (neuron0x273dec0()*-0.0332168);
}

double NNfunction_sb_sRsR::synapse0x275ce30() {
   return (neuron0x273e170()*0.0889127);
}

double NNfunction_sb_sRsR::synapse0x275ce70() {
   return (neuron0x273e4b0()*-0.273633);
}

double NNfunction_sb_sRsR::synapse0x275ceb0() {
   return (neuron0x273e7f0()*0.113614);
}

double NNfunction_sb_sRsR::synapse0x275cef0() {
   return (neuron0x273eb30()*0.0272095);
}

double NNfunction_sb_sRsR::synapse0x275cf30() {
   return (neuron0x273ee70()*-0.00761032);
}

double NNfunction_sb_sRsR::synapse0x275cf70() {
   return (neuron0x273f1b0()*0.00720868);
}

double NNfunction_sb_sRsR::synapse0x275cfb0() {
   return (neuron0x273f4f0()*-0.064709);
}

double NNfunction_sb_sRsR::synapse0x275cff0() {
   return (neuron0x273f830()*0.227615);
}

double NNfunction_sb_sRsR::synapse0x275d030() {
   return (neuron0x273fb70()*-0.054036);
}

double NNfunction_sb_sRsR::synapse0x275d070() {
   return (neuron0x273feb0()*0.129601);
}

double NNfunction_sb_sRsR::synapse0x275d0b0() {
   return (neuron0x27401f0()*-0.531653);
}

double NNfunction_sb_sRsR::synapse0x275d0f0() {
   return (neuron0x2740530()*-0.761102);
}

double NNfunction_sb_sRsR::synapse0x275d130() {
   return (neuron0x2740870()*-0.256373);
}

double NNfunction_sb_sRsR::synapse0x275d170() {
   return (neuron0x2740bb0()*-0.257788);
}

double NNfunction_sb_sRsR::synapse0x275d1b0() {
   return (neuron0x2740ef0()*-0.152882);
}

double NNfunction_sb_sRsR::synapse0x275cc40() {
   return (neuron0x2741230()*-0.129123);
}

double NNfunction_sb_sRsR::synapse0x275cc80() {
   return (neuron0x2741790()*-0.0421231);
}

double NNfunction_sb_sRsR::synapse0x275d300() {
   return (neuron0x2741ad0()*0.676655);
}

double NNfunction_sb_sRsR::synapse0x275d340() {
   return (neuron0x2741e10()*-0.522359);
}

double NNfunction_sb_sRsR::synapse0x275d380() {
   return (neuron0x2742150()*-0.102345);
}

double NNfunction_sb_sRsR::synapse0x275d3c0() {
   return (neuron0x2742490()*0.0607007);
}

double NNfunction_sb_sRsR::synapse0x275d400() {
   return (neuron0x27427d0()*-0.176427);
}

double NNfunction_sb_sRsR::synapse0x275d440() {
   return (neuron0x2742b10()*-0.268036);
}

double NNfunction_sb_sRsR::synapse0x275d7c0() {
   return (neuron0x273dec0()*-0.371366);
}

double NNfunction_sb_sRsR::synapse0x275d800() {
   return (neuron0x273e170()*0.044581);
}

double NNfunction_sb_sRsR::synapse0x275d840() {
   return (neuron0x273e4b0()*0.173192);
}

double NNfunction_sb_sRsR::synapse0x275d880() {
   return (neuron0x273e7f0()*-0.101484);
}

double NNfunction_sb_sRsR::synapse0x275d8c0() {
   return (neuron0x273eb30()*0.184285);
}

double NNfunction_sb_sRsR::synapse0x275d900() {
   return (neuron0x273ee70()*0.166006);
}

double NNfunction_sb_sRsR::synapse0x275d940() {
   return (neuron0x273f1b0()*-0.00432958);
}

double NNfunction_sb_sRsR::synapse0x275d980() {
   return (neuron0x273f4f0()*0.0180048);
}

double NNfunction_sb_sRsR::synapse0x275d9c0() {
   return (neuron0x273f830()*0.112723);
}

double NNfunction_sb_sRsR::synapse0x275da00() {
   return (neuron0x273fb70()*0.299572);
}

double NNfunction_sb_sRsR::synapse0x275da40() {
   return (neuron0x273feb0()*-0.380525);
}

double NNfunction_sb_sRsR::synapse0x275da80() {
   return (neuron0x27401f0()*0.450849);
}

double NNfunction_sb_sRsR::synapse0x275dac0() {
   return (neuron0x2740530()*-0.167762);
}

double NNfunction_sb_sRsR::synapse0x275db00() {
   return (neuron0x2740870()*0.0423435);
}

double NNfunction_sb_sRsR::synapse0x275db40() {
   return (neuron0x2740bb0()*0.199159);
}

double NNfunction_sb_sRsR::synapse0x275db80() {
   return (neuron0x2740ef0()*-0.0588332);
}

double NNfunction_sb_sRsR::synapse0x275d610() {
   return (neuron0x2741230()*-0.0921505);
}

double NNfunction_sb_sRsR::synapse0x275d650() {
   return (neuron0x2741790()*0.416037);
}

double NNfunction_sb_sRsR::synapse0x275dcd0() {
   return (neuron0x2741ad0()*-0.727371);
}

double NNfunction_sb_sRsR::synapse0x275dd10() {
   return (neuron0x2741e10()*-0.0638287);
}

double NNfunction_sb_sRsR::synapse0x275dd50() {
   return (neuron0x2742150()*-0.155616);
}

double NNfunction_sb_sRsR::synapse0x275dd90() {
   return (neuron0x2742490()*0.0477675);
}

double NNfunction_sb_sRsR::synapse0x275ddd0() {
   return (neuron0x27427d0()*-0.330683);
}

double NNfunction_sb_sRsR::synapse0x275de10() {
   return (neuron0x2742b10()*-0.255369);
}

double NNfunction_sb_sRsR::synapse0x275e190() {
   return (neuron0x273dec0()*0.160511);
}

double NNfunction_sb_sRsR::synapse0x275e1d0() {
   return (neuron0x273e170()*-0.0244936);
}

double NNfunction_sb_sRsR::synapse0x275e210() {
   return (neuron0x273e4b0()*-0.0103088);
}

double NNfunction_sb_sRsR::synapse0x275e250() {
   return (neuron0x273e7f0()*-0.0834795);
}

double NNfunction_sb_sRsR::synapse0x275e290() {
   return (neuron0x273eb30()*-0.129823);
}

double NNfunction_sb_sRsR::synapse0x275e2d0() {
   return (neuron0x273ee70()*-0.035922);
}

double NNfunction_sb_sRsR::synapse0x275e310() {
   return (neuron0x273f1b0()*-0.151213);
}

double NNfunction_sb_sRsR::synapse0x275e350() {
   return (neuron0x273f4f0()*0.0869388);
}

double NNfunction_sb_sRsR::synapse0x275e390() {
   return (neuron0x273f830()*0.109855);
}

double NNfunction_sb_sRsR::synapse0x275e3d0() {
   return (neuron0x273fb70()*0.126636);
}

double NNfunction_sb_sRsR::synapse0x275e410() {
   return (neuron0x273feb0()*0.0291941);
}

double NNfunction_sb_sRsR::synapse0x275e450() {
   return (neuron0x27401f0()*0.0652725);
}

double NNfunction_sb_sRsR::synapse0x275e490() {
   return (neuron0x2740530()*-0.0819587);
}

double NNfunction_sb_sRsR::synapse0x275e4d0() {
   return (neuron0x2740870()*-0.513776);
}

double NNfunction_sb_sRsR::synapse0x275e510() {
   return (neuron0x2740bb0()*-0.0184872);
}

double NNfunction_sb_sRsR::synapse0x275e550() {
   return (neuron0x2740ef0()*-0.0915196);
}

double NNfunction_sb_sRsR::synapse0x275dfe0() {
   return (neuron0x2741230()*-0.245874);
}

double NNfunction_sb_sRsR::synapse0x275e020() {
   return (neuron0x2741790()*-0.268754);
}

double NNfunction_sb_sRsR::synapse0x275e6a0() {
   return (neuron0x2741ad0()*-0.0406478);
}

double NNfunction_sb_sRsR::synapse0x275e6e0() {
   return (neuron0x2741e10()*-0.104513);
}

double NNfunction_sb_sRsR::synapse0x275e720() {
   return (neuron0x2742150()*0.0452476);
}

double NNfunction_sb_sRsR::synapse0x275e760() {
   return (neuron0x2742490()*0.0454897);
}

double NNfunction_sb_sRsR::synapse0x275e7a0() {
   return (neuron0x27427d0()*0.0254559);
}

double NNfunction_sb_sRsR::synapse0x275e7e0() {
   return (neuron0x2742b10()*0.0570278);
}

double NNfunction_sb_sRsR::synapse0x275eb60() {
   return (neuron0x273dec0()*-0.0881069);
}

double NNfunction_sb_sRsR::synapse0x275eba0() {
   return (neuron0x273e170()*-0.031913);
}

double NNfunction_sb_sRsR::synapse0x275ebe0() {
   return (neuron0x273e4b0()*-0.0121819);
}

double NNfunction_sb_sRsR::synapse0x275ec20() {
   return (neuron0x273e7f0()*-0.0753995);
}

double NNfunction_sb_sRsR::synapse0x275ec60() {
   return (neuron0x273eb30()*0.0142636);
}

double NNfunction_sb_sRsR::synapse0x275eca0() {
   return (neuron0x273ee70()*0.0587631);
}

double NNfunction_sb_sRsR::synapse0x275ece0() {
   return (neuron0x273f1b0()*-0.0362654);
}

double NNfunction_sb_sRsR::synapse0x275ed20() {
   return (neuron0x273f4f0()*-0.0635959);
}

double NNfunction_sb_sRsR::synapse0x275ed60() {
   return (neuron0x273f830()*-0.16502);
}

double NNfunction_sb_sRsR::synapse0x275eda0() {
   return (neuron0x273fb70()*0.337773);
}

double NNfunction_sb_sRsR::synapse0x275ede0() {
   return (neuron0x273feb0()*-0.225434);
}

double NNfunction_sb_sRsR::synapse0x275ee20() {
   return (neuron0x27401f0()*0.0244273);
}

double NNfunction_sb_sRsR::synapse0x275ee60() {
   return (neuron0x2740530()*0.00514245);
}

double NNfunction_sb_sRsR::synapse0x275eea0() {
   return (neuron0x2740870()*0.0330411);
}

double NNfunction_sb_sRsR::synapse0x275eee0() {
   return (neuron0x2740bb0()*0.0343004);
}

double NNfunction_sb_sRsR::synapse0x275ef20() {
   return (neuron0x2740ef0()*0.00919826);
}

double NNfunction_sb_sRsR::synapse0x275e9b0() {
   return (neuron0x2741230()*-0.0424201);
}

double NNfunction_sb_sRsR::synapse0x275e9f0() {
   return (neuron0x2741790()*0.136946);
}

double NNfunction_sb_sRsR::synapse0x275f070() {
   return (neuron0x2741ad0()*-2.06709);
}

double NNfunction_sb_sRsR::synapse0x275f0b0() {
   return (neuron0x2741e10()*0.0122894);
}

double NNfunction_sb_sRsR::synapse0x275f0f0() {
   return (neuron0x2742150()*-0.0401087);
}

double NNfunction_sb_sRsR::synapse0x275f130() {
   return (neuron0x2742490()*0.0153008);
}

double NNfunction_sb_sRsR::synapse0x275f170() {
   return (neuron0x27427d0()*0.00586667);
}

double NNfunction_sb_sRsR::synapse0x275f1b0() {
   return (neuron0x2742b10()*-0.0366093);
}

double NNfunction_sb_sRsR::synapse0x275f530() {
   return (neuron0x273dec0()*-0.344529);
}

double NNfunction_sb_sRsR::synapse0x275f570() {
   return (neuron0x273e170()*-0.166526);
}

double NNfunction_sb_sRsR::synapse0x275f5b0() {
   return (neuron0x273e4b0()*-0.100672);
}

double NNfunction_sb_sRsR::synapse0x275f5f0() {
   return (neuron0x273e7f0()*-0.230227);
}

double NNfunction_sb_sRsR::synapse0x275f630() {
   return (neuron0x273eb30()*0.00466215);
}

double NNfunction_sb_sRsR::synapse0x275f670() {
   return (neuron0x273ee70()*-0.0431108);
}

double NNfunction_sb_sRsR::synapse0x275f6b0() {
   return (neuron0x273f1b0()*-0.174452);
}

double NNfunction_sb_sRsR::synapse0x275f6f0() {
   return (neuron0x273f4f0()*-0.0923811);
}

double NNfunction_sb_sRsR::synapse0x275f730() {
   return (neuron0x273f830()*-1.10292);
}

double NNfunction_sb_sRsR::synapse0x275f770() {
   return (neuron0x273fb70()*-0.360525);
}

double NNfunction_sb_sRsR::synapse0x275f7b0() {
   return (neuron0x273feb0()*0.184319);
}

double NNfunction_sb_sRsR::synapse0x275f7f0() {
   return (neuron0x27401f0()*-0.140779);
}

double NNfunction_sb_sRsR::synapse0x275f830() {
   return (neuron0x2740530()*0.0790917);
}

double NNfunction_sb_sRsR::synapse0x275f870() {
   return (neuron0x2740870()*-0.0998666);
}

double NNfunction_sb_sRsR::synapse0x275f8b0() {
   return (neuron0x2740bb0()*-0.251237);
}

double NNfunction_sb_sRsR::synapse0x275f8f0() {
   return (neuron0x2740ef0()*0.109546);
}

double NNfunction_sb_sRsR::synapse0x275f380() {
   return (neuron0x2741230()*-0.0259256);
}

double NNfunction_sb_sRsR::synapse0x275f3c0() {
   return (neuron0x2741790()*-0.299539);
}

double NNfunction_sb_sRsR::synapse0x275fa40() {
   return (neuron0x2741ad0()*0.180424);
}

double NNfunction_sb_sRsR::synapse0x275fa80() {
   return (neuron0x2741e10()*-0.332815);
}

double NNfunction_sb_sRsR::synapse0x275fac0() {
   return (neuron0x2742150()*0.391878);
}

double NNfunction_sb_sRsR::synapse0x275fb00() {
   return (neuron0x2742490()*-0.323794);
}

double NNfunction_sb_sRsR::synapse0x275fb40() {
   return (neuron0x27427d0()*-0.0421844);
}

double NNfunction_sb_sRsR::synapse0x275fb80() {
   return (neuron0x2742b10()*0.00945314);
}

double NNfunction_sb_sRsR::synapse0x275ff00() {
   return (neuron0x273dec0()*0.0982956);
}

double NNfunction_sb_sRsR::synapse0x275ff40() {
   return (neuron0x273e170()*-0.262678);
}

double NNfunction_sb_sRsR::synapse0x275ff80() {
   return (neuron0x273e4b0()*0.304942);
}

double NNfunction_sb_sRsR::synapse0x275ffc0() {
   return (neuron0x273e7f0()*-0.92534);
}

double NNfunction_sb_sRsR::synapse0x2760000() {
   return (neuron0x273eb30()*0.421025);
}

double NNfunction_sb_sRsR::synapse0x2760040() {
   return (neuron0x273ee70()*0.820191);
}

double NNfunction_sb_sRsR::synapse0x2760080() {
   return (neuron0x273f1b0()*-0.157118);
}

double NNfunction_sb_sRsR::synapse0x27600c0() {
   return (neuron0x273f4f0()*0.295626);
}

double NNfunction_sb_sRsR::synapse0x2760100() {
   return (neuron0x273f830()*-0.234414);
}

double NNfunction_sb_sRsR::synapse0x2760140() {
   return (neuron0x273fb70()*-0.0825659);
}

double NNfunction_sb_sRsR::synapse0x2760180() {
   return (neuron0x273feb0()*-0.629508);
}

double NNfunction_sb_sRsR::synapse0x27601c0() {
   return (neuron0x27401f0()*-0.449379);
}

double NNfunction_sb_sRsR::synapse0x2760200() {
   return (neuron0x2740530()*-0.191023);
}

double NNfunction_sb_sRsR::synapse0x2760240() {
   return (neuron0x2740870()*0.0779259);
}

double NNfunction_sb_sRsR::synapse0x2760280() {
   return (neuron0x2740bb0()*0.121819);
}

double NNfunction_sb_sRsR::synapse0x27602c0() {
   return (neuron0x2740ef0()*-0.187718);
}

double NNfunction_sb_sRsR::synapse0x275fd50() {
   return (neuron0x2741230()*-0.00793272);
}

double NNfunction_sb_sRsR::synapse0x275fd90() {
   return (neuron0x2741790()*-0.298011);
}

double NNfunction_sb_sRsR::synapse0x2760410() {
   return (neuron0x2741ad0()*2.09959);
}

double NNfunction_sb_sRsR::synapse0x2760450() {
   return (neuron0x2741e10()*-0.0266917);
}

double NNfunction_sb_sRsR::synapse0x2760490() {
   return (neuron0x2742150()*-0.23631);
}

double NNfunction_sb_sRsR::synapse0x27604d0() {
   return (neuron0x2742490()*0.567043);
}

double NNfunction_sb_sRsR::synapse0x2760510() {
   return (neuron0x27427d0()*-0.200146);
}

double NNfunction_sb_sRsR::synapse0x2760550() {
   return (neuron0x2742b10()*-0.125004);
}

double NNfunction_sb_sRsR::synapse0x2749000() {
   return (neuron0x273dec0()*-0.0615684);
}

double NNfunction_sb_sRsR::synapse0x2749040() {
   return (neuron0x273e170()*0.275673);
}

double NNfunction_sb_sRsR::synapse0x2749080() {
   return (neuron0x273e4b0()*-0.347466);
}

double NNfunction_sb_sRsR::synapse0x27490c0() {
   return (neuron0x273e7f0()*0.109313);
}

double NNfunction_sb_sRsR::synapse0x2749100() {
   return (neuron0x273eb30()*-1.33548);
}

double NNfunction_sb_sRsR::synapse0x2749140() {
   return (neuron0x273ee70()*-1.03598);
}

double NNfunction_sb_sRsR::synapse0x2749180() {
   return (neuron0x273f1b0()*0.442988);
}

double NNfunction_sb_sRsR::synapse0x27491c0() {
   return (neuron0x273f4f0()*0.312395);
}

double NNfunction_sb_sRsR::synapse0x2760ce0() {
   return (neuron0x273f830()*0.276958);
}

double NNfunction_sb_sRsR::synapse0x2760d20() {
   return (neuron0x273fb70()*-0.282611);
}

double NNfunction_sb_sRsR::synapse0x2760d60() {
   return (neuron0x273feb0()*-0.419888);
}

double NNfunction_sb_sRsR::synapse0x2760da0() {
   return (neuron0x27401f0()*0.611792);
}

double NNfunction_sb_sRsR::synapse0x2760de0() {
   return (neuron0x2740530()*0.194181);
}

double NNfunction_sb_sRsR::synapse0x2760e20() {
   return (neuron0x2740870()*0.295297);
}

double NNfunction_sb_sRsR::synapse0x2760e60() {
   return (neuron0x2740bb0()*0.0181926);
}

double NNfunction_sb_sRsR::synapse0x2760ea0() {
   return (neuron0x2740ef0()*0.625672);
}

double NNfunction_sb_sRsR::synapse0x2760720() {
   return (neuron0x2741230()*-0.107929);
}

double NNfunction_sb_sRsR::synapse0x2760760() {
   return (neuron0x2741790()*0.123096);
}

double NNfunction_sb_sRsR::synapse0x2760ff0() {
   return (neuron0x2741ad0()*0.240602);
}

double NNfunction_sb_sRsR::synapse0x2761030() {
   return (neuron0x2741e10()*-0.342842);
}

double NNfunction_sb_sRsR::synapse0x2761070() {
   return (neuron0x2742150()*0.306361);
}

double NNfunction_sb_sRsR::synapse0x27610b0() {
   return (neuron0x2742490()*-0.591496);
}

double NNfunction_sb_sRsR::synapse0x27610f0() {
   return (neuron0x27427d0()*-0.0435426);
}

double NNfunction_sb_sRsR::synapse0x2761130() {
   return (neuron0x2742b10()*-0.202382);
}

double NNfunction_sb_sRsR::synapse0x27614b0() {
   return (neuron0x273dec0()*0.00363424);
}

double NNfunction_sb_sRsR::synapse0x27614f0() {
   return (neuron0x273e170()*0.017124);
}

double NNfunction_sb_sRsR::synapse0x2761530() {
   return (neuron0x273e4b0()*-0.0265748);
}

double NNfunction_sb_sRsR::synapse0x2761570() {
   return (neuron0x273e7f0()*-0.355158);
}

double NNfunction_sb_sRsR::synapse0x27615b0() {
   return (neuron0x273eb30()*-0.00440807);
}

double NNfunction_sb_sRsR::synapse0x27615f0() {
   return (neuron0x273ee70()*0.0123741);
}

double NNfunction_sb_sRsR::synapse0x2761630() {
   return (neuron0x273f1b0()*-0.0070154);
}

double NNfunction_sb_sRsR::synapse0x2761670() {
   return (neuron0x273f4f0()*0.0199494);
}

double NNfunction_sb_sRsR::synapse0x27616b0() {
   return (neuron0x273f830()*0.0187407);
}

double NNfunction_sb_sRsR::synapse0x27616f0() {
   return (neuron0x273fb70()*-0.0144306);
}

double NNfunction_sb_sRsR::synapse0x2761730() {
   return (neuron0x273feb0()*0.0515921);
}

double NNfunction_sb_sRsR::synapse0x2761770() {
   return (neuron0x27401f0()*-0.016535);
}

double NNfunction_sb_sRsR::synapse0x27617b0() {
   return (neuron0x2740530()*-0.0121881);
}

double NNfunction_sb_sRsR::synapse0x27617f0() {
   return (neuron0x2740870()*-0.0116423);
}

double NNfunction_sb_sRsR::synapse0x2761830() {
   return (neuron0x2740bb0()*0.0155646);
}

double NNfunction_sb_sRsR::synapse0x2761870() {
   return (neuron0x2740ef0()*-0.0096159);
}

double NNfunction_sb_sRsR::synapse0x2761300() {
   return (neuron0x2741230()*0.00212037);
}

double NNfunction_sb_sRsR::synapse0x2761340() {
   return (neuron0x2741790()*0.0197974);
}

double NNfunction_sb_sRsR::synapse0x27619c0() {
   return (neuron0x2741ad0()*-3.36649);
}

double NNfunction_sb_sRsR::synapse0x2761a00() {
   return (neuron0x2741e10()*0.00102285);
}

double NNfunction_sb_sRsR::synapse0x2761a40() {
   return (neuron0x2742150()*0.00720842);
}

double NNfunction_sb_sRsR::synapse0x2761a80() {
   return (neuron0x2742490()*-0.0175125);
}

double NNfunction_sb_sRsR::synapse0x2761ac0() {
   return (neuron0x27427d0()*-0.0145385);
}

double NNfunction_sb_sRsR::synapse0x2761b00() {
   return (neuron0x2742b10()*0.0137527);
}

double NNfunction_sb_sRsR::synapse0x2761e80() {
   return (neuron0x273dec0()*-0.255422);
}

double NNfunction_sb_sRsR::synapse0x2761ec0() {
   return (neuron0x273e170()*-0.239105);
}

double NNfunction_sb_sRsR::synapse0x2761f00() {
   return (neuron0x273e4b0()*0.284336);
}

double NNfunction_sb_sRsR::synapse0x2761f40() {
   return (neuron0x273e7f0()*-0.291419);
}

double NNfunction_sb_sRsR::synapse0x2761f80() {
   return (neuron0x273eb30()*0.203506);
}

double NNfunction_sb_sRsR::synapse0x2761fc0() {
   return (neuron0x273ee70()*0.16096);
}

double NNfunction_sb_sRsR::synapse0x2762000() {
   return (neuron0x273f1b0()*-0.256856);
}

double NNfunction_sb_sRsR::synapse0x2762040() {
   return (neuron0x273f4f0()*0.175406);
}

double NNfunction_sb_sRsR::synapse0x2762080() {
   return (neuron0x273f830()*0.468883);
}

double NNfunction_sb_sRsR::synapse0x27620c0() {
   return (neuron0x273fb70()*0.175744);
}

double NNfunction_sb_sRsR::synapse0x2762100() {
   return (neuron0x273feb0()*0.347977);
}

double NNfunction_sb_sRsR::synapse0x2762140() {
   return (neuron0x27401f0()*0.536548);
}

double NNfunction_sb_sRsR::synapse0x2762180() {
   return (neuron0x2740530()*-0.374929);
}

double NNfunction_sb_sRsR::synapse0x27621c0() {
   return (neuron0x2740870()*-0.149725);
}

double NNfunction_sb_sRsR::synapse0x2762200() {
   return (neuron0x2740bb0()*0.0636195);
}

double NNfunction_sb_sRsR::synapse0x2762240() {
   return (neuron0x2740ef0()*0.139303);
}

double NNfunction_sb_sRsR::synapse0x2761cd0() {
   return (neuron0x2741230()*0.0493005);
}

double NNfunction_sb_sRsR::synapse0x2761d10() {
   return (neuron0x2741790()*0.499513);
}

double NNfunction_sb_sRsR::synapse0x2752840() {
   return (neuron0x2741ad0()*-0.259099);
}

double NNfunction_sb_sRsR::synapse0x2752880() {
   return (neuron0x2741e10()*-0.298248);
}

double NNfunction_sb_sRsR::synapse0x27528c0() {
   return (neuron0x2742150()*0.0635208);
}

double NNfunction_sb_sRsR::synapse0x2752900() {
   return (neuron0x2742490()*-0.216556);
}

double NNfunction_sb_sRsR::synapse0x2752940() {
   return (neuron0x27427d0()*0.238547);
}

double NNfunction_sb_sRsR::synapse0x2752980() {
   return (neuron0x2742b10()*-0.0873517);
}

double NNfunction_sb_sRsR::synapse0x2752d00() {
   return (neuron0x273dec0()*0.207508);
}

double NNfunction_sb_sRsR::synapse0x2752d40() {
   return (neuron0x273e170()*-0.236449);
}

double NNfunction_sb_sRsR::synapse0x2752d80() {
   return (neuron0x273e4b0()*-0.0161178);
}

double NNfunction_sb_sRsR::synapse0x2752dc0() {
   return (neuron0x273e7f0()*-0.0645438);
}

double NNfunction_sb_sRsR::synapse0x2752e00() {
   return (neuron0x273eb30()*0.136033);
}

double NNfunction_sb_sRsR::synapse0x2752e40() {
   return (neuron0x273ee70()*-0.508594);
}

double NNfunction_sb_sRsR::synapse0x2752e80() {
   return (neuron0x273f1b0()*-0.421897);
}

double NNfunction_sb_sRsR::synapse0x2752ec0() {
   return (neuron0x273f4f0()*-0.288863);
}

double NNfunction_sb_sRsR::synapse0x2752f00() {
   return (neuron0x273f830()*0.433591);
}

double NNfunction_sb_sRsR::synapse0x2752f40() {
   return (neuron0x273fb70()*0.633716);
}

double NNfunction_sb_sRsR::synapse0x2752f80() {
   return (neuron0x273feb0()*-0.123396);
}

double NNfunction_sb_sRsR::synapse0x2752fc0() {
   return (neuron0x27401f0()*-0.228717);
}

double NNfunction_sb_sRsR::synapse0x2753000() {
   return (neuron0x2740530()*-1.11117);
}

double NNfunction_sb_sRsR::synapse0x2753040() {
   return (neuron0x2740870()*0.375929);
}

double NNfunction_sb_sRsR::synapse0x2753080() {
   return (neuron0x2740bb0()*-0.300268);
}

double NNfunction_sb_sRsR::synapse0x27530c0() {
   return (neuron0x2740ef0()*-0.00158706);
}

double NNfunction_sb_sRsR::synapse0x2752b50() {
   return (neuron0x2741230()*-0.177549);
}

double NNfunction_sb_sRsR::synapse0x2752b90() {
   return (neuron0x2741790()*0.813259);
}

double NNfunction_sb_sRsR::synapse0x2753210() {
   return (neuron0x2741ad0()*-1.08543);
}

double NNfunction_sb_sRsR::synapse0x2753250() {
   return (neuron0x2741e10()*1.33237);
}

double NNfunction_sb_sRsR::synapse0x2753290() {
   return (neuron0x2742150()*0.445545);
}

double NNfunction_sb_sRsR::synapse0x27532d0() {
   return (neuron0x2742490()*-0.209954);
}

double NNfunction_sb_sRsR::synapse0x2753310() {
   return (neuron0x27427d0()*0.0416415);
}

double NNfunction_sb_sRsR::synapse0x2753350() {
   return (neuron0x2742b10()*0.125057);
}

double NNfunction_sb_sRsR::synapse0x27536d0() {
   return (neuron0x273dec0()*-0.0705633);
}

double NNfunction_sb_sRsR::synapse0x2753710() {
   return (neuron0x273e170()*0.469848);
}

double NNfunction_sb_sRsR::synapse0x2753750() {
   return (neuron0x273e4b0()*0.208875);
}

double NNfunction_sb_sRsR::synapse0x2753790() {
   return (neuron0x273e7f0()*-0.116457);
}

double NNfunction_sb_sRsR::synapse0x27537d0() {
   return (neuron0x273eb30()*0.0107048);
}

double NNfunction_sb_sRsR::synapse0x2753810() {
   return (neuron0x273ee70()*-0.415374);
}

double NNfunction_sb_sRsR::synapse0x2753850() {
   return (neuron0x273f1b0()*-0.243203);
}

double NNfunction_sb_sRsR::synapse0x2753890() {
   return (neuron0x273f4f0()*0.156556);
}

double NNfunction_sb_sRsR::synapse0x27538d0() {
   return (neuron0x273f830()*0.769009);
}

double NNfunction_sb_sRsR::synapse0x2753910() {
   return (neuron0x273fb70()*-0.0396919);
}

double NNfunction_sb_sRsR::synapse0x2753950() {
   return (neuron0x273feb0()*0.00108846);
}

double NNfunction_sb_sRsR::synapse0x2753990() {
   return (neuron0x27401f0()*-0.0304689);
}

double NNfunction_sb_sRsR::synapse0x27539d0() {
   return (neuron0x2740530()*-0.0217061);
}

double NNfunction_sb_sRsR::synapse0x2753a10() {
   return (neuron0x2740870()*-0.224131);
}

double NNfunction_sb_sRsR::synapse0x2753a50() {
   return (neuron0x2740bb0()*-0.169966);
}

double NNfunction_sb_sRsR::synapse0x2753a90() {
   return (neuron0x2740ef0()*-0.125192);
}

double NNfunction_sb_sRsR::synapse0x2753520() {
   return (neuron0x2741230()*0.00915059);
}

double NNfunction_sb_sRsR::synapse0x2753560() {
   return (neuron0x2741790()*-0.769406);
}

double NNfunction_sb_sRsR::synapse0x2753be0() {
   return (neuron0x2741ad0()*-0.522815);
}

double NNfunction_sb_sRsR::synapse0x2753c20() {
   return (neuron0x2741e10()*-0.410002);
}

double NNfunction_sb_sRsR::synapse0x2753c60() {
   return (neuron0x2742150()*0.451862);
}

double NNfunction_sb_sRsR::synapse0x2753ca0() {
   return (neuron0x2742490()*0.403952);
}

double NNfunction_sb_sRsR::synapse0x2753ce0() {
   return (neuron0x27427d0()*0.169878);
}

double NNfunction_sb_sRsR::synapse0x2753d20() {
   return (neuron0x2742b10()*0.576273);
}

double NNfunction_sb_sRsR::synapse0x27540a0() {
   return (neuron0x273dec0()*0.119394);
}

double NNfunction_sb_sRsR::synapse0x27540e0() {
   return (neuron0x273e170()*0.190481);
}

double NNfunction_sb_sRsR::synapse0x2754120() {
   return (neuron0x273e4b0()*0.429905);
}

double NNfunction_sb_sRsR::synapse0x2754160() {
   return (neuron0x273e7f0()*0.611456);
}

double NNfunction_sb_sRsR::synapse0x27541a0() {
   return (neuron0x273eb30()*-0.318407);
}

double NNfunction_sb_sRsR::synapse0x27541e0() {
   return (neuron0x273ee70()*-0.226398);
}

double NNfunction_sb_sRsR::synapse0x2754220() {
   return (neuron0x273f1b0()*-0.593542);
}

double NNfunction_sb_sRsR::synapse0x2754260() {
   return (neuron0x273f4f0()*0.309788);
}

double NNfunction_sb_sRsR::synapse0x27542a0() {
   return (neuron0x273f830()*0.812955);
}

double NNfunction_sb_sRsR::synapse0x27542e0() {
   return (neuron0x273fb70()*0.427574);
}

double NNfunction_sb_sRsR::synapse0x2754320() {
   return (neuron0x273feb0()*0.0470036);
}

double NNfunction_sb_sRsR::synapse0x2754360() {
   return (neuron0x27401f0()*0.134133);
}

double NNfunction_sb_sRsR::synapse0x27543a0() {
   return (neuron0x2740530()*-0.27921);
}

double NNfunction_sb_sRsR::synapse0x27543e0() {
   return (neuron0x2740870()*-0.157107);
}

double NNfunction_sb_sRsR::synapse0x2754420() {
   return (neuron0x2740bb0()*-0.19354);
}

double NNfunction_sb_sRsR::synapse0x2754460() {
   return (neuron0x2740ef0()*-0.70561);
}

double NNfunction_sb_sRsR::synapse0x2753ef0() {
   return (neuron0x2741230()*-0.00449442);
}

double NNfunction_sb_sRsR::synapse0x2753f30() {
   return (neuron0x2741790()*-0.93205);
}

double NNfunction_sb_sRsR::synapse0x27545b0() {
   return (neuron0x2741ad0()*-0.466365);
}

double NNfunction_sb_sRsR::synapse0x27545f0() {
   return (neuron0x2741e10()*0.0201342);
}

double NNfunction_sb_sRsR::synapse0x2754630() {
   return (neuron0x2742150()*0.49115);
}

double NNfunction_sb_sRsR::synapse0x2754670() {
   return (neuron0x2742490()*0.00461113);
}

double NNfunction_sb_sRsR::synapse0x27546b0() {
   return (neuron0x27427d0()*0.413085);
}

double NNfunction_sb_sRsR::synapse0x27546f0() {
   return (neuron0x2742b10()*-0.520602);
}

double NNfunction_sb_sRsR::synapse0x27665c0() {
   return (neuron0x273dec0()*0.112494);
}

double NNfunction_sb_sRsR::synapse0x2766600() {
   return (neuron0x273e170()*-0.00205682);
}

double NNfunction_sb_sRsR::synapse0x2766640() {
   return (neuron0x273e4b0()*0.042304);
}

double NNfunction_sb_sRsR::synapse0x2766680() {
   return (neuron0x273e7f0()*-0.0132649);
}

double NNfunction_sb_sRsR::synapse0x27666c0() {
   return (neuron0x273eb30()*0.075585);
}

double NNfunction_sb_sRsR::synapse0x2766700() {
   return (neuron0x273ee70()*0.0413704);
}

double NNfunction_sb_sRsR::synapse0x2766740() {
   return (neuron0x273f1b0()*0.003272);
}

double NNfunction_sb_sRsR::synapse0x2766780() {
   return (neuron0x273f4f0()*0.071548);
}

double NNfunction_sb_sRsR::synapse0x27667c0() {
   return (neuron0x273f830()*0.00575117);
}

double NNfunction_sb_sRsR::synapse0x2766800() {
   return (neuron0x273fb70()*-0.0596673);
}

double NNfunction_sb_sRsR::synapse0x2766840() {
   return (neuron0x273feb0()*-0.033284);
}

double NNfunction_sb_sRsR::synapse0x2766880() {
   return (neuron0x27401f0()*-0.0304697);
}

double NNfunction_sb_sRsR::synapse0x27668c0() {
   return (neuron0x2740530()*0.0266123);
}

double NNfunction_sb_sRsR::synapse0x2766900() {
   return (neuron0x2740870()*-0.0432202);
}

double NNfunction_sb_sRsR::synapse0x2766940() {
   return (neuron0x2740bb0()*0.0614098);
}

double NNfunction_sb_sRsR::synapse0x2766980() {
   return (neuron0x2740ef0()*0.0097254);
}

double NNfunction_sb_sRsR::synapse0x2754730() {
   return (neuron0x2741230()*-0.0229127);
}

double NNfunction_sb_sRsR::synapse0x2754770() {
   return (neuron0x2741790()*-0.0467878);
}

double NNfunction_sb_sRsR::synapse0x2766ad0() {
   return (neuron0x2741ad0()*-0.961846);
}

double NNfunction_sb_sRsR::synapse0x2766b10() {
   return (neuron0x2741e10()*-0.147322);
}

double NNfunction_sb_sRsR::synapse0x2766b50() {
   return (neuron0x2742150()*0.0326184);
}

double NNfunction_sb_sRsR::synapse0x2766b90() {
   return (neuron0x2742490()*0.0121417);
}

double NNfunction_sb_sRsR::synapse0x2766bd0() {
   return (neuron0x27427d0()*-0.00149698);
}

double NNfunction_sb_sRsR::synapse0x2766c10() {
   return (neuron0x2742b10()*0.0520516);
}

double NNfunction_sb_sRsR::synapse0x2766f90() {
   return (neuron0x273dec0()*0.112444);
}

double NNfunction_sb_sRsR::synapse0x2766fd0() {
   return (neuron0x273e170()*0.129203);
}

double NNfunction_sb_sRsR::synapse0x2767010() {
   return (neuron0x273e4b0()*0.0138977);
}

double NNfunction_sb_sRsR::synapse0x2767050() {
   return (neuron0x273e7f0()*0.352988);
}

double NNfunction_sb_sRsR::synapse0x2767090() {
   return (neuron0x273eb30()*-0.10075);
}

double NNfunction_sb_sRsR::synapse0x27670d0() {
   return (neuron0x273ee70()*-0.0470871);
}

double NNfunction_sb_sRsR::synapse0x2767110() {
   return (neuron0x273f1b0()*0.0765993);
}

double NNfunction_sb_sRsR::synapse0x2767150() {
   return (neuron0x273f4f0()*-0.044758);
}

double NNfunction_sb_sRsR::synapse0x2767190() {
   return (neuron0x273f830()*0.0120537);
}

double NNfunction_sb_sRsR::synapse0x27671d0() {
   return (neuron0x273fb70()*-0.0457426);
}

double NNfunction_sb_sRsR::synapse0x2767210() {
   return (neuron0x273feb0()*0.0130609);
}

double NNfunction_sb_sRsR::synapse0x2767250() {
   return (neuron0x27401f0()*-0.160358);
}

double NNfunction_sb_sRsR::synapse0x2767290() {
   return (neuron0x2740530()*-0.0925388);
}

double NNfunction_sb_sRsR::synapse0x27672d0() {
   return (neuron0x2740870()*-0.0405017);
}

double NNfunction_sb_sRsR::synapse0x2767310() {
   return (neuron0x2740bb0()*-0.233506);
}

double NNfunction_sb_sRsR::synapse0x2767350() {
   return (neuron0x2740ef0()*0.295327);
}

double NNfunction_sb_sRsR::synapse0x2766de0() {
   return (neuron0x2741230()*0.0786722);
}

double NNfunction_sb_sRsR::synapse0x2766e20() {
   return (neuron0x2741790()*-0.0477419);
}

double NNfunction_sb_sRsR::synapse0x27674a0() {
   return (neuron0x2741ad0()*0.849097);
}

double NNfunction_sb_sRsR::synapse0x27674e0() {
   return (neuron0x2741e10()*-0.045657);
}

double NNfunction_sb_sRsR::synapse0x2767520() {
   return (neuron0x2742150()*-0.0492396);
}

double NNfunction_sb_sRsR::synapse0x2767560() {
   return (neuron0x2742490()*-0.0239469);
}

double NNfunction_sb_sRsR::synapse0x27675a0() {
   return (neuron0x27427d0()*0.0420606);
}

double NNfunction_sb_sRsR::synapse0x27675e0() {
   return (neuron0x2742b10()*0.010242);
}

double NNfunction_sb_sRsR::synapse0x2767960() {
   return (neuron0x273dec0()*0.121695);
}

double NNfunction_sb_sRsR::synapse0x27679a0() {
   return (neuron0x273e170()*-0.00831069);
}

double NNfunction_sb_sRsR::synapse0x27679e0() {
   return (neuron0x273e4b0()*-0.0113923);
}

double NNfunction_sb_sRsR::synapse0x2767a20() {
   return (neuron0x273e7f0()*-0.132648);
}

double NNfunction_sb_sRsR::synapse0x2767a60() {
   return (neuron0x273eb30()*-0.151886);
}

double NNfunction_sb_sRsR::synapse0x2767aa0() {
   return (neuron0x273ee70()*-0.0807005);
}

double NNfunction_sb_sRsR::synapse0x2767ae0() {
   return (neuron0x273f1b0()*-0.0682709);
}

double NNfunction_sb_sRsR::synapse0x2767b20() {
   return (neuron0x273f4f0()*-0.011967);
}

double NNfunction_sb_sRsR::synapse0x2767b60() {
   return (neuron0x273f830()*0.0288144);
}

double NNfunction_sb_sRsR::synapse0x2767ba0() {
   return (neuron0x273fb70()*0.0494073);
}

double NNfunction_sb_sRsR::synapse0x2767be0() {
   return (neuron0x273feb0()*0.0577472);
}

double NNfunction_sb_sRsR::synapse0x2767c20() {
   return (neuron0x27401f0()*0.0218948);
}

double NNfunction_sb_sRsR::synapse0x2767c60() {
   return (neuron0x2740530()*0.0971989);
}

double NNfunction_sb_sRsR::synapse0x2767ca0() {
   return (neuron0x2740870()*0.0434841);
}

double NNfunction_sb_sRsR::synapse0x2767ce0() {
   return (neuron0x2740bb0()*-0.0365813);
}

double NNfunction_sb_sRsR::synapse0x2767d20() {
   return (neuron0x2740ef0()*-0.0874777);
}

double NNfunction_sb_sRsR::synapse0x27677b0() {
   return (neuron0x2741230()*-0.0174408);
}

double NNfunction_sb_sRsR::synapse0x27677f0() {
   return (neuron0x2741790()*0.080815);
}

double NNfunction_sb_sRsR::synapse0x2767e70() {
   return (neuron0x2741ad0()*-0.372769);
}

double NNfunction_sb_sRsR::synapse0x2767eb0() {
   return (neuron0x2741e10()*0.0233305);
}

double NNfunction_sb_sRsR::synapse0x2767ef0() {
   return (neuron0x2742150()*-0.00237602);
}

double NNfunction_sb_sRsR::synapse0x2767f30() {
   return (neuron0x2742490()*-0.0182942);
}

double NNfunction_sb_sRsR::synapse0x2767f70() {
   return (neuron0x27427d0()*0.0404471);
}

double NNfunction_sb_sRsR::synapse0x2767fb0() {
   return (neuron0x2742b10()*0.0978891);
}

double NNfunction_sb_sRsR::synapse0x2768330() {
   return (neuron0x273dec0()*0.237354);
}

double NNfunction_sb_sRsR::synapse0x2768370() {
   return (neuron0x273e170()*-0.00400543);
}

double NNfunction_sb_sRsR::synapse0x27683b0() {
   return (neuron0x273e4b0()*0.0139223);
}

double NNfunction_sb_sRsR::synapse0x27683f0() {
   return (neuron0x273e7f0()*0.0419142);
}

double NNfunction_sb_sRsR::synapse0x2768430() {
   return (neuron0x273eb30()*-0.0277184);
}

double NNfunction_sb_sRsR::synapse0x2768470() {
   return (neuron0x273ee70()*-0.00428781);
}

double NNfunction_sb_sRsR::synapse0x27684b0() {
   return (neuron0x273f1b0()*-0.0853475);
}

double NNfunction_sb_sRsR::synapse0x27684f0() {
   return (neuron0x273f4f0()*0.154217);
}

double NNfunction_sb_sRsR::synapse0x2768530() {
   return (neuron0x273f830()*0.0241941);
}

double NNfunction_sb_sRsR::synapse0x2768570() {
   return (neuron0x273fb70()*-0.0269881);
}

double NNfunction_sb_sRsR::synapse0x27685b0() {
   return (neuron0x273feb0()*0.0283264);
}

double NNfunction_sb_sRsR::synapse0x27685f0() {
   return (neuron0x27401f0()*-0.115452);
}

double NNfunction_sb_sRsR::synapse0x2768630() {
   return (neuron0x2740530()*-0.0355186);
}

double NNfunction_sb_sRsR::synapse0x2768670() {
   return (neuron0x2740870()*-0.0429693);
}

double NNfunction_sb_sRsR::synapse0x27686b0() {
   return (neuron0x2740bb0()*0.104023);
}

double NNfunction_sb_sRsR::synapse0x27686f0() {
   return (neuron0x2740ef0()*-0.0699991);
}

double NNfunction_sb_sRsR::synapse0x2768180() {
   return (neuron0x2741230()*-0.0292625);
}

double NNfunction_sb_sRsR::synapse0x27681c0() {
   return (neuron0x2741790()*-0.0172274);
}

double NNfunction_sb_sRsR::synapse0x2768840() {
   return (neuron0x2741ad0()*0.624305);
}

double NNfunction_sb_sRsR::synapse0x2768880() {
   return (neuron0x2741e10()*-0.19826);
}

double NNfunction_sb_sRsR::synapse0x27688c0() {
   return (neuron0x2742150()*0.031757);
}

double NNfunction_sb_sRsR::synapse0x2768900() {
   return (neuron0x2742490()*0.00645758);
}

double NNfunction_sb_sRsR::synapse0x2768940() {
   return (neuron0x27427d0()*0.0178256);
}

double NNfunction_sb_sRsR::synapse0x2768980() {
   return (neuron0x2742b10()*0.125223);
}

double NNfunction_sb_sRsR::synapse0x25087a0() {
   return (neuron0x2742f80()*0.162927);
}

double NNfunction_sb_sRsR::synapse0x25087e0() {
   return (neuron0x27437c0()*-0.206845);
}

double NNfunction_sb_sRsR::synapse0x2745330() {
   return (neuron0x27442a0()*-0.296019);
}

double NNfunction_sb_sRsR::synapse0x2745370() {
   return (neuron0x2743d40()*1.10388);
}

double NNfunction_sb_sRsR::synapse0x2746e00() {
   return (neuron0x2745080()*-2.98129);
}

double NNfunction_sb_sRsR::synapse0x2746e40() {
   return (neuron0x2746b50()*2.47448);
}

double NNfunction_sb_sRsR::synapse0x2747bd0() {
   return (neuron0x2747920()*0.0522438);
}

double NNfunction_sb_sRsR::synapse0x2747c10() {
   return (neuron0x27482f0()*1.04869);
}

double NNfunction_sb_sRsR::synapse0x27485a0() {
   return (neuron0x2748cc0()*-0.023644);
}

double NNfunction_sb_sRsR::synapse0x27485e0() {
   return (neuron0x27497a0()*-0.958373);
}

double NNfunction_sb_sRsR::synapse0x2748f70() {
   return (neuron0x274a170()*-1.3276);
}

double NNfunction_sb_sRsR::synapse0x2748fb0() {
   return (neuron0x2747250()*0.0632166);
}

double NNfunction_sb_sRsR::synapse0x2749a50() {
   return (neuron0x274bd20()*0.102819);
}

double NNfunction_sb_sRsR::synapse0x2749a90() {
   return (neuron0x274c6f0()*1.1437);
}

double NNfunction_sb_sRsR::synapse0x274a420() {
   return (neuron0x274d0c0()*0.248799);
}

double NNfunction_sb_sRsR::synapse0x274a460() {
   return (neuron0x274da90()*2.55394);
}

double NNfunction_sb_sRsR::synapse0x2747500() {
   return (neuron0x274f8a0()*0.292029);
}

double NNfunction_sb_sRsR::synapse0x2747540() {
   return (neuron0x274fb80()*-0.0145996);
}

double NNfunction_sb_sRsR::synapse0x274bfd0() {
   return (neuron0x2750550()*2.9604);
}

double NNfunction_sb_sRsR::synapse0x274c010() {
   return (neuron0x2750f20()*4.82947);
}

double NNfunction_sb_sRsR::synapse0x274c9a0() {
   return (neuron0x27518f0()*1.04299);
}

double NNfunction_sb_sRsR::synapse0x274c9e0() {
   return (neuron0x27522c0()*0.48397);
}

double NNfunction_sb_sRsR::synapse0x274d370() {
   return (neuron0x274ae10()*-3.83771);
}

double NNfunction_sb_sRsR::synapse0x274d3b0() {
   return (neuron0x274b7e0()*-0.369735);
}

double NNfunction_sb_sRsR::synapse0x274dd40() {
   return (neuron0x2755050()*-0.234424);
}

double NNfunction_sb_sRsR::synapse0x274dd80() {
   return (neuron0x2755a20()*-1.45985);
}

double NNfunction_sb_sRsR::synapse0x2740dd0() {
   return (neuron0x27563f0()*-0.384149);
}

double NNfunction_sb_sRsR::synapse0x2740e10() {
   return (neuron0x2756dc0()*0.191209);
}

double NNfunction_sb_sRsR::synapse0x274fe30() {
   return (neuron0x2757790()*0.218398);
}

double NNfunction_sb_sRsR::synapse0x274fe70() {
   return (neuron0x2758160()*0.327721);
}

double NNfunction_sb_sRsR::synapse0x2750800() {
   return (neuron0x2758b30()*1.10711);
}

double NNfunction_sb_sRsR::synapse0x2750840() {
   return (neuron0x2759500()*-0.298665);
}

double NNfunction_sb_sRsR::synapse0x27511d0() {
   return (neuron0x274f590()*2.32898);
}

double NNfunction_sb_sRsR::synapse0x2751210() {
   return (neuron0x275c0e0()*-1.32046);
}

double NNfunction_sb_sRsR::synapse0x2751ba0() {
   return (neuron0x275cab0()*0.646104);
}

double NNfunction_sb_sRsR::synapse0x2751be0() {
   return (neuron0x275d480()*-0.619102);
}

double NNfunction_sb_sRsR::synapse0x2752570() {
   return (neuron0x275de50()*0.406688);
}

double NNfunction_sb_sRsR::synapse0x27525b0() {
   return (neuron0x275e820()*-1.10066);
}

double NNfunction_sb_sRsR::synapse0x274b0c0() {
   return (neuron0x275f1f0()*0.297056);
}

double NNfunction_sb_sRsR::synapse0x274b100() {
   return (neuron0x275fbc0()*-0.372013);
}

double NNfunction_sb_sRsR::synapse0x2754970() {
   return (neuron0x2760590()*0.049036);
}

double NNfunction_sb_sRsR::synapse0x27549b0() {
   return (neuron0x2761170()*-2.82923);
}

double NNfunction_sb_sRsR::synapse0x2755300() {
   return (neuron0x2761b40()*0.00077079);
}

double NNfunction_sb_sRsR::synapse0x2755340() {
   return (neuron0x27529c0()*0.133331);
}

double NNfunction_sb_sRsR::synapse0x2755cd0() {
   return (neuron0x2753390()*-0.189044);
}

double NNfunction_sb_sRsR::synapse0x2755d10() {
   return (neuron0x2753d60()*-0.00926343);
}

double NNfunction_sb_sRsR::synapse0x27566a0() {
   return (neuron0x27663a0()*-0.931072);
}

double NNfunction_sb_sRsR::synapse0x27566e0() {
   return (neuron0x2766c50()*-2.0134);
}

double NNfunction_sb_sRsR::synapse0x2757070() {
   return (neuron0x2767620()*1.02194);
}

double NNfunction_sb_sRsR::synapse0x27570b0() {
   return (neuron0x2767ff0()*-2.13437);
}

double NNfunction_sb_sRsR::synapse0x27597b0() {
   return (neuron0x2742f80()*0.0344604);
}

double NNfunction_sb_sRsR::synapse0x27597f0() {
   return (neuron0x27437c0()*0.430706);
}

double NNfunction_sb_sRsR::synapse0x274ed70() {
   return (neuron0x27442a0()*-0.121271);
}

double NNfunction_sb_sRsR::synapse0x274edb0() {
   return (neuron0x2743d40()*0.0275115);
}

double NNfunction_sb_sRsR::synapse0x275c390() {
   return (neuron0x2745080()*-1.17919);
}

double NNfunction_sb_sRsR::synapse0x275c3d0() {
   return (neuron0x2746b50()*-0.830612);
}

double NNfunction_sb_sRsR::synapse0x275cd60() {
   return (neuron0x2747920()*-0.128975);
}

double NNfunction_sb_sRsR::synapse0x275cda0() {
   return (neuron0x27482f0()*-0.0936925);
}

double NNfunction_sb_sRsR::synapse0x275d730() {
   return (neuron0x2748cc0()*-0.0299147);
}

double NNfunction_sb_sRsR::synapse0x275d770() {
   return (neuron0x27497a0()*-0.156906);
}

double NNfunction_sb_sRsR::synapse0x275e100() {
   return (neuron0x274a170()*-0.368831);
}

double NNfunction_sb_sRsR::synapse0x275e140() {
   return (neuron0x2747250()*0.0766953);
}

double NNfunction_sb_sRsR::synapse0x275ead0() {
   return (neuron0x274bd20()*-0.182512);
}

double NNfunction_sb_sRsR::synapse0x275eb10() {
   return (neuron0x274c6f0()*-0.178919);
}

double NNfunction_sb_sRsR::synapse0x275f4a0() {
   return (neuron0x274d0c0()*0.0665379);
}

double NNfunction_sb_sRsR::synapse0x275f4e0() {
   return (neuron0x274da90()*-0.897909);
}

double NNfunction_sb_sRsR::synapse0x275fe70() {
   return (neuron0x274f8a0()*0.00996537);
}

double NNfunction_sb_sRsR::synapse0x275feb0() {
   return (neuron0x274fb80()*-0.0364097);
}

double NNfunction_sb_sRsR::synapse0x2760840() {
   return (neuron0x2750550()*-1.01508);
}

double NNfunction_sb_sRsR::synapse0x2760880() {
   return (neuron0x2750f20()*0.122289);
}

double NNfunction_sb_sRsR::synapse0x2761420() {
   return (neuron0x27518f0()*-0.615666);
}

double NNfunction_sb_sRsR::synapse0x2761460() {
   return (neuron0x27522c0()*-0.0841986);
}

double NNfunction_sb_sRsR::synapse0x2761df0() {
   return (neuron0x274ae10()*1.18233);
}

double NNfunction_sb_sRsR::synapse0x2761e30() {
   return (neuron0x274b7e0()*-0.607505);
}

double NNfunction_sb_sRsR::synapse0x2752c70() {
   return (neuron0x2755050()*-0.00180263);
}

double NNfunction_sb_sRsR::synapse0x2752cb0() {
   return (neuron0x2755a20()*0.451531);
}

double NNfunction_sb_sRsR::synapse0x2753640() {
   return (neuron0x27563f0()*0.233422);
}

double NNfunction_sb_sRsR::synapse0x2753680() {
   return (neuron0x2756dc0()*0.138122);
}

double NNfunction_sb_sRsR::synapse0x2754010() {
   return (neuron0x2757790()*-0.0873849);
}

double NNfunction_sb_sRsR::synapse0x2754050() {
   return (neuron0x2758160()*0.128557);
}

double NNfunction_sb_sRsR::synapse0x2766530() {
   return (neuron0x2758b30()*-0.446984);
}

double NNfunction_sb_sRsR::synapse0x2766570() {
   return (neuron0x2759500()*0.0279968);
}

double NNfunction_sb_sRsR::synapse0x2766f00() {
   return (neuron0x274f590()*-0.749556);
}

double NNfunction_sb_sRsR::synapse0x2766f40() {
   return (neuron0x275c0e0()*0.21245);
}

double NNfunction_sb_sRsR::synapse0x27678d0() {
   return (neuron0x275cab0()*0.0874446);
}

double NNfunction_sb_sRsR::synapse0x2767910() {
   return (neuron0x275d480()*-0.227482);
}

double NNfunction_sb_sRsR::synapse0x27682a0() {
   return (neuron0x275de50()*-0.392631);
}

double NNfunction_sb_sRsR::synapse0x27682e0() {
   return (neuron0x275e820()*0.954819);
}

double NNfunction_sb_sRsR::synapse0x2743230() {
   return (neuron0x275f1f0()*-0.0864466);
}

double NNfunction_sb_sRsR::synapse0x2743270() {
   return (neuron0x275fbc0()*-0.0896524);
}

double NNfunction_sb_sRsR::synapse0x2757a40() {
   return (neuron0x2760590()*0.0305658);
}

double NNfunction_sb_sRsR::synapse0x2757a80() {
   return (neuron0x2761170()*1.0783);
}

double NNfunction_sb_sRsR::synapse0x27689c0() {
   return (neuron0x2761b40()*0.0925738);
}

double NNfunction_sb_sRsR::synapse0x2768a00() {
   return (neuron0x27529c0()*0.00977771);
}

double NNfunction_sb_sRsR::synapse0x2768a40() {
   return (neuron0x2753390()*-0.109395);
}

double NNfunction_sb_sRsR::synapse0x2768a80() {
   return (neuron0x2753d60()*0.076479);
}

double NNfunction_sb_sRsR::synapse0x276f930() {
   return (neuron0x27663a0()*0.107883);
}

double NNfunction_sb_sRsR::synapse0x276f970() {
   return (neuron0x2766c50()*0.452265);
}

double NNfunction_sb_sRsR::synapse0x276f9b0() {
   return (neuron0x2767620()*-1.39428);
}

double NNfunction_sb_sRsR::synapse0x276f9f0() {
   return (neuron0x2767ff0()*0.34815);
}

double NNfunction_sb_sRsR::synapse0x276fd70() {
   return (neuron0x2742f80()*-0.00891345);
}

double NNfunction_sb_sRsR::synapse0x276fdb0() {
   return (neuron0x27437c0()*-0.615632);
}

double NNfunction_sb_sRsR::synapse0x276fdf0() {
   return (neuron0x27442a0()*0.0149987);
}

double NNfunction_sb_sRsR::synapse0x276fe30() {
   return (neuron0x2743d40()*-0.00768284);
}

double NNfunction_sb_sRsR::synapse0x276fe70() {
   return (neuron0x2745080()*0.0621933);
}

double NNfunction_sb_sRsR::synapse0x276feb0() {
   return (neuron0x2746b50()*-0.416601);
}

double NNfunction_sb_sRsR::synapse0x276fef0() {
   return (neuron0x2747920()*0.0248971);
}

double NNfunction_sb_sRsR::synapse0x276ff30() {
   return (neuron0x27482f0()*0.0123732);
}

double NNfunction_sb_sRsR::synapse0x276ff70() {
   return (neuron0x2748cc0()*0.00282863);
}

double NNfunction_sb_sRsR::synapse0x276ffb0() {
   return (neuron0x27497a0()*0.066717);
}

double NNfunction_sb_sRsR::synapse0x276fff0() {
   return (neuron0x274a170()*0.84296);
}

double NNfunction_sb_sRsR::synapse0x2770030() {
   return (neuron0x2747250()*-0.0183575);
}

double NNfunction_sb_sRsR::synapse0x2770070() {
   return (neuron0x274bd20()*0.0428964);
}

double NNfunction_sb_sRsR::synapse0x27700b0() {
   return (neuron0x274c6f0()*0.0184862);
}

double NNfunction_sb_sRsR::synapse0x27700f0() {
   return (neuron0x274d0c0()*-0.0130499);
}

double NNfunction_sb_sRsR::synapse0x2770130() {
   return (neuron0x274da90()*-1.44022);
}

double NNfunction_sb_sRsR::synapse0x276fbc0() {
   return (neuron0x274f8a0()*-0.000548399);
}

double NNfunction_sb_sRsR::synapse0x276fc00() {
   return (neuron0x274fb80()*0.0167961);
}

double NNfunction_sb_sRsR::synapse0x2770280() {
   return (neuron0x2750550()*-0.291601);
}

double NNfunction_sb_sRsR::synapse0x27702c0() {
   return (neuron0x2750f20()*0.0273312);
}

double NNfunction_sb_sRsR::synapse0x2770300() {
   return (neuron0x27518f0()*-0.713372);
}

double NNfunction_sb_sRsR::synapse0x2770340() {
   return (neuron0x27522c0()*-0.00611987);
}

double NNfunction_sb_sRsR::synapse0x2770380() {
   return (neuron0x274ae10()*0.166555);
}

double NNfunction_sb_sRsR::synapse0x27703c0() {
   return (neuron0x274b7e0()*1.17913);
}

double NNfunction_sb_sRsR::synapse0x2770400() {
   return (neuron0x2755050()*0.0115012);
}

double NNfunction_sb_sRsR::synapse0x2770440() {
   return (neuron0x2755a20()*-0.017436);
}

double NNfunction_sb_sRsR::synapse0x2770480() {
   return (neuron0x27563f0()*-0.0285333);
}

double NNfunction_sb_sRsR::synapse0x27704c0() {
   return (neuron0x2756dc0()*-0.0318142);
}

double NNfunction_sb_sRsR::synapse0x2770500() {
   return (neuron0x2757790()*0.0257311);
}

double NNfunction_sb_sRsR::synapse0x2770540() {
   return (neuron0x2758160()*-0.0244357);
}

double NNfunction_sb_sRsR::synapse0x2770580() {
   return (neuron0x2758b30()*0.0414966);
}

double NNfunction_sb_sRsR::synapse0x27705c0() {
   return (neuron0x2759500()*0.0130852);
}

double NNfunction_sb_sRsR::synapse0x2770170() {
   return (neuron0x274f590()*-0.213735);
}

double NNfunction_sb_sRsR::synapse0x27701b0() {
   return (neuron0x275c0e0()*-0.013728);
}

double NNfunction_sb_sRsR::synapse0x27701f0() {
   return (neuron0x275cab0()*0.00535611);
}

double NNfunction_sb_sRsR::synapse0x2770230() {
   return (neuron0x275d480()*0.0207631);
}

double NNfunction_sb_sRsR::synapse0x2770810() {
   return (neuron0x275de50()*0.102893);
}

double NNfunction_sb_sRsR::synapse0x2770850() {
   return (neuron0x275e820()*-0.0307095);
}

double NNfunction_sb_sRsR::synapse0x2770890() {
   return (neuron0x275f1f0()*-0.00421144);
}

double NNfunction_sb_sRsR::synapse0x27708d0() {
   return (neuron0x275fbc0()*0.0104486);
}

double NNfunction_sb_sRsR::synapse0x2770910() {
   return (neuron0x2760590()*-0.00467939);
}

double NNfunction_sb_sRsR::synapse0x2770950() {
   return (neuron0x2761170()*0.545205);
}

double NNfunction_sb_sRsR::synapse0x2770990() {
   return (neuron0x2761b40()*-0.0145902);
}

double NNfunction_sb_sRsR::synapse0x27709d0() {
   return (neuron0x27529c0()*0.00319818);
}

double NNfunction_sb_sRsR::synapse0x2770a10() {
   return (neuron0x2753390()*0.00270547);
}

double NNfunction_sb_sRsR::synapse0x2770a50() {
   return (neuron0x2753d60()*-0.019557);
}

double NNfunction_sb_sRsR::synapse0x2770a90() {
   return (neuron0x27663a0()*1.50884);
}

double NNfunction_sb_sRsR::synapse0x2770ad0() {
   return (neuron0x2766c50()*-0.0725857);
}

double NNfunction_sb_sRsR::synapse0x2770b10() {
   return (neuron0x2767620()*0.928578);
}

double NNfunction_sb_sRsR::synapse0x2770b50() {
   return (neuron0x2767ff0()*-1.41181);
}

double NNfunction_sb_sRsR::synapse0x2770ed0() {
   return (neuron0x2742f80()*0.498859);
}

double NNfunction_sb_sRsR::synapse0x2770f10() {
   return (neuron0x27437c0()*0.610695);
}

double NNfunction_sb_sRsR::synapse0x2770f50() {
   return (neuron0x27442a0()*0.762387);
}

double NNfunction_sb_sRsR::synapse0x2770f90() {
   return (neuron0x2743d40()*0.311475);
}

double NNfunction_sb_sRsR::synapse0x2770fd0() {
   return (neuron0x2745080()*0.0797865);
}

double NNfunction_sb_sRsR::synapse0x2771010() {
   return (neuron0x2746b50()*0.493089);
}

double NNfunction_sb_sRsR::synapse0x2771050() {
   return (neuron0x2747920()*0.0869364);
}

double NNfunction_sb_sRsR::synapse0x2771090() {
   return (neuron0x27482f0()*0.147045);
}

double NNfunction_sb_sRsR::synapse0x27710d0() {
   return (neuron0x2748cc0()*0.0294027);
}

double NNfunction_sb_sRsR::synapse0x2771110() {
   return (neuron0x27497a0()*0.0570554);
}

double NNfunction_sb_sRsR::synapse0x2771150() {
   return (neuron0x274a170()*0.36674);
}

double NNfunction_sb_sRsR::synapse0x2771190() {
   return (neuron0x2747250()*0.640052);
}

double NNfunction_sb_sRsR::synapse0x27711d0() {
   return (neuron0x274bd20()*-0.0889453);
}

double NNfunction_sb_sRsR::synapse0x2771210() {
   return (neuron0x274c6f0()*0.848993);
}

double NNfunction_sb_sRsR::synapse0x2771250() {
   return (neuron0x274d0c0()*0.156373);
}

double NNfunction_sb_sRsR::synapse0x2771290() {
   return (neuron0x274da90()*0.206708);
}

double NNfunction_sb_sRsR::synapse0x2770d20() {
   return (neuron0x274f8a0()*0.447503);
}

double NNfunction_sb_sRsR::synapse0x2770d60() {
   return (neuron0x274fb80()*0.111728);
}

double NNfunction_sb_sRsR::synapse0x27713e0() {
   return (neuron0x2750550()*0.24931);
}

double NNfunction_sb_sRsR::synapse0x2771420() {
   return (neuron0x2750f20()*-0.0448673);
}

double NNfunction_sb_sRsR::synapse0x2771460() {
   return (neuron0x27518f0()*0.302813);
}

double NNfunction_sb_sRsR::synapse0x27714a0() {
   return (neuron0x27522c0()*0.688217);
}

double NNfunction_sb_sRsR::synapse0x27714e0() {
   return (neuron0x274ae10()*0.660519);
}

double NNfunction_sb_sRsR::synapse0x2771520() {
   return (neuron0x274b7e0()*-0.0863291);
}

double NNfunction_sb_sRsR::synapse0x2771560() {
   return (neuron0x2755050()*0.293616);
}

double NNfunction_sb_sRsR::synapse0x27715a0() {
   return (neuron0x2755a20()*0.0482564);
}

double NNfunction_sb_sRsR::synapse0x27715e0() {
   return (neuron0x27563f0()*0.51308);
}

double NNfunction_sb_sRsR::synapse0x2771620() {
   return (neuron0x2756dc0()*0.0563618);
}

double NNfunction_sb_sRsR::synapse0x2771660() {
   return (neuron0x2757790()*0.72034);
}

double NNfunction_sb_sRsR::synapse0x27716a0() {
   return (neuron0x2758160()*-0.185935);
}

double NNfunction_sb_sRsR::synapse0x27716e0() {
   return (neuron0x2758b30()*0.355514);
}

double NNfunction_sb_sRsR::synapse0x2771720() {
   return (neuron0x2759500()*-0.220477);
}

double NNfunction_sb_sRsR::synapse0x27712d0() {
   return (neuron0x274f590()*0.566722);
}

double NNfunction_sb_sRsR::synapse0x2771310() {
   return (neuron0x275c0e0()*0.144511);
}

double NNfunction_sb_sRsR::synapse0x2771350() {
   return (neuron0x275cab0()*-0.326615);
}

double NNfunction_sb_sRsR::synapse0x2771390() {
   return (neuron0x275d480()*0.320903);
}

double NNfunction_sb_sRsR::synapse0x2771970() {
   return (neuron0x275de50()*-0.104394);
}

double NNfunction_sb_sRsR::synapse0x27719b0() {
   return (neuron0x275e820()*0.304329);
}

double NNfunction_sb_sRsR::synapse0x27719f0() {
   return (neuron0x275f1f0()*-0.021322);
}

double NNfunction_sb_sRsR::synapse0x2771a30() {
   return (neuron0x275fbc0()*0.398395);
}

double NNfunction_sb_sRsR::synapse0x2771a70() {
   return (neuron0x2760590()*-0.00189054);
}

double NNfunction_sb_sRsR::synapse0x2771ab0() {
   return (neuron0x2761170()*0.145658);
}

double NNfunction_sb_sRsR::synapse0x2771af0() {
   return (neuron0x2761b40()*0.622061);
}

double NNfunction_sb_sRsR::synapse0x2771b30() {
   return (neuron0x27529c0()*0.373463);
}

double NNfunction_sb_sRsR::synapse0x2771b70() {
   return (neuron0x2753390()*0.306478);
}

double NNfunction_sb_sRsR::synapse0x2771bb0() {
   return (neuron0x2753d60()*0.575103);
}

double NNfunction_sb_sRsR::synapse0x2771bf0() {
   return (neuron0x27663a0()*0.136899);
}

double NNfunction_sb_sRsR::synapse0x2771c30() {
   return (neuron0x2766c50()*0.61599);
}

double NNfunction_sb_sRsR::synapse0x2771c70() {
   return (neuron0x2767620()*0.543233);
}

double NNfunction_sb_sRsR::synapse0x2771cb0() {
   return (neuron0x2767ff0()*-0.399268);
}

double NNfunction_sb_sRsR::synapse0x2772030() {
   return (neuron0x2742f80()*-1.85747);
}

double NNfunction_sb_sRsR::synapse0x2772070() {
   return (neuron0x27437c0()*2.51292);
}

double NNfunction_sb_sRsR::synapse0x27720b0() {
   return (neuron0x27442a0()*2.34082);
}

double NNfunction_sb_sRsR::synapse0x27720f0() {
   return (neuron0x2743d40()*1.82497);
}

double NNfunction_sb_sRsR::synapse0x2772130() {
   return (neuron0x2745080()*-4.09806);
}

double NNfunction_sb_sRsR::synapse0x2772170() {
   return (neuron0x2746b50()*1.01958);
}

double NNfunction_sb_sRsR::synapse0x27721b0() {
   return (neuron0x2747920()*0.970628);
}

double NNfunction_sb_sRsR::synapse0x27721f0() {
   return (neuron0x27482f0()*-1.0952);
}

double NNfunction_sb_sRsR::synapse0x2772230() {
   return (neuron0x2748cc0()*-1.24134);
}

double NNfunction_sb_sRsR::synapse0x2772270() {
   return (neuron0x27497a0()*-0.826318);
}

double NNfunction_sb_sRsR::synapse0x27722b0() {
   return (neuron0x274a170()*-0.740265);
}

double NNfunction_sb_sRsR::synapse0x27722f0() {
   return (neuron0x2747250()*1.74176);
}

double NNfunction_sb_sRsR::synapse0x2772330() {
   return (neuron0x274bd20()*2.65085);
}

double NNfunction_sb_sRsR::synapse0x2772370() {
   return (neuron0x274c6f0()*1.0226);
}

double NNfunction_sb_sRsR::synapse0x27723b0() {
   return (neuron0x274d0c0()*-1.58671);
}

double NNfunction_sb_sRsR::synapse0x27723f0() {
   return (neuron0x274da90()*1.63307);
}

double NNfunction_sb_sRsR::synapse0x2771e80() {
   return (neuron0x274f8a0()*1.65507);
}

double NNfunction_sb_sRsR::synapse0x2771ec0() {
   return (neuron0x274fb80()*1.03557);
}

double NNfunction_sb_sRsR::synapse0x2772540() {
   return (neuron0x2750550()*6.09483);
}

double NNfunction_sb_sRsR::synapse0x2772580() {
   return (neuron0x2750f20()*1.77231);
}

double NNfunction_sb_sRsR::synapse0x27725c0() {
   return (neuron0x27518f0()*0.932513);
}

double NNfunction_sb_sRsR::synapse0x2772600() {
   return (neuron0x27522c0()*1.09332);
}

double NNfunction_sb_sRsR::synapse0x2772640() {
   return (neuron0x274ae10()*-7.66041);
}

double NNfunction_sb_sRsR::synapse0x2772680() {
   return (neuron0x274b7e0()*-0.35002);
}

double NNfunction_sb_sRsR::synapse0x27726c0() {
   return (neuron0x2755050()*-0.747966);
}

double NNfunction_sb_sRsR::synapse0x2772700() {
   return (neuron0x2755a20()*0.124642);
}

double NNfunction_sb_sRsR::synapse0x2772740() {
   return (neuron0x27563f0()*-0.370818);
}

double NNfunction_sb_sRsR::synapse0x2772780() {
   return (neuron0x2756dc0()*0.864916);
}

double NNfunction_sb_sRsR::synapse0x27727c0() {
   return (neuron0x2757790()*1.39394);
}

double NNfunction_sb_sRsR::synapse0x2772800() {
   return (neuron0x2758160()*1.43745);
}

double NNfunction_sb_sRsR::synapse0x2772840() {
   return (neuron0x2758b30()*0.1933);
}

double NNfunction_sb_sRsR::synapse0x2772880() {
   return (neuron0x2759500()*-0.788284);
}

double NNfunction_sb_sRsR::synapse0x2772430() {
   return (neuron0x274f590()*1.50721);
}

double NNfunction_sb_sRsR::synapse0x2772470() {
   return (neuron0x275c0e0()*1.70846);
}

double NNfunction_sb_sRsR::synapse0x27724b0() {
   return (neuron0x275cab0()*1.34595);
}

double NNfunction_sb_sRsR::synapse0x27724f0() {
   return (neuron0x275d480()*-0.87659);
}

double NNfunction_sb_sRsR::synapse0x2772ad0() {
   return (neuron0x275de50()*-0.165519);
}

double NNfunction_sb_sRsR::synapse0x2772b10() {
   return (neuron0x275e820()*-0.911267);
}

double NNfunction_sb_sRsR::synapse0x2772b50() {
   return (neuron0x275f1f0()*0.874933);
}

double NNfunction_sb_sRsR::synapse0x2772b90() {
   return (neuron0x275fbc0()*2.72695);
}

double NNfunction_sb_sRsR::synapse0x2772bd0() {
   return (neuron0x2760590()*-1.30143);
}

double NNfunction_sb_sRsR::synapse0x2772c10() {
   return (neuron0x2761170()*-1.30381);
}

double NNfunction_sb_sRsR::synapse0x2772c50() {
   return (neuron0x2761b40()*0.383711);
}

double NNfunction_sb_sRsR::synapse0x2772c90() {
   return (neuron0x27529c0()*-1.74927);
}

double NNfunction_sb_sRsR::synapse0x2772cd0() {
   return (neuron0x2753390()*-1.17732);
}

double NNfunction_sb_sRsR::synapse0x2772d10() {
   return (neuron0x2753d60()*1.75799);
}

double NNfunction_sb_sRsR::synapse0x2772d50() {
   return (neuron0x27663a0()*0.00586951);
}

double NNfunction_sb_sRsR::synapse0x2772d90() {
   return (neuron0x2766c50()*-0.188873);
}

double NNfunction_sb_sRsR::synapse0x2772dd0() {
   return (neuron0x2767620()*0.148798);
}

double NNfunction_sb_sRsR::synapse0x2772e10() {
   return (neuron0x2767ff0()*0.365988);
}

double NNfunction_sb_sRsR::synapse0x2773070() {
   return (neuron0x276f1f0()*-11.089);
}

double NNfunction_sb_sRsR::synapse0x27730b0() {
   return (neuron0x276f590()*3.17887);
}

double NNfunction_sb_sRsR::synapse0x27730f0() {
   return (neuron0x276fa30()*7.04562);
}

double NNfunction_sb_sRsR::synapse0x2773130() {
   return (neuron0x2770b90()*6.05363);
}

double NNfunction_sb_sRsR::synapse0x2773170() {
   return (neuron0x2771cf0()*-7.51898);
}

