/* Frontend for micrOMEGAs backend
 *
 * \author Jonathan Cornell
 * \date 2013-10-11
 *
 */

#define LIBPATH      "micromegas.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME micromegas
#endif
#define VERSION 0.1
#define SAFE_VERSION 0_1

LOAD_LIBRARY

BE_FUNCTION(assignVal, int, (char*,double),"assignVal","assignVal")
BE_FUNCTION(vSigma, double, (double, double, int), "vSigma","vSigma")
BE_FUNCTION(darkOmega, double, (double*, int, double), "darkOmega", "oh2")
BE_FUNCTION(suspectSUGRA, int, (double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double), "suspectSUGRA", "suspectSUGRA")
BE_FUNCTION(lesHinput, int, (char*), "lesHinput", "lesHinput")
BE_FUNCTION(sortOddParticles, int, (char*), "sortOddParticles","mass_spectrum")

BE_INI_DEPENDENCY(MSSMspectrum, eaSLHA)

BE_INI_FUNCTION
{
    using namespace SLHAea;

    eaSLHA mySLHA;

    mySLHA = *Dep::MSSMspectrum;
    ofstream ofs("DarkBit_temp.slha");
    ofs << mySLHA;
    ofs.close();

    char * filename = "DarkBit_temp.slha";

    // Initialize micromegas mass spectrum from SLHA
    char cdmName[10];
    int err;

    // An attempt to avoid writing SLHA file to disk
    // It doesn't work yet, so it is commented out
    // Error catching needs to be added also, along with some way of dealing
    // with running scales.

/*      //Higgs Sector Parameters
    //Scale = 91 GeV
    err = BEreq::assignVal("MH3", to<double>(mySLHA.at("MASS").at(36).at(1)));
    err = BEreq::assignVal("mu", to<double>(mySLHA.at("HMIX").at(1).at(1)));

    //Soft SUSY Breaking Parameters
    //Scale = 91 GeV
    BEreq::assignVal("MG1",to<double>(mySLHA.at("MSOFT").at(1).at(1)));
    BEreq::assignVal("MG2",to<double>(mySLHA.at("MSOFT").at(2).at(1)));
    BEreq::assignVal("MG3",to<double>(mySLHA.at("MSOFT").at(3).at(1)));
    BEreq::assignVal("Ml1",to<double>(mySLHA.at("MSOFT").at(31).at(1)));
    BEreq::assignVal("Ml2",to<double>(mySLHA.at("MSOFT").at(32).at(1)));
    BEreq::assignVal("Ml3",to<double>(mySLHA.at("MSOFT").at(33).at(1)));
    BEreq::assignVal("Mr1",to<double>(mySLHA.at("MSOFT").at(34).at(1)));
    BEreq::assignVal("Mr2",to<double>(mySLHA.at("MSOFT").at(35).at(1)));
    BEreq::assignVal("Mr3",to<double>(mySLHA.at("MSOFT").at(36).at(1)));
    BEreq::assignVal("Mq1",to<double>(mySLHA.at("MSOFT").at(41).at(1)));
    BEreq::assignVal("Mq2",to<double>(mySLHA.at("MSOFT").at(42).at(1)));
    BEreq::assignVal("Mq3",to<double>(mySLHA.at("MSOFT").at(43).at(1)));
    BEreq::assignVal("Mu1",to<double>(mySLHA.at("MSOFT").at(44).at(1)));
    BEreq::assignVal("Mu2",to<double>(mySLHA.at("MSOFT").at(45).at(1)));
    BEreq::assignVal("Mu3",to<double>(mySLHA.at("MSOFT").at(46).at(1)));
    BEreq::assignVal("Md1",to<double>(mySLHA.at("MSOFT").at(47).at(1)));
    BEreq::assignVal("Md2",to<double>(mySLHA.at("MSOFT").at(48).at(1)));
    BEreq::assignVal("Md3",to<double>(mySLHA.at("MSOFT").at(49).at(1)));

    //Trilinear Couplings
    //Scale = 91 GeV
    BEreq::assignVal("At", to<double>(mySLHA.at("Au").at(3, 3).at(2)));
    BEreq::assignVal("Ab", to<double>(mySLHA.at("Ad").at(3, 3).at(2)));
    BEreq::assignVal("Al", to<double>(mySLHA.at("Ae").at(3, 3).at(2)));
    try {
        BEreq::assignVal("Am", to<double>(mySLHA.at("Ae").at(2, 2).at(2)));
    }
    catch (out_of_range &error){
  	  BEreq::assignVal("Am", to<double>(mySLHA.at("Ae").at(3, 3).at(2)));
    }
    try{
        BEreq::assignVal("Ad", to<double>(mySLHA.at("Ad").at(2, 2).at(2)));
    }
    catch (out_of_range &error){
  	  BEreq::assignVal("Ad", to<double>(mySLHA.at("Ad").at(3, 3).at(2)));
    }
    try{
        BEreq::assignVal("Au", to<double>(mySLHA.at("Au").at(2, 2).at(2)));
    }
    catch (out_of_range &error){
  	  BEreq::assignVal("Au", to<double>(mySLHA.at("Au").at(3, 3).at(2)));
    }

    //Standard Model Parameters
    BEreq::assignVal("alfSMZ",to<double>(mySLHA.at("SMINPUTS").at(3).at(1)));
    BEreq::assignVal("MbMb",  to<double>(mySLHA.at("SMINPUTS").at(5).at(1)));
    BEreq::assignVal("Mtp",   to<double>(mySLHA.at("SMINPUTS").at(6).at(1)));
    BEreq::assignVal("Ml",    to<double>(mySLHA.at("SMINPUTS").at(7).at(1)));

    //Masses
    //Scale = MZ?
    BEreq::assignVal("Mh",   to<double>(mySLHA.at("MASS").at(25).at(1)));
    BEreq::assignVal("MHH",  to<double>(mySLHA.at("MASS").at(35).at(1)));
    BEreq::assignVal("MHc",  to<double>(mySLHA.at("MASS").at(37).at(1)));
    BEreq::assignVal("MNE1", to<double>(mySLHA.at("MASS").at(1000022).at(1)));
    BEreq::assignVal("MNE2", to<double>(mySLHA.at("MASS").at(1000023).at(1)));
    BEreq::assignVal("MNE3", to<double>(mySLHA.at("MASS").at(1000025).at(1)));
    BEreq::assignVal("MNE4", to<double>(mySLHA.at("MASS").at(1000035).at(1)));
    BEreq::assignVal("MC1",  to<double>(mySLHA.at("MASS").at(1000024).at(1)));
    BEreq::assignVal("MC2",  to<double>(mySLHA.at("MASS").at(1000037).at(1)));
    BEreq::assignVal("MSG",  to<double>(mySLHA.at("MASS").at(1000021).at(1)));
    BEreq::assignVal("MSne", to<double>(mySLHA.at("MASS").at(1000012).at(1)));
    BEreq::assignVal("MSnm", to<double>(mySLHA.at("MASS").at(1000014).at(1)));
    BEreq::assignVal("MSnl", to<double>(mySLHA.at("MASS").at(1000016).at(1)));
    BEreq::assignVal("MSeL", to<double>(mySLHA.at("MASS").at(1000011).at(1)));
    BEreq::assignVal("MSeR", to<double>(mySLHA.at("MASS").at(2000011).at(1)));
    BEreq::assignVal("MSmL", to<double>(mySLHA.at("MASS").at(1000013).at(1)));
    BEreq::assignVal("MSmR", to<double>(mySLHA.at("MASS").at(2000013).at(1)));
    BEreq::assignVal("MSl1", to<double>(mySLHA.at("MASS").at(1000015).at(1)));
    BEreq::assignVal("MSl2", to<double>(mySLHA.at("MASS").at(2000015).at(1)));
    BEreq::assignVal("MSdL", to<double>(mySLHA.at("MASS").at(1000001).at(1)));
    BEreq::assignVal("MSdR", to<double>(mySLHA.at("MASS").at(2000001).at(1)));
    BEreq::assignVal("MSuL", to<double>(mySLHA.at("MASS").at(1000002).at(1)));
    BEreq::assignVal("MSuR", to<double>(mySLHA.at("MASS").at(2000002).at(1)));
    BEreq::assignVal("MSsL", to<double>(mySLHA.at("MASS").at(1000003).at(1)));
    BEreq::assignVal("MSsR", to<double>(mySLHA.at("MASS").at(2000003).at(1)));
    BEreq::assignVal("MScL", to<double>(mySLHA.at("MASS").at(1000004).at(1)));
    BEreq::assignVal("MScR", to<double>(mySLHA.at("MASS").at(2000004).at(1)));
    BEreq::assignVal("MSb1", to<double>(mySLHA.at("MASS").at(1000005).at(1)));
    BEreq::assignVal("MSb2", to<double>(mySLHA.at("MASS").at(2000005).at(1)));
    BEreq::assignVal("MSt1", to<double>(mySLHA.at("MASS").at(1000006).at(1)));
    BEreq::assignVal("MSt2", to<double>(mySLHA.at("MASS").at(2000006).at(1)));

    //Mixing matrices
    //Scale = QSUSY = Sqrt[MSt1*MSt2]
    BEreq::assignVal("Zn11", to<double>(mySLHA.at("NMIX").at(1, 1).at(2)));
    BEreq::assignVal("Zn12", to<double>(mySLHA.at("NMIX").at(1, 2).at(2)));
    BEreq::assignVal("Zn13", to<double>(mySLHA.at("NMIX").at(1, 3).at(2)));
    BEreq::assignVal("Zn14", to<double>(mySLHA.at("NMIX").at(1, 4).at(2)));
    BEreq::assignVal("Zn21", to<double>(mySLHA.at("NMIX").at(2, 1).at(2)));
    BEreq::assignVal("Zn22", to<double>(mySLHA.at("NMIX").at(2, 2).at(2)));
    BEreq::assignVal("Zn23", to<double>(mySLHA.at("NMIX").at(2, 3).at(2)));
    BEreq::assignVal("Zn24", to<double>(mySLHA.at("NMIX").at(2, 4).at(2)));
    BEreq::assignVal("Zn31", to<double>(mySLHA.at("NMIX").at(3, 1).at(2)));
    BEreq::assignVal("Zn32", to<double>(mySLHA.at("NMIX").at(3, 2).at(2)));
    BEreq::assignVal("Zn33", to<double>(mySLHA.at("NMIX").at(3, 3).at(2)));
    BEreq::assignVal("Zn34", to<double>(mySLHA.at("NMIX").at(3, 4).at(2)));
    BEreq::assignVal("Zn41", to<double>(mySLHA.at("NMIX").at(4, 1).at(2)));
    BEreq::assignVal("Zn42", to<double>(mySLHA.at("NMIX").at(4, 2).at(2)));
    BEreq::assignVal("Zn43", to<double>(mySLHA.at("NMIX").at(4, 3).at(2)));
    BEreq::assignVal("Zn44", to<double>(mySLHA.at("NMIX").at(4, 4).at(2)));
    BEreq::assignVal("Zu11", to<double>(mySLHA.at("UMIX").at(1, 1).at(2)));
    BEreq::assignVal("Zu12", to<double>(mySLHA.at("UMIX").at(1, 2).at(2)));
    BEreq::assignVal("Zu21", to<double>(mySLHA.at("UMIX").at(2, 1).at(2)));
    BEreq::assignVal("Zu22", to<double>(mySLHA.at("UMIX").at(2, 2).at(2)));
    BEreq::assignVal("Zv11", to<double>(mySLHA.at("VMIX").at(1, 1).at(2)));
    BEreq::assignVal("Zv12", to<double>(mySLHA.at("VMIX").at(1, 2).at(2)));
    BEreq::assignVal("Zv21", to<double>(mySLHA.at("VMIX").at(2, 1).at(2)));
    BEreq::assignVal("Zv22", to<double>(mySLHA.at("VMIX").at(2, 2).at(2)));
    BEreq::assignVal("Zt11", to<double>(mySLHA.at("STOPMIX").at(1, 1).at(2)));
    BEreq::assignVal("Zt12", to<double>(mySLHA.at("STOPMIX").at(1, 2).at(2)));
    BEreq::assignVal("Zt21", to<double>(mySLHA.at("STOPMIX").at(2, 1).at(2)));
    BEreq::assignVal("Zt22", to<double>(mySLHA.at("STOPMIX").at(2, 2).at(2)));
    BEreq::assignVal("Zb11", to<double>(mySLHA.at("SBOTMIX").at(1, 1).at(2)));
    BEreq::assignVal("Zb12", to<double>(mySLHA.at("SBOTMIX").at(1, 2).at(2)));
    BEreq::assignVal("Zb21", to<double>(mySLHA.at("SBOTMIX").at(2, 1).at(2)));
    BEreq::assignVal("Zb22", to<double>(mySLHA.at("SBOTMIX").at(2, 2).at(2)));
    BEreq::assignVal("Zl11", to<double>(mySLHA.at("STAUMIX").at(1, 1).at(2)));
    BEreq::assignVal("Zl12", to<double>(mySLHA.at("STAUMIX").at(1, 2).at(2)));
    BEreq::assignVal("Zl21", to<double>(mySLHA.at("STAUMIX").at(2, 1).at(2)));
    BEreq::assignVal("Zl22", to<double>(mySLHA.at("STAUMIX").at(2, 2).at(2)));

    BEreq::assignVal("alpha",to<double>(mySLHA.at("ALPHA").back().front()));
    //Scale = 0?
    BEreq::assignVal("tB",   to<double>(mySLHA.at("HMIX").at(2).at(1))); */


    // TODO: Add error checking
    err = lesHinput(byVal(filename));
    err = sortOddParticles(byVal(cdmName));
}
DONE

#undef LIBPATH
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION

