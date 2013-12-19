// Gambit
#include "MCUtils.hpp"

// External
#include "Pythia8/Pythia.h"
#include "fastjet/ClusterSequence.hh"
#include "boost/lexical_cast.hpp"
#include "omp.h"
#include "TH1F.h"
#include "TCanvas.h"

namespace GHEC = Gambit::HEColliderBit;
using namespace Pythia8;
using namespace fastjet;
using namespace std;


int main() {

  TH1F h_met("met", "MET in GeV", 40, 0, 1000);
  TH1F h_njet("njet", "Number of jets, pT > 60 GeV", 10, -0.5, 9.5);

  const JetDefinition jet_def(antikt_algorithm, 0.4);

  size_t NTOT = 10000;

  int numAT(0), numAM(0), numAL(0),
    numBT(0), numBM(0),
    numCT(0), numCM(0), numCL(0),
    numD(0),
    numET(0), numEM(0), numEL(0);

  #pragma omp parallel
  {
    Pythia8::Pythia py;
    Pythia8::Settings& pycfg = py.settings;
    pycfg.parm("Beams:eCM", 8000);
    pycfg.mode("Main:numberOfEvents", 1000);
    pycfg.mode("Main:timesAllowErrors", 1000);
    pycfg.flag("Init:showProcesses", false);
    pycfg.flag("Init:showMultipartonInteractions", false);
    pycfg.flag("Init:showChangedSettings", false);
    pycfg.flag("Init:showChangedParticleData", false);
    pycfg.mode("Next:numberShowEvent", 0);
    pycfg.mode("Next:numberShowInfo", 0);
    pycfg.mode("Next:numberShowProcess", 0);
    pycfg.flag("Random:setSeed", true);
    pycfg.mode("Random:seed", 12345 + 17 * omp_get_thread_num());

    pycfg.flag("PartonLevel:MPI", false);
    // pycfg.flag("PartonLevel:ISR", false);
    pycfg.flag("PartonLevel:FSR", false);
    pycfg.flag("HadronLevel:all", false);

    // pycfg.flag("HardQCD:all", true);
    // pycfg.parm("PhaseSpace:pTHatMin", 20);

    // pycfg.flag("HardQCD:gg2bbbar", true);

    // pycfg.flag("SUSY:qg2squarkgluino", true);
    pycfg.flag("SUSY:all", true);
    pycfg.word("SLHA:file", "../data/sps1aWithDecays.spc");

    // pycfg.flag("WeakSingleBoson:ffbar2gmZ", true);
    // pycfg.flag("23:onMode", false);
    // pycfg.mode("23:onIfAny", 11);
    // pycfg.parm("PhaseSpace:mHatMin", 50.);
    // pycfg.parm("PhaseSpace:mHatMax", 120.);

    py.init();

    for (size_t i = 0; i < NTOT/omp_get_num_threads(); ++i) {
      if (!py.next()) continue;
      // cout << py.event.size() << endl;

      // vector<int> anaparticles = get_anaparticles(py.event);
      // for (auto n : anaparticles) cout << n << "=" << py.event[n].id() << " "; cout << endl << endl;

      Vec4 ptot;
      vector<PseudoJet> jetparticles;
      vector<Pythia8::Particle> electrons, muons;

      for (int ip = 0; ip < py.event.size(); ++ip) {
        const Pythia8::Particle& p = py.event[ip];
        if (!p.isFinal()) continue;
        // cout << p.name() << endl;
        if (p.id() == 12 || p.id() == 14 || p.id() == 16) continue; // exclude neutrinos
        if (p.id() == 1000022) continue; // exclude LSP

        // Update total visible momentum
        ptot += p.p();

        // Choose jet constituents (should include neutrinos for ATLAS?)
        jetparticles.push_back( GHEC::vec4_to_pseudojet(p.p()) );

        // Identify final state electrons and muons
        /// @todo Need to determine if these are prompt: e/mu from hadron decays are not of interest
        if (abs(p.id()) == 11) electrons.push_back(p);
        if (abs(p.id()) == 13) muons.push_back(p);
      }

      const double met = ptot.pT();
      h_met.Fill(met);

      ClusterSequence cseq(jetparticles, jet_def);
      vector<PseudoJet> jets = sorted_by_pt(cseq.inclusive_jets(60));
      /// @todo Need to do e/gamma jet overlap removal... and remove prompt taus and muons
      h_njet.Fill(jets.size());
      // if (jets.size() > 1) cout << deltaPhi(GHEC::pseudojet_to_vec4(jets[0]), GHEC::pseudojet_to_vec4(jets[1])) << endl;


      // Now define vectors of baseline objects
      vector<Pythia8::Particle> baselineElectrons;
      vector<Pythia8::Particle> baselineMuons;
      vector<PseudoJet> baselineJets;

      for (size_t iEl=0;iEl<electrons.size();iEl++) {
        Pythia8::Particle electron=electrons.at(iEl);
        if (electron.pT()>20.&&fabs(electron.eta())<2.47)baselineElectrons.push_back(electron);
      }

      for (size_t iMu=0;iMu<muons.size();iMu++) {
        Pythia8::Particle muon=muons.at(iMu);
        if (muon.pT()>10.&&fabs(muon.eta())<2.4)baselineMuons.push_back(muon);
      }

      for (size_t iJet=0;iJet<jets.size();iJet++) {
        PseudoJet jet=jets.at(iJet);
        if (jet.pt()>20.&&fabs(jet.eta())<2.8)baselineJets.push_back(jet);
      }

      //Overlap removal
      vector<Pythia8::Particle> signalElectrons;
      vector<Pythia8::Particle> signalMuons;
      vector<PseudoJet> signalJets;

      //Remove any jet within dR=0.2 of an electrons
      for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
        bool overlap=false;
        Vec4 jetVec=GHEC::pseudojet_to_vec4(baselineJets.at(iJet));
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          Vec4 elVec=baselineElectrons.at(iEl).p();
          if (GHEC::deltaR(elVec,jetVec)<0.2)overlap=true;
        }
        if (!overlap)signalJets.push_back(baselineJets.at(iJet));
      }

      //Remove electrons with dR=0.4 or surviving jets
      for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
        bool overlap=false;
        Vec4 elVec=baselineElectrons.at(iEl).p();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          Vec4 jetVec=GHEC::pseudojet_to_vec4(signalJets.at(iJet));
          if (GHEC::deltaR(elVec,jetVec)<0.4)overlap=true;
        }
        if (!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
      }

      //Remove muons with dR=0.4 or surviving jets
      for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
        bool overlap=false;
        Vec4 muVec=baselineMuons.at(iMu).p();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          Vec4 jetVec=GHEC::pseudojet_to_vec4(signalJets.at(iJet));
          if (GHEC::deltaR(muVec,jetVec)<0.4)overlap=true;
        }
        if (!overlap)signalMuons.push_back(baselineMuons.at(iMu));
      }

      //We now have the signal electrons, muons and jets
      //Let's move on to the 0 lepton 2012 analysis

      //Calculate common variables and cuts first
      int nElectrons=signalElectrons.size();
      int nMuons=signalMuons.size();
      int nJets=signalJets.size();
      bool leptonCut=false;
      if (nElectrons==0 && nMuons==0)leptonCut=true;

      bool metCut=false;
      if (met>160.)metCut=true;

      float meff_incl=0;
      for (size_t iJet=0;iJet<signalJets.size();iJet++) {
        if (signalJets.at(iJet).pt()>40.)meff_incl+=signalJets.at(iJet).pt();
      }

      meff_incl+=met;


      /// @todo Argh, these regions overlap but the same vectors are re-constructed N times for each >M jets selection!!!


      // Do 2 jet regions

      if (nJets>1) {
        if (signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60.) {

          float dPhiMin=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            if (numJets>1)break;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin) {
              dPhiMin=dphi;
              numJets+=1;
            }
          }

          float meff2j=met + signalJets.at(0).pt() + signalJets.at(1).pt();
          if (leptonCut && metCut && dPhiMin>0.4) {
            if ((met/meff2j)>0.3 && meff_incl>1900.)numAT++;
            if ((met/meff2j)>0.4 && meff_incl>1300.)numAM++;
            if ((met/meff2j)>0.4 && meff_incl>1000.)numAL++;
          }
        }

      }

      //Do the 3 jet regions
      if (nJets>2) {
        if (signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60.) {
          float dPhiMin=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            if (numJets>2)break;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin) {
              dPhiMin=dphi;
              numJets+=1;
            }
          }

          float meff3j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt();
          if (leptonCut && metCut && dPhiMin>0.4) {
            if ((met/meff3j)>0.25 && meff_incl>1900.)numBT++;
            if ((met/meff3j)>0.3 && meff_incl>1300.)numBM++;
          }

        }
      }

      //Do the 4 jet regions
      if (nJets>3) {
        if (signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60. && signalJets.at(3).pt()>60.) {
          float dPhiMin4=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            if (numJets>3)break;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin4) {
              dPhiMin4=dphi;
              numJets+=1;
            }
          }

          float dPhiMin2=9999;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin2) {
              dPhiMin2=dphi;
            }
          }

          float meff4j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt() + signalJets.at(3).pt();

          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if ((met/meff4j)>0.25 && meff_incl>1900.)numCT++;
            if ((met/meff4j)>0.3 && meff_incl>1300.)numCM++;
            if ((met/meff4j)>0.3 && meff_incl>1000.)numCL++;
          }
        }
      }

      //Do 5 jet region
      if (nJets>4) {
        if (signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60. && signalJets.at(3).pt()>60. && signalJets.at(4).pt()>60.) {


          float dPhiMin4=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            if (numJets>3)break;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin4) {
              dPhiMin4=dphi;
              numJets+=1;
            }
          }

          float dPhiMin2=9999;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin2) {
              dPhiMin2=dphi;
            }
          }

          float meff5j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt() + signalJets.at(3).pt() + signalJets.at(4).pt();

          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if ((met/meff5j)>0.15 && meff_incl>1700.)numD++;
          }
        }
      }

      //Do the 6 jet regions
      if (nJets>5) {
        if (signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60. && signalJets.at(3).pt()>60. && signalJets.at(4).pt()>60. && signalJets.at(5).pt()>60.) {


          float dPhiMin4=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            if (numJets>3)break;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin4) {
              dPhiMin4=dphi;
              numJets+=1;
            }
          }

          float dPhiMin2=9999;
          for (int iJet=0;iJet<nJets;iJet++) {
            PseudoJet jet=signalJets.at(iJet);
            Vec4 jetVec=GHEC::pseudojet_to_vec4(jet);
            if (jet.pt()<40.) continue;
            float dphi=GHEC::deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin2) {
              dPhiMin2=dphi;
            }
          }

          float meff6j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt() + signalJets.at(3).pt() + signalJets.at(4).pt() + signalJets.at(5).pt();

          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if ((met/meff6j)>0.15 && meff_incl>1400.)numET++;
            if ((met/meff6j)>0.25 && meff_incl>1300.)numEM++;
            if ((met/meff6j)>0.30 && meff_incl>1000.)numEL++;
          }
        }
      }

    }
  }

  cout << "NUMEVENTS " << numAT << " " << numAM << " " << numAL << " " << numBT << " " << numBM << " " << numCT << " " << numCM << " " << numCL << " " << numD << " " << numET << " " << numEM << " " << numEL << endl;

  // TCanvas c;
  // h_met.Draw();
  // // h_met1.Draw("same");
  // // h_met1.SetLineColor(kRed);
  // // h_met2.Draw("same");
  // // h_met2.SetLineColor(kGreen);
  // // h_met5.Draw("same");
  // // h_met5.SetLineColor(kBlack);
  // c.SaveAs("met.pdf");
  // h_njet.Draw();
  // c.SaveAs("njet.pdf");

  return 0;
}
