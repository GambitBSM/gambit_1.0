#include <iostream>
#include "TLorentzVector.h"

//stuff = ComputeMT2(Visa,Visb,MET,Ma,Mb,Up) <-Up is optional.
//stuff.ComputeNumeric()<- thiscomputeMT2 numerically.  You must do this if you don'tprojectagainstthe upstream.
//stuff.ComputeAnalytic() <- this is analytic.  Only valid if the upstream momentum is zero [which is true if you project against it!]

//Instructions on what you should set as the visible particles, test masses, etc.

//Symmetric MT2 - MT2(2,2,1)
//  Visa = bjet1
//  Visb = bjet2
//  Ma = 80.
//  Mb = 80.
//  MET = ETmiss + lepton
//  (Up = -ETmiss - lepton - bjet1 - bjet2

//MT2 tau- MT2(2,1,0)
//  Visa = jet3 (tau jet candidate - I've been taking either the third highest pT jet or the highest pT jet after the two highest MV1 jets)
//  Visb = electron
//  Ma = 0.
//  Mb = 0.
//  MET= ETmiss
//  (Up= -ETmiss - lepton - jet3

//Assymetric MT2
//  Visa = bjet1 + electron (either have a way of doing this matching, or compute both ways and take the smaller MT2 value)
//  Visb = bjet2
//  Ma = 0.
//  Mb = 80.
//  MET= ETmiss
//  (Up= -ETmiss - lepton - bjet1 - bjet2

void test() {
  // load library
  gSystem->Load("libBinnedLik.so");

  TLorentzVector Visa = TLorentzVector( 17.6496 , -59.3427 , 4.96999 , 168.795);
  TLorentzVector Visb = TLorentzVector( 35.3298 , 54.6915 , -8.45409 , 66.4121);
  TLorentzVector MET = TLorentzVector( -35.2052 , -17.6621 , -6.00919 , 75.5295);
  TLorentzVector up = TLorentzVector( -17.7742 ,22.3134 ,9.49329, -310.737);

  //The vectors below are already projected
  TLorentzVector Visap = TLorentzVector( -18.1222 , -14.4356 , 0 , 158.653);
  TLorentzVector Visbp = TLorentzVector( 48.2681 , 38.449 , 0 , 62.513);
  TLorentzVector METp = TLorentzVector( -30.1459 , -24.0134 , 0 , 74.8509);

  //If you don't want to project, setup the class like this.
  ComputeMT2 stuff = ComputeMT2(Visap,Visbp,METp,0.,80.);
  std::cout << stuff.ComputeNumeric() << std::endl;
  std::cout << stuff.ComputeAnalytic() << std::endl;
  //MT2 = 156.952

  //If youdo wantto project, place the vector to projectagainst as the last argument.
  ComputeMT2 stuff = ComputeMT2(Visa,Visb,MET,0.,80.,up);
  std::cout << stuff.ComputeNumeric() << std::endl;
  std::cout << stuff.ComputeAnalytic() << std::endl;
  //MT2 = 156.952

}
