#include "Analysis.hpp"
#include <vector>
#include <cmath>
#include <memory>

/* The ATLAS 1 lepton direct stop analysis (20fb^-1). 
   Code by Martin White.
   Known errors:
   a) The isolation is already applied in the simulation rather than after overlap removal

   Known features:
   a) Must run simulator with 75% b tagging efficiency and 2% mis-id rate
   b) For now have nicked ATLAS MT2 code. Need to check status of this for public release.
*/

namespace GAMBIT {


  using namespace std;


  class Analysis_ATLAS_1LEPStop_20invfb : public Analysis {
  private:

    // Numbers passing cuts
    int _numTN1Shape, _numTN2, _numTN3, _numBC1, _numBC2,
      _numBC3;

    // Debug histos
  public:

    Analysis_ATLAS_1LEPStop_20invfb() {
      _numTN1Shape = 0; _numTN2 = 0; _numTN3 = 0; _numBC1 = 0;
      _numBC2 = 0; _numBC3 = 0;

    }


    // void init() {
    // }


    double SmallestdPhi(std::vector<Jet *> jets,double phi_met)
    {
      if (jets.size()<2) return(999);
      double dphi1 = std::acos(std::cos(jets.at(0)->phi()-phi_met));
      double dphi2 = std::acos(std::cos(jets.at(1)->phi()-phi_met));
      double dphi3 = 999;
      if (jets.size() > 2 && jets[2]->pT() > 40.)
        dphi3 = std::acos(std::cos(jets[2]->phi() - phi_met));
      double min1 = std::min(dphi1, dphi2);
      return std::min(min1, dphi3);
    }

    double SmallestRemainingdPhi(const std::vector<Jet *> jets,double phi_met)
    {
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

    void analyze(const Event* event) {
      // Missing energy
      P4 ptot = event->missingMom();
      double met = event->met();

      // Now define vectors of baseline objects
      vector<Particle*> baselineElectrons;
      for (Particle* electron : event->electrons()) {
        if (electron->pT() > 10. && fabs(electron->eta()) < 2.47) baselineElectrons.push_back(electron);
      }
      vector<Particle*> baselineMuons;
      for (Particle* muon : event->muons()) {
        if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) baselineMuons.push_back(muon);
      }
      vector<Jet*> baselineJets;
      vector<Jet*> bJets;
      for (Jet* jet : event->jets()) {
        if (jet->pT() > 20. && fabs(jet->eta()) < 10.0) baselineJets.push_back(jet);
	if(jet->isBJet() && fabs(jet->eta()) < 2.5 && jet->pT() > 25.) bJets.push_back(jet);
      }

      // Overlap removal
      vector<Particle*> signalElectrons;
      vector<Particle*> signalMuons;
      vector<Particle*> leptonsForVeto; 
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
        if (!overlap && elVec.pT()>25.)signalElectrons.push_back(baselineElectrons.at(iEl));
	if(!overlap)leptonsForVeto.push_back(baselineElectrons.at(iEl));
      }

      // Remove muons with dR=0.4 or surviving jets
      for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
        bool overlap=false;
        P4 muVec=baselineMuons.at(iMu)->mom();
        for (size_t iJet=0;iJet<signalJets.size();iJet++) {
          P4 jetVec=signalJets.at(iJet)->mom();
          if (muVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap && muVec.pT()>25.)signalMuons.push_back(baselineMuons.at(iMu));
	if(!overlap)leptonsForVeto.push_back(baselineMuons.at(iEl));
      }

      // We now have the signal electrons, muons, jets and b jets- move on to the analysis

      // Calculate common variables and cuts first
      int nElectrons = signalElectrons.size();
      int nMuons = signalMuons.size();
      int nJets = signalJets.size();
      int nBjets = bJets.size();

      //Common preselection for all signal regions
      if(!(nJets>=4 
	 && signalJets[0]->pT() > 80.
	 && signalJets[1]->pT() > 60.
	 && signalJets[2]->pT() > 40.
	   && signalJets[3]->pT() > 25.))continue;

      //At least one of the leading four jets must be a b jet
      if(!(signalJets[0]->isBJet() ||
	 signalJets[1]->isBJet() ||
	 signalJets[2]->isBJet() ||
	   signalJets[3]->isBJet()))continue;

      //Must have exactly one lepton
      if(!(nElectrons==1||nMuons==1))continue;
      if(leptonsForVeto.size()>1)continue;

      //Calculate dphi(jet,met) for the two leading jets
      float dphi_jetmet1=std::acos(std::cos(signalJets.at(0)->phi()-ptot.phi()));
      float dphi_jetmet2=std::acos(std::cos(signalJets.at(1)->phi()-ptot.phi()));

      //Calculate met/sqrt(HT) (use four leading jets only)
      float HT=signalJets[0]->pT()+signalJets[1]->pT()+signalJets[3]->pT()+signalJets[4]->pT();
      float metOverSqrtHT=met/sqrt(HT);
      
      //Calculate mT
      P4 lepVec;
      if(nElectrons==1)lepVec=baselineElectrons[0]->mom();
      if(nMuons==1)lepVec=baselineMuons[0]->mom();
      mT = sqrt(2.*lepVec->pT()*met*(1.-cos(ptot.deltaPhi(lepVec))));
  
      //Calculate meff (all jets with pT>30 GeV, lepton pT and met)
      float meff = met + lepVec->pT();
      for (Jet* jet : signalJets()) {
	if(jet->pT()>30.)meff += jet->pT();
      }
      
      //Do hadronic top reconstruction
      float mindR1=9999.;
      float mindR2=9999.;
      float index1=9999.;
      float index2=9999;.
      float index3=9999.;
      
      bool whad=false;
      bool Thad=false;
      float mHadTop=0;

      for(int iJet=0;iJet<nJets;iJet++){
	for(int jJet=0;jJet<nJets;jJet++){
	  if(iJet != jJet){
  	    if(signalJets[iJet]->mom().DeltaR(signalJets[jJet]->mom()) < mindR1 && (signalJets[iJet]->mom()+signalJets[jJet]->mom()).M() > 60.){
	      mindR1 = signalJets[iJet]->mom().DeltaR(signalJets[jJet]->mom());
	      index1 = iJet;
	      index2 = jJet;
	      whad   = true;
	    }
	  }
	}
      }
      if(whad){
	for(int kJet=0;kJet<nJets;kJet++){
	  if(kJet !=index1 && kJet !=index2){
	    if(signalJets[kJet]->mom().DeltaR( signalJets[index1]->mom() + signalJets[index2]->mom()) < mindR2 && (signalJets[index1]->mom()+signalJets[index2]->mom()+signalJets[kJet]->mom()).M() > 130.){
	      mindR2=signalJets[kJet]->mom().DeltaR(signalJets[index1]->mom() + signalJets[index2]->mom());
	      index3=kJet;
	      Thad=true;
	    }
	  }
	}
      }
      if(Thad)mHadTop = (signalJets[index1]->mom()+signalJets[index2]->mom()+signalJets[index3]->mom()).M();
      
      bool passHadTop=false;
      if(mHadTop>130.&& mHadTop<205.)passHadTop=true;

     
      
      
    }
      
    void finalize() {
      cout << "NUMEVENTS: " << _numAT << " " << _numAM << " " << _numAL << " "
           << _numBT << " " << _numBM << " " << _numCT << " " << _numCM << " " << _numCL << " "
           << _numD << " " << _numET << " " << _numEM << " " << _numEL << endl;

    }


    double logLikelihood() {
      /// @todo Implement!
      return 1.0;
    }


  };


}
