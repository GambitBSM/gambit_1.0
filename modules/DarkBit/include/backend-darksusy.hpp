/* DarkSUSY specific backend header. This contains bits of code
 * that are specific to a darkSUSY backend.
 * \author Jonathan Cornell
 * \date 2012-11-27
 */

#ifndef DARKSUSY_BACKEND_H
#define DARKSUSY_BACKEND_H

#include "backend-common.hpp"

// Fill in below with the name of the shared library, which
// LD_LIBRARY_PATH should point to.
#define DARKSUSY_LIB "libdarksusy.so"

// List of functions and variables that can be called from libraries

FUNCTION(DSINIT, dsinit, void, 0)
FUNCTION(DSSUSY, dssusy, void, 2)
FUNCTION(DSRDOMEGA, dsrdomega, double, 6)

struct mssmpar_type{
				double tanbe, mu, m2, m1, m3, ma;
				double mass2u[3], mass2q[3], mass2d[3], mass2l[3], mass2e[3];
				double asoftu[3], asoftd[3], asofte[3];
			};
VARIABLE(MSSMPAR, mssmpar, , mssmpar_type)
struct dsio_type{
	int prtlevel, lulog, luerr, luout;
};
VARIABLE(DSIO, dsio, , dsio_type)

namespace GAMBIT {

	using std::cout;
	using std::endl; // SUFit logger does this?
	using std::string;
	using std::stringstream;
	using std::vector;

  namespace Backend {

  	  /*! \brief Interface for darkSUSY routines
  	   * \author Jonathan Cornell
  	   * Based on Fortran Herwig interface by A. Raklev and A. Kvellestad
  	   */

		class DarkSUSY : public BackendBitBase {
		public:

			// Constructor
			DarkSUSY(){
			        _libName = DARKSUSY_LIB;
				loadLib();
			}

			// Destructor
			~DarkSUSY() {
				unLoadLib();
			}

			// Initialize DarkSUSY
			void initialize ();

			// Finalize DarkSUSY
			void finalize ();

			// Generate particle spectra; calculate widths, and couplings
			void model ();

			// Calculate relic density
			void rdomega ();


		private:

			// Load library
			void loadLib();

			// Unload library
			void unLoadLib();

			// Check status of dynamic library
			void checkDLStatus() const;

		};
	};
};


#endif /* DARKSUSY_BACKEND_H */
