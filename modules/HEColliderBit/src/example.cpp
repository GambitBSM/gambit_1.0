#include "fastsim.hpp"

#include <stdio.h>

int main () {

 FastSim  A;

 A.InitSimulation(ACERDET);

 vector<Particle*> list;


 Particle *P = new Particle(10.0,10.0,10.0,17.320826,13);
 Particle *P2 = new Particle(10.0,10.0,10.0,17.320826,13);

 printf("p %lf %lf\n",P->mom().p2(),(17.320826)*(17.320826) - P->mom().p2());

 list.push_back(P);
 list.push_back(P2);


 A.SetMuons(list);

 printf("number of muons %d\n",A.NMuons());
 A.PrintMuons();

 A.MuonResponse();

 printf("number of muons %d\n",A.NMuons());

 A.PrintMuons();

 // lets clean the memory
 for (int i=0;i<list.size();i++) {
   delete(list[i]);
   list.erase(list.begin());
 }

}
