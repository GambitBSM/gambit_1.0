#include <vector>
#include <cmath>
#include <memory>
#include <iomanip>

#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"

#include <TLorentzVector.h>
#include <TVector2.h>

/* The ATLAS 3 lepton EW analysis (20fb^-1)

   based on: ATLAS-CONF-2013-035

   Code by Martin White

   Known features:
   a) Must run with a dedicated detector card due to odd b tagging and isolation

*/

namespace Gambit {
  namespace ColliderBit {

    using namespace std;

    class Analysis_ATLAS_3LEPEW_CONF_20invfb : public BaseAnalysis {
    private:

      // Numbers passing cuts
      int _numSRnoZa, _numSRnoZb, _numSRnoZc, _numSRZa, _numSRZb, _numSRZc;

      vector<int> cutFlowVector_alt;
      vector<int> cutFlowVector;
      vector<string> cutFlowVector_str;
      const static int NCUTS=8;

      // Debug histos

    public:

      Analysis_ATLAS_3LEPEW_CONF_20invfb() {
        _numSRnoZa=0; _numSRnoZb=0; _numSRnoZc=0; _numSRZa=0; _numSRZb=0; _numSRZc=0;

        for(int i=0;i<NCUTS;i++){
          cutFlowVector.push_back(0);
          cutFlowVector_str.push_back("");
          cutFlowVector_alt.push_back(0);
        }

      }

      void ElecElecOverlapRemoval(vector<Particle*> &vec1, vector<Particle*> &vec2, double DeltaRMax) {
        //Routine to do electron-electron overlap check
        //Discard lowest energy electron if two are found overlapping
        vector<Particle*> Survivors;

        for(size_t it1 = 0; it1 < vec1.size(); it1++) {
          bool overlap = false;
          P4 lep1mom=vec1.at(it1)->mom();
          for(size_t it2 = 0; it2 < vec2.size(); it2++) {
            if(it1==it2)continue;
            P4 lep2mom=vec2.at(it2)->mom();
            double dR;

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

        for(size_t itjet = 0; itjet < jetvec.size(); itjet++) {
          bool overlap = false;
          P4 jetmom=jetvec.at(itjet)->mom();
          for(size_t itlep = 0; itlep < lepvec.size(); itlep++) {
            P4 lepmom=lepvec.at(itlep)->mom();
            double dR;

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

        for(size_t itlep = 0; itlep < lepvec.size(); itlep++) {
          bool overlap = false;
          P4 lepmom=lepvec.at(itlep)->mom();
          for(size_t itjet= 0; itjet < jetvec.size(); itjet++) {
            P4 jetmom=jetvec.at(itjet)->mom();
            double dR;

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
        vector<Particle*> baselineElectrons;
        for (Particle* electron : event->electrons()) {
          if (electron->pT() > 10. && fabs(electron->eta()) < 2.47) baselineElectrons.push_back(electron);
        }
        vector<Particle*> baselineMuons;
        for (Particle* muon : event->muons()) {
          if (muon->pT() > 10. && fabs(muon->eta()) < 2.4) baselineMuons.push_back(muon);
        }

        vector<Jet*> signalJets;
        vector<Jet*> bJets;

        for (Jet* jet : event->jets()) {
          if (jet->pT() > 20. && fabs(jet->eta()) < 2.5) signalJets.push_back(jet);
          //if(jet->btag() && fabs(jet->eta()) < 2.5 && jet->pT() > 20.) bJets.push_back(jet);
        }

        // Overlap removal
        vector<Particle*> signalElectrons;
        vector<Particle*> signalMuons;

        //Note that ATLAS use |eta|<10 for removing jets close to electrons
        //Then 2.8 is used for the rest of the overlap process
        //Then the signal cut is applied for signal jets
        //cout << "BEFORE REMOVAL nele nmuo njet " << baselineElectrons.size() << " " << baselineMuons.size() << " " << signalJets.size() << endl;

        ElecElecOverlapRemoval(baselineElectrons,baselineElectrons,0.1);
        JetLeptonOverlapRemoval(signalJets,baselineElectrons,0.2);
        LeptonJetOverlapRemoval(baselineElectrons,signalJets,0.4);
        LeptonJetOverlapRemoval(baselineMuons,signalJets,0.4);

        //Now do final overlap stage (reject both electrons and muons within 0.1 of each other)
        for(size_t iEl=0;iEl<baselineElectrons.size();iEl++){
          bool overlap=false;
          P4 elVec=baselineElectrons.at(iEl)->mom();
          for(size_t iMu=0;iMu<baselineMuons.size();iMu++){
            P4 muVec=baselineMuons.at(iMu)->mom();
            if (elVec.deltaR_eta(muVec)<0.1)overlap=true;
          }
          if(!overlap)signalElectrons.push_back(baselineElectrons.at(iEl));
        }

        for(size_t iMu=0;iMu<baselineMuons.size();iMu++){
          bool overlap=false;
          P4 muVec=baselineMuons.at(iMu)->mom();
          for(size_t iEl=0;iEl<baselineElectrons.size();iEl++){
            P4 elVec=baselineElectrons.at(iEl)->mom();
            if (elVec.deltaR_eta(muVec)<0.1)overlap=true;
          }
          if(!overlap)signalMuons.push_back(baselineMuons.at(iMu));
        }

        //cout << "AFTER REMOVAL nele nmuo njet " << signalElectrons.size() << " " << signalMuons.size() << " " << signalJets.size() << endl;

        int numElectrons=signalElectrons.size();
        int numMuons=signalMuons.size();

        //Search for at least one SFOS pair
        //m_SFOS must be > 12 GeV

        vector<double> massesOfSFOSPairs;
        for(int iEl1=0;iEl1<numElectrons;iEl1++){
          for(int iEl2=iEl1;iEl2<numElectrons;iEl2++){
            if(signalElectrons.at(iEl1)->pid()==-1*signalElectrons.at(iEl2)->pid()){
              P4 elVec1=signalElectrons.at(iEl1)->mom();
              P4 elVec2=signalElectrons.at(iEl2)->mom();
              double invMass=(elVec1+elVec2).m();

              if(invMass>12.)massesOfSFOSPairs.push_back(invMass);
            }
          }
        }
        //cout << "Done electron mass SFOS" << endl;

        for(int iMu1=0;iMu1<numMuons;iMu1++){
          for(int iMu2=iMu1;iMu2<numMuons;iMu2++){
            if(signalMuons.at(iMu1)->pid()==-1*signalMuons.at(iMu2)->pid()){
              P4 muVec1=signalMuons.at(iMu1)->mom();
              P4 muVec2=signalMuons.at(iMu2)->mom();
              double invMass=(muVec1+muVec2).m();

              if(invMass>12.)massesOfSFOSPairs.push_back(invMass);
            }
          }
        }
        //cout << "Done muon mass SFOS" << endl;

        //Make b jet container
        for (Jet* jet : signalJets) {
          if(jet->btag())bJets.push_back(jet);
        }

        bool leptonCut=((numElectrons+numMuons)==3 && massesOfSFOSPairs.size()>0);
        //bool bJetCut=(bJets.size()==0);

        bool isZ=false;

        for(double mass : massesOfSFOSPairs){
          if(mass>81.2 && mass < 101.2)isZ=true;
        }

        //Find m_SFOS that is closest to the Z mass
        double smallestDiff=9999;
        double mSFOS=0;
        for(double mass : massesOfSFOSPairs){
          if(fabs(mass-91.2)<smallestDiff){
            smallestDiff=fabs(mass-91.2);
            mSFOS=mass;
          }
        }

        //cout << "mSFOS " << mSFOS << endl;

        //Now find the lepton that isn't in that invariant mass
        vector<Particle*> signalLeptons;

        for (Particle* ele : signalElectrons) {
          signalLeptons.push_back(ele);
        }

        for (Particle* muo : signalMuons) {
          signalLeptons.push_back(muo);
        }

        //cout << "Made signal leptons" << endl;

        //bool lepCut10=true; //All signal leptons have pT > 10 GeV
        bool lepCut30=true;
        for(Particle * lepton : signalLeptons){
          if(lepton->pT()<30.)lepCut30=false;
        }



        int extralepID=-1;
        int lep1ID=-1;
        int lep2ID=-1;
        for(size_t iLep=0;iLep<signalLeptons.size();iLep++){
          for(size_t jLep=iLep;jLep<signalLeptons.size();jLep++){
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
        double mT=0;
        if(signalLeptons.size()==3 && extralepID!=-1){
          P4 extralepVec=signalLeptons.at(extralepID)->mom();
          mT=sqrt(2.*extralepVec.pT()*met*(1. - cos(TVector2::Phi_mpi_pi(extralepVec.phi()-ptot.phi()))));
        }

        bool isSRNoZc=false;


        cutFlowVector_str[0] = "No cuts ";
        cutFlowVector_str[1] = "Lepton multiplicity";
        cutFlowVector_str[2] = "SFOS Requirement";
        cutFlowVector_str[3] = "b veto";
        cutFlowVector_str[4] = "Z veto/request";
        cutFlowVector_str[5] = "met cut ";
        cutFlowVector_str[6] = "m_SFOS";
        cutFlowVector_str[7] = "SRnoZc veto ";


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

        if(trigger && leptonCut && bJets.size()==0 && !isZ && met>75. && mT>110. && lepCut30)isSRNoZc=true;

        for(int j=0;j<NCUTS;j++){
          if(
             (j==0) ||

             (j==1 && trigger && signalLeptons.size()==3) ||

             (j==2 && trigger && leptonCut) ||

             (j==3 && trigger && leptonCut && bJets.size()==0) ||

             (j==4 && trigger && leptonCut && bJets.size()==0 && !isZ) ||

             (j==5 && trigger && leptonCut && bJets.size()==0 && !isZ && met>50.) ||

             (j==6 && trigger && leptonCut && bJets.size()==0 && !isZ && met>50. && mSFOS < 60.) ||

             (j==7 && trigger && leptonCut && bJets.size()==0 && !isZ && met>50. && mSFOS < 60. && !isSRNoZc)

             )cutFlowVector[j]++;
        }
        //_numSRnoZa, _numSRnoZb, _numSRnoZc, _numSRZa, _numSRZb, _numSRZc;
        if(trigger && leptonCut && bJets.size()==0 && !isZ && met>50. && mSFOS < 60. && !isSRNoZc)_numSRnoZa++;
        if(trigger && leptonCut && bJets.size()==0 && !isZ && met>75. && mSFOS > 60. && mSFOS < 81.2 && !isSRNoZc)_numSRnoZb++;
        if(isSRNoZc)_numSRnoZc++;
        if(trigger && leptonCut && bJets.size()==0 && isZ && met>75. && met<120. && mT<110.)_numSRZa++;
        if(trigger && leptonCut && bJets.size()==0 && isZ && met>75. && met<120. && mT>110.)_numSRZb++;
        if(trigger && leptonCut && bJets.size()==0 && isZ && met>120. && mT>110.)_numSRZc++;

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
        cout << "RESULTS 3LEP EW " << _numSRnoZa << " " <<  _numSRnoZb << " " <<  _numSRnoZc << " " <<  _numSRZa << " " <<  _numSRZb << " " << _numSRZc << endl;
      }


      double loglikelihood() {
        /// @todo Implement!
        return 1.0;
      }


      void collect_results() {

        /// @todo WTF? Commented to stop compiler warnings
        //_numSRnoZa, _numSRnoZb, _numSRnoZc, _numSRZa, _numSRZb, _numSRZc;

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
        add_result(results_SRZc);

        return;
      }

    };

    DEFINE_ANALYSIS_FACTORY(ATLAS_3LEPEW_CONF_20invfb)
  }
}
