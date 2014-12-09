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
      virtual Spectrum& get_parent() const {return my_parent;}

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
      virtual Spectrum& get_parent() const {return my_parent;}

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
      MSSM_Phys(MSSMSpec<Model> &x) : my_parent(x) {}
      
      Model get_bound_spec() const; 
   };
    
   template <class Model>
   class MSSMSpec : public Spec<Model> {
      friend class MSSM_DRbarPars<Model>;
      friend class MSSM_Phys<Model>;
   private:
      //Model model;
      int index_offset;
      virtual int get_index_offset() const {return index_offset;}

   public:
      Model model;

      /// Internal instances of the derived inner classes
      MSSM_Phys<Model> mssm_ph;
      MSSM_DRbarPars<Model> mssm_drbar_pars;
      //constructors
      MSSMSpec(bool switch_index_convention=false);
      MSSMSpec(Model&,bool switch_index_convention=false);

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
   MSSMSpec<M>::MSSMSpec(M& m, bool switch_index_convention) :
      model(m),
      mssm_ph(*this),
      mssm_drbar_pars(*this),
      Spec<M>(mssm_drbar_pars, mssm_ph),
      index_offset(-1)
   {
      if (switch_index_convention) index_offset = 0;
   }
   
   // Default constructor
   template <class M>
   MSSMSpec<M>::MSSMSpec(bool switch_index_convention) :
      mssm_ph(*this),
      mssm_drbar_pars(*this),
      Spec<M>(mssm_drbar_pars, mssm_ph),
      index_offset(-1)
   {
      if (switch_index_convention) index_offset = 0;
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
   
      //there are no mappings for this case in the MSSM.
   
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
      tmp_map["TYd"]= FInfo2( &Model::get_TYd, {0,1,2}, {0,1,2} );
      tmp_map["TYe"]= FInfo2( &Model::get_TYe, {0,1,2}, {0,1,2} );
      tmp_map["TYu"]= FInfo2( &Model::get_TYu, {0,1,2}, {0,1,2} );
      tmp_map["ad"] = FInfo2( &Model::get_TYd, {0,1,2}, {0,1,2} );
      tmp_map["ae"] = FInfo2( &Model::get_TYe, {0,1,2}, {0,1,2} );
      tmp_map["au"] = FInfo2( &Model::get_TYu, {0,1,2}, {0,1,2} );
   
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
     
      tmp_map["Yd"]= FInfo2( &Model::get_Yd, {0,1,2}, {0,1,2} );
      tmp_map["Ye"]= FInfo2( &Model::get_Ye, {0,1,2}, {0,1,2} );
      tmp_map["Yu"]= FInfo2( &Model::get_Yu, {0,1,2}, {0,1,2} );
     
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
    
    // these are not present in the model object currently
    // But maybe we should add them
    // tmp_map["MGoldstone0"] = &Model::get_DRbar_neut_goldstone;
    // tmp_map["MA0"] = &Model::get_DRbar_neut_CPodd_higgs;
    // tmp_map["MGoldstonePM"] = &Model::get_DRbar_ch_goldstone; 
    // tmp_map["MHpm"] = &Model::get_DRbar_ch_higgs; 
    
    // tmp_map["Mtop"] = &Model::get_DRbar_mtop;
    // tmp_map["Mcharm"] = &Model::get_DRbar_mcharm;
    // tmp_map["Mup"] = &Model::get_DRbar_mup;
    // tmp_map["Mbottom"] = &Model::get_DRbar_mbottom;
    // tmp_map["Mstrange"] = &Model::get_DRbar_mstrange;
    // tmp_map["Mdown"] = &Model::get_DRbar_mdown;
    // tmp_map["Mtau"] = &Model::get_DRbar_mtau; 
    // tmp_map["Mmuon"] = &Model::get_DRbar_mmuon; 
    // tmp_map["Melectron"] = &Model::get_DRbar_melectron; 
    return tmp_map;
   }
   //map for string access with an index supplied
   template <class Model>
   typename MSSM_DRbarPars<Model>::fmap1 MSSM_DRbarPars<Model>::fill_TreeMass_map1()
   {
   fmap1 tmp_map;
   tmp_map["MSd"] = FInfo1( &Model::get_MSd, {0,1,2,3,4,5} );
   tmp_map["MSv"] = FInfo1( &Model::get_MSv, {0,1,2} );
    tmp_map["MSu"] = FInfo1( &Model::get_MSu, {0,1,2,3,4,5} );
    tmp_map["MSe"] = FInfo1( &Model::get_MSe, {0,1,2,3,4,5} );
    tmp_map["Mh0"] = FInfo1( &Model::get_Mhh, {0,1} );
    //Here we may access the goldstone boson
    // and higgs. maybe too dangerous to keep?
    tmp_map["MA0"] = FInfo1( &Model::get_MAh, {0,1} );      
    //Here we may access the goldstone boson
    //and higgs. maybe too dangerous to keep?
    tmp_map["MHpm"] = FInfo1( &Model::get_MHpm, {0,1} );   
    tmp_map["MCha"] = FInfo1( &Model::get_MCha, {0,1} );
    tmp_map["MChi"] = FInfo1( &Model::get_MChi, {0,1,2,3} );
    
    tmp_map["MFd"] = FInfo1( &Model::get_MFd, {0,1,2} );
    tmp_map["MFu"] = FInfo1( &Model::get_MFu, {0,1,2} );
    tmp_map["MFe"] = FInfo1( &Model::get_MFe, {0,1,2} );
    return tmp_map;
   }
   
  
   template <class Model>
   typename MSSM_Phys<Model>::fmap MSSM_Phys<Model>::fill_PoleMass_map(){
      fmap tmp_map;
     
      // tmp_map["MZ"] = &Model::get_Pole_MZ;
      // tmp_map["MW"] = &Model::get_Pole_MW;

      tmp_map["MZ"] = &Model::get_MVZ_pole_slha;
      tmp_map["MW"] = &Model::get_MVWm_pole_slha;

      tmp_map["MGluino"] = &Model::get_MGlu_pole_slha; 
      //tmp_map["MGluon"] = &Model::get_MGluon_pole_slha;
      tmp_map["MGluon"] = &Model::get_MVG_pole_slha;
         //tmp_map["MPhoton"] = &Model::get_pole_MPhoton;
      tmp_map["MPhoton"] = &Model::get_MVP_pole_slha;

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

      tmp_map["MSd"] = FInfo1( &Model::get_MSd_pole_slha, {0,1,2,3,4,5} );
      tmp_map["MSv"] = FInfo1( &Model::get_MSv_pole_slha, {0,1,2} );
      tmp_map["MSu"] = FInfo1( &Model::get_MSu_pole_slha, {0,1,2,3,4,5} );
      tmp_map["MSe"] = FInfo1( &Model::get_MSe_pole_slha, {0,1,2,3,4,5} );
      tmp_map["Mh0"] = FInfo1( &Model::get_Mhh_pole_slha, {0,1} );
      //Here we may access the goldstone boson
    // and higgs. maybe too dangerous to keep?
      tmp_map["MA0"] = FInfo1( &Model::get_MAh_pole_slha, {0,1} );      
      //Here we may access the goldstone boson
      //and higgs. maybe too dangerous to keep?
      tmp_map["MHpm"] = FInfo1( &Model::get_MHpm_pole_slha, {0,1} );   
      tmp_map["MCha"] = FInfo1( &Model::get_MCha_pole_slha, {0,1} );
      tmp_map["MChi"] = FInfo1( &Model::get_MChi_pole_slha, {0,1,2,3} );
    
      tmp_map["MFd"] = FInfo1( &Model::get_MFd_pole_slha, {0,1,2} );
      tmp_map["MFu"] = FInfo1( &Model::get_MFu_pole_slha, {0,1,2} );
      tmp_map["MFe"] = FInfo1( &Model::get_MFe_pole_slha, {0,1,2} );

      return tmp_map;
   }
   
   //returns empty mass sicne none of these exist in this model
   template <class Model>
   typename MSSM_Phys<Model>::fmap MSSM_Phys<Model>::fill_PoleMixing_map(){
      fmap tmp_map;
      // this is currently empty in MSSM, could add Higgs mixing, alpha 
      return tmp_map;
   }
   
   //returns empty mass sicne none of these exist in this model
   template <class Model>
   typename MSSM_Phys<Model>::fmap1 MSSM_Phys<Model>::fill_PoleMixing_map1(){
      fmap1 tmp_map;
    // this is currently empty in MSSM,
      return tmp_map;
   }
   
   template <class Model>
   typename MSSM_Phys<Model>::fmap2 MSSM_Phys<Model>::fill_PoleMixing_map2(){
      fmap2 tmp_map;
      //Need to add these to generated code before I can use them here.
      tmp_map["ZD"] = FInfo2( &Model::get_ZD_pole_slha, 
                              {0,1,2,3,4,5},{0,1,2,3,4,5} );
      tmp_map["ZV"] = FInfo2( &Model::get_ZV_pole_slha, 
                              {0,1,2},{0,1,2} );
      tmp_map["ZU"] = FInfo2( &Model::get_ZU_pole_slha, 
                              {0,1,2,3,4,5},{0,1,2,3,4,5} );
      tmp_map["ZE"] = FInfo2( &Model::get_ZE_pole_slha, 
                              {0,1,2,3,4,5},{0,1,2,3,4,5} );
      tmp_map["ZH"] = FInfo2( &Model::get_ZH_pole_slha, 
                              {0,1},{0,1} );
      tmp_map["ZA"] = FInfo2( &Model::get_ZA_pole_slha, 
                               {0,1},{0,1} );
      tmp_map["ZHPM"] = FInfo2( &Model::get_ZP_pole_slha, 
                                {0,1},{0,1} );
      tmp_map["ZN"] = FInfo2( &Model::get_ZN_pole_slha, 
                              {0,1,2,3},{0,1,2,3} );

      tmp_map["UM"] = FInfo2( &Model::get_UM_pole_slha, 
                              {0,1},{0,1} );
      tmp_map["UP"] = FInfo2( &Model::get_UP_pole_slha, 
                              {0,1},{0,1} );
   
      /* Could add SM fermion mixing but these are only filled
         when we actually calculate the SM pole masses
         which is not necessary */
     
      return tmp_map;
   }
    
   
   template <class Model>
   Model MSSMSpec<Model>::get_modelobject() {
      return model;
   }
   
   
   // Use our time-saving macro to define common member functions
   MODEL_SPEC_TEMPLATE_MEMBER_FUNCTIONS(MSSMSpec)
   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS(MSSM_DRbarPars)
   MODEL_PHYS_TEMPLATE_MEMBER_FUNCTIONS(MSSM_Phys)
 
}

#endif
