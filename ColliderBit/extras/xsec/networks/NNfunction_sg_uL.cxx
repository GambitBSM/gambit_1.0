#include "NNfunction_sg_uL.h"
#include <cmath>

double NNfunction_sg_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4106)/15.1454;
   input1 = (in1 - 54.4651)/887.217;
   input2 = (in2 - 484.561)/529.32;
   input3 = (in3 - 269.953)/761.265;
   input4 = (in4 - 1051.49)/849.064;
   input5 = (in5 - 967.111)/867.617;
   input6 = (in6 - 971.164)/867.589;
   input7 = (in7 - 963.691)/844.089;
   input8 = (in8 - 970.353)/884.353;
   input9 = (in9 - 960.947)/874.477;
   input10 = (in10 - 959.183)/854.043;
   input11 = (in11 - 881.524)/740.745;
   input12 = (in12 - 960.066)/829.263;
   input13 = (in13 - 723.673)/570.283;
   input14 = (in14 - 954.011)/799.297;
   input15 = (in15 - 954.71)/799.089;
   input16 = (in16 - 644.864)/511.535;
   input17 = (in17 - 972.584)/843.374;
   input18 = (in18 - 970.169)/843.832;
   input19 = (in19 - 963.586)/797.847;
   input20 = (in20 - -221.68)/548.168;
   input21 = (in21 - -294.113)/1137.45;
   input22 = (in22 - -29.0385)/1130.03;
   input23 = (in23 - -23.6883)/622.316;
   switch(index) {
     case 0:
         return neuron0x2cd9d90();
     default:
         return 0.;
   }
}

double NNfunction_sg_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.4106)/15.1454;
   input1 = (input[1] - 54.4651)/887.217;
   input2 = (input[2] - 484.561)/529.32;
   input3 = (input[3] - 269.953)/761.265;
   input4 = (input[4] - 1051.49)/849.064;
   input5 = (input[5] - 967.111)/867.617;
   input6 = (input[6] - 971.164)/867.589;
   input7 = (input[7] - 963.691)/844.089;
   input8 = (input[8] - 970.353)/884.353;
   input9 = (input[9] - 960.947)/874.477;
   input10 = (input[10] - 959.183)/854.043;
   input11 = (input[11] - 881.524)/740.745;
   input12 = (input[12] - 960.066)/829.263;
   input13 = (input[13] - 723.673)/570.283;
   input14 = (input[14] - 954.011)/799.297;
   input15 = (input[15] - 954.71)/799.089;
   input16 = (input[16] - 644.864)/511.535;
   input17 = (input[17] - 972.584)/843.374;
   input18 = (input[18] - 970.169)/843.832;
   input19 = (input[19] - 963.586)/797.847;
   input20 = (input[20] - -221.68)/548.168;
   input21 = (input[21] - -294.113)/1137.45;
   input22 = (input[22] - -29.0385)/1130.03;
   input23 = (input[23] - -23.6883)/622.316;
   switch(index) {
     case 0:
         return neuron0x2cd9d90();
     default:
         return 0.;
   }
}

double NNfunction_sg_uL::neuron0x2ca4e00() {
   return input0;
}

double NNfunction_sg_uL::neuron0x2ca50b0() {
   return input1;
}

double NNfunction_sg_uL::neuron0x2ca53f0() {
   return input2;
}

double NNfunction_sg_uL::neuron0x2ca5730() {
   return input3;
}

double NNfunction_sg_uL::neuron0x2ca5a70() {
   return input4;
}

double NNfunction_sg_uL::neuron0x2ca5db0() {
   return input5;
}

double NNfunction_sg_uL::neuron0x2ca60f0() {
   return input6;
}

double NNfunction_sg_uL::neuron0x2ca6430() {
   return input7;
}

double NNfunction_sg_uL::neuron0x2ca6770() {
   return input8;
}

double NNfunction_sg_uL::neuron0x2ca6ab0() {
   return input9;
}

double NNfunction_sg_uL::neuron0x2ca6df0() {
   return input10;
}

double NNfunction_sg_uL::neuron0x2ca7130() {
   return input11;
}

double NNfunction_sg_uL::neuron0x2ca7470() {
   return input12;
}

double NNfunction_sg_uL::neuron0x2ca77b0() {
   return input13;
}

double NNfunction_sg_uL::neuron0x2ca7af0() {
   return input14;
}

double NNfunction_sg_uL::neuron0x2ca7e30() {
   return input15;
}

double NNfunction_sg_uL::neuron0x2ca8170() {
   return input16;
}

double NNfunction_sg_uL::neuron0x2ca86d0() {
   return input17;
}

double NNfunction_sg_uL::neuron0x2ca88f0() {
   return input18;
}

double NNfunction_sg_uL::neuron0x2ca8c30() {
   return input19;
}

double NNfunction_sg_uL::neuron0x2ca8f70() {
   return input20;
}

double NNfunction_sg_uL::neuron0x2ca92b0() {
   return input21;
}

double NNfunction_sg_uL::neuron0x2ca95f0() {
   return input22;
}

double NNfunction_sg_uL::neuron0x2ca9930() {
   return input23;
}

double NNfunction_sg_uL::input0x2ca9da0() {
   double input = 0.278411;
   input += synapse0x2caa0e0();
   input += synapse0x2caa120();
   input += synapse0x2caa160();
   input += synapse0x2caa1a0();
   input += synapse0x2caa1e0();
   input += synapse0x2caa220();
   input += synapse0x2caa260();
   input += synapse0x2caa2a0();
   input += synapse0x2caa2e0();
   input += synapse0x2caa320();
   input += synapse0x2caa360();
   input += synapse0x2caa3a0();
   input += synapse0x2caa3e0();
   input += synapse0x2caa420();
   input += synapse0x2caa460();
   input += synapse0x2caa4a0();
   input += synapse0x2ca9f30();
   input += synapse0x2ca9f70();
   input += synapse0x181cc70();
   input += synapse0x181ccb0();
   input += synapse0x2caa5f0();
   input += synapse0x2caa630();
   input += synapse0x2caa670();
   input += synapse0x2caa6b0();
   return input;
}

double NNfunction_sg_uL::neuron0x2ca9da0() {
   double input = input0x2ca9da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2caa6f0() {
   double input = 0.00592824;
   input += synapse0x2caaa30();
   input += synapse0x2caaa70();
   input += synapse0x2caaab0();
   input += synapse0x2caaaf0();
   input += synapse0x2caab30();
   input += synapse0x2caab70();
   input += synapse0x2caabb0();
   input += synapse0x2caabf0();
   input += synapse0x2caac30();
   input += synapse0x2caa4e0();
   input += synapse0x2caa520();
   input += synapse0x2caa560();
   input += synapse0x2caa5a0();
   input += synapse0x2caae80();
   input += synapse0x2caaec0();
   input += synapse0x2caaf00();
   input += synapse0x2caa880();
   input += synapse0x2caa8c0();
   input += synapse0x2cab050();
   input += synapse0x2cab090();
   input += synapse0x2cab0d0();
   input += synapse0x2cab110();
   input += synapse0x2cab150();
   input += synapse0x2cab190();
   return input;
}

double NNfunction_sg_uL::neuron0x2caa6f0() {
   double input = input0x2caa6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cab1d0() {
   double input = -0.196241;
   input += synapse0x2cab510();
   input += synapse0x2cab550();
   input += synapse0x2cab590();
   input += synapse0x2cab5d0();
   input += synapse0x2cab610();
   input += synapse0x2cab650();
   input += synapse0x2cab690();
   input += synapse0x2cab6d0();
   input += synapse0x2cab710();
   input += synapse0x2cab750();
   input += synapse0x2cab790();
   input += synapse0x2cab7d0();
   input += synapse0x2cab810();
   input += synapse0x2cab850();
   input += synapse0x2cab890();
   input += synapse0x2cab8d0();
   input += synapse0x2cab360();
   input += synapse0x2cab3a0();
   input += synapse0x180a250();
   input += synapse0x2a6ef00();
   input += synapse0x2a6ef40();
   input += synapse0x2cad810();
   input += synapse0x2cad850();
   input += synapse0x2ca4b40();
   return input;
}

double NNfunction_sg_uL::neuron0x2cab1d0() {
   double input = input0x2cab1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2caac70() {
   double input = 0.641;
   input += synapse0x2ca4c10();
   input += synapse0x2a6f780();
   input += synapse0x2caae00();
   input += synapse0x2caae40();
   input += synapse0x2caba20();
   input += synapse0x2caba60();
   input += synapse0x2cabaa0();
   input += synapse0x2cabae0();
   input += synapse0x2cabb20();
   input += synapse0x2cabb60();
   input += synapse0x2cabba0();
   input += synapse0x2cabbe0();
   input += synapse0x2cabc20();
   input += synapse0x2cabc60();
   input += synapse0x2cabca0();
   input += synapse0x2cabce0();
   input += synapse0x2ca4b80();
   input += synapse0x2ca4bc0();
   input += synapse0x2cabe30();
   input += synapse0x2cabe70();
   input += synapse0x2cabeb0();
   input += synapse0x2cabef0();
   input += synapse0x2cabf30();
   input += synapse0x2cabf70();
   return input;
}

double NNfunction_sg_uL::neuron0x2caac70() {
   double input = input0x2caac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cabfb0() {
   double input = -0.0422736;
   input += synapse0x2cac2f0();
   input += synapse0x2cac330();
   input += synapse0x2cac370();
   input += synapse0x2cac3b0();
   input += synapse0x2cac3f0();
   input += synapse0x2cac430();
   input += synapse0x2cac470();
   input += synapse0x2cac4b0();
   input += synapse0x2cac4f0();
   input += synapse0x2cac530();
   input += synapse0x2cac570();
   input += synapse0x2cac5b0();
   input += synapse0x2cac5f0();
   input += synapse0x2cac630();
   input += synapse0x2cac670();
   input += synapse0x2cac6b0();
   input += synapse0x2cac800();
   input += synapse0x2cac140();
   input += synapse0x2cac180();
   input += synapse0x2cad950();
   input += synapse0x2cad990();
   input += synapse0x2cad9d0();
   input += synapse0x2cada10();
   input += synapse0x2cada50();
   return input;
}

double NNfunction_sg_uL::neuron0x2cabfb0() {
   double input = input0x2cabfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cada90() {
   double input = -0.546623;
   input += synapse0x2caddd0();
   input += synapse0x2cade10();
   input += synapse0x2cade50();
   input += synapse0x2cade90();
   input += synapse0x2caded0();
   input += synapse0x2cadf10();
   input += synapse0x2cadf50();
   input += synapse0x2cadf90();
   input += synapse0x2cadfd0();
   input += synapse0x2a6f250();
   input += synapse0x2a6f290();
   input += synapse0x2a6f2d0();
   input += synapse0x2a6f310();
   input += synapse0x2a6f350();
   input += synapse0x2a6f390();
   input += synapse0x2a6f3d0();
   input += synapse0x2cadc20();
   input += synapse0x2cadc60();
   input += synapse0x2a6f520();
   input += synapse0x2a6f560();
   input += synapse0x2a6f5a0();
   input += synapse0x2a6f5e0();
   input += synapse0x2a6f620();
   input += synapse0x2cae820();
   return input;
}

double NNfunction_sg_uL::neuron0x2cada90() {
   double input = input0x2cada90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cae860() {
   double input = -1.88895;
   input += synapse0x2caeba0();
   input += synapse0x2caebe0();
   input += synapse0x2caec20();
   input += synapse0x2caec60();
   input += synapse0x2caeca0();
   input += synapse0x2caece0();
   input += synapse0x2caed20();
   input += synapse0x2caed60();
   input += synapse0x2caeda0();
   input += synapse0x2caede0();
   input += synapse0x2caee20();
   input += synapse0x2caee60();
   input += synapse0x2caeea0();
   input += synapse0x2caeee0();
   input += synapse0x2caef20();
   input += synapse0x2caef60();
   input += synapse0x2cae9f0();
   input += synapse0x2caea30();
   input += synapse0x2caf0b0();
   input += synapse0x2caf0f0();
   input += synapse0x2caf130();
   input += synapse0x2caf170();
   input += synapse0x2caf1b0();
   input += synapse0x2caf1f0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cae860() {
   double input = input0x2cae860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2caf230() {
   double input = 0.334512;
   input += synapse0x2caf570();
   input += synapse0x2caf5b0();
   input += synapse0x2caf5f0();
   input += synapse0x2caf630();
   input += synapse0x2caf670();
   input += synapse0x2caf6b0();
   input += synapse0x2caf6f0();
   input += synapse0x2caf730();
   input += synapse0x2caf770();
   input += synapse0x2caf7b0();
   input += synapse0x2caf7f0();
   input += synapse0x2caf830();
   input += synapse0x2caf870();
   input += synapse0x2caf8b0();
   input += synapse0x2caf8f0();
   input += synapse0x2caf930();
   input += synapse0x2caf3c0();
   input += synapse0x2caf400();
   input += synapse0x2cafa80();
   input += synapse0x2cafac0();
   input += synapse0x2cafb00();
   input += synapse0x2cafb40();
   input += synapse0x2cafb80();
   input += synapse0x2cafbc0();
   return input;
}

double NNfunction_sg_uL::neuron0x2caf230() {
   double input = input0x2caf230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cafc00() {
   double input = 0.179591;
   input += synapse0x2ca85c0();
   input += synapse0x2ca8600();
   input += synapse0x2ca8640();
   input += synapse0x2ca8680();
   input += synapse0x2cb0150();
   input += synapse0x2cb0190();
   input += synapse0x2cb01d0();
   input += synapse0x2cb0210();
   input += synapse0x2cb0250();
   input += synapse0x2cb0290();
   input += synapse0x2cb02d0();
   input += synapse0x2cb0310();
   input += synapse0x2cb0350();
   input += synapse0x2cb0390();
   input += synapse0x2cb03d0();
   input += synapse0x2cb0410();
   input += synapse0x2cafd90();
   input += synapse0x2cafdd0();
   input += synapse0x2cb0560();
   input += synapse0x2cb05a0();
   input += synapse0x2cb05e0();
   input += synapse0x2cb0620();
   input += synapse0x2cb0660();
   input += synapse0x2cb06a0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cafc00() {
   double input = input0x2cafc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb06e0() {
   double input = -0.111008;
   input += synapse0x2cb0a20();
   input += synapse0x2cb0a60();
   input += synapse0x2cb0aa0();
   input += synapse0x2cb0ae0();
   input += synapse0x2cb0b20();
   input += synapse0x2cb0b60();
   input += synapse0x2cb0ba0();
   input += synapse0x2cb0be0();
   input += synapse0x2cb0c20();
   input += synapse0x2cb0c60();
   input += synapse0x2cb0ca0();
   input += synapse0x2cb0ce0();
   input += synapse0x2cb0d20();
   input += synapse0x2cb0d60();
   input += synapse0x2cb0da0();
   input += synapse0x2cb0de0();
   input += synapse0x2cb0870();
   input += synapse0x2cb08b0();
   input += synapse0x2cb0f30();
   input += synapse0x2cb0f70();
   input += synapse0x2cb0fb0();
   input += synapse0x2cb0ff0();
   input += synapse0x2cb1030();
   input += synapse0x2cb1070();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb06e0() {
   double input = input0x2cb06e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb10b0() {
   double input = -0.037465;
   input += synapse0x2cb13f0();
   input += synapse0x2cb1430();
   input += synapse0x2cb1470();
   input += synapse0x2cb14b0();
   input += synapse0x2cb14f0();
   input += synapse0x2cb1530();
   input += synapse0x2cb1570();
   input += synapse0x2cb15b0();
   input += synapse0x2cb15f0();
   input += synapse0x2cb1630();
   input += synapse0x2cb1670();
   input += synapse0x2cb16b0();
   input += synapse0x2cb16f0();
   input += synapse0x2cb1730();
   input += synapse0x2cb1770();
   input += synapse0x2cb17b0();
   input += synapse0x2cb1240();
   input += synapse0x2cb1280();
   input += synapse0x2cae010();
   input += synapse0x2cae050();
   input += synapse0x2cae090();
   input += synapse0x2cae0d0();
   input += synapse0x2cae110();
   input += synapse0x2cae150();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb10b0() {
   double input = input0x2cb10b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cae190() {
   double input = -0.908248;
   input += synapse0x2cae4d0();
   input += synapse0x2cae510();
   input += synapse0x2cae550();
   input += synapse0x2cae590();
   input += synapse0x2cae5d0();
   input += synapse0x2cae610();
   input += synapse0x2cae650();
   input += synapse0x2cae690();
   input += synapse0x2cae6d0();
   input += synapse0x2cae710();
   input += synapse0x2cae750();
   input += synapse0x2cae790();
   input += synapse0x2cae7d0();
   input += synapse0x2cb2910();
   input += synapse0x2cb2950();
   input += synapse0x2cb2990();
   input += synapse0x2cae320();
   input += synapse0x2cae360();
   input += synapse0x2cb2ae0();
   input += synapse0x2cb2b20();
   input += synapse0x2cb2b60();
   input += synapse0x2cb2ba0();
   input += synapse0x2cb2be0();
   input += synapse0x2cb2c20();
   return input;
}

double NNfunction_sg_uL::neuron0x2cae190() {
   double input = input0x2cae190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb2c60() {
   double input = -0.248088;
   input += synapse0x2cb2fa0();
   input += synapse0x2cb2fe0();
   input += synapse0x2cb3020();
   input += synapse0x2cb3060();
   input += synapse0x2cb30a0();
   input += synapse0x2cb30e0();
   input += synapse0x2cb3120();
   input += synapse0x2cb3160();
   input += synapse0x2cb31a0();
   input += synapse0x2cb31e0();
   input += synapse0x2cb3220();
   input += synapse0x2cb3260();
   input += synapse0x2cb32a0();
   input += synapse0x2cb32e0();
   input += synapse0x2cb3320();
   input += synapse0x2cb3360();
   input += synapse0x2cb2df0();
   input += synapse0x2cb2e30();
   input += synapse0x2cb34b0();
   input += synapse0x2cb34f0();
   input += synapse0x2cb3530();
   input += synapse0x2cb3570();
   input += synapse0x2cb35b0();
   input += synapse0x2cb35f0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb2c60() {
   double input = input0x2cb2c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb3630() {
   double input = -1.49591;
   input += synapse0x2cb3970();
   input += synapse0x2cb39b0();
   input += synapse0x2cb39f0();
   input += synapse0x2cb3a30();
   input += synapse0x2cb3a70();
   input += synapse0x2cb3ab0();
   input += synapse0x2cb3af0();
   input += synapse0x2cb3b30();
   input += synapse0x2cb3b70();
   input += synapse0x2cb3bb0();
   input += synapse0x2cb3bf0();
   input += synapse0x2cb3c30();
   input += synapse0x2cb3c70();
   input += synapse0x2cb3cb0();
   input += synapse0x2cb3cf0();
   input += synapse0x2cb3d30();
   input += synapse0x2cb37c0();
   input += synapse0x2cb3800();
   input += synapse0x2cb3e80();
   input += synapse0x2cb3ec0();
   input += synapse0x2cb3f00();
   input += synapse0x2cb3f40();
   input += synapse0x2cb3f80();
   input += synapse0x2cb3fc0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb3630() {
   double input = input0x2cb3630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb4000() {
   double input = -1.28335;
   input += synapse0x2cb4340();
   input += synapse0x2cb4380();
   input += synapse0x2cb43c0();
   input += synapse0x2cb4400();
   input += synapse0x2cb4440();
   input += synapse0x2cb4480();
   input += synapse0x2cb44c0();
   input += synapse0x2cb4500();
   input += synapse0x2cb4540();
   input += synapse0x2cb4580();
   input += synapse0x2cb45c0();
   input += synapse0x2cb4600();
   input += synapse0x2cb4640();
   input += synapse0x2cb4680();
   input += synapse0x2cb46c0();
   input += synapse0x2cb4700();
   input += synapse0x2cb4190();
   input += synapse0x2cb41d0();
   input += synapse0x2cb4850();
   input += synapse0x2cb4890();
   input += synapse0x2cb48d0();
   input += synapse0x2cb4910();
   input += synapse0x2cb4950();
   input += synapse0x2cb4990();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb4000() {
   double input = input0x2cb4000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb49d0() {
   double input = -0.240377;
   input += synapse0x2cb4d10();
   input += synapse0x2ca4f90();
   input += synapse0x2ca4fd0();
   input += synapse0x2ca52d0();
   input += synapse0x2ca5310();
   input += synapse0x2ca5610();
   input += synapse0x2ca5650();
   input += synapse0x2ca5950();
   input += synapse0x2ca5990();
   input += synapse0x2ca5c90();
   input += synapse0x2ca5cd0();
   input += synapse0x2ca5fd0();
   input += synapse0x2ca6010();
   input += synapse0x2ca6310();
   input += synapse0x2ca6350();
   input += synapse0x2ca6650();
   input += synapse0x2ca6690();
   input += synapse0x2ca6990();
   input += synapse0x2ca69d0();
   input += synapse0x2ca6cd0();
   input += synapse0x2ca6d10();
   input += synapse0x2ca7010();
   input += synapse0x2ca7050();
   input += synapse0x2ca7350();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb49d0() {
   double input = input0x2cb49d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb67e0() {
   double input = 2.61909;
   input += synapse0x2ca7390();
   input += synapse0x2ca8050();
   input += synapse0x2ca8090();
   input += synapse0x2cb4b60();
   input += synapse0x2cb4ba0();
   input += synapse0x2ca8390();
   input += synapse0x2ca83d0();
   input += synapse0x181db40();
   input += synapse0x181db80();
   input += synapse0x2ca8b10();
   input += synapse0x2ca8b50();
   input += synapse0x2ca8e50();
   input += synapse0x2ca8e90();
   input += synapse0x2ca9190();
   input += synapse0x2ca91d0();
   input += synapse0x2ca94d0();
   input += synapse0x2ca9510();
   input += synapse0x2ca9810();
   input += synapse0x2ca9850();
   input += synapse0x2ca9b50();
   input += synapse0x2ca9b90();
   input += synapse0x2ca7690();
   input += synapse0x2ca76d0();
   input += synapse0x2cb6a80();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb67e0() {
   double input = input0x2cb67e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb6ac0() {
   double input = 0.592562;
   input += synapse0x2cb6e00();
   input += synapse0x2cb6e40();
   input += synapse0x2cb6e80();
   input += synapse0x2cb6ec0();
   input += synapse0x2cb6f00();
   input += synapse0x2cb6f40();
   input += synapse0x2cb6f80();
   input += synapse0x2cb6fc0();
   input += synapse0x2cb7000();
   input += synapse0x2cb7040();
   input += synapse0x2cb7080();
   input += synapse0x2cb70c0();
   input += synapse0x2cb7100();
   input += synapse0x2cb7140();
   input += synapse0x2cb7180();
   input += synapse0x2cb71c0();
   input += synapse0x2cb6c50();
   input += synapse0x2cb6c90();
   input += synapse0x2cb7310();
   input += synapse0x2cb7350();
   input += synapse0x2cb7390();
   input += synapse0x2cb73d0();
   input += synapse0x2cb7410();
   input += synapse0x2cb7450();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb6ac0() {
   double input = input0x2cb6ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb7490() {
   double input = -1.33508;
   input += synapse0x2cb77d0();
   input += synapse0x2cb7810();
   input += synapse0x2cb7850();
   input += synapse0x2cb7890();
   input += synapse0x2cb78d0();
   input += synapse0x2cb7910();
   input += synapse0x2cb7950();
   input += synapse0x2cb7990();
   input += synapse0x2cb79d0();
   input += synapse0x2cb7a10();
   input += synapse0x2cb7a50();
   input += synapse0x2cb7a90();
   input += synapse0x2cb7ad0();
   input += synapse0x2cb7b10();
   input += synapse0x2cb7b50();
   input += synapse0x2cb7b90();
   input += synapse0x2cb7620();
   input += synapse0x2cb7660();
   input += synapse0x2cb7ce0();
   input += synapse0x2cb7d20();
   input += synapse0x2cb7d60();
   input += synapse0x2cb7da0();
   input += synapse0x2cb7de0();
   input += synapse0x2cb7e20();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb7490() {
   double input = input0x2cb7490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb7e60() {
   double input = -0.630811;
   input += synapse0x2cb81a0();
   input += synapse0x2cb81e0();
   input += synapse0x2cb8220();
   input += synapse0x2cb8260();
   input += synapse0x2cb82a0();
   input += synapse0x2cb82e0();
   input += synapse0x2cb8320();
   input += synapse0x2cb8360();
   input += synapse0x2cb83a0();
   input += synapse0x2cb83e0();
   input += synapse0x2cb8420();
   input += synapse0x2cb8460();
   input += synapse0x2cb84a0();
   input += synapse0x2cb84e0();
   input += synapse0x2cb8520();
   input += synapse0x2cb8560();
   input += synapse0x2cb7ff0();
   input += synapse0x2cb8030();
   input += synapse0x2cb86b0();
   input += synapse0x2cb86f0();
   input += synapse0x2cb8730();
   input += synapse0x2cb8770();
   input += synapse0x2cb87b0();
   input += synapse0x2cb87f0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb7e60() {
   double input = input0x2cb7e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb8830() {
   double input = 0.174798;
   input += synapse0x2cb8b70();
   input += synapse0x2cb8bb0();
   input += synapse0x2cb8bf0();
   input += synapse0x2cb8c30();
   input += synapse0x2cb8c70();
   input += synapse0x2cb8cb0();
   input += synapse0x2cb8cf0();
   input += synapse0x2cb8d30();
   input += synapse0x2cb8d70();
   input += synapse0x2cb8db0();
   input += synapse0x2cb8df0();
   input += synapse0x2cb8e30();
   input += synapse0x2cb8e70();
   input += synapse0x2cb8eb0();
   input += synapse0x2cb8ef0();
   input += synapse0x2cb8f30();
   input += synapse0x2cb89c0();
   input += synapse0x2cb8a00();
   input += synapse0x2cb9080();
   input += synapse0x2cb90c0();
   input += synapse0x2cb9100();
   input += synapse0x2cb9140();
   input += synapse0x2cb9180();
   input += synapse0x2cb91c0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb8830() {
   double input = input0x2cb8830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb9200() {
   double input = -1.14033;
   input += synapse0x2cb9540();
   input += synapse0x2cb9580();
   input += synapse0x2cb95c0();
   input += synapse0x2cb9600();
   input += synapse0x2cb9640();
   input += synapse0x2cb9680();
   input += synapse0x2cb96c0();
   input += synapse0x2cb9700();
   input += synapse0x2cb9740();
   input += synapse0x2cb1900();
   input += synapse0x2cb1940();
   input += synapse0x2cb1980();
   input += synapse0x2cb19c0();
   input += synapse0x2cb1a00();
   input += synapse0x2cb1a40();
   input += synapse0x2cb1a80();
   input += synapse0x2cb9390();
   input += synapse0x2cb93d0();
   input += synapse0x2cb1bd0();
   input += synapse0x2cb1c10();
   input += synapse0x2cb1c50();
   input += synapse0x2cb1c90();
   input += synapse0x2cb1cd0();
   input += synapse0x2cb1d10();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb9200() {
   double input = input0x2cb9200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb1d50() {
   double input = 1.08758;
   input += synapse0x2cb2090();
   input += synapse0x2cb20d0();
   input += synapse0x2cb2110();
   input += synapse0x2cb2150();
   input += synapse0x2cb2190();
   input += synapse0x2cb21d0();
   input += synapse0x2cb2210();
   input += synapse0x2cb2250();
   input += synapse0x2cb2290();
   input += synapse0x2cb22d0();
   input += synapse0x2cb2310();
   input += synapse0x2cb2350();
   input += synapse0x2cb2390();
   input += synapse0x2cb23d0();
   input += synapse0x2cb2410();
   input += synapse0x2cb2450();
   input += synapse0x2cb1ee0();
   input += synapse0x2cb1f20();
   input += synapse0x2cb25a0();
   input += synapse0x2cb25e0();
   input += synapse0x2cb2620();
   input += synapse0x2cb2660();
   input += synapse0x2cb26a0();
   input += synapse0x2cb26e0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb1d50() {
   double input = input0x2cb1d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb2720() {
   double input = -0.0913566;
   input += synapse0x2cb28b0();
   input += synapse0x2cbb940();
   input += synapse0x2cbb980();
   input += synapse0x2cbb9c0();
   input += synapse0x2cbba00();
   input += synapse0x2cbba40();
   input += synapse0x2cbba80();
   input += synapse0x2cbbac0();
   input += synapse0x2cbbb00();
   input += synapse0x2cbbb40();
   input += synapse0x2cbbb80();
   input += synapse0x2cbbbc0();
   input += synapse0x2cbbc00();
   input += synapse0x2cbbc40();
   input += synapse0x2cbbc80();
   input += synapse0x2cbbcc0();
   input += synapse0x2cbb790();
   input += synapse0x2cbb7d0();
   input += synapse0x2cbbe10();
   input += synapse0x2cbbe50();
   input += synapse0x2cbbe90();
   input += synapse0x2cbbed0();
   input += synapse0x2cbbf10();
   input += synapse0x2cbbf50();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb2720() {
   double input = input0x2cb2720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbbf90() {
   double input = 0.128549;
   input += synapse0x2cbc2d0();
   input += synapse0x2cbc310();
   input += synapse0x2cbc350();
   input += synapse0x2cbc390();
   input += synapse0x2cbc3d0();
   input += synapse0x2cbc410();
   input += synapse0x2cbc450();
   input += synapse0x2cbc490();
   input += synapse0x2cbc4d0();
   input += synapse0x2cbc510();
   input += synapse0x2cbc550();
   input += synapse0x2cbc590();
   input += synapse0x2cbc5d0();
   input += synapse0x2cbc610();
   input += synapse0x2cbc650();
   input += synapse0x2cbc690();
   input += synapse0x2cbc120();
   input += synapse0x2cbc160();
   input += synapse0x2cbc7e0();
   input += synapse0x2cbc820();
   input += synapse0x2cbc860();
   input += synapse0x2cbc8a0();
   input += synapse0x2cbc8e0();
   input += synapse0x2cbc920();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbbf90() {
   double input = input0x2cbbf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbc960() {
   double input = -1.46669;
   input += synapse0x2cbcca0();
   input += synapse0x2cbcce0();
   input += synapse0x2cbcd20();
   input += synapse0x2cbcd60();
   input += synapse0x2cbcda0();
   input += synapse0x2cbcde0();
   input += synapse0x2cbce20();
   input += synapse0x2cbce60();
   input += synapse0x2cbcea0();
   input += synapse0x2cbcee0();
   input += synapse0x2cbcf20();
   input += synapse0x2cbcf60();
   input += synapse0x2cbcfa0();
   input += synapse0x2cbcfe0();
   input += synapse0x2cbd020();
   input += synapse0x2cbd060();
   input += synapse0x2cbcaf0();
   input += synapse0x2cbcb30();
   input += synapse0x2cbd1b0();
   input += synapse0x2cbd1f0();
   input += synapse0x2cbd230();
   input += synapse0x2cbd270();
   input += synapse0x2cbd2b0();
   input += synapse0x2cbd2f0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbc960() {
   double input = input0x2cbc960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbd330() {
   double input = -0.0565433;
   input += synapse0x2cbd670();
   input += synapse0x2cbd6b0();
   input += synapse0x2cbd6f0();
   input += synapse0x2cbd730();
   input += synapse0x2cbd770();
   input += synapse0x2cbd7b0();
   input += synapse0x2cbd7f0();
   input += synapse0x2cbd830();
   input += synapse0x2cbd870();
   input += synapse0x2cbd8b0();
   input += synapse0x2cbd8f0();
   input += synapse0x2cbd930();
   input += synapse0x2cbd970();
   input += synapse0x2cbd9b0();
   input += synapse0x2cbd9f0();
   input += synapse0x2cbda30();
   input += synapse0x2cbd4c0();
   input += synapse0x2cbd500();
   input += synapse0x2cbdb80();
   input += synapse0x2cbdbc0();
   input += synapse0x2cbdc00();
   input += synapse0x2cbdc40();
   input += synapse0x2cbdc80();
   input += synapse0x2cbdcc0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbd330() {
   double input = input0x2cbd330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbdd00() {
   double input = -0.264356;
   input += synapse0x2cbe040();
   input += synapse0x2cbe080();
   input += synapse0x2cbe0c0();
   input += synapse0x2cbe100();
   input += synapse0x2cbe140();
   input += synapse0x2cbe180();
   input += synapse0x2cbe1c0();
   input += synapse0x2cbe200();
   input += synapse0x2cbe240();
   input += synapse0x2cbe280();
   input += synapse0x2cbe2c0();
   input += synapse0x2cbe300();
   input += synapse0x2cbe340();
   input += synapse0x2cbe380();
   input += synapse0x2cbe3c0();
   input += synapse0x2cbe400();
   input += synapse0x2cbde90();
   input += synapse0x2cbded0();
   input += synapse0x2cbe550();
   input += synapse0x2cbe590();
   input += synapse0x2cbe5d0();
   input += synapse0x2cbe610();
   input += synapse0x2cbe650();
   input += synapse0x2cbe690();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbdd00() {
   double input = input0x2cbdd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbe6d0() {
   double input = 1.18395;
   input += synapse0x2cbea10();
   input += synapse0x2cbea50();
   input += synapse0x2cbea90();
   input += synapse0x2cbead0();
   input += synapse0x2cbeb10();
   input += synapse0x2cbeb50();
   input += synapse0x2cbeb90();
   input += synapse0x2cbebd0();
   input += synapse0x2cbec10();
   input += synapse0x2cbec50();
   input += synapse0x2cbec90();
   input += synapse0x2cbecd0();
   input += synapse0x2cbed10();
   input += synapse0x2cbed50();
   input += synapse0x2cbed90();
   input += synapse0x2cbedd0();
   input += synapse0x2cbe860();
   input += synapse0x2cbe8a0();
   input += synapse0x2cbef20();
   input += synapse0x2cbef60();
   input += synapse0x2cbefa0();
   input += synapse0x2cbefe0();
   input += synapse0x2cbf020();
   input += synapse0x2cbf060();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbe6d0() {
   double input = input0x2cbe6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbf0a0() {
   double input = -0.3584;
   input += synapse0x2cbf3e0();
   input += synapse0x2cbf420();
   input += synapse0x2cbf460();
   input += synapse0x2cbf4a0();
   input += synapse0x2cbf4e0();
   input += synapse0x2cbf520();
   input += synapse0x2cbf560();
   input += synapse0x2cbf5a0();
   input += synapse0x2cbf5e0();
   input += synapse0x2cbf620();
   input += synapse0x2cbf660();
   input += synapse0x2cbf6a0();
   input += synapse0x2cbf6e0();
   input += synapse0x2cbf720();
   input += synapse0x2cbf760();
   input += synapse0x2cbf7a0();
   input += synapse0x2cbf230();
   input += synapse0x2cbf270();
   input += synapse0x2cbf8f0();
   input += synapse0x2cbf930();
   input += synapse0x2cbf970();
   input += synapse0x2cbf9b0();
   input += synapse0x2cbf9f0();
   input += synapse0x2cbfa30();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbf0a0() {
   double input = input0x2cbf0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbfa70() {
   double input = -0.177962;
   input += synapse0x2cbfdb0();
   input += synapse0x2cbfdf0();
   input += synapse0x2cbfe30();
   input += synapse0x2cbfe70();
   input += synapse0x2cbfeb0();
   input += synapse0x2cbfef0();
   input += synapse0x2cbff30();
   input += synapse0x2cbff70();
   input += synapse0x2cbffb0();
   input += synapse0x2cbfff0();
   input += synapse0x2cc0030();
   input += synapse0x2cc0070();
   input += synapse0x2cc00b0();
   input += synapse0x2cc00f0();
   input += synapse0x2cc0130();
   input += synapse0x2cc0170();
   input += synapse0x2cbfc00();
   input += synapse0x2cbfc40();
   input += synapse0x2cc02c0();
   input += synapse0x2cc0300();
   input += synapse0x2cc0340();
   input += synapse0x2cc0380();
   input += synapse0x2cc03c0();
   input += synapse0x2cc0400();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbfa70() {
   double input = input0x2cbfa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc0440() {
   double input = 0.103243;
   input += synapse0x2cc0780();
   input += synapse0x2cb4d50();
   input += synapse0x2cb4d90();
   input += synapse0x2cb4dd0();
   input += synapse0x2cb5020();
   input += synapse0x2cb5060();
   input += synapse0x2cb50a0();
   input += synapse0x2cb52f0();
   input += synapse0x2cb5330();
   input += synapse0x2cb5580();
   input += synapse0x2cb55c0();
   input += synapse0x2cb5600();
   input += synapse0x2cb5850();
   input += synapse0x2cb5890();
   input += synapse0x2cb5ae0();
   input += synapse0x2cb5b20();
   input += synapse0x2cc05d0();
   input += synapse0x2cc0610();
   input += synapse0x2cb5c70();
   input += synapse0x2cb6180();
   input += synapse0x2cb61c0();
   input += synapse0x2cb6200();
   input += synapse0x2cb6450();
   input += synapse0x2cb6490();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc0440() {
   double input = input0x2cc0440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb64d0() {
   double input = 2.20941;
   input += synapse0x2cb5d40();
   input += synapse0x2cb5d80();
   input += synapse0x2cb5dc0();
   input += synapse0x2cb5e00();
   input += synapse0x2cb6780();
   input += synapse0x2cc2ad0();
   input += synapse0x2cc2b10();
   input += synapse0x2cc2b50();
   input += synapse0x2cc2b90();
   input += synapse0x2cc2bd0();
   input += synapse0x2cc2c10();
   input += synapse0x2cc2c50();
   input += synapse0x2cc2c90();
   input += synapse0x2cc2cd0();
   input += synapse0x2cc2d10();
   input += synapse0x2cc2d50();
   input += synapse0x2cb6660();
   input += synapse0x2cb66a0();
   input += synapse0x2cc2ea0();
   input += synapse0x2cc2ee0();
   input += synapse0x2cc2f20();
   input += synapse0x2cc2f60();
   input += synapse0x2cc2fa0();
   input += synapse0x2cc2fe0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb64d0() {
   double input = input0x2cb64d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc3020() {
   double input = -0.85872;
   input += synapse0x2cc3360();
   input += synapse0x2cc33a0();
   input += synapse0x2cc33e0();
   input += synapse0x2cc3420();
   input += synapse0x2cc3460();
   input += synapse0x2cc34a0();
   input += synapse0x2cc34e0();
   input += synapse0x2cc3520();
   input += synapse0x2cc3560();
   input += synapse0x2cc35a0();
   input += synapse0x2cc35e0();
   input += synapse0x2cc3620();
   input += synapse0x2cc3660();
   input += synapse0x2cc36a0();
   input += synapse0x2cc36e0();
   input += synapse0x2cc3720();
   input += synapse0x2cc31b0();
   input += synapse0x2cc31f0();
   input += synapse0x2cc3870();
   input += synapse0x2cc38b0();
   input += synapse0x2cc38f0();
   input += synapse0x2cc3930();
   input += synapse0x2cc3970();
   input += synapse0x2cc39b0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc3020() {
   double input = input0x2cc3020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc39f0() {
   double input = 0.262981;
   input += synapse0x2cc3d30();
   input += synapse0x2cc3d70();
   input += synapse0x2cc3db0();
   input += synapse0x2cc3df0();
   input += synapse0x2cc3e30();
   input += synapse0x2cc3e70();
   input += synapse0x2cc3eb0();
   input += synapse0x2cc3ef0();
   input += synapse0x2cc3f30();
   input += synapse0x2cc3f70();
   input += synapse0x2cc3fb0();
   input += synapse0x2cc3ff0();
   input += synapse0x2cc4030();
   input += synapse0x2cc4070();
   input += synapse0x2cc40b0();
   input += synapse0x2cc40f0();
   input += synapse0x2cc3b80();
   input += synapse0x2cc3bc0();
   input += synapse0x2cc4240();
   input += synapse0x2cc4280();
   input += synapse0x2cc42c0();
   input += synapse0x2cc4300();
   input += synapse0x2cc4340();
   input += synapse0x2cc4380();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc39f0() {
   double input = input0x2cc39f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc43c0() {
   double input = -0.374695;
   input += synapse0x2cc4700();
   input += synapse0x2cc4740();
   input += synapse0x2cc4780();
   input += synapse0x2cc47c0();
   input += synapse0x2cc4800();
   input += synapse0x2cc4840();
   input += synapse0x2cc4880();
   input += synapse0x2cc48c0();
   input += synapse0x2cc4900();
   input += synapse0x2cc4940();
   input += synapse0x2cc4980();
   input += synapse0x2cc49c0();
   input += synapse0x2cc4a00();
   input += synapse0x2cc4a40();
   input += synapse0x2cc4a80();
   input += synapse0x2cc4ac0();
   input += synapse0x2cc4550();
   input += synapse0x2cc4590();
   input += synapse0x2cc4c10();
   input += synapse0x2cc4c50();
   input += synapse0x2cc4c90();
   input += synapse0x2cc4cd0();
   input += synapse0x2cc4d10();
   input += synapse0x2cc4d50();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc43c0() {
   double input = input0x2cc43c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc4d90() {
   double input = -2.32447;
   input += synapse0x2cc50d0();
   input += synapse0x2cc5110();
   input += synapse0x2cc5150();
   input += synapse0x2cc5190();
   input += synapse0x2cc51d0();
   input += synapse0x2cc5210();
   input += synapse0x2cc5250();
   input += synapse0x2cc5290();
   input += synapse0x2cc52d0();
   input += synapse0x2cc5310();
   input += synapse0x2cc5350();
   input += synapse0x2cc5390();
   input += synapse0x2cc53d0();
   input += synapse0x2cc5410();
   input += synapse0x2cc5450();
   input += synapse0x2cc5490();
   input += synapse0x2cc4f20();
   input += synapse0x2cc4f60();
   input += synapse0x2cc55e0();
   input += synapse0x2cc5620();
   input += synapse0x2cc5660();
   input += synapse0x2cc56a0();
   input += synapse0x2cc56e0();
   input += synapse0x2cc5720();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc4d90() {
   double input = input0x2cc4d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc5760() {
   double input = -0.467676;
   input += synapse0x2cc5aa0();
   input += synapse0x2cc5ae0();
   input += synapse0x2cc5b20();
   input += synapse0x2cc5b60();
   input += synapse0x2cc5ba0();
   input += synapse0x2cc5be0();
   input += synapse0x2cc5c20();
   input += synapse0x2cc5c60();
   input += synapse0x2cc5ca0();
   input += synapse0x2cc5ce0();
   input += synapse0x2cc5d20();
   input += synapse0x2cc5d60();
   input += synapse0x2cc5da0();
   input += synapse0x2cc5de0();
   input += synapse0x2cc5e20();
   input += synapse0x2cc5e60();
   input += synapse0x2cc58f0();
   input += synapse0x2cc5930();
   input += synapse0x2cc5fb0();
   input += synapse0x2cc5ff0();
   input += synapse0x2cc6030();
   input += synapse0x2cc6070();
   input += synapse0x2cc60b0();
   input += synapse0x2cc60f0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc5760() {
   double input = input0x2cc5760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc6130() {
   double input = 4.74125;
   input += synapse0x2cc6470();
   input += synapse0x2cc64b0();
   input += synapse0x2cc64f0();
   input += synapse0x2cc6530();
   input += synapse0x2cc6570();
   input += synapse0x2cc65b0();
   input += synapse0x2cc65f0();
   input += synapse0x2cc6630();
   input += synapse0x2cc6670();
   input += synapse0x2cc66b0();
   input += synapse0x2cc66f0();
   input += synapse0x2cc6730();
   input += synapse0x2cc6770();
   input += synapse0x2cc67b0();
   input += synapse0x2cc67f0();
   input += synapse0x2cc6830();
   input += synapse0x2cc62c0();
   input += synapse0x2cc6300();
   input += synapse0x2cc6980();
   input += synapse0x2cc69c0();
   input += synapse0x2cc6a00();
   input += synapse0x2cc6a40();
   input += synapse0x2cc6a80();
   input += synapse0x2cc6ac0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc6130() {
   double input = input0x2cc6130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc6b00() {
   double input = 0.0472056;
   input += synapse0x2cc6e40();
   input += synapse0x2cc6e80();
   input += synapse0x2cc6ec0();
   input += synapse0x2cc6f00();
   input += synapse0x2cc6f40();
   input += synapse0x2cc6f80();
   input += synapse0x2cc6fc0();
   input += synapse0x2cc7000();
   input += synapse0x2cc7040();
   input += synapse0x2cc7080();
   input += synapse0x2cc70c0();
   input += synapse0x2cc7100();
   input += synapse0x2cc7140();
   input += synapse0x2cc7180();
   input += synapse0x2cc71c0();
   input += synapse0x2cc7200();
   input += synapse0x2cc6c90();
   input += synapse0x2cc6cd0();
   input += synapse0x2cc7350();
   input += synapse0x2cc7390();
   input += synapse0x2cc73d0();
   input += synapse0x2cc7410();
   input += synapse0x2cc7450();
   input += synapse0x2cc7490();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc6b00() {
   double input = input0x2cc6b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc74d0() {
   double input = -0.122159;
   input += synapse0x2caff40();
   input += synapse0x2caff80();
   input += synapse0x2caffc0();
   input += synapse0x2cb0000();
   input += synapse0x2cb0040();
   input += synapse0x2cb0080();
   input += synapse0x2cb00c0();
   input += synapse0x2cb0100();
   input += synapse0x2cc7c20();
   input += synapse0x2cc7c60();
   input += synapse0x2cc7ca0();
   input += synapse0x2cc7ce0();
   input += synapse0x2cc7d20();
   input += synapse0x2cc7d60();
   input += synapse0x2cc7da0();
   input += synapse0x2cc7de0();
   input += synapse0x2cc7660();
   input += synapse0x2cc76a0();
   input += synapse0x2cc7f30();
   input += synapse0x2cc7f70();
   input += synapse0x2cc7fb0();
   input += synapse0x2cc7ff0();
   input += synapse0x2cc8030();
   input += synapse0x2cc8070();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc74d0() {
   double input = input0x2cc74d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc80b0() {
   double input = 0.62854;
   input += synapse0x2cc83f0();
   input += synapse0x2cc8430();
   input += synapse0x2cc8470();
   input += synapse0x2cc84b0();
   input += synapse0x2cc84f0();
   input += synapse0x2cc8530();
   input += synapse0x2cc8570();
   input += synapse0x2cc85b0();
   input += synapse0x2cc85f0();
   input += synapse0x2cc8630();
   input += synapse0x2cc8670();
   input += synapse0x2cc86b0();
   input += synapse0x2cc86f0();
   input += synapse0x2cc8730();
   input += synapse0x2cc8770();
   input += synapse0x2cc87b0();
   input += synapse0x2cc8240();
   input += synapse0x2cc8280();
   input += synapse0x2cc8900();
   input += synapse0x2cc8940();
   input += synapse0x2cc8980();
   input += synapse0x2cc89c0();
   input += synapse0x2cc8a00();
   input += synapse0x2cc8a40();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc80b0() {
   double input = input0x2cc80b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cc8a80() {
   double input = 1.36134;
   input += synapse0x2cc8dc0();
   input += synapse0x2cc8e00();
   input += synapse0x2cc8e40();
   input += synapse0x2cc8e80();
   input += synapse0x2cc8ec0();
   input += synapse0x2cc8f00();
   input += synapse0x2cc8f40();
   input += synapse0x2cc8f80();
   input += synapse0x2cc8fc0();
   input += synapse0x2cc9000();
   input += synapse0x2cc9040();
   input += synapse0x2cc9080();
   input += synapse0x2cc90c0();
   input += synapse0x2cc9100();
   input += synapse0x2cc9140();
   input += synapse0x2cc9180();
   input += synapse0x2cc8c10();
   input += synapse0x2cc8c50();
   input += synapse0x2cb9780();
   input += synapse0x2cb97c0();
   input += synapse0x2cb9800();
   input += synapse0x2cb9840();
   input += synapse0x2cb9880();
   input += synapse0x2cb98c0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cc8a80() {
   double input = input0x2cc8a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cb9900() {
   double input = 0.775831;
   input += synapse0x2cb9c40();
   input += synapse0x2cb9c80();
   input += synapse0x2cb9cc0();
   input += synapse0x2cb9d00();
   input += synapse0x2cb9d40();
   input += synapse0x2cb9d80();
   input += synapse0x2cb9dc0();
   input += synapse0x2cb9e00();
   input += synapse0x2cb9e40();
   input += synapse0x2cb9e80();
   input += synapse0x2cb9ec0();
   input += synapse0x2cb9f00();
   input += synapse0x2cb9f40();
   input += synapse0x2cb9f80();
   input += synapse0x2cb9fc0();
   input += synapse0x2cba000();
   input += synapse0x2cb9a90();
   input += synapse0x2cb9ad0();
   input += synapse0x2cba150();
   input += synapse0x2cba190();
   input += synapse0x2cba1d0();
   input += synapse0x2cba210();
   input += synapse0x2cba250();
   input += synapse0x2cba290();
   return input;
}

double NNfunction_sg_uL::neuron0x2cb9900() {
   double input = input0x2cb9900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cba2d0() {
   double input = 1.25885;
   input += synapse0x2cba610();
   input += synapse0x2cba650();
   input += synapse0x2cba690();
   input += synapse0x2cba6d0();
   input += synapse0x2cba710();
   input += synapse0x2cba750();
   input += synapse0x2cba790();
   input += synapse0x2cba7d0();
   input += synapse0x2cba810();
   input += synapse0x2cba850();
   input += synapse0x2cba890();
   input += synapse0x2cba8d0();
   input += synapse0x2cba910();
   input += synapse0x2cba950();
   input += synapse0x2cba990();
   input += synapse0x2cba9d0();
   input += synapse0x2cba460();
   input += synapse0x2cba4a0();
   input += synapse0x2cbab20();
   input += synapse0x2cbab60();
   input += synapse0x2cbaba0();
   input += synapse0x2cbabe0();
   input += synapse0x2cbac20();
   input += synapse0x2cbac60();
   return input;
}

double NNfunction_sg_uL::neuron0x2cba2d0() {
   double input = input0x2cba2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cbaca0() {
   double input = -0.230639;
   input += synapse0x2cbafe0();
   input += synapse0x2cbb020();
   input += synapse0x2cbb060();
   input += synapse0x2cbb0a0();
   input += synapse0x2cbb0e0();
   input += synapse0x2cbb120();
   input += synapse0x2cbb160();
   input += synapse0x2cbb1a0();
   input += synapse0x2cbb1e0();
   input += synapse0x2cbb220();
   input += synapse0x2cbb260();
   input += synapse0x2cbb2a0();
   input += synapse0x2cbb2e0();
   input += synapse0x2cbb320();
   input += synapse0x2cbb360();
   input += synapse0x2cbb3a0();
   input += synapse0x2cbae30();
   input += synapse0x2cbae70();
   input += synapse0x2cbb4f0();
   input += synapse0x2cbb530();
   input += synapse0x2cbb570();
   input += synapse0x2cbb5b0();
   input += synapse0x2cbb5f0();
   input += synapse0x2cbb630();
   return input;
}

double NNfunction_sg_uL::neuron0x2cbaca0() {
   double input = input0x2cbaca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2ccd2e0() {
   double input = -4.7104;
   input += synapse0x2ccd500();
   input += synapse0x2ccd540();
   input += synapse0x2ccd580();
   input += synapse0x2ccd5c0();
   input += synapse0x2ccd600();
   input += synapse0x2ccd640();
   input += synapse0x2ccd680();
   input += synapse0x2ccd6c0();
   input += synapse0x2ccd700();
   input += synapse0x2ccd740();
   input += synapse0x2ccd780();
   input += synapse0x2ccd7c0();
   input += synapse0x2ccd800();
   input += synapse0x2ccd840();
   input += synapse0x2ccd880();
   input += synapse0x2ccd8c0();
   input += synapse0x2cbb670();
   input += synapse0x2cbb6b0();
   input += synapse0x2ccda10();
   input += synapse0x2ccda50();
   input += synapse0x2ccda90();
   input += synapse0x2ccdad0();
   input += synapse0x2ccdb10();
   input += synapse0x2ccdb50();
   return input;
}

double NNfunction_sg_uL::neuron0x2ccd2e0() {
   double input = input0x2ccd2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2ccdb90() {
   double input = 2.27484;
   input += synapse0x2ccded0();
   input += synapse0x2ccdf10();
   input += synapse0x2ccdf50();
   input += synapse0x2ccdf90();
   input += synapse0x2ccdfd0();
   input += synapse0x2cce010();
   input += synapse0x2cce050();
   input += synapse0x2cce090();
   input += synapse0x2cce0d0();
   input += synapse0x2cce110();
   input += synapse0x2cce150();
   input += synapse0x2cce190();
   input += synapse0x2cce1d0();
   input += synapse0x2cce210();
   input += synapse0x2cce250();
   input += synapse0x2cce290();
   input += synapse0x2ccdd20();
   input += synapse0x2ccdd60();
   input += synapse0x2cce3e0();
   input += synapse0x2cce420();
   input += synapse0x2cce460();
   input += synapse0x2cce4a0();
   input += synapse0x2cce4e0();
   input += synapse0x2cce520();
   return input;
}

double NNfunction_sg_uL::neuron0x2ccdb90() {
   double input = input0x2ccdb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cce560() {
   double input = -0.695149;
   input += synapse0x2cce8a0();
   input += synapse0x2cce8e0();
   input += synapse0x2cce920();
   input += synapse0x2cce960();
   input += synapse0x2cce9a0();
   input += synapse0x2cce9e0();
   input += synapse0x2ccea20();
   input += synapse0x2ccea60();
   input += synapse0x2cceaa0();
   input += synapse0x2cceae0();
   input += synapse0x2cceb20();
   input += synapse0x2cceb60();
   input += synapse0x2cceba0();
   input += synapse0x2ccebe0();
   input += synapse0x2ccec20();
   input += synapse0x2ccec60();
   input += synapse0x2cce6f0();
   input += synapse0x2cce730();
   input += synapse0x2ccedb0();
   input += synapse0x2ccedf0();
   input += synapse0x2ccee30();
   input += synapse0x2ccee70();
   input += synapse0x2cceeb0();
   input += synapse0x2cceef0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cce560() {
   double input = input0x2cce560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2ccef30() {
   double input = 0.671436;
   input += synapse0x2ccf270();
   input += synapse0x2ccf2b0();
   input += synapse0x2ccf2f0();
   input += synapse0x2ccf330();
   input += synapse0x2ccf370();
   input += synapse0x2ccf3b0();
   input += synapse0x2ccf3f0();
   input += synapse0x2ccf430();
   input += synapse0x2ccf470();
   input += synapse0x2ccf4b0();
   input += synapse0x2ccf4f0();
   input += synapse0x2ccf530();
   input += synapse0x2ccf570();
   input += synapse0x2ccf5b0();
   input += synapse0x2ccf5f0();
   input += synapse0x2ccf630();
   input += synapse0x2ccf0c0();
   input += synapse0x2ccf100();
   input += synapse0x2ccf780();
   input += synapse0x2ccf7c0();
   input += synapse0x2ccf800();
   input += synapse0x2ccf840();
   input += synapse0x2ccf880();
   input += synapse0x2ccf8c0();
   return input;
}

double NNfunction_sg_uL::neuron0x2ccef30() {
   double input = input0x2ccef30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cd6130() {
   double input = -0.047423;
   input += synapse0x2a6f6f0();
   input += synapse0x2a6f730();
   input += synapse0x2cac260();
   input += synapse0x2cac2a0();
   input += synapse0x2cadd40();
   input += synapse0x2cadd80();
   input += synapse0x2caeb10();
   input += synapse0x2caeb50();
   input += synapse0x2caf4e0();
   input += synapse0x2caf520();
   input += synapse0x2cafeb0();
   input += synapse0x2cafef0();
   input += synapse0x2cb0990();
   input += synapse0x2cb09d0();
   input += synapse0x2cb1360();
   input += synapse0x2cb13a0();
   input += synapse0x2cae440();
   input += synapse0x2cae480();
   input += synapse0x2cb2f10();
   input += synapse0x2cb2f50();
   input += synapse0x2cb38e0();
   input += synapse0x2cb3920();
   input += synapse0x2cb42b0();
   input += synapse0x2cb42f0();
   input += synapse0x2cb4c80();
   input += synapse0x2cb4cc0();
   input += synapse0x2ca7d10();
   input += synapse0x2ca7d50();
   input += synapse0x2cb6d70();
   input += synapse0x2cb6db0();
   input += synapse0x2cb7740();
   input += synapse0x2cb7780();
   input += synapse0x2cb8110();
   input += synapse0x2cb8150();
   input += synapse0x2cb8ae0();
   input += synapse0x2cb8b20();
   input += synapse0x2cb94b0();
   input += synapse0x2cb94f0();
   input += synapse0x2cb2000();
   input += synapse0x2cb2040();
   input += synapse0x2cbb8b0();
   input += synapse0x2cbb8f0();
   input += synapse0x2cbc240();
   input += synapse0x2cbc280();
   input += synapse0x2cbcc10();
   input += synapse0x2cbcc50();
   input += synapse0x2cbd5e0();
   input += synapse0x2cbd620();
   input += synapse0x2cbdfb0();
   input += synapse0x2cbdff0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cd6130() {
   double input = input0x2cd6130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cd64d0() {
   double input = 0.349778;
   input += synapse0x2cc06f0();
   input += synapse0x2cc0730();
   input += synapse0x2cb5cb0();
   input += synapse0x2cb5cf0();
   input += synapse0x2cc32d0();
   input += synapse0x2cc3310();
   input += synapse0x2cc3ca0();
   input += synapse0x2cc3ce0();
   input += synapse0x2cc4670();
   input += synapse0x2cc46b0();
   input += synapse0x2cc5040();
   input += synapse0x2cc5080();
   input += synapse0x2cc5a10();
   input += synapse0x2cc5a50();
   input += synapse0x2cc63e0();
   input += synapse0x2cc6420();
   input += synapse0x2cc6db0();
   input += synapse0x2cc6df0();
   input += synapse0x2cc7780();
   input += synapse0x2cc77c0();
   input += synapse0x2cc8360();
   input += synapse0x2cc83a0();
   input += synapse0x2cc8d30();
   input += synapse0x2cc8d70();
   input += synapse0x2cb9bb0();
   input += synapse0x2cb9bf0();
   input += synapse0x2cba580();
   input += synapse0x2cba5c0();
   input += synapse0x2cbaf50();
   input += synapse0x2cbaf90();
   input += synapse0x2ccd470();
   input += synapse0x2ccd4b0();
   input += synapse0x2ccde40();
   input += synapse0x2ccde80();
   input += synapse0x2cce810();
   input += synapse0x2cce850();
   input += synapse0x2ccf1e0();
   input += synapse0x2ccf220();
   input += synapse0x2caa050();
   input += synapse0x2caa090();
   input += synapse0x2cbe980();
   input += synapse0x2cbe9c0();
   input += synapse0x2ccf900();
   input += synapse0x2ccf940();
   input += synapse0x2ccf980();
   input += synapse0x2ccf9c0();
   input += synapse0x2cd6870();
   input += synapse0x2cd68b0();
   input += synapse0x2cd68f0();
   input += synapse0x2cd6930();
   return input;
}

double NNfunction_sg_uL::neuron0x2cd64d0() {
   double input = input0x2cd64d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cd6970() {
   double input = -0.893423;
   input += synapse0x2cd6cb0();
   input += synapse0x2cd6cf0();
   input += synapse0x2cd6d30();
   input += synapse0x2cd6d70();
   input += synapse0x2cd6db0();
   input += synapse0x2cd6df0();
   input += synapse0x2cd6e30();
   input += synapse0x2cd6e70();
   input += synapse0x2cd6eb0();
   input += synapse0x2cd6ef0();
   input += synapse0x2cd6f30();
   input += synapse0x2cd6f70();
   input += synapse0x2cd6fb0();
   input += synapse0x2cd6ff0();
   input += synapse0x2cd7030();
   input += synapse0x2cd7070();
   input += synapse0x2cd6b00();
   input += synapse0x2cd6b40();
   input += synapse0x2cd71c0();
   input += synapse0x2cd7200();
   input += synapse0x2cd7240();
   input += synapse0x2cd7280();
   input += synapse0x2cd72c0();
   input += synapse0x2cd7300();
   input += synapse0x2cd7340();
   input += synapse0x2cd7380();
   input += synapse0x2cd73c0();
   input += synapse0x2cd7400();
   input += synapse0x2cd7440();
   input += synapse0x2cd7480();
   input += synapse0x2cd74c0();
   input += synapse0x2cd7500();
   input += synapse0x2cd70b0();
   input += synapse0x2cd70f0();
   input += synapse0x2cd7130();
   input += synapse0x2cd7170();
   input += synapse0x2cd7750();
   input += synapse0x2cd7790();
   input += synapse0x2cd77d0();
   input += synapse0x2cd7810();
   input += synapse0x2cd7850();
   input += synapse0x2cd7890();
   input += synapse0x2cd78d0();
   input += synapse0x2cd7910();
   input += synapse0x2cd7950();
   input += synapse0x2cd7990();
   input += synapse0x2cd79d0();
   input += synapse0x2cd7a10();
   input += synapse0x2cd7a50();
   input += synapse0x2cd7a90();
   return input;
}

double NNfunction_sg_uL::neuron0x2cd6970() {
   double input = input0x2cd6970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cd7ad0() {
   double input = -0.377086;
   input += synapse0x2cd7e10();
   input += synapse0x2cd7e50();
   input += synapse0x2cd7e90();
   input += synapse0x2cd7ed0();
   input += synapse0x2cd7f10();
   input += synapse0x2cd7f50();
   input += synapse0x2cd7f90();
   input += synapse0x2cd7fd0();
   input += synapse0x2cd8010();
   input += synapse0x2cd8050();
   input += synapse0x2cd8090();
   input += synapse0x2cd80d0();
   input += synapse0x2cd8110();
   input += synapse0x2cd8150();
   input += synapse0x2cd8190();
   input += synapse0x2cd81d0();
   input += synapse0x2cd7c60();
   input += synapse0x2cd7ca0();
   input += synapse0x2cd8320();
   input += synapse0x2cd8360();
   input += synapse0x2cd83a0();
   input += synapse0x2cd83e0();
   input += synapse0x2cd8420();
   input += synapse0x2cd8460();
   input += synapse0x2cd84a0();
   input += synapse0x2cd84e0();
   input += synapse0x2cd8520();
   input += synapse0x2cd8560();
   input += synapse0x2cd85a0();
   input += synapse0x2cd85e0();
   input += synapse0x2cd8620();
   input += synapse0x2cd8660();
   input += synapse0x2cd8210();
   input += synapse0x2cd8250();
   input += synapse0x2cd8290();
   input += synapse0x2cd82d0();
   input += synapse0x2cd88b0();
   input += synapse0x2cd88f0();
   input += synapse0x2cd8930();
   input += synapse0x2cd8970();
   input += synapse0x2cd89b0();
   input += synapse0x2cd89f0();
   input += synapse0x2cd8a30();
   input += synapse0x2cd8a70();
   input += synapse0x2cd8ab0();
   input += synapse0x2cd8af0();
   input += synapse0x2cd8b30();
   input += synapse0x2cd8b70();
   input += synapse0x2cd8bb0();
   input += synapse0x2cd8bf0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cd7ad0() {
   double input = input0x2cd7ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cd8c30() {
   double input = 0.292786;
   input += synapse0x2cd8f70();
   input += synapse0x2cd8fb0();
   input += synapse0x2cd8ff0();
   input += synapse0x2cd9030();
   input += synapse0x2cd9070();
   input += synapse0x2cd90b0();
   input += synapse0x2cd90f0();
   input += synapse0x2cd9130();
   input += synapse0x2cd9170();
   input += synapse0x2cd91b0();
   input += synapse0x2cd91f0();
   input += synapse0x2cd9230();
   input += synapse0x2cd9270();
   input += synapse0x2cd92b0();
   input += synapse0x2cd92f0();
   input += synapse0x2cd9330();
   input += synapse0x2cd8dc0();
   input += synapse0x2cd8e00();
   input += synapse0x2cd9480();
   input += synapse0x2cd94c0();
   input += synapse0x2cd9500();
   input += synapse0x2cd9540();
   input += synapse0x2cd9580();
   input += synapse0x2cd95c0();
   input += synapse0x2cd9600();
   input += synapse0x2cd9640();
   input += synapse0x2cd9680();
   input += synapse0x2cd96c0();
   input += synapse0x2cd9700();
   input += synapse0x2cd9740();
   input += synapse0x2cd9780();
   input += synapse0x2cd97c0();
   input += synapse0x2cd9370();
   input += synapse0x2cd93b0();
   input += synapse0x2cd93f0();
   input += synapse0x2cd9430();
   input += synapse0x2cd9a10();
   input += synapse0x2cd9a50();
   input += synapse0x2cd9a90();
   input += synapse0x2cd9ad0();
   input += synapse0x2cd9b10();
   input += synapse0x2cd9b50();
   input += synapse0x2cd9b90();
   input += synapse0x2cd9bd0();
   input += synapse0x2cd9c10();
   input += synapse0x2cd9c50();
   input += synapse0x2cd9c90();
   input += synapse0x2cd9cd0();
   input += synapse0x2cd9d10();
   input += synapse0x2cd9d50();
   return input;
}

double NNfunction_sg_uL::neuron0x2cd8c30() {
   double input = input0x2cd8c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_uL::input0x2cd9d90() {
   double input = 3.78574;
   input += synapse0x2cd9fb0();
   input += synapse0x2cd9ff0();
   input += synapse0x2cda030();
   input += synapse0x2cda070();
   input += synapse0x2cda0b0();
   return input;
}

double NNfunction_sg_uL::neuron0x2cd9d90() {
   double input = input0x2cd9d90();
   return (input * 1)+0;
}

double NNfunction_sg_uL::synapse0x2caa0e0() {
   return (neuron0x2ca4e00()*-0.241406);
}

double NNfunction_sg_uL::synapse0x2caa120() {
   return (neuron0x2ca50b0()*-0.126028);
}

double NNfunction_sg_uL::synapse0x2caa160() {
   return (neuron0x2ca53f0()*0.21552);
}

double NNfunction_sg_uL::synapse0x2caa1a0() {
   return (neuron0x2ca5730()*-1.21357);
}

double NNfunction_sg_uL::synapse0x2caa1e0() {
   return (neuron0x2ca5a70()*-0.378436);
}

double NNfunction_sg_uL::synapse0x2caa220() {
   return (neuron0x2ca5db0()*-0.430756);
}

double NNfunction_sg_uL::synapse0x2caa260() {
   return (neuron0x2ca60f0()*-0.267295);
}

double NNfunction_sg_uL::synapse0x2caa2a0() {
   return (neuron0x2ca6430()*-0.471249);
}

double NNfunction_sg_uL::synapse0x2caa2e0() {
   return (neuron0x2ca6770()*-0.171812);
}

double NNfunction_sg_uL::synapse0x2caa320() {
   return (neuron0x2ca6ab0()*0.0893471);
}

double NNfunction_sg_uL::synapse0x2caa360() {
   return (neuron0x2ca6df0()*-0.105967);
}

double NNfunction_sg_uL::synapse0x2caa3a0() {
   return (neuron0x2ca7130()*-1.38345);
}

double NNfunction_sg_uL::synapse0x2caa3e0() {
   return (neuron0x2ca7470()*0.142836);
}

double NNfunction_sg_uL::synapse0x2caa420() {
   return (neuron0x2ca77b0()*-0.143444);
}

double NNfunction_sg_uL::synapse0x2caa460() {
   return (neuron0x2ca7af0()*0.0239301);
}

double NNfunction_sg_uL::synapse0x2caa4a0() {
   return (neuron0x2ca7e30()*0.369396);
}

double NNfunction_sg_uL::synapse0x2ca9f30() {
   return (neuron0x2ca8170()*-0.0255303);
}

double NNfunction_sg_uL::synapse0x2ca9f70() {
   return (neuron0x2ca86d0()*0.137072);
}

double NNfunction_sg_uL::synapse0x181cc70() {
   return (neuron0x2ca88f0()*-0.109582);
}

double NNfunction_sg_uL::synapse0x181ccb0() {
   return (neuron0x2ca8c30()*-0.0867137);
}

double NNfunction_sg_uL::synapse0x2caa5f0() {
   return (neuron0x2ca8f70()*0.221524);
}

double NNfunction_sg_uL::synapse0x2caa630() {
   return (neuron0x2ca92b0()*0.1744);
}

double NNfunction_sg_uL::synapse0x2caa670() {
   return (neuron0x2ca95f0()*-0.0503064);
}

double NNfunction_sg_uL::synapse0x2caa6b0() {
   return (neuron0x2ca9930()*-0.330203);
}

double NNfunction_sg_uL::synapse0x2caaa30() {
   return (neuron0x2ca4e00()*0.196155);
}

double NNfunction_sg_uL::synapse0x2caaa70() {
   return (neuron0x2ca50b0()*0.0919472);
}

double NNfunction_sg_uL::synapse0x2caaab0() {
   return (neuron0x2ca53f0()*-0.0401571);
}

double NNfunction_sg_uL::synapse0x2caaaf0() {
   return (neuron0x2ca5730()*-0.444843);
}

double NNfunction_sg_uL::synapse0x2caab30() {
   return (neuron0x2ca5a70()*0.369889);
}

double NNfunction_sg_uL::synapse0x2caab70() {
   return (neuron0x2ca5db0()*0.558391);
}

double NNfunction_sg_uL::synapse0x2caabb0() {
   return (neuron0x2ca60f0()*-0.0781538);
}

double NNfunction_sg_uL::synapse0x2caabf0() {
   return (neuron0x2ca6430()*-0.415128);
}

double NNfunction_sg_uL::synapse0x2caac30() {
   return (neuron0x2ca6770()*-0.354649);
}

double NNfunction_sg_uL::synapse0x2caa4e0() {
   return (neuron0x2ca6ab0()*-0.36689);
}

double NNfunction_sg_uL::synapse0x2caa520() {
   return (neuron0x2ca6df0()*-0.045727);
}

double NNfunction_sg_uL::synapse0x2caa560() {
   return (neuron0x2ca7130()*-0.42642);
}

double NNfunction_sg_uL::synapse0x2caa5a0() {
   return (neuron0x2ca7470()*-0.0732493);
}

double NNfunction_sg_uL::synapse0x2caae80() {
   return (neuron0x2ca77b0()*-0.144008);
}

double NNfunction_sg_uL::synapse0x2caaec0() {
   return (neuron0x2ca7af0()*-0.154614);
}

double NNfunction_sg_uL::synapse0x2caaf00() {
   return (neuron0x2ca7e30()*-0.12226);
}

double NNfunction_sg_uL::synapse0x2caa880() {
   return (neuron0x2ca8170()*-0.228231);
}

double NNfunction_sg_uL::synapse0x2caa8c0() {
   return (neuron0x2ca86d0()*-0.174584);
}

double NNfunction_sg_uL::synapse0x2cab050() {
   return (neuron0x2ca88f0()*-0.660462);
}

double NNfunction_sg_uL::synapse0x2cab090() {
   return (neuron0x2ca8c30()*0.0095576);
}

double NNfunction_sg_uL::synapse0x2cab0d0() {
   return (neuron0x2ca8f70()*0.199065);
}

double NNfunction_sg_uL::synapse0x2cab110() {
   return (neuron0x2ca92b0()*0.287426);
}

double NNfunction_sg_uL::synapse0x2cab150() {
   return (neuron0x2ca95f0()*0.355913);
}

double NNfunction_sg_uL::synapse0x2cab190() {
   return (neuron0x2ca9930()*-0.338756);
}

double NNfunction_sg_uL::synapse0x2cab510() {
   return (neuron0x2ca4e00()*0.243425);
}

double NNfunction_sg_uL::synapse0x2cab550() {
   return (neuron0x2ca50b0()*-0.361824);
}

double NNfunction_sg_uL::synapse0x2cab590() {
   return (neuron0x2ca53f0()*0.650898);
}

double NNfunction_sg_uL::synapse0x2cab5d0() {
   return (neuron0x2ca5730()*0.221883);
}

double NNfunction_sg_uL::synapse0x2cab610() {
   return (neuron0x2ca5a70()*-0.398867);
}

double NNfunction_sg_uL::synapse0x2cab650() {
   return (neuron0x2ca5db0()*-0.0213251);
}

double NNfunction_sg_uL::synapse0x2cab690() {
   return (neuron0x2ca60f0()*0.0892215);
}

double NNfunction_sg_uL::synapse0x2cab6d0() {
   return (neuron0x2ca6430()*-0.183555);
}

double NNfunction_sg_uL::synapse0x2cab710() {
   return (neuron0x2ca6770()*0.147463);
}

double NNfunction_sg_uL::synapse0x2cab750() {
   return (neuron0x2ca6ab0()*-0.0321901);
}

double NNfunction_sg_uL::synapse0x2cab790() {
   return (neuron0x2ca6df0()*-0.30836);
}

double NNfunction_sg_uL::synapse0x2cab7d0() {
   return (neuron0x2ca7130()*0.013627);
}

double NNfunction_sg_uL::synapse0x2cab810() {
   return (neuron0x2ca7470()*-0.518881);
}

double NNfunction_sg_uL::synapse0x2cab850() {
   return (neuron0x2ca77b0()*0.00228901);
}

double NNfunction_sg_uL::synapse0x2cab890() {
   return (neuron0x2ca7af0()*-0.204423);
}

double NNfunction_sg_uL::synapse0x2cab8d0() {
   return (neuron0x2ca7e30()*-0.722044);
}

double NNfunction_sg_uL::synapse0x2cab360() {
   return (neuron0x2ca8170()*-0.565482);
}

double NNfunction_sg_uL::synapse0x2cab3a0() {
   return (neuron0x2ca86d0()*-0.373065);
}

double NNfunction_sg_uL::synapse0x180a250() {
   return (neuron0x2ca88f0()*-0.268432);
}

double NNfunction_sg_uL::synapse0x2a6ef00() {
   return (neuron0x2ca8c30()*-0.37732);
}

double NNfunction_sg_uL::synapse0x2a6ef40() {
   return (neuron0x2ca8f70()*-0.0461161);
}

double NNfunction_sg_uL::synapse0x2cad810() {
   return (neuron0x2ca92b0()*-0.07847);
}

double NNfunction_sg_uL::synapse0x2cad850() {
   return (neuron0x2ca95f0()*-0.134774);
}

double NNfunction_sg_uL::synapse0x2ca4b40() {
   return (neuron0x2ca9930()*-0.272928);
}

double NNfunction_sg_uL::synapse0x2ca4c10() {
   return (neuron0x2ca4e00()*-0.0104483);
}

double NNfunction_sg_uL::synapse0x2a6f780() {
   return (neuron0x2ca50b0()*0.0267737);
}

double NNfunction_sg_uL::synapse0x2caae00() {
   return (neuron0x2ca53f0()*0.561845);
}

double NNfunction_sg_uL::synapse0x2caae40() {
   return (neuron0x2ca5730()*-0.268463);
}

double NNfunction_sg_uL::synapse0x2caba20() {
   return (neuron0x2ca5a70()*-0.145181);
}

double NNfunction_sg_uL::synapse0x2caba60() {
   return (neuron0x2ca5db0()*-0.384202);
}

double NNfunction_sg_uL::synapse0x2cabaa0() {
   return (neuron0x2ca60f0()*-0.344406);
}

double NNfunction_sg_uL::synapse0x2cabae0() {
   return (neuron0x2ca6430()*-0.362366);
}

double NNfunction_sg_uL::synapse0x2cabb20() {
   return (neuron0x2ca6770()*-0.532629);
}

double NNfunction_sg_uL::synapse0x2cabb60() {
   return (neuron0x2ca6ab0()*-0.0193243);
}

double NNfunction_sg_uL::synapse0x2cabba0() {
   return (neuron0x2ca6df0()*-0.693314);
}

double NNfunction_sg_uL::synapse0x2cabbe0() {
   return (neuron0x2ca7130()*-0.104276);
}

double NNfunction_sg_uL::synapse0x2cabc20() {
   return (neuron0x2ca7470()*-0.345679);
}

double NNfunction_sg_uL::synapse0x2cabc60() {
   return (neuron0x2ca77b0()*-0.249984);
}

double NNfunction_sg_uL::synapse0x2cabca0() {
   return (neuron0x2ca7af0()*-0.199916);
}

double NNfunction_sg_uL::synapse0x2cabce0() {
   return (neuron0x2ca7e30()*-0.524036);
}

double NNfunction_sg_uL::synapse0x2ca4b80() {
   return (neuron0x2ca8170()*-0.11625);
}

double NNfunction_sg_uL::synapse0x2ca4bc0() {
   return (neuron0x2ca86d0()*-0.172129);
}

double NNfunction_sg_uL::synapse0x2cabe30() {
   return (neuron0x2ca88f0()*-0.264054);
}

double NNfunction_sg_uL::synapse0x2cabe70() {
   return (neuron0x2ca8c30()*-0.567217);
}

double NNfunction_sg_uL::synapse0x2cabeb0() {
   return (neuron0x2ca8f70()*0.400353);
}

double NNfunction_sg_uL::synapse0x2cabef0() {
   return (neuron0x2ca92b0()*-0.212209);
}

double NNfunction_sg_uL::synapse0x2cabf30() {
   return (neuron0x2ca95f0()*-0.0869711);
}

double NNfunction_sg_uL::synapse0x2cabf70() {
   return (neuron0x2ca9930()*-0.345369);
}

double NNfunction_sg_uL::synapse0x2cac2f0() {
   return (neuron0x2ca4e00()*0.222854);
}

double NNfunction_sg_uL::synapse0x2cac330() {
   return (neuron0x2ca50b0()*0.322917);
}

double NNfunction_sg_uL::synapse0x2cac370() {
   return (neuron0x2ca53f0()*0.276551);
}

double NNfunction_sg_uL::synapse0x2cac3b0() {
   return (neuron0x2ca5730()*0.570991);
}

double NNfunction_sg_uL::synapse0x2cac3f0() {
   return (neuron0x2ca5a70()*-0.208889);
}

double NNfunction_sg_uL::synapse0x2cac430() {
   return (neuron0x2ca5db0()*0.338462);
}

double NNfunction_sg_uL::synapse0x2cac470() {
   return (neuron0x2ca60f0()*-0.0527369);
}

double NNfunction_sg_uL::synapse0x2cac4b0() {
   return (neuron0x2ca6430()*-0.226932);
}

double NNfunction_sg_uL::synapse0x2cac4f0() {
   return (neuron0x2ca6770()*0.146648);
}

double NNfunction_sg_uL::synapse0x2cac530() {
   return (neuron0x2ca6ab0()*0.162056);
}

double NNfunction_sg_uL::synapse0x2cac570() {
   return (neuron0x2ca6df0()*-0.208556);
}

double NNfunction_sg_uL::synapse0x2cac5b0() {
   return (neuron0x2ca7130()*0.966818);
}

double NNfunction_sg_uL::synapse0x2cac5f0() {
   return (neuron0x2ca7470()*0.68746);
}

double NNfunction_sg_uL::synapse0x2cac630() {
   return (neuron0x2ca77b0()*0.27284);
}

double NNfunction_sg_uL::synapse0x2cac670() {
   return (neuron0x2ca7af0()*0.761493);
}

double NNfunction_sg_uL::synapse0x2cac6b0() {
   return (neuron0x2ca7e30()*-0.0602419);
}

double NNfunction_sg_uL::synapse0x2cac800() {
   return (neuron0x2ca8170()*-0.361408);
}

double NNfunction_sg_uL::synapse0x2cac140() {
   return (neuron0x2ca86d0()*0.261974);
}

double NNfunction_sg_uL::synapse0x2cac180() {
   return (neuron0x2ca88f0()*0.040705);
}

double NNfunction_sg_uL::synapse0x2cad950() {
   return (neuron0x2ca8c30()*0.234509);
}

double NNfunction_sg_uL::synapse0x2cad990() {
   return (neuron0x2ca8f70()*-0.446665);
}

double NNfunction_sg_uL::synapse0x2cad9d0() {
   return (neuron0x2ca92b0()*-0.136401);
}

double NNfunction_sg_uL::synapse0x2cada10() {
   return (neuron0x2ca95f0()*0.341996);
}

double NNfunction_sg_uL::synapse0x2cada50() {
   return (neuron0x2ca9930()*0.207754);
}

double NNfunction_sg_uL::synapse0x2caddd0() {
   return (neuron0x2ca4e00()*0.0790626);
}

double NNfunction_sg_uL::synapse0x2cade10() {
   return (neuron0x2ca50b0()*0.059694);
}

double NNfunction_sg_uL::synapse0x2cade50() {
   return (neuron0x2ca53f0()*0.740938);
}

double NNfunction_sg_uL::synapse0x2cade90() {
   return (neuron0x2ca5730()*-0.135881);
}

double NNfunction_sg_uL::synapse0x2caded0() {
   return (neuron0x2ca5a70()*0.136106);
}

double NNfunction_sg_uL::synapse0x2cadf10() {
   return (neuron0x2ca5db0()*0.134756);
}

double NNfunction_sg_uL::synapse0x2cadf50() {
   return (neuron0x2ca60f0()*0.144399);
}

double NNfunction_sg_uL::synapse0x2cadf90() {
   return (neuron0x2ca6430()*0.0792162);
}

double NNfunction_sg_uL::synapse0x2cadfd0() {
   return (neuron0x2ca6770()*0.00480519);
}

double NNfunction_sg_uL::synapse0x2a6f250() {
   return (neuron0x2ca6ab0()*0.00833965);
}

double NNfunction_sg_uL::synapse0x2a6f290() {
   return (neuron0x2ca6df0()*-0.0740863);
}

double NNfunction_sg_uL::synapse0x2a6f2d0() {
   return (neuron0x2ca7130()*-1.01987);
}

double NNfunction_sg_uL::synapse0x2a6f310() {
   return (neuron0x2ca7470()*0.022519);
}

double NNfunction_sg_uL::synapse0x2a6f350() {
   return (neuron0x2ca77b0()*0.162586);
}

double NNfunction_sg_uL::synapse0x2a6f390() {
   return (neuron0x2ca7af0()*0.0125787);
}

double NNfunction_sg_uL::synapse0x2a6f3d0() {
   return (neuron0x2ca7e30()*0.0128468);
}

double NNfunction_sg_uL::synapse0x2cadc20() {
   return (neuron0x2ca8170()*0.277313);
}

double NNfunction_sg_uL::synapse0x2cadc60() {
   return (neuron0x2ca86d0()*0.0217933);
}

double NNfunction_sg_uL::synapse0x2a6f520() {
   return (neuron0x2ca88f0()*-0.0977044);
}

double NNfunction_sg_uL::synapse0x2a6f560() {
   return (neuron0x2ca8c30()*-0.113249);
}

double NNfunction_sg_uL::synapse0x2a6f5a0() {
   return (neuron0x2ca8f70()*-0.0749332);
}

double NNfunction_sg_uL::synapse0x2a6f5e0() {
   return (neuron0x2ca92b0()*-0.0181838);
}

double NNfunction_sg_uL::synapse0x2a6f620() {
   return (neuron0x2ca95f0()*0.0588393);
}

double NNfunction_sg_uL::synapse0x2cae820() {
   return (neuron0x2ca9930()*-0.0394408);
}

double NNfunction_sg_uL::synapse0x2caeba0() {
   return (neuron0x2ca4e00()*-0.0141074);
}

double NNfunction_sg_uL::synapse0x2caebe0() {
   return (neuron0x2ca50b0()*0.0109725);
}

double NNfunction_sg_uL::synapse0x2caec20() {
   return (neuron0x2ca53f0()*0.025034);
}

double NNfunction_sg_uL::synapse0x2caec60() {
   return (neuron0x2ca5730()*-0.0137022);
}

double NNfunction_sg_uL::synapse0x2caeca0() {
   return (neuron0x2ca5a70()*-0.0175313);
}

double NNfunction_sg_uL::synapse0x2caece0() {
   return (neuron0x2ca5db0()*0.0127957);
}

double NNfunction_sg_uL::synapse0x2caed20() {
   return (neuron0x2ca60f0()*0.0159603);
}

double NNfunction_sg_uL::synapse0x2caed60() {
   return (neuron0x2ca6430()*0.00277886);
}

double NNfunction_sg_uL::synapse0x2caeda0() {
   return (neuron0x2ca6770()*-0.103839);
}

double NNfunction_sg_uL::synapse0x2caede0() {
   return (neuron0x2ca6ab0()*-0.00712566);
}

double NNfunction_sg_uL::synapse0x2caee20() {
   return (neuron0x2ca6df0()*0.0401314);
}

double NNfunction_sg_uL::synapse0x2caee60() {
   return (neuron0x2ca7130()*-2.40518);
}

double NNfunction_sg_uL::synapse0x2caeea0() {
   return (neuron0x2ca7470()*0.0467715);
}

double NNfunction_sg_uL::synapse0x2caeee0() {
   return (neuron0x2ca77b0()*0.0380772);
}

double NNfunction_sg_uL::synapse0x2caef20() {
   return (neuron0x2ca7af0()*0.0340162);
}

double NNfunction_sg_uL::synapse0x2caef60() {
   return (neuron0x2ca7e30()*-0.0408462);
}

double NNfunction_sg_uL::synapse0x2cae9f0() {
   return (neuron0x2ca8170()*-0.0264065);
}

double NNfunction_sg_uL::synapse0x2caea30() {
   return (neuron0x2ca86d0()*-0.0051727);
}

double NNfunction_sg_uL::synapse0x2caf0b0() {
   return (neuron0x2ca88f0()*0.0226282);
}

double NNfunction_sg_uL::synapse0x2caf0f0() {
   return (neuron0x2ca8c30()*0.017687);
}

double NNfunction_sg_uL::synapse0x2caf130() {
   return (neuron0x2ca8f70()*-0.050055);
}

double NNfunction_sg_uL::synapse0x2caf170() {
   return (neuron0x2ca92b0()*0.00709028);
}

double NNfunction_sg_uL::synapse0x2caf1b0() {
   return (neuron0x2ca95f0()*0.0027029);
}

double NNfunction_sg_uL::synapse0x2caf1f0() {
   return (neuron0x2ca9930()*0.0239778);
}

double NNfunction_sg_uL::synapse0x2caf570() {
   return (neuron0x2ca4e00()*-0.0162279);
}

double NNfunction_sg_uL::synapse0x2caf5b0() {
   return (neuron0x2ca50b0()*-0.00618485);
}

double NNfunction_sg_uL::synapse0x2caf5f0() {
   return (neuron0x2ca53f0()*-0.0247729);
}

double NNfunction_sg_uL::synapse0x2caf630() {
   return (neuron0x2ca5730()*-0.168143);
}

double NNfunction_sg_uL::synapse0x2caf670() {
   return (neuron0x2ca5a70()*-0.0447689);
}

double NNfunction_sg_uL::synapse0x2caf6b0() {
   return (neuron0x2ca5db0()*-0.0482838);
}

double NNfunction_sg_uL::synapse0x2caf6f0() {
   return (neuron0x2ca60f0()*-0.00592692);
}

double NNfunction_sg_uL::synapse0x2caf730() {
   return (neuron0x2ca6430()*-0.0269616);
}

double NNfunction_sg_uL::synapse0x2caf770() {
   return (neuron0x2ca6770()*-0.10058);
}

double NNfunction_sg_uL::synapse0x2caf7b0() {
   return (neuron0x2ca6ab0()*-0.056755);
}

double NNfunction_sg_uL::synapse0x2caf7f0() {
   return (neuron0x2ca6df0()*-0.0283168);
}

double NNfunction_sg_uL::synapse0x2caf830() {
   return (neuron0x2ca7130()*-1.3404);
}

double NNfunction_sg_uL::synapse0x2caf870() {
   return (neuron0x2ca7470()*-0.0248245);
}

double NNfunction_sg_uL::synapse0x2caf8b0() {
   return (neuron0x2ca77b0()*0.021339);
}

double NNfunction_sg_uL::synapse0x2caf8f0() {
   return (neuron0x2ca7af0()*-0.00562658);
}

double NNfunction_sg_uL::synapse0x2caf930() {
   return (neuron0x2ca7e30()*-0.0257356);
}

double NNfunction_sg_uL::synapse0x2caf3c0() {
   return (neuron0x2ca8170()*-0.0131813);
}

double NNfunction_sg_uL::synapse0x2caf400() {
   return (neuron0x2ca86d0()*-0.021044);
}

double NNfunction_sg_uL::synapse0x2cafa80() {
   return (neuron0x2ca88f0()*0.00993041);
}

double NNfunction_sg_uL::synapse0x2cafac0() {
   return (neuron0x2ca8c30()*-0.0100492);
}

double NNfunction_sg_uL::synapse0x2cafb00() {
   return (neuron0x2ca8f70()*-0.0190978);
}

double NNfunction_sg_uL::synapse0x2cafb40() {
   return (neuron0x2ca92b0()*0.00395843);
}

double NNfunction_sg_uL::synapse0x2cafb80() {
   return (neuron0x2ca95f0()*0.0122945);
}

double NNfunction_sg_uL::synapse0x2cafbc0() {
   return (neuron0x2ca9930()*0.0147399);
}

double NNfunction_sg_uL::synapse0x2ca85c0() {
   return (neuron0x2ca4e00()*-0.0186841);
}

double NNfunction_sg_uL::synapse0x2ca8600() {
   return (neuron0x2ca50b0()*-0.0274895);
}

double NNfunction_sg_uL::synapse0x2ca8640() {
   return (neuron0x2ca53f0()*-0.256494);
}

double NNfunction_sg_uL::synapse0x2ca8680() {
   return (neuron0x2ca5730()*0.561999);
}

double NNfunction_sg_uL::synapse0x2cb0150() {
   return (neuron0x2ca5a70()*0.0295206);
}

double NNfunction_sg_uL::synapse0x2cb0190() {
   return (neuron0x2ca5db0()*0.148635);
}

double NNfunction_sg_uL::synapse0x2cb01d0() {
   return (neuron0x2ca60f0()*-0.00535449);
}

double NNfunction_sg_uL::synapse0x2cb0210() {
   return (neuron0x2ca6430()*0.183625);
}

double NNfunction_sg_uL::synapse0x2cb0250() {
   return (neuron0x2ca6770()*0.0402479);
}

double NNfunction_sg_uL::synapse0x2cb0290() {
   return (neuron0x2ca6ab0()*0.0219469);
}

double NNfunction_sg_uL::synapse0x2cb02d0() {
   return (neuron0x2ca6df0()*0.0369635);
}

double NNfunction_sg_uL::synapse0x2cb0310() {
   return (neuron0x2ca7130()*-1.61172);
}

double NNfunction_sg_uL::synapse0x2cb0350() {
   return (neuron0x2ca7470()*0.000384794);
}

double NNfunction_sg_uL::synapse0x2cb0390() {
   return (neuron0x2ca77b0()*-0.0768496);
}

double NNfunction_sg_uL::synapse0x2cb03d0() {
   return (neuron0x2ca7af0()*0.394809);
}

double NNfunction_sg_uL::synapse0x2cb0410() {
   return (neuron0x2ca7e30()*0.297695);
}

double NNfunction_sg_uL::synapse0x2cafd90() {
   return (neuron0x2ca8170()*-0.170998);
}

double NNfunction_sg_uL::synapse0x2cafdd0() {
   return (neuron0x2ca86d0()*0.105564);
}

double NNfunction_sg_uL::synapse0x2cb0560() {
   return (neuron0x2ca88f0()*0.07677);
}

double NNfunction_sg_uL::synapse0x2cb05a0() {
   return (neuron0x2ca8c30()*0.0331824);
}

double NNfunction_sg_uL::synapse0x2cb05e0() {
   return (neuron0x2ca8f70()*-0.00556131);
}

double NNfunction_sg_uL::synapse0x2cb0620() {
   return (neuron0x2ca92b0()*0.0170831);
}

double NNfunction_sg_uL::synapse0x2cb0660() {
   return (neuron0x2ca95f0()*-0.00697286);
}

double NNfunction_sg_uL::synapse0x2cb06a0() {
   return (neuron0x2ca9930()*0.0553617);
}

double NNfunction_sg_uL::synapse0x2cb0a20() {
   return (neuron0x2ca4e00()*0.0287376);
}

double NNfunction_sg_uL::synapse0x2cb0a60() {
   return (neuron0x2ca50b0()*0.151268);
}

double NNfunction_sg_uL::synapse0x2cb0aa0() {
   return (neuron0x2ca53f0()*0.561469);
}

double NNfunction_sg_uL::synapse0x2cb0ae0() {
   return (neuron0x2ca5730()*-0.601752);
}

double NNfunction_sg_uL::synapse0x2cb0b20() {
   return (neuron0x2ca5a70()*-0.212791);
}

double NNfunction_sg_uL::synapse0x2cb0b60() {
   return (neuron0x2ca5db0()*0.187888);
}

double NNfunction_sg_uL::synapse0x2cb0ba0() {
   return (neuron0x2ca60f0()*0.0267801);
}

double NNfunction_sg_uL::synapse0x2cb0be0() {
   return (neuron0x2ca6430()*0.318318);
}

double NNfunction_sg_uL::synapse0x2cb0c20() {
   return (neuron0x2ca6770()*-0.0397975);
}

double NNfunction_sg_uL::synapse0x2cb0c60() {
   return (neuron0x2ca6ab0()*0.0280161);
}

double NNfunction_sg_uL::synapse0x2cb0ca0() {
   return (neuron0x2ca6df0()*-0.331515);
}

double NNfunction_sg_uL::synapse0x2cb0ce0() {
   return (neuron0x2ca7130()*-0.0516021);
}

double NNfunction_sg_uL::synapse0x2cb0d20() {
   return (neuron0x2ca7470()*0.0873372);
}

double NNfunction_sg_uL::synapse0x2cb0d60() {
   return (neuron0x2ca77b0()*0.114815);
}

double NNfunction_sg_uL::synapse0x2cb0da0() {
   return (neuron0x2ca7af0()*-0.265687);
}

double NNfunction_sg_uL::synapse0x2cb0de0() {
   return (neuron0x2ca7e30()*0.376377);
}

double NNfunction_sg_uL::synapse0x2cb0870() {
   return (neuron0x2ca8170()*-0.336835);
}

double NNfunction_sg_uL::synapse0x2cb08b0() {
   return (neuron0x2ca86d0()*0.0678901);
}

double NNfunction_sg_uL::synapse0x2cb0f30() {
   return (neuron0x2ca88f0()*-0.208802);
}

double NNfunction_sg_uL::synapse0x2cb0f70() {
   return (neuron0x2ca8c30()*0.370387);
}

double NNfunction_sg_uL::synapse0x2cb0fb0() {
   return (neuron0x2ca8f70()*0.216419);
}

double NNfunction_sg_uL::synapse0x2cb0ff0() {
   return (neuron0x2ca92b0()*-0.0937541);
}

double NNfunction_sg_uL::synapse0x2cb1030() {
   return (neuron0x2ca95f0()*-0.148036);
}

double NNfunction_sg_uL::synapse0x2cb1070() {
   return (neuron0x2ca9930()*-0.0244255);
}

double NNfunction_sg_uL::synapse0x2cb13f0() {
   return (neuron0x2ca4e00()*-0.0332924);
}

double NNfunction_sg_uL::synapse0x2cb1430() {
   return (neuron0x2ca50b0()*0.100753);
}

double NNfunction_sg_uL::synapse0x2cb1470() {
   return (neuron0x2ca53f0()*0.131524);
}

double NNfunction_sg_uL::synapse0x2cb14b0() {
   return (neuron0x2ca5730()*-0.617274);
}

double NNfunction_sg_uL::synapse0x2cb14f0() {
   return (neuron0x2ca5a70()*0.0460898);
}

double NNfunction_sg_uL::synapse0x2cb1530() {
   return (neuron0x2ca5db0()*0.256526);
}

double NNfunction_sg_uL::synapse0x2cb1570() {
   return (neuron0x2ca60f0()*0.337166);
}

double NNfunction_sg_uL::synapse0x2cb15b0() {
   return (neuron0x2ca6430()*0.255501);
}

double NNfunction_sg_uL::synapse0x2cb15f0() {
   return (neuron0x2ca6770()*0.470113);
}

double NNfunction_sg_uL::synapse0x2cb1630() {
   return (neuron0x2ca6ab0()*0.267587);
}

double NNfunction_sg_uL::synapse0x2cb1670() {
   return (neuron0x2ca6df0()*0.126887);
}

double NNfunction_sg_uL::synapse0x2cb16b0() {
   return (neuron0x2ca7130()*0.537596);
}

double NNfunction_sg_uL::synapse0x2cb16f0() {
   return (neuron0x2ca7470()*0.231001);
}

double NNfunction_sg_uL::synapse0x2cb1730() {
   return (neuron0x2ca77b0()*-0.222635);
}

double NNfunction_sg_uL::synapse0x2cb1770() {
   return (neuron0x2ca7af0()*-0.0591807);
}

double NNfunction_sg_uL::synapse0x2cb17b0() {
   return (neuron0x2ca7e30()*0.299157);
}

double NNfunction_sg_uL::synapse0x2cb1240() {
   return (neuron0x2ca8170()*-0.0457038);
}

double NNfunction_sg_uL::synapse0x2cb1280() {
   return (neuron0x2ca86d0()*0.265483);
}

double NNfunction_sg_uL::synapse0x2cae010() {
   return (neuron0x2ca88f0()*0.118718);
}

double NNfunction_sg_uL::synapse0x2cae050() {
   return (neuron0x2ca8c30()*-0.0145186);
}

double NNfunction_sg_uL::synapse0x2cae090() {
   return (neuron0x2ca8f70()*0.0941594);
}

double NNfunction_sg_uL::synapse0x2cae0d0() {
   return (neuron0x2ca92b0()*-0.0125896);
}

double NNfunction_sg_uL::synapse0x2cae110() {
   return (neuron0x2ca95f0()*-0.0447971);
}

double NNfunction_sg_uL::synapse0x2cae150() {
   return (neuron0x2ca9930()*0.045964);
}

double NNfunction_sg_uL::synapse0x2cae4d0() {
   return (neuron0x2ca4e00()*-0.0139501);
}

double NNfunction_sg_uL::synapse0x2cae510() {
   return (neuron0x2ca50b0()*0.0211336);
}

double NNfunction_sg_uL::synapse0x2cae550() {
   return (neuron0x2ca53f0()*0.290351);
}

double NNfunction_sg_uL::synapse0x2cae590() {
   return (neuron0x2ca5730()*0.00742616);
}

double NNfunction_sg_uL::synapse0x2cae5d0() {
   return (neuron0x2ca5a70()*-0.144083);
}

double NNfunction_sg_uL::synapse0x2cae610() {
   return (neuron0x2ca5db0()*0.0161618);
}

double NNfunction_sg_uL::synapse0x2cae650() {
   return (neuron0x2ca60f0()*0.155387);
}

double NNfunction_sg_uL::synapse0x2cae690() {
   return (neuron0x2ca6430()*-0.127418);
}

double NNfunction_sg_uL::synapse0x2cae6d0() {
   return (neuron0x2ca6770()*0.0668304);
}

double NNfunction_sg_uL::synapse0x2cae710() {
   return (neuron0x2ca6ab0()*0.129813);
}

double NNfunction_sg_uL::synapse0x2cae750() {
   return (neuron0x2ca6df0()*-0.454671);
}

double NNfunction_sg_uL::synapse0x2cae790() {
   return (neuron0x2ca7130()*-0.282179);
}

double NNfunction_sg_uL::synapse0x2cae7d0() {
   return (neuron0x2ca7470()*0.491667);
}

double NNfunction_sg_uL::synapse0x2cb2910() {
   return (neuron0x2ca77b0()*0.405633);
}

double NNfunction_sg_uL::synapse0x2cb2950() {
   return (neuron0x2ca7af0()*0.169207);
}

double NNfunction_sg_uL::synapse0x2cb2990() {
   return (neuron0x2ca7e30()*0.266829);
}

double NNfunction_sg_uL::synapse0x2cae320() {
   return (neuron0x2ca8170()*0.049228);
}

double NNfunction_sg_uL::synapse0x2cae360() {
   return (neuron0x2ca86d0()*0.11594);
}

double NNfunction_sg_uL::synapse0x2cb2ae0() {
   return (neuron0x2ca88f0()*0.191689);
}

double NNfunction_sg_uL::synapse0x2cb2b20() {
   return (neuron0x2ca8c30()*-0.124143);
}

double NNfunction_sg_uL::synapse0x2cb2b60() {
   return (neuron0x2ca8f70()*-0.155461);
}

double NNfunction_sg_uL::synapse0x2cb2ba0() {
   return (neuron0x2ca92b0()*-0.0154262);
}

double NNfunction_sg_uL::synapse0x2cb2be0() {
   return (neuron0x2ca95f0()*0.43465);
}

double NNfunction_sg_uL::synapse0x2cb2c20() {
   return (neuron0x2ca9930()*0.167365);
}

double NNfunction_sg_uL::synapse0x2cb2fa0() {
   return (neuron0x2ca4e00()*0.379978);
}

double NNfunction_sg_uL::synapse0x2cb2fe0() {
   return (neuron0x2ca50b0()*0.157789);
}

double NNfunction_sg_uL::synapse0x2cb3020() {
   return (neuron0x2ca53f0()*-0.406291);
}

double NNfunction_sg_uL::synapse0x2cb3060() {
   return (neuron0x2ca5730()*1.81004);
}

double NNfunction_sg_uL::synapse0x2cb30a0() {
   return (neuron0x2ca5a70()*0.214642);
}

double NNfunction_sg_uL::synapse0x2cb30e0() {
   return (neuron0x2ca5db0()*0.244376);
}

double NNfunction_sg_uL::synapse0x2cb3120() {
   return (neuron0x2ca60f0()*-0.187247);
}

double NNfunction_sg_uL::synapse0x2cb3160() {
   return (neuron0x2ca6430()*0.00997519);
}

double NNfunction_sg_uL::synapse0x2cb31a0() {
   return (neuron0x2ca6770()*-0.172286);
}

double NNfunction_sg_uL::synapse0x2cb31e0() {
   return (neuron0x2ca6ab0()*0.027366);
}

double NNfunction_sg_uL::synapse0x2cb3220() {
   return (neuron0x2ca6df0()*-0.0173472);
}

double NNfunction_sg_uL::synapse0x2cb3260() {
   return (neuron0x2ca7130()*1.47782);
}

double NNfunction_sg_uL::synapse0x2cb32a0() {
   return (neuron0x2ca7470()*0.711673);
}

double NNfunction_sg_uL::synapse0x2cb32e0() {
   return (neuron0x2ca77b0()*-0.230573);
}

double NNfunction_sg_uL::synapse0x2cb3320() {
   return (neuron0x2ca7af0()*0.30239);
}

double NNfunction_sg_uL::synapse0x2cb3360() {
   return (neuron0x2ca7e30()*0.500753);
}

double NNfunction_sg_uL::synapse0x2cb2df0() {
   return (neuron0x2ca8170()*0.495137);
}

double NNfunction_sg_uL::synapse0x2cb2e30() {
   return (neuron0x2ca86d0()*0.231138);
}

double NNfunction_sg_uL::synapse0x2cb34b0() {
   return (neuron0x2ca88f0()*0.537265);
}

double NNfunction_sg_uL::synapse0x2cb34f0() {
   return (neuron0x2ca8c30()*-0.108252);
}

double NNfunction_sg_uL::synapse0x2cb3530() {
   return (neuron0x2ca8f70()*-0.320942);
}

double NNfunction_sg_uL::synapse0x2cb3570() {
   return (neuron0x2ca92b0()*-0.361548);
}

double NNfunction_sg_uL::synapse0x2cb35b0() {
   return (neuron0x2ca95f0()*-0.245749);
}

double NNfunction_sg_uL::synapse0x2cb35f0() {
   return (neuron0x2ca9930()*0.183837);
}

double NNfunction_sg_uL::synapse0x2cb3970() {
   return (neuron0x2ca4e00()*-0.00729862);
}

double NNfunction_sg_uL::synapse0x2cb39b0() {
   return (neuron0x2ca50b0()*-0.00478728);
}

double NNfunction_sg_uL::synapse0x2cb39f0() {
   return (neuron0x2ca53f0()*-0.056103);
}

double NNfunction_sg_uL::synapse0x2cb3a30() {
   return (neuron0x2ca5730()*0.874694);
}

double NNfunction_sg_uL::synapse0x2cb3a70() {
   return (neuron0x2ca5a70()*-0.00834653);
}

double NNfunction_sg_uL::synapse0x2cb3ab0() {
   return (neuron0x2ca5db0()*0.00256609);
}

double NNfunction_sg_uL::synapse0x2cb3af0() {
   return (neuron0x2ca60f0()*-0.0201015);
}

double NNfunction_sg_uL::synapse0x2cb3b30() {
   return (neuron0x2ca6430()*-0.000317159);
}

double NNfunction_sg_uL::synapse0x2cb3b70() {
   return (neuron0x2ca6770()*-0.034133);
}

double NNfunction_sg_uL::synapse0x2cb3bb0() {
   return (neuron0x2ca6ab0()*-0.00279489);
}

double NNfunction_sg_uL::synapse0x2cb3bf0() {
   return (neuron0x2ca6df0()*-0.00290257);
}

double NNfunction_sg_uL::synapse0x2cb3c30() {
   return (neuron0x2ca7130()*-0.0824121);
}

double NNfunction_sg_uL::synapse0x2cb3c70() {
   return (neuron0x2ca7470()*-0.0193682);
}

double NNfunction_sg_uL::synapse0x2cb3cb0() {
   return (neuron0x2ca77b0()*-0.0238149);
}

double NNfunction_sg_uL::synapse0x2cb3cf0() {
   return (neuron0x2ca7af0()*-0.00429141);
}

double NNfunction_sg_uL::synapse0x2cb3d30() {
   return (neuron0x2ca7e30()*-0.014995);
}

double NNfunction_sg_uL::synapse0x2cb37c0() {
   return (neuron0x2ca8170()*-0.00962519);
}

double NNfunction_sg_uL::synapse0x2cb3800() {
   return (neuron0x2ca86d0()*-0.0176002);
}

double NNfunction_sg_uL::synapse0x2cb3e80() {
   return (neuron0x2ca88f0()*-0.0131106);
}

double NNfunction_sg_uL::synapse0x2cb3ec0() {
   return (neuron0x2ca8c30()*-0.0159254);
}

double NNfunction_sg_uL::synapse0x2cb3f00() {
   return (neuron0x2ca8f70()*0.0121631);
}

double NNfunction_sg_uL::synapse0x2cb3f40() {
   return (neuron0x2ca92b0()*0.00622884);
}

double NNfunction_sg_uL::synapse0x2cb3f80() {
   return (neuron0x2ca95f0()*-0.018001);
}

double NNfunction_sg_uL::synapse0x2cb3fc0() {
   return (neuron0x2ca9930()*-0.0113551);
}

double NNfunction_sg_uL::synapse0x2cb4340() {
   return (neuron0x2ca4e00()*0.00069124);
}

double NNfunction_sg_uL::synapse0x2cb4380() {
   return (neuron0x2ca50b0()*-0.0733517);
}

double NNfunction_sg_uL::synapse0x2cb43c0() {
   return (neuron0x2ca53f0()*-0.167529);
}

double NNfunction_sg_uL::synapse0x2cb4400() {
   return (neuron0x2ca5730()*0.750745);
}

double NNfunction_sg_uL::synapse0x2cb4440() {
   return (neuron0x2ca5a70()*0.0186511);
}

double NNfunction_sg_uL::synapse0x2cb4480() {
   return (neuron0x2ca5db0()*-0.0103432);
}

double NNfunction_sg_uL::synapse0x2cb44c0() {
   return (neuron0x2ca60f0()*-0.161608);
}

double NNfunction_sg_uL::synapse0x2cb4500() {
   return (neuron0x2ca6430()*-0.084035);
}

double NNfunction_sg_uL::synapse0x2cb4540() {
   return (neuron0x2ca6770()*-0.0598007);
}

double NNfunction_sg_uL::synapse0x2cb4580() {
   return (neuron0x2ca6ab0()*-0.0338318);
}

double NNfunction_sg_uL::synapse0x2cb45c0() {
   return (neuron0x2ca6df0()*-0.0109199);
}

double NNfunction_sg_uL::synapse0x2cb4600() {
   return (neuron0x2ca7130()*0.229045);
}

double NNfunction_sg_uL::synapse0x2cb4640() {
   return (neuron0x2ca7470()*-0.50034);
}

double NNfunction_sg_uL::synapse0x2cb4680() {
   return (neuron0x2ca77b0()*0.0997204);
}

double NNfunction_sg_uL::synapse0x2cb46c0() {
   return (neuron0x2ca7af0()*0.156783);
}

double NNfunction_sg_uL::synapse0x2cb4700() {
   return (neuron0x2ca7e30()*-0.526694);
}

double NNfunction_sg_uL::synapse0x2cb4190() {
   return (neuron0x2ca8170()*0.0866941);
}

double NNfunction_sg_uL::synapse0x2cb41d0() {
   return (neuron0x2ca86d0()*-0.160656);
}

double NNfunction_sg_uL::synapse0x2cb4850() {
   return (neuron0x2ca88f0()*-0.260718);
}

double NNfunction_sg_uL::synapse0x2cb4890() {
   return (neuron0x2ca8c30()*-0.123006);
}

double NNfunction_sg_uL::synapse0x2cb48d0() {
   return (neuron0x2ca8f70()*-0.0134085);
}

double NNfunction_sg_uL::synapse0x2cb4910() {
   return (neuron0x2ca92b0()*0.0449902);
}

double NNfunction_sg_uL::synapse0x2cb4950() {
   return (neuron0x2ca95f0()*-0.025126);
}

double NNfunction_sg_uL::synapse0x2cb4990() {
   return (neuron0x2ca9930()*-0.101551);
}

double NNfunction_sg_uL::synapse0x2cb4d10() {
   return (neuron0x2ca4e00()*0.00984121);
}

double NNfunction_sg_uL::synapse0x2ca4f90() {
   return (neuron0x2ca50b0()*-0.00177521);
}

double NNfunction_sg_uL::synapse0x2ca4fd0() {
   return (neuron0x2ca53f0()*-0.20923);
}

double NNfunction_sg_uL::synapse0x2ca52d0() {
   return (neuron0x2ca5730()*0.376516);
}

double NNfunction_sg_uL::synapse0x2ca5310() {
   return (neuron0x2ca5a70()*-0.0669714);
}

double NNfunction_sg_uL::synapse0x2ca5610() {
   return (neuron0x2ca5db0()*0.0282683);
}

double NNfunction_sg_uL::synapse0x2ca5650() {
   return (neuron0x2ca60f0()*-0.0203791);
}

double NNfunction_sg_uL::synapse0x2ca5950() {
   return (neuron0x2ca6430()*0.138187);
}

double NNfunction_sg_uL::synapse0x2ca5990() {
   return (neuron0x2ca6770()*-0.00912914);
}

double NNfunction_sg_uL::synapse0x2ca5c90() {
   return (neuron0x2ca6ab0()*-0.0955717);
}

double NNfunction_sg_uL::synapse0x2ca5cd0() {
   return (neuron0x2ca6df0()*0.00312988);
}

double NNfunction_sg_uL::synapse0x2ca5fd0() {
   return (neuron0x2ca7130()*1.58175);
}

double NNfunction_sg_uL::synapse0x2ca6010() {
   return (neuron0x2ca7470()*-0.394086);
}

double NNfunction_sg_uL::synapse0x2ca6310() {
   return (neuron0x2ca77b0()*0.103325);
}

double NNfunction_sg_uL::synapse0x2ca6350() {
   return (neuron0x2ca7af0()*-0.23854);
}

double NNfunction_sg_uL::synapse0x2ca6650() {
   return (neuron0x2ca7e30()*0.224334);
}

double NNfunction_sg_uL::synapse0x2ca6690() {
   return (neuron0x2ca8170()*0.1044);
}

double NNfunction_sg_uL::synapse0x2ca6990() {
   return (neuron0x2ca86d0()*-0.125418);
}

double NNfunction_sg_uL::synapse0x2ca69d0() {
   return (neuron0x2ca88f0()*-0.0577215);
}

double NNfunction_sg_uL::synapse0x2ca6cd0() {
   return (neuron0x2ca8c30()*-0.0242926);
}

double NNfunction_sg_uL::synapse0x2ca6d10() {
   return (neuron0x2ca8f70()*0.00867733);
}

double NNfunction_sg_uL::synapse0x2ca7010() {
   return (neuron0x2ca92b0()*0.00820062);
}

double NNfunction_sg_uL::synapse0x2ca7050() {
   return (neuron0x2ca95f0()*-0.0751144);
}

double NNfunction_sg_uL::synapse0x2ca7350() {
   return (neuron0x2ca9930()*-0.0339629);
}

double NNfunction_sg_uL::synapse0x2ca7390() {
   return (neuron0x2ca4e00()*0.00178435);
}

double NNfunction_sg_uL::synapse0x2ca8050() {
   return (neuron0x2ca50b0()*-0.00120846);
}

double NNfunction_sg_uL::synapse0x2ca8090() {
   return (neuron0x2ca53f0()*0.0188682);
}

double NNfunction_sg_uL::synapse0x2cb4b60() {
   return (neuron0x2ca5730()*1.60399);
}

double NNfunction_sg_uL::synapse0x2cb4ba0() {
   return (neuron0x2ca5a70()*0.00619526);
}

double NNfunction_sg_uL::synapse0x2ca8390() {
   return (neuron0x2ca5db0()*0.00479938);
}

double NNfunction_sg_uL::synapse0x2ca83d0() {
   return (neuron0x2ca60f0()*0.00148699);
}

double NNfunction_sg_uL::synapse0x181db40() {
   return (neuron0x2ca6430()*0.00143208);
}

double NNfunction_sg_uL::synapse0x181db80() {
   return (neuron0x2ca6770()*0.0113713);
}

double NNfunction_sg_uL::synapse0x2ca8b10() {
   return (neuron0x2ca6ab0()*-0.00281294);
}

double NNfunction_sg_uL::synapse0x2ca8b50() {
   return (neuron0x2ca6df0()*0.00184158);
}

double NNfunction_sg_uL::synapse0x2ca8e50() {
   return (neuron0x2ca7130()*0.218864);
}

double NNfunction_sg_uL::synapse0x2ca8e90() {
   return (neuron0x2ca7470()*0.0107921);
}

double NNfunction_sg_uL::synapse0x2ca9190() {
   return (neuron0x2ca77b0()*0.010076);
}

double NNfunction_sg_uL::synapse0x2ca91d0() {
   return (neuron0x2ca7af0()*0.00154114);
}

double NNfunction_sg_uL::synapse0x2ca94d0() {
   return (neuron0x2ca7e30()*0.0108867);
}

double NNfunction_sg_uL::synapse0x2ca9510() {
   return (neuron0x2ca8170()*0.00306557);
}

double NNfunction_sg_uL::synapse0x2ca9810() {
   return (neuron0x2ca86d0()*0.0100718);
}

double NNfunction_sg_uL::synapse0x2ca9850() {
   return (neuron0x2ca88f0()*0.00121752);
}

double NNfunction_sg_uL::synapse0x2ca9b50() {
   return (neuron0x2ca8c30()*0.00478127);
}

double NNfunction_sg_uL::synapse0x2ca9b90() {
   return (neuron0x2ca8f70()*-0.00339959);
}

double NNfunction_sg_uL::synapse0x2ca7690() {
   return (neuron0x2ca92b0()*-0.00234563);
}

double NNfunction_sg_uL::synapse0x2ca76d0() {
   return (neuron0x2ca95f0()*0.00574192);
}

double NNfunction_sg_uL::synapse0x2cb6a80() {
   return (neuron0x2ca9930()*-0.00107482);
}

double NNfunction_sg_uL::synapse0x2cb6e00() {
   return (neuron0x2ca4e00()*0.00224816);
}

double NNfunction_sg_uL::synapse0x2cb6e40() {
   return (neuron0x2ca50b0()*0.000213328);
}

double NNfunction_sg_uL::synapse0x2cb6e80() {
   return (neuron0x2ca53f0()*-0.000400745);
}

double NNfunction_sg_uL::synapse0x2cb6ec0() {
   return (neuron0x2ca5730()*4.2637);
}

double NNfunction_sg_uL::synapse0x2cb6f00() {
   return (neuron0x2ca5a70()*0.000460919);
}

double NNfunction_sg_uL::synapse0x2cb6f40() {
   return (neuron0x2ca5db0()*-0.0022666);
}

double NNfunction_sg_uL::synapse0x2cb6f80() {
   return (neuron0x2ca60f0()*-0.00411617);
}

double NNfunction_sg_uL::synapse0x2cb6fc0() {
   return (neuron0x2ca6430()*-0.000392743);
}

double NNfunction_sg_uL::synapse0x2cb7000() {
   return (neuron0x2ca6770()*0.000507194);
}

double NNfunction_sg_uL::synapse0x2cb7040() {
   return (neuron0x2ca6ab0()*-0.000852585);
}

double NNfunction_sg_uL::synapse0x2cb7080() {
   return (neuron0x2ca6df0()*-0.00450546);
}

double NNfunction_sg_uL::synapse0x2cb70c0() {
   return (neuron0x2ca7130()*0.0625152);
}

double NNfunction_sg_uL::synapse0x2cb7100() {
   return (neuron0x2ca7470()*0.00669808);
}

double NNfunction_sg_uL::synapse0x2cb7140() {
   return (neuron0x2ca77b0()*-0.00875833);
}

double NNfunction_sg_uL::synapse0x2cb7180() {
   return (neuron0x2ca7af0()*0.00381516);
}

double NNfunction_sg_uL::synapse0x2cb71c0() {
   return (neuron0x2ca7e30()*-0.0057276);
}

double NNfunction_sg_uL::synapse0x2cb6c50() {
   return (neuron0x2ca8170()*-0.00818743);
}

double NNfunction_sg_uL::synapse0x2cb6c90() {
   return (neuron0x2ca86d0()*0.00883335);
}

double NNfunction_sg_uL::synapse0x2cb7310() {
   return (neuron0x2ca88f0()*0.0022234);
}

double NNfunction_sg_uL::synapse0x2cb7350() {
   return (neuron0x2ca8c30()*-0.00822237);
}

double NNfunction_sg_uL::synapse0x2cb7390() {
   return (neuron0x2ca8f70()*-0.00288863);
}

double NNfunction_sg_uL::synapse0x2cb73d0() {
   return (neuron0x2ca92b0()*-0.00231687);
}

double NNfunction_sg_uL::synapse0x2cb7410() {
   return (neuron0x2ca95f0()*-0.00207829);
}

double NNfunction_sg_uL::synapse0x2cb7450() {
   return (neuron0x2ca9930()*-0.000199735);
}

double NNfunction_sg_uL::synapse0x2cb77d0() {
   return (neuron0x2ca4e00()*0.0359892);
}

double NNfunction_sg_uL::synapse0x2cb7810() {
   return (neuron0x2ca50b0()*0.0295233);
}

double NNfunction_sg_uL::synapse0x2cb7850() {
   return (neuron0x2ca53f0()*0.0673673);
}

double NNfunction_sg_uL::synapse0x2cb7890() {
   return (neuron0x2ca5730()*-0.644891);
}

double NNfunction_sg_uL::synapse0x2cb78d0() {
   return (neuron0x2ca5a70()*0.0250243);
}

double NNfunction_sg_uL::synapse0x2cb7910() {
   return (neuron0x2ca5db0()*-0.0189316);
}

double NNfunction_sg_uL::synapse0x2cb7950() {
   return (neuron0x2ca60f0()*-0.0222775);
}

double NNfunction_sg_uL::synapse0x2cb7990() {
   return (neuron0x2ca6430()*-0.0578123);
}

double NNfunction_sg_uL::synapse0x2cb79d0() {
   return (neuron0x2ca6770()*-0.0669414);
}

double NNfunction_sg_uL::synapse0x2cb7a10() {
   return (neuron0x2ca6ab0()*-0.163426);
}

double NNfunction_sg_uL::synapse0x2cb7a50() {
   return (neuron0x2ca6df0()*0.105225);
}

double NNfunction_sg_uL::synapse0x2cb7a90() {
   return (neuron0x2ca7130()*-1.57897);
}

double NNfunction_sg_uL::synapse0x2cb7ad0() {
   return (neuron0x2ca7470()*0.242019);
}

double NNfunction_sg_uL::synapse0x2cb7b10() {
   return (neuron0x2ca77b0()*0.132958);
}

double NNfunction_sg_uL::synapse0x2cb7b50() {
   return (neuron0x2ca7af0()*0.0608453);
}

double NNfunction_sg_uL::synapse0x2cb7b90() {
   return (neuron0x2ca7e30()*-0.0340102);
}

double NNfunction_sg_uL::synapse0x2cb7620() {
   return (neuron0x2ca8170()*-0.0404418);
}

double NNfunction_sg_uL::synapse0x2cb7660() {
   return (neuron0x2ca86d0()*0.140631);
}

double NNfunction_sg_uL::synapse0x2cb7ce0() {
   return (neuron0x2ca88f0()*0.0820051);
}

double NNfunction_sg_uL::synapse0x2cb7d20() {
   return (neuron0x2ca8c30()*0.0856078);
}

double NNfunction_sg_uL::synapse0x2cb7d60() {
   return (neuron0x2ca8f70()*-0.0449914);
}

double NNfunction_sg_uL::synapse0x2cb7da0() {
   return (neuron0x2ca92b0()*-0.0690622);
}

double NNfunction_sg_uL::synapse0x2cb7de0() {
   return (neuron0x2ca95f0()*0.102932);
}

double NNfunction_sg_uL::synapse0x2cb7e20() {
   return (neuron0x2ca9930()*-0.00456549);
}

double NNfunction_sg_uL::synapse0x2cb81a0() {
   return (neuron0x2ca4e00()*0.170565);
}

double NNfunction_sg_uL::synapse0x2cb81e0() {
   return (neuron0x2ca50b0()*-0.0919591);
}

double NNfunction_sg_uL::synapse0x2cb8220() {
   return (neuron0x2ca53f0()*-0.0513828);
}

double NNfunction_sg_uL::synapse0x2cb8260() {
   return (neuron0x2ca5730()*0.902094);
}

double NNfunction_sg_uL::synapse0x2cb82a0() {
   return (neuron0x2ca5a70()*-0.298065);
}

double NNfunction_sg_uL::synapse0x2cb82e0() {
   return (neuron0x2ca5db0()*-0.212947);
}

double NNfunction_sg_uL::synapse0x2cb8320() {
   return (neuron0x2ca60f0()*0.224546);
}

double NNfunction_sg_uL::synapse0x2cb8360() {
   return (neuron0x2ca6430()*-0.20383);
}

double NNfunction_sg_uL::synapse0x2cb83a0() {
   return (neuron0x2ca6770()*-0.0415134);
}

double NNfunction_sg_uL::synapse0x2cb83e0() {
   return (neuron0x2ca6ab0()*-0.0209275);
}

double NNfunction_sg_uL::synapse0x2cb8420() {
   return (neuron0x2ca6df0()*0.0194758);
}

double NNfunction_sg_uL::synapse0x2cb8460() {
   return (neuron0x2ca7130()*0.908065);
}

double NNfunction_sg_uL::synapse0x2cb84a0() {
   return (neuron0x2ca7470()*0.039798);
}

double NNfunction_sg_uL::synapse0x2cb84e0() {
   return (neuron0x2ca77b0()*0.22543);
}

double NNfunction_sg_uL::synapse0x2cb8520() {
   return (neuron0x2ca7af0()*0.139461);
}

double NNfunction_sg_uL::synapse0x2cb8560() {
   return (neuron0x2ca7e30()*-0.450774);
}

double NNfunction_sg_uL::synapse0x2cb7ff0() {
   return (neuron0x2ca8170()*-0.158465);
}

double NNfunction_sg_uL::synapse0x2cb8030() {
   return (neuron0x2ca86d0()*0.187397);
}

double NNfunction_sg_uL::synapse0x2cb86b0() {
   return (neuron0x2ca88f0()*0.0947542);
}

double NNfunction_sg_uL::synapse0x2cb86f0() {
   return (neuron0x2ca8c30()*-0.165747);
}

double NNfunction_sg_uL::synapse0x2cb8730() {
   return (neuron0x2ca8f70()*-0.000958035);
}

double NNfunction_sg_uL::synapse0x2cb8770() {
   return (neuron0x2ca92b0()*-0.0441361);
}

double NNfunction_sg_uL::synapse0x2cb87b0() {
   return (neuron0x2ca95f0()*0.0621087);
}

double NNfunction_sg_uL::synapse0x2cb87f0() {
   return (neuron0x2ca9930()*-0.00407051);
}

double NNfunction_sg_uL::synapse0x2cb8b70() {
   return (neuron0x2ca4e00()*-0.071881);
}

double NNfunction_sg_uL::synapse0x2cb8bb0() {
   return (neuron0x2ca50b0()*0.147908);
}

double NNfunction_sg_uL::synapse0x2cb8bf0() {
   return (neuron0x2ca53f0()*0.16545);
}

double NNfunction_sg_uL::synapse0x2cb8c30() {
   return (neuron0x2ca5730()*0.286755);
}

double NNfunction_sg_uL::synapse0x2cb8c70() {
   return (neuron0x2ca5a70()*-0.243196);
}

double NNfunction_sg_uL::synapse0x2cb8cb0() {
   return (neuron0x2ca5db0()*-0.0988728);
}

double NNfunction_sg_uL::synapse0x2cb8cf0() {
   return (neuron0x2ca60f0()*-0.093164);
}

double NNfunction_sg_uL::synapse0x2cb8d30() {
   return (neuron0x2ca6430()*-0.250415);
}

double NNfunction_sg_uL::synapse0x2cb8d70() {
   return (neuron0x2ca6770()*-0.0573082);
}

double NNfunction_sg_uL::synapse0x2cb8db0() {
   return (neuron0x2ca6ab0()*-0.149988);
}

double NNfunction_sg_uL::synapse0x2cb8df0() {
   return (neuron0x2ca6df0()*-0.0687581);
}

double NNfunction_sg_uL::synapse0x2cb8e30() {
   return (neuron0x2ca7130()*1.05403);
}

double NNfunction_sg_uL::synapse0x2cb8e70() {
   return (neuron0x2ca7470()*0.0272781);
}

double NNfunction_sg_uL::synapse0x2cb8eb0() {
   return (neuron0x2ca77b0()*0.0300856);
}

double NNfunction_sg_uL::synapse0x2cb8ef0() {
   return (neuron0x2ca7af0()*0.402111);
}

double NNfunction_sg_uL::synapse0x2cb8f30() {
   return (neuron0x2ca7e30()*0.55916);
}

double NNfunction_sg_uL::synapse0x2cb89c0() {
   return (neuron0x2ca8170()*0.348231);
}

double NNfunction_sg_uL::synapse0x2cb8a00() {
   return (neuron0x2ca86d0()*-0.204301);
}

double NNfunction_sg_uL::synapse0x2cb9080() {
   return (neuron0x2ca88f0()*0.014464);
}

double NNfunction_sg_uL::synapse0x2cb90c0() {
   return (neuron0x2ca8c30()*-0.342711);
}

double NNfunction_sg_uL::synapse0x2cb9100() {
   return (neuron0x2ca8f70()*0.0410213);
}

double NNfunction_sg_uL::synapse0x2cb9140() {
   return (neuron0x2ca92b0()*-0.0582111);
}

double NNfunction_sg_uL::synapse0x2cb9180() {
   return (neuron0x2ca95f0()*0.0577788);
}

double NNfunction_sg_uL::synapse0x2cb91c0() {
   return (neuron0x2ca9930()*0.0680527);
}

double NNfunction_sg_uL::synapse0x2cb9540() {
   return (neuron0x2ca4e00()*0.0200036);
}

double NNfunction_sg_uL::synapse0x2cb9580() {
   return (neuron0x2ca50b0()*-0.0734948);
}

double NNfunction_sg_uL::synapse0x2cb95c0() {
   return (neuron0x2ca53f0()*0.088937);
}

double NNfunction_sg_uL::synapse0x2cb9600() {
   return (neuron0x2ca5730()*-0.126454);
}

double NNfunction_sg_uL::synapse0x2cb9640() {
   return (neuron0x2ca5a70()*0.0812274);
}

double NNfunction_sg_uL::synapse0x2cb9680() {
   return (neuron0x2ca5db0()*0.0226686);
}

double NNfunction_sg_uL::synapse0x2cb96c0() {
   return (neuron0x2ca60f0()*-0.00825762);
}

double NNfunction_sg_uL::synapse0x2cb9700() {
   return (neuron0x2ca6430()*0.0207213);
}

double NNfunction_sg_uL::synapse0x2cb9740() {
   return (neuron0x2ca6770()*0.251219);
}

double NNfunction_sg_uL::synapse0x2cb1900() {
   return (neuron0x2ca6ab0()*-0.162406);
}

double NNfunction_sg_uL::synapse0x2cb1940() {
   return (neuron0x2ca6df0()*-0.0649652);
}

double NNfunction_sg_uL::synapse0x2cb1980() {
   return (neuron0x2ca7130()*-1.25872);
}

double NNfunction_sg_uL::synapse0x2cb19c0() {
   return (neuron0x2ca7470()*-0.0510894);
}

double NNfunction_sg_uL::synapse0x2cb1a00() {
   return (neuron0x2ca77b0()*-0.215422);
}

double NNfunction_sg_uL::synapse0x2cb1a40() {
   return (neuron0x2ca7af0()*0.0218683);
}

double NNfunction_sg_uL::synapse0x2cb1a80() {
   return (neuron0x2ca7e30()*0.00767281);
}

double NNfunction_sg_uL::synapse0x2cb9390() {
   return (neuron0x2ca8170()*-0.027056);
}

double NNfunction_sg_uL::synapse0x2cb93d0() {
   return (neuron0x2ca86d0()*0.00448056);
}

double NNfunction_sg_uL::synapse0x2cb1bd0() {
   return (neuron0x2ca88f0()*-0.0883464);
}

double NNfunction_sg_uL::synapse0x2cb1c10() {
   return (neuron0x2ca8c30()*-0.0986099);
}

double NNfunction_sg_uL::synapse0x2cb1c50() {
   return (neuron0x2ca8f70()*0.132992);
}

double NNfunction_sg_uL::synapse0x2cb1c90() {
   return (neuron0x2ca92b0()*0.0102114);
}

double NNfunction_sg_uL::synapse0x2cb1cd0() {
   return (neuron0x2ca95f0()*-0.0255073);
}

double NNfunction_sg_uL::synapse0x2cb1d10() {
   return (neuron0x2ca9930()*-0.038023);
}

double NNfunction_sg_uL::synapse0x2cb2090() {
   return (neuron0x2ca4e00()*0.00141781);
}

double NNfunction_sg_uL::synapse0x2cb20d0() {
   return (neuron0x2ca50b0()*0.0168453);
}

double NNfunction_sg_uL::synapse0x2cb2110() {
   return (neuron0x2ca53f0()*-0.091607);
}

double NNfunction_sg_uL::synapse0x2cb2150() {
   return (neuron0x2ca5730()*-1.29577);
}

double NNfunction_sg_uL::synapse0x2cb2190() {
   return (neuron0x2ca5a70()*-0.109982);
}

double NNfunction_sg_uL::synapse0x2cb21d0() {
   return (neuron0x2ca5db0()*-0.379277);
}

double NNfunction_sg_uL::synapse0x2cb2210() {
   return (neuron0x2ca60f0()*-0.0877466);
}

double NNfunction_sg_uL::synapse0x2cb2250() {
   return (neuron0x2ca6430()*0.0153638);
}

double NNfunction_sg_uL::synapse0x2cb2290() {
   return (neuron0x2ca6770()*-0.0188763);
}

double NNfunction_sg_uL::synapse0x2cb22d0() {
   return (neuron0x2ca6ab0()*-0.137675);
}

double NNfunction_sg_uL::synapse0x2cb2310() {
   return (neuron0x2ca6df0()*0.0644273);
}

double NNfunction_sg_uL::synapse0x2cb2350() {
   return (neuron0x2ca7130()*-0.535885);
}

double NNfunction_sg_uL::synapse0x2cb2390() {
   return (neuron0x2ca7470()*-0.200972);
}

double NNfunction_sg_uL::synapse0x2cb23d0() {
   return (neuron0x2ca77b0()*0.0884695);
}

double NNfunction_sg_uL::synapse0x2cb2410() {
   return (neuron0x2ca7af0()*0.423911);
}

double NNfunction_sg_uL::synapse0x2cb2450() {
   return (neuron0x2ca7e30()*-0.114064);
}

double NNfunction_sg_uL::synapse0x2cb1ee0() {
   return (neuron0x2ca8170()*-0.0444091);
}

double NNfunction_sg_uL::synapse0x2cb1f20() {
   return (neuron0x2ca86d0()*-0.102286);
}

double NNfunction_sg_uL::synapse0x2cb25a0() {
   return (neuron0x2ca88f0()*0.133025);
}

double NNfunction_sg_uL::synapse0x2cb25e0() {
   return (neuron0x2ca8c30()*0.177524);
}

double NNfunction_sg_uL::synapse0x2cb2620() {
   return (neuron0x2ca8f70()*-0.00397667);
}

double NNfunction_sg_uL::synapse0x2cb2660() {
   return (neuron0x2ca92b0()*0.0814428);
}

double NNfunction_sg_uL::synapse0x2cb26a0() {
   return (neuron0x2ca95f0()*0.0325864);
}

double NNfunction_sg_uL::synapse0x2cb26e0() {
   return (neuron0x2ca9930()*0.0248506);
}

double NNfunction_sg_uL::synapse0x2cb28b0() {
   return (neuron0x2ca4e00()*0.0145029);
}

double NNfunction_sg_uL::synapse0x2cbb940() {
   return (neuron0x2ca50b0()*-0.0731778);
}

double NNfunction_sg_uL::synapse0x2cbb980() {
   return (neuron0x2ca53f0()*0.340396);
}

double NNfunction_sg_uL::synapse0x2cbb9c0() {
   return (neuron0x2ca5730()*-0.391731);
}

double NNfunction_sg_uL::synapse0x2cbba00() {
   return (neuron0x2ca5a70()*0.124558);
}

double NNfunction_sg_uL::synapse0x2cbba40() {
   return (neuron0x2ca5db0()*0.0856323);
}

double NNfunction_sg_uL::synapse0x2cbba80() {
   return (neuron0x2ca60f0()*0.131233);
}

double NNfunction_sg_uL::synapse0x2cbbac0() {
   return (neuron0x2ca6430()*0.0827009);
}

double NNfunction_sg_uL::synapse0x2cbbb00() {
   return (neuron0x2ca6770()*-0.0501086);
}

double NNfunction_sg_uL::synapse0x2cbbb40() {
   return (neuron0x2ca6ab0()*0.0265072);
}

double NNfunction_sg_uL::synapse0x2cbbb80() {
   return (neuron0x2ca6df0()*-0.000305134);
}

double NNfunction_sg_uL::synapse0x2cbbbc0() {
   return (neuron0x2ca7130()*0.738187);
}

double NNfunction_sg_uL::synapse0x2cbbc00() {
   return (neuron0x2ca7470()*-0.164575);
}

double NNfunction_sg_uL::synapse0x2cbbc40() {
   return (neuron0x2ca77b0()*-0.197762);
}

double NNfunction_sg_uL::synapse0x2cbbc80() {
   return (neuron0x2ca7af0()*0.174766);
}

double NNfunction_sg_uL::synapse0x2cbbcc0() {
   return (neuron0x2ca7e30()*-0.0629033);
}

double NNfunction_sg_uL::synapse0x2cbb790() {
   return (neuron0x2ca8170()*-0.0845888);
}

double NNfunction_sg_uL::synapse0x2cbb7d0() {
   return (neuron0x2ca86d0()*0.0189676);
}

double NNfunction_sg_uL::synapse0x2cbbe10() {
   return (neuron0x2ca88f0()*0.0599212);
}

double NNfunction_sg_uL::synapse0x2cbbe50() {
   return (neuron0x2ca8c30()*-0.0136769);
}

double NNfunction_sg_uL::synapse0x2cbbe90() {
   return (neuron0x2ca8f70()*0.0938162);
}

double NNfunction_sg_uL::synapse0x2cbbed0() {
   return (neuron0x2ca92b0()*-0.03152);
}

double NNfunction_sg_uL::synapse0x2cbbf10() {
   return (neuron0x2ca95f0()*-0.0356036);
}

double NNfunction_sg_uL::synapse0x2cbbf50() {
   return (neuron0x2ca9930()*-0.0434138);
}

double NNfunction_sg_uL::synapse0x2cbc2d0() {
   return (neuron0x2ca4e00()*-0.30359);
}

double NNfunction_sg_uL::synapse0x2cbc310() {
   return (neuron0x2ca50b0()*-0.367686);
}

double NNfunction_sg_uL::synapse0x2cbc350() {
   return (neuron0x2ca53f0()*0.161783);
}

double NNfunction_sg_uL::synapse0x2cbc390() {
   return (neuron0x2ca5730()*-0.21348);
}

double NNfunction_sg_uL::synapse0x2cbc3d0() {
   return (neuron0x2ca5a70()*-0.333407);
}

double NNfunction_sg_uL::synapse0x2cbc410() {
   return (neuron0x2ca5db0()*0.218158);
}

double NNfunction_sg_uL::synapse0x2cbc450() {
   return (neuron0x2ca60f0()*0.198756);
}

double NNfunction_sg_uL::synapse0x2cbc490() {
   return (neuron0x2ca6430()*0.384314);
}

double NNfunction_sg_uL::synapse0x2cbc4d0() {
   return (neuron0x2ca6770()*-0.00456932);
}

double NNfunction_sg_uL::synapse0x2cbc510() {
   return (neuron0x2ca6ab0()*0.0655937);
}

double NNfunction_sg_uL::synapse0x2cbc550() {
   return (neuron0x2ca6df0()*0.114218);
}

double NNfunction_sg_uL::synapse0x2cbc590() {
   return (neuron0x2ca7130()*-0.251331);
}

double NNfunction_sg_uL::synapse0x2cbc5d0() {
   return (neuron0x2ca7470()*0.452427);
}

double NNfunction_sg_uL::synapse0x2cbc610() {
   return (neuron0x2ca77b0()*0.331195);
}

double NNfunction_sg_uL::synapse0x2cbc650() {
   return (neuron0x2ca7af0()*0.224861);
}

double NNfunction_sg_uL::synapse0x2cbc690() {
   return (neuron0x2ca7e30()*0.359416);
}

double NNfunction_sg_uL::synapse0x2cbc120() {
   return (neuron0x2ca8170()*-0.0655584);
}

double NNfunction_sg_uL::synapse0x2cbc160() {
   return (neuron0x2ca86d0()*0.0549668);
}

double NNfunction_sg_uL::synapse0x2cbc7e0() {
   return (neuron0x2ca88f0()*0.706079);
}

double NNfunction_sg_uL::synapse0x2cbc820() {
   return (neuron0x2ca8c30()*0.336804);
}

double NNfunction_sg_uL::synapse0x2cbc860() {
   return (neuron0x2ca8f70()*-0.354957);
}

double NNfunction_sg_uL::synapse0x2cbc8a0() {
   return (neuron0x2ca92b0()*-0.306711);
}

double NNfunction_sg_uL::synapse0x2cbc8e0() {
   return (neuron0x2ca95f0()*-0.00956569);
}

double NNfunction_sg_uL::synapse0x2cbc920() {
   return (neuron0x2ca9930()*0.331787);
}

double NNfunction_sg_uL::synapse0x2cbcca0() {
   return (neuron0x2ca4e00()*-0.000562596);
}

double NNfunction_sg_uL::synapse0x2cbcce0() {
   return (neuron0x2ca50b0()*0.000622102);
}

double NNfunction_sg_uL::synapse0x2cbcd20() {
   return (neuron0x2ca53f0()*-0.000335012);
}

double NNfunction_sg_uL::synapse0x2cbcd60() {
   return (neuron0x2ca5730()*1.95009);
}

double NNfunction_sg_uL::synapse0x2cbcda0() {
   return (neuron0x2ca5a70()*0.00180286);
}

double NNfunction_sg_uL::synapse0x2cbcde0() {
   return (neuron0x2ca5db0()*0.00559234);
}

double NNfunction_sg_uL::synapse0x2cbce20() {
   return (neuron0x2ca60f0()*0.0103344);
}

double NNfunction_sg_uL::synapse0x2cbce60() {
   return (neuron0x2ca6430()*0.00269131);
}

double NNfunction_sg_uL::synapse0x2cbcea0() {
   return (neuron0x2ca6770()*0.00624189);
}

double NNfunction_sg_uL::synapse0x2cbcee0() {
   return (neuron0x2ca6ab0()*0.00407358);
}

double NNfunction_sg_uL::synapse0x2cbcf20() {
   return (neuron0x2ca6df0()*-0.00307037);
}

double NNfunction_sg_uL::synapse0x2cbcf60() {
   return (neuron0x2ca7130()*-0.400187);
}

double NNfunction_sg_uL::synapse0x2cbcfa0() {
   return (neuron0x2ca7470()*-0.00379086);
}

double NNfunction_sg_uL::synapse0x2cbcfe0() {
   return (neuron0x2ca77b0()*0.00708978);
}

double NNfunction_sg_uL::synapse0x2cbd020() {
   return (neuron0x2ca7af0()*0.00697575);
}

double NNfunction_sg_uL::synapse0x2cbd060() {
   return (neuron0x2ca7e30()*-0.00229081);
}

double NNfunction_sg_uL::synapse0x2cbcaf0() {
   return (neuron0x2ca8170()*0.000788066);
}

double NNfunction_sg_uL::synapse0x2cbcb30() {
   return (neuron0x2ca86d0()*0.00101327);
}

double NNfunction_sg_uL::synapse0x2cbd1b0() {
   return (neuron0x2ca88f0()*-0.00258279);
}

double NNfunction_sg_uL::synapse0x2cbd1f0() {
   return (neuron0x2ca8c30()*0.00132099);
}

double NNfunction_sg_uL::synapse0x2cbd230() {
   return (neuron0x2ca8f70()*-0.0044588);
}

double NNfunction_sg_uL::synapse0x2cbd270() {
   return (neuron0x2ca92b0()*-0.00185548);
}

double NNfunction_sg_uL::synapse0x2cbd2b0() {
   return (neuron0x2ca95f0()*0.00391225);
}

double NNfunction_sg_uL::synapse0x2cbd2f0() {
   return (neuron0x2ca9930()*0.00557455);
}

double NNfunction_sg_uL::synapse0x2cbd670() {
   return (neuron0x2ca4e00()*0.0324029);
}

double NNfunction_sg_uL::synapse0x2cbd6b0() {
   return (neuron0x2ca50b0()*-0.0810918);
}

double NNfunction_sg_uL::synapse0x2cbd6f0() {
   return (neuron0x2ca53f0()*-0.173405);
}

double NNfunction_sg_uL::synapse0x2cbd730() {
   return (neuron0x2ca5730()*-0.324598);
}

double NNfunction_sg_uL::synapse0x2cbd770() {
   return (neuron0x2ca5a70()*0.114845);
}

double NNfunction_sg_uL::synapse0x2cbd7b0() {
   return (neuron0x2ca5db0()*0.283791);
}

double NNfunction_sg_uL::synapse0x2cbd7f0() {
   return (neuron0x2ca60f0()*-0.414731);
}

double NNfunction_sg_uL::synapse0x2cbd830() {
   return (neuron0x2ca6430()*-0.268009);
}

double NNfunction_sg_uL::synapse0x2cbd870() {
   return (neuron0x2ca6770()*-0.357982);
}

double NNfunction_sg_uL::synapse0x2cbd8b0() {
   return (neuron0x2ca6ab0()*-0.0892127);
}

double NNfunction_sg_uL::synapse0x2cbd8f0() {
   return (neuron0x2ca6df0()*-0.280765);
}

double NNfunction_sg_uL::synapse0x2cbd930() {
   return (neuron0x2ca7130()*-0.277149);
}

double NNfunction_sg_uL::synapse0x2cbd970() {
   return (neuron0x2ca7470()*-0.325892);
}

double NNfunction_sg_uL::synapse0x2cbd9b0() {
   return (neuron0x2ca77b0()*-0.183967);
}

double NNfunction_sg_uL::synapse0x2cbd9f0() {
   return (neuron0x2ca7af0()*-0.351929);
}

double NNfunction_sg_uL::synapse0x2cbda30() {
   return (neuron0x2ca7e30()*-0.218516);
}

double NNfunction_sg_uL::synapse0x2cbd4c0() {
   return (neuron0x2ca8170()*-0.238915);
}

double NNfunction_sg_uL::synapse0x2cbd500() {
   return (neuron0x2ca86d0()*-0.249651);
}

double NNfunction_sg_uL::synapse0x2cbdb80() {
   return (neuron0x2ca88f0()*-0.0904373);
}

double NNfunction_sg_uL::synapse0x2cbdbc0() {
   return (neuron0x2ca8c30()*-0.029692);
}

double NNfunction_sg_uL::synapse0x2cbdc00() {
   return (neuron0x2ca8f70()*0.130007);
}

double NNfunction_sg_uL::synapse0x2cbdc40() {
   return (neuron0x2ca92b0()*0.270287);
}

double NNfunction_sg_uL::synapse0x2cbdc80() {
   return (neuron0x2ca95f0()*-0.173076);
}

double NNfunction_sg_uL::synapse0x2cbdcc0() {
   return (neuron0x2ca9930()*-0.106947);
}

double NNfunction_sg_uL::synapse0x2cbe040() {
   return (neuron0x2ca4e00()*-0.576034);
}

double NNfunction_sg_uL::synapse0x2cbe080() {
   return (neuron0x2ca50b0()*-0.170335);
}

double NNfunction_sg_uL::synapse0x2cbe0c0() {
   return (neuron0x2ca53f0()*-0.109576);
}

double NNfunction_sg_uL::synapse0x2cbe100() {
   return (neuron0x2ca5730()*-0.0443962);
}

double NNfunction_sg_uL::synapse0x2cbe140() {
   return (neuron0x2ca5a70()*-0.0688483);
}

double NNfunction_sg_uL::synapse0x2cbe180() {
   return (neuron0x2ca5db0()*-0.48651);
}

double NNfunction_sg_uL::synapse0x2cbe1c0() {
   return (neuron0x2ca60f0()*-0.299561);
}

double NNfunction_sg_uL::synapse0x2cbe200() {
   return (neuron0x2ca6430()*-0.0542156);
}

double NNfunction_sg_uL::synapse0x2cbe240() {
   return (neuron0x2ca6770()*0.166857);
}

double NNfunction_sg_uL::synapse0x2cbe280() {
   return (neuron0x2ca6ab0()*-0.298205);
}

double NNfunction_sg_uL::synapse0x2cbe2c0() {
   return (neuron0x2ca6df0()*0.185281);
}

double NNfunction_sg_uL::synapse0x2cbe300() {
   return (neuron0x2ca7130()*-1.4184);
}

double NNfunction_sg_uL::synapse0x2cbe340() {
   return (neuron0x2ca7470()*-0.512727);
}

double NNfunction_sg_uL::synapse0x2cbe380() {
   return (neuron0x2ca77b0()*-0.397266);
}

double NNfunction_sg_uL::synapse0x2cbe3c0() {
   return (neuron0x2ca7af0()*-0.592022);
}

double NNfunction_sg_uL::synapse0x2cbe400() {
   return (neuron0x2ca7e30()*-0.562095);
}

double NNfunction_sg_uL::synapse0x2cbde90() {
   return (neuron0x2ca8170()*-0.0178943);
}

double NNfunction_sg_uL::synapse0x2cbded0() {
   return (neuron0x2ca86d0()*-0.716122);
}

double NNfunction_sg_uL::synapse0x2cbe550() {
   return (neuron0x2ca88f0()*-0.675816);
}

double NNfunction_sg_uL::synapse0x2cbe590() {
   return (neuron0x2ca8c30()*-0.267863);
}

double NNfunction_sg_uL::synapse0x2cbe5d0() {
   return (neuron0x2ca8f70()*0.296606);
}

double NNfunction_sg_uL::synapse0x2cbe610() {
   return (neuron0x2ca92b0()*0.0681095);
}

double NNfunction_sg_uL::synapse0x2cbe650() {
   return (neuron0x2ca95f0()*-0.179309);
}

double NNfunction_sg_uL::synapse0x2cbe690() {
   return (neuron0x2ca9930()*-0.0403881);
}

double NNfunction_sg_uL::synapse0x2cbea10() {
   return (neuron0x2ca4e00()*0.048977);
}

double NNfunction_sg_uL::synapse0x2cbea50() {
   return (neuron0x2ca50b0()*0.000104312);
}

double NNfunction_sg_uL::synapse0x2cbea90() {
   return (neuron0x2ca53f0()*0.0611134);
}

double NNfunction_sg_uL::synapse0x2cbead0() {
   return (neuron0x2ca5730()*-0.0424037);
}

double NNfunction_sg_uL::synapse0x2cbeb10() {
   return (neuron0x2ca5a70()*0.0250674);
}

double NNfunction_sg_uL::synapse0x2cbeb50() {
   return (neuron0x2ca5db0()*0.0662332);
}

double NNfunction_sg_uL::synapse0x2cbeb90() {
   return (neuron0x2ca60f0()*0.0560865);
}

double NNfunction_sg_uL::synapse0x2cbebd0() {
   return (neuron0x2ca6430()*-0.0349728);
}

double NNfunction_sg_uL::synapse0x2cbec10() {
   return (neuron0x2ca6770()*-0.164145);
}

double NNfunction_sg_uL::synapse0x2cbec50() {
   return (neuron0x2ca6ab0()*-0.590663);
}

double NNfunction_sg_uL::synapse0x2cbec90() {
   return (neuron0x2ca6df0()*0.0307918);
}

double NNfunction_sg_uL::synapse0x2cbecd0() {
   return (neuron0x2ca7130()*1.65742);
}

double NNfunction_sg_uL::synapse0x2cbed10() {
   return (neuron0x2ca7470()*-0.0681238);
}

double NNfunction_sg_uL::synapse0x2cbed50() {
   return (neuron0x2ca77b0()*0.0823736);
}

double NNfunction_sg_uL::synapse0x2cbed90() {
   return (neuron0x2ca7af0()*-0.00276606);
}

double NNfunction_sg_uL::synapse0x2cbedd0() {
   return (neuron0x2ca7e30()*0.055722);
}

double NNfunction_sg_uL::synapse0x2cbe860() {
   return (neuron0x2ca8170()*0.0348776);
}

double NNfunction_sg_uL::synapse0x2cbe8a0() {
   return (neuron0x2ca86d0()*-0.0773312);
}

double NNfunction_sg_uL::synapse0x2cbef20() {
   return (neuron0x2ca88f0()*-0.139468);
}

double NNfunction_sg_uL::synapse0x2cbef60() {
   return (neuron0x2ca8c30()*-0.0250647);
}

double NNfunction_sg_uL::synapse0x2cbefa0() {
   return (neuron0x2ca8f70()*0.0461581);
}

double NNfunction_sg_uL::synapse0x2cbefe0() {
   return (neuron0x2ca92b0()*-0.0248221);
}

double NNfunction_sg_uL::synapse0x2cbf020() {
   return (neuron0x2ca95f0()*-0.0022376);
}

double NNfunction_sg_uL::synapse0x2cbf060() {
   return (neuron0x2ca9930()*0.000859405);
}

double NNfunction_sg_uL::synapse0x2cbf3e0() {
   return (neuron0x2ca4e00()*-0.108082);
}

double NNfunction_sg_uL::synapse0x2cbf420() {
   return (neuron0x2ca50b0()*-0.0430607);
}

double NNfunction_sg_uL::synapse0x2cbf460() {
   return (neuron0x2ca53f0()*1.2114);
}

double NNfunction_sg_uL::synapse0x2cbf4a0() {
   return (neuron0x2ca5730()*0.0153141);
}

double NNfunction_sg_uL::synapse0x2cbf4e0() {
   return (neuron0x2ca5a70()*-0.149042);
}

double NNfunction_sg_uL::synapse0x2cbf520() {
   return (neuron0x2ca5db0()*0.0217618);
}

double NNfunction_sg_uL::synapse0x2cbf560() {
   return (neuron0x2ca60f0()*-0.030165);
}

double NNfunction_sg_uL::synapse0x2cbf5a0() {
   return (neuron0x2ca6430()*-0.0711606);
}

double NNfunction_sg_uL::synapse0x2cbf5e0() {
   return (neuron0x2ca6770()*0.0830418);
}

double NNfunction_sg_uL::synapse0x2cbf620() {
   return (neuron0x2ca6ab0()*-0.0396542);
}

double NNfunction_sg_uL::synapse0x2cbf660() {
   return (neuron0x2ca6df0()*0.0602793);
}

double NNfunction_sg_uL::synapse0x2cbf6a0() {
   return (neuron0x2ca7130()*-0.276964);
}

double NNfunction_sg_uL::synapse0x2cbf6e0() {
   return (neuron0x2ca7470()*0.035886);
}

double NNfunction_sg_uL::synapse0x2cbf720() {
   return (neuron0x2ca77b0()*-0.0101367);
}

double NNfunction_sg_uL::synapse0x2cbf760() {
   return (neuron0x2ca7af0()*0.0472984);
}

double NNfunction_sg_uL::synapse0x2cbf7a0() {
   return (neuron0x2ca7e30()*0.114392);
}

double NNfunction_sg_uL::synapse0x2cbf230() {
   return (neuron0x2ca8170()*-0.0585923);
}

double NNfunction_sg_uL::synapse0x2cbf270() {
   return (neuron0x2ca86d0()*-0.0341518);
}

double NNfunction_sg_uL::synapse0x2cbf8f0() {
   return (neuron0x2ca88f0()*0.0868277);
}

double NNfunction_sg_uL::synapse0x2cbf930() {
   return (neuron0x2ca8c30()*0.0723418);
}

double NNfunction_sg_uL::synapse0x2cbf970() {
   return (neuron0x2ca8f70()*0.0479992);
}

double NNfunction_sg_uL::synapse0x2cbf9b0() {
   return (neuron0x2ca92b0()*-0.00685685);
}

double NNfunction_sg_uL::synapse0x2cbf9f0() {
   return (neuron0x2ca95f0()*0.00432609);
}

double NNfunction_sg_uL::synapse0x2cbfa30() {
   return (neuron0x2ca9930()*-0.00706556);
}

double NNfunction_sg_uL::synapse0x2cbfdb0() {
   return (neuron0x2ca4e00()*0.222118);
}

double NNfunction_sg_uL::synapse0x2cbfdf0() {
   return (neuron0x2ca50b0()*0.0702389);
}

double NNfunction_sg_uL::synapse0x2cbfe30() {
   return (neuron0x2ca53f0()*0.376273);
}

double NNfunction_sg_uL::synapse0x2cbfe70() {
   return (neuron0x2ca5730()*0.39937);
}

double NNfunction_sg_uL::synapse0x2cbfeb0() {
   return (neuron0x2ca5a70()*-0.119444);
}

double NNfunction_sg_uL::synapse0x2cbfef0() {
   return (neuron0x2ca5db0()*0.0022099);
}

double NNfunction_sg_uL::synapse0x2cbff30() {
   return (neuron0x2ca60f0()*-0.192438);
}

double NNfunction_sg_uL::synapse0x2cbff70() {
   return (neuron0x2ca6430()*0.213186);
}

double NNfunction_sg_uL::synapse0x2cbffb0() {
   return (neuron0x2ca6770()*-0.168581);
}

double NNfunction_sg_uL::synapse0x2cbfff0() {
   return (neuron0x2ca6ab0()*0.129744);
}

double NNfunction_sg_uL::synapse0x2cc0030() {
   return (neuron0x2ca6df0()*-0.353341);
}

double NNfunction_sg_uL::synapse0x2cc0070() {
   return (neuron0x2ca7130()*-0.996577);
}

double NNfunction_sg_uL::synapse0x2cc00b0() {
   return (neuron0x2ca7470()*-0.0957538);
}

double NNfunction_sg_uL::synapse0x2cc00f0() {
   return (neuron0x2ca77b0()*-0.294768);
}

double NNfunction_sg_uL::synapse0x2cc0130() {
   return (neuron0x2ca7af0()*-0.296364);
}

double NNfunction_sg_uL::synapse0x2cc0170() {
   return (neuron0x2ca7e30()*-0.380725);
}

double NNfunction_sg_uL::synapse0x2cbfc00() {
   return (neuron0x2ca8170()*-0.250931);
}

double NNfunction_sg_uL::synapse0x2cbfc40() {
   return (neuron0x2ca86d0()*-0.481199);
}

double NNfunction_sg_uL::synapse0x2cc02c0() {
   return (neuron0x2ca88f0()*-0.565021);
}

double NNfunction_sg_uL::synapse0x2cc0300() {
   return (neuron0x2ca8c30()*-0.169976);
}

double NNfunction_sg_uL::synapse0x2cc0340() {
   return (neuron0x2ca8f70()*0.280751);
}

double NNfunction_sg_uL::synapse0x2cc0380() {
   return (neuron0x2ca92b0()*0.14076);
}

double NNfunction_sg_uL::synapse0x2cc03c0() {
   return (neuron0x2ca95f0()*-0.16938);
}

double NNfunction_sg_uL::synapse0x2cc0400() {
   return (neuron0x2ca9930()*-0.20007);
}

double NNfunction_sg_uL::synapse0x2cc0780() {
   return (neuron0x2ca4e00()*-0.292325);
}

double NNfunction_sg_uL::synapse0x2cb4d50() {
   return (neuron0x2ca50b0()*-0.0208514);
}

double NNfunction_sg_uL::synapse0x2cb4d90() {
   return (neuron0x2ca53f0()*0.482512);
}

double NNfunction_sg_uL::synapse0x2cb4dd0() {
   return (neuron0x2ca5730()*0.540492);
}

double NNfunction_sg_uL::synapse0x2cb5020() {
   return (neuron0x2ca5a70()*-0.33478);
}

double NNfunction_sg_uL::synapse0x2cb5060() {
   return (neuron0x2ca5db0()*-0.277629);
}

double NNfunction_sg_uL::synapse0x2cb50a0() {
   return (neuron0x2ca60f0()*0.116824);
}

double NNfunction_sg_uL::synapse0x2cb52f0() {
   return (neuron0x2ca6430()*0.0679253);
}

double NNfunction_sg_uL::synapse0x2cb5330() {
   return (neuron0x2ca6770()*-0.143046);
}

double NNfunction_sg_uL::synapse0x2cb5580() {
   return (neuron0x2ca6ab0()*0.10813);
}

double NNfunction_sg_uL::synapse0x2cb55c0() {
   return (neuron0x2ca6df0()*-0.265782);
}

double NNfunction_sg_uL::synapse0x2cb5600() {
   return (neuron0x2ca7130()*0.348319);
}

double NNfunction_sg_uL::synapse0x2cb5850() {
   return (neuron0x2ca7470()*0.243579);
}

double NNfunction_sg_uL::synapse0x2cb5890() {
   return (neuron0x2ca77b0()*0.443895);
}

double NNfunction_sg_uL::synapse0x2cb5ae0() {
   return (neuron0x2ca7af0()*-0.170554);
}

double NNfunction_sg_uL::synapse0x2cb5b20() {
   return (neuron0x2ca7e30()*0.270378);
}

double NNfunction_sg_uL::synapse0x2cc05d0() {
   return (neuron0x2ca8170()*0.355117);
}

double NNfunction_sg_uL::synapse0x2cc0610() {
   return (neuron0x2ca86d0()*0.275937);
}

double NNfunction_sg_uL::synapse0x2cb5c70() {
   return (neuron0x2ca88f0()*0.0899189);
}

double NNfunction_sg_uL::synapse0x2cb6180() {
   return (neuron0x2ca8c30()*0.00630105);
}

double NNfunction_sg_uL::synapse0x2cb61c0() {
   return (neuron0x2ca8f70()*0.0171197);
}

double NNfunction_sg_uL::synapse0x2cb6200() {
   return (neuron0x2ca92b0()*-0.185937);
}

double NNfunction_sg_uL::synapse0x2cb6450() {
   return (neuron0x2ca95f0()*0.277065);
}

double NNfunction_sg_uL::synapse0x2cb6490() {
   return (neuron0x2ca9930()*0.114385);
}

double NNfunction_sg_uL::synapse0x2cb5d40() {
   return (neuron0x2ca4e00()*0.00421733);
}

double NNfunction_sg_uL::synapse0x2cb5d80() {
   return (neuron0x2ca50b0()*0.00392289);
}

double NNfunction_sg_uL::synapse0x2cb5dc0() {
   return (neuron0x2ca53f0()*-0.00332043);
}

double NNfunction_sg_uL::synapse0x2cb5e00() {
   return (neuron0x2ca5730()*0.0682783);
}

double NNfunction_sg_uL::synapse0x2cb6780() {
   return (neuron0x2ca5a70()*-0.00245389);
}

double NNfunction_sg_uL::synapse0x2cc2ad0() {
   return (neuron0x2ca5db0()*-0.00325245);
}

double NNfunction_sg_uL::synapse0x2cc2b10() {
   return (neuron0x2ca60f0()*0.0037572);
}

double NNfunction_sg_uL::synapse0x2cc2b50() {
   return (neuron0x2ca6430()*-0.00350866);
}

double NNfunction_sg_uL::synapse0x2cc2b90() {
   return (neuron0x2ca6770()*-0.00348351);
}

double NNfunction_sg_uL::synapse0x2cc2bd0() {
   return (neuron0x2ca6ab0()*0.00256707);
}

double NNfunction_sg_uL::synapse0x2cc2c10() {
   return (neuron0x2ca6df0()*0.00161125);
}

double NNfunction_sg_uL::synapse0x2cc2c50() {
   return (neuron0x2ca7130()*-0.884466);
}

double NNfunction_sg_uL::synapse0x2cc2c90() {
   return (neuron0x2ca7470()*-0.00843816);
}

double NNfunction_sg_uL::synapse0x2cc2cd0() {
   return (neuron0x2ca77b0()*-0.00958087);
}

double NNfunction_sg_uL::synapse0x2cc2d10() {
   return (neuron0x2ca7af0()*-0.00386529);
}

double NNfunction_sg_uL::synapse0x2cc2d50() {
   return (neuron0x2ca7e30()*-0.00378037);
}

double NNfunction_sg_uL::synapse0x2cb6660() {
   return (neuron0x2ca8170()*0.00108377);
}

double NNfunction_sg_uL::synapse0x2cb66a0() {
   return (neuron0x2ca86d0()*-0.00414883);
}

double NNfunction_sg_uL::synapse0x2cc2ea0() {
   return (neuron0x2ca88f0()*-0.00104184);
}

double NNfunction_sg_uL::synapse0x2cc2ee0() {
   return (neuron0x2ca8c30()*-0.00725131);
}

double NNfunction_sg_uL::synapse0x2cc2f20() {
   return (neuron0x2ca8f70()*-0.00495693);
}

double NNfunction_sg_uL::synapse0x2cc2f60() {
   return (neuron0x2ca92b0()*-0.00230236);
}

double NNfunction_sg_uL::synapse0x2cc2fa0() {
   return (neuron0x2ca95f0()*0.00465894);
}

double NNfunction_sg_uL::synapse0x2cc2fe0() {
   return (neuron0x2ca9930()*0.00019257);
}

double NNfunction_sg_uL::synapse0x2cc3360() {
   return (neuron0x2ca4e00()*-0.00329353);
}

double NNfunction_sg_uL::synapse0x2cc33a0() {
   return (neuron0x2ca50b0()*0.0120429);
}

double NNfunction_sg_uL::synapse0x2cc33e0() {
   return (neuron0x2ca53f0()*-0.00184438);
}

double NNfunction_sg_uL::synapse0x2cc3420() {
   return (neuron0x2ca5730()*0.163609);
}

double NNfunction_sg_uL::synapse0x2cc3460() {
   return (neuron0x2ca5a70()*8.88264e-05);
}

double NNfunction_sg_uL::synapse0x2cc34a0() {
   return (neuron0x2ca5db0()*0.0302577);
}

double NNfunction_sg_uL::synapse0x2cc34e0() {
   return (neuron0x2ca60f0()*0.00436616);
}

double NNfunction_sg_uL::synapse0x2cc3520() {
   return (neuron0x2ca6430()*0.0240391);
}

double NNfunction_sg_uL::synapse0x2cc3560() {
   return (neuron0x2ca6770()*0.0152344);
}

double NNfunction_sg_uL::synapse0x2cc35a0() {
   return (neuron0x2ca6ab0()*0.0207105);
}

double NNfunction_sg_uL::synapse0x2cc35e0() {
   return (neuron0x2ca6df0()*-0.00586759);
}

double NNfunction_sg_uL::synapse0x2cc3620() {
   return (neuron0x2ca7130()*-1.78495);
}

double NNfunction_sg_uL::synapse0x2cc3660() {
   return (neuron0x2ca7470()*-0.0530992);
}

double NNfunction_sg_uL::synapse0x2cc36a0() {
   return (neuron0x2ca77b0()*-0.0467006);
}

double NNfunction_sg_uL::synapse0x2cc36e0() {
   return (neuron0x2ca7af0()*-0.0215453);
}

double NNfunction_sg_uL::synapse0x2cc3720() {
   return (neuron0x2ca7e30()*0.0235762);
}

double NNfunction_sg_uL::synapse0x2cc31b0() {
   return (neuron0x2ca8170()*-0.00419826);
}

double NNfunction_sg_uL::synapse0x2cc31f0() {
   return (neuron0x2ca86d0()*-0.0293026);
}

double NNfunction_sg_uL::synapse0x2cc3870() {
   return (neuron0x2ca88f0()*-0.0275689);
}

double NNfunction_sg_uL::synapse0x2cc38b0() {
   return (neuron0x2ca8c30()*-0.0193808);
}

double NNfunction_sg_uL::synapse0x2cc38f0() {
   return (neuron0x2ca8f70()*0.0128519);
}

double NNfunction_sg_uL::synapse0x2cc3930() {
   return (neuron0x2ca92b0()*-0.0031669);
}

double NNfunction_sg_uL::synapse0x2cc3970() {
   return (neuron0x2ca95f0()*-0.00656292);
}

double NNfunction_sg_uL::synapse0x2cc39b0() {
   return (neuron0x2ca9930()*-0.00646411);
}

double NNfunction_sg_uL::synapse0x2cc3d30() {
   return (neuron0x2ca4e00()*-0.1712);
}

double NNfunction_sg_uL::synapse0x2cc3d70() {
   return (neuron0x2ca50b0()*0.397905);
}

double NNfunction_sg_uL::synapse0x2cc3db0() {
   return (neuron0x2ca53f0()*-0.272501);
}

double NNfunction_sg_uL::synapse0x2cc3df0() {
   return (neuron0x2ca5730()*-0.322353);
}

double NNfunction_sg_uL::synapse0x2cc3e30() {
   return (neuron0x2ca5a70()*-0.191324);
}

double NNfunction_sg_uL::synapse0x2cc3e70() {
   return (neuron0x2ca5db0()*-0.460311);
}

double NNfunction_sg_uL::synapse0x2cc3eb0() {
   return (neuron0x2ca60f0()*0.141211);
}

double NNfunction_sg_uL::synapse0x2cc3ef0() {
   return (neuron0x2ca6430()*0.0723076);
}

double NNfunction_sg_uL::synapse0x2cc3f30() {
   return (neuron0x2ca6770()*-0.364193);
}

double NNfunction_sg_uL::synapse0x2cc3f70() {
   return (neuron0x2ca6ab0()*-0.222974);
}

double NNfunction_sg_uL::synapse0x2cc3fb0() {
   return (neuron0x2ca6df0()*-0.238584);
}

double NNfunction_sg_uL::synapse0x2cc3ff0() {
   return (neuron0x2ca7130()*-0.182241);
}

double NNfunction_sg_uL::synapse0x2cc4030() {
   return (neuron0x2ca7470()*-0.454953);
}

double NNfunction_sg_uL::synapse0x2cc4070() {
   return (neuron0x2ca77b0()*0.0236568);
}

double NNfunction_sg_uL::synapse0x2cc40b0() {
   return (neuron0x2ca7af0()*0.341142);
}

double NNfunction_sg_uL::synapse0x2cc40f0() {
   return (neuron0x2ca7e30()*0.048761);
}

double NNfunction_sg_uL::synapse0x2cc3b80() {
   return (neuron0x2ca8170()*-0.0363975);
}

double NNfunction_sg_uL::synapse0x2cc3bc0() {
   return (neuron0x2ca86d0()*0.0766594);
}

double NNfunction_sg_uL::synapse0x2cc4240() {
   return (neuron0x2ca88f0()*0.0423755);
}

double NNfunction_sg_uL::synapse0x2cc4280() {
   return (neuron0x2ca8c30()*-0.328349);
}

double NNfunction_sg_uL::synapse0x2cc42c0() {
   return (neuron0x2ca8f70()*0.307731);
}

double NNfunction_sg_uL::synapse0x2cc4300() {
   return (neuron0x2ca92b0()*0.318934);
}

double NNfunction_sg_uL::synapse0x2cc4340() {
   return (neuron0x2ca95f0()*0.0850977);
}

double NNfunction_sg_uL::synapse0x2cc4380() {
   return (neuron0x2ca9930()*0.0042012);
}

double NNfunction_sg_uL::synapse0x2cc4700() {
   return (neuron0x2ca4e00()*0.413822);
}

double NNfunction_sg_uL::synapse0x2cc4740() {
   return (neuron0x2ca50b0()*-0.0580659);
}

double NNfunction_sg_uL::synapse0x2cc4780() {
   return (neuron0x2ca53f0()*-0.0749372);
}

double NNfunction_sg_uL::synapse0x2cc47c0() {
   return (neuron0x2ca5730()*0.559133);
}

double NNfunction_sg_uL::synapse0x2cc4800() {
   return (neuron0x2ca5a70()*0.0115037);
}

double NNfunction_sg_uL::synapse0x2cc4840() {
   return (neuron0x2ca5db0()*0.0881907);
}

double NNfunction_sg_uL::synapse0x2cc4880() {
   return (neuron0x2ca60f0()*0.0421733);
}

double NNfunction_sg_uL::synapse0x2cc48c0() {
   return (neuron0x2ca6430()*-0.0197476);
}

double NNfunction_sg_uL::synapse0x2cc4900() {
   return (neuron0x2ca6770()*-0.234481);
}

double NNfunction_sg_uL::synapse0x2cc4940() {
   return (neuron0x2ca6ab0()*0.106304);
}

double NNfunction_sg_uL::synapse0x2cc4980() {
   return (neuron0x2ca6df0()*-0.194564);
}

double NNfunction_sg_uL::synapse0x2cc49c0() {
   return (neuron0x2ca7130()*-0.652801);
}

double NNfunction_sg_uL::synapse0x2cc4a00() {
   return (neuron0x2ca7470()*-0.223498);
}

double NNfunction_sg_uL::synapse0x2cc4a40() {
   return (neuron0x2ca77b0()*-0.425028);
}

double NNfunction_sg_uL::synapse0x2cc4a80() {
   return (neuron0x2ca7af0()*-0.272628);
}

double NNfunction_sg_uL::synapse0x2cc4ac0() {
   return (neuron0x2ca7e30()*-0.160202);
}

double NNfunction_sg_uL::synapse0x2cc4550() {
   return (neuron0x2ca8170()*-0.0121015);
}

double NNfunction_sg_uL::synapse0x2cc4590() {
   return (neuron0x2ca86d0()*-0.345529);
}

double NNfunction_sg_uL::synapse0x2cc4c10() {
   return (neuron0x2ca88f0()*-0.264257);
}

double NNfunction_sg_uL::synapse0x2cc4c50() {
   return (neuron0x2ca8c30()*-0.145077);
}

double NNfunction_sg_uL::synapse0x2cc4c90() {
   return (neuron0x2ca8f70()*-0.116082);
}

double NNfunction_sg_uL::synapse0x2cc4cd0() {
   return (neuron0x2ca92b0()*-0.148959);
}

double NNfunction_sg_uL::synapse0x2cc4d10() {
   return (neuron0x2ca95f0()*0.190024);
}

double NNfunction_sg_uL::synapse0x2cc4d50() {
   return (neuron0x2ca9930()*-0.223257);
}

double NNfunction_sg_uL::synapse0x2cc50d0() {
   return (neuron0x2ca4e00()*0.000379143);
}

double NNfunction_sg_uL::synapse0x2cc5110() {
   return (neuron0x2ca50b0()*-5.24246e-05);
}

double NNfunction_sg_uL::synapse0x2cc5150() {
   return (neuron0x2ca53f0()*0.0302509);
}

double NNfunction_sg_uL::synapse0x2cc5190() {
   return (neuron0x2ca5730()*-4.06704);
}

double NNfunction_sg_uL::synapse0x2cc51d0() {
   return (neuron0x2ca5a70()*0.00557352);
}

double NNfunction_sg_uL::synapse0x2cc5210() {
   return (neuron0x2ca5db0()*-0.00501687);
}

double NNfunction_sg_uL::synapse0x2cc5250() {
   return (neuron0x2ca60f0()*-0.00201855);
}

double NNfunction_sg_uL::synapse0x2cc5290() {
   return (neuron0x2ca6430()*-0.00412152);
}

double NNfunction_sg_uL::synapse0x2cc52d0() {
   return (neuron0x2ca6770()*-0.000345095);
}

double NNfunction_sg_uL::synapse0x2cc5310() {
   return (neuron0x2ca6ab0()*0.00270965);
}

double NNfunction_sg_uL::synapse0x2cc5350() {
   return (neuron0x2ca6df0()*-0.00426769);
}

double NNfunction_sg_uL::synapse0x2cc5390() {
   return (neuron0x2ca7130()*0.213304);
}

double NNfunction_sg_uL::synapse0x2cc53d0() {
   return (neuron0x2ca7470()*0.0112676);
}

double NNfunction_sg_uL::synapse0x2cc5410() {
   return (neuron0x2ca77b0()*-0.00974682);
}

double NNfunction_sg_uL::synapse0x2cc5450() {
   return (neuron0x2ca7af0()*0.000627153);
}

double NNfunction_sg_uL::synapse0x2cc5490() {
   return (neuron0x2ca7e30()*-0.00067679);
}

double NNfunction_sg_uL::synapse0x2cc4f20() {
   return (neuron0x2ca8170()*-0.00774218);
}

double NNfunction_sg_uL::synapse0x2cc4f60() {
   return (neuron0x2ca86d0()*0.00380396);
}

double NNfunction_sg_uL::synapse0x2cc55e0() {
   return (neuron0x2ca88f0()*-0.00187225);
}

double NNfunction_sg_uL::synapse0x2cc5620() {
   return (neuron0x2ca8c30()*-0.000346065);
}

double NNfunction_sg_uL::synapse0x2cc5660() {
   return (neuron0x2ca8f70()*0.00605703);
}

double NNfunction_sg_uL::synapse0x2cc56a0() {
   return (neuron0x2ca92b0()*-0.000610084);
}

double NNfunction_sg_uL::synapse0x2cc56e0() {
   return (neuron0x2ca95f0()*0.0065207);
}

double NNfunction_sg_uL::synapse0x2cc5720() {
   return (neuron0x2ca9930()*-0.0059299);
}

double NNfunction_sg_uL::synapse0x2cc5aa0() {
   return (neuron0x2ca4e00()*-0.0440531);
}

double NNfunction_sg_uL::synapse0x2cc5ae0() {
   return (neuron0x2ca50b0()*0.0130115);
}

double NNfunction_sg_uL::synapse0x2cc5b20() {
   return (neuron0x2ca53f0()*0.337161);
}

double NNfunction_sg_uL::synapse0x2cc5b60() {
   return (neuron0x2ca5730()*0.0761444);
}

double NNfunction_sg_uL::synapse0x2cc5ba0() {
   return (neuron0x2ca5a70()*0.234514);
}

double NNfunction_sg_uL::synapse0x2cc5be0() {
   return (neuron0x2ca5db0()*0.167871);
}

double NNfunction_sg_uL::synapse0x2cc5c20() {
   return (neuron0x2ca60f0()*0.00516158);
}

double NNfunction_sg_uL::synapse0x2cc5c60() {
   return (neuron0x2ca6430()*-0.318398);
}

double NNfunction_sg_uL::synapse0x2cc5ca0() {
   return (neuron0x2ca6770()*-0.00232747);
}

double NNfunction_sg_uL::synapse0x2cc5ce0() {
   return (neuron0x2ca6ab0()*-0.0394223);
}

double NNfunction_sg_uL::synapse0x2cc5d20() {
   return (neuron0x2ca6df0()*-0.192452);
}

double NNfunction_sg_uL::synapse0x2cc5d60() {
   return (neuron0x2ca7130()*-0.3309);
}

double NNfunction_sg_uL::synapse0x2cc5da0() {
   return (neuron0x2ca7470()*0.0110417);
}

double NNfunction_sg_uL::synapse0x2cc5de0() {
   return (neuron0x2ca77b0()*0.184703);
}

double NNfunction_sg_uL::synapse0x2cc5e20() {
   return (neuron0x2ca7af0()*0.472952);
}

double NNfunction_sg_uL::synapse0x2cc5e60() {
   return (neuron0x2ca7e30()*0.218392);
}

double NNfunction_sg_uL::synapse0x2cc58f0() {
   return (neuron0x2ca8170()*-0.210294);
}

double NNfunction_sg_uL::synapse0x2cc5930() {
   return (neuron0x2ca86d0()*0.0248714);
}

double NNfunction_sg_uL::synapse0x2cc5fb0() {
   return (neuron0x2ca88f0()*-0.173127);
}

double NNfunction_sg_uL::synapse0x2cc5ff0() {
   return (neuron0x2ca8c30()*0.0613261);
}

double NNfunction_sg_uL::synapse0x2cc6030() {
   return (neuron0x2ca8f70()*-0.217032);
}

double NNfunction_sg_uL::synapse0x2cc6070() {
   return (neuron0x2ca92b0()*0.380575);
}

double NNfunction_sg_uL::synapse0x2cc60b0() {
   return (neuron0x2ca95f0()*0.0280257);
}

double NNfunction_sg_uL::synapse0x2cc60f0() {
   return (neuron0x2ca9930()*0.134039);
}

double NNfunction_sg_uL::synapse0x2cc6470() {
   return (neuron0x2ca4e00()*-0.00712148);
}

double NNfunction_sg_uL::synapse0x2cc64b0() {
   return (neuron0x2ca50b0()*-0.00544636);
}

double NNfunction_sg_uL::synapse0x2cc64f0() {
   return (neuron0x2ca53f0()*0.00694809);
}

double NNfunction_sg_uL::synapse0x2cc6530() {
   return (neuron0x2ca5730()*15.6603);
}

double NNfunction_sg_uL::synapse0x2cc6570() {
   return (neuron0x2ca5a70()*-0.00319279);
}

double NNfunction_sg_uL::synapse0x2cc65b0() {
   return (neuron0x2ca5db0()*0.00357269);
}

double NNfunction_sg_uL::synapse0x2cc65f0() {
   return (neuron0x2ca60f0()*0.00285422);
}

double NNfunction_sg_uL::synapse0x2cc6630() {
   return (neuron0x2ca6430()*-0.00117441);
}

double NNfunction_sg_uL::synapse0x2cc6670() {
   return (neuron0x2ca6770()*-0.00395594);
}

double NNfunction_sg_uL::synapse0x2cc66b0() {
   return (neuron0x2ca6ab0()*0.00179058);
}

double NNfunction_sg_uL::synapse0x2cc66f0() {
   return (neuron0x2ca6df0()*0.00637598);
}

double NNfunction_sg_uL::synapse0x2cc6730() {
   return (neuron0x2ca7130()*-0.0548803);
}

double NNfunction_sg_uL::synapse0x2cc6770() {
   return (neuron0x2ca7470()*0.00423805);
}

double NNfunction_sg_uL::synapse0x2cc67b0() {
   return (neuron0x2ca77b0()*0.0118725);
}

double NNfunction_sg_uL::synapse0x2cc67f0() {
   return (neuron0x2ca7af0()*0.000574538);
}

double NNfunction_sg_uL::synapse0x2cc6830() {
   return (neuron0x2ca7e30()*0.00405189);
}

double NNfunction_sg_uL::synapse0x2cc62c0() {
   return (neuron0x2ca8170()*0.00353849);
}

double NNfunction_sg_uL::synapse0x2cc6300() {
   return (neuron0x2ca86d0()*-0.0007939);
}

double NNfunction_sg_uL::synapse0x2cc6980() {
   return (neuron0x2ca88f0()*0.00836365);
}

double NNfunction_sg_uL::synapse0x2cc69c0() {
   return (neuron0x2ca8c30()*0.0131968);
}

double NNfunction_sg_uL::synapse0x2cc6a00() {
   return (neuron0x2ca8f70()*-0.00842341);
}

double NNfunction_sg_uL::synapse0x2cc6a40() {
   return (neuron0x2ca92b0()*0.00391028);
}

double NNfunction_sg_uL::synapse0x2cc6a80() {
   return (neuron0x2ca95f0()*-0.000755468);
}

double NNfunction_sg_uL::synapse0x2cc6ac0() {
   return (neuron0x2ca9930()*-8.62496e-05);
}

double NNfunction_sg_uL::synapse0x2cc6e40() {
   return (neuron0x2ca4e00()*0.419379);
}

double NNfunction_sg_uL::synapse0x2cc6e80() {
   return (neuron0x2ca50b0()*-0.223153);
}

double NNfunction_sg_uL::synapse0x2cc6ec0() {
   return (neuron0x2ca53f0()*-0.336063);
}

double NNfunction_sg_uL::synapse0x2cc6f00() {
   return (neuron0x2ca5730()*0.397751);
}

double NNfunction_sg_uL::synapse0x2cc6f40() {
   return (neuron0x2ca5a70()*0.151577);
}

double NNfunction_sg_uL::synapse0x2cc6f80() {
   return (neuron0x2ca5db0()*0.2938);
}

double NNfunction_sg_uL::synapse0x2cc6fc0() {
   return (neuron0x2ca60f0()*-0.0535469);
}

double NNfunction_sg_uL::synapse0x2cc7000() {
   return (neuron0x2ca6430()*0.11893);
}

double NNfunction_sg_uL::synapse0x2cc7040() {
   return (neuron0x2ca6770()*0.144211);
}

double NNfunction_sg_uL::synapse0x2cc7080() {
   return (neuron0x2ca6ab0()*0.147492);
}

double NNfunction_sg_uL::synapse0x2cc70c0() {
   return (neuron0x2ca6df0()*0.502284);
}

double NNfunction_sg_uL::synapse0x2cc7100() {
   return (neuron0x2ca7130()*0.818488);
}

double NNfunction_sg_uL::synapse0x2cc7140() {
   return (neuron0x2ca7470()*0.0343866);
}

double NNfunction_sg_uL::synapse0x2cc7180() {
   return (neuron0x2ca77b0()*0.367304);
}

double NNfunction_sg_uL::synapse0x2cc71c0() {
   return (neuron0x2ca7af0()*0.344131);
}

double NNfunction_sg_uL::synapse0x2cc7200() {
   return (neuron0x2ca7e30()*0.417113);
}

double NNfunction_sg_uL::synapse0x2cc6c90() {
   return (neuron0x2ca8170()*-0.27363);
}

double NNfunction_sg_uL::synapse0x2cc6cd0() {
   return (neuron0x2ca86d0()*0.00868129);
}

double NNfunction_sg_uL::synapse0x2cc7350() {
   return (neuron0x2ca88f0()*-0.137516);
}

double NNfunction_sg_uL::synapse0x2cc7390() {
   return (neuron0x2ca8c30()*-0.0994572);
}

double NNfunction_sg_uL::synapse0x2cc73d0() {
   return (neuron0x2ca8f70()*0.0543884);
}

double NNfunction_sg_uL::synapse0x2cc7410() {
   return (neuron0x2ca92b0()*-0.651602);
}

double NNfunction_sg_uL::synapse0x2cc7450() {
   return (neuron0x2ca95f0()*-0.116414);
}

double NNfunction_sg_uL::synapse0x2cc7490() {
   return (neuron0x2ca9930()*0.543278);
}

double NNfunction_sg_uL::synapse0x2caff40() {
   return (neuron0x2ca4e00()*-0.204531);
}

double NNfunction_sg_uL::synapse0x2caff80() {
   return (neuron0x2ca50b0()*0.135418);
}

double NNfunction_sg_uL::synapse0x2caffc0() {
   return (neuron0x2ca53f0()*-0.332975);
}

double NNfunction_sg_uL::synapse0x2cb0000() {
   return (neuron0x2ca5730()*-0.0536665);
}

double NNfunction_sg_uL::synapse0x2cb0040() {
   return (neuron0x2ca5a70()*-0.132897);
}

double NNfunction_sg_uL::synapse0x2cb0080() {
   return (neuron0x2ca5db0()*-0.0839091);
}

double NNfunction_sg_uL::synapse0x2cb00c0() {
   return (neuron0x2ca60f0()*0.636173);
}

double NNfunction_sg_uL::synapse0x2cb0100() {
   return (neuron0x2ca6430()*-0.113917);
}

double NNfunction_sg_uL::synapse0x2cc7c20() {
   return (neuron0x2ca6770()*0.262987);
}

double NNfunction_sg_uL::synapse0x2cc7c60() {
   return (neuron0x2ca6ab0()*0.266823);
}

double NNfunction_sg_uL::synapse0x2cc7ca0() {
   return (neuron0x2ca6df0()*0.130172);
}

double NNfunction_sg_uL::synapse0x2cc7ce0() {
   return (neuron0x2ca7130()*-0.346324);
}

double NNfunction_sg_uL::synapse0x2cc7d20() {
   return (neuron0x2ca7470()*0.0331583);
}

double NNfunction_sg_uL::synapse0x2cc7d60() {
   return (neuron0x2ca77b0()*0.319604);
}

double NNfunction_sg_uL::synapse0x2cc7da0() {
   return (neuron0x2ca7af0()*-0.0358542);
}

double NNfunction_sg_uL::synapse0x2cc7de0() {
   return (neuron0x2ca7e30()*-0.0946798);
}

double NNfunction_sg_uL::synapse0x2cc7660() {
   return (neuron0x2ca8170()*0.365806);
}

double NNfunction_sg_uL::synapse0x2cc76a0() {
   return (neuron0x2ca86d0()*-0.0618842);
}

double NNfunction_sg_uL::synapse0x2cc7f30() {
   return (neuron0x2ca88f0()*0.525924);
}

double NNfunction_sg_uL::synapse0x2cc7f70() {
   return (neuron0x2ca8c30()*0.052974);
}

double NNfunction_sg_uL::synapse0x2cc7fb0() {
   return (neuron0x2ca8f70()*-0.0648736);
}

double NNfunction_sg_uL::synapse0x2cc7ff0() {
   return (neuron0x2ca92b0()*-0.487171);
}

double NNfunction_sg_uL::synapse0x2cc8030() {
   return (neuron0x2ca95f0()*-0.356853);
}

double NNfunction_sg_uL::synapse0x2cc8070() {
   return (neuron0x2ca9930()*0.597922);
}

double NNfunction_sg_uL::synapse0x2cc83f0() {
   return (neuron0x2ca4e00()*-0.148466);
}

double NNfunction_sg_uL::synapse0x2cc8430() {
   return (neuron0x2ca50b0()*0.0495871);
}

double NNfunction_sg_uL::synapse0x2cc8470() {
   return (neuron0x2ca53f0()*0.191631);
}

double NNfunction_sg_uL::synapse0x2cc84b0() {
   return (neuron0x2ca5730()*-0.363481);
}

double NNfunction_sg_uL::synapse0x2cc84f0() {
   return (neuron0x2ca5a70()*-0.144846);
}

double NNfunction_sg_uL::synapse0x2cc8530() {
   return (neuron0x2ca5db0()*0.277333);
}

double NNfunction_sg_uL::synapse0x2cc8570() {
   return (neuron0x2ca60f0()*0.0534341);
}

double NNfunction_sg_uL::synapse0x2cc85b0() {
   return (neuron0x2ca6430()*0.521634);
}

double NNfunction_sg_uL::synapse0x2cc85f0() {
   return (neuron0x2ca6770()*0.0969768);
}

double NNfunction_sg_uL::synapse0x2cc8630() {
   return (neuron0x2ca6ab0()*-0.270702);
}

double NNfunction_sg_uL::synapse0x2cc8670() {
   return (neuron0x2ca6df0()*0.371939);
}

double NNfunction_sg_uL::synapse0x2cc86b0() {
   return (neuron0x2ca7130()*-0.0260508);
}

double NNfunction_sg_uL::synapse0x2cc86f0() {
   return (neuron0x2ca7470()*0.515375);
}

double NNfunction_sg_uL::synapse0x2cc8730() {
   return (neuron0x2ca77b0()*0.797881);
}

double NNfunction_sg_uL::synapse0x2cc8770() {
   return (neuron0x2ca7af0()*-0.153019);
}

double NNfunction_sg_uL::synapse0x2cc87b0() {
   return (neuron0x2ca7e30()*-0.125344);
}

double NNfunction_sg_uL::synapse0x2cc8240() {
   return (neuron0x2ca8170()*0.0805938);
}

double NNfunction_sg_uL::synapse0x2cc8280() {
   return (neuron0x2ca86d0()*-0.0439724);
}

double NNfunction_sg_uL::synapse0x2cc8900() {
   return (neuron0x2ca88f0()*0.225138);
}

double NNfunction_sg_uL::synapse0x2cc8940() {
   return (neuron0x2ca8c30()*0.318717);
}

double NNfunction_sg_uL::synapse0x2cc8980() {
   return (neuron0x2ca8f70()*-0.356427);
}

double NNfunction_sg_uL::synapse0x2cc89c0() {
   return (neuron0x2ca92b0()*-0.165662);
}

double NNfunction_sg_uL::synapse0x2cc8a00() {
   return (neuron0x2ca95f0()*-0.4808);
}

double NNfunction_sg_uL::synapse0x2cc8a40() {
   return (neuron0x2ca9930()*0.325629);
}

double NNfunction_sg_uL::synapse0x2cc8dc0() {
   return (neuron0x2ca4e00()*0.0356869);
}

double NNfunction_sg_uL::synapse0x2cc8e00() {
   return (neuron0x2ca50b0()*0.0232989);
}

double NNfunction_sg_uL::synapse0x2cc8e40() {
   return (neuron0x2ca53f0()*-0.103197);
}

double NNfunction_sg_uL::synapse0x2cc8e80() {
   return (neuron0x2ca5730()*-0.0998513);
}

double NNfunction_sg_uL::synapse0x2cc8ec0() {
   return (neuron0x2ca5a70()*0.00516803);
}

double NNfunction_sg_uL::synapse0x2cc8f00() {
   return (neuron0x2ca5db0()*0.0477535);
}

double NNfunction_sg_uL::synapse0x2cc8f40() {
   return (neuron0x2ca60f0()*0.101881);
}

double NNfunction_sg_uL::synapse0x2cc8f80() {
   return (neuron0x2ca6430()*-0.0250969);
}

double NNfunction_sg_uL::synapse0x2cc8fc0() {
   return (neuron0x2ca6770()*0.00760462);
}

double NNfunction_sg_uL::synapse0x2cc9000() {
   return (neuron0x2ca6ab0()*0.0379213);
}

double NNfunction_sg_uL::synapse0x2cc9040() {
   return (neuron0x2ca6df0()*-0.0148064);
}

double NNfunction_sg_uL::synapse0x2cc9080() {
   return (neuron0x2ca7130()*-0.393148);
}

double NNfunction_sg_uL::synapse0x2cc90c0() {
   return (neuron0x2ca7470()*-0.583673);
}

double NNfunction_sg_uL::synapse0x2cc9100() {
   return (neuron0x2ca77b0()*0.104629);
}

double NNfunction_sg_uL::synapse0x2cc9140() {
   return (neuron0x2ca7af0()*-0.329601);
}

double NNfunction_sg_uL::synapse0x2cc9180() {
   return (neuron0x2ca7e30()*-0.187134);
}

double NNfunction_sg_uL::synapse0x2cc8c10() {
   return (neuron0x2ca8170()*0.0418753);
}

double NNfunction_sg_uL::synapse0x2cc8c50() {
   return (neuron0x2ca86d0()*-0.184832);
}

double NNfunction_sg_uL::synapse0x2cb9780() {
   return (neuron0x2ca88f0()*-0.143527);
}

double NNfunction_sg_uL::synapse0x2cb97c0() {
   return (neuron0x2ca8c30()*0.00881116);
}

double NNfunction_sg_uL::synapse0x2cb9800() {
   return (neuron0x2ca8f70()*-0.020251);
}

double NNfunction_sg_uL::synapse0x2cb9840() {
   return (neuron0x2ca92b0()*0.0229055);
}

double NNfunction_sg_uL::synapse0x2cb9880() {
   return (neuron0x2ca95f0()*0.0506581);
}

double NNfunction_sg_uL::synapse0x2cb98c0() {
   return (neuron0x2ca9930()*0.0297811);
}

double NNfunction_sg_uL::synapse0x2cb9c40() {
   return (neuron0x2ca4e00()*-0.403349);
}

double NNfunction_sg_uL::synapse0x2cb9c80() {
   return (neuron0x2ca50b0()*-0.439772);
}

double NNfunction_sg_uL::synapse0x2cb9cc0() {
   return (neuron0x2ca53f0()*-0.377957);
}

double NNfunction_sg_uL::synapse0x2cb9d00() {
   return (neuron0x2ca5730()*-0.293023);
}

double NNfunction_sg_uL::synapse0x2cb9d40() {
   return (neuron0x2ca5a70()*-0.202839);
}

double NNfunction_sg_uL::synapse0x2cb9d80() {
   return (neuron0x2ca5db0()*0.22211);
}

double NNfunction_sg_uL::synapse0x2cb9dc0() {
   return (neuron0x2ca60f0()*-0.364857);
}

double NNfunction_sg_uL::synapse0x2cb9e00() {
   return (neuron0x2ca6430()*0.0613807);
}

double NNfunction_sg_uL::synapse0x2cb9e40() {
   return (neuron0x2ca6770()*0.161785);
}

double NNfunction_sg_uL::synapse0x2cb9e80() {
   return (neuron0x2ca6ab0()*-0.191938);
}

double NNfunction_sg_uL::synapse0x2cb9ec0() {
   return (neuron0x2ca6df0()*-0.147523);
}

double NNfunction_sg_uL::synapse0x2cb9f00() {
   return (neuron0x2ca7130()*0.297006);
}

double NNfunction_sg_uL::synapse0x2cb9f40() {
   return (neuron0x2ca7470()*-0.0884609);
}

double NNfunction_sg_uL::synapse0x2cb9f80() {
   return (neuron0x2ca77b0()*-0.739781);
}

double NNfunction_sg_uL::synapse0x2cb9fc0() {
   return (neuron0x2ca7af0()*0.133079);
}

double NNfunction_sg_uL::synapse0x2cba000() {
   return (neuron0x2ca7e30()*0.11489);
}

double NNfunction_sg_uL::synapse0x2cb9a90() {
   return (neuron0x2ca8170()*-0.312819);
}

double NNfunction_sg_uL::synapse0x2cb9ad0() {
   return (neuron0x2ca86d0()*0.154755);
}

double NNfunction_sg_uL::synapse0x2cba150() {
   return (neuron0x2ca88f0()*0.0808885);
}

double NNfunction_sg_uL::synapse0x2cba190() {
   return (neuron0x2ca8c30()*0.178403);
}

double NNfunction_sg_uL::synapse0x2cba1d0() {
   return (neuron0x2ca8f70()*-0.0231093);
}

double NNfunction_sg_uL::synapse0x2cba210() {
   return (neuron0x2ca92b0()*0.3919);
}

double NNfunction_sg_uL::synapse0x2cba250() {
   return (neuron0x2ca95f0()*-0.428949);
}

double NNfunction_sg_uL::synapse0x2cba290() {
   return (neuron0x2ca9930()*0.0175907);
}

double NNfunction_sg_uL::synapse0x2cba610() {
   return (neuron0x2ca4e00()*-0.0103422);
}

double NNfunction_sg_uL::synapse0x2cba650() {
   return (neuron0x2ca50b0()*0.0125404);
}

double NNfunction_sg_uL::synapse0x2cba690() {
   return (neuron0x2ca53f0()*0.0731478);
}

double NNfunction_sg_uL::synapse0x2cba6d0() {
   return (neuron0x2ca5730()*-2.76721);
}

double NNfunction_sg_uL::synapse0x2cba710() {
   return (neuron0x2ca5a70()*-0.0222863);
}

double NNfunction_sg_uL::synapse0x2cba750() {
   return (neuron0x2ca5db0()*-0.0367717);
}

double NNfunction_sg_uL::synapse0x2cba790() {
   return (neuron0x2ca60f0()*-0.0202577);
}

double NNfunction_sg_uL::synapse0x2cba7d0() {
   return (neuron0x2ca6430()*-0.0318357);
}

double NNfunction_sg_uL::synapse0x2cba810() {
   return (neuron0x2ca6770()*-0.0396658);
}

double NNfunction_sg_uL::synapse0x2cba850() {
   return (neuron0x2ca6ab0()*-0.0132363);
}

double NNfunction_sg_uL::synapse0x2cba890() {
   return (neuron0x2ca6df0()*-0.0186258);
}

double NNfunction_sg_uL::synapse0x2cba8d0() {
   return (neuron0x2ca7130()*2.03384);
}

double NNfunction_sg_uL::synapse0x2cba910() {
   return (neuron0x2ca7470()*-0.0436884);
}

double NNfunction_sg_uL::synapse0x2cba950() {
   return (neuron0x2ca77b0()*0.00239743);
}

double NNfunction_sg_uL::synapse0x2cba990() {
   return (neuron0x2ca7af0()*-0.0663855);
}

double NNfunction_sg_uL::synapse0x2cba9d0() {
   return (neuron0x2ca7e30()*-0.017943);
}

double NNfunction_sg_uL::synapse0x2cba460() {
   return (neuron0x2ca8170()*0.0232502);
}

double NNfunction_sg_uL::synapse0x2cba4a0() {
   return (neuron0x2ca86d0()*-0.0663755);
}

double NNfunction_sg_uL::synapse0x2cbab20() {
   return (neuron0x2ca88f0()*-0.0268993);
}

double NNfunction_sg_uL::synapse0x2cbab60() {
   return (neuron0x2ca8c30()*0.00236564);
}

double NNfunction_sg_uL::synapse0x2cbaba0() {
   return (neuron0x2ca8f70()*-0.000214098);
}

double NNfunction_sg_uL::synapse0x2cbabe0() {
   return (neuron0x2ca92b0()*-0.0105676);
}

double NNfunction_sg_uL::synapse0x2cbac20() {
   return (neuron0x2ca95f0()*0.0227992);
}

double NNfunction_sg_uL::synapse0x2cbac60() {
   return (neuron0x2ca9930()*-0.018595);
}

double NNfunction_sg_uL::synapse0x2cbafe0() {
   return (neuron0x2ca4e00()*0.499207);
}

double NNfunction_sg_uL::synapse0x2cbb020() {
   return (neuron0x2ca50b0()*0.226467);
}

double NNfunction_sg_uL::synapse0x2cbb060() {
   return (neuron0x2ca53f0()*-0.206052);
}

double NNfunction_sg_uL::synapse0x2cbb0a0() {
   return (neuron0x2ca5730()*-0.477203);
}

double NNfunction_sg_uL::synapse0x2cbb0e0() {
   return (neuron0x2ca5a70()*0.2021);
}

double NNfunction_sg_uL::synapse0x2cbb120() {
   return (neuron0x2ca5db0()*0.170969);
}

double NNfunction_sg_uL::synapse0x2cbb160() {
   return (neuron0x2ca60f0()*0.150336);
}

double NNfunction_sg_uL::synapse0x2cbb1a0() {
   return (neuron0x2ca6430()*0.23207);
}

double NNfunction_sg_uL::synapse0x2cbb1e0() {
   return (neuron0x2ca6770()*0.160813);
}

double NNfunction_sg_uL::synapse0x2cbb220() {
   return (neuron0x2ca6ab0()*0.390513);
}

double NNfunction_sg_uL::synapse0x2cbb260() {
   return (neuron0x2ca6df0()*-0.34537);
}

double NNfunction_sg_uL::synapse0x2cbb2a0() {
   return (neuron0x2ca7130()*-0.179429);
}

double NNfunction_sg_uL::synapse0x2cbb2e0() {
   return (neuron0x2ca7470()*-0.425601);
}

double NNfunction_sg_uL::synapse0x2cbb320() {
   return (neuron0x2ca77b0()*0.363338);
}

double NNfunction_sg_uL::synapse0x2cbb360() {
   return (neuron0x2ca7af0()*0.0439586);
}

double NNfunction_sg_uL::synapse0x2cbb3a0() {
   return (neuron0x2ca7e30()*-0.319337);
}

double NNfunction_sg_uL::synapse0x2cbae30() {
   return (neuron0x2ca8170()*-0.25212);
}

double NNfunction_sg_uL::synapse0x2cbae70() {
   return (neuron0x2ca86d0()*0.160725);
}

double NNfunction_sg_uL::synapse0x2cbb4f0() {
   return (neuron0x2ca88f0()*-0.25325);
}

double NNfunction_sg_uL::synapse0x2cbb530() {
   return (neuron0x2ca8c30()*0.0711291);
}

double NNfunction_sg_uL::synapse0x2cbb570() {
   return (neuron0x2ca8f70()*-0.198924);
}

double NNfunction_sg_uL::synapse0x2cbb5b0() {
   return (neuron0x2ca92b0()*0.198353);
}

double NNfunction_sg_uL::synapse0x2cbb5f0() {
   return (neuron0x2ca95f0()*0.0949913);
}

double NNfunction_sg_uL::synapse0x2cbb630() {
   return (neuron0x2ca9930()*-0.00515805);
}

double NNfunction_sg_uL::synapse0x2ccd500() {
   return (neuron0x2ca4e00()*0.0115033);
}

double NNfunction_sg_uL::synapse0x2ccd540() {
   return (neuron0x2ca50b0()*0.00780655);
}

double NNfunction_sg_uL::synapse0x2ccd580() {
   return (neuron0x2ca53f0()*0.00699183);
}

double NNfunction_sg_uL::synapse0x2ccd5c0() {
   return (neuron0x2ca5730()*-13.1916);
}

double NNfunction_sg_uL::synapse0x2ccd600() {
   return (neuron0x2ca5a70()*-0.00218111);
}

double NNfunction_sg_uL::synapse0x2ccd640() {
   return (neuron0x2ca5db0()*-0.000533819);
}

double NNfunction_sg_uL::synapse0x2ccd680() {
   return (neuron0x2ca60f0()*-0.00233258);
}

double NNfunction_sg_uL::synapse0x2ccd6c0() {
   return (neuron0x2ca6430()*0.00500483);
}

double NNfunction_sg_uL::synapse0x2ccd700() {
   return (neuron0x2ca6770()*-0.00455845);
}

double NNfunction_sg_uL::synapse0x2ccd740() {
   return (neuron0x2ca6ab0()*0.000142099);
}

double NNfunction_sg_uL::synapse0x2ccd780() {
   return (neuron0x2ca6df0()*-0.00852105);
}

double NNfunction_sg_uL::synapse0x2ccd7c0() {
   return (neuron0x2ca7130()*0.127753);
}

double NNfunction_sg_uL::synapse0x2ccd800() {
   return (neuron0x2ca7470()*0.00408251);
}

double NNfunction_sg_uL::synapse0x2ccd840() {
   return (neuron0x2ca77b0()*-0.00557886);
}

double NNfunction_sg_uL::synapse0x2ccd880() {
   return (neuron0x2ca7af0()*-0.0039234);
}

double NNfunction_sg_uL::synapse0x2ccd8c0() {
   return (neuron0x2ca7e30()*0.00589234);
}

double NNfunction_sg_uL::synapse0x2cbb670() {
   return (neuron0x2ca8170()*-0.00235594);
}

double NNfunction_sg_uL::synapse0x2cbb6b0() {
   return (neuron0x2ca86d0()*0.00275338);
}

double NNfunction_sg_uL::synapse0x2ccda10() {
   return (neuron0x2ca88f0()*-0.00445574);
}

double NNfunction_sg_uL::synapse0x2ccda50() {
   return (neuron0x2ca8c30()*-0.0141571);
}

double NNfunction_sg_uL::synapse0x2ccda90() {
   return (neuron0x2ca8f70()*0.00789819);
}

double NNfunction_sg_uL::synapse0x2ccdad0() {
   return (neuron0x2ca92b0()*-0.00951884);
}

double NNfunction_sg_uL::synapse0x2ccdb10() {
   return (neuron0x2ca95f0()*0.00123391);
}

double NNfunction_sg_uL::synapse0x2ccdb50() {
   return (neuron0x2ca9930()*-9.69402e-05);
}

double NNfunction_sg_uL::synapse0x2ccded0() {
   return (neuron0x2ca4e00()*0.0223916);
}

double NNfunction_sg_uL::synapse0x2ccdf10() {
   return (neuron0x2ca50b0()*-0.0267285);
}

double NNfunction_sg_uL::synapse0x2ccdf50() {
   return (neuron0x2ca53f0()*-0.779174);
}

double NNfunction_sg_uL::synapse0x2ccdf90() {
   return (neuron0x2ca5730()*0.0174891);
}

double NNfunction_sg_uL::synapse0x2ccdfd0() {
   return (neuron0x2ca5a70()*0.0176649);
}

double NNfunction_sg_uL::synapse0x2cce010() {
   return (neuron0x2ca5db0()*0.0751079);
}

double NNfunction_sg_uL::synapse0x2cce050() {
   return (neuron0x2ca60f0()*0.0893996);
}

double NNfunction_sg_uL::synapse0x2cce090() {
   return (neuron0x2ca6430()*-0.045085);
}

double NNfunction_sg_uL::synapse0x2cce0d0() {
   return (neuron0x2ca6770()*-0.00214534);
}

double NNfunction_sg_uL::synapse0x2cce110() {
   return (neuron0x2ca6ab0()*-0.00715439);
}

double NNfunction_sg_uL::synapse0x2cce150() {
   return (neuron0x2ca6df0()*-0.0139421);
}

double NNfunction_sg_uL::synapse0x2cce190() {
   return (neuron0x2ca7130()*-0.391599);
}

double NNfunction_sg_uL::synapse0x2cce1d0() {
   return (neuron0x2ca7470()*0.192937);
}

double NNfunction_sg_uL::synapse0x2cce210() {
   return (neuron0x2ca77b0()*-0.0398248);
}

double NNfunction_sg_uL::synapse0x2cce250() {
   return (neuron0x2ca7af0()*-7.38699e-05);
}

double NNfunction_sg_uL::synapse0x2cce290() {
   return (neuron0x2ca7e30()*0.00576667);
}

double NNfunction_sg_uL::synapse0x2ccdd20() {
   return (neuron0x2ca8170()*0.0650639);
}

double NNfunction_sg_uL::synapse0x2ccdd60() {
   return (neuron0x2ca86d0()*-0.0184239);
}

double NNfunction_sg_uL::synapse0x2cce3e0() {
   return (neuron0x2ca88f0()*-0.00636711);
}

double NNfunction_sg_uL::synapse0x2cce420() {
   return (neuron0x2ca8c30()*-0.0616125);
}

double NNfunction_sg_uL::synapse0x2cce460() {
   return (neuron0x2ca8f70()*-0.0725441);
}

double NNfunction_sg_uL::synapse0x2cce4a0() {
   return (neuron0x2ca92b0()*-0.0124264);
}

double NNfunction_sg_uL::synapse0x2cce4e0() {
   return (neuron0x2ca95f0()*0.0395598);
}

double NNfunction_sg_uL::synapse0x2cce520() {
   return (neuron0x2ca9930()*-0.0302448);
}

double NNfunction_sg_uL::synapse0x2cce8a0() {
   return (neuron0x2ca4e00()*-0.169486);
}

double NNfunction_sg_uL::synapse0x2cce8e0() {
   return (neuron0x2ca50b0()*-0.633508);
}

double NNfunction_sg_uL::synapse0x2cce920() {
   return (neuron0x2ca53f0()*0.00104497);
}

double NNfunction_sg_uL::synapse0x2cce960() {
   return (neuron0x2ca5730()*-0.419359);
}

double NNfunction_sg_uL::synapse0x2cce9a0() {
   return (neuron0x2ca5a70()*0.0790305);
}

double NNfunction_sg_uL::synapse0x2cce9e0() {
   return (neuron0x2ca5db0()*-0.409898);
}

double NNfunction_sg_uL::synapse0x2ccea20() {
   return (neuron0x2ca60f0()*-0.0790796);
}

double NNfunction_sg_uL::synapse0x2ccea60() {
   return (neuron0x2ca6430()*0.23408);
}

double NNfunction_sg_uL::synapse0x2cceaa0() {
   return (neuron0x2ca6770()*0.0500003);
}

double NNfunction_sg_uL::synapse0x2cceae0() {
   return (neuron0x2ca6ab0()*0.266099);
}

double NNfunction_sg_uL::synapse0x2cceb20() {
   return (neuron0x2ca6df0()*0.224668);
}

double NNfunction_sg_uL::synapse0x2cceb60() {
   return (neuron0x2ca7130()*-0.0358622);
}

double NNfunction_sg_uL::synapse0x2cceba0() {
   return (neuron0x2ca7470()*0.236311);
}

double NNfunction_sg_uL::synapse0x2ccebe0() {
   return (neuron0x2ca77b0()*-0.0401781);
}

double NNfunction_sg_uL::synapse0x2ccec20() {
   return (neuron0x2ca7af0()*-0.491159);
}

double NNfunction_sg_uL::synapse0x2ccec60() {
   return (neuron0x2ca7e30()*0.198598);
}

double NNfunction_sg_uL::synapse0x2cce6f0() {
   return (neuron0x2ca8170()*0.0425105);
}

double NNfunction_sg_uL::synapse0x2cce730() {
   return (neuron0x2ca86d0()*0.0425638);
}

double NNfunction_sg_uL::synapse0x2ccedb0() {
   return (neuron0x2ca88f0()*-0.0670525);
}

double NNfunction_sg_uL::synapse0x2ccedf0() {
   return (neuron0x2ca8c30()*-0.320158);
}

double NNfunction_sg_uL::synapse0x2ccee30() {
   return (neuron0x2ca8f70()*0.582781);
}

double NNfunction_sg_uL::synapse0x2ccee70() {
   return (neuron0x2ca92b0()*0.205454);
}

double NNfunction_sg_uL::synapse0x2cceeb0() {
   return (neuron0x2ca95f0()*-0.287015);
}

double NNfunction_sg_uL::synapse0x2cceef0() {
   return (neuron0x2ca9930()*-0.133888);
}

double NNfunction_sg_uL::synapse0x2ccf270() {
   return (neuron0x2ca4e00()*0.0109829);
}

double NNfunction_sg_uL::synapse0x2ccf2b0() {
   return (neuron0x2ca50b0()*-0.560065);
}

double NNfunction_sg_uL::synapse0x2ccf2f0() {
   return (neuron0x2ca53f0()*-0.0796212);
}

double NNfunction_sg_uL::synapse0x2ccf330() {
   return (neuron0x2ca5730()*-0.0256995);
}

double NNfunction_sg_uL::synapse0x2ccf370() {
   return (neuron0x2ca5a70()*-0.099865);
}

double NNfunction_sg_uL::synapse0x2ccf3b0() {
   return (neuron0x2ca5db0()*-0.400287);
}

double NNfunction_sg_uL::synapse0x2ccf3f0() {
   return (neuron0x2ca60f0()*-0.193028);
}

double NNfunction_sg_uL::synapse0x2ccf430() {
   return (neuron0x2ca6430()*-0.225624);
}

double NNfunction_sg_uL::synapse0x2ccf470() {
   return (neuron0x2ca6770()*0.110861);
}

double NNfunction_sg_uL::synapse0x2ccf4b0() {
   return (neuron0x2ca6ab0()*0.0766237);
}

double NNfunction_sg_uL::synapse0x2ccf4f0() {
   return (neuron0x2ca6df0()*0.0477942);
}

double NNfunction_sg_uL::synapse0x2ccf530() {
   return (neuron0x2ca7130()*-0.382522);
}

double NNfunction_sg_uL::synapse0x2ccf570() {
   return (neuron0x2ca7470()*-0.00993367);
}

double NNfunction_sg_uL::synapse0x2ccf5b0() {
   return (neuron0x2ca77b0()*0.541031);
}

double NNfunction_sg_uL::synapse0x2ccf5f0() {
   return (neuron0x2ca7af0()*0.12172);
}

double NNfunction_sg_uL::synapse0x2ccf630() {
   return (neuron0x2ca7e30()*0.266121);
}

double NNfunction_sg_uL::synapse0x2ccf0c0() {
   return (neuron0x2ca8170()*0.362437);
}

double NNfunction_sg_uL::synapse0x2ccf100() {
   return (neuron0x2ca86d0()*0.783791);
}

double NNfunction_sg_uL::synapse0x2ccf780() {
   return (neuron0x2ca88f0()*0.418415);
}

double NNfunction_sg_uL::synapse0x2ccf7c0() {
   return (neuron0x2ca8c30()*0.0585326);
}

double NNfunction_sg_uL::synapse0x2ccf800() {
   return (neuron0x2ca8f70()*-0.140266);
}

double NNfunction_sg_uL::synapse0x2ccf840() {
   return (neuron0x2ca92b0()*-0.525257);
}

double NNfunction_sg_uL::synapse0x2ccf880() {
   return (neuron0x2ca95f0()*0.117689);
}

double NNfunction_sg_uL::synapse0x2ccf8c0() {
   return (neuron0x2ca9930()*-0.100837);
}

double NNfunction_sg_uL::synapse0x2a6f6f0() {
   return (neuron0x2ca9da0()*0.0129249);
}

double NNfunction_sg_uL::synapse0x2a6f730() {
   return (neuron0x2caa6f0()*0.237956);
}

double NNfunction_sg_uL::synapse0x2cac260() {
   return (neuron0x2cab1d0()*0.0949702);
}

double NNfunction_sg_uL::synapse0x2cac2a0() {
   return (neuron0x2caac70()*0.0709836);
}

double NNfunction_sg_uL::synapse0x2cadd40() {
   return (neuron0x2cabfb0()*0.201029);
}

double NNfunction_sg_uL::synapse0x2cadd80() {
   return (neuron0x2cada90()*-1.1746);
}

double NNfunction_sg_uL::synapse0x2caeb10() {
   return (neuron0x2cae860()*-0.61176);
}

double NNfunction_sg_uL::synapse0x2caeb50() {
   return (neuron0x2caf230()*-0.684315);
}

double NNfunction_sg_uL::synapse0x2caf4e0() {
   return (neuron0x2cafc00()*-0.566647);
}

double NNfunction_sg_uL::synapse0x2caf520() {
   return (neuron0x2cb06e0()*-0.364964);
}

double NNfunction_sg_uL::synapse0x2cafeb0() {
   return (neuron0x2cb10b0()*-0.53947);
}

double NNfunction_sg_uL::synapse0x2cafef0() {
   return (neuron0x2cae190()*0.527942);
}

double NNfunction_sg_uL::synapse0x2cb0990() {
   return (neuron0x2cb2c60()*-0.154456);
}

double NNfunction_sg_uL::synapse0x2cb09d0() {
   return (neuron0x2cb3630()*-0.737407);
}

double NNfunction_sg_uL::synapse0x2cb1360() {
   return (neuron0x2cb4000()*-0.421577);
}

double NNfunction_sg_uL::synapse0x2cb13a0() {
   return (neuron0x2cb49d0()*0.800553);
}

double NNfunction_sg_uL::synapse0x2cae440() {
   return (neuron0x2cb67e0()*-0.28503);
}

double NNfunction_sg_uL::synapse0x2cae480() {
   return (neuron0x2cb6ac0()*-0.479461);
}

double NNfunction_sg_uL::synapse0x2cb2f10() {
   return (neuron0x2cb7490()*-1.02209);
}

double NNfunction_sg_uL::synapse0x2cb2f50() {
   return (neuron0x2cb7e60()*-0.263587);
}

double NNfunction_sg_uL::synapse0x2cb38e0() {
   return (neuron0x2cb8830()*0.519595);
}

double NNfunction_sg_uL::synapse0x2cb3920() {
   return (neuron0x2cb9200()*-1.50591);
}

double NNfunction_sg_uL::synapse0x2cb42b0() {
   return (neuron0x2cb1d50()*-0.350654);
}

double NNfunction_sg_uL::synapse0x2cb42f0() {
   return (neuron0x2cb2720()*1.0526);
}

double NNfunction_sg_uL::synapse0x2cb4c80() {
   return (neuron0x2cbbf90()*-0.151008);
}

double NNfunction_sg_uL::synapse0x2cb4cc0() {
   return (neuron0x2cbc960()*-0.0646162);
}

double NNfunction_sg_uL::synapse0x2ca7d10() {
   return (neuron0x2cbd330()*-0.618918);
}

double NNfunction_sg_uL::synapse0x2ca7d50() {
   return (neuron0x2cbdd00()*-0.158182);
}

double NNfunction_sg_uL::synapse0x2cb6d70() {
   return (neuron0x2cbe6d0()*1.34176);
}

double NNfunction_sg_uL::synapse0x2cb6db0() {
   return (neuron0x2cbf0a0()*-0.77539);
}

double NNfunction_sg_uL::synapse0x2cb7740() {
   return (neuron0x2cbfa70()*0.0869838);
}

double NNfunction_sg_uL::synapse0x2cb7780() {
   return (neuron0x2cc0440()*-0.10703);
}

double NNfunction_sg_uL::synapse0x2cb8110() {
   return (neuron0x2cb64d0()*-1.0523);
}

double NNfunction_sg_uL::synapse0x2cb8150() {
   return (neuron0x2cc3020()*-0.936964);
}

double NNfunction_sg_uL::synapse0x2cb8ae0() {
   return (neuron0x2cc39f0()*-0.321902);
}

double NNfunction_sg_uL::synapse0x2cb8b20() {
   return (neuron0x2cc43c0()*-0.330857);
}

double NNfunction_sg_uL::synapse0x2cb94b0() {
   return (neuron0x2cc4d90()*0.235305);
}

double NNfunction_sg_uL::synapse0x2cb94f0() {
   return (neuron0x2cc5760()*-0.306972);
}

double NNfunction_sg_uL::synapse0x2cb2000() {
   return (neuron0x2cc6130()*1.20772);
}

double NNfunction_sg_uL::synapse0x2cb2040() {
   return (neuron0x2cc6b00()*-0.183895);
}

double NNfunction_sg_uL::synapse0x2cbb8b0() {
   return (neuron0x2cc74d0()*0.0467723);
}

double NNfunction_sg_uL::synapse0x2cbb8f0() {
   return (neuron0x2cc80b0()*0.0825057);
}

double NNfunction_sg_uL::synapse0x2cbc240() {
   return (neuron0x2cc8a80()*-0.213536);
}

double NNfunction_sg_uL::synapse0x2cbc280() {
   return (neuron0x2cb9900()*0.313902);
}

double NNfunction_sg_uL::synapse0x2cbcc10() {
   return (neuron0x2cba2d0()*0.48999);
}

double NNfunction_sg_uL::synapse0x2cbcc50() {
   return (neuron0x2cbaca0()*0.293656);
}

double NNfunction_sg_uL::synapse0x2cbd5e0() {
   return (neuron0x2ccd2e0()*0.579014);
}

double NNfunction_sg_uL::synapse0x2cbd620() {
   return (neuron0x2ccdb90()*-1.30701);
}

double NNfunction_sg_uL::synapse0x2cbdfb0() {
   return (neuron0x2cce560()*0.104362);
}

double NNfunction_sg_uL::synapse0x2cbdff0() {
   return (neuron0x2ccef30()*0.0447448);
}

double NNfunction_sg_uL::synapse0x2cc06f0() {
   return (neuron0x2ca9da0()*-0.0658416);
}

double NNfunction_sg_uL::synapse0x2cc0730() {
   return (neuron0x2caa6f0()*0.0323335);
}

double NNfunction_sg_uL::synapse0x2cb5cb0() {
   return (neuron0x2cab1d0()*0.017937);
}

double NNfunction_sg_uL::synapse0x2cb5cf0() {
   return (neuron0x2caac70()*0.0615432);
}

double NNfunction_sg_uL::synapse0x2cc32d0() {
   return (neuron0x2cabfb0()*0.0577439);
}

double NNfunction_sg_uL::synapse0x2cc3310() {
   return (neuron0x2cada90()*-0.512693);
}

double NNfunction_sg_uL::synapse0x2cc3ca0() {
   return (neuron0x2cae860()*-0.699401);
}

double NNfunction_sg_uL::synapse0x2cc3ce0() {
   return (neuron0x2caf230()*-0.538391);
}

double NNfunction_sg_uL::synapse0x2cc4670() {
   return (neuron0x2cafc00()*-0.307669);
}

double NNfunction_sg_uL::synapse0x2cc46b0() {
   return (neuron0x2cb06e0()*-0.121173);
}

double NNfunction_sg_uL::synapse0x2cc5040() {
   return (neuron0x2cb10b0()*0.12134);
}

double NNfunction_sg_uL::synapse0x2cc5080() {
   return (neuron0x2cae190()*0.056206);
}

double NNfunction_sg_uL::synapse0x2cc5a10() {
   return (neuron0x2cb2c60()*-0.153861);
}

double NNfunction_sg_uL::synapse0x2cc5a50() {
   return (neuron0x2cb3630()*0.176477);
}

double NNfunction_sg_uL::synapse0x2cc63e0() {
   return (neuron0x2cb4000()*-0.128622);
}

double NNfunction_sg_uL::synapse0x2cc6420() {
   return (neuron0x2cb49d0()*0.443838);
}

double NNfunction_sg_uL::synapse0x2cc6db0() {
   return (neuron0x2cb67e0()*-0.22848);
}

double NNfunction_sg_uL::synapse0x2cc6df0() {
   return (neuron0x2cb6ac0()*1.43838);
}

double NNfunction_sg_uL::synapse0x2cc7780() {
   return (neuron0x2cb7490()*-0.627218);
}

double NNfunction_sg_uL::synapse0x2cc77c0() {
   return (neuron0x2cb7e60()*0.00179191);
}

double NNfunction_sg_uL::synapse0x2cc8360() {
   return (neuron0x2cb8830()*0.367651);
}

double NNfunction_sg_uL::synapse0x2cc83a0() {
   return (neuron0x2cb9200()*-0.694743);
}

double NNfunction_sg_uL::synapse0x2cc8d30() {
   return (neuron0x2cb1d50()*-0.134212);
}

double NNfunction_sg_uL::synapse0x2cc8d70() {
   return (neuron0x2cb2720()*0.363889);
}

double NNfunction_sg_uL::synapse0x2cb9bb0() {
   return (neuron0x2cbbf90()*0.098285);
}

double NNfunction_sg_uL::synapse0x2cb9bf0() {
   return (neuron0x2cbc960()*0.156645);
}

double NNfunction_sg_uL::synapse0x2cba580() {
   return (neuron0x2cbd330()*-0.070723);
}

double NNfunction_sg_uL::synapse0x2cba5c0() {
   return (neuron0x2cbdd00()*-0.0208305);
}

double NNfunction_sg_uL::synapse0x2cbaf50() {
   return (neuron0x2cbe6d0()*0.514192);
}

double NNfunction_sg_uL::synapse0x2cbaf90() {
   return (neuron0x2cbf0a0()*-0.56298);
}

double NNfunction_sg_uL::synapse0x2ccd470() {
   return (neuron0x2cbfa70()*0.0721619);
}

double NNfunction_sg_uL::synapse0x2ccd4b0() {
   return (neuron0x2cc0440()*0.0352104);
}

double NNfunction_sg_uL::synapse0x2ccde40() {
   return (neuron0x2cb64d0()*-0.248941);
}

double NNfunction_sg_uL::synapse0x2ccde80() {
   return (neuron0x2cc3020()*-0.593912);
}

double NNfunction_sg_uL::synapse0x2cce810() {
   return (neuron0x2cc39f0()*-0.158427);
}

double NNfunction_sg_uL::synapse0x2cce850() {
   return (neuron0x2cc43c0()*-0.0442051);
}

double NNfunction_sg_uL::synapse0x2ccf1e0() {
   return (neuron0x2cc4d90()*1.28379);
}

double NNfunction_sg_uL::synapse0x2ccf220() {
   return (neuron0x2cc5760()*-0.0222414);
}

double NNfunction_sg_uL::synapse0x2caa050() {
   return (neuron0x2cc6130()*1.06016);
}

double NNfunction_sg_uL::synapse0x2caa090() {
   return (neuron0x2cc6b00()*-0.0936754);
}

double NNfunction_sg_uL::synapse0x2cbe980() {
   return (neuron0x2cc74d0()*-0.0658762);
}

double NNfunction_sg_uL::synapse0x2cbe9c0() {
   return (neuron0x2cc80b0()*0.0347524);
}

double NNfunction_sg_uL::synapse0x2ccf900() {
   return (neuron0x2cc8a80()*-0.0175772);
}

double NNfunction_sg_uL::synapse0x2ccf940() {
   return (neuron0x2cb9900()*0.0836827);
}

double NNfunction_sg_uL::synapse0x2ccf980() {
   return (neuron0x2cba2d0()*0.0535524);
}

double NNfunction_sg_uL::synapse0x2ccf9c0() {
   return (neuron0x2cbaca0()*0.0540202);
}

double NNfunction_sg_uL::synapse0x2cd6870() {
   return (neuron0x2ccd2e0()*1.1872);
}

double NNfunction_sg_uL::synapse0x2cd68b0() {
   return (neuron0x2ccdb90()*-0.758843);
}

double NNfunction_sg_uL::synapse0x2cd68f0() {
   return (neuron0x2cce560()*-0.0245252);
}

double NNfunction_sg_uL::synapse0x2cd6930() {
   return (neuron0x2ccef30()*-0.014312);
}

double NNfunction_sg_uL::synapse0x2cd6cb0() {
   return (neuron0x2ca9da0()*-0.54627);
}

double NNfunction_sg_uL::synapse0x2cd6cf0() {
   return (neuron0x2caa6f0()*-0.238579);
}

double NNfunction_sg_uL::synapse0x2cd6d30() {
   return (neuron0x2cab1d0()*0.0470696);
}

double NNfunction_sg_uL::synapse0x2cd6d70() {
   return (neuron0x2caac70()*-0.527859);
}

double NNfunction_sg_uL::synapse0x2cd6db0() {
   return (neuron0x2cabfb0()*-0.35434);
}

double NNfunction_sg_uL::synapse0x2cd6df0() {
   return (neuron0x2cada90()*-0.895665);
}

double NNfunction_sg_uL::synapse0x2cd6e30() {
   return (neuron0x2cae860()*-0.643413);
}

double NNfunction_sg_uL::synapse0x2cd6e70() {
   return (neuron0x2caf230()*-0.545946);
}

double NNfunction_sg_uL::synapse0x2cd6eb0() {
   return (neuron0x2cafc00()*-0.954979);
}

double NNfunction_sg_uL::synapse0x2cd6ef0() {
   return (neuron0x2cb06e0()*-0.615335);
}

double NNfunction_sg_uL::synapse0x2cd6f30() {
   return (neuron0x2cb10b0()*-0.319512);
}

double NNfunction_sg_uL::synapse0x2cd6f70() {
   return (neuron0x2cae190()*0.0252088);
}

double NNfunction_sg_uL::synapse0x2cd6fb0() {
   return (neuron0x2cb2c60()*-0.0386539);
}

double NNfunction_sg_uL::synapse0x2cd6ff0() {
   return (neuron0x2cb3630()*0.431821);
}

double NNfunction_sg_uL::synapse0x2cd7030() {
   return (neuron0x2cb4000()*0.0407576);
}

double NNfunction_sg_uL::synapse0x2cd7070() {
   return (neuron0x2cb49d0()*1.09398);
}

double NNfunction_sg_uL::synapse0x2cd6b00() {
   return (neuron0x2cb67e0()*-0.353915);
}

double NNfunction_sg_uL::synapse0x2cd6b40() {
   return (neuron0x2cb6ac0()*1.07399);
}

double NNfunction_sg_uL::synapse0x2cd71c0() {
   return (neuron0x2cb7490()*-0.708832);
}

double NNfunction_sg_uL::synapse0x2cd7200() {
   return (neuron0x2cb7e60()*0.486136);
}

double NNfunction_sg_uL::synapse0x2cd7240() {
   return (neuron0x2cb8830()*0.231899);
}

double NNfunction_sg_uL::synapse0x2cd7280() {
   return (neuron0x2cb9200()*-0.789207);
}

double NNfunction_sg_uL::synapse0x2cd72c0() {
   return (neuron0x2cb1d50()*-0.773797);
}

double NNfunction_sg_uL::synapse0x2cd7300() {
   return (neuron0x2cb2720()*-0.0420874);
}

double NNfunction_sg_uL::synapse0x2cd7340() {
   return (neuron0x2cbbf90()*-0.0282221);
}

double NNfunction_sg_uL::synapse0x2cd7380() {
   return (neuron0x2cbc960()*0.323845);
}

double NNfunction_sg_uL::synapse0x2cd73c0() {
   return (neuron0x2cbd330()*-0.119093);
}

double NNfunction_sg_uL::synapse0x2cd7400() {
   return (neuron0x2cbdd00()*-0.100927);
}

double NNfunction_sg_uL::synapse0x2cd7440() {
   return (neuron0x2cbe6d0()*-0.0215459);
}

double NNfunction_sg_uL::synapse0x2cd7480() {
   return (neuron0x2cbf0a0()*-0.299318);
}

double NNfunction_sg_uL::synapse0x2cd74c0() {
   return (neuron0x2cbfa70()*0.128951);
}

double NNfunction_sg_uL::synapse0x2cd7500() {
   return (neuron0x2cc0440()*0.218789);
}

double NNfunction_sg_uL::synapse0x2cd70b0() {
   return (neuron0x2cb64d0()*-0.818422);
}

double NNfunction_sg_uL::synapse0x2cd70f0() {
   return (neuron0x2cc3020()*-0.037995);
}

double NNfunction_sg_uL::synapse0x2cd7130() {
   return (neuron0x2cc39f0()*-0.327215);
}

double NNfunction_sg_uL::synapse0x2cd7170() {
   return (neuron0x2cc43c0()*-0.42258);
}

double NNfunction_sg_uL::synapse0x2cd7750() {
   return (neuron0x2cc4d90()*0.038867);
}

double NNfunction_sg_uL::synapse0x2cd7790() {
   return (neuron0x2cc5760()*0.0100456);
}

double NNfunction_sg_uL::synapse0x2cd77d0() {
   return (neuron0x2cc6130()*0.60611);
}

double NNfunction_sg_uL::synapse0x2cd7810() {
   return (neuron0x2cc6b00()*-0.017);
}

double NNfunction_sg_uL::synapse0x2cd7850() {
   return (neuron0x2cc74d0()*-0.179746);
}

double NNfunction_sg_uL::synapse0x2cd7890() {
   return (neuron0x2cc80b0()*-0.345583);
}

double NNfunction_sg_uL::synapse0x2cd78d0() {
   return (neuron0x2cc8a80()*-0.897813);
}

double NNfunction_sg_uL::synapse0x2cd7910() {
   return (neuron0x2cb9900()*-0.175927);
}

double NNfunction_sg_uL::synapse0x2cd7950() {
   return (neuron0x2cba2d0()*-0.523225);
}

double NNfunction_sg_uL::synapse0x2cd7990() {
   return (neuron0x2cbaca0()*0.136179);
}

double NNfunction_sg_uL::synapse0x2cd79d0() {
   return (neuron0x2ccd2e0()*-0.0526848);
}

double NNfunction_sg_uL::synapse0x2cd7a10() {
   return (neuron0x2ccdb90()*-1.598);
}

double NNfunction_sg_uL::synapse0x2cd7a50() {
   return (neuron0x2cce560()*-0.546699);
}

double NNfunction_sg_uL::synapse0x2cd7a90() {
   return (neuron0x2ccef30()*-0.253619);
}

double NNfunction_sg_uL::synapse0x2cd7e10() {
   return (neuron0x2ca9da0()*-0.000913504);
}

double NNfunction_sg_uL::synapse0x2cd7e50() {
   return (neuron0x2caa6f0()*-0.0238565);
}

double NNfunction_sg_uL::synapse0x2cd7e90() {
   return (neuron0x2cab1d0()*-0.0221633);
}

double NNfunction_sg_uL::synapse0x2cd7ed0() {
   return (neuron0x2caac70()*-0.000589275);
}

double NNfunction_sg_uL::synapse0x2cd7f10() {
   return (neuron0x2cabfb0()*-0.0102589);
}

double NNfunction_sg_uL::synapse0x2cd7f50() {
   return (neuron0x2cada90()*0.232628);
}

double NNfunction_sg_uL::synapse0x2cd7f90() {
   return (neuron0x2cae860()*0.0176433);
}

double NNfunction_sg_uL::synapse0x2cd7fd0() {
   return (neuron0x2caf230()*-0.320306);
}

double NNfunction_sg_uL::synapse0x2cd8010() {
   return (neuron0x2cafc00()*0.134666);
}

double NNfunction_sg_uL::synapse0x2cd8050() {
   return (neuron0x2cb06e0()*0.0557155);
}

double NNfunction_sg_uL::synapse0x2cd8090() {
   return (neuron0x2cb10b0()*-0.00276181);
}

double NNfunction_sg_uL::synapse0x2cd80d0() {
   return (neuron0x2cae190()*-0.069018);
}

double NNfunction_sg_uL::synapse0x2cd8110() {
   return (neuron0x2cb2c60()*0.0435357);
}

double NNfunction_sg_uL::synapse0x2cd8150() {
   return (neuron0x2cb3630()*1.12579);
}

double NNfunction_sg_uL::synapse0x2cd8190() {
   return (neuron0x2cb4000()*-0.0268355);
}

double NNfunction_sg_uL::synapse0x2cd81d0() {
   return (neuron0x2cb49d0()*-0.103984);
}

double NNfunction_sg_uL::synapse0x2cd7c60() {
   return (neuron0x2cb67e0()*-1.68805);
}

double NNfunction_sg_uL::synapse0x2cd7ca0() {
   return (neuron0x2cb6ac0()*1.46505);
}

double NNfunction_sg_uL::synapse0x2cd8320() {
   return (neuron0x2cb7490()*0.29399);
}

double NNfunction_sg_uL::synapse0x2cd8360() {
   return (neuron0x2cb7e60()*0.0402726);
}

double NNfunction_sg_uL::synapse0x2cd83a0() {
   return (neuron0x2cb8830()*-0.0746627);
}

double NNfunction_sg_uL::synapse0x2cd83e0() {
   return (neuron0x2cb9200()*0.211284);
}

double NNfunction_sg_uL::synapse0x2cd8420() {
   return (neuron0x2cb1d50()*0.075106);
}

double NNfunction_sg_uL::synapse0x2cd8460() {
   return (neuron0x2cb2720()*-0.160486);
}

double NNfunction_sg_uL::synapse0x2cd84a0() {
   return (neuron0x2cbbf90()*0.00258283);
}

double NNfunction_sg_uL::synapse0x2cd84e0() {
   return (neuron0x2cbc960()*1.29157);
}

double NNfunction_sg_uL::synapse0x2cd8520() {
   return (neuron0x2cbd330()*0.0441788);
}

double NNfunction_sg_uL::synapse0x2cd8560() {
   return (neuron0x2cbdd00()*0.0168621);
}

double NNfunction_sg_uL::synapse0x2cd85a0() {
   return (neuron0x2cbe6d0()*-0.188398);
}

double NNfunction_sg_uL::synapse0x2cd85e0() {
   return (neuron0x2cbf0a0()*0.187645);
}

double NNfunction_sg_uL::synapse0x2cd8620() {
   return (neuron0x2cbfa70()*-0.0159057);
}

double NNfunction_sg_uL::synapse0x2cd8660() {
   return (neuron0x2cc0440()*0.0153847);
}

double NNfunction_sg_uL::synapse0x2cd8210() {
   return (neuron0x2cb64d0()*-2.58733);
}

double NNfunction_sg_uL::synapse0x2cd8250() {
   return (neuron0x2cc3020()*-0.767095);
}

double NNfunction_sg_uL::synapse0x2cd8290() {
   return (neuron0x2cc39f0()*0.057324);
}

double NNfunction_sg_uL::synapse0x2cd82d0() {
   return (neuron0x2cc43c0()*0.0540993);
}

double NNfunction_sg_uL::synapse0x2cd88b0() {
   return (neuron0x2cc4d90()*1.37267);
}

double NNfunction_sg_uL::synapse0x2cd88f0() {
   return (neuron0x2cc5760()*0.0441097);
}

double NNfunction_sg_uL::synapse0x2cd8930() {
   return (neuron0x2cc6130()*1.30291);
}

double NNfunction_sg_uL::synapse0x2cd8970() {
   return (neuron0x2cc6b00()*0.019548);
}

double NNfunction_sg_uL::synapse0x2cd89b0() {
   return (neuron0x2cc74d0()*0.00869775);
}

double NNfunction_sg_uL::synapse0x2cd89f0() {
   return (neuron0x2cc80b0()*-0.00802875);
}

double NNfunction_sg_uL::synapse0x2cd8a30() {
   return (neuron0x2cc8a80()*0.146382);
}

double NNfunction_sg_uL::synapse0x2cd8a70() {
   return (neuron0x2cb9900()*-0.0341913);
}

double NNfunction_sg_uL::synapse0x2cd8ab0() {
   return (neuron0x2cba2d0()*0.144546);
}

double NNfunction_sg_uL::synapse0x2cd8af0() {
   return (neuron0x2cbaca0()*-0.0361354);
}

double NNfunction_sg_uL::synapse0x2cd8b30() {
   return (neuron0x2ccd2e0()*1.41606);
}

double NNfunction_sg_uL::synapse0x2cd8b70() {
   return (neuron0x2ccdb90()*0.280335);
}

double NNfunction_sg_uL::synapse0x2cd8bb0() {
   return (neuron0x2cce560()*0.00401978);
}

double NNfunction_sg_uL::synapse0x2cd8bf0() {
   return (neuron0x2ccef30()*0.00511302);
}

double NNfunction_sg_uL::synapse0x2cd8f70() {
   return (neuron0x2ca9da0()*-0.331937);
}

double NNfunction_sg_uL::synapse0x2cd8fb0() {
   return (neuron0x2caa6f0()*-0.11912);
}

double NNfunction_sg_uL::synapse0x2cd8ff0() {
   return (neuron0x2cab1d0()*-0.188637);
}

double NNfunction_sg_uL::synapse0x2cd9030() {
   return (neuron0x2caac70()*0.280729);
}

double NNfunction_sg_uL::synapse0x2cd9070() {
   return (neuron0x2cabfb0()*0.108244);
}

double NNfunction_sg_uL::synapse0x2cd90b0() {
   return (neuron0x2cada90()*-0.70313);
}

double NNfunction_sg_uL::synapse0x2cd90f0() {
   return (neuron0x2cae860()*1.91927);
}

double NNfunction_sg_uL::synapse0x2cd9130() {
   return (neuron0x2caf230()*0.954341);
}

double NNfunction_sg_uL::synapse0x2cd9170() {
   return (neuron0x2cafc00()*-1.11678);
}

double NNfunction_sg_uL::synapse0x2cd91b0() {
   return (neuron0x2cb06e0()*0.249488);
}

double NNfunction_sg_uL::synapse0x2cd91f0() {
   return (neuron0x2cb10b0()*0.260031);
}

double NNfunction_sg_uL::synapse0x2cd9230() {
   return (neuron0x2cae190()*-0.426255);
}

double NNfunction_sg_uL::synapse0x2cd9270() {
   return (neuron0x2cb2c60()*-0.0884651);
}

double NNfunction_sg_uL::synapse0x2cd92b0() {
   return (neuron0x2cb3630()*-1.33653);
}

double NNfunction_sg_uL::synapse0x2cd92f0() {
   return (neuron0x2cb4000()*0.330331);
}

double NNfunction_sg_uL::synapse0x2cd9330() {
   return (neuron0x2cb49d0()*1.54865);
}

double NNfunction_sg_uL::synapse0x2cd8dc0() {
   return (neuron0x2cb67e0()*3.46144);
}

double NNfunction_sg_uL::synapse0x2cd8e00() {
   return (neuron0x2cb6ac0()*-4.11225);
}

double NNfunction_sg_uL::synapse0x2cd9480() {
   return (neuron0x2cb7490()*1.34861);
}

double NNfunction_sg_uL::synapse0x2cd94c0() {
   return (neuron0x2cb7e60()*0.444931);
}

double NNfunction_sg_uL::synapse0x2cd9500() {
   return (neuron0x2cb8830()*0.475223);
}

double NNfunction_sg_uL::synapse0x2cd9540() {
   return (neuron0x2cb9200()*1.37857);
}

double NNfunction_sg_uL::synapse0x2cd9580() {
   return (neuron0x2cb1d50()*-0.385265);
}

double NNfunction_sg_uL::synapse0x2cd95c0() {
   return (neuron0x2cb2720()*0.350176);
}

double NNfunction_sg_uL::synapse0x2cd9600() {
   return (neuron0x2cbbf90()*0.307206);
}

double NNfunction_sg_uL::synapse0x2cd9640() {
   return (neuron0x2cbc960()*-1.59718);
}

double NNfunction_sg_uL::synapse0x2cd9680() {
   return (neuron0x2cbd330()*0.0450321);
}

double NNfunction_sg_uL::synapse0x2cd96c0() {
   return (neuron0x2cbdd00()*0.0540475);
}

double NNfunction_sg_uL::synapse0x2cd9700() {
   return (neuron0x2cbe6d0()*-0.910523);
}

double NNfunction_sg_uL::synapse0x2cd9740() {
   return (neuron0x2cbf0a0()*-0.779778);
}

double NNfunction_sg_uL::synapse0x2cd9780() {
   return (neuron0x2cbfa70()*-0.0624554);
}

double NNfunction_sg_uL::synapse0x2cd97c0() {
   return (neuron0x2cc0440()*0.243777);
}

double NNfunction_sg_uL::synapse0x2cd9370() {
   return (neuron0x2cb64d0()*0.389478);
}

double NNfunction_sg_uL::synapse0x2cd93b0() {
   return (neuron0x2cc3020()*0.945321);
}

double NNfunction_sg_uL::synapse0x2cd93f0() {
   return (neuron0x2cc39f0()*-0.0311068);
}

double NNfunction_sg_uL::synapse0x2cd9430() {
   return (neuron0x2cc43c0()*0.543808);
}

double NNfunction_sg_uL::synapse0x2cd9a10() {
   return (neuron0x2cc4d90()*-2.05424);
}

double NNfunction_sg_uL::synapse0x2cd9a50() {
   return (neuron0x2cc5760()*0.632978);
}

double NNfunction_sg_uL::synapse0x2cd9a90() {
   return (neuron0x2cc6130()*-4.36762);
}

double NNfunction_sg_uL::synapse0x2cd9ad0() {
   return (neuron0x2cc6b00()*-0.184123);
}

double NNfunction_sg_uL::synapse0x2cd9b10() {
   return (neuron0x2cc74d0()*-0.0746728);
}

double NNfunction_sg_uL::synapse0x2cd9b50() {
   return (neuron0x2cc80b0()*-0.0279164);
}

double NNfunction_sg_uL::synapse0x2cd9b90() {
   return (neuron0x2cc8a80()*-0.161856);
}

double NNfunction_sg_uL::synapse0x2cd9bd0() {
   return (neuron0x2cb9900()*-0.165161);
}

double NNfunction_sg_uL::synapse0x2cd9c10() {
   return (neuron0x2cba2d0()*-1.96536);
}

double NNfunction_sg_uL::synapse0x2cd9c50() {
   return (neuron0x2cbaca0()*-0.187342);
}

double NNfunction_sg_uL::synapse0x2cd9c90() {
   return (neuron0x2ccd2e0()*-4.73836);
}

double NNfunction_sg_uL::synapse0x2cd9cd0() {
   return (neuron0x2ccdb90()*-1.32477);
}

double NNfunction_sg_uL::synapse0x2cd9d10() {
   return (neuron0x2cce560()*0.0438301);
}

double NNfunction_sg_uL::synapse0x2cd9d50() {
   return (neuron0x2ccef30()*-0.133561);
}

double NNfunction_sg_uL::synapse0x2cd9fb0() {
   return (neuron0x2cd6130()*-1.24618);
}

double NNfunction_sg_uL::synapse0x2cd9ff0() {
   return (neuron0x2cd64d0()*-2.41212);
}

double NNfunction_sg_uL::synapse0x2cda030() {
   return (neuron0x2cd6970()*-3.00329);
}

double NNfunction_sg_uL::synapse0x2cda070() {
   return (neuron0x2cd7ad0()*-8.12875);
}

double NNfunction_sg_uL::synapse0x2cda0b0() {
   return (neuron0x2cd8c30()*13.6742);
}

