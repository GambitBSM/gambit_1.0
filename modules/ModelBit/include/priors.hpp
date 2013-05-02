//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions for use in constructing priors for
//  models.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May 01
//
//  *********************************************

#ifndef __priors_hpp__
#define __priors_hpp__

#include <math.h>

// All priors are transformations which "stretch" one or more random variates
// sampled uniformly from the interval [0,1] (or higher dim. equivalent) into
// a sample from a different distribution.

// Simple single parameter priors. 
// In all cases input x is a variate from the unit uniform distribution [0,1].

// 'flat' prior
// Transforms x to a sample from the uniform interval [a,b].

double flatprior (double x, double a, double b) { 
    return x*(b-a) + a 
}

// 'log' prior
// Transforms x=log(y) to a sample from the uniform interval [log(a),log(b)].
// The base is irrelevant since it is just a scaling factor which normalises out
double logprior (double x, double a, double b) {    
    return exp( x*(log(b)-log(a)) + log(a) )
}


#endif /* defined(__priors_hpp__) */

