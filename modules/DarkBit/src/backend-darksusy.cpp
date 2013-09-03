/* Backend for DarkSUSY. This is liberally copied from the GAMBIT Herwig Backend.
 * \author Jonathan Cornell
 * \date 2012-11-27
 * \modified Christoph Weniger Jan 20 2013
 *
 */

#include "backend-darksusy.hpp"
#include <dlfcn.h>

namespace Gambit{

	namespace Backend {

	  void DarkSUSY::loadLib() {
		  // GAMBIT_MSG_INFO("Trying to load DarkSUSY library from:");
		  // GAMBIT_MSG_INFO(_libName.c_str());
		  pHandle = dlopen(_libName.c_str(), RTLD_LAZY);
		  if(pHandle){
			  // GAMBIT_MSG_INFO("Succeeded in loading DarkSUSY");
        std::cout << "Succeeded in loading DarkSUSY" << std::endl;
        std::cout << "(deprecated; used only in temporary TinyDarkBit) " << std::endl;
			  _libState = true;
		  } else {
        std::cout << "Failed loading DarkSUSY" << std::endl;
        std::cout << dlerror() << std::endl;
			  // GAMBIT_MSG_ERROR(dlerror());
			  // GAMBIT_MSG_FATAL("Failed to load DarkSUSY. Help!");
		  }
	  }

	  // Unload library
	  void DarkSUSY::unLoadLib() {
		  if(_libState){
			  // GAMBIT_MSG_INFO("Unloading DarkSUSY library...");
			  dlclose(pHandle);
			  _libState = false;
				}
	  }

	  // Check library status
	  void DarkSUSY::checkDLStatus() const {
		  const char * error = dlerror();
		  if(error){
			// GAMBIT_MSG_ERROR(error);
			// GAMBIT_MSG_FATAL("Error with DarkSUSY library!");
		  }
	  }

	  void DarkSUSY::initialize (){
		  Function<tags::DSINIT>()();
	  }

	  void DarkSUSY::model(double m1, double m2, double m3, double mu, double ma, double tanbe){
	  /* This generates the particle masses, couplings, and widths
	   * for a certain set of SUSY model parameters. For my current testing
	   * purposes, I'm just going to hardcode in a set of parameters that I
	   * know gives me a physical model.
	   */

		  mssmpar_type mssmpar;
		  int i;
		  int unphys, hwarning;

		  mssmpar.m1=m1; //       500;
		  mssmpar.m2=m2; //       1000;
		  mssmpar.m3=m3; //       3500;
		  mssmpar.mu=mu; //       400;
		  mssmpar.ma=ma; //       1000;
		  mssmpar.tanbe=tanbe; // 10;
		  for(i=0; i<=2; i++){
			  mssmpar.mass2u[i]=mssmpar.mass2q[i]=mssmpar.mass2d[i]=2000*2000;
			  mssmpar.mass2e[i]=mssmpar.mass2l[i]=2000*2000;
		  }

		  /* The below always equal zero in MSSM 25 */
		  for(i=0; i<=1; i++){
			  mssmpar.asoftu[i]=0;
			  mssmpar.asoftd[i]=0;
		  }

		  mssmpar.asofte[0] = 0;
		  mssmpar.asofte[1] = 0;
		  mssmpar.asoftu[2] = 1;
		  mssmpar.asoftd[2] = 1;
		  mssmpar.asofte[2] = 0;

		  SetUserVariable<tags::MSSMPAR>(mssmpar);
		  Function<tags::DSSUSY>()(unphys, hwarning);


	  };

	  double DarkSUSY::rdomega(){
      int omtype, fast, ierr, iwar, nfc;
      double xf, oh2;
      omtype = fast = 1;
      oh2 = Function<tags::DSRDOMEGA>()(omtype, fast, xf, ierr, iwar, nfc);
      // cout << "Omega h^2 with coannihilations is " << oh2 << endl;
      return oh2;
	  };

	  void DarkSUSY::finalize (){
		  // Not sure what to put in here...
	  };

	} // End of backend namespace
} // End of Gambit namespace
