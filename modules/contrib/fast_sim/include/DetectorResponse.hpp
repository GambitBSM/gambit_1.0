#include "Particle.hpp"

#include <stdlib.h>  /*srand, rand */
#include <time.h>


namespace fast_sim {


// the base class of the Detector Response
class DetectorResponse
{
  protected:

    double _muon_resolution;
    double _electron_resolution;
    double _photon_resolution;
    double _jet_resolution;


  public:
    DetectorResponse();
    virtual void MuonResponse(HEP_Simple_Lib::Particle& muon) { };
    virtual void PhotonResponse(HEP_Simple_Lib::Particle& ph) {};
    virtual void ElectronResponse(HEP_Simple_Lib::Particle& ele) {};
    virtual void JetResponse(HEP_Simple_Lib::Particle& jet) {};
};

class ATLAS_Simple_Response: public DetectorResponse
{

  public:
    ATLAS_Simple_Response();
    void MuonResponse(HEP_Simple_Lib::Particle& muon);
    void PhotonResponse(HEP_Simple_Lib::Particle& ph);
    void ElectronResponse(HEP_Simple_Lib::Particle& ele);
    void JetResponse(HEP_Simple_Lib::Particle& jet);
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

}
