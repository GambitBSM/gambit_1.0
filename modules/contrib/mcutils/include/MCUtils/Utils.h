#pragma once

/// @file Utility functions
/// @author Andy Buckley <andy.buckley@cern.ch>

// Provide convenience foreach loop -- particularly nice for HepMC walking combined with the functions below
#include "boost/foreach.hpp"
#ifndef foreach
#define foreach BOOST_FOREACH
#endif

/// @todo Remove HepMC from this header, so some bits of the lib can be used without HepMC?
#include "HepMC/GenEvent.h"

namespace MCUtils {

  /// Use HepMC's namespace implicitly
  using namespace HepMC;

}
