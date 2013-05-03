#include "backend-fherwig.hpp"

//#include <dlfcn.h>
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char * argv[])
{
	// Program to test backend

	// Get an object for the Fortran Herwig generator
	GAMBIT::Backend::FHerwig A;

	A.setSeed(134991);

	cout << A.GetUserVariable<tags::HWEVNT>().nrn[0] << endl;

	A.initialize();

	cout << A.GetUserVariable<tags::HWEVNT>().nrn[0] << endl;

	A.setSeed(8236819);

	// Some checking of what the settings are
	cout << A.GetUserVariable<tags::HWEVNT>().nrn[0] << endl;
	//cout << A.GetUserVariable<tags::HWBMCH>().part1 << endl;
	//cout << A.GetUserVariable<tags::HWBMCH>().part2 << endl;
	
	// Event loop
	for(int i = 1; i < 10; i++)
	{
		A.generateEvent();
	}
	
	
	GAMBIT::Backend::FHerwig B = A.clone(1289161); 


	// Event loop
	for(int i = 1; i < 10; i++)
	{
		B.generateEvent();
	}
	
	A.finalize();
	
	B.finalize();
}
