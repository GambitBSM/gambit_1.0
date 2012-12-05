#ifndef BACKEND_FHERWIG_H
#define BACKEND_FHERWIG_H

#include "backend-common.hpp"

//#include <dlfcn.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

static const int NMXHEP = 5000;

// List of functions and variables that can be called from libraries
FUNCTION(HWIGIN, hwigin, 0)
FUNCTION(INIMAS, inimas, 0)
FUNCTION(HWUINC, hwuinc, 0)
FUNCTION(HWABEG, hwabeg, 0)
FUNCTION(HWEINI, hweini, 0)
FUNCTION(HWUINE, hwuine, 0)
FUNCTION(HWEFIN, hwefin, 0)
FUNCTION(HWEPRO, hwepro, 0)
FUNCTION(HWBGEN, hwbgen, 0)
FUNCTION(HWDHOB, hwdhob, 0)
FUNCTION(HWCFOR, hwcfor, 0)
FUNCTION(HWCDEC, hwcdec, 0)
FUNCTION(HWDHAD, hwdhad, 0)
FUNCTION(HWDHVY, hwdhvy, 0)
FUNCTION(HWMEVT, hwmevt, 0)
FUNCTION(HWUFNE, hwufne, 0)

struct hwproc_type{
	double ebeam1, ebeam2, pbeam1, pbeam2;
	int iproc, maxev;
};
VARIABLE(HWPROC, hwproc, , hwproc_type)
struct hwbmch_type{
	char part1[8], part2[8];
};
VARIABLE(HWBMCH, hwbmch, , hwbmch_type)
// Struct for event common block
struct hepevt_type{
	int nevhep, nhep, isthep[NMXHEP], idhep[NMXHEP], jmohep[NMXHEP][2], jdahep[NMXHEP][2];
	double phep[NMXHEP][5], vhep[NMXHEP][4];
};
VARIABLE(HEPEVT, hepevt, , hepevt_type)
// Struct for generator information 
struct hwevnt_type{
	double avwgt, evwgt, gamwt, tlout, wbigst, wgtmax, wgtsum, wsqsum;
	int idhw[NMXHEP], ierror, istat, lwevt, maxer, maxpr, nowgt, nrn[2], numer, numeru, nwgts, gensof;
};
VARIABLE(HWEVNT, hwevnt, , hwevnt_type)


namespace GAMBIT {
	
	using std::cout;
	using std::endl; // logger does this?
	using std::string;
	using std::stringstream;
	using std::vector;

  namespace Backend {
	  	
	/*! \brief Interface for Fortran Herwig event generator. 
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
    class FHerwig : public BackendBitBase {
    public:

      // Constructor
      FHerwig() {
		_hadronize = true;
		_soft = true;
	    _libName = "/Applications/Physics/herwig/libherwig.so";
		loadLib();
      }

      // Destructor
      ~FHerwig() {
		unLoadLib();
	  }

		// Initialize Herwig
		void initialize();

		// Finalize Herwig run
		void finalize();
		
		// Generate one event
		void generateEvent();

		// Clone object (avoiding re-initialization)
		// Clone is created with new random seed
		FHerwig clone(int seed);
		
		// Set random seed
		void setSeed(int value);
		
	private:
		
      // Load library
      void loadLib();

	  // Unload library
	  void unLoadLib();
		
	  // Check status of dynamic library	
	  void checkDLStatus() const;		
		
	  bool _hadronize;
	  bool _soft;
    };
	  
	  
  } // Backend namespace ending

} // GAMBIT namespace ending

#endif
