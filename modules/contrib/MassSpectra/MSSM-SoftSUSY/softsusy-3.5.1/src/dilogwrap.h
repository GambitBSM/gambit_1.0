/** \file dilogwrap.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      http://arxiv.org/abs/1311.7659
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/

   \brief Dilog function
*/

/// dilog wrapper for complex variables: inputs are a.real and b.imag, outputs
/// c.real and d.imag
extern "C" int dilogwrap_(double * a, double * b, double * c, double * d);



