#ifndef MSSMSPEC_H
#define MSSMSPEC_H

#include <memory>
//#include "MSSM_two_scale_model.hpp"
#include "Spectrum.hpp"
//#include "two_scale_model.hpp"
//#include "MSSM_model.hpp"
#include "config.h"
//#include "MSSM_physical.hpp"

 
namespace Gambit {

   template <class Model>
   class MSSMSpec;

     //this contains scale and scheme dependent stuff
   template <class Model>
   class MSSM_DRbarPars : public RunparDer<Model> {
      
      REDO_TYPEDEFS(Model)
   private:
      //reference to spectrum class for accessing model object
      MSSMSpec<Model> &my_parent;

      static fmap TreeMass_map;
      static fmap1 TreeMass_map1;
      static fmap fill_TreeMass_map();
      static fmap1 fill_TreeMass_map1();
      
      static fmap mass4_map;
      static fmap1 mass4_map1;
      static fmap2 mass4_map2;
      static fmap fill_mass4_map(); 
      static fmap1 fill_mass4_map1();
      static fmap2 fill_mass4_map2(); 
      
      static fmap mass3_map;
      static fmap1 mass3_map1;
      static fmap2 mass3_map2;
      static fmap fill_mass3_map(); 
      static fmap1 fill_mass3_map1();
      static fmap2 fill_mass3_map2(); 
      
      static fmap mass2_map;
      static fmap1 mass2_map1;
      static fmap2 mass2_map2;
      static fmap fill_mass2_map(); 
      static fmap1 fill_mass2_map1();
      static fmap2 fill_mass2_map2(); 
      
      static fmap mass_map;
      static fmap1 mass_map1;
      static fmap2 mass_map2;
      static fmap fill_mass_map(); 
      static fmap1 fill_mass_map1();
      static fmap2 fill_mass_map2(); 
      
      static fmap mass0_map;
      static fmap1 mass0_map1;
      static fmap2 mass0_map2;
      static fmap fill_mass0_map(); 
      static fmap1 fill_mass0_map1();
      static fmap2 fill_mass0_map2(); 
      
      fmap& get_mass4_map() const; 
      fmap1& get_mass4_map1() const;
      fmap2& get_mass4_map2() const;
      
      fmap& get_mass3_map() const; 
      fmap1& get_mass3_map1() const;
      fmap2& get_mass3_map2() const;
         
      fmap& get_mass2_map() const; 
      fmap1& get_mass2_map1() const;
      fmap2& get_mass2_map2() const;
      
      fmap& get_mass_map() const; 
      fmap1& get_mass_map1() const;
      fmap2& get_mass_map2() const;
      
      fmap& get_mass0_map() const; 
      fmap1& get_mass0_map1() const;
      fmap2& get_mass0_map2() const;

   public:
      MSSM_DRbarPars(MSSMSpec<Model> &x) : my_parent(x) {}
      
      virtual void RunToScale(double scale);
      virtual double GetScale() const;
      virtual void SetScale(double scale);
      //these are alternative getters taht will be removed eventually.
      virtual double get_tree_MassEigenstate(std::string) const;
      virtual double get_tree_MassEigenstate(std::string, int) const;
      virtual double get_tree_MassEigenstate(std::string, int, int) const;
      virtual double get_tree_Mixing_angle(std::string) const;
      virtual double get_tree_Mixing_element(std::string, int, int) const;
      virtual double get_mass4_par(std::string) const;
      virtual double get_mass4_par(std::string, int) const;
      virtual double get_mass4_par(std::string, int, int) const;
      virtual double get_mass3_par(std::string) const;
      virtual double get_mass3_par(std::string, int) const;
      virtual double get_mass3_par(std::string, int, int) const;
      virtual double get_mass2_par(std::string) const;
      virtual double get_mass2_par(std::string, int) const;
      virtual double get_mass2_par(std::string, int, int) const;
      virtual double get_mass_par(std::string) const;
      virtual double get_mass_par(std::string, int) const;
      virtual double get_mass_par(std::string, int, int) const;
      virtual double get_dimensionless_par(std::string) const;
      virtual double get_dimensionless_par(std::string, int) const;
      virtual double get_dimensionless_par(std::string, int, int) const;
      
      Model get_bound_spec() const; 
   };
   
   //physical class for accessing physical spectrum
   template <class Model>
   class MSSM_Phys : public PhysDer<Model> {
      REDO_TYPEDEFS(Model)
   private:
      //reference to spectrim class for accessing model object
      //Spec<Model,Model_physical> & my_parent;
      MSSMSpec<Model> &my_parent;
      static fmap  PoleMass_map;
      static fmap1 PoleMass_map1;
      static fmap  fill_PoleMass_map();
      static fmap1 fill_PoleMass_map1();
      fmap&  get_PoleMass_map() const;
      fmap1& get_PoleMass_map1() const;

      static fmap  PoleMixing_map;
      static fmap1 PoleMixing_map1;
      static fmap2 PoleMixing_map2;
      static fmap  fill_PoleMixing_map();
      static fmap1 fill_PoleMixing_map1();    
      static fmap2 fill_PoleMixing_map2();
      fmap&  get_PoleMixing_map() const; 
      fmap1& get_PoleMixing_map1() const;
      fmap2& get_PoleMixing_map2() const;

   public:
      //  MSSM_Phys(Spec<Model,Model_physical> & x) : my_parent(x) {}
      MSSM_Phys(MSSMSpec<Model> &x) : my_parent(x) {}
      virtual double get_MPole(std::string) const;
      virtual double get_MPole(std::string, int) const;
      virtual double get_MPole(std::string, int, int) const;
      virtual double get_Mixing_angle(std::string) const;
      virtual double get_Mixing_element(std::string, int, int) const;
      
      Model get_bound_spec() const; 
   };
    
   template <class Model>
   class MSSMSpec : public Spec<Model> {
      friend class MSSM_DRbarPars<Model>;
      friend class MSSM_Phys<Model>;
   private:
      //Model model;
      virtual int get_index_offset() const {return 0;}

   public:
      Model model;

      /// Internal instances of the derived inner classes
      MSSM_Phys<Model> mssm_ph;
      MSSM_DRbarPars<Model> mssm_drbar_pars;
      //constructors
      MSSMSpec();
      MSSMSpec(Model&);

      //Could more constructors to interface with other generators   

      //Destructor
      virtual ~MSSMSpec();
      
      //some model independent stuff
      virtual double get_lsp_mass(int & particle_type, 
                                  int & row, int & col) const;
      virtual int get_numbers_stable_particles() const; 
      //may use something like this to pass error to Gambit
      virtual std::string AccessError(std::string state) const;

      //Need a method to return model since it is private
      ///TODO: Ben: What are these for? They seem to just return copies
      // of the internal objects, which doesn't seem very useful. I have
      // made the model object public for now so that I can manipulate it
      // inside gambit, but perhaps these functions should return pointers
      // or references to the internal object instead? Though in that case
      // the model object might as well be public I think.
      // UPDATE: Although do we need the model object ever? It doesn't
      // seem to be needed when running the spectrum generator, because
      // we run it seperately and then copy the information into the Spectrum
      // object.
      Model get_modelobject();
      Model get_bound_spec() const; 
      //Model_physical get_bound_phys() const; 

      // Write spectrum information in slha format (not including input parameters etc.)
      virtual void dump2slha(const std::string&) const;

      /// Copy low energy spectrum information from another model object
      // Should work from any flexiblesusy model object with the same particle content as the MSSM
      template<class MSSMlike>
      void get_lowe_data_from(MSSMlike &othermodel)
      {
        // Maybe we can copy the pole masses etc directly, but since I am not sure how to do that, for now I am just copying the soft parameters and recomputing the pole masses. Will have to chat to Peter about this.
        // Update: Yeah Peter says we definitely should copy the pole and drbar masses directly :).

        // Actually, we may want to instead write out the data from one object into SLHAea, and then read it into the other. That will let us copy data out of (say) softsusy objects into flexiblesusy ones, and vice-versa, more easily. Of course that will be restricted to the SLHA compatible models... Perhaps we can overload this function to deal with various inputs.
        //model = othermodel;

        model.set_scale( othermodel.get_scale() );
        model.set_Yu( othermodel.get_Yu() );
        model.set_Yd( othermodel.get_Yd() );
        model.set_Ye( othermodel.get_Ye() );
        model.set_Mu( othermodel.get_Mu() );
        model.set_g1( othermodel.get_g1() );
        model.set_g2( othermodel.get_g2() );
        model.set_g3( othermodel.get_g3() );
        model.set_vd( othermodel.get_vd() );
        model.set_vu( othermodel.get_vu() );
        model.set_TYu( othermodel.get_TYu() );
        model.set_TYd( othermodel.get_TYd() );
        model.set_TYe( othermodel.get_TYe() );
        model.set_BMu( othermodel.get_BMu() );
        model.set_mq2( othermodel.get_mq2() );
        model.set_ml2( othermodel.get_ml2() );
        model.set_mHd2( othermodel.get_mHd2() );
        model.set_mHu2( othermodel.get_mHu2() );
        model.set_md2( othermodel.get_md2() );
        model.set_mu2( othermodel.get_mu2() );
        model.set_me2( othermodel.get_me2() );
        model.set_MassB( othermodel.get_MassB() );
        model.set_MassWB( othermodel.get_MassWB() );
        model.set_MassG( othermodel.get_MassG() );

        model.calculate_DRbar_parameters(); 
        model.calculate_pole_masses();

        return;
      }

      // Overload of this function to just easily copy the othermodel object
      // if it is of type Model
      void get_external_spectrum(Model &othermodel)
      {
        model = othermodel;
        return;
      }

   };

   //
   // IMPLEMENTATION OF MEMBER FUNCTIONS FOLLOWS
   // 
   // Now that this is a template class, we need these definition in the header
   // file. It is nice to keep them seperate from the class declaration though.
   //


   //#include "MSSM_slha_io.hpp" // only needed by 'dump2slha'; can remove if this function changes

   template <class M>
   MSSMSpec<M>::MSSMSpec(M& m) :
      model(m),
      mssm_ph(*this),
      mssm_drbar_pars(*this),
      Spec<M>(mssm_drbar_pars, mssm_ph)
   {
   }
   
   // Default constructor
   template <class M>
   MSSMSpec<M>::MSSMSpec() :
      mssm_ph(*this),
      mssm_drbar_pars(*this),
      Spec<M>(mssm_drbar_pars, mssm_ph)
   {
   }
   
   template <class M>
   MSSMSpec<M>::~MSSMSpec()
   {
   }
   
   template <class M>
   void MSSMSpec<M>::dump2slha(const std::string& filename) const
   {
   // REMOVED; would need another template parameter to use MSSM_slha_io objects
   //  // Write SLHA file (for debugging purposes...)
   //  MSSM_slha_io slha_io;
   //  slha_io.set_spectrum(model);
   //  slha_io.write_to_file(filename);
   }
   
   template <class Model>
   Model MSSM_DRbarPars<Model>::get_bound_spec() const
   {
      return my_parent.get_bound_spec();   
   } 
  
   template <class Model>
   Model MSSM_Phys<Model>::get_bound_spec() const
   {
      return my_parent.get_bound_spec();
   } 
   
   //inspired by softsusy's lsp method.  
   //This MSSM version assumes all states mass ordered. 
   //returns lsp mass and gives 3 integers to specify the state 
   // for most general case of a particle type with mass matrix 
   // row and col set to -1 when not needed 
   //(row only is used for vector) 
   //particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
   //3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
   template <class M>
   double MSSMSpec<M>::get_lsp_mass(int & particle_type, int & row, int & col) const
   {
      row = -1; col = -1;  particle_type =-1;//set default
      double mlsp = fabs(model.get_physical().MChi(0)); //most common lsp
      particle_type = 0;
      row = 0;
     
      /// sneutrinos 1
      double temp = model.get_physical().MSv(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 1; 
         row=0;
      }
      
      /// up squarks 2
      temp = model.get_physical().MSu(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 2;
         row=0;
      }
      
      /// down squarks 3
      temp = model.get_physical().MSd(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 3;
         row=0;      
      }
      
      /// sleptons 4
      temp = model.get_physical().MSe(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 4; 
         row=0;    
      }
      
     /// charginos 5
      temp = fabs(model.get_physical().MCha(0));
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 5; 
         row=0;    
      }
      
      /// gluino 6
      temp = fabs(model.get_physical().MGlu);
      if (temp < mlsp) {
         mlsp = temp; 
         particle_type = 6; 
         row=0;    
      }
      
      //We have no gravitino mass right now.   this should be added.
      // /// gravitino -1 
      // temp = displayGravitino();
      // if (temp < mlsp) {
      //   mlsp = temp; posi = 0; posj = 0; particle_type = -1; }  
      
      return mlsp;
   }

   //The MSSM has just one LSP - often the lightest neutralino
   template <class M>
   int MSSMSpec<M>::get_numbers_stable_particles() const {
      return 1;
   }
   
   //these are just wrappers.  Need to test this carefully though
   //inheritance is complicated
   template <class Model>
   void MSSM_DRbarPars<Model>::RunToScale(double scale){
      std::cout << "In mssm implementation of RunToScale" << std::endl;
      my_parent.model.Model::run_to(scale);
   }
   template <class M>
   double MSSM_DRbarPars<M>::GetScale() const {
      std::cout << "In mssm implementation of GetScale" << std::endl;
      return my_parent.model.get_scale();
   }
   template <class M>
   void MSSM_DRbarPars<M>::SetScale(double scale){
       my_parent.model.set_scale(scale);
   }
   
   template <class M>
   std::string MSSMSpec<M>::AccessError(std::string state) const {
      std::string errormsg;
      errormsg = "Error accessing "+ state + " element is out of bounds";
      return errormsg;
   }
     
   // Function to initialise mass2_ma
   template <class M>
   typename MSSM_DRbarPars<M>::fmap MSSM_DRbarPars<M>::fill_mass4_map() 
   {
      fmap tmp_map;
    
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap1 MSSM_DRbarPars<M>::fill_mass4_map1() 
   {
      fmap1 tmp_map;
   
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap2 MSSM_DRbarPars<M>::fill_mass4_map2() 
   {
      fmap2 tmp_map;
      
      //there are no mappings for this case.
     
      return tmp_map;
   }
   
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap MSSM_DRbarPars<M>::fill_mass3_map() 
   {
      fmap tmp_map;
    
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap1 MSSM_DRbarPars<M>::fill_mass3_map1() 
   {
      fmap1 tmp_map;
   
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap2 MSSM_DRbarPars<M>::fill_mass3_map2() 
   {
      fmap2 tmp_map;
      
      //there are no mappings for this case.
     
      return tmp_map;
   }
   
   
   
   // Function to initialise mass2_map
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap MSSM_DRbarPars<Model>::fill_mass2_map() 
   {
      fmap tmp_map;
      tmp_map["BMu"] = &Model::get_BMu;
      tmp_map["mHd2"] = &Model::get_mHd2;
      tmp_map["mHu2"] = &Model::get_mHu2;
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap1 MSSM_DRbarPars<M>::fill_mass2_map1() 
   {
      fmap1 tmp_map;
   
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap2 MSSM_DRbarPars<Model>::fill_mass2_map2() 
   {
      fmap2 tmp_map;
      tmp_map["mq2"] = FInfo2( &Model::get_mq2, {0,1,2}, {0,1,2} );
      tmp_map["ml2"] = FInfo2( &Model::get_ml2, {0,1,2}, {0,1,2} );
      tmp_map["md2"] = FInfo2( &Model::get_md2, {0,1,2}, {0,1,2} );
      tmp_map["mu2"] = FInfo2( &Model::get_mu2, {0,1,2}, {0,1,2} );
      tmp_map["me2"] = FInfo2( &Model::get_me2, {0,1,2}, {0,1,2} );
     
      return tmp_map;
   }
   
   
   
   // Function to initialise mass_map
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap MSSM_DRbarPars<Model>::fill_mass_map() 
   {
      fmap tmp_map;
      tmp_map["M1"]= &Model::get_MassB;
      tmp_map["M2"]= &Model::get_MassWB;
      tmp_map["M3"]= &Model::get_MassG;
      tmp_map["Mu"]= &Model::get_Mu;
      tmp_map["vu"]= &Model::get_vu;
      tmp_map["vd"]= &Model::get_vd;
      //  can't do SM vev or tan beta this way
      // can create MSSM_DRbarPars getter which first calls 
      // inherited one then adds vev and tan beta
     
      
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap1 MSSM_DRbarPars<M>::fill_mass_map1() 
   {
      fmap1 tmp_map;
   
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap2 MSSM_DRbarPars<Model>::fill_mass_map2() 
   {
      fmap2 tmp_map;
      tmp_map["TYd"]= FInfo2( &Model::get_TYd, {0}, {0} );
      tmp_map["TYe"]= FInfo2( &Model::get_TYe, {0}, {0} );
      tmp_map["TYu"]= FInfo2( &Model::get_TYu, {0}, {0} );
      tmp_map["ad"] = FInfo2( &Model::get_TYd, {0}, {0} );
      tmp_map["ae"] = FInfo2( &Model::get_TYe, {0}, {0} );
      tmp_map["au"] = FInfo2( &Model::get_TYu, {0}, {0} );
   
      return tmp_map;
   }
   
   // Function to initialise mass_map
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap MSSM_DRbarPars<Model>::fill_mass0_map() 
   {
      fmap tmp_map;
      tmp_map["g1"]= &Model::get_g1;
      tmp_map["g2"]= &Model::get_g2;
      tmp_map["g3"]= &Model::get_g3;
      
      //  can't do SM vev or tan beta this way
      // can create MSSM_DRbarPars getter which first calls 
      // inherited one then adds vev and tan beta
     
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class M>
   typename MSSM_DRbarPars<M>::fmap1 MSSM_DRbarPars<M>::fill_mass0_map1() 
   {
      fmap1 tmp_map;
   
      //there are no mappings for this case.
   
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap2 MSSM_DRbarPars<Model>::fill_mass0_map2() 
   {
      fmap2 tmp_map;
     
      tmp_map["Yd"]= FInfo2( &Model::get_Yd, {0}, {0} );
      tmp_map["Ye"]= FInfo2( &Model::get_Ye, {0}, {0} );
      tmp_map["Yu"]= FInfo2( &Model::get_Yu, {0}, {0} );
     
      return tmp_map;
   }
   
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap MSSM_DRbarPars<Model>::fill_TreeMass_map()
   {
   fmap tmp_map;
    tmp_map["MZ"] = &Model::get_MVZ;
    tmp_map["MW"] = &Model::get_MVWm;
    tmp_map["MGluino"] = &Model::get_MGlu; 
    tmp_map["MGluon"] = &Model::get_MVG; 
    tmp_map["MPhoton"] = &Model::get_MVP;
   
   tmp_map["MGoldstone0"] = &Model::get_DRbar_neut_goldstone;
    tmp_map["MA0"] = &Model::get_DRbar_neut_CPodd_higgs;
    tmp_map["MGoldstonePM"] = &Model::get_DRbar_ch_goldstone; 
    tmp_map["MHpm"] = &Model::get_DRbar_ch_higgs; 
    
    tmp_map["Mtop"] = &Model::get_DRbar_mtop;
    tmp_map["Mcharm"] = &Model::get_DRbar_mcharm;
    tmp_map["Mup"] = &Model::get_DRbar_mup;
    tmp_map["Mbottom"] = &Model::get_DRbar_mbottom;
    tmp_map["Mstrange"] = &Model::get_DRbar_mstrange;
    tmp_map["Mdown"] = &Model::get_DRbar_mdown;
    tmp_map["Mtau"] = &Model::get_DRbar_mtau; 
    tmp_map["Mmuon"] = &Model::get_DRbar_mmuon; 
    tmp_map["Melectron"] = &Model::get_DRbar_melectron; 
    return tmp_map;
   }
   //map for string access with an index supplied
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap1 MSSM_DRbarPars<Model>::fill_TreeMass_map1()
   {
   fmap1 tmp_map;
    tmp_map["MSd"] = FInfo1( &Model::get_MSd, {0} );
    tmp_map["MSv"] = FInfo1( &Model::get_MSv, {0} );
    tmp_map["MSu"] = FInfo1( &Model::get_MSu, {0} );
    tmp_map["MSe"] = FInfo1( &Model::get_MSe, {0} );
    tmp_map["Mh0"] = FInfo1( &Model::get_Mhh, {0} );
    //Here we may access the goldstone boson
    // and higgs. maybe too dangerous to keep?
    tmp_map["MA0"] = FInfo1( &Model::get_MAh, {0} );      
    //Here we may access the goldstone boson
    //and higgs. maybe too dangerous to keep?
    tmp_map["MHpm"] = FInfo1( &Model::get_MHpm, {0} );   
    tmp_map["MCha"] = FInfo1( &Model::get_MCha, {0} );
    tmp_map["MChi"] = FInfo1( &Model::get_MChi, {0} );
    
    tmp_map["MFd"] = FInfo1( &Model::get_MFd, {0} );
    tmp_map["MFu"] = FInfo1( &Model::get_MFu, {0} );
    tmp_map["MFe"] = FInfo1( &Model::get_MFe, {0} );
    return tmp_map;
   }
   
  
   template <class Model>
   typename MSSM_Phys<Model>::fmap MSSM_Phys<Model>::fill_PoleMass_map(){
      fmap tmp_map;
     
      // tmp_map["MZ"] = &Model::get_Pole_MZ;
      // tmp_map["MW"] = &Model::get_Pole_MW;
      // tmp_map["MGluino"] = &Model::get_Pole_MGlu; 
      // tmp_map["MGluon"] = &Model::get_Pole_MGluon; 
      // tmp_map["MPhoton"] = &Model::get_Pole_MPhoton;
   
      // tmp_map["MGoldstone0"] = &Model::get_Pole_neut_goldstone;
      // tmp_map["MA0"] = &Model::get_Pole_neut_CPodd_higgs;
      // tmp_map["MGoldstonePM"] = &Model::get_Pole_ch_goldstone; 
      // tmp_map["MHpm"] = &Model::get_Pole_ch_higgs;    
      // tmp_map["Mtop"] = &Model::get_Pole_mtop;
      // tmp_map["Mcharm"] = &Model::get_Pole_mcharm;
      // tmp_map["Mup"] = &Model::get_Pole_mup;
      // tmp_map["Mbottom"] = &Model::get_Pole_mbottom;
      // tmp_map["Mstrange"] = &Model::get_Pole_mstrange;
      // tmp_map["Mdown"] = &Model::get_Pole_mdown;
      // tmp_map["Mtau"] = &Model::get_Pole_mtau; 
      // tmp_map["Mmuon"] = &Model::get_Pole_mmuon; 
      // tmp_map["Melectron"] = &Model::get_Pole_melectron; 
   
      return tmp_map;
   }
   
   template <class Model>
   typename MSSM_Phys<Model>::fmap1 MSSM_Phys<Model>::fill_PoleMass_map1(){
      fmap1 tmp_map;
    
      // tmp_map["MSd"] = &Model::get_Pole_MSd;
      // tmp_map["MSv"] = &Model::get_Pole_MSv;
      // tmp_map["MSu"] = &Model::get_Pole_MSu;
      // tmp_map["MSe"] = &Model::get_Pole_MSe;
      // tmp_map["Mhh"] = &Model::get_Pole_Mhh;
      // tmp_map["MChi"] = &Model::get_Pole_MChi;
      // tmp_map["MCha"] = &Model::get_Pole_MCha;
   
      // tmp_map["MFd"] = &Model::get_Pole_MFd;
      // tmp_map["MFu"] = &Model::get_Pole_MFu;
      // tmp_map["MFe"] = &Model::get_Pole_MFe;
      return tmp_map;
   }
   
   //returns empty mass sicne none of these exist in this model
   template <class Model>
   typename MSSM_Phys<Model>::fmap MSSM_Phys<Model>::fill_PoleMixing_map(){
      fmap tmp_map;
      
      return tmp_map;
   }
   
   //returns empty mass sicne none of these exist in this model
   template <class Model>
   typename MSSM_Phys<Model>::fmap1 MSSM_Phys<Model>::fill_PoleMixing_map1(){
      fmap1 tmp_map;
    
      return tmp_map;
   }
   
   template <class Model>
   typename MSSM_Phys<Model>::fmap2 MSSM_Phys<Model>::fill_PoleMixing_map2(){
      fmap2 tmp_map;
      //Need to add these to generated code before I can use them here.
      // tmp_map["ZD"] = &MssmFS::get_Pole_ZD;
      // tmp_map["ZV"] = &MssmFS::get_Pole_ZV;
      // tmp_map["ZU"] = &MssmFS::get_Pole_ZU;
      // tmp_map["ZE"] = &MssmFS::get_Pole_ZE;
      // tmp_map["ZH"] = &MssmFS::get_Pole_ZH;
      // tmp_map["ZA"] = &MssmFS::get_Pole_ZA;
      // tmp_map["ZPM"] = &MssmFS::get_Pole_ZPM;
      
      // tmp_map["ZN"] = &MssmFS::get_Pole_ZN;
      // tmp_map["UM"] = &MssmFS::get_Pole_UM;
      // tmp_map["UP"] = &MssmFS::get_Pole_UP;
      
      /* Could add SM fermion mixing but these are only filled
         when we actually calculate the SM pole masses
         which is not necessary */
      // tmp_map["MFd"] = &MssmFS::get_Pole_MFd;
      // tmp_map["MFu"] = &MssmFS::get_Pole_MFu;
      // tmp_map["MFe"] = &MssmFS::get_Pole_MFe;
      return tmp_map;
   }
   
   //Would be safer to pass a pair like below:  
   // MSSMSpec::pmap1 MSSMSpec::fill_PoleMass_map1(){
   //    pmap1 tmp_map;
   //    tmp_map[std::make_pair("MSd",0)] = &Model_physical::MSd;
      
   // }
   
   
   //Takes a string and an index. 
   template <class M>
   double MSSM_DRbarPars<M>::get_tree_MassEigenstate(std::string mass) const {
      if(mass == "MZ") 
         {
            return  my_parent.model.get_MVZ();
         }
      else if(mass == "MW") 
         {
            return  my_parent.model.get_MVWm();
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
      else if(mass == "MA0") 
         {
            return  my_parent.model.get_MAh()(1);
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
       else if(mass == "MHpm") 
         {
            return  my_parent.model.get_MHpm()(1);
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
      else if(mass == "MGoldstone0") 
         {
            return  my_parent.model.get_MAh()(0);
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
       else if(mass == "MGoldstonePM") 
         {
            return  my_parent.model.get_MHpm()(0);
         }
       else if (mass == "MGluino")
          {
             return  my_parent.model.get_MGlu();
          }
       else if(mass == "MGluon")
         {
            return  my_parent.model.get_MVG();
         }
      else if(mass == "MPhoton")
         {
            return  my_parent.model.get_MVP();
         }
      else if(mass == "Mtop")
         {
            return  my_parent.model.get_MFu()(2);
         }
       else if(mass == "Mcharm")
         {
            return  my_parent.model.get_MFu()(1);
         }
       else if(mass == "Mup")
         {
            return  my_parent.model.get_MFu()(0);
         }
       else if(mass == "Mbottom")
         {
            return  my_parent.model.get_MFd()(2);
         }
       else if(mass == "Mstrange")
         {
            return  my_parent.model.get_MFd()(1);
         }
       else if(mass == "Mdown")
         {
            return  my_parent.model.get_MFd()(0);
         }
       else if(mass == "Mtau")
         {
            return  my_parent.model.get_MFe()(2);
         }
       else if(mass == "Mmuon")
         {
            return  my_parent.model.get_MFe()(1);
         }
       else if(mass == "Melectron")
         {
            return  my_parent.model.get_MFe()(0);
         }
      else{ 
      std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   
   //Takes a string and an index. 
   template <class M>
   double MSSM_DRbarPars<M>::get_tree_MassEigenstate(std::string mass, int i) const {
      if(mass == "MSd") 
         {
            return my_parent.model.get_MSd()(i);
         }
      else if(mass == "MSv") 
         {
            return my_parent.model.get_MSv()(i);
         }
      else if(mass == "MSu")
         {
            return my_parent.model.get_MSu()(i);
         }
      else if(mass == "MSe")
         {
            return my_parent.model.get_MSe()(i);
         } 
      else if(mass == "Mh0") 
         {
            return my_parent.model.get_Mhh()(i);
         }
      //Here we may access the goldstone boson
      //this is probably too dangerous to keep!
      else if(mass == "MA0") 
         {
            return my_parent.model.get_MAh()(i);
         }
      //Here we may access the goldstone boson
      //this is probably too dangerous to keep!
       else if(mass == "MHpm") 
         {
            return my_parent.model.get_MHpm()(i);
         }
      else if(mass == "MCha") 
         {
            return my_parent.model.get_MCha()(i);
         }
      else if(mass == "MChi") 
         {
            return my_parent.model.get_MChi()(i);
         }
      else{ 
      std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   
   
   //Takes a string and an index. 
   template <class M>
   double MSSM_DRbarPars<M>::get_tree_MassEigenstate(std::string mass, int i, int j) const {
      std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   
   }
   
   
   //Takes a string and an index. 
   template <class M>
   double MSSM_Phys<M>::get_MPole(std::string polemass) const {
      if(polemass == "MZ") 
         {
            return my_parent.model.get_physical().MVZ;
         }
      else if(polemass == "MW") 
         {
            return my_parent.model.get_physical().MVWm;
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
      else if(polemass == "MA0") 
         {
            return my_parent.model.get_physical().MAh(1);
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
       else if(polemass == "MHpm") 
         {
            return my_parent.model.get_physical().MHpm(1);
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
      else if(polemass == "MGoldstone0") 
         {
            return my_parent.model.get_physical().MAh(0);
         }
      //I really need to know goldstone index here!
      //Dangerous otherwise
       else if(polemass == "MGoldstonePM") 
         {
            return my_parent.model.get_physical().MHpm(0);
         }
       else if (polemass == "MGluino")
          {
             return my_parent.model.get_physical().MGlu;
          }
       else if(polemass == "MGluon")
         {
            return my_parent.model.get_physical().MVG;
         }
      else if(polemass == "MPhoton")
         {
            return my_parent.model.get_physical().MVP;
         }
      else if(polemass == "Mtop")
         {
            return my_parent.model.get_physical().MFu(2);
         }
       else if(polemass == "Mcharm")
         {
            return my_parent.model.get_physical().MFu(1);
         }
       else if(polemass == "Mup")
         {
            return my_parent.model.get_physical().MFu(0);
         }
       else if(polemass == "Mbottom")
         {
            return my_parent.model.get_physical().MFd(2);
         }
       else if(polemass == "Mstrange")
         {
            return my_parent.model.get_physical().MFd(1);
         }
       else if(polemass == "Mdown")
         {
            return my_parent.model.get_physical().MFd(0);
         }
       else if(polemass == "Mtau")
         {
            return my_parent.model.get_physical().MFe(2);
         }
       else if(polemass == "Mmuon")
         {
            return my_parent.model.get_physical().MFe(1);
         }
       else if(polemass == "Melectron")
         {
            return my_parent.model.get_physical().MFe(0);
         }
      else{ 
      std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   
   //Takes a string and an index. 
   template <class M>
   double MSSM_Phys<M>::get_MPole(std::string polemass, int i) const {
      if(polemass == "MSd") 
         {
            return my_parent.model.get_physical().MSd(i);
         }
      else if(polemass == "MSv") 
         {
            return my_parent.model.get_physical().MSv(i);
         }
      else if(polemass == "MSu")
         {
            return my_parent.model.get_physical().MSu(i);
         }
      else if(polemass == "MSe")
         {
            return my_parent.model.get_physical().MSe(i);
         } 
      else if(polemass == "Mh0") 
         {
            return my_parent.model.get_physical().Mhh(i);
         }
      //Here we may access the goldstone boson
      //this is probably too dangerous to keep!
      else if(polemass == "MA0") 
         {
            return my_parent.model.get_physical().MAh(i);
         }
      //Here we may access the goldstone boson
      //this is probably too dangerous to keep!
       else if(polemass == "MHpm") 
         {
            return my_parent.model.get_physical().MHpm(i);
         }
      else if(polemass == "MCha") 
         {
            return my_parent.model.get_physical().MCha(i);
         }
      else if(polemass == "MChi") 
         {
            return my_parent.model.get_physical().MChi(i);
         }
      else{ 
      std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   
   
   template <class M>
   double MSSM_DRbarPars<M>::get_tree_Mixing_angle(std::string MixMat) const {
    
      std::cout << "Error: Sorry I know nothing" << std::endl;
      return 6666666666666.6666666666666;
   
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_tree_Mixing_element(std::string MixMat, int i, int j) const {
   
    //Down squark mixing matrix
      if(MixMat == "ZD") {
         return my_parent.model.get_ZD()(i,j);
      }
      //Up squark mixing matrix
      else if(MixMat == "ZU") {
         return my_parent.model.get_ZU()(i,j);
      }
      //Charged slepton mixing matrix
      else if(MixMat == "ZE") {
         return my_parent.model.get_ZE()(i,j);
      }
      //Charged sneutrino mixing matrix
      else if(MixMat == "ZV") {
         return my_parent.model.get_ZV()(i,j);
      }
      //CP even Higgs mixing matrix
      else if(MixMat == "ZH") {
         return my_parent.model.get_ZH()(i,j);
      }
       //CP odd Higgs mixing matrix
      else if(MixMat == "ZA") {
         return my_parent.model.get_ZA()(i,j);
      }
      //Charged Higgs mixing matrix
      else if(MixMat == "ZPM") {
         return my_parent.model.get_ZP()(i,j);
      }
      // //Neutralino mass matrix
      // else if(MixMat == "ZN") {
      //    return my_parent.model.get_get_physical().ZN()(i,j);
      // }
      //  //Chargino mass matrices
      // else if(MixMat == "UM") {
      //    return my_parent.model.get_physical().UM()(i,j);
      // }
      // //Chargino mass matrices
      // else if(MixMat == "UP") {
      //    return my_parent.model.get_physical().UP()(i,j);
      // }  
       
      // //Down quark left mixing matrix
      // if(MixMat == "ZDL") {
      //    return my_parent.model.get_physical().ZDL()(i,j);
      // }
      // //Down quark right mixing matrix
      // if(MixMat == "ZDR") {
      //    return my_parent.model.get_physical().ZDL()(i,j);
      // }
      // //Up quark left mixing matrix
      // else if(MixMat == "ZUL") {
      //    return my_parent.model.get_physical().ZUL()(i,j);
      // }
      //  //Up quark right mixing matrix
      // else if(MixMat == "ZUR") {
      //    return my_parent.model.get_physical().ZUR()(i,j);
      // }
      // //Charged lepton left mixing matrix
      // else if(MixMat == "ZEL") {
      //    return my_parent.model.get_physical().ZEL()(i,j);
      // }
      // //Charged lepton left mixing matrix
      // else if(MixMat == "ZER") {
      //    return my_parent.model.get_physical().ZER()(i,j);
      // }
   
   std::cout << "Error: Sorry I know nothing" << std::endl;
      return 6666666666666.6666666666666;
   
   }
   
   //Takes a string and an index. 
   template <class M>
   double MSSM_Phys<M>::get_MPole(std::string polemass, int i, int j) const {
      std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   
   }
   
   
   
   template <class M>
   double MSSM_Phys<M>::get_Mixing_angle(std::string) const {
      std::cout << "Error: Sorry I know nothing" << std::endl;
      return 6666666666666.6666666666666;
   }
   
   template <class M>
   double MSSM_Phys<M>::get_Mixing_element(std::string MixMat, int i, int j) const {
      //Down squark mixing matrix
      if(MixMat == "ZD") {
         return my_parent.model.get_physical().ZD(i,j);
      }
      //Up squark mixing matrix
      else if(MixMat == "ZU") {
         return my_parent.model.get_physical().ZU(i,j);
      }
      //Charged slepton mixing matrix
      else if(MixMat == "ZE") {
         return my_parent.model.get_physical().ZE(i,j);
      }
      //Charged sneutrino mixing matrix
      else if(MixMat == "ZV") {
         return my_parent.model.get_physical().ZV(i,j);
      }
      //CP even Higgs mixing matrix
      else if(MixMat == "ZH") {
         return my_parent.model.get_physical().ZH(i,j);
      }
       //CP odd Higgs mixing matrix
      else if(MixMat == "ZA") {
         return my_parent.model.get_physical().ZA(i,j);
      }
      //Charged Higgs mixing matrix
      else if(MixMat == "ZPM") {
         return my_parent.model.get_physical().ZP(i,j);
      }
      // //Neutralino mass matrix
      // else if(MixMat == "ZN") {
      //    return my_parent.model.get_physical().ZN(i,j);
      // }
      //  //Chargino mass matrices
      // else if(MixMat == "UM") {
      //    return my_parent.model.get_physical().UM(i,j);
      // }
      // //Chargino mass matrices
      // else if(MixMat == "UP") {
      //    return my_parent.model.get_physical().UP(i,j);
      // }  
       
      // //Down quark left mixing matrix
      // if(MixMat == "ZDL") {
      //    return my_parent.model.get_physical().ZDL(i,j);
      // }
      // //Down quark right mixing matrix
      // if(MixMat == "ZDR") {
      //    return my_parent.model.get_physical().ZDL(i,j);
      // }
      // //Up quark left mixing matrix
      // else if(MixMat == "ZUL") {
      //    return my_parent.model.get_physical().ZUL(i,j);
      // }
      //  //Up quark right mixing matrix
      // else if(MixMat == "ZUR") {
      //    return my_parent.model.get_physical().ZUR(i,j);
      // }
      // //Charged lepton left mixing matrix
      // else if(MixMat == "ZEL") {
      //    return my_parent.model.get_physical().ZEL(i,j);
      // }
      // //Charged lepton left mixing matrix
      // else if(MixMat == "ZER") {
      //    return my_parent.model.get_physical().ZER(i,j);
      // }
    
      std::cout << "Error: Sorry I know nothing" << std::endl;
      return 6666666666666.6666666666666;
   }
   
   // void Model::mass2_par_mapping() {
   //       mass2_par_map["mHd2"] = &Model::model.get_mHd2;
   //       mass2_par_map["mHu2"] = &Model::model.get_mHu2;
   //       mass2_par_map["BMu"] = &Model::model.get_BMu;
   
   //    }
   
   // double Model::get_mass2_par(std::string masssq) const {
   //    std::map<std::string,getmethod>::const_iterator found= mass2_par_map.find(masssq);
   //    if(found!=mass2_par_map.end()){
   //       getmethod func = found->second;
   //       double result = (this->*func)();
   //       return result;
   //    }
      
   // }
   
   
   // double MSSMSpec::get_mass2_par(std::string masssq) const {
   //    std::cout<< "this has no implementation yet." << std::endl;   
   // }
   
   
   template <class M>
   double MSSM_DRbarPars<M>::get_mass4_par(std::string mass) const {
    std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;   
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass4_par(std::string, int i) const {
      std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass4_par(std::string mass, int i, int j) const {
   std::cout << "Error: The dimension 4 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   
   }
   
   template <class M>
   double MSSM_DRbarPars<M>::get_mass3_par(std::string mass) const {
    std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;   
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass3_par(std::string, int i) const {
      std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass3_par(std::string mass, int i, int j) const {
   std::cout << "Error: The dimension 3 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass2_par(std::string mass) const {
      if(mass == "BMu"){
         return my_parent.model.get_BMu();
      }
      else if (mass == "mHd2"){
         return my_parent.model.get_mHd2();
      }
       else if (mass == "mHu2"){
         return my_parent.model.get_mHu2();
      }
      else{
    std::cout << "Error: The dimension 2 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass2_par(std::string, int i) const {
      std::cout << "Error: The dimension 2 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass2_par(std::string mass, int i, int j) const {
      if(mass == "mq2"){
         return my_parent.model.get_mq2(i,j);
      }
      else if (mass == "ml2"){
         return my_parent.model.get_ml2(i,j);
      }
       else if (mass == "md2"){
         return my_parent.model.get_md2(i,j);
      }
       else if (mass == "mu2"){
         return my_parent.model.get_mu2(i,j);
      }
       else if (mass == "me2"){
         return my_parent.model.get_me2(i,j);
      }
    else{
     std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   
   template <class M>
   double MSSM_DRbarPars<M>::get_mass_par(std::string mass) const {
      if(mass == "Mu"){
         return my_parent.model.get_Mu();
      }
      else if (mass == "vu") {
         return my_parent.model.get_vu();
      }
      else if (mass == "vd") {
         return my_parent.model.get_vd();
      }
      else if (mass == "vev") {
         return sqrt(my_parent.model.get_vu()*my_parent.model.get_vu() + my_parent.model.get_vd()*my_parent.model.get_vd());
      }
      else if (mass == "M1") {
         //This name may change at some point.
         return my_parent.model.get_MassB();
      } 
       else if (mass == "M2") {
         //This name may change at some point.
         return my_parent.model.get_MassWB();
      } 
       else if (mass == "M3") {
         //This name may change at some point.
         return my_parent.model.get_MassG();
      } 
      else{
     std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
   
   template <class M>
   double MSSM_DRbarPars<M>::get_mass_par(std::string, int) const {
   
     std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   }
   template <class M>
   double MSSM_DRbarPars<M>::get_mass_par(std::string mass, int i, int j) const {
      if (mass == "TYd" || mass == "ad"){
         return my_parent.model.get_TYd(i,j);
      }
      else if (mass == "TYe" || mass == "ae"){
         return my_parent.model.get_TYe(i,j);
      } 
      else if (mass == "TYu" || mass == "au"){
         return my_parent.model.get_TYu(i,j);
      } 
      else{
     std::cout << "Error: The dimension 1 parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
      }
   }
      
   template <class M>
      double MSSM_DRbarPars<M>::get_dimensionless_par(std::string coupling) const {
         if(coupling == "g1"){
            return my_parent.model.get_g1();
         }
         else if (coupling == "g2"){
            return my_parent.model.get_g2();
         }
         else if (coupling == "g3"){
            return my_parent.model.get_g3();
         }
         else if (coupling == "tanbeta"){
            return my_parent.model.get_vu() / my_parent.model.get_vd();
         }
         else{
     std::cout << "Error: The dimensionless parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
         }
   }
   
   template <class M>
      double MSSM_DRbarPars<M>::get_dimensionless_par(std::string coupling, int i) const {   
     std::cout << "Error: The dimensionless parameter you requested does not exist in the MSSM" << std::endl;
      return -1.0;
   }
   
   
   
   template <class M>
      double MSSM_DRbarPars<M>::get_dimensionless_par(std::string coupling, int i, int j) const {
         if(coupling == "Yu"){
            return my_parent.model.get_Yu(i,j);
         }
         else if(coupling == "Yd"){
            return my_parent.model.get_Yd(i,j);
         }
         else if(coupling == "Ye"){
            return my_parent.model.get_Ye(i,j);
         }
         else{
     std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
      return -1.0;
         }
   
   
      }
   
   
   template <class Model>
   Model MSSMSpec<Model>::get_modelobject() {
      return model;
   }
   
   
   
   // MSSMSpec::fmap& MSSMSpec::get_mass2_map() const {return mass2_map;} \
   //   Model MSSMSpec::get_bound_spec() const {return model;} \
   //   MSSMSpec::fmap  MSSMSpec::mass2_map(MSSMSpec::fill_mass2_map());


   // Use our time-saving macro to define common member functions
   MODEL_SPEC_TEMPLATE_MEMBER_FUNCTIONS(MSSMSpec)
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS(MSSM_DRbarPars)
   MODEL_PHYS_TEMPLATE_MEMBER_FUNCTIONS(MSSM_Phys)
 
}

#endif
