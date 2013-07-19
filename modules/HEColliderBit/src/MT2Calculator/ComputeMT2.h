#include <iostream>
#include "TLorentzVector.h"

class ComputeMT2 {
 public:
  ComputeMT2(TLorentzVector visa, TLorentzVector visb, TLorentzVector MET, double ma, double mb, TLorentzVector Up = TLorentzVector(1.,1.,1.,-1.));
  ~ComputeMT2();
  double ComputeNumeric() const;
  double ComputeAnalytic() const;
  TLorentzVector perpify(TLorentzVector V, TLorentzVector U);
 private:
  TLorentzVector V1;
  TLorentzVector V2;
  TLorentzVector ET;
  TLorentzVector U;
  double Ma;
  double Mb;
};
