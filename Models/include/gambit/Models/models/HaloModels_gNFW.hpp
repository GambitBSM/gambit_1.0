//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Local and global Milky Way Halo Model 
//  (generalised NFW profile, local Maxwellian halo)
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Sebastian Wild
//  2016 Aug
//
//  *********************************************

#ifndef __HaloModels_gNFW_hpp__
#define __HaloModels_gNFW_hpp__

#define MODEL Halo_gNFW
  START_MODEL
  DEFINEPARS(rho0, rhos, vrot, v0, vesc, rs, r_sun, alpha, beta, gamma)
#undef MODEL

#define MODEL Halo_gNFW_rho0
#define PARENT Halo_gNFW
  START_MODEL
  DEFINEPARS(rho0, vrot, v0, vesc, rs, r_sun, alpha, beta, gamma)
  INTERPRET_AS_PARENT_FUNCTION(Halo_gNFW_rho0_to_Halo_gNFW)
#undef PARENT
#undef MODEL

#define MODEL Halo_gNFW_rhos
#define PARENT Halo_gNFW
  START_MODEL
  DEFINEPARS(rhos, vrot, v0, vesc, rs, r_sun, alpha, beta, gamma)
  INTERPRET_AS_PARENT_FUNCTION(Halo_gNFW_rhos_to_Halo_gNFW)
#undef PARENT
#undef MODEL

#endif
