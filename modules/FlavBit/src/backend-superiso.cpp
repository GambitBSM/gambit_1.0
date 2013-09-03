/* Backend for SuperIso. This is liberally copied from the GAMBIT SuperIso Backend.
 * \author Nazila Mahmoudi Jul 10 2013
 *
 */

#include "backend-superiso.hpp"
#include <dlfcn.h>

namespace Gambit{

	namespace Backend {

	  void SuperIso::loadLib() {
		  // GAMBIT_MSG_INFO("Trying to load SuperIso library from:");
		  // GAMBIT_MSG_INFO(_libName.c_str());
		  pHandle = dlopen(_libName.c_str(), RTLD_LAZY);
		  if(pHandle){
			  // GAMBIT_MSG_INFO("Succeeded in loading SuperIso");
        std::cout << "Succeeded in loading SuperIso" << std::endl;
			  _libState = true;
		  } else {
        std::cout << "Failed loading SuperIso" << std::endl;
        std::cout << dlerror() << std::endl;
			  // GAMBIT_MSG_ERROR(dlerror());
			  // GAMBIT_MSG_FATAL("Failed to load SuperIso. Help!");
		  }
	  };

	  // Unload library
	  void SuperIso::unLoadLib() {
		  if(_libState){
			  // GAMBIT_MSG_INFO("Unloading SuperIso library...");
			  dlclose(pHandle);
			  _libState = false;
				}
	  };

	  // Check library status
	  void SuperIso::checkDLStatus() const {
		  const char * error = dlerror();
		  if(error){
			// GAMBIT_MSG_ERROR(error);
			// GAMBIT_MSG_FATAL("Error with SuperIso library!");
		  }
	  };

	  void SuperIso::initialize (){
		  // Not sure what to put in here...
	  };

	  double SuperIso::bsgamma(char name[]){

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11];
		struct parameters param;
		
		void (*Init_param)(struct parameters*);
		int (*Les_Houches_Reader)(char[], struct parameters*);
		void (*CW_calculator)(double[], double[], double[], double, struct parameters*); 
		void (*C_calculator_base1)(double[], double[], double[], double, double[], double[], double[], double, struct parameters*); 
		double (*bsgamma)(double[], double[], double[], double, double, struct parameters*);
		
		*(void **) (&Init_param) = dlsym(pHandle, "Init_param");
		*(void **) (&Les_Houches_Reader) = dlsym(pHandle, "Les_Houches_Reader");
		*(void **) (&CW_calculator) = dlsym(pHandle, "CW_calculator");
		*(void **) (&C_calculator_base1) = dlsym(pHandle, "C_calculator_base1");
		*(void **) (&bsgamma) = dlsym(pHandle, "bsgamma");
	  
	  	(*Init_param)(&param);
	
		if(!(*Les_Houches_Reader)(name,&param)) return 0.;
	
		double mu_W=2.*param.mass_W;
		
		double mu_b=param.mass_b_1S/2.;

		(*CW_calculator)(C0w,C1w,C2w,mu_W,&param);
		(*C_calculator_base1)(C0w,C1w,C2w,mu_W,C0b,C1b,C2b,mu_b,&param);
		return (*bsgamma)(C0b,C1b,C2b,mu_b,mu_W,&param);
	  };	  

	  void SuperIso::finalize (){
		  // Not sure what to put in here...
	  };

	} // End of backend namespace
} // End of Gambit namespace
