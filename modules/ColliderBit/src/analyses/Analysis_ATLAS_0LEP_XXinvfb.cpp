#include <vector>
#include <cmath>
#include <memory>

#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"

/// @todo ditch ROOT classes
#ifdef MKHISTOS
  #include <TFile.h>
  #include <TH1F.h>
#endif

using namespace std;


// Based on ATLAS-CONF-2013-047

namespace Gambit {
  namespace ColliderBit {

    /// Rename as Analysis_ATLAS_0LEP_XXinvfb when lumi known
    class Analysis_ATLAS_0LEP : public HEPUtilsAnalysis {
    private:

      // Numbers passing cuts
      double _numAM, _numAL, _numBT, _numBM,
        _numCT, _numCM, _numD, _numET, _numEM, _numEL;

      // Debug histos
      #ifdef MKHISTOS
      unique_ptr<TFile> _f;
      unique_ptr<TH1> _njets, _nelecs, _nmuons, _jetpt_1, _jetpt_all, _meff_all, _met, _cutflow;
      #endif


    public:

      Analysis_ATLAS_0LEP() {
        _numAM = 0; _numAL = 0;
        _numBT = 0; _numBM = 0;
        _numCT = 0; _numCM = 0;
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


      void analyze(const HEPUtils::Event* event) {
        HEPUtilsAnalysis::analyze(event);

        // Missing energy
        HEPUtils::P4 ptot = event->missingmom();
        double met = event->met();

        // Now define vectors of baseline objects
        vector<HEPUtils::Particle*> baselineElectrons;
        for (HEPUtils::Particle* electron : event->electrons()) {
          if (electron->pT() > 10. && fabs(electron->eta()) < 2.47) baselineElectrons.push_back(electron);
        }
        vector<HEPUtils::Particle*> baselineMuons;
        for (HEPUtils::Particle* muon : event->muons()) {
          if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) baselineMuons.push_back(muon);
        }
        vector<HEPUtils::Jet*> baselineJets;
        for (HEPUtils::Jet* jet : event->jets()) {
          if (jet->pT() > 20. && fabs(jet->eta()) < 2.8) baselineJets.push_back(jet);
        }

        // Overlap removal
        vector<HEPUtils::Particle*> signalElectrons;
        vector<HEPUtils::Particle*> signalMuons;
        vector<HEPUtils::Jet*> signalJets;

        // Remove any jet within dR=0.2 of an electrons
        for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
          bool overlap=false;
          HEPUtils::P4 jetVec=baselineJets.at(iJet)->mom();
          for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
            HEPUtils::P4 elVec=baselineElectrons.at(iEl)->mom();
            if (elVec.deltaR_eta(jetVec)<0.2)overlap=true;
          }
          if (!overlap)signalJets.push_back(baselineJets.at(iJet));
        }

        // Remove electrons with dR=0.4 or surviving jets
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          bool overlap=false;
          HEPUtils::P4 elVec=baselineElectrons.at(iEl)->mom();
          for (size_t iJet=0;iJet<signalJets.size();iJet++) {
            HEPUtils::P4 jetVec=signalJets.at(iJet)->mom();
            if (elVec.deltaR_eta(jetVec)<0.4)overlap=true;
          }
          if (!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
        }

        // Remove muons with dR=0.4 or surviving jets
        for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
          bool overlap=false;
          HEPUtils::P4 muVec=baselineMuons.at(iMu)->mom();
          for (size_t iJet=0;iJet<signalJets.size();iJet++) {
            HEPUtils::P4 jetVec=signalJets.at(iJet)->mom();
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
        double meff_incl = met;
        double HT=0;
        for (const HEPUtils::Jet* j : signalJets)
          if (j->pT() > 40) {
            meff_incl += j->pT();
            HT  += j->pT();
          }

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
        double meff2j = 0;
        double dPhiMin2j = 0;
        if (nJets > 1) {
          if (signalJets[0]->pT()>130. && signalJets[1]->pT()>60.) {
            dPhiMin2j = SmallestdPhi(signalJets,ptot.phi());
            meff2j = met + signalJets[0]->pT() + signalJets[1]->pT();
            if (leptonCut && metCut && dPhiMin2j>0.4) {
              if (met/sqrt(HT)>15. && meff_incl>1600.) _numAM += 1;
              if (met/meff2j>0.2 && meff_incl>1000.) _numAL += 1;
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
            double dPhiMin3j = SmallestdPhi(signalJets,ptot.phi());
            double meff3j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT();
            if (leptonCut && metCut && dPhiMin3j > 0.4) {
              if (met/meff3j>0.4 && meff_incl>2200.) _numBT += 1;
              if (met/meff3j>0.3 && meff_incl>1800.) _numBM += 1;
            }
          }
        }

        // Do the 4 jet regions
        if (nJets > 3) {
          if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60.) {
            double dPhiMin4 = SmallestdPhi(signalJets,ptot.phi());
            double dPhiMin2 = SmallestRemainingdPhi(signalJets,ptot.phi());
            double meff4j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT();
            if (leptonCut && metCut && dPhiMin4 > 0.4 && dPhiMin2 > 0.2) {
              if (met/meff4j>0.25 && meff_incl>2200.) _numCT += 1;
              if (met/meff4j>0.25 && meff_incl>1200.) _numCM += 1;
            }
          }
        }

        // Do 5 jet region
        if (nJets > 4) {
          if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60. && signalJets.at(4)->pT()>60.) {
            double dPhiMin4 = SmallestdPhi(signalJets,ptot.phi());
            double dPhiMin2 = SmallestRemainingdPhi(signalJets,ptot.phi());
            double meff5j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT() + signalJets.at(4)->pT();
            if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
              if (met/meff5j>0.2 && meff_incl>1600.) _numD += 1;
            }
          }
        }

        // Do the 6 jet regions
        if (nJets > 5) {
          if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60. && signalJets.at(4)->pT()>60. && signalJets.at(5)->pT()>60.) {
            double dPhiMin4 = SmallestdPhi(signalJets,ptot.phi());
            double dPhiMin2 = SmallestRemainingdPhi(signalJets,ptot.phi());
            double meff6j = met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT() + signalJets.at(4)->pT() + signalJets.at(5)->pT();
            if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
              if (met/meff6j>0.25 && meff_incl>1500.) _numET += 1;
              if (met/meff6j>0.2 && meff_incl>1200.) _numEM += 1;
              if (met/meff6j>0.15 && meff_incl>1000.) _numEL += 1;
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


      void add(const HEPUtilsAnalysis* a) {
        const Analysis_ATLAS_0LEP* aa = dynamic_cast<const Analysis_ATLAS_0LEP*>(a);
        add_xsec(aa->xsec(), aa->xsec_err());
        // double tmp = _numAT;
        const double weight = (xsec() > 0) ? aa->xsec_per_event() / xsec_per_event() : 1;
        #define ADD(NAME) NAME += weight * aa->NAME
        ADD(_numAM); ADD(_numAL);
        ADD(_numBT); ADD(_numBM); ADD(_numCT); ADD(_numCM);
        ADD(_numD);  ADD(_numET); ADD(_numEM); ADD(_numEL);
        #undef ADD
        // cout << tmp << " -> " << _numAT << endl;
      }

      void finalize() {
        cout << "NUMEVENTS: " << _numAM << " " << _numAL << " "
             << _numBT << " " << _numBM << " " << _numCT << " " << _numCM << " " << " "
             << _numD << " " << _numET << " " << _numEM << " " << _numEL << endl;

        #ifdef MKHISTOS
        cout << "Writing ROOT file" << endl;
        _f->Write();
        #endif
      }

      void collect_results() {
        /// @todo Implement!

        cout << "NUMEVENTS: " << _numAM << " " << _numAL << " "
             << _numBT << " " << _numBM << " " << _numCT << " " << _numCM << " " << " "
             << _numD << " " << _numET << " " << _numEM << " " << _numEL << endl;

        //Now fill a results object with the results for each SR
        //Numbers are taken from CONF note
        SignalRegionData results_AL;
        results_AL.set_observation(5333.);
        results_AL.set_background(4700.);
        results_AL.set_backgroundsys(500.);
        results_AL.set_signalsys(0.);
        results_AL.set_signal(_numAL);

        SignalRegionData results_AM;
        results_AM.set_observation(135.);
        results_AM.set_background(122.);
        results_AM.set_backgroundsys(18.);
        results_AM.set_signalsys(0.);
        results_AM.set_signal(_numAM);

        SignalRegionData results_BM;
        results_BM.set_observation(29.);
        results_BM.set_background(33.);
        results_BM.set_backgroundsys(7.);
        results_BM.set_signalsys(0.);
        results_BM.set_signal(_numBM);

        SignalRegionData results_BT;
        results_BT.set_observation(4.);
        results_BT.set_background(2.4);
        results_BT.set_backgroundsys(1.4);
        results_BT.set_signalsys(0.);
        results_BT.set_signal(_numBT);

        SignalRegionData results_CM;
        results_CM.set_observation(228.);
        results_CM.set_background(210.);
        results_CM.set_backgroundsys(40.);
        results_CM.set_signalsys(0.);
        results_CM.set_signal(_numCM);

        SignalRegionData results_CT;
        results_CT.set_observation(0.);
        results_CT.set_background(1.6);
        results_CT.set_backgroundsys(1.4);
        results_CT.set_signalsys(0.);
        results_CT.set_signal(_numCT);

        SignalRegionData results_D;
        results_D.set_observation(18.);
        results_D.set_background(15.);
        results_D.set_backgroundsys(5.);
        results_D.set_signalsys(0.);
        results_D.set_signal(_numD);

        SignalRegionData results_EL;
        results_EL.set_observation(166.);
        results_EL.set_background(113.);
        results_EL.set_backgroundsys(21.);
        results_EL.set_signalsys(0.);
        results_EL.set_signal(_numEL);

        SignalRegionData results_EM;
        results_EM.set_observation(41.);
        results_EM.set_background(30.);
        results_EM.set_backgroundsys(8.);
        results_EM.set_signalsys(0.);
        results_EM.set_signal(_numEM);

        SignalRegionData results_ET;
        results_ET.set_observation(5.);
        results_ET.set_background(2.9);
        results_ET.set_backgroundsys(1.8);
        results_ET.set_signalsys(0.);
        results_ET.set_signal(_numET);

        add_result(results_AM);
        add_result(results_AL);
        add_result(results_BT);
        add_result(results_BM);
        add_result(results_CT);
        add_result(results_CM);
        add_result(results_D);
        add_result(results_ET);
        add_result(results_EM);
        add_result(results_EL);

        return;
      }

      ///////////////////


      double SmallestdPhi(std::vector<HEPUtils::Jet*> jets,double phi_met) {
        if (jets.size()<2) return(999);
        double dphi1 = std::acos(std::cos(jets.at(0)->phi()-phi_met));
        double dphi2 = std::acos(std::cos(jets.at(1)->phi()-phi_met));
        double dphi3 = 999;
        if (jets.size() > 2 && jets[2]->pT() > 40.)
          dphi3 = std::acos(std::cos(jets[2]->phi() - phi_met));
        double min1 = std::min(dphi1, dphi2);
        return std::min(min1, dphi3);
      }

      double SmallestRemainingdPhi(const std::vector<HEPUtils::Jet*> jets,double phi_met) {
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
    DEFINE_ANALYSIS_FACTORY(ATLAS_0LEP)


  }
}
