#include "xsec.h"
#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char* argv[]) {
  assert(argc = 2 && "Usage: eval_xsec <slhafile>");
  xsec::Evaluator ev;
  const double xs = ev.xsec({{1000021}}, {{1000001, 1000002, 1000003, 1000004, 1000005}}, argv[1]);
  cout << xs << endl;
  return 0;
}
