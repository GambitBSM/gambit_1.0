#include "Analysis.hpp"
#include <vector>
#include <cmath>
#include <memory>
#include "TLorentzVector.h"
#include "TVector2.h"
#include <iomanip>
#include "mt2_bisect.h"

/* The ATLAS 0 lepton direct stop analysis (20fb^-1) - `heavy stop'.

based on: ATLAS-CONF-2013-024

   Code by Martin White, Sky French.
   Known errors:
   a) The isolation is already applied in the simulation rather than after overlap removal -> the electron and muon veto technically require a veto on base-line electrons/muons not overlapping with jets
   b) ETmiss-track cuts ignored...

   Known features:
   a) Must run simulator with 70% b tagging efficiency and ?% mis-id rate
   b) For now have nicked ATLAS MT2 code. Need to check status of this for public release. The better option is to write a non-ROOT version later.
   ===> STF: Now using mt2 bisect method from H. Cheng, Z. Han, arXiv:0810.5178 for mT2 calculation

*/

namespace Gambit {


  using namespace std;


  class Analysis_ATLAS_0LEPStop_20invfb : public Analysis {
  private:

    // Numbers passing cuts
    int _numSR1, _numSR2, _numSR3;

    vector<int> cutFlowVector_alt;
    vector<int> cutFlowVector;
    vector<string> cutFlowVector_str;
    int NCUTS=16;

    // Debug histos

  public:

    Analysis_ATLAS_0LEPStop_20invfb() {

      _numSR1 = 0 ; _numSR2 = 0; _numSR3 = 0;

      for(int i=0;i<NCUTS;i++){
	cutFlowVector.push_back(0);
	cutFlowVector_str.push_back("");
	cutFlowVector_alt.push_back(0);
      }

    }

    void analyze(const Event* event) {

      // Missing energy
      P4 ptot = event->missingmom();
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
      vector<Particle*> baselineTaus;
      for (Particle* tau : event->taus()) {
        if (tau->pT() > 10. && fabs(tau->eta()) < 2.47) baselineTaus.push_back(tau);
      }

      vector<Jet*> baselineJets;
      vector<Jet*> bJets;
      vector<Jet*> trueBJets; //for debugging
      for (Jet* jet : event->jets()) {
        if (jet->pT() > 20. && fabs(jet->eta()) < 4.5) baselineJets.push_back(jet);
	if(jet->isBJet() && fabs(jet->eta()) < 2.5 && jet->pT() > 25.) bJets.push_back(jet);
      }

      // Overlap removal
      vector<Particle*> signalElectrons;
      vector<Particle*> signalMuons;
      vector<Particle*> electronsForVeto;
      vector<Particle*> muonsForVeto;
      vector<Jet*> goodJets;
      vector<Jet*> signalJets;

      //Note that ATLAS use |eta|<10 for removing jets close to electrons
      //Then 2.8 is used for the rest of the overlap process
      //Then the signal cut is applied for signal jets

      // Remove any jet within dR=0.2 of an electrons
      for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
        bool overlap=false;
        P4 jetVec=baselineJets.at(iJet)->mom();
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          P4 elVec=baselineElectrons.at(iEl)->mom();
          if (elVec.deltaR_eta(jetVec)<0.2)overlap=true;
        }
        if (!overlap&&fabs(baselineJets.at(iJet)->eta())<2.8)goodJets.push_back(baselineJets.at(iJet));
	if (!overlap&&fabs(baselineJets.at(iJet)->eta())<2.8 && baselineJets.at(iJet)->pT()>35.)signalJets.push_back(baselineJets.at(iJet));
      }

      // Remove electrons with dR=0.4 or surviving jets
      for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
        bool overlap=false;
        P4 elVec=baselineElectrons.at(iEl)->mom();
        for (size_t iJet=0;iJet<goodJets.size();iJet++) {
          P4 jetVec=goodJets.at(iJet)->mom();
          if (elVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap && elVec.pT()>25.)signalElectrons.push_back(baselineElectrons.at(iEl));
	if(!overlap)electronsForVeto.push_back(baselineElectrons.at(iEl));
      }

      // Remove muons with dR=0.4 or surviving jets
      for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
        bool overlap=false;

        P4 muVec=baselineMuons.at(iMu)->mom();

        for (size_t iJet=0;iJet<goodJets.size();iJet++) {
          P4 jetVec=goodJets.at(iJet)->mom();
	  if (muVec.deltaR_eta(jetVec)<0.4)overlap=true;
        }
        if (!overlap && muVec.pT()>25.)signalMuons.push_back(baselineMuons.at(iMu));
	if(!overlap)muonsForVeto.push_back(baselineMuons.at(iMu));
      }

      // We now have the signal electrons, muons, jets and b jets- move on to the analysis

      // Calculate common variables and cuts first
      int nElectrons = signalElectrons.size();
      int nMuons = signalMuons.size();
      int nJets = signalJets.size();
      
      //if(leptonsForVeto.size()>0 && leptonsForVeto[0]->pT()>25.)cout << "Leptons size " << leptonsForVeto.size() << " muons " << nMuons << " electrons " << nElectrons << endl;

      //Common preselection for all signal regions
      bool passJetCut=false;
      bool passBJetCut=false;
     
      if(nJets>=6){
	if(signalJets[0]->pT() > 80.
	   && signalJets[1]->pT() > 80.
	   && signalJets[2]->pT() > 35.
	   && signalJets[3]->pT() > 35.
	   && signalJets[4]->pT() > 35.
	   && signalJets[5]->pT() > 35.)passJetCut=true;

	for(int j=0; j<nJets; j++) {
	  for(int k=j+1; k<nJets; k++) {
	    if(signalJets[j]->isBJet() && signalJets[k]->isBJet()) passBJetCut=true;
	  }
	}
      }

      //mjjj combinations
      TLorentzVector mjjj0; TLorentzVector mjjj1;
      double mindphi_12 = 9999.;
      TLorentzVector W1;
      TLorentzVector W2;
      TLorentzVector T1;
      TLorentzVector T2;
      TLorentzVector jet1;
      TLorentzVector jet2;
      TLorentzVector jet3;
      TLorentzVector jet4;
      TLorentzVector jet5;
      TLorentzVector jet6;
      if(nJets>=6) {
	int j1 = 0 ; int j2 = 0; int j3 = 0; int j4 = 0; int j5 = 0; int j6 = 0;
	for(int k=0; k<nJets; k++) {
	  for(int l=0; l<nJets; l++) {
	    if(k!=l) {
	      jet1.SetPtEtaPhiE(signalJets[k]->pT(),signalJets[k]->eta(),signalJets[k]->phi(),signalJets[k]->E());
	      jet2.SetPtEtaPhiE(signalJets[l]->pT(),signalJets[l]->eta(),signalJets[l]->phi(),signalJets[l]->E());
	      if(jet1.DeltaR(jet2)<mindphi_12) {
		j1 = k;
		j2 = l;
		mindphi_12 = jet1.DeltaR(jet2);
		W1 = jet1+jet2;
	      }
	    }
	  }
	}
	double mindphi_w1j3 = 9999.;
	for(int p=0; p<nJets; p++) {
	  if(p!=j1 && p!=j2) {
	    jet3.SetPtEtaPhiE(signalJets[p]->pT(),signalJets[p]->eta(),signalJets[p]->phi(),signalJets[p]->E());
	    if(jet3.DeltaR(W1)<mindphi_w1j3) {
	      j3 = p;
	      mindphi_w1j3 = jet3.DeltaR(W1);
	      T1 = W1+jet3;
	    }
	  }
	}
	double mindphi_45 = 9999.;
	for(int k=0; k<nJets; k++) {
	  for(int l=0; l<nJets; l++) {
	    if(k!=j1 && k!=j2 && k!=j3 && l!=j1 && l!=j2 && l!=j3 && k!=l) {
	      jet4.SetPtEtaPhiE(signalJets[k]->pT(),signalJets[k]->eta(),signalJets[k]->phi(),signalJets[k]->E());
	      jet5.SetPtEtaPhiE(signalJets[l]->pT(),signalJets[l]->eta(),signalJets[l]->phi(),signalJets[l]->E());
	      if(jet4.DeltaR(jet5)<mindphi_45) {
		j4 = k;
		j5 = l;
		mindphi_45 = jet4.DeltaR(jet5);
		W2 = jet4+jet5;
	      }
	    }
	  }
	}
	double mindphi_w2j6 = 9999.;
	for(int p=0; p<nJets; p++) {
	  if(p!=j1 && p!=j2 && p!=j3 && p!=j4 && p!=j5) {
	    jet6.SetPtEtaPhiE(signalJets[p]->pT(),signalJets[p]->eta(),signalJets[p]->phi(),signalJets[p]->E());
	    if(jet6.DeltaR(W2)<mindphi_w2j6) {
	      j6 = p;
	      mindphi_w2j6 = jet6.DeltaR(W2);
	      T2 = W2+jet6;
	    }
	  }
	}

	if(fabs(T1.M()-173.)<fabs(T2.M()-173.)) {
	  mjjj0 = T1;
	  mjjj1 = T2;
	}
	else {
	  mjjj0 = T2;
	  mjjj1 = T1;
	}

      }


      //Must have exactly one lepton
      //cout << "leptonsForVeto size" << leptonsForVeto.size() << endl;

      //Calculate dphi(jet,met) for the three leading jets
      float dphi_jetmet1=9999;
      if(nJets>0)dphi_jetmet1=std::acos(std::cos(signalJets.at(0)->phi()-ptot.phi()));
      float dphi_jetmet2=9999;
      if(nJets>1)dphi_jetmet2=std::acos(std::cos(signalJets.at(1)->phi()-ptot.phi()));
      float dphi_jetmet3=9999;
      if(nJets>2)dphi_jetmet3=std::acos(std::cos(signalJets.at(2)->phi()-ptot.phi()));

      //Calculate dphi(b,met) for the closest b-jet in phi to MET
      float dphi_bjetmet=9999.;
      float minphi =9999.;
      int whichb=0;
      for(int j=0; j<nJets; j++) {
	if(signalJets[j]->isBJet()) {
	  if(fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())))<minphi) {
	    minphi = fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())));
	    dphi_bjetmet = minphi;
	    whichb=j;
	  }
	}
      }

      float mT_bjetmet = 0;
      if(passBJetCut) mT_bjetmet = sqrt(2*signalJets.at(whichb)->pT()*met*(1-std::cos(dphi_bjetmet)));

      bool cut_tau=true;
      //Tau Veto
      for (int j=0; j<nJets; j++) {
	if(!signalJets[j]->isBJet() && std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi()))<0.2*3.14)
	  cut_tau=false;
      }
      //Calculate met/sqrt(HT) (use four leading jets only)
      float HT=0;
      if(nJets>=4)HT=signalJets[0]->pT()+signalJets[1]->pT()+signalJets[2]->pT()+signalJets[3]->pT();
     
      //Calculate mT
      P4 lepVec;
      if(nElectrons==1)lepVec=signalElectrons[0]->mom();
      if(nMuons==1)lepVec=signalMuons[0]->mom();
      //cout << "DPHI" << ptot.deltaPhi(lepVec) << endl;
      //Note: phi here should be in the range -pi to pi
      //float mT = sqrt(2.*lepVec.pT()*met*(1.-cos(ptot.deltaPhi(lepVec))));
      //This is the ATLAS definition of dphi for this analysis
      //Note that it gives different answers to our dphi function (given above)
      //float mT=sqrt(2.*lepVec.pT()*met*(1. - cos(TVector2::Phi_mpi_pi(lepVec.phi()-ptot.phi()))));

      //Calculate meff (all jets with pT>30 GeV, lepton pT and met)
      float meff = met + lepVec.pT();
      for (Jet* jet : signalJets) {
	if(jet->pT()>30.)meff += jet->pT();
      }
      //Cutflow flags
      bool cut_mjjj0=false;
      bool cut_mjjj1=false;
      bool cut_mTbjetmetGt175=false;
      bool cut_ElectronVeto=false;
      bool cut_MuonVeto=false;
      bool cut_6jets=false;
      bool cut_Btag=false;
      bool cut_dPhiJet3=false;
      bool cut_dPhiJet2=false;
      bool cut_dPhiJet1=false;
      bool cut_METGt130=false;
      bool cut_METGt150=false;
      bool cut_METGt200=false;
      bool cut_METGt250=false;
      bool cut_METGt300=false;
      bool cut_METGt350=false;
      bool cut_dPhiJets=false;

      if(mT_bjetmet>175.)cut_mTbjetmetGt175=true;
      if(electronsForVeto.size()==0)cut_ElectronVeto=true;
      if(muonsForVeto.size()==0)cut_MuonVeto=true;
      if(passJetCut)cut_6jets=true;
      if(passBJetCut)cut_Btag=true;
      if(dphi_jetmet3>3.14/fabs(5.0))cut_dPhiJet3=true;
      if(dphi_jetmet2>3.14/fabs(5.0))cut_dPhiJet2=true;
      if(dphi_jetmet1>3.14/fabs(5.0))cut_dPhiJet1=true;
      if(cut_dPhiJet1 && cut_dPhiJet2 && cut_dPhiJet3)cut_dPhiJets=true;
      if(met>130.)cut_METGt130=true;
      if(met>150.)cut_METGt150=true;
      if(met>200.)cut_METGt200=true;
      if(met>250.)cut_METGt250=true;
      if(met>300.)cut_METGt300=true;
      if(met>350.)cut_METGt350=true;
      if(nJets>=6) {
	if(mjjj0.M()<270 && mjjj0.M()>80) cut_mjjj0=true;
	if(mjjj1.M()<270 && mjjj1.M()>80) cut_mjjj1=true;
      }

      cutFlowVector_str[0] = "No cuts ";
      cutFlowVector_str[1] = "Muon veto ";
      cutFlowVector_str[2] = "Electron veto ";
      cutFlowVector_str[3] = "MET > 130 GeV ";
      cutFlowVector_str[4] = "Jet multiplicity and pT ";
      cutFlowVector_str[5] = "dPhi(jet,MET) > pi/5 ";
      cutFlowVector_str[6] = "Tau veto ";
      cutFlowVector_str[7] = ">=2 b jets ";
      cutFlowVector_str[8] = "mT(b,MET) > 175 ";
      cutFlowVector_str[9] = "80 < mjjj0 < 270 ";
      cutFlowVector_str[10] = "80 < mjjj1 < 270 ";
      cutFlowVector_str[11] = "MET > 150 ";
      cutFlowVector_str[12] = "MET > 200 ";
      cutFlowVector_str[13] = "MET > 250 ";
      cutFlowVector_str[14] = "MET > 300 ";
      cutFlowVector_str[15] = "MET > 350 ";

      for(int j=0;j<NCUTS;j++){
	if(
	   (j==0) ||

	   (j==1 && cut_MuonVeto) ||

	   (j==2 && cut_ElectronVeto && cut_MuonVeto) ||

	   (j==3 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130) ||

	   (j==4 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets) ||

	   (j==5 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets) ||

	   (j==6 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau) ||

           (j==7 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag) ||

	   (j==8 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175) ||

	   (j==9 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0) ||

	   (j==10 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1) ||

	   (j==11 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt150) ||

	   (j==12 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt200) ||

	   (j==13 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt250) ||

	   (j==14 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt300) ||

	   (j==15 && cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt350) )


	  cutFlowVector[j]++;
      }

      //We're now ready to apply the cuts for each signal region
      //_numSR1, _numSR2, _numSR3;

      if(cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt200) _numSR1++;
      if(cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt300) _numSR2++;
      if(cut_ElectronVeto && cut_MuonVeto && cut_METGt130 && cut_6jets && cut_dPhiJets && cut_tau && cut_Btag && cut_mTbjetmetGt175 && cut_mjjj0 && cut_mjjj1 && cut_METGt350) _numSR3++;

      return;

    }

    void finalize() {

      using namespace std;

      double scale_to = 507.3;
      double trigger_cleaning_eff = 0.90;

      cout << "------------------------------------------------------------------------------------------------------------------------------ "<<std::endl;
      cout << "CUT FLOW: ATLAS-CONF-2013-024 - Appendix, Table 5 - stop -> top + LSP, stop 600, LSP 0 "<<std::endl;
      cout << "------------------------------------------------------------------------------------------------------------------------------"<<std::endl;

      std::cout<< right << setw(40) << "CUT" << setw(20) << "RAW" << setw(20) << "SCALED" << setw(20) << "%" << setw(20) << "clean adj RAW"<< setw(20) << "clean adj %" << endl;
      for(int j=0; j<NCUTS; j++) {
	std::cout << right << setw(40) << cutFlowVector_str[j].c_str() << setw(20) << cutFlowVector[j] << setw(20) << cutFlowVector[j]*scale_to/cutFlowVector[0] << setw(20) << 100.*cutFlowVector[j]/cutFlowVector[0] << "%" << setw(20) << trigger_cleaning_eff*cutFlowVector[j]*scale_to/cutFlowVector[0] << setw(20) << trigger_cleaning_eff*100.*cutFlowVector[j]/cutFlowVector[0]<< "%" << endl;
      }
      cout << "------------------------------------------------------------------------------------------------------------------------------ "<<std::endl;

      cout << "RESULTS 0LEP " << _numSR1 << " " <<  _numSR2 << " " << _numSR3 << endl;


    }


    double loglikelihood() {
      /// @todo Implement!
      return 0;
    }




};
}
