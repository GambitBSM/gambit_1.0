#include "Analysis.hpp"
#include <vector>
#include <cmath>
#include "TMath.h"

namespace GAMBIT {


  using namespace std;


  class Analysis_ATLAS0LEP_7TeV : public Analysis {
  private:

    int _numR1, _numR2, _numR3, _numR4, _numRHM;

  public:

    void init() {
      _numR1 = 0; _numR2 = 0; _numR3 = 0;
      _numR4 = 0; _numRHM = 0;
    }

    double calculateDPhi(double phiA, double phiB)
    {
      double dPhi = fabs(phiA - phiB);
      
      double pi = TMath::Pi();
      if (dPhi > pi) dPhi = 2.0*pi - dPhi;
      
      return dPhi;
    }
    
    void analyze(const Event* event) {
      P4 ptot = event->missingMom();
      double ptmiss = event->met();
      vector<Jet *> delphes_jets=event->jets();
      vector<Particle *> delphes_electrons=event->electrons();
      vector<Particle *> delphes_muons=event->muons();      

      // Now define vectors of baseline objects
      vector<Particle *> baselineElectrons;
      vector<Particle *> baselineMuons;
      vector<Jet *> baselineJets;

      for (size_t iEl=0;iEl<delphes_electrons.size();iEl++) {
        Particle * electron=delphes_electrons.at(iEl);
        if (electron->pT()>20.&&fabs(electron->eta())<2.47)baselineElectrons.push_back(electron);
      }

      for (size_t iMu=0;iMu<delphes_muons.size();iMu++) {
        Particle * muon=delphes_muons.at(iMu);
        if (muon->pT()>10.&&fabs(muon->eta())<2.4)baselineMuons.push_back(muon);
      }

      for (size_t iJet=0;iJet<delphes_jets.size();iJet++) {
        Jet * jet=delphes_jets.at(iJet);
        if (jet->pT()>20.&&fabs(jet->eta())<2.8)baselineJets.push_back(jet);
      }

      //Overlap removal
      vector<Particle *> electrons;
      vector<Particle *> muons;
      vector<Jet *> jets;

      //Remove any jet within dR=0.2 of an electrons
      for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
        bool overlap=false;
        P4 jetVec=baselineJets.at(iJet)->mom();
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          P4 elVec=baselineElectrons.at(iEl)->mom();
          if (elVec.deltaR_eta(jetVec)<0.2)overlap=true;
        }
        if (!overlap)jets.push_back(baselineJets.at(iJet));
      }

      //Remove electrons with dR=0.4 or surviving jets
      for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
        bool overlap=false;
        P4 elVec=baselineElectrons.at(iEl)->mom();
        for (size_t iJet=0;iJet<jets.size();iJet++) {
          P4 jetVec=jets.at(iJet)->mom();
          if (elVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap)electrons.push_back(baselineElectrons.at(iEl));
      }

      //Remove muons with dR=0.4 or surviving jets
      for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
        bool overlap=false;
        P4 muVec=baselineMuons.at(iMu)->mom();
        for (size_t iJet=0;iJet<jets.size();iJet++) {
          P4 jetVec=jets.at(iJet)->mom();
          if (muVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap)muons.push_back(baselineMuons.at(iMu));
      }

      //We now have the signal electrons, muons and jets
      //Let's move on to the 0 lepton 7 TeV (1fb^-1) analysis
      
      //Calculate common variables and cuts first
      Int_t numJet=jets.size();
      Int_t numElec=electrons.size();
      Int_t numMuon=muons.size();

      bool lArHoleVeto = false;
      for (int i = 0; i < numJet; ++i) {
	if (i <= 4 && jets[i]->eta() > -0.1 && jets[i]->eta() < 1.5 && jets[i]->phi() > -0.9 && jets[i]->phi() < -0.5) {
	  lArHoleVeto = true;
	  break;
	}
      }
      
 
      
      if (!(lArHoleVeto)&&(numElec+numMuon)==0&&numJet>=2&&jets[0]->pT()>130.&&jets[1]->pT()>40.&&ptmiss>130.) {
	vector<float> dPhiJetMETs;
	dPhiJetMETs.push_back(calculateDPhi(jets[0]->phi(),ptot.phi()));
	dPhiJetMETs.push_back(calculateDPhi(jets[1]->phi(),ptot.phi()));
	if(numJet>2)dPhiJetMETs.push_back(calculateDPhi(jets[2]->phi(),ptot.phi()));
	float minDPhiJetMet=9999;
	for(size_t i=0;i<dPhiJetMETs.size();i++){
	  if(dPhiJetMETs.at(i)<minDPhiJetMet)minDPhiJetMet=dPhiJetMETs.at(i);
	}
	if(minDPhiJetMet>0.4){
	  float meff2j=ptmiss+jets[0]->pT()+jets[1]->pT();
	  if(meff2j>1000.&&ptmiss/meff2j>0.3)_numR1++;
	}
      }
      
      
    }
    

    void finalize() {
      cout << "NUMEVENTS: " << _numR1 << " " << _numR2 << " " << _numR3 << " "
           << _numR4 << " " << _numRHM << endl;
    }


    double logLikelihood() {
      return -1.0;
    }


  };


}
