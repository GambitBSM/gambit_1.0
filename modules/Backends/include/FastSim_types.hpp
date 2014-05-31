//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the FastSim backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Aldo Saavedra
///          (a.saavedra@physics.usyd.edu.au)
//  \date 2014 Feb
///
///  *********************************************


#ifndef __FastSim_types_hpp__
#define __FastSim_types_hpp__

#include "FastSim.hpp"
#include "Event.hpp"
/*
#include "Jet.hpp"

namespace Gambit
{

    enum DetectorType { NOMINAL,ACERDET,FASTATLAS, FASTCMS, ATLAS2011, CMS2011};
    // NOMINAL the energy response is smeared and the calorimeter parameters are the same as the ACERDET
    // ACERDET the energy of the different particles is smeared by the respective functions as used in the ACERDET paper and the calorimeter parameters are
    //         the same as the ACERDET paper
    // the values below are not implemented yet
    // FASTATLAS  will be defined with a simple smear functions but the calorimeter parameters will reflect the ATLAS detector
    // FASTCMS    will be defined with a simple smear functions but the calorimeter parameters will reflect the CMS detector
    // ATLAS2011  will try to reproduce the performance of the ATLAS detector
    // CMS2011    will try to reproduce the performance of the CMS detector

    using namespace std;

    struct  FastSimEvent {

      vector<HEColliderBit::Jet*> _jets;
      vector<HEColliderBit::Jet*> _bjets;

      vector<HEColliderBit::Particle*> _iso_electrons;
      vector<HEColliderBit::Particle*> _iso_muons;
      vector<HEColliderBit::Particle*> _iso_photons;
      vector<HEColliderBit::Particle*> _noniso_electrons;
      vector<HEColliderBit::Particle*> _noniso_muons;
      vector<HEColliderBit::Particle*> _noniso_photons;

      double _MET;
      double _METPhi;

    };


}
*/

#endif /* defined __FastSim_types_hpp__ */
