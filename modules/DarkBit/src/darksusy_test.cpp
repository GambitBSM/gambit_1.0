/* \brief Tests darksusy backend implementation
 * \author Christoph Weniger
 * \date 2012-11-28
 * This is based on the Herwig backend test code (beb_tester.cpp)
 */

#include "backend-darksusy.hpp"

#include <dlfcn.h>
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char * argv[])
{
	// Get an object for the Fortran DarkSUSY generator
	GAMBIT::Backend::DarkSUSY A;

	A.initialize();

  A.model(500, 1000, 3500, 400, 1000, 10);

  cout << A.rdomega() << endl;

	// Some checking of what the settings are
	// cout << A.GetUserVariable<tags::DSIO>().prtlevel << endl;
	//cout << A.GetUserVariable<tags::HWBMCH>().part1 << endl;
	//cout << A.GetUserVariable<tags::HWBMCH>().part2 << endl;
	
	// GAMBIT::Backend::FHerwig B = A.clone(1289161); 
}
