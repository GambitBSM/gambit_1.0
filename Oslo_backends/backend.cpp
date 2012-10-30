#include "backend.h"
#include <dlfcn.h>     // Needed for dlopen

namespace GAMBIT {

  namespace Backend {

  // 
  void FHerwig::loadLib() {
    cout << "Trying to loading Fortran Herwig library from:" << endl;
    cout << _libName.c_str() << endl;
    pHandle = dlopen(_libName.c_str(), RTLD_LAZY);
    if(pHandle){
      cout << "Succeded in loading Fortran Herwig" << endl;
      _libState = true;
    } else {
      cout << "Failed to load Fortran Herwig. Help!" << endl;
      cout << dlerror() << endl;
    }
  }

  // Unload library
  void FHerwig::unLoadLib() {
	if(_libState){
	  cout << "Unloading Fortran Herwig library..." << endl;
	  dlclose(pHandle);
	  _libState = false;
	}
  }

  // Check library status
  void FHerwig::checkDLStatus() const {
	const char * error = dlerror();
	if(error){
	  cout << "Error with Fortran Herwig library!" << endl;
	}
  }
	  

	  
  } // End of Backend namespace

} // End of GAMBIT namespace
