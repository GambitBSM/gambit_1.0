#include "NNfunction_ns_chi02_cR.h"
#include <cmath>

double NNfunction_ns_chi02_cR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7769)/15.2225;
   input1 = (in1 - -11.1852)/686.963;
   input2 = (in2 - 482.533)/562.403;
   input3 = (in3 - 35.5472)/772.583;
   input4 = (in4 - 932.252)/914.275;
   input5 = (in5 - 808.658)/914.757;
   input6 = (in6 - 808.375)/909.816;
   input7 = (in7 - 804.894)/885.875;
   input8 = (in8 - 810.096)/908.452;
   input9 = (in9 - 809.681)/905.014;
   input10 = (in10 - 862.014)/906.341;
   input11 = (in11 - 647.671)/781.944;
   input12 = (in12 - 646.502)/776.344;
   input13 = (in13 - 456.295)/458.117;
   input14 = (in14 - 671.883)/763.247;
   input15 = (in15 - 196.691)/155.77;
   input16 = (in16 - 486.804)/521.605;
   input17 = (in17 - 677.011)/814.662;
   input18 = (in18 - 674.814)/813.145;
   input19 = (in19 - 689.758)/783.111;
   input20 = (in20 - -32.0329)/457.644;
   input21 = (in21 - -47.3961)/1051.56;
   input22 = (in22 - 9.55341)/1098.38;
   input23 = (in23 - -36.229)/413.02;
   switch(index) {
     case 0:
         return neuron0x3032760();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_cR::Value(int index, double* input) {
   input0 = (input[0] - 23.7769)/15.2225;
   input1 = (input[1] - -11.1852)/686.963;
   input2 = (input[2] - 482.533)/562.403;
   input3 = (input[3] - 35.5472)/772.583;
   input4 = (input[4] - 932.252)/914.275;
   input5 = (input[5] - 808.658)/914.757;
   input6 = (input[6] - 808.375)/909.816;
   input7 = (input[7] - 804.894)/885.875;
   input8 = (input[8] - 810.096)/908.452;
   input9 = (input[9] - 809.681)/905.014;
   input10 = (input[10] - 862.014)/906.341;
   input11 = (input[11] - 647.671)/781.944;
   input12 = (input[12] - 646.502)/776.344;
   input13 = (input[13] - 456.295)/458.117;
   input14 = (input[14] - 671.883)/763.247;
   input15 = (input[15] - 196.691)/155.77;
   input16 = (input[16] - 486.804)/521.605;
   input17 = (input[17] - 677.011)/814.662;
   input18 = (input[18] - 674.814)/813.145;
   input19 = (input[19] - 689.758)/783.111;
   input20 = (input[20] - -32.0329)/457.644;
   input21 = (input[21] - -47.3961)/1051.56;
   input22 = (input[22] - 9.55341)/1098.38;
   input23 = (input[23] - -36.229)/413.02;
   switch(index) {
     case 0:
         return neuron0x3032760();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_cR::neuron0x2ffe850() {
   return input0;
}

double NNfunction_ns_chi02_cR::neuron0x2ffeb90() {
   return input1;
}

double NNfunction_ns_chi02_cR::neuron0x2ffeed0() {
   return input2;
}

double NNfunction_ns_chi02_cR::neuron0x2fff210() {
   return input3;
}

double NNfunction_ns_chi02_cR::neuron0x2fff550() {
   return input4;
}

double NNfunction_ns_chi02_cR::neuron0x2fff890() {
   return input5;
}

double NNfunction_ns_chi02_cR::neuron0x2fffbd0() {
   return input6;
}

double NNfunction_ns_chi02_cR::neuron0x2ffff10() {
   return input7;
}

double NNfunction_ns_chi02_cR::neuron0x3000250() {
   return input8;
}

double NNfunction_ns_chi02_cR::neuron0x3000590() {
   return input9;
}

double NNfunction_ns_chi02_cR::neuron0x30008d0() {
   return input10;
}

double NNfunction_ns_chi02_cR::neuron0x3000c10() {
   return input11;
}

double NNfunction_ns_chi02_cR::neuron0x3000f50() {
   return input12;
}

double NNfunction_ns_chi02_cR::neuron0x3001290() {
   return input13;
}

double NNfunction_ns_chi02_cR::neuron0x30015d0() {
   return input14;
}

double NNfunction_ns_chi02_cR::neuron0x3001910() {
   return input15;
}

double NNfunction_ns_chi02_cR::neuron0x3001c50() {
   return input16;
}

double NNfunction_ns_chi02_cR::neuron0x30021b0() {
   return input17;
}

double NNfunction_ns_chi02_cR::neuron0x30023d0() {
   return input18;
}

double NNfunction_ns_chi02_cR::neuron0x3002710() {
   return input19;
}

double NNfunction_ns_chi02_cR::neuron0x3002a50() {
   return input20;
}

double NNfunction_ns_chi02_cR::neuron0x3002d90() {
   return input21;
}

double NNfunction_ns_chi02_cR::neuron0x30030d0() {
   return input22;
}

double NNfunction_ns_chi02_cR::neuron0x3003410() {
   return input23;
}

double NNfunction_ns_chi02_cR::input0x3003880() {
   double input = 1.42631;
   input += synapse0x2ffe710();
   input += synapse0x2ffe750();
   input += synapse0x3003b30();
   input += synapse0x3003b70();
   input += synapse0x3003bb0();
   input += synapse0x3003bf0();
   input += synapse0x3003c30();
   input += synapse0x3003c70();
   input += synapse0x3003cb0();
   input += synapse0x3003cf0();
   input += synapse0x3003d30();
   input += synapse0x3003d70();
   input += synapse0x3003db0();
   input += synapse0x3003df0();
   input += synapse0x3003e30();
   input += synapse0x3003e70();
   input += synapse0x2ffe680();
   input += synapse0x2ffe6c0();
   input += synapse0x2db99f0();
   input += synapse0x2db9a30();
   input += synapse0x30040d0();
   input += synapse0x3004110();
   input += synapse0x3004150();
   input += synapse0x3004190();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3003880() {
   double input = input0x3003880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30041d0() {
   double input = 0.7041;
   input += synapse0x3004510();
   input += synapse0x3004550();
   input += synapse0x3004590();
   input += synapse0x30045d0();
   input += synapse0x3004610();
   input += synapse0x3004650();
   input += synapse0x3004690();
   input += synapse0x30046d0();
   input += synapse0x3004710();
   input += synapse0x3003fc0();
   input += synapse0x3004000();
   input += synapse0x3004040();
   input += synapse0x3004080();
   input += synapse0x3004960();
   input += synapse0x30049a0();
   input += synapse0x30049e0();
   input += synapse0x3004360();
   input += synapse0x30043a0();
   input += synapse0x3004b30();
   input += synapse0x3004b70();
   input += synapse0x3004bb0();
   input += synapse0x3004bf0();
   input += synapse0x3004c30();
   input += synapse0x3004c70();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30041d0() {
   double input = input0x30041d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3004cb0() {
   double input = -1.11803;
   input += synapse0x3004ff0();
   input += synapse0x3005030();
   input += synapse0x3005070();
   input += synapse0x30050b0();
   input += synapse0x30050f0();
   input += synapse0x3005130();
   input += synapse0x3005170();
   input += synapse0x30051b0();
   input += synapse0x30051f0();
   input += synapse0x3005230();
   input += synapse0x3005270();
   input += synapse0x30052b0();
   input += synapse0x30052f0();
   input += synapse0x3005330();
   input += synapse0x3005370();
   input += synapse0x30053b0();
   input += synapse0x3004e40();
   input += synapse0x3004e80();
   input += synapse0x2dba0e0();
   input += synapse0x2dc79b0();
   input += synapse0x2dc79f0();
   input += synapse0x2fed8e0();
   input += synapse0x2fed920();
   input += synapse0x2fed960();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3004cb0() {
   double input = input0x3004cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3004750() {
   double input = -2.39478;
   input += synapse0x2dc8230();
   input += synapse0x30048e0();
   input += synapse0x3004920();
   input += synapse0x3005500();
   input += synapse0x3005540();
   input += synapse0x3005580();
   input += synapse0x30055c0();
   input += synapse0x3005600();
   input += synapse0x3005640();
   input += synapse0x3005680();
   input += synapse0x30056c0();
   input += synapse0x3005700();
   input += synapse0x3005740();
   input += synapse0x3005780();
   input += synapse0x30057c0();
   input += synapse0x3005800();
   input += synapse0x2ffe790();
   input += synapse0x2ffe7d0();
   input += synapse0x2ffe810();
   input += synapse0x3005950();
   input += synapse0x3005990();
   input += synapse0x30059d0();
   input += synapse0x3005a10();
   input += synapse0x3005a50();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3004750() {
   double input = input0x3004750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3005a90() {
   double input = -2.12799;
   input += synapse0x3005dd0();
   input += synapse0x3005e10();
   input += synapse0x3005e50();
   input += synapse0x3005e90();
   input += synapse0x3005ed0();
   input += synapse0x3005f10();
   input += synapse0x3005f50();
   input += synapse0x3005f90();
   input += synapse0x3005fd0();
   input += synapse0x3006010();
   input += synapse0x3006050();
   input += synapse0x3006090();
   input += synapse0x30060d0();
   input += synapse0x3006110();
   input += synapse0x3006150();
   input += synapse0x3006190();
   input += synapse0x3005c20();
   input += synapse0x3005c60();
   input += synapse0x30062e0();
   input += synapse0x3006320();
   input += synapse0x3006360();
   input += synapse0x30063a0();
   input += synapse0x30063e0();
   input += synapse0x3006420();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3005a90() {
   double input = input0x3005a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3006460() {
   double input = -2.72812;
   input += synapse0x30067a0();
   input += synapse0x30067e0();
   input += synapse0x3006820();
   input += synapse0x3006860();
   input += synapse0x30068a0();
   input += synapse0x30068e0();
   input += synapse0x3006920();
   input += synapse0x3006960();
   input += synapse0x30069a0();
   input += synapse0x2dc7d00();
   input += synapse0x2dc7d40();
   input += synapse0x2dc7d80();
   input += synapse0x2dc7dc0();
   input += synapse0x2dc7e00();
   input += synapse0x2dc7e40();
   input += synapse0x2dc7e80();
   input += synapse0x30065f0();
   input += synapse0x3006630();
   input += synapse0x2dc7fd0();
   input += synapse0x2dc8010();
   input += synapse0x2dc8050();
   input += synapse0x2dc8090();
   input += synapse0x2dc80d0();
   input += synapse0x30071f0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3006460() {
   double input = input0x3006460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3007230() {
   double input = 0.532386;
   input += synapse0x3007570();
   input += synapse0x30075b0();
   input += synapse0x30075f0();
   input += synapse0x3007630();
   input += synapse0x3007670();
   input += synapse0x30076b0();
   input += synapse0x30076f0();
   input += synapse0x3007730();
   input += synapse0x3007770();
   input += synapse0x30077b0();
   input += synapse0x30077f0();
   input += synapse0x3007830();
   input += synapse0x3007870();
   input += synapse0x30078b0();
   input += synapse0x30078f0();
   input += synapse0x3007930();
   input += synapse0x30073c0();
   input += synapse0x3007400();
   input += synapse0x3007a80();
   input += synapse0x3007ac0();
   input += synapse0x3007b00();
   input += synapse0x3007b40();
   input += synapse0x3007b80();
   input += synapse0x3007bc0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3007230() {
   double input = input0x3007230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3007c00() {
   double input = 2.10926;
   input += synapse0x3007f40();
   input += synapse0x3007f80();
   input += synapse0x3007fc0();
   input += synapse0x3008000();
   input += synapse0x3008040();
   input += synapse0x3008080();
   input += synapse0x30080c0();
   input += synapse0x3008100();
   input += synapse0x3008140();
   input += synapse0x3008180();
   input += synapse0x30081c0();
   input += synapse0x3008200();
   input += synapse0x3008240();
   input += synapse0x3008280();
   input += synapse0x30082c0();
   input += synapse0x3008300();
   input += synapse0x3007d90();
   input += synapse0x3007dd0();
   input += synapse0x3008450();
   input += synapse0x3008490();
   input += synapse0x30084d0();
   input += synapse0x3008510();
   input += synapse0x3008550();
   input += synapse0x3008590();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3007c00() {
   double input = input0x3007c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30085d0() {
   double input = 0.14037;
   input += synapse0x30020a0();
   input += synapse0x30020e0();
   input += synapse0x3002120();
   input += synapse0x3002160();
   input += synapse0x3008b20();
   input += synapse0x3008b60();
   input += synapse0x3008ba0();
   input += synapse0x3008be0();
   input += synapse0x3008c20();
   input += synapse0x3008c60();
   input += synapse0x3008ca0();
   input += synapse0x3008ce0();
   input += synapse0x3008d20();
   input += synapse0x3008d60();
   input += synapse0x3008da0();
   input += synapse0x3008de0();
   input += synapse0x3008760();
   input += synapse0x30087a0();
   input += synapse0x3008f30();
   input += synapse0x3008f70();
   input += synapse0x3008fb0();
   input += synapse0x3008ff0();
   input += synapse0x3009030();
   input += synapse0x3009070();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30085d0() {
   double input = input0x30085d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30090b0() {
   double input = 1.95492;
   input += synapse0x30093f0();
   input += synapse0x3009430();
   input += synapse0x3009470();
   input += synapse0x30094b0();
   input += synapse0x30094f0();
   input += synapse0x3009530();
   input += synapse0x3009570();
   input += synapse0x30095b0();
   input += synapse0x30095f0();
   input += synapse0x3009630();
   input += synapse0x3009670();
   input += synapse0x30096b0();
   input += synapse0x30096f0();
   input += synapse0x3009730();
   input += synapse0x3009770();
   input += synapse0x30097b0();
   input += synapse0x3009240();
   input += synapse0x3009280();
   input += synapse0x3009900();
   input += synapse0x3009940();
   input += synapse0x3009980();
   input += synapse0x30099c0();
   input += synapse0x3009a00();
   input += synapse0x3009a40();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30090b0() {
   double input = input0x30090b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3009a80() {
   double input = 0.828519;
   input += synapse0x3009dc0();
   input += synapse0x3009e00();
   input += synapse0x3009e40();
   input += synapse0x3009e80();
   input += synapse0x3009ec0();
   input += synapse0x3009f00();
   input += synapse0x3009f40();
   input += synapse0x3009f80();
   input += synapse0x3009fc0();
   input += synapse0x300a000();
   input += synapse0x300a040();
   input += synapse0x300a080();
   input += synapse0x300a0c0();
   input += synapse0x300a100();
   input += synapse0x300a140();
   input += synapse0x300a180();
   input += synapse0x3009c10();
   input += synapse0x3009c50();
   input += synapse0x30069e0();
   input += synapse0x3006a20();
   input += synapse0x3006a60();
   input += synapse0x3006aa0();
   input += synapse0x3006ae0();
   input += synapse0x3006b20();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3009a80() {
   double input = input0x3009a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3006b60() {
   double input = 2.32577;
   input += synapse0x3006ea0();
   input += synapse0x3006ee0();
   input += synapse0x3006f20();
   input += synapse0x3006f60();
   input += synapse0x3006fa0();
   input += synapse0x3006fe0();
   input += synapse0x3007020();
   input += synapse0x3007060();
   input += synapse0x30070a0();
   input += synapse0x30070e0();
   input += synapse0x3007120();
   input += synapse0x3007160();
   input += synapse0x30071a0();
   input += synapse0x300b2e0();
   input += synapse0x300b320();
   input += synapse0x300b360();
   input += synapse0x3006cf0();
   input += synapse0x3006d30();
   input += synapse0x300b4b0();
   input += synapse0x300b4f0();
   input += synapse0x300b530();
   input += synapse0x300b570();
   input += synapse0x300b5b0();
   input += synapse0x300b5f0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3006b60() {
   double input = input0x3006b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300b630() {
   double input = -0.374525;
   input += synapse0x300b970();
   input += synapse0x300b9b0();
   input += synapse0x300b9f0();
   input += synapse0x300ba30();
   input += synapse0x300ba70();
   input += synapse0x300bab0();
   input += synapse0x300baf0();
   input += synapse0x300bb30();
   input += synapse0x300bb70();
   input += synapse0x300bbb0();
   input += synapse0x300bbf0();
   input += synapse0x300bc30();
   input += synapse0x300bc70();
   input += synapse0x300bcb0();
   input += synapse0x300bcf0();
   input += synapse0x300bd30();
   input += synapse0x300b7c0();
   input += synapse0x300b800();
   input += synapse0x300be80();
   input += synapse0x300bec0();
   input += synapse0x300bf00();
   input += synapse0x300bf40();
   input += synapse0x300bf80();
   input += synapse0x300bfc0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300b630() {
   double input = input0x300b630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300c000() {
   double input = -0.030992;
   input += synapse0x300c340();
   input += synapse0x300c380();
   input += synapse0x300c3c0();
   input += synapse0x300c400();
   input += synapse0x300c440();
   input += synapse0x300c480();
   input += synapse0x300c4c0();
   input += synapse0x300c500();
   input += synapse0x300c540();
   input += synapse0x300c580();
   input += synapse0x300c5c0();
   input += synapse0x300c600();
   input += synapse0x300c640();
   input += synapse0x300c680();
   input += synapse0x300c6c0();
   input += synapse0x300c700();
   input += synapse0x300c190();
   input += synapse0x300c1d0();
   input += synapse0x300c850();
   input += synapse0x300c890();
   input += synapse0x300c8d0();
   input += synapse0x300c910();
   input += synapse0x300c950();
   input += synapse0x300c990();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300c000() {
   double input = input0x300c000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300c9d0() {
   double input = 0.860335;
   input += synapse0x300cd10();
   input += synapse0x300cd50();
   input += synapse0x300cd90();
   input += synapse0x300cdd0();
   input += synapse0x300ce10();
   input += synapse0x300ce50();
   input += synapse0x300ce90();
   input += synapse0x300ced0();
   input += synapse0x300cf10();
   input += synapse0x300cf50();
   input += synapse0x300cf90();
   input += synapse0x300cfd0();
   input += synapse0x300d010();
   input += synapse0x300d050();
   input += synapse0x300d090();
   input += synapse0x300d0d0();
   input += synapse0x300cb60();
   input += synapse0x300cba0();
   input += synapse0x300d220();
   input += synapse0x300d260();
   input += synapse0x300d2a0();
   input += synapse0x300d2e0();
   input += synapse0x300d320();
   input += synapse0x300d360();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300c9d0() {
   double input = input0x300c9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300d3a0() {
   double input = 0.223662;
   input += synapse0x300d6e0();
   input += synapse0x2ffea70();
   input += synapse0x2ffeab0();
   input += synapse0x2ffedb0();
   input += synapse0x2ffedf0();
   input += synapse0x2fff0f0();
   input += synapse0x2fff130();
   input += synapse0x2fff430();
   input += synapse0x2fff470();
   input += synapse0x2fff770();
   input += synapse0x2fff7b0();
   input += synapse0x2fffab0();
   input += synapse0x2fffaf0();
   input += synapse0x2fffdf0();
   input += synapse0x2fffe30();
   input += synapse0x3000130();
   input += synapse0x3000170();
   input += synapse0x3000470();
   input += synapse0x30004b0();
   input += synapse0x30007b0();
   input += synapse0x30007f0();
   input += synapse0x3000af0();
   input += synapse0x3000b30();
   input += synapse0x3000e30();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300d3a0() {
   double input = input0x300d3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300f1b0() {
   double input = -0.75406;
   input += synapse0x3000e70();
   input += synapse0x3001b30();
   input += synapse0x3001b70();
   input += synapse0x300d530();
   input += synapse0x300d570();
   input += synapse0x3001e70();
   input += synapse0x3001eb0();
   input += synapse0x2db98d0();
   input += synapse0x2db9910();
   input += synapse0x30025f0();
   input += synapse0x3002630();
   input += synapse0x3002930();
   input += synapse0x3002970();
   input += synapse0x3002c70();
   input += synapse0x3002cb0();
   input += synapse0x3002fb0();
   input += synapse0x3002ff0();
   input += synapse0x30032f0();
   input += synapse0x3003330();
   input += synapse0x3003630();
   input += synapse0x3003670();
   input += synapse0x3001170();
   input += synapse0x30011b0();
   input += synapse0x300f450();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300f1b0() {
   double input = input0x300f1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300f490() {
   double input = 2.81041;
   input += synapse0x300f7d0();
   input += synapse0x300f810();
   input += synapse0x300f850();
   input += synapse0x300f890();
   input += synapse0x300f8d0();
   input += synapse0x300f910();
   input += synapse0x300f950();
   input += synapse0x300f990();
   input += synapse0x300f9d0();
   input += synapse0x300fa10();
   input += synapse0x300fa50();
   input += synapse0x300fa90();
   input += synapse0x300fad0();
   input += synapse0x300fb10();
   input += synapse0x300fb50();
   input += synapse0x300fb90();
   input += synapse0x300f620();
   input += synapse0x300f660();
   input += synapse0x300fce0();
   input += synapse0x300fd20();
   input += synapse0x300fd60();
   input += synapse0x300fda0();
   input += synapse0x300fde0();
   input += synapse0x300fe20();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300f490() {
   double input = input0x300f490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300fe60() {
   double input = -2.48994;
   input += synapse0x30101a0();
   input += synapse0x30101e0();
   input += synapse0x3010220();
   input += synapse0x3010260();
   input += synapse0x30102a0();
   input += synapse0x30102e0();
   input += synapse0x3010320();
   input += synapse0x3010360();
   input += synapse0x30103a0();
   input += synapse0x30103e0();
   input += synapse0x3010420();
   input += synapse0x3010460();
   input += synapse0x30104a0();
   input += synapse0x30104e0();
   input += synapse0x3010520();
   input += synapse0x3010560();
   input += synapse0x300fff0();
   input += synapse0x3010030();
   input += synapse0x30106b0();
   input += synapse0x30106f0();
   input += synapse0x3010730();
   input += synapse0x3010770();
   input += synapse0x30107b0();
   input += synapse0x30107f0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300fe60() {
   double input = input0x300fe60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3010830() {
   double input = -0.558512;
   input += synapse0x3010b70();
   input += synapse0x3010bb0();
   input += synapse0x3010bf0();
   input += synapse0x3010c30();
   input += synapse0x3010c70();
   input += synapse0x3010cb0();
   input += synapse0x3010cf0();
   input += synapse0x3010d30();
   input += synapse0x3010d70();
   input += synapse0x3010db0();
   input += synapse0x3010df0();
   input += synapse0x3010e30();
   input += synapse0x3010e70();
   input += synapse0x3010eb0();
   input += synapse0x3010ef0();
   input += synapse0x3010f30();
   input += synapse0x30109c0();
   input += synapse0x3010a00();
   input += synapse0x3011080();
   input += synapse0x30110c0();
   input += synapse0x3011100();
   input += synapse0x3011140();
   input += synapse0x3011180();
   input += synapse0x30111c0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3010830() {
   double input = input0x3010830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3011200() {
   double input = 1.643;
   input += synapse0x3011540();
   input += synapse0x3011580();
   input += synapse0x30115c0();
   input += synapse0x3011600();
   input += synapse0x3011640();
   input += synapse0x3011680();
   input += synapse0x30116c0();
   input += synapse0x3011700();
   input += synapse0x3011740();
   input += synapse0x3011780();
   input += synapse0x30117c0();
   input += synapse0x3011800();
   input += synapse0x3011840();
   input += synapse0x3011880();
   input += synapse0x30118c0();
   input += synapse0x3011900();
   input += synapse0x3011390();
   input += synapse0x30113d0();
   input += synapse0x3011a50();
   input += synapse0x3011a90();
   input += synapse0x3011ad0();
   input += synapse0x3011b10();
   input += synapse0x3011b50();
   input += synapse0x3011b90();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3011200() {
   double input = input0x3011200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3011bd0() {
   double input = 0.953148;
   input += synapse0x3011f10();
   input += synapse0x3011f50();
   input += synapse0x3011f90();
   input += synapse0x3011fd0();
   input += synapse0x3012010();
   input += synapse0x3012050();
   input += synapse0x3012090();
   input += synapse0x30120d0();
   input += synapse0x3012110();
   input += synapse0x300a2d0();
   input += synapse0x300a310();
   input += synapse0x300a350();
   input += synapse0x300a390();
   input += synapse0x300a3d0();
   input += synapse0x300a410();
   input += synapse0x300a450();
   input += synapse0x3011d60();
   input += synapse0x3011da0();
   input += synapse0x300a5a0();
   input += synapse0x300a5e0();
   input += synapse0x300a620();
   input += synapse0x300a660();
   input += synapse0x300a6a0();
   input += synapse0x300a6e0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3011bd0() {
   double input = input0x3011bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300a720() {
   double input = -1.60745;
   input += synapse0x300aa60();
   input += synapse0x300aaa0();
   input += synapse0x300aae0();
   input += synapse0x300ab20();
   input += synapse0x300ab60();
   input += synapse0x300aba0();
   input += synapse0x300abe0();
   input += synapse0x300ac20();
   input += synapse0x300ac60();
   input += synapse0x300aca0();
   input += synapse0x300ace0();
   input += synapse0x300ad20();
   input += synapse0x300ad60();
   input += synapse0x300ada0();
   input += synapse0x300ade0();
   input += synapse0x300ae20();
   input += synapse0x300a8b0();
   input += synapse0x300a8f0();
   input += synapse0x300af70();
   input += synapse0x300afb0();
   input += synapse0x300aff0();
   input += synapse0x300b030();
   input += synapse0x300b070();
   input += synapse0x300b0b0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300a720() {
   double input = input0x300a720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300b0f0() {
   double input = 2.74154;
   input += synapse0x300b280();
   input += synapse0x3014310();
   input += synapse0x3014350();
   input += synapse0x3014390();
   input += synapse0x30143d0();
   input += synapse0x3014410();
   input += synapse0x3014450();
   input += synapse0x3014490();
   input += synapse0x30144d0();
   input += synapse0x3014510();
   input += synapse0x3014550();
   input += synapse0x3014590();
   input += synapse0x30145d0();
   input += synapse0x3014610();
   input += synapse0x3014650();
   input += synapse0x3014690();
   input += synapse0x3014160();
   input += synapse0x30141a0();
   input += synapse0x30147e0();
   input += synapse0x3014820();
   input += synapse0x3014860();
   input += synapse0x30148a0();
   input += synapse0x30148e0();
   input += synapse0x3014920();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300b0f0() {
   double input = input0x300b0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3014960() {
   double input = 0.407056;
   input += synapse0x3014ca0();
   input += synapse0x3014ce0();
   input += synapse0x3014d20();
   input += synapse0x3014d60();
   input += synapse0x3014da0();
   input += synapse0x3014de0();
   input += synapse0x3014e20();
   input += synapse0x3014e60();
   input += synapse0x3014ea0();
   input += synapse0x3014ee0();
   input += synapse0x3014f20();
   input += synapse0x3014f60();
   input += synapse0x3014fa0();
   input += synapse0x3014fe0();
   input += synapse0x3015020();
   input += synapse0x3015060();
   input += synapse0x3014af0();
   input += synapse0x3014b30();
   input += synapse0x30151b0();
   input += synapse0x30151f0();
   input += synapse0x3015230();
   input += synapse0x3015270();
   input += synapse0x30152b0();
   input += synapse0x30152f0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3014960() {
   double input = input0x3014960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3015330() {
   double input = 3.53181;
   input += synapse0x3015670();
   input += synapse0x30156b0();
   input += synapse0x30156f0();
   input += synapse0x3015730();
   input += synapse0x3015770();
   input += synapse0x30157b0();
   input += synapse0x30157f0();
   input += synapse0x3015830();
   input += synapse0x3015870();
   input += synapse0x30158b0();
   input += synapse0x30158f0();
   input += synapse0x3015930();
   input += synapse0x3015970();
   input += synapse0x30159b0();
   input += synapse0x30159f0();
   input += synapse0x3015a30();
   input += synapse0x30154c0();
   input += synapse0x3015500();
   input += synapse0x3015b80();
   input += synapse0x3015bc0();
   input += synapse0x3015c00();
   input += synapse0x3015c40();
   input += synapse0x3015c80();
   input += synapse0x3015cc0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3015330() {
   double input = input0x3015330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3015d00() {
   double input = -0.0307267;
   input += synapse0x3016040();
   input += synapse0x3016080();
   input += synapse0x30160c0();
   input += synapse0x3016100();
   input += synapse0x3016140();
   input += synapse0x3016180();
   input += synapse0x30161c0();
   input += synapse0x3016200();
   input += synapse0x3016240();
   input += synapse0x3016280();
   input += synapse0x30162c0();
   input += synapse0x3016300();
   input += synapse0x3016340();
   input += synapse0x3016380();
   input += synapse0x30163c0();
   input += synapse0x3016400();
   input += synapse0x3015e90();
   input += synapse0x3015ed0();
   input += synapse0x3016550();
   input += synapse0x3016590();
   input += synapse0x30165d0();
   input += synapse0x3016610();
   input += synapse0x3016650();
   input += synapse0x3016690();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3015d00() {
   double input = input0x3015d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30166d0() {
   double input = 2.61237;
   input += synapse0x3016a10();
   input += synapse0x3016a50();
   input += synapse0x3016a90();
   input += synapse0x3016ad0();
   input += synapse0x3016b10();
   input += synapse0x3016b50();
   input += synapse0x3016b90();
   input += synapse0x3016bd0();
   input += synapse0x3016c10();
   input += synapse0x3016c50();
   input += synapse0x3016c90();
   input += synapse0x3016cd0();
   input += synapse0x3016d10();
   input += synapse0x3016d50();
   input += synapse0x3016d90();
   input += synapse0x3016dd0();
   input += synapse0x3016860();
   input += synapse0x30168a0();
   input += synapse0x3016f20();
   input += synapse0x3016f60();
   input += synapse0x3016fa0();
   input += synapse0x3016fe0();
   input += synapse0x3017020();
   input += synapse0x3017060();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30166d0() {
   double input = input0x30166d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30170a0() {
   double input = -0.102705;
   input += synapse0x30173e0();
   input += synapse0x3017420();
   input += synapse0x3017460();
   input += synapse0x30174a0();
   input += synapse0x30174e0();
   input += synapse0x3017520();
   input += synapse0x3017560();
   input += synapse0x30175a0();
   input += synapse0x30175e0();
   input += synapse0x3017620();
   input += synapse0x3017660();
   input += synapse0x30176a0();
   input += synapse0x30176e0();
   input += synapse0x3017720();
   input += synapse0x3017760();
   input += synapse0x30177a0();
   input += synapse0x3017230();
   input += synapse0x3017270();
   input += synapse0x30178f0();
   input += synapse0x3017930();
   input += synapse0x3017970();
   input += synapse0x30179b0();
   input += synapse0x30179f0();
   input += synapse0x3017a30();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30170a0() {
   double input = input0x30170a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3017a70() {
   double input = 1.1071;
   input += synapse0x3017db0();
   input += synapse0x3017df0();
   input += synapse0x3017e30();
   input += synapse0x3017e70();
   input += synapse0x3017eb0();
   input += synapse0x3017ef0();
   input += synapse0x3017f30();
   input += synapse0x3017f70();
   input += synapse0x3017fb0();
   input += synapse0x3017ff0();
   input += synapse0x3018030();
   input += synapse0x3018070();
   input += synapse0x30180b0();
   input += synapse0x30180f0();
   input += synapse0x3018130();
   input += synapse0x3018170();
   input += synapse0x3017c00();
   input += synapse0x3017c40();
   input += synapse0x30182c0();
   input += synapse0x3018300();
   input += synapse0x3018340();
   input += synapse0x3018380();
   input += synapse0x30183c0();
   input += synapse0x3018400();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3017a70() {
   double input = input0x3017a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3018440() {
   double input = 0.370159;
   input += synapse0x3018780();
   input += synapse0x30187c0();
   input += synapse0x3018800();
   input += synapse0x3018840();
   input += synapse0x3018880();
   input += synapse0x30188c0();
   input += synapse0x3018900();
   input += synapse0x3018940();
   input += synapse0x3018980();
   input += synapse0x30189c0();
   input += synapse0x3018a00();
   input += synapse0x3018a40();
   input += synapse0x3018a80();
   input += synapse0x3018ac0();
   input += synapse0x3018b00();
   input += synapse0x3018b40();
   input += synapse0x30185d0();
   input += synapse0x3018610();
   input += synapse0x3018c90();
   input += synapse0x3018cd0();
   input += synapse0x3018d10();
   input += synapse0x3018d50();
   input += synapse0x3018d90();
   input += synapse0x3018dd0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3018440() {
   double input = input0x3018440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3018e10() {
   double input = -0.501356;
   input += synapse0x3019150();
   input += synapse0x300d720();
   input += synapse0x300d760();
   input += synapse0x300d7a0();
   input += synapse0x300d9f0();
   input += synapse0x300da30();
   input += synapse0x300da70();
   input += synapse0x300dcc0();
   input += synapse0x300dd00();
   input += synapse0x300df50();
   input += synapse0x300df90();
   input += synapse0x300dfd0();
   input += synapse0x300e220();
   input += synapse0x300e260();
   input += synapse0x300e4b0();
   input += synapse0x300e4f0();
   input += synapse0x3018fa0();
   input += synapse0x3018fe0();
   input += synapse0x300e640();
   input += synapse0x300eb50();
   input += synapse0x300eb90();
   input += synapse0x300ebd0();
   input += synapse0x300ee20();
   input += synapse0x300ee60();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3018e10() {
   double input = input0x3018e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x300eea0() {
   double input = 0.569415;
   input += synapse0x300e710();
   input += synapse0x300e750();
   input += synapse0x300e790();
   input += synapse0x300e7d0();
   input += synapse0x300f150();
   input += synapse0x301b4a0();
   input += synapse0x301b4e0();
   input += synapse0x301b520();
   input += synapse0x301b560();
   input += synapse0x301b5a0();
   input += synapse0x301b5e0();
   input += synapse0x301b620();
   input += synapse0x301b660();
   input += synapse0x301b6a0();
   input += synapse0x301b6e0();
   input += synapse0x301b720();
   input += synapse0x300f030();
   input += synapse0x300f070();
   input += synapse0x301b870();
   input += synapse0x301b8b0();
   input += synapse0x301b8f0();
   input += synapse0x301b930();
   input += synapse0x301b970();
   input += synapse0x301b9b0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x300eea0() {
   double input = input0x300eea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301b9f0() {
   double input = 9.03529;
   input += synapse0x301bd30();
   input += synapse0x301bd70();
   input += synapse0x301bdb0();
   input += synapse0x301bdf0();
   input += synapse0x301be30();
   input += synapse0x301be70();
   input += synapse0x301beb0();
   input += synapse0x301bef0();
   input += synapse0x301bf30();
   input += synapse0x301bf70();
   input += synapse0x301bfb0();
   input += synapse0x301bff0();
   input += synapse0x301c030();
   input += synapse0x301c070();
   input += synapse0x301c0b0();
   input += synapse0x301c0f0();
   input += synapse0x301bb80();
   input += synapse0x301bbc0();
   input += synapse0x301c240();
   input += synapse0x301c280();
   input += synapse0x301c2c0();
   input += synapse0x301c300();
   input += synapse0x301c340();
   input += synapse0x301c380();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301b9f0() {
   double input = input0x301b9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301c3c0() {
   double input = -0.181382;
   input += synapse0x301c700();
   input += synapse0x301c740();
   input += synapse0x301c780();
   input += synapse0x301c7c0();
   input += synapse0x301c800();
   input += synapse0x301c840();
   input += synapse0x301c880();
   input += synapse0x301c8c0();
   input += synapse0x301c900();
   input += synapse0x301c940();
   input += synapse0x301c980();
   input += synapse0x301c9c0();
   input += synapse0x301ca00();
   input += synapse0x301ca40();
   input += synapse0x301ca80();
   input += synapse0x301cac0();
   input += synapse0x301c550();
   input += synapse0x301c590();
   input += synapse0x301cc10();
   input += synapse0x301cc50();
   input += synapse0x301cc90();
   input += synapse0x301ccd0();
   input += synapse0x301cd10();
   input += synapse0x301cd50();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301c3c0() {
   double input = input0x301c3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301cd90() {
   double input = -3.7728;
   input += synapse0x301d0d0();
   input += synapse0x301d110();
   input += synapse0x301d150();
   input += synapse0x301d190();
   input += synapse0x301d1d0();
   input += synapse0x301d210();
   input += synapse0x301d250();
   input += synapse0x301d290();
   input += synapse0x301d2d0();
   input += synapse0x301d310();
   input += synapse0x301d350();
   input += synapse0x301d390();
   input += synapse0x301d3d0();
   input += synapse0x301d410();
   input += synapse0x301d450();
   input += synapse0x301d490();
   input += synapse0x301cf20();
   input += synapse0x301cf60();
   input += synapse0x301d5e0();
   input += synapse0x301d620();
   input += synapse0x301d660();
   input += synapse0x301d6a0();
   input += synapse0x301d6e0();
   input += synapse0x301d720();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301cd90() {
   double input = input0x301cd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301d760() {
   double input = 1.68575;
   input += synapse0x301daa0();
   input += synapse0x301dae0();
   input += synapse0x301db20();
   input += synapse0x301db60();
   input += synapse0x301dba0();
   input += synapse0x301dbe0();
   input += synapse0x301dc20();
   input += synapse0x301dc60();
   input += synapse0x301dca0();
   input += synapse0x301dce0();
   input += synapse0x301dd20();
   input += synapse0x301dd60();
   input += synapse0x301dda0();
   input += synapse0x301dde0();
   input += synapse0x301de20();
   input += synapse0x301de60();
   input += synapse0x301d8f0();
   input += synapse0x301d930();
   input += synapse0x301dfb0();
   input += synapse0x301dff0();
   input += synapse0x301e030();
   input += synapse0x301e070();
   input += synapse0x301e0b0();
   input += synapse0x301e0f0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301d760() {
   double input = input0x301d760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301e130() {
   double input = 1.43107;
   input += synapse0x301e470();
   input += synapse0x301e4b0();
   input += synapse0x301e4f0();
   input += synapse0x301e530();
   input += synapse0x301e570();
   input += synapse0x301e5b0();
   input += synapse0x301e5f0();
   input += synapse0x301e630();
   input += synapse0x301e670();
   input += synapse0x301e6b0();
   input += synapse0x301e6f0();
   input += synapse0x301e730();
   input += synapse0x301e770();
   input += synapse0x301e7b0();
   input += synapse0x301e7f0();
   input += synapse0x301e830();
   input += synapse0x301e2c0();
   input += synapse0x301e300();
   input += synapse0x301e980();
   input += synapse0x301e9c0();
   input += synapse0x301ea00();
   input += synapse0x301ea40();
   input += synapse0x301ea80();
   input += synapse0x301eac0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301e130() {
   double input = input0x301e130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301eb00() {
   double input = 0.858098;
   input += synapse0x301ee40();
   input += synapse0x301ee80();
   input += synapse0x301eec0();
   input += synapse0x301ef00();
   input += synapse0x301ef40();
   input += synapse0x301ef80();
   input += synapse0x301efc0();
   input += synapse0x301f000();
   input += synapse0x301f040();
   input += synapse0x301f080();
   input += synapse0x301f0c0();
   input += synapse0x301f100();
   input += synapse0x301f140();
   input += synapse0x301f180();
   input += synapse0x301f1c0();
   input += synapse0x301f200();
   input += synapse0x301ec90();
   input += synapse0x301ecd0();
   input += synapse0x301f350();
   input += synapse0x301f390();
   input += synapse0x301f3d0();
   input += synapse0x301f410();
   input += synapse0x301f450();
   input += synapse0x301f490();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301eb00() {
   double input = input0x301eb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301f4d0() {
   double input = 0.716177;
   input += synapse0x301f810();
   input += synapse0x301f850();
   input += synapse0x301f890();
   input += synapse0x301f8d0();
   input += synapse0x301f910();
   input += synapse0x301f950();
   input += synapse0x301f990();
   input += synapse0x301f9d0();
   input += synapse0x301fa10();
   input += synapse0x301fa50();
   input += synapse0x301fa90();
   input += synapse0x301fad0();
   input += synapse0x301fb10();
   input += synapse0x301fb50();
   input += synapse0x301fb90();
   input += synapse0x301fbd0();
   input += synapse0x301f660();
   input += synapse0x301f6a0();
   input += synapse0x301fd20();
   input += synapse0x301fd60();
   input += synapse0x301fda0();
   input += synapse0x301fde0();
   input += synapse0x301fe20();
   input += synapse0x301fe60();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301f4d0() {
   double input = input0x301f4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x301fea0() {
   double input = -0.486592;
   input += synapse0x3008910();
   input += synapse0x3008950();
   input += synapse0x3008990();
   input += synapse0x30089d0();
   input += synapse0x3008a10();
   input += synapse0x3008a50();
   input += synapse0x3008a90();
   input += synapse0x3008ad0();
   input += synapse0x30205f0();
   input += synapse0x3020630();
   input += synapse0x3020670();
   input += synapse0x30206b0();
   input += synapse0x30206f0();
   input += synapse0x3020730();
   input += synapse0x3020770();
   input += synapse0x30207b0();
   input += synapse0x3020030();
   input += synapse0x3020070();
   input += synapse0x3020900();
   input += synapse0x3020940();
   input += synapse0x3020980();
   input += synapse0x30209c0();
   input += synapse0x3020a00();
   input += synapse0x3020a40();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x301fea0() {
   double input = input0x301fea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3020a80() {
   double input = 4.15097;
   input += synapse0x3020dc0();
   input += synapse0x3020e00();
   input += synapse0x3020e40();
   input += synapse0x3020e80();
   input += synapse0x3020ec0();
   input += synapse0x3020f00();
   input += synapse0x3020f40();
   input += synapse0x3020f80();
   input += synapse0x3020fc0();
   input += synapse0x3021000();
   input += synapse0x3021040();
   input += synapse0x3021080();
   input += synapse0x30210c0();
   input += synapse0x3021100();
   input += synapse0x3021140();
   input += synapse0x3021180();
   input += synapse0x3020c10();
   input += synapse0x3020c50();
   input += synapse0x30212d0();
   input += synapse0x3021310();
   input += synapse0x3021350();
   input += synapse0x3021390();
   input += synapse0x30213d0();
   input += synapse0x3021410();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3020a80() {
   double input = input0x3020a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3021450() {
   double input = 1.24686;
   input += synapse0x3021790();
   input += synapse0x30217d0();
   input += synapse0x3021810();
   input += synapse0x3021850();
   input += synapse0x3021890();
   input += synapse0x30218d0();
   input += synapse0x3021910();
   input += synapse0x3021950();
   input += synapse0x3021990();
   input += synapse0x30219d0();
   input += synapse0x3021a10();
   input += synapse0x3021a50();
   input += synapse0x3021a90();
   input += synapse0x3021ad0();
   input += synapse0x3021b10();
   input += synapse0x3021b50();
   input += synapse0x30215e0();
   input += synapse0x3021620();
   input += synapse0x3012150();
   input += synapse0x3012190();
   input += synapse0x30121d0();
   input += synapse0x3012210();
   input += synapse0x3012250();
   input += synapse0x3012290();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3021450() {
   double input = input0x3021450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30122d0() {
   double input = 1.12386;
   input += synapse0x3012610();
   input += synapse0x3012650();
   input += synapse0x3012690();
   input += synapse0x30126d0();
   input += synapse0x3012710();
   input += synapse0x3012750();
   input += synapse0x3012790();
   input += synapse0x30127d0();
   input += synapse0x3012810();
   input += synapse0x3012850();
   input += synapse0x3012890();
   input += synapse0x30128d0();
   input += synapse0x3012910();
   input += synapse0x3012950();
   input += synapse0x3012990();
   input += synapse0x30129d0();
   input += synapse0x3012460();
   input += synapse0x30124a0();
   input += synapse0x3012b20();
   input += synapse0x3012b60();
   input += synapse0x3012ba0();
   input += synapse0x3012be0();
   input += synapse0x3012c20();
   input += synapse0x3012c60();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30122d0() {
   double input = input0x30122d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3012ca0() {
   double input = -0.0703372;
   input += synapse0x3012fe0();
   input += synapse0x3013020();
   input += synapse0x3013060();
   input += synapse0x30130a0();
   input += synapse0x30130e0();
   input += synapse0x3013120();
   input += synapse0x3013160();
   input += synapse0x30131a0();
   input += synapse0x30131e0();
   input += synapse0x3013220();
   input += synapse0x3013260();
   input += synapse0x30132a0();
   input += synapse0x30132e0();
   input += synapse0x3013320();
   input += synapse0x3013360();
   input += synapse0x30133a0();
   input += synapse0x3012e30();
   input += synapse0x3012e70();
   input += synapse0x30134f0();
   input += synapse0x3013530();
   input += synapse0x3013570();
   input += synapse0x30135b0();
   input += synapse0x30135f0();
   input += synapse0x3013630();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3012ca0() {
   double input = input0x3012ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3013670() {
   double input = -3.06839;
   input += synapse0x30139b0();
   input += synapse0x30139f0();
   input += synapse0x3013a30();
   input += synapse0x3013a70();
   input += synapse0x3013ab0();
   input += synapse0x3013af0();
   input += synapse0x3013b30();
   input += synapse0x3013b70();
   input += synapse0x3013bb0();
   input += synapse0x3013bf0();
   input += synapse0x3013c30();
   input += synapse0x3013c70();
   input += synapse0x3013cb0();
   input += synapse0x3013cf0();
   input += synapse0x3013d30();
   input += synapse0x3013d70();
   input += synapse0x3013800();
   input += synapse0x3013840();
   input += synapse0x3013ec0();
   input += synapse0x3013f00();
   input += synapse0x3013f40();
   input += synapse0x3013f80();
   input += synapse0x3013fc0();
   input += synapse0x3014000();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3013670() {
   double input = input0x3013670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3025cb0() {
   double input = -3.05374;
   input += synapse0x3025ed0();
   input += synapse0x3025f10();
   input += synapse0x3025f50();
   input += synapse0x3025f90();
   input += synapse0x3025fd0();
   input += synapse0x3026010();
   input += synapse0x3026050();
   input += synapse0x3026090();
   input += synapse0x30260d0();
   input += synapse0x3026110();
   input += synapse0x3026150();
   input += synapse0x3026190();
   input += synapse0x30261d0();
   input += synapse0x3026210();
   input += synapse0x3026250();
   input += synapse0x3026290();
   input += synapse0x3014040();
   input += synapse0x3014080();
   input += synapse0x30263e0();
   input += synapse0x3026420();
   input += synapse0x3026460();
   input += synapse0x30264a0();
   input += synapse0x30264e0();
   input += synapse0x3026520();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3025cb0() {
   double input = input0x3025cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3026560() {
   double input = 0.909395;
   input += synapse0x30268a0();
   input += synapse0x30268e0();
   input += synapse0x3026920();
   input += synapse0x3026960();
   input += synapse0x30269a0();
   input += synapse0x30269e0();
   input += synapse0x3026a20();
   input += synapse0x3026a60();
   input += synapse0x3026aa0();
   input += synapse0x3026ae0();
   input += synapse0x3026b20();
   input += synapse0x3026b60();
   input += synapse0x3026ba0();
   input += synapse0x3026be0();
   input += synapse0x3026c20();
   input += synapse0x3026c60();
   input += synapse0x30266f0();
   input += synapse0x3026730();
   input += synapse0x3026db0();
   input += synapse0x3026df0();
   input += synapse0x3026e30();
   input += synapse0x3026e70();
   input += synapse0x3026eb0();
   input += synapse0x3026ef0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3026560() {
   double input = input0x3026560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3026f30() {
   double input = 1.03458;
   input += synapse0x3027270();
   input += synapse0x30272b0();
   input += synapse0x30272f0();
   input += synapse0x3027330();
   input += synapse0x3027370();
   input += synapse0x30273b0();
   input += synapse0x30273f0();
   input += synapse0x3027430();
   input += synapse0x3027470();
   input += synapse0x30274b0();
   input += synapse0x30274f0();
   input += synapse0x3027530();
   input += synapse0x3027570();
   input += synapse0x30275b0();
   input += synapse0x30275f0();
   input += synapse0x3027630();
   input += synapse0x30270c0();
   input += synapse0x3027100();
   input += synapse0x3027780();
   input += synapse0x30277c0();
   input += synapse0x3027800();
   input += synapse0x3027840();
   input += synapse0x3027880();
   input += synapse0x30278c0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3026f30() {
   double input = input0x3026f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3027900() {
   double input = -0.756522;
   input += synapse0x3027c40();
   input += synapse0x3027c80();
   input += synapse0x3027cc0();
   input += synapse0x3027d00();
   input += synapse0x3027d40();
   input += synapse0x3027d80();
   input += synapse0x3027dc0();
   input += synapse0x3027e00();
   input += synapse0x3027e40();
   input += synapse0x3027e80();
   input += synapse0x3027ec0();
   input += synapse0x3027f00();
   input += synapse0x3027f40();
   input += synapse0x3027f80();
   input += synapse0x3027fc0();
   input += synapse0x3028000();
   input += synapse0x3027a90();
   input += synapse0x3027ad0();
   input += synapse0x3028150();
   input += synapse0x3028190();
   input += synapse0x30281d0();
   input += synapse0x3028210();
   input += synapse0x3028250();
   input += synapse0x3028290();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3027900() {
   double input = input0x3027900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x302eb00() {
   double input = 0.113247;
   input += synapse0x2dc81a0();
   input += synapse0x2dc81e0();
   input += synapse0x3005d40();
   input += synapse0x3005d80();
   input += synapse0x3006710();
   input += synapse0x3006750();
   input += synapse0x30074e0();
   input += synapse0x3007520();
   input += synapse0x3007eb0();
   input += synapse0x3007ef0();
   input += synapse0x3008880();
   input += synapse0x30088c0();
   input += synapse0x3009360();
   input += synapse0x30093a0();
   input += synapse0x3009d30();
   input += synapse0x3009d70();
   input += synapse0x3006e10();
   input += synapse0x3006e50();
   input += synapse0x300b8e0();
   input += synapse0x300b920();
   input += synapse0x300c2b0();
   input += synapse0x300c2f0();
   input += synapse0x300cc80();
   input += synapse0x300ccc0();
   input += synapse0x300d650();
   input += synapse0x300d690();
   input += synapse0x30017f0();
   input += synapse0x3001830();
   input += synapse0x300f740();
   input += synapse0x300f780();
   input += synapse0x3010110();
   input += synapse0x3010150();
   input += synapse0x3010ae0();
   input += synapse0x3010b20();
   input += synapse0x30114b0();
   input += synapse0x30114f0();
   input += synapse0x3011e80();
   input += synapse0x3011ec0();
   input += synapse0x300a9d0();
   input += synapse0x300aa10();
   input += synapse0x3014280();
   input += synapse0x30142c0();
   input += synapse0x3014c10();
   input += synapse0x3014c50();
   input += synapse0x30155e0();
   input += synapse0x3015620();
   input += synapse0x3015fb0();
   input += synapse0x3015ff0();
   input += synapse0x3016980();
   input += synapse0x30169c0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x302eb00() {
   double input = input0x302eb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x302eea0() {
   double input = -0.824024;
   input += synapse0x30190c0();
   input += synapse0x3019100();
   input += synapse0x300e680();
   input += synapse0x300e6c0();
   input += synapse0x301bca0();
   input += synapse0x301bce0();
   input += synapse0x301c670();
   input += synapse0x301c6b0();
   input += synapse0x301d040();
   input += synapse0x301d080();
   input += synapse0x301da10();
   input += synapse0x301da50();
   input += synapse0x301e3e0();
   input += synapse0x301e420();
   input += synapse0x301edb0();
   input += synapse0x301edf0();
   input += synapse0x301f780();
   input += synapse0x301f7c0();
   input += synapse0x3020150();
   input += synapse0x3020190();
   input += synapse0x3020d30();
   input += synapse0x3020d70();
   input += synapse0x3021700();
   input += synapse0x3021740();
   input += synapse0x3012580();
   input += synapse0x30125c0();
   input += synapse0x3012f50();
   input += synapse0x3012f90();
   input += synapse0x3013920();
   input += synapse0x3013960();
   input += synapse0x3025e40();
   input += synapse0x3025e80();
   input += synapse0x3026810();
   input += synapse0x3026850();
   input += synapse0x30271e0();
   input += synapse0x3027220();
   input += synapse0x3027bb0();
   input += synapse0x3027bf0();
   input += synapse0x3003aa0();
   input += synapse0x3003ae0();
   input += synapse0x3017350();
   input += synapse0x3017390();
   input += synapse0x30282d0();
   input += synapse0x3028310();
   input += synapse0x3028350();
   input += synapse0x3028390();
   input += synapse0x302f240();
   input += synapse0x302f280();
   input += synapse0x302f2c0();
   input += synapse0x302f300();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x302eea0() {
   double input = input0x302eea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x302f340() {
   double input = 1.07663;
   input += synapse0x302f680();
   input += synapse0x302f6c0();
   input += synapse0x302f700();
   input += synapse0x302f740();
   input += synapse0x302f780();
   input += synapse0x302f7c0();
   input += synapse0x302f800();
   input += synapse0x302f840();
   input += synapse0x302f880();
   input += synapse0x302f8c0();
   input += synapse0x302f900();
   input += synapse0x302f940();
   input += synapse0x302f980();
   input += synapse0x302f9c0();
   input += synapse0x302fa00();
   input += synapse0x302fa40();
   input += synapse0x302f4d0();
   input += synapse0x302f510();
   input += synapse0x302fb90();
   input += synapse0x302fbd0();
   input += synapse0x302fc10();
   input += synapse0x302fc50();
   input += synapse0x302fc90();
   input += synapse0x302fcd0();
   input += synapse0x302fd10();
   input += synapse0x302fd50();
   input += synapse0x302fd90();
   input += synapse0x302fdd0();
   input += synapse0x302fe10();
   input += synapse0x302fe50();
   input += synapse0x302fe90();
   input += synapse0x302fed0();
   input += synapse0x302fa80();
   input += synapse0x302fac0();
   input += synapse0x302fb00();
   input += synapse0x302fb40();
   input += synapse0x3030120();
   input += synapse0x3030160();
   input += synapse0x30301a0();
   input += synapse0x30301e0();
   input += synapse0x3030220();
   input += synapse0x3030260();
   input += synapse0x30302a0();
   input += synapse0x30302e0();
   input += synapse0x3030320();
   input += synapse0x3030360();
   input += synapse0x30303a0();
   input += synapse0x30303e0();
   input += synapse0x3030420();
   input += synapse0x3030460();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x302f340() {
   double input = input0x302f340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x30304a0() {
   double input = 0.135578;
   input += synapse0x30307e0();
   input += synapse0x3030820();
   input += synapse0x3030860();
   input += synapse0x30308a0();
   input += synapse0x30308e0();
   input += synapse0x3030920();
   input += synapse0x3030960();
   input += synapse0x30309a0();
   input += synapse0x30309e0();
   input += synapse0x3030a20();
   input += synapse0x3030a60();
   input += synapse0x3030aa0();
   input += synapse0x3030ae0();
   input += synapse0x3030b20();
   input += synapse0x3030b60();
   input += synapse0x3030ba0();
   input += synapse0x3030630();
   input += synapse0x3030670();
   input += synapse0x3030cf0();
   input += synapse0x3030d30();
   input += synapse0x3030d70();
   input += synapse0x3030db0();
   input += synapse0x3030df0();
   input += synapse0x3030e30();
   input += synapse0x3030e70();
   input += synapse0x3030eb0();
   input += synapse0x3030ef0();
   input += synapse0x3030f30();
   input += synapse0x3030f70();
   input += synapse0x3030fb0();
   input += synapse0x3030ff0();
   input += synapse0x3031030();
   input += synapse0x3030be0();
   input += synapse0x3030c20();
   input += synapse0x3030c60();
   input += synapse0x3030ca0();
   input += synapse0x3031280();
   input += synapse0x30312c0();
   input += synapse0x3031300();
   input += synapse0x3031340();
   input += synapse0x3031380();
   input += synapse0x30313c0();
   input += synapse0x3031400();
   input += synapse0x3031440();
   input += synapse0x3031480();
   input += synapse0x30314c0();
   input += synapse0x3031500();
   input += synapse0x3031540();
   input += synapse0x3031580();
   input += synapse0x30315c0();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x30304a0() {
   double input = input0x30304a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3031600() {
   double input = 0.729376;
   input += synapse0x3031940();
   input += synapse0x3031980();
   input += synapse0x30319c0();
   input += synapse0x3031a00();
   input += synapse0x3031a40();
   input += synapse0x3031a80();
   input += synapse0x3031ac0();
   input += synapse0x3031b00();
   input += synapse0x3031b40();
   input += synapse0x3031b80();
   input += synapse0x3031bc0();
   input += synapse0x3031c00();
   input += synapse0x3031c40();
   input += synapse0x3031c80();
   input += synapse0x3031cc0();
   input += synapse0x3031d00();
   input += synapse0x3031790();
   input += synapse0x30317d0();
   input += synapse0x3031e50();
   input += synapse0x3031e90();
   input += synapse0x3031ed0();
   input += synapse0x3031f10();
   input += synapse0x3031f50();
   input += synapse0x3031f90();
   input += synapse0x3031fd0();
   input += synapse0x3032010();
   input += synapse0x3032050();
   input += synapse0x3032090();
   input += synapse0x30320d0();
   input += synapse0x3032110();
   input += synapse0x3032150();
   input += synapse0x3032190();
   input += synapse0x3031d40();
   input += synapse0x3031d80();
   input += synapse0x3031dc0();
   input += synapse0x3031e00();
   input += synapse0x30323e0();
   input += synapse0x3032420();
   input += synapse0x3032460();
   input += synapse0x30324a0();
   input += synapse0x30324e0();
   input += synapse0x3032520();
   input += synapse0x3032560();
   input += synapse0x30325a0();
   input += synapse0x30325e0();
   input += synapse0x3032620();
   input += synapse0x3032660();
   input += synapse0x30326a0();
   input += synapse0x30326e0();
   input += synapse0x3032720();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3031600() {
   double input = input0x3031600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cR::input0x3032760() {
   double input = -1.17584;
   input += synapse0x3032980();
   input += synapse0x30329c0();
   input += synapse0x3032a00();
   input += synapse0x3032a40();
   input += synapse0x3032a80();
   return input;
}

double NNfunction_ns_chi02_cR::neuron0x3032760() {
   double input = input0x3032760();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_cR::synapse0x2ffe710() {
   return (neuron0x2ffe850()*1.06901);
}

double NNfunction_ns_chi02_cR::synapse0x2ffe750() {
   return (neuron0x2ffeb90()*-0.516533);
}

double NNfunction_ns_chi02_cR::synapse0x3003b30() {
   return (neuron0x2ffeed0()*0.8318);
}

double NNfunction_ns_chi02_cR::synapse0x3003b70() {
   return (neuron0x2fff210()*-2.55032);
}

double NNfunction_ns_chi02_cR::synapse0x3003bb0() {
   return (neuron0x2fff550()*0.0230288);
}

double NNfunction_ns_chi02_cR::synapse0x3003bf0() {
   return (neuron0x2fff890()*-1.69977);
}

double NNfunction_ns_chi02_cR::synapse0x3003c30() {
   return (neuron0x2fffbd0()*1.10666);
}

double NNfunction_ns_chi02_cR::synapse0x3003c70() {
   return (neuron0x2ffff10()*-0.862111);
}

double NNfunction_ns_chi02_cR::synapse0x3003cb0() {
   return (neuron0x3000250()*-0.914003);
}

double NNfunction_ns_chi02_cR::synapse0x3003cf0() {
   return (neuron0x3000590()*1.5058);
}

double NNfunction_ns_chi02_cR::synapse0x3003d30() {
   return (neuron0x30008d0()*-0.729282);
}

double NNfunction_ns_chi02_cR::synapse0x3003d70() {
   return (neuron0x3000c10()*0.854206);
}

double NNfunction_ns_chi02_cR::synapse0x3003db0() {
   return (neuron0x3000f50()*0.238875);
}

double NNfunction_ns_chi02_cR::synapse0x3003df0() {
   return (neuron0x3001290()*1.12647);
}

double NNfunction_ns_chi02_cR::synapse0x3003e30() {
   return (neuron0x30015d0()*1.37663);
}

double NNfunction_ns_chi02_cR::synapse0x3003e70() {
   return (neuron0x3001910()*-1.57043);
}

double NNfunction_ns_chi02_cR::synapse0x2ffe680() {
   return (neuron0x3001c50()*0.403791);
}

double NNfunction_ns_chi02_cR::synapse0x2ffe6c0() {
   return (neuron0x30021b0()*-0.538028);
}

double NNfunction_ns_chi02_cR::synapse0x2db99f0() {
   return (neuron0x30023d0()*-0.595413);
}

double NNfunction_ns_chi02_cR::synapse0x2db9a30() {
   return (neuron0x3002710()*-0.93973);
}

double NNfunction_ns_chi02_cR::synapse0x30040d0() {
   return (neuron0x3002a50()*0.180429);
}

double NNfunction_ns_chi02_cR::synapse0x3004110() {
   return (neuron0x3002d90()*-0.325434);
}

double NNfunction_ns_chi02_cR::synapse0x3004150() {
   return (neuron0x30030d0()*-1.24321);
}

double NNfunction_ns_chi02_cR::synapse0x3004190() {
   return (neuron0x3003410()*1.8781);
}

double NNfunction_ns_chi02_cR::synapse0x3004510() {
   return (neuron0x2ffe850()*0.187412);
}

double NNfunction_ns_chi02_cR::synapse0x3004550() {
   return (neuron0x2ffeb90()*14.3891);
}

double NNfunction_ns_chi02_cR::synapse0x3004590() {
   return (neuron0x2ffeed0()*0.443132);
}

double NNfunction_ns_chi02_cR::synapse0x30045d0() {
   return (neuron0x2fff210()*-0.00581344);
}

double NNfunction_ns_chi02_cR::synapse0x3004610() {
   return (neuron0x2fff550()*0.0368292);
}

double NNfunction_ns_chi02_cR::synapse0x3004650() {
   return (neuron0x2fff890()*0.0137667);
}

double NNfunction_ns_chi02_cR::synapse0x3004690() {
   return (neuron0x2fffbd0()*-0.0319197);
}

double NNfunction_ns_chi02_cR::synapse0x30046d0() {
   return (neuron0x2ffff10()*-0.0190304);
}

double NNfunction_ns_chi02_cR::synapse0x3004710() {
   return (neuron0x3000250()*0.0138372);
}

double NNfunction_ns_chi02_cR::synapse0x3003fc0() {
   return (neuron0x3000590()*-0.0149993);
}

double NNfunction_ns_chi02_cR::synapse0x3004000() {
   return (neuron0x30008d0()*0.0508173);
}

double NNfunction_ns_chi02_cR::synapse0x3004040() {
   return (neuron0x3000c10()*-0.018306);
}

double NNfunction_ns_chi02_cR::synapse0x3004080() {
   return (neuron0x3000f50()*0.0280865);
}

double NNfunction_ns_chi02_cR::synapse0x3004960() {
   return (neuron0x3001290()*0.0130005);
}

double NNfunction_ns_chi02_cR::synapse0x30049a0() {
   return (neuron0x30015d0()*-0.0284887);
}

double NNfunction_ns_chi02_cR::synapse0x30049e0() {
   return (neuron0x3001910()*-0.1762);
}

double NNfunction_ns_chi02_cR::synapse0x3004360() {
   return (neuron0x3001c50()*-0.0217165);
}

double NNfunction_ns_chi02_cR::synapse0x30043a0() {
   return (neuron0x30021b0()*0.0635138);
}

double NNfunction_ns_chi02_cR::synapse0x3004b30() {
   return (neuron0x30023d0()*0.0186624);
}

double NNfunction_ns_chi02_cR::synapse0x3004b70() {
   return (neuron0x3002710()*0.0272484);
}

double NNfunction_ns_chi02_cR::synapse0x3004bb0() {
   return (neuron0x3002a50()*0.0375874);
}

double NNfunction_ns_chi02_cR::synapse0x3004bf0() {
   return (neuron0x3002d90()*-0.0204595);
}

double NNfunction_ns_chi02_cR::synapse0x3004c30() {
   return (neuron0x30030d0()*-0.00395897);
}

double NNfunction_ns_chi02_cR::synapse0x3004c70() {
   return (neuron0x3003410()*7.24611);
}

double NNfunction_ns_chi02_cR::synapse0x3004ff0() {
   return (neuron0x2ffe850()*-0.58866);
}

double NNfunction_ns_chi02_cR::synapse0x3005030() {
   return (neuron0x2ffeb90()*-3.2145);
}

double NNfunction_ns_chi02_cR::synapse0x3005070() {
   return (neuron0x2ffeed0()*0.123337);
}

double NNfunction_ns_chi02_cR::synapse0x30050b0() {
   return (neuron0x2fff210()*-2.25155);
}

double NNfunction_ns_chi02_cR::synapse0x30050f0() {
   return (neuron0x2fff550()*0.459012);
}

double NNfunction_ns_chi02_cR::synapse0x3005130() {
   return (neuron0x2fff890()*1.45036);
}

double NNfunction_ns_chi02_cR::synapse0x3005170() {
   return (neuron0x2fffbd0()*0.778692);
}

double NNfunction_ns_chi02_cR::synapse0x30051b0() {
   return (neuron0x2ffff10()*0.468502);
}

double NNfunction_ns_chi02_cR::synapse0x30051f0() {
   return (neuron0x3000250()*-1.62498);
}

double NNfunction_ns_chi02_cR::synapse0x3005230() {
   return (neuron0x3000590()*-0.939437);
}

double NNfunction_ns_chi02_cR::synapse0x3005270() {
   return (neuron0x30008d0()*-0.776225);
}

double NNfunction_ns_chi02_cR::synapse0x30052b0() {
   return (neuron0x3000c10()*0.280955);
}

double NNfunction_ns_chi02_cR::synapse0x30052f0() {
   return (neuron0x3000f50()*-1.15193);
}

double NNfunction_ns_chi02_cR::synapse0x3005330() {
   return (neuron0x3001290()*-0.214454);
}

double NNfunction_ns_chi02_cR::synapse0x3005370() {
   return (neuron0x30015d0()*1.07559);
}

double NNfunction_ns_chi02_cR::synapse0x30053b0() {
   return (neuron0x3001910()*-0.377948);
}

double NNfunction_ns_chi02_cR::synapse0x3004e40() {
   return (neuron0x3001c50()*-1.72181);
}

double NNfunction_ns_chi02_cR::synapse0x3004e80() {
   return (neuron0x30021b0()*-1.07586);
}

double NNfunction_ns_chi02_cR::synapse0x2dba0e0() {
   return (neuron0x30023d0()*1.42125);
}

double NNfunction_ns_chi02_cR::synapse0x2dc79b0() {
   return (neuron0x3002710()*-0.477203);
}

double NNfunction_ns_chi02_cR::synapse0x2dc79f0() {
   return (neuron0x3002a50()*-0.130575);
}

double NNfunction_ns_chi02_cR::synapse0x2fed8e0() {
   return (neuron0x3002d90()*-0.983621);
}

double NNfunction_ns_chi02_cR::synapse0x2fed920() {
   return (neuron0x30030d0()*-0.302737);
}

double NNfunction_ns_chi02_cR::synapse0x2fed960() {
   return (neuron0x3003410()*-0.374958);
}

double NNfunction_ns_chi02_cR::synapse0x2dc8230() {
   return (neuron0x2ffe850()*-0.397102);
}

double NNfunction_ns_chi02_cR::synapse0x30048e0() {
   return (neuron0x2ffeb90()*-1.16048);
}

double NNfunction_ns_chi02_cR::synapse0x3004920() {
   return (neuron0x2ffeed0()*0.385751);
}

double NNfunction_ns_chi02_cR::synapse0x3005500() {
   return (neuron0x2fff210()*0.720434);
}

double NNfunction_ns_chi02_cR::synapse0x3005540() {
   return (neuron0x2fff550()*0.264413);
}

double NNfunction_ns_chi02_cR::synapse0x3005580() {
   return (neuron0x2fff890()*0.837361);
}

double NNfunction_ns_chi02_cR::synapse0x30055c0() {
   return (neuron0x2fffbd0()*-0.6146);
}

double NNfunction_ns_chi02_cR::synapse0x3005600() {
   return (neuron0x2ffff10()*0.023092);
}

double NNfunction_ns_chi02_cR::synapse0x3005640() {
   return (neuron0x3000250()*0.454012);
}

double NNfunction_ns_chi02_cR::synapse0x3005680() {
   return (neuron0x3000590()*0.805957);
}

double NNfunction_ns_chi02_cR::synapse0x30056c0() {
   return (neuron0x30008d0()*1.35613);
}

double NNfunction_ns_chi02_cR::synapse0x3005700() {
   return (neuron0x3000c10()*-0.693756);
}

double NNfunction_ns_chi02_cR::synapse0x3005740() {
   return (neuron0x3000f50()*-2.27153);
}

double NNfunction_ns_chi02_cR::synapse0x3005780() {
   return (neuron0x3001290()*-0.385281);
}

double NNfunction_ns_chi02_cR::synapse0x30057c0() {
   return (neuron0x30015d0()*-1.22099);
}

double NNfunction_ns_chi02_cR::synapse0x3005800() {
   return (neuron0x3001910()*1.39017);
}

double NNfunction_ns_chi02_cR::synapse0x2ffe790() {
   return (neuron0x3001c50()*-1.0651);
}

double NNfunction_ns_chi02_cR::synapse0x2ffe7d0() {
   return (neuron0x30021b0()*0.212238);
}

double NNfunction_ns_chi02_cR::synapse0x2ffe810() {
   return (neuron0x30023d0()*0.814629);
}

double NNfunction_ns_chi02_cR::synapse0x3005950() {
   return (neuron0x3002710()*0.549603);
}

double NNfunction_ns_chi02_cR::synapse0x3005990() {
   return (neuron0x3002a50()*0.743132);
}

double NNfunction_ns_chi02_cR::synapse0x30059d0() {
   return (neuron0x3002d90()*-0.52919);
}

double NNfunction_ns_chi02_cR::synapse0x3005a10() {
   return (neuron0x30030d0()*0.304004);
}

double NNfunction_ns_chi02_cR::synapse0x3005a50() {
   return (neuron0x3003410()*0.0576312);
}

double NNfunction_ns_chi02_cR::synapse0x3005dd0() {
   return (neuron0x2ffe850()*0.0485993);
}

double NNfunction_ns_chi02_cR::synapse0x3005e10() {
   return (neuron0x2ffeb90()*1.29076);
}

double NNfunction_ns_chi02_cR::synapse0x3005e50() {
   return (neuron0x2ffeed0()*0.443932);
}

double NNfunction_ns_chi02_cR::synapse0x3005e90() {
   return (neuron0x2fff210()*0.568762);
}

double NNfunction_ns_chi02_cR::synapse0x3005ed0() {
   return (neuron0x2fff550()*2.39655);
}

double NNfunction_ns_chi02_cR::synapse0x3005f10() {
   return (neuron0x2fff890()*-1.26088);
}

double NNfunction_ns_chi02_cR::synapse0x3005f50() {
   return (neuron0x2fffbd0()*1.02699);
}

double NNfunction_ns_chi02_cR::synapse0x3005f90() {
   return (neuron0x2ffff10()*0.228649);
}

double NNfunction_ns_chi02_cR::synapse0x3005fd0() {
   return (neuron0x3000250()*0.277581);
}

double NNfunction_ns_chi02_cR::synapse0x3006010() {
   return (neuron0x3000590()*0.210942);
}

double NNfunction_ns_chi02_cR::synapse0x3006050() {
   return (neuron0x30008d0()*0.156974);
}

double NNfunction_ns_chi02_cR::synapse0x3006090() {
   return (neuron0x3000c10()*-2.13145);
}

double NNfunction_ns_chi02_cR::synapse0x30060d0() {
   return (neuron0x3000f50()*-0.236097);
}

double NNfunction_ns_chi02_cR::synapse0x3006110() {
   return (neuron0x3001290()*1.29352);
}

double NNfunction_ns_chi02_cR::synapse0x3006150() {
   return (neuron0x30015d0()*0.281636);
}

double NNfunction_ns_chi02_cR::synapse0x3006190() {
   return (neuron0x3001910()*1.28769);
}

double NNfunction_ns_chi02_cR::synapse0x3005c20() {
   return (neuron0x3001c50()*-1.16239);
}

double NNfunction_ns_chi02_cR::synapse0x3005c60() {
   return (neuron0x30021b0()*1.61263);
}

double NNfunction_ns_chi02_cR::synapse0x30062e0() {
   return (neuron0x30023d0()*-0.182706);
}

double NNfunction_ns_chi02_cR::synapse0x3006320() {
   return (neuron0x3002710()*-0.788862);
}

double NNfunction_ns_chi02_cR::synapse0x3006360() {
   return (neuron0x3002a50()*-0.12074);
}

double NNfunction_ns_chi02_cR::synapse0x30063a0() {
   return (neuron0x3002d90()*-1.23007);
}

double NNfunction_ns_chi02_cR::synapse0x30063e0() {
   return (neuron0x30030d0()*0.871885);
}

double NNfunction_ns_chi02_cR::synapse0x3006420() {
   return (neuron0x3003410()*0.143435);
}

double NNfunction_ns_chi02_cR::synapse0x30067a0() {
   return (neuron0x2ffe850()*0.00547128);
}

double NNfunction_ns_chi02_cR::synapse0x30067e0() {
   return (neuron0x2ffeb90()*12.3284);
}

double NNfunction_ns_chi02_cR::synapse0x3006820() {
   return (neuron0x2ffeed0()*0.0136354);
}

double NNfunction_ns_chi02_cR::synapse0x3006860() {
   return (neuron0x2fff210()*0.00495242);
}

double NNfunction_ns_chi02_cR::synapse0x30068a0() {
   return (neuron0x2fff550()*-0.130091);
}

double NNfunction_ns_chi02_cR::synapse0x30068e0() {
   return (neuron0x2fff890()*-0.0326836);
}

double NNfunction_ns_chi02_cR::synapse0x3006920() {
   return (neuron0x2fffbd0()*-0.0116252);
}

double NNfunction_ns_chi02_cR::synapse0x3006960() {
   return (neuron0x2ffff10()*-0.0304893);
}

double NNfunction_ns_chi02_cR::synapse0x30069a0() {
   return (neuron0x3000250()*-0.0179365);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7d00() {
   return (neuron0x3000590()*0.0379256);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7d40() {
   return (neuron0x30008d0()*-0.0235338);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7d80() {
   return (neuron0x3000c10()*0.0352271);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7dc0() {
   return (neuron0x3000f50()*0.00851139);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7e00() {
   return (neuron0x3001290()*-0.0547513);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7e40() {
   return (neuron0x30015d0()*-0.0383911);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7e80() {
   return (neuron0x3001910()*-0.0210129);
}

double NNfunction_ns_chi02_cR::synapse0x30065f0() {
   return (neuron0x3001c50()*-0.0120691);
}

double NNfunction_ns_chi02_cR::synapse0x3006630() {
   return (neuron0x30021b0()*-0.0219079);
}

double NNfunction_ns_chi02_cR::synapse0x2dc7fd0() {
   return (neuron0x30023d0()*0.0118459);
}

double NNfunction_ns_chi02_cR::synapse0x2dc8010() {
   return (neuron0x3002710()*0.0125973);
}

double NNfunction_ns_chi02_cR::synapse0x2dc8050() {
   return (neuron0x3002a50()*0.0553524);
}

double NNfunction_ns_chi02_cR::synapse0x2dc8090() {
   return (neuron0x3002d90()*0.0313051);
}

double NNfunction_ns_chi02_cR::synapse0x2dc80d0() {
   return (neuron0x30030d0()*-0.00926161);
}

double NNfunction_ns_chi02_cR::synapse0x30071f0() {
   return (neuron0x3003410()*0.0210989);
}

double NNfunction_ns_chi02_cR::synapse0x3007570() {
   return (neuron0x2ffe850()*0.0921545);
}

double NNfunction_ns_chi02_cR::synapse0x30075b0() {
   return (neuron0x2ffeb90()*0.741457);
}

double NNfunction_ns_chi02_cR::synapse0x30075f0() {
   return (neuron0x2ffeed0()*-1.65325);
}

double NNfunction_ns_chi02_cR::synapse0x3007630() {
   return (neuron0x2fff210()*-1.96343);
}

double NNfunction_ns_chi02_cR::synapse0x3007670() {
   return (neuron0x2fff550()*0.659215);
}

double NNfunction_ns_chi02_cR::synapse0x30076b0() {
   return (neuron0x2fff890()*-0.736463);
}

double NNfunction_ns_chi02_cR::synapse0x30076f0() {
   return (neuron0x2fffbd0()*-1.75729);
}

double NNfunction_ns_chi02_cR::synapse0x3007730() {
   return (neuron0x2ffff10()*0.69557);
}

double NNfunction_ns_chi02_cR::synapse0x3007770() {
   return (neuron0x3000250()*-0.14794);
}

double NNfunction_ns_chi02_cR::synapse0x30077b0() {
   return (neuron0x3000590()*1.6042);
}

double NNfunction_ns_chi02_cR::synapse0x30077f0() {
   return (neuron0x30008d0()*-1.98988);
}

double NNfunction_ns_chi02_cR::synapse0x3007830() {
   return (neuron0x3000c10()*-2.17692);
}

double NNfunction_ns_chi02_cR::synapse0x3007870() {
   return (neuron0x3000f50()*1.42951);
}

double NNfunction_ns_chi02_cR::synapse0x30078b0() {
   return (neuron0x3001290()*-0.184076);
}

double NNfunction_ns_chi02_cR::synapse0x30078f0() {
   return (neuron0x30015d0()*0.493194);
}

double NNfunction_ns_chi02_cR::synapse0x3007930() {
   return (neuron0x3001910()*-0.339374);
}

double NNfunction_ns_chi02_cR::synapse0x30073c0() {
   return (neuron0x3001c50()*-0.374186);
}

double NNfunction_ns_chi02_cR::synapse0x3007400() {
   return (neuron0x30021b0()*-0.766838);
}

double NNfunction_ns_chi02_cR::synapse0x3007a80() {
   return (neuron0x30023d0()*-0.477347);
}

double NNfunction_ns_chi02_cR::synapse0x3007ac0() {
   return (neuron0x3002710()*-1.11292);
}

double NNfunction_ns_chi02_cR::synapse0x3007b00() {
   return (neuron0x3002a50()*1.238);
}

double NNfunction_ns_chi02_cR::synapse0x3007b40() {
   return (neuron0x3002d90()*1.90887);
}

double NNfunction_ns_chi02_cR::synapse0x3007b80() {
   return (neuron0x30030d0()*1.36783);
}

double NNfunction_ns_chi02_cR::synapse0x3007bc0() {
   return (neuron0x3003410()*-0.760133);
}

double NNfunction_ns_chi02_cR::synapse0x3007f40() {
   return (neuron0x2ffe850()*0.900179);
}

double NNfunction_ns_chi02_cR::synapse0x3007f80() {
   return (neuron0x2ffeb90()*1.44042);
}

double NNfunction_ns_chi02_cR::synapse0x3007fc0() {
   return (neuron0x2ffeed0()*0.40642);
}

double NNfunction_ns_chi02_cR::synapse0x3008000() {
   return (neuron0x2fff210()*0.626389);
}

double NNfunction_ns_chi02_cR::synapse0x3008040() {
   return (neuron0x2fff550()*-1.23858);
}

double NNfunction_ns_chi02_cR::synapse0x3008080() {
   return (neuron0x2fff890()*0.103681);
}

double NNfunction_ns_chi02_cR::synapse0x30080c0() {
   return (neuron0x2fffbd0()*-0.885559);
}

double NNfunction_ns_chi02_cR::synapse0x3008100() {
   return (neuron0x2ffff10()*-1.31705);
}

double NNfunction_ns_chi02_cR::synapse0x3008140() {
   return (neuron0x3000250()*1.88882);
}

double NNfunction_ns_chi02_cR::synapse0x3008180() {
   return (neuron0x3000590()*1.82377);
}

double NNfunction_ns_chi02_cR::synapse0x30081c0() {
   return (neuron0x30008d0()*2.35145);
}

double NNfunction_ns_chi02_cR::synapse0x3008200() {
   return (neuron0x3000c10()*0.0226717);
}

double NNfunction_ns_chi02_cR::synapse0x3008240() {
   return (neuron0x3000f50()*-0.229759);
}

double NNfunction_ns_chi02_cR::synapse0x3008280() {
   return (neuron0x3001290()*3.02863);
}

double NNfunction_ns_chi02_cR::synapse0x30082c0() {
   return (neuron0x30015d0()*-0.396419);
}

double NNfunction_ns_chi02_cR::synapse0x3008300() {
   return (neuron0x3001910()*-1.82222);
}

double NNfunction_ns_chi02_cR::synapse0x3007d90() {
   return (neuron0x3001c50()*1.16515);
}

double NNfunction_ns_chi02_cR::synapse0x3007dd0() {
   return (neuron0x30021b0()*1.7579);
}

double NNfunction_ns_chi02_cR::synapse0x3008450() {
   return (neuron0x30023d0()*-0.861909);
}

double NNfunction_ns_chi02_cR::synapse0x3008490() {
   return (neuron0x3002710()*-0.198625);
}

double NNfunction_ns_chi02_cR::synapse0x30084d0() {
   return (neuron0x3002a50()*1.27085);
}

double NNfunction_ns_chi02_cR::synapse0x3008510() {
   return (neuron0x3002d90()*-1.53124);
}

double NNfunction_ns_chi02_cR::synapse0x3008550() {
   return (neuron0x30030d0()*-0.974421);
}

double NNfunction_ns_chi02_cR::synapse0x3008590() {
   return (neuron0x3003410()*-0.699952);
}

double NNfunction_ns_chi02_cR::synapse0x30020a0() {
   return (neuron0x2ffe850()*-0.0235168);
}

double NNfunction_ns_chi02_cR::synapse0x30020e0() {
   return (neuron0x2ffeb90()*-0.00254667);
}

double NNfunction_ns_chi02_cR::synapse0x3002120() {
   return (neuron0x2ffeed0()*0.360104);
}

double NNfunction_ns_chi02_cR::synapse0x3002160() {
   return (neuron0x2fff210()*0.0407268);
}

double NNfunction_ns_chi02_cR::synapse0x3008b20() {
   return (neuron0x2fff550()*0.00403352);
}

double NNfunction_ns_chi02_cR::synapse0x3008b60() {
   return (neuron0x2fff890()*0.00460896);
}

double NNfunction_ns_chi02_cR::synapse0x3008ba0() {
   return (neuron0x2fffbd0()*-0.0284341);
}

double NNfunction_ns_chi02_cR::synapse0x3008be0() {
   return (neuron0x2ffff10()*0.0310933);
}

double NNfunction_ns_chi02_cR::synapse0x3008c20() {
   return (neuron0x3000250()*-0.0507181);
}

double NNfunction_ns_chi02_cR::synapse0x3008c60() {
   return (neuron0x3000590()*0.0147431);
}

double NNfunction_ns_chi02_cR::synapse0x3008ca0() {
   return (neuron0x30008d0()*0.0160025);
}

double NNfunction_ns_chi02_cR::synapse0x3008ce0() {
   return (neuron0x3000c10()*0.0224988);
}

double NNfunction_ns_chi02_cR::synapse0x3008d20() {
   return (neuron0x3000f50()*0.0491036);
}

double NNfunction_ns_chi02_cR::synapse0x3008d60() {
   return (neuron0x3001290()*-0.000625154);
}

double NNfunction_ns_chi02_cR::synapse0x3008da0() {
   return (neuron0x30015d0()*0.00945931);
}

double NNfunction_ns_chi02_cR::synapse0x3008de0() {
   return (neuron0x3001910()*-0.514919);
}

double NNfunction_ns_chi02_cR::synapse0x3008760() {
   return (neuron0x3001c50()*0.00305088);
}

double NNfunction_ns_chi02_cR::synapse0x30087a0() {
   return (neuron0x30021b0()*0.0918172);
}

double NNfunction_ns_chi02_cR::synapse0x3008f30() {
   return (neuron0x30023d0()*-9.25272e-05);
}

double NNfunction_ns_chi02_cR::synapse0x3008f70() {
   return (neuron0x3002710()*-0.0237595);
}

double NNfunction_ns_chi02_cR::synapse0x3008fb0() {
   return (neuron0x3002a50()*0.0578434);
}

double NNfunction_ns_chi02_cR::synapse0x3008ff0() {
   return (neuron0x3002d90()*0.0186234);
}

double NNfunction_ns_chi02_cR::synapse0x3009030() {
   return (neuron0x30030d0()*-0.0111472);
}

double NNfunction_ns_chi02_cR::synapse0x3009070() {
   return (neuron0x3003410()*3.36766);
}

double NNfunction_ns_chi02_cR::synapse0x30093f0() {
   return (neuron0x2ffe850()*-0.196039);
}

double NNfunction_ns_chi02_cR::synapse0x3009430() {
   return (neuron0x2ffeb90()*-0.648975);
}

double NNfunction_ns_chi02_cR::synapse0x3009470() {
   return (neuron0x2ffeed0()*0.383877);
}

double NNfunction_ns_chi02_cR::synapse0x30094b0() {
   return (neuron0x2fff210()*-0.764364);
}

double NNfunction_ns_chi02_cR::synapse0x30094f0() {
   return (neuron0x2fff550()*-0.456941);
}

double NNfunction_ns_chi02_cR::synapse0x3009530() {
   return (neuron0x2fff890()*0.478736);
}

double NNfunction_ns_chi02_cR::synapse0x3009570() {
   return (neuron0x2fffbd0()*0.21535);
}

double NNfunction_ns_chi02_cR::synapse0x30095b0() {
   return (neuron0x2ffff10()*0.304646);
}

double NNfunction_ns_chi02_cR::synapse0x30095f0() {
   return (neuron0x3000250()*0.547525);
}

double NNfunction_ns_chi02_cR::synapse0x3009630() {
   return (neuron0x3000590()*1.47228);
}

double NNfunction_ns_chi02_cR::synapse0x3009670() {
   return (neuron0x30008d0()*0.41818);
}

double NNfunction_ns_chi02_cR::synapse0x30096b0() {
   return (neuron0x3000c10()*-0.456853);
}

double NNfunction_ns_chi02_cR::synapse0x30096f0() {
   return (neuron0x3000f50()*0.368196);
}

double NNfunction_ns_chi02_cR::synapse0x3009730() {
   return (neuron0x3001290()*-0.353495);
}

double NNfunction_ns_chi02_cR::synapse0x3009770() {
   return (neuron0x30015d0()*-0.0586181);
}

double NNfunction_ns_chi02_cR::synapse0x30097b0() {
   return (neuron0x3001910()*-0.522371);
}

double NNfunction_ns_chi02_cR::synapse0x3009240() {
   return (neuron0x3001c50()*-0.228111);
}

double NNfunction_ns_chi02_cR::synapse0x3009280() {
   return (neuron0x30021b0()*-1.16637);
}

double NNfunction_ns_chi02_cR::synapse0x3009900() {
   return (neuron0x30023d0()*-1.2237);
}

double NNfunction_ns_chi02_cR::synapse0x3009940() {
   return (neuron0x3002710()*-0.350587);
}

double NNfunction_ns_chi02_cR::synapse0x3009980() {
   return (neuron0x3002a50()*1.06151);
}

double NNfunction_ns_chi02_cR::synapse0x30099c0() {
   return (neuron0x3002d90()*0.632938);
}

double NNfunction_ns_chi02_cR::synapse0x3009a00() {
   return (neuron0x30030d0()*0.978058);
}

double NNfunction_ns_chi02_cR::synapse0x3009a40() {
   return (neuron0x3003410()*1.51891);
}

double NNfunction_ns_chi02_cR::synapse0x3009dc0() {
   return (neuron0x2ffe850()*-0.465256);
}

double NNfunction_ns_chi02_cR::synapse0x3009e00() {
   return (neuron0x2ffeb90()*0.680469);
}

double NNfunction_ns_chi02_cR::synapse0x3009e40() {
   return (neuron0x2ffeed0()*0.511887);
}

double NNfunction_ns_chi02_cR::synapse0x3009e80() {
   return (neuron0x2fff210()*-1.14755);
}

double NNfunction_ns_chi02_cR::synapse0x3009ec0() {
   return (neuron0x2fff550()*-0.587847);
}

double NNfunction_ns_chi02_cR::synapse0x3009f00() {
   return (neuron0x2fff890()*1.3677);
}

double NNfunction_ns_chi02_cR::synapse0x3009f40() {
   return (neuron0x2fffbd0()*-0.276743);
}

double NNfunction_ns_chi02_cR::synapse0x3009f80() {
   return (neuron0x2ffff10()*-0.400954);
}

double NNfunction_ns_chi02_cR::synapse0x3009fc0() {
   return (neuron0x3000250()*0.890827);
}

double NNfunction_ns_chi02_cR::synapse0x300a000() {
   return (neuron0x3000590()*0.339507);
}

double NNfunction_ns_chi02_cR::synapse0x300a040() {
   return (neuron0x30008d0()*0.768292);
}

double NNfunction_ns_chi02_cR::synapse0x300a080() {
   return (neuron0x3000c10()*2.50695);
}

double NNfunction_ns_chi02_cR::synapse0x300a0c0() {
   return (neuron0x3000f50()*0.180678);
}

double NNfunction_ns_chi02_cR::synapse0x300a100() {
   return (neuron0x3001290()*-0.804739);
}

double NNfunction_ns_chi02_cR::synapse0x300a140() {
   return (neuron0x30015d0()*1.1049);
}

double NNfunction_ns_chi02_cR::synapse0x300a180() {
   return (neuron0x3001910()*0.591054);
}

double NNfunction_ns_chi02_cR::synapse0x3009c10() {
   return (neuron0x3001c50()*0.144167);
}

double NNfunction_ns_chi02_cR::synapse0x3009c50() {
   return (neuron0x30021b0()*-0.798202);
}

double NNfunction_ns_chi02_cR::synapse0x30069e0() {
   return (neuron0x30023d0()*0.321662);
}

double NNfunction_ns_chi02_cR::synapse0x3006a20() {
   return (neuron0x3002710()*2.87588);
}

double NNfunction_ns_chi02_cR::synapse0x3006a60() {
   return (neuron0x3002a50()*-0.126836);
}

double NNfunction_ns_chi02_cR::synapse0x3006aa0() {
   return (neuron0x3002d90()*-1.35746);
}

double NNfunction_ns_chi02_cR::synapse0x3006ae0() {
   return (neuron0x30030d0()*-0.160746);
}

double NNfunction_ns_chi02_cR::synapse0x3006b20() {
   return (neuron0x3003410()*-3.33383);
}

double NNfunction_ns_chi02_cR::synapse0x3006ea0() {
   return (neuron0x2ffe850()*-0.741854);
}

double NNfunction_ns_chi02_cR::synapse0x3006ee0() {
   return (neuron0x2ffeb90()*-1.36563);
}

double NNfunction_ns_chi02_cR::synapse0x3006f20() {
   return (neuron0x2ffeed0()*-1.00759);
}

double NNfunction_ns_chi02_cR::synapse0x3006f60() {
   return (neuron0x2fff210()*-1.18353);
}

double NNfunction_ns_chi02_cR::synapse0x3006fa0() {
   return (neuron0x2fff550()*-0.935518);
}

double NNfunction_ns_chi02_cR::synapse0x3006fe0() {
   return (neuron0x2fff890()*-0.735073);
}

double NNfunction_ns_chi02_cR::synapse0x3007020() {
   return (neuron0x2fffbd0()*-0.983704);
}

double NNfunction_ns_chi02_cR::synapse0x3007060() {
   return (neuron0x2ffff10()*0.188178);
}

double NNfunction_ns_chi02_cR::synapse0x30070a0() {
   return (neuron0x3000250()*-0.713104);
}

double NNfunction_ns_chi02_cR::synapse0x30070e0() {
   return (neuron0x3000590()*1.52736);
}

double NNfunction_ns_chi02_cR::synapse0x3007120() {
   return (neuron0x30008d0()*-0.650428);
}

double NNfunction_ns_chi02_cR::synapse0x3007160() {
   return (neuron0x3000c10()*-0.268714);
}

double NNfunction_ns_chi02_cR::synapse0x30071a0() {
   return (neuron0x3000f50()*0.705717);
}

double NNfunction_ns_chi02_cR::synapse0x300b2e0() {
   return (neuron0x3001290()*-0.873558);
}

double NNfunction_ns_chi02_cR::synapse0x300b320() {
   return (neuron0x30015d0()*-0.762388);
}

double NNfunction_ns_chi02_cR::synapse0x300b360() {
   return (neuron0x3001910()*0.233407);
}

double NNfunction_ns_chi02_cR::synapse0x3006cf0() {
   return (neuron0x3001c50()*-1.76227);
}

double NNfunction_ns_chi02_cR::synapse0x3006d30() {
   return (neuron0x30021b0()*-1.133);
}

double NNfunction_ns_chi02_cR::synapse0x300b4b0() {
   return (neuron0x30023d0()*-0.764559);
}

double NNfunction_ns_chi02_cR::synapse0x300b4f0() {
   return (neuron0x3002710()*0.756046);
}

double NNfunction_ns_chi02_cR::synapse0x300b530() {
   return (neuron0x3002a50()*-0.807168);
}

double NNfunction_ns_chi02_cR::synapse0x300b570() {
   return (neuron0x3002d90()*0.347622);
}

double NNfunction_ns_chi02_cR::synapse0x300b5b0() {
   return (neuron0x30030d0()*0.50227);
}

double NNfunction_ns_chi02_cR::synapse0x300b5f0() {
   return (neuron0x3003410()*1.23487);
}

double NNfunction_ns_chi02_cR::synapse0x300b970() {
   return (neuron0x2ffe850()*0.19637);
}

double NNfunction_ns_chi02_cR::synapse0x300b9b0() {
   return (neuron0x2ffeb90()*10.9809);
}

double NNfunction_ns_chi02_cR::synapse0x300b9f0() {
   return (neuron0x2ffeed0()*0.570988);
}

double NNfunction_ns_chi02_cR::synapse0x300ba30() {
   return (neuron0x2fff210()*0.037499);
}

double NNfunction_ns_chi02_cR::synapse0x300ba70() {
   return (neuron0x2fff550()*-0.00987091);
}

double NNfunction_ns_chi02_cR::synapse0x300bab0() {
   return (neuron0x2fff890()*0.00454022);
}

double NNfunction_ns_chi02_cR::synapse0x300baf0() {
   return (neuron0x2fffbd0()*-0.0426863);
}

double NNfunction_ns_chi02_cR::synapse0x300bb30() {
   return (neuron0x2ffff10()*-0.0418591);
}

double NNfunction_ns_chi02_cR::synapse0x300bb70() {
   return (neuron0x3000250()*-0.0164683);
}

double NNfunction_ns_chi02_cR::synapse0x300bbb0() {
   return (neuron0x3000590()*-0.00431337);
}

double NNfunction_ns_chi02_cR::synapse0x300bbf0() {
   return (neuron0x30008d0()*0.0526221);
}

double NNfunction_ns_chi02_cR::synapse0x300bc30() {
   return (neuron0x3000c10()*-0.0108382);
}

double NNfunction_ns_chi02_cR::synapse0x300bc70() {
   return (neuron0x3000f50()*0.0394243);
}

double NNfunction_ns_chi02_cR::synapse0x300bcb0() {
   return (neuron0x3001290()*0.0261359);
}

double NNfunction_ns_chi02_cR::synapse0x300bcf0() {
   return (neuron0x30015d0()*-0.0650666);
}

double NNfunction_ns_chi02_cR::synapse0x300bd30() {
   return (neuron0x3001910()*-0.251013);
}

double NNfunction_ns_chi02_cR::synapse0x300b7c0() {
   return (neuron0x3001c50()*-0.037014);
}

double NNfunction_ns_chi02_cR::synapse0x300b800() {
   return (neuron0x30021b0()*0.0599935);
}

double NNfunction_ns_chi02_cR::synapse0x300be80() {
   return (neuron0x30023d0()*0.0434411);
}

double NNfunction_ns_chi02_cR::synapse0x300bec0() {
   return (neuron0x3002710()*0.0269846);
}

double NNfunction_ns_chi02_cR::synapse0x300bf00() {
   return (neuron0x3002a50()*0.0552614);
}

double NNfunction_ns_chi02_cR::synapse0x300bf40() {
   return (neuron0x3002d90()*-0.0173613);
}

double NNfunction_ns_chi02_cR::synapse0x300bf80() {
   return (neuron0x30030d0()*0.0108473);
}

double NNfunction_ns_chi02_cR::synapse0x300bfc0() {
   return (neuron0x3003410()*6.35962);
}

double NNfunction_ns_chi02_cR::synapse0x300c340() {
   return (neuron0x2ffe850()*-0.991179);
}

double NNfunction_ns_chi02_cR::synapse0x300c380() {
   return (neuron0x2ffeb90()*2.88017);
}

double NNfunction_ns_chi02_cR::synapse0x300c3c0() {
   return (neuron0x2ffeed0()*1.18916);
}

double NNfunction_ns_chi02_cR::synapse0x300c400() {
   return (neuron0x2fff210()*1.20675);
}

double NNfunction_ns_chi02_cR::synapse0x300c440() {
   return (neuron0x2fff550()*0.0547333);
}

double NNfunction_ns_chi02_cR::synapse0x300c480() {
   return (neuron0x2fff890()*-1.31417);
}

double NNfunction_ns_chi02_cR::synapse0x300c4c0() {
   return (neuron0x2fffbd0()*1.14778);
}

double NNfunction_ns_chi02_cR::synapse0x300c500() {
   return (neuron0x2ffff10()*-0.0474899);
}

double NNfunction_ns_chi02_cR::synapse0x300c540() {
   return (neuron0x3000250()*0.191403);
}

double NNfunction_ns_chi02_cR::synapse0x300c580() {
   return (neuron0x3000590()*0.61464);
}

double NNfunction_ns_chi02_cR::synapse0x300c5c0() {
   return (neuron0x30008d0()*0.399647);
}

double NNfunction_ns_chi02_cR::synapse0x300c600() {
   return (neuron0x3000c10()*0.160551);
}

double NNfunction_ns_chi02_cR::synapse0x300c640() {
   return (neuron0x3000f50()*0.105589);
}

double NNfunction_ns_chi02_cR::synapse0x300c680() {
   return (neuron0x3001290()*1.12943);
}

double NNfunction_ns_chi02_cR::synapse0x300c6c0() {
   return (neuron0x30015d0()*-0.139802);
}

double NNfunction_ns_chi02_cR::synapse0x300c700() {
   return (neuron0x3001910()*-0.003669);
}

double NNfunction_ns_chi02_cR::synapse0x300c190() {
   return (neuron0x3001c50()*-0.228964);
}

double NNfunction_ns_chi02_cR::synapse0x300c1d0() {
   return (neuron0x30021b0()*1.32863);
}

double NNfunction_ns_chi02_cR::synapse0x300c850() {
   return (neuron0x30023d0()*-0.166538);
}

double NNfunction_ns_chi02_cR::synapse0x300c890() {
   return (neuron0x3002710()*0.661873);
}

double NNfunction_ns_chi02_cR::synapse0x300c8d0() {
   return (neuron0x3002a50()*-0.932894);
}

double NNfunction_ns_chi02_cR::synapse0x300c910() {
   return (neuron0x3002d90()*-1.14355);
}

double NNfunction_ns_chi02_cR::synapse0x300c950() {
   return (neuron0x30030d0()*0.913721);
}

double NNfunction_ns_chi02_cR::synapse0x300c990() {
   return (neuron0x3003410()*-0.700549);
}

double NNfunction_ns_chi02_cR::synapse0x300cd10() {
   return (neuron0x2ffe850()*0.0132525);
}

double NNfunction_ns_chi02_cR::synapse0x300cd50() {
   return (neuron0x2ffeb90()*0.027333);
}

double NNfunction_ns_chi02_cR::synapse0x300cd90() {
   return (neuron0x2ffeed0()*-0.0914532);
}

double NNfunction_ns_chi02_cR::synapse0x300cdd0() {
   return (neuron0x2fff210()*-0.0339938);
}

double NNfunction_ns_chi02_cR::synapse0x300ce10() {
   return (neuron0x2fff550()*0.0301952);
}

double NNfunction_ns_chi02_cR::synapse0x300ce50() {
   return (neuron0x2fff890()*-0.0385671);
}

double NNfunction_ns_chi02_cR::synapse0x300ce90() {
   return (neuron0x2fffbd0()*0.010735);
}

double NNfunction_ns_chi02_cR::synapse0x300ced0() {
   return (neuron0x2ffff10()*-0.00182174);
}

double NNfunction_ns_chi02_cR::synapse0x300cf10() {
   return (neuron0x3000250()*-0.0412926);
}

double NNfunction_ns_chi02_cR::synapse0x300cf50() {
   return (neuron0x3000590()*0.00382);
}

double NNfunction_ns_chi02_cR::synapse0x300cf90() {
   return (neuron0x30008d0()*0.000339671);
}

double NNfunction_ns_chi02_cR::synapse0x300cfd0() {
   return (neuron0x3000c10()*0.0096386);
}

double NNfunction_ns_chi02_cR::synapse0x300d010() {
   return (neuron0x3000f50()*-0.0119104);
}

double NNfunction_ns_chi02_cR::synapse0x300d050() {
   return (neuron0x3001290()*-0.0448705);
}

double NNfunction_ns_chi02_cR::synapse0x300d090() {
   return (neuron0x30015d0()*-0.181153);
}

double NNfunction_ns_chi02_cR::synapse0x300d0d0() {
   return (neuron0x3001910()*-0.703867);
}

double NNfunction_ns_chi02_cR::synapse0x300cb60() {
   return (neuron0x3001c50()*-0.111259);
}

double NNfunction_ns_chi02_cR::synapse0x300cba0() {
   return (neuron0x30021b0()*-3.10923e-05);
}

double NNfunction_ns_chi02_cR::synapse0x300d220() {
   return (neuron0x30023d0()*0.00204586);
}

double NNfunction_ns_chi02_cR::synapse0x300d260() {
   return (neuron0x3002710()*0.00155696);
}

double NNfunction_ns_chi02_cR::synapse0x300d2a0() {
   return (neuron0x3002a50()*-0.00308299);
}

double NNfunction_ns_chi02_cR::synapse0x300d2e0() {
   return (neuron0x3002d90()*-0.00227848);
}

double NNfunction_ns_chi02_cR::synapse0x300d320() {
   return (neuron0x30030d0()*0.0170375);
}

double NNfunction_ns_chi02_cR::synapse0x300d360() {
   return (neuron0x3003410()*0.0632765);
}

double NNfunction_ns_chi02_cR::synapse0x300d6e0() {
   return (neuron0x2ffe850()*-0.0797439);
}

double NNfunction_ns_chi02_cR::synapse0x2ffea70() {
   return (neuron0x2ffeb90()*0.174216);
}

double NNfunction_ns_chi02_cR::synapse0x2ffeab0() {
   return (neuron0x2ffeed0()*0.137117);
}

double NNfunction_ns_chi02_cR::synapse0x2ffedb0() {
   return (neuron0x2fff210()*0.0781526);
}

double NNfunction_ns_chi02_cR::synapse0x2ffedf0() {
   return (neuron0x2fff550()*-0.087437);
}

double NNfunction_ns_chi02_cR::synapse0x2fff0f0() {
   return (neuron0x2fff890()*-0.321834);
}

double NNfunction_ns_chi02_cR::synapse0x2fff130() {
   return (neuron0x2fffbd0()*0.124574);
}

double NNfunction_ns_chi02_cR::synapse0x2fff430() {
   return (neuron0x2ffff10()*-0.070273);
}

double NNfunction_ns_chi02_cR::synapse0x2fff470() {
   return (neuron0x3000250()*-0.212515);
}

double NNfunction_ns_chi02_cR::synapse0x2fff770() {
   return (neuron0x3000590()*0.0137824);
}

double NNfunction_ns_chi02_cR::synapse0x2fff7b0() {
   return (neuron0x30008d0()*0.0548995);
}

double NNfunction_ns_chi02_cR::synapse0x2fffab0() {
   return (neuron0x3000c10()*0.0385521);
}

double NNfunction_ns_chi02_cR::synapse0x2fffaf0() {
   return (neuron0x3000f50()*1.34462);
}

double NNfunction_ns_chi02_cR::synapse0x2fffdf0() {
   return (neuron0x3001290()*-0.143164);
}

double NNfunction_ns_chi02_cR::synapse0x2fffe30() {
   return (neuron0x30015d0()*0.165995);
}

double NNfunction_ns_chi02_cR::synapse0x3000130() {
   return (neuron0x3001910()*-1.31426);
}

double NNfunction_ns_chi02_cR::synapse0x3000170() {
   return (neuron0x3001c50()*-0.355112);
}

double NNfunction_ns_chi02_cR::synapse0x3000470() {
   return (neuron0x30021b0()*1.36762);
}

double NNfunction_ns_chi02_cR::synapse0x30004b0() {
   return (neuron0x30023d0()*-0.0278718);
}

double NNfunction_ns_chi02_cR::synapse0x30007b0() {
   return (neuron0x3002710()*-0.0258356);
}

double NNfunction_ns_chi02_cR::synapse0x30007f0() {
   return (neuron0x3002a50()*0.235949);
}

double NNfunction_ns_chi02_cR::synapse0x3000af0() {
   return (neuron0x3002d90()*0.202865);
}

double NNfunction_ns_chi02_cR::synapse0x3000b30() {
   return (neuron0x30030d0()*0.0613712);
}

double NNfunction_ns_chi02_cR::synapse0x3000e30() {
   return (neuron0x3003410()*1.38874);
}

double NNfunction_ns_chi02_cR::synapse0x3000e70() {
   return (neuron0x2ffe850()*0.258498);
}

double NNfunction_ns_chi02_cR::synapse0x3001b30() {
   return (neuron0x2ffeb90()*-1.37379);
}

double NNfunction_ns_chi02_cR::synapse0x3001b70() {
   return (neuron0x2ffeed0()*1.64927);
}

double NNfunction_ns_chi02_cR::synapse0x300d530() {
   return (neuron0x2fff210()*2.37599);
}

double NNfunction_ns_chi02_cR::synapse0x300d570() {
   return (neuron0x2fff550()*1.07459);
}

double NNfunction_ns_chi02_cR::synapse0x3001e70() {
   return (neuron0x2fff890()*1.0092);
}

double NNfunction_ns_chi02_cR::synapse0x3001eb0() {
   return (neuron0x2fffbd0()*-0.0325174);
}

double NNfunction_ns_chi02_cR::synapse0x2db98d0() {
   return (neuron0x2ffff10()*1.78372);
}

double NNfunction_ns_chi02_cR::synapse0x2db9910() {
   return (neuron0x3000250()*-0.159449);
}

double NNfunction_ns_chi02_cR::synapse0x30025f0() {
   return (neuron0x3000590()*-1.13463);
}

double NNfunction_ns_chi02_cR::synapse0x3002630() {
   return (neuron0x30008d0()*-0.380826);
}

double NNfunction_ns_chi02_cR::synapse0x3002930() {
   return (neuron0x3000c10()*-1.30682);
}

double NNfunction_ns_chi02_cR::synapse0x3002970() {
   return (neuron0x3000f50()*0.0317898);
}

double NNfunction_ns_chi02_cR::synapse0x3002c70() {
   return (neuron0x3001290()*-1.08687);
}

double NNfunction_ns_chi02_cR::synapse0x3002cb0() {
   return (neuron0x30015d0()*1.56747);
}

double NNfunction_ns_chi02_cR::synapse0x3002fb0() {
   return (neuron0x3001910()*1.18964);
}

double NNfunction_ns_chi02_cR::synapse0x3002ff0() {
   return (neuron0x3001c50()*-1.14316);
}

double NNfunction_ns_chi02_cR::synapse0x30032f0() {
   return (neuron0x30021b0()*1.25544);
}

double NNfunction_ns_chi02_cR::synapse0x3003330() {
   return (neuron0x30023d0()*0.596439);
}

double NNfunction_ns_chi02_cR::synapse0x3003630() {
   return (neuron0x3002710()*0.6204);
}

double NNfunction_ns_chi02_cR::synapse0x3003670() {
   return (neuron0x3002a50()*0.0851599);
}

double NNfunction_ns_chi02_cR::synapse0x3001170() {
   return (neuron0x3002d90()*0.0740751);
}

double NNfunction_ns_chi02_cR::synapse0x30011b0() {
   return (neuron0x30030d0()*-1.24536);
}

double NNfunction_ns_chi02_cR::synapse0x300f450() {
   return (neuron0x3003410()*-0.0174764);
}

double NNfunction_ns_chi02_cR::synapse0x300f7d0() {
   return (neuron0x2ffe850()*-0.029587);
}

double NNfunction_ns_chi02_cR::synapse0x300f810() {
   return (neuron0x2ffeb90()*-8.84135);
}

double NNfunction_ns_chi02_cR::synapse0x300f850() {
   return (neuron0x2ffeed0()*3.01553);
}

double NNfunction_ns_chi02_cR::synapse0x300f890() {
   return (neuron0x2fff210()*-0.00445976);
}

double NNfunction_ns_chi02_cR::synapse0x300f8d0() {
   return (neuron0x2fff550()*0.136997);
}

double NNfunction_ns_chi02_cR::synapse0x300f910() {
   return (neuron0x2fff890()*0.0287584);
}

double NNfunction_ns_chi02_cR::synapse0x300f950() {
   return (neuron0x2fffbd0()*0.0615903);
}

double NNfunction_ns_chi02_cR::synapse0x300f990() {
   return (neuron0x2ffff10()*0.0190943);
}

double NNfunction_ns_chi02_cR::synapse0x300f9d0() {
   return (neuron0x3000250()*-0.0213213);
}

double NNfunction_ns_chi02_cR::synapse0x300fa10() {
   return (neuron0x3000590()*-0.0285051);
}

double NNfunction_ns_chi02_cR::synapse0x300fa50() {
   return (neuron0x30008d0()*-0.00653554);
}

double NNfunction_ns_chi02_cR::synapse0x300fa90() {
   return (neuron0x3000c10()*-0.0449804);
}

double NNfunction_ns_chi02_cR::synapse0x300fad0() {
   return (neuron0x3000f50()*0.00773317);
}

double NNfunction_ns_chi02_cR::synapse0x300fb10() {
   return (neuron0x3001290()*0.0215751);
}

double NNfunction_ns_chi02_cR::synapse0x300fb50() {
   return (neuron0x30015d0()*0.049369);
}

double NNfunction_ns_chi02_cR::synapse0x300fb90() {
   return (neuron0x3001910()*0.0995137);
}

double NNfunction_ns_chi02_cR::synapse0x300f620() {
   return (neuron0x3001c50()*0.00414294);
}

double NNfunction_ns_chi02_cR::synapse0x300f660() {
   return (neuron0x30021b0()*0.031224);
}

double NNfunction_ns_chi02_cR::synapse0x300fce0() {
   return (neuron0x30023d0()*-0.0645192);
}

double NNfunction_ns_chi02_cR::synapse0x300fd20() {
   return (neuron0x3002710()*-0.0208136);
}

double NNfunction_ns_chi02_cR::synapse0x300fd60() {
   return (neuron0x3002a50()*-0.0633123);
}

double NNfunction_ns_chi02_cR::synapse0x300fda0() {
   return (neuron0x3002d90()*-0.0190135);
}

double NNfunction_ns_chi02_cR::synapse0x300fde0() {
   return (neuron0x30030d0()*-0.00441694);
}

double NNfunction_ns_chi02_cR::synapse0x300fe20() {
   return (neuron0x3003410()*-0.111322);
}

double NNfunction_ns_chi02_cR::synapse0x30101a0() {
   return (neuron0x2ffe850()*-0.0250578);
}

double NNfunction_ns_chi02_cR::synapse0x30101e0() {
   return (neuron0x2ffeb90()*3.30286);
}

double NNfunction_ns_chi02_cR::synapse0x3010220() {
   return (neuron0x2ffeed0()*0.148416);
}

double NNfunction_ns_chi02_cR::synapse0x3010260() {
   return (neuron0x2fff210()*-0.0760717);
}

double NNfunction_ns_chi02_cR::synapse0x30102a0() {
   return (neuron0x2fff550()*-0.0112608);
}

double NNfunction_ns_chi02_cR::synapse0x30102e0() {
   return (neuron0x2fff890()*0.0574809);
}

double NNfunction_ns_chi02_cR::synapse0x3010320() {
   return (neuron0x2fffbd0()*-0.0231926);
}

double NNfunction_ns_chi02_cR::synapse0x3010360() {
   return (neuron0x2ffff10()*-0.0489594);
}

double NNfunction_ns_chi02_cR::synapse0x30103a0() {
   return (neuron0x3000250()*-0.00774422);
}

double NNfunction_ns_chi02_cR::synapse0x30103e0() {
   return (neuron0x3000590()*-0.00343821);
}

double NNfunction_ns_chi02_cR::synapse0x3010420() {
   return (neuron0x30008d0()*0.023361);
}

double NNfunction_ns_chi02_cR::synapse0x3010460() {
   return (neuron0x3000c10()*-0.00476347);
}

double NNfunction_ns_chi02_cR::synapse0x30104a0() {
   return (neuron0x3000f50()*-0.0209726);
}

double NNfunction_ns_chi02_cR::synapse0x30104e0() {
   return (neuron0x3001290()*-0.0462319);
}

double NNfunction_ns_chi02_cR::synapse0x3010520() {
   return (neuron0x30015d0()*-0.0550485);
}

double NNfunction_ns_chi02_cR::synapse0x3010560() {
   return (neuron0x3001910()*0.244793);
}

double NNfunction_ns_chi02_cR::synapse0x300fff0() {
   return (neuron0x3001c50()*0.0836111);
}

double NNfunction_ns_chi02_cR::synapse0x3010030() {
   return (neuron0x30021b0()*0.0341385);
}

double NNfunction_ns_chi02_cR::synapse0x30106b0() {
   return (neuron0x30023d0()*0.0417688);
}

double NNfunction_ns_chi02_cR::synapse0x30106f0() {
   return (neuron0x3002710()*0.0179277);
}

double NNfunction_ns_chi02_cR::synapse0x3010730() {
   return (neuron0x3002a50()*0.00638956);
}

double NNfunction_ns_chi02_cR::synapse0x3010770() {
   return (neuron0x3002d90()*0.00886172);
}

double NNfunction_ns_chi02_cR::synapse0x30107b0() {
   return (neuron0x30030d0()*0.00906436);
}

double NNfunction_ns_chi02_cR::synapse0x30107f0() {
   return (neuron0x3003410()*-0.0257371);
}

double NNfunction_ns_chi02_cR::synapse0x3010b70() {
   return (neuron0x2ffe850()*0.0108755);
}

double NNfunction_ns_chi02_cR::synapse0x3010bb0() {
   return (neuron0x2ffeb90()*-0.0923425);
}

double NNfunction_ns_chi02_cR::synapse0x3010bf0() {
   return (neuron0x2ffeed0()*-0.00157932);
}

double NNfunction_ns_chi02_cR::synapse0x3010c30() {
   return (neuron0x2fff210()*0.052198);
}

double NNfunction_ns_chi02_cR::synapse0x3010c70() {
   return (neuron0x2fff550()*-0.0440657);
}

double NNfunction_ns_chi02_cR::synapse0x3010cb0() {
   return (neuron0x2fff890()*0.0109885);
}

double NNfunction_ns_chi02_cR::synapse0x3010cf0() {
   return (neuron0x2fffbd0()*0.0157776);
}

double NNfunction_ns_chi02_cR::synapse0x3010d30() {
   return (neuron0x2ffff10()*0.019439);
}

double NNfunction_ns_chi02_cR::synapse0x3010d70() {
   return (neuron0x3000250()*-0.0204);
}

double NNfunction_ns_chi02_cR::synapse0x3010db0() {
   return (neuron0x3000590()*0.0073564);
}

double NNfunction_ns_chi02_cR::synapse0x3010df0() {
   return (neuron0x30008d0()*-0.0338919);
}

double NNfunction_ns_chi02_cR::synapse0x3010e30() {
   return (neuron0x3000c10()*-0.0139589);
}

double NNfunction_ns_chi02_cR::synapse0x3010e70() {
   return (neuron0x3000f50()*0.0351858);
}

double NNfunction_ns_chi02_cR::synapse0x3010eb0() {
   return (neuron0x3001290()*0.0176233);
}

double NNfunction_ns_chi02_cR::synapse0x3010ef0() {
   return (neuron0x30015d0()*-0.027672);
}

double NNfunction_ns_chi02_cR::synapse0x3010f30() {
   return (neuron0x3001910()*-0.0237426);
}

double NNfunction_ns_chi02_cR::synapse0x30109c0() {
   return (neuron0x3001c50()*0.0447683);
}

double NNfunction_ns_chi02_cR::synapse0x3010a00() {
   return (neuron0x30021b0()*0.023173);
}

double NNfunction_ns_chi02_cR::synapse0x3011080() {
   return (neuron0x30023d0()*-0.0088051);
}

double NNfunction_ns_chi02_cR::synapse0x30110c0() {
   return (neuron0x3002710()*0.0228614);
}

double NNfunction_ns_chi02_cR::synapse0x3011100() {
   return (neuron0x3002a50()*0.0380444);
}

double NNfunction_ns_chi02_cR::synapse0x3011140() {
   return (neuron0x3002d90()*0.0184933);
}

double NNfunction_ns_chi02_cR::synapse0x3011180() {
   return (neuron0x30030d0()*-0.0183036);
}

double NNfunction_ns_chi02_cR::synapse0x30111c0() {
   return (neuron0x3003410()*-12.4981);
}

double NNfunction_ns_chi02_cR::synapse0x3011540() {
   return (neuron0x2ffe850()*-0.0414274);
}

double NNfunction_ns_chi02_cR::synapse0x3011580() {
   return (neuron0x2ffeb90()*2.17569);
}

double NNfunction_ns_chi02_cR::synapse0x30115c0() {
   return (neuron0x2ffeed0()*0.149839);
}

double NNfunction_ns_chi02_cR::synapse0x3011600() {
   return (neuron0x2fff210()*0.0768266);
}

double NNfunction_ns_chi02_cR::synapse0x3011640() {
   return (neuron0x2fff550()*0.00959412);
}

double NNfunction_ns_chi02_cR::synapse0x3011680() {
   return (neuron0x2fff890()*-0.0183516);
}

double NNfunction_ns_chi02_cR::synapse0x30116c0() {
   return (neuron0x2fffbd0()*-0.0200579);
}

double NNfunction_ns_chi02_cR::synapse0x3011700() {
   return (neuron0x2ffff10()*0.0678284);
}

double NNfunction_ns_chi02_cR::synapse0x3011740() {
   return (neuron0x3000250()*-0.0144576);
}

double NNfunction_ns_chi02_cR::synapse0x3011780() {
   return (neuron0x3000590()*0.00301212);
}

double NNfunction_ns_chi02_cR::synapse0x30117c0() {
   return (neuron0x30008d0()*0.0228556);
}

double NNfunction_ns_chi02_cR::synapse0x3011800() {
   return (neuron0x3000c10()*0.0243974);
}

double NNfunction_ns_chi02_cR::synapse0x3011840() {
   return (neuron0x3000f50()*0.0205641);
}

double NNfunction_ns_chi02_cR::synapse0x3011880() {
   return (neuron0x3001290()*0.00362423);
}

double NNfunction_ns_chi02_cR::synapse0x30118c0() {
   return (neuron0x30015d0()*0.0378218);
}

double NNfunction_ns_chi02_cR::synapse0x3011900() {
   return (neuron0x3001910()*-0.273918);
}

double NNfunction_ns_chi02_cR::synapse0x3011390() {
   return (neuron0x3001c50()*-0.0418877);
}

double NNfunction_ns_chi02_cR::synapse0x30113d0() {
   return (neuron0x30021b0()*-0.00613164);
}

double NNfunction_ns_chi02_cR::synapse0x3011a50() {
   return (neuron0x30023d0()*-0.00177208);
}

double NNfunction_ns_chi02_cR::synapse0x3011a90() {
   return (neuron0x3002710()*-0.0191247);
}

double NNfunction_ns_chi02_cR::synapse0x3011ad0() {
   return (neuron0x3002a50()*0.0540925);
}

double NNfunction_ns_chi02_cR::synapse0x3011b10() {
   return (neuron0x3002d90()*0.0230329);
}

double NNfunction_ns_chi02_cR::synapse0x3011b50() {
   return (neuron0x30030d0()*0.00703118);
}

double NNfunction_ns_chi02_cR::synapse0x3011b90() {
   return (neuron0x3003410()*-0.087867);
}

double NNfunction_ns_chi02_cR::synapse0x3011f10() {
   return (neuron0x2ffe850()*0.00717268);
}

double NNfunction_ns_chi02_cR::synapse0x3011f50() {
   return (neuron0x2ffeb90()*0.0534796);
}

double NNfunction_ns_chi02_cR::synapse0x3011f90() {
   return (neuron0x2ffeed0()*0.251349);
}

double NNfunction_ns_chi02_cR::synapse0x3011fd0() {
   return (neuron0x2fff210()*-0.0128016);
}

double NNfunction_ns_chi02_cR::synapse0x3012010() {
   return (neuron0x2fff550()*-0.0208879);
}

double NNfunction_ns_chi02_cR::synapse0x3012050() {
   return (neuron0x2fff890()*0.00661732);
}

double NNfunction_ns_chi02_cR::synapse0x3012090() {
   return (neuron0x2fffbd0()*-0.0103763);
}

double NNfunction_ns_chi02_cR::synapse0x30120d0() {
   return (neuron0x2ffff10()*0.0109781);
}

double NNfunction_ns_chi02_cR::synapse0x3012110() {
   return (neuron0x3000250()*-0.010031);
}

double NNfunction_ns_chi02_cR::synapse0x300a2d0() {
   return (neuron0x3000590()*-0.00472826);
}

double NNfunction_ns_chi02_cR::synapse0x300a310() {
   return (neuron0x30008d0()*0.0177402);
}

double NNfunction_ns_chi02_cR::synapse0x300a350() {
   return (neuron0x3000c10()*-0.0157363);
}

double NNfunction_ns_chi02_cR::synapse0x300a390() {
   return (neuron0x3000f50()*0.0162268);
}

double NNfunction_ns_chi02_cR::synapse0x300a3d0() {
   return (neuron0x3001290()*-0.00217931);
}

double NNfunction_ns_chi02_cR::synapse0x300a410() {
   return (neuron0x30015d0()*0.00145408);
}

double NNfunction_ns_chi02_cR::synapse0x300a450() {
   return (neuron0x3001910()*-0.221193);
}

double NNfunction_ns_chi02_cR::synapse0x3011d60() {
   return (neuron0x3001c50()*-0.00898382);
}

double NNfunction_ns_chi02_cR::synapse0x3011da0() {
   return (neuron0x30021b0()*0.017777);
}

double NNfunction_ns_chi02_cR::synapse0x300a5a0() {
   return (neuron0x30023d0()*0.00239229);
}

double NNfunction_ns_chi02_cR::synapse0x300a5e0() {
   return (neuron0x3002710()*0.0210815);
}

double NNfunction_ns_chi02_cR::synapse0x300a620() {
   return (neuron0x3002a50()*0.0383346);
}

double NNfunction_ns_chi02_cR::synapse0x300a660() {
   return (neuron0x3002d90()*0.00319729);
}

double NNfunction_ns_chi02_cR::synapse0x300a6a0() {
   return (neuron0x30030d0()*-0.00565868);
}

double NNfunction_ns_chi02_cR::synapse0x300a6e0() {
   return (neuron0x3003410()*-4.49772);
}

double NNfunction_ns_chi02_cR::synapse0x300aa60() {
   return (neuron0x2ffe850()*0.142008);
}

double NNfunction_ns_chi02_cR::synapse0x300aaa0() {
   return (neuron0x2ffeb90()*-10.8038);
}

double NNfunction_ns_chi02_cR::synapse0x300aae0() {
   return (neuron0x2ffeed0()*-0.743593);
}

double NNfunction_ns_chi02_cR::synapse0x300ab20() {
   return (neuron0x2fff210()*-0.00962664);
}

double NNfunction_ns_chi02_cR::synapse0x300ab60() {
   return (neuron0x2fff550()*-0.00521892);
}

double NNfunction_ns_chi02_cR::synapse0x300aba0() {
   return (neuron0x2fff890()*-0.0284848);
}

double NNfunction_ns_chi02_cR::synapse0x300abe0() {
   return (neuron0x2fffbd0()*0.0600337);
}

double NNfunction_ns_chi02_cR::synapse0x300ac20() {
   return (neuron0x2ffff10()*0.0573173);
}

double NNfunction_ns_chi02_cR::synapse0x300ac60() {
   return (neuron0x3000250()*0.0134713);
}

double NNfunction_ns_chi02_cR::synapse0x300aca0() {
   return (neuron0x3000590()*0.0211792);
}

double NNfunction_ns_chi02_cR::synapse0x300ace0() {
   return (neuron0x30008d0()*-0.0549004);
}

double NNfunction_ns_chi02_cR::synapse0x300ad20() {
   return (neuron0x3000c10()*0.0161112);
}

double NNfunction_ns_chi02_cR::synapse0x300ad60() {
   return (neuron0x3000f50()*-0.00760085);
}

double NNfunction_ns_chi02_cR::synapse0x300ada0() {
   return (neuron0x3001290()*0.0207169);
}

double NNfunction_ns_chi02_cR::synapse0x300ade0() {
   return (neuron0x30015d0()*0.0108352);
}

double NNfunction_ns_chi02_cR::synapse0x300ae20() {
   return (neuron0x3001910()*0.121716);
}

double NNfunction_ns_chi02_cR::synapse0x300a8b0() {
   return (neuron0x3001c50()*-0.05944);
}

double NNfunction_ns_chi02_cR::synapse0x300a8f0() {
   return (neuron0x30021b0()*-0.0331235);
}

double NNfunction_ns_chi02_cR::synapse0x300af70() {
   return (neuron0x30023d0()*-0.0437515);
}

double NNfunction_ns_chi02_cR::synapse0x300afb0() {
   return (neuron0x3002710()*-0.00100442);
}

double NNfunction_ns_chi02_cR::synapse0x300aff0() {
   return (neuron0x3002a50()*-0.0436303);
}

double NNfunction_ns_chi02_cR::synapse0x300b030() {
   return (neuron0x3002d90()*-0.0483875);
}

double NNfunction_ns_chi02_cR::synapse0x300b070() {
   return (neuron0x30030d0()*0.0519361);
}

double NNfunction_ns_chi02_cR::synapse0x300b0b0() {
   return (neuron0x3003410()*5.95439);
}

double NNfunction_ns_chi02_cR::synapse0x300b280() {
   return (neuron0x2ffe850()*-0.908652);
}

double NNfunction_ns_chi02_cR::synapse0x3014310() {
   return (neuron0x2ffeb90()*1.72507);
}

double NNfunction_ns_chi02_cR::synapse0x3014350() {
   return (neuron0x2ffeed0()*-2.14714);
}

double NNfunction_ns_chi02_cR::synapse0x3014390() {
   return (neuron0x2fff210()*0.835091);
}

double NNfunction_ns_chi02_cR::synapse0x30143d0() {
   return (neuron0x2fff550()*0.0401373);
}

double NNfunction_ns_chi02_cR::synapse0x3014410() {
   return (neuron0x2fff890()*-1.52795);
}

double NNfunction_ns_chi02_cR::synapse0x3014450() {
   return (neuron0x2fffbd0()*0.45052);
}

double NNfunction_ns_chi02_cR::synapse0x3014490() {
   return (neuron0x2ffff10()*-1.97632);
}

double NNfunction_ns_chi02_cR::synapse0x30144d0() {
   return (neuron0x3000250()*1.01801);
}

double NNfunction_ns_chi02_cR::synapse0x3014510() {
   return (neuron0x3000590()*-0.302218);
}

double NNfunction_ns_chi02_cR::synapse0x3014550() {
   return (neuron0x30008d0()*0.880474);
}

double NNfunction_ns_chi02_cR::synapse0x3014590() {
   return (neuron0x3000c10()*-0.602582);
}

double NNfunction_ns_chi02_cR::synapse0x30145d0() {
   return (neuron0x3000f50()*-1.08061);
}

double NNfunction_ns_chi02_cR::synapse0x3014610() {
   return (neuron0x3001290()*0.321581);
}

double NNfunction_ns_chi02_cR::synapse0x3014650() {
   return (neuron0x30015d0()*0.192554);
}

double NNfunction_ns_chi02_cR::synapse0x3014690() {
   return (neuron0x3001910()*1.23668);
}

double NNfunction_ns_chi02_cR::synapse0x3014160() {
   return (neuron0x3001c50()*0.171668);
}

double NNfunction_ns_chi02_cR::synapse0x30141a0() {
   return (neuron0x30021b0()*-0.451054);
}

double NNfunction_ns_chi02_cR::synapse0x30147e0() {
   return (neuron0x30023d0()*-0.57442);
}

double NNfunction_ns_chi02_cR::synapse0x3014820() {
   return (neuron0x3002710()*-0.277334);
}

double NNfunction_ns_chi02_cR::synapse0x3014860() {
   return (neuron0x3002a50()*-1.16188);
}

double NNfunction_ns_chi02_cR::synapse0x30148a0() {
   return (neuron0x3002d90()*-0.315684);
}

double NNfunction_ns_chi02_cR::synapse0x30148e0() {
   return (neuron0x30030d0()*0.298535);
}

double NNfunction_ns_chi02_cR::synapse0x3014920() {
   return (neuron0x3003410()*3.13408);
}

double NNfunction_ns_chi02_cR::synapse0x3014ca0() {
   return (neuron0x2ffe850()*0.01009);
}

double NNfunction_ns_chi02_cR::synapse0x3014ce0() {
   return (neuron0x2ffeb90()*0.0177831);
}

double NNfunction_ns_chi02_cR::synapse0x3014d20() {
   return (neuron0x2ffeed0()*0.00675367);
}

double NNfunction_ns_chi02_cR::synapse0x3014d60() {
   return (neuron0x2fff210()*2.59987);
}

double NNfunction_ns_chi02_cR::synapse0x3014da0() {
   return (neuron0x2fff550()*0.000568396);
}

double NNfunction_ns_chi02_cR::synapse0x3014de0() {
   return (neuron0x2fff890()*-0.00302223);
}

double NNfunction_ns_chi02_cR::synapse0x3014e20() {
   return (neuron0x2fffbd0()*0.0102946);
}

double NNfunction_ns_chi02_cR::synapse0x3014e60() {
   return (neuron0x2ffff10()*-0.008119);
}

double NNfunction_ns_chi02_cR::synapse0x3014ea0() {
   return (neuron0x3000250()*0.000917346);
}

double NNfunction_ns_chi02_cR::synapse0x3014ee0() {
   return (neuron0x3000590()*-0.0132998);
}

double NNfunction_ns_chi02_cR::synapse0x3014f20() {
   return (neuron0x30008d0()*0.00483156);
}

double NNfunction_ns_chi02_cR::synapse0x3014f60() {
   return (neuron0x3000c10()*0.00645543);
}

double NNfunction_ns_chi02_cR::synapse0x3014fa0() {
   return (neuron0x3000f50()*0.0210217);
}

double NNfunction_ns_chi02_cR::synapse0x3014fe0() {
   return (neuron0x3001290()*-0.00850501);
}

double NNfunction_ns_chi02_cR::synapse0x3015020() {
   return (neuron0x30015d0()*0.0223863);
}

double NNfunction_ns_chi02_cR::synapse0x3015060() {
   return (neuron0x3001910()*-0.148277);
}

double NNfunction_ns_chi02_cR::synapse0x3014af0() {
   return (neuron0x3001c50()*-0.010986);
}

double NNfunction_ns_chi02_cR::synapse0x3014b30() {
   return (neuron0x30021b0()*-0.00261274);
}

double NNfunction_ns_chi02_cR::synapse0x30151b0() {
   return (neuron0x30023d0()*0.0089394);
}

double NNfunction_ns_chi02_cR::synapse0x30151f0() {
   return (neuron0x3002710()*-0.000412743);
}

double NNfunction_ns_chi02_cR::synapse0x3015230() {
   return (neuron0x3002a50()*0.00917246);
}

double NNfunction_ns_chi02_cR::synapse0x3015270() {
   return (neuron0x3002d90()*0.00278607);
}

double NNfunction_ns_chi02_cR::synapse0x30152b0() {
   return (neuron0x30030d0()*0.00559467);
}

double NNfunction_ns_chi02_cR::synapse0x30152f0() {
   return (neuron0x3003410()*0.0420512);
}

double NNfunction_ns_chi02_cR::synapse0x3015670() {
   return (neuron0x2ffe850()*0.0760597);
}

double NNfunction_ns_chi02_cR::synapse0x30156b0() {
   return (neuron0x2ffeb90()*0.146027);
}

double NNfunction_ns_chi02_cR::synapse0x30156f0() {
   return (neuron0x2ffeed0()*0.234829);
}

double NNfunction_ns_chi02_cR::synapse0x3015730() {
   return (neuron0x2fff210()*0.0184698);
}

double NNfunction_ns_chi02_cR::synapse0x3015770() {
   return (neuron0x2fff550()*0.168173);
}

double NNfunction_ns_chi02_cR::synapse0x30157b0() {
   return (neuron0x2fff890()*0.229275);
}

double NNfunction_ns_chi02_cR::synapse0x30157f0() {
   return (neuron0x2fffbd0()*0.116715);
}

double NNfunction_ns_chi02_cR::synapse0x3015830() {
   return (neuron0x2ffff10()*0.174482);
}

double NNfunction_ns_chi02_cR::synapse0x3015870() {
   return (neuron0x3000250()*-0.356851);
}

double NNfunction_ns_chi02_cR::synapse0x30158b0() {
   return (neuron0x3000590()*-0.371088);
}

double NNfunction_ns_chi02_cR::synapse0x30158f0() {
   return (neuron0x30008d0()*-0.282069);
}

double NNfunction_ns_chi02_cR::synapse0x3015930() {
   return (neuron0x3000c10()*-0.521315);
}

double NNfunction_ns_chi02_cR::synapse0x3015970() {
   return (neuron0x3000f50()*-0.179996);
}

double NNfunction_ns_chi02_cR::synapse0x30159b0() {
   return (neuron0x3001290()*0.103139);
}

double NNfunction_ns_chi02_cR::synapse0x30159f0() {
   return (neuron0x30015d0()*0.0472512);
}

double NNfunction_ns_chi02_cR::synapse0x3015a30() {
   return (neuron0x3001910()*0.903102);
}

double NNfunction_ns_chi02_cR::synapse0x30154c0() {
   return (neuron0x3001c50()*0.163077);
}

double NNfunction_ns_chi02_cR::synapse0x3015500() {
   return (neuron0x30021b0()*-0.0048741);
}

double NNfunction_ns_chi02_cR::synapse0x3015b80() {
   return (neuron0x30023d0()*-0.372817);
}

double NNfunction_ns_chi02_cR::synapse0x3015bc0() {
   return (neuron0x3002710()*-0.277419);
}

double NNfunction_ns_chi02_cR::synapse0x3015c00() {
   return (neuron0x3002a50()*0.112383);
}

double NNfunction_ns_chi02_cR::synapse0x3015c40() {
   return (neuron0x3002d90()*-0.0536308);
}

double NNfunction_ns_chi02_cR::synapse0x3015c80() {
   return (neuron0x30030d0()*-0.0647874);
}

double NNfunction_ns_chi02_cR::synapse0x3015cc0() {
   return (neuron0x3003410()*-1.20223);
}

double NNfunction_ns_chi02_cR::synapse0x3016040() {
   return (neuron0x2ffe850()*-0.505986);
}

double NNfunction_ns_chi02_cR::synapse0x3016080() {
   return (neuron0x2ffeb90()*0.276662);
}

double NNfunction_ns_chi02_cR::synapse0x30160c0() {
   return (neuron0x2ffeed0()*0.314404);
}

double NNfunction_ns_chi02_cR::synapse0x3016100() {
   return (neuron0x2fff210()*0.200724);
}

double NNfunction_ns_chi02_cR::synapse0x3016140() {
   return (neuron0x2fff550()*0.113631);
}

double NNfunction_ns_chi02_cR::synapse0x3016180() {
   return (neuron0x2fff890()*0.0751414);
}

double NNfunction_ns_chi02_cR::synapse0x30161c0() {
   return (neuron0x2fffbd0()*0.303809);
}

double NNfunction_ns_chi02_cR::synapse0x3016200() {
   return (neuron0x2ffff10()*0.322261);
}

double NNfunction_ns_chi02_cR::synapse0x3016240() {
   return (neuron0x3000250()*0.692459);
}

double NNfunction_ns_chi02_cR::synapse0x3016280() {
   return (neuron0x3000590()*-0.0758789);
}

double NNfunction_ns_chi02_cR::synapse0x30162c0() {
   return (neuron0x30008d0()*2.02145);
}

double NNfunction_ns_chi02_cR::synapse0x3016300() {
   return (neuron0x3000c10()*0.704356);
}

double NNfunction_ns_chi02_cR::synapse0x3016340() {
   return (neuron0x3000f50()*-0.0190886);
}

double NNfunction_ns_chi02_cR::synapse0x3016380() {
   return (neuron0x3001290()*-0.0572119);
}

double NNfunction_ns_chi02_cR::synapse0x30163c0() {
   return (neuron0x30015d0()*0.488197);
}

double NNfunction_ns_chi02_cR::synapse0x3016400() {
   return (neuron0x3001910()*-1.68631);
}

double NNfunction_ns_chi02_cR::synapse0x3015e90() {
   return (neuron0x3001c50()*0.151938);
}

double NNfunction_ns_chi02_cR::synapse0x3015ed0() {
   return (neuron0x30021b0()*1.0818);
}

double NNfunction_ns_chi02_cR::synapse0x3016550() {
   return (neuron0x30023d0()*2.66171);
}

double NNfunction_ns_chi02_cR::synapse0x3016590() {
   return (neuron0x3002710()*-1.24448);
}

double NNfunction_ns_chi02_cR::synapse0x30165d0() {
   return (neuron0x3002a50()*0.916057);
}

double NNfunction_ns_chi02_cR::synapse0x3016610() {
   return (neuron0x3002d90()*0.16287);
}

double NNfunction_ns_chi02_cR::synapse0x3016650() {
   return (neuron0x30030d0()*-0.477121);
}

double NNfunction_ns_chi02_cR::synapse0x3016690() {
   return (neuron0x3003410()*0.89868);
}

double NNfunction_ns_chi02_cR::synapse0x3016a10() {
   return (neuron0x2ffe850()*-1.88917);
}

double NNfunction_ns_chi02_cR::synapse0x3016a50() {
   return (neuron0x2ffeb90()*1.21188);
}

double NNfunction_ns_chi02_cR::synapse0x3016a90() {
   return (neuron0x2ffeed0()*0.973284);
}

double NNfunction_ns_chi02_cR::synapse0x3016ad0() {
   return (neuron0x2fff210()*-0.757816);
}

double NNfunction_ns_chi02_cR::synapse0x3016b10() {
   return (neuron0x2fff550()*-1.06205);
}

double NNfunction_ns_chi02_cR::synapse0x3016b50() {
   return (neuron0x2fff890()*0.11072);
}

double NNfunction_ns_chi02_cR::synapse0x3016b90() {
   return (neuron0x2fffbd0()*0.640373);
}

double NNfunction_ns_chi02_cR::synapse0x3016bd0() {
   return (neuron0x2ffff10()*1.47613);
}

double NNfunction_ns_chi02_cR::synapse0x3016c10() {
   return (neuron0x3000250()*0.166926);
}

double NNfunction_ns_chi02_cR::synapse0x3016c50() {
   return (neuron0x3000590()*0.00530916);
}

double NNfunction_ns_chi02_cR::synapse0x3016c90() {
   return (neuron0x30008d0()*0.232523);
}

double NNfunction_ns_chi02_cR::synapse0x3016cd0() {
   return (neuron0x3000c10()*-0.624108);
}

double NNfunction_ns_chi02_cR::synapse0x3016d10() {
   return (neuron0x3000f50()*0.0128836);
}

double NNfunction_ns_chi02_cR::synapse0x3016d50() {
   return (neuron0x3001290()*0.411002);
}

double NNfunction_ns_chi02_cR::synapse0x3016d90() {
   return (neuron0x30015d0()*-0.0455274);
}

double NNfunction_ns_chi02_cR::synapse0x3016dd0() {
   return (neuron0x3001910()*-1.00594);
}

double NNfunction_ns_chi02_cR::synapse0x3016860() {
   return (neuron0x3001c50()*-0.542863);
}

double NNfunction_ns_chi02_cR::synapse0x30168a0() {
   return (neuron0x30021b0()*0.275904);
}

double NNfunction_ns_chi02_cR::synapse0x3016f20() {
   return (neuron0x30023d0()*0.17576);
}

double NNfunction_ns_chi02_cR::synapse0x3016f60() {
   return (neuron0x3002710()*0.361544);
}

double NNfunction_ns_chi02_cR::synapse0x3016fa0() {
   return (neuron0x3002a50()*1.07618);
}

double NNfunction_ns_chi02_cR::synapse0x3016fe0() {
   return (neuron0x3002d90()*-0.0494027);
}

double NNfunction_ns_chi02_cR::synapse0x3017020() {
   return (neuron0x30030d0()*-0.308294);
}

double NNfunction_ns_chi02_cR::synapse0x3017060() {
   return (neuron0x3003410()*5.84376);
}

double NNfunction_ns_chi02_cR::synapse0x30173e0() {
   return (neuron0x2ffe850()*-1.08804);
}

double NNfunction_ns_chi02_cR::synapse0x3017420() {
   return (neuron0x2ffeb90()*0.449041);
}

double NNfunction_ns_chi02_cR::synapse0x3017460() {
   return (neuron0x2ffeed0()*-0.868404);
}

double NNfunction_ns_chi02_cR::synapse0x30174a0() {
   return (neuron0x2fff210()*0.196406);
}

double NNfunction_ns_chi02_cR::synapse0x30174e0() {
   return (neuron0x2fff550()*2.86376);
}

double NNfunction_ns_chi02_cR::synapse0x3017520() {
   return (neuron0x2fff890()*0.844997);
}

double NNfunction_ns_chi02_cR::synapse0x3017560() {
   return (neuron0x2fffbd0()*-1.45077);
}

double NNfunction_ns_chi02_cR::synapse0x30175a0() {
   return (neuron0x2ffff10()*-0.398218);
}

double NNfunction_ns_chi02_cR::synapse0x30175e0() {
   return (neuron0x3000250()*-0.831217);
}

double NNfunction_ns_chi02_cR::synapse0x3017620() {
   return (neuron0x3000590()*0.846593);
}

double NNfunction_ns_chi02_cR::synapse0x3017660() {
   return (neuron0x30008d0()*-0.232417);
}

double NNfunction_ns_chi02_cR::synapse0x30176a0() {
   return (neuron0x3000c10()*-0.150978);
}

double NNfunction_ns_chi02_cR::synapse0x30176e0() {
   return (neuron0x3000f50()*0.0663879);
}

double NNfunction_ns_chi02_cR::synapse0x3017720() {
   return (neuron0x3001290()*-1.61792);
}

double NNfunction_ns_chi02_cR::synapse0x3017760() {
   return (neuron0x30015d0()*0.851908);
}

double NNfunction_ns_chi02_cR::synapse0x30177a0() {
   return (neuron0x3001910()*0.458154);
}

double NNfunction_ns_chi02_cR::synapse0x3017230() {
   return (neuron0x3001c50()*-0.0147799);
}

double NNfunction_ns_chi02_cR::synapse0x3017270() {
   return (neuron0x30021b0()*0.150945);
}

double NNfunction_ns_chi02_cR::synapse0x30178f0() {
   return (neuron0x30023d0()*0.482478);
}

double NNfunction_ns_chi02_cR::synapse0x3017930() {
   return (neuron0x3002710()*1.3717);
}

double NNfunction_ns_chi02_cR::synapse0x3017970() {
   return (neuron0x3002a50()*0.44955);
}

double NNfunction_ns_chi02_cR::synapse0x30179b0() {
   return (neuron0x3002d90()*-0.0852724);
}

double NNfunction_ns_chi02_cR::synapse0x30179f0() {
   return (neuron0x30030d0()*1.76937);
}

double NNfunction_ns_chi02_cR::synapse0x3017a30() {
   return (neuron0x3003410()*-0.619073);
}

double NNfunction_ns_chi02_cR::synapse0x3017db0() {
   return (neuron0x2ffe850()*-0.00253619);
}

double NNfunction_ns_chi02_cR::synapse0x3017df0() {
   return (neuron0x2ffeb90()*-0.0318531);
}

double NNfunction_ns_chi02_cR::synapse0x3017e30() {
   return (neuron0x2ffeed0()*0.108927);
}

double NNfunction_ns_chi02_cR::synapse0x3017e70() {
   return (neuron0x2fff210()*0.191006);
}

double NNfunction_ns_chi02_cR::synapse0x3017eb0() {
   return (neuron0x2fff550()*0.0408572);
}

double NNfunction_ns_chi02_cR::synapse0x3017ef0() {
   return (neuron0x2fff890()*0.0745016);
}

double NNfunction_ns_chi02_cR::synapse0x3017f30() {
   return (neuron0x2fffbd0()*0.00660724);
}

double NNfunction_ns_chi02_cR::synapse0x3017f70() {
   return (neuron0x2ffff10()*0.0780408);
}

double NNfunction_ns_chi02_cR::synapse0x3017fb0() {
   return (neuron0x3000250()*-0.548049);
}

double NNfunction_ns_chi02_cR::synapse0x3017ff0() {
   return (neuron0x3000590()*-0.196817);
}

double NNfunction_ns_chi02_cR::synapse0x3018030() {
   return (neuron0x30008d0()*-0.181647);
}

double NNfunction_ns_chi02_cR::synapse0x3018070() {
   return (neuron0x3000c10()*0.458909);
}

double NNfunction_ns_chi02_cR::synapse0x30180b0() {
   return (neuron0x3000f50()*-0.295882);
}

double NNfunction_ns_chi02_cR::synapse0x30180f0() {
   return (neuron0x3001290()*0.014416);
}

double NNfunction_ns_chi02_cR::synapse0x3018130() {
   return (neuron0x30015d0()*0.0433244);
}

double NNfunction_ns_chi02_cR::synapse0x3018170() {
   return (neuron0x3001910()*-0.36384);
}

double NNfunction_ns_chi02_cR::synapse0x3017c00() {
   return (neuron0x3001c50()*-0.16276);
}

double NNfunction_ns_chi02_cR::synapse0x3017c40() {
   return (neuron0x30021b0()*0.163563);
}

double NNfunction_ns_chi02_cR::synapse0x30182c0() {
   return (neuron0x30023d0()*-0.203334);
}

double NNfunction_ns_chi02_cR::synapse0x3018300() {
   return (neuron0x3002710()*-0.512973);
}

double NNfunction_ns_chi02_cR::synapse0x3018340() {
   return (neuron0x3002a50()*0.102291);
}

double NNfunction_ns_chi02_cR::synapse0x3018380() {
   return (neuron0x3002d90()*-0.0288611);
}

double NNfunction_ns_chi02_cR::synapse0x30183c0() {
   return (neuron0x30030d0()*0.0189846);
}

double NNfunction_ns_chi02_cR::synapse0x3018400() {
   return (neuron0x3003410()*1.07638);
}

double NNfunction_ns_chi02_cR::synapse0x3018780() {
   return (neuron0x2ffe850()*-0.105059);
}

double NNfunction_ns_chi02_cR::synapse0x30187c0() {
   return (neuron0x2ffeb90()*-6.13863);
}

double NNfunction_ns_chi02_cR::synapse0x3018800() {
   return (neuron0x2ffeed0()*-0.399158);
}

double NNfunction_ns_chi02_cR::synapse0x3018840() {
   return (neuron0x2fff210()*-0.0239906);
}

double NNfunction_ns_chi02_cR::synapse0x3018880() {
   return (neuron0x2fff550()*0.0719614);
}

double NNfunction_ns_chi02_cR::synapse0x30188c0() {
   return (neuron0x2fff890()*0.0124523);
}

double NNfunction_ns_chi02_cR::synapse0x3018900() {
   return (neuron0x2fffbd0()*0.0150015);
}

double NNfunction_ns_chi02_cR::synapse0x3018940() {
   return (neuron0x2ffff10()*0.0576058);
}

double NNfunction_ns_chi02_cR::synapse0x3018980() {
   return (neuron0x3000250()*0.0528248);
}

double NNfunction_ns_chi02_cR::synapse0x30189c0() {
   return (neuron0x3000590()*-0.0321135);
}

double NNfunction_ns_chi02_cR::synapse0x3018a00() {
   return (neuron0x30008d0()*-0.00585209);
}

double NNfunction_ns_chi02_cR::synapse0x3018a40() {
   return (neuron0x3000c10()*-0.00843772);
}

double NNfunction_ns_chi02_cR::synapse0x3018a80() {
   return (neuron0x3000f50()*-0.0257034);
}

double NNfunction_ns_chi02_cR::synapse0x3018ac0() {
   return (neuron0x3001290()*0.00428665);
}

double NNfunction_ns_chi02_cR::synapse0x3018b00() {
   return (neuron0x30015d0()*0.0366604);
}

double NNfunction_ns_chi02_cR::synapse0x3018b40() {
   return (neuron0x3001910()*-0.114379);
}

double NNfunction_ns_chi02_cR::synapse0x30185d0() {
   return (neuron0x3001c50()*0.0254778);
}

double NNfunction_ns_chi02_cR::synapse0x3018610() {
   return (neuron0x30021b0()*-0.0398724);
}

double NNfunction_ns_chi02_cR::synapse0x3018c90() {
   return (neuron0x30023d0()*-0.0487697);
}

double NNfunction_ns_chi02_cR::synapse0x3018cd0() {
   return (neuron0x3002710()*-0.00841348);
}

double NNfunction_ns_chi02_cR::synapse0x3018d10() {
   return (neuron0x3002a50()*-0.0364509);
}

double NNfunction_ns_chi02_cR::synapse0x3018d50() {
   return (neuron0x3002d90()*-0.0178787);
}

double NNfunction_ns_chi02_cR::synapse0x3018d90() {
   return (neuron0x30030d0()*-0.0288806);
}

double NNfunction_ns_chi02_cR::synapse0x3018dd0() {
   return (neuron0x3003410()*-3.30821);
}

double NNfunction_ns_chi02_cR::synapse0x3019150() {
   return (neuron0x2ffe850()*-0.939816);
}

double NNfunction_ns_chi02_cR::synapse0x300d720() {
   return (neuron0x2ffeb90()*-2.51084);
}

double NNfunction_ns_chi02_cR::synapse0x300d760() {
   return (neuron0x2ffeed0()*-0.472196);
}

double NNfunction_ns_chi02_cR::synapse0x300d7a0() {
   return (neuron0x2fff210()*0.469603);
}

double NNfunction_ns_chi02_cR::synapse0x300d9f0() {
   return (neuron0x2fff550()*-0.278449);
}

double NNfunction_ns_chi02_cR::synapse0x300da30() {
   return (neuron0x2fff890()*-0.281611);
}

double NNfunction_ns_chi02_cR::synapse0x300da70() {
   return (neuron0x2fffbd0()*1.53789);
}

double NNfunction_ns_chi02_cR::synapse0x300dcc0() {
   return (neuron0x2ffff10()*-0.66882);
}

double NNfunction_ns_chi02_cR::synapse0x300dd00() {
   return (neuron0x3000250()*-2.93479);
}

double NNfunction_ns_chi02_cR::synapse0x300df50() {
   return (neuron0x3000590()*-1.73217);
}

double NNfunction_ns_chi02_cR::synapse0x300df90() {
   return (neuron0x30008d0()*1.21747);
}

double NNfunction_ns_chi02_cR::synapse0x300dfd0() {
   return (neuron0x3000c10()*-0.545156);
}

double NNfunction_ns_chi02_cR::synapse0x300e220() {
   return (neuron0x3000f50()*-1.06727);
}

double NNfunction_ns_chi02_cR::synapse0x300e260() {
   return (neuron0x3001290()*-0.102301);
}

double NNfunction_ns_chi02_cR::synapse0x300e4b0() {
   return (neuron0x30015d0()*-0.593304);
}

double NNfunction_ns_chi02_cR::synapse0x300e4f0() {
   return (neuron0x3001910()*0.880976);
}

double NNfunction_ns_chi02_cR::synapse0x3018fa0() {
   return (neuron0x3001c50()*0.257234);
}

double NNfunction_ns_chi02_cR::synapse0x3018fe0() {
   return (neuron0x30021b0()*-0.183652);
}

double NNfunction_ns_chi02_cR::synapse0x300e640() {
   return (neuron0x30023d0()*0.774339);
}

double NNfunction_ns_chi02_cR::synapse0x300eb50() {
   return (neuron0x3002710()*0.960607);
}

double NNfunction_ns_chi02_cR::synapse0x300eb90() {
   return (neuron0x3002a50()*-0.346024);
}

double NNfunction_ns_chi02_cR::synapse0x300ebd0() {
   return (neuron0x3002d90()*-0.988269);
}

double NNfunction_ns_chi02_cR::synapse0x300ee20() {
   return (neuron0x30030d0()*-1.48362);
}

double NNfunction_ns_chi02_cR::synapse0x300ee60() {
   return (neuron0x3003410()*-2.35295);
}

double NNfunction_ns_chi02_cR::synapse0x300e710() {
   return (neuron0x2ffe850()*0.224557);
}

double NNfunction_ns_chi02_cR::synapse0x300e750() {
   return (neuron0x2ffeb90()*-0.537928);
}

double NNfunction_ns_chi02_cR::synapse0x300e790() {
   return (neuron0x2ffeed0()*0.410573);
}

double NNfunction_ns_chi02_cR::synapse0x300e7d0() {
   return (neuron0x2fff210()*0.493846);
}

double NNfunction_ns_chi02_cR::synapse0x300f150() {
   return (neuron0x2fff550()*-0.174436);
}

double NNfunction_ns_chi02_cR::synapse0x301b4a0() {
   return (neuron0x2fff890()*0.856);
}

double NNfunction_ns_chi02_cR::synapse0x301b4e0() {
   return (neuron0x2fffbd0()*1.54622);
}

double NNfunction_ns_chi02_cR::synapse0x301b520() {
   return (neuron0x2ffff10()*0.486411);
}

double NNfunction_ns_chi02_cR::synapse0x301b560() {
   return (neuron0x3000250()*-1.49858);
}

double NNfunction_ns_chi02_cR::synapse0x301b5a0() {
   return (neuron0x3000590()*0.979202);
}

double NNfunction_ns_chi02_cR::synapse0x301b5e0() {
   return (neuron0x30008d0()*-1.45049);
}

double NNfunction_ns_chi02_cR::synapse0x301b620() {
   return (neuron0x3000c10()*-1.50867);
}

double NNfunction_ns_chi02_cR::synapse0x301b660() {
   return (neuron0x3000f50()*1.14744);
}

double NNfunction_ns_chi02_cR::synapse0x301b6a0() {
   return (neuron0x3001290()*-1.94728);
}

double NNfunction_ns_chi02_cR::synapse0x301b6e0() {
   return (neuron0x30015d0()*-0.755978);
}

double NNfunction_ns_chi02_cR::synapse0x301b720() {
   return (neuron0x3001910()*0.271772);
}

double NNfunction_ns_chi02_cR::synapse0x300f030() {
   return (neuron0x3001c50()*1.77484);
}

double NNfunction_ns_chi02_cR::synapse0x300f070() {
   return (neuron0x30021b0()*0.983986);
}

double NNfunction_ns_chi02_cR::synapse0x301b870() {
   return (neuron0x30023d0()*-1.63553);
}

double NNfunction_ns_chi02_cR::synapse0x301b8b0() {
   return (neuron0x3002710()*0.100028);
}

double NNfunction_ns_chi02_cR::synapse0x301b8f0() {
   return (neuron0x3002a50()*0.239176);
}

double NNfunction_ns_chi02_cR::synapse0x301b930() {
   return (neuron0x3002d90()*0.674544);
}

double NNfunction_ns_chi02_cR::synapse0x301b970() {
   return (neuron0x30030d0()*1.64363);
}

double NNfunction_ns_chi02_cR::synapse0x301b9b0() {
   return (neuron0x3003410()*0.434089);
}

double NNfunction_ns_chi02_cR::synapse0x301bd30() {
   return (neuron0x2ffe850()*-0.011801);
}

double NNfunction_ns_chi02_cR::synapse0x301bd70() {
   return (neuron0x2ffeb90()*22.3457);
}

double NNfunction_ns_chi02_cR::synapse0x301bdb0() {
   return (neuron0x2ffeed0()*9.54749);
}

double NNfunction_ns_chi02_cR::synapse0x301bdf0() {
   return (neuron0x2fff210()*0.0558774);
}

double NNfunction_ns_chi02_cR::synapse0x301be30() {
   return (neuron0x2fff550()*-0.104404);
}

double NNfunction_ns_chi02_cR::synapse0x301be70() {
   return (neuron0x2fff890()*-0.0170165);
}

double NNfunction_ns_chi02_cR::synapse0x301beb0() {
   return (neuron0x2fffbd0()*-0.107664);
}

double NNfunction_ns_chi02_cR::synapse0x301bef0() {
   return (neuron0x2ffff10()*0.00613038);
}

double NNfunction_ns_chi02_cR::synapse0x301bf30() {
   return (neuron0x3000250()*-0.0452202);
}

double NNfunction_ns_chi02_cR::synapse0x301bf70() {
   return (neuron0x3000590()*0.0493098);
}

double NNfunction_ns_chi02_cR::synapse0x301bfb0() {
   return (neuron0x30008d0()*0.0680648);
}

double NNfunction_ns_chi02_cR::synapse0x301bff0() {
   return (neuron0x3000c10()*-0.0459043);
}

double NNfunction_ns_chi02_cR::synapse0x301c030() {
   return (neuron0x3000f50()*0.0576077);
}

double NNfunction_ns_chi02_cR::synapse0x301c070() {
   return (neuron0x3001290()*0.0238006);
}

double NNfunction_ns_chi02_cR::synapse0x301c0b0() {
   return (neuron0x30015d0()*-0.0381088);
}

double NNfunction_ns_chi02_cR::synapse0x301c0f0() {
   return (neuron0x3001910()*-0.31555);
}

double NNfunction_ns_chi02_cR::synapse0x301bb80() {
   return (neuron0x3001c50()*-0.0373319);
}

double NNfunction_ns_chi02_cR::synapse0x301bbc0() {
   return (neuron0x30021b0()*0.0200369);
}

double NNfunction_ns_chi02_cR::synapse0x301c240() {
   return (neuron0x30023d0()*0.0353345);
}

double NNfunction_ns_chi02_cR::synapse0x301c280() {
   return (neuron0x3002710()*-0.0456871);
}

double NNfunction_ns_chi02_cR::synapse0x301c2c0() {
   return (neuron0x3002a50()*0.196702);
}

double NNfunction_ns_chi02_cR::synapse0x301c300() {
   return (neuron0x3002d90()*0.0262446);
}

double NNfunction_ns_chi02_cR::synapse0x301c340() {
   return (neuron0x30030d0()*-0.0215037);
}

double NNfunction_ns_chi02_cR::synapse0x301c380() {
   return (neuron0x3003410()*-0.00475108);
}

double NNfunction_ns_chi02_cR::synapse0x301c700() {
   return (neuron0x2ffe850()*0.0153194);
}

double NNfunction_ns_chi02_cR::synapse0x301c740() {
   return (neuron0x2ffeb90()*-0.021921);
}

double NNfunction_ns_chi02_cR::synapse0x301c780() {
   return (neuron0x2ffeed0()*0.000350467);
}

double NNfunction_ns_chi02_cR::synapse0x301c7c0() {
   return (neuron0x2fff210()*2.64288);
}

double NNfunction_ns_chi02_cR::synapse0x301c800() {
   return (neuron0x2fff550()*0.000857645);
}

double NNfunction_ns_chi02_cR::synapse0x301c840() {
   return (neuron0x2fff890()*0.00471567);
}

double NNfunction_ns_chi02_cR::synapse0x301c880() {
   return (neuron0x2fffbd0()*0.00708372);
}

double NNfunction_ns_chi02_cR::synapse0x301c8c0() {
   return (neuron0x2ffff10()*-0.006277);
}

double NNfunction_ns_chi02_cR::synapse0x301c900() {
   return (neuron0x3000250()*0.00366712);
}

double NNfunction_ns_chi02_cR::synapse0x301c940() {
   return (neuron0x3000590()*-0.0101177);
}

double NNfunction_ns_chi02_cR::synapse0x301c980() {
   return (neuron0x30008d0()*-0.00432408);
}

double NNfunction_ns_chi02_cR::synapse0x301c9c0() {
   return (neuron0x3000c10()*-0.00502263);
}

double NNfunction_ns_chi02_cR::synapse0x301ca00() {
   return (neuron0x3000f50()*0.00419619);
}

double NNfunction_ns_chi02_cR::synapse0x301ca40() {
   return (neuron0x3001290()*0.0107859);
}

double NNfunction_ns_chi02_cR::synapse0x301ca80() {
   return (neuron0x30015d0()*-0.002576);
}

double NNfunction_ns_chi02_cR::synapse0x301cac0() {
   return (neuron0x3001910()*0.201835);
}

double NNfunction_ns_chi02_cR::synapse0x301c550() {
   return (neuron0x3001c50()*0.00524408);
}

double NNfunction_ns_chi02_cR::synapse0x301c590() {
   return (neuron0x30021b0()*-0.0135788);
}

double NNfunction_ns_chi02_cR::synapse0x301cc10() {
   return (neuron0x30023d0()*-0.00683891);
}

double NNfunction_ns_chi02_cR::synapse0x301cc50() {
   return (neuron0x3002710()*-0.00763067);
}

double NNfunction_ns_chi02_cR::synapse0x301cc90() {
   return (neuron0x3002a50()*0.0013448);
}

double NNfunction_ns_chi02_cR::synapse0x301ccd0() {
   return (neuron0x3002d90()*0.00406419);
}

double NNfunction_ns_chi02_cR::synapse0x301cd10() {
   return (neuron0x30030d0()*0.0058747);
}

double NNfunction_ns_chi02_cR::synapse0x301cd50() {
   return (neuron0x3003410()*0.00907962);
}

double NNfunction_ns_chi02_cR::synapse0x301d0d0() {
   return (neuron0x2ffe850()*-0.122461);
}

double NNfunction_ns_chi02_cR::synapse0x301d110() {
   return (neuron0x2ffeb90()*-0.0314555);
}

double NNfunction_ns_chi02_cR::synapse0x301d150() {
   return (neuron0x2ffeed0()*-2.07712);
}

double NNfunction_ns_chi02_cR::synapse0x301d190() {
   return (neuron0x2fff210()*-0.120329);
}

double NNfunction_ns_chi02_cR::synapse0x301d1d0() {
   return (neuron0x2fff550()*-0.101292);
}

double NNfunction_ns_chi02_cR::synapse0x301d210() {
   return (neuron0x2fff890()*-0.058484);
}

double NNfunction_ns_chi02_cR::synapse0x301d250() {
   return (neuron0x2fffbd0()*0.014913);
}

double NNfunction_ns_chi02_cR::synapse0x301d290() {
   return (neuron0x2ffff10()*-0.0440478);
}

double NNfunction_ns_chi02_cR::synapse0x301d2d0() {
   return (neuron0x3000250()*0.0340911);
}

double NNfunction_ns_chi02_cR::synapse0x301d310() {
   return (neuron0x3000590()*-0.0516478);
}

double NNfunction_ns_chi02_cR::synapse0x301d350() {
   return (neuron0x30008d0()*-0.136356);
}

double NNfunction_ns_chi02_cR::synapse0x301d390() {
   return (neuron0x3000c10()*-0.00143649);
}

double NNfunction_ns_chi02_cR::synapse0x301d3d0() {
   return (neuron0x3000f50()*-0.0517967);
}

double NNfunction_ns_chi02_cR::synapse0x301d410() {
   return (neuron0x3001290()*-0.0158258);
}

double NNfunction_ns_chi02_cR::synapse0x301d450() {
   return (neuron0x30015d0()*0.0625794);
}

double NNfunction_ns_chi02_cR::synapse0x301d490() {
   return (neuron0x3001910()*0.0962756);
}

double NNfunction_ns_chi02_cR::synapse0x301cf20() {
   return (neuron0x3001c50()*-0.0783403);
}

double NNfunction_ns_chi02_cR::synapse0x301cf60() {
   return (neuron0x30021b0()*0.0725214);
}

double NNfunction_ns_chi02_cR::synapse0x301d5e0() {
   return (neuron0x30023d0()*0.1199);
}

double NNfunction_ns_chi02_cR::synapse0x301d620() {
   return (neuron0x3002710()*0.0318312);
}

double NNfunction_ns_chi02_cR::synapse0x301d660() {
   return (neuron0x3002a50()*0.0273469);
}

double NNfunction_ns_chi02_cR::synapse0x301d6a0() {
   return (neuron0x3002d90()*-0.127589);
}

double NNfunction_ns_chi02_cR::synapse0x301d6e0() {
   return (neuron0x30030d0()*0.0291746);
}

double NNfunction_ns_chi02_cR::synapse0x301d720() {
   return (neuron0x3003410()*-6.61607);
}

double NNfunction_ns_chi02_cR::synapse0x301daa0() {
   return (neuron0x2ffe850()*0.235372);
}

double NNfunction_ns_chi02_cR::synapse0x301dae0() {
   return (neuron0x2ffeb90()*0.678966);
}

double NNfunction_ns_chi02_cR::synapse0x301db20() {
   return (neuron0x2ffeed0()*-2.55677);
}

double NNfunction_ns_chi02_cR::synapse0x301db60() {
   return (neuron0x2fff210()*0.0835263);
}

double NNfunction_ns_chi02_cR::synapse0x301dba0() {
   return (neuron0x2fff550()*0.122828);
}

double NNfunction_ns_chi02_cR::synapse0x301dbe0() {
   return (neuron0x2fff890()*0.263929);
}

double NNfunction_ns_chi02_cR::synapse0x301dc20() {
   return (neuron0x2fffbd0()*0.127088);
}

double NNfunction_ns_chi02_cR::synapse0x301dc60() {
   return (neuron0x2ffff10()*0.154747);
}

double NNfunction_ns_chi02_cR::synapse0x301dca0() {
   return (neuron0x3000250()*-0.187056);
}

double NNfunction_ns_chi02_cR::synapse0x301dce0() {
   return (neuron0x3000590()*-0.331229);
}

double NNfunction_ns_chi02_cR::synapse0x301dd20() {
   return (neuron0x30008d0()*-0.267986);
}

double NNfunction_ns_chi02_cR::synapse0x301dd60() {
   return (neuron0x3000c10()*-0.222956);
}

double NNfunction_ns_chi02_cR::synapse0x301dda0() {
   return (neuron0x3000f50()*0.0454521);
}

double NNfunction_ns_chi02_cR::synapse0x301dde0() {
   return (neuron0x3001290()*-0.0213175);
}

double NNfunction_ns_chi02_cR::synapse0x301de20() {
   return (neuron0x30015d0()*0.13457);
}

double NNfunction_ns_chi02_cR::synapse0x301de60() {
   return (neuron0x3001910()*0.484881);
}

double NNfunction_ns_chi02_cR::synapse0x301d8f0() {
   return (neuron0x3001c50()*0.485745);
}

double NNfunction_ns_chi02_cR::synapse0x301d930() {
   return (neuron0x30021b0()*-0.149369);
}

double NNfunction_ns_chi02_cR::synapse0x301dfb0() {
   return (neuron0x30023d0()*-0.134718);
}

double NNfunction_ns_chi02_cR::synapse0x301dff0() {
   return (neuron0x3002710()*-0.101723);
}

double NNfunction_ns_chi02_cR::synapse0x301e030() {
   return (neuron0x3002a50()*0.0853682);
}

double NNfunction_ns_chi02_cR::synapse0x301e070() {
   return (neuron0x3002d90()*-0.0342163);
}

double NNfunction_ns_chi02_cR::synapse0x301e0b0() {
   return (neuron0x30030d0()*-0.121169);
}

double NNfunction_ns_chi02_cR::synapse0x301e0f0() {
   return (neuron0x3003410()*-0.979092);
}

double NNfunction_ns_chi02_cR::synapse0x301e470() {
   return (neuron0x2ffe850()*2.52155);
}

double NNfunction_ns_chi02_cR::synapse0x301e4b0() {
   return (neuron0x2ffeb90()*3.92848);
}

double NNfunction_ns_chi02_cR::synapse0x301e4f0() {
   return (neuron0x2ffeed0()*-0.468601);
}

double NNfunction_ns_chi02_cR::synapse0x301e530() {
   return (neuron0x2fff210()*-0.162722);
}

double NNfunction_ns_chi02_cR::synapse0x301e570() {
   return (neuron0x2fff550()*0.919689);
}

double NNfunction_ns_chi02_cR::synapse0x301e5b0() {
   return (neuron0x2fff890()*1.6123);
}

double NNfunction_ns_chi02_cR::synapse0x301e5f0() {
   return (neuron0x2fffbd0()*0.651641);
}

double NNfunction_ns_chi02_cR::synapse0x301e630() {
   return (neuron0x2ffff10()*-0.825632);
}

double NNfunction_ns_chi02_cR::synapse0x301e670() {
   return (neuron0x3000250()*-0.403814);
}

double NNfunction_ns_chi02_cR::synapse0x301e6b0() {
   return (neuron0x3000590()*0.45404);
}

double NNfunction_ns_chi02_cR::synapse0x301e6f0() {
   return (neuron0x30008d0()*-0.459836);
}

double NNfunction_ns_chi02_cR::synapse0x301e730() {
   return (neuron0x3000c10()*-1.00982);
}

double NNfunction_ns_chi02_cR::synapse0x301e770() {
   return (neuron0x3000f50()*0.225758);
}

double NNfunction_ns_chi02_cR::synapse0x301e7b0() {
   return (neuron0x3001290()*0.831297);
}

double NNfunction_ns_chi02_cR::synapse0x301e7f0() {
   return (neuron0x30015d0()*-1.07171);
}

double NNfunction_ns_chi02_cR::synapse0x301e830() {
   return (neuron0x3001910()*-0.287623);
}

double NNfunction_ns_chi02_cR::synapse0x301e2c0() {
   return (neuron0x3001c50()*1.31085);
}

double NNfunction_ns_chi02_cR::synapse0x301e300() {
   return (neuron0x30021b0()*-0.553981);
}

double NNfunction_ns_chi02_cR::synapse0x301e980() {
   return (neuron0x30023d0()*0.70925);
}

double NNfunction_ns_chi02_cR::synapse0x301e9c0() {
   return (neuron0x3002710()*-0.903861);
}

double NNfunction_ns_chi02_cR::synapse0x301ea00() {
   return (neuron0x3002a50()*-0.0123478);
}

double NNfunction_ns_chi02_cR::synapse0x301ea40() {
   return (neuron0x3002d90()*-0.872818);
}

double NNfunction_ns_chi02_cR::synapse0x301ea80() {
   return (neuron0x30030d0()*-0.458342);
}

double NNfunction_ns_chi02_cR::synapse0x301eac0() {
   return (neuron0x3003410()*-0.490457);
}

double NNfunction_ns_chi02_cR::synapse0x301ee40() {
   return (neuron0x2ffe850()*1.40967);
}

double NNfunction_ns_chi02_cR::synapse0x301ee80() {
   return (neuron0x2ffeb90()*0.0499346);
}

double NNfunction_ns_chi02_cR::synapse0x301eec0() {
   return (neuron0x2ffeed0()*-1.70884);
}

double NNfunction_ns_chi02_cR::synapse0x301ef00() {
   return (neuron0x2fff210()*-0.90874);
}

double NNfunction_ns_chi02_cR::synapse0x301ef40() {
   return (neuron0x2fff550()*1.18284);
}

double NNfunction_ns_chi02_cR::synapse0x301ef80() {
   return (neuron0x2fff890()*-4.21852);
}

double NNfunction_ns_chi02_cR::synapse0x301efc0() {
   return (neuron0x2fffbd0()*1.001);
}

double NNfunction_ns_chi02_cR::synapse0x301f000() {
   return (neuron0x2ffff10()*1.34742);
}

double NNfunction_ns_chi02_cR::synapse0x301f040() {
   return (neuron0x3000250()*-2.65354);
}

double NNfunction_ns_chi02_cR::synapse0x301f080() {
   return (neuron0x3000590()*-1.11037);
}

double NNfunction_ns_chi02_cR::synapse0x301f0c0() {
   return (neuron0x30008d0()*0.605914);
}

double NNfunction_ns_chi02_cR::synapse0x301f100() {
   return (neuron0x3000c10()*0.335206);
}

double NNfunction_ns_chi02_cR::synapse0x301f140() {
   return (neuron0x3000f50()*0.776376);
}

double NNfunction_ns_chi02_cR::synapse0x301f180() {
   return (neuron0x3001290()*0.442653);
}

double NNfunction_ns_chi02_cR::synapse0x301f1c0() {
   return (neuron0x30015d0()*0.939099);
}

double NNfunction_ns_chi02_cR::synapse0x301f200() {
   return (neuron0x3001910()*0.387246);
}

double NNfunction_ns_chi02_cR::synapse0x301ec90() {
   return (neuron0x3001c50()*1.44757);
}

double NNfunction_ns_chi02_cR::synapse0x301ecd0() {
   return (neuron0x30021b0()*-0.260739);
}

double NNfunction_ns_chi02_cR::synapse0x301f350() {
   return (neuron0x30023d0()*0.0178251);
}

double NNfunction_ns_chi02_cR::synapse0x301f390() {
   return (neuron0x3002710()*1.1586);
}

double NNfunction_ns_chi02_cR::synapse0x301f3d0() {
   return (neuron0x3002a50()*-0.866283);
}

double NNfunction_ns_chi02_cR::synapse0x301f410() {
   return (neuron0x3002d90()*-0.0239662);
}

double NNfunction_ns_chi02_cR::synapse0x301f450() {
   return (neuron0x30030d0()*1.98347);
}

double NNfunction_ns_chi02_cR::synapse0x301f490() {
   return (neuron0x3003410()*-1.15208);
}

double NNfunction_ns_chi02_cR::synapse0x301f810() {
   return (neuron0x2ffe850()*-0.0309782);
}

double NNfunction_ns_chi02_cR::synapse0x301f850() {
   return (neuron0x2ffeb90()*0.0892052);
}

double NNfunction_ns_chi02_cR::synapse0x301f890() {
   return (neuron0x2ffeed0()*0.0174611);
}

double NNfunction_ns_chi02_cR::synapse0x301f8d0() {
   return (neuron0x2fff210()*-0.816925);
}

double NNfunction_ns_chi02_cR::synapse0x301f910() {
   return (neuron0x2fff550()*0.0144986);
}

double NNfunction_ns_chi02_cR::synapse0x301f950() {
   return (neuron0x2fff890()*-0.0259039);
}

double NNfunction_ns_chi02_cR::synapse0x301f990() {
   return (neuron0x2fffbd0()*0.0156263);
}

double NNfunction_ns_chi02_cR::synapse0x301f9d0() {
   return (neuron0x2ffff10()*0.00720135);
}

double NNfunction_ns_chi02_cR::synapse0x301fa10() {
   return (neuron0x3000250()*-0.0359826);
}

double NNfunction_ns_chi02_cR::synapse0x301fa50() {
   return (neuron0x3000590()*0.0145835);
}

double NNfunction_ns_chi02_cR::synapse0x301fa90() {
   return (neuron0x30008d0()*0.00571885);
}

double NNfunction_ns_chi02_cR::synapse0x301fad0() {
   return (neuron0x3000c10()*0.0019544);
}

double NNfunction_ns_chi02_cR::synapse0x301fb10() {
   return (neuron0x3000f50()*0.0137505);
}

double NNfunction_ns_chi02_cR::synapse0x301fb50() {
   return (neuron0x3001290()*-0.0217583);
}

double NNfunction_ns_chi02_cR::synapse0x301fb90() {
   return (neuron0x30015d0()*0.0300546);
}

double NNfunction_ns_chi02_cR::synapse0x301fbd0() {
   return (neuron0x3001910()*-0.555329);
}

double NNfunction_ns_chi02_cR::synapse0x301f660() {
   return (neuron0x3001c50()*-0.00434448);
}

double NNfunction_ns_chi02_cR::synapse0x301f6a0() {
   return (neuron0x30021b0()*0.0357875);
}

double NNfunction_ns_chi02_cR::synapse0x301fd20() {
   return (neuron0x30023d0()*0.0240915);
}

double NNfunction_ns_chi02_cR::synapse0x301fd60() {
   return (neuron0x3002710()*0.0291913);
}

double NNfunction_ns_chi02_cR::synapse0x301fda0() {
   return (neuron0x3002a50()*0.00617333);
}

double NNfunction_ns_chi02_cR::synapse0x301fde0() {
   return (neuron0x3002d90()*0.00250971);
}

double NNfunction_ns_chi02_cR::synapse0x301fe20() {
   return (neuron0x30030d0()*-0.00621542);
}

double NNfunction_ns_chi02_cR::synapse0x301fe60() {
   return (neuron0x3003410()*0.00108774);
}

double NNfunction_ns_chi02_cR::synapse0x3008910() {
   return (neuron0x2ffe850()*0.0465147);
}

double NNfunction_ns_chi02_cR::synapse0x3008950() {
   return (neuron0x2ffeb90()*-0.0537046);
}

double NNfunction_ns_chi02_cR::synapse0x3008990() {
   return (neuron0x2ffeed0()*0.095101);
}

double NNfunction_ns_chi02_cR::synapse0x30089d0() {
   return (neuron0x2fff210()*0.0445861);
}

double NNfunction_ns_chi02_cR::synapse0x3008a10() {
   return (neuron0x2fff550()*0.0204748);
}

double NNfunction_ns_chi02_cR::synapse0x3008a50() {
   return (neuron0x2fff890()*0.0415009);
}

double NNfunction_ns_chi02_cR::synapse0x3008a90() {
   return (neuron0x2fffbd0()*-0.0246159);
}

double NNfunction_ns_chi02_cR::synapse0x3008ad0() {
   return (neuron0x2ffff10()*0.0194126);
}

double NNfunction_ns_chi02_cR::synapse0x30205f0() {
   return (neuron0x3000250()*0.0253025);
}

double NNfunction_ns_chi02_cR::synapse0x3020630() {
   return (neuron0x3000590()*-0.0120904);
}

double NNfunction_ns_chi02_cR::synapse0x3020670() {
   return (neuron0x30008d0()*-0.0124874);
}

double NNfunction_ns_chi02_cR::synapse0x30206b0() {
   return (neuron0x3000c10()*-0.0282354);
}

double NNfunction_ns_chi02_cR::synapse0x30206f0() {
   return (neuron0x3000f50()*-0.0597196);
}

double NNfunction_ns_chi02_cR::synapse0x3020730() {
   return (neuron0x3001290()*-0.00780726);
}

double NNfunction_ns_chi02_cR::synapse0x3020770() {
   return (neuron0x30015d0()*-0.165633);
}

double NNfunction_ns_chi02_cR::synapse0x30207b0() {
   return (neuron0x3001910()*0.610764);
}

double NNfunction_ns_chi02_cR::synapse0x3020030() {
   return (neuron0x3001c50()*-0.0703535);
}

double NNfunction_ns_chi02_cR::synapse0x3020070() {
   return (neuron0x30021b0()*-0.0733441);
}

double NNfunction_ns_chi02_cR::synapse0x3020900() {
   return (neuron0x30023d0()*-0.0366959);
}

double NNfunction_ns_chi02_cR::synapse0x3020940() {
   return (neuron0x3002710()*-0.0245553);
}

double NNfunction_ns_chi02_cR::synapse0x3020980() {
   return (neuron0x3002a50()*0.00274516);
}

double NNfunction_ns_chi02_cR::synapse0x30209c0() {
   return (neuron0x3002d90()*-0.00840347);
}

double NNfunction_ns_chi02_cR::synapse0x3020a00() {
   return (neuron0x30030d0()*0.00902835);
}

double NNfunction_ns_chi02_cR::synapse0x3020a40() {
   return (neuron0x3003410()*-0.0370531);
}

double NNfunction_ns_chi02_cR::synapse0x3020dc0() {
   return (neuron0x2ffe850()*-0.404597);
}

double NNfunction_ns_chi02_cR::synapse0x3020e00() {
   return (neuron0x2ffeb90()*-4.36496);
}

double NNfunction_ns_chi02_cR::synapse0x3020e40() {
   return (neuron0x2ffeed0()*-0.0772856);
}

double NNfunction_ns_chi02_cR::synapse0x3020e80() {
   return (neuron0x2fff210()*-0.529028);
}

double NNfunction_ns_chi02_cR::synapse0x3020ec0() {
   return (neuron0x2fff550()*-0.192851);
}

double NNfunction_ns_chi02_cR::synapse0x3020f00() {
   return (neuron0x2fff890()*0.132905);
}

double NNfunction_ns_chi02_cR::synapse0x3020f40() {
   return (neuron0x2fffbd0()*1.69713);
}

double NNfunction_ns_chi02_cR::synapse0x3020f80() {
   return (neuron0x2ffff10()*2.56614);
}

double NNfunction_ns_chi02_cR::synapse0x3020fc0() {
   return (neuron0x3000250()*-0.847713);
}

double NNfunction_ns_chi02_cR::synapse0x3021000() {
   return (neuron0x3000590()*-0.396518);
}

double NNfunction_ns_chi02_cR::synapse0x3021040() {
   return (neuron0x30008d0()*0.53591);
}

double NNfunction_ns_chi02_cR::synapse0x3021080() {
   return (neuron0x3000c10()*0.580418);
}

double NNfunction_ns_chi02_cR::synapse0x30210c0() {
   return (neuron0x3000f50()*-0.200675);
}

double NNfunction_ns_chi02_cR::synapse0x3021100() {
   return (neuron0x3001290()*-0.478943);
}

double NNfunction_ns_chi02_cR::synapse0x3021140() {
   return (neuron0x30015d0()*1.78339);
}

double NNfunction_ns_chi02_cR::synapse0x3021180() {
   return (neuron0x3001910()*-0.621974);
}

double NNfunction_ns_chi02_cR::synapse0x3020c10() {
   return (neuron0x3001c50()*1.18999);
}

double NNfunction_ns_chi02_cR::synapse0x3020c50() {
   return (neuron0x30021b0()*1.08689);
}

double NNfunction_ns_chi02_cR::synapse0x30212d0() {
   return (neuron0x30023d0()*0.754183);
}

double NNfunction_ns_chi02_cR::synapse0x3021310() {
   return (neuron0x3002710()*0.554969);
}

double NNfunction_ns_chi02_cR::synapse0x3021350() {
   return (neuron0x3002a50()*0.842672);
}

double NNfunction_ns_chi02_cR::synapse0x3021390() {
   return (neuron0x3002d90()*0.718462);
}

double NNfunction_ns_chi02_cR::synapse0x30213d0() {
   return (neuron0x30030d0()*1.34471);
}

double NNfunction_ns_chi02_cR::synapse0x3021410() {
   return (neuron0x3003410()*-0.0181806);
}

double NNfunction_ns_chi02_cR::synapse0x3021790() {
   return (neuron0x2ffe850()*-0.159361);
}

double NNfunction_ns_chi02_cR::synapse0x30217d0() {
   return (neuron0x2ffeb90()*10.6901);
}

double NNfunction_ns_chi02_cR::synapse0x3021810() {
   return (neuron0x2ffeed0()*1.04987);
}

double NNfunction_ns_chi02_cR::synapse0x3021850() {
   return (neuron0x2fff210()*-0.00164339);
}

double NNfunction_ns_chi02_cR::synapse0x3021890() {
   return (neuron0x2fff550()*-0.0522784);
}

double NNfunction_ns_chi02_cR::synapse0x30218d0() {
   return (neuron0x2fff890()*0.033246);
}

double NNfunction_ns_chi02_cR::synapse0x3021910() {
   return (neuron0x2fffbd0()*-0.0850441);
}

double NNfunction_ns_chi02_cR::synapse0x3021950() {
   return (neuron0x2ffff10()*-0.0806611);
}

double NNfunction_ns_chi02_cR::synapse0x3021990() {
   return (neuron0x3000250()*-0.0221442);
}

double NNfunction_ns_chi02_cR::synapse0x30219d0() {
   return (neuron0x3000590()*-0.0139419);
}

double NNfunction_ns_chi02_cR::synapse0x3021a10() {
   return (neuron0x30008d0()*0.061597);
}

double NNfunction_ns_chi02_cR::synapse0x3021a50() {
   return (neuron0x3000c10()*-0.011142);
}

double NNfunction_ns_chi02_cR::synapse0x3021a90() {
   return (neuron0x3000f50()*0.0267693);
}

double NNfunction_ns_chi02_cR::synapse0x3021ad0() {
   return (neuron0x3001290()*-0.0551657);
}

double NNfunction_ns_chi02_cR::synapse0x3021b10() {
   return (neuron0x30015d0()*-0.027838);
}

double NNfunction_ns_chi02_cR::synapse0x3021b50() {
   return (neuron0x3001910()*-0.208517);
}

double NNfunction_ns_chi02_cR::synapse0x30215e0() {
   return (neuron0x3001c50()*0.061488);
}

double NNfunction_ns_chi02_cR::synapse0x3021620() {
   return (neuron0x30021b0()*0.0389662);
}

double NNfunction_ns_chi02_cR::synapse0x3012150() {
   return (neuron0x30023d0()*0.0652993);
}

double NNfunction_ns_chi02_cR::synapse0x3012190() {
   return (neuron0x3002710()*0.0275117);
}

double NNfunction_ns_chi02_cR::synapse0x30121d0() {
   return (neuron0x3002a50()*0.059456);
}

double NNfunction_ns_chi02_cR::synapse0x3012210() {
   return (neuron0x3002d90()*0.0601336);
}

double NNfunction_ns_chi02_cR::synapse0x3012250() {
   return (neuron0x30030d0()*-0.0368992);
}

double NNfunction_ns_chi02_cR::synapse0x3012290() {
   return (neuron0x3003410()*-6.38613);
}

double NNfunction_ns_chi02_cR::synapse0x3012610() {
   return (neuron0x2ffe850()*0.605417);
}

double NNfunction_ns_chi02_cR::synapse0x3012650() {
   return (neuron0x2ffeb90()*-1.23761);
}

double NNfunction_ns_chi02_cR::synapse0x3012690() {
   return (neuron0x2ffeed0()*-0.225459);
}

double NNfunction_ns_chi02_cR::synapse0x30126d0() {
   return (neuron0x2fff210()*-1.79267);
}

double NNfunction_ns_chi02_cR::synapse0x3012710() {
   return (neuron0x2fff550()*-0.323569);
}

double NNfunction_ns_chi02_cR::synapse0x3012750() {
   return (neuron0x2fff890()*-1.4441);
}

double NNfunction_ns_chi02_cR::synapse0x3012790() {
   return (neuron0x2fffbd0()*0.774541);
}

double NNfunction_ns_chi02_cR::synapse0x30127d0() {
   return (neuron0x2ffff10()*-0.572246);
}

double NNfunction_ns_chi02_cR::synapse0x3012810() {
   return (neuron0x3000250()*-1.24088);
}

double NNfunction_ns_chi02_cR::synapse0x3012850() {
   return (neuron0x3000590()*0.706539);
}

double NNfunction_ns_chi02_cR::synapse0x3012890() {
   return (neuron0x30008d0()*-0.744556);
}

double NNfunction_ns_chi02_cR::synapse0x30128d0() {
   return (neuron0x3000c10()*1.0205);
}

double NNfunction_ns_chi02_cR::synapse0x3012910() {
   return (neuron0x3000f50()*0.329309);
}

double NNfunction_ns_chi02_cR::synapse0x3012950() {
   return (neuron0x3001290()*1.52095);
}

double NNfunction_ns_chi02_cR::synapse0x3012990() {
   return (neuron0x30015d0()*0.73549);
}

double NNfunction_ns_chi02_cR::synapse0x30129d0() {
   return (neuron0x3001910()*-1.47153);
}

double NNfunction_ns_chi02_cR::synapse0x3012460() {
   return (neuron0x3001c50()*0.464876);
}

double NNfunction_ns_chi02_cR::synapse0x30124a0() {
   return (neuron0x30021b0()*-0.602544);
}

double NNfunction_ns_chi02_cR::synapse0x3012b20() {
   return (neuron0x30023d0()*-0.999563);
}

double NNfunction_ns_chi02_cR::synapse0x3012b60() {
   return (neuron0x3002710()*-1.0453);
}

double NNfunction_ns_chi02_cR::synapse0x3012ba0() {
   return (neuron0x3002a50()*-0.239093);
}

double NNfunction_ns_chi02_cR::synapse0x3012be0() {
   return (neuron0x3002d90()*-0.42947);
}

double NNfunction_ns_chi02_cR::synapse0x3012c20() {
   return (neuron0x30030d0()*-1.56427);
}

double NNfunction_ns_chi02_cR::synapse0x3012c60() {
   return (neuron0x3003410()*1.73458);
}

double NNfunction_ns_chi02_cR::synapse0x3012fe0() {
   return (neuron0x2ffe850()*-0.266049);
}

double NNfunction_ns_chi02_cR::synapse0x3013020() {
   return (neuron0x2ffeb90()*0.163506);
}

double NNfunction_ns_chi02_cR::synapse0x3013060() {
   return (neuron0x2ffeed0()*0.102536);
}

double NNfunction_ns_chi02_cR::synapse0x30130a0() {
   return (neuron0x2fff210()*-2.75541);
}

double NNfunction_ns_chi02_cR::synapse0x30130e0() {
   return (neuron0x2fff550()*-0.980687);
}

double NNfunction_ns_chi02_cR::synapse0x3013120() {
   return (neuron0x2fff890()*1.64817);
}

double NNfunction_ns_chi02_cR::synapse0x3013160() {
   return (neuron0x2fffbd0()*0.100846);
}

double NNfunction_ns_chi02_cR::synapse0x30131a0() {
   return (neuron0x2ffff10()*-0.695056);
}

double NNfunction_ns_chi02_cR::synapse0x30131e0() {
   return (neuron0x3000250()*1.7464);
}

double NNfunction_ns_chi02_cR::synapse0x3013220() {
   return (neuron0x3000590()*0.0712775);
}

double NNfunction_ns_chi02_cR::synapse0x3013260() {
   return (neuron0x30008d0()*0.0395253);
}

double NNfunction_ns_chi02_cR::synapse0x30132a0() {
   return (neuron0x3000c10()*-1.70193);
}

double NNfunction_ns_chi02_cR::synapse0x30132e0() {
   return (neuron0x3000f50()*-1.47883);
}

double NNfunction_ns_chi02_cR::synapse0x3013320() {
   return (neuron0x3001290()*0.721555);
}

double NNfunction_ns_chi02_cR::synapse0x3013360() {
   return (neuron0x30015d0()*0.520604);
}

double NNfunction_ns_chi02_cR::synapse0x30133a0() {
   return (neuron0x3001910()*2.34696);
}

double NNfunction_ns_chi02_cR::synapse0x3012e30() {
   return (neuron0x3001c50()*-1.62027);
}

double NNfunction_ns_chi02_cR::synapse0x3012e70() {
   return (neuron0x30021b0()*0.146026);
}

double NNfunction_ns_chi02_cR::synapse0x30134f0() {
   return (neuron0x30023d0()*-0.893455);
}

double NNfunction_ns_chi02_cR::synapse0x3013530() {
   return (neuron0x3002710()*-0.332511);
}

double NNfunction_ns_chi02_cR::synapse0x3013570() {
   return (neuron0x3002a50()*0.502481);
}

double NNfunction_ns_chi02_cR::synapse0x30135b0() {
   return (neuron0x3002d90()*-2.07336);
}

double NNfunction_ns_chi02_cR::synapse0x30135f0() {
   return (neuron0x30030d0()*-0.852423);
}

double NNfunction_ns_chi02_cR::synapse0x3013630() {
   return (neuron0x3003410()*0.72843);
}

double NNfunction_ns_chi02_cR::synapse0x30139b0() {
   return (neuron0x2ffe850()*-0.021133);
}

double NNfunction_ns_chi02_cR::synapse0x30139f0() {
   return (neuron0x2ffeb90()*-1.33178);
}

double NNfunction_ns_chi02_cR::synapse0x3013a30() {
   return (neuron0x2ffeed0()*-0.00704537);
}

double NNfunction_ns_chi02_cR::synapse0x3013a70() {
   return (neuron0x2fff210()*0.534872);
}

double NNfunction_ns_chi02_cR::synapse0x3013ab0() {
   return (neuron0x2fff550()*-0.971992);
}

double NNfunction_ns_chi02_cR::synapse0x3013af0() {
   return (neuron0x2fff890()*-3.30806);
}

double NNfunction_ns_chi02_cR::synapse0x3013b30() {
   return (neuron0x2fffbd0()*0.57);
}

double NNfunction_ns_chi02_cR::synapse0x3013b70() {
   return (neuron0x2ffff10()*0.477904);
}

double NNfunction_ns_chi02_cR::synapse0x3013bb0() {
   return (neuron0x3000250()*0.692378);
}

double NNfunction_ns_chi02_cR::synapse0x3013bf0() {
   return (neuron0x3000590()*0.243557);
}

double NNfunction_ns_chi02_cR::synapse0x3013c30() {
   return (neuron0x30008d0()*0.532777);
}

double NNfunction_ns_chi02_cR::synapse0x3013c70() {
   return (neuron0x3000c10()*0.220892);
}

double NNfunction_ns_chi02_cR::synapse0x3013cb0() {
   return (neuron0x3000f50()*1.13198);
}

double NNfunction_ns_chi02_cR::synapse0x3013cf0() {
   return (neuron0x3001290()*-0.302558);
}

double NNfunction_ns_chi02_cR::synapse0x3013d30() {
   return (neuron0x30015d0()*0.339004);
}

double NNfunction_ns_chi02_cR::synapse0x3013d70() {
   return (neuron0x3001910()*2.9405);
}

double NNfunction_ns_chi02_cR::synapse0x3013800() {
   return (neuron0x3001c50()*-0.015295);
}

double NNfunction_ns_chi02_cR::synapse0x3013840() {
   return (neuron0x30021b0()*0.182993);
}

double NNfunction_ns_chi02_cR::synapse0x3013ec0() {
   return (neuron0x30023d0()*0.844988);
}

double NNfunction_ns_chi02_cR::synapse0x3013f00() {
   return (neuron0x3002710()*0.735407);
}

double NNfunction_ns_chi02_cR::synapse0x3013f40() {
   return (neuron0x3002a50()*-0.617049);
}

double NNfunction_ns_chi02_cR::synapse0x3013f80() {
   return (neuron0x3002d90()*0.841782);
}

double NNfunction_ns_chi02_cR::synapse0x3013fc0() {
   return (neuron0x30030d0()*-0.632179);
}

double NNfunction_ns_chi02_cR::synapse0x3014000() {
   return (neuron0x3003410()*-0.0472776);
}

double NNfunction_ns_chi02_cR::synapse0x3025ed0() {
   return (neuron0x2ffe850()*-0.804464);
}

double NNfunction_ns_chi02_cR::synapse0x3025f10() {
   return (neuron0x2ffeb90()*-3.59571);
}

double NNfunction_ns_chi02_cR::synapse0x3025f50() {
   return (neuron0x2ffeed0()*-0.420397);
}

double NNfunction_ns_chi02_cR::synapse0x3025f90() {
   return (neuron0x2fff210()*1.44815);
}

double NNfunction_ns_chi02_cR::synapse0x3025fd0() {
   return (neuron0x2fff550()*0.752912);
}

double NNfunction_ns_chi02_cR::synapse0x3026010() {
   return (neuron0x2fff890()*1.7466);
}

double NNfunction_ns_chi02_cR::synapse0x3026050() {
   return (neuron0x2fffbd0()*-1.79941);
}

double NNfunction_ns_chi02_cR::synapse0x3026090() {
   return (neuron0x2ffff10()*0.373182);
}

double NNfunction_ns_chi02_cR::synapse0x30260d0() {
   return (neuron0x3000250()*0.710125);
}

double NNfunction_ns_chi02_cR::synapse0x3026110() {
   return (neuron0x3000590()*-0.209967);
}

double NNfunction_ns_chi02_cR::synapse0x3026150() {
   return (neuron0x30008d0()*0.543852);
}

double NNfunction_ns_chi02_cR::synapse0x3026190() {
   return (neuron0x3000c10()*-0.614573);
}

double NNfunction_ns_chi02_cR::synapse0x30261d0() {
   return (neuron0x3000f50()*-0.323332);
}

double NNfunction_ns_chi02_cR::synapse0x3026210() {
   return (neuron0x3001290()*-0.578309);
}

double NNfunction_ns_chi02_cR::synapse0x3026250() {
   return (neuron0x30015d0()*-0.692111);
}

double NNfunction_ns_chi02_cR::synapse0x3026290() {
   return (neuron0x3001910()*1.77557);
}

double NNfunction_ns_chi02_cR::synapse0x3014040() {
   return (neuron0x3001c50()*-1.09453);
}

double NNfunction_ns_chi02_cR::synapse0x3014080() {
   return (neuron0x30021b0()*0.147482);
}

double NNfunction_ns_chi02_cR::synapse0x30263e0() {
   return (neuron0x30023d0()*0.17883);
}

double NNfunction_ns_chi02_cR::synapse0x3026420() {
   return (neuron0x3002710()*-1.61105);
}

double NNfunction_ns_chi02_cR::synapse0x3026460() {
   return (neuron0x3002a50()*1.77038);
}

double NNfunction_ns_chi02_cR::synapse0x30264a0() {
   return (neuron0x3002d90()*-0.558599);
}

double NNfunction_ns_chi02_cR::synapse0x30264e0() {
   return (neuron0x30030d0()*0.522935);
}

double NNfunction_ns_chi02_cR::synapse0x3026520() {
   return (neuron0x3003410()*0.306926);
}

double NNfunction_ns_chi02_cR::synapse0x30268a0() {
   return (neuron0x2ffe850()*-0.523962);
}

double NNfunction_ns_chi02_cR::synapse0x30268e0() {
   return (neuron0x2ffeb90()*0.878868);
}

double NNfunction_ns_chi02_cR::synapse0x3026920() {
   return (neuron0x2ffeed0()*-0.613223);
}

double NNfunction_ns_chi02_cR::synapse0x3026960() {
   return (neuron0x2fff210()*0.00621714);
}

double NNfunction_ns_chi02_cR::synapse0x30269a0() {
   return (neuron0x2fff550()*-0.904889);
}

double NNfunction_ns_chi02_cR::synapse0x30269e0() {
   return (neuron0x2fff890()*-0.105002);
}

double NNfunction_ns_chi02_cR::synapse0x3026a20() {
   return (neuron0x2fffbd0()*-0.279186);
}

double NNfunction_ns_chi02_cR::synapse0x3026a60() {
   return (neuron0x2ffff10()*-0.361647);
}

double NNfunction_ns_chi02_cR::synapse0x3026aa0() {
   return (neuron0x3000250()*-0.0419108);
}

double NNfunction_ns_chi02_cR::synapse0x3026ae0() {
   return (neuron0x3000590()*0.196397);
}

double NNfunction_ns_chi02_cR::synapse0x3026b20() {
   return (neuron0x30008d0()*-0.0333688);
}

double NNfunction_ns_chi02_cR::synapse0x3026b60() {
   return (neuron0x3000c10()*2.67465);
}

double NNfunction_ns_chi02_cR::synapse0x3026ba0() {
   return (neuron0x3000f50()*0.85584);
}

double NNfunction_ns_chi02_cR::synapse0x3026be0() {
   return (neuron0x3001290()*-1.01984);
}

double NNfunction_ns_chi02_cR::synapse0x3026c20() {
   return (neuron0x30015d0()*-0.225228);
}

double NNfunction_ns_chi02_cR::synapse0x3026c60() {
   return (neuron0x3001910()*-1.32975);
}

double NNfunction_ns_chi02_cR::synapse0x30266f0() {
   return (neuron0x3001c50()*0.464258);
}

double NNfunction_ns_chi02_cR::synapse0x3026730() {
   return (neuron0x30021b0()*-0.96141);
}

double NNfunction_ns_chi02_cR::synapse0x3026db0() {
   return (neuron0x30023d0()*-0.278393);
}

double NNfunction_ns_chi02_cR::synapse0x3026df0() {
   return (neuron0x3002710()*0.919826);
}

double NNfunction_ns_chi02_cR::synapse0x3026e30() {
   return (neuron0x3002a50()*-0.146916);
}

double NNfunction_ns_chi02_cR::synapse0x3026e70() {
   return (neuron0x3002d90()*0.874738);
}

double NNfunction_ns_chi02_cR::synapse0x3026eb0() {
   return (neuron0x30030d0()*-0.0952699);
}

double NNfunction_ns_chi02_cR::synapse0x3026ef0() {
   return (neuron0x3003410()*-0.413707);
}

double NNfunction_ns_chi02_cR::synapse0x3027270() {
   return (neuron0x2ffe850()*-0.0602971);
}

double NNfunction_ns_chi02_cR::synapse0x30272b0() {
   return (neuron0x2ffeb90()*-1.62986);
}

double NNfunction_ns_chi02_cR::synapse0x30272f0() {
   return (neuron0x2ffeed0()*0.871118);
}

double NNfunction_ns_chi02_cR::synapse0x3027330() {
   return (neuron0x2fff210()*-0.0662905);
}

double NNfunction_ns_chi02_cR::synapse0x3027370() {
   return (neuron0x2fff550()*-0.137321);
}

double NNfunction_ns_chi02_cR::synapse0x30273b0() {
   return (neuron0x2fff890()*-0.0316181);
}

double NNfunction_ns_chi02_cR::synapse0x30273f0() {
   return (neuron0x2fffbd0()*0.0330922);
}

double NNfunction_ns_chi02_cR::synapse0x3027430() {
   return (neuron0x2ffff10()*-0.110424);
}

double NNfunction_ns_chi02_cR::synapse0x3027470() {
   return (neuron0x3000250()*-0.0258782);
}

double NNfunction_ns_chi02_cR::synapse0x30274b0() {
   return (neuron0x3000590()*-0.0394237);
}

double NNfunction_ns_chi02_cR::synapse0x30274f0() {
   return (neuron0x30008d0()*0.0194563);
}

double NNfunction_ns_chi02_cR::synapse0x3027530() {
   return (neuron0x3000c10()*0.0514374);
}

double NNfunction_ns_chi02_cR::synapse0x3027570() {
   return (neuron0x3000f50()*-0.0725163);
}

double NNfunction_ns_chi02_cR::synapse0x30275b0() {
   return (neuron0x3001290()*-0.151842);
}

double NNfunction_ns_chi02_cR::synapse0x30275f0() {
   return (neuron0x30015d0()*-0.0563143);
}

double NNfunction_ns_chi02_cR::synapse0x3027630() {
   return (neuron0x3001910()*0.34571);
}

double NNfunction_ns_chi02_cR::synapse0x30270c0() {
   return (neuron0x3001c50()*-0.121464);
}

double NNfunction_ns_chi02_cR::synapse0x3027100() {
   return (neuron0x30021b0()*0.0418345);
}

double NNfunction_ns_chi02_cR::synapse0x3027780() {
   return (neuron0x30023d0()*-0.116209);
}

double NNfunction_ns_chi02_cR::synapse0x30277c0() {
   return (neuron0x3002710()*-0.0280575);
}

double NNfunction_ns_chi02_cR::synapse0x3027800() {
   return (neuron0x3002a50()*-0.0427452);
}

double NNfunction_ns_chi02_cR::synapse0x3027840() {
   return (neuron0x3002d90()*-0.108656);
}

double NNfunction_ns_chi02_cR::synapse0x3027880() {
   return (neuron0x30030d0()*-0.0322366);
}

double NNfunction_ns_chi02_cR::synapse0x30278c0() {
   return (neuron0x3003410()*0.607186);
}

double NNfunction_ns_chi02_cR::synapse0x3027c40() {
   return (neuron0x2ffe850()*0.0198414);
}

double NNfunction_ns_chi02_cR::synapse0x3027c80() {
   return (neuron0x2ffeb90()*-0.0693747);
}

double NNfunction_ns_chi02_cR::synapse0x3027cc0() {
   return (neuron0x2ffeed0()*-0.0221137);
}

double NNfunction_ns_chi02_cR::synapse0x3027d00() {
   return (neuron0x2fff210()*-0.752536);
}

double NNfunction_ns_chi02_cR::synapse0x3027d40() {
   return (neuron0x2fff550()*-0.00692954);
}

double NNfunction_ns_chi02_cR::synapse0x3027d80() {
   return (neuron0x2fff890()*0.0243331);
}

double NNfunction_ns_chi02_cR::synapse0x3027dc0() {
   return (neuron0x2fffbd0()*-0.0185319);
}

double NNfunction_ns_chi02_cR::synapse0x3027e00() {
   return (neuron0x2ffff10()*-0.00371744);
}

double NNfunction_ns_chi02_cR::synapse0x3027e40() {
   return (neuron0x3000250()*0.0300756);
}

double NNfunction_ns_chi02_cR::synapse0x3027e80() {
   return (neuron0x3000590()*0.000495366);
}

double NNfunction_ns_chi02_cR::synapse0x3027ec0() {
   return (neuron0x30008d0()*-0.00738137);
}

double NNfunction_ns_chi02_cR::synapse0x3027f00() {
   return (neuron0x3000c10()*0.0128626);
}

double NNfunction_ns_chi02_cR::synapse0x3027f40() {
   return (neuron0x3000f50()*-0.0231262);
}

double NNfunction_ns_chi02_cR::synapse0x3027f80() {
   return (neuron0x3001290()*0.0149761);
}

double NNfunction_ns_chi02_cR::synapse0x3027fc0() {
   return (neuron0x30015d0()*-0.0341305);
}

double NNfunction_ns_chi02_cR::synapse0x3028000() {
   return (neuron0x3001910()*0.50658);
}

double NNfunction_ns_chi02_cR::synapse0x3027a90() {
   return (neuron0x3001c50()*-0.00187233);
}

double NNfunction_ns_chi02_cR::synapse0x3027ad0() {
   return (neuron0x30021b0()*-0.0164608);
}

double NNfunction_ns_chi02_cR::synapse0x3028150() {
   return (neuron0x30023d0()*-0.0290552);
}

double NNfunction_ns_chi02_cR::synapse0x3028190() {
   return (neuron0x3002710()*-0.0285222);
}

double NNfunction_ns_chi02_cR::synapse0x30281d0() {
   return (neuron0x3002a50()*-0.014705);
}

double NNfunction_ns_chi02_cR::synapse0x3028210() {
   return (neuron0x3002d90()*-0.00594724);
}

double NNfunction_ns_chi02_cR::synapse0x3028250() {
   return (neuron0x30030d0()*-2.19107e-05);
}

double NNfunction_ns_chi02_cR::synapse0x3028290() {
   return (neuron0x3003410()*-0.048096);
}

double NNfunction_ns_chi02_cR::synapse0x2dc81a0() {
   return (neuron0x3003880()*0.032367);
}

double NNfunction_ns_chi02_cR::synapse0x2dc81e0() {
   return (neuron0x30041d0()*1.53951);
}

double NNfunction_ns_chi02_cR::synapse0x3005d40() {
   return (neuron0x3004cb0()*-0.0192442);
}

double NNfunction_ns_chi02_cR::synapse0x3005d80() {
   return (neuron0x3004750()*0.0812092);
}

double NNfunction_ns_chi02_cR::synapse0x3006710() {
   return (neuron0x3005a90()*-0.0210387);
}

double NNfunction_ns_chi02_cR::synapse0x3006750() {
   return (neuron0x3006460()*-0.644872);
}

double NNfunction_ns_chi02_cR::synapse0x30074e0() {
   return (neuron0x3007230()*0.0274839);
}

double NNfunction_ns_chi02_cR::synapse0x3007520() {
   return (neuron0x3007c00()*-0.0370604);
}

double NNfunction_ns_chi02_cR::synapse0x3007eb0() {
   return (neuron0x30085d0()*2.05098);
}

double NNfunction_ns_chi02_cR::synapse0x3007ef0() {
   return (neuron0x30090b0()*-0.0906839);
}

double NNfunction_ns_chi02_cR::synapse0x3008880() {
   return (neuron0x3009a80()*-0.0430025);
}

double NNfunction_ns_chi02_cR::synapse0x30088c0() {
   return (neuron0x3006b60()*0.019284);
}

double NNfunction_ns_chi02_cR::synapse0x3009360() {
   return (neuron0x300b630()*-2.13879);
}

double NNfunction_ns_chi02_cR::synapse0x30093a0() {
   return (neuron0x300c000()*-0.0193082);
}

double NNfunction_ns_chi02_cR::synapse0x3009d30() {
   return (neuron0x300c9d0()*3.48203);
}

double NNfunction_ns_chi02_cR::synapse0x3009d70() {
   return (neuron0x300d3a0()*-0.250876);
}

double NNfunction_ns_chi02_cR::synapse0x3006e10() {
   return (neuron0x300f1b0()*0.0084521);
}

double NNfunction_ns_chi02_cR::synapse0x3006e50() {
   return (neuron0x300f490()*0.0981737);
}

double NNfunction_ns_chi02_cR::synapse0x300b8e0() {
   return (neuron0x300fe60()*-0.972411);
}

double NNfunction_ns_chi02_cR::synapse0x300b920() {
   return (neuron0x3010830()*-0.876557);
}

double NNfunction_ns_chi02_cR::synapse0x300c2b0() {
   return (neuron0x3011200()*0.780311);
}

double NNfunction_ns_chi02_cR::synapse0x300c2f0() {
   return (neuron0x3011bd0()*3.32182);
}

double NNfunction_ns_chi02_cR::synapse0x300cc80() {
   return (neuron0x300a720()*-1.57971);
}

double NNfunction_ns_chi02_cR::synapse0x300ccc0() {
   return (neuron0x300b0f0()*0.0275258);
}

double NNfunction_ns_chi02_cR::synapse0x300d650() {
   return (neuron0x3014960()*6.87503);
}

double NNfunction_ns_chi02_cR::synapse0x300d690() {
   return (neuron0x3015330()*-0.65298);
}

double NNfunction_ns_chi02_cR::synapse0x30017f0() {
   return (neuron0x3015d00()*-0.0801047);
}

double NNfunction_ns_chi02_cR::synapse0x3001830() {
   return (neuron0x30166d0()*0.0709085);
}

double NNfunction_ns_chi02_cR::synapse0x300f740() {
   return (neuron0x30170a0()*0.0172618);
}

double NNfunction_ns_chi02_cR::synapse0x300f780() {
   return (neuron0x3017a70()*-0.401787);
}

double NNfunction_ns_chi02_cR::synapse0x3010110() {
   return (neuron0x3018440()*-1.48865);
}

double NNfunction_ns_chi02_cR::synapse0x3010150() {
   return (neuron0x3018e10()*0.0445772);
}

double NNfunction_ns_chi02_cR::synapse0x3010ae0() {
   return (neuron0x300eea0()*0.00196718);
}

double NNfunction_ns_chi02_cR::synapse0x3010b20() {
   return (neuron0x301b9f0()*-0.730107);
}

double NNfunction_ns_chi02_cR::synapse0x30114b0() {
   return (neuron0x301c3c0()*-6.80321);
}

double NNfunction_ns_chi02_cR::synapse0x30114f0() {
   return (neuron0x301cd90()*-0.13876);
}

double NNfunction_ns_chi02_cR::synapse0x3011e80() {
   return (neuron0x301d760()*0.244469);
}

double NNfunction_ns_chi02_cR::synapse0x3011ec0() {
   return (neuron0x301e130()*0.0159812);
}

double NNfunction_ns_chi02_cR::synapse0x300a9d0() {
   return (neuron0x301eb00()*-0.0244619);
}

double NNfunction_ns_chi02_cR::synapse0x300aa10() {
   return (neuron0x301f4d0()*-5.39917);
}

double NNfunction_ns_chi02_cR::synapse0x3014280() {
   return (neuron0x301fea0()*-4.76599);
}

double NNfunction_ns_chi02_cR::synapse0x30142c0() {
   return (neuron0x3020a80()*0.0248779);
}

double NNfunction_ns_chi02_cR::synapse0x3014c10() {
   return (neuron0x3021450()*-1.62607);
}

double NNfunction_ns_chi02_cR::synapse0x3014c50() {
   return (neuron0x30122d0()*-0.0282377);
}

double NNfunction_ns_chi02_cR::synapse0x30155e0() {
   return (neuron0x3012ca0()*-0.00661354);
}

double NNfunction_ns_chi02_cR::synapse0x3015620() {
   return (neuron0x3013670()*-0.0622367);
}

double NNfunction_ns_chi02_cR::synapse0x3015fb0() {
   return (neuron0x3025cb0()*-0.0395386);
}

double NNfunction_ns_chi02_cR::synapse0x3015ff0() {
   return (neuron0x3026560()*-0.016971);
}

double NNfunction_ns_chi02_cR::synapse0x3016980() {
   return (neuron0x3026f30()*0.145774);
}

double NNfunction_ns_chi02_cR::synapse0x30169c0() {
   return (neuron0x3027900()*5.36733);
}

double NNfunction_ns_chi02_cR::synapse0x30190c0() {
   return (neuron0x3003880()*0.797039);
}

double NNfunction_ns_chi02_cR::synapse0x3019100() {
   return (neuron0x30041d0()*-0.527738);
}

double NNfunction_ns_chi02_cR::synapse0x300e680() {
   return (neuron0x3004cb0()*0.192915);
}

double NNfunction_ns_chi02_cR::synapse0x300e6c0() {
   return (neuron0x3004750()*-0.200677);
}

double NNfunction_ns_chi02_cR::synapse0x301bca0() {
   return (neuron0x3005a90()*0.434754);
}

double NNfunction_ns_chi02_cR::synapse0x301bce0() {
   return (neuron0x3006460()*3.61689);
}

double NNfunction_ns_chi02_cR::synapse0x301c670() {
   return (neuron0x3007230()*-0.11669);
}

double NNfunction_ns_chi02_cR::synapse0x301c6b0() {
   return (neuron0x3007c00()*0.192143);
}

double NNfunction_ns_chi02_cR::synapse0x301d040() {
   return (neuron0x30085d0()*0.556463);
}

double NNfunction_ns_chi02_cR::synapse0x301d080() {
   return (neuron0x30090b0()*-0.283658);
}

double NNfunction_ns_chi02_cR::synapse0x301da10() {
   return (neuron0x3009a80()*0.305021);
}

double NNfunction_ns_chi02_cR::synapse0x301da50() {
   return (neuron0x3006b60()*0.481574);
}

double NNfunction_ns_chi02_cR::synapse0x301e3e0() {
   return (neuron0x300b630()*-1.24203);
}

double NNfunction_ns_chi02_cR::synapse0x301e420() {
   return (neuron0x300c000()*-0.272022);
}

double NNfunction_ns_chi02_cR::synapse0x301edb0() {
   return (neuron0x300c9d0()*0.566785);
}

double NNfunction_ns_chi02_cR::synapse0x301edf0() {
   return (neuron0x300d3a0()*-0.24943);
}

double NNfunction_ns_chi02_cR::synapse0x301f780() {
   return (neuron0x300f1b0()*0.224452);
}

double NNfunction_ns_chi02_cR::synapse0x301f7c0() {
   return (neuron0x300f490()*6.44259);
}

double NNfunction_ns_chi02_cR::synapse0x3020150() {
   return (neuron0x300fe60()*3.1574);
}

double NNfunction_ns_chi02_cR::synapse0x3020190() {
   return (neuron0x3010830()*-3.08777);
}

double NNfunction_ns_chi02_cR::synapse0x3020d30() {
   return (neuron0x3011200()*-6.24743);
}

double NNfunction_ns_chi02_cR::synapse0x3020d70() {
   return (neuron0x3011bd0()*6.5263);
}

double NNfunction_ns_chi02_cR::synapse0x3021700() {
   return (neuron0x300a720()*2.52543);
}

double NNfunction_ns_chi02_cR::synapse0x3021740() {
   return (neuron0x300b0f0()*0.332183);
}

double NNfunction_ns_chi02_cR::synapse0x3012580() {
   return (neuron0x3014960()*1.10966);
}

double NNfunction_ns_chi02_cR::synapse0x30125c0() {
   return (neuron0x3015330()*0.876325);
}

double NNfunction_ns_chi02_cR::synapse0x3012f50() {
   return (neuron0x3015d00()*0.158944);
}

double NNfunction_ns_chi02_cR::synapse0x3012f90() {
   return (neuron0x30166d0()*0.344311);
}

double NNfunction_ns_chi02_cR::synapse0x3013920() {
   return (neuron0x30170a0()*-0.25637);
}

double NNfunction_ns_chi02_cR::synapse0x3013960() {
   return (neuron0x3017a70()*0.452806);
}

double NNfunction_ns_chi02_cR::synapse0x3025e40() {
   return (neuron0x3018440()*-3.05314);
}

double NNfunction_ns_chi02_cR::synapse0x3025e80() {
   return (neuron0x3018e10()*-0.219974);
}

double NNfunction_ns_chi02_cR::synapse0x3026810() {
   return (neuron0x300eea0()*0.118351);
}

double NNfunction_ns_chi02_cR::synapse0x3026850() {
   return (neuron0x301b9f0()*1.97767);
}

double NNfunction_ns_chi02_cR::synapse0x30271e0() {
   return (neuron0x301c3c0()*-1.00211);
}

double NNfunction_ns_chi02_cR::synapse0x3027220() {
   return (neuron0x301cd90()*-2.60777);
}

double NNfunction_ns_chi02_cR::synapse0x3027bb0() {
   return (neuron0x301d760()*-1.45576);
}

double NNfunction_ns_chi02_cR::synapse0x3027bf0() {
   return (neuron0x301e130()*-0.156635);
}

double NNfunction_ns_chi02_cR::synapse0x3003aa0() {
   return (neuron0x301eb00()*0.243485);
}

double NNfunction_ns_chi02_cR::synapse0x3003ae0() {
   return (neuron0x301f4d0()*-1.59979);
}

double NNfunction_ns_chi02_cR::synapse0x3017350() {
   return (neuron0x301fea0()*-0.134209);
}

double NNfunction_ns_chi02_cR::synapse0x3017390() {
   return (neuron0x3020a80()*-0.019322);
}

double NNfunction_ns_chi02_cR::synapse0x30282d0() {
   return (neuron0x3021450()*2.80174);
}

double NNfunction_ns_chi02_cR::synapse0x3028310() {
   return (neuron0x30122d0()*-0.750505);
}

double NNfunction_ns_chi02_cR::synapse0x3028350() {
   return (neuron0x3012ca0()*0.134596);
}

double NNfunction_ns_chi02_cR::synapse0x3028390() {
   return (neuron0x3013670()*0.0732922);
}

double NNfunction_ns_chi02_cR::synapse0x302f240() {
   return (neuron0x3025cb0()*0.217362);
}

double NNfunction_ns_chi02_cR::synapse0x302f280() {
   return (neuron0x3026560()*0.491158);
}

double NNfunction_ns_chi02_cR::synapse0x302f2c0() {
   return (neuron0x3026f30()*-1.75764);
}

double NNfunction_ns_chi02_cR::synapse0x302f300() {
   return (neuron0x3027900()*1.07125);
}

double NNfunction_ns_chi02_cR::synapse0x302f680() {
   return (neuron0x3003880()*0.71732);
}

double NNfunction_ns_chi02_cR::synapse0x302f6c0() {
   return (neuron0x30041d0()*0.2083);
}

double NNfunction_ns_chi02_cR::synapse0x302f700() {
   return (neuron0x3004cb0()*1.22466);
}

double NNfunction_ns_chi02_cR::synapse0x302f740() {
   return (neuron0x3004750()*-0.527019);
}

double NNfunction_ns_chi02_cR::synapse0x302f780() {
   return (neuron0x3005a90()*1.08067);
}

double NNfunction_ns_chi02_cR::synapse0x302f7c0() {
   return (neuron0x3006460()*1.60566);
}

double NNfunction_ns_chi02_cR::synapse0x302f800() {
   return (neuron0x3007230()*-0.92265);
}

double NNfunction_ns_chi02_cR::synapse0x302f840() {
   return (neuron0x3007c00()*-0.0977136);
}

double NNfunction_ns_chi02_cR::synapse0x302f880() {
   return (neuron0x30085d0()*0.661706);
}

double NNfunction_ns_chi02_cR::synapse0x302f8c0() {
   return (neuron0x30090b0()*-0.470604);
}

double NNfunction_ns_chi02_cR::synapse0x302f900() {
   return (neuron0x3009a80()*0.566326);
}

double NNfunction_ns_chi02_cR::synapse0x302f940() {
   return (neuron0x3006b60()*-0.174994);
}

double NNfunction_ns_chi02_cR::synapse0x302f980() {
   return (neuron0x300b630()*0.14498);
}

double NNfunction_ns_chi02_cR::synapse0x302f9c0() {
   return (neuron0x300c000()*0.82751);
}

double NNfunction_ns_chi02_cR::synapse0x302fa00() {
   return (neuron0x300c9d0()*-0.0347516);
}

double NNfunction_ns_chi02_cR::synapse0x302fa40() {
   return (neuron0x300d3a0()*0.101938);
}

double NNfunction_ns_chi02_cR::synapse0x302f4d0() {
   return (neuron0x300f1b0()*0.351391);
}

double NNfunction_ns_chi02_cR::synapse0x302f510() {
   return (neuron0x300f490()*0.950851);
}

double NNfunction_ns_chi02_cR::synapse0x302fb90() {
   return (neuron0x300fe60()*1.24824);
}

double NNfunction_ns_chi02_cR::synapse0x302fbd0() {
   return (neuron0x3010830()*0.536858);
}

double NNfunction_ns_chi02_cR::synapse0x302fc10() {
   return (neuron0x3011200()*-0.413561);
}

double NNfunction_ns_chi02_cR::synapse0x302fc50() {
   return (neuron0x3011bd0()*0.178574);
}

double NNfunction_ns_chi02_cR::synapse0x302fc90() {
   return (neuron0x300a720()*1.43754);
}

double NNfunction_ns_chi02_cR::synapse0x302fcd0() {
   return (neuron0x300b0f0()*-0.098765);
}

double NNfunction_ns_chi02_cR::synapse0x302fd10() {
   return (neuron0x3014960()*-0.992254);
}

double NNfunction_ns_chi02_cR::synapse0x302fd50() {
   return (neuron0x3015330()*0.452137);
}

double NNfunction_ns_chi02_cR::synapse0x302fd90() {
   return (neuron0x3015d00()*0.108872);
}

double NNfunction_ns_chi02_cR::synapse0x302fdd0() {
   return (neuron0x30166d0()*0.705368);
}

double NNfunction_ns_chi02_cR::synapse0x302fe10() {
   return (neuron0x30170a0()*0.32452);
}

double NNfunction_ns_chi02_cR::synapse0x302fe50() {
   return (neuron0x3017a70()*-0.106211);
}

double NNfunction_ns_chi02_cR::synapse0x302fe90() {
   return (neuron0x3018440()*-0.375571);
}

double NNfunction_ns_chi02_cR::synapse0x302fed0() {
   return (neuron0x3018e10()*0.194039);
}

double NNfunction_ns_chi02_cR::synapse0x302fa80() {
   return (neuron0x300eea0()*0.558434);
}

double NNfunction_ns_chi02_cR::synapse0x302fac0() {
   return (neuron0x301b9f0()*1.22269);
}

double NNfunction_ns_chi02_cR::synapse0x302fb00() {
   return (neuron0x301c3c0()*0.487797);
}

double NNfunction_ns_chi02_cR::synapse0x302fb40() {
   return (neuron0x301cd90()*-0.0531478);
}

double NNfunction_ns_chi02_cR::synapse0x3030120() {
   return (neuron0x301d760()*-0.182525);
}

double NNfunction_ns_chi02_cR::synapse0x3030160() {
   return (neuron0x301e130()*0.0502882);
}

double NNfunction_ns_chi02_cR::synapse0x30301a0() {
   return (neuron0x301eb00()*0.508);
}

double NNfunction_ns_chi02_cR::synapse0x30301e0() {
   return (neuron0x301f4d0()*0.47705);
}

double NNfunction_ns_chi02_cR::synapse0x3030220() {
   return (neuron0x301fea0()*-0.0830955);
}

double NNfunction_ns_chi02_cR::synapse0x3030260() {
   return (neuron0x3020a80()*0.513074);
}

double NNfunction_ns_chi02_cR::synapse0x30302a0() {
   return (neuron0x3021450()*1.86825);
}

double NNfunction_ns_chi02_cR::synapse0x30302e0() {
   return (neuron0x30122d0()*-0.529708);
}

double NNfunction_ns_chi02_cR::synapse0x3030320() {
   return (neuron0x3012ca0()*0.000643168);
}

double NNfunction_ns_chi02_cR::synapse0x3030360() {
   return (neuron0x3013670()*0.482426);
}

double NNfunction_ns_chi02_cR::synapse0x30303a0() {
   return (neuron0x3025cb0()*1.70639);
}

double NNfunction_ns_chi02_cR::synapse0x30303e0() {
   return (neuron0x3026560()*1.26351);
}

double NNfunction_ns_chi02_cR::synapse0x3030420() {
   return (neuron0x3026f30()*0.631106);
}

double NNfunction_ns_chi02_cR::synapse0x3030460() {
   return (neuron0x3027900()*0.656131);
}

double NNfunction_ns_chi02_cR::synapse0x30307e0() {
   return (neuron0x3003880()*-0.0873037);
}

double NNfunction_ns_chi02_cR::synapse0x3030820() {
   return (neuron0x30041d0()*-3.59713);
}

double NNfunction_ns_chi02_cR::synapse0x3030860() {
   return (neuron0x3004cb0()*0.62449);
}

double NNfunction_ns_chi02_cR::synapse0x30308a0() {
   return (neuron0x3004750()*-0.146477);
}

double NNfunction_ns_chi02_cR::synapse0x30308e0() {
   return (neuron0x3005a90()*0.439635);
}

double NNfunction_ns_chi02_cR::synapse0x3030920() {
   return (neuron0x3006460()*-3.23083);
}

double NNfunction_ns_chi02_cR::synapse0x3030960() {
   return (neuron0x3007230()*-0.616277);
}

double NNfunction_ns_chi02_cR::synapse0x30309a0() {
   return (neuron0x3007c00()*0.625208);
}

double NNfunction_ns_chi02_cR::synapse0x30309e0() {
   return (neuron0x30085d0()*-0.764309);
}

double NNfunction_ns_chi02_cR::synapse0x3030a20() {
   return (neuron0x30090b0()*-1.02763);
}

double NNfunction_ns_chi02_cR::synapse0x3030a60() {
   return (neuron0x3009a80()*-0.0294775);
}

double NNfunction_ns_chi02_cR::synapse0x3030aa0() {
   return (neuron0x3006b60()*0.29788);
}

double NNfunction_ns_chi02_cR::synapse0x3030ae0() {
   return (neuron0x300b630()*2.01151);
}

double NNfunction_ns_chi02_cR::synapse0x3030b20() {
   return (neuron0x300c000()*-1.29565);
}

double NNfunction_ns_chi02_cR::synapse0x3030b60() {
   return (neuron0x300c9d0()*1.32293);
}

double NNfunction_ns_chi02_cR::synapse0x3030ba0() {
   return (neuron0x300d3a0()*-0.493233);
}

double NNfunction_ns_chi02_cR::synapse0x3030630() {
   return (neuron0x300f1b0()*-0.825561);
}

double NNfunction_ns_chi02_cR::synapse0x3030670() {
   return (neuron0x300f490()*-0.0786748);
}

double NNfunction_ns_chi02_cR::synapse0x3030cf0() {
   return (neuron0x300fe60()*-3.6004);
}

double NNfunction_ns_chi02_cR::synapse0x3030d30() {
   return (neuron0x3010830()*2.6884);
}

double NNfunction_ns_chi02_cR::synapse0x3030d70() {
   return (neuron0x3011200()*-1.63168);
}

double NNfunction_ns_chi02_cR::synapse0x3030db0() {
   return (neuron0x3011bd0()*-4.48477);
}

double NNfunction_ns_chi02_cR::synapse0x3030df0() {
   return (neuron0x300a720()*1.16273);
}

double NNfunction_ns_chi02_cR::synapse0x3030e30() {
   return (neuron0x300b0f0()*0.813419);
}

double NNfunction_ns_chi02_cR::synapse0x3030e70() {
   return (neuron0x3014960()*2.74669);
}

double NNfunction_ns_chi02_cR::synapse0x3030eb0() {
   return (neuron0x3015330()*-2.289);
}

double NNfunction_ns_chi02_cR::synapse0x3030ef0() {
   return (neuron0x3015d00()*0.307382);
}

double NNfunction_ns_chi02_cR::synapse0x3030f30() {
   return (neuron0x30166d0()*0.96663);
}

double NNfunction_ns_chi02_cR::synapse0x3030f70() {
   return (neuron0x30170a0()*-0.348862);
}

double NNfunction_ns_chi02_cR::synapse0x3030fb0() {
   return (neuron0x3017a70()*0.44767);
}

double NNfunction_ns_chi02_cR::synapse0x3030ff0() {
   return (neuron0x3018440()*-3.9005);
}

double NNfunction_ns_chi02_cR::synapse0x3031030() {
   return (neuron0x3018e10()*-0.391111);
}

double NNfunction_ns_chi02_cR::synapse0x3030be0() {
   return (neuron0x300eea0()*1.1901);
}

double NNfunction_ns_chi02_cR::synapse0x3030c20() {
   return (neuron0x301b9f0()*2.73995);
}

double NNfunction_ns_chi02_cR::synapse0x3030c60() {
   return (neuron0x301c3c0()*-2.17374);
}

double NNfunction_ns_chi02_cR::synapse0x3030ca0() {
   return (neuron0x301cd90()*3.81079);
}

double NNfunction_ns_chi02_cR::synapse0x3031280() {
   return (neuron0x301d760()*1.24185);
}

double NNfunction_ns_chi02_cR::synapse0x30312c0() {
   return (neuron0x301e130()*-0.764273);
}

double NNfunction_ns_chi02_cR::synapse0x3031300() {
   return (neuron0x301eb00()*0.810693);
}

double NNfunction_ns_chi02_cR::synapse0x3031340() {
   return (neuron0x301f4d0()*0.476042);
}

double NNfunction_ns_chi02_cR::synapse0x3031380() {
   return (neuron0x301fea0()*-0.0204287);
}

double NNfunction_ns_chi02_cR::synapse0x30313c0() {
   return (neuron0x3020a80()*-1.3451);
}

double NNfunction_ns_chi02_cR::synapse0x3031400() {
   return (neuron0x3021450()*1.09475);
}

double NNfunction_ns_chi02_cR::synapse0x3031440() {
   return (neuron0x30122d0()*-0.212708);
}

double NNfunction_ns_chi02_cR::synapse0x3031480() {
   return (neuron0x3012ca0()*0.641399);
}

double NNfunction_ns_chi02_cR::synapse0x30314c0() {
   return (neuron0x3013670()*0.37135);
}

double NNfunction_ns_chi02_cR::synapse0x3031500() {
   return (neuron0x3025cb0()*0.692318);
}

double NNfunction_ns_chi02_cR::synapse0x3031540() {
   return (neuron0x3026560()*0.449999);
}

double NNfunction_ns_chi02_cR::synapse0x3031580() {
   return (neuron0x3026f30()*-2.83868);
}

double NNfunction_ns_chi02_cR::synapse0x30315c0() {
   return (neuron0x3027900()*-0.644982);
}

double NNfunction_ns_chi02_cR::synapse0x3031940() {
   return (neuron0x3003880()*0.292472);
}

double NNfunction_ns_chi02_cR::synapse0x3031980() {
   return (neuron0x30041d0()*-1.87558);
}

double NNfunction_ns_chi02_cR::synapse0x30319c0() {
   return (neuron0x3004cb0()*0.182779);
}

double NNfunction_ns_chi02_cR::synapse0x3031a00() {
   return (neuron0x3004750()*-0.0640811);
}

double NNfunction_ns_chi02_cR::synapse0x3031a40() {
   return (neuron0x3005a90()*0.224391);
}

double NNfunction_ns_chi02_cR::synapse0x3031a80() {
   return (neuron0x3006460()*1.38093);
}

double NNfunction_ns_chi02_cR::synapse0x3031ac0() {
   return (neuron0x3007230()*-0.123437);
}

double NNfunction_ns_chi02_cR::synapse0x3031b00() {
   return (neuron0x3007c00()*0.0751004);
}

double NNfunction_ns_chi02_cR::synapse0x3031b40() {
   return (neuron0x30085d0()*-2.60828);
}

double NNfunction_ns_chi02_cR::synapse0x3031b80() {
   return (neuron0x30090b0()*-0.00306972);
}

double NNfunction_ns_chi02_cR::synapse0x3031bc0() {
   return (neuron0x3009a80()*0.0555772);
}

double NNfunction_ns_chi02_cR::synapse0x3031c00() {
   return (neuron0x3006b60()*0.00542605);
}

double NNfunction_ns_chi02_cR::synapse0x3031c40() {
   return (neuron0x300b630()*2.21777);
}

double NNfunction_ns_chi02_cR::synapse0x3031c80() {
   return (neuron0x300c000()*0.00255701);
}

double NNfunction_ns_chi02_cR::synapse0x3031cc0() {
   return (neuron0x300c9d0()*-0.679515);
}

double NNfunction_ns_chi02_cR::synapse0x3031d00() {
   return (neuron0x300d3a0()*0.0928163);
}

double NNfunction_ns_chi02_cR::synapse0x3031790() {
   return (neuron0x300f1b0()*0.0818019);
}

double NNfunction_ns_chi02_cR::synapse0x30317d0() {
   return (neuron0x300f490()*3.3765);
}

double NNfunction_ns_chi02_cR::synapse0x3031e50() {
   return (neuron0x300fe60()*1.00562);
}

double NNfunction_ns_chi02_cR::synapse0x3031e90() {
   return (neuron0x3010830()*2.15972);
}

double NNfunction_ns_chi02_cR::synapse0x3031ed0() {
   return (neuron0x3011200()*1.30756);
}

double NNfunction_ns_chi02_cR::synapse0x3031f10() {
   return (neuron0x3011bd0()*-5.96045);
}

double NNfunction_ns_chi02_cR::synapse0x3031f50() {
   return (neuron0x300a720()*-0.120368);
}

double NNfunction_ns_chi02_cR::synapse0x3031f90() {
   return (neuron0x300b0f0()*-0.0644558);
}

double NNfunction_ns_chi02_cR::synapse0x3031fd0() {
   return (neuron0x3014960()*0.509903);
}

double NNfunction_ns_chi02_cR::synapse0x3032010() {
   return (neuron0x3015330()*1.40378);
}

double NNfunction_ns_chi02_cR::synapse0x3032050() {
   return (neuron0x3015d00()*0.0616069);
}

double NNfunction_ns_chi02_cR::synapse0x3032090() {
   return (neuron0x30166d0()*0.0474322);
}

double NNfunction_ns_chi02_cR::synapse0x30320d0() {
   return (neuron0x30170a0()*-0.162035);
}

double NNfunction_ns_chi02_cR::synapse0x3032110() {
   return (neuron0x3017a70()*0.17111);
}

double NNfunction_ns_chi02_cR::synapse0x3032150() {
   return (neuron0x3018440()*-0.66397);
}

double NNfunction_ns_chi02_cR::synapse0x3032190() {
   return (neuron0x3018e10()*-0.138566);
}

double NNfunction_ns_chi02_cR::synapse0x3031d40() {
   return (neuron0x300eea0()*0.134488);
}

double NNfunction_ns_chi02_cR::synapse0x3031d80() {
   return (neuron0x301b9f0()*3.00513);
}

double NNfunction_ns_chi02_cR::synapse0x3031dc0() {
   return (neuron0x301c3c0()*-0.585495);
}

double NNfunction_ns_chi02_cR::synapse0x3031e00() {
   return (neuron0x301cd90()*-0.182774);
}

double NNfunction_ns_chi02_cR::synapse0x30323e0() {
   return (neuron0x301d760()*-0.760334);
}

double NNfunction_ns_chi02_cR::synapse0x3032420() {
   return (neuron0x301e130()*0.0733097);
}

double NNfunction_ns_chi02_cR::synapse0x3032460() {
   return (neuron0x301eb00()*0.214663);
}

double NNfunction_ns_chi02_cR::synapse0x30324a0() {
   return (neuron0x301f4d0()*-0.520928);
}

double NNfunction_ns_chi02_cR::synapse0x30324e0() {
   return (neuron0x301fea0()*-0.604552);
}

double NNfunction_ns_chi02_cR::synapse0x3032520() {
   return (neuron0x3020a80()*-0.225299);
}

double NNfunction_ns_chi02_cR::synapse0x3032560() {
   return (neuron0x3021450()*2.58424);
}

double NNfunction_ns_chi02_cR::synapse0x30325a0() {
   return (neuron0x30122d0()*-0.240304);
}

double NNfunction_ns_chi02_cR::synapse0x30325e0() {
   return (neuron0x3012ca0()*0.0347137);
}

double NNfunction_ns_chi02_cR::synapse0x3032620() {
   return (neuron0x3013670()*-0.0309527);
}

double NNfunction_ns_chi02_cR::synapse0x3032660() {
   return (neuron0x3025cb0()*0.0545919);
}

double NNfunction_ns_chi02_cR::synapse0x30326a0() {
   return (neuron0x3026560()*0.0916615);
}

double NNfunction_ns_chi02_cR::synapse0x30326e0() {
   return (neuron0x3026f30()*-0.044492);
}

double NNfunction_ns_chi02_cR::synapse0x3032720() {
   return (neuron0x3027900()*0.627264);
}

double NNfunction_ns_chi02_cR::synapse0x3032980() {
   return (neuron0x302eb00()*8.49973);
}

double NNfunction_ns_chi02_cR::synapse0x30329c0() {
   return (neuron0x302eea0()*-6.01362);
}

double NNfunction_ns_chi02_cR::synapse0x3032a00() {
   return (neuron0x302f340()*0.385668);
}

double NNfunction_ns_chi02_cR::synapse0x3032a40() {
   return (neuron0x30304a0()*-5.29701);
}

double NNfunction_ns_chi02_cR::synapse0x3032a80() {
   return (neuron0x3031600()*2.01231);
}

