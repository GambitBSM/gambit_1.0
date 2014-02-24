#include "NNfunction_ss_dLcR.h"
#include <cmath>

double NNfunction_ss_dLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3742)/15.2939;
   input1 = (in1 - 0.812172)/1149.88;
   input2 = (in2 - 649.832)/614.654;
   input3 = (in3 - -57.5489)/786.913;
   input4 = (in4 - 1052.57)/952.341;
   input5 = (in5 - 885.717)/944.796;
   input6 = (in6 - 903.602)/951.341;
   input7 = (in7 - 913.748)/932.089;
   input8 = (in8 - 897.643)/954.454;
   input9 = (in9 - 877.417)/931.751;
   input10 = (in10 - 977.018)/946.476;
   input11 = (in11 - 340.81)/336.743;
   input12 = (in12 - 694.792)/841.7;
   input13 = (in13 - 497.835)/512.983;
   input14 = (in14 - 714.168)/814.625;
   input15 = (in15 - 366.267)/355.881;
   input16 = (in16 - 535.996)/562.489;
   input17 = (in17 - 748.437)/879.983;
   input18 = (in18 - 728.665)/872.29;
   input19 = (in19 - 784.427)/861.202;
   input20 = (in20 - -4.22143)/494.302;
   input21 = (in21 - 3.36751)/1159.14;
   input22 = (in22 - 12.6756)/1205.91;
   input23 = (in23 - -191.042)/596.799;
   switch(index) {
     case 0:
         return neuron0x173e4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.3742)/15.2939;
   input1 = (input[1] - 0.812172)/1149.88;
   input2 = (input[2] - 649.832)/614.654;
   input3 = (input[3] - -57.5489)/786.913;
   input4 = (input[4] - 1052.57)/952.341;
   input5 = (input[5] - 885.717)/944.796;
   input6 = (input[6] - 903.602)/951.341;
   input7 = (input[7] - 913.748)/932.089;
   input8 = (input[8] - 897.643)/954.454;
   input9 = (input[9] - 877.417)/931.751;
   input10 = (input[10] - 977.018)/946.476;
   input11 = (input[11] - 340.81)/336.743;
   input12 = (input[12] - 694.792)/841.7;
   input13 = (input[13] - 497.835)/512.983;
   input14 = (input[14] - 714.168)/814.625;
   input15 = (input[15] - 366.267)/355.881;
   input16 = (input[16] - 535.996)/562.489;
   input17 = (input[17] - 748.437)/879.983;
   input18 = (input[18] - 728.665)/872.29;
   input19 = (input[19] - 784.427)/861.202;
   input20 = (input[20] - -4.22143)/494.302;
   input21 = (input[21] - 3.36751)/1159.14;
   input22 = (input[22] - 12.6756)/1205.91;
   input23 = (input[23] - -191.042)/596.799;
   switch(index) {
     case 0:
         return neuron0x173e4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLcR::neuron0x170a570() {
   return input0;
}

double NNfunction_ss_dLcR::neuron0x170a8b0() {
   return input1;
}

double NNfunction_ss_dLcR::neuron0x170abf0() {
   return input2;
}

double NNfunction_ss_dLcR::neuron0x170af30() {
   return input3;
}

double NNfunction_ss_dLcR::neuron0x170b270() {
   return input4;
}

double NNfunction_ss_dLcR::neuron0x170b5b0() {
   return input5;
}

double NNfunction_ss_dLcR::neuron0x170b8f0() {
   return input6;
}

double NNfunction_ss_dLcR::neuron0x170bc30() {
   return input7;
}

double NNfunction_ss_dLcR::neuron0x170bf70() {
   return input8;
}

double NNfunction_ss_dLcR::neuron0x170c2b0() {
   return input9;
}

double NNfunction_ss_dLcR::neuron0x170c5f0() {
   return input10;
}

double NNfunction_ss_dLcR::neuron0x170c930() {
   return input11;
}

double NNfunction_ss_dLcR::neuron0x170cc70() {
   return input12;
}

double NNfunction_ss_dLcR::neuron0x170cfb0() {
   return input13;
}

double NNfunction_ss_dLcR::neuron0x170d2f0() {
   return input14;
}

double NNfunction_ss_dLcR::neuron0x170d630() {
   return input15;
}

double NNfunction_ss_dLcR::neuron0x170d970() {
   return input16;
}

double NNfunction_ss_dLcR::neuron0x170ded0() {
   return input17;
}

double NNfunction_ss_dLcR::neuron0x170e0f0() {
   return input18;
}

double NNfunction_ss_dLcR::neuron0x170e430() {
   return input19;
}

double NNfunction_ss_dLcR::neuron0x170e770() {
   return input20;
}

double NNfunction_ss_dLcR::neuron0x170eab0() {
   return input21;
}

double NNfunction_ss_dLcR::neuron0x170edf0() {
   return input22;
}

double NNfunction_ss_dLcR::neuron0x170f130() {
   return input23;
}

double NNfunction_ss_dLcR::input0x170f5d0() {
   double input = -0.134463;
   input += synapse0x14ca3e0();
   input += synapse0x170a430();
   input += synapse0x170a470();
   input += synapse0x170f880();
   input += synapse0x170f8c0();
   input += synapse0x170f900();
   input += synapse0x170f940();
   input += synapse0x170f980();
   input += synapse0x170f9c0();
   input += synapse0x170fa00();
   input += synapse0x170fa40();
   input += synapse0x170fa80();
   input += synapse0x170fac0();
   input += synapse0x170fb00();
   input += synapse0x170fb40();
   input += synapse0x170fb80();
   input += synapse0x170a3a0();
   input += synapse0x170a3e0();
   input += synapse0x14bbc80();
   input += synapse0x14bbcc0();
   input += synapse0x170fde0();
   input += synapse0x170fe20();
   input += synapse0x170fe60();
   input += synapse0x170fea0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x170f5d0() {
   double input = input0x170f5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x170fee0() {
   double input = 0.571429;
   input += synapse0x1710220();
   input += synapse0x1710260();
   input += synapse0x17102a0();
   input += synapse0x17102e0();
   input += synapse0x1710320();
   input += synapse0x1710360();
   input += synapse0x17103a0();
   input += synapse0x17103e0();
   input += synapse0x1710420();
   input += synapse0x170fcd0();
   input += synapse0x170fd10();
   input += synapse0x170fd50();
   input += synapse0x170fd90();
   input += synapse0x1710670();
   input += synapse0x17106b0();
   input += synapse0x17106f0();
   input += synapse0x1710070();
   input += synapse0x17100b0();
   input += synapse0x1710840();
   input += synapse0x1710880();
   input += synapse0x17108c0();
   input += synapse0x1710900();
   input += synapse0x1710940();
   input += synapse0x1710980();
   return input;
}

double NNfunction_ss_dLcR::neuron0x170fee0() {
   double input = input0x170fee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17109c0() {
   double input = -0.938616;
   input += synapse0x1710d00();
   input += synapse0x1710d40();
   input += synapse0x1710d80();
   input += synapse0x1710dc0();
   input += synapse0x1710e00();
   input += synapse0x1710e40();
   input += synapse0x1710e80();
   input += synapse0x1710ec0();
   input += synapse0x1710f00();
   input += synapse0x1710f40();
   input += synapse0x1710f80();
   input += synapse0x1710fc0();
   input += synapse0x1711000();
   input += synapse0x1711040();
   input += synapse0x1711080();
   input += synapse0x17110c0();
   input += synapse0x1710b50();
   input += synapse0x1710b90();
   input += synapse0x14c9ad0();
   input += synapse0x14c9b10();
   input += synapse0x16f9600();
   input += synapse0x16f9640();
   input += synapse0x16f9680();
   input += synapse0x170a4b0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17109c0() {
   double input = input0x17109c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x14ca250() {
   double input = -4.24574;
   input += synapse0x1710610();
   input += synapse0x170a4f0();
   input += synapse0x170a530();
   input += synapse0x1711210();
   input += synapse0x1711250();
   input += synapse0x1711290();
   input += synapse0x17112d0();
   input += synapse0x1711310();
   input += synapse0x1711350();
   input += synapse0x1711390();
   input += synapse0x17113d0();
   input += synapse0x1711410();
   input += synapse0x1711450();
   input += synapse0x1711490();
   input += synapse0x17114d0();
   input += synapse0x1711510();
   input += synapse0x1710460();
   input += synapse0x17104a0();
   input += synapse0x1711660();
   input += synapse0x17116a0();
   input += synapse0x17116e0();
   input += synapse0x1711720();
   input += synapse0x1711760();
   input += synapse0x17117a0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x14ca250() {
   double input = input0x14ca250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17117e0() {
   double input = 0.573571;
   input += synapse0x1711b20();
   input += synapse0x1711b60();
   input += synapse0x1711ba0();
   input += synapse0x1711be0();
   input += synapse0x1711c20();
   input += synapse0x1711c60();
   input += synapse0x1711ca0();
   input += synapse0x1711ce0();
   input += synapse0x1711d20();
   input += synapse0x1711d60();
   input += synapse0x1711da0();
   input += synapse0x1711de0();
   input += synapse0x1711e20();
   input += synapse0x1711e60();
   input += synapse0x1711ea0();
   input += synapse0x1711ee0();
   input += synapse0x1711970();
   input += synapse0x17119b0();
   input += synapse0x1712030();
   input += synapse0x1712070();
   input += synapse0x17120b0();
   input += synapse0x17120f0();
   input += synapse0x1712130();
   input += synapse0x1712170();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17117e0() {
   double input = input0x17117e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17121b0() {
   double input = 0.431102;
   input += synapse0x17124f0();
   input += synapse0x1712530();
   input += synapse0x1712570();
   input += synapse0x17125b0();
   input += synapse0x17125f0();
   input += synapse0x1712630();
   input += synapse0x1712670();
   input += synapse0x17126b0();
   input += synapse0x17126f0();
   input += synapse0x14c9e40();
   input += synapse0x14c9e80();
   input += synapse0x14c9ec0();
   input += synapse0x14c9f00();
   input += synapse0x14c9f40();
   input += synapse0x14c9f80();
   input += synapse0x14c9fc0();
   input += synapse0x1712340();
   input += synapse0x1712380();
   input += synapse0x14ca110();
   input += synapse0x14ca150();
   input += synapse0x14ca190();
   input += synapse0x14ca1d0();
   input += synapse0x14ca210();
   input += synapse0x1712f40();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17121b0() {
   double input = input0x17121b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1712f80() {
   double input = -0.348466;
   input += synapse0x17132c0();
   input += synapse0x1713300();
   input += synapse0x1713340();
   input += synapse0x1713380();
   input += synapse0x17133c0();
   input += synapse0x1713400();
   input += synapse0x1713440();
   input += synapse0x1713480();
   input += synapse0x17134c0();
   input += synapse0x1713500();
   input += synapse0x1713540();
   input += synapse0x1713580();
   input += synapse0x17135c0();
   input += synapse0x1713600();
   input += synapse0x1713640();
   input += synapse0x1713680();
   input += synapse0x1713110();
   input += synapse0x1713150();
   input += synapse0x17137d0();
   input += synapse0x1713810();
   input += synapse0x1713850();
   input += synapse0x1713890();
   input += synapse0x17138d0();
   input += synapse0x1713910();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1712f80() {
   double input = input0x1712f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1713950() {
   double input = 2.17722;
   input += synapse0x1713c90();
   input += synapse0x1713cd0();
   input += synapse0x1713d10();
   input += synapse0x1713d50();
   input += synapse0x1713d90();
   input += synapse0x1713dd0();
   input += synapse0x1713e10();
   input += synapse0x1713e50();
   input += synapse0x1713e90();
   input += synapse0x1713ed0();
   input += synapse0x1713f10();
   input += synapse0x1713f50();
   input += synapse0x1713f90();
   input += synapse0x1713fd0();
   input += synapse0x1714010();
   input += synapse0x1714050();
   input += synapse0x1713ae0();
   input += synapse0x1713b20();
   input += synapse0x17141a0();
   input += synapse0x17141e0();
   input += synapse0x1714220();
   input += synapse0x1714260();
   input += synapse0x17142a0();
   input += synapse0x17142e0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1713950() {
   double input = input0x1713950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1714320() {
   double input = -0.632409;
   input += synapse0x170ddc0();
   input += synapse0x170de00();
   input += synapse0x170de40();
   input += synapse0x170de80();
   input += synapse0x1714870();
   input += synapse0x17148b0();
   input += synapse0x17148f0();
   input += synapse0x1714930();
   input += synapse0x1714970();
   input += synapse0x17149b0();
   input += synapse0x17149f0();
   input += synapse0x1714a30();
   input += synapse0x1714a70();
   input += synapse0x1714ab0();
   input += synapse0x1714af0();
   input += synapse0x1714b30();
   input += synapse0x17144b0();
   input += synapse0x17144f0();
   input += synapse0x1714c80();
   input += synapse0x1714cc0();
   input += synapse0x1714d00();
   input += synapse0x1714d40();
   input += synapse0x1714d80();
   input += synapse0x1714dc0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1714320() {
   double input = input0x1714320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1714e00() {
   double input = 0.452107;
   input += synapse0x1715140();
   input += synapse0x1715180();
   input += synapse0x17151c0();
   input += synapse0x1715200();
   input += synapse0x1715240();
   input += synapse0x1715280();
   input += synapse0x17152c0();
   input += synapse0x1715300();
   input += synapse0x1715340();
   input += synapse0x1715380();
   input += synapse0x17153c0();
   input += synapse0x1715400();
   input += synapse0x1715440();
   input += synapse0x1715480();
   input += synapse0x17154c0();
   input += synapse0x1715500();
   input += synapse0x1714f90();
   input += synapse0x1714fd0();
   input += synapse0x1715650();
   input += synapse0x1715690();
   input += synapse0x17156d0();
   input += synapse0x1715710();
   input += synapse0x1715750();
   input += synapse0x1715790();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1714e00() {
   double input = input0x1714e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17157d0() {
   double input = -1.40231;
   input += synapse0x1715b10();
   input += synapse0x1715b50();
   input += synapse0x1715b90();
   input += synapse0x1715bd0();
   input += synapse0x1715c10();
   input += synapse0x1715c50();
   input += synapse0x1715c90();
   input += synapse0x1715cd0();
   input += synapse0x1715d10();
   input += synapse0x1715d50();
   input += synapse0x1715d90();
   input += synapse0x1715dd0();
   input += synapse0x1715e10();
   input += synapse0x1715e50();
   input += synapse0x1715e90();
   input += synapse0x1715ed0();
   input += synapse0x1715960();
   input += synapse0x17159a0();
   input += synapse0x1712730();
   input += synapse0x1712770();
   input += synapse0x17127b0();
   input += synapse0x17127f0();
   input += synapse0x1712830();
   input += synapse0x1712870();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17157d0() {
   double input = input0x17157d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17128b0() {
   double input = -1.87871;
   input += synapse0x1712bf0();
   input += synapse0x1712c30();
   input += synapse0x1712c70();
   input += synapse0x1712cb0();
   input += synapse0x1712cf0();
   input += synapse0x1712d30();
   input += synapse0x1712d70();
   input += synapse0x1712db0();
   input += synapse0x1712df0();
   input += synapse0x1712e30();
   input += synapse0x1712e70();
   input += synapse0x1712eb0();
   input += synapse0x1712ef0();
   input += synapse0x1717030();
   input += synapse0x1717070();
   input += synapse0x17170b0();
   input += synapse0x1712a40();
   input += synapse0x1712a80();
   input += synapse0x1717200();
   input += synapse0x1717240();
   input += synapse0x1717280();
   input += synapse0x17172c0();
   input += synapse0x1717300();
   input += synapse0x1717340();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17128b0() {
   double input = input0x17128b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1717380() {
   double input = -4.15212;
   input += synapse0x17176c0();
   input += synapse0x1717700();
   input += synapse0x1717740();
   input += synapse0x1717780();
   input += synapse0x17177c0();
   input += synapse0x1717800();
   input += synapse0x1717840();
   input += synapse0x1717880();
   input += synapse0x17178c0();
   input += synapse0x1717900();
   input += synapse0x1717940();
   input += synapse0x1717980();
   input += synapse0x17179c0();
   input += synapse0x1717a00();
   input += synapse0x1717a40();
   input += synapse0x1717a80();
   input += synapse0x1717510();
   input += synapse0x1717550();
   input += synapse0x1717bd0();
   input += synapse0x1717c10();
   input += synapse0x1717c50();
   input += synapse0x1717c90();
   input += synapse0x1717cd0();
   input += synapse0x1717d10();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1717380() {
   double input = input0x1717380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1717d50() {
   double input = -0.55958;
   input += synapse0x1718090();
   input += synapse0x17180d0();
   input += synapse0x1718110();
   input += synapse0x1718150();
   input += synapse0x1718190();
   input += synapse0x17181d0();
   input += synapse0x1718210();
   input += synapse0x1718250();
   input += synapse0x1718290();
   input += synapse0x17182d0();
   input += synapse0x1718310();
   input += synapse0x1718350();
   input += synapse0x1718390();
   input += synapse0x17183d0();
   input += synapse0x1718410();
   input += synapse0x1718450();
   input += synapse0x1717ee0();
   input += synapse0x1717f20();
   input += synapse0x17185a0();
   input += synapse0x17185e0();
   input += synapse0x1718620();
   input += synapse0x1718660();
   input += synapse0x17186a0();
   input += synapse0x17186e0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1717d50() {
   double input = input0x1717d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1718720() {
   double input = 0.660805;
   input += synapse0x1718a60();
   input += synapse0x1718aa0();
   input += synapse0x1718ae0();
   input += synapse0x1718b20();
   input += synapse0x1718b60();
   input += synapse0x1718ba0();
   input += synapse0x1718be0();
   input += synapse0x1718c20();
   input += synapse0x1718c60();
   input += synapse0x1718ca0();
   input += synapse0x1718ce0();
   input += synapse0x1718d20();
   input += synapse0x1718d60();
   input += synapse0x1718da0();
   input += synapse0x1718de0();
   input += synapse0x1718e20();
   input += synapse0x17188b0();
   input += synapse0x17188f0();
   input += synapse0x1718f70();
   input += synapse0x1718fb0();
   input += synapse0x1718ff0();
   input += synapse0x1719030();
   input += synapse0x1719070();
   input += synapse0x17190b0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1718720() {
   double input = input0x1718720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17190f0() {
   double input = 1.70003;
   input += synapse0x1719430();
   input += synapse0x170a790();
   input += synapse0x170a7d0();
   input += synapse0x170aad0();
   input += synapse0x170ab10();
   input += synapse0x170ae10();
   input += synapse0x170ae50();
   input += synapse0x170b150();
   input += synapse0x170b190();
   input += synapse0x170b490();
   input += synapse0x170b4d0();
   input += synapse0x170b7d0();
   input += synapse0x170b810();
   input += synapse0x170bb10();
   input += synapse0x170bb50();
   input += synapse0x170be50();
   input += synapse0x170be90();
   input += synapse0x170c190();
   input += synapse0x170c1d0();
   input += synapse0x170c4d0();
   input += synapse0x170c510();
   input += synapse0x170c810();
   input += synapse0x170c850();
   input += synapse0x170cb50();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17190f0() {
   double input = input0x17190f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171af00() {
   double input = 0.96255;
   input += synapse0x170cb90();
   input += synapse0x170d850();
   input += synapse0x170d890();
   input += synapse0x1719280();
   input += synapse0x17192c0();
   input += synapse0x170db90();
   input += synapse0x170dbd0();
   input += synapse0x14bbb60();
   input += synapse0x14bbba0();
   input += synapse0x170e310();
   input += synapse0x170e350();
   input += synapse0x170e650();
   input += synapse0x170e690();
   input += synapse0x170e990();
   input += synapse0x170e9d0();
   input += synapse0x170ecd0();
   input += synapse0x170ed10();
   input += synapse0x170f010();
   input += synapse0x170f050();
   input += synapse0x170f350();
   input += synapse0x170f390();
   input += synapse0x170ce90();
   input += synapse0x170ced0();
   input += synapse0x171b1a0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171af00() {
   double input = input0x171af00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171b1e0() {
   double input = 0.332511;
   input += synapse0x171b520();
   input += synapse0x171b560();
   input += synapse0x171b5a0();
   input += synapse0x171b5e0();
   input += synapse0x171b620();
   input += synapse0x171b660();
   input += synapse0x171b6a0();
   input += synapse0x171b6e0();
   input += synapse0x171b720();
   input += synapse0x171b760();
   input += synapse0x171b7a0();
   input += synapse0x171b7e0();
   input += synapse0x171b820();
   input += synapse0x171b860();
   input += synapse0x171b8a0();
   input += synapse0x171b8e0();
   input += synapse0x171b370();
   input += synapse0x171b3b0();
   input += synapse0x171ba30();
   input += synapse0x171ba70();
   input += synapse0x171bab0();
   input += synapse0x171baf0();
   input += synapse0x171bb30();
   input += synapse0x171bb70();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171b1e0() {
   double input = input0x171b1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171bbb0() {
   double input = 1.4428;
   input += synapse0x171bef0();
   input += synapse0x171bf30();
   input += synapse0x171bf70();
   input += synapse0x171bfb0();
   input += synapse0x171bff0();
   input += synapse0x171c030();
   input += synapse0x171c070();
   input += synapse0x171c0b0();
   input += synapse0x171c0f0();
   input += synapse0x171c130();
   input += synapse0x171c170();
   input += synapse0x171c1b0();
   input += synapse0x171c1f0();
   input += synapse0x171c230();
   input += synapse0x171c270();
   input += synapse0x171c2b0();
   input += synapse0x171bd40();
   input += synapse0x171bd80();
   input += synapse0x171c400();
   input += synapse0x171c440();
   input += synapse0x171c480();
   input += synapse0x171c4c0();
   input += synapse0x171c500();
   input += synapse0x171c540();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171bbb0() {
   double input = input0x171bbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171c580() {
   double input = 0.843359;
   input += synapse0x171c8c0();
   input += synapse0x171c900();
   input += synapse0x171c940();
   input += synapse0x171c980();
   input += synapse0x171c9c0();
   input += synapse0x171ca00();
   input += synapse0x171ca40();
   input += synapse0x171ca80();
   input += synapse0x171cac0();
   input += synapse0x171cb00();
   input += synapse0x171cb40();
   input += synapse0x171cb80();
   input += synapse0x171cbc0();
   input += synapse0x171cc00();
   input += synapse0x171cc40();
   input += synapse0x171cc80();
   input += synapse0x171c710();
   input += synapse0x171c750();
   input += synapse0x171cdd0();
   input += synapse0x171ce10();
   input += synapse0x171ce50();
   input += synapse0x171ce90();
   input += synapse0x171ced0();
   input += synapse0x171cf10();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171c580() {
   double input = input0x171c580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171cf50() {
   double input = 1.45775;
   input += synapse0x171d290();
   input += synapse0x171d2d0();
   input += synapse0x171d310();
   input += synapse0x171d350();
   input += synapse0x171d390();
   input += synapse0x171d3d0();
   input += synapse0x171d410();
   input += synapse0x171d450();
   input += synapse0x171d490();
   input += synapse0x171d4d0();
   input += synapse0x171d510();
   input += synapse0x171d550();
   input += synapse0x171d590();
   input += synapse0x171d5d0();
   input += synapse0x171d610();
   input += synapse0x171d650();
   input += synapse0x171d0e0();
   input += synapse0x171d120();
   input += synapse0x171d7a0();
   input += synapse0x171d7e0();
   input += synapse0x171d820();
   input += synapse0x171d860();
   input += synapse0x171d8a0();
   input += synapse0x171d8e0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171cf50() {
   double input = input0x171cf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171d920() {
   double input = 0.871066;
   input += synapse0x171dc60();
   input += synapse0x171dca0();
   input += synapse0x171dce0();
   input += synapse0x171dd20();
   input += synapse0x171dd60();
   input += synapse0x171dda0();
   input += synapse0x171dde0();
   input += synapse0x171de20();
   input += synapse0x171de60();
   input += synapse0x1716020();
   input += synapse0x1716060();
   input += synapse0x17160a0();
   input += synapse0x17160e0();
   input += synapse0x1716120();
   input += synapse0x1716160();
   input += synapse0x17161a0();
   input += synapse0x171dab0();
   input += synapse0x171daf0();
   input += synapse0x17162f0();
   input += synapse0x1716330();
   input += synapse0x1716370();
   input += synapse0x17163b0();
   input += synapse0x17163f0();
   input += synapse0x1716430();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171d920() {
   double input = input0x171d920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1716470() {
   double input = 0.599358;
   input += synapse0x17167b0();
   input += synapse0x17167f0();
   input += synapse0x1716830();
   input += synapse0x1716870();
   input += synapse0x17168b0();
   input += synapse0x17168f0();
   input += synapse0x1716930();
   input += synapse0x1716970();
   input += synapse0x17169b0();
   input += synapse0x17169f0();
   input += synapse0x1716a30();
   input += synapse0x1716a70();
   input += synapse0x1716ab0();
   input += synapse0x1716af0();
   input += synapse0x1716b30();
   input += synapse0x1716b70();
   input += synapse0x1716600();
   input += synapse0x1716640();
   input += synapse0x1716cc0();
   input += synapse0x1716d00();
   input += synapse0x1716d40();
   input += synapse0x1716d80();
   input += synapse0x1716dc0();
   input += synapse0x1716e00();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1716470() {
   double input = input0x1716470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1716e40() {
   double input = -1.64737;
   input += synapse0x1716fd0();
   input += synapse0x1720060();
   input += synapse0x17200a0();
   input += synapse0x17200e0();
   input += synapse0x1720120();
   input += synapse0x1720160();
   input += synapse0x17201a0();
   input += synapse0x17201e0();
   input += synapse0x1720220();
   input += synapse0x1720260();
   input += synapse0x17202a0();
   input += synapse0x17202e0();
   input += synapse0x1720320();
   input += synapse0x1720360();
   input += synapse0x17203a0();
   input += synapse0x17203e0();
   input += synapse0x171feb0();
   input += synapse0x171fef0();
   input += synapse0x1720530();
   input += synapse0x1720570();
   input += synapse0x17205b0();
   input += synapse0x17205f0();
   input += synapse0x1720630();
   input += synapse0x1720670();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1716e40() {
   double input = input0x1716e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17206b0() {
   double input = 0.0342756;
   input += synapse0x17209f0();
   input += synapse0x1720a30();
   input += synapse0x1720a70();
   input += synapse0x1720ab0();
   input += synapse0x1720af0();
   input += synapse0x1720b30();
   input += synapse0x1720b70();
   input += synapse0x1720bb0();
   input += synapse0x1720bf0();
   input += synapse0x1720c30();
   input += synapse0x1720c70();
   input += synapse0x1720cb0();
   input += synapse0x1720cf0();
   input += synapse0x1720d30();
   input += synapse0x1720d70();
   input += synapse0x1720db0();
   input += synapse0x1720840();
   input += synapse0x1720880();
   input += synapse0x1720f00();
   input += synapse0x1720f40();
   input += synapse0x1720f80();
   input += synapse0x1720fc0();
   input += synapse0x1721000();
   input += synapse0x1721040();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17206b0() {
   double input = input0x17206b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1721080() {
   double input = 1.44091;
   input += synapse0x17213c0();
   input += synapse0x1721400();
   input += synapse0x1721440();
   input += synapse0x1721480();
   input += synapse0x17214c0();
   input += synapse0x1721500();
   input += synapse0x1721540();
   input += synapse0x1721580();
   input += synapse0x17215c0();
   input += synapse0x1721600();
   input += synapse0x1721640();
   input += synapse0x1721680();
   input += synapse0x17216c0();
   input += synapse0x1721700();
   input += synapse0x1721740();
   input += synapse0x1721780();
   input += synapse0x1721210();
   input += synapse0x1721250();
   input += synapse0x17218d0();
   input += synapse0x1721910();
   input += synapse0x1721950();
   input += synapse0x1721990();
   input += synapse0x17219d0();
   input += synapse0x1721a10();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1721080() {
   double input = input0x1721080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1721a50() {
   double input = 0.181427;
   input += synapse0x1721d90();
   input += synapse0x1721dd0();
   input += synapse0x1721e10();
   input += synapse0x1721e50();
   input += synapse0x1721e90();
   input += synapse0x1721ed0();
   input += synapse0x1721f10();
   input += synapse0x1721f50();
   input += synapse0x1721f90();
   input += synapse0x1721fd0();
   input += synapse0x1722010();
   input += synapse0x1722050();
   input += synapse0x1722090();
   input += synapse0x17220d0();
   input += synapse0x1722110();
   input += synapse0x1722150();
   input += synapse0x1721be0();
   input += synapse0x1721c20();
   input += synapse0x17222a0();
   input += synapse0x17222e0();
   input += synapse0x1722320();
   input += synapse0x1722360();
   input += synapse0x17223a0();
   input += synapse0x17223e0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1721a50() {
   double input = input0x1721a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1722420() {
   double input = -1.80838;
   input += synapse0x1722760();
   input += synapse0x17227a0();
   input += synapse0x17227e0();
   input += synapse0x1722820();
   input += synapse0x1722860();
   input += synapse0x17228a0();
   input += synapse0x17228e0();
   input += synapse0x1722920();
   input += synapse0x1722960();
   input += synapse0x17229a0();
   input += synapse0x17229e0();
   input += synapse0x1722a20();
   input += synapse0x1722a60();
   input += synapse0x1722aa0();
   input += synapse0x1722ae0();
   input += synapse0x1722b20();
   input += synapse0x17225b0();
   input += synapse0x17225f0();
   input += synapse0x1722c70();
   input += synapse0x1722cb0();
   input += synapse0x1722cf0();
   input += synapse0x1722d30();
   input += synapse0x1722d70();
   input += synapse0x1722db0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1722420() {
   double input = input0x1722420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1722df0() {
   double input = 0.735034;
   input += synapse0x1723130();
   input += synapse0x1723170();
   input += synapse0x17231b0();
   input += synapse0x17231f0();
   input += synapse0x1723230();
   input += synapse0x1723270();
   input += synapse0x17232b0();
   input += synapse0x17232f0();
   input += synapse0x1723330();
   input += synapse0x1723370();
   input += synapse0x17233b0();
   input += synapse0x17233f0();
   input += synapse0x1723430();
   input += synapse0x1723470();
   input += synapse0x17234b0();
   input += synapse0x17234f0();
   input += synapse0x1722f80();
   input += synapse0x1722fc0();
   input += synapse0x1723640();
   input += synapse0x1723680();
   input += synapse0x17236c0();
   input += synapse0x1723700();
   input += synapse0x1723740();
   input += synapse0x1723780();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1722df0() {
   double input = input0x1722df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17237c0() {
   double input = 0.944925;
   input += synapse0x1723b00();
   input += synapse0x1723b40();
   input += synapse0x1723b80();
   input += synapse0x1723bc0();
   input += synapse0x1723c00();
   input += synapse0x1723c40();
   input += synapse0x1723c80();
   input += synapse0x1723cc0();
   input += synapse0x1723d00();
   input += synapse0x1723d40();
   input += synapse0x1723d80();
   input += synapse0x1723dc0();
   input += synapse0x1723e00();
   input += synapse0x1723e40();
   input += synapse0x1723e80();
   input += synapse0x1723ec0();
   input += synapse0x1723950();
   input += synapse0x1723990();
   input += synapse0x1724010();
   input += synapse0x1724050();
   input += synapse0x1724090();
   input += synapse0x17240d0();
   input += synapse0x1724110();
   input += synapse0x1724150();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17237c0() {
   double input = input0x17237c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1724190() {
   double input = -1.00491;
   input += synapse0x17244d0();
   input += synapse0x1724510();
   input += synapse0x1724550();
   input += synapse0x1724590();
   input += synapse0x17245d0();
   input += synapse0x1724610();
   input += synapse0x1724650();
   input += synapse0x1724690();
   input += synapse0x17246d0();
   input += synapse0x1724710();
   input += synapse0x1724750();
   input += synapse0x1724790();
   input += synapse0x17247d0();
   input += synapse0x1724810();
   input += synapse0x1724850();
   input += synapse0x1724890();
   input += synapse0x1724320();
   input += synapse0x1724360();
   input += synapse0x17249e0();
   input += synapse0x1724a20();
   input += synapse0x1724a60();
   input += synapse0x1724aa0();
   input += synapse0x1724ae0();
   input += synapse0x1724b20();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1724190() {
   double input = input0x1724190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1724b60() {
   double input = -1.93578;
   input += synapse0x1724ea0();
   input += synapse0x1719470();
   input += synapse0x17194b0();
   input += synapse0x17194f0();
   input += synapse0x1719740();
   input += synapse0x1719780();
   input += synapse0x17197c0();
   input += synapse0x1719a10();
   input += synapse0x1719a50();
   input += synapse0x1719ca0();
   input += synapse0x1719ce0();
   input += synapse0x1719d20();
   input += synapse0x1719f70();
   input += synapse0x1719fb0();
   input += synapse0x171a200();
   input += synapse0x171a240();
   input += synapse0x1724cf0();
   input += synapse0x1724d30();
   input += synapse0x171a390();
   input += synapse0x171a8a0();
   input += synapse0x171a8e0();
   input += synapse0x171a920();
   input += synapse0x171ab70();
   input += synapse0x171abb0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1724b60() {
   double input = input0x1724b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171abf0() {
   double input = -0.573729;
   input += synapse0x171a460();
   input += synapse0x171a4a0();
   input += synapse0x171a4e0();
   input += synapse0x171a520();
   input += synapse0x171aea0();
   input += synapse0x17271f0();
   input += synapse0x1727230();
   input += synapse0x1727270();
   input += synapse0x17272b0();
   input += synapse0x17272f0();
   input += synapse0x1727330();
   input += synapse0x1727370();
   input += synapse0x17273b0();
   input += synapse0x17273f0();
   input += synapse0x1727430();
   input += synapse0x1727470();
   input += synapse0x171ad80();
   input += synapse0x171adc0();
   input += synapse0x17275c0();
   input += synapse0x1727600();
   input += synapse0x1727640();
   input += synapse0x1727680();
   input += synapse0x17276c0();
   input += synapse0x1727700();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171abf0() {
   double input = input0x171abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1727740() {
   double input = 0.0702709;
   input += synapse0x1727a80();
   input += synapse0x1727ac0();
   input += synapse0x1727b00();
   input += synapse0x1727b40();
   input += synapse0x1727b80();
   input += synapse0x1727bc0();
   input += synapse0x1727c00();
   input += synapse0x1727c40();
   input += synapse0x1727c80();
   input += synapse0x1727cc0();
   input += synapse0x1727d00();
   input += synapse0x1727d40();
   input += synapse0x1727d80();
   input += synapse0x1727dc0();
   input += synapse0x1727e00();
   input += synapse0x1727e40();
   input += synapse0x17278d0();
   input += synapse0x1727910();
   input += synapse0x1727f90();
   input += synapse0x1727fd0();
   input += synapse0x1728010();
   input += synapse0x1728050();
   input += synapse0x1728090();
   input += synapse0x17280d0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1727740() {
   double input = input0x1727740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1728110() {
   double input = -5.74098;
   input += synapse0x1728450();
   input += synapse0x1728490();
   input += synapse0x17284d0();
   input += synapse0x1728510();
   input += synapse0x1728550();
   input += synapse0x1728590();
   input += synapse0x17285d0();
   input += synapse0x1728610();
   input += synapse0x1728650();
   input += synapse0x1728690();
   input += synapse0x17286d0();
   input += synapse0x1728710();
   input += synapse0x1728750();
   input += synapse0x1728790();
   input += synapse0x17287d0();
   input += synapse0x1728810();
   input += synapse0x17282a0();
   input += synapse0x17282e0();
   input += synapse0x1728960();
   input += synapse0x17289a0();
   input += synapse0x17289e0();
   input += synapse0x1728a20();
   input += synapse0x1728a60();
   input += synapse0x1728aa0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1728110() {
   double input = input0x1728110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1728ae0() {
   double input = -0.388935;
   input += synapse0x1728e20();
   input += synapse0x1728e60();
   input += synapse0x1728ea0();
   input += synapse0x1728ee0();
   input += synapse0x1728f20();
   input += synapse0x1728f60();
   input += synapse0x1728fa0();
   input += synapse0x1728fe0();
   input += synapse0x1729020();
   input += synapse0x1729060();
   input += synapse0x17290a0();
   input += synapse0x17290e0();
   input += synapse0x1729120();
   input += synapse0x1729160();
   input += synapse0x17291a0();
   input += synapse0x17291e0();
   input += synapse0x1728c70();
   input += synapse0x1728cb0();
   input += synapse0x1729330();
   input += synapse0x1729370();
   input += synapse0x17293b0();
   input += synapse0x17293f0();
   input += synapse0x1729430();
   input += synapse0x1729470();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1728ae0() {
   double input = input0x1728ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17294b0() {
   double input = -2.4296;
   input += synapse0x17297f0();
   input += synapse0x1729830();
   input += synapse0x1729870();
   input += synapse0x17298b0();
   input += synapse0x17298f0();
   input += synapse0x1729930();
   input += synapse0x1729970();
   input += synapse0x17299b0();
   input += synapse0x17299f0();
   input += synapse0x1729a30();
   input += synapse0x1729a70();
   input += synapse0x1729ab0();
   input += synapse0x1729af0();
   input += synapse0x1729b30();
   input += synapse0x1729b70();
   input += synapse0x1729bb0();
   input += synapse0x1729640();
   input += synapse0x1729680();
   input += synapse0x1729d00();
   input += synapse0x1729d40();
   input += synapse0x1729d80();
   input += synapse0x1729dc0();
   input += synapse0x1729e00();
   input += synapse0x1729e40();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17294b0() {
   double input = input0x17294b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1729e80() {
   double input = 1.72723;
   input += synapse0x172a1c0();
   input += synapse0x172a200();
   input += synapse0x172a240();
   input += synapse0x172a280();
   input += synapse0x172a2c0();
   input += synapse0x172a300();
   input += synapse0x172a340();
   input += synapse0x172a380();
   input += synapse0x172a3c0();
   input += synapse0x172a400();
   input += synapse0x172a440();
   input += synapse0x172a480();
   input += synapse0x172a4c0();
   input += synapse0x172a500();
   input += synapse0x172a540();
   input += synapse0x172a580();
   input += synapse0x172a010();
   input += synapse0x172a050();
   input += synapse0x172a6d0();
   input += synapse0x172a710();
   input += synapse0x172a750();
   input += synapse0x172a790();
   input += synapse0x172a7d0();
   input += synapse0x172a810();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1729e80() {
   double input = input0x1729e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x172a850() {
   double input = -0.999166;
   input += synapse0x172ab90();
   input += synapse0x172abd0();
   input += synapse0x172ac10();
   input += synapse0x172ac50();
   input += synapse0x172ac90();
   input += synapse0x172acd0();
   input += synapse0x172ad10();
   input += synapse0x172ad50();
   input += synapse0x172ad90();
   input += synapse0x172add0();
   input += synapse0x172ae10();
   input += synapse0x172ae50();
   input += synapse0x172ae90();
   input += synapse0x172aed0();
   input += synapse0x172af10();
   input += synapse0x172af50();
   input += synapse0x172a9e0();
   input += synapse0x172aa20();
   input += synapse0x172b0a0();
   input += synapse0x172b0e0();
   input += synapse0x172b120();
   input += synapse0x172b160();
   input += synapse0x172b1a0();
   input += synapse0x172b1e0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x172a850() {
   double input = input0x172a850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x172b220() {
   double input = -0.287438;
   input += synapse0x172b560();
   input += synapse0x172b5a0();
   input += synapse0x172b5e0();
   input += synapse0x172b620();
   input += synapse0x172b660();
   input += synapse0x172b6a0();
   input += synapse0x172b6e0();
   input += synapse0x172b720();
   input += synapse0x172b760();
   input += synapse0x172b7a0();
   input += synapse0x172b7e0();
   input += synapse0x172b820();
   input += synapse0x172b860();
   input += synapse0x172b8a0();
   input += synapse0x172b8e0();
   input += synapse0x172b920();
   input += synapse0x172b3b0();
   input += synapse0x172b3f0();
   input += synapse0x172ba70();
   input += synapse0x172bab0();
   input += synapse0x172baf0();
   input += synapse0x172bb30();
   input += synapse0x172bb70();
   input += synapse0x172bbb0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x172b220() {
   double input = input0x172b220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x172bbf0() {
   double input = 0.0697178;
   input += synapse0x1714660();
   input += synapse0x17146a0();
   input += synapse0x17146e0();
   input += synapse0x1714720();
   input += synapse0x1714760();
   input += synapse0x17147a0();
   input += synapse0x17147e0();
   input += synapse0x1714820();
   input += synapse0x172c340();
   input += synapse0x172c380();
   input += synapse0x172c3c0();
   input += synapse0x172c400();
   input += synapse0x172c440();
   input += synapse0x172c480();
   input += synapse0x172c4c0();
   input += synapse0x172c500();
   input += synapse0x172bd80();
   input += synapse0x172bdc0();
   input += synapse0x172c650();
   input += synapse0x172c690();
   input += synapse0x172c6d0();
   input += synapse0x172c710();
   input += synapse0x172c750();
   input += synapse0x172c790();
   return input;
}

double NNfunction_ss_dLcR::neuron0x172bbf0() {
   double input = input0x172bbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x172c7d0() {
   double input = 1.79576;
   input += synapse0x172cb10();
   input += synapse0x172cb50();
   input += synapse0x172cb90();
   input += synapse0x172cbd0();
   input += synapse0x172cc10();
   input += synapse0x172cc50();
   input += synapse0x172cc90();
   input += synapse0x172ccd0();
   input += synapse0x172cd10();
   input += synapse0x172cd50();
   input += synapse0x172cd90();
   input += synapse0x172cdd0();
   input += synapse0x172ce10();
   input += synapse0x172ce50();
   input += synapse0x172ce90();
   input += synapse0x172ced0();
   input += synapse0x172c960();
   input += synapse0x172c9a0();
   input += synapse0x172d020();
   input += synapse0x172d060();
   input += synapse0x172d0a0();
   input += synapse0x172d0e0();
   input += synapse0x172d120();
   input += synapse0x172d160();
   return input;
}

double NNfunction_ss_dLcR::neuron0x172c7d0() {
   double input = input0x172c7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x172d1a0() {
   double input = 0.628207;
   input += synapse0x172d4e0();
   input += synapse0x172d520();
   input += synapse0x172d560();
   input += synapse0x172d5a0();
   input += synapse0x172d5e0();
   input += synapse0x172d620();
   input += synapse0x172d660();
   input += synapse0x172d6a0();
   input += synapse0x172d6e0();
   input += synapse0x172d720();
   input += synapse0x172d760();
   input += synapse0x172d7a0();
   input += synapse0x172d7e0();
   input += synapse0x172d820();
   input += synapse0x172d860();
   input += synapse0x172d8a0();
   input += synapse0x172d330();
   input += synapse0x172d370();
   input += synapse0x171dea0();
   input += synapse0x171dee0();
   input += synapse0x171df20();
   input += synapse0x171df60();
   input += synapse0x171dfa0();
   input += synapse0x171dfe0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x172d1a0() {
   double input = input0x172d1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171e020() {
   double input = 0.428833;
   input += synapse0x171e360();
   input += synapse0x171e3a0();
   input += synapse0x171e3e0();
   input += synapse0x171e420();
   input += synapse0x171e460();
   input += synapse0x171e4a0();
   input += synapse0x171e4e0();
   input += synapse0x171e520();
   input += synapse0x171e560();
   input += synapse0x171e5a0();
   input += synapse0x171e5e0();
   input += synapse0x171e620();
   input += synapse0x171e660();
   input += synapse0x171e6a0();
   input += synapse0x171e6e0();
   input += synapse0x171e720();
   input += synapse0x171e1b0();
   input += synapse0x171e1f0();
   input += synapse0x171e870();
   input += synapse0x171e8b0();
   input += synapse0x171e8f0();
   input += synapse0x171e930();
   input += synapse0x171e970();
   input += synapse0x171e9b0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171e020() {
   double input = input0x171e020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171e9f0() {
   double input = -1.03844;
   input += synapse0x171ed30();
   input += synapse0x171ed70();
   input += synapse0x171edb0();
   input += synapse0x171edf0();
   input += synapse0x171ee30();
   input += synapse0x171ee70();
   input += synapse0x171eeb0();
   input += synapse0x171eef0();
   input += synapse0x171ef30();
   input += synapse0x171ef70();
   input += synapse0x171efb0();
   input += synapse0x171eff0();
   input += synapse0x171f030();
   input += synapse0x171f070();
   input += synapse0x171f0b0();
   input += synapse0x171f0f0();
   input += synapse0x171eb80();
   input += synapse0x171ebc0();
   input += synapse0x171f240();
   input += synapse0x171f280();
   input += synapse0x171f2c0();
   input += synapse0x171f300();
   input += synapse0x171f340();
   input += synapse0x171f380();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171e9f0() {
   double input = input0x171e9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x171f3c0() {
   double input = -0.91393;
   input += synapse0x171f700();
   input += synapse0x171f740();
   input += synapse0x171f780();
   input += synapse0x171f7c0();
   input += synapse0x171f800();
   input += synapse0x171f840();
   input += synapse0x171f880();
   input += synapse0x171f8c0();
   input += synapse0x171f900();
   input += synapse0x171f940();
   input += synapse0x171f980();
   input += synapse0x171f9c0();
   input += synapse0x171fa00();
   input += synapse0x171fa40();
   input += synapse0x171fa80();
   input += synapse0x171fac0();
   input += synapse0x171f550();
   input += synapse0x171f590();
   input += synapse0x171fc10();
   input += synapse0x171fc50();
   input += synapse0x171fc90();
   input += synapse0x171fcd0();
   input += synapse0x171fd10();
   input += synapse0x171fd50();
   return input;
}

double NNfunction_ss_dLcR::neuron0x171f3c0() {
   double input = input0x171f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1731a00() {
   double input = 6.57993;
   input += synapse0x1731c20();
   input += synapse0x1731c60();
   input += synapse0x1731ca0();
   input += synapse0x1731ce0();
   input += synapse0x1731d20();
   input += synapse0x1731d60();
   input += synapse0x1731da0();
   input += synapse0x1731de0();
   input += synapse0x1731e20();
   input += synapse0x1731e60();
   input += synapse0x1731ea0();
   input += synapse0x1731ee0();
   input += synapse0x1731f20();
   input += synapse0x1731f60();
   input += synapse0x1731fa0();
   input += synapse0x1731fe0();
   input += synapse0x171fd90();
   input += synapse0x171fdd0();
   input += synapse0x1732130();
   input += synapse0x1732170();
   input += synapse0x17321b0();
   input += synapse0x17321f0();
   input += synapse0x1732230();
   input += synapse0x1732270();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1731a00() {
   double input = input0x1731a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x17322b0() {
   double input = 0.431386;
   input += synapse0x17325f0();
   input += synapse0x1732630();
   input += synapse0x1732670();
   input += synapse0x17326b0();
   input += synapse0x17326f0();
   input += synapse0x1732730();
   input += synapse0x1732770();
   input += synapse0x17327b0();
   input += synapse0x17327f0();
   input += synapse0x1732830();
   input += synapse0x1732870();
   input += synapse0x17328b0();
   input += synapse0x17328f0();
   input += synapse0x1732930();
   input += synapse0x1732970();
   input += synapse0x17329b0();
   input += synapse0x1732440();
   input += synapse0x1732480();
   input += synapse0x1732b00();
   input += synapse0x1732b40();
   input += synapse0x1732b80();
   input += synapse0x1732bc0();
   input += synapse0x1732c00();
   input += synapse0x1732c40();
   return input;
}

double NNfunction_ss_dLcR::neuron0x17322b0() {
   double input = input0x17322b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1732c80() {
   double input = 0.731519;
   input += synapse0x1732fc0();
   input += synapse0x1733000();
   input += synapse0x1733040();
   input += synapse0x1733080();
   input += synapse0x17330c0();
   input += synapse0x1733100();
   input += synapse0x1733140();
   input += synapse0x1733180();
   input += synapse0x17331c0();
   input += synapse0x1733200();
   input += synapse0x1733240();
   input += synapse0x1733280();
   input += synapse0x17332c0();
   input += synapse0x1733300();
   input += synapse0x1733340();
   input += synapse0x1733380();
   input += synapse0x1732e10();
   input += synapse0x1732e50();
   input += synapse0x17334d0();
   input += synapse0x1733510();
   input += synapse0x1733550();
   input += synapse0x1733590();
   input += synapse0x17335d0();
   input += synapse0x1733610();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1732c80() {
   double input = input0x1732c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x1733650() {
   double input = 1.83178;
   input += synapse0x1733990();
   input += synapse0x17339d0();
   input += synapse0x1733a10();
   input += synapse0x1733a50();
   input += synapse0x1733a90();
   input += synapse0x1733ad0();
   input += synapse0x1733b10();
   input += synapse0x1733b50();
   input += synapse0x1733b90();
   input += synapse0x1733bd0();
   input += synapse0x1733c10();
   input += synapse0x1733c50();
   input += synapse0x1733c90();
   input += synapse0x1733cd0();
   input += synapse0x1733d10();
   input += synapse0x1733d50();
   input += synapse0x17337e0();
   input += synapse0x1733820();
   input += synapse0x1733ea0();
   input += synapse0x1733ee0();
   input += synapse0x1733f20();
   input += synapse0x1733f60();
   input += synapse0x1733fa0();
   input += synapse0x1733fe0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x1733650() {
   double input = input0x1733650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x173a850() {
   double input = 0.0593009;
   input += synapse0x1710580();
   input += synapse0x17105c0();
   input += synapse0x1711a90();
   input += synapse0x1711ad0();
   input += synapse0x1712460();
   input += synapse0x17124a0();
   input += synapse0x1713230();
   input += synapse0x1713270();
   input += synapse0x1713c00();
   input += synapse0x1713c40();
   input += synapse0x17145d0();
   input += synapse0x1714610();
   input += synapse0x17150b0();
   input += synapse0x17150f0();
   input += synapse0x1715a80();
   input += synapse0x1715ac0();
   input += synapse0x1712b60();
   input += synapse0x1712ba0();
   input += synapse0x1717630();
   input += synapse0x1717670();
   input += synapse0x1718000();
   input += synapse0x1718040();
   input += synapse0x17189d0();
   input += synapse0x1718a10();
   input += synapse0x17193a0();
   input += synapse0x17193e0();
   input += synapse0x170d510();
   input += synapse0x170d550();
   input += synapse0x171b490();
   input += synapse0x171b4d0();
   input += synapse0x171be60();
   input += synapse0x171bea0();
   input += synapse0x171c830();
   input += synapse0x171c870();
   input += synapse0x171d200();
   input += synapse0x171d240();
   input += synapse0x171dbd0();
   input += synapse0x171dc10();
   input += synapse0x1716720();
   input += synapse0x1716760();
   input += synapse0x171ffd0();
   input += synapse0x1720010();
   input += synapse0x1720960();
   input += synapse0x17209a0();
   input += synapse0x1721330();
   input += synapse0x1721370();
   input += synapse0x1721d00();
   input += synapse0x1721d40();
   input += synapse0x17226d0();
   input += synapse0x1722710();
   return input;
}

double NNfunction_ss_dLcR::neuron0x173a850() {
   double input = input0x173a850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x173abf0() {
   double input = 0.590832;
   input += synapse0x1724e10();
   input += synapse0x1724e50();
   input += synapse0x171a3d0();
   input += synapse0x171a410();
   input += synapse0x17279f0();
   input += synapse0x1727a30();
   input += synapse0x17283c0();
   input += synapse0x1728400();
   input += synapse0x1728d90();
   input += synapse0x1728dd0();
   input += synapse0x1729760();
   input += synapse0x17297a0();
   input += synapse0x172a130();
   input += synapse0x172a170();
   input += synapse0x172ab00();
   input += synapse0x172ab40();
   input += synapse0x172b4d0();
   input += synapse0x172b510();
   input += synapse0x172bea0();
   input += synapse0x172bee0();
   input += synapse0x172ca80();
   input += synapse0x172cac0();
   input += synapse0x172d450();
   input += synapse0x172d490();
   input += synapse0x171e2d0();
   input += synapse0x171e310();
   input += synapse0x171eca0();
   input += synapse0x171ece0();
   input += synapse0x171f670();
   input += synapse0x171f6b0();
   input += synapse0x1731b90();
   input += synapse0x1731bd0();
   input += synapse0x1732560();
   input += synapse0x17325a0();
   input += synapse0x1732f30();
   input += synapse0x1732f70();
   input += synapse0x1733900();
   input += synapse0x1733940();
   input += synapse0x170f7f0();
   input += synapse0x170f830();
   input += synapse0x17230a0();
   input += synapse0x17230e0();
   input += synapse0x1734020();
   input += synapse0x1734060();
   input += synapse0x17340a0();
   input += synapse0x17340e0();
   input += synapse0x173af90();
   input += synapse0x173afd0();
   input += synapse0x173b010();
   input += synapse0x173b050();
   return input;
}

double NNfunction_ss_dLcR::neuron0x173abf0() {
   double input = input0x173abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x173b090() {
   double input = -0.460276;
   input += synapse0x173b3d0();
   input += synapse0x173b410();
   input += synapse0x173b450();
   input += synapse0x173b490();
   input += synapse0x173b4d0();
   input += synapse0x173b510();
   input += synapse0x173b550();
   input += synapse0x173b590();
   input += synapse0x173b5d0();
   input += synapse0x173b610();
   input += synapse0x173b650();
   input += synapse0x173b690();
   input += synapse0x173b6d0();
   input += synapse0x173b710();
   input += synapse0x173b750();
   input += synapse0x173b790();
   input += synapse0x173b220();
   input += synapse0x173b260();
   input += synapse0x173b8e0();
   input += synapse0x173b920();
   input += synapse0x173b960();
   input += synapse0x173b9a0();
   input += synapse0x173b9e0();
   input += synapse0x173ba20();
   input += synapse0x173ba60();
   input += synapse0x173baa0();
   input += synapse0x173bae0();
   input += synapse0x173bb20();
   input += synapse0x173bb60();
   input += synapse0x173bba0();
   input += synapse0x173bbe0();
   input += synapse0x173bc20();
   input += synapse0x173b7d0();
   input += synapse0x173b810();
   input += synapse0x173b850();
   input += synapse0x173b890();
   input += synapse0x173be70();
   input += synapse0x173beb0();
   input += synapse0x173bef0();
   input += synapse0x173bf30();
   input += synapse0x173bf70();
   input += synapse0x173bfb0();
   input += synapse0x173bff0();
   input += synapse0x173c030();
   input += synapse0x173c070();
   input += synapse0x173c0b0();
   input += synapse0x173c0f0();
   input += synapse0x173c130();
   input += synapse0x173c170();
   input += synapse0x173c1b0();
   return input;
}

double NNfunction_ss_dLcR::neuron0x173b090() {
   double input = input0x173b090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x173c1f0() {
   double input = -1.44244;
   input += synapse0x173c530();
   input += synapse0x173c570();
   input += synapse0x173c5b0();
   input += synapse0x173c5f0();
   input += synapse0x173c630();
   input += synapse0x173c670();
   input += synapse0x173c6b0();
   input += synapse0x173c6f0();
   input += synapse0x173c730();
   input += synapse0x173c770();
   input += synapse0x173c7b0();
   input += synapse0x173c7f0();
   input += synapse0x173c830();
   input += synapse0x173c870();
   input += synapse0x173c8b0();
   input += synapse0x173c8f0();
   input += synapse0x173c380();
   input += synapse0x173c3c0();
   input += synapse0x173ca40();
   input += synapse0x173ca80();
   input += synapse0x173cac0();
   input += synapse0x173cb00();
   input += synapse0x173cb40();
   input += synapse0x173cb80();
   input += synapse0x173cbc0();
   input += synapse0x173cc00();
   input += synapse0x173cc40();
   input += synapse0x173cc80();
   input += synapse0x173ccc0();
   input += synapse0x173cd00();
   input += synapse0x173cd40();
   input += synapse0x173cd80();
   input += synapse0x173c930();
   input += synapse0x173c970();
   input += synapse0x173c9b0();
   input += synapse0x173c9f0();
   input += synapse0x173cfd0();
   input += synapse0x173d010();
   input += synapse0x173d050();
   input += synapse0x173d090();
   input += synapse0x173d0d0();
   input += synapse0x173d110();
   input += synapse0x173d150();
   input += synapse0x173d190();
   input += synapse0x173d1d0();
   input += synapse0x173d210();
   input += synapse0x173d250();
   input += synapse0x173d290();
   input += synapse0x173d2d0();
   input += synapse0x173d310();
   return input;
}

double NNfunction_ss_dLcR::neuron0x173c1f0() {
   double input = input0x173c1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x173d350() {
   double input = -0.272899;
   input += synapse0x173d690();
   input += synapse0x173d6d0();
   input += synapse0x173d710();
   input += synapse0x173d750();
   input += synapse0x173d790();
   input += synapse0x173d7d0();
   input += synapse0x173d810();
   input += synapse0x173d850();
   input += synapse0x173d890();
   input += synapse0x173d8d0();
   input += synapse0x173d910();
   input += synapse0x173d950();
   input += synapse0x173d990();
   input += synapse0x173d9d0();
   input += synapse0x173da10();
   input += synapse0x173da50();
   input += synapse0x173d4e0();
   input += synapse0x173d520();
   input += synapse0x173dba0();
   input += synapse0x173dbe0();
   input += synapse0x173dc20();
   input += synapse0x173dc60();
   input += synapse0x173dca0();
   input += synapse0x173dce0();
   input += synapse0x173dd20();
   input += synapse0x173dd60();
   input += synapse0x173dda0();
   input += synapse0x173dde0();
   input += synapse0x173de20();
   input += synapse0x173de60();
   input += synapse0x173dea0();
   input += synapse0x173dee0();
   input += synapse0x173da90();
   input += synapse0x173dad0();
   input += synapse0x173db10();
   input += synapse0x173db50();
   input += synapse0x173e130();
   input += synapse0x173e170();
   input += synapse0x173e1b0();
   input += synapse0x173e1f0();
   input += synapse0x173e230();
   input += synapse0x173e270();
   input += synapse0x173e2b0();
   input += synapse0x173e2f0();
   input += synapse0x173e330();
   input += synapse0x173e370();
   input += synapse0x173e3b0();
   input += synapse0x173e3f0();
   input += synapse0x173e430();
   input += synapse0x173e470();
   return input;
}

double NNfunction_ss_dLcR::neuron0x173d350() {
   double input = input0x173d350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLcR::input0x173e4b0() {
   double input = 12.2311;
   input += synapse0x170f590();
   input += synapse0x173e6d0();
   input += synapse0x173e710();
   input += synapse0x173e750();
   input += synapse0x173e790();
   return input;
}

double NNfunction_ss_dLcR::neuron0x173e4b0() {
   double input = input0x173e4b0();
   return (input * 1)+0;
}

double NNfunction_ss_dLcR::synapse0x14ca3e0() {
   return (neuron0x170a570()*0.0118525);
}

double NNfunction_ss_dLcR::synapse0x170a430() {
   return (neuron0x170a8b0()*-0.000152898);
}

double NNfunction_ss_dLcR::synapse0x170a470() {
   return (neuron0x170abf0()*-1.54425);
}

double NNfunction_ss_dLcR::synapse0x170f880() {
   return (neuron0x170af30()*-0.00707701);
}

double NNfunction_ss_dLcR::synapse0x170f8c0() {
   return (neuron0x170b270()*-0.10368);
}

double NNfunction_ss_dLcR::synapse0x170f900() {
   return (neuron0x170b5b0()*-0.0981786);
}

double NNfunction_ss_dLcR::synapse0x170f940() {
   return (neuron0x170b8f0()*0.00140296);
}

double NNfunction_ss_dLcR::synapse0x170f980() {
   return (neuron0x170bc30()*-0.134422);
}

double NNfunction_ss_dLcR::synapse0x170f9c0() {
   return (neuron0x170bf70()*0.0531489);
}

double NNfunction_ss_dLcR::synapse0x170fa00() {
   return (neuron0x170c2b0()*0.188525);
}

double NNfunction_ss_dLcR::synapse0x170fa40() {
   return (neuron0x170c5f0()*0.0474555);
}

double NNfunction_ss_dLcR::synapse0x170fa80() {
   return (neuron0x170c930()*0.454722);
}

double NNfunction_ss_dLcR::synapse0x170fac0() {
   return (neuron0x170cc70()*-0.0261574);
}

double NNfunction_ss_dLcR::synapse0x170fb00() {
   return (neuron0x170cfb0()*-0.0642579);
}

double NNfunction_ss_dLcR::synapse0x170fb40() {
   return (neuron0x170d2f0()*-0.0450655);
}

double NNfunction_ss_dLcR::synapse0x170fb80() {
   return (neuron0x170d630()*-0.151058);
}

double NNfunction_ss_dLcR::synapse0x170a3a0() {
   return (neuron0x170d970()*-0.136851);
}

double NNfunction_ss_dLcR::synapse0x170a3e0() {
   return (neuron0x170ded0()*-0.0496425);
}

double NNfunction_ss_dLcR::synapse0x14bbc80() {
   return (neuron0x170e0f0()*0.127111);
}

double NNfunction_ss_dLcR::synapse0x14bbcc0() {
   return (neuron0x170e430()*0.0871995);
}

double NNfunction_ss_dLcR::synapse0x170fde0() {
   return (neuron0x170e770()*0.036873);
}

double NNfunction_ss_dLcR::synapse0x170fe20() {
   return (neuron0x170eab0()*0.0219306);
}

double NNfunction_ss_dLcR::synapse0x170fe60() {
   return (neuron0x170edf0()*0.0254576);
}

double NNfunction_ss_dLcR::synapse0x170fea0() {
   return (neuron0x170f130()*-0.0588914);
}

double NNfunction_ss_dLcR::synapse0x1710220() {
   return (neuron0x170a570()*0.0502218);
}

double NNfunction_ss_dLcR::synapse0x1710260() {
   return (neuron0x170a8b0()*0.011852);
}

double NNfunction_ss_dLcR::synapse0x17102a0() {
   return (neuron0x170abf0()*-0.0735456);
}

double NNfunction_ss_dLcR::synapse0x17102e0() {
   return (neuron0x170af30()*0.083473);
}

double NNfunction_ss_dLcR::synapse0x1710320() {
   return (neuron0x170b270()*0.0154449);
}

double NNfunction_ss_dLcR::synapse0x1710360() {
   return (neuron0x170b5b0()*-0.0560635);
}

double NNfunction_ss_dLcR::synapse0x17103a0() {
   return (neuron0x170b8f0()*-0.00709607);
}

double NNfunction_ss_dLcR::synapse0x17103e0() {
   return (neuron0x170bc30()*0.0190164);
}

double NNfunction_ss_dLcR::synapse0x1710420() {
   return (neuron0x170bf70()*-0.0475503);
}

double NNfunction_ss_dLcR::synapse0x170fcd0() {
   return (neuron0x170c2b0()*0.00908952);
}

double NNfunction_ss_dLcR::synapse0x170fd10() {
   return (neuron0x170c5f0()*0.0134469);
}

double NNfunction_ss_dLcR::synapse0x170fd50() {
   return (neuron0x170c930()*0.0455382);
}

double NNfunction_ss_dLcR::synapse0x170fd90() {
   return (neuron0x170cc70()*0.0619635);
}

double NNfunction_ss_dLcR::synapse0x1710670() {
   return (neuron0x170cfb0()*0.0368266);
}

double NNfunction_ss_dLcR::synapse0x17106b0() {
   return (neuron0x170d2f0()*-0.011613);
}

double NNfunction_ss_dLcR::synapse0x17106f0() {
   return (neuron0x170d630()*2.87499);
}

double NNfunction_ss_dLcR::synapse0x1710070() {
   return (neuron0x170d970()*0.0709349);
}

double NNfunction_ss_dLcR::synapse0x17100b0() {
   return (neuron0x170ded0()*0.0442429);
}

double NNfunction_ss_dLcR::synapse0x1710840() {
   return (neuron0x170e0f0()*0.0388708);
}

double NNfunction_ss_dLcR::synapse0x1710880() {
   return (neuron0x170e430()*0.0178281);
}

double NNfunction_ss_dLcR::synapse0x17108c0() {
   return (neuron0x170e770()*-0.0192041);
}

double NNfunction_ss_dLcR::synapse0x1710900() {
   return (neuron0x170eab0()*0.0232593);
}

double NNfunction_ss_dLcR::synapse0x1710940() {
   return (neuron0x170edf0()*0.0349919);
}

double NNfunction_ss_dLcR::synapse0x1710980() {
   return (neuron0x170f130()*-0.061218);
}

double NNfunction_ss_dLcR::synapse0x1710d00() {
   return (neuron0x170a570()*0.573324);
}

double NNfunction_ss_dLcR::synapse0x1710d40() {
   return (neuron0x170a8b0()*-1.02001);
}

double NNfunction_ss_dLcR::synapse0x1710d80() {
   return (neuron0x170abf0()*-0.702041);
}

double NNfunction_ss_dLcR::synapse0x1710dc0() {
   return (neuron0x170af30()*-1.32039);
}

double NNfunction_ss_dLcR::synapse0x1710e00() {
   return (neuron0x170b270()*-1.30651);
}

double NNfunction_ss_dLcR::synapse0x1710e40() {
   return (neuron0x170b5b0()*-0.373499);
}

double NNfunction_ss_dLcR::synapse0x1710e80() {
   return (neuron0x170b8f0()*-0.0511513);
}

double NNfunction_ss_dLcR::synapse0x1710ec0() {
   return (neuron0x170bc30()*-0.18801);
}

double NNfunction_ss_dLcR::synapse0x1710f00() {
   return (neuron0x170bf70()*-1.23228);
}

double NNfunction_ss_dLcR::synapse0x1710f40() {
   return (neuron0x170c2b0()*-0.910326);
}

double NNfunction_ss_dLcR::synapse0x1710f80() {
   return (neuron0x170c5f0()*0.213162);
}

double NNfunction_ss_dLcR::synapse0x1710fc0() {
   return (neuron0x170c930()*0.0349397);
}

double NNfunction_ss_dLcR::synapse0x1711000() {
   return (neuron0x170cc70()*-0.322721);
}

double NNfunction_ss_dLcR::synapse0x1711040() {
   return (neuron0x170cfb0()*-1.54966);
}

double NNfunction_ss_dLcR::synapse0x1711080() {
   return (neuron0x170d2f0()*0.368075);
}

double NNfunction_ss_dLcR::synapse0x17110c0() {
   return (neuron0x170d630()*0.81903);
}

double NNfunction_ss_dLcR::synapse0x1710b50() {
   return (neuron0x170d970()*-0.201252);
}

double NNfunction_ss_dLcR::synapse0x1710b90() {
   return (neuron0x170ded0()*0.133535);
}

double NNfunction_ss_dLcR::synapse0x14c9ad0() {
   return (neuron0x170e0f0()*0.192573);
}

double NNfunction_ss_dLcR::synapse0x14c9b10() {
   return (neuron0x170e430()*-0.559343);
}

double NNfunction_ss_dLcR::synapse0x16f9600() {
   return (neuron0x170e770()*0.221336);
}

double NNfunction_ss_dLcR::synapse0x16f9640() {
   return (neuron0x170eab0()*-0.607833);
}

double NNfunction_ss_dLcR::synapse0x16f9680() {
   return (neuron0x170edf0()*-0.409425);
}

double NNfunction_ss_dLcR::synapse0x170a4b0() {
   return (neuron0x170f130()*-1.02573);
}

double NNfunction_ss_dLcR::synapse0x1710610() {
   return (neuron0x170a570()*0.287114);
}

double NNfunction_ss_dLcR::synapse0x170a4f0() {
   return (neuron0x170a8b0()*0.771475);
}

double NNfunction_ss_dLcR::synapse0x170a530() {
   return (neuron0x170abf0()*0.199773);
}

double NNfunction_ss_dLcR::synapse0x1711210() {
   return (neuron0x170af30()*-2.93142);
}

double NNfunction_ss_dLcR::synapse0x1711250() {
   return (neuron0x170b270()*-0.0261256);
}

double NNfunction_ss_dLcR::synapse0x1711290() {
   return (neuron0x170b5b0()*0.22635);
}

double NNfunction_ss_dLcR::synapse0x17112d0() {
   return (neuron0x170b8f0()*-0.0144515);
}

double NNfunction_ss_dLcR::synapse0x1711310() {
   return (neuron0x170bc30()*-0.13197);
}

double NNfunction_ss_dLcR::synapse0x1711350() {
   return (neuron0x170bf70()*-0.113456);
}

double NNfunction_ss_dLcR::synapse0x1711390() {
   return (neuron0x170c2b0()*0.444672);
}

double NNfunction_ss_dLcR::synapse0x17113d0() {
   return (neuron0x170c5f0()*0.158441);
}

double NNfunction_ss_dLcR::synapse0x1711410() {
   return (neuron0x170c930()*1.35285);
}

double NNfunction_ss_dLcR::synapse0x1711450() {
   return (neuron0x170cc70()*0.0329298);
}

double NNfunction_ss_dLcR::synapse0x1711490() {
   return (neuron0x170cfb0()*0.484898);
}

double NNfunction_ss_dLcR::synapse0x17114d0() {
   return (neuron0x170d2f0()*-0.0812761);
}

double NNfunction_ss_dLcR::synapse0x1711510() {
   return (neuron0x170d630()*0.760187);
}

double NNfunction_ss_dLcR::synapse0x1710460() {
   return (neuron0x170d970()*0.344607);
}

double NNfunction_ss_dLcR::synapse0x17104a0() {
   return (neuron0x170ded0()*-0.107763);
}

double NNfunction_ss_dLcR::synapse0x1711660() {
   return (neuron0x170e0f0()*-0.308855);
}

double NNfunction_ss_dLcR::synapse0x17116a0() {
   return (neuron0x170e430()*-0.264958);
}

double NNfunction_ss_dLcR::synapse0x17116e0() {
   return (neuron0x170e770()*-0.00102418);
}

double NNfunction_ss_dLcR::synapse0x1711720() {
   return (neuron0x170eab0()*-0.357074);
}

double NNfunction_ss_dLcR::synapse0x1711760() {
   return (neuron0x170edf0()*-0.0478172);
}

double NNfunction_ss_dLcR::synapse0x17117a0() {
   return (neuron0x170f130()*-0.321666);
}

double NNfunction_ss_dLcR::synapse0x1711b20() {
   return (neuron0x170a570()*0.00337035);
}

double NNfunction_ss_dLcR::synapse0x1711b60() {
   return (neuron0x170a8b0()*-0.0134301);
}

double NNfunction_ss_dLcR::synapse0x1711ba0() {
   return (neuron0x170abf0()*-0.0943297);
}

double NNfunction_ss_dLcR::synapse0x1711be0() {
   return (neuron0x170af30()*-0.109588);
}

double NNfunction_ss_dLcR::synapse0x1711c20() {
   return (neuron0x170b270()*-0.00300358);
}

double NNfunction_ss_dLcR::synapse0x1711c60() {
   return (neuron0x170b5b0()*-0.0429611);
}

double NNfunction_ss_dLcR::synapse0x1711ca0() {
   return (neuron0x170b8f0()*-0.00644488);
}

double NNfunction_ss_dLcR::synapse0x1711ce0() {
   return (neuron0x170bc30()*-0.00748191);
}

double NNfunction_ss_dLcR::synapse0x1711d20() {
   return (neuron0x170bf70()*-0.00149741);
}

double NNfunction_ss_dLcR::synapse0x1711d60() {
   return (neuron0x170c2b0()*0.010969);
}

double NNfunction_ss_dLcR::synapse0x1711da0() {
   return (neuron0x170c5f0()*0.00720435);
}

double NNfunction_ss_dLcR::synapse0x1711de0() {
   return (neuron0x170c930()*2.00069);
}

double NNfunction_ss_dLcR::synapse0x1711e20() {
   return (neuron0x170cc70()*0.0461656);
}

double NNfunction_ss_dLcR::synapse0x1711e60() {
   return (neuron0x170cfb0()*0.0435867);
}

double NNfunction_ss_dLcR::synapse0x1711ea0() {
   return (neuron0x170d2f0()*0.0400861);
}

double NNfunction_ss_dLcR::synapse0x1711ee0() {
   return (neuron0x170d630()*-0.00324429);
}

double NNfunction_ss_dLcR::synapse0x1711970() {
   return (neuron0x170d970()*-0.00442149);
}

double NNfunction_ss_dLcR::synapse0x17119b0() {
   return (neuron0x170ded0()*0.0187139);
}

double NNfunction_ss_dLcR::synapse0x1712030() {
   return (neuron0x170e0f0()*0.0157024);
}

double NNfunction_ss_dLcR::synapse0x1712070() {
   return (neuron0x170e430()*-0.0288002);
}

double NNfunction_ss_dLcR::synapse0x17120b0() {
   return (neuron0x170e770()*-0.0144396);
}

double NNfunction_ss_dLcR::synapse0x17120f0() {
   return (neuron0x170eab0()*-0.0338226);
}

double NNfunction_ss_dLcR::synapse0x1712130() {
   return (neuron0x170edf0()*-0.00116094);
}

double NNfunction_ss_dLcR::synapse0x1712170() {
   return (neuron0x170f130()*-0.000976637);
}

double NNfunction_ss_dLcR::synapse0x17124f0() {
   return (neuron0x170a570()*0.672126);
}

double NNfunction_ss_dLcR::synapse0x1712530() {
   return (neuron0x170a8b0()*-0.316991);
}

double NNfunction_ss_dLcR::synapse0x1712570() {
   return (neuron0x170abf0()*0.0584988);
}

double NNfunction_ss_dLcR::synapse0x17125b0() {
   return (neuron0x170af30()*-0.369208);
}

double NNfunction_ss_dLcR::synapse0x17125f0() {
   return (neuron0x170b270()*0.0392662);
}

double NNfunction_ss_dLcR::synapse0x1712630() {
   return (neuron0x170b5b0()*-0.0463938);
}

double NNfunction_ss_dLcR::synapse0x1712670() {
   return (neuron0x170b8f0()*-0.286386);
}

double NNfunction_ss_dLcR::synapse0x17126b0() {
   return (neuron0x170bc30()*-0.706062);
}

double NNfunction_ss_dLcR::synapse0x17126f0() {
   return (neuron0x170bf70()*-1.0903);
}

double NNfunction_ss_dLcR::synapse0x14c9e40() {
   return (neuron0x170c2b0()*-0.238261);
}

double NNfunction_ss_dLcR::synapse0x14c9e80() {
   return (neuron0x170c5f0()*-0.365198);
}

double NNfunction_ss_dLcR::synapse0x14c9ec0() {
   return (neuron0x170c930()*0.651824);
}

double NNfunction_ss_dLcR::synapse0x14c9f00() {
   return (neuron0x170cc70()*1.21581);
}

double NNfunction_ss_dLcR::synapse0x14c9f40() {
   return (neuron0x170cfb0()*0.354819);
}

double NNfunction_ss_dLcR::synapse0x14c9f80() {
   return (neuron0x170d2f0()*0.117972);
}

double NNfunction_ss_dLcR::synapse0x14c9fc0() {
   return (neuron0x170d630()*0.5165);
}

double NNfunction_ss_dLcR::synapse0x1712340() {
   return (neuron0x170d970()*0.21595);
}

double NNfunction_ss_dLcR::synapse0x1712380() {
   return (neuron0x170ded0()*-0.662936);
}

double NNfunction_ss_dLcR::synapse0x14ca110() {
   return (neuron0x170e0f0()*0.662581);
}

double NNfunction_ss_dLcR::synapse0x14ca150() {
   return (neuron0x170e430()*0.601548);
}

double NNfunction_ss_dLcR::synapse0x14ca190() {
   return (neuron0x170e770()*0.365146);
}

double NNfunction_ss_dLcR::synapse0x14ca1d0() {
   return (neuron0x170eab0()*-0.0368439);
}

double NNfunction_ss_dLcR::synapse0x14ca210() {
   return (neuron0x170edf0()*0.0207422);
}

double NNfunction_ss_dLcR::synapse0x1712f40() {
   return (neuron0x170f130()*1.00997);
}

double NNfunction_ss_dLcR::synapse0x17132c0() {
   return (neuron0x170a570()*-0.314768);
}

double NNfunction_ss_dLcR::synapse0x1713300() {
   return (neuron0x170a8b0()*0.909257);
}

double NNfunction_ss_dLcR::synapse0x1713340() {
   return (neuron0x170abf0()*0.423165);
}

double NNfunction_ss_dLcR::synapse0x1713380() {
   return (neuron0x170af30()*1.18946);
}

double NNfunction_ss_dLcR::synapse0x17133c0() {
   return (neuron0x170b270()*-0.868259);
}

double NNfunction_ss_dLcR::synapse0x1713400() {
   return (neuron0x170b5b0()*-0.308133);
}

double NNfunction_ss_dLcR::synapse0x1713440() {
   return (neuron0x170b8f0()*-0.510728);
}

double NNfunction_ss_dLcR::synapse0x1713480() {
   return (neuron0x170bc30()*0.158585);
}

double NNfunction_ss_dLcR::synapse0x17134c0() {
   return (neuron0x170bf70()*0.337252);
}

double NNfunction_ss_dLcR::synapse0x1713500() {
   return (neuron0x170c2b0()*-0.798958);
}

double NNfunction_ss_dLcR::synapse0x1713540() {
   return (neuron0x170c5f0()*0.353583);
}

double NNfunction_ss_dLcR::synapse0x1713580() {
   return (neuron0x170c930()*-0.101016);
}

double NNfunction_ss_dLcR::synapse0x17135c0() {
   return (neuron0x170cc70()*0.0482403);
}

double NNfunction_ss_dLcR::synapse0x1713600() {
   return (neuron0x170cfb0()*0.509164);
}

double NNfunction_ss_dLcR::synapse0x1713640() {
   return (neuron0x170d2f0()*-0.0059378);
}

double NNfunction_ss_dLcR::synapse0x1713680() {
   return (neuron0x170d630()*0.541947);
}

double NNfunction_ss_dLcR::synapse0x1713110() {
   return (neuron0x170d970()*1.12076);
}

double NNfunction_ss_dLcR::synapse0x1713150() {
   return (neuron0x170ded0()*-0.458071);
}

double NNfunction_ss_dLcR::synapse0x17137d0() {
   return (neuron0x170e0f0()*0.137141);
}

double NNfunction_ss_dLcR::synapse0x1713810() {
   return (neuron0x170e430()*-0.0302883);
}

double NNfunction_ss_dLcR::synapse0x1713850() {
   return (neuron0x170e770()*-0.748361);
}

double NNfunction_ss_dLcR::synapse0x1713890() {
   return (neuron0x170eab0()*0.0524276);
}

double NNfunction_ss_dLcR::synapse0x17138d0() {
   return (neuron0x170edf0()*0.450069);
}

double NNfunction_ss_dLcR::synapse0x1713910() {
   return (neuron0x170f130()*0.201056);
}

double NNfunction_ss_dLcR::synapse0x1713c90() {
   return (neuron0x170a570()*0.081782);
}

double NNfunction_ss_dLcR::synapse0x1713cd0() {
   return (neuron0x170a8b0()*0.0398617);
}

double NNfunction_ss_dLcR::synapse0x1713d10() {
   return (neuron0x170abf0()*-0.000116359);
}

double NNfunction_ss_dLcR::synapse0x1713d50() {
   return (neuron0x170af30()*0.347779);
}

double NNfunction_ss_dLcR::synapse0x1713d90() {
   return (neuron0x170b270()*0.0145453);
}

double NNfunction_ss_dLcR::synapse0x1713dd0() {
   return (neuron0x170b5b0()*0.0428363);
}

double NNfunction_ss_dLcR::synapse0x1713e10() {
   return (neuron0x170b8f0()*0.0229846);
}

double NNfunction_ss_dLcR::synapse0x1713e50() {
   return (neuron0x170bc30()*0.0383229);
}

double NNfunction_ss_dLcR::synapse0x1713e90() {
   return (neuron0x170bf70()*-0.0616942);
}

double NNfunction_ss_dLcR::synapse0x1713ed0() {
   return (neuron0x170c2b0()*-0.0365618);
}

double NNfunction_ss_dLcR::synapse0x1713f10() {
   return (neuron0x170c5f0()*0.00578055);
}

double NNfunction_ss_dLcR::synapse0x1713f50() {
   return (neuron0x170c930()*-0.252192);
}

double NNfunction_ss_dLcR::synapse0x1713f90() {
   return (neuron0x170cc70()*-0.0368887);
}

double NNfunction_ss_dLcR::synapse0x1713fd0() {
   return (neuron0x170cfb0()*-0.00743497);
}

double NNfunction_ss_dLcR::synapse0x1714010() {
   return (neuron0x170d2f0()*-0.0302884);
}

double NNfunction_ss_dLcR::synapse0x1714050() {
   return (neuron0x170d630()*2.25872);
}

double NNfunction_ss_dLcR::synapse0x1713ae0() {
   return (neuron0x170d970()*0.0888633);
}

double NNfunction_ss_dLcR::synapse0x1713b20() {
   return (neuron0x170ded0()*-0.0222942);
}

double NNfunction_ss_dLcR::synapse0x17141a0() {
   return (neuron0x170e0f0()*0.00534961);
}

double NNfunction_ss_dLcR::synapse0x17141e0() {
   return (neuron0x170e430()*-0.0309776);
}

double NNfunction_ss_dLcR::synapse0x1714220() {
   return (neuron0x170e770()*-0.0164081);
}

double NNfunction_ss_dLcR::synapse0x1714260() {
   return (neuron0x170eab0()*0.00669377);
}

double NNfunction_ss_dLcR::synapse0x17142a0() {
   return (neuron0x170edf0()*0.0186519);
}

double NNfunction_ss_dLcR::synapse0x17142e0() {
   return (neuron0x170f130()*-0.00213235);
}

double NNfunction_ss_dLcR::synapse0x170ddc0() {
   return (neuron0x170a570()*1.27666);
}

double NNfunction_ss_dLcR::synapse0x170de00() {
   return (neuron0x170a8b0()*-0.680073);
}

double NNfunction_ss_dLcR::synapse0x170de40() {
   return (neuron0x170abf0()*0.0303102);
}

double NNfunction_ss_dLcR::synapse0x170de80() {
   return (neuron0x170af30()*0.370582);
}

double NNfunction_ss_dLcR::synapse0x1714870() {
   return (neuron0x170b270()*0.818439);
}

double NNfunction_ss_dLcR::synapse0x17148b0() {
   return (neuron0x170b5b0()*0.1107);
}

double NNfunction_ss_dLcR::synapse0x17148f0() {
   return (neuron0x170b8f0()*-0.0433583);
}

double NNfunction_ss_dLcR::synapse0x1714930() {
   return (neuron0x170bc30()*0.00653127);
}

double NNfunction_ss_dLcR::synapse0x1714970() {
   return (neuron0x170bf70()*0.592648);
}

double NNfunction_ss_dLcR::synapse0x17149b0() {
   return (neuron0x170c2b0()*0.363848);
}

double NNfunction_ss_dLcR::synapse0x17149f0() {
   return (neuron0x170c5f0()*0.428918);
}

double NNfunction_ss_dLcR::synapse0x1714a30() {
   return (neuron0x170c930()*0.186517);
}

double NNfunction_ss_dLcR::synapse0x1714a70() {
   return (neuron0x170cc70()*-0.183652);
}

double NNfunction_ss_dLcR::synapse0x1714ab0() {
   return (neuron0x170cfb0()*0.519915);
}

double NNfunction_ss_dLcR::synapse0x1714af0() {
   return (neuron0x170d2f0()*-0.146176);
}

double NNfunction_ss_dLcR::synapse0x1714b30() {
   return (neuron0x170d630()*0.0968899);
}

double NNfunction_ss_dLcR::synapse0x17144b0() {
   return (neuron0x170d970()*-1.1098);
}

double NNfunction_ss_dLcR::synapse0x17144f0() {
   return (neuron0x170ded0()*0.183197);
}

double NNfunction_ss_dLcR::synapse0x1714c80() {
   return (neuron0x170e0f0()*-0.239827);
}

double NNfunction_ss_dLcR::synapse0x1714cc0() {
   return (neuron0x170e430()*-0.0917224);
}

double NNfunction_ss_dLcR::synapse0x1714d00() {
   return (neuron0x170e770()*-0.0304207);
}

double NNfunction_ss_dLcR::synapse0x1714d40() {
   return (neuron0x170eab0()*0.252576);
}

double NNfunction_ss_dLcR::synapse0x1714d80() {
   return (neuron0x170edf0()*0.552821);
}

double NNfunction_ss_dLcR::synapse0x1714dc0() {
   return (neuron0x170f130()*0.970809);
}

double NNfunction_ss_dLcR::synapse0x1715140() {
   return (neuron0x170a570()*1.10195);
}

double NNfunction_ss_dLcR::synapse0x1715180() {
   return (neuron0x170a8b0()*0.16113);
}

double NNfunction_ss_dLcR::synapse0x17151c0() {
   return (neuron0x170abf0()*1.67508);
}

double NNfunction_ss_dLcR::synapse0x1715200() {
   return (neuron0x170af30()*0.333979);
}

double NNfunction_ss_dLcR::synapse0x1715240() {
   return (neuron0x170b270()*-0.0818691);
}

double NNfunction_ss_dLcR::synapse0x1715280() {
   return (neuron0x170b5b0()*-0.818903);
}

double NNfunction_ss_dLcR::synapse0x17152c0() {
   return (neuron0x170b8f0()*0.333153);
}

double NNfunction_ss_dLcR::synapse0x1715300() {
   return (neuron0x170bc30()*0.380825);
}

double NNfunction_ss_dLcR::synapse0x1715340() {
   return (neuron0x170bf70()*-0.0788667);
}

double NNfunction_ss_dLcR::synapse0x1715380() {
   return (neuron0x170c2b0()*-0.416801);
}

double NNfunction_ss_dLcR::synapse0x17153c0() {
   return (neuron0x170c5f0()*0.870035);
}

double NNfunction_ss_dLcR::synapse0x1715400() {
   return (neuron0x170c930()*0.331549);
}

double NNfunction_ss_dLcR::synapse0x1715440() {
   return (neuron0x170cc70()*-0.276515);
}

double NNfunction_ss_dLcR::synapse0x1715480() {
   return (neuron0x170cfb0()*-1.02842);
}

double NNfunction_ss_dLcR::synapse0x17154c0() {
   return (neuron0x170d2f0()*-0.479169);
}

double NNfunction_ss_dLcR::synapse0x1715500() {
   return (neuron0x170d630()*0.28802);
}

double NNfunction_ss_dLcR::synapse0x1714f90() {
   return (neuron0x170d970()*0.475281);
}

double NNfunction_ss_dLcR::synapse0x1714fd0() {
   return (neuron0x170ded0()*-0.983629);
}

double NNfunction_ss_dLcR::synapse0x1715650() {
   return (neuron0x170e0f0()*-0.747646);
}

double NNfunction_ss_dLcR::synapse0x1715690() {
   return (neuron0x170e430()*0.161073);
}

double NNfunction_ss_dLcR::synapse0x17156d0() {
   return (neuron0x170e770()*0.929029);
}

double NNfunction_ss_dLcR::synapse0x1715710() {
   return (neuron0x170eab0()*-1.38083);
}

double NNfunction_ss_dLcR::synapse0x1715750() {
   return (neuron0x170edf0()*0.184299);
}

double NNfunction_ss_dLcR::synapse0x1715790() {
   return (neuron0x170f130()*1.26616);
}

double NNfunction_ss_dLcR::synapse0x1715b10() {
   return (neuron0x170a570()*-0.25176);
}

double NNfunction_ss_dLcR::synapse0x1715b50() {
   return (neuron0x170a8b0()*0.0527698);
}

double NNfunction_ss_dLcR::synapse0x1715b90() {
   return (neuron0x170abf0()*-0.230685);
}

double NNfunction_ss_dLcR::synapse0x1715bd0() {
   return (neuron0x170af30()*0.14897);
}

double NNfunction_ss_dLcR::synapse0x1715c10() {
   return (neuron0x170b270()*-0.661492);
}

double NNfunction_ss_dLcR::synapse0x1715c50() {
   return (neuron0x170b5b0()*1.09964);
}

double NNfunction_ss_dLcR::synapse0x1715c90() {
   return (neuron0x170b8f0()*-0.658129);
}

double NNfunction_ss_dLcR::synapse0x1715cd0() {
   return (neuron0x170bc30()*0.793568);
}

double NNfunction_ss_dLcR::synapse0x1715d10() {
   return (neuron0x170bf70()*0.456391);
}

double NNfunction_ss_dLcR::synapse0x1715d50() {
   return (neuron0x170c2b0()*-0.471941);
}

double NNfunction_ss_dLcR::synapse0x1715d90() {
   return (neuron0x170c5f0()*0.0219406);
}

double NNfunction_ss_dLcR::synapse0x1715dd0() {
   return (neuron0x170c930()*1.16411);
}

double NNfunction_ss_dLcR::synapse0x1715e10() {
   return (neuron0x170cc70()*-0.281278);
}

double NNfunction_ss_dLcR::synapse0x1715e50() {
   return (neuron0x170cfb0()*-0.264652);
}

double NNfunction_ss_dLcR::synapse0x1715e90() {
   return (neuron0x170d2f0()*0.271858);
}

double NNfunction_ss_dLcR::synapse0x1715ed0() {
   return (neuron0x170d630()*0.711042);
}

double NNfunction_ss_dLcR::synapse0x1715960() {
   return (neuron0x170d970()*1.03229);
}

double NNfunction_ss_dLcR::synapse0x17159a0() {
   return (neuron0x170ded0()*0.459074);
}

double NNfunction_ss_dLcR::synapse0x1712730() {
   return (neuron0x170e0f0()*-0.728179);
}

double NNfunction_ss_dLcR::synapse0x1712770() {
   return (neuron0x170e430()*0.751688);
}

double NNfunction_ss_dLcR::synapse0x17127b0() {
   return (neuron0x170e770()*-0.152014);
}

double NNfunction_ss_dLcR::synapse0x17127f0() {
   return (neuron0x170eab0()*-0.53815);
}

double NNfunction_ss_dLcR::synapse0x1712830() {
   return (neuron0x170edf0()*-0.427581);
}

double NNfunction_ss_dLcR::synapse0x1712870() {
   return (neuron0x170f130()*-0.917307);
}

double NNfunction_ss_dLcR::synapse0x1712bf0() {
   return (neuron0x170a570()*-0.274059);
}

double NNfunction_ss_dLcR::synapse0x1712c30() {
   return (neuron0x170a8b0()*-0.334497);
}

double NNfunction_ss_dLcR::synapse0x1712c70() {
   return (neuron0x170abf0()*-0.0567835);
}

double NNfunction_ss_dLcR::synapse0x1712cb0() {
   return (neuron0x170af30()*1.43132);
}

double NNfunction_ss_dLcR::synapse0x1712cf0() {
   return (neuron0x170b270()*-0.148615);
}

double NNfunction_ss_dLcR::synapse0x1712d30() {
   return (neuron0x170b5b0()*-0.406193);
}

double NNfunction_ss_dLcR::synapse0x1712d70() {
   return (neuron0x170b8f0()*-0.146572);
}

double NNfunction_ss_dLcR::synapse0x1712db0() {
   return (neuron0x170bc30()*-0.941963);
}

double NNfunction_ss_dLcR::synapse0x1712df0() {
   return (neuron0x170bf70()*-0.134864);
}

double NNfunction_ss_dLcR::synapse0x1712e30() {
   return (neuron0x170c2b0()*0.316155);
}

double NNfunction_ss_dLcR::synapse0x1712e70() {
   return (neuron0x170c5f0()*-0.419678);
}

double NNfunction_ss_dLcR::synapse0x1712eb0() {
   return (neuron0x170c930()*0.827008);
}

double NNfunction_ss_dLcR::synapse0x1712ef0() {
   return (neuron0x170cc70()*-0.156381);
}

double NNfunction_ss_dLcR::synapse0x1717030() {
   return (neuron0x170cfb0()*-0.531737);
}

double NNfunction_ss_dLcR::synapse0x1717070() {
   return (neuron0x170d2f0()*-0.412393);
}

double NNfunction_ss_dLcR::synapse0x17170b0() {
   return (neuron0x170d630()*0.220517);
}

double NNfunction_ss_dLcR::synapse0x1712a40() {
   return (neuron0x170d970()*0.268152);
}

double NNfunction_ss_dLcR::synapse0x1712a80() {
   return (neuron0x170ded0()*0.76828);
}

double NNfunction_ss_dLcR::synapse0x1717200() {
   return (neuron0x170e0f0()*-0.267912);
}

double NNfunction_ss_dLcR::synapse0x1717240() {
   return (neuron0x170e430()*-0.177126);
}

double NNfunction_ss_dLcR::synapse0x1717280() {
   return (neuron0x170e770()*-0.493531);
}

double NNfunction_ss_dLcR::synapse0x17172c0() {
   return (neuron0x170eab0()*-0.122038);
}

double NNfunction_ss_dLcR::synapse0x1717300() {
   return (neuron0x170edf0()*-0.33893);
}

double NNfunction_ss_dLcR::synapse0x1717340() {
   return (neuron0x170f130()*-0.575908);
}

double NNfunction_ss_dLcR::synapse0x17176c0() {
   return (neuron0x170a570()*-0.0111625);
}

double NNfunction_ss_dLcR::synapse0x1717700() {
   return (neuron0x170a8b0()*-0.0293529);
}

double NNfunction_ss_dLcR::synapse0x1717740() {
   return (neuron0x170abf0()*0.0315358);
}

double NNfunction_ss_dLcR::synapse0x1717780() {
   return (neuron0x170af30()*-2.30053);
}

double NNfunction_ss_dLcR::synapse0x17177c0() {
   return (neuron0x170b270()*-0.0144923);
}

double NNfunction_ss_dLcR::synapse0x1717800() {
   return (neuron0x170b5b0()*0.0292485);
}

double NNfunction_ss_dLcR::synapse0x1717840() {
   return (neuron0x170b8f0()*0.0490023);
}

double NNfunction_ss_dLcR::synapse0x1717880() {
   return (neuron0x170bc30()*-0.00723309);
}

double NNfunction_ss_dLcR::synapse0x17178c0() {
   return (neuron0x170bf70()*0.0326972);
}

double NNfunction_ss_dLcR::synapse0x1717900() {
   return (neuron0x170c2b0()*-0.0379369);
}

double NNfunction_ss_dLcR::synapse0x1717940() {
   return (neuron0x170c5f0()*-0.0161019);
}

double NNfunction_ss_dLcR::synapse0x1717980() {
   return (neuron0x170c930()*0.307168);
}

double NNfunction_ss_dLcR::synapse0x17179c0() {
   return (neuron0x170cc70()*0.0418444);
}

double NNfunction_ss_dLcR::synapse0x1717a00() {
   return (neuron0x170cfb0()*-0.00080875);
}

double NNfunction_ss_dLcR::synapse0x1717a40() {
   return (neuron0x170d2f0()*0.0468609);
}

double NNfunction_ss_dLcR::synapse0x1717a80() {
   return (neuron0x170d630()*0.228375);
}

double NNfunction_ss_dLcR::synapse0x1717510() {
   return (neuron0x170d970()*0.00335216);
}

double NNfunction_ss_dLcR::synapse0x1717550() {
   return (neuron0x170ded0()*0.0343457);
}

double NNfunction_ss_dLcR::synapse0x1717bd0() {
   return (neuron0x170e0f0()*-0.0198117);
}

double NNfunction_ss_dLcR::synapse0x1717c10() {
   return (neuron0x170e430()*-0.0280966);
}

double NNfunction_ss_dLcR::synapse0x1717c50() {
   return (neuron0x170e770()*-0.00828761);
}

double NNfunction_ss_dLcR::synapse0x1717c90() {
   return (neuron0x170eab0()*-0.0380151);
}

double NNfunction_ss_dLcR::synapse0x1717cd0() {
   return (neuron0x170edf0()*-0.0125036);
}

double NNfunction_ss_dLcR::synapse0x1717d10() {
   return (neuron0x170f130()*0.0309489);
}

double NNfunction_ss_dLcR::synapse0x1718090() {
   return (neuron0x170a570()*0.205693);
}

double NNfunction_ss_dLcR::synapse0x17180d0() {
   return (neuron0x170a8b0()*0.230932);
}

double NNfunction_ss_dLcR::synapse0x1718110() {
   return (neuron0x170abf0()*0.619501);
}

double NNfunction_ss_dLcR::synapse0x1718150() {
   return (neuron0x170af30()*0.906088);
}

double NNfunction_ss_dLcR::synapse0x1718190() {
   return (neuron0x170b270()*-0.381439);
}

double NNfunction_ss_dLcR::synapse0x17181d0() {
   return (neuron0x170b5b0()*-0.236369);
}

double NNfunction_ss_dLcR::synapse0x1718210() {
   return (neuron0x170b8f0()*0.658594);
}

double NNfunction_ss_dLcR::synapse0x1718250() {
   return (neuron0x170bc30()*0.00247481);
}

double NNfunction_ss_dLcR::synapse0x1718290() {
   return (neuron0x170bf70()*0.0896119);
}

double NNfunction_ss_dLcR::synapse0x17182d0() {
   return (neuron0x170c2b0()*0.541321);
}

double NNfunction_ss_dLcR::synapse0x1718310() {
   return (neuron0x170c5f0()*-0.0645799);
}

double NNfunction_ss_dLcR::synapse0x1718350() {
   return (neuron0x170c930()*-0.0463478);
}

double NNfunction_ss_dLcR::synapse0x1718390() {
   return (neuron0x170cc70()*0.0667573);
}

double NNfunction_ss_dLcR::synapse0x17183d0() {
   return (neuron0x170cfb0()*-0.777659);
}

double NNfunction_ss_dLcR::synapse0x1718410() {
   return (neuron0x170d2f0()*0.760554);
}

double NNfunction_ss_dLcR::synapse0x1718450() {
   return (neuron0x170d630()*0.276807);
}

double NNfunction_ss_dLcR::synapse0x1717ee0() {
   return (neuron0x170d970()*-0.437291);
}

double NNfunction_ss_dLcR::synapse0x1717f20() {
   return (neuron0x170ded0()*-0.202513);
}

double NNfunction_ss_dLcR::synapse0x17185a0() {
   return (neuron0x170e0f0()*1.31541);
}

double NNfunction_ss_dLcR::synapse0x17185e0() {
   return (neuron0x170e430()*-0.011084);
}

double NNfunction_ss_dLcR::synapse0x1718620() {
   return (neuron0x170e770()*1.16032);
}

double NNfunction_ss_dLcR::synapse0x1718660() {
   return (neuron0x170eab0()*-0.534062);
}

double NNfunction_ss_dLcR::synapse0x17186a0() {
   return (neuron0x170edf0()*-0.573082);
}

double NNfunction_ss_dLcR::synapse0x17186e0() {
   return (neuron0x170f130()*-0.155598);
}

double NNfunction_ss_dLcR::synapse0x1718a60() {
   return (neuron0x170a570()*0.291156);
}

double NNfunction_ss_dLcR::synapse0x1718aa0() {
   return (neuron0x170a8b0()*-0.214451);
}

double NNfunction_ss_dLcR::synapse0x1718ae0() {
   return (neuron0x170abf0()*-0.227058);
}

double NNfunction_ss_dLcR::synapse0x1718b20() {
   return (neuron0x170af30()*-0.331926);
}

double NNfunction_ss_dLcR::synapse0x1718b60() {
   return (neuron0x170b270()*0.0446362);
}

double NNfunction_ss_dLcR::synapse0x1718ba0() {
   return (neuron0x170b5b0()*-0.31998);
}

double NNfunction_ss_dLcR::synapse0x1718be0() {
   return (neuron0x170b8f0()*0.104604);
}

double NNfunction_ss_dLcR::synapse0x1718c20() {
   return (neuron0x170bc30()*-0.758051);
}

double NNfunction_ss_dLcR::synapse0x1718c60() {
   return (neuron0x170bf70()*-0.0457651);
}

double NNfunction_ss_dLcR::synapse0x1718ca0() {
   return (neuron0x170c2b0()*0.935538);
}

double NNfunction_ss_dLcR::synapse0x1718ce0() {
   return (neuron0x170c5f0()*0.288509);
}

double NNfunction_ss_dLcR::synapse0x1718d20() {
   return (neuron0x170c930()*-2.11084);
}

double NNfunction_ss_dLcR::synapse0x1718d60() {
   return (neuron0x170cc70()*-0.379259);
}

double NNfunction_ss_dLcR::synapse0x1718da0() {
   return (neuron0x170cfb0()*0.453279);
}

double NNfunction_ss_dLcR::synapse0x1718de0() {
   return (neuron0x170d2f0()*-1.00773);
}

double NNfunction_ss_dLcR::synapse0x1718e20() {
   return (neuron0x170d630()*0.461605);
}

double NNfunction_ss_dLcR::synapse0x17188b0() {
   return (neuron0x170d970()*1.25489);
}

double NNfunction_ss_dLcR::synapse0x17188f0() {
   return (neuron0x170ded0()*1.62606);
}

double NNfunction_ss_dLcR::synapse0x1718f70() {
   return (neuron0x170e0f0()*1.65261);
}

double NNfunction_ss_dLcR::synapse0x1718fb0() {
   return (neuron0x170e430()*-0.478124);
}

double NNfunction_ss_dLcR::synapse0x1718ff0() {
   return (neuron0x170e770()*0.20029);
}

double NNfunction_ss_dLcR::synapse0x1719030() {
   return (neuron0x170eab0()*0.299067);
}

double NNfunction_ss_dLcR::synapse0x1719070() {
   return (neuron0x170edf0()*-0.0357457);
}

double NNfunction_ss_dLcR::synapse0x17190b0() {
   return (neuron0x170f130()*-0.43727);
}

double NNfunction_ss_dLcR::synapse0x1719430() {
   return (neuron0x170a570()*-0.421934);
}

double NNfunction_ss_dLcR::synapse0x170a790() {
   return (neuron0x170a8b0()*0.146466);
}

double NNfunction_ss_dLcR::synapse0x170a7d0() {
   return (neuron0x170abf0()*-0.192441);
}

double NNfunction_ss_dLcR::synapse0x170aad0() {
   return (neuron0x170af30()*0.468144);
}

double NNfunction_ss_dLcR::synapse0x170ab10() {
   return (neuron0x170b270()*-0.677188);
}

double NNfunction_ss_dLcR::synapse0x170ae10() {
   return (neuron0x170b5b0()*-1.19935);
}

double NNfunction_ss_dLcR::synapse0x170ae50() {
   return (neuron0x170b8f0()*-0.228166);
}

double NNfunction_ss_dLcR::synapse0x170b150() {
   return (neuron0x170bc30()*0.330995);
}

double NNfunction_ss_dLcR::synapse0x170b190() {
   return (neuron0x170bf70()*-0.015164);
}

double NNfunction_ss_dLcR::synapse0x170b490() {
   return (neuron0x170c2b0()*-0.482049);
}

double NNfunction_ss_dLcR::synapse0x170b4d0() {
   return (neuron0x170c5f0()*-0.130255);
}

double NNfunction_ss_dLcR::synapse0x170b7d0() {
   return (neuron0x170c930()*-1.22473);
}

double NNfunction_ss_dLcR::synapse0x170b810() {
   return (neuron0x170cc70()*-0.144752);
}

double NNfunction_ss_dLcR::synapse0x170bb10() {
   return (neuron0x170cfb0()*-1.21243);
}

double NNfunction_ss_dLcR::synapse0x170bb50() {
   return (neuron0x170d2f0()*-1.21323);
}

double NNfunction_ss_dLcR::synapse0x170be50() {
   return (neuron0x170d630()*-0.192591);
}

double NNfunction_ss_dLcR::synapse0x170be90() {
   return (neuron0x170d970()*-0.521927);
}

double NNfunction_ss_dLcR::synapse0x170c190() {
   return (neuron0x170ded0()*-0.00447327);
}

double NNfunction_ss_dLcR::synapse0x170c1d0() {
   return (neuron0x170e0f0()*1.01202);
}

double NNfunction_ss_dLcR::synapse0x170c4d0() {
   return (neuron0x170e430()*0.491401);
}

double NNfunction_ss_dLcR::synapse0x170c510() {
   return (neuron0x170e770()*0.332907);
}

double NNfunction_ss_dLcR::synapse0x170c810() {
   return (neuron0x170eab0()*-0.187845);
}

double NNfunction_ss_dLcR::synapse0x170c850() {
   return (neuron0x170edf0()*-0.248658);
}

double NNfunction_ss_dLcR::synapse0x170cb50() {
   return (neuron0x170f130()*-0.115813);
}

double NNfunction_ss_dLcR::synapse0x170cb90() {
   return (neuron0x170a570()*0.770379);
}

double NNfunction_ss_dLcR::synapse0x170d850() {
   return (neuron0x170a8b0()*-1.01267);
}

double NNfunction_ss_dLcR::synapse0x170d890() {
   return (neuron0x170abf0()*0.8217);
}

double NNfunction_ss_dLcR::synapse0x1719280() {
   return (neuron0x170af30()*-0.312267);
}

double NNfunction_ss_dLcR::synapse0x17192c0() {
   return (neuron0x170b270()*1.18701);
}

double NNfunction_ss_dLcR::synapse0x170db90() {
   return (neuron0x170b5b0()*0.472961);
}

double NNfunction_ss_dLcR::synapse0x170dbd0() {
   return (neuron0x170b8f0()*1.35764);
}

double NNfunction_ss_dLcR::synapse0x14bbb60() {
   return (neuron0x170bc30()*0.700322);
}

double NNfunction_ss_dLcR::synapse0x14bbba0() {
   return (neuron0x170bf70()*-0.79244);
}

double NNfunction_ss_dLcR::synapse0x170e310() {
   return (neuron0x170c2b0()*-0.967223);
}

double NNfunction_ss_dLcR::synapse0x170e350() {
   return (neuron0x170c5f0()*0.0778025);
}

double NNfunction_ss_dLcR::synapse0x170e650() {
   return (neuron0x170c930()*-0.549063);
}

double NNfunction_ss_dLcR::synapse0x170e690() {
   return (neuron0x170cc70()*0.0660935);
}

double NNfunction_ss_dLcR::synapse0x170e990() {
   return (neuron0x170cfb0()*-0.683055);
}

double NNfunction_ss_dLcR::synapse0x170e9d0() {
   return (neuron0x170d2f0()*-0.196469);
}

double NNfunction_ss_dLcR::synapse0x170ecd0() {
   return (neuron0x170d630()*-0.159409);
}

double NNfunction_ss_dLcR::synapse0x170ed10() {
   return (neuron0x170d970()*-0.275526);
}

double NNfunction_ss_dLcR::synapse0x170f010() {
   return (neuron0x170ded0()*0.104006);
}

double NNfunction_ss_dLcR::synapse0x170f050() {
   return (neuron0x170e0f0()*-0.259298);
}

double NNfunction_ss_dLcR::synapse0x170f350() {
   return (neuron0x170e430()*-0.412606);
}

double NNfunction_ss_dLcR::synapse0x170f390() {
   return (neuron0x170e770()*0.8305);
}

double NNfunction_ss_dLcR::synapse0x170ce90() {
   return (neuron0x170eab0()*-0.312591);
}

double NNfunction_ss_dLcR::synapse0x170ced0() {
   return (neuron0x170edf0()*-0.262886);
}

double NNfunction_ss_dLcR::synapse0x171b1a0() {
   return (neuron0x170f130()*0.154645);
}

double NNfunction_ss_dLcR::synapse0x171b520() {
   return (neuron0x170a570()*-0.00219773);
}

double NNfunction_ss_dLcR::synapse0x171b560() {
   return (neuron0x170a8b0()*0.0177016);
}

double NNfunction_ss_dLcR::synapse0x171b5a0() {
   return (neuron0x170abf0()*-0.0126585);
}

double NNfunction_ss_dLcR::synapse0x171b5e0() {
   return (neuron0x170af30()*3.09885);
}

double NNfunction_ss_dLcR::synapse0x171b620() {
   return (neuron0x170b270()*0.000184289);
}

double NNfunction_ss_dLcR::synapse0x171b660() {
   return (neuron0x170b5b0()*0.00103177);
}

double NNfunction_ss_dLcR::synapse0x171b6a0() {
   return (neuron0x170b8f0()*0.00221176);
}

double NNfunction_ss_dLcR::synapse0x171b6e0() {
   return (neuron0x170bc30()*0.00177036);
}

double NNfunction_ss_dLcR::synapse0x171b720() {
   return (neuron0x170bf70()*0.000822512);
}

double NNfunction_ss_dLcR::synapse0x171b760() {
   return (neuron0x170c2b0()*-0.00656581);
}

double NNfunction_ss_dLcR::synapse0x171b7a0() {
   return (neuron0x170c5f0()*0.00677061);
}

double NNfunction_ss_dLcR::synapse0x171b7e0() {
   return (neuron0x170c930()*-0.177527);
}

double NNfunction_ss_dLcR::synapse0x171b820() {
   return (neuron0x170cc70()*-0.00831899);
}

double NNfunction_ss_dLcR::synapse0x171b860() {
   return (neuron0x170cfb0()*-0.00191123);
}

double NNfunction_ss_dLcR::synapse0x171b8a0() {
   return (neuron0x170d2f0()*-0.00186131);
}

double NNfunction_ss_dLcR::synapse0x171b8e0() {
   return (neuron0x170d630()*-0.186998);
}

double NNfunction_ss_dLcR::synapse0x171b370() {
   return (neuron0x170d970()*-0.00301758);
}

double NNfunction_ss_dLcR::synapse0x171b3b0() {
   return (neuron0x170ded0()*-0.00846514);
}

double NNfunction_ss_dLcR::synapse0x171ba30() {
   return (neuron0x170e0f0()*-0.00036317);
}

double NNfunction_ss_dLcR::synapse0x171ba70() {
   return (neuron0x170e430()*-0.00291271);
}

double NNfunction_ss_dLcR::synapse0x171bab0() {
   return (neuron0x170e770()*0.00264504);
}

double NNfunction_ss_dLcR::synapse0x171baf0() {
   return (neuron0x170eab0()*-0.00105793);
}

double NNfunction_ss_dLcR::synapse0x171bb30() {
   return (neuron0x170edf0()*0.00226889);
}

double NNfunction_ss_dLcR::synapse0x171bb70() {
   return (neuron0x170f130()*0.00677937);
}

double NNfunction_ss_dLcR::synapse0x171bef0() {
   return (neuron0x170a570()*0.418777);
}

double NNfunction_ss_dLcR::synapse0x171bf30() {
   return (neuron0x170a8b0()*0.500684);
}

double NNfunction_ss_dLcR::synapse0x171bf70() {
   return (neuron0x170abf0()*-0.809416);
}

double NNfunction_ss_dLcR::synapse0x171bfb0() {
   return (neuron0x170af30()*-1.49339);
}

double NNfunction_ss_dLcR::synapse0x171bff0() {
   return (neuron0x170b270()*-0.100456);
}

double NNfunction_ss_dLcR::synapse0x171c030() {
   return (neuron0x170b5b0()*0.154698);
}

double NNfunction_ss_dLcR::synapse0x171c070() {
   return (neuron0x170b8f0()*0.507349);
}

double NNfunction_ss_dLcR::synapse0x171c0b0() {
   return (neuron0x170bc30()*1.00727);
}

double NNfunction_ss_dLcR::synapse0x171c0f0() {
   return (neuron0x170bf70()*-0.313489);
}

double NNfunction_ss_dLcR::synapse0x171c130() {
   return (neuron0x170c2b0()*0.249529);
}

double NNfunction_ss_dLcR::synapse0x171c170() {
   return (neuron0x170c5f0()*0.11753);
}

double NNfunction_ss_dLcR::synapse0x171c1b0() {
   return (neuron0x170c930()*1.36455);
}

double NNfunction_ss_dLcR::synapse0x171c1f0() {
   return (neuron0x170cc70()*0.333913);
}

double NNfunction_ss_dLcR::synapse0x171c230() {
   return (neuron0x170cfb0()*-0.368262);
}

double NNfunction_ss_dLcR::synapse0x171c270() {
   return (neuron0x170d2f0()*-0.790096);
}

double NNfunction_ss_dLcR::synapse0x171c2b0() {
   return (neuron0x170d630()*-0.613493);
}

double NNfunction_ss_dLcR::synapse0x171bd40() {
   return (neuron0x170d970()*-0.493289);
}

double NNfunction_ss_dLcR::synapse0x171bd80() {
   return (neuron0x170ded0()*0.623605);
}

double NNfunction_ss_dLcR::synapse0x171c400() {
   return (neuron0x170e0f0()*0.779628);
}

double NNfunction_ss_dLcR::synapse0x171c440() {
   return (neuron0x170e430()*0.720619);
}

double NNfunction_ss_dLcR::synapse0x171c480() {
   return (neuron0x170e770()*0.0484625);
}

double NNfunction_ss_dLcR::synapse0x171c4c0() {
   return (neuron0x170eab0()*1.25732);
}

double NNfunction_ss_dLcR::synapse0x171c500() {
   return (neuron0x170edf0()*0.0217508);
}

double NNfunction_ss_dLcR::synapse0x171c540() {
   return (neuron0x170f130()*-0.108807);
}

double NNfunction_ss_dLcR::synapse0x171c8c0() {
   return (neuron0x170a570()*-0.000674976);
}

double NNfunction_ss_dLcR::synapse0x171c900() {
   return (neuron0x170a8b0()*-0.178819);
}

double NNfunction_ss_dLcR::synapse0x171c940() {
   return (neuron0x170abf0()*0.212935);
}

double NNfunction_ss_dLcR::synapse0x171c980() {
   return (neuron0x170af30()*-0.787457);
}

double NNfunction_ss_dLcR::synapse0x171c9c0() {
   return (neuron0x170b270()*-0.631496);
}

double NNfunction_ss_dLcR::synapse0x171ca00() {
   return (neuron0x170b5b0()*0.139839);
}

double NNfunction_ss_dLcR::synapse0x171ca40() {
   return (neuron0x170b8f0()*-0.16206);
}

double NNfunction_ss_dLcR::synapse0x171ca80() {
   return (neuron0x170bc30()*1.66581);
}

double NNfunction_ss_dLcR::synapse0x171cac0() {
   return (neuron0x170bf70()*-0.412849);
}

double NNfunction_ss_dLcR::synapse0x171cb00() {
   return (neuron0x170c2b0()*0.238087);
}

double NNfunction_ss_dLcR::synapse0x171cb40() {
   return (neuron0x170c5f0()*0.0217239);
}

double NNfunction_ss_dLcR::synapse0x171cb80() {
   return (neuron0x170c930()*-0.212069);
}

double NNfunction_ss_dLcR::synapse0x171cbc0() {
   return (neuron0x170cc70()*-0.0606157);
}

double NNfunction_ss_dLcR::synapse0x171cc00() {
   return (neuron0x170cfb0()*0.461368);
}

double NNfunction_ss_dLcR::synapse0x171cc40() {
   return (neuron0x170d2f0()*-0.377983);
}

double NNfunction_ss_dLcR::synapse0x171cc80() {
   return (neuron0x170d630()*-2.77674);
}

double NNfunction_ss_dLcR::synapse0x171c710() {
   return (neuron0x170d970()*0.00327757);
}

double NNfunction_ss_dLcR::synapse0x171c750() {
   return (neuron0x170ded0()*0.0282501);
}

double NNfunction_ss_dLcR::synapse0x171cdd0() {
   return (neuron0x170e0f0()*-0.438941);
}

double NNfunction_ss_dLcR::synapse0x171ce10() {
   return (neuron0x170e430()*-0.305241);
}

double NNfunction_ss_dLcR::synapse0x171ce50() {
   return (neuron0x170e770()*-0.416045);
}

double NNfunction_ss_dLcR::synapse0x171ce90() {
   return (neuron0x170eab0()*0.200034);
}

double NNfunction_ss_dLcR::synapse0x171ced0() {
   return (neuron0x170edf0()*-0.230971);
}

double NNfunction_ss_dLcR::synapse0x171cf10() {
   return (neuron0x170f130()*-0.518192);
}

double NNfunction_ss_dLcR::synapse0x171d290() {
   return (neuron0x170a570()*0.429613);
}

double NNfunction_ss_dLcR::synapse0x171d2d0() {
   return (neuron0x170a8b0()*-0.24772);
}

double NNfunction_ss_dLcR::synapse0x171d310() {
   return (neuron0x170abf0()*-1.10509);
}

double NNfunction_ss_dLcR::synapse0x171d350() {
   return (neuron0x170af30()*-0.647618);
}

double NNfunction_ss_dLcR::synapse0x171d390() {
   return (neuron0x170b270()*-1.06055);
}

double NNfunction_ss_dLcR::synapse0x171d3d0() {
   return (neuron0x170b5b0()*0.159481);
}

double NNfunction_ss_dLcR::synapse0x171d410() {
   return (neuron0x170b8f0()*0.289445);
}

double NNfunction_ss_dLcR::synapse0x171d450() {
   return (neuron0x170bc30()*-0.676459);
}

double NNfunction_ss_dLcR::synapse0x171d490() {
   return (neuron0x170bf70()*-0.830363);
}

double NNfunction_ss_dLcR::synapse0x171d4d0() {
   return (neuron0x170c2b0()*0.812245);
}

double NNfunction_ss_dLcR::synapse0x171d510() {
   return (neuron0x170c5f0()*0.29321);
}

double NNfunction_ss_dLcR::synapse0x171d550() {
   return (neuron0x170c930()*-0.342025);
}

double NNfunction_ss_dLcR::synapse0x171d590() {
   return (neuron0x170cc70()*0.870725);
}

double NNfunction_ss_dLcR::synapse0x171d5d0() {
   return (neuron0x170cfb0()*0.33334);
}

double NNfunction_ss_dLcR::synapse0x171d610() {
   return (neuron0x170d2f0()*0.121528);
}

double NNfunction_ss_dLcR::synapse0x171d650() {
   return (neuron0x170d630()*1.07738);
}

double NNfunction_ss_dLcR::synapse0x171d0e0() {
   return (neuron0x170d970()*0.70779);
}

double NNfunction_ss_dLcR::synapse0x171d120() {
   return (neuron0x170ded0()*0.676629);
}

double NNfunction_ss_dLcR::synapse0x171d7a0() {
   return (neuron0x170e0f0()*-0.624845);
}

double NNfunction_ss_dLcR::synapse0x171d7e0() {
   return (neuron0x170e430()*-0.739723);
}

double NNfunction_ss_dLcR::synapse0x171d820() {
   return (neuron0x170e770()*-0.367756);
}

double NNfunction_ss_dLcR::synapse0x171d860() {
   return (neuron0x170eab0()*-0.46972);
}

double NNfunction_ss_dLcR::synapse0x171d8a0() {
   return (neuron0x170edf0()*-0.570046);
}

double NNfunction_ss_dLcR::synapse0x171d8e0() {
   return (neuron0x170f130()*-0.0120236);
}

double NNfunction_ss_dLcR::synapse0x171dc60() {
   return (neuron0x170a570()*0.112627);
}

double NNfunction_ss_dLcR::synapse0x171dca0() {
   return (neuron0x170a8b0()*0.0293214);
}

double NNfunction_ss_dLcR::synapse0x171dce0() {
   return (neuron0x170abf0()*-0.517695);
}

double NNfunction_ss_dLcR::synapse0x171dd20() {
   return (neuron0x170af30()*-0.256636);
}

double NNfunction_ss_dLcR::synapse0x171dd60() {
   return (neuron0x170b270()*0.0905253);
}

double NNfunction_ss_dLcR::synapse0x171dda0() {
   return (neuron0x170b5b0()*-0.132245);
}

double NNfunction_ss_dLcR::synapse0x171dde0() {
   return (neuron0x170b8f0()*-0.0515447);
}

double NNfunction_ss_dLcR::synapse0x171de20() {
   return (neuron0x170bc30()*-0.0458185);
}

double NNfunction_ss_dLcR::synapse0x171de60() {
   return (neuron0x170bf70()*-0.149867);
}

double NNfunction_ss_dLcR::synapse0x1716020() {
   return (neuron0x170c2b0()*-0.272056);
}

double NNfunction_ss_dLcR::synapse0x1716060() {
   return (neuron0x170c5f0()*0.351122);
}

double NNfunction_ss_dLcR::synapse0x17160a0() {
   return (neuron0x170c930()*-0.480835);
}

double NNfunction_ss_dLcR::synapse0x17160e0() {
   return (neuron0x170cc70()*-0.0455545);
}

double NNfunction_ss_dLcR::synapse0x1716120() {
   return (neuron0x170cfb0()*0.172873);
}

double NNfunction_ss_dLcR::synapse0x1716160() {
   return (neuron0x170d2f0()*-0.252541);
}

double NNfunction_ss_dLcR::synapse0x17161a0() {
   return (neuron0x170d630()*-0.489441);
}

double NNfunction_ss_dLcR::synapse0x171dab0() {
   return (neuron0x170d970()*0.0595566);
}

double NNfunction_ss_dLcR::synapse0x171daf0() {
   return (neuron0x170ded0()*0.66256);
}

double NNfunction_ss_dLcR::synapse0x17162f0() {
   return (neuron0x170e0f0()*-0.407278);
}

double NNfunction_ss_dLcR::synapse0x1716330() {
   return (neuron0x170e430()*-0.180014);
}

double NNfunction_ss_dLcR::synapse0x1716370() {
   return (neuron0x170e770()*0.0631135);
}

double NNfunction_ss_dLcR::synapse0x17163b0() {
   return (neuron0x170eab0()*0.150579);
}

double NNfunction_ss_dLcR::synapse0x17163f0() {
   return (neuron0x170edf0()*0.102246);
}

double NNfunction_ss_dLcR::synapse0x1716430() {
   return (neuron0x170f130()*0.0919104);
}

double NNfunction_ss_dLcR::synapse0x17167b0() {
   return (neuron0x170a570()*0.0464278);
}

double NNfunction_ss_dLcR::synapse0x17167f0() {
   return (neuron0x170a8b0()*-0.532073);
}

double NNfunction_ss_dLcR::synapse0x1716830() {
   return (neuron0x170abf0()*-0.571768);
}

double NNfunction_ss_dLcR::synapse0x1716870() {
   return (neuron0x170af30()*-0.0716377);
}

double NNfunction_ss_dLcR::synapse0x17168b0() {
   return (neuron0x170b270()*0.81374);
}

double NNfunction_ss_dLcR::synapse0x17168f0() {
   return (neuron0x170b5b0()*-1.1943);
}

double NNfunction_ss_dLcR::synapse0x1716930() {
   return (neuron0x170b8f0()*-0.162321);
}

double NNfunction_ss_dLcR::synapse0x1716970() {
   return (neuron0x170bc30()*0.570909);
}

double NNfunction_ss_dLcR::synapse0x17169b0() {
   return (neuron0x170bf70()*-1.47955);
}

double NNfunction_ss_dLcR::synapse0x17169f0() {
   return (neuron0x170c2b0()*-0.162398);
}

double NNfunction_ss_dLcR::synapse0x1716a30() {
   return (neuron0x170c5f0()*-0.965993);
}

double NNfunction_ss_dLcR::synapse0x1716a70() {
   return (neuron0x170c930()*-0.766859);
}

double NNfunction_ss_dLcR::synapse0x1716ab0() {
   return (neuron0x170cc70()*0.410479);
}

double NNfunction_ss_dLcR::synapse0x1716af0() {
   return (neuron0x170cfb0()*0.771766);
}

double NNfunction_ss_dLcR::synapse0x1716b30() {
   return (neuron0x170d2f0()*0.0379298);
}

double NNfunction_ss_dLcR::synapse0x1716b70() {
   return (neuron0x170d630()*0.424554);
}

double NNfunction_ss_dLcR::synapse0x1716600() {
   return (neuron0x170d970()*0.0913709);
}

double NNfunction_ss_dLcR::synapse0x1716640() {
   return (neuron0x170ded0()*0.480038);
}

double NNfunction_ss_dLcR::synapse0x1716cc0() {
   return (neuron0x170e0f0()*-0.486098);
}

double NNfunction_ss_dLcR::synapse0x1716d00() {
   return (neuron0x170e430()*0.66863);
}

double NNfunction_ss_dLcR::synapse0x1716d40() {
   return (neuron0x170e770()*-0.0108494);
}

double NNfunction_ss_dLcR::synapse0x1716d80() {
   return (neuron0x170eab0()*0.197905);
}

double NNfunction_ss_dLcR::synapse0x1716dc0() {
   return (neuron0x170edf0()*-0.79414);
}

double NNfunction_ss_dLcR::synapse0x1716e00() {
   return (neuron0x170f130()*-1.09042);
}

double NNfunction_ss_dLcR::synapse0x1716fd0() {
   return (neuron0x170a570()*0.11538);
}

double NNfunction_ss_dLcR::synapse0x1720060() {
   return (neuron0x170a8b0()*0.843343);
}

double NNfunction_ss_dLcR::synapse0x17200a0() {
   return (neuron0x170abf0()*-0.398389);
}

double NNfunction_ss_dLcR::synapse0x17200e0() {
   return (neuron0x170af30()*-0.800416);
}

double NNfunction_ss_dLcR::synapse0x1720120() {
   return (neuron0x170b270()*0.154426);
}

double NNfunction_ss_dLcR::synapse0x1720160() {
   return (neuron0x170b5b0()*0.347819);
}

double NNfunction_ss_dLcR::synapse0x17201a0() {
   return (neuron0x170b8f0()*-0.141224);
}

double NNfunction_ss_dLcR::synapse0x17201e0() {
   return (neuron0x170bc30()*-0.123813);
}

double NNfunction_ss_dLcR::synapse0x1720220() {
   return (neuron0x170bf70()*-0.079216);
}

double NNfunction_ss_dLcR::synapse0x1720260() {
   return (neuron0x170c2b0()*-0.455304);
}

double NNfunction_ss_dLcR::synapse0x17202a0() {
   return (neuron0x170c5f0()*-0.721182);
}

double NNfunction_ss_dLcR::synapse0x17202e0() {
   return (neuron0x170c930()*-0.285361);
}

double NNfunction_ss_dLcR::synapse0x1720320() {
   return (neuron0x170cc70()*-0.0720225);
}

double NNfunction_ss_dLcR::synapse0x1720360() {
   return (neuron0x170cfb0()*-1.10574);
}

double NNfunction_ss_dLcR::synapse0x17203a0() {
   return (neuron0x170d2f0()*0.138216);
}

double NNfunction_ss_dLcR::synapse0x17203e0() {
   return (neuron0x170d630()*0.515591);
}

double NNfunction_ss_dLcR::synapse0x171feb0() {
   return (neuron0x170d970()*-0.453074);
}

double NNfunction_ss_dLcR::synapse0x171fef0() {
   return (neuron0x170ded0()*-0.0581386);
}

double NNfunction_ss_dLcR::synapse0x1720530() {
   return (neuron0x170e0f0()*-0.249908);
}

double NNfunction_ss_dLcR::synapse0x1720570() {
   return (neuron0x170e430()*0.324605);
}

double NNfunction_ss_dLcR::synapse0x17205b0() {
   return (neuron0x170e770()*-0.260611);
}

double NNfunction_ss_dLcR::synapse0x17205f0() {
   return (neuron0x170eab0()*0.0293892);
}

double NNfunction_ss_dLcR::synapse0x1720630() {
   return (neuron0x170edf0()*-0.0219471);
}

double NNfunction_ss_dLcR::synapse0x1720670() {
   return (neuron0x170f130()*0.0151736);
}

double NNfunction_ss_dLcR::synapse0x17209f0() {
   return (neuron0x170a570()*0.89647);
}

double NNfunction_ss_dLcR::synapse0x1720a30() {
   return (neuron0x170a8b0()*1.06619);
}

double NNfunction_ss_dLcR::synapse0x1720a70() {
   return (neuron0x170abf0()*-0.440254);
}

double NNfunction_ss_dLcR::synapse0x1720ab0() {
   return (neuron0x170af30()*-0.794241);
}

double NNfunction_ss_dLcR::synapse0x1720af0() {
   return (neuron0x170b270()*-0.0446931);
}

double NNfunction_ss_dLcR::synapse0x1720b30() {
   return (neuron0x170b5b0()*1.76598);
}

double NNfunction_ss_dLcR::synapse0x1720b70() {
   return (neuron0x170b8f0()*0.640843);
}

double NNfunction_ss_dLcR::synapse0x1720bb0() {
   return (neuron0x170bc30()*-0.625422);
}

double NNfunction_ss_dLcR::synapse0x1720bf0() {
   return (neuron0x170bf70()*-0.278336);
}

double NNfunction_ss_dLcR::synapse0x1720c30() {
   return (neuron0x170c2b0()*0.588536);
}

double NNfunction_ss_dLcR::synapse0x1720c70() {
   return (neuron0x170c5f0()*0.195727);
}

double NNfunction_ss_dLcR::synapse0x1720cb0() {
   return (neuron0x170c930()*-0.742982);
}

double NNfunction_ss_dLcR::synapse0x1720cf0() {
   return (neuron0x170cc70()*0.596096);
}

double NNfunction_ss_dLcR::synapse0x1720d30() {
   return (neuron0x170cfb0()*-0.683208);
}

double NNfunction_ss_dLcR::synapse0x1720d70() {
   return (neuron0x170d2f0()*0.224865);
}

double NNfunction_ss_dLcR::synapse0x1720db0() {
   return (neuron0x170d630()*-0.311155);
}

double NNfunction_ss_dLcR::synapse0x1720840() {
   return (neuron0x170d970()*-1.23594);
}

double NNfunction_ss_dLcR::synapse0x1720880() {
   return (neuron0x170ded0()*-0.331278);
}

double NNfunction_ss_dLcR::synapse0x1720f00() {
   return (neuron0x170e0f0()*-0.110259);
}

double NNfunction_ss_dLcR::synapse0x1720f40() {
   return (neuron0x170e430()*-0.677316);
}

double NNfunction_ss_dLcR::synapse0x1720f80() {
   return (neuron0x170e770()*0.474436);
}

double NNfunction_ss_dLcR::synapse0x1720fc0() {
   return (neuron0x170eab0()*-0.353579);
}

double NNfunction_ss_dLcR::synapse0x1721000() {
   return (neuron0x170edf0()*-0.233317);
}

double NNfunction_ss_dLcR::synapse0x1721040() {
   return (neuron0x170f130()*-0.291241);
}

double NNfunction_ss_dLcR::synapse0x17213c0() {
   return (neuron0x170a570()*-0.24046);
}

double NNfunction_ss_dLcR::synapse0x1721400() {
   return (neuron0x170a8b0()*-1.00062);
}

double NNfunction_ss_dLcR::synapse0x1721440() {
   return (neuron0x170abf0()*-1.23336);
}

double NNfunction_ss_dLcR::synapse0x1721480() {
   return (neuron0x170af30()*-0.69365);
}

double NNfunction_ss_dLcR::synapse0x17214c0() {
   return (neuron0x170b270()*-0.024425);
}

double NNfunction_ss_dLcR::synapse0x1721500() {
   return (neuron0x170b5b0()*-0.746042);
}

double NNfunction_ss_dLcR::synapse0x1721540() {
   return (neuron0x170b8f0()*0.115414);
}

double NNfunction_ss_dLcR::synapse0x1721580() {
   return (neuron0x170bc30()*0.380143);
}

double NNfunction_ss_dLcR::synapse0x17215c0() {
   return (neuron0x170bf70()*-0.0883784);
}

double NNfunction_ss_dLcR::synapse0x1721600() {
   return (neuron0x170c2b0()*-0.568593);
}

double NNfunction_ss_dLcR::synapse0x1721640() {
   return (neuron0x170c5f0()*-0.387792);
}

double NNfunction_ss_dLcR::synapse0x1721680() {
   return (neuron0x170c930()*-0.751972);
}

double NNfunction_ss_dLcR::synapse0x17216c0() {
   return (neuron0x170cc70()*-0.690199);
}

double NNfunction_ss_dLcR::synapse0x1721700() {
   return (neuron0x170cfb0()*0.378077);
}

double NNfunction_ss_dLcR::synapse0x1721740() {
   return (neuron0x170d2f0()*0.462422);
}

double NNfunction_ss_dLcR::synapse0x1721780() {
   return (neuron0x170d630()*0.781837);
}

double NNfunction_ss_dLcR::synapse0x1721210() {
   return (neuron0x170d970()*0.418173);
}

double NNfunction_ss_dLcR::synapse0x1721250() {
   return (neuron0x170ded0()*0.108161);
}

double NNfunction_ss_dLcR::synapse0x17218d0() {
   return (neuron0x170e0f0()*0.128359);
}

double NNfunction_ss_dLcR::synapse0x1721910() {
   return (neuron0x170e430()*0.552914);
}

double NNfunction_ss_dLcR::synapse0x1721950() {
   return (neuron0x170e770()*0.30524);
}

double NNfunction_ss_dLcR::synapse0x1721990() {
   return (neuron0x170eab0()*-1.05267);
}

double NNfunction_ss_dLcR::synapse0x17219d0() {
   return (neuron0x170edf0()*-0.645827);
}

double NNfunction_ss_dLcR::synapse0x1721a10() {
   return (neuron0x170f130()*-0.488523);
}

double NNfunction_ss_dLcR::synapse0x1721d90() {
   return (neuron0x170a570()*-0.208503);
}

double NNfunction_ss_dLcR::synapse0x1721dd0() {
   return (neuron0x170a8b0()*0.347594);
}

double NNfunction_ss_dLcR::synapse0x1721e10() {
   return (neuron0x170abf0()*0.330085);
}

double NNfunction_ss_dLcR::synapse0x1721e50() {
   return (neuron0x170af30()*-0.747391);
}

double NNfunction_ss_dLcR::synapse0x1721e90() {
   return (neuron0x170b270()*0.153491);
}

double NNfunction_ss_dLcR::synapse0x1721ed0() {
   return (neuron0x170b5b0()*0.265202);
}

double NNfunction_ss_dLcR::synapse0x1721f10() {
   return (neuron0x170b8f0()*-0.24338);
}

double NNfunction_ss_dLcR::synapse0x1721f50() {
   return (neuron0x170bc30()*-0.339669);
}

double NNfunction_ss_dLcR::synapse0x1721f90() {
   return (neuron0x170bf70()*0.125055);
}

double NNfunction_ss_dLcR::synapse0x1721fd0() {
   return (neuron0x170c2b0()*0.300806);
}

double NNfunction_ss_dLcR::synapse0x1722010() {
   return (neuron0x170c5f0()*0.378695);
}

double NNfunction_ss_dLcR::synapse0x1722050() {
   return (neuron0x170c930()*0.388076);
}

double NNfunction_ss_dLcR::synapse0x1722090() {
   return (neuron0x170cc70()*0.165376);
}

double NNfunction_ss_dLcR::synapse0x17220d0() {
   return (neuron0x170cfb0()*0.473702);
}

double NNfunction_ss_dLcR::synapse0x1722110() {
   return (neuron0x170d2f0()*0.0160268);
}

double NNfunction_ss_dLcR::synapse0x1722150() {
   return (neuron0x170d630()*1.12662);
}

double NNfunction_ss_dLcR::synapse0x1721be0() {
   return (neuron0x170d970()*0.722339);
}

double NNfunction_ss_dLcR::synapse0x1721c20() {
   return (neuron0x170ded0()*-0.217622);
}

double NNfunction_ss_dLcR::synapse0x17222a0() {
   return (neuron0x170e0f0()*-0.846932);
}

double NNfunction_ss_dLcR::synapse0x17222e0() {
   return (neuron0x170e430()*0.335176);
}

double NNfunction_ss_dLcR::synapse0x1722320() {
   return (neuron0x170e770()*-0.211766);
}

double NNfunction_ss_dLcR::synapse0x1722360() {
   return (neuron0x170eab0()*-0.724874);
}

double NNfunction_ss_dLcR::synapse0x17223a0() {
   return (neuron0x170edf0()*-0.357415);
}

double NNfunction_ss_dLcR::synapse0x17223e0() {
   return (neuron0x170f130()*-0.27282);
}

double NNfunction_ss_dLcR::synapse0x1722760() {
   return (neuron0x170a570()*0.0174217);
}

double NNfunction_ss_dLcR::synapse0x17227a0() {
   return (neuron0x170a8b0()*-0.357621);
}

double NNfunction_ss_dLcR::synapse0x17227e0() {
   return (neuron0x170abf0()*0.98293);
}

double NNfunction_ss_dLcR::synapse0x1722820() {
   return (neuron0x170af30()*-0.15142);
}

double NNfunction_ss_dLcR::synapse0x1722860() {
   return (neuron0x170b270()*0.16642);
}

double NNfunction_ss_dLcR::synapse0x17228a0() {
   return (neuron0x170b5b0()*-0.194543);
}

double NNfunction_ss_dLcR::synapse0x17228e0() {
   return (neuron0x170b8f0()*0.221073);
}

double NNfunction_ss_dLcR::synapse0x1722920() {
   return (neuron0x170bc30()*0.440381);
}

double NNfunction_ss_dLcR::synapse0x1722960() {
   return (neuron0x170bf70()*-0.115058);
}

double NNfunction_ss_dLcR::synapse0x17229a0() {
   return (neuron0x170c2b0()*0.260833);
}

double NNfunction_ss_dLcR::synapse0x17229e0() {
   return (neuron0x170c5f0()*0.122506);
}

double NNfunction_ss_dLcR::synapse0x1722a20() {
   return (neuron0x170c930()*-0.389038);
}

double NNfunction_ss_dLcR::synapse0x1722a60() {
   return (neuron0x170cc70()*-0.113158);
}

double NNfunction_ss_dLcR::synapse0x1722aa0() {
   return (neuron0x170cfb0()*0.0729584);
}

double NNfunction_ss_dLcR::synapse0x1722ae0() {
   return (neuron0x170d2f0()*-0.880633);
}

double NNfunction_ss_dLcR::synapse0x1722b20() {
   return (neuron0x170d630()*0.0412238);
}

double NNfunction_ss_dLcR::synapse0x17225b0() {
   return (neuron0x170d970()*0.19647);
}

double NNfunction_ss_dLcR::synapse0x17225f0() {
   return (neuron0x170ded0()*-0.649494);
}

double NNfunction_ss_dLcR::synapse0x1722c70() {
   return (neuron0x170e0f0()*-0.588641);
}

double NNfunction_ss_dLcR::synapse0x1722cb0() {
   return (neuron0x170e430()*0.38314);
}

double NNfunction_ss_dLcR::synapse0x1722cf0() {
   return (neuron0x170e770()*-0.334685);
}

double NNfunction_ss_dLcR::synapse0x1722d30() {
   return (neuron0x170eab0()*0.0734866);
}

double NNfunction_ss_dLcR::synapse0x1722d70() {
   return (neuron0x170edf0()*-0.14752);
}

double NNfunction_ss_dLcR::synapse0x1722db0() {
   return (neuron0x170f130()*0.68849);
}

double NNfunction_ss_dLcR::synapse0x1723130() {
   return (neuron0x170a570()*0.628202);
}

double NNfunction_ss_dLcR::synapse0x1723170() {
   return (neuron0x170a8b0()*-0.388985);
}

double NNfunction_ss_dLcR::synapse0x17231b0() {
   return (neuron0x170abf0()*-0.341605);
}

double NNfunction_ss_dLcR::synapse0x17231f0() {
   return (neuron0x170af30()*-0.811032);
}

double NNfunction_ss_dLcR::synapse0x1723230() {
   return (neuron0x170b270()*-0.0602366);
}

double NNfunction_ss_dLcR::synapse0x1723270() {
   return (neuron0x170b5b0()*-1.10661);
}

double NNfunction_ss_dLcR::synapse0x17232b0() {
   return (neuron0x170b8f0()*0.0700569);
}

double NNfunction_ss_dLcR::synapse0x17232f0() {
   return (neuron0x170bc30()*-1.33304);
}

double NNfunction_ss_dLcR::synapse0x1723330() {
   return (neuron0x170bf70()*-1.3567);
}

double NNfunction_ss_dLcR::synapse0x1723370() {
   return (neuron0x170c2b0()*-0.527465);
}

double NNfunction_ss_dLcR::synapse0x17233b0() {
   return (neuron0x170c5f0()*-0.60046);
}

double NNfunction_ss_dLcR::synapse0x17233f0() {
   return (neuron0x170c930()*0.353611);
}

double NNfunction_ss_dLcR::synapse0x1723430() {
   return (neuron0x170cc70()*-0.755592);
}

double NNfunction_ss_dLcR::synapse0x1723470() {
   return (neuron0x170cfb0()*-0.052779);
}

double NNfunction_ss_dLcR::synapse0x17234b0() {
   return (neuron0x170d2f0()*-0.40191);
}

double NNfunction_ss_dLcR::synapse0x17234f0() {
   return (neuron0x170d630()*0.488182);
}

double NNfunction_ss_dLcR::synapse0x1722f80() {
   return (neuron0x170d970()*1.24747);
}

double NNfunction_ss_dLcR::synapse0x1722fc0() {
   return (neuron0x170ded0()*-1.05958);
}

double NNfunction_ss_dLcR::synapse0x1723640() {
   return (neuron0x170e0f0()*-0.582402);
}

double NNfunction_ss_dLcR::synapse0x1723680() {
   return (neuron0x170e430()*0.521068);
}

double NNfunction_ss_dLcR::synapse0x17236c0() {
   return (neuron0x170e770()*1.20537);
}

double NNfunction_ss_dLcR::synapse0x1723700() {
   return (neuron0x170eab0()*0.141111);
}

double NNfunction_ss_dLcR::synapse0x1723740() {
   return (neuron0x170edf0()*0.575041);
}

double NNfunction_ss_dLcR::synapse0x1723780() {
   return (neuron0x170f130()*0.233735);
}

double NNfunction_ss_dLcR::synapse0x1723b00() {
   return (neuron0x170a570()*-0.0209379);
}

double NNfunction_ss_dLcR::synapse0x1723b40() {
   return (neuron0x170a8b0()*-0.178373);
}

double NNfunction_ss_dLcR::synapse0x1723b80() {
   return (neuron0x170abf0()*-0.407087);
}

double NNfunction_ss_dLcR::synapse0x1723bc0() {
   return (neuron0x170af30()*-0.175834);
}

double NNfunction_ss_dLcR::synapse0x1723c00() {
   return (neuron0x170b270()*0.0148912);
}

double NNfunction_ss_dLcR::synapse0x1723c40() {
   return (neuron0x170b5b0()*-0.0891798);
}

double NNfunction_ss_dLcR::synapse0x1723c80() {
   return (neuron0x170b8f0()*0.0371642);
}

double NNfunction_ss_dLcR::synapse0x1723cc0() {
   return (neuron0x170bc30()*-0.0549505);
}

double NNfunction_ss_dLcR::synapse0x1723d00() {
   return (neuron0x170bf70()*0.0524834);
}

double NNfunction_ss_dLcR::synapse0x1723d40() {
   return (neuron0x170c2b0()*0.0595976);
}

double NNfunction_ss_dLcR::synapse0x1723d80() {
   return (neuron0x170c5f0()*0.0065201);
}

double NNfunction_ss_dLcR::synapse0x1723dc0() {
   return (neuron0x170c930()*-0.559858);
}

double NNfunction_ss_dLcR::synapse0x1723e00() {
   return (neuron0x170cc70()*1.18262);
}

double NNfunction_ss_dLcR::synapse0x1723e40() {
   return (neuron0x170cfb0()*-0.0630648);
}

double NNfunction_ss_dLcR::synapse0x1723e80() {
   return (neuron0x170d2f0()*-0.00761657);
}

double NNfunction_ss_dLcR::synapse0x1723ec0() {
   return (neuron0x170d630()*-0.439937);
}

double NNfunction_ss_dLcR::synapse0x1723950() {
   return (neuron0x170d970()*-0.0690725);
}

double NNfunction_ss_dLcR::synapse0x1723990() {
   return (neuron0x170ded0()*-0.198775);
}

double NNfunction_ss_dLcR::synapse0x1724010() {
   return (neuron0x170e0f0()*0.339667);
}

double NNfunction_ss_dLcR::synapse0x1724050() {
   return (neuron0x170e430()*-0.0175826);
}

double NNfunction_ss_dLcR::synapse0x1724090() {
   return (neuron0x170e770()*-0.106113);
}

double NNfunction_ss_dLcR::synapse0x17240d0() {
   return (neuron0x170eab0()*0.101255);
}

double NNfunction_ss_dLcR::synapse0x1724110() {
   return (neuron0x170edf0()*0.0194846);
}

double NNfunction_ss_dLcR::synapse0x1724150() {
   return (neuron0x170f130()*0.0538452);
}

double NNfunction_ss_dLcR::synapse0x17244d0() {
   return (neuron0x170a570()*-0.0206708);
}

double NNfunction_ss_dLcR::synapse0x1724510() {
   return (neuron0x170a8b0()*0.00261498);
}

double NNfunction_ss_dLcR::synapse0x1724550() {
   return (neuron0x170abf0()*0.0213324);
}

double NNfunction_ss_dLcR::synapse0x1724590() {
   return (neuron0x170af30()*6.12418);
}

double NNfunction_ss_dLcR::synapse0x17245d0() {
   return (neuron0x170b270()*-0.00222119);
}

double NNfunction_ss_dLcR::synapse0x1724610() {
   return (neuron0x170b5b0()*-0.00453313);
}

double NNfunction_ss_dLcR::synapse0x1724650() {
   return (neuron0x170b8f0()*0.000122085);
}

double NNfunction_ss_dLcR::synapse0x1724690() {
   return (neuron0x170bc30()*-0.00384513);
}

double NNfunction_ss_dLcR::synapse0x17246d0() {
   return (neuron0x170bf70()*0.00688164);
}

double NNfunction_ss_dLcR::synapse0x1724710() {
   return (neuron0x170c2b0()*-0.00209615);
}

double NNfunction_ss_dLcR::synapse0x1724750() {
   return (neuron0x170c5f0()*0.00064475);
}

double NNfunction_ss_dLcR::synapse0x1724790() {
   return (neuron0x170c930()*0.0208881);
}

double NNfunction_ss_dLcR::synapse0x17247d0() {
   return (neuron0x170cc70()*-0.00759136);
}

double NNfunction_ss_dLcR::synapse0x1724810() {
   return (neuron0x170cfb0()*-0.00221032);
}

double NNfunction_ss_dLcR::synapse0x1724850() {
   return (neuron0x170d2f0()*-0.00328655);
}

double NNfunction_ss_dLcR::synapse0x1724890() {
   return (neuron0x170d630()*-0.0522815);
}

double NNfunction_ss_dLcR::synapse0x1724320() {
   return (neuron0x170d970()*-0.00932058);
}

double NNfunction_ss_dLcR::synapse0x1724360() {
   return (neuron0x170ded0()*-0.0138124);
}

double NNfunction_ss_dLcR::synapse0x17249e0() {
   return (neuron0x170e0f0()*-0.0121619);
}

double NNfunction_ss_dLcR::synapse0x1724a20() {
   return (neuron0x170e430()*0.00714746);
}

double NNfunction_ss_dLcR::synapse0x1724a60() {
   return (neuron0x170e770()*0.00120065);
}

double NNfunction_ss_dLcR::synapse0x1724aa0() {
   return (neuron0x170eab0()*0.00387548);
}

double NNfunction_ss_dLcR::synapse0x1724ae0() {
   return (neuron0x170edf0()*-0.00930811);
}

double NNfunction_ss_dLcR::synapse0x1724b20() {
   return (neuron0x170f130()*0.0042418);
}

double NNfunction_ss_dLcR::synapse0x1724ea0() {
   return (neuron0x170a570()*-0.0658436);
}

double NNfunction_ss_dLcR::synapse0x1719470() {
   return (neuron0x170a8b0()*-0.00844746);
}

double NNfunction_ss_dLcR::synapse0x17194b0() {
   return (neuron0x170abf0()*-0.0937905);
}

double NNfunction_ss_dLcR::synapse0x17194f0() {
   return (neuron0x170af30()*0.00301885);
}

double NNfunction_ss_dLcR::synapse0x1719740() {
   return (neuron0x170b270()*-0.0322166);
}

double NNfunction_ss_dLcR::synapse0x1719780() {
   return (neuron0x170b5b0()*-0.197257);
}

double NNfunction_ss_dLcR::synapse0x17197c0() {
   return (neuron0x170b8f0()*-0.0542857);
}

double NNfunction_ss_dLcR::synapse0x1719a10() {
   return (neuron0x170bc30()*0.0239139);
}

double NNfunction_ss_dLcR::synapse0x1719a50() {
   return (neuron0x170bf70()*0.0505387);
}

double NNfunction_ss_dLcR::synapse0x1719ca0() {
   return (neuron0x170c2b0()*0.020164);
}

double NNfunction_ss_dLcR::synapse0x1719ce0() {
   return (neuron0x170c5f0()*0.0154605);
}

double NNfunction_ss_dLcR::synapse0x1719d20() {
   return (neuron0x170c930()*-0.345142);
}

double NNfunction_ss_dLcR::synapse0x1719f70() {
   return (neuron0x170cc70()*0.12844);
}

double NNfunction_ss_dLcR::synapse0x1719fb0() {
   return (neuron0x170cfb0()*0.0796204);
}

double NNfunction_ss_dLcR::synapse0x171a200() {
   return (neuron0x170d2f0()*0.0167198);
}

double NNfunction_ss_dLcR::synapse0x171a240() {
   return (neuron0x170d630()*1.59908);
}

double NNfunction_ss_dLcR::synapse0x1724cf0() {
   return (neuron0x170d970()*0.0621613);
}

double NNfunction_ss_dLcR::synapse0x1724d30() {
   return (neuron0x170ded0()*0.0219709);
}

double NNfunction_ss_dLcR::synapse0x171a390() {
   return (neuron0x170e0f0()*0.0883168);
}

double NNfunction_ss_dLcR::synapse0x171a8a0() {
   return (neuron0x170e430()*0.00158334);
}

double NNfunction_ss_dLcR::synapse0x171a8e0() {
   return (neuron0x170e770()*0.00362843);
}

double NNfunction_ss_dLcR::synapse0x171a920() {
   return (neuron0x170eab0()*-0.00740545);
}

double NNfunction_ss_dLcR::synapse0x171ab70() {
   return (neuron0x170edf0()*0.00751424);
}

double NNfunction_ss_dLcR::synapse0x171abb0() {
   return (neuron0x170f130()*0.0686095);
}

double NNfunction_ss_dLcR::synapse0x171a460() {
   return (neuron0x170a570()*0.126783);
}

double NNfunction_ss_dLcR::synapse0x171a4a0() {
   return (neuron0x170a8b0()*0.0601463);
}

double NNfunction_ss_dLcR::synapse0x171a4e0() {
   return (neuron0x170abf0()*-0.720922);
}

double NNfunction_ss_dLcR::synapse0x171a520() {
   return (neuron0x170af30()*0.725904);
}

double NNfunction_ss_dLcR::synapse0x171aea0() {
   return (neuron0x170b270()*-0.810834);
}

double NNfunction_ss_dLcR::synapse0x17271f0() {
   return (neuron0x170b5b0()*0.318014);
}

double NNfunction_ss_dLcR::synapse0x1727230() {
   return (neuron0x170b8f0()*-1.19767);
}

double NNfunction_ss_dLcR::synapse0x1727270() {
   return (neuron0x170bc30()*-0.743864);
}

double NNfunction_ss_dLcR::synapse0x17272b0() {
   return (neuron0x170bf70()*0.484871);
}

double NNfunction_ss_dLcR::synapse0x17272f0() {
   return (neuron0x170c2b0()*-0.0753227);
}

double NNfunction_ss_dLcR::synapse0x1727330() {
   return (neuron0x170c5f0()*0.15266);
}

double NNfunction_ss_dLcR::synapse0x1727370() {
   return (neuron0x170c930()*-0.434569);
}

double NNfunction_ss_dLcR::synapse0x17273b0() {
   return (neuron0x170cc70()*0.289165);
}

double NNfunction_ss_dLcR::synapse0x17273f0() {
   return (neuron0x170cfb0()*0.210681);
}

double NNfunction_ss_dLcR::synapse0x1727430() {
   return (neuron0x170d2f0()*-0.335635);
}

double NNfunction_ss_dLcR::synapse0x1727470() {
   return (neuron0x170d630()*1.041);
}

double NNfunction_ss_dLcR::synapse0x171ad80() {
   return (neuron0x170d970()*-0.305628);
}

double NNfunction_ss_dLcR::synapse0x171adc0() {
   return (neuron0x170ded0()*-0.276638);
}

double NNfunction_ss_dLcR::synapse0x17275c0() {
   return (neuron0x170e0f0()*0.160049);
}

double NNfunction_ss_dLcR::synapse0x1727600() {
   return (neuron0x170e430()*0.921837);
}

double NNfunction_ss_dLcR::synapse0x1727640() {
   return (neuron0x170e770()*0.197782);
}

double NNfunction_ss_dLcR::synapse0x1727680() {
   return (neuron0x170eab0()*-0.0901995);
}

double NNfunction_ss_dLcR::synapse0x17276c0() {
   return (neuron0x170edf0()*0.0522993);
}

double NNfunction_ss_dLcR::synapse0x1727700() {
   return (neuron0x170f130()*-0.528042);
}

double NNfunction_ss_dLcR::synapse0x1727a80() {
   return (neuron0x170a570()*0.0321593);
}

double NNfunction_ss_dLcR::synapse0x1727ac0() {
   return (neuron0x170a8b0()*0.0232142);
}

double NNfunction_ss_dLcR::synapse0x1727b00() {
   return (neuron0x170abf0()*-0.172741);
}

double NNfunction_ss_dLcR::synapse0x1727b40() {
   return (neuron0x170af30()*1.09382);
}

double NNfunction_ss_dLcR::synapse0x1727b80() {
   return (neuron0x170b270()*0.00496896);
}

double NNfunction_ss_dLcR::synapse0x1727bc0() {
   return (neuron0x170b5b0()*0.0896656);
}

double NNfunction_ss_dLcR::synapse0x1727c00() {
   return (neuron0x170b8f0()*-0.0269126);
}

double NNfunction_ss_dLcR::synapse0x1727c40() {
   return (neuron0x170bc30()*-0.0503716);
}

double NNfunction_ss_dLcR::synapse0x1727c80() {
   return (neuron0x170bf70()*-0.0351172);
}

double NNfunction_ss_dLcR::synapse0x1727cc0() {
   return (neuron0x170c2b0()*0.2306);
}

double NNfunction_ss_dLcR::synapse0x1727d00() {
   return (neuron0x170c5f0()*-0.163418);
}

double NNfunction_ss_dLcR::synapse0x1727d40() {
   return (neuron0x170c930()*-0.759064);
}

double NNfunction_ss_dLcR::synapse0x1727d80() {
   return (neuron0x170cc70()*-0.221522);
}

double NNfunction_ss_dLcR::synapse0x1727dc0() {
   return (neuron0x170cfb0()*0.0221345);
}

double NNfunction_ss_dLcR::synapse0x1727e00() {
   return (neuron0x170d2f0()*-0.0329991);
}

double NNfunction_ss_dLcR::synapse0x1727e40() {
   return (neuron0x170d630()*0.0586176);
}

double NNfunction_ss_dLcR::synapse0x17278d0() {
   return (neuron0x170d970()*0.193748);
}

double NNfunction_ss_dLcR::synapse0x1727910() {
   return (neuron0x170ded0()*-0.191915);
}

double NNfunction_ss_dLcR::synapse0x1727f90() {
   return (neuron0x170e0f0()*-0.0344216);
}

double NNfunction_ss_dLcR::synapse0x1727fd0() {
   return (neuron0x170e430()*0.0230683);
}

double NNfunction_ss_dLcR::synapse0x1728010() {
   return (neuron0x170e770()*-0.16414);
}

double NNfunction_ss_dLcR::synapse0x1728050() {
   return (neuron0x170eab0()*-0.0722446);
}

double NNfunction_ss_dLcR::synapse0x1728090() {
   return (neuron0x170edf0()*0.0220479);
}

double NNfunction_ss_dLcR::synapse0x17280d0() {
   return (neuron0x170f130()*0.0402052);
}

double NNfunction_ss_dLcR::synapse0x1728450() {
   return (neuron0x170a570()*-0.0369632);
}

double NNfunction_ss_dLcR::synapse0x1728490() {
   return (neuron0x170a8b0()*0.0126914);
}

double NNfunction_ss_dLcR::synapse0x17284d0() {
   return (neuron0x170abf0()*-0.0152411);
}

double NNfunction_ss_dLcR::synapse0x1728510() {
   return (neuron0x170af30()*-2.93624);
}

double NNfunction_ss_dLcR::synapse0x1728550() {
   return (neuron0x170b270()*-0.0172103);
}

double NNfunction_ss_dLcR::synapse0x1728590() {
   return (neuron0x170b5b0()*0.0368095);
}

double NNfunction_ss_dLcR::synapse0x17285d0() {
   return (neuron0x170b8f0()*0.0691075);
}

double NNfunction_ss_dLcR::synapse0x1728610() {
   return (neuron0x170bc30()*-0.0191466);
}

double NNfunction_ss_dLcR::synapse0x1728650() {
   return (neuron0x170bf70()*0.0317984);
}

double NNfunction_ss_dLcR::synapse0x1728690() {
   return (neuron0x170c2b0()*-0.0774864);
}

double NNfunction_ss_dLcR::synapse0x17286d0() {
   return (neuron0x170c5f0()*-0.00706908);
}

double NNfunction_ss_dLcR::synapse0x1728710() {
   return (neuron0x170c930()*0.220443);
}

double NNfunction_ss_dLcR::synapse0x1728750() {
   return (neuron0x170cc70()*0.0511531);
}

double NNfunction_ss_dLcR::synapse0x1728790() {
   return (neuron0x170cfb0()*0.0307623);
}

double NNfunction_ss_dLcR::synapse0x17287d0() {
   return (neuron0x170d2f0()*0.0618128);
}

double NNfunction_ss_dLcR::synapse0x1728810() {
   return (neuron0x170d630()*0.42959);
}

double NNfunction_ss_dLcR::synapse0x17282a0() {
   return (neuron0x170d970()*0.0259688);
}

double NNfunction_ss_dLcR::synapse0x17282e0() {
   return (neuron0x170ded0()*0.0239818);
}

double NNfunction_ss_dLcR::synapse0x1728960() {
   return (neuron0x170e0f0()*-0.0186278);
}

double NNfunction_ss_dLcR::synapse0x17289a0() {
   return (neuron0x170e430()*-0.0715933);
}

double NNfunction_ss_dLcR::synapse0x17289e0() {
   return (neuron0x170e770()*0.0136718);
}

double NNfunction_ss_dLcR::synapse0x1728a20() {
   return (neuron0x170eab0()*-0.0509397);
}

double NNfunction_ss_dLcR::synapse0x1728a60() {
   return (neuron0x170edf0()*-0.00585386);
}

double NNfunction_ss_dLcR::synapse0x1728aa0() {
   return (neuron0x170f130()*0.0508636);
}

double NNfunction_ss_dLcR::synapse0x1728e20() {
   return (neuron0x170a570()*0.00262232);
}

double NNfunction_ss_dLcR::synapse0x1728e60() {
   return (neuron0x170a8b0()*0.0101394);
}

double NNfunction_ss_dLcR::synapse0x1728ea0() {
   return (neuron0x170abf0()*0.016001);
}

double NNfunction_ss_dLcR::synapse0x1728ee0() {
   return (neuron0x170af30()*-8.15524);
}

double NNfunction_ss_dLcR::synapse0x1728f20() {
   return (neuron0x170b270()*0.009452);
}

double NNfunction_ss_dLcR::synapse0x1728f60() {
   return (neuron0x170b5b0()*0.0225659);
}

double NNfunction_ss_dLcR::synapse0x1728fa0() {
   return (neuron0x170b8f0()*0.00663522);
}

double NNfunction_ss_dLcR::synapse0x1728fe0() {
   return (neuron0x170bc30()*-0.00815892);
}

double NNfunction_ss_dLcR::synapse0x1729020() {
   return (neuron0x170bf70()*0.0422604);
}

double NNfunction_ss_dLcR::synapse0x1729060() {
   return (neuron0x170c2b0()*0.001973);
}

double NNfunction_ss_dLcR::synapse0x17290a0() {
   return (neuron0x170c5f0()*0.00507039);
}

double NNfunction_ss_dLcR::synapse0x17290e0() {
   return (neuron0x170c930()*0.0595056);
}

double NNfunction_ss_dLcR::synapse0x1729120() {
   return (neuron0x170cc70()*-0.0233737);
}

double NNfunction_ss_dLcR::synapse0x1729160() {
   return (neuron0x170cfb0()*0.00628991);
}

double NNfunction_ss_dLcR::synapse0x17291a0() {
   return (neuron0x170d2f0()*0.00435484);
}

double NNfunction_ss_dLcR::synapse0x17291e0() {
   return (neuron0x170d630()*0.0216011);
}

double NNfunction_ss_dLcR::synapse0x1728c70() {
   return (neuron0x170d970()*-0.0110321);
}

double NNfunction_ss_dLcR::synapse0x1728cb0() {
   return (neuron0x170ded0()*-0.00778883);
}

double NNfunction_ss_dLcR::synapse0x1729330() {
   return (neuron0x170e0f0()*-0.0221877);
}

double NNfunction_ss_dLcR::synapse0x1729370() {
   return (neuron0x170e430()*-0.00042336);
}

double NNfunction_ss_dLcR::synapse0x17293b0() {
   return (neuron0x170e770()*0.0236666);
}

double NNfunction_ss_dLcR::synapse0x17293f0() {
   return (neuron0x170eab0()*0.0044136);
}

double NNfunction_ss_dLcR::synapse0x1729430() {
   return (neuron0x170edf0()*-0.000755863);
}

double NNfunction_ss_dLcR::synapse0x1729470() {
   return (neuron0x170f130()*-0.00147326);
}

double NNfunction_ss_dLcR::synapse0x17297f0() {
   return (neuron0x170a570()*-0.0328632);
}

double NNfunction_ss_dLcR::synapse0x1729830() {
   return (neuron0x170a8b0()*-0.797287);
}

double NNfunction_ss_dLcR::synapse0x1729870() {
   return (neuron0x170abf0()*-0.0730808);
}

double NNfunction_ss_dLcR::synapse0x17298b0() {
   return (neuron0x170af30()*-1.55768);
}

double NNfunction_ss_dLcR::synapse0x17298f0() {
   return (neuron0x170b270()*0.078176);
}

double NNfunction_ss_dLcR::synapse0x1729930() {
   return (neuron0x170b5b0()*-0.0706486);
}

double NNfunction_ss_dLcR::synapse0x1729970() {
   return (neuron0x170b8f0()*0.0803145);
}

double NNfunction_ss_dLcR::synapse0x17299b0() {
   return (neuron0x170bc30()*-0.0101624);
}

double NNfunction_ss_dLcR::synapse0x17299f0() {
   return (neuron0x170bf70()*0.0214885);
}

double NNfunction_ss_dLcR::synapse0x1729a30() {
   return (neuron0x170c2b0()*-0.131789);
}

double NNfunction_ss_dLcR::synapse0x1729a70() {
   return (neuron0x170c5f0()*-0.246564);
}

double NNfunction_ss_dLcR::synapse0x1729ab0() {
   return (neuron0x170c930()*0.306535);
}

double NNfunction_ss_dLcR::synapse0x1729af0() {
   return (neuron0x170cc70()*-0.29071);
}

double NNfunction_ss_dLcR::synapse0x1729b30() {
   return (neuron0x170cfb0()*0.0178193);
}

double NNfunction_ss_dLcR::synapse0x1729b70() {
   return (neuron0x170d2f0()*-0.127079);
}

double NNfunction_ss_dLcR::synapse0x1729bb0() {
   return (neuron0x170d630()*0.468238);
}

double NNfunction_ss_dLcR::synapse0x1729640() {
   return (neuron0x170d970()*0.0667496);
}

double NNfunction_ss_dLcR::synapse0x1729680() {
   return (neuron0x170ded0()*-0.188343);
}

double NNfunction_ss_dLcR::synapse0x1729d00() {
   return (neuron0x170e0f0()*-0.289803);
}

double NNfunction_ss_dLcR::synapse0x1729d40() {
   return (neuron0x170e430()*0.00940323);
}

double NNfunction_ss_dLcR::synapse0x1729d80() {
   return (neuron0x170e770()*-0.0342383);
}

double NNfunction_ss_dLcR::synapse0x1729dc0() {
   return (neuron0x170eab0()*0.0677537);
}

double NNfunction_ss_dLcR::synapse0x1729e00() {
   return (neuron0x170edf0()*0.0073319);
}

double NNfunction_ss_dLcR::synapse0x1729e40() {
   return (neuron0x170f130()*-0.0388083);
}

double NNfunction_ss_dLcR::synapse0x172a1c0() {
   return (neuron0x170a570()*0.0413155);
}

double NNfunction_ss_dLcR::synapse0x172a200() {
   return (neuron0x170a8b0()*0.0984925);
}

double NNfunction_ss_dLcR::synapse0x172a240() {
   return (neuron0x170abf0()*-0.292581);
}

double NNfunction_ss_dLcR::synapse0x172a280() {
   return (neuron0x170af30()*0.680816);
}

double NNfunction_ss_dLcR::synapse0x172a2c0() {
   return (neuron0x170b270()*0.0347227);
}

double NNfunction_ss_dLcR::synapse0x172a300() {
   return (neuron0x170b5b0()*0.0305129);
}

double NNfunction_ss_dLcR::synapse0x172a340() {
   return (neuron0x170b8f0()*0.0141511);
}

double NNfunction_ss_dLcR::synapse0x172a380() {
   return (neuron0x170bc30()*0.0101481);
}

double NNfunction_ss_dLcR::synapse0x172a3c0() {
   return (neuron0x170bf70()*-0.0793781);
}

double NNfunction_ss_dLcR::synapse0x172a400() {
   return (neuron0x170c2b0()*-0.0177252);
}

double NNfunction_ss_dLcR::synapse0x172a440() {
   return (neuron0x170c5f0()*-0.0204727);
}

double NNfunction_ss_dLcR::synapse0x172a480() {
   return (neuron0x170c930()*0.0726122);
}

double NNfunction_ss_dLcR::synapse0x172a4c0() {
   return (neuron0x170cc70()*-0.241966);
}

double NNfunction_ss_dLcR::synapse0x172a500() {
   return (neuron0x170cfb0()*0.126097);
}

double NNfunction_ss_dLcR::synapse0x172a540() {
   return (neuron0x170d2f0()*-0.0928158);
}

double NNfunction_ss_dLcR::synapse0x172a580() {
   return (neuron0x170d630()*0.0635756);
}

double NNfunction_ss_dLcR::synapse0x172a010() {
   return (neuron0x170d970()*0.153267);
}

double NNfunction_ss_dLcR::synapse0x172a050() {
   return (neuron0x170ded0()*-0.331708);
}

double NNfunction_ss_dLcR::synapse0x172a6d0() {
   return (neuron0x170e0f0()*-0.0859515);
}

double NNfunction_ss_dLcR::synapse0x172a710() {
   return (neuron0x170e430()*-0.0135035);
}

double NNfunction_ss_dLcR::synapse0x172a750() {
   return (neuron0x170e770()*0.0485647);
}

double NNfunction_ss_dLcR::synapse0x172a790() {
   return (neuron0x170eab0()*0.0268347);
}

double NNfunction_ss_dLcR::synapse0x172a7d0() {
   return (neuron0x170edf0()*0.00955112);
}

double NNfunction_ss_dLcR::synapse0x172a810() {
   return (neuron0x170f130()*-0.0350755);
}

double NNfunction_ss_dLcR::synapse0x172ab90() {
   return (neuron0x170a570()*-0.143371);
}

double NNfunction_ss_dLcR::synapse0x172abd0() {
   return (neuron0x170a8b0()*0.408011);
}

double NNfunction_ss_dLcR::synapse0x172ac10() {
   return (neuron0x170abf0()*0.409918);
}

double NNfunction_ss_dLcR::synapse0x172ac50() {
   return (neuron0x170af30()*0.66198);
}

double NNfunction_ss_dLcR::synapse0x172ac90() {
   return (neuron0x170b270()*0.457874);
}

double NNfunction_ss_dLcR::synapse0x172acd0() {
   return (neuron0x170b5b0()*0.71441);
}

double NNfunction_ss_dLcR::synapse0x172ad10() {
   return (neuron0x170b8f0()*0.0437928);
}

double NNfunction_ss_dLcR::synapse0x172ad50() {
   return (neuron0x170bc30()*0.31841);
}

double NNfunction_ss_dLcR::synapse0x172ad90() {
   return (neuron0x170bf70()*0.296093);
}

double NNfunction_ss_dLcR::synapse0x172add0() {
   return (neuron0x170c2b0()*0.186256);
}

double NNfunction_ss_dLcR::synapse0x172ae10() {
   return (neuron0x170c5f0()*-0.336778);
}

double NNfunction_ss_dLcR::synapse0x172ae50() {
   return (neuron0x170c930()*-1.33511);
}

double NNfunction_ss_dLcR::synapse0x172ae90() {
   return (neuron0x170cc70()*0.775017);
}

double NNfunction_ss_dLcR::synapse0x172aed0() {
   return (neuron0x170cfb0()*-0.0654784);
}

double NNfunction_ss_dLcR::synapse0x172af10() {
   return (neuron0x170d2f0()*-0.392325);
}

double NNfunction_ss_dLcR::synapse0x172af50() {
   return (neuron0x170d630()*0.242703);
}

double NNfunction_ss_dLcR::synapse0x172a9e0() {
   return (neuron0x170d970()*0.647444);
}

double NNfunction_ss_dLcR::synapse0x172aa20() {
   return (neuron0x170ded0()*0.613277);
}

double NNfunction_ss_dLcR::synapse0x172b0a0() {
   return (neuron0x170e0f0()*-0.17545);
}

double NNfunction_ss_dLcR::synapse0x172b0e0() {
   return (neuron0x170e430()*0.310307);
}

double NNfunction_ss_dLcR::synapse0x172b120() {
   return (neuron0x170e770()*1.30181);
}

double NNfunction_ss_dLcR::synapse0x172b160() {
   return (neuron0x170eab0()*-0.24112);
}

double NNfunction_ss_dLcR::synapse0x172b1a0() {
   return (neuron0x170edf0()*0.231288);
}

double NNfunction_ss_dLcR::synapse0x172b1e0() {
   return (neuron0x170f130()*0.0462615);
}

double NNfunction_ss_dLcR::synapse0x172b560() {
   return (neuron0x170a570()*-0.686491);
}

double NNfunction_ss_dLcR::synapse0x172b5a0() {
   return (neuron0x170a8b0()*0.2015);
}

double NNfunction_ss_dLcR::synapse0x172b5e0() {
   return (neuron0x170abf0()*-0.0806799);
}

double NNfunction_ss_dLcR::synapse0x172b620() {
   return (neuron0x170af30()*0.0873915);
}

double NNfunction_ss_dLcR::synapse0x172b660() {
   return (neuron0x170b270()*-0.336668);
}

double NNfunction_ss_dLcR::synapse0x172b6a0() {
   return (neuron0x170b5b0()*-0.338254);
}

double NNfunction_ss_dLcR::synapse0x172b6e0() {
   return (neuron0x170b8f0()*0.122411);
}

double NNfunction_ss_dLcR::synapse0x172b720() {
   return (neuron0x170bc30()*-0.798437);
}

double NNfunction_ss_dLcR::synapse0x172b760() {
   return (neuron0x170bf70()*-0.0722014);
}

double NNfunction_ss_dLcR::synapse0x172b7a0() {
   return (neuron0x170c2b0()*0.311048);
}

double NNfunction_ss_dLcR::synapse0x172b7e0() {
   return (neuron0x170c5f0()*1.21326);
}

double NNfunction_ss_dLcR::synapse0x172b820() {
   return (neuron0x170c930()*-0.666196);
}

double NNfunction_ss_dLcR::synapse0x172b860() {
   return (neuron0x170cc70()*-0.784817);
}

double NNfunction_ss_dLcR::synapse0x172b8a0() {
   return (neuron0x170cfb0()*0.761342);
}

double NNfunction_ss_dLcR::synapse0x172b8e0() {
   return (neuron0x170d2f0()*-0.241047);
}

double NNfunction_ss_dLcR::synapse0x172b920() {
   return (neuron0x170d630()*0.873885);
}

double NNfunction_ss_dLcR::synapse0x172b3b0() {
   return (neuron0x170d970()*1.326);
}

double NNfunction_ss_dLcR::synapse0x172b3f0() {
   return (neuron0x170ded0()*-0.292635);
}

double NNfunction_ss_dLcR::synapse0x172ba70() {
   return (neuron0x170e0f0()*0.457684);
}

double NNfunction_ss_dLcR::synapse0x172bab0() {
   return (neuron0x170e430()*-0.146229);
}

double NNfunction_ss_dLcR::synapse0x172baf0() {
   return (neuron0x170e770()*0.140161);
}

double NNfunction_ss_dLcR::synapse0x172bb30() {
   return (neuron0x170eab0()*0.447216);
}

double NNfunction_ss_dLcR::synapse0x172bb70() {
   return (neuron0x170edf0()*0.0955916);
}

double NNfunction_ss_dLcR::synapse0x172bbb0() {
   return (neuron0x170f130()*-0.141159);
}

double NNfunction_ss_dLcR::synapse0x1714660() {
   return (neuron0x170a570()*0.203681);
}

double NNfunction_ss_dLcR::synapse0x17146a0() {
   return (neuron0x170a8b0()*-0.0251796);
}

double NNfunction_ss_dLcR::synapse0x17146e0() {
   return (neuron0x170abf0()*0.31755);
}

double NNfunction_ss_dLcR::synapse0x1714720() {
   return (neuron0x170af30()*0.110756);
}

double NNfunction_ss_dLcR::synapse0x1714760() {
   return (neuron0x170b270()*-0.0990335);
}

double NNfunction_ss_dLcR::synapse0x17147a0() {
   return (neuron0x170b5b0()*0.031704);
}

double NNfunction_ss_dLcR::synapse0x17147e0() {
   return (neuron0x170b8f0()*0.130531);
}

double NNfunction_ss_dLcR::synapse0x1714820() {
   return (neuron0x170bc30()*-0.096519);
}

double NNfunction_ss_dLcR::synapse0x172c340() {
   return (neuron0x170bf70()*0.303363);
}

double NNfunction_ss_dLcR::synapse0x172c380() {
   return (neuron0x170c2b0()*-0.319304);
}

double NNfunction_ss_dLcR::synapse0x172c3c0() {
   return (neuron0x170c5f0()*-0.389055);
}

double NNfunction_ss_dLcR::synapse0x172c400() {
   return (neuron0x170c930()*-0.348814);
}

double NNfunction_ss_dLcR::synapse0x172c440() {
   return (neuron0x170cc70()*-0.380571);
}

double NNfunction_ss_dLcR::synapse0x172c480() {
   return (neuron0x170cfb0()*-0.520785);
}

double NNfunction_ss_dLcR::synapse0x172c4c0() {
   return (neuron0x170d2f0()*-0.330917);
}

double NNfunction_ss_dLcR::synapse0x172c500() {
   return (neuron0x170d630()*0.0623099);
}

double NNfunction_ss_dLcR::synapse0x172bd80() {
   return (neuron0x170d970()*0.0324575);
}

double NNfunction_ss_dLcR::synapse0x172bdc0() {
   return (neuron0x170ded0()*0.298493);
}

double NNfunction_ss_dLcR::synapse0x172c650() {
   return (neuron0x170e0f0()*-0.726872);
}

double NNfunction_ss_dLcR::synapse0x172c690() {
   return (neuron0x170e430()*0.499695);
}

double NNfunction_ss_dLcR::synapse0x172c6d0() {
   return (neuron0x170e770()*-0.0601317);
}

double NNfunction_ss_dLcR::synapse0x172c710() {
   return (neuron0x170eab0()*0.899723);
}

double NNfunction_ss_dLcR::synapse0x172c750() {
   return (neuron0x170edf0()*-0.304403);
}

double NNfunction_ss_dLcR::synapse0x172c790() {
   return (neuron0x170f130()*0.0369858);
}

double NNfunction_ss_dLcR::synapse0x172cb10() {
   return (neuron0x170a570()*0.0248288);
}

double NNfunction_ss_dLcR::synapse0x172cb50() {
   return (neuron0x170a8b0()*-0.00465933);
}

double NNfunction_ss_dLcR::synapse0x172cb90() {
   return (neuron0x170abf0()*-0.0262863);
}

double NNfunction_ss_dLcR::synapse0x172cbd0() {
   return (neuron0x170af30()*0.30057);
}

double NNfunction_ss_dLcR::synapse0x172cc10() {
   return (neuron0x170b270()*0.00511503);
}

double NNfunction_ss_dLcR::synapse0x172cc50() {
   return (neuron0x170b5b0()*-0.0116232);
}

double NNfunction_ss_dLcR::synapse0x172cc90() {
   return (neuron0x170b8f0()*0.0080419);
}

double NNfunction_ss_dLcR::synapse0x172ccd0() {
   return (neuron0x170bc30()*0.0162298);
}

double NNfunction_ss_dLcR::synapse0x172cd10() {
   return (neuron0x170bf70()*-0.0561764);
}

double NNfunction_ss_dLcR::synapse0x172cd50() {
   return (neuron0x170c2b0()*0.00234474);
}

double NNfunction_ss_dLcR::synapse0x172cd90() {
   return (neuron0x170c5f0()*0.00463401);
}

double NNfunction_ss_dLcR::synapse0x172cdd0() {
   return (neuron0x170c930()*1.63113);
}

double NNfunction_ss_dLcR::synapse0x172ce10() {
   return (neuron0x170cc70()*0.0167598);
}

double NNfunction_ss_dLcR::synapse0x172ce50() {
   return (neuron0x170cfb0()*0.0723064);
}

double NNfunction_ss_dLcR::synapse0x172ce90() {
   return (neuron0x170d2f0()*-0.0015384);
}

double NNfunction_ss_dLcR::synapse0x172ced0() {
   return (neuron0x170d630()*-0.203145);
}

double NNfunction_ss_dLcR::synapse0x172c960() {
   return (neuron0x170d970()*0.0613324);
}

double NNfunction_ss_dLcR::synapse0x172c9a0() {
   return (neuron0x170ded0()*-0.0343689);
}

double NNfunction_ss_dLcR::synapse0x172d020() {
   return (neuron0x170e0f0()*-0.00037791);
}

double NNfunction_ss_dLcR::synapse0x172d060() {
   return (neuron0x170e430()*-0.0275863);
}

double NNfunction_ss_dLcR::synapse0x172d0a0() {
   return (neuron0x170e770()*-0.0136092);
}

double NNfunction_ss_dLcR::synapse0x172d0e0() {
   return (neuron0x170eab0()*0.00493129);
}

double NNfunction_ss_dLcR::synapse0x172d120() {
   return (neuron0x170edf0()*0.00479148);
}

double NNfunction_ss_dLcR::synapse0x172d160() {
   return (neuron0x170f130()*0.0131529);
}

double NNfunction_ss_dLcR::synapse0x172d4e0() {
   return (neuron0x170a570()*0.924215);
}

double NNfunction_ss_dLcR::synapse0x172d520() {
   return (neuron0x170a8b0()*-0.0945503);
}

double NNfunction_ss_dLcR::synapse0x172d560() {
   return (neuron0x170abf0()*0.811383);
}

double NNfunction_ss_dLcR::synapse0x172d5a0() {
   return (neuron0x170af30()*-0.197015);
}

double NNfunction_ss_dLcR::synapse0x172d5e0() {
   return (neuron0x170b270()*-0.296519);
}

double NNfunction_ss_dLcR::synapse0x172d620() {
   return (neuron0x170b5b0()*-0.142406);
}

double NNfunction_ss_dLcR::synapse0x172d660() {
   return (neuron0x170b8f0()*1.13413);
}

double NNfunction_ss_dLcR::synapse0x172d6a0() {
   return (neuron0x170bc30()*-0.350386);
}

double NNfunction_ss_dLcR::synapse0x172d6e0() {
   return (neuron0x170bf70()*-0.589758);
}

double NNfunction_ss_dLcR::synapse0x172d720() {
   return (neuron0x170c2b0()*0.236908);
}

double NNfunction_ss_dLcR::synapse0x172d760() {
   return (neuron0x170c5f0()*0.13996);
}

double NNfunction_ss_dLcR::synapse0x172d7a0() {
   return (neuron0x170c930()*-0.571107);
}

double NNfunction_ss_dLcR::synapse0x172d7e0() {
   return (neuron0x170cc70()*0.641135);
}

double NNfunction_ss_dLcR::synapse0x172d820() {
   return (neuron0x170cfb0()*0.80295);
}

double NNfunction_ss_dLcR::synapse0x172d860() {
   return (neuron0x170d2f0()*0.121571);
}

double NNfunction_ss_dLcR::synapse0x172d8a0() {
   return (neuron0x170d630()*0.796904);
}

double NNfunction_ss_dLcR::synapse0x172d330() {
   return (neuron0x170d970()*-1.10787);
}

double NNfunction_ss_dLcR::synapse0x172d370() {
   return (neuron0x170ded0()*-1.35659);
}

double NNfunction_ss_dLcR::synapse0x171dea0() {
   return (neuron0x170e0f0()*0.831169);
}

double NNfunction_ss_dLcR::synapse0x171dee0() {
   return (neuron0x170e430()*-0.63547);
}

double NNfunction_ss_dLcR::synapse0x171df20() {
   return (neuron0x170e770()*1.09068);
}

double NNfunction_ss_dLcR::synapse0x171df60() {
   return (neuron0x170eab0()*0.605611);
}

double NNfunction_ss_dLcR::synapse0x171dfa0() {
   return (neuron0x170edf0()*-0.717451);
}

double NNfunction_ss_dLcR::synapse0x171dfe0() {
   return (neuron0x170f130()*-0.411081);
}

double NNfunction_ss_dLcR::synapse0x171e360() {
   return (neuron0x170a570()*-0.749945);
}

double NNfunction_ss_dLcR::synapse0x171e3a0() {
   return (neuron0x170a8b0()*-0.122915);
}

double NNfunction_ss_dLcR::synapse0x171e3e0() {
   return (neuron0x170abf0()*-0.10105);
}

double NNfunction_ss_dLcR::synapse0x171e420() {
   return (neuron0x170af30()*1.59574);
}

double NNfunction_ss_dLcR::synapse0x171e460() {
   return (neuron0x170b270()*0.254803);
}

double NNfunction_ss_dLcR::synapse0x171e4a0() {
   return (neuron0x170b5b0()*-0.00489134);
}

double NNfunction_ss_dLcR::synapse0x171e4e0() {
   return (neuron0x170b8f0()*-0.645808);
}

double NNfunction_ss_dLcR::synapse0x171e520() {
   return (neuron0x170bc30()*0.118489);
}

double NNfunction_ss_dLcR::synapse0x171e560() {
   return (neuron0x170bf70()*-0.519261);
}

double NNfunction_ss_dLcR::synapse0x171e5a0() {
   return (neuron0x170c2b0()*0.718899);
}

double NNfunction_ss_dLcR::synapse0x171e5e0() {
   return (neuron0x170c5f0()*0.125219);
}

double NNfunction_ss_dLcR::synapse0x171e620() {
   return (neuron0x170c930()*-0.764);
}

double NNfunction_ss_dLcR::synapse0x171e660() {
   return (neuron0x170cc70()*0.412724);
}

double NNfunction_ss_dLcR::synapse0x171e6a0() {
   return (neuron0x170cfb0()*-0.169786);
}

double NNfunction_ss_dLcR::synapse0x171e6e0() {
   return (neuron0x170d2f0()*-0.0831661);
}

double NNfunction_ss_dLcR::synapse0x171e720() {
   return (neuron0x170d630()*0.170854);
}

double NNfunction_ss_dLcR::synapse0x171e1b0() {
   return (neuron0x170d970()*-0.202287);
}

double NNfunction_ss_dLcR::synapse0x171e1f0() {
   return (neuron0x170ded0()*-0.446828);
}

double NNfunction_ss_dLcR::synapse0x171e870() {
   return (neuron0x170e0f0()*-0.695085);
}

double NNfunction_ss_dLcR::synapse0x171e8b0() {
   return (neuron0x170e430()*-0.849232);
}

double NNfunction_ss_dLcR::synapse0x171e8f0() {
   return (neuron0x170e770()*-0.396799);
}

double NNfunction_ss_dLcR::synapse0x171e930() {
   return (neuron0x170eab0()*-0.844351);
}

double NNfunction_ss_dLcR::synapse0x171e970() {
   return (neuron0x170edf0()*0.0110479);
}

double NNfunction_ss_dLcR::synapse0x171e9b0() {
   return (neuron0x170f130()*-0.847329);
}

double NNfunction_ss_dLcR::synapse0x171ed30() {
   return (neuron0x170a570()*0.107312);
}

double NNfunction_ss_dLcR::synapse0x171ed70() {
   return (neuron0x170a8b0()*-0.0574584);
}

double NNfunction_ss_dLcR::synapse0x171edb0() {
   return (neuron0x170abf0()*-0.43699);
}

double NNfunction_ss_dLcR::synapse0x171edf0() {
   return (neuron0x170af30()*0.00419317);
}

double NNfunction_ss_dLcR::synapse0x171ee30() {
   return (neuron0x170b270()*0.0664326);
}

double NNfunction_ss_dLcR::synapse0x171ee70() {
   return (neuron0x170b5b0()*-0.270244);
}

double NNfunction_ss_dLcR::synapse0x171eeb0() {
   return (neuron0x170b8f0()*-0.140673);
}

double NNfunction_ss_dLcR::synapse0x171eef0() {
   return (neuron0x170bc30()*-0.00294425);
}

double NNfunction_ss_dLcR::synapse0x171ef30() {
   return (neuron0x170bf70()*-0.00224837);
}

double NNfunction_ss_dLcR::synapse0x171ef70() {
   return (neuron0x170c2b0()*0.0971785);
}

double NNfunction_ss_dLcR::synapse0x171efb0() {
   return (neuron0x170c5f0()*0.147727);
}

double NNfunction_ss_dLcR::synapse0x171eff0() {
   return (neuron0x170c930()*-1.71315);
}

double NNfunction_ss_dLcR::synapse0x171f030() {
   return (neuron0x170cc70()*0.143894);
}

double NNfunction_ss_dLcR::synapse0x171f070() {
   return (neuron0x170cfb0()*0.109247);
}

double NNfunction_ss_dLcR::synapse0x171f0b0() {
   return (neuron0x170d2f0()*-0.229847);
}

double NNfunction_ss_dLcR::synapse0x171f0f0() {
   return (neuron0x170d630()*-1.34767);
}

double NNfunction_ss_dLcR::synapse0x171eb80() {
   return (neuron0x170d970()*-0.00224694);
}

double NNfunction_ss_dLcR::synapse0x171ebc0() {
   return (neuron0x170ded0()*0.13408);
}

double NNfunction_ss_dLcR::synapse0x171f240() {
   return (neuron0x170e0f0()*0.0802321);
}

double NNfunction_ss_dLcR::synapse0x171f280() {
   return (neuron0x170e430()*-0.189112);
}

double NNfunction_ss_dLcR::synapse0x171f2c0() {
   return (neuron0x170e770()*-0.00338434);
}

double NNfunction_ss_dLcR::synapse0x171f300() {
   return (neuron0x170eab0()*0.10398);
}

double NNfunction_ss_dLcR::synapse0x171f340() {
   return (neuron0x170edf0()*0.12092);
}

double NNfunction_ss_dLcR::synapse0x171f380() {
   return (neuron0x170f130()*0.00875137);
}

double NNfunction_ss_dLcR::synapse0x171f700() {
   return (neuron0x170a570()*0.00339209);
}

double NNfunction_ss_dLcR::synapse0x171f740() {
   return (neuron0x170a8b0()*0.00704153);
}

double NNfunction_ss_dLcR::synapse0x171f780() {
   return (neuron0x170abf0()*-0.012332);
}

double NNfunction_ss_dLcR::synapse0x171f7c0() {
   return (neuron0x170af30()*2.51183);
}

double NNfunction_ss_dLcR::synapse0x171f800() {
   return (neuron0x170b270()*-0.00624514);
}

double NNfunction_ss_dLcR::synapse0x171f840() {
   return (neuron0x170b5b0()*0.0151722);
}

double NNfunction_ss_dLcR::synapse0x171f880() {
   return (neuron0x170b8f0()*0.00964599);
}

double NNfunction_ss_dLcR::synapse0x171f8c0() {
   return (neuron0x170bc30()*0.00348322);
}

double NNfunction_ss_dLcR::synapse0x171f900() {
   return (neuron0x170bf70()*0.00380326);
}

double NNfunction_ss_dLcR::synapse0x171f940() {
   return (neuron0x170c2b0()*-0.00150082);
}

double NNfunction_ss_dLcR::synapse0x171f980() {
   return (neuron0x170c5f0()*0.000607239);
}

double NNfunction_ss_dLcR::synapse0x171f9c0() {
   return (neuron0x170c930()*0.147709);
}

double NNfunction_ss_dLcR::synapse0x171fa00() {
   return (neuron0x170cc70()*-0.00457774);
}

double NNfunction_ss_dLcR::synapse0x171fa40() {
   return (neuron0x170cfb0()*0.0044069);
}

double NNfunction_ss_dLcR::synapse0x171fa80() {
   return (neuron0x170d2f0()*0.0122637);
}

double NNfunction_ss_dLcR::synapse0x171fac0() {
   return (neuron0x170d630()*0.137504);
}

double NNfunction_ss_dLcR::synapse0x171f550() {
   return (neuron0x170d970()*0.00396899);
}

double NNfunction_ss_dLcR::synapse0x171f590() {
   return (neuron0x170ded0()*-0.00841687);
}

double NNfunction_ss_dLcR::synapse0x171fc10() {
   return (neuron0x170e0f0()*0.00276168);
}

double NNfunction_ss_dLcR::synapse0x171fc50() {
   return (neuron0x170e430()*0.00147813);
}

double NNfunction_ss_dLcR::synapse0x171fc90() {
   return (neuron0x170e770()*-0.00356179);
}

double NNfunction_ss_dLcR::synapse0x171fcd0() {
   return (neuron0x170eab0()*-0.00720571);
}

double NNfunction_ss_dLcR::synapse0x171fd10() {
   return (neuron0x170edf0()*-0.00178807);
}

double NNfunction_ss_dLcR::synapse0x171fd50() {
   return (neuron0x170f130()*-0.000981018);
}

double NNfunction_ss_dLcR::synapse0x1731c20() {
   return (neuron0x170a570()*-0.114456);
}

double NNfunction_ss_dLcR::synapse0x1731c60() {
   return (neuron0x170a8b0()*0.00223587);
}

double NNfunction_ss_dLcR::synapse0x1731ca0() {
   return (neuron0x170abf0()*0.0929729);
}

double NNfunction_ss_dLcR::synapse0x1731ce0() {
   return (neuron0x170af30()*-3.338);
}

double NNfunction_ss_dLcR::synapse0x1731d20() {
   return (neuron0x170b270()*0.0559571);
}

double NNfunction_ss_dLcR::synapse0x1731d60() {
   return (neuron0x170b5b0()*-0.0903564);
}

double NNfunction_ss_dLcR::synapse0x1731da0() {
   return (neuron0x170b8f0()*-0.186417);
}

double NNfunction_ss_dLcR::synapse0x1731de0() {
   return (neuron0x170bc30()*-0.134687);
}

double NNfunction_ss_dLcR::synapse0x1731e20() {
   return (neuron0x170bf70()*-0.0804544);
}

double NNfunction_ss_dLcR::synapse0x1731e60() {
   return (neuron0x170c2b0()*0.0624731);
}

double NNfunction_ss_dLcR::synapse0x1731ea0() {
   return (neuron0x170c5f0()*0.0226961);
}

double NNfunction_ss_dLcR::synapse0x1731ee0() {
   return (neuron0x170c930()*-0.698444);
}

double NNfunction_ss_dLcR::synapse0x1731f20() {
   return (neuron0x170cc70()*0.188062);
}

double NNfunction_ss_dLcR::synapse0x1731f60() {
   return (neuron0x170cfb0()*-0.213103);
}

double NNfunction_ss_dLcR::synapse0x1731fa0() {
   return (neuron0x170d2f0()*-0.0645443);
}

double NNfunction_ss_dLcR::synapse0x1731fe0() {
   return (neuron0x170d630()*-0.318575);
}

double NNfunction_ss_dLcR::synapse0x171fd90() {
   return (neuron0x170d970()*-0.339878);
}

double NNfunction_ss_dLcR::synapse0x171fdd0() {
   return (neuron0x170ded0()*0.0818631);
}

double NNfunction_ss_dLcR::synapse0x1732130() {
   return (neuron0x170e0f0()*-0.0962746);
}

double NNfunction_ss_dLcR::synapse0x1732170() {
   return (neuron0x170e430()*0.189087);
}

double NNfunction_ss_dLcR::synapse0x17321b0() {
   return (neuron0x170e770()*-0.112586);
}

double NNfunction_ss_dLcR::synapse0x17321f0() {
   return (neuron0x170eab0()*0.0517924);
}

double NNfunction_ss_dLcR::synapse0x1732230() {
   return (neuron0x170edf0()*0.114589);
}

double NNfunction_ss_dLcR::synapse0x1732270() {
   return (neuron0x170f130()*-0.021424);
}

double NNfunction_ss_dLcR::synapse0x17325f0() {
   return (neuron0x170a570()*-0.0151068);
}

double NNfunction_ss_dLcR::synapse0x1732630() {
   return (neuron0x170a8b0()*-0.000211745);
}

double NNfunction_ss_dLcR::synapse0x1732670() {
   return (neuron0x170abf0()*0.0255874);
}

double NNfunction_ss_dLcR::synapse0x17326b0() {
   return (neuron0x170af30()*-0.22757);
}

double NNfunction_ss_dLcR::synapse0x17326f0() {
   return (neuron0x170b270()*-0.0272449);
}

double NNfunction_ss_dLcR::synapse0x1732730() {
   return (neuron0x170b5b0()*-0.0106207);
}

double NNfunction_ss_dLcR::synapse0x1732770() {
   return (neuron0x170b8f0()*0.00867599);
}

double NNfunction_ss_dLcR::synapse0x17327b0() {
   return (neuron0x170bc30()*-0.0110667);
}

double NNfunction_ss_dLcR::synapse0x17327f0() {
   return (neuron0x170bf70()*0.0398246);
}

double NNfunction_ss_dLcR::synapse0x1732830() {
   return (neuron0x170c2b0()*-0.0163359);
}

double NNfunction_ss_dLcR::synapse0x1732870() {
   return (neuron0x170c5f0()*0.0190122);
}

double NNfunction_ss_dLcR::synapse0x17328b0() {
   return (neuron0x170c930()*-0.704433);
}

double NNfunction_ss_dLcR::synapse0x17328f0() {
   return (neuron0x170cc70()*-0.00637344);
}

double NNfunction_ss_dLcR::synapse0x1732930() {
   return (neuron0x170cfb0()*0.015695);
}

double NNfunction_ss_dLcR::synapse0x1732970() {
   return (neuron0x170d2f0()*0.0115126);
}

double NNfunction_ss_dLcR::synapse0x17329b0() {
   return (neuron0x170d630()*-0.51488);
}

double NNfunction_ss_dLcR::synapse0x1732440() {
   return (neuron0x170d970()*-0.00661414);
}

double NNfunction_ss_dLcR::synapse0x1732480() {
   return (neuron0x170ded0()*-0.0496772);
}

double NNfunction_ss_dLcR::synapse0x1732b00() {
   return (neuron0x170e0f0()*-0.0164325);
}

double NNfunction_ss_dLcR::synapse0x1732b40() {
   return (neuron0x170e430()*-0.00374106);
}

double NNfunction_ss_dLcR::synapse0x1732b80() {
   return (neuron0x170e770()*0.0195879);
}

double NNfunction_ss_dLcR::synapse0x1732bc0() {
   return (neuron0x170eab0()*-0.022191);
}

double NNfunction_ss_dLcR::synapse0x1732c00() {
   return (neuron0x170edf0()*-0.0150601);
}

double NNfunction_ss_dLcR::synapse0x1732c40() {
   return (neuron0x170f130()*-0.0188453);
}

double NNfunction_ss_dLcR::synapse0x1732fc0() {
   return (neuron0x170a570()*-0.0581506);
}

double NNfunction_ss_dLcR::synapse0x1733000() {
   return (neuron0x170a8b0()*1.38075);
}

double NNfunction_ss_dLcR::synapse0x1733040() {
   return (neuron0x170abf0()*-0.109112);
}

double NNfunction_ss_dLcR::synapse0x1733080() {
   return (neuron0x170af30()*0.448187);
}

double NNfunction_ss_dLcR::synapse0x17330c0() {
   return (neuron0x170b270()*-0.160013);
}

double NNfunction_ss_dLcR::synapse0x1733100() {
   return (neuron0x170b5b0()*0.327848);
}

double NNfunction_ss_dLcR::synapse0x1733140() {
   return (neuron0x170b8f0()*-1.10052);
}

double NNfunction_ss_dLcR::synapse0x1733180() {
   return (neuron0x170bc30()*-0.515586);
}

double NNfunction_ss_dLcR::synapse0x17331c0() {
   return (neuron0x170bf70()*0.462182);
}

double NNfunction_ss_dLcR::synapse0x1733200() {
   return (neuron0x170c2b0()*-1.0558);
}

double NNfunction_ss_dLcR::synapse0x1733240() {
   return (neuron0x170c5f0()*0.154142);
}

double NNfunction_ss_dLcR::synapse0x1733280() {
   return (neuron0x170c930()*0.220017);
}

double NNfunction_ss_dLcR::synapse0x17332c0() {
   return (neuron0x170cc70()*0.136873);
}

double NNfunction_ss_dLcR::synapse0x1733300() {
   return (neuron0x170cfb0()*0.990092);
}

double NNfunction_ss_dLcR::synapse0x1733340() {
   return (neuron0x170d2f0()*-0.847525);
}

double NNfunction_ss_dLcR::synapse0x1733380() {
   return (neuron0x170d630()*-0.160165);
}

double NNfunction_ss_dLcR::synapse0x1732e10() {
   return (neuron0x170d970()*0.163362);
}

double NNfunction_ss_dLcR::synapse0x1732e50() {
   return (neuron0x170ded0()*-1.05316);
}

double NNfunction_ss_dLcR::synapse0x17334d0() {
   return (neuron0x170e0f0()*-0.227767);
}

double NNfunction_ss_dLcR::synapse0x1733510() {
   return (neuron0x170e430()*0.3699);
}

double NNfunction_ss_dLcR::synapse0x1733550() {
   return (neuron0x170e770()*-0.30247);
}

double NNfunction_ss_dLcR::synapse0x1733590() {
   return (neuron0x170eab0()*-0.982139);
}

double NNfunction_ss_dLcR::synapse0x17335d0() {
   return (neuron0x170edf0()*-0.157564);
}

double NNfunction_ss_dLcR::synapse0x1733610() {
   return (neuron0x170f130()*0.371861);
}

double NNfunction_ss_dLcR::synapse0x1733990() {
   return (neuron0x170a570()*0.452498);
}

double NNfunction_ss_dLcR::synapse0x17339d0() {
   return (neuron0x170a8b0()*-0.23929);
}

double NNfunction_ss_dLcR::synapse0x1733a10() {
   return (neuron0x170abf0()*-0.704976);
}

double NNfunction_ss_dLcR::synapse0x1733a50() {
   return (neuron0x170af30()*1.49679);
}

double NNfunction_ss_dLcR::synapse0x1733a90() {
   return (neuron0x170b270()*0.536018);
}

double NNfunction_ss_dLcR::synapse0x1733ad0() {
   return (neuron0x170b5b0()*0.773536);
}

double NNfunction_ss_dLcR::synapse0x1733b10() {
   return (neuron0x170b8f0()*-0.214415);
}

double NNfunction_ss_dLcR::synapse0x1733b50() {
   return (neuron0x170bc30()*-0.0881081);
}

double NNfunction_ss_dLcR::synapse0x1733b90() {
   return (neuron0x170bf70()*-0.599471);
}

double NNfunction_ss_dLcR::synapse0x1733bd0() {
   return (neuron0x170c2b0()*0.167945);
}

double NNfunction_ss_dLcR::synapse0x1733c10() {
   return (neuron0x170c5f0()*-0.318185);
}

double NNfunction_ss_dLcR::synapse0x1733c50() {
   return (neuron0x170c930()*1.03296);
}

double NNfunction_ss_dLcR::synapse0x1733c90() {
   return (neuron0x170cc70()*0.652057);
}

double NNfunction_ss_dLcR::synapse0x1733cd0() {
   return (neuron0x170cfb0()*-0.67373);
}

double NNfunction_ss_dLcR::synapse0x1733d10() {
   return (neuron0x170d2f0()*-0.484367);
}

double NNfunction_ss_dLcR::synapse0x1733d50() {
   return (neuron0x170d630()*-0.0253618);
}

double NNfunction_ss_dLcR::synapse0x17337e0() {
   return (neuron0x170d970()*0.00908336);
}

double NNfunction_ss_dLcR::synapse0x1733820() {
   return (neuron0x170ded0()*0.319102);
}

double NNfunction_ss_dLcR::synapse0x1733ea0() {
   return (neuron0x170e0f0()*-0.427421);
}

double NNfunction_ss_dLcR::synapse0x1733ee0() {
   return (neuron0x170e430()*0.798355);
}

double NNfunction_ss_dLcR::synapse0x1733f20() {
   return (neuron0x170e770()*0.0654276);
}

double NNfunction_ss_dLcR::synapse0x1733f60() {
   return (neuron0x170eab0()*0.153083);
}

double NNfunction_ss_dLcR::synapse0x1733fa0() {
   return (neuron0x170edf0()*-0.443505);
}

double NNfunction_ss_dLcR::synapse0x1733fe0() {
   return (neuron0x170f130()*0.0448404);
}

double NNfunction_ss_dLcR::synapse0x1710580() {
   return (neuron0x170f5d0()*-0.224684);
}

double NNfunction_ss_dLcR::synapse0x17105c0() {
   return (neuron0x170fee0()*0.0506815);
}

double NNfunction_ss_dLcR::synapse0x1711a90() {
   return (neuron0x17109c0()*0.284178);
}

double NNfunction_ss_dLcR::synapse0x1711ad0() {
   return (neuron0x14ca250()*0.0623398);
}

double NNfunction_ss_dLcR::synapse0x1712460() {
   return (neuron0x17117e0()*0.169192);
}

double NNfunction_ss_dLcR::synapse0x17124a0() {
   return (neuron0x17121b0()*-0.29674);
}

double NNfunction_ss_dLcR::synapse0x1713230() {
   return (neuron0x1712f80()*0.0202125);
}

double NNfunction_ss_dLcR::synapse0x1713270() {
   return (neuron0x1713950()*-0.351408);
}

double NNfunction_ss_dLcR::synapse0x1713c00() {
   return (neuron0x1714320()*-0.29221);
}

double NNfunction_ss_dLcR::synapse0x1713c40() {
   return (neuron0x1714e00()*0.0841884);
}

double NNfunction_ss_dLcR::synapse0x17145d0() {
   return (neuron0x17157d0()*-0.185193);
}

double NNfunction_ss_dLcR::synapse0x1714610() {
   return (neuron0x17128b0()*-0.186566);
}

double NNfunction_ss_dLcR::synapse0x17150b0() {
   return (neuron0x1717380()*-0.436857);
}

double NNfunction_ss_dLcR::synapse0x17150f0() {
   return (neuron0x1717d50()*-0.0879644);
}

double NNfunction_ss_dLcR::synapse0x1715a80() {
   return (neuron0x1718720()*-0.401242);
}

double NNfunction_ss_dLcR::synapse0x1715ac0() {
   return (neuron0x17190f0()*0.35857);
}

double NNfunction_ss_dLcR::synapse0x1712b60() {
   return (neuron0x171af00()*-0.204486);
}

double NNfunction_ss_dLcR::synapse0x1712ba0() {
   return (neuron0x171b1e0()*-0.366123);
}

double NNfunction_ss_dLcR::synapse0x1717630() {
   return (neuron0x171bbb0()*-0.0476388);
}

double NNfunction_ss_dLcR::synapse0x1717670() {
   return (neuron0x171c580()*-0.307695);
}

double NNfunction_ss_dLcR::synapse0x1718000() {
   return (neuron0x171cf50()*-0.430452);
}

double NNfunction_ss_dLcR::synapse0x1718040() {
   return (neuron0x171d920()*-0.2752);
}

double NNfunction_ss_dLcR::synapse0x17189d0() {
   return (neuron0x1716470()*0.205731);
}

double NNfunction_ss_dLcR::synapse0x1718a10() {
   return (neuron0x1716e40()*-0.444827);
}

double NNfunction_ss_dLcR::synapse0x17193a0() {
   return (neuron0x17206b0()*0.101521);
}

double NNfunction_ss_dLcR::synapse0x17193e0() {
   return (neuron0x1721080()*0.0460735);
}

double NNfunction_ss_dLcR::synapse0x170d510() {
   return (neuron0x1721a50()*-0.12231);
}

double NNfunction_ss_dLcR::synapse0x170d550() {
   return (neuron0x1722420()*0.00478399);
}

double NNfunction_ss_dLcR::synapse0x171b490() {
   return (neuron0x1722df0()*-0.478564);
}

double NNfunction_ss_dLcR::synapse0x171b4d0() {
   return (neuron0x17237c0()*-0.552772);
}

double NNfunction_ss_dLcR::synapse0x171be60() {
   return (neuron0x1724190()*0.00471097);
}

double NNfunction_ss_dLcR::synapse0x171bea0() {
   return (neuron0x1724b60()*-0.566285);
}

double NNfunction_ss_dLcR::synapse0x171c830() {
   return (neuron0x171abf0()*-0.574592);
}

double NNfunction_ss_dLcR::synapse0x171c870() {
   return (neuron0x1727740()*-0.657644);
}

double NNfunction_ss_dLcR::synapse0x171d200() {
   return (neuron0x1728110()*0.0385241);
}

double NNfunction_ss_dLcR::synapse0x171d240() {
   return (neuron0x1728ae0()*-0.00107708);
}

double NNfunction_ss_dLcR::synapse0x171dbd0() {
   return (neuron0x17294b0()*0.047313);
}

double NNfunction_ss_dLcR::synapse0x171dc10() {
   return (neuron0x1729e80()*-0.511896);
}

double NNfunction_ss_dLcR::synapse0x1716720() {
   return (neuron0x172a850()*-0.231504);
}

double NNfunction_ss_dLcR::synapse0x1716760() {
   return (neuron0x172b220()*-0.625028);
}

double NNfunction_ss_dLcR::synapse0x171ffd0() {
   return (neuron0x172bbf0()*-0.472636);
}

double NNfunction_ss_dLcR::synapse0x1720010() {
   return (neuron0x172c7d0()*-0.44735);
}

double NNfunction_ss_dLcR::synapse0x1720960() {
   return (neuron0x172d1a0()*-0.491561);
}

double NNfunction_ss_dLcR::synapse0x17209a0() {
   return (neuron0x171e020()*-0.0574454);
}

double NNfunction_ss_dLcR::synapse0x1721330() {
   return (neuron0x171e9f0()*-0.530521);
}

double NNfunction_ss_dLcR::synapse0x1721370() {
   return (neuron0x171f3c0()*0.314694);
}

double NNfunction_ss_dLcR::synapse0x1721d00() {
   return (neuron0x1731a00()*-0.421033);
}

double NNfunction_ss_dLcR::synapse0x1721d40() {
   return (neuron0x17322b0()*-0.550298);
}

double NNfunction_ss_dLcR::synapse0x17226d0() {
   return (neuron0x1732c80()*0.0315823);
}

double NNfunction_ss_dLcR::synapse0x1722710() {
   return (neuron0x1733650()*0.2138);
}

double NNfunction_ss_dLcR::synapse0x1724e10() {
   return (neuron0x170f5d0()*-0.0593499);
}

double NNfunction_ss_dLcR::synapse0x1724e50() {
   return (neuron0x170fee0()*0.0433461);
}

double NNfunction_ss_dLcR::synapse0x171a3d0() {
   return (neuron0x17109c0()*0.0448168);
}

double NNfunction_ss_dLcR::synapse0x171a410() {
   return (neuron0x14ca250()*0.081129);
}

double NNfunction_ss_dLcR::synapse0x17279f0() {
   return (neuron0x17117e0()*0.148879);
}

double NNfunction_ss_dLcR::synapse0x1727a30() {
   return (neuron0x17121b0()*0.0384108);
}

double NNfunction_ss_dLcR::synapse0x17283c0() {
   return (neuron0x1712f80()*0.0505016);
}

double NNfunction_ss_dLcR::synapse0x1728400() {
   return (neuron0x1713950()*-0.515155);
}

double NNfunction_ss_dLcR::synapse0x1728d90() {
   return (neuron0x1714320()*0.0253242);
}

double NNfunction_ss_dLcR::synapse0x1728dd0() {
   return (neuron0x1714e00()*-0.0336668);
}

double NNfunction_ss_dLcR::synapse0x1729760() {
   return (neuron0x17157d0()*-0.0520211);
}

double NNfunction_ss_dLcR::synapse0x17297a0() {
   return (neuron0x17128b0()*0.00230491);
}

double NNfunction_ss_dLcR::synapse0x172a130() {
   return (neuron0x1717380()*2.19756);
}

double NNfunction_ss_dLcR::synapse0x172a170() {
   return (neuron0x1717d50()*0.0150024);
}

double NNfunction_ss_dLcR::synapse0x172ab00() {
   return (neuron0x1718720()*-0.0189074);
}

double NNfunction_ss_dLcR::synapse0x172ab40() {
   return (neuron0x17190f0()*0.0366847);
}

double NNfunction_ss_dLcR::synapse0x172b4d0() {
   return (neuron0x171af00()*0.0340648);
}

double NNfunction_ss_dLcR::synapse0x172b510() {
   return (neuron0x171b1e0()*-3.05384);
}

double NNfunction_ss_dLcR::synapse0x172bea0() {
   return (neuron0x171bbb0()*-0.0301271);
}

double NNfunction_ss_dLcR::synapse0x172bee0() {
   return (neuron0x171c580()*0.0425144);
}

double NNfunction_ss_dLcR::synapse0x172ca80() {
   return (neuron0x171cf50()*-0.0366462);
}

double NNfunction_ss_dLcR::synapse0x172cac0() {
   return (neuron0x171d920()*0.0180906);
}

double NNfunction_ss_dLcR::synapse0x172d450() {
   return (neuron0x1716470()*0.0569013);
}

double NNfunction_ss_dLcR::synapse0x172d490() {
   return (neuron0x1716e40()*-0.0644166);
}

double NNfunction_ss_dLcR::synapse0x171e2d0() {
   return (neuron0x17206b0()*0.0413272);
}

double NNfunction_ss_dLcR::synapse0x171e310() {
   return (neuron0x1721080()*-0.0558741);
}

double NNfunction_ss_dLcR::synapse0x171eca0() {
   return (neuron0x1721a50()*0.0522065);
}

double NNfunction_ss_dLcR::synapse0x171ece0() {
   return (neuron0x1722420()*-0.0379278);
}

double NNfunction_ss_dLcR::synapse0x171f670() {
   return (neuron0x1722df0()*-0.0428236);
}

double NNfunction_ss_dLcR::synapse0x171f6b0() {
   return (neuron0x17237c0()*0.0377401);
}

double NNfunction_ss_dLcR::synapse0x1731b90() {
   return (neuron0x1724190()*0.691486);
}

double NNfunction_ss_dLcR::synapse0x1731bd0() {
   return (neuron0x1724b60()*0.408966);
}

double NNfunction_ss_dLcR::synapse0x1732560() {
   return (neuron0x171abf0()*0.0242011);
}

double NNfunction_ss_dLcR::synapse0x17325a0() {
   return (neuron0x1727740()*0.0770444);
}

double NNfunction_ss_dLcR::synapse0x1732f30() {
   return (neuron0x1728110()*-0.803941);
}

double NNfunction_ss_dLcR::synapse0x1732f70() {
   return (neuron0x1728ae0()*0.0348164);
}

double NNfunction_ss_dLcR::synapse0x1733900() {
   return (neuron0x17294b0()*0.0380886);
}

double NNfunction_ss_dLcR::synapse0x1733940() {
   return (neuron0x1729e80()*0.245317);
}

double NNfunction_ss_dLcR::synapse0x170f7f0() {
   return (neuron0x172a850()*0.03432);
}

double NNfunction_ss_dLcR::synapse0x170f830() {
   return (neuron0x172b220()*0.034173);
}

double NNfunction_ss_dLcR::synapse0x17230a0() {
   return (neuron0x172bbf0()*0.0459432);
}

double NNfunction_ss_dLcR::synapse0x17230e0() {
   return (neuron0x172c7d0()*-0.831687);
}

double NNfunction_ss_dLcR::synapse0x1734020() {
   return (neuron0x172d1a0()*-0.0290295);
}

double NNfunction_ss_dLcR::synapse0x1734060() {
   return (neuron0x171e020()*-0.0265866);
}

double NNfunction_ss_dLcR::synapse0x17340a0() {
   return (neuron0x171e9f0()*-0.00270125);
}

double NNfunction_ss_dLcR::synapse0x17340e0() {
   return (neuron0x171f3c0()*2.76203);
}

double NNfunction_ss_dLcR::synapse0x173af90() {
   return (neuron0x1731a00()*-0.0415328);
}

double NNfunction_ss_dLcR::synapse0x173afd0() {
   return (neuron0x17322b0()*-0.942264);
}

double NNfunction_ss_dLcR::synapse0x173b010() {
   return (neuron0x1732c80()*-0.0275132);
}

double NNfunction_ss_dLcR::synapse0x173b050() {
   return (neuron0x1733650()*-0.00969202);
}

double NNfunction_ss_dLcR::synapse0x173b3d0() {
   return (neuron0x170f5d0()*-0.019863);
}

double NNfunction_ss_dLcR::synapse0x173b410() {
   return (neuron0x170fee0()*0.582126);
}

double NNfunction_ss_dLcR::synapse0x173b450() {
   return (neuron0x17109c0()*-0.121655);
}

double NNfunction_ss_dLcR::synapse0x173b490() {
   return (neuron0x14ca250()*-0.24976);
}

double NNfunction_ss_dLcR::synapse0x173b4d0() {
   return (neuron0x17117e0()*0.290301);
}

double NNfunction_ss_dLcR::synapse0x173b510() {
   return (neuron0x17121b0()*-0.0816399);
}

double NNfunction_ss_dLcR::synapse0x173b550() {
   return (neuron0x1712f80()*-0.131523);
}

double NNfunction_ss_dLcR::synapse0x173b590() {
   return (neuron0x1713950()*-0.0648601);
}

double NNfunction_ss_dLcR::synapse0x173b5d0() {
   return (neuron0x1714320()*-0.0224244);
}

double NNfunction_ss_dLcR::synapse0x173b610() {
   return (neuron0x1714e00()*0.0927213);
}

double NNfunction_ss_dLcR::synapse0x173b650() {
   return (neuron0x17157d0()*0.163621);
}

double NNfunction_ss_dLcR::synapse0x173b690() {
   return (neuron0x17128b0()*0.0455198);
}

double NNfunction_ss_dLcR::synapse0x173b6d0() {
   return (neuron0x1717380()*-0.461633);
}

double NNfunction_ss_dLcR::synapse0x173b710() {
   return (neuron0x1717d50()*-0.0246699);
}

double NNfunction_ss_dLcR::synapse0x173b750() {
   return (neuron0x1718720()*0.0530092);
}

double NNfunction_ss_dLcR::synapse0x173b790() {
   return (neuron0x17190f0()*-0.122208);
}

double NNfunction_ss_dLcR::synapse0x173b220() {
   return (neuron0x171af00()*-0.115913);
}

double NNfunction_ss_dLcR::synapse0x173b260() {
   return (neuron0x171b1e0()*-0.2361);
}

double NNfunction_ss_dLcR::synapse0x173b8e0() {
   return (neuron0x171bbb0()*0.115295);
}

double NNfunction_ss_dLcR::synapse0x173b920() {
   return (neuron0x171c580()*-0.146682);
}

double NNfunction_ss_dLcR::synapse0x173b960() {
   return (neuron0x171cf50()*0.138019);
}

double NNfunction_ss_dLcR::synapse0x173b9a0() {
   return (neuron0x171d920()*-0.154593);
}

double NNfunction_ss_dLcR::synapse0x173b9e0() {
   return (neuron0x1716470()*-0.199019);
}

double NNfunction_ss_dLcR::synapse0x173ba20() {
   return (neuron0x1716e40()*0.123704);
}

double NNfunction_ss_dLcR::synapse0x173ba60() {
   return (neuron0x17206b0()*-0.116707);
}

double NNfunction_ss_dLcR::synapse0x173baa0() {
   return (neuron0x1721080()*0.16639);
}

double NNfunction_ss_dLcR::synapse0x173bae0() {
   return (neuron0x1721a50()*-0.0562437);
}

double NNfunction_ss_dLcR::synapse0x173bb20() {
   return (neuron0x1722420()*0.0223033);
}

double NNfunction_ss_dLcR::synapse0x173bb60() {
   return (neuron0x1722df0()*0.132763);
}

double NNfunction_ss_dLcR::synapse0x173bba0() {
   return (neuron0x17237c0()*-0.0542331);
}

double NNfunction_ss_dLcR::synapse0x173bbe0() {
   return (neuron0x1724190()*-0.907985);
}

double NNfunction_ss_dLcR::synapse0x173bc20() {
   return (neuron0x1724b60()*-0.413628);
}

double NNfunction_ss_dLcR::synapse0x173b7d0() {
   return (neuron0x171abf0()*-0.045283);
}

double NNfunction_ss_dLcR::synapse0x173b810() {
   return (neuron0x1727740()*-0.837907);
}

double NNfunction_ss_dLcR::synapse0x173b850() {
   return (neuron0x1728110()*-0.98159);
}

double NNfunction_ss_dLcR::synapse0x173b890() {
   return (neuron0x1728ae0()*-0.565679);
}

double NNfunction_ss_dLcR::synapse0x173be70() {
   return (neuron0x17294b0()*-0.236472);
}

double NNfunction_ss_dLcR::synapse0x173beb0() {
   return (neuron0x1729e80()*0.51506);
}

double NNfunction_ss_dLcR::synapse0x173bef0() {
   return (neuron0x172a850()*-0.0878919);
}

double NNfunction_ss_dLcR::synapse0x173bf30() {
   return (neuron0x172b220()*-0.106086);
}

double NNfunction_ss_dLcR::synapse0x173bf70() {
   return (neuron0x172bbf0()*-0.0866571);
}

double NNfunction_ss_dLcR::synapse0x173bfb0() {
   return (neuron0x172c7d0()*0.624926);
}

double NNfunction_ss_dLcR::synapse0x173bff0() {
   return (neuron0x172d1a0()*0.112536);
}

double NNfunction_ss_dLcR::synapse0x173c030() {
   return (neuron0x171e020()*0.113109);
}

double NNfunction_ss_dLcR::synapse0x173c070() {
   return (neuron0x171e9f0()*-0.305726);
}

double NNfunction_ss_dLcR::synapse0x173c0b0() {
   return (neuron0x171f3c0()*0.516204);
}

double NNfunction_ss_dLcR::synapse0x173c0f0() {
   return (neuron0x1731a00()*-0.202045);
}

double NNfunction_ss_dLcR::synapse0x173c130() {
   return (neuron0x17322b0()*-0.874656);
}

double NNfunction_ss_dLcR::synapse0x173c170() {
   return (neuron0x1732c80()*0.0835182);
}

double NNfunction_ss_dLcR::synapse0x173c1b0() {
   return (neuron0x1733650()*-0.017898);
}

double NNfunction_ss_dLcR::synapse0x173c530() {
   return (neuron0x170f5d0()*-0.624493);
}

double NNfunction_ss_dLcR::synapse0x173c570() {
   return (neuron0x170fee0()*1.37697);
}

double NNfunction_ss_dLcR::synapse0x173c5b0() {
   return (neuron0x17109c0()*-0.00949986);
}

double NNfunction_ss_dLcR::synapse0x173c5f0() {
   return (neuron0x14ca250()*-0.288241);
}

double NNfunction_ss_dLcR::synapse0x173c630() {
   return (neuron0x17117e0()*2.21644);
}

double NNfunction_ss_dLcR::synapse0x173c670() {
   return (neuron0x17121b0()*-0.0346022);
}

double NNfunction_ss_dLcR::synapse0x173c6b0() {
   return (neuron0x1712f80()*-0.0346694);
}

double NNfunction_ss_dLcR::synapse0x173c6f0() {
   return (neuron0x1713950()*0.623957);
}

double NNfunction_ss_dLcR::synapse0x173c730() {
   return (neuron0x1714320()*-0.0383538);
}

double NNfunction_ss_dLcR::synapse0x173c770() {
   return (neuron0x1714e00()*-0.00327877);
}

double NNfunction_ss_dLcR::synapse0x173c7b0() {
   return (neuron0x17157d0()*0.00218735);
}

double NNfunction_ss_dLcR::synapse0x173c7f0() {
   return (neuron0x17128b0()*0.0935758);
}

double NNfunction_ss_dLcR::synapse0x173c830() {
   return (neuron0x1717380()*0.978103);
}

double NNfunction_ss_dLcR::synapse0x173c870() {
   return (neuron0x1717d50()*0.0862975);
}

double NNfunction_ss_dLcR::synapse0x173c8b0() {
   return (neuron0x1718720()*0.0162866);
}

double NNfunction_ss_dLcR::synapse0x173c8f0() {
   return (neuron0x17190f0()*0.00602974);
}

double NNfunction_ss_dLcR::synapse0x173c380() {
   return (neuron0x171af00()*0.049119);
}

double NNfunction_ss_dLcR::synapse0x173c3c0() {
   return (neuron0x171b1e0()*-2.76151);
}

double NNfunction_ss_dLcR::synapse0x173ca40() {
   return (neuron0x171bbb0()*-0.0619285);
}

double NNfunction_ss_dLcR::synapse0x173ca80() {
   return (neuron0x171c580()*-0.0152084);
}

double NNfunction_ss_dLcR::synapse0x173cac0() {
   return (neuron0x171cf50()*-0.0240038);
}

double NNfunction_ss_dLcR::synapse0x173cb00() {
   return (neuron0x171d920()*0.719339);
}

double NNfunction_ss_dLcR::synapse0x173cb40() {
   return (neuron0x1716470()*0.015822);
}

double NNfunction_ss_dLcR::synapse0x173cb80() {
   return (neuron0x1716e40()*-0.0525688);
}

double NNfunction_ss_dLcR::synapse0x173cbc0() {
   return (neuron0x17206b0()*-0.003285);
}

double NNfunction_ss_dLcR::synapse0x173cc00() {
   return (neuron0x1721080()*-0.00113103);
}

double NNfunction_ss_dLcR::synapse0x173cc40() {
   return (neuron0x1721a50()*-0.360599);
}

double NNfunction_ss_dLcR::synapse0x173cc80() {
   return (neuron0x1722420()*0.0382988);
}

double NNfunction_ss_dLcR::synapse0x173ccc0() {
   return (neuron0x1722df0()*-0.00157047);
}

double NNfunction_ss_dLcR::synapse0x173cd00() {
   return (neuron0x17237c0()*0.56478);
}

double NNfunction_ss_dLcR::synapse0x173cd40() {
   return (neuron0x1724190()*5.13307);
}

double NNfunction_ss_dLcR::synapse0x173cd80() {
   return (neuron0x1724b60()*0.588234);
}

double NNfunction_ss_dLcR::synapse0x173c930() {
   return (neuron0x171abf0()*0.101202);
}

double NNfunction_ss_dLcR::synapse0x173c970() {
   return (neuron0x1727740()*0.521007);
}

double NNfunction_ss_dLcR::synapse0x173c9b0() {
   return (neuron0x1728110()*-3.24528);
}

double NNfunction_ss_dLcR::synapse0x173c9f0() {
   return (neuron0x1728ae0()*4.28142);
}

double NNfunction_ss_dLcR::synapse0x173cfd0() {
   return (neuron0x17294b0()*-0.832596);
}

double NNfunction_ss_dLcR::synapse0x173d010() {
   return (neuron0x1729e80()*1.18871);
}

double NNfunction_ss_dLcR::synapse0x173d050() {
   return (neuron0x172a850()*-0.0449781);
}

double NNfunction_ss_dLcR::synapse0x173d090() {
   return (neuron0x172b220()*-0.017347);
}

double NNfunction_ss_dLcR::synapse0x173d0d0() {
   return (neuron0x172bbf0()*-0.145412);
}

double NNfunction_ss_dLcR::synapse0x173d110() {
   return (neuron0x172c7d0()*-0.869851);
}

double NNfunction_ss_dLcR::synapse0x173d150() {
   return (neuron0x172d1a0()*-0.0975822);
}

double NNfunction_ss_dLcR::synapse0x173d190() {
   return (neuron0x171e020()*-0.0186784);
}

double NNfunction_ss_dLcR::synapse0x173d1d0() {
   return (neuron0x171e9f0()*-0.465595);
}

double NNfunction_ss_dLcR::synapse0x173d210() {
   return (neuron0x171f3c0()*1.57597);
}

double NNfunction_ss_dLcR::synapse0x173d250() {
   return (neuron0x1731a00()*-1.79273);
}

double NNfunction_ss_dLcR::synapse0x173d290() {
   return (neuron0x17322b0()*0.00248498);
}

double NNfunction_ss_dLcR::synapse0x173d2d0() {
   return (neuron0x1732c80()*-0.0560419);
}

double NNfunction_ss_dLcR::synapse0x173d310() {
   return (neuron0x1733650()*0.102879);
}

double NNfunction_ss_dLcR::synapse0x173d690() {
   return (neuron0x170f5d0()*-3.33108);
}

double NNfunction_ss_dLcR::synapse0x173d6d0() {
   return (neuron0x170fee0()*-1.52152);
}

double NNfunction_ss_dLcR::synapse0x173d710() {
   return (neuron0x17109c0()*-2.68625);
}

double NNfunction_ss_dLcR::synapse0x173d750() {
   return (neuron0x14ca250()*-4.35828);
}

double NNfunction_ss_dLcR::synapse0x173d790() {
   return (neuron0x17117e0()*1.56848);
}

double NNfunction_ss_dLcR::synapse0x173d7d0() {
   return (neuron0x17121b0()*-2.11137);
}

double NNfunction_ss_dLcR::synapse0x173d810() {
   return (neuron0x1712f80()*-2.34047);
}

double NNfunction_ss_dLcR::synapse0x173d850() {
   return (neuron0x1713950()*3.14837);
}

double NNfunction_ss_dLcR::synapse0x173d890() {
   return (neuron0x1714320()*-2.26419);
}

double NNfunction_ss_dLcR::synapse0x173d8d0() {
   return (neuron0x1714e00()*2.10635);
}

double NNfunction_ss_dLcR::synapse0x173d910() {
   return (neuron0x17157d0()*2.25705);
}

double NNfunction_ss_dLcR::synapse0x173d950() {
   return (neuron0x17128b0()*-3.3472);
}

double NNfunction_ss_dLcR::synapse0x173d990() {
   return (neuron0x1717380()*0.601356);
}

double NNfunction_ss_dLcR::synapse0x173d9d0() {
   return (neuron0x1717d50()*-2.36724);
}

double NNfunction_ss_dLcR::synapse0x173da10() {
   return (neuron0x1718720()*2.44399);
}

double NNfunction_ss_dLcR::synapse0x173da50() {
   return (neuron0x17190f0()*-2.67921);
}

double NNfunction_ss_dLcR::synapse0x173d4e0() {
   return (neuron0x171af00()*-2.34805);
}

double NNfunction_ss_dLcR::synapse0x173d520() {
   return (neuron0x171b1e0()*-0.41581);
}

double NNfunction_ss_dLcR::synapse0x173dba0() {
   return (neuron0x171bbb0()*2.75246);
}

double NNfunction_ss_dLcR::synapse0x173dbe0() {
   return (neuron0x171c580()*-2.25263);
}

double NNfunction_ss_dLcR::synapse0x173dc20() {
   return (neuron0x171cf50()*2.52838);
}

double NNfunction_ss_dLcR::synapse0x173dc60() {
   return (neuron0x171d920()*0.539011);
}

double NNfunction_ss_dLcR::synapse0x173dca0() {
   return (neuron0x1716470()*-2.36294);
}

double NNfunction_ss_dLcR::synapse0x173dce0() {
   return (neuron0x1716e40()*-1.69537);
}

double NNfunction_ss_dLcR::synapse0x173dd20() {
   return (neuron0x17206b0()*-2.10267);
}

double NNfunction_ss_dLcR::synapse0x173dd60() {
   return (neuron0x1721080()*2.60463);
}

double NNfunction_ss_dLcR::synapse0x173dda0() {
   return (neuron0x1721a50()*-1.6607);
}

double NNfunction_ss_dLcR::synapse0x173dde0() {
   return (neuron0x1722420()*-1.98678);
}

double NNfunction_ss_dLcR::synapse0x173de20() {
   return (neuron0x1722df0()*2.08971);
}

double NNfunction_ss_dLcR::synapse0x173de60() {
   return (neuron0x17237c0()*1.14457);
}

double NNfunction_ss_dLcR::synapse0x173dea0() {
   return (neuron0x1724190()*3.68151);
}

double NNfunction_ss_dLcR::synapse0x173dee0() {
   return (neuron0x1724b60()*2.1494);
}

double NNfunction_ss_dLcR::synapse0x173da90() {
   return (neuron0x171abf0()*-1.95488);
}

double NNfunction_ss_dLcR::synapse0x173dad0() {
   return (neuron0x1727740()*-1.39692);
}

double NNfunction_ss_dLcR::synapse0x173db10() {
   return (neuron0x1728110()*-4.21697);
}

double NNfunction_ss_dLcR::synapse0x173db50() {
   return (neuron0x1728ae0()*3.78302);
}

double NNfunction_ss_dLcR::synapse0x173e130() {
   return (neuron0x17294b0()*-2.53264);
}

double NNfunction_ss_dLcR::synapse0x173e170() {
   return (neuron0x1729e80()*1.86011);
}

double NNfunction_ss_dLcR::synapse0x173e1b0() {
   return (neuron0x172a850()*-1.76842);
}

double NNfunction_ss_dLcR::synapse0x173e1f0() {
   return (neuron0x172b220()*-2.25054);
}

double NNfunction_ss_dLcR::synapse0x173e230() {
   return (neuron0x172bbf0()*-0.762515);
}

double NNfunction_ss_dLcR::synapse0x173e270() {
   return (neuron0x172c7d0()*-0.464907);
}

double NNfunction_ss_dLcR::synapse0x173e2b0() {
   return (neuron0x172d1a0()*2.59421);
}

double NNfunction_ss_dLcR::synapse0x173e2f0() {
   return (neuron0x171e020()*1.92606);
}

double NNfunction_ss_dLcR::synapse0x173e330() {
   return (neuron0x171e9f0()*-2.39058);
}

double NNfunction_ss_dLcR::synapse0x173e370() {
   return (neuron0x171f3c0()*0.707362);
}

double NNfunction_ss_dLcR::synapse0x173e3b0() {
   return (neuron0x1731a00()*8.02991);
}

double NNfunction_ss_dLcR::synapse0x173e3f0() {
   return (neuron0x17322b0()*-0.951686);
}

double NNfunction_ss_dLcR::synapse0x173e430() {
   return (neuron0x1732c80()*1.93245);
}

double NNfunction_ss_dLcR::synapse0x173e470() {
   return (neuron0x1733650()*2.20271);
}

double NNfunction_ss_dLcR::synapse0x170f590() {
   return (neuron0x173a850()*-1.46411);
}

double NNfunction_ss_dLcR::synapse0x173e6d0() {
   return (neuron0x173abf0()*-7.27644);
}

double NNfunction_ss_dLcR::synapse0x173e710() {
   return (neuron0x173b090()*-2.74913);
}

double NNfunction_ss_dLcR::synapse0x173e750() {
   return (neuron0x173c1f0()*-5.35933);
}

double NNfunction_ss_dLcR::synapse0x173e790() {
   return (neuron0x173d350()*-6.12297);
}

