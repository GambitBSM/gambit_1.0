// Written by A Saavedra 19-06-2013 to test the FastSim  module
#include "Analysis.hpp"
class TH1F;
class TFile;

namespace Gambit {


  class Analysis_Perf : public Analysis {
  public:

    Analysis_Perf(){};
    ~Analysis_Perf();
    void init();
    void analyze(const Event* event);
    void finalize();
    double loglikelihood() { return 0; }


  private:

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
  };


}
