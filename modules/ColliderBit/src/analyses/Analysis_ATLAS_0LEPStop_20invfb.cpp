#include "Analysis.hpp"
#include "mt2_bisect.h"

/// @todo Eliminate the ROOT vectors!
#include "TLorentzVector.h"
#include "TVector2.h"

#include <vector>
#include <cmath>
#include <memory>
#include <iomanip>
using namespace std;


/* The ATLAS 0 lepton direct stop analysis (20fb^-1) - `heavy stop'.

   Based originally on: ATLAS-CONF-2013-024
   Now updated to arXiv:1406.1122
   Code by Martin White, Sky French.
   Known errors:
   a) The isolation is already applied in the simulation rather than after overlap removal -> the electron and muon veto technically require a veto on base-line electrons/muons not overlapping with jets
   b) ETmiss-track cuts ignored...

   Known features:
   a) Must run simulator with 70% b tagging efficiency and ?% mis-id rate
   b) Using mt2 bisect method from H. Cheng, Z. Han, arXiv:0810.5178 for mT2 calculation

*/

namespace Gambit {
  namespace ColliderBit {



    class Analysis_ATLAS_0LEPStop_20invfb : public Analysis {
    private:

      // Numbers passing cuts
      int _numSRA1, _numSRA2, _numSRA3, _numSRA4;
      int _numSRC1, _numSRC2, _numSRC3;

      vector<int> cutFlowVector_alt;
      vector<int> cutFlowVector;
      vector<string> cutFlowVector_str;
      int NCUTS; //=16;

      // Debug histos

      void JetLeptonOverlapRemoval(vector<Jet*> &jetvec, vector<Particle*> &lepvec, double DeltaRMax) {
	//Routine to do jet-lepton check
	//Discards jets if they are within DeltaRMax of a lepton
	
	vector<Jet*> Survivors;
	
	for(unsigned int itjet = 0; itjet < jetvec.size(); itjet++) {
	  bool overlap = false;
	  P4 jetmom=jetvec.at(itjet)->mom();
	  for(unsigned int itlep = 0; itlep < lepvec.size(); itlep++) {
	    P4 lepmom=lepvec.at(itlep)->mom();
	    float dR;
	    
	    dR=jetmom.deltaR_eta(lepmom);
	    
	    if(dR <= DeltaRMax) overlap=true;
	  }
	  if(overlap) continue;
	  Survivors.push_back(jetvec.at(itjet));
	}
	jetvec=Survivors;
	
	return;
      }
      
      void LeptonJetOverlapRemoval(vector<Particle*> &lepvec, vector<Jet*> &jetvec, double DeltaRMax) {
	//Routine to do lepton-jet check
	//Discards leptons if they are within DeltaRMax of a jet
	
	vector<Particle*> Survivors;
	
	for(unsigned int itlep = 0; itlep < lepvec.size(); itlep++) {
	  bool overlap = false;
	  P4 lepmom=lepvec.at(itlep)->mom();
	  for(unsigned int itjet= 0; itjet < jetvec.size(); itjet++) {
	    P4 jetmom=jetvec.at(itjet)->mom();
	    float dR;
	    
	    dR=jetmom.deltaR_eta(lepmom);
	    
	    if(dR <= DeltaRMax) overlap=true;
	  }
	  if(overlap) continue;
	  Survivors.push_back(lepvec.at(itlep));
	}
	lepvec=Survivors;
	
	return;
      }
      
      
      
      
    public:

      Analysis_ATLAS_0LEPStop_20invfb() {

        _numSRA1 = 0 ; _numSRA2 = 0; _numSRA3 = 0; _numSRA4 = 0;
	_numSRC1 = 0 ; _numSRC2 = 0; _numSRC3 = 0;
        NCUTS=16;

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
	vector<Jet*> nonBJets;
        vector<Jet*> trueBJets; //for debugging
        for (Jet* jet : event->jets()) {
          if (jet->pT() > 20. && fabs(jet->eta()) < 4.5) baselineJets.push_back(jet);
          if(jet->isBJet() && fabs(jet->eta()) < 2.5 && jet->pT() > 20.){
	    bJets.push_back(jet);
	  }
	  else {
	    nonBJets.push_back(jet);
	  }
	}

        // Overlap removal
        vector<Particle*> signalElectrons;
        vector<Particle*> signalMuons;
        vector<Particle*> electronsForVeto;
        vector<Particle*> muonsForVeto;
       
        vector<Jet*> signalJets;
	vector<Jet*> signalBJets;

        
        JetLeptonOverlapRemoval(nonBJets,baselineElectrons,0.2);
	LeptonJetOverlapRemoval(baselineElectrons,nonBJets,0.4);
	LeptonJetOverlapRemoval(baselineElectrons,bJets,0.4);
	LeptonJetOverlapRemoval(baselineMuons,signalJets,0.4);
	
	for (Jet* jet : bJets) {
          if (jet->pT() > 35. && fabs(jet->eta()) < 2.8) {
	    signalJets.push_back(jet); 
	    signalBJets.push_back(jet);
	  }
	}
	
	for (Jet* jet : nonBJets) {
          if (jet->pT() > 35. && fabs(jet->eta()) < 2.8) signalJets.push_back(jet); 
	}
	
	for (Particle* electron : baselineElectrons) {
	  signalElectrons.push_back(electron);
	}
	
	for (Particle* muon : baselineMuons) {
	  signalMuons.push_back(muon);
	}
	
        // We now have the signal electrons, muons, jets and b jets- move on to the analysis

        // Calculate common variables and cuts first
        int nElectrons = signalElectrons.size();
        int nMuons = signalMuons.size();
        int nJets = signalJets.size();

	//Lepton veto
	bool cut_LeptonVeto=false;
	if((nElectrons + nMuons)>0)cut_LeptonVeto=true;

	//Calculate dphi(jet,met) for the three leading jets
	bool cut_dPhiJets=false;
	bool cut_dPhiJet3=false;
        bool cut_dPhiJet2=false;
        bool cut_dPhiJet1=false;
        float dphi_jetmet1=9999;
        if(nJets>0)dphi_jetmet1=std::acos(std::cos(signalJets.at(0)->phi()-ptot.phi()));
        float dphi_jetmet2=9999;
        if(nJets>1)dphi_jetmet2=std::acos(std::cos(signalJets.at(1)->phi()-ptot.phi()));
        float dphi_jetmet3=9999;
        if(nJets>2)dphi_jetmet3=std::acos(std::cos(signalJets.at(2)->phi()-ptot.phi()));

	if(dphi_jetmet3>3.14/fabs(5.0))cut_dPhiJet3=true;
        if(dphi_jetmet2>3.14/fabs(5.0))cut_dPhiJet2=true;
        if(dphi_jetmet1>3.14/fabs(5.0))cut_dPhiJet1=true;
        if(cut_dPhiJet1 && cut_dPhiJet2 && cut_dPhiJet3)cut_dPhiJets=true;

	//Number of b jets
	bool passBJetCut=false;
	if(signalBJets.size()>=2)passBJetCut=true;

	//MET > 150 GeV
	bool cut_METGt150=false;
	if(met>150.)cut_METGt150=true;

	//Calculate dphi(b,met) for the closest b-jet in phi to MET
        float dphi_bjetmet_min=9999.;
        float minphi =9999.;
        int whichb=0;
        for(int j=0; j<nJets; j++) {
          if(signalJets[j]->isBJet()) {
            if(fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())))<minphi) {
              minphi = fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())));
              dphi_bjetmet_min = minphi;
              whichb=j;
            }
          }
        }

        float mT_bjetmet_min = 0;
        if(passBJetCut) mT_bjetmet_min = sqrt(2*signalJets.at(whichb)->pT()*met*(1-std::cos(dphi_bjetmet_min)));
	
	bool cut_mTbjetmetGt175=false;
	if(mT_bjetmet_min>175.)cut_mTbjetmetGt175=true;

	//Calculate dphi(b,met) for the furthest b-jet in phi to MET
	float dphi_bjetmet_max=0.;
	float maxphi =0.;
	int whichb_max=0;
	for(int j=0; j<nJets; j++) {
	  if(signalJets[j]->isBJet()) {
	    if(fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())))>maxphi) {
	      maxphi = fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())));
	      dphi_bjetmet_max = maxphi;
	      whichb_max=j;
	    }
	  }
	}
	
	float mT_bjetmet_max = 0;
	if(passBJetCut) mT_bjetmet_max = sqrt(2*signalJets.at(whichb_max)->pT()*met*(1-std::cos(dphi_bjetmet_max)));
	
	//Common preselection for all signal regions in the fully resolved case
        bool passJetCutSRA=false;

        if(nJets>=6){
          if(signalJets[0]->pT() > 80.
             && signalJets[1]->pT() > 80.
             && signalJets[2]->pT() > 35.
             && signalJets[3]->pT() > 35.
             && signalJets[4]->pT() > 35.
             && signalJets[5]->pT() > 35.)passJetCutSRA=true;
        }

	//mjjj combinations
        TLorentzVector mbjj0; TLorentzVector mbjj1;
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
	
	//Need to form top quark four vectors from jets
	//Use the two leading b jets as the b jets (a slight departure from ATLAS which uses the two jets with the highest b weight)

	vector<Jet*> selectBJets;
	vector<Jet*> selectNonBJets;
	int bjetcount=0;
	for (Jet* jet : signalJets) {
	  if(jet->isBJet() && bjetcount<2){
	    bjetcount++;
	    selectBJets.push_back(jet);
	  }
	  if(!jet->isBJet())selectNonBJets.push_back(jet);
	  if(bjetcount>1)selectNonBJets.push_back(jet);
	}
	
        if(nJets>=6) {
          unsigned int j1 = 0 ; unsigned int j2 = 0; unsigned int j4 = 0; unsigned int j5 = 0; //int j6 = 0;
	  unsigned int b1 = 0;
          for(unsigned int k=0; k<selectNonBJets.size(); k++) {
            for(unsigned int l=0; l<selectNonBJets.size(); l++) {
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
          for(unsigned int p=0; p<selectBJets.size(); p++) {
            if(p!=j1 && p!=j2) {
              jet3.SetPtEtaPhiE(signalJets[p]->pT(),signalJets[p]->eta(),signalJets[p]->phi(),signalJets[p]->E());
              if(jet3.DeltaR(W1)<mindphi_w1j3) {
                b1 = p;
                mindphi_w1j3 = jet3.DeltaR(W1);
                T1 = W1+jet3;
              }
            }
          }
          double mindphi_45 = 9999.;
          for(unsigned int k=0; k<selectNonBJets.size(); k++) {
            for(unsigned int l=0; l<selectNonBJets.size(); l++) {
              if(k!=j1 && k!=j2 && l!=j1 && l!=j2 && k!=l) {
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
          for(unsigned int p=0; p<selectBJets.size(); p++) {
            if(p!=b1) {
              jet6.SetPtEtaPhiE(signalJets[p]->pT(),signalJets[p]->eta(),signalJets[p]->phi(),signalJets[p]->E());
              if(jet6.DeltaR(W2)<mindphi_w2j6) {
                //j6 = p;
                mindphi_w2j6 = jet6.DeltaR(W2);
                T2 = W2+jet6;
              }
            }
          }
	  mbjj0 = T1;
	  mbjj1 = T2;
	}

        bool cut_tau=true;
        //Tau Veto
        for (int j=0; j<nJets; j++) {
          if(!signalJets[j]->isBJet() && std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi()))<0.2*3.14)
            cut_tau=false;
        }
        //Calculate met/sqrt(HT) (use four leading jets only)
        //float HT=0;
        //if(nJets>=4)HT=signalJets[0]->pT()+signalJets[1]->pT()+signalJets[2]->pT()+signalJets[3]->pT();

       
        //Cutflow flags
        bool cut_mjjj0=false;
        bool cut_mjjj1=false;
      
        bool cut_6jets=false;
        bool cut_Btag=false;
     
        bool cut_METGt130=false;
        bool cut_METGt200=false;
        bool cut_METGt250=false;
        bool cut_METGt300=false;
        bool cut_METGt350=false;
      
	
        if(passJetCutSRA)cut_6jets=true;
        if(passBJetCut)cut_Btag=true;
       
        if(met>250.)cut_METGt250=true;
        if(met>300.)cut_METGt300=true;
        if(met>350.)cut_METGt350=true;
        //if(nJets>=6) {
	//if(mbjj0.M()<270 && mjjj0.M()>80) cut_mjjj0=true;
	//if(mjjj1.M()<270 && mjjj1.M()>80) cut_mjjj1=true;
        //}

	//Calculate min transverse mass between signal jets and ptmiss

	double mtMin=9999;
	for(Jet * jet : signalJets){
	  double dphi_jetmet=std::acos(std::cos(jet->phi()-ptot.phi()));
	  double mT=sqrt(2.*jet->pT()*met*(1. - cos(dphi_jetmet)));
	  if(mT<mtMin)mtMin=mT;
	}

	bool isSRA1=false;
	bool isSRA2=false;
	bool isSRA3=false;
	bool isSRA4=false;

	if(cut_LeptonVeto && cut_Btag && cut_METGt150 && cut_dPhiJets && cut_mTbjetmetGt175 && cut_6jets && mbjj0.M() < 225. && mbjj1.M() < 250. && cut_tau && cut_METGt150)isSRA1=true;
	
	if(cut_LeptonVeto && cut_Btag && cut_METGt150 && cut_dPhiJets && cut_mTbjetmetGt175 && cut_6jets && mbjj0.M() < 225. && mbjj1.M() < 250. && cut_tau && cut_METGt250)isSRA2=true;

	if(cut_LeptonVeto && cut_Btag && cut_METGt150 && cut_dPhiJets && cut_mTbjetmetGt175 && cut_6jets && mbjj0.M() > 50. && mbjj0.M() < 250. && mbjj1.M() > 50. && mbjj1.M() < 400. && mtMin > 50. && cut_tau && cut_METGt300)isSRA3=true;

	if(cut_LeptonVeto && cut_Btag && cut_METGt150 && cut_dPhiJets && cut_mTbjetmetGt175 && cut_6jets && mbjj0.M() > 50. && mbjj0.M() < 250. && mbjj1.M() > 50. && mbjj1.M() < 400. && mtMin > 50. && cut_tau && cut_METGt350)isSRA4=true;

	//Now do the mixed regions

	//Find highest pT b jet
	float leadBJetPt=0;
	float leadBJetID=0;
	
	if(passBJetCut){
	  for(int j=0; j<nJets; j++) {
	    if(signalJets[j]->isBJet()&&signalJets[j]->pT()>leadBJetPt){
	      leadBJetPt=signalJets[j]->pT();
	      leadBJetID=j;
	    }
	  }
	}
	
	//Find sub-leading pT b jet
	float subBJetPt=0;
	float subBJetID=0;
	
	if(passBJetCut){
	  for(int j=0; j<nJets; j++) {
	    if(signalJets[j]->isBJet()&&signalJets[j]->pT()>subBJetPt && j!=leadBJetPt){
	      subBJetPt=signalJets[j]->pT();
	      subBJetID=j;
	    }
	  }
	}
	
	//Work out dPhi between B jets
	float dPhiBB=0;
	
	if(passBJetCut){
	  dPhiBB=std::acos(std::cos(signalJets.at(leadBJetID)->phi()-signalJets.at(subBJetID)->phi()));
	}

	bool passJetCutSRC=false;

	if(nJets==5){
	  if(signalJets[0]->pT() > 80.
	     && signalJets[1]->pT() > 80.
	     && signalJets[2]->pT() > 35.
	     && signalJets[3]->pT() > 35.
	     && signalJets[4]->pT() > 35.)passJetCutSRC=true;
	}
	
	bool isSRC1=false;
	bool isSRC2=false;
	bool isSRC3=false;

	if(cut_LeptonVeto && cut_Btag && cut_METGt150 && cut_dPhiJets && cut_mTbjetmetGt175){

	  if(passJetCutSRC && mT_bjetmet_min > 185. && mT_bjetmet_max>205. && met>160. && dPhiBB > (0.2*3.14))isSRC1=true;

	  if(passJetCutSRC && mT_bjetmet_min > 200. && mT_bjetmet_max>290. && met>160. && dPhiBB > (0.2*3.14))isSRC2=true;

	  if(passJetCutSRC && mT_bjetmet_min > 200. && mT_bjetmet_max>325. && met>215. && dPhiBB > (0.2*3.14))isSRC3=true;

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

        /*for(int j=0;j<NCUTS;j++){
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
	    }*/

        //We're now ready to apply the cuts for each signal region
        //_numSR1, _numSR2, _numSR3;

	if(isSRA1)_numSRA1++;
	if(isSRA2)_numSRA2++;
	if(isSRA3)_numSRA3++;
	if(isSRA4)_numSRA4++;

	if(isSRC1)_numSRC1++;
	if(isSRC2)_numSRC2++;
	if(isSRC3)_numSRC3++;

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

        cout << "RESULTS 0LEP " << _numSRA1 << " " <<  _numSRA2 << " " << _numSRA3 << " " << _numSRA4 << " " << _numSRC1 << " " << _numSRC2 << " " << _numSRC3 << endl;


      }


      double loglikelihood() {
        /// @todo Implement!
        return 0;
      }


      void collect_results() {

        SignalRegionData results_SRA1;
        results_SRA1.set_observation(11.);
        results_SRA1.set_background(15.8);
        results_SRA1.set_backgroundsys(1.9);
        results_SRA1.set_signalsys(0.);
        results_SRA1.set_signal(_numSRA1);

	SignalRegionData results_SRA2;
        results_SRA2.set_observation(4.);
        results_SRA2.set_background(4.1);
        results_SRA2.set_backgroundsys(0.8);
        results_SRA2.set_signalsys(0.);
        results_SRA2.set_signal(_numSRA2);

	SignalRegionData results_SRA3;
        results_SRA3.set_observation(5.);
        results_SRA3.set_background(4.1);
        results_SRA3.set_backgroundsys(0.9);
        results_SRA3.set_signalsys(0.);
        results_SRA3.set_signal(_numSRA3);
       
	SignalRegionData results_SRA4;
        results_SRA4.set_observation(4.);
        results_SRA4.set_background(2.4);
        results_SRA4.set_backgroundsys(0.7);
        results_SRA4.set_signalsys(0.);
        results_SRA4.set_signal(_numSRA4);

	SignalRegionData results_SRC1;
        results_SRC1.set_observation(59.);
        results_SRC1.set_background(68.);
        results_SRC1.set_backgroundsys(7.);
        results_SRC1.set_signalsys(0.);
        results_SRC1.set_signal(_numSRC1);

	SignalRegionData results_SRC2;
        results_SRC2.set_observation(30.);
        results_SRC2.set_background(34.);
        results_SRC2.set_backgroundsys(5.);
        results_SRC2.set_signalsys(0.);
        results_SRC2.set_signal(_numSRC2);

	SignalRegionData results_SRC3;
        results_SRC3.set_observation(15.);
        results_SRC3.set_background(20.3);
        results_SRC3.set_backgroundsys(3.);
        results_SRC3.set_signalsys(0.);
        results_SRC3.set_signal(_numSRC3);

        add_result(results_SRA1);
        add_result(results_SRA2);
        add_result(results_SRA3);
	add_result(results_SRA4);
	add_result(results_SRC1);
        add_result(results_SRC2);
        add_result(results_SRC3);

        return;
      }

    };


    DEFINE_ANALYSIS_FACTORY(ATLAS_0LEPStop_20invfb)


  }
}
