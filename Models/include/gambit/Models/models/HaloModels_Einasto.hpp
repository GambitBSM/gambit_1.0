//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Local and global Milky Way Halo Model 
//  (Einasto profile, local Maxwellian halo)
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

#ifndef __HaloModels_Einasto_hpp__
#define __HaloModels_Einasto_hpp__

#define MODEL Halo_Einasto
  START_MODEL
  DEFINEPARS(rho0, rhos, vrot, v0, vesc, rs, r_sun, alpha)
#undef MODEL

#define MODEL Halo_Einasto_rho0
#define PARENT Halo_Einasto
  START_MODEL
  DEFINEPARS(rho0, vrot, v0, vesc, rs, r_sun, alpha)
  INTERPRET_AS_PARENT_FUNCTION(Halo_Einasto_rho0_to_Halo_Einasto)
#undef PARENT
#undef MODEL

#define MODEL Halo_Einasto_rhos
#define PARENT Halo_Einasto
  START_MODEL
  DEFINEPARS(rhos, vrot, v0, vesc, rs, r_sun, alpha)
  INTERPRET_AS_PARENT_FUNCTION(Halo_Einasto_rhos_to_Halo_Einasto)
#undef PARENT
#undef MODEL

#endif
