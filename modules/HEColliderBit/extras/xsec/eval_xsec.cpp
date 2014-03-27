#include "xsec.h"
#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char* argv[]) {
  assert(argc = 2 && "Usage: eval_xsec <slhafile>");
  xsec::Evaluator ev;
  // Gluino-gluino
  const double xs = ev.xsec({{1000021}}, {{1000021}}, argv[1]);
  // Squark-gluino
  // const double xs = ev.xsec({{1000021}}, {{1000001, 1000002, 1000003, 1000004, 1000005,
  //                                          2000001, 2000002, 2000003, 2000004, 2000005}}, argv[1]);
  cout << xs << endl;
  return 0;
}
