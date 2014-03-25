#include "NNfunction_ss_sLuL.h"
#include <cmath>

double NNfunction_ss_sLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5334)/15.3281;
   input1 = (in1 - -0.616176)/1143.41;
   input2 = (in2 - 662.944)/623.544;
   input3 = (in3 - -51.7431)/825.429;
   input4 = (in4 - 1054.07)/948.903;
   input5 = (in5 - 885.536)/937.376;
   input6 = (in6 - 894.166)/938.343;
   input7 = (in7 - 915.506)/926.595;
   input8 = (in8 - 926.948)/976.894;
   input9 = (in9 - 897.576)/954.127;
   input10 = (in10 - 994.295)/960.567;
   input11 = (in11 - 459.996)/500.236;
   input12 = (in12 - 456.533)/497.699;
   input13 = (in13 - 501.387)/520.16;
   input14 = (in14 - 706.514)/803.458;
   input15 = (in15 - 707.317)/804.783;
   input16 = (in16 - 528.555)/553.012;
   input17 = (in17 - 769.229)/907.92;
   input18 = (in18 - 752.228)/904.863;
   input19 = (in19 - 807.594)/888.643;
   input20 = (in20 - -3.54447)/487.112;
   input21 = (in21 - 4.62145)/1161.59;
   input22 = (in22 - 1.47022)/1207.74;
   input23 = (in23 - -195.207)/595.988;
   switch(index) {
     case 0:
         return neuron0x163e4a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.5334)/15.3281;
   input1 = (input[1] - -0.616176)/1143.41;
   input2 = (input[2] - 662.944)/623.544;
   input3 = (input[3] - -51.7431)/825.429;
   input4 = (input[4] - 1054.07)/948.903;
   input5 = (input[5] - 885.536)/937.376;
   input6 = (input[6] - 894.166)/938.343;
   input7 = (input[7] - 915.506)/926.595;
   input8 = (input[8] - 926.948)/976.894;
   input9 = (input[9] - 897.576)/954.127;
   input10 = (input[10] - 994.295)/960.567;
   input11 = (input[11] - 459.996)/500.236;
   input12 = (input[12] - 456.533)/497.699;
   input13 = (input[13] - 501.387)/520.16;
   input14 = (input[14] - 706.514)/803.458;
   input15 = (input[15] - 707.317)/804.783;
   input16 = (input[16] - 528.555)/553.012;
   input17 = (input[17] - 769.229)/907.92;
   input18 = (input[18] - 752.228)/904.863;
   input19 = (input[19] - 807.594)/888.643;
   input20 = (input[20] - -3.54447)/487.112;
   input21 = (input[21] - 4.62145)/1161.59;
   input22 = (input[22] - 1.47022)/1207.74;
   input23 = (input[23] - -195.207)/595.988;
   switch(index) {
     case 0:
         return neuron0x163e4a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLuL::neuron0x160a560() {
   return input0;
}

double NNfunction_ss_sLuL::neuron0x160a8a0() {
   return input1;
}

double NNfunction_ss_sLuL::neuron0x160abe0() {
   return input2;
}

double NNfunction_ss_sLuL::neuron0x160af20() {
   return input3;
}

double NNfunction_ss_sLuL::neuron0x160b260() {
   return input4;
}

double NNfunction_ss_sLuL::neuron0x160b5a0() {
   return input5;
}

double NNfunction_ss_sLuL::neuron0x160b8e0() {
   return input6;
}

double NNfunction_ss_sLuL::neuron0x160bc20() {
   return input7;
}

double NNfunction_ss_sLuL::neuron0x160bf60() {
   return input8;
}

double NNfunction_ss_sLuL::neuron0x160c2a0() {
   return input9;
}

double NNfunction_ss_sLuL::neuron0x160c5e0() {
   return input10;
}

double NNfunction_ss_sLuL::neuron0x160c920() {
   return input11;
}

double NNfunction_ss_sLuL::neuron0x160cc60() {
   return input12;
}

double NNfunction_ss_sLuL::neuron0x160cfa0() {
   return input13;
}

double NNfunction_ss_sLuL::neuron0x160d2e0() {
   return input14;
}

double NNfunction_ss_sLuL::neuron0x160d620() {
   return input15;
}

double NNfunction_ss_sLuL::neuron0x160d960() {
   return input16;
}

double NNfunction_ss_sLuL::neuron0x160dec0() {
   return input17;
}

double NNfunction_ss_sLuL::neuron0x160e0e0() {
   return input18;
}

double NNfunction_ss_sLuL::neuron0x160e420() {
   return input19;
}

double NNfunction_ss_sLuL::neuron0x160e760() {
   return input20;
}

double NNfunction_ss_sLuL::neuron0x160eaa0() {
   return input21;
}

double NNfunction_ss_sLuL::neuron0x160ede0() {
   return input22;
}

double NNfunction_ss_sLuL::neuron0x160f120() {
   return input23;
}

double NNfunction_ss_sLuL::input0x160f5c0() {
   double input = 0.575747;
   input += synapse0x13ca3d0();
   input += synapse0x160a420();
   input += synapse0x160a460();
   input += synapse0x160f870();
   input += synapse0x160f8b0();
   input += synapse0x160f8f0();
   input += synapse0x160f930();
   input += synapse0x160f970();
   input += synapse0x160f9b0();
   input += synapse0x160f9f0();
   input += synapse0x160fa30();
   input += synapse0x160fa70();
   input += synapse0x160fab0();
   input += synapse0x160faf0();
   input += synapse0x160fb30();
   input += synapse0x160fb70();
   input += synapse0x160a390();
   input += synapse0x160a3d0();
   input += synapse0x13bbc70();
   input += synapse0x13bbcb0();
   input += synapse0x160fdd0();
   input += synapse0x160fe10();
   input += synapse0x160fe50();
   input += synapse0x160fe90();
   return input;
}

double NNfunction_ss_sLuL::neuron0x160f5c0() {
   double input = input0x160f5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x160fed0() {
   double input = 0.0399669;
   input += synapse0x1610210();
   input += synapse0x1610250();
   input += synapse0x1610290();
   input += synapse0x16102d0();
   input += synapse0x1610310();
   input += synapse0x1610350();
   input += synapse0x1610390();
   input += synapse0x16103d0();
   input += synapse0x1610410();
   input += synapse0x160fcc0();
   input += synapse0x160fd00();
   input += synapse0x160fd40();
   input += synapse0x160fd80();
   input += synapse0x1610660();
   input += synapse0x16106a0();
   input += synapse0x16106e0();
   input += synapse0x1610060();
   input += synapse0x16100a0();
   input += synapse0x1610830();
   input += synapse0x1610870();
   input += synapse0x16108b0();
   input += synapse0x16108f0();
   input += synapse0x1610930();
   input += synapse0x1610970();
   return input;
}

double NNfunction_ss_sLuL::neuron0x160fed0() {
   double input = input0x160fed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16109b0() {
   double input = 0.978898;
   input += synapse0x1610cf0();
   input += synapse0x1610d30();
   input += synapse0x1610d70();
   input += synapse0x1610db0();
   input += synapse0x1610df0();
   input += synapse0x1610e30();
   input += synapse0x1610e70();
   input += synapse0x1610eb0();
   input += synapse0x1610ef0();
   input += synapse0x1610f30();
   input += synapse0x1610f70();
   input += synapse0x1610fb0();
   input += synapse0x1610ff0();
   input += synapse0x1611030();
   input += synapse0x1611070();
   input += synapse0x16110b0();
   input += synapse0x1610b40();
   input += synapse0x1610b80();
   input += synapse0x13c9ac0();
   input += synapse0x13c9b00();
   input += synapse0x15f95f0();
   input += synapse0x15f9630();
   input += synapse0x15f9670();
   input += synapse0x160a4a0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16109b0() {
   double input = input0x16109b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x13ca240() {
   double input = -0.735376;
   input += synapse0x1610600();
   input += synapse0x160a4e0();
   input += synapse0x160a520();
   input += synapse0x1611200();
   input += synapse0x1611240();
   input += synapse0x1611280();
   input += synapse0x16112c0();
   input += synapse0x1611300();
   input += synapse0x1611340();
   input += synapse0x1611380();
   input += synapse0x16113c0();
   input += synapse0x1611400();
   input += synapse0x1611440();
   input += synapse0x1611480();
   input += synapse0x16114c0();
   input += synapse0x1611500();
   input += synapse0x1610450();
   input += synapse0x1610490();
   input += synapse0x1611650();
   input += synapse0x1611690();
   input += synapse0x16116d0();
   input += synapse0x1611710();
   input += synapse0x1611750();
   input += synapse0x1611790();
   return input;
}

double NNfunction_ss_sLuL::neuron0x13ca240() {
   double input = input0x13ca240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16117d0() {
   double input = -0.173491;
   input += synapse0x1611b10();
   input += synapse0x1611b50();
   input += synapse0x1611b90();
   input += synapse0x1611bd0();
   input += synapse0x1611c10();
   input += synapse0x1611c50();
   input += synapse0x1611c90();
   input += synapse0x1611cd0();
   input += synapse0x1611d10();
   input += synapse0x1611d50();
   input += synapse0x1611d90();
   input += synapse0x1611dd0();
   input += synapse0x1611e10();
   input += synapse0x1611e50();
   input += synapse0x1611e90();
   input += synapse0x1611ed0();
   input += synapse0x1611960();
   input += synapse0x16119a0();
   input += synapse0x1612020();
   input += synapse0x1612060();
   input += synapse0x16120a0();
   input += synapse0x16120e0();
   input += synapse0x1612120();
   input += synapse0x1612160();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16117d0() {
   double input = input0x16117d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16121a0() {
   double input = 0.266328;
   input += synapse0x16124e0();
   input += synapse0x1612520();
   input += synapse0x1612560();
   input += synapse0x16125a0();
   input += synapse0x16125e0();
   input += synapse0x1612620();
   input += synapse0x1612660();
   input += synapse0x16126a0();
   input += synapse0x16126e0();
   input += synapse0x13c9e30();
   input += synapse0x13c9e70();
   input += synapse0x13c9eb0();
   input += synapse0x13c9ef0();
   input += synapse0x13c9f30();
   input += synapse0x13c9f70();
   input += synapse0x13c9fb0();
   input += synapse0x1612330();
   input += synapse0x1612370();
   input += synapse0x13ca100();
   input += synapse0x13ca140();
   input += synapse0x13ca180();
   input += synapse0x13ca1c0();
   input += synapse0x13ca200();
   input += synapse0x1612f30();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16121a0() {
   double input = input0x16121a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1612f70() {
   double input = -0.346969;
   input += synapse0x16132b0();
   input += synapse0x16132f0();
   input += synapse0x1613330();
   input += synapse0x1613370();
   input += synapse0x16133b0();
   input += synapse0x16133f0();
   input += synapse0x1613430();
   input += synapse0x1613470();
   input += synapse0x16134b0();
   input += synapse0x16134f0();
   input += synapse0x1613530();
   input += synapse0x1613570();
   input += synapse0x16135b0();
   input += synapse0x16135f0();
   input += synapse0x1613630();
   input += synapse0x1613670();
   input += synapse0x1613100();
   input += synapse0x1613140();
   input += synapse0x16137c0();
   input += synapse0x1613800();
   input += synapse0x1613840();
   input += synapse0x1613880();
   input += synapse0x16138c0();
   input += synapse0x1613900();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1612f70() {
   double input = input0x1612f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1613940() {
   double input = -0.598106;
   input += synapse0x1613c80();
   input += synapse0x1613cc0();
   input += synapse0x1613d00();
   input += synapse0x1613d40();
   input += synapse0x1613d80();
   input += synapse0x1613dc0();
   input += synapse0x1613e00();
   input += synapse0x1613e40();
   input += synapse0x1613e80();
   input += synapse0x1613ec0();
   input += synapse0x1613f00();
   input += synapse0x1613f40();
   input += synapse0x1613f80();
   input += synapse0x1613fc0();
   input += synapse0x1614000();
   input += synapse0x1614040();
   input += synapse0x1613ad0();
   input += synapse0x1613b10();
   input += synapse0x1614190();
   input += synapse0x16141d0();
   input += synapse0x1614210();
   input += synapse0x1614250();
   input += synapse0x1614290();
   input += synapse0x16142d0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1613940() {
   double input = input0x1613940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1614310() {
   double input = 0.638723;
   input += synapse0x160ddb0();
   input += synapse0x160ddf0();
   input += synapse0x160de30();
   input += synapse0x160de70();
   input += synapse0x1614860();
   input += synapse0x16148a0();
   input += synapse0x16148e0();
   input += synapse0x1614920();
   input += synapse0x1614960();
   input += synapse0x16149a0();
   input += synapse0x16149e0();
   input += synapse0x1614a20();
   input += synapse0x1614a60();
   input += synapse0x1614aa0();
   input += synapse0x1614ae0();
   input += synapse0x1614b20();
   input += synapse0x16144a0();
   input += synapse0x16144e0();
   input += synapse0x1614c70();
   input += synapse0x1614cb0();
   input += synapse0x1614cf0();
   input += synapse0x1614d30();
   input += synapse0x1614d70();
   input += synapse0x1614db0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1614310() {
   double input = input0x1614310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1614df0() {
   double input = 0.0432095;
   input += synapse0x1615130();
   input += synapse0x1615170();
   input += synapse0x16151b0();
   input += synapse0x16151f0();
   input += synapse0x1615230();
   input += synapse0x1615270();
   input += synapse0x16152b0();
   input += synapse0x16152f0();
   input += synapse0x1615330();
   input += synapse0x1615370();
   input += synapse0x16153b0();
   input += synapse0x16153f0();
   input += synapse0x1615430();
   input += synapse0x1615470();
   input += synapse0x16154b0();
   input += synapse0x16154f0();
   input += synapse0x1614f80();
   input += synapse0x1614fc0();
   input += synapse0x1615640();
   input += synapse0x1615680();
   input += synapse0x16156c0();
   input += synapse0x1615700();
   input += synapse0x1615740();
   input += synapse0x1615780();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1614df0() {
   double input = input0x1614df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16157c0() {
   double input = 0.43036;
   input += synapse0x1615b00();
   input += synapse0x1615b40();
   input += synapse0x1615b80();
   input += synapse0x1615bc0();
   input += synapse0x1615c00();
   input += synapse0x1615c40();
   input += synapse0x1615c80();
   input += synapse0x1615cc0();
   input += synapse0x1615d00();
   input += synapse0x1615d40();
   input += synapse0x1615d80();
   input += synapse0x1615dc0();
   input += synapse0x1615e00();
   input += synapse0x1615e40();
   input += synapse0x1615e80();
   input += synapse0x1615ec0();
   input += synapse0x1615950();
   input += synapse0x1615990();
   input += synapse0x1612720();
   input += synapse0x1612760();
   input += synapse0x16127a0();
   input += synapse0x16127e0();
   input += synapse0x1612820();
   input += synapse0x1612860();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16157c0() {
   double input = input0x16157c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16128a0() {
   double input = 0.944479;
   input += synapse0x1612be0();
   input += synapse0x1612c20();
   input += synapse0x1612c60();
   input += synapse0x1612ca0();
   input += synapse0x1612ce0();
   input += synapse0x1612d20();
   input += synapse0x1612d60();
   input += synapse0x1612da0();
   input += synapse0x1612de0();
   input += synapse0x1612e20();
   input += synapse0x1612e60();
   input += synapse0x1612ea0();
   input += synapse0x1612ee0();
   input += synapse0x1617020();
   input += synapse0x1617060();
   input += synapse0x16170a0();
   input += synapse0x1612a30();
   input += synapse0x1612a70();
   input += synapse0x16171f0();
   input += synapse0x1617230();
   input += synapse0x1617270();
   input += synapse0x16172b0();
   input += synapse0x16172f0();
   input += synapse0x1617330();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16128a0() {
   double input = input0x16128a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1617370() {
   double input = 1.90582;
   input += synapse0x16176b0();
   input += synapse0x16176f0();
   input += synapse0x1617730();
   input += synapse0x1617770();
   input += synapse0x16177b0();
   input += synapse0x16177f0();
   input += synapse0x1617830();
   input += synapse0x1617870();
   input += synapse0x16178b0();
   input += synapse0x16178f0();
   input += synapse0x1617930();
   input += synapse0x1617970();
   input += synapse0x16179b0();
   input += synapse0x16179f0();
   input += synapse0x1617a30();
   input += synapse0x1617a70();
   input += synapse0x1617500();
   input += synapse0x1617540();
   input += synapse0x1617bc0();
   input += synapse0x1617c00();
   input += synapse0x1617c40();
   input += synapse0x1617c80();
   input += synapse0x1617cc0();
   input += synapse0x1617d00();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1617370() {
   double input = input0x1617370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1617d40() {
   double input = -0.399288;
   input += synapse0x1618080();
   input += synapse0x16180c0();
   input += synapse0x1618100();
   input += synapse0x1618140();
   input += synapse0x1618180();
   input += synapse0x16181c0();
   input += synapse0x1618200();
   input += synapse0x1618240();
   input += synapse0x1618280();
   input += synapse0x16182c0();
   input += synapse0x1618300();
   input += synapse0x1618340();
   input += synapse0x1618380();
   input += synapse0x16183c0();
   input += synapse0x1618400();
   input += synapse0x1618440();
   input += synapse0x1617ed0();
   input += synapse0x1617f10();
   input += synapse0x1618590();
   input += synapse0x16185d0();
   input += synapse0x1618610();
   input += synapse0x1618650();
   input += synapse0x1618690();
   input += synapse0x16186d0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1617d40() {
   double input = input0x1617d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1618710() {
   double input = -0.683658;
   input += synapse0x1618a50();
   input += synapse0x1618a90();
   input += synapse0x1618ad0();
   input += synapse0x1618b10();
   input += synapse0x1618b50();
   input += synapse0x1618b90();
   input += synapse0x1618bd0();
   input += synapse0x1618c10();
   input += synapse0x1618c50();
   input += synapse0x1618c90();
   input += synapse0x1618cd0();
   input += synapse0x1618d10();
   input += synapse0x1618d50();
   input += synapse0x1618d90();
   input += synapse0x1618dd0();
   input += synapse0x1618e10();
   input += synapse0x16188a0();
   input += synapse0x16188e0();
   input += synapse0x1618f60();
   input += synapse0x1618fa0();
   input += synapse0x1618fe0();
   input += synapse0x1619020();
   input += synapse0x1619060();
   input += synapse0x16190a0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1618710() {
   double input = input0x1618710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16190e0() {
   double input = -1.86125;
   input += synapse0x1619420();
   input += synapse0x160a780();
   input += synapse0x160a7c0();
   input += synapse0x160aac0();
   input += synapse0x160ab00();
   input += synapse0x160ae00();
   input += synapse0x160ae40();
   input += synapse0x160b140();
   input += synapse0x160b180();
   input += synapse0x160b480();
   input += synapse0x160b4c0();
   input += synapse0x160b7c0();
   input += synapse0x160b800();
   input += synapse0x160bb00();
   input += synapse0x160bb40();
   input += synapse0x160be40();
   input += synapse0x160be80();
   input += synapse0x160c180();
   input += synapse0x160c1c0();
   input += synapse0x160c4c0();
   input += synapse0x160c500();
   input += synapse0x160c800();
   input += synapse0x160c840();
   input += synapse0x160cb40();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16190e0() {
   double input = input0x16190e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161aef0() {
   double input = -0.273897;
   input += synapse0x160cb80();
   input += synapse0x160d840();
   input += synapse0x160d880();
   input += synapse0x1619270();
   input += synapse0x16192b0();
   input += synapse0x160db80();
   input += synapse0x160dbc0();
   input += synapse0x13bbb50();
   input += synapse0x13bbb90();
   input += synapse0x160e300();
   input += synapse0x160e340();
   input += synapse0x160e640();
   input += synapse0x160e680();
   input += synapse0x160e980();
   input += synapse0x160e9c0();
   input += synapse0x160ecc0();
   input += synapse0x160ed00();
   input += synapse0x160f000();
   input += synapse0x160f040();
   input += synapse0x160f340();
   input += synapse0x160f380();
   input += synapse0x160ce80();
   input += synapse0x160cec0();
   input += synapse0x161b190();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161aef0() {
   double input = input0x161aef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161b1d0() {
   double input = -0.217805;
   input += synapse0x161b510();
   input += synapse0x161b550();
   input += synapse0x161b590();
   input += synapse0x161b5d0();
   input += synapse0x161b610();
   input += synapse0x161b650();
   input += synapse0x161b690();
   input += synapse0x161b6d0();
   input += synapse0x161b710();
   input += synapse0x161b750();
   input += synapse0x161b790();
   input += synapse0x161b7d0();
   input += synapse0x161b810();
   input += synapse0x161b850();
   input += synapse0x161b890();
   input += synapse0x161b8d0();
   input += synapse0x161b360();
   input += synapse0x161b3a0();
   input += synapse0x161ba20();
   input += synapse0x161ba60();
   input += synapse0x161baa0();
   input += synapse0x161bae0();
   input += synapse0x161bb20();
   input += synapse0x161bb60();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161b1d0() {
   double input = input0x161b1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161bba0() {
   double input = -0.0272771;
   input += synapse0x161bee0();
   input += synapse0x161bf20();
   input += synapse0x161bf60();
   input += synapse0x161bfa0();
   input += synapse0x161bfe0();
   input += synapse0x161c020();
   input += synapse0x161c060();
   input += synapse0x161c0a0();
   input += synapse0x161c0e0();
   input += synapse0x161c120();
   input += synapse0x161c160();
   input += synapse0x161c1a0();
   input += synapse0x161c1e0();
   input += synapse0x161c220();
   input += synapse0x161c260();
   input += synapse0x161c2a0();
   input += synapse0x161bd30();
   input += synapse0x161bd70();
   input += synapse0x161c3f0();
   input += synapse0x161c430();
   input += synapse0x161c470();
   input += synapse0x161c4b0();
   input += synapse0x161c4f0();
   input += synapse0x161c530();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161bba0() {
   double input = input0x161bba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161c570() {
   double input = 0.676651;
   input += synapse0x161c8b0();
   input += synapse0x161c8f0();
   input += synapse0x161c930();
   input += synapse0x161c970();
   input += synapse0x161c9b0();
   input += synapse0x161c9f0();
   input += synapse0x161ca30();
   input += synapse0x161ca70();
   input += synapse0x161cab0();
   input += synapse0x161caf0();
   input += synapse0x161cb30();
   input += synapse0x161cb70();
   input += synapse0x161cbb0();
   input += synapse0x161cbf0();
   input += synapse0x161cc30();
   input += synapse0x161cc70();
   input += synapse0x161c700();
   input += synapse0x161c740();
   input += synapse0x161cdc0();
   input += synapse0x161ce00();
   input += synapse0x161ce40();
   input += synapse0x161ce80();
   input += synapse0x161cec0();
   input += synapse0x161cf00();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161c570() {
   double input = input0x161c570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161cf40() {
   double input = 0.39725;
   input += synapse0x161d280();
   input += synapse0x161d2c0();
   input += synapse0x161d300();
   input += synapse0x161d340();
   input += synapse0x161d380();
   input += synapse0x161d3c0();
   input += synapse0x161d400();
   input += synapse0x161d440();
   input += synapse0x161d480();
   input += synapse0x161d4c0();
   input += synapse0x161d500();
   input += synapse0x161d540();
   input += synapse0x161d580();
   input += synapse0x161d5c0();
   input += synapse0x161d600();
   input += synapse0x161d640();
   input += synapse0x161d0d0();
   input += synapse0x161d110();
   input += synapse0x161d790();
   input += synapse0x161d7d0();
   input += synapse0x161d810();
   input += synapse0x161d850();
   input += synapse0x161d890();
   input += synapse0x161d8d0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161cf40() {
   double input = input0x161cf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161d910() {
   double input = 1.13056;
   input += synapse0x161dc50();
   input += synapse0x161dc90();
   input += synapse0x161dcd0();
   input += synapse0x161dd10();
   input += synapse0x161dd50();
   input += synapse0x161dd90();
   input += synapse0x161ddd0();
   input += synapse0x161de10();
   input += synapse0x161de50();
   input += synapse0x1616010();
   input += synapse0x1616050();
   input += synapse0x1616090();
   input += synapse0x16160d0();
   input += synapse0x1616110();
   input += synapse0x1616150();
   input += synapse0x1616190();
   input += synapse0x161daa0();
   input += synapse0x161dae0();
   input += synapse0x16162e0();
   input += synapse0x1616320();
   input += synapse0x1616360();
   input += synapse0x16163a0();
   input += synapse0x16163e0();
   input += synapse0x1616420();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161d910() {
   double input = input0x161d910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1616460() {
   double input = -2.64811;
   input += synapse0x16167a0();
   input += synapse0x16167e0();
   input += synapse0x1616820();
   input += synapse0x1616860();
   input += synapse0x16168a0();
   input += synapse0x16168e0();
   input += synapse0x1616920();
   input += synapse0x1616960();
   input += synapse0x16169a0();
   input += synapse0x16169e0();
   input += synapse0x1616a20();
   input += synapse0x1616a60();
   input += synapse0x1616aa0();
   input += synapse0x1616ae0();
   input += synapse0x1616b20();
   input += synapse0x1616b60();
   input += synapse0x16165f0();
   input += synapse0x1616630();
   input += synapse0x1616cb0();
   input += synapse0x1616cf0();
   input += synapse0x1616d30();
   input += synapse0x1616d70();
   input += synapse0x1616db0();
   input += synapse0x1616df0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1616460() {
   double input = input0x1616460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1616e30() {
   double input = 2.79135;
   input += synapse0x1616fc0();
   input += synapse0x1620050();
   input += synapse0x1620090();
   input += synapse0x16200d0();
   input += synapse0x1620110();
   input += synapse0x1620150();
   input += synapse0x1620190();
   input += synapse0x16201d0();
   input += synapse0x1620210();
   input += synapse0x1620250();
   input += synapse0x1620290();
   input += synapse0x16202d0();
   input += synapse0x1620310();
   input += synapse0x1620350();
   input += synapse0x1620390();
   input += synapse0x16203d0();
   input += synapse0x161fea0();
   input += synapse0x161fee0();
   input += synapse0x1620520();
   input += synapse0x1620560();
   input += synapse0x16205a0();
   input += synapse0x16205e0();
   input += synapse0x1620620();
   input += synapse0x1620660();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1616e30() {
   double input = input0x1616e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16206a0() {
   double input = -1.05956;
   input += synapse0x16209e0();
   input += synapse0x1620a20();
   input += synapse0x1620a60();
   input += synapse0x1620aa0();
   input += synapse0x1620ae0();
   input += synapse0x1620b20();
   input += synapse0x1620b60();
   input += synapse0x1620ba0();
   input += synapse0x1620be0();
   input += synapse0x1620c20();
   input += synapse0x1620c60();
   input += synapse0x1620ca0();
   input += synapse0x1620ce0();
   input += synapse0x1620d20();
   input += synapse0x1620d60();
   input += synapse0x1620da0();
   input += synapse0x1620830();
   input += synapse0x1620870();
   input += synapse0x1620ef0();
   input += synapse0x1620f30();
   input += synapse0x1620f70();
   input += synapse0x1620fb0();
   input += synapse0x1620ff0();
   input += synapse0x1621030();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16206a0() {
   double input = input0x16206a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1621070() {
   double input = 1.21401;
   input += synapse0x16213b0();
   input += synapse0x16213f0();
   input += synapse0x1621430();
   input += synapse0x1621470();
   input += synapse0x16214b0();
   input += synapse0x16214f0();
   input += synapse0x1621530();
   input += synapse0x1621570();
   input += synapse0x16215b0();
   input += synapse0x16215f0();
   input += synapse0x1621630();
   input += synapse0x1621670();
   input += synapse0x16216b0();
   input += synapse0x16216f0();
   input += synapse0x1621730();
   input += synapse0x1621770();
   input += synapse0x1621200();
   input += synapse0x1621240();
   input += synapse0x16218c0();
   input += synapse0x1621900();
   input += synapse0x1621940();
   input += synapse0x1621980();
   input += synapse0x16219c0();
   input += synapse0x1621a00();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1621070() {
   double input = input0x1621070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1621a40() {
   double input = -0.804922;
   input += synapse0x1621d80();
   input += synapse0x1621dc0();
   input += synapse0x1621e00();
   input += synapse0x1621e40();
   input += synapse0x1621e80();
   input += synapse0x1621ec0();
   input += synapse0x1621f00();
   input += synapse0x1621f40();
   input += synapse0x1621f80();
   input += synapse0x1621fc0();
   input += synapse0x1622000();
   input += synapse0x1622040();
   input += synapse0x1622080();
   input += synapse0x16220c0();
   input += synapse0x1622100();
   input += synapse0x1622140();
   input += synapse0x1621bd0();
   input += synapse0x1621c10();
   input += synapse0x1622290();
   input += synapse0x16222d0();
   input += synapse0x1622310();
   input += synapse0x1622350();
   input += synapse0x1622390();
   input += synapse0x16223d0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1621a40() {
   double input = input0x1621a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1622410() {
   double input = 1.04819;
   input += synapse0x1622750();
   input += synapse0x1622790();
   input += synapse0x16227d0();
   input += synapse0x1622810();
   input += synapse0x1622850();
   input += synapse0x1622890();
   input += synapse0x16228d0();
   input += synapse0x1622910();
   input += synapse0x1622950();
   input += synapse0x1622990();
   input += synapse0x16229d0();
   input += synapse0x1622a10();
   input += synapse0x1622a50();
   input += synapse0x1622a90();
   input += synapse0x1622ad0();
   input += synapse0x1622b10();
   input += synapse0x16225a0();
   input += synapse0x16225e0();
   input += synapse0x1622c60();
   input += synapse0x1622ca0();
   input += synapse0x1622ce0();
   input += synapse0x1622d20();
   input += synapse0x1622d60();
   input += synapse0x1622da0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1622410() {
   double input = input0x1622410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1622de0() {
   double input = -0.827041;
   input += synapse0x1623120();
   input += synapse0x1623160();
   input += synapse0x16231a0();
   input += synapse0x16231e0();
   input += synapse0x1623220();
   input += synapse0x1623260();
   input += synapse0x16232a0();
   input += synapse0x16232e0();
   input += synapse0x1623320();
   input += synapse0x1623360();
   input += synapse0x16233a0();
   input += synapse0x16233e0();
   input += synapse0x1623420();
   input += synapse0x1623460();
   input += synapse0x16234a0();
   input += synapse0x16234e0();
   input += synapse0x1622f70();
   input += synapse0x1622fb0();
   input += synapse0x1623630();
   input += synapse0x1623670();
   input += synapse0x16236b0();
   input += synapse0x16236f0();
   input += synapse0x1623730();
   input += synapse0x1623770();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1622de0() {
   double input = input0x1622de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16237b0() {
   double input = 0.0231132;
   input += synapse0x1623af0();
   input += synapse0x1623b30();
   input += synapse0x1623b70();
   input += synapse0x1623bb0();
   input += synapse0x1623bf0();
   input += synapse0x1623c30();
   input += synapse0x1623c70();
   input += synapse0x1623cb0();
   input += synapse0x1623cf0();
   input += synapse0x1623d30();
   input += synapse0x1623d70();
   input += synapse0x1623db0();
   input += synapse0x1623df0();
   input += synapse0x1623e30();
   input += synapse0x1623e70();
   input += synapse0x1623eb0();
   input += synapse0x1623940();
   input += synapse0x1623980();
   input += synapse0x1624000();
   input += synapse0x1624040();
   input += synapse0x1624080();
   input += synapse0x16240c0();
   input += synapse0x1624100();
   input += synapse0x1624140();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16237b0() {
   double input = input0x16237b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1624180() {
   double input = 0.339665;
   input += synapse0x16244c0();
   input += synapse0x1624500();
   input += synapse0x1624540();
   input += synapse0x1624580();
   input += synapse0x16245c0();
   input += synapse0x1624600();
   input += synapse0x1624640();
   input += synapse0x1624680();
   input += synapse0x16246c0();
   input += synapse0x1624700();
   input += synapse0x1624740();
   input += synapse0x1624780();
   input += synapse0x16247c0();
   input += synapse0x1624800();
   input += synapse0x1624840();
   input += synapse0x1624880();
   input += synapse0x1624310();
   input += synapse0x1624350();
   input += synapse0x16249d0();
   input += synapse0x1624a10();
   input += synapse0x1624a50();
   input += synapse0x1624a90();
   input += synapse0x1624ad0();
   input += synapse0x1624b10();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1624180() {
   double input = input0x1624180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1624b50() {
   double input = 0.835728;
   input += synapse0x1624e90();
   input += synapse0x1619460();
   input += synapse0x16194a0();
   input += synapse0x16194e0();
   input += synapse0x1619730();
   input += synapse0x1619770();
   input += synapse0x16197b0();
   input += synapse0x1619a00();
   input += synapse0x1619a40();
   input += synapse0x1619c90();
   input += synapse0x1619cd0();
   input += synapse0x1619d10();
   input += synapse0x1619f60();
   input += synapse0x1619fa0();
   input += synapse0x161a1f0();
   input += synapse0x161a230();
   input += synapse0x1624ce0();
   input += synapse0x1624d20();
   input += synapse0x161a380();
   input += synapse0x161a890();
   input += synapse0x161a8d0();
   input += synapse0x161a910();
   input += synapse0x161ab60();
   input += synapse0x161aba0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1624b50() {
   double input = input0x1624b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161abe0() {
   double input = 1.18499;
   input += synapse0x161a450();
   input += synapse0x161a490();
   input += synapse0x161a4d0();
   input += synapse0x161a510();
   input += synapse0x161ae90();
   input += synapse0x16271e0();
   input += synapse0x1627220();
   input += synapse0x1627260();
   input += synapse0x16272a0();
   input += synapse0x16272e0();
   input += synapse0x1627320();
   input += synapse0x1627360();
   input += synapse0x16273a0();
   input += synapse0x16273e0();
   input += synapse0x1627420();
   input += synapse0x1627460();
   input += synapse0x161ad70();
   input += synapse0x161adb0();
   input += synapse0x16275b0();
   input += synapse0x16275f0();
   input += synapse0x1627630();
   input += synapse0x1627670();
   input += synapse0x16276b0();
   input += synapse0x16276f0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161abe0() {
   double input = input0x161abe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1627730() {
   double input = -1.45265;
   input += synapse0x1627a70();
   input += synapse0x1627ab0();
   input += synapse0x1627af0();
   input += synapse0x1627b30();
   input += synapse0x1627b70();
   input += synapse0x1627bb0();
   input += synapse0x1627bf0();
   input += synapse0x1627c30();
   input += synapse0x1627c70();
   input += synapse0x1627cb0();
   input += synapse0x1627cf0();
   input += synapse0x1627d30();
   input += synapse0x1627d70();
   input += synapse0x1627db0();
   input += synapse0x1627df0();
   input += synapse0x1627e30();
   input += synapse0x16278c0();
   input += synapse0x1627900();
   input += synapse0x1627f80();
   input += synapse0x1627fc0();
   input += synapse0x1628000();
   input += synapse0x1628040();
   input += synapse0x1628080();
   input += synapse0x16280c0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1627730() {
   double input = input0x1627730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1628100() {
   double input = -2.24479;
   input += synapse0x1628440();
   input += synapse0x1628480();
   input += synapse0x16284c0();
   input += synapse0x1628500();
   input += synapse0x1628540();
   input += synapse0x1628580();
   input += synapse0x16285c0();
   input += synapse0x1628600();
   input += synapse0x1628640();
   input += synapse0x1628680();
   input += synapse0x16286c0();
   input += synapse0x1628700();
   input += synapse0x1628740();
   input += synapse0x1628780();
   input += synapse0x16287c0();
   input += synapse0x1628800();
   input += synapse0x1628290();
   input += synapse0x16282d0();
   input += synapse0x1628950();
   input += synapse0x1628990();
   input += synapse0x16289d0();
   input += synapse0x1628a10();
   input += synapse0x1628a50();
   input += synapse0x1628a90();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1628100() {
   double input = input0x1628100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1628ad0() {
   double input = 1.32007;
   input += synapse0x1628e10();
   input += synapse0x1628e50();
   input += synapse0x1628e90();
   input += synapse0x1628ed0();
   input += synapse0x1628f10();
   input += synapse0x1628f50();
   input += synapse0x1628f90();
   input += synapse0x1628fd0();
   input += synapse0x1629010();
   input += synapse0x1629050();
   input += synapse0x1629090();
   input += synapse0x16290d0();
   input += synapse0x1629110();
   input += synapse0x1629150();
   input += synapse0x1629190();
   input += synapse0x16291d0();
   input += synapse0x1628c60();
   input += synapse0x1628ca0();
   input += synapse0x1629320();
   input += synapse0x1629360();
   input += synapse0x16293a0();
   input += synapse0x16293e0();
   input += synapse0x1629420();
   input += synapse0x1629460();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1628ad0() {
   double input = input0x1628ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16294a0() {
   double input = -0.439041;
   input += synapse0x16297e0();
   input += synapse0x1629820();
   input += synapse0x1629860();
   input += synapse0x16298a0();
   input += synapse0x16298e0();
   input += synapse0x1629920();
   input += synapse0x1629960();
   input += synapse0x16299a0();
   input += synapse0x16299e0();
   input += synapse0x1629a20();
   input += synapse0x1629a60();
   input += synapse0x1629aa0();
   input += synapse0x1629ae0();
   input += synapse0x1629b20();
   input += synapse0x1629b60();
   input += synapse0x1629ba0();
   input += synapse0x1629630();
   input += synapse0x1629670();
   input += synapse0x1629cf0();
   input += synapse0x1629d30();
   input += synapse0x1629d70();
   input += synapse0x1629db0();
   input += synapse0x1629df0();
   input += synapse0x1629e30();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16294a0() {
   double input = input0x16294a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1629e70() {
   double input = 0.075539;
   input += synapse0x162a1b0();
   input += synapse0x162a1f0();
   input += synapse0x162a230();
   input += synapse0x162a270();
   input += synapse0x162a2b0();
   input += synapse0x162a2f0();
   input += synapse0x162a330();
   input += synapse0x162a370();
   input += synapse0x162a3b0();
   input += synapse0x162a3f0();
   input += synapse0x162a430();
   input += synapse0x162a470();
   input += synapse0x162a4b0();
   input += synapse0x162a4f0();
   input += synapse0x162a530();
   input += synapse0x162a570();
   input += synapse0x162a000();
   input += synapse0x162a040();
   input += synapse0x162a6c0();
   input += synapse0x162a700();
   input += synapse0x162a740();
   input += synapse0x162a780();
   input += synapse0x162a7c0();
   input += synapse0x162a800();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1629e70() {
   double input = input0x1629e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x162a840() {
   double input = -2.52668;
   input += synapse0x162ab80();
   input += synapse0x162abc0();
   input += synapse0x162ac00();
   input += synapse0x162ac40();
   input += synapse0x162ac80();
   input += synapse0x162acc0();
   input += synapse0x162ad00();
   input += synapse0x162ad40();
   input += synapse0x162ad80();
   input += synapse0x162adc0();
   input += synapse0x162ae00();
   input += synapse0x162ae40();
   input += synapse0x162ae80();
   input += synapse0x162aec0();
   input += synapse0x162af00();
   input += synapse0x162af40();
   input += synapse0x162a9d0();
   input += synapse0x162aa10();
   input += synapse0x162b090();
   input += synapse0x162b0d0();
   input += synapse0x162b110();
   input += synapse0x162b150();
   input += synapse0x162b190();
   input += synapse0x162b1d0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x162a840() {
   double input = input0x162a840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x162b210() {
   double input = -0.841875;
   input += synapse0x162b550();
   input += synapse0x162b590();
   input += synapse0x162b5d0();
   input += synapse0x162b610();
   input += synapse0x162b650();
   input += synapse0x162b690();
   input += synapse0x162b6d0();
   input += synapse0x162b710();
   input += synapse0x162b750();
   input += synapse0x162b790();
   input += synapse0x162b7d0();
   input += synapse0x162b810();
   input += synapse0x162b850();
   input += synapse0x162b890();
   input += synapse0x162b8d0();
   input += synapse0x162b910();
   input += synapse0x162b3a0();
   input += synapse0x162b3e0();
   input += synapse0x162ba60();
   input += synapse0x162baa0();
   input += synapse0x162bae0();
   input += synapse0x162bb20();
   input += synapse0x162bb60();
   input += synapse0x162bba0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x162b210() {
   double input = input0x162b210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x162bbe0() {
   double input = 0.265159;
   input += synapse0x1614650();
   input += synapse0x1614690();
   input += synapse0x16146d0();
   input += synapse0x1614710();
   input += synapse0x1614750();
   input += synapse0x1614790();
   input += synapse0x16147d0();
   input += synapse0x1614810();
   input += synapse0x162c330();
   input += synapse0x162c370();
   input += synapse0x162c3b0();
   input += synapse0x162c3f0();
   input += synapse0x162c430();
   input += synapse0x162c470();
   input += synapse0x162c4b0();
   input += synapse0x162c4f0();
   input += synapse0x162bd70();
   input += synapse0x162bdb0();
   input += synapse0x162c640();
   input += synapse0x162c680();
   input += synapse0x162c6c0();
   input += synapse0x162c700();
   input += synapse0x162c740();
   input += synapse0x162c780();
   return input;
}

double NNfunction_ss_sLuL::neuron0x162bbe0() {
   double input = input0x162bbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x162c7c0() {
   double input = 0.591851;
   input += synapse0x162cb00();
   input += synapse0x162cb40();
   input += synapse0x162cb80();
   input += synapse0x162cbc0();
   input += synapse0x162cc00();
   input += synapse0x162cc40();
   input += synapse0x162cc80();
   input += synapse0x162ccc0();
   input += synapse0x162cd00();
   input += synapse0x162cd40();
   input += synapse0x162cd80();
   input += synapse0x162cdc0();
   input += synapse0x162ce00();
   input += synapse0x162ce40();
   input += synapse0x162ce80();
   input += synapse0x162cec0();
   input += synapse0x162c950();
   input += synapse0x162c990();
   input += synapse0x162d010();
   input += synapse0x162d050();
   input += synapse0x162d090();
   input += synapse0x162d0d0();
   input += synapse0x162d110();
   input += synapse0x162d150();
   return input;
}

double NNfunction_ss_sLuL::neuron0x162c7c0() {
   double input = input0x162c7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x162d190() {
   double input = 0.520192;
   input += synapse0x162d4d0();
   input += synapse0x162d510();
   input += synapse0x162d550();
   input += synapse0x162d590();
   input += synapse0x162d5d0();
   input += synapse0x162d610();
   input += synapse0x162d650();
   input += synapse0x162d690();
   input += synapse0x162d6d0();
   input += synapse0x162d710();
   input += synapse0x162d750();
   input += synapse0x162d790();
   input += synapse0x162d7d0();
   input += synapse0x162d810();
   input += synapse0x162d850();
   input += synapse0x162d890();
   input += synapse0x162d320();
   input += synapse0x162d360();
   input += synapse0x161de90();
   input += synapse0x161ded0();
   input += synapse0x161df10();
   input += synapse0x161df50();
   input += synapse0x161df90();
   input += synapse0x161dfd0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x162d190() {
   double input = input0x162d190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161e010() {
   double input = -0.0616295;
   input += synapse0x161e350();
   input += synapse0x161e390();
   input += synapse0x161e3d0();
   input += synapse0x161e410();
   input += synapse0x161e450();
   input += synapse0x161e490();
   input += synapse0x161e4d0();
   input += synapse0x161e510();
   input += synapse0x161e550();
   input += synapse0x161e590();
   input += synapse0x161e5d0();
   input += synapse0x161e610();
   input += synapse0x161e650();
   input += synapse0x161e690();
   input += synapse0x161e6d0();
   input += synapse0x161e710();
   input += synapse0x161e1a0();
   input += synapse0x161e1e0();
   input += synapse0x161e860();
   input += synapse0x161e8a0();
   input += synapse0x161e8e0();
   input += synapse0x161e920();
   input += synapse0x161e960();
   input += synapse0x161e9a0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161e010() {
   double input = input0x161e010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161e9e0() {
   double input = -1.08776;
   input += synapse0x161ed20();
   input += synapse0x161ed60();
   input += synapse0x161eda0();
   input += synapse0x161ede0();
   input += synapse0x161ee20();
   input += synapse0x161ee60();
   input += synapse0x161eea0();
   input += synapse0x161eee0();
   input += synapse0x161ef20();
   input += synapse0x161ef60();
   input += synapse0x161efa0();
   input += synapse0x161efe0();
   input += synapse0x161f020();
   input += synapse0x161f060();
   input += synapse0x161f0a0();
   input += synapse0x161f0e0();
   input += synapse0x161eb70();
   input += synapse0x161ebb0();
   input += synapse0x161f230();
   input += synapse0x161f270();
   input += synapse0x161f2b0();
   input += synapse0x161f2f0();
   input += synapse0x161f330();
   input += synapse0x161f370();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161e9e0() {
   double input = input0x161e9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x161f3b0() {
   double input = 0.171299;
   input += synapse0x161f6f0();
   input += synapse0x161f730();
   input += synapse0x161f770();
   input += synapse0x161f7b0();
   input += synapse0x161f7f0();
   input += synapse0x161f830();
   input += synapse0x161f870();
   input += synapse0x161f8b0();
   input += synapse0x161f8f0();
   input += synapse0x161f930();
   input += synapse0x161f970();
   input += synapse0x161f9b0();
   input += synapse0x161f9f0();
   input += synapse0x161fa30();
   input += synapse0x161fa70();
   input += synapse0x161fab0();
   input += synapse0x161f540();
   input += synapse0x161f580();
   input += synapse0x161fc00();
   input += synapse0x161fc40();
   input += synapse0x161fc80();
   input += synapse0x161fcc0();
   input += synapse0x161fd00();
   input += synapse0x161fd40();
   return input;
}

double NNfunction_ss_sLuL::neuron0x161f3b0() {
   double input = input0x161f3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16319f0() {
   double input = -1.78677;
   input += synapse0x1631c10();
   input += synapse0x1631c50();
   input += synapse0x1631c90();
   input += synapse0x1631cd0();
   input += synapse0x1631d10();
   input += synapse0x1631d50();
   input += synapse0x1631d90();
   input += synapse0x1631dd0();
   input += synapse0x1631e10();
   input += synapse0x1631e50();
   input += synapse0x1631e90();
   input += synapse0x1631ed0();
   input += synapse0x1631f10();
   input += synapse0x1631f50();
   input += synapse0x1631f90();
   input += synapse0x1631fd0();
   input += synapse0x161fd80();
   input += synapse0x161fdc0();
   input += synapse0x1632120();
   input += synapse0x1632160();
   input += synapse0x16321a0();
   input += synapse0x16321e0();
   input += synapse0x1632220();
   input += synapse0x1632260();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16319f0() {
   double input = input0x16319f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x16322a0() {
   double input = -0.0209362;
   input += synapse0x16325e0();
   input += synapse0x1632620();
   input += synapse0x1632660();
   input += synapse0x16326a0();
   input += synapse0x16326e0();
   input += synapse0x1632720();
   input += synapse0x1632760();
   input += synapse0x16327a0();
   input += synapse0x16327e0();
   input += synapse0x1632820();
   input += synapse0x1632860();
   input += synapse0x16328a0();
   input += synapse0x16328e0();
   input += synapse0x1632920();
   input += synapse0x1632960();
   input += synapse0x16329a0();
   input += synapse0x1632430();
   input += synapse0x1632470();
   input += synapse0x1632af0();
   input += synapse0x1632b30();
   input += synapse0x1632b70();
   input += synapse0x1632bb0();
   input += synapse0x1632bf0();
   input += synapse0x1632c30();
   return input;
}

double NNfunction_ss_sLuL::neuron0x16322a0() {
   double input = input0x16322a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1632c70() {
   double input = -1.3632;
   input += synapse0x1632fb0();
   input += synapse0x1632ff0();
   input += synapse0x1633030();
   input += synapse0x1633070();
   input += synapse0x16330b0();
   input += synapse0x16330f0();
   input += synapse0x1633130();
   input += synapse0x1633170();
   input += synapse0x16331b0();
   input += synapse0x16331f0();
   input += synapse0x1633230();
   input += synapse0x1633270();
   input += synapse0x16332b0();
   input += synapse0x16332f0();
   input += synapse0x1633330();
   input += synapse0x1633370();
   input += synapse0x1632e00();
   input += synapse0x1632e40();
   input += synapse0x16334c0();
   input += synapse0x1633500();
   input += synapse0x1633540();
   input += synapse0x1633580();
   input += synapse0x16335c0();
   input += synapse0x1633600();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1632c70() {
   double input = input0x1632c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x1633640() {
   double input = -2.39769;
   input += synapse0x1633980();
   input += synapse0x16339c0();
   input += synapse0x1633a00();
   input += synapse0x1633a40();
   input += synapse0x1633a80();
   input += synapse0x1633ac0();
   input += synapse0x1633b00();
   input += synapse0x1633b40();
   input += synapse0x1633b80();
   input += synapse0x1633bc0();
   input += synapse0x1633c00();
   input += synapse0x1633c40();
   input += synapse0x1633c80();
   input += synapse0x1633cc0();
   input += synapse0x1633d00();
   input += synapse0x1633d40();
   input += synapse0x16337d0();
   input += synapse0x1633810();
   input += synapse0x1633e90();
   input += synapse0x1633ed0();
   input += synapse0x1633f10();
   input += synapse0x1633f50();
   input += synapse0x1633f90();
   input += synapse0x1633fd0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x1633640() {
   double input = input0x1633640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x163a840() {
   double input = -0.173565;
   input += synapse0x1610570();
   input += synapse0x16105b0();
   input += synapse0x1611a80();
   input += synapse0x1611ac0();
   input += synapse0x1612450();
   input += synapse0x1612490();
   input += synapse0x1613220();
   input += synapse0x1613260();
   input += synapse0x1613bf0();
   input += synapse0x1613c30();
   input += synapse0x16145c0();
   input += synapse0x1614600();
   input += synapse0x16150a0();
   input += synapse0x16150e0();
   input += synapse0x1615a70();
   input += synapse0x1615ab0();
   input += synapse0x1612b50();
   input += synapse0x1612b90();
   input += synapse0x1617620();
   input += synapse0x1617660();
   input += synapse0x1617ff0();
   input += synapse0x1618030();
   input += synapse0x16189c0();
   input += synapse0x1618a00();
   input += synapse0x1619390();
   input += synapse0x16193d0();
   input += synapse0x160d500();
   input += synapse0x160d540();
   input += synapse0x161b480();
   input += synapse0x161b4c0();
   input += synapse0x161be50();
   input += synapse0x161be90();
   input += synapse0x161c820();
   input += synapse0x161c860();
   input += synapse0x161d1f0();
   input += synapse0x161d230();
   input += synapse0x161dbc0();
   input += synapse0x161dc00();
   input += synapse0x1616710();
   input += synapse0x1616750();
   input += synapse0x161ffc0();
   input += synapse0x1620000();
   input += synapse0x1620950();
   input += synapse0x1620990();
   input += synapse0x1621320();
   input += synapse0x1621360();
   input += synapse0x1621cf0();
   input += synapse0x1621d30();
   input += synapse0x16226c0();
   input += synapse0x1622700();
   return input;
}

double NNfunction_ss_sLuL::neuron0x163a840() {
   double input = input0x163a840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x163abe0() {
   double input = 0.603266;
   input += synapse0x1624e00();
   input += synapse0x1624e40();
   input += synapse0x161a3c0();
   input += synapse0x161a400();
   input += synapse0x16279e0();
   input += synapse0x1627a20();
   input += synapse0x16283b0();
   input += synapse0x16283f0();
   input += synapse0x1628d80();
   input += synapse0x1628dc0();
   input += synapse0x1629750();
   input += synapse0x1629790();
   input += synapse0x162a120();
   input += synapse0x162a160();
   input += synapse0x162aaf0();
   input += synapse0x162ab30();
   input += synapse0x162b4c0();
   input += synapse0x162b500();
   input += synapse0x162be90();
   input += synapse0x162bed0();
   input += synapse0x162ca70();
   input += synapse0x162cab0();
   input += synapse0x162d440();
   input += synapse0x162d480();
   input += synapse0x161e2c0();
   input += synapse0x161e300();
   input += synapse0x161ec90();
   input += synapse0x161ecd0();
   input += synapse0x161f660();
   input += synapse0x161f6a0();
   input += synapse0x1631b80();
   input += synapse0x1631bc0();
   input += synapse0x1632550();
   input += synapse0x1632590();
   input += synapse0x1632f20();
   input += synapse0x1632f60();
   input += synapse0x16338f0();
   input += synapse0x1633930();
   input += synapse0x160f7e0();
   input += synapse0x160f820();
   input += synapse0x1623090();
   input += synapse0x16230d0();
   input += synapse0x1634010();
   input += synapse0x1634050();
   input += synapse0x1634090();
   input += synapse0x16340d0();
   input += synapse0x163af80();
   input += synapse0x163afc0();
   input += synapse0x163b000();
   input += synapse0x163b040();
   return input;
}

double NNfunction_ss_sLuL::neuron0x163abe0() {
   double input = input0x163abe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x163b080() {
   double input = 1.04149;
   input += synapse0x163b3c0();
   input += synapse0x163b400();
   input += synapse0x163b440();
   input += synapse0x163b480();
   input += synapse0x163b4c0();
   input += synapse0x163b500();
   input += synapse0x163b540();
   input += synapse0x163b580();
   input += synapse0x163b5c0();
   input += synapse0x163b600();
   input += synapse0x163b640();
   input += synapse0x163b680();
   input += synapse0x163b6c0();
   input += synapse0x163b700();
   input += synapse0x163b740();
   input += synapse0x163b780();
   input += synapse0x163b210();
   input += synapse0x163b250();
   input += synapse0x163b8d0();
   input += synapse0x163b910();
   input += synapse0x163b950();
   input += synapse0x163b990();
   input += synapse0x163b9d0();
   input += synapse0x163ba10();
   input += synapse0x163ba50();
   input += synapse0x163ba90();
   input += synapse0x163bad0();
   input += synapse0x163bb10();
   input += synapse0x163bb50();
   input += synapse0x163bb90();
   input += synapse0x163bbd0();
   input += synapse0x163bc10();
   input += synapse0x163b7c0();
   input += synapse0x163b800();
   input += synapse0x163b840();
   input += synapse0x163b880();
   input += synapse0x163be60();
   input += synapse0x163bea0();
   input += synapse0x163bee0();
   input += synapse0x163bf20();
   input += synapse0x163bf60();
   input += synapse0x163bfa0();
   input += synapse0x163bfe0();
   input += synapse0x163c020();
   input += synapse0x163c060();
   input += synapse0x163c0a0();
   input += synapse0x163c0e0();
   input += synapse0x163c120();
   input += synapse0x163c160();
   input += synapse0x163c1a0();
   return input;
}

double NNfunction_ss_sLuL::neuron0x163b080() {
   double input = input0x163b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x163c1e0() {
   double input = 0.39293;
   input += synapse0x163c520();
   input += synapse0x163c560();
   input += synapse0x163c5a0();
   input += synapse0x163c5e0();
   input += synapse0x163c620();
   input += synapse0x163c660();
   input += synapse0x163c6a0();
   input += synapse0x163c6e0();
   input += synapse0x163c720();
   input += synapse0x163c760();
   input += synapse0x163c7a0();
   input += synapse0x163c7e0();
   input += synapse0x163c820();
   input += synapse0x163c860();
   input += synapse0x163c8a0();
   input += synapse0x163c8e0();
   input += synapse0x163c370();
   input += synapse0x163c3b0();
   input += synapse0x163ca30();
   input += synapse0x163ca70();
   input += synapse0x163cab0();
   input += synapse0x163caf0();
   input += synapse0x163cb30();
   input += synapse0x163cb70();
   input += synapse0x163cbb0();
   input += synapse0x163cbf0();
   input += synapse0x163cc30();
   input += synapse0x163cc70();
   input += synapse0x163ccb0();
   input += synapse0x163ccf0();
   input += synapse0x163cd30();
   input += synapse0x163cd70();
   input += synapse0x163c920();
   input += synapse0x163c960();
   input += synapse0x163c9a0();
   input += synapse0x163c9e0();
   input += synapse0x163cfc0();
   input += synapse0x163d000();
   input += synapse0x163d040();
   input += synapse0x163d080();
   input += synapse0x163d0c0();
   input += synapse0x163d100();
   input += synapse0x163d140();
   input += synapse0x163d180();
   input += synapse0x163d1c0();
   input += synapse0x163d200();
   input += synapse0x163d240();
   input += synapse0x163d280();
   input += synapse0x163d2c0();
   input += synapse0x163d300();
   return input;
}

double NNfunction_ss_sLuL::neuron0x163c1e0() {
   double input = input0x163c1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x163d340() {
   double input = -0.396878;
   input += synapse0x163d680();
   input += synapse0x163d6c0();
   input += synapse0x163d700();
   input += synapse0x163d740();
   input += synapse0x163d780();
   input += synapse0x163d7c0();
   input += synapse0x163d800();
   input += synapse0x163d840();
   input += synapse0x163d880();
   input += synapse0x163d8c0();
   input += synapse0x163d900();
   input += synapse0x163d940();
   input += synapse0x163d980();
   input += synapse0x163d9c0();
   input += synapse0x163da00();
   input += synapse0x163da40();
   input += synapse0x163d4d0();
   input += synapse0x163d510();
   input += synapse0x163db90();
   input += synapse0x163dbd0();
   input += synapse0x163dc10();
   input += synapse0x163dc50();
   input += synapse0x163dc90();
   input += synapse0x163dcd0();
   input += synapse0x163dd10();
   input += synapse0x163dd50();
   input += synapse0x163dd90();
   input += synapse0x163ddd0();
   input += synapse0x163de10();
   input += synapse0x163de50();
   input += synapse0x163de90();
   input += synapse0x163ded0();
   input += synapse0x163da80();
   input += synapse0x163dac0();
   input += synapse0x163db00();
   input += synapse0x163db40();
   input += synapse0x163e120();
   input += synapse0x163e160();
   input += synapse0x163e1a0();
   input += synapse0x163e1e0();
   input += synapse0x163e220();
   input += synapse0x163e260();
   input += synapse0x163e2a0();
   input += synapse0x163e2e0();
   input += synapse0x163e320();
   input += synapse0x163e360();
   input += synapse0x163e3a0();
   input += synapse0x163e3e0();
   input += synapse0x163e420();
   input += synapse0x163e460();
   return input;
}

double NNfunction_ss_sLuL::neuron0x163d340() {
   double input = input0x163d340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuL::input0x163e4a0() {
   double input = 2.48149;
   input += synapse0x160f580();
   input += synapse0x163e6c0();
   input += synapse0x163e700();
   input += synapse0x163e740();
   input += synapse0x163e780();
   return input;
}

double NNfunction_ss_sLuL::neuron0x163e4a0() {
   double input = input0x163e4a0();
   return (input * 1)+0;
}

double NNfunction_ss_sLuL::synapse0x13ca3d0() {
   return (neuron0x160a560()*-0.234439);
}

double NNfunction_ss_sLuL::synapse0x160a420() {
   return (neuron0x160a8a0()*0.00372469);
}

double NNfunction_ss_sLuL::synapse0x160a460() {
   return (neuron0x160abe0()*-0.583657);
}

double NNfunction_ss_sLuL::synapse0x160f870() {
   return (neuron0x160af20()*0.745804);
}

double NNfunction_ss_sLuL::synapse0x160f8b0() {
   return (neuron0x160b260()*-0.137654);
}

double NNfunction_ss_sLuL::synapse0x160f8f0() {
   return (neuron0x160b5a0()*0.163434);
}

double NNfunction_ss_sLuL::synapse0x160f930() {
   return (neuron0x160b8e0()*-0.159277);
}

double NNfunction_ss_sLuL::synapse0x160f970() {
   return (neuron0x160bc20()*-0.159469);
}

double NNfunction_ss_sLuL::synapse0x160f9b0() {
   return (neuron0x160bf60()*0.142494);
}

double NNfunction_ss_sLuL::synapse0x160f9f0() {
   return (neuron0x160c2a0()*0.246598);
}

double NNfunction_ss_sLuL::synapse0x160fa30() {
   return (neuron0x160c5e0()*0.155021);
}

double NNfunction_ss_sLuL::synapse0x160fa70() {
   return (neuron0x160c920()*-0.73569);
}

double NNfunction_ss_sLuL::synapse0x160fab0() {
   return (neuron0x160cc60()*0.57567);
}

double NNfunction_ss_sLuL::synapse0x160faf0() {
   return (neuron0x160cfa0()*0.164511);
}

double NNfunction_ss_sLuL::synapse0x160fb30() {
   return (neuron0x160d2e0()*0.0847114);
}

double NNfunction_ss_sLuL::synapse0x160fb70() {
   return (neuron0x160d620()*-0.145416);
}

double NNfunction_ss_sLuL::synapse0x160a390() {
   return (neuron0x160d960()*-0.0266746);
}

double NNfunction_ss_sLuL::synapse0x160a3d0() {
   return (neuron0x160dec0()*-0.365433);
}

double NNfunction_ss_sLuL::synapse0x13bbc70() {
   return (neuron0x160e0e0()*0.196732);
}

double NNfunction_ss_sLuL::synapse0x13bbcb0() {
   return (neuron0x160e420()*-0.00547342);
}

double NNfunction_ss_sLuL::synapse0x160fdd0() {
   return (neuron0x160e760()*-0.131376);
}

double NNfunction_ss_sLuL::synapse0x160fe10() {
   return (neuron0x160eaa0()*-0.0917803);
}

double NNfunction_ss_sLuL::synapse0x160fe50() {
   return (neuron0x160ede0()*-0.0336694);
}

double NNfunction_ss_sLuL::synapse0x160fe90() {
   return (neuron0x160f120()*-0.057783);
}

double NNfunction_ss_sLuL::synapse0x1610210() {
   return (neuron0x160a560()*0.738156);
}

double NNfunction_ss_sLuL::synapse0x1610250() {
   return (neuron0x160a8a0()*0.313592);
}

double NNfunction_ss_sLuL::synapse0x1610290() {
   return (neuron0x160abe0()*0.045227);
}

double NNfunction_ss_sLuL::synapse0x16102d0() {
   return (neuron0x160af20()*-0.18703);
}

double NNfunction_ss_sLuL::synapse0x1610310() {
   return (neuron0x160b260()*-0.0320338);
}

double NNfunction_ss_sLuL::synapse0x1610350() {
   return (neuron0x160b5a0()*-0.248382);
}

double NNfunction_ss_sLuL::synapse0x1610390() {
   return (neuron0x160b8e0()*0.292846);
}

double NNfunction_ss_sLuL::synapse0x16103d0() {
   return (neuron0x160bc20()*-0.234826);
}

double NNfunction_ss_sLuL::synapse0x1610410() {
   return (neuron0x160bf60()*0.552475);
}

double NNfunction_ss_sLuL::synapse0x160fcc0() {
   return (neuron0x160c2a0()*-0.627308);
}

double NNfunction_ss_sLuL::synapse0x160fd00() {
   return (neuron0x160c5e0()*0.302199);
}

double NNfunction_ss_sLuL::synapse0x160fd40() {
   return (neuron0x160c920()*-0.923953);
}

double NNfunction_ss_sLuL::synapse0x160fd80() {
   return (neuron0x160cc60()*-0.829068);
}

double NNfunction_ss_sLuL::synapse0x1610660() {
   return (neuron0x160cfa0()*0.272294);
}

double NNfunction_ss_sLuL::synapse0x16106a0() {
   return (neuron0x160d2e0()*0.979302);
}

double NNfunction_ss_sLuL::synapse0x16106e0() {
   return (neuron0x160d620()*0.394098);
}

double NNfunction_ss_sLuL::synapse0x1610060() {
   return (neuron0x160d960()*0.744562);
}

double NNfunction_ss_sLuL::synapse0x16100a0() {
   return (neuron0x160dec0()*0.0689043);
}

double NNfunction_ss_sLuL::synapse0x1610830() {
   return (neuron0x160e0e0()*-0.00191345);
}

double NNfunction_ss_sLuL::synapse0x1610870() {
   return (neuron0x160e420()*0.395519);
}

double NNfunction_ss_sLuL::synapse0x16108b0() {
   return (neuron0x160e760()*-0.46819);
}

double NNfunction_ss_sLuL::synapse0x16108f0() {
   return (neuron0x160eaa0()*-0.258567);
}

double NNfunction_ss_sLuL::synapse0x1610930() {
   return (neuron0x160ede0()*0.143324);
}

double NNfunction_ss_sLuL::synapse0x1610970() {
   return (neuron0x160f120()*-1.14696);
}

double NNfunction_ss_sLuL::synapse0x1610cf0() {
   return (neuron0x160a560()*-0.0979823);
}

double NNfunction_ss_sLuL::synapse0x1610d30() {
   return (neuron0x160a8a0()*-0.177594);
}

double NNfunction_ss_sLuL::synapse0x1610d70() {
   return (neuron0x160abe0()*-0.310303);
}

double NNfunction_ss_sLuL::synapse0x1610db0() {
   return (neuron0x160af20()*0.397574);
}

double NNfunction_ss_sLuL::synapse0x1610df0() {
   return (neuron0x160b260()*-0.17137);
}

double NNfunction_ss_sLuL::synapse0x1610e30() {
   return (neuron0x160b5a0()*-0.427241);
}

double NNfunction_ss_sLuL::synapse0x1610e70() {
   return (neuron0x160b8e0()*0.233015);
}

double NNfunction_ss_sLuL::synapse0x1610eb0() {
   return (neuron0x160bc20()*0.290853);
}

double NNfunction_ss_sLuL::synapse0x1610ef0() {
   return (neuron0x160bf60()*-0.428942);
}

double NNfunction_ss_sLuL::synapse0x1610f30() {
   return (neuron0x160c2a0()*0.000433905);
}

double NNfunction_ss_sLuL::synapse0x1610f70() {
   return (neuron0x160c5e0()*0.388547);
}

double NNfunction_ss_sLuL::synapse0x1610fb0() {
   return (neuron0x160c920()*0.57503);
}

double NNfunction_ss_sLuL::synapse0x1610ff0() {
   return (neuron0x160cc60()*0.704572);
}

double NNfunction_ss_sLuL::synapse0x1611030() {
   return (neuron0x160cfa0()*-0.0853209);
}

double NNfunction_ss_sLuL::synapse0x1611070() {
   return (neuron0x160d2e0()*-0.391081);
}

double NNfunction_ss_sLuL::synapse0x16110b0() {
   return (neuron0x160d620()*-0.0990057);
}

double NNfunction_ss_sLuL::synapse0x1610b40() {
   return (neuron0x160d960()*-0.367415);
}

double NNfunction_ss_sLuL::synapse0x1610b80() {
   return (neuron0x160dec0()*0.254462);
}

double NNfunction_ss_sLuL::synapse0x13c9ac0() {
   return (neuron0x160e0e0()*0.375524);
}

double NNfunction_ss_sLuL::synapse0x13c9b00() {
   return (neuron0x160e420()*0.914329);
}

double NNfunction_ss_sLuL::synapse0x15f95f0() {
   return (neuron0x160e760()*-0.101959);
}

double NNfunction_ss_sLuL::synapse0x15f9630() {
   return (neuron0x160eaa0()*-0.119396);
}

double NNfunction_ss_sLuL::synapse0x15f9670() {
   return (neuron0x160ede0()*-0.592443);
}

double NNfunction_ss_sLuL::synapse0x160a4a0() {
   return (neuron0x160f120()*-0.127782);
}

double NNfunction_ss_sLuL::synapse0x1610600() {
   return (neuron0x160a560()*-0.808333);
}

double NNfunction_ss_sLuL::synapse0x160a4e0() {
   return (neuron0x160a8a0()*0.636378);
}

double NNfunction_ss_sLuL::synapse0x160a520() {
   return (neuron0x160abe0()*-0.301295);
}

double NNfunction_ss_sLuL::synapse0x1611200() {
   return (neuron0x160af20()*0.607682);
}

double NNfunction_ss_sLuL::synapse0x1611240() {
   return (neuron0x160b260()*-0.0931892);
}

double NNfunction_ss_sLuL::synapse0x1611280() {
   return (neuron0x160b5a0()*0.201375);
}

double NNfunction_ss_sLuL::synapse0x16112c0() {
   return (neuron0x160b8e0()*0.24905);
}

double NNfunction_ss_sLuL::synapse0x1611300() {
   return (neuron0x160bc20()*-0.0401787);
}

double NNfunction_ss_sLuL::synapse0x1611340() {
   return (neuron0x160bf60()*0.062507);
}

double NNfunction_ss_sLuL::synapse0x1611380() {
   return (neuron0x160c2a0()*-0.376356);
}

double NNfunction_ss_sLuL::synapse0x16113c0() {
   return (neuron0x160c5e0()*0.794599);
}

double NNfunction_ss_sLuL::synapse0x1611400() {
   return (neuron0x160c920()*0.265905);
}

double NNfunction_ss_sLuL::synapse0x1611440() {
   return (neuron0x160cc60()*-0.389007);
}

double NNfunction_ss_sLuL::synapse0x1611480() {
   return (neuron0x160cfa0()*-0.150578);
}

double NNfunction_ss_sLuL::synapse0x16114c0() {
   return (neuron0x160d2e0()*0.0200791);
}

double NNfunction_ss_sLuL::synapse0x1611500() {
   return (neuron0x160d620()*-0.178204);
}

double NNfunction_ss_sLuL::synapse0x1610450() {
   return (neuron0x160d960()*-0.946751);
}

double NNfunction_ss_sLuL::synapse0x1610490() {
   return (neuron0x160dec0()*0.0573378);
}

double NNfunction_ss_sLuL::synapse0x1611650() {
   return (neuron0x160e0e0()*0.268336);
}

double NNfunction_ss_sLuL::synapse0x1611690() {
   return (neuron0x160e420()*-0.107427);
}

double NNfunction_ss_sLuL::synapse0x16116d0() {
   return (neuron0x160e760()*-0.146699);
}

double NNfunction_ss_sLuL::synapse0x1611710() {
   return (neuron0x160eaa0()*-0.38821);
}

double NNfunction_ss_sLuL::synapse0x1611750() {
   return (neuron0x160ede0()*-0.271465);
}

double NNfunction_ss_sLuL::synapse0x1611790() {
   return (neuron0x160f120()*-0.226036);
}

double NNfunction_ss_sLuL::synapse0x1611b10() {
   return (neuron0x160a560()*0.640143);
}

double NNfunction_ss_sLuL::synapse0x1611b50() {
   return (neuron0x160a8a0()*-0.153012);
}

double NNfunction_ss_sLuL::synapse0x1611b90() {
   return (neuron0x160abe0()*-0.605212);
}

double NNfunction_ss_sLuL::synapse0x1611bd0() {
   return (neuron0x160af20()*-0.0609048);
}

double NNfunction_ss_sLuL::synapse0x1611c10() {
   return (neuron0x160b260()*0.768152);
}

double NNfunction_ss_sLuL::synapse0x1611c50() {
   return (neuron0x160b5a0()*0.284341);
}

double NNfunction_ss_sLuL::synapse0x1611c90() {
   return (neuron0x160b8e0()*0.146369);
}

double NNfunction_ss_sLuL::synapse0x1611cd0() {
   return (neuron0x160bc20()*-1.23568);
}

double NNfunction_ss_sLuL::synapse0x1611d10() {
   return (neuron0x160bf60()*0.208619);
}

double NNfunction_ss_sLuL::synapse0x1611d50() {
   return (neuron0x160c2a0()*-0.215195);
}

double NNfunction_ss_sLuL::synapse0x1611d90() {
   return (neuron0x160c5e0()*0.350357);
}

double NNfunction_ss_sLuL::synapse0x1611dd0() {
   return (neuron0x160c920()*-0.428448);
}

double NNfunction_ss_sLuL::synapse0x1611e10() {
   return (neuron0x160cc60()*-0.386796);
}

double NNfunction_ss_sLuL::synapse0x1611e50() {
   return (neuron0x160cfa0()*-0.131668);
}

double NNfunction_ss_sLuL::synapse0x1611e90() {
   return (neuron0x160d2e0()*-0.405993);
}

double NNfunction_ss_sLuL::synapse0x1611ed0() {
   return (neuron0x160d620()*0.0935569);
}

double NNfunction_ss_sLuL::synapse0x1611960() {
   return (neuron0x160d960()*0.409708);
}

double NNfunction_ss_sLuL::synapse0x16119a0() {
   return (neuron0x160dec0()*0.0367948);
}

double NNfunction_ss_sLuL::synapse0x1612020() {
   return (neuron0x160e0e0()*0.979197);
}

double NNfunction_ss_sLuL::synapse0x1612060() {
   return (neuron0x160e420()*-0.445056);
}

double NNfunction_ss_sLuL::synapse0x16120a0() {
   return (neuron0x160e760()*0.40501);
}

double NNfunction_ss_sLuL::synapse0x16120e0() {
   return (neuron0x160eaa0()*-0.180079);
}

double NNfunction_ss_sLuL::synapse0x1612120() {
   return (neuron0x160ede0()*0.341372);
}

double NNfunction_ss_sLuL::synapse0x1612160() {
   return (neuron0x160f120()*0.02458);
}

double NNfunction_ss_sLuL::synapse0x16124e0() {
   return (neuron0x160a560()*-0.368435);
}

double NNfunction_ss_sLuL::synapse0x1612520() {
   return (neuron0x160a8a0()*0.953044);
}

double NNfunction_ss_sLuL::synapse0x1612560() {
   return (neuron0x160abe0()*-0.439748);
}

double NNfunction_ss_sLuL::synapse0x16125a0() {
   return (neuron0x160af20()*0.344615);
}

double NNfunction_ss_sLuL::synapse0x16125e0() {
   return (neuron0x160b260()*0.459956);
}

double NNfunction_ss_sLuL::synapse0x1612620() {
   return (neuron0x160b5a0()*-0.282775);
}

double NNfunction_ss_sLuL::synapse0x1612660() {
   return (neuron0x160b8e0()*0.443336);
}

double NNfunction_ss_sLuL::synapse0x16126a0() {
   return (neuron0x160bc20()*0.373587);
}

double NNfunction_ss_sLuL::synapse0x16126e0() {
   return (neuron0x160bf60()*0.265024);
}

double NNfunction_ss_sLuL::synapse0x13c9e30() {
   return (neuron0x160c2a0()*-0.00216774);
}

double NNfunction_ss_sLuL::synapse0x13c9e70() {
   return (neuron0x160c5e0()*-0.049557);
}

double NNfunction_ss_sLuL::synapse0x13c9eb0() {
   return (neuron0x160c920()*-0.390734);
}

double NNfunction_ss_sLuL::synapse0x13c9ef0() {
   return (neuron0x160cc60()*-0.197641);
}

double NNfunction_ss_sLuL::synapse0x13c9f30() {
   return (neuron0x160cfa0()*-0.365197);
}

double NNfunction_ss_sLuL::synapse0x13c9f70() {
   return (neuron0x160d2e0()*-0.292766);
}

double NNfunction_ss_sLuL::synapse0x13c9fb0() {
   return (neuron0x160d620()*-0.370103);
}

double NNfunction_ss_sLuL::synapse0x1612330() {
   return (neuron0x160d960()*-0.101492);
}

double NNfunction_ss_sLuL::synapse0x1612370() {
   return (neuron0x160dec0()*-0.560706);
}

double NNfunction_ss_sLuL::synapse0x13ca100() {
   return (neuron0x160e0e0()*-0.225842);
}

double NNfunction_ss_sLuL::synapse0x13ca140() {
   return (neuron0x160e420()*0.170757);
}

double NNfunction_ss_sLuL::synapse0x13ca180() {
   return (neuron0x160e760()*-0.647353);
}

double NNfunction_ss_sLuL::synapse0x13ca1c0() {
   return (neuron0x160eaa0()*0.247364);
}

double NNfunction_ss_sLuL::synapse0x13ca200() {
   return (neuron0x160ede0()*-0.0663176);
}

double NNfunction_ss_sLuL::synapse0x1612f30() {
   return (neuron0x160f120()*0.0376262);
}

double NNfunction_ss_sLuL::synapse0x16132b0() {
   return (neuron0x160a560()*-0.0567643);
}

double NNfunction_ss_sLuL::synapse0x16132f0() {
   return (neuron0x160a8a0()*-0.16655);
}

double NNfunction_ss_sLuL::synapse0x1613330() {
   return (neuron0x160abe0()*0.121245);
}

double NNfunction_ss_sLuL::synapse0x1613370() {
   return (neuron0x160af20()*0.670113);
}

double NNfunction_ss_sLuL::synapse0x16133b0() {
   return (neuron0x160b260()*0.190351);
}

double NNfunction_ss_sLuL::synapse0x16133f0() {
   return (neuron0x160b5a0()*0.067319);
}

double NNfunction_ss_sLuL::synapse0x1613430() {
   return (neuron0x160b8e0()*0.267458);
}

double NNfunction_ss_sLuL::synapse0x1613470() {
   return (neuron0x160bc20()*-0.237843);
}

double NNfunction_ss_sLuL::synapse0x16134b0() {
   return (neuron0x160bf60()*-0.175481);
}

double NNfunction_ss_sLuL::synapse0x16134f0() {
   return (neuron0x160c2a0()*-0.0854338);
}

double NNfunction_ss_sLuL::synapse0x1613530() {
   return (neuron0x160c5e0()*-0.0826668);
}

double NNfunction_ss_sLuL::synapse0x1613570() {
   return (neuron0x160c920()*-0.310568);
}

double NNfunction_ss_sLuL::synapse0x16135b0() {
   return (neuron0x160cc60()*-0.353023);
}

double NNfunction_ss_sLuL::synapse0x16135f0() {
   return (neuron0x160cfa0()*0.120216);
}

double NNfunction_ss_sLuL::synapse0x1613630() {
   return (neuron0x160d2e0()*0.0591456);
}

double NNfunction_ss_sLuL::synapse0x1613670() {
   return (neuron0x160d620()*-0.0521289);
}

double NNfunction_ss_sLuL::synapse0x1613100() {
   return (neuron0x160d960()*-0.0452915);
}

double NNfunction_ss_sLuL::synapse0x1613140() {
   return (neuron0x160dec0()*-0.0398079);
}

double NNfunction_ss_sLuL::synapse0x16137c0() {
   return (neuron0x160e0e0()*-0.0577728);
}

double NNfunction_ss_sLuL::synapse0x1613800() {
   return (neuron0x160e420()*-0.303222);
}

double NNfunction_ss_sLuL::synapse0x1613840() {
   return (neuron0x160e760()*-0.00166694);
}

double NNfunction_ss_sLuL::synapse0x1613880() {
   return (neuron0x160eaa0()*-0.00361269);
}

double NNfunction_ss_sLuL::synapse0x16138c0() {
   return (neuron0x160ede0()*-0.0115594);
}

double NNfunction_ss_sLuL::synapse0x1613900() {
   return (neuron0x160f120()*0.148037);
}

double NNfunction_ss_sLuL::synapse0x1613c80() {
   return (neuron0x160a560()*0.289441);
}

double NNfunction_ss_sLuL::synapse0x1613cc0() {
   return (neuron0x160a8a0()*0.0880161);
}

double NNfunction_ss_sLuL::synapse0x1613d00() {
   return (neuron0x160abe0()*0.0728945);
}

double NNfunction_ss_sLuL::synapse0x1613d40() {
   return (neuron0x160af20()*-0.62122);
}

double NNfunction_ss_sLuL::synapse0x1613d80() {
   return (neuron0x160b260()*0.0864862);
}

double NNfunction_ss_sLuL::synapse0x1613dc0() {
   return (neuron0x160b5a0()*0.0681651);
}

double NNfunction_ss_sLuL::synapse0x1613e00() {
   return (neuron0x160b8e0()*0.556191);
}

double NNfunction_ss_sLuL::synapse0x1613e40() {
   return (neuron0x160bc20()*-0.536551);
}

double NNfunction_ss_sLuL::synapse0x1613e80() {
   return (neuron0x160bf60()*0.158346);
}

double NNfunction_ss_sLuL::synapse0x1613ec0() {
   return (neuron0x160c2a0()*-0.234557);
}

double NNfunction_ss_sLuL::synapse0x1613f00() {
   return (neuron0x160c5e0()*-0.0292971);
}

double NNfunction_ss_sLuL::synapse0x1613f40() {
   return (neuron0x160c920()*-0.331785);
}

double NNfunction_ss_sLuL::synapse0x1613f80() {
   return (neuron0x160cc60()*0.393677);
}

double NNfunction_ss_sLuL::synapse0x1613fc0() {
   return (neuron0x160cfa0()*0.0158863);
}

double NNfunction_ss_sLuL::synapse0x1614000() {
   return (neuron0x160d2e0()*0.112152);
}

double NNfunction_ss_sLuL::synapse0x1614040() {
   return (neuron0x160d620()*-0.0320044);
}

double NNfunction_ss_sLuL::synapse0x1613ad0() {
   return (neuron0x160d960()*-0.00440013);
}

double NNfunction_ss_sLuL::synapse0x1613b10() {
   return (neuron0x160dec0()*-0.135763);
}

double NNfunction_ss_sLuL::synapse0x1614190() {
   return (neuron0x160e0e0()*0.0140527);
}

double NNfunction_ss_sLuL::synapse0x16141d0() {
   return (neuron0x160e420()*0.242356);
}

double NNfunction_ss_sLuL::synapse0x1614210() {
   return (neuron0x160e760()*-0.0271237);
}

double NNfunction_ss_sLuL::synapse0x1614250() {
   return (neuron0x160eaa0()*0.0232668);
}

double NNfunction_ss_sLuL::synapse0x1614290() {
   return (neuron0x160ede0()*-0.267667);
}

double NNfunction_ss_sLuL::synapse0x16142d0() {
   return (neuron0x160f120()*0.325995);
}

double NNfunction_ss_sLuL::synapse0x160ddb0() {
   return (neuron0x160a560()*0.483644);
}

double NNfunction_ss_sLuL::synapse0x160ddf0() {
   return (neuron0x160a8a0()*0.621953);
}

double NNfunction_ss_sLuL::synapse0x160de30() {
   return (neuron0x160abe0()*-0.800764);
}

double NNfunction_ss_sLuL::synapse0x160de70() {
   return (neuron0x160af20()*0.104721);
}

double NNfunction_ss_sLuL::synapse0x1614860() {
   return (neuron0x160b260()*0.0531216);
}

double NNfunction_ss_sLuL::synapse0x16148a0() {
   return (neuron0x160b5a0()*0.114388);
}

double NNfunction_ss_sLuL::synapse0x16148e0() {
   return (neuron0x160b8e0()*-0.385238);
}

double NNfunction_ss_sLuL::synapse0x1614920() {
   return (neuron0x160bc20()*0.687158);
}

double NNfunction_ss_sLuL::synapse0x1614960() {
   return (neuron0x160bf60()*-0.671951);
}

double NNfunction_ss_sLuL::synapse0x16149a0() {
   return (neuron0x160c2a0()*-0.386461);
}

double NNfunction_ss_sLuL::synapse0x16149e0() {
   return (neuron0x160c5e0()*0.857746);
}

double NNfunction_ss_sLuL::synapse0x1614a20() {
   return (neuron0x160c920()*0.480966);
}

double NNfunction_ss_sLuL::synapse0x1614a60() {
   return (neuron0x160cc60()*-0.435279);
}

double NNfunction_ss_sLuL::synapse0x1614aa0() {
   return (neuron0x160cfa0()*0.580511);
}

double NNfunction_ss_sLuL::synapse0x1614ae0() {
   return (neuron0x160d2e0()*-0.485537);
}

double NNfunction_ss_sLuL::synapse0x1614b20() {
   return (neuron0x160d620()*1.43528);
}

double NNfunction_ss_sLuL::synapse0x16144a0() {
   return (neuron0x160d960()*-0.288041);
}

double NNfunction_ss_sLuL::synapse0x16144e0() {
   return (neuron0x160dec0()*0.366669);
}

double NNfunction_ss_sLuL::synapse0x1614c70() {
   return (neuron0x160e0e0()*0.923307);
}

double NNfunction_ss_sLuL::synapse0x1614cb0() {
   return (neuron0x160e420()*0.244762);
}

double NNfunction_ss_sLuL::synapse0x1614cf0() {
   return (neuron0x160e760()*-0.0408977);
}

double NNfunction_ss_sLuL::synapse0x1614d30() {
   return (neuron0x160eaa0()*0.329915);
}

double NNfunction_ss_sLuL::synapse0x1614d70() {
   return (neuron0x160ede0()*-0.312316);
}

double NNfunction_ss_sLuL::synapse0x1614db0() {
   return (neuron0x160f120()*0.596581);
}

double NNfunction_ss_sLuL::synapse0x1615130() {
   return (neuron0x160a560()*0.0352725);
}

double NNfunction_ss_sLuL::synapse0x1615170() {
   return (neuron0x160a8a0()*0.0539226);
}

double NNfunction_ss_sLuL::synapse0x16151b0() {
   return (neuron0x160abe0()*-0.0966026);
}

double NNfunction_ss_sLuL::synapse0x16151f0() {
   return (neuron0x160af20()*2.11952);
}

double NNfunction_ss_sLuL::synapse0x1615230() {
   return (neuron0x160b260()*-0.0960027);
}

double NNfunction_ss_sLuL::synapse0x1615270() {
   return (neuron0x160b5a0()*0.0343851);
}

double NNfunction_ss_sLuL::synapse0x16152b0() {
   return (neuron0x160b8e0()*-0.102525);
}

double NNfunction_ss_sLuL::synapse0x16152f0() {
   return (neuron0x160bc20()*-0.0361633);
}

double NNfunction_ss_sLuL::synapse0x1615330() {
   return (neuron0x160bf60()*-0.00365047);
}

double NNfunction_ss_sLuL::synapse0x1615370() {
   return (neuron0x160c2a0()*0.110245);
}

double NNfunction_ss_sLuL::synapse0x16153b0() {
   return (neuron0x160c5e0()*0.0303096);
}

double NNfunction_ss_sLuL::synapse0x16153f0() {
   return (neuron0x160c920()*-0.457515);
}

double NNfunction_ss_sLuL::synapse0x1615430() {
   return (neuron0x160cc60()*-0.905568);
}

double NNfunction_ss_sLuL::synapse0x1615470() {
   return (neuron0x160cfa0()*0.0567203);
}

double NNfunction_ss_sLuL::synapse0x16154b0() {
   return (neuron0x160d2e0()*-0.0829411);
}

double NNfunction_ss_sLuL::synapse0x16154f0() {
   return (neuron0x160d620()*-0.00489894);
}

double NNfunction_ss_sLuL::synapse0x1614f80() {
   return (neuron0x160d960()*0.0796939);
}

double NNfunction_ss_sLuL::synapse0x1614fc0() {
   return (neuron0x160dec0()*0.0732037);
}

double NNfunction_ss_sLuL::synapse0x1615640() {
   return (neuron0x160e0e0()*0.0085928);
}

double NNfunction_ss_sLuL::synapse0x1615680() {
   return (neuron0x160e420()*-0.0527967);
}

double NNfunction_ss_sLuL::synapse0x16156c0() {
   return (neuron0x160e760()*-0.0295219);
}

double NNfunction_ss_sLuL::synapse0x1615700() {
   return (neuron0x160eaa0()*0.0728511);
}

double NNfunction_ss_sLuL::synapse0x1615740() {
   return (neuron0x160ede0()*-0.119463);
}

double NNfunction_ss_sLuL::synapse0x1615780() {
   return (neuron0x160f120()*0.140145);
}

double NNfunction_ss_sLuL::synapse0x1615b00() {
   return (neuron0x160a560()*-0.609582);
}

double NNfunction_ss_sLuL::synapse0x1615b40() {
   return (neuron0x160a8a0()*0.195988);
}

double NNfunction_ss_sLuL::synapse0x1615b80() {
   return (neuron0x160abe0()*-0.012872);
}

double NNfunction_ss_sLuL::synapse0x1615bc0() {
   return (neuron0x160af20()*-0.0383729);
}

double NNfunction_ss_sLuL::synapse0x1615c00() {
   return (neuron0x160b260()*-0.449305);
}

double NNfunction_ss_sLuL::synapse0x1615c40() {
   return (neuron0x160b5a0()*0.556197);
}

double NNfunction_ss_sLuL::synapse0x1615c80() {
   return (neuron0x160b8e0()*0.28875);
}

double NNfunction_ss_sLuL::synapse0x1615cc0() {
   return (neuron0x160bc20()*-1.37565);
}

double NNfunction_ss_sLuL::synapse0x1615d00() {
   return (neuron0x160bf60()*0.398521);
}

double NNfunction_ss_sLuL::synapse0x1615d40() {
   return (neuron0x160c2a0()*0.406531);
}

double NNfunction_ss_sLuL::synapse0x1615d80() {
   return (neuron0x160c5e0()*0.593825);
}

double NNfunction_ss_sLuL::synapse0x1615dc0() {
   return (neuron0x160c920()*0.539566);
}

double NNfunction_ss_sLuL::synapse0x1615e00() {
   return (neuron0x160cc60()*0.0903742);
}

double NNfunction_ss_sLuL::synapse0x1615e40() {
   return (neuron0x160cfa0()*0.209641);
}

double NNfunction_ss_sLuL::synapse0x1615e80() {
   return (neuron0x160d2e0()*0.470209);
}

double NNfunction_ss_sLuL::synapse0x1615ec0() {
   return (neuron0x160d620()*0.726169);
}

double NNfunction_ss_sLuL::synapse0x1615950() {
   return (neuron0x160d960()*-0.95939);
}

double NNfunction_ss_sLuL::synapse0x1615990() {
   return (neuron0x160dec0()*0.0488317);
}

double NNfunction_ss_sLuL::synapse0x1612720() {
   return (neuron0x160e0e0()*-0.477233);
}

double NNfunction_ss_sLuL::synapse0x1612760() {
   return (neuron0x160e420()*-0.26416);
}

double NNfunction_ss_sLuL::synapse0x16127a0() {
   return (neuron0x160e760()*-0.496803);
}

double NNfunction_ss_sLuL::synapse0x16127e0() {
   return (neuron0x160eaa0()*0.9106);
}

double NNfunction_ss_sLuL::synapse0x1612820() {
   return (neuron0x160ede0()*0.0612183);
}

double NNfunction_ss_sLuL::synapse0x1612860() {
   return (neuron0x160f120()*0.675141);
}

double NNfunction_ss_sLuL::synapse0x1612be0() {
   return (neuron0x160a560()*-0.284988);
}

double NNfunction_ss_sLuL::synapse0x1612c20() {
   return (neuron0x160a8a0()*0.102418);
}

double NNfunction_ss_sLuL::synapse0x1612c60() {
   return (neuron0x160abe0()*-0.300194);
}

double NNfunction_ss_sLuL::synapse0x1612ca0() {
   return (neuron0x160af20()*1.21499);
}

double NNfunction_ss_sLuL::synapse0x1612ce0() {
   return (neuron0x160b260()*0.0551279);
}

double NNfunction_ss_sLuL::synapse0x1612d20() {
   return (neuron0x160b5a0()*0.195783);
}

double NNfunction_ss_sLuL::synapse0x1612d60() {
   return (neuron0x160b8e0()*-0.324775);
}

double NNfunction_ss_sLuL::synapse0x1612da0() {
   return (neuron0x160bc20()*0.277561);
}

double NNfunction_ss_sLuL::synapse0x1612de0() {
   return (neuron0x160bf60()*0.0753498);
}

double NNfunction_ss_sLuL::synapse0x1612e20() {
   return (neuron0x160c2a0()*0.09794);
}

double NNfunction_ss_sLuL::synapse0x1612e60() {
   return (neuron0x160c5e0()*-0.0597532);
}

double NNfunction_ss_sLuL::synapse0x1612ea0() {
   return (neuron0x160c920()*1.05313);
}

double NNfunction_ss_sLuL::synapse0x1612ee0() {
   return (neuron0x160cc60()*-0.394148);
}

double NNfunction_ss_sLuL::synapse0x1617020() {
   return (neuron0x160cfa0()*-0.305524);
}

double NNfunction_ss_sLuL::synapse0x1617060() {
   return (neuron0x160d2e0()*-0.0236899);
}

double NNfunction_ss_sLuL::synapse0x16170a0() {
   return (neuron0x160d620()*-0.0153717);
}

double NNfunction_ss_sLuL::synapse0x1612a30() {
   return (neuron0x160d960()*-0.10952);
}

double NNfunction_ss_sLuL::synapse0x1612a70() {
   return (neuron0x160dec0()*-0.232164);
}

double NNfunction_ss_sLuL::synapse0x16171f0() {
   return (neuron0x160e0e0()*0.00283609);
}

double NNfunction_ss_sLuL::synapse0x1617230() {
   return (neuron0x160e420()*0.166782);
}

double NNfunction_ss_sLuL::synapse0x1617270() {
   return (neuron0x160e760()*-0.448856);
}

double NNfunction_ss_sLuL::synapse0x16172b0() {
   return (neuron0x160eaa0()*0.328855);
}

double NNfunction_ss_sLuL::synapse0x16172f0() {
   return (neuron0x160ede0()*0.413792);
}

double NNfunction_ss_sLuL::synapse0x1617330() {
   return (neuron0x160f120()*-0.241013);
}

double NNfunction_ss_sLuL::synapse0x16176b0() {
   return (neuron0x160a560()*-0.0290719);
}

double NNfunction_ss_sLuL::synapse0x16176f0() {
   return (neuron0x160a8a0()*-0.0552813);
}

double NNfunction_ss_sLuL::synapse0x1617730() {
   return (neuron0x160abe0()*-0.639688);
}

double NNfunction_ss_sLuL::synapse0x1617770() {
   return (neuron0x160af20()*0.0613871);
}

double NNfunction_ss_sLuL::synapse0x16177b0() {
   return (neuron0x160b260()*-0.0476055);
}

double NNfunction_ss_sLuL::synapse0x16177f0() {
   return (neuron0x160b5a0()*0.101347);
}

double NNfunction_ss_sLuL::synapse0x1617830() {
   return (neuron0x160b8e0()*-0.0776988);
}

double NNfunction_ss_sLuL::synapse0x1617870() {
   return (neuron0x160bc20()*-0.0281308);
}

double NNfunction_ss_sLuL::synapse0x16178b0() {
   return (neuron0x160bf60()*0.00244433);
}

double NNfunction_ss_sLuL::synapse0x16178f0() {
   return (neuron0x160c2a0()*-0.01453);
}

double NNfunction_ss_sLuL::synapse0x1617930() {
   return (neuron0x160c5e0()*0.0321469);
}

double NNfunction_ss_sLuL::synapse0x1617970() {
   return (neuron0x160c920()*0.00092124);
}

double NNfunction_ss_sLuL::synapse0x16179b0() {
   return (neuron0x160cc60()*0.0762706);
}

double NNfunction_ss_sLuL::synapse0x16179f0() {
   return (neuron0x160cfa0()*0.130239);
}

double NNfunction_ss_sLuL::synapse0x1617a30() {
   return (neuron0x160d2e0()*-0.0726474);
}

double NNfunction_ss_sLuL::synapse0x1617a70() {
   return (neuron0x160d620()*-0.294211);
}

double NNfunction_ss_sLuL::synapse0x1617500() {
   return (neuron0x160d960()*0.162166);
}

double NNfunction_ss_sLuL::synapse0x1617540() {
   return (neuron0x160dec0()*-0.151605);
}

double NNfunction_ss_sLuL::synapse0x1617bc0() {
   return (neuron0x160e0e0()*-0.087217);
}

double NNfunction_ss_sLuL::synapse0x1617c00() {
   return (neuron0x160e420()*-0.0342263);
}

double NNfunction_ss_sLuL::synapse0x1617c40() {
   return (neuron0x160e760()*0.0114566);
}

double NNfunction_ss_sLuL::synapse0x1617c80() {
   return (neuron0x160eaa0()*-0.0170055);
}

double NNfunction_ss_sLuL::synapse0x1617cc0() {
   return (neuron0x160ede0()*-0.00434683);
}

double NNfunction_ss_sLuL::synapse0x1617d00() {
   return (neuron0x160f120()*0.0339101);
}

double NNfunction_ss_sLuL::synapse0x1618080() {
   return (neuron0x160a560()*0.0153755);
}

double NNfunction_ss_sLuL::synapse0x16180c0() {
   return (neuron0x160a8a0()*-0.00893306);
}

double NNfunction_ss_sLuL::synapse0x1618100() {
   return (neuron0x160abe0()*-0.00243424);
}

double NNfunction_ss_sLuL::synapse0x1618140() {
   return (neuron0x160af20()*-20.824);
}

double NNfunction_ss_sLuL::synapse0x1618180() {
   return (neuron0x160b260()*-0.0413772);
}

double NNfunction_ss_sLuL::synapse0x16181c0() {
   return (neuron0x160b5a0()*-0.00334282);
}

double NNfunction_ss_sLuL::synapse0x1618200() {
   return (neuron0x160b8e0()*-0.0235726);
}

double NNfunction_ss_sLuL::synapse0x1618240() {
   return (neuron0x160bc20()*0.0205804);
}

double NNfunction_ss_sLuL::synapse0x1618280() {
   return (neuron0x160bf60()*-0.00550236);
}

double NNfunction_ss_sLuL::synapse0x16182c0() {
   return (neuron0x160c2a0()*0.0123529);
}

double NNfunction_ss_sLuL::synapse0x1618300() {
   return (neuron0x160c5e0()*-0.0137312);
}

double NNfunction_ss_sLuL::synapse0x1618340() {
   return (neuron0x160c920()*-0.706836);
}

double NNfunction_ss_sLuL::synapse0x1618380() {
   return (neuron0x160cc60()*-0.299035);
}

double NNfunction_ss_sLuL::synapse0x16183c0() {
   return (neuron0x160cfa0()*-0.0197957);
}

double NNfunction_ss_sLuL::synapse0x1618400() {
   return (neuron0x160d2e0()*-0.00944161);
}

double NNfunction_ss_sLuL::synapse0x1618440() {
   return (neuron0x160d620()*-0.018991);
}

double NNfunction_ss_sLuL::synapse0x1617ed0() {
   return (neuron0x160d960()*-0.0298774);
}

double NNfunction_ss_sLuL::synapse0x1617f10() {
   return (neuron0x160dec0()*0.0518828);
}

double NNfunction_ss_sLuL::synapse0x1618590() {
   return (neuron0x160e0e0()*0.0110191);
}

double NNfunction_ss_sLuL::synapse0x16185d0() {
   return (neuron0x160e420()*0.0157483);
}

double NNfunction_ss_sLuL::synapse0x1618610() {
   return (neuron0x160e760()*-0.0172674);
}

double NNfunction_ss_sLuL::synapse0x1618650() {
   return (neuron0x160eaa0()*-0.0108488);
}

double NNfunction_ss_sLuL::synapse0x1618690() {
   return (neuron0x160ede0()*-0.0361459);
}

double NNfunction_ss_sLuL::synapse0x16186d0() {
   return (neuron0x160f120()*-0.000156947);
}

double NNfunction_ss_sLuL::synapse0x1618a50() {
   return (neuron0x160a560()*-0.010198);
}

double NNfunction_ss_sLuL::synapse0x1618a90() {
   return (neuron0x160a8a0()*0.00479033);
}

double NNfunction_ss_sLuL::synapse0x1618ad0() {
   return (neuron0x160abe0()*0.00683955);
}

double NNfunction_ss_sLuL::synapse0x1618b10() {
   return (neuron0x160af20()*-0.662274);
}

double NNfunction_ss_sLuL::synapse0x1618b50() {
   return (neuron0x160b260()*-0.0283906);
}

double NNfunction_ss_sLuL::synapse0x1618b90() {
   return (neuron0x160b5a0()*0.021424);
}

double NNfunction_ss_sLuL::synapse0x1618bd0() {
   return (neuron0x160b8e0()*-0.0018492);
}

double NNfunction_ss_sLuL::synapse0x1618c10() {
   return (neuron0x160bc20()*0.0266433);
}

double NNfunction_ss_sLuL::synapse0x1618c50() {
   return (neuron0x160bf60()*-0.0774843);
}

double NNfunction_ss_sLuL::synapse0x1618c90() {
   return (neuron0x160c2a0()*0.0179479);
}

double NNfunction_ss_sLuL::synapse0x1618cd0() {
   return (neuron0x160c5e0()*-0.073912);
}

double NNfunction_ss_sLuL::synapse0x1618d10() {
   return (neuron0x160c920()*2.63041);
}

double NNfunction_ss_sLuL::synapse0x1618d50() {
   return (neuron0x160cc60()*0.583675);
}

double NNfunction_ss_sLuL::synapse0x1618d90() {
   return (neuron0x160cfa0()*0.0377259);
}

double NNfunction_ss_sLuL::synapse0x1618dd0() {
   return (neuron0x160d2e0()*0.0484001);
}

double NNfunction_ss_sLuL::synapse0x1618e10() {
   return (neuron0x160d620()*0.0335163);
}

double NNfunction_ss_sLuL::synapse0x16188a0() {
   return (neuron0x160d960()*-0.00755737);
}

double NNfunction_ss_sLuL::synapse0x16188e0() {
   return (neuron0x160dec0()*0.00338582);
}

double NNfunction_ss_sLuL::synapse0x1618f60() {
   return (neuron0x160e0e0()*-0.024553);
}

double NNfunction_ss_sLuL::synapse0x1618fa0() {
   return (neuron0x160e420()*-0.0881502);
}

double NNfunction_ss_sLuL::synapse0x1618fe0() {
   return (neuron0x160e760()*-0.0161923);
}

double NNfunction_ss_sLuL::synapse0x1619020() {
   return (neuron0x160eaa0()*-0.00490907);
}

double NNfunction_ss_sLuL::synapse0x1619060() {
   return (neuron0x160ede0()*-0.0490369);
}

double NNfunction_ss_sLuL::synapse0x16190a0() {
   return (neuron0x160f120()*0.0413045);
}

double NNfunction_ss_sLuL::synapse0x1619420() {
   return (neuron0x160a560()*0.00612623);
}

double NNfunction_ss_sLuL::synapse0x160a780() {
   return (neuron0x160a8a0()*-0.0588408);
}

double NNfunction_ss_sLuL::synapse0x160a7c0() {
   return (neuron0x160abe0()*0.605045);
}

double NNfunction_ss_sLuL::synapse0x160aac0() {
   return (neuron0x160af20()*0.482725);
}

double NNfunction_ss_sLuL::synapse0x160ab00() {
   return (neuron0x160b260()*0.0905404);
}

double NNfunction_ss_sLuL::synapse0x160ae00() {
   return (neuron0x160b5a0()*0.0403527);
}

double NNfunction_ss_sLuL::synapse0x160ae40() {
   return (neuron0x160b8e0()*-0.0484902);
}

double NNfunction_ss_sLuL::synapse0x160b140() {
   return (neuron0x160bc20()*0.0247133);
}

double NNfunction_ss_sLuL::synapse0x160b180() {
   return (neuron0x160bf60()*-0.0156166);
}

double NNfunction_ss_sLuL::synapse0x160b480() {
   return (neuron0x160c2a0()*-0.0100804);
}

double NNfunction_ss_sLuL::synapse0x160b4c0() {
   return (neuron0x160c5e0()*0.0242627);
}

double NNfunction_ss_sLuL::synapse0x160b7c0() {
   return (neuron0x160c920()*-0.0301538);
}

double NNfunction_ss_sLuL::synapse0x160b800() {
   return (neuron0x160cc60()*-0.0636052);
}

double NNfunction_ss_sLuL::synapse0x160bb00() {
   return (neuron0x160cfa0()*0.102824);
}

double NNfunction_ss_sLuL::synapse0x160bb40() {
   return (neuron0x160d2e0()*-0.145924);
}

double NNfunction_ss_sLuL::synapse0x160be40() {
   return (neuron0x160d620()*-0.235996);
}

double NNfunction_ss_sLuL::synapse0x160be80() {
   return (neuron0x160d960()*0.115499);
}

double NNfunction_ss_sLuL::synapse0x160c180() {
   return (neuron0x160dec0()*-0.129086);
}

double NNfunction_ss_sLuL::synapse0x160c1c0() {
   return (neuron0x160e0e0()*-0.134777);
}

double NNfunction_ss_sLuL::synapse0x160c4c0() {
   return (neuron0x160e420()*-0.0262321);
}

double NNfunction_ss_sLuL::synapse0x160c500() {
   return (neuron0x160e760()*-0.00590473);
}

double NNfunction_ss_sLuL::synapse0x160c800() {
   return (neuron0x160eaa0()*-0.0384524);
}

double NNfunction_ss_sLuL::synapse0x160c840() {
   return (neuron0x160ede0()*-0.0138353);
}

double NNfunction_ss_sLuL::synapse0x160cb40() {
   return (neuron0x160f120()*-0.00699254);
}

double NNfunction_ss_sLuL::synapse0x160cb80() {
   return (neuron0x160a560()*0.944692);
}

double NNfunction_ss_sLuL::synapse0x160d840() {
   return (neuron0x160a8a0()*-0.060829);
}

double NNfunction_ss_sLuL::synapse0x160d880() {
   return (neuron0x160abe0()*0.171059);
}

double NNfunction_ss_sLuL::synapse0x1619270() {
   return (neuron0x160af20()*0.846796);
}

double NNfunction_ss_sLuL::synapse0x16192b0() {
   return (neuron0x160b260()*0.238577);
}

double NNfunction_ss_sLuL::synapse0x160db80() {
   return (neuron0x160b5a0()*1.34437);
}

double NNfunction_ss_sLuL::synapse0x160dbc0() {
   return (neuron0x160b8e0()*-0.852364);
}

double NNfunction_ss_sLuL::synapse0x13bbb50() {
   return (neuron0x160bc20()*0.854821);
}

double NNfunction_ss_sLuL::synapse0x13bbb90() {
   return (neuron0x160bf60()*-0.842942);
}

double NNfunction_ss_sLuL::synapse0x160e300() {
   return (neuron0x160c2a0()*-0.230241);
}

double NNfunction_ss_sLuL::synapse0x160e340() {
   return (neuron0x160c5e0()*-0.198668);
}

double NNfunction_ss_sLuL::synapse0x160e640() {
   return (neuron0x160c920()*1.13047);
}

double NNfunction_ss_sLuL::synapse0x160e680() {
   return (neuron0x160cc60()*0.722585);
}

double NNfunction_ss_sLuL::synapse0x160e980() {
   return (neuron0x160cfa0()*-0.473357);
}

double NNfunction_ss_sLuL::synapse0x160e9c0() {
   return (neuron0x160d2e0()*0.347888);
}

double NNfunction_ss_sLuL::synapse0x160ecc0() {
   return (neuron0x160d620()*0.406937);
}

double NNfunction_ss_sLuL::synapse0x160ed00() {
   return (neuron0x160d960()*0.485565);
}

double NNfunction_ss_sLuL::synapse0x160f000() {
   return (neuron0x160dec0()*0.381104);
}

double NNfunction_ss_sLuL::synapse0x160f040() {
   return (neuron0x160e0e0()*-1.2762);
}

double NNfunction_ss_sLuL::synapse0x160f340() {
   return (neuron0x160e420()*0.0369798);
}

double NNfunction_ss_sLuL::synapse0x160f380() {
   return (neuron0x160e760()*-0.0793729);
}

double NNfunction_ss_sLuL::synapse0x160ce80() {
   return (neuron0x160eaa0()*0.663753);
}

double NNfunction_ss_sLuL::synapse0x160cec0() {
   return (neuron0x160ede0()*-0.247292);
}

double NNfunction_ss_sLuL::synapse0x161b190() {
   return (neuron0x160f120()*0.220286);
}

double NNfunction_ss_sLuL::synapse0x161b510() {
   return (neuron0x160a560()*-0.131867);
}

double NNfunction_ss_sLuL::synapse0x161b550() {
   return (neuron0x160a8a0()*0.114406);
}

double NNfunction_ss_sLuL::synapse0x161b590() {
   return (neuron0x160abe0()*0.555628);
}

double NNfunction_ss_sLuL::synapse0x161b5d0() {
   return (neuron0x160af20()*-0.291975);
}

double NNfunction_ss_sLuL::synapse0x161b610() {
   return (neuron0x160b260()*0.338795);
}

double NNfunction_ss_sLuL::synapse0x161b650() {
   return (neuron0x160b5a0()*-0.260737);
}

double NNfunction_ss_sLuL::synapse0x161b690() {
   return (neuron0x160b8e0()*-0.13157);
}

double NNfunction_ss_sLuL::synapse0x161b6d0() {
   return (neuron0x160bc20()*-0.625776);
}

double NNfunction_ss_sLuL::synapse0x161b710() {
   return (neuron0x160bf60()*-0.319496);
}

double NNfunction_ss_sLuL::synapse0x161b750() {
   return (neuron0x160c2a0()*-0.240989);
}

double NNfunction_ss_sLuL::synapse0x161b790() {
   return (neuron0x160c5e0()*-0.395883);
}

double NNfunction_ss_sLuL::synapse0x161b7d0() {
   return (neuron0x160c920()*-0.830979);
}

double NNfunction_ss_sLuL::synapse0x161b810() {
   return (neuron0x160cc60()*-0.351099);
}

double NNfunction_ss_sLuL::synapse0x161b850() {
   return (neuron0x160cfa0()*-0.356929);
}

double NNfunction_ss_sLuL::synapse0x161b890() {
   return (neuron0x160d2e0()*-0.0310958);
}

double NNfunction_ss_sLuL::synapse0x161b8d0() {
   return (neuron0x160d620()*0.37499);
}

double NNfunction_ss_sLuL::synapse0x161b360() {
   return (neuron0x160d960()*0.771521);
}

double NNfunction_ss_sLuL::synapse0x161b3a0() {
   return (neuron0x160dec0()*-0.106621);
}

double NNfunction_ss_sLuL::synapse0x161ba20() {
   return (neuron0x160e0e0()*0.0602796);
}

double NNfunction_ss_sLuL::synapse0x161ba60() {
   return (neuron0x160e420()*0.0605393);
}

double NNfunction_ss_sLuL::synapse0x161baa0() {
   return (neuron0x160e760()*-0.151346);
}

double NNfunction_ss_sLuL::synapse0x161bae0() {
   return (neuron0x160eaa0()*0.0493291);
}

double NNfunction_ss_sLuL::synapse0x161bb20() {
   return (neuron0x160ede0()*-0.0094677);
}

double NNfunction_ss_sLuL::synapse0x161bb60() {
   return (neuron0x160f120()*-0.313312);
}

double NNfunction_ss_sLuL::synapse0x161bee0() {
   return (neuron0x160a560()*-0.00138916);
}

double NNfunction_ss_sLuL::synapse0x161bf20() {
   return (neuron0x160a8a0()*0.00926797);
}

double NNfunction_ss_sLuL::synapse0x161bf60() {
   return (neuron0x160abe0()*-0.0173415);
}

double NNfunction_ss_sLuL::synapse0x161bfa0() {
   return (neuron0x160af20()*-1.30787);
}

double NNfunction_ss_sLuL::synapse0x161bfe0() {
   return (neuron0x160b260()*0.011392);
}

double NNfunction_ss_sLuL::synapse0x161c020() {
   return (neuron0x160b5a0()*-0.00556102);
}

double NNfunction_ss_sLuL::synapse0x161c060() {
   return (neuron0x160b8e0()*0.000148726);
}

double NNfunction_ss_sLuL::synapse0x161c0a0() {
   return (neuron0x160bc20()*-0.00815613);
}

double NNfunction_ss_sLuL::synapse0x161c0e0() {
   return (neuron0x160bf60()*-0.0025843);
}

double NNfunction_ss_sLuL::synapse0x161c120() {
   return (neuron0x160c2a0()*0.00374244);
}

double NNfunction_ss_sLuL::synapse0x161c160() {
   return (neuron0x160c5e0()*0.00886169);
}

double NNfunction_ss_sLuL::synapse0x161c1a0() {
   return (neuron0x160c920()*0.568561);
}

double NNfunction_ss_sLuL::synapse0x161c1e0() {
   return (neuron0x160cc60()*0.0472263);
}

double NNfunction_ss_sLuL::synapse0x161c220() {
   return (neuron0x160cfa0()*0.0146845);
}

double NNfunction_ss_sLuL::synapse0x161c260() {
   return (neuron0x160d2e0()*0.00639952);
}

double NNfunction_ss_sLuL::synapse0x161c2a0() {
   return (neuron0x160d620()*0.00412726);
}

double NNfunction_ss_sLuL::synapse0x161bd30() {
   return (neuron0x160d960()*-0.0107008);
}

double NNfunction_ss_sLuL::synapse0x161bd70() {
   return (neuron0x160dec0()*0.0136439);
}

double NNfunction_ss_sLuL::synapse0x161c3f0() {
   return (neuron0x160e0e0()*0.0124376);
}

double NNfunction_ss_sLuL::synapse0x161c430() {
   return (neuron0x160e420()*-0.0135141);
}

double NNfunction_ss_sLuL::synapse0x161c470() {
   return (neuron0x160e760()*0.00202275);
}

double NNfunction_ss_sLuL::synapse0x161c4b0() {
   return (neuron0x160eaa0()*0.000777382);
}

double NNfunction_ss_sLuL::synapse0x161c4f0() {
   return (neuron0x160ede0()*-0.00660162);
}

double NNfunction_ss_sLuL::synapse0x161c530() {
   return (neuron0x160f120()*0.014961);
}

double NNfunction_ss_sLuL::synapse0x161c8b0() {
   return (neuron0x160a560()*-0.522337);
}

double NNfunction_ss_sLuL::synapse0x161c8f0() {
   return (neuron0x160a8a0()*-0.811959);
}

double NNfunction_ss_sLuL::synapse0x161c930() {
   return (neuron0x160abe0()*-0.212454);
}

double NNfunction_ss_sLuL::synapse0x161c970() {
   return (neuron0x160af20()*-0.321512);
}

double NNfunction_ss_sLuL::synapse0x161c9b0() {
   return (neuron0x160b260()*0.0318686);
}

double NNfunction_ss_sLuL::synapse0x161c9f0() {
   return (neuron0x160b5a0()*-0.173972);
}

double NNfunction_ss_sLuL::synapse0x161ca30() {
   return (neuron0x160b8e0()*-0.0730531);
}

double NNfunction_ss_sLuL::synapse0x161ca70() {
   return (neuron0x160bc20()*-0.27825);
}

double NNfunction_ss_sLuL::synapse0x161cab0() {
   return (neuron0x160bf60()*0.466874);
}

double NNfunction_ss_sLuL::synapse0x161caf0() {
   return (neuron0x160c2a0()*0.0975894);
}

double NNfunction_ss_sLuL::synapse0x161cb30() {
   return (neuron0x160c5e0()*-0.912222);
}

double NNfunction_ss_sLuL::synapse0x161cb70() {
   return (neuron0x160c920()*-0.5363);
}

double NNfunction_ss_sLuL::synapse0x161cbb0() {
   return (neuron0x160cc60()*-0.519099);
}

double NNfunction_ss_sLuL::synapse0x161cbf0() {
   return (neuron0x160cfa0()*0.0943818);
}

double NNfunction_ss_sLuL::synapse0x161cc30() {
   return (neuron0x160d2e0()*0.404173);
}

double NNfunction_ss_sLuL::synapse0x161cc70() {
   return (neuron0x160d620()*0.0355429);
}

double NNfunction_ss_sLuL::synapse0x161c700() {
   return (neuron0x160d960()*-0.539084);
}

double NNfunction_ss_sLuL::synapse0x161c740() {
   return (neuron0x160dec0()*-0.490167);
}

double NNfunction_ss_sLuL::synapse0x161cdc0() {
   return (neuron0x160e0e0()*-0.544687);
}

double NNfunction_ss_sLuL::synapse0x161ce00() {
   return (neuron0x160e420()*-0.429123);
}

double NNfunction_ss_sLuL::synapse0x161ce40() {
   return (neuron0x160e760()*-0.0803464);
}

double NNfunction_ss_sLuL::synapse0x161ce80() {
   return (neuron0x160eaa0()*0.111398);
}

double NNfunction_ss_sLuL::synapse0x161cec0() {
   return (neuron0x160ede0()*-0.00356318);
}

double NNfunction_ss_sLuL::synapse0x161cf00() {
   return (neuron0x160f120()*-0.634163);
}

double NNfunction_ss_sLuL::synapse0x161d280() {
   return (neuron0x160a560()*0.20096);
}

double NNfunction_ss_sLuL::synapse0x161d2c0() {
   return (neuron0x160a8a0()*0.587187);
}

double NNfunction_ss_sLuL::synapse0x161d300() {
   return (neuron0x160abe0()*-0.716447);
}

double NNfunction_ss_sLuL::synapse0x161d340() {
   return (neuron0x160af20()*0.0521479);
}

double NNfunction_ss_sLuL::synapse0x161d380() {
   return (neuron0x160b260()*-0.268952);
}

double NNfunction_ss_sLuL::synapse0x161d3c0() {
   return (neuron0x160b5a0()*0.456811);
}

double NNfunction_ss_sLuL::synapse0x161d400() {
   return (neuron0x160b8e0()*0.437968);
}

double NNfunction_ss_sLuL::synapse0x161d440() {
   return (neuron0x160bc20()*-0.429803);
}

double NNfunction_ss_sLuL::synapse0x161d480() {
   return (neuron0x160bf60()*0.0908857);
}

double NNfunction_ss_sLuL::synapse0x161d4c0() {
   return (neuron0x160c2a0()*-0.0737896);
}

double NNfunction_ss_sLuL::synapse0x161d500() {
   return (neuron0x160c5e0()*-0.299691);
}

double NNfunction_ss_sLuL::synapse0x161d540() {
   return (neuron0x160c920()*0.579566);
}

double NNfunction_ss_sLuL::synapse0x161d580() {
   return (neuron0x160cc60()*0.161214);
}

double NNfunction_ss_sLuL::synapse0x161d5c0() {
   return (neuron0x160cfa0()*0.0973613);
}

double NNfunction_ss_sLuL::synapse0x161d600() {
   return (neuron0x160d2e0()*0.534769);
}

double NNfunction_ss_sLuL::synapse0x161d640() {
   return (neuron0x160d620()*0.386457);
}

double NNfunction_ss_sLuL::synapse0x161d0d0() {
   return (neuron0x160d960()*0.425331);
}

double NNfunction_ss_sLuL::synapse0x161d110() {
   return (neuron0x160dec0()*0.194827);
}

double NNfunction_ss_sLuL::synapse0x161d790() {
   return (neuron0x160e0e0()*0.684713);
}

double NNfunction_ss_sLuL::synapse0x161d7d0() {
   return (neuron0x160e420()*-0.609484);
}

double NNfunction_ss_sLuL::synapse0x161d810() {
   return (neuron0x160e760()*0.190396);
}

double NNfunction_ss_sLuL::synapse0x161d850() {
   return (neuron0x160eaa0()*0.0995724);
}

double NNfunction_ss_sLuL::synapse0x161d890() {
   return (neuron0x160ede0()*0.518691);
}

double NNfunction_ss_sLuL::synapse0x161d8d0() {
   return (neuron0x160f120()*-0.190732);
}

double NNfunction_ss_sLuL::synapse0x161dc50() {
   return (neuron0x160a560()*0.416988);
}

double NNfunction_ss_sLuL::synapse0x161dc90() {
   return (neuron0x160a8a0()*0.22362);
}

double NNfunction_ss_sLuL::synapse0x161dcd0() {
   return (neuron0x160abe0()*-0.0804681);
}

double NNfunction_ss_sLuL::synapse0x161dd10() {
   return (neuron0x160af20()*-0.336826);
}

double NNfunction_ss_sLuL::synapse0x161dd50() {
   return (neuron0x160b260()*-0.336822);
}

double NNfunction_ss_sLuL::synapse0x161dd90() {
   return (neuron0x160b5a0()*-0.071216);
}

double NNfunction_ss_sLuL::synapse0x161ddd0() {
   return (neuron0x160b8e0()*0.186357);
}

double NNfunction_ss_sLuL::synapse0x161de10() {
   return (neuron0x160bc20()*-0.0969081);
}

double NNfunction_ss_sLuL::synapse0x161de50() {
   return (neuron0x160bf60()*0.0659699);
}

double NNfunction_ss_sLuL::synapse0x1616010() {
   return (neuron0x160c2a0()*0.0479657);
}

double NNfunction_ss_sLuL::synapse0x1616050() {
   return (neuron0x160c5e0()*0.267138);
}

double NNfunction_ss_sLuL::synapse0x1616090() {
   return (neuron0x160c920()*-0.723027);
}

double NNfunction_ss_sLuL::synapse0x16160d0() {
   return (neuron0x160cc60()*-0.578763);
}

double NNfunction_ss_sLuL::synapse0x1616110() {
   return (neuron0x160cfa0()*-0.0504201);
}

double NNfunction_ss_sLuL::synapse0x1616150() {
   return (neuron0x160d2e0()*-0.638744);
}

double NNfunction_ss_sLuL::synapse0x1616190() {
   return (neuron0x160d620()*-0.485059);
}

double NNfunction_ss_sLuL::synapse0x161daa0() {
   return (neuron0x160d960()*0.0904399);
}

double NNfunction_ss_sLuL::synapse0x161dae0() {
   return (neuron0x160dec0()*0.301055);
}

double NNfunction_ss_sLuL::synapse0x16162e0() {
   return (neuron0x160e0e0()*-0.0804296);
}

double NNfunction_ss_sLuL::synapse0x1616320() {
   return (neuron0x160e420()*-0.037278);
}

double NNfunction_ss_sLuL::synapse0x1616360() {
   return (neuron0x160e760()*0.0684434);
}

double NNfunction_ss_sLuL::synapse0x16163a0() {
   return (neuron0x160eaa0()*0.0314598);
}

double NNfunction_ss_sLuL::synapse0x16163e0() {
   return (neuron0x160ede0()*0.0702315);
}

double NNfunction_ss_sLuL::synapse0x1616420() {
   return (neuron0x160f120()*-0.432264);
}

double NNfunction_ss_sLuL::synapse0x16167a0() {
   return (neuron0x160a560()*-0.00363233);
}

double NNfunction_ss_sLuL::synapse0x16167e0() {
   return (neuron0x160a8a0()*-0.00123421);
}

double NNfunction_ss_sLuL::synapse0x1616820() {
   return (neuron0x160abe0()*-0.0420924);
}

double NNfunction_ss_sLuL::synapse0x1616860() {
   return (neuron0x160af20()*-3.24336);
}

double NNfunction_ss_sLuL::synapse0x16168a0() {
   return (neuron0x160b260()*0.0120458);
}

double NNfunction_ss_sLuL::synapse0x16168e0() {
   return (neuron0x160b5a0()*0.00321232);
}

double NNfunction_ss_sLuL::synapse0x1616920() {
   return (neuron0x160b8e0()*-0.0071573);
}

double NNfunction_ss_sLuL::synapse0x1616960() {
   return (neuron0x160bc20()*0.00261497);
}

double NNfunction_ss_sLuL::synapse0x16169a0() {
   return (neuron0x160bf60()*0.00657036);
}

double NNfunction_ss_sLuL::synapse0x16169e0() {
   return (neuron0x160c2a0()*0.012834);
}

double NNfunction_ss_sLuL::synapse0x1616a20() {
   return (neuron0x160c5e0()*-0.019576);
}

double NNfunction_ss_sLuL::synapse0x1616a60() {
   return (neuron0x160c920()*0.0492127);
}

double NNfunction_ss_sLuL::synapse0x1616aa0() {
   return (neuron0x160cc60()*-0.109477);
}

double NNfunction_ss_sLuL::synapse0x1616ae0() {
   return (neuron0x160cfa0()*-0.0554454);
}

double NNfunction_ss_sLuL::synapse0x1616b20() {
   return (neuron0x160d2e0()*-0.0585602);
}

double NNfunction_ss_sLuL::synapse0x1616b60() {
   return (neuron0x160d620()*-0.0081882);
}

double NNfunction_ss_sLuL::synapse0x16165f0() {
   return (neuron0x160d960()*-0.0522117);
}

double NNfunction_ss_sLuL::synapse0x1616630() {
   return (neuron0x160dec0()*-0.0457584);
}

double NNfunction_ss_sLuL::synapse0x1616cb0() {
   return (neuron0x160e0e0()*-0.0544237);
}

double NNfunction_ss_sLuL::synapse0x1616cf0() {
   return (neuron0x160e420()*-0.0415813);
}

double NNfunction_ss_sLuL::synapse0x1616d30() {
   return (neuron0x160e760()*-0.00323304);
}

double NNfunction_ss_sLuL::synapse0x1616d70() {
   return (neuron0x160eaa0()*0.00886992);
}

double NNfunction_ss_sLuL::synapse0x1616db0() {
   return (neuron0x160ede0()*0.0064972);
}

double NNfunction_ss_sLuL::synapse0x1616df0() {
   return (neuron0x160f120()*-0.0116643);
}

double NNfunction_ss_sLuL::synapse0x1616fc0() {
   return (neuron0x160a560()*0.0757245);
}

double NNfunction_ss_sLuL::synapse0x1620050() {
   return (neuron0x160a8a0()*-0.0622569);
}

double NNfunction_ss_sLuL::synapse0x1620090() {
   return (neuron0x160abe0()*-0.470458);
}

double NNfunction_ss_sLuL::synapse0x16200d0() {
   return (neuron0x160af20()*1.58565);
}

double NNfunction_ss_sLuL::synapse0x1620110() {
   return (neuron0x160b260()*0.0602409);
}

double NNfunction_ss_sLuL::synapse0x1620150() {
   return (neuron0x160b5a0()*-0.118558);
}

double NNfunction_ss_sLuL::synapse0x1620190() {
   return (neuron0x160b8e0()*0.0277734);
}

double NNfunction_ss_sLuL::synapse0x16201d0() {
   return (neuron0x160bc20()*-0.0274016);
}

double NNfunction_ss_sLuL::synapse0x1620210() {
   return (neuron0x160bf60()*0.0508437);
}

double NNfunction_ss_sLuL::synapse0x1620250() {
   return (neuron0x160c2a0()*-0.00461611);
}

double NNfunction_ss_sLuL::synapse0x1620290() {
   return (neuron0x160c5e0()*-0.021874);
}

double NNfunction_ss_sLuL::synapse0x16202d0() {
   return (neuron0x160c920()*-0.299333);
}

double NNfunction_ss_sLuL::synapse0x1620310() {
   return (neuron0x160cc60()*0.0341208);
}

double NNfunction_ss_sLuL::synapse0x1620350() {
   return (neuron0x160cfa0()*-0.206183);
}

double NNfunction_ss_sLuL::synapse0x1620390() {
   return (neuron0x160d2e0()*-0.0300139);
}

double NNfunction_ss_sLuL::synapse0x16203d0() {
   return (neuron0x160d620()*0.0138806);
}

double NNfunction_ss_sLuL::synapse0x161fea0() {
   return (neuron0x160d960()*-0.149016);
}

double NNfunction_ss_sLuL::synapse0x161fee0() {
   return (neuron0x160dec0()*0.00936888);
}

double NNfunction_ss_sLuL::synapse0x1620520() {
   return (neuron0x160e0e0()*-0.0351204);
}

double NNfunction_ss_sLuL::synapse0x1620560() {
   return (neuron0x160e420()*0.0281298);
}

double NNfunction_ss_sLuL::synapse0x16205a0() {
   return (neuron0x160e760()*0.00157331);
}

double NNfunction_ss_sLuL::synapse0x16205e0() {
   return (neuron0x160eaa0()*0.0373501);
}

double NNfunction_ss_sLuL::synapse0x1620620() {
   return (neuron0x160ede0()*0.0263231);
}

double NNfunction_ss_sLuL::synapse0x1620660() {
   return (neuron0x160f120()*-0.0574642);
}

double NNfunction_ss_sLuL::synapse0x16209e0() {
   return (neuron0x160a560()*-0.0255183);
}

double NNfunction_ss_sLuL::synapse0x1620a20() {
   return (neuron0x160a8a0()*-0.027045);
}

double NNfunction_ss_sLuL::synapse0x1620a60() {
   return (neuron0x160abe0()*-0.381352);
}

double NNfunction_ss_sLuL::synapse0x1620aa0() {
   return (neuron0x160af20()*0.543004);
}

double NNfunction_ss_sLuL::synapse0x1620ae0() {
   return (neuron0x160b260()*0.0266019);
}

double NNfunction_ss_sLuL::synapse0x1620b20() {
   return (neuron0x160b5a0()*-0.0277217);
}

double NNfunction_ss_sLuL::synapse0x1620b60() {
   return (neuron0x160b8e0()*0.0355635);
}

double NNfunction_ss_sLuL::synapse0x1620ba0() {
   return (neuron0x160bc20()*0.0197302);
}

double NNfunction_ss_sLuL::synapse0x1620be0() {
   return (neuron0x160bf60()*0.0252408);
}

double NNfunction_ss_sLuL::synapse0x1620c20() {
   return (neuron0x160c2a0()*-0.00456731);
}

double NNfunction_ss_sLuL::synapse0x1620c60() {
   return (neuron0x160c5e0()*-0.0311407);
}

double NNfunction_ss_sLuL::synapse0x1620ca0() {
   return (neuron0x160c920()*0.460864);
}

double NNfunction_ss_sLuL::synapse0x1620ce0() {
   return (neuron0x160cc60()*-1.30568);
}

double NNfunction_ss_sLuL::synapse0x1620d20() {
   return (neuron0x160cfa0()*-0.124597);
}

double NNfunction_ss_sLuL::synapse0x1620d60() {
   return (neuron0x160d2e0()*-0.035172);
}

double NNfunction_ss_sLuL::synapse0x1620da0() {
   return (neuron0x160d620()*-0.0246993);
}

double NNfunction_ss_sLuL::synapse0x1620830() {
   return (neuron0x160d960()*-0.0176679);
}

double NNfunction_ss_sLuL::synapse0x1620870() {
   return (neuron0x160dec0()*-0.0463335);
}

double NNfunction_ss_sLuL::synapse0x1620ef0() {
   return (neuron0x160e0e0()*0.00414675);
}

double NNfunction_ss_sLuL::synapse0x1620f30() {
   return (neuron0x160e420()*-0.00184672);
}

double NNfunction_ss_sLuL::synapse0x1620f70() {
   return (neuron0x160e760()*-0.0428957);
}

double NNfunction_ss_sLuL::synapse0x1620fb0() {
   return (neuron0x160eaa0()*0.0268937);
}

double NNfunction_ss_sLuL::synapse0x1620ff0() {
   return (neuron0x160ede0()*0.0669434);
}

double NNfunction_ss_sLuL::synapse0x1621030() {
   return (neuron0x160f120()*0.0223209);
}

double NNfunction_ss_sLuL::synapse0x16213b0() {
   return (neuron0x160a560()*0.228942);
}

double NNfunction_ss_sLuL::synapse0x16213f0() {
   return (neuron0x160a8a0()*-0.365197);
}

double NNfunction_ss_sLuL::synapse0x1621430() {
   return (neuron0x160abe0()*-0.562146);
}

double NNfunction_ss_sLuL::synapse0x1621470() {
   return (neuron0x160af20()*-0.0286148);
}

double NNfunction_ss_sLuL::synapse0x16214b0() {
   return (neuron0x160b260()*0.544504);
}

double NNfunction_ss_sLuL::synapse0x16214f0() {
   return (neuron0x160b5a0()*0.120018);
}

double NNfunction_ss_sLuL::synapse0x1621530() {
   return (neuron0x160b8e0()*-0.68405);
}

double NNfunction_ss_sLuL::synapse0x1621570() {
   return (neuron0x160bc20()*0.507104);
}

double NNfunction_ss_sLuL::synapse0x16215b0() {
   return (neuron0x160bf60()*0.0612522);
}

double NNfunction_ss_sLuL::synapse0x16215f0() {
   return (neuron0x160c2a0()*-0.126384);
}

double NNfunction_ss_sLuL::synapse0x1621630() {
   return (neuron0x160c5e0()*-0.252986);
}

double NNfunction_ss_sLuL::synapse0x1621670() {
   return (neuron0x160c920()*-0.362311);
}

double NNfunction_ss_sLuL::synapse0x16216b0() {
   return (neuron0x160cc60()*-1.21417);
}

double NNfunction_ss_sLuL::synapse0x16216f0() {
   return (neuron0x160cfa0()*-0.680086);
}

double NNfunction_ss_sLuL::synapse0x1621730() {
   return (neuron0x160d2e0()*0.495242);
}

double NNfunction_ss_sLuL::synapse0x1621770() {
   return (neuron0x160d620()*0.424342);
}

double NNfunction_ss_sLuL::synapse0x1621200() {
   return (neuron0x160d960()*-0.455737);
}

double NNfunction_ss_sLuL::synapse0x1621240() {
   return (neuron0x160dec0()*-0.12163);
}

double NNfunction_ss_sLuL::synapse0x16218c0() {
   return (neuron0x160e0e0()*0.122322);
}

double NNfunction_ss_sLuL::synapse0x1621900() {
   return (neuron0x160e420()*0.523006);
}

double NNfunction_ss_sLuL::synapse0x1621940() {
   return (neuron0x160e760()*0.00943881);
}

double NNfunction_ss_sLuL::synapse0x1621980() {
   return (neuron0x160eaa0()*-0.172926);
}

double NNfunction_ss_sLuL::synapse0x16219c0() {
   return (neuron0x160ede0()*-0.053086);
}

double NNfunction_ss_sLuL::synapse0x1621a00() {
   return (neuron0x160f120()*0.357621);
}

double NNfunction_ss_sLuL::synapse0x1621d80() {
   return (neuron0x160a560()*0.292334);
}

double NNfunction_ss_sLuL::synapse0x1621dc0() {
   return (neuron0x160a8a0()*-0.0584201);
}

double NNfunction_ss_sLuL::synapse0x1621e00() {
   return (neuron0x160abe0()*-1.20095);
}

double NNfunction_ss_sLuL::synapse0x1621e40() {
   return (neuron0x160af20()*-1.51962);
}

double NNfunction_ss_sLuL::synapse0x1621e80() {
   return (neuron0x160b260()*0.210675);
}

double NNfunction_ss_sLuL::synapse0x1621ec0() {
   return (neuron0x160b5a0()*0.372988);
}

double NNfunction_ss_sLuL::synapse0x1621f00() {
   return (neuron0x160b8e0()*0.665793);
}

double NNfunction_ss_sLuL::synapse0x1621f40() {
   return (neuron0x160bc20()*0.640214);
}

double NNfunction_ss_sLuL::synapse0x1621f80() {
   return (neuron0x160bf60()*-0.504838);
}

double NNfunction_ss_sLuL::synapse0x1621fc0() {
   return (neuron0x160c2a0()*0.563252);
}

double NNfunction_ss_sLuL::synapse0x1622000() {
   return (neuron0x160c5e0()*0.217823);
}

double NNfunction_ss_sLuL::synapse0x1622040() {
   return (neuron0x160c920()*0.307501);
}

double NNfunction_ss_sLuL::synapse0x1622080() {
   return (neuron0x160cc60()*-0.409502);
}

double NNfunction_ss_sLuL::synapse0x16220c0() {
   return (neuron0x160cfa0()*0.613324);
}

double NNfunction_ss_sLuL::synapse0x1622100() {
   return (neuron0x160d2e0()*-0.853968);
}

double NNfunction_ss_sLuL::synapse0x1622140() {
   return (neuron0x160d620()*0.193401);
}

double NNfunction_ss_sLuL::synapse0x1621bd0() {
   return (neuron0x160d960()*-0.0708967);
}

double NNfunction_ss_sLuL::synapse0x1621c10() {
   return (neuron0x160dec0()*0.0746734);
}

double NNfunction_ss_sLuL::synapse0x1622290() {
   return (neuron0x160e0e0()*-0.021104);
}

double NNfunction_ss_sLuL::synapse0x16222d0() {
   return (neuron0x160e420()*-0.397615);
}

double NNfunction_ss_sLuL::synapse0x1622310() {
   return (neuron0x160e760()*-0.739031);
}

double NNfunction_ss_sLuL::synapse0x1622350() {
   return (neuron0x160eaa0()*-0.000821457);
}

double NNfunction_ss_sLuL::synapse0x1622390() {
   return (neuron0x160ede0()*0.0323894);
}

double NNfunction_ss_sLuL::synapse0x16223d0() {
   return (neuron0x160f120()*-0.422612);
}

double NNfunction_ss_sLuL::synapse0x1622750() {
   return (neuron0x160a560()*0.0119784);
}

double NNfunction_ss_sLuL::synapse0x1622790() {
   return (neuron0x160a8a0()*-0.0110046);
}

double NNfunction_ss_sLuL::synapse0x16227d0() {
   return (neuron0x160abe0()*0.000549021);
}

double NNfunction_ss_sLuL::synapse0x1622810() {
   return (neuron0x160af20()*0.0357008);
}

double NNfunction_ss_sLuL::synapse0x1622850() {
   return (neuron0x160b260()*0.0120219);
}

double NNfunction_ss_sLuL::synapse0x1622890() {
   return (neuron0x160b5a0()*0.00382296);
}

double NNfunction_ss_sLuL::synapse0x16228d0() {
   return (neuron0x160b8e0()*-0.00174007);
}

double NNfunction_ss_sLuL::synapse0x1622910() {
   return (neuron0x160bc20()*0.0112947);
}

double NNfunction_ss_sLuL::synapse0x1622950() {
   return (neuron0x160bf60()*0.0114881);
}

double NNfunction_ss_sLuL::synapse0x1622990() {
   return (neuron0x160c2a0()*-0.00799474);
}

double NNfunction_ss_sLuL::synapse0x16229d0() {
   return (neuron0x160c5e0()*0.00960332);
}

double NNfunction_ss_sLuL::synapse0x1622a10() {
   return (neuron0x160c920()*-0.366536);
}

double NNfunction_ss_sLuL::synapse0x1622a50() {
   return (neuron0x160cc60()*-0.656251);
}

double NNfunction_ss_sLuL::synapse0x1622a90() {
   return (neuron0x160cfa0()*-0.0102024);
}

double NNfunction_ss_sLuL::synapse0x1622ad0() {
   return (neuron0x160d2e0()*-0.0187307);
}

double NNfunction_ss_sLuL::synapse0x1622b10() {
   return (neuron0x160d620()*-0.0170717);
}

double NNfunction_ss_sLuL::synapse0x16225a0() {
   return (neuron0x160d960()*-0.013936);
}

double NNfunction_ss_sLuL::synapse0x16225e0() {
   return (neuron0x160dec0()*0.00582788);
}

double NNfunction_ss_sLuL::synapse0x1622c60() {
   return (neuron0x160e0e0()*-0.00924514);
}

double NNfunction_ss_sLuL::synapse0x1622ca0() {
   return (neuron0x160e420()*0.0074643);
}

double NNfunction_ss_sLuL::synapse0x1622ce0() {
   return (neuron0x160e760()*0.000535331);
}

double NNfunction_ss_sLuL::synapse0x1622d20() {
   return (neuron0x160eaa0()*5.94146e-05);
}

double NNfunction_ss_sLuL::synapse0x1622d60() {
   return (neuron0x160ede0()*0.004018);
}

double NNfunction_ss_sLuL::synapse0x1622da0() {
   return (neuron0x160f120()*-0.0105205);
}

double NNfunction_ss_sLuL::synapse0x1623120() {
   return (neuron0x160a560()*-0.465153);
}

double NNfunction_ss_sLuL::synapse0x1623160() {
   return (neuron0x160a8a0()*-0.425943);
}

double NNfunction_ss_sLuL::synapse0x16231a0() {
   return (neuron0x160abe0()*0.153639);
}

double NNfunction_ss_sLuL::synapse0x16231e0() {
   return (neuron0x160af20()*-0.00979183);
}

double NNfunction_ss_sLuL::synapse0x1623220() {
   return (neuron0x160b260()*-0.227684);
}

double NNfunction_ss_sLuL::synapse0x1623260() {
   return (neuron0x160b5a0()*-0.470965);
}

double NNfunction_ss_sLuL::synapse0x16232a0() {
   return (neuron0x160b8e0()*-0.461307);
}

double NNfunction_ss_sLuL::synapse0x16232e0() {
   return (neuron0x160bc20()*-0.273649);
}

double NNfunction_ss_sLuL::synapse0x1623320() {
   return (neuron0x160bf60()*0.249811);
}

double NNfunction_ss_sLuL::synapse0x1623360() {
   return (neuron0x160c2a0()*-0.0717061);
}

double NNfunction_ss_sLuL::synapse0x16233a0() {
   return (neuron0x160c5e0()*-0.0972584);
}

double NNfunction_ss_sLuL::synapse0x16233e0() {
   return (neuron0x160c920()*-0.157963);
}

double NNfunction_ss_sLuL::synapse0x1623420() {
   return (neuron0x160cc60()*0.522783);
}

double NNfunction_ss_sLuL::synapse0x1623460() {
   return (neuron0x160cfa0()*-0.970355);
}

double NNfunction_ss_sLuL::synapse0x16234a0() {
   return (neuron0x160d2e0()*1.22694);
}

double NNfunction_ss_sLuL::synapse0x16234e0() {
   return (neuron0x160d620()*0.867729);
}

double NNfunction_ss_sLuL::synapse0x1622f70() {
   return (neuron0x160d960()*-0.410445);
}

double NNfunction_ss_sLuL::synapse0x1622fb0() {
   return (neuron0x160dec0()*0.350576);
}

double NNfunction_ss_sLuL::synapse0x1623630() {
   return (neuron0x160e0e0()*1.50724);
}

double NNfunction_ss_sLuL::synapse0x1623670() {
   return (neuron0x160e420()*-0.734831);
}

double NNfunction_ss_sLuL::synapse0x16236b0() {
   return (neuron0x160e760()*0.0609055);
}

double NNfunction_ss_sLuL::synapse0x16236f0() {
   return (neuron0x160eaa0()*-0.401946);
}

double NNfunction_ss_sLuL::synapse0x1623730() {
   return (neuron0x160ede0()*0.393097);
}

double NNfunction_ss_sLuL::synapse0x1623770() {
   return (neuron0x160f120()*-0.732826);
}

double NNfunction_ss_sLuL::synapse0x1623af0() {
   return (neuron0x160a560()*-0.0139322);
}

double NNfunction_ss_sLuL::synapse0x1623b30() {
   return (neuron0x160a8a0()*-0.0453224);
}

double NNfunction_ss_sLuL::synapse0x1623b70() {
   return (neuron0x160abe0()*0.244914);
}

double NNfunction_ss_sLuL::synapse0x1623bb0() {
   return (neuron0x160af20()*-0.564101);
}

double NNfunction_ss_sLuL::synapse0x1623bf0() {
   return (neuron0x160b260()*-0.00625887);
}

double NNfunction_ss_sLuL::synapse0x1623c30() {
   return (neuron0x160b5a0()*-0.00217997);
}

double NNfunction_ss_sLuL::synapse0x1623c70() {
   return (neuron0x160b8e0()*-0.0460979);
}

double NNfunction_ss_sLuL::synapse0x1623cb0() {
   return (neuron0x160bc20()*-0.00852448);
}

double NNfunction_ss_sLuL::synapse0x1623cf0() {
   return (neuron0x160bf60()*-0.0859124);
}

double NNfunction_ss_sLuL::synapse0x1623d30() {
   return (neuron0x160c2a0()*0.107044);
}

double NNfunction_ss_sLuL::synapse0x1623d70() {
   return (neuron0x160c5e0()*-0.0890997);
}

double NNfunction_ss_sLuL::synapse0x1623db0() {
   return (neuron0x160c920()*-0.984081);
}

double NNfunction_ss_sLuL::synapse0x1623df0() {
   return (neuron0x160cc60()*-0.610388);
}

double NNfunction_ss_sLuL::synapse0x1623e30() {
   return (neuron0x160cfa0()*-0.0988914);
}

double NNfunction_ss_sLuL::synapse0x1623e70() {
   return (neuron0x160d2e0()*0.0220094);
}

double NNfunction_ss_sLuL::synapse0x1623eb0() {
   return (neuron0x160d620()*-0.0356363);
}

double NNfunction_ss_sLuL::synapse0x1623940() {
   return (neuron0x160d960()*-0.036243);
}

double NNfunction_ss_sLuL::synapse0x1623980() {
   return (neuron0x160dec0()*0.00274829);
}

double NNfunction_ss_sLuL::synapse0x1624000() {
   return (neuron0x160e0e0()*-0.0506628);
}

double NNfunction_ss_sLuL::synapse0x1624040() {
   return (neuron0x160e420()*-0.119146);
}

double NNfunction_ss_sLuL::synapse0x1624080() {
   return (neuron0x160e760()*-0.0324436);
}

double NNfunction_ss_sLuL::synapse0x16240c0() {
   return (neuron0x160eaa0()*0.0624763);
}

double NNfunction_ss_sLuL::synapse0x1624100() {
   return (neuron0x160ede0()*0.0694999);
}

double NNfunction_ss_sLuL::synapse0x1624140() {
   return (neuron0x160f120()*0.0454529);
}

double NNfunction_ss_sLuL::synapse0x16244c0() {
   return (neuron0x160a560()*0.0197128);
}

double NNfunction_ss_sLuL::synapse0x1624500() {
   return (neuron0x160a8a0()*0.0181065);
}

double NNfunction_ss_sLuL::synapse0x1624540() {
   return (neuron0x160abe0()*0.0102829);
}

double NNfunction_ss_sLuL::synapse0x1624580() {
   return (neuron0x160af20()*-0.142568);
}

double NNfunction_ss_sLuL::synapse0x16245c0() {
   return (neuron0x160b260()*-0.0112973);
}

double NNfunction_ss_sLuL::synapse0x1624600() {
   return (neuron0x160b5a0()*0.00644567);
}

double NNfunction_ss_sLuL::synapse0x1624640() {
   return (neuron0x160b8e0()*0.00524142);
}

double NNfunction_ss_sLuL::synapse0x1624680() {
   return (neuron0x160bc20()*-0.0194344);
}

double NNfunction_ss_sLuL::synapse0x16246c0() {
   return (neuron0x160bf60()*0.00399794);
}

double NNfunction_ss_sLuL::synapse0x1624700() {
   return (neuron0x160c2a0()*-0.0178097);
}

double NNfunction_ss_sLuL::synapse0x1624740() {
   return (neuron0x160c5e0()*-0.00135075);
}

double NNfunction_ss_sLuL::synapse0x1624780() {
   return (neuron0x160c920()*-0.323805);
}

double NNfunction_ss_sLuL::synapse0x16247c0() {
   return (neuron0x160cc60()*2.28253);
}

double NNfunction_ss_sLuL::synapse0x1624800() {
   return (neuron0x160cfa0()*0.0246781);
}

double NNfunction_ss_sLuL::synapse0x1624840() {
   return (neuron0x160d2e0()*0.0126818);
}

double NNfunction_ss_sLuL::synapse0x1624880() {
   return (neuron0x160d620()*0.00390354);
}

double NNfunction_ss_sLuL::synapse0x1624310() {
   return (neuron0x160d960()*0.00320197);
}

double NNfunction_ss_sLuL::synapse0x1624350() {
   return (neuron0x160dec0()*0.0042528);
}

double NNfunction_ss_sLuL::synapse0x16249d0() {
   return (neuron0x160e0e0()*-0.0098037);
}

double NNfunction_ss_sLuL::synapse0x1624a10() {
   return (neuron0x160e420()*-0.00396396);
}

double NNfunction_ss_sLuL::synapse0x1624a50() {
   return (neuron0x160e760()*-0.0157934);
}

double NNfunction_ss_sLuL::synapse0x1624a90() {
   return (neuron0x160eaa0()*-0.00233269);
}

double NNfunction_ss_sLuL::synapse0x1624ad0() {
   return (neuron0x160ede0()*0.011567);
}

double NNfunction_ss_sLuL::synapse0x1624b10() {
   return (neuron0x160f120()*-0.00540999);
}

double NNfunction_ss_sLuL::synapse0x1624e90() {
   return (neuron0x160a560()*0.263439);
}

double NNfunction_ss_sLuL::synapse0x1619460() {
   return (neuron0x160a8a0()*-0.184675);
}

double NNfunction_ss_sLuL::synapse0x16194a0() {
   return (neuron0x160abe0()*0.808889);
}

double NNfunction_ss_sLuL::synapse0x16194e0() {
   return (neuron0x160af20()*0.00816902);
}

double NNfunction_ss_sLuL::synapse0x1619730() {
   return (neuron0x160b260()*0.0374227);
}

double NNfunction_ss_sLuL::synapse0x1619770() {
   return (neuron0x160b5a0()*0.586234);
}

double NNfunction_ss_sLuL::synapse0x16197b0() {
   return (neuron0x160b8e0()*1.12782);
}

double NNfunction_ss_sLuL::synapse0x1619a00() {
   return (neuron0x160bc20()*-0.00684333);
}

double NNfunction_ss_sLuL::synapse0x1619a40() {
   return (neuron0x160bf60()*0.328148);
}

double NNfunction_ss_sLuL::synapse0x1619c90() {
   return (neuron0x160c2a0()*0.0316648);
}

double NNfunction_ss_sLuL::synapse0x1619cd0() {
   return (neuron0x160c5e0()*-0.20722);
}

double NNfunction_ss_sLuL::synapse0x1619d10() {
   return (neuron0x160c920()*0.155096);
}

double NNfunction_ss_sLuL::synapse0x1619f60() {
   return (neuron0x160cc60()*-0.347513);
}

double NNfunction_ss_sLuL::synapse0x1619fa0() {
   return (neuron0x160cfa0()*-0.77399);
}

double NNfunction_ss_sLuL::synapse0x161a1f0() {
   return (neuron0x160d2e0()*-0.653614);
}

double NNfunction_ss_sLuL::synapse0x161a230() {
   return (neuron0x160d620()*0.309447);
}

double NNfunction_ss_sLuL::synapse0x1624ce0() {
   return (neuron0x160d960()*0.124525);
}

double NNfunction_ss_sLuL::synapse0x1624d20() {
   return (neuron0x160dec0()*0.499012);
}

double NNfunction_ss_sLuL::synapse0x161a380() {
   return (neuron0x160e0e0()*0.227612);
}

double NNfunction_ss_sLuL::synapse0x161a890() {
   return (neuron0x160e420()*-1.06572);
}

double NNfunction_ss_sLuL::synapse0x161a8d0() {
   return (neuron0x160e760()*-0.109923);
}

double NNfunction_ss_sLuL::synapse0x161a910() {
   return (neuron0x160eaa0()*-0.496622);
}

double NNfunction_ss_sLuL::synapse0x161ab60() {
   return (neuron0x160ede0()*0.641908);
}

double NNfunction_ss_sLuL::synapse0x161aba0() {
   return (neuron0x160f120()*-0.531037);
}

double NNfunction_ss_sLuL::synapse0x161a450() {
   return (neuron0x160a560()*-0.00225997);
}

double NNfunction_ss_sLuL::synapse0x161a490() {
   return (neuron0x160a8a0()*-0.0176491);
}

double NNfunction_ss_sLuL::synapse0x161a4d0() {
   return (neuron0x160abe0()*-0.273304);
}

double NNfunction_ss_sLuL::synapse0x161a510() {
   return (neuron0x160af20()*-0.317114);
}

double NNfunction_ss_sLuL::synapse0x161ae90() {
   return (neuron0x160b260()*0.015299);
}

double NNfunction_ss_sLuL::synapse0x16271e0() {
   return (neuron0x160b5a0()*-0.0115236);
}

double NNfunction_ss_sLuL::synapse0x1627220() {
   return (neuron0x160b8e0()*0.0208153);
}

double NNfunction_ss_sLuL::synapse0x1627260() {
   return (neuron0x160bc20()*0.0170866);
}

double NNfunction_ss_sLuL::synapse0x16272a0() {
   return (neuron0x160bf60()*-0.00680165);
}

double NNfunction_ss_sLuL::synapse0x16272e0() {
   return (neuron0x160c2a0()*-0.0169175);
}

double NNfunction_ss_sLuL::synapse0x1627320() {
   return (neuron0x160c5e0()*-0.0225922);
}

double NNfunction_ss_sLuL::synapse0x1627360() {
   return (neuron0x160c920()*-0.439429);
}

double NNfunction_ss_sLuL::synapse0x16273a0() {
   return (neuron0x160cc60()*1.08767);
}

double NNfunction_ss_sLuL::synapse0x16273e0() {
   return (neuron0x160cfa0()*-0.0401481);
}

double NNfunction_ss_sLuL::synapse0x1627420() {
   return (neuron0x160d2e0()*-0.0344838);
}

double NNfunction_ss_sLuL::synapse0x1627460() {
   return (neuron0x160d620()*-0.00963793);
}

double NNfunction_ss_sLuL::synapse0x161ad70() {
   return (neuron0x160d960()*-0.0337948);
}

double NNfunction_ss_sLuL::synapse0x161adb0() {
   return (neuron0x160dec0()*-0.00663473);
}

double NNfunction_ss_sLuL::synapse0x16275b0() {
   return (neuron0x160e0e0()*-0.0047744);
}

double NNfunction_ss_sLuL::synapse0x16275f0() {
   return (neuron0x160e420()*-0.00593511);
}

double NNfunction_ss_sLuL::synapse0x1627630() {
   return (neuron0x160e760()*-0.0207786);
}

double NNfunction_ss_sLuL::synapse0x1627670() {
   return (neuron0x160eaa0()*0.0170261);
}

double NNfunction_ss_sLuL::synapse0x16276b0() {
   return (neuron0x160ede0()*0.0305231);
}

double NNfunction_ss_sLuL::synapse0x16276f0() {
   return (neuron0x160f120()*0.0039423);
}

double NNfunction_ss_sLuL::synapse0x1627a70() {
   return (neuron0x160a560()*0.133494);
}

double NNfunction_ss_sLuL::synapse0x1627ab0() {
   return (neuron0x160a8a0()*-0.0751774);
}

double NNfunction_ss_sLuL::synapse0x1627af0() {
   return (neuron0x160abe0()*0.0098494);
}

double NNfunction_ss_sLuL::synapse0x1627b30() {
   return (neuron0x160af20()*0.442211);
}

double NNfunction_ss_sLuL::synapse0x1627b70() {
   return (neuron0x160b260()*-0.0635344);
}

double NNfunction_ss_sLuL::synapse0x1627bb0() {
   return (neuron0x160b5a0()*-0.234415);
}

double NNfunction_ss_sLuL::synapse0x1627bf0() {
   return (neuron0x160b8e0()*0.168753);
}

double NNfunction_ss_sLuL::synapse0x1627c30() {
   return (neuron0x160bc20()*0.0339769);
}

double NNfunction_ss_sLuL::synapse0x1627c70() {
   return (neuron0x160bf60()*0.0567787);
}

double NNfunction_ss_sLuL::synapse0x1627cb0() {
   return (neuron0x160c2a0()*0.385051);
}

double NNfunction_ss_sLuL::synapse0x1627cf0() {
   return (neuron0x160c5e0()*0.0244215);
}

double NNfunction_ss_sLuL::synapse0x1627d30() {
   return (neuron0x160c920()*1.54308);
}

double NNfunction_ss_sLuL::synapse0x1627d70() {
   return (neuron0x160cc60()*1.31041);
}

double NNfunction_ss_sLuL::synapse0x1627db0() {
   return (neuron0x160cfa0()*0.0354076);
}

double NNfunction_ss_sLuL::synapse0x1627df0() {
   return (neuron0x160d2e0()*-0.0745665);
}

double NNfunction_ss_sLuL::synapse0x1627e30() {
   return (neuron0x160d620()*-0.0621563);
}

double NNfunction_ss_sLuL::synapse0x16278c0() {
   return (neuron0x160d960()*-0.012342);
}

double NNfunction_ss_sLuL::synapse0x1627900() {
   return (neuron0x160dec0()*0.300277);
}

double NNfunction_ss_sLuL::synapse0x1627f80() {
   return (neuron0x160e0e0()*0.0801196);
}

double NNfunction_ss_sLuL::synapse0x1627fc0() {
   return (neuron0x160e420()*0.162903);
}

double NNfunction_ss_sLuL::synapse0x1628000() {
   return (neuron0x160e760()*-0.0999619);
}

double NNfunction_ss_sLuL::synapse0x1628040() {
   return (neuron0x160eaa0()*-0.0515302);
}

double NNfunction_ss_sLuL::synapse0x1628080() {
   return (neuron0x160ede0()*0.03409);
}

double NNfunction_ss_sLuL::synapse0x16280c0() {
   return (neuron0x160f120()*-0.0415234);
}

double NNfunction_ss_sLuL::synapse0x1628440() {
   return (neuron0x160a560()*0.0237758);
}

double NNfunction_ss_sLuL::synapse0x1628480() {
   return (neuron0x160a8a0()*0.0157115);
}

double NNfunction_ss_sLuL::synapse0x16284c0() {
   return (neuron0x160abe0()*-0.110326);
}

double NNfunction_ss_sLuL::synapse0x1628500() {
   return (neuron0x160af20()*1.42176);
}

double NNfunction_ss_sLuL::synapse0x1628540() {
   return (neuron0x160b260()*-0.0473275);
}

double NNfunction_ss_sLuL::synapse0x1628580() {
   return (neuron0x160b5a0()*-0.0274057);
}

double NNfunction_ss_sLuL::synapse0x16285c0() {
   return (neuron0x160b8e0()*0.0680669);
}

double NNfunction_ss_sLuL::synapse0x1628600() {
   return (neuron0x160bc20()*0.0334489);
}

double NNfunction_ss_sLuL::synapse0x1628640() {
   return (neuron0x160bf60()*0.0381019);
}

double NNfunction_ss_sLuL::synapse0x1628680() {
   return (neuron0x160c2a0()*-0.00973856);
}

double NNfunction_ss_sLuL::synapse0x16286c0() {
   return (neuron0x160c5e0()*0.0712379);
}

double NNfunction_ss_sLuL::synapse0x1628700() {
   return (neuron0x160c920()*0.686188);
}

double NNfunction_ss_sLuL::synapse0x1628740() {
   return (neuron0x160cc60()*0.403252);
}

double NNfunction_ss_sLuL::synapse0x1628780() {
   return (neuron0x160cfa0()*0.087952);
}

double NNfunction_ss_sLuL::synapse0x16287c0() {
   return (neuron0x160d2e0()*-0.00119148);
}

double NNfunction_ss_sLuL::synapse0x1628800() {
   return (neuron0x160d620()*-0.00397101);
}

double NNfunction_ss_sLuL::synapse0x1628290() {
   return (neuron0x160d960()*0.0875014);
}

double NNfunction_ss_sLuL::synapse0x16282d0() {
   return (neuron0x160dec0()*0.11599);
}

double NNfunction_ss_sLuL::synapse0x1628950() {
   return (neuron0x160e0e0()*0.0372457);
}

double NNfunction_ss_sLuL::synapse0x1628990() {
   return (neuron0x160e420()*0.0905657);
}

double NNfunction_ss_sLuL::synapse0x16289d0() {
   return (neuron0x160e760()*-0.0354248);
}

double NNfunction_ss_sLuL::synapse0x1628a10() {
   return (neuron0x160eaa0()*0.0343903);
}

double NNfunction_ss_sLuL::synapse0x1628a50() {
   return (neuron0x160ede0()*-0.000641438);
}

double NNfunction_ss_sLuL::synapse0x1628a90() {
   return (neuron0x160f120()*-0.0530188);
}

double NNfunction_ss_sLuL::synapse0x1628e10() {
   return (neuron0x160a560()*0.127601);
}

double NNfunction_ss_sLuL::synapse0x1628e50() {
   return (neuron0x160a8a0()*0.0289111);
}

double NNfunction_ss_sLuL::synapse0x1628e90() {
   return (neuron0x160abe0()*0.70087);
}

double NNfunction_ss_sLuL::synapse0x1628ed0() {
   return (neuron0x160af20()*1.335);
}

double NNfunction_ss_sLuL::synapse0x1628f10() {
   return (neuron0x160b260()*-0.232099);
}

double NNfunction_ss_sLuL::synapse0x1628f50() {
   return (neuron0x160b5a0()*0.252507);
}

double NNfunction_ss_sLuL::synapse0x1628f90() {
   return (neuron0x160b8e0()*-0.0333221);
}

double NNfunction_ss_sLuL::synapse0x1628fd0() {
   return (neuron0x160bc20()*0.164702);
}

double NNfunction_ss_sLuL::synapse0x1629010() {
   return (neuron0x160bf60()*0.115417);
}

double NNfunction_ss_sLuL::synapse0x1629050() {
   return (neuron0x160c2a0()*0.00219305);
}

double NNfunction_ss_sLuL::synapse0x1629090() {
   return (neuron0x160c5e0()*0.111463);
}

double NNfunction_ss_sLuL::synapse0x16290d0() {
   return (neuron0x160c920()*-0.671448);
}

double NNfunction_ss_sLuL::synapse0x1629110() {
   return (neuron0x160cc60()*-0.150882);
}

double NNfunction_ss_sLuL::synapse0x1629150() {
   return (neuron0x160cfa0()*-0.0913089);
}

double NNfunction_ss_sLuL::synapse0x1629190() {
   return (neuron0x160d2e0()*-0.186809);
}

double NNfunction_ss_sLuL::synapse0x16291d0() {
   return (neuron0x160d620()*0.119595);
}

double NNfunction_ss_sLuL::synapse0x1628c60() {
   return (neuron0x160d960()*-0.11649);
}

double NNfunction_ss_sLuL::synapse0x1628ca0() {
   return (neuron0x160dec0()*0.137717);
}

double NNfunction_ss_sLuL::synapse0x1629320() {
   return (neuron0x160e0e0()*0.054773);
}

double NNfunction_ss_sLuL::synapse0x1629360() {
   return (neuron0x160e420()*0.261333);
}

double NNfunction_ss_sLuL::synapse0x16293a0() {
   return (neuron0x160e760()*-0.128529);
}

double NNfunction_ss_sLuL::synapse0x16293e0() {
   return (neuron0x160eaa0()*-0.0392696);
}

double NNfunction_ss_sLuL::synapse0x1629420() {
   return (neuron0x160ede0()*0.0308215);
}

double NNfunction_ss_sLuL::synapse0x1629460() {
   return (neuron0x160f120()*0.113515);
}

double NNfunction_ss_sLuL::synapse0x16297e0() {
   return (neuron0x160a560()*-0.066086);
}

double NNfunction_ss_sLuL::synapse0x1629820() {
   return (neuron0x160a8a0()*0.0586949);
}

double NNfunction_ss_sLuL::synapse0x1629860() {
   return (neuron0x160abe0()*0.252739);
}

double NNfunction_ss_sLuL::synapse0x16298a0() {
   return (neuron0x160af20()*-1.24695);
}

double NNfunction_ss_sLuL::synapse0x16298e0() {
   return (neuron0x160b260()*-0.177258);
}

double NNfunction_ss_sLuL::synapse0x1629920() {
   return (neuron0x160b5a0()*0.467862);
}

double NNfunction_ss_sLuL::synapse0x1629960() {
   return (neuron0x160b8e0()*0.492571);
}

double NNfunction_ss_sLuL::synapse0x16299a0() {
   return (neuron0x160bc20()*0.343093);
}

double NNfunction_ss_sLuL::synapse0x16299e0() {
   return (neuron0x160bf60()*-0.299957);
}

double NNfunction_ss_sLuL::synapse0x1629a20() {
   return (neuron0x160c2a0()*0.251149);
}

double NNfunction_ss_sLuL::synapse0x1629a60() {
   return (neuron0x160c5e0()*0.171266);
}

double NNfunction_ss_sLuL::synapse0x1629aa0() {
   return (neuron0x160c920()*0.563559);
}

double NNfunction_ss_sLuL::synapse0x1629ae0() {
   return (neuron0x160cc60()*-0.740985);
}

double NNfunction_ss_sLuL::synapse0x1629b20() {
   return (neuron0x160cfa0()*-0.25078);
}

double NNfunction_ss_sLuL::synapse0x1629b60() {
   return (neuron0x160d2e0()*-0.372615);
}

double NNfunction_ss_sLuL::synapse0x1629ba0() {
   return (neuron0x160d620()*-0.704295);
}

double NNfunction_ss_sLuL::synapse0x1629630() {
   return (neuron0x160d960()*0.181726);
}

double NNfunction_ss_sLuL::synapse0x1629670() {
   return (neuron0x160dec0()*-0.272732);
}

double NNfunction_ss_sLuL::synapse0x1629cf0() {
   return (neuron0x160e0e0()*0.409772);
}

double NNfunction_ss_sLuL::synapse0x1629d30() {
   return (neuron0x160e420()*-0.535247);
}

double NNfunction_ss_sLuL::synapse0x1629d70() {
   return (neuron0x160e760()*0.00351153);
}

double NNfunction_ss_sLuL::synapse0x1629db0() {
   return (neuron0x160eaa0()*-0.497674);
}

double NNfunction_ss_sLuL::synapse0x1629df0() {
   return (neuron0x160ede0()*0.0134126);
}

double NNfunction_ss_sLuL::synapse0x1629e30() {
   return (neuron0x160f120()*0.153303);
}

double NNfunction_ss_sLuL::synapse0x162a1b0() {
   return (neuron0x160a560()*-0.409448);
}

double NNfunction_ss_sLuL::synapse0x162a1f0() {
   return (neuron0x160a8a0()*-0.0738342);
}

double NNfunction_ss_sLuL::synapse0x162a230() {
   return (neuron0x160abe0()*-0.428388);
}

double NNfunction_ss_sLuL::synapse0x162a270() {
   return (neuron0x160af20()*-0.578646);
}

double NNfunction_ss_sLuL::synapse0x162a2b0() {
   return (neuron0x160b260()*-0.203452);
}

double NNfunction_ss_sLuL::synapse0x162a2f0() {
   return (neuron0x160b5a0()*0.214403);
}

double NNfunction_ss_sLuL::synapse0x162a330() {
   return (neuron0x160b8e0()*0.149008);
}

double NNfunction_ss_sLuL::synapse0x162a370() {
   return (neuron0x160bc20()*0.290244);
}

double NNfunction_ss_sLuL::synapse0x162a3b0() {
   return (neuron0x160bf60()*-0.0223404);
}

double NNfunction_ss_sLuL::synapse0x162a3f0() {
   return (neuron0x160c2a0()*-0.121594);
}

double NNfunction_ss_sLuL::synapse0x162a430() {
   return (neuron0x160c5e0()*-0.0205675);
}

double NNfunction_ss_sLuL::synapse0x162a470() {
   return (neuron0x160c920()*-0.471998);
}

double NNfunction_ss_sLuL::synapse0x162a4b0() {
   return (neuron0x160cc60()*-0.442689);
}

double NNfunction_ss_sLuL::synapse0x162a4f0() {
   return (neuron0x160cfa0()*-0.0110995);
}

double NNfunction_ss_sLuL::synapse0x162a530() {
   return (neuron0x160d2e0()*0.0771112);
}

double NNfunction_ss_sLuL::synapse0x162a570() {
   return (neuron0x160d620()*0.402518);
}

double NNfunction_ss_sLuL::synapse0x162a000() {
   return (neuron0x160d960()*0.201522);
}

double NNfunction_ss_sLuL::synapse0x162a040() {
   return (neuron0x160dec0()*-0.248364);
}

double NNfunction_ss_sLuL::synapse0x162a6c0() {
   return (neuron0x160e0e0()*-0.119941);
}

double NNfunction_ss_sLuL::synapse0x162a700() {
   return (neuron0x160e420()*-0.116145);
}

double NNfunction_ss_sLuL::synapse0x162a740() {
   return (neuron0x160e760()*-0.0543468);
}

double NNfunction_ss_sLuL::synapse0x162a780() {
   return (neuron0x160eaa0()*-0.018695);
}

double NNfunction_ss_sLuL::synapse0x162a7c0() {
   return (neuron0x160ede0()*-0.0346924);
}

double NNfunction_ss_sLuL::synapse0x162a800() {
   return (neuron0x160f120()*0.0642952);
}

double NNfunction_ss_sLuL::synapse0x162ab80() {
   return (neuron0x160a560()*-0.0066014);
}

double NNfunction_ss_sLuL::synapse0x162abc0() {
   return (neuron0x160a8a0()*0.0407108);
}

double NNfunction_ss_sLuL::synapse0x162ac00() {
   return (neuron0x160abe0()*0.0183022);
}

double NNfunction_ss_sLuL::synapse0x162ac40() {
   return (neuron0x160af20()*3.83218);
}

double NNfunction_ss_sLuL::synapse0x162ac80() {
   return (neuron0x160b260()*-0.0442188);
}

double NNfunction_ss_sLuL::synapse0x162acc0() {
   return (neuron0x160b5a0()*-0.0145562);
}

double NNfunction_ss_sLuL::synapse0x162ad00() {
   return (neuron0x160b8e0()*0.0366745);
}

double NNfunction_ss_sLuL::synapse0x162ad40() {
   return (neuron0x160bc20()*-0.0614595);
}

double NNfunction_ss_sLuL::synapse0x162ad80() {
   return (neuron0x160bf60()*0.0397742);
}

double NNfunction_ss_sLuL::synapse0x162adc0() {
   return (neuron0x160c2a0()*-0.00261385);
}

double NNfunction_ss_sLuL::synapse0x162ae00() {
   return (neuron0x160c5e0()*0.0223358);
}

double NNfunction_ss_sLuL::synapse0x162ae40() {
   return (neuron0x160c920()*0.631548);
}

double NNfunction_ss_sLuL::synapse0x162ae80() {
   return (neuron0x160cc60()*-2.18794);
}

double NNfunction_ss_sLuL::synapse0x162aec0() {
   return (neuron0x160cfa0()*-0.0575712);
}

double NNfunction_ss_sLuL::synapse0x162af00() {
   return (neuron0x160d2e0()*0.00751747);
}

double NNfunction_ss_sLuL::synapse0x162af40() {
   return (neuron0x160d620()*-0.0663454);
}

double NNfunction_ss_sLuL::synapse0x162a9d0() {
   return (neuron0x160d960()*0.0430952);
}

double NNfunction_ss_sLuL::synapse0x162aa10() {
   return (neuron0x160dec0()*0.00113781);
}

double NNfunction_ss_sLuL::synapse0x162b090() {
   return (neuron0x160e0e0()*-0.0458057);
}

double NNfunction_ss_sLuL::synapse0x162b0d0() {
   return (neuron0x160e420()*0.0183785);
}

double NNfunction_ss_sLuL::synapse0x162b110() {
   return (neuron0x160e760()*-0.0543447);
}

double NNfunction_ss_sLuL::synapse0x162b150() {
   return (neuron0x160eaa0()*0.0469436);
}

double NNfunction_ss_sLuL::synapse0x162b190() {
   return (neuron0x160ede0()*-0.0289107);
}

double NNfunction_ss_sLuL::synapse0x162b1d0() {
   return (neuron0x160f120()*0.0409676);
}

double NNfunction_ss_sLuL::synapse0x162b550() {
   return (neuron0x160a560()*-0.409385);
}

double NNfunction_ss_sLuL::synapse0x162b590() {
   return (neuron0x160a8a0()*-0.158437);
}

double NNfunction_ss_sLuL::synapse0x162b5d0() {
   return (neuron0x160abe0()*0.266973);
}

double NNfunction_ss_sLuL::synapse0x162b610() {
   return (neuron0x160af20()*-0.212434);
}

double NNfunction_ss_sLuL::synapse0x162b650() {
   return (neuron0x160b260()*-0.164466);
}

double NNfunction_ss_sLuL::synapse0x162b690() {
   return (neuron0x160b5a0()*-0.302699);
}

double NNfunction_ss_sLuL::synapse0x162b6d0() {
   return (neuron0x160b8e0()*-0.143916);
}

double NNfunction_ss_sLuL::synapse0x162b710() {
   return (neuron0x160bc20()*-0.690296);
}

double NNfunction_ss_sLuL::synapse0x162b750() {
   return (neuron0x160bf60()*0.357809);
}

double NNfunction_ss_sLuL::synapse0x162b790() {
   return (neuron0x160c2a0()*-0.172188);
}

double NNfunction_ss_sLuL::synapse0x162b7d0() {
   return (neuron0x160c5e0()*-0.12755);
}

double NNfunction_ss_sLuL::synapse0x162b810() {
   return (neuron0x160c920()*-0.623339);
}

double NNfunction_ss_sLuL::synapse0x162b850() {
   return (neuron0x160cc60()*-0.0335706);
}

double NNfunction_ss_sLuL::synapse0x162b890() {
   return (neuron0x160cfa0()*-0.153565);
}

double NNfunction_ss_sLuL::synapse0x162b8d0() {
   return (neuron0x160d2e0()*-0.854731);
}

double NNfunction_ss_sLuL::synapse0x162b910() {
   return (neuron0x160d620()*0.520912);
}

double NNfunction_ss_sLuL::synapse0x162b3a0() {
   return (neuron0x160d960()*-0.0929527);
}

double NNfunction_ss_sLuL::synapse0x162b3e0() {
   return (neuron0x160dec0()*-0.443572);
}

double NNfunction_ss_sLuL::synapse0x162ba60() {
   return (neuron0x160e0e0()*-0.851462);
}

double NNfunction_ss_sLuL::synapse0x162baa0() {
   return (neuron0x160e420()*-0.0923632);
}

double NNfunction_ss_sLuL::synapse0x162bae0() {
   return (neuron0x160e760()*-0.571152);
}

double NNfunction_ss_sLuL::synapse0x162bb20() {
   return (neuron0x160eaa0()*0.184333);
}

double NNfunction_ss_sLuL::synapse0x162bb60() {
   return (neuron0x160ede0()*0.0895126);
}

double NNfunction_ss_sLuL::synapse0x162bba0() {
   return (neuron0x160f120()*0.129984);
}

double NNfunction_ss_sLuL::synapse0x1614650() {
   return (neuron0x160a560()*-0.231188);
}

double NNfunction_ss_sLuL::synapse0x1614690() {
   return (neuron0x160a8a0()*0.0110115);
}

double NNfunction_ss_sLuL::synapse0x16146d0() {
   return (neuron0x160abe0()*0.00784943);
}

double NNfunction_ss_sLuL::synapse0x1614710() {
   return (neuron0x160af20()*-0.100726);
}

double NNfunction_ss_sLuL::synapse0x1614750() {
   return (neuron0x160b260()*-0.0691334);
}

double NNfunction_ss_sLuL::synapse0x1614790() {
   return (neuron0x160b5a0()*-0.0749155);
}

double NNfunction_ss_sLuL::synapse0x16147d0() {
   return (neuron0x160b8e0()*-0.0410824);
}

double NNfunction_ss_sLuL::synapse0x1614810() {
   return (neuron0x160bc20()*-0.0779315);
}

double NNfunction_ss_sLuL::synapse0x162c330() {
   return (neuron0x160bf60()*-0.0488717);
}

double NNfunction_ss_sLuL::synapse0x162c370() {
   return (neuron0x160c2a0()*0.224676);
}

double NNfunction_ss_sLuL::synapse0x162c3b0() {
   return (neuron0x160c5e0()*-0.190796);
}

double NNfunction_ss_sLuL::synapse0x162c3f0() {
   return (neuron0x160c920()*1.35848);
}

double NNfunction_ss_sLuL::synapse0x162c430() {
   return (neuron0x160cc60()*0.0049592);
}

double NNfunction_ss_sLuL::synapse0x162c470() {
   return (neuron0x160cfa0()*-0.041475);
}

double NNfunction_ss_sLuL::synapse0x162c4b0() {
   return (neuron0x160d2e0()*0.0753487);
}

double NNfunction_ss_sLuL::synapse0x162c4f0() {
   return (neuron0x160d620()*-0.019034);
}

double NNfunction_ss_sLuL::synapse0x162bd70() {
   return (neuron0x160d960()*-0.251085);
}

double NNfunction_ss_sLuL::synapse0x162bdb0() {
   return (neuron0x160dec0()*-0.296157);
}

double NNfunction_ss_sLuL::synapse0x162c640() {
   return (neuron0x160e0e0()*-0.20648);
}

double NNfunction_ss_sLuL::synapse0x162c680() {
   return (neuron0x160e420()*-0.508485);
}

double NNfunction_ss_sLuL::synapse0x162c6c0() {
   return (neuron0x160e760()*0.0112722);
}

double NNfunction_ss_sLuL::synapse0x162c700() {
   return (neuron0x160eaa0()*0.175931);
}

double NNfunction_ss_sLuL::synapse0x162c740() {
   return (neuron0x160ede0()*-0.112013);
}

double NNfunction_ss_sLuL::synapse0x162c780() {
   return (neuron0x160f120()*0.435579);
}

double NNfunction_ss_sLuL::synapse0x162cb00() {
   return (neuron0x160a560()*-0.204128);
}

double NNfunction_ss_sLuL::synapse0x162cb40() {
   return (neuron0x160a8a0()*0.0553695);
}

double NNfunction_ss_sLuL::synapse0x162cb80() {
   return (neuron0x160abe0()*0.532039);
}

double NNfunction_ss_sLuL::synapse0x162cbc0() {
   return (neuron0x160af20()*0.362194);
}

double NNfunction_ss_sLuL::synapse0x162cc00() {
   return (neuron0x160b260()*-0.404245);
}

double NNfunction_ss_sLuL::synapse0x162cc40() {
   return (neuron0x160b5a0()*0.00651482);
}

double NNfunction_ss_sLuL::synapse0x162cc80() {
   return (neuron0x160b8e0()*-0.581795);
}

double NNfunction_ss_sLuL::synapse0x162ccc0() {
   return (neuron0x160bc20()*-0.468304);
}

double NNfunction_ss_sLuL::synapse0x162cd00() {
   return (neuron0x160bf60()*0.0513497);
}

double NNfunction_ss_sLuL::synapse0x162cd40() {
   return (neuron0x160c2a0()*0.0689511);
}

double NNfunction_ss_sLuL::synapse0x162cd80() {
   return (neuron0x160c5e0()*0.0812141);
}

double NNfunction_ss_sLuL::synapse0x162cdc0() {
   return (neuron0x160c920()*-0.00448715);
}

double NNfunction_ss_sLuL::synapse0x162ce00() {
   return (neuron0x160cc60()*-0.448228);
}

double NNfunction_ss_sLuL::synapse0x162ce40() {
   return (neuron0x160cfa0()*-0.239906);
}

double NNfunction_ss_sLuL::synapse0x162ce80() {
   return (neuron0x160d2e0()*0.569905);
}

double NNfunction_ss_sLuL::synapse0x162cec0() {
   return (neuron0x160d620()*-0.174041);
}

double NNfunction_ss_sLuL::synapse0x162c950() {
   return (neuron0x160d960()*-0.110098);
}

double NNfunction_ss_sLuL::synapse0x162c990() {
   return (neuron0x160dec0()*0.253813);
}

double NNfunction_ss_sLuL::synapse0x162d010() {
   return (neuron0x160e0e0()*0.24579);
}

double NNfunction_ss_sLuL::synapse0x162d050() {
   return (neuron0x160e420()*0.285186);
}

double NNfunction_ss_sLuL::synapse0x162d090() {
   return (neuron0x160e760()*0.301352);
}

double NNfunction_ss_sLuL::synapse0x162d0d0() {
   return (neuron0x160eaa0()*-0.0342497);
}

double NNfunction_ss_sLuL::synapse0x162d110() {
   return (neuron0x160ede0()*0.0780847);
}

double NNfunction_ss_sLuL::synapse0x162d150() {
   return (neuron0x160f120()*0.272224);
}

double NNfunction_ss_sLuL::synapse0x162d4d0() {
   return (neuron0x160a560()*-0.775737);
}

double NNfunction_ss_sLuL::synapse0x162d510() {
   return (neuron0x160a8a0()*-0.334352);
}

double NNfunction_ss_sLuL::synapse0x162d550() {
   return (neuron0x160abe0()*0.794357);
}

double NNfunction_ss_sLuL::synapse0x162d590() {
   return (neuron0x160af20()*0.0899654);
}

double NNfunction_ss_sLuL::synapse0x162d5d0() {
   return (neuron0x160b260()*0.796028);
}

double NNfunction_ss_sLuL::synapse0x162d610() {
   return (neuron0x160b5a0()*0.0979963);
}

double NNfunction_ss_sLuL::synapse0x162d650() {
   return (neuron0x160b8e0()*-0.243103);
}

double NNfunction_ss_sLuL::synapse0x162d690() {
   return (neuron0x160bc20()*-0.14452);
}

double NNfunction_ss_sLuL::synapse0x162d6d0() {
   return (neuron0x160bf60()*0.152209);
}

double NNfunction_ss_sLuL::synapse0x162d710() {
   return (neuron0x160c2a0()*-0.66867);
}

double NNfunction_ss_sLuL::synapse0x162d750() {
   return (neuron0x160c5e0()*-0.380215);
}

double NNfunction_ss_sLuL::synapse0x162d790() {
   return (neuron0x160c920()*0.21322);
}

double NNfunction_ss_sLuL::synapse0x162d7d0() {
   return (neuron0x160cc60()*0.0149315);
}

double NNfunction_ss_sLuL::synapse0x162d810() {
   return (neuron0x160cfa0()*0.417743);
}

double NNfunction_ss_sLuL::synapse0x162d850() {
   return (neuron0x160d2e0()*0.274373);
}

double NNfunction_ss_sLuL::synapse0x162d890() {
   return (neuron0x160d620()*0.109821);
}

double NNfunction_ss_sLuL::synapse0x162d320() {
   return (neuron0x160d960()*0.0858969);
}

double NNfunction_ss_sLuL::synapse0x162d360() {
   return (neuron0x160dec0()*-0.00558643);
}

double NNfunction_ss_sLuL::synapse0x161de90() {
   return (neuron0x160e0e0()*-0.19602);
}

double NNfunction_ss_sLuL::synapse0x161ded0() {
   return (neuron0x160e420()*-0.0419129);
}

double NNfunction_ss_sLuL::synapse0x161df10() {
   return (neuron0x160e760()*0.226985);
}

double NNfunction_ss_sLuL::synapse0x161df50() {
   return (neuron0x160eaa0()*-0.241877);
}

double NNfunction_ss_sLuL::synapse0x161df90() {
   return (neuron0x160ede0()*-0.371795);
}

double NNfunction_ss_sLuL::synapse0x161dfd0() {
   return (neuron0x160f120()*-0.203652);
}

double NNfunction_ss_sLuL::synapse0x161e350() {
   return (neuron0x160a560()*0.0121059);
}

double NNfunction_ss_sLuL::synapse0x161e390() {
   return (neuron0x160a8a0()*-0.0301739);
}

double NNfunction_ss_sLuL::synapse0x161e3d0() {
   return (neuron0x160abe0()*1.14092);
}

double NNfunction_ss_sLuL::synapse0x161e410() {
   return (neuron0x160af20()*-0.0548486);
}

double NNfunction_ss_sLuL::synapse0x161e450() {
   return (neuron0x160b260()*-0.0107972);
}

double NNfunction_ss_sLuL::synapse0x161e490() {
   return (neuron0x160b5a0()*-0.000795536);
}

double NNfunction_ss_sLuL::synapse0x161e4d0() {
   return (neuron0x160b8e0()*0.0136488);
}

double NNfunction_ss_sLuL::synapse0x161e510() {
   return (neuron0x160bc20()*0.0245961);
}

double NNfunction_ss_sLuL::synapse0x161e550() {
   return (neuron0x160bf60()*0.00261316);
}

double NNfunction_ss_sLuL::synapse0x161e590() {
   return (neuron0x160c2a0()*-0.00819803);
}

double NNfunction_ss_sLuL::synapse0x161e5d0() {
   return (neuron0x160c5e0()*0.00972511);
}

double NNfunction_ss_sLuL::synapse0x161e610() {
   return (neuron0x160c920()*-0.158698);
}

double NNfunction_ss_sLuL::synapse0x161e650() {
   return (neuron0x160cc60()*-0.0685089);
}

double NNfunction_ss_sLuL::synapse0x161e690() {
   return (neuron0x160cfa0()*0.0455659);
}

double NNfunction_ss_sLuL::synapse0x161e6d0() {
   return (neuron0x160d2e0()*0.0334635);
}

double NNfunction_ss_sLuL::synapse0x161e710() {
   return (neuron0x160d620()*-0.0139048);
}

double NNfunction_ss_sLuL::synapse0x161e1a0() {
   return (neuron0x160d960()*0.0394245);
}

double NNfunction_ss_sLuL::synapse0x161e1e0() {
   return (neuron0x160dec0()*0.0226814);
}

double NNfunction_ss_sLuL::synapse0x161e860() {
   return (neuron0x160e0e0()*-0.00936027);
}

double NNfunction_ss_sLuL::synapse0x161e8a0() {
   return (neuron0x160e420()*-0.0453301);
}

double NNfunction_ss_sLuL::synapse0x161e8e0() {
   return (neuron0x160e760()*0.0127086);
}

double NNfunction_ss_sLuL::synapse0x161e920() {
   return (neuron0x160eaa0()*0.0200476);
}

double NNfunction_ss_sLuL::synapse0x161e960() {
   return (neuron0x160ede0()*0.00656034);
}

double NNfunction_ss_sLuL::synapse0x161e9a0() {
   return (neuron0x160f120()*-0.00279892);
}

double NNfunction_ss_sLuL::synapse0x161ed20() {
   return (neuron0x160a560()*-0.0399031);
}

double NNfunction_ss_sLuL::synapse0x161ed60() {
   return (neuron0x160a8a0()*0.0780616);
}

double NNfunction_ss_sLuL::synapse0x161eda0() {
   return (neuron0x160abe0()*0.229714);
}

double NNfunction_ss_sLuL::synapse0x161ede0() {
   return (neuron0x160af20()*0.775506);
}

double NNfunction_ss_sLuL::synapse0x161ee20() {
   return (neuron0x160b260()*-0.168431);
}

double NNfunction_ss_sLuL::synapse0x161ee60() {
   return (neuron0x160b5a0()*-0.0459863);
}

double NNfunction_ss_sLuL::synapse0x161eea0() {
   return (neuron0x160b8e0()*-0.00459673);
}

double NNfunction_ss_sLuL::synapse0x161eee0() {
   return (neuron0x160bc20()*-0.0491459);
}

double NNfunction_ss_sLuL::synapse0x161ef20() {
   return (neuron0x160bf60()*0.0222165);
}

double NNfunction_ss_sLuL::synapse0x161ef60() {
   return (neuron0x160c2a0()*0.0346916);
}

double NNfunction_ss_sLuL::synapse0x161efa0() {
   return (neuron0x160c5e0()*-0.0193035);
}

double NNfunction_ss_sLuL::synapse0x161efe0() {
   return (neuron0x160c920()*-0.07618);
}

double NNfunction_ss_sLuL::synapse0x161f020() {
   return (neuron0x160cc60()*0.0266157);
}

double NNfunction_ss_sLuL::synapse0x161f060() {
   return (neuron0x160cfa0()*-0.0284349);
}

double NNfunction_ss_sLuL::synapse0x161f0a0() {
   return (neuron0x160d2e0()*0.0784996);
}

double NNfunction_ss_sLuL::synapse0x161f0e0() {
   return (neuron0x160d620()*0.0389421);
}

double NNfunction_ss_sLuL::synapse0x161eb70() {
   return (neuron0x160d960()*0.0546581);
}

double NNfunction_ss_sLuL::synapse0x161ebb0() {
   return (neuron0x160dec0()*-0.0882737);
}

double NNfunction_ss_sLuL::synapse0x161f230() {
   return (neuron0x160e0e0()*-0.0279499);
}

double NNfunction_ss_sLuL::synapse0x161f270() {
   return (neuron0x160e420()*-0.0201081);
}

double NNfunction_ss_sLuL::synapse0x161f2b0() {
   return (neuron0x160e760()*0.0366585);
}

double NNfunction_ss_sLuL::synapse0x161f2f0() {
   return (neuron0x160eaa0()*0.0020776);
}

double NNfunction_ss_sLuL::synapse0x161f330() {
   return (neuron0x160ede0()*-0.0420783);
}

double NNfunction_ss_sLuL::synapse0x161f370() {
   return (neuron0x160f120()*0.0325912);
}

double NNfunction_ss_sLuL::synapse0x161f6f0() {
   return (neuron0x160a560()*-0.016708);
}

double NNfunction_ss_sLuL::synapse0x161f730() {
   return (neuron0x160a8a0()*0.0243074);
}

double NNfunction_ss_sLuL::synapse0x161f770() {
   return (neuron0x160abe0()*0.0228455);
}

double NNfunction_ss_sLuL::synapse0x161f7b0() {
   return (neuron0x160af20()*-4.31418);
}

double NNfunction_ss_sLuL::synapse0x161f7f0() {
   return (neuron0x160b260()*-0.0517016);
}

double NNfunction_ss_sLuL::synapse0x161f830() {
   return (neuron0x160b5a0()*-0.0136096);
}

double NNfunction_ss_sLuL::synapse0x161f870() {
   return (neuron0x160b8e0()*-0.010533);
}

double NNfunction_ss_sLuL::synapse0x161f8b0() {
   return (neuron0x160bc20()*-0.0372096);
}

double NNfunction_ss_sLuL::synapse0x161f8f0() {
   return (neuron0x160bf60()*-0.0550595);
}

double NNfunction_ss_sLuL::synapse0x161f930() {
   return (neuron0x160c2a0()*0.0212243);
}

double NNfunction_ss_sLuL::synapse0x161f970() {
   return (neuron0x160c5e0()*0.0288217);
}

double NNfunction_ss_sLuL::synapse0x161f9b0() {
   return (neuron0x160c920()*-0.919164);
}

double NNfunction_ss_sLuL::synapse0x161f9f0() {
   return (neuron0x160cc60()*-0.901517);
}

double NNfunction_ss_sLuL::synapse0x161fa30() {
   return (neuron0x160cfa0()*0.117054);
}

double NNfunction_ss_sLuL::synapse0x161fa70() {
   return (neuron0x160d2e0()*0.0117767);
}

double NNfunction_ss_sLuL::synapse0x161fab0() {
   return (neuron0x160d620()*0.0170866);
}

double NNfunction_ss_sLuL::synapse0x161f540() {
   return (neuron0x160d960()*0.060631);
}

double NNfunction_ss_sLuL::synapse0x161f580() {
   return (neuron0x160dec0()*0.0552251);
}

double NNfunction_ss_sLuL::synapse0x161fc00() {
   return (neuron0x160e0e0()*0.0566888);
}

double NNfunction_ss_sLuL::synapse0x161fc40() {
   return (neuron0x160e420()*-0.0527034);
}

double NNfunction_ss_sLuL::synapse0x161fc80() {
   return (neuron0x160e760()*0.0223295);
}

double NNfunction_ss_sLuL::synapse0x161fcc0() {
   return (neuron0x160eaa0()*0.0485954);
}

double NNfunction_ss_sLuL::synapse0x161fd00() {
   return (neuron0x160ede0()*-0.0443359);
}

double NNfunction_ss_sLuL::synapse0x161fd40() {
   return (neuron0x160f120()*0.0732522);
}

double NNfunction_ss_sLuL::synapse0x1631c10() {
   return (neuron0x160a560()*-0.0234298);
}

double NNfunction_ss_sLuL::synapse0x1631c50() {
   return (neuron0x160a8a0()*0.0239663);
}

double NNfunction_ss_sLuL::synapse0x1631c90() {
   return (neuron0x160abe0()*0.00527559);
}

double NNfunction_ss_sLuL::synapse0x1631cd0() {
   return (neuron0x160af20()*15.8304);
}

double NNfunction_ss_sLuL::synapse0x1631d10() {
   return (neuron0x160b260()*0.0530129);
}

double NNfunction_ss_sLuL::synapse0x1631d50() {
   return (neuron0x160b5a0()*0.00160782);
}

double NNfunction_ss_sLuL::synapse0x1631d90() {
   return (neuron0x160b8e0()*0.0327017);
}

double NNfunction_ss_sLuL::synapse0x1631dd0() {
   return (neuron0x160bc20()*-0.0212403);
}

double NNfunction_ss_sLuL::synapse0x1631e10() {
   return (neuron0x160bf60()*-0.0125614);
}

double NNfunction_ss_sLuL::synapse0x1631e50() {
   return (neuron0x160c2a0()*-0.030269);
}

double NNfunction_ss_sLuL::synapse0x1631e90() {
   return (neuron0x160c5e0()*0.00586171);
}

double NNfunction_ss_sLuL::synapse0x1631ed0() {
   return (neuron0x160c920()*-1.09201);
}

double NNfunction_ss_sLuL::synapse0x1631f10() {
   return (neuron0x160cc60()*-0.666402);
}

double NNfunction_ss_sLuL::synapse0x1631f50() {
   return (neuron0x160cfa0()*-0.09231);
}

double NNfunction_ss_sLuL::synapse0x1631f90() {
   return (neuron0x160d2e0()*0.0373637);
}

double NNfunction_ss_sLuL::synapse0x1631fd0() {
   return (neuron0x160d620()*0.0186884);
}

double NNfunction_ss_sLuL::synapse0x161fd80() {
   return (neuron0x160d960()*-0.0617227);
}

double NNfunction_ss_sLuL::synapse0x161fdc0() {
   return (neuron0x160dec0()*-0.0199074);
}

double NNfunction_ss_sLuL::synapse0x1632120() {
   return (neuron0x160e0e0()*0.0248411);
}

double NNfunction_ss_sLuL::synapse0x1632160() {
   return (neuron0x160e420()*0.0478113);
}

double NNfunction_ss_sLuL::synapse0x16321a0() {
   return (neuron0x160e760()*0.0163926);
}

double NNfunction_ss_sLuL::synapse0x16321e0() {
   return (neuron0x160eaa0()*0.0137739);
}

double NNfunction_ss_sLuL::synapse0x1632220() {
   return (neuron0x160ede0()*0.00651474);
}

double NNfunction_ss_sLuL::synapse0x1632260() {
   return (neuron0x160f120()*0.0223291);
}

double NNfunction_ss_sLuL::synapse0x16325e0() {
   return (neuron0x160a560()*-0.00493633);
}

double NNfunction_ss_sLuL::synapse0x1632620() {
   return (neuron0x160a8a0()*0.011161);
}

double NNfunction_ss_sLuL::synapse0x1632660() {
   return (neuron0x160abe0()*0.110713);
}

double NNfunction_ss_sLuL::synapse0x16326a0() {
   return (neuron0x160af20()*0.0536531);
}

double NNfunction_ss_sLuL::synapse0x16326e0() {
   return (neuron0x160b260()*0.0199715);
}

double NNfunction_ss_sLuL::synapse0x1632720() {
   return (neuron0x160b5a0()*-0.0512619);
}

double NNfunction_ss_sLuL::synapse0x1632760() {
   return (neuron0x160b8e0()*-0.0133595);
}

double NNfunction_ss_sLuL::synapse0x16327a0() {
   return (neuron0x160bc20()*-0.00850646);
}

double NNfunction_ss_sLuL::synapse0x16327e0() {
   return (neuron0x160bf60()*0.0207296);
}

double NNfunction_ss_sLuL::synapse0x1632820() {
   return (neuron0x160c2a0()*-0.0198818);
}

double NNfunction_ss_sLuL::synapse0x1632860() {
   return (neuron0x160c5e0()*-0.0320268);
}

double NNfunction_ss_sLuL::synapse0x16328a0() {
   return (neuron0x160c920()*3.00343);
}

double NNfunction_ss_sLuL::synapse0x16328e0() {
   return (neuron0x160cc60()*-0.918261);
}

double NNfunction_ss_sLuL::synapse0x1632920() {
   return (neuron0x160cfa0()*0.150836);
}

double NNfunction_ss_sLuL::synapse0x1632960() {
   return (neuron0x160d2e0()*0.0649156);
}

double NNfunction_ss_sLuL::synapse0x16329a0() {
   return (neuron0x160d620()*0.0268106);
}

double NNfunction_ss_sLuL::synapse0x1632430() {
   return (neuron0x160d960()*0.0297022);
}

double NNfunction_ss_sLuL::synapse0x1632470() {
   return (neuron0x160dec0()*0.078458);
}

double NNfunction_ss_sLuL::synapse0x1632af0() {
   return (neuron0x160e0e0()*0.022902);
}

double NNfunction_ss_sLuL::synapse0x1632b30() {
   return (neuron0x160e420()*0.0718316);
}

double NNfunction_ss_sLuL::synapse0x1632b70() {
   return (neuron0x160e760()*-0.0406768);
}

double NNfunction_ss_sLuL::synapse0x1632bb0() {
   return (neuron0x160eaa0()*0.00884808);
}

double NNfunction_ss_sLuL::synapse0x1632bf0() {
   return (neuron0x160ede0()*0.0296703);
}

double NNfunction_ss_sLuL::synapse0x1632c30() {
   return (neuron0x160f120()*0.0151659);
}

double NNfunction_ss_sLuL::synapse0x1632fb0() {
   return (neuron0x160a560()*0.00245547);
}

double NNfunction_ss_sLuL::synapse0x1632ff0() {
   return (neuron0x160a8a0()*0.029639);
}

double NNfunction_ss_sLuL::synapse0x1633030() {
   return (neuron0x160abe0()*0.0820287);
}

double NNfunction_ss_sLuL::synapse0x1633070() {
   return (neuron0x160af20()*-3.77268);
}

double NNfunction_ss_sLuL::synapse0x16330b0() {
   return (neuron0x160b260()*0.00382412);
}

double NNfunction_ss_sLuL::synapse0x16330f0() {
   return (neuron0x160b5a0()*-0.00793289);
}

double NNfunction_ss_sLuL::synapse0x1633130() {
   return (neuron0x160b8e0()*0.00805021);
}

double NNfunction_ss_sLuL::synapse0x1633170() {
   return (neuron0x160bc20()*-0.000294779);
}

double NNfunction_ss_sLuL::synapse0x16331b0() {
   return (neuron0x160bf60()*-0.0268444);
}

double NNfunction_ss_sLuL::synapse0x16331f0() {
   return (neuron0x160c2a0()*-0.0339351);
}

double NNfunction_ss_sLuL::synapse0x1633230() {
   return (neuron0x160c5e0()*-0.00574361);
}

double NNfunction_ss_sLuL::synapse0x1633270() {
   return (neuron0x160c920()*1.06182);
}

double NNfunction_ss_sLuL::synapse0x16332b0() {
   return (neuron0x160cc60()*-1.1466);
}

double NNfunction_ss_sLuL::synapse0x16332f0() {
   return (neuron0x160cfa0()*0.0832572);
}

double NNfunction_ss_sLuL::synapse0x1633330() {
   return (neuron0x160d2e0()*0.0162072);
}

double NNfunction_ss_sLuL::synapse0x1633370() {
   return (neuron0x160d620()*0.0175701);
}

double NNfunction_ss_sLuL::synapse0x1632e00() {
   return (neuron0x160d960()*-0.0244661);
}

double NNfunction_ss_sLuL::synapse0x1632e40() {
   return (neuron0x160dec0()*-0.00651255);
}

double NNfunction_ss_sLuL::synapse0x16334c0() {
   return (neuron0x160e0e0()*-0.0316478);
}

double NNfunction_ss_sLuL::synapse0x1633500() {
   return (neuron0x160e420()*-0.0371649);
}

double NNfunction_ss_sLuL::synapse0x1633540() {
   return (neuron0x160e760()*-0.0235655);
}

double NNfunction_ss_sLuL::synapse0x1633580() {
   return (neuron0x160eaa0()*-0.0119672);
}

double NNfunction_ss_sLuL::synapse0x16335c0() {
   return (neuron0x160ede0()*-0.0300848);
}

double NNfunction_ss_sLuL::synapse0x1633600() {
   return (neuron0x160f120()*0.0361617);
}

double NNfunction_ss_sLuL::synapse0x1633980() {
   return (neuron0x160a560()*0.0007369);
}

double NNfunction_ss_sLuL::synapse0x16339c0() {
   return (neuron0x160a8a0()*-0.000691301);
}

double NNfunction_ss_sLuL::synapse0x1633a00() {
   return (neuron0x160abe0()*-0.00616052);
}

double NNfunction_ss_sLuL::synapse0x1633a40() {
   return (neuron0x160af20()*2.52779);
}

double NNfunction_ss_sLuL::synapse0x1633a80() {
   return (neuron0x160b260()*-0.0105567);
}

double NNfunction_ss_sLuL::synapse0x1633ac0() {
   return (neuron0x160b5a0()*-0.00896713);
}

double NNfunction_ss_sLuL::synapse0x1633b00() {
   return (neuron0x160b8e0()*-0.0126841);
}

double NNfunction_ss_sLuL::synapse0x1633b40() {
   return (neuron0x160bc20()*-0.00783367);
}

double NNfunction_ss_sLuL::synapse0x1633b80() {
   return (neuron0x160bf60()*0.012496);
}

double NNfunction_ss_sLuL::synapse0x1633bc0() {
   return (neuron0x160c2a0()*0.0170866);
}

double NNfunction_ss_sLuL::synapse0x1633c00() {
   return (neuron0x160c5e0()*-0.00858281);
}

double NNfunction_ss_sLuL::synapse0x1633c40() {
   return (neuron0x160c920()*-0.337662);
}

double NNfunction_ss_sLuL::synapse0x1633c80() {
   return (neuron0x160cc60()*-0.128855);
}

double NNfunction_ss_sLuL::synapse0x1633cc0() {
   return (neuron0x160cfa0()*-0.0625717);
}

double NNfunction_ss_sLuL::synapse0x1633d00() {
   return (neuron0x160d2e0()*-0.0249082);
}

double NNfunction_ss_sLuL::synapse0x1633d40() {
   return (neuron0x160d620()*-0.0216012);
}

double NNfunction_ss_sLuL::synapse0x16337d0() {
   return (neuron0x160d960()*-0.0247434);
}

double NNfunction_ss_sLuL::synapse0x1633810() {
   return (neuron0x160dec0()*-0.0396493);
}

double NNfunction_ss_sLuL::synapse0x1633e90() {
   return (neuron0x160e0e0()*-0.0387684);
}

double NNfunction_ss_sLuL::synapse0x1633ed0() {
   return (neuron0x160e420()*-0.0146762);
}

double NNfunction_ss_sLuL::synapse0x1633f10() {
   return (neuron0x160e760()*0.00588633);
}

double NNfunction_ss_sLuL::synapse0x1633f50() {
   return (neuron0x160eaa0()*0.00965417);
}

double NNfunction_ss_sLuL::synapse0x1633f90() {
   return (neuron0x160ede0()*0.00172198);
}

double NNfunction_ss_sLuL::synapse0x1633fd0() {
   return (neuron0x160f120()*0.00066212);
}

double NNfunction_ss_sLuL::synapse0x1610570() {
   return (neuron0x160f5c0()*-0.0691113);
}

double NNfunction_ss_sLuL::synapse0x16105b0() {
   return (neuron0x160fed0()*0.0636451);
}

double NNfunction_ss_sLuL::synapse0x1611a80() {
   return (neuron0x16109b0()*0.229427);
}

double NNfunction_ss_sLuL::synapse0x1611ac0() {
   return (neuron0x13ca240()*-0.172024);
}

double NNfunction_ss_sLuL::synapse0x1612450() {
   return (neuron0x16117d0()*-0.427754);
}

double NNfunction_ss_sLuL::synapse0x1612490() {
   return (neuron0x16121a0()*-0.093732);
}

double NNfunction_ss_sLuL::synapse0x1613220() {
   return (neuron0x1612f70()*0.994784);
}

double NNfunction_ss_sLuL::synapse0x1613260() {
   return (neuron0x1613940()*-0.29264);
}

double NNfunction_ss_sLuL::synapse0x1613bf0() {
   return (neuron0x1614310()*0.166669);
}

double NNfunction_ss_sLuL::synapse0x1613c30() {
   return (neuron0x1614df0()*0.4837);
}

double NNfunction_ss_sLuL::synapse0x16145c0() {
   return (neuron0x16157c0()*0.274241);
}

double NNfunction_ss_sLuL::synapse0x1614600() {
   return (neuron0x16128a0()*0.436558);
}

double NNfunction_ss_sLuL::synapse0x16150a0() {
   return (neuron0x1617370()*-1.4748);
}

double NNfunction_ss_sLuL::synapse0x16150e0() {
   return (neuron0x1617d40()*1.76139);
}

double NNfunction_ss_sLuL::synapse0x1615a70() {
   return (neuron0x1618710()*-1.71792);
}

double NNfunction_ss_sLuL::synapse0x1615ab0() {
   return (neuron0x16190e0()*1.88012);
}

double NNfunction_ss_sLuL::synapse0x1612b50() {
   return (neuron0x161aef0()*-0.200538);
}

double NNfunction_ss_sLuL::synapse0x1612b90() {
   return (neuron0x161b1d0()*-0.236539);
}

double NNfunction_ss_sLuL::synapse0x1617620() {
   return (neuron0x161bba0()*-0.730852);
}

double NNfunction_ss_sLuL::synapse0x1617660() {
   return (neuron0x161c570()*0.0425422);
}

double NNfunction_ss_sLuL::synapse0x1617ff0() {
   return (neuron0x161cf40()*0.144488);
}

double NNfunction_ss_sLuL::synapse0x1618030() {
   return (neuron0x161d910()*-0.527397);
}

double NNfunction_ss_sLuL::synapse0x16189c0() {
   return (neuron0x1616460()*-3.72629);
}

double NNfunction_ss_sLuL::synapse0x1618a00() {
   return (neuron0x1616e30()*-0.795269);
}

double NNfunction_ss_sLuL::synapse0x1619390() {
   return (neuron0x16206a0()*1.157);
}

double NNfunction_ss_sLuL::synapse0x16193d0() {
   return (neuron0x1621070()*0.298311);
}

double NNfunction_ss_sLuL::synapse0x160d500() {
   return (neuron0x1621a40()*-0.408832);
}

double NNfunction_ss_sLuL::synapse0x160d540() {
   return (neuron0x1622410()*1.36316);
}

double NNfunction_ss_sLuL::synapse0x161b480() {
   return (neuron0x1622de0()*-0.205767);
}

double NNfunction_ss_sLuL::synapse0x161b4c0() {
   return (neuron0x16237b0()*0.328219);
}

double NNfunction_ss_sLuL::synapse0x161be50() {
   return (neuron0x1624180()*-1.13371);
}

double NNfunction_ss_sLuL::synapse0x161be90() {
   return (neuron0x1624b50()*0.327272);
}

double NNfunction_ss_sLuL::synapse0x161c820() {
   return (neuron0x161abe0()*-1.69168);
}

double NNfunction_ss_sLuL::synapse0x161c860() {
   return (neuron0x1627730()*-1.37745);
}

double NNfunction_ss_sLuL::synapse0x161d1f0() {
   return (neuron0x1628100()*2.88985);
}

double NNfunction_ss_sLuL::synapse0x161d230() {
   return (neuron0x1628ad0()*-0.186899);
}

double NNfunction_ss_sLuL::synapse0x161dbc0() {
   return (neuron0x16294a0()*0.231634);
}

double NNfunction_ss_sLuL::synapse0x161dc00() {
   return (neuron0x1629e70()*-1.06491);
}

double NNfunction_ss_sLuL::synapse0x1616710() {
   return (neuron0x162a840()*-1.58728);
}

double NNfunction_ss_sLuL::synapse0x1616750() {
   return (neuron0x162b210()*0.0201086);
}

double NNfunction_ss_sLuL::synapse0x161ffc0() {
   return (neuron0x162bbe0()*-0.826079);
}

double NNfunction_ss_sLuL::synapse0x1620000() {
   return (neuron0x162c7c0()*-0.38797);
}

double NNfunction_ss_sLuL::synapse0x1620950() {
   return (neuron0x162d190()*0.109023);
}

double NNfunction_ss_sLuL::synapse0x1620990() {
   return (neuron0x161e010()*-2.08971);
}

double NNfunction_ss_sLuL::synapse0x1621320() {
   return (neuron0x161e9e0()*2.35887);
}

double NNfunction_ss_sLuL::synapse0x1621360() {
   return (neuron0x161f3b0()*0.975723);
}

double NNfunction_ss_sLuL::synapse0x1621cf0() {
   return (neuron0x16319f0()*0.886995);
}

double NNfunction_ss_sLuL::synapse0x1621d30() {
   return (neuron0x16322a0()*-1.8718);
}

double NNfunction_ss_sLuL::synapse0x16226c0() {
   return (neuron0x1632c70()*-0.975794);
}

double NNfunction_ss_sLuL::synapse0x1622700() {
   return (neuron0x1633640()*-1.64492);
}

double NNfunction_ss_sLuL::synapse0x1624e00() {
   return (neuron0x160f5c0()*-0.0882002);
}

double NNfunction_ss_sLuL::synapse0x1624e40() {
   return (neuron0x160fed0()*-0.0211605);
}

double NNfunction_ss_sLuL::synapse0x161a3c0() {
   return (neuron0x16109b0()*0.0409846);
}

double NNfunction_ss_sLuL::synapse0x161a400() {
   return (neuron0x13ca240()*0.0449905);
}

double NNfunction_ss_sLuL::synapse0x16279e0() {
   return (neuron0x16117d0()*0.0346793);
}

double NNfunction_ss_sLuL::synapse0x1627a20() {
   return (neuron0x16121a0()*-0.019763);
}

double NNfunction_ss_sLuL::synapse0x16283b0() {
   return (neuron0x1612f70()*0.433723);
}

double NNfunction_ss_sLuL::synapse0x16283f0() {
   return (neuron0x1613940()*-0.147482);
}

double NNfunction_ss_sLuL::synapse0x1628d80() {
   return (neuron0x1614310()*-0.0296717);
}

double NNfunction_ss_sLuL::synapse0x1628dc0() {
   return (neuron0x1614df0()*0.999219);
}

double NNfunction_ss_sLuL::synapse0x1629750() {
   return (neuron0x16157c0()*-0.0295645);
}

double NNfunction_ss_sLuL::synapse0x1629790() {
   return (neuron0x16128a0()*0.120025);
}

double NNfunction_ss_sLuL::synapse0x162a120() {
   return (neuron0x1617370()*0.373111);
}

double NNfunction_ss_sLuL::synapse0x162a160() {
   return (neuron0x1617d40()*-1.55545);
}

double NNfunction_ss_sLuL::synapse0x162aaf0() {
   return (neuron0x1618710()*0.0307259);
}

double NNfunction_ss_sLuL::synapse0x162ab30() {
   return (neuron0x16190e0()*-0.328456);
}

double NNfunction_ss_sLuL::synapse0x162b4c0() {
   return (neuron0x161aef0()*0.0625511);
}

double NNfunction_ss_sLuL::synapse0x162b500() {
   return (neuron0x161b1d0()*-0.0112795);
}

double NNfunction_ss_sLuL::synapse0x162be90() {
   return (neuron0x161bba0()*0.783721);
}

double NNfunction_ss_sLuL::synapse0x162bed0() {
   return (neuron0x161c570()*-0.0503248);
}

double NNfunction_ss_sLuL::synapse0x162ca70() {
   return (neuron0x161cf40()*0.0467692);
}

double NNfunction_ss_sLuL::synapse0x162cab0() {
   return (neuron0x161d910()*-0.0896163);
}

double NNfunction_ss_sLuL::synapse0x162d440() {
   return (neuron0x1616460()*1.35365);
}

double NNfunction_ss_sLuL::synapse0x162d480() {
   return (neuron0x1616e30()*0.0978252);
}

double NNfunction_ss_sLuL::synapse0x161e2c0() {
   return (neuron0x16206a0()*0.276163);
}

double NNfunction_ss_sLuL::synapse0x161e300() {
   return (neuron0x1621070()*0.0131956);
}

double NNfunction_ss_sLuL::synapse0x161ec90() {
   return (neuron0x1621a40()*0.0153351);
}

double NNfunction_ss_sLuL::synapse0x161ecd0() {
   return (neuron0x1622410()*-1.97466);
}

double NNfunction_ss_sLuL::synapse0x161f660() {
   return (neuron0x1622de0()*0.0343301);
}

double NNfunction_ss_sLuL::synapse0x161f6a0() {
   return (neuron0x16237b0()*-0.918117);
}

double NNfunction_ss_sLuL::synapse0x1631b80() {
   return (neuron0x1624180()*0.270893);
}

double NNfunction_ss_sLuL::synapse0x1631bc0() {
   return (neuron0x1624b50()*-0.0119633);
}

double NNfunction_ss_sLuL::synapse0x1632550() {
   return (neuron0x161abe0()*-0.447231);
}

double NNfunction_ss_sLuL::synapse0x1632590() {
   return (neuron0x1627730()*0.221318);
}

double NNfunction_ss_sLuL::synapse0x1632f20() {
   return (neuron0x1628100()*1.07172);
}

double NNfunction_ss_sLuL::synapse0x1632f60() {
   return (neuron0x1628ad0()*0.0720954);
}

double NNfunction_ss_sLuL::synapse0x16338f0() {
   return (neuron0x16294a0()*-0.0166884);
}

double NNfunction_ss_sLuL::synapse0x1633930() {
   return (neuron0x1629e70()*-0.140872);
}

double NNfunction_ss_sLuL::synapse0x160f7e0() {
   return (neuron0x162a840()*-0.97516);
}

double NNfunction_ss_sLuL::synapse0x160f820() {
   return (neuron0x162b210()*0.0161256);
}

double NNfunction_ss_sLuL::synapse0x1623090() {
   return (neuron0x162bbe0()*0.114393);
}

double NNfunction_ss_sLuL::synapse0x16230d0() {
   return (neuron0x162c7c0()*0.00821626);
}

double NNfunction_ss_sLuL::synapse0x1634010() {
   return (neuron0x162d190()*-0.00483683);
}

double NNfunction_ss_sLuL::synapse0x1634050() {
   return (neuron0x161e010()*0.3897);
}

double NNfunction_ss_sLuL::synapse0x1634090() {
   return (neuron0x161e9e0()*0.35317);
}

double NNfunction_ss_sLuL::synapse0x16340d0() {
   return (neuron0x161f3b0()*-0.640367);
}

double NNfunction_ss_sLuL::synapse0x163af80() {
   return (neuron0x16319f0()*0.770449);
}

double NNfunction_ss_sLuL::synapse0x163afc0() {
   return (neuron0x16322a0()*0.374559);
}

double NNfunction_ss_sLuL::synapse0x163b000() {
   return (neuron0x1632c70()*-0.673204);
}

double NNfunction_ss_sLuL::synapse0x163b040() {
   return (neuron0x1633640()*1.16536);
}

double NNfunction_ss_sLuL::synapse0x163b3c0() {
   return (neuron0x160f5c0()*-0.028106);
}

double NNfunction_ss_sLuL::synapse0x163b400() {
   return (neuron0x160fed0()*-0.0104489);
}

double NNfunction_ss_sLuL::synapse0x163b440() {
   return (neuron0x16109b0()*-0.0147183);
}

double NNfunction_ss_sLuL::synapse0x163b480() {
   return (neuron0x13ca240()*0.00549279);
}

double NNfunction_ss_sLuL::synapse0x163b4c0() {
   return (neuron0x16117d0()*-0.0342446);
}

double NNfunction_ss_sLuL::synapse0x163b500() {
   return (neuron0x16121a0()*-0.0409896);
}

double NNfunction_ss_sLuL::synapse0x163b540() {
   return (neuron0x1612f70()*-0.150249);
}

double NNfunction_ss_sLuL::synapse0x163b580() {
   return (neuron0x1613940()*0.0560092);
}

double NNfunction_ss_sLuL::synapse0x163b5c0() {
   return (neuron0x1614310()*-0.00281846);
}

double NNfunction_ss_sLuL::synapse0x163b600() {
   return (neuron0x1614df0()*-0.161768);
}

double NNfunction_ss_sLuL::synapse0x163b640() {
   return (neuron0x16157c0()*0.00748668);
}

double NNfunction_ss_sLuL::synapse0x163b680() {
   return (neuron0x16128a0()*0.00384995);
}

double NNfunction_ss_sLuL::synapse0x163b6c0() {
   return (neuron0x1617370()*0.121356);
}

double NNfunction_ss_sLuL::synapse0x163b700() {
   return (neuron0x1617d40()*0.913237);
}

double NNfunction_ss_sLuL::synapse0x163b740() {
   return (neuron0x1618710()*0.212191);
}

double NNfunction_ss_sLuL::synapse0x163b780() {
   return (neuron0x16190e0()*-0.111496);
}

double NNfunction_ss_sLuL::synapse0x163b210() {
   return (neuron0x161aef0()*-0.0176665);
}

double NNfunction_ss_sLuL::synapse0x163b250() {
   return (neuron0x161b1d0()*-0.0133155);
}

double NNfunction_ss_sLuL::synapse0x163b8d0() {
   return (neuron0x161bba0()*1.91184);
}

double NNfunction_ss_sLuL::synapse0x163b910() {
   return (neuron0x161c570()*0.0120417);
}

double NNfunction_ss_sLuL::synapse0x163b950() {
   return (neuron0x161cf40()*-0.0163121);
}

double NNfunction_ss_sLuL::synapse0x163b990() {
   return (neuron0x161d910()*-0.0202104);
}

double NNfunction_ss_sLuL::synapse0x163b9d0() {
   return (neuron0x1616460()*0.000316762);
}

double NNfunction_ss_sLuL::synapse0x163ba10() {
   return (neuron0x1616e30()*0.228018);
}

double NNfunction_ss_sLuL::synapse0x163ba50() {
   return (neuron0x16206a0()*0.450064);
}

double NNfunction_ss_sLuL::synapse0x163ba90() {
   return (neuron0x1621070()*-0.0222689);
}

double NNfunction_ss_sLuL::synapse0x163bad0() {
   return (neuron0x1621a40()*-0.037902);
}

double NNfunction_ss_sLuL::synapse0x163bb10() {
   return (neuron0x1622410()*-2.79528);
}

double NNfunction_ss_sLuL::synapse0x163bb50() {
   return (neuron0x1622de0()*0.00485227);
}

double NNfunction_ss_sLuL::synapse0x163bb90() {
   return (neuron0x16237b0()*0.0895407);
}

double NNfunction_ss_sLuL::synapse0x163bbd0() {
   return (neuron0x1624180()*0.609051);
}

double NNfunction_ss_sLuL::synapse0x163bc10() {
   return (neuron0x1624b50()*0.00464101);
}

double NNfunction_ss_sLuL::synapse0x163b7c0() {
   return (neuron0x161abe0()*-0.766516);
}

double NNfunction_ss_sLuL::synapse0x163b800() {
   return (neuron0x1627730()*-0.138323);
}

double NNfunction_ss_sLuL::synapse0x163b840() {
   return (neuron0x1628100()*0.143977);
}

double NNfunction_ss_sLuL::synapse0x163b880() {
   return (neuron0x1628ad0()*0.0104697);
}

double NNfunction_ss_sLuL::synapse0x163be60() {
   return (neuron0x16294a0()*0.0172436);
}

double NNfunction_ss_sLuL::synapse0x163bea0() {
   return (neuron0x1629e70()*-0.00648868);
}

double NNfunction_ss_sLuL::synapse0x163bee0() {
   return (neuron0x162a840()*-0.111263);
}

double NNfunction_ss_sLuL::synapse0x163bf20() {
   return (neuron0x162b210()*0.00580898);
}

double NNfunction_ss_sLuL::synapse0x163bf60() {
   return (neuron0x162bbe0()*-0.132435);
}

double NNfunction_ss_sLuL::synapse0x163bfa0() {
   return (neuron0x162c7c0()*-0.0505331);
}

double NNfunction_ss_sLuL::synapse0x163bfe0() {
   return (neuron0x162d190()*0.00220871);
}

double NNfunction_ss_sLuL::synapse0x163c020() {
   return (neuron0x161e010()*0.17687);
}

double NNfunction_ss_sLuL::synapse0x163c060() {
   return (neuron0x161e9e0()*-0.495752);
}

double NNfunction_ss_sLuL::synapse0x163c0a0() {
   return (neuron0x161f3b0()*-0.140149);
}

double NNfunction_ss_sLuL::synapse0x163c0e0() {
   return (neuron0x16319f0()*-0.492273);
}

double NNfunction_ss_sLuL::synapse0x163c120() {
   return (neuron0x16322a0()*-0.101125);
}

double NNfunction_ss_sLuL::synapse0x163c160() {
   return (neuron0x1632c70()*-0.288877);
}

double NNfunction_ss_sLuL::synapse0x163c1a0() {
   return (neuron0x1633640()*1.16767);
}

double NNfunction_ss_sLuL::synapse0x163c520() {
   return (neuron0x160f5c0()*1.84892);
}

double NNfunction_ss_sLuL::synapse0x163c560() {
   return (neuron0x160fed0()*0.0292962);
}

double NNfunction_ss_sLuL::synapse0x163c5a0() {
   return (neuron0x16109b0()*0.485709);
}

double NNfunction_ss_sLuL::synapse0x163c5e0() {
   return (neuron0x13ca240()*-0.383331);
}

double NNfunction_ss_sLuL::synapse0x163c620() {
   return (neuron0x16117d0()*0.431301);
}

double NNfunction_ss_sLuL::synapse0x163c660() {
   return (neuron0x16121a0()*0.576583);
}

double NNfunction_ss_sLuL::synapse0x163c6a0() {
   return (neuron0x1612f70()*1.54427);
}

double NNfunction_ss_sLuL::synapse0x163c6e0() {
   return (neuron0x1613940()*-1.44953);
}

double NNfunction_ss_sLuL::synapse0x163c720() {
   return (neuron0x1614310()*-0.16341);
}

double NNfunction_ss_sLuL::synapse0x163c760() {
   return (neuron0x1614df0()*-0.801636);
}

double NNfunction_ss_sLuL::synapse0x163c7a0() {
   return (neuron0x16157c0()*-0.369329);
}

double NNfunction_ss_sLuL::synapse0x163c7e0() {
   return (neuron0x16128a0()*-1.26639);
}

double NNfunction_ss_sLuL::synapse0x163c820() {
   return (neuron0x1617370()*1.3856);
}

double NNfunction_ss_sLuL::synapse0x163c860() {
   return (neuron0x1617d40()*0.751004);
}

double NNfunction_ss_sLuL::synapse0x163c8a0() {
   return (neuron0x1618710()*0.428038);
}

double NNfunction_ss_sLuL::synapse0x163c8e0() {
   return (neuron0x16190e0()*-1.40221);
}

double NNfunction_ss_sLuL::synapse0x163c370() {
   return (neuron0x161aef0()*0.565325);
}

double NNfunction_ss_sLuL::synapse0x163c3b0() {
   return (neuron0x161b1d0()*0.0382246);
}

double NNfunction_ss_sLuL::synapse0x163ca30() {
   return (neuron0x161bba0()*-2.04353);
}

double NNfunction_ss_sLuL::synapse0x163ca70() {
   return (neuron0x161c570()*-0.719987);
}

double NNfunction_ss_sLuL::synapse0x163cab0() {
   return (neuron0x161cf40()*0.812326);
}

double NNfunction_ss_sLuL::synapse0x163caf0() {
   return (neuron0x161d910()*0.589526);
}

double NNfunction_ss_sLuL::synapse0x163cb30() {
   return (neuron0x1616460()*2.29635);
}

double NNfunction_ss_sLuL::synapse0x163cb70() {
   return (neuron0x1616e30()*3.77493);
}

double NNfunction_ss_sLuL::synapse0x163cbb0() {
   return (neuron0x16206a0()*1.81338);
}

double NNfunction_ss_sLuL::synapse0x163cbf0() {
   return (neuron0x1621070()*-0.0296565);
}

double NNfunction_ss_sLuL::synapse0x163cc30() {
   return (neuron0x1621a40()*0.552952);
}

double NNfunction_ss_sLuL::synapse0x163cc70() {
   return (neuron0x1622410()*-1.4406);
}

double NNfunction_ss_sLuL::synapse0x163ccb0() {
   return (neuron0x1622de0()*-0.0618665);
}

double NNfunction_ss_sLuL::synapse0x163ccf0() {
   return (neuron0x16237b0()*-2.37932);
}

double NNfunction_ss_sLuL::synapse0x163cd30() {
   return (neuron0x1624180()*1.52385);
}

double NNfunction_ss_sLuL::synapse0x163cd70() {
   return (neuron0x1624b50()*-0.163719);
}

double NNfunction_ss_sLuL::synapse0x163c920() {
   return (neuron0x161abe0()*-0.581278);
}

double NNfunction_ss_sLuL::synapse0x163c960() {
   return (neuron0x1627730()*1.56968);
}

double NNfunction_ss_sLuL::synapse0x163c9a0() {
   return (neuron0x1628100()*1.98989);
}

double NNfunction_ss_sLuL::synapse0x163c9e0() {
   return (neuron0x1628ad0()*1.91731);
}

double NNfunction_ss_sLuL::synapse0x163cfc0() {
   return (neuron0x16294a0()*-0.897983);
}

double NNfunction_ss_sLuL::synapse0x163d000() {
   return (neuron0x1629e70()*0.547143);
}

double NNfunction_ss_sLuL::synapse0x163d040() {
   return (neuron0x162a840()*1.64456);
}

double NNfunction_ss_sLuL::synapse0x163d080() {
   return (neuron0x162b210()*0.0179025);
}

double NNfunction_ss_sLuL::synapse0x163d0c0() {
   return (neuron0x162bbe0()*1.42052);
}

double NNfunction_ss_sLuL::synapse0x163d100() {
   return (neuron0x162c7c0()*0.658642);
}

double NNfunction_ss_sLuL::synapse0x163d140() {
   return (neuron0x162d190()*0.704639);
}

double NNfunction_ss_sLuL::synapse0x163d180() {
   return (neuron0x161e010()*2.78977);
}

double NNfunction_ss_sLuL::synapse0x163d1c0() {
   return (neuron0x161e9e0()*0.46475);
}

double NNfunction_ss_sLuL::synapse0x163d200() {
   return (neuron0x161f3b0()*-3.63506);
}

double NNfunction_ss_sLuL::synapse0x163d240() {
   return (neuron0x16319f0()*-4.9625);
}

double NNfunction_ss_sLuL::synapse0x163d280() {
   return (neuron0x16322a0()*1.35959);
}

double NNfunction_ss_sLuL::synapse0x163d2c0() {
   return (neuron0x1632c70()*-0.521845);
}

double NNfunction_ss_sLuL::synapse0x163d300() {
   return (neuron0x1633640()*2.87516);
}

double NNfunction_ss_sLuL::synapse0x163d680() {
   return (neuron0x160f5c0()*0.572502);
}

double NNfunction_ss_sLuL::synapse0x163d6c0() {
   return (neuron0x160fed0()*-1.14207);
}

double NNfunction_ss_sLuL::synapse0x163d700() {
   return (neuron0x16109b0()*-1.12063);
}

double NNfunction_ss_sLuL::synapse0x163d740() {
   return (neuron0x13ca240()*0.968835);
}

double NNfunction_ss_sLuL::synapse0x163d780() {
   return (neuron0x16117d0()*0.82578);
}

double NNfunction_ss_sLuL::synapse0x163d7c0() {
   return (neuron0x16121a0()*-0.604471);
}

double NNfunction_ss_sLuL::synapse0x163d800() {
   return (neuron0x1612f70()*-1.38505);
}

double NNfunction_ss_sLuL::synapse0x163d840() {
   return (neuron0x1613940()*1.04602);
}

double NNfunction_ss_sLuL::synapse0x163d880() {
   return (neuron0x1614310()*-1.09439);
}

double NNfunction_ss_sLuL::synapse0x163d8c0() {
   return (neuron0x1614df0()*-0.631618);
}

double NNfunction_ss_sLuL::synapse0x163d900() {
   return (neuron0x16157c0()*-1.30768);
}

double NNfunction_ss_sLuL::synapse0x163d940() {
   return (neuron0x16128a0()*-0.475391);
}

double NNfunction_ss_sLuL::synapse0x163d980() {
   return (neuron0x1617370()*-0.754171);
}

double NNfunction_ss_sLuL::synapse0x163d9c0() {
   return (neuron0x1617d40()*7.16542);
}

double NNfunction_ss_sLuL::synapse0x163da00() {
   return (neuron0x1618710()*0.0950291);
}

double NNfunction_ss_sLuL::synapse0x163da40() {
   return (neuron0x16190e0()*0.17759);
}

double NNfunction_ss_sLuL::synapse0x163d4d0() {
   return (neuron0x161aef0()*1.21077);
}

double NNfunction_ss_sLuL::synapse0x163d510() {
   return (neuron0x161b1d0()*-0.740911);
}

double NNfunction_ss_sLuL::synapse0x163db90() {
   return (neuron0x161bba0()*-0.104379);
}

double NNfunction_ss_sLuL::synapse0x163dbd0() {
   return (neuron0x161c570()*-0.899695);
}

double NNfunction_ss_sLuL::synapse0x163dc10() {
   return (neuron0x161cf40()*0.232398);
}

double NNfunction_ss_sLuL::synapse0x163dc50() {
   return (neuron0x161d910()*-0.376831);
}

double NNfunction_ss_sLuL::synapse0x163dc90() {
   return (neuron0x1616460()*-1.95853);
}

double NNfunction_ss_sLuL::synapse0x163dcd0() {
   return (neuron0x1616e30()*-0.103843);
}

double NNfunction_ss_sLuL::synapse0x163dd10() {
   return (neuron0x16206a0()*0.842744);
}

double NNfunction_ss_sLuL::synapse0x163dd50() {
   return (neuron0x1621070()*-1.59135);
}

double NNfunction_ss_sLuL::synapse0x163dd90() {
   return (neuron0x1621a40()*0.79538);
}

double NNfunction_ss_sLuL::synapse0x163ddd0() {
   return (neuron0x1622410()*0.976695);
}

double NNfunction_ss_sLuL::synapse0x163de10() {
   return (neuron0x1622de0()*1.23058);
}

double NNfunction_ss_sLuL::synapse0x163de50() {
   return (neuron0x16237b0()*0.60195);
}

double NNfunction_ss_sLuL::synapse0x163de90() {
   return (neuron0x1624180()*1.39211);
}

double NNfunction_ss_sLuL::synapse0x163ded0() {
   return (neuron0x1624b50()*-1.30546);
}

double NNfunction_ss_sLuL::synapse0x163da80() {
   return (neuron0x161abe0()*0.903557);
}

double NNfunction_ss_sLuL::synapse0x163dac0() {
   return (neuron0x1627730()*1.51604);
}

double NNfunction_ss_sLuL::synapse0x163db00() {
   return (neuron0x1628100()*-0.327139);
}

double NNfunction_ss_sLuL::synapse0x163db40() {
   return (neuron0x1628ad0()*0.943113);
}

double NNfunction_ss_sLuL::synapse0x163e120() {
   return (neuron0x16294a0()*-1.02866);
}

double NNfunction_ss_sLuL::synapse0x163e160() {
   return (neuron0x1629e70()*0.357056);
}

double NNfunction_ss_sLuL::synapse0x163e1a0() {
   return (neuron0x162a840()*2.92658);
}

double NNfunction_ss_sLuL::synapse0x163e1e0() {
   return (neuron0x162b210()*0.971395);
}

double NNfunction_ss_sLuL::synapse0x163e220() {
   return (neuron0x162bbe0()*0.210797);
}

double NNfunction_ss_sLuL::synapse0x163e260() {
   return (neuron0x162c7c0()*-0.958921);
}

double NNfunction_ss_sLuL::synapse0x163e2a0() {
   return (neuron0x162d190()*0.118646);
}

double NNfunction_ss_sLuL::synapse0x163e2e0() {
   return (neuron0x161e010()*0.0119374);
}

double NNfunction_ss_sLuL::synapse0x163e320() {
   return (neuron0x161e9e0()*0.511263);
}

double NNfunction_ss_sLuL::synapse0x163e360() {
   return (neuron0x161f3b0()*-1.41056);
}

double NNfunction_ss_sLuL::synapse0x163e3a0() {
   return (neuron0x16319f0()*6.71854);
}

double NNfunction_ss_sLuL::synapse0x163e3e0() {
   return (neuron0x16322a0()*1.35872);
}

double NNfunction_ss_sLuL::synapse0x163e420() {
   return (neuron0x1632c70()*3.01167);
}

double NNfunction_ss_sLuL::synapse0x163e460() {
   return (neuron0x1633640()*-2.92408);
}

double NNfunction_ss_sLuL::synapse0x160f580() {
   return (neuron0x163a840()*7.70804);
}

double NNfunction_ss_sLuL::synapse0x163e6c0() {
   return (neuron0x163abe0()*-3.87188);
}

double NNfunction_ss_sLuL::synapse0x163e700() {
   return (neuron0x163b080()*-6.8955);
}

double NNfunction_ss_sLuL::synapse0x163e740() {
   return (neuron0x163c1e0()*-8.59314);
}

double NNfunction_ss_sLuL::synapse0x163e780() {
   return (neuron0x163d340()*10.2123);
}

