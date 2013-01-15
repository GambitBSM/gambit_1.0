#include "Pythia.h"
#include "fastjet/ClusterSequence.hh"
#include "boost/lexical_cast.hpp"
#include "omp.h"
#include "TH1F.h"
#include "TCanvas.h"
#include <cmath>

using namespace Pythia8;
using namespace fastjet;
using namespace std;


inline PseudoJet vec4_to_pseudojet(const Vec4& p) {
  return PseudoJet(p.px(), p.py(), p.pz(), p.e());
}

inline Vec4 pseudojet_to_vec4(const PseudoJet& p) {
  Vec4 rtn;
  rtn.p(p.px(), p.py(), p.pz(), p.e());
  return rtn;
}

double eta(const Vec4& p) {
  return -log(tan( 0.5 * p.theta() ));
}

inline double deltaPhi(const Vec4& a, const Vec4& b) {
  double rtn = a.phi() - b.phi();
  //cout << "A" << rtn << endl;
  rtn = fmod(rtn, 2*M_PI);
  if (rtn == 0) return 0;
  assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
  rtn = (rtn >   M_PI ? rtn-2*M_PI :
         rtn <= -M_PI ? rtn+2*M_PI : rtn);
  assert(rtn > -M_PI && rtn <= M_PI);
  if (rtn < 0) rtn += M_PI;
  //cout << "B" << rtn << endl;
  assert(rtn > 0 && rtn <= M_PI);
  return rtn;
}

inline double deltaR(const Vec4& a, const Vec4& b) {
  const double deta = fabs(eta(a) - eta(b));
  const double dphi = deltaPhi(a, b);
  return deta*deta + dphi*dphi;
}

int main() {

  TH1F h_met0("met0", "MET in GeV", 40, 0, 1000);
  TH1F h_met1("met1", "MET in GeV", 40, 0, 1000);
  TH1F h_met2("met2", "MET in GeV", 40, 0, 1000);
  TH1F h_met5("met5", "MET in GeV", 40, 0, 1000);
  TH1F h_njet("njet", "Number of jets, pT > 60 GeV", 10, -0.5, 9.5);

  const JetDefinition jet_def(antikt_algorithm, 0.4);

  size_t NTOT = 10000;

    
  int numAT=0;
  int numAM=0;
  int numAL=0;
  int numBT=0;
  int numBM=0;
  int numCT=0;
  int numCM=0;
  int numCL=0;
  int numD=0;
  int numET=0;
  int numEM=0;
  int numEL=0;

  #pragma omp parallel
  {
    Pythia py;
    py.readString("Beams:eCM = 8000.");
    py.readString("Main:numberOfEvents = 1000");
    py.readString("Main:timesAllowErrors = 1000");
    py.readString("Init:showProcesses = off");
    py.readString("Init:showMultipartonInteractions = off");
    py.readString("Init:showChangedSettings = off");
    py.readString("Init:showChangedParticleData = off");
    py.readString("Next:numberShowEvent = 0");
    py.readString("Next:numberShowInfo = 0");
    py.readString("Next:numberShowProcess = 0");
    py.readString("Random:setSeed = on");
    py.readString("Random:seed = 12345" + boost::lexical_cast<string>(17 * omp_get_thread_num()));

    // py.readString("HardQCD:all = on");
    // py.readString("PhaseSpace:pTHatMin = 20.");

    //py.readString("SUSY:qg2squarkgluino = on");
    py.readString("SUSY:all = on");
    py.readString("SLHA:file = sps1aWithDecays.spc");

    //py.readString("WeakSingleBoson:ffbar2gmZ = on");
    //py.readString("23:onMode = off");
    //py.readString("23:onIfAny = 11");
    //py.readString("PhaseSpace:mHatMin = 50.");
    //py.readString("PhaseSpace:mHatMax = 120.");

    py.readString("PartonLevel:MPI = off");
    // py.readString("PartonLevel:ISR = off");
    py.readString("PartonLevel:FSR = off");
    py.readString("HadronLevel:all = off");

    py.init();
    
    for (size_t i = 0; i < NTOT/omp_get_num_threads(); ++i) {
      if (!py.next()) continue;
      // cout << py.event.size() << endl;

      Vec4 ptot0, ptot1, ptot2, ptot5;
      vector<PseudoJet> jetparticles;
      vector<Particle> electrons;
      vector<Particle> muons;
      
      for (int ip = 0; ip < py.event.size(); ++ip) {
        const Particle& p = py.event[ip];
        if (!p.isFinal()) continue;
        //cout << p.name() << endl;
        if (p.id() == 12 || p.id() == 14 || p.id() == 16) continue; // neutrinos
        if (p.id() == 1000022) continue; // LSP

        if (p.id() != 22 || p.pT() > 0) ptot0 += p.p();
        if (p.id() != 22 || p.pT() > 1) ptot1 += p.p();
        if (p.id() != 22 || p.pT() > 2) ptot2 += p.p();
        if (p.id() != 22 || p.pT() > 5) ptot5 += p.p();

	if(fabs(p.id())==11)electrons.push_back(p);
	if(fabs(p.id())==13)muons.push_back(p);

        jetparticles.push_back( vec4_to_pseudojet(p.p()) );
      }

      ClusterSequence cseq(jetparticles, jet_def);
      vector<PseudoJet> jets = sorted_by_pt(cseq.inclusive_jets(60));

      //Now define vectors of baseline objects
      vector<Particle> baselineElectrons;
      vector<Particle> baselineMuons;
      vector<PseudoJet> baselineJets;
      
      for(int iEl=0;iEl<electrons.size();iEl++){
	Particle electron=electrons.at(iEl);
	if(electron.pT()>20.&&fabs(electron.eta())<2.47)baselineElectrons.push_back(electron);
      }
      
      for(int iMu=0;iMu<muons.size();iMu++){
	Particle muon=muons.at(iMu);
	if(muon.pT()>10.&&fabs(muon.eta())<2.4)baselineMuons.push_back(muon);
      }
      
      for(int iJet=0;iJet<jets.size();iJet++){
	PseudoJet jet=jets.at(iJet);
	if(jet.pt()>20.&&fabs(jet.eta())<2.8)baselineJets.push_back(jet);
      }						
      
      //Overlap removal
      vector<Particle> signalElectrons;
      vector<Particle> signalMuons;
      vector<PseudoJet> signalJets;
      
      //Remove any jet within dR=0.2 of an electrons
      for(int iJet=0;iJet<baselineJets.size();iJet++){
	bool overlap=false;
	Vec4 jetVec=pseudojet_to_vec4(baselineJets.at(iJet));
	for(int iEl=0;iEl<baselineElectrons.size();iEl++){
	  Vec4 elVec=baselineElectrons.at(iEl).p();
	  if(deltaR(elVec,jetVec)<0.2)overlap=true;
	}
	if(!overlap)signalJets.push_back(baselineJets.at(iJet));
      }

      //Remove electrons with dR=0.4 or surviving jets
      for(int iEl=0;iEl<baselineElectrons.size();iEl++){
	bool overlap=false;
	Vec4 elVec=baselineElectrons.at(iEl).p();
	for(int iJet=0;iJet<signalJets.size();iJet++){
	  Vec4 jetVec=pseudojet_to_vec4(signalJets.at(iJet));
	  if(deltaR(elVec,jetVec)<0.4)overlap=true;
	}
	if(!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
      }

      //Remove muons with dR=0.4 or surviving jets
      for(int iMu=0;iMu<baselineMuons.size();iMu++){
	bool overlap=false;
	Vec4 muVec=baselineMuons.at(iMu).p();
	for(int iJet=0;iJet<signalJets.size();iJet++){
	  Vec4 jetVec=pseudojet_to_vec4(signalJets.at(iJet));
	  if(deltaR(muVec,jetVec)<0.4)overlap=true;
	}
	if(!overlap)signalMuons.push_back(baselineMuons.at(iMu));
      }

      //We now have the signal electrons, muons and jets
      //Let's move on to the 0 lepton 2012 analysis

      //Calculate common variables and cuts first
      int nElectrons=signalElectrons.size();
      int nMuons=signalMuons.size();
      int nJets=signalJets.size();
      bool leptonCut=false;
      if(nElectrons==0 && nMuons==0)leptonCut=true;

      float met=ptot0.pT();

      bool metCut=false;
      if(met>160.)metCut=true;

      float meff_incl=0;
      for(int iJet=0;iJet<signalJets.size();iJet++){
	if(signalJets.at(iJet).pt()>40.)meff_incl+=signalJets.at(iJet).pt();
      }
      
      meff_incl+=met;

      
      // Do 2 jet regions
      
      if(nJets>1){
	if(signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60.){
	  
	  float dPhiMin=9999;
	  int numJets=0;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    if(numJets>1)break;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin){
	      dPhiMin=dphi;
	      numJets+=1;
	    }
	  }
	  
	  float meff2j=met + signalJets.at(0).pt() + signalJets.at(1).pt();
	  if(leptonCut && metCut && dPhiMin>0.4){
	    if((met/meff2j)>0.3 && meff_incl>1900.)numAT++;
	    if((met/meff2j)>0.4 && meff_incl>1300.)numAM++;
	    if((met/meff2j)>0.4 && meff_incl>1000.)numAL++;
	  }
	}
	
      }

      //Do the 3 jet regions
      if(nJets>2){
	if(signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60.){
	  float dPhiMin=9999;
	  int numJets=0;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    if(numJets>2)break;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin){
	      dPhiMin=dphi;
	      numJets+=1;
	    }
	  }
	  
	  float meff3j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt();
	  if(leptonCut && metCut && dPhiMin>0.4){
	    if((met/meff3j)>0.25 && meff_incl>1900.)numBT++;
	    if((met/meff3j)>0.3 && meff_incl>1300.)numBM++;
	  }
	  
	}
      }
    
      //Do the 4 jet regions
      if(nJets>3){
	if(signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60. && signalJets.at(3).pt()>60.){
	  float dPhiMin4=9999;
	  int numJets=0;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    if(numJets>3)break;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin4){
	      dPhiMin4=dphi;
	      numJets+=1;
	    }
	  }
	  
	  float dPhiMin2=9999;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin2){
	      dPhiMin2=dphi;
	    }
	  }

	  float meff4j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt() + signalJets.at(3).pt();
	  
	  if(leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2){
	    if((met/meff4j)>0.25 && meff_incl>1900.)numCT++;
	    if((met/meff4j)>0.3 && meff_incl>1300.)numCM++;
	    if((met/meff4j)>0.3 && meff_incl>1000.)numCL++;
	  }
	}
      }

      //Do 5 jet region
      if(nJets>4){
	if(signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60. && signalJets.at(3).pt()>60. && signalJets.at(4).pt()>60.){
	    

	  float dPhiMin4=9999;
	  int numJets=0;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    if(numJets>3)break;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin4){
	      dPhiMin4=dphi;
	      numJets+=1;
	    }
	  }
	  
	  float dPhiMin2=9999;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin2){
	      dPhiMin2=dphi;
	    }
	  }
	  
	  float meff5j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt() + signalJets.at(3).pt() + signalJets.at(4).pt();
	  
	  if(leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2){
	    if((met/meff5j)>0.15 && meff_incl>1700.)numD++;
	  }
	}
      }
      
      //Do the 6 jet regions
      if(nJets>5){
	if(signalJets.at(0).pt()>130. && signalJets.at(1).pt()>60. && signalJets.at(2).pt()>60. && signalJets.at(3).pt()>60. && signalJets.at(4).pt()>60. && signalJets.at(5).pt()>60.){
	  
	  
	  float dPhiMin4=9999;
	  int numJets=0;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    if(numJets>3)break;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin4){
	      dPhiMin4=dphi;
	      numJets+=1;
	    }
	  }
	  
	  float dPhiMin2=9999;
	  for(int iJet=0;iJet<nJets;iJet++){
	    PseudoJet jet=signalJets.at(iJet);
	    Vec4 jetVec=pseudojet_to_vec4(jet);
	    if(jet.pt()<40.)continue;
	    float dphi=deltaPhi(ptot0,jetVec);
	    if(dphi<dPhiMin2){
	      dPhiMin2=dphi;
	    }
	  }
	  
	  float meff6j=met + signalJets.at(0).pt() + signalJets.at(1).pt() + signalJets.at(2).pt() + signalJets.at(3).pt() + signalJets.at(4).pt() + signalJets.at(5).pt();
	  
	  if(leptonCut && metCut && dPhiMin4>0.4 && dPhiMin2>0.2){
	    if((met/meff6j)>0.15 && meff_incl>1400.)numET++;
	    if((met/meff6j)>0.25 && meff_incl>1300.)numEM++;
	    if((met/meff6j)>0.30 && meff_incl>1000.)numEL++;
	  }
	}
      }
      
      //const double met = ptot0.pT();
      h_met0.Fill(ptot0.pT());
      h_met1.Fill(ptot1.pT());
      h_met2.Fill(ptot2.pT());
      h_met5.Fill(ptot5.pT());
      
    }
  }

  cout << "NUMEVENTS " << numAT << " " << numAM << " " << numAL << " " << numBT << " " << numBM << " " << numCT << " " << numCM << " " << numCL << " " << numD << " " << numET << " " << numEM << " " << numEL << endl;

  TCanvas c;
  h_met0.Draw();
  h_met1.Draw("same");
  h_met1.SetLineColor(kRed);
  h_met2.Draw("same");
  h_met2.SetLineColor(kGreen);
  h_met5.Draw("same");
  h_met5.SetLineColor(kBlack);
  c.SaveAs("met.pdf");
  h_njet.Draw();
  c.SaveAs("njet.pdf");
  return 0;
}
