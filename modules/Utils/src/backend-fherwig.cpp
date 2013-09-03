#include "backend-fherwig.hpp"
#include "particle.hpp"
#include "logs.hpp"

#include <dlfcn.h>     // Needed for dlopen

namespace Gambit {

  namespace Backend {

    /*! \brief Implementation of FHerwig class for interface with 
	 * Fortran Herwig event generator.
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	  
	  void FHerwig::loadLib() {
		  GAMBIT_MSG_INFO("Trying to loading Fortran Herwig library from:");
		  GAMBIT_MSG_INFO(_libName.c_str());
		  pHandle = dlopen(_libName.c_str(), RTLD_LAZY);
		  if(pHandle){
			  GAMBIT_MSG_INFO("Succeded in loading Fortran Herwig");
			  _libState = true;
		  } else {
			  GAMBIT_MSG_ERROR(dlerror());
			  GAMBIT_MSG_FATAL("Failed to load Fortran Herwig. Help!");
		  }
	  }

  // Unload library
  void FHerwig::unLoadLib() {
	if(_libState){
	  GAMBIT_MSG_INFO("Unloading Fortran Herwig library...");
	  dlclose(pHandle);
	  _libState = false;
	}
  }

	  // This is not going to work. The memory will simply be overwritten.
	  // Clone object (avoiding re-initialization)
	  FHerwig FHerwig::clone(int seed) {
		  FHerwig tempGen = *this;
		  tempGen.setSeed(seed);
		  return tempGen;
	  }

	  // Set random seed
	  void FHerwig::setSeed(int value) {
		  hwevnt_type temp = GetUserVariable<tags::HWEVNT>();
		  //cout << temp.avwgt << " " <<  temp.evwgt << " " << temp.gamwt << endl;
		  //cout << temp.tlout << " " <<  temp.wbigst << " " << temp.wgtmax << endl;
		  //cout << temp.wgtsum << " " <<  temp.wsqsum << " " << temp.idhw[0] << endl;
		  //cout << temp.nrn[0] << " " <<  temp.nrn[1] << " " << temp.numer << endl;
		  temp.nrn[0] = value;
		  temp.nrn[1] = value+1;
		  SetUserVariable<tags::HWEVNT>(temp);
	  }
	  
	  // Check library status
	  void FHerwig::checkDLStatus() const {
		  const char * error = dlerror();
		  if(error){
			  GAMBIT_MSG_ERROR(error);
			  GAMBIT_MSG_FATAL("Error with Fortran Herwig library!");
		  }
	  }

	  // Initialize Herwig for event generation
	  void FHerwig::initialize() {
		  // Set beam energy, process type and max events
		  hwproc_type hwtemp1;
		  hwtemp1.pbeam1 = 3500.;
		  hwtemp1.pbeam2 = 3500.;
		  hwtemp1.iproc = 1500;
		  hwtemp1.maxev = 999999999;	// Choose ridiculously large number so that we never get to it
		  SetUserVariable<tags::HWPROC>(hwtemp1);
		  
		  // Set up type of colliding particles
		  // Don't laugh!
		  hwbmch_type hwtemp2;
		  hwtemp2.part1[0] = 'P';
		  hwtemp2.part1[1] = ' ';
		  hwtemp2.part1[2] = ' ';
		  hwtemp2.part1[3] = ' ';
		  hwtemp2.part1[4] = ' ';
		  hwtemp2.part1[5] = ' ';
		  hwtemp2.part1[6] = ' ';
		  hwtemp2.part1[7] = ' ';
		  hwtemp2.part2[0] = 'P';
		  hwtemp2.part2[1] = ' ';
		  hwtemp2.part2[2] = ' ';
		  hwtemp2.part2[3] = ' ';
		  hwtemp2.part2[4] = ' ';
		  hwtemp2.part2[5] = ' ';
		  hwtemp2.part2[6] = ' ';
		  hwtemp2.part2[7] = ' ';
		  SetUserVariable<tags::HWBMCH>(hwtemp2);
		  
		  // Initialize common blocks
		  Function<tags::HWIGIN>()();
		  // Compute parameter dependent quantities
		  Function<tags::HWUINC>()();
		  // Initialize process
		  Function<tags::HWEINI>()();
	  }
	  
	  // Clean up event generation
	  void FHerwig::finalize() {
		  // Terminate process
		  Function<tags::HWEFIN>()();
	  }

	  // Generate a single event
	  void FHerwig::generateEvent() {
	    // Initialize event
		Function<tags::HWUINE>()();
		// Geberate hard process
		Function<tags::HWEPRO>()();
		// Parton shower
		Function<tags::HWBGEN>()();
		// Heavy particle decays
		Function<tags::HWDHOB>()();
		// Hadronization
		if(_hadronize){
		  // Cluster formation
		  Function<tags::HWCFOR>()();
		  //Cluster decay
		  Function<tags::HWCDEC>()();
		  // Unstable particle decay
		  Function<tags::HWDHAD>()();
		  // Heavy flavour decays
		  Function<tags::HWDHVY>()();
		  // Soft underlying event
		  if(_soft) {
			Function<tags::HWMEVT>()();
		  }
		}
		// Finishing touches to event
		Function<tags::HWUFNE>()();	
		  
		// Get event from common block
		hepevt_type hepevt_temp;
		hepevt_temp = GetUserVariable<tags::HEPEVT>();
		  
		Event list;
		// Fill particles
		for(int i = 0; i < hepevt_temp.nhep; i++){
		  Vector4 momentum(hepevt_temp.phep[i][0],hepevt_temp.phep[i][1],hepevt_temp.phep[i][2],hepevt_temp.phep[i][3]);
		  Particle particle(momentum,hepevt_temp.idhep[i]);
		  list.append(particle);
		}
		  
		// Test that this is working correctly wrt indices		  
		//list.print();
	  }	  
	  
  } // End of Backend namespace

} // End of Gambit namespace
