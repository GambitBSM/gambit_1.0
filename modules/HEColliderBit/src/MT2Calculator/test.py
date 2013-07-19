from ROOT import TMinuit
from ROOT import gSystem
from ROOT import *

gSystem.Load("libBinnedLik.so")

#stuff = ComputeMT2(Visa,Visb,MET,Ma,Mb,Up) <-Up is optional.
#stuff.ComputeNumeric() <- this compute MT2 numerically.  You must do this if you don't project against the upstream.
#stuff.ComputeAnalytic() <- this is analytic.  Only valid if the upstream momentum is zero [which is true if you project against it!]

#Instructions on what you should set as the visible particles, test masses, etc.

#Symmetric MT2 - MT2(2,2,1)
#  Visa = bjet1
#  Visb = bjet2
#  Ma = 80.
#  Mb = 80.
#  MET = ETmiss + lepton
#  (Up = -ETmiss - lepton - bjet1 - bjet2

#MT2 tau- MT2(2,1,0)
#  Visa = jet3 (tau jet candidate - I've been taking either the third highest pT jet or the highest pT jet after the two highest MV1 jets)
#  Visb = electron
#  Ma = 0.
#  Mb = 0.
#  MET= ETmiss
#  (Up= -ETmiss - lepton - jet3

#Assymetric MT2
#  Visa = bjet1 + electron (either have a way of doing this matching, or compute both ways and take the smaller MT2 value)
#  Visb = bjet2
#  Ma = 0.
#  Mb = 80.
#  MET= ETmiss 
#  (Up= -ETmiss - lepton - bjet1 - bjet2

Visa = TLorentzVector( 17.6496 , -59.3427 , 4.96999 , 168.795)
Visb = TLorentzVector( 35.3298 , 54.6915 , -8.45409 , 66.4121)
MET = TLorentzVector( -35.2052 , -17.6621 , -6.00919 , 75.5295)
up = TLorentzVector( -17.7742 ,22.3134 ,9.49329, -310.737)

#The vectors below are already projected
Visap = TLorentzVector( -18.1222 , -14.4356 , 0 , 158.653)
Visbp = TLorentzVector( 48.2681 , 38.449 , 0 , 62.513)
METp = TLorentzVector( -30.1459 , -24.0134 , 0 , 74.8509)

#If you don't want to project, setup the class like this.
stuff = ComputeMT2(Visap,Visbp,METp,0.,80.)
print stuff.ComputeNumeric()
print stuff.ComputeAnalytic()
#MT2 = 156.952

#If you do want to project, place the vector to project against as the last argument.
stuff = ComputeMT2(Visa,Visb,MET,0.,80.,up)
print stuff.ComputeNumeric()
print stuff.ComputeAnalytic()
#MT2 = 156.952


