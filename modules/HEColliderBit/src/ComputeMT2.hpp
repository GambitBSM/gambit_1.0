#include <iostream>

class ComputeMT2 {
 public:
  ComputeMT2(P4 visa, P4 visb, P4 MET, double ma, double mb, P4 Up = P4(1.,1.,1.,-1.));
  ~ComputeMT2();
  double ComputeNumeric() const;
  double ComputeAnalytic() const;
  P4 perpify(P4 V, P4 U);
 private:
  P4 V1;
  P4 V2;
  P4 ET;
  P4 U;
  double Ma;
  double Mb;
};
