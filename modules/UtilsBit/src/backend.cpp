#include "backend.h"
#include <dlfcn.h>     // Needed for dlopen

#include "../SUFit/include/core/logcore.hh"

namespace GAMBIT {

  namespace Backend {

    /*! \brief Implementation of FHerwig class for interface with 
	 * Fortran Herwig event generator.
	 * \author Are Raklev
	 * \author Anders Kvellestad
	 * \data 2012-11-08
	 */
	  
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
		cout << error << endl;
	  //SUFIT_MSG_WARNING("Error with Fortran Herwig library!");
	//cout << "Did SUFit output anything?" << endl;
	}
  }

	  // Initialize Herwig for event generation
	  void FHerwig::initialize() {
		  // Set beam energy, process type and mex events
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
		list.print();
	  }
	  
	  // Append a particle to the event record
	  void Event::append(Particle particle){
		_entries.push_back(particle);
	  }
	  
	  // Print particles in event
	  void Event::print(){
		for(int i = 0; i < int(_entries.size()); ++i){
		  cout << i << " " << _entries[i].pdg() << " " << _entries[i].px() << " " <<  _entries[i].py() << " "
			   << _entries[i].pz() << " " << _entries[i].e() << endl;
		}
	  }
	  
  } // End of Backend namespace

} // End of GAMBIT namespace
