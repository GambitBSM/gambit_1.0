#include "NNfunction_ns_chi03_sL.h"
#include <cmath>

double NNfunction_ns_chi03_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8318)/15.2422;
   input1 = (in1 - 7.01368)/1096.66;
   input2 = (in2 - 460.738)/512.588;
   input3 = (in3 - 28.1762)/776.02;
   input4 = (in4 - 924.638)/894.773;
   input5 = (in5 - 812.531)/906.209;
   input6 = (in6 - 810.214)/901.448;
   input7 = (in7 - 814.29)/882.207;
   input8 = (in8 - 836.1)/938.127;
   input9 = (in9 - 820.907)/921.039;
   input10 = (in10 - 864.073)/921.975;
   input11 = (in11 - 682.504)/818.269;
   input12 = (in12 - 239.356)/192.244;
   input13 = (in13 - 460.929)/466.232;
   input14 = (in14 - 668.325)/751.634;
   input15 = (in15 - 673.142)/760.274;
   input16 = (in16 - 487.558)/518.942;
   input17 = (in17 - 709.678)/847.843;
   input18 = (in18 - 713.496)/854.568;
   input19 = (in19 - 711.817)/810.579;
   input20 = (in20 - -30.891)/456.85;
   input21 = (in21 - -43.3516)/1071.68;
   input22 = (in22 - 13.5732)/1109.03;
   input23 = (in23 - -41.9432)/205.811;
   switch(index) {
     case 0:
         return neuron0x36d8760();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_sL::Value(int index, double* input) {
   input0 = (input[0] - 23.8318)/15.2422;
   input1 = (input[1] - 7.01368)/1096.66;
   input2 = (input[2] - 460.738)/512.588;
   input3 = (input[3] - 28.1762)/776.02;
   input4 = (input[4] - 924.638)/894.773;
   input5 = (input[5] - 812.531)/906.209;
   input6 = (input[6] - 810.214)/901.448;
   input7 = (input[7] - 814.29)/882.207;
   input8 = (input[8] - 836.1)/938.127;
   input9 = (input[9] - 820.907)/921.039;
   input10 = (input[10] - 864.073)/921.975;
   input11 = (input[11] - 682.504)/818.269;
   input12 = (input[12] - 239.356)/192.244;
   input13 = (input[13] - 460.929)/466.232;
   input14 = (input[14] - 668.325)/751.634;
   input15 = (input[15] - 673.142)/760.274;
   input16 = (input[16] - 487.558)/518.942;
   input17 = (input[17] - 709.678)/847.843;
   input18 = (input[18] - 713.496)/854.568;
   input19 = (input[19] - 711.817)/810.579;
   input20 = (input[20] - -30.891)/456.85;
   input21 = (input[21] - -43.3516)/1071.68;
   input22 = (input[22] - 13.5732)/1109.03;
   input23 = (input[23] - -41.9432)/205.811;
   switch(index) {
     case 0:
         return neuron0x36d8760();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi03_sL::neuron0x36a4850() {
   return input0;
}

double NNfunction_ns_chi03_sL::neuron0x36a4b90() {
   return input1;
}

double NNfunction_ns_chi03_sL::neuron0x36a4ed0() {
   return input2;
}

double NNfunction_ns_chi03_sL::neuron0x36a5210() {
   return input3;
}

double NNfunction_ns_chi03_sL::neuron0x36a5550() {
   return input4;
}

double NNfunction_ns_chi03_sL::neuron0x36a5890() {
   return input5;
}

double NNfunction_ns_chi03_sL::neuron0x36a5bd0() {
   return input6;
}

double NNfunction_ns_chi03_sL::neuron0x36a5f10() {
   return input7;
}

double NNfunction_ns_chi03_sL::neuron0x36a6250() {
   return input8;
}

double NNfunction_ns_chi03_sL::neuron0x36a6590() {
   return input9;
}

double NNfunction_ns_chi03_sL::neuron0x36a68d0() {
   return input10;
}

double NNfunction_ns_chi03_sL::neuron0x36a6c10() {
   return input11;
}

double NNfunction_ns_chi03_sL::neuron0x36a6f50() {
   return input12;
}

double NNfunction_ns_chi03_sL::neuron0x36a7290() {
   return input13;
}

double NNfunction_ns_chi03_sL::neuron0x36a75d0() {
   return input14;
}

double NNfunction_ns_chi03_sL::neuron0x36a7910() {
   return input15;
}

double NNfunction_ns_chi03_sL::neuron0x36a7c50() {
   return input16;
}

double NNfunction_ns_chi03_sL::neuron0x36a81b0() {
   return input17;
}

double NNfunction_ns_chi03_sL::neuron0x36a83d0() {
   return input18;
}

double NNfunction_ns_chi03_sL::neuron0x36a8710() {
   return input19;
}

double NNfunction_ns_chi03_sL::neuron0x36a8a50() {
   return input20;
}

double NNfunction_ns_chi03_sL::neuron0x36a8d90() {
   return input21;
}

double NNfunction_ns_chi03_sL::neuron0x36a90d0() {
   return input22;
}

double NNfunction_ns_chi03_sL::neuron0x36a9410() {
   return input23;
}

double NNfunction_ns_chi03_sL::input0x36a9880() {
   double input = -0.165555;
   input += synapse0x36a4710();
   input += synapse0x36a4750();
   input += synapse0x36a9b30();
   input += synapse0x36a9b70();
   input += synapse0x36a9bb0();
   input += synapse0x36a9bf0();
   input += synapse0x36a9c30();
   input += synapse0x36a9c70();
   input += synapse0x36a9cb0();
   input += synapse0x36a9cf0();
   input += synapse0x36a9d30();
   input += synapse0x36a9d70();
   input += synapse0x36a9db0();
   input += synapse0x36a9df0();
   input += synapse0x36a9e30();
   input += synapse0x36a9e70();
   input += synapse0x36a4680();
   input += synapse0x36a46c0();
   input += synapse0x345f9f0();
   input += synapse0x345fa30();
   input += synapse0x36aa0d0();
   input += synapse0x36aa110();
   input += synapse0x36aa150();
   input += synapse0x36aa190();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36a9880() {
   double input = input0x36a9880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36aa1d0() {
   double input = -0.512916;
   input += synapse0x36aa510();
   input += synapse0x36aa550();
   input += synapse0x36aa590();
   input += synapse0x36aa5d0();
   input += synapse0x36aa610();
   input += synapse0x36aa650();
   input += synapse0x36aa690();
   input += synapse0x36aa6d0();
   input += synapse0x36aa710();
   input += synapse0x36a9fc0();
   input += synapse0x36aa000();
   input += synapse0x36aa040();
   input += synapse0x36aa080();
   input += synapse0x36aa960();
   input += synapse0x36aa9a0();
   input += synapse0x36aa9e0();
   input += synapse0x36aa360();
   input += synapse0x36aa3a0();
   input += synapse0x36aab30();
   input += synapse0x36aab70();
   input += synapse0x36aabb0();
   input += synapse0x36aabf0();
   input += synapse0x36aac30();
   input += synapse0x36aac70();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36aa1d0() {
   double input = input0x36aa1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36aacb0() {
   double input = 1.25235;
   input += synapse0x36aaff0();
   input += synapse0x36ab030();
   input += synapse0x36ab070();
   input += synapse0x36ab0b0();
   input += synapse0x36ab0f0();
   input += synapse0x36ab130();
   input += synapse0x36ab170();
   input += synapse0x36ab1b0();
   input += synapse0x36ab1f0();
   input += synapse0x36ab230();
   input += synapse0x36ab270();
   input += synapse0x36ab2b0();
   input += synapse0x36ab2f0();
   input += synapse0x36ab330();
   input += synapse0x36ab370();
   input += synapse0x36ab3b0();
   input += synapse0x36aae40();
   input += synapse0x36aae80();
   input += synapse0x34600e0();
   input += synapse0x346d9b0();
   input += synapse0x346d9f0();
   input += synapse0x36938e0();
   input += synapse0x3693920();
   input += synapse0x3693960();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36aacb0() {
   double input = input0x36aacb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36aa750() {
   double input = -3.55679;
   input += synapse0x346e230();
   input += synapse0x36aa8e0();
   input += synapse0x36aa920();
   input += synapse0x36ab500();
   input += synapse0x36ab540();
   input += synapse0x36ab580();
   input += synapse0x36ab5c0();
   input += synapse0x36ab600();
   input += synapse0x36ab640();
   input += synapse0x36ab680();
   input += synapse0x36ab6c0();
   input += synapse0x36ab700();
   input += synapse0x36ab740();
   input += synapse0x36ab780();
   input += synapse0x36ab7c0();
   input += synapse0x36ab800();
   input += synapse0x36a4790();
   input += synapse0x36a47d0();
   input += synapse0x36a4810();
   input += synapse0x36ab950();
   input += synapse0x36ab990();
   input += synapse0x36ab9d0();
   input += synapse0x36aba10();
   input += synapse0x36aba50();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36aa750() {
   double input = input0x36aa750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36aba90() {
   double input = -0.366269;
   input += synapse0x36abdd0();
   input += synapse0x36abe10();
   input += synapse0x36abe50();
   input += synapse0x36abe90();
   input += synapse0x36abed0();
   input += synapse0x36abf10();
   input += synapse0x36abf50();
   input += synapse0x36abf90();
   input += synapse0x36abfd0();
   input += synapse0x36ac010();
   input += synapse0x36ac050();
   input += synapse0x36ac090();
   input += synapse0x36ac0d0();
   input += synapse0x36ac110();
   input += synapse0x36ac150();
   input += synapse0x36ac190();
   input += synapse0x36abc20();
   input += synapse0x36abc60();
   input += synapse0x36ac2e0();
   input += synapse0x36ac320();
   input += synapse0x36ac360();
   input += synapse0x36ac3a0();
   input += synapse0x36ac3e0();
   input += synapse0x36ac420();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36aba90() {
   double input = input0x36aba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36ac460() {
   double input = 1.03733;
   input += synapse0x36ac7a0();
   input += synapse0x36ac7e0();
   input += synapse0x36ac820();
   input += synapse0x36ac860();
   input += synapse0x36ac8a0();
   input += synapse0x36ac8e0();
   input += synapse0x36ac920();
   input += synapse0x36ac960();
   input += synapse0x36ac9a0();
   input += synapse0x346dd00();
   input += synapse0x346dd40();
   input += synapse0x346dd80();
   input += synapse0x346ddc0();
   input += synapse0x346de00();
   input += synapse0x346de40();
   input += synapse0x346de80();
   input += synapse0x36ac5f0();
   input += synapse0x36ac630();
   input += synapse0x346dfd0();
   input += synapse0x346e010();
   input += synapse0x346e050();
   input += synapse0x346e090();
   input += synapse0x346e0d0();
   input += synapse0x36ad1f0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36ac460() {
   double input = input0x36ac460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36ad230() {
   double input = 0.280881;
   input += synapse0x36ad570();
   input += synapse0x36ad5b0();
   input += synapse0x36ad5f0();
   input += synapse0x36ad630();
   input += synapse0x36ad670();
   input += synapse0x36ad6b0();
   input += synapse0x36ad6f0();
   input += synapse0x36ad730();
   input += synapse0x36ad770();
   input += synapse0x36ad7b0();
   input += synapse0x36ad7f0();
   input += synapse0x36ad830();
   input += synapse0x36ad870();
   input += synapse0x36ad8b0();
   input += synapse0x36ad8f0();
   input += synapse0x36ad930();
   input += synapse0x36ad3c0();
   input += synapse0x36ad400();
   input += synapse0x36ada80();
   input += synapse0x36adac0();
   input += synapse0x36adb00();
   input += synapse0x36adb40();
   input += synapse0x36adb80();
   input += synapse0x36adbc0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36ad230() {
   double input = input0x36ad230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36adc00() {
   double input = 1.53201;
   input += synapse0x36adf40();
   input += synapse0x36adf80();
   input += synapse0x36adfc0();
   input += synapse0x36ae000();
   input += synapse0x36ae040();
   input += synapse0x36ae080();
   input += synapse0x36ae0c0();
   input += synapse0x36ae100();
   input += synapse0x36ae140();
   input += synapse0x36ae180();
   input += synapse0x36ae1c0();
   input += synapse0x36ae200();
   input += synapse0x36ae240();
   input += synapse0x36ae280();
   input += synapse0x36ae2c0();
   input += synapse0x36ae300();
   input += synapse0x36add90();
   input += synapse0x36addd0();
   input += synapse0x36ae450();
   input += synapse0x36ae490();
   input += synapse0x36ae4d0();
   input += synapse0x36ae510();
   input += synapse0x36ae550();
   input += synapse0x36ae590();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36adc00() {
   double input = input0x36adc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36ae5d0() {
   double input = 1.10439;
   input += synapse0x36a80a0();
   input += synapse0x36a80e0();
   input += synapse0x36a8120();
   input += synapse0x36a8160();
   input += synapse0x36aeb20();
   input += synapse0x36aeb60();
   input += synapse0x36aeba0();
   input += synapse0x36aebe0();
   input += synapse0x36aec20();
   input += synapse0x36aec60();
   input += synapse0x36aeca0();
   input += synapse0x36aece0();
   input += synapse0x36aed20();
   input += synapse0x36aed60();
   input += synapse0x36aeda0();
   input += synapse0x36aede0();
   input += synapse0x36ae760();
   input += synapse0x36ae7a0();
   input += synapse0x36aef30();
   input += synapse0x36aef70();
   input += synapse0x36aefb0();
   input += synapse0x36aeff0();
   input += synapse0x36af030();
   input += synapse0x36af070();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36ae5d0() {
   double input = input0x36ae5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36af0b0() {
   double input = 0.372301;
   input += synapse0x36af3f0();
   input += synapse0x36af430();
   input += synapse0x36af470();
   input += synapse0x36af4b0();
   input += synapse0x36af4f0();
   input += synapse0x36af530();
   input += synapse0x36af570();
   input += synapse0x36af5b0();
   input += synapse0x36af5f0();
   input += synapse0x36af630();
   input += synapse0x36af670();
   input += synapse0x36af6b0();
   input += synapse0x36af6f0();
   input += synapse0x36af730();
   input += synapse0x36af770();
   input += synapse0x36af7b0();
   input += synapse0x36af240();
   input += synapse0x36af280();
   input += synapse0x36af900();
   input += synapse0x36af940();
   input += synapse0x36af980();
   input += synapse0x36af9c0();
   input += synapse0x36afa00();
   input += synapse0x36afa40();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36af0b0() {
   double input = input0x36af0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36afa80() {
   double input = -0.0809079;
   input += synapse0x36afdc0();
   input += synapse0x36afe00();
   input += synapse0x36afe40();
   input += synapse0x36afe80();
   input += synapse0x36afec0();
   input += synapse0x36aff00();
   input += synapse0x36aff40();
   input += synapse0x36aff80();
   input += synapse0x36affc0();
   input += synapse0x36b0000();
   input += synapse0x36b0040();
   input += synapse0x36b0080();
   input += synapse0x36b00c0();
   input += synapse0x36b0100();
   input += synapse0x36b0140();
   input += synapse0x36b0180();
   input += synapse0x36afc10();
   input += synapse0x36afc50();
   input += synapse0x36ac9e0();
   input += synapse0x36aca20();
   input += synapse0x36aca60();
   input += synapse0x36acaa0();
   input += synapse0x36acae0();
   input += synapse0x36acb20();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36afa80() {
   double input = input0x36afa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36acb60() {
   double input = 2.83381;
   input += synapse0x36acea0();
   input += synapse0x36acee0();
   input += synapse0x36acf20();
   input += synapse0x36acf60();
   input += synapse0x36acfa0();
   input += synapse0x36acfe0();
   input += synapse0x36ad020();
   input += synapse0x36ad060();
   input += synapse0x36ad0a0();
   input += synapse0x36ad0e0();
   input += synapse0x36ad120();
   input += synapse0x36ad160();
   input += synapse0x36ad1a0();
   input += synapse0x36b12e0();
   input += synapse0x36b1320();
   input += synapse0x36b1360();
   input += synapse0x36accf0();
   input += synapse0x36acd30();
   input += synapse0x36b14b0();
   input += synapse0x36b14f0();
   input += synapse0x36b1530();
   input += synapse0x36b1570();
   input += synapse0x36b15b0();
   input += synapse0x36b15f0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36acb60() {
   double input = input0x36acb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b1630() {
   double input = -0.49346;
   input += synapse0x36b1970();
   input += synapse0x36b19b0();
   input += synapse0x36b19f0();
   input += synapse0x36b1a30();
   input += synapse0x36b1a70();
   input += synapse0x36b1ab0();
   input += synapse0x36b1af0();
   input += synapse0x36b1b30();
   input += synapse0x36b1b70();
   input += synapse0x36b1bb0();
   input += synapse0x36b1bf0();
   input += synapse0x36b1c30();
   input += synapse0x36b1c70();
   input += synapse0x36b1cb0();
   input += synapse0x36b1cf0();
   input += synapse0x36b1d30();
   input += synapse0x36b17c0();
   input += synapse0x36b1800();
   input += synapse0x36b1e80();
   input += synapse0x36b1ec0();
   input += synapse0x36b1f00();
   input += synapse0x36b1f40();
   input += synapse0x36b1f80();
   input += synapse0x36b1fc0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b1630() {
   double input = input0x36b1630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b2000() {
   double input = -5.45147;
   input += synapse0x36b2340();
   input += synapse0x36b2380();
   input += synapse0x36b23c0();
   input += synapse0x36b2400();
   input += synapse0x36b2440();
   input += synapse0x36b2480();
   input += synapse0x36b24c0();
   input += synapse0x36b2500();
   input += synapse0x36b2540();
   input += synapse0x36b2580();
   input += synapse0x36b25c0();
   input += synapse0x36b2600();
   input += synapse0x36b2640();
   input += synapse0x36b2680();
   input += synapse0x36b26c0();
   input += synapse0x36b2700();
   input += synapse0x36b2190();
   input += synapse0x36b21d0();
   input += synapse0x36b2850();
   input += synapse0x36b2890();
   input += synapse0x36b28d0();
   input += synapse0x36b2910();
   input += synapse0x36b2950();
   input += synapse0x36b2990();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b2000() {
   double input = input0x36b2000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b29d0() {
   double input = 0.274444;
   input += synapse0x36b2d10();
   input += synapse0x36b2d50();
   input += synapse0x36b2d90();
   input += synapse0x36b2dd0();
   input += synapse0x36b2e10();
   input += synapse0x36b2e50();
   input += synapse0x36b2e90();
   input += synapse0x36b2ed0();
   input += synapse0x36b2f10();
   input += synapse0x36b2f50();
   input += synapse0x36b2f90();
   input += synapse0x36b2fd0();
   input += synapse0x36b3010();
   input += synapse0x36b3050();
   input += synapse0x36b3090();
   input += synapse0x36b30d0();
   input += synapse0x36b2b60();
   input += synapse0x36b2ba0();
   input += synapse0x36b3220();
   input += synapse0x36b3260();
   input += synapse0x36b32a0();
   input += synapse0x36b32e0();
   input += synapse0x36b3320();
   input += synapse0x36b3360();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b29d0() {
   double input = input0x36b29d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b33a0() {
   double input = -0.0923113;
   input += synapse0x36b36e0();
   input += synapse0x36a4a70();
   input += synapse0x36a4ab0();
   input += synapse0x36a4db0();
   input += synapse0x36a4df0();
   input += synapse0x36a50f0();
   input += synapse0x36a5130();
   input += synapse0x36a5430();
   input += synapse0x36a5470();
   input += synapse0x36a5770();
   input += synapse0x36a57b0();
   input += synapse0x36a5ab0();
   input += synapse0x36a5af0();
   input += synapse0x36a5df0();
   input += synapse0x36a5e30();
   input += synapse0x36a6130();
   input += synapse0x36a6170();
   input += synapse0x36a6470();
   input += synapse0x36a64b0();
   input += synapse0x36a67b0();
   input += synapse0x36a67f0();
   input += synapse0x36a6af0();
   input += synapse0x36a6b30();
   input += synapse0x36a6e30();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b33a0() {
   double input = input0x36b33a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b51b0() {
   double input = 0.0723749;
   input += synapse0x36a6e70();
   input += synapse0x36a7b30();
   input += synapse0x36a7b70();
   input += synapse0x36b3530();
   input += synapse0x36b3570();
   input += synapse0x36a7e70();
   input += synapse0x36a7eb0();
   input += synapse0x345f8d0();
   input += synapse0x345f910();
   input += synapse0x36a85f0();
   input += synapse0x36a8630();
   input += synapse0x36a8930();
   input += synapse0x36a8970();
   input += synapse0x36a8c70();
   input += synapse0x36a8cb0();
   input += synapse0x36a8fb0();
   input += synapse0x36a8ff0();
   input += synapse0x36a92f0();
   input += synapse0x36a9330();
   input += synapse0x36a9630();
   input += synapse0x36a9670();
   input += synapse0x36a7170();
   input += synapse0x36a71b0();
   input += synapse0x36b5450();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b51b0() {
   double input = input0x36b51b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b5490() {
   double input = 7.02084;
   input += synapse0x36b57d0();
   input += synapse0x36b5810();
   input += synapse0x36b5850();
   input += synapse0x36b5890();
   input += synapse0x36b58d0();
   input += synapse0x36b5910();
   input += synapse0x36b5950();
   input += synapse0x36b5990();
   input += synapse0x36b59d0();
   input += synapse0x36b5a10();
   input += synapse0x36b5a50();
   input += synapse0x36b5a90();
   input += synapse0x36b5ad0();
   input += synapse0x36b5b10();
   input += synapse0x36b5b50();
   input += synapse0x36b5b90();
   input += synapse0x36b5620();
   input += synapse0x36b5660();
   input += synapse0x36b5ce0();
   input += synapse0x36b5d20();
   input += synapse0x36b5d60();
   input += synapse0x36b5da0();
   input += synapse0x36b5de0();
   input += synapse0x36b5e20();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b5490() {
   double input = input0x36b5490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b5e60() {
   double input = -0.210408;
   input += synapse0x36b61a0();
   input += synapse0x36b61e0();
   input += synapse0x36b6220();
   input += synapse0x36b6260();
   input += synapse0x36b62a0();
   input += synapse0x36b62e0();
   input += synapse0x36b6320();
   input += synapse0x36b6360();
   input += synapse0x36b63a0();
   input += synapse0x36b63e0();
   input += synapse0x36b6420();
   input += synapse0x36b6460();
   input += synapse0x36b64a0();
   input += synapse0x36b64e0();
   input += synapse0x36b6520();
   input += synapse0x36b6560();
   input += synapse0x36b5ff0();
   input += synapse0x36b6030();
   input += synapse0x36b66b0();
   input += synapse0x36b66f0();
   input += synapse0x36b6730();
   input += synapse0x36b6770();
   input += synapse0x36b67b0();
   input += synapse0x36b67f0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b5e60() {
   double input = input0x36b5e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b6830() {
   double input = -1.36991;
   input += synapse0x36b6b70();
   input += synapse0x36b6bb0();
   input += synapse0x36b6bf0();
   input += synapse0x36b6c30();
   input += synapse0x36b6c70();
   input += synapse0x36b6cb0();
   input += synapse0x36b6cf0();
   input += synapse0x36b6d30();
   input += synapse0x36b6d70();
   input += synapse0x36b6db0();
   input += synapse0x36b6df0();
   input += synapse0x36b6e30();
   input += synapse0x36b6e70();
   input += synapse0x36b6eb0();
   input += synapse0x36b6ef0();
   input += synapse0x36b6f30();
   input += synapse0x36b69c0();
   input += synapse0x36b6a00();
   input += synapse0x36b7080();
   input += synapse0x36b70c0();
   input += synapse0x36b7100();
   input += synapse0x36b7140();
   input += synapse0x36b7180();
   input += synapse0x36b71c0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b6830() {
   double input = input0x36b6830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b7200() {
   double input = 5.36912;
   input += synapse0x36b7540();
   input += synapse0x36b7580();
   input += synapse0x36b75c0();
   input += synapse0x36b7600();
   input += synapse0x36b7640();
   input += synapse0x36b7680();
   input += synapse0x36b76c0();
   input += synapse0x36b7700();
   input += synapse0x36b7740();
   input += synapse0x36b7780();
   input += synapse0x36b77c0();
   input += synapse0x36b7800();
   input += synapse0x36b7840();
   input += synapse0x36b7880();
   input += synapse0x36b78c0();
   input += synapse0x36b7900();
   input += synapse0x36b7390();
   input += synapse0x36b73d0();
   input += synapse0x36b7a50();
   input += synapse0x36b7a90();
   input += synapse0x36b7ad0();
   input += synapse0x36b7b10();
   input += synapse0x36b7b50();
   input += synapse0x36b7b90();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b7200() {
   double input = input0x36b7200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b7bd0() {
   double input = 0.892351;
   input += synapse0x36b7f10();
   input += synapse0x36b7f50();
   input += synapse0x36b7f90();
   input += synapse0x36b7fd0();
   input += synapse0x36b8010();
   input += synapse0x36b8050();
   input += synapse0x36b8090();
   input += synapse0x36b80d0();
   input += synapse0x36b8110();
   input += synapse0x36b02d0();
   input += synapse0x36b0310();
   input += synapse0x36b0350();
   input += synapse0x36b0390();
   input += synapse0x36b03d0();
   input += synapse0x36b0410();
   input += synapse0x36b0450();
   input += synapse0x36b7d60();
   input += synapse0x36b7da0();
   input += synapse0x36b05a0();
   input += synapse0x36b05e0();
   input += synapse0x36b0620();
   input += synapse0x36b0660();
   input += synapse0x36b06a0();
   input += synapse0x36b06e0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b7bd0() {
   double input = input0x36b7bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b0720() {
   double input = -0.947737;
   input += synapse0x36b0a60();
   input += synapse0x36b0aa0();
   input += synapse0x36b0ae0();
   input += synapse0x36b0b20();
   input += synapse0x36b0b60();
   input += synapse0x36b0ba0();
   input += synapse0x36b0be0();
   input += synapse0x36b0c20();
   input += synapse0x36b0c60();
   input += synapse0x36b0ca0();
   input += synapse0x36b0ce0();
   input += synapse0x36b0d20();
   input += synapse0x36b0d60();
   input += synapse0x36b0da0();
   input += synapse0x36b0de0();
   input += synapse0x36b0e20();
   input += synapse0x36b08b0();
   input += synapse0x36b08f0();
   input += synapse0x36b0f70();
   input += synapse0x36b0fb0();
   input += synapse0x36b0ff0();
   input += synapse0x36b1030();
   input += synapse0x36b1070();
   input += synapse0x36b10b0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b0720() {
   double input = input0x36b0720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b10f0() {
   double input = -0.826051;
   input += synapse0x36b1280();
   input += synapse0x36ba310();
   input += synapse0x36ba350();
   input += synapse0x36ba390();
   input += synapse0x36ba3d0();
   input += synapse0x36ba410();
   input += synapse0x36ba450();
   input += synapse0x36ba490();
   input += synapse0x36ba4d0();
   input += synapse0x36ba510();
   input += synapse0x36ba550();
   input += synapse0x36ba590();
   input += synapse0x36ba5d0();
   input += synapse0x36ba610();
   input += synapse0x36ba650();
   input += synapse0x36ba690();
   input += synapse0x36ba160();
   input += synapse0x36ba1a0();
   input += synapse0x36ba7e0();
   input += synapse0x36ba820();
   input += synapse0x36ba860();
   input += synapse0x36ba8a0();
   input += synapse0x36ba8e0();
   input += synapse0x36ba920();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b10f0() {
   double input = input0x36b10f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36ba960() {
   double input = -1.18578;
   input += synapse0x36baca0();
   input += synapse0x36bace0();
   input += synapse0x36bad20();
   input += synapse0x36bad60();
   input += synapse0x36bada0();
   input += synapse0x36bade0();
   input += synapse0x36bae20();
   input += synapse0x36bae60();
   input += synapse0x36baea0();
   input += synapse0x36baee0();
   input += synapse0x36baf20();
   input += synapse0x36baf60();
   input += synapse0x36bafa0();
   input += synapse0x36bafe0();
   input += synapse0x36bb020();
   input += synapse0x36bb060();
   input += synapse0x36baaf0();
   input += synapse0x36bab30();
   input += synapse0x36bb1b0();
   input += synapse0x36bb1f0();
   input += synapse0x36bb230();
   input += synapse0x36bb270();
   input += synapse0x36bb2b0();
   input += synapse0x36bb2f0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36ba960() {
   double input = input0x36ba960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36bb330() {
   double input = 0.381067;
   input += synapse0x36bb670();
   input += synapse0x36bb6b0();
   input += synapse0x36bb6f0();
   input += synapse0x36bb730();
   input += synapse0x36bb770();
   input += synapse0x36bb7b0();
   input += synapse0x36bb7f0();
   input += synapse0x36bb830();
   input += synapse0x36bb870();
   input += synapse0x36bb8b0();
   input += synapse0x36bb8f0();
   input += synapse0x36bb930();
   input += synapse0x36bb970();
   input += synapse0x36bb9b0();
   input += synapse0x36bb9f0();
   input += synapse0x36bba30();
   input += synapse0x36bb4c0();
   input += synapse0x36bb500();
   input += synapse0x36bbb80();
   input += synapse0x36bbbc0();
   input += synapse0x36bbc00();
   input += synapse0x36bbc40();
   input += synapse0x36bbc80();
   input += synapse0x36bbcc0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36bb330() {
   double input = input0x36bb330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36bbd00() {
   double input = -3.31493;
   input += synapse0x36bc040();
   input += synapse0x36bc080();
   input += synapse0x36bc0c0();
   input += synapse0x36bc100();
   input += synapse0x36bc140();
   input += synapse0x36bc180();
   input += synapse0x36bc1c0();
   input += synapse0x36bc200();
   input += synapse0x36bc240();
   input += synapse0x36bc280();
   input += synapse0x36bc2c0();
   input += synapse0x36bc300();
   input += synapse0x36bc340();
   input += synapse0x36bc380();
   input += synapse0x36bc3c0();
   input += synapse0x36bc400();
   input += synapse0x36bbe90();
   input += synapse0x36bbed0();
   input += synapse0x36bc550();
   input += synapse0x36bc590();
   input += synapse0x36bc5d0();
   input += synapse0x36bc610();
   input += synapse0x36bc650();
   input += synapse0x36bc690();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36bbd00() {
   double input = input0x36bbd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36bc6d0() {
   double input = 0.559951;
   input += synapse0x36bca10();
   input += synapse0x36bca50();
   input += synapse0x36bca90();
   input += synapse0x36bcad0();
   input += synapse0x36bcb10();
   input += synapse0x36bcb50();
   input += synapse0x36bcb90();
   input += synapse0x36bcbd0();
   input += synapse0x36bcc10();
   input += synapse0x36bcc50();
   input += synapse0x36bcc90();
   input += synapse0x36bccd0();
   input += synapse0x36bcd10();
   input += synapse0x36bcd50();
   input += synapse0x36bcd90();
   input += synapse0x36bcdd0();
   input += synapse0x36bc860();
   input += synapse0x36bc8a0();
   input += synapse0x36bcf20();
   input += synapse0x36bcf60();
   input += synapse0x36bcfa0();
   input += synapse0x36bcfe0();
   input += synapse0x36bd020();
   input += synapse0x36bd060();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36bc6d0() {
   double input = input0x36bc6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36bd0a0() {
   double input = 0.785192;
   input += synapse0x36bd3e0();
   input += synapse0x36bd420();
   input += synapse0x36bd460();
   input += synapse0x36bd4a0();
   input += synapse0x36bd4e0();
   input += synapse0x36bd520();
   input += synapse0x36bd560();
   input += synapse0x36bd5a0();
   input += synapse0x36bd5e0();
   input += synapse0x36bd620();
   input += synapse0x36bd660();
   input += synapse0x36bd6a0();
   input += synapse0x36bd6e0();
   input += synapse0x36bd720();
   input += synapse0x36bd760();
   input += synapse0x36bd7a0();
   input += synapse0x36bd230();
   input += synapse0x36bd270();
   input += synapse0x36bd8f0();
   input += synapse0x36bd930();
   input += synapse0x36bd970();
   input += synapse0x36bd9b0();
   input += synapse0x36bd9f0();
   input += synapse0x36bda30();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36bd0a0() {
   double input = input0x36bd0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36bda70() {
   double input = -2.12072;
   input += synapse0x36bddb0();
   input += synapse0x36bddf0();
   input += synapse0x36bde30();
   input += synapse0x36bde70();
   input += synapse0x36bdeb0();
   input += synapse0x36bdef0();
   input += synapse0x36bdf30();
   input += synapse0x36bdf70();
   input += synapse0x36bdfb0();
   input += synapse0x36bdff0();
   input += synapse0x36be030();
   input += synapse0x36be070();
   input += synapse0x36be0b0();
   input += synapse0x36be0f0();
   input += synapse0x36be130();
   input += synapse0x36be170();
   input += synapse0x36bdc00();
   input += synapse0x36bdc40();
   input += synapse0x36be2c0();
   input += synapse0x36be300();
   input += synapse0x36be340();
   input += synapse0x36be380();
   input += synapse0x36be3c0();
   input += synapse0x36be400();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36bda70() {
   double input = input0x36bda70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36be440() {
   double input = -0.375121;
   input += synapse0x36be780();
   input += synapse0x36be7c0();
   input += synapse0x36be800();
   input += synapse0x36be840();
   input += synapse0x36be880();
   input += synapse0x36be8c0();
   input += synapse0x36be900();
   input += synapse0x36be940();
   input += synapse0x36be980();
   input += synapse0x36be9c0();
   input += synapse0x36bea00();
   input += synapse0x36bea40();
   input += synapse0x36bea80();
   input += synapse0x36beac0();
   input += synapse0x36beb00();
   input += synapse0x36beb40();
   input += synapse0x36be5d0();
   input += synapse0x36be610();
   input += synapse0x36bec90();
   input += synapse0x36becd0();
   input += synapse0x36bed10();
   input += synapse0x36bed50();
   input += synapse0x36bed90();
   input += synapse0x36bedd0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36be440() {
   double input = input0x36be440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36bee10() {
   double input = -1.13688;
   input += synapse0x36bf150();
   input += synapse0x36b3720();
   input += synapse0x36b3760();
   input += synapse0x36b37a0();
   input += synapse0x36b39f0();
   input += synapse0x36b3a30();
   input += synapse0x36b3a70();
   input += synapse0x36b3cc0();
   input += synapse0x36b3d00();
   input += synapse0x36b3f50();
   input += synapse0x36b3f90();
   input += synapse0x36b3fd0();
   input += synapse0x36b4220();
   input += synapse0x36b4260();
   input += synapse0x36b44b0();
   input += synapse0x36b44f0();
   input += synapse0x36befa0();
   input += synapse0x36befe0();
   input += synapse0x36b4640();
   input += synapse0x36b4b50();
   input += synapse0x36b4b90();
   input += synapse0x36b4bd0();
   input += synapse0x36b4e20();
   input += synapse0x36b4e60();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36bee10() {
   double input = input0x36bee10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b4ea0() {
   double input = 0.841641;
   input += synapse0x36b4710();
   input += synapse0x36b4750();
   input += synapse0x36b4790();
   input += synapse0x36b47d0();
   input += synapse0x36b5150();
   input += synapse0x36c14a0();
   input += synapse0x36c14e0();
   input += synapse0x36c1520();
   input += synapse0x36c1560();
   input += synapse0x36c15a0();
   input += synapse0x36c15e0();
   input += synapse0x36c1620();
   input += synapse0x36c1660();
   input += synapse0x36c16a0();
   input += synapse0x36c16e0();
   input += synapse0x36c1720();
   input += synapse0x36b5030();
   input += synapse0x36b5070();
   input += synapse0x36c1870();
   input += synapse0x36c18b0();
   input += synapse0x36c18f0();
   input += synapse0x36c1930();
   input += synapse0x36c1970();
   input += synapse0x36c19b0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b4ea0() {
   double input = input0x36b4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c19f0() {
   double input = -0.213543;
   input += synapse0x36c1d30();
   input += synapse0x36c1d70();
   input += synapse0x36c1db0();
   input += synapse0x36c1df0();
   input += synapse0x36c1e30();
   input += synapse0x36c1e70();
   input += synapse0x36c1eb0();
   input += synapse0x36c1ef0();
   input += synapse0x36c1f30();
   input += synapse0x36c1f70();
   input += synapse0x36c1fb0();
   input += synapse0x36c1ff0();
   input += synapse0x36c2030();
   input += synapse0x36c2070();
   input += synapse0x36c20b0();
   input += synapse0x36c20f0();
   input += synapse0x36c1b80();
   input += synapse0x36c1bc0();
   input += synapse0x36c2240();
   input += synapse0x36c2280();
   input += synapse0x36c22c0();
   input += synapse0x36c2300();
   input += synapse0x36c2340();
   input += synapse0x36c2380();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c19f0() {
   double input = input0x36c19f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c23c0() {
   double input = 2.1003;
   input += synapse0x36c2700();
   input += synapse0x36c2740();
   input += synapse0x36c2780();
   input += synapse0x36c27c0();
   input += synapse0x36c2800();
   input += synapse0x36c2840();
   input += synapse0x36c2880();
   input += synapse0x36c28c0();
   input += synapse0x36c2900();
   input += synapse0x36c2940();
   input += synapse0x36c2980();
   input += synapse0x36c29c0();
   input += synapse0x36c2a00();
   input += synapse0x36c2a40();
   input += synapse0x36c2a80();
   input += synapse0x36c2ac0();
   input += synapse0x36c2550();
   input += synapse0x36c2590();
   input += synapse0x36c2c10();
   input += synapse0x36c2c50();
   input += synapse0x36c2c90();
   input += synapse0x36c2cd0();
   input += synapse0x36c2d10();
   input += synapse0x36c2d50();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c23c0() {
   double input = input0x36c23c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c2d90() {
   double input = 2.32702;
   input += synapse0x36c30d0();
   input += synapse0x36c3110();
   input += synapse0x36c3150();
   input += synapse0x36c3190();
   input += synapse0x36c31d0();
   input += synapse0x36c3210();
   input += synapse0x36c3250();
   input += synapse0x36c3290();
   input += synapse0x36c32d0();
   input += synapse0x36c3310();
   input += synapse0x36c3350();
   input += synapse0x36c3390();
   input += synapse0x36c33d0();
   input += synapse0x36c3410();
   input += synapse0x36c3450();
   input += synapse0x36c3490();
   input += synapse0x36c2f20();
   input += synapse0x36c2f60();
   input += synapse0x36c35e0();
   input += synapse0x36c3620();
   input += synapse0x36c3660();
   input += synapse0x36c36a0();
   input += synapse0x36c36e0();
   input += synapse0x36c3720();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c2d90() {
   double input = input0x36c2d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c3760() {
   double input = 0.081583;
   input += synapse0x36c3aa0();
   input += synapse0x36c3ae0();
   input += synapse0x36c3b20();
   input += synapse0x36c3b60();
   input += synapse0x36c3ba0();
   input += synapse0x36c3be0();
   input += synapse0x36c3c20();
   input += synapse0x36c3c60();
   input += synapse0x36c3ca0();
   input += synapse0x36c3ce0();
   input += synapse0x36c3d20();
   input += synapse0x36c3d60();
   input += synapse0x36c3da0();
   input += synapse0x36c3de0();
   input += synapse0x36c3e20();
   input += synapse0x36c3e60();
   input += synapse0x36c38f0();
   input += synapse0x36c3930();
   input += synapse0x36c3fb0();
   input += synapse0x36c3ff0();
   input += synapse0x36c4030();
   input += synapse0x36c4070();
   input += synapse0x36c40b0();
   input += synapse0x36c40f0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c3760() {
   double input = input0x36c3760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c4130() {
   double input = -1.34579;
   input += synapse0x36c4470();
   input += synapse0x36c44b0();
   input += synapse0x36c44f0();
   input += synapse0x36c4530();
   input += synapse0x36c4570();
   input += synapse0x36c45b0();
   input += synapse0x36c45f0();
   input += synapse0x36c4630();
   input += synapse0x36c4670();
   input += synapse0x36c46b0();
   input += synapse0x36c46f0();
   input += synapse0x36c4730();
   input += synapse0x36c4770();
   input += synapse0x36c47b0();
   input += synapse0x36c47f0();
   input += synapse0x36c4830();
   input += synapse0x36c42c0();
   input += synapse0x36c4300();
   input += synapse0x36c4980();
   input += synapse0x36c49c0();
   input += synapse0x36c4a00();
   input += synapse0x36c4a40();
   input += synapse0x36c4a80();
   input += synapse0x36c4ac0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c4130() {
   double input = input0x36c4130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c4b00() {
   double input = 0.228252;
   input += synapse0x36c4e40();
   input += synapse0x36c4e80();
   input += synapse0x36c4ec0();
   input += synapse0x36c4f00();
   input += synapse0x36c4f40();
   input += synapse0x36c4f80();
   input += synapse0x36c4fc0();
   input += synapse0x36c5000();
   input += synapse0x36c5040();
   input += synapse0x36c5080();
   input += synapse0x36c50c0();
   input += synapse0x36c5100();
   input += synapse0x36c5140();
   input += synapse0x36c5180();
   input += synapse0x36c51c0();
   input += synapse0x36c5200();
   input += synapse0x36c4c90();
   input += synapse0x36c4cd0();
   input += synapse0x36c5350();
   input += synapse0x36c5390();
   input += synapse0x36c53d0();
   input += synapse0x36c5410();
   input += synapse0x36c5450();
   input += synapse0x36c5490();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c4b00() {
   double input = input0x36c4b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c54d0() {
   double input = -7.1651;
   input += synapse0x36c5810();
   input += synapse0x36c5850();
   input += synapse0x36c5890();
   input += synapse0x36c58d0();
   input += synapse0x36c5910();
   input += synapse0x36c5950();
   input += synapse0x36c5990();
   input += synapse0x36c59d0();
   input += synapse0x36c5a10();
   input += synapse0x36c5a50();
   input += synapse0x36c5a90();
   input += synapse0x36c5ad0();
   input += synapse0x36c5b10();
   input += synapse0x36c5b50();
   input += synapse0x36c5b90();
   input += synapse0x36c5bd0();
   input += synapse0x36c5660();
   input += synapse0x36c56a0();
   input += synapse0x36c5d20();
   input += synapse0x36c5d60();
   input += synapse0x36c5da0();
   input += synapse0x36c5de0();
   input += synapse0x36c5e20();
   input += synapse0x36c5e60();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c54d0() {
   double input = input0x36c54d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c5ea0() {
   double input = 0.206872;
   input += synapse0x36ae910();
   input += synapse0x36ae950();
   input += synapse0x36ae990();
   input += synapse0x36ae9d0();
   input += synapse0x36aea10();
   input += synapse0x36aea50();
   input += synapse0x36aea90();
   input += synapse0x36aead0();
   input += synapse0x36c65f0();
   input += synapse0x36c6630();
   input += synapse0x36c6670();
   input += synapse0x36c66b0();
   input += synapse0x36c66f0();
   input += synapse0x36c6730();
   input += synapse0x36c6770();
   input += synapse0x36c67b0();
   input += synapse0x36c6030();
   input += synapse0x36c6070();
   input += synapse0x36c6900();
   input += synapse0x36c6940();
   input += synapse0x36c6980();
   input += synapse0x36c69c0();
   input += synapse0x36c6a00();
   input += synapse0x36c6a40();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c5ea0() {
   double input = input0x36c5ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c6a80() {
   double input = 0.857554;
   input += synapse0x36c6dc0();
   input += synapse0x36c6e00();
   input += synapse0x36c6e40();
   input += synapse0x36c6e80();
   input += synapse0x36c6ec0();
   input += synapse0x36c6f00();
   input += synapse0x36c6f40();
   input += synapse0x36c6f80();
   input += synapse0x36c6fc0();
   input += synapse0x36c7000();
   input += synapse0x36c7040();
   input += synapse0x36c7080();
   input += synapse0x36c70c0();
   input += synapse0x36c7100();
   input += synapse0x36c7140();
   input += synapse0x36c7180();
   input += synapse0x36c6c10();
   input += synapse0x36c6c50();
   input += synapse0x36c72d0();
   input += synapse0x36c7310();
   input += synapse0x36c7350();
   input += synapse0x36c7390();
   input += synapse0x36c73d0();
   input += synapse0x36c7410();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c6a80() {
   double input = input0x36c6a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36c7450() {
   double input = 0.763614;
   input += synapse0x36c7790();
   input += synapse0x36c77d0();
   input += synapse0x36c7810();
   input += synapse0x36c7850();
   input += synapse0x36c7890();
   input += synapse0x36c78d0();
   input += synapse0x36c7910();
   input += synapse0x36c7950();
   input += synapse0x36c7990();
   input += synapse0x36c79d0();
   input += synapse0x36c7a10();
   input += synapse0x36c7a50();
   input += synapse0x36c7a90();
   input += synapse0x36c7ad0();
   input += synapse0x36c7b10();
   input += synapse0x36c7b50();
   input += synapse0x36c75e0();
   input += synapse0x36c7620();
   input += synapse0x36b8150();
   input += synapse0x36b8190();
   input += synapse0x36b81d0();
   input += synapse0x36b8210();
   input += synapse0x36b8250();
   input += synapse0x36b8290();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36c7450() {
   double input = input0x36c7450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b82d0() {
   double input = -3.12891;
   input += synapse0x36b8610();
   input += synapse0x36b8650();
   input += synapse0x36b8690();
   input += synapse0x36b86d0();
   input += synapse0x36b8710();
   input += synapse0x36b8750();
   input += synapse0x36b8790();
   input += synapse0x36b87d0();
   input += synapse0x36b8810();
   input += synapse0x36b8850();
   input += synapse0x36b8890();
   input += synapse0x36b88d0();
   input += synapse0x36b8910();
   input += synapse0x36b8950();
   input += synapse0x36b8990();
   input += synapse0x36b89d0();
   input += synapse0x36b8460();
   input += synapse0x36b84a0();
   input += synapse0x36b8b20();
   input += synapse0x36b8b60();
   input += synapse0x36b8ba0();
   input += synapse0x36b8be0();
   input += synapse0x36b8c20();
   input += synapse0x36b8c60();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b82d0() {
   double input = input0x36b82d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b8ca0() {
   double input = -1.27342;
   input += synapse0x36b8fe0();
   input += synapse0x36b9020();
   input += synapse0x36b9060();
   input += synapse0x36b90a0();
   input += synapse0x36b90e0();
   input += synapse0x36b9120();
   input += synapse0x36b9160();
   input += synapse0x36b91a0();
   input += synapse0x36b91e0();
   input += synapse0x36b9220();
   input += synapse0x36b9260();
   input += synapse0x36b92a0();
   input += synapse0x36b92e0();
   input += synapse0x36b9320();
   input += synapse0x36b9360();
   input += synapse0x36b93a0();
   input += synapse0x36b8e30();
   input += synapse0x36b8e70();
   input += synapse0x36b94f0();
   input += synapse0x36b9530();
   input += synapse0x36b9570();
   input += synapse0x36b95b0();
   input += synapse0x36b95f0();
   input += synapse0x36b9630();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b8ca0() {
   double input = input0x36b8ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36b9670() {
   double input = -0.704083;
   input += synapse0x36b99b0();
   input += synapse0x36b99f0();
   input += synapse0x36b9a30();
   input += synapse0x36b9a70();
   input += synapse0x36b9ab0();
   input += synapse0x36b9af0();
   input += synapse0x36b9b30();
   input += synapse0x36b9b70();
   input += synapse0x36b9bb0();
   input += synapse0x36b9bf0();
   input += synapse0x36b9c30();
   input += synapse0x36b9c70();
   input += synapse0x36b9cb0();
   input += synapse0x36b9cf0();
   input += synapse0x36b9d30();
   input += synapse0x36b9d70();
   input += synapse0x36b9800();
   input += synapse0x36b9840();
   input += synapse0x36b9ec0();
   input += synapse0x36b9f00();
   input += synapse0x36b9f40();
   input += synapse0x36b9f80();
   input += synapse0x36b9fc0();
   input += synapse0x36ba000();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36b9670() {
   double input = input0x36b9670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36cbcb0() {
   double input = -0.737366;
   input += synapse0x36cbed0();
   input += synapse0x36cbf10();
   input += synapse0x36cbf50();
   input += synapse0x36cbf90();
   input += synapse0x36cbfd0();
   input += synapse0x36cc010();
   input += synapse0x36cc050();
   input += synapse0x36cc090();
   input += synapse0x36cc0d0();
   input += synapse0x36cc110();
   input += synapse0x36cc150();
   input += synapse0x36cc190();
   input += synapse0x36cc1d0();
   input += synapse0x36cc210();
   input += synapse0x36cc250();
   input += synapse0x36cc290();
   input += synapse0x36ba040();
   input += synapse0x36ba080();
   input += synapse0x36cc3e0();
   input += synapse0x36cc420();
   input += synapse0x36cc460();
   input += synapse0x36cc4a0();
   input += synapse0x36cc4e0();
   input += synapse0x36cc520();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36cbcb0() {
   double input = input0x36cbcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36cc560() {
   double input = -0.0449811;
   input += synapse0x36cc8a0();
   input += synapse0x36cc8e0();
   input += synapse0x36cc920();
   input += synapse0x36cc960();
   input += synapse0x36cc9a0();
   input += synapse0x36cc9e0();
   input += synapse0x36cca20();
   input += synapse0x36cca60();
   input += synapse0x36ccaa0();
   input += synapse0x36ccae0();
   input += synapse0x36ccb20();
   input += synapse0x36ccb60();
   input += synapse0x36ccba0();
   input += synapse0x36ccbe0();
   input += synapse0x36ccc20();
   input += synapse0x36ccc60();
   input += synapse0x36cc6f0();
   input += synapse0x36cc730();
   input += synapse0x36ccdb0();
   input += synapse0x36ccdf0();
   input += synapse0x36cce30();
   input += synapse0x36cce70();
   input += synapse0x36cceb0();
   input += synapse0x36ccef0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36cc560() {
   double input = input0x36cc560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36ccf30() {
   double input = 1.62179;
   input += synapse0x36cd270();
   input += synapse0x36cd2b0();
   input += synapse0x36cd2f0();
   input += synapse0x36cd330();
   input += synapse0x36cd370();
   input += synapse0x36cd3b0();
   input += synapse0x36cd3f0();
   input += synapse0x36cd430();
   input += synapse0x36cd470();
   input += synapse0x36cd4b0();
   input += synapse0x36cd4f0();
   input += synapse0x36cd530();
   input += synapse0x36cd570();
   input += synapse0x36cd5b0();
   input += synapse0x36cd5f0();
   input += synapse0x36cd630();
   input += synapse0x36cd0c0();
   input += synapse0x36cd100();
   input += synapse0x36cd780();
   input += synapse0x36cd7c0();
   input += synapse0x36cd800();
   input += synapse0x36cd840();
   input += synapse0x36cd880();
   input += synapse0x36cd8c0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36ccf30() {
   double input = input0x36ccf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36cd900() {
   double input = -0.63864;
   input += synapse0x36cdc40();
   input += synapse0x36cdc80();
   input += synapse0x36cdcc0();
   input += synapse0x36cdd00();
   input += synapse0x36cdd40();
   input += synapse0x36cdd80();
   input += synapse0x36cddc0();
   input += synapse0x36cde00();
   input += synapse0x36cde40();
   input += synapse0x36cde80();
   input += synapse0x36cdec0();
   input += synapse0x36cdf00();
   input += synapse0x36cdf40();
   input += synapse0x36cdf80();
   input += synapse0x36cdfc0();
   input += synapse0x36ce000();
   input += synapse0x36cda90();
   input += synapse0x36cdad0();
   input += synapse0x36ce150();
   input += synapse0x36ce190();
   input += synapse0x36ce1d0();
   input += synapse0x36ce210();
   input += synapse0x36ce250();
   input += synapse0x36ce290();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36cd900() {
   double input = input0x36cd900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36d4b00() {
   double input = 0.702031;
   input += synapse0x346e1a0();
   input += synapse0x346e1e0();
   input += synapse0x36abd40();
   input += synapse0x36abd80();
   input += synapse0x36ac710();
   input += synapse0x36ac750();
   input += synapse0x36ad4e0();
   input += synapse0x36ad520();
   input += synapse0x36adeb0();
   input += synapse0x36adef0();
   input += synapse0x36ae880();
   input += synapse0x36ae8c0();
   input += synapse0x36af360();
   input += synapse0x36af3a0();
   input += synapse0x36afd30();
   input += synapse0x36afd70();
   input += synapse0x36ace10();
   input += synapse0x36ace50();
   input += synapse0x36b18e0();
   input += synapse0x36b1920();
   input += synapse0x36b22b0();
   input += synapse0x36b22f0();
   input += synapse0x36b2c80();
   input += synapse0x36b2cc0();
   input += synapse0x36b3650();
   input += synapse0x36b3690();
   input += synapse0x36a77f0();
   input += synapse0x36a7830();
   input += synapse0x36b5740();
   input += synapse0x36b5780();
   input += synapse0x36b6110();
   input += synapse0x36b6150();
   input += synapse0x36b6ae0();
   input += synapse0x36b6b20();
   input += synapse0x36b74b0();
   input += synapse0x36b74f0();
   input += synapse0x36b7e80();
   input += synapse0x36b7ec0();
   input += synapse0x36b09d0();
   input += synapse0x36b0a10();
   input += synapse0x36ba280();
   input += synapse0x36ba2c0();
   input += synapse0x36bac10();
   input += synapse0x36bac50();
   input += synapse0x36bb5e0();
   input += synapse0x36bb620();
   input += synapse0x36bbfb0();
   input += synapse0x36bbff0();
   input += synapse0x36bc980();
   input += synapse0x36bc9c0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36d4b00() {
   double input = input0x36d4b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36d4ea0() {
   double input = 2.13213;
   input += synapse0x36bf0c0();
   input += synapse0x36bf100();
   input += synapse0x36b4680();
   input += synapse0x36b46c0();
   input += synapse0x36c1ca0();
   input += synapse0x36c1ce0();
   input += synapse0x36c2670();
   input += synapse0x36c26b0();
   input += synapse0x36c3040();
   input += synapse0x36c3080();
   input += synapse0x36c3a10();
   input += synapse0x36c3a50();
   input += synapse0x36c43e0();
   input += synapse0x36c4420();
   input += synapse0x36c4db0();
   input += synapse0x36c4df0();
   input += synapse0x36c5780();
   input += synapse0x36c57c0();
   input += synapse0x36c6150();
   input += synapse0x36c6190();
   input += synapse0x36c6d30();
   input += synapse0x36c6d70();
   input += synapse0x36c7700();
   input += synapse0x36c7740();
   input += synapse0x36b8580();
   input += synapse0x36b85c0();
   input += synapse0x36b8f50();
   input += synapse0x36b8f90();
   input += synapse0x36b9920();
   input += synapse0x36b9960();
   input += synapse0x36cbe40();
   input += synapse0x36cbe80();
   input += synapse0x36cc810();
   input += synapse0x36cc850();
   input += synapse0x36cd1e0();
   input += synapse0x36cd220();
   input += synapse0x36cdbb0();
   input += synapse0x36cdbf0();
   input += synapse0x36a9aa0();
   input += synapse0x36a9ae0();
   input += synapse0x36bd350();
   input += synapse0x36bd390();
   input += synapse0x36ce2d0();
   input += synapse0x36ce310();
   input += synapse0x36ce350();
   input += synapse0x36ce390();
   input += synapse0x36d5240();
   input += synapse0x36d5280();
   input += synapse0x36d52c0();
   input += synapse0x36d5300();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36d4ea0() {
   double input = input0x36d4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36d5340() {
   double input = -2.25519;
   input += synapse0x36d5680();
   input += synapse0x36d56c0();
   input += synapse0x36d5700();
   input += synapse0x36d5740();
   input += synapse0x36d5780();
   input += synapse0x36d57c0();
   input += synapse0x36d5800();
   input += synapse0x36d5840();
   input += synapse0x36d5880();
   input += synapse0x36d58c0();
   input += synapse0x36d5900();
   input += synapse0x36d5940();
   input += synapse0x36d5980();
   input += synapse0x36d59c0();
   input += synapse0x36d5a00();
   input += synapse0x36d5a40();
   input += synapse0x36d54d0();
   input += synapse0x36d5510();
   input += synapse0x36d5b90();
   input += synapse0x36d5bd0();
   input += synapse0x36d5c10();
   input += synapse0x36d5c50();
   input += synapse0x36d5c90();
   input += synapse0x36d5cd0();
   input += synapse0x36d5d10();
   input += synapse0x36d5d50();
   input += synapse0x36d5d90();
   input += synapse0x36d5dd0();
   input += synapse0x36d5e10();
   input += synapse0x36d5e50();
   input += synapse0x36d5e90();
   input += synapse0x36d5ed0();
   input += synapse0x36d5a80();
   input += synapse0x36d5ac0();
   input += synapse0x36d5b00();
   input += synapse0x36d5b40();
   input += synapse0x36d6120();
   input += synapse0x36d6160();
   input += synapse0x36d61a0();
   input += synapse0x36d61e0();
   input += synapse0x36d6220();
   input += synapse0x36d6260();
   input += synapse0x36d62a0();
   input += synapse0x36d62e0();
   input += synapse0x36d6320();
   input += synapse0x36d6360();
   input += synapse0x36d63a0();
   input += synapse0x36d63e0();
   input += synapse0x36d6420();
   input += synapse0x36d6460();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36d5340() {
   double input = input0x36d5340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36d64a0() {
   double input = -0.629427;
   input += synapse0x36d67e0();
   input += synapse0x36d6820();
   input += synapse0x36d6860();
   input += synapse0x36d68a0();
   input += synapse0x36d68e0();
   input += synapse0x36d6920();
   input += synapse0x36d6960();
   input += synapse0x36d69a0();
   input += synapse0x36d69e0();
   input += synapse0x36d6a20();
   input += synapse0x36d6a60();
   input += synapse0x36d6aa0();
   input += synapse0x36d6ae0();
   input += synapse0x36d6b20();
   input += synapse0x36d6b60();
   input += synapse0x36d6ba0();
   input += synapse0x36d6630();
   input += synapse0x36d6670();
   input += synapse0x36d6cf0();
   input += synapse0x36d6d30();
   input += synapse0x36d6d70();
   input += synapse0x36d6db0();
   input += synapse0x36d6df0();
   input += synapse0x36d6e30();
   input += synapse0x36d6e70();
   input += synapse0x36d6eb0();
   input += synapse0x36d6ef0();
   input += synapse0x36d6f30();
   input += synapse0x36d6f70();
   input += synapse0x36d6fb0();
   input += synapse0x36d6ff0();
   input += synapse0x36d7030();
   input += synapse0x36d6be0();
   input += synapse0x36d6c20();
   input += synapse0x36d6c60();
   input += synapse0x36d6ca0();
   input += synapse0x36d7280();
   input += synapse0x36d72c0();
   input += synapse0x36d7300();
   input += synapse0x36d7340();
   input += synapse0x36d7380();
   input += synapse0x36d73c0();
   input += synapse0x36d7400();
   input += synapse0x36d7440();
   input += synapse0x36d7480();
   input += synapse0x36d74c0();
   input += synapse0x36d7500();
   input += synapse0x36d7540();
   input += synapse0x36d7580();
   input += synapse0x36d75c0();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36d64a0() {
   double input = input0x36d64a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36d7600() {
   double input = 0.622418;
   input += synapse0x36d7940();
   input += synapse0x36d7980();
   input += synapse0x36d79c0();
   input += synapse0x36d7a00();
   input += synapse0x36d7a40();
   input += synapse0x36d7a80();
   input += synapse0x36d7ac0();
   input += synapse0x36d7b00();
   input += synapse0x36d7b40();
   input += synapse0x36d7b80();
   input += synapse0x36d7bc0();
   input += synapse0x36d7c00();
   input += synapse0x36d7c40();
   input += synapse0x36d7c80();
   input += synapse0x36d7cc0();
   input += synapse0x36d7d00();
   input += synapse0x36d7790();
   input += synapse0x36d77d0();
   input += synapse0x36d7e50();
   input += synapse0x36d7e90();
   input += synapse0x36d7ed0();
   input += synapse0x36d7f10();
   input += synapse0x36d7f50();
   input += synapse0x36d7f90();
   input += synapse0x36d7fd0();
   input += synapse0x36d8010();
   input += synapse0x36d8050();
   input += synapse0x36d8090();
   input += synapse0x36d80d0();
   input += synapse0x36d8110();
   input += synapse0x36d8150();
   input += synapse0x36d8190();
   input += synapse0x36d7d40();
   input += synapse0x36d7d80();
   input += synapse0x36d7dc0();
   input += synapse0x36d7e00();
   input += synapse0x36d83e0();
   input += synapse0x36d8420();
   input += synapse0x36d8460();
   input += synapse0x36d84a0();
   input += synapse0x36d84e0();
   input += synapse0x36d8520();
   input += synapse0x36d8560();
   input += synapse0x36d85a0();
   input += synapse0x36d85e0();
   input += synapse0x36d8620();
   input += synapse0x36d8660();
   input += synapse0x36d86a0();
   input += synapse0x36d86e0();
   input += synapse0x36d8720();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36d7600() {
   double input = input0x36d7600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi03_sL::input0x36d8760() {
   double input = 0.374819;
   input += synapse0x36d8980();
   input += synapse0x36d89c0();
   input += synapse0x36d8a00();
   input += synapse0x36d8a40();
   input += synapse0x36d8a80();
   return input;
}

double NNfunction_ns_chi03_sL::neuron0x36d8760() {
   double input = input0x36d8760();
   return (input * 1)+0;
}

double NNfunction_ns_chi03_sL::synapse0x36a4710() {
   return (neuron0x36a4850()*-0.285729);
}

double NNfunction_ns_chi03_sL::synapse0x36a4750() {
   return (neuron0x36a4b90()*1.01584);
}

double NNfunction_ns_chi03_sL::synapse0x36a9b30() {
   return (neuron0x36a4ed0()*0.0361627);
}

double NNfunction_ns_chi03_sL::synapse0x36a9b70() {
   return (neuron0x36a5210()*-0.481112);
}

double NNfunction_ns_chi03_sL::synapse0x36a9bb0() {
   return (neuron0x36a5550()*0.199205);
}

double NNfunction_ns_chi03_sL::synapse0x36a9bf0() {
   return (neuron0x36a5890()*-0.26341);
}

double NNfunction_ns_chi03_sL::synapse0x36a9c30() {
   return (neuron0x36a5bd0()*0.181049);
}

double NNfunction_ns_chi03_sL::synapse0x36a9c70() {
   return (neuron0x36a5f10()*-0.807208);
}

double NNfunction_ns_chi03_sL::synapse0x36a9cb0() {
   return (neuron0x36a6250()*0.48289);
}

double NNfunction_ns_chi03_sL::synapse0x36a9cf0() {
   return (neuron0x36a6590()*-0.00617918);
}

double NNfunction_ns_chi03_sL::synapse0x36a9d30() {
   return (neuron0x36a68d0()*0.143353);
}

double NNfunction_ns_chi03_sL::synapse0x36a9d70() {
   return (neuron0x36a6c10()*0.208174);
}

double NNfunction_ns_chi03_sL::synapse0x36a9db0() {
   return (neuron0x36a6f50()*-0.799892);
}

double NNfunction_ns_chi03_sL::synapse0x36a9df0() {
   return (neuron0x36a7290()*0.292125);
}

double NNfunction_ns_chi03_sL::synapse0x36a9e30() {
   return (neuron0x36a75d0()*-0.3871);
}

double NNfunction_ns_chi03_sL::synapse0x36a9e70() {
   return (neuron0x36a7910()*0.0117998);
}

double NNfunction_ns_chi03_sL::synapse0x36a4680() {
   return (neuron0x36a7c50()*-0.125265);
}

double NNfunction_ns_chi03_sL::synapse0x36a46c0() {
   return (neuron0x36a81b0()*0.359407);
}

double NNfunction_ns_chi03_sL::synapse0x345f9f0() {
   return (neuron0x36a83d0()*0.208734);
}

double NNfunction_ns_chi03_sL::synapse0x345fa30() {
   return (neuron0x36a8710()*0.611767);
}

double NNfunction_ns_chi03_sL::synapse0x36aa0d0() {
   return (neuron0x36a8a50()*0.48603);
}

double NNfunction_ns_chi03_sL::synapse0x36aa110() {
   return (neuron0x36a8d90()*-0.189644);
}

double NNfunction_ns_chi03_sL::synapse0x36aa150() {
   return (neuron0x36a90d0()*0.257567);
}

double NNfunction_ns_chi03_sL::synapse0x36aa190() {
   return (neuron0x36a9410()*0.267021);
}

double NNfunction_ns_chi03_sL::synapse0x36aa510() {
   return (neuron0x36a4850()*-0.023322);
}

double NNfunction_ns_chi03_sL::synapse0x36aa550() {
   return (neuron0x36a4b90()*-0.462628);
}

double NNfunction_ns_chi03_sL::synapse0x36aa590() {
   return (neuron0x36a4ed0()*-0.270685);
}

double NNfunction_ns_chi03_sL::synapse0x36aa5d0() {
   return (neuron0x36a5210()*1.43451);
}

double NNfunction_ns_chi03_sL::synapse0x36aa610() {
   return (neuron0x36a5550()*-0.0822188);
}

double NNfunction_ns_chi03_sL::synapse0x36aa650() {
   return (neuron0x36a5890()*0.0135421);
}

double NNfunction_ns_chi03_sL::synapse0x36aa690() {
   return (neuron0x36a5bd0()*-0.679279);
}

double NNfunction_ns_chi03_sL::synapse0x36aa6d0() {
   return (neuron0x36a5f10()*-0.84222);
}

double NNfunction_ns_chi03_sL::synapse0x36aa710() {
   return (neuron0x36a6250()*0.217729);
}

double NNfunction_ns_chi03_sL::synapse0x36a9fc0() {
   return (neuron0x36a6590()*-0.197573);
}

double NNfunction_ns_chi03_sL::synapse0x36aa000() {
   return (neuron0x36a68d0()*-0.134411);
}

double NNfunction_ns_chi03_sL::synapse0x36aa040() {
   return (neuron0x36a6c10()*-0.57177);
}

double NNfunction_ns_chi03_sL::synapse0x36aa080() {
   return (neuron0x36a6f50()*0.808088);
}

double NNfunction_ns_chi03_sL::synapse0x36aa960() {
   return (neuron0x36a7290()*0.178026);
}

double NNfunction_ns_chi03_sL::synapse0x36aa9a0() {
   return (neuron0x36a75d0()*-0.545051);
}

double NNfunction_ns_chi03_sL::synapse0x36aa9e0() {
   return (neuron0x36a7910()*0.0226148);
}

double NNfunction_ns_chi03_sL::synapse0x36aa360() {
   return (neuron0x36a7c50()*-0.348464);
}

double NNfunction_ns_chi03_sL::synapse0x36aa3a0() {
   return (neuron0x36a81b0()*0.149714);
}

double NNfunction_ns_chi03_sL::synapse0x36aab30() {
   return (neuron0x36a83d0()*0.130195);
}

double NNfunction_ns_chi03_sL::synapse0x36aab70() {
   return (neuron0x36a8710()*0.339705);
}

double NNfunction_ns_chi03_sL::synapse0x36aabb0() {
   return (neuron0x36a8a50()*-0.405906);
}

double NNfunction_ns_chi03_sL::synapse0x36aabf0() {
   return (neuron0x36a8d90()*0.492686);
}

double NNfunction_ns_chi03_sL::synapse0x36aac30() {
   return (neuron0x36a90d0()*0.444481);
}

double NNfunction_ns_chi03_sL::synapse0x36aac70() {
   return (neuron0x36a9410()*0.137067);
}

double NNfunction_ns_chi03_sL::synapse0x36aaff0() {
   return (neuron0x36a4850()*0.0711534);
}

double NNfunction_ns_chi03_sL::synapse0x36ab030() {
   return (neuron0x36a4b90()*-8.50323);
}

double NNfunction_ns_chi03_sL::synapse0x36ab070() {
   return (neuron0x36a4ed0()*0.798347);
}

double NNfunction_ns_chi03_sL::synapse0x36ab0b0() {
   return (neuron0x36a5210()*-8.18262e-05);
}

double NNfunction_ns_chi03_sL::synapse0x36ab0f0() {
   return (neuron0x36a5550()*-0.033307);
}

double NNfunction_ns_chi03_sL::synapse0x36ab130() {
   return (neuron0x36a5890()*-0.0377173);
}

double NNfunction_ns_chi03_sL::synapse0x36ab170() {
   return (neuron0x36a5bd0()*0.00676574);
}

double NNfunction_ns_chi03_sL::synapse0x36ab1b0() {
   return (neuron0x36a5f10()*0.033012);
}

double NNfunction_ns_chi03_sL::synapse0x36ab1f0() {
   return (neuron0x36a6250()*0.0269623);
}

double NNfunction_ns_chi03_sL::synapse0x36ab230() {
   return (neuron0x36a6590()*0.033613);
}

double NNfunction_ns_chi03_sL::synapse0x36ab270() {
   return (neuron0x36a68d0()*-0.0311648);
}

double NNfunction_ns_chi03_sL::synapse0x36ab2b0() {
   return (neuron0x36a6c10()*-0.00731845);
}

double NNfunction_ns_chi03_sL::synapse0x36ab2f0() {
   return (neuron0x36a6f50()*0.155277);
}

double NNfunction_ns_chi03_sL::synapse0x36ab330() {
   return (neuron0x36a7290()*-0.0270178);
}

double NNfunction_ns_chi03_sL::synapse0x36ab370() {
   return (neuron0x36a75d0()*0.00162949);
}

double NNfunction_ns_chi03_sL::synapse0x36ab3b0() {
   return (neuron0x36a7910()*0.0476953);
}

double NNfunction_ns_chi03_sL::synapse0x36aae40() {
   return (neuron0x36a7c50()*0.0243836);
}

double NNfunction_ns_chi03_sL::synapse0x36aae80() {
   return (neuron0x36a81b0()*0.0243782);
}

double NNfunction_ns_chi03_sL::synapse0x34600e0() {
   return (neuron0x36a83d0()*-0.00129585);
}

double NNfunction_ns_chi03_sL::synapse0x346d9b0() {
   return (neuron0x36a8710()*-0.014701);
}

double NNfunction_ns_chi03_sL::synapse0x346d9f0() {
   return (neuron0x36a8a50()*0.02709);
}

double NNfunction_ns_chi03_sL::synapse0x36938e0() {
   return (neuron0x36a8d90()*0.00135581);
}

double NNfunction_ns_chi03_sL::synapse0x3693920() {
   return (neuron0x36a90d0()*-0.0108234);
}

double NNfunction_ns_chi03_sL::synapse0x3693960() {
   return (neuron0x36a9410()*-1.65514);
}

double NNfunction_ns_chi03_sL::synapse0x346e230() {
   return (neuron0x36a4850()*-0.128985);
}

double NNfunction_ns_chi03_sL::synapse0x36aa8e0() {
   return (neuron0x36a4b90()*0.00871597);
}

double NNfunction_ns_chi03_sL::synapse0x36aa920() {
   return (neuron0x36a4ed0()*-3.56704);
}

double NNfunction_ns_chi03_sL::synapse0x36ab500() {
   return (neuron0x36a5210()*0.00598574);
}

double NNfunction_ns_chi03_sL::synapse0x36ab540() {
   return (neuron0x36a5550()*0.0028324);
}

double NNfunction_ns_chi03_sL::synapse0x36ab580() {
   return (neuron0x36a5890()*-0.0027349);
}

double NNfunction_ns_chi03_sL::synapse0x36ab5c0() {
   return (neuron0x36a5bd0()*-0.005555);
}

double NNfunction_ns_chi03_sL::synapse0x36ab600() {
   return (neuron0x36a5f10()*0.0108563);
}

double NNfunction_ns_chi03_sL::synapse0x36ab640() {
   return (neuron0x36a6250()*0.0118322);
}

double NNfunction_ns_chi03_sL::synapse0x36ab680() {
   return (neuron0x36a6590()*-0.0082908);
}

double NNfunction_ns_chi03_sL::synapse0x36ab6c0() {
   return (neuron0x36a68d0()*-0.000112766);
}

double NNfunction_ns_chi03_sL::synapse0x36ab700() {
   return (neuron0x36a6c10()*0.00180194);
}

double NNfunction_ns_chi03_sL::synapse0x36ab740() {
   return (neuron0x36a6f50()*0.0578715);
}

double NNfunction_ns_chi03_sL::synapse0x36ab780() {
   return (neuron0x36a7290()*0.0328805);
}

double NNfunction_ns_chi03_sL::synapse0x36ab7c0() {
   return (neuron0x36a75d0()*-0.0237751);
}

double NNfunction_ns_chi03_sL::synapse0x36ab800() {
   return (neuron0x36a7910()*-0.00347683);
}

double NNfunction_ns_chi03_sL::synapse0x36a4790() {
   return (neuron0x36a7c50()*0.00356362);
}

double NNfunction_ns_chi03_sL::synapse0x36a47d0() {
   return (neuron0x36a81b0()*-0.0314514);
}

double NNfunction_ns_chi03_sL::synapse0x36a4810() {
   return (neuron0x36a83d0()*0.00576434);
}

double NNfunction_ns_chi03_sL::synapse0x36ab950() {
   return (neuron0x36a8710()*-0.0107792);
}

double NNfunction_ns_chi03_sL::synapse0x36ab990() {
   return (neuron0x36a8a50()*-0.0105628);
}

double NNfunction_ns_chi03_sL::synapse0x36ab9d0() {
   return (neuron0x36a8d90()*-0.0342421);
}

double NNfunction_ns_chi03_sL::synapse0x36aba10() {
   return (neuron0x36a90d0()*0.00931815);
}

double NNfunction_ns_chi03_sL::synapse0x36aba50() {
   return (neuron0x36a9410()*-1.54326);
}

double NNfunction_ns_chi03_sL::synapse0x36abdd0() {
   return (neuron0x36a4850()*0.466262);
}

double NNfunction_ns_chi03_sL::synapse0x36abe10() {
   return (neuron0x36a4b90()*0.472703);
}

double NNfunction_ns_chi03_sL::synapse0x36abe50() {
   return (neuron0x36a4ed0()*0.147809);
}

double NNfunction_ns_chi03_sL::synapse0x36abe90() {
   return (neuron0x36a5210()*-0.270115);
}

double NNfunction_ns_chi03_sL::synapse0x36abed0() {
   return (neuron0x36a5550()*-0.429842);
}

double NNfunction_ns_chi03_sL::synapse0x36abf10() {
   return (neuron0x36a5890()*0.0865987);
}

double NNfunction_ns_chi03_sL::synapse0x36abf50() {
   return (neuron0x36a5bd0()*0.557298);
}

double NNfunction_ns_chi03_sL::synapse0x36abf90() {
   return (neuron0x36a5f10()*0.514153);
}

double NNfunction_ns_chi03_sL::synapse0x36abfd0() {
   return (neuron0x36a6250()*-0.769453);
}

double NNfunction_ns_chi03_sL::synapse0x36ac010() {
   return (neuron0x36a6590()*-0.0751355);
}

double NNfunction_ns_chi03_sL::synapse0x36ac050() {
   return (neuron0x36a68d0()*0.158661);
}

double NNfunction_ns_chi03_sL::synapse0x36ac090() {
   return (neuron0x36a6c10()*-0.497844);
}

double NNfunction_ns_chi03_sL::synapse0x36ac0d0() {
   return (neuron0x36a6f50()*-0.30593);
}

double NNfunction_ns_chi03_sL::synapse0x36ac110() {
   return (neuron0x36a7290()*0.198406);
}

double NNfunction_ns_chi03_sL::synapse0x36ac150() {
   return (neuron0x36a75d0()*0.26145);
}

double NNfunction_ns_chi03_sL::synapse0x36ac190() {
   return (neuron0x36a7910()*-1.75026);
}

double NNfunction_ns_chi03_sL::synapse0x36abc20() {
   return (neuron0x36a7c50()*-0.00209906);
}

double NNfunction_ns_chi03_sL::synapse0x36abc60() {
   return (neuron0x36a81b0()*-0.168407);
}

double NNfunction_ns_chi03_sL::synapse0x36ac2e0() {
   return (neuron0x36a83d0()*-0.282217);
}

double NNfunction_ns_chi03_sL::synapse0x36ac320() {
   return (neuron0x36a8710()*0.312805);
}

double NNfunction_ns_chi03_sL::synapse0x36ac360() {
   return (neuron0x36a8a50()*-0.0396312);
}

double NNfunction_ns_chi03_sL::synapse0x36ac3a0() {
   return (neuron0x36a8d90()*1.20108);
}

double NNfunction_ns_chi03_sL::synapse0x36ac3e0() {
   return (neuron0x36a90d0()*0.0946742);
}

double NNfunction_ns_chi03_sL::synapse0x36ac420() {
   return (neuron0x36a9410()*0.388595);
}

double NNfunction_ns_chi03_sL::synapse0x36ac7a0() {
   return (neuron0x36a4850()*-0.123612);
}

double NNfunction_ns_chi03_sL::synapse0x36ac7e0() {
   return (neuron0x36a4b90()*1.64862);
}

double NNfunction_ns_chi03_sL::synapse0x36ac820() {
   return (neuron0x36a4ed0()*0.900663);
}

double NNfunction_ns_chi03_sL::synapse0x36ac860() {
   return (neuron0x36a5210()*-0.332);
}

double NNfunction_ns_chi03_sL::synapse0x36ac8a0() {
   return (neuron0x36a5550()*0.144238);
}

double NNfunction_ns_chi03_sL::synapse0x36ac8e0() {
   return (neuron0x36a5890()*-0.177616);
}

double NNfunction_ns_chi03_sL::synapse0x36ac920() {
   return (neuron0x36a5bd0()*-0.0606077);
}

double NNfunction_ns_chi03_sL::synapse0x36ac960() {
   return (neuron0x36a5f10()*-0.00141796);
}

double NNfunction_ns_chi03_sL::synapse0x36ac9a0() {
   return (neuron0x36a6250()*0.031513);
}

double NNfunction_ns_chi03_sL::synapse0x346dd00() {
   return (neuron0x36a6590()*-0.104145);
}

double NNfunction_ns_chi03_sL::synapse0x346dd40() {
   return (neuron0x36a68d0()*0.0700112);
}

double NNfunction_ns_chi03_sL::synapse0x346dd80() {
   return (neuron0x36a6c10()*0.27058);
}

double NNfunction_ns_chi03_sL::synapse0x346ddc0() {
   return (neuron0x36a6f50()*-0.528805);
}

double NNfunction_ns_chi03_sL::synapse0x346de00() {
   return (neuron0x36a7290()*-0.080618);
}

double NNfunction_ns_chi03_sL::synapse0x346de40() {
   return (neuron0x36a75d0()*0.00201718);
}

double NNfunction_ns_chi03_sL::synapse0x346de80() {
   return (neuron0x36a7910()*-0.156849);
}

double NNfunction_ns_chi03_sL::synapse0x36ac5f0() {
   return (neuron0x36a7c50()*-0.0168612);
}

double NNfunction_ns_chi03_sL::synapse0x36ac630() {
   return (neuron0x36a81b0()*-0.0758647);
}

double NNfunction_ns_chi03_sL::synapse0x346dfd0() {
   return (neuron0x36a83d0()*0.0669837);
}

double NNfunction_ns_chi03_sL::synapse0x346e010() {
   return (neuron0x36a8710()*-0.02545);
}

double NNfunction_ns_chi03_sL::synapse0x346e050() {
   return (neuron0x36a8a50()*-0.00413037);
}

double NNfunction_ns_chi03_sL::synapse0x346e090() {
   return (neuron0x36a8d90()*-0.156164);
}

double NNfunction_ns_chi03_sL::synapse0x346e0d0() {
   return (neuron0x36a90d0()*0.11732);
}

double NNfunction_ns_chi03_sL::synapse0x36ad1f0() {
   return (neuron0x36a9410()*0.115199);
}

double NNfunction_ns_chi03_sL::synapse0x36ad570() {
   return (neuron0x36a4850()*-0.472619);
}

double NNfunction_ns_chi03_sL::synapse0x36ad5b0() {
   return (neuron0x36a4b90()*-0.1781);
}

double NNfunction_ns_chi03_sL::synapse0x36ad5f0() {
   return (neuron0x36a4ed0()*0.333464);
}

double NNfunction_ns_chi03_sL::synapse0x36ad630() {
   return (neuron0x36a5210()*-0.0767104);
}

double NNfunction_ns_chi03_sL::synapse0x36ad670() {
   return (neuron0x36a5550()*0.0262329);
}

double NNfunction_ns_chi03_sL::synapse0x36ad6b0() {
   return (neuron0x36a5890()*0.115445);
}

double NNfunction_ns_chi03_sL::synapse0x36ad6f0() {
   return (neuron0x36a5bd0()*0.467233);
}

double NNfunction_ns_chi03_sL::synapse0x36ad730() {
   return (neuron0x36a5f10()*0.028603);
}

double NNfunction_ns_chi03_sL::synapse0x36ad770() {
   return (neuron0x36a6250()*0.192782);
}

double NNfunction_ns_chi03_sL::synapse0x36ad7b0() {
   return (neuron0x36a6590()*0.0736946);
}

double NNfunction_ns_chi03_sL::synapse0x36ad7f0() {
   return (neuron0x36a68d0()*0.0116615);
}

double NNfunction_ns_chi03_sL::synapse0x36ad830() {
   return (neuron0x36a6c10()*0.0879982);
}

double NNfunction_ns_chi03_sL::synapse0x36ad870() {
   return (neuron0x36a6f50()*0.319195);
}

double NNfunction_ns_chi03_sL::synapse0x36ad8b0() {
   return (neuron0x36a7290()*0.116384);
}

double NNfunction_ns_chi03_sL::synapse0x36ad8f0() {
   return (neuron0x36a75d0()*-0.380929);
}

double NNfunction_ns_chi03_sL::synapse0x36ad930() {
   return (neuron0x36a7910()*0.158645);
}

double NNfunction_ns_chi03_sL::synapse0x36ad3c0() {
   return (neuron0x36a7c50()*-0.334627);
}

double NNfunction_ns_chi03_sL::synapse0x36ad400() {
   return (neuron0x36a81b0()*0.282821);
}

double NNfunction_ns_chi03_sL::synapse0x36ada80() {
   return (neuron0x36a83d0()*-0.000272111);
}

double NNfunction_ns_chi03_sL::synapse0x36adac0() {
   return (neuron0x36a8710()*0.0480015);
}

double NNfunction_ns_chi03_sL::synapse0x36adb00() {
   return (neuron0x36a8a50()*0.142245);
}

double NNfunction_ns_chi03_sL::synapse0x36adb40() {
   return (neuron0x36a8d90()*0.170099);
}

double NNfunction_ns_chi03_sL::synapse0x36adb80() {
   return (neuron0x36a90d0()*-0.0428442);
}

double NNfunction_ns_chi03_sL::synapse0x36adbc0() {
   return (neuron0x36a9410()*-0.336175);
}

double NNfunction_ns_chi03_sL::synapse0x36adf40() {
   return (neuron0x36a4850()*-0.0255508);
}

double NNfunction_ns_chi03_sL::synapse0x36adf80() {
   return (neuron0x36a4b90()*-0.0261219);
}

double NNfunction_ns_chi03_sL::synapse0x36adfc0() {
   return (neuron0x36a4ed0()*0.146037);
}

double NNfunction_ns_chi03_sL::synapse0x36ae000() {
   return (neuron0x36a5210()*0.00984822);
}

double NNfunction_ns_chi03_sL::synapse0x36ae040() {
   return (neuron0x36a5550()*0.0219529);
}

double NNfunction_ns_chi03_sL::synapse0x36ae080() {
   return (neuron0x36a5890()*-0.0037055);
}

double NNfunction_ns_chi03_sL::synapse0x36ae0c0() {
   return (neuron0x36a5bd0()*0.0104472);
}

double NNfunction_ns_chi03_sL::synapse0x36ae100() {
   return (neuron0x36a5f10()*0.012841);
}

double NNfunction_ns_chi03_sL::synapse0x36ae140() {
   return (neuron0x36a6250()*0.00596686);
}

double NNfunction_ns_chi03_sL::synapse0x36ae180() {
   return (neuron0x36a6590()*-0.00471931);
}

double NNfunction_ns_chi03_sL::synapse0x36ae1c0() {
   return (neuron0x36a68d0()*0.00554136);
}

double NNfunction_ns_chi03_sL::synapse0x36ae200() {
   return (neuron0x36a6c10()*0.0082136);
}

double NNfunction_ns_chi03_sL::synapse0x36ae240() {
   return (neuron0x36a6f50()*-0.379218);
}

double NNfunction_ns_chi03_sL::synapse0x36ae280() {
   return (neuron0x36a7290()*-0.00589045);
}

double NNfunction_ns_chi03_sL::synapse0x36ae2c0() {
   return (neuron0x36a75d0()*-0.00337043);
}

double NNfunction_ns_chi03_sL::synapse0x36ae300() {
   return (neuron0x36a7910()*-0.00342806);
}

double NNfunction_ns_chi03_sL::synapse0x36add90() {
   return (neuron0x36a7c50()*-0.00382234);
}

double NNfunction_ns_chi03_sL::synapse0x36addd0() {
   return (neuron0x36a81b0()*-0.0139628);
}

double NNfunction_ns_chi03_sL::synapse0x36ae450() {
   return (neuron0x36a83d0()*-0.0119583);
}

double NNfunction_ns_chi03_sL::synapse0x36ae490() {
   return (neuron0x36a8710()*-0.00826867);
}

double NNfunction_ns_chi03_sL::synapse0x36ae4d0() {
   return (neuron0x36a8a50()*0.00920316);
}

double NNfunction_ns_chi03_sL::synapse0x36ae510() {
   return (neuron0x36a8d90()*0.00572415);
}

double NNfunction_ns_chi03_sL::synapse0x36ae550() {
   return (neuron0x36a90d0()*0.00521201);
}

double NNfunction_ns_chi03_sL::synapse0x36ae590() {
   return (neuron0x36a9410()*0.685299);
}

double NNfunction_ns_chi03_sL::synapse0x36a80a0() {
   return (neuron0x36a4850()*0.113781);
}

double NNfunction_ns_chi03_sL::synapse0x36a80e0() {
   return (neuron0x36a4b90()*-0.0188155);
}

double NNfunction_ns_chi03_sL::synapse0x36a8120() {
   return (neuron0x36a4ed0()*1.65721);
}

double NNfunction_ns_chi03_sL::synapse0x36a8160() {
   return (neuron0x36a5210()*-0.0104121);
}

double NNfunction_ns_chi03_sL::synapse0x36aeb20() {
   return (neuron0x36a5550()*-0.0291039);
}

double NNfunction_ns_chi03_sL::synapse0x36aeb60() {
   return (neuron0x36a5890()*0.0505642);
}

double NNfunction_ns_chi03_sL::synapse0x36aeba0() {
   return (neuron0x36a5bd0()*-0.00993601);
}

double NNfunction_ns_chi03_sL::synapse0x36aebe0() {
   return (neuron0x36a5f10()*0.0155253);
}

double NNfunction_ns_chi03_sL::synapse0x36aec20() {
   return (neuron0x36a6250()*-0.0647107);
}

double NNfunction_ns_chi03_sL::synapse0x36aec60() {
   return (neuron0x36a6590()*0.000921096);
}

double NNfunction_ns_chi03_sL::synapse0x36aeca0() {
   return (neuron0x36a68d0()*0.0114833);
}

double NNfunction_ns_chi03_sL::synapse0x36aece0() {
   return (neuron0x36a6c10()*0.000805578);
}

double NNfunction_ns_chi03_sL::synapse0x36aed20() {
   return (neuron0x36a6f50()*-0.0945887);
}

double NNfunction_ns_chi03_sL::synapse0x36aed60() {
   return (neuron0x36a7290()*-0.0638241);
}

double NNfunction_ns_chi03_sL::synapse0x36aeda0() {
   return (neuron0x36a75d0()*0.0206366);
}

double NNfunction_ns_chi03_sL::synapse0x36aede0() {
   return (neuron0x36a7910()*0.0134085);
}

double NNfunction_ns_chi03_sL::synapse0x36ae760() {
   return (neuron0x36a7c50()*-0.0980252);
}

double NNfunction_ns_chi03_sL::synapse0x36ae7a0() {
   return (neuron0x36a81b0()*0.0135091);
}

double NNfunction_ns_chi03_sL::synapse0x36aef30() {
   return (neuron0x36a83d0()*-0.0216778);
}

double NNfunction_ns_chi03_sL::synapse0x36aef70() {
   return (neuron0x36a8710()*-0.02619);
}

double NNfunction_ns_chi03_sL::synapse0x36aefb0() {
   return (neuron0x36a8a50()*-0.000735011);
}

double NNfunction_ns_chi03_sL::synapse0x36aeff0() {
   return (neuron0x36a8d90()*-0.0162404);
}

double NNfunction_ns_chi03_sL::synapse0x36af030() {
   return (neuron0x36a90d0()*0.0039193);
}

double NNfunction_ns_chi03_sL::synapse0x36af070() {
   return (neuron0x36a9410()*-1.65107);
}

double NNfunction_ns_chi03_sL::synapse0x36af3f0() {
   return (neuron0x36a4850()*-1.59883);
}

double NNfunction_ns_chi03_sL::synapse0x36af430() {
   return (neuron0x36a4b90()*0.212246);
}

double NNfunction_ns_chi03_sL::synapse0x36af470() {
   return (neuron0x36a4ed0()*1.38013);
}

double NNfunction_ns_chi03_sL::synapse0x36af4b0() {
   return (neuron0x36a5210()*-0.890167);
}

double NNfunction_ns_chi03_sL::synapse0x36af4f0() {
   return (neuron0x36a5550()*-0.497512);
}

double NNfunction_ns_chi03_sL::synapse0x36af530() {
   return (neuron0x36a5890()*0.107379);
}

double NNfunction_ns_chi03_sL::synapse0x36af570() {
   return (neuron0x36a5bd0()*0.0998113);
}

double NNfunction_ns_chi03_sL::synapse0x36af5b0() {
   return (neuron0x36a5f10()*0.072102);
}

double NNfunction_ns_chi03_sL::synapse0x36af5f0() {
   return (neuron0x36a6250()*0.302077);
}

double NNfunction_ns_chi03_sL::synapse0x36af630() {
   return (neuron0x36a6590()*-0.154134);
}

double NNfunction_ns_chi03_sL::synapse0x36af670() {
   return (neuron0x36a68d0()*-0.263506);
}

double NNfunction_ns_chi03_sL::synapse0x36af6b0() {
   return (neuron0x36a6c10()*-0.197812);
}

double NNfunction_ns_chi03_sL::synapse0x36af6f0() {
   return (neuron0x36a6f50()*0.255071);
}

double NNfunction_ns_chi03_sL::synapse0x36af730() {
   return (neuron0x36a7290()*0.0115639);
}

double NNfunction_ns_chi03_sL::synapse0x36af770() {
   return (neuron0x36a75d0()*-0.111873);
}

double NNfunction_ns_chi03_sL::synapse0x36af7b0() {
   return (neuron0x36a7910()*0.104873);
}

double NNfunction_ns_chi03_sL::synapse0x36af240() {
   return (neuron0x36a7c50()*-0.875099);
}

double NNfunction_ns_chi03_sL::synapse0x36af280() {
   return (neuron0x36a81b0()*0.024003);
}

double NNfunction_ns_chi03_sL::synapse0x36af900() {
   return (neuron0x36a83d0()*0.774612);
}

double NNfunction_ns_chi03_sL::synapse0x36af940() {
   return (neuron0x36a8710()*-0.0717898);
}

double NNfunction_ns_chi03_sL::synapse0x36af980() {
   return (neuron0x36a8a50()*-0.389092);
}

double NNfunction_ns_chi03_sL::synapse0x36af9c0() {
   return (neuron0x36a8d90()*0.368912);
}

double NNfunction_ns_chi03_sL::synapse0x36afa00() {
   return (neuron0x36a90d0()*0.535231);
}

double NNfunction_ns_chi03_sL::synapse0x36afa40() {
   return (neuron0x36a9410()*-1.14738);
}

double NNfunction_ns_chi03_sL::synapse0x36afdc0() {
   return (neuron0x36a4850()*1.02659);
}

double NNfunction_ns_chi03_sL::synapse0x36afe00() {
   return (neuron0x36a4b90()*-0.175469);
}

double NNfunction_ns_chi03_sL::synapse0x36afe40() {
   return (neuron0x36a4ed0()*-1.1079);
}

double NNfunction_ns_chi03_sL::synapse0x36afe80() {
   return (neuron0x36a5210()*0.621647);
}

double NNfunction_ns_chi03_sL::synapse0x36afec0() {
   return (neuron0x36a5550()*0.37503);
}

double NNfunction_ns_chi03_sL::synapse0x36aff00() {
   return (neuron0x36a5890()*0.040205);
}

double NNfunction_ns_chi03_sL::synapse0x36aff40() {
   return (neuron0x36a5bd0()*-0.204994);
}

double NNfunction_ns_chi03_sL::synapse0x36aff80() {
   return (neuron0x36a5f10()*-0.0844826);
}

double NNfunction_ns_chi03_sL::synapse0x36affc0() {
   return (neuron0x36a6250()*-0.277551);
}

double NNfunction_ns_chi03_sL::synapse0x36b0000() {
   return (neuron0x36a6590()*0.0153898);
}

double NNfunction_ns_chi03_sL::synapse0x36b0040() {
   return (neuron0x36a68d0()*0.0887526);
}

double NNfunction_ns_chi03_sL::synapse0x36b0080() {
   return (neuron0x36a6c10()*0.0225184);
}

double NNfunction_ns_chi03_sL::synapse0x36b00c0() {
   return (neuron0x36a6f50()*-0.0830958);
}

double NNfunction_ns_chi03_sL::synapse0x36b0100() {
   return (neuron0x36a7290()*0.137563);
}

double NNfunction_ns_chi03_sL::synapse0x36b0140() {
   return (neuron0x36a75d0()*0.163695);
}

double NNfunction_ns_chi03_sL::synapse0x36b0180() {
   return (neuron0x36a7910()*-0.074673);
}

double NNfunction_ns_chi03_sL::synapse0x36afc10() {
   return (neuron0x36a7c50()*0.822495);
}

double NNfunction_ns_chi03_sL::synapse0x36afc50() {
   return (neuron0x36a81b0()*-0.00994662);
}

double NNfunction_ns_chi03_sL::synapse0x36ac9e0() {
   return (neuron0x36a83d0()*-0.579761);
}

double NNfunction_ns_chi03_sL::synapse0x36aca20() {
   return (neuron0x36a8710()*-0.00993352);
}

double NNfunction_ns_chi03_sL::synapse0x36aca60() {
   return (neuron0x36a8a50()*0.231331);
}

double NNfunction_ns_chi03_sL::synapse0x36acaa0() {
   return (neuron0x36a8d90()*-0.226743);
}

double NNfunction_ns_chi03_sL::synapse0x36acae0() {
   return (neuron0x36a90d0()*-0.3199);
}

double NNfunction_ns_chi03_sL::synapse0x36acb20() {
   return (neuron0x36a9410()*0.746143);
}

double NNfunction_ns_chi03_sL::synapse0x36acea0() {
   return (neuron0x36a4850()*0.0103711);
}

double NNfunction_ns_chi03_sL::synapse0x36acee0() {
   return (neuron0x36a4b90()*0.0263342);
}

double NNfunction_ns_chi03_sL::synapse0x36acf20() {
   return (neuron0x36a4ed0()*2.68685);
}

double NNfunction_ns_chi03_sL::synapse0x36acf60() {
   return (neuron0x36a5210()*-0.0178304);
}

double NNfunction_ns_chi03_sL::synapse0x36acfa0() {
   return (neuron0x36a5550()*0.00487071);
}

double NNfunction_ns_chi03_sL::synapse0x36acfe0() {
   return (neuron0x36a5890()*-0.00821484);
}

double NNfunction_ns_chi03_sL::synapse0x36ad020() {
   return (neuron0x36a5bd0()*-0.0133356);
}

double NNfunction_ns_chi03_sL::synapse0x36ad060() {
   return (neuron0x36a5f10()*0.0104348);
}

double NNfunction_ns_chi03_sL::synapse0x36ad0a0() {
   return (neuron0x36a6250()*0.00656305);
}

double NNfunction_ns_chi03_sL::synapse0x36ad0e0() {
   return (neuron0x36a6590()*0.00986681);
}

double NNfunction_ns_chi03_sL::synapse0x36ad120() {
   return (neuron0x36a68d0()*-0.0281298);
}

double NNfunction_ns_chi03_sL::synapse0x36ad160() {
   return (neuron0x36a6c10()*0.0136471);
}

double NNfunction_ns_chi03_sL::synapse0x36ad1a0() {
   return (neuron0x36a6f50()*-0.1421);
}

double NNfunction_ns_chi03_sL::synapse0x36b12e0() {
   return (neuron0x36a7290()*0.03484);
}

double NNfunction_ns_chi03_sL::synapse0x36b1320() {
   return (neuron0x36a75d0()*-0.00631047);
}

double NNfunction_ns_chi03_sL::synapse0x36b1360() {
   return (neuron0x36a7910()*-0.0167997);
}

double NNfunction_ns_chi03_sL::synapse0x36accf0() {
   return (neuron0x36a7c50()*-0.0141974);
}

double NNfunction_ns_chi03_sL::synapse0x36acd30() {
   return (neuron0x36a81b0()*-0.0126853);
}

double NNfunction_ns_chi03_sL::synapse0x36b14b0() {
   return (neuron0x36a83d0()*-0.00833526);
}

double NNfunction_ns_chi03_sL::synapse0x36b14f0() {
   return (neuron0x36a8710()*-0.0196131);
}

double NNfunction_ns_chi03_sL::synapse0x36b1530() {
   return (neuron0x36a8a50()*0.0411906);
}

double NNfunction_ns_chi03_sL::synapse0x36b1570() {
   return (neuron0x36a8d90()*0.0216939);
}

double NNfunction_ns_chi03_sL::synapse0x36b15b0() {
   return (neuron0x36a90d0()*-0.0107771);
}

double NNfunction_ns_chi03_sL::synapse0x36b15f0() {
   return (neuron0x36a9410()*-2.4049);
}

double NNfunction_ns_chi03_sL::synapse0x36b1970() {
   return (neuron0x36a4850()*0.0424483);
}

double NNfunction_ns_chi03_sL::synapse0x36b19b0() {
   return (neuron0x36a4b90()*-0.194355);
}

double NNfunction_ns_chi03_sL::synapse0x36b19f0() {
   return (neuron0x36a4ed0()*0.89841);
}

double NNfunction_ns_chi03_sL::synapse0x36b1a30() {
   return (neuron0x36a5210()*0.106431);
}

double NNfunction_ns_chi03_sL::synapse0x36b1a70() {
   return (neuron0x36a5550()*-0.031252);
}

double NNfunction_ns_chi03_sL::synapse0x36b1ab0() {
   return (neuron0x36a5890()*-0.350329);
}

double NNfunction_ns_chi03_sL::synapse0x36b1af0() {
   return (neuron0x36a5bd0()*-0.265089);
}

double NNfunction_ns_chi03_sL::synapse0x36b1b30() {
   return (neuron0x36a5f10()*-0.00133102);
}

double NNfunction_ns_chi03_sL::synapse0x36b1b70() {
   return (neuron0x36a6250()*-0.38281);
}

double NNfunction_ns_chi03_sL::synapse0x36b1bb0() {
   return (neuron0x36a6590()*0.337568);
}

double NNfunction_ns_chi03_sL::synapse0x36b1bf0() {
   return (neuron0x36a68d0()*-0.177244);
}

double NNfunction_ns_chi03_sL::synapse0x36b1c30() {
   return (neuron0x36a6c10()*-0.0464325);
}

double NNfunction_ns_chi03_sL::synapse0x36b1c70() {
   return (neuron0x36a6f50()*0.989743);
}

double NNfunction_ns_chi03_sL::synapse0x36b1cb0() {
   return (neuron0x36a7290()*-0.0165521);
}

double NNfunction_ns_chi03_sL::synapse0x36b1cf0() {
   return (neuron0x36a75d0()*-0.190783);
}

double NNfunction_ns_chi03_sL::synapse0x36b1d30() {
   return (neuron0x36a7910()*-0.0832322);
}

double NNfunction_ns_chi03_sL::synapse0x36b17c0() {
   return (neuron0x36a7c50()*-0.294465);
}

double NNfunction_ns_chi03_sL::synapse0x36b1800() {
   return (neuron0x36a81b0()*0.432817);
}

double NNfunction_ns_chi03_sL::synapse0x36b1e80() {
   return (neuron0x36a83d0()*-0.0553703);
}

double NNfunction_ns_chi03_sL::synapse0x36b1ec0() {
   return (neuron0x36a8710()*-0.291631);
}

double NNfunction_ns_chi03_sL::synapse0x36b1f00() {
   return (neuron0x36a8a50()*-0.101226);
}

double NNfunction_ns_chi03_sL::synapse0x36b1f40() {
   return (neuron0x36a8d90()*-0.406521);
}

double NNfunction_ns_chi03_sL::synapse0x36b1f80() {
   return (neuron0x36a90d0()*-0.396217);
}

double NNfunction_ns_chi03_sL::synapse0x36b1fc0() {
   return (neuron0x36a9410()*0.307349);
}

double NNfunction_ns_chi03_sL::synapse0x36b2340() {
   return (neuron0x36a4850()*0.00335427);
}

double NNfunction_ns_chi03_sL::synapse0x36b2380() {
   return (neuron0x36a4b90()*17.6651);
}

double NNfunction_ns_chi03_sL::synapse0x36b23c0() {
   return (neuron0x36a4ed0()*-6.62929);
}

double NNfunction_ns_chi03_sL::synapse0x36b2400() {
   return (neuron0x36a5210()*-0.00245929);
}

double NNfunction_ns_chi03_sL::synapse0x36b2440() {
   return (neuron0x36a5550()*-0.0667383);
}

double NNfunction_ns_chi03_sL::synapse0x36b2480() {
   return (neuron0x36a5890()*0.0104428);
}

double NNfunction_ns_chi03_sL::synapse0x36b24c0() {
   return (neuron0x36a5bd0()*0.0391635);
}

double NNfunction_ns_chi03_sL::synapse0x36b2500() {
   return (neuron0x36a5f10()*-0.0272882);
}

double NNfunction_ns_chi03_sL::synapse0x36b2540() {
   return (neuron0x36a6250()*-0.0160439);
}

double NNfunction_ns_chi03_sL::synapse0x36b2580() {
   return (neuron0x36a6590()*0.0303984);
}

double NNfunction_ns_chi03_sL::synapse0x36b25c0() {
   return (neuron0x36a68d0()*-0.0127997);
}

double NNfunction_ns_chi03_sL::synapse0x36b2600() {
   return (neuron0x36a6c10()*-0.0336332);
}

double NNfunction_ns_chi03_sL::synapse0x36b2640() {
   return (neuron0x36a6f50()*-0.077478);
}

double NNfunction_ns_chi03_sL::synapse0x36b2680() {
   return (neuron0x36a7290()*-0.00225021);
}

double NNfunction_ns_chi03_sL::synapse0x36b26c0() {
   return (neuron0x36a75d0()*-0.00887968);
}

double NNfunction_ns_chi03_sL::synapse0x36b2700() {
   return (neuron0x36a7910()*0.0145258);
}

double NNfunction_ns_chi03_sL::synapse0x36b2190() {
   return (neuron0x36a7c50()*0.0447931);
}

double NNfunction_ns_chi03_sL::synapse0x36b21d0() {
   return (neuron0x36a81b0()*-0.0530326);
}

double NNfunction_ns_chi03_sL::synapse0x36b2850() {
   return (neuron0x36a83d0()*0.013483);
}

double NNfunction_ns_chi03_sL::synapse0x36b2890() {
   return (neuron0x36a8710()*0.0339554);
}

double NNfunction_ns_chi03_sL::synapse0x36b28d0() {
   return (neuron0x36a8a50()*0.0224844);
}

double NNfunction_ns_chi03_sL::synapse0x36b2910() {
   return (neuron0x36a8d90()*0.00397934);
}

double NNfunction_ns_chi03_sL::synapse0x36b2950() {
   return (neuron0x36a90d0()*-0.0487384);
}

double NNfunction_ns_chi03_sL::synapse0x36b2990() {
   return (neuron0x36a9410()*0.136907);
}

double NNfunction_ns_chi03_sL::synapse0x36b2d10() {
   return (neuron0x36a4850()*0.119217);
}

double NNfunction_ns_chi03_sL::synapse0x36b2d50() {
   return (neuron0x36a4b90()*0.893078);
}

double NNfunction_ns_chi03_sL::synapse0x36b2d90() {
   return (neuron0x36a4ed0()*0.398278);
}

double NNfunction_ns_chi03_sL::synapse0x36b2dd0() {
   return (neuron0x36a5210()*-1.2404);
}

double NNfunction_ns_chi03_sL::synapse0x36b2e10() {
   return (neuron0x36a5550()*0.0409566);
}

double NNfunction_ns_chi03_sL::synapse0x36b2e50() {
   return (neuron0x36a5890()*-0.0771415);
}

double NNfunction_ns_chi03_sL::synapse0x36b2e90() {
   return (neuron0x36a5bd0()*0.60523);
}

double NNfunction_ns_chi03_sL::synapse0x36b2ed0() {
   return (neuron0x36a5f10()*0.69097);
}

double NNfunction_ns_chi03_sL::synapse0x36b2f10() {
   return (neuron0x36a6250()*-0.273353);
}

double NNfunction_ns_chi03_sL::synapse0x36b2f50() {
   return (neuron0x36a6590()*0.268688);
}

double NNfunction_ns_chi03_sL::synapse0x36b2f90() {
   return (neuron0x36a68d0()*0.13237);
}

double NNfunction_ns_chi03_sL::synapse0x36b2fd0() {
   return (neuron0x36a6c10()*0.637738);
}

double NNfunction_ns_chi03_sL::synapse0x36b3010() {
   return (neuron0x36a6f50()*-0.833489);
}

double NNfunction_ns_chi03_sL::synapse0x36b3050() {
   return (neuron0x36a7290()*-0.401891);
}

double NNfunction_ns_chi03_sL::synapse0x36b3090() {
   return (neuron0x36a75d0()*0.345406);
}

double NNfunction_ns_chi03_sL::synapse0x36b30d0() {
   return (neuron0x36a7910()*-0.00654013);
}

double NNfunction_ns_chi03_sL::synapse0x36b2b60() {
   return (neuron0x36a7c50()*0.317367);
}

double NNfunction_ns_chi03_sL::synapse0x36b2ba0() {
   return (neuron0x36a81b0()*-0.316213);
}

double NNfunction_ns_chi03_sL::synapse0x36b3220() {
   return (neuron0x36a83d0()*-0.426293);
}

double NNfunction_ns_chi03_sL::synapse0x36b3260() {
   return (neuron0x36a8710()*-0.385095);
}

double NNfunction_ns_chi03_sL::synapse0x36b32a0() {
   return (neuron0x36a8a50()*0.603195);
}

double NNfunction_ns_chi03_sL::synapse0x36b32e0() {
   return (neuron0x36a8d90()*-0.532665);
}

double NNfunction_ns_chi03_sL::synapse0x36b3320() {
   return (neuron0x36a90d0()*-0.376476);
}

double NNfunction_ns_chi03_sL::synapse0x36b3360() {
   return (neuron0x36a9410()*-0.146462);
}

double NNfunction_ns_chi03_sL::synapse0x36b36e0() {
   return (neuron0x36a4850()*0.102099);
}

double NNfunction_ns_chi03_sL::synapse0x36a4a70() {
   return (neuron0x36a4b90()*-0.0959958);
}

double NNfunction_ns_chi03_sL::synapse0x36a4ab0() {
   return (neuron0x36a4ed0()*-0.829423);
}

double NNfunction_ns_chi03_sL::synapse0x36a4db0() {
   return (neuron0x36a5210()*0.10045);
}

double NNfunction_ns_chi03_sL::synapse0x36a4df0() {
   return (neuron0x36a5550()*0.0672678);
}

double NNfunction_ns_chi03_sL::synapse0x36a50f0() {
   return (neuron0x36a5890()*-0.441995);
}

double NNfunction_ns_chi03_sL::synapse0x36a5130() {
   return (neuron0x36a5bd0()*1.33242);
}

double NNfunction_ns_chi03_sL::synapse0x36a5430() {
   return (neuron0x36a5f10()*-0.266463);
}

double NNfunction_ns_chi03_sL::synapse0x36a5470() {
   return (neuron0x36a6250()*-0.23058);
}

double NNfunction_ns_chi03_sL::synapse0x36a5770() {
   return (neuron0x36a6590()*0.26188);
}

double NNfunction_ns_chi03_sL::synapse0x36a57b0() {
   return (neuron0x36a68d0()*-0.470019);
}

double NNfunction_ns_chi03_sL::synapse0x36a5ab0() {
   return (neuron0x36a6c10()*-0.855081);
}

double NNfunction_ns_chi03_sL::synapse0x36a5af0() {
   return (neuron0x36a6f50()*-0.261222);
}

double NNfunction_ns_chi03_sL::synapse0x36a5df0() {
   return (neuron0x36a7290()*-0.528961);
}

double NNfunction_ns_chi03_sL::synapse0x36a5e30() {
   return (neuron0x36a75d0()*0.294489);
}

double NNfunction_ns_chi03_sL::synapse0x36a6130() {
   return (neuron0x36a7910()*0.120029);
}

double NNfunction_ns_chi03_sL::synapse0x36a6170() {
   return (neuron0x36a7c50()*-0.0799621);
}

double NNfunction_ns_chi03_sL::synapse0x36a6470() {
   return (neuron0x36a81b0()*0.386167);
}

double NNfunction_ns_chi03_sL::synapse0x36a64b0() {
   return (neuron0x36a83d0()*0.0377816);
}

double NNfunction_ns_chi03_sL::synapse0x36a67b0() {
   return (neuron0x36a8710()*0.688031);
}

double NNfunction_ns_chi03_sL::synapse0x36a67f0() {
   return (neuron0x36a8a50()*0.0197094);
}

double NNfunction_ns_chi03_sL::synapse0x36a6af0() {
   return (neuron0x36a8d90()*0.187974);
}

double NNfunction_ns_chi03_sL::synapse0x36a6b30() {
   return (neuron0x36a90d0()*-1.0185);
}

double NNfunction_ns_chi03_sL::synapse0x36a6e30() {
   return (neuron0x36a9410()*0.969032);
}

double NNfunction_ns_chi03_sL::synapse0x36a6e70() {
   return (neuron0x36a4850()*0.0791588);
}

double NNfunction_ns_chi03_sL::synapse0x36a7b30() {
   return (neuron0x36a4b90()*0.188317);
}

double NNfunction_ns_chi03_sL::synapse0x36a7b70() {
   return (neuron0x36a4ed0()*-0.631389);
}

double NNfunction_ns_chi03_sL::synapse0x36b3530() {
   return (neuron0x36a5210()*0.0823419);
}

double NNfunction_ns_chi03_sL::synapse0x36b3570() {
   return (neuron0x36a5550()*-0.0616735);
}

double NNfunction_ns_chi03_sL::synapse0x36a7e70() {
   return (neuron0x36a5890()*0.00535314);
}

double NNfunction_ns_chi03_sL::synapse0x36a7eb0() {
   return (neuron0x36a5bd0()*-0.0253363);
}

double NNfunction_ns_chi03_sL::synapse0x345f8d0() {
   return (neuron0x36a5f10()*-0.000420785);
}

double NNfunction_ns_chi03_sL::synapse0x345f910() {
   return (neuron0x36a6250()*-0.00459554);
}

double NNfunction_ns_chi03_sL::synapse0x36a85f0() {
   return (neuron0x36a6590()*0.00553827);
}

double NNfunction_ns_chi03_sL::synapse0x36a8630() {
   return (neuron0x36a68d0()*-0.00803711);
}

double NNfunction_ns_chi03_sL::synapse0x36a8930() {
   return (neuron0x36a6c10()*-0.00890721);
}

double NNfunction_ns_chi03_sL::synapse0x36a8970() {
   return (neuron0x36a6f50()*-1.04277);
}

double NNfunction_ns_chi03_sL::synapse0x36a8c70() {
   return (neuron0x36a7290()*-0.00659896);
}

double NNfunction_ns_chi03_sL::synapse0x36a8cb0() {
   return (neuron0x36a75d0()*0.0150713);
}

double NNfunction_ns_chi03_sL::synapse0x36a8fb0() {
   return (neuron0x36a7910()*0.0574151);
}

double NNfunction_ns_chi03_sL::synapse0x36a8ff0() {
   return (neuron0x36a7c50()*-0.00308309);
}

double NNfunction_ns_chi03_sL::synapse0x36a92f0() {
   return (neuron0x36a81b0()*-0.0177813);
}

double NNfunction_ns_chi03_sL::synapse0x36a9330() {
   return (neuron0x36a83d0()*0.0723781);
}

double NNfunction_ns_chi03_sL::synapse0x36a9630() {
   return (neuron0x36a8710()*-0.000202084);
}

double NNfunction_ns_chi03_sL::synapse0x36a9670() {
   return (neuron0x36a8a50()*0.00616503);
}

double NNfunction_ns_chi03_sL::synapse0x36a7170() {
   return (neuron0x36a8d90()*-0.0157753);
}

double NNfunction_ns_chi03_sL::synapse0x36a71b0() {
   return (neuron0x36a90d0()*0.037123);
}

double NNfunction_ns_chi03_sL::synapse0x36b5450() {
   return (neuron0x36a9410()*0.00308485);
}

double NNfunction_ns_chi03_sL::synapse0x36b57d0() {
   return (neuron0x36a4850()*-0.016785);
}

double NNfunction_ns_chi03_sL::synapse0x36b5810() {
   return (neuron0x36a4b90()*-0.020249);
}

double NNfunction_ns_chi03_sL::synapse0x36b5850() {
   return (neuron0x36a4ed0()*-0.0777107);
}

double NNfunction_ns_chi03_sL::synapse0x36b5890() {
   return (neuron0x36a5210()*-2.47735);
}

double NNfunction_ns_chi03_sL::synapse0x36b58d0() {
   return (neuron0x36a5550()*-0.00613043);
}

double NNfunction_ns_chi03_sL::synapse0x36b5910() {
   return (neuron0x36a5890()*0.0284899);
}

double NNfunction_ns_chi03_sL::synapse0x36b5950() {
   return (neuron0x36a5bd0()*-0.00473751);
}

double NNfunction_ns_chi03_sL::synapse0x36b5990() {
   return (neuron0x36a5f10()*-0.0561085);
}

double NNfunction_ns_chi03_sL::synapse0x36b59d0() {
   return (neuron0x36a6250()*0.00364925);
}

double NNfunction_ns_chi03_sL::synapse0x36b5a10() {
   return (neuron0x36a6590()*0.0226768);
}

double NNfunction_ns_chi03_sL::synapse0x36b5a50() {
   return (neuron0x36a68d0()*0.0058768);
}

double NNfunction_ns_chi03_sL::synapse0x36b5a90() {
   return (neuron0x36a6c10()*0.00160147);
}

double NNfunction_ns_chi03_sL::synapse0x36b5ad0() {
   return (neuron0x36a6f50()*0.538728);
}

double NNfunction_ns_chi03_sL::synapse0x36b5b10() {
   return (neuron0x36a7290()*0.0187741);
}

double NNfunction_ns_chi03_sL::synapse0x36b5b50() {
   return (neuron0x36a75d0()*-0.0159018);
}

double NNfunction_ns_chi03_sL::synapse0x36b5b90() {
   return (neuron0x36a7910()*-0.0317244);
}

double NNfunction_ns_chi03_sL::synapse0x36b5620() {
   return (neuron0x36a7c50()*0.00579042);
}

double NNfunction_ns_chi03_sL::synapse0x36b5660() {
   return (neuron0x36a81b0()*-0.014758);
}

double NNfunction_ns_chi03_sL::synapse0x36b5ce0() {
   return (neuron0x36a83d0()*0.0250242);
}

double NNfunction_ns_chi03_sL::synapse0x36b5d20() {
   return (neuron0x36a8710()*-0.00808522);
}

double NNfunction_ns_chi03_sL::synapse0x36b5d60() {
   return (neuron0x36a8a50()*0.0290155);
}

double NNfunction_ns_chi03_sL::synapse0x36b5da0() {
   return (neuron0x36a8d90()*0.00220477);
}

double NNfunction_ns_chi03_sL::synapse0x36b5de0() {
   return (neuron0x36a90d0()*0.0117258);
}

double NNfunction_ns_chi03_sL::synapse0x36b5e20() {
   return (neuron0x36a9410()*-0.00523917);
}

double NNfunction_ns_chi03_sL::synapse0x36b61a0() {
   return (neuron0x36a4850()*-0.133413);
}

double NNfunction_ns_chi03_sL::synapse0x36b61e0() {
   return (neuron0x36a4b90()*6.06706);
}

double NNfunction_ns_chi03_sL::synapse0x36b6220() {
   return (neuron0x36a4ed0()*0.203662);
}

double NNfunction_ns_chi03_sL::synapse0x36b6260() {
   return (neuron0x36a5210()*-0.0144146);
}

double NNfunction_ns_chi03_sL::synapse0x36b62a0() {
   return (neuron0x36a5550()*0.0180118);
}

double NNfunction_ns_chi03_sL::synapse0x36b62e0() {
   return (neuron0x36a5890()*0.020556);
}

double NNfunction_ns_chi03_sL::synapse0x36b6320() {
   return (neuron0x36a5bd0()*0.0122424);
}

double NNfunction_ns_chi03_sL::synapse0x36b6360() {
   return (neuron0x36a5f10()*-0.0182049);
}

double NNfunction_ns_chi03_sL::synapse0x36b63a0() {
   return (neuron0x36a6250()*-0.0183896);
}

double NNfunction_ns_chi03_sL::synapse0x36b63e0() {
   return (neuron0x36a6590()*-0.00963846);
}

double NNfunction_ns_chi03_sL::synapse0x36b6420() {
   return (neuron0x36a68d0()*0.016756);
}

double NNfunction_ns_chi03_sL::synapse0x36b6460() {
   return (neuron0x36a6c10()*-0.00261966);
}

double NNfunction_ns_chi03_sL::synapse0x36b64a0() {
   return (neuron0x36a6f50()*-0.0902562);
}

double NNfunction_ns_chi03_sL::synapse0x36b64e0() {
   return (neuron0x36a7290()*-0.00881155);
}

double NNfunction_ns_chi03_sL::synapse0x36b6520() {
   return (neuron0x36a75d0()*0.0142009);
}

double NNfunction_ns_chi03_sL::synapse0x36b6560() {
   return (neuron0x36a7910()*-0.028727);
}

double NNfunction_ns_chi03_sL::synapse0x36b5ff0() {
   return (neuron0x36a7c50()*0.0440463);
}

double NNfunction_ns_chi03_sL::synapse0x36b6030() {
   return (neuron0x36a81b0()*-0.0260506);
}

double NNfunction_ns_chi03_sL::synapse0x36b66b0() {
   return (neuron0x36a83d0()*0.0015587);
}

double NNfunction_ns_chi03_sL::synapse0x36b66f0() {
   return (neuron0x36a8710()*0.000843452);
}

double NNfunction_ns_chi03_sL::synapse0x36b6730() {
   return (neuron0x36a8a50()*-0.0485399);
}

double NNfunction_ns_chi03_sL::synapse0x36b6770() {
   return (neuron0x36a8d90()*0.0132437);
}

double NNfunction_ns_chi03_sL::synapse0x36b67b0() {
   return (neuron0x36a90d0()*0.00556064);
}

double NNfunction_ns_chi03_sL::synapse0x36b67f0() {
   return (neuron0x36a9410()*1.44812);
}

double NNfunction_ns_chi03_sL::synapse0x36b6b70() {
   return (neuron0x36a4850()*-0.0197178);
}

double NNfunction_ns_chi03_sL::synapse0x36b6bb0() {
   return (neuron0x36a4b90()*-0.0357216);
}

double NNfunction_ns_chi03_sL::synapse0x36b6bf0() {
   return (neuron0x36a4ed0()*-0.0644887);
}

double NNfunction_ns_chi03_sL::synapse0x36b6c30() {
   return (neuron0x36a5210()*-0.206169);
}

double NNfunction_ns_chi03_sL::synapse0x36b6c70() {
   return (neuron0x36a5550()*0.0146341);
}

double NNfunction_ns_chi03_sL::synapse0x36b6cb0() {
   return (neuron0x36a5890()*0.0212476);
}

double NNfunction_ns_chi03_sL::synapse0x36b6cf0() {
   return (neuron0x36a5bd0()*0.0173958);
}

double NNfunction_ns_chi03_sL::synapse0x36b6d30() {
   return (neuron0x36a5f10()*-0.0010878);
}

double NNfunction_ns_chi03_sL::synapse0x36b6d70() {
   return (neuron0x36a6250()*0.0023228);
}

double NNfunction_ns_chi03_sL::synapse0x36b6db0() {
   return (neuron0x36a6590()*0.00577557);
}

double NNfunction_ns_chi03_sL::synapse0x36b6df0() {
   return (neuron0x36a68d0()*0.00726585);
}

double NNfunction_ns_chi03_sL::synapse0x36b6e30() {
   return (neuron0x36a6c10()*0.0146736);
}

double NNfunction_ns_chi03_sL::synapse0x36b6e70() {
   return (neuron0x36a6f50()*1.10397);
}

double NNfunction_ns_chi03_sL::synapse0x36b6eb0() {
   return (neuron0x36a7290()*0.0053457);
}

double NNfunction_ns_chi03_sL::synapse0x36b6ef0() {
   return (neuron0x36a75d0()*-0.00311611);
}

double NNfunction_ns_chi03_sL::synapse0x36b6f30() {
   return (neuron0x36a7910()*0.00336138);
}

double NNfunction_ns_chi03_sL::synapse0x36b69c0() {
   return (neuron0x36a7c50()*-0.00724134);
}

double NNfunction_ns_chi03_sL::synapse0x36b6a00() {
   return (neuron0x36a81b0()*0.0207359);
}

double NNfunction_ns_chi03_sL::synapse0x36b7080() {
   return (neuron0x36a83d0()*-0.00695172);
}

double NNfunction_ns_chi03_sL::synapse0x36b70c0() {
   return (neuron0x36a8710()*0.0235814);
}

double NNfunction_ns_chi03_sL::synapse0x36b7100() {
   return (neuron0x36a8a50()*0.00426442);
}

double NNfunction_ns_chi03_sL::synapse0x36b7140() {
   return (neuron0x36a8d90()*0.0119332);
}

double NNfunction_ns_chi03_sL::synapse0x36b7180() {
   return (neuron0x36a90d0()*-0.00577126);
}

double NNfunction_ns_chi03_sL::synapse0x36b71c0() {
   return (neuron0x36a9410()*-0.00394757);
}

double NNfunction_ns_chi03_sL::synapse0x36b7540() {
   return (neuron0x36a4850()*-0.00201497);
}

double NNfunction_ns_chi03_sL::synapse0x36b7580() {
   return (neuron0x36a4b90()*-16.6233);
}

double NNfunction_ns_chi03_sL::synapse0x36b75c0() {
   return (neuron0x36a4ed0()*6.14809);
}

double NNfunction_ns_chi03_sL::synapse0x36b7600() {
   return (neuron0x36a5210()*-0.00676629);
}

double NNfunction_ns_chi03_sL::synapse0x36b7640() {
   return (neuron0x36a5550()*0.0436694);
}

double NNfunction_ns_chi03_sL::synapse0x36b7680() {
   return (neuron0x36a5890()*-0.0158929);
}

double NNfunction_ns_chi03_sL::synapse0x36b76c0() {
   return (neuron0x36a5bd0()*-0.0277037);
}

double NNfunction_ns_chi03_sL::synapse0x36b7700() {
   return (neuron0x36a5f10()*0.0324253);
}

double NNfunction_ns_chi03_sL::synapse0x36b7740() {
   return (neuron0x36a6250()*0.0177867);
}

double NNfunction_ns_chi03_sL::synapse0x36b7780() {
   return (neuron0x36a6590()*-0.0248156);
}

double NNfunction_ns_chi03_sL::synapse0x36b77c0() {
   return (neuron0x36a68d0()*0.00895965);
}

double NNfunction_ns_chi03_sL::synapse0x36b7800() {
   return (neuron0x36a6c10()*0.0169486);
}

double NNfunction_ns_chi03_sL::synapse0x36b7840() {
   return (neuron0x36a6f50()*0.000883663);
}

double NNfunction_ns_chi03_sL::synapse0x36b7880() {
   return (neuron0x36a7290()*-0.00271139);
}

double NNfunction_ns_chi03_sL::synapse0x36b78c0() {
   return (neuron0x36a75d0()*0.00748609);
}

double NNfunction_ns_chi03_sL::synapse0x36b7900() {
   return (neuron0x36a7910()*-0.00258261);
}

double NNfunction_ns_chi03_sL::synapse0x36b7390() {
   return (neuron0x36a7c50()*-0.0249435);
}

double NNfunction_ns_chi03_sL::synapse0x36b73d0() {
   return (neuron0x36a81b0()*0.0396351);
}

double NNfunction_ns_chi03_sL::synapse0x36b7a50() {
   return (neuron0x36a83d0()*-0.0126719);
}

double NNfunction_ns_chi03_sL::synapse0x36b7a90() {
   return (neuron0x36a8710()*-0.0303915);
}

double NNfunction_ns_chi03_sL::synapse0x36b7ad0() {
   return (neuron0x36a8a50()*-0.0111306);
}

double NNfunction_ns_chi03_sL::synapse0x36b7b10() {
   return (neuron0x36a8d90()*0.00239597);
}

double NNfunction_ns_chi03_sL::synapse0x36b7b50() {
   return (neuron0x36a90d0()*0.0279265);
}

double NNfunction_ns_chi03_sL::synapse0x36b7b90() {
   return (neuron0x36a9410()*-0.10924);
}

double NNfunction_ns_chi03_sL::synapse0x36b7f10() {
   return (neuron0x36a4850()*-0.0262102);
}

double NNfunction_ns_chi03_sL::synapse0x36b7f50() {
   return (neuron0x36a4b90()*-4.82885);
}

double NNfunction_ns_chi03_sL::synapse0x36b7f90() {
   return (neuron0x36a4ed0()*-0.112197);
}

double NNfunction_ns_chi03_sL::synapse0x36b7fd0() {
   return (neuron0x36a5210()*-0.00876193);
}

double NNfunction_ns_chi03_sL::synapse0x36b8010() {
   return (neuron0x36a5550()*0.0112665);
}

double NNfunction_ns_chi03_sL::synapse0x36b8050() {
   return (neuron0x36a5890()*0.0187538);
}

double NNfunction_ns_chi03_sL::synapse0x36b8090() {
   return (neuron0x36a5bd0()*0.00487862);
}

double NNfunction_ns_chi03_sL::synapse0x36b80d0() {
   return (neuron0x36a5f10()*-0.00735173);
}

double NNfunction_ns_chi03_sL::synapse0x36b8110() {
   return (neuron0x36a6250()*-0.0585276);
}

double NNfunction_ns_chi03_sL::synapse0x36b02d0() {
   return (neuron0x36a6590()*-0.0124798);
}

double NNfunction_ns_chi03_sL::synapse0x36b0310() {
   return (neuron0x36a68d0()*0.0181215);
}

double NNfunction_ns_chi03_sL::synapse0x36b0350() {
   return (neuron0x36a6c10()*-0.0168128);
}

double NNfunction_ns_chi03_sL::synapse0x36b0390() {
   return (neuron0x36a6f50()*-0.250366);
}

double NNfunction_ns_chi03_sL::synapse0x36b03d0() {
   return (neuron0x36a7290()*-0.000140613);
}

double NNfunction_ns_chi03_sL::synapse0x36b0410() {
   return (neuron0x36a75d0()*0.0535155);
}

double NNfunction_ns_chi03_sL::synapse0x36b0450() {
   return (neuron0x36a7910()*0.00559106);
}

double NNfunction_ns_chi03_sL::synapse0x36b7d60() {
   return (neuron0x36a7c50()*0.028657);
}

double NNfunction_ns_chi03_sL::synapse0x36b7da0() {
   return (neuron0x36a81b0()*-0.0284955);
}

double NNfunction_ns_chi03_sL::synapse0x36b05a0() {
   return (neuron0x36a83d0()*0.00536145);
}

double NNfunction_ns_chi03_sL::synapse0x36b05e0() {
   return (neuron0x36a8710()*0.0207317);
}

double NNfunction_ns_chi03_sL::synapse0x36b0620() {
   return (neuron0x36a8a50()*-0.00425076);
}

double NNfunction_ns_chi03_sL::synapse0x36b0660() {
   return (neuron0x36a8d90()*0.0620857);
}

double NNfunction_ns_chi03_sL::synapse0x36b06a0() {
   return (neuron0x36a90d0()*-0.00572116);
}

double NNfunction_ns_chi03_sL::synapse0x36b06e0() {
   return (neuron0x36a9410()*1.54066);
}

double NNfunction_ns_chi03_sL::synapse0x36b0a60() {
   return (neuron0x36a4850()*0.336182);
}

double NNfunction_ns_chi03_sL::synapse0x36b0aa0() {
   return (neuron0x36a4b90()*0.0648836);
}

double NNfunction_ns_chi03_sL::synapse0x36b0ae0() {
   return (neuron0x36a4ed0()*0.826319);
}

double NNfunction_ns_chi03_sL::synapse0x36b0b20() {
   return (neuron0x36a5210()*0.268983);
}

double NNfunction_ns_chi03_sL::synapse0x36b0b60() {
   return (neuron0x36a5550()*-0.0671078);
}

double NNfunction_ns_chi03_sL::synapse0x36b0ba0() {
   return (neuron0x36a5890()*0.334089);
}

double NNfunction_ns_chi03_sL::synapse0x36b0be0() {
   return (neuron0x36a5bd0()*-0.291322);
}

double NNfunction_ns_chi03_sL::synapse0x36b0c20() {
   return (neuron0x36a5f10()*-0.0566904);
}

double NNfunction_ns_chi03_sL::synapse0x36b0c60() {
   return (neuron0x36a6250()*0.0308607);
}

double NNfunction_ns_chi03_sL::synapse0x36b0ca0() {
   return (neuron0x36a6590()*-0.381198);
}

double NNfunction_ns_chi03_sL::synapse0x36b0ce0() {
   return (neuron0x36a68d0()*0.256282);
}

double NNfunction_ns_chi03_sL::synapse0x36b0d20() {
   return (neuron0x36a6c10()*0.177231);
}

double NNfunction_ns_chi03_sL::synapse0x36b0d60() {
   return (neuron0x36a6f50()*-0.125335);
}

double NNfunction_ns_chi03_sL::synapse0x36b0da0() {
   return (neuron0x36a7290()*0.178234);
}

double NNfunction_ns_chi03_sL::synapse0x36b0de0() {
   return (neuron0x36a75d0()*-0.195573);
}

double NNfunction_ns_chi03_sL::synapse0x36b0e20() {
   return (neuron0x36a7910()*-0.0736567);
}

double NNfunction_ns_chi03_sL::synapse0x36b08b0() {
   return (neuron0x36a7c50()*0.0985217);
}

double NNfunction_ns_chi03_sL::synapse0x36b08f0() {
   return (neuron0x36a81b0()*0.124974);
}

double NNfunction_ns_chi03_sL::synapse0x36b0f70() {
   return (neuron0x36a83d0()*0.125371);
}

double NNfunction_ns_chi03_sL::synapse0x36b0fb0() {
   return (neuron0x36a8710()*0.0935113);
}

double NNfunction_ns_chi03_sL::synapse0x36b0ff0() {
   return (neuron0x36a8a50()*-0.126072);
}

double NNfunction_ns_chi03_sL::synapse0x36b1030() {
   return (neuron0x36a8d90()*-0.0422677);
}

double NNfunction_ns_chi03_sL::synapse0x36b1070() {
   return (neuron0x36a90d0()*0.271425);
}

double NNfunction_ns_chi03_sL::synapse0x36b10b0() {
   return (neuron0x36a9410()*-0.831319);
}

double NNfunction_ns_chi03_sL::synapse0x36b1280() {
   return (neuron0x36a4850()*-0.647134);
}

double NNfunction_ns_chi03_sL::synapse0x36ba310() {
   return (neuron0x36a4b90()*-0.407262);
}

double NNfunction_ns_chi03_sL::synapse0x36ba350() {
   return (neuron0x36a4ed0()*0.807571);
}

double NNfunction_ns_chi03_sL::synapse0x36ba390() {
   return (neuron0x36a5210()*-0.244966);
}

double NNfunction_ns_chi03_sL::synapse0x36ba3d0() {
   return (neuron0x36a5550()*-0.854817);
}

double NNfunction_ns_chi03_sL::synapse0x36ba410() {
   return (neuron0x36a5890()*0.595842);
}

double NNfunction_ns_chi03_sL::synapse0x36ba450() {
   return (neuron0x36a5bd0()*1.0796);
}

double NNfunction_ns_chi03_sL::synapse0x36ba490() {
   return (neuron0x36a5f10()*0.208452);
}

double NNfunction_ns_chi03_sL::synapse0x36ba4d0() {
   return (neuron0x36a6250()*-0.303649);
}

double NNfunction_ns_chi03_sL::synapse0x36ba510() {
   return (neuron0x36a6590()*-0.218908);
}

double NNfunction_ns_chi03_sL::synapse0x36ba550() {
   return (neuron0x36a68d0()*-0.389273);
}

double NNfunction_ns_chi03_sL::synapse0x36ba590() {
   return (neuron0x36a6c10()*0.040302);
}

double NNfunction_ns_chi03_sL::synapse0x36ba5d0() {
   return (neuron0x36a6f50()*-0.446297);
}

double NNfunction_ns_chi03_sL::synapse0x36ba610() {
   return (neuron0x36a7290()*0.574836);
}

double NNfunction_ns_chi03_sL::synapse0x36ba650() {
   return (neuron0x36a75d0()*-0.499545);
}

double NNfunction_ns_chi03_sL::synapse0x36ba690() {
   return (neuron0x36a7910()*0.0969704);
}

double NNfunction_ns_chi03_sL::synapse0x36ba160() {
   return (neuron0x36a7c50()*-0.692127);
}

double NNfunction_ns_chi03_sL::synapse0x36ba1a0() {
   return (neuron0x36a81b0()*0.487656);
}

double NNfunction_ns_chi03_sL::synapse0x36ba7e0() {
   return (neuron0x36a83d0()*-0.450304);
}

double NNfunction_ns_chi03_sL::synapse0x36ba820() {
   return (neuron0x36a8710()*0.302433);
}

double NNfunction_ns_chi03_sL::synapse0x36ba860() {
   return (neuron0x36a8a50()*0.39493);
}

double NNfunction_ns_chi03_sL::synapse0x36ba8a0() {
   return (neuron0x36a8d90()*0.585414);
}

double NNfunction_ns_chi03_sL::synapse0x36ba8e0() {
   return (neuron0x36a90d0()*-0.397529);
}

double NNfunction_ns_chi03_sL::synapse0x36ba920() {
   return (neuron0x36a9410()*-1.11277);
}

double NNfunction_ns_chi03_sL::synapse0x36baca0() {
   return (neuron0x36a4850()*0.334379);
}

double NNfunction_ns_chi03_sL::synapse0x36bace0() {
   return (neuron0x36a4b90()*0.334203);
}

double NNfunction_ns_chi03_sL::synapse0x36bad20() {
   return (neuron0x36a4ed0()*0.949551);
}

double NNfunction_ns_chi03_sL::synapse0x36bad60() {
   return (neuron0x36a5210()*-0.50975);
}

double NNfunction_ns_chi03_sL::synapse0x36bada0() {
   return (neuron0x36a5550()*1.03741);
}

double NNfunction_ns_chi03_sL::synapse0x36bade0() {
   return (neuron0x36a5890()*-0.396431);
}

double NNfunction_ns_chi03_sL::synapse0x36bae20() {
   return (neuron0x36a5bd0()*-0.349768);
}

double NNfunction_ns_chi03_sL::synapse0x36bae60() {
   return (neuron0x36a5f10()*0.216335);
}

double NNfunction_ns_chi03_sL::synapse0x36baea0() {
   return (neuron0x36a6250()*-0.131162);
}

double NNfunction_ns_chi03_sL::synapse0x36baee0() {
   return (neuron0x36a6590()*-1.10591);
}

double NNfunction_ns_chi03_sL::synapse0x36baf20() {
   return (neuron0x36a68d0()*-0.703756);
}

double NNfunction_ns_chi03_sL::synapse0x36baf60() {
   return (neuron0x36a6c10()*0.114093);
}

double NNfunction_ns_chi03_sL::synapse0x36bafa0() {
   return (neuron0x36a6f50()*0.888007);
}

double NNfunction_ns_chi03_sL::synapse0x36bafe0() {
   return (neuron0x36a7290()*-0.638758);
}

double NNfunction_ns_chi03_sL::synapse0x36bb020() {
   return (neuron0x36a75d0()*-0.837093);
}

double NNfunction_ns_chi03_sL::synapse0x36bb060() {
   return (neuron0x36a7910()*0.355399);
}

double NNfunction_ns_chi03_sL::synapse0x36baaf0() {
   return (neuron0x36a7c50()*-0.0502526);
}

double NNfunction_ns_chi03_sL::synapse0x36bab30() {
   return (neuron0x36a81b0()*-0.254112);
}

double NNfunction_ns_chi03_sL::synapse0x36bb1b0() {
   return (neuron0x36a83d0()*0.386568);
}

double NNfunction_ns_chi03_sL::synapse0x36bb1f0() {
   return (neuron0x36a8710()*-0.970645);
}

double NNfunction_ns_chi03_sL::synapse0x36bb230() {
   return (neuron0x36a8a50()*-0.00147288);
}

double NNfunction_ns_chi03_sL::synapse0x36bb270() {
   return (neuron0x36a8d90()*0.300536);
}

double NNfunction_ns_chi03_sL::synapse0x36bb2b0() {
   return (neuron0x36a90d0()*0.368215);
}

double NNfunction_ns_chi03_sL::synapse0x36bb2f0() {
   return (neuron0x36a9410()*-0.16934);
}

double NNfunction_ns_chi03_sL::synapse0x36bb670() {
   return (neuron0x36a4850()*-0.360354);
}

double NNfunction_ns_chi03_sL::synapse0x36bb6b0() {
   return (neuron0x36a4b90()*-0.458185);
}

double NNfunction_ns_chi03_sL::synapse0x36bb6f0() {
   return (neuron0x36a4ed0()*-0.277355);
}

double NNfunction_ns_chi03_sL::synapse0x36bb730() {
   return (neuron0x36a5210()*0.231906);
}

double NNfunction_ns_chi03_sL::synapse0x36bb770() {
   return (neuron0x36a5550()*-0.00303989);
}

double NNfunction_ns_chi03_sL::synapse0x36bb7b0() {
   return (neuron0x36a5890()*-0.117766);
}

double NNfunction_ns_chi03_sL::synapse0x36bb7f0() {
   return (neuron0x36a5bd0()*0.0635612);
}

double NNfunction_ns_chi03_sL::synapse0x36bb830() {
   return (neuron0x36a5f10()*-0.0242082);
}

double NNfunction_ns_chi03_sL::synapse0x36bb870() {
   return (neuron0x36a6250()*-0.0554263);
}

double NNfunction_ns_chi03_sL::synapse0x36bb8b0() {
   return (neuron0x36a6590()*-0.169227);
}

double NNfunction_ns_chi03_sL::synapse0x36bb8f0() {
   return (neuron0x36a68d0()*-0.0205299);
}

double NNfunction_ns_chi03_sL::synapse0x36bb930() {
   return (neuron0x36a6c10()*-0.222185);
}

double NNfunction_ns_chi03_sL::synapse0x36bb970() {
   return (neuron0x36a6f50()*-0.0336723);
}

double NNfunction_ns_chi03_sL::synapse0x36bb9b0() {
   return (neuron0x36a7290()*-0.246155);
}

double NNfunction_ns_chi03_sL::synapse0x36bb9f0() {
   return (neuron0x36a75d0()*0.0370484);
}

double NNfunction_ns_chi03_sL::synapse0x36bba30() {
   return (neuron0x36a7910()*0.261214);
}

double NNfunction_ns_chi03_sL::synapse0x36bb4c0() {
   return (neuron0x36a7c50()*-0.0315455);
}

double NNfunction_ns_chi03_sL::synapse0x36bb500() {
   return (neuron0x36a81b0()*0.0929557);
}

double NNfunction_ns_chi03_sL::synapse0x36bbb80() {
   return (neuron0x36a83d0()*-0.0794797);
}

double NNfunction_ns_chi03_sL::synapse0x36bbbc0() {
   return (neuron0x36a8710()*0.188566);
}

double NNfunction_ns_chi03_sL::synapse0x36bbc00() {
   return (neuron0x36a8a50()*-0.0413546);
}

double NNfunction_ns_chi03_sL::synapse0x36bbc40() {
   return (neuron0x36a8d90()*0.0457763);
}

double NNfunction_ns_chi03_sL::synapse0x36bbc80() {
   return (neuron0x36a90d0()*0.0959424);
}

double NNfunction_ns_chi03_sL::synapse0x36bbcc0() {
   return (neuron0x36a9410()*-0.409336);
}

double NNfunction_ns_chi03_sL::synapse0x36bc040() {
   return (neuron0x36a4850()*-0.0199122);
}

double NNfunction_ns_chi03_sL::synapse0x36bc080() {
   return (neuron0x36a4b90()*-0.0153518);
}

double NNfunction_ns_chi03_sL::synapse0x36bc0c0() {
   return (neuron0x36a4ed0()*-3.60332);
}

double NNfunction_ns_chi03_sL::synapse0x36bc100() {
   return (neuron0x36a5210()*0.00302461);
}

double NNfunction_ns_chi03_sL::synapse0x36bc140() {
   return (neuron0x36a5550()*-0.0119782);
}

double NNfunction_ns_chi03_sL::synapse0x36bc180() {
   return (neuron0x36a5890()*0.00740249);
}

double NNfunction_ns_chi03_sL::synapse0x36bc1c0() {
   return (neuron0x36a5bd0()*-0.000291337);
}

double NNfunction_ns_chi03_sL::synapse0x36bc200() {
   return (neuron0x36a5f10()*0.00692174);
}

double NNfunction_ns_chi03_sL::synapse0x36bc240() {
   return (neuron0x36a6250()*-0.0214326);
}

double NNfunction_ns_chi03_sL::synapse0x36bc280() {
   return (neuron0x36a6590()*-0.00182469);
}

double NNfunction_ns_chi03_sL::synapse0x36bc2c0() {
   return (neuron0x36a68d0()*0.0266498);
}

double NNfunction_ns_chi03_sL::synapse0x36bc300() {
   return (neuron0x36a6c10()*-0.0187266);
}

double NNfunction_ns_chi03_sL::synapse0x36bc340() {
   return (neuron0x36a6f50()*0.0907233);
}

double NNfunction_ns_chi03_sL::synapse0x36bc380() {
   return (neuron0x36a7290()*-0.0329449);
}

double NNfunction_ns_chi03_sL::synapse0x36bc3c0() {
   return (neuron0x36a75d0()*0.00669871);
}

double NNfunction_ns_chi03_sL::synapse0x36bc400() {
   return (neuron0x36a7910()*0.00855747);
}

double NNfunction_ns_chi03_sL::synapse0x36bbe90() {
   return (neuron0x36a7c50()*-0.0218804);
}

double NNfunction_ns_chi03_sL::synapse0x36bbed0() {
   return (neuron0x36a81b0()*0.00315646);
}

double NNfunction_ns_chi03_sL::synapse0x36bc550() {
   return (neuron0x36a83d0()*0.0158171);
}

double NNfunction_ns_chi03_sL::synapse0x36bc590() {
   return (neuron0x36a8710()*0.0135516);
}

double NNfunction_ns_chi03_sL::synapse0x36bc5d0() {
   return (neuron0x36a8a50()*-0.0326149);
}

double NNfunction_ns_chi03_sL::synapse0x36bc610() {
   return (neuron0x36a8d90()*-0.0244263);
}

double NNfunction_ns_chi03_sL::synapse0x36bc650() {
   return (neuron0x36a90d0()*0.00904778);
}

double NNfunction_ns_chi03_sL::synapse0x36bc690() {
   return (neuron0x36a9410()*2.91041);
}

double NNfunction_ns_chi03_sL::synapse0x36bca10() {
   return (neuron0x36a4850()*0.0630502);
}

double NNfunction_ns_chi03_sL::synapse0x36bca50() {
   return (neuron0x36a4b90()*-0.0910799);
}

double NNfunction_ns_chi03_sL::synapse0x36bca90() {
   return (neuron0x36a4ed0()*0.281834);
}

double NNfunction_ns_chi03_sL::synapse0x36bcad0() {
   return (neuron0x36a5210()*-0.210111);
}

double NNfunction_ns_chi03_sL::synapse0x36bcb10() {
   return (neuron0x36a5550()*-0.069488);
}

double NNfunction_ns_chi03_sL::synapse0x36bcb50() {
   return (neuron0x36a5890()*-0.0530938);
}

double NNfunction_ns_chi03_sL::synapse0x36bcb90() {
   return (neuron0x36a5bd0()*0.109211);
}

double NNfunction_ns_chi03_sL::synapse0x36bcbd0() {
   return (neuron0x36a5f10()*0.00623974);
}

double NNfunction_ns_chi03_sL::synapse0x36bcc10() {
   return (neuron0x36a6250()*-0.00966262);
}

double NNfunction_ns_chi03_sL::synapse0x36bcc50() {
   return (neuron0x36a6590()*-0.000797836);
}

double NNfunction_ns_chi03_sL::synapse0x36bcc90() {
   return (neuron0x36a68d0()*0.0018435);
}

double NNfunction_ns_chi03_sL::synapse0x36bccd0() {
   return (neuron0x36a6c10()*-0.10027);
}

double NNfunction_ns_chi03_sL::synapse0x36bcd10() {
   return (neuron0x36a6f50()*-0.590809);
}

double NNfunction_ns_chi03_sL::synapse0x36bcd50() {
   return (neuron0x36a7290()*0.0838177);
}

double NNfunction_ns_chi03_sL::synapse0x36bcd90() {
   return (neuron0x36a75d0()*0.0406492);
}

double NNfunction_ns_chi03_sL::synapse0x36bcdd0() {
   return (neuron0x36a7910()*0.0796115);
}

double NNfunction_ns_chi03_sL::synapse0x36bc860() {
   return (neuron0x36a7c50()*0.137781);
}

double NNfunction_ns_chi03_sL::synapse0x36bc8a0() {
   return (neuron0x36a81b0()*-0.0822237);
}

double NNfunction_ns_chi03_sL::synapse0x36bcf20() {
   return (neuron0x36a83d0()*-0.109617);
}

double NNfunction_ns_chi03_sL::synapse0x36bcf60() {
   return (neuron0x36a8710()*-0.0809698);
}

double NNfunction_ns_chi03_sL::synapse0x36bcfa0() {
   return (neuron0x36a8a50()*0.0537854);
}

double NNfunction_ns_chi03_sL::synapse0x36bcfe0() {
   return (neuron0x36a8d90()*0.0772667);
}

double NNfunction_ns_chi03_sL::synapse0x36bd020() {
   return (neuron0x36a90d0()*0.0101785);
}

double NNfunction_ns_chi03_sL::synapse0x36bd060() {
   return (neuron0x36a9410()*-0.196714);
}

double NNfunction_ns_chi03_sL::synapse0x36bd3e0() {
   return (neuron0x36a4850()*-0.29381);
}

double NNfunction_ns_chi03_sL::synapse0x36bd420() {
   return (neuron0x36a4b90()*-0.193269);
}

double NNfunction_ns_chi03_sL::synapse0x36bd460() {
   return (neuron0x36a4ed0()*0.451501);
}

double NNfunction_ns_chi03_sL::synapse0x36bd4a0() {
   return (neuron0x36a5210()*0.896646);
}

double NNfunction_ns_chi03_sL::synapse0x36bd4e0() {
   return (neuron0x36a5550()*-0.238725);
}

double NNfunction_ns_chi03_sL::synapse0x36bd520() {
   return (neuron0x36a5890()*0.415396);
}

double NNfunction_ns_chi03_sL::synapse0x36bd560() {
   return (neuron0x36a5bd0()*0.155079);
}

double NNfunction_ns_chi03_sL::synapse0x36bd5a0() {
   return (neuron0x36a5f10()*-0.49524);
}

double NNfunction_ns_chi03_sL::synapse0x36bd5e0() {
   return (neuron0x36a6250()*-0.391904);
}

double NNfunction_ns_chi03_sL::synapse0x36bd620() {
   return (neuron0x36a6590()*0.311442);
}

double NNfunction_ns_chi03_sL::synapse0x36bd660() {
   return (neuron0x36a68d0()*-0.191294);
}

double NNfunction_ns_chi03_sL::synapse0x36bd6a0() {
   return (neuron0x36a6c10()*-0.527547);
}

double NNfunction_ns_chi03_sL::synapse0x36bd6e0() {
   return (neuron0x36a6f50()*-0.426385);
}

double NNfunction_ns_chi03_sL::synapse0x36bd720() {
   return (neuron0x36a7290()*0.131686);
}

double NNfunction_ns_chi03_sL::synapse0x36bd760() {
   return (neuron0x36a75d0()*0.756351);
}

double NNfunction_ns_chi03_sL::synapse0x36bd7a0() {
   return (neuron0x36a7910()*0.077589);
}

double NNfunction_ns_chi03_sL::synapse0x36bd230() {
   return (neuron0x36a7c50()*-0.526288);
}

double NNfunction_ns_chi03_sL::synapse0x36bd270() {
   return (neuron0x36a81b0()*-1.14919);
}

double NNfunction_ns_chi03_sL::synapse0x36bd8f0() {
   return (neuron0x36a83d0()*1.10452);
}

double NNfunction_ns_chi03_sL::synapse0x36bd930() {
   return (neuron0x36a8710()*0.345465);
}

double NNfunction_ns_chi03_sL::synapse0x36bd970() {
   return (neuron0x36a8a50()*0.132511);
}

double NNfunction_ns_chi03_sL::synapse0x36bd9b0() {
   return (neuron0x36a8d90()*-0.0704095);
}

double NNfunction_ns_chi03_sL::synapse0x36bd9f0() {
   return (neuron0x36a90d0()*-0.384059);
}

double NNfunction_ns_chi03_sL::synapse0x36bda30() {
   return (neuron0x36a9410()*0.0722049);
}

double NNfunction_ns_chi03_sL::synapse0x36bddb0() {
   return (neuron0x36a4850()*-0.548119);
}

double NNfunction_ns_chi03_sL::synapse0x36bddf0() {
   return (neuron0x36a4b90()*-0.0915319);
}

double NNfunction_ns_chi03_sL::synapse0x36bde30() {
   return (neuron0x36a4ed0()*-3.25019);
}

double NNfunction_ns_chi03_sL::synapse0x36bde70() {
   return (neuron0x36a5210()*0.029672);
}

double NNfunction_ns_chi03_sL::synapse0x36bdeb0() {
   return (neuron0x36a5550()*-0.0276898);
}

double NNfunction_ns_chi03_sL::synapse0x36bdef0() {
   return (neuron0x36a5890()*-0.0847546);
}

double NNfunction_ns_chi03_sL::synapse0x36bdf30() {
   return (neuron0x36a5bd0()*-0.045708);
}

double NNfunction_ns_chi03_sL::synapse0x36bdf70() {
   return (neuron0x36a5f10()*0.0547379);
}

double NNfunction_ns_chi03_sL::synapse0x36bdfb0() {
   return (neuron0x36a6250()*0.0353837);
}

double NNfunction_ns_chi03_sL::synapse0x36bdff0() {
   return (neuron0x36a6590()*-0.0755771);
}

double NNfunction_ns_chi03_sL::synapse0x36be030() {
   return (neuron0x36a68d0()*-0.0184248);
}

double NNfunction_ns_chi03_sL::synapse0x36be070() {
   return (neuron0x36a6c10()*-0.0305862);
}

double NNfunction_ns_chi03_sL::synapse0x36be0b0() {
   return (neuron0x36a6f50()*0.527053);
}

double NNfunction_ns_chi03_sL::synapse0x36be0f0() {
   return (neuron0x36a7290()*0.0137273);
}

double NNfunction_ns_chi03_sL::synapse0x36be130() {
   return (neuron0x36a75d0()*-0.0697765);
}

double NNfunction_ns_chi03_sL::synapse0x36be170() {
   return (neuron0x36a7910()*0.0486196);
}

double NNfunction_ns_chi03_sL::synapse0x36bdc00() {
   return (neuron0x36a7c50()*0.0483722);
}

double NNfunction_ns_chi03_sL::synapse0x36bdc40() {
   return (neuron0x36a81b0()*-0.124313);
}

double NNfunction_ns_chi03_sL::synapse0x36be2c0() {
   return (neuron0x36a83d0()*0.0119088);
}

double NNfunction_ns_chi03_sL::synapse0x36be300() {
   return (neuron0x36a8710()*-0.0632223);
}

double NNfunction_ns_chi03_sL::synapse0x36be340() {
   return (neuron0x36a8a50()*-0.020167);
}

double NNfunction_ns_chi03_sL::synapse0x36be380() {
   return (neuron0x36a8d90()*-0.116597);
}

double NNfunction_ns_chi03_sL::synapse0x36be3c0() {
   return (neuron0x36a90d0()*0.0529733);
}

double NNfunction_ns_chi03_sL::synapse0x36be400() {
   return (neuron0x36a9410()*-1.53575);
}

double NNfunction_ns_chi03_sL::synapse0x36be780() {
   return (neuron0x36a4850()*-0.000648958);
}

double NNfunction_ns_chi03_sL::synapse0x36be7c0() {
   return (neuron0x36a4b90()*0.000247011);
}

double NNfunction_ns_chi03_sL::synapse0x36be800() {
   return (neuron0x36a4ed0()*-0.00389115);
}

double NNfunction_ns_chi03_sL::synapse0x36be840() {
   return (neuron0x36a5210()*-2.37226);
}

double NNfunction_ns_chi03_sL::synapse0x36be880() {
   return (neuron0x36a5550()*0.0071001);
}

double NNfunction_ns_chi03_sL::synapse0x36be8c0() {
   return (neuron0x36a5890()*0.000488304);
}

double NNfunction_ns_chi03_sL::synapse0x36be900() {
   return (neuron0x36a5bd0()*-0.00139814);
}

double NNfunction_ns_chi03_sL::synapse0x36be940() {
   return (neuron0x36a5f10()*-0.0165693);
}

double NNfunction_ns_chi03_sL::synapse0x36be980() {
   return (neuron0x36a6250()*0.010475);
}

double NNfunction_ns_chi03_sL::synapse0x36be9c0() {
   return (neuron0x36a6590()*-0.00479305);
}

double NNfunction_ns_chi03_sL::synapse0x36bea00() {
   return (neuron0x36a68d0()*0.0104368);
}

double NNfunction_ns_chi03_sL::synapse0x36bea40() {
   return (neuron0x36a6c10()*-0.00201269);
}

double NNfunction_ns_chi03_sL::synapse0x36bea80() {
   return (neuron0x36a6f50()*0.0939586);
}

double NNfunction_ns_chi03_sL::synapse0x36beac0() {
   return (neuron0x36a7290()*0.0190593);
}

double NNfunction_ns_chi03_sL::synapse0x36beb00() {
   return (neuron0x36a75d0()*0.000202287);
}

double NNfunction_ns_chi03_sL::synapse0x36beb40() {
   return (neuron0x36a7910()*-0.00408487);
}

double NNfunction_ns_chi03_sL::synapse0x36be5d0() {
   return (neuron0x36a7c50()*0.0117999);
}

double NNfunction_ns_chi03_sL::synapse0x36be610() {
   return (neuron0x36a81b0()*-0.00713064);
}

double NNfunction_ns_chi03_sL::synapse0x36bec90() {
   return (neuron0x36a83d0()*-0.00866664);
}

double NNfunction_ns_chi03_sL::synapse0x36becd0() {
   return (neuron0x36a8710()*0.00902355);
}

double NNfunction_ns_chi03_sL::synapse0x36bed10() {
   return (neuron0x36a8a50()*0.00114264);
}

double NNfunction_ns_chi03_sL::synapse0x36bed50() {
   return (neuron0x36a8d90()*0.00670192);
}

double NNfunction_ns_chi03_sL::synapse0x36bed90() {
   return (neuron0x36a90d0()*0.00206124);
}

double NNfunction_ns_chi03_sL::synapse0x36bedd0() {
   return (neuron0x36a9410()*-0.00779357);
}

double NNfunction_ns_chi03_sL::synapse0x36bf150() {
   return (neuron0x36a4850()*0.0260923);
}

double NNfunction_ns_chi03_sL::synapse0x36b3720() {
   return (neuron0x36a4b90()*-15.8369);
}

double NNfunction_ns_chi03_sL::synapse0x36b3760() {
   return (neuron0x36a4ed0()*-0.872536);
}

double NNfunction_ns_chi03_sL::synapse0x36b37a0() {
   return (neuron0x36a5210()*0.000714248);
}

double NNfunction_ns_chi03_sL::synapse0x36b39f0() {
   return (neuron0x36a5550()*-0.0360129);
}

double NNfunction_ns_chi03_sL::synapse0x36b3a30() {
   return (neuron0x36a5890()*-0.0336853);
}

double NNfunction_ns_chi03_sL::synapse0x36b3a70() {
   return (neuron0x36a5bd0()*0.00862994);
}

double NNfunction_ns_chi03_sL::synapse0x36b3cc0() {
   return (neuron0x36a5f10()*0.040072);
}

double NNfunction_ns_chi03_sL::synapse0x36b3d00() {
   return (neuron0x36a6250()*0.0289827);
}

double NNfunction_ns_chi03_sL::synapse0x36b3f50() {
   return (neuron0x36a6590()*0.0217839);
}

double NNfunction_ns_chi03_sL::synapse0x36b3f90() {
   return (neuron0x36a68d0()*-0.00295558);
}

double NNfunction_ns_chi03_sL::synapse0x36b3fd0() {
   return (neuron0x36a6c10()*-0.0226107);
}

double NNfunction_ns_chi03_sL::synapse0x36b4220() {
   return (neuron0x36a6f50()*0.104383);
}

double NNfunction_ns_chi03_sL::synapse0x36b4260() {
   return (neuron0x36a7290()*-0.0296237);
}

double NNfunction_ns_chi03_sL::synapse0x36b44b0() {
   return (neuron0x36a75d0()*0.0150592);
}

double NNfunction_ns_chi03_sL::synapse0x36b44f0() {
   return (neuron0x36a7910()*0.0445413);
}

double NNfunction_ns_chi03_sL::synapse0x36befa0() {
   return (neuron0x36a7c50()*0.0474535);
}

double NNfunction_ns_chi03_sL::synapse0x36befe0() {
   return (neuron0x36a81b0()*0.0140651);
}

double NNfunction_ns_chi03_sL::synapse0x36b4640() {
   return (neuron0x36a83d0()*-0.0104399);
}

double NNfunction_ns_chi03_sL::synapse0x36b4b50() {
   return (neuron0x36a8710()*-0.0140287);
}

double NNfunction_ns_chi03_sL::synapse0x36b4b90() {
   return (neuron0x36a8a50()*0.0261565);
}

double NNfunction_ns_chi03_sL::synapse0x36b4bd0() {
   return (neuron0x36a8d90()*0.00299064);
}

double NNfunction_ns_chi03_sL::synapse0x36b4e20() {
   return (neuron0x36a90d0()*-0.0297379);
}

double NNfunction_ns_chi03_sL::synapse0x36b4e60() {
   return (neuron0x36a9410()*-0.240643);
}

double NNfunction_ns_chi03_sL::synapse0x36b4710() {
   return (neuron0x36a4850()*-0.0764215);
}

double NNfunction_ns_chi03_sL::synapse0x36b4750() {
   return (neuron0x36a4b90()*-0.0618321);
}

double NNfunction_ns_chi03_sL::synapse0x36b4790() {
   return (neuron0x36a4ed0()*0.0686795);
}

double NNfunction_ns_chi03_sL::synapse0x36b47d0() {
   return (neuron0x36a5210()*-0.126199);
}

double NNfunction_ns_chi03_sL::synapse0x36b5150() {
   return (neuron0x36a5550()*-0.00142229);
}

double NNfunction_ns_chi03_sL::synapse0x36c14a0() {
   return (neuron0x36a5890()*0.0111334);
}

double NNfunction_ns_chi03_sL::synapse0x36c14e0() {
   return (neuron0x36a5bd0()*-0.0125241);
}

double NNfunction_ns_chi03_sL::synapse0x36c1520() {
   return (neuron0x36a5f10()*-0.0304752);
}

double NNfunction_ns_chi03_sL::synapse0x36c1560() {
   return (neuron0x36a6250()*-0.00612311);
}

double NNfunction_ns_chi03_sL::synapse0x36c15a0() {
   return (neuron0x36a6590()*0.00228707);
}

double NNfunction_ns_chi03_sL::synapse0x36c15e0() {
   return (neuron0x36a68d0()*-0.00823115);
}

double NNfunction_ns_chi03_sL::synapse0x36c1620() {
   return (neuron0x36a6c10()*-0.0234807);
}

double NNfunction_ns_chi03_sL::synapse0x36c1660() {
   return (neuron0x36a6f50()*2.31925);
}

double NNfunction_ns_chi03_sL::synapse0x36c16a0() {
   return (neuron0x36a7290()*0.0177949);
}

double NNfunction_ns_chi03_sL::synapse0x36c16e0() {
   return (neuron0x36a75d0()*0.00887358);
}

double NNfunction_ns_chi03_sL::synapse0x36c1720() {
   return (neuron0x36a7910()*-0.0157846);
}

double NNfunction_ns_chi03_sL::synapse0x36b5030() {
   return (neuron0x36a7c50()*0.00896942);
}

double NNfunction_ns_chi03_sL::synapse0x36b5070() {
   return (neuron0x36a81b0()*0.00856627);
}

double NNfunction_ns_chi03_sL::synapse0x36c1870() {
   return (neuron0x36a83d0()*-0.0123058);
}

double NNfunction_ns_chi03_sL::synapse0x36c18b0() {
   return (neuron0x36a8710()*0.00957262);
}

double NNfunction_ns_chi03_sL::synapse0x36c18f0() {
   return (neuron0x36a8a50()*-0.0146779);
}

double NNfunction_ns_chi03_sL::synapse0x36c1930() {
   return (neuron0x36a8d90()*-0.00549825);
}

double NNfunction_ns_chi03_sL::synapse0x36c1970() {
   return (neuron0x36a90d0()*0.00670289);
}

double NNfunction_ns_chi03_sL::synapse0x36c19b0() {
   return (neuron0x36a9410()*-0.0113913);
}

double NNfunction_ns_chi03_sL::synapse0x36c1d30() {
   return (neuron0x36a4850()*0.00151301);
}

double NNfunction_ns_chi03_sL::synapse0x36c1d70() {
   return (neuron0x36a4b90()*0.0147793);
}

double NNfunction_ns_chi03_sL::synapse0x36c1db0() {
   return (neuron0x36a4ed0()*0.0276785);
}

double NNfunction_ns_chi03_sL::synapse0x36c1df0() {
   return (neuron0x36a5210()*2.72048);
}

double NNfunction_ns_chi03_sL::synapse0x36c1e30() {
   return (neuron0x36a5550()*-0.0184712);
}

double NNfunction_ns_chi03_sL::synapse0x36c1e70() {
   return (neuron0x36a5890()*2.84273e-05);
}

double NNfunction_ns_chi03_sL::synapse0x36c1eb0() {
   return (neuron0x36a5bd0()*-0.00712997);
}

double NNfunction_ns_chi03_sL::synapse0x36c1ef0() {
   return (neuron0x36a5f10()*0.00926884);
}

double NNfunction_ns_chi03_sL::synapse0x36c1f30() {
   return (neuron0x36a6250()*-0.00722182);
}

double NNfunction_ns_chi03_sL::synapse0x36c1f70() {
   return (neuron0x36a6590()*0.0110031);
}

double NNfunction_ns_chi03_sL::synapse0x36c1fb0() {
   return (neuron0x36a68d0()*-0.0104911);
}

double NNfunction_ns_chi03_sL::synapse0x36c1ff0() {
   return (neuron0x36a6c10()*-0.00514529);
}

double NNfunction_ns_chi03_sL::synapse0x36c2030() {
   return (neuron0x36a6f50()*0.175654);
}

double NNfunction_ns_chi03_sL::synapse0x36c2070() {
   return (neuron0x36a7290()*0.00288171);
}

double NNfunction_ns_chi03_sL::synapse0x36c20b0() {
   return (neuron0x36a75d0()*-0.00789849);
}

double NNfunction_ns_chi03_sL::synapse0x36c20f0() {
   return (neuron0x36a7910()*-0.00545423);
}

double NNfunction_ns_chi03_sL::synapse0x36c1b80() {
   return (neuron0x36a7c50()*0.00224058);
}

double NNfunction_ns_chi03_sL::synapse0x36c1bc0() {
   return (neuron0x36a81b0()*0.00191449);
}

double NNfunction_ns_chi03_sL::synapse0x36c2240() {
   return (neuron0x36a83d0()*0.0111863);
}

double NNfunction_ns_chi03_sL::synapse0x36c2280() {
   return (neuron0x36a8710()*-0.0111246);
}

double NNfunction_ns_chi03_sL::synapse0x36c22c0() {
   return (neuron0x36a8a50()*-0.00100386);
}

double NNfunction_ns_chi03_sL::synapse0x36c2300() {
   return (neuron0x36a8d90()*-0.00392747);
}

double NNfunction_ns_chi03_sL::synapse0x36c2340() {
   return (neuron0x36a90d0()*0.00328994);
}

double NNfunction_ns_chi03_sL::synapse0x36c2380() {
   return (neuron0x36a9410()*0.0202089);
}

double NNfunction_ns_chi03_sL::synapse0x36c2700() {
   return (neuron0x36a4850()*-0.160646);
}

double NNfunction_ns_chi03_sL::synapse0x36c2740() {
   return (neuron0x36a4b90()*0.0422382);
}

double NNfunction_ns_chi03_sL::synapse0x36c2780() {
   return (neuron0x36a4ed0()*-0.133659);
}

double NNfunction_ns_chi03_sL::synapse0x36c27c0() {
   return (neuron0x36a5210()*-0.0101704);
}

double NNfunction_ns_chi03_sL::synapse0x36c2800() {
   return (neuron0x36a5550()*-0.0189941);
}

double NNfunction_ns_chi03_sL::synapse0x36c2840() {
   return (neuron0x36a5890()*-0.104448);
}

double NNfunction_ns_chi03_sL::synapse0x36c2880() {
   return (neuron0x36a5bd0()*-0.00206889);
}

double NNfunction_ns_chi03_sL::synapse0x36c28c0() {
   return (neuron0x36a5f10()*0.0660595);
}

double NNfunction_ns_chi03_sL::synapse0x36c2900() {
   return (neuron0x36a6250()*0.0246242);
}

double NNfunction_ns_chi03_sL::synapse0x36c2940() {
   return (neuron0x36a6590()*0.000326567);
}

double NNfunction_ns_chi03_sL::synapse0x36c2980() {
   return (neuron0x36a68d0()*-0.015988);
}

double NNfunction_ns_chi03_sL::synapse0x36c29c0() {
   return (neuron0x36a6c10()*-0.0282016);
}

double NNfunction_ns_chi03_sL::synapse0x36c2a00() {
   return (neuron0x36a6f50()*0.326413);
}

double NNfunction_ns_chi03_sL::synapse0x36c2a40() {
   return (neuron0x36a7290()*-0.039551);
}

double NNfunction_ns_chi03_sL::synapse0x36c2a80() {
   return (neuron0x36a75d0()*0.0283909);
}

double NNfunction_ns_chi03_sL::synapse0x36c2ac0() {
   return (neuron0x36a7910()*-0.00960535);
}

double NNfunction_ns_chi03_sL::synapse0x36c2550() {
   return (neuron0x36a7c50()*-0.0534769);
}

double NNfunction_ns_chi03_sL::synapse0x36c2590() {
   return (neuron0x36a81b0()*-0.0245477);
}

double NNfunction_ns_chi03_sL::synapse0x36c2c10() {
   return (neuron0x36a83d0()*0.00941345);
}

double NNfunction_ns_chi03_sL::synapse0x36c2c50() {
   return (neuron0x36a8710()*-0.0241951);
}

double NNfunction_ns_chi03_sL::synapse0x36c2c90() {
   return (neuron0x36a8a50()*-0.0106987);
}

double NNfunction_ns_chi03_sL::synapse0x36c2cd0() {
   return (neuron0x36a8d90()*-0.0231411);
}

double NNfunction_ns_chi03_sL::synapse0x36c2d10() {
   return (neuron0x36a90d0()*-0.0429757);
}

double NNfunction_ns_chi03_sL::synapse0x36c2d50() {
   return (neuron0x36a9410()*-1.54929);
}

double NNfunction_ns_chi03_sL::synapse0x36c30d0() {
   return (neuron0x36a4850()*0.0602649);
}

double NNfunction_ns_chi03_sL::synapse0x36c3110() {
   return (neuron0x36a4b90()*0.427098);
}

double NNfunction_ns_chi03_sL::synapse0x36c3150() {
   return (neuron0x36a4ed0()*3.38776);
}

double NNfunction_ns_chi03_sL::synapse0x36c3190() {
   return (neuron0x36a5210()*0.0288786);
}

double NNfunction_ns_chi03_sL::synapse0x36c31d0() {
   return (neuron0x36a5550()*-0.0058677);
}

double NNfunction_ns_chi03_sL::synapse0x36c3210() {
   return (neuron0x36a5890()*0.011204);
}

double NNfunction_ns_chi03_sL::synapse0x36c3250() {
   return (neuron0x36a5bd0()*-0.042123);
}

double NNfunction_ns_chi03_sL::synapse0x36c3290() {
   return (neuron0x36a5f10()*0.00412251);
}

double NNfunction_ns_chi03_sL::synapse0x36c32d0() {
   return (neuron0x36a6250()*-0.0349209);
}

double NNfunction_ns_chi03_sL::synapse0x36c3310() {
   return (neuron0x36a6590()*0.0117585);
}

double NNfunction_ns_chi03_sL::synapse0x36c3350() {
   return (neuron0x36a68d0()*-0.0418078);
}

double NNfunction_ns_chi03_sL::synapse0x36c3390() {
   return (neuron0x36a6c10()*0.0187112);
}

double NNfunction_ns_chi03_sL::synapse0x36c33d0() {
   return (neuron0x36a6f50()*-0.000697919);
}

double NNfunction_ns_chi03_sL::synapse0x36c3410() {
   return (neuron0x36a7290()*0.00945075);
}

double NNfunction_ns_chi03_sL::synapse0x36c3450() {
   return (neuron0x36a75d0()*-0.0576863);
}

double NNfunction_ns_chi03_sL::synapse0x36c3490() {
   return (neuron0x36a7910()*-0.0213526);
}

double NNfunction_ns_chi03_sL::synapse0x36c2f20() {
   return (neuron0x36a7c50()*-0.0257432);
}

double NNfunction_ns_chi03_sL::synapse0x36c2f60() {
   return (neuron0x36a81b0()*0.0315695);
}

double NNfunction_ns_chi03_sL::synapse0x36c35e0() {
   return (neuron0x36a83d0()*0.0201151);
}

double NNfunction_ns_chi03_sL::synapse0x36c3620() {
   return (neuron0x36a8710()*-0.0204413);
}

double NNfunction_ns_chi03_sL::synapse0x36c3660() {
   return (neuron0x36a8a50()*-0.0216182);
}

double NNfunction_ns_chi03_sL::synapse0x36c36a0() {
   return (neuron0x36a8d90()*0.00233142);
}

double NNfunction_ns_chi03_sL::synapse0x36c36e0() {
   return (neuron0x36a90d0()*0.0106691);
}

double NNfunction_ns_chi03_sL::synapse0x36c3720() {
   return (neuron0x36a9410()*0.300924);
}

double NNfunction_ns_chi03_sL::synapse0x36c3aa0() {
   return (neuron0x36a4850()*0.0390841);
}

double NNfunction_ns_chi03_sL::synapse0x36c3ae0() {
   return (neuron0x36a4b90()*11.6607);
}

double NNfunction_ns_chi03_sL::synapse0x36c3b20() {
   return (neuron0x36a4ed0()*0.0456286);
}

double NNfunction_ns_chi03_sL::synapse0x36c3b60() {
   return (neuron0x36a5210()*-0.00748168);
}

double NNfunction_ns_chi03_sL::synapse0x36c3ba0() {
   return (neuron0x36a5550()*0.00560277);
}

double NNfunction_ns_chi03_sL::synapse0x36c3be0() {
   return (neuron0x36a5890()*0.00170622);
}

double NNfunction_ns_chi03_sL::synapse0x36c3c20() {
   return (neuron0x36a5bd0()*-0.0315541);
}

double NNfunction_ns_chi03_sL::synapse0x36c3c60() {
   return (neuron0x36a5f10()*-0.0317487);
}

double NNfunction_ns_chi03_sL::synapse0x36c3ca0() {
   return (neuron0x36a6250()*-0.0283628);
}

double NNfunction_ns_chi03_sL::synapse0x36c3ce0() {
   return (neuron0x36a6590()*0.0215643);
}

double NNfunction_ns_chi03_sL::synapse0x36c3d20() {
   return (neuron0x36a68d0()*-0.0301238);
}

double NNfunction_ns_chi03_sL::synapse0x36c3d60() {
   return (neuron0x36a6c10()*0.00941564);
}

double NNfunction_ns_chi03_sL::synapse0x36c3da0() {
   return (neuron0x36a6f50()*-0.0613674);
}

double NNfunction_ns_chi03_sL::synapse0x36c3de0() {
   return (neuron0x36a7290()*0.019608);
}

double NNfunction_ns_chi03_sL::synapse0x36c3e20() {
   return (neuron0x36a75d0()*0.0367228);
}

double NNfunction_ns_chi03_sL::synapse0x36c3e60() {
   return (neuron0x36a7910()*-0.0180496);
}

double NNfunction_ns_chi03_sL::synapse0x36c38f0() {
   return (neuron0x36a7c50()*-0.0132463);
}

double NNfunction_ns_chi03_sL::synapse0x36c3930() {
   return (neuron0x36a81b0()*-0.0377301);
}

double NNfunction_ns_chi03_sL::synapse0x36c3fb0() {
   return (neuron0x36a83d0()*-0.0147817);
}

double NNfunction_ns_chi03_sL::synapse0x36c3ff0() {
   return (neuron0x36a8710()*0.0243816);
}

double NNfunction_ns_chi03_sL::synapse0x36c4030() {
   return (neuron0x36a8a50()*-0.0257589);
}

double NNfunction_ns_chi03_sL::synapse0x36c4070() {
   return (neuron0x36a8d90()*0.0163326);
}

double NNfunction_ns_chi03_sL::synapse0x36c40b0() {
   return (neuron0x36a90d0()*0.0259207);
}

double NNfunction_ns_chi03_sL::synapse0x36c40f0() {
   return (neuron0x36a9410()*-1.87452);
}

double NNfunction_ns_chi03_sL::synapse0x36c4470() {
   return (neuron0x36a4850()*-0.0408147);
}

double NNfunction_ns_chi03_sL::synapse0x36c44b0() {
   return (neuron0x36a4b90()*-0.00220325);
}

double NNfunction_ns_chi03_sL::synapse0x36c44f0() {
   return (neuron0x36a4ed0()*-0.207855);
}

double NNfunction_ns_chi03_sL::synapse0x36c4530() {
   return (neuron0x36a5210()*-0.0542074);
}

double NNfunction_ns_chi03_sL::synapse0x36c4570() {
   return (neuron0x36a5550()*-0.0174149);
}

double NNfunction_ns_chi03_sL::synapse0x36c45b0() {
   return (neuron0x36a5890()*-0.024034);
}

double NNfunction_ns_chi03_sL::synapse0x36c45f0() {
   return (neuron0x36a5bd0()*-0.0249814);
}

double NNfunction_ns_chi03_sL::synapse0x36c4630() {
   return (neuron0x36a5f10()*0.0406389);
}

double NNfunction_ns_chi03_sL::synapse0x36c4670() {
   return (neuron0x36a6250()*-0.0207841);
}

double NNfunction_ns_chi03_sL::synapse0x36c46b0() {
   return (neuron0x36a6590()*-0.000115724);
}

double NNfunction_ns_chi03_sL::synapse0x36c46f0() {
   return (neuron0x36a68d0()*-0.0047493);
}

double NNfunction_ns_chi03_sL::synapse0x36c4730() {
   return (neuron0x36a6c10()*-0.00962896);
}

double NNfunction_ns_chi03_sL::synapse0x36c4770() {
   return (neuron0x36a6f50()*-0.157668);
}

double NNfunction_ns_chi03_sL::synapse0x36c47b0() {
   return (neuron0x36a7290()*0.00681305);
}

double NNfunction_ns_chi03_sL::synapse0x36c47f0() {
   return (neuron0x36a75d0()*-0.00676075);
}

double NNfunction_ns_chi03_sL::synapse0x36c4830() {
   return (neuron0x36a7910()*-0.0240016);
}

double NNfunction_ns_chi03_sL::synapse0x36c42c0() {
   return (neuron0x36a7c50()*-0.0364595);
}

double NNfunction_ns_chi03_sL::synapse0x36c4300() {
   return (neuron0x36a81b0()*-0.05188);
}

double NNfunction_ns_chi03_sL::synapse0x36c4980() {
   return (neuron0x36a83d0()*0.0318393);
}

double NNfunction_ns_chi03_sL::synapse0x36c49c0() {
   return (neuron0x36a8710()*-0.0178749);
}

double NNfunction_ns_chi03_sL::synapse0x36c4a00() {
   return (neuron0x36a8a50()*0.00986795);
}

double NNfunction_ns_chi03_sL::synapse0x36c4a40() {
   return (neuron0x36a8d90()*0.0270716);
}

double NNfunction_ns_chi03_sL::synapse0x36c4a80() {
   return (neuron0x36a90d0()*-0.0086991);
}

double NNfunction_ns_chi03_sL::synapse0x36c4ac0() {
   return (neuron0x36a9410()*3.44807);
}

double NNfunction_ns_chi03_sL::synapse0x36c4e40() {
   return (neuron0x36a4850()*-0.298029);
}

double NNfunction_ns_chi03_sL::synapse0x36c4e80() {
   return (neuron0x36a4b90()*-0.152365);
}

double NNfunction_ns_chi03_sL::synapse0x36c4ec0() {
   return (neuron0x36a4ed0()*0.368809);
}

double NNfunction_ns_chi03_sL::synapse0x36c4f00() {
   return (neuron0x36a5210()*0.183504);
}

double NNfunction_ns_chi03_sL::synapse0x36c4f40() {
   return (neuron0x36a5550()*-0.144686);
}

double NNfunction_ns_chi03_sL::synapse0x36c4f80() {
   return (neuron0x36a5890()*-0.238557);
}

double NNfunction_ns_chi03_sL::synapse0x36c4fc0() {
   return (neuron0x36a5bd0()*-0.248201);
}

double NNfunction_ns_chi03_sL::synapse0x36c5000() {
   return (neuron0x36a5f10()*0.0866617);
}

double NNfunction_ns_chi03_sL::synapse0x36c5040() {
   return (neuron0x36a6250()*-0.0760322);
}

double NNfunction_ns_chi03_sL::synapse0x36c5080() {
   return (neuron0x36a6590()*-0.212153);
}

double NNfunction_ns_chi03_sL::synapse0x36c50c0() {
   return (neuron0x36a68d0()*0.0138493);
}

double NNfunction_ns_chi03_sL::synapse0x36c5100() {
   return (neuron0x36a6c10()*-0.300208);
}

double NNfunction_ns_chi03_sL::synapse0x36c5140() {
   return (neuron0x36a6f50()*1.19005);
}

double NNfunction_ns_chi03_sL::synapse0x36c5180() {
   return (neuron0x36a7290()*0.0903906);
}

double NNfunction_ns_chi03_sL::synapse0x36c51c0() {
   return (neuron0x36a75d0()*0.0188929);
}

double NNfunction_ns_chi03_sL::synapse0x36c5200() {
   return (neuron0x36a7910()*0.322493);
}

double NNfunction_ns_chi03_sL::synapse0x36c4c90() {
   return (neuron0x36a7c50()*-0.154851);
}

double NNfunction_ns_chi03_sL::synapse0x36c4cd0() {
   return (neuron0x36a81b0()*0.0509264);
}

double NNfunction_ns_chi03_sL::synapse0x36c5350() {
   return (neuron0x36a83d0()*0.390944);
}

double NNfunction_ns_chi03_sL::synapse0x36c5390() {
   return (neuron0x36a8710()*-0.394855);
}

double NNfunction_ns_chi03_sL::synapse0x36c53d0() {
   return (neuron0x36a8a50()*-0.223789);
}

double NNfunction_ns_chi03_sL::synapse0x36c5410() {
   return (neuron0x36a8d90()*-0.140477);
}

double NNfunction_ns_chi03_sL::synapse0x36c5450() {
   return (neuron0x36a90d0()*-0.265628);
}

double NNfunction_ns_chi03_sL::synapse0x36c5490() {
   return (neuron0x36a9410()*-0.0271315);
}

double NNfunction_ns_chi03_sL::synapse0x36c5810() {
   return (neuron0x36a4850()*0.00759505);
}

double NNfunction_ns_chi03_sL::synapse0x36c5850() {
   return (neuron0x36a4b90()*-19.0681);
}

double NNfunction_ns_chi03_sL::synapse0x36c5890() {
   return (neuron0x36a4ed0()*-6.90848);
}

double NNfunction_ns_chi03_sL::synapse0x36c58d0() {
   return (neuron0x36a5210()*0.039612);
}

double NNfunction_ns_chi03_sL::synapse0x36c5910() {
   return (neuron0x36a5550()*-0.00601294);
}

double NNfunction_ns_chi03_sL::synapse0x36c5950() {
   return (neuron0x36a5890()*-0.0264347);
}

double NNfunction_ns_chi03_sL::synapse0x36c5990() {
   return (neuron0x36a5bd0()*0.00562734);
}

double NNfunction_ns_chi03_sL::synapse0x36c59d0() {
   return (neuron0x36a5f10()*0.0135846);
}

double NNfunction_ns_chi03_sL::synapse0x36c5a10() {
   return (neuron0x36a6250()*0.0448164);
}

double NNfunction_ns_chi03_sL::synapse0x36c5a50() {
   return (neuron0x36a6590()*0.042792);
}

double NNfunction_ns_chi03_sL::synapse0x36c5a90() {
   return (neuron0x36a68d0()*0.00306188);
}

double NNfunction_ns_chi03_sL::synapse0x36c5ad0() {
   return (neuron0x36a6c10()*0.0161578);
}

double NNfunction_ns_chi03_sL::synapse0x36c5b10() {
   return (neuron0x36a6f50()*0.175036);
}

double NNfunction_ns_chi03_sL::synapse0x36c5b50() {
   return (neuron0x36a7290()*-0.0234614);
}

double NNfunction_ns_chi03_sL::synapse0x36c5b90() {
   return (neuron0x36a75d0()*0.0354394);
}

double NNfunction_ns_chi03_sL::synapse0x36c5bd0() {
   return (neuron0x36a7910()*0.0575938);
}

double NNfunction_ns_chi03_sL::synapse0x36c5660() {
   return (neuron0x36a7c50()*-0.0031683);
}

double NNfunction_ns_chi03_sL::synapse0x36c56a0() {
   return (neuron0x36a81b0()*0.0381616);
}

double NNfunction_ns_chi03_sL::synapse0x36c5d20() {
   return (neuron0x36a83d0()*0.00210245);
}

double NNfunction_ns_chi03_sL::synapse0x36c5d60() {
   return (neuron0x36a8710()*-0.0231014);
}

double NNfunction_ns_chi03_sL::synapse0x36c5da0() {
   return (neuron0x36a8a50()*0.015282);
}

double NNfunction_ns_chi03_sL::synapse0x36c5de0() {
   return (neuron0x36a8d90()*0.00259098);
}

double NNfunction_ns_chi03_sL::synapse0x36c5e20() {
   return (neuron0x36a90d0()*0.00837421);
}

double NNfunction_ns_chi03_sL::synapse0x36c5e60() {
   return (neuron0x36a9410()*-0.3917);
}

double NNfunction_ns_chi03_sL::synapse0x36ae910() {
   return (neuron0x36a4850()*0.0425031);
}

double NNfunction_ns_chi03_sL::synapse0x36ae950() {
   return (neuron0x36a4b90()*6.61419);
}

double NNfunction_ns_chi03_sL::synapse0x36ae990() {
   return (neuron0x36a4ed0()*0.442053);
}

double NNfunction_ns_chi03_sL::synapse0x36ae9d0() {
   return (neuron0x36a5210()*0.00326851);
}

double NNfunction_ns_chi03_sL::synapse0x36aea10() {
   return (neuron0x36a5550()*0.00916681);
}

double NNfunction_ns_chi03_sL::synapse0x36aea50() {
   return (neuron0x36a5890()*-0.0103368);
}

double NNfunction_ns_chi03_sL::synapse0x36aea90() {
   return (neuron0x36a5bd0()*-0.0192783);
}

double NNfunction_ns_chi03_sL::synapse0x36aead0() {
   return (neuron0x36a5f10()*-0.0106834);
}

double NNfunction_ns_chi03_sL::synapse0x36c65f0() {
   return (neuron0x36a6250()*0.0106587);
}

double NNfunction_ns_chi03_sL::synapse0x36c6630() {
   return (neuron0x36a6590()*0.00358884);
}

double NNfunction_ns_chi03_sL::synapse0x36c6670() {
   return (neuron0x36a68d0()*-0.0272907);
}

double NNfunction_ns_chi03_sL::synapse0x36c66b0() {
   return (neuron0x36a6c10()*0.0136092);
}

double NNfunction_ns_chi03_sL::synapse0x36c66f0() {
   return (neuron0x36a6f50()*-0.0144658);
}

double NNfunction_ns_chi03_sL::synapse0x36c6730() {
   return (neuron0x36a7290()*0.0113663);
}

double NNfunction_ns_chi03_sL::synapse0x36c6770() {
   return (neuron0x36a75d0()*0.00519348);
}

double NNfunction_ns_chi03_sL::synapse0x36c67b0() {
   return (neuron0x36a7910()*-0.0103396);
}

double NNfunction_ns_chi03_sL::synapse0x36c6030() {
   return (neuron0x36a7c50()*-0.0208903);
}

double NNfunction_ns_chi03_sL::synapse0x36c6070() {
   return (neuron0x36a81b0()*0.00497657);
}

double NNfunction_ns_chi03_sL::synapse0x36c6900() {
   return (neuron0x36a83d0()*-0.00991351);
}

double NNfunction_ns_chi03_sL::synapse0x36c6940() {
   return (neuron0x36a8710()*0.0156518);
}

double NNfunction_ns_chi03_sL::synapse0x36c6980() {
   return (neuron0x36a8a50()*-0.0063136);
}

double NNfunction_ns_chi03_sL::synapse0x36c69c0() {
   return (neuron0x36a8d90()*-0.0212949);
}

double NNfunction_ns_chi03_sL::synapse0x36c6a00() {
   return (neuron0x36a90d0()*0.0194007);
}

double NNfunction_ns_chi03_sL::synapse0x36c6a40() {
   return (neuron0x36a9410()*-1.28282);
}

double NNfunction_ns_chi03_sL::synapse0x36c6dc0() {
   return (neuron0x36a4850()*0.422948);
}

double NNfunction_ns_chi03_sL::synapse0x36c6e00() {
   return (neuron0x36a4b90()*0.0615992);
}

double NNfunction_ns_chi03_sL::synapse0x36c6e40() {
   return (neuron0x36a4ed0()*0.0602881);
}

double NNfunction_ns_chi03_sL::synapse0x36c6e80() {
   return (neuron0x36a5210()*-0.803128);
}

double NNfunction_ns_chi03_sL::synapse0x36c6ec0() {
   return (neuron0x36a5550()*-0.00608119);
}

double NNfunction_ns_chi03_sL::synapse0x36c6f00() {
   return (neuron0x36a5890()*0.209253);
}

double NNfunction_ns_chi03_sL::synapse0x36c6f40() {
   return (neuron0x36a5bd0()*0.0569929);
}

double NNfunction_ns_chi03_sL::synapse0x36c6f80() {
   return (neuron0x36a5f10()*0.180758);
}

double NNfunction_ns_chi03_sL::synapse0x36c6fc0() {
   return (neuron0x36a6250()*-0.167115);
}

double NNfunction_ns_chi03_sL::synapse0x36c7000() {
   return (neuron0x36a6590()*0.122684);
}

double NNfunction_ns_chi03_sL::synapse0x36c7040() {
   return (neuron0x36a68d0()*-0.0236994);
}

double NNfunction_ns_chi03_sL::synapse0x36c7080() {
   return (neuron0x36a6c10()*0.729008);
}

double NNfunction_ns_chi03_sL::synapse0x36c70c0() {
   return (neuron0x36a6f50()*-0.249541);
}

double NNfunction_ns_chi03_sL::synapse0x36c7100() {
   return (neuron0x36a7290()*-0.626165);
}

double NNfunction_ns_chi03_sL::synapse0x36c7140() {
   return (neuron0x36a75d0()*0.649088);
}

double NNfunction_ns_chi03_sL::synapse0x36c7180() {
   return (neuron0x36a7910()*0.125306);
}

double NNfunction_ns_chi03_sL::synapse0x36c6c10() {
   return (neuron0x36a7c50()*-1.16384);
}

double NNfunction_ns_chi03_sL::synapse0x36c6c50() {
   return (neuron0x36a81b0()*0.577994);
}

double NNfunction_ns_chi03_sL::synapse0x36c72d0() {
   return (neuron0x36a83d0()*-0.429467);
}

double NNfunction_ns_chi03_sL::synapse0x36c7310() {
   return (neuron0x36a8710()*0.441443);
}

double NNfunction_ns_chi03_sL::synapse0x36c7350() {
   return (neuron0x36a8a50()*0.559756);
}

double NNfunction_ns_chi03_sL::synapse0x36c7390() {
   return (neuron0x36a8d90()*-0.346989);
}

double NNfunction_ns_chi03_sL::synapse0x36c73d0() {
   return (neuron0x36a90d0()*-0.203409);
}

double NNfunction_ns_chi03_sL::synapse0x36c7410() {
   return (neuron0x36a9410()*0.0411016);
}

double NNfunction_ns_chi03_sL::synapse0x36c7790() {
   return (neuron0x36a4850()*0.0290027);
}

double NNfunction_ns_chi03_sL::synapse0x36c77d0() {
   return (neuron0x36a4b90()*-0.0108599);
}

double NNfunction_ns_chi03_sL::synapse0x36c7810() {
   return (neuron0x36a4ed0()*-1.13874);
}

double NNfunction_ns_chi03_sL::synapse0x36c7850() {
   return (neuron0x36a5210()*0.00815428);
}

double NNfunction_ns_chi03_sL::synapse0x36c7890() {
   return (neuron0x36a5550()*-0.00645441);
}

double NNfunction_ns_chi03_sL::synapse0x36c78d0() {
   return (neuron0x36a5890()*0.00678308);
}

double NNfunction_ns_chi03_sL::synapse0x36c7910() {
   return (neuron0x36a5bd0()*-0.00851965);
}

double NNfunction_ns_chi03_sL::synapse0x36c7950() {
   return (neuron0x36a5f10()*0.00108214);
}

double NNfunction_ns_chi03_sL::synapse0x36c7990() {
   return (neuron0x36a6250()*0.0022487);
}

double NNfunction_ns_chi03_sL::synapse0x36c79d0() {
   return (neuron0x36a6590()*0.0116943);
}

double NNfunction_ns_chi03_sL::synapse0x36c7a10() {
   return (neuron0x36a68d0()*0.00941415);
}

double NNfunction_ns_chi03_sL::synapse0x36c7a50() {
   return (neuron0x36a6c10()*-0.000106837);
}

double NNfunction_ns_chi03_sL::synapse0x36c7a90() {
   return (neuron0x36a6f50()*-0.176748);
}

double NNfunction_ns_chi03_sL::synapse0x36c7ad0() {
   return (neuron0x36a7290()*-0.00371502);
}

double NNfunction_ns_chi03_sL::synapse0x36c7b10() {
   return (neuron0x36a75d0()*0.00864284);
}

double NNfunction_ns_chi03_sL::synapse0x36c7b50() {
   return (neuron0x36a7910()*-0.0185363);
}

double NNfunction_ns_chi03_sL::synapse0x36c75e0() {
   return (neuron0x36a7c50()*0.00212511);
}

double NNfunction_ns_chi03_sL::synapse0x36c7620() {
   return (neuron0x36a81b0()*-0.00596512);
}

double NNfunction_ns_chi03_sL::synapse0x36b8150() {
   return (neuron0x36a83d0()*0.00393315);
}

double NNfunction_ns_chi03_sL::synapse0x36b8190() {
   return (neuron0x36a8710()*0.00235772);
}

double NNfunction_ns_chi03_sL::synapse0x36b81d0() {
   return (neuron0x36a8a50()*0.00695903);
}

double NNfunction_ns_chi03_sL::synapse0x36b8210() {
   return (neuron0x36a8d90()*-0.00585198);
}

double NNfunction_ns_chi03_sL::synapse0x36b8250() {
   return (neuron0x36a90d0()*-0.00561869);
}

double NNfunction_ns_chi03_sL::synapse0x36b8290() {
   return (neuron0x36a9410()*-0.287781);
}

double NNfunction_ns_chi03_sL::synapse0x36b8610() {
   return (neuron0x36a4850()*-0.0260938);
}

double NNfunction_ns_chi03_sL::synapse0x36b8650() {
   return (neuron0x36a4b90()*0.0180023);
}

double NNfunction_ns_chi03_sL::synapse0x36b8690() {
   return (neuron0x36a4ed0()*-2.22155);
}

double NNfunction_ns_chi03_sL::synapse0x36b86d0() {
   return (neuron0x36a5210()*-0.000672752);
}

double NNfunction_ns_chi03_sL::synapse0x36b8710() {
   return (neuron0x36a5550()*-0.00534118);
}

double NNfunction_ns_chi03_sL::synapse0x36b8750() {
   return (neuron0x36a5890()*-0.0107862);
}

double NNfunction_ns_chi03_sL::synapse0x36b8790() {
   return (neuron0x36a5bd0()*0.0036002);
}

double NNfunction_ns_chi03_sL::synapse0x36b87d0() {
   return (neuron0x36a5f10()*0.00708565);
}

double NNfunction_ns_chi03_sL::synapse0x36b8810() {
   return (neuron0x36a6250()*-0.00524978);
}

double NNfunction_ns_chi03_sL::synapse0x36b8850() {
   return (neuron0x36a6590()*0.00561655);
}

double NNfunction_ns_chi03_sL::synapse0x36b8890() {
   return (neuron0x36a68d0()*-0.0140764);
}

double NNfunction_ns_chi03_sL::synapse0x36b88d0() {
   return (neuron0x36a6c10()*-0.0125309);
}

double NNfunction_ns_chi03_sL::synapse0x36b8910() {
   return (neuron0x36a6f50()*0.324393);
}

double NNfunction_ns_chi03_sL::synapse0x36b8950() {
   return (neuron0x36a7290()*-0.00293181);
}

double NNfunction_ns_chi03_sL::synapse0x36b8990() {
   return (neuron0x36a75d0()*-0.00848704);
}

double NNfunction_ns_chi03_sL::synapse0x36b89d0() {
   return (neuron0x36a7910()*0.00841359);
}

double NNfunction_ns_chi03_sL::synapse0x36b8460() {
   return (neuron0x36a7c50()*-0.0242696);
}

double NNfunction_ns_chi03_sL::synapse0x36b84a0() {
   return (neuron0x36a81b0()*0.00269547);
}

double NNfunction_ns_chi03_sL::synapse0x36b8b20() {
   return (neuron0x36a83d0()*0.00486366);
}

double NNfunction_ns_chi03_sL::synapse0x36b8b60() {
   return (neuron0x36a8710()*-0.00478223);
}

double NNfunction_ns_chi03_sL::synapse0x36b8ba0() {
   return (neuron0x36a8a50()*0.00291796);
}

double NNfunction_ns_chi03_sL::synapse0x36b8be0() {
   return (neuron0x36a8d90()*-0.0167483);
}

double NNfunction_ns_chi03_sL::synapse0x36b8c20() {
   return (neuron0x36a90d0()*-0.00951472);
}

double NNfunction_ns_chi03_sL::synapse0x36b8c60() {
   return (neuron0x36a9410()*0.952226);
}

double NNfunction_ns_chi03_sL::synapse0x36b8fe0() {
   return (neuron0x36a4850()*-0.0128239);
}

double NNfunction_ns_chi03_sL::synapse0x36b9020() {
   return (neuron0x36a4b90()*0.102021);
}

double NNfunction_ns_chi03_sL::synapse0x36b9060() {
   return (neuron0x36a4ed0()*0.153147);
}

double NNfunction_ns_chi03_sL::synapse0x36b90a0() {
   return (neuron0x36a5210()*0.0961985);
}

double NNfunction_ns_chi03_sL::synapse0x36b90e0() {
   return (neuron0x36a5550()*-0.0423455);
}

double NNfunction_ns_chi03_sL::synapse0x36b9120() {
   return (neuron0x36a5890()*0.0193764);
}

double NNfunction_ns_chi03_sL::synapse0x36b9160() {
   return (neuron0x36a5bd0()*-0.0573545);
}

double NNfunction_ns_chi03_sL::synapse0x36b91a0() {
   return (neuron0x36a5f10()*-0.0217988);
}

double NNfunction_ns_chi03_sL::synapse0x36b91e0() {
   return (neuron0x36a6250()*0.0145887);
}

double NNfunction_ns_chi03_sL::synapse0x36b9220() {
   return (neuron0x36a6590()*0.0290493);
}

double NNfunction_ns_chi03_sL::synapse0x36b9260() {
   return (neuron0x36a68d0()*-0.0076207);
}

double NNfunction_ns_chi03_sL::synapse0x36b92a0() {
   return (neuron0x36a6c10()*0.0487163);
}

double NNfunction_ns_chi03_sL::synapse0x36b92e0() {
   return (neuron0x36a6f50()*0.451401);
}

double NNfunction_ns_chi03_sL::synapse0x36b9320() {
   return (neuron0x36a7290()*0.0407216);
}

double NNfunction_ns_chi03_sL::synapse0x36b9360() {
   return (neuron0x36a75d0()*-0.0265288);
}

double NNfunction_ns_chi03_sL::synapse0x36b93a0() {
   return (neuron0x36a7910()*-0.0200002);
}

double NNfunction_ns_chi03_sL::synapse0x36b8e30() {
   return (neuron0x36a7c50()*-0.00508668);
}

double NNfunction_ns_chi03_sL::synapse0x36b8e70() {
   return (neuron0x36a81b0()*0.0139992);
}

double NNfunction_ns_chi03_sL::synapse0x36b94f0() {
   return (neuron0x36a83d0()*0.0534396);
}

double NNfunction_ns_chi03_sL::synapse0x36b9530() {
   return (neuron0x36a8710()*0.00654794);
}

double NNfunction_ns_chi03_sL::synapse0x36b9570() {
   return (neuron0x36a8a50()*-0.0114146);
}

double NNfunction_ns_chi03_sL::synapse0x36b95b0() {
   return (neuron0x36a8d90()*-0.0528696);
}

double NNfunction_ns_chi03_sL::synapse0x36b95f0() {
   return (neuron0x36a90d0()*0.0425556);
}

double NNfunction_ns_chi03_sL::synapse0x36b9630() {
   return (neuron0x36a9410()*0.790299);
}

double NNfunction_ns_chi03_sL::synapse0x36b99b0() {
   return (neuron0x36a4850()*-0.172313);
}

double NNfunction_ns_chi03_sL::synapse0x36b99f0() {
   return (neuron0x36a4b90()*0.0345176);
}

double NNfunction_ns_chi03_sL::synapse0x36b9a30() {
   return (neuron0x36a4ed0()*0.884794);
}

double NNfunction_ns_chi03_sL::synapse0x36b9a70() {
   return (neuron0x36a5210()*-0.635662);
}

double NNfunction_ns_chi03_sL::synapse0x36b9ab0() {
   return (neuron0x36a5550()*-0.733017);
}

double NNfunction_ns_chi03_sL::synapse0x36b9af0() {
   return (neuron0x36a5890()*-0.290115);
}

double NNfunction_ns_chi03_sL::synapse0x36b9b30() {
   return (neuron0x36a5bd0()*-0.633109);
}

double NNfunction_ns_chi03_sL::synapse0x36b9b70() {
   return (neuron0x36a5f10()*-0.0591512);
}

double NNfunction_ns_chi03_sL::synapse0x36b9bb0() {
   return (neuron0x36a6250()*-0.404402);
}

double NNfunction_ns_chi03_sL::synapse0x36b9bf0() {
   return (neuron0x36a6590()*-0.491912);
}

double NNfunction_ns_chi03_sL::synapse0x36b9c30() {
   return (neuron0x36a68d0()*0.86617);
}

double NNfunction_ns_chi03_sL::synapse0x36b9c70() {
   return (neuron0x36a6c10()*-0.433492);
}

double NNfunction_ns_chi03_sL::synapse0x36b9cb0() {
   return (neuron0x36a6f50()*1.5188);
}

double NNfunction_ns_chi03_sL::synapse0x36b9cf0() {
   return (neuron0x36a7290()*0.0325834);
}

double NNfunction_ns_chi03_sL::synapse0x36b9d30() {
   return (neuron0x36a75d0()*0.246016);
}

double NNfunction_ns_chi03_sL::synapse0x36b9d70() {
   return (neuron0x36a7910()*-1.0662);
}

double NNfunction_ns_chi03_sL::synapse0x36b9800() {
   return (neuron0x36a7c50()*-0.746856);
}

double NNfunction_ns_chi03_sL::synapse0x36b9840() {
   return (neuron0x36a81b0()*-0.858097);
}

double NNfunction_ns_chi03_sL::synapse0x36b9ec0() {
   return (neuron0x36a83d0()*0.393808);
}

double NNfunction_ns_chi03_sL::synapse0x36b9f00() {
   return (neuron0x36a8710()*-0.74781);
}

double NNfunction_ns_chi03_sL::synapse0x36b9f40() {
   return (neuron0x36a8a50()*0.0336602);
}

double NNfunction_ns_chi03_sL::synapse0x36b9f80() {
   return (neuron0x36a8d90()*0.957741);
}

double NNfunction_ns_chi03_sL::synapse0x36b9fc0() {
   return (neuron0x36a90d0()*-0.14127);
}

double NNfunction_ns_chi03_sL::synapse0x36ba000() {
   return (neuron0x36a9410()*-1.16538);
}

double NNfunction_ns_chi03_sL::synapse0x36cbed0() {
   return (neuron0x36a4850()*0.00140307);
}

double NNfunction_ns_chi03_sL::synapse0x36cbf10() {
   return (neuron0x36a4b90()*0.104332);
}

double NNfunction_ns_chi03_sL::synapse0x36cbf50() {
   return (neuron0x36a4ed0()*0.258712);
}

double NNfunction_ns_chi03_sL::synapse0x36cbf90() {
   return (neuron0x36a5210()*0.885863);
}

double NNfunction_ns_chi03_sL::synapse0x36cbfd0() {
   return (neuron0x36a5550()*-0.0715409);
}

double NNfunction_ns_chi03_sL::synapse0x36cc010() {
   return (neuron0x36a5890()*0.0208783);
}

double NNfunction_ns_chi03_sL::synapse0x36cc050() {
   return (neuron0x36a5bd0()*-0.0142653);
}

double NNfunction_ns_chi03_sL::synapse0x36cc090() {
   return (neuron0x36a5f10()*-0.0153352);
}

double NNfunction_ns_chi03_sL::synapse0x36cc0d0() {
   return (neuron0x36a6250()*0.00894692);
}

double NNfunction_ns_chi03_sL::synapse0x36cc110() {
   return (neuron0x36a6590()*0.0236011);
}

double NNfunction_ns_chi03_sL::synapse0x36cc150() {
   return (neuron0x36a68d0()*-0.0167411);
}

double NNfunction_ns_chi03_sL::synapse0x36cc190() {
   return (neuron0x36a6c10()*-0.0221654);
}

double NNfunction_ns_chi03_sL::synapse0x36cc1d0() {
   return (neuron0x36a6f50()*0.521398);
}

double NNfunction_ns_chi03_sL::synapse0x36cc210() {
   return (neuron0x36a7290()*0.0732386);
}

double NNfunction_ns_chi03_sL::synapse0x36cc250() {
   return (neuron0x36a75d0()*-0.0381432);
}

double NNfunction_ns_chi03_sL::synapse0x36cc290() {
   return (neuron0x36a7910()*-0.0261658);
}

double NNfunction_ns_chi03_sL::synapse0x36ba040() {
   return (neuron0x36a7c50()*0.0216269);
}

double NNfunction_ns_chi03_sL::synapse0x36ba080() {
   return (neuron0x36a81b0()*-0.00528126);
}

double NNfunction_ns_chi03_sL::synapse0x36cc3e0() {
   return (neuron0x36a83d0()*-0.00244336);
}

double NNfunction_ns_chi03_sL::synapse0x36cc420() {
   return (neuron0x36a8710()*-0.00957732);
}

double NNfunction_ns_chi03_sL::synapse0x36cc460() {
   return (neuron0x36a8a50()*0.00643128);
}

double NNfunction_ns_chi03_sL::synapse0x36cc4a0() {
   return (neuron0x36a8d90()*-0.0271851);
}

double NNfunction_ns_chi03_sL::synapse0x36cc4e0() {
   return (neuron0x36a90d0()*0.00919571);
}

double NNfunction_ns_chi03_sL::synapse0x36cc520() {
   return (neuron0x36a9410()*0.0184894);
}

double NNfunction_ns_chi03_sL::synapse0x36cc8a0() {
   return (neuron0x36a4850()*-0.0262837);
}

double NNfunction_ns_chi03_sL::synapse0x36cc8e0() {
   return (neuron0x36a4b90()*0.0355135);
}

double NNfunction_ns_chi03_sL::synapse0x36cc920() {
   return (neuron0x36a4ed0()*0.0575432);
}

double NNfunction_ns_chi03_sL::synapse0x36cc960() {
   return (neuron0x36a5210()*-0.302585);
}

double NNfunction_ns_chi03_sL::synapse0x36cc9a0() {
   return (neuron0x36a5550()*-0.0153449);
}

double NNfunction_ns_chi03_sL::synapse0x36cc9e0() {
   return (neuron0x36a5890()*0.00335455);
}

double NNfunction_ns_chi03_sL::synapse0x36cca20() {
   return (neuron0x36a5bd0()*0.000164259);
}

double NNfunction_ns_chi03_sL::synapse0x36cca60() {
   return (neuron0x36a5f10()*-0.00990889);
}

double NNfunction_ns_chi03_sL::synapse0x36ccaa0() {
   return (neuron0x36a6250()*-0.0128673);
}

double NNfunction_ns_chi03_sL::synapse0x36ccae0() {
   return (neuron0x36a6590()*-0.00736416);
}

double NNfunction_ns_chi03_sL::synapse0x36ccb20() {
   return (neuron0x36a68d0()*-0.0142867);
}

double NNfunction_ns_chi03_sL::synapse0x36ccb60() {
   return (neuron0x36a6c10()*-0.0068625);
}

double NNfunction_ns_chi03_sL::synapse0x36ccba0() {
   return (neuron0x36a6f50()*0.320168);
}

double NNfunction_ns_chi03_sL::synapse0x36ccbe0() {
   return (neuron0x36a7290()*-0.0029588);
}

double NNfunction_ns_chi03_sL::synapse0x36ccc20() {
   return (neuron0x36a75d0()*0.0108504);
}

double NNfunction_ns_chi03_sL::synapse0x36ccc60() {
   return (neuron0x36a7910()*0.0318434);
}

double NNfunction_ns_chi03_sL::synapse0x36cc6f0() {
   return (neuron0x36a7c50()*-0.00644013);
}

double NNfunction_ns_chi03_sL::synapse0x36cc730() {
   return (neuron0x36a81b0()*0.00276552);
}

double NNfunction_ns_chi03_sL::synapse0x36ccdb0() {
   return (neuron0x36a83d0()*0.0137557);
}

double NNfunction_ns_chi03_sL::synapse0x36ccdf0() {
   return (neuron0x36a8710()*0.00706516);
}

double NNfunction_ns_chi03_sL::synapse0x36cce30() {
   return (neuron0x36a8a50()*-0.0161687);
}

double NNfunction_ns_chi03_sL::synapse0x36cce70() {
   return (neuron0x36a8d90()*-0.000672029);
}

double NNfunction_ns_chi03_sL::synapse0x36cceb0() {
   return (neuron0x36a90d0()*0.0082223);
}

double NNfunction_ns_chi03_sL::synapse0x36ccef0() {
   return (neuron0x36a9410()*-0.0133303);
}

double NNfunction_ns_chi03_sL::synapse0x36cd270() {
   return (neuron0x36a4850()*-0.00144624);
}

double NNfunction_ns_chi03_sL::synapse0x36cd2b0() {
   return (neuron0x36a4b90()*-0.0636272);
}

double NNfunction_ns_chi03_sL::synapse0x36cd2f0() {
   return (neuron0x36a4ed0()*0.0173931);
}

double NNfunction_ns_chi03_sL::synapse0x36cd330() {
   return (neuron0x36a5210()*1.25894);
}

double NNfunction_ns_chi03_sL::synapse0x36cd370() {
   return (neuron0x36a5550()*0.0136938);
}

double NNfunction_ns_chi03_sL::synapse0x36cd3b0() {
   return (neuron0x36a5890()*-0.0230428);
}

double NNfunction_ns_chi03_sL::synapse0x36cd3f0() {
   return (neuron0x36a5bd0()*-0.00135911);
}

double NNfunction_ns_chi03_sL::synapse0x36cd430() {
   return (neuron0x36a5f10()*0.0332067);
}

double NNfunction_ns_chi03_sL::synapse0x36cd470() {
   return (neuron0x36a6250()*-0.0249907);
}

double NNfunction_ns_chi03_sL::synapse0x36cd4b0() {
   return (neuron0x36a6590()*-0.0111834);
}

double NNfunction_ns_chi03_sL::synapse0x36cd4f0() {
   return (neuron0x36a68d0()*-0.0211009);
}

double NNfunction_ns_chi03_sL::synapse0x36cd530() {
   return (neuron0x36a6c10()*0.0329955);
}

double NNfunction_ns_chi03_sL::synapse0x36cd570() {
   return (neuron0x36a6f50()*-0.878441);
}

double NNfunction_ns_chi03_sL::synapse0x36cd5b0() {
   return (neuron0x36a7290()*-0.0803734);
}

double NNfunction_ns_chi03_sL::synapse0x36cd5f0() {
   return (neuron0x36a75d0()*0.077752);
}

double NNfunction_ns_chi03_sL::synapse0x36cd630() {
   return (neuron0x36a7910()*0.00632344);
}

double NNfunction_ns_chi03_sL::synapse0x36cd0c0() {
   return (neuron0x36a7c50()*-0.033644);
}

double NNfunction_ns_chi03_sL::synapse0x36cd100() {
   return (neuron0x36a81b0()*0.00682801);
}

double NNfunction_ns_chi03_sL::synapse0x36cd780() {
   return (neuron0x36a83d0()*0.0353088);
}

double NNfunction_ns_chi03_sL::synapse0x36cd7c0() {
   return (neuron0x36a8710()*-0.0195505);
}

double NNfunction_ns_chi03_sL::synapse0x36cd800() {
   return (neuron0x36a8a50()*0.00690294);
}

double NNfunction_ns_chi03_sL::synapse0x36cd840() {
   return (neuron0x36a8d90()*-0.000247676);
}

double NNfunction_ns_chi03_sL::synapse0x36cd880() {
   return (neuron0x36a90d0()*0.000747126);
}

double NNfunction_ns_chi03_sL::synapse0x36cd8c0() {
   return (neuron0x36a9410()*0.113305);
}

double NNfunction_ns_chi03_sL::synapse0x36cdc40() {
   return (neuron0x36a4850()*0.284084);
}

double NNfunction_ns_chi03_sL::synapse0x36cdc80() {
   return (neuron0x36a4b90()*0.0971048);
}

double NNfunction_ns_chi03_sL::synapse0x36cdcc0() {
   return (neuron0x36a4ed0()*0.609456);
}

double NNfunction_ns_chi03_sL::synapse0x36cdd00() {
   return (neuron0x36a5210()*-0.185469);
}

double NNfunction_ns_chi03_sL::synapse0x36cdd40() {
   return (neuron0x36a5550()*0.247234);
}

double NNfunction_ns_chi03_sL::synapse0x36cdd80() {
   return (neuron0x36a5890()*-0.0720318);
}

double NNfunction_ns_chi03_sL::synapse0x36cddc0() {
   return (neuron0x36a5bd0()*0.0879331);
}

double NNfunction_ns_chi03_sL::synapse0x36cde00() {
   return (neuron0x36a5f10()*0.0833804);
}

double NNfunction_ns_chi03_sL::synapse0x36cde40() {
   return (neuron0x36a6250()*-0.08244);
}

double NNfunction_ns_chi03_sL::synapse0x36cde80() {
   return (neuron0x36a6590()*-0.074673);
}

double NNfunction_ns_chi03_sL::synapse0x36cdec0() {
   return (neuron0x36a68d0()*-0.00248054);
}

double NNfunction_ns_chi03_sL::synapse0x36cdf00() {
   return (neuron0x36a6c10()*0.225433);
}

double NNfunction_ns_chi03_sL::synapse0x36cdf40() {
   return (neuron0x36a6f50()*0.197582);
}

double NNfunction_ns_chi03_sL::synapse0x36cdf80() {
   return (neuron0x36a7290()*-0.136066);
}

double NNfunction_ns_chi03_sL::synapse0x36cdfc0() {
   return (neuron0x36a75d0()*-0.0601885);
}

double NNfunction_ns_chi03_sL::synapse0x36ce000() {
   return (neuron0x36a7910()*0.279679);
}

double NNfunction_ns_chi03_sL::synapse0x36cda90() {
   return (neuron0x36a7c50()*-0.24997);
}

double NNfunction_ns_chi03_sL::synapse0x36cdad0() {
   return (neuron0x36a81b0()*0.497375);
}

double NNfunction_ns_chi03_sL::synapse0x36ce150() {
   return (neuron0x36a83d0()*0.100475);
}

double NNfunction_ns_chi03_sL::synapse0x36ce190() {
   return (neuron0x36a8710()*-0.110966);
}

double NNfunction_ns_chi03_sL::synapse0x36ce1d0() {
   return (neuron0x36a8a50()*0.350353);
}

double NNfunction_ns_chi03_sL::synapse0x36ce210() {
   return (neuron0x36a8d90()*-0.0996734);
}

double NNfunction_ns_chi03_sL::synapse0x36ce250() {
   return (neuron0x36a90d0()*0.044057);
}

double NNfunction_ns_chi03_sL::synapse0x36ce290() {
   return (neuron0x36a9410()*0.472275);
}

double NNfunction_ns_chi03_sL::synapse0x346e1a0() {
   return (neuron0x36a9880()*0.037349);
}

double NNfunction_ns_chi03_sL::synapse0x346e1e0() {
   return (neuron0x36aa1d0()*0.611619);
}

double NNfunction_ns_chi03_sL::synapse0x36abd40() {
   return (neuron0x36aacb0()*0.205981);
}

double NNfunction_ns_chi03_sL::synapse0x36abd80() {
   return (neuron0x36aa750()*0.174212);
}

double NNfunction_ns_chi03_sL::synapse0x36ac710() {
   return (neuron0x36aba90()*-0.0618142);
}

double NNfunction_ns_chi03_sL::synapse0x36ac750() {
   return (neuron0x36ac460()*0.485974);
}

double NNfunction_ns_chi03_sL::synapse0x36ad4e0() {
   return (neuron0x36ad230()*1.03984);
}

double NNfunction_ns_chi03_sL::synapse0x36ad520() {
   return (neuron0x36adc00()*0.076916);
}

double NNfunction_ns_chi03_sL::synapse0x36adeb0() {
   return (neuron0x36ae5d0()*0.107619);
}

double NNfunction_ns_chi03_sL::synapse0x36adef0() {
   return (neuron0x36af0b0()*0.78574);
}

double NNfunction_ns_chi03_sL::synapse0x36ae880() {
   return (neuron0x36afa80()*0.553219);
}

double NNfunction_ns_chi03_sL::synapse0x36ae8c0() {
   return (neuron0x36acb60()*0.176022);
}

double NNfunction_ns_chi03_sL::synapse0x36af360() {
   return (neuron0x36b1630()*0.303874);
}

double NNfunction_ns_chi03_sL::synapse0x36af3a0() {
   return (neuron0x36b2000()*0.299178);
}

double NNfunction_ns_chi03_sL::synapse0x36afd30() {
   return (neuron0x36b29d0()*0.416313);
}

double NNfunction_ns_chi03_sL::synapse0x36afd70() {
   return (neuron0x36b33a0()*0.312404);
}

double NNfunction_ns_chi03_sL::synapse0x36ace10() {
   return (neuron0x36b51b0()*0.160005);
}

double NNfunction_ns_chi03_sL::synapse0x36ace50() {
   return (neuron0x36b5490()*0.47535);
}

double NNfunction_ns_chi03_sL::synapse0x36b18e0() {
   return (neuron0x36b5e60()*0.979773);
}

double NNfunction_ns_chi03_sL::synapse0x36b1920() {
   return (neuron0x36b6830()*0.66963);
}

double NNfunction_ns_chi03_sL::synapse0x36b22b0() {
   return (neuron0x36b7200()*0.381592);
}

double NNfunction_ns_chi03_sL::synapse0x36b22f0() {
   return (neuron0x36b7bd0()*0.715466);
}

double NNfunction_ns_chi03_sL::synapse0x36b2c80() {
   return (neuron0x36b0720()*0.429216);
}

double NNfunction_ns_chi03_sL::synapse0x36b2cc0() {
   return (neuron0x36b10f0()*0.521337);
}

double NNfunction_ns_chi03_sL::synapse0x36b3650() {
   return (neuron0x36ba960()*1.03522);
}

double NNfunction_ns_chi03_sL::synapse0x36b3690() {
   return (neuron0x36bb330()*0.630915);
}

double NNfunction_ns_chi03_sL::synapse0x36a77f0() {
   return (neuron0x36bbd00()*0.372322);
}

double NNfunction_ns_chi03_sL::synapse0x36a7830() {
   return (neuron0x36bc6d0()*0.207781);
}

double NNfunction_ns_chi03_sL::synapse0x36b5740() {
   return (neuron0x36bd0a0()*0.51692);
}

double NNfunction_ns_chi03_sL::synapse0x36b5780() {
   return (neuron0x36bda70()*-0.000755472);
}

double NNfunction_ns_chi03_sL::synapse0x36b6110() {
   return (neuron0x36be440()*0.203417);
}

double NNfunction_ns_chi03_sL::synapse0x36b6150() {
   return (neuron0x36bee10()*0.160354);
}

double NNfunction_ns_chi03_sL::synapse0x36b6ae0() {
   return (neuron0x36b4ea0()*0.326607);
}

double NNfunction_ns_chi03_sL::synapse0x36b6b20() {
   return (neuron0x36c19f0()*0.994743);
}

double NNfunction_ns_chi03_sL::synapse0x36b74b0() {
   return (neuron0x36c23c0()*0.0276866);
}

double NNfunction_ns_chi03_sL::synapse0x36b74f0() {
   return (neuron0x36c2d90()*1.24466);
}

double NNfunction_ns_chi03_sL::synapse0x36b7e80() {
   return (neuron0x36c3760()*-0.227084);
}

double NNfunction_ns_chi03_sL::synapse0x36b7ec0() {
   return (neuron0x36c4130()*0.271721);
}

double NNfunction_ns_chi03_sL::synapse0x36b09d0() {
   return (neuron0x36c4b00()*1.09678);
}

double NNfunction_ns_chi03_sL::synapse0x36b0a10() {
   return (neuron0x36c54d0()*0.552628);
}

double NNfunction_ns_chi03_sL::synapse0x36ba280() {
   return (neuron0x36c5ea0()*0.689554);
}

double NNfunction_ns_chi03_sL::synapse0x36ba2c0() {
   return (neuron0x36c6a80()*-0.236441);
}

double NNfunction_ns_chi03_sL::synapse0x36bac10() {
   return (neuron0x36c7450()*-0.788504);
}

double NNfunction_ns_chi03_sL::synapse0x36bac50() {
   return (neuron0x36b82d0()*0.907929);
}

double NNfunction_ns_chi03_sL::synapse0x36bb5e0() {
   return (neuron0x36b8ca0()*0.239164);
}

double NNfunction_ns_chi03_sL::synapse0x36bb620() {
   return (neuron0x36b9670()*1.41961);
}

double NNfunction_ns_chi03_sL::synapse0x36bbfb0() {
   return (neuron0x36cbcb0()*0.490885);
}

double NNfunction_ns_chi03_sL::synapse0x36bbff0() {
   return (neuron0x36cc560()*-0.244455);
}

double NNfunction_ns_chi03_sL::synapse0x36bc980() {
   return (neuron0x36ccf30()*0.657101);
}

double NNfunction_ns_chi03_sL::synapse0x36bc9c0() {
   return (neuron0x36cd900()*0.129294);
}

double NNfunction_ns_chi03_sL::synapse0x36bf0c0() {
   return (neuron0x36a9880()*-0.116547);
}

double NNfunction_ns_chi03_sL::synapse0x36bf100() {
   return (neuron0x36aa1d0()*-0.21181);
}

double NNfunction_ns_chi03_sL::synapse0x36b4680() {
   return (neuron0x36aacb0()*-3.342);
}

double NNfunction_ns_chi03_sL::synapse0x36b46c0() {
   return (neuron0x36aa750()*-3.74526);
}

double NNfunction_ns_chi03_sL::synapse0x36c1ca0() {
   return (neuron0x36aba90()*-0.0304946);
}

double NNfunction_ns_chi03_sL::synapse0x36c1ce0() {
   return (neuron0x36ac460()*0.083844);
}

double NNfunction_ns_chi03_sL::synapse0x36c2670() {
   return (neuron0x36ad230()*0.285828);
}

double NNfunction_ns_chi03_sL::synapse0x36c26b0() {
   return (neuron0x36adc00()*1.89585);
}

double NNfunction_ns_chi03_sL::synapse0x36c3040() {
   return (neuron0x36ae5d0()*-0.56382);
}

double NNfunction_ns_chi03_sL::synapse0x36c3080() {
   return (neuron0x36af0b0()*0.1288);
}

double NNfunction_ns_chi03_sL::synapse0x36c3a10() {
   return (neuron0x36afa80()*0.238957);
}

double NNfunction_ns_chi03_sL::synapse0x36c3a50() {
   return (neuron0x36acb60()*1.00244);
}

double NNfunction_ns_chi03_sL::synapse0x36c43e0() {
   return (neuron0x36b1630()*0.19677);
}

double NNfunction_ns_chi03_sL::synapse0x36c4420() {
   return (neuron0x36b2000()*-1.34952);
}

double NNfunction_ns_chi03_sL::synapse0x36c4db0() {
   return (neuron0x36b29d0()*-0.209333);
}

double NNfunction_ns_chi03_sL::synapse0x36c4df0() {
   return (neuron0x36b33a0()*0.0939347);
}

double NNfunction_ns_chi03_sL::synapse0x36c5780() {
   return (neuron0x36b51b0()*0.486185);
}

double NNfunction_ns_chi03_sL::synapse0x36c57c0() {
   return (neuron0x36b5490()*-0.657522);
}

double NNfunction_ns_chi03_sL::synapse0x36c6150() {
   return (neuron0x36b5e60()*-1.76481);
}

double NNfunction_ns_chi03_sL::synapse0x36c6190() {
   return (neuron0x36b6830()*-0.270685);
}

double NNfunction_ns_chi03_sL::synapse0x36c6d30() {
   return (neuron0x36b7200()*1.94828);
}

double NNfunction_ns_chi03_sL::synapse0x36c6d70() {
   return (neuron0x36b7bd0()*-1.44362);
}

double NNfunction_ns_chi03_sL::synapse0x36c7700() {
   return (neuron0x36b0720()*0.342417);
}

double NNfunction_ns_chi03_sL::synapse0x36c7740() {
   return (neuron0x36b10f0()*-0.0977833);
}

double NNfunction_ns_chi03_sL::synapse0x36b8580() {
   return (neuron0x36ba960()*0.0461276);
}

double NNfunction_ns_chi03_sL::synapse0x36b85c0() {
   return (neuron0x36bb330()*-0.191513);
}

double NNfunction_ns_chi03_sL::synapse0x36b8f50() {
   return (neuron0x36bbd00()*1.79317);
}

double NNfunction_ns_chi03_sL::synapse0x36b8f90() {
   return (neuron0x36bc6d0()*0.328479);
}

double NNfunction_ns_chi03_sL::synapse0x36b9920() {
   return (neuron0x36bd0a0()*0.074263);
}

double NNfunction_ns_chi03_sL::synapse0x36b9960() {
   return (neuron0x36bda70()*0.895209);
}

double NNfunction_ns_chi03_sL::synapse0x36cbe40() {
   return (neuron0x36be440()*-1.00047);
}

double NNfunction_ns_chi03_sL::synapse0x36cbe80() {
   return (neuron0x36bee10()*4.81598);
}

double NNfunction_ns_chi03_sL::synapse0x36cc810() {
   return (neuron0x36b4ea0()*-0.0832021);
}

double NNfunction_ns_chi03_sL::synapse0x36cc850() {
   return (neuron0x36c19f0()*-0.859835);
}

double NNfunction_ns_chi03_sL::synapse0x36cd1e0() {
   return (neuron0x36c23c0()*1.51729);
}

double NNfunction_ns_chi03_sL::synapse0x36cd220() {
   return (neuron0x36c2d90()*0.359351);
}

double NNfunction_ns_chi03_sL::synapse0x36cdbb0() {
   return (neuron0x36c3760()*3.28327);
}

double NNfunction_ns_chi03_sL::synapse0x36cdbf0() {
   return (neuron0x36c4130()*-1.24776);
}

double NNfunction_ns_chi03_sL::synapse0x36a9aa0() {
   return (neuron0x36c4b00()*-0.319348);
}

double NNfunction_ns_chi03_sL::synapse0x36a9ae0() {
   return (neuron0x36c54d0()*-4.43877);
}

double NNfunction_ns_chi03_sL::synapse0x36bd350() {
   return (neuron0x36c5ea0()*-2.75685);
}

double NNfunction_ns_chi03_sL::synapse0x36bd390() {
   return (neuron0x36c6a80()*0.0812077);
}

double NNfunction_ns_chi03_sL::synapse0x36ce2d0() {
   return (neuron0x36c7450()*-2.04148);
}

double NNfunction_ns_chi03_sL::synapse0x36ce310() {
   return (neuron0x36b82d0()*-2.91337);
}

double NNfunction_ns_chi03_sL::synapse0x36ce350() {
   return (neuron0x36b8ca0()*0.282538);
}

double NNfunction_ns_chi03_sL::synapse0x36ce390() {
   return (neuron0x36b9670()*0.0668326);
}

double NNfunction_ns_chi03_sL::synapse0x36d5240() {
   return (neuron0x36cbcb0()*0.590396);
}

double NNfunction_ns_chi03_sL::synapse0x36d5280() {
   return (neuron0x36cc560()*1.61077);
}

double NNfunction_ns_chi03_sL::synapse0x36d52c0() {
   return (neuron0x36ccf30()*-0.148188);
}

double NNfunction_ns_chi03_sL::synapse0x36d5300() {
   return (neuron0x36cd900()*-0.0391866);
}

double NNfunction_ns_chi03_sL::synapse0x36d5680() {
   return (neuron0x36a9880()*-0.0436445);
}

double NNfunction_ns_chi03_sL::synapse0x36d56c0() {
   return (neuron0x36aa1d0()*-0.0719328);
}

double NNfunction_ns_chi03_sL::synapse0x36d5700() {
   return (neuron0x36aacb0()*-3.44151);
}

double NNfunction_ns_chi03_sL::synapse0x36d5740() {
   return (neuron0x36aa750()*-3.32953);
}

double NNfunction_ns_chi03_sL::synapse0x36d5780() {
   return (neuron0x36aba90()*-0.00391085);
}

double NNfunction_ns_chi03_sL::synapse0x36d57c0() {
   return (neuron0x36ac460()*-0.0937283);
}

double NNfunction_ns_chi03_sL::synapse0x36d5800() {
   return (neuron0x36ad230()*0.164153);
}

double NNfunction_ns_chi03_sL::synapse0x36d5840() {
   return (neuron0x36adc00()*0.121619);
}

double NNfunction_ns_chi03_sL::synapse0x36d5880() {
   return (neuron0x36ae5d0()*0.102238);
}

double NNfunction_ns_chi03_sL::synapse0x36d58c0() {
   return (neuron0x36af0b0()*0.13175);
}

double NNfunction_ns_chi03_sL::synapse0x36d5900() {
   return (neuron0x36afa80()*0.210072);
}

double NNfunction_ns_chi03_sL::synapse0x36d5940() {
   return (neuron0x36acb60()*-0.350008);
}

double NNfunction_ns_chi03_sL::synapse0x36d5980() {
   return (neuron0x36b1630()*0.10952);
}

double NNfunction_ns_chi03_sL::synapse0x36d59c0() {
   return (neuron0x36b2000()*2.59022);
}

double NNfunction_ns_chi03_sL::synapse0x36d5a00() {
   return (neuron0x36b29d0()*-0.0592762);
}

double NNfunction_ns_chi03_sL::synapse0x36d5a40() {
   return (neuron0x36b33a0()*0.0693761);
}

double NNfunction_ns_chi03_sL::synapse0x36d54d0() {
   return (neuron0x36b51b0()*0.803744);
}

double NNfunction_ns_chi03_sL::synapse0x36d5510() {
   return (neuron0x36b5490()*0.556961);
}

double NNfunction_ns_chi03_sL::synapse0x36d5b90() {
   return (neuron0x36b5e60()*-1.44912);
}

double NNfunction_ns_chi03_sL::synapse0x36d5bd0() {
   return (neuron0x36b6830()*0.791942);
}

double NNfunction_ns_chi03_sL::synapse0x36d5c10() {
   return (neuron0x36b7200()*7.63994);
}

double NNfunction_ns_chi03_sL::synapse0x36d5c50() {
   return (neuron0x36b7bd0()*-1.13174);
}

double NNfunction_ns_chi03_sL::synapse0x36d5c90() {
   return (neuron0x36b0720()*0.235464);
}

double NNfunction_ns_chi03_sL::synapse0x36d5cd0() {
   return (neuron0x36b10f0()*-0.0683821);
}

double NNfunction_ns_chi03_sL::synapse0x36d5d10() {
   return (neuron0x36ba960()*0.0275374);
}

double NNfunction_ns_chi03_sL::synapse0x36d5d50() {
   return (neuron0x36bb330()*-0.246638);
}

double NNfunction_ns_chi03_sL::synapse0x36d5d90() {
   return (neuron0x36bbd00()*0.235679);
}

double NNfunction_ns_chi03_sL::synapse0x36d5dd0() {
   return (neuron0x36bc6d0()*0.182307);
}

double NNfunction_ns_chi03_sL::synapse0x36d5e10() {
   return (neuron0x36bd0a0()*0.0459707);
}

double NNfunction_ns_chi03_sL::synapse0x36d5e50() {
   return (neuron0x36bda70()*0.893902);
}

double NNfunction_ns_chi03_sL::synapse0x36d5e90() {
   return (neuron0x36be440()*0.534475);
}

double NNfunction_ns_chi03_sL::synapse0x36d5ed0() {
   return (neuron0x36bee10()*3.83344);
}

double NNfunction_ns_chi03_sL::synapse0x36d5a80() {
   return (neuron0x36b4ea0()*0.172522);
}

double NNfunction_ns_chi03_sL::synapse0x36d5ac0() {
   return (neuron0x36c19f0()*0.376429);
}

double NNfunction_ns_chi03_sL::synapse0x36d5b00() {
   return (neuron0x36c23c0()*1.49858);
}

double NNfunction_ns_chi03_sL::synapse0x36d5b40() {
   return (neuron0x36c2d90()*-0.0365047);
}

double NNfunction_ns_chi03_sL::synapse0x36d6120() {
   return (neuron0x36c3760()*3.31758);
}

double NNfunction_ns_chi03_sL::synapse0x36d6160() {
   return (neuron0x36c4130()*-0.634683);
}

double NNfunction_ns_chi03_sL::synapse0x36d61a0() {
   return (neuron0x36c4b00()*-0.20179);
}

double NNfunction_ns_chi03_sL::synapse0x36d61e0() {
   return (neuron0x36c54d0()*-4.41088);
}

double NNfunction_ns_chi03_sL::synapse0x36d6220() {
   return (neuron0x36c5ea0()*-1.90679);
}

double NNfunction_ns_chi03_sL::synapse0x36d6260() {
   return (neuron0x36c6a80()*0.0563838);
}

double NNfunction_ns_chi03_sL::synapse0x36d62a0() {
   return (neuron0x36c7450()*-3.88431);
}

double NNfunction_ns_chi03_sL::synapse0x36d62e0() {
   return (neuron0x36b82d0()*-1.39423);
}

double NNfunction_ns_chi03_sL::synapse0x36d6320() {
   return (neuron0x36b8ca0()*0.367773);
}

double NNfunction_ns_chi03_sL::synapse0x36d6360() {
   return (neuron0x36b9670()*0.0419502);
}

double NNfunction_ns_chi03_sL::synapse0x36d63a0() {
   return (neuron0x36cbcb0()*0.0416715);
}

double NNfunction_ns_chi03_sL::synapse0x36d63e0() {
   return (neuron0x36cc560()*-0.857979);
}

double NNfunction_ns_chi03_sL::synapse0x36d6420() {
   return (neuron0x36ccf30()*0.0893947);
}

double NNfunction_ns_chi03_sL::synapse0x36d6460() {
   return (neuron0x36cd900()*-0.0441835);
}

double NNfunction_ns_chi03_sL::synapse0x36d67e0() {
   return (neuron0x36a9880()*-0.172126);
}

double NNfunction_ns_chi03_sL::synapse0x36d6820() {
   return (neuron0x36aa1d0()*-0.357375);
}

double NNfunction_ns_chi03_sL::synapse0x36d6860() {
   return (neuron0x36aacb0()*-1.23468);
}

double NNfunction_ns_chi03_sL::synapse0x36d68a0() {
   return (neuron0x36aa750()*0.304321);
}

double NNfunction_ns_chi03_sL::synapse0x36d68e0() {
   return (neuron0x36aba90()*-0.0982534);
}

double NNfunction_ns_chi03_sL::synapse0x36d6920() {
   return (neuron0x36ac460()*0.450663);
}

double NNfunction_ns_chi03_sL::synapse0x36d6960() {
   return (neuron0x36ad230()*0.422608);
}

double NNfunction_ns_chi03_sL::synapse0x36d69a0() {
   return (neuron0x36adc00()*-2.60557);
}

double NNfunction_ns_chi03_sL::synapse0x36d69e0() {
   return (neuron0x36ae5d0()*-0.0975355);
}

double NNfunction_ns_chi03_sL::synapse0x36d6a20() {
   return (neuron0x36af0b0()*0.296156);
}

double NNfunction_ns_chi03_sL::synapse0x36d6a60() {
   return (neuron0x36afa80()*0.430255);
}

double NNfunction_ns_chi03_sL::synapse0x36d6aa0() {
   return (neuron0x36acb60()*-2.26483);
}

double NNfunction_ns_chi03_sL::synapse0x36d6ae0() {
   return (neuron0x36b1630()*0.239459);
}

double NNfunction_ns_chi03_sL::synapse0x36d6b20() {
   return (neuron0x36b2000()*1.47817);
}

double NNfunction_ns_chi03_sL::synapse0x36d6b60() {
   return (neuron0x36b29d0()*-0.372313);
}

double NNfunction_ns_chi03_sL::synapse0x36d6ba0() {
   return (neuron0x36b33a0()*0.128929);
}

double NNfunction_ns_chi03_sL::synapse0x36d6630() {
   return (neuron0x36b51b0()*0.861989);
}

double NNfunction_ns_chi03_sL::synapse0x36d6670() {
   return (neuron0x36b5490()*2.17748);
}

double NNfunction_ns_chi03_sL::synapse0x36d6cf0() {
   return (neuron0x36b5e60()*-1.24701);
}

double NNfunction_ns_chi03_sL::synapse0x36d6d30() {
   return (neuron0x36b6830()*2.79372);
}

double NNfunction_ns_chi03_sL::synapse0x36d6d70() {
   return (neuron0x36b7200()*0.630663);
}

double NNfunction_ns_chi03_sL::synapse0x36d6db0() {
   return (neuron0x36b7bd0()*-1.16253);
}

double NNfunction_ns_chi03_sL::synapse0x36d6df0() {
   return (neuron0x36b0720()*0.305882);
}

double NNfunction_ns_chi03_sL::synapse0x36d6e30() {
   return (neuron0x36b10f0()*-0.117743);
}

double NNfunction_ns_chi03_sL::synapse0x36d6e70() {
   return (neuron0x36ba960()*0.0869277);
}

double NNfunction_ns_chi03_sL::synapse0x36d6eb0() {
   return (neuron0x36bb330()*0.38661);
}

double NNfunction_ns_chi03_sL::synapse0x36d6ef0() {
   return (neuron0x36bbd00()*-1.59435);
}

double NNfunction_ns_chi03_sL::synapse0x36d6f30() {
   return (neuron0x36bc6d0()*1.24396);
}

double NNfunction_ns_chi03_sL::synapse0x36d6f70() {
   return (neuron0x36bd0a0()*0.102153);
}

double NNfunction_ns_chi03_sL::synapse0x36d6fb0() {
   return (neuron0x36bda70()*0.0706972);
}

double NNfunction_ns_chi03_sL::synapse0x36d6ff0() {
   return (neuron0x36be440()*3.84381);
}

double NNfunction_ns_chi03_sL::synapse0x36d7030() {
   return (neuron0x36bee10()*-0.103022);
}

double NNfunction_ns_chi03_sL::synapse0x36d6be0() {
   return (neuron0x36b4ea0()*0.847589);
}

double NNfunction_ns_chi03_sL::synapse0x36d6c20() {
   return (neuron0x36c19f0()*3.06912);
}

double NNfunction_ns_chi03_sL::synapse0x36d6c60() {
   return (neuron0x36c23c0()*0.550065);
}

double NNfunction_ns_chi03_sL::synapse0x36d6ca0() {
   return (neuron0x36c2d90()*1.80053);
}

double NNfunction_ns_chi03_sL::synapse0x36d7280() {
   return (neuron0x36c3760()*1.26581);
}

double NNfunction_ns_chi03_sL::synapse0x36d72c0() {
   return (neuron0x36c4130()*0.085044);
}

double NNfunction_ns_chi03_sL::synapse0x36d7300() {
   return (neuron0x36c4b00()*-0.252963);
}

double NNfunction_ns_chi03_sL::synapse0x36d7340() {
   return (neuron0x36c54d0()*1.39786);
}

double NNfunction_ns_chi03_sL::synapse0x36d7380() {
   return (neuron0x36c5ea0()*-2.35864);
}

double NNfunction_ns_chi03_sL::synapse0x36d73c0() {
   return (neuron0x36c6a80()*0.134229);
}

double NNfunction_ns_chi03_sL::synapse0x36d7400() {
   return (neuron0x36c7450()*-1.41685);
}

double NNfunction_ns_chi03_sL::synapse0x36d7440() {
   return (neuron0x36b82d0()*-0.0215792);
}

double NNfunction_ns_chi03_sL::synapse0x36d7480() {
   return (neuron0x36b8ca0()*1.95112);
}

double NNfunction_ns_chi03_sL::synapse0x36d74c0() {
   return (neuron0x36b9670()*0.0963179);
}

double NNfunction_ns_chi03_sL::synapse0x36d7500() {
   return (neuron0x36cbcb0()*-0.869834);
}

double NNfunction_ns_chi03_sL::synapse0x36d7540() {
   return (neuron0x36cc560()*-4.53927);
}

double NNfunction_ns_chi03_sL::synapse0x36d7580() {
   return (neuron0x36ccf30()*0.918779);
}

double NNfunction_ns_chi03_sL::synapse0x36d75c0() {
   return (neuron0x36cd900()*-0.273064);
}

double NNfunction_ns_chi03_sL::synapse0x36d7940() {
   return (neuron0x36a9880()*0.632558);
}

double NNfunction_ns_chi03_sL::synapse0x36d7980() {
   return (neuron0x36aa1d0()*0.715065);
}

double NNfunction_ns_chi03_sL::synapse0x36d79c0() {
   return (neuron0x36aacb0()*0.362208);
}

double NNfunction_ns_chi03_sL::synapse0x36d7a00() {
   return (neuron0x36aa750()*0.280819);
}

double NNfunction_ns_chi03_sL::synapse0x36d7a40() {
   return (neuron0x36aba90()*0.641582);
}

double NNfunction_ns_chi03_sL::synapse0x36d7a80() {
   return (neuron0x36ac460()*0.240312);
}

double NNfunction_ns_chi03_sL::synapse0x36d7ac0() {
   return (neuron0x36ad230()*0.246878);
}

double NNfunction_ns_chi03_sL::synapse0x36d7b00() {
   return (neuron0x36adc00()*0.381054);
}

double NNfunction_ns_chi03_sL::synapse0x36d7b40() {
   return (neuron0x36ae5d0()*0.44678);
}

double NNfunction_ns_chi03_sL::synapse0x36d7b80() {
   return (neuron0x36af0b0()*0.655115);
}

double NNfunction_ns_chi03_sL::synapse0x36d7bc0() {
   return (neuron0x36afa80()*0.88662);
}

double NNfunction_ns_chi03_sL::synapse0x36d7c00() {
   return (neuron0x36acb60()*0.309763);
}

double NNfunction_ns_chi03_sL::synapse0x36d7c40() {
   return (neuron0x36b1630()*0.676718);
}

double NNfunction_ns_chi03_sL::synapse0x36d7c80() {
   return (neuron0x36b2000()*0.935097);
}

double NNfunction_ns_chi03_sL::synapse0x36d7cc0() {
   return (neuron0x36b29d0()*-0.325719);
}

double NNfunction_ns_chi03_sL::synapse0x36d7d00() {
   return (neuron0x36b33a0()*0.409457);
}

double NNfunction_ns_chi03_sL::synapse0x36d7790() {
   return (neuron0x36b51b0()*0.198316);
}

double NNfunction_ns_chi03_sL::synapse0x36d77d0() {
   return (neuron0x36b5490()*0.371306);
}

double NNfunction_ns_chi03_sL::synapse0x36d7e50() {
   return (neuron0x36b5e60()*0.148513);
}

double NNfunction_ns_chi03_sL::synapse0x36d7e90() {
   return (neuron0x36b6830()*0.324939);
}

double NNfunction_ns_chi03_sL::synapse0x36d7ed0() {
   return (neuron0x36b7200()*0.454629);
}

double NNfunction_ns_chi03_sL::synapse0x36d7f10() {
   return (neuron0x36b7bd0()*0.100358);
}

double NNfunction_ns_chi03_sL::synapse0x36d7f50() {
   return (neuron0x36b0720()*0.424003);
}

double NNfunction_ns_chi03_sL::synapse0x36d7f90() {
   return (neuron0x36b10f0()*-0.168695);
}

double NNfunction_ns_chi03_sL::synapse0x36d7fd0() {
   return (neuron0x36ba960()*1.18233);
}

double NNfunction_ns_chi03_sL::synapse0x36d8010() {
   return (neuron0x36bb330()*0.41619);
}

double NNfunction_ns_chi03_sL::synapse0x36d8050() {
   return (neuron0x36bbd00()*-0.430839);
}

double NNfunction_ns_chi03_sL::synapse0x36d8090() {
   return (neuron0x36bc6d0()*0.803999);
}

double NNfunction_ns_chi03_sL::synapse0x36d80d0() {
   return (neuron0x36bd0a0()*-0.0538663);
}

double NNfunction_ns_chi03_sL::synapse0x36d8110() {
   return (neuron0x36bda70()*0.607691);
}

double NNfunction_ns_chi03_sL::synapse0x36d8150() {
   return (neuron0x36be440()*0.498215);
}

double NNfunction_ns_chi03_sL::synapse0x36d8190() {
   return (neuron0x36bee10()*0.690445);
}

double NNfunction_ns_chi03_sL::synapse0x36d7d40() {
   return (neuron0x36b4ea0()*0.549497);
}

double NNfunction_ns_chi03_sL::synapse0x36d7d80() {
   return (neuron0x36c19f0()*0.43294);
}

double NNfunction_ns_chi03_sL::synapse0x36d7dc0() {
   return (neuron0x36c23c0()*0.704491);
}

double NNfunction_ns_chi03_sL::synapse0x36d7e00() {
   return (neuron0x36c2d90()*0.893443);
}

double NNfunction_ns_chi03_sL::synapse0x36d83e0() {
   return (neuron0x36c3760()*0.87754);
}

double NNfunction_ns_chi03_sL::synapse0x36d8420() {
   return (neuron0x36c4130()*0.743995);
}

double NNfunction_ns_chi03_sL::synapse0x36d8460() {
   return (neuron0x36c4b00()*1.34762);
}

double NNfunction_ns_chi03_sL::synapse0x36d84a0() {
   return (neuron0x36c54d0()*0.584458);
}

double NNfunction_ns_chi03_sL::synapse0x36d84e0() {
   return (neuron0x36c5ea0()*0.600816);
}

double NNfunction_ns_chi03_sL::synapse0x36d8520() {
   return (neuron0x36c6a80()*0.0183387);
}

double NNfunction_ns_chi03_sL::synapse0x36d8560() {
   return (neuron0x36c7450()*-0.0309598);
}

double NNfunction_ns_chi03_sL::synapse0x36d85a0() {
   return (neuron0x36b82d0()*0.237926);
}

double NNfunction_ns_chi03_sL::synapse0x36d85e0() {
   return (neuron0x36b8ca0()*0.63395);
}

double NNfunction_ns_chi03_sL::synapse0x36d8620() {
   return (neuron0x36b9670()*1.16455);
}

double NNfunction_ns_chi03_sL::synapse0x36d8660() {
   return (neuron0x36cbcb0()*0.239419);
}

double NNfunction_ns_chi03_sL::synapse0x36d86a0() {
   return (neuron0x36cc560()*0.31367);
}

double NNfunction_ns_chi03_sL::synapse0x36d86e0() {
   return (neuron0x36ccf30()*0.244889);
}

double NNfunction_ns_chi03_sL::synapse0x36d8720() {
   return (neuron0x36cd900()*0.230589);
}

double NNfunction_ns_chi03_sL::synapse0x36d8980() {
   return (neuron0x36d4b00()*2.49397);
}

double NNfunction_ns_chi03_sL::synapse0x36d89c0() {
   return (neuron0x36d4ea0()*8.45557);
}

double NNfunction_ns_chi03_sL::synapse0x36d8a00() {
   return (neuron0x36d5340()*-8.55768);
}

double NNfunction_ns_chi03_sL::synapse0x36d8a40() {
   return (neuron0x36d64a0()*-9.27492);
}

double NNfunction_ns_chi03_sL::synapse0x36d8a80() {
   return (neuron0x36d7600()*1.4696);
}

