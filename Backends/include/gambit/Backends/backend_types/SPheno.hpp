//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the SPheno 3.3.8 backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Tomas Gonzalo
/// \date 2016 Apr
///
///  *********************************************

#include "gambit/Utils/util_types.hpp"

#ifndef __SPHENO_types_hpp__
#define __SPHENO_types_hpp__

namespace Gambit
{
    typedef Farray<Finteger,1,3> Farray_Finteger_1_3;
    typedef Farray<Freal8,1,2> Farray_Freal8_1_2;
    typedef Farray<Freal8,1,3> Farray_Freal8_1_3;
    typedef Farray<Freal8,1,4> Farray_Freal8_1_4;
    typedef Farray<Freal8,1,5> Farray_Freal8_1_5;
    typedef Farray<Freal8,1,6> Farray_Freal8_1_6;
    typedef Farray<Freal8,1,100> Farray_Freal8_1_100;   
    typedef Farray<Freal8,1,2,1,2> Farray_Freal8_1_2_1_2;
    typedef Farray<Freal8,1,3,1,3> Farray_Freal8_1_3_1_3;
    typedef Farray<Freal8,1,4,1,4> Farray_Freal8_1_4_1_4;
    typedef Farray<Fcomplex16,1,2> Farray_Fcomplex16_1_2;
    typedef Farray<Fcomplex16,1,3> Farray_Fcomplex16_1_3;
    typedef Farray<Fcomplex16,1,2,1,2> Farray_Fcomplex16_1_2_1_2;
    typedef Farray<Fcomplex16,1,3,1,3> Farray_Fcomplex16_1_3_1_3;
    typedef Farray<Fcomplex16,1,4,1,4> Farray_Fcomplex16_1_4_1_4;
    typedef Farray<Fcomplex16,1,5,1,5> Farray_Fcomplex16_1_5_1_5;
    typedef Farray<Fcomplex16,1,6,1,6> Farray_Fcomplex16_1_6_1_6;
    
    struct particle2
    {
        Freal8 m;
	Freal8 m2;
	Freal8 g;
	Finteger id;
	Farray<Finteger,1,200,1,2> id2;
	Farray<Freal8,1,200> gi2;
	Farray<Freal8,1,200> bi2;
    }; 

    typedef Farray<particle2,1,2> Farray_particle2_1_2;
    typedef Farray<particle2,1,6> Farray_particle2_1_6;

    struct particle23
    {
	Freal8 m;
	Freal8 m2;
	Freal8 g;
	Finteger id;
	Farray<Freal8,1,200,1,2> id2;
	Farray<Freal8,1,600,1,3> id3;
	Farray<Freal8,1,200> gi2;
	Farray<Freal8,1,600> gi3;
	Farray<Freal8,1,200> bi2;
	Farray<Freal8,1,600> bi3;
    };

    typedef Farray<particle23,1,2> Farray_particle23_1_2;
    typedef Farray<particle23,1,3> Farray_particle23_1_3;
    typedef Farray<particle23,1,4> Farray_particle23_1_4;
    typedef Farray<particle23,1,6> Farray_particle23_1_6;
}

#endif // defined __SPHENO_types_hpp__
