//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SUSY-HIT 1.4 backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Peter Athron
/// \author Csaba Balazs
/// \author Pat Scott
/// \date 2015 Jan-Apr
///
///  *********************************************

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SUSY_HIT
#endif
#define VERSION 1.4
#define SAFE_VERSION 1_4

// Let's go.
LOAD_LIBRARY

// Can't do anything non-MSSM with SUSY-HIT
BE_ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)

// Functions
BE_FUNCTION(sdecay, void, (const int&), "sdecay_", "sdecay")     // Converted SUSY-HIT main routine
BE_FUNCTION(unlikely, double, (), "s_hit_unlikely_", "unlikely") // Wrapper for 'unlikely' double 

// Variables
BE_VARIABLE(susyhitin_type, susyhitin, "susyhitin_", "cb_susyhitin")
BE_VARIABLE(sd_leshouches1_type, sd_leshouches1, "sd_leshouches1_", "cb_sd_leshouches1")
BE_VARIABLE(sd_leshouches2_type, sd_leshouches2, "sd_leshouches2_", "cb_sd_leshouches2")
BE_VARIABLE(widtha_hdec_type, widtha_hdec, "widtha_hdec_", "cb_widtha_hdec")
BE_VARIABLE(widthhl_hdec_type, widthhl_hdec, "widthhl_hdec_", "cb_widthhl_hdec")
BE_VARIABLE(widthhh_hdec_type, widthhh_hdec, "widthhh_hdec_", "cb_widthhh_hdec")
BE_VARIABLE(widthhc_hdec_type, widthhc_hdec, "widthhc_hdec_", "cb_widthhc_hdec")
BE_VARIABLE(wisusy_hdec_type, wisusy_hdec, "wisusy_hdec_", "cb_wisusy_hdec")
BE_VARIABLE(wisfer_hdec_type, wisfer_hdec, "wisfer_hdec_", "cb_wisfer_hdec")
BE_VARIABLE(hd_golddec_type, hd_golddec, "hd_golddec_", "cb_hd_golddec")
BE_VARIABLE(sd_char2body_type, sd_char2body, "sd_char2body_", "cb_sd_char2body")
BE_VARIABLE(sd_char2bodygrav_type, sd_char2bodygrav, "sd_char2bodygrav_", "cb_sd_char2bodygrav")
BE_VARIABLE(sd_char3body_type, sd_char3body, "sd_char3body_", "cb_sd_char3body")
BE_VARIABLE(sd_charwidth_type, sd_charwidth, "sd_charwidth_", "cb_sd_charwidth")
BE_VARIABLE(sd_neut2body_type, sd_neut2body, "sd_neut2body_", "cb_sd_neut2body")
BE_VARIABLE(sd_neut2bodygrav_type, sd_neut2bodygrav, "sd_neut2bodygrav_", "cb_sd_neut2bodygrav")
BE_VARIABLE(sd_neut3body_type, sd_neut3body, "sd_neut3body_", "cb_sd_neut3body")
BE_VARIABLE(sd_neutloop_type, sd_neutloop, "sd_neutloop_", "cb_sd_neutloop")
BE_VARIABLE(sd_neutwidth_type, sd_neutwidth, "sd_neutwidth_", "cb_sd_neutwidth")
BE_VARIABLE(sd_glui2body_type, sd_glui2body, "sd_glui2body_", "cb_sd_glui2body")
BE_VARIABLE(sd_glui3body_type, sd_glui3body, "sd_glui3body_", "cb_sd_glui3body")
BE_VARIABLE(sd_gluiloop_type, sd_gluiloop, "sd_gluiloop_", "cb_sd_gluiloop")
BE_VARIABLE(sd_gluiwidth_type, sd_gluiwidth, "sd_gluiwidth_", "cb_sd_gluiwidth")
BE_VARIABLE(sd_sup2body_type, sd_sup2body, "sd_sup2body_", "cb_sd_sup2body")
BE_VARIABLE(sd_supwidth_type, sd_supwidth, "sd_supwidth_", "cb_sd_supwidth")
BE_VARIABLE(sd_sdown2body_type, sd_sdown2body, "sd_sdown2body_", "cb_sd_sdown2body")
BE_VARIABLE(sd_sdownwidth_type, sd_sdownwidth, "sd_sdownwidth_", "cb_sd_sdownwidth")
BE_VARIABLE(sd_stop2body_type, sd_stop2body, "sd_stop2body_", "cb_sd_stop2body")
BE_VARIABLE(sd_stop3body_type, sd_stop3body, "sd_stop3body_", "cb_sd_stop3body")
BE_VARIABLE(sd_stoploop_type, sd_stoploop, "sd_stoploop_", "cb_sd_stoploop")
BE_VARIABLE(sd_stop4body_type, sd_stop4body, "sd_stop4body_", "cb_sd_stop4body")
BE_VARIABLE(sd_stopwidth_type, sd_stopwidth, "sd_stopwidth_", "cb_sd_stopwidth")
BE_VARIABLE(sd_sbot2body_type, sd_sbot2body, "sd_sbot2body_", "cb_sd_sbot2body")
BE_VARIABLE(sd_sbot3body_type, sd_sbot3body, "sd_sbot3body_", "cb_sd_sbot3body")
BE_VARIABLE(sd_sbotwidth_type, sd_sbotwidth, "sd_sbotwidth_", "cb_sd_sbotwidth")
BE_VARIABLE(sd_sel2body_type, sd_sel2body, "sd_sel2body_", "cb_sd_sel2body")
BE_VARIABLE(sd_selwidth_type, sd_selwidth, "sd_selwidth_", "cb_sd_selwidth")
BE_VARIABLE(sd_snel2body_type, sd_snel2body, "sd_snel2body_", "cb_sd_snel2body")
BE_VARIABLE(sd_snelwidth_type, sd_snelwidth, "sd_snelwidth_", "cb_sd_snelwidth")
BE_VARIABLE(sd_stau2body_type, sd_stau2body, "sd_stau2body_", "cb_sd_stau2body")
BE_VARIABLE(sd_stau2bodygrav_type, sd_stau2bodygrav, "sd_stau2bodygrav_", "cb_sd_stau2bodygrav")
BE_VARIABLE(sd_stauwidth_type, sd_stauwidth, "sd_stauwidth_", "cb_sd_stauwidth")
BE_VARIABLE(sd_sntau2body_type, sd_sntau2body, "sd_sntau2body_", "cb_sd_sntau2body")
BE_VARIABLE(sd_sntauwidth_type, sd_sntauwidth, "sd_sntauwidth_", "cb_sd_sntauwidth")
BE_VARIABLE(sd_top2body_type, sd_top2body, "sd_top2body_", "cb_sd_top2body")
BE_VARIABLE(sd_topwidth_type, sd_topwidth, "sd_topwidth_", "cb_sd_topwidth")

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(MSSM_spectrum, const SMplusUV*)

// Initialisation function (definition)
BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    // SUSY-HIT / HDecay inputs
    susyhitin->amsin = 0.19;                       // MSBAR(1)
    susyhitin->amcin = 1.4;                        // MC (pole or at what scale, in which scheme?)
    susyhitin->ammuonin = 0.105658389;             // MMUON (pole or at what scale, in which scheme?)
    susyhitin->alphin = 137.0359895;               // 1/ALPHA (at what scale, in which scheme?)
    susyhitin->gamwin = 2.08;                      // GAMW
    susyhitin->gamzin = 2.49;                      // GAMZ
    susyhitin->vusin = 0.2205;                     // VUS
    susyhitin->vcbin = 0.04;                       // VCB
    susyhitin->rvubin = 0.08;                      // VUB/VCB    

    // Zero all SLHA2 Q values
    sd_leshouches2->qvalue(1:22) = 0.0

    // SLHA2 block MODSEL
    sd_leshouches2->imod(1) = 1;
    sd_leshouches2->imod(2) = 1;                   // model; 1, 1 = SUGRA.  6, x!=0  => flavour violating MSSM(prolly?).  Must be true if calling sdecay(1) later.  Must add a check for this.

    // SLHA2 block SMINPUTS
    sd_leshouches2->smval(1:20) = 0;               // zeroing
    sd_leshouches2->smval(1) = 1.27934000E+02;     // alpha_em^-1(M_Z)^MSbar
    sd_leshouches2->smval(2) = 1.16639000E-05;     // G_F [GeV^-2]
    sd_leshouches2->smval(3) = 1.17200000E-01;     // alpha_S(M_Z)^MSbar
    sd_leshouches2->smval(4) = 9.11870000E+01;     // M_Z pole mass
    sd_leshouches2->smval(5) = 4.25000000E+00;     // mb(mb)^MSbar
    sd_leshouches2->smval(6) = 1.72500000E+02;     // mt pole mass
    sd_leshouches2->smval(7) = 1.77710000E+00;     // mtau pole mass

    // SLHA2 block EXTPAR
    sd_leshouches2->extval(0:100) = unlikely();    // indicate undefined
    sd_leshouches2->extval(0) = 4.65777483E+02;    // EWSB scale          

    // SLHA2 block MASS
    sd_leshouches2->massval(1:50) = 0.0            // zeroing
    sd_leshouches2->massval(1) = 8.04847331E+01    // W+
    sd_leshouches2->massval(2) = 1.09932416E+02    // h
    sd_leshouches2->massval(3) = 3.94935594E+02    // H
    sd_leshouches2->massval(4) = 3.94525488E+02    // A
    sd_leshouches2->massval(5) = 4.02953218E+02    // H+
    sd_leshouches2->massval(6) = 5.67618444E+02    // ~d_L
    sd_leshouches2->massval(7) = 5.45467940E+02    // ~d_R
    sd_leshouches2->massval(8) = 5.62111753E+02    // ~u_L
    sd_leshouches2->massval(9) = 5.45739159E+02    // ~u_R
    sd_leshouches2->massval(10) = 5.67618444E+02   // ~s_L
    sd_leshouches2->massval(11) = 5.45467940E+02   // ~s_R
    sd_leshouches2->massval(12) = 5.62111753E+02   // ~c_L
    sd_leshouches2->massval(13) = 5.45739159E+02   // ~c_R
    sd_leshouches2->massval(14) = 5.16777573E+02   // ~b_1
    sd_leshouches2->massval(15) = 5.46086561E+02   // ~b_2
    sd_leshouches2->massval(16) = 3.99615017E+02   // ~t_1
    sd_leshouches2->massval(17) = 5.86391641E+02   // ~t_2
    sd_leshouches2->massval(18) = 2.00774228E+02   // ~e_L
    sd_leshouches2->massval(19) = 1.42820157E+02   // ~e_R
    sd_leshouches2->massval(20) = 1.84853985E+02   // ~nu_eL
    sd_leshouches2->massval(21) = 2.00774228E+02   // ~mu_L
    sd_leshouches2->massval(22) = 1.42820157E+02   // ~mu_R
    sd_leshouches2->massval(23) = 1.84853985E+02   // ~nu_muL
    sd_leshouches2->massval(24) = 1.33342244E+02   // ~tau_1
    sd_leshouches2->massval(25) = 2.04795115E+02   // ~tau_2
    sd_leshouches2->massval(26) = 1.83966053E+02   // ~nu_tauL
    sd_leshouches2->massval(27) = 6.05955887E+02   // ~g
    sd_leshouches2->massval(28) = 9.71954610E+01   // ~chi_10
    sd_leshouches2->massval(29) = 1.80297146E+02   // ~chi_20
    sd_leshouches2->massval(30) =-3.58443995E+02   // ~chi_30
    sd_leshouches2->massval(31) = 3.77781490E+02   // ~chi_40
    sd_leshouches2->massval(32) = 1.79671182E+02   // ~chi_1+
    sd_leshouches2->massval(33) = 3.77983105E+02   // ~chi_2+
    sd_leshouches2->massval(34) = 4.87877839E+00   // b pole mass calculated from mb(mb)_MSbar
    sd_leshouches2->massval(35) = unlikely();      // ~G

    // SLHA2 block NMIX

    // SLHA2 block UMIX

    // SLHA2 block VMIX

    // SLHA2 block STOPMIX

    // SLHA2 block SBOTMIX

    // SLHA2 block STAUMIX
   
    // SLHA2 block ALPHA
    
    // SLHA2 block HMIX
    sd_leshouches2->qvalue(1) = 4.65777483E+02;    // Q(GeV)
    sd_leshouches2->hmixval(1:10) = unlikely();    // indicate undefined
    sd_leshouches2->hmixval(1) = 3.52164860E+02;   // mu(Q)
    sd_leshouches2->hmixval(2) = 9.75041102E+00;   // tanbeta(Q)
    sd_leshouches2->hmixval(3) = 2.45014641E+02;   // vev(Q)
    sd_leshouches2->hmixval(4) = 1.62371513E+05;   // MA^2(Q)
    
    // SLHA2 block GAUGE
    sd_leshouches2->qvalue(2) = 4.65777483E+02;    // Q(GeV)
    sd_leshouches2->gaugeval(1) = 3.60982135E-01   // gprime(Q) DRbar
    sd_leshouches2->gaugeval(2) = 6.46351672E-01   // g(Q) DRbar
    sd_leshouches2->gaugeval(3) = 1.09632112E+00   // g_3(Q) DRbar
 
    // SLHA2 block MSOFT
    sd_leshouches2->qvalue(2) = 4.65777483E+02;    // Q(GeV)
    sd_leshouches2->msoftval(1:100) = unlikely();  // indicate undefined
    sd_leshouches2->msoftval(1) = 1.01486794E+02   // M_1
    sd_leshouches2->msoftval(2) = 1.91565439E+02  // M_2
    sd_leshouches2->msoftval(3) = 5.86284400E+02  // M_3
    sd_leshouches2->msoftval(21) = 3.23226904E+04 // M^2_Hd
    sd_leshouches2->msoftval(22) =-1.24993993E+05 // M^2_Hu
    sd_leshouches2->msoftval(31) = 1.95443359E+02 // M_eL
    sd_leshouches2->msoftval(32) = 1.95443359E+02 // M_muL
    sd_leshouches2->msoftval(33) = 1.94603750E+02 // M_tauL
    sd_leshouches2->msoftval(34) = 1.35950985E+02 // M_eR
    sd_leshouches2->msoftval(35) = 1.35950985E+02 // M_muR
    sd_leshouches2->msoftval(36) = 1.33480599E+02 // M_tauR
    sd_leshouches2->msoftval(41) = 5.45553618E+02 // M_q1L
    sd_leshouches2->msoftval(42) = 5.45553618E+02 // M_q2L
    sd_leshouches2->msoftval(43) = 4.97578078E+02 // M_q3L
    sd_leshouches2->msoftval(44) = 5.27538927E+02 // M_uR
    sd_leshouches2->msoftval(45) = 5.27538927E+02 // M_cR
    sd_leshouches2->msoftval(46) = 4.23429537E+02 // M_tR
    sd_leshouches2->msoftval(47) = 5.25444117E+02 // M_dR
    sd_leshouches2->msoftval(48) = 5.25444117E+02 // M_sR
    sd_leshouches2->msoftval(49) = 5.22139557E+02 // M_bR








c -- i_sd_mbmb = 0 ensures that the routine is called which calulates --
c -- the mbpole mass from mb(mb)_MSbar = smval(5)                 --
      i_sd_mbmb = 0

      check(1:30) = 0
          
	  if(ifavvio.eq.1) then
      check(16)=1
	    check(17)=1
      check(18)=1
      check(9)=1
      check(10)=1
      check(11)=1
      check(12)=1
    else
      do i=23, 30, 1
        check(i)=1
      end do
    endif

    loop
         check_final = 1
         do i1=1,30,1
            check_final = check_final*check(i1)
         end do
         if(check_final.eq.1) then
            return
         endif

        


 


 







            elseif(line2(1:2).eq.'AU') then
               backspace ninlha
               read(ninlha,'(11x,E16.8)') Qval
               qvalue(4) = Qval
               call SD_READ_AU(ninlha,auval,done)
               if (done) then
                  check(16) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in AU'
               endif

            elseif(line2(1:2).eq.'AD') then
               backspace ninlha
               read(ninlha,'(11x,E16.8)') Qval
               qvalue(5) = Qval
               call SD_READ_AD(ninlha,adval,done)
               if (done) then
                  check(17) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in AD'
               endif

            elseif(line2(1:2).eq.'AE') then
               backspace ninlha
               read(ninlha,'(11x,E16.8)') Qval
               qvalue(6) = Qval
               call SD_READ_AE(ninlha,aeval,done)
               if (done) then
                  check(18) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in AE'
               endif

            elseif(line2(1:2).eq.'YU') then
               backspace ninlha
               read(ninlha,'(11x,E16.8)') Qval
               qvalue(7) = Qval
               call SD_READ_YU(ninlha,yuval,done)
               if (done) then
                  check(19) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in YU'
               endif

            elseif(line2(1:2).eq.'YD') then
               backspace ninlha
               read(ninlha,'(11x,E16.8)') Qval
               qvalue(8) = Qval
               call SD_READ_YD(ninlha,ydval,done)
               if (done) then
                  check(20) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in YD'
               endif

            elseif(line2(1:2).eq.'YE') then
               backspace ninlha
               read(ninlha,'(11x,E16.8)') Qval
               qvalue(9) = Qval
               call SD_READ_YE(ninlha,yeval,done)
               if (done) then
                  check(21) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in YE'
               endif

            elseif(line2(1:6).eq.'SPINFO') then
               call SD_READ_SPINFO(ninlha,spinfo1,spinfo2,done)
               if (done) then
                  check(22) = 1
                  goto 1111
               else
                  print*,'SD_read_leshouches: problem in SPINFO'
               endif
           	elseif(line2(1:4).eq.'MSQ2') then
               call readqval(ninlha, qval)
               qvalue(11)=qval
               call SLHA_READ_MSQ2(ninlha,msq2,done)
               
               if (done) then
                  check(23) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in MSQ2'
               endif
        		elseif(line2(1:4).eq.'MSD2') then
               call readqval(ninlha, qval)
               qvalue(10)=qval
               call SLHA_READ_MSD2(ninlha,msd2,done)
               if (done) then
                  check(24) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in MSD2'
               endif
        		elseif(line2(1:4).eq.'MSU2') then
               call readqval(ninlha, qval)
               qvalue(11)=qval
               call SLHA_READ_MSU2(ninlha,msu2,done)
               if (done) then
                  check(25) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in MSU2'
               endif
        		elseif(line2(1:2).eq.'TD') then
               call readqval(ninlha, qval)
               qvalue(12)=qval
               call SLHA_READ_TD(ninlha,td,done)
               if (done) then
                  check(26) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in TD'
               endif
        		elseif(line2(1:2).eq.'TU') then
               call readqval(ninlha, qval)
               qvalue(13)=qval
               call SLHA_READ_TU(ninlha,tu,done)
               if (done) then
                  check(27) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in TU'
               endif
        		elseif(line2(1:6).eq.'USQMIX') then
               call readqval(ninlha, qval)
               qvalue(14)=qval
               
               call SLHA_READ_USQMIX(ninlha,usqmix,done)
               
	       
               if (done) then
                  check(22) = 1
                 
                  goto 1111
               else
                print*,'SLHA_read_leshouches: problem in USQMIX'
               endif
                 
   	      	elseif(line2(1:6).eq.'DSQMIX') then
               call readqval(ninlha, qval)
               qvalue(14)=qval
               call SLHA_READ_DSQMIX(ninlha,dsqmix,done)
               if (done) then
                  check(28) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in DSQMIX'
               endif
     	      elseif(line2(1:6).eq.'SELMIX') then
               call readqval(ninlha, qval)
               qvalue(22)=qval
               call SLHA_READ_SELMIX(ninlha,selmix,done)
	       
               if (done) then
                  check(30) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in SELMIX'
               endif
			
           	elseif(line2(1:5).eq.'VCKM ') then             
               call readqval(ninlha, qval)
               qvalue(21)=qval
               
               call SLHA_READ_VCKM(ninlha,vckm,done)
               
               if (done) then
                  check(29) = 1
                 
                  goto 1111
               else
                  print*,'SLHA_read_leshouches: problem in VCKM'
               endif













c -------------------------------------------------------------------- c

      subroutine SD_READ_NMIX(ninlha,nmixval,done)

      implicit double precision (a-h,m,o-z)
      double precision nmixval(4,4)
      character line1*1
      logical done

      done= .false.

      do i=1,4,1
         do j=1,4,1
            nmixval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the neutralino mixing matrix --
            if(idum1.eq.1.and.idum2.eq.1) then
               nmixval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               nmixval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               nmixval(1,3) = val
            elseif(idum1.eq.1.and.idum2.eq.4) then
               nmixval(1,4) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               nmixval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               nmixval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               nmixval(2,3) = val
            elseif(idum1.eq.2.and.idum2.eq.4) then
               nmixval(2,4) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               nmixval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               nmixval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               nmixval(3,3) = val
            elseif(idum1.eq.3.and.idum2.eq.4) then
               nmixval(3,4) = val
            elseif(idum1.eq.4.and.idum2.eq.1) then
               nmixval(4,1) = val
            elseif(idum1.eq.4.and.idum2.eq.2) then
               nmixval(4,2) = val
            elseif(idum1.eq.4.and.idum2.eq.3) then
               nmixval(4,3) = val
            elseif(idum1.eq.4.and.idum2.eq.4) then
               nmixval(4,4) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_UMIX(ninlha,umixval,done)

      implicit double precision (a-h,m,o-z)
      double precision umixval(2,2)
      character line1*1
      logical done

      done= .false.

      do i=1,2,1
         do j=1,2,1
            umixval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the chargino mixing matrix U --
            if(idum1.eq.1.and.idum2.eq.1) then
               umixval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               umixval(1,2) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               umixval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               umixval(2,2) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_VMIX(ninlha,vmixval,done)

      implicit double precision (a-h,m,o-z)
      double precision vmixval(2,2)
      character line1*1
      logical done

      done= .false.

      do i=1,2,1
         do j=1,2,1
            vmixval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the chargino mixing matrix V --
            if(idum1.eq.1.and.idum2.eq.1) then
               vmixval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               vmixval(1,2) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               vmixval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               vmixval(2,2) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_STOPMIX(ninlha,stopmixval,done)

      implicit double precision (a-h,m,o-z)
      double precision stopmixval(2,2)
      character line1*1
      logical done

      done= .false.

      do i=1,2,1
         do j=1,2,1
            stopmixval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the stop mixing matrix: m(1,1) = cos(theta),     --
c -- m(1,2) = sin(theta), m(2,1) = -sin(theta), m(2,2) = cos(theta). --
            if(idum1.eq.1.and.idum2.eq.1) then
               stopmixval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               stopmixval(1,2) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               stopmixval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               stopmixval(2,2) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_SBOTMIX(ninlha,sbotmixval,done)

      implicit double precision (a-h,m,o-z)
      double precision sbotmixval(2,2)
      character line1*1
      logical done

      done= .false.

      do i=1,2,1
         do j=1,2,1
            sbotmixval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the sbottom mixing matrix: m(1,1) = cos(theta),  --
c -- m(1,2) = sin(theta), m(2,1) = -sin(theta), m(2,2) = cos(theta). --
            if(idum1.eq.1.and.idum2.eq.1) then
               sbotmixval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               sbotmixval(1,2) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               sbotmixval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               sbotmixval(2,2) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_STAUMIX(ninlha,staumixval,done)

      implicit double precision (a-h,m,o-z)
      double precision staumixval(2,2)
      character line1*1
      logical done

      done= .false.

      do i=1,2,1
         do j=1,2,1
            staumixval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the stau mixing matrix: m(1,1) = cos(theta),     --
c -- m(1,2) = sin(theta), m(2,1) = -sin(theta), m(2,2) = cos(theta). --
            if(idum1.eq.1.and.idum2.eq.1) then
               staumixval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               staumixval(1,2) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               staumixval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               staumixval(2,2) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_ALPHA(ninlha,alphaval,done)

      implicit double precision (a-h,m,o-z)
      character line1*1
      logical done

      done= .false.

      alphaval = 0.D0

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) val

c -- value for the effective Higgs mixing parameter alpha --
c -- ! The given value is the 'best choice' solution. Depending on  ! --
c -- ! the spectrum calcluator it can be an on-shell parameter or   ! --
c -- ! can be given in the DR_bar definition at a certain           ! --
c -- ! characteristic scale etc. For details on the specific        ! --
c -- ! prescriptions see the manual of the particular spectrum      ! --
c -- ! calculator.                                                  ! --
            alphaval = val
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c


c -------------------------------------------------------------------- c


c -------------------------------------------------------------------- c

      subroutine SD_READ_AU(ninlha,auval,done)

      implicit double precision (a-h,m,o-z)
      double precision auval(3,3)
      character line1*1
      logical done

      done= .false.

      unlikely = -123456789D0

      do i=1,3,1
         do j=1,3,1
            auval(i,j) = unlikely
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for AU(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               auval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               auval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               auval(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               auval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               auval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               auval(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               auval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               auval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               auval(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_AD(ninlha,adval,done)

      implicit double precision (a-h,m,o-z)
      double precision adval(3,3)
      character line1*1
      logical done

      done= .false.

      unlikely = -123456789D0

      do i=1,3,1
         do j=1,3,1
            adval(i,j) = unlikely
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for AD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               adval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               adval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               adval(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               adval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               adval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               adval(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               adval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               adval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               adval(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_AE(ninlha,aeval,done)

      implicit double precision (a-h,m,o-z)
      double precision aeval(3,3)
      character line1*1
      logical done

      done= .false.

      unlikely = -123456789D0

      do i=1,3,1
         do j=1,3,1
            aeval(i,j) = unlikely
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for AE(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               aeval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               aeval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               aeval(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               aeval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               aeval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               aeval(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               aeval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               aeval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               aeval(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_YU(ninlha,yuval,done)

      implicit double precision (a-h,m,o-z)
      double precision yuval(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            yuval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YU(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               yuval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               yuval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               yuval(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               yuval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               yuval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               yuval(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               yuval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               yuval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               yuval(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_YD(ninlha,ydval,done)

      implicit double precision (a-h,m,o-z)
      double precision ydval(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            ydval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               ydval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               ydval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               ydval(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               ydval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               ydval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               ydval(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               ydval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               ydval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               ydval(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_YE(ninlha,yeval,done)

      implicit double precision (a-h,m,o-z)
      double precision yeval(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            yeval(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YE(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               yeval(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               yeval(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               yeval(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               yeval(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               yeval(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               yeval(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               yeval(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               yeval(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               yeval(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end

c -------------------------------------------------------------------- c

      subroutine SD_READ_SPINFO(ninlha,spinfo1,spinfo2,done)

      implicit double precision (a-h,m,o-z)
      character line1*1,line2*100,spinfo1*100,spinfo2*100
      logical done

      done= .false.

      spinfo1 = ' '
      spinfo2 = ' '

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,'(1x,i5,3x,a100)') idum,line2

c -- the name of the spectrum calculator --
            if(idum.eq.1) then
               spinfo1 = line2

c -- the version number of the spectrum calculator --
            elseif(idum.eq.2) then
               spinfo2 = line2
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SD_read_leshouches: end of file'
      done = .true.

      end
c---- ramona added 6/6/13
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_MSQ2(ninlha,msq2,done)

      implicit double precision (a-h,m,o-z)
      double precision msq2(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            msq2(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               msq2(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               msq2(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               msq2(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               msq2(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               msq2(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               msq2(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               msq2(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               msq2(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               msq2(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_MSD2(ninlha,msD2,done)

      implicit double precision (a-h,m,o-z)
      double precision msd2(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            msd2(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               msd2(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               msd2(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               msd2(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               msd2(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               msd2(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               msd2(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               msd2(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               msd2(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               msd2(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_MSU2(ninlha,msu2,done)

      implicit double precision (a-h,m,o-z)
      double precision msu2(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            msu2(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               msu2(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               msu2(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               msu2(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               msu2(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               msu2(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               msu2(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               msu2(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               msu2(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               msu2(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end


c -------------------------------------------------------------------- c

      subroutine SLHA_READ_TD(ninlha,td,done)

      implicit double precision (a-h,m,o-z)
      double precision td(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            td(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               td(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               td(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               td(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               td(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               td(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               td(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               td(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               td(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               td(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_TU(ninlha,tu,done)

      implicit double precision (a-h,m,o-z)
      double precision tu(3,3)
      character line1*1
      logical done

      done= .false.

      do i=1,3,1
         do j=1,3,1
            tu(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val
	    
c -- The following parameters are the DR_bar running parameters at --
c -- the scale Q.                                                  --
c -- values for YD(i,j) at the scale Q --
            if(idum1.eq.1.and.idum2.eq.1) then
               tu(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               tu(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               tu(1,3) = val
            elseif(idum1.eq.2.and.idum2.eq.1) then
               tu(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               tu(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               tu(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               tu(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               tu(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               tu(3,3) = val
            endif

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_USQMIX(ninlha,usqmix,done)

      implicit double precision (a-h,m,o-z)
      double precision usqmix(6,6)
      character line1*1
      logical done

      done= .false.

      do i=1,6,1
         do j=1,6,1
            usqmix(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val
	    
 	    usqmix(idum1, idum2)=val
            


         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_DSQMIX(ninlha,dsqmix,done)

      implicit double precision (a-h,m,o-z)
      double precision dsqmix(6,6)
      character line1*1
      logical done

      done= .false.

      do i=1,6,1
         do j=1,6,1
            dsqmix(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val
!             if((idum1.le.6).and.(idum2.le.6))
 	    dsqmix(idum1, idum2)=val
!             endif
	   

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c -------------------------------------------------------------------- c

      subroutine SLHA_READ_SELMIX(ninlha,selmix,done)

      implicit double precision (a-h,m,o-z)
      double precision selmix(6,6)
      character line1*1
      logical done

      done= .false.

      do i=1,6,1
         do j=1,6,1
            selmix(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val
!             if((idum1.le.6).and.(idum2.le.6))
 	    selmix(idum1, idum2)=val
!             endif
	   

         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c---- ramona added 20/6/13
c--- reading the vckm blog at scale q
CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
      subroutine SLHA_READ_vckm(ninlha,vckm,done)
      implicit double precision (a-h,m,o-z)
      double precision vckm(3,3)
      character line1*1
      logical done
      do i=1,3,1
         do j=1,3,1
            vckm(i,j) = 0.D0
         end do
      end do

      do i=1,200,1
         read(ninlha,'(a1)',end=9900) line1

c -- decide what it is and read the line if anything of interest --
         if (line1.eq.' ') then
            backspace ninlha
            read(ninlha,*) idum1,idum2,val

c -- the values for the neutralino mixing matrix --
            if(idum1.eq.1.and.idum2.eq.1) then
               vckm(1,1) = val
            elseif(idum1.eq.1.and.idum2.eq.2) then
               vckm(1,2) = val
            elseif(idum1.eq.1.and.idum2.eq.3) then
               vckm(1,3) = val
              elseif(idum1.eq.2.and.idum2.eq.1) then
               vckm(2,1) = val
            elseif(idum1.eq.2.and.idum2.eq.2) then
               vckm(2,2) = val
            elseif(idum1.eq.2.and.idum2.eq.3) then
               vckm(2,3) = val
            elseif(idum1.eq.3.and.idum2.eq.1) then
               vckm(3,1) = val
            elseif(idum1.eq.3.and.idum2.eq.2) then
               vckm(3,2) = val
            elseif(idum1.eq.3.and.idum2.eq.3) then
               vckm(3,3) = val
            endif
            
         elseif(line1.eq.'#') then
            goto 1111
         elseif(line1.eq.'b'.or.line1.eq.'B'.or.line1.eq.'d'.or.line1.eq
     ..'D') then
            backspace ninlha
            done = .true.
            return
         endif

 1111    continue
      end do

 9900 print*,'SLHA_read_leshouches: end of file'
      done = .true.

      end
c---- end ramona added
c--------------------------------------------------------------------
c--------------------------------------------------------------------
      subroutine readQval(ninlha,Qval)
      character buff*100
      integer ninlha,i
      real*8 Qval
      backspace ninlha      
      read(ninlha,fmt='(A100)') buff
      do i=1,100 
       if(buff(i:i).eq.'=') then 
            read(buff(i+1:100),*) Qval
            return 
      endif
      enddo
      end







    sdecay(0); // Skip FV light stop decays
  }
  scan_level = false;
}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

