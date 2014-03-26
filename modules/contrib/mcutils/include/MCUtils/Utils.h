#pragma once

/// @file Utility functions
/// @author Andy Buckley <andy.buckley@cern.ch>

// Provide convenience foreach loop -- particularly nice for HepMC walking combined with the functions below
#include "boost/foreach.hpp"
#ifndef foreach
#define foreach BOOST_FOREACH
#endif

// "Forward declare" the MCUtils namespace
namespace MCUtils { }
