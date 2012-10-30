#ifndef sufit_DarkSusyFortranCalls_hh_
#define sufit_DarkSusyFortranCalls_ 1

/*! \brief Fortran to C wrappers for Dark Susy 
 *
 * These methods are defined and documented in the dark susy fortran code.
 *
 * \author J Ripken, J Lundberg
 * \date 2011 
 *
 */

extern "C" {

 void dsinit_();
 void aldata_();
 void dshasetup_();

 void dsgive_model_(double* mu, double* m2, double* ma, double* tanbe, double* mqtild, double* at, double* ab);
 void dsgive_model_isasugra_(double* m0, double* mhf, double* a0, double* sgnmu, double* tgb);
 void dssusy_(int* unphys, int* hwarning);
 void dssusy_isasugra_(int* unphys, int* hwarning);

 void dsacbnd_(int* excl);
 double givemass_(int* particle);
 void sethaib_(int* sign);

 double dssigmav_(int* partan);
 double dsrdomega_(int* coan, int* acu, double* xf, int* ierr, int* iwar, int* nfc);

 double dshayield_(double* mwimp, double* egev, int* ch, int* yieldk, int* istat);
 double dshaloyield_(double* egev, int* yieldk, int* istat);
}

#endif
