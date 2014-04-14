#include "xsec.h"
#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char* argv[]) {
  assert(argc = 2 && "Usage: eval_xsec <slhafile>");
  xsec::Evaluator ev;

  // Gluino-gluino
  const double xs_gg = ev.xsec({{1000021}}, {{1000021}}, argv[1]);
  // Neutralino/chargino + gluino
  const double xs_xg = ev.xsec({{1000021}}, {{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}}, argv[1]);
  // Neutralino/chargino pairs
  const double xs_xx = ev.xsec({{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}},
                               {{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}}, argv[1]);
  // Squark-gluino (TODO: what about bg and tg?)
  const double xs_qg = ev.xsec({{1000021}}, {{1000001, 1000002, 1000003, 1000004,
                                              2000001, 2000002, 2000003, 2000004}}, argv[1]);
  // Neutralino/chargino + squark
  const double xs_xq = ev.xsec({{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}},
                               {{1000001, 1000002, 1000003, 1000004,
                                 2000001, 2000002, 2000003, 2000004}}, argv[1]);
  // Light squark-antisquark and squark-squark pairs
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

  cout << xs_gg << endl;
  // cout << xs_gg << " " << xs_xg << " " << xs_xx << " " << xs_qg << " "
  //      << xs_xq << " " << xs_qq << " " << xs_bb << " " << xs_tt << " " << xs_ll << endl;
  return 0;
}
