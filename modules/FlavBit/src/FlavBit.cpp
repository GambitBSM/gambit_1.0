//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module FlavBit
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Nazila Mahmoudi
///          (mahmoudi@in2p3.fr)
///  \date 2013 Oct
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///  *********************************************

#include "gambit_module_headers.hpp"
#include "FlavBit_rollcall.hpp"

namespace Gambit
{

  namespace FlavBit
  {
 
     /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// @todo void? 
    void PointInit_Default()
    {
      logger() << "==================" << endl;
      logger() << "FlavBit says,";
      logger() << "\"Hi there. Initializing...\"" << endl;
      logger() << LogTags::info << endl << EOM;
    }


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
 
    void initialize () 
    {
      cout << endl;
      cout << "********************************************" << endl;
      cout << "***       Initializing FlavBit      ***" << endl;
      cout << "********************************************" << endl;
    }

    // Module functions
    void SI_bsgamma(double &result)          
    {
      using namespace Pipes::SI_bsgamma;

      char name[]="Example_SUSYspecBit/softsusy_example.slha";

     struct parameters param;

      BEreq::Init_param(&param);
      
      if(!BEreq::Les_Houches_Reader(byVal(name),&param)) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_1S/2.;
		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		result = BEreq::bsgamma(byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),byVal(mu_W),&param);
	  }
      
      //printf("BR(b->s gamma)=%.3e\n",result);
    }
     
     /// *************************************************
   
    void SI_Bsmumu(double &result)          
    {
      using namespace Pipes::SI_Bsmumu;

      char name[]="Example_SUSYspecBit/softsusy_example.slha";

      struct parameters param;

      BEreq::Init_param(&param);
      
      if(!BEreq::Les_Houches_Reader(byVal(name),&param)) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_1S/2.;
		double C0b[11],C1b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);

		result = BEreq::Bsmumu(byVal(C0b),byVal(C1b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      //printf("BR(Bs->mumu)=%.3e\n",result);
    }

     /// *************************************************
   
    void SI_Bsmumu_untag(double &result)          
    {
      using namespace Pipes::SI_Bsmumu_untag;

      char name[]="Example_SUSYspecBit/softsusy_example.slha";

      struct parameters param;

      BEreq::Init_param(&param);
      
      if(!BEreq::Les_Houches_Reader(byVal(name),&param)) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_1S/2.;
		double C0b[11],C1b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);

		result = BEreq::Bsmumu_untag(byVal(C0b),byVal(C1b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      //printf("BR(Bs->mumu)_untag=%.3e\n",result);
    }
    
     /// *************************************************
   
    void SI_Bdmumu(double &result)          
    {
      using namespace Pipes::SI_Bdmumu;

      char name[]="Example_SUSYspecBit/softsusy_example.slha";

      struct parameters param;

      BEreq::Init_param(&param);
      
      if(!BEreq::Les_Houches_Reader(byVal(name),&param)) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_1S/2.;
		double C0b[11],C1b[11],C0w[11],C1w[11],C2w[11];
	    std::complex<double> CQ0b[3],CQ1b[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);

		result = BEreq::Bdmumu(byVal(C0b),byVal(C1b),byVal(CQ0b),byVal(CQ1b),&param,byVal(mu_b));
	  }
      
      //printf("BR(Bd->mumu)=%.3e\n",result);
    }

      /// *************************************************
   
    void SI_Btaunu(double &result)          
    {
      using namespace Pipes::SI_Btaunu;

      char name[]="Example_SUSYspecBit/softsusy_example.slha";

      struct parameters param;

      BEreq::Init_param(&param);

      if(!BEreq::Les_Houches_Reader(byVal(name),&param)) result=0.;
      else result = BEreq::Btaunu(&param);
      
      //printf("BR(B->tau nu)=%.3e\n",result);
    }
    
  }

}

      //Master plan for making parameter values available (define ModelA as the model being scanned):
      //1.  Each module function gets assigned implicit conditional dependencies by the VALID_MODEL() macro, on modelParameters_{X,Y,...}, where X, Y and ... are the models declared as VALID_MODELs.  (Pat)
      //2.  The dependency resolver uses the model congruency operation to poll all candidate functions for compatibility with modelA, by testing isCongruent(modelA, X), isCongruent(modelA, Y), etc.  (Ben to write congruency function, Christoph to use it in dependency resolver.)
      //3.  The dependency resolver activates the relevant dependencies upon the modelParameters_{X,Y,...} capabilities according to what model is being scanned.  This means that every candidate function that has as a VALID_MODEL either ModelA or one of its ancestor, will have exactly one dependency on modelParameters_something activated, corresponding to the specific ancestor of ModelA that the function has declared as VALID.  (Christoph)
      //4.  ModelParameters_modelA dependencies are automatically filled by a functor created for this pupose from the outset.  This is the single-functor equivalnet of of the alpha nodes. (Christoph I guess?)
      //5.  The dependency resolver fills other modelParameters_ancestors capabilities using interpret_as_parent functions of the models down the hierarchy from the one required, until modelA is reached. (Ben to write to write the model functions, Christoph to use them.)
      //6.  Macros automatically create additional helper functors (alpha nodes per Christoph's terminology) and pointers to the actual parameter values in the dependent modelParameters functors at init.  The pointers get placed in Gambit::Module::function_name::parameter_name and are then available for use from within module functions.  The pointers are not bare pointers, but instances of the new GAMBIT-issue safe pointer, which foils attempts to use it when it is NULL or to use it to write to the address it points to.  (Pat)
      //7.  Macros also also automatically create safe pointers to dependency values (Pat; this is implemented already).


