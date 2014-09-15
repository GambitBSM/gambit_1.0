#include "Analysis.hpp"
#include "mt2_bisect.h"

/// @todo Remove the ROOT classes...
#include "TLorentzVector.h"
#include "TVector2.h"

#include <vector>
#include <cmath>
#include <memory>
#include <iomanip>
using namespace std;


// The ATLAS 2 lepton direct stop analysis (20fb^-1) - `heavy stop'.

// based on: ATLAS-CONF-2013-048

//    Code by Martin White, Sky French.
//    Known errors:
//    a) The isolation is already applied in the simulation rather than after overlap removal -> the electron and muon veto technically require a veto on base-line electrons/muons not overlapping with jets

//    Known features:
//    a) Must run simulator with 70% b tagging efficiency and ?% mis-id rate
//    b) For now have nicked ATLAS MT2 code. Need to check status of this for public release. The better option is to write a non-ROOT version later.
//    ===> STF: Now using mt2 bisect method from H. Cheng, Z. Han, arXiv:0810.5178 for mT2 calculation


namespace Gambit {
  namespace ColliderBit {



    // A useful MT2 struct for this module
    struct MT2_2l {
      MT2_2l() : MT2ll(0), MT2bb(0) { }
      double MT2ll;
      double MT2bb;
    };


    class Analysis_ATLAS_2LEPStop_20invfb : public Analysis {
    private:

      // Numbers passing cuts
      int _numSRM90SF, _numSRM100SF, _numSRM110SF, _numSRM120SF, _numSRM90DF, _numSRM100DF, _numSRM110DF, _numSRM120DF;

      vector<int> cutFlowVector_alt;
      vector<int> cutFlowVector;
      vector<string> cutFlowVector_str;
      int NCUTS; //=24;

      // Debug histos

    public:

      Analysis_ATLAS_2LEPStop_20invfb()
        : _numSRM90SF(0), _numSRM100SF(0), _numSRM110SF(0), _numSRM120SF(0),
          _numSRM90DF(0), _numSRM100DF(0), _numSRM110DF(0), _numSRM120DF(0),
          NCUTS(24)
      {
        for (int i=0; i<NCUTS; i++) {
          cutFlowVector.push_back(0);
          cutFlowVector_str.push_back("");
          cutFlowVector_alt.push_back(0);
        }
      }


      MT2_2l MT2helper(vector<Jet*> jets, vector<Particle*> electrons, vector<Particle*> muons, vector<Particle*> leptons, P4 metVec) {
        MT2_2l results;

        if (muons.size()+electrons.size()<2) return results;

        //DELPHES does not have a continuous b weight
        //Thus must approximate using the two true b jets
        Jet* trueBjet1=0; //need to assign this
        Jet* trueBjet2=0; //nee to assign this

        int nTrueBJets=0;
        for(Jet * tmpJet: jets){
          if(tmpJet->isBJet()){
            trueBjet1=tmpJet;
            nTrueBJets++;
          }
        }

        for(Jet * tmpJet: jets){
          if(tmpJet->isBJet() && tmpJet!=trueBjet1){
            trueBjet2=tmpJet;
            //  nTrueBJets++;
          }
        }

        TLorentzVector jet1B,jet2B;
        if(nTrueBJets>=2) {
          jet1B.SetPtEtaPhiE(trueBjet1->pT(),trueBjet1->eta(),trueBjet1->phi(),trueBjet1->E());
          jet2B.SetPtEtaPhiE(trueBjet2->pT(),trueBjet2->eta(),trueBjet2->phi(),trueBjet2->E());
        }

        TLorentzVector lepton1; TLorentzVector lepton2;
        lepton1.SetPtEtaPhiE(leptons.at(0)->pT(),leptons.at(0)->eta(),leptons.at(0)->phi(),leptons.at(0)->E());
        lepton2.SetPtEtaPhiE(leptons.at(1)->pT(),leptons.at(1)->eta(),leptons.at(1)->phi(),leptons.at(1)->E());

        TLorentzVector MET;
        MET.SetXYZM(metVec.px(),metVec.py(),0.,0.);

        double pa_a[3] = { 0, lepton1.Px(), lepton1.Py() };
        double pb_a[3] = { 0, lepton2.Px(), lepton2.Py() };
        double pmiss_a[3] = { 0, MET.Px(), MET.Py() };
        double mn_a = 0.;

        mt2_bisect::mt2 mt2_event_a;

        mt2_event_a.set_momenta(pa_a,pb_a,pmiss_a);
        mt2_event_a.set_mn(mn_a);

        double mt2a = mt2_event_a.get_mt2();

        double mt2b = 0;

        if(nTrueBJets>=2) {

          TLorentzVector MET_withleptons;
          MET_withleptons = MET + lepton1 + lepton2;

          double pa_b[3] = { 0, jet1B.Px(), jet1B.Py() };
          double pb_b[3] = { 0, jet2B.Px(), jet2B.Py() };
          double pmiss_b[3] = { 0, MET_withleptons.Px(), MET_withleptons.Py() };
          double mn_b = 0.;

          mt2_bisect::mt2 mt2_event_b;

          mt2_event_b.set_momenta(pa_b,pb_b,pmiss_b);
          mt2_event_b.set_mn(mn_b);

          mt2b = mt2_event_b.get_mt2();
        }

        results.MT2ll=mt2a;
        results.MT2bb=mt2b;


        return results;
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
        vector<Jet*> trueBJets; //for debugging
        for (Jet* jet : event->jets()) {
          if (jet->pT() > 20. && fabs(jet->eta()) < 4.5) baselineJets.push_back(jet);
          if(jet->isBJet() && fabs(jet->eta()) < 2.5 && jet->pT() > 25.) bJets.push_back(jet);
        }

        // Overlap removal
        vector<Particle*> signalLeptons;
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
          if (!overlap&&fabs(baselineJets.at(iJet)->eta())<2.5)goodJets.push_back(baselineJets.at(iJet));
          if (!overlap&&fabs(baselineJets.at(iJet)->eta())<2.5 && baselineJets.at(iJet)->pT()>20.)signalJets.push_back(baselineJets.at(iJet));
        }

        // Remove electrons with dR=0.4 or surviving jets
        for (size_t iEl=0;iEl<baselineElectrons.size();iEl++) {
          bool overlap=false;
          P4 elVec=baselineElectrons.at(iEl)->mom();
          for (size_t iJet=0;iJet<goodJets.size();iJet++) {
            P4 jetVec=goodJets.at(iJet)->mom();
            if (elVec.deltaR_eta(jetVec)<0.4)overlap=true;
          }
          if (!overlap && elVec.pT()>10.) {
            signalElectrons.push_back(baselineElectrons.at(iEl));
            signalLeptons.push_back(baselineElectrons.at(iEl));
          }
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
          if (!overlap && muVec.pT()>10.) {
            signalMuons.push_back(baselineMuons.at(iMu));
            signalLeptons.push_back(baselineMuons.at(iMu));
          }
          if(!overlap)muonsForVeto.push_back(baselineMuons.at(iMu));
        }

        // We now have the signal electrons, muons, jets and b jets- move on to the analysis

        // Calculate common variables and cuts first
        int nElectrons = signalElectrons.size();
        int nMuons = signalMuons.size();
        int nJets = signalJets.size();
        int nLeptons = signalLeptons.size();

        bool isOS=false;
        bool isMLL=false;
        bool isZsafe=false;
        bool ispT=false;
        bool isdphi=false;
        bool isdphib=false;

        double mt2ll(0);//, mt2bb(0);
        if (nLeptons == 2) {
          MT2_2l mt2s = MT2helper(signalJets, signalElectrons, signalMuons, signalLeptons, ptot);
          mt2ll = mt2s.MT2ll;
          //mt2bb = mt2s.MT2bb;
        }

        TLorentzVector lep1; TLorentzVector lep2;

        TLorentzVector metvec;
        metvec.SetPtEtaPhiE(ptot.pT(),ptot.eta(),ptot.phi(),ptot.E());

        if (nLeptons==2) {

          if(((signalLeptons.at(0)->pid()<0 && signalLeptons.at(1)->pid()>0) || (signalLeptons.at(0)->pid()>0 && signalLeptons.at(1)->pid()<0))) isOS=true;

          lep1.SetPtEtaPhiE(signalLeptons.at(0)->pT(),signalLeptons.at(0)->eta(),signalLeptons.at(0)->phi(),signalLeptons.at(0)->E());
          lep2.SetPtEtaPhiE(signalLeptons.at(1)->pT(),signalLeptons.at(1)->eta(),signalLeptons.at(1)->phi(),signalLeptons.at(1)->E());

          if((lep1+lep2).M()>20.) isMLL=true;

          if(fabs((lep1+lep2).M()-91.)>20.) isZsafe=true;

          if(lep1.Pt()>25. || lep2.Pt()>25) ispT=true;

          float dphi_jetmetclose = 9999.;
          for(int j=0; j<nJets; j++) {
            float temp = std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi()));
            if(fabs(temp)<dphi_jetmetclose) {
              dphi_jetmetclose = temp;
            }
          }
          if(dphi_jetmetclose>1.0) isdphi=true;

          TLorentzVector ptllmet;
          ptllmet = lep1 + lep2 + metvec;
          float temp = ptllmet.DeltaPhi(metvec);
          if(fabs(temp)<1.5) isdphib=true;

        }

        //if(leptonsForVeto.size()>0 && leptonsForVeto[0]->pT()>25.)cout << "Leptons size " << leptonsForVeto.size() << " muons " << nMuons << " electrons " << nElectrons << endl;

        //Common preselection for all signal regions
        bool passJetCut=false;
        //bool passBJetCut=false;

        if(nJets>=2){
          if(signalJets[0]->pT() > 100.
             && signalJets[1]->pT() > 50.)passJetCut=true;

          for(int j=0; j<nJets; j++) {
            for(int k=j+1; k<nJets; k++) {
              //if(signalJets[j]->isBJet() && signalJets[k]->isBJet()) passBJetCut=true;
            }
          }
        }

        //mjjj combinations
        TLorentzVector mjjj0; TLorentzVector mjjj1;
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
        if(nJets>=6) {
          int j1 = 0 ; int j2 = 0; int j3 = 0; int j4 = 0; int j5 = 0; //int j6 = 0;
          for(int k=0; k<nJets; k++) {
            for(int l=0; l<nJets; l++) {
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
          for(int p=0; p<nJets; p++) {
            if(p!=j1 && p!=j2) {
              jet3.SetPtEtaPhiE(signalJets[p]->pT(),signalJets[p]->eta(),signalJets[p]->phi(),signalJets[p]->E());
              if(jet3.DeltaR(W1)<mindphi_w1j3) {
                j3 = p;
                mindphi_w1j3 = jet3.DeltaR(W1);
                T1 = W1+jet3;
              }
            }
          }
          double mindphi_45 = 9999.;
          for(int k=0; k<nJets; k++) {
            for(int l=0; l<nJets; l++) {
              if(k!=j1 && k!=j2 && k!=j3 && l!=j1 && l!=j2 && l!=j3 && k!=l) {
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
          for(int p=0; p<nJets; p++) {
            if(p!=j1 && p!=j2 && p!=j3 && p!=j4 && p!=j5) {
              jet6.SetPtEtaPhiE(signalJets[p]->pT(),signalJets[p]->eta(),signalJets[p]->phi(),signalJets[p]->E());
              if(jet6.DeltaR(W2)<mindphi_w2j6) {
                //j6 = p;
                mindphi_w2j6 = jet6.DeltaR(W2);
                T2 = W2+jet6;
              }
            }
          }

          if(fabs(T1.M()-173.)<fabs(T2.M()-173.)) {
            mjjj0 = T1;
            mjjj1 = T2;
          }
          else {
            mjjj0 = T2;
            mjjj1 = T1;
          }

        }


        //Must have exactly one lepton
        //cout << "leptonsForVeto size" << leptonsForVeto.size() << endl;

        //Calculate dphi(jet,met) for the three leading jets
        //float dphi_jetmet1=9999;
        //if(nJets>0)dphi_jetmet1=std::acos(std::cos(signalJets.at(0)->phi()-ptot.phi()));
        //float dphi_jetmet2=9999;
        //if(nJets>1)dphi_jetmet2=std::acos(std::cos(signalJets.at(1)->phi()-ptot.phi()));
        //float dphi_jetmet3=9999;
        //if(nJets>2)dphi_jetmet3=std::acos(std::cos(signalJets.at(2)->phi()-ptot.phi()));

        //Calculate dphi(b,met) for the closest b-jet in phi to MET
        //float dphi_bjetmet=9999.;
        /*float minphi =9999.;
          int whichb=0;
          for(int j=0; j<nJets; j++) {
          if(signalJets[j]->isBJet()) {
          if(fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())))<minphi) {
          minphi = fabs(std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi())));
          //dphi_bjetmet = minphi;
          whichb=j;
          }
          }
          }*/

        //float mT_bjetmet = 0;
        //if(passBJetCut) mT_bjetmet = sqrt(2*signalJets.at(whichb)->pT()*met*(1-std::cos(dphi_bjetmet)));

        //bool cut_tau=true;
        //Tau Veto
        //for (int j=0; j<nJets; j++) {
        //if(!signalJets[j]->isBJet() && std::acos(std::cos(signalJets.at(j)->phi()-ptot.phi()))<0.2*3.14)
        //  cut_tau=false;
        //}
        //Calculate met/sqrt(HT) (use four leading jets only)
        //float HT=0;
        //if(nJets>=4)HT=signalJets[0]->pT()+signalJets[1]->pT()+signalJets[2]->pT()+signalJets[3]->pT();

        //Calculate mT
        P4 lepVec;
        if(nElectrons==1)lepVec=signalElectrons[0]->mom();
        if(nMuons==1)lepVec=signalMuons[0]->mom();
        //cout << "DPHI" << ptot.deltaPhi(lepVec) << endl;
        //Note: phi here should be in the range -pi to pi
        //float mT = sqrt(2.*lepVec.pT()*met*(1.-cos(ptot.deltaPhi(lepVec))));
        //This is the ATLAS definition of dphi for this analysis
        //Note that it gives different answers to our dphi function (given above)
        //float mT=sqrt(2.*lepVec.pT()*met*(1. - cos(TVector2::Phi_mpi_pi(lepVec.phi()-ptot.phi()))));

        //Calculate meff (all jets with pT>30 GeV, lepton pT and met)
        float meff = met + lepVec.pT();
        for (Jet* jet : signalJets) {
          if(jet->pT()>30.)meff += jet->pT();
        }
        //Cutflow flags
        //bool cut_mjjj0=false;
        //bool cut_mjjj1=false;
        bool cut_2leptons_ee=false;
        bool cut_2leptons_emu=false;
        bool cut_2leptons_mumu=false;
        bool cut_2leptons_base=false;
        bool cut_2leptons=false;
        //bool cut_mTbjetmetGt175=false;
        //bool cut_ElectronVeto=false;
        //bool cut_MuonVeto=false;
        bool cut_2jets=false;
        //bool cut_Btag=false;
        //bool cut_dPhiJet3=false;
        //bool cut_dPhiJet2=false;
        //bool cut_dPhiJet1=false;
        //bool cut_METGt130=false;
        //bool cut_METGt150=false;
        //bool cut_METGt200=false;
        //bool cut_METGt250=false;
        //bool cut_METGt300=false;
        //bool cut_METGt350=false;
        //bool cut_dPhiJets=false;
        bool cut_MT290=false;
        bool cut_MT2100=false;
        bool cut_MT2110=false;
        bool cut_MT2120=false;

        if(mt2ll>90) cut_MT290=true;
        if(mt2ll>100) cut_MT2100=true;
        if(mt2ll>110) cut_MT2110=true;
        if(mt2ll>120) cut_MT2120=true;


        if(baselineElectrons.size()+baselineMuons.size()==2) cut_2leptons_base=true;
        if(signalElectrons.size()+signalMuons.size()==2) cut_2leptons=true;
        if(signalElectrons.size()==2 && signalMuons.size()==0) cut_2leptons_ee=true;
        if(signalElectrons.size()==1 && signalMuons.size()==1) cut_2leptons_emu=true;
        if(signalElectrons.size()==0 && signalMuons.size()==2) cut_2leptons_mumu=true;

        //if(mT_bjetmet>175.)cut_mTbjetmetGt175=true;
        //if(electronsForVeto.size()==0)cut_ElectronVeto=true;
        //if(muonsForVeto.size()==0)cut_MuonVeto=true;
        if(passJetCut)cut_2jets=true;
        //if(passBJetCut)cut_Btag=true;
        //if(dphi_jetmet3>3.14/fabs(5.0))cut_dPhiJet3=true;
        //if(dphi_jetmet2>3.14/fabs(5.0))cut_dPhiJet2=true;
        //if(dphi_jetmet1>3.14/fabs(5.0))cut_dPhiJet1=true;
        //if(cut_dPhiJet1 && cut_dPhiJet2 && cut_dPhiJet3)cut_dPhiJets=true;
        //if(met>130.)cut_METGt130=true;
        //if(met>150.)cut_METGt150=true;
        //if(met>200.)cut_METGt200=true;
        //if(met>250.)cut_METGt250=true;
        //if(met>300.)cut_METGt300=true;
        //if(met>350.)cut_METGt350=true;
        //if(nJets>=6) {
        //if(mjjj0.M()<270 && mjjj0.M()>80) cut_mjjj0=true;
        //if(mjjj1.M()<270 && mjjj1.M()>80) cut_mjjj1=true;
        //}

        cutFlowVector_str[0] = "No cuts ";
        cutFlowVector_str[1] = "2 Baseline Leptons ";
        cutFlowVector_str[2] = "2 SF Signal Leptons";
        cutFlowVector_str[3] = "2 OS SF Signal Leptons ";
        cutFlowVector_str[4] = "mll > 20 GeV ";
        cutFlowVector_str[5] = "leading lepton pT ";
        cutFlowVector_str[6] = "|mll-mZ|>20 GeV ";
        cutFlowVector_str[7] = "dphi_min > 1.0 ";
        cutFlowVector_str[8] = "dphib < 1.5  ";
        cutFlowVector_str[9] = "SR M90 [SF] ";
        cutFlowVector_str[10] = "SR M100 [SF] ";
        cutFlowVector_str[11] = "SR M110 [SF] ";
        cutFlowVector_str[12] = "SR M120 [SF] ";
        cutFlowVector_str[13] = "2 DF Signal Leptons";
        cutFlowVector_str[14] = "2 OS DF Signal Leptons ";
        cutFlowVector_str[15] = "mll > 20 GeV ";
        cutFlowVector_str[16] = "leading lepton pT ";
        cutFlowVector_str[17] = "|mll-mZ|>20 GeV ";
        cutFlowVector_str[18] = "dphi_min > 1.0 ";
        cutFlowVector_str[19] = "dphib < 1.5  ";
        cutFlowVector_str[20] = "SR M90 [DF] ";
        cutFlowVector_str[21] = "SR M100 [DF] ";
        cutFlowVector_str[22] = "SR M110 [DF] ";
        cutFlowVector_str[23] = "SR M120 [DF] ";



        for(int j=0;j<NCUTS;j++){
          if(
             (j==0) ||

             (j==1 && cut_2leptons_base) ||

             (j==2 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu)) ||

             (j==3 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS) ||

             (j==4 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL) ||

             (j==5 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT) ||

             (j==6 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe) ||

             (j==7 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi) ||

             (j==8 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib) ||

             (j==9 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT290) ||

             (j==10 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee ||cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2100 && cut_2jets) ||

             (j==11 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee ||cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2110 && nJets>=2) ||

             (j==12 && cut_2leptons_base && cut_2leptons && (cut_2leptons_ee ||cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2120 && nJets>=2) ||

             (j==13 && cut_2leptons && cut_2leptons_emu) ||

             (j==14 && cut_2leptons && cut_2leptons_emu && isOS) ||

             (j==15 && cut_2leptons && cut_2leptons_emu && isOS && isMLL) ||

             (j==16 && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT) ||

             (j==17 && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe) ||

             (j==18 && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi) ||

             (j==19 && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib) ||

             (j==20 && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT290) ||

             (j==21 && cut_2leptons_base && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2100 && cut_2jets) ||

             (j==22 && cut_2leptons_base && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2110 && nJets>=2) ||

             (j==23 && cut_2leptons_base && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2120 && nJets>=2) )

            cutFlowVector[j]++;
        }

        //We're now ready to apply the cuts for each signal region
        //_numSR1, _numSR2, _numSR3;

        if(cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT290) _numSRM90SF++;
        if(cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2100 && cut_2jets) _numSRM100SF++;
        if(cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2110 && nJets>=2) _numSRM110SF++;
        if(cut_2leptons_base && cut_2leptons && (cut_2leptons_ee || cut_2leptons_mumu) && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2120 && nJets>=2) _numSRM120SF++;

        if(cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT290) _numSRM90DF++;
        if(cut_2leptons_base && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2100 && cut_2jets) _numSRM100DF++;
        if(cut_2leptons_base && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2110 && nJets>=2) _numSRM110DF++;
        if(cut_2leptons_base && cut_2leptons && cut_2leptons_emu && isOS && isMLL && ispT && isZsafe && isdphi && isdphib && cut_MT2120 && nJets>=2) _numSRM120DF++;



        return;

      }

      void finalize() {

        using namespace std;

        double scale_to = 1339.6;
        double trigger_cleaning_eff = 1;//0.53;

        cout << "------------------------------------------------------------------------------------------------------------------------------ "<<std::endl;
        cout << "CUT FLOW: ATLAS-CONF-2013-48 - Appendix, Table 8 - stop -> b chargino, stop 400, chargino 250, LSP 1 "<<std::endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------"<<std::endl;
        cout << "filter applied to MC. not scaled to 50 K events, but scaled at the 2 OS SF signal lepton stage" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------"<<std::endl;


        std::cout<< right << setw(40) << "CUT" << setw(20) << "RAW" << setw(20) << "SCALED" << setw(20) << "%" << setw(20) << "clean adj RAW"<< setw(20) << "clean adj %" << endl;
        for(int j=0; j<NCUTS; j++) {
          std::cout << right << setw(40) << cutFlowVector_str[j].c_str() << setw(20) << cutFlowVector[j] << setw(20) << cutFlowVector[j]*scale_to/cutFlowVector[3] << setw(20) << 100.*cutFlowVector[j]/cutFlowVector[3] << "%" << setw(20) << trigger_cleaning_eff*cutFlowVector[j]*scale_to/cutFlowVector[3] << setw(20) << trigger_cleaning_eff*100.*cutFlowVector[j]/cutFlowVector[3]<< "%" << endl;
        }
        cout << "------------------------------------------------------------------------------------------------------------------------------ "<<std::endl;

        cout << "RESULTS 2LEP " << _numSRM90SF << " " << _numSRM100SF << " " << _numSRM110SF << " " << _numSRM120SF << " " << _numSRM90DF << " " << _numSRM100DF << " " << _numSRM110DF << " " << _numSRM120DF << endl;

      }


      double loglikelihood() {
        /// @todo Implement!
        return 0;
      }

      void collect_results() {


        SignalRegionData results_SRM90;
        results_SRM90.set_observation(260.);
        results_SRM90.set_background(300.);
        results_SRM90.set_backgroundsys(40.);
        results_SRM90.set_signalsys(0.);
        results_SRM90.set_signal(_numSRM90SF+_numSRM90DF);

        SignalRegionData results_SRM100;
        results_SRM100.set_observation(3.);
        results_SRM100.set_background(4.8);
        results_SRM100.set_backgroundsys(2.2);
        results_SRM100.set_signalsys(0.);
        results_SRM100.set_signal(_numSRM100SF+_numSRM100DF);

        SignalRegionData results_SRM110;
        results_SRM110.set_observation(7.);
        results_SRM110.set_background(11.);
        results_SRM110.set_backgroundsys(4.);
        results_SRM110.set_signalsys(0.);
        results_SRM110.set_signal(_numSRM110SF+_numSRM110DF);

        SignalRegionData results_SRM120;
        results_SRM120.set_observation(3.);
        results_SRM120.set_background(4.3);
        results_SRM120.set_backgroundsys(1.3);
        results_SRM120.set_signalsys(0.);
        results_SRM120.set_signal(_numSRM120SF+_numSRM120DF);

        add_result(results_SRM90);
        add_result(results_SRM100);
        add_result(results_SRM110);
        add_result(results_SRM120);

        return;
      }

    };


    DEFINE_ANAFACTORY(ATLAS_2LEPStop_20invfb)


  }
}
