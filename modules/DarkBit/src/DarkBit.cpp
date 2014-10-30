//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module DarkBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de) 
///  \date 2013 Jun
///  \date 2014 Mar [RD interface to DS finally working]
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul
///  \date 2014 Jan, Feb, Mar, Apr
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar, Jul, Sep, Oct
///
///  *********************************************

#include <dlfcn.h>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "gambit_module_headers.hpp"
#include "DarkBit_types.hpp"
#include "DarkBit_rollcall.hpp"
#include "util_macros.hpp"

//PS: this is OK here, in a source file, *but not in headers like DarkBit_types.hpp*!!!
using namespace Gambit::BF;

namespace Gambit {

  namespace DarkBit {

//////////////////////////////////////////////////////////////////////////
//
//                 Initialization functions for DarkBit
//
// Note: This goes into the backend init functions, once they are there
//
//////////////////////////////////////////////////////////////////////////

    void DarkBit_PointInit_Default()
    {
      using namespace Pipes::DarkBit_PointInit_Default;
      // Nothing
    }

    void DarkBit_PointInit_MSSM7()
    {
      using namespace Pipes::DarkBit_PointInit_MSSM7;

      // Initialize DarkSUSY if run for the first time
      bool static first_time = true;
      if (first_time) 
      {
          std::cout << "DarkSUSY initialization" << std::endl;
          BEreq::dsinit();
          BEreq::dsrdinit();
          first_time = false;
      }

      // Set up mssmpar structure
      // Hard-coded values for now
      int i, unphys=0, hwarning=0;
      DS_MSSMPAR mssmpar;
      mssmpar.m1 = 500;
      mssmpar.m2 = 1000;
      mssmpar.m3 = 3500;
      mssmpar.mu=400;
      mssmpar.ma=1000;
      mssmpar.tanbe=10;
      for(i=0; i<=2; i++){
        mssmpar.mass2u[i]=mssmpar.mass2q[i]=mssmpar.mass2d[i]=2000*2000;
        mssmpar.mass2e[i]=mssmpar.mass2l[i]=2000*2000;
      }
      for(i=0; i<=1; i++){
        mssmpar.asoftu[i]=0;
        mssmpar.asoftd[i]=0;
      }
      mssmpar.asofte[0] = 0;
      mssmpar.asofte[1] = 0;
      mssmpar.asoftu[2] = 1;
      mssmpar.asoftd[2] = 1;
      mssmpar.asofte[2] = 0;

      // And initialize DS
      *BEreq::mssmpar = mssmpar;
      BEreq::dssusy(unphys, hwarning);
    }

    eaSLHA mySLHA;

    //The function below has been moved into the DarkSUSY
    //backend initialization and should be eventually deleted.
    void DarkBit_PointInit_MSSM()
    {
      using namespace Pipes::DarkBit_PointInit_MSSM;
      using namespace SLHAea;

      // Initialize DarkSUSY if run for the first time
      bool static first_time = true;
      if (first_time) 
      {
          std::cout << "DarkSUSY initialization" << std::endl;
          BEreq::dsinit();
          BEreq::dsrdinit();
          first_time = false;
      }

      // Save eaSLHA file to disc
      mySLHA = *Dep::MSSMspectrum;
      ofstream ofs("DarkBit_temp.slha");
      ofs << mySLHA;
      ofs.close();

      // Initialize SUSY spectrum from SLHA
      int len = 17;
      int flag = 15;
      char * filename = "DarkBit_temp.slha";
      BEreq::dsSLHAread(byVal(filename),flag, byVal(len));
      BEreq::dsprep();

    }

    void DarkBit_PointInit_CMSSM()
    {
      using namespace Pipes::DarkBit_PointInit_CMSSM;

      // Initialize DarkSUSY if run for the first time
      bool static first_time = true;
      if (first_time) 
      {
          std::cout << "DarkSUSY initialization" << std::endl;
          BEreq::dsinit();
          BEreq::dsrdinit();
          first_time = false;
      }

      // Setup mSUGRA model from CMSSM parameters
      double am0 = *Param["M0"];  // m0
      double amhf = *Param["M12"];  // m_1/2
      double aa0 = *Param["A0"];  // A0
      double asgnmu = *Param["sgnmu"];  // sign(mu)
      double atanbe = *Param["tanb"];  // tan(beta)
      int unphys, hwarning;
      std::cout << "Initialize dsgive_model_isasugra with" << std::endl;
      std::cout << am0 << " " << amhf << " " << aa0 << " " << asgnmu << " " << atanbe << std::endl;
      BEreq::dsgive_model_isasugra(am0, amhf, aa0, asgnmu, atanbe);
      BEreq::dssusy_isasugra(unphys, hwarning);
    }


//////////////////////////////////////////////////////////////////////////
//
//                    DarkSUSY Relic density routines
//
//////////////////////////////////////////////////////////////////////////

    void RD_spectrum_SUSY(RDspectype &result)
    {
      using namespace Pipes::RD_spectrum_SUSY;

      RDspectype myres;
      int copr[2];           // flag for which coannihilation processes to include
      double mcofr;          // maximal coannihilating particle mass
      int colist[26],lcolist; //potential coannihilating partilces

      // NB: eventually, this function should not be BE-dependent anymore!
      // DarkSUSY conventions like the ones below are only used until we have 
      // decided on a format for the model representation
      // CAREFUL: arrays start with 0 in c++, but with 1 in FORTRAN,
      // BUT some arrays (e.g. "mass", "width" & "kdof") are defined to start with 0 in DS...
      int kgamma=13,kw=14,kz=15,kt=11,kh1=17,kh2=18,kh3=19,khc=20;

      // read out DS mass spectrum and relevant particle info
      DS_PACODES DSpart = *BEreq::pacodes;
      DS_MSPCTM mymspctm= *BEreq::mspctm;
      DS_INTDOF myintdof= *BEreq::intdof;
      DS_WIDTHS mywidths= *BEreq::widths;

      // determine relevant coannihilating particles
      // set by hand which coannihilation processes to include
      // this should eventually be done via some driver/init file
      copr[0]=1;    // charginos and neutrlino
      copr[1]=1;    // sfermions
      mcofr=2.1;

      // first add neutralino=WIMP=least massive 'coannihilating particle'
      lcolist=0; myres.n_co=1;
      myres.mass_co[0]=mymspctm.mass[DSpart.kn[0]];
      myres.dof_co[0]=myintdof.kdof[DSpart.kn[0]];
      myres.part_co[0]=DSpart.kn[0]; 
      if  (copr[0]!=0){     //include  neutralino & chargino coannihilation
        for (int i=1; i<4; i++) {
         colist[i-1]=DSpart.kn[i];
        }
        colist[3]=DSpart.kcha[0];
        colist[4]=DSpart.kcha[1];
        lcolist=5;
      }
      if (copr[1]!=0){     //include sfermion coannihilation
        for (int i=0; i<6; i++) {
         colist[lcolist+i]=DSpart.ksl[i];
        }
        for (int i=0; i<3; i++) {
         colist[lcolist+6+i]=DSpart.ksnu[i];
        }
        for (int i=0; i<6; i++) {
         colist[lcolist+9+i]=DSpart.ksqu[i];
        }
        for (int i=0; i<6; i++) {
         colist[lcolist+15+i]=DSpart.ksqd[i];
        }
        lcolist += 21;
      }
      // only keep sparticles that are not too heavy
      for (int i=0; i<lcolist; i++) {
        if (mymspctm.mass[colist[i]]/myres.mass_co[0]< mcofr){        
          myres.n_co += 1;
          myres.mass_co[myres.n_co-1]=mymspctm.mass[colist[i]];
          myres.dof_co[myres.n_co-1]=myintdof.kdof[colist[i]];
          myres.part_co[myres.n_co-1]=colist[i];
//          std::cout << "coann type, mass: " << colist[i] <<", "<< myres.mass_co[myres.n_co-1] << std::endl;
        }
      }
            
      // determine resonances for LSP annihilation
      myres.n_res=0;
      int reslist[] = {kz,kh1,kh2,kh3,kw,khc};
      int resmax=sizeof(reslist) / sizeof(reslist[0]);
      if (myres.n_co==1){
        resmax -= 2;    // the last 2 resonances in the list can only appear for coannihilations
      }
      for (int i=0; i<resmax; i++) {
        if (mymspctm.mass[reslist[i]]/myres.mass_co[0]>2){        
          myres.mass_res[myres.n_res]=mymspctm.mass[reslist[i]];
          myres.width_res[myres.n_res]=mywidths.width[reslist[i]];
          if (reslist[i]==kh1 && mywidths.width[kh1]<0.1){
            myres.width_res[myres.n_res]=0.1; // narrow res treatment adopted in DS
          }
          myres.n_res += 1;
//          std::cout << "res type, mass: " << reslist[i] <<", "<< myres.mass_res[myres.n_res-1] << std::endl;
        }
      }

      // determine thresholds; lowest threshold = 2*WIMP rest mass  (unlike DS convention!)
      myres.E_thr[0]=2*myres.mass_co[0];
      myres.n_thr=1;
      int thrlist[] = {kw,kz,kt};
      int thrmax=sizeof(thrlist) / sizeof(thrlist[0]);
      for (int i=0; i<thrmax; i++) {
        if (mymspctm.mass[thrlist[i]]>myres.mass_co[0]){        
          myres.E_thr[myres.n_thr]=2*mymspctm.mass[thrlist[i]];
          myres.n_thr += 1;
//          std::cout << "thr type, energy: " << thrlist[i] <<", "<< myres.E_thr[myres.n_thr-1] << std::endl;   
        }
      }
      // now add coannihilation thresholds
      if (myres.n_co > 1){
        for (int i=0; i<myres.n_co; i++) {
          for (int j=std::max(1,i); j<myres.n_co; j++) {
            myres.E_thr[myres.n_thr]=myres.mass_co[i]+myres.mass_co[j];
            myres.n_thr += 1;
//           std::cout << "coann thr mass1, mass2: " << myres.mass_co[i] <<", "<< myres.mass_co[j] << std::endl;   
          }
        }
      }

      result=myres;

    } // function RD_spectrum_SUSY

    void RD_thresholds_resonances_ordered(RDrestype &result)
    {
      using namespace Pipes::RD_thresholds_resonances_ordered;

      //read out location and number of resonances and thresholds provided by
      //capability RD_spectrum
      RDspectype specres = *Dep::RD_spectrum;
      result.n_res=specres.n_res;
      result.n_thr=specres.n_thr;
      for (int i=0; i<result.n_res; i++) {
        result.E_res[i]=specres.mass_res[i];
        result.dE_res[i]=specres.width_res[i];       
      }
      for (int i=0; i<result.n_thr; i++) {
        result.E_thr[i]=specres.E_thr[i];
      }
      //now order
      double tmp;
      for (int i=0; i<result.n_thr-1; i++) {
        for (int j=i+1; j<result.n_thr; j++) {
          if (result.E_thr[j]<result.E_thr[i]) {
            tmp=result.E_thr[i];
            result.E_thr[i]=result.E_thr[j];
            result.E_thr[j]=tmp;
          }
        }
      }
      for (int i=0; i<result.n_res-1; i++) {
        for (int j=i+1; j<result.n_res; j++) {
          if (result.E_res[j]<result.E_res[i]) {
            tmp=result.E_res[i];
            result.E_res[i]=result.E_res[j];
            result.E_res[j]=tmp;
            tmp=result.dE_res[i];
            result.dE_res[i]=result.dE_res[j];
            result.dE_res[j]=tmp;
          }
        }
      }
//      for (int i=0; i<result.n_res; i++) {
//        std::cout << "res "<<i<<": " << result.E_res[i] << std::endl;
//    }
//      for (int i=0; i<result.n_thr; i++) {
//        std::cout << "thr "<<i<<": " << result.E_thr[i] << std::endl;
//    }

 
    } // function RD_thresholds_resonances_ordered

    void RD_eff_annrate_SUSY_DSprep_func(int &result)
    {
      using namespace Pipes::RD_eff_annrate_SUSY_DSprep_func;

      //read out location and number of resonances and thresholds from RDspectrum
      RDspectype specres = *Dep::RD_spectrum;

      //write info about coannihilating particles to DS common blocks
      //[this is essentially the model-dependent part of dsrdstart]
      DS_RDMGEV myrdmgev;
      myrdmgev.nco = specres.n_co;
      for (int i=0; i<myrdmgev.nco; i++) {
         myrdmgev.mco[i]=fabs(specres.mass_co[i]);
         myrdmgev.mdof[i]=specres.dof_co[i];
         myrdmgev.kcoann[i]=specres.part_co[i];
      }
      // now order
      double tmp; int itmp;
      for (int i=0; i<myrdmgev.nco-1; i++) {
        for (int j=i+1; j<myrdmgev.nco; j++) {
          if (myrdmgev.mco[j]<myrdmgev.mco[i]) {
            tmp=myrdmgev.mco[i];
            myrdmgev.mco[i]=myrdmgev.mco[j];
            myrdmgev.mco[j]=tmp;
            itmp=myrdmgev.mdof[i];
            myrdmgev.mdof[i]=myrdmgev.mdof[j];
            myrdmgev.mdof[j]=itmp;
            itmp=myrdmgev.kcoann[i];
            myrdmgev.kcoann[i]=myrdmgev.kcoann[j];
            myrdmgev.kcoann[j]=itmp;
          }
        }
      }
      *BEreq::rdmgev = myrdmgev;

//        for (int i=0; i<myrdmgev.nco; i++) {
//          std::cout << "co: "<< myrdmgev.kcoann[i]<<" " << myrdmgev.mdof[i]<<" " <<  myrdmgev.mco[i] << std::endl;
//        }

      result=1; // everthing OK

    } // function RD_eff_annrate_SUSY_DSprep_func

    void RD_eff_annrate_SUSY(double(*&result)(double&))
    {
      using namespace Pipes::RD_eff_annrate_SUSY;

      // This is supposed to specify that BE=DS is used to determine Weff
      if (1==1) {
        result=BEreq::dsanwx.pointer();
      }
      // similar for other BEs...

    } // function RD_eff_annrate_SUSY

    void RD_oh2_general(double &result)
    {
      using namespace Pipes::RD_oh2_general;

      //retrieve ordered list of resonances and thresholds from RD_thresholds_resonances
      RDrestype myres = *Dep::RD_thresholds_resonances;
      double mwimp=myres.E_thr[0]/2;

      // HERE STARTS A GIANT IF STATEMENT (which tb does not like and) WHICH 
      // SPECIFIES THAT THE FOLLOWING CODE USES BE=DS FOR THE RD CALCULATION
      if (1==1) {
        // what follows below is the standard accurate calculation of oh2 in DS (fast=0 in dsrdomega)
        // fast=1 to be added...!? Further TODO: keep track of error flags

        // the following replaces dsrdcom -- which cannot be linked properly!?
        DS_RDPARS myrdpars;
        myrdpars.cosmin=0.996195;myrdpars.waccd=0.005;myrdpars.dpminr=1.0e-4;
        myrdpars.dpthr=5.0e-4;myrdpars.wdiffr=0.05;myrdpars.wdifft=0.02;
        myrdpars.hstep=0.01;myrdpars.hmin=1.0e-9;myrdpars.compeps=0.01;
        myrdpars.xinit=2.0;myrdpars.xfinal=200.0;myrdpars.umax=10.0;myrdpars.cfr=0.5;
        *BEreq::rdpars = myrdpars;
        DS_RDSWITCH myrdswitch;
        myrdswitch.thavint=1;myrdswitch.rdprt=0;
        *BEreq::rdswitch = myrdswitch;
        DS_RDLUN myrdlun;
        myrdlun.rdlulog=6;myrdlun.rdluerr=6;
        *BEreq::rdlun = myrdlun;
        DS_RDPADD myrdpadd;
        myrdpadd.pdivr=2.0;myrdpadd.dpres=0.5;myrdpadd.nlow=20;myrdpadd.nhigh=10;
        myrdpadd.npres=4;myrdpadd.nthup=4;myrdpadd.cthtest=0;myrdpadd.spltest=1;
        *BEreq::rdpadd = myrdpadd;

        DS_RDERRORS myrderrors;
        myrderrors.rderr=0;myrderrors.rdwar=0;myrderrors.rdinit=1234;
        *BEreq::rderrors = myrderrors;

        // write information about thresholds and resonances to DS common blocks
        // [this is the model-independent part of dsrdstart]
        DS_RDMGEV myrdmgev = *BEreq::rdmgev; //NB:the other variables in that block have already been set!!!
        DS_RDPTH myrdpth;
        myrdmgev.nres=myres.n_res;
        for (int i=0; i<myres.n_res; i++) {
          myrdmgev.rgev[i]=myres.E_res[i];
          myrdmgev.rwid[i]=myres.dE_res[i];
        }
        // convert to momenta
        *BEreq::rdmgev = myrdmgev;
        myrdpth.nth=myres.n_thr-1;   // NB: DS does not count 2* WIMP rest mass as thr
        myrdpth.pth[0]=0; myrdpth.incth[0]=1;
        for (int i=2; i<=myres.n_thr; i++) {
          myrdpth.pth[i-1]=sqrt(pow(myres.E_thr[i-1],2)/4-pow(mwimp,2));
          myrdpth.incth[i-1]=1;
        }
        *BEreq::rdpth = myrdpth;

        // determine starting point for integration of Boltzmann eq
        DS_RDDOF myrddof = *BEreq::rddof;
        double xstart=std::max(myrdpars.xinit,1.0001*mwimp/myrddof.tgev[0]);
        double tstart=mwimp/xstart;
        int k; myrddof.khi=myrddof.nf; myrddof.klo=1;
        while (myrddof.khi > myrddof.klo+1){
          k=(myrddof.khi+myrddof.klo)/2;
          if (myrddof.tgev[k-1] < tstart){
            myrddof.khi=k;
          }
          else {
            myrddof.klo=k;
          }
        }
        *BEreq::rddof=myrddof;

        // follow narrow res treatment for SM Higgs adopted in DS
        DS_WIDTHS mywidths= *BEreq::widths;
        int kh1=17; double widthkh1= mywidths.width[kh1];    
        if (mywidths.width[kh1]<0.1) {
          mywidths.width[kh1]=0.1;
          *BEreq::widths=mywidths;
        }

        BEreq::dsrdtab(byVal(*Dep::RD_eff_annrate),xstart); // tabulate invariant rate
        BEreq::dsrdthlim();                                 // determine integration limit

        // now solve Boltzmann eqn using tabulated rate
        double xend, yend, xf; int nfcn;
        BEreq::dsrdeqn(byVal(BEreq::dsrdwintp.pointer()),xstart,xend,yend,xf,nfcn);
        // using the untabulated rate gives the same result but is usually slower: 
        // BEreq::dsrdeqn(byVal(*Dep::RD_eff_annrate),xstart,xend,yend,xf,nfcn);
        

        // change SM Higgs width back to standard value
        mywidths.width[kh1]=widthkh1;
        *BEreq::widths=mywidths;

        result = 0.70365e8*myrddof.fh[myrddof.nf-1]*mwimp*yend;

      } // USING BE=DS

      std::cout << "oh2 =" << result << std::endl;

    } // function RD_oh2_general


//////////////////////////////////////////////////////////////////////////
//
//                        Cascade Decays
//
//////////////////////////////////////////////////////////////////////////

    /*
    void decayChainLoopManager()
    {
      using namespace Pipes::decayChainLoopManager;
      unsigned int nEvents = 5;
      Loop::executeIteration(0);
      unsigned int 
      #pragma omp parallel shared()
      {
        #pragma omp for
        for(unsigned long it = 1; it < nEvents-1; it++)
        {
          Loop::executeIteration(it);   
        }
      }
      Loop::executeIteration(nEvents-1);
    }
    */

    void chain_test(double &result)
    {
        using namespace DecayChain;
        using namespace Pipes::chain_test;        
        std::cout << std::endl << "Running decay chain test!" << std::endl << std::endl;
        DecayTable dt(*Dep::TH_ProcessCatalog);
        dt.printTable();
        ChainParticle testChain(vec3(0), &dt, "test1");
        testChain.generateDecayChainMC(-1,-1);
        testChain.printChain();
        testChain.generateDecayChainMC(-1,-1);
        testChain.printChain();
        testChain.generateDecayChainMC(-1,-1);
        testChain.printChain();
        testChain.generateDecayChainMC(-1,-1);
        testChain.printChain();
        testChain.generateDecayChainMC(-1,-1);
        testChain.printChain();
        result = 0;
    }



//////////////////////////////////////////////////////////////////////////
//
//                        Gamma-ray yields
//
//////////////////////////////////////////////////////////////////////////


    void GA_AnnYield_DarkSUSY(BFptr &result)
    {
        //////////////////////////////////////////////////////////////////////////
        // Calculates annihilation spectra for general process catalogs, using
        // DarkSUSY as a backend.  This function returns 
        //
        //   dN/dE*(sv)/mDM**2 (E, v)  [cm^3/s/GeV^3]
        //
        // the energy spectrum of photons times sigma*v/m^2, as function of
        // energy (GeV) and velocity (c).  By default, only the v=0 component
        // is calculated.  
        //
        // The return type is a GAMBIT Base Function object as function which
        // is only defined for v=0.
        //////////////////////////////////////////////////////////////////////////
        
        using namespace Pipes::GA_AnnYield_DarkSUSY;

        ////////////////////
        // 1) Initialization
        ////////////////////

        // Grid and energy range used in interpolating functions.
        // Default energy range
        double Emin = 1e-1; 
        double Emax = 1e4;  
        if (runOptions->hasKey("Emin") and runOptions->hasKey("Emax"))
        {
            // Energy range from ini-file options
            Emin = runOptions->getValue<double>("Emin");
            Emax = runOptions->getValue<double>("Emax");
        }
        // 1% energy resolution must be enough
        int n = 230*log10(Emax/Emin);
        std::vector<double> xgrid = logspace(-1., 3., n);
        std::vector<double> ygrid = linspace(0., 0., n);

        // Get annihilation process from process catalog
        TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess((std::string)"chi_10", (std::string)"chi_10");

        // Get particle mass from process catalog
        double mass = (*Dep::TH_ProcessCatalog).getParticleProperty("chi_10").mass;


        ///////////////////////////////////////////////////////////
        // 2) Construction of "model-independent" two-body spectrum
        ///////////////////////////////////////////////////////////

        // Loop over all channels for that process
        for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
              it != annProc.channelList.end(); ++it)
        {
            int flag = 0;
            int ch = 0;
            int yieldk = 152;
            double sigmav;
            if ( it->nFinalStates == 2 )
            {
                // Find channel
                if      ( it->isChannel("Z0"    , "Z0"     )) ch = 12;
                else if ( it->isChannel("W+"    , "W-"     )) ch = 13;
                else if ( it->isChannel("nu_e"  , "~nu_e"  )) ch = 14;
                else if ( it->isChannel("e+"    , "e-"     )) ch = 15;
                else if ( it->isChannel("nu_mu" , "~nu_mu" )) ch = 16;
                else if ( it->isChannel("mu+"   , "mu-"    )) ch = 17;
                else if ( it->isChannel("nu_tau", "~nu_tau")) ch = 18;
                else if ( it->isChannel("tau+"  , "tau-"   )) ch = 19;
                else if ( it->isChannel("u"     , "ubar"   )) ch = 20;
                else if ( it->isChannel("d"     , "dbar"   )) ch = 21;
                else if ( it->isChannel("c"     , "cbar"   )) ch = 22;
                else if ( it->isChannel("s"     , "sbar"   )) ch = 23;
                else if ( it->isChannel("t"     , "tbar"   )) ch = 24;
                else if ( it->isChannel("b"     , "bbar"   )) ch = 25;
                else if ( it->isChannel("g"     , "g"      )) ch = 26;
                else
                {
                    std::cout << "ERROR: Unsupported two-body final state." << std::endl;
                    exit(1);
                }
                // Build up ygrid
                sigmav = (*it->dSigmadE)(0.);  // (sv)(v=0) for two-body final state
                for (int i = 0; i<n; i++)
                {
                    ygrid[i] += sigmav * BEreq::dshayield(mass, xgrid[i], ch, yieldk, flag);
                }
            }
        }

        // Construct base function object from table interpolation
        BFptr DiffYield2Body(new BFinterpolation(xgrid, ygrid, 1));

        /////////////////////////////
        // 3) Three-body final states
        /////////////////////////////

        BFptr DiffYield3Body(new BFconstant(0., 1));  // Initial spectrum = 0

        // Masses used by integration limit functions
        double m_e      = (*Dep::TH_ProcessCatalog).getParticleProperty("e-"    ).mass;
        double m_mu     = (*Dep::TH_ProcessCatalog).getParticleProperty("mu-"   ).mass;
        double m_tau    = (*Dep::TH_ProcessCatalog).getParticleProperty("tau-"  ).mass;
        double m_u      = (*Dep::TH_ProcessCatalog).getParticleProperty("u"     ).mass;
        double m_d      = (*Dep::TH_ProcessCatalog).getParticleProperty("d"     ).mass;
        double m_c      = (*Dep::TH_ProcessCatalog).getParticleProperty("c"     ).mass;
        double m_s      = (*Dep::TH_ProcessCatalog).getParticleProperty("s"     ).mass;
        double m_t      = (*Dep::TH_ProcessCatalog).getParticleProperty("t"     ).mass;
        double m_b      = (*Dep::TH_ProcessCatalog).getParticleProperty("b"     ).mass;
        double m_W      = (*Dep::TH_ProcessCatalog).getParticleProperty("W-"    ).mass;

        // Loop over all channels for that process
        for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
              it != annProc.channelList.end(); ++it)
        {
            double m1,m2;
            int yieldk = 152;
            BFptr dsigmavde;
            if ( it->nFinalStates == 3 )
            {
                // Find channel
                if      ( it->isChannel("gamma", "W+"    , "W-"     )){m1 = m_W;    m2 = m_W;  }   
             // else if ( it->isChannel("gamma", "W+"    , "H-"     )){m1 = m_W;    m2 = m_Hc; }
             // else if ( it->isChannel("gamma", "W-"    , "H+"     )){m1 = m_W;    m2 = m_Hc; }
             // else if ( it->isChannel("gamma", "H+"    , "H-"     )){m1 = m_Hc;   m2 = m_Hc; }    
                else if ( it->isChannel("gamma", "e+"    , "e-"     )){m1 = m_e;    m2 = m_e;  }
                else if ( it->isChannel("gamma", "mu+"   , "mu-"    )){m1 = m_mu;   m2 = m_mu; }
                else if ( it->isChannel("gamma", "tau+"  , "tau-"   )){m1 = m_tau;  m2 = m_tau;}
                else if ( it->isChannel("gamma", "u"     , "ubar"   )){m1 = m_u;    m2 = m_u;  }
                else if ( it->isChannel("gamma", "d"     , "dbar"   )){m1 = m_d;    m2 = m_d;  }
                else if ( it->isChannel("gamma", "c"     , "cbar"   )){m1 = m_c;    m2 = m_c;  }
                else if ( it->isChannel("gamma", "s"     , "sbar"   )){m1 = m_s;    m2 = m_s;  }
                else if ( it->isChannel("gamma", "t"     , "tbar"   )){m1 = m_t;    m2 = m_t;  }
                else if ( it->isChannel("gamma", "b"     , "bbar"   )){m1 = m_b;    m2 = m_b;  }
                else
                {
                    std::cout << "ERROR: Unsupported three-body final state." << std::endl;
                    exit(1);
                }
                // Generate photon spectrum in v=0 limit from primary photon.
                // (we just ignore the contributions from the second and third
                // particle and integrate out the corresponding kinematical
                // variable).
                typedef shared_ptr<intLimitFunc> ILptr;
                dsigmavde = it->dSigmadE->integrate(1,ILptr(new DSg3_IntLims_E1(mass,m1,m2)));
                // Add up individual constributions
                DiffYield3Body = DiffYield3Body->sum(dsigmavde);
            }
        }
        cout << "Yield calculated!" << endl;
        // Resample function
        DiffYield3Body = DiffYield3Body->tabulate(xgrid);

        // Sum two- and three-body spectra, devide by mass squared, fix valid
        // range, and add additional parameter for velocity (though the result is
        // velocity independent).
        result = DiffYield2Body->sum(DiffYield3Body)->mult(pow(mass, -2.))->validRange(0, Emin, Emax)->addPar(1);
    }


//////////////////////////////////////////////////////////////////////////
//
//      General catalogue for annihilation/decay process definition
//
//////////////////////////////////////////////////////////////////////////

    void TH_ProcessCatalog_CMSSM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_CMSSM;
        
        // Get DarkSUSY mass spectrum
        DS_MSPCTM mymspctm= *BEreq::mspctm;
        // DM mass
        double mass = mymspctm.mass[42];
        // Instantiate new ProcessCatalog
        TH_ProcessCatalog catalog;                   
        // and annihilation process                   
        TH_Process process((std::string)"chi_10", (std::string)"chi_10");   
        // Helper variable
        int index;
        // Macro for setting up 2-body decays
        // TODO: Move dshayield from GA_AnnYield into this (?)
        // TODO: Add check for whether or not process is kinematically allowed
        #define SETUP_DS_PROCESS(NAME, PARTCH, P1, P2)                                          \
            /* Set cross-section */                                                             \
            index = PARTCH;                                                                     \
            double CAT(sigma_,NAME) = BEreq::dssigmav(index);                                   \
            /* Create associated kinematical functions (just dependent on vrel)                 \
            *  here: s-wave, vrel independent 1-dim constant function */                        \
            BFptr CAT(kinematicFunction_,NAME)(new BFconstant(CAT(sigma_,NAME),1));             \
            /* Create channel identifier string */                                              \
            std::vector<std::string> CAT(finalStates_,NAME);                                    \
            CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                                    \
            CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                                    \
            /* Create channel and push it into channel list of process */                       \
            TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME), CAT(kinematicFunction_,NAME));\
            process.channelList.push_back(CAT(channel_,NAME));
             
        // SETUP_DS_PROCESS(H1H1,      1 , H1,     H1      )
        // SETUP_DS_PROCESS(H1H2,      2 , H1,     H2      )
        // SETUP_DS_PROCESS(H2H2,      3 , H2,     H2      )
        // SETUP_DS_PROCESS(H3H3,      4 , H3,     H3      )
        // SETUP_DS_PROCESS(H1H3,      5 , H1,     H3      )
        // SETUP_DS_PROCESS(H2H3,      6 , H2,     H3      )
        // SETUP_DS_PROCESS(HpHm,      7 , H+,     H-      )
        // SETUP_DS_PROCESS(H1Z0,      8 , H1,     Z0      )
        // SETUP_DS_PROCESS(H2Z0,      9 , H2,     Z0      )
        // SETUP_DS_PROCESS(H3Z0,      10, H3,     Z0      )
        // SETUP_DS_PROCESS(WpHm,      11, W+,     H-      )  // TODO: Check how this is implemented in DS
        // SETUP_DS_PROCESS(WmHp,      11, W-,     H+      )  // TODO: Check how this is implemented in DS
        SETUP_DS_PROCESS(Z0Z0,      12, Z0,     Z0      )
        SETUP_DS_PROCESS(WW,        13, W+,     W-      )
        SETUP_DS_PROCESS(nuenue,    14, nu_e,   ~nu_e   )
        SETUP_DS_PROCESS(ee,        15, e+,     e-      )
        SETUP_DS_PROCESS(numnum,    16, nu_mu,  ~nu_mu  )
        SETUP_DS_PROCESS(mumu,      17, mu+,    mu-     )
        SETUP_DS_PROCESS(nutnut,    18, nu_tau, ~nu_tau )
        SETUP_DS_PROCESS(tautau,    19, tau+,   tau-    )
        SETUP_DS_PROCESS(uubar,     20, u,      ubar    )
        SETUP_DS_PROCESS(ddbar,     21, d,      dbar    )
        SETUP_DS_PROCESS(ccbar,     22, c,      cbar    )
        SETUP_DS_PROCESS(ssbar,     23, s,      sbar    )
        SETUP_DS_PROCESS(ttbar,     24, t,      tbar    )
        SETUP_DS_PROCESS(bbbar,     25, b,      bbar    )
        SETUP_DS_PROCESS(gluglu,    26, g,      g       )
        // SETUP_DS_PROCESS(gammagamma,28, gamma,  gamma   )
        // SETUP_DS_PROCESS(Z0gamma,   29, Z0,     gamma   )
        #undef SETUP_DS_PROCESS
        
        // Set DarkSUSY DM mass parameter used in 3-body decays
        BEreq::IBintvars->ibcom_mx = mass;

        // Masses of relevant particles
        double m_e      = mymspctm.mass[2];
        double m_mu     = mymspctm.mass[4];
        double m_tau    = mymspctm.mass[6];
        double m_u      = mymspctm.mass[7];
        double m_d      = mymspctm.mass[8];
        double m_c      = mymspctm.mass[9];
        double m_s      = mymspctm.mass[10];
        double m_t      = mymspctm.mass[11];
        double m_b      = mymspctm.mass[12];
        double m_W      = mymspctm.mass[14];
        
        // Macro for setting up 3-body decays with gammas
        // TODO: Channel is now only added if kinematically allowed. Might want to do this in a different way.
        #define SETUP_DS_PROCESS_GAMMA3BODY(NAME, IBCH, P1, P2, M_1, M_2, IBFUNC, SV_IDX)                                   \
            if(M_1 + M_2 < 2*mass)                                                                                          \
            {                                                                                                               \
                index = SV_IDX;                                                                                             \
                double sv = BEreq::dssigmav(index);                                                                         \
                BFptr   CAT(kinematicFunction_,NAME)                                                                        \
                        (new DSgamma3bdyKinFunc(IBCH, mass, M_1, M_2, STRIP_PARENS(IBFUNC), sv));                           \
                /* Create channel identifier string */                                                                      \
                std::vector<std::string> CAT(finalStates_,NAME);                                                            \
                CAT(finalStates_,NAME).push_back("gamma");                                                                  \
                CAT(finalStates_,NAME).push_back(STRINGIFY(P1));                                                            \
                CAT(finalStates_,NAME).push_back(STRINGIFY(P2));                                                            \
                /* Create channel and push it into channel list of process */                                               \
                TH_Channel CAT(channel_,NAME)(CAT(finalStates_,NAME), CAT(kinematicFunction_,NAME));                        \
                process.channelList.push_back(CAT(channel_,NAME));                                                          \
            }                                        
        
        SETUP_DS_PROCESS_GAMMA3BODY(gammaWW,        1, W+,     W-,      m_W,    m_W,    (BEreq::dsIBwwdxdy.pointer()),  13 )     
        // SETUP_DS_PROCESS_GAMMA3BODY(gammaWpHm,      2, W+,     H-,      m_W,    m_Hc,   (BEreq::dsIBwhdxdy.pointer()),  11 )   // TODO: Check how DarkSUSY sums W+H- and W-H+ results.         
        // SETUP_DS_PROCESS_GAMMA3BODY(gammaWmHp,      2, W-,     H+,      m_W,    m_Hc,   (BEreq::dsIBwhdxdy.pointer()),  11 )   // TODO: Check how DarkSUSY sums W+H- and W-H+ results.
        // SETUP_DS_PROCESS_GAMMA3BODY(gammaHpHm,      3, H+,     H-,      m_Hc,   m_Hc,   (BEreq::dsIBhhdxdy.pointer()),  0  )                    
        SETUP_DS_PROCESS_GAMMA3BODY(gammaee,        4, e+,      e-,     m_e,    m_e,    (BEreq::dsIBffdxdy.pointer()) , 15 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammamumu,      5, mu+,     mu-,    m_mu,   m_mu,   (BEreq::dsIBffdxdy.pointer()) , 17 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammatautau,    6, tau+,    tau-,   m_tau,  m_tau,  (BEreq::dsIBffdxdy.pointer()) , 19 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammauubar,     7, u,       ubar,   m_u,    m_u,    (BEreq::dsIBffdxdy.pointer()) , 20 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammaddbar,     8, d,       dbar,   m_d,    m_d,    (BEreq::dsIBffdxdy.pointer()) , 21 )            
        SETUP_DS_PROCESS_GAMMA3BODY(gammaccbar,     9, c,       cbar,   m_c,    m_c,    (BEreq::dsIBffdxdy.pointer()) , 22 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammassbar,     10,s,       sbar,   m_s,    m_s,    (BEreq::dsIBffdxdy.pointer()) , 23 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammattbar,     11,t,       tbar,   m_t,    m_t,    (BEreq::dsIBffdxdy.pointer()) , 24 )
        SETUP_DS_PROCESS_GAMMA3BODY(gammabbbar,     12,b,       bbar,   m_b,    m_b,    (BEreq::dsIBffdxdy.pointer()) , 25 )
        #undef SETUP_DS_PROCESS_GAMMA3BODY
        
        // Add process to provess list
        catalog.processList.push_back(process);

        // Finally, store properties of the different particles. Constructor for TH_ParticleProperty takes particle mass and 2*spin.
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("chi_10" , TH_ParticleProperty(mass,     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("e-"     , TH_ParticleProperty(m_e,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("e+"     , TH_ParticleProperty(m_e,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("mu-"    , TH_ParticleProperty(m_mu,     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("mu+"    , TH_ParticleProperty(m_mu,     1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("tau-"   , TH_ParticleProperty(m_tau,    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("tau+"   , TH_ParticleProperty(m_tau,    1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("u"      , TH_ParticleProperty(m_u,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("ubar"   , TH_ParticleProperty(m_u,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("d"      , TH_ParticleProperty(m_d,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("dbar"   , TH_ParticleProperty(m_d,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("c"      , TH_ParticleProperty(m_c,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("cbar"   , TH_ParticleProperty(m_c,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("s"      , TH_ParticleProperty(m_s,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("sbar"   , TH_ParticleProperty(m_s,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("t"      , TH_ParticleProperty(m_t,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("tbar"   , TH_ParticleProperty(m_t,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("b"      , TH_ParticleProperty(m_b,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("bbar"   , TH_ParticleProperty(m_b,      1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("W-"     , TH_ParticleProperty(m_W,      2)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("W+"     , TH_ParticleProperty(m_W,      2)));
                

        // Temporary dummy particles for testing the decay chain code
        TH_ParticleProperty test1Property(10, 0);
        TH_ParticleProperty test2Property(5, 0);
        TH_ParticleProperty test3Property(4, 0);
        TH_ParticleProperty test4Property(1, 0);
        TH_ParticleProperty test5Property(1, 0);
        TH_ParticleProperty test6Property(3, 0);        
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test1", test1Property));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test2", test2Property));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test3", test3Property));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test4", test4Property));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test5", test5Property));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test6", test6Property));        
        BFptr test1_23width( new BFconstant(1.0,1));    
        BFptr test1_24width( new BFconstant(2.0,1));    
        BFptr test1_456width(new BFconstant(3.0,1));    
        BFptr test2_56width( new BFconstant(0.5,1));                                 
        std::vector<std::string> finalStates_1_23;
        std::vector<std::string> finalStates_1_24;
        std::vector<std::string> finalStates_1_456;
        std::vector<std::string> finalStates_2_56;                                  
        TH_Process test1_decay("test1");     
        finalStates_1_23.push_back("test2");              
        finalStates_1_23.push_back("test3");                                            
        TH_Channel channel_1_23(finalStates_1_23, test1_23width);
        test1_decay.channelList.push_back(channel_1_23);
        finalStates_1_24.push_back("test2");              
        finalStates_1_24.push_back("test4");                                            
        TH_Channel channel_1_24(finalStates_1_24, test1_24width);
        test1_decay.channelList.push_back(channel_1_24);
        finalStates_1_456.push_back("test4");              
        finalStates_1_456.push_back("test5");      
        finalStates_1_456.push_back("test6");            
        TH_Channel channel_1_456(finalStates_1_456, test1_456width);
        test1_decay.channelList.push_back(channel_1_456);
        catalog.processList.push_back(test1_decay);
        TH_Process test2_decay("test2");     
        finalStates_2_56.push_back("test5");              
        finalStates_2_56.push_back("test6");                                                                                        
        TH_Channel channel_2_56(finalStates_2_56, test2_56width);
        test2_decay.channelList.push_back(channel_2_56);
        catalog.processList.push_back(test2_decay);
        
        // Return the finished process catalog
        result = catalog;
    }


//////////////////////////////////////////////////////////////////////////
//
//             Simple relic density routines for cross-checks
//                      (micromegas vs darksusy)
//
//////////////////////////////////////////////////////////////////////////

    void RD_oh2_DarkSUSY(double &result)
    {
        using namespace Pipes::RD_oh2_DarkSUSY;
        // Input
        int omtype = 1;  // 0: no coann; 1: all coann
        int fast = 0;  // 0: standard; 1: fast; 2: dirty

        // Set options via ini-file
        if (runOptions->hasKey("omtype")) omtype = runOptions->getValue<int>("omtype");
        if (runOptions->hasKey("fast")) fast = runOptions->getValue<int>("fast");

        // Output
        double xf;  // freeze-out temperature
        int ierr;  // error flag
        int iwar;  // warming flag
        int nfc;  // number of function calls to effective annihilation cross section
        double oh2 = BEreq::dsrdomega(omtype,fast,xf,ierr,iwar,nfc);
        std::cout << "oh2 is " << oh2 << std::endl;
        result = oh2;
    }

    void RD_oh2_micromegas(double &oh2)
    {
    	using namespace Pipes::RD_oh2_micromegas;
        // Input
        int fast=0;  // fast: 1, accurate: 0
        double Beps=1.E-5;  // Beps=1e-5 recommended, Beps=1 switches coannihilation off

        // Set options via ini-file
        if (runOptions->hasKey("fast")) fast = runOptions->getValue<int>("fast");
        if (runOptions->hasKey("Beps")) Beps = runOptions->getValue<double>("Beps");
        cout << "Using fast: " << fast << " and Beps: " << Beps << endl;

        // Output
        double Xf;
        oh2 = BEreq::oh2(&Xf, byVal(fast), byVal(Beps));
        cout << "X_f = " << Xf << " Omega h^2 = " << oh2 << endl;
    }


//////////////////////////////////////////////////////////////////////////
//
//                    Simple likelihood functions
//
//////////////////////////////////////////////////////////////////////////

    void lnL_FermiLATdwarfsSimple(double &result)
    {
        using namespace Pipes::lnL_FermiLATdwarfsSimple;
        // Koushiappas' limits [arXiv:1108.2914]
        //
        // This is the tabulated Phi-Likelihood function from Koushiappas et al.
        // Above L = 36, we use linear extrapolation up to L = 360000
        //
        // phi (defined as phi = sigmav/mDM**2*Ntot/8/pi * 1e26)
        double xgridArray [101] = { 0. , 6.74308086122e-05 , 0.000123192463137 , 
        0.000171713798503 , 0.000215245918518 , 0.000255093268618 , 0.00029207805123 ,
        0.000326751732695 , 0.000359503469472 , 0.000390620122006 , 0.000420321264006,
        0.00044878042576 , 0.000476138421008 , 0.000502511975672 , 0.000527999496499,
        0.000552685056887 , 0.000576641243501 , 0.000599931255273 ,
        0.000622610497068 , 0.000644727821172 , 0.000666326515638 , 0.000687445105269,
        0.000708118010141 , 0.000728376093388 , 0.000748247120993 , 0.00076775615078,
        0.000786925863514 , 0.000805776846231 , 0.000824327835809 , 0.00084259592922,
        0.000860596765645 , 0.000878344684789 , 0.000895852864914 ,
        0.000913133443547 , 0.000930197623331 , 0.0009470557651 , 0.000963717469925 ,
        0.00098019165163 , 0.000996486601006 , 0.00101261004288 , 0.00102856918685 ,
        0.00104437077256 , 0.00106002111016 , 0.00107552611658 , 0.00109089134805 ,
        0.00110612202935 , 0.00112122308019 , 0.00113619913897 , 0.00115105458439 ,
        0.00116579355487 , 0.00118041996631 , 0.00119493752815 , 0.00120934975806 ,
        0.00122365999528 , 0.00123787141289 , 0.00125198702892 , 0.00126600971667 ,
        0.00127994221404 , 0.00129378713223 , 0.00130754696367 , 0.00132122408935 ,
        0.00133482078559 , 0.00134833923028 , 0.00136178150869 , 0.0013751496188 ,
        0.00138844547626 , 0.00140167091906 , 0.00141482771173 , 0.00142791754942 ,
        0.00144094206154 , 0.0014539028153 , 0.00146680131887 , 0.00147963902447 ,
        0.00149241733116 , 0.00150513758749 , 0.00151780109399 , 0.00153040910553 ,
        0.00154296283341 , 0.00155546344754 , 0.00156791207827 , 0.00158030981824 ,
        0.00159265772411 , 0.00160495681814 , 0.00161720808976 , 0.00162941249692 ,
        0.00164157096757 , 0.00165368440081 , 0.00166575366823 , 0.00167777961494 ,
        0.00168976306076 , 0.00170170480119 , 0.00171360560841 , 0.00172546623219 ,
        0.00173728740083 , 0.00174906982191 , 0.00176081418314 , 0.00177252115315 ,
        0.00178419138212 , 0.00179582550256 , 0.00180742412988 , 18.0 };
        //
        // Normalization w.r.t. p-value of phi=0
        //
        // chi^2
        double ygridArray [101] = { 0.0, 
        0.0513551, 0.177438, 0.35228, 0.561353, 0.795726, 1.04953, 1.3187, 1.60032, 
        1.89222, 2.19274, 2.50059, 2.81476, 3.13441, 3.45887, 3.78757, 4.12006,
        4.45594, 4.79486, 5.13653, 5.48072, 5.82719, 6.17576, 6.52625, 6.87853,
        7.23244, 7.58789, 7.94475, 8.30294, 8.66236, 9.02294, 9.38462, 9.74731,
        10.111, 10.4755, 10.841, 11.2072, 11.5742, 11.9419, 12.3104, 12.6795, 13.0492,
        13.4195, 13.7904, 14.1619, 14.5339, 14.9063, 15.2793, 15.6527, 16.0266,
        16.4008, 16.7755, 17.1506, 17.5261, 17.9019, 18.2781, 18.6546, 19.0315,
        19.4087, 19.7861, 20.1639, 20.542, 20.9203, 21.2989, 21.6778, 22.0569,
        22.4362, 22.8158, 23.1957, 23.5757, 23.956, 24.3365, 24.7171, 25.098, 25.4791,
        25.8604, 26.2418, 26.6235, 27.0053, 27.3872, 27.7694, 28.1517, 28.5342,
        28.9168, 29.2996, 29.6825, 30.0655, 30.4487, 30.8321, 31.2155, 31.5992,
        31.9829, 32.3667, 32.7507, 33.1348, 33.519, 33.9034, 34.2878, 34.6724,
        35.0571, 350000.0 };
        // Convert arrays to vectors.
        std::vector<double> xgrid(xgridArray, xgridArray + sizeof xgridArray / sizeof xgridArray[0]);
        std::vector<double> ygrid(ygridArray, ygridArray + sizeof ygridArray / sizeof ygridArray[0]);
        // Construct interpolated function, using GAMBIT base functions.
        BFptr dwarf_likelihood(new BFinterpolation(xgrid, ygrid, 1, "lin"));

        // Integate spectrum 
        // (the zero velocity limit of the differential annihilation
        // cross-section as function of individual final state photons)
        //std::ofstream os;
        //os.open("test.dat");
        //(*Dep::GA_AnnYield)->writeToFile(logspace(-1., 5., 10000), os);
        //os.close();
        double AnnYieldint = (*(*Dep::GA_AnnYield)->fixPar(1, 0.)->integrate(0, 1, 100)->set_epsrel(1e-3))();
        std::cout << "AnnYieldInt (1-100 GeV): " << AnnYieldint << std::endl;

        // Calculate phi-value
        double phi = AnnYieldint / 8. / 3.14159265 * 1e26;

        // And return final likelihood
        result = 0.5*(*dwarf_likelihood)(phi);
        std::cout << "dwarf_likelihood: " << result << std::endl;
        std::cout << "phi: " << phi << std::endl;
    }

    void lnL_oh2_Simple(double &result)
    {
      using namespace Pipes::lnL_oh2_Simple;
      double oh2 = *Dep::RD_oh2;
      result = pow(oh2 - 0.11, 2)/pow(0.01, 2);
    }

    void dump_GammaSpectrum(double &result)
    {
        using namespace Pipes::dump_GammaSpectrum;
        // Construct interpolated function, using GAMBIT base functions.
        BFptr spectrum = (*Dep::GA_AnnYield)->fixPar(1, 0.);
        for (int i = 0; i<=50; i++)
        {
            double energy = pow(10., i/10. - 2.);
            std::cout << energy << ": " << (*spectrum)(energy) << std::endl;
        }

        result = 0.;
    }


//////////////////////////////////////////////////////////////////////////
//
//                 Some direct detection toy stuff
//
//////////////////////////////////////////////////////////////////////////

    void DD_couplings_DarkSUSY(Gambit::DarkBit::DD_couplings &result)
    {
        using namespace Pipes::DD_couplings_DarkSUSY;
        // Calling DarkSUSY subroutine dsddgpgn(gps,gns,gpa,gna)
        // to set all four couplings.
        BEreq::dsddgpgn(result.gps, result.gns, result.gpa, result.gna);
        result.M_DM = (*BEreq::mspctm).mass[42];        
        std::cout << "dsddgpgn gives: \n";
        std::cout << " gps: " << result.gps << "\n";
        std::cout << " gns: " << result.gns << "\n";
        std::cout << " gpa: " << result.gpa << "\n";
        std::cout << " gna: " << result.gna << std::endl;
    }

    void lnL_FakeLux(double &result)
    {
        using namespace Pipes::lnL_FakeLux;
        result = pow((*Dep::DD_couplings).gps, 2);  // Utterly nonsense
    }

//////////////////////////////////////////////////////////////////////////
//
//                Direct detection likelihoods
//
//////////////////////////////////////////////////////////////////////////

    void lnL_Lux2013(double &result)
    {
        using namespace Pipes::lnL_Lux2013;
        BEreq::DDCalc0_InitDetectorLUX2013(NULL);
        double M_DM = (*Dep::DD_couplings).M_DM;
        double Gps = (*Dep::DD_couplings).gps;
        double Gpa = (*Dep::DD_couplings).gpa;
        double Gns = (*Dep::DD_couplings).gns;
        double Gna = (*Dep::DD_couplings).gna;                        
        BEreq::DDCalc0_SetWIMP( &M_DM,&Gps,&Gns,&Gpa,&Gna,
                                NULL,NULL,NULL,NULL,
                                NULL,NULL,NULL,NULL,
                                NULL,NULL);
        BEreq::DDCalc0_CalcRates();
        result = BEreq::DDCalc0_LogLikelihood();
        std::cout << "Lux 2013 likelihood: " << result << std::endl;
    }


//////////////////////////////////////////////////////////////////////////
//
//            Neutrino telescope likelihoods and observables
//
//////////////////////////////////////////////////////////////////////////

    // The following information applies for all *_full IceCube functions. 
    // Units:   mwimp          GeV
    //          annrate        s^-1
    //          nuyield(Enu,p) m^-2 GeV^-1 annihilation^-1
    //            --> Enu       neutrino energy (GeV)
    //            --> p         p=1 for neutrino yield, p=2 for nubar yield 

    // 22-string IceCube sample: predicted signal and background counts, observed counts and likelihoods.
    void IC22_full(nudata &result)
    {
      using namespace Pipes::IC22_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-22";
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annrate, byVal(*Dep::nuyield), sigpred, bgpred, 
       totobs, lnLike, pval, 4, false, 0.0, 0.0);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    // 22-string extractor module functions
    void IC22_signal (double &result) { result = Pipes::IC22_signal ::Dep::IC22_data->signal;  }
    void IC22_bg     (double &result) { result = Pipes::IC22_bg     ::Dep::IC22_data->bg;      }
    void IC22_nobs   (int    &result) { result = Pipes::IC22_nobs   ::Dep::IC22_data->nobs;    }
    void IC22_loglike(double &result) { result = Pipes::IC22_loglike::Dep::IC22_data->loglike; }
    void IC22_pvalue (double &result) { result = Pipes::IC22_pvalue ::Dep::IC22_data->pvalue;  }

    // 79-string IceCube WH sample: predicted signal and background counts, observed counts and likelihoods.
    void IC79WH_full(nudata &result)
    {
      using namespace Pipes::IC79WH_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 WH";
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annrate, byVal(*Dep::nuyield), sigpred, bgpred, 
       totobs, lnLike, pval, 4, false, 0.0, 0.0);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    // 79-string WH extractor module functions
    void IC79WH_signal (double &result) { result = Pipes::IC79WH_signal ::Dep::IC79WH_data->signal;  }
    void IC79WH_bg     (double &result) { result = Pipes::IC79WH_bg     ::Dep::IC79WH_data->bg;      }
    void IC79WH_nobs   (int    &result) { result = Pipes::IC79WH_nobs   ::Dep::IC79WH_data->nobs;    }
    void IC79WH_loglike(double &result) { result = Pipes::IC79WH_loglike::Dep::IC79WH_data->loglike; }
    void IC79WH_pvalue (double &result) { result = Pipes::IC79WH_pvalue ::Dep::IC79WH_data->pvalue;  }

    // 79-string IceCube WL sample: predicted signal and background counts, observed counts and likelihoods.
    void IC79WL_full(nudata &result)
    {
      using namespace Pipes::IC79WL_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 WL";
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annrate, byVal(*Dep::nuyield), sigpred, bgpred, 
       totobs, lnLike, pval, 4, false, 0.0, 0.0);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    // 79-string WL extractor module functions
    void IC79WL_signal (double &result) { result = Pipes::IC79WL_signal ::Dep::IC79WL_data->signal;  }
    void IC79WL_bg     (double &result) { result = Pipes::IC79WL_bg     ::Dep::IC79WL_data->bg;      }
    void IC79WL_nobs   (int    &result) { result = Pipes::IC79WL_nobs   ::Dep::IC79WL_data->nobs;    }
    void IC79WL_loglike(double &result) { result = Pipes::IC79WL_loglike::Dep::IC79WL_data->loglike; }
    void IC79WL_pvalue (double &result) { result = Pipes::IC79WL_pvalue ::Dep::IC79WL_data->pvalue;  }

    // 79-string IceCube SL sample: predicted signal and background counts, observed counts and likelihoods.
    void IC79SL_full(nudata &result)
    {
      using namespace Pipes::IC79SL_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 SL";
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annrate, byVal(*Dep::nuyield), sigpred, bgpred, 
       totobs, lnLike, pval, 4, false, 0.0, 0.0);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    // 79-string SL extractor module functions
    void IC79SL_signal (double &result) { result = Pipes::IC79SL_signal ::Dep::IC79SL_data->signal;  }
    void IC79SL_bg     (double &result) { result = Pipes::IC79SL_bg     ::Dep::IC79SL_data->bg;      }
    void IC79SL_nobs   (int    &result) { result = Pipes::IC79SL_nobs   ::Dep::IC79SL_data->nobs;    }
    void IC79SL_loglike(double &result) { result = Pipes::IC79SL_loglike::Dep::IC79SL_data->loglike; }
    void IC79SL_pvalue (double &result) { result = Pipes::IC79SL_pvalue ::Dep::IC79SL_data->pvalue;  }

    // Composite IceCube likelihood function.
    void IC_loglike(double &result)
    {
      using namespace Pipes::IC_loglike;
      result = *Dep::IC22_loglike + *Dep::IC79WH_loglike + *Dep::IC79WL_loglike + *Dep::IC79SL_loglike; 
    }


    //The following are just toy functions to allow the neutrino likelihoods to be tested.  
    //They should be deleted when real functions are added to provide the WIMP mass, solar
    //annihilation rate and neutrino yield.
    double DarkBit_toyield(double&, int&)                   { return 1.e-26;             }
    void nuyield_toy      (nuyield_functype &result)        { result = &DarkBit_toyield; }
    void mwimp_toy        (double &result)                  { result = 250.0;            }
    void annrate_toy      (double &result)                  { result = 1.e20;            }


/*
// Tests for Torsten

    void provideN_func(int &result)
    {
      using namespace Pipes::provideN_func;
      result=1000;
    }

    void provideF_func(double(*&result)(double&))
    {
      using namespace Pipes::provideF_func;
      result = BEreq::funcGauss.pointer();
    }

    void CalcAv_func(double &result)
    {
      using namespace Pipes::CalcAv_func;
      int n=*Dep::provideN;
      result = BEreq::average(byVal(*Dep::provideF), n);
      std::cout << "CalcAv_func: " << result << std::endl;
    }
*/
/*    
    void RD_oh2_SingletDM(double &result)
    {
      using namespace Pipes::RD_oh2_SingletDM;
      //double sigmaV = (*Dep::GA_BRs).sigmaV;
      //result = 0.11/sigmaV * 3e-26;
      result = 0;
    }

    void TH_ProcessCatalog_SingletDM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_CMSSM;

        DS_MSPCTM mymspctm= *BEreq::mspctm;
        // TODO:  Check if this is really DM mass
        double mass = mymspctm.mass[41];  // Hardcoded array index
        double sigmaTot = 3e-26;

        std::cout << "Generate ProcessCatalog for chi with mass=" << mass << " GeV and cs=" << sigmaTot << " cm3/s." << std::endl;

        TH_ProcessCatalog catalog;  // Instantiate new ProcessCatalog
        TH_Process process((std::string)"chi", (std::string)"chi");  // and annihilation process

        // Set cross-sections
        double sigma_mumu = 0.5 * sigmaTot;
        double sigma_bbbar = 0.5 * sigmaTot;

        // Create associated kinematical functions (just dependent on vrel)
        // here: s-wave, vrel independent 1-dim constant function
        BFptr kinematicFunction_mumu(new BFconstant(sigma_mumu, 1));
        BFptr kinematicFunction_bbbar(new BFconstant(sigma_bbbar, 1));

        // Create channel identifier strings
        std::vector<std::string> finalStates_mumu;// {"mu+", "mu-"};
        finalStates_mumu.push_back("mu+");
        finalStates_mumu.push_back("mu-");
        std::vector<std::string> finalStates_bbbar;// {"b", "bbar"};
        finalStates_bbbar.push_back("b");
        finalStates_bbbar.push_back("bbar");

        // Create channels
        TH_Channel channel_mumu(finalStates_mumu, kinematicFunction_mumu);
        TH_Channel channel_bbbar(finalStates_bbbar, kinematicFunction_bbbar);

        // Push them on channel list of process
        process.channelList.push_back(channel_mumu);
        process.channelList.push_back(channel_bbbar);

        // And process on processe list
        catalog.processList.push_back(process);

        // Finally, store properties of "chi" in particleProperty list
        TH_ParticleProperty chiProperty(mass, 1);  // Set mass and 2*spin
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("chi", chiProperty));

        result = catalog;
    }
*/

  }
}
