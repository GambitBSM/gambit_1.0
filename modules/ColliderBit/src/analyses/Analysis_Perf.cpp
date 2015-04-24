// Written by A Saavedra 19-06-2013 to test the FastSim module
// Edited by MJW on 07-01-2015 to test generic sims

#include <vector>
#include <algorithm>

#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"
#include "gambit/ColliderBit/ATLASEfficiencies.hpp"

// ROOT
#include <TH1.h>
#include <TVirtualPad.h>
#include <TApplication.h>
#include <TFile.h>

using namespace std;

namespace Gambit {
  namespace ColliderBit {


    bool SortPt(const HEPUtils::Particle* i, const HEPUtils::Particle* j) { return (i->pT() > j->pT()); }


    class Analysis_Perf : public HEPUtilsAnalysis {

      TH1F *_hBosonPt, *_hBosonEta, *_hBosonPhi;
      TH1F *_hElectron1Pt, *_hElectron1eta, *_hElectron1phi;
      TH1F *_hElectron2Pt, *_hElectron2eta, *_hElectron2phi;
      TH1F *_hMuon1Pt;
      TH1F *_hMuon2Pt;
      TH1F *_hElectron1Pt_truth, *_hElectron1eta_truth, *_hElectron1phi_truth;
      TH1F *_hElectron2Pt_truth, *_hElectron2eta_truth, *_hElectron2phi_truth;
      TH1F *_hNelec, *_hNelec_truth, *_hNelec30, *_hNelec100, *_hNelec500;
      TH1F *_hNtau, *_hNtau30, *_hNtau100, *_hNtau500;
      TH1F *_hNmuon, *_hNmuon30, *_hNmuon100, *_hNmuon500;
      TH1F *_hNjet30, *_hNjet100, *_hNjet500;
      TH1F *_hNcentraljet30, *_hNcentraljet100, *_hNcentraljet500;
      TH1F *_hNbjet30, *_hNbjet100, *_hNbjet500;
      TH1F *_hinv, *_hmet, *_hmet_1_muon, *_hmet_1_electron;
      TH1F *_hinv_truth, *_hmet_truth;
      TH1F *_hElectronPt, *_hElectronEta, *_hElectronPhi, *_hElectronE;
      TH1F *_hTauPt, *_hTauEta, *_hTauPhi, *_hTauE;
      TH1F *_hMuonPt, *_hMuonEta, *_hMuonPhi, *_hMuonE;
      TH1F *_hJetPt, *_hJetEta, *_hJetPhi, *_hJetE;
      TH1F *_hCentralJetPt, *_hCentralJetE;
      TH1F *_hBJetPt, *_hBJetEta, *_hBJetPhi, *_hBJetE;

      std::string _output_filename;
      TFile *_ROOToutFile;


    public:

      ~Analysis_Perf() {
        delete _ROOToutFile;
      }


      Analysis_Perf() {
        _output_filename = "SimOutput.root";
        std::cout << "Opening ROOT file" << _output_filename << endl;

        _ROOToutFile = new TFile(_output_filename.c_str(), "RECREATE");

        _hBosonPt = new TH1F("BosonPt", "Boson generated p_{T};GeV;", 100, 0., 200.);
        _hBosonEta = new TH1F("BosonEta", "Boson generated #eta;", 100, -5., 5.);
        _hBosonPhi = new TH1F( "BosonPhi", "Boson generated #phi;", 100, -6.0, 6.0);

        _hElectron1Pt = new TH1F("Electron1Pt", "Leading electron p_{T};GeV;", 100, 0., 200.);
        _hElectron1eta = new TH1F("Electron1Eta", "Leading electron #eta;", 100, -5., 5.);
        _hElectron1phi = new TH1F("Electron1Phi", "Leading electron #phi;", 100, -6.0, 6.0);
        _hElectron1Pt_truth = new TH1F("Electron1PtTruth", "Leading electron p_{T} (truth);GeV;", 100, 0., 200.);
        _hElectron1eta_truth = new TH1F("Electron1EtaTruth", "Leading electron #eta (truth);", 100, -5., 5.);
        _hElectron1phi_truth = new TH1F("Electron1PhiTruth", "Leading electron #phi (truth);", 100, -6.0, 6.0);

        _hElectron2Pt_truth = new TH1F("Electron2PtTruth", "Subleading electron p_{T} (truth);GeV;", 100, 0., 200.);
        _hElectron2eta_truth = new TH1F("Electron2EtaTruth", "Subleading electron #eta (truth);", 100, -5., 5.);
        _hElectron2phi_truth = new TH1F("Electron2PhiTruth", "Subleading electron #phi (truth);", 100, -6.0, 6.0);
        _hElectron2Pt = new TH1F("Electron2Pt","Subleading electron p_{T};GeV;", 100, 0., 200.);
        _hElectron2eta = new TH1F("Electron2Eta","Subleading electron #eta;", 100, -5., 5.);
        _hElectron2phi = new TH1F("Electron2Phi","Subleading electron #phi;", 100, -6.0, 6.0);

        _hMuon1Pt = new TH1F("Muon1Pt","Leading muon p_{T};GeV;", 100, 0., 200.);
        _hMuon2Pt = new TH1F("Muon2Pt","Leading muon p_{T};GeV;", 100, 0., 200.);

        _hNelec = new TH1F("Nelec","Number of isolated electrons;Number/Event", 5, -0.5, 4.5);
        _hNelec_truth = new TH1F("NelecTruth","Number of electrons (truth);Number/Event", 5, -0.5, 4.5);

        _hNmuon = new TH1F("Nmuon","Number of muons;Number/Event", 5, -0.5, 4.5);

	_hNtau = new TH1F("Ntau","Number of taus;Number/Event", 5, -0.5, 4.5);

        _hNjet30 = new TH1F("Njet30","Number of jets with p_T > 30 GeV;Number/Event", 10, -0.5, 9.5);
        _hNjet100 = new TH1F("Njet100","Number of jets with p_T > 100 GeV;Number/Event", 10, -0.5, 9.5);
        _hNjet500 = new TH1F("Njet500","Number of jets with p_T > 500 GeV;Number/Event", 10, -0.5, 9.5);


        _hNbjet30 = new TH1F("Nbjet30","Number of b jets with p_{T} > 30 GeV;Number/Event", 10, -0.5, 9.5);
        _hNbjet100 = new TH1F("Nbjet100","Number of b jets with p_{T} > 100 GeV;Number/Event", 10, -0.5, 9.5);
        _hNbjet500 = new TH1F("Nbjet500","Number of b jets with p_{T} > 500 GeV;Number/Event", 10, -0.5, 9.5);

        _hNcentraljet30 = new TH1F("Ncentraljet30","Number of central jets with p_{T} > 30 GeV;Number/Event", 10, -0.5, 9.5);
        _hNcentraljet100 = new TH1F("Ncentraljet100","Number of central jets with p_{T} > 100 GeV;Number/Event", 10, -0.5, 9.5);
        _hNcentraljet500 = new TH1F("Ncentraljet500","Number of central jets with p_{T} > 500 GeV;Number/Event", 10, -0.5, 9.5);

        _hinv = new TH1F("Inv","Z invariant mass;GeV", 100, 0, 200);
        _hinv_truth = new TH1F("InvTruth", "Z invariant mass (truth);GeV", 100, 0, 200);

        _hmet = new TH1F( "MET","MET;GeV", 50, 0, 1000);
	_hmet_1_muon = new TH1F( "MET_1muon","MET;GeV", 50, 0, 1000);
	_hmet_1_electron = new TH1F( "MET_1electron","MET;GeV", 50, 0, 1000);


        _hmet_truth = new TH1F("METTruth", "MET (truth);GeV", 100, 0, 200);

        _hElectronPt = new TH1F("ElectronPt", "Electron p_{T};GeV;", 50, 0., 500.);
        _hElectronEta = new TH1F("ElectronEta", "Electron #eta;", 50, -5., 5.);
        _hElectronPhi = new TH1F("ElectronPhi", "Electron #phi;", 50, -6.0, 6.0);
        _hElectronE = new TH1F("ElectronE", "Electron E;GeV;", 50, 0., 500.);


	_hTauPt = new TH1F("TauPt", "Tau p_T;GeV;", 50, 0., 500.);
        _hTauEta = new TH1F("TauEta", "Tau #eta;", 50, -5., 5.);
        _hTauPhi = new TH1F("TauPhi", "Tau #phi;", 50, -6.0, 6.0);
        _hTauE = new TH1F("TauE", "Tau E;GeV;", 50, 0., 500.);

        _hMuonPt = new TH1F("MuonPt","Muon p_T;GeV;", 50, 0., 500.);
        _hMuonEta = new TH1F("MuonEta","Muon #eta;", 50, -5., 5.);
        _hMuonPhi = new TH1F("MuonPhi","Muon #phi;", 50, -6.0, 6.0);
        _hMuonE = new TH1F("MuonE","Muon E;GeV;", 50, 0., 500.);

        /// @todo Use log/exp binning for E and pT; increase range past 1 TeV?
        _hJetPt = new TH1F("JetPt","Jet p_{T};GeV;", 50, 0., 500.);
        _hJetE = new TH1F("JetE","Jet E;GeV;", 50, 0., 500.);
        _hJetEta = new TH1F("JetEta","Jet #eta;", 50, -5., 5.);
        _hJetPhi = new TH1F("JetPhi","Jet #phi;", 50, -6.0, 6.0);
        //
        _hBJetPt = new TH1F("BJetPt","b-jet p_{T};GeV;", 50, 0., 500.);
        _hBJetE = new TH1F("BJetE","b-jet E;GeV;", 50, 0., 500.);
        _hBJetEta = new TH1F("BJetEta","b-jet #eta;", 50, -5., 5.);
        _hBJetPhi = new TH1F("BJetPhi","b-jet #phi;", 50, -6.0, 6.0);
        //
        _hCentralJetPt = new TH1F("CentralJetPt","Jet p_{T} for |#eta| < 2.5;GeV;", 50, 0., 500.);
        _hCentralJetE = new TH1F("CentralJetE","Jet E for |#eta| < 2.5;GeV;", 50, 0., 500.);

      }


      void analyze(const HEPUtils::Event* event) {

       
	// Now define vectors of baseline objects
        vector<HEPUtils::Particle*> baselineElectrons;
        for (HEPUtils::Particle* electron : event->electrons()) {
          if (electron->pT() > 10. && electron->abseta() < 2.47 &&
              !object_in_cone(*event, *electron, 0.1*electron->pT(), 0.2)) baselineElectrons.push_back(electron);
        }
        vector<HEPUtils::Particle*> baselineMuons;
        for (HEPUtils::Particle* muon : event->muons()) {
          if (muon->pT() > 10. && muon->abseta() < 2.4 &&
              !object_in_cone(*event, *muon, 1.8, 0.2)) baselineMuons.push_back(muon);
        }

	// Get b jets with efficiency and mistag (fake) rates
        vector<HEPUtils::Jet*> baselineJets, bJets; // trueBJets; //for debugging
        for (HEPUtils::Jet* jet : event->jets()) {
          if (jet->pT() > 20. && jet->abseta() < 10.0) baselineJets.push_back(jet);
          if (jet->abseta() < 2.5 && jet->pT() > 25.) {
            if ((jet->btag() && HEPUtils::rand01() < 0.75) || (!jet->btag() && HEPUtils::rand01() < 0.02)) bJets.push_back(jet);
          }

	}

	// Overlap removal
        vector<HEPUtils::Particle*> signalElectrons, signalMuons;
        vector<HEPUtils::Particle*> electronsForVeto, muonsForVeto;
        vector<HEPUtils::Jet*> goodJets, signalJets;

        // Note that ATLAS use |eta|<10 for removing jets close to electrons
        // Then 2.8 is used for the rest of the overlap process
        // Then the signal cut is applied for signal jets

        // Remove any jet within dR=0.2 of an electron
        for (HEPUtils::Jet* j : baselineJets) {
          if (!any(baselineElectrons, [&](HEPUtils::Particle* e){ return deltaR_eta(*e, *j) < 0.2; })) {
            if (j->abseta() < 2.8) goodJets.push_back(j);
            if (j->abseta() < 2.5 && j->pT() > 25) signalJets.push_back(j);
          }
        }

        // Remove electrons and muons within dR=0.4 of surviving jets
        for (HEPUtils::Particle* e : baselineElectrons) {
          if (!any(goodJets, [&](const HEPUtils::Jet* j){ return deltaR_eta(*e, *j) < 0.4; })) {
            electronsForVeto.push_back(e);
            if (e->pT() > 10) signalElectrons.push_back(e);
          }
        }
        for (HEPUtils::Particle* m : baselineMuons) {
          if (!any(goodJets, [&](const HEPUtils::Jet* j){ return deltaR_eta(*m, *j) < 0.4; })) {
            muonsForVeto.push_back(m);
            if (m->pT() > 10) signalMuons.push_back(m);
          }
        }	

	// Taus
	vector<HEPUtils::Particle*> signalTaus;
        for (HEPUtils::Particle* tau : event->taus()) {
          if (tau->pT() > 20. && fabs(tau->eta()) < 2.47) signalTaus.push_back(tau);
        }

      
        // Do further electron selection
        applyMediumIDElectronSelection(signalElectrons);

	// We now have the signal electrons, muons and jets; fill the histograms

        // MET
        _hmet->Fill(event->met());
	
	if(signalElectrons.size()==1 && signalMuons.size()==0)_hmet_1_electron->Fill(event->met());
	if(signalMuons.size()==1 && signalElectrons.size()==0)_hmet_1_muon->Fill(event->met());


        // Electrons
        _hNelec->Fill(signalElectrons.size());

        for (HEPUtils::Particle* electron : signalElectrons) {
          _hElectronPt->Fill(electron->pT());
          _hElectronEta->Fill(electron->eta());
          _hElectronPhi->Fill(electron->phi());
          _hElectronE->Fill(electron->E());
        }

        // Muons
        _hNmuon->Fill(signalMuons.size());
        for (HEPUtils::Particle* muon : signalMuons) {
          _hMuonPt->Fill(muon->pT(),1.);
          _hMuonEta->Fill(muon->eta(),1.);
          _hMuonPhi->Fill(muon->phi(),1.);
          _hMuonE->Fill(muon->E(),1.);
        }

        // Taus

	_hNtau->Fill(signalTaus.size());
	for (HEPUtils::Particle* tau : signalTaus) {
	  _hTauPt->Fill(tau->pT(),1.);
          _hTauEta->Fill(tau->eta(),1.);
          _hTauPhi->Fill(tau->phi(),1.);
          _hTauE->Fill(tau->E(),1.);
	}

        // Jets
        int numJets30(0), numJets100(0), numJets500(0);
        int numCentralJets30(0), numCentralJets100(0), numCentralJets500(0);
        int numBJets30(0), numBJets100(0), numBJets500(0);
        for (HEPUtils::Jet* jet : signalJets) {
          // All jets
          if (jet->pT() > 30) numJets30 += 1;
          if (jet->pT() > 100) numJets100 += 1;
          if (jet->pT() > 500) numJets500 += 1;
          _hJetPt->Fill(jet->pT());
          _hJetE->Fill(jet->E());
          _hJetEta->Fill(jet->eta());
          _hJetPhi->Fill(jet->phi());
          // Central jets
          if (jet->abseta() < 2.5) {
            if (jet->pT() > 30) numCentralJets30 += 1;
            if (jet->pT() > 100) numCentralJets100 += 1;
            if (jet->pT() > 500) numCentralJets500 += 1;
            _hCentralJetPt->Fill(jet->pT());
            _hCentralJetE->Fill(jet->E());
          }
          // b-jets
          if (jet->btag()) {
            if (jet->pT() > 30) numBJets30 += 1;
            if (jet->pT() > 100) numBJets100 += 1;
            if (jet->pT() > 500) numBJets500 += 1;
            _hBJetPt->Fill(jet->pT());
            _hBJetE->Fill(jet->E());
            _hBJetEta->Fill(jet->eta());
            _hBJetPhi->Fill(jet->phi());
          }
        }

        // Jet multiplicities
        _hNjet30->Fill(numJets30);
        _hNjet100->Fill(numJets100);
        _hNjet500->Fill(numJets500);
        _hNcentraljet30->Fill(numCentralJets30);
        _hNcentraljet100->Fill(numCentralJets100);
        _hNcentraljet500->Fill(numCentralJets500);
        _hNbjet30->Fill(numBJets30);
        _hNbjet100->Fill(numBJets100);
        _hNbjet500->Fill(numBJets500);


        // Aldo observables:

        if (signalElectrons.size() > 0) {
          _hElectron1Pt->Fill(signalElectrons[0]->pT());
          _hElectron1eta->Fill(signalElectrons[0]->eta());
          _hElectron1phi->Fill(signalElectrons[0]->phi());
        }

        if (signalElectrons.size() > 1) {
          HEPUtils::P4 temp = signalElectrons[0]->mom() + signalElectrons[1]->mom();
          _hinv->Fill(temp.m());
          _hElectron2Pt->Fill(signalElectrons[1]->pT());
          _hElectron2eta->Fill(signalElectrons[1]->eta());
          _hElectron2phi->Fill(signalElectrons[1]->phi());
        }

        if (signalMuons.size() > 0) _hMuon1Pt->Fill(signalMuons[0]->pT());
        if (signalMuons.size() > 1) _hMuon2Pt->Fill(signalMuons[1]->pT());
      }


      void finalize() {

        // std::cout << "Writing histograms " << _hElectron1Pt->GetTitle() << std::endl;

        /// @todo Can delete this? Aren't they automatically all written from the current file?
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

        /// @todo We should close the file. Shouldn't we also delete the histo pointers?... or are they owned by the file?
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
