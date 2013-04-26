#include "MCUtils.h"

#include "Pythia.h"
#include "fastjet/ClusterSequence.hh"
#include "boost/lexical_cast.hpp"
#include "omp.h"
#include "TH1F.h"
#include "TCanvas.h"
#include <cmath>

using namespace Pythia8;
using namespace fastjet;
using namespace std;


// bool fromBottom(int n, const Event& evt) {
//   const Particle& p = evt[n];
//   if (abs(p.id()) == 5 || hasBottom(p.id())) return true;
//   /// @todo What about partonic decays?
//   if (p.isParton()) return false; // stop the walking at hadron level
//   for (int m : evt.motherList(n)) {
//     if (fromBottom(m, evt)) return true;
//   }
//   return false;
// }


// bool fromTau(int n, const Event& evt) {
//   const Particle& p = evt[n];
//   if (abs(p.id()) == 15) return true;
//   if (p.isParton()) return false; // stop the walking at hadron level
//   for (int m : evt.motherList(n)) {
//     if (fromBottom(m, evt)) return true;
//   }
//   return false;
// }


bool isReplica(int n, const Event& evt) {
  const Particle& p = evt[n];
  return p.daughter1() != 0 && p.daughter1() == p.daughter2();
}


void finalDescendants(int n, const Event& evt, vector<int>& rtn) {
  const Particle& p = evt[n];
  //assert(!p.isParton());
  if (p.isParton()) cerr << "PARTON IN DESCENDANT CHAIN FROM HADRON! NUM, ID = " << n << ", " << p.id() << endl;
  for (int m : evt.daughterList(n)) {
    if (evt[m].isFinal()) {
      rtn.push_back(m);
    } else {
      finalDescendants(m, evt, rtn);
    }
  }
}


bool isFinalB(int n, const Event& evt) {
  // *This* particle must be a b or b-hadron
  if (!hasBottom(evt[n].id())) return false;
  // Daughters must *not* include a b or b-hadron
  for (int m : evt.daughterList(n)) {
    if (hasBottom(evt[m].id())) return false;
  }
  return true;
}


bool isFinalTau(int n, const Event& evt) {
  // *This* particle must be a b or b-hadron
  if (abs(evt[n].id()) != 15) return false;
  // Daughters must *not* include a tau
  for (int m : evt.daughterList(n)) {
    if (abs(evt[m].id()) == 15) return false;
  }
  return true;
}


vector<int> get_anaparticles(const Event& evt) {
  // Get the most physical b hadron and tau IDs
  vector<int> unstables;
  for (int n = 0; n < evt.size(); ++n) {
    if (isFinalB(n, evt)) unstables.push_back(n);
    if (isFinalTau(n, evt)) unstables.push_back(n);
  }
  // Identify the final state particles from those decays
  vector<int> rmparticles;
  for (int n : unstables) finalDescendants(n, evt, rmparticles);
  // Identify all final state particles, except those from b and tau decays where the parents are used
  vector<int> rtn = unstables;
  for (int n = 0; n < evt.size(); ++n) {
    if (!evt[n].isFinal()) continue;
    if (find(rmparticles.begin(), rmparticles.end(), n) == rmparticles.end()) rtn.push_back(n);
  }
  sort(rtn.begin(), rtn.end());
  return rtn;
}


int main() {

  TH1F h_met("met", "MET in GeV", 40, 0, 1000);
  TH1F h_njet("njet", "Number of jets, pT > 60 GeV", 10, -0.5, 9.5);

  const JetDefinition jet_def(antikt_algorithm, 0.4);

  size_t NTOT = 100; //00;

  #pragma omp parallel
  {
    Pythia py;
    py.readString("Beams:eCM = 8000.");
    py.readString("Main:numberOfEvents = 10000000");
    py.readString("Main:timesAllowErrors = 10000000");
    py.readString("Init:showProcesses = off");
    py.readString("Init:showMultipartonInteractions = off");
    py.readString("Init:showChangedSettings = off");
    py.readString("Init:showChangedParticleData = off");
    py.readString("Next:numberShowEvent = 0");
    py.readString("Next:numberShowInfo = 0");
    py.readString("Next:numberShowProcess = 0");
    py.readString("Random:setSeed = on");
    py.readString("Random:seed = 12345" + boost::lexical_cast<string>(17 * omp_get_thread_num()));

    // py.readString("HardQCD:all = on");
    // py.readString("PhaseSpace:pTHatMin = 20.");

    py.readString("HardQCD:gg2bbbar = on");

    // py.readString("SUSY:qg2squarkgluino = on");
    // py.readString("SLHA:file = cmssm.spc");

    // py.readString("WeakSingleBoson:ffbar2gmZ = on");
    // py.readString("23:onMode = off");
    // py.readString("23:onIfAny = 11");
    // py.readString("PhaseSpace:mHatMin = 50.");
    // py.readString("PhaseSpace:mHatMax = 120.");

    py.readString("PartonLevel:MPI = off");
    // py.readString("PartonLevel:ISR = off");
    py.readString("PartonLevel:FSR = off");
    // py.readString("HadronLevel:all = off");

    py.init();

    for (size_t i = 0; i < NTOT/omp_get_num_threads(); ++i) {
      if (!py.next()) continue;
      // cout << py.event.size() << endl;

      vector<int> anaparticles = get_anaparticles(py.event);
      //for (auto n : anaparticles) cout << n << "=" << py.event[n].id() << " "; cout << endl << endl;

      Vec4 ptot;
      vector<PseudoJet> jetparticles;

      for (int ip = 0; ip < py.event.size(); ++ip) {
        const Particle& p = py.event[ip];
        if (!p.isFinal()) continue;
        //cout << p.name() << endl;
        if (p.id() == 12 || p.id() == 14 || p.id() == 16) continue; // neutrinos
        if (p.id() == 1000022) continue; // LSP

        // Update total visible momentum
        ptot += p.p();

        // Choose jet constituents (should include neutrinos for ATLAS?)
        jetparticles.push_back( vec4_to_pseudojet(p.p()) );
      }

      const double met = ptot.pT();
      h_met.Fill(met);

      ClusterSequence cseq(jetparticles, jet_def);
      vector<PseudoJet> jets = sorted_by_pt(cseq.inclusive_jets(60));
      h_njet.Fill(jets.size());
      if (jets.size() > 1) {
        //cout << deltaPhi(pseudojet_to_vec4(jets[0]), pseudojet_to_vec4(jets[1])) << endl;
      }
    }
  }

  TCanvas c;
  h_met.Draw();
  // h_met1.Draw("same");
  // h_met1.SetLineColor(kRed);
  // h_met2.Draw("same");
  // h_met2.SetLineColor(kGreen);
  // h_met5.Draw("same");
  // h_met5.SetLineColor(kBlack);
  c.SaveAs("met.pdf");
  h_njet.Draw();
  c.SaveAs("njet.pdf");
  return 0;
}
