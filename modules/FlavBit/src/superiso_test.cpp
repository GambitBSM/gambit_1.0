/* \brief Tests SuperIso backend implementation
 * \author Nazila Mahmoudi
 * \date 2013-07-10
 * This is based on the DarkSusy backend test code
 */

#include "backend-superiso.hpp"

#include <dlfcn.h>
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char * argv[])
{
	// Get an object for the SuperIso generator
	GAMBIT::Backend::SuperIso A;
	char SLHAname[]="example.lha";
	
	A.initialize();

        cout << A.bsgamma(SLHAname) << endl;
}
