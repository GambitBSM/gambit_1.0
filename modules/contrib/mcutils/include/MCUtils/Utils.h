#pragma once

/// @file Utility functions
/// @author Andy Buckley <andy.buckley@cern.ch>

// Provide convenience BOOST_FOREACH loop -- particularly nice for HepMC walking combined with the functions below
#include "boost/foreach.hpp"
// NOTE: Boost now say this foreach-loop aliasing is a bad idea, and it caused Gambit problems. Disable for now.
// #ifndef BOOST_FOREACH
// #define foreach BOOST_FOREACH
// #endif

// "Forward declare" the MCUtils namespace
namespace MCUtils { }
