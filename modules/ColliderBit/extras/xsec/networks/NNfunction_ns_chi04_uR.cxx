#include "NNfunction_ns_chi04_uR.h"
#include <cmath>

double NNfunction_ns_chi04_uR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2874)/15.0065;
   input1 = (in1 - 27.7161)/860.918;
   input2 = (in2 - 238.565)/282.615;
   input3 = (in3 - 96.1016)/725.132;
   input4 = (in4 - 864.339)/850.815;
   input5 = (in5 - 748.521)/848.353;
   input6 = (in6 - 752.601)/851.989;
   input7 = (in7 - 746.907)/824.915;
   input8 = (in8 - 735.426)/849.025;
   input9 = (in9 - 722.465)/834.798;
   input10 = (in10 - 761.729)/845.57;
   input11 = (in11 - 637.267)/719.261;
   input12 = (in12 - 641.984)/722.091;
   input13 = (in13 - 467.992)/432.051;
   input14 = (in14 - 330.28)/255.955;
   input15 = (in15 - 636.97)/685.414;
   input16 = (in16 - 461.482)/475.034;
   input17 = (in17 - 660.29)/752.492;
   input18 = (in18 - 666.118)/754.517;
   input19 = (in19 - 669.692)/727.375;
   input20 = (in20 - -74.3213)/424.826;
   input21 = (in21 - -100.615)/989.009;
   input22 = (in22 - -3.41845)/1019.13;
   input23 = (in23 - -23.3741)/309.413;
   switch(index) {
     case 0:
         return neuron0x34c9820();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_uR::Value(int index, double* input) {
   input0 = (input[0] - 23.2874)/15.0065;
   input1 = (input[1] - 27.7161)/860.918;
   input2 = (input[2] - 238.565)/282.615;
   input3 = (input[3] - 96.1016)/725.132;
   input4 = (input[4] - 864.339)/850.815;
   input5 = (input[5] - 748.521)/848.353;
   input6 = (input[6] - 752.601)/851.989;
   input7 = (input[7] - 746.907)/824.915;
   input8 = (input[8] - 735.426)/849.025;
   input9 = (input[9] - 722.465)/834.798;
   input10 = (input[10] - 761.729)/845.57;
   input11 = (input[11] - 637.267)/719.261;
   input12 = (input[12] - 641.984)/722.091;
   input13 = (input[13] - 467.992)/432.051;
   input14 = (input[14] - 330.28)/255.955;
   input15 = (input[15] - 636.97)/685.414;
   input16 = (input[16] - 461.482)/475.034;
   input17 = (input[17] - 660.29)/752.492;
   input18 = (input[18] - 666.118)/754.517;
   input19 = (input[19] - 669.692)/727.375;
   input20 = (input[20] - -74.3213)/424.826;
   input21 = (input[21] - -100.615)/989.009;
   input22 = (input[22] - -3.41845)/1019.13;
   input23 = (input[23] - -23.3741)/309.413;
   switch(index) {
     case 0:
         return neuron0x34c9820();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi04_uR::neuron0x3495910() {
   return input0;
}

double NNfunction_ns_chi04_uR::neuron0x3495c50() {
   return input1;
}

double NNfunction_ns_chi04_uR::neuron0x3495f90() {
   return input2;
}

double NNfunction_ns_chi04_uR::neuron0x34962d0() {
   return input3;
}

double NNfunction_ns_chi04_uR::neuron0x3496610() {
   return input4;
}

double NNfunction_ns_chi04_uR::neuron0x3496950() {
   return input5;
}

double NNfunction_ns_chi04_uR::neuron0x3496c90() {
   return input6;
}

double NNfunction_ns_chi04_uR::neuron0x3496fd0() {
   return input7;
}

double NNfunction_ns_chi04_uR::neuron0x3497310() {
   return input8;
}

double NNfunction_ns_chi04_uR::neuron0x3497650() {
   return input9;
}

double NNfunction_ns_chi04_uR::neuron0x3497990() {
   return input10;
}

double NNfunction_ns_chi04_uR::neuron0x3497cd0() {
   return input11;
}

double NNfunction_ns_chi04_uR::neuron0x3498010() {
   return input12;
}

double NNfunction_ns_chi04_uR::neuron0x3498350() {
   return input13;
}

double NNfunction_ns_chi04_uR::neuron0x3498690() {
   return input14;
}

double NNfunction_ns_chi04_uR::neuron0x34989d0() {
   return input15;
}

double NNfunction_ns_chi04_uR::neuron0x3498d10() {
   return input16;
}

double NNfunction_ns_chi04_uR::neuron0x3499270() {
   return input17;
}

double NNfunction_ns_chi04_uR::neuron0x3499490() {
   return input18;
}

double NNfunction_ns_chi04_uR::neuron0x34997d0() {
   return input19;
}

double NNfunction_ns_chi04_uR::neuron0x3499b10() {
   return input20;
}

double NNfunction_ns_chi04_uR::neuron0x3499e50() {
   return input21;
}

double NNfunction_ns_chi04_uR::neuron0x349a190() {
   return input22;
}

double NNfunction_ns_chi04_uR::neuron0x349a4d0() {
   return input23;
}

double NNfunction_ns_chi04_uR::input0x349a940() {
   double input = -0.951223;
   input += synapse0x34957d0();
   input += synapse0x3495810();
   input += synapse0x349abf0();
   input += synapse0x349ac30();
   input += synapse0x349ac70();
   input += synapse0x349acb0();
   input += synapse0x349acf0();
   input += synapse0x349ad30();
   input += synapse0x349ad70();
   input += synapse0x349adb0();
   input += synapse0x349adf0();
   input += synapse0x349ae30();
   input += synapse0x349ae70();
   input += synapse0x349aeb0();
   input += synapse0x349aef0();
   input += synapse0x349af30();
   input += synapse0x3495740();
   input += synapse0x3495780();
   input += synapse0x3250ab0();
   input += synapse0x3250af0();
   input += synapse0x349b190();
   input += synapse0x349b1d0();
   input += synapse0x349b210();
   input += synapse0x349b250();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349a940() {
   double input = input0x349a940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349b290() {
   double input = -0.527163;
   input += synapse0x349b5d0();
   input += synapse0x349b610();
   input += synapse0x349b650();
   input += synapse0x349b690();
   input += synapse0x349b6d0();
   input += synapse0x349b710();
   input += synapse0x349b750();
   input += synapse0x349b790();
   input += synapse0x349b7d0();
   input += synapse0x349b080();
   input += synapse0x349b0c0();
   input += synapse0x349b100();
   input += synapse0x349b140();
   input += synapse0x349ba20();
   input += synapse0x349ba60();
   input += synapse0x349baa0();
   input += synapse0x349b420();
   input += synapse0x349b460();
   input += synapse0x349bbf0();
   input += synapse0x349bc30();
   input += synapse0x349bc70();
   input += synapse0x349bcb0();
   input += synapse0x349bcf0();
   input += synapse0x349bd30();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349b290() {
   double input = input0x349b290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349bd70() {
   double input = 0.48051;
   input += synapse0x349c0b0();
   input += synapse0x349c0f0();
   input += synapse0x349c130();
   input += synapse0x349c170();
   input += synapse0x349c1b0();
   input += synapse0x349c1f0();
   input += synapse0x349c230();
   input += synapse0x349c270();
   input += synapse0x349c2b0();
   input += synapse0x349c2f0();
   input += synapse0x349c330();
   input += synapse0x349c370();
   input += synapse0x349c3b0();
   input += synapse0x349c3f0();
   input += synapse0x349c430();
   input += synapse0x349c470();
   input += synapse0x349bf00();
   input += synapse0x349bf40();
   input += synapse0x32511a0();
   input += synapse0x325ea70();
   input += synapse0x325eab0();
   input += synapse0x34849a0();
   input += synapse0x34849e0();
   input += synapse0x3484a20();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349bd70() {
   double input = input0x349bd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349b810() {
   double input = -1.19393;
   input += synapse0x325f2f0();
   input += synapse0x349b9a0();
   input += synapse0x349b9e0();
   input += synapse0x349c5c0();
   input += synapse0x349c600();
   input += synapse0x349c640();
   input += synapse0x349c680();
   input += synapse0x349c6c0();
   input += synapse0x349c700();
   input += synapse0x349c740();
   input += synapse0x349c780();
   input += synapse0x349c7c0();
   input += synapse0x349c800();
   input += synapse0x349c840();
   input += synapse0x349c880();
   input += synapse0x349c8c0();
   input += synapse0x3495850();
   input += synapse0x3495890();
   input += synapse0x34958d0();
   input += synapse0x349ca10();
   input += synapse0x349ca50();
   input += synapse0x349ca90();
   input += synapse0x349cad0();
   input += synapse0x349cb10();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349b810() {
   double input = input0x349b810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349cb50() {
   double input = 2.74399;
   input += synapse0x349ce90();
   input += synapse0x349ced0();
   input += synapse0x349cf10();
   input += synapse0x349cf50();
   input += synapse0x349cf90();
   input += synapse0x349cfd0();
   input += synapse0x349d010();
   input += synapse0x349d050();
   input += synapse0x349d090();
   input += synapse0x349d0d0();
   input += synapse0x349d110();
   input += synapse0x349d150();
   input += synapse0x349d190();
   input += synapse0x349d1d0();
   input += synapse0x349d210();
   input += synapse0x349d250();
   input += synapse0x349cce0();
   input += synapse0x349cd20();
   input += synapse0x349d3a0();
   input += synapse0x349d3e0();
   input += synapse0x349d420();
   input += synapse0x349d460();
   input += synapse0x349d4a0();
   input += synapse0x349d4e0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349cb50() {
   double input = input0x349cb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349d520() {
   double input = 0.28126;
   input += synapse0x349d860();
   input += synapse0x349d8a0();
   input += synapse0x349d8e0();
   input += synapse0x349d920();
   input += synapse0x349d960();
   input += synapse0x349d9a0();
   input += synapse0x349d9e0();
   input += synapse0x349da20();
   input += synapse0x349da60();
   input += synapse0x325edc0();
   input += synapse0x325ee00();
   input += synapse0x325ee40();
   input += synapse0x325ee80();
   input += synapse0x325eec0();
   input += synapse0x325ef00();
   input += synapse0x325ef40();
   input += synapse0x349d6b0();
   input += synapse0x349d6f0();
   input += synapse0x325f090();
   input += synapse0x325f0d0();
   input += synapse0x325f110();
   input += synapse0x325f150();
   input += synapse0x325f190();
   input += synapse0x349e2b0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349d520() {
   double input = input0x349d520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349e2f0() {
   double input = 0.807273;
   input += synapse0x349e630();
   input += synapse0x349e670();
   input += synapse0x349e6b0();
   input += synapse0x349e6f0();
   input += synapse0x349e730();
   input += synapse0x349e770();
   input += synapse0x349e7b0();
   input += synapse0x349e7f0();
   input += synapse0x349e830();
   input += synapse0x349e870();
   input += synapse0x349e8b0();
   input += synapse0x349e8f0();
   input += synapse0x349e930();
   input += synapse0x349e970();
   input += synapse0x349e9b0();
   input += synapse0x349e9f0();
   input += synapse0x349e480();
   input += synapse0x349e4c0();
   input += synapse0x349eb40();
   input += synapse0x349eb80();
   input += synapse0x349ebc0();
   input += synapse0x349ec00();
   input += synapse0x349ec40();
   input += synapse0x349ec80();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349e2f0() {
   double input = input0x349e2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349ecc0() {
   double input = 0.229611;
   input += synapse0x349f000();
   input += synapse0x349f040();
   input += synapse0x349f080();
   input += synapse0x349f0c0();
   input += synapse0x349f100();
   input += synapse0x349f140();
   input += synapse0x349f180();
   input += synapse0x349f1c0();
   input += synapse0x349f200();
   input += synapse0x349f240();
   input += synapse0x349f280();
   input += synapse0x349f2c0();
   input += synapse0x349f300();
   input += synapse0x349f340();
   input += synapse0x349f380();
   input += synapse0x349f3c0();
   input += synapse0x349ee50();
   input += synapse0x349ee90();
   input += synapse0x349f510();
   input += synapse0x349f550();
   input += synapse0x349f590();
   input += synapse0x349f5d0();
   input += synapse0x349f610();
   input += synapse0x349f650();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349ecc0() {
   double input = input0x349ecc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349f690() {
   double input = 1.98054;
   input += synapse0x3499160();
   input += synapse0x34991a0();
   input += synapse0x34991e0();
   input += synapse0x3499220();
   input += synapse0x349fbe0();
   input += synapse0x349fc20();
   input += synapse0x349fc60();
   input += synapse0x349fca0();
   input += synapse0x349fce0();
   input += synapse0x349fd20();
   input += synapse0x349fd60();
   input += synapse0x349fda0();
   input += synapse0x349fde0();
   input += synapse0x349fe20();
   input += synapse0x349fe60();
   input += synapse0x349fea0();
   input += synapse0x349f820();
   input += synapse0x349f860();
   input += synapse0x349fff0();
   input += synapse0x34a0030();
   input += synapse0x34a0070();
   input += synapse0x34a00b0();
   input += synapse0x34a00f0();
   input += synapse0x34a0130();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349f690() {
   double input = input0x349f690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a0170() {
   double input = -0.269886;
   input += synapse0x34a04b0();
   input += synapse0x34a04f0();
   input += synapse0x34a0530();
   input += synapse0x34a0570();
   input += synapse0x34a05b0();
   input += synapse0x34a05f0();
   input += synapse0x34a0630();
   input += synapse0x34a0670();
   input += synapse0x34a06b0();
   input += synapse0x34a06f0();
   input += synapse0x34a0730();
   input += synapse0x34a0770();
   input += synapse0x34a07b0();
   input += synapse0x34a07f0();
   input += synapse0x34a0830();
   input += synapse0x34a0870();
   input += synapse0x34a0300();
   input += synapse0x34a0340();
   input += synapse0x34a09c0();
   input += synapse0x34a0a00();
   input += synapse0x34a0a40();
   input += synapse0x34a0a80();
   input += synapse0x34a0ac0();
   input += synapse0x34a0b00();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a0170() {
   double input = input0x34a0170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a0b40() {
   double input = -1.9833;
   input += synapse0x34a0e80();
   input += synapse0x34a0ec0();
   input += synapse0x34a0f00();
   input += synapse0x34a0f40();
   input += synapse0x34a0f80();
   input += synapse0x34a0fc0();
   input += synapse0x34a1000();
   input += synapse0x34a1040();
   input += synapse0x34a1080();
   input += synapse0x34a10c0();
   input += synapse0x34a1100();
   input += synapse0x34a1140();
   input += synapse0x34a1180();
   input += synapse0x34a11c0();
   input += synapse0x34a1200();
   input += synapse0x34a1240();
   input += synapse0x34a0cd0();
   input += synapse0x34a0d10();
   input += synapse0x349daa0();
   input += synapse0x349dae0();
   input += synapse0x349db20();
   input += synapse0x349db60();
   input += synapse0x349dba0();
   input += synapse0x349dbe0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a0b40() {
   double input = input0x34a0b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x349dc20() {
   double input = 0.301771;
   input += synapse0x349df60();
   input += synapse0x349dfa0();
   input += synapse0x349dfe0();
   input += synapse0x349e020();
   input += synapse0x349e060();
   input += synapse0x349e0a0();
   input += synapse0x349e0e0();
   input += synapse0x349e120();
   input += synapse0x349e160();
   input += synapse0x349e1a0();
   input += synapse0x349e1e0();
   input += synapse0x349e220();
   input += synapse0x349e260();
   input += synapse0x34a23a0();
   input += synapse0x34a23e0();
   input += synapse0x34a2420();
   input += synapse0x349ddb0();
   input += synapse0x349ddf0();
   input += synapse0x34a2570();
   input += synapse0x34a25b0();
   input += synapse0x34a25f0();
   input += synapse0x34a2630();
   input += synapse0x34a2670();
   input += synapse0x34a26b0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x349dc20() {
   double input = input0x349dc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a26f0() {
   double input = 0.371202;
   input += synapse0x34a2a30();
   input += synapse0x34a2a70();
   input += synapse0x34a2ab0();
   input += synapse0x34a2af0();
   input += synapse0x34a2b30();
   input += synapse0x34a2b70();
   input += synapse0x34a2bb0();
   input += synapse0x34a2bf0();
   input += synapse0x34a2c30();
   input += synapse0x34a2c70();
   input += synapse0x34a2cb0();
   input += synapse0x34a2cf0();
   input += synapse0x34a2d30();
   input += synapse0x34a2d70();
   input += synapse0x34a2db0();
   input += synapse0x34a2df0();
   input += synapse0x34a2880();
   input += synapse0x34a28c0();
   input += synapse0x34a2f40();
   input += synapse0x34a2f80();
   input += synapse0x34a2fc0();
   input += synapse0x34a3000();
   input += synapse0x34a3040();
   input += synapse0x34a3080();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a26f0() {
   double input = input0x34a26f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a30c0() {
   double input = 0.323132;
   input += synapse0x34a3400();
   input += synapse0x34a3440();
   input += synapse0x34a3480();
   input += synapse0x34a34c0();
   input += synapse0x34a3500();
   input += synapse0x34a3540();
   input += synapse0x34a3580();
   input += synapse0x34a35c0();
   input += synapse0x34a3600();
   input += synapse0x34a3640();
   input += synapse0x34a3680();
   input += synapse0x34a36c0();
   input += synapse0x34a3700();
   input += synapse0x34a3740();
   input += synapse0x34a3780();
   input += synapse0x34a37c0();
   input += synapse0x34a3250();
   input += synapse0x34a3290();
   input += synapse0x34a3910();
   input += synapse0x34a3950();
   input += synapse0x34a3990();
   input += synapse0x34a39d0();
   input += synapse0x34a3a10();
   input += synapse0x34a3a50();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a30c0() {
   double input = input0x34a30c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a3a90() {
   double input = -0.974417;
   input += synapse0x34a3dd0();
   input += synapse0x34a3e10();
   input += synapse0x34a3e50();
   input += synapse0x34a3e90();
   input += synapse0x34a3ed0();
   input += synapse0x34a3f10();
   input += synapse0x34a3f50();
   input += synapse0x34a3f90();
   input += synapse0x34a3fd0();
   input += synapse0x34a4010();
   input += synapse0x34a4050();
   input += synapse0x34a4090();
   input += synapse0x34a40d0();
   input += synapse0x34a4110();
   input += synapse0x34a4150();
   input += synapse0x34a4190();
   input += synapse0x34a3c20();
   input += synapse0x34a3c60();
   input += synapse0x34a42e0();
   input += synapse0x34a4320();
   input += synapse0x34a4360();
   input += synapse0x34a43a0();
   input += synapse0x34a43e0();
   input += synapse0x34a4420();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a3a90() {
   double input = input0x34a3a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a4460() {
   double input = -0.224238;
   input += synapse0x34a47a0();
   input += synapse0x3495b30();
   input += synapse0x3495b70();
   input += synapse0x3495e70();
   input += synapse0x3495eb0();
   input += synapse0x34961b0();
   input += synapse0x34961f0();
   input += synapse0x34964f0();
   input += synapse0x3496530();
   input += synapse0x3496830();
   input += synapse0x3496870();
   input += synapse0x3496b70();
   input += synapse0x3496bb0();
   input += synapse0x3496eb0();
   input += synapse0x3496ef0();
   input += synapse0x34971f0();
   input += synapse0x3497230();
   input += synapse0x3497530();
   input += synapse0x3497570();
   input += synapse0x3497870();
   input += synapse0x34978b0();
   input += synapse0x3497bb0();
   input += synapse0x3497bf0();
   input += synapse0x3497ef0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a4460() {
   double input = input0x34a4460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a6270() {
   double input = 0.803442;
   input += synapse0x3497f30();
   input += synapse0x3498bf0();
   input += synapse0x3498c30();
   input += synapse0x34a45f0();
   input += synapse0x34a4630();
   input += synapse0x3498f30();
   input += synapse0x3498f70();
   input += synapse0x3250990();
   input += synapse0x32509d0();
   input += synapse0x34996b0();
   input += synapse0x34996f0();
   input += synapse0x34999f0();
   input += synapse0x3499a30();
   input += synapse0x3499d30();
   input += synapse0x3499d70();
   input += synapse0x349a070();
   input += synapse0x349a0b0();
   input += synapse0x349a3b0();
   input += synapse0x349a3f0();
   input += synapse0x349a6f0();
   input += synapse0x349a730();
   input += synapse0x3498230();
   input += synapse0x3498270();
   input += synapse0x34a6510();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a6270() {
   double input = input0x34a6270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a6550() {
   double input = 1.08921;
   input += synapse0x34a6890();
   input += synapse0x34a68d0();
   input += synapse0x34a6910();
   input += synapse0x34a6950();
   input += synapse0x34a6990();
   input += synapse0x34a69d0();
   input += synapse0x34a6a10();
   input += synapse0x34a6a50();
   input += synapse0x34a6a90();
   input += synapse0x34a6ad0();
   input += synapse0x34a6b10();
   input += synapse0x34a6b50();
   input += synapse0x34a6b90();
   input += synapse0x34a6bd0();
   input += synapse0x34a6c10();
   input += synapse0x34a6c50();
   input += synapse0x34a66e0();
   input += synapse0x34a6720();
   input += synapse0x34a6da0();
   input += synapse0x34a6de0();
   input += synapse0x34a6e20();
   input += synapse0x34a6e60();
   input += synapse0x34a6ea0();
   input += synapse0x34a6ee0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a6550() {
   double input = input0x34a6550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a6f20() {
   double input = 0.136036;
   input += synapse0x34a7260();
   input += synapse0x34a72a0();
   input += synapse0x34a72e0();
   input += synapse0x34a7320();
   input += synapse0x34a7360();
   input += synapse0x34a73a0();
   input += synapse0x34a73e0();
   input += synapse0x34a7420();
   input += synapse0x34a7460();
   input += synapse0x34a74a0();
   input += synapse0x34a74e0();
   input += synapse0x34a7520();
   input += synapse0x34a7560();
   input += synapse0x34a75a0();
   input += synapse0x34a75e0();
   input += synapse0x34a7620();
   input += synapse0x34a70b0();
   input += synapse0x34a70f0();
   input += synapse0x34a7770();
   input += synapse0x34a77b0();
   input += synapse0x34a77f0();
   input += synapse0x34a7830();
   input += synapse0x34a7870();
   input += synapse0x34a78b0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a6f20() {
   double input = input0x34a6f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a78f0() {
   double input = -1.17417;
   input += synapse0x34a7c30();
   input += synapse0x34a7c70();
   input += synapse0x34a7cb0();
   input += synapse0x34a7cf0();
   input += synapse0x34a7d30();
   input += synapse0x34a7d70();
   input += synapse0x34a7db0();
   input += synapse0x34a7df0();
   input += synapse0x34a7e30();
   input += synapse0x34a7e70();
   input += synapse0x34a7eb0();
   input += synapse0x34a7ef0();
   input += synapse0x34a7f30();
   input += synapse0x34a7f70();
   input += synapse0x34a7fb0();
   input += synapse0x34a7ff0();
   input += synapse0x34a7a80();
   input += synapse0x34a7ac0();
   input += synapse0x34a8140();
   input += synapse0x34a8180();
   input += synapse0x34a81c0();
   input += synapse0x34a8200();
   input += synapse0x34a8240();
   input += synapse0x34a8280();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a78f0() {
   double input = input0x34a78f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a82c0() {
   double input = 0.0617905;
   input += synapse0x34a8600();
   input += synapse0x34a8640();
   input += synapse0x34a8680();
   input += synapse0x34a86c0();
   input += synapse0x34a8700();
   input += synapse0x34a8740();
   input += synapse0x34a8780();
   input += synapse0x34a87c0();
   input += synapse0x34a8800();
   input += synapse0x34a8840();
   input += synapse0x34a8880();
   input += synapse0x34a88c0();
   input += synapse0x34a8900();
   input += synapse0x34a8940();
   input += synapse0x34a8980();
   input += synapse0x34a89c0();
   input += synapse0x34a8450();
   input += synapse0x34a8490();
   input += synapse0x34a8b10();
   input += synapse0x34a8b50();
   input += synapse0x34a8b90();
   input += synapse0x34a8bd0();
   input += synapse0x34a8c10();
   input += synapse0x34a8c50();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a82c0() {
   double input = input0x34a82c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a8c90() {
   double input = 3.42332;
   input += synapse0x34a8fd0();
   input += synapse0x34a9010();
   input += synapse0x34a9050();
   input += synapse0x34a9090();
   input += synapse0x34a90d0();
   input += synapse0x34a9110();
   input += synapse0x34a9150();
   input += synapse0x34a9190();
   input += synapse0x34a91d0();
   input += synapse0x34a1390();
   input += synapse0x34a13d0();
   input += synapse0x34a1410();
   input += synapse0x34a1450();
   input += synapse0x34a1490();
   input += synapse0x34a14d0();
   input += synapse0x34a1510();
   input += synapse0x34a8e20();
   input += synapse0x34a8e60();
   input += synapse0x34a1660();
   input += synapse0x34a16a0();
   input += synapse0x34a16e0();
   input += synapse0x34a1720();
   input += synapse0x34a1760();
   input += synapse0x34a17a0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a8c90() {
   double input = input0x34a8c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a17e0() {
   double input = -0.239727;
   input += synapse0x34a1b20();
   input += synapse0x34a1b60();
   input += synapse0x34a1ba0();
   input += synapse0x34a1be0();
   input += synapse0x34a1c20();
   input += synapse0x34a1c60();
   input += synapse0x34a1ca0();
   input += synapse0x34a1ce0();
   input += synapse0x34a1d20();
   input += synapse0x34a1d60();
   input += synapse0x34a1da0();
   input += synapse0x34a1de0();
   input += synapse0x34a1e20();
   input += synapse0x34a1e60();
   input += synapse0x34a1ea0();
   input += synapse0x34a1ee0();
   input += synapse0x34a1970();
   input += synapse0x34a19b0();
   input += synapse0x34a2030();
   input += synapse0x34a2070();
   input += synapse0x34a20b0();
   input += synapse0x34a20f0();
   input += synapse0x34a2130();
   input += synapse0x34a2170();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a17e0() {
   double input = input0x34a17e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a21b0() {
   double input = -2.79533;
   input += synapse0x34a2340();
   input += synapse0x34ab3d0();
   input += synapse0x34ab410();
   input += synapse0x34ab450();
   input += synapse0x34ab490();
   input += synapse0x34ab4d0();
   input += synapse0x34ab510();
   input += synapse0x34ab550();
   input += synapse0x34ab590();
   input += synapse0x34ab5d0();
   input += synapse0x34ab610();
   input += synapse0x34ab650();
   input += synapse0x34ab690();
   input += synapse0x34ab6d0();
   input += synapse0x34ab710();
   input += synapse0x34ab750();
   input += synapse0x34ab220();
   input += synapse0x34ab260();
   input += synapse0x34ab8a0();
   input += synapse0x34ab8e0();
   input += synapse0x34ab920();
   input += synapse0x34ab960();
   input += synapse0x34ab9a0();
   input += synapse0x34ab9e0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a21b0() {
   double input = input0x34a21b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34aba20() {
   double input = 2.95112;
   input += synapse0x34abd60();
   input += synapse0x34abda0();
   input += synapse0x34abde0();
   input += synapse0x34abe20();
   input += synapse0x34abe60();
   input += synapse0x34abea0();
   input += synapse0x34abee0();
   input += synapse0x34abf20();
   input += synapse0x34abf60();
   input += synapse0x34abfa0();
   input += synapse0x34abfe0();
   input += synapse0x34ac020();
   input += synapse0x34ac060();
   input += synapse0x34ac0a0();
   input += synapse0x34ac0e0();
   input += synapse0x34ac120();
   input += synapse0x34abbb0();
   input += synapse0x34abbf0();
   input += synapse0x34ac270();
   input += synapse0x34ac2b0();
   input += synapse0x34ac2f0();
   input += synapse0x34ac330();
   input += synapse0x34ac370();
   input += synapse0x34ac3b0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34aba20() {
   double input = input0x34aba20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34ac3f0() {
   double input = -1.92553;
   input += synapse0x34ac730();
   input += synapse0x34ac770();
   input += synapse0x34ac7b0();
   input += synapse0x34ac7f0();
   input += synapse0x34ac830();
   input += synapse0x34ac870();
   input += synapse0x34ac8b0();
   input += synapse0x34ac8f0();
   input += synapse0x34ac930();
   input += synapse0x34ac970();
   input += synapse0x34ac9b0();
   input += synapse0x34ac9f0();
   input += synapse0x34aca30();
   input += synapse0x34aca70();
   input += synapse0x34acab0();
   input += synapse0x34acaf0();
   input += synapse0x34ac580();
   input += synapse0x34ac5c0();
   input += synapse0x34acc40();
   input += synapse0x34acc80();
   input += synapse0x34accc0();
   input += synapse0x34acd00();
   input += synapse0x34acd40();
   input += synapse0x34acd80();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34ac3f0() {
   double input = input0x34ac3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34acdc0() {
   double input = -0.889836;
   input += synapse0x34ad100();
   input += synapse0x34ad140();
   input += synapse0x34ad180();
   input += synapse0x34ad1c0();
   input += synapse0x34ad200();
   input += synapse0x34ad240();
   input += synapse0x34ad280();
   input += synapse0x34ad2c0();
   input += synapse0x34ad300();
   input += synapse0x34ad340();
   input += synapse0x34ad380();
   input += synapse0x34ad3c0();
   input += synapse0x34ad400();
   input += synapse0x34ad440();
   input += synapse0x34ad480();
   input += synapse0x34ad4c0();
   input += synapse0x34acf50();
   input += synapse0x34acf90();
   input += synapse0x34ad610();
   input += synapse0x34ad650();
   input += synapse0x34ad690();
   input += synapse0x34ad6d0();
   input += synapse0x34ad710();
   input += synapse0x34ad750();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34acdc0() {
   double input = input0x34acdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34ad790() {
   double input = -0.117138;
   input += synapse0x34adad0();
   input += synapse0x34adb10();
   input += synapse0x34adb50();
   input += synapse0x34adb90();
   input += synapse0x34adbd0();
   input += synapse0x34adc10();
   input += synapse0x34adc50();
   input += synapse0x34adc90();
   input += synapse0x34adcd0();
   input += synapse0x34add10();
   input += synapse0x34add50();
   input += synapse0x34add90();
   input += synapse0x34addd0();
   input += synapse0x34ade10();
   input += synapse0x34ade50();
   input += synapse0x34ade90();
   input += synapse0x34ad920();
   input += synapse0x34ad960();
   input += synapse0x34adfe0();
   input += synapse0x34ae020();
   input += synapse0x34ae060();
   input += synapse0x34ae0a0();
   input += synapse0x34ae0e0();
   input += synapse0x34ae120();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34ad790() {
   double input = input0x34ad790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34ae160() {
   double input = -0.154349;
   input += synapse0x34ae4a0();
   input += synapse0x34ae4e0();
   input += synapse0x34ae520();
   input += synapse0x34ae560();
   input += synapse0x34ae5a0();
   input += synapse0x34ae5e0();
   input += synapse0x34ae620();
   input += synapse0x34ae660();
   input += synapse0x34ae6a0();
   input += synapse0x34ae6e0();
   input += synapse0x34ae720();
   input += synapse0x34ae760();
   input += synapse0x34ae7a0();
   input += synapse0x34ae7e0();
   input += synapse0x34ae820();
   input += synapse0x34ae860();
   input += synapse0x34ae2f0();
   input += synapse0x34ae330();
   input += synapse0x34ae9b0();
   input += synapse0x34ae9f0();
   input += synapse0x34aea30();
   input += synapse0x34aea70();
   input += synapse0x34aeab0();
   input += synapse0x34aeaf0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34ae160() {
   double input = input0x34ae160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34aeb30() {
   double input = -0.140285;
   input += synapse0x34aee70();
   input += synapse0x34aeeb0();
   input += synapse0x34aeef0();
   input += synapse0x34aef30();
   input += synapse0x34aef70();
   input += synapse0x34aefb0();
   input += synapse0x34aeff0();
   input += synapse0x34af030();
   input += synapse0x34af070();
   input += synapse0x34af0b0();
   input += synapse0x34af0f0();
   input += synapse0x34af130();
   input += synapse0x34af170();
   input += synapse0x34af1b0();
   input += synapse0x34af1f0();
   input += synapse0x34af230();
   input += synapse0x34aecc0();
   input += synapse0x34aed00();
   input += synapse0x34af380();
   input += synapse0x34af3c0();
   input += synapse0x34af400();
   input += synapse0x34af440();
   input += synapse0x34af480();
   input += synapse0x34af4c0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34aeb30() {
   double input = input0x34aeb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34af500() {
   double input = 0.0648067;
   input += synapse0x34af840();
   input += synapse0x34af880();
   input += synapse0x34af8c0();
   input += synapse0x34af900();
   input += synapse0x34af940();
   input += synapse0x34af980();
   input += synapse0x34af9c0();
   input += synapse0x34afa00();
   input += synapse0x34afa40();
   input += synapse0x34afa80();
   input += synapse0x34afac0();
   input += synapse0x34afb00();
   input += synapse0x34afb40();
   input += synapse0x34afb80();
   input += synapse0x34afbc0();
   input += synapse0x34afc00();
   input += synapse0x34af690();
   input += synapse0x34af6d0();
   input += synapse0x34afd50();
   input += synapse0x34afd90();
   input += synapse0x34afdd0();
   input += synapse0x34afe10();
   input += synapse0x34afe50();
   input += synapse0x34afe90();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34af500() {
   double input = input0x34af500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34afed0() {
   double input = 0.0193556;
   input += synapse0x34b0210();
   input += synapse0x34a47e0();
   input += synapse0x34a4820();
   input += synapse0x34a4860();
   input += synapse0x34a4ab0();
   input += synapse0x34a4af0();
   input += synapse0x34a4b30();
   input += synapse0x34a4d80();
   input += synapse0x34a4dc0();
   input += synapse0x34a5010();
   input += synapse0x34a5050();
   input += synapse0x34a5090();
   input += synapse0x34a52e0();
   input += synapse0x34a5320();
   input += synapse0x34a5570();
   input += synapse0x34a55b0();
   input += synapse0x34b0060();
   input += synapse0x34b00a0();
   input += synapse0x34a5700();
   input += synapse0x34a5c10();
   input += synapse0x34a5c50();
   input += synapse0x34a5c90();
   input += synapse0x34a5ee0();
   input += synapse0x34a5f20();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34afed0() {
   double input = input0x34afed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a5f60() {
   double input = 0.377122;
   input += synapse0x34a57d0();
   input += synapse0x34a5810();
   input += synapse0x34a5850();
   input += synapse0x34a5890();
   input += synapse0x34a6210();
   input += synapse0x34b2560();
   input += synapse0x34b25a0();
   input += synapse0x34b25e0();
   input += synapse0x34b2620();
   input += synapse0x34b2660();
   input += synapse0x34b26a0();
   input += synapse0x34b26e0();
   input += synapse0x34b2720();
   input += synapse0x34b2760();
   input += synapse0x34b27a0();
   input += synapse0x34b27e0();
   input += synapse0x34a60f0();
   input += synapse0x34a6130();
   input += synapse0x34b2930();
   input += synapse0x34b2970();
   input += synapse0x34b29b0();
   input += synapse0x34b29f0();
   input += synapse0x34b2a30();
   input += synapse0x34b2a70();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a5f60() {
   double input = input0x34a5f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b2ab0() {
   double input = 0.0300574;
   input += synapse0x34b2df0();
   input += synapse0x34b2e30();
   input += synapse0x34b2e70();
   input += synapse0x34b2eb0();
   input += synapse0x34b2ef0();
   input += synapse0x34b2f30();
   input += synapse0x34b2f70();
   input += synapse0x34b2fb0();
   input += synapse0x34b2ff0();
   input += synapse0x34b3030();
   input += synapse0x34b3070();
   input += synapse0x34b30b0();
   input += synapse0x34b30f0();
   input += synapse0x34b3130();
   input += synapse0x34b3170();
   input += synapse0x34b31b0();
   input += synapse0x34b2c40();
   input += synapse0x34b2c80();
   input += synapse0x34b3300();
   input += synapse0x34b3340();
   input += synapse0x34b3380();
   input += synapse0x34b33c0();
   input += synapse0x34b3400();
   input += synapse0x34b3440();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b2ab0() {
   double input = input0x34b2ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b3480() {
   double input = -0.173554;
   input += synapse0x34b37c0();
   input += synapse0x34b3800();
   input += synapse0x34b3840();
   input += synapse0x34b3880();
   input += synapse0x34b38c0();
   input += synapse0x34b3900();
   input += synapse0x34b3940();
   input += synapse0x34b3980();
   input += synapse0x34b39c0();
   input += synapse0x34b3a00();
   input += synapse0x34b3a40();
   input += synapse0x34b3a80();
   input += synapse0x34b3ac0();
   input += synapse0x34b3b00();
   input += synapse0x34b3b40();
   input += synapse0x34b3b80();
   input += synapse0x34b3610();
   input += synapse0x34b3650();
   input += synapse0x34b3cd0();
   input += synapse0x34b3d10();
   input += synapse0x34b3d50();
   input += synapse0x34b3d90();
   input += synapse0x34b3dd0();
   input += synapse0x34b3e10();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b3480() {
   double input = input0x34b3480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b3e50() {
   double input = -4.35741;
   input += synapse0x34b4190();
   input += synapse0x34b41d0();
   input += synapse0x34b4210();
   input += synapse0x34b4250();
   input += synapse0x34b4290();
   input += synapse0x34b42d0();
   input += synapse0x34b4310();
   input += synapse0x34b4350();
   input += synapse0x34b4390();
   input += synapse0x34b43d0();
   input += synapse0x34b4410();
   input += synapse0x34b4450();
   input += synapse0x34b4490();
   input += synapse0x34b44d0();
   input += synapse0x34b4510();
   input += synapse0x34b4550();
   input += synapse0x34b3fe0();
   input += synapse0x34b4020();
   input += synapse0x34b46a0();
   input += synapse0x34b46e0();
   input += synapse0x34b4720();
   input += synapse0x34b4760();
   input += synapse0x34b47a0();
   input += synapse0x34b47e0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b3e50() {
   double input = input0x34b3e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b4820() {
   double input = 7.9825;
   input += synapse0x34b4b60();
   input += synapse0x34b4ba0();
   input += synapse0x34b4be0();
   input += synapse0x34b4c20();
   input += synapse0x34b4c60();
   input += synapse0x34b4ca0();
   input += synapse0x34b4ce0();
   input += synapse0x34b4d20();
   input += synapse0x34b4d60();
   input += synapse0x34b4da0();
   input += synapse0x34b4de0();
   input += synapse0x34b4e20();
   input += synapse0x34b4e60();
   input += synapse0x34b4ea0();
   input += synapse0x34b4ee0();
   input += synapse0x34b4f20();
   input += synapse0x34b49b0();
   input += synapse0x34b49f0();
   input += synapse0x34b5070();
   input += synapse0x34b50b0();
   input += synapse0x34b50f0();
   input += synapse0x34b5130();
   input += synapse0x34b5170();
   input += synapse0x34b51b0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b4820() {
   double input = input0x34b4820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b51f0() {
   double input = 2.24234;
   input += synapse0x34b5530();
   input += synapse0x34b5570();
   input += synapse0x34b55b0();
   input += synapse0x34b55f0();
   input += synapse0x34b5630();
   input += synapse0x34b5670();
   input += synapse0x34b56b0();
   input += synapse0x34b56f0();
   input += synapse0x34b5730();
   input += synapse0x34b5770();
   input += synapse0x34b57b0();
   input += synapse0x34b57f0();
   input += synapse0x34b5830();
   input += synapse0x34b5870();
   input += synapse0x34b58b0();
   input += synapse0x34b58f0();
   input += synapse0x34b5380();
   input += synapse0x34b53c0();
   input += synapse0x34b5a40();
   input += synapse0x34b5a80();
   input += synapse0x34b5ac0();
   input += synapse0x34b5b00();
   input += synapse0x34b5b40();
   input += synapse0x34b5b80();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b51f0() {
   double input = input0x34b51f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b5bc0() {
   double input = 0.579917;
   input += synapse0x34b5f00();
   input += synapse0x34b5f40();
   input += synapse0x34b5f80();
   input += synapse0x34b5fc0();
   input += synapse0x34b6000();
   input += synapse0x34b6040();
   input += synapse0x34b6080();
   input += synapse0x34b60c0();
   input += synapse0x34b6100();
   input += synapse0x34b6140();
   input += synapse0x34b6180();
   input += synapse0x34b61c0();
   input += synapse0x34b6200();
   input += synapse0x34b6240();
   input += synapse0x34b6280();
   input += synapse0x34b62c0();
   input += synapse0x34b5d50();
   input += synapse0x34b5d90();
   input += synapse0x34b6410();
   input += synapse0x34b6450();
   input += synapse0x34b6490();
   input += synapse0x34b64d0();
   input += synapse0x34b6510();
   input += synapse0x34b6550();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b5bc0() {
   double input = input0x34b5bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b6590() {
   double input = -0.0372189;
   input += synapse0x34b68d0();
   input += synapse0x34b6910();
   input += synapse0x34b6950();
   input += synapse0x34b6990();
   input += synapse0x34b69d0();
   input += synapse0x34b6a10();
   input += synapse0x34b6a50();
   input += synapse0x34b6a90();
   input += synapse0x34b6ad0();
   input += synapse0x34b6b10();
   input += synapse0x34b6b50();
   input += synapse0x34b6b90();
   input += synapse0x34b6bd0();
   input += synapse0x34b6c10();
   input += synapse0x34b6c50();
   input += synapse0x34b6c90();
   input += synapse0x34b6720();
   input += synapse0x34b6760();
   input += synapse0x34b6de0();
   input += synapse0x34b6e20();
   input += synapse0x34b6e60();
   input += synapse0x34b6ea0();
   input += synapse0x34b6ee0();
   input += synapse0x34b6f20();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b6590() {
   double input = input0x34b6590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b6f60() {
   double input = 0.449514;
   input += synapse0x349f9d0();
   input += synapse0x349fa10();
   input += synapse0x349fa50();
   input += synapse0x349fa90();
   input += synapse0x349fad0();
   input += synapse0x349fb10();
   input += synapse0x349fb50();
   input += synapse0x349fb90();
   input += synapse0x34b76b0();
   input += synapse0x34b76f0();
   input += synapse0x34b7730();
   input += synapse0x34b7770();
   input += synapse0x34b77b0();
   input += synapse0x34b77f0();
   input += synapse0x34b7830();
   input += synapse0x34b7870();
   input += synapse0x34b70f0();
   input += synapse0x34b7130();
   input += synapse0x34b79c0();
   input += synapse0x34b7a00();
   input += synapse0x34b7a40();
   input += synapse0x34b7a80();
   input += synapse0x34b7ac0();
   input += synapse0x34b7b00();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b6f60() {
   double input = input0x34b6f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b7b40() {
   double input = -0.476958;
   input += synapse0x34b7e80();
   input += synapse0x34b7ec0();
   input += synapse0x34b7f00();
   input += synapse0x34b7f40();
   input += synapse0x34b7f80();
   input += synapse0x34b7fc0();
   input += synapse0x34b8000();
   input += synapse0x34b8040();
   input += synapse0x34b8080();
   input += synapse0x34b80c0();
   input += synapse0x34b8100();
   input += synapse0x34b8140();
   input += synapse0x34b8180();
   input += synapse0x34b81c0();
   input += synapse0x34b8200();
   input += synapse0x34b8240();
   input += synapse0x34b7cd0();
   input += synapse0x34b7d10();
   input += synapse0x34b8390();
   input += synapse0x34b83d0();
   input += synapse0x34b8410();
   input += synapse0x34b8450();
   input += synapse0x34b8490();
   input += synapse0x34b84d0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b7b40() {
   double input = input0x34b7b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34b8510() {
   double input = 0.00811268;
   input += synapse0x34b8850();
   input += synapse0x34b8890();
   input += synapse0x34b88d0();
   input += synapse0x34b8910();
   input += synapse0x34b8950();
   input += synapse0x34b8990();
   input += synapse0x34b89d0();
   input += synapse0x34b8a10();
   input += synapse0x34b8a50();
   input += synapse0x34b8a90();
   input += synapse0x34b8ad0();
   input += synapse0x34b8b10();
   input += synapse0x34b8b50();
   input += synapse0x34b8b90();
   input += synapse0x34b8bd0();
   input += synapse0x34b8c10();
   input += synapse0x34b86a0();
   input += synapse0x34b86e0();
   input += synapse0x34a9210();
   input += synapse0x34a9250();
   input += synapse0x34a9290();
   input += synapse0x34a92d0();
   input += synapse0x34a9310();
   input += synapse0x34a9350();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34b8510() {
   double input = input0x34b8510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a9390() {
   double input = 0.0476293;
   input += synapse0x34a96d0();
   input += synapse0x34a9710();
   input += synapse0x34a9750();
   input += synapse0x34a9790();
   input += synapse0x34a97d0();
   input += synapse0x34a9810();
   input += synapse0x34a9850();
   input += synapse0x34a9890();
   input += synapse0x34a98d0();
   input += synapse0x34a9910();
   input += synapse0x34a9950();
   input += synapse0x34a9990();
   input += synapse0x34a99d0();
   input += synapse0x34a9a10();
   input += synapse0x34a9a50();
   input += synapse0x34a9a90();
   input += synapse0x34a9520();
   input += synapse0x34a9560();
   input += synapse0x34a9be0();
   input += synapse0x34a9c20();
   input += synapse0x34a9c60();
   input += synapse0x34a9ca0();
   input += synapse0x34a9ce0();
   input += synapse0x34a9d20();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a9390() {
   double input = input0x34a9390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34a9d60() {
   double input = 0.893085;
   input += synapse0x34aa0a0();
   input += synapse0x34aa0e0();
   input += synapse0x34aa120();
   input += synapse0x34aa160();
   input += synapse0x34aa1a0();
   input += synapse0x34aa1e0();
   input += synapse0x34aa220();
   input += synapse0x34aa260();
   input += synapse0x34aa2a0();
   input += synapse0x34aa2e0();
   input += synapse0x34aa320();
   input += synapse0x34aa360();
   input += synapse0x34aa3a0();
   input += synapse0x34aa3e0();
   input += synapse0x34aa420();
   input += synapse0x34aa460();
   input += synapse0x34a9ef0();
   input += synapse0x34a9f30();
   input += synapse0x34aa5b0();
   input += synapse0x34aa5f0();
   input += synapse0x34aa630();
   input += synapse0x34aa670();
   input += synapse0x34aa6b0();
   input += synapse0x34aa6f0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34a9d60() {
   double input = input0x34a9d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34aa730() {
   double input = 1.16357;
   input += synapse0x34aaa70();
   input += synapse0x34aaab0();
   input += synapse0x34aaaf0();
   input += synapse0x34aab30();
   input += synapse0x34aab70();
   input += synapse0x34aabb0();
   input += synapse0x34aabf0();
   input += synapse0x34aac30();
   input += synapse0x34aac70();
   input += synapse0x34aacb0();
   input += synapse0x34aacf0();
   input += synapse0x34aad30();
   input += synapse0x34aad70();
   input += synapse0x34aadb0();
   input += synapse0x34aadf0();
   input += synapse0x34aae30();
   input += synapse0x34aa8c0();
   input += synapse0x34aa900();
   input += synapse0x34aaf80();
   input += synapse0x34aafc0();
   input += synapse0x34ab000();
   input += synapse0x34ab040();
   input += synapse0x34ab080();
   input += synapse0x34ab0c0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34aa730() {
   double input = input0x34aa730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34bcd70() {
   double input = 0.616392;
   input += synapse0x34bcf90();
   input += synapse0x34bcfd0();
   input += synapse0x34bd010();
   input += synapse0x34bd050();
   input += synapse0x34bd090();
   input += synapse0x34bd0d0();
   input += synapse0x34bd110();
   input += synapse0x34bd150();
   input += synapse0x34bd190();
   input += synapse0x34bd1d0();
   input += synapse0x34bd210();
   input += synapse0x34bd250();
   input += synapse0x34bd290();
   input += synapse0x34bd2d0();
   input += synapse0x34bd310();
   input += synapse0x34bd350();
   input += synapse0x34ab100();
   input += synapse0x34ab140();
   input += synapse0x34bd4a0();
   input += synapse0x34bd4e0();
   input += synapse0x34bd520();
   input += synapse0x34bd560();
   input += synapse0x34bd5a0();
   input += synapse0x34bd5e0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34bcd70() {
   double input = input0x34bcd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34bd620() {
   double input = -1.44132;
   input += synapse0x34bd960();
   input += synapse0x34bd9a0();
   input += synapse0x34bd9e0();
   input += synapse0x34bda20();
   input += synapse0x34bda60();
   input += synapse0x34bdaa0();
   input += synapse0x34bdae0();
   input += synapse0x34bdb20();
   input += synapse0x34bdb60();
   input += synapse0x34bdba0();
   input += synapse0x34bdbe0();
   input += synapse0x34bdc20();
   input += synapse0x34bdc60();
   input += synapse0x34bdca0();
   input += synapse0x34bdce0();
   input += synapse0x34bdd20();
   input += synapse0x34bd7b0();
   input += synapse0x34bd7f0();
   input += synapse0x34bde70();
   input += synapse0x34bdeb0();
   input += synapse0x34bdef0();
   input += synapse0x34bdf30();
   input += synapse0x34bdf70();
   input += synapse0x34bdfb0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34bd620() {
   double input = input0x34bd620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34bdff0() {
   double input = -0.264749;
   input += synapse0x34be330();
   input += synapse0x34be370();
   input += synapse0x34be3b0();
   input += synapse0x34be3f0();
   input += synapse0x34be430();
   input += synapse0x34be470();
   input += synapse0x34be4b0();
   input += synapse0x34be4f0();
   input += synapse0x34be530();
   input += synapse0x34be570();
   input += synapse0x34be5b0();
   input += synapse0x34be5f0();
   input += synapse0x34be630();
   input += synapse0x34be670();
   input += synapse0x34be6b0();
   input += synapse0x34be6f0();
   input += synapse0x34be180();
   input += synapse0x34be1c0();
   input += synapse0x34be840();
   input += synapse0x34be880();
   input += synapse0x34be8c0();
   input += synapse0x34be900();
   input += synapse0x34be940();
   input += synapse0x34be980();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34bdff0() {
   double input = input0x34bdff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34be9c0() {
   double input = 0.998132;
   input += synapse0x34bed00();
   input += synapse0x34bed40();
   input += synapse0x34bed80();
   input += synapse0x34bedc0();
   input += synapse0x34bee00();
   input += synapse0x34bee40();
   input += synapse0x34bee80();
   input += synapse0x34beec0();
   input += synapse0x34bef00();
   input += synapse0x34bef40();
   input += synapse0x34bef80();
   input += synapse0x34befc0();
   input += synapse0x34bf000();
   input += synapse0x34bf040();
   input += synapse0x34bf080();
   input += synapse0x34bf0c0();
   input += synapse0x34beb50();
   input += synapse0x34beb90();
   input += synapse0x34bf210();
   input += synapse0x34bf250();
   input += synapse0x34bf290();
   input += synapse0x34bf2d0();
   input += synapse0x34bf310();
   input += synapse0x34bf350();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34be9c0() {
   double input = input0x34be9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34c5bc0() {
   double input = 1.7742;
   input += synapse0x325f260();
   input += synapse0x325f2a0();
   input += synapse0x349ce00();
   input += synapse0x349ce40();
   input += synapse0x349d7d0();
   input += synapse0x349d810();
   input += synapse0x349e5a0();
   input += synapse0x349e5e0();
   input += synapse0x349ef70();
   input += synapse0x349efb0();
   input += synapse0x349f940();
   input += synapse0x349f980();
   input += synapse0x34a0420();
   input += synapse0x34a0460();
   input += synapse0x34a0df0();
   input += synapse0x34a0e30();
   input += synapse0x349ded0();
   input += synapse0x349df10();
   input += synapse0x34a29a0();
   input += synapse0x34a29e0();
   input += synapse0x34a3370();
   input += synapse0x34a33b0();
   input += synapse0x34a3d40();
   input += synapse0x34a3d80();
   input += synapse0x34a4710();
   input += synapse0x34a4750();
   input += synapse0x34988b0();
   input += synapse0x34988f0();
   input += synapse0x34a6800();
   input += synapse0x34a6840();
   input += synapse0x34a71d0();
   input += synapse0x34a7210();
   input += synapse0x34a7ba0();
   input += synapse0x34a7be0();
   input += synapse0x34a8570();
   input += synapse0x34a85b0();
   input += synapse0x34a8f40();
   input += synapse0x34a8f80();
   input += synapse0x34a1a90();
   input += synapse0x34a1ad0();
   input += synapse0x34ab340();
   input += synapse0x34ab380();
   input += synapse0x34abcd0();
   input += synapse0x34abd10();
   input += synapse0x34ac6a0();
   input += synapse0x34ac6e0();
   input += synapse0x34ad070();
   input += synapse0x34ad0b0();
   input += synapse0x34ada40();
   input += synapse0x34ada80();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34c5bc0() {
   double input = input0x34c5bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34c5f60() {
   double input = 1.23446;
   input += synapse0x34b0180();
   input += synapse0x34b01c0();
   input += synapse0x34a5740();
   input += synapse0x34a5780();
   input += synapse0x34b2d60();
   input += synapse0x34b2da0();
   input += synapse0x34b3730();
   input += synapse0x34b3770();
   input += synapse0x34b4100();
   input += synapse0x34b4140();
   input += synapse0x34b4ad0();
   input += synapse0x34b4b10();
   input += synapse0x34b54a0();
   input += synapse0x34b54e0();
   input += synapse0x34b5e70();
   input += synapse0x34b5eb0();
   input += synapse0x34b6840();
   input += synapse0x34b6880();
   input += synapse0x34b7210();
   input += synapse0x34b7250();
   input += synapse0x34b7df0();
   input += synapse0x34b7e30();
   input += synapse0x34b87c0();
   input += synapse0x34b8800();
   input += synapse0x34a9640();
   input += synapse0x34a9680();
   input += synapse0x34aa010();
   input += synapse0x34aa050();
   input += synapse0x34aa9e0();
   input += synapse0x34aaa20();
   input += synapse0x34bcf00();
   input += synapse0x34bcf40();
   input += synapse0x34bd8d0();
   input += synapse0x34bd910();
   input += synapse0x34be2a0();
   input += synapse0x34be2e0();
   input += synapse0x34bec70();
   input += synapse0x34becb0();
   input += synapse0x349ab60();
   input += synapse0x349aba0();
   input += synapse0x34ae410();
   input += synapse0x34ae450();
   input += synapse0x34bf390();
   input += synapse0x34bf3d0();
   input += synapse0x34bf410();
   input += synapse0x34bf450();
   input += synapse0x34c6300();
   input += synapse0x34c6340();
   input += synapse0x34c6380();
   input += synapse0x34c63c0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34c5f60() {
   double input = input0x34c5f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34c6400() {
   double input = -0.0697158;
   input += synapse0x34c6740();
   input += synapse0x34c6780();
   input += synapse0x34c67c0();
   input += synapse0x34c6800();
   input += synapse0x34c6840();
   input += synapse0x34c6880();
   input += synapse0x34c68c0();
   input += synapse0x34c6900();
   input += synapse0x34c6940();
   input += synapse0x34c6980();
   input += synapse0x34c69c0();
   input += synapse0x34c6a00();
   input += synapse0x34c6a40();
   input += synapse0x34c6a80();
   input += synapse0x34c6ac0();
   input += synapse0x34c6b00();
   input += synapse0x34c6590();
   input += synapse0x34c65d0();
   input += synapse0x34c6c50();
   input += synapse0x34c6c90();
   input += synapse0x34c6cd0();
   input += synapse0x34c6d10();
   input += synapse0x34c6d50();
   input += synapse0x34c6d90();
   input += synapse0x34c6dd0();
   input += synapse0x34c6e10();
   input += synapse0x34c6e50();
   input += synapse0x34c6e90();
   input += synapse0x34c6ed0();
   input += synapse0x34c6f10();
   input += synapse0x34c6f50();
   input += synapse0x34c6f90();
   input += synapse0x34c6b40();
   input += synapse0x34c6b80();
   input += synapse0x34c6bc0();
   input += synapse0x34c6c00();
   input += synapse0x34c71e0();
   input += synapse0x34c7220();
   input += synapse0x34c7260();
   input += synapse0x34c72a0();
   input += synapse0x34c72e0();
   input += synapse0x34c7320();
   input += synapse0x34c7360();
   input += synapse0x34c73a0();
   input += synapse0x34c73e0();
   input += synapse0x34c7420();
   input += synapse0x34c7460();
   input += synapse0x34c74a0();
   input += synapse0x34c74e0();
   input += synapse0x34c7520();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34c6400() {
   double input = input0x34c6400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34c7560() {
   double input = 0.503406;
   input += synapse0x34c78a0();
   input += synapse0x34c78e0();
   input += synapse0x34c7920();
   input += synapse0x34c7960();
   input += synapse0x34c79a0();
   input += synapse0x34c79e0();
   input += synapse0x34c7a20();
   input += synapse0x34c7a60();
   input += synapse0x34c7aa0();
   input += synapse0x34c7ae0();
   input += synapse0x34c7b20();
   input += synapse0x34c7b60();
   input += synapse0x34c7ba0();
   input += synapse0x34c7be0();
   input += synapse0x34c7c20();
   input += synapse0x34c7c60();
   input += synapse0x34c76f0();
   input += synapse0x34c7730();
   input += synapse0x34c7db0();
   input += synapse0x34c7df0();
   input += synapse0x34c7e30();
   input += synapse0x34c7e70();
   input += synapse0x34c7eb0();
   input += synapse0x34c7ef0();
   input += synapse0x34c7f30();
   input += synapse0x34c7f70();
   input += synapse0x34c7fb0();
   input += synapse0x34c7ff0();
   input += synapse0x34c8030();
   input += synapse0x34c8070();
   input += synapse0x34c80b0();
   input += synapse0x34c80f0();
   input += synapse0x34c7ca0();
   input += synapse0x34c7ce0();
   input += synapse0x34c7d20();
   input += synapse0x34c7d60();
   input += synapse0x34c8340();
   input += synapse0x34c8380();
   input += synapse0x34c83c0();
   input += synapse0x34c8400();
   input += synapse0x34c8440();
   input += synapse0x34c8480();
   input += synapse0x34c84c0();
   input += synapse0x34c8500();
   input += synapse0x34c8540();
   input += synapse0x34c8580();
   input += synapse0x34c85c0();
   input += synapse0x34c8600();
   input += synapse0x34c8640();
   input += synapse0x34c8680();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34c7560() {
   double input = input0x34c7560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34c86c0() {
   double input = -1.29365;
   input += synapse0x34c8a00();
   input += synapse0x34c8a40();
   input += synapse0x34c8a80();
   input += synapse0x34c8ac0();
   input += synapse0x34c8b00();
   input += synapse0x34c8b40();
   input += synapse0x34c8b80();
   input += synapse0x34c8bc0();
   input += synapse0x34c8c00();
   input += synapse0x34c8c40();
   input += synapse0x34c8c80();
   input += synapse0x34c8cc0();
   input += synapse0x34c8d00();
   input += synapse0x34c8d40();
   input += synapse0x34c8d80();
   input += synapse0x34c8dc0();
   input += synapse0x34c8850();
   input += synapse0x34c8890();
   input += synapse0x34c8f10();
   input += synapse0x34c8f50();
   input += synapse0x34c8f90();
   input += synapse0x34c8fd0();
   input += synapse0x34c9010();
   input += synapse0x34c9050();
   input += synapse0x34c9090();
   input += synapse0x34c90d0();
   input += synapse0x34c9110();
   input += synapse0x34c9150();
   input += synapse0x34c9190();
   input += synapse0x34c91d0();
   input += synapse0x34c9210();
   input += synapse0x34c9250();
   input += synapse0x34c8e00();
   input += synapse0x34c8e40();
   input += synapse0x34c8e80();
   input += synapse0x34c8ec0();
   input += synapse0x34c94a0();
   input += synapse0x34c94e0();
   input += synapse0x34c9520();
   input += synapse0x34c9560();
   input += synapse0x34c95a0();
   input += synapse0x34c95e0();
   input += synapse0x34c9620();
   input += synapse0x34c9660();
   input += synapse0x34c96a0();
   input += synapse0x34c96e0();
   input += synapse0x34c9720();
   input += synapse0x34c9760();
   input += synapse0x34c97a0();
   input += synapse0x34c97e0();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34c86c0() {
   double input = input0x34c86c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi04_uR::input0x34c9820() {
   double input = -1.7952;
   input += synapse0x34c9a40();
   input += synapse0x34c9a80();
   input += synapse0x34c9ac0();
   input += synapse0x34c9b00();
   input += synapse0x34c9b40();
   return input;
}

double NNfunction_ns_chi04_uR::neuron0x34c9820() {
   double input = input0x34c9820();
   return (input * 1)+0;
}

double NNfunction_ns_chi04_uR::synapse0x34957d0() {
   return (neuron0x3495910()*-0.0136915);
}

double NNfunction_ns_chi04_uR::synapse0x3495810() {
   return (neuron0x3495c50()*-5.48769);
}

double NNfunction_ns_chi04_uR::synapse0x349abf0() {
   return (neuron0x3495f90()*-0.350308);
}

double NNfunction_ns_chi04_uR::synapse0x349ac30() {
   return (neuron0x34962d0()*0.0222429);
}

double NNfunction_ns_chi04_uR::synapse0x349ac70() {
   return (neuron0x3496610()*0.00681558);
}

double NNfunction_ns_chi04_uR::synapse0x349acb0() {
   return (neuron0x3496950()*0.0584148);
}

double NNfunction_ns_chi04_uR::synapse0x349acf0() {
   return (neuron0x3496c90()*0.0113328);
}

double NNfunction_ns_chi04_uR::synapse0x349ad30() {
   return (neuron0x3496fd0()*-0.0150728);
}

double NNfunction_ns_chi04_uR::synapse0x349ad70() {
   return (neuron0x3497310()*0.0252415);
}

double NNfunction_ns_chi04_uR::synapse0x349adb0() {
   return (neuron0x3497650()*-0.0359691);
}

double NNfunction_ns_chi04_uR::synapse0x349adf0() {
   return (neuron0x3497990()*-0.0330691);
}

double NNfunction_ns_chi04_uR::synapse0x349ae30() {
   return (neuron0x3497cd0()*0.00483896);
}

double NNfunction_ns_chi04_uR::synapse0x349ae70() {
   return (neuron0x3498010()*0.00969605);
}

double NNfunction_ns_chi04_uR::synapse0x349aeb0() {
   return (neuron0x3498350()*0.019581);
}

double NNfunction_ns_chi04_uR::synapse0x349aef0() {
   return (neuron0x3498690()*0.260896);
}

double NNfunction_ns_chi04_uR::synapse0x349af30() {
   return (neuron0x34989d0()*0.000656934);
}

double NNfunction_ns_chi04_uR::synapse0x3495740() {
   return (neuron0x3498d10()*0.0206114);
}

double NNfunction_ns_chi04_uR::synapse0x3495780() {
   return (neuron0x3499270()*0.0202036);
}

double NNfunction_ns_chi04_uR::synapse0x3250ab0() {
   return (neuron0x3499490()*0.0529754);
}

double NNfunction_ns_chi04_uR::synapse0x3250af0() {
   return (neuron0x34997d0()*0.0187771);
}

double NNfunction_ns_chi04_uR::synapse0x349b190() {
   return (neuron0x3499b10()*-0.0115943);
}

double NNfunction_ns_chi04_uR::synapse0x349b1d0() {
   return (neuron0x3499e50()*0.00177723);
}

double NNfunction_ns_chi04_uR::synapse0x349b210() {
   return (neuron0x349a190()*-0.0265297);
}

double NNfunction_ns_chi04_uR::synapse0x349b250() {
   return (neuron0x349a4d0()*1.82696);
}

double NNfunction_ns_chi04_uR::synapse0x349b5d0() {
   return (neuron0x3495910()*-0.0879355);
}

double NNfunction_ns_chi04_uR::synapse0x349b610() {
   return (neuron0x3495c50()*1.14156);
}

double NNfunction_ns_chi04_uR::synapse0x349b650() {
   return (neuron0x3495f90()*-0.410965);
}

double NNfunction_ns_chi04_uR::synapse0x349b690() {
   return (neuron0x34962d0()*-0.0311446);
}

double NNfunction_ns_chi04_uR::synapse0x349b6d0() {
   return (neuron0x3496610()*0.124413);
}

double NNfunction_ns_chi04_uR::synapse0x349b710() {
   return (neuron0x3496950()*-0.396767);
}

double NNfunction_ns_chi04_uR::synapse0x349b750() {
   return (neuron0x3496c90()*0.0455513);
}

double NNfunction_ns_chi04_uR::synapse0x349b790() {
   return (neuron0x3496fd0()*-0.0938963);
}

double NNfunction_ns_chi04_uR::synapse0x349b7d0() {
   return (neuron0x3497310()*0.0597668);
}

double NNfunction_ns_chi04_uR::synapse0x349b080() {
   return (neuron0x3497650()*0.0609646);
}

double NNfunction_ns_chi04_uR::synapse0x349b0c0() {
   return (neuron0x3497990()*0.126861);
}

double NNfunction_ns_chi04_uR::synapse0x349b100() {
   return (neuron0x3497cd0()*-0.156255);
}

double NNfunction_ns_chi04_uR::synapse0x349b140() {
   return (neuron0x3498010()*-0.211639);
}

double NNfunction_ns_chi04_uR::synapse0x349ba20() {
   return (neuron0x3498350()*-0.184126);
}

double NNfunction_ns_chi04_uR::synapse0x349ba60() {
   return (neuron0x3498690()*0.566929);
}

double NNfunction_ns_chi04_uR::synapse0x349baa0() {
   return (neuron0x34989d0()*0.241445);
}

double NNfunction_ns_chi04_uR::synapse0x349b420() {
   return (neuron0x3498d10()*0.100876);
}

double NNfunction_ns_chi04_uR::synapse0x349b460() {
   return (neuron0x3499270()*0.0829849);
}

double NNfunction_ns_chi04_uR::synapse0x349bbf0() {
   return (neuron0x3499490()*0.0897641);
}

double NNfunction_ns_chi04_uR::synapse0x349bc30() {
   return (neuron0x34997d0()*0.0518143);
}

double NNfunction_ns_chi04_uR::synapse0x349bc70() {
   return (neuron0x3499b10()*0.0302493);
}

double NNfunction_ns_chi04_uR::synapse0x349bcb0() {
   return (neuron0x3499e50()*-0.0281222);
}

double NNfunction_ns_chi04_uR::synapse0x349bcf0() {
   return (neuron0x349a190()*0.159411);
}

double NNfunction_ns_chi04_uR::synapse0x349bd30() {
   return (neuron0x349a4d0()*1.0353);
}

double NNfunction_ns_chi04_uR::synapse0x349c0b0() {
   return (neuron0x3495910()*-0.0899578);
}

double NNfunction_ns_chi04_uR::synapse0x349c0f0() {
   return (neuron0x3495c50()*0.248568);
}

double NNfunction_ns_chi04_uR::synapse0x349c130() {
   return (neuron0x3495f90()*0.362956);
}

double NNfunction_ns_chi04_uR::synapse0x349c170() {
   return (neuron0x34962d0()*1.99139);
}

double NNfunction_ns_chi04_uR::synapse0x349c1b0() {
   return (neuron0x3496610()*0.530569);
}

double NNfunction_ns_chi04_uR::synapse0x349c1f0() {
   return (neuron0x3496950()*-0.867946);
}

double NNfunction_ns_chi04_uR::synapse0x349c230() {
   return (neuron0x3496c90()*-0.223885);
}

double NNfunction_ns_chi04_uR::synapse0x349c270() {
   return (neuron0x3496fd0()*0.147499);
}

double NNfunction_ns_chi04_uR::synapse0x349c2b0() {
   return (neuron0x3497310()*0.00987769);
}

double NNfunction_ns_chi04_uR::synapse0x349c2f0() {
   return (neuron0x3497650()*0.531666);
}

double NNfunction_ns_chi04_uR::synapse0x349c330() {
   return (neuron0x3497990()*0.362795);
}

double NNfunction_ns_chi04_uR::synapse0x349c370() {
   return (neuron0x3497cd0()*-0.470798);
}

double NNfunction_ns_chi04_uR::synapse0x349c3b0() {
   return (neuron0x3498010()*-0.636325);
}

double NNfunction_ns_chi04_uR::synapse0x349c3f0() {
   return (neuron0x3498350()*-0.0681102);
}

double NNfunction_ns_chi04_uR::synapse0x349c430() {
   return (neuron0x3498690()*0.448804);
}

double NNfunction_ns_chi04_uR::synapse0x349c470() {
   return (neuron0x34989d0()*0.0219955);
}

double NNfunction_ns_chi04_uR::synapse0x349bf00() {
   return (neuron0x3498d10()*-0.39964);
}

double NNfunction_ns_chi04_uR::synapse0x349bf40() {
   return (neuron0x3499270()*-0.130204);
}

double NNfunction_ns_chi04_uR::synapse0x32511a0() {
   return (neuron0x3499490()*0.627999);
}

double NNfunction_ns_chi04_uR::synapse0x325ea70() {
   return (neuron0x34997d0()*-0.613863);
}

double NNfunction_ns_chi04_uR::synapse0x325eab0() {
   return (neuron0x3499b10()*-0.491406);
}

double NNfunction_ns_chi04_uR::synapse0x34849a0() {
   return (neuron0x3499e50()*0.359108);
}

double NNfunction_ns_chi04_uR::synapse0x34849e0() {
   return (neuron0x349a190()*0.0953462);
}

double NNfunction_ns_chi04_uR::synapse0x3484a20() {
   return (neuron0x349a4d0()*-0.409119);
}

double NNfunction_ns_chi04_uR::synapse0x325f2f0() {
   return (neuron0x3495910()*-0.011409);
}

double NNfunction_ns_chi04_uR::synapse0x349b9a0() {
   return (neuron0x3495c50()*0.0676156);
}

double NNfunction_ns_chi04_uR::synapse0x349b9e0() {
   return (neuron0x3495f90()*0.0569718);
}

double NNfunction_ns_chi04_uR::synapse0x349c5c0() {
   return (neuron0x34962d0()*-1.28847);
}

double NNfunction_ns_chi04_uR::synapse0x349c600() {
   return (neuron0x3496610()*0.00639508);
}

double NNfunction_ns_chi04_uR::synapse0x349c640() {
   return (neuron0x3496950()*0.00461016);
}

double NNfunction_ns_chi04_uR::synapse0x349c680() {
   return (neuron0x3496c90()*-0.0125227);
}

double NNfunction_ns_chi04_uR::synapse0x349c6c0() {
   return (neuron0x3496fd0()*0.016363);
}

double NNfunction_ns_chi04_uR::synapse0x349c700() {
   return (neuron0x3497310()*0.0061684);
}

double NNfunction_ns_chi04_uR::synapse0x349c740() {
   return (neuron0x3497650()*-0.0030469);
}

double NNfunction_ns_chi04_uR::synapse0x349c780() {
   return (neuron0x3497990()*-0.0411766);
}

double NNfunction_ns_chi04_uR::synapse0x349c7c0() {
   return (neuron0x3497cd0()*0.032934);
}

double NNfunction_ns_chi04_uR::synapse0x349c800() {
   return (neuron0x3498010()*0.0174614);
}

double NNfunction_ns_chi04_uR::synapse0x349c840() {
   return (neuron0x3498350()*0.0139401);
}

double NNfunction_ns_chi04_uR::synapse0x349c880() {
   return (neuron0x3498690()*0.691984);
}

double NNfunction_ns_chi04_uR::synapse0x349c8c0() {
   return (neuron0x34989d0()*0.0145063);
}

double NNfunction_ns_chi04_uR::synapse0x3495850() {
   return (neuron0x3498d10()*0.028595);
}

double NNfunction_ns_chi04_uR::synapse0x3495890() {
   return (neuron0x3499270()*-0.0191784);
}

double NNfunction_ns_chi04_uR::synapse0x34958d0() {
   return (neuron0x3499490()*-0.0428678);
}

double NNfunction_ns_chi04_uR::synapse0x349ca10() {
   return (neuron0x34997d0()*-0.0715174);
}

double NNfunction_ns_chi04_uR::synapse0x349ca50() {
   return (neuron0x3499b10()*0.00403003);
}

double NNfunction_ns_chi04_uR::synapse0x349ca90() {
   return (neuron0x3499e50()*0.00778386);
}

double NNfunction_ns_chi04_uR::synapse0x349cad0() {
   return (neuron0x349a190()*0.0142496);
}

double NNfunction_ns_chi04_uR::synapse0x349cb10() {
   return (neuron0x349a4d0()*-0.0258221);
}

double NNfunction_ns_chi04_uR::synapse0x349ce90() {
   return (neuron0x3495910()*-0.0049858);
}

double NNfunction_ns_chi04_uR::synapse0x349ced0() {
   return (neuron0x3495c50()*2.3458);
}

double NNfunction_ns_chi04_uR::synapse0x349cf10() {
   return (neuron0x3495f90()*0.247634);
}

double NNfunction_ns_chi04_uR::synapse0x349cf50() {
   return (neuron0x34962d0()*-0.0482109);
}

double NNfunction_ns_chi04_uR::synapse0x349cf90() {
   return (neuron0x3496610()*-0.0165094);
}

double NNfunction_ns_chi04_uR::synapse0x349cfd0() {
   return (neuron0x3496950()*-0.0114546);
}

double NNfunction_ns_chi04_uR::synapse0x349d010() {
   return (neuron0x3496c90()*-0.0249936);
}

double NNfunction_ns_chi04_uR::synapse0x349d050() {
   return (neuron0x3496fd0()*-0.015458);
}

double NNfunction_ns_chi04_uR::synapse0x349d090() {
   return (neuron0x3497310()*-0.0218902);
}

double NNfunction_ns_chi04_uR::synapse0x349d0d0() {
   return (neuron0x3497650()*0.0372064);
}

double NNfunction_ns_chi04_uR::synapse0x349d110() {
   return (neuron0x3497990()*0.0347696);
}

double NNfunction_ns_chi04_uR::synapse0x349d150() {
   return (neuron0x3497cd0()*0.0309587);
}

double NNfunction_ns_chi04_uR::synapse0x349d190() {
   return (neuron0x3498010()*0.0126961);
}

double NNfunction_ns_chi04_uR::synapse0x349d1d0() {
   return (neuron0x3498350()*-0.00357645);
}

double NNfunction_ns_chi04_uR::synapse0x349d210() {
   return (neuron0x3498690()*-0.748492);
}

double NNfunction_ns_chi04_uR::synapse0x349d250() {
   return (neuron0x34989d0()*-0.0357865);
}

double NNfunction_ns_chi04_uR::synapse0x349cce0() {
   return (neuron0x3498d10()*-0.0677899);
}

double NNfunction_ns_chi04_uR::synapse0x349cd20() {
   return (neuron0x3499270()*0.0389828);
}

double NNfunction_ns_chi04_uR::synapse0x349d3a0() {
   return (neuron0x3499490()*0.0284964);
}

double NNfunction_ns_chi04_uR::synapse0x349d3e0() {
   return (neuron0x34997d0()*0.0234147);
}

double NNfunction_ns_chi04_uR::synapse0x349d420() {
   return (neuron0x3499b10()*0.00454083);
}

double NNfunction_ns_chi04_uR::synapse0x349d460() {
   return (neuron0x3499e50()*0.00370627);
}

double NNfunction_ns_chi04_uR::synapse0x349d4a0() {
   return (neuron0x349a190()*0.0304737);
}

double NNfunction_ns_chi04_uR::synapse0x349d4e0() {
   return (neuron0x349a4d0()*-0.308424);
}

double NNfunction_ns_chi04_uR::synapse0x349d860() {
   return (neuron0x3495910()*-0.0103126);
}

double NNfunction_ns_chi04_uR::synapse0x349d8a0() {
   return (neuron0x3495c50()*-2.65418);
}

double NNfunction_ns_chi04_uR::synapse0x349d8e0() {
   return (neuron0x3495f90()*0.112);
}

double NNfunction_ns_chi04_uR::synapse0x349d920() {
   return (neuron0x34962d0()*0.00308315);
}

double NNfunction_ns_chi04_uR::synapse0x349d960() {
   return (neuron0x3496610()*0.0195257);
}

double NNfunction_ns_chi04_uR::synapse0x349d9a0() {
   return (neuron0x3496950()*-0.029366);
}

double NNfunction_ns_chi04_uR::synapse0x349d9e0() {
   return (neuron0x3496c90()*0.00010658);
}

double NNfunction_ns_chi04_uR::synapse0x349da20() {
   return (neuron0x3496fd0()*-0.0116365);
}

double NNfunction_ns_chi04_uR::synapse0x349da60() {
   return (neuron0x3497310()*0.017123);
}

double NNfunction_ns_chi04_uR::synapse0x325edc0() {
   return (neuron0x3497650()*0.00186759);
}

double NNfunction_ns_chi04_uR::synapse0x325ee00() {
   return (neuron0x3497990()*-0.00987103);
}

double NNfunction_ns_chi04_uR::synapse0x325ee40() {
   return (neuron0x3497cd0()*-0.0244201);
}

double NNfunction_ns_chi04_uR::synapse0x325ee80() {
   return (neuron0x3498010()*-0.000175742);
}

double NNfunction_ns_chi04_uR::synapse0x325eec0() {
   return (neuron0x3498350()*-0.0251641);
}

double NNfunction_ns_chi04_uR::synapse0x325ef00() {
   return (neuron0x3498690()*0.0625445);
}

double NNfunction_ns_chi04_uR::synapse0x325ef40() {
   return (neuron0x34989d0()*0.0338812);
}

double NNfunction_ns_chi04_uR::synapse0x349d6b0() {
   return (neuron0x3498d10()*0.0161248);
}

double NNfunction_ns_chi04_uR::synapse0x349d6f0() {
   return (neuron0x3499270()*-0.00861225);
}

double NNfunction_ns_chi04_uR::synapse0x325f090() {
   return (neuron0x3499490()*-0.0024178);
}

double NNfunction_ns_chi04_uR::synapse0x325f0d0() {
   return (neuron0x34997d0()*-0.00271028);
}

double NNfunction_ns_chi04_uR::synapse0x325f110() {
   return (neuron0x3499b10()*0.0048873);
}

double NNfunction_ns_chi04_uR::synapse0x325f150() {
   return (neuron0x3499e50()*-0.0135768);
}

double NNfunction_ns_chi04_uR::synapse0x325f190() {
   return (neuron0x349a190()*0.0338107);
}

double NNfunction_ns_chi04_uR::synapse0x349e2b0() {
   return (neuron0x349a4d0()*-1.1021);
}

double NNfunction_ns_chi04_uR::synapse0x349e630() {
   return (neuron0x3495910()*0.0200516);
}

double NNfunction_ns_chi04_uR::synapse0x349e670() {
   return (neuron0x3495c50()*-0.0709612);
}

double NNfunction_ns_chi04_uR::synapse0x349e6b0() {
   return (neuron0x3495f90()*-0.0423069);
}

double NNfunction_ns_chi04_uR::synapse0x349e6f0() {
   return (neuron0x34962d0()*-1.2914);
}

double NNfunction_ns_chi04_uR::synapse0x349e730() {
   return (neuron0x3496610()*-0.0392334);
}

double NNfunction_ns_chi04_uR::synapse0x349e770() {
   return (neuron0x3496950()*0.00672401);
}

double NNfunction_ns_chi04_uR::synapse0x349e7b0() {
   return (neuron0x3496c90()*-0.0372933);
}

double NNfunction_ns_chi04_uR::synapse0x349e7f0() {
   return (neuron0x3496fd0()*0.00593342);
}

double NNfunction_ns_chi04_uR::synapse0x349e830() {
   return (neuron0x3497310()*-0.00776535);
}

double NNfunction_ns_chi04_uR::synapse0x349e870() {
   return (neuron0x3497650()*0.00730462);
}

double NNfunction_ns_chi04_uR::synapse0x349e8b0() {
   return (neuron0x3497990()*0.0487276);
}

double NNfunction_ns_chi04_uR::synapse0x349e8f0() {
   return (neuron0x3497cd0()*-0.00975292);
}

double NNfunction_ns_chi04_uR::synapse0x349e930() {
   return (neuron0x3498010()*0.0190074);
}

double NNfunction_ns_chi04_uR::synapse0x349e970() {
   return (neuron0x3498350()*-0.0305632);
}

double NNfunction_ns_chi04_uR::synapse0x349e9b0() {
   return (neuron0x3498690()*-0.677205);
}

double NNfunction_ns_chi04_uR::synapse0x349e9f0() {
   return (neuron0x34989d0()*0.00976243);
}

double NNfunction_ns_chi04_uR::synapse0x349e480() {
   return (neuron0x3498d10()*-0.0147549);
}

double NNfunction_ns_chi04_uR::synapse0x349e4c0() {
   return (neuron0x3499270()*0.0137889);
}

double NNfunction_ns_chi04_uR::synapse0x349eb40() {
   return (neuron0x3499490()*0.0412661);
}

double NNfunction_ns_chi04_uR::synapse0x349eb80() {
   return (neuron0x34997d0()*0.00989854);
}

double NNfunction_ns_chi04_uR::synapse0x349ebc0() {
   return (neuron0x3499b10()*-0.0228915);
}

double NNfunction_ns_chi04_uR::synapse0x349ec00() {
   return (neuron0x3499e50()*0.0105573);
}

double NNfunction_ns_chi04_uR::synapse0x349ec40() {
   return (neuron0x349a190()*0.0291483);
}

double NNfunction_ns_chi04_uR::synapse0x349ec80() {
   return (neuron0x349a4d0()*-0.0414145);
}

double NNfunction_ns_chi04_uR::synapse0x349f000() {
   return (neuron0x3495910()*0.718267);
}

double NNfunction_ns_chi04_uR::synapse0x349f040() {
   return (neuron0x3495c50()*-0.896923);
}

double NNfunction_ns_chi04_uR::synapse0x349f080() {
   return (neuron0x3495f90()*-0.181254);
}

double NNfunction_ns_chi04_uR::synapse0x349f0c0() {
   return (neuron0x34962d0()*-0.42096);
}

double NNfunction_ns_chi04_uR::synapse0x349f100() {
   return (neuron0x3496610()*0.0159755);
}

double NNfunction_ns_chi04_uR::synapse0x349f140() {
   return (neuron0x3496950()*-0.0206795);
}

double NNfunction_ns_chi04_uR::synapse0x349f180() {
   return (neuron0x3496c90()*0.0799132);
}

double NNfunction_ns_chi04_uR::synapse0x349f1c0() {
   return (neuron0x3496fd0()*0.282018);
}

double NNfunction_ns_chi04_uR::synapse0x349f200() {
   return (neuron0x3497310()*0.084912);
}

double NNfunction_ns_chi04_uR::synapse0x349f240() {
   return (neuron0x3497650()*0.553508);
}

double NNfunction_ns_chi04_uR::synapse0x349f280() {
   return (neuron0x3497990()*-0.451527);
}

double NNfunction_ns_chi04_uR::synapse0x349f2c0() {
   return (neuron0x3497cd0()*-0.0194312);
}

double NNfunction_ns_chi04_uR::synapse0x349f300() {
   return (neuron0x3498010()*-1.33777);
}

double NNfunction_ns_chi04_uR::synapse0x349f340() {
   return (neuron0x3498350()*-0.345787);
}

double NNfunction_ns_chi04_uR::synapse0x349f380() {
   return (neuron0x3498690()*-0.0972747);
}

double NNfunction_ns_chi04_uR::synapse0x349f3c0() {
   return (neuron0x34989d0()*-0.564193);
}

double NNfunction_ns_chi04_uR::synapse0x349ee50() {
   return (neuron0x3498d10()*-0.00336209);
}

double NNfunction_ns_chi04_uR::synapse0x349ee90() {
   return (neuron0x3499270()*1.05603);
}

double NNfunction_ns_chi04_uR::synapse0x349f510() {
   return (neuron0x3499490()*-0.211246);
}

double NNfunction_ns_chi04_uR::synapse0x349f550() {
   return (neuron0x34997d0()*-0.0842796);
}

double NNfunction_ns_chi04_uR::synapse0x349f590() {
   return (neuron0x3499b10()*-0.429075);
}

double NNfunction_ns_chi04_uR::synapse0x349f5d0() {
   return (neuron0x3499e50()*0.260954);
}

double NNfunction_ns_chi04_uR::synapse0x349f610() {
   return (neuron0x349a190()*-0.00439691);
}

double NNfunction_ns_chi04_uR::synapse0x349f650() {
   return (neuron0x349a4d0()*1.57314);
}

double NNfunction_ns_chi04_uR::synapse0x3499160() {
   return (neuron0x3495910()*-0.0404433);
}

double NNfunction_ns_chi04_uR::synapse0x34991a0() {
   return (neuron0x3495c50()*-9.08029);
}

double NNfunction_ns_chi04_uR::synapse0x34991e0() {
   return (neuron0x3495f90()*3.02144);
}

double NNfunction_ns_chi04_uR::synapse0x3499220() {
   return (neuron0x34962d0()*-0.0311584);
}

double NNfunction_ns_chi04_uR::synapse0x349fbe0() {
   return (neuron0x3496610()*0.0580779);
}

double NNfunction_ns_chi04_uR::synapse0x349fc20() {
   return (neuron0x3496950()*0.016536);
}

double NNfunction_ns_chi04_uR::synapse0x349fc60() {
   return (neuron0x3496c90()*0.0148818);
}

double NNfunction_ns_chi04_uR::synapse0x349fca0() {
   return (neuron0x3496fd0()*-0.00344602);
}

double NNfunction_ns_chi04_uR::synapse0x349fce0() {
   return (neuron0x3497310()*0.00357612);
}

double NNfunction_ns_chi04_uR::synapse0x349fd20() {
   return (neuron0x3497650()*0.039081);
}

double NNfunction_ns_chi04_uR::synapse0x349fd60() {
   return (neuron0x3497990()*-0.0449715);
}

double NNfunction_ns_chi04_uR::synapse0x349fda0() {
   return (neuron0x3497cd0()*0.00522449);
}

double NNfunction_ns_chi04_uR::synapse0x349fde0() {
   return (neuron0x3498010()*0.0240232);
}

double NNfunction_ns_chi04_uR::synapse0x349fe20() {
   return (neuron0x3498350()*0.0147154);
}

double NNfunction_ns_chi04_uR::synapse0x349fe60() {
   return (neuron0x3498690()*0.0431771);
}

double NNfunction_ns_chi04_uR::synapse0x349fea0() {
   return (neuron0x34989d0()*-0.0456525);
}

double NNfunction_ns_chi04_uR::synapse0x349f820() {
   return (neuron0x3498d10()*-0.00866384);
}

double NNfunction_ns_chi04_uR::synapse0x349f860() {
   return (neuron0x3499270()*-0.020977);
}

double NNfunction_ns_chi04_uR::synapse0x349fff0() {
   return (neuron0x3499490()*-0.00925515);
}

double NNfunction_ns_chi04_uR::synapse0x34a0030() {
   return (neuron0x34997d0()*-0.0184427);
}

double NNfunction_ns_chi04_uR::synapse0x34a0070() {
   return (neuron0x3499b10()*-0.0178654);
}

double NNfunction_ns_chi04_uR::synapse0x34a00b0() {
   return (neuron0x3499e50()*0.0185195);
}

double NNfunction_ns_chi04_uR::synapse0x34a00f0() {
   return (neuron0x349a190()*0.029578);
}

double NNfunction_ns_chi04_uR::synapse0x34a0130() {
   return (neuron0x349a4d0()*-0.78965);
}

double NNfunction_ns_chi04_uR::synapse0x34a04b0() {
   return (neuron0x3495910()*-0.83152);
}

double NNfunction_ns_chi04_uR::synapse0x34a04f0() {
   return (neuron0x3495c50()*-1.33927);
}

double NNfunction_ns_chi04_uR::synapse0x34a0530() {
   return (neuron0x3495f90()*0.150118);
}

double NNfunction_ns_chi04_uR::synapse0x34a0570() {
   return (neuron0x34962d0()*0.0766073);
}

double NNfunction_ns_chi04_uR::synapse0x34a05b0() {
   return (neuron0x3496610()*-0.138704);
}

double NNfunction_ns_chi04_uR::synapse0x34a05f0() {
   return (neuron0x3496950()*-0.118509);
}

double NNfunction_ns_chi04_uR::synapse0x34a0630() {
   return (neuron0x3496c90()*0.143466);
}

double NNfunction_ns_chi04_uR::synapse0x34a0670() {
   return (neuron0x3496fd0()*0.0526447);
}

double NNfunction_ns_chi04_uR::synapse0x34a06b0() {
   return (neuron0x3497310()*-0.161726);
}

double NNfunction_ns_chi04_uR::synapse0x34a06f0() {
   return (neuron0x3497650()*-0.0282495);
}

double NNfunction_ns_chi04_uR::synapse0x34a0730() {
   return (neuron0x3497990()*-0.596376);
}

double NNfunction_ns_chi04_uR::synapse0x34a0770() {
   return (neuron0x3497cd0()*0.145129);
}

double NNfunction_ns_chi04_uR::synapse0x34a07b0() {
   return (neuron0x3498010()*1.04297);
}

double NNfunction_ns_chi04_uR::synapse0x34a07f0() {
   return (neuron0x3498350()*0.570209);
}

double NNfunction_ns_chi04_uR::synapse0x34a0830() {
   return (neuron0x3498690()*0.345421);
}

double NNfunction_ns_chi04_uR::synapse0x34a0870() {
   return (neuron0x34989d0()*-0.725547);
}

double NNfunction_ns_chi04_uR::synapse0x34a0300() {
   return (neuron0x3498d10()*0.72611);
}

double NNfunction_ns_chi04_uR::synapse0x34a0340() {
   return (neuron0x3499270()*0.455056);
}

double NNfunction_ns_chi04_uR::synapse0x34a09c0() {
   return (neuron0x3499490()*-0.439434);
}

double NNfunction_ns_chi04_uR::synapse0x34a0a00() {
   return (neuron0x34997d0()*-0.125325);
}

double NNfunction_ns_chi04_uR::synapse0x34a0a40() {
   return (neuron0x3499b10()*0.195949);
}

double NNfunction_ns_chi04_uR::synapse0x34a0a80() {
   return (neuron0x3499e50()*-0.317254);
}

double NNfunction_ns_chi04_uR::synapse0x34a0ac0() {
   return (neuron0x349a190()*0.499002);
}

double NNfunction_ns_chi04_uR::synapse0x34a0b00() {
   return (neuron0x349a4d0()*0.91073);
}

double NNfunction_ns_chi04_uR::synapse0x34a0e80() {
   return (neuron0x3495910()*0.0697146);
}

double NNfunction_ns_chi04_uR::synapse0x34a0ec0() {
   return (neuron0x3495c50()*5.35428);
}

double NNfunction_ns_chi04_uR::synapse0x34a0f00() {
   return (neuron0x3495f90()*-3.18462);
}

double NNfunction_ns_chi04_uR::synapse0x34a0f40() {
   return (neuron0x34962d0()*0.0532341);
}

double NNfunction_ns_chi04_uR::synapse0x34a0f80() {
   return (neuron0x3496610()*-0.0733021);
}

double NNfunction_ns_chi04_uR::synapse0x34a0fc0() {
   return (neuron0x3496950()*-0.0492684);
}

double NNfunction_ns_chi04_uR::synapse0x34a1000() {
   return (neuron0x3496c90()*-0.060775);
}

double NNfunction_ns_chi04_uR::synapse0x34a1040() {
   return (neuron0x3496fd0()*-0.0443938);
}

double NNfunction_ns_chi04_uR::synapse0x34a1080() {
   return (neuron0x3497310()*-0.0196019);
}

double NNfunction_ns_chi04_uR::synapse0x34a10c0() {
   return (neuron0x3497650()*-0.0428863);
}

double NNfunction_ns_chi04_uR::synapse0x34a1100() {
   return (neuron0x3497990()*0.0665325);
}

double NNfunction_ns_chi04_uR::synapse0x34a1140() {
   return (neuron0x3497cd0()*0.0169808);
}

double NNfunction_ns_chi04_uR::synapse0x34a1180() {
   return (neuron0x3498010()*-0.0160338);
}

double NNfunction_ns_chi04_uR::synapse0x34a11c0() {
   return (neuron0x3498350()*0.0151165);
}

double NNfunction_ns_chi04_uR::synapse0x34a1200() {
   return (neuron0x3498690()*-0.00768447);
}

double NNfunction_ns_chi04_uR::synapse0x34a1240() {
   return (neuron0x34989d0()*0.0139722);
}

double NNfunction_ns_chi04_uR::synapse0x34a0cd0() {
   return (neuron0x3498d10()*0.0140122);
}

double NNfunction_ns_chi04_uR::synapse0x34a0d10() {
   return (neuron0x3499270()*0.00870864);
}

double NNfunction_ns_chi04_uR::synapse0x349daa0() {
   return (neuron0x3499490()*0.0494417);
}

double NNfunction_ns_chi04_uR::synapse0x349dae0() {
   return (neuron0x34997d0()*0.0598948);
}

double NNfunction_ns_chi04_uR::synapse0x349db20() {
   return (neuron0x3499b10()*0.058827);
}

double NNfunction_ns_chi04_uR::synapse0x349db60() {
   return (neuron0x3499e50()*-0.0184294);
}

double NNfunction_ns_chi04_uR::synapse0x349dba0() {
   return (neuron0x349a190()*-0.0418289);
}

double NNfunction_ns_chi04_uR::synapse0x349dbe0() {
   return (neuron0x349a4d0()*0.495684);
}

double NNfunction_ns_chi04_uR::synapse0x349df60() {
   return (neuron0x3495910()*0.0279556);
}

double NNfunction_ns_chi04_uR::synapse0x349dfa0() {
   return (neuron0x3495c50()*-0.376413);
}

double NNfunction_ns_chi04_uR::synapse0x349dfe0() {
   return (neuron0x3495f90()*0.00653219);
}

double NNfunction_ns_chi04_uR::synapse0x349e020() {
   return (neuron0x34962d0()*-0.0246432);
}

double NNfunction_ns_chi04_uR::synapse0x349e060() {
   return (neuron0x3496610()*0.0372889);
}

double NNfunction_ns_chi04_uR::synapse0x349e0a0() {
   return (neuron0x3496950()*0.0284687);
}

double NNfunction_ns_chi04_uR::synapse0x349e0e0() {
   return (neuron0x3496c90()*0.00101155);
}

double NNfunction_ns_chi04_uR::synapse0x349e120() {
   return (neuron0x3496fd0()*0.0476377);
}

double NNfunction_ns_chi04_uR::synapse0x349e160() {
   return (neuron0x3497310()*-0.0357038);
}

double NNfunction_ns_chi04_uR::synapse0x349e1a0() {
   return (neuron0x3497650()*-0.0292079);
}

double NNfunction_ns_chi04_uR::synapse0x349e1e0() {
   return (neuron0x3497990()*-0.0124241);
}

double NNfunction_ns_chi04_uR::synapse0x349e220() {
   return (neuron0x3497cd0()*-0.0218874);
}

double NNfunction_ns_chi04_uR::synapse0x349e260() {
   return (neuron0x3498010()*-0.0254754);
}

double NNfunction_ns_chi04_uR::synapse0x34a23a0() {
   return (neuron0x3498350()*0.026528);
}

double NNfunction_ns_chi04_uR::synapse0x34a23e0() {
   return (neuron0x3498690()*0.110586);
}

double NNfunction_ns_chi04_uR::synapse0x34a2420() {
   return (neuron0x34989d0()*-0.00038079);
}

double NNfunction_ns_chi04_uR::synapse0x349ddb0() {
   return (neuron0x3498d10()*0.0219574);
}

double NNfunction_ns_chi04_uR::synapse0x349ddf0() {
   return (neuron0x3499270()*-0.0314918);
}

double NNfunction_ns_chi04_uR::synapse0x34a2570() {
   return (neuron0x3499490()*-0.0221882);
}

double NNfunction_ns_chi04_uR::synapse0x34a25b0() {
   return (neuron0x34997d0()*-0.0344824);
}

double NNfunction_ns_chi04_uR::synapse0x34a25f0() {
   return (neuron0x3499b10()*-0.00159041);
}

double NNfunction_ns_chi04_uR::synapse0x34a2630() {
   return (neuron0x3499e50()*-0.0172451);
}

double NNfunction_ns_chi04_uR::synapse0x34a2670() {
   return (neuron0x349a190()*-0.0118935);
}

double NNfunction_ns_chi04_uR::synapse0x34a26b0() {
   return (neuron0x349a4d0()*-0.37303);
}

double NNfunction_ns_chi04_uR::synapse0x34a2a30() {
   return (neuron0x3495910()*0.095921);
}

double NNfunction_ns_chi04_uR::synapse0x34a2a70() {
   return (neuron0x3495c50()*2.33596);
}

double NNfunction_ns_chi04_uR::synapse0x34a2ab0() {
   return (neuron0x3495f90()*-4.34991);
}

double NNfunction_ns_chi04_uR::synapse0x34a2af0() {
   return (neuron0x34962d0()*0.124011);
}

double NNfunction_ns_chi04_uR::synapse0x34a2b30() {
   return (neuron0x3496610()*0.0203502);
}

double NNfunction_ns_chi04_uR::synapse0x34a2b70() {
   return (neuron0x3496950()*0.0269788);
}

double NNfunction_ns_chi04_uR::synapse0x34a2bb0() {
   return (neuron0x3496c90()*-0.0416126);
}

double NNfunction_ns_chi04_uR::synapse0x34a2bf0() {
   return (neuron0x3496fd0()*0.0418311);
}

double NNfunction_ns_chi04_uR::synapse0x34a2c30() {
   return (neuron0x3497310()*-0.00102047);
}

double NNfunction_ns_chi04_uR::synapse0x34a2c70() {
   return (neuron0x3497650()*0.0797523);
}

double NNfunction_ns_chi04_uR::synapse0x34a2cb0() {
   return (neuron0x3497990()*-0.102139);
}

double NNfunction_ns_chi04_uR::synapse0x34a2cf0() {
   return (neuron0x3497cd0()*0.127948);
}

double NNfunction_ns_chi04_uR::synapse0x34a2d30() {
   return (neuron0x3498010()*0.263954);
}

double NNfunction_ns_chi04_uR::synapse0x34a2d70() {
   return (neuron0x3498350()*-0.0465964);
}

double NNfunction_ns_chi04_uR::synapse0x34a2db0() {
   return (neuron0x3498690()*-0.567904);
}

double NNfunction_ns_chi04_uR::synapse0x34a2df0() {
   return (neuron0x34989d0()*0.199996);
}

double NNfunction_ns_chi04_uR::synapse0x34a2880() {
   return (neuron0x3498d10()*-0.147414);
}

double NNfunction_ns_chi04_uR::synapse0x34a28c0() {
   return (neuron0x3499270()*-0.0408612);
}

double NNfunction_ns_chi04_uR::synapse0x34a2f40() {
   return (neuron0x3499490()*-0.0476157);
}

double NNfunction_ns_chi04_uR::synapse0x34a2f80() {
   return (neuron0x34997d0()*0.0929109);
}

double NNfunction_ns_chi04_uR::synapse0x34a2fc0() {
   return (neuron0x3499b10()*-0.164376);
}

double NNfunction_ns_chi04_uR::synapse0x34a3000() {
   return (neuron0x3499e50()*0.122393);
}

double NNfunction_ns_chi04_uR::synapse0x34a3040() {
   return (neuron0x349a190()*0.0729438);
}

double NNfunction_ns_chi04_uR::synapse0x34a3080() {
   return (neuron0x349a4d0()*-1.39708);
}

double NNfunction_ns_chi04_uR::synapse0x34a3400() {
   return (neuron0x3495910()*-0.23309);
}

double NNfunction_ns_chi04_uR::synapse0x34a3440() {
   return (neuron0x3495c50()*0.81293);
}

double NNfunction_ns_chi04_uR::synapse0x34a3480() {
   return (neuron0x3495f90()*0.11751);
}

double NNfunction_ns_chi04_uR::synapse0x34a34c0() {
   return (neuron0x34962d0()*-1.42831);
}

double NNfunction_ns_chi04_uR::synapse0x34a3500() {
   return (neuron0x3496610()*-0.367392);
}

double NNfunction_ns_chi04_uR::synapse0x34a3540() {
   return (neuron0x3496950()*0.0762043);
}

double NNfunction_ns_chi04_uR::synapse0x34a3580() {
   return (neuron0x3496c90()*-0.0388492);
}

double NNfunction_ns_chi04_uR::synapse0x34a35c0() {
   return (neuron0x3496fd0()*0.00231346);
}

double NNfunction_ns_chi04_uR::synapse0x34a3600() {
   return (neuron0x3497310()*0.166134);
}

double NNfunction_ns_chi04_uR::synapse0x34a3640() {
   return (neuron0x3497650()*-0.212143);
}

double NNfunction_ns_chi04_uR::synapse0x34a3680() {
   return (neuron0x3497990()*0.271397);
}

double NNfunction_ns_chi04_uR::synapse0x34a36c0() {
   return (neuron0x3497cd0()*0.545061);
}

double NNfunction_ns_chi04_uR::synapse0x34a3700() {
   return (neuron0x3498010()*0.0215255);
}

double NNfunction_ns_chi04_uR::synapse0x34a3740() {
   return (neuron0x3498350()*-0.286894);
}

double NNfunction_ns_chi04_uR::synapse0x34a3780() {
   return (neuron0x3498690()*-0.147843);
}

double NNfunction_ns_chi04_uR::synapse0x34a37c0() {
   return (neuron0x34989d0()*-0.00383264);
}

double NNfunction_ns_chi04_uR::synapse0x34a3250() {
   return (neuron0x3498d10()*-0.345058);
}

double NNfunction_ns_chi04_uR::synapse0x34a3290() {
   return (neuron0x3499270()*0.103857);
}

double NNfunction_ns_chi04_uR::synapse0x34a3910() {
   return (neuron0x3499490()*0.0826465);
}

double NNfunction_ns_chi04_uR::synapse0x34a3950() {
   return (neuron0x34997d0()*0.448207);
}

double NNfunction_ns_chi04_uR::synapse0x34a3990() {
   return (neuron0x3499b10()*-0.0926553);
}

double NNfunction_ns_chi04_uR::synapse0x34a39d0() {
   return (neuron0x3499e50()*0.117087);
}

double NNfunction_ns_chi04_uR::synapse0x34a3a10() {
   return (neuron0x349a190()*-0.0485847);
}

double NNfunction_ns_chi04_uR::synapse0x34a3a50() {
   return (neuron0x349a4d0()*0.20206);
}

double NNfunction_ns_chi04_uR::synapse0x34a3dd0() {
   return (neuron0x3495910()*0.218116);
}

double NNfunction_ns_chi04_uR::synapse0x34a3e10() {
   return (neuron0x3495c50()*-0.887913);
}

double NNfunction_ns_chi04_uR::synapse0x34a3e50() {
   return (neuron0x3495f90()*1.01799);
}

double NNfunction_ns_chi04_uR::synapse0x34a3e90() {
   return (neuron0x34962d0()*-0.261399);
}

double NNfunction_ns_chi04_uR::synapse0x34a3ed0() {
   return (neuron0x3496610()*0.521586);
}

double NNfunction_ns_chi04_uR::synapse0x34a3f10() {
   return (neuron0x3496950()*-0.255602);
}

double NNfunction_ns_chi04_uR::synapse0x34a3f50() {
   return (neuron0x3496c90()*-0.112125);
}

double NNfunction_ns_chi04_uR::synapse0x34a3f90() {
   return (neuron0x3496fd0()*-0.143563);
}

double NNfunction_ns_chi04_uR::synapse0x34a3fd0() {
   return (neuron0x3497310()*0.120068);
}

double NNfunction_ns_chi04_uR::synapse0x34a4010() {
   return (neuron0x3497650()*0.502975);
}

double NNfunction_ns_chi04_uR::synapse0x34a4050() {
   return (neuron0x3497990()*0.550701);
}

double NNfunction_ns_chi04_uR::synapse0x34a4090() {
   return (neuron0x3497cd0()*0.295862);
}

double NNfunction_ns_chi04_uR::synapse0x34a40d0() {
   return (neuron0x3498010()*-0.669575);
}

double NNfunction_ns_chi04_uR::synapse0x34a4110() {
   return (neuron0x3498350()*-0.219055);
}

double NNfunction_ns_chi04_uR::synapse0x34a4150() {
   return (neuron0x3498690()*-0.128712);
}

double NNfunction_ns_chi04_uR::synapse0x34a4190() {
   return (neuron0x34989d0()*-0.342774);
}

double NNfunction_ns_chi04_uR::synapse0x34a3c20() {
   return (neuron0x3498d10()*-0.0405333);
}

double NNfunction_ns_chi04_uR::synapse0x34a3c60() {
   return (neuron0x3499270()*-0.153525);
}

double NNfunction_ns_chi04_uR::synapse0x34a42e0() {
   return (neuron0x3499490()*0.297946);
}

double NNfunction_ns_chi04_uR::synapse0x34a4320() {
   return (neuron0x34997d0()*-0.0136966);
}

double NNfunction_ns_chi04_uR::synapse0x34a4360() {
   return (neuron0x3499b10()*0.0798245);
}

double NNfunction_ns_chi04_uR::synapse0x34a43a0() {
   return (neuron0x3499e50()*0.167358);
}

double NNfunction_ns_chi04_uR::synapse0x34a43e0() {
   return (neuron0x349a190()*-0.21679);
}

double NNfunction_ns_chi04_uR::synapse0x34a4420() {
   return (neuron0x349a4d0()*0.179683);
}

double NNfunction_ns_chi04_uR::synapse0x34a47a0() {
   return (neuron0x3495910()*-0.79215);
}

double NNfunction_ns_chi04_uR::synapse0x3495b30() {
   return (neuron0x3495c50()*-0.0153803);
}

double NNfunction_ns_chi04_uR::synapse0x3495b70() {
   return (neuron0x3495f90()*-0.0145945);
}

double NNfunction_ns_chi04_uR::synapse0x3495e70() {
   return (neuron0x34962d0()*0.482677);
}

double NNfunction_ns_chi04_uR::synapse0x3495eb0() {
   return (neuron0x3496610()*0.139107);
}

double NNfunction_ns_chi04_uR::synapse0x34961b0() {
   return (neuron0x3496950()*-0.30358);
}

double NNfunction_ns_chi04_uR::synapse0x34961f0() {
   return (neuron0x3496c90()*0.518735);
}

double NNfunction_ns_chi04_uR::synapse0x34964f0() {
   return (neuron0x3496fd0()*0.243347);
}

double NNfunction_ns_chi04_uR::synapse0x3496530() {
   return (neuron0x3497310()*-0.632945);
}

double NNfunction_ns_chi04_uR::synapse0x3496830() {
   return (neuron0x3497650()*-0.216019);
}

double NNfunction_ns_chi04_uR::synapse0x3496870() {
   return (neuron0x3497990()*0.198746);
}

double NNfunction_ns_chi04_uR::synapse0x3496b70() {
   return (neuron0x3497cd0()*0.606079);
}

double NNfunction_ns_chi04_uR::synapse0x3496bb0() {
   return (neuron0x3498010()*0.205137);
}

double NNfunction_ns_chi04_uR::synapse0x3496eb0() {
   return (neuron0x3498350()*0.207156);
}

double NNfunction_ns_chi04_uR::synapse0x3496ef0() {
   return (neuron0x3498690()*0.918347);
}

double NNfunction_ns_chi04_uR::synapse0x34971f0() {
   return (neuron0x34989d0()*-0.242546);
}

double NNfunction_ns_chi04_uR::synapse0x3497230() {
   return (neuron0x3498d10()*0.276972);
}

double NNfunction_ns_chi04_uR::synapse0x3497530() {
   return (neuron0x3499270()*-0.529954);
}

double NNfunction_ns_chi04_uR::synapse0x3497570() {
   return (neuron0x3499490()*-0.0849227);
}

double NNfunction_ns_chi04_uR::synapse0x3497870() {
   return (neuron0x34997d0()*0.193974);
}

double NNfunction_ns_chi04_uR::synapse0x34978b0() {
   return (neuron0x3499b10()*0.270956);
}

double NNfunction_ns_chi04_uR::synapse0x3497bb0() {
   return (neuron0x3499e50()*-0.146004);
}

double NNfunction_ns_chi04_uR::synapse0x3497bf0() {
   return (neuron0x349a190()*-0.430861);
}

double NNfunction_ns_chi04_uR::synapse0x3497ef0() {
   return (neuron0x349a4d0()*0.426609);
}

double NNfunction_ns_chi04_uR::synapse0x3497f30() {
   return (neuron0x3495910()*-0.00526229);
}

double NNfunction_ns_chi04_uR::synapse0x3498bf0() {
   return (neuron0x3495c50()*-0.0356111);
}

double NNfunction_ns_chi04_uR::synapse0x3498c30() {
   return (neuron0x3495f90()*-0.0265276);
}

double NNfunction_ns_chi04_uR::synapse0x34a45f0() {
   return (neuron0x34962d0()*2.32392);
}

double NNfunction_ns_chi04_uR::synapse0x34a4630() {
   return (neuron0x3496610()*0.00856519);
}

double NNfunction_ns_chi04_uR::synapse0x3498f30() {
   return (neuron0x3496950()*-0.00304045);
}

double NNfunction_ns_chi04_uR::synapse0x3498f70() {
   return (neuron0x3496c90()*0.0328534);
}

double NNfunction_ns_chi04_uR::synapse0x3250990() {
   return (neuron0x3496fd0()*-0.00173302);
}

double NNfunction_ns_chi04_uR::synapse0x32509d0() {
   return (neuron0x3497310()*0.000655786);
}

double NNfunction_ns_chi04_uR::synapse0x34996b0() {
   return (neuron0x3497650()*-0.000362149);
}

double NNfunction_ns_chi04_uR::synapse0x34996f0() {
   return (neuron0x3497990()*0.00702579);
}

double NNfunction_ns_chi04_uR::synapse0x34999f0() {
   return (neuron0x3497cd0()*-0.0238185);
}

double NNfunction_ns_chi04_uR::synapse0x3499a30() {
   return (neuron0x3498010()*-0.0226557);
}

double NNfunction_ns_chi04_uR::synapse0x3499d30() {
   return (neuron0x3498350()*-0.0135022);
}

double NNfunction_ns_chi04_uR::synapse0x3499d70() {
   return (neuron0x3498690()*-0.291492);
}

double NNfunction_ns_chi04_uR::synapse0x349a070() {
   return (neuron0x34989d0()*-0.011637);
}

double NNfunction_ns_chi04_uR::synapse0x349a0b0() {
   return (neuron0x3498d10()*-0.0131773);
}

double NNfunction_ns_chi04_uR::synapse0x349a3b0() {
   return (neuron0x3499270()*0.00543572);
}

double NNfunction_ns_chi04_uR::synapse0x349a3f0() {
   return (neuron0x3499490()*0.0235843);
}

double NNfunction_ns_chi04_uR::synapse0x349a6f0() {
   return (neuron0x34997d0()*0.0232787);
}

double NNfunction_ns_chi04_uR::synapse0x349a730() {
   return (neuron0x3499b10()*0.00835936);
}

double NNfunction_ns_chi04_uR::synapse0x3498230() {
   return (neuron0x3499e50()*-0.0199069);
}

double NNfunction_ns_chi04_uR::synapse0x3498270() {
   return (neuron0x349a190()*-0.0135425);
}

double NNfunction_ns_chi04_uR::synapse0x34a6510() {
   return (neuron0x349a4d0()*0.0238166);
}

double NNfunction_ns_chi04_uR::synapse0x34a6890() {
   return (neuron0x3495910()*0.51114);
}

double NNfunction_ns_chi04_uR::synapse0x34a68d0() {
   return (neuron0x3495c50()*0.316481);
}

double NNfunction_ns_chi04_uR::synapse0x34a6910() {
   return (neuron0x3495f90()*-0.249167);
}

double NNfunction_ns_chi04_uR::synapse0x34a6950() {
   return (neuron0x34962d0()*-1.18169);
}

double NNfunction_ns_chi04_uR::synapse0x34a6990() {
   return (neuron0x3496610()*-0.271782);
}

double NNfunction_ns_chi04_uR::synapse0x34a69d0() {
   return (neuron0x3496950()*-0.0791463);
}

double NNfunction_ns_chi04_uR::synapse0x34a6a10() {
   return (neuron0x3496c90()*-0.30215);
}

double NNfunction_ns_chi04_uR::synapse0x34a6a50() {
   return (neuron0x3496fd0()*-0.424041);
}

double NNfunction_ns_chi04_uR::synapse0x34a6a90() {
   return (neuron0x3497310()*-0.596599);
}

double NNfunction_ns_chi04_uR::synapse0x34a6ad0() {
   return (neuron0x3497650()*-0.550674);
}

double NNfunction_ns_chi04_uR::synapse0x34a6b10() {
   return (neuron0x3497990()*1.05404);
}

double NNfunction_ns_chi04_uR::synapse0x34a6b50() {
   return (neuron0x3497cd0()*-0.279482);
}

double NNfunction_ns_chi04_uR::synapse0x34a6b90() {
   return (neuron0x3498010()*-0.672088);
}

double NNfunction_ns_chi04_uR::synapse0x34a6bd0() {
   return (neuron0x3498350()*1.2749);
}

double NNfunction_ns_chi04_uR::synapse0x34a6c10() {
   return (neuron0x3498690()*-1.73839);
}

double NNfunction_ns_chi04_uR::synapse0x34a6c50() {
   return (neuron0x34989d0()*-0.990683);
}

double NNfunction_ns_chi04_uR::synapse0x34a66e0() {
   return (neuron0x3498d10()*1.29141);
}

double NNfunction_ns_chi04_uR::synapse0x34a6720() {
   return (neuron0x3499270()*1.62082);
}

double NNfunction_ns_chi04_uR::synapse0x34a6da0() {
   return (neuron0x3499490()*-0.652468);
}

double NNfunction_ns_chi04_uR::synapse0x34a6de0() {
   return (neuron0x34997d0()*0.321835);
}

double NNfunction_ns_chi04_uR::synapse0x34a6e20() {
   return (neuron0x3499b10()*0.388858);
}

double NNfunction_ns_chi04_uR::synapse0x34a6e60() {
   return (neuron0x3499e50()*0.0325458);
}

double NNfunction_ns_chi04_uR::synapse0x34a6ea0() {
   return (neuron0x349a190()*-1.13526);
}

double NNfunction_ns_chi04_uR::synapse0x34a6ee0() {
   return (neuron0x349a4d0()*-0.0478328);
}

double NNfunction_ns_chi04_uR::synapse0x34a7260() {
   return (neuron0x3495910()*0.0134175);
}

double NNfunction_ns_chi04_uR::synapse0x34a72a0() {
   return (neuron0x3495c50()*-0.0393478);
}

double NNfunction_ns_chi04_uR::synapse0x34a72e0() {
   return (neuron0x3495f90()*-0.0189133);
}

double NNfunction_ns_chi04_uR::synapse0x34a7320() {
   return (neuron0x34962d0()*-2.27652);
}

double NNfunction_ns_chi04_uR::synapse0x34a7360() {
   return (neuron0x3496610()*-0.0280668);
}

double NNfunction_ns_chi04_uR::synapse0x34a73a0() {
   return (neuron0x3496950()*0.00217049);
}

double NNfunction_ns_chi04_uR::synapse0x34a73e0() {
   return (neuron0x3496c90()*-0.0400319);
}

double NNfunction_ns_chi04_uR::synapse0x34a7420() {
   return (neuron0x3496fd0()*0.00682242);
}

double NNfunction_ns_chi04_uR::synapse0x34a7460() {
   return (neuron0x3497310()*0.00626682);
}

double NNfunction_ns_chi04_uR::synapse0x34a74a0() {
   return (neuron0x3497650()*-0.00277769);
}

double NNfunction_ns_chi04_uR::synapse0x34a74e0() {
   return (neuron0x3497990()*0.0122916);
}

double NNfunction_ns_chi04_uR::synapse0x34a7520() {
   return (neuron0x3497cd0()*0.0154926);
}

double NNfunction_ns_chi04_uR::synapse0x34a7560() {
   return (neuron0x3498010()*0.0253853);
}

double NNfunction_ns_chi04_uR::synapse0x34a75a0() {
   return (neuron0x3498350()*-0.0156259);
}

double NNfunction_ns_chi04_uR::synapse0x34a75e0() {
   return (neuron0x3498690()*-0.238651);
}

double NNfunction_ns_chi04_uR::synapse0x34a7620() {
   return (neuron0x34989d0()*0.0218762);
}

double NNfunction_ns_chi04_uR::synapse0x34a70b0() {
   return (neuron0x3498d10()*-0.0128876);
}

double NNfunction_ns_chi04_uR::synapse0x34a70f0() {
   return (neuron0x3499270()*0.00842736);
}

double NNfunction_ns_chi04_uR::synapse0x34a7770() {
   return (neuron0x3499490()*-0.00529606);
}

double NNfunction_ns_chi04_uR::synapse0x34a77b0() {
   return (neuron0x34997d0()*-0.00585097);
}

double NNfunction_ns_chi04_uR::synapse0x34a77f0() {
   return (neuron0x3499b10()*-0.0113186);
}

double NNfunction_ns_chi04_uR::synapse0x34a7830() {
   return (neuron0x3499e50()*0.00982167);
}

double NNfunction_ns_chi04_uR::synapse0x34a7870() {
   return (neuron0x349a190()*0.00643589);
}

double NNfunction_ns_chi04_uR::synapse0x34a78b0() {
   return (neuron0x349a4d0()*-0.0379359);
}

double NNfunction_ns_chi04_uR::synapse0x34a7c30() {
   return (neuron0x3495910()*0.000814914);
}

double NNfunction_ns_chi04_uR::synapse0x34a7c70() {
   return (neuron0x3495c50()*0.567126);
}

double NNfunction_ns_chi04_uR::synapse0x34a7cb0() {
   return (neuron0x3495f90()*-0.0311785);
}

double NNfunction_ns_chi04_uR::synapse0x34a7cf0() {
   return (neuron0x34962d0()*-0.00180592);
}

double NNfunction_ns_chi04_uR::synapse0x34a7d30() {
   return (neuron0x3496610()*-0.022426);
}

double NNfunction_ns_chi04_uR::synapse0x34a7d70() {
   return (neuron0x3496950()*0.00139172);
}

double NNfunction_ns_chi04_uR::synapse0x34a7db0() {
   return (neuron0x3496c90()*-0.00834144);
}

double NNfunction_ns_chi04_uR::synapse0x34a7df0() {
   return (neuron0x3496fd0()*-0.00937462);
}

double NNfunction_ns_chi04_uR::synapse0x34a7e30() {
   return (neuron0x3497310()*0.00958011);
}

double NNfunction_ns_chi04_uR::synapse0x34a7e70() {
   return (neuron0x3497650()*0.004041);
}

double NNfunction_ns_chi04_uR::synapse0x34a7eb0() {
   return (neuron0x3497990()*-0.00100842);
}

double NNfunction_ns_chi04_uR::synapse0x34a7ef0() {
   return (neuron0x3497cd0()*0.0251653);
}

double NNfunction_ns_chi04_uR::synapse0x34a7f30() {
   return (neuron0x3498010()*0.0122578);
}

double NNfunction_ns_chi04_uR::synapse0x34a7f70() {
   return (neuron0x3498350()*-0.00366166);
}

double NNfunction_ns_chi04_uR::synapse0x34a7fb0() {
   return (neuron0x3498690()*0.11059);
}

double NNfunction_ns_chi04_uR::synapse0x34a7ff0() {
   return (neuron0x34989d0()*-0.0200233);
}

double NNfunction_ns_chi04_uR::synapse0x34a7a80() {
   return (neuron0x3498d10()*-0.006508);
}

double NNfunction_ns_chi04_uR::synapse0x34a7ac0() {
   return (neuron0x3499270()*0.0132244);
}

double NNfunction_ns_chi04_uR::synapse0x34a8140() {
   return (neuron0x3499490()*0.00290537);
}

double NNfunction_ns_chi04_uR::synapse0x34a8180() {
   return (neuron0x34997d0()*0.0135349);
}

double NNfunction_ns_chi04_uR::synapse0x34a81c0() {
   return (neuron0x3499b10()*-0.00241121);
}

double NNfunction_ns_chi04_uR::synapse0x34a8200() {
   return (neuron0x3499e50()*0.00393663);
}

double NNfunction_ns_chi04_uR::synapse0x34a8240() {
   return (neuron0x349a190()*-0.00332124);
}

double NNfunction_ns_chi04_uR::synapse0x34a8280() {
   return (neuron0x349a4d0()*0.539316);
}

double NNfunction_ns_chi04_uR::synapse0x34a8600() {
   return (neuron0x3495910()*0.0930505);
}

double NNfunction_ns_chi04_uR::synapse0x34a8640() {
   return (neuron0x3495c50()*-0.0653491);
}

double NNfunction_ns_chi04_uR::synapse0x34a8680() {
   return (neuron0x3495f90()*0.319007);
}

double NNfunction_ns_chi04_uR::synapse0x34a86c0() {
   return (neuron0x34962d0()*1.17795);
}

double NNfunction_ns_chi04_uR::synapse0x34a8700() {
   return (neuron0x3496610()*0.355843);
}

double NNfunction_ns_chi04_uR::synapse0x34a8740() {
   return (neuron0x3496950()*-0.204957);
}

double NNfunction_ns_chi04_uR::synapse0x34a8780() {
   return (neuron0x3496c90()*-0.00360782);
}

double NNfunction_ns_chi04_uR::synapse0x34a87c0() {
   return (neuron0x3496fd0()*-0.0827879);
}

double NNfunction_ns_chi04_uR::synapse0x34a8800() {
   return (neuron0x3497310()*-0.00582456);
}

double NNfunction_ns_chi04_uR::synapse0x34a8840() {
   return (neuron0x3497650()*0.269023);
}

double NNfunction_ns_chi04_uR::synapse0x34a8880() {
   return (neuron0x3497990()*0.166891);
}

double NNfunction_ns_chi04_uR::synapse0x34a88c0() {
   return (neuron0x3497cd0()*-0.601872);
}

double NNfunction_ns_chi04_uR::synapse0x34a8900() {
   return (neuron0x3498010()*-0.327143);
}

double NNfunction_ns_chi04_uR::synapse0x34a8940() {
   return (neuron0x3498350()*0.178131);
}

double NNfunction_ns_chi04_uR::synapse0x34a8980() {
   return (neuron0x3498690()*0.347935);
}

double NNfunction_ns_chi04_uR::synapse0x34a89c0() {
   return (neuron0x34989d0()*-0.0316239);
}

double NNfunction_ns_chi04_uR::synapse0x34a8450() {
   return (neuron0x3498d10()*0.0564514);
}

double NNfunction_ns_chi04_uR::synapse0x34a8490() {
   return (neuron0x3499270()*-0.148583);
}

double NNfunction_ns_chi04_uR::synapse0x34a8b10() {
   return (neuron0x3499490()*0.158846);
}

double NNfunction_ns_chi04_uR::synapse0x34a8b50() {
   return (neuron0x34997d0()*-0.75353);
}

double NNfunction_ns_chi04_uR::synapse0x34a8b90() {
   return (neuron0x3499b10()*-0.11857);
}

double NNfunction_ns_chi04_uR::synapse0x34a8bd0() {
   return (neuron0x3499e50()*0.161257);
}

double NNfunction_ns_chi04_uR::synapse0x34a8c10() {
   return (neuron0x349a190()*0.229939);
}

double NNfunction_ns_chi04_uR::synapse0x34a8c50() {
   return (neuron0x349a4d0()*-0.0176408);
}

double NNfunction_ns_chi04_uR::synapse0x34a8fd0() {
   return (neuron0x3495910()*-0.0115178);
}

double NNfunction_ns_chi04_uR::synapse0x34a9010() {
   return (neuron0x3495c50()*0.0394875);
}

double NNfunction_ns_chi04_uR::synapse0x34a9050() {
   return (neuron0x3495f90()*2.47661);
}

double NNfunction_ns_chi04_uR::synapse0x34a9090() {
   return (neuron0x34962d0()*0.0481163);
}

double NNfunction_ns_chi04_uR::synapse0x34a90d0() {
   return (neuron0x3496610()*-0.136668);
}

double NNfunction_ns_chi04_uR::synapse0x34a9110() {
   return (neuron0x3496950()*0.0682824);
}

double NNfunction_ns_chi04_uR::synapse0x34a9150() {
   return (neuron0x3496c90()*0.173104);
}

double NNfunction_ns_chi04_uR::synapse0x34a9190() {
   return (neuron0x3496fd0()*0.0572076);
}

double NNfunction_ns_chi04_uR::synapse0x34a91d0() {
   return (neuron0x3497310()*0.111795);
}

double NNfunction_ns_chi04_uR::synapse0x34a1390() {
   return (neuron0x3497650()*-0.0830572);
}

double NNfunction_ns_chi04_uR::synapse0x34a13d0() {
   return (neuron0x3497990()*0.0646915);
}

double NNfunction_ns_chi04_uR::synapse0x34a1410() {
   return (neuron0x3497cd0()*0.0785475);
}

double NNfunction_ns_chi04_uR::synapse0x34a1450() {
   return (neuron0x3498010()*0.0715931);
}

double NNfunction_ns_chi04_uR::synapse0x34a1490() {
   return (neuron0x3498350()*0.00868348);
}

double NNfunction_ns_chi04_uR::synapse0x34a14d0() {
   return (neuron0x3498690()*-0.571884);
}

double NNfunction_ns_chi04_uR::synapse0x34a1510() {
   return (neuron0x34989d0()*-0.0898962);
}

double NNfunction_ns_chi04_uR::synapse0x34a8e20() {
   return (neuron0x3498d10()*-0.0900529);
}

double NNfunction_ns_chi04_uR::synapse0x34a8e60() {
   return (neuron0x3499270()*0.0827705);
}

double NNfunction_ns_chi04_uR::synapse0x34a1660() {
   return (neuron0x3499490()*-0.0818929);
}

double NNfunction_ns_chi04_uR::synapse0x34a16a0() {
   return (neuron0x34997d0()*0.0156563);
}

double NNfunction_ns_chi04_uR::synapse0x34a16e0() {
   return (neuron0x3499b10()*0.0332737);
}

double NNfunction_ns_chi04_uR::synapse0x34a1720() {
   return (neuron0x3499e50()*-0.000127228);
}

double NNfunction_ns_chi04_uR::synapse0x34a1760() {
   return (neuron0x349a190()*-0.0627792);
}

double NNfunction_ns_chi04_uR::synapse0x34a17a0() {
   return (neuron0x349a4d0()*-0.938336);
}

double NNfunction_ns_chi04_uR::synapse0x34a1b20() {
   return (neuron0x3495910()*0.300883);
}

double NNfunction_ns_chi04_uR::synapse0x34a1b60() {
   return (neuron0x3495c50()*0.591847);
}

double NNfunction_ns_chi04_uR::synapse0x34a1ba0() {
   return (neuron0x3495f90()*-1.3681);
}

double NNfunction_ns_chi04_uR::synapse0x34a1be0() {
   return (neuron0x34962d0()*-0.672848);
}

double NNfunction_ns_chi04_uR::synapse0x34a1c20() {
   return (neuron0x3496610()*1.05751);
}

double NNfunction_ns_chi04_uR::synapse0x34a1c60() {
   return (neuron0x3496950()*-0.153839);
}

double NNfunction_ns_chi04_uR::synapse0x34a1ca0() {
   return (neuron0x3496c90()*-0.519577);
}

double NNfunction_ns_chi04_uR::synapse0x34a1ce0() {
   return (neuron0x3496fd0()*0.0812535);
}

double NNfunction_ns_chi04_uR::synapse0x34a1d20() {
   return (neuron0x3497310()*0.523257);
}

double NNfunction_ns_chi04_uR::synapse0x34a1d60() {
   return (neuron0x3497650()*0.0443089);
}

double NNfunction_ns_chi04_uR::synapse0x34a1da0() {
   return (neuron0x3497990()*0.307848);
}

double NNfunction_ns_chi04_uR::synapse0x34a1de0() {
   return (neuron0x3497cd0()*-0.420814);
}

double NNfunction_ns_chi04_uR::synapse0x34a1e20() {
   return (neuron0x3498010()*0.871652);
}

double NNfunction_ns_chi04_uR::synapse0x34a1e60() {
   return (neuron0x3498350()*-0.458256);
}

double NNfunction_ns_chi04_uR::synapse0x34a1ea0() {
   return (neuron0x3498690()*-1.21583);
}

double NNfunction_ns_chi04_uR::synapse0x34a1ee0() {
   return (neuron0x34989d0()*0.578537);
}

double NNfunction_ns_chi04_uR::synapse0x34a1970() {
   return (neuron0x3498d10()*0.20522);
}

double NNfunction_ns_chi04_uR::synapse0x34a19b0() {
   return (neuron0x3499270()*-1.09105);
}

double NNfunction_ns_chi04_uR::synapse0x34a2030() {
   return (neuron0x3499490()*0.367278);
}

double NNfunction_ns_chi04_uR::synapse0x34a2070() {
   return (neuron0x34997d0()*0.569699);
}

double NNfunction_ns_chi04_uR::synapse0x34a20b0() {
   return (neuron0x3499b10()*-0.72693);
}

double NNfunction_ns_chi04_uR::synapse0x34a20f0() {
   return (neuron0x3499e50()*0.0706411);
}

double NNfunction_ns_chi04_uR::synapse0x34a2130() {
   return (neuron0x349a190()*0.282263);
}

double NNfunction_ns_chi04_uR::synapse0x34a2170() {
   return (neuron0x349a4d0()*-0.103704);
}

double NNfunction_ns_chi04_uR::synapse0x34a2340() {
   return (neuron0x3495910()*0.099736);
}

double NNfunction_ns_chi04_uR::synapse0x34ab3d0() {
   return (neuron0x3495c50()*3.75101);
}

double NNfunction_ns_chi04_uR::synapse0x34ab410() {
   return (neuron0x3495f90()*-0.353474);
}

double NNfunction_ns_chi04_uR::synapse0x34ab450() {
   return (neuron0x34962d0()*-0.181787);
}

double NNfunction_ns_chi04_uR::synapse0x34ab490() {
   return (neuron0x3496610()*0.00832152);
}

double NNfunction_ns_chi04_uR::synapse0x34ab4d0() {
   return (neuron0x3496950()*-0.495111);
}

double NNfunction_ns_chi04_uR::synapse0x34ab510() {
   return (neuron0x3496c90()*-0.539305);
}

double NNfunction_ns_chi04_uR::synapse0x34ab550() {
   return (neuron0x3496fd0()*0.0041753);
}

double NNfunction_ns_chi04_uR::synapse0x34ab590() {
   return (neuron0x3497310()*-0.00447711);
}

double NNfunction_ns_chi04_uR::synapse0x34ab5d0() {
   return (neuron0x3497650()*-0.283606);
}

double NNfunction_ns_chi04_uR::synapse0x34ab610() {
   return (neuron0x3497990()*0.124239);
}

double NNfunction_ns_chi04_uR::synapse0x34ab650() {
   return (neuron0x3497cd0()*-0.124389);
}

double NNfunction_ns_chi04_uR::synapse0x34ab690() {
   return (neuron0x3498010()*0.0805217);
}

double NNfunction_ns_chi04_uR::synapse0x34ab6d0() {
   return (neuron0x3498350()*0.147882);
}

double NNfunction_ns_chi04_uR::synapse0x34ab710() {
   return (neuron0x3498690()*3.01362);
}

double NNfunction_ns_chi04_uR::synapse0x34ab750() {
   return (neuron0x34989d0()*-0.0722748);
}

double NNfunction_ns_chi04_uR::synapse0x34ab220() {
   return (neuron0x3498d10()*0.00165537);
}

double NNfunction_ns_chi04_uR::synapse0x34ab260() {
   return (neuron0x3499270()*-0.41249);
}

double NNfunction_ns_chi04_uR::synapse0x34ab8a0() {
   return (neuron0x3499490()*-0.126138);
}

double NNfunction_ns_chi04_uR::synapse0x34ab8e0() {
   return (neuron0x34997d0()*0.220291);
}

double NNfunction_ns_chi04_uR::synapse0x34ab920() {
   return (neuron0x3499b10()*-0.0997559);
}

double NNfunction_ns_chi04_uR::synapse0x34ab960() {
   return (neuron0x3499e50()*-0.0945658);
}

double NNfunction_ns_chi04_uR::synapse0x34ab9a0() {
   return (neuron0x349a190()*-0.0129854);
}

double NNfunction_ns_chi04_uR::synapse0x34ab9e0() {
   return (neuron0x349a4d0()*0.176614);
}

double NNfunction_ns_chi04_uR::synapse0x34abd60() {
   return (neuron0x3495910()*0.014208);
}

double NNfunction_ns_chi04_uR::synapse0x34abda0() {
   return (neuron0x3495c50()*1.96394);
}

double NNfunction_ns_chi04_uR::synapse0x34abde0() {
   return (neuron0x3495f90()*0.111038);
}

double NNfunction_ns_chi04_uR::synapse0x34abe20() {
   return (neuron0x34962d0()*-0.0257343);
}

double NNfunction_ns_chi04_uR::synapse0x34abe60() {
   return (neuron0x3496610()*-0.00124378);
}

double NNfunction_ns_chi04_uR::synapse0x34abea0() {
   return (neuron0x3496950()*-0.000778242);
}

double NNfunction_ns_chi04_uR::synapse0x34abee0() {
   return (neuron0x3496c90()*-0.0192815);
}

double NNfunction_ns_chi04_uR::synapse0x34abf20() {
   return (neuron0x3496fd0()*-0.00111184);
}

double NNfunction_ns_chi04_uR::synapse0x34abf60() {
   return (neuron0x3497310()*-0.0168022);
}

double NNfunction_ns_chi04_uR::synapse0x34abfa0() {
   return (neuron0x3497650()*0.014505);
}

double NNfunction_ns_chi04_uR::synapse0x34abfe0() {
   return (neuron0x3497990()*0.0231704);
}

double NNfunction_ns_chi04_uR::synapse0x34ac020() {
   return (neuron0x3497cd0()*0.0121012);
}

double NNfunction_ns_chi04_uR::synapse0x34ac060() {
   return (neuron0x3498010()*-0.00264718);
}

double NNfunction_ns_chi04_uR::synapse0x34ac0a0() {
   return (neuron0x3498350()*0.0115516);
}

double NNfunction_ns_chi04_uR::synapse0x34ac0e0() {
   return (neuron0x3498690()*-0.448733);
}

double NNfunction_ns_chi04_uR::synapse0x34ac120() {
   return (neuron0x34989d0()*-0.0150719);
}

double NNfunction_ns_chi04_uR::synapse0x34abbb0() {
   return (neuron0x3498d10()*-0.0265674);
}

double NNfunction_ns_chi04_uR::synapse0x34abbf0() {
   return (neuron0x3499270()*0.00768607);
}

double NNfunction_ns_chi04_uR::synapse0x34ac270() {
   return (neuron0x3499490()*0.00795236);
}

double NNfunction_ns_chi04_uR::synapse0x34ac2b0() {
   return (neuron0x34997d0()*0.00388406);
}

double NNfunction_ns_chi04_uR::synapse0x34ac2f0() {
   return (neuron0x3499b10()*0.00169857);
}

double NNfunction_ns_chi04_uR::synapse0x34ac330() {
   return (neuron0x3499e50()*0.0049728);
}

double NNfunction_ns_chi04_uR::synapse0x34ac370() {
   return (neuron0x349a190()*0.00527375);
}

double NNfunction_ns_chi04_uR::synapse0x34ac3b0() {
   return (neuron0x349a4d0()*-0.28368);
}

double NNfunction_ns_chi04_uR::synapse0x34ac730() {
   return (neuron0x3495910()*0.026157);
}

double NNfunction_ns_chi04_uR::synapse0x34ac770() {
   return (neuron0x3495c50()*5.92832);
}

double NNfunction_ns_chi04_uR::synapse0x34ac7b0() {
   return (neuron0x3495f90()*-1.55473);
}

double NNfunction_ns_chi04_uR::synapse0x34ac7f0() {
   return (neuron0x34962d0()*0.00825315);
}

double NNfunction_ns_chi04_uR::synapse0x34ac830() {
   return (neuron0x3496610()*0.0184302);
}

double NNfunction_ns_chi04_uR::synapse0x34ac870() {
   return (neuron0x3496950()*-0.042359);
}

double NNfunction_ns_chi04_uR::synapse0x34ac8b0() {
   return (neuron0x3496c90()*-0.0494437);
}

double NNfunction_ns_chi04_uR::synapse0x34ac8f0() {
   return (neuron0x3496fd0()*-0.00496531);
}

double NNfunction_ns_chi04_uR::synapse0x34ac930() {
   return (neuron0x3497310()*-0.0401761);
}

double NNfunction_ns_chi04_uR::synapse0x34ac970() {
   return (neuron0x3497650()*0.0283261);
}

double NNfunction_ns_chi04_uR::synapse0x34ac9b0() {
   return (neuron0x3497990()*-0.024254);
}

double NNfunction_ns_chi04_uR::synapse0x34ac9f0() {
   return (neuron0x3497cd0()*-0.00361803);
}

double NNfunction_ns_chi04_uR::synapse0x34aca30() {
   return (neuron0x3498010()*-0.0202171);
}

double NNfunction_ns_chi04_uR::synapse0x34aca70() {
   return (neuron0x3498350()*0.00893004);
}

double NNfunction_ns_chi04_uR::synapse0x34acab0() {
   return (neuron0x3498690()*0.191506);
}

double NNfunction_ns_chi04_uR::synapse0x34acaf0() {
   return (neuron0x34989d0()*-0.0141352);
}

double NNfunction_ns_chi04_uR::synapse0x34ac580() {
   return (neuron0x3498d10()*0.049413);
}

double NNfunction_ns_chi04_uR::synapse0x34ac5c0() {
   return (neuron0x3499270()*0.00387315);
}

double NNfunction_ns_chi04_uR::synapse0x34acc40() {
   return (neuron0x3499490()*0.0115097);
}

double NNfunction_ns_chi04_uR::synapse0x34acc80() {
   return (neuron0x34997d0()*0.00731277);
}

double NNfunction_ns_chi04_uR::synapse0x34accc0() {
   return (neuron0x3499b10()*0.0162182);
}

double NNfunction_ns_chi04_uR::synapse0x34acd00() {
   return (neuron0x3499e50()*0.00535036);
}

double NNfunction_ns_chi04_uR::synapse0x34acd40() {
   return (neuron0x349a190()*0.0157323);
}

double NNfunction_ns_chi04_uR::synapse0x34acd80() {
   return (neuron0x349a4d0()*-1.16022);
}

double NNfunction_ns_chi04_uR::synapse0x34ad100() {
   return (neuron0x3495910()*-0.354019);
}

double NNfunction_ns_chi04_uR::synapse0x34ad140() {
   return (neuron0x3495c50()*-1.21263);
}

double NNfunction_ns_chi04_uR::synapse0x34ad180() {
   return (neuron0x3495f90()*-0.239033);
}

double NNfunction_ns_chi04_uR::synapse0x34ad1c0() {
   return (neuron0x34962d0()*-0.17199);
}

double NNfunction_ns_chi04_uR::synapse0x34ad200() {
   return (neuron0x3496610()*0.575296);
}

double NNfunction_ns_chi04_uR::synapse0x34ad240() {
   return (neuron0x3496950()*0.126589);
}

double NNfunction_ns_chi04_uR::synapse0x34ad280() {
   return (neuron0x3496c90()*0.250954);
}

double NNfunction_ns_chi04_uR::synapse0x34ad2c0() {
   return (neuron0x3496fd0()*0.139056);
}

double NNfunction_ns_chi04_uR::synapse0x34ad300() {
   return (neuron0x3497310()*0.051158);
}

double NNfunction_ns_chi04_uR::synapse0x34ad340() {
   return (neuron0x3497650()*0.116253);
}

double NNfunction_ns_chi04_uR::synapse0x34ad380() {
   return (neuron0x3497990()*1.04729);
}

double NNfunction_ns_chi04_uR::synapse0x34ad3c0() {
   return (neuron0x3497cd0()*-0.526554);
}

double NNfunction_ns_chi04_uR::synapse0x34ad400() {
   return (neuron0x3498010()*-0.35115);
}

double NNfunction_ns_chi04_uR::synapse0x34ad440() {
   return (neuron0x3498350()*-0.204819);
}

double NNfunction_ns_chi04_uR::synapse0x34ad480() {
   return (neuron0x3498690()*0.213676);
}

double NNfunction_ns_chi04_uR::synapse0x34ad4c0() {
   return (neuron0x34989d0()*1.35468);
}

double NNfunction_ns_chi04_uR::synapse0x34acf50() {
   return (neuron0x3498d10()*-0.208889);
}

double NNfunction_ns_chi04_uR::synapse0x34acf90() {
   return (neuron0x3499270()*-0.0483736);
}

double NNfunction_ns_chi04_uR::synapse0x34ad610() {
   return (neuron0x3499490()*-0.224947);
}

double NNfunction_ns_chi04_uR::synapse0x34ad650() {
   return (neuron0x34997d0()*0.420279);
}

double NNfunction_ns_chi04_uR::synapse0x34ad690() {
   return (neuron0x3499b10()*0.592998);
}

double NNfunction_ns_chi04_uR::synapse0x34ad6d0() {
   return (neuron0x3499e50()*-0.245701);
}

double NNfunction_ns_chi04_uR::synapse0x34ad710() {
   return (neuron0x349a190()*0.235004);
}

double NNfunction_ns_chi04_uR::synapse0x34ad750() {
   return (neuron0x349a4d0()*1.5226);
}

double NNfunction_ns_chi04_uR::synapse0x34adad0() {
   return (neuron0x3495910()*0.012178);
}

double NNfunction_ns_chi04_uR::synapse0x34adb10() {
   return (neuron0x3495c50()*9.60648);
}

double NNfunction_ns_chi04_uR::synapse0x34adb50() {
   return (neuron0x3495f90()*0.202454);
}

double NNfunction_ns_chi04_uR::synapse0x34adb90() {
   return (neuron0x34962d0()*0.0271654);
}

double NNfunction_ns_chi04_uR::synapse0x34adbd0() {
   return (neuron0x3496610()*-0.0310718);
}

double NNfunction_ns_chi04_uR::synapse0x34adc10() {
   return (neuron0x3496950()*-0.0365714);
}

double NNfunction_ns_chi04_uR::synapse0x34adc50() {
   return (neuron0x3496c90()*-0.00501178);
}

double NNfunction_ns_chi04_uR::synapse0x34adc90() {
   return (neuron0x3496fd0()*0.0320598);
}

double NNfunction_ns_chi04_uR::synapse0x34adcd0() {
   return (neuron0x3497310()*0.00447575);
}

double NNfunction_ns_chi04_uR::synapse0x34add10() {
   return (neuron0x3497650()*0.0225632);
}

double NNfunction_ns_chi04_uR::synapse0x34add50() {
   return (neuron0x3497990()*0.0430049);
}

double NNfunction_ns_chi04_uR::synapse0x34add90() {
   return (neuron0x3497cd0()*0.0128362);
}

double NNfunction_ns_chi04_uR::synapse0x34addd0() {
   return (neuron0x3498010()*-0.0179176);
}

double NNfunction_ns_chi04_uR::synapse0x34ade10() {
   return (neuron0x3498350()*-0.00667086);
}

double NNfunction_ns_chi04_uR::synapse0x34ade50() {
   return (neuron0x3498690()*0.036088);
}

double NNfunction_ns_chi04_uR::synapse0x34ade90() {
   return (neuron0x34989d0()*-0.00331388);
}

double NNfunction_ns_chi04_uR::synapse0x34ad920() {
   return (neuron0x3498d10()*-0.00921069);
}

double NNfunction_ns_chi04_uR::synapse0x34ad960() {
   return (neuron0x3499270()*-0.00909719);
}

double NNfunction_ns_chi04_uR::synapse0x34adfe0() {
   return (neuron0x3499490()*-0.0482445);
}

double NNfunction_ns_chi04_uR::synapse0x34ae020() {
   return (neuron0x34997d0()*0.00407976);
}

double NNfunction_ns_chi04_uR::synapse0x34ae060() {
   return (neuron0x3499b10()*0.0361209);
}

double NNfunction_ns_chi04_uR::synapse0x34ae0a0() {
   return (neuron0x3499e50()*-0.0187102);
}

double NNfunction_ns_chi04_uR::synapse0x34ae0e0() {
   return (neuron0x349a190()*0.00845828);
}

double NNfunction_ns_chi04_uR::synapse0x34ae120() {
   return (neuron0x349a4d0()*-3.35292);
}

double NNfunction_ns_chi04_uR::synapse0x34ae4a0() {
   return (neuron0x3495910()*0.323175);
}

double NNfunction_ns_chi04_uR::synapse0x34ae4e0() {
   return (neuron0x3495c50()*0.175003);
}

double NNfunction_ns_chi04_uR::synapse0x34ae520() {
   return (neuron0x3495f90()*0.702065);
}

double NNfunction_ns_chi04_uR::synapse0x34ae560() {
   return (neuron0x34962d0()*0.199917);
}

double NNfunction_ns_chi04_uR::synapse0x34ae5a0() {
   return (neuron0x3496610()*-0.414833);
}

double NNfunction_ns_chi04_uR::synapse0x34ae5e0() {
   return (neuron0x3496950()*-0.0509152);
}

double NNfunction_ns_chi04_uR::synapse0x34ae620() {
   return (neuron0x3496c90()*0.226984);
}

double NNfunction_ns_chi04_uR::synapse0x34ae660() {
   return (neuron0x3496fd0()*0.231688);
}

double NNfunction_ns_chi04_uR::synapse0x34ae6a0() {
   return (neuron0x3497310()*0.177038);
}

double NNfunction_ns_chi04_uR::synapse0x34ae6e0() {
   return (neuron0x3497650()*0.428497);
}

double NNfunction_ns_chi04_uR::synapse0x34ae720() {
   return (neuron0x3497990()*1.00808);
}

double NNfunction_ns_chi04_uR::synapse0x34ae760() {
   return (neuron0x3497cd0()*0.42475);
}

double NNfunction_ns_chi04_uR::synapse0x34ae7a0() {
   return (neuron0x3498010()*0.1541);
}

double NNfunction_ns_chi04_uR::synapse0x34ae7e0() {
   return (neuron0x3498350()*-0.242568);
}

double NNfunction_ns_chi04_uR::synapse0x34ae820() {
   return (neuron0x3498690()*0.102886);
}

double NNfunction_ns_chi04_uR::synapse0x34ae860() {
   return (neuron0x34989d0()*0.709259);
}

double NNfunction_ns_chi04_uR::synapse0x34ae2f0() {
   return (neuron0x3498d10()*-0.610687);
}

double NNfunction_ns_chi04_uR::synapse0x34ae330() {
   return (neuron0x3499270()*0.709165);
}

double NNfunction_ns_chi04_uR::synapse0x34ae9b0() {
   return (neuron0x3499490()*0.406267);
}

double NNfunction_ns_chi04_uR::synapse0x34ae9f0() {
   return (neuron0x34997d0()*0.495516);
}

double NNfunction_ns_chi04_uR::synapse0x34aea30() {
   return (neuron0x3499b10()*0.273925);
}

double NNfunction_ns_chi04_uR::synapse0x34aea70() {
   return (neuron0x3499e50()*0.0893685);
}

double NNfunction_ns_chi04_uR::synapse0x34aeab0() {
   return (neuron0x349a190()*-0.219751);
}

double NNfunction_ns_chi04_uR::synapse0x34aeaf0() {
   return (neuron0x349a4d0()*2.103);
}

double NNfunction_ns_chi04_uR::synapse0x34aee70() {
   return (neuron0x3495910()*-0.295327);
}

double NNfunction_ns_chi04_uR::synapse0x34aeeb0() {
   return (neuron0x3495c50()*-0.1888);
}

double NNfunction_ns_chi04_uR::synapse0x34aeef0() {
   return (neuron0x3495f90()*0.135071);
}

double NNfunction_ns_chi04_uR::synapse0x34aef30() {
   return (neuron0x34962d0()*0.172318);
}

double NNfunction_ns_chi04_uR::synapse0x34aef70() {
   return (neuron0x3496610()*-0.118729);
}

double NNfunction_ns_chi04_uR::synapse0x34aefb0() {
   return (neuron0x3496950()*0.394972);
}

double NNfunction_ns_chi04_uR::synapse0x34aeff0() {
   return (neuron0x3496c90()*-0.280834);
}

double NNfunction_ns_chi04_uR::synapse0x34af030() {
   return (neuron0x3496fd0()*-0.1206);
}

double NNfunction_ns_chi04_uR::synapse0x34af070() {
   return (neuron0x3497310()*0.341066);
}

double NNfunction_ns_chi04_uR::synapse0x34af0b0() {
   return (neuron0x3497650()*-0.505456);
}

double NNfunction_ns_chi04_uR::synapse0x34af0f0() {
   return (neuron0x3497990()*0.155133);
}

double NNfunction_ns_chi04_uR::synapse0x34af130() {
   return (neuron0x3497cd0()*-0.642645);
}

double NNfunction_ns_chi04_uR::synapse0x34af170() {
   return (neuron0x3498010()*-0.471614);
}

double NNfunction_ns_chi04_uR::synapse0x34af1b0() {
   return (neuron0x3498350()*0.379284);
}

double NNfunction_ns_chi04_uR::synapse0x34af1f0() {
   return (neuron0x3498690()*-0.956589);
}

double NNfunction_ns_chi04_uR::synapse0x34af230() {
   return (neuron0x34989d0()*0.357369);
}

double NNfunction_ns_chi04_uR::synapse0x34aecc0() {
   return (neuron0x3498d10()*-1.01771);
}

double NNfunction_ns_chi04_uR::synapse0x34aed00() {
   return (neuron0x3499270()*-0.693353);
}

double NNfunction_ns_chi04_uR::synapse0x34af380() {
   return (neuron0x3499490()*-0.201113);
}

double NNfunction_ns_chi04_uR::synapse0x34af3c0() {
   return (neuron0x34997d0()*-0.234259);
}

double NNfunction_ns_chi04_uR::synapse0x34af400() {
   return (neuron0x3499b10()*-0.0360598);
}

double NNfunction_ns_chi04_uR::synapse0x34af440() {
   return (neuron0x3499e50()*-0.252948);
}

double NNfunction_ns_chi04_uR::synapse0x34af480() {
   return (neuron0x349a190()*0.299113);
}

double NNfunction_ns_chi04_uR::synapse0x34af4c0() {
   return (neuron0x349a4d0()*0.250689);
}

double NNfunction_ns_chi04_uR::synapse0x34af840() {
   return (neuron0x3495910()*0.53294);
}

double NNfunction_ns_chi04_uR::synapse0x34af880() {
   return (neuron0x3495c50()*0.19524);
}

double NNfunction_ns_chi04_uR::synapse0x34af8c0() {
   return (neuron0x3495f90()*-0.110036);
}

double NNfunction_ns_chi04_uR::synapse0x34af900() {
   return (neuron0x34962d0()*-0.0627271);
}

double NNfunction_ns_chi04_uR::synapse0x34af940() {
   return (neuron0x3496610()*-0.357379);
}

double NNfunction_ns_chi04_uR::synapse0x34af980() {
   return (neuron0x3496950()*0.377393);
}

double NNfunction_ns_chi04_uR::synapse0x34af9c0() {
   return (neuron0x3496c90()*0.00601132);
}

double NNfunction_ns_chi04_uR::synapse0x34afa00() {
   return (neuron0x3496fd0()*0.463297);
}

double NNfunction_ns_chi04_uR::synapse0x34afa40() {
   return (neuron0x3497310()*0.330566);
}

double NNfunction_ns_chi04_uR::synapse0x34afa80() {
   return (neuron0x3497650()*-0.415275);
}

double NNfunction_ns_chi04_uR::synapse0x34afac0() {
   return (neuron0x3497990()*-0.374482);
}

double NNfunction_ns_chi04_uR::synapse0x34afb00() {
   return (neuron0x3497cd0()*-0.39871);
}

double NNfunction_ns_chi04_uR::synapse0x34afb40() {
   return (neuron0x3498010()*-0.106408);
}

double NNfunction_ns_chi04_uR::synapse0x34afb80() {
   return (neuron0x3498350()*-0.524776);
}

double NNfunction_ns_chi04_uR::synapse0x34afbc0() {
   return (neuron0x3498690()*-0.252379);
}

double NNfunction_ns_chi04_uR::synapse0x34afc00() {
   return (neuron0x34989d0()*0.074083);
}

double NNfunction_ns_chi04_uR::synapse0x34af690() {
   return (neuron0x3498d10()*-0.0855938);
}

double NNfunction_ns_chi04_uR::synapse0x34af6d0() {
   return (neuron0x3499270()*0.10422);
}

double NNfunction_ns_chi04_uR::synapse0x34afd50() {
   return (neuron0x3499490()*-0.454174);
}

double NNfunction_ns_chi04_uR::synapse0x34afd90() {
   return (neuron0x34997d0()*-0.262008);
}

double NNfunction_ns_chi04_uR::synapse0x34afdd0() {
   return (neuron0x3499b10()*-0.0243195);
}

double NNfunction_ns_chi04_uR::synapse0x34afe10() {
   return (neuron0x3499e50()*0.0123565);
}

double NNfunction_ns_chi04_uR::synapse0x34afe50() {
   return (neuron0x349a190()*-0.44162);
}

double NNfunction_ns_chi04_uR::synapse0x34afe90() {
   return (neuron0x349a4d0()*-0.422206);
}

double NNfunction_ns_chi04_uR::synapse0x34b0210() {
   return (neuron0x3495910()*0.624968);
}

double NNfunction_ns_chi04_uR::synapse0x34a47e0() {
   return (neuron0x3495c50()*1.38468);
}

double NNfunction_ns_chi04_uR::synapse0x34a4820() {
   return (neuron0x3495f90()*0.0510861);
}

double NNfunction_ns_chi04_uR::synapse0x34a4860() {
   return (neuron0x34962d0()*-0.420086);
}

double NNfunction_ns_chi04_uR::synapse0x34a4ab0() {
   return (neuron0x3496610()*-0.0806346);
}

double NNfunction_ns_chi04_uR::synapse0x34a4af0() {
   return (neuron0x3496950()*-0.243535);
}

double NNfunction_ns_chi04_uR::synapse0x34a4b30() {
   return (neuron0x3496c90()*-0.57202);
}

double NNfunction_ns_chi04_uR::synapse0x34a4d80() {
   return (neuron0x3496fd0()*-0.00859016);
}

double NNfunction_ns_chi04_uR::synapse0x34a4dc0() {
   return (neuron0x3497310()*0.601913);
}

double NNfunction_ns_chi04_uR::synapse0x34a5010() {
   return (neuron0x3497650()*0.170121);
}

double NNfunction_ns_chi04_uR::synapse0x34a5050() {
   return (neuron0x3497990()*1.23878);
}

double NNfunction_ns_chi04_uR::synapse0x34a5090() {
   return (neuron0x3497cd0()*-0.787041);
}

double NNfunction_ns_chi04_uR::synapse0x34a52e0() {
   return (neuron0x3498010()*-1.02155);
}

double NNfunction_ns_chi04_uR::synapse0x34a5320() {
   return (neuron0x3498350()*-0.546608);
}

double NNfunction_ns_chi04_uR::synapse0x34a5570() {
   return (neuron0x3498690()*-0.971505);
}

double NNfunction_ns_chi04_uR::synapse0x34a55b0() {
   return (neuron0x34989d0()*0.927882);
}

double NNfunction_ns_chi04_uR::synapse0x34b0060() {
   return (neuron0x3498d10()*-0.668537);
}

double NNfunction_ns_chi04_uR::synapse0x34b00a0() {
   return (neuron0x3499270()*-0.319882);
}

double NNfunction_ns_chi04_uR::synapse0x34a5700() {
   return (neuron0x3499490()*0.421962);
}

double NNfunction_ns_chi04_uR::synapse0x34a5c10() {
   return (neuron0x34997d0()*-0.322624);
}

double NNfunction_ns_chi04_uR::synapse0x34a5c50() {
   return (neuron0x3499b10()*0.488838);
}

double NNfunction_ns_chi04_uR::synapse0x34a5c90() {
   return (neuron0x3499e50()*0.63361);
}

double NNfunction_ns_chi04_uR::synapse0x34a5ee0() {
   return (neuron0x349a190()*-0.298631);
}

double NNfunction_ns_chi04_uR::synapse0x34a5f20() {
   return (neuron0x349a4d0()*-0.809847);
}

double NNfunction_ns_chi04_uR::synapse0x34a57d0() {
   return (neuron0x3495910()*0.625878);
}

double NNfunction_ns_chi04_uR::synapse0x34a5810() {
   return (neuron0x3495c50()*-1.57425);
}

double NNfunction_ns_chi04_uR::synapse0x34a5850() {
   return (neuron0x3495f90()*-0.291491);
}

double NNfunction_ns_chi04_uR::synapse0x34a5890() {
   return (neuron0x34962d0()*-0.293056);
}

double NNfunction_ns_chi04_uR::synapse0x34a6210() {
   return (neuron0x3496610()*-0.177149);
}

double NNfunction_ns_chi04_uR::synapse0x34b2560() {
   return (neuron0x3496950()*0.0336512);
}

double NNfunction_ns_chi04_uR::synapse0x34b25a0() {
   return (neuron0x3496c90()*-0.0483228);
}

double NNfunction_ns_chi04_uR::synapse0x34b25e0() {
   return (neuron0x3496fd0()*0.328708);
}

double NNfunction_ns_chi04_uR::synapse0x34b2620() {
   return (neuron0x3497310()*0.100408);
}

double NNfunction_ns_chi04_uR::synapse0x34b2660() {
   return (neuron0x3497650()*0.632601);
}

double NNfunction_ns_chi04_uR::synapse0x34b26a0() {
   return (neuron0x3497990()*-0.164258);
}

double NNfunction_ns_chi04_uR::synapse0x34b26e0() {
   return (neuron0x3497cd0()*-0.09296);
}

double NNfunction_ns_chi04_uR::synapse0x34b2720() {
   return (neuron0x3498010()*-1.2526);
}

double NNfunction_ns_chi04_uR::synapse0x34b2760() {
   return (neuron0x3498350()*-0.15731);
}

double NNfunction_ns_chi04_uR::synapse0x34b27a0() {
   return (neuron0x3498690()*-0.175201);
}

double NNfunction_ns_chi04_uR::synapse0x34b27e0() {
   return (neuron0x34989d0()*-0.520925);
}

double NNfunction_ns_chi04_uR::synapse0x34a60f0() {
   return (neuron0x3498d10()*0.114831);
}

double NNfunction_ns_chi04_uR::synapse0x34a6130() {
   return (neuron0x3499270()*1.19719);
}

double NNfunction_ns_chi04_uR::synapse0x34b2930() {
   return (neuron0x3499490()*-0.406027);
}

double NNfunction_ns_chi04_uR::synapse0x34b2970() {
   return (neuron0x34997d0()*-0.417417);
}

double NNfunction_ns_chi04_uR::synapse0x34b29b0() {
   return (neuron0x3499b10()*-0.382143);
}

double NNfunction_ns_chi04_uR::synapse0x34b29f0() {
   return (neuron0x3499e50()*0.308554);
}

double NNfunction_ns_chi04_uR::synapse0x34b2a30() {
   return (neuron0x349a190()*0.20859);
}

double NNfunction_ns_chi04_uR::synapse0x34b2a70() {
   return (neuron0x349a4d0()*0.988224);
}

double NNfunction_ns_chi04_uR::synapse0x34b2df0() {
   return (neuron0x3495910()*0.476259);
}

double NNfunction_ns_chi04_uR::synapse0x34b2e30() {
   return (neuron0x3495c50()*-1.35631);
}

double NNfunction_ns_chi04_uR::synapse0x34b2e70() {
   return (neuron0x3495f90()*-0.303308);
}

double NNfunction_ns_chi04_uR::synapse0x34b2eb0() {
   return (neuron0x34962d0()*0.479152);
}

double NNfunction_ns_chi04_uR::synapse0x34b2ef0() {
   return (neuron0x3496610()*0.207644);
}

double NNfunction_ns_chi04_uR::synapse0x34b2f30() {
   return (neuron0x3496950()*-0.770414);
}

double NNfunction_ns_chi04_uR::synapse0x34b2f70() {
   return (neuron0x3496c90()*0.0396733);
}

double NNfunction_ns_chi04_uR::synapse0x34b2fb0() {
   return (neuron0x3496fd0()*-0.742026);
}

double NNfunction_ns_chi04_uR::synapse0x34b2ff0() {
   return (neuron0x3497310()*0.448997);
}

double NNfunction_ns_chi04_uR::synapse0x34b3030() {
   return (neuron0x3497650()*-0.711844);
}

double NNfunction_ns_chi04_uR::synapse0x34b3070() {
   return (neuron0x3497990()*0.531741);
}

double NNfunction_ns_chi04_uR::synapse0x34b30b0() {
   return (neuron0x3497cd0()*-1.33377);
}

double NNfunction_ns_chi04_uR::synapse0x34b30f0() {
   return (neuron0x3498010()*0.15369);
}

double NNfunction_ns_chi04_uR::synapse0x34b3130() {
   return (neuron0x3498350()*-0.0553241);
}

double NNfunction_ns_chi04_uR::synapse0x34b3170() {
   return (neuron0x3498690()*-0.658828);
}

double NNfunction_ns_chi04_uR::synapse0x34b31b0() {
   return (neuron0x34989d0()*-1.44791);
}

double NNfunction_ns_chi04_uR::synapse0x34b2c40() {
   return (neuron0x3498d10()*0.075779);
}

double NNfunction_ns_chi04_uR::synapse0x34b2c80() {
   return (neuron0x3499270()*0.552074);
}

double NNfunction_ns_chi04_uR::synapse0x34b3300() {
   return (neuron0x3499490()*0.548422);
}

double NNfunction_ns_chi04_uR::synapse0x34b3340() {
   return (neuron0x34997d0()*-0.0691838);
}

double NNfunction_ns_chi04_uR::synapse0x34b3380() {
   return (neuron0x3499b10()*0.609831);
}

double NNfunction_ns_chi04_uR::synapse0x34b33c0() {
   return (neuron0x3499e50()*-0.141869);
}

double NNfunction_ns_chi04_uR::synapse0x34b3400() {
   return (neuron0x349a190()*-1.10038);
}

double NNfunction_ns_chi04_uR::synapse0x34b3440() {
   return (neuron0x349a4d0()*0.35432);
}

double NNfunction_ns_chi04_uR::synapse0x34b37c0() {
   return (neuron0x3495910()*-0.0801858);
}

double NNfunction_ns_chi04_uR::synapse0x34b3800() {
   return (neuron0x3495c50()*5.14981);
}

double NNfunction_ns_chi04_uR::synapse0x34b3840() {
   return (neuron0x3495f90()*-3.20138);
}

double NNfunction_ns_chi04_uR::synapse0x34b3880() {
   return (neuron0x34962d0()*-0.0101521);
}

double NNfunction_ns_chi04_uR::synapse0x34b38c0() {
   return (neuron0x3496610()*0.0339112);
}

double NNfunction_ns_chi04_uR::synapse0x34b3900() {
   return (neuron0x3496950()*-0.0748887);
}

double NNfunction_ns_chi04_uR::synapse0x34b3940() {
   return (neuron0x3496c90()*0.0658401);
}

double NNfunction_ns_chi04_uR::synapse0x34b3980() {
   return (neuron0x3496fd0()*-0.0424912);
}

double NNfunction_ns_chi04_uR::synapse0x34b39c0() {
   return (neuron0x3497310()*0.0332971);
}

double NNfunction_ns_chi04_uR::synapse0x34b3a00() {
   return (neuron0x3497650()*-0.0427433);
}

double NNfunction_ns_chi04_uR::synapse0x34b3a40() {
   return (neuron0x3497990()*0.0992128);
}

double NNfunction_ns_chi04_uR::synapse0x34b3a80() {
   return (neuron0x3497cd0()*-0.0664236);
}

double NNfunction_ns_chi04_uR::synapse0x34b3ac0() {
   return (neuron0x3498010()*-0.00408308);
}

double NNfunction_ns_chi04_uR::synapse0x34b3b00() {
   return (neuron0x3498350()*-0.00784682);
}

double NNfunction_ns_chi04_uR::synapse0x34b3b40() {
   return (neuron0x3498690()*-0.669151);
}

double NNfunction_ns_chi04_uR::synapse0x34b3b80() {
   return (neuron0x34989d0()*-0.173182);
}

double NNfunction_ns_chi04_uR::synapse0x34b3610() {
   return (neuron0x3498d10()*-0.0126892);
}

double NNfunction_ns_chi04_uR::synapse0x34b3650() {
   return (neuron0x3499270()*0.0566906);
}

double NNfunction_ns_chi04_uR::synapse0x34b3cd0() {
   return (neuron0x3499490()*-0.0120065);
}

double NNfunction_ns_chi04_uR::synapse0x34b3d10() {
   return (neuron0x34997d0()*0.0351395);
}

double NNfunction_ns_chi04_uR::synapse0x34b3d50() {
   return (neuron0x3499b10()*0.0117346);
}

double NNfunction_ns_chi04_uR::synapse0x34b3d90() {
   return (neuron0x3499e50()*-0.0264567);
}

double NNfunction_ns_chi04_uR::synapse0x34b3dd0() {
   return (neuron0x349a190()*0.020176);
}

double NNfunction_ns_chi04_uR::synapse0x34b3e10() {
   return (neuron0x349a4d0()*1.9424);
}

double NNfunction_ns_chi04_uR::synapse0x34b4190() {
   return (neuron0x3495910()*-0.153092);
}

double NNfunction_ns_chi04_uR::synapse0x34b41d0() {
   return (neuron0x3495c50()*-5.98634);
}

double NNfunction_ns_chi04_uR::synapse0x34b4210() {
   return (neuron0x3495f90()*-2.00203);
}

double NNfunction_ns_chi04_uR::synapse0x34b4250() {
   return (neuron0x34962d0()*0.126373);
}

double NNfunction_ns_chi04_uR::synapse0x34b4290() {
   return (neuron0x3496610()*-0.10024);
}

double NNfunction_ns_chi04_uR::synapse0x34b42d0() {
   return (neuron0x3496950()*0.0325049);
}

double NNfunction_ns_chi04_uR::synapse0x34b4310() {
   return (neuron0x3496c90()*0.154821);
}

double NNfunction_ns_chi04_uR::synapse0x34b4350() {
   return (neuron0x3496fd0()*0.0994392);
}

double NNfunction_ns_chi04_uR::synapse0x34b4390() {
   return (neuron0x3497310()*0.0866322);
}

double NNfunction_ns_chi04_uR::synapse0x34b43d0() {
   return (neuron0x3497650()*-0.048769);
}

double NNfunction_ns_chi04_uR::synapse0x34b4410() {
   return (neuron0x3497990()*-0.00248606);
}

double NNfunction_ns_chi04_uR::synapse0x34b4450() {
   return (neuron0x3497cd0()*-0.00800801);
}

double NNfunction_ns_chi04_uR::synapse0x34b4490() {
   return (neuron0x3498010()*0.0193329);
}

double NNfunction_ns_chi04_uR::synapse0x34b44d0() {
   return (neuron0x3498350()*-0.149021);
}

double NNfunction_ns_chi04_uR::synapse0x34b4510() {
   return (neuron0x3498690()*0.78058);
}

double NNfunction_ns_chi04_uR::synapse0x34b4550() {
   return (neuron0x34989d0()*0.037402);
}

double NNfunction_ns_chi04_uR::synapse0x34b3fe0() {
   return (neuron0x3498d10()*0.0277753);
}

double NNfunction_ns_chi04_uR::synapse0x34b4020() {
   return (neuron0x3499270()*-0.0166476);
}

double NNfunction_ns_chi04_uR::synapse0x34b46a0() {
   return (neuron0x3499490()*-0.0734794);
}

double NNfunction_ns_chi04_uR::synapse0x34b46e0() {
   return (neuron0x34997d0()*-0.0578669);
}

double NNfunction_ns_chi04_uR::synapse0x34b4720() {
   return (neuron0x3499b10()*0.107708);
}

double NNfunction_ns_chi04_uR::synapse0x34b4760() {
   return (neuron0x3499e50()*-0.0119939);
}

double NNfunction_ns_chi04_uR::synapse0x34b47a0() {
   return (neuron0x349a190()*0.0524209);
}

double NNfunction_ns_chi04_uR::synapse0x34b47e0() {
   return (neuron0x349a4d0()*1.71904);
}

double NNfunction_ns_chi04_uR::synapse0x34b4b60() {
   return (neuron0x3495910()*-0.0232686);
}

double NNfunction_ns_chi04_uR::synapse0x34b4ba0() {
   return (neuron0x3495c50()*22.4262);
}

double NNfunction_ns_chi04_uR::synapse0x34b4be0() {
   return (neuron0x3495f90()*6.03678);
}

double NNfunction_ns_chi04_uR::synapse0x34b4c20() {
   return (neuron0x34962d0()*-0.0856016);
}

double NNfunction_ns_chi04_uR::synapse0x34b4c60() {
   return (neuron0x3496610()*0.0245553);
}

double NNfunction_ns_chi04_uR::synapse0x34b4ca0() {
   return (neuron0x3496950()*0.0310393);
}

double NNfunction_ns_chi04_uR::synapse0x34b4ce0() {
   return (neuron0x3496c90()*0.036886);
}

double NNfunction_ns_chi04_uR::synapse0x34b4d20() {
   return (neuron0x3496fd0()*-0.0343516);
}

double NNfunction_ns_chi04_uR::synapse0x34b4d60() {
   return (neuron0x3497310()*0.0181391);
}

double NNfunction_ns_chi04_uR::synapse0x34b4da0() {
   return (neuron0x3497650()*0.0350454);
}

double NNfunction_ns_chi04_uR::synapse0x34b4de0() {
   return (neuron0x3497990()*-0.0149059);
}

double NNfunction_ns_chi04_uR::synapse0x34b4e20() {
   return (neuron0x3497cd0()*0.0568079);
}

double NNfunction_ns_chi04_uR::synapse0x34b4e60() {
   return (neuron0x3498010()*-0.0198612);
}

double NNfunction_ns_chi04_uR::synapse0x34b4ea0() {
   return (neuron0x3498350()*0.0208956);
}

double NNfunction_ns_chi04_uR::synapse0x34b4ee0() {
   return (neuron0x3498690()*-0.494238);
}

double NNfunction_ns_chi04_uR::synapse0x34b4f20() {
   return (neuron0x34989d0()*0.0112719);
}

double NNfunction_ns_chi04_uR::synapse0x34b49b0() {
   return (neuron0x3498d10()*0.0373197);
}

double NNfunction_ns_chi04_uR::synapse0x34b49f0() {
   return (neuron0x3499270()*0.00548837);
}

double NNfunction_ns_chi04_uR::synapse0x34b5070() {
   return (neuron0x3499490()*-0.0309419);
}

double NNfunction_ns_chi04_uR::synapse0x34b50b0() {
   return (neuron0x34997d0()*0.0220191);
}

double NNfunction_ns_chi04_uR::synapse0x34b50f0() {
   return (neuron0x3499b10()*-0.0467447);
}

double NNfunction_ns_chi04_uR::synapse0x34b5130() {
   return (neuron0x3499e50()*-0.0748939);
}

double NNfunction_ns_chi04_uR::synapse0x34b5170() {
   return (neuron0x349a190()*-0.0429862);
}

double NNfunction_ns_chi04_uR::synapse0x34b51b0() {
   return (neuron0x349a4d0()*0.460985);
}

double NNfunction_ns_chi04_uR::synapse0x34b5530() {
   return (neuron0x3495910()*0.708358);
}

double NNfunction_ns_chi04_uR::synapse0x34b5570() {
   return (neuron0x3495c50()*-2.24065);
}

double NNfunction_ns_chi04_uR::synapse0x34b55b0() {
   return (neuron0x3495f90()*0.358522);
}

double NNfunction_ns_chi04_uR::synapse0x34b55f0() {
   return (neuron0x34962d0()*-0.293666);
}

double NNfunction_ns_chi04_uR::synapse0x34b5630() {
   return (neuron0x3496610()*0.300654);
}

double NNfunction_ns_chi04_uR::synapse0x34b5670() {
   return (neuron0x3496950()*0.267183);
}

double NNfunction_ns_chi04_uR::synapse0x34b56b0() {
   return (neuron0x3496c90()*-0.932667);
}

double NNfunction_ns_chi04_uR::synapse0x34b56f0() {
   return (neuron0x3496fd0()*0.115596);
}

double NNfunction_ns_chi04_uR::synapse0x34b5730() {
   return (neuron0x3497310()*-0.337894);
}

double NNfunction_ns_chi04_uR::synapse0x34b5770() {
   return (neuron0x3497650()*-0.200581);
}

double NNfunction_ns_chi04_uR::synapse0x34b57b0() {
   return (neuron0x3497990()*0.175943);
}

double NNfunction_ns_chi04_uR::synapse0x34b57f0() {
   return (neuron0x3497cd0()*0.754777);
}

double NNfunction_ns_chi04_uR::synapse0x34b5830() {
   return (neuron0x3498010()*-0.00821158);
}

double NNfunction_ns_chi04_uR::synapse0x34b5870() {
   return (neuron0x3498350()*0.542898);
}

double NNfunction_ns_chi04_uR::synapse0x34b58b0() {
   return (neuron0x3498690()*0.989473);
}

double NNfunction_ns_chi04_uR::synapse0x34b58f0() {
   return (neuron0x34989d0()*0.338242);
}

double NNfunction_ns_chi04_uR::synapse0x34b5380() {
   return (neuron0x3498d10()*0.00671822);
}

double NNfunction_ns_chi04_uR::synapse0x34b53c0() {
   return (neuron0x3499270()*-0.657073);
}

double NNfunction_ns_chi04_uR::synapse0x34b5a40() {
   return (neuron0x3499490()*-0.496421);
}

double NNfunction_ns_chi04_uR::synapse0x34b5a80() {
   return (neuron0x34997d0()*0.186985);
}

double NNfunction_ns_chi04_uR::synapse0x34b5ac0() {
   return (neuron0x3499b10()*-0.408729);
}

double NNfunction_ns_chi04_uR::synapse0x34b5b00() {
   return (neuron0x3499e50()*-0.334636);
}

double NNfunction_ns_chi04_uR::synapse0x34b5b40() {
   return (neuron0x349a190()*-0.0121092);
}

double NNfunction_ns_chi04_uR::synapse0x34b5b80() {
   return (neuron0x349a4d0()*0.338828);
}

double NNfunction_ns_chi04_uR::synapse0x34b5f00() {
   return (neuron0x3495910()*0.00844167);
}

double NNfunction_ns_chi04_uR::synapse0x34b5f40() {
   return (neuron0x3495c50()*-0.57405);
}

double NNfunction_ns_chi04_uR::synapse0x34b5f80() {
   return (neuron0x3495f90()*-0.0509814);
}

double NNfunction_ns_chi04_uR::synapse0x34b5fc0() {
   return (neuron0x34962d0()*0.00197425);
}

double NNfunction_ns_chi04_uR::synapse0x34b6000() {
   return (neuron0x3496610()*-0.0125663);
}

double NNfunction_ns_chi04_uR::synapse0x34b6040() {
   return (neuron0x3496950()*0.00560702);
}

double NNfunction_ns_chi04_uR::synapse0x34b6080() {
   return (neuron0x3496c90()*-0.00545821);
}

double NNfunction_ns_chi04_uR::synapse0x34b60c0() {
   return (neuron0x3496fd0()*-0.000651261);
}

double NNfunction_ns_chi04_uR::synapse0x34b6100() {
   return (neuron0x3497310()*-0.005686);
}

double NNfunction_ns_chi04_uR::synapse0x34b6140() {
   return (neuron0x3497650()*-0.0126057);
}

double NNfunction_ns_chi04_uR::synapse0x34b6180() {
   return (neuron0x3497990()*0.00325789);
}

double NNfunction_ns_chi04_uR::synapse0x34b61c0() {
   return (neuron0x3497cd0()*0.00744034);
}

double NNfunction_ns_chi04_uR::synapse0x34b6200() {
   return (neuron0x3498010()*-0.000705048);
}

double NNfunction_ns_chi04_uR::synapse0x34b6240() {
   return (neuron0x3498350()*0.00282794);
}

double NNfunction_ns_chi04_uR::synapse0x34b6280() {
   return (neuron0x3498690()*-0.22042);
}

double NNfunction_ns_chi04_uR::synapse0x34b62c0() {
   return (neuron0x34989d0()*-0.0166929);
}

double NNfunction_ns_chi04_uR::synapse0x34b5d50() {
   return (neuron0x3498d10()*0.00233027);
}

double NNfunction_ns_chi04_uR::synapse0x34b5d90() {
   return (neuron0x3499270()*0.0117743);
}

double NNfunction_ns_chi04_uR::synapse0x34b6410() {
   return (neuron0x3499490()*0.00843863);
}

double NNfunction_ns_chi04_uR::synapse0x34b6450() {
   return (neuron0x34997d0()*0.012012);
}

double NNfunction_ns_chi04_uR::synapse0x34b6490() {
   return (neuron0x3499b10()*-0.00451141);
}

double NNfunction_ns_chi04_uR::synapse0x34b64d0() {
   return (neuron0x3499e50()*-0.00443211);
}

double NNfunction_ns_chi04_uR::synapse0x34b6510() {
   return (neuron0x349a190()*-0.00486685);
}

double NNfunction_ns_chi04_uR::synapse0x34b6550() {
   return (neuron0x349a4d0()*0.298797);
}

double NNfunction_ns_chi04_uR::synapse0x34b68d0() {
   return (neuron0x3495910()*-0.0621916);
}

double NNfunction_ns_chi04_uR::synapse0x34b6910() {
   return (neuron0x3495c50()*2.37146);
}

double NNfunction_ns_chi04_uR::synapse0x34b6950() {
   return (neuron0x3495f90()*-0.248295);
}

double NNfunction_ns_chi04_uR::synapse0x34b6990() {
   return (neuron0x34962d0()*0.118808);
}

double NNfunction_ns_chi04_uR::synapse0x34b69d0() {
   return (neuron0x3496610()*0.36583);
}

double NNfunction_ns_chi04_uR::synapse0x34b6a10() {
   return (neuron0x3496950()*-0.0857114);
}

double NNfunction_ns_chi04_uR::synapse0x34b6a50() {
   return (neuron0x3496c90()*-0.0234586);
}

double NNfunction_ns_chi04_uR::synapse0x34b6a90() {
   return (neuron0x3496fd0()*-0.172515);
}

double NNfunction_ns_chi04_uR::synapse0x34b6ad0() {
   return (neuron0x3497310()*0.783701);
}

double NNfunction_ns_chi04_uR::synapse0x34b6b10() {
   return (neuron0x3497650()*0.0566482);
}

double NNfunction_ns_chi04_uR::synapse0x34b6b50() {
   return (neuron0x3497990()*-0.177406);
}

double NNfunction_ns_chi04_uR::synapse0x34b6b90() {
   return (neuron0x3497cd0()*0.966642);
}

double NNfunction_ns_chi04_uR::synapse0x34b6bd0() {
   return (neuron0x3498010()*0.422754);
}

double NNfunction_ns_chi04_uR::synapse0x34b6c10() {
   return (neuron0x3498350()*0.11076);
}

double NNfunction_ns_chi04_uR::synapse0x34b6c50() {
   return (neuron0x3498690()*-1.20224);
}

double NNfunction_ns_chi04_uR::synapse0x34b6c90() {
   return (neuron0x34989d0()*-0.226195);
}

double NNfunction_ns_chi04_uR::synapse0x34b6720() {
   return (neuron0x3498d10()*0.224888);
}

double NNfunction_ns_chi04_uR::synapse0x34b6760() {
   return (neuron0x3499270()*0.488648);
}

double NNfunction_ns_chi04_uR::synapse0x34b6de0() {
   return (neuron0x3499490()*0.520835);
}

double NNfunction_ns_chi04_uR::synapse0x34b6e20() {
   return (neuron0x34997d0()*-0.392271);
}

double NNfunction_ns_chi04_uR::synapse0x34b6e60() {
   return (neuron0x3499b10()*0.220574);
}

double NNfunction_ns_chi04_uR::synapse0x34b6ea0() {
   return (neuron0x3499e50()*0.0993373);
}

double NNfunction_ns_chi04_uR::synapse0x34b6ee0() {
   return (neuron0x349a190()*-0.376834);
}

double NNfunction_ns_chi04_uR::synapse0x34b6f20() {
   return (neuron0x349a4d0()*0.111044);
}

double NNfunction_ns_chi04_uR::synapse0x349f9d0() {
   return (neuron0x3495910()*0.363663);
}

double NNfunction_ns_chi04_uR::synapse0x349fa10() {
   return (neuron0x3495c50()*0.201137);
}

double NNfunction_ns_chi04_uR::synapse0x349fa50() {
   return (neuron0x3495f90()*0.139596);
}

double NNfunction_ns_chi04_uR::synapse0x349fa90() {
   return (neuron0x34962d0()*0.066396);
}

double NNfunction_ns_chi04_uR::synapse0x349fad0() {
   return (neuron0x3496610()*0.542912);
}

double NNfunction_ns_chi04_uR::synapse0x349fb10() {
   return (neuron0x3496950()*-0.0355806);
}

double NNfunction_ns_chi04_uR::synapse0x349fb50() {
   return (neuron0x3496c90()*0.210925);
}

double NNfunction_ns_chi04_uR::synapse0x349fb90() {
   return (neuron0x3496fd0()*-0.555398);
}

double NNfunction_ns_chi04_uR::synapse0x34b76b0() {
   return (neuron0x3497310()*-0.400062);
}

double NNfunction_ns_chi04_uR::synapse0x34b76f0() {
   return (neuron0x3497650()*-0.0921004);
}

double NNfunction_ns_chi04_uR::synapse0x34b7730() {
   return (neuron0x3497990()*-0.2514);
}

double NNfunction_ns_chi04_uR::synapse0x34b7770() {
   return (neuron0x3497cd0()*-0.184669);
}

double NNfunction_ns_chi04_uR::synapse0x34b77b0() {
   return (neuron0x3498010()*-0.557918);
}

double NNfunction_ns_chi04_uR::synapse0x34b77f0() {
   return (neuron0x3498350()*-0.0109597);
}

double NNfunction_ns_chi04_uR::synapse0x34b7830() {
   return (neuron0x3498690()*0.266721);
}

double NNfunction_ns_chi04_uR::synapse0x34b7870() {
   return (neuron0x34989d0()*-0.812158);
}

double NNfunction_ns_chi04_uR::synapse0x34b70f0() {
   return (neuron0x3498d10()*-0.520317);
}

double NNfunction_ns_chi04_uR::synapse0x34b7130() {
   return (neuron0x3499270()*-0.0932037);
}

double NNfunction_ns_chi04_uR::synapse0x34b79c0() {
   return (neuron0x3499490()*0.158414);
}

double NNfunction_ns_chi04_uR::synapse0x34b7a00() {
   return (neuron0x34997d0()*-0.236157);
}

double NNfunction_ns_chi04_uR::synapse0x34b7a40() {
   return (neuron0x3499b10()*0.116964);
}

double NNfunction_ns_chi04_uR::synapse0x34b7a80() {
   return (neuron0x3499e50()*-0.110763);
}

double NNfunction_ns_chi04_uR::synapse0x34b7ac0() {
   return (neuron0x349a190()*0.253358);
}

double NNfunction_ns_chi04_uR::synapse0x34b7b00() {
   return (neuron0x349a4d0()*-0.23224);
}

double NNfunction_ns_chi04_uR::synapse0x34b7e80() {
   return (neuron0x3495910()*0.90024);
}

double NNfunction_ns_chi04_uR::synapse0x34b7ec0() {
   return (neuron0x3495c50()*3.63652);
}

double NNfunction_ns_chi04_uR::synapse0x34b7f00() {
   return (neuron0x3495f90()*-0.801694);
}

double NNfunction_ns_chi04_uR::synapse0x34b7f40() {
   return (neuron0x34962d0()*-0.334301);
}

double NNfunction_ns_chi04_uR::synapse0x34b7f80() {
   return (neuron0x3496610()*2.31078);
}

double NNfunction_ns_chi04_uR::synapse0x34b7fc0() {
   return (neuron0x3496950()*0.315708);
}

double NNfunction_ns_chi04_uR::synapse0x34b8000() {
   return (neuron0x3496c90()*0.316055);
}

double NNfunction_ns_chi04_uR::synapse0x34b8040() {
   return (neuron0x3496fd0()*0.731173);
}

double NNfunction_ns_chi04_uR::synapse0x34b8080() {
   return (neuron0x3497310()*0.952808);
}

double NNfunction_ns_chi04_uR::synapse0x34b80c0() {
   return (neuron0x3497650()*0.188053);
}

double NNfunction_ns_chi04_uR::synapse0x34b8100() {
   return (neuron0x3497990()*0.321101);
}

double NNfunction_ns_chi04_uR::synapse0x34b8140() {
   return (neuron0x3497cd0()*-0.145317);
}

double NNfunction_ns_chi04_uR::synapse0x34b8180() {
   return (neuron0x3498010()*-0.513468);
}

double NNfunction_ns_chi04_uR::synapse0x34b81c0() {
   return (neuron0x3498350()*0.0198905);
}

double NNfunction_ns_chi04_uR::synapse0x34b8200() {
   return (neuron0x3498690()*-0.747642);
}

double NNfunction_ns_chi04_uR::synapse0x34b8240() {
   return (neuron0x34989d0()*0.0861902);
}

double NNfunction_ns_chi04_uR::synapse0x34b7cd0() {
   return (neuron0x3498d10()*0.0177144);
}

double NNfunction_ns_chi04_uR::synapse0x34b7d10() {
   return (neuron0x3499270()*-0.497785);
}

double NNfunction_ns_chi04_uR::synapse0x34b8390() {
   return (neuron0x3499490()*0.30834);
}

double NNfunction_ns_chi04_uR::synapse0x34b83d0() {
   return (neuron0x34997d0()*-0.321486);
}

double NNfunction_ns_chi04_uR::synapse0x34b8410() {
   return (neuron0x3499b10()*0.174367);
}

double NNfunction_ns_chi04_uR::synapse0x34b8450() {
   return (neuron0x3499e50()*-1.16559);
}

double NNfunction_ns_chi04_uR::synapse0x34b8490() {
   return (neuron0x349a190()*0.100372);
}

double NNfunction_ns_chi04_uR::synapse0x34b84d0() {
   return (neuron0x349a4d0()*0.0215235);
}

double NNfunction_ns_chi04_uR::synapse0x34b8850() {
   return (neuron0x3495910()*-0.00887414);
}

double NNfunction_ns_chi04_uR::synapse0x34b8890() {
   return (neuron0x3495c50()*-2.38918);
}

double NNfunction_ns_chi04_uR::synapse0x34b88d0() {
   return (neuron0x3495f90()*0.102143);
}

double NNfunction_ns_chi04_uR::synapse0x34b8910() {
   return (neuron0x34962d0()*0.0050981);
}

double NNfunction_ns_chi04_uR::synapse0x34b8950() {
   return (neuron0x3496610()*0.0190863);
}

double NNfunction_ns_chi04_uR::synapse0x34b8990() {
   return (neuron0x3496950()*-0.0303091);
}

double NNfunction_ns_chi04_uR::synapse0x34b89d0() {
   return (neuron0x3496c90()*0.0039896);
}

double NNfunction_ns_chi04_uR::synapse0x34b8a10() {
   return (neuron0x3496fd0()*-0.0178169);
}

double NNfunction_ns_chi04_uR::synapse0x34b8a50() {
   return (neuron0x3497310()*0.0163794);
}

double NNfunction_ns_chi04_uR::synapse0x34b8a90() {
   return (neuron0x3497650()*-0.000636517);
}

double NNfunction_ns_chi04_uR::synapse0x34b8ad0() {
   return (neuron0x3497990()*-0.0104462);
}

double NNfunction_ns_chi04_uR::synapse0x34b8b10() {
   return (neuron0x3497cd0()*-0.0216691);
}

double NNfunction_ns_chi04_uR::synapse0x34b8b50() {
   return (neuron0x3498010()*-0.0050265);
}

double NNfunction_ns_chi04_uR::synapse0x34b8b90() {
   return (neuron0x3498350()*-0.0270552);
}

double NNfunction_ns_chi04_uR::synapse0x34b8bd0() {
   return (neuron0x3498690()*0.156209);
}

double NNfunction_ns_chi04_uR::synapse0x34b8c10() {
   return (neuron0x34989d0()*0.0303327);
}

double NNfunction_ns_chi04_uR::synapse0x34b86a0() {
   return (neuron0x3498d10()*0.0159172);
}

double NNfunction_ns_chi04_uR::synapse0x34b86e0() {
   return (neuron0x3499270()*-0.00384691);
}

double NNfunction_ns_chi04_uR::synapse0x34a9210() {
   return (neuron0x3499490()*0.000610652);
}

double NNfunction_ns_chi04_uR::synapse0x34a9250() {
   return (neuron0x34997d0()*-0.00437604);
}

double NNfunction_ns_chi04_uR::synapse0x34a9290() {
   return (neuron0x3499b10()*0.00732355);
}

double NNfunction_ns_chi04_uR::synapse0x34a92d0() {
   return (neuron0x3499e50()*-0.0113981);
}

double NNfunction_ns_chi04_uR::synapse0x34a9310() {
   return (neuron0x349a190()*0.0327781);
}

double NNfunction_ns_chi04_uR::synapse0x34a9350() {
   return (neuron0x349a4d0()*-0.983612);
}

double NNfunction_ns_chi04_uR::synapse0x34a96d0() {
   return (neuron0x3495910()*0.340519);
}

double NNfunction_ns_chi04_uR::synapse0x34a9710() {
   return (neuron0x3495c50()*2.47269);
}

double NNfunction_ns_chi04_uR::synapse0x34a9750() {
   return (neuron0x3495f90()*0.654989);
}

double NNfunction_ns_chi04_uR::synapse0x34a9790() {
   return (neuron0x34962d0()*0.185372);
}

double NNfunction_ns_chi04_uR::synapse0x34a97d0() {
   return (neuron0x3496610()*0.391816);
}

double NNfunction_ns_chi04_uR::synapse0x34a9810() {
   return (neuron0x3496950()*-0.326013);
}

double NNfunction_ns_chi04_uR::synapse0x34a9850() {
   return (neuron0x3496c90()*-0.0914563);
}

double NNfunction_ns_chi04_uR::synapse0x34a9890() {
   return (neuron0x3496fd0()*-0.586028);
}

double NNfunction_ns_chi04_uR::synapse0x34a98d0() {
   return (neuron0x3497310()*0.233666);
}

double NNfunction_ns_chi04_uR::synapse0x34a9910() {
   return (neuron0x3497650()*-0.00986925);
}

double NNfunction_ns_chi04_uR::synapse0x34a9950() {
   return (neuron0x3497990()*0.104771);
}

double NNfunction_ns_chi04_uR::synapse0x34a9990() {
   return (neuron0x3497cd0()*0.346368);
}

double NNfunction_ns_chi04_uR::synapse0x34a99d0() {
   return (neuron0x3498010()*0.206816);
}

double NNfunction_ns_chi04_uR::synapse0x34a9a10() {
   return (neuron0x3498350()*0.0894226);
}

double NNfunction_ns_chi04_uR::synapse0x34a9a50() {
   return (neuron0x3498690()*-1.76783);
}

double NNfunction_ns_chi04_uR::synapse0x34a9a90() {
   return (neuron0x34989d0()*-0.0136288);
}

double NNfunction_ns_chi04_uR::synapse0x34a9520() {
   return (neuron0x3498d10()*0.33796);
}

double NNfunction_ns_chi04_uR::synapse0x34a9560() {
   return (neuron0x3499270()*0.103949);
}

double NNfunction_ns_chi04_uR::synapse0x34a9be0() {
   return (neuron0x3499490()*0.24147);
}

double NNfunction_ns_chi04_uR::synapse0x34a9c20() {
   return (neuron0x34997d0()*-0.0883633);
}

double NNfunction_ns_chi04_uR::synapse0x34a9c60() {
   return (neuron0x3499b10()*-0.0243722);
}

double NNfunction_ns_chi04_uR::synapse0x34a9ca0() {
   return (neuron0x3499e50()*0.0175945);
}

double NNfunction_ns_chi04_uR::synapse0x34a9ce0() {
   return (neuron0x349a190()*-0.103919);
}

double NNfunction_ns_chi04_uR::synapse0x34a9d20() {
   return (neuron0x349a4d0()*-0.100444);
}

double NNfunction_ns_chi04_uR::synapse0x34aa0a0() {
   return (neuron0x3495910()*0.0814094);
}

double NNfunction_ns_chi04_uR::synapse0x34aa0e0() {
   return (neuron0x3495c50()*11.7419);
}

double NNfunction_ns_chi04_uR::synapse0x34aa120() {
   return (neuron0x3495f90()*0.0914709);
}

double NNfunction_ns_chi04_uR::synapse0x34aa160() {
   return (neuron0x34962d0()*0.00991285);
}

double NNfunction_ns_chi04_uR::synapse0x34aa1a0() {
   return (neuron0x3496610()*0.0209953);
}

double NNfunction_ns_chi04_uR::synapse0x34aa1e0() {
   return (neuron0x3496950()*-0.0446755);
}

double NNfunction_ns_chi04_uR::synapse0x34aa220() {
   return (neuron0x3496c90()*-0.0224345);
}

double NNfunction_ns_chi04_uR::synapse0x34aa260() {
   return (neuron0x3496fd0()*-0.0334251);
}

double NNfunction_ns_chi04_uR::synapse0x34aa2a0() {
   return (neuron0x3497310()*0.0301892);
}

double NNfunction_ns_chi04_uR::synapse0x34aa2e0() {
   return (neuron0x3497650()*-0.030983);
}

double NNfunction_ns_chi04_uR::synapse0x34aa320() {
   return (neuron0x3497990()*-0.00261807);
}

double NNfunction_ns_chi04_uR::synapse0x34aa360() {
   return (neuron0x3497cd0()*0.025534);
}

double NNfunction_ns_chi04_uR::synapse0x34aa3a0() {
   return (neuron0x3498010()*0.0103094);
}

double NNfunction_ns_chi04_uR::synapse0x34aa3e0() {
   return (neuron0x3498350()*-0.0147443);
}

double NNfunction_ns_chi04_uR::synapse0x34aa420() {
   return (neuron0x3498690()*-0.0206617);
}

double NNfunction_ns_chi04_uR::synapse0x34aa460() {
   return (neuron0x34989d0()*0.0345311);
}

double NNfunction_ns_chi04_uR::synapse0x34a9ef0() {
   return (neuron0x3498d10()*-0.0298803);
}

double NNfunction_ns_chi04_uR::synapse0x34a9f30() {
   return (neuron0x3499270()*0.00419072);
}

double NNfunction_ns_chi04_uR::synapse0x34aa5b0() {
   return (neuron0x3499490()*0.0172759);
}

double NNfunction_ns_chi04_uR::synapse0x34aa5f0() {
   return (neuron0x34997d0()*-0.00658748);
}

double NNfunction_ns_chi04_uR::synapse0x34aa630() {
   return (neuron0x3499b10()*0.022408);
}

double NNfunction_ns_chi04_uR::synapse0x34aa670() {
   return (neuron0x3499e50()*-0.0185398);
}

double NNfunction_ns_chi04_uR::synapse0x34aa6b0() {
   return (neuron0x349a190()*0.0630538);
}

double NNfunction_ns_chi04_uR::synapse0x34aa6f0() {
   return (neuron0x349a4d0()*3.82187);
}

double NNfunction_ns_chi04_uR::synapse0x34aaa70() {
   return (neuron0x3495910()*0.115692);
}

double NNfunction_ns_chi04_uR::synapse0x34aaab0() {
   return (neuron0x3495c50()*-1.12143);
}

double NNfunction_ns_chi04_uR::synapse0x34aaaf0() {
   return (neuron0x3495f90()*0.573544);
}

double NNfunction_ns_chi04_uR::synapse0x34aab30() {
   return (neuron0x34962d0()*-0.270836);
}

double NNfunction_ns_chi04_uR::synapse0x34aab70() {
   return (neuron0x3496610()*-1.16367);
}

double NNfunction_ns_chi04_uR::synapse0x34aabb0() {
   return (neuron0x3496950()*0.00399864);
}

double NNfunction_ns_chi04_uR::synapse0x34aabf0() {
   return (neuron0x3496c90()*-0.688784);
}

double NNfunction_ns_chi04_uR::synapse0x34aac30() {
   return (neuron0x3496fd0()*-0.426623);
}

double NNfunction_ns_chi04_uR::synapse0x34aac70() {
   return (neuron0x3497310()*0.0333923);
}

double NNfunction_ns_chi04_uR::synapse0x34aacb0() {
   return (neuron0x3497650()*-1.02192);
}

double NNfunction_ns_chi04_uR::synapse0x34aacf0() {
   return (neuron0x3497990()*0.240651);
}

double NNfunction_ns_chi04_uR::synapse0x34aad30() {
   return (neuron0x3497cd0()*-0.0423394);
}

double NNfunction_ns_chi04_uR::synapse0x34aad70() {
   return (neuron0x3498010()*-0.0843381);
}

double NNfunction_ns_chi04_uR::synapse0x34aadb0() {
   return (neuron0x3498350()*0.554356);
}

double NNfunction_ns_chi04_uR::synapse0x34aadf0() {
   return (neuron0x3498690()*-0.975525);
}

double NNfunction_ns_chi04_uR::synapse0x34aae30() {
   return (neuron0x34989d0()*0.569578);
}

double NNfunction_ns_chi04_uR::synapse0x34aa8c0() {
   return (neuron0x3498d10()*-0.756097);
}

double NNfunction_ns_chi04_uR::synapse0x34aa900() {
   return (neuron0x3499270()*-0.18297);
}

double NNfunction_ns_chi04_uR::synapse0x34aaf80() {
   return (neuron0x3499490()*-0.200774);
}

double NNfunction_ns_chi04_uR::synapse0x34aafc0() {
   return (neuron0x34997d0()*-0.263458);
}

double NNfunction_ns_chi04_uR::synapse0x34ab000() {
   return (neuron0x3499b10()*-0.00782972);
}

double NNfunction_ns_chi04_uR::synapse0x34ab040() {
   return (neuron0x3499e50()*-0.433741);
}

double NNfunction_ns_chi04_uR::synapse0x34ab080() {
   return (neuron0x349a190()*-0.0490905);
}

double NNfunction_ns_chi04_uR::synapse0x34ab0c0() {
   return (neuron0x349a4d0()*0.441119);
}

double NNfunction_ns_chi04_uR::synapse0x34bcf90() {
   return (neuron0x3495910()*0.283006);
}

double NNfunction_ns_chi04_uR::synapse0x34bcfd0() {
   return (neuron0x3495c50()*-1.54769);
}

double NNfunction_ns_chi04_uR::synapse0x34bd010() {
   return (neuron0x3495f90()*0.000136278);
}

double NNfunction_ns_chi04_uR::synapse0x34bd050() {
   return (neuron0x34962d0()*-0.0991899);
}

double NNfunction_ns_chi04_uR::synapse0x34bd090() {
   return (neuron0x3496610()*-0.462178);
}

double NNfunction_ns_chi04_uR::synapse0x34bd0d0() {
   return (neuron0x3496950()*0.33086);
}

double NNfunction_ns_chi04_uR::synapse0x34bd110() {
   return (neuron0x3496c90()*-0.652821);
}

double NNfunction_ns_chi04_uR::synapse0x34bd150() {
   return (neuron0x3496fd0()*0.718475);
}

double NNfunction_ns_chi04_uR::synapse0x34bd190() {
   return (neuron0x3497310()*0.126447);
}

double NNfunction_ns_chi04_uR::synapse0x34bd1d0() {
   return (neuron0x3497650()*-0.462781);
}

double NNfunction_ns_chi04_uR::synapse0x34bd210() {
   return (neuron0x3497990()*-1.14413);
}

double NNfunction_ns_chi04_uR::synapse0x34bd250() {
   return (neuron0x3497cd0()*-0.385504);
}

double NNfunction_ns_chi04_uR::synapse0x34bd290() {
   return (neuron0x3498010()*-0.114693);
}

double NNfunction_ns_chi04_uR::synapse0x34bd2d0() {
   return (neuron0x3498350()*-0.331141);
}

double NNfunction_ns_chi04_uR::synapse0x34bd310() {
   return (neuron0x3498690()*0.828967);
}

double NNfunction_ns_chi04_uR::synapse0x34bd350() {
   return (neuron0x34989d0()*0.274396);
}

double NNfunction_ns_chi04_uR::synapse0x34ab100() {
   return (neuron0x3498d10()*-0.266069);
}

double NNfunction_ns_chi04_uR::synapse0x34ab140() {
   return (neuron0x3499270()*-0.229777);
}

double NNfunction_ns_chi04_uR::synapse0x34bd4a0() {
   return (neuron0x3499490()*-0.664871);
}

double NNfunction_ns_chi04_uR::synapse0x34bd4e0() {
   return (neuron0x34997d0()*-0.761628);
}

double NNfunction_ns_chi04_uR::synapse0x34bd520() {
   return (neuron0x3499b10()*0.11992);
}

double NNfunction_ns_chi04_uR::synapse0x34bd560() {
   return (neuron0x3499e50()*0.310984);
}

double NNfunction_ns_chi04_uR::synapse0x34bd5a0() {
   return (neuron0x349a190()*-0.178968);
}

double NNfunction_ns_chi04_uR::synapse0x34bd5e0() {
   return (neuron0x349a4d0()*0.415682);
}

double NNfunction_ns_chi04_uR::synapse0x34bd960() {
   return (neuron0x3495910()*0.0495856);
}

double NNfunction_ns_chi04_uR::synapse0x34bd9a0() {
   return (neuron0x3495c50()*-2.10099);
}

double NNfunction_ns_chi04_uR::synapse0x34bd9e0() {
   return (neuron0x3495f90()*-0.497658);
}

double NNfunction_ns_chi04_uR::synapse0x34bda20() {
   return (neuron0x34962d0()*0.0802421);
}

double NNfunction_ns_chi04_uR::synapse0x34bda60() {
   return (neuron0x3496610()*0.0263358);
}

double NNfunction_ns_chi04_uR::synapse0x34bdaa0() {
   return (neuron0x3496950()*0.0917452);
}

double NNfunction_ns_chi04_uR::synapse0x34bdae0() {
   return (neuron0x3496c90()*0.0470712);
}

double NNfunction_ns_chi04_uR::synapse0x34bdb20() {
   return (neuron0x3496fd0()*-0.00624393);
}

double NNfunction_ns_chi04_uR::synapse0x34bdb60() {
   return (neuron0x3497310()*-0.00290195);
}

double NNfunction_ns_chi04_uR::synapse0x34bdba0() {
   return (neuron0x3497650()*-0.0314532);
}

double NNfunction_ns_chi04_uR::synapse0x34bdbe0() {
   return (neuron0x3497990()*-0.0452268);
}

double NNfunction_ns_chi04_uR::synapse0x34bdc20() {
   return (neuron0x3497cd0()*0.00627384);
}

double NNfunction_ns_chi04_uR::synapse0x34bdc60() {
   return (neuron0x3498010()*0.00847403);
}

double NNfunction_ns_chi04_uR::synapse0x34bdca0() {
   return (neuron0x3498350()*0.0313257);
}

double NNfunction_ns_chi04_uR::synapse0x34bdce0() {
   return (neuron0x3498690()*0.061929);
}

double NNfunction_ns_chi04_uR::synapse0x34bdd20() {
   return (neuron0x34989d0()*0.0439303);
}

double NNfunction_ns_chi04_uR::synapse0x34bd7b0() {
   return (neuron0x3498d10()*-0.0127944);
}

double NNfunction_ns_chi04_uR::synapse0x34bd7f0() {
   return (neuron0x3499270()*0.034181);
}

double NNfunction_ns_chi04_uR::synapse0x34bde70() {
   return (neuron0x3499490()*-0.0229468);
}

double NNfunction_ns_chi04_uR::synapse0x34bdeb0() {
   return (neuron0x34997d0()*-0.0103044);
}

double NNfunction_ns_chi04_uR::synapse0x34bdef0() {
   return (neuron0x3499b10()*-0.0365478);
}

double NNfunction_ns_chi04_uR::synapse0x34bdf30() {
   return (neuron0x3499e50()*0.0381832);
}

double NNfunction_ns_chi04_uR::synapse0x34bdf70() {
   return (neuron0x349a190()*-0.019949);
}

double NNfunction_ns_chi04_uR::synapse0x34bdfb0() {
   return (neuron0x349a4d0()*1.93318);
}

double NNfunction_ns_chi04_uR::synapse0x34be330() {
   return (neuron0x3495910()*-0.0284783);
}

double NNfunction_ns_chi04_uR::synapse0x34be370() {
   return (neuron0x3495c50()*-0.00415979);
}

double NNfunction_ns_chi04_uR::synapse0x34be3b0() {
   return (neuron0x3495f90()*0.0883924);
}

double NNfunction_ns_chi04_uR::synapse0x34be3f0() {
   return (neuron0x34962d0()*0.0394292);
}

double NNfunction_ns_chi04_uR::synapse0x34be430() {
   return (neuron0x3496610()*0.0769996);
}

double NNfunction_ns_chi04_uR::synapse0x34be470() {
   return (neuron0x3496950()*0.157389);
}

double NNfunction_ns_chi04_uR::synapse0x34be4b0() {
   return (neuron0x3496c90()*0.0660938);
}

double NNfunction_ns_chi04_uR::synapse0x34be4f0() {
   return (neuron0x3496fd0()*0.193646);
}

double NNfunction_ns_chi04_uR::synapse0x34be530() {
   return (neuron0x3497310()*-0.023603);
}

double NNfunction_ns_chi04_uR::synapse0x34be570() {
   return (neuron0x3497650()*-0.0617962);
}

double NNfunction_ns_chi04_uR::synapse0x34be5b0() {
   return (neuron0x3497990()*-0.0491438);
}

double NNfunction_ns_chi04_uR::synapse0x34be5f0() {
   return (neuron0x3497cd0()*-0.0731023);
}

double NNfunction_ns_chi04_uR::synapse0x34be630() {
   return (neuron0x3498010()*-0.101321);
}

double NNfunction_ns_chi04_uR::synapse0x34be670() {
   return (neuron0x3498350()*-0.112518);
}

double NNfunction_ns_chi04_uR::synapse0x34be6b0() {
   return (neuron0x3498690()*-2.92148);
}

double NNfunction_ns_chi04_uR::synapse0x34be6f0() {
   return (neuron0x34989d0()*0.0937303);
}

double NNfunction_ns_chi04_uR::synapse0x34be180() {
   return (neuron0x3498d10()*-0.0188864);
}

double NNfunction_ns_chi04_uR::synapse0x34be1c0() {
   return (neuron0x3499270()*-0.0603495);
}

double NNfunction_ns_chi04_uR::synapse0x34be840() {
   return (neuron0x3499490()*0.0305522);
}

double NNfunction_ns_chi04_uR::synapse0x34be880() {
   return (neuron0x34997d0()*-0.0727111);
}

double NNfunction_ns_chi04_uR::synapse0x34be8c0() {
   return (neuron0x3499b10()*0.0267346);
}

double NNfunction_ns_chi04_uR::synapse0x34be900() {
   return (neuron0x3499e50()*-0.0388999);
}

double NNfunction_ns_chi04_uR::synapse0x34be940() {
   return (neuron0x349a190()*0.127856);
}

double NNfunction_ns_chi04_uR::synapse0x34be980() {
   return (neuron0x349a4d0()*0.208969);
}

double NNfunction_ns_chi04_uR::synapse0x34bed00() {
   return (neuron0x3495910()*-0.0105193);
}

double NNfunction_ns_chi04_uR::synapse0x34bed40() {
   return (neuron0x3495c50()*2.93987);
}

double NNfunction_ns_chi04_uR::synapse0x34bed80() {
   return (neuron0x3495f90()*1.28253);
}

double NNfunction_ns_chi04_uR::synapse0x34bedc0() {
   return (neuron0x34962d0()*-0.0647435);
}

double NNfunction_ns_chi04_uR::synapse0x34bee00() {
   return (neuron0x3496610()*0.000852065);
}

double NNfunction_ns_chi04_uR::synapse0x34bee40() {
   return (neuron0x3496950()*-0.0402197);
}

double NNfunction_ns_chi04_uR::synapse0x34bee80() {
   return (neuron0x3496c90()*-0.0113609);
}

double NNfunction_ns_chi04_uR::synapse0x34beec0() {
   return (neuron0x3496fd0()*-0.00145784);
}

double NNfunction_ns_chi04_uR::synapse0x34bef00() {
   return (neuron0x3497310()*0.00153371);
}

double NNfunction_ns_chi04_uR::synapse0x34bef40() {
   return (neuron0x3497650()*0.00765084);
}

double NNfunction_ns_chi04_uR::synapse0x34bef80() {
   return (neuron0x3497990()*-0.00342872);
}

double NNfunction_ns_chi04_uR::synapse0x34befc0() {
   return (neuron0x3497cd0()*-0.0288805);
}

double NNfunction_ns_chi04_uR::synapse0x34bf000() {
   return (neuron0x3498010()*-0.0585047);
}

double NNfunction_ns_chi04_uR::synapse0x34bf040() {
   return (neuron0x3498350()*-0.0596945);
}

double NNfunction_ns_chi04_uR::synapse0x34bf080() {
   return (neuron0x3498690()*0.179557);
}

double NNfunction_ns_chi04_uR::synapse0x34bf0c0() {
   return (neuron0x34989d0()*-0.0243011);
}

double NNfunction_ns_chi04_uR::synapse0x34beb50() {
   return (neuron0x3498d10()*0.0300022);
}

double NNfunction_ns_chi04_uR::synapse0x34beb90() {
   return (neuron0x3499270()*-0.0356086);
}

double NNfunction_ns_chi04_uR::synapse0x34bf210() {
   return (neuron0x3499490()*-0.00880246);
}

double NNfunction_ns_chi04_uR::synapse0x34bf250() {
   return (neuron0x34997d0()*-0.0295488);
}

double NNfunction_ns_chi04_uR::synapse0x34bf290() {
   return (neuron0x3499b10()*-0.0115095);
}

double NNfunction_ns_chi04_uR::synapse0x34bf2d0() {
   return (neuron0x3499e50()*-0.0401547);
}

double NNfunction_ns_chi04_uR::synapse0x34bf310() {
   return (neuron0x349a190()*0.00613651);
}

double NNfunction_ns_chi04_uR::synapse0x34bf350() {
   return (neuron0x349a4d0()*-2.57156);
}

double NNfunction_ns_chi04_uR::synapse0x325f260() {
   return (neuron0x349a940()*-0.635434);
}

double NNfunction_ns_chi04_uR::synapse0x325f2a0() {
   return (neuron0x349b290()*0.605957);
}

double NNfunction_ns_chi04_uR::synapse0x349ce00() {
   return (neuron0x349bd70()*0.240321);
}

double NNfunction_ns_chi04_uR::synapse0x349ce40() {
   return (neuron0x349b810()*-1.4458);
}

double NNfunction_ns_chi04_uR::synapse0x349d7d0() {
   return (neuron0x349cb50()*1.62677);
}

double NNfunction_ns_chi04_uR::synapse0x349d810() {
   return (neuron0x349d520()*-3.18135);
}

double NNfunction_ns_chi04_uR::synapse0x349e5a0() {
   return (neuron0x349e2f0()*1.36914);
}

double NNfunction_ns_chi04_uR::synapse0x349e5e0() {
   return (neuron0x349ecc0()*-0.490108);
}

double NNfunction_ns_chi04_uR::synapse0x349ef70() {
   return (neuron0x349f690()*2.38126);
}

double NNfunction_ns_chi04_uR::synapse0x349efb0() {
   return (neuron0x34a0170()*0.269435);
}

double NNfunction_ns_chi04_uR::synapse0x349f940() {
   return (neuron0x34a0b40()*1.8622);
}

double NNfunction_ns_chi04_uR::synapse0x349f980() {
   return (neuron0x349dc20()*0.74757);
}

double NNfunction_ns_chi04_uR::synapse0x34a0420() {
   return (neuron0x34a26f0()*-0.562369);
}

double NNfunction_ns_chi04_uR::synapse0x34a0460() {
   return (neuron0x34a30c0()*-0.286096);
}

double NNfunction_ns_chi04_uR::synapse0x34a0df0() {
   return (neuron0x34a3a90()*-0.363944);
}

double NNfunction_ns_chi04_uR::synapse0x34a0e30() {
   return (neuron0x34a4460()*0.244311);
}

double NNfunction_ns_chi04_uR::synapse0x349ded0() {
   return (neuron0x34a6270()*-2.62286);
}

double NNfunction_ns_chi04_uR::synapse0x349df10() {
   return (neuron0x34a6550()*0.100868);
}

double NNfunction_ns_chi04_uR::synapse0x34a29a0() {
   return (neuron0x34a6f20()*-2.49707);
}

double NNfunction_ns_chi04_uR::synapse0x34a29e0() {
   return (neuron0x34a78f0()*1.62397);
}

double NNfunction_ns_chi04_uR::synapse0x34a3370() {
   return (neuron0x34a82c0()*-0.488371);
}

double NNfunction_ns_chi04_uR::synapse0x34a33b0() {
   return (neuron0x34a8c90()*-1.12785);
}

double NNfunction_ns_chi04_uR::synapse0x34a3d40() {
   return (neuron0x34a17e0()*0.217903);
}

double NNfunction_ns_chi04_uR::synapse0x34a3d80() {
   return (neuron0x34a21b0()*-0.233825);
}

double NNfunction_ns_chi04_uR::synapse0x34a4710() {
   return (neuron0x34aba20()*-2.12378);
}

double NNfunction_ns_chi04_uR::synapse0x34a4750() {
   return (neuron0x34ac3f0()*-1.86027);
}

double NNfunction_ns_chi04_uR::synapse0x34988b0() {
   return (neuron0x34acdc0()*-0.217812);
}

double NNfunction_ns_chi04_uR::synapse0x34988f0() {
   return (neuron0x34ad790()*-0.657418);
}

double NNfunction_ns_chi04_uR::synapse0x34a6800() {
   return (neuron0x34ae160()*0.20919);
}

double NNfunction_ns_chi04_uR::synapse0x34a6840() {
   return (neuron0x34aeb30()*0.217476);
}

double NNfunction_ns_chi04_uR::synapse0x34a71d0() {
   return (neuron0x34af500()*0.394628);
}

double NNfunction_ns_chi04_uR::synapse0x34a7210() {
   return (neuron0x34afed0()*0.271475);
}

double NNfunction_ns_chi04_uR::synapse0x34a7ba0() {
   return (neuron0x34a5f60()*0.477735);
}

double NNfunction_ns_chi04_uR::synapse0x34a7be0() {
   return (neuron0x34b2ab0()*-0.135361);
}

double NNfunction_ns_chi04_uR::synapse0x34a8570() {
   return (neuron0x34b3480()*-1.16242);
}

double NNfunction_ns_chi04_uR::synapse0x34a85b0() {
   return (neuron0x34b3e50()*1.13508);
}

double NNfunction_ns_chi04_uR::synapse0x34a8f40() {
   return (neuron0x34b4820()*1.74821);
}

double NNfunction_ns_chi04_uR::synapse0x34a8f80() {
   return (neuron0x34b51f0()*0.195931);
}

double NNfunction_ns_chi04_uR::synapse0x34a1a90() {
   return (neuron0x34b5bc0()*-2.25856);
}

double NNfunction_ns_chi04_uR::synapse0x34a1ad0() {
   return (neuron0x34b6590()*0.349408);
}

double NNfunction_ns_chi04_uR::synapse0x34ab340() {
   return (neuron0x34b6f60()*0.361577);
}

double NNfunction_ns_chi04_uR::synapse0x34ab380() {
   return (neuron0x34b7b40()*-0.104923);
}

double NNfunction_ns_chi04_uR::synapse0x34abcd0() {
   return (neuron0x34b8510()*2.79878);
}

double NNfunction_ns_chi04_uR::synapse0x34abd10() {
   return (neuron0x34a9390()*-0.376596);
}

double NNfunction_ns_chi04_uR::synapse0x34ac6a0() {
   return (neuron0x34a9d60()*0.479789);
}

double NNfunction_ns_chi04_uR::synapse0x34ac6e0() {
   return (neuron0x34aa730()*-0.257981);
}

double NNfunction_ns_chi04_uR::synapse0x34ad070() {
   return (neuron0x34bcd70()*-0.256704);
}

double NNfunction_ns_chi04_uR::synapse0x34ad0b0() {
   return (neuron0x34bd620()*2.14391);
}

double NNfunction_ns_chi04_uR::synapse0x34ada40() {
   return (neuron0x34bdff0()*-0.391462);
}

double NNfunction_ns_chi04_uR::synapse0x34ada80() {
   return (neuron0x34be9c0()*2.08933);
}

double NNfunction_ns_chi04_uR::synapse0x34b0180() {
   return (neuron0x349a940()*1.19378);
}

double NNfunction_ns_chi04_uR::synapse0x34b01c0() {
   return (neuron0x349b290()*0.278872);
}

double NNfunction_ns_chi04_uR::synapse0x34a5740() {
   return (neuron0x349bd70()*0.0852547);
}

double NNfunction_ns_chi04_uR::synapse0x34a5780() {
   return (neuron0x349b810()*0.441655);
}

double NNfunction_ns_chi04_uR::synapse0x34b2d60() {
   return (neuron0x349cb50()*0.16716);
}

double NNfunction_ns_chi04_uR::synapse0x34b2da0() {
   return (neuron0x349d520()*-0.543875);
}

double NNfunction_ns_chi04_uR::synapse0x34b3730() {
   return (neuron0x349e2f0()*-0.00879557);
}

double NNfunction_ns_chi04_uR::synapse0x34b3770() {
   return (neuron0x349ecc0()*-0.000389993);
}

double NNfunction_ns_chi04_uR::synapse0x34b4100() {
   return (neuron0x349f690()*1.64027);
}

double NNfunction_ns_chi04_uR::synapse0x34b4140() {
   return (neuron0x34a0170()*0.742096);
}

double NNfunction_ns_chi04_uR::synapse0x34b4ad0() {
   return (neuron0x34a0b40()*0.298978);
}

double NNfunction_ns_chi04_uR::synapse0x34b4b10() {
   return (neuron0x349dc20()*0.540281);
}

double NNfunction_ns_chi04_uR::synapse0x34b54a0() {
   return (neuron0x34a26f0()*-0.277691);
}

double NNfunction_ns_chi04_uR::synapse0x34b54e0() {
   return (neuron0x34a30c0()*0.207467);
}

double NNfunction_ns_chi04_uR::synapse0x34b5e70() {
   return (neuron0x34a3a90()*0.653327);
}

double NNfunction_ns_chi04_uR::synapse0x34b5eb0() {
   return (neuron0x34a4460()*0.381955);
}

double NNfunction_ns_chi04_uR::synapse0x34b6840() {
   return (neuron0x34a6270()*0.0458514);
}

double NNfunction_ns_chi04_uR::synapse0x34b6880() {
   return (neuron0x34a6550()*0.490906);
}

double NNfunction_ns_chi04_uR::synapse0x34b7210() {
   return (neuron0x34a6f20()*1.08692);
}

double NNfunction_ns_chi04_uR::synapse0x34b7250() {
   return (neuron0x34a78f0()*0.567168);
}

double NNfunction_ns_chi04_uR::synapse0x34b7df0() {
   return (neuron0x34a82c0()*0.469202);
}

double NNfunction_ns_chi04_uR::synapse0x34b7e30() {
   return (neuron0x34a8c90()*-0.579484);
}

double NNfunction_ns_chi04_uR::synapse0x34b87c0() {
   return (neuron0x34a17e0()*-0.215232);
}

double NNfunction_ns_chi04_uR::synapse0x34b8800() {
   return (neuron0x34a21b0()*1.21983);
}

double NNfunction_ns_chi04_uR::synapse0x34a9640() {
   return (neuron0x34aba20()*0.499297);
}

double NNfunction_ns_chi04_uR::synapse0x34a9680() {
   return (neuron0x34ac3f0()*0.199355);
}

double NNfunction_ns_chi04_uR::synapse0x34aa010() {
   return (neuron0x34acdc0()*0.979891);
}

double NNfunction_ns_chi04_uR::synapse0x34aa050() {
   return (neuron0x34ad790()*2.36347);
}

double NNfunction_ns_chi04_uR::synapse0x34aa9e0() {
   return (neuron0x34ae160()*0.980341);
}

double NNfunction_ns_chi04_uR::synapse0x34aaa20() {
   return (neuron0x34aeb30()*0.485644);
}

double NNfunction_ns_chi04_uR::synapse0x34bcf00() {
   return (neuron0x34af500()*0.684654);
}

double NNfunction_ns_chi04_uR::synapse0x34bcf40() {
   return (neuron0x34afed0()*-0.774518);
}

double NNfunction_ns_chi04_uR::synapse0x34bd8d0() {
   return (neuron0x34a5f60()*0.612731);
}

double NNfunction_ns_chi04_uR::synapse0x34bd910() {
   return (neuron0x34b2ab0()*0.352863);
}

double NNfunction_ns_chi04_uR::synapse0x34be2a0() {
   return (neuron0x34b3480()*0.448696);
}

double NNfunction_ns_chi04_uR::synapse0x34be2e0() {
   return (neuron0x34b3e50()*1.67073);
}

double NNfunction_ns_chi04_uR::synapse0x34bec70() {
   return (neuron0x34b4820()*0.389846);
}

double NNfunction_ns_chi04_uR::synapse0x34becb0() {
   return (neuron0x34b51f0()*0.587554);
}

double NNfunction_ns_chi04_uR::synapse0x349ab60() {
   return (neuron0x34b5bc0()*-0.330287);
}

double NNfunction_ns_chi04_uR::synapse0x349aba0() {
   return (neuron0x34b6590()*-0.27036);
}

double NNfunction_ns_chi04_uR::synapse0x34ae410() {
   return (neuron0x34b6f60()*1.05892);
}

double NNfunction_ns_chi04_uR::synapse0x34ae450() {
   return (neuron0x34b7b40()*-0.102616);
}

double NNfunction_ns_chi04_uR::synapse0x34bf390() {
   return (neuron0x34b8510()*0.989452);
}

double NNfunction_ns_chi04_uR::synapse0x34bf3d0() {
   return (neuron0x34a9390()*-0.324309);
}

double NNfunction_ns_chi04_uR::synapse0x34bf410() {
   return (neuron0x34a9d60()*0.53042);
}

double NNfunction_ns_chi04_uR::synapse0x34bf450() {
   return (neuron0x34aa730()*-0.0210283);
}

double NNfunction_ns_chi04_uR::synapse0x34c6300() {
   return (neuron0x34bcd70()*0.99946);
}

double NNfunction_ns_chi04_uR::synapse0x34c6340() {
   return (neuron0x34bd620()*1.15608);
}

double NNfunction_ns_chi04_uR::synapse0x34c6380() {
   return (neuron0x34bdff0()*0.0102127);
}

double NNfunction_ns_chi04_uR::synapse0x34c63c0() {
   return (neuron0x34be9c0()*0.647014);
}

double NNfunction_ns_chi04_uR::synapse0x34c6740() {
   return (neuron0x349a940()*1.13605);
}

double NNfunction_ns_chi04_uR::synapse0x34c6780() {
   return (neuron0x349b290()*-0.00172401);
}

double NNfunction_ns_chi04_uR::synapse0x34c67c0() {
   return (neuron0x349bd70()*-0.347805);
}

double NNfunction_ns_chi04_uR::synapse0x34c6800() {
   return (neuron0x349b810()*-0.262381);
}

double NNfunction_ns_chi04_uR::synapse0x34c6840() {
   return (neuron0x349cb50()*0.186683);
}

double NNfunction_ns_chi04_uR::synapse0x34c6880() {
   return (neuron0x349d520()*0.560872);
}

double NNfunction_ns_chi04_uR::synapse0x34c68c0() {
   return (neuron0x349e2f0()*0.119904);
}

double NNfunction_ns_chi04_uR::synapse0x34c6900() {
   return (neuron0x349ecc0()*0.717476);
}

double NNfunction_ns_chi04_uR::synapse0x34c6940() {
   return (neuron0x349f690()*0.840751);
}

double NNfunction_ns_chi04_uR::synapse0x34c6980() {
   return (neuron0x34a0170()*-0.600638);
}

double NNfunction_ns_chi04_uR::synapse0x34c69c0() {
   return (neuron0x34a0b40()*0.115627);
}

double NNfunction_ns_chi04_uR::synapse0x34c6a00() {
   return (neuron0x349dc20()*-0.780765);
}

double NNfunction_ns_chi04_uR::synapse0x34c6a40() {
   return (neuron0x34a26f0()*0.384045);
}

double NNfunction_ns_chi04_uR::synapse0x34c6a80() {
   return (neuron0x34a30c0()*0.159035);
}

double NNfunction_ns_chi04_uR::synapse0x34c6ac0() {
   return (neuron0x34a3a90()*0.66904);
}

double NNfunction_ns_chi04_uR::synapse0x34c6b00() {
   return (neuron0x34a4460()*-0.489909);
}

double NNfunction_ns_chi04_uR::synapse0x34c6590() {
   return (neuron0x34a6270()*-0.564955);
}

double NNfunction_ns_chi04_uR::synapse0x34c65d0() {
   return (neuron0x34a6550()*-0.434726);
}

double NNfunction_ns_chi04_uR::synapse0x34c6c50() {
   return (neuron0x34a6f20()*-0.799599);
}

double NNfunction_ns_chi04_uR::synapse0x34c6c90() {
   return (neuron0x34a78f0()*-0.152617);
}

double NNfunction_ns_chi04_uR::synapse0x34c6cd0() {
   return (neuron0x34a82c0()*0.290554);
}

double NNfunction_ns_chi04_uR::synapse0x34c6d10() {
   return (neuron0x34a8c90()*0.45385);
}

double NNfunction_ns_chi04_uR::synapse0x34c6d50() {
   return (neuron0x34a17e0()*-0.375973);
}

double NNfunction_ns_chi04_uR::synapse0x34c6d90() {
   return (neuron0x34a21b0()*1.32281);
}

double NNfunction_ns_chi04_uR::synapse0x34c6dd0() {
   return (neuron0x34aba20()*1.38603);
}

double NNfunction_ns_chi04_uR::synapse0x34c6e10() {
   return (neuron0x34ac3f0()*-0.352264);
}

double NNfunction_ns_chi04_uR::synapse0x34c6e50() {
   return (neuron0x34acdc0()*0.622081);
}

double NNfunction_ns_chi04_uR::synapse0x34c6e90() {
   return (neuron0x34ad790()*-0.146943);
}

double NNfunction_ns_chi04_uR::synapse0x34c6ed0() {
   return (neuron0x34ae160()*-0.902293);
}

double NNfunction_ns_chi04_uR::synapse0x34c6f10() {
   return (neuron0x34aeb30()*-0.305512);
}

double NNfunction_ns_chi04_uR::synapse0x34c6f50() {
   return (neuron0x34af500()*-0.610808);
}

double NNfunction_ns_chi04_uR::synapse0x34c6f90() {
   return (neuron0x34afed0()*-0.827496);
}

double NNfunction_ns_chi04_uR::synapse0x34c6b40() {
   return (neuron0x34a5f60()*-0.634831);
}

double NNfunction_ns_chi04_uR::synapse0x34c6b80() {
   return (neuron0x34b2ab0()*0.586269);
}

double NNfunction_ns_chi04_uR::synapse0x34c6bc0() {
   return (neuron0x34b3480()*0.131619);
}

double NNfunction_ns_chi04_uR::synapse0x34c6c00() {
   return (neuron0x34b3e50()*-0.251838);
}

double NNfunction_ns_chi04_uR::synapse0x34c71e0() {
   return (neuron0x34b4820()*-3.36858);
}

double NNfunction_ns_chi04_uR::synapse0x34c7220() {
   return (neuron0x34b51f0()*-0.505428);
}

double NNfunction_ns_chi04_uR::synapse0x34c7260() {
   return (neuron0x34b5bc0()*0.689722);
}

double NNfunction_ns_chi04_uR::synapse0x34c72a0() {
   return (neuron0x34b6590()*0.0669653);
}

double NNfunction_ns_chi04_uR::synapse0x34c72e0() {
   return (neuron0x34b6f60()*-1.05619);
}

double NNfunction_ns_chi04_uR::synapse0x34c7320() {
   return (neuron0x34b7b40()*0.356323);
}

double NNfunction_ns_chi04_uR::synapse0x34c7360() {
   return (neuron0x34b8510()*0.242064);
}

double NNfunction_ns_chi04_uR::synapse0x34c73a0() {
   return (neuron0x34a9390()*-0.440873);
}

double NNfunction_ns_chi04_uR::synapse0x34c73e0() {
   return (neuron0x34a9d60()*-4.56815);
}

double NNfunction_ns_chi04_uR::synapse0x34c7420() {
   return (neuron0x34aa730()*0.662669);
}

double NNfunction_ns_chi04_uR::synapse0x34c7460() {
   return (neuron0x34bcd70()*0.314999);
}

double NNfunction_ns_chi04_uR::synapse0x34c74a0() {
   return (neuron0x34bd620()*0.650789);
}

double NNfunction_ns_chi04_uR::synapse0x34c74e0() {
   return (neuron0x34bdff0()*-0.0705744);
}

double NNfunction_ns_chi04_uR::synapse0x34c7520() {
   return (neuron0x34be9c0()*0.194309);
}

double NNfunction_ns_chi04_uR::synapse0x34c78a0() {
   return (neuron0x349a940()*0.666068);
}

double NNfunction_ns_chi04_uR::synapse0x34c78e0() {
   return (neuron0x349b290()*-1.64538);
}

double NNfunction_ns_chi04_uR::synapse0x34c7920() {
   return (neuron0x349bd70()*-0.157873);
}

double NNfunction_ns_chi04_uR::synapse0x34c7960() {
   return (neuron0x349b810()*0.34259);
}

double NNfunction_ns_chi04_uR::synapse0x34c79a0() {
   return (neuron0x349cb50()*-1.53053);
}

double NNfunction_ns_chi04_uR::synapse0x34c79e0() {
   return (neuron0x349d520()*-0.762337);
}

double NNfunction_ns_chi04_uR::synapse0x34c7a20() {
   return (neuron0x349e2f0()*0.269517);
}

double NNfunction_ns_chi04_uR::synapse0x34c7a60() {
   return (neuron0x349ecc0()*0.298224);
}

double NNfunction_ns_chi04_uR::synapse0x34c7aa0() {
   return (neuron0x349f690()*-0.594733);
}

double NNfunction_ns_chi04_uR::synapse0x34c7ae0() {
   return (neuron0x34a0170()*-0.264577);
}

double NNfunction_ns_chi04_uR::synapse0x34c7b20() {
   return (neuron0x34a0b40()*-0.768589);
}

double NNfunction_ns_chi04_uR::synapse0x34c7b60() {
   return (neuron0x349dc20()*0.652667);
}

double NNfunction_ns_chi04_uR::synapse0x34c7ba0() {
   return (neuron0x34a26f0()*-0.0305262);
}

double NNfunction_ns_chi04_uR::synapse0x34c7be0() {
   return (neuron0x34a30c0()*-0.688572);
}

double NNfunction_ns_chi04_uR::synapse0x34c7c20() {
   return (neuron0x34a3a90()*1.37435);
}

double NNfunction_ns_chi04_uR::synapse0x34c7c60() {
   return (neuron0x34a4460()*-0.0996875);
}

double NNfunction_ns_chi04_uR::synapse0x34c76f0() {
   return (neuron0x34a6270()*0.830426);
}

double NNfunction_ns_chi04_uR::synapse0x34c7730() {
   return (neuron0x34a6550()*-0.237995);
}

double NNfunction_ns_chi04_uR::synapse0x34c7db0() {
   return (neuron0x34a6f20()*0.786621);
}

double NNfunction_ns_chi04_uR::synapse0x34c7df0() {
   return (neuron0x34a78f0()*-0.8571);
}

double NNfunction_ns_chi04_uR::synapse0x34c7e30() {
   return (neuron0x34a82c0()*-0.175794);
}

double NNfunction_ns_chi04_uR::synapse0x34c7e70() {
   return (neuron0x34a8c90()*0.532865);
}

double NNfunction_ns_chi04_uR::synapse0x34c7eb0() {
   return (neuron0x34a17e0()*-0.339945);
}

double NNfunction_ns_chi04_uR::synapse0x34c7ef0() {
   return (neuron0x34a21b0()*4.1563);
}

double NNfunction_ns_chi04_uR::synapse0x34c7f30() {
   return (neuron0x34aba20()*-1.38569);
}

double NNfunction_ns_chi04_uR::synapse0x34c7f70() {
   return (neuron0x34ac3f0()*-1.26246);
}

double NNfunction_ns_chi04_uR::synapse0x34c7fb0() {
   return (neuron0x34acdc0()*0.147332);
}

double NNfunction_ns_chi04_uR::synapse0x34c7ff0() {
   return (neuron0x34ad790()*-1.07782);
}

double NNfunction_ns_chi04_uR::synapse0x34c8030() {
   return (neuron0x34ae160()*-0.162467);
}

double NNfunction_ns_chi04_uR::synapse0x34c8070() {
   return (neuron0x34aeb30()*0.200813);
}

double NNfunction_ns_chi04_uR::synapse0x34c80b0() {
   return (neuron0x34af500()*-0.488269);
}

double NNfunction_ns_chi04_uR::synapse0x34c80f0() {
   return (neuron0x34afed0()*-0.346233);
}

double NNfunction_ns_chi04_uR::synapse0x34c7ca0() {
   return (neuron0x34a5f60()*0.0362434);
}

double NNfunction_ns_chi04_uR::synapse0x34c7ce0() {
   return (neuron0x34b2ab0()*0.413535);
}

double NNfunction_ns_chi04_uR::synapse0x34c7d20() {
   return (neuron0x34b3480()*-0.228742);
}

double NNfunction_ns_chi04_uR::synapse0x34c7d60() {
   return (neuron0x34b3e50()*-0.209614);
}

double NNfunction_ns_chi04_uR::synapse0x34c8340() {
   return (neuron0x34b4820()*2.32859);
}

double NNfunction_ns_chi04_uR::synapse0x34c8380() {
   return (neuron0x34b51f0()*-0.214894);
}

double NNfunction_ns_chi04_uR::synapse0x34c83c0() {
   return (neuron0x34b5bc0()*0.130207);
}

double NNfunction_ns_chi04_uR::synapse0x34c8400() {
   return (neuron0x34b6590()*-0.581169);
}

double NNfunction_ns_chi04_uR::synapse0x34c8440() {
   return (neuron0x34b6f60()*-0.953854);
}

double NNfunction_ns_chi04_uR::synapse0x34c8480() {
   return (neuron0x34b7b40()*0.1313);
}

double NNfunction_ns_chi04_uR::synapse0x34c84c0() {
   return (neuron0x34b8510()*1.2712);
}

double NNfunction_ns_chi04_uR::synapse0x34c8500() {
   return (neuron0x34a9390()*0.448437);
}

double NNfunction_ns_chi04_uR::synapse0x34c8540() {
   return (neuron0x34a9d60()*-2.93922);
}

double NNfunction_ns_chi04_uR::synapse0x34c8580() {
   return (neuron0x34aa730()*0.200255);
}

double NNfunction_ns_chi04_uR::synapse0x34c85c0() {
   return (neuron0x34bcd70()*0.360482);
}

double NNfunction_ns_chi04_uR::synapse0x34c8600() {
   return (neuron0x34bd620()*0.598838);
}

double NNfunction_ns_chi04_uR::synapse0x34c8640() {
   return (neuron0x34bdff0()*-0.471742);
}

double NNfunction_ns_chi04_uR::synapse0x34c8680() {
   return (neuron0x34be9c0()*-0.876907);
}

double NNfunction_ns_chi04_uR::synapse0x34c8a00() {
   return (neuron0x349a940()*-2.64416);
}

double NNfunction_ns_chi04_uR::synapse0x34c8a40() {
   return (neuron0x349b290()*0.767714);
}

double NNfunction_ns_chi04_uR::synapse0x34c8a80() {
   return (neuron0x349bd70()*0.356504);
}

double NNfunction_ns_chi04_uR::synapse0x34c8ac0() {
   return (neuron0x349b810()*-0.930968);
}

double NNfunction_ns_chi04_uR::synapse0x34c8b00() {
   return (neuron0x349cb50()*0.141589);
}

double NNfunction_ns_chi04_uR::synapse0x34c8b40() {
   return (neuron0x349d520()*1.81021);
}

double NNfunction_ns_chi04_uR::synapse0x34c8b80() {
   return (neuron0x349e2f0()*0.962593);
}

double NNfunction_ns_chi04_uR::synapse0x34c8bc0() {
   return (neuron0x349ecc0()*-0.790524);
}

double NNfunction_ns_chi04_uR::synapse0x34c8c00() {
   return (neuron0x349f690()*3.81521);
}

double NNfunction_ns_chi04_uR::synapse0x34c8c40() {
   return (neuron0x34a0170()*0.411262);
}

double NNfunction_ns_chi04_uR::synapse0x34c8c80() {
   return (neuron0x34a0b40()*3.02484);
}

double NNfunction_ns_chi04_uR::synapse0x34c8cc0() {
   return (neuron0x349dc20()*-1.09293);
}

double NNfunction_ns_chi04_uR::synapse0x34c8d00() {
   return (neuron0x34a26f0()*-0.897831);
}

double NNfunction_ns_chi04_uR::synapse0x34c8d40() {
   return (neuron0x34a30c0()*-0.465699);
}

double NNfunction_ns_chi04_uR::synapse0x34c8d80() {
   return (neuron0x34a3a90()*-0.520598);
}

double NNfunction_ns_chi04_uR::synapse0x34c8dc0() {
   return (neuron0x34a4460()*0.382992);
}

double NNfunction_ns_chi04_uR::synapse0x34c8850() {
   return (neuron0x34a6270()*-1.78326);
}

double NNfunction_ns_chi04_uR::synapse0x34c8890() {
   return (neuron0x34a6550()*0.150686);
}

double NNfunction_ns_chi04_uR::synapse0x34c8f10() {
   return (neuron0x34a6f20()*-1.5823);
}

double NNfunction_ns_chi04_uR::synapse0x34c8f50() {
   return (neuron0x34a78f0()*-1.4987);
}

double NNfunction_ns_chi04_uR::synapse0x34c8f90() {
   return (neuron0x34a82c0()*-0.697004);
}

double NNfunction_ns_chi04_uR::synapse0x34c8fd0() {
   return (neuron0x34a8c90()*-1.66201);
}

double NNfunction_ns_chi04_uR::synapse0x34c9010() {
   return (neuron0x34a17e0()*0.332228);
}

double NNfunction_ns_chi04_uR::synapse0x34c9050() {
   return (neuron0x34a21b0()*-0.246971);
}

double NNfunction_ns_chi04_uR::synapse0x34c9090() {
   return (neuron0x34aba20()*1.35801);
}

double NNfunction_ns_chi04_uR::synapse0x34c90d0() {
   return (neuron0x34ac3f0()*-3.36131);
}

double NNfunction_ns_chi04_uR::synapse0x34c9110() {
   return (neuron0x34acdc0()*-0.342297);
}

double NNfunction_ns_chi04_uR::synapse0x34c9150() {
   return (neuron0x34ad790()*-3.19061);
}

double NNfunction_ns_chi04_uR::synapse0x34c9190() {
   return (neuron0x34ae160()*0.357988);
}

double NNfunction_ns_chi04_uR::synapse0x34c91d0() {
   return (neuron0x34aeb30()*0.317227);
}

double NNfunction_ns_chi04_uR::synapse0x34c9210() {
   return (neuron0x34af500()*0.60575);
}

double NNfunction_ns_chi04_uR::synapse0x34c9250() {
   return (neuron0x34afed0()*0.422666);
}

double NNfunction_ns_chi04_uR::synapse0x34c8e00() {
   return (neuron0x34a5f60()*0.783089);
}

double NNfunction_ns_chi04_uR::synapse0x34c8e40() {
   return (neuron0x34b2ab0()*-0.221031);
}

double NNfunction_ns_chi04_uR::synapse0x34c8e80() {
   return (neuron0x34b3480()*-1.88325);
}

double NNfunction_ns_chi04_uR::synapse0x34c8ec0() {
   return (neuron0x34b3e50()*1.62953);
}

double NNfunction_ns_chi04_uR::synapse0x34c94a0() {
   return (neuron0x34b4820()*3.92611);
}

double NNfunction_ns_chi04_uR::synapse0x34c94e0() {
   return (neuron0x34b51f0()*0.321797);
}

double NNfunction_ns_chi04_uR::synapse0x34c9520() {
   return (neuron0x34b5bc0()*1.24627);
}

double NNfunction_ns_chi04_uR::synapse0x34c9560() {
   return (neuron0x34b6590()*0.480685);
}

double NNfunction_ns_chi04_uR::synapse0x34c95a0() {
   return (neuron0x34b6f60()*0.561165);
}

double NNfunction_ns_chi04_uR::synapse0x34c95e0() {
   return (neuron0x34b7b40()*-0.172538);
}

double NNfunction_ns_chi04_uR::synapse0x34c9620() {
   return (neuron0x34b8510()*-2.82085);
}

double NNfunction_ns_chi04_uR::synapse0x34c9660() {
   return (neuron0x34a9390()*-0.481654);
}

double NNfunction_ns_chi04_uR::synapse0x34c96a0() {
   return (neuron0x34a9d60()*2.53918);
}

double NNfunction_ns_chi04_uR::synapse0x34c96e0() {
   return (neuron0x34aa730()*-0.433621);
}

double NNfunction_ns_chi04_uR::synapse0x34c9720() {
   return (neuron0x34bcd70()*-0.394542);
}

double NNfunction_ns_chi04_uR::synapse0x34c9760() {
   return (neuron0x34bd620()*2.71992);
}

double NNfunction_ns_chi04_uR::synapse0x34c97a0() {
   return (neuron0x34bdff0()*-0.42613);
}

double NNfunction_ns_chi04_uR::synapse0x34c97e0() {
   return (neuron0x34be9c0()*2.84639);
}

double NNfunction_ns_chi04_uR::synapse0x34c9a40() {
   return (neuron0x34c5bc0()*-10.0415);
}

double NNfunction_ns_chi04_uR::synapse0x34c9a80() {
   return (neuron0x34c5f60()*0.670069);
}

double NNfunction_ns_chi04_uR::synapse0x34c9ac0() {
   return (neuron0x34c6400()*2.21332);
}

double NNfunction_ns_chi04_uR::synapse0x34c9b00() {
   return (neuron0x34c7560()*-0.968538);
}

double NNfunction_ns_chi04_uR::synapse0x34c9b40() {
   return (neuron0x34c86c0()*6.50104);
}

