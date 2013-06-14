#include "FastSim.hpp"
#include <iostream>


int main () {

  FastSim sim;
  sim.init(ACERDET);

  /// @todo This new'ing is silly... can we rework FastSim to use references?
  GAMBIT::Particle* p = new GAMBIT::Particle(10.0, 10.0, 10.0, 17.320826, 13);
  GAMBIT::Particle* p2 = new GAMBIT::Particle(10.0, 10.0, 10.0, 17.320826, 13);

  /// @todo Why not p->mom().m2() in the second case?
  cout << "p " << p->mom().p2() << ", " << p->mom().E2() - p->mom().p2() << endl;

  vector<GAMBIT::Particle*> list;
  list.push_back(p);
  list.push_back(p2);
  sim.setMuons(list);

  cout << "Number of muons = " << sim.NMuons() << endl;
  sim.printMuons();

  sim.MuonResponse();

  cout << "Number of muons = " << sim.NMuons() << endl;
  sim.printMuons();

  // Memory clean-up, thanks to the heap allocation...
  for (size_t i = 0; i < list.size(); ++i) delete list[i];

}
