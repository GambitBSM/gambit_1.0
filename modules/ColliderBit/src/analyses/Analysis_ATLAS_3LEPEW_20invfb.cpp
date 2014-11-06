#include "Analysis.hpp"
#include <vector>
#include <cmath>
#include <memory>
#include "TLorentzVector.h"
#include "TVector2.h"
#include <iomanip>
#include "mt2_bisect.h"

/* The ATLAS 3 lepton EW analysis (20fb^-1)

   based on: arXiv: 1402.7029

   Code by Martin White

   Known features: Signal leptons in the paper have certain isolation plus ID cuts (these are ignored here by default)
   

*/

namespace Gambit {
  namespace ColliderBit {

    using namespace std;

    class Analysis_ATLAS_3LEPEW_20invfb : public Analysis {
    private:

      // Numbers passing cuts
      int _num_SR0tau_a_bin_1;
      int _num_SR0tau_a_bin_2;
      int _num_SR0tau_a_bin_3;
      int _num_SR0tau_a_bin_4;
      int _num_SR0tau_a_bin_5;
      int _num_SR0tau_a_bin_6;
      int _num_SR0tau_a_bin_7;
      int _num_SR0tau_a_bin_8;
      int _num_SR0tau_a_bin_9;
      int _num_SR0tau_a_bin_10;
      int _num_SR0tau_a_bin_11;
      int _num_SR0tau_a_bin_12;
      int _num_SR0tau_a_bin_13;
      int _num_SR0tau_a_bin_14;
      int _num_SR0tau_a_bin_15;
      int _num_SR0tau_a_bin_16;
      int _num_SR0tau_a_bin_17;
      int _num_SR0tau_a_bin_18;
      int _num_SR0tau_a_bin_19;
      int _num_SR0tau_a_bin_20;
      int _num_SR0tau_b;
      int _num_SR1tau;
      int _num_SR2tau_a;
      int _num_SR2tau_b;
      vector<int> cutFlowVector_alt;
      vector<int> cutFlowVector;
      vector<string> cutFlowVector_str;
      const static int NCUTS=8;

      // Debug histos

    public:

      Analysis_ATLAS_3LEPEW_20invfb() {
     
	_num_SR0tau_a_bin_1=0;
	_num_SR0tau_a_bin_2=0;
	_num_SR0tau_a_bin_3=0;
	_num_SR0tau_a_bin_4=0;
	_num_SR0tau_a_bin_5=0;
	_num_SR0tau_a_bin_6=0;
	_num_SR0tau_a_bin_7=0;
	_num_SR0tau_a_bin_8=0;
	_num_SR0tau_a_bin_9=0;
	_num_SR0tau_a_bin_10=0;
	_num_SR0tau_a_bin_11=0;
	_num_SR0tau_a_bin_12=0;
	_num_SR0tau_a_bin_13=0;
	_num_SR0tau_a_bin_14=0;
	_num_SR0tau_a_bin_15=0;
	_num_SR0tau_a_bin_16=0;
	_num_SR0tau_a_bin_17=0;
	_num_SR0tau_a_bin_18=0;
	_num_SR0tau_a_bin_19=0;
	_num_SR0tau_a_bin_20=0;
	_num_SR0tau_b=0;
	_num_SR1tau=0;
	_num_SR2tau_a=0;
	_num_SR2tau_b=0;
	
        for(int i=0;i<NCUTS;i++){
          cutFlowVector.push_back(0);
          cutFlowVector_str.push_back("");
          cutFlowVector_alt.push_back(0);
        }

      }

      void LepLepOverlapRemoval(vector<Particle*> &vec1, vector<Particle*> &vec2, double DeltaRMax) {
        //Routine to do electron-electron overlap check
        //Discard lowest energy electron if two are found overlapping
        vector<Particle*> Survivors;

        for(unsigned int it1 = 0; it1 < vec1.size(); it1++) {
          bool overlap = false;
          P4 lep1mom=vec1.at(it1)->mom();
          for(unsigned int it2 = 0; it2 < vec2.size(); it2++) {
            if(it1==it2)continue;
            P4 lep2mom=vec2.at(it2)->mom();
            float dR;

            dR=lep1mom.deltaR_eta(lep2mom);

            if(dR <= DeltaRMax && lep1mom.E()<lep2mom.E()) overlap=true;
          }
          if(overlap) continue;
          Survivors.push_back(vec1.at(it1));
        }
        vec1=Survivors;

        return;
      }

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


      void analyze(const Event* event) {

        // Missing energy
        P4 ptot = event->missingmom();
        double met = event->met();

        // Now define vectors of baseline objects
        vector<Particle*> signalElectrons;
        for (Particle* electron : event->electrons()) {
          if (electron->pT() > 10. && fabs(electron->eta()) < 2.47) signalElectrons.push_back(electron);
        }
        vector<Particle*> signalMuons;
        for (Particle* muon : event->muons()) {
          if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) signalMuons.push_back(muon);
        }

        vector<Jet*> signalJets;
        vector<Jet*> bJets;

        for (Jet* jet : event->jets()) {
          if (jet->pT() > 20. && fabs(jet->eta()) < 2.5) signalJets.push_back(jet);
          //if(jet->isBJet() && fabs(jet->eta()) < 2.5 && jet->pT() > 20.) bJets.push_back(jet);
        }

	vector<Particle*> signalTaus;
	
	for (Particle* tau : event->taus()) {
	  if (tau->pT() > 20. && fabs(tau->eta()) < 2.47) signalTaus.push_back(tau);
	}


        // Overlap removal

        //Note that ATLAS use |eta|<10 for removing jets close to electrons
        //Then 2.8 is used for the rest of the overlap process
        //Then the signal cut is applied for signal jets
        //cout << "BEFORE REMOVAL nele nmuo njet " << baselineElectrons.size() << " " << baselineMuons.size() << " " << signalJets.size() << endl;

        LepLepOverlapRemoval(signalElectrons,signalElectrons,0.1);
	JetLeptonOverlapRemoval(signalJets,signalElectrons,0.2);
	LepLepOverlapRemoval(signalTaus,signalElectrons,0.2);
	LepLepOverlapRemoval(signalTaus,signalMuons,0.2);
        LeptonJetOverlapRemoval(signalElectrons,signalJets,0.4);
        LeptonJetOverlapRemoval(signalMuons,signalJets,0.4);
	//Note have not bothered with close-by electron and muon pairs (bremsstrahlung probably not significant in signal MC)
	JetLeptonOverlapRemoval(signalJets,signalTaus,0.2);

        //cout << "AFTER REMOVAL nele nmuo njet " << signalElectrons.size() << " " << signalMuons.size() << " " << signalJets.size() << endl;

        int numElectrons=signalElectrons.size();
        int numMuons=signalMuons.size();
	int numTaus=signalTaus.size();

        //Search for at least one SFOS pair
        //m_SFOS must be > 12 GeV

	bool mSFOS12Cut=true;

        vector<double> massesOfSFOSPairs;
        for(int iEl1=0;iEl1<numElectrons;iEl1++){
          for(int iEl2=iEl1;iEl2<numElectrons;iEl2++){
            if(signalElectrons.at(iEl1)->pid()==-1*signalElectrons.at(iEl2)->pid()){
              P4 elVec1=signalElectrons.at(iEl1)->mom();
              P4 elVec2=signalElectrons.at(iEl2)->mom();
              double invMass=(elVec1+elVec2).m();

              if(invMass>12.){
		massesOfSFOSPairs.push_back(invMass);
	      }
	      else {
		mSFOS12Cut=false;
	      }
            }
          }
        }


        for(int iMu1=0;iMu1<numMuons;iMu1++){
          for(int iMu2=iMu1;iMu2<numMuons;iMu2++){
            if(signalMuons.at(iMu1)->pid()==-1*signalMuons.at(iMu2)->pid()){
              P4 muVec1=signalMuons.at(iMu1)->mom();
              P4 muVec2=signalMuons.at(iMu2)->mom();
              double invMass=(muVec1+muVec2).m();

              if(invMass>12.){
		massesOfSFOSPairs.push_back(invMass);
	      }
	      else {
		mSFOS12Cut=false;
	      }
            }
          }
        }

        //Make b jet container
        for (Jet* jet : signalJets) {
          if(jet->isBJet())bJets.push_back(jet);
        }

        bool leptonCut=((numElectrons+numMuons)==3 && massesOfSFOSPairs.size()>0);

	//Leptons must be separated from each other by at least deltaR=0.3
	bool separationCut=true;
	if(leptonCut){
	  //Check electrons against electrons
	  for(int iEl1=0;iEl1<numElectrons;iEl1++){
	    for(int iEl2=iEl1;iEl2<numElectrons;iEl2++){
              P4 elVec1=signalElectrons.at(iEl1)->mom();
              P4 elVec2=signalElectrons.at(iEl2)->mom();
              double dR=elVec1.deltaR_eta(elVec2);
	      if(dR<=0.3)separationCut=false;
            }
          }

	  //Check electrons against muons
	  for(int iEl1=0;iEl1<numElectrons;iEl1++){
	    for(int iMu1=0;iMu1<numMuons;iMu1++){
              P4 elVec1=signalElectrons.at(iEl1)->mom();
              P4 muVec1=signalMuons.at(iMu1)->mom();
              double dR=elVec1.deltaR_eta(muVec1);
	      if(dR<=0.3)separationCut=false;
            }
          }

	  //Check muons against muons
	  for(int iMu1=0;iMu1<numMuons;iMu1++){
	    for(int iMu2=iMu1;iMu2<numMuons;iMu2++){
              P4 muVec1=signalMuons.at(iMu1)->mom();
              P4 muVec2=signalMuons.at(iMu2)->mom();
              double dR=muVec1.deltaR_eta(muVec2);
	      if(dR<=0.3)separationCut=false;
            }
          }
        }
	
	//Lepton pT trigger cuts
        bool triggerE=false;
        bool triggerMU=false;
        bool triggerMUMU_Sym=false;
        bool triggerMUMU_ASym=false;
        bool triggerEE_Sym=false;
        bool triggerEE_ASym=false;
        bool triggerEMU=false;
        bool triggerMUE=false;

        for(Particle * ele : signalElectrons){
          if(ele->pT()>25.)triggerE=true;
        }

        for(Particle * muo : signalMuons){
          if(muo->pT()>25.)triggerMU=true;
        }

        int numMuonsGt14=0;
        int numMuonsGt18=0;

        for(Particle * muo : signalMuons){
          if(muo->pT()>14.)numMuonsGt14++;
          if(muo->pT()>18.)numMuonsGt18++;
        }

        if(numMuonsGt14>=2)triggerMUMU_Sym=true;
        if(numMuons>=2 && numMuonsGt18>=1)triggerMUMU_ASym=true;

        int numEleGt14=0;
        int numEleGt25=0;

        for(Particle * ele : signalElectrons){
          if(ele->pT()>14.)numEleGt14++;
          if(ele->pT()>25.)numEleGt25++;

        }

        if(numEleGt14>=2)triggerEE_Sym=true;
        if(numElectrons>=2 && numEleGt25>=1)triggerEE_ASym=true;

        if(numElectrons>0 && numMuons>0 && numEleGt14>0)triggerEMU=true;
        if(numElectrons>0 && numMuons>0 && numMuonsGt18>0)triggerMUE=true;

        bool trigger=false;
        if(triggerE || triggerMU || triggerMUMU_Sym || triggerMUMU_ASym || triggerEE_Sym || triggerEE_ASym || triggerEMU || triggerMUE )trigger=true;

	bool atLeastOneEorMu=false;
	if(numElectrons>0 || numMuons>0)atLeastOneEorMu=true;

	//Start the signal regions here

	//SR0tau_a: 20 bins!
	
        //Find m_SFOS that is closest to the Z mass
        double smallestDiff=9999;
        double mSFOS=0;
        for(double mass : massesOfSFOSPairs){
          if(fabs(mass-91.2)<smallestDiff){
            smallestDiff=fabs(mass-91.2);
            mSFOS=mass;
          }
        }

        //Now find the lepton that isn't in that invariant mass
        vector<Particle*> signalLeptons;

        for (Particle* ele : signalElectrons) {
          signalLeptons.push_back(ele);
        }

        for (Particle* muo : signalMuons) {
          signalLeptons.push_back(muo);
        }

        int extralepID=-1;
        int lep1ID=-1;
        int lep2ID=-1;
        for(unsigned int iLep=0;iLep<signalLeptons.size();iLep++){
          for(unsigned int jLep=iLep;jLep<signalLeptons.size();jLep++){
            P4 lepVec1=signalLeptons.at(iLep)->mom();
            P4 lepVec2=signalLeptons.at(jLep)->mom();
            double invMass=(lepVec1+lepVec2).m();
            //cout << "INV MASS " << iLep << " " << jLep << " " << invMass << endl;
            if(invMass==mSFOS){
              lep1ID=iLep;
              lep2ID=jLep;
            }
          }
        }

        if(lep1ID!=-1 && lep1ID!=0 && lep2ID!=-1 && lep2ID!=0)extralepID=0;
        if(lep1ID!=-1 && lep1ID!=1 && lep2ID!=-1 && lep2ID!=1)extralepID=1;
        if(lep1ID!=-1 && lep1ID!=2 && lep2ID!=-1 && lep2ID!=2)extralepID=2;


        //if(leptonCut)cout << "extralepID " << extralepID << endl;
        float mT=0;
        if(signalLeptons.size()==3 && extralepID!=-1){
          P4 extralepVec=signalLeptons.at(extralepID)->mom();
          mT=sqrt(2.*extralepVec.pT()*met*(1. - cos(TVector2::Phi_mpi_pi(extralepVec.phi()-ptot.phi()))));
        }

	//Now calculate trilepton invariant mass
	float m3l=0;
	if(signalLeptons.size()==3)m3l=(signalLeptons.at(0)->mom()+signalLeptons.at(1)->mom()+signalLeptons.at(2)->mom()).m();
	bool threelZVeto=false;
	if(fabs(m3l-91.2)<10.)threelZVeto=true;

	//Now apply the actual cuts for SR0tau_a

	if(trigger && signalLeptons.size()==3 && mSFOS12Cut && atLeastOneEorMu && separationCut && bJets.size()==0 && signalTaus.size()==0){
	  
	  if(mSFOS>12. && mSFOS < 40. && mT>0. && mT<80. && met>50. && met<90.)_num_SR0tau_a_bin_1++;
	  if(mSFOS>12. && mSFOS < 40. && mT>0. && mT<80. && met>90.)_num_SR0tau_a_bin_2++;
	  if(mSFOS>12. && mSFOS < 40. && mT>80. && met>50. && met<75.)_num_SR0tau_a_bin_3++;
	  if(mSFOS>12. && mSFOS < 40. && mT>80. && met>75.)_num_SR0tau_a_bin_4++;

	  if(mSFOS>40. && mSFOS < 60. && mT>0. && mT<80. && met>50. && met<75. && !threelZVeto)_num_SR0tau_a_bin_5++;
	  if(mSFOS>40. && mSFOS < 60. && mT>0. && mT<80. && met>75.)_num_SR0tau_a_bin_6++;
	  if(mSFOS>40. && mSFOS < 60. && mT>80. && met>50. && met<135.)_num_SR0tau_a_bin_7++;
	  if(mSFOS>40. && mSFOS < 60. && mT>80. && met>135.)_num_SR0tau_a_bin_8++;

	  if(mSFOS>60. && mSFOS < 81.2 && mT>0. && mT<80. && met>50. && met<75. && !threelZVeto)_num_SR0tau_a_bin_9++;
	  if(mSFOS>60. && mSFOS < 81.2 && mT>80. && met>50. && met<75.)_num_SR0tau_a_bin_10++;
	  if(mSFOS>60. && mSFOS < 81.2 && mT>0. && mT<110. && met>75.)_num_SR0tau_a_bin_11++;
	  if(mSFOS>60. && mSFOS < 81.2 && mT>110. && met>75.)_num_SR0tau_a_bin_12++;

	  if(mSFOS>81.2 && mSFOS < 101.2 && mT>0. && mT<110. && met>50. && met<90. && !threelZVeto)_num_SR0tau_a_bin_13++;
	  if(mSFOS>81.2 && mSFOS < 101.2 && mT>0. && mT < 110. && met>90.)_num_SR0tau_a_bin_14++;
	  if(mSFOS>81.2 && mSFOS < 101.2 && mT>110. && met>50. && met < 135.)_num_SR0tau_a_bin_15++;
	  if(mSFOS>81.2 && mSFOS < 101.2 && mT>110. && met>135.)_num_SR0tau_a_bin_16++;

	  if(mSFOS > 101.2 && mT>0. && mT<180. && met>50. && met<210.)_num_SR0tau_a_bin_17++;
	  if(mSFOS > 101.2 && mT > 180. && met>50. && met<210.)_num_SR0tau_a_bin_18++;
	  if(mSFOS > 101.2 && mT>0. && mT<120. && met>210.)_num_SR0tau_a_bin_19++;
	  if(mSFOS > 101.2 && mT>120. && met>210.)_num_SR0tau_a_bin_20++;
	}
	//Now do SR0tau_b
	//Need either two electrons or two muons, and they must have the same sign
	//The remaining lepton must have different flavour and the opposite sign
	//NEEDS CHECKING
	bool leptonTypeCut=false;
	float dPhiLLMin=9999;
	if(numElectrons==2 && numMuons==1){
	  if((signalElectrons[0]->pid()==signalElectrons[1]->pid()) && 
	     ((signalMuons[0]->pid()/13)==-1*(signalElectrons[0]->pid()/11)))leptonTypeCut=true;
	  
	  float dPhiLL1=signalElectrons[0]->mom().deltaPhi(signalMuons[0]->mom());
	  float dPhiLL2=signalElectrons[1]->mom().deltaPhi(signalMuons[0]->mom());
	  
	  if(dPhiLL1<dPhiLL2){
	    dPhiLLMin=dPhiLL1;
	  }
	  else {
	    dPhiLLMin=dPhiLL2;
	  }
	}
	
	if(numElectrons==1 && numMuons==2){
	  if((signalMuons[0]->pid()==signalMuons[1]->pid()) && 
	     ((signalElectrons[0]->pid()/11)==-1*(signalMuons[0]->pid()/13)))leptonTypeCut=true;
	  
	  float dPhiLL1=signalMuons[0]->mom().deltaPhi(signalElectrons[0]->mom());
	  float dPhiLL2=signalMuons[1]->mom().deltaPhi(signalElectrons[0]->mom());
	  
	  if(dPhiLL1<dPhiLL2){
	    dPhiLLMin=dPhiLL1;
	  }
	  else {
	    dPhiLLMin=dPhiLL2;
	  }
	}
	
	bool leptonPTCut=true;
	for(unsigned int iLep=0;iLep<signalLeptons.size();iLep++){
	  if(signalLeptons[iLep]->pT()<20.)leptonPTCut=false;
	}
	
	if(trigger && signalLeptons.size()==3 && mSFOS12Cut && atLeastOneEorMu && separationCut && leptonTypeCut && bJets.size()==0 && signalTaus.size()==0){
	 
	  if(met > 50. && leptonPTCut && dPhiLLMin < 1.)_num_SR0tau_b++;
 
	}

	//Now do SR1tau
	//We need one tau and two light leptons with opposite sign to the tau
	leptonTypeCut=false;
	float mltau=9999;
	if(numTaus==1 && (numElectrons+numMuons)==2 && (signalLeptons[0]->pid() * signalLeptons[1]->pid())>0){
	  leptonTypeCut=true;
	  
	  //Find the lepton and tau combination that has mltau closest to the Higgs mass
	  float mltau1=(signalLeptons[0]->mom()+signalTaus[0]->mom()).m();
	  float mltau2=(signalLeptons[1]->mom()+signalTaus[0]->mom()).m();
	  
	  if(fabs(mltau1-125)<fabs(mltau2-125)){
	    mltau=mltau1;
	  }
	  else {
	    mltau=mltau2;
	  }
	}
	//Electron pair veto
	bool eePairVeto=false;
	if(leptonTypeCut && numElectrons==2){
	  float mEE=(signalElectrons[0]->mom()+signalElectrons[1]->mom()).m();
	  if(mEE>81.2 && mEE<101.2)eePairVeto=true;
	}
	
	//Lepton pT cuts (assumes leptons are pT ordered: NEEDS CHECKING)
	leptonPTCut=false;
	if(leptonTypeCut && signalLeptons[1]->pT()>30. && (signalLeptons[0]->pT()+signalLeptons[1]->pT())>70.)leptonPTCut=true;
	
	if(trigger && mSFOS12Cut && atLeastOneEorMu && separationCut && leptonTypeCut && bJets.size()==0){
	  if(met>50. && leptonPTCut && mltau < 120. && !eePairVeto)_num_SR1tau++;
	}
	
	//Now do SR2taua
	float mT2max=0;
	
	if(numTaus==2 && (numElectrons + numMuons)==1){
	  
	  //Calculate MT2 for all pairs of leptonsand take the largest
	  vector<Particle*> mt2Leptons;

	  for (Particle* ele : signalElectrons) {
	    mt2Leptons.push_back(ele);
	  }
	  
	  for (Particle* muo : signalMuons) {
	    mt2Leptons.push_back(muo);
	  }
	  
	  for (Particle* tau : signalTaus) {
	    mt2Leptons.push_back(tau);
	  }
	  
	  for(unsigned int iLep1=0;iLep1 < 3;iLep1++){
	    for(unsigned int iLep2=iLep1;iLep2 < 3;iLep2++){

	      double pa_b[3] = { 0, mt2Leptons[iLep1]->mom().px(), mt2Leptons[iLep1]->mom().py() };
	      double pb_b[3] = { 0, mt2Leptons[iLep2]->mom().px(), mt2Leptons[iLep2]->mom().py() };
	      double pmiss_b[3] = { 0, ptot.px(), ptot.py() };
	      double mn_b = 0.;
	      
	      mt2_bisect::mt2 mt2_calc;
	      
	      mt2_calc.set_momenta(pa_b,pb_b,pmiss_b);
	      mt2_calc.set_mn(mn_b);
	      double mt2 = mt2_calc.get_mt2();
	      if(mt2>mT2max)mT2max=mt2;
	    }
	  }
	}
	
	if(numTaus==2 && (numElectrons + numMuons)==1 && trigger && mSFOS12Cut && atLeastOneEorMu && separationCut && bJets.size()==0 && met > 50. && mT2max > 100.)_num_SR2tau_a++;
	  
	  
	//Finally do SR2taub
	float mtautau=(signalTaus[0]->mom()+signalTaus[1]->mom()).m();

	if(numTaus==2 && (numElectrons + numMuons)==1 && (signalTaus[0]->pid() == -1*signalTaus[1]->pid()) && met > 60 && (signalTaus[0]->mom().pT() + signalTaus[1]->mom().pT())>110. && mtautau>70. && mtautau < 120.)_num_SR2tau_b++;
	  
	  
	  return;
	
      }
      
      void finalize() {

        using namespace std;

        double scale_to = 20.7*0.83*1000./cutFlowVector[0];
        double trigger_cleaning_eff = 0.9;

        cout << "------------------------------------------------------------------------------------------------------------------------------ "<<std::endl;
        cout << "CUT FLOW: ATLAS-CONF-2013-035 - Appendix, Table A "<<std::endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------"<<std::endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------"<<std::endl;


        std::cout<< right << setw(40) << "CUT" << setw(20) << "RAW" << setw(20) << "SCALED" << setw(20) << "%" << setw(20) << "clean adj RAW"<< setw(20) << "clean adj %" << endl;
        for(int j=0; j<NCUTS; j++) {
          std::cout << right << setw(40) << cutFlowVector_str[j].c_str() << setw(20) << cutFlowVector[j] << setw(20) << cutFlowVector[j]*scale_to*trigger_cleaning_eff << setw(20) << 100.*cutFlowVector[j] << "%" << setw(20) << trigger_cleaning_eff*cutFlowVector[j]*scale_to << setw(20) << trigger_cleaning_eff*100.*cutFlowVector[j]<< "%" << endl;
        }
        cout << "------------------------------------------------------------------------------------------------------------------------------ "<<std::endl;

        //cout << "RESULTS 2LEP " << _numSRM90SF << " " << _numSRM100SF << " " << _numSRM110SF << " " << _numSRM120SF << " " << _numSRM90DF << " " << _numSRM100DF << " " << _numSRM110DF << " " << _numSRM120DF << endl;
    
      }


      double loglikelihood() {
        /// @todo Implement!
        return 1.0;
      }


      void collect_results() {

        /*_numSRnoZa, _numSRnoZb, _numSRnoZc, _numSRZa, _numSRZb, _numSRZc;

        SignalRegionData results_SRnoZa;
        results_SRnoZa.set_observation(101.);
        results_SRnoZa.set_background(96.);
        results_SRnoZa.set_backgroundsys(19.);
        results_SRnoZa.set_signalsys(0.);
        results_SRnoZa.set_signal(_numSRnoZa);

        SignalRegionData results_SRnoZb;
        results_SRnoZb.set_observation(32.);
        results_SRnoZb.set_background(29.);
        results_SRnoZb.set_backgroundsys(6.);
        results_SRnoZb.set_signalsys(0.);
        results_SRnoZb.set_signal(_numSRnoZb);

        SignalRegionData results_SRnoZc;
        results_SRnoZc.set_observation(5.);
        results_SRnoZc.set_background(4.4);
        results_SRnoZc.set_backgroundsys(1.8);
        results_SRnoZc.set_signalsys(0.);
        results_SRnoZc.set_signal(_numSRnoZc);

        SignalRegionData results_SRZa;
        results_SRZa.set_observation(273.);
        results_SRZa.set_background(249.);
        results_SRZa.set_backgroundsys(35.);
        results_SRZa.set_signalsys(0.);
        results_SRZa.set_signal(_numSRZa);

        SignalRegionData results_SRZc;
        results_SRZc.set_observation(6.);
        results_SRZc.set_background(6.3);
        results_SRZc.set_backgroundsys(1.5);
        results_SRZc.set_signalsys(0.);
        results_SRZc.set_signal(_numSRZc);

        SignalRegionData results_SRZb;
        results_SRZb.set_observation(23.);
        results_SRZb.set_background(22.);
        results_SRZb.set_backgroundsys(5.);
        results_SRZb.set_signalsys(0.);
        results_SRZb.set_signal(_numSRZb);

        add_result(results_SRnoZa);
        add_result(results_SRnoZb);
        add_result(results_SRnoZc);
        add_result(results_SRZa);
        add_result(results_SRZb);
        add_result(results_SRZc);*/

        return;
      }

    };

    DEFINE_ANALYSIS_FACTORY(ATLAS_3LEPEW_20invfb)
  }
}
