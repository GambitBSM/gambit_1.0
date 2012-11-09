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


inline PseudoJet vec4_to_pseudojet(const Vec4& p) {
  return PseudoJet(p.px(), p.py(), p.pz(), p.e());
}

inline Vec4 pseudojet_to_vec4(const PseudoJet& p) {
  Vec4 rtn;
  rtn.p(p.px(), p.py(), p.pz(), p.e());
  return rtn;
}

double eta(const Vec4& p) {
  return -log(tan( 0.5 * p.theta() ));
}

inline double deltaPhi(const Vec4& a, const Vec4& b) {
  double rtn = a.phi() - b.phi();
  //cout << "A" << rtn << endl;
  rtn = fmod(rtn, 2*M_PI);
  if (rtn == 0) return 0;
  assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
  rtn = (rtn >   M_PI ? rtn-2*M_PI :
         rtn <= -M_PI ? rtn+2*M_PI : rtn);
  assert(rtn > -M_PI && rtn <= M_PI);
  if (rtn < 0) rtn += M_PI;
  //cout << "B" << rtn << endl;
  assert(rtn > 0 && rtn <= M_PI);
  return rtn;
}

inline double deltaR(const Vec4& a, const Vec4& b) {
  const double deta = fabs(eta(a) - eta(b));
  const double dphi = deltaPhi(a, b);
  return deta*deta + dphi*dphi;
}


int main() {

  TH1F h_met0("met0", "MET in GeV", 40, 0, 1000);
  TH1F h_met1("met1", "MET in GeV", 40, 0, 1000);
  TH1F h_met2("met2", "MET in GeV", 40, 0, 1000);
  TH1F h_met5("met5", "MET in GeV", 40, 0, 1000);
  TH1F h_njet("njet", "Number of jets, pT > 60 GeV", 10, -0.5, 9.5);

  const JetDefinition jet_def(antikt_algorithm, 0.4);

  size_t NTOT = 10000;

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

    // py.readString("SUSY:qg2squarkgluino = on");
    // py.readString("SLHA:file = cmssm.spc");

    py.readString("WeakSingleBoson:ffbar2gmZ = on");
    py.readString("23:onMode = off");
    py.readString("23:onIfAny = 11");
    py.readString("PhaseSpace:mHatMin = 50.");
    py.readString("PhaseSpace:mHatMax = 120.");

    py.readString("PartonLevel:MPI = off");
    // py.readString("PartonLevel:ISR = off");
    py.readString("PartonLevel:FSR = off");
    py.readString("HadronLevel:all = off");

    py.init();

    for (size_t i = 0; i < NTOT/omp_get_num_threads(); ++i) {
      if (!py.next()) continue;
      // cout << py.event.size() << endl;

      Vec4 ptot0, ptot1, ptot2, ptot5;
      vector<PseudoJet> jetparticles;

      for (int ip = 0; ip < py.event.size(); ++ip) {
        const Particle& p = py.event[ip];
        if (!p.isFinal()) continue;
        cout << p.name() << endl;
        if (p.id() == 12 || p.id() == 14 || p.id() == 16) continue; // neutrinos
        if (p.id() == 1000022) continue; // LSP

        if (p.id() != 22 || p.pT() > 0) ptot0 += p.p();
        if (p.id() != 22 || p.pT() > 1) ptot1 += p.p();
        if (p.id() != 22 || p.pT() > 2) ptot2 += p.p();
        if (p.id() != 22 || p.pT() > 5) ptot5 += p.p();

        jetparticles.push_back( vec4_to_pseudojet(p.p()) );
      }

      const double met = ptot0.pT();
      h_met0.Fill(ptot0.pT());
      h_met1.Fill(ptot1.pT());
      h_met2.Fill(ptot2.pT());
      h_met5.Fill(ptot5.pT());

      ClusterSequence cseq(jetparticles, jet_def);
      vector<PseudoJet> jets = sorted_by_pt(cseq.inclusive_jets(60));
      h_njet.Fill(jets.size());
      if (jets.size() > 1) {
        cout << deltaPhi(pseudojet_to_vec4(jets[0]), pseudojet_to_vec4(jets[1])) << endl;
      }
    }
  }

  TCanvas c;
  h_met0.Draw();
  h_met1.Draw("same");
  h_met1.SetLineColor(kRed);
  h_met2.Draw("same");
  h_met2.SetLineColor(kGreen);
  h_met5.Draw("same");
  h_met5.SetLineColor(kBlack);
  c.SaveAs("met.pdf");
  h_njet.Draw();
  c.SaveAs("njet.pdf");
  return 0;
}
