#include "NNfunction-ss_dLcR.h"
#include <cmath>

double NNfunction-ss_dLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9187)/15.0267;
   input1 = (in1 - 41.0586)/789.424;
   input2 = (in2 - 383.065)/493.281;
   input3 = (in3 - 204.048)/629.275;
   input4 = (in4 - 741.682)/738.065;
   input5 = (in5 - 639.375)/706.788;
   input6 = (in6 - 647.163)/713.663;
   input7 = (in7 - 642.873)/705.978;
   input8 = (in8 - 636.028)/719.602;
   input9 = (in9 - 625.492)/701.717;
   input10 = (in10 - 649.402)/734.235;
   input11 = (in11 - 478.458)/302.2;
   input12 = (in12 - 637.757)/600.852;
   input13 = (in13 - 489.073)/368.823;
   input14 = (in14 - 638.943)/580.266;
   input15 = (in15 - 484.234)/304.294;
   input16 = (in16 - 451.529)/401.389;
   input17 = (in17 - 654.252)/625.456;
   input18 = (in18 - 646.072)/620.897;
   input19 = (in19 - 656.084)/619.28;
   input20 = (in20 - -165.259)/399.892;
   input21 = (in21 - -209.794)/887.577;
   input22 = (in22 - 9.42608)/901.145;
   input23 = (in23 - -36.3497)/487.908;
   switch(index) {
     case 0:
         return neuron0x279d020();
     default:
         return 0.;
   }
}

double NNfunction-ss_dLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.9187)/15.0267;
   input1 = (input[1] - 41.0586)/789.424;
   input2 = (input[2] - 383.065)/493.281;
   input3 = (input[3] - 204.048)/629.275;
   input4 = (input[4] - 741.682)/738.065;
   input5 = (input[5] - 639.375)/706.788;
   input6 = (input[6] - 647.163)/713.663;
   input7 = (input[7] - 642.873)/705.978;
   input8 = (input[8] - 636.028)/719.602;
   input9 = (input[9] - 625.492)/701.717;
   input10 = (input[10] - 649.402)/734.235;
   input11 = (input[11] - 478.458)/302.2;
   input12 = (input[12] - 637.757)/600.852;
   input13 = (input[13] - 489.073)/368.823;
   input14 = (input[14] - 638.943)/580.266;
   input15 = (input[15] - 484.234)/304.294;
   input16 = (input[16] - 451.529)/401.389;
   input17 = (input[17] - 654.252)/625.456;
   input18 = (input[18] - 646.072)/620.897;
   input19 = (input[19] - 656.084)/619.28;
   input20 = (input[20] - -165.259)/399.892;
   input21 = (input[21] - -209.794)/887.577;
   input22 = (input[22] - 9.42608)/901.145;
   input23 = (input[23] - -36.3497)/487.908;
   switch(index) {
     case 0:
         return neuron0x279d020();
     default:
         return 0.;
   }
}

double NNfunction-ss_dLcR::neuron0x27691e0() {
   return input0;
}

double NNfunction-ss_dLcR::neuron0x2769490() {
   return input1;
}

double NNfunction-ss_dLcR::neuron0x27697d0() {
   return input2;
}

double NNfunction-ss_dLcR::neuron0x2769b10() {
   return input3;
}

double NNfunction-ss_dLcR::neuron0x2769e50() {
   return input4;
}

double NNfunction-ss_dLcR::neuron0x276a190() {
   return input5;
}

double NNfunction-ss_dLcR::neuron0x276a4d0() {
   return input6;
}

double NNfunction-ss_dLcR::neuron0x276a810() {
   return input7;
}

double NNfunction-ss_dLcR::neuron0x276ab50() {
   return input8;
}

double NNfunction-ss_dLcR::neuron0x276ae90() {
   return input9;
}

double NNfunction-ss_dLcR::neuron0x276b1d0() {
   return input10;
}

double NNfunction-ss_dLcR::neuron0x276b510() {
   return input11;
}

double NNfunction-ss_dLcR::neuron0x276b850() {
   return input12;
}

double NNfunction-ss_dLcR::neuron0x276bb90() {
   return input13;
}

double NNfunction-ss_dLcR::neuron0x276bed0() {
   return input14;
}

double NNfunction-ss_dLcR::neuron0x276c210() {
   return input15;
}

double NNfunction-ss_dLcR::neuron0x276c550() {
   return input16;
}

double NNfunction-ss_dLcR::neuron0x276cab0() {
   return input17;
}

double NNfunction-ss_dLcR::neuron0x276ccd0() {
   return input18;
}

double NNfunction-ss_dLcR::neuron0x276d010() {
   return input19;
}

double NNfunction-ss_dLcR::neuron0x276d350() {
   return input20;
}

double NNfunction-ss_dLcR::neuron0x276d690() {
   return input21;
}

double NNfunction-ss_dLcR::neuron0x276d9d0() {
   return input22;
}

double NNfunction-ss_dLcR::neuron0x276dd10() {
   return input23;
}

double NNfunction-ss_dLcR::input0x276e180() {
   double input = -1.19344;
   input += synapse0x2769160();
   input += synapse0x27691a0();
   input += synapse0x276e430();
   input += synapse0x276e470();
   input += synapse0x276e4b0();
   input += synapse0x276e4f0();
   input += synapse0x276e530();
   input += synapse0x276e570();
   input += synapse0x276e5b0();
   input += synapse0x276e5f0();
   input += synapse0x276e630();
   input += synapse0x276e670();
   input += synapse0x276e6b0();
   input += synapse0x276e6f0();
   input += synapse0x276e730();
   input += synapse0x276e770();
   input += synapse0x27690d0();
   input += synapse0x2769110();
   input += synapse0x25242a0();
   input += synapse0x25242e0();
   input += synapse0x276e9d0();
   input += synapse0x276ea10();
   input += synapse0x276ea50();
   input += synapse0x276ea90();
   return input;
}

double NNfunction-ss_dLcR::neuron0x276e180() {
   double input = input0x276e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x276ead0() {
   double input = 0.645776;
   input += synapse0x276ee10();
   input += synapse0x276ee50();
   input += synapse0x276ee90();
   input += synapse0x276eed0();
   input += synapse0x276ef10();
   input += synapse0x276ef50();
   input += synapse0x276ef90();
   input += synapse0x276efd0();
   input += synapse0x276f010();
   input += synapse0x276e8c0();
   input += synapse0x276e900();
   input += synapse0x276e940();
   input += synapse0x276e980();
   input += synapse0x276f260();
   input += synapse0x276f2a0();
   input += synapse0x276f2e0();
   input += synapse0x276ec60();
   input += synapse0x276eca0();
   input += synapse0x276f430();
   input += synapse0x276f470();
   input += synapse0x276f4b0();
   input += synapse0x276f4f0();
   input += synapse0x276f530();
   input += synapse0x276f570();
   return input;
}

double NNfunction-ss_dLcR::neuron0x276ead0() {
   double input = input0x276ead0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x276f5b0() {
   double input = -1.67495;
   input += synapse0x276f8f0();
   input += synapse0x276f930();
   input += synapse0x276f970();
   input += synapse0x276f9b0();
   input += synapse0x276f9f0();
   input += synapse0x276fa30();
   input += synapse0x276fa70();
   input += synapse0x276fab0();
   input += synapse0x276faf0();
   input += synapse0x276fb30();
   input += synapse0x276fb70();
   input += synapse0x276fbb0();
   input += synapse0x276fbf0();
   input += synapse0x276fc30();
   input += synapse0x276fc70();
   input += synapse0x276fcb0();
   input += synapse0x276f740();
   input += synapse0x276f780();
   input += synapse0x2758250();
   input += synapse0x25321a0();
   input += synapse0x25321e0();
   input += synapse0x264d6f0();
   input += synapse0x264d730();
   input += synapse0x2768f40();
   return input;
}

double NNfunction-ss_dLcR::neuron0x276f5b0() {
   double input = input0x276f5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2532900() {
   double input = 0.56822;
   input += synapse0x2532a90();
   input += synapse0x276f170();
   input += synapse0x276f1b0();
   input += synapse0x276f1f0();
   input += synapse0x276fe00();
   input += synapse0x276fe40();
   input += synapse0x276fe80();
   input += synapse0x276fec0();
   input += synapse0x276ff00();
   input += synapse0x276ff40();
   input += synapse0x276ff80();
   input += synapse0x276ffc0();
   input += synapse0x2770000();
   input += synapse0x2770040();
   input += synapse0x2770080();
   input += synapse0x27700c0();
   input += synapse0x2768f80();
   input += synapse0x2768fc0();
   input += synapse0x2769000();
   input += synapse0x2770210();
   input += synapse0x2770250();
   input += synapse0x2770290();
   input += synapse0x27702d0();
   input += synapse0x2770310();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2532900() {
   double input = input0x2532900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2770350() {
   double input = -0.169419;
   input += synapse0x2770690();
   input += synapse0x27706d0();
   input += synapse0x2770710();
   input += synapse0x2770750();
   input += synapse0x2770790();
   input += synapse0x27707d0();
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
   input += synapse0x27704e0();
   input += synapse0x2770520();
   input += synapse0x2770ba0();
   input += synapse0x2770be0();
   input += synapse0x2770c20();
   input += synapse0x2770c60();
   input += synapse0x2770ca0();
   input += synapse0x2770ce0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2770350() {
   double input = input0x2770350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2770d20() {
   double input = 0.905246;
   input += synapse0x2771060();
   input += synapse0x27710a0();
   input += synapse0x27710e0();
   input += synapse0x2771120();
   input += synapse0x2771160();
   input += synapse0x27711a0();
   input += synapse0x27711e0();
   input += synapse0x2771220();
   input += synapse0x2771260();
   input += synapse0x25324f0();
   input += synapse0x2532530();
   input += synapse0x2532570();
   input += synapse0x25325b0();
   input += synapse0x25325f0();
   input += synapse0x2532630();
   input += synapse0x2532670();
   input += synapse0x2770eb0();
   input += synapse0x2770ef0();
   input += synapse0x25327c0();
   input += synapse0x2532800();
   input += synapse0x2532840();
   input += synapse0x2532880();
   input += synapse0x25328c0();
   input += synapse0x2771ab0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2770d20() {
   double input = input0x2770d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2771af0() {
   double input = -1.08535;
   input += synapse0x2771e30();
   input += synapse0x2771e70();
   input += synapse0x2771eb0();
   input += synapse0x2771ef0();
   input += synapse0x2771f30();
   input += synapse0x2771f70();
   input += synapse0x2771fb0();
   input += synapse0x2771ff0();
   input += synapse0x2772030();
   input += synapse0x2772070();
   input += synapse0x27720b0();
   input += synapse0x27720f0();
   input += synapse0x2772130();
   input += synapse0x2772170();
   input += synapse0x27721b0();
   input += synapse0x27721f0();
   input += synapse0x2771c80();
   input += synapse0x2771cc0();
   input += synapse0x2772340();
   input += synapse0x2772380();
   input += synapse0x27723c0();
   input += synapse0x2772400();
   input += synapse0x2772440();
   input += synapse0x2772480();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2771af0() {
   double input = input0x2771af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27724c0() {
   double input = 0.0136236;
   input += synapse0x2772800();
   input += synapse0x2772840();
   input += synapse0x2772880();
   input += synapse0x27728c0();
   input += synapse0x2772900();
   input += synapse0x2772940();
   input += synapse0x2772980();
   input += synapse0x27729c0();
   input += synapse0x2772a00();
   input += synapse0x2772a40();
   input += synapse0x2772a80();
   input += synapse0x2772ac0();
   input += synapse0x2772b00();
   input += synapse0x2772b40();
   input += synapse0x2772b80();
   input += synapse0x2772bc0();
   input += synapse0x2772650();
   input += synapse0x2772690();
   input += synapse0x2772d10();
   input += synapse0x2772d50();
   input += synapse0x2772d90();
   input += synapse0x2772dd0();
   input += synapse0x2772e10();
   input += synapse0x2772e50();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27724c0() {
   double input = input0x27724c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2772e90() {
   double input = -0.494973;
   input += synapse0x276c9a0();
   input += synapse0x276c9e0();
   input += synapse0x276ca20();
   input += synapse0x276ca60();
   input += synapse0x27733e0();
   input += synapse0x2773420();
   input += synapse0x2773460();
   input += synapse0x27734a0();
   input += synapse0x27734e0();
   input += synapse0x2773520();
   input += synapse0x2773560();
   input += synapse0x27735a0();
   input += synapse0x27735e0();
   input += synapse0x2773620();
   input += synapse0x2773660();
   input += synapse0x27736a0();
   input += synapse0x2773020();
   input += synapse0x2773060();
   input += synapse0x27737f0();
   input += synapse0x2773830();
   input += synapse0x2773870();
   input += synapse0x27738b0();
   input += synapse0x27738f0();
   input += synapse0x2773930();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2772e90() {
   double input = input0x2772e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2773970() {
   double input = 0.533931;
   input += synapse0x2773cb0();
   input += synapse0x2773cf0();
   input += synapse0x2773d30();
   input += synapse0x2773d70();
   input += synapse0x2773db0();
   input += synapse0x2773df0();
   input += synapse0x2773e30();
   input += synapse0x2773e70();
   input += synapse0x2773eb0();
   input += synapse0x2773ef0();
   input += synapse0x2773f30();
   input += synapse0x2773f70();
   input += synapse0x2773fb0();
   input += synapse0x2773ff0();
   input += synapse0x2774030();
   input += synapse0x2774070();
   input += synapse0x2773b00();
   input += synapse0x2773b40();
   input += synapse0x27741c0();
   input += synapse0x2774200();
   input += synapse0x2774240();
   input += synapse0x2774280();
   input += synapse0x27742c0();
   input += synapse0x2774300();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2773970() {
   double input = input0x2773970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2774340() {
   double input = 0.622679;
   input += synapse0x2774680();
   input += synapse0x27746c0();
   input += synapse0x2774700();
   input += synapse0x2774740();
   input += synapse0x2774780();
   input += synapse0x27747c0();
   input += synapse0x2774800();
   input += synapse0x2774840();
   input += synapse0x2774880();
   input += synapse0x27748c0();
   input += synapse0x2774900();
   input += synapse0x2774940();
   input += synapse0x2774980();
   input += synapse0x27749c0();
   input += synapse0x2774a00();
   input += synapse0x2774a40();
   input += synapse0x27744d0();
   input += synapse0x2774510();
   input += synapse0x27712a0();
   input += synapse0x27712e0();
   input += synapse0x2771320();
   input += synapse0x2771360();
   input += synapse0x27713a0();
   input += synapse0x27713e0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2774340() {
   double input = input0x2774340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2771420() {
   double input = 1.6711;
   input += synapse0x2771760();
   input += synapse0x27717a0();
   input += synapse0x27717e0();
   input += synapse0x2771820();
   input += synapse0x2771860();
   input += synapse0x27718a0();
   input += synapse0x27718e0();
   input += synapse0x2771920();
   input += synapse0x2771960();
   input += synapse0x27719a0();
   input += synapse0x27719e0();
   input += synapse0x2771a20();
   input += synapse0x2771a60();
   input += synapse0x2775ba0();
   input += synapse0x2775be0();
   input += synapse0x2775c20();
   input += synapse0x27715b0();
   input += synapse0x27715f0();
   input += synapse0x2775d70();
   input += synapse0x2775db0();
   input += synapse0x2775df0();
   input += synapse0x2775e30();
   input += synapse0x2775e70();
   input += synapse0x2775eb0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2771420() {
   double input = input0x2771420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2775ef0() {
   double input = -0.501936;
   input += synapse0x2776230();
   input += synapse0x2776270();
   input += synapse0x27762b0();
   input += synapse0x27762f0();
   input += synapse0x2776330();
   input += synapse0x2776370();
   input += synapse0x27763b0();
   input += synapse0x27763f0();
   input += synapse0x2776430();
   input += synapse0x2776470();
   input += synapse0x27764b0();
   input += synapse0x27764f0();
   input += synapse0x2776530();
   input += synapse0x2776570();
   input += synapse0x27765b0();
   input += synapse0x27765f0();
   input += synapse0x2776080();
   input += synapse0x27760c0();
   input += synapse0x2776740();
   input += synapse0x2776780();
   input += synapse0x27767c0();
   input += synapse0x2776800();
   input += synapse0x2776840();
   input += synapse0x2776880();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2775ef0() {
   double input = input0x2775ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27768c0() {
   double input = 4.64533;
   input += synapse0x2776c00();
   input += synapse0x2776c40();
   input += synapse0x2776c80();
   input += synapse0x2776cc0();
   input += synapse0x2776d00();
   input += synapse0x2776d40();
   input += synapse0x2776d80();
   input += synapse0x2776dc0();
   input += synapse0x2776e00();
   input += synapse0x2776e40();
   input += synapse0x2776e80();
   input += synapse0x2776ec0();
   input += synapse0x2776f00();
   input += synapse0x2776f40();
   input += synapse0x2776f80();
   input += synapse0x2776fc0();
   input += synapse0x2776a50();
   input += synapse0x2776a90();
   input += synapse0x2777110();
   input += synapse0x2777150();
   input += synapse0x2777190();
   input += synapse0x27771d0();
   input += synapse0x2777210();
   input += synapse0x2777250();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27768c0() {
   double input = input0x27768c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2777290() {
   double input = 0.354927;
   input += synapse0x27775d0();
   input += synapse0x2777610();
   input += synapse0x2777650();
   input += synapse0x2777690();
   input += synapse0x27776d0();
   input += synapse0x2777710();
   input += synapse0x2777750();
   input += synapse0x2777790();
   input += synapse0x27777d0();
   input += synapse0x2777810();
   input += synapse0x2777850();
   input += synapse0x2777890();
   input += synapse0x27778d0();
   input += synapse0x2777910();
   input += synapse0x2777950();
   input += synapse0x2777990();
   input += synapse0x2777420();
   input += synapse0x2777460();
   input += synapse0x2777ae0();
   input += synapse0x2777b20();
   input += synapse0x2777b60();
   input += synapse0x2777ba0();
   input += synapse0x2777be0();
   input += synapse0x2777c20();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2777290() {
   double input = input0x2777290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2777c60() {
   double input = 0.893607;
   input += synapse0x2777fa0();
   input += synapse0x2769370();
   input += synapse0x27693b0();
   input += synapse0x27696b0();
   input += synapse0x27696f0();
   input += synapse0x27699f0();
   input += synapse0x2769a30();
   input += synapse0x2769d30();
   input += synapse0x2769d70();
   input += synapse0x276a070();
   input += synapse0x276a0b0();
   input += synapse0x276a3b0();
   input += synapse0x276a3f0();
   input += synapse0x276a6f0();
   input += synapse0x276a730();
   input += synapse0x276aa30();
   input += synapse0x276aa70();
   input += synapse0x276ad70();
   input += synapse0x276adb0();
   input += synapse0x276b0b0();
   input += synapse0x276b0f0();
   input += synapse0x276b3f0();
   input += synapse0x276b430();
   input += synapse0x276b730();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2777c60() {
   double input = input0x2777c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2779a70() {
   double input = -0.0846041;
   input += synapse0x276b770();
   input += synapse0x276c430();
   input += synapse0x276c470();
   input += synapse0x2777df0();
   input += synapse0x2777e30();
   input += synapse0x276c770();
   input += synapse0x276c7b0();
   input += synapse0x2524180();
   input += synapse0x25241c0();
   input += synapse0x276cef0();
   input += synapse0x276cf30();
   input += synapse0x276d230();
   input += synapse0x276d270();
   input += synapse0x276d570();
   input += synapse0x276d5b0();
   input += synapse0x276d8b0();
   input += synapse0x276d8f0();
   input += synapse0x276dbf0();
   input += synapse0x276dc30();
   input += synapse0x276df30();
   input += synapse0x276df70();
   input += synapse0x276ba70();
   input += synapse0x276bab0();
   input += synapse0x2779d10();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2779a70() {
   double input = input0x2779a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2779d50() {
   double input = -0.660902;
   input += synapse0x277a090();
   input += synapse0x277a0d0();
   input += synapse0x277a110();
   input += synapse0x277a150();
   input += synapse0x277a190();
   input += synapse0x277a1d0();
   input += synapse0x277a210();
   input += synapse0x277a250();
   input += synapse0x277a290();
   input += synapse0x277a2d0();
   input += synapse0x277a310();
   input += synapse0x277a350();
   input += synapse0x277a390();
   input += synapse0x277a3d0();
   input += synapse0x277a410();
   input += synapse0x277a450();
   input += synapse0x2779ee0();
   input += synapse0x2779f20();
   input += synapse0x277a5a0();
   input += synapse0x277a5e0();
   input += synapse0x277a620();
   input += synapse0x277a660();
   input += synapse0x277a6a0();
   input += synapse0x277a6e0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2779d50() {
   double input = input0x2779d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277a720() {
   double input = 0.447744;
   input += synapse0x277aa60();
   input += synapse0x277aaa0();
   input += synapse0x277aae0();
   input += synapse0x277ab20();
   input += synapse0x277ab60();
   input += synapse0x277aba0();
   input += synapse0x277abe0();
   input += synapse0x277ac20();
   input += synapse0x277ac60();
   input += synapse0x277aca0();
   input += synapse0x277ace0();
   input += synapse0x277ad20();
   input += synapse0x277ad60();
   input += synapse0x277ada0();
   input += synapse0x277ade0();
   input += synapse0x277ae20();
   input += synapse0x277a8b0();
   input += synapse0x277a8f0();
   input += synapse0x277af70();
   input += synapse0x277afb0();
   input += synapse0x277aff0();
   input += synapse0x277b030();
   input += synapse0x277b070();
   input += synapse0x277b0b0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277a720() {
   double input = input0x277a720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277b0f0() {
   double input = 0.631214;
   input += synapse0x277b430();
   input += synapse0x277b470();
   input += synapse0x277b4b0();
   input += synapse0x277b4f0();
   input += synapse0x277b530();
   input += synapse0x277b570();
   input += synapse0x277b5b0();
   input += synapse0x277b5f0();
   input += synapse0x277b630();
   input += synapse0x277b670();
   input += synapse0x277b6b0();
   input += synapse0x277b6f0();
   input += synapse0x277b730();
   input += synapse0x277b770();
   input += synapse0x277b7b0();
   input += synapse0x277b7f0();
   input += synapse0x277b280();
   input += synapse0x277b2c0();
   input += synapse0x277b940();
   input += synapse0x277b980();
   input += synapse0x277b9c0();
   input += synapse0x277ba00();
   input += synapse0x277ba40();
   input += synapse0x277ba80();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277b0f0() {
   double input = input0x277b0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277bac0() {
   double input = 1.02987;
   input += synapse0x277be00();
   input += synapse0x277be40();
   input += synapse0x277be80();
   input += synapse0x277bec0();
   input += synapse0x277bf00();
   input += synapse0x277bf40();
   input += synapse0x277bf80();
   input += synapse0x277bfc0();
   input += synapse0x277c000();
   input += synapse0x277c040();
   input += synapse0x277c080();
   input += synapse0x277c0c0();
   input += synapse0x277c100();
   input += synapse0x277c140();
   input += synapse0x277c180();
   input += synapse0x277c1c0();
   input += synapse0x277bc50();
   input += synapse0x277bc90();
   input += synapse0x277c310();
   input += synapse0x277c350();
   input += synapse0x277c390();
   input += synapse0x277c3d0();
   input += synapse0x277c410();
   input += synapse0x277c450();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277bac0() {
   double input = input0x277bac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277c490() {
   double input = 0.386669;
   input += synapse0x277c7d0();
   input += synapse0x277c810();
   input += synapse0x277c850();
   input += synapse0x277c890();
   input += synapse0x277c8d0();
   input += synapse0x277c910();
   input += synapse0x277c950();
   input += synapse0x277c990();
   input += synapse0x277c9d0();
   input += synapse0x2774b90();
   input += synapse0x2774bd0();
   input += synapse0x2774c10();
   input += synapse0x2774c50();
   input += synapse0x2774c90();
   input += synapse0x2774cd0();
   input += synapse0x2774d10();
   input += synapse0x277c620();
   input += synapse0x277c660();
   input += synapse0x2774e60();
   input += synapse0x2774ea0();
   input += synapse0x2774ee0();
   input += synapse0x2774f20();
   input += synapse0x2774f60();
   input += synapse0x2774fa0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277c490() {
   double input = input0x277c490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2774fe0() {
   double input = 0.436376;
   input += synapse0x2775320();
   input += synapse0x2775360();
   input += synapse0x27753a0();
   input += synapse0x27753e0();
   input += synapse0x2775420();
   input += synapse0x2775460();
   input += synapse0x27754a0();
   input += synapse0x27754e0();
   input += synapse0x2775520();
   input += synapse0x2775560();
   input += synapse0x27755a0();
   input += synapse0x27755e0();
   input += synapse0x2775620();
   input += synapse0x2775660();
   input += synapse0x27756a0();
   input += synapse0x27756e0();
   input += synapse0x2775170();
   input += synapse0x27751b0();
   input += synapse0x2775830();
   input += synapse0x2775870();
   input += synapse0x27758b0();
   input += synapse0x27758f0();
   input += synapse0x2775930();
   input += synapse0x2775970();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2774fe0() {
   double input = input0x2774fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27759b0() {
   double input = 0.763328;
   input += synapse0x2775b40();
   input += synapse0x277ebd0();
   input += synapse0x277ec10();
   input += synapse0x277ec50();
   input += synapse0x277ec90();
   input += synapse0x277ecd0();
   input += synapse0x277ed10();
   input += synapse0x277ed50();
   input += synapse0x277ed90();
   input += synapse0x277edd0();
   input += synapse0x277ee10();
   input += synapse0x277ee50();
   input += synapse0x277ee90();
   input += synapse0x277eed0();
   input += synapse0x277ef10();
   input += synapse0x277ef50();
   input += synapse0x277ea20();
   input += synapse0x277ea60();
   input += synapse0x277f0a0();
   input += synapse0x277f0e0();
   input += synapse0x277f120();
   input += synapse0x277f160();
   input += synapse0x277f1a0();
   input += synapse0x277f1e0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27759b0() {
   double input = input0x27759b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277f220() {
   double input = 0.238268;
   input += synapse0x277f560();
   input += synapse0x277f5a0();
   input += synapse0x277f5e0();
   input += synapse0x277f620();
   input += synapse0x277f660();
   input += synapse0x277f6a0();
   input += synapse0x277f6e0();
   input += synapse0x277f720();
   input += synapse0x277f760();
   input += synapse0x277f7a0();
   input += synapse0x277f7e0();
   input += synapse0x277f820();
   input += synapse0x277f860();
   input += synapse0x277f8a0();
   input += synapse0x277f8e0();
   input += synapse0x277f920();
   input += synapse0x277f3b0();
   input += synapse0x277f3f0();
   input += synapse0x277fa70();
   input += synapse0x277fab0();
   input += synapse0x277faf0();
   input += synapse0x277fb30();
   input += synapse0x277fb70();
   input += synapse0x277fbb0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277f220() {
   double input = input0x277f220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277fbf0() {
   double input = 0.888667;
   input += synapse0x277ff30();
   input += synapse0x277ff70();
   input += synapse0x277ffb0();
   input += synapse0x277fff0();
   input += synapse0x2780030();
   input += synapse0x2780070();
   input += synapse0x27800b0();
   input += synapse0x27800f0();
   input += synapse0x2780130();
   input += synapse0x2780170();
   input += synapse0x27801b0();
   input += synapse0x27801f0();
   input += synapse0x2780230();
   input += synapse0x2780270();
   input += synapse0x27802b0();
   input += synapse0x27802f0();
   input += synapse0x277fd80();
   input += synapse0x277fdc0();
   input += synapse0x2780440();
   input += synapse0x2780480();
   input += synapse0x27804c0();
   input += synapse0x2780500();
   input += synapse0x2780540();
   input += synapse0x2780580();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277fbf0() {
   double input = input0x277fbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27805c0() {
   double input = -1.84516;
   input += synapse0x2780900();
   input += synapse0x2780940();
   input += synapse0x2780980();
   input += synapse0x27809c0();
   input += synapse0x2780a00();
   input += synapse0x2780a40();
   input += synapse0x2780a80();
   input += synapse0x2780ac0();
   input += synapse0x2780b00();
   input += synapse0x2780b40();
   input += synapse0x2780b80();
   input += synapse0x2780bc0();
   input += synapse0x2780c00();
   input += synapse0x2780c40();
   input += synapse0x2780c80();
   input += synapse0x2780cc0();
   input += synapse0x2780750();
   input += synapse0x2780790();
   input += synapse0x2780e10();
   input += synapse0x2780e50();
   input += synapse0x2780e90();
   input += synapse0x2780ed0();
   input += synapse0x2780f10();
   input += synapse0x2780f50();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27805c0() {
   double input = input0x27805c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2780f90() {
   double input = -1.19922;
   input += synapse0x27812d0();
   input += synapse0x2781310();
   input += synapse0x2781350();
   input += synapse0x2781390();
   input += synapse0x27813d0();
   input += synapse0x2781410();
   input += synapse0x2781450();
   input += synapse0x2781490();
   input += synapse0x27814d0();
   input += synapse0x2781510();
   input += synapse0x2781550();
   input += synapse0x2781590();
   input += synapse0x27815d0();
   input += synapse0x2781610();
   input += synapse0x2781650();
   input += synapse0x2781690();
   input += synapse0x2781120();
   input += synapse0x2781160();
   input += synapse0x27817e0();
   input += synapse0x2781820();
   input += synapse0x2781860();
   input += synapse0x27818a0();
   input += synapse0x27818e0();
   input += synapse0x2781920();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2780f90() {
   double input = input0x2780f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2781960() {
   double input = -0.443177;
   input += synapse0x2781ca0();
   input += synapse0x2781ce0();
   input += synapse0x2781d20();
   input += synapse0x2781d60();
   input += synapse0x2781da0();
   input += synapse0x2781de0();
   input += synapse0x2781e20();
   input += synapse0x2781e60();
   input += synapse0x2781ea0();
   input += synapse0x2781ee0();
   input += synapse0x2781f20();
   input += synapse0x2781f60();
   input += synapse0x2781fa0();
   input += synapse0x2781fe0();
   input += synapse0x2782020();
   input += synapse0x2782060();
   input += synapse0x2781af0();
   input += synapse0x2781b30();
   input += synapse0x27821b0();
   input += synapse0x27821f0();
   input += synapse0x2782230();
   input += synapse0x2782270();
   input += synapse0x27822b0();
   input += synapse0x27822f0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2781960() {
   double input = input0x2781960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2782330() {
   double input = 0.00908168;
   input += synapse0x2782670();
   input += synapse0x27826b0();
   input += synapse0x27826f0();
   input += synapse0x2782730();
   input += synapse0x2782770();
   input += synapse0x27827b0();
   input += synapse0x27827f0();
   input += synapse0x2782830();
   input += synapse0x2782870();
   input += synapse0x27828b0();
   input += synapse0x27828f0();
   input += synapse0x2782930();
   input += synapse0x2782970();
   input += synapse0x27829b0();
   input += synapse0x27829f0();
   input += synapse0x2782a30();
   input += synapse0x27824c0();
   input += synapse0x2782500();
   input += synapse0x2782b80();
   input += synapse0x2782bc0();
   input += synapse0x2782c00();
   input += synapse0x2782c40();
   input += synapse0x2782c80();
   input += synapse0x2782cc0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2782330() {
   double input = input0x2782330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2782d00() {
   double input = -0.271093;
   input += synapse0x2783040();
   input += synapse0x2783080();
   input += synapse0x27830c0();
   input += synapse0x2783100();
   input += synapse0x2783140();
   input += synapse0x2783180();
   input += synapse0x27831c0();
   input += synapse0x2783200();
   input += synapse0x2783240();
   input += synapse0x2783280();
   input += synapse0x27832c0();
   input += synapse0x2783300();
   input += synapse0x2783340();
   input += synapse0x2783380();
   input += synapse0x27833c0();
   input += synapse0x2783400();
   input += synapse0x2782e90();
   input += synapse0x2782ed0();
   input += synapse0x2783550();
   input += synapse0x2783590();
   input += synapse0x27835d0();
   input += synapse0x2783610();
   input += synapse0x2783650();
   input += synapse0x2783690();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2782d00() {
   double input = input0x2782d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27836d0() {
   double input = -0.356157;
   input += synapse0x2783a10();
   input += synapse0x2777fe0();
   input += synapse0x2778020();
   input += synapse0x2778060();
   input += synapse0x27782b0();
   input += synapse0x27782f0();
   input += synapse0x2778330();
   input += synapse0x2778580();
   input += synapse0x27785c0();
   input += synapse0x2778810();
   input += synapse0x2778850();
   input += synapse0x2778890();
   input += synapse0x2778ae0();
   input += synapse0x2778b20();
   input += synapse0x2778d70();
   input += synapse0x2778db0();
   input += synapse0x2783860();
   input += synapse0x27838a0();
   input += synapse0x2778f00();
   input += synapse0x2779410();
   input += synapse0x2779450();
   input += synapse0x2779490();
   input += synapse0x27796e0();
   input += synapse0x2779720();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27836d0() {
   double input = input0x27836d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2779760() {
   double input = 0.348832;
   input += synapse0x2778fd0();
   input += synapse0x2779010();
   input += synapse0x2779050();
   input += synapse0x2779090();
   input += synapse0x2779a10();
   input += synapse0x2785d60();
   input += synapse0x2785da0();
   input += synapse0x2785de0();
   input += synapse0x2785e20();
   input += synapse0x2785e60();
   input += synapse0x2785ea0();
   input += synapse0x2785ee0();
   input += synapse0x2785f20();
   input += synapse0x2785f60();
   input += synapse0x2785fa0();
   input += synapse0x2785fe0();
   input += synapse0x27798f0();
   input += synapse0x2779930();
   input += synapse0x2786130();
   input += synapse0x2786170();
   input += synapse0x27861b0();
   input += synapse0x27861f0();
   input += synapse0x2786230();
   input += synapse0x2786270();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2779760() {
   double input = input0x2779760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27862b0() {
   double input = -1.16503;
   input += synapse0x27865f0();
   input += synapse0x2786630();
   input += synapse0x2786670();
   input += synapse0x27866b0();
   input += synapse0x27866f0();
   input += synapse0x2786730();
   input += synapse0x2786770();
   input += synapse0x27867b0();
   input += synapse0x27867f0();
   input += synapse0x2786830();
   input += synapse0x2786870();
   input += synapse0x27868b0();
   input += synapse0x27868f0();
   input += synapse0x2786930();
   input += synapse0x2786970();
   input += synapse0x27869b0();
   input += synapse0x2786440();
   input += synapse0x2786480();
   input += synapse0x2786b00();
   input += synapse0x2786b40();
   input += synapse0x2786b80();
   input += synapse0x2786bc0();
   input += synapse0x2786c00();
   input += synapse0x2786c40();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27862b0() {
   double input = input0x27862b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2786c80() {
   double input = 0.292047;
   input += synapse0x2786fc0();
   input += synapse0x2787000();
   input += synapse0x2787040();
   input += synapse0x2787080();
   input += synapse0x27870c0();
   input += synapse0x2787100();
   input += synapse0x2787140();
   input += synapse0x2787180();
   input += synapse0x27871c0();
   input += synapse0x2787200();
   input += synapse0x2787240();
   input += synapse0x2787280();
   input += synapse0x27872c0();
   input += synapse0x2787300();
   input += synapse0x2787340();
   input += synapse0x2787380();
   input += synapse0x2786e10();
   input += synapse0x2786e50();
   input += synapse0x27874d0();
   input += synapse0x2787510();
   input += synapse0x2787550();
   input += synapse0x2787590();
   input += synapse0x27875d0();
   input += synapse0x2787610();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2786c80() {
   double input = input0x2786c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2787650() {
   double input = -0.315963;
   input += synapse0x2787990();
   input += synapse0x27879d0();
   input += synapse0x2787a10();
   input += synapse0x2787a50();
   input += synapse0x2787a90();
   input += synapse0x2787ad0();
   input += synapse0x2787b10();
   input += synapse0x2787b50();
   input += synapse0x2787b90();
   input += synapse0x2787bd0();
   input += synapse0x2787c10();
   input += synapse0x2787c50();
   input += synapse0x2787c90();
   input += synapse0x2787cd0();
   input += synapse0x2787d10();
   input += synapse0x2787d50();
   input += synapse0x27877e0();
   input += synapse0x2787820();
   input += synapse0x2787ea0();
   input += synapse0x2787ee0();
   input += synapse0x2787f20();
   input += synapse0x2787f60();
   input += synapse0x2787fa0();
   input += synapse0x2787fe0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2787650() {
   double input = input0x2787650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2788020() {
   double input = -0.329195;
   input += synapse0x2788360();
   input += synapse0x27883a0();
   input += synapse0x27883e0();
   input += synapse0x2788420();
   input += synapse0x2788460();
   input += synapse0x27884a0();
   input += synapse0x27884e0();
   input += synapse0x2788520();
   input += synapse0x2788560();
   input += synapse0x27885a0();
   input += synapse0x27885e0();
   input += synapse0x2788620();
   input += synapse0x2788660();
   input += synapse0x27886a0();
   input += synapse0x27886e0();
   input += synapse0x2788720();
   input += synapse0x27881b0();
   input += synapse0x27881f0();
   input += synapse0x2788870();
   input += synapse0x27888b0();
   input += synapse0x27888f0();
   input += synapse0x2788930();
   input += synapse0x2788970();
   input += synapse0x27889b0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2788020() {
   double input = input0x2788020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27889f0() {
   double input = -0.385707;
   input += synapse0x2788d30();
   input += synapse0x2788d70();
   input += synapse0x2788db0();
   input += synapse0x2788df0();
   input += synapse0x2788e30();
   input += synapse0x2788e70();
   input += synapse0x2788eb0();
   input += synapse0x2788ef0();
   input += synapse0x2788f30();
   input += synapse0x2788f70();
   input += synapse0x2788fb0();
   input += synapse0x2788ff0();
   input += synapse0x2789030();
   input += synapse0x2789070();
   input += synapse0x27890b0();
   input += synapse0x27890f0();
   input += synapse0x2788b80();
   input += synapse0x2788bc0();
   input += synapse0x2789240();
   input += synapse0x2789280();
   input += synapse0x27892c0();
   input += synapse0x2789300();
   input += synapse0x2789340();
   input += synapse0x2789380();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27889f0() {
   double input = input0x27889f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27893c0() {
   double input = 0.671265;
   input += synapse0x2789700();
   input += synapse0x2789740();
   input += synapse0x2789780();
   input += synapse0x27897c0();
   input += synapse0x2789800();
   input += synapse0x2789840();
   input += synapse0x2789880();
   input += synapse0x27898c0();
   input += synapse0x2789900();
   input += synapse0x2789940();
   input += synapse0x2789980();
   input += synapse0x27899c0();
   input += synapse0x2789a00();
   input += synapse0x2789a40();
   input += synapse0x2789a80();
   input += synapse0x2789ac0();
   input += synapse0x2789550();
   input += synapse0x2789590();
   input += synapse0x2789c10();
   input += synapse0x2789c50();
   input += synapse0x2789c90();
   input += synapse0x2789cd0();
   input += synapse0x2789d10();
   input += synapse0x2789d50();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27893c0() {
   double input = input0x27893c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2789d90() {
   double input = 0.603392;
   input += synapse0x278a0d0();
   input += synapse0x278a110();
   input += synapse0x278a150();
   input += synapse0x278a190();
   input += synapse0x278a1d0();
   input += synapse0x278a210();
   input += synapse0x278a250();
   input += synapse0x278a290();
   input += synapse0x278a2d0();
   input += synapse0x278a310();
   input += synapse0x278a350();
   input += synapse0x278a390();
   input += synapse0x278a3d0();
   input += synapse0x278a410();
   input += synapse0x278a450();
   input += synapse0x278a490();
   input += synapse0x2789f20();
   input += synapse0x2789f60();
   input += synapse0x278a5e0();
   input += synapse0x278a620();
   input += synapse0x278a660();
   input += synapse0x278a6a0();
   input += synapse0x278a6e0();
   input += synapse0x278a720();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2789d90() {
   double input = input0x2789d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x278a760() {
   double input = -0.353402;
   input += synapse0x27731d0();
   input += synapse0x2773210();
   input += synapse0x2773250();
   input += synapse0x2773290();
   input += synapse0x27732d0();
   input += synapse0x2773310();
   input += synapse0x2773350();
   input += synapse0x2773390();
   input += synapse0x278aeb0();
   input += synapse0x278aef0();
   input += synapse0x278af30();
   input += synapse0x278af70();
   input += synapse0x278afb0();
   input += synapse0x278aff0();
   input += synapse0x278b030();
   input += synapse0x278b070();
   input += synapse0x278a8f0();
   input += synapse0x278a930();
   input += synapse0x278b1c0();
   input += synapse0x278b200();
   input += synapse0x278b240();
   input += synapse0x278b280();
   input += synapse0x278b2c0();
   input += synapse0x278b300();
   return input;
}

double NNfunction-ss_dLcR::neuron0x278a760() {
   double input = input0x278a760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x278b340() {
   double input = -2.93522;
   input += synapse0x278b680();
   input += synapse0x278b6c0();
   input += synapse0x278b700();
   input += synapse0x278b740();
   input += synapse0x278b780();
   input += synapse0x278b7c0();
   input += synapse0x278b800();
   input += synapse0x278b840();
   input += synapse0x278b880();
   input += synapse0x278b8c0();
   input += synapse0x278b900();
   input += synapse0x278b940();
   input += synapse0x278b980();
   input += synapse0x278b9c0();
   input += synapse0x278ba00();
   input += synapse0x278ba40();
   input += synapse0x278b4d0();
   input += synapse0x278b510();
   input += synapse0x278bb90();
   input += synapse0x278bbd0();
   input += synapse0x278bc10();
   input += synapse0x278bc50();
   input += synapse0x278bc90();
   input += synapse0x278bcd0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x278b340() {
   double input = input0x278b340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x278bd10() {
   double input = -0.999266;
   input += synapse0x278c050();
   input += synapse0x278c090();
   input += synapse0x278c0d0();
   input += synapse0x278c110();
   input += synapse0x278c150();
   input += synapse0x278c190();
   input += synapse0x278c1d0();
   input += synapse0x278c210();
   input += synapse0x278c250();
   input += synapse0x278c290();
   input += synapse0x278c2d0();
   input += synapse0x278c310();
   input += synapse0x278c350();
   input += synapse0x278c390();
   input += synapse0x278c3d0();
   input += synapse0x278c410();
   input += synapse0x278bea0();
   input += synapse0x278bee0();
   input += synapse0x277ca10();
   input += synapse0x277ca50();
   input += synapse0x277ca90();
   input += synapse0x277cad0();
   input += synapse0x277cb10();
   input += synapse0x277cb50();
   return input;
}

double NNfunction-ss_dLcR::neuron0x278bd10() {
   double input = input0x278bd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277cb90() {
   double input = -1.97581;
   input += synapse0x277ced0();
   input += synapse0x277cf10();
   input += synapse0x277cf50();
   input += synapse0x277cf90();
   input += synapse0x277cfd0();
   input += synapse0x277d010();
   input += synapse0x277d050();
   input += synapse0x277d090();
   input += synapse0x277d0d0();
   input += synapse0x277d110();
   input += synapse0x277d150();
   input += synapse0x277d190();
   input += synapse0x277d1d0();
   input += synapse0x277d210();
   input += synapse0x277d250();
   input += synapse0x277d290();
   input += synapse0x277cd20();
   input += synapse0x277cd60();
   input += synapse0x277d3e0();
   input += synapse0x277d420();
   input += synapse0x277d460();
   input += synapse0x277d4a0();
   input += synapse0x277d4e0();
   input += synapse0x277d520();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277cb90() {
   double input = input0x277cb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277d560() {
   double input = -0.298116;
   input += synapse0x277d8a0();
   input += synapse0x277d8e0();
   input += synapse0x277d920();
   input += synapse0x277d960();
   input += synapse0x277d9a0();
   input += synapse0x277d9e0();
   input += synapse0x277da20();
   input += synapse0x277da60();
   input += synapse0x277daa0();
   input += synapse0x277dae0();
   input += synapse0x277db20();
   input += synapse0x277db60();
   input += synapse0x277dba0();
   input += synapse0x277dbe0();
   input += synapse0x277dc20();
   input += synapse0x277dc60();
   input += synapse0x277d6f0();
   input += synapse0x277d730();
   input += synapse0x277ddb0();
   input += synapse0x277ddf0();
   input += synapse0x277de30();
   input += synapse0x277de70();
   input += synapse0x277deb0();
   input += synapse0x277def0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277d560() {
   double input = input0x277d560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x277df30() {
   double input = 0.559939;
   input += synapse0x277e270();
   input += synapse0x277e2b0();
   input += synapse0x277e2f0();
   input += synapse0x277e330();
   input += synapse0x277e370();
   input += synapse0x277e3b0();
   input += synapse0x277e3f0();
   input += synapse0x277e430();
   input += synapse0x277e470();
   input += synapse0x277e4b0();
   input += synapse0x277e4f0();
   input += synapse0x277e530();
   input += synapse0x277e570();
   input += synapse0x277e5b0();
   input += synapse0x277e5f0();
   input += synapse0x277e630();
   input += synapse0x277e0c0();
   input += synapse0x277e100();
   input += synapse0x277e780();
   input += synapse0x277e7c0();
   input += synapse0x277e800();
   input += synapse0x277e840();
   input += synapse0x277e880();
   input += synapse0x277e8c0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x277df30() {
   double input = input0x277df30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2790570() {
   double input = -0.0268036;
   input += synapse0x2790790();
   input += synapse0x27907d0();
   input += synapse0x2790810();
   input += synapse0x2790850();
   input += synapse0x2790890();
   input += synapse0x27908d0();
   input += synapse0x2790910();
   input += synapse0x2790950();
   input += synapse0x2790990();
   input += synapse0x27909d0();
   input += synapse0x2790a10();
   input += synapse0x2790a50();
   input += synapse0x2790a90();
   input += synapse0x2790ad0();
   input += synapse0x2790b10();
   input += synapse0x2790b50();
   input += synapse0x277e900();
   input += synapse0x277e940();
   input += synapse0x2790ca0();
   input += synapse0x2790ce0();
   input += synapse0x2790d20();
   input += synapse0x2790d60();
   input += synapse0x2790da0();
   input += synapse0x2790de0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2790570() {
   double input = input0x2790570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2790e20() {
   double input = -0.49714;
   input += synapse0x2791160();
   input += synapse0x27911a0();
   input += synapse0x27911e0();
   input += synapse0x2791220();
   input += synapse0x2791260();
   input += synapse0x27912a0();
   input += synapse0x27912e0();
   input += synapse0x2791320();
   input += synapse0x2791360();
   input += synapse0x27913a0();
   input += synapse0x27913e0();
   input += synapse0x2791420();
   input += synapse0x2791460();
   input += synapse0x27914a0();
   input += synapse0x27914e0();
   input += synapse0x2791520();
   input += synapse0x2790fb0();
   input += synapse0x2790ff0();
   input += synapse0x2791670();
   input += synapse0x27916b0();
   input += synapse0x27916f0();
   input += synapse0x2791730();
   input += synapse0x2791770();
   input += synapse0x27917b0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2790e20() {
   double input = input0x2790e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27917f0() {
   double input = 4.20889;
   input += synapse0x2791b30();
   input += synapse0x2791b70();
   input += synapse0x2791bb0();
   input += synapse0x2791bf0();
   input += synapse0x2791c30();
   input += synapse0x2791c70();
   input += synapse0x2791cb0();
   input += synapse0x2791cf0();
   input += synapse0x2791d30();
   input += synapse0x2791d70();
   input += synapse0x2791db0();
   input += synapse0x2791df0();
   input += synapse0x2791e30();
   input += synapse0x2791e70();
   input += synapse0x2791eb0();
   input += synapse0x2791ef0();
   input += synapse0x2791980();
   input += synapse0x27919c0();
   input += synapse0x2792040();
   input += synapse0x2792080();
   input += synapse0x27920c0();
   input += synapse0x2792100();
   input += synapse0x2792140();
   input += synapse0x2792180();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27917f0() {
   double input = input0x27917f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27921c0() {
   double input = 0.441373;
   input += synapse0x2792500();
   input += synapse0x2792540();
   input += synapse0x2792580();
   input += synapse0x27925c0();
   input += synapse0x2792600();
   input += synapse0x2792640();
   input += synapse0x2792680();
   input += synapse0x27926c0();
   input += synapse0x2792700();
   input += synapse0x2792740();
   input += synapse0x2792780();
   input += synapse0x27927c0();
   input += synapse0x2792800();
   input += synapse0x2792840();
   input += synapse0x2792880();
   input += synapse0x27928c0();
   input += synapse0x2792350();
   input += synapse0x2792390();
   input += synapse0x2792a10();
   input += synapse0x2792a50();
   input += synapse0x2792a90();
   input += synapse0x2792ad0();
   input += synapse0x2792b10();
   input += synapse0x2792b50();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27921c0() {
   double input = input0x27921c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x27993c0() {
   double input = -0.284844;
   input += synapse0x276f0e0();
   input += synapse0x276f120();
   input += synapse0x2770600();
   input += synapse0x2770640();
   input += synapse0x2770fd0();
   input += synapse0x2771010();
   input += synapse0x2771da0();
   input += synapse0x2771de0();
   input += synapse0x2772770();
   input += synapse0x27727b0();
   input += synapse0x2773140();
   input += synapse0x2773180();
   input += synapse0x2773c20();
   input += synapse0x2773c60();
   input += synapse0x27745f0();
   input += synapse0x2774630();
   input += synapse0x27716d0();
   input += synapse0x2771710();
   input += synapse0x27761a0();
   input += synapse0x27761e0();
   input += synapse0x2776b70();
   input += synapse0x2776bb0();
   input += synapse0x2777540();
   input += synapse0x2777580();
   input += synapse0x2777f10();
   input += synapse0x2777f50();
   input += synapse0x276c0f0();
   input += synapse0x276c130();
   input += synapse0x277a000();
   input += synapse0x277a040();
   input += synapse0x277a9d0();
   input += synapse0x277aa10();
   input += synapse0x277b3a0();
   input += synapse0x277b3e0();
   input += synapse0x277bd70();
   input += synapse0x277bdb0();
   input += synapse0x277c740();
   input += synapse0x277c780();
   input += synapse0x2775290();
   input += synapse0x27752d0();
   input += synapse0x277eb40();
   input += synapse0x277eb80();
   input += synapse0x277f4d0();
   input += synapse0x277f510();
   input += synapse0x277fea0();
   input += synapse0x277fee0();
   input += synapse0x2780870();
   input += synapse0x27808b0();
   input += synapse0x2781240();
   input += synapse0x2781280();
   return input;
}

double NNfunction-ss_dLcR::neuron0x27993c0() {
   double input = input0x27993c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2799760() {
   double input = -0.283984;
   input += synapse0x2783980();
   input += synapse0x27839c0();
   input += synapse0x2778f40();
   input += synapse0x2778f80();
   input += synapse0x2786560();
   input += synapse0x27865a0();
   input += synapse0x2786f30();
   input += synapse0x2786f70();
   input += synapse0x2787900();
   input += synapse0x2787940();
   input += synapse0x27882d0();
   input += synapse0x2788310();
   input += synapse0x2788ca0();
   input += synapse0x2788ce0();
   input += synapse0x2789670();
   input += synapse0x27896b0();
   input += synapse0x278a040();
   input += synapse0x278a080();
   input += synapse0x278aa10();
   input += synapse0x278aa50();
   input += synapse0x278b5f0();
   input += synapse0x278b630();
   input += synapse0x278bfc0();
   input += synapse0x278c000();
   input += synapse0x277ce40();
   input += synapse0x277ce80();
   input += synapse0x277d810();
   input += synapse0x277d850();
   input += synapse0x277e1e0();
   input += synapse0x277e220();
   input += synapse0x2790700();
   input += synapse0x2790740();
   input += synapse0x27910d0();
   input += synapse0x2791110();
   input += synapse0x2791aa0();
   input += synapse0x2791ae0();
   input += synapse0x2792470();
   input += synapse0x27924b0();
   input += synapse0x276e3a0();
   input += synapse0x276e3e0();
   input += synapse0x2781c10();
   input += synapse0x2781c50();
   input += synapse0x2792b90();
   input += synapse0x2792bd0();
   input += synapse0x2792c10();
   input += synapse0x2792c50();
   input += synapse0x2799b00();
   input += synapse0x2799b40();
   input += synapse0x2799b80();
   input += synapse0x2799bc0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2799760() {
   double input = input0x2799760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x2799c00() {
   double input = -1.54578;
   input += synapse0x2799f40();
   input += synapse0x2799f80();
   input += synapse0x2799fc0();
   input += synapse0x279a000();
   input += synapse0x279a040();
   input += synapse0x279a080();
   input += synapse0x279a0c0();
   input += synapse0x279a100();
   input += synapse0x279a140();
   input += synapse0x279a180();
   input += synapse0x279a1c0();
   input += synapse0x279a200();
   input += synapse0x279a240();
   input += synapse0x279a280();
   input += synapse0x279a2c0();
   input += synapse0x279a300();
   input += synapse0x2799d90();
   input += synapse0x2799dd0();
   input += synapse0x279a450();
   input += synapse0x279a490();
   input += synapse0x279a4d0();
   input += synapse0x279a510();
   input += synapse0x279a550();
   input += synapse0x279a590();
   input += synapse0x279a5d0();
   input += synapse0x279a610();
   input += synapse0x279a650();
   input += synapse0x279a690();
   input += synapse0x279a6d0();
   input += synapse0x279a710();
   input += synapse0x279a750();
   input += synapse0x279a790();
   input += synapse0x279a340();
   input += synapse0x279a380();
   input += synapse0x279a3c0();
   input += synapse0x279a400();
   input += synapse0x279a9e0();
   input += synapse0x279aa20();
   input += synapse0x279aa60();
   input += synapse0x279aaa0();
   input += synapse0x279aae0();
   input += synapse0x279ab20();
   input += synapse0x279ab60();
   input += synapse0x279aba0();
   input += synapse0x279abe0();
   input += synapse0x279ac20();
   input += synapse0x279ac60();
   input += synapse0x279aca0();
   input += synapse0x279ace0();
   input += synapse0x279ad20();
   return input;
}

double NNfunction-ss_dLcR::neuron0x2799c00() {
   double input = input0x2799c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x279ad60() {
   double input = 0.804251;
   input += synapse0x279b0a0();
   input += synapse0x279b0e0();
   input += synapse0x279b120();
   input += synapse0x279b160();
   input += synapse0x279b1a0();
   input += synapse0x279b1e0();
   input += synapse0x279b220();
   input += synapse0x279b260();
   input += synapse0x279b2a0();
   input += synapse0x279b2e0();
   input += synapse0x279b320();
   input += synapse0x279b360();
   input += synapse0x279b3a0();
   input += synapse0x279b3e0();
   input += synapse0x279b420();
   input += synapse0x279b460();
   input += synapse0x279aef0();
   input += synapse0x279af30();
   input += synapse0x279b5b0();
   input += synapse0x279b5f0();
   input += synapse0x279b630();
   input += synapse0x279b670();
   input += synapse0x279b6b0();
   input += synapse0x279b6f0();
   input += synapse0x279b730();
   input += synapse0x279b770();
   input += synapse0x279b7b0();
   input += synapse0x279b7f0();
   input += synapse0x279b830();
   input += synapse0x279b870();
   input += synapse0x279b8b0();
   input += synapse0x279b8f0();
   input += synapse0x279b4a0();
   input += synapse0x279b4e0();
   input += synapse0x279b520();
   input += synapse0x279b560();
   input += synapse0x279bb40();
   input += synapse0x279bb80();
   input += synapse0x279bbc0();
   input += synapse0x279bc00();
   input += synapse0x279bc40();
   input += synapse0x279bc80();
   input += synapse0x279bcc0();
   input += synapse0x279bd00();
   input += synapse0x279bd40();
   input += synapse0x279bd80();
   input += synapse0x279bdc0();
   input += synapse0x279be00();
   input += synapse0x279be40();
   input += synapse0x279be80();
   return input;
}

double NNfunction-ss_dLcR::neuron0x279ad60() {
   double input = input0x279ad60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x279bec0() {
   double input = 0.222878;
   input += synapse0x279c200();
   input += synapse0x279c240();
   input += synapse0x279c280();
   input += synapse0x279c2c0();
   input += synapse0x279c300();
   input += synapse0x279c340();
   input += synapse0x279c380();
   input += synapse0x279c3c0();
   input += synapse0x279c400();
   input += synapse0x279c440();
   input += synapse0x279c480();
   input += synapse0x279c4c0();
   input += synapse0x279c500();
   input += synapse0x279c540();
   input += synapse0x279c580();
   input += synapse0x279c5c0();
   input += synapse0x279c050();
   input += synapse0x279c090();
   input += synapse0x279c710();
   input += synapse0x279c750();
   input += synapse0x279c790();
   input += synapse0x279c7d0();
   input += synapse0x279c810();
   input += synapse0x279c850();
   input += synapse0x279c890();
   input += synapse0x279c8d0();
   input += synapse0x279c910();
   input += synapse0x279c950();
   input += synapse0x279c990();
   input += synapse0x279c9d0();
   input += synapse0x279ca10();
   input += synapse0x279ca50();
   input += synapse0x279c600();
   input += synapse0x279c640();
   input += synapse0x279c680();
   input += synapse0x279c6c0();
   input += synapse0x279cca0();
   input += synapse0x279cce0();
   input += synapse0x279cd20();
   input += synapse0x279cd60();
   input += synapse0x279cda0();
   input += synapse0x279cde0();
   input += synapse0x279ce20();
   input += synapse0x279ce60();
   input += synapse0x279cea0();
   input += synapse0x279cee0();
   input += synapse0x279cf20();
   input += synapse0x279cf60();
   input += synapse0x279cfa0();
   input += synapse0x279cfe0();
   return input;
}

double NNfunction-ss_dLcR::neuron0x279bec0() {
   double input = input0x279bec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLcR::input0x279d020() {
   double input = 4.78806;
   input += synapse0x279d240();
   input += synapse0x279d280();
   input += synapse0x279d2c0();
   input += synapse0x279d300();
   input += synapse0x279d340();
   return input;
}

double NNfunction-ss_dLcR::neuron0x279d020() {
   double input = input0x279d020();
   return (input * 1)+0;
}

double NNfunction-ss_dLcR::synapse0x2769160() {
   return (neuron0x27691e0()*-0.134655);
}

double NNfunction-ss_dLcR::synapse0x27691a0() {
   return (neuron0x2769490()*-0.0186779);
}

double NNfunction-ss_dLcR::synapse0x276e430() {
   return (neuron0x27697d0()*-0.0147757);
}

double NNfunction-ss_dLcR::synapse0x276e470() {
   return (neuron0x2769b10()*1.2367);
}

double NNfunction-ss_dLcR::synapse0x276e4b0() {
   return (neuron0x2769e50()*-0.162365);
}

double NNfunction-ss_dLcR::synapse0x276e4f0() {
   return (neuron0x276a190()*0.0330862);
}

double NNfunction-ss_dLcR::synapse0x276e530() {
   return (neuron0x276a4d0()*-0.045254);
}

double NNfunction-ss_dLcR::synapse0x276e570() {
   return (neuron0x276a810()*0.00120988);
}

double NNfunction-ss_dLcR::synapse0x276e5b0() {
   return (neuron0x276ab50()*0.10376);
}

double NNfunction-ss_dLcR::synapse0x276e5f0() {
   return (neuron0x276ae90()*0.00119775);
}

double NNfunction-ss_dLcR::synapse0x276e630() {
   return (neuron0x276b1d0()*-0.0442685);
}

double NNfunction-ss_dLcR::synapse0x276e670() {
   return (neuron0x276b510()*1.29411);
}

double NNfunction-ss_dLcR::synapse0x276e6b0() {
   return (neuron0x276b850()*0.0808561);
}

double NNfunction-ss_dLcR::synapse0x276e6f0() {
   return (neuron0x276bb90()*-0.0133459);
}

double NNfunction-ss_dLcR::synapse0x276e730() {
   return (neuron0x276bed0()*-0.0368182);
}

double NNfunction-ss_dLcR::synapse0x276e770() {
   return (neuron0x276c210()*-0.266552);
}

double NNfunction-ss_dLcR::synapse0x27690d0() {
   return (neuron0x276c550()*-0.0343803);
}

double NNfunction-ss_dLcR::synapse0x2769110() {
   return (neuron0x276cab0()*0.0440639);
}

double NNfunction-ss_dLcR::synapse0x25242a0() {
   return (neuron0x276ccd0()*-0.111071);
}

double NNfunction-ss_dLcR::synapse0x25242e0() {
   return (neuron0x276d010()*0.0431521);
}

double NNfunction-ss_dLcR::synapse0x276e9d0() {
   return (neuron0x276d350()*-0.00705903);
}

double NNfunction-ss_dLcR::synapse0x276ea10() {
   return (neuron0x276d690()*0.0239386);
}

double NNfunction-ss_dLcR::synapse0x276ea50() {
   return (neuron0x276d9d0()*-0.0358789);
}

double NNfunction-ss_dLcR::synapse0x276ea90() {
   return (neuron0x276dd10()*-0.0993266);
}

double NNfunction-ss_dLcR::synapse0x276ee10() {
   return (neuron0x27691e0()*0.0698986);
}

double NNfunction-ss_dLcR::synapse0x276ee50() {
   return (neuron0x2769490()*-0.300004);
}

double NNfunction-ss_dLcR::synapse0x276ee90() {
   return (neuron0x27697d0()*-0.226471);
}

double NNfunction-ss_dLcR::synapse0x276eed0() {
   return (neuron0x2769b10()*0.112715);
}

double NNfunction-ss_dLcR::synapse0x276ef10() {
   return (neuron0x2769e50()*-0.0888223);
}

double NNfunction-ss_dLcR::synapse0x276ef50() {
   return (neuron0x276a190()*0.258151);
}

double NNfunction-ss_dLcR::synapse0x276ef90() {
   return (neuron0x276a4d0()*0.383615);
}

double NNfunction-ss_dLcR::synapse0x276efd0() {
   return (neuron0x276a810()*0.0043484);
}

double NNfunction-ss_dLcR::synapse0x276f010() {
   return (neuron0x276ab50()*-0.253693);
}

double NNfunction-ss_dLcR::synapse0x276e8c0() {
   return (neuron0x276ae90()*1.16319);
}

double NNfunction-ss_dLcR::synapse0x276e900() {
   return (neuron0x276b1d0()*0.552268);
}

double NNfunction-ss_dLcR::synapse0x276e940() {
   return (neuron0x276b510()*-0.491241);
}

double NNfunction-ss_dLcR::synapse0x276e980() {
   return (neuron0x276b850()*-0.0663106);
}

double NNfunction-ss_dLcR::synapse0x276f260() {
   return (neuron0x276bb90()*-0.448089);
}

double NNfunction-ss_dLcR::synapse0x276f2a0() {
   return (neuron0x276bed0()*0.0797436);
}

double NNfunction-ss_dLcR::synapse0x276f2e0() {
   return (neuron0x276c210()*0.211618);
}

double NNfunction-ss_dLcR::synapse0x276ec60() {
   return (neuron0x276c550()*-0.497711);
}

double NNfunction-ss_dLcR::synapse0x276eca0() {
   return (neuron0x276cab0()*0.92248);
}

double NNfunction-ss_dLcR::synapse0x276f430() {
   return (neuron0x276ccd0()*0.634891);
}

double NNfunction-ss_dLcR::synapse0x276f470() {
   return (neuron0x276d010()*-0.367005);
}

double NNfunction-ss_dLcR::synapse0x276f4b0() {
   return (neuron0x276d350()*-0.0792278);
}

double NNfunction-ss_dLcR::synapse0x276f4f0() {
   return (neuron0x276d690()*0.250353);
}

double NNfunction-ss_dLcR::synapse0x276f530() {
   return (neuron0x276d9d0()*0.0580928);
}

double NNfunction-ss_dLcR::synapse0x276f570() {
   return (neuron0x276dd10()*0.636966);
}

double NNfunction-ss_dLcR::synapse0x276f8f0() {
   return (neuron0x27691e0()*-0.0557779);
}

double NNfunction-ss_dLcR::synapse0x276f930() {
   return (neuron0x2769490()*-0.00522804);
}

double NNfunction-ss_dLcR::synapse0x276f970() {
   return (neuron0x27697d0()*-0.121431);
}

double NNfunction-ss_dLcR::synapse0x276f9b0() {
   return (neuron0x2769b10()*0.0805267);
}

double NNfunction-ss_dLcR::synapse0x276f9f0() {
   return (neuron0x2769e50()*-0.0662093);
}

double NNfunction-ss_dLcR::synapse0x276fa30() {
   return (neuron0x276a190()*-0.0938897);
}

double NNfunction-ss_dLcR::synapse0x276fa70() {
   return (neuron0x276a4d0()*-0.0382884);
}

double NNfunction-ss_dLcR::synapse0x276fab0() {
   return (neuron0x276a810()*0.0113571);
}

double NNfunction-ss_dLcR::synapse0x276faf0() {
   return (neuron0x276ab50()*-0.0798099);
}

double NNfunction-ss_dLcR::synapse0x276fb30() {
   return (neuron0x276ae90()*-0.0627708);
}

double NNfunction-ss_dLcR::synapse0x276fb70() {
   return (neuron0x276b1d0()*-0.106279);
}

double NNfunction-ss_dLcR::synapse0x276fbb0() {
   return (neuron0x276b510()*0.471044);
}

double NNfunction-ss_dLcR::synapse0x276fbf0() {
   return (neuron0x276b850()*-0.0821686);
}

double NNfunction-ss_dLcR::synapse0x276fc30() {
   return (neuron0x276bb90()*0.00355254);
}

double NNfunction-ss_dLcR::synapse0x276fc70() {
   return (neuron0x276bed0()*-0.0184873);
}

double NNfunction-ss_dLcR::synapse0x276fcb0() {
   return (neuron0x276c210()*-0.692625);
}

double NNfunction-ss_dLcR::synapse0x276f740() {
   return (neuron0x276c550()*-0.0527018);
}

double NNfunction-ss_dLcR::synapse0x276f780() {
   return (neuron0x276cab0()*-0.0674752);
}

double NNfunction-ss_dLcR::synapse0x2758250() {
   return (neuron0x276ccd0()*-0.056758);
}

double NNfunction-ss_dLcR::synapse0x25321a0() {
   return (neuron0x276d010()*-0.0256293);
}

double NNfunction-ss_dLcR::synapse0x25321e0() {
   return (neuron0x276d350()*-0.0464949);
}

double NNfunction-ss_dLcR::synapse0x264d6f0() {
   return (neuron0x276d690()*-0.00831532);
}

double NNfunction-ss_dLcR::synapse0x264d730() {
   return (neuron0x276d9d0()*0.0381316);
}

double NNfunction-ss_dLcR::synapse0x2768f40() {
   return (neuron0x276dd10()*0.0230394);
}

double NNfunction-ss_dLcR::synapse0x2532a90() {
   return (neuron0x27691e0()*-0.01074);
}

double NNfunction-ss_dLcR::synapse0x276f170() {
   return (neuron0x2769490()*0.00564651);
}

double NNfunction-ss_dLcR::synapse0x276f1b0() {
   return (neuron0x27697d0()*0.155249);
}

double NNfunction-ss_dLcR::synapse0x276f1f0() {
   return (neuron0x2769b10()*-0.0820898);
}

double NNfunction-ss_dLcR::synapse0x276fe00() {
   return (neuron0x2769e50()*0.220544);
}

double NNfunction-ss_dLcR::synapse0x276fe40() {
   return (neuron0x276a190()*0.225201);
}

double NNfunction-ss_dLcR::synapse0x276fe80() {
   return (neuron0x276a4d0()*-0.68621);
}

double NNfunction-ss_dLcR::synapse0x276fec0() {
   return (neuron0x276a810()*-0.115355);
}

double NNfunction-ss_dLcR::synapse0x276ff00() {
   return (neuron0x276ab50()*-0.61893);
}

double NNfunction-ss_dLcR::synapse0x276ff40() {
   return (neuron0x276ae90()*0.358498);
}

double NNfunction-ss_dLcR::synapse0x276ff80() {
   return (neuron0x276b1d0()*0.500671);
}

double NNfunction-ss_dLcR::synapse0x276ffc0() {
   return (neuron0x276b510()*0.175338);
}

double NNfunction-ss_dLcR::synapse0x2770000() {
   return (neuron0x276b850()*-0.371577);
}

double NNfunction-ss_dLcR::synapse0x2770040() {
   return (neuron0x276bb90()*0.388197);
}

double NNfunction-ss_dLcR::synapse0x2770080() {
   return (neuron0x276bed0()*0.180873);
}

double NNfunction-ss_dLcR::synapse0x27700c0() {
   return (neuron0x276c210()*0.622721);
}

double NNfunction-ss_dLcR::synapse0x2768f80() {
   return (neuron0x276c550()*0.481029);
}

double NNfunction-ss_dLcR::synapse0x2768fc0() {
   return (neuron0x276cab0()*0.899908);
}

double NNfunction-ss_dLcR::synapse0x2769000() {
   return (neuron0x276ccd0()*0.274597);
}

double NNfunction-ss_dLcR::synapse0x2770210() {
   return (neuron0x276d010()*0.0635811);
}

double NNfunction-ss_dLcR::synapse0x2770250() {
   return (neuron0x276d350()*-0.0984444);
}

double NNfunction-ss_dLcR::synapse0x2770290() {
   return (neuron0x276d690()*0.191937);
}

double NNfunction-ss_dLcR::synapse0x27702d0() {
   return (neuron0x276d9d0()*-0.280952);
}

double NNfunction-ss_dLcR::synapse0x2770310() {
   return (neuron0x276dd10()*-0.331458);
}

double NNfunction-ss_dLcR::synapse0x2770690() {
   return (neuron0x27691e0()*-0.0516777);
}

double NNfunction-ss_dLcR::synapse0x27706d0() {
   return (neuron0x2769490()*0.722571);
}

double NNfunction-ss_dLcR::synapse0x2770710() {
   return (neuron0x27697d0()*0.859819);
}

double NNfunction-ss_dLcR::synapse0x2770750() {
   return (neuron0x2769b10()*-0.593099);
}

double NNfunction-ss_dLcR::synapse0x2770790() {
   return (neuron0x2769e50()*1.04592);
}

double NNfunction-ss_dLcR::synapse0x27707d0() {
   return (neuron0x276a190()*0.762969);
}

double NNfunction-ss_dLcR::synapse0x2770810() {
   return (neuron0x276a4d0()*0.30379);
}

double NNfunction-ss_dLcR::synapse0x2770850() {
   return (neuron0x276a810()*0.303193);
}

double NNfunction-ss_dLcR::synapse0x2770890() {
   return (neuron0x276ab50()*-0.535928);
}

double NNfunction-ss_dLcR::synapse0x27708d0() {
   return (neuron0x276ae90()*0.168396);
}

double NNfunction-ss_dLcR::synapse0x2770910() {
   return (neuron0x276b1d0()*-0.345937);
}

double NNfunction-ss_dLcR::synapse0x2770950() {
   return (neuron0x276b510()*0.401853);
}

double NNfunction-ss_dLcR::synapse0x2770990() {
   return (neuron0x276b850()*0.118533);
}

double NNfunction-ss_dLcR::synapse0x27709d0() {
   return (neuron0x276bb90()*-0.477444);
}

double NNfunction-ss_dLcR::synapse0x2770a10() {
   return (neuron0x276bed0()*-0.402309);
}

double NNfunction-ss_dLcR::synapse0x2770a50() {
   return (neuron0x276c210()*-0.325517);
}

double NNfunction-ss_dLcR::synapse0x27704e0() {
   return (neuron0x276c550()*-0.351767);
}

double NNfunction-ss_dLcR::synapse0x2770520() {
   return (neuron0x276cab0()*0.441735);
}

double NNfunction-ss_dLcR::synapse0x2770ba0() {
   return (neuron0x276ccd0()*-0.270186);
}

double NNfunction-ss_dLcR::synapse0x2770be0() {
   return (neuron0x276d010()*-0.817719);
}

double NNfunction-ss_dLcR::synapse0x2770c20() {
   return (neuron0x276d350()*-0.187988);
}

double NNfunction-ss_dLcR::synapse0x2770c60() {
   return (neuron0x276d690()*-0.111679);
}

double NNfunction-ss_dLcR::synapse0x2770ca0() {
   return (neuron0x276d9d0()*-0.0355313);
}

double NNfunction-ss_dLcR::synapse0x2770ce0() {
   return (neuron0x276dd10()*-0.354039);
}

double NNfunction-ss_dLcR::synapse0x2771060() {
   return (neuron0x27691e0()*-0.0880857);
}

double NNfunction-ss_dLcR::synapse0x27710a0() {
   return (neuron0x2769490()*0.161798);
}

double NNfunction-ss_dLcR::synapse0x27710e0() {
   return (neuron0x27697d0()*-0.129778);
}

double NNfunction-ss_dLcR::synapse0x2771120() {
   return (neuron0x2769b10()*0.551141);
}

double NNfunction-ss_dLcR::synapse0x2771160() {
   return (neuron0x2769e50()*0.259176);
}

double NNfunction-ss_dLcR::synapse0x27711a0() {
   return (neuron0x276a190()*0.368815);
}

double NNfunction-ss_dLcR::synapse0x27711e0() {
   return (neuron0x276a4d0()*-0.420205);
}

double NNfunction-ss_dLcR::synapse0x2771220() {
   return (neuron0x276a810()*0.232115);
}

double NNfunction-ss_dLcR::synapse0x2771260() {
   return (neuron0x276ab50()*-0.416738);
}

double NNfunction-ss_dLcR::synapse0x25324f0() {
   return (neuron0x276ae90()*0.247581);
}

double NNfunction-ss_dLcR::synapse0x2532530() {
   return (neuron0x276b1d0()*0.431163);
}

double NNfunction-ss_dLcR::synapse0x2532570() {
   return (neuron0x276b510()*0.164716);
}

double NNfunction-ss_dLcR::synapse0x25325b0() {
   return (neuron0x276b850()*-0.268935);
}

double NNfunction-ss_dLcR::synapse0x25325f0() {
   return (neuron0x276bb90()*0.270729);
}

double NNfunction-ss_dLcR::synapse0x2532630() {
   return (neuron0x276bed0()*0.16097);
}

double NNfunction-ss_dLcR::synapse0x2532670() {
   return (neuron0x276c210()*0.525262);
}

double NNfunction-ss_dLcR::synapse0x2770eb0() {
   return (neuron0x276c550()*0.45729);
}

double NNfunction-ss_dLcR::synapse0x2770ef0() {
   return (neuron0x276cab0()*0.529444);
}

double NNfunction-ss_dLcR::synapse0x25327c0() {
   return (neuron0x276ccd0()*0.0982265);
}

double NNfunction-ss_dLcR::synapse0x2532800() {
   return (neuron0x276d010()*-0.00362397);
}

double NNfunction-ss_dLcR::synapse0x2532840() {
   return (neuron0x276d350()*0.183641);
}

double NNfunction-ss_dLcR::synapse0x2532880() {
   return (neuron0x276d690()*0.245773);
}

double NNfunction-ss_dLcR::synapse0x25328c0() {
   return (neuron0x276d9d0()*-0.121652);
}

double NNfunction-ss_dLcR::synapse0x2771ab0() {
   return (neuron0x276dd10()*-0.0670999);
}

double NNfunction-ss_dLcR::synapse0x2771e30() {
   return (neuron0x27691e0()*0.0821085);
}

double NNfunction-ss_dLcR::synapse0x2771e70() {
   return (neuron0x2769490()*-0.121776);
}

double NNfunction-ss_dLcR::synapse0x2771eb0() {
   return (neuron0x27697d0()*0.640388);
}

double NNfunction-ss_dLcR::synapse0x2771ef0() {
   return (neuron0x2769b10()*0.578282);
}

double NNfunction-ss_dLcR::synapse0x2771f30() {
   return (neuron0x2769e50()*0.217178);
}

double NNfunction-ss_dLcR::synapse0x2771f70() {
   return (neuron0x276a190()*0.159912);
}

double NNfunction-ss_dLcR::synapse0x2771fb0() {
   return (neuron0x276a4d0()*0.158416);
}

double NNfunction-ss_dLcR::synapse0x2771ff0() {
   return (neuron0x276a810()*0.140844);
}

double NNfunction-ss_dLcR::synapse0x2772030() {
   return (neuron0x276ab50()*0.171235);
}

double NNfunction-ss_dLcR::synapse0x2772070() {
   return (neuron0x276ae90()*0.247945);
}

double NNfunction-ss_dLcR::synapse0x27720b0() {
   return (neuron0x276b1d0()*0.205288);
}

double NNfunction-ss_dLcR::synapse0x27720f0() {
   return (neuron0x276b510()*-0.308418);
}

double NNfunction-ss_dLcR::synapse0x2772130() {
   return (neuron0x276b850()*0.0952131);
}

double NNfunction-ss_dLcR::synapse0x2772170() {
   return (neuron0x276bb90()*-0.0374296);
}

double NNfunction-ss_dLcR::synapse0x27721b0() {
   return (neuron0x276bed0()*0.0426989);
}

double NNfunction-ss_dLcR::synapse0x27721f0() {
   return (neuron0x276c210()*-0.670041);
}

double NNfunction-ss_dLcR::synapse0x2771c80() {
   return (neuron0x276c550()*0.193484);
}

double NNfunction-ss_dLcR::synapse0x2771cc0() {
   return (neuron0x276cab0()*0.0954898);
}

double NNfunction-ss_dLcR::synapse0x2772340() {
   return (neuron0x276ccd0()*0.0209871);
}

double NNfunction-ss_dLcR::synapse0x2772380() {
   return (neuron0x276d010()*-0.0479269);
}

double NNfunction-ss_dLcR::synapse0x27723c0() {
   return (neuron0x276d350()*0.0523202);
}

double NNfunction-ss_dLcR::synapse0x2772400() {
   return (neuron0x276d690()*0.0645062);
}

double NNfunction-ss_dLcR::synapse0x2772440() {
   return (neuron0x276d9d0()*-0.0218843);
}

double NNfunction-ss_dLcR::synapse0x2772480() {
   return (neuron0x276dd10()*-0.039817);
}

double NNfunction-ss_dLcR::synapse0x2772800() {
   return (neuron0x27691e0()*0.0741225);
}

double NNfunction-ss_dLcR::synapse0x2772840() {
   return (neuron0x2769490()*-0.849007);
}

double NNfunction-ss_dLcR::synapse0x2772880() {
   return (neuron0x27697d0()*0.901818);
}

double NNfunction-ss_dLcR::synapse0x27728c0() {
   return (neuron0x2769b10()*0.250233);
}

double NNfunction-ss_dLcR::synapse0x2772900() {
   return (neuron0x2769e50()*0.740652);
}

double NNfunction-ss_dLcR::synapse0x2772940() {
   return (neuron0x276a190()*-0.1231);
}

double NNfunction-ss_dLcR::synapse0x2772980() {
   return (neuron0x276a4d0()*0.366723);
}

double NNfunction-ss_dLcR::synapse0x27729c0() {
   return (neuron0x276a810()*0.0685569);
}

double NNfunction-ss_dLcR::synapse0x2772a00() {
   return (neuron0x276ab50()*-0.638369);
}

double NNfunction-ss_dLcR::synapse0x2772a40() {
   return (neuron0x276ae90()*0.392097);
}

double NNfunction-ss_dLcR::synapse0x2772a80() {
   return (neuron0x276b1d0()*0.0169075);
}

double NNfunction-ss_dLcR::synapse0x2772ac0() {
   return (neuron0x276b510()*-0.764152);
}

double NNfunction-ss_dLcR::synapse0x2772b00() {
   return (neuron0x276b850()*0.20379);
}

double NNfunction-ss_dLcR::synapse0x2772b40() {
   return (neuron0x276bb90()*-0.505093);
}

double NNfunction-ss_dLcR::synapse0x2772b80() {
   return (neuron0x276bed0()*-0.749985);
}

double NNfunction-ss_dLcR::synapse0x2772bc0() {
   return (neuron0x276c210()*1.02373);
}

double NNfunction-ss_dLcR::synapse0x2772650() {
   return (neuron0x276c550()*-0.029576);
}

double NNfunction-ss_dLcR::synapse0x2772690() {
   return (neuron0x276cab0()*-0.126499);
}

double NNfunction-ss_dLcR::synapse0x2772d10() {
   return (neuron0x276ccd0()*0.105924);
}

double NNfunction-ss_dLcR::synapse0x2772d50() {
   return (neuron0x276d010()*0.0284019);
}

double NNfunction-ss_dLcR::synapse0x2772d90() {
   return (neuron0x276d350()*-0.962226);
}

double NNfunction-ss_dLcR::synapse0x2772dd0() {
   return (neuron0x276d690()*-0.0332644);
}

double NNfunction-ss_dLcR::synapse0x2772e10() {
   return (neuron0x276d9d0()*0.198497);
}

double NNfunction-ss_dLcR::synapse0x2772e50() {
   return (neuron0x276dd10()*0.125088);
}

double NNfunction-ss_dLcR::synapse0x276c9a0() {
   return (neuron0x27691e0()*-0.0930213);
}

double NNfunction-ss_dLcR::synapse0x276c9e0() {
   return (neuron0x2769490()*0.87212);
}

double NNfunction-ss_dLcR::synapse0x276ca20() {
   return (neuron0x27697d0()*0.22916);
}

double NNfunction-ss_dLcR::synapse0x276ca60() {
   return (neuron0x2769b10()*0.253358);
}

double NNfunction-ss_dLcR::synapse0x27733e0() {
   return (neuron0x2769e50()*-0.0861711);
}

double NNfunction-ss_dLcR::synapse0x2773420() {
   return (neuron0x276a190()*-0.195707);
}

double NNfunction-ss_dLcR::synapse0x2773460() {
   return (neuron0x276a4d0()*0.402248);
}

double NNfunction-ss_dLcR::synapse0x27734a0() {
   return (neuron0x276a810()*-0.0443429);
}

double NNfunction-ss_dLcR::synapse0x27734e0() {
   return (neuron0x276ab50()*0.635779);
}

double NNfunction-ss_dLcR::synapse0x2773520() {
   return (neuron0x276ae90()*0.559522);
}

double NNfunction-ss_dLcR::synapse0x2773560() {
   return (neuron0x276b1d0()*0.295698);
}

double NNfunction-ss_dLcR::synapse0x27735a0() {
   return (neuron0x276b510()*0.0117252);
}

double NNfunction-ss_dLcR::synapse0x27735e0() {
   return (neuron0x276b850()*0.178952);
}

double NNfunction-ss_dLcR::synapse0x2773620() {
   return (neuron0x276bb90()*0.34768);
}

double NNfunction-ss_dLcR::synapse0x2773660() {
   return (neuron0x276bed0()*-0.0480873);
}

double NNfunction-ss_dLcR::synapse0x27736a0() {
   return (neuron0x276c210()*-1.00639);
}

double NNfunction-ss_dLcR::synapse0x2773020() {
   return (neuron0x276c550()*0.168153);
}

double NNfunction-ss_dLcR::synapse0x2773060() {
   return (neuron0x276cab0()*0.78532);
}

double NNfunction-ss_dLcR::synapse0x27737f0() {
   return (neuron0x276ccd0()*0.135664);
}

double NNfunction-ss_dLcR::synapse0x2773830() {
   return (neuron0x276d010()*-0.0378095);
}

double NNfunction-ss_dLcR::synapse0x2773870() {
   return (neuron0x276d350()*0.363361);
}

double NNfunction-ss_dLcR::synapse0x27738b0() {
   return (neuron0x276d690()*0.12311);
}

double NNfunction-ss_dLcR::synapse0x27738f0() {
   return (neuron0x276d9d0()*-0.304644);
}

double NNfunction-ss_dLcR::synapse0x2773930() {
   return (neuron0x276dd10()*-0.480064);
}

double NNfunction-ss_dLcR::synapse0x2773cb0() {
   return (neuron0x27691e0()*-0.373463);
}

double NNfunction-ss_dLcR::synapse0x2773cf0() {
   return (neuron0x2769490()*0.457892);
}

double NNfunction-ss_dLcR::synapse0x2773d30() {
   return (neuron0x27697d0()*-1.08879);
}

double NNfunction-ss_dLcR::synapse0x2773d70() {
   return (neuron0x2769b10()*0.724135);
}

double NNfunction-ss_dLcR::synapse0x2773db0() {
   return (neuron0x2769e50()*0.121265);
}

double NNfunction-ss_dLcR::synapse0x2773df0() {
   return (neuron0x276a190()*-0.0292701);
}

double NNfunction-ss_dLcR::synapse0x2773e30() {
   return (neuron0x276a4d0()*-0.211089);
}

double NNfunction-ss_dLcR::synapse0x2773e70() {
   return (neuron0x276a810()*-0.20162);
}

double NNfunction-ss_dLcR::synapse0x2773eb0() {
   return (neuron0x276ab50()*0.0420067);
}

double NNfunction-ss_dLcR::synapse0x2773ef0() {
   return (neuron0x276ae90()*0.172577);
}

double NNfunction-ss_dLcR::synapse0x2773f30() {
   return (neuron0x276b1d0()*0.206015);
}

double NNfunction-ss_dLcR::synapse0x2773f70() {
   return (neuron0x276b510()*0.230728);
}

double NNfunction-ss_dLcR::synapse0x2773fb0() {
   return (neuron0x276b850()*-0.00837797);
}

double NNfunction-ss_dLcR::synapse0x2773ff0() {
   return (neuron0x276bb90()*-0.40971);
}

double NNfunction-ss_dLcR::synapse0x2774030() {
   return (neuron0x276bed0()*0.265739);
}

double NNfunction-ss_dLcR::synapse0x2774070() {
   return (neuron0x276c210()*0.365289);
}

double NNfunction-ss_dLcR::synapse0x2773b00() {
   return (neuron0x276c550()*0.514411);
}

double NNfunction-ss_dLcR::synapse0x2773b40() {
   return (neuron0x276cab0()*0.233742);
}

double NNfunction-ss_dLcR::synapse0x27741c0() {
   return (neuron0x276ccd0()*0.555495);
}

double NNfunction-ss_dLcR::synapse0x2774200() {
   return (neuron0x276d010()*-0.542897);
}

double NNfunction-ss_dLcR::synapse0x2774240() {
   return (neuron0x276d350()*-0.505804);
}

double NNfunction-ss_dLcR::synapse0x2774280() {
   return (neuron0x276d690()*0.184877);
}

double NNfunction-ss_dLcR::synapse0x27742c0() {
   return (neuron0x276d9d0()*-0.515219);
}

double NNfunction-ss_dLcR::synapse0x2774300() {
   return (neuron0x276dd10()*-0.0343277);
}

double NNfunction-ss_dLcR::synapse0x2774680() {
   return (neuron0x27691e0()*0.300911);
}

double NNfunction-ss_dLcR::synapse0x27746c0() {
   return (neuron0x2769490()*-0.160002);
}

double NNfunction-ss_dLcR::synapse0x2774700() {
   return (neuron0x27697d0()*0.124218);
}

double NNfunction-ss_dLcR::synapse0x2774740() {
   return (neuron0x2769b10()*-1.02303);
}

double NNfunction-ss_dLcR::synapse0x2774780() {
   return (neuron0x2769e50()*0.137517);
}

double NNfunction-ss_dLcR::synapse0x27747c0() {
   return (neuron0x276a190()*0.270864);
}

double NNfunction-ss_dLcR::synapse0x2774800() {
   return (neuron0x276a4d0()*0.0739886);
}

double NNfunction-ss_dLcR::synapse0x2774840() {
   return (neuron0x276a810()*-0.00365936);
}

double NNfunction-ss_dLcR::synapse0x2774880() {
   return (neuron0x276ab50()*0.340505);
}

double NNfunction-ss_dLcR::synapse0x27748c0() {
   return (neuron0x276ae90()*0.0767847);
}

double NNfunction-ss_dLcR::synapse0x2774900() {
   return (neuron0x276b1d0()*0.325742);
}

double NNfunction-ss_dLcR::synapse0x2774940() {
   return (neuron0x276b510()*0.224336);
}

double NNfunction-ss_dLcR::synapse0x2774980() {
   return (neuron0x276b850()*-0.00656102);
}

double NNfunction-ss_dLcR::synapse0x27749c0() {
   return (neuron0x276bb90()*-0.0308683);
}

double NNfunction-ss_dLcR::synapse0x2774a00() {
   return (neuron0x276bed0()*0.032409);
}

double NNfunction-ss_dLcR::synapse0x2774a40() {
   return (neuron0x276c210()*-0.438327);
}

double NNfunction-ss_dLcR::synapse0x27744d0() {
   return (neuron0x276c550()*0.117518);
}

double NNfunction-ss_dLcR::synapse0x2774510() {
   return (neuron0x276cab0()*0.084422);
}

double NNfunction-ss_dLcR::synapse0x27712a0() {
   return (neuron0x276ccd0()*0.13801);
}

double NNfunction-ss_dLcR::synapse0x27712e0() {
   return (neuron0x276d010()*0.0322791);
}

double NNfunction-ss_dLcR::synapse0x2771320() {
   return (neuron0x276d350()*0.06134);
}

double NNfunction-ss_dLcR::synapse0x2771360() {
   return (neuron0x276d690()*-0.0616299);
}

double NNfunction-ss_dLcR::synapse0x27713a0() {
   return (neuron0x276d9d0()*0.00734356);
}

double NNfunction-ss_dLcR::synapse0x27713e0() {
   return (neuron0x276dd10()*0.0351668);
}

double NNfunction-ss_dLcR::synapse0x2771760() {
   return (neuron0x27691e0()*-0.0147065);
}

double NNfunction-ss_dLcR::synapse0x27717a0() {
   return (neuron0x2769490()*0.0212712);
}

double NNfunction-ss_dLcR::synapse0x27717e0() {
   return (neuron0x27697d0()*0.0488247);
}

double NNfunction-ss_dLcR::synapse0x2771820() {
   return (neuron0x2769b10()*-0.156257);
}

double NNfunction-ss_dLcR::synapse0x2771860() {
   return (neuron0x2769e50()*-0.0446983);
}

double NNfunction-ss_dLcR::synapse0x27718a0() {
   return (neuron0x276a190()*-0.0408443);
}

double NNfunction-ss_dLcR::synapse0x27718e0() {
   return (neuron0x276a4d0()*-0.0122145);
}

double NNfunction-ss_dLcR::synapse0x2771920() {
   return (neuron0x276a810()*-0.0481358);
}

double NNfunction-ss_dLcR::synapse0x2771960() {
   return (neuron0x276ab50()*-0.0229084);
}

double NNfunction-ss_dLcR::synapse0x27719a0() {
   return (neuron0x276ae90()*-0.0152301);
}

double NNfunction-ss_dLcR::synapse0x27719e0() {
   return (neuron0x276b1d0()*-0.0237817);
}

double NNfunction-ss_dLcR::synapse0x2771a20() {
   return (neuron0x276b510()*-0.654034);
}

double NNfunction-ss_dLcR::synapse0x2771a60() {
   return (neuron0x276b850()*-0.00911099);
}

double NNfunction-ss_dLcR::synapse0x2775ba0() {
   return (neuron0x276bb90()*-0.0168781);
}

double NNfunction-ss_dLcR::synapse0x2775be0() {
   return (neuron0x276bed0()*-0.0080977);
}

double NNfunction-ss_dLcR::synapse0x2775c20() {
   return (neuron0x276c210()*-0.787266);
}

double NNfunction-ss_dLcR::synapse0x27715b0() {
   return (neuron0x276c550()*-0.0231706);
}

double NNfunction-ss_dLcR::synapse0x27715f0() {
   return (neuron0x276cab0()*0.00212533);
}

double NNfunction-ss_dLcR::synapse0x2775d70() {
   return (neuron0x276ccd0()*0.00741954);
}

double NNfunction-ss_dLcR::synapse0x2775db0() {
   return (neuron0x276d010()*-0.0096765);
}

double NNfunction-ss_dLcR::synapse0x2775df0() {
   return (neuron0x276d350()*-0.0162091);
}

double NNfunction-ss_dLcR::synapse0x2775e30() {
   return (neuron0x276d690()*-0.0137142);
}

double NNfunction-ss_dLcR::synapse0x2775e70() {
   return (neuron0x276d9d0()*-0.00524921);
}

double NNfunction-ss_dLcR::synapse0x2775eb0() {
   return (neuron0x276dd10()*0.0296228);
}

double NNfunction-ss_dLcR::synapse0x2776230() {
   return (neuron0x27691e0()*-0.133778);
}

double NNfunction-ss_dLcR::synapse0x2776270() {
   return (neuron0x2769490()*-0.28144);
}

double NNfunction-ss_dLcR::synapse0x27762b0() {
   return (neuron0x27697d0()*0.562557);
}

double NNfunction-ss_dLcR::synapse0x27762f0() {
   return (neuron0x2769b10()*1.16409);
}

double NNfunction-ss_dLcR::synapse0x2776330() {
   return (neuron0x2769e50()*-0.716566);
}

double NNfunction-ss_dLcR::synapse0x2776370() {
   return (neuron0x276a190()*-1.75768);
}

double NNfunction-ss_dLcR::synapse0x27763b0() {
   return (neuron0x276a4d0()*-0.833961);
}

double NNfunction-ss_dLcR::synapse0x27763f0() {
   return (neuron0x276a810()*-0.312568);
}

double NNfunction-ss_dLcR::synapse0x2776430() {
   return (neuron0x276ab50()*-0.600321);
}

double NNfunction-ss_dLcR::synapse0x2776470() {
   return (neuron0x276ae90()*-1.42104);
}

double NNfunction-ss_dLcR::synapse0x27764b0() {
   return (neuron0x276b1d0()*-2.05735);
}

double NNfunction-ss_dLcR::synapse0x27764f0() {
   return (neuron0x276b510()*1.61229);
}

double NNfunction-ss_dLcR::synapse0x2776530() {
   return (neuron0x276b850()*0.435868);
}

double NNfunction-ss_dLcR::synapse0x2776570() {
   return (neuron0x276bb90()*0.756826);
}

double NNfunction-ss_dLcR::synapse0x27765b0() {
   return (neuron0x276bed0()*0.554011);
}

double NNfunction-ss_dLcR::synapse0x27765f0() {
   return (neuron0x276c210()*0.130571);
}

double NNfunction-ss_dLcR::synapse0x2776080() {
   return (neuron0x276c550()*0.392117);
}

double NNfunction-ss_dLcR::synapse0x27760c0() {
   return (neuron0x276cab0()*0.970176);
}

double NNfunction-ss_dLcR::synapse0x2776740() {
   return (neuron0x276ccd0()*0.393053);
}

double NNfunction-ss_dLcR::synapse0x2776780() {
   return (neuron0x276d010()*0.487978);
}

double NNfunction-ss_dLcR::synapse0x27767c0() {
   return (neuron0x276d350()*-1.91552);
}

double NNfunction-ss_dLcR::synapse0x2776800() {
   return (neuron0x276d690()*-0.236798);
}

double NNfunction-ss_dLcR::synapse0x2776840() {
   return (neuron0x276d9d0()*1.62393);
}

double NNfunction-ss_dLcR::synapse0x2776880() {
   return (neuron0x276dd10()*0.0885041);
}

double NNfunction-ss_dLcR::synapse0x2776c00() {
   return (neuron0x27691e0()*0.0603137);
}

double NNfunction-ss_dLcR::synapse0x2776c40() {
   return (neuron0x2769490()*-0.129595);
}

double NNfunction-ss_dLcR::synapse0x2776c80() {
   return (neuron0x27697d0()*-0.18414);
}

double NNfunction-ss_dLcR::synapse0x2776cc0() {
   return (neuron0x2769b10()*1.59083);
}

double NNfunction-ss_dLcR::synapse0x2776d00() {
   return (neuron0x2769e50()*0.0061337);
}

double NNfunction-ss_dLcR::synapse0x2776d40() {
   return (neuron0x276a190()*-0.019311);
}

double NNfunction-ss_dLcR::synapse0x2776d80() {
   return (neuron0x276a4d0()*-0.0168275);
}

double NNfunction-ss_dLcR::synapse0x2776dc0() {
   return (neuron0x276a810()*-0.0231844);
}

double NNfunction-ss_dLcR::synapse0x2776e00() {
   return (neuron0x276ab50()*-0.0286917);
}

double NNfunction-ss_dLcR::synapse0x2776e40() {
   return (neuron0x276ae90()*-0.0207104);
}

double NNfunction-ss_dLcR::synapse0x2776e80() {
   return (neuron0x276b1d0()*-0.00347338);
}

double NNfunction-ss_dLcR::synapse0x2776ec0() {
   return (neuron0x276b510()*0.00907785);
}

double NNfunction-ss_dLcR::synapse0x2776f00() {
   return (neuron0x276b850()*-0.0253527);
}

double NNfunction-ss_dLcR::synapse0x2776f40() {
   return (neuron0x276bb90()*0.0558882);
}

double NNfunction-ss_dLcR::synapse0x2776f80() {
   return (neuron0x276bed0()*0.0264524);
}

double NNfunction-ss_dLcR::synapse0x2776fc0() {
   return (neuron0x276c210()*-0.104524);
}

double NNfunction-ss_dLcR::synapse0x2776a50() {
   return (neuron0x276c550()*-0.0185466);
}

double NNfunction-ss_dLcR::synapse0x2776a90() {
   return (neuron0x276cab0()*-0.0808094);
}

double NNfunction-ss_dLcR::synapse0x2777110() {
   return (neuron0x276ccd0()*0.0408064);
}

double NNfunction-ss_dLcR::synapse0x2777150() {
   return (neuron0x276d010()*-0.0375945);
}

double NNfunction-ss_dLcR::synapse0x2777190() {
   return (neuron0x276d350()*-0.0244943);
}

double NNfunction-ss_dLcR::synapse0x27771d0() {
   return (neuron0x276d690()*-0.0280489);
}

double NNfunction-ss_dLcR::synapse0x2777210() {
   return (neuron0x276d9d0()*-0.0011192);
}

double NNfunction-ss_dLcR::synapse0x2777250() {
   return (neuron0x276dd10()*-0.0220157);
}

double NNfunction-ss_dLcR::synapse0x27775d0() {
   return (neuron0x27691e0()*0.0152353);
}

double NNfunction-ss_dLcR::synapse0x2777610() {
   return (neuron0x2769490()*0.198864);
}

double NNfunction-ss_dLcR::synapse0x2777650() {
   return (neuron0x27697d0()*-0.540011);
}

double NNfunction-ss_dLcR::synapse0x2777690() {
   return (neuron0x2769b10()*-0.0269736);
}

double NNfunction-ss_dLcR::synapse0x27776d0() {
   return (neuron0x2769e50()*0.687848);
}

double NNfunction-ss_dLcR::synapse0x2777710() {
   return (neuron0x276a190()*0.287986);
}

double NNfunction-ss_dLcR::synapse0x2777750() {
   return (neuron0x276a4d0()*0.424195);
}

double NNfunction-ss_dLcR::synapse0x2777790() {
   return (neuron0x276a810()*0.490231);
}

double NNfunction-ss_dLcR::synapse0x27777d0() {
   return (neuron0x276ab50()*0.490867);
}

double NNfunction-ss_dLcR::synapse0x2777810() {
   return (neuron0x276ae90()*0.157291);
}

double NNfunction-ss_dLcR::synapse0x2777850() {
   return (neuron0x276b1d0()*0.18921);
}

double NNfunction-ss_dLcR::synapse0x2777890() {
   return (neuron0x276b510()*-0.351692);
}

double NNfunction-ss_dLcR::synapse0x27778d0() {
   return (neuron0x276b850()*0.116874);
}

double NNfunction-ss_dLcR::synapse0x2777910() {
   return (neuron0x276bb90()*-0.276721);
}

double NNfunction-ss_dLcR::synapse0x2777950() {
   return (neuron0x276bed0()*0.224543);
}

double NNfunction-ss_dLcR::synapse0x2777990() {
   return (neuron0x276c210()*-0.858355);
}

double NNfunction-ss_dLcR::synapse0x2777420() {
   return (neuron0x276c550()*0.182194);
}

double NNfunction-ss_dLcR::synapse0x2777460() {
   return (neuron0x276cab0()*0.0981277);
}

double NNfunction-ss_dLcR::synapse0x2777ae0() {
   return (neuron0x276ccd0()*0.634796);
}

double NNfunction-ss_dLcR::synapse0x2777b20() {
   return (neuron0x276d010()*0.486809);
}

double NNfunction-ss_dLcR::synapse0x2777b60() {
   return (neuron0x276d350()*-0.50005);
}

double NNfunction-ss_dLcR::synapse0x2777ba0() {
   return (neuron0x276d690()*-0.40876);
}

double NNfunction-ss_dLcR::synapse0x2777be0() {
   return (neuron0x276d9d0()*0.345784);
}

double NNfunction-ss_dLcR::synapse0x2777c20() {
   return (neuron0x276dd10()*0.705267);
}

double NNfunction-ss_dLcR::synapse0x2777fa0() {
   return (neuron0x27691e0()*0.0749377);
}

double NNfunction-ss_dLcR::synapse0x2769370() {
   return (neuron0x2769490()*-0.165895);
}

double NNfunction-ss_dLcR::synapse0x27693b0() {
   return (neuron0x27697d0()*0.204439);
}

double NNfunction-ss_dLcR::synapse0x27696b0() {
   return (neuron0x2769b10()*0.153084);
}

double NNfunction-ss_dLcR::synapse0x27696f0() {
   return (neuron0x2769e50()*0.695444);
}

double NNfunction-ss_dLcR::synapse0x27699f0() {
   return (neuron0x276a190()*0.449674);
}

double NNfunction-ss_dLcR::synapse0x2769a30() {
   return (neuron0x276a4d0()*-0.580864);
}

double NNfunction-ss_dLcR::synapse0x2769d30() {
   return (neuron0x276a810()*-0.585923);
}

double NNfunction-ss_dLcR::synapse0x2769d70() {
   return (neuron0x276ab50()*0.199834);
}

double NNfunction-ss_dLcR::synapse0x276a070() {
   return (neuron0x276ae90()*-0.445832);
}

double NNfunction-ss_dLcR::synapse0x276a0b0() {
   return (neuron0x276b1d0()*0.110033);
}

double NNfunction-ss_dLcR::synapse0x276a3b0() {
   return (neuron0x276b510()*0.406613);
}

double NNfunction-ss_dLcR::synapse0x276a3f0() {
   return (neuron0x276b850()*1.18473);
}

double NNfunction-ss_dLcR::synapse0x276a6f0() {
   return (neuron0x276bb90()*0.315111);
}

double NNfunction-ss_dLcR::synapse0x276a730() {
   return (neuron0x276bed0()*-0.635262);
}

double NNfunction-ss_dLcR::synapse0x276aa30() {
   return (neuron0x276c210()*0.213372);
}

double NNfunction-ss_dLcR::synapse0x276aa70() {
   return (neuron0x276c550()*0.270272);
}

double NNfunction-ss_dLcR::synapse0x276ad70() {
   return (neuron0x276cab0()*-0.310514);
}

double NNfunction-ss_dLcR::synapse0x276adb0() {
   return (neuron0x276ccd0()*-0.0693806);
}

double NNfunction-ss_dLcR::synapse0x276b0b0() {
   return (neuron0x276d010()*-0.0371443);
}

double NNfunction-ss_dLcR::synapse0x276b0f0() {
   return (neuron0x276d350()*-0.205615);
}

double NNfunction-ss_dLcR::synapse0x276b3f0() {
   return (neuron0x276d690()*-0.387546);
}

double NNfunction-ss_dLcR::synapse0x276b430() {
   return (neuron0x276d9d0()*-0.471094);
}

double NNfunction-ss_dLcR::synapse0x276b730() {
   return (neuron0x276dd10()*0.298317);
}

double NNfunction-ss_dLcR::synapse0x276b770() {
   return (neuron0x27691e0()*-0.245339);
}

double NNfunction-ss_dLcR::synapse0x276c430() {
   return (neuron0x2769490()*0.108838);
}

double NNfunction-ss_dLcR::synapse0x276c470() {
   return (neuron0x27697d0()*-0.250334);
}

double NNfunction-ss_dLcR::synapse0x2777df0() {
   return (neuron0x2769b10()*0.146404);
}

double NNfunction-ss_dLcR::synapse0x2777e30() {
   return (neuron0x2769e50()*-0.362152);
}

double NNfunction-ss_dLcR::synapse0x276c770() {
   return (neuron0x276a190()*0.068253);
}

double NNfunction-ss_dLcR::synapse0x276c7b0() {
   return (neuron0x276a4d0()*-0.0533418);
}

double NNfunction-ss_dLcR::synapse0x2524180() {
   return (neuron0x276a810()*0.318296);
}

double NNfunction-ss_dLcR::synapse0x25241c0() {
   return (neuron0x276ab50()*0.0491194);
}

double NNfunction-ss_dLcR::synapse0x276cef0() {
   return (neuron0x276ae90()*0.152055);
}

double NNfunction-ss_dLcR::synapse0x276cf30() {
   return (neuron0x276b1d0()*0.0965708);
}

double NNfunction-ss_dLcR::synapse0x276d230() {
   return (neuron0x276b510()*0.994514);
}

double NNfunction-ss_dLcR::synapse0x276d270() {
   return (neuron0x276b850()*0.0909977);
}

double NNfunction-ss_dLcR::synapse0x276d570() {
   return (neuron0x276bb90()*-0.0846473);
}

double NNfunction-ss_dLcR::synapse0x276d5b0() {
   return (neuron0x276bed0()*-0.307238);
}

double NNfunction-ss_dLcR::synapse0x276d8b0() {
   return (neuron0x276c210()*0.662041);
}

double NNfunction-ss_dLcR::synapse0x276d8f0() {
   return (neuron0x276c550()*0.0329813);
}

double NNfunction-ss_dLcR::synapse0x276dbf0() {
   return (neuron0x276cab0()*0.161589);
}

double NNfunction-ss_dLcR::synapse0x276dc30() {
   return (neuron0x276ccd0()*-0.0152023);
}

double NNfunction-ss_dLcR::synapse0x276df30() {
   return (neuron0x276d010()*0.0988802);
}

double NNfunction-ss_dLcR::synapse0x276df70() {
   return (neuron0x276d350()*-0.0519725);
}

double NNfunction-ss_dLcR::synapse0x276ba70() {
   return (neuron0x276d690()*0.0899819);
}

double NNfunction-ss_dLcR::synapse0x276bab0() {
   return (neuron0x276d9d0()*-0.0912414);
}

double NNfunction-ss_dLcR::synapse0x2779d10() {
   return (neuron0x276dd10()*-0.159989);
}

double NNfunction-ss_dLcR::synapse0x277a090() {
   return (neuron0x27691e0()*-0.0594412);
}

double NNfunction-ss_dLcR::synapse0x277a0d0() {
   return (neuron0x2769490()*-0.282093);
}

double NNfunction-ss_dLcR::synapse0x277a110() {
   return (neuron0x27697d0()*0.345246);
}

double NNfunction-ss_dLcR::synapse0x277a150() {
   return (neuron0x2769b10()*0.276284);
}

double NNfunction-ss_dLcR::synapse0x277a190() {
   return (neuron0x2769e50()*0.0974981);
}

double NNfunction-ss_dLcR::synapse0x277a1d0() {
   return (neuron0x276a190()*0.399219);
}

double NNfunction-ss_dLcR::synapse0x277a210() {
   return (neuron0x276a4d0()*0.232602);
}

double NNfunction-ss_dLcR::synapse0x277a250() {
   return (neuron0x276a810()*0.361641);
}

double NNfunction-ss_dLcR::synapse0x277a290() {
   return (neuron0x276ab50()*-0.313276);
}

double NNfunction-ss_dLcR::synapse0x277a2d0() {
   return (neuron0x276ae90()*0.790986);
}

double NNfunction-ss_dLcR::synapse0x277a310() {
   return (neuron0x276b1d0()*0.87064);
}

double NNfunction-ss_dLcR::synapse0x277a350() {
   return (neuron0x276b510()*0.1314);
}

double NNfunction-ss_dLcR::synapse0x277a390() {
   return (neuron0x276b850()*-0.166276);
}

double NNfunction-ss_dLcR::synapse0x277a3d0() {
   return (neuron0x276bb90()*-0.171813);
}

double NNfunction-ss_dLcR::synapse0x277a410() {
   return (neuron0x276bed0()*-0.430383);
}

double NNfunction-ss_dLcR::synapse0x277a450() {
   return (neuron0x276c210()*0.706498);
}

double NNfunction-ss_dLcR::synapse0x2779ee0() {
   return (neuron0x276c550()*1.04985);
}

double NNfunction-ss_dLcR::synapse0x2779f20() {
   return (neuron0x276cab0()*0.624169);
}

double NNfunction-ss_dLcR::synapse0x277a5a0() {
   return (neuron0x276ccd0()*-1.14101);
}

double NNfunction-ss_dLcR::synapse0x277a5e0() {
   return (neuron0x276d010()*-0.42834);
}

double NNfunction-ss_dLcR::synapse0x277a620() {
   return (neuron0x276d350()*0.453514);
}

double NNfunction-ss_dLcR::synapse0x277a660() {
   return (neuron0x276d690()*0.400562);
}

double NNfunction-ss_dLcR::synapse0x277a6a0() {
   return (neuron0x276d9d0()*-0.203064);
}

double NNfunction-ss_dLcR::synapse0x277a6e0() {
   return (neuron0x276dd10()*0.145331);
}

double NNfunction-ss_dLcR::synapse0x277aa60() {
   return (neuron0x27691e0()*0.0505922);
}

double NNfunction-ss_dLcR::synapse0x277aaa0() {
   return (neuron0x2769490()*-0.0253406);
}

double NNfunction-ss_dLcR::synapse0x277aae0() {
   return (neuron0x27697d0()*0.16621);
}

double NNfunction-ss_dLcR::synapse0x277ab20() {
   return (neuron0x2769b10()*-0.00763205);
}

double NNfunction-ss_dLcR::synapse0x277ab60() {
   return (neuron0x2769e50()*0.0626599);
}

double NNfunction-ss_dLcR::synapse0x277aba0() {
   return (neuron0x276a190()*0.0580875);
}

double NNfunction-ss_dLcR::synapse0x277abe0() {
   return (neuron0x276a4d0()*0.00589296);
}

double NNfunction-ss_dLcR::synapse0x277ac20() {
   return (neuron0x276a810()*0.0338806);
}

double NNfunction-ss_dLcR::synapse0x277ac60() {
   return (neuron0x276ab50()*0.0439511);
}

double NNfunction-ss_dLcR::synapse0x277aca0() {
   return (neuron0x276ae90()*0.0064988);
}

double NNfunction-ss_dLcR::synapse0x277ace0() {
   return (neuron0x276b1d0()*0.0436268);
}

double NNfunction-ss_dLcR::synapse0x277ad20() {
   return (neuron0x276b510()*0.535842);
}

double NNfunction-ss_dLcR::synapse0x277ad60() {
   return (neuron0x276b850()*0.0471031);
}

double NNfunction-ss_dLcR::synapse0x277ada0() {
   return (neuron0x276bb90()*-0.0113073);
}

double NNfunction-ss_dLcR::synapse0x277ade0() {
   return (neuron0x276bed0()*0.0015701);
}

double NNfunction-ss_dLcR::synapse0x277ae20() {
   return (neuron0x276c210()*-0.609756);
}

double NNfunction-ss_dLcR::synapse0x277a8b0() {
   return (neuron0x276c550()*0.0331192);
}

double NNfunction-ss_dLcR::synapse0x277a8f0() {
   return (neuron0x276cab0()*0.0414864);
}

double NNfunction-ss_dLcR::synapse0x277af70() {
   return (neuron0x276ccd0()*0.0129253);
}

double NNfunction-ss_dLcR::synapse0x277afb0() {
   return (neuron0x276d010()*0.0118665);
}

double NNfunction-ss_dLcR::synapse0x277aff0() {
   return (neuron0x276d350()*0.0302869);
}

double NNfunction-ss_dLcR::synapse0x277b030() {
   return (neuron0x276d690()*0.00595478);
}

double NNfunction-ss_dLcR::synapse0x277b070() {
   return (neuron0x276d9d0()*-0.0290735);
}

double NNfunction-ss_dLcR::synapse0x277b0b0() {
   return (neuron0x276dd10()*-0.0190694);
}

double NNfunction-ss_dLcR::synapse0x277b430() {
   return (neuron0x27691e0()*0.0471192);
}

double NNfunction-ss_dLcR::synapse0x277b470() {
   return (neuron0x2769490()*0.163676);
}

double NNfunction-ss_dLcR::synapse0x277b4b0() {
   return (neuron0x27697d0()*-0.230803);
}

double NNfunction-ss_dLcR::synapse0x277b4f0() {
   return (neuron0x2769b10()*-0.091938);
}

double NNfunction-ss_dLcR::synapse0x277b530() {
   return (neuron0x2769e50()*-0.0918555);
}

double NNfunction-ss_dLcR::synapse0x277b570() {
   return (neuron0x276a190()*-0.0922129);
}

double NNfunction-ss_dLcR::synapse0x277b5b0() {
   return (neuron0x276a4d0()*0.27994);
}

double NNfunction-ss_dLcR::synapse0x277b5f0() {
   return (neuron0x276a810()*-0.124229);
}

double NNfunction-ss_dLcR::synapse0x277b630() {
   return (neuron0x276ab50()*-0.107596);
}

double NNfunction-ss_dLcR::synapse0x277b670() {
   return (neuron0x276ae90()*0.172341);
}

double NNfunction-ss_dLcR::synapse0x277b6b0() {
   return (neuron0x276b1d0()*-0.250322);
}

double NNfunction-ss_dLcR::synapse0x277b6f0() {
   return (neuron0x276b510()*0.245913);
}

double NNfunction-ss_dLcR::synapse0x277b730() {
   return (neuron0x276b850()*-0.0697486);
}

double NNfunction-ss_dLcR::synapse0x277b770() {
   return (neuron0x276bb90()*0.19546);
}

double NNfunction-ss_dLcR::synapse0x277b7b0() {
   return (neuron0x276bed0()*0.0616232);
}

double NNfunction-ss_dLcR::synapse0x277b7f0() {
   return (neuron0x276c210()*0.201689);
}

double NNfunction-ss_dLcR::synapse0x277b280() {
   return (neuron0x276c550()*-0.173863);
}

double NNfunction-ss_dLcR::synapse0x277b2c0() {
   return (neuron0x276cab0()*0.150432);
}

double NNfunction-ss_dLcR::synapse0x277b940() {
   return (neuron0x276ccd0()*0.076558);
}

double NNfunction-ss_dLcR::synapse0x277b980() {
   return (neuron0x276d010()*0.0403399);
}

double NNfunction-ss_dLcR::synapse0x277b9c0() {
   return (neuron0x276d350()*-0.0878331);
}

double NNfunction-ss_dLcR::synapse0x277ba00() {
   return (neuron0x276d690()*-0.306715);
}

double NNfunction-ss_dLcR::synapse0x277ba40() {
   return (neuron0x276d9d0()*-0.15326);
}

double NNfunction-ss_dLcR::synapse0x277ba80() {
   return (neuron0x276dd10()*0.266164);
}

double NNfunction-ss_dLcR::synapse0x277be00() {
   return (neuron0x27691e0()*0.312284);
}

double NNfunction-ss_dLcR::synapse0x277be40() {
   return (neuron0x2769490()*-0.643392);
}

double NNfunction-ss_dLcR::synapse0x277be80() {
   return (neuron0x27697d0()*-0.68076);
}

double NNfunction-ss_dLcR::synapse0x277bec0() {
   return (neuron0x2769b10()*0.557907);
}

double NNfunction-ss_dLcR::synapse0x277bf00() {
   return (neuron0x2769e50()*-0.371371);
}

double NNfunction-ss_dLcR::synapse0x277bf40() {
   return (neuron0x276a190()*-0.311511);
}

double NNfunction-ss_dLcR::synapse0x277bf80() {
   return (neuron0x276a4d0()*-0.44037);
}

double NNfunction-ss_dLcR::synapse0x277bfc0() {
   return (neuron0x276a810()*1.1509);
}

double NNfunction-ss_dLcR::synapse0x277c000() {
   return (neuron0x276ab50()*1.56703);
}

double NNfunction-ss_dLcR::synapse0x277c040() {
   return (neuron0x276ae90()*0.546262);
}

double NNfunction-ss_dLcR::synapse0x277c080() {
   return (neuron0x276b1d0()*1.78717);
}

double NNfunction-ss_dLcR::synapse0x277c0c0() {
   return (neuron0x276b510()*0.612327);
}

double NNfunction-ss_dLcR::synapse0x277c100() {
   return (neuron0x276b850()*-1.03018);
}

double NNfunction-ss_dLcR::synapse0x277c140() {
   return (neuron0x276bb90()*-0.136259);
}

double NNfunction-ss_dLcR::synapse0x277c180() {
   return (neuron0x276bed0()*0.0339094);
}

double NNfunction-ss_dLcR::synapse0x277c1c0() {
   return (neuron0x276c210()*-1.03348);
}

double NNfunction-ss_dLcR::synapse0x277bc50() {
   return (neuron0x276c550()*-1.25148);
}

double NNfunction-ss_dLcR::synapse0x277bc90() {
   return (neuron0x276cab0()*0.0906253);
}

double NNfunction-ss_dLcR::synapse0x277c310() {
   return (neuron0x276ccd0()*-0.268019);
}

double NNfunction-ss_dLcR::synapse0x277c350() {
   return (neuron0x276d010()*0.0398049);
}

double NNfunction-ss_dLcR::synapse0x277c390() {
   return (neuron0x276d350()*-0.371775);
}

double NNfunction-ss_dLcR::synapse0x277c3d0() {
   return (neuron0x276d690()*0.0939244);
}

double NNfunction-ss_dLcR::synapse0x277c410() {
   return (neuron0x276d9d0()*0.307971);
}

double NNfunction-ss_dLcR::synapse0x277c450() {
   return (neuron0x276dd10()*-0.389122);
}

double NNfunction-ss_dLcR::synapse0x277c7d0() {
   return (neuron0x27691e0()*0.352111);
}

double NNfunction-ss_dLcR::synapse0x277c810() {
   return (neuron0x2769490()*-0.155547);
}

double NNfunction-ss_dLcR::synapse0x277c850() {
   return (neuron0x27697d0()*0.122188);
}

double NNfunction-ss_dLcR::synapse0x277c890() {
   return (neuron0x2769b10()*0.814553);
}

double NNfunction-ss_dLcR::synapse0x277c8d0() {
   return (neuron0x2769e50()*0.162029);
}

double NNfunction-ss_dLcR::synapse0x277c910() {
   return (neuron0x276a190()*0.626993);
}

double NNfunction-ss_dLcR::synapse0x277c950() {
   return (neuron0x276a4d0()*0.201212);
}

double NNfunction-ss_dLcR::synapse0x277c990() {
   return (neuron0x276a810()*-0.0136047);
}

double NNfunction-ss_dLcR::synapse0x277c9d0() {
   return (neuron0x276ab50()*-0.299545);
}

double NNfunction-ss_dLcR::synapse0x2774b90() {
   return (neuron0x276ae90()*0.446006);
}

double NNfunction-ss_dLcR::synapse0x2774bd0() {
   return (neuron0x276b1d0()*0.745849);
}

double NNfunction-ss_dLcR::synapse0x2774c10() {
   return (neuron0x276b510()*0.373338);
}

double NNfunction-ss_dLcR::synapse0x2774c50() {
   return (neuron0x276b850()*0.0509343);
}

double NNfunction-ss_dLcR::synapse0x2774c90() {
   return (neuron0x276bb90()*0.752138);
}

double NNfunction-ss_dLcR::synapse0x2774cd0() {
   return (neuron0x276bed0()*0.0854093);
}

double NNfunction-ss_dLcR::synapse0x2774d10() {
   return (neuron0x276c210()*0.449216);
}

double NNfunction-ss_dLcR::synapse0x277c620() {
   return (neuron0x276c550()*-0.456719);
}

double NNfunction-ss_dLcR::synapse0x277c660() {
   return (neuron0x276cab0()*0.130961);
}

double NNfunction-ss_dLcR::synapse0x2774e60() {
   return (neuron0x276ccd0()*-0.710772);
}

double NNfunction-ss_dLcR::synapse0x2774ea0() {
   return (neuron0x276d010()*0.149335);
}

double NNfunction-ss_dLcR::synapse0x2774ee0() {
   return (neuron0x276d350()*0.0122778);
}

double NNfunction-ss_dLcR::synapse0x2774f20() {
   return (neuron0x276d690()*-0.173654);
}

double NNfunction-ss_dLcR::synapse0x2774f60() {
   return (neuron0x276d9d0()*-0.15167);
}

double NNfunction-ss_dLcR::synapse0x2774fa0() {
   return (neuron0x276dd10()*-0.603465);
}

double NNfunction-ss_dLcR::synapse0x2775320() {
   return (neuron0x27691e0()*0.0109378);
}

double NNfunction-ss_dLcR::synapse0x2775360() {
   return (neuron0x2769490()*-0.00941299);
}

double NNfunction-ss_dLcR::synapse0x27753a0() {
   return (neuron0x27697d0()*0.00153655);
}

double NNfunction-ss_dLcR::synapse0x27753e0() {
   return (neuron0x2769b10()*0.0372428);
}

double NNfunction-ss_dLcR::synapse0x2775420() {
   return (neuron0x2769e50()*-0.028715);
}

double NNfunction-ss_dLcR::synapse0x2775460() {
   return (neuron0x276a190()*-0.0126366);
}

double NNfunction-ss_dLcR::synapse0x27754a0() {
   return (neuron0x276a4d0()*-0.0266895);
}

double NNfunction-ss_dLcR::synapse0x27754e0() {
   return (neuron0x276a810()*-0.00552051);
}

double NNfunction-ss_dLcR::synapse0x2775520() {
   return (neuron0x276ab50()*0.0176265);
}

double NNfunction-ss_dLcR::synapse0x2775560() {
   return (neuron0x276ae90()*-0.0293849);
}

double NNfunction-ss_dLcR::synapse0x27755a0() {
   return (neuron0x276b1d0()*-0.0560967);
}

double NNfunction-ss_dLcR::synapse0x27755e0() {
   return (neuron0x276b510()*1.39576);
}

double NNfunction-ss_dLcR::synapse0x2775620() {
   return (neuron0x276b850()*0.00850384);
}

double NNfunction-ss_dLcR::synapse0x2775660() {
   return (neuron0x276bb90()*0.00753647);
}

double NNfunction-ss_dLcR::synapse0x27756a0() {
   return (neuron0x276bed0()*-0.00597419);
}

double NNfunction-ss_dLcR::synapse0x27756e0() {
   return (neuron0x276c210()*-0.291471);
}

double NNfunction-ss_dLcR::synapse0x2775170() {
   return (neuron0x276c550()*0.0095192);
}

double NNfunction-ss_dLcR::synapse0x27751b0() {
   return (neuron0x276cab0()*0.0225493);
}

double NNfunction-ss_dLcR::synapse0x2775830() {
   return (neuron0x276ccd0()*-0.0202761);
}

double NNfunction-ss_dLcR::synapse0x2775870() {
   return (neuron0x276d010()*0.00746166);
}

double NNfunction-ss_dLcR::synapse0x27758b0() {
   return (neuron0x276d350()*-0.0101559);
}

double NNfunction-ss_dLcR::synapse0x27758f0() {
   return (neuron0x276d690()*-0.00322829);
}

double NNfunction-ss_dLcR::synapse0x2775930() {
   return (neuron0x276d9d0()*-0.024947);
}

double NNfunction-ss_dLcR::synapse0x2775970() {
   return (neuron0x276dd10()*-0.0185892);
}

double NNfunction-ss_dLcR::synapse0x2775b40() {
   return (neuron0x27691e0()*-0.111868);
}

double NNfunction-ss_dLcR::synapse0x277ebd0() {
   return (neuron0x2769490()*0.0953712);
}

double NNfunction-ss_dLcR::synapse0x277ec10() {
   return (neuron0x27697d0()*-0.267316);
}

double NNfunction-ss_dLcR::synapse0x277ec50() {
   return (neuron0x2769b10()*0.0035606);
}

double NNfunction-ss_dLcR::synapse0x277ec90() {
   return (neuron0x2769e50()*-0.0679591);
}

double NNfunction-ss_dLcR::synapse0x277ecd0() {
   return (neuron0x276a190()*0.583626);
}

double NNfunction-ss_dLcR::synapse0x277ed10() {
   return (neuron0x276a4d0()*0.080273);
}

double NNfunction-ss_dLcR::synapse0x277ed50() {
   return (neuron0x276a810()*-0.338192);
}

double NNfunction-ss_dLcR::synapse0x277ed90() {
   return (neuron0x276ab50()*0.0709763);
}

double NNfunction-ss_dLcR::synapse0x277edd0() {
   return (neuron0x276ae90()*0.391687);
}

double NNfunction-ss_dLcR::synapse0x277ee10() {
   return (neuron0x276b1d0()*0.196056);
}

double NNfunction-ss_dLcR::synapse0x277ee50() {
   return (neuron0x276b510()*0.140039);
}

double NNfunction-ss_dLcR::synapse0x277ee90() {
   return (neuron0x276b850()*-0.529559);
}

double NNfunction-ss_dLcR::synapse0x277eed0() {
   return (neuron0x276bb90()*-1.77105);
}

double NNfunction-ss_dLcR::synapse0x277ef10() {
   return (neuron0x276bed0()*0.634005);
}

double NNfunction-ss_dLcR::synapse0x277ef50() {
   return (neuron0x276c210()*-0.382348);
}

double NNfunction-ss_dLcR::synapse0x277ea20() {
   return (neuron0x276c550()*0.216603);
}

double NNfunction-ss_dLcR::synapse0x277ea60() {
   return (neuron0x276cab0()*-0.144554);
}

double NNfunction-ss_dLcR::synapse0x277f0a0() {
   return (neuron0x276ccd0()*-0.145562);
}

double NNfunction-ss_dLcR::synapse0x277f0e0() {
   return (neuron0x276d010()*-0.0513819);
}

double NNfunction-ss_dLcR::synapse0x277f120() {
   return (neuron0x276d350()*0.0958905);
}

double NNfunction-ss_dLcR::synapse0x277f160() {
   return (neuron0x276d690()*0.0450671);
}

double NNfunction-ss_dLcR::synapse0x277f1a0() {
   return (neuron0x276d9d0()*-0.0571151);
}

double NNfunction-ss_dLcR::synapse0x277f1e0() {
   return (neuron0x276dd10()*0.124761);
}

double NNfunction-ss_dLcR::synapse0x277f560() {
   return (neuron0x27691e0()*-0.0535422);
}

double NNfunction-ss_dLcR::synapse0x277f5a0() {
   return (neuron0x2769490()*-0.225106);
}

double NNfunction-ss_dLcR::synapse0x277f5e0() {
   return (neuron0x27697d0()*-0.504964);
}

double NNfunction-ss_dLcR::synapse0x277f620() {
   return (neuron0x2769b10()*-0.334605);
}

double NNfunction-ss_dLcR::synapse0x277f660() {
   return (neuron0x2769e50()*0.040407);
}

double NNfunction-ss_dLcR::synapse0x277f6a0() {
   return (neuron0x276a190()*0.176425);
}

double NNfunction-ss_dLcR::synapse0x277f6e0() {
   return (neuron0x276a4d0()*-0.0579295);
}

double NNfunction-ss_dLcR::synapse0x277f720() {
   return (neuron0x276a810()*-0.65272);
}

double NNfunction-ss_dLcR::synapse0x277f760() {
   return (neuron0x276ab50()*0.13173);
}

double NNfunction-ss_dLcR::synapse0x277f7a0() {
   return (neuron0x276ae90()*0.0462106);
}

double NNfunction-ss_dLcR::synapse0x277f7e0() {
   return (neuron0x276b1d0()*0.130335);
}

double NNfunction-ss_dLcR::synapse0x277f820() {
   return (neuron0x276b510()*-0.101677);
}

double NNfunction-ss_dLcR::synapse0x277f860() {
   return (neuron0x276b850()*-0.105419);
}

double NNfunction-ss_dLcR::synapse0x277f8a0() {
   return (neuron0x276bb90()*-0.291379);
}

double NNfunction-ss_dLcR::synapse0x277f8e0() {
   return (neuron0x276bed0()*0.120414);
}

double NNfunction-ss_dLcR::synapse0x277f920() {
   return (neuron0x276c210()*0.035385);
}

double NNfunction-ss_dLcR::synapse0x277f3b0() {
   return (neuron0x276c550()*0.15395);
}

double NNfunction-ss_dLcR::synapse0x277f3f0() {
   return (neuron0x276cab0()*0.053827);
}

double NNfunction-ss_dLcR::synapse0x277fa70() {
   return (neuron0x276ccd0()*-0.230041);
}

double NNfunction-ss_dLcR::synapse0x277fab0() {
   return (neuron0x276d010()*0.0352567);
}

double NNfunction-ss_dLcR::synapse0x277faf0() {
   return (neuron0x276d350()*0.190477);
}

double NNfunction-ss_dLcR::synapse0x277fb30() {
   return (neuron0x276d690()*0.147375);
}

double NNfunction-ss_dLcR::synapse0x277fb70() {
   return (neuron0x276d9d0()*0.0371259);
}

double NNfunction-ss_dLcR::synapse0x277fbb0() {
   return (neuron0x276dd10()*0.374669);
}

double NNfunction-ss_dLcR::synapse0x277ff30() {
   return (neuron0x27691e0()*0.0712041);
}

double NNfunction-ss_dLcR::synapse0x277ff70() {
   return (neuron0x2769490()*-0.0552856);
}

double NNfunction-ss_dLcR::synapse0x277ffb0() {
   return (neuron0x27697d0()*0.0355335);
}

double NNfunction-ss_dLcR::synapse0x277fff0() {
   return (neuron0x2769b10()*0.10956);
}

double NNfunction-ss_dLcR::synapse0x2780030() {
   return (neuron0x2769e50()*0.0416738);
}

double NNfunction-ss_dLcR::synapse0x2780070() {
   return (neuron0x276a190()*0.0644866);
}

double NNfunction-ss_dLcR::synapse0x27800b0() {
   return (neuron0x276a4d0()*-0.0174275);
}

double NNfunction-ss_dLcR::synapse0x27800f0() {
   return (neuron0x276a810()*-0.00703738);
}

double NNfunction-ss_dLcR::synapse0x2780130() {
   return (neuron0x276ab50()*0.0879697);
}

double NNfunction-ss_dLcR::synapse0x2780170() {
   return (neuron0x276ae90()*-0.0238277);
}

double NNfunction-ss_dLcR::synapse0x27801b0() {
   return (neuron0x276b1d0()*0.0268297);
}

double NNfunction-ss_dLcR::synapse0x27801f0() {
   return (neuron0x276b510()*0.0786367);
}

double NNfunction-ss_dLcR::synapse0x2780230() {
   return (neuron0x276b850()*0.700978);
}

double NNfunction-ss_dLcR::synapse0x2780270() {
   return (neuron0x276bb90()*-0.0885557);
}

double NNfunction-ss_dLcR::synapse0x27802b0() {
   return (neuron0x276bed0()*0.174841);
}

double NNfunction-ss_dLcR::synapse0x27802f0() {
   return (neuron0x276c210()*0.0447184);
}

double NNfunction-ss_dLcR::synapse0x277fd80() {
   return (neuron0x276c550()*-0.062346);
}

double NNfunction-ss_dLcR::synapse0x277fdc0() {
   return (neuron0x276cab0()*0.379842);
}

double NNfunction-ss_dLcR::synapse0x2780440() {
   return (neuron0x276ccd0()*0.324915);
}

double NNfunction-ss_dLcR::synapse0x2780480() {
   return (neuron0x276d010()*-0.0156112);
}

double NNfunction-ss_dLcR::synapse0x27804c0() {
   return (neuron0x276d350()*0.049389);
}

double NNfunction-ss_dLcR::synapse0x2780500() {
   return (neuron0x276d690()*-0.035276);
}

double NNfunction-ss_dLcR::synapse0x2780540() {
   return (neuron0x276d9d0()*-0.0577629);
}

double NNfunction-ss_dLcR::synapse0x2780580() {
   return (neuron0x276dd10()*-0.0373016);
}

double NNfunction-ss_dLcR::synapse0x2780900() {
   return (neuron0x27691e0()*0.0111803);
}

double NNfunction-ss_dLcR::synapse0x2780940() {
   return (neuron0x2769490()*-0.0817589);
}

double NNfunction-ss_dLcR::synapse0x2780980() {
   return (neuron0x27697d0()*0.0207297);
}

double NNfunction-ss_dLcR::synapse0x27809c0() {
   return (neuron0x2769b10()*-1.26208);
}

double NNfunction-ss_dLcR::synapse0x2780a00() {
   return (neuron0x2769e50()*0.0427899);
}

double NNfunction-ss_dLcR::synapse0x2780a40() {
   return (neuron0x276a190()*0.0259141);
}

double NNfunction-ss_dLcR::synapse0x2780a80() {
   return (neuron0x276a4d0()*0.0349312);
}

double NNfunction-ss_dLcR::synapse0x2780ac0() {
   return (neuron0x276a810()*0.109164);
}

double NNfunction-ss_dLcR::synapse0x2780b00() {
   return (neuron0x276ab50()*-0.00853718);
}

double NNfunction-ss_dLcR::synapse0x2780b40() {
   return (neuron0x276ae90()*0.0568363);
}

double NNfunction-ss_dLcR::synapse0x2780b80() {
   return (neuron0x276b1d0()*0.0869569);
}

double NNfunction-ss_dLcR::synapse0x2780bc0() {
   return (neuron0x276b510()*0.370281);
}

double NNfunction-ss_dLcR::synapse0x2780c00() {
   return (neuron0x276b850()*-0.0560487);
}

double NNfunction-ss_dLcR::synapse0x2780c40() {
   return (neuron0x276bb90()*0.0161159);
}

double NNfunction-ss_dLcR::synapse0x2780c80() {
   return (neuron0x276bed0()*-0.0120514);
}

double NNfunction-ss_dLcR::synapse0x2780cc0() {
   return (neuron0x276c210()*0.344458);
}

double NNfunction-ss_dLcR::synapse0x2780750() {
   return (neuron0x276c550()*0.0286235);
}

double NNfunction-ss_dLcR::synapse0x2780790() {
   return (neuron0x276cab0()*-0.0415917);
}

double NNfunction-ss_dLcR::synapse0x2780e10() {
   return (neuron0x276ccd0()*-0.00376143);
}

double NNfunction-ss_dLcR::synapse0x2780e50() {
   return (neuron0x276d010()*0.0490037);
}

double NNfunction-ss_dLcR::synapse0x2780e90() {
   return (neuron0x276d350()*0.0112591);
}

double NNfunction-ss_dLcR::synapse0x2780ed0() {
   return (neuron0x276d690()*-0.00209018);
}

double NNfunction-ss_dLcR::synapse0x2780f10() {
   return (neuron0x276d9d0()*0.000669578);
}

double NNfunction-ss_dLcR::synapse0x2780f50() {
   return (neuron0x276dd10()*-0.0262566);
}

double NNfunction-ss_dLcR::synapse0x27812d0() {
   return (neuron0x27691e0()*-0.0289204);
}

double NNfunction-ss_dLcR::synapse0x2781310() {
   return (neuron0x2769490()*-0.037209);
}

double NNfunction-ss_dLcR::synapse0x2781350() {
   return (neuron0x27697d0()*0.0471567);
}

double NNfunction-ss_dLcR::synapse0x2781390() {
   return (neuron0x2769b10()*-0.155417);
}

double NNfunction-ss_dLcR::synapse0x27813d0() {
   return (neuron0x2769e50()*-0.0360656);
}

double NNfunction-ss_dLcR::synapse0x2781410() {
   return (neuron0x276a190()*-0.0862559);
}

double NNfunction-ss_dLcR::synapse0x2781450() {
   return (neuron0x276a4d0()*0.00399221);
}

double NNfunction-ss_dLcR::synapse0x2781490() {
   return (neuron0x276a810()*0.0252245);
}

double NNfunction-ss_dLcR::synapse0x27814d0() {
   return (neuron0x276ab50()*-0.0122618);
}

double NNfunction-ss_dLcR::synapse0x2781510() {
   return (neuron0x276ae90()*0.00792044);
}

double NNfunction-ss_dLcR::synapse0x2781550() {
   return (neuron0x276b1d0()*-0.0383734);
}

double NNfunction-ss_dLcR::synapse0x2781590() {
   return (neuron0x276b510()*-0.515469);
}

double NNfunction-ss_dLcR::synapse0x27815d0() {
   return (neuron0x276b850()*-0.0061422);
}

double NNfunction-ss_dLcR::synapse0x2781610() {
   return (neuron0x276bb90()*-0.0213155);
}

double NNfunction-ss_dLcR::synapse0x2781650() {
   return (neuron0x276bed0()*-0.0258376);
}

double NNfunction-ss_dLcR::synapse0x2781690() {
   return (neuron0x276c210()*-1.03871);
}

double NNfunction-ss_dLcR::synapse0x2781120() {
   return (neuron0x276c550()*-0.053161);
}

double NNfunction-ss_dLcR::synapse0x2781160() {
   return (neuron0x276cab0()*-0.0121856);
}

double NNfunction-ss_dLcR::synapse0x27817e0() {
   return (neuron0x276ccd0()*0.0199363);
}

double NNfunction-ss_dLcR::synapse0x2781820() {
   return (neuron0x276d010()*0.00990936);
}

double NNfunction-ss_dLcR::synapse0x2781860() {
   return (neuron0x276d350()*-0.0232274);
}

double NNfunction-ss_dLcR::synapse0x27818a0() {
   return (neuron0x276d690()*-0.0156021);
}

double NNfunction-ss_dLcR::synapse0x27818e0() {
   return (neuron0x276d9d0()*0.0225154);
}

double NNfunction-ss_dLcR::synapse0x2781920() {
   return (neuron0x276dd10()*0.0290346);
}

double NNfunction-ss_dLcR::synapse0x2781ca0() {
   return (neuron0x27691e0()*-0.247204);
}

double NNfunction-ss_dLcR::synapse0x2781ce0() {
   return (neuron0x2769490()*-0.335719);
}

double NNfunction-ss_dLcR::synapse0x2781d20() {
   return (neuron0x27697d0()*1.15692);
}

double NNfunction-ss_dLcR::synapse0x2781d60() {
   return (neuron0x2769b10()*1.94335);
}

double NNfunction-ss_dLcR::synapse0x2781da0() {
   return (neuron0x2769e50()*-0.704156);
}

double NNfunction-ss_dLcR::synapse0x2781de0() {
   return (neuron0x276a190()*-0.967618);
}

double NNfunction-ss_dLcR::synapse0x2781e20() {
   return (neuron0x276a4d0()*-0.524802);
}

double NNfunction-ss_dLcR::synapse0x2781e60() {
   return (neuron0x276a810()*-0.715982);
}

double NNfunction-ss_dLcR::synapse0x2781ea0() {
   return (neuron0x276ab50()*-0.961912);
}

double NNfunction-ss_dLcR::synapse0x2781ee0() {
   return (neuron0x276ae90()*0.102486);
}

double NNfunction-ss_dLcR::synapse0x2781f20() {
   return (neuron0x276b1d0()*-1.22146);
}

double NNfunction-ss_dLcR::synapse0x2781f60() {
   return (neuron0x276b510()*0.761927);
}

double NNfunction-ss_dLcR::synapse0x2781fa0() {
   return (neuron0x276b850()*-0.974301);
}

double NNfunction-ss_dLcR::synapse0x2781fe0() {
   return (neuron0x276bb90()*0.271479);
}

double NNfunction-ss_dLcR::synapse0x2782020() {
   return (neuron0x276bed0()*-0.321758);
}

double NNfunction-ss_dLcR::synapse0x2782060() {
   return (neuron0x276c210()*0.702425);
}

double NNfunction-ss_dLcR::synapse0x2781af0() {
   return (neuron0x276c550()*1.5112);
}

double NNfunction-ss_dLcR::synapse0x2781b30() {
   return (neuron0x276cab0()*0.823182);
}

double NNfunction-ss_dLcR::synapse0x27821b0() {
   return (neuron0x276ccd0()*0.0621552);
}

double NNfunction-ss_dLcR::synapse0x27821f0() {
   return (neuron0x276d010()*0.459742);
}

double NNfunction-ss_dLcR::synapse0x2782230() {
   return (neuron0x276d350()*-0.770803);
}

double NNfunction-ss_dLcR::synapse0x2782270() {
   return (neuron0x276d690()*-0.391083);
}

double NNfunction-ss_dLcR::synapse0x27822b0() {
   return (neuron0x276d9d0()*0.567729);
}

double NNfunction-ss_dLcR::synapse0x27822f0() {
   return (neuron0x276dd10()*0.606144);
}

double NNfunction-ss_dLcR::synapse0x2782670() {
   return (neuron0x27691e0()*0.197878);
}

double NNfunction-ss_dLcR::synapse0x27826b0() {
   return (neuron0x2769490()*0.684212);
}

double NNfunction-ss_dLcR::synapse0x27826f0() {
   return (neuron0x27697d0()*0.0106027);
}

double NNfunction-ss_dLcR::synapse0x2782730() {
   return (neuron0x2769b10()*0.271953);
}

double NNfunction-ss_dLcR::synapse0x2782770() {
   return (neuron0x2769e50()*0.341601);
}

double NNfunction-ss_dLcR::synapse0x27827b0() {
   return (neuron0x276a190()*-0.461769);
}

double NNfunction-ss_dLcR::synapse0x27827f0() {
   return (neuron0x276a4d0()*-0.0174012);
}

double NNfunction-ss_dLcR::synapse0x2782830() {
   return (neuron0x276a810()*0.10785);
}

double NNfunction-ss_dLcR::synapse0x2782870() {
   return (neuron0x276ab50()*-0.483343);
}

double NNfunction-ss_dLcR::synapse0x27828b0() {
   return (neuron0x276ae90()*-0.590355);
}

double NNfunction-ss_dLcR::synapse0x27828f0() {
   return (neuron0x276b1d0()*0.458686);
}

double NNfunction-ss_dLcR::synapse0x2782930() {
   return (neuron0x276b510()*0.195718);
}

double NNfunction-ss_dLcR::synapse0x2782970() {
   return (neuron0x276b850()*0.630518);
}

double NNfunction-ss_dLcR::synapse0x27829b0() {
   return (neuron0x276bb90()*-0.142921);
}

double NNfunction-ss_dLcR::synapse0x27829f0() {
   return (neuron0x276bed0()*0.495414);
}

double NNfunction-ss_dLcR::synapse0x2782a30() {
   return (neuron0x276c210()*-0.389014);
}

double NNfunction-ss_dLcR::synapse0x27824c0() {
   return (neuron0x276c550()*0.274953);
}

double NNfunction-ss_dLcR::synapse0x2782500() {
   return (neuron0x276cab0()*-0.87162);
}

double NNfunction-ss_dLcR::synapse0x2782b80() {
   return (neuron0x276ccd0()*0.929532);
}

double NNfunction-ss_dLcR::synapse0x2782bc0() {
   return (neuron0x276d010()*-0.252127);
}

double NNfunction-ss_dLcR::synapse0x2782c00() {
   return (neuron0x276d350()*-0.0486694);
}

double NNfunction-ss_dLcR::synapse0x2782c40() {
   return (neuron0x276d690()*0.434666);
}

double NNfunction-ss_dLcR::synapse0x2782c80() {
   return (neuron0x276d9d0()*-0.14936);
}

double NNfunction-ss_dLcR::synapse0x2782cc0() {
   return (neuron0x276dd10()*-0.486892);
}

double NNfunction-ss_dLcR::synapse0x2783040() {
   return (neuron0x27691e0()*-0.208732);
}

double NNfunction-ss_dLcR::synapse0x2783080() {
   return (neuron0x2769490()*-0.262927);
}

double NNfunction-ss_dLcR::synapse0x27830c0() {
   return (neuron0x27697d0()*-0.205842);
}

double NNfunction-ss_dLcR::synapse0x2783100() {
   return (neuron0x2769b10()*-0.42568);
}

double NNfunction-ss_dLcR::synapse0x2783140() {
   return (neuron0x2769e50()*-0.33181);
}

double NNfunction-ss_dLcR::synapse0x2783180() {
   return (neuron0x276a190()*-0.514393);
}

double NNfunction-ss_dLcR::synapse0x27831c0() {
   return (neuron0x276a4d0()*-0.0936656);
}

double NNfunction-ss_dLcR::synapse0x2783200() {
   return (neuron0x276a810()*-0.217498);
}

double NNfunction-ss_dLcR::synapse0x2783240() {
   return (neuron0x276ab50()*0.197222);
}

double NNfunction-ss_dLcR::synapse0x2783280() {
   return (neuron0x276ae90()*0.152827);
}

double NNfunction-ss_dLcR::synapse0x27832c0() {
   return (neuron0x276b1d0()*0.284281);
}

double NNfunction-ss_dLcR::synapse0x2783300() {
   return (neuron0x276b510()*0.117657);
}

double NNfunction-ss_dLcR::synapse0x2783340() {
   return (neuron0x276b850()*-1.0339);
}

double NNfunction-ss_dLcR::synapse0x2783380() {
   return (neuron0x276bb90()*0.0191379);
}

double NNfunction-ss_dLcR::synapse0x27833c0() {
   return (neuron0x276bed0()*0.14416);
}

double NNfunction-ss_dLcR::synapse0x2783400() {
   return (neuron0x276c210()*-0.00282141);
}

double NNfunction-ss_dLcR::synapse0x2782e90() {
   return (neuron0x276c550()*0.5042);
}

double NNfunction-ss_dLcR::synapse0x2782ed0() {
   return (neuron0x276cab0()*-0.294983);
}

double NNfunction-ss_dLcR::synapse0x2783550() {
   return (neuron0x276ccd0()*-0.18563);
}

double NNfunction-ss_dLcR::synapse0x2783590() {
   return (neuron0x276d010()*0.422327);
}

double NNfunction-ss_dLcR::synapse0x27835d0() {
   return (neuron0x276d350()*-1.14339);
}

double NNfunction-ss_dLcR::synapse0x2783610() {
   return (neuron0x276d690()*-0.198467);
}

double NNfunction-ss_dLcR::synapse0x2783650() {
   return (neuron0x276d9d0()*0.0630978);
}

double NNfunction-ss_dLcR::synapse0x2783690() {
   return (neuron0x276dd10()*0.362547);
}

double NNfunction-ss_dLcR::synapse0x2783a10() {
   return (neuron0x27691e0()*0.128348);
}

double NNfunction-ss_dLcR::synapse0x2777fe0() {
   return (neuron0x2769490()*-0.035011);
}

double NNfunction-ss_dLcR::synapse0x2778020() {
   return (neuron0x27697d0()*-0.33708);
}

double NNfunction-ss_dLcR::synapse0x2778060() {
   return (neuron0x2769b10()*0.353286);
}

double NNfunction-ss_dLcR::synapse0x27782b0() {
   return (neuron0x2769e50()*0.308881);
}

double NNfunction-ss_dLcR::synapse0x27782f0() {
   return (neuron0x276a190()*-0.0291246);
}

double NNfunction-ss_dLcR::synapse0x2778330() {
   return (neuron0x276a4d0()*-1.12767);
}

double NNfunction-ss_dLcR::synapse0x2778580() {
   return (neuron0x276a810()*0.217096);
}

double NNfunction-ss_dLcR::synapse0x27785c0() {
   return (neuron0x276ab50()*-0.0270453);
}

double NNfunction-ss_dLcR::synapse0x2778810() {
   return (neuron0x276ae90()*-0.450875);
}

double NNfunction-ss_dLcR::synapse0x2778850() {
   return (neuron0x276b1d0()*0.0901685);
}

double NNfunction-ss_dLcR::synapse0x2778890() {
   return (neuron0x276b510()*-0.842188);
}

double NNfunction-ss_dLcR::synapse0x2778ae0() {
   return (neuron0x276b850()*-0.0748239);
}

double NNfunction-ss_dLcR::synapse0x2778b20() {
   return (neuron0x276bb90()*-0.210751);
}

double NNfunction-ss_dLcR::synapse0x2778d70() {
   return (neuron0x276bed0()*-0.129959);
}

double NNfunction-ss_dLcR::synapse0x2778db0() {
   return (neuron0x276c210()*0.332811);
}

double NNfunction-ss_dLcR::synapse0x2783860() {
   return (neuron0x276c550()*-0.216417);
}

double NNfunction-ss_dLcR::synapse0x27838a0() {
   return (neuron0x276cab0()*-0.217274);
}

double NNfunction-ss_dLcR::synapse0x2778f00() {
   return (neuron0x276ccd0()*-0.265819);
}

double NNfunction-ss_dLcR::synapse0x2779410() {
   return (neuron0x276d010()*0.148609);
}

double NNfunction-ss_dLcR::synapse0x2779450() {
   return (neuron0x276d350()*-0.327378);
}

double NNfunction-ss_dLcR::synapse0x2779490() {
   return (neuron0x276d690()*-0.256869);
}

double NNfunction-ss_dLcR::synapse0x27796e0() {
   return (neuron0x276d9d0()*0.0898018);
}

double NNfunction-ss_dLcR::synapse0x2779720() {
   return (neuron0x276dd10()*0.00283653);
}

double NNfunction-ss_dLcR::synapse0x2778fd0() {
   return (neuron0x27691e0()*0.0599483);
}

double NNfunction-ss_dLcR::synapse0x2779010() {
   return (neuron0x2769490()*0.775207);
}

double NNfunction-ss_dLcR::synapse0x2779050() {
   return (neuron0x27697d0()*-0.133708);
}

double NNfunction-ss_dLcR::synapse0x2779090() {
   return (neuron0x2769b10()*-0.836383);
}

double NNfunction-ss_dLcR::synapse0x2779a10() {
   return (neuron0x2769e50()*-0.249638);
}

double NNfunction-ss_dLcR::synapse0x2785d60() {
   return (neuron0x276a190()*0.251725);
}

double NNfunction-ss_dLcR::synapse0x2785da0() {
   return (neuron0x276a4d0()*-0.210112);
}

double NNfunction-ss_dLcR::synapse0x2785de0() {
   return (neuron0x276a810()*-0.142676);
}

double NNfunction-ss_dLcR::synapse0x2785e20() {
   return (neuron0x276ab50()*0.308615);
}

double NNfunction-ss_dLcR::synapse0x2785e60() {
   return (neuron0x276ae90()*-0.0391361);
}

double NNfunction-ss_dLcR::synapse0x2785ea0() {
   return (neuron0x276b1d0()*0.188412);
}

double NNfunction-ss_dLcR::synapse0x2785ee0() {
   return (neuron0x276b510()*-0.372079);
}

double NNfunction-ss_dLcR::synapse0x2785f20() {
   return (neuron0x276b850()*0.0849324);
}

double NNfunction-ss_dLcR::synapse0x2785f60() {
   return (neuron0x276bb90()*-0.50697);
}

double NNfunction-ss_dLcR::synapse0x2785fa0() {
   return (neuron0x276bed0()*0.0899436);
}

double NNfunction-ss_dLcR::synapse0x2785fe0() {
   return (neuron0x276c210()*-0.807424);
}

double NNfunction-ss_dLcR::synapse0x27798f0() {
   return (neuron0x276c550()*-0.0748185);
}

double NNfunction-ss_dLcR::synapse0x2779930() {
   return (neuron0x276cab0()*-0.286995);
}

double NNfunction-ss_dLcR::synapse0x2786130() {
   return (neuron0x276ccd0()*-0.431381);
}

double NNfunction-ss_dLcR::synapse0x2786170() {
   return (neuron0x276d010()*-0.388046);
}

double NNfunction-ss_dLcR::synapse0x27861b0() {
   return (neuron0x276d350()*-0.423206);
}

double NNfunction-ss_dLcR::synapse0x27861f0() {
   return (neuron0x276d690()*-0.241334);
}

double NNfunction-ss_dLcR::synapse0x2786230() {
   return (neuron0x276d9d0()*0.0393137);
}

double NNfunction-ss_dLcR::synapse0x2786270() {
   return (neuron0x276dd10()*-0.115766);
}

double NNfunction-ss_dLcR::synapse0x27865f0() {
   return (neuron0x27691e0()*0.0742196);
}

double NNfunction-ss_dLcR::synapse0x2786630() {
   return (neuron0x2769490()*-0.408077);
}

double NNfunction-ss_dLcR::synapse0x2786670() {
   return (neuron0x27697d0()*0.4495);
}

double NNfunction-ss_dLcR::synapse0x27866b0() {
   return (neuron0x2769b10()*1.02238);
}

double NNfunction-ss_dLcR::synapse0x27866f0() {
   return (neuron0x2769e50()*-0.147941);
}

double NNfunction-ss_dLcR::synapse0x2786730() {
   return (neuron0x276a190()*-1.56566);
}

double NNfunction-ss_dLcR::synapse0x2786770() {
   return (neuron0x276a4d0()*-0.310559);
}

double NNfunction-ss_dLcR::synapse0x27867b0() {
   return (neuron0x276a810()*-0.583607);
}

double NNfunction-ss_dLcR::synapse0x27867f0() {
   return (neuron0x276ab50()*-0.412914);
}

double NNfunction-ss_dLcR::synapse0x2786830() {
   return (neuron0x276ae90()*-0.110253);
}

double NNfunction-ss_dLcR::synapse0x2786870() {
   return (neuron0x276b1d0()*-0.113462);
}

double NNfunction-ss_dLcR::synapse0x27868b0() {
   return (neuron0x276b510()*-0.783138);
}

double NNfunction-ss_dLcR::synapse0x27868f0() {
   return (neuron0x276b850()*0.551666);
}

double NNfunction-ss_dLcR::synapse0x2786930() {
   return (neuron0x276bb90()*0.544587);
}

double NNfunction-ss_dLcR::synapse0x2786970() {
   return (neuron0x276bed0()*0.532052);
}

double NNfunction-ss_dLcR::synapse0x27869b0() {
   return (neuron0x276c210()*-0.257867);
}

double NNfunction-ss_dLcR::synapse0x2786440() {
   return (neuron0x276c550()*-0.598487);
}

double NNfunction-ss_dLcR::synapse0x2786480() {
   return (neuron0x276cab0()*-0.539664);
}

double NNfunction-ss_dLcR::synapse0x2786b00() {
   return (neuron0x276ccd0()*0.275929);
}

double NNfunction-ss_dLcR::synapse0x2786b40() {
   return (neuron0x276d010()*0.0430813);
}

double NNfunction-ss_dLcR::synapse0x2786b80() {
   return (neuron0x276d350()*-0.58616);
}

double NNfunction-ss_dLcR::synapse0x2786bc0() {
   return (neuron0x276d690()*-0.785395);
}

double NNfunction-ss_dLcR::synapse0x2786c00() {
   return (neuron0x276d9d0()*1.37093);
}

double NNfunction-ss_dLcR::synapse0x2786c40() {
   return (neuron0x276dd10()*-0.100435);
}

double NNfunction-ss_dLcR::synapse0x2786fc0() {
   return (neuron0x27691e0()*-0.0474061);
}

double NNfunction-ss_dLcR::synapse0x2787000() {
   return (neuron0x2769490()*-0.102312);
}

double NNfunction-ss_dLcR::synapse0x2787040() {
   return (neuron0x27697d0()*-0.044186);
}

double NNfunction-ss_dLcR::synapse0x2787080() {
   return (neuron0x2769b10()*0.370737);
}

double NNfunction-ss_dLcR::synapse0x27870c0() {
   return (neuron0x2769e50()*-0.0294236);
}

double NNfunction-ss_dLcR::synapse0x2787100() {
   return (neuron0x276a190()*-0.219011);
}

double NNfunction-ss_dLcR::synapse0x2787140() {
   return (neuron0x276a4d0()*-0.0545121);
}

double NNfunction-ss_dLcR::synapse0x2787180() {
   return (neuron0x276a810()*0.0544115);
}

double NNfunction-ss_dLcR::synapse0x27871c0() {
   return (neuron0x276ab50()*-0.238517);
}

double NNfunction-ss_dLcR::synapse0x2787200() {
   return (neuron0x276ae90()*-0.112035);
}

double NNfunction-ss_dLcR::synapse0x2787240() {
   return (neuron0x276b1d0()*-0.180342);
}

double NNfunction-ss_dLcR::synapse0x2787280() {
   return (neuron0x276b510()*-0.267191);
}

double NNfunction-ss_dLcR::synapse0x27872c0() {
   return (neuron0x276b850()*0.185773);
}

double NNfunction-ss_dLcR::synapse0x2787300() {
   return (neuron0x276bb90()*0.35716);
}

double NNfunction-ss_dLcR::synapse0x2787340() {
   return (neuron0x276bed0()*0.191782);
}

double NNfunction-ss_dLcR::synapse0x2787380() {
   return (neuron0x276c210()*-0.322154);
}

double NNfunction-ss_dLcR::synapse0x2786e10() {
   return (neuron0x276c550()*-0.139031);
}

double NNfunction-ss_dLcR::synapse0x2786e50() {
   return (neuron0x276cab0()*-0.350983);
}

double NNfunction-ss_dLcR::synapse0x27874d0() {
   return (neuron0x276ccd0()*0.343957);
}

double NNfunction-ss_dLcR::synapse0x2787510() {
   return (neuron0x276d010()*0.262922);
}

double NNfunction-ss_dLcR::synapse0x2787550() {
   return (neuron0x276d350()*-0.0221019);
}

double NNfunction-ss_dLcR::synapse0x2787590() {
   return (neuron0x276d690()*-0.123077);
}

double NNfunction-ss_dLcR::synapse0x27875d0() {
   return (neuron0x276d9d0()*0.0342632);
}

double NNfunction-ss_dLcR::synapse0x2787610() {
   return (neuron0x276dd10()*-0.275834);
}

double NNfunction-ss_dLcR::synapse0x2787990() {
   return (neuron0x27691e0()*-0.0232546);
}

double NNfunction-ss_dLcR::synapse0x27879d0() {
   return (neuron0x2769490()*0.0157682);
}

double NNfunction-ss_dLcR::synapse0x2787a10() {
   return (neuron0x27697d0()*0.177711);
}

double NNfunction-ss_dLcR::synapse0x2787a50() {
   return (neuron0x2769b10()*-0.51843);
}

double NNfunction-ss_dLcR::synapse0x2787a90() {
   return (neuron0x2769e50()*-0.229508);
}

double NNfunction-ss_dLcR::synapse0x2787ad0() {
   return (neuron0x276a190()*0.240328);
}

double NNfunction-ss_dLcR::synapse0x2787b10() {
   return (neuron0x276a4d0()*-0.53908);
}

double NNfunction-ss_dLcR::synapse0x2787b50() {
   return (neuron0x276a810()*0.685934);
}

double NNfunction-ss_dLcR::synapse0x2787b90() {
   return (neuron0x276ab50()*0.0998781);
}

double NNfunction-ss_dLcR::synapse0x2787bd0() {
   return (neuron0x276ae90()*-0.0177106);
}

double NNfunction-ss_dLcR::synapse0x2787c10() {
   return (neuron0x276b1d0()*0.197538);
}

double NNfunction-ss_dLcR::synapse0x2787c50() {
   return (neuron0x276b510()*-0.235269);
}

double NNfunction-ss_dLcR::synapse0x2787c90() {
   return (neuron0x276b850()*0.228767);
}

double NNfunction-ss_dLcR::synapse0x2787cd0() {
   return (neuron0x276bb90()*-0.192095);
}

double NNfunction-ss_dLcR::synapse0x2787d10() {
   return (neuron0x276bed0()*0.0323619);
}

double NNfunction-ss_dLcR::synapse0x2787d50() {
   return (neuron0x276c210()*0.314294);
}

double NNfunction-ss_dLcR::synapse0x27877e0() {
   return (neuron0x276c550()*0.0652107);
}

double NNfunction-ss_dLcR::synapse0x2787820() {
   return (neuron0x276cab0()*0.322537);
}

double NNfunction-ss_dLcR::synapse0x2787ea0() {
   return (neuron0x276ccd0()*0.100753);
}

double NNfunction-ss_dLcR::synapse0x2787ee0() {
   return (neuron0x276d010()*0.13859);
}

double NNfunction-ss_dLcR::synapse0x2787f20() {
   return (neuron0x276d350()*-0.10256);
}

double NNfunction-ss_dLcR::synapse0x2787f60() {
   return (neuron0x276d690()*-0.0226366);
}

double NNfunction-ss_dLcR::synapse0x2787fa0() {
   return (neuron0x276d9d0()*0.105116);
}

double NNfunction-ss_dLcR::synapse0x2787fe0() {
   return (neuron0x276dd10()*-0.288026);
}

double NNfunction-ss_dLcR::synapse0x2788360() {
   return (neuron0x27691e0()*-0.0945569);
}

double NNfunction-ss_dLcR::synapse0x27883a0() {
   return (neuron0x2769490()*-0.657767);
}

double NNfunction-ss_dLcR::synapse0x27883e0() {
   return (neuron0x27697d0()*-0.018445);
}

double NNfunction-ss_dLcR::synapse0x2788420() {
   return (neuron0x2769b10()*-0.12944);
}

double NNfunction-ss_dLcR::synapse0x2788460() {
   return (neuron0x2769e50()*-0.12879);
}

double NNfunction-ss_dLcR::synapse0x27884a0() {
   return (neuron0x276a190()*-0.200842);
}

double NNfunction-ss_dLcR::synapse0x27884e0() {
   return (neuron0x276a4d0()*-0.135944);
}

double NNfunction-ss_dLcR::synapse0x2788520() {
   return (neuron0x276a810()*0.102106);
}

double NNfunction-ss_dLcR::synapse0x2788560() {
   return (neuron0x276ab50()*0.0550791);
}

double NNfunction-ss_dLcR::synapse0x27885a0() {
   return (neuron0x276ae90()*-0.705649);
}

double NNfunction-ss_dLcR::synapse0x27885e0() {
   return (neuron0x276b1d0()*0.492088);
}

double NNfunction-ss_dLcR::synapse0x2788620() {
   return (neuron0x276b510()*-0.25944);
}

double NNfunction-ss_dLcR::synapse0x2788660() {
   return (neuron0x276b850()*-0.915461);
}

double NNfunction-ss_dLcR::synapse0x27886a0() {
   return (neuron0x276bb90()*0.172287);
}

double NNfunction-ss_dLcR::synapse0x27886e0() {
   return (neuron0x276bed0()*0.362383);
}

double NNfunction-ss_dLcR::synapse0x2788720() {
   return (neuron0x276c210()*-0.850069);
}

double NNfunction-ss_dLcR::synapse0x27881b0() {
   return (neuron0x276c550()*0.0675846);
}

double NNfunction-ss_dLcR::synapse0x27881f0() {
   return (neuron0x276cab0()*-0.395075);
}

double NNfunction-ss_dLcR::synapse0x2788870() {
   return (neuron0x276ccd0()*-0.399884);
}

double NNfunction-ss_dLcR::synapse0x27888b0() {
   return (neuron0x276d010()*-0.424959);
}

double NNfunction-ss_dLcR::synapse0x27888f0() {
   return (neuron0x276d350()*-0.0946283);
}

double NNfunction-ss_dLcR::synapse0x2788930() {
   return (neuron0x276d690()*0.27211);
}

double NNfunction-ss_dLcR::synapse0x2788970() {
   return (neuron0x276d9d0()*-0.445415);
}

double NNfunction-ss_dLcR::synapse0x27889b0() {
   return (neuron0x276dd10()*-0.36681);
}

double NNfunction-ss_dLcR::synapse0x2788d30() {
   return (neuron0x27691e0()*0.0232678);
}

double NNfunction-ss_dLcR::synapse0x2788d70() {
   return (neuron0x2769490()*-0.0838609);
}

double NNfunction-ss_dLcR::synapse0x2788db0() {
   return (neuron0x27697d0()*0.427072);
}

double NNfunction-ss_dLcR::synapse0x2788df0() {
   return (neuron0x2769b10()*2.84828);
}

double NNfunction-ss_dLcR::synapse0x2788e30() {
   return (neuron0x2769e50()*0.179665);
}

double NNfunction-ss_dLcR::synapse0x2788e70() {
   return (neuron0x276a190()*0.215354);
}

double NNfunction-ss_dLcR::synapse0x2788eb0() {
   return (neuron0x276a4d0()*0.0883854);
}

double NNfunction-ss_dLcR::synapse0x2788ef0() {
   return (neuron0x276a810()*0.239569);
}

double NNfunction-ss_dLcR::synapse0x2788f30() {
   return (neuron0x276ab50()*0.2473);
}

double NNfunction-ss_dLcR::synapse0x2788f70() {
   return (neuron0x276ae90()*0.31943);
}

double NNfunction-ss_dLcR::synapse0x2788fb0() {
   return (neuron0x276b1d0()*0.211142);
}

double NNfunction-ss_dLcR::synapse0x2788ff0() {
   return (neuron0x276b510()*-0.519829);
}

double NNfunction-ss_dLcR::synapse0x2789030() {
   return (neuron0x276b850()*0.152662);
}

double NNfunction-ss_dLcR::synapse0x2789070() {
   return (neuron0x276bb90()*0.0621955);
}

double NNfunction-ss_dLcR::synapse0x27890b0() {
   return (neuron0x276bed0()*-0.0298075);
}

double NNfunction-ss_dLcR::synapse0x27890f0() {
   return (neuron0x276c210()*-1.29209);
}

double NNfunction-ss_dLcR::synapse0x2788b80() {
   return (neuron0x276c550()*0.0166934);
}

double NNfunction-ss_dLcR::synapse0x2788bc0() {
   return (neuron0x276cab0()*0.105148);
}

double NNfunction-ss_dLcR::synapse0x2789240() {
   return (neuron0x276ccd0()*-0.00470999);
}

double NNfunction-ss_dLcR::synapse0x2789280() {
   return (neuron0x276d010()*0.0645307);
}

double NNfunction-ss_dLcR::synapse0x27892c0() {
   return (neuron0x276d350()*-0.0201083);
}

double NNfunction-ss_dLcR::synapse0x2789300() {
   return (neuron0x276d690()*0.0976632);
}

double NNfunction-ss_dLcR::synapse0x2789340() {
   return (neuron0x276d9d0()*-0.0457024);
}

double NNfunction-ss_dLcR::synapse0x2789380() {
   return (neuron0x276dd10()*0.088834);
}

double NNfunction-ss_dLcR::synapse0x2789700() {
   return (neuron0x27691e0()*-0.86101);
}

double NNfunction-ss_dLcR::synapse0x2789740() {
   return (neuron0x2769490()*0.177065);
}

double NNfunction-ss_dLcR::synapse0x2789780() {
   return (neuron0x27697d0()*0.156654);
}

double NNfunction-ss_dLcR::synapse0x27897c0() {
   return (neuron0x2769b10()*-0.272822);
}

double NNfunction-ss_dLcR::synapse0x2789800() {
   return (neuron0x2769e50()*-0.122302);
}

double NNfunction-ss_dLcR::synapse0x2789840() {
   return (neuron0x276a190()*-0.430116);
}

double NNfunction-ss_dLcR::synapse0x2789880() {
   return (neuron0x276a4d0()*-0.523064);
}

double NNfunction-ss_dLcR::synapse0x27898c0() {
   return (neuron0x276a810()*-0.492624);
}

double NNfunction-ss_dLcR::synapse0x2789900() {
   return (neuron0x276ab50()*0.388689);
}

double NNfunction-ss_dLcR::synapse0x2789940() {
   return (neuron0x276ae90()*0.556968);
}

double NNfunction-ss_dLcR::synapse0x2789980() {
   return (neuron0x276b1d0()*0.049024);
}

double NNfunction-ss_dLcR::synapse0x27899c0() {
   return (neuron0x276b510()*0.303968);
}

double NNfunction-ss_dLcR::synapse0x2789a00() {
   return (neuron0x276b850()*-0.629307);
}

double NNfunction-ss_dLcR::synapse0x2789a40() {
   return (neuron0x276bb90()*-0.0694942);
}

double NNfunction-ss_dLcR::synapse0x2789a80() {
   return (neuron0x276bed0()*0.299888);
}

double NNfunction-ss_dLcR::synapse0x2789ac0() {
   return (neuron0x276c210()*-0.0447719);
}

double NNfunction-ss_dLcR::synapse0x2789550() {
   return (neuron0x276c550()*-0.42283);
}

double NNfunction-ss_dLcR::synapse0x2789590() {
   return (neuron0x276cab0()*-0.167015);
}

double NNfunction-ss_dLcR::synapse0x2789c10() {
   return (neuron0x276ccd0()*-0.302362);
}

double NNfunction-ss_dLcR::synapse0x2789c50() {
   return (neuron0x276d010()*0.0409997);
}

double NNfunction-ss_dLcR::synapse0x2789c90() {
   return (neuron0x276d350()*-0.619415);
}

double NNfunction-ss_dLcR::synapse0x2789cd0() {
   return (neuron0x276d690()*0.650364);
}

double NNfunction-ss_dLcR::synapse0x2789d10() {
   return (neuron0x276d9d0()*0.415381);
}

double NNfunction-ss_dLcR::synapse0x2789d50() {
   return (neuron0x276dd10()*-0.437977);
}

double NNfunction-ss_dLcR::synapse0x278a0d0() {
   return (neuron0x27691e0()*-0.632818);
}

double NNfunction-ss_dLcR::synapse0x278a110() {
   return (neuron0x2769490()*0.123962);
}

double NNfunction-ss_dLcR::synapse0x278a150() {
   return (neuron0x27697d0()*0.521443);
}

double NNfunction-ss_dLcR::synapse0x278a190() {
   return (neuron0x2769b10()*0.513618);
}

double NNfunction-ss_dLcR::synapse0x278a1d0() {
   return (neuron0x2769e50()*-0.555674);
}

double NNfunction-ss_dLcR::synapse0x278a210() {
   return (neuron0x276a190()*0.394488);
}

double NNfunction-ss_dLcR::synapse0x278a250() {
   return (neuron0x276a4d0()*0.0666259);
}

double NNfunction-ss_dLcR::synapse0x278a290() {
   return (neuron0x276a810()*-0.0566475);
}

double NNfunction-ss_dLcR::synapse0x278a2d0() {
   return (neuron0x276ab50()*-0.13336);
}

double NNfunction-ss_dLcR::synapse0x278a310() {
   return (neuron0x276ae90()*-0.424579);
}

double NNfunction-ss_dLcR::synapse0x278a350() {
   return (neuron0x276b1d0()*-0.266124);
}

double NNfunction-ss_dLcR::synapse0x278a390() {
   return (neuron0x276b510()*0.0284648);
}

double NNfunction-ss_dLcR::synapse0x278a3d0() {
   return (neuron0x276b850()*-0.0239101);
}

double NNfunction-ss_dLcR::synapse0x278a410() {
   return (neuron0x276bb90()*0.327914);
}

double NNfunction-ss_dLcR::synapse0x278a450() {
   return (neuron0x276bed0()*0.105432);
}

double NNfunction-ss_dLcR::synapse0x278a490() {
   return (neuron0x276c210()*-0.418658);
}

double NNfunction-ss_dLcR::synapse0x2789f20() {
   return (neuron0x276c550()*-0.16915);
}

double NNfunction-ss_dLcR::synapse0x2789f60() {
   return (neuron0x276cab0()*-0.2782);
}

double NNfunction-ss_dLcR::synapse0x278a5e0() {
   return (neuron0x276ccd0()*1.0568);
}

double NNfunction-ss_dLcR::synapse0x278a620() {
   return (neuron0x276d010()*0.210357);
}

double NNfunction-ss_dLcR::synapse0x278a660() {
   return (neuron0x276d350()*-0.155949);
}

double NNfunction-ss_dLcR::synapse0x278a6a0() {
   return (neuron0x276d690()*-0.0979807);
}

double NNfunction-ss_dLcR::synapse0x278a6e0() {
   return (neuron0x276d9d0()*-0.00974523);
}

double NNfunction-ss_dLcR::synapse0x278a720() {
   return (neuron0x276dd10()*0.32542);
}

double NNfunction-ss_dLcR::synapse0x27731d0() {
   return (neuron0x27691e0()*-0.118598);
}

double NNfunction-ss_dLcR::synapse0x2773210() {
   return (neuron0x2769490()*0.0389943);
}

double NNfunction-ss_dLcR::synapse0x2773250() {
   return (neuron0x27697d0()*0.290294);
}

double NNfunction-ss_dLcR::synapse0x2773290() {
   return (neuron0x2769b10()*-0.257342);
}

double NNfunction-ss_dLcR::synapse0x27732d0() {
   return (neuron0x2769e50()*0.335626);
}

double NNfunction-ss_dLcR::synapse0x2773310() {
   return (neuron0x276a190()*-0.617243);
}

double NNfunction-ss_dLcR::synapse0x2773350() {
   return (neuron0x276a4d0()*-0.421027);
}

double NNfunction-ss_dLcR::synapse0x2773390() {
   return (neuron0x276a810()*-0.321523);
}

double NNfunction-ss_dLcR::synapse0x278aeb0() {
   return (neuron0x276ab50()*0.148541);
}

double NNfunction-ss_dLcR::synapse0x278aef0() {
   return (neuron0x276ae90()*-0.235605);
}

double NNfunction-ss_dLcR::synapse0x278af30() {
   return (neuron0x276b1d0()*0.143461);
}

double NNfunction-ss_dLcR::synapse0x278af70() {
   return (neuron0x276b510()*-1.53074);
}

double NNfunction-ss_dLcR::synapse0x278afb0() {
   return (neuron0x276b850()*1.09287);
}

double NNfunction-ss_dLcR::synapse0x278aff0() {
   return (neuron0x276bb90()*-0.0146093);
}

double NNfunction-ss_dLcR::synapse0x278b030() {
   return (neuron0x276bed0()*0.872771);
}

double NNfunction-ss_dLcR::synapse0x278b070() {
   return (neuron0x276c210()*0.188241);
}

double NNfunction-ss_dLcR::synapse0x278a8f0() {
   return (neuron0x276c550()*-0.107892);
}

double NNfunction-ss_dLcR::synapse0x278a930() {
   return (neuron0x276cab0()*0.372608);
}

double NNfunction-ss_dLcR::synapse0x278b1c0() {
   return (neuron0x276ccd0()*0.287252);
}

double NNfunction-ss_dLcR::synapse0x278b200() {
   return (neuron0x276d010()*0.655171);
}

double NNfunction-ss_dLcR::synapse0x278b240() {
   return (neuron0x276d350()*-0.582307);
}

double NNfunction-ss_dLcR::synapse0x278b280() {
   return (neuron0x276d690()*0.226471);
}

double NNfunction-ss_dLcR::synapse0x278b2c0() {
   return (neuron0x276d9d0()*-0.123704);
}

double NNfunction-ss_dLcR::synapse0x278b300() {
   return (neuron0x276dd10()*-0.191162);
}

double NNfunction-ss_dLcR::synapse0x278b680() {
   return (neuron0x27691e0()*0.0426838);
}

double NNfunction-ss_dLcR::synapse0x278b6c0() {
   return (neuron0x2769490()*-0.00266539);
}

double NNfunction-ss_dLcR::synapse0x278b700() {
   return (neuron0x27697d0()*-0.0450624);
}

double NNfunction-ss_dLcR::synapse0x278b740() {
   return (neuron0x2769b10()*-13.5173);
}

double NNfunction-ss_dLcR::synapse0x278b780() {
   return (neuron0x2769e50()*-0.00959425);
}

double NNfunction-ss_dLcR::synapse0x278b7c0() {
   return (neuron0x276a190()*-0.0267745);
}

double NNfunction-ss_dLcR::synapse0x278b800() {
   return (neuron0x276a4d0()*0.0123005);
}

double NNfunction-ss_dLcR::synapse0x278b840() {
   return (neuron0x276a810()*-0.00584319);
}

double NNfunction-ss_dLcR::synapse0x278b880() {
   return (neuron0x276ab50()*0.00372572);
}

double NNfunction-ss_dLcR::synapse0x278b8c0() {
   return (neuron0x276ae90()*-0.0157652);
}

double NNfunction-ss_dLcR::synapse0x278b900() {
   return (neuron0x276b1d0()*0.0668003);
}

double NNfunction-ss_dLcR::synapse0x278b940() {
   return (neuron0x276b510()*0.192301);
}

double NNfunction-ss_dLcR::synapse0x278b980() {
   return (neuron0x276b850()*-0.0547477);
}

double NNfunction-ss_dLcR::synapse0x278b9c0() {
   return (neuron0x276bb90()*-0.0307979);
}

double NNfunction-ss_dLcR::synapse0x278ba00() {
   return (neuron0x276bed0()*0.0135276);
}

double NNfunction-ss_dLcR::synapse0x278ba40() {
   return (neuron0x276c210()*0.670548);
}

double NNfunction-ss_dLcR::synapse0x278b4d0() {
   return (neuron0x276c550()*0.0238647);
}

double NNfunction-ss_dLcR::synapse0x278b510() {
   return (neuron0x276cab0()*-0.0411048);
}

double NNfunction-ss_dLcR::synapse0x278bb90() {
   return (neuron0x276ccd0()*-0.0209721);
}

double NNfunction-ss_dLcR::synapse0x278bbd0() {
   return (neuron0x276d010()*0.0119867);
}

double NNfunction-ss_dLcR::synapse0x278bc10() {
   return (neuron0x276d350()*-0.0134569);
}

double NNfunction-ss_dLcR::synapse0x278bc50() {
   return (neuron0x276d690()*-0.0159216);
}

double NNfunction-ss_dLcR::synapse0x278bc90() {
   return (neuron0x276d9d0()*0.0026139);
}

double NNfunction-ss_dLcR::synapse0x278bcd0() {
   return (neuron0x276dd10()*-0.0531615);
}

double NNfunction-ss_dLcR::synapse0x278c050() {
   return (neuron0x27691e0()*0.0633455);
}

double NNfunction-ss_dLcR::synapse0x278c090() {
   return (neuron0x2769490()*0.262628);
}

double NNfunction-ss_dLcR::synapse0x278c0d0() {
   return (neuron0x27697d0()*0.162001);
}

double NNfunction-ss_dLcR::synapse0x278c110() {
   return (neuron0x2769b10()*1.01824);
}

double NNfunction-ss_dLcR::synapse0x278c150() {
   return (neuron0x2769e50()*-0.00317471);
}

double NNfunction-ss_dLcR::synapse0x278c190() {
   return (neuron0x276a190()*0.077898);
}

double NNfunction-ss_dLcR::synapse0x278c1d0() {
   return (neuron0x276a4d0()*-0.0493696);
}

double NNfunction-ss_dLcR::synapse0x278c210() {
   return (neuron0x276a810()*0.054068);
}

double NNfunction-ss_dLcR::synapse0x278c250() {
   return (neuron0x276ab50()*0.11819);
}

double NNfunction-ss_dLcR::synapse0x278c290() {
   return (neuron0x276ae90()*0.0415282);
}

double NNfunction-ss_dLcR::synapse0x278c2d0() {
   return (neuron0x276b1d0()*0.191566);
}

double NNfunction-ss_dLcR::synapse0x278c310() {
   return (neuron0x276b510()*-0.0426561);
}

double NNfunction-ss_dLcR::synapse0x278c350() {
   return (neuron0x276b850()*-0.136632);
}

double NNfunction-ss_dLcR::synapse0x278c390() {
   return (neuron0x276bb90()*-0.0519235);
}

double NNfunction-ss_dLcR::synapse0x278c3d0() {
   return (neuron0x276bed0()*0.0146536);
}

double NNfunction-ss_dLcR::synapse0x278c410() {
   return (neuron0x276c210()*0.649627);
}

double NNfunction-ss_dLcR::synapse0x278bea0() {
   return (neuron0x276c550()*-0.0317022);
}

double NNfunction-ss_dLcR::synapse0x278bee0() {
   return (neuron0x276cab0()*-0.033133);
}

double NNfunction-ss_dLcR::synapse0x277ca10() {
   return (neuron0x276ccd0()*-0.0217584);
}

double NNfunction-ss_dLcR::synapse0x277ca50() {
   return (neuron0x276d010()*0.00281231);
}

double NNfunction-ss_dLcR::synapse0x277ca90() {
   return (neuron0x276d350()*-0.0439522);
}

double NNfunction-ss_dLcR::synapse0x277cad0() {
   return (neuron0x276d690()*-0.0229642);
}

double NNfunction-ss_dLcR::synapse0x277cb10() {
   return (neuron0x276d9d0()*0.00610637);
}

double NNfunction-ss_dLcR::synapse0x277cb50() {
   return (neuron0x276dd10()*0.109248);
}

double NNfunction-ss_dLcR::synapse0x277ced0() {
   return (neuron0x27691e0()*0.0513168);
}

double NNfunction-ss_dLcR::synapse0x277cf10() {
   return (neuron0x2769490()*-0.0418953);
}

double NNfunction-ss_dLcR::synapse0x277cf50() {
   return (neuron0x27697d0()*0.0364017);
}

double NNfunction-ss_dLcR::synapse0x277cf90() {
   return (neuron0x2769b10()*-2.40735);
}

double NNfunction-ss_dLcR::synapse0x277cfd0() {
   return (neuron0x2769e50()*0.065935);
}

double NNfunction-ss_dLcR::synapse0x277d010() {
   return (neuron0x276a190()*0.0567932);
}

double NNfunction-ss_dLcR::synapse0x277d050() {
   return (neuron0x276a4d0()*0.0272491);
}

double NNfunction-ss_dLcR::synapse0x277d090() {
   return (neuron0x276a810()*0.0308076);
}

double NNfunction-ss_dLcR::synapse0x277d0d0() {
   return (neuron0x276ab50()*0.0558724);
}

double NNfunction-ss_dLcR::synapse0x277d110() {
   return (neuron0x276ae90()*0.0490393);
}

double NNfunction-ss_dLcR::synapse0x277d150() {
   return (neuron0x276b1d0()*0.0499834);
}

double NNfunction-ss_dLcR::synapse0x277d190() {
   return (neuron0x276b510()*0.113335);
}

double NNfunction-ss_dLcR::synapse0x277d1d0() {
   return (neuron0x276b850()*-0.0102525);
}

double NNfunction-ss_dLcR::synapse0x277d210() {
   return (neuron0x276bb90()*0.0295775);
}

double NNfunction-ss_dLcR::synapse0x277d250() {
   return (neuron0x276bed0()*-0.0135397);
}

double NNfunction-ss_dLcR::synapse0x277d290() {
   return (neuron0x276c210()*0.160724);
}

double NNfunction-ss_dLcR::synapse0x277cd20() {
   return (neuron0x276c550()*0.00655074);
}

double NNfunction-ss_dLcR::synapse0x277cd60() {
   return (neuron0x276cab0()*-0.026453);
}

double NNfunction-ss_dLcR::synapse0x277d3e0() {
   return (neuron0x276ccd0()*0.00323818);
}

double NNfunction-ss_dLcR::synapse0x277d420() {
   return (neuron0x276d010()*-0.00841232);
}

double NNfunction-ss_dLcR::synapse0x277d460() {
   return (neuron0x276d350()*0.00563933);
}

double NNfunction-ss_dLcR::synapse0x277d4a0() {
   return (neuron0x276d690()*0.0220478);
}

double NNfunction-ss_dLcR::synapse0x277d4e0() {
   return (neuron0x276d9d0()*-0.00505032);
}

double NNfunction-ss_dLcR::synapse0x277d520() {
   return (neuron0x276dd10()*0.0185121);
}

double NNfunction-ss_dLcR::synapse0x277d8a0() {
   return (neuron0x27691e0()*0.0630614);
}

double NNfunction-ss_dLcR::synapse0x277d8e0() {
   return (neuron0x2769490()*0.382452);
}

double NNfunction-ss_dLcR::synapse0x277d920() {
   return (neuron0x27697d0()*0.00261427);
}

double NNfunction-ss_dLcR::synapse0x277d960() {
   return (neuron0x2769b10()*-1.28744);
}

double NNfunction-ss_dLcR::synapse0x277d9a0() {
   return (neuron0x2769e50()*0.680022);
}

double NNfunction-ss_dLcR::synapse0x277d9e0() {
   return (neuron0x276a190()*1.17179);
}

double NNfunction-ss_dLcR::synapse0x277da20() {
   return (neuron0x276a4d0()*0.580234);
}

double NNfunction-ss_dLcR::synapse0x277da60() {
   return (neuron0x276a810()*0.34166);
}

double NNfunction-ss_dLcR::synapse0x277daa0() {
   return (neuron0x276ab50()*0.355701);
}

double NNfunction-ss_dLcR::synapse0x277dae0() {
   return (neuron0x276ae90()*0.885807);
}

double NNfunction-ss_dLcR::synapse0x277db20() {
   return (neuron0x276b1d0()*1.388);
}

double NNfunction-ss_dLcR::synapse0x277db60() {
   return (neuron0x276b510()*-1.02137);
}

double NNfunction-ss_dLcR::synapse0x277dba0() {
   return (neuron0x276b850()*-0.243565);
}

double NNfunction-ss_dLcR::synapse0x277dbe0() {
   return (neuron0x276bb90()*-0.456659);
}

double NNfunction-ss_dLcR::synapse0x277dc20() {
   return (neuron0x276bed0()*-0.240852);
}

double NNfunction-ss_dLcR::synapse0x277dc60() {
   return (neuron0x276c210()*-0.353023);
}

double NNfunction-ss_dLcR::synapse0x277d6f0() {
   return (neuron0x276c550()*-0.147978);
}

double NNfunction-ss_dLcR::synapse0x277d730() {
   return (neuron0x276cab0()*-0.659333);
}

double NNfunction-ss_dLcR::synapse0x277ddb0() {
   return (neuron0x276ccd0()*-0.234188);
}

double NNfunction-ss_dLcR::synapse0x277ddf0() {
   return (neuron0x276d010()*-0.00689502);
}

double NNfunction-ss_dLcR::synapse0x277de30() {
   return (neuron0x276d350()*1.0719);
}

double NNfunction-ss_dLcR::synapse0x277de70() {
   return (neuron0x276d690()*0.25263);
}

double NNfunction-ss_dLcR::synapse0x277deb0() {
   return (neuron0x276d9d0()*-1.16991);
}

double NNfunction-ss_dLcR::synapse0x277def0() {
   return (neuron0x276dd10()*-0.208875);
}

double NNfunction-ss_dLcR::synapse0x277e270() {
   return (neuron0x27691e0()*-0.025647);
}

double NNfunction-ss_dLcR::synapse0x277e2b0() {
   return (neuron0x2769490()*-0.144626);
}

double NNfunction-ss_dLcR::synapse0x277e2f0() {
   return (neuron0x27697d0()*-0.0453548);
}

double NNfunction-ss_dLcR::synapse0x277e330() {
   return (neuron0x2769b10()*0.0609865);
}

double NNfunction-ss_dLcR::synapse0x277e370() {
   return (neuron0x2769e50()*0.197991);
}

double NNfunction-ss_dLcR::synapse0x277e3b0() {
   return (neuron0x276a190()*-0.741889);
}

double NNfunction-ss_dLcR::synapse0x277e3f0() {
   return (neuron0x276a4d0()*-0.222929);
}

double NNfunction-ss_dLcR::synapse0x277e430() {
   return (neuron0x276a810()*0.137731);
}

double NNfunction-ss_dLcR::synapse0x277e470() {
   return (neuron0x276ab50()*0.0153599);
}

double NNfunction-ss_dLcR::synapse0x277e4b0() {
   return (neuron0x276ae90()*-0.0913088);
}

double NNfunction-ss_dLcR::synapse0x277e4f0() {
   return (neuron0x276b1d0()*-0.238917);
}

double NNfunction-ss_dLcR::synapse0x277e530() {
   return (neuron0x276b510()*0.508287);
}

double NNfunction-ss_dLcR::synapse0x277e570() {
   return (neuron0x276b850()*-0.0357883);
}

double NNfunction-ss_dLcR::synapse0x277e5b0() {
   return (neuron0x276bb90()*-0.0992561);
}

double NNfunction-ss_dLcR::synapse0x277e5f0() {
   return (neuron0x276bed0()*-0.178697);
}

double NNfunction-ss_dLcR::synapse0x277e630() {
   return (neuron0x276c210()*0.38782);
}

double NNfunction-ss_dLcR::synapse0x277e0c0() {
   return (neuron0x276c550()*0.206169);
}

double NNfunction-ss_dLcR::synapse0x277e100() {
   return (neuron0x276cab0()*0.0857855);
}

double NNfunction-ss_dLcR::synapse0x277e780() {
   return (neuron0x276ccd0()*-0.24157);
}

double NNfunction-ss_dLcR::synapse0x277e7c0() {
   return (neuron0x276d010()*0.0800205);
}

double NNfunction-ss_dLcR::synapse0x277e800() {
   return (neuron0x276d350()*-0.0842219);
}

double NNfunction-ss_dLcR::synapse0x277e840() {
   return (neuron0x276d690()*-0.071986);
}

double NNfunction-ss_dLcR::synapse0x277e880() {
   return (neuron0x276d9d0()*0.069749);
}

double NNfunction-ss_dLcR::synapse0x277e8c0() {
   return (neuron0x276dd10()*-0.482867);
}

double NNfunction-ss_dLcR::synapse0x2790790() {
   return (neuron0x27691e0()*0.276633);
}

double NNfunction-ss_dLcR::synapse0x27907d0() {
   return (neuron0x2769490()*-0.296837);
}

double NNfunction-ss_dLcR::synapse0x2790810() {
   return (neuron0x27697d0()*0.441109);
}

double NNfunction-ss_dLcR::synapse0x2790850() {
   return (neuron0x2769b10()*0.228487);
}

double NNfunction-ss_dLcR::synapse0x2790890() {
   return (neuron0x2769e50()*0.00408345);
}

double NNfunction-ss_dLcR::synapse0x27908d0() {
   return (neuron0x276a190()*-0.220634);
}

double NNfunction-ss_dLcR::synapse0x2790910() {
   return (neuron0x276a4d0()*-0.265484);
}

double NNfunction-ss_dLcR::synapse0x2790950() {
   return (neuron0x276a810()*-0.237632);
}

double NNfunction-ss_dLcR::synapse0x2790990() {
   return (neuron0x276ab50()*0.311979);
}

double NNfunction-ss_dLcR::synapse0x27909d0() {
   return (neuron0x276ae90()*-0.347475);
}

double NNfunction-ss_dLcR::synapse0x2790a10() {
   return (neuron0x276b1d0()*-0.231677);
}

double NNfunction-ss_dLcR::synapse0x2790a50() {
   return (neuron0x276b510()*0.382337);
}

double NNfunction-ss_dLcR::synapse0x2790a90() {
   return (neuron0x276b850()*-0.228289);
}

double NNfunction-ss_dLcR::synapse0x2790ad0() {
   return (neuron0x276bb90()*0.244479);
}

double NNfunction-ss_dLcR::synapse0x2790b10() {
   return (neuron0x276bed0()*-0.0233229);
}

double NNfunction-ss_dLcR::synapse0x2790b50() {
   return (neuron0x276c210()*0.298459);
}

double NNfunction-ss_dLcR::synapse0x277e900() {
   return (neuron0x276c550()*-0.0490184);
}

double NNfunction-ss_dLcR::synapse0x277e940() {
   return (neuron0x276cab0()*0.000230596);
}

double NNfunction-ss_dLcR::synapse0x2790ca0() {
   return (neuron0x276ccd0()*-0.000113873);
}

double NNfunction-ss_dLcR::synapse0x2790ce0() {
   return (neuron0x276d010()*-0.499946);
}

double NNfunction-ss_dLcR::synapse0x2790d20() {
   return (neuron0x276d350()*0.0627226);
}

double NNfunction-ss_dLcR::synapse0x2790d60() {
   return (neuron0x276d690()*-0.0162262);
}

double NNfunction-ss_dLcR::synapse0x2790da0() {
   return (neuron0x276d9d0()*0.0290095);
}

double NNfunction-ss_dLcR::synapse0x2790de0() {
   return (neuron0x276dd10()*-0.128245);
}

double NNfunction-ss_dLcR::synapse0x2791160() {
   return (neuron0x27691e0()*0.0413306);
}

double NNfunction-ss_dLcR::synapse0x27911a0() {
   return (neuron0x2769490()*0.0215823);
}

double NNfunction-ss_dLcR::synapse0x27911e0() {
   return (neuron0x27697d0()*0.934532);
}

double NNfunction-ss_dLcR::synapse0x2791220() {
   return (neuron0x2769b10()*-0.0659713);
}

double NNfunction-ss_dLcR::synapse0x2791260() {
   return (neuron0x2769e50()*0.0642517);
}

double NNfunction-ss_dLcR::synapse0x27912a0() {
   return (neuron0x276a190()*0.00497342);
}

double NNfunction-ss_dLcR::synapse0x27912e0() {
   return (neuron0x276a4d0()*0.0906747);
}

double NNfunction-ss_dLcR::synapse0x2791320() {
   return (neuron0x276a810()*0.0311419);
}

double NNfunction-ss_dLcR::synapse0x2791360() {
   return (neuron0x276ab50()*-0.0613303);
}

double NNfunction-ss_dLcR::synapse0x27913a0() {
   return (neuron0x276ae90()*-0.0066192);
}

double NNfunction-ss_dLcR::synapse0x27913e0() {
   return (neuron0x276b1d0()*0.00620583);
}

double NNfunction-ss_dLcR::synapse0x2791420() {
   return (neuron0x276b510()*-0.245741);
}

double NNfunction-ss_dLcR::synapse0x2791460() {
   return (neuron0x276b850()*-0.0191774);
}

double NNfunction-ss_dLcR::synapse0x27914a0() {
   return (neuron0x276bb90()*-0.0188415);
}

double NNfunction-ss_dLcR::synapse0x27914e0() {
   return (neuron0x276bed0()*0.010521);
}

double NNfunction-ss_dLcR::synapse0x2791520() {
   return (neuron0x276c210()*0.091192);
}

double NNfunction-ss_dLcR::synapse0x2790fb0() {
   return (neuron0x276c550()*-0.0308071);
}

double NNfunction-ss_dLcR::synapse0x2790ff0() {
   return (neuron0x276cab0()*-0.0523062);
}

double NNfunction-ss_dLcR::synapse0x2791670() {
   return (neuron0x276ccd0()*-0.000486229);
}

double NNfunction-ss_dLcR::synapse0x27916b0() {
   return (neuron0x276d010()*-0.0224563);
}

double NNfunction-ss_dLcR::synapse0x27916f0() {
   return (neuron0x276d350()*0.0250291);
}

double NNfunction-ss_dLcR::synapse0x2791730() {
   return (neuron0x276d690()*-0.0242455);
}

double NNfunction-ss_dLcR::synapse0x2791770() {
   return (neuron0x276d9d0()*0.0283765);
}

double NNfunction-ss_dLcR::synapse0x27917b0() {
   return (neuron0x276dd10()*0.0535111);
}

double NNfunction-ss_dLcR::synapse0x2791b30() {
   return (neuron0x27691e0()*-0.0340082);
}

double NNfunction-ss_dLcR::synapse0x2791b70() {
   return (neuron0x2769490()*0.00258426);
}

double NNfunction-ss_dLcR::synapse0x2791bb0() {
   return (neuron0x27697d0()*0.00568802);
}

double NNfunction-ss_dLcR::synapse0x2791bf0() {
   return (neuron0x2769b10()*11.5726);
}

double NNfunction-ss_dLcR::synapse0x2791c30() {
   return (neuron0x2769e50()*-0.025649);
}

double NNfunction-ss_dLcR::synapse0x2791c70() {
   return (neuron0x276a190()*0.00682285);
}

double NNfunction-ss_dLcR::synapse0x2791cb0() {
   return (neuron0x276a4d0()*0.0188078);
}

double NNfunction-ss_dLcR::synapse0x2791cf0() {
   return (neuron0x276a810()*0.0258435);
}

double NNfunction-ss_dLcR::synapse0x2791d30() {
   return (neuron0x276ab50()*-0.000983123);
}

double NNfunction-ss_dLcR::synapse0x2791d70() {
   return (neuron0x276ae90()*0.00923151);
}

double NNfunction-ss_dLcR::synapse0x2791db0() {
   return (neuron0x276b1d0()*-0.0246274);
}

double NNfunction-ss_dLcR::synapse0x2791df0() {
   return (neuron0x276b510()*0.303301);
}

double NNfunction-ss_dLcR::synapse0x2791e30() {
   return (neuron0x276b850()*0.0206309);
}

double NNfunction-ss_dLcR::synapse0x2791e70() {
   return (neuron0x276bb90()*0.0448021);
}

double NNfunction-ss_dLcR::synapse0x2791eb0() {
   return (neuron0x276bed0()*0.0112383);
}

double NNfunction-ss_dLcR::synapse0x2791ef0() {
   return (neuron0x276c210()*0.355025);
}

double NNfunction-ss_dLcR::synapse0x2791980() {
   return (neuron0x276c550()*-0.0216102);
}

double NNfunction-ss_dLcR::synapse0x27919c0() {
   return (neuron0x276cab0()*-0.00545792);
}

double NNfunction-ss_dLcR::synapse0x2792040() {
   return (neuron0x276ccd0()*-0.0106988);
}

double NNfunction-ss_dLcR::synapse0x2792080() {
   return (neuron0x276d010()*-0.00702015);
}

double NNfunction-ss_dLcR::synapse0x27920c0() {
   return (neuron0x276d350()*-0.00860511);
}

double NNfunction-ss_dLcR::synapse0x2792100() {
   return (neuron0x276d690()*-0.0463764);
}

double NNfunction-ss_dLcR::synapse0x2792140() {
   return (neuron0x276d9d0()*-0.0282616);
}

double NNfunction-ss_dLcR::synapse0x2792180() {
   return (neuron0x276dd10()*0.0448189);
}

double NNfunction-ss_dLcR::synapse0x2792500() {
   return (neuron0x27691e0()*-0.0147314);
}

double NNfunction-ss_dLcR::synapse0x2792540() {
   return (neuron0x2769490()*0.00730008);
}

double NNfunction-ss_dLcR::synapse0x2792580() {
   return (neuron0x27697d0()*0.0114435);
}

double NNfunction-ss_dLcR::synapse0x27925c0() {
   return (neuron0x2769b10()*-2.74653);
}

double NNfunction-ss_dLcR::synapse0x2792600() {
   return (neuron0x2769e50()*-0.00024301);
}

double NNfunction-ss_dLcR::synapse0x2792640() {
   return (neuron0x276a190()*0.013191);
}

double NNfunction-ss_dLcR::synapse0x2792680() {
   return (neuron0x276a4d0()*0.00189582);
}

double NNfunction-ss_dLcR::synapse0x27926c0() {
   return (neuron0x276a810()*0.00854708);
}

double NNfunction-ss_dLcR::synapse0x2792700() {
   return (neuron0x276ab50()*0.00770458);
}

double NNfunction-ss_dLcR::synapse0x2792740() {
   return (neuron0x276ae90()*0.00537823);
}

double NNfunction-ss_dLcR::synapse0x2792780() {
   return (neuron0x276b1d0()*0.0101153);
}

double NNfunction-ss_dLcR::synapse0x27927c0() {
   return (neuron0x276b510()*-0.211311);
}

double NNfunction-ss_dLcR::synapse0x2792800() {
   return (neuron0x276b850()*0.0361696);
}

double NNfunction-ss_dLcR::synapse0x2792840() {
   return (neuron0x276bb90()*-0.0210256);
}

double NNfunction-ss_dLcR::synapse0x2792880() {
   return (neuron0x276bed0()*-3.99449e-05);
}

double NNfunction-ss_dLcR::synapse0x27928c0() {
   return (neuron0x276c210()*-0.178434);
}

double NNfunction-ss_dLcR::synapse0x2792350() {
   return (neuron0x276c550()*0.00370717);
}

double NNfunction-ss_dLcR::synapse0x2792390() {
   return (neuron0x276cab0()*0.0329672);
}

double NNfunction-ss_dLcR::synapse0x2792a10() {
   return (neuron0x276ccd0()*0.00616289);
}

double NNfunction-ss_dLcR::synapse0x2792a50() {
   return (neuron0x276d010()*0.0109665);
}

double NNfunction-ss_dLcR::synapse0x2792a90() {
   return (neuron0x276d350()*0.00819672);
}

double NNfunction-ss_dLcR::synapse0x2792ad0() {
   return (neuron0x276d690()*0.00375211);
}

double NNfunction-ss_dLcR::synapse0x2792b10() {
   return (neuron0x276d9d0()*0.00480035);
}

double NNfunction-ss_dLcR::synapse0x2792b50() {
   return (neuron0x276dd10()*-0.00760354);
}

double NNfunction-ss_dLcR::synapse0x276f0e0() {
   return (neuron0x276e180()*0.351051);
}

double NNfunction-ss_dLcR::synapse0x276f120() {
   return (neuron0x276ead0()*-0.0725045);
}

double NNfunction-ss_dLcR::synapse0x2770600() {
   return (neuron0x276f5b0()*1.37432);
}

double NNfunction-ss_dLcR::synapse0x2770640() {
   return (neuron0x2532900()*0.305162);
}

double NNfunction-ss_dLcR::synapse0x2770fd0() {
   return (neuron0x2770350()*-0.0992969);
}

double NNfunction-ss_dLcR::synapse0x2771010() {
   return (neuron0x2770d20()*-0.270535);
}

double NNfunction-ss_dLcR::synapse0x2771da0() {
   return (neuron0x2771af0()*0.215409);
}

double NNfunction-ss_dLcR::synapse0x2771de0() {
   return (neuron0x27724c0()*-0.238867);
}

double NNfunction-ss_dLcR::synapse0x2772770() {
   return (neuron0x2772e90()*-0.238195);
}

double NNfunction-ss_dLcR::synapse0x27727b0() {
   return (neuron0x2773970()*-0.0158182);
}

double NNfunction-ss_dLcR::synapse0x2773140() {
   return (neuron0x2774340()*-0.0715398);
}

double NNfunction-ss_dLcR::synapse0x2773180() {
   return (neuron0x2771420()*-0.580977);
}

double NNfunction-ss_dLcR::synapse0x2773c20() {
   return (neuron0x2775ef0()*-0.366249);
}

double NNfunction-ss_dLcR::synapse0x2773c60() {
   return (neuron0x27768c0()*-1.00061);
}

double NNfunction-ss_dLcR::synapse0x27745f0() {
   return (neuron0x2777290()*0.125329);
}

double NNfunction-ss_dLcR::synapse0x2774630() {
   return (neuron0x2777c60()*0.204383);
}

double NNfunction-ss_dLcR::synapse0x27716d0() {
   return (neuron0x2779a70()*-0.378946);
}

double NNfunction-ss_dLcR::synapse0x2771710() {
   return (neuron0x2779d50()*0.0129031);
}

double NNfunction-ss_dLcR::synapse0x27761a0() {
   return (neuron0x277a720()*-1.41215);
}

double NNfunction-ss_dLcR::synapse0x27761e0() {
   return (neuron0x277b0f0()*-0.103017);
}

double NNfunction-ss_dLcR::synapse0x2776b70() {
   return (neuron0x277bac0()*0.0662459);
}

double NNfunction-ss_dLcR::synapse0x2776bb0() {
   return (neuron0x277c490()*0.102617);
}

double NNfunction-ss_dLcR::synapse0x2777540() {
   return (neuron0x2774fe0()*-0.068819);
}

double NNfunction-ss_dLcR::synapse0x2777580() {
   return (neuron0x27759b0()*0.209781);
}

double NNfunction-ss_dLcR::synapse0x2777f10() {
   return (neuron0x277f220()*-0.345072);
}

double NNfunction-ss_dLcR::synapse0x2777f50() {
   return (neuron0x277fbf0()*0.794685);
}

double NNfunction-ss_dLcR::synapse0x276c0f0() {
   return (neuron0x27805c0()*0.911913);
}

double NNfunction-ss_dLcR::synapse0x276c130() {
   return (neuron0x2780f90()*-0.692118);
}

double NNfunction-ss_dLcR::synapse0x277a000() {
   return (neuron0x2781960()*-0.202291);
}

double NNfunction-ss_dLcR::synapse0x277a040() {
   return (neuron0x2782330()*0.0231624);
}

double NNfunction-ss_dLcR::synapse0x277a9d0() {
   return (neuron0x2782d00()*0.0411401);
}

double NNfunction-ss_dLcR::synapse0x277aa10() {
   return (neuron0x27836d0()*-0.176566);
}

double NNfunction-ss_dLcR::synapse0x277b3a0() {
   return (neuron0x2779760()*-0.221253);
}

double NNfunction-ss_dLcR::synapse0x277b3e0() {
   return (neuron0x27862b0()*-0.196363);
}

double NNfunction-ss_dLcR::synapse0x277bd70() {
   return (neuron0x2786c80()*-0.139786);
}

double NNfunction-ss_dLcR::synapse0x277bdb0() {
   return (neuron0x2787650()*-0.172834);
}

double NNfunction-ss_dLcR::synapse0x277c740() {
   return (neuron0x2788020()*-0.108398);
}

double NNfunction-ss_dLcR::synapse0x277c780() {
   return (neuron0x27889f0()*-0.771401);
}

double NNfunction-ss_dLcR::synapse0x2775290() {
   return (neuron0x27893c0()*0.151001);
}

double NNfunction-ss_dLcR::synapse0x27752d0() {
   return (neuron0x2789d90()*-0.0513868);
}

double NNfunction-ss_dLcR::synapse0x277eb40() {
   return (neuron0x278a760()*-0.236318);
}

double NNfunction-ss_dLcR::synapse0x277eb80() {
   return (neuron0x278b340()*2.94969);
}

double NNfunction-ss_dLcR::synapse0x277f4d0() {
   return (neuron0x278bd10()*0.406545);
}

double NNfunction-ss_dLcR::synapse0x277f510() {
   return (neuron0x277cb90()*0.0107869);
}

double NNfunction-ss_dLcR::synapse0x277fea0() {
   return (neuron0x277d560()*-0.522334);
}

double NNfunction-ss_dLcR::synapse0x277fee0() {
   return (neuron0x277df30()*0.0832711);
}

double NNfunction-ss_dLcR::synapse0x2780870() {
   return (neuron0x2790570()*-0.0348664);
}

double NNfunction-ss_dLcR::synapse0x27808b0() {
   return (neuron0x2790e20()*0.262709);
}

double NNfunction-ss_dLcR::synapse0x2781240() {
   return (neuron0x27917f0()*3.76334);
}

double NNfunction-ss_dLcR::synapse0x2781280() {
   return (neuron0x27921c0()*0.386105);
}

double NNfunction-ss_dLcR::synapse0x2783980() {
   return (neuron0x276e180()*-1.2579);
}

double NNfunction-ss_dLcR::synapse0x27839c0() {
   return (neuron0x276ead0()*0.512818);
}

double NNfunction-ss_dLcR::synapse0x2778f40() {
   return (neuron0x276f5b0()*1.74989);
}

double NNfunction-ss_dLcR::synapse0x2778f80() {
   return (neuron0x2532900()*-0.606132);
}

double NNfunction-ss_dLcR::synapse0x2786560() {
   return (neuron0x2770350()*-0.382766);
}

double NNfunction-ss_dLcR::synapse0x27865a0() {
   return (neuron0x2770d20()*1.06315);
}

double NNfunction-ss_dLcR::synapse0x2786f30() {
   return (neuron0x2771af0()*1.75771);
}

double NNfunction-ss_dLcR::synapse0x2786f70() {
   return (neuron0x27724c0()*-0.322913);
}

double NNfunction-ss_dLcR::synapse0x2787900() {
   return (neuron0x2772e90()*0.0188971);
}

double NNfunction-ss_dLcR::synapse0x2787940() {
   return (neuron0x2773970()*-0.0716355);
}

double NNfunction-ss_dLcR::synapse0x27882d0() {
   return (neuron0x2774340()*0.788135);
}

double NNfunction-ss_dLcR::synapse0x2788310() {
   return (neuron0x2771420()*-1.40277);
}

double NNfunction-ss_dLcR::synapse0x2788ca0() {
   return (neuron0x2775ef0()*-0.288888);
}

double NNfunction-ss_dLcR::synapse0x2788ce0() {
   return (neuron0x27768c0()*3.92665);
}

double NNfunction-ss_dLcR::synapse0x2789670() {
   return (neuron0x2777290()*-0.574623);
}

double NNfunction-ss_dLcR::synapse0x27896b0() {
   return (neuron0x2777c60()*0.328802);
}

double NNfunction-ss_dLcR::synapse0x278a040() {
   return (neuron0x2779a70()*0.551178);
}

double NNfunction-ss_dLcR::synapse0x278a080() {
   return (neuron0x2779d50()*-0.553461);
}

double NNfunction-ss_dLcR::synapse0x278aa10() {
   return (neuron0x277a720()*-2.16989);
}

double NNfunction-ss_dLcR::synapse0x278aa50() {
   return (neuron0x277b0f0()*-0.56346);
}

double NNfunction-ss_dLcR::synapse0x278b5f0() {
   return (neuron0x277bac0()*0.0444996);
}

double NNfunction-ss_dLcR::synapse0x278b630() {
   return (neuron0x277c490()*0.202534);
}

double NNfunction-ss_dLcR::synapse0x278bfc0() {
   return (neuron0x2774fe0()*0.750319);
}

double NNfunction-ss_dLcR::synapse0x278c000() {
   return (neuron0x27759b0()*0.0551099);
}

double NNfunction-ss_dLcR::synapse0x277ce40() {
   return (neuron0x277f220()*-0.500821);
}

double NNfunction-ss_dLcR::synapse0x277ce80() {
   return (neuron0x277fbf0()*0.574763);
}

double NNfunction-ss_dLcR::synapse0x277d810() {
   return (neuron0x27805c0()*-2.04716);
}

double NNfunction-ss_dLcR::synapse0x277d850() {
   return (neuron0x2780f90()*-1.84238);
}

double NNfunction-ss_dLcR::synapse0x277e1e0() {
   return (neuron0x2781960()*-0.351311);
}

double NNfunction-ss_dLcR::synapse0x277e220() {
   return (neuron0x2782330()*-0.241003);
}

double NNfunction-ss_dLcR::synapse0x2790700() {
   return (neuron0x2782d00()*0.384073);
}

double NNfunction-ss_dLcR::synapse0x2790740() {
   return (neuron0x27836d0()*0.289739);
}

double NNfunction-ss_dLcR::synapse0x27910d0() {
   return (neuron0x2779760()*0.125634);
}

double NNfunction-ss_dLcR::synapse0x2791110() {
   return (neuron0x27862b0()*-0.317554);
}

double NNfunction-ss_dLcR::synapse0x2791aa0() {
   return (neuron0x2786c80()*-0.4747);
}

double NNfunction-ss_dLcR::synapse0x2791ae0() {
   return (neuron0x2787650()*-0.80025);
}

double NNfunction-ss_dLcR::synapse0x2792470() {
   return (neuron0x2788020()*-0.254438);
}

double NNfunction-ss_dLcR::synapse0x27924b0() {
   return (neuron0x27889f0()*-2.24708);
}

double NNfunction-ss_dLcR::synapse0x276e3a0() {
   return (neuron0x27893c0()*-0.015819);
}

double NNfunction-ss_dLcR::synapse0x276e3e0() {
   return (neuron0x2789d90()*0.188659);
}

double NNfunction-ss_dLcR::synapse0x2781c10() {
   return (neuron0x278a760()*-0.120524);
}

double NNfunction-ss_dLcR::synapse0x2781c50() {
   return (neuron0x278b340()*3.10229);
}

double NNfunction-ss_dLcR::synapse0x2792b90() {
   return (neuron0x278bd10()*-1.204);
}

double NNfunction-ss_dLcR::synapse0x2792bd0() {
   return (neuron0x277cb90()*3.98479);
}

double NNfunction-ss_dLcR::synapse0x2792c10() {
   return (neuron0x277d560()*-0.590334);
}

double NNfunction-ss_dLcR::synapse0x2792c50() {
   return (neuron0x277df30()*0.725126);
}

double NNfunction-ss_dLcR::synapse0x2799b00() {
   return (neuron0x2790570()*-0.89228);
}

double NNfunction-ss_dLcR::synapse0x2799b40() {
   return (neuron0x2790e20()*1.20552);
}

double NNfunction-ss_dLcR::synapse0x2799b80() {
   return (neuron0x27917f0()*4.31301);
}

double NNfunction-ss_dLcR::synapse0x2799bc0() {
   return (neuron0x27921c0()*-2.13741);
}

double NNfunction-ss_dLcR::synapse0x2799f40() {
   return (neuron0x276e180()*2.32395);
}

double NNfunction-ss_dLcR::synapse0x2799f80() {
   return (neuron0x276ead0()*0.168409);
}

double NNfunction-ss_dLcR::synapse0x2799fc0() {
   return (neuron0x276f5b0()*-0.100484);
}

double NNfunction-ss_dLcR::synapse0x279a000() {
   return (neuron0x2532900()*0.256029);
}

double NNfunction-ss_dLcR::synapse0x279a040() {
   return (neuron0x2770350()*-0.50324);
}

double NNfunction-ss_dLcR::synapse0x279a080() {
   return (neuron0x2770d20()*-0.161635);
}

double NNfunction-ss_dLcR::synapse0x279a0c0() {
   return (neuron0x2771af0()*0.818822);
}

double NNfunction-ss_dLcR::synapse0x279a100() {
   return (neuron0x27724c0()*-0.851605);
}

double NNfunction-ss_dLcR::synapse0x279a140() {
   return (neuron0x2772e90()*-0.668609);
}

double NNfunction-ss_dLcR::synapse0x279a180() {
   return (neuron0x2773970()*0.689902);
}

double NNfunction-ss_dLcR::synapse0x279a1c0() {
   return (neuron0x2774340()*-1.63668);
}

double NNfunction-ss_dLcR::synapse0x279a200() {
   return (neuron0x2771420()*2.0991);
}

double NNfunction-ss_dLcR::synapse0x279a240() {
   return (neuron0x2775ef0()*-0.930559);
}

double NNfunction-ss_dLcR::synapse0x279a280() {
   return (neuron0x27768c0()*-1.27354);
}

double NNfunction-ss_dLcR::synapse0x279a2c0() {
   return (neuron0x2777290()*0.0848256);
}

double NNfunction-ss_dLcR::synapse0x279a300() {
   return (neuron0x2777c60()*0.431241);
}

double NNfunction-ss_dLcR::synapse0x2799d90() {
   return (neuron0x2779a70()*-1.19469);
}

double NNfunction-ss_dLcR::synapse0x2799dd0() {
   return (neuron0x2779d50()*-0.464736);
}

double NNfunction-ss_dLcR::synapse0x279a450() {
   return (neuron0x277a720()*0.566419);
}

double NNfunction-ss_dLcR::synapse0x279a490() {
   return (neuron0x277b0f0()*-1.86337);
}

double NNfunction-ss_dLcR::synapse0x279a4d0() {
   return (neuron0x277bac0()*0.488545);
}

double NNfunction-ss_dLcR::synapse0x279a510() {
   return (neuron0x277c490()*0.752498);
}

double NNfunction-ss_dLcR::synapse0x279a550() {
   return (neuron0x2774fe0()*-1.79602);
}

double NNfunction-ss_dLcR::synapse0x279a590() {
   return (neuron0x27759b0()*0.449024);
}

double NNfunction-ss_dLcR::synapse0x279a5d0() {
   return (neuron0x277f220()*-1.73958);
}

double NNfunction-ss_dLcR::synapse0x279a610() {
   return (neuron0x277fbf0()*0.663623);
}

double NNfunction-ss_dLcR::synapse0x279a650() {
   return (neuron0x27805c0()*-0.421605);
}

double NNfunction-ss_dLcR::synapse0x279a690() {
   return (neuron0x2780f90()*0.929576);
}

double NNfunction-ss_dLcR::synapse0x279a6d0() {
   return (neuron0x2781960()*-0.280088);
}

double NNfunction-ss_dLcR::synapse0x279a710() {
   return (neuron0x2782330()*-0.416637);
}

double NNfunction-ss_dLcR::synapse0x279a750() {
   return (neuron0x2782d00()*0.611317);
}

double NNfunction-ss_dLcR::synapse0x279a790() {
   return (neuron0x27836d0()*-0.136574);
}

double NNfunction-ss_dLcR::synapse0x279a340() {
   return (neuron0x2779760()*-0.7633);
}

double NNfunction-ss_dLcR::synapse0x279a380() {
   return (neuron0x27862b0()*-0.339341);
}

double NNfunction-ss_dLcR::synapse0x279a3c0() {
   return (neuron0x2786c80()*-0.354541);
}

double NNfunction-ss_dLcR::synapse0x279a400() {
   return (neuron0x2787650()*-1.40853);
}

double NNfunction-ss_dLcR::synapse0x279a9e0() {
   return (neuron0x2788020()*-0.793092);
}

double NNfunction-ss_dLcR::synapse0x279aa20() {
   return (neuron0x27889f0()*-1.10559);
}

double NNfunction-ss_dLcR::synapse0x279aa60() {
   return (neuron0x27893c0()*-0.455341);
}

double NNfunction-ss_dLcR::synapse0x279aaa0() {
   return (neuron0x2789d90()*-0.35996);
}

double NNfunction-ss_dLcR::synapse0x279aae0() {
   return (neuron0x278a760()*-0.501649);
}

double NNfunction-ss_dLcR::synapse0x279ab20() {
   return (neuron0x278b340()*1.36456);
}

double NNfunction-ss_dLcR::synapse0x279ab60() {
   return (neuron0x278bd10()*1.43701);
}

double NNfunction-ss_dLcR::synapse0x279aba0() {
   return (neuron0x277cb90()*-2.23851);
}

double NNfunction-ss_dLcR::synapse0x279abe0() {
   return (neuron0x277d560()*-1.30092);
}

double NNfunction-ss_dLcR::synapse0x279ac20() {
   return (neuron0x277df30()*-0.0259771);
}

double NNfunction-ss_dLcR::synapse0x279ac60() {
   return (neuron0x2790570()*-0.344364);
}

double NNfunction-ss_dLcR::synapse0x279aca0() {
   return (neuron0x2790e20()*0.0876107);
}

double NNfunction-ss_dLcR::synapse0x279ace0() {
   return (neuron0x27917f0()*1.71818);
}

double NNfunction-ss_dLcR::synapse0x279ad20() {
   return (neuron0x27921c0()*4.65453);
}

double NNfunction-ss_dLcR::synapse0x279b0a0() {
   return (neuron0x276e180()*-0.537938);
}

double NNfunction-ss_dLcR::synapse0x279b0e0() {
   return (neuron0x276ead0()*-0.0516173);
}

double NNfunction-ss_dLcR::synapse0x279b120() {
   return (neuron0x276f5b0()*0.718496);
}

double NNfunction-ss_dLcR::synapse0x279b160() {
   return (neuron0x2532900()*0.193469);
}

double NNfunction-ss_dLcR::synapse0x279b1a0() {
   return (neuron0x2770350()*-0.0856709);
}

double NNfunction-ss_dLcR::synapse0x279b1e0() {
   return (neuron0x2770d20()*0.116936);
}

double NNfunction-ss_dLcR::synapse0x279b220() {
   return (neuron0x2771af0()*0.311321);
}

double NNfunction-ss_dLcR::synapse0x279b260() {
   return (neuron0x27724c0()*-0.0931811);
}

double NNfunction-ss_dLcR::synapse0x279b2a0() {
   return (neuron0x2772e90()*-0.182364);
}

double NNfunction-ss_dLcR::synapse0x279b2e0() {
   return (neuron0x2773970()*-0.316542);
}

double NNfunction-ss_dLcR::synapse0x279b320() {
   return (neuron0x2774340()*0.530921);
}

double NNfunction-ss_dLcR::synapse0x279b360() {
   return (neuron0x2771420()*0.899916);
}

double NNfunction-ss_dLcR::synapse0x279b3a0() {
   return (neuron0x2775ef0()*-0.252942);
}

double NNfunction-ss_dLcR::synapse0x279b3e0() {
   return (neuron0x27768c0()*0.25587);
}

double NNfunction-ss_dLcR::synapse0x279b420() {
   return (neuron0x2777290()*-0.267852);
}

double NNfunction-ss_dLcR::synapse0x279b460() {
   return (neuron0x2777c60()*0.21236);
}

double NNfunction-ss_dLcR::synapse0x279aef0() {
   return (neuron0x2779a70()*-0.0329593);
}

double NNfunction-ss_dLcR::synapse0x279af30() {
   return (neuron0x2779d50()*-0.0882474);
}

double NNfunction-ss_dLcR::synapse0x279b5b0() {
   return (neuron0x277a720()*-0.160653);
}

double NNfunction-ss_dLcR::synapse0x279b5f0() {
   return (neuron0x277b0f0()*0.195579);
}

double NNfunction-ss_dLcR::synapse0x279b630() {
   return (neuron0x277bac0()*-0.184055);
}

double NNfunction-ss_dLcR::synapse0x279b670() {
   return (neuron0x277c490()*-0.0655989);
}

double NNfunction-ss_dLcR::synapse0x279b6b0() {
   return (neuron0x2774fe0()*-0.943833);
}

double NNfunction-ss_dLcR::synapse0x279b6f0() {
   return (neuron0x27759b0()*0.144673);
}

double NNfunction-ss_dLcR::synapse0x279b730() {
   return (neuron0x277f220()*-0.0286963);
}

double NNfunction-ss_dLcR::synapse0x279b770() {
   return (neuron0x277fbf0()*0.509253);
}

double NNfunction-ss_dLcR::synapse0x279b7b0() {
   return (neuron0x27805c0()*-0.232646);
}

double NNfunction-ss_dLcR::synapse0x279b7f0() {
   return (neuron0x2780f90()*-0.0729248);
}

double NNfunction-ss_dLcR::synapse0x279b830() {
   return (neuron0x2781960()*-0.378765);
}

double NNfunction-ss_dLcR::synapse0x279b870() {
   return (neuron0x2782330()*0.0396424);
}

double NNfunction-ss_dLcR::synapse0x279b8b0() {
   return (neuron0x2782d00()*0.175888);
}

double NNfunction-ss_dLcR::synapse0x279b8f0() {
   return (neuron0x27836d0()*-0.178058);
}

double NNfunction-ss_dLcR::synapse0x279b4a0() {
   return (neuron0x2779760()*0.0821266);
}

double NNfunction-ss_dLcR::synapse0x279b4e0() {
   return (neuron0x27862b0()*-0.234481);
}

double NNfunction-ss_dLcR::synapse0x279b520() {
   return (neuron0x2786c80()*-0.230274);
}

double NNfunction-ss_dLcR::synapse0x279b560() {
   return (neuron0x2787650()*-0.0591288);
}

double NNfunction-ss_dLcR::synapse0x279bb40() {
   return (neuron0x2788020()*-0.034958);
}

double NNfunction-ss_dLcR::synapse0x279bb80() {
   return (neuron0x27889f0()*-1.30181);
}

double NNfunction-ss_dLcR::synapse0x279bbc0() {
   return (neuron0x27893c0()*0.314321);
}

double NNfunction-ss_dLcR::synapse0x279bc00() {
   return (neuron0x2789d90()*0.0419896);
}

double NNfunction-ss_dLcR::synapse0x279bc40() {
   return (neuron0x278a760()*-0.178806);
}

double NNfunction-ss_dLcR::synapse0x279bc80() {
   return (neuron0x278b340()*-1.26649);
}

double NNfunction-ss_dLcR::synapse0x279bcc0() {
   return (neuron0x278bd10()*-0.172195);
}

double NNfunction-ss_dLcR::synapse0x279bd00() {
   return (neuron0x277cb90()*0.385785);
}

double NNfunction-ss_dLcR::synapse0x279bd40() {
   return (neuron0x277d560()*-0.422138);
}

double NNfunction-ss_dLcR::synapse0x279bd80() {
   return (neuron0x277df30()*0.197688);
}

double NNfunction-ss_dLcR::synapse0x279bdc0() {
   return (neuron0x2790570()*-0.0302941);
}

double NNfunction-ss_dLcR::synapse0x279be00() {
   return (neuron0x2790e20()*-0.0826433);
}

double NNfunction-ss_dLcR::synapse0x279be40() {
   return (neuron0x27917f0()*-0.0540778);
}

double NNfunction-ss_dLcR::synapse0x279be80() {
   return (neuron0x27921c0()*0.123153);
}

double NNfunction-ss_dLcR::synapse0x279c200() {
   return (neuron0x276e180()*-0.317963);
}

double NNfunction-ss_dLcR::synapse0x279c240() {
   return (neuron0x276ead0()*-0.0662335);
}

double NNfunction-ss_dLcR::synapse0x279c280() {
   return (neuron0x276f5b0()*0.802756);
}

double NNfunction-ss_dLcR::synapse0x279c2c0() {
   return (neuron0x2532900()*0.180859);
}

double NNfunction-ss_dLcR::synapse0x279c300() {
   return (neuron0x2770350()*-0.0559569);
}

double NNfunction-ss_dLcR::synapse0x279c340() {
   return (neuron0x2770d20()*0.16991);
}

double NNfunction-ss_dLcR::synapse0x279c380() {
   return (neuron0x2771af0()*-0.170305);
}

double NNfunction-ss_dLcR::synapse0x279c3c0() {
   return (neuron0x27724c0()*0.160851);
}

double NNfunction-ss_dLcR::synapse0x279c400() {
   return (neuron0x2772e90()*-0.0140286);
}

double NNfunction-ss_dLcR::synapse0x279c440() {
   return (neuron0x2773970()*-0.199316);
}

double NNfunction-ss_dLcR::synapse0x279c480() {
   return (neuron0x2774340()*0.258939);
}

double NNfunction-ss_dLcR::synapse0x279c4c0() {
   return (neuron0x2771420()*-1.03322);
}

double NNfunction-ss_dLcR::synapse0x279c500() {
   return (neuron0x2775ef0()*0.12178);
}

double NNfunction-ss_dLcR::synapse0x279c540() {
   return (neuron0x27768c0()*0.180319);
}

double NNfunction-ss_dLcR::synapse0x279c580() {
   return (neuron0x2777290()*-0.556339);
}

double NNfunction-ss_dLcR::synapse0x279c5c0() {
   return (neuron0x2777c60()*-0.0651596);
}

double NNfunction-ss_dLcR::synapse0x279c050() {
   return (neuron0x2779a70()*0.28834);
}

double NNfunction-ss_dLcR::synapse0x279c090() {
   return (neuron0x2779d50()*-0.25123);
}

double NNfunction-ss_dLcR::synapse0x279c710() {
   return (neuron0x277a720()*-0.157344);
}

double NNfunction-ss_dLcR::synapse0x279c750() {
   return (neuron0x277b0f0()*0.329757);
}

double NNfunction-ss_dLcR::synapse0x279c790() {
   return (neuron0x277bac0()*-0.33029);
}

double NNfunction-ss_dLcR::synapse0x279c7d0() {
   return (neuron0x277c490()*-0.212036);
}

double NNfunction-ss_dLcR::synapse0x279c810() {
   return (neuron0x2774fe0()*0.704513);
}

double NNfunction-ss_dLcR::synapse0x279c850() {
   return (neuron0x27759b0()*-0.144757);
}

double NNfunction-ss_dLcR::synapse0x279c890() {
   return (neuron0x277f220()*0.480677);
}

double NNfunction-ss_dLcR::synapse0x279c8d0() {
   return (neuron0x277fbf0()*0.504423);
}

double NNfunction-ss_dLcR::synapse0x279c910() {
   return (neuron0x27805c0()*0.55688);
}

double NNfunction-ss_dLcR::synapse0x279c950() {
   return (neuron0x2780f90()*-1.0251);
}

double NNfunction-ss_dLcR::synapse0x279c990() {
   return (neuron0x2781960()*-0.234194);
}

double NNfunction-ss_dLcR::synapse0x279c9d0() {
   return (neuron0x2782330()*0.0628596);
}

double NNfunction-ss_dLcR::synapse0x279ca10() {
   return (neuron0x2782d00()*0.305558);
}

double NNfunction-ss_dLcR::synapse0x279ca50() {
   return (neuron0x27836d0()*0.0483409);
}

double NNfunction-ss_dLcR::synapse0x279c600() {
   return (neuron0x2779760()*0.233766);
}

double NNfunction-ss_dLcR::synapse0x279c640() {
   return (neuron0x27862b0()*0.166859);
}

double NNfunction-ss_dLcR::synapse0x279c680() {
   return (neuron0x2786c80()*-0.541521);
}

double NNfunction-ss_dLcR::synapse0x279c6c0() {
   return (neuron0x2787650()*-0.0128968);
}

double NNfunction-ss_dLcR::synapse0x279cca0() {
   return (neuron0x2788020()*-0.105567);
}

double NNfunction-ss_dLcR::synapse0x279cce0() {
   return (neuron0x27889f0()*-0.907727);
}

double NNfunction-ss_dLcR::synapse0x279cd20() {
   return (neuron0x27893c0()*0.0910141);
}

double NNfunction-ss_dLcR::synapse0x279cd60() {
   return (neuron0x2789d90()*0.0847964);
}

double NNfunction-ss_dLcR::synapse0x279cda0() {
   return (neuron0x278a760()*0.0815737);
}

double NNfunction-ss_dLcR::synapse0x279cde0() {
   return (neuron0x278b340()*-0.797662);
}

double NNfunction-ss_dLcR::synapse0x279ce20() {
   return (neuron0x278bd10()*-0.0469428);
}

double NNfunction-ss_dLcR::synapse0x279ce60() {
   return (neuron0x277cb90()*-0.343026);
}

double NNfunction-ss_dLcR::synapse0x279cea0() {
   return (neuron0x277d560()*0.222191);
}

double NNfunction-ss_dLcR::synapse0x279cee0() {
   return (neuron0x277df30()*-0.0237245);
}

double NNfunction-ss_dLcR::synapse0x279cf20() {
   return (neuron0x2790570()*0.181339);
}

double NNfunction-ss_dLcR::synapse0x279cf60() {
   return (neuron0x2790e20()*0.117764);
}

double NNfunction-ss_dLcR::synapse0x279cfa0() {
   return (neuron0x27917f0()*-0.628158);
}

double NNfunction-ss_dLcR::synapse0x279cfe0() {
   return (neuron0x27921c0()*-0.610392);
}

double NNfunction-ss_dLcR::synapse0x279d240() {
   return (neuron0x27993c0()*-4.15327);
}

double NNfunction-ss_dLcR::synapse0x279d280() {
   return (neuron0x2799760()*-5.87992);
}

double NNfunction-ss_dLcR::synapse0x279d2c0() {
   return (neuron0x2799c00()*7.17715);
}

double NNfunction-ss_dLcR::synapse0x279d300() {
   return (neuron0x279ad60()*3.20937);
}

double NNfunction-ss_dLcR::synapse0x279d340() {
   return (neuron0x279bec0()*-2.37399);
}

