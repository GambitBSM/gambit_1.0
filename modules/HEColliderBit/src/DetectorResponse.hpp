#include "Particle.hpp"
#include "TRandom.h"

// the base class of the Detector Response
class DetectorResponse
{
  protected:

    double _muon_resolution;
    double _electron_resolution;
    double _photon_resolution;
    double _jet_resolution;

    TRandom _rndm;

  public:
    DetectorResponse();
    virtual void MuonResponse(Particle& muon) { };
    virtual void PhotonResponse(Particle& ph) {};
    virtual void ElectronResponse(Particle& ele) {};
    virtual void JetResponse(Particle& jet) {};
};

class ATLAS_Simple_Response: public DetectorResponse
{

  public:
    ATLAS_Simple_Response();
    void MuonResponse(Particle& muon);
    void PhotonResponse(Particle& ph);
    void ElectronResponse(Particle& ele);
    void JetResponse(Particle& jet);
};


//RESHAD============================================

/*
double RESHAD(double e, double eta, double Caloth){

  if(SMEAR ==1){    
  double distr = rndm.Gaus(0,1);
  
  double res = -999.99;

  //Check which region of the detector.
  if(eta < Caloth){
    res = 0.5;
  }else if(eta > Caloth){
    res = 1.0;
  }
  
  double sig = distr * res *1/sqrt(e);

  return sig;
  }
  else return 0;
}

//}
*/

