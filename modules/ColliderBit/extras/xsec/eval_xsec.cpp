#include "xsec.h"
#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Usage: evalxsec <slhafile>" << endl;
    exit(1);
  }

  // Make the xsec predictor
  xsec::Evaluator ev;


  // Gluino-gluino (ATLAS finalState = 2)
  const double xs_gg = ev.xsec({{1000021}}, {{1000021}}, argv[1]);
  // Neutralino/chargino + gluino
  const double xs_xg = ev.xsec({{1000021}}, {{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}}, argv[1]);
  // Neutralino/chargino pairs
  const double xs_xx = ev.xsec({{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}},
                               {{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}}, argv[1]);
  // Squark-gluino (TODO: what about bg and tg?) (ATLAS finalState = 1)
  const double xs_qg = ev.xsec({{1000021}}, {{1000001, 1000002, 1000003, 1000004,
                                              2000001, 2000002, 2000003, 2000004}}, argv[1]);
  // Neutralino/chargino + squark
  const double xs_xq = ev.xsec({{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}},
                               {{1000001, 1000002, 1000003, 1000004,
                                 2000001, 2000002, 2000003, 2000004}}, argv[1]);

   // Light squark-squark and squark-antisquark pairs (ATLAS finalState = 3,4)
  const double xs_qq = ev.xsec({{1000001, 1000002, 1000003, 1000004,
                                 2000001, 2000002, 2000003, 2000004}},
                               {{1000001, 1000002, 1000003, 1000004,
                                 2000001, 2000002, 2000003, 2000004}}, argv[1]);


  // b squark pair
  const double xs_bb = ev.xsec({{1000005, 2000005}}, {{1000005, 2000005}}, argv[1]);
  // t squark pair
  const double xs_tt = ev.xsec({{1000006, 2000006}}, {{1000006, 2000006}}, argv[1]);
  // Slepton pairs
  const double xs_ll = ev.xsec({{1000011, 1000012, 1000013, 1000014, 1000015, 1000016}},
                               {{1000011, 1000012, 1000013, 1000014, 1000015, 1000016}}, argv[1]);

  // cout << xs_gg << endl;
  cout << xs_gg << " " << xs_xg << " " << xs_xx << " " << xs_qg << " "
       << xs_xq << " " << xs_qq << " " << xs_bb << " " << xs_tt << " " << xs_ll << endl;


  // Are's tests
  //cout << xs_qq << endl;
  //cout << ev.xsec("dLdL",argv[1]) << endl;

  // Make a little loop that changes the mass from SPS1a
  /// @todo Add dLuL now that it exists!
  // double par_sps1a[24] = {10.0,9.91309967E+01,1.92736343E+02,5.80512390E+02,sqrt(1.54942703E+05),1.96641876E+02,1.96641876E+02,1.95753769E+02,1.36230148E+02,1.36230148E+02,1.33552856E+02,5.39857788E+02,5.39857788E+02,4.95912292E+02,5.21658875E+02,5.21658875E+02,4.24832855E+02,5.19530823E+02,5.19530823E+02,5.16859436E+02,-5.10005585E+02,-7.72662109E+02,-2.54197601E+02,3.52390930E+02};
  // cout << "mqL1" << "\t" << "dLdL" << "\t" << "dLdLbar" << "\t" << "sLdL" << "\t" << "cLdL" << "\t" << "sRcR"<< endl;
  // for(int im = 0; im < 20; im++){
  //   par_sps1a[11] += 100;
  //   cout << "@" << im << "\t" << par_sps1a[11] << "\t"
  //        << ev.xsec({{1000001}},{{1000001}},  par_sps1a) << "\t"
  //        << ev.xsec({{1000001}},{{-1000001}}, par_sps1a) << "\t"
  //        << ev.xsec({{1000003}},{{1000001}},  par_sps1a) << "\t"
  //        << ev.xsec({{1000004}},{{1000001}},  par_sps1a) << "\t"
  //        << ev.xsec({{2000003}},{{2000004}},  par_sps1a) << endl;
  // }

  return 0;
}
