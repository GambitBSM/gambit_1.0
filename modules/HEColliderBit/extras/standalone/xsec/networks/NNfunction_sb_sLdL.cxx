#include "NNfunction_sb_sLdL.h"
#include <cmath>

double NNfunction_sb_sLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4683)/15.3249;
   input1 = (in1 - 3.671)/1141.78;
   input2 = (in2 - 665.876)/620.132;
   input3 = (in3 - -52.4492)/787.927;
   input4 = (in4 - 1032.67)/936.191;
   input5 = (in5 - 879.086)/933.48;
   input6 = (in6 - 887.929)/933.37;
   input7 = (in7 - 913.982)/925.437;
   input8 = (in8 - 925.046)/975.113;
   input9 = (in9 - 894.351)/954.039;
   input10 = (in10 - 987.586)/959.121;
   input11 = (in11 - 354.865)/353.468;
   input12 = (in12 - 356.108)/354.837;
   input13 = (in13 - 499.367)/513.727;
   input14 = (in14 - 697.214)/793.384;
   input15 = (in15 - 699.004)/795.525;
   input16 = (in16 - 529.378)/551.64;
   input17 = (in17 - 766.498)/904.978;
   input18 = (in18 - 753.408)/903.478;
   input19 = (in19 - 805.242)/881.666;
   input20 = (in20 - -4.56915)/486.466;
   input21 = (in21 - 2.34347)/1157.65;
   input22 = (in22 - 5.45841)/1202.9;
   input23 = (in23 - -197.426)/596.074;
   switch(index) {
     case 0:
         return neuron0x1b6b4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdL::Value(int index, double* input) {
   input0 = (input[0] - 23.4683)/15.3249;
   input1 = (input[1] - 3.671)/1141.78;
   input2 = (input[2] - 665.876)/620.132;
   input3 = (input[3] - -52.4492)/787.927;
   input4 = (input[4] - 1032.67)/936.191;
   input5 = (input[5] - 879.086)/933.48;
   input6 = (input[6] - 887.929)/933.37;
   input7 = (input[7] - 913.982)/925.437;
   input8 = (input[8] - 925.046)/975.113;
   input9 = (input[9] - 894.351)/954.039;
   input10 = (input[10] - 987.586)/959.121;
   input11 = (input[11] - 354.865)/353.468;
   input12 = (input[12] - 356.108)/354.837;
   input13 = (input[13] - 499.367)/513.727;
   input14 = (input[14] - 697.214)/793.384;
   input15 = (input[15] - 699.004)/795.525;
   input16 = (input[16] - 529.378)/551.64;
   input17 = (input[17] - 766.498)/904.978;
   input18 = (input[18] - 753.408)/903.478;
   input19 = (input[19] - 805.242)/881.666;
   input20 = (input[20] - -4.56915)/486.466;
   input21 = (input[21] - 2.34347)/1157.65;
   input22 = (input[22] - 5.45841)/1202.9;
   input23 = (input[23] - -197.426)/596.074;
   switch(index) {
     case 0:
         return neuron0x1b6b4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdL::neuron0x1b37570() {
   return input0;
}

double NNfunction_sb_sLdL::neuron0x1b378b0() {
   return input1;
}

double NNfunction_sb_sLdL::neuron0x1b37bf0() {
   return input2;
}

double NNfunction_sb_sLdL::neuron0x1b37f30() {
   return input3;
}

double NNfunction_sb_sLdL::neuron0x1b38270() {
   return input4;
}

double NNfunction_sb_sLdL::neuron0x1b385b0() {
   return input5;
}

double NNfunction_sb_sLdL::neuron0x1b388f0() {
   return input6;
}

double NNfunction_sb_sLdL::neuron0x1b38c30() {
   return input7;
}

double NNfunction_sb_sLdL::neuron0x1b38f70() {
   return input8;
}

double NNfunction_sb_sLdL::neuron0x1b392b0() {
   return input9;
}

double NNfunction_sb_sLdL::neuron0x1b395f0() {
   return input10;
}

double NNfunction_sb_sLdL::neuron0x1b39930() {
   return input11;
}

double NNfunction_sb_sLdL::neuron0x1b39c70() {
   return input12;
}

double NNfunction_sb_sLdL::neuron0x1b39fb0() {
   return input13;
}

double NNfunction_sb_sLdL::neuron0x1b3a2f0() {
   return input14;
}

double NNfunction_sb_sLdL::neuron0x1b3a630() {
   return input15;
}

double NNfunction_sb_sLdL::neuron0x1b3a970() {
   return input16;
}

double NNfunction_sb_sLdL::neuron0x1b3aed0() {
   return input17;
}

double NNfunction_sb_sLdL::neuron0x1b3b0f0() {
   return input18;
}

double NNfunction_sb_sLdL::neuron0x1b3b430() {
   return input19;
}

double NNfunction_sb_sLdL::neuron0x1b3b770() {
   return input20;
}

double NNfunction_sb_sLdL::neuron0x1b3bab0() {
   return input21;
}

double NNfunction_sb_sLdL::neuron0x1b3bdf0() {
   return input22;
}

double NNfunction_sb_sLdL::neuron0x1b3c130() {
   return input23;
}

double NNfunction_sb_sLdL::input0x1b3c5d0() {
   double input = -0.332536;
   input += synapse0x18f73e0();
   input += synapse0x1b37430();
   input += synapse0x1b37470();
   input += synapse0x1b3c880();
   input += synapse0x1b3c8c0();
   input += synapse0x1b3c900();
   input += synapse0x1b3c940();
   input += synapse0x1b3c980();
   input += synapse0x1b3c9c0();
   input += synapse0x1b3ca00();
   input += synapse0x1b3ca40();
   input += synapse0x1b3ca80();
   input += synapse0x1b3cac0();
   input += synapse0x1b3cb00();
   input += synapse0x1b3cb40();
   input += synapse0x1b3cb80();
   input += synapse0x1b373a0();
   input += synapse0x1b373e0();
   input += synapse0x18e8c80();
   input += synapse0x18e8cc0();
   input += synapse0x1b3cde0();
   input += synapse0x1b3ce20();
   input += synapse0x1b3ce60();
   input += synapse0x1b3cea0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3c5d0() {
   double input = input0x1b3c5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b3cee0() {
   double input = -0.887148;
   input += synapse0x1b3d220();
   input += synapse0x1b3d260();
   input += synapse0x1b3d2a0();
   input += synapse0x1b3d2e0();
   input += synapse0x1b3d320();
   input += synapse0x1b3d360();
   input += synapse0x1b3d3a0();
   input += synapse0x1b3d3e0();
   input += synapse0x1b3d420();
   input += synapse0x1b3ccd0();
   input += synapse0x1b3cd10();
   input += synapse0x1b3cd50();
   input += synapse0x1b3cd90();
   input += synapse0x1b3d670();
   input += synapse0x1b3d6b0();
   input += synapse0x1b3d6f0();
   input += synapse0x1b3d070();
   input += synapse0x1b3d0b0();
   input += synapse0x1b3d840();
   input += synapse0x1b3d880();
   input += synapse0x1b3d8c0();
   input += synapse0x1b3d900();
   input += synapse0x1b3d940();
   input += synapse0x1b3d980();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3cee0() {
   double input = input0x1b3cee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b3d9c0() {
   double input = 7.60926;
   input += synapse0x1b3dd00();
   input += synapse0x1b3dd40();
   input += synapse0x1b3dd80();
   input += synapse0x1b3ddc0();
   input += synapse0x1b3de00();
   input += synapse0x1b3de40();
   input += synapse0x1b3de80();
   input += synapse0x1b3dec0();
   input += synapse0x1b3df00();
   input += synapse0x1b3df40();
   input += synapse0x1b3df80();
   input += synapse0x1b3dfc0();
   input += synapse0x1b3e000();
   input += synapse0x1b3e040();
   input += synapse0x1b3e080();
   input += synapse0x1b3e0c0();
   input += synapse0x1b3db50();
   input += synapse0x1b3db90();
   input += synapse0x18f6ad0();
   input += synapse0x18f6b10();
   input += synapse0x1b26600();
   input += synapse0x1b26640();
   input += synapse0x1b26680();
   input += synapse0x1b374b0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3d9c0() {
   double input = input0x1b3d9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x18f7250() {
   double input = 0.719036;
   input += synapse0x1b3d610();
   input += synapse0x1b374f0();
   input += synapse0x1b37530();
   input += synapse0x1b3e210();
   input += synapse0x1b3e250();
   input += synapse0x1b3e290();
   input += synapse0x1b3e2d0();
   input += synapse0x1b3e310();
   input += synapse0x1b3e350();
   input += synapse0x1b3e390();
   input += synapse0x1b3e3d0();
   input += synapse0x1b3e410();
   input += synapse0x1b3e450();
   input += synapse0x1b3e490();
   input += synapse0x1b3e4d0();
   input += synapse0x1b3e510();
   input += synapse0x1b3d460();
   input += synapse0x1b3d4a0();
   input += synapse0x1b3e660();
   input += synapse0x1b3e6a0();
   input += synapse0x1b3e6e0();
   input += synapse0x1b3e720();
   input += synapse0x1b3e760();
   input += synapse0x1b3e7a0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x18f7250() {
   double input = input0x18f7250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b3e7e0() {
   double input = 0.457976;
   input += synapse0x1b3eb20();
   input += synapse0x1b3eb60();
   input += synapse0x1b3eba0();
   input += synapse0x1b3ebe0();
   input += synapse0x1b3ec20();
   input += synapse0x1b3ec60();
   input += synapse0x1b3eca0();
   input += synapse0x1b3ece0();
   input += synapse0x1b3ed20();
   input += synapse0x1b3ed60();
   input += synapse0x1b3eda0();
   input += synapse0x1b3ede0();
   input += synapse0x1b3ee20();
   input += synapse0x1b3ee60();
   input += synapse0x1b3eea0();
   input += synapse0x1b3eee0();
   input += synapse0x1b3e970();
   input += synapse0x1b3e9b0();
   input += synapse0x1b3f030();
   input += synapse0x1b3f070();
   input += synapse0x1b3f0b0();
   input += synapse0x1b3f0f0();
   input += synapse0x1b3f130();
   input += synapse0x1b3f170();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3e7e0() {
   double input = input0x1b3e7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b3f1b0() {
   double input = -1.52942;
   input += synapse0x1b3f4f0();
   input += synapse0x1b3f530();
   input += synapse0x1b3f570();
   input += synapse0x1b3f5b0();
   input += synapse0x1b3f5f0();
   input += synapse0x1b3f630();
   input += synapse0x1b3f670();
   input += synapse0x1b3f6b0();
   input += synapse0x1b3f6f0();
   input += synapse0x18f6e40();
   input += synapse0x18f6e80();
   input += synapse0x18f6ec0();
   input += synapse0x18f6f00();
   input += synapse0x18f6f40();
   input += synapse0x18f6f80();
   input += synapse0x18f6fc0();
   input += synapse0x1b3f340();
   input += synapse0x1b3f380();
   input += synapse0x18f7110();
   input += synapse0x18f7150();
   input += synapse0x18f7190();
   input += synapse0x18f71d0();
   input += synapse0x18f7210();
   input += synapse0x1b3ff40();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3f1b0() {
   double input = input0x1b3f1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b3ff80() {
   double input = -0.151093;
   input += synapse0x1b402c0();
   input += synapse0x1b40300();
   input += synapse0x1b40340();
   input += synapse0x1b40380();
   input += synapse0x1b403c0();
   input += synapse0x1b40400();
   input += synapse0x1b40440();
   input += synapse0x1b40480();
   input += synapse0x1b404c0();
   input += synapse0x1b40500();
   input += synapse0x1b40540();
   input += synapse0x1b40580();
   input += synapse0x1b405c0();
   input += synapse0x1b40600();
   input += synapse0x1b40640();
   input += synapse0x1b40680();
   input += synapse0x1b40110();
   input += synapse0x1b40150();
   input += synapse0x1b407d0();
   input += synapse0x1b40810();
   input += synapse0x1b40850();
   input += synapse0x1b40890();
   input += synapse0x1b408d0();
   input += synapse0x1b40910();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3ff80() {
   double input = input0x1b3ff80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b40950() {
   double input = -0.485399;
   input += synapse0x1b40c90();
   input += synapse0x1b40cd0();
   input += synapse0x1b40d10();
   input += synapse0x1b40d50();
   input += synapse0x1b40d90();
   input += synapse0x1b40dd0();
   input += synapse0x1b40e10();
   input += synapse0x1b40e50();
   input += synapse0x1b40e90();
   input += synapse0x1b40ed0();
   input += synapse0x1b40f10();
   input += synapse0x1b40f50();
   input += synapse0x1b40f90();
   input += synapse0x1b40fd0();
   input += synapse0x1b41010();
   input += synapse0x1b41050();
   input += synapse0x1b40ae0();
   input += synapse0x1b40b20();
   input += synapse0x1b411a0();
   input += synapse0x1b411e0();
   input += synapse0x1b41220();
   input += synapse0x1b41260();
   input += synapse0x1b412a0();
   input += synapse0x1b412e0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b40950() {
   double input = input0x1b40950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b41320() {
   double input = -2.00263;
   input += synapse0x1b3adc0();
   input += synapse0x1b3ae00();
   input += synapse0x1b3ae40();
   input += synapse0x1b3ae80();
   input += synapse0x1b41870();
   input += synapse0x1b418b0();
   input += synapse0x1b418f0();
   input += synapse0x1b41930();
   input += synapse0x1b41970();
   input += synapse0x1b419b0();
   input += synapse0x1b419f0();
   input += synapse0x1b41a30();
   input += synapse0x1b41a70();
   input += synapse0x1b41ab0();
   input += synapse0x1b41af0();
   input += synapse0x1b41b30();
   input += synapse0x1b414b0();
   input += synapse0x1b414f0();
   input += synapse0x1b41c80();
   input += synapse0x1b41cc0();
   input += synapse0x1b41d00();
   input += synapse0x1b41d40();
   input += synapse0x1b41d80();
   input += synapse0x1b41dc0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b41320() {
   double input = input0x1b41320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b41e00() {
   double input = -1.39487;
   input += synapse0x1b42140();
   input += synapse0x1b42180();
   input += synapse0x1b421c0();
   input += synapse0x1b42200();
   input += synapse0x1b42240();
   input += synapse0x1b42280();
   input += synapse0x1b422c0();
   input += synapse0x1b42300();
   input += synapse0x1b42340();
   input += synapse0x1b42380();
   input += synapse0x1b423c0();
   input += synapse0x1b42400();
   input += synapse0x1b42440();
   input += synapse0x1b42480();
   input += synapse0x1b424c0();
   input += synapse0x1b42500();
   input += synapse0x1b41f90();
   input += synapse0x1b41fd0();
   input += synapse0x1b42650();
   input += synapse0x1b42690();
   input += synapse0x1b426d0();
   input += synapse0x1b42710();
   input += synapse0x1b42750();
   input += synapse0x1b42790();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b41e00() {
   double input = input0x1b41e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b427d0() {
   double input = 0.930977;
   input += synapse0x1b42b10();
   input += synapse0x1b42b50();
   input += synapse0x1b42b90();
   input += synapse0x1b42bd0();
   input += synapse0x1b42c10();
   input += synapse0x1b42c50();
   input += synapse0x1b42c90();
   input += synapse0x1b42cd0();
   input += synapse0x1b42d10();
   input += synapse0x1b42d50();
   input += synapse0x1b42d90();
   input += synapse0x1b42dd0();
   input += synapse0x1b42e10();
   input += synapse0x1b42e50();
   input += synapse0x1b42e90();
   input += synapse0x1b42ed0();
   input += synapse0x1b42960();
   input += synapse0x1b429a0();
   input += synapse0x1b3f730();
   input += synapse0x1b3f770();
   input += synapse0x1b3f7b0();
   input += synapse0x1b3f7f0();
   input += synapse0x1b3f830();
   input += synapse0x1b3f870();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b427d0() {
   double input = input0x1b427d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b3f8b0() {
   double input = 0.349845;
   input += synapse0x1b3fbf0();
   input += synapse0x1b3fc30();
   input += synapse0x1b3fc70();
   input += synapse0x1b3fcb0();
   input += synapse0x1b3fcf0();
   input += synapse0x1b3fd30();
   input += synapse0x1b3fd70();
   input += synapse0x1b3fdb0();
   input += synapse0x1b3fdf0();
   input += synapse0x1b3fe30();
   input += synapse0x1b3fe70();
   input += synapse0x1b3feb0();
   input += synapse0x1b3fef0();
   input += synapse0x1b44030();
   input += synapse0x1b44070();
   input += synapse0x1b440b0();
   input += synapse0x1b3fa40();
   input += synapse0x1b3fa80();
   input += synapse0x1b44200();
   input += synapse0x1b44240();
   input += synapse0x1b44280();
   input += synapse0x1b442c0();
   input += synapse0x1b44300();
   input += synapse0x1b44340();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b3f8b0() {
   double input = input0x1b3f8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b44380() {
   double input = 0.363444;
   input += synapse0x1b446c0();
   input += synapse0x1b44700();
   input += synapse0x1b44740();
   input += synapse0x1b44780();
   input += synapse0x1b447c0();
   input += synapse0x1b44800();
   input += synapse0x1b44840();
   input += synapse0x1b44880();
   input += synapse0x1b448c0();
   input += synapse0x1b44900();
   input += synapse0x1b44940();
   input += synapse0x1b44980();
   input += synapse0x1b449c0();
   input += synapse0x1b44a00();
   input += synapse0x1b44a40();
   input += synapse0x1b44a80();
   input += synapse0x1b44510();
   input += synapse0x1b44550();
   input += synapse0x1b44bd0();
   input += synapse0x1b44c10();
   input += synapse0x1b44c50();
   input += synapse0x1b44c90();
   input += synapse0x1b44cd0();
   input += synapse0x1b44d10();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b44380() {
   double input = input0x1b44380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b44d50() {
   double input = 0.505843;
   input += synapse0x1b45090();
   input += synapse0x1b450d0();
   input += synapse0x1b45110();
   input += synapse0x1b45150();
   input += synapse0x1b45190();
   input += synapse0x1b451d0();
   input += synapse0x1b45210();
   input += synapse0x1b45250();
   input += synapse0x1b45290();
   input += synapse0x1b452d0();
   input += synapse0x1b45310();
   input += synapse0x1b45350();
   input += synapse0x1b45390();
   input += synapse0x1b453d0();
   input += synapse0x1b45410();
   input += synapse0x1b45450();
   input += synapse0x1b44ee0();
   input += synapse0x1b44f20();
   input += synapse0x1b455a0();
   input += synapse0x1b455e0();
   input += synapse0x1b45620();
   input += synapse0x1b45660();
   input += synapse0x1b456a0();
   input += synapse0x1b456e0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b44d50() {
   double input = input0x1b44d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b45720() {
   double input = 1.12073;
   input += synapse0x1b45a60();
   input += synapse0x1b45aa0();
   input += synapse0x1b45ae0();
   input += synapse0x1b45b20();
   input += synapse0x1b45b60();
   input += synapse0x1b45ba0();
   input += synapse0x1b45be0();
   input += synapse0x1b45c20();
   input += synapse0x1b45c60();
   input += synapse0x1b45ca0();
   input += synapse0x1b45ce0();
   input += synapse0x1b45d20();
   input += synapse0x1b45d60();
   input += synapse0x1b45da0();
   input += synapse0x1b45de0();
   input += synapse0x1b45e20();
   input += synapse0x1b458b0();
   input += synapse0x1b458f0();
   input += synapse0x1b45f70();
   input += synapse0x1b45fb0();
   input += synapse0x1b45ff0();
   input += synapse0x1b46030();
   input += synapse0x1b46070();
   input += synapse0x1b460b0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b45720() {
   double input = input0x1b45720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b460f0() {
   double input = 0.662504;
   input += synapse0x1b46430();
   input += synapse0x1b37790();
   input += synapse0x1b377d0();
   input += synapse0x1b37ad0();
   input += synapse0x1b37b10();
   input += synapse0x1b37e10();
   input += synapse0x1b37e50();
   input += synapse0x1b38150();
   input += synapse0x1b38190();
   input += synapse0x1b38490();
   input += synapse0x1b384d0();
   input += synapse0x1b387d0();
   input += synapse0x1b38810();
   input += synapse0x1b38b10();
   input += synapse0x1b38b50();
   input += synapse0x1b38e50();
   input += synapse0x1b38e90();
   input += synapse0x1b39190();
   input += synapse0x1b391d0();
   input += synapse0x1b394d0();
   input += synapse0x1b39510();
   input += synapse0x1b39810();
   input += synapse0x1b39850();
   input += synapse0x1b39b50();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b460f0() {
   double input = input0x1b460f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b47f00() {
   double input = -1.1399;
   input += synapse0x1b39b90();
   input += synapse0x1b3a850();
   input += synapse0x1b3a890();
   input += synapse0x1b46280();
   input += synapse0x1b462c0();
   input += synapse0x1b3ab90();
   input += synapse0x1b3abd0();
   input += synapse0x18e8b60();
   input += synapse0x18e8ba0();
   input += synapse0x1b3b310();
   input += synapse0x1b3b350();
   input += synapse0x1b3b650();
   input += synapse0x1b3b690();
   input += synapse0x1b3b990();
   input += synapse0x1b3b9d0();
   input += synapse0x1b3bcd0();
   input += synapse0x1b3bd10();
   input += synapse0x1b3c010();
   input += synapse0x1b3c050();
   input += synapse0x1b3c350();
   input += synapse0x1b3c390();
   input += synapse0x1b39e90();
   input += synapse0x1b39ed0();
   input += synapse0x1b481a0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b47f00() {
   double input = input0x1b47f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b481e0() {
   double input = -0.274175;
   input += synapse0x1b48520();
   input += synapse0x1b48560();
   input += synapse0x1b485a0();
   input += synapse0x1b485e0();
   input += synapse0x1b48620();
   input += synapse0x1b48660();
   input += synapse0x1b486a0();
   input += synapse0x1b486e0();
   input += synapse0x1b48720();
   input += synapse0x1b48760();
   input += synapse0x1b487a0();
   input += synapse0x1b487e0();
   input += synapse0x1b48820();
   input += synapse0x1b48860();
   input += synapse0x1b488a0();
   input += synapse0x1b488e0();
   input += synapse0x1b48370();
   input += synapse0x1b483b0();
   input += synapse0x1b48a30();
   input += synapse0x1b48a70();
   input += synapse0x1b48ab0();
   input += synapse0x1b48af0();
   input += synapse0x1b48b30();
   input += synapse0x1b48b70();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b481e0() {
   double input = input0x1b481e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b48bb0() {
   double input = -0.748637;
   input += synapse0x1b48ef0();
   input += synapse0x1b48f30();
   input += synapse0x1b48f70();
   input += synapse0x1b48fb0();
   input += synapse0x1b48ff0();
   input += synapse0x1b49030();
   input += synapse0x1b49070();
   input += synapse0x1b490b0();
   input += synapse0x1b490f0();
   input += synapse0x1b49130();
   input += synapse0x1b49170();
   input += synapse0x1b491b0();
   input += synapse0x1b491f0();
   input += synapse0x1b49230();
   input += synapse0x1b49270();
   input += synapse0x1b492b0();
   input += synapse0x1b48d40();
   input += synapse0x1b48d80();
   input += synapse0x1b49400();
   input += synapse0x1b49440();
   input += synapse0x1b49480();
   input += synapse0x1b494c0();
   input += synapse0x1b49500();
   input += synapse0x1b49540();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b48bb0() {
   double input = input0x1b48bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b49580() {
   double input = 1.03009;
   input += synapse0x1b498c0();
   input += synapse0x1b49900();
   input += synapse0x1b49940();
   input += synapse0x1b49980();
   input += synapse0x1b499c0();
   input += synapse0x1b49a00();
   input += synapse0x1b49a40();
   input += synapse0x1b49a80();
   input += synapse0x1b49ac0();
   input += synapse0x1b49b00();
   input += synapse0x1b49b40();
   input += synapse0x1b49b80();
   input += synapse0x1b49bc0();
   input += synapse0x1b49c00();
   input += synapse0x1b49c40();
   input += synapse0x1b49c80();
   input += synapse0x1b49710();
   input += synapse0x1b49750();
   input += synapse0x1b49dd0();
   input += synapse0x1b49e10();
   input += synapse0x1b49e50();
   input += synapse0x1b49e90();
   input += synapse0x1b49ed0();
   input += synapse0x1b49f10();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b49580() {
   double input = input0x1b49580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b49f50() {
   double input = -0.365381;
   input += synapse0x1b4a290();
   input += synapse0x1b4a2d0();
   input += synapse0x1b4a310();
   input += synapse0x1b4a350();
   input += synapse0x1b4a390();
   input += synapse0x1b4a3d0();
   input += synapse0x1b4a410();
   input += synapse0x1b4a450();
   input += synapse0x1b4a490();
   input += synapse0x1b4a4d0();
   input += synapse0x1b4a510();
   input += synapse0x1b4a550();
   input += synapse0x1b4a590();
   input += synapse0x1b4a5d0();
   input += synapse0x1b4a610();
   input += synapse0x1b4a650();
   input += synapse0x1b4a0e0();
   input += synapse0x1b4a120();
   input += synapse0x1b4a7a0();
   input += synapse0x1b4a7e0();
   input += synapse0x1b4a820();
   input += synapse0x1b4a860();
   input += synapse0x1b4a8a0();
   input += synapse0x1b4a8e0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b49f50() {
   double input = input0x1b49f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4a920() {
   double input = 0.718775;
   input += synapse0x1b4ac60();
   input += synapse0x1b4aca0();
   input += synapse0x1b4ace0();
   input += synapse0x1b4ad20();
   input += synapse0x1b4ad60();
   input += synapse0x1b4ada0();
   input += synapse0x1b4ade0();
   input += synapse0x1b4ae20();
   input += synapse0x1b4ae60();
   input += synapse0x1b43020();
   input += synapse0x1b43060();
   input += synapse0x1b430a0();
   input += synapse0x1b430e0();
   input += synapse0x1b43120();
   input += synapse0x1b43160();
   input += synapse0x1b431a0();
   input += synapse0x1b4aab0();
   input += synapse0x1b4aaf0();
   input += synapse0x1b432f0();
   input += synapse0x1b43330();
   input += synapse0x1b43370();
   input += synapse0x1b433b0();
   input += synapse0x1b433f0();
   input += synapse0x1b43430();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4a920() {
   double input = input0x1b4a920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b43470() {
   double input = -1.27062;
   input += synapse0x1b437b0();
   input += synapse0x1b437f0();
   input += synapse0x1b43830();
   input += synapse0x1b43870();
   input += synapse0x1b438b0();
   input += synapse0x1b438f0();
   input += synapse0x1b43930();
   input += synapse0x1b43970();
   input += synapse0x1b439b0();
   input += synapse0x1b439f0();
   input += synapse0x1b43a30();
   input += synapse0x1b43a70();
   input += synapse0x1b43ab0();
   input += synapse0x1b43af0();
   input += synapse0x1b43b30();
   input += synapse0x1b43b70();
   input += synapse0x1b43600();
   input += synapse0x1b43640();
   input += synapse0x1b43cc0();
   input += synapse0x1b43d00();
   input += synapse0x1b43d40();
   input += synapse0x1b43d80();
   input += synapse0x1b43dc0();
   input += synapse0x1b43e00();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b43470() {
   double input = input0x1b43470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b43e40() {
   double input = -1.52946;
   input += synapse0x1b43fd0();
   input += synapse0x1b4d060();
   input += synapse0x1b4d0a0();
   input += synapse0x1b4d0e0();
   input += synapse0x1b4d120();
   input += synapse0x1b4d160();
   input += synapse0x1b4d1a0();
   input += synapse0x1b4d1e0();
   input += synapse0x1b4d220();
   input += synapse0x1b4d260();
   input += synapse0x1b4d2a0();
   input += synapse0x1b4d2e0();
   input += synapse0x1b4d320();
   input += synapse0x1b4d360();
   input += synapse0x1b4d3a0();
   input += synapse0x1b4d3e0();
   input += synapse0x1b4ceb0();
   input += synapse0x1b4cef0();
   input += synapse0x1b4d530();
   input += synapse0x1b4d570();
   input += synapse0x1b4d5b0();
   input += synapse0x1b4d5f0();
   input += synapse0x1b4d630();
   input += synapse0x1b4d670();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b43e40() {
   double input = input0x1b43e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4d6b0() {
   double input = 0.922227;
   input += synapse0x1b4d9f0();
   input += synapse0x1b4da30();
   input += synapse0x1b4da70();
   input += synapse0x1b4dab0();
   input += synapse0x1b4daf0();
   input += synapse0x1b4db30();
   input += synapse0x1b4db70();
   input += synapse0x1b4dbb0();
   input += synapse0x1b4dbf0();
   input += synapse0x1b4dc30();
   input += synapse0x1b4dc70();
   input += synapse0x1b4dcb0();
   input += synapse0x1b4dcf0();
   input += synapse0x1b4dd30();
   input += synapse0x1b4dd70();
   input += synapse0x1b4ddb0();
   input += synapse0x1b4d840();
   input += synapse0x1b4d880();
   input += synapse0x1b4df00();
   input += synapse0x1b4df40();
   input += synapse0x1b4df80();
   input += synapse0x1b4dfc0();
   input += synapse0x1b4e000();
   input += synapse0x1b4e040();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4d6b0() {
   double input = input0x1b4d6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4e080() {
   double input = -1.04363;
   input += synapse0x1b4e3c0();
   input += synapse0x1b4e400();
   input += synapse0x1b4e440();
   input += synapse0x1b4e480();
   input += synapse0x1b4e4c0();
   input += synapse0x1b4e500();
   input += synapse0x1b4e540();
   input += synapse0x1b4e580();
   input += synapse0x1b4e5c0();
   input += synapse0x1b4e600();
   input += synapse0x1b4e640();
   input += synapse0x1b4e680();
   input += synapse0x1b4e6c0();
   input += synapse0x1b4e700();
   input += synapse0x1b4e740();
   input += synapse0x1b4e780();
   input += synapse0x1b4e210();
   input += synapse0x1b4e250();
   input += synapse0x1b4e8d0();
   input += synapse0x1b4e910();
   input += synapse0x1b4e950();
   input += synapse0x1b4e990();
   input += synapse0x1b4e9d0();
   input += synapse0x1b4ea10();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4e080() {
   double input = input0x1b4e080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4ea50() {
   double input = -3.93028;
   input += synapse0x1b4ed90();
   input += synapse0x1b4edd0();
   input += synapse0x1b4ee10();
   input += synapse0x1b4ee50();
   input += synapse0x1b4ee90();
   input += synapse0x1b4eed0();
   input += synapse0x1b4ef10();
   input += synapse0x1b4ef50();
   input += synapse0x1b4ef90();
   input += synapse0x1b4efd0();
   input += synapse0x1b4f010();
   input += synapse0x1b4f050();
   input += synapse0x1b4f090();
   input += synapse0x1b4f0d0();
   input += synapse0x1b4f110();
   input += synapse0x1b4f150();
   input += synapse0x1b4ebe0();
   input += synapse0x1b4ec20();
   input += synapse0x1b4f2a0();
   input += synapse0x1b4f2e0();
   input += synapse0x1b4f320();
   input += synapse0x1b4f360();
   input += synapse0x1b4f3a0();
   input += synapse0x1b4f3e0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4ea50() {
   double input = input0x1b4ea50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4f420() {
   double input = -0.854288;
   input += synapse0x1b4f760();
   input += synapse0x1b4f7a0();
   input += synapse0x1b4f7e0();
   input += synapse0x1b4f820();
   input += synapse0x1b4f860();
   input += synapse0x1b4f8a0();
   input += synapse0x1b4f8e0();
   input += synapse0x1b4f920();
   input += synapse0x1b4f960();
   input += synapse0x1b4f9a0();
   input += synapse0x1b4f9e0();
   input += synapse0x1b4fa20();
   input += synapse0x1b4fa60();
   input += synapse0x1b4faa0();
   input += synapse0x1b4fae0();
   input += synapse0x1b4fb20();
   input += synapse0x1b4f5b0();
   input += synapse0x1b4f5f0();
   input += synapse0x1b4fc70();
   input += synapse0x1b4fcb0();
   input += synapse0x1b4fcf0();
   input += synapse0x1b4fd30();
   input += synapse0x1b4fd70();
   input += synapse0x1b4fdb0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4f420() {
   double input = input0x1b4f420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4fdf0() {
   double input = 0.368287;
   input += synapse0x1b50130();
   input += synapse0x1b50170();
   input += synapse0x1b501b0();
   input += synapse0x1b501f0();
   input += synapse0x1b50230();
   input += synapse0x1b50270();
   input += synapse0x1b502b0();
   input += synapse0x1b502f0();
   input += synapse0x1b50330();
   input += synapse0x1b50370();
   input += synapse0x1b503b0();
   input += synapse0x1b503f0();
   input += synapse0x1b50430();
   input += synapse0x1b50470();
   input += synapse0x1b504b0();
   input += synapse0x1b504f0();
   input += synapse0x1b4ff80();
   input += synapse0x1b4ffc0();
   input += synapse0x1b50640();
   input += synapse0x1b50680();
   input += synapse0x1b506c0();
   input += synapse0x1b50700();
   input += synapse0x1b50740();
   input += synapse0x1b50780();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4fdf0() {
   double input = input0x1b4fdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b507c0() {
   double input = 0.0091494;
   input += synapse0x1b50b00();
   input += synapse0x1b50b40();
   input += synapse0x1b50b80();
   input += synapse0x1b50bc0();
   input += synapse0x1b50c00();
   input += synapse0x1b50c40();
   input += synapse0x1b50c80();
   input += synapse0x1b50cc0();
   input += synapse0x1b50d00();
   input += synapse0x1b50d40();
   input += synapse0x1b50d80();
   input += synapse0x1b50dc0();
   input += synapse0x1b50e00();
   input += synapse0x1b50e40();
   input += synapse0x1b50e80();
   input += synapse0x1b50ec0();
   input += synapse0x1b50950();
   input += synapse0x1b50990();
   input += synapse0x1b51010();
   input += synapse0x1b51050();
   input += synapse0x1b51090();
   input += synapse0x1b510d0();
   input += synapse0x1b51110();
   input += synapse0x1b51150();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b507c0() {
   double input = input0x1b507c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b51190() {
   double input = -1.09656;
   input += synapse0x1b514d0();
   input += synapse0x1b51510();
   input += synapse0x1b51550();
   input += synapse0x1b51590();
   input += synapse0x1b515d0();
   input += synapse0x1b51610();
   input += synapse0x1b51650();
   input += synapse0x1b51690();
   input += synapse0x1b516d0();
   input += synapse0x1b51710();
   input += synapse0x1b51750();
   input += synapse0x1b51790();
   input += synapse0x1b517d0();
   input += synapse0x1b51810();
   input += synapse0x1b51850();
   input += synapse0x1b51890();
   input += synapse0x1b51320();
   input += synapse0x1b51360();
   input += synapse0x1b519e0();
   input += synapse0x1b51a20();
   input += synapse0x1b51a60();
   input += synapse0x1b51aa0();
   input += synapse0x1b51ae0();
   input += synapse0x1b51b20();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b51190() {
   double input = input0x1b51190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b51b60() {
   double input = 0.549455;
   input += synapse0x1b51ea0();
   input += synapse0x1b46470();
   input += synapse0x1b464b0();
   input += synapse0x1b464f0();
   input += synapse0x1b46740();
   input += synapse0x1b46780();
   input += synapse0x1b467c0();
   input += synapse0x1b46a10();
   input += synapse0x1b46a50();
   input += synapse0x1b46ca0();
   input += synapse0x1b46ce0();
   input += synapse0x1b46d20();
   input += synapse0x1b46f70();
   input += synapse0x1b46fb0();
   input += synapse0x1b47200();
   input += synapse0x1b47240();
   input += synapse0x1b51cf0();
   input += synapse0x1b51d30();
   input += synapse0x1b47390();
   input += synapse0x1b478a0();
   input += synapse0x1b478e0();
   input += synapse0x1b47920();
   input += synapse0x1b47b70();
   input += synapse0x1b47bb0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b51b60() {
   double input = input0x1b51b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b47bf0() {
   double input = -0.0560117;
   input += synapse0x1b47460();
   input += synapse0x1b474a0();
   input += synapse0x1b474e0();
   input += synapse0x1b47520();
   input += synapse0x1b47ea0();
   input += synapse0x1b541f0();
   input += synapse0x1b54230();
   input += synapse0x1b54270();
   input += synapse0x1b542b0();
   input += synapse0x1b542f0();
   input += synapse0x1b54330();
   input += synapse0x1b54370();
   input += synapse0x1b543b0();
   input += synapse0x1b543f0();
   input += synapse0x1b54430();
   input += synapse0x1b54470();
   input += synapse0x1b47d80();
   input += synapse0x1b47dc0();
   input += synapse0x1b545c0();
   input += synapse0x1b54600();
   input += synapse0x1b54640();
   input += synapse0x1b54680();
   input += synapse0x1b546c0();
   input += synapse0x1b54700();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b47bf0() {
   double input = input0x1b47bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b54740() {
   double input = -0.739547;
   input += synapse0x1b54a80();
   input += synapse0x1b54ac0();
   input += synapse0x1b54b00();
   input += synapse0x1b54b40();
   input += synapse0x1b54b80();
   input += synapse0x1b54bc0();
   input += synapse0x1b54c00();
   input += synapse0x1b54c40();
   input += synapse0x1b54c80();
   input += synapse0x1b54cc0();
   input += synapse0x1b54d00();
   input += synapse0x1b54d40();
   input += synapse0x1b54d80();
   input += synapse0x1b54dc0();
   input += synapse0x1b54e00();
   input += synapse0x1b54e40();
   input += synapse0x1b548d0();
   input += synapse0x1b54910();
   input += synapse0x1b54f90();
   input += synapse0x1b54fd0();
   input += synapse0x1b55010();
   input += synapse0x1b55050();
   input += synapse0x1b55090();
   input += synapse0x1b550d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b54740() {
   double input = input0x1b54740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b55110() {
   double input = -1.15759;
   input += synapse0x1b55450();
   input += synapse0x1b55490();
   input += synapse0x1b554d0();
   input += synapse0x1b55510();
   input += synapse0x1b55550();
   input += synapse0x1b55590();
   input += synapse0x1b555d0();
   input += synapse0x1b55610();
   input += synapse0x1b55650();
   input += synapse0x1b55690();
   input += synapse0x1b556d0();
   input += synapse0x1b55710();
   input += synapse0x1b55750();
   input += synapse0x1b55790();
   input += synapse0x1b557d0();
   input += synapse0x1b55810();
   input += synapse0x1b552a0();
   input += synapse0x1b552e0();
   input += synapse0x1b55960();
   input += synapse0x1b559a0();
   input += synapse0x1b559e0();
   input += synapse0x1b55a20();
   input += synapse0x1b55a60();
   input += synapse0x1b55aa0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b55110() {
   double input = input0x1b55110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b55ae0() {
   double input = -3.9399;
   input += synapse0x1b55e20();
   input += synapse0x1b55e60();
   input += synapse0x1b55ea0();
   input += synapse0x1b55ee0();
   input += synapse0x1b55f20();
   input += synapse0x1b55f60();
   input += synapse0x1b55fa0();
   input += synapse0x1b55fe0();
   input += synapse0x1b56020();
   input += synapse0x1b56060();
   input += synapse0x1b560a0();
   input += synapse0x1b560e0();
   input += synapse0x1b56120();
   input += synapse0x1b56160();
   input += synapse0x1b561a0();
   input += synapse0x1b561e0();
   input += synapse0x1b55c70();
   input += synapse0x1b55cb0();
   input += synapse0x1b56330();
   input += synapse0x1b56370();
   input += synapse0x1b563b0();
   input += synapse0x1b563f0();
   input += synapse0x1b56430();
   input += synapse0x1b56470();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b55ae0() {
   double input = input0x1b55ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b564b0() {
   double input = 0.192848;
   input += synapse0x1b567f0();
   input += synapse0x1b56830();
   input += synapse0x1b56870();
   input += synapse0x1b568b0();
   input += synapse0x1b568f0();
   input += synapse0x1b56930();
   input += synapse0x1b56970();
   input += synapse0x1b569b0();
   input += synapse0x1b569f0();
   input += synapse0x1b56a30();
   input += synapse0x1b56a70();
   input += synapse0x1b56ab0();
   input += synapse0x1b56af0();
   input += synapse0x1b56b30();
   input += synapse0x1b56b70();
   input += synapse0x1b56bb0();
   input += synapse0x1b56640();
   input += synapse0x1b56680();
   input += synapse0x1b56d00();
   input += synapse0x1b56d40();
   input += synapse0x1b56d80();
   input += synapse0x1b56dc0();
   input += synapse0x1b56e00();
   input += synapse0x1b56e40();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b564b0() {
   double input = input0x1b564b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b56e80() {
   double input = 0.377575;
   input += synapse0x1b571c0();
   input += synapse0x1b57200();
   input += synapse0x1b57240();
   input += synapse0x1b57280();
   input += synapse0x1b572c0();
   input += synapse0x1b57300();
   input += synapse0x1b57340();
   input += synapse0x1b57380();
   input += synapse0x1b573c0();
   input += synapse0x1b57400();
   input += synapse0x1b57440();
   input += synapse0x1b57480();
   input += synapse0x1b574c0();
   input += synapse0x1b57500();
   input += synapse0x1b57540();
   input += synapse0x1b57580();
   input += synapse0x1b57010();
   input += synapse0x1b57050();
   input += synapse0x1b576d0();
   input += synapse0x1b57710();
   input += synapse0x1b57750();
   input += synapse0x1b57790();
   input += synapse0x1b577d0();
   input += synapse0x1b57810();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b56e80() {
   double input = input0x1b56e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b57850() {
   double input = -2.03106;
   input += synapse0x1b57b90();
   input += synapse0x1b57bd0();
   input += synapse0x1b57c10();
   input += synapse0x1b57c50();
   input += synapse0x1b57c90();
   input += synapse0x1b57cd0();
   input += synapse0x1b57d10();
   input += synapse0x1b57d50();
   input += synapse0x1b57d90();
   input += synapse0x1b57dd0();
   input += synapse0x1b57e10();
   input += synapse0x1b57e50();
   input += synapse0x1b57e90();
   input += synapse0x1b57ed0();
   input += synapse0x1b57f10();
   input += synapse0x1b57f50();
   input += synapse0x1b579e0();
   input += synapse0x1b57a20();
   input += synapse0x1b580a0();
   input += synapse0x1b580e0();
   input += synapse0x1b58120();
   input += synapse0x1b58160();
   input += synapse0x1b581a0();
   input += synapse0x1b581e0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b57850() {
   double input = input0x1b57850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b58220() {
   double input = 1.30312;
   input += synapse0x1b58560();
   input += synapse0x1b585a0();
   input += synapse0x1b585e0();
   input += synapse0x1b58620();
   input += synapse0x1b58660();
   input += synapse0x1b586a0();
   input += synapse0x1b586e0();
   input += synapse0x1b58720();
   input += synapse0x1b58760();
   input += synapse0x1b587a0();
   input += synapse0x1b587e0();
   input += synapse0x1b58820();
   input += synapse0x1b58860();
   input += synapse0x1b588a0();
   input += synapse0x1b588e0();
   input += synapse0x1b58920();
   input += synapse0x1b583b0();
   input += synapse0x1b583f0();
   input += synapse0x1b58a70();
   input += synapse0x1b58ab0();
   input += synapse0x1b58af0();
   input += synapse0x1b58b30();
   input += synapse0x1b58b70();
   input += synapse0x1b58bb0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b58220() {
   double input = input0x1b58220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b58bf0() {
   double input = 0.0747519;
   input += synapse0x1b41660();
   input += synapse0x1b416a0();
   input += synapse0x1b416e0();
   input += synapse0x1b41720();
   input += synapse0x1b41760();
   input += synapse0x1b417a0();
   input += synapse0x1b417e0();
   input += synapse0x1b41820();
   input += synapse0x1b59340();
   input += synapse0x1b59380();
   input += synapse0x1b593c0();
   input += synapse0x1b59400();
   input += synapse0x1b59440();
   input += synapse0x1b59480();
   input += synapse0x1b594c0();
   input += synapse0x1b59500();
   input += synapse0x1b58d80();
   input += synapse0x1b58dc0();
   input += synapse0x1b59650();
   input += synapse0x1b59690();
   input += synapse0x1b596d0();
   input += synapse0x1b59710();
   input += synapse0x1b59750();
   input += synapse0x1b59790();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b58bf0() {
   double input = input0x1b58bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b597d0() {
   double input = 1.15481;
   input += synapse0x1b59b10();
   input += synapse0x1b59b50();
   input += synapse0x1b59b90();
   input += synapse0x1b59bd0();
   input += synapse0x1b59c10();
   input += synapse0x1b59c50();
   input += synapse0x1b59c90();
   input += synapse0x1b59cd0();
   input += synapse0x1b59d10();
   input += synapse0x1b59d50();
   input += synapse0x1b59d90();
   input += synapse0x1b59dd0();
   input += synapse0x1b59e10();
   input += synapse0x1b59e50();
   input += synapse0x1b59e90();
   input += synapse0x1b59ed0();
   input += synapse0x1b59960();
   input += synapse0x1b599a0();
   input += synapse0x1b5a020();
   input += synapse0x1b5a060();
   input += synapse0x1b5a0a0();
   input += synapse0x1b5a0e0();
   input += synapse0x1b5a120();
   input += synapse0x1b5a160();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b597d0() {
   double input = input0x1b597d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b5a1a0() {
   double input = 0.750489;
   input += synapse0x1b5a4e0();
   input += synapse0x1b5a520();
   input += synapse0x1b5a560();
   input += synapse0x1b5a5a0();
   input += synapse0x1b5a5e0();
   input += synapse0x1b5a620();
   input += synapse0x1b5a660();
   input += synapse0x1b5a6a0();
   input += synapse0x1b5a6e0();
   input += synapse0x1b5a720();
   input += synapse0x1b5a760();
   input += synapse0x1b5a7a0();
   input += synapse0x1b5a7e0();
   input += synapse0x1b5a820();
   input += synapse0x1b5a860();
   input += synapse0x1b5a8a0();
   input += synapse0x1b5a330();
   input += synapse0x1b5a370();
   input += synapse0x1b4aea0();
   input += synapse0x1b4aee0();
   input += synapse0x1b4af20();
   input += synapse0x1b4af60();
   input += synapse0x1b4afa0();
   input += synapse0x1b4afe0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b5a1a0() {
   double input = input0x1b5a1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4b020() {
   double input = 2.13454;
   input += synapse0x1b4b360();
   input += synapse0x1b4b3a0();
   input += synapse0x1b4b3e0();
   input += synapse0x1b4b420();
   input += synapse0x1b4b460();
   input += synapse0x1b4b4a0();
   input += synapse0x1b4b4e0();
   input += synapse0x1b4b520();
   input += synapse0x1b4b560();
   input += synapse0x1b4b5a0();
   input += synapse0x1b4b5e0();
   input += synapse0x1b4b620();
   input += synapse0x1b4b660();
   input += synapse0x1b4b6a0();
   input += synapse0x1b4b6e0();
   input += synapse0x1b4b720();
   input += synapse0x1b4b1b0();
   input += synapse0x1b4b1f0();
   input += synapse0x1b4b870();
   input += synapse0x1b4b8b0();
   input += synapse0x1b4b8f0();
   input += synapse0x1b4b930();
   input += synapse0x1b4b970();
   input += synapse0x1b4b9b0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4b020() {
   double input = input0x1b4b020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4b9f0() {
   double input = 0.608119;
   input += synapse0x1b4bd30();
   input += synapse0x1b4bd70();
   input += synapse0x1b4bdb0();
   input += synapse0x1b4bdf0();
   input += synapse0x1b4be30();
   input += synapse0x1b4be70();
   input += synapse0x1b4beb0();
   input += synapse0x1b4bef0();
   input += synapse0x1b4bf30();
   input += synapse0x1b4bf70();
   input += synapse0x1b4bfb0();
   input += synapse0x1b4bff0();
   input += synapse0x1b4c030();
   input += synapse0x1b4c070();
   input += synapse0x1b4c0b0();
   input += synapse0x1b4c0f0();
   input += synapse0x1b4bb80();
   input += synapse0x1b4bbc0();
   input += synapse0x1b4c240();
   input += synapse0x1b4c280();
   input += synapse0x1b4c2c0();
   input += synapse0x1b4c300();
   input += synapse0x1b4c340();
   input += synapse0x1b4c380();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4b9f0() {
   double input = input0x1b4b9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b4c3c0() {
   double input = 0.160532;
   input += synapse0x1b4c700();
   input += synapse0x1b4c740();
   input += synapse0x1b4c780();
   input += synapse0x1b4c7c0();
   input += synapse0x1b4c800();
   input += synapse0x1b4c840();
   input += synapse0x1b4c880();
   input += synapse0x1b4c8c0();
   input += synapse0x1b4c900();
   input += synapse0x1b4c940();
   input += synapse0x1b4c980();
   input += synapse0x1b4c9c0();
   input += synapse0x1b4ca00();
   input += synapse0x1b4ca40();
   input += synapse0x1b4ca80();
   input += synapse0x1b4cac0();
   input += synapse0x1b4c550();
   input += synapse0x1b4c590();
   input += synapse0x1b4cc10();
   input += synapse0x1b4cc50();
   input += synapse0x1b4cc90();
   input += synapse0x1b4ccd0();
   input += synapse0x1b4cd10();
   input += synapse0x1b4cd50();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b4c3c0() {
   double input = input0x1b4c3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b5ea00() {
   double input = 0.523417;
   input += synapse0x1b5ec20();
   input += synapse0x1b5ec60();
   input += synapse0x1b5eca0();
   input += synapse0x1b5ece0();
   input += synapse0x1b5ed20();
   input += synapse0x1b5ed60();
   input += synapse0x1b5eda0();
   input += synapse0x1b5ede0();
   input += synapse0x1b5ee20();
   input += synapse0x1b5ee60();
   input += synapse0x1b5eea0();
   input += synapse0x1b5eee0();
   input += synapse0x1b5ef20();
   input += synapse0x1b5ef60();
   input += synapse0x1b5efa0();
   input += synapse0x1b5efe0();
   input += synapse0x1b4cd90();
   input += synapse0x1b4cdd0();
   input += synapse0x1b5f130();
   input += synapse0x1b5f170();
   input += synapse0x1b5f1b0();
   input += synapse0x1b5f1f0();
   input += synapse0x1b5f230();
   input += synapse0x1b5f270();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b5ea00() {
   double input = input0x1b5ea00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b5f2b0() {
   double input = -0.122262;
   input += synapse0x1b5f5f0();
   input += synapse0x1b5f630();
   input += synapse0x1b5f670();
   input += synapse0x1b5f6b0();
   input += synapse0x1b5f6f0();
   input += synapse0x1b5f730();
   input += synapse0x1b5f770();
   input += synapse0x1b5f7b0();
   input += synapse0x1b5f7f0();
   input += synapse0x1b5f830();
   input += synapse0x1b5f870();
   input += synapse0x1b5f8b0();
   input += synapse0x1b5f8f0();
   input += synapse0x1b5f930();
   input += synapse0x1b5f970();
   input += synapse0x1b5f9b0();
   input += synapse0x1b5f440();
   input += synapse0x1b5f480();
   input += synapse0x1b5fb00();
   input += synapse0x1b5fb40();
   input += synapse0x1b5fb80();
   input += synapse0x1b5fbc0();
   input += synapse0x1b5fc00();
   input += synapse0x1b5fc40();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b5f2b0() {
   double input = input0x1b5f2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b5fc80() {
   double input = -2.31316;
   input += synapse0x1b5ffc0();
   input += synapse0x1b60000();
   input += synapse0x1b60040();
   input += synapse0x1b60080();
   input += synapse0x1b600c0();
   input += synapse0x1b60100();
   input += synapse0x1b60140();
   input += synapse0x1b60180();
   input += synapse0x1b601c0();
   input += synapse0x1b60200();
   input += synapse0x1b60240();
   input += synapse0x1b60280();
   input += synapse0x1b602c0();
   input += synapse0x1b60300();
   input += synapse0x1b60340();
   input += synapse0x1b60380();
   input += synapse0x1b5fe10();
   input += synapse0x1b5fe50();
   input += synapse0x1b604d0();
   input += synapse0x1b60510();
   input += synapse0x1b60550();
   input += synapse0x1b60590();
   input += synapse0x1b605d0();
   input += synapse0x1b60610();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b5fc80() {
   double input = input0x1b5fc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b60650() {
   double input = 1.38278;
   input += synapse0x1b60990();
   input += synapse0x1b609d0();
   input += synapse0x1b60a10();
   input += synapse0x1b60a50();
   input += synapse0x1b60a90();
   input += synapse0x1b60ad0();
   input += synapse0x1b60b10();
   input += synapse0x1b60b50();
   input += synapse0x1b60b90();
   input += synapse0x1b60bd0();
   input += synapse0x1b60c10();
   input += synapse0x1b60c50();
   input += synapse0x1b60c90();
   input += synapse0x1b60cd0();
   input += synapse0x1b60d10();
   input += synapse0x1b60d50();
   input += synapse0x1b607e0();
   input += synapse0x1b60820();
   input += synapse0x1b60ea0();
   input += synapse0x1b60ee0();
   input += synapse0x1b60f20();
   input += synapse0x1b60f60();
   input += synapse0x1b60fa0();
   input += synapse0x1b60fe0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b60650() {
   double input = input0x1b60650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b67850() {
   double input = -0.347578;
   input += synapse0x1b3d580();
   input += synapse0x1b3d5c0();
   input += synapse0x1b3ea90();
   input += synapse0x1b3ead0();
   input += synapse0x1b3f460();
   input += synapse0x1b3f4a0();
   input += synapse0x1b40230();
   input += synapse0x1b40270();
   input += synapse0x1b40c00();
   input += synapse0x1b40c40();
   input += synapse0x1b415d0();
   input += synapse0x1b41610();
   input += synapse0x1b420b0();
   input += synapse0x1b420f0();
   input += synapse0x1b42a80();
   input += synapse0x1b42ac0();
   input += synapse0x1b3fb60();
   input += synapse0x1b3fba0();
   input += synapse0x1b44630();
   input += synapse0x1b44670();
   input += synapse0x1b45000();
   input += synapse0x1b45040();
   input += synapse0x1b459d0();
   input += synapse0x1b45a10();
   input += synapse0x1b463a0();
   input += synapse0x1b463e0();
   input += synapse0x1b3a510();
   input += synapse0x1b3a550();
   input += synapse0x1b48490();
   input += synapse0x1b484d0();
   input += synapse0x1b48e60();
   input += synapse0x1b48ea0();
   input += synapse0x1b49830();
   input += synapse0x1b49870();
   input += synapse0x1b4a200();
   input += synapse0x1b4a240();
   input += synapse0x1b4abd0();
   input += synapse0x1b4ac10();
   input += synapse0x1b43720();
   input += synapse0x1b43760();
   input += synapse0x1b4cfd0();
   input += synapse0x1b4d010();
   input += synapse0x1b4d960();
   input += synapse0x1b4d9a0();
   input += synapse0x1b4e330();
   input += synapse0x1b4e370();
   input += synapse0x1b4ed00();
   input += synapse0x1b4ed40();
   input += synapse0x1b4f6d0();
   input += synapse0x1b4f710();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b67850() {
   double input = input0x1b67850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b67bf0() {
   double input = -0.433656;
   input += synapse0x1b51e10();
   input += synapse0x1b51e50();
   input += synapse0x1b473d0();
   input += synapse0x1b47410();
   input += synapse0x1b549f0();
   input += synapse0x1b54a30();
   input += synapse0x1b553c0();
   input += synapse0x1b55400();
   input += synapse0x1b55d90();
   input += synapse0x1b55dd0();
   input += synapse0x1b56760();
   input += synapse0x1b567a0();
   input += synapse0x1b57130();
   input += synapse0x1b57170();
   input += synapse0x1b57b00();
   input += synapse0x1b57b40();
   input += synapse0x1b584d0();
   input += synapse0x1b58510();
   input += synapse0x1b58ea0();
   input += synapse0x1b58ee0();
   input += synapse0x1b59a80();
   input += synapse0x1b59ac0();
   input += synapse0x1b5a450();
   input += synapse0x1b5a490();
   input += synapse0x1b4b2d0();
   input += synapse0x1b4b310();
   input += synapse0x1b4bca0();
   input += synapse0x1b4bce0();
   input += synapse0x1b4c670();
   input += synapse0x1b4c6b0();
   input += synapse0x1b5eb90();
   input += synapse0x1b5ebd0();
   input += synapse0x1b5f560();
   input += synapse0x1b5f5a0();
   input += synapse0x1b5ff30();
   input += synapse0x1b5ff70();
   input += synapse0x1b60900();
   input += synapse0x1b60940();
   input += synapse0x1b3c7f0();
   input += synapse0x1b3c830();
   input += synapse0x1b500a0();
   input += synapse0x1b500e0();
   input += synapse0x1b61020();
   input += synapse0x1b61060();
   input += synapse0x1b610a0();
   input += synapse0x1b610e0();
   input += synapse0x1b67f90();
   input += synapse0x1b67fd0();
   input += synapse0x1b68010();
   input += synapse0x1b68050();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b67bf0() {
   double input = input0x1b67bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b68090() {
   double input = 0.0202901;
   input += synapse0x1b683d0();
   input += synapse0x1b68410();
   input += synapse0x1b68450();
   input += synapse0x1b68490();
   input += synapse0x1b684d0();
   input += synapse0x1b68510();
   input += synapse0x1b68550();
   input += synapse0x1b68590();
   input += synapse0x1b685d0();
   input += synapse0x1b68610();
   input += synapse0x1b68650();
   input += synapse0x1b68690();
   input += synapse0x1b686d0();
   input += synapse0x1b68710();
   input += synapse0x1b68750();
   input += synapse0x1b68790();
   input += synapse0x1b68220();
   input += synapse0x1b68260();
   input += synapse0x1b688e0();
   input += synapse0x1b68920();
   input += synapse0x1b68960();
   input += synapse0x1b689a0();
   input += synapse0x1b689e0();
   input += synapse0x1b68a20();
   input += synapse0x1b68a60();
   input += synapse0x1b68aa0();
   input += synapse0x1b68ae0();
   input += synapse0x1b68b20();
   input += synapse0x1b68b60();
   input += synapse0x1b68ba0();
   input += synapse0x1b68be0();
   input += synapse0x1b68c20();
   input += synapse0x1b687d0();
   input += synapse0x1b68810();
   input += synapse0x1b68850();
   input += synapse0x1b68890();
   input += synapse0x1b68e70();
   input += synapse0x1b68eb0();
   input += synapse0x1b68ef0();
   input += synapse0x1b68f30();
   input += synapse0x1b68f70();
   input += synapse0x1b68fb0();
   input += synapse0x1b68ff0();
   input += synapse0x1b69030();
   input += synapse0x1b69070();
   input += synapse0x1b690b0();
   input += synapse0x1b690f0();
   input += synapse0x1b69130();
   input += synapse0x1b69170();
   input += synapse0x1b691b0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b68090() {
   double input = input0x1b68090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b691f0() {
   double input = -0.00767878;
   input += synapse0x1b69530();
   input += synapse0x1b69570();
   input += synapse0x1b695b0();
   input += synapse0x1b695f0();
   input += synapse0x1b69630();
   input += synapse0x1b69670();
   input += synapse0x1b696b0();
   input += synapse0x1b696f0();
   input += synapse0x1b69730();
   input += synapse0x1b69770();
   input += synapse0x1b697b0();
   input += synapse0x1b697f0();
   input += synapse0x1b69830();
   input += synapse0x1b69870();
   input += synapse0x1b698b0();
   input += synapse0x1b698f0();
   input += synapse0x1b69380();
   input += synapse0x1b693c0();
   input += synapse0x1b69a40();
   input += synapse0x1b69a80();
   input += synapse0x1b69ac0();
   input += synapse0x1b69b00();
   input += synapse0x1b69b40();
   input += synapse0x1b69b80();
   input += synapse0x1b69bc0();
   input += synapse0x1b69c00();
   input += synapse0x1b69c40();
   input += synapse0x1b69c80();
   input += synapse0x1b69cc0();
   input += synapse0x1b69d00();
   input += synapse0x1b69d40();
   input += synapse0x1b69d80();
   input += synapse0x1b69930();
   input += synapse0x1b69970();
   input += synapse0x1b699b0();
   input += synapse0x1b699f0();
   input += synapse0x1b69fd0();
   input += synapse0x1b6a010();
   input += synapse0x1b6a050();
   input += synapse0x1b6a090();
   input += synapse0x1b6a0d0();
   input += synapse0x1b6a110();
   input += synapse0x1b6a150();
   input += synapse0x1b6a190();
   input += synapse0x1b6a1d0();
   input += synapse0x1b6a210();
   input += synapse0x1b6a250();
   input += synapse0x1b6a290();
   input += synapse0x1b6a2d0();
   input += synapse0x1b6a310();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b691f0() {
   double input = input0x1b691f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b6a350() {
   double input = -1.25397;
   input += synapse0x1b6a690();
   input += synapse0x1b6a6d0();
   input += synapse0x1b6a710();
   input += synapse0x1b6a750();
   input += synapse0x1b6a790();
   input += synapse0x1b6a7d0();
   input += synapse0x1b6a810();
   input += synapse0x1b6a850();
   input += synapse0x1b6a890();
   input += synapse0x1b6a8d0();
   input += synapse0x1b6a910();
   input += synapse0x1b6a950();
   input += synapse0x1b6a990();
   input += synapse0x1b6a9d0();
   input += synapse0x1b6aa10();
   input += synapse0x1b6aa50();
   input += synapse0x1b6a4e0();
   input += synapse0x1b6a520();
   input += synapse0x1b6aba0();
   input += synapse0x1b6abe0();
   input += synapse0x1b6ac20();
   input += synapse0x1b6ac60();
   input += synapse0x1b6aca0();
   input += synapse0x1b6ace0();
   input += synapse0x1b6ad20();
   input += synapse0x1b6ad60();
   input += synapse0x1b6ada0();
   input += synapse0x1b6ade0();
   input += synapse0x1b6ae20();
   input += synapse0x1b6ae60();
   input += synapse0x1b6aea0();
   input += synapse0x1b6aee0();
   input += synapse0x1b6aa90();
   input += synapse0x1b6aad0();
   input += synapse0x1b6ab10();
   input += synapse0x1b6ab50();
   input += synapse0x1b6b130();
   input += synapse0x1b6b170();
   input += synapse0x1b6b1b0();
   input += synapse0x1b6b1f0();
   input += synapse0x1b6b230();
   input += synapse0x1b6b270();
   input += synapse0x1b6b2b0();
   input += synapse0x1b6b2f0();
   input += synapse0x1b6b330();
   input += synapse0x1b6b370();
   input += synapse0x1b6b3b0();
   input += synapse0x1b6b3f0();
   input += synapse0x1b6b430();
   input += synapse0x1b6b470();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b6a350() {
   double input = input0x1b6a350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x1b6b4b0() {
   double input = 4.75209;
   input += synapse0x1b3c590();
   input += synapse0x1b6b6d0();
   input += synapse0x1b6b710();
   input += synapse0x1b6b750();
   input += synapse0x1b6b790();
   return input;
}

double NNfunction_sb_sLdL::neuron0x1b6b4b0() {
   double input = input0x1b6b4b0();
   return (input * 1)+0;
}

double NNfunction_sb_sLdL::synapse0x18f73e0() {
   return (neuron0x1b37570()*0.94362);
}

double NNfunction_sb_sLdL::synapse0x1b37430() {
   return (neuron0x1b378b0()*0.05978);
}

double NNfunction_sb_sLdL::synapse0x1b37470() {
   return (neuron0x1b37bf0()*-0.929152);
}

double NNfunction_sb_sLdL::synapse0x1b3c880() {
   return (neuron0x1b37f30()*-1.26581);
}

double NNfunction_sb_sLdL::synapse0x1b3c8c0() {
   return (neuron0x1b38270()*-0.323718);
}

double NNfunction_sb_sLdL::synapse0x1b3c900() {
   return (neuron0x1b385b0()*0.587434);
}

double NNfunction_sb_sLdL::synapse0x1b3c940() {
   return (neuron0x1b388f0()*0.0165523);
}

double NNfunction_sb_sLdL::synapse0x1b3c980() {
   return (neuron0x1b38c30()*-0.0689844);
}

double NNfunction_sb_sLdL::synapse0x1b3c9c0() {
   return (neuron0x1b38f70()*-1.12278);
}

double NNfunction_sb_sLdL::synapse0x1b3ca00() {
   return (neuron0x1b392b0()*0.66698);
}

double NNfunction_sb_sLdL::synapse0x1b3ca40() {
   return (neuron0x1b395f0()*0.496988);
}

double NNfunction_sb_sLdL::synapse0x1b3ca80() {
   return (neuron0x1b39930()*-0.720472);
}

double NNfunction_sb_sLdL::synapse0x1b3cac0() {
   return (neuron0x1b39c70()*-0.31126);
}

double NNfunction_sb_sLdL::synapse0x1b3cb00() {
   return (neuron0x1b39fb0()*0.929052);
}

double NNfunction_sb_sLdL::synapse0x1b3cb40() {
   return (neuron0x1b3a2f0()*0.214332);
}

double NNfunction_sb_sLdL::synapse0x1b3cb80() {
   return (neuron0x1b3a630()*0.221722);
}

double NNfunction_sb_sLdL::synapse0x1b373a0() {
   return (neuron0x1b3a970()*-0.0451901);
}

double NNfunction_sb_sLdL::synapse0x1b373e0() {
   return (neuron0x1b3aed0()*0.856497);
}

double NNfunction_sb_sLdL::synapse0x18e8c80() {
   return (neuron0x1b3b0f0()*-1.10079);
}

double NNfunction_sb_sLdL::synapse0x18e8cc0() {
   return (neuron0x1b3b430()*-0.0797334);
}

double NNfunction_sb_sLdL::synapse0x1b3cde0() {
   return (neuron0x1b3b770()*0.21268);
}

double NNfunction_sb_sLdL::synapse0x1b3ce20() {
   return (neuron0x1b3bab0()*-0.676345);
}

double NNfunction_sb_sLdL::synapse0x1b3ce60() {
   return (neuron0x1b3bdf0()*0.326631);
}

double NNfunction_sb_sLdL::synapse0x1b3cea0() {
   return (neuron0x1b3c130()*-0.269608);
}

double NNfunction_sb_sLdL::synapse0x1b3d220() {
   return (neuron0x1b37570()*-0.860261);
}

double NNfunction_sb_sLdL::synapse0x1b3d260() {
   return (neuron0x1b378b0()*0.385479);
}

double NNfunction_sb_sLdL::synapse0x1b3d2a0() {
   return (neuron0x1b37bf0()*0.00593898);
}

double NNfunction_sb_sLdL::synapse0x1b3d2e0() {
   return (neuron0x1b37f30()*-1.12202);
}

double NNfunction_sb_sLdL::synapse0x1b3d320() {
   return (neuron0x1b38270()*-0.17799);
}

double NNfunction_sb_sLdL::synapse0x1b3d360() {
   return (neuron0x1b385b0()*0.336816);
}

double NNfunction_sb_sLdL::synapse0x1b3d3a0() {
   return (neuron0x1b388f0()*0.0648061);
}

double NNfunction_sb_sLdL::synapse0x1b3d3e0() {
   return (neuron0x1b38c30()*-0.741654);
}

double NNfunction_sb_sLdL::synapse0x1b3d420() {
   return (neuron0x1b38f70()*0.465586);
}

double NNfunction_sb_sLdL::synapse0x1b3ccd0() {
   return (neuron0x1b392b0()*0.604836);
}

double NNfunction_sb_sLdL::synapse0x1b3cd10() {
   return (neuron0x1b395f0()*0.0796812);
}

double NNfunction_sb_sLdL::synapse0x1b3cd50() {
   return (neuron0x1b39930()*1.25416);
}

double NNfunction_sb_sLdL::synapse0x1b3cd90() {
   return (neuron0x1b39c70()*0.902652);
}

double NNfunction_sb_sLdL::synapse0x1b3d670() {
   return (neuron0x1b39fb0()*0.29262);
}

double NNfunction_sb_sLdL::synapse0x1b3d6b0() {
   return (neuron0x1b3a2f0()*-0.0127227);
}

double NNfunction_sb_sLdL::synapse0x1b3d6f0() {
   return (neuron0x1b3a630()*0.0835477);
}

double NNfunction_sb_sLdL::synapse0x1b3d070() {
   return (neuron0x1b3a970()*-0.953087);
}

double NNfunction_sb_sLdL::synapse0x1b3d0b0() {
   return (neuron0x1b3aed0()*0.209785);
}

double NNfunction_sb_sLdL::synapse0x1b3d840() {
   return (neuron0x1b3b0f0()*-0.356182);
}

double NNfunction_sb_sLdL::synapse0x1b3d880() {
   return (neuron0x1b3b430()*-0.670281);
}

double NNfunction_sb_sLdL::synapse0x1b3d8c0() {
   return (neuron0x1b3b770()*0.47026);
}

double NNfunction_sb_sLdL::synapse0x1b3d900() {
   return (neuron0x1b3bab0()*0.368881);
}

double NNfunction_sb_sLdL::synapse0x1b3d940() {
   return (neuron0x1b3bdf0()*-1.18481);
}

double NNfunction_sb_sLdL::synapse0x1b3d980() {
   return (neuron0x1b3c130()*0.270093);
}

double NNfunction_sb_sLdL::synapse0x1b3dd00() {
   return (neuron0x1b37570()*0.157815);
}

double NNfunction_sb_sLdL::synapse0x1b3dd40() {
   return (neuron0x1b378b0()*0.261834);
}

double NNfunction_sb_sLdL::synapse0x1b3dd80() {
   return (neuron0x1b37bf0()*0.0288242);
}

double NNfunction_sb_sLdL::synapse0x1b3ddc0() {
   return (neuron0x1b37f30()*3.90167);
}

double NNfunction_sb_sLdL::synapse0x1b3de00() {
   return (neuron0x1b38270()*-0.130252);
}

double NNfunction_sb_sLdL::synapse0x1b3de40() {
   return (neuron0x1b385b0()*-0.0391895);
}

double NNfunction_sb_sLdL::synapse0x1b3de80() {
   return (neuron0x1b388f0()*-0.108975);
}

double NNfunction_sb_sLdL::synapse0x1b3dec0() {
   return (neuron0x1b38c30()*-0.0884976);
}

double NNfunction_sb_sLdL::synapse0x1b3df00() {
   return (neuron0x1b38f70()*-0.0106459);
}

double NNfunction_sb_sLdL::synapse0x1b3df40() {
   return (neuron0x1b392b0()*0.0606955);
}

double NNfunction_sb_sLdL::synapse0x1b3df80() {
   return (neuron0x1b395f0()*0.0298911);
}

double NNfunction_sb_sLdL::synapse0x1b3dfc0() {
   return (neuron0x1b39930()*-0.497279);
}

double NNfunction_sb_sLdL::synapse0x1b3e000() {
   return (neuron0x1b39c70()*-0.11611);
}

double NNfunction_sb_sLdL::synapse0x1b3e040() {
   return (neuron0x1b39fb0()*-0.185043);
}

double NNfunction_sb_sLdL::synapse0x1b3e080() {
   return (neuron0x1b3a2f0()*0.0375743);
}

double NNfunction_sb_sLdL::synapse0x1b3e0c0() {
   return (neuron0x1b3a630()*-0.0804094);
}

double NNfunction_sb_sLdL::synapse0x1b3db50() {
   return (neuron0x1b3a970()*-0.113164);
}

double NNfunction_sb_sLdL::synapse0x1b3db90() {
   return (neuron0x1b3aed0()*0.0899802);
}

double NNfunction_sb_sLdL::synapse0x18f6ad0() {
   return (neuron0x1b3b0f0()*0.158186);
}

double NNfunction_sb_sLdL::synapse0x18f6b10() {
   return (neuron0x1b3b430()*-0.154335);
}

double NNfunction_sb_sLdL::synapse0x1b26600() {
   return (neuron0x1b3b770()*-0.0737524);
}

double NNfunction_sb_sLdL::synapse0x1b26640() {
   return (neuron0x1b3bab0()*0.0053172);
}

double NNfunction_sb_sLdL::synapse0x1b26680() {
   return (neuron0x1b3bdf0()*-0.00208421);
}

double NNfunction_sb_sLdL::synapse0x1b374b0() {
   return (neuron0x1b3c130()*-0.0675342);
}

double NNfunction_sb_sLdL::synapse0x1b3d610() {
   return (neuron0x1b37570()*0.311623);
}

double NNfunction_sb_sLdL::synapse0x1b374f0() {
   return (neuron0x1b378b0()*-0.304647);
}

double NNfunction_sb_sLdL::synapse0x1b37530() {
   return (neuron0x1b37bf0()*-0.427172);
}

double NNfunction_sb_sLdL::synapse0x1b3e210() {
   return (neuron0x1b37f30()*1.11635);
}

double NNfunction_sb_sLdL::synapse0x1b3e250() {
   return (neuron0x1b38270()*-0.0683197);
}

double NNfunction_sb_sLdL::synapse0x1b3e290() {
   return (neuron0x1b385b0()*-0.370932);
}

double NNfunction_sb_sLdL::synapse0x1b3e2d0() {
   return (neuron0x1b388f0()*0.564073);
}

double NNfunction_sb_sLdL::synapse0x1b3e310() {
   return (neuron0x1b38c30()*-0.0937248);
}

double NNfunction_sb_sLdL::synapse0x1b3e350() {
   return (neuron0x1b38f70()*-0.162575);
}

double NNfunction_sb_sLdL::synapse0x1b3e390() {
   return (neuron0x1b392b0()*-0.284248);
}

double NNfunction_sb_sLdL::synapse0x1b3e3d0() {
   return (neuron0x1b395f0()*0.273943);
}

double NNfunction_sb_sLdL::synapse0x1b3e410() {
   return (neuron0x1b39930()*0.694964);
}

double NNfunction_sb_sLdL::synapse0x1b3e450() {
   return (neuron0x1b39c70()*-0.565392);
}

double NNfunction_sb_sLdL::synapse0x1b3e490() {
   return (neuron0x1b39fb0()*0.568479);
}

double NNfunction_sb_sLdL::synapse0x1b3e4d0() {
   return (neuron0x1b3a2f0()*-0.177331);
}

double NNfunction_sb_sLdL::synapse0x1b3e510() {
   return (neuron0x1b3a630()*-0.532655);
}

double NNfunction_sb_sLdL::synapse0x1b3d460() {
   return (neuron0x1b3a970()*0.730614);
}

double NNfunction_sb_sLdL::synapse0x1b3d4a0() {
   return (neuron0x1b3aed0()*-0.431653);
}

double NNfunction_sb_sLdL::synapse0x1b3e660() {
   return (neuron0x1b3b0f0()*-0.0150104);
}

double NNfunction_sb_sLdL::synapse0x1b3e6a0() {
   return (neuron0x1b3b430()*-1.01452);
}

double NNfunction_sb_sLdL::synapse0x1b3e6e0() {
   return (neuron0x1b3b770()*-0.109446);
}

double NNfunction_sb_sLdL::synapse0x1b3e720() {
   return (neuron0x1b3bab0()*-0.755999);
}

double NNfunction_sb_sLdL::synapse0x1b3e760() {
   return (neuron0x1b3bdf0()*0.811382);
}

double NNfunction_sb_sLdL::synapse0x1b3e7a0() {
   return (neuron0x1b3c130()*-0.497885);
}

double NNfunction_sb_sLdL::synapse0x1b3eb20() {
   return (neuron0x1b37570()*0.360426);
}

double NNfunction_sb_sLdL::synapse0x1b3eb60() {
   return (neuron0x1b378b0()*0.328995);
}

double NNfunction_sb_sLdL::synapse0x1b3eba0() {
   return (neuron0x1b37bf0()*1.13374);
}

double NNfunction_sb_sLdL::synapse0x1b3ebe0() {
   return (neuron0x1b37f30()*-0.391265);
}

double NNfunction_sb_sLdL::synapse0x1b3ec20() {
   return (neuron0x1b38270()*-0.203049);
}

double NNfunction_sb_sLdL::synapse0x1b3ec60() {
   return (neuron0x1b385b0()*0.0773582);
}

double NNfunction_sb_sLdL::synapse0x1b3eca0() {
   return (neuron0x1b388f0()*0.207486);
}

double NNfunction_sb_sLdL::synapse0x1b3ece0() {
   return (neuron0x1b38c30()*-0.127462);
}

double NNfunction_sb_sLdL::synapse0x1b3ed20() {
   return (neuron0x1b38f70()*-0.413685);
}

double NNfunction_sb_sLdL::synapse0x1b3ed60() {
   return (neuron0x1b392b0()*0.278909);
}

double NNfunction_sb_sLdL::synapse0x1b3eda0() {
   return (neuron0x1b395f0()*-0.353704);
}

double NNfunction_sb_sLdL::synapse0x1b3ede0() {
   return (neuron0x1b39930()*-0.691362);
}

double NNfunction_sb_sLdL::synapse0x1b3ee20() {
   return (neuron0x1b39c70()*-1.05672);
}

double NNfunction_sb_sLdL::synapse0x1b3ee60() {
   return (neuron0x1b39fb0()*0.847195);
}

double NNfunction_sb_sLdL::synapse0x1b3eea0() {
   return (neuron0x1b3a2f0()*0.771414);
}

double NNfunction_sb_sLdL::synapse0x1b3eee0() {
   return (neuron0x1b3a630()*0.611159);
}

double NNfunction_sb_sLdL::synapse0x1b3e970() {
   return (neuron0x1b3a970()*-0.0711006);
}

double NNfunction_sb_sLdL::synapse0x1b3e9b0() {
   return (neuron0x1b3aed0()*-0.500724);
}

double NNfunction_sb_sLdL::synapse0x1b3f030() {
   return (neuron0x1b3b0f0()*0.242515);
}

double NNfunction_sb_sLdL::synapse0x1b3f070() {
   return (neuron0x1b3b430()*0.0830378);
}

double NNfunction_sb_sLdL::synapse0x1b3f0b0() {
   return (neuron0x1b3b770()*0.278817);
}

double NNfunction_sb_sLdL::synapse0x1b3f0f0() {
   return (neuron0x1b3bab0()*-0.689039);
}

double NNfunction_sb_sLdL::synapse0x1b3f130() {
   return (neuron0x1b3bdf0()*-0.20317);
}

double NNfunction_sb_sLdL::synapse0x1b3f170() {
   return (neuron0x1b3c130()*-0.167422);
}

double NNfunction_sb_sLdL::synapse0x1b3f4f0() {
   return (neuron0x1b37570()*-0.158218);
}

double NNfunction_sb_sLdL::synapse0x1b3f530() {
   return (neuron0x1b378b0()*-0.192388);
}

double NNfunction_sb_sLdL::synapse0x1b3f570() {
   return (neuron0x1b37bf0()*0.999787);
}

double NNfunction_sb_sLdL::synapse0x1b3f5b0() {
   return (neuron0x1b37f30()*1.08451);
}

double NNfunction_sb_sLdL::synapse0x1b3f5f0() {
   return (neuron0x1b38270()*0.135211);
}

double NNfunction_sb_sLdL::synapse0x1b3f630() {
   return (neuron0x1b385b0()*0.25063);
}

double NNfunction_sb_sLdL::synapse0x1b3f670() {
   return (neuron0x1b388f0()*0.334101);
}

double NNfunction_sb_sLdL::synapse0x1b3f6b0() {
   return (neuron0x1b38c30()*0.137669);
}

double NNfunction_sb_sLdL::synapse0x1b3f6f0() {
   return (neuron0x1b38f70()*0.222077);
}

double NNfunction_sb_sLdL::synapse0x18f6e40() {
   return (neuron0x1b392b0()*-0.278282);
}

double NNfunction_sb_sLdL::synapse0x18f6e80() {
   return (neuron0x1b395f0()*0.0674122);
}

double NNfunction_sb_sLdL::synapse0x18f6ec0() {
   return (neuron0x1b39930()*0.0825497);
}

double NNfunction_sb_sLdL::synapse0x18f6f00() {
   return (neuron0x1b39c70()*0.444269);
}

double NNfunction_sb_sLdL::synapse0x18f6f40() {
   return (neuron0x1b39fb0()*0.152734);
}

double NNfunction_sb_sLdL::synapse0x18f6f80() {
   return (neuron0x1b3a2f0()*0.120705);
}

double NNfunction_sb_sLdL::synapse0x18f6fc0() {
   return (neuron0x1b3a630()*-0.231765);
}

double NNfunction_sb_sLdL::synapse0x1b3f340() {
   return (neuron0x1b3a970()*-0.668369);
}

double NNfunction_sb_sLdL::synapse0x1b3f380() {
   return (neuron0x1b3aed0()*0.0892233);
}

double NNfunction_sb_sLdL::synapse0x18f7110() {
   return (neuron0x1b3b0f0()*0.160314);
}

double NNfunction_sb_sLdL::synapse0x18f7150() {
   return (neuron0x1b3b430()*0.229912);
}

double NNfunction_sb_sLdL::synapse0x18f7190() {
   return (neuron0x1b3b770()*0.127735);
}

double NNfunction_sb_sLdL::synapse0x18f71d0() {
   return (neuron0x1b3bab0()*-0.216933);
}

double NNfunction_sb_sLdL::synapse0x18f7210() {
   return (neuron0x1b3bdf0()*0.0981602);
}

double NNfunction_sb_sLdL::synapse0x1b3ff40() {
   return (neuron0x1b3c130()*0.0835336);
}

double NNfunction_sb_sLdL::synapse0x1b402c0() {
   return (neuron0x1b37570()*0.396668);
}

double NNfunction_sb_sLdL::synapse0x1b40300() {
   return (neuron0x1b378b0()*0.41445);
}

double NNfunction_sb_sLdL::synapse0x1b40340() {
   return (neuron0x1b37bf0()*-0.551837);
}

double NNfunction_sb_sLdL::synapse0x1b40380() {
   return (neuron0x1b37f30()*0.0825568);
}

double NNfunction_sb_sLdL::synapse0x1b403c0() {
   return (neuron0x1b38270()*0.145185);
}

double NNfunction_sb_sLdL::synapse0x1b40400() {
   return (neuron0x1b385b0()*-1.16853);
}

double NNfunction_sb_sLdL::synapse0x1b40440() {
   return (neuron0x1b388f0()*0.276958);
}

double NNfunction_sb_sLdL::synapse0x1b40480() {
   return (neuron0x1b38c30()*-0.385718);
}

double NNfunction_sb_sLdL::synapse0x1b404c0() {
   return (neuron0x1b38f70()*-0.136212);
}

double NNfunction_sb_sLdL::synapse0x1b40500() {
   return (neuron0x1b392b0()*0.0640597);
}

double NNfunction_sb_sLdL::synapse0x1b40540() {
   return (neuron0x1b395f0()*0.304249);
}

double NNfunction_sb_sLdL::synapse0x1b40580() {
   return (neuron0x1b39930()*-1.13404);
}

double NNfunction_sb_sLdL::synapse0x1b405c0() {
   return (neuron0x1b39c70()*-0.0247656);
}

double NNfunction_sb_sLdL::synapse0x1b40600() {
   return (neuron0x1b39fb0()*-0.653681);
}

double NNfunction_sb_sLdL::synapse0x1b40640() {
   return (neuron0x1b3a2f0()*0.667094);
}

double NNfunction_sb_sLdL::synapse0x1b40680() {
   return (neuron0x1b3a630()*-0.2571);
}

double NNfunction_sb_sLdL::synapse0x1b40110() {
   return (neuron0x1b3a970()*-0.801682);
}

double NNfunction_sb_sLdL::synapse0x1b40150() {
   return (neuron0x1b3aed0()*0.614641);
}

double NNfunction_sb_sLdL::synapse0x1b407d0() {
   return (neuron0x1b3b0f0()*0.0772841);
}

double NNfunction_sb_sLdL::synapse0x1b40810() {
   return (neuron0x1b3b430()*-0.579643);
}

double NNfunction_sb_sLdL::synapse0x1b40850() {
   return (neuron0x1b3b770()*-1.45104);
}

double NNfunction_sb_sLdL::synapse0x1b40890() {
   return (neuron0x1b3bab0()*-0.329691);
}

double NNfunction_sb_sLdL::synapse0x1b408d0() {
   return (neuron0x1b3bdf0()*-0.229292);
}

double NNfunction_sb_sLdL::synapse0x1b40910() {
   return (neuron0x1b3c130()*-0.402729);
}

double NNfunction_sb_sLdL::synapse0x1b40c90() {
   return (neuron0x1b37570()*-0.00462027);
}

double NNfunction_sb_sLdL::synapse0x1b40cd0() {
   return (neuron0x1b378b0()*0.00928114);
}

double NNfunction_sb_sLdL::synapse0x1b40d10() {
   return (neuron0x1b37bf0()*-0.0100021);
}

double NNfunction_sb_sLdL::synapse0x1b40d50() {
   return (neuron0x1b37f30()*-2.93342);
}

double NNfunction_sb_sLdL::synapse0x1b40d90() {
   return (neuron0x1b38270()*-0.00711286);
}

double NNfunction_sb_sLdL::synapse0x1b40dd0() {
   return (neuron0x1b385b0()*-0.00775665);
}

double NNfunction_sb_sLdL::synapse0x1b40e10() {
   return (neuron0x1b388f0()*-0.000836547);
}

double NNfunction_sb_sLdL::synapse0x1b40e50() {
   return (neuron0x1b38c30()*-0.00324674);
}

double NNfunction_sb_sLdL::synapse0x1b40e90() {
   return (neuron0x1b38f70()*0.00039712);
}

double NNfunction_sb_sLdL::synapse0x1b40ed0() {
   return (neuron0x1b392b0()*0.0030002);
}

double NNfunction_sb_sLdL::synapse0x1b40f10() {
   return (neuron0x1b395f0()*0.000655106);
}

double NNfunction_sb_sLdL::synapse0x1b40f50() {
   return (neuron0x1b39930()*0.126943);
}

double NNfunction_sb_sLdL::synapse0x1b40f90() {
   return (neuron0x1b39c70()*0.149203);
}

double NNfunction_sb_sLdL::synapse0x1b40fd0() {
   return (neuron0x1b39fb0()*-0.00336789);
}

double NNfunction_sb_sLdL::synapse0x1b41010() {
   return (neuron0x1b3a2f0()*-0.00475565);
}

double NNfunction_sb_sLdL::synapse0x1b41050() {
   return (neuron0x1b3a630()*-0.00556654);
}

double NNfunction_sb_sLdL::synapse0x1b40ae0() {
   return (neuron0x1b3a970()*-0.00152202);
}

double NNfunction_sb_sLdL::synapse0x1b40b20() {
   return (neuron0x1b3aed0()*-0.00292657);
}

double NNfunction_sb_sLdL::synapse0x1b411a0() {
   return (neuron0x1b3b0f0()*-0.00452083);
}

double NNfunction_sb_sLdL::synapse0x1b411e0() {
   return (neuron0x1b3b430()*-0.00916946);
}

double NNfunction_sb_sLdL::synapse0x1b41220() {
   return (neuron0x1b3b770()*-0.00464387);
}

double NNfunction_sb_sLdL::synapse0x1b41260() {
   return (neuron0x1b3bab0()*0.00318618);
}

double NNfunction_sb_sLdL::synapse0x1b412a0() {
   return (neuron0x1b3bdf0()*0.00201063);
}

double NNfunction_sb_sLdL::synapse0x1b412e0() {
   return (neuron0x1b3c130()*-0.00833151);
}

double NNfunction_sb_sLdL::synapse0x1b3adc0() {
   return (neuron0x1b37570()*0.00191453);
}

double NNfunction_sb_sLdL::synapse0x1b3ae00() {
   return (neuron0x1b378b0()*0.00656419);
}

double NNfunction_sb_sLdL::synapse0x1b3ae40() {
   return (neuron0x1b37bf0()*-0.0664714);
}

double NNfunction_sb_sLdL::synapse0x1b3ae80() {
   return (neuron0x1b37f30()*0.0506689);
}

double NNfunction_sb_sLdL::synapse0x1b41870() {
   return (neuron0x1b38270()*-0.00589801);
}

double NNfunction_sb_sLdL::synapse0x1b418b0() {
   return (neuron0x1b385b0()*-0.00231943);
}

double NNfunction_sb_sLdL::synapse0x1b418f0() {
   return (neuron0x1b388f0()*0.0116553);
}

double NNfunction_sb_sLdL::synapse0x1b41930() {
   return (neuron0x1b38c30()*-0.00137221);
}

double NNfunction_sb_sLdL::synapse0x1b41970() {
   return (neuron0x1b38f70()*0.0139818);
}

double NNfunction_sb_sLdL::synapse0x1b419b0() {
   return (neuron0x1b392b0()*0.00515207);
}

double NNfunction_sb_sLdL::synapse0x1b419f0() {
   return (neuron0x1b395f0()*0.000490917);
}

double NNfunction_sb_sLdL::synapse0x1b41a30() {
   return (neuron0x1b39930()*0.700352);
}

double NNfunction_sb_sLdL::synapse0x1b41a70() {
   return (neuron0x1b39c70()*-1.65899);
}

double NNfunction_sb_sLdL::synapse0x1b41ab0() {
   return (neuron0x1b39fb0()*0.0121005);
}

double NNfunction_sb_sLdL::synapse0x1b41af0() {
   return (neuron0x1b3a2f0()*-0.00661729);
}

double NNfunction_sb_sLdL::synapse0x1b41b30() {
   return (neuron0x1b3a630()*-0.0228372);
}

double NNfunction_sb_sLdL::synapse0x1b414b0() {
   return (neuron0x1b3a970()*-0.00474357);
}

double NNfunction_sb_sLdL::synapse0x1b414f0() {
   return (neuron0x1b3aed0()*0.00272807);
}

double NNfunction_sb_sLdL::synapse0x1b41c80() {
   return (neuron0x1b3b0f0()*0.00588019);
}

double NNfunction_sb_sLdL::synapse0x1b41cc0() {
   return (neuron0x1b3b430()*0.0289964);
}

double NNfunction_sb_sLdL::synapse0x1b41d00() {
   return (neuron0x1b3b770()*0.00338068);
}

double NNfunction_sb_sLdL::synapse0x1b41d40() {
   return (neuron0x1b3bab0()*-0.00160438);
}

double NNfunction_sb_sLdL::synapse0x1b41d80() {
   return (neuron0x1b3bdf0()*0.00484576);
}

double NNfunction_sb_sLdL::synapse0x1b41dc0() {
   return (neuron0x1b3c130()*0.00236996);
}

double NNfunction_sb_sLdL::synapse0x1b42140() {
   return (neuron0x1b37570()*0.043);
}

double NNfunction_sb_sLdL::synapse0x1b42180() {
   return (neuron0x1b378b0()*-0.199469);
}

double NNfunction_sb_sLdL::synapse0x1b421c0() {
   return (neuron0x1b37bf0()*0.0216997);
}

double NNfunction_sb_sLdL::synapse0x1b42200() {
   return (neuron0x1b37f30()*1.17396);
}

double NNfunction_sb_sLdL::synapse0x1b42240() {
   return (neuron0x1b38270()*-0.479827);
}

double NNfunction_sb_sLdL::synapse0x1b42280() {
   return (neuron0x1b385b0()*0.196724);
}

double NNfunction_sb_sLdL::synapse0x1b422c0() {
   return (neuron0x1b388f0()*0.379112);
}

double NNfunction_sb_sLdL::synapse0x1b42300() {
   return (neuron0x1b38c30()*0.420662);
}

double NNfunction_sb_sLdL::synapse0x1b42340() {
   return (neuron0x1b38f70()*-0.177733);
}

double NNfunction_sb_sLdL::synapse0x1b42380() {
   return (neuron0x1b392b0()*-0.553789);
}

double NNfunction_sb_sLdL::synapse0x1b423c0() {
   return (neuron0x1b395f0()*0.237833);
}

double NNfunction_sb_sLdL::synapse0x1b42400() {
   return (neuron0x1b39930()*1.21019);
}

double NNfunction_sb_sLdL::synapse0x1b42440() {
   return (neuron0x1b39c70()*-0.0099344);
}

double NNfunction_sb_sLdL::synapse0x1b42480() {
   return (neuron0x1b39fb0()*0.152854);
}

double NNfunction_sb_sLdL::synapse0x1b424c0() {
   return (neuron0x1b3a2f0()*0.506989);
}

double NNfunction_sb_sLdL::synapse0x1b42500() {
   return (neuron0x1b3a630()*0.0271508);
}

double NNfunction_sb_sLdL::synapse0x1b41f90() {
   return (neuron0x1b3a970()*0.170075);
}

double NNfunction_sb_sLdL::synapse0x1b41fd0() {
   return (neuron0x1b3aed0()*0.221159);
}

double NNfunction_sb_sLdL::synapse0x1b42650() {
   return (neuron0x1b3b0f0()*-0.332804);
}

double NNfunction_sb_sLdL::synapse0x1b42690() {
   return (neuron0x1b3b430()*-0.042404);
}

double NNfunction_sb_sLdL::synapse0x1b426d0() {
   return (neuron0x1b3b770()*-0.264339);
}

double NNfunction_sb_sLdL::synapse0x1b42710() {
   return (neuron0x1b3bab0()*0.340094);
}

double NNfunction_sb_sLdL::synapse0x1b42750() {
   return (neuron0x1b3bdf0()*0.159625);
}

double NNfunction_sb_sLdL::synapse0x1b42790() {
   return (neuron0x1b3c130()*0.0784004);
}

double NNfunction_sb_sLdL::synapse0x1b42b10() {
   return (neuron0x1b37570()*-1.2062);
}

double NNfunction_sb_sLdL::synapse0x1b42b50() {
   return (neuron0x1b378b0()*0.0233169);
}

double NNfunction_sb_sLdL::synapse0x1b42b90() {
   return (neuron0x1b37bf0()*-0.834247);
}

double NNfunction_sb_sLdL::synapse0x1b42bd0() {
   return (neuron0x1b37f30()*-0.154207);
}

double NNfunction_sb_sLdL::synapse0x1b42c10() {
   return (neuron0x1b38270()*-0.203906);
}

double NNfunction_sb_sLdL::synapse0x1b42c50() {
   return (neuron0x1b385b0()*-0.0695577);
}

double NNfunction_sb_sLdL::synapse0x1b42c90() {
   return (neuron0x1b388f0()*-1.12215);
}

double NNfunction_sb_sLdL::synapse0x1b42cd0() {
   return (neuron0x1b38c30()*-0.798894);
}

double NNfunction_sb_sLdL::synapse0x1b42d10() {
   return (neuron0x1b38f70()*0.728194);
}

double NNfunction_sb_sLdL::synapse0x1b42d50() {
   return (neuron0x1b392b0()*0.621368);
}

double NNfunction_sb_sLdL::synapse0x1b42d90() {
   return (neuron0x1b395f0()*0.103264);
}

double NNfunction_sb_sLdL::synapse0x1b42dd0() {
   return (neuron0x1b39930()*-0.922688);
}

double NNfunction_sb_sLdL::synapse0x1b42e10() {
   return (neuron0x1b39c70()*-0.123684);
}

double NNfunction_sb_sLdL::synapse0x1b42e50() {
   return (neuron0x1b39fb0()*-0.44506);
}

double NNfunction_sb_sLdL::synapse0x1b42e90() {
   return (neuron0x1b3a2f0()*-0.434626);
}

double NNfunction_sb_sLdL::synapse0x1b42ed0() {
   return (neuron0x1b3a630()*0.128763);
}

double NNfunction_sb_sLdL::synapse0x1b42960() {
   return (neuron0x1b3a970()*-0.666318);
}

double NNfunction_sb_sLdL::synapse0x1b429a0() {
   return (neuron0x1b3aed0()*-0.0437854);
}

double NNfunction_sb_sLdL::synapse0x1b3f730() {
   return (neuron0x1b3b0f0()*-1.21532);
}

double NNfunction_sb_sLdL::synapse0x1b3f770() {
   return (neuron0x1b3b430()*0.0643142);
}

double NNfunction_sb_sLdL::synapse0x1b3f7b0() {
   return (neuron0x1b3b770()*0.0848067);
}

double NNfunction_sb_sLdL::synapse0x1b3f7f0() {
   return (neuron0x1b3bab0()*-0.02414);
}

double NNfunction_sb_sLdL::synapse0x1b3f830() {
   return (neuron0x1b3bdf0()*-0.326924);
}

double NNfunction_sb_sLdL::synapse0x1b3f870() {
   return (neuron0x1b3c130()*-0.0881485);
}

double NNfunction_sb_sLdL::synapse0x1b3fbf0() {
   return (neuron0x1b37570()*0.431697);
}

double NNfunction_sb_sLdL::synapse0x1b3fc30() {
   return (neuron0x1b378b0()*-0.604721);
}

double NNfunction_sb_sLdL::synapse0x1b3fc70() {
   return (neuron0x1b37bf0()*-0.865987);
}

double NNfunction_sb_sLdL::synapse0x1b3fcb0() {
   return (neuron0x1b37f30()*0.0132449);
}

double NNfunction_sb_sLdL::synapse0x1b3fcf0() {
   return (neuron0x1b38270()*-0.209663);
}

double NNfunction_sb_sLdL::synapse0x1b3fd30() {
   return (neuron0x1b385b0()*0.260055);
}

double NNfunction_sb_sLdL::synapse0x1b3fd70() {
   return (neuron0x1b388f0()*0.0160843);
}

double NNfunction_sb_sLdL::synapse0x1b3fdb0() {
   return (neuron0x1b38c30()*-1.08491);
}

double NNfunction_sb_sLdL::synapse0x1b3fdf0() {
   return (neuron0x1b38f70()*-0.952297);
}

double NNfunction_sb_sLdL::synapse0x1b3fe30() {
   return (neuron0x1b392b0()*-0.0739914);
}

double NNfunction_sb_sLdL::synapse0x1b3fe70() {
   return (neuron0x1b395f0()*0.269171);
}

double NNfunction_sb_sLdL::synapse0x1b3feb0() {
   return (neuron0x1b39930()*0.449235);
}

double NNfunction_sb_sLdL::synapse0x1b3fef0() {
   return (neuron0x1b39c70()*0.148173);
}

double NNfunction_sb_sLdL::synapse0x1b44030() {
   return (neuron0x1b39fb0()*-0.213316);
}

double NNfunction_sb_sLdL::synapse0x1b44070() {
   return (neuron0x1b3a2f0()*0.566721);
}

double NNfunction_sb_sLdL::synapse0x1b440b0() {
   return (neuron0x1b3a630()*-0.514304);
}

double NNfunction_sb_sLdL::synapse0x1b3fa40() {
   return (neuron0x1b3a970()*-0.450306);
}

double NNfunction_sb_sLdL::synapse0x1b3fa80() {
   return (neuron0x1b3aed0()*-0.116127);
}

double NNfunction_sb_sLdL::synapse0x1b44200() {
   return (neuron0x1b3b0f0()*0.206812);
}

double NNfunction_sb_sLdL::synapse0x1b44240() {
   return (neuron0x1b3b430()*-0.727802);
}

double NNfunction_sb_sLdL::synapse0x1b44280() {
   return (neuron0x1b3b770()*1.39772);
}

double NNfunction_sb_sLdL::synapse0x1b442c0() {
   return (neuron0x1b3bab0()*0.214476);
}

double NNfunction_sb_sLdL::synapse0x1b44300() {
   return (neuron0x1b3bdf0()*0.0374254);
}

double NNfunction_sb_sLdL::synapse0x1b44340() {
   return (neuron0x1b3c130()*-0.215985);
}

double NNfunction_sb_sLdL::synapse0x1b446c0() {
   return (neuron0x1b37570()*1.25025);
}

double NNfunction_sb_sLdL::synapse0x1b44700() {
   return (neuron0x1b378b0()*0.0594276);
}

double NNfunction_sb_sLdL::synapse0x1b44740() {
   return (neuron0x1b37bf0()*-0.598714);
}

double NNfunction_sb_sLdL::synapse0x1b44780() {
   return (neuron0x1b37f30()*-0.12827);
}

double NNfunction_sb_sLdL::synapse0x1b447c0() {
   return (neuron0x1b38270()*-0.657301);
}

double NNfunction_sb_sLdL::synapse0x1b44800() {
   return (neuron0x1b385b0()*-0.559137);
}

double NNfunction_sb_sLdL::synapse0x1b44840() {
   return (neuron0x1b388f0()*0.0890334);
}

double NNfunction_sb_sLdL::synapse0x1b44880() {
   return (neuron0x1b38c30()*0.460053);
}

double NNfunction_sb_sLdL::synapse0x1b448c0() {
   return (neuron0x1b38f70()*0.514051);
}

double NNfunction_sb_sLdL::synapse0x1b44900() {
   return (neuron0x1b392b0()*0.0715683);
}

double NNfunction_sb_sLdL::synapse0x1b44940() {
   return (neuron0x1b395f0()*0.0587181);
}

double NNfunction_sb_sLdL::synapse0x1b44980() {
   return (neuron0x1b39930()*0.565176);
}

double NNfunction_sb_sLdL::synapse0x1b449c0() {
   return (neuron0x1b39c70()*0.354019);
}

double NNfunction_sb_sLdL::synapse0x1b44a00() {
   return (neuron0x1b39fb0()*-0.241599);
}

double NNfunction_sb_sLdL::synapse0x1b44a40() {
   return (neuron0x1b3a2f0()*0.199385);
}

double NNfunction_sb_sLdL::synapse0x1b44a80() {
   return (neuron0x1b3a630()*0.203922);
}

double NNfunction_sb_sLdL::synapse0x1b44510() {
   return (neuron0x1b3a970()*0.220546);
}

double NNfunction_sb_sLdL::synapse0x1b44550() {
   return (neuron0x1b3aed0()*0.690388);
}

double NNfunction_sb_sLdL::synapse0x1b44bd0() {
   return (neuron0x1b3b0f0()*-0.300932);
}

double NNfunction_sb_sLdL::synapse0x1b44c10() {
   return (neuron0x1b3b430()*-0.305351);
}

double NNfunction_sb_sLdL::synapse0x1b44c50() {
   return (neuron0x1b3b770()*0.157057);
}

double NNfunction_sb_sLdL::synapse0x1b44c90() {
   return (neuron0x1b3bab0()*0.343227);
}

double NNfunction_sb_sLdL::synapse0x1b44cd0() {
   return (neuron0x1b3bdf0()*0.055192);
}

double NNfunction_sb_sLdL::synapse0x1b44d10() {
   return (neuron0x1b3c130()*0.0375119);
}

double NNfunction_sb_sLdL::synapse0x1b45090() {
   return (neuron0x1b37570()*0.37171);
}

double NNfunction_sb_sLdL::synapse0x1b450d0() {
   return (neuron0x1b378b0()*-0.262414);
}

double NNfunction_sb_sLdL::synapse0x1b45110() {
   return (neuron0x1b37bf0()*-0.268132);
}

double NNfunction_sb_sLdL::synapse0x1b45150() {
   return (neuron0x1b37f30()*-0.249997);
}

double NNfunction_sb_sLdL::synapse0x1b45190() {
   return (neuron0x1b38270()*0.295939);
}

double NNfunction_sb_sLdL::synapse0x1b451d0() {
   return (neuron0x1b385b0()*-0.177098);
}

double NNfunction_sb_sLdL::synapse0x1b45210() {
   return (neuron0x1b388f0()*-0.535822);
}

double NNfunction_sb_sLdL::synapse0x1b45250() {
   return (neuron0x1b38c30()*1.04131);
}

double NNfunction_sb_sLdL::synapse0x1b45290() {
   return (neuron0x1b38f70()*0.389023);
}

double NNfunction_sb_sLdL::synapse0x1b452d0() {
   return (neuron0x1b392b0()*-0.0473457);
}

double NNfunction_sb_sLdL::synapse0x1b45310() {
   return (neuron0x1b395f0()*-0.824285);
}

double NNfunction_sb_sLdL::synapse0x1b45350() {
   return (neuron0x1b39930()*0.492106);
}

double NNfunction_sb_sLdL::synapse0x1b45390() {
   return (neuron0x1b39c70()*1.41474);
}

double NNfunction_sb_sLdL::synapse0x1b453d0() {
   return (neuron0x1b39fb0()*0.248643);
}

double NNfunction_sb_sLdL::synapse0x1b45410() {
   return (neuron0x1b3a2f0()*-0.884169);
}

double NNfunction_sb_sLdL::synapse0x1b45450() {
   return (neuron0x1b3a630()*-0.422935);
}

double NNfunction_sb_sLdL::synapse0x1b44ee0() {
   return (neuron0x1b3a970()*0.428746);
}

double NNfunction_sb_sLdL::synapse0x1b44f20() {
   return (neuron0x1b3aed0()*0.269711);
}

double NNfunction_sb_sLdL::synapse0x1b455a0() {
   return (neuron0x1b3b0f0()*-0.906955);
}

double NNfunction_sb_sLdL::synapse0x1b455e0() {
   return (neuron0x1b3b430()*0.230619);
}

double NNfunction_sb_sLdL::synapse0x1b45620() {
   return (neuron0x1b3b770()*-0.568388);
}

double NNfunction_sb_sLdL::synapse0x1b45660() {
   return (neuron0x1b3bab0()*-0.065515);
}

double NNfunction_sb_sLdL::synapse0x1b456a0() {
   return (neuron0x1b3bdf0()*0.14484);
}

double NNfunction_sb_sLdL::synapse0x1b456e0() {
   return (neuron0x1b3c130()*-0.306194);
}

double NNfunction_sb_sLdL::synapse0x1b45a60() {
   return (neuron0x1b37570()*-0.243086);
}

double NNfunction_sb_sLdL::synapse0x1b45aa0() {
   return (neuron0x1b378b0()*-0.116338);
}

double NNfunction_sb_sLdL::synapse0x1b45ae0() {
   return (neuron0x1b37bf0()*0.59612);
}

double NNfunction_sb_sLdL::synapse0x1b45b20() {
   return (neuron0x1b37f30()*0.0674588);
}

double NNfunction_sb_sLdL::synapse0x1b45b60() {
   return (neuron0x1b38270()*0.547035);
}

double NNfunction_sb_sLdL::synapse0x1b45ba0() {
   return (neuron0x1b385b0()*-0.302077);
}

double NNfunction_sb_sLdL::synapse0x1b45be0() {
   return (neuron0x1b388f0()*0.0810704);
}

double NNfunction_sb_sLdL::synapse0x1b45c20() {
   return (neuron0x1b38c30()*0.188772);
}

double NNfunction_sb_sLdL::synapse0x1b45c60() {
   return (neuron0x1b38f70()*-0.379198);
}

double NNfunction_sb_sLdL::synapse0x1b45ca0() {
   return (neuron0x1b392b0()*-0.149238);
}

double NNfunction_sb_sLdL::synapse0x1b45ce0() {
   return (neuron0x1b395f0()*0.26366);
}

double NNfunction_sb_sLdL::synapse0x1b45d20() {
   return (neuron0x1b39930()*-1.73414);
}

double NNfunction_sb_sLdL::synapse0x1b45d60() {
   return (neuron0x1b39c70()*-2.30349);
}

double NNfunction_sb_sLdL::synapse0x1b45da0() {
   return (neuron0x1b39fb0()*0.113111);
}

double NNfunction_sb_sLdL::synapse0x1b45de0() {
   return (neuron0x1b3a2f0()*-0.463627);
}

double NNfunction_sb_sLdL::synapse0x1b45e20() {
   return (neuron0x1b3a630()*0.0362769);
}

double NNfunction_sb_sLdL::synapse0x1b458b0() {
   return (neuron0x1b3a970()*-0.575795);
}

double NNfunction_sb_sLdL::synapse0x1b458f0() {
   return (neuron0x1b3aed0()*0.197196);
}

double NNfunction_sb_sLdL::synapse0x1b45f70() {
   return (neuron0x1b3b0f0()*-0.724071);
}

double NNfunction_sb_sLdL::synapse0x1b45fb0() {
   return (neuron0x1b3b430()*-0.344509);
}

double NNfunction_sb_sLdL::synapse0x1b45ff0() {
   return (neuron0x1b3b770()*0.0997575);
}

double NNfunction_sb_sLdL::synapse0x1b46030() {
   return (neuron0x1b3bab0()*0.285212);
}

double NNfunction_sb_sLdL::synapse0x1b46070() {
   return (neuron0x1b3bdf0()*0.00616185);
}

double NNfunction_sb_sLdL::synapse0x1b460b0() {
   return (neuron0x1b3c130()*-0.334297);
}

double NNfunction_sb_sLdL::synapse0x1b46430() {
   return (neuron0x1b37570()*0.472995);
}

double NNfunction_sb_sLdL::synapse0x1b37790() {
   return (neuron0x1b378b0()*-0.701014);
}

double NNfunction_sb_sLdL::synapse0x1b377d0() {
   return (neuron0x1b37bf0()*-0.706469);
}

double NNfunction_sb_sLdL::synapse0x1b37ad0() {
   return (neuron0x1b37f30()*0.0465545);
}

double NNfunction_sb_sLdL::synapse0x1b37b10() {
   return (neuron0x1b38270()*-0.821677);
}

double NNfunction_sb_sLdL::synapse0x1b37e10() {
   return (neuron0x1b385b0()*-0.00213233);
}

double NNfunction_sb_sLdL::synapse0x1b37e50() {
   return (neuron0x1b388f0()*0.28374);
}

double NNfunction_sb_sLdL::synapse0x1b38150() {
   return (neuron0x1b38c30()*-0.0643147);
}

double NNfunction_sb_sLdL::synapse0x1b38190() {
   return (neuron0x1b38f70()*0.615884);
}

double NNfunction_sb_sLdL::synapse0x1b38490() {
   return (neuron0x1b392b0()*-0.723903);
}

double NNfunction_sb_sLdL::synapse0x1b384d0() {
   return (neuron0x1b395f0()*0.288157);
}

double NNfunction_sb_sLdL::synapse0x1b387d0() {
   return (neuron0x1b39930()*0.176447);
}

double NNfunction_sb_sLdL::synapse0x1b38810() {
   return (neuron0x1b39c70()*0.394728);
}

double NNfunction_sb_sLdL::synapse0x1b38b10() {
   return (neuron0x1b39fb0()*0.156306);
}

double NNfunction_sb_sLdL::synapse0x1b38b50() {
   return (neuron0x1b3a2f0()*0.645633);
}

double NNfunction_sb_sLdL::synapse0x1b38e50() {
   return (neuron0x1b3a630()*-1.18529);
}

double NNfunction_sb_sLdL::synapse0x1b38e90() {
   return (neuron0x1b3a970()*0.707449);
}

double NNfunction_sb_sLdL::synapse0x1b39190() {
   return (neuron0x1b3aed0()*0.0769);
}

double NNfunction_sb_sLdL::synapse0x1b391d0() {
   return (neuron0x1b3b0f0()*1.37132);
}

double NNfunction_sb_sLdL::synapse0x1b394d0() {
   return (neuron0x1b3b430()*0.0298943);
}

double NNfunction_sb_sLdL::synapse0x1b39510() {
   return (neuron0x1b3b770()*-0.226467);
}

double NNfunction_sb_sLdL::synapse0x1b39810() {
   return (neuron0x1b3bab0()*-0.261198);
}

double NNfunction_sb_sLdL::synapse0x1b39850() {
   return (neuron0x1b3bdf0()*-0.37982);
}

double NNfunction_sb_sLdL::synapse0x1b39b50() {
   return (neuron0x1b3c130()*1.14827);
}

double NNfunction_sb_sLdL::synapse0x1b39b90() {
   return (neuron0x1b37570()*0.00477334);
}

double NNfunction_sb_sLdL::synapse0x1b3a850() {
   return (neuron0x1b378b0()*0.00358795);
}

double NNfunction_sb_sLdL::synapse0x1b3a890() {
   return (neuron0x1b37bf0()*0.00254905);
}

double NNfunction_sb_sLdL::synapse0x1b46280() {
   return (neuron0x1b37f30()*7.04146);
}

double NNfunction_sb_sLdL::synapse0x1b462c0() {
   return (neuron0x1b38270()*-0.000495204);
}

double NNfunction_sb_sLdL::synapse0x1b3ab90() {
   return (neuron0x1b385b0()*-0.00365288);
}

double NNfunction_sb_sLdL::synapse0x1b3abd0() {
   return (neuron0x1b388f0()*0.0076159);
}

double NNfunction_sb_sLdL::synapse0x18e8b60() {
   return (neuron0x1b38c30()*0.00629059);
}

double NNfunction_sb_sLdL::synapse0x18e8ba0() {
   return (neuron0x1b38f70()*0.0215467);
}

double NNfunction_sb_sLdL::synapse0x1b3b310() {
   return (neuron0x1b392b0()*0.00275327);
}

double NNfunction_sb_sLdL::synapse0x1b3b350() {
   return (neuron0x1b395f0()*0.00395516);
}

double NNfunction_sb_sLdL::synapse0x1b3b650() {
   return (neuron0x1b39930()*0.0234875);
}

double NNfunction_sb_sLdL::synapse0x1b3b690() {
   return (neuron0x1b39c70()*0.098645);
}

double NNfunction_sb_sLdL::synapse0x1b3b990() {
   return (neuron0x1b39fb0()*0.00524318);
}

double NNfunction_sb_sLdL::synapse0x1b3b9d0() {
   return (neuron0x1b3a2f0()*-0.0265981);
}

double NNfunction_sb_sLdL::synapse0x1b3bcd0() {
   return (neuron0x1b3a630()*-0.0282725);
}

double NNfunction_sb_sLdL::synapse0x1b3bd10() {
   return (neuron0x1b3a970()*-0.00138404);
}

double NNfunction_sb_sLdL::synapse0x1b3c010() {
   return (neuron0x1b3aed0()*-0.0196328);
}

double NNfunction_sb_sLdL::synapse0x1b3c050() {
   return (neuron0x1b3b0f0()*-0.00857464);
}

double NNfunction_sb_sLdL::synapse0x1b3c350() {
   return (neuron0x1b3b430()*0.0156205);
}

double NNfunction_sb_sLdL::synapse0x1b3c390() {
   return (neuron0x1b3b770()*0.0142396);
}

double NNfunction_sb_sLdL::synapse0x1b39e90() {
   return (neuron0x1b3bab0()*0.0137521);
}

double NNfunction_sb_sLdL::synapse0x1b39ed0() {
   return (neuron0x1b3bdf0()*0.000315046);
}

double NNfunction_sb_sLdL::synapse0x1b481a0() {
   return (neuron0x1b3c130()*-4.96687e-05);
}

double NNfunction_sb_sLdL::synapse0x1b48520() {
   return (neuron0x1b37570()*0.653299);
}

double NNfunction_sb_sLdL::synapse0x1b48560() {
   return (neuron0x1b378b0()*0.519413);
}

double NNfunction_sb_sLdL::synapse0x1b485a0() {
   return (neuron0x1b37bf0()*-0.366156);
}

double NNfunction_sb_sLdL::synapse0x1b485e0() {
   return (neuron0x1b37f30()*-0.034778);
}

double NNfunction_sb_sLdL::synapse0x1b48620() {
   return (neuron0x1b38270()*0.670413);
}

double NNfunction_sb_sLdL::synapse0x1b48660() {
   return (neuron0x1b385b0()*0.514303);
}

double NNfunction_sb_sLdL::synapse0x1b486a0() {
   return (neuron0x1b388f0()*-0.364129);
}

double NNfunction_sb_sLdL::synapse0x1b486e0() {
   return (neuron0x1b38c30()*-0.512623);
}

double NNfunction_sb_sLdL::synapse0x1b48720() {
   return (neuron0x1b38f70()*-0.320005);
}

double NNfunction_sb_sLdL::synapse0x1b48760() {
   return (neuron0x1b392b0()*-0.14333);
}

double NNfunction_sb_sLdL::synapse0x1b487a0() {
   return (neuron0x1b395f0()*-0.395098);
}

double NNfunction_sb_sLdL::synapse0x1b487e0() {
   return (neuron0x1b39930()*0.818252);
}

double NNfunction_sb_sLdL::synapse0x1b48820() {
   return (neuron0x1b39c70()*0.190007);
}

double NNfunction_sb_sLdL::synapse0x1b48860() {
   return (neuron0x1b39fb0()*-0.318187);
}

double NNfunction_sb_sLdL::synapse0x1b488a0() {
   return (neuron0x1b3a2f0()*0.276414);
}

double NNfunction_sb_sLdL::synapse0x1b488e0() {
   return (neuron0x1b3a630()*-0.805678);
}

double NNfunction_sb_sLdL::synapse0x1b48370() {
   return (neuron0x1b3a970()*-0.41151);
}

double NNfunction_sb_sLdL::synapse0x1b483b0() {
   return (neuron0x1b3aed0()*-0.428595);
}

double NNfunction_sb_sLdL::synapse0x1b48a30() {
   return (neuron0x1b3b0f0()*-0.0267974);
}

double NNfunction_sb_sLdL::synapse0x1b48a70() {
   return (neuron0x1b3b430()*0.0821046);
}

double NNfunction_sb_sLdL::synapse0x1b48ab0() {
   return (neuron0x1b3b770()*0.104929);
}

double NNfunction_sb_sLdL::synapse0x1b48af0() {
   return (neuron0x1b3bab0()*-0.161312);
}

double NNfunction_sb_sLdL::synapse0x1b48b30() {
   return (neuron0x1b3bdf0()*0.433725);
}

double NNfunction_sb_sLdL::synapse0x1b48b70() {
   return (neuron0x1b3c130()*-0.375281);
}

double NNfunction_sb_sLdL::synapse0x1b48ef0() {
   return (neuron0x1b37570()*0.402838);
}

double NNfunction_sb_sLdL::synapse0x1b48f30() {
   return (neuron0x1b378b0()*0.250476);
}

double NNfunction_sb_sLdL::synapse0x1b48f70() {
   return (neuron0x1b37bf0()*-0.172743);
}

double NNfunction_sb_sLdL::synapse0x1b48fb0() {
   return (neuron0x1b37f30()*0.204766);
}

double NNfunction_sb_sLdL::synapse0x1b48ff0() {
   return (neuron0x1b38270()*0.434472);
}

double NNfunction_sb_sLdL::synapse0x1b49030() {
   return (neuron0x1b385b0()*0.121063);
}

double NNfunction_sb_sLdL::synapse0x1b49070() {
   return (neuron0x1b388f0()*-0.227083);
}

double NNfunction_sb_sLdL::synapse0x1b490b0() {
   return (neuron0x1b38c30()*0.453363);
}

double NNfunction_sb_sLdL::synapse0x1b490f0() {
   return (neuron0x1b38f70()*0.149271);
}

double NNfunction_sb_sLdL::synapse0x1b49130() {
   return (neuron0x1b392b0()*0.48387);
}

double NNfunction_sb_sLdL::synapse0x1b49170() {
   return (neuron0x1b395f0()*-0.066513);
}

double NNfunction_sb_sLdL::synapse0x1b491b0() {
   return (neuron0x1b39930()*-1.77859);
}

double NNfunction_sb_sLdL::synapse0x1b491f0() {
   return (neuron0x1b39c70()*0.19019);
}

double NNfunction_sb_sLdL::synapse0x1b49230() {
   return (neuron0x1b39fb0()*0.208341);
}

double NNfunction_sb_sLdL::synapse0x1b49270() {
   return (neuron0x1b3a2f0()*0.213727);
}

double NNfunction_sb_sLdL::synapse0x1b492b0() {
   return (neuron0x1b3a630()*-0.285534);
}

double NNfunction_sb_sLdL::synapse0x1b48d40() {
   return (neuron0x1b3a970()*0.707031);
}

double NNfunction_sb_sLdL::synapse0x1b48d80() {
   return (neuron0x1b3aed0()*-0.0742442);
}

double NNfunction_sb_sLdL::synapse0x1b49400() {
   return (neuron0x1b3b0f0()*-0.219058);
}

double NNfunction_sb_sLdL::synapse0x1b49440() {
   return (neuron0x1b3b430()*-0.836069);
}

double NNfunction_sb_sLdL::synapse0x1b49480() {
   return (neuron0x1b3b770()*0.196677);
}

double NNfunction_sb_sLdL::synapse0x1b494c0() {
   return (neuron0x1b3bab0()*0.460605);
}

double NNfunction_sb_sLdL::synapse0x1b49500() {
   return (neuron0x1b3bdf0()*0.56313);
}

double NNfunction_sb_sLdL::synapse0x1b49540() {
   return (neuron0x1b3c130()*0.00459331);
}

double NNfunction_sb_sLdL::synapse0x1b498c0() {
   return (neuron0x1b37570()*-0.00159096);
}

double NNfunction_sb_sLdL::synapse0x1b49900() {
   return (neuron0x1b378b0()*0.00751695);
}

double NNfunction_sb_sLdL::synapse0x1b49940() {
   return (neuron0x1b37bf0()*0.0185754);
}

double NNfunction_sb_sLdL::synapse0x1b49980() {
   return (neuron0x1b37f30()*-2.271);
}

double NNfunction_sb_sLdL::synapse0x1b499c0() {
   return (neuron0x1b38270()*-0.00357691);
}

double NNfunction_sb_sLdL::synapse0x1b49a00() {
   return (neuron0x1b385b0()*-0.00101037);
}

double NNfunction_sb_sLdL::synapse0x1b49a40() {
   return (neuron0x1b388f0()*-5.3634e-05);
}

double NNfunction_sb_sLdL::synapse0x1b49a80() {
   return (neuron0x1b38c30()*0.00285337);
}

double NNfunction_sb_sLdL::synapse0x1b49ac0() {
   return (neuron0x1b38f70()*0.0101476);
}

double NNfunction_sb_sLdL::synapse0x1b49b00() {
   return (neuron0x1b392b0()*0.0053642);
}

double NNfunction_sb_sLdL::synapse0x1b49b40() {
   return (neuron0x1b395f0()*-0.00144996);
}

double NNfunction_sb_sLdL::synapse0x1b49b80() {
   return (neuron0x1b39930()*-0.189005);
}

double NNfunction_sb_sLdL::synapse0x1b49bc0() {
   return (neuron0x1b39c70()*-0.169319);
}

double NNfunction_sb_sLdL::synapse0x1b49c00() {
   return (neuron0x1b39fb0()*-0.000168464);
}

double NNfunction_sb_sLdL::synapse0x1b49c40() {
   return (neuron0x1b3a2f0()*-0.00265843);
}

double NNfunction_sb_sLdL::synapse0x1b49c80() {
   return (neuron0x1b3a630()*-0.000596567);
}

double NNfunction_sb_sLdL::synapse0x1b49710() {
   return (neuron0x1b3a970()*-0.00685358);
}

double NNfunction_sb_sLdL::synapse0x1b49750() {
   return (neuron0x1b3aed0()*0.000442289);
}

double NNfunction_sb_sLdL::synapse0x1b49dd0() {
   return (neuron0x1b3b0f0()*0.00365131);
}

double NNfunction_sb_sLdL::synapse0x1b49e10() {
   return (neuron0x1b3b430()*0.01474);
}

double NNfunction_sb_sLdL::synapse0x1b49e50() {
   return (neuron0x1b3b770()*0.00890142);
}

double NNfunction_sb_sLdL::synapse0x1b49e90() {
   return (neuron0x1b3bab0()*0.000717382);
}

double NNfunction_sb_sLdL::synapse0x1b49ed0() {
   return (neuron0x1b3bdf0()*-0.00424375);
}

double NNfunction_sb_sLdL::synapse0x1b49f10() {
   return (neuron0x1b3c130()*-0.00081498);
}

double NNfunction_sb_sLdL::synapse0x1b4a290() {
   return (neuron0x1b37570()*0.076093);
}

double NNfunction_sb_sLdL::synapse0x1b4a2d0() {
   return (neuron0x1b378b0()*0.69458);
}

double NNfunction_sb_sLdL::synapse0x1b4a310() {
   return (neuron0x1b37bf0()*0.029092);
}

double NNfunction_sb_sLdL::synapse0x1b4a350() {
   return (neuron0x1b37f30()*0.431736);
}

double NNfunction_sb_sLdL::synapse0x1b4a390() {
   return (neuron0x1b38270()*0.474644);
}

double NNfunction_sb_sLdL::synapse0x1b4a3d0() {
   return (neuron0x1b385b0()*0.641622);
}

double NNfunction_sb_sLdL::synapse0x1b4a410() {
   return (neuron0x1b388f0()*-0.702427);
}

double NNfunction_sb_sLdL::synapse0x1b4a450() {
   return (neuron0x1b38c30()*0.0507562);
}

double NNfunction_sb_sLdL::synapse0x1b4a490() {
   return (neuron0x1b38f70()*0.469049);
}

double NNfunction_sb_sLdL::synapse0x1b4a4d0() {
   return (neuron0x1b392b0()*1.16977);
}

double NNfunction_sb_sLdL::synapse0x1b4a510() {
   return (neuron0x1b395f0()*-0.553006);
}

double NNfunction_sb_sLdL::synapse0x1b4a550() {
   return (neuron0x1b39930()*-0.756338);
}

double NNfunction_sb_sLdL::synapse0x1b4a590() {
   return (neuron0x1b39c70()*-0.495471);
}

double NNfunction_sb_sLdL::synapse0x1b4a5d0() {
   return (neuron0x1b39fb0()*0.257749);
}

double NNfunction_sb_sLdL::synapse0x1b4a610() {
   return (neuron0x1b3a2f0()*-0.362033);
}

double NNfunction_sb_sLdL::synapse0x1b4a650() {
   return (neuron0x1b3a630()*-0.105493);
}

double NNfunction_sb_sLdL::synapse0x1b4a0e0() {
   return (neuron0x1b3a970()*0.441302);
}

double NNfunction_sb_sLdL::synapse0x1b4a120() {
   return (neuron0x1b3aed0()*0.837505);
}

double NNfunction_sb_sLdL::synapse0x1b4a7a0() {
   return (neuron0x1b3b0f0()*0.436719);
}

double NNfunction_sb_sLdL::synapse0x1b4a7e0() {
   return (neuron0x1b3b430()*-0.0519842);
}

double NNfunction_sb_sLdL::synapse0x1b4a820() {
   return (neuron0x1b3b770()*0.505414);
}

double NNfunction_sb_sLdL::synapse0x1b4a860() {
   return (neuron0x1b3bab0()*0.0716746);
}

double NNfunction_sb_sLdL::synapse0x1b4a8a0() {
   return (neuron0x1b3bdf0()*0.504325);
}

double NNfunction_sb_sLdL::synapse0x1b4a8e0() {
   return (neuron0x1b3c130()*0.292283);
}

double NNfunction_sb_sLdL::synapse0x1b4ac60() {
   return (neuron0x1b37570()*0.560642);
}

double NNfunction_sb_sLdL::synapse0x1b4aca0() {
   return (neuron0x1b378b0()*0.248724);
}

double NNfunction_sb_sLdL::synapse0x1b4ace0() {
   return (neuron0x1b37bf0()*-0.128598);
}

double NNfunction_sb_sLdL::synapse0x1b4ad20() {
   return (neuron0x1b37f30()*0.162843);
}

double NNfunction_sb_sLdL::synapse0x1b4ad60() {
   return (neuron0x1b38270()*0.429737);
}

double NNfunction_sb_sLdL::synapse0x1b4ada0() {
   return (neuron0x1b385b0()*0.638418);
}

double NNfunction_sb_sLdL::synapse0x1b4ade0() {
   return (neuron0x1b388f0()*0.804146);
}

double NNfunction_sb_sLdL::synapse0x1b4ae20() {
   return (neuron0x1b38c30()*0.543503);
}

double NNfunction_sb_sLdL::synapse0x1b4ae60() {
   return (neuron0x1b38f70()*-0.453071);
}

double NNfunction_sb_sLdL::synapse0x1b43020() {
   return (neuron0x1b392b0()*0.173086);
}

double NNfunction_sb_sLdL::synapse0x1b43060() {
   return (neuron0x1b395f0()*-0.081146);
}

double NNfunction_sb_sLdL::synapse0x1b430a0() {
   return (neuron0x1b39930()*0.362808);
}

double NNfunction_sb_sLdL::synapse0x1b430e0() {
   return (neuron0x1b39c70()*-0.0982732);
}

double NNfunction_sb_sLdL::synapse0x1b43120() {
   return (neuron0x1b39fb0()*0.552587);
}

double NNfunction_sb_sLdL::synapse0x1b43160() {
   return (neuron0x1b3a2f0()*-0.471269);
}

double NNfunction_sb_sLdL::synapse0x1b431a0() {
   return (neuron0x1b3a630()*-0.23464);
}

double NNfunction_sb_sLdL::synapse0x1b4aab0() {
   return (neuron0x1b3a970()*-0.768475);
}

double NNfunction_sb_sLdL::synapse0x1b4aaf0() {
   return (neuron0x1b3aed0()*0.225306);
}

double NNfunction_sb_sLdL::synapse0x1b432f0() {
   return (neuron0x1b3b0f0()*-0.623127);
}

double NNfunction_sb_sLdL::synapse0x1b43330() {
   return (neuron0x1b3b430()*-1.03181);
}

double NNfunction_sb_sLdL::synapse0x1b43370() {
   return (neuron0x1b3b770()*-0.0567988);
}

double NNfunction_sb_sLdL::synapse0x1b433b0() {
   return (neuron0x1b3bab0()*-1.0426);
}

double NNfunction_sb_sLdL::synapse0x1b433f0() {
   return (neuron0x1b3bdf0()*0.766952);
}

double NNfunction_sb_sLdL::synapse0x1b43430() {
   return (neuron0x1b3c130()*0.0844368);
}

double NNfunction_sb_sLdL::synapse0x1b437b0() {
   return (neuron0x1b37570()*0.00721727);
}

double NNfunction_sb_sLdL::synapse0x1b437f0() {
   return (neuron0x1b378b0()*-0.00720118);
}

double NNfunction_sb_sLdL::synapse0x1b43830() {
   return (neuron0x1b37bf0()*0.0604489);
}

double NNfunction_sb_sLdL::synapse0x1b43870() {
   return (neuron0x1b37f30()*-0.405381);
}

double NNfunction_sb_sLdL::synapse0x1b438b0() {
   return (neuron0x1b38270()*0.0189819);
}

double NNfunction_sb_sLdL::synapse0x1b438f0() {
   return (neuron0x1b385b0()*-0.0228719);
}

double NNfunction_sb_sLdL::synapse0x1b43930() {
   return (neuron0x1b388f0()*-0.0459489);
}

double NNfunction_sb_sLdL::synapse0x1b43970() {
   return (neuron0x1b38c30()*0.00284795);
}

double NNfunction_sb_sLdL::synapse0x1b439b0() {
   return (neuron0x1b38f70()*-0.000916216);
}

double NNfunction_sb_sLdL::synapse0x1b439f0() {
   return (neuron0x1b392b0()*-0.00755549);
}

double NNfunction_sb_sLdL::synapse0x1b43a30() {
   return (neuron0x1b395f0()*0.0116584);
}

double NNfunction_sb_sLdL::synapse0x1b43a70() {
   return (neuron0x1b39930()*-0.0479543);
}

double NNfunction_sb_sLdL::synapse0x1b43ab0() {
   return (neuron0x1b39c70()*-0.0704307);
}

double NNfunction_sb_sLdL::synapse0x1b43af0() {
   return (neuron0x1b39fb0()*0.112146);
}

double NNfunction_sb_sLdL::synapse0x1b43b30() {
   return (neuron0x1b3a2f0()*-0.408568);
}

double NNfunction_sb_sLdL::synapse0x1b43b70() {
   return (neuron0x1b3a630()*-0.443793);
}

double NNfunction_sb_sLdL::synapse0x1b43600() {
   return (neuron0x1b3a970()*0.123781);
}

double NNfunction_sb_sLdL::synapse0x1b43640() {
   return (neuron0x1b3aed0()*-0.406025);
}

double NNfunction_sb_sLdL::synapse0x1b43cc0() {
   return (neuron0x1b3b0f0()*-0.3986);
}

double NNfunction_sb_sLdL::synapse0x1b43d00() {
   return (neuron0x1b3b430()*0.0132294);
}

double NNfunction_sb_sLdL::synapse0x1b43d40() {
   return (neuron0x1b3b770()*-0.00995096);
}

double NNfunction_sb_sLdL::synapse0x1b43d80() {
   return (neuron0x1b3bab0()*-0.0101663);
}

double NNfunction_sb_sLdL::synapse0x1b43dc0() {
   return (neuron0x1b3bdf0()*-0.0162836);
}

double NNfunction_sb_sLdL::synapse0x1b43e00() {
   return (neuron0x1b3c130()*0.00933124);
}

double NNfunction_sb_sLdL::synapse0x1b43fd0() {
   return (neuron0x1b37570()*-0.440281);
}

double NNfunction_sb_sLdL::synapse0x1b4d060() {
   return (neuron0x1b378b0()*-0.54378);
}

double NNfunction_sb_sLdL::synapse0x1b4d0a0() {
   return (neuron0x1b37bf0()*-0.82388);
}

double NNfunction_sb_sLdL::synapse0x1b4d0e0() {
   return (neuron0x1b37f30()*0.765223);
}

double NNfunction_sb_sLdL::synapse0x1b4d120() {
   return (neuron0x1b38270()*-0.402274);
}

double NNfunction_sb_sLdL::synapse0x1b4d160() {
   return (neuron0x1b385b0()*0.238199);
}

double NNfunction_sb_sLdL::synapse0x1b4d1a0() {
   return (neuron0x1b388f0()*-0.100473);
}

double NNfunction_sb_sLdL::synapse0x1b4d1e0() {
   return (neuron0x1b38c30()*0.143655);
}

double NNfunction_sb_sLdL::synapse0x1b4d220() {
   return (neuron0x1b38f70()*-0.44038);
}

double NNfunction_sb_sLdL::synapse0x1b4d260() {
   return (neuron0x1b392b0()*0.0901022);
}

double NNfunction_sb_sLdL::synapse0x1b4d2a0() {
   return (neuron0x1b395f0()*-0.205225);
}

double NNfunction_sb_sLdL::synapse0x1b4d2e0() {
   return (neuron0x1b39930()*-0.530398);
}

double NNfunction_sb_sLdL::synapse0x1b4d320() {
   return (neuron0x1b39c70()*1.04863);
}

double NNfunction_sb_sLdL::synapse0x1b4d360() {
   return (neuron0x1b39fb0()*-0.181832);
}

double NNfunction_sb_sLdL::synapse0x1b4d3a0() {
   return (neuron0x1b3a2f0()*0.309442);
}

double NNfunction_sb_sLdL::synapse0x1b4d3e0() {
   return (neuron0x1b3a630()*0.286271);
}

double NNfunction_sb_sLdL::synapse0x1b4ceb0() {
   return (neuron0x1b3a970()*-0.114426);
}

double NNfunction_sb_sLdL::synapse0x1b4cef0() {
   return (neuron0x1b3aed0()*0.0227218);
}

double NNfunction_sb_sLdL::synapse0x1b4d530() {
   return (neuron0x1b3b0f0()*0.511358);
}

double NNfunction_sb_sLdL::synapse0x1b4d570() {
   return (neuron0x1b3b430()*0.229601);
}

double NNfunction_sb_sLdL::synapse0x1b4d5b0() {
   return (neuron0x1b3b770()*0.760299);
}

double NNfunction_sb_sLdL::synapse0x1b4d5f0() {
   return (neuron0x1b3bab0()*-0.48174);
}

double NNfunction_sb_sLdL::synapse0x1b4d630() {
   return (neuron0x1b3bdf0()*-0.0210462);
}

double NNfunction_sb_sLdL::synapse0x1b4d670() {
   return (neuron0x1b3c130()*0.046972);
}

double NNfunction_sb_sLdL::synapse0x1b4d9f0() {
   return (neuron0x1b37570()*-0.106557);
}

double NNfunction_sb_sLdL::synapse0x1b4da30() {
   return (neuron0x1b378b0()*0.00127724);
}

double NNfunction_sb_sLdL::synapse0x1b4da70() {
   return (neuron0x1b37bf0()*-1.05679);
}

double NNfunction_sb_sLdL::synapse0x1b4dab0() {
   return (neuron0x1b37f30()*-0.132774);
}

double NNfunction_sb_sLdL::synapse0x1b4daf0() {
   return (neuron0x1b38270()*-0.00149504);
}

double NNfunction_sb_sLdL::synapse0x1b4db30() {
   return (neuron0x1b385b0()*-0.466202);
}

double NNfunction_sb_sLdL::synapse0x1b4db70() {
   return (neuron0x1b388f0()*-0.177111);
}

double NNfunction_sb_sLdL::synapse0x1b4dbb0() {
   return (neuron0x1b38c30()*0.386002);
}

double NNfunction_sb_sLdL::synapse0x1b4dbf0() {
   return (neuron0x1b38f70()*0.0484392);
}

double NNfunction_sb_sLdL::synapse0x1b4dc30() {
   return (neuron0x1b392b0()*0.312589);
}

double NNfunction_sb_sLdL::synapse0x1b4dc70() {
   return (neuron0x1b395f0()*0.0272565);
}

double NNfunction_sb_sLdL::synapse0x1b4dcb0() {
   return (neuron0x1b39930()*0.0663493);
}

double NNfunction_sb_sLdL::synapse0x1b4dcf0() {
   return (neuron0x1b39c70()*0.739251);
}

double NNfunction_sb_sLdL::synapse0x1b4dd30() {
   return (neuron0x1b39fb0()*0.0682663);
}

double NNfunction_sb_sLdL::synapse0x1b4dd70() {
   return (neuron0x1b3a2f0()*-0.0862598);
}

double NNfunction_sb_sLdL::synapse0x1b4ddb0() {
   return (neuron0x1b3a630()*0.349082);
}

double NNfunction_sb_sLdL::synapse0x1b4d840() {
   return (neuron0x1b3a970()*0.120219);
}

double NNfunction_sb_sLdL::synapse0x1b4d880() {
   return (neuron0x1b3aed0()*0.235127);
}

double NNfunction_sb_sLdL::synapse0x1b4df00() {
   return (neuron0x1b3b0f0()*0.398474);
}

double NNfunction_sb_sLdL::synapse0x1b4df40() {
   return (neuron0x1b3b430()*0.225251);
}

double NNfunction_sb_sLdL::synapse0x1b4df80() {
   return (neuron0x1b3b770()*-0.392463);
}

double NNfunction_sb_sLdL::synapse0x1b4dfc0() {
   return (neuron0x1b3bab0()*-0.644455);
}

double NNfunction_sb_sLdL::synapse0x1b4e000() {
   return (neuron0x1b3bdf0()*0.0603457);
}

double NNfunction_sb_sLdL::synapse0x1b4e040() {
   return (neuron0x1b3c130()*-0.127629);
}

double NNfunction_sb_sLdL::synapse0x1b4e3c0() {
   return (neuron0x1b37570()*-0.347195);
}

double NNfunction_sb_sLdL::synapse0x1b4e400() {
   return (neuron0x1b378b0()*-0.75713);
}

double NNfunction_sb_sLdL::synapse0x1b4e440() {
   return (neuron0x1b37bf0()*0.396223);
}

double NNfunction_sb_sLdL::synapse0x1b4e480() {
   return (neuron0x1b37f30()*-0.444525);
}

double NNfunction_sb_sLdL::synapse0x1b4e4c0() {
   return (neuron0x1b38270()*-0.216099);
}

double NNfunction_sb_sLdL::synapse0x1b4e500() {
   return (neuron0x1b385b0()*-0.398839);
}

double NNfunction_sb_sLdL::synapse0x1b4e540() {
   return (neuron0x1b388f0()*0.305402);
}

double NNfunction_sb_sLdL::synapse0x1b4e580() {
   return (neuron0x1b38c30()*0.333624);
}

double NNfunction_sb_sLdL::synapse0x1b4e5c0() {
   return (neuron0x1b38f70()*-0.048547);
}

double NNfunction_sb_sLdL::synapse0x1b4e600() {
   return (neuron0x1b392b0()*0.150768);
}

double NNfunction_sb_sLdL::synapse0x1b4e640() {
   return (neuron0x1b395f0()*0.517464);
}

double NNfunction_sb_sLdL::synapse0x1b4e680() {
   return (neuron0x1b39930()*-1.80444);
}

double NNfunction_sb_sLdL::synapse0x1b4e6c0() {
   return (neuron0x1b39c70()*-0.746392);
}

double NNfunction_sb_sLdL::synapse0x1b4e700() {
   return (neuron0x1b39fb0()*-0.307972);
}

double NNfunction_sb_sLdL::synapse0x1b4e740() {
   return (neuron0x1b3a2f0()*0.660147);
}

double NNfunction_sb_sLdL::synapse0x1b4e780() {
   return (neuron0x1b3a630()*0.515223);
}

double NNfunction_sb_sLdL::synapse0x1b4e210() {
   return (neuron0x1b3a970()*-0.171019);
}

double NNfunction_sb_sLdL::synapse0x1b4e250() {
   return (neuron0x1b3aed0()*0.571796);
}

double NNfunction_sb_sLdL::synapse0x1b4e8d0() {
   return (neuron0x1b3b0f0()*0.511367);
}

double NNfunction_sb_sLdL::synapse0x1b4e910() {
   return (neuron0x1b3b430()*-0.268);
}

double NNfunction_sb_sLdL::synapse0x1b4e950() {
   return (neuron0x1b3b770()*-0.121778);
}

double NNfunction_sb_sLdL::synapse0x1b4e990() {
   return (neuron0x1b3bab0()*0.118013);
}

double NNfunction_sb_sLdL::synapse0x1b4e9d0() {
   return (neuron0x1b3bdf0()*0.0693485);
}

double NNfunction_sb_sLdL::synapse0x1b4ea10() {
   return (neuron0x1b3c130()*-0.116501);
}

double NNfunction_sb_sLdL::synapse0x1b4ed90() {
   return (neuron0x1b37570()*-0.050473);
}

double NNfunction_sb_sLdL::synapse0x1b4edd0() {
   return (neuron0x1b378b0()*0.203742);
}

double NNfunction_sb_sLdL::synapse0x1b4ee10() {
   return (neuron0x1b37bf0()*0.356988);
}

double NNfunction_sb_sLdL::synapse0x1b4ee50() {
   return (neuron0x1b37f30()*-1.87196);
}

double NNfunction_sb_sLdL::synapse0x1b4ee90() {
   return (neuron0x1b38270()*-0.213609);
}

double NNfunction_sb_sLdL::synapse0x1b4eed0() {
   return (neuron0x1b385b0()*0.176493);
}

double NNfunction_sb_sLdL::synapse0x1b4ef10() {
   return (neuron0x1b388f0()*0.0235728);
}

double NNfunction_sb_sLdL::synapse0x1b4ef50() {
   return (neuron0x1b38c30()*-0.134636);
}

double NNfunction_sb_sLdL::synapse0x1b4ef90() {
   return (neuron0x1b38f70()*-0.270383);
}

double NNfunction_sb_sLdL::synapse0x1b4efd0() {
   return (neuron0x1b392b0()*-0.00943907);
}

double NNfunction_sb_sLdL::synapse0x1b4f010() {
   return (neuron0x1b395f0()*0.0454199);
}

double NNfunction_sb_sLdL::synapse0x1b4f050() {
   return (neuron0x1b39930()*0.312505);
}

double NNfunction_sb_sLdL::synapse0x1b4f090() {
   return (neuron0x1b39c70()*0.553473);
}

double NNfunction_sb_sLdL::synapse0x1b4f0d0() {
   return (neuron0x1b39fb0()*-0.116836);
}

double NNfunction_sb_sLdL::synapse0x1b4f110() {
   return (neuron0x1b3a2f0()*0.197781);
}

double NNfunction_sb_sLdL::synapse0x1b4f150() {
   return (neuron0x1b3a630()*-0.0564617);
}

double NNfunction_sb_sLdL::synapse0x1b4ebe0() {
   return (neuron0x1b3a970()*-0.313448);
}

double NNfunction_sb_sLdL::synapse0x1b4ec20() {
   return (neuron0x1b3aed0()*0.360587);
}

double NNfunction_sb_sLdL::synapse0x1b4f2a0() {
   return (neuron0x1b3b0f0()*0.081691);
}

double NNfunction_sb_sLdL::synapse0x1b4f2e0() {
   return (neuron0x1b3b430()*-0.234394);
}

double NNfunction_sb_sLdL::synapse0x1b4f320() {
   return (neuron0x1b3b770()*-0.229085);
}

double NNfunction_sb_sLdL::synapse0x1b4f360() {
   return (neuron0x1b3bab0()*-0.242051);
}

double NNfunction_sb_sLdL::synapse0x1b4f3a0() {
   return (neuron0x1b3bdf0()*0.0707078);
}

double NNfunction_sb_sLdL::synapse0x1b4f3e0() {
   return (neuron0x1b3c130()*-0.244344);
}

double NNfunction_sb_sLdL::synapse0x1b4f760() {
   return (neuron0x1b37570()*0.678012);
}

double NNfunction_sb_sLdL::synapse0x1b4f7a0() {
   return (neuron0x1b378b0()*-0.0286105);
}

double NNfunction_sb_sLdL::synapse0x1b4f7e0() {
   return (neuron0x1b37bf0()*0.167454);
}

double NNfunction_sb_sLdL::synapse0x1b4f820() {
   return (neuron0x1b37f30()*-0.505827);
}

double NNfunction_sb_sLdL::synapse0x1b4f860() {
   return (neuron0x1b38270()*0.26748);
}

double NNfunction_sb_sLdL::synapse0x1b4f8a0() {
   return (neuron0x1b385b0()*-0.467999);
}

double NNfunction_sb_sLdL::synapse0x1b4f8e0() {
   return (neuron0x1b388f0()*0.516768);
}

double NNfunction_sb_sLdL::synapse0x1b4f920() {
   return (neuron0x1b38c30()*-0.0577477);
}

double NNfunction_sb_sLdL::synapse0x1b4f960() {
   return (neuron0x1b38f70()*0.0857411);
}

double NNfunction_sb_sLdL::synapse0x1b4f9a0() {
   return (neuron0x1b392b0()*0.182026);
}

double NNfunction_sb_sLdL::synapse0x1b4f9e0() {
   return (neuron0x1b395f0()*0.1203);
}

double NNfunction_sb_sLdL::synapse0x1b4fa20() {
   return (neuron0x1b39930()*0.86311);
}

double NNfunction_sb_sLdL::synapse0x1b4fa60() {
   return (neuron0x1b39c70()*0.460308);
}

double NNfunction_sb_sLdL::synapse0x1b4faa0() {
   return (neuron0x1b39fb0()*0.976503);
}

double NNfunction_sb_sLdL::synapse0x1b4fae0() {
   return (neuron0x1b3a2f0()*0.527218);
}

double NNfunction_sb_sLdL::synapse0x1b4fb20() {
   return (neuron0x1b3a630()*0.213165);
}

double NNfunction_sb_sLdL::synapse0x1b4f5b0() {
   return (neuron0x1b3a970()*1.53485);
}

double NNfunction_sb_sLdL::synapse0x1b4f5f0() {
   return (neuron0x1b3aed0()*0.699631);
}

double NNfunction_sb_sLdL::synapse0x1b4fc70() {
   return (neuron0x1b3b0f0()*0.768789);
}

double NNfunction_sb_sLdL::synapse0x1b4fcb0() {
   return (neuron0x1b3b430()*-0.357046);
}

double NNfunction_sb_sLdL::synapse0x1b4fcf0() {
   return (neuron0x1b3b770()*-0.195462);
}

double NNfunction_sb_sLdL::synapse0x1b4fd30() {
   return (neuron0x1b3bab0()*0.730161);
}

double NNfunction_sb_sLdL::synapse0x1b4fd70() {
   return (neuron0x1b3bdf0()*0.034256);
}

double NNfunction_sb_sLdL::synapse0x1b4fdb0() {
   return (neuron0x1b3c130()*-0.425966);
}

double NNfunction_sb_sLdL::synapse0x1b50130() {
   return (neuron0x1b37570()*-0.0332684);
}

double NNfunction_sb_sLdL::synapse0x1b50170() {
   return (neuron0x1b378b0()*-0.0483075);
}

double NNfunction_sb_sLdL::synapse0x1b501b0() {
   return (neuron0x1b37bf0()*1.4915);
}

double NNfunction_sb_sLdL::synapse0x1b501f0() {
   return (neuron0x1b37f30()*-0.0251286);
}

double NNfunction_sb_sLdL::synapse0x1b50230() {
   return (neuron0x1b38270()*-0.01038);
}

double NNfunction_sb_sLdL::synapse0x1b50270() {
   return (neuron0x1b385b0()*-0.0298539);
}

double NNfunction_sb_sLdL::synapse0x1b502b0() {
   return (neuron0x1b388f0()*-0.0161343);
}

double NNfunction_sb_sLdL::synapse0x1b502f0() {
   return (neuron0x1b38c30()*0.00815687);
}

double NNfunction_sb_sLdL::synapse0x1b50330() {
   return (neuron0x1b38f70()*-0.0362972);
}

double NNfunction_sb_sLdL::synapse0x1b50370() {
   return (neuron0x1b392b0()*-0.00734402);
}

double NNfunction_sb_sLdL::synapse0x1b503b0() {
   return (neuron0x1b395f0()*0.0384053);
}

double NNfunction_sb_sLdL::synapse0x1b503f0() {
   return (neuron0x1b39930()*-0.146932);
}

double NNfunction_sb_sLdL::synapse0x1b50430() {
   return (neuron0x1b39c70()*0.0107617);
}

double NNfunction_sb_sLdL::synapse0x1b50470() {
   return (neuron0x1b39fb0()*0.0149732);
}

double NNfunction_sb_sLdL::synapse0x1b504b0() {
   return (neuron0x1b3a2f0()*-0.00214037);
}

double NNfunction_sb_sLdL::synapse0x1b504f0() {
   return (neuron0x1b3a630()*0.0198515);
}

double NNfunction_sb_sLdL::synapse0x1b4ff80() {
   return (neuron0x1b3a970()*0.0473615);
}

double NNfunction_sb_sLdL::synapse0x1b4ffc0() {
   return (neuron0x1b3aed0()*0.000758025);
}

double NNfunction_sb_sLdL::synapse0x1b50640() {
   return (neuron0x1b3b0f0()*-0.026475);
}

double NNfunction_sb_sLdL::synapse0x1b50680() {
   return (neuron0x1b3b430()*0.0138182);
}

double NNfunction_sb_sLdL::synapse0x1b506c0() {
   return (neuron0x1b3b770()*-0.038166);
}

double NNfunction_sb_sLdL::synapse0x1b50700() {
   return (neuron0x1b3bab0()*-0.0113201);
}

double NNfunction_sb_sLdL::synapse0x1b50740() {
   return (neuron0x1b3bdf0()*-0.0276747);
}

double NNfunction_sb_sLdL::synapse0x1b50780() {
   return (neuron0x1b3c130()*-0.00908952);
}

double NNfunction_sb_sLdL::synapse0x1b50b00() {
   return (neuron0x1b37570()*-0.000691222);
}

double NNfunction_sb_sLdL::synapse0x1b50b40() {
   return (neuron0x1b378b0()*-0.014114);
}

double NNfunction_sb_sLdL::synapse0x1b50b80() {
   return (neuron0x1b37bf0()*0.0544542);
}

double NNfunction_sb_sLdL::synapse0x1b50bc0() {
   return (neuron0x1b37f30()*-0.137119);
}

double NNfunction_sb_sLdL::synapse0x1b50c00() {
   return (neuron0x1b38270()*-0.00554916);
}

double NNfunction_sb_sLdL::synapse0x1b50c40() {
   return (neuron0x1b385b0()*-0.00292612);
}

double NNfunction_sb_sLdL::synapse0x1b50c80() {
   return (neuron0x1b388f0()*0.00151058);
}

double NNfunction_sb_sLdL::synapse0x1b50cc0() {
   return (neuron0x1b38c30()*-0.013358);
}

double NNfunction_sb_sLdL::synapse0x1b50d00() {
   return (neuron0x1b38f70()*-0.0100132);
}

double NNfunction_sb_sLdL::synapse0x1b50d40() {
   return (neuron0x1b392b0()*-0.0109165);
}

double NNfunction_sb_sLdL::synapse0x1b50d80() {
   return (neuron0x1b395f0()*-0.00774785);
}

double NNfunction_sb_sLdL::synapse0x1b50dc0() {
   return (neuron0x1b39930()*-0.378802);
}

double NNfunction_sb_sLdL::synapse0x1b50e00() {
   return (neuron0x1b39c70()*-0.599235);
}

double NNfunction_sb_sLdL::synapse0x1b50e40() {
   return (neuron0x1b39fb0()*-0.00793785);
}

double NNfunction_sb_sLdL::synapse0x1b50e80() {
   return (neuron0x1b3a2f0()*0.00685307);
}

double NNfunction_sb_sLdL::synapse0x1b50ec0() {
   return (neuron0x1b3a630()*0.0074926);
}

double NNfunction_sb_sLdL::synapse0x1b50950() {
   return (neuron0x1b3a970()*-0.00354994);
}

double NNfunction_sb_sLdL::synapse0x1b50990() {
   return (neuron0x1b3aed0()*-0.0273731);
}

double NNfunction_sb_sLdL::synapse0x1b51010() {
   return (neuron0x1b3b0f0()*-0.017357);
}

double NNfunction_sb_sLdL::synapse0x1b51050() {
   return (neuron0x1b3b430()*-0.0181429);
}

double NNfunction_sb_sLdL::synapse0x1b51090() {
   return (neuron0x1b3b770()*0.00335303);
}

double NNfunction_sb_sLdL::synapse0x1b510d0() {
   return (neuron0x1b3bab0()*0.00126805);
}

double NNfunction_sb_sLdL::synapse0x1b51110() {
   return (neuron0x1b3bdf0()*-0.00663091);
}

double NNfunction_sb_sLdL::synapse0x1b51150() {
   return (neuron0x1b3c130()*0.0104681);
}

double NNfunction_sb_sLdL::synapse0x1b514d0() {
   return (neuron0x1b37570()*-0.298585);
}

double NNfunction_sb_sLdL::synapse0x1b51510() {
   return (neuron0x1b378b0()*-0.42638);
}

double NNfunction_sb_sLdL::synapse0x1b51550() {
   return (neuron0x1b37bf0()*0.166097);
}

double NNfunction_sb_sLdL::synapse0x1b51590() {
   return (neuron0x1b37f30()*-0.101779);
}

double NNfunction_sb_sLdL::synapse0x1b515d0() {
   return (neuron0x1b38270()*-0.574328);
}

double NNfunction_sb_sLdL::synapse0x1b51610() {
   return (neuron0x1b385b0()*0.618271);
}

double NNfunction_sb_sLdL::synapse0x1b51650() {
   return (neuron0x1b388f0()*-0.0657907);
}

double NNfunction_sb_sLdL::synapse0x1b51690() {
   return (neuron0x1b38c30()*-0.58566);
}

double NNfunction_sb_sLdL::synapse0x1b516d0() {
   return (neuron0x1b38f70()*0.012456);
}

double NNfunction_sb_sLdL::synapse0x1b51710() {
   return (neuron0x1b392b0()*0.648768);
}

double NNfunction_sb_sLdL::synapse0x1b51750() {
   return (neuron0x1b395f0()*0.396804);
}

double NNfunction_sb_sLdL::synapse0x1b51790() {
   return (neuron0x1b39930()*0.709473);
}

double NNfunction_sb_sLdL::synapse0x1b517d0() {
   return (neuron0x1b39c70()*0.817084);
}

double NNfunction_sb_sLdL::synapse0x1b51810() {
   return (neuron0x1b39fb0()*-1.24913);
}

double NNfunction_sb_sLdL::synapse0x1b51850() {
   return (neuron0x1b3a2f0()*0.262181);
}

double NNfunction_sb_sLdL::synapse0x1b51890() {
   return (neuron0x1b3a630()*-0.259705);
}

double NNfunction_sb_sLdL::synapse0x1b51320() {
   return (neuron0x1b3a970()*-0.430447);
}

double NNfunction_sb_sLdL::synapse0x1b51360() {
   return (neuron0x1b3aed0()*-0.203686);
}

double NNfunction_sb_sLdL::synapse0x1b519e0() {
   return (neuron0x1b3b0f0()*-0.18509);
}

double NNfunction_sb_sLdL::synapse0x1b51a20() {
   return (neuron0x1b3b430()*-0.0604773);
}

double NNfunction_sb_sLdL::synapse0x1b51a60() {
   return (neuron0x1b3b770()*0.927991);
}

double NNfunction_sb_sLdL::synapse0x1b51aa0() {
   return (neuron0x1b3bab0()*-0.0146645);
}

double NNfunction_sb_sLdL::synapse0x1b51ae0() {
   return (neuron0x1b3bdf0()*-0.46709);
}

double NNfunction_sb_sLdL::synapse0x1b51b20() {
   return (neuron0x1b3c130()*-0.0639665);
}

double NNfunction_sb_sLdL::synapse0x1b51ea0() {
   return (neuron0x1b37570()*0.0279073);
}

double NNfunction_sb_sLdL::synapse0x1b46470() {
   return (neuron0x1b378b0()*-0.089299);
}

double NNfunction_sb_sLdL::synapse0x1b464b0() {
   return (neuron0x1b37bf0()*0.123205);
}

double NNfunction_sb_sLdL::synapse0x1b464f0() {
   return (neuron0x1b37f30()*-0.810993);
}

double NNfunction_sb_sLdL::synapse0x1b46740() {
   return (neuron0x1b38270()*0.0894778);
}

double NNfunction_sb_sLdL::synapse0x1b46780() {
   return (neuron0x1b385b0()*0.0384401);
}

double NNfunction_sb_sLdL::synapse0x1b467c0() {
   return (neuron0x1b388f0()*0.134858);
}

double NNfunction_sb_sLdL::synapse0x1b46a10() {
   return (neuron0x1b38c30()*0.0603828);
}

double NNfunction_sb_sLdL::synapse0x1b46a50() {
   return (neuron0x1b38f70()*-0.111376);
}

double NNfunction_sb_sLdL::synapse0x1b46ca0() {
   return (neuron0x1b392b0()*-0.127399);
}

double NNfunction_sb_sLdL::synapse0x1b46ce0() {
   return (neuron0x1b395f0()*0.075365);
}

double NNfunction_sb_sLdL::synapse0x1b46d20() {
   return (neuron0x1b39930()*-0.716288);
}

double NNfunction_sb_sLdL::synapse0x1b46f70() {
   return (neuron0x1b39c70()*-0.154982);
}

double NNfunction_sb_sLdL::synapse0x1b46fb0() {
   return (neuron0x1b39fb0()*0.0845563);
}

double NNfunction_sb_sLdL::synapse0x1b47200() {
   return (neuron0x1b3a2f0()*-0.0993903);
}

double NNfunction_sb_sLdL::synapse0x1b47240() {
   return (neuron0x1b3a630()*-0.0598518);
}

double NNfunction_sb_sLdL::synapse0x1b51cf0() {
   return (neuron0x1b3a970()*0.0650556);
}

double NNfunction_sb_sLdL::synapse0x1b51d30() {
   return (neuron0x1b3aed0()*0.0943927);
}

double NNfunction_sb_sLdL::synapse0x1b47390() {
   return (neuron0x1b3b0f0()*-0.0981499);
}

double NNfunction_sb_sLdL::synapse0x1b478a0() {
   return (neuron0x1b3b430()*-0.220114);
}

double NNfunction_sb_sLdL::synapse0x1b478e0() {
   return (neuron0x1b3b770()*-0.0536749);
}

double NNfunction_sb_sLdL::synapse0x1b47920() {
   return (neuron0x1b3bab0()*0.0316245);
}

double NNfunction_sb_sLdL::synapse0x1b47b70() {
   return (neuron0x1b3bdf0()*-0.00959498);
}

double NNfunction_sb_sLdL::synapse0x1b47bb0() {
   return (neuron0x1b3c130()*-0.0358605);
}

double NNfunction_sb_sLdL::synapse0x1b47460() {
   return (neuron0x1b37570()*-0.00768797);
}

double NNfunction_sb_sLdL::synapse0x1b474a0() {
   return (neuron0x1b378b0()*0.289209);
}

double NNfunction_sb_sLdL::synapse0x1b474e0() {
   return (neuron0x1b37bf0()*-0.204795);
}

double NNfunction_sb_sLdL::synapse0x1b47520() {
   return (neuron0x1b37f30()*-0.223111);
}

double NNfunction_sb_sLdL::synapse0x1b47ea0() {
   return (neuron0x1b38270()*0.569466);
}

double NNfunction_sb_sLdL::synapse0x1b541f0() {
   return (neuron0x1b385b0()*1.08421);
}

double NNfunction_sb_sLdL::synapse0x1b54230() {
   return (neuron0x1b388f0()*-0.121287);
}

double NNfunction_sb_sLdL::synapse0x1b54270() {
   return (neuron0x1b38c30()*0.47653);
}

double NNfunction_sb_sLdL::synapse0x1b542b0() {
   return (neuron0x1b38f70()*0.0637566);
}

double NNfunction_sb_sLdL::synapse0x1b542f0() {
   return (neuron0x1b392b0()*-0.597861);
}

double NNfunction_sb_sLdL::synapse0x1b54330() {
   return (neuron0x1b395f0()*0.237561);
}

double NNfunction_sb_sLdL::synapse0x1b54370() {
   return (neuron0x1b39930()*-0.382866);
}

double NNfunction_sb_sLdL::synapse0x1b543b0() {
   return (neuron0x1b39c70()*0.637262);
}

double NNfunction_sb_sLdL::synapse0x1b543f0() {
   return (neuron0x1b39fb0()*-0.452026);
}

double NNfunction_sb_sLdL::synapse0x1b54430() {
   return (neuron0x1b3a2f0()*-0.449193);
}

double NNfunction_sb_sLdL::synapse0x1b54470() {
   return (neuron0x1b3a630()*0.563915);
}

double NNfunction_sb_sLdL::synapse0x1b47d80() {
   return (neuron0x1b3a970()*0.401511);
}

double NNfunction_sb_sLdL::synapse0x1b47dc0() {
   return (neuron0x1b3aed0()*0.131353);
}

double NNfunction_sb_sLdL::synapse0x1b545c0() {
   return (neuron0x1b3b0f0()*-0.707155);
}

double NNfunction_sb_sLdL::synapse0x1b54600() {
   return (neuron0x1b3b430()*0.736253);
}

double NNfunction_sb_sLdL::synapse0x1b54640() {
   return (neuron0x1b3b770()*-0.644098);
}

double NNfunction_sb_sLdL::synapse0x1b54680() {
   return (neuron0x1b3bab0()*0.207578);
}

double NNfunction_sb_sLdL::synapse0x1b546c0() {
   return (neuron0x1b3bdf0()*0.688443);
}

double NNfunction_sb_sLdL::synapse0x1b54700() {
   return (neuron0x1b3c130()*0.871313);
}

double NNfunction_sb_sLdL::synapse0x1b54a80() {
   return (neuron0x1b37570()*0.0018906);
}

double NNfunction_sb_sLdL::synapse0x1b54ac0() {
   return (neuron0x1b378b0()*0.0272067);
}

double NNfunction_sb_sLdL::synapse0x1b54b00() {
   return (neuron0x1b37bf0()*0.372387);
}

double NNfunction_sb_sLdL::synapse0x1b54b40() {
   return (neuron0x1b37f30()*0.9552);
}

double NNfunction_sb_sLdL::synapse0x1b54b80() {
   return (neuron0x1b38270()*-0.0262741);
}

double NNfunction_sb_sLdL::synapse0x1b54bc0() {
   return (neuron0x1b385b0()*-0.0143878);
}

double NNfunction_sb_sLdL::synapse0x1b54c00() {
   return (neuron0x1b388f0()*0.0216518);
}

double NNfunction_sb_sLdL::synapse0x1b54c40() {
   return (neuron0x1b38c30()*0.0402414);
}

double NNfunction_sb_sLdL::synapse0x1b54c80() {
   return (neuron0x1b38f70()*0.0426883);
}

double NNfunction_sb_sLdL::synapse0x1b54cc0() {
   return (neuron0x1b392b0()*0.0474892);
}

double NNfunction_sb_sLdL::synapse0x1b54d00() {
   return (neuron0x1b395f0()*0.0249104);
}

double NNfunction_sb_sLdL::synapse0x1b54d40() {
   return (neuron0x1b39930()*-0.382361);
}

double NNfunction_sb_sLdL::synapse0x1b54d80() {
   return (neuron0x1b39c70()*-0.358873);
}

double NNfunction_sb_sLdL::synapse0x1b54dc0() {
   return (neuron0x1b39fb0()*-0.0592181);
}

double NNfunction_sb_sLdL::synapse0x1b54e00() {
   return (neuron0x1b3a2f0()*-0.00799577);
}

double NNfunction_sb_sLdL::synapse0x1b54e40() {
   return (neuron0x1b3a630()*-0.0105082);
}

double NNfunction_sb_sLdL::synapse0x1b548d0() {
   return (neuron0x1b3a970()*-0.0425506);
}

double NNfunction_sb_sLdL::synapse0x1b54910() {
   return (neuron0x1b3aed0()*0.0489191);
}

double NNfunction_sb_sLdL::synapse0x1b54f90() {
   return (neuron0x1b3b0f0()*0.0630645);
}

double NNfunction_sb_sLdL::synapse0x1b54fd0() {
   return (neuron0x1b3b430()*0.0549391);
}

double NNfunction_sb_sLdL::synapse0x1b55010() {
   return (neuron0x1b3b770()*-0.0455449);
}

double NNfunction_sb_sLdL::synapse0x1b55050() {
   return (neuron0x1b3bab0()*-0.0378483);
}

double NNfunction_sb_sLdL::synapse0x1b55090() {
   return (neuron0x1b3bdf0()*0.0235957);
}

double NNfunction_sb_sLdL::synapse0x1b550d0() {
   return (neuron0x1b3c130()*-0.0429816);
}

double NNfunction_sb_sLdL::synapse0x1b55450() {
   return (neuron0x1b37570()*0.26746);
}

double NNfunction_sb_sLdL::synapse0x1b55490() {
   return (neuron0x1b378b0()*-0.14642);
}

double NNfunction_sb_sLdL::synapse0x1b554d0() {
   return (neuron0x1b37bf0()*0.262283);
}

double NNfunction_sb_sLdL::synapse0x1b55510() {
   return (neuron0x1b37f30()*0.81558);
}

double NNfunction_sb_sLdL::synapse0x1b55550() {
   return (neuron0x1b38270()*0.159711);
}

double NNfunction_sb_sLdL::synapse0x1b55590() {
   return (neuron0x1b385b0()*0.464933);
}

double NNfunction_sb_sLdL::synapse0x1b555d0() {
   return (neuron0x1b388f0()*-0.234044);
}

double NNfunction_sb_sLdL::synapse0x1b55610() {
   return (neuron0x1b38c30()*-0.275241);
}

double NNfunction_sb_sLdL::synapse0x1b55650() {
   return (neuron0x1b38f70()*-0.381508);
}

double NNfunction_sb_sLdL::synapse0x1b55690() {
   return (neuron0x1b392b0()*0.131809);
}

double NNfunction_sb_sLdL::synapse0x1b556d0() {
   return (neuron0x1b395f0()*-0.237378);
}

double NNfunction_sb_sLdL::synapse0x1b55710() {
   return (neuron0x1b39930()*0.637091);
}

double NNfunction_sb_sLdL::synapse0x1b55750() {
   return (neuron0x1b39c70()*-0.0946215);
}

double NNfunction_sb_sLdL::synapse0x1b55790() {
   return (neuron0x1b39fb0()*0.916926);
}

double NNfunction_sb_sLdL::synapse0x1b557d0() {
   return (neuron0x1b3a2f0()*-0.84617);
}

double NNfunction_sb_sLdL::synapse0x1b55810() {
   return (neuron0x1b3a630()*-0.456138);
}

double NNfunction_sb_sLdL::synapse0x1b552a0() {
   return (neuron0x1b3a970()*1.45482);
}

double NNfunction_sb_sLdL::synapse0x1b552e0() {
   return (neuron0x1b3aed0()*-0.273962);
}

double NNfunction_sb_sLdL::synapse0x1b55960() {
   return (neuron0x1b3b0f0()*-0.32666);
}

double NNfunction_sb_sLdL::synapse0x1b559a0() {
   return (neuron0x1b3b430()*-0.32033);
}

double NNfunction_sb_sLdL::synapse0x1b559e0() {
   return (neuron0x1b3b770()*-0.179012);
}

double NNfunction_sb_sLdL::synapse0x1b55a20() {
   return (neuron0x1b3bab0()*-0.087641);
}

double NNfunction_sb_sLdL::synapse0x1b55a60() {
   return (neuron0x1b3bdf0()*0.00990229);
}

double NNfunction_sb_sLdL::synapse0x1b55aa0() {
   return (neuron0x1b3c130()*0.101944);
}

double NNfunction_sb_sLdL::synapse0x1b55e20() {
   return (neuron0x1b37570()*0.0353851);
}

double NNfunction_sb_sLdL::synapse0x1b55e60() {
   return (neuron0x1b378b0()*0.107844);
}

double NNfunction_sb_sLdL::synapse0x1b55ea0() {
   return (neuron0x1b37bf0()*0.453002);
}

double NNfunction_sb_sLdL::synapse0x1b55ee0() {
   return (neuron0x1b37f30()*2.10792);
}

double NNfunction_sb_sLdL::synapse0x1b55f20() {
   return (neuron0x1b38270()*-0.104015);
}

double NNfunction_sb_sLdL::synapse0x1b55f60() {
   return (neuron0x1b385b0()*-0.0599066);
}

double NNfunction_sb_sLdL::synapse0x1b55fa0() {
   return (neuron0x1b388f0()*0.0368171);
}

double NNfunction_sb_sLdL::synapse0x1b55fe0() {
   return (neuron0x1b38c30()*0.0569821);
}

double NNfunction_sb_sLdL::synapse0x1b56020() {
   return (neuron0x1b38f70()*0.185896);
}

double NNfunction_sb_sLdL::synapse0x1b56060() {
   return (neuron0x1b392b0()*0.169869);
}

double NNfunction_sb_sLdL::synapse0x1b560a0() {
   return (neuron0x1b395f0()*0.00905133);
}

double NNfunction_sb_sLdL::synapse0x1b560e0() {
   return (neuron0x1b39930()*0.551297);
}

double NNfunction_sb_sLdL::synapse0x1b56120() {
   return (neuron0x1b39c70()*0.569031);
}

double NNfunction_sb_sLdL::synapse0x1b56160() {
   return (neuron0x1b39fb0()*-0.0413739);
}

double NNfunction_sb_sLdL::synapse0x1b561a0() {
   return (neuron0x1b3a2f0()*-0.106525);
}

double NNfunction_sb_sLdL::synapse0x1b561e0() {
   return (neuron0x1b3a630()*-0.065058);
}

double NNfunction_sb_sLdL::synapse0x1b55c70() {
   return (neuron0x1b3a970()*0.0655856);
}

double NNfunction_sb_sLdL::synapse0x1b55cb0() {
   return (neuron0x1b3aed0()*-0.0571921);
}

double NNfunction_sb_sLdL::synapse0x1b56330() {
   return (neuron0x1b3b0f0()*0.0721017);
}

double NNfunction_sb_sLdL::synapse0x1b56370() {
   return (neuron0x1b3b430()*0.130483);
}

double NNfunction_sb_sLdL::synapse0x1b563b0() {
   return (neuron0x1b3b770()*-0.171073);
}

double NNfunction_sb_sLdL::synapse0x1b563f0() {
   return (neuron0x1b3bab0()*-0.124529);
}

double NNfunction_sb_sLdL::synapse0x1b56430() {
   return (neuron0x1b3bdf0()*0.0159277);
}

double NNfunction_sb_sLdL::synapse0x1b56470() {
   return (neuron0x1b3c130()*0.0100151);
}

double NNfunction_sb_sLdL::synapse0x1b567f0() {
   return (neuron0x1b37570()*0.221782);
}

double NNfunction_sb_sLdL::synapse0x1b56830() {
   return (neuron0x1b378b0()*-0.689218);
}

double NNfunction_sb_sLdL::synapse0x1b56870() {
   return (neuron0x1b37bf0()*-0.00228019);
}

double NNfunction_sb_sLdL::synapse0x1b568b0() {
   return (neuron0x1b37f30()*-0.541944);
}

double NNfunction_sb_sLdL::synapse0x1b568f0() {
   return (neuron0x1b38270()*0.313944);
}

double NNfunction_sb_sLdL::synapse0x1b56930() {
   return (neuron0x1b385b0()*-0.55157);
}

double NNfunction_sb_sLdL::synapse0x1b56970() {
   return (neuron0x1b388f0()*-0.385201);
}

double NNfunction_sb_sLdL::synapse0x1b569b0() {
   return (neuron0x1b38c30()*0.69677);
}

double NNfunction_sb_sLdL::synapse0x1b569f0() {
   return (neuron0x1b38f70()*-0.193455);
}

double NNfunction_sb_sLdL::synapse0x1b56a30() {
   return (neuron0x1b392b0()*0.380018);
}

double NNfunction_sb_sLdL::synapse0x1b56a70() {
   return (neuron0x1b395f0()*0.0585646);
}

double NNfunction_sb_sLdL::synapse0x1b56ab0() {
   return (neuron0x1b39930()*1.85033);
}

double NNfunction_sb_sLdL::synapse0x1b56af0() {
   return (neuron0x1b39c70()*-0.242457);
}

double NNfunction_sb_sLdL::synapse0x1b56b30() {
   return (neuron0x1b39fb0()*0.129451);
}

double NNfunction_sb_sLdL::synapse0x1b56b70() {
   return (neuron0x1b3a2f0()*-0.142049);
}

double NNfunction_sb_sLdL::synapse0x1b56bb0() {
   return (neuron0x1b3a630()*0.0222827);
}

double NNfunction_sb_sLdL::synapse0x1b56640() {
   return (neuron0x1b3a970()*0.193925);
}

double NNfunction_sb_sLdL::synapse0x1b56680() {
   return (neuron0x1b3aed0()*0.544583);
}

double NNfunction_sb_sLdL::synapse0x1b56d00() {
   return (neuron0x1b3b0f0()*0.444019);
}

double NNfunction_sb_sLdL::synapse0x1b56d40() {
   return (neuron0x1b3b430()*-0.259253);
}

double NNfunction_sb_sLdL::synapse0x1b56d80() {
   return (neuron0x1b3b770()*-0.114198);
}

double NNfunction_sb_sLdL::synapse0x1b56dc0() {
   return (neuron0x1b3bab0()*-0.255702);
}

double NNfunction_sb_sLdL::synapse0x1b56e00() {
   return (neuron0x1b3bdf0()*0.20536);
}

double NNfunction_sb_sLdL::synapse0x1b56e40() {
   return (neuron0x1b3c130()*-0.463295);
}

double NNfunction_sb_sLdL::synapse0x1b571c0() {
   return (neuron0x1b37570()*-0.296129);
}

double NNfunction_sb_sLdL::synapse0x1b57200() {
   return (neuron0x1b378b0()*-0.822828);
}

double NNfunction_sb_sLdL::synapse0x1b57240() {
   return (neuron0x1b37bf0()*-0.757713);
}

double NNfunction_sb_sLdL::synapse0x1b57280() {
   return (neuron0x1b37f30()*1.39204);
}

double NNfunction_sb_sLdL::synapse0x1b572c0() {
   return (neuron0x1b38270()*0.289123);
}

double NNfunction_sb_sLdL::synapse0x1b57300() {
   return (neuron0x1b385b0()*-0.245201);
}

double NNfunction_sb_sLdL::synapse0x1b57340() {
   return (neuron0x1b388f0()*-0.788826);
}

double NNfunction_sb_sLdL::synapse0x1b57380() {
   return (neuron0x1b38c30()*0.0145428);
}

double NNfunction_sb_sLdL::synapse0x1b573c0() {
   return (neuron0x1b38f70()*0.0702954);
}

double NNfunction_sb_sLdL::synapse0x1b57400() {
   return (neuron0x1b392b0()*-0.00921036);
}

double NNfunction_sb_sLdL::synapse0x1b57440() {
   return (neuron0x1b395f0()*-0.212163);
}

double NNfunction_sb_sLdL::synapse0x1b57480() {
   return (neuron0x1b39930()*-0.936158);
}

double NNfunction_sb_sLdL::synapse0x1b574c0() {
   return (neuron0x1b39c70()*-0.861027);
}

double NNfunction_sb_sLdL::synapse0x1b57500() {
   return (neuron0x1b39fb0()*0.00731873);
}

double NNfunction_sb_sLdL::synapse0x1b57540() {
   return (neuron0x1b3a2f0()*0.692799);
}

double NNfunction_sb_sLdL::synapse0x1b57580() {
   return (neuron0x1b3a630()*0.0449609);
}

double NNfunction_sb_sLdL::synapse0x1b57010() {
   return (neuron0x1b3a970()*0.232707);
}

double NNfunction_sb_sLdL::synapse0x1b57050() {
   return (neuron0x1b3aed0()*-0.115663);
}

double NNfunction_sb_sLdL::synapse0x1b576d0() {
   return (neuron0x1b3b0f0()*-0.157262);
}

double NNfunction_sb_sLdL::synapse0x1b57710() {
   return (neuron0x1b3b430()*-0.418015);
}

double NNfunction_sb_sLdL::synapse0x1b57750() {
   return (neuron0x1b3b770()*-0.018335);
}

double NNfunction_sb_sLdL::synapse0x1b57790() {
   return (neuron0x1b3bab0()*0.235682);
}

double NNfunction_sb_sLdL::synapse0x1b577d0() {
   return (neuron0x1b3bdf0()*-0.0400423);
}

double NNfunction_sb_sLdL::synapse0x1b57810() {
   return (neuron0x1b3c130()*-0.0579111);
}

double NNfunction_sb_sLdL::synapse0x1b57b90() {
   return (neuron0x1b37570()*0.011043);
}

double NNfunction_sb_sLdL::synapse0x1b57bd0() {
   return (neuron0x1b378b0()*-0.0227305);
}

double NNfunction_sb_sLdL::synapse0x1b57c10() {
   return (neuron0x1b37bf0()*-0.0266969);
}

double NNfunction_sb_sLdL::synapse0x1b57c50() {
   return (neuron0x1b37f30()*-1.26313);
}

double NNfunction_sb_sLdL::synapse0x1b57c90() {
   return (neuron0x1b38270()*0.0133547);
}

double NNfunction_sb_sLdL::synapse0x1b57cd0() {
   return (neuron0x1b385b0()*-0.00267127);
}

double NNfunction_sb_sLdL::synapse0x1b57d10() {
   return (neuron0x1b388f0()*-0.00427251);
}

double NNfunction_sb_sLdL::synapse0x1b57d50() {
   return (neuron0x1b38c30()*-0.0100811);
}

double NNfunction_sb_sLdL::synapse0x1b57d90() {
   return (neuron0x1b38f70()*-0.00800104);
}

double NNfunction_sb_sLdL::synapse0x1b57dd0() {
   return (neuron0x1b392b0()*-0.00775694);
}

double NNfunction_sb_sLdL::synapse0x1b57e10() {
   return (neuron0x1b395f0()*-0.00207166);
}

double NNfunction_sb_sLdL::synapse0x1b57e50() {
   return (neuron0x1b39930()*0.341939);
}

double NNfunction_sb_sLdL::synapse0x1b57e90() {
   return (neuron0x1b39c70()*0.250994);
}

double NNfunction_sb_sLdL::synapse0x1b57ed0() {
   return (neuron0x1b39fb0()*0.029347);
}

double NNfunction_sb_sLdL::synapse0x1b57f10() {
   return (neuron0x1b3a2f0()*-0.0371161);
}

double NNfunction_sb_sLdL::synapse0x1b57f50() {
   return (neuron0x1b3a630()*-0.03145);
}

double NNfunction_sb_sLdL::synapse0x1b579e0() {
   return (neuron0x1b3a970()*0.0364869);
}

double NNfunction_sb_sLdL::synapse0x1b57a20() {
   return (neuron0x1b3aed0()*-0.0563889);
}

double NNfunction_sb_sLdL::synapse0x1b580a0() {
   return (neuron0x1b3b0f0()*-0.0539061);
}

double NNfunction_sb_sLdL::synapse0x1b580e0() {
   return (neuron0x1b3b430()*-0.0124541);
}

double NNfunction_sb_sLdL::synapse0x1b58120() {
   return (neuron0x1b3b770()*-0.00439675);
}

double NNfunction_sb_sLdL::synapse0x1b58160() {
   return (neuron0x1b3bab0()*-0.00942109);
}

double NNfunction_sb_sLdL::synapse0x1b581a0() {
   return (neuron0x1b3bdf0()*-0.00280791);
}

double NNfunction_sb_sLdL::synapse0x1b581e0() {
   return (neuron0x1b3c130()*0.0253921);
}

double NNfunction_sb_sLdL::synapse0x1b58560() {
   return (neuron0x1b37570()*-0.263726);
}

double NNfunction_sb_sLdL::synapse0x1b585a0() {
   return (neuron0x1b378b0()*0.383744);
}

double NNfunction_sb_sLdL::synapse0x1b585e0() {
   return (neuron0x1b37bf0()*0.1832);
}

double NNfunction_sb_sLdL::synapse0x1b58620() {
   return (neuron0x1b37f30()*0.202361);
}

double NNfunction_sb_sLdL::synapse0x1b58660() {
   return (neuron0x1b38270()*-0.611165);
}

double NNfunction_sb_sLdL::synapse0x1b586a0() {
   return (neuron0x1b385b0()*-0.212675);
}

double NNfunction_sb_sLdL::synapse0x1b586e0() {
   return (neuron0x1b388f0()*-0.549179);
}

double NNfunction_sb_sLdL::synapse0x1b58720() {
   return (neuron0x1b38c30()*0.106519);
}

double NNfunction_sb_sLdL::synapse0x1b58760() {
   return (neuron0x1b38f70()*0.174876);
}

double NNfunction_sb_sLdL::synapse0x1b587a0() {
   return (neuron0x1b392b0()*-0.191511);
}

double NNfunction_sb_sLdL::synapse0x1b587e0() {
   return (neuron0x1b395f0()*-0.749211);
}

double NNfunction_sb_sLdL::synapse0x1b58820() {
   return (neuron0x1b39930()*-0.634322);
}

double NNfunction_sb_sLdL::synapse0x1b58860() {
   return (neuron0x1b39c70()*-1.3208);
}

double NNfunction_sb_sLdL::synapse0x1b588a0() {
   return (neuron0x1b39fb0()*-0.869388);
}

double NNfunction_sb_sLdL::synapse0x1b588e0() {
   return (neuron0x1b3a2f0()*-0.254962);
}

double NNfunction_sb_sLdL::synapse0x1b58920() {
   return (neuron0x1b3a630()*0.315255);
}

double NNfunction_sb_sLdL::synapse0x1b583b0() {
   return (neuron0x1b3a970()*-0.0642185);
}

double NNfunction_sb_sLdL::synapse0x1b583f0() {
   return (neuron0x1b3aed0()*-0.538968);
}

double NNfunction_sb_sLdL::synapse0x1b58a70() {
   return (neuron0x1b3b0f0()*0.0730449);
}

double NNfunction_sb_sLdL::synapse0x1b58ab0() {
   return (neuron0x1b3b430()*-0.28939);
}

double NNfunction_sb_sLdL::synapse0x1b58af0() {
   return (neuron0x1b3b770()*0.290139);
}

double NNfunction_sb_sLdL::synapse0x1b58b30() {
   return (neuron0x1b3bab0()*-0.606898);
}

double NNfunction_sb_sLdL::synapse0x1b58b70() {
   return (neuron0x1b3bdf0()*-0.222517);
}

double NNfunction_sb_sLdL::synapse0x1b58bb0() {
   return (neuron0x1b3c130()*0.65492);
}

double NNfunction_sb_sLdL::synapse0x1b41660() {
   return (neuron0x1b37570()*-0.471021);
}

double NNfunction_sb_sLdL::synapse0x1b416a0() {
   return (neuron0x1b378b0()*0.400017);
}

double NNfunction_sb_sLdL::synapse0x1b416e0() {
   return (neuron0x1b37bf0()*-0.148412);
}

double NNfunction_sb_sLdL::synapse0x1b41720() {
   return (neuron0x1b37f30()*0.371394);
}

double NNfunction_sb_sLdL::synapse0x1b41760() {
   return (neuron0x1b38270()*0.0538471);
}

double NNfunction_sb_sLdL::synapse0x1b417a0() {
   return (neuron0x1b385b0()*0.0647236);
}

double NNfunction_sb_sLdL::synapse0x1b417e0() {
   return (neuron0x1b388f0()*0.0668384);
}

double NNfunction_sb_sLdL::synapse0x1b41820() {
   return (neuron0x1b38c30()*0.165885);
}

double NNfunction_sb_sLdL::synapse0x1b59340() {
   return (neuron0x1b38f70()*-0.506371);
}

double NNfunction_sb_sLdL::synapse0x1b59380() {
   return (neuron0x1b392b0()*-0.322773);
}

double NNfunction_sb_sLdL::synapse0x1b593c0() {
   return (neuron0x1b395f0()*-0.163812);
}

double NNfunction_sb_sLdL::synapse0x1b59400() {
   return (neuron0x1b39930()*1.86349);
}

double NNfunction_sb_sLdL::synapse0x1b59440() {
   return (neuron0x1b39c70()*0.723392);
}

double NNfunction_sb_sLdL::synapse0x1b59480() {
   return (neuron0x1b39fb0()*0.076483);
}

double NNfunction_sb_sLdL::synapse0x1b594c0() {
   return (neuron0x1b3a2f0()*0.125607);
}

double NNfunction_sb_sLdL::synapse0x1b59500() {
   return (neuron0x1b3a630()*0.65729);
}

double NNfunction_sb_sLdL::synapse0x1b58d80() {
   return (neuron0x1b3a970()*-0.327661);
}

double NNfunction_sb_sLdL::synapse0x1b58dc0() {
   return (neuron0x1b3aed0()*0.140209);
}

double NNfunction_sb_sLdL::synapse0x1b59650() {
   return (neuron0x1b3b0f0()*0.749925);
}

double NNfunction_sb_sLdL::synapse0x1b59690() {
   return (neuron0x1b3b430()*-0.676483);
}

double NNfunction_sb_sLdL::synapse0x1b596d0() {
   return (neuron0x1b3b770()*0.506171);
}

double NNfunction_sb_sLdL::synapse0x1b59710() {
   return (neuron0x1b3bab0()*-0.0278202);
}

double NNfunction_sb_sLdL::synapse0x1b59750() {
   return (neuron0x1b3bdf0()*0.571323);
}

double NNfunction_sb_sLdL::synapse0x1b59790() {
   return (neuron0x1b3c130()*-0.331669);
}

double NNfunction_sb_sLdL::synapse0x1b59b10() {
   return (neuron0x1b37570()*0.509214);
}

double NNfunction_sb_sLdL::synapse0x1b59b50() {
   return (neuron0x1b378b0()*0.456302);
}

double NNfunction_sb_sLdL::synapse0x1b59b90() {
   return (neuron0x1b37bf0()*0.486432);
}

double NNfunction_sb_sLdL::synapse0x1b59bd0() {
   return (neuron0x1b37f30()*-0.174165);
}

double NNfunction_sb_sLdL::synapse0x1b59c10() {
   return (neuron0x1b38270()*1.01324);
}

double NNfunction_sb_sLdL::synapse0x1b59c50() {
   return (neuron0x1b385b0()*-0.881385);
}

double NNfunction_sb_sLdL::synapse0x1b59c90() {
   return (neuron0x1b388f0()*-0.264339);
}

double NNfunction_sb_sLdL::synapse0x1b59cd0() {
   return (neuron0x1b38c30()*-0.487258);
}

double NNfunction_sb_sLdL::synapse0x1b59d10() {
   return (neuron0x1b38f70()*0.495949);
}

double NNfunction_sb_sLdL::synapse0x1b59d50() {
   return (neuron0x1b392b0()*-0.0850063);
}

double NNfunction_sb_sLdL::synapse0x1b59d90() {
   return (neuron0x1b395f0()*-0.15877);
}

double NNfunction_sb_sLdL::synapse0x1b59dd0() {
   return (neuron0x1b39930()*-0.67143);
}

double NNfunction_sb_sLdL::synapse0x1b59e10() {
   return (neuron0x1b39c70()*-0.447586);
}

double NNfunction_sb_sLdL::synapse0x1b59e50() {
   return (neuron0x1b39fb0()*1.37303);
}

double NNfunction_sb_sLdL::synapse0x1b59e90() {
   return (neuron0x1b3a2f0()*0.570999);
}

double NNfunction_sb_sLdL::synapse0x1b59ed0() {
   return (neuron0x1b3a630()*0.572335);
}

double NNfunction_sb_sLdL::synapse0x1b59960() {
   return (neuron0x1b3a970()*-0.850785);
}

double NNfunction_sb_sLdL::synapse0x1b599a0() {
   return (neuron0x1b3aed0()*-0.262696);
}

double NNfunction_sb_sLdL::synapse0x1b5a020() {
   return (neuron0x1b3b0f0()*0.583674);
}

double NNfunction_sb_sLdL::synapse0x1b5a060() {
   return (neuron0x1b3b430()*-0.997589);
}

double NNfunction_sb_sLdL::synapse0x1b5a0a0() {
   return (neuron0x1b3b770()*-0.730329);
}

double NNfunction_sb_sLdL::synapse0x1b5a0e0() {
   return (neuron0x1b3bab0()*-0.211775);
}

double NNfunction_sb_sLdL::synapse0x1b5a120() {
   return (neuron0x1b3bdf0()*0.410661);
}

double NNfunction_sb_sLdL::synapse0x1b5a160() {
   return (neuron0x1b3c130()*-0.114616);
}

double NNfunction_sb_sLdL::synapse0x1b5a4e0() {
   return (neuron0x1b37570()*-0.561408);
}

double NNfunction_sb_sLdL::synapse0x1b5a520() {
   return (neuron0x1b378b0()*-0.575295);
}

double NNfunction_sb_sLdL::synapse0x1b5a560() {
   return (neuron0x1b37bf0()*1.57923);
}

double NNfunction_sb_sLdL::synapse0x1b5a5a0() {
   return (neuron0x1b37f30()*-0.00167899);
}

double NNfunction_sb_sLdL::synapse0x1b5a5e0() {
   return (neuron0x1b38270()*0.116731);
}

double NNfunction_sb_sLdL::synapse0x1b5a620() {
   return (neuron0x1b385b0()*-0.021328);
}

double NNfunction_sb_sLdL::synapse0x1b5a660() {
   return (neuron0x1b388f0()*-0.503954);
}

double NNfunction_sb_sLdL::synapse0x1b5a6a0() {
   return (neuron0x1b38c30()*0.363881);
}

double NNfunction_sb_sLdL::synapse0x1b5a6e0() {
   return (neuron0x1b38f70()*0.945036);
}

double NNfunction_sb_sLdL::synapse0x1b5a720() {
   return (neuron0x1b392b0()*0.0903527);
}

double NNfunction_sb_sLdL::synapse0x1b5a760() {
   return (neuron0x1b395f0()*0.208428);
}

double NNfunction_sb_sLdL::synapse0x1b5a7a0() {
   return (neuron0x1b39930()*-0.139071);
}

double NNfunction_sb_sLdL::synapse0x1b5a7e0() {
   return (neuron0x1b39c70()*0.322452);
}

double NNfunction_sb_sLdL::synapse0x1b5a820() {
   return (neuron0x1b39fb0()*0.272763);
}

double NNfunction_sb_sLdL::synapse0x1b5a860() {
   return (neuron0x1b3a2f0()*0.214109);
}

double NNfunction_sb_sLdL::synapse0x1b5a8a0() {
   return (neuron0x1b3a630()*-0.0232436);
}

double NNfunction_sb_sLdL::synapse0x1b5a330() {
   return (neuron0x1b3a970()*0.846331);
}

double NNfunction_sb_sLdL::synapse0x1b5a370() {
   return (neuron0x1b3aed0()*0.32665);
}

double NNfunction_sb_sLdL::synapse0x1b4aea0() {
   return (neuron0x1b3b0f0()*0.291113);
}

double NNfunction_sb_sLdL::synapse0x1b4aee0() {
   return (neuron0x1b3b430()*-0.0466425);
}

double NNfunction_sb_sLdL::synapse0x1b4af20() {
   return (neuron0x1b3b770()*0.348936);
}

double NNfunction_sb_sLdL::synapse0x1b4af60() {
   return (neuron0x1b3bab0()*0.0338572);
}

double NNfunction_sb_sLdL::synapse0x1b4afa0() {
   return (neuron0x1b3bdf0()*-0.269616);
}

double NNfunction_sb_sLdL::synapse0x1b4afe0() {
   return (neuron0x1b3c130()*-0.0195062);
}

double NNfunction_sb_sLdL::synapse0x1b4b360() {
   return (neuron0x1b37570()*-0.011511);
}

double NNfunction_sb_sLdL::synapse0x1b4b3a0() {
   return (neuron0x1b378b0()*-0.00891755);
}

double NNfunction_sb_sLdL::synapse0x1b4b3e0() {
   return (neuron0x1b37bf0()*0.107016);
}

double NNfunction_sb_sLdL::synapse0x1b4b420() {
   return (neuron0x1b37f30()*-0.0824369);
}

double NNfunction_sb_sLdL::synapse0x1b4b460() {
   return (neuron0x1b38270()*0.00484286);
}

double NNfunction_sb_sLdL::synapse0x1b4b4a0() {
   return (neuron0x1b385b0()*0.00150419);
}

double NNfunction_sb_sLdL::synapse0x1b4b4e0() {
   return (neuron0x1b388f0()*-0.00222293);
}

double NNfunction_sb_sLdL::synapse0x1b4b520() {
   return (neuron0x1b38c30()*-0.00979876);
}

double NNfunction_sb_sLdL::synapse0x1b4b560() {
   return (neuron0x1b38f70()*-0.0338875);
}

double NNfunction_sb_sLdL::synapse0x1b4b5a0() {
   return (neuron0x1b392b0()*-0.0121581);
}

double NNfunction_sb_sLdL::synapse0x1b4b5e0() {
   return (neuron0x1b395f0()*0.0185701);
}

double NNfunction_sb_sLdL::synapse0x1b4b620() {
   return (neuron0x1b39930()*1.96718);
}

double NNfunction_sb_sLdL::synapse0x1b4b660() {
   return (neuron0x1b39c70()*-0.206182);
}

double NNfunction_sb_sLdL::synapse0x1b4b6a0() {
   return (neuron0x1b39fb0()*0.00948463);
}

double NNfunction_sb_sLdL::synapse0x1b4b6e0() {
   return (neuron0x1b3a2f0()*0.0273046);
}

double NNfunction_sb_sLdL::synapse0x1b4b720() {
   return (neuron0x1b3a630()*0.0432199);
}

double NNfunction_sb_sLdL::synapse0x1b4b1b0() {
   return (neuron0x1b3a970()*0.0101654);
}

double NNfunction_sb_sLdL::synapse0x1b4b1f0() {
   return (neuron0x1b3aed0()*0.0280603);
}

double NNfunction_sb_sLdL::synapse0x1b4b870() {
   return (neuron0x1b3b0f0()*-0.0155035);
}

double NNfunction_sb_sLdL::synapse0x1b4b8b0() {
   return (neuron0x1b3b430()*-0.0483767);
}

double NNfunction_sb_sLdL::synapse0x1b4b8f0() {
   return (neuron0x1b3b770()*-0.0184036);
}

double NNfunction_sb_sLdL::synapse0x1b4b930() {
   return (neuron0x1b3bab0()*0.0020695);
}

double NNfunction_sb_sLdL::synapse0x1b4b970() {
   return (neuron0x1b3bdf0()*0.00248101);
}

double NNfunction_sb_sLdL::synapse0x1b4b9b0() {
   return (neuron0x1b3c130()*0.017532);
}

double NNfunction_sb_sLdL::synapse0x1b4bd30() {
   return (neuron0x1b37570()*0.203315);
}

double NNfunction_sb_sLdL::synapse0x1b4bd70() {
   return (neuron0x1b378b0()*0.548833);
}

double NNfunction_sb_sLdL::synapse0x1b4bdb0() {
   return (neuron0x1b37bf0()*-0.568924);
}

double NNfunction_sb_sLdL::synapse0x1b4bdf0() {
   return (neuron0x1b37f30()*0.289772);
}

double NNfunction_sb_sLdL::synapse0x1b4be30() {
   return (neuron0x1b38270()*0.123523);
}

double NNfunction_sb_sLdL::synapse0x1b4be70() {
   return (neuron0x1b385b0()*0.279997);
}

double NNfunction_sb_sLdL::synapse0x1b4beb0() {
   return (neuron0x1b388f0()*1.22797);
}

double NNfunction_sb_sLdL::synapse0x1b4bef0() {
   return (neuron0x1b38c30()*0.307849);
}

double NNfunction_sb_sLdL::synapse0x1b4bf30() {
   return (neuron0x1b38f70()*-0.553219);
}

double NNfunction_sb_sLdL::synapse0x1b4bf70() {
   return (neuron0x1b392b0()*0.154133);
}

double NNfunction_sb_sLdL::synapse0x1b4bfb0() {
   return (neuron0x1b395f0()*0.222565);
}

double NNfunction_sb_sLdL::synapse0x1b4bff0() {
   return (neuron0x1b39930()*-0.223533);
}

double NNfunction_sb_sLdL::synapse0x1b4c030() {
   return (neuron0x1b39c70()*-0.16702);
}

double NNfunction_sb_sLdL::synapse0x1b4c070() {
   return (neuron0x1b39fb0()*-1.04895);
}

double NNfunction_sb_sLdL::synapse0x1b4c0b0() {
   return (neuron0x1b3a2f0()*0.121482);
}

double NNfunction_sb_sLdL::synapse0x1b4c0f0() {
   return (neuron0x1b3a630()*-0.0162855);
}

double NNfunction_sb_sLdL::synapse0x1b4bb80() {
   return (neuron0x1b3a970()*-0.0918541);
}

double NNfunction_sb_sLdL::synapse0x1b4bbc0() {
   return (neuron0x1b3aed0()*-0.189069);
}

double NNfunction_sb_sLdL::synapse0x1b4c240() {
   return (neuron0x1b3b0f0()*-1.08817);
}

double NNfunction_sb_sLdL::synapse0x1b4c280() {
   return (neuron0x1b3b430()*0.180863);
}

double NNfunction_sb_sLdL::synapse0x1b4c2c0() {
   return (neuron0x1b3b770()*0.922568);
}

double NNfunction_sb_sLdL::synapse0x1b4c300() {
   return (neuron0x1b3bab0()*-0.201246);
}

double NNfunction_sb_sLdL::synapse0x1b4c340() {
   return (neuron0x1b3bdf0()*-0.149685);
}

double NNfunction_sb_sLdL::synapse0x1b4c380() {
   return (neuron0x1b3c130()*-1.10153);
}

double NNfunction_sb_sLdL::synapse0x1b4c700() {
   return (neuron0x1b37570()*-0.866229);
}

double NNfunction_sb_sLdL::synapse0x1b4c740() {
   return (neuron0x1b378b0()*-0.507918);
}

double NNfunction_sb_sLdL::synapse0x1b4c780() {
   return (neuron0x1b37bf0()*-0.0754451);
}

double NNfunction_sb_sLdL::synapse0x1b4c7c0() {
   return (neuron0x1b37f30()*0.480509);
}

double NNfunction_sb_sLdL::synapse0x1b4c800() {
   return (neuron0x1b38270()*0.431891);
}

double NNfunction_sb_sLdL::synapse0x1b4c840() {
   return (neuron0x1b385b0()*-0.669923);
}

double NNfunction_sb_sLdL::synapse0x1b4c880() {
   return (neuron0x1b388f0()*0.45868);
}

double NNfunction_sb_sLdL::synapse0x1b4c8c0() {
   return (neuron0x1b38c30()*-0.734189);
}

double NNfunction_sb_sLdL::synapse0x1b4c900() {
   return (neuron0x1b38f70()*1.03462);
}

double NNfunction_sb_sLdL::synapse0x1b4c940() {
   return (neuron0x1b392b0()*1.37881);
}

double NNfunction_sb_sLdL::synapse0x1b4c980() {
   return (neuron0x1b395f0()*-0.075345);
}

double NNfunction_sb_sLdL::synapse0x1b4c9c0() {
   return (neuron0x1b39930()*0.406132);
}

double NNfunction_sb_sLdL::synapse0x1b4ca00() {
   return (neuron0x1b39c70()*1.08961);
}

double NNfunction_sb_sLdL::synapse0x1b4ca40() {
   return (neuron0x1b39fb0()*1.42891);
}

double NNfunction_sb_sLdL::synapse0x1b4ca80() {
   return (neuron0x1b3a2f0()*0.567552);
}

double NNfunction_sb_sLdL::synapse0x1b4cac0() {
   return (neuron0x1b3a630()*-0.419944);
}

double NNfunction_sb_sLdL::synapse0x1b4c550() {
   return (neuron0x1b3a970()*-0.160818);
}

double NNfunction_sb_sLdL::synapse0x1b4c590() {
   return (neuron0x1b3aed0()*-0.0883825);
}

double NNfunction_sb_sLdL::synapse0x1b4cc10() {
   return (neuron0x1b3b0f0()*0.156191);
}

double NNfunction_sb_sLdL::synapse0x1b4cc50() {
   return (neuron0x1b3b430()*-0.0655457);
}

double NNfunction_sb_sLdL::synapse0x1b4cc90() {
   return (neuron0x1b3b770()*-0.309663);
}

double NNfunction_sb_sLdL::synapse0x1b4ccd0() {
   return (neuron0x1b3bab0()*-0.0111074);
}

double NNfunction_sb_sLdL::synapse0x1b4cd10() {
   return (neuron0x1b3bdf0()*0.594446);
}

double NNfunction_sb_sLdL::synapse0x1b4cd50() {
   return (neuron0x1b3c130()*-0.0648034);
}

double NNfunction_sb_sLdL::synapse0x1b5ec20() {
   return (neuron0x1b37570()*-0.0258632);
}

double NNfunction_sb_sLdL::synapse0x1b5ec60() {
   return (neuron0x1b378b0()*-0.00612452);
}

double NNfunction_sb_sLdL::synapse0x1b5eca0() {
   return (neuron0x1b37bf0()*-0.0135598);
}

double NNfunction_sb_sLdL::synapse0x1b5ece0() {
   return (neuron0x1b37f30()*10.6285);
}

double NNfunction_sb_sLdL::synapse0x1b5ed20() {
   return (neuron0x1b38270()*-0.021102);
}

double NNfunction_sb_sLdL::synapse0x1b5ed60() {
   return (neuron0x1b385b0()*-0.00945784);
}

double NNfunction_sb_sLdL::synapse0x1b5eda0() {
   return (neuron0x1b388f0()*-0.00477887);
}

double NNfunction_sb_sLdL::synapse0x1b5ede0() {
   return (neuron0x1b38c30()*-0.00623055);
}

double NNfunction_sb_sLdL::synapse0x1b5ee20() {
   return (neuron0x1b38f70()*-0.0213824);
}

double NNfunction_sb_sLdL::synapse0x1b5ee60() {
   return (neuron0x1b392b0()*0.0316113);
}

double NNfunction_sb_sLdL::synapse0x1b5eea0() {
   return (neuron0x1b395f0()*-0.00638372);
}

double NNfunction_sb_sLdL::synapse0x1b5eee0() {
   return (neuron0x1b39930()*-0.0511942);
}

double NNfunction_sb_sLdL::synapse0x1b5ef20() {
   return (neuron0x1b39c70()*-0.0762046);
}

double NNfunction_sb_sLdL::synapse0x1b5ef60() {
   return (neuron0x1b39fb0()*-0.00249081);
}

double NNfunction_sb_sLdL::synapse0x1b5efa0() {
   return (neuron0x1b3a2f0()*0.0261849);
}

double NNfunction_sb_sLdL::synapse0x1b5efe0() {
   return (neuron0x1b3a630()*0.0509522);
}

double NNfunction_sb_sLdL::synapse0x1b4cd90() {
   return (neuron0x1b3a970()*-0.00318292);
}

double NNfunction_sb_sLdL::synapse0x1b4cdd0() {
   return (neuron0x1b3aed0()*0.0151599);
}

double NNfunction_sb_sLdL::synapse0x1b5f130() {
   return (neuron0x1b3b0f0()*0.00527277);
}

double NNfunction_sb_sLdL::synapse0x1b5f170() {
   return (neuron0x1b3b430()*0.00599248);
}

double NNfunction_sb_sLdL::synapse0x1b5f1b0() {
   return (neuron0x1b3b770()*-0.0257846);
}

double NNfunction_sb_sLdL::synapse0x1b5f1f0() {
   return (neuron0x1b3bab0()*-0.031335);
}

double NNfunction_sb_sLdL::synapse0x1b5f230() {
   return (neuron0x1b3bdf0()*-0.0139646);
}

double NNfunction_sb_sLdL::synapse0x1b5f270() {
   return (neuron0x1b3c130()*-0.00233546);
}

double NNfunction_sb_sLdL::synapse0x1b5f5f0() {
   return (neuron0x1b37570()*0.14629);
}

double NNfunction_sb_sLdL::synapse0x1b5f630() {
   return (neuron0x1b378b0()*0.0102186);
}

double NNfunction_sb_sLdL::synapse0x1b5f670() {
   return (neuron0x1b37bf0()*-0.190847);
}

double NNfunction_sb_sLdL::synapse0x1b5f6b0() {
   return (neuron0x1b37f30()*-0.188292);
}

double NNfunction_sb_sLdL::synapse0x1b5f6f0() {
   return (neuron0x1b38270()*0.584299);
}

double NNfunction_sb_sLdL::synapse0x1b5f730() {
   return (neuron0x1b385b0()*0.297246);
}

double NNfunction_sb_sLdL::synapse0x1b5f770() {
   return (neuron0x1b388f0()*0.0717788);
}

double NNfunction_sb_sLdL::synapse0x1b5f7b0() {
   return (neuron0x1b38c30()*-0.537635);
}

double NNfunction_sb_sLdL::synapse0x1b5f7f0() {
   return (neuron0x1b38f70()*0.583699);
}

double NNfunction_sb_sLdL::synapse0x1b5f830() {
   return (neuron0x1b392b0()*0.343182);
}

double NNfunction_sb_sLdL::synapse0x1b5f870() {
   return (neuron0x1b395f0()*0.0795933);
}

double NNfunction_sb_sLdL::synapse0x1b5f8b0() {
   return (neuron0x1b39930()*-0.494064);
}

double NNfunction_sb_sLdL::synapse0x1b5f8f0() {
   return (neuron0x1b39c70()*0.641917);
}

double NNfunction_sb_sLdL::synapse0x1b5f930() {
   return (neuron0x1b39fb0()*0.297726);
}

double NNfunction_sb_sLdL::synapse0x1b5f970() {
   return (neuron0x1b3a2f0()*0.554604);
}

double NNfunction_sb_sLdL::synapse0x1b5f9b0() {
   return (neuron0x1b3a630()*-0.727684);
}

double NNfunction_sb_sLdL::synapse0x1b5f440() {
   return (neuron0x1b3a970()*0.678831);
}

double NNfunction_sb_sLdL::synapse0x1b5f480() {
   return (neuron0x1b3aed0()*0.712709);
}

double NNfunction_sb_sLdL::synapse0x1b5fb00() {
   return (neuron0x1b3b0f0()*0.439533);
}

double NNfunction_sb_sLdL::synapse0x1b5fb40() {
   return (neuron0x1b3b430()*0.511834);
}

double NNfunction_sb_sLdL::synapse0x1b5fb80() {
   return (neuron0x1b3b770()*0.921115);
}

double NNfunction_sb_sLdL::synapse0x1b5fbc0() {
   return (neuron0x1b3bab0()*0.28249);
}

double NNfunction_sb_sLdL::synapse0x1b5fc00() {
   return (neuron0x1b3bdf0()*-0.242429);
}

double NNfunction_sb_sLdL::synapse0x1b5fc40() {
   return (neuron0x1b3c130()*-0.280822);
}

double NNfunction_sb_sLdL::synapse0x1b5ffc0() {
   return (neuron0x1b37570()*-0.165146);
}

double NNfunction_sb_sLdL::synapse0x1b60000() {
   return (neuron0x1b378b0()*0.0566789);
}

double NNfunction_sb_sLdL::synapse0x1b60040() {
   return (neuron0x1b37bf0()*-0.338832);
}

double NNfunction_sb_sLdL::synapse0x1b60080() {
   return (neuron0x1b37f30()*1.48447);
}

double NNfunction_sb_sLdL::synapse0x1b600c0() {
   return (neuron0x1b38270()*0.649818);
}

double NNfunction_sb_sLdL::synapse0x1b60100() {
   return (neuron0x1b385b0()*-0.177291);
}

double NNfunction_sb_sLdL::synapse0x1b60140() {
   return (neuron0x1b388f0()*-0.171867);
}

double NNfunction_sb_sLdL::synapse0x1b60180() {
   return (neuron0x1b38c30()*0.1903);
}

double NNfunction_sb_sLdL::synapse0x1b601c0() {
   return (neuron0x1b38f70()*-0.50683);
}

double NNfunction_sb_sLdL::synapse0x1b60200() {
   return (neuron0x1b392b0()*-0.0218212);
}

double NNfunction_sb_sLdL::synapse0x1b60240() {
   return (neuron0x1b395f0()*-0.209127);
}

double NNfunction_sb_sLdL::synapse0x1b60280() {
   return (neuron0x1b39930()*0.32573);
}

double NNfunction_sb_sLdL::synapse0x1b602c0() {
   return (neuron0x1b39c70()*0.0267977);
}

double NNfunction_sb_sLdL::synapse0x1b60300() {
   return (neuron0x1b39fb0()*-0.000748681);
}

double NNfunction_sb_sLdL::synapse0x1b60340() {
   return (neuron0x1b3a2f0()*-0.18597);
}

double NNfunction_sb_sLdL::synapse0x1b60380() {
   return (neuron0x1b3a630()*0.0460867);
}

double NNfunction_sb_sLdL::synapse0x1b5fe10() {
   return (neuron0x1b3a970()*0.10913);
}

double NNfunction_sb_sLdL::synapse0x1b5fe50() {
   return (neuron0x1b3aed0()*0.341886);
}

double NNfunction_sb_sLdL::synapse0x1b604d0() {
   return (neuron0x1b3b0f0()*-0.0068141);
}

double NNfunction_sb_sLdL::synapse0x1b60510() {
   return (neuron0x1b3b430()*0.136167);
}

double NNfunction_sb_sLdL::synapse0x1b60550() {
   return (neuron0x1b3b770()*0.244506);
}

double NNfunction_sb_sLdL::synapse0x1b60590() {
   return (neuron0x1b3bab0()*-0.179638);
}

double NNfunction_sb_sLdL::synapse0x1b605d0() {
   return (neuron0x1b3bdf0()*-0.412458);
}

double NNfunction_sb_sLdL::synapse0x1b60610() {
   return (neuron0x1b3c130()*-0.39302);
}

double NNfunction_sb_sLdL::synapse0x1b60990() {
   return (neuron0x1b37570()*0.0247905);
}

double NNfunction_sb_sLdL::synapse0x1b609d0() {
   return (neuron0x1b378b0()*0.0101086);
}

double NNfunction_sb_sLdL::synapse0x1b60a10() {
   return (neuron0x1b37bf0()*-0.109827);
}

double NNfunction_sb_sLdL::synapse0x1b60a50() {
   return (neuron0x1b37f30()*0.336781);
}

double NNfunction_sb_sLdL::synapse0x1b60a90() {
   return (neuron0x1b38270()*0.0229787);
}

double NNfunction_sb_sLdL::synapse0x1b60ad0() {
   return (neuron0x1b385b0()*0.0486293);
}

double NNfunction_sb_sLdL::synapse0x1b60b10() {
   return (neuron0x1b388f0()*0.00232887);
}

double NNfunction_sb_sLdL::synapse0x1b60b50() {
   return (neuron0x1b38c30()*-0.0147678);
}

double NNfunction_sb_sLdL::synapse0x1b60b90() {
   return (neuron0x1b38f70()*-0.00219661);
}

double NNfunction_sb_sLdL::synapse0x1b60bd0() {
   return (neuron0x1b392b0()*0.0216006);
}

double NNfunction_sb_sLdL::synapse0x1b60c10() {
   return (neuron0x1b395f0()*0.00255109);
}

double NNfunction_sb_sLdL::synapse0x1b60c50() {
   return (neuron0x1b39930()*0.406658);
}

double NNfunction_sb_sLdL::synapse0x1b60c90() {
   return (neuron0x1b39c70()*2.70112);
}

double NNfunction_sb_sLdL::synapse0x1b60cd0() {
   return (neuron0x1b39fb0()*-0.0248865);
}

double NNfunction_sb_sLdL::synapse0x1b60d10() {
   return (neuron0x1b3a2f0()*-0.0029519);
}

double NNfunction_sb_sLdL::synapse0x1b60d50() {
   return (neuron0x1b3a630()*0.0254441);
}

double NNfunction_sb_sLdL::synapse0x1b607e0() {
   return (neuron0x1b3a970()*-0.0182536);
}

double NNfunction_sb_sLdL::synapse0x1b60820() {
   return (neuron0x1b3aed0()*-0.0271887);
}

double NNfunction_sb_sLdL::synapse0x1b60ea0() {
   return (neuron0x1b3b0f0()*-0.000811837);
}

double NNfunction_sb_sLdL::synapse0x1b60ee0() {
   return (neuron0x1b3b430()*-0.0478488);
}

double NNfunction_sb_sLdL::synapse0x1b60f20() {
   return (neuron0x1b3b770()*-0.000483453);
}

double NNfunction_sb_sLdL::synapse0x1b60f60() {
   return (neuron0x1b3bab0()*-0.000782755);
}

double NNfunction_sb_sLdL::synapse0x1b60fa0() {
   return (neuron0x1b3bdf0()*-0.0201575);
}

double NNfunction_sb_sLdL::synapse0x1b60fe0() {
   return (neuron0x1b3c130()*0.0187385);
}

double NNfunction_sb_sLdL::synapse0x1b3d580() {
   return (neuron0x1b3c5d0()*0.0342122);
}

double NNfunction_sb_sLdL::synapse0x1b3d5c0() {
   return (neuron0x1b3cee0()*0.0544946);
}

double NNfunction_sb_sLdL::synapse0x1b3ea90() {
   return (neuron0x1b3d9c0()*-0.256518);
}

double NNfunction_sb_sLdL::synapse0x1b3ead0() {
   return (neuron0x18f7250()*0.0702532);
}

double NNfunction_sb_sLdL::synapse0x1b3f460() {
   return (neuron0x1b3e7e0()*0.0241827);
}

double NNfunction_sb_sLdL::synapse0x1b3f4a0() {
   return (neuron0x1b3f1b0()*-0.0231221);
}

double NNfunction_sb_sLdL::synapse0x1b40230() {
   return (neuron0x1b3ff80()*0.047604);
}

double NNfunction_sb_sLdL::synapse0x1b40270() {
   return (neuron0x1b40950()*-1.84124);
}

double NNfunction_sb_sLdL::synapse0x1b40c00() {
   return (neuron0x1b41320()*-1.19789);
}

double NNfunction_sb_sLdL::synapse0x1b40c40() {
   return (neuron0x1b41e00()*0.00869769);
}

double NNfunction_sb_sLdL::synapse0x1b415d0() {
   return (neuron0x1b427d0()*-0.038383);
}

double NNfunction_sb_sLdL::synapse0x1b41610() {
   return (neuron0x1b3f8b0()*0.0244395);
}

double NNfunction_sb_sLdL::synapse0x1b420b0() {
   return (neuron0x1b44380()*-0.0149463);
}

double NNfunction_sb_sLdL::synapse0x1b420f0() {
   return (neuron0x1b44d50()*0.0739008);
}

double NNfunction_sb_sLdL::synapse0x1b42a80() {
   return (neuron0x1b45720()*-0.0717903);
}

double NNfunction_sb_sLdL::synapse0x1b42ac0() {
   return (neuron0x1b460f0()*0.060559);
}

double NNfunction_sb_sLdL::synapse0x1b3fb60() {
   return (neuron0x1b47f00()*-1.28149);
}

double NNfunction_sb_sLdL::synapse0x1b3fba0() {
   return (neuron0x1b481e0()*-0.0152023);
}

double NNfunction_sb_sLdL::synapse0x1b44630() {
   return (neuron0x1b48bb0()*-0.0713819);
}

double NNfunction_sb_sLdL::synapse0x1b44670() {
   return (neuron0x1b49580()*1.824);
}

double NNfunction_sb_sLdL::synapse0x1b45000() {
   return (neuron0x1b49f50()*0.0434037);
}

double NNfunction_sb_sLdL::synapse0x1b45040() {
   return (neuron0x1b4a920()*-0.0428732);
}

double NNfunction_sb_sLdL::synapse0x1b459d0() {
   return (neuron0x1b43470()*0.0197995);
}

double NNfunction_sb_sLdL::synapse0x1b45a10() {
   return (neuron0x1b43e40()*-0.0283819);
}

double NNfunction_sb_sLdL::synapse0x1b463a0() {
   return (neuron0x1b4d6b0()*0.00704188);
}

double NNfunction_sb_sLdL::synapse0x1b463e0() {
   return (neuron0x1b4e080()*-0.137082);
}

double NNfunction_sb_sLdL::synapse0x1b3a510() {
   return (neuron0x1b4ea50()*-0.312059);
}

double NNfunction_sb_sLdL::synapse0x1b3a550() {
   return (neuron0x1b4f420()*-0.0696707);
}

double NNfunction_sb_sLdL::synapse0x1b48490() {
   return (neuron0x1b4fdf0()*0.132725);
}

double NNfunction_sb_sLdL::synapse0x1b484d0() {
   return (neuron0x1b507c0()*0.698643);
}

double NNfunction_sb_sLdL::synapse0x1b48e60() {
   return (neuron0x1b51190()*-0.00418279);
}

double NNfunction_sb_sLdL::synapse0x1b48ea0() {
   return (neuron0x1b51b60()*-0.26388);
}

double NNfunction_sb_sLdL::synapse0x1b49830() {
   return (neuron0x1b47bf0()*0.0312437);
}

double NNfunction_sb_sLdL::synapse0x1b49870() {
   return (neuron0x1b54740()*-0.191955);
}

double NNfunction_sb_sLdL::synapse0x1b4a200() {
   return (neuron0x1b55110()*-0.0359592);
}

double NNfunction_sb_sLdL::synapse0x1b4a240() {
   return (neuron0x1b55ae0()*0.117246);
}

double NNfunction_sb_sLdL::synapse0x1b4abd0() {
   return (neuron0x1b564b0()*0.0691114);
}

double NNfunction_sb_sLdL::synapse0x1b4ac10() {
   return (neuron0x1b56e80()*-0.0111264);
}

double NNfunction_sb_sLdL::synapse0x1b43720() {
   return (neuron0x1b57850()*-0.605277);
}

double NNfunction_sb_sLdL::synapse0x1b43760() {
   return (neuron0x1b58220()*-0.0805173);
}

double NNfunction_sb_sLdL::synapse0x1b4cfd0() {
   return (neuron0x1b58bf0()*0.041898);
}

double NNfunction_sb_sLdL::synapse0x1b4d010() {
   return (neuron0x1b597d0()*-0.0559571);
}

double NNfunction_sb_sLdL::synapse0x1b4d960() {
   return (neuron0x1b5a1a0()*0.0412297);
}

double NNfunction_sb_sLdL::synapse0x1b4d9a0() {
   return (neuron0x1b4b020()*1.55795);
}

double NNfunction_sb_sLdL::synapse0x1b4e330() {
   return (neuron0x1b4b9f0()*0.0472344);
}

double NNfunction_sb_sLdL::synapse0x1b4e370() {
   return (neuron0x1b4c3c0()*0.0705432);
}

double NNfunction_sb_sLdL::synapse0x1b4ed00() {
   return (neuron0x1b5ea00()*0.875381);
}

double NNfunction_sb_sLdL::synapse0x1b4ed40() {
   return (neuron0x1b5f2b0()*-0.0700948);
}

double NNfunction_sb_sLdL::synapse0x1b4f6d0() {
   return (neuron0x1b5fc80()*0.0128201);
}

double NNfunction_sb_sLdL::synapse0x1b4f710() {
   return (neuron0x1b60650()*0.313253);
}

double NNfunction_sb_sLdL::synapse0x1b51e10() {
   return (neuron0x1b3c5d0()*-0.0940169);
}

double NNfunction_sb_sLdL::synapse0x1b51e50() {
   return (neuron0x1b3cee0()*0.0145982);
}

double NNfunction_sb_sLdL::synapse0x1b473d0() {
   return (neuron0x1b3d9c0()*-0.443268);
}

double NNfunction_sb_sLdL::synapse0x1b47410() {
   return (neuron0x18f7250()*-0.0638654);
}

double NNfunction_sb_sLdL::synapse0x1b549f0() {
   return (neuron0x1b3e7e0()*-0.0499859);
}

double NNfunction_sb_sLdL::synapse0x1b54a30() {
   return (neuron0x1b3f1b0()*0.0775902);
}

double NNfunction_sb_sLdL::synapse0x1b553c0() {
   return (neuron0x1b3ff80()*-0.0146799);
}

double NNfunction_sb_sLdL::synapse0x1b55400() {
   return (neuron0x1b40950()*0.718016);
}

double NNfunction_sb_sLdL::synapse0x1b55d90() {
   return (neuron0x1b41320()*-1.08858);
}

double NNfunction_sb_sLdL::synapse0x1b55dd0() {
   return (neuron0x1b41e00()*0.093231);
}

double NNfunction_sb_sLdL::synapse0x1b56760() {
   return (neuron0x1b427d0()*0.061973);
}

double NNfunction_sb_sLdL::synapse0x1b567a0() {
   return (neuron0x1b3f8b0()*0.0376411);
}

double NNfunction_sb_sLdL::synapse0x1b57130() {
   return (neuron0x1b44380()*0.0290226);
}

double NNfunction_sb_sLdL::synapse0x1b57170() {
   return (neuron0x1b44d50()*-0.00628445);
}

double NNfunction_sb_sLdL::synapse0x1b57b00() {
   return (neuron0x1b45720()*0.145578);
}

double NNfunction_sb_sLdL::synapse0x1b57b40() {
   return (neuron0x1b460f0()*0.00666592);
}

double NNfunction_sb_sLdL::synapse0x1b584d0() {
   return (neuron0x1b47f00()*-0.691248);
}

double NNfunction_sb_sLdL::synapse0x1b58510() {
   return (neuron0x1b481e0()*0.0755284);
}

double NNfunction_sb_sLdL::synapse0x1b58ea0() {
   return (neuron0x1b48bb0()*0.00189861);
}

double NNfunction_sb_sLdL::synapse0x1b58ee0() {
   return (neuron0x1b49580()*-1.09081);
}

double NNfunction_sb_sLdL::synapse0x1b59a80() {
   return (neuron0x1b49f50()*0.00316585);
}

double NNfunction_sb_sLdL::synapse0x1b59ac0() {
   return (neuron0x1b4a920()*0.113625);
}

double NNfunction_sb_sLdL::synapse0x1b5a450() {
   return (neuron0x1b43470()*-0.123225);
}

double NNfunction_sb_sLdL::synapse0x1b5a490() {
   return (neuron0x1b43e40()*0.0749629);
}

double NNfunction_sb_sLdL::synapse0x1b4b2d0() {
   return (neuron0x1b4d6b0()*-0.0100691);
}

double NNfunction_sb_sLdL::synapse0x1b4b310() {
   return (neuron0x1b4e080()*0.0706625);
}

double NNfunction_sb_sLdL::synapse0x1b4bca0() {
   return (neuron0x1b4ea50()*-0.0303496);
}

double NNfunction_sb_sLdL::synapse0x1b4bce0() {
   return (neuron0x1b4f420()*0.141973);
}

double NNfunction_sb_sLdL::synapse0x1b4c670() {
   return (neuron0x1b4fdf0()*-0.00417718);
}

double NNfunction_sb_sLdL::synapse0x1b4c6b0() {
   return (neuron0x1b507c0()*-1.18101);
}

double NNfunction_sb_sLdL::synapse0x1b5eb90() {
   return (neuron0x1b51190()*-0.0113882);
}

double NNfunction_sb_sLdL::synapse0x1b5ebd0() {
   return (neuron0x1b51b60()*-0.577301);
}

double NNfunction_sb_sLdL::synapse0x1b5f560() {
   return (neuron0x1b47bf0()*-0.0142755);
}

double NNfunction_sb_sLdL::synapse0x1b5f5a0() {
   return (neuron0x1b54740()*-0.773649);
}

double NNfunction_sb_sLdL::synapse0x1b5ff30() {
   return (neuron0x1b55110()*0.0736739);
}

double NNfunction_sb_sLdL::synapse0x1b5ff70() {
   return (neuron0x1b55ae0()*0.600022);
}

double NNfunction_sb_sLdL::synapse0x1b60900() {
   return (neuron0x1b564b0()*-0.030284);
}

double NNfunction_sb_sLdL::synapse0x1b60940() {
   return (neuron0x1b56e80()*-0.00273238);
}

double NNfunction_sb_sLdL::synapse0x1b3c7f0() {
   return (neuron0x1b57850()*1.12635);
}

double NNfunction_sb_sLdL::synapse0x1b3c830() {
   return (neuron0x1b58220()*-0.0579229);
}

double NNfunction_sb_sLdL::synapse0x1b500a0() {
   return (neuron0x1b58bf0()*0.031835);
}

double NNfunction_sb_sLdL::synapse0x1b500e0() {
   return (neuron0x1b597d0()*0.00264405);
}

double NNfunction_sb_sLdL::synapse0x1b61020() {
   return (neuron0x1b5a1a0()*-0.0329031);
}

double NNfunction_sb_sLdL::synapse0x1b61060() {
   return (neuron0x1b4b020()*1.25868);
}

double NNfunction_sb_sLdL::synapse0x1b610a0() {
   return (neuron0x1b4b9f0()*0.00928113);
}

double NNfunction_sb_sLdL::synapse0x1b610e0() {
   return (neuron0x1b4c3c0()*-0.0673695);
}

double NNfunction_sb_sLdL::synapse0x1b67f90() {
   return (neuron0x1b5ea00()*0.578582);
}

double NNfunction_sb_sLdL::synapse0x1b67fd0() {
   return (neuron0x1b5f2b0()*-0.0292212);
}

double NNfunction_sb_sLdL::synapse0x1b68010() {
   return (neuron0x1b5fc80()*0.085487);
}

double NNfunction_sb_sLdL::synapse0x1b68050() {
   return (neuron0x1b60650()*0.116092);
}

double NNfunction_sb_sLdL::synapse0x1b683d0() {
   return (neuron0x1b3c5d0()*0.354734);
}

double NNfunction_sb_sLdL::synapse0x1b68410() {
   return (neuron0x1b3cee0()*0.0993778);
}

double NNfunction_sb_sLdL::synapse0x1b68450() {
   return (neuron0x1b3d9c0()*0.379501);
}

double NNfunction_sb_sLdL::synapse0x1b68490() {
   return (neuron0x18f7250()*0.368763);
}

double NNfunction_sb_sLdL::synapse0x1b684d0() {
   return (neuron0x1b3e7e0()*0.222338);
}

double NNfunction_sb_sLdL::synapse0x1b68510() {
   return (neuron0x1b3f1b0()*-0.0791979);
}

double NNfunction_sb_sLdL::synapse0x1b68550() {
   return (neuron0x1b3ff80()*0.128611);
}

double NNfunction_sb_sLdL::synapse0x1b68590() {
   return (neuron0x1b40950()*0.470114);
}

double NNfunction_sb_sLdL::synapse0x1b685d0() {
   return (neuron0x1b41320()*-0.161);
}

double NNfunction_sb_sLdL::synapse0x1b68610() {
   return (neuron0x1b41e00()*-0.19282);
}

double NNfunction_sb_sLdL::synapse0x1b68650() {
   return (neuron0x1b427d0()*-0.317345);
}

double NNfunction_sb_sLdL::synapse0x1b68690() {
   return (neuron0x1b3f8b0()*-0.0352795);
}

double NNfunction_sb_sLdL::synapse0x1b686d0() {
   return (neuron0x1b44380()*-0.12156);
}

double NNfunction_sb_sLdL::synapse0x1b68710() {
   return (neuron0x1b44d50()*0.216705);
}

double NNfunction_sb_sLdL::synapse0x1b68750() {
   return (neuron0x1b45720()*-0.548525);
}

double NNfunction_sb_sLdL::synapse0x1b68790() {
   return (neuron0x1b460f0()*0.101184);
}

double NNfunction_sb_sLdL::synapse0x1b68220() {
   return (neuron0x1b47f00()*0.120882);
}

double NNfunction_sb_sLdL::synapse0x1b68260() {
   return (neuron0x1b481e0()*-0.260297);
}

double NNfunction_sb_sLdL::synapse0x1b688e0() {
   return (neuron0x1b48bb0()*-0.212699);
}

double NNfunction_sb_sLdL::synapse0x1b68920() {
   return (neuron0x1b49580()*-0.630726);
}

double NNfunction_sb_sLdL::synapse0x1b68960() {
   return (neuron0x1b49f50()*0.0669066);
}

double NNfunction_sb_sLdL::synapse0x1b689a0() {
   return (neuron0x1b4a920()*-0.426577);
}

double NNfunction_sb_sLdL::synapse0x1b689e0() {
   return (neuron0x1b43470()*-0.715627);
}

double NNfunction_sb_sLdL::synapse0x1b68a20() {
   return (neuron0x1b43e40()*-0.311346);
}

double NNfunction_sb_sLdL::synapse0x1b68a60() {
   return (neuron0x1b4d6b0()*-0.0739296);
}

double NNfunction_sb_sLdL::synapse0x1b68aa0() {
   return (neuron0x1b4e080()*-0.535443);
}

double NNfunction_sb_sLdL::synapse0x1b68ae0() {
   return (neuron0x1b4ea50()*-0.772079);
}

double NNfunction_sb_sLdL::synapse0x1b68b20() {
   return (neuron0x1b4f420()*-0.565866);
}

double NNfunction_sb_sLdL::synapse0x1b68b60() {
   return (neuron0x1b4fdf0()*0.745953);
}

double NNfunction_sb_sLdL::synapse0x1b68ba0() {
   return (neuron0x1b507c0()*-1.23095);
}

double NNfunction_sb_sLdL::synapse0x1b68be0() {
   return (neuron0x1b51190()*0.0627312);
}

double NNfunction_sb_sLdL::synapse0x1b68c20() {
   return (neuron0x1b51b60()*0.397368);
}

double NNfunction_sb_sLdL::synapse0x1b687d0() {
   return (neuron0x1b47bf0()*0.0673468);
}

double NNfunction_sb_sLdL::synapse0x1b68810() {
   return (neuron0x1b54740()*0.0675215);
}

double NNfunction_sb_sLdL::synapse0x1b68850() {
   return (neuron0x1b55110()*-0.296578);
}

double NNfunction_sb_sLdL::synapse0x1b68890() {
   return (neuron0x1b55ae0()*-0.255693);
}

double NNfunction_sb_sLdL::synapse0x1b68e70() {
   return (neuron0x1b564b0()*0.280287);
}

double NNfunction_sb_sLdL::synapse0x1b68eb0() {
   return (neuron0x1b56e80()*-0.0972925);
}

double NNfunction_sb_sLdL::synapse0x1b68ef0() {
   return (neuron0x1b57850()*-0.471642);
}

double NNfunction_sb_sLdL::synapse0x1b68f30() {
   return (neuron0x1b58220()*-0.0161873);
}

double NNfunction_sb_sLdL::synapse0x1b68f70() {
   return (neuron0x1b58bf0()*0.0309831);
}

double NNfunction_sb_sLdL::synapse0x1b68fb0() {
   return (neuron0x1b597d0()*-0.146423);
}

double NNfunction_sb_sLdL::synapse0x1b68ff0() {
   return (neuron0x1b5a1a0()*0.241852);
}

double NNfunction_sb_sLdL::synapse0x1b69030() {
   return (neuron0x1b4b020()*0.625829);
}

double NNfunction_sb_sLdL::synapse0x1b69070() {
   return (neuron0x1b4b9f0()*0.064275);
}

double NNfunction_sb_sLdL::synapse0x1b690b0() {
   return (neuron0x1b4c3c0()*0.341055);
}

double NNfunction_sb_sLdL::synapse0x1b690f0() {
   return (neuron0x1b5ea00()*0.092341);
}

double NNfunction_sb_sLdL::synapse0x1b69130() {
   return (neuron0x1b5f2b0()*-0.0954239);
}

double NNfunction_sb_sLdL::synapse0x1b69170() {
   return (neuron0x1b5fc80()*-0.0875444);
}

double NNfunction_sb_sLdL::synapse0x1b691b0() {
   return (neuron0x1b60650()*-0.0476713);
}

double NNfunction_sb_sLdL::synapse0x1b69530() {
   return (neuron0x1b3c5d0()*1.81651);
}

double NNfunction_sb_sLdL::synapse0x1b69570() {
   return (neuron0x1b3cee0()*2.10709);
}

double NNfunction_sb_sLdL::synapse0x1b695b0() {
   return (neuron0x1b3d9c0()*7.50597);
}

double NNfunction_sb_sLdL::synapse0x1b695f0() {
   return (neuron0x18f7250()*1.89009);
}

double NNfunction_sb_sLdL::synapse0x1b69630() {
   return (neuron0x1b3e7e0()*2.14155);
}

double NNfunction_sb_sLdL::synapse0x1b69670() {
   return (neuron0x1b3f1b0()*-2.82669);
}

double NNfunction_sb_sLdL::synapse0x1b696b0() {
   return (neuron0x1b3ff80()*1.75055);
}

double NNfunction_sb_sLdL::synapse0x1b696f0() {
   return (neuron0x1b40950()*0.936302);
}

double NNfunction_sb_sLdL::synapse0x1b69730() {
   return (neuron0x1b41320()*0.201797);
}

double NNfunction_sb_sLdL::synapse0x1b69770() {
   return (neuron0x1b41e00()*-2.5945);
}

double NNfunction_sb_sLdL::synapse0x1b697b0() {
   return (neuron0x1b427d0()*-1.6066);
}

double NNfunction_sb_sLdL::synapse0x1b697f0() {
   return (neuron0x1b3f8b0()*1.58549);
}

double NNfunction_sb_sLdL::synapse0x1b69830() {
   return (neuron0x1b44380()*-1.37542);
}

double NNfunction_sb_sLdL::synapse0x1b69870() {
   return (neuron0x1b44d50()*1.56091);
}

double NNfunction_sb_sLdL::synapse0x1b698b0() {
   return (neuron0x1b45720()*-2.32948);
}

double NNfunction_sb_sLdL::synapse0x1b698f0() {
   return (neuron0x1b460f0()*1.85591);
}

double NNfunction_sb_sLdL::synapse0x1b69380() {
   return (neuron0x1b47f00()*6.76111);
}

double NNfunction_sb_sLdL::synapse0x1b693c0() {
   return (neuron0x1b481e0()*-1.79151);
}

double NNfunction_sb_sLdL::synapse0x1b69a40() {
   return (neuron0x1b48bb0()*-1.80099);
}

double NNfunction_sb_sLdL::synapse0x1b69a80() {
   return (neuron0x1b49580()*-1.63258);
}

double NNfunction_sb_sLdL::synapse0x1b69ac0() {
   return (neuron0x1b49f50()*1.89862);
}

double NNfunction_sb_sLdL::synapse0x1b69b00() {
   return (neuron0x1b4a920()*-1.9318);
}

double NNfunction_sb_sLdL::synapse0x1b69b40() {
   return (neuron0x1b43470()*-1.278);
}

double NNfunction_sb_sLdL::synapse0x1b69b80() {
   return (neuron0x1b43e40()*-2.44714);
}

double NNfunction_sb_sLdL::synapse0x1b69bc0() {
   return (neuron0x1b4d6b0()*-1.81335);
}

double NNfunction_sb_sLdL::synapse0x1b69c00() {
   return (neuron0x1b4e080()*-2.03685);
}

double NNfunction_sb_sLdL::synapse0x1b69c40() {
   return (neuron0x1b4ea50()*-4.83363);
}

double NNfunction_sb_sLdL::synapse0x1b69c80() {
   return (neuron0x1b4f420()*-1.93928);
}

double NNfunction_sb_sLdL::synapse0x1b69cc0() {
   return (neuron0x1b4fdf0()*2.17445);
}

double NNfunction_sb_sLdL::synapse0x1b69d00() {
   return (neuron0x1b507c0()*-0.161883);
}

double NNfunction_sb_sLdL::synapse0x1b69d40() {
   return (neuron0x1b51190()*-2.34803);
}

double NNfunction_sb_sLdL::synapse0x1b69d80() {
   return (neuron0x1b51b60()*0.443145);
}

double NNfunction_sb_sLdL::synapse0x1b69930() {
   return (neuron0x1b47bf0()*2.13803);
}

double NNfunction_sb_sLdL::synapse0x1b69970() {
   return (neuron0x1b54740()*-1.11412);
}

double NNfunction_sb_sLdL::synapse0x1b699b0() {
   return (neuron0x1b55110()*-2.00366);
}

double NNfunction_sb_sLdL::synapse0x1b699f0() {
   return (neuron0x1b55ae0()*-5.13714);
}

double NNfunction_sb_sLdL::synapse0x1b69fd0() {
   return (neuron0x1b564b0()*1.94602);
}

double NNfunction_sb_sLdL::synapse0x1b6a010() {
   return (neuron0x1b56e80()*1.92472);
}

double NNfunction_sb_sLdL::synapse0x1b6a050() {
   return (neuron0x1b57850()*-0.365653);
}

double NNfunction_sb_sLdL::synapse0x1b6a090() {
   return (neuron0x1b58220()*-1.86497);
}

double NNfunction_sb_sLdL::synapse0x1b6a0d0() {
   return (neuron0x1b58bf0()*1.7554);
}

double NNfunction_sb_sLdL::synapse0x1b6a110() {
   return (neuron0x1b597d0()*-2.25061);
}

double NNfunction_sb_sLdL::synapse0x1b6a150() {
   return (neuron0x1b5a1a0()*1.73813);
}

double NNfunction_sb_sLdL::synapse0x1b6a190() {
   return (neuron0x1b4b020()*0.245508);
}

double NNfunction_sb_sLdL::synapse0x1b6a1d0() {
   return (neuron0x1b4b9f0()*1.90542);
}

double NNfunction_sb_sLdL::synapse0x1b6a210() {
   return (neuron0x1b4c3c0()*1.63667);
}

double NNfunction_sb_sLdL::synapse0x1b6a250() {
   return (neuron0x1b5ea00()*-5.03034);
}

double NNfunction_sb_sLdL::synapse0x1b6a290() {
   return (neuron0x1b5f2b0()*-1.89029);
}

double NNfunction_sb_sLdL::synapse0x1b6a2d0() {
   return (neuron0x1b5fc80()*-2.59167);
}

double NNfunction_sb_sLdL::synapse0x1b6a310() {
   return (neuron0x1b60650()*1.94136);
}

double NNfunction_sb_sLdL::synapse0x1b6a690() {
   return (neuron0x1b3c5d0()*0.120779);
}

double NNfunction_sb_sLdL::synapse0x1b6a6d0() {
   return (neuron0x1b3cee0()*0.0479945);
}

double NNfunction_sb_sLdL::synapse0x1b6a710() {
   return (neuron0x1b3d9c0()*-0.0789091);
}

double NNfunction_sb_sLdL::synapse0x1b6a750() {
   return (neuron0x18f7250()*0.0608998);
}

double NNfunction_sb_sLdL::synapse0x1b6a790() {
   return (neuron0x1b3e7e0()*0.0865975);
}

double NNfunction_sb_sLdL::synapse0x1b6a7d0() {
   return (neuron0x1b3f1b0()*0.122113);
}

double NNfunction_sb_sLdL::synapse0x1b6a810() {
   return (neuron0x1b3ff80()*0.0167192);
}

double NNfunction_sb_sLdL::synapse0x1b6a850() {
   return (neuron0x1b40950()*-1.3126);
}

double NNfunction_sb_sLdL::synapse0x1b6a890() {
   return (neuron0x1b41320()*-2.33815);
}

double NNfunction_sb_sLdL::synapse0x1b6a8d0() {
   return (neuron0x1b41e00()*-0.131786);
}

double NNfunction_sb_sLdL::synapse0x1b6a910() {
   return (neuron0x1b427d0()*-0.149735);
}

double NNfunction_sb_sLdL::synapse0x1b6a950() {
   return (neuron0x1b3f8b0()*0.00639941);
}

double NNfunction_sb_sLdL::synapse0x1b6a990() {
   return (neuron0x1b44380()*-0.0746071);
}

double NNfunction_sb_sLdL::synapse0x1b6a9d0() {
   return (neuron0x1b44d50()*0.0202015);
}

double NNfunction_sb_sLdL::synapse0x1b6aa10() {
   return (neuron0x1b45720()*-0.0729104);
}

double NNfunction_sb_sLdL::synapse0x1b6aa50() {
   return (neuron0x1b460f0()*-0.0215987);
}

double NNfunction_sb_sLdL::synapse0x1b6a4e0() {
   return (neuron0x1b47f00()*-2.24892);
}

double NNfunction_sb_sLdL::synapse0x1b6a520() {
   return (neuron0x1b481e0()*-0.0829976);
}

double NNfunction_sb_sLdL::synapse0x1b6aba0() {
   return (neuron0x1b48bb0()*-0.0169129);
}

double NNfunction_sb_sLdL::synapse0x1b6abe0() {
   return (neuron0x1b49580()*0.755642);
}

double NNfunction_sb_sLdL::synapse0x1b6ac20() {
   return (neuron0x1b49f50()*0.00847075);
}

double NNfunction_sb_sLdL::synapse0x1b6ac60() {
   return (neuron0x1b4a920()*-0.14755);
}

double NNfunction_sb_sLdL::synapse0x1b6aca0() {
   return (neuron0x1b43470()*0.459691);
}

double NNfunction_sb_sLdL::synapse0x1b6ace0() {
   return (neuron0x1b43e40()*-0.161822);
}

double NNfunction_sb_sLdL::synapse0x1b6ad20() {
   return (neuron0x1b4d6b0()*-0.22469);
}

double NNfunction_sb_sLdL::synapse0x1b6ad60() {
   return (neuron0x1b4e080()*-0.00953779);
}

double NNfunction_sb_sLdL::synapse0x1b6ada0() {
   return (neuron0x1b4ea50()*-0.0533205);
}

double NNfunction_sb_sLdL::synapse0x1b6ade0() {
   return (neuron0x1b4f420()*-0.133482);
}

double NNfunction_sb_sLdL::synapse0x1b6ae20() {
   return (neuron0x1b4fdf0()*-1.15063);
}

double NNfunction_sb_sLdL::synapse0x1b6ae60() {
   return (neuron0x1b507c0()*1.95403);
}

double NNfunction_sb_sLdL::synapse0x1b6aea0() {
   return (neuron0x1b51190()*-0.0560104);
}

double NNfunction_sb_sLdL::synapse0x1b6aee0() {
   return (neuron0x1b51b60()*0.200889);
}

double NNfunction_sb_sLdL::synapse0x1b6aa90() {
   return (neuron0x1b47bf0()*0.0389061);
}

double NNfunction_sb_sLdL::synapse0x1b6aad0() {
   return (neuron0x1b54740()*1.15751);
}

double NNfunction_sb_sLdL::synapse0x1b6ab10() {
   return (neuron0x1b55110()*-0.0519619);
}

double NNfunction_sb_sLdL::synapse0x1b6ab50() {
   return (neuron0x1b55ae0()*0.521566);
}

double NNfunction_sb_sLdL::synapse0x1b6b130() {
   return (neuron0x1b564b0()*0.0943494);
}

double NNfunction_sb_sLdL::synapse0x1b6b170() {
   return (neuron0x1b56e80()*-0.026255);
}

double NNfunction_sb_sLdL::synapse0x1b6b1b0() {
   return (neuron0x1b57850()*-1.32425);
}

double NNfunction_sb_sLdL::synapse0x1b6b1f0() {
   return (neuron0x1b58220()*0.0465123);
}

double NNfunction_sb_sLdL::synapse0x1b6b230() {
   return (neuron0x1b58bf0()*0.0159153);
}

double NNfunction_sb_sLdL::synapse0x1b6b270() {
   return (neuron0x1b597d0()*-0.0563999);
}

double NNfunction_sb_sLdL::synapse0x1b6b2b0() {
   return (neuron0x1b5a1a0()*0.0792504);
}

double NNfunction_sb_sLdL::synapse0x1b6b2f0() {
   return (neuron0x1b4b020()*-0.121232);
}

double NNfunction_sb_sLdL::synapse0x1b6b330() {
   return (neuron0x1b4b9f0()*0.00902449);
}

double NNfunction_sb_sLdL::synapse0x1b6b370() {
   return (neuron0x1b4c3c0()*0.0547868);
}

double NNfunction_sb_sLdL::synapse0x1b6b3b0() {
   return (neuron0x1b5ea00()*1.58756);
}

double NNfunction_sb_sLdL::synapse0x1b6b3f0() {
   return (neuron0x1b5f2b0()*-0.00882393);
}

double NNfunction_sb_sLdL::synapse0x1b6b430() {
   return (neuron0x1b5fc80()*-0.0211166);
}

double NNfunction_sb_sLdL::synapse0x1b6b470() {
   return (neuron0x1b60650()*-1.37422);
}

double NNfunction_sb_sLdL::synapse0x1b3c590() {
   return (neuron0x1b67850()*6.48134);
}

double NNfunction_sb_sLdL::synapse0x1b6b6d0() {
   return (neuron0x1b67bf0()*-5.27712);
}

double NNfunction_sb_sLdL::synapse0x1b6b710() {
   return (neuron0x1b68090()*-1.8377);
}

double NNfunction_sb_sLdL::synapse0x1b6b750() {
   return (neuron0x1b691f0()*-9.73018);
}

double NNfunction_sb_sLdL::synapse0x1b6b790() {
   return (neuron0x1b6a350()*4.95737);
}

