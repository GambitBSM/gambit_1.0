//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General small utility classes, typedefs, etc.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jun
///
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de)
///  \date 2013 Jun
///
///  *********************************************

#ifndef __util_classes_hpp__
#define __util_classes_hpp__

#include <string>
#include <iostream>

namespace Gambit
{

  /// Shorthand for a standard string
  typedef std::string str;
  /// Shorthand for a pair of standard strings
  typedef std::pair<str, str> sspair;

  // Useful unqualified functions
  using std::cout;
  using std::endl;

  /// A container for a function that needs to be constructed at compile
  /// and executed as initialisation code at startup.
  struct ini_code
  {
    ini_code(void (*unroll)()) { (*unroll)(); }
  };
  
  /// A safe pointer that throws an informative error if you try to dereference
  /// it when nullified, and cannot be used to overwrite the thing it points to.
  template <typename TYPE> 
  class safe_ptr
  {

    public:

      /// Construct-o-safe_ptr
      safe_ptr(TYPE* in_ptr = NULL) { ptr = in_ptr; }

      /// Set pointer
      void set(TYPE* in_ptr) { ptr = in_ptr; }

      /// Dereference pointer
      const TYPE& operator*() const
      { 
        if (ptr == NULL) dieGracefully();
        return *ptr;
      }        

      /// Access is allowed to const member functions only
      const TYPE* operator->() const
      { 
        if (ptr == NULL) dieGracefully();
        return ptr;
      }        
          
    protected:

      /// The actual underlying pointer, interpreted as a pointer to constant value
      const TYPE* ptr;

      /// Failure message invoked when the user tries to dereference a null safe_ptr
      static void dieGracefully()
      {
        cout << endl << "You just tried to dereference a GAMBIT safe pointer that has value" << endl;
        cout << "NULL.  Bad idea.  Probably you tried to retrieve a conditional" << endl;
        cout << "dependency that has not been activated because the necessary condition" << endl;
        cout << "has not been met, or you tried to access a model parameter for a model" << endl;
        cout << "that you are not actually scanning.  This means there is a bug in one" << endl;
        cout << "of your module functions." << endl;
      }

  };

  struct DS_MSSMPAR
  {
    double tanbe, mu, m2, m1, m3, ma;
    double mass2u[3], mass2q[3], mass2d[3],  mass2l[3], mass2e[3];
    double asoftu[3], asoftd[3], asofte[3];
  };


  struct DS_MSPCTM
  {
    double mass[51],runmass[51];
    double mu2gev,md2gev,ms2gev,mcmc,mbmb,mtmt;
  };

  struct DS_WIDTHS
  {
    double width[51];
  };

  struct DS_INTDOF
  {
    int kdof[51];
  };

  struct DS_PACODES
  {
    int kse[2],ksmu[2],kstau[2],ksu[2],ksd[2],ksc[2],kss[2];
    int kst[2],ksb[2],kn[4],kcha[2],knu[3],kl[3],kqu[3],kqd[3];
    int ksnu[6],ksl[6],ksqu[6],ksqd[6];
//      character*8 pname(0:numpartspecies)
  };

  struct DS_RDMGEV
  {
    double mco[1000],mdof[1000],rgev[1000],rwid[1000];
    int nco,nres,kcoann[1000];
  };

  struct DS_RDPTH//_bare
  {
    int nth,incth[1000];
    double pth[1000];
  };

//PS: some proto-reindexing example code, to be built on in the future...
//  struct DSRDPTH 
//  {
//    FIRST_REINDEXES_SECOND(DS_RDPTH,DS_RDPTH_bare)
//    reindexed_array<int> REINDEX(nth), REINDEX(incth,2,1001)
//    reindexed_array<double> REINDEX(pth,1000)                
//  }

//  Equivalent to:
//  struct DS_RDPTH
//  {
//    typedef DS_RDPTH_internal fortranPart
//    fortranPart myFortranPart
//    void DS_RDPTH(fortranPart* fortranPartPtr) : myFortranPart(*fortranPartPtr) {}
//    reindexed_array<int> nth(myFortranPart.nth), incth(myFortranPart.incth,2,1001);
//    reindexed_array<double> pth(myFortranPart.pth,1,1000);
//  };


  struct DS_RDDOF
  {
    double tgev[300],fh[300],fg[300],fe[300],fp[300];
    int nf,khi,klo,dofcode;
  };

  struct DS_RDPARS
  {
    double cosmin,waccd,dpminr,dpthr,wdiffr,wdifft; 
    double hstep,hmin,compeps,xinit,xfinal,umax,cfr,pmax;
  };

  struct DS_RDSWITCH
  {
    int thavint,rdprt;
  };

  struct DS_RDLUN
  {
    int rdlulog,rdluerr;
  };

  struct DS_RDPADD
  {
    double pdivr,dpres;
    int nlow,nhigh,npres,nthup,cthtest,spltest;
  };
}
#endif //defined __util_classes_hpp__
