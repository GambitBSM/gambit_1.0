// Written by A Saavedra 19-06-2013 to test the FastSim module
// Edited by MJW on 07-01-2015 to test generic sims
#include "Analysis.hpp"
#include "ATLASEfficiencies.hpp"

// ROOT
#include "TH1.h"
#include "TVirtualPad.h"
#include "TApplication.h"
#include "TFile.h"

#include <vector>
#include <algorithm>
using namespace std;

namespace Gambit {
  namespace ColliderBit {


    bool SortPt(const Particle* i, const Particle* j) { return (i->pT() > j->pT()); }


    class Analysis_Perf : public Analysis {

      TH1F *_hBosonPt, *_hBosoneta, *_hBosonphi;
      TH1F *_hElectron1Pt, *_hElectron1eta, *_hElectron1phi;
      TH1F *_hElectron2Pt, *_hElectron2eta, *_hElectron2phi;
      TH1F *_hMuon1Pt;
      TH1F *_hMuon2Pt;
      TH1F *_hElectron1Pt_truth, *_hElectron1eta_truth, *_hElectron1phi_truth;
      TH1F *_hElectron2Pt_truth, *_hElectron2eta_truth, *_hElectron2phi_truth;
      TH1F *_hNelec,*_hNelec_truth, *_hNjet;
      TH1F *_hinv, *_hmet;
      TH1F *_hinv_truth, *_hmet_truth;
      
      //Plots added by MJW
      TH1F *_hElectronPt, *_hElectronEta, *_hElectronPhi, *_hElectronE;
      TH1F *_hMuonPt, *_hMuonEta, *_hMuonPhi, *_hMuonE;
      TH1F *_hJetPt, *_hJetEta, *_hJetPhi, *_hJetE;

      TH1F *_hNmuon;


      std::string _output_filename;
      TFile *_ROOToutFile;


    public:

      ~Analysis_Perf() {
        delete _ROOToutFile;
      }


      Analysis_Perf() {
	std::cout << "Opening ROOT file" << endl;
        _output_filename = "SimOutput.root";

        _ROOToutFile = new TFile(_output_filename.c_str(),"RECREATE");

        _hBosonPt = new TH1F("BosonPt"," Boson Generated Pt;GeV;",50, 0., 200.);
        _hBosoneta = new TH1F("Bosoneta"," Boson Generated eta;",50, -5., 5.);
        _hBosonphi = new TH1F( "BosonPhi","Boson Generated Phi;",50, -6.0, 6.0);

        _hElectron1Pt_truth = new TH1F("Electron1PtTruth","Leading Electron Pt (Truth);GeV;",50, 0., 200.);
        _hElectron1eta_truth = new TH1F("Electron1etaTruth","Leading Electron eta (Truth);",50, -5., 5.);
        _hElectron1phi_truth = new TH1F( "Electron1PhiTruth","Leading Electron Phi (Truth);",50, -6.0, 6.0);

        _hElectron2Pt_truth = new TH1F("Electron2PtTruth","SubLeading Electron Pt (Truth);GeV;",50, 0., 200.);
        _hElectron2eta_truth = new TH1F("Electron2etaTruth","SubLeading  Electron pseudorapidity (Truth);eta",100, -5., 5.);
        _hElectron2phi_truth = new TH1F( "Electron2PhiTruth","SubLeading Electron Phi (Truth);",50, -6.0, 6.0);

        _hElectron1Pt = new TH1F("Electron1Pt","Leading Electron Pt;GeV;",50, 0., 200.);
        _hElectron1eta = new TH1F("Electron1eta","Leading Electron eta;",50, -5., 5.);
        _hElectron1phi = new TH1F( "Electron1Phi","Leading Electron Phi;",50, -6.0, 6.0);


	_hElectron2Pt = new TH1F("Electron2Pt","SubLeading Electron Pt;GeV;",50, 0., 200.);
        _hElectron2eta = new TH1F("Electron2eta","SubLeading  Electron eta;",50, -5., 5.);
        _hElectron2phi = new TH1F( "Electron2Phi","SubLeading Electron Phi;",50, -6.0, 6.0);

	_hMuon1Pt = new TH1F("Muon1Pt","Leading Muon Pt;GeV;",50, 0., 200.);
	_hMuon2Pt = new TH1F("Muon2Pt","Leading Muon Pt;GeV;",50, 0., 200.);

        _hNelec = new TH1F("Nelec","Number of Isolated Electrons;Number/Event",5,-0.5,4.5);
        _hNelec_truth = new TH1F("NelecTruth","Number of Electrons (Truth);Number/Event",5,-0.5,4.5);

        _hNjet = new TH1F("Njet","Number of Jets;Number/Event",10,-0.5,9.5);

        _hinv = new TH1F( "Inv","Z Invariant Mass;GeV",50, 0, 200);
        _hmet = new TH1F( "MET","MET;GeV",50, 0, 1000);

        _hinv_truth = new TH1F( "InvTruth","Z Invariant Mass (Truth);GeV",50, 0, 200);
        _hmet_truth = new TH1F( "METTruth","MET (Truth);GeV",50, 0, 200);

	//MJW plots
	_hElectronPt = new TH1F("ElectronPt","Electron Pt;GeV;",50, 0., 500.);
	_hElectronEta = new TH1F("Electroneta","Electron eta;",50, -5., 5.);
        _hElectronPhi = new TH1F( "ElectronPhi","Electron Phi;",50, -6.0, 6.0);
	_hElectronE = new TH1F("ElectronE","Electron E;GeV;",50, 0., 500.);
	_hMuonPt = new TH1F("MuonPt","Muon Pt;GeV;",50, 0., 500.);
	_hMuonEta = new TH1F("Muoneta","Muon eta;",50, -5., 5.);
        _hMuonPhi = new TH1F( "MuonPhi","Muon Phi;",50, -6.0, 6.0);
	_hMuonE = new TH1F("MuonE","Muon E;GeV;",50, 0., 500.);

	_hJetPt = new TH1F("JetPt","Jet Pt;GeV;",50, 0., 500.);
	_hJetEta = new TH1F("Jeteta","Jet eta;",50, -5., 5.);
        _hJetPhi = new TH1F( "JetPhi","Jet Phi;",50, -6.0, 6.0);
	_hJetE = new TH1F("JetE","Jet E;GeV;",50, 0., 500.);

	_hNmuon = new TH1F("Nmuon","Number of Muons;Number/Event",5,-0.5,4.5);

      }



      void analyze(const Event* event) {

	//Do overlap removal
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
        for (Jet* jet : event->jets()) {
          if (jet->pT() > 20. && fabs(jet->eta()) < 4.5) baselineJets.push_back(jet);
        }

        // Overlap removal: only applied to jets with |eta|<2.8
        vector<Particle*> signalElectrons;
        vector<Particle*> signalMuons;
        vector<Jet*> signalJets;

	 // Remove any jet within dR=0.2 of an electrons
        for (size_t iJet=0;iJet<baselineJets.size();iJet++) {
          bool overlap=false;
          P4 jetVec=baselineJets.at(iJet)->mom();
          if(fabs(jetVec.eta())<2.8){
            for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
              P4 elVec=baselineElectrons.at(iEl)->mom();
              if (fabs(elVec.deltaR_eta(jetVec))<0.2)overlap=true;
            }
          }
          if (!overlap)signalJets.push_back(baselineJets.at(iJet));
        }

        // Remove electrons with dR=0.4 or surviving jets
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          bool overlap=false;
          P4 elVec=baselineElectrons.at(iEl)->mom();
          for (size_t iJet=0;iJet<signalJets.size();iJet++) {
            P4 jetVec=signalJets.at(iJet)->mom();
            if (fabs(elVec.deltaR_eta(jetVec))<0.4 && fabs(jetVec.eta())<2.8)overlap=true;
          }
          if (!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
        }

	// Remove muons with dR=0.4 or surviving jets
        for (size_t iMu=0;iMu<baselineMuons.size();iMu++) {
          bool overlap=false;
          P4 muVec=baselineMuons.at(iMu)->mom();
          for (size_t iJet=0;iJet<signalJets.size();iJet++) {
            P4 jetVec=signalJets.at(iJet)->mom();
            if (fabs(muVec.deltaR_eta(jetVec))<0.4 && fabs(jetVec.eta())<2.8)overlap=true;
          }
          if (!overlap)signalMuons.push_back(baselineMuons.at(iMu));
        }

	 // We now have the signal electrons, muons and jets

        // Calculate common variables and cuts first
        applyMediumIDElectronSelection(signalElectrons);

        float nElectrons = signalElectrons.size();
        float nMuons = signalMuons.size();
        float nJets = signalJets.size();

        P4 temp;
        //P4 ptot = event->missingmom();
        //double met= event->met();

        //    cout << " met is "<< met << " ptot " << ptot.pT() << endl;
	
        _hmet->Fill(event->met());

	float numElectrons=0;
	float numMuons=0;
	float numJets=0;

	for(Particle * electron : signalElectrons){
	  if(electron->pT()>10. && fabs(electron->eta())<2.5){
	    numElectrons++;
	    _hElectronPt->Fill(electron->pT(),1.);
	    _hElectronEta->Fill(electron->eta(),1.);
	    _hElectronPhi->Fill(electron->phi(),1.);
	    _hElectronE->Fill(electron->E(),1.);
	  }
	}

	for(Particle * muon : signalMuons){
	  if(muon->pT()>10. && fabs(muon->eta())<2.5){
	    numMuons++;
	    _hMuonPt->Fill(muon->pT(),1.);
	    _hMuonEta->Fill(muon->eta(),1.);
	    _hMuonPhi->Fill(muon->phi(),1.);
	    _hMuonE->Fill(muon->E(),1.);
	  }
	}

	for(Jet * jet : signalJets){
	  if(jet->pT()>10. && fabs(jet->eta())<2.5){
	    numJets++;
	    _hJetPt->Fill(jet->pT(),1.);
	    _hJetEta->Fill(jet->eta(),1.);
	    _hJetPhi->Fill(jet->phi(),1.);
	    _hJetE->Fill(jet->E(),1.);
	  }
	}

	_hNelec->Fill(numElectrons,1.);
	_hNmuon->Fill(numMuons,1.);
	_hNjet->Fill(numJets,1.);

	if (signalElectrons.size() > 0) {
	  _hElectron1Pt->Fill(signalElectrons[0]->pT());
          _hElectron1eta->Fill(signalElectrons[0]->eta());
          _hElectron1phi->Fill(signalElectrons[0]->phi());
	}
	
        if (signalElectrons.size() > 1) {
          temp = signalElectrons[0]->mom()+signalElectrons[1]->mom();
          _hinv->Fill(temp.m());

          _hElectron2Pt->Fill(signalElectrons[1]->pT());
          _hElectron2eta->Fill(signalElectrons[1]->eta());
          _hElectron2phi->Fill(signalElectrons[1]->phi());
        }

	if (signalMuons.size() > 0) {
          _hMuon1Pt->Fill(signalMuons[0]->pT());
	}
	
	if (signalMuons.size() > 1) {
          _hMuon2Pt->Fill(signalMuons[1]->pT());
        }

      }


      void finalize() {

	std::cout << "Writing histograms " << _hElectron1Pt->GetTitle() << std::endl;

	/*_ROOToutFile->cd();
	_hElectron1Pt->Write();
        _hElectron1eta->Write();
        _hElectron1phi->Write();
	
        _hElectron2Pt->Write();
        _hElectron2eta->Write();
        _hElectron2phi->Write();
	
        _hNelec->Write();
        _hNjet->Write();
        _hmet->Write();

	_hElectronPt->Write();
	_hElectronEta->Write();
        _hElectronPhi->Write();
	_hElectronE->Write();
	_hMuonPt->Write();
	_hMuonEta->Write();
        _hMuonPhi->Write();
	_hMuonE->Write();

	_hJetPt->Write();
	_hJetEta->Write();
        _hJetPhi->Write();
	_hJetE->Write();

	_hNmuon->Write();*/

        _ROOToutFile->Write();
	//_ROOToutFile->Close();
      }


      double loglikelihood() {
        return 0;
      }


      void collect_results() {
        // DO NOTHING

	finalize();

	SignalRegionData dummy;
        dummy.set_observation(10.);
        dummy.set_background(10.);
        dummy.set_backgroundsys(1.);
        dummy.set_signalsys(0.);
        dummy.set_signal(1.);

	add_result(dummy);
	
      }
    };


    DEFINE_ANALYSIS_FACTORY(Perf)


  }
}
