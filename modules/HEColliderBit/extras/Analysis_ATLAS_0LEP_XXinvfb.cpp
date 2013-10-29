#include "Analysis.hpp"
#include <vector>
#include <cmath>
#include <memory>

#ifdef MKHISTOS
#include "TFile.h"
#include "TH1F.h"
#endif

namespace Gambit {
  using namespace std;


  class Analysis_ATLAS_0LEP : public Analysis {
  private:

    // Numbers passing cuts
    int _numAT, _numAM, _numAL, _numBT, _numBM,
      _numCT, _numCM, _numCL, _numD, _numET, _numEM, _numEL;

    // Debug histos
    #ifdef MKHISTOS
    unique_ptr<TFile> _f;
    unique_ptr<TH1> _njets, _nelecs, _nmuons, _jetpt_1, _jetpt_all, _meff_all, _met, _cutflow;
    #endif


  public:

    Analysis_ATLAS_0LEP() {
      _numAT = 0; _numAM = 0; _numAL = 0;
      _numBT = 0; _numBM = 0;
      _numCT = 0; _numCM = 0; _numCL = 0;
      _numD  = 0;
      _numET = 0; _numEM = 0; _numEL = 0;

      #ifdef MKHISTOS
      _f.reset( new TFile("Analysis_ATLAS_0LEP_debug.root", "RECREATE") );
      _njets.reset( new TH1F("njets", "Num jets", 21, -0.5, 20.5) );
      _nelecs.reset( new TH1F("nelecs", "Num electrons", 6, -0.5, 5.5) );
      _nmuons.reset( new TH1F("nmuons", "Num muons", 6, -0.5, 5.5) );
      _jetpt_1.reset( new TH1F("jetpt_1", "Lead jet pT", 20, 0.0, 1000.0) );
      _jetpt_all.reset( new TH1F("jetpt_all", "All jets pT", 50, 0.0, 500.0) );
      _meff_all.reset( new TH1F("meff_all", "Inclusive m_eff", 20, 0.0, 300.0) );
      _met.reset( new TH1F("met", "Missing ET", 40, 0.0, 800.0) );
      _cutflow.reset( new TH1F("cutflow", "Cut flow", 11, -0.5, 10.5) );
      #endif
    }


    void analyze(const Event* event) {
      Analysis::analyze(event);

      // Missing energy
      P4 ptot = event->missingmom();
      double met = event->met();

      // Now define vectors of baseline objects
      vector<Particle*> baselineElectrons;
      for (Particle* electron : event->electrons()) {
        if (electron->pT() > 20. && fabs(electron->eta()) < 2.47) baselineElectrons.push_back(electron);
      }
      vector<Particle*> baselineMuons;
      for (Particle* muon : event->muons()) {
        if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) baselineMuons.push_back(muon);
      }
      vector<Jet*> baselineJets;
      for (Jet* jet : event->jets()) {
        if (jet->pT() > 20. && fabs(jet->eta()) < 2.8) baselineJets.push_back(jet);
      }

      // Overlap removal
      vector<Particle*> signalElectrons;
      vector<Particle*> signalMuons;
      vector<Jet*> signalJets;

      // Remove any jet within dR=0.2 of an electrons
      for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
        bool overlap=false;
        P4 jetVec=baselineJets.at(iJet)->mom();
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          P4 elVec=baselineElectrons.at(iEl)->mom();
          if (elVec.deltaR_eta(jetVec)<0.2)overlap=true;
        }
        if (!overlap)signalJets.push_back(baselineJets.at(iJet));
      }

      // Remove electrons with dR=0.4 or surviving jets
      for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
        bool overlap=false;
        P4 elVec=baselineElectrons.at(iEl)->mom();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          P4 jetVec=signalJets.at(iJet)->mom();
          if (elVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
      }

      // Remove muons with dR=0.4 or surviving jets
      for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
        bool overlap=false;
        P4 muVec=baselineMuons.at(iMu)->mom();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          P4 jetVec=signalJets.at(iJet)->mom();
          if (muVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap)signalMuons.push_back(baselineMuons.at(iMu));
      }


      // We now have the signal electrons, muons and jets: move on to the 0 lepton 2012 analysis

      // Calculate common variables and cuts first
      int nElectrons = signalElectrons.size();
      int nMuons = signalMuons.size();
      int nJets = signalJets.size();
      #ifndef QUIET
      cout << "Number of electrons " <<  nElectrons << " Number of muons " << nMuons << " Number of jets " << nJets << endl;
      #endif

      bool leptonCut = (nElectrons == 0 && nMuons == 0);
      bool metCut = (met > 160.);
      float meff_incl = met;
      for (const Jet* j : signalJets)
        if (j->pT() > 40) meff_incl += j->pT();

      #ifdef MKHISTOS
      int NCUT = 0;
      #define FILL_CUTFLOW _cutflow->Fill(NCUT++)
      FILL_CUTFLOW;
      #else
      #define FILL_CUTFLOW {}
      #endif

      #ifdef MKHISTOS
      _njets->Fill(nJets);
      _nelecs->Fill(nElectrons);
      _nmuons->Fill(nMuons);
      _jetpt_1->Fill(signalJets[0]->pT());
      for (size_t iJet = 0; iJet < signalJets.size(); iJet++)
        _jetpt_all->Fill(signalJets[iJet]->pT());
      _met->Fill(met);
      _meff_all->Fill(meff_incl);
      #endif


      // Do 2 jet regions
      float meff2j = 0;
      float dPhiMin2j = 0;
      if (nJets > 1) {
        if (signalJets[0]->pT()>130. && signalJets[1]->pT()>60.) {
          dPhiMin2j = SmallestdPhi(signalJets,ptot.phi());
          meff2j = met + signalJets[0]->pT() + signalJets[1]->pT();
          if (leptonCut && metCut && dPhiMin2j>0.4) {
            if (met/meff2j>0.3 && meff_incl>1900.) _numAT++;
            if (met/meff2j>0.4 && meff_incl>1300.) _numAM++;
            if (met/meff2j>0.4 && meff_incl>1000.) _numAL++;
          }
          #ifdef MKHISTOS
          if (leptonCut) {
            FILL_CUTFLOW;
            if (metCut) {
              FILL_CUTFLOW;
              if (dPhiMin2j > 0.4) {
                FILL_CUTFLOW;
              }
            }
          }
          #endif
        }

      }

      // Do the 3 jet regions
      if (nJets > 2) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60.) {
          float dPhiMin3j = SmallestdPhi(signalJets,ptot.phi());
          float meff3j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT();
          if (leptonCut && metCut && dPhiMin3j > 0.4) {
            if (met/meff3j>0.25 && meff_incl>1900.) _numBT++;
            if (met/meff3j>0.3 && meff_incl>1300.) _numBM++;
          }
        }
      }

      // Do the 4 jet regions
      if (nJets > 3) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60.) {
          float dPhiMin4 = SmallestdPhi(signalJets,ptot.phi());
          float dPhiMin2 = SmallestRemainingdPhi(signalJets,ptot.phi());
          float meff4j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT();
          if (leptonCut && metCut && dPhiMin4 > 0.4 && dPhiMin2 > 0.2) {
            if (met/meff4j>0.25 && meff_incl>1900.) _numCT++;
            if (met/meff4j>0.3 && meff_incl>1300.) _numCM++;
            if (met/meff4j>0.3 && meff_incl>1000.) _numCL++;
          }
        }
      }

      // Do 5 jet region
      if (nJets > 4) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60. && signalJets.at(4)->pT()>60.) {
          float dPhiMin4 = SmallestdPhi(signalJets,ptot.phi());
          float dPhiMin2 = SmallestRemainingdPhi(signalJets,ptot.phi());
          float meff5j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT() + signalJets.at(4)->pT();
          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if (met/meff5j>0.15 && meff_incl>1700.) _numD++;
          }
        }
      }

      // Do the 6 jet regions
      if (nJets > 5) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60. && signalJets.at(4)->pT()>60. && signalJets.at(5)->pT()>60.) {
          float dPhiMin4 = SmallestdPhi(signalJets,ptot.phi());
          float dPhiMin2 = SmallestRemainingdPhi(signalJets,ptot.phi());
          float meff6j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT() + signalJets.at(4)->pT() + signalJets.at(5)->pT();
          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if (met/meff6j>0.15 && meff_incl>1400.) _numET++;
            if (met/meff6j>0.25 && meff_incl>1300.) _numEM++;
            if (met/meff6j>0.30 && meff_incl>1000.) _numEL++;
          }
        }
      }

      #ifndef QUIET
      cout << "NJETS " << signalJets.size()
           << " NELE " << signalElectrons.size()
           << " NMUO " << signalMuons.size()
           << " MET " << met
           << " MET/MEFF " << met/meff2j
           << " DPHIMIN " << dPhiMin2j
           << " MEFF " << meff_incl
           << " METPHI " << ptot.phi() << endl;
      #endif
    }


    void add(const Analysis* a) {
      const Analysis_ATLAS_0LEP* aa = dynamic_cast<const Analysis_ATLAS_0LEP*>(a);
      add_xsec(aa->xsec(), aa->xsec_err());
      const double weight = (xsec() > 0) ? aa->xsec_per_event() / xsec_per_event() : 1;
      #define ADD(NAME) NAME += weight * aa->NAME
      ADD(_numAT); ADD(_numAM); ADD(_numAL);
      ADD(_numBT); ADD(_numBM); ADD(_numCT); ADD(_numCM); ADD(_numCL);
      ADD(_numD);  ADD(_numET); ADD(_numEM); ADD(_numEL);
      #undef ADD
    }


    void finalize() {
      cout << "NUMEVENTS: " << _numAT << " " << _numAM << " " << _numAL << " "
           << _numBT << " " << _numBM << " " << _numCT << " " << _numCM << " " << _numCL << " "
           << _numD << " " << _numET << " " << _numEM << " " << _numEL << endl;

      #ifdef MKHISTOS
      cout << "Writing ROOT file" << endl;
      _f->Write();
      #endif
    }


    double loglikelihood() {
      /// @todo Implement!
      return 0;
    }


    ///////////////////


    double SmallestdPhi(std::vector<Jet*> jets,double phi_met) {
      if (jets.size()<2) return(999);
      double dphi1 = std::acos(std::cos(jets.at(0)->phi()-phi_met));
      double dphi2 = std::acos(std::cos(jets.at(1)->phi()-phi_met));
      double dphi3 = 999;
      if (jets.size() > 2 && jets[2]->pT() > 40.)
        dphi3 = std::acos(std::cos(jets[2]->phi() - phi_met));
      double min1 = std::min(dphi1, dphi2);
      return std::min(min1, dphi3);
    }

    double SmallestRemainingdPhi(const std::vector<Jet *> jets,double phi_met) {
      double remainingDPhi = 999;
      double dphiMin = 999;
      for (size_t i = 0; i < jets.size(); i++) {
        if (i > 2 && jets[i]->pT() > 40.) { //< @todo Just start the loop at i = 3?
          remainingDPhi = std::acos(std::cos((jets[i]->phi() - phi_met)));
          dphiMin = std::min(remainingDPhi, dphiMin);
        }
      }
      return dphiMin;
    }


  };



  // Factory fn
  Analysis* create_Analysis_ATLAS_0LEP() { return new Analysis_ATLAS_0LEP(); }


}
