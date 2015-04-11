#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                    DarkSUSY Relic density routines
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Some helper function that gets spectrum information needed for
     *         relic density calculations directly from DarkSUSY.
     *
     * Collects information about coannihilating particles, resonances and
     * threshold energies.
     */
    void RD_spectrum_SUSY(RD_spectrum_type &result)
    {
      using namespace Pipes::RD_spectrum_SUSY;

      std::vector<int> colist; //potential coannihilating particles (indices)
      colist.clear();

      result.coannihilatingParticles.clear();
      result.resonances.clear();
      result.threshold_energy.clear();

      // settings for coannihilations (default values if no input is specified
      // in yaml file)
      bool CoannCharginosNeutralinos = runOptions->getValueOrDef<bool>(true,
          "CoannCharginosNeutralinos");
      bool CoannSfermions = runOptions->getValueOrDef<bool>(true,
          "CoannSfermions");
      double CoannMaxMass = runOptions->getValueOrDef<double>(2.1,
          "CoannMaxMass");

      // NB: eventually, this function should not be BE-dependent anymore!
      // DarkSUSY conventions like the ones below are only used until we have 
      // decided on a format for the model representation
      int kgamma=13,kw=14,kz=15,kt=11,kh1=17,kh2=18,kh3=19,khc=20;

      // introduce pointers to DS mass spectrum and relevant particle info
      DS_PACODES *DSpart = &(*BEreq::pacodes);
      DS_MSPCTM *mymspctm= &(*BEreq::mspctm);
      DS_INTDOF *myintdof= &(*BEreq::intdof);
      DS_WIDTHS *mywidths= &(*BEreq::widths);

      // first add neutralino=WIMP=least massive 'coannihilating particle'
      result.coannihilatingParticles.push_back(
          RD_coannihilating_particle(DSpart->kn(1), 
          myintdof->kdof(DSpart->kn(1)),mymspctm->mass(DSpart->kn(1))));

      // include  neutralino & chargino coannihilation
      if(CoannCharginosNeutralinos)
      {
        for (int i=2; i<=4; i++)
          colist.push_back(DSpart->kn(i));
        colist.push_back(DSpart->kcha(1));
        colist.push_back(DSpart->kcha(2));
      }

      // include sfermion coannihilation
      if(CoannSfermions)
      {
        for (int i=1; i<=6; i++)
          colist.push_back(DSpart->ksl(i));
        for (int i=1; i<=3; i++)
          colist.push_back(DSpart->ksnu(i));
        for (int i=1; i<=6; i++)
          colist.push_back(DSpart->ksqu(i));
        for (int i=1; i<=6; i++)
          colist.push_back(DSpart->ksqd(i));
      }

      // only keep sparticles that are not too heavy
      for (size_t i=0; i<colist.size(); i++)
        if (mymspctm->mass(colist[i])/mymspctm->mass(DSpart->kn(1)) 
            < CoannMaxMass)
          result.coannihilatingParticles.push_back(
              RD_coannihilating_particle(colist[i], myintdof->kdof(colist[i]),
              mymspctm->mass(colist[i])));


      // determine resonances for LSP annihilation
      int reslist[] = {kz,kh1,kh2,kh3,kw,khc};
      int resmax=sizeof(reslist) / sizeof(reslist[0]);
      // the last 2 resonances in the list can only appear for coannihilations
      if (result.coannihilatingParticles.size() == 1)
        resmax -= 2;    

      for (int i=0; i<resmax; i++)
      {
        if (mymspctm->mass(reslist[i])/result.coannihilatingParticles[0].mass 
            > 2.)
        {
          if (reslist[i]==kh1 && mywidths->width(kh1) < 0.1)
            // narrow res treatment adopted in DS
            result.resonances.push_back(
                TH_Resonance(mymspctm->mass(reslist[i]), 0.1)); 
          else
            result.resonances.push_back(
                TH_Resonance(
                  mymspctm->mass(reslist[i]), mywidths->width(reslist[i])));
        }
      }

      // determine thresholds; lowest threshold = 2*WIMP rest mass  (unlike DS
      // convention!)
      result.threshold_energy.push_back(
          2*result.coannihilatingParticles[0].mass);
      int thrlist[] = {kw,kz,kt};
      int thrmax=sizeof(thrlist) / sizeof(thrlist[0]);
      for (int i=0; i<thrmax; i++)
        if (mymspctm->mass(thrlist[i])>result.coannihilatingParticles[0].mass)
          result.threshold_energy.push_back(2*mymspctm->mass(thrlist[i]));

      // now add coannihilation thresholds
      if (result.coannihilatingParticles.size() > 1)
        for (int i=0; i<(int)result.coannihilatingParticles.size(); i++)
          for (int j=std::max(1,i);
              j<(int)result.coannihilatingParticles.size(); j++)
            result.threshold_energy.push_back(
                result.coannihilatingParticles[i].mass
                +result.coannihilatingParticles[j].mass);

    } // function RD_spectrum_SUSY

    /*! \brief Derive thresholds & resonances from process catalogue.
    */
    void RD_thresholds_resonances_from_ProcessCatalog(
        TH_resonances_thresholds &result)
    {
      using namespace Pipes::RD_thresholds_resonances_from_ProcessCatalog;
      std::string DMid= Dep::DarkMatter_ID->singleID();

      TH_Process annihilation = 
        (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);

      result = TH_resonances_thresholds(annihilation.thresholdResonances);
    }

    /*! \brief Derive thresholds & resonances from RD_spectrum helper object.
    */
    void RD_thresholds_resonances_from_spectrum(
        TH_resonances_thresholds &result)
    {
      using namespace Pipes::RD_thresholds_resonances_from_spectrum;

      //read out location and number of resonances and thresholds provided by
      //capability RD_spectrum
      RD_spectrum_type spectype = *Dep::RD_spectrum;
      result = TH_resonances_thresholds(spectype.resonances,
          spectype.threshold_energy);

      //now order
      double tmp;
      for (std::size_t i=0; i<result.threshold_energy.size()-1; i++)
      {
        for (std::size_t j=i+1; j<result.threshold_energy.size(); j++)
        {
          if (result.threshold_energy[j]<result.threshold_energy[i])
          {
            tmp=result.threshold_energy[i];
            result.threshold_energy[i]=result.threshold_energy[j];
            result.threshold_energy[j]=tmp;
          }
        }
      }

      if (!result.resonances.empty()){
        TH_Resonance tmp2;
        for (std::size_t i=0; i<result.resonances.size()-1; i++)
        {
          for (std::size_t j=i+1; j<result.resonances.size(); j++)
          {
            if (result.resonances[j].energy < result.resonances[i].energy)
            {
              tmp2=result.resonances[i];
              result.resonances[i]=result.resonances[j];
              result.resonances[j]=tmp2;
            }
          }
        }
      }
    } // function RD_thresholds_resonances_from_spectrum

    /*! \brief Some helper function to prepare evaluation of Weff from
     *         DarkSUSY.
     */
    void RD_eff_annrate_SUSY_DSprep_func(int &result)
    {
      using namespace Pipes::RD_eff_annrate_SUSY_DSprep_func;

      // Read out location and number of resonances and thresholds from
      // RDspectrum.
      RD_spectrum_type specres = *Dep::RD_spectrum;

      //write info about coannihilating particles to DS common blocks
      //[this is essentially the model-dependent part of dsrdstart]
      DS_RDMGEV myrdmgev;
      myrdmgev.nco = specres.coannihilatingParticles.size();
      for (int i=1; i<=myrdmgev.nco; i++) {
        myrdmgev.mco(i)=fabs(specres.coannihilatingParticles[i-1].mass);
        myrdmgev.mdof(i)=specres.coannihilatingParticles[i-1].degreesOfFreedom;
        myrdmgev.kcoann(i)=specres.coannihilatingParticles[i-1].index;
      }
      // now order
      double tmp; int itmp;
      for (int i=1; i<=myrdmgev.nco-1; i++) {
        for (int j=i+1; j<=myrdmgev.nco; j++) {
          if (myrdmgev.mco(j)<myrdmgev.mco(i)) {
            tmp=myrdmgev.mco(i);
            myrdmgev.mco(i)=myrdmgev.mco(j);
            myrdmgev.mco(j)=tmp;
            itmp=myrdmgev.mdof(i);
            myrdmgev.mdof(i)=myrdmgev.mdof(j);
            myrdmgev.mdof(j)=itmp;
            itmp=myrdmgev.kcoann(i);
            myrdmgev.kcoann(i)=myrdmgev.kcoann(j);
            myrdmgev.kcoann(j)=itmp;
          }
        }
      }
      *BEreq::rdmgev = myrdmgev;

      result=1; // everthing OK

    } // function RD_eff_annrate_SUSY_DSprep_func


    /*! \brief Get Weff directly from initialized DarkSUSY.
    */
    void RD_eff_annrate_SUSY(double(*&result)(double&))
    {
      using namespace Pipes::RD_eff_annrate_SUSY;

      // This is supposed to specify that BE=DS is used to determine Weff
      if (1==1) {
        result=BEreq::dsanwx.pointer();
      }
      // similar for other BEs...

    } // function RD_eff_annrate_SUSY


    /*! \brief Infer Weff from process catalogue.
    */
    // Carries pointer to Weff
    DEF_FUNKTRAIT(RD_EFF_ANNRATE_FROM_PROCESSCATALOG_TRAIT)
      void RD_eff_annrate_from_ProcessCatalog(double(*&result)(double&))
      {
        using namespace Pipes::RD_eff_annrate_from_ProcessCatalog;

        std::string DMid= Dep::DarkMatter_ID->singleID();
        TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);
        double mDM = *Param["mass"];
        const double GeV2tocm3s1 = 1.17e-17;

        auto Weff = Funk::zero("peff");
        auto peff = Funk::var("peff");
        auto s = 4*(peff*peff + mDM*mDM);

        for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
            it != annProc.channelList.end(); ++it)
        {
          Weff = Weff + 
            it->genRate->set("v", 2*peff/sqrt(mDM*mDM+peff*peff))*s/GeV2tocm3s1;
        }
        result = Weff->plain<RD_EFF_ANNRATE_FROM_PROCESSCATALOG_TRAIT>("peff");

      } // function RD_eff_annrate_from_ProcessCatalog


    /*! \brief General routine for calculation of relic density, using DarkSUSY
     *         Boltzmann solver
     *
     *  Requires:
     *  - RD_thresholds_resonances
     *  - RD_eff_annrate (Weff)
     */
    void RD_oh2_general(double &result)
    {
      using namespace Pipes::RD_oh2_general;

      // Retrieve ordered list of resonances and thresholds from
      // RD_thresholds_resonances.
      TH_resonances_thresholds myres = *Dep::RD_thresholds_resonances;
      double mwimp=myres.threshold_energy[0]/2;

      // HERE STARTS A GIANT IF STATEMENT WHICH 
      // SPECIFIES THAT THE FOLLOWING CODE USES BE=DS FOR THE RD CALCULATION
      if (1==1) {
        // What follows below is the standard accurate calculation of oh2 in DS
        // (fast=0 in dsrdomega).
        // fast=1 to be added...!? Further TODO: keep track of error flags

        // the following replaces dsrdcom -- which cannot be linked properly!?
        DS_RDPARS myrdpars;
        myrdpars.cosmin=0.996195;myrdpars.waccd=0.005;myrdpars.dpminr=1.0e-4;
        myrdpars.dpthr=5.0e-4;myrdpars.wdiffr=0.05;myrdpars.wdifft=0.02;
        myrdpars.hstep=0.01;myrdpars.hmin=1.0e-9;myrdpars.compeps=0.01;
        myrdpars.xinit=2.0;myrdpars.xfinal=200.0;myrdpars.umax=10.0;
        myrdpars.cfr=0.5;
        *BEreq::rdpars = myrdpars;
        DS_RDSWITCH myrdswitch;
        myrdswitch.thavint=1;myrdswitch.rdprt=0;
        *BEreq::rdswitch = myrdswitch;
        DS_RDLUN myrdlun;
        myrdlun.rdlulog=6;myrdlun.rdluerr=6;
        *BEreq::rdlun = myrdlun;
        DS_RDPADD myrdpadd;
        myrdpadd.pdivr=2.0;myrdpadd.dpres=0.5;myrdpadd.nlow=20;
        myrdpadd.nhigh=10;
        myrdpadd.npres=4;myrdpadd.nthup=4;myrdpadd.cthtest=0;myrdpadd.spltest=1;
        *BEreq::rdpadd = myrdpadd;

        DS_RDERRORS myrderrors;
        myrderrors.rderr=0;myrderrors.rdwar=0;myrderrors.rdinit=1234;
        *BEreq::rderrors = myrderrors;

        // write information about thresholds and resonances to DS common blocks
        // [this is the model-independent part of dsrdstart]
        // NB: the other variables in that block have already been set!!!
        DS_RDMGEV *myrdmgev = &(*BEreq::rdmgev); 
        myrdmgev->nres=0;

        if (!myres.resonances.empty()){
          myrdmgev->nres=myres.resonances.size();
          for (std::size_t i=1; i<=myres.resonances.size(); i++) {
            myrdmgev->rgev(i)=myres.resonances[i-1].energy;
            myrdmgev->rwid(i)=myres.resonances[i-1].width;
          }
        }
        // convert to momenta and write to DS common blocks
        DS_RDPTH myrdpth;
        // NB: DS does not count 2* WIMP rest mass as thr
        myrdpth.nth=myres.threshold_energy.size()-1;
        myrdpth.pth(0)=0; myrdpth.incth(0)=1;
        for (std::size_t i=1; i<myres.threshold_energy.size(); i++) {
          myrdpth.pth(i)=sqrt(pow(myres.threshold_energy[i],2)/4-pow(mwimp,2));
          myrdpth.incth(i)=1;
        }
        *BEreq::rdpth = myrdpth;

        // determine starting point for integration of Boltzmann eq and write
        // to DS common blocks
        DS_RDDOF *myrddof = &(*BEreq::rddof);
        double xstart=std::max(myrdpars.xinit,1.0001*mwimp/myrddof->tgev(1));
        double tstart=mwimp/xstart;
        int k; myrddof->khi=myrddof->nf; myrddof->klo=1;
        while (myrddof->khi > myrddof->klo+1){
          k=(myrddof->khi+myrddof->klo)/2;
          if (myrddof->tgev(k) < tstart){
            myrddof->khi=k;
          }
          else {
            myrddof->klo=k;
          }
        }


        // follow narrow res treatment for SM Higgs adopted in DS
        double widthSMHiggs=(*BEreq::widths).width(17);
        if (widthSMHiggs<0.1) 
          (*BEreq::widths).width(17)=0.1;

        // tabulate invariant rate
        BEreq::dsrdtab(byVal(*Dep::RD_eff_annrate),xstart);
        // determine integration limit
        BEreq::dsrdthlim();                                 

        // now solve Boltzmann eqn using tabulated rate
        double xend, yend, xf; int nfcn;
        BEreq::dsrdeqn(byVal(BEreq::dsrdwintp.pointer()),
            xstart,xend,yend,xf,nfcn);
        // using the untabulated rate gives the same result but is usually
        // slower:
        // BEreq::dsrdeqn(byVal(*Dep::RD_eff_annrate),xstart,xend,yend,xf,nfcn);

        // change SM Higgs width in DS back to standard value
        (*BEreq::widths).width(17)=widthSMHiggs;

        //capture NAN result and map it to zero RD
        if (yend!=yend){
          logger() << 
            "WARNING: DS returned NAN for relic density. Setting to zero..." 
            << std::endl;
          yend=0;
        }  

        result = 0.70365e8*myrddof->fh(myrddof->nf)*mwimp*yend;

      } // USING BE=DS

      logger() << "RD_oh2_general: oh2 =" << result << std::endl;

    } // function RD_oh2_general


    //////////////////////////////////////////////////////////////////////////
    //
    //             Simple relic density routines for cross-checks
    //                      (MicrOmegas vs DarkSUSY)
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Relic density directly from a call of initialized DarkSUSY.
    */
    void RD_oh2_DarkSUSY(double &result)
    {
      using namespace Pipes::RD_oh2_DarkSUSY;
      // Input
      int omtype;  // 0: no coann; 1: all coann
      int fast;  // 0: standard; 1: fast; 2: dirty

      // Set options via ini-file
      omtype = runOptions->getValueOrDef<int>(1, "omtype");
      fast = runOptions->getValueOrDef<int>(0, "fast");

      // Output
      double xf;  // freeze-out temperature
      int ierr;  // error flag
      int iwar;  // warming flag
      int nfc;  // number of fnct calls to effective annihilation cross section
      double oh2 = BEreq::dsrdomega(omtype,fast,xf,ierr,iwar,nfc);
      result = oh2;
      logger() << "RD_oh2_DarkSUSY: oh2 is " << oh2 << std::endl;
    }

    /*! \brief Relic density directly from a call of initialized MicrOmegas.
    */
    void RD_oh2_MicrOmegas(double &oh2)
    {
      using namespace Pipes::RD_oh2_MicrOmegas;
      // Input
      int fast;     // fast: 1, accurate: 0
      double Beps;  // Beps=1e-5 recommended, Beps=1 switches coannihilation off

      // Set options via ini-file
      fast = runOptions->getValueOrDef<int>(0, "fast");
      Beps = runOptions->getValueOrDef<double>(1e-5, "Beps");
      logger() << "Using fast: " << fast << " and Beps: " << Beps << endl;

      // Output
      double Xf;
      oh2 = BEreq::oh2(&Xf, byVal(fast), byVal(Beps));
      logger() << "X_f = " << Xf << " Omega h^2 = " << oh2 << endl;
    }
  }
}
