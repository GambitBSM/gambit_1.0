//written by A Saavedra 19-06-2013
//to test the FastSim  module
#include "Analysis.hpp"
#include <vector>

// ROOT
#include "TH1.h"
#include "TVirtualPad.h"
#include "TApplication.h"
#include "TFile.h"


using namespace std;

namespace GAMBIT {


  class Analysis_Perf : public Analysis {
    private:

      TH1F *_hBosonPt, *_hBosoneta, *_hBosonphi;
      TH1F *_hElectron1Pt, *_hElectron1eta, *_hElectron1phi; 
      TH1F *_hElectron2Pt, *_hElectron2eta, *_hElectron2phi; 
      TH1F *_hElectron1Pt_truth, *_hElectron1eta_truth, *_hElectron1phi_truth; 
      TH1F *_hElectron2Pt_truth, *_hElectron2eta_truth, *_hElectron2phi_truth; 
      TH1F *_hNelec,*_hNelec_truth, *_hNjet;   
      TH1F *_hinv, *_hmet;
      TH1F *_hinv_truth, *_hmet_truth;
     
      string _output_filename;
      TFile *_ROOToutFile;

  public:

      Analysis_Perf(){};
      ~Analysis_Perf();
      void init();
      void analyze(const Event* event);
      void finalize();
      double logLikelihood() { return -1.0; }


  };
}


/*
    void init() {
      _numAT = 0; _numAM = 0; _numAL = 0;
      _numBT = 0; _numBM = 0;
      _numCT = 0; _numCM = 0; _numCL = 0;
      _numD  = 0;
      _numET = 0; _numEM = 0; _numEL = 0;
    }

    void analyze(const Event* event) {
      P4 ptot = event->missingMom();
      double met= event->met();
      vector<Jet *> jets=event->jets();
      vector<Particle *> electrons=event->electrons();
      vector<Particle *> muons=event->muons();      

      // Now define vectors of baseline objects
      vector<Particle *> baselineElectrons;
      vector<Particle *> baselineMuons;
      vector<Jet *> baselineJets;

      for (size_t iEl=0;iEl<electrons.size();iEl++) {
        Particle * electron=electrons.at(iEl);
        if (electron->pT()>20.&&fabs(electron->eta())<2.47)baselineElectrons.push_back(electron);
      }

      for (size_t iMu=0;iMu<muons.size();iMu++) {
        Particle * muon=muons.at(iMu);
        if (muon->pT()>10.&&fabs(muon->eta())<2.4)baselineMuons.push_back(muon);
      }

      for (size_t iJet=0;iJet<jets.size();iJet++) {
        Jet * jet=jets.at(iJet);
        if (jet->pT()>20.&&fabs(jet->eta())<2.8)baselineJets.push_back(jet);
      }

      //Overlap removal
      vector<Particle *> signalElectrons;
      vector<Particle *> signalMuons;
      vector<Jet *> signalJets;

      //Remove any jet within dR=0.2 of an electrons
      for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
        bool overlap=false;
        P4 jetVec=baselineJets.at(iJet)->mom();
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          P4 elVec=baselineElectrons.at(iEl)->mom();
          if (elVec.deltaR_eta(jetVec)<0.2)overlap=true;
        }
        if (!overlap)signalJets.push_back(baselineJets.at(iJet));
      }

      //Remove electrons with dR=0.4 or surviving jets
      for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
        bool overlap=false;
        P4 elVec=baselineElectrons.at(iEl)->mom();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          P4 jetVec=signalJets.at(iJet)->mom();
          if (elVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
      }

      //Remove muons with dR=0.4 or surviving jets
      for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
        bool overlap=false;
        P4 muVec=baselineMuons.at(iMu)->mom();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          P4 jetVec=signalJets.at(iJet)->mom();
          if (muVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap)signalMuons.push_back(baselineMuons.at(iMu));
      }

      //We now have the signal electrons, muons and jets
      //Let's move on to the 0 lepton 2012 analysis
      


      //Calculate common variables and cuts first
      int nElectrons=signalElectrons.size();
      int nMuons=signalMuons.size();
      int nJets=signalJets.size();

      //DEBUG info
      cout << "Number of electrons " <<  nElectrons << " Number of muons " << nMuons << " Number of jets " << nJets << endl;

      bool leptonCut=false;
      if (nElectrons==0 && nMuons==0)leptonCut=true;

      bool metCut=false;
      //cout << "MET " << met << endl;
      if (met>160.)metCut=true;
      if(metCut)cout << "Passes met cut" << endl;
      float meff_incl=0;
      for (size_t iJet=0;iJet<signalJets.size();iJet++) {
        if (signalJets.at(iJet)->pT()>40.)meff_incl+=signalJets.at(iJet)->pT();
      }

      meff_incl+=met;


      // Do 2 jet regions

      if (nJets>1) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60.) {

          float dPhiMin=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            if (numJets>1)break;
            float dphi=ptot.deltaPhi(jetVec);
            if (dphi<dPhiMin) {
              dPhiMin=dphi;
              numJets+=1;
            }
          }

          float meff2j=met + signalJets.at(0)->pT() + signalJets.at(1)->pT();
          if (leptonCut && metCut && dPhiMin>0.4) {
            if ((met/meff2j)>0.3 && meff_incl>1900.)_numAT++;
            if ((met/meff2j)>0.4 && meff_incl>1300.)_numAM++;
            if ((met/meff2j)>0.4 && meff_incl>1000.)_numAL++;
          }
        }

      }

      //Do the 3 jet regions
      if (nJets>2) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60.) {
          float dPhiMin=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            if (numJets>2)break;
            float dphi=ptot.deltaPhi(jetVec);
            if (dphi<dPhiMin) {
              dPhiMin=dphi;
              numJets+=1;
            }
          }

          float meff3j=met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT();
          if (leptonCut && metCut && dPhiMin>0.4) {
            if ((met/meff3j)>0.25 && meff_incl>1900.)_numBT++;
            if ((met/meff3j)>0.3 && meff_incl>1300.)_numBM++;
          }

        }
      }

      //Do the 4 jet regions
      if (nJets>3) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60.) {
          float dPhiMin4=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            if (numJets>3)break;
            float dphi=ptot.deltaPhi(jetVec);
            if (dphi<dPhiMin4) {
              dPhiMin4=dphi;
              numJets+=1;
            }
          }

          float dPhiMin2=9999;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            float dphi=deltaPhi(ptot,jetVec);
            if (dphi<dPhiMin2) {
              dPhiMin2=dphi;
            }
          }

          float meff4j=met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT();

          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if ((met/meff4j)>0.25 && meff_incl>1900.)_numCT++;
            if ((met/meff4j)>0.3 && meff_incl>1300.)_numCM++;
            if ((met/meff4j)>0.3 && meff_incl>1000.)_numCL++;
          }
        }
      }

      //Do 5 jet region
      if (nJets>4) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60. && signalJets.at(4)->pT()>60.) {


          float dPhiMin4=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            if (numJets>3)break;
            float dphi=ptot.deltaPhi(jetVec);
            if (dphi<dPhiMin4) {
              dPhiMin4=dphi;
              numJets+=1;
            }
          }

          float dPhiMin2=9999;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            float dphi=ptot.deltaPhi(jetVec);
            if (dphi<dPhiMin2) {
              dPhiMin2=dphi;
            }
          }

          float meff5j=met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT() + signalJets.at(4)->pT();

          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if ((met/meff5j)>0.15 && meff_incl>1700.)_numD++;
          }
        }
      }

      //Do the 6 jet regions
      if (nJets>5) {
        if (signalJets.at(0)->pT()>130. && signalJets.at(1)->pT()>60. && signalJets.at(2)->pT()>60. && signalJets.at(3)->pT()>60. && signalJets.at(4)->pT()>60. && signalJets.at(5)->pT()>60.) {


          float dPhiMin4=9999;
          int numJets=0;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            P4 jetVec=jet->mom();
            if (jet->pT()<40.) continue;
            if (numJets>3)break;
            float dphi=ptot.deltaPhi(jetVec);
            if (dphi<dPhiMin4) {
              dPhiMin4=dphi;
              numJets+=1;
            }
          }

          float dPhiMin2=9999;
          for (int iJet=0;iJet<nJets;iJet++) {
            Jet * jet=signalJets.at(iJet);
            if (jet->pT()<40.) continue;
            float dphi=ptot.deltaPhi(jet->mom());
            if (dphi<dPhiMin2) {
              dPhiMin2=dphi;
            }
          }

          float meff6j=met + signalJets.at(0)->pT() + signalJets.at(1)->pT() + signalJets.at(2)->pT() + signalJets.at(3)->pT() + signalJets.at(4)->pT() + signalJets.at(5)->pT();

          if (leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2) {
            if ((met/meff6j)>0.15 && meff_incl>1400.)_numET++;
            if ((met/meff6j)>0.25 && meff_incl>1300.)_numEM++;
            if ((met/meff6j)>0.30 && meff_incl>1000.)_numEL++;
          }
        }
      }

    }


    void finalize() {
      cout << "NUMEVENTS: " << _numAT << " " << _numAM << " " << _numAL << " "
           << _numBT << " " << _numBM << " " << _numCT << " " << _numCM << " " << _numCL << " "
           << _numD << " " << _numET << " " << _numEM << " " << _numEL << endl;
    }


    double logLikelihood() {
      return -1.0;
    }


  };


}
*/
