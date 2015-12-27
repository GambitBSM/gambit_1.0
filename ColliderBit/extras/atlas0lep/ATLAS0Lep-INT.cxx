/*
root -l examples/Example1.C\(\"martin.root\"\)
*/
#include <vector>
#include <iostream>
#include "TMath.h"
#include "TChain.h"
#include "TLorentzVector.h"
#include "ExRootAnalysis/ExRootTreeReader.h"
#include "classes/DelphesClasses.h"
#include "TClonesArray.h"
#include <assert.h>

using namespace std;

double deltaR(double eta1, double phi1, double eta2, double phi2)
{
  double diff_phi = std::acos(std::cos(phi1-phi2));
  double dr = std::sqrt(std::pow(eta1-eta2,2) + std::pow(diff_phi,2));
  return dr;
}


double SmallestdPhi(std::vector<Jet *> jets,double phi_met)
{
  if(jets.size()<2) return(999);
  double dphi1 = std::acos(std::cos(jets.at(0)->Phi-phi_met));
  double dphi2 = std::acos(std::cos(jets.at(1)->Phi-phi_met));
  double dphi3 = 999;
  if(jets.size()>2&&jets.at(2)->PT>40.) 
    dphi3= std::acos(std::cos(jets.at(2)->Phi-phi_met));
  double min1=std::min(dphi1,dphi2);
  return(std::min(min1,dphi3));
}


double deltaPhi(double a, double b) {
    double rtn = a - b;
    rtn = fmod(rtn, 2*M_PI);
    if (rtn == 0) return 0;
    assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
    rtn = (rtn >   M_PI ? rtn-2*M_PI :
           rtn <= -M_PI ? rtn+2*M_PI : rtn);
    assert(rtn > -M_PI && rtn <= M_PI);
    if (rtn < 0) rtn += M_PI;
    assert(rtn > 0 && rtn <= M_PI);
    return rtn;
  }


//------------------------------------------------------------------------------

void ATLAS0Lep(const char *inputFile)
{
  //gSystem->Load("libDelphes");

  // Create chain of root trees
  TChain chain("Delphes");
  chain.Add(inputFile);
  
  // Create object of class ExRootTreeReader
  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  Long64_t numberOfEntries = treeReader->GetEntries();
  
  // Get pointers to branches used in this analysis
  TClonesArray *branchJet = treeReader->UseBranch("Jet");
  TClonesArray *branchElectron = treeReader->UseBranch("Electron");
  TClonesArray *branchMuon = treeReader->UseBranch("Muon");
  TClonesArray *branchMissingET = treeReader->UseBranch("MissingET");

  MissingET *met;
  
  //int nDebug=0;
  int numAT=0;
  int numAM=0;
  int numAL=0;
  int numTotal=0;

  // Loop over all events
  for(Int_t entry = 0; entry < numberOfEntries; ++entry)
  {
    // Load selected branches with data from specified event
    treeReader->ReadEntry(entry);

    // Analyse missing ET
    if(branchMissingET->GetEntriesFast() > 0)
      {
	met = (MissingET*) branchMissingET->At(0);
      }
    
    
    
    std::vector<Jet*> jets;
    for(int i=0;i<branchJet->GetEntries();i++){
      Jet *jet = (Jet*) branchJet->At(i);
      jets.push_back(jet);
    }

    std::vector<Electron*> electrons;
    for(int i=0;i<branchElectron->GetEntries();i++){
      Electron *electron=(Electron*) branchElectron->At(i);
      electrons.push_back(electron);
    }

    std::vector<Muon*> muons;
    for(int i=0;i<branchMuon->GetEntries();i++){
      Muon *muon=(Muon*) branchMuon->At(i);
      muons.push_back(muon);
    }
    
    // Now define vectors of baseline objects
    std::vector<Electron *> baselineElectrons;
    std::vector<Muon *> baselineMuons;
    std::vector<Jet *> baselineJets;
    //cout << "baselineJets " << baselineJets.size() << endl;

    //cout << "Event " << numTotal << " nele " << electrons.size() << " nmuo " << muons.size() << " njets " << jets.size() << endl;
    
    for (int iEl=0;iEl<electrons.size();iEl++) {
      Electron * electron=electrons.at(iEl);
      if (electron->PT>20.&&fabs(electron->Eta)<2.47)baselineElectrons.push_back(electron);
    }
    
    
    for (int iMu=0;iMu<muons.size();iMu++) {
      Muon * muon=muons.at(iMu);
      if (muon->PT>10.&&fabs(muon->Eta)<2.4)baselineMuons.push_back(muon);
    }
    
    for (int iJet=0;iJet<jets.size();iJet++) {
      Jet * jet=jets.at(iJet);
      cout << "JETPT " << jets.at(iJet)->PT << endl;
      if (jet->PT>20.&&fabs(jet->Eta)<2.8)baselineJets.push_back(jet);
    }
  
    //Overlap removal
    std::vector<Electron *> signalElectrons;
    std::vector<Muon *> signalMuons;
    std::vector<Jet *> signalJets;
    int num=baselineJets.size();
   
    //Remove any jet within dR=0.2 of an electrons

    for (int iJet=0;iJet<num;iJet++) {
      bool overlap=false;
      Jet * jet=baselineJets.at(iJet);
      TLorentzVector jetVec=jet->P4();
      for (int iEl=0;iEl<baselineElectrons.size();iEl++) {
	TLorentzVector elVec=baselineElectrons.at(iEl)->P4();
	if (elVec.DeltaR(jetVec)<0.2)overlap=true;
      }
      if (!overlap)signalJets.push_back(baselineJets.at(iJet));
    }
    
    //Remove electrons with dR=0.4 or surviving jets
    for (int iEl=0;iEl<baselineElectrons.size();iEl++) {
      bool overlap=false;
      TLorentzVector elVec=baselineElectrons.at(iEl)->P4();
      for (int iJet=0;iJet<signalJets.size();iJet++) {
	TLorentzVector jetVec=signalJets.at(iJet)->P4();
	if (elVec.DeltaR(jetVec)<0.4)overlap=true;
      }
      if (!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
    }
    
    //Remove muons with dR=0.4 or surviving jets
    for (int iMu=0;iMu<baselineMuons.size();iMu++) {
      bool overlap=false;
      TLorentzVector muVec=baselineMuons.at(iMu)->P4();
      for (int iJet=0;iJet<signalJets.size();iJet++) {
	TLorentzVector jetVec=signalJets.at(iJet)->P4();
	if (muVec.DeltaR(jetVec)<0.4)overlap=true;
      }
      if (!overlap)signalMuons.push_back(baselineMuons.at(iMu));
    }

     //We now have the signal electrons, muons and jets
    //Let's move on to the 0 lepton 2012 analysis
    
    
     int nElectrons=signalElectrons.size();
     int nMuons=signalMuons.size();
     int nJets=signalJets.size();

     double meff2j=1;
     double dPhiMin=9999;

     bool leptonCut=false;
     if (nElectrons==0 && nMuons==0)leptonCut=true;
     
     bool metCut=false;
     //cout << "MET " << met << endl;
     if ((double)met->MET>160.)metCut=true;
     //if(metCut)cout << "Passes met cut" << endl;
     double meff_incl=0;
     for (int iJet=0;iJet<signalJets.size();iJet++) {
       if (signalJets.at(iJet)->PT>40.)meff_incl+=signalJets.at(iJet)->PT;
     }
          
     meff_incl+=met->MET;

     // Do 2 jet regions

      if (nJets>1) {
        if (signalJets.at(0)->PT>130. && signalJets.at(1)->PT>60.) {
	  	  
	  dPhiMin=SmallestdPhi(signalJets,met->Phi);
	  
	  meff2j=met->MET + signalJets.at(0)->PT + signalJets.at(1)->PT;
          if (leptonCut && metCut && dPhiMin>0.4) {
            if ((met->MET/meff2j)>0.3 && meff_incl>1900.)numAT++;
            if ((met->MET/meff2j)>0.4 && meff_incl>1300.)numAM++;
            if ((met->MET/meff2j)>0.4 && meff_incl>1000.)numAL++;
          }
        }
	
      }
      
      cout << "NJETS " << signalJets.size() << " NELE " << signalElectrons.size() << " NMUO " << signalMuons.size() << " MET " << met->MET << " MET/MEFF " << met->MET/meff2j << " DPHIMIN " << dPhiMin << " MEFF " << meff_incl << endl;
      
      //Total number of events
      numTotal++;
      
      
  }
  
  cout << "NUMEVENT " << numAT << " " << numAM << " " << numAL << " " <<  numTotal << endl;
  
}

int main() {

  ATLAS0Lep("martin.root");

  return 0;

}
