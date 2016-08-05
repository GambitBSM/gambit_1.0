//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Dark Matter Milky Way Halo Parameters
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Jonathan Cornell
//  2015 October, 2016 February
//
//  *********************************************

#ifndef __LocalHalo_hpp__
#define __LocalHalo_hpp__

#define MODEL LocalHalo
  START_MODEL
  // Parameters are:
  // Local dark matter density rho0 [GeV/cm^3]
  // Local disk rotation speed vrot [km/s]
  // Maxwellian most-probable speed v0 [km/s]
  // Local galactic escape speed vesc [km/s]
  DEFINEPARS(rho0, vrot, v0, vesc)
#undef MODEL

#endif
