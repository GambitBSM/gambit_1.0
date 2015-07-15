//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Sparticle production cross-section calculators for LEP.
///
///  Results are taken from
///  A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C30 (1986) 441
///  A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1
///  S. Dawson, E. Eichten and C. Quigg, Phys. Rev. D31 (1985) 1581
///  A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411
///
///  The Bartl, Fraas and Majerotto (BFM) papers are based on a convention for the neutralino decomposed
///  into photino, zino and two higgsinos a and b:
///  \tilde\chi_i^0 = N_{i1} \tilde\gamma + N_{i2} \tilde Z + N_{i3} \tilde H_a + N_{i4} \tilde H_b
///  where \tilde H_a = \tilde H_1^0 \sin\beta - \tilde H_2^0 \cos\beta
///  and \tilde H_b = \tilde H_1^0 \cos\beta + \tilde H_2^0 \sin\beta
///
///  This corresponds to the conventions for N' in Haber & Kane (HK). Haber & Kane in turn have similar
///  conventions to Gunion & Haber which is used in SLHA, however, \tan\beta is upside down in HK.
///  A conversion routine SLHA2BFM_NN from SLHA to these conventions is included.
///
///  For the charginos a convention similar to HK is followed, which has almost the same mixing matrices
///  V and U as in SLHA, however, BFM uses \sigma_3 V as the mixing matrix for negative charged states.
///  HK refines this to be dependent on the mass matrix determinant so as to always get positive masses.
///  For conversion from SLHA to BFM use SLHA2BFM_VV.
///
///  For sleptons the SLHA convention is followed. Thus F_{11}=\cos\phi, F_{12}=\sin\phi, etc.
///  For \phi = 0 we have ~l_1 = ~l_L and ~l_2 = ~l_R.
///
///  *********************************************
///
///  Authors
///   
///  \author Are Raklev
///          (ahye@fys.uio.no)
///  \date 2015 Jun
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///
///  *********************************************

#include <vector>

namespace Gambit
{
    
  namespace ColliderBit
  {
    
    typedef vector< vector<double> > MixMatrix;
    
    /// Cross section routines.
    /// @{
    /// Cross section [pb] for e^+e^- -> \tilde l_i \tilde l_j^*
    /// To use, call SLHA2BFM first on SLHA mixing matrices constructed as a vector of vectors
    double xsec_sleislej(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix F, 
                         MixMatrix N, double mN[4], double alpha, double mZ, double gZ, double sin2thetaW);
    /// Cross section [pb] for e^+e^- -> \tilde\chi^0_i \tilde\chi^0_j
    /// Masses mi and mj for the neutralinos are signed. mS are the selectron masses (left = 0, right = 1).
    /// Warning! BFM uses inverted \tan\beta! Use tanb = 1 / tanb in converting from SLHA.
    double xsec_neuineuj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix N,
                         double mS[2], double tanb, double alpha, double mZ, double gZ, double sin2thetaW);
    /// Cross section [pb] for e^+e^- -> \tilde\chi^+_i \tilde\chi^-_j
    /// Masses mi and mj for the charginos are signed. msn is electron sneutrino mass.
    double xsec_chaichaj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix V, 
                         MixMatrix U, double msn, double alpha, double mZ, double gZ, double sin2thetaW);
    /// @}
    
    /// Conversion between SLHA and BFM conventions. \tan\beta is as per SLHA.
    /// @{
    void SLHA2BFM_NN(MixMatrix &NN, double tanb);
    void SLHA2BFM_VV(MixMatrix &VV);
    void BFM2SLHA_NN(MixMatrix &NN, double tanb);
    void BFM2SLHA_VV(MixMatrix &VV);
    MixMatrix multiply(MixMatrix A, MixMatrix B);
    MixMatrix transpose(MixMatrix A);
    void print(MixMatrix A);
    /// @}
        
  }
  
}
