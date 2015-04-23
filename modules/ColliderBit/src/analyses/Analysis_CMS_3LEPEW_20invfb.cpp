#include <vector>
#include <cmath>
#include <memory>
#include <iomanip>

#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"
#include "gambit/ColliderBit/ATLASEfficiencies.hpp"

/* A simulation of CMS paper PAS SUS-13-006

   Code by Martin White & Daniel Murnane

   Known features:
   a) Must run with a dedicated detector card due to odd b tagging and isolation

*/

namespace Gambit {
  namespace ColliderBit {

    using namespace std;

    class Analysis_CMS_3LEPEW_20invfb : public BaseAnalysis {
    private:
    
      // Array of signal regions, set to zero
      int SR [180];
      //int Region45=0;
      //int Region46=0;
      vector<double> boundsMll = {0.,75.,105.,9999.};
      vector<double> boundsMt = {0.,120.,160.,9999.};
      vector<double> boundsmet ={0.,50.,100.,150.,200.,9999.};   
      vector<double> boundsMll2 = {0.,100.,9999.};
      // Debug histos
  
    public:

      Analysis_CMS_3LEPEW_20invfb() {
	
	for(int i=0;i<180;i++){
	  SR[i]=0;
	}
	
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

      double TransMass(double eMissing, double ePhi, Particle * thirdLepton ) {
	//Calculate transverse mass

	double mT = sqrt(2*eMissing*(thirdLepton->pT())*(1. - cos(thirdLepton->phi() - ePhi)));
	return mT;
      }

      void analyze(const Event* event) {

	// Missing energy
	P4 ptot = event->missingmom();
	double met = event->met();
	double missingPhi = ptot.phi();

	// Now define vectors of baseline objects
	vector<Particle*> signalElectrons;
	for (Particle* electron : event->electrons()) {
	  if (electron->pT() > 10. && fabs(electron->eta()) < 2.4) signalElectrons.push_back(electron);
	}
	vector<Particle*> signalMuons;
	for (Particle* muon : event->muons()) {
	  if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) signalMuons.push_back(muon);
	}
	vector<Particle*> signalTaus;
	for (Particle* tau : event->taus()) {
	  if (tau->pT() > 20. && fabs(tau->eta()) < 2.4) signalTaus.push_back(tau);
	}

	vector<Jet*> signalJets;
	vector<Jet*> bJets;

	for (Jet* jet : event->jets()) {
	  if (jet->pT() > 30. && fabs(jet->eta()) < 2.5) signalJets.push_back(jet); 
	  if(jet->btag() && fabs(jet->eta()) < 2.5 && jet->pT() > 30.) bJets.push_back(jet);
	}
      
	//Overlap Removal
     
	//Note that ATLAS use |eta|<10 for removing jets close to electrons
	//Then 2.8 is used for the rest of the overlap process
	//Then the signal cut is applied for signal jets

	JetLeptonOverlapRemoval(signalJets,signalElectrons,0.4);
	JetLeptonOverlapRemoval(signalJets,signalMuons,0.4);     
   
	int numElectrons=signalElectrons.size();
	int numMuons=signalMuons.size();
	int numTaus=signalTaus.size();
      
	vector<Particle*> signalLeptons;
    
	for (Particle* ele : signalElectrons) {
	  signalLeptons.push_back(ele);
	}

	for (Particle* muo : signalMuons) {
	  signalLeptons.push_back(muo);
	}

	int numLeptons = signalLeptons.size(); //Only electrons and muons
      
	//Find transverse mass and invariant mass depending on presence of tau, OSSF/OSOF/SS

     
    
	double mLL = 0;
	double mT = 0;
	vector<bool> flavourSign = {false,false,false,false};

	//No taus present
	if(numLeptons==3){
	  double smallestDiff1=9999;
	  double smallestDiff2=9999;

	  //cout << "Lep 1: " << signalLeptons.at(0)->pid() << ", Lep 2: " << signalLeptons.at(1)->pid() << ", Lep 3: " << signalLeptons.at(2)->pid() << endl;

	  for(int lep1=0;lep1<numLeptons;lep1++){
	    for(int lep2=0;lep2<numLeptons;lep2++){
	      //Search for the OSSF pair closest to Z, and use the remaining lepton for transverse mass
	      if(signalLeptons.at(lep1)->pid()==-1*signalLeptons.at(lep2)->pid()){
		flavourSign.at(0) = true;
		flavourSign.at(1) = false;
		P4 lepVec1=signalLeptons.at(lep1)->mom();
		P4 lepVec2=signalLeptons.at(lep2)->mom();
		double invMass1=(lepVec1+lepVec2).m();
		if(fabs(invMass1-91.2)<smallestDiff1){
		  smallestDiff1=fabs(invMass1-91.2);
		  mLL=invMass1;
		  mT=TransMass(met,missingPhi,signalLeptons.at(3-lep1-lep2));
		}
	      }
	      //Search for the OSOF pair closest to Z->tau tau dilepton, use remaining lepton for transverse mass
	      else if((signalLeptons.at(lep1)->pid() * signalLeptons.at(lep2)->pid()) < 0 && !flavourSign.at(0)){
		flavourSign.at(1) = true;
		P4 lepVec1=signalLeptons.at(lep1)->mom();
		P4 lepVec2=signalLeptons.at(lep2)->mom();
		double invMass2=(lepVec1+lepVec2).m();
		if(fabs(invMass2-50)<smallestDiff2){
		  smallestDiff2=fabs(invMass2-50);
		  mLL=invMass2;
		  mT=TransMass(met,missingPhi,signalLeptons.at(3-lep1-lep2));
		}
	      }
	    }
	  }
	}

	//One tau present
	else if(numTaus==1 && numLeptons==2){
	  //With SS pair
	  if(signalLeptons.at(0)->pid() * signalLeptons.at(1)->pid() > 0){
	    flavourSign.at(2) = true;
	    P4 lepVec1=signalLeptons.at(0)->mom();
	    P4 lepVec2=signalLeptons.at(1)->mom();
	    P4 tauVec =signalTaus.at(0)->mom();
	    double invMass1 = (lepVec1+tauVec).m();
	    double invMass2 = (lepVec2+tauVec).m();
	    if(fabs(invMass1 - 60)<fabs(invMass2 - 60)){
	      mLL=invMass1;
	      mT=TransMass(met,missingPhi,signalLeptons.at(1));
	    }
	    else {
	      mLL=invMass2;
	      mT=TransMass(met,missingPhi,signalLeptons.at(0));
	    }
	  }
	  //With OSOF pair
	  else if(signalLeptons.at(0)->pid()!= -1*signalLeptons.at(1)->pid()){
	    flavourSign.at(3) = true;
	    if(signalLeptons.at(0)->pid() * signalTaus.at(0)->pid() < 0){
	      P4 lepVec=signalLeptons.at(0)->mom();
	      P4 tauVec=signalTaus.at(0)->mom();
	      mLL=(lepVec+tauVec).m();
	      mT=TransMass(met,missingPhi,signalLeptons.at(1));
	    }
	    else {
	      P4 lepVec=signalLeptons.at(1)->mom();
	      P4 tauVec=signalTaus.at(0)->mom();
	      mLL=(lepVec+tauVec).m();
	      mT=TransMass(met,missingPhi,signalLeptons.at(0));
	    }
	  }
	}
	          
	//Cuts to lepton energy
      
	bool signalAccepted=false;

	for(Particle * lepton : signalLeptons){
	  if(lepton->pT()>20)signalAccepted=true;
	}

	for(int i=0;i<numLeptons;i++){
	  for(int j=0;j<numLeptons;j++){
	    P4 lepVec1=signalLeptons.at(i)->mom();
	    P4 lepVec2=signalLeptons.at(j)->mom();
	    double invMass = (lepVec1+lepVec2).m();
	    if(invMass<12 && (signalLeptons.at(i)->pid()*signalLeptons.at(j)->pid() < 0)){
	      signalAccepted=false;
	    }
	  }
	}
	if(bJets.size() > 0){
	  signalAccepted=false;	      
	}
	//
	//Fill signal vector
	if(signalAccepted){
	
	  int m=0;
	  int i=0;
	  for(unsigned int j=0;j<(boundsMll.size()-1);j++){
	    for(unsigned int k=0;k<(boundsMt.size()-1);k++){
	      for(unsigned int l=0;l<(boundsmet.size()-1);l++){
		if(flavourSign.at(i) && mLL>=boundsMll.at(j) && mLL<boundsMll.at(j+1) && mT>=boundsMt.at(k) && mT<boundsMt.at(k+1) && met>=boundsmet.at(l) && met<boundsmet.at(l+1)){
		  SR[m]++;
		}
		//cout << m << " ";
		std::cout << "REGION " << m << " Mll bounds " << boundsMll2[j]<< " to " << boundsMll2[j+1] << " MT bound " << boundsMt[k] << " to " << boundsMt[k+1] << " MET bound " << boundsmet[l] << " to " << boundsmet[l+1] << std::endl;
		m++;
	      }
	    }
	  }
	
	  for(unsigned int i=1;i<(flavourSign.size());i++){
	    for(unsigned int j=0;j<(boundsMll2.size()-1);j++){
	      for(unsigned int k=0;k<(boundsMt.size()-1);k++){
		for(unsigned int l=0;l<(boundsmet.size()-1);l++){ 
		  if(flavourSign.at(i) && mLL>=boundsMll2.at(j) && mLL<boundsMll2.at(j+1) && mT>=boundsMt.at(k) && mT<boundsMt.at(k+1) && met>=boundsmet.at(l) && met<boundsmet.at(l+1)){
		    SR[m]++;
		  }
		  
		  std::cout << "REGION " << m << " Mll bounds " << boundsMll2[j]<< " to " << boundsMll2[j+1] << " MT bound " << boundsMt[k] << " to " << boundsMt[k+1] << " MET bound " << boundsmet[l] << " to " << boundsmet[l+1] << std::endl;
		  m++;
		}
	      }
	      if(j==0){
		m=m+15;
	      }
	    }
	  }
	}
	         
	      	      
	    
      

	/*Region 45 test
   
	  double testMLL=9999;
	  double testMT=9999;
	  bool reg45 = false;
	  if(numLeptons==3){
	  double smallestDiff=9999;
	  double testmass=0;
	  if((signalLeptons.at(0)->pid()>0 && signalLeptons.at(1)->pid()<0 || signalLeptons.at(0)->pid()<0 && signalLeptons.at(1)->pid()>0) && signalLeptons.at(0)->pid()!=-1*signalLeptons.at(1)->pid()){
	  P4 testlep1=signalLeptons.at(0)->mom();
	  P4 testlep2=signalLeptons.at(1)->mom();
	  testMLL = (testlep1+testlep2).m();
	  smallestDiff = fabs(testMLL-50);
	  testMT=TransMass(met,missingPhi,signalLeptons.at(2));
	  reg45=true;
	  }
	  
	  if((signalLeptons.at(0)->pid()>0 && signalLeptons.at(2)->pid()<0 || signalLeptons.at(0)->pid()<0 && signalLeptons.at(2)->pid()>0) && signalLeptons.at(0)->pid()!=-1*signalLeptons.at(2)->pid()){
	  P4 testlep1=signalLeptons.at(0)->mom();
	  P4 testlep2=signalLeptons.at(2)->mom();
	  testmass = (testlep1+testlep2).m();
	  if(fabs(testmass-50)<smallestDiff){
	  testMLL=testmass;
	  testMT=TransMass(met,missingPhi,signalLeptons.at(1));
	  smallestDiff=testmass-50;
	  reg45=true;
	  }
	  }
	  
	  if((signalLeptons.at(1)->pid()>0 && signalLeptons.at(2)->pid()<0 || signalLeptons.at(1)->pid()<0 && signalLeptons.at(2)->pid()>0) && signalLeptons.at(1)->pid()!=-1*signalLeptons.at(2)->pid()){
	  P4 testlep1=signalLeptons.at(1)->mom();
	  P4 testlep2=signalLeptons.at(2)->mom();
	  testmass = (testlep1+testlep2).m();
	  if(fabs(testmass-50)<smallestDiff){
	  testMLL=testmass;
	  testMT=TransMass(met,missingPhi,signalLeptons.at(0));
	  reg45=true;
	  }
	  }
	  if(signalLeptons.at(1)->pid()==-1*signalLeptons.at(2)->pid())reg45=false;
	  if(signalLeptons.at(0)->pid()==-1*signalLeptons.at(1)->pid())reg45=false;
	  if(signalLeptons.at(0)->pid()==-1*signalLeptons.at(2)->pid())reg45=false;
	  
	  if(reg45 && testMLL<75 && testMT<120 && met<50){
	  Region45++;
	  }
	  }
	*/
    
	return;
      }
 	      
      
      void finalize() {

	std::cout << "CMS 3LEPEW results" << std::endl;
	for(int i=0;i<180;i++){
	  std::cout << SR[i] << " ";
	}
	std::cout << std::endl;
      
      }
      
      double loglikelihood() {
	/// @todo Implement!
	return 1.0;
      }
      
      void collect_results() {

	//Need to add all of the signal region results here

        finalize();

      }


    };
 
    DEFINE_ANALYSIS_FACTORY(CMS_3LEPEW_20invfb)
 }
}

