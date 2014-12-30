/// This file contains a wrapper classes for softsusy designed top
/// ensure that all methods for MSSM models are named the same.  This
/// in turn allows us to use a single MSSM class which contains the
/// model object and defines the string maps to function pointers.  In
/// so doing we ensure that the string names fro the MSSM are always
/// the same in the getters.

class MssmSSwrapper : public MssmSoftsusy
{
public:
   double get_BMu() const {return displayM3Squared() / displaySusyMu(); }
   double get_mHd2() const {return displayMh1Squared();}
   double get_mHu2() const {return displayMh2Squared();}
   /// This has different return type to FS versuion, 
   /// but that shouldn't be a problem as we were wise enough
   /// to make return type of function pointer always a double
   double get_mq2(int i, int j) const {displaySoftMassSquaredElement(mQl,i,j);}
   double get_ml2(int i, int j) const {displaySoftMassSquaredElement(mLl,i,j);}
   double get_md2(int i, int j) const {displaySoftMassSquaredElement(mDr,i,j);}
   double get_mu2(int i, int j)) const {displaySoftMassSquaredElement(mUr,i,j);}
   double get_me2(int i, int j)) const {displaySoftMassSquaredElement(mEr,i,j);}
   double get_MassB() const {return displayGaugino(1);}
   double get_MassWB() const {return displayGaugino(2);}
   double get_MassG() const {return displayGaugino(3);}
   double get_Mu() const {return displaySusyMu();}
   double get_vu() const {return displayHvev() * sin(atan(displayTanb()));}
   double get_vd() const {return displayHvev() * cos(atan(displayTanb()));}
   
   double get_TYd(int i, int j) const {return displayTrilinear(DA,i,j);}
   double get_TYe(int i, int j) const {return displayTrilinear(EA,i,j);}
   double get_TYu(int i, int j) const {return displayTrilinear(UA,i,j);}

   double get_g1() const {return displayGaugeCoupling(1);}
   double get_g2() const {return displayGaugeCoupling(2);}
   double get_g3() const {return displayGaugeCoupling(3);}

   double get_Yd(int i, int j) const {return displayYukawaElement(YD,i,j);}
   double get_Ye(int i, int j) const {return displayYukawaElement(YE,i,j);}
   double get_Yu(int i, int j) const {return displayYukawaElement(YU,i,j);}
   
   

}

class FlavourMssmSSwrapper : public MssmSSwrapper
{
public:
   //different pole mass getters here

}
