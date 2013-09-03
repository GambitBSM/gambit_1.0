#include "Analysis.hpp"
#include <vector>
#include <cmath>
#include <memory>
#include "TLorentzVector.h"
#include "TVector2.h"
#include "MT2Calculator/ComputeMT2.h"

/* The ATLAS 1 lepton direct stop analysis (20fb^-1). 
   Code by Martin White.
   Known errors:
   a) The isolation is already applied in the simulation rather than after overlap removal
   b) The ATLAS analysis uses the two jets with the highest b tag weight for the MT2 calculation. This is impossible for us. Instead, we should use the two truth b jets. However, the b efficiency will be applied when preselecting events.
   c) The isolated track cut has not been applied

   Known features:
   a) Must run simulator with 75% b tagging efficiency and 2% mis-id rate
   b) For now have nicked ATLAS MT2 code. Need to check status of this for public release. The better option is to write a non-ROOT version later.
*/

namespace Gambit {


  using namespace std;

  //A useful MT2 class for this module
  class MT2 {
    
  public:
    MT2(){
      MT2tauB=0;
      aMT2_BM=0;
    }
    
    double MT2tauB;
    double aMT2_BM;
  };
    
    
  class Analysis_ATLAS_1LEPStop_20invfb : public Analysis {
  private:
    
    // Numbers passing cuts
    int _numTN1Shape_bin1, _numTN1Shape_bin2, _numTN1Shape_bin3,
      _numTN2, _numTN3, _numBC1, _numBC2,_numBC3;

    vector<int> cutFlowVector;
    int NCUTS=20;

    // Debug histos
  public:

    Analysis_ATLAS_1LEPStop_20invfb() {
      _numTN1Shape_bin1 = 0; _numTN1Shape_bin2 = 0; _numTN1Shape_bin3 = 0;
      _numTN2 = 0; _numTN3 = 0; _numBC1 = 0;
      _numBC2 = 0; _numBC3 = 0;

      for(int i=0;i<NCUTS;i++){
	cutFlowVector.push_back(0);
      }
      
    }


    // void init() {
    // }
    MT2 MT2helper(vector<Jet *> jets, vector<Particle *>  electrons,  vector<Particle *> muons, P4 metVec){

      MT2 results;
      
      bool passmu = false;
      if(muons.size()==1)passmu=true;

      bool passel = false;
      if(electrons.size()==1)passel=true;

      int nJet = jets.size();
      if(nJet < 2)return results;

      //ATLAS use the two jets with highest MV1 weights
      //DELPHES does not have a continuous b weight
      //Thus must approximate using the two true b jets
      Jet * trueBjet1=0; //need to assign this
      Jet * trueBjet2=0; //nee to assign this

      int nTrueBJets=0;
      for(Jet * tmpJet: jets){
	if(tmpJet->getPdgId()==5){
	  trueBjet1=tmpJet;		     
	  nTrueBJets++;
	  break;
	}
      }
       
      for(Jet * tmpJet: jets){
	if(tmpJet->getPdgId()==5 && tmpJet!=trueBjet1){
	  trueBjet2=tmpJet;		     
	  nTrueBJets++;
	  break;
	}
      }

      if(nTrueBJets<2)return results;

      TLorentzVector jet1B,jet2B;
      jet1B.SetPtEtaPhiE(trueBjet1->pT(),trueBjet1->eta(),trueBjet1->phi(),trueBjet1->E());
      jet2B.SetPtEtaPhiE(trueBjet2->pT(),trueBjet2->eta(),trueBjet2->phi(),trueBjet2->E());
     
      P4 leptontmp;
      float leptonmass = 0;
      if(passel){
	leptonmass = 0.510998910; //MeV
	leptontmp = electrons[0]->mom();
      }
      else if(passmu){
	leptonmass =  105.658367; // MeV
        leptontmp = muons[0]->mom();
      }

      TLorentzVector lepton;
      lepton.SetPtEtaPhiM(leptontmp.pT(),leptontmp.eta(),leptontmp.phi(),leptonmass/1000.);

      TLorentzVector MET;
      MET.SetXYZM(metVec.px(),metVec.py(),0.,0.);

      ComputeMT2 stuff(jet1B+lepton,jet2B,MET,0.,80.);
      double mt2a  = stuff.ComputeNumeric();
      
      ComputeMT2 stuff2(jet2B+lepton,jet1B,MET,0.,80.);
      double mt2b = stuff2.ComputeNumeric();
      
      double aMT2_BM = min(mt2a,mt2b);
      results.aMT2_BM=aMT2_BM;
      
      if (nJet > 3){
        Jet * jet3=0;
	for(Jet * current: jets){
	  if (current == trueBjet1)continue;
	  if (current == trueBjet2)continue;
	  jet3 = current;
	  break;
	}
        TLorentzVector jet3B;
	jet3B.SetPtEtaPhiE(jet3->pT(),jet3->eta(),jet3->phi(),jet3->E());
        ComputeMT2 stuff3(jet3B,lepton,MET,0.,0.);
	double MT2tauB = stuff3.ComputeNumeric();
	results.MT2tauB=MT2tauB;
      }
      return results;
    }


    void analyze(const Event* event) {
      // Missing energy
    

      P4 ptot = event->missingMom();
      double met = event->met();

      // Now define vectors of baseline objects
      vector<Particle*> baselineElectrons;
      for (Particle* electron : event->electrons()) {
        if (electron->pT() > 10. && fabs(electron->eta()) < 2.47) baselineElectrons.push_back(electron);
	//cout << "Electron E " << electron->E() << endl;
      }
      vector<Particle*> baselineMuons;
      for (Particle* muon : event->muons()) {
        if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) baselineMuons.push_back(muon);
	//cout << "Muon E " << muon->E() << endl;
      }

      vector<Jet*> baselineJets;
      vector<Jet*> bJets;
      vector<Jet*> trueBJets; //for debugging
      for (Jet* jet : event->jets()) {
	//cout << "jet E " << jet->E() << endl;
        if (jet->pT() > 20. && fabs(jet->eta()) < 10.0) baselineJets.push_back(jet); 
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
	if (!overlap&&fabs(baselineJets.at(iJet)->eta())<2.5 && baselineJets.at(iJet)->pT()>25.)signalJets.push_back(baselineJets.at(iJet));
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
      int nBjets = bJets.size();

      //if(leptonsForVeto.size()>0 && leptonsForVeto[0]->pT()>25.)cout << "Leptons size " << leptonsForVeto.size() << " muons " << nMuons << " electrons " << nElectrons << endl;

      //Common preselection for all signal regions
      bool passJetCut=false;
      bool passBJetCut=false;
      bool passTrueBJetCut=false;// For debugging
      if(nJets>=4){
	if(signalJets[0]->pT() > 80.
	   && signalJets[1]->pT() > 60.
	   && signalJets[2]->pT() > 40.
	   && signalJets[3]->pT() > 25.)passJetCut=true;

	if(signalJets[0]->isBJet() ||
	   signalJets[1]->isBJet() ||
	   signalJets[2]->isBJet() ||
	   signalJets[3]->isBJet())passBJetCut=true;
      }
         
      //Must have exactly one lepton
      //cout << "leptonsForVeto size" << leptonsForVeto.size() << endl;
          
      //Calculate dphi(jet,met) for the two leading jets
      float dphi_jetmet1=9999;
      if(nJets>0)dphi_jetmet1=std::acos(std::cos(signalJets.at(0)->phi()-ptot.phi()));
      float dphi_jetmet2=9999;
      if(nJets>1)dphi_jetmet2=std::acos(std::cos(signalJets.at(1)->phi()-ptot.phi()));
  
      //Calculate met/sqrt(HT) (use four leading jets only)
      float HT=0;
      if(nJets>=4)HT=signalJets[0]->pT()+signalJets[1]->pT()+signalJets[2]->pT()+signalJets[3]->pT();
      float metOverSqrtHT=met/sqrt(HT);
  
      //Calculate mT
      P4 lepVec;
      if(nElectrons==1)lepVec=signalElectrons[0]->mom();
      if(nMuons==1)lepVec=signalMuons[0]->mom();
      //cout << "DPHI" << ptot.deltaPhi(lepVec) << endl;
      //Note: phi here should be in the range -pi to pi
      //float mT = sqrt(2.*lepVec.pT()*met*(1.-cos(ptot.deltaPhi(lepVec))));
      //This is the ATLAS definition of dphi for this analysis
      //Note that it gives different answers to our dphi function (given above)
      float mT=sqrt(2.*lepVec.pT()*met*(1. - cos(TVector2::Phi_mpi_pi(lepVec.phi()-ptot.phi()))));

      //Calculate meff (all jets with pT>30 GeV, lepton pT and met)
      float meff = met + lepVec.pT();
      for (Jet* jet : signalJets) {
	if(jet->pT()>30.)meff += jet->pT();
      }
      //Cutflow for SRtN2
      bool cut_1SignalElectron=false;
      bool cut_1SignalMuon=false;
      bool cut_4jets=false;
      bool cut_Btag=false;
      bool cut_METGt100=false;
      bool cut_sigGt5=false;
      bool cut_dPhiJet2=false;
      bool cut_METGt200=false;
      bool cut_sigGt13=false;
      bool cut_mTGt140=false;
      bool cut_PassHadTop=false;


      if(signalElectrons.size()==1 && electronsForVeto.size()==1 && muonsForVeto.size()==0)cut_1SignalElectron=true;
      if(signalMuons.size()==1 && muonsForVeto.size()==1 && electronsForVeto.size()==0)cut_1SignalMuon=true;
      
      if(passJetCut)cut_4jets=true;
      if(passBJetCut)cut_Btag=true;
      if(met>100.)cut_METGt100=true;
      if(metOverSqrtHT>5.)cut_sigGt5=true;
      if(dphi_jetmet2>0.8)cut_dPhiJet2=true;
      if(met>200.)cut_METGt200=true;
      if(metOverSqrtHT>13.)cut_sigGt13=true;
      if(mT>140.)cut_mTGt140=true;
      
      //Apply the basic preselection to save costly MT2 calculation
      if(!((cut_1SignalElectron || cut_1SignalMuon) && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2))return;

      /*for(int j=0;j<NCUTS;j++){
	if(
	   (j==0) || 

	   //Electron cutflow
	   (j==1 && cut_1SignalElectron) ||
	  
	   (j==2 && cut_1SignalElectron && cut_4jets) ||

	   (j==3 && cut_1SignalElectron && cut_4jets && cut_Btag) ||

	   (j==4 && cut_1SignalElectron && cut_4jets && cut_Btag && cut_METGt100) ||
	  
	   (j==5 && cut_1SignalElectron && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5) ||

	   (j==6 && cut_1SignalElectron && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2) ||

	   (j==7 && cut_1SignalElectron && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2 && cut_METGt200) ||
	   
	   (j==8 && cut_1SignalElectron && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2 && cut_METGt200 && cut_sigGt13) ||

	   (j==9 && cut_1SignalElectron && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2 && cut_METGt200 && cut_sigGt13 && cut_mTGt140) ||

	   //Muon cutflow
	   (j==10 && cut_1SignalMuon) ||
	   
	   (j==11 && cut_1SignalMuon && cut_4jets) ||
	   
	   (j==12 && cut_1SignalMuon && cut_4jets && cut_Btag) ||
	   
	   (j==13 && cut_1SignalMuon && cut_4jets && cut_Btag && cut_METGt100) ||
	  
	   (j==14 && cut_1SignalMuon && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5) ||

	   (j==15 && cut_1SignalMuon && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2) ||

	   (j==16 && cut_1SignalMuon && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2 && cut_METGt200) ||
	   
	   (j==17 && cut_1SignalMuon && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2 && cut_METGt200 && cut_sigGt13) ||

	   (j==18 && cut_1SignalMuon && cut_4jets && cut_Btag && cut_METGt100 && cut_sigGt5 && cut_dPhiJet2 && cut_METGt200 && cut_sigGt13 && cut_mTGt140) 
	   )cutFlowVector[j]++;
	   }*/
      
      //Do hadronic top reconstruction
      float mindR1=9999.;
      float mindR2=9999.;
      float index1=9999.;
      float index2=9999.;
      float index3=9999.;
      
      bool whad=false;
      bool Thad=false;
      float mHadTop=0;
     
      for(int iJet=0;iJet<nJets;iJet++){
	for(int jJet=0;jJet<nJets;jJet++){
	  if(iJet != jJet){
	    TLorentzVector iJetVec;
	    iJetVec.SetPtEtaPhiE(signalJets[iJet]->pT(),signalJets[iJet]->eta(),signalJets[iJet]->phi(),signalJets[iJet]->E());
	    TLorentzVector jJetVec;
	    jJetVec.SetPtEtaPhiE(signalJets[jJet]->pT(),signalJets[jJet]->eta(),signalJets[jJet]->phi(),signalJets[jJet]->E());
	    cout << "JETMASS " << (iJetVec+jJetVec).M() << endl;
  	    if(iJetVec.DeltaR(jJetVec) < mindR1 && (iJetVec+jJetVec).M() > 60.){
	      mindR1 =iJetVec.DeltaR(jJetVec);
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
	    TLorentzVector kJetVec;
	    kJetVec.SetPtEtaPhiE(signalJets[kJet]->pT(),signalJets[kJet]->eta(),signalJets[kJet]->phi(),signalJets[kJet]->E());
	    TLorentzVector JetVec1;
	    JetVec1.SetPtEtaPhiE(signalJets[index1]->pT(),signalJets[index1]->eta(),signalJets[index1]->phi(),signalJets[index1]->E());
	    TLorentzVector JetVec2;
	    JetVec2.SetPtEtaPhiE(signalJets[index2]->pT(),signalJets[index2]->eta(),signalJets[index2]->phi(),signalJets[index2]->E());
	    
	    if(kJetVec.DeltaR(JetVec1+JetVec2)<mindR2 && (JetVec1+JetVec2+kJetVec).M() > 130.){ 
	      mindR2=kJetVec.DeltaR(JetVec1+JetVec2);
	      index3=kJet;
	      Thad=true;
	    }
	  }
	}
      }
      if(Thad){
	TLorentzVector JetVec1;
	JetVec1.SetPtEtaPhiE(signalJets[index1]->pT(),signalJets[index1]->eta(),signalJets[index1]->phi(),signalJets[index1]->E());
	TLorentzVector JetVec2;
	JetVec2.SetPtEtaPhiE(signalJets[index2]->pT(),signalJets[index2]->eta(),signalJets[index2]->phi(),signalJets[index2]->E());
	TLorentzVector JetVec3;
	JetVec3.SetPtEtaPhiE(signalJets[index3]->pT(),signalJets[index3]->eta(),signalJets[index3]->phi(),signalJets[index3]->E());
	mHadTop = (JetVec1+JetVec2+JetVec3).M();
      }
      
      bool passHadTop=false;
      cout << "mHADTOP " << mHadTop << endl;
      if(mHadTop>130. && mHadTop<205.)passHadTop=true;
      
      if(passHadTop)cut_PassHadTop=true;
      
      //Do MT2 calculations (note: do these last, since they are slowest)
    
      MT2 mt2s = MT2helper(signalJets,signalElectrons,signalMuons,ptot);
    
      double amt2 = mt2s.aMT2_BM;
      double mt2tau = mt2s.MT2tauB;
    
      //double amt2=0;
      //double mt2tau=0;


      //We're now ready to apply the cuts for each signal region
      //_numTN1Shape_bin1, _numTN1Shape_bin2, _numTN1Shape_bin3,_numTN2, _numTN3, _numBC1, _numBC2, _numBC3;

      //Do the three bins of the TN1 shape fit
      if(dphi_jetmet1>0.8 && 
	 dphi_jetmet2>0.8 &&
	 mT>140. && //use tightest mT bin only for now
	 metOverSqrtHT>5. &&
	 passHadTop &&
	 nBjets >= 1 &&
	 bJets[0]->pT()>25.){
	
	if(met>100. && met<125.)_numTN1Shape_bin1++;
	if(met>125. && met<150.)_numTN1Shape_bin2++;
	if(met>150.)_numTN1Shape_bin3++;
      }

      //Do SRtN2      
      if(dphi_jetmet2>0.8 &&
	 met>200. &&
	 metOverSqrtHT>13. &&
	 mT>140. &&
	 amt2>170. &&
	 passHadTop &&
	 bJets[0]->pT()>25.)_numTN2++;
      
      if(dphi_jetmet2>0.8 &&
	 met>200. &&
	 metOverSqrtHT>13. &&
	 mT>140.)cout << "PASSPRESEL" << endl;

      if(dphi_jetmet2>0.8 &&
	 met>200. &&
	 metOverSqrtHT>13. &&
	 mT>140. &&
	 bJets[0]->pT()>25. &&
	 passHadTop)cout << "PASSEDHADTOP" << endl;

      if(dphi_jetmet2>0.8 &&
	 met>200. &&
	 metOverSqrtHT>13. &&
	 mT>140. &&
	 bJets[0]->pT()>25. &&
	 amt2>170.)cout << "PASSEDAMT2" << endl;

      
      //Do SRtN3      
      if(dphi_jetmet1>0.8 &&
	 dphi_jetmet2>0.8 &&
	 met>275. &&
	 metOverSqrtHT>11. &&
	 mT>200. &&
	 amt2>175. &&
	 mt2tau>80. &&
	 passHadTop &&
	 bJets[0]->pT()>25.)_numTN3++;

      //Do SRbC1      
      if(dphi_jetmet1>0.8 &&
	 dphi_jetmet2>0.8 &&
	 met>150. &&
	 metOverSqrtHT>7. &&
	 mT>120. &&
	 bJets[0]->pT()>25.)_numBC1++;

      //Do SRbC2      
      if(dphi_jetmet1>0.8 &&
	 dphi_jetmet2>0.8 &&
	 met>160. &&
	 metOverSqrtHT>8. &&
	 mT>120. &&
	 meff > 550. &&
	 amt2>175. &&
	 nBjets >=2 &&
	 bJets[0]->pT()>100.&&
	 bJets[1]->pT()>50)_numBC2++;

      //Do SRbC3     
      if(dphi_jetmet1>0.8 &&
	 dphi_jetmet2>0.8 &&
	 met>160. &&
	 metOverSqrtHT>8. &&
	 mT>120. &&
	 meff > 700. &&
	 amt2>200. &&
	 nBjets >=2 &&
	 bJets[0]->pT()>120.&&
	 bJets[1]->pT()>90)_numBC3++;
      

      return;
      
    }
      
    void finalize() {
      cout << "NUMEVENTS: " << _numTN1Shape_bin1 << " " << _numTN1Shape_bin2 << " " << _numTN1Shape_bin3 << " " << _numTN2 << " "  << _numTN3 << " " <<  _numBC1 << " " << _numBC2 << " " << _numBC3 << endl;
 
      /*cout << "@@@ Electron cutflow for STtN2" << endl;
      cout << "@@@ No cuts " << cutFlowVector[0] << endl;
      cout << "@@@ Electron (= 1 signal) " << cutFlowVector[1] << endl;
      cout << "@@@ 4 jets (80, 60, 40, 25) " << cutFlowVector[2] << endl;
      cout << "@@@ at least 1 b-tag (4 lead. jets)" << cutFlowVector[3] << endl;
      cout << "@@@ MET> 100 GeV " << cutFlowVector[4] << endl;
      cout << "@@@ significance> 5 " << cutFlowVector[5] << endl;
      cout << "@@@ dPhiJet2 > 0.8 " << cutFlowVector[6] << endl;
      cout << "@@@ MET > 200 " << cutFlowVector[7] << endl;
      cout << "@@@ signficance > 13 " << cutFlowVector[8] << endl;
      cout << "@@@ mT>140 " << cutFlowVector[9] << endl;

      cout << "@@@ Muon cutflow for STtN2" << endl;
      cout << "@@@ No cuts " << cutFlowVector[0] << endl;
      cout << "@@@ Muon (= 1 signal) " << cutFlowVector[10] << endl;
      cout << "@@@ 4 jets (80, 60, 40, 25) " << cutFlowVector[11] << endl;
      cout << "@@@ at least 1 b-tag (4 lead. jets)" << cutFlowVector[12] << endl;
      cout << "@@@ MET> 100 GeV " << cutFlowVector[13] << endl;
      cout << "@@@ significance> 5 " << cutFlowVector[14] << endl;
      cout << "@@@ dPhiJet2 > 0.8 " << cutFlowVector[15] << endl;
      cout << "@@@ MET > 200 " << cutFlowVector[16] << endl;
      cout << "@@@ signficance > 13 " << cutFlowVector[17] << endl;
      cout << "@@@ mT>140 " << cutFlowVector[18] << endl;*/
    }


    double logLikelihood() {
      /// @todo Implement!
      return 1.0;
    }
    
    
    };
    

  }
