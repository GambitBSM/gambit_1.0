#include "backend.h"

#include <dlfcn.h>
#include <iostream>

using std::cout;
using std::endl; // SUFit logger does this?

int main(int argc, char * argv[]){

  // Program to test backend

  // Get an object for the Fortran Herwig generator
  GAMBIT::Backend::FHerwig A;
	
  A.initialize();

	// Some checing of what the settings are
  cout << A.GetUserVariable<tags::HWPROC>().pbeam1 << endl;
  cout << A.GetUserVariable<tags::HWBMCH>().part1 << endl;
  cout << A.GetUserVariable<tags::HWBMCH>().part2 << endl;
	
  // Event loop
  for(int i = 1; i < 10; i++){
	  A.generateEvent();
  }
	
  A.finalize();
}
