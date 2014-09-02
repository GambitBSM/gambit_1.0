// Written by A Saavedra 19-06-2013 to test the FastSim module
#include "Analysis.hpp"

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


    bool SortPt(Particle *i, Particle *j) { return (i->pT() > j->pT()); }


    class Analysis_Perf : public Analysis {

      TH1F *_hBosonPt, *_hBosoneta, *_hBosonphi;
      TH1F *_hElectron1Pt, *_hElectron1eta, *_hElectron1phi;
      TH1F *_hElectron2Pt, *_hElectron2eta, *_hElectron2phi;
      TH1F *_hElectron1Pt_truth, *_hElectron1eta_truth, *_hElectron1phi_truth;
      TH1F *_hElectron2Pt_truth, *_hElectron2eta_truth, *_hElectron2phi_truth;
      TH1F *_hNelec,*_hNelec_truth, *_hNjet;
      TH1F *_hinv, *_hmet;
      TH1F *_hinv_truth, *_hmet_truth;

      std::string _output_filename;
      TFile *_ROOToutFile;


    public:


      ~Analysis_Perf() {
        delete _ROOToutFile;
      }


      void init() {
        _output_filename = "FastSim_PythiaOutput.root";

        _ROOToutFile = new TFile(_output_filename.c_str(),"RECREATE");

        _hBosonPt = new TH1F("BosonPt"," Boson Generated Pt;GeV;",100, 0., 200.);
        _hBosoneta = new TH1F("Bosoneta"," Boson Generated eta;",100, -5., 5.);
        _hBosonphi = new TH1F( "BosonPhi","Boson Generated Phi;",100, -6.0, 6.0);

        _hElectron1Pt_truth = new TH1F("Electron1PtTruth","Leading Electron Pt (Truth);GeV;",100, 0., 200.);
        _hElectron1eta_truth = new TH1F("Electron1etaTruth","Leading Electron eta (Truth);",100, -5., 5.);
        _hElectron1phi_truth = new TH1F( "Electron1PhiTruth","Leading Electron Phi (Truth);",100, -6.0, 6.0);

        _hElectron2Pt_truth = new TH1F("Electron2PtTruth","SubLeading Electron Pt (Truth);GeV;",100, 0., 200.);
        _hElectron2eta_truth = new TH1F("Electron2etaTruth","SubLeading  Electron pseudorapidity (Truth);eta",100, -5., 5.);
        _hElectron2phi_truth = new TH1F( "Electron2PhiTruth","SubLeading Electron Phi (Truth);",100, -6.0, 6.0);

        _hElectron1Pt = new TH1F("Electron1Pt","Leading Electron Pt;GeV;",100, 0., 200.);
        _hElectron1eta = new TH1F("Electron1eta","Leading Electron eta;",100, -5., 5.);
        _hElectron1phi = new TH1F( "Electron1Phi","Leading Electron Phi;",100, -6.0, 6.0);

        _hElectron2Pt = new TH1F("Electron2Pt","SubLeading Electron Pt;GeV;",100, 0., 200.);
        _hElectron2eta = new TH1F("Electron2eta","SubLeading  Electron eta;",100, -5., 5.);
        _hElectron2phi = new TH1F( "Electron2Phi","SubLeading Electron Phi;",100, -6.0, 6.0);

        _hNelec = new TH1F("Nelec","Number of Isolated Electrons;Number/Event",5,-0.5,4.5);
        _hNelec_truth = new TH1F("NelecTruth","Number of Electrons (Truth);Number/Event",5,-0.5,4.5);

        _hNjet = new TH1F("Njet","Number of Jets;Number/Event",10,-0.5,9.5);

        _hinv = new TH1F( "Inv","Z Invariant Mass;GeV",100, 0, 200);
        _hmet = new TH1F( "MET","MET;GeV",100, 0, 200);

        _hinv_truth = new TH1F( "InvTruth","Z Invariant Mass (Truth);GeV",100, 0, 200);
        _hmet_truth = new TH1F( "METTruth","MET (Truth);GeV",100, 0, 200);

      }



      void analyze(const Event* event) {

        P4 temp;
        P4 ptot = event->missingmom();
        //double met= event->met();

        //    cout << " met is "<< met << " ptot " << ptot.pT() << endl;
        _hmet->Fill(ptot.pT());

        vector<Jet *> jets=event->jets();
        vector<Particle *> electrons=event->electrons();
        vector<Particle *> muons=event->muons();

        //    cout << "sorting " << endl;
        // now lets find the two electrons with the highest pt and calculate the invariant mass from the two
        // first sort them according to their pt
        std::sort (electrons.begin(), electrons.end(), SortPt);

        //    cout << "after sorting " << endl;
        //    for (size_t iEl=0;iEl<electrons.size();iEl++) {
        //      cout << " Electron: " << iEl << " Pt " << electrons[iEl]->pT() << endl;
        //    }

        if (electrons.size() > 1) {
          temp = electrons[0]->mom()+electrons[1]->mom();
          _hinv->Fill(temp.m());

          _hElectron1Pt->Fill(electrons[0]->pT());
          _hElectron1eta->Fill(electrons[0]->eta());
          _hElectron1phi->Fill(electrons[0]->phi());

          _hElectron2Pt->Fill(electrons[1]->pT());
          _hElectron2eta->Fill(electrons[1]->eta());
          _hElectron2phi->Fill(electrons[1]->phi());
        }
      }


      void finalize() {
        _ROOToutFile->Write();
      }


      double loglikelihood() {
        return 0;
      }


    };


    DEFINE_ANAFACTORY(Perf)


  }
}
