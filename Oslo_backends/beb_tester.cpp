#include "backend.h"

#include <dlfcn.h>
#include <iostream>

using std::cout;
using std::endl; // SUFit logger does this?

int main(int argc, char * argv[]){

  // Program to test backend

  GAMBIT::Backend::FHerwig A;
  A.loadLib();
	
  char * particle;
	
  A.SetUserVariable<tags::PART1>("P");
  A.SetUserVariable<tags::PART1>("PBAR");
  A.Function<tags::HWIGIN>()();

}
