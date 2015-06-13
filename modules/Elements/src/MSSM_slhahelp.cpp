//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of routines to help users / Bits 
///  translate between SLHA2 sfermions 
///  and SLHA1 (or similar) sfermions 
///
///  *********************************************

#include "gambit/Elements/MSSM_slhahelp.hpp"

namespace Gambit {
   namespace slhahelp {

      /// type defs for pair types etc that we will use in maps
      typedef std::pair<int,str> p_int_string;
      typedef std::pair<int,int> pair_ints;
      typedef std::pair<str,pair_ints> pair_string_ints;
      typedef std::pair<str,str> pair_strings;
      
      std::map<str, p_int_string> init_gauge_label_to_index_type() 
      {
         std::map<str, p_int_string> gauge_label_to_index_type;
         
         gauge_label_to_index_type["~e_L"] = std::make_pair(1,"~e");
         gauge_label_to_index_type["~mu_L"] = std::make_pair(2,"~e");
         gauge_label_to_index_type["~tau_L"] = std::make_pair(3,"~e");
         gauge_label_to_index_type["~e_R"] = std::make_pair(4,"~e");
         gauge_label_to_index_type["~mu_R"] = std::make_pair(5,"~e");
         gauge_label_to_index_type["~tau_R"] = std::make_pair(6,"~e");

         gauge_label_to_index_type["~d_L"] = std::make_pair(1,"~d");
         gauge_label_to_index_type["~s_L"] = std::make_pair(2,"~d");
         gauge_label_to_index_type["~b_L"] = std::make_pair(3,"~d");
         gauge_label_to_index_type["~d_R"] = std::make_pair(4,"~d");
         gauge_label_to_index_type["~s_R"] = std::make_pair(5,"~d");
         gauge_label_to_index_type["~b_R"] = std::make_pair(6,"~d");   

         gauge_label_to_index_type["~u_L"] = std::make_pair(1,"~u");
         gauge_label_to_index_type["~c_L"] = std::make_pair(2,"~u");
         gauge_label_to_index_type["~t_L"] = std::make_pair(3,"~u");
         gauge_label_to_index_type["~u_R"] = std::make_pair(4,"~u");
         gauge_label_to_index_type["~c_R"] = std::make_pair(5,"~u");
         gauge_label_to_index_type["~t_R"] = std::make_pair(6,"~u"); 

         gauge_label_to_index_type["~nu_e_L"] = std::make_pair(1,"~nu");
         gauge_label_to_index_type["~nu_mu_L"] = std::make_pair(2,"~nu");
         gauge_label_to_index_type["~nu_tau_L"] = std::make_pair(3,"~nu");
         
         return gauge_label_to_index_type;
      }

      
      std::map<str, p_int_string> gauge_label_to_index_type =
         init_gauge_label_to_index_type();
      std::map<str, p_int_string> init_mass_label_to_index_type()
      {
         std::map<str, p_int_string> mass_label_to_index_type;
         mass_label_to_index_type["~e-_1"] = std::make_pair(1,"~e");
         mass_label_to_index_type["~e-_2"] = std::make_pair(2,"~e");
         mass_label_to_index_type["~e-_3"] = std::make_pair(3,"~e");
         mass_label_to_index_type["~e-_4"] = std::make_pair(4,"~e");
         mass_label_to_index_type["~e-_5"] = std::make_pair(5,"~e");
         mass_label_to_index_type["~e-_6"] = std::make_pair(6,"~e");

         mass_label_to_index_type["~d_1"] = std::make_pair(1,"~d");
         mass_label_to_index_type["~d_2"] = std::make_pair(2,"~d");
         mass_label_to_index_type["~d_3"] = std::make_pair(3,"~d");
         mass_label_to_index_type["~d_4"] = std::make_pair(4,"~d");
         mass_label_to_index_type["~d_5"] = std::make_pair(5,"~d");
         mass_label_to_index_type["~d_6"] = std::make_pair(6,"~d");   

         mass_label_to_index_type["~u_1"] = std::make_pair(1,"~u");
         mass_label_to_index_type["~u_2"] = std::make_pair(2,"~u");
         mass_label_to_index_type["~u_3"] = std::make_pair(3,"~u");
         mass_label_to_index_type["~u_4"] = std::make_pair(4,"~u");
         mass_label_to_index_type["~u_5"] = std::make_pair(5,"~u");
         mass_label_to_index_type["~u_6"] = std::make_pair(6,"~u"); 

         mass_label_to_index_type["~nu_1"] = std::make_pair(1,"~nu");
         mass_label_to_index_type["~nu_2"] = std::make_pair(2,"~nu");
         mass_label_to_index_type["~nu_3"] = std::make_pair(3,"~nu");     
         
         return  mass_label_to_index_type;
      }
      
      std::map<str, p_int_string> mass_label_to_index_type 
      = init_mass_label_to_index_type();

      /// map to extract info from family state   
      std::map<str, pair_string_ints> init_familystate_label() 
      {
         std::map<str, pair_string_ints> familystate_label;
        
          //pairs labeling family, mass
         pair_ints const three_one(3,1);
         pair_ints const three_two(3,2);
         pair_ints const two_one(3,1);
         pair_ints const two_two(3,2);
         pair_ints const one_one(3,1);
         pair_ints const one_two(3,2);
      
         ///triple labelling type, generation and mass order of family states
         pair_string_ints const stop1("~u",three_one);
         pair_string_ints const stop2("~u",three_two);
         pair_string_ints const sbot1("~d",three_one);
         pair_string_ints const sbot2("~d",three_two);
         pair_string_ints const stau1("~e",three_one);
         pair_string_ints const stau2("~e",three_two);
         pair_string_ints const scharm1("~u",two_one);
         pair_string_ints const scharm2("~u",two_two);
         pair_string_ints const sstrange1("~d",two_one);
         pair_string_ints const sstrange2("~d",two_two);
         pair_string_ints const smuon1("~e",two_one);
         pair_string_ints const smuon2("~e",two_two);
         pair_string_ints const sup1("~u",one_one);
         pair_string_ints const sup2("~u",one_two);
         pair_string_ints const sdown1("~d",one_one);
         pair_string_ints const sdown2("~d",one_two);
         pair_string_ints const selectron1("~e",one_one);
         pair_string_ints const selectron2("~e",one_two);
         /// only have left handed sneutrinos in MSSM
         pair_string_ints const snue1("~nu",three_one);
         pair_string_ints const snumu1("~nu",two_one);
         pair_string_ints const snutau1("~nu",one_one);

         familystate_label["~t_1"] = stop1; 
         familystate_label["~t_2"] = stop2;
         familystate_label["~b_1"] = sbot1; 
         familystate_label["~b_2"] = sbot2; 
         familystate_label["~tau_1"] = stau1; 
         familystate_label["~tau_2"] = stau2;
         
         familystate_label["~c_1"] = scharm1; 
         familystate_label["~c_2"] = scharm2;
         familystate_label["~s_1"] = sstrange1; 
         familystate_label["~s_2"] = sstrange2; 
         familystate_label["~muon_1"] = smuon1; 
         familystate_label["~muon_2"] = smuon2;
         
         ///  maybe we shouldn't do first gen it's confusing
         familystate_label["~u_1"] = sup1; 
         familystate_label["~u_2"] = sup2;
         familystate_label["~d_1"] = sdown1; 
         familystate_label["~d_2"] = sdown2; 
         familystate_label["~e-_1"] = selectron1; 
         familystate_label["~e-_2"] = selectron2;
         /// these are even less needed since no l-r mixing without r state
         familystate_label["~nu_1"] = snue1;
         familystate_label["~nu_2"] = snumu1;
         familystate_label["~nu_3"] = snutau1;
         
         return familystate_label;

      }
      
      std::map<str, pair_string_ints> familystate_label 
      = init_familystate_label();
      
      ///map to obtain left_right gauge_pairs from state info
      /// helps us reuse other routiones with string arguments 
      std::map<p_int_string, pair_strings>  init_type_family_to_gauge_states()
      {
         std::map<p_int_string, pair_strings> type_family_to_gauge_states;
        
         type_family_to_gauge_states[std::make_pair(3,"~u")] 
            = std::make_pair("~t_L","~t_R");
         type_family_to_gauge_states[std::make_pair(3,"~d")] 
            = std::make_pair("~b_L","~b_R");
         type_family_to_gauge_states[std::make_pair(3,"~e")] 
            = std::make_pair("~tau_L","~tau_R");
         type_family_to_gauge_states[std::make_pair(2,"~u")] 
            = std::make_pair("~c_L","~c_R");
         type_family_to_gauge_states[std::make_pair(2,"~d")] 
            = std::make_pair("~s_L","~s_R");
         type_family_to_gauge_states[std::make_pair(2,"~e")] 
            = std::make_pair("~mu_L","~mu_R");
         type_family_to_gauge_states[std::make_pair(1,"~u")] 
            = std::make_pair("~u_L","~u_R");
         type_family_to_gauge_states[std::make_pair(1,"~d")] 
            = std::make_pair("~d_L","~d_R");
         type_family_to_gauge_states[std::make_pair(1,"~e")] 
            = std::make_pair("~e_L","~e_R"); 
         //no sneutrino gauges pairs as no right sneutrino
         return type_family_to_gauge_states;
 
      }
      
       
      std::map<p_int_string, pair_strings>  type_family_to_gauge_states 
      = init_type_family_to_gauge_states();


      ///maps directly from family string to left_right gauge_pairs
      /// helps us reuse other routines that take string arguments 
      std::map<str, pair_strings> init_family_state_to_gauge_state()
      {
         std::map<str, pair_strings> family_state_to_gauge_state;
         family_state_to_gauge_state["~t_1"] = std::make_pair("~t_L","~t_R");
         family_state_to_gauge_state["~t_2"] = std::make_pair("~t_L","~t_R");
         family_state_to_gauge_state["~b_1"] = std::make_pair("~b_L","~b_R");
         family_state_to_gauge_state["~b_2"] = std::make_pair("~b_L","~b_R");
         family_state_to_gauge_state["~tau_1"] = std::make_pair("~tau_L","~tau_R");
         family_state_to_gauge_state["~tau_2"] = std::make_pair("~tau_L","~tau_R");
         
         family_state_to_gauge_state["~c_1"] = std::make_pair("~c_L","~c_R");
         family_state_to_gauge_state["~c_2"] = std::make_pair("~c_L","~c_R");
         family_state_to_gauge_state["~s_1"] = std::make_pair("~s_L","~s_R");
         family_state_to_gauge_state["~s_2"] = std::make_pair("~s_L","~s_R");
         family_state_to_gauge_state["~muon_1"] = std::make_pair("~mu_L","~mu_R");
         family_state_to_gauge_state["~muon_2"] = std::make_pair("~mu_L","~mu_R");
         
         family_state_to_gauge_state["~u_1"] = std::make_pair("~u_L","~u_R");
         family_state_to_gauge_state["~u_2"] = std::make_pair("~u_L","~u_R");
         family_state_to_gauge_state["~d_1"] = std::make_pair("~d_L","~d_R");
         family_state_to_gauge_state["~d_2"] = std::make_pair("~d_L","~d_R");
         family_state_to_gauge_state["~e-_1"] = std::make_pair("~e_L","~e_R");
         family_state_to_gauge_state["~e-_2"] = std::make_pair("~e_L","~e_R");
         
         return family_state_to_gauge_state;

      }
      std::map<str, pair_strings>  family_state_to_gauge_state 
      = init_family_state_to_gauge_state();
      
       ///maps directly from gauge_es string to familystates
      /// helps us reuse other routines that take string arguments 
      std::map<str, pair_strings>  init_gauge_es_to_family_states()
      {
         std::map<str, pair_strings>  gauge_es_to_family_states;
         
         gauge_es_to_family_states["~t_L"] = std::make_pair("~t_1","~t_2");
         gauge_es_to_family_states["~t_R"] = std::make_pair("~t_1","~t_2");
         gauge_es_to_family_states["~b_L"] = std::make_pair("~b_1","~b_2");
         gauge_es_to_family_states["~b_R"] = std::make_pair("~b_1","~b_2");
         gauge_es_to_family_states["~tau_L"] = std::make_pair("~tau_1","~tau_2");
         gauge_es_to_family_states["~tau_R"] = std::make_pair("~tau_1","~tau_2");
         gauge_es_to_family_states["~c_L"] = std::make_pair("~c_1","~c_2");
         gauge_es_to_family_states["~c_R"] = std::make_pair("~c_1","~c_2");
         gauge_es_to_family_states["~s_L"] = std::make_pair("~s_1","~s_2");
         gauge_es_to_family_states["~s_R"] = std::make_pair("~s_1","~s_2");
         gauge_es_to_family_states["~mu_L"] = std::make_pair("~mu_1","~mu_2");
         gauge_es_to_family_states["~mu_R"] = std::make_pair("~mu_1","~mu_2");

         gauge_es_to_family_states["~u_L"] = std::make_pair("~u_1","~u_2");
         gauge_es_to_family_states["~u_R"] = std::make_pair("~u_1","~u_2");
         gauge_es_to_family_states["~d_L"] = std::make_pair("~d_1","~d_2");
         gauge_es_to_family_states["~d_R"] = std::make_pair("~d_1","~d_2");
         gauge_es_to_family_states["~e_L"] = std::make_pair("~e-_1","~e-_2");
         gauge_es_to_family_states["~e_R"] = std::make_pair("~e-_1","~e-_2");

         return gauge_es_to_family_states; 
         
      }
      std::map<str, pair_strings>  gauge_es_to_family_states 
      = init_gauge_es_to_family_states() ;

      /// map from string representing type (ie up-squars, down-squars or 
      /// charged selptons) to appropriate set of mass eigenstates 
      std::map<str,std::vector<str>> init_type_to_vec_of_mass_es() 
      {
         std::map<str,std::vector<str>> type_to_vec_of_mass_es;
         str upsqst[]= {"~u_1", "~u_2", "~u_3", "~u_4", "~u_5", "~u_6"};
         std::vector<str> up_squark_strs(upsqst, upsqst 
                                         + sizeof(upsqst) / sizeof(str) ); 
         str dsqst[]= {"~d_1", "~d_2", "~d_3", "~d_4", "~d_5", "~d_6"};
         std::vector<str> down_squark_strs(dsqst, dsqst 
                                           + sizeof(dsqst) / sizeof(str));
         str cslst[] = {"~e-_1", "~e-_2", "~e-_3", "~e-_4", "~e-_5", "~e-_6"};
         std::vector<str> ch_slepton_strs(cslst, cslst 
                                           + sizeof(cslst) / sizeof(str) );
         str snst[] = {"~nu_1", "~nu_2", "~nu_3"};
         std::vector<str> sneutrino_strs(snst, snst 
                                         + sizeof(snst) / sizeof(str) );

         type_to_vec_of_mass_es["~u"] = up_squark_strs;
         type_to_vec_of_mass_es["~d"] = down_squark_strs; 
         type_to_vec_of_mass_es["~e"] = ch_slepton_strs;
         type_to_vec_of_mass_es["~nu"] = sneutrino_strs;
         
         return type_to_vec_of_mass_es;
      }

      std::map<str,std::vector<str>> type_to_vec_of_mass_es 
         = init_type_to_vec_of_mass_es();
      
      std::map<str,std::vector<str>> init_type_to_vec_of_gauge_es()
      {
         std::map<str,std::vector<str>> type_to_vec_of_gauge_es;
         str upsqgst[] = {"~u_L", "~c_L", "~t_L", "~u_R", "~c_R", "~t_R"};
         std::vector<str> up_sq_gauge_strs(upsqgst, upsqgst 
                                         + sizeof(upsqgst) / sizeof(str) );  
         str dsqgst[] = {"~d_L", "~s_L", "~b_L", "~d_R", "~s_R", "~b_R"};
         std::vector<str> down_sq_gauge_strs(dsqgst, dsqgst 
                                           + sizeof(dsqgst) / sizeof(str));
         str cslgst[] ={"~e_L", "~mu_L", "~tau_L", "~e_R", "~mu_R", "~tau_R"};
         std::vector<str> ch_sl_gauge_strs(cslgst, cslgst 
                                           + sizeof(cslgst) / sizeof(str) ); 
         str sngst[] =  {"~nu_e_L", "~nu_mu_L", "~nu_tau_L"};
         std::vector<str> sne_gauge_strs(sngst, sngst 
                                         + sizeof(sngst) / sizeof(str) ); 
         
         type_to_vec_of_gauge_es["~u"] = up_sq_gauge_strs;
         type_to_vec_of_gauge_es["~d"] = down_sq_gauge_strs; 
         type_to_vec_of_gauge_es["~e"] = ch_sl_gauge_strs;
         type_to_vec_of_gauge_es["~nu"] = sne_gauge_strs;
         
         return type_to_vec_of_gauge_es;

      }
      std::map<str,std::vector<str>> type_to_vec_of_gauge_es 
         = init_type_to_vec_of_gauge_es();

      // these two should be switched over to members of the sectrum object itself
      /// This will simplify things.
      std::vector<double> get_Pole_Mixing_col(str type, 
                                              int gauge_index, 
                                              const SubSpectrum* mssm)
      {
         //extract info about indices for type using map
         std::vector<str> mass_es_strs = type_to_vec_of_mass_es[type];
         double col_length = mass_es_strs.size();
         std::vector<double> mass_state_content(col_length);
         //iterate over collumn in some way, e..g
         for(std::vector<int>::size_type i = 1; i <= col_length; i++) 
            {
               //Mix_{row, col}
               /// iterate through row indice with column indice fixed
               mass_state_content[i - 1] =  
                  mssm->phys.get_Pole_Mixing(type, i, gauge_index); /// fill 
           }
         return mass_state_content;
      }

/// This will simplify things.
      std::vector<double> get_Pole_Mixing_row(str type, int mass_index, 
                                              const SubSpectrum* mssm) 
      {
         std::vector<str> gauge_es_strs = type_to_vec_of_gauge_es[type];
         double row_length = gauge_es_strs.size();
         std::vector<double> gauge_state_content(row_length);   
         for(std::vector<int>::size_type i = 1; i <= row_length; i++) 
            {
               /// Mix_{row, col}
               /// iterate through column indice with row indice fixed
               gauge_state_content[i - 1] =  
                  mssm->phys.get_Pole_Mixing(type, mass_index, i); /// fill
            }
         return gauge_state_content;
      }

      
      /// the rest of these belong here as they are MSSM specific things
      
      /// returns vector representing composition of requested gauge state
      /// in terms of the slha2 mass eigenstates (~u_1 ...~u_6 etc)
      /// which is just a column in the mixing matrix 
      std::vector<double> get_mass_comp_for_gauge(str gauge_es, 
                                                  const SubSpectrum* mssm)
      {   
         /// extract info from string via map
         p_int_string index_type = gauge_label_to_index_type[gauge_es];        
         str type = index_type.second;
         int gauge_index  = index_type.first; 
         
         std::vector<double> mass_state_content = 
            get_Pole_Mixing_col(type, gauge_index, mssm);
         
         return mass_state_content;
      }
      
      ///routine to return mass state admixure for given gauge state
      /// in the end this is a trival routine but may help      
      double get_mixing_element(str gauge_es, 
                                       str mass_es, 
                                       const SubSpectrum* mssm)
      { 
         ///extract info from maps
         p_int_string mass_es_index_type = mass_label_to_index_type[mass_es]; 
         p_int_string gauge_es_index_type = gauge_label_to_index_type[gauge_es];
         int gauge_index = gauge_es_index_type.first;
         int mass_index = mass_es_index_type.first;
         /// type's should match but getting both allows us to throw error
         str type = mass_es_index_type.second;
         str type_gauge = gauge_es_index_type.second;
         if(type!=type_gauge) 
            {
               /// throw exception in gambit
               utils_error().raise(LOCAL_INFO, "function get_mixing_element called with type's for the gauge eigenstate and mass eigenstate that don't match.");
            }
         /// will need to add mssm object to cal method in gambit
         double admix = mssm->phys.get_Pole_Mixing(type, mass_index, 
                                                   gauge_index);
         return admix;
      }
      
      /// returns vector representing composition of requested mass eigenstate
      /// in terms of the slha2 gauge eigenstates (~u_L,~c_L,...~t_R etc)
      /// which is just a row in the mixing matrix 
      /// just wraps get_Pole_Mixing_row after extracting info from string
      std::vector<double> get_gauge_comp_for_mass(str mass_es, 
                                                  const SubSpectrum* mssm)
      {   
         /// extract info using map
         p_int_string index_type = mass_label_to_index_type[mass_es];
         int mass_index = index_type.first; 
         str type = index_type.second;
         //fill vector with mixings
         std::vector<double> mass_state_content = 
            get_Pole_Mixing_row(type, mass_index, mssm);
         
         return mass_state_content;
      }
      
      /// indentifies the state with largest gauge_es content
      /// also fills largest max_mixing and full gauge_composition 
      str mass_es_from_gauge_es(str gauge_es, double & max_mixing, 
                                std::vector<double> & gauge_composition, 
                                const SubSpectrum* mssm)
      {
         /// passed in massstate to be set
         double temp_admix = 0.0;
         /// make sure this is zero to start
         max_mixing = 0;
         /// retrive type from the gauge_es string
         str type = (gauge_label_to_index_type[gauge_es]).second;
         str mass_es, temp_mass_es;
         /// iterate over vector of strings for mass states 
         std::vector<str> mass_es_set = type_to_vec_of_mass_es[type];
         typedef std::vector<str>::iterator iter;
         for(iter it = mass_es_set.begin(); it != mass_es_set.end(); ++it){
            temp_mass_es = *it;    
            temp_admix = get_mixing_element(gauge_es, temp_mass_es, 
                                                    mssm);
            gauge_composition.push_back(temp_admix);
            //select largest 
            if(fabs(temp_admix) > fabs(max_mixing)) 
               {
               max_mixing = temp_admix; 
               mass_es = temp_mass_es;
            }
         } //end iteration over temp_mass_es
         
         return mass_es; 
      }
      /// as above but doesn't fill a gauge_composition vector 
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped gauge_composition entirely but at the cost of a lot of
      /// code duplication
      str mass_es_from_gauge_es(str gauge_es, double & max_mixing, 
                                const SubSpectrum* mssm) 
      {
         std::vector<double> gauge_composition;
         str mass_es = mass_es_from_gauge_es(gauge_es, max_mixing, 
                                             gauge_composition, mssm);
         return mass_es;
         
      }
   
      /// as above but doesn't fill max_mixing 
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped max_mixing entirely but at the cost of a lot of
      /// code duplication
      str mass_es_from_gauge_es(str gauge_es, 
                                std::vector<double> & gauge_composition, 
                                const SubSpectrum* mssm)
      {
         double max_mixing = 0;
         str mass_es =  mass_es_from_gauge_es(gauge_es, max_mixing, 
                                              gauge_composition, mssm);
         
         return mass_es; 
      }


       /// as above but doesn't fill max_mixing or gauge_composition
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped max_mixing entirely but at the cost of a lot of
      /// code duplication
      str mass_es_from_gauge_es(str gauge_es, 
                                const SubSpectrum* mssm)
      {
         double max_mixing = 0;
         std::vector<double> gauge_composition;
         str mass_es =  mass_es_from_gauge_es(gauge_es, max_mixing, 
                                              gauge_composition, mssm);
         return mass_es; 
      }

      /// as above but do test against tol internally
      str mass_es_from_gauge_es(str gauge_es, const SubSpectrum* mssm, 
                                double tol, str context)
      {
         double max_mixing = 0;
         std::vector<double> gauge_composition;
         str mass_es = mass_es_from_gauge_es(gauge_es, max_mixing, 
                                             gauge_composition, mssm);
         str full_context = LOCAL_INFO + " called from " + context;
         if((max_mixing*max_mixing) <= 1-tol){
            utils_error().raise(full_context, "mass_es from gauge requested when mxing away from closest gauge_es is greater than tol"); 
          }
         return mass_es; 
      }
      
      /// identifies gauge_es with largest mass_es content
      /// also fills largest max_mixing and full mass_composition 
      str gauge_es_from_mass_es(str mass_es, double & max_mixing, 
                                std::vector<double> & mass_composition,
                                const SubSpectrum* mssm)
      {
         /// passed in massstate to be set
         double temp_admix = 0.0;
         /// start with zero
         max_mixing = 0;
         /// retrive type from the gauge_es string
         str type = (mass_label_to_index_type[mass_es]).second;
         str gauge_es, temp_gauge_es;
         /// iterate over vector of strings for mass states 
         std::vector<str> gauge_es_vec = type_to_vec_of_gauge_es[type];
         typedef std::vector<str>::iterator iter;
         for(iter it = gauge_es_vec.begin(); it != gauge_es_vec.end(); ++it){
            temp_gauge_es = *it;   
            temp_admix = get_mixing_element(temp_gauge_es, mass_es,  mssm); 
            mass_composition.push_back(temp_admix);
            //select largest 
            if(fabs(temp_admix) > fabs(max_mixing)) 
               {
               max_mixing = temp_admix; 
               gauge_es = temp_gauge_es;
               }
         } //end iteration over temp_mass_es
         
         //return string for closest gauge_es
         return gauge_es;
      }
      
      /// as above but doesn't fill a gauge_composition vector 
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped gauge_composition entirely but at the cost of a lot of
      /// code duplication
      str gauge_es_from_mass_es(str mass_es, double & max_mixing, 
                                const SubSpectrum* mssm) 
      {
         std::vector<double> mass_composition;
         str gauge_es = gauge_es_from_mass_es(mass_es, max_mixing, 
                                              mass_composition, mssm);
         return gauge_es;
         
      }
   
      /// as above but doesn't fill max_mixing 
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped max_mixing entirely but at the cost of a lot of
      /// code duplication
      str gauge_es_from_mass_es(str mass_es, 
                                std::vector<double> & mass_composition, 
                                const SubSpectrum* mssm)
      {
         double max_mixing;
         str gauge_es =  gauge_es_from_mass_es(mass_es, max_mixing, 
                                           mass_composition, mssm);
         
         return gauge_es; 
      }
      
      /// as above but doesn't fill max_mixing or gauge_composition
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped max_mixing entirely but at the cost of a lot of
      /// code duplication
      str gauge_es_from_mass_es(str mass_es, 
                                const SubSpectrum* mssm)
      {
         double max_mixing;
         std::vector<double> mass_composition;
         str gauge_es =  gauge_es_from_mass_es(mass_es, max_mixing, 
                                               mass_composition, mssm);
         
         return gauge_es; 
      }


      /// as above but do test against tol internally
      str gauge_es_from_mass_es(str mass_es, const SubSpectrum* mssm, 
                                double tol, str context)
      {
         double max_mixing;
         std::vector<double> mass_composition;
         str gauge_es = gauge_es_from_mass_es(mass_es, max_mixing, 
                                              mass_composition, mssm);
         str full_context = LOCAL_INFO + " called from " + context;
         if((max_mixing*max_mixing) <= 1-tol){
            utils_error().raise(full_context, "gauge_es from mass_es requested when mxing away from closest mass_es is greater than tol"); 
         }
         return gauge_es; 
      }



      /// identify the two mass eigenstate corresponding to the approximate 
      /// family states, e.g. stops ("~u",3), smuons ("~mu", 2) etc 
      /// Note: when there is family mixing there's no good definition ~t_1, 
      //~t_2 etc if defined as the states you get from diagonalising a 2by2 
      /// mass (sub)matrix then extensive manipulations would be required
      /// So here we identify the mass eigenstates closest to the family ones 
      ///which is a better defined question when there is family mixing prsesent
      ///and more useful here anyway
      //returns a pair of strings labling the lighter one first 
      pair_strings identify_mass_ess_for_family(str type, 
                                                      int family,
                                                      const SubSpectrum* mssm)
      {
         /// need to turn type and family into a string
         /// need to simplify the number of translations we do.
         p_int_string gen_type(family,type);
         pair_strings gauge_states = 
            type_family_to_gauge_states[gen_type];
         str gauge_esL=gauge_states.first;
         str gauge_esR=gauge_states.second;
        
         /// finds the mass_es with the largets mixing to
         /// passed gauge_es
         str mass_esL = mass_es_from_gauge_es(gauge_esL, mssm);
         str mass_esR = mass_es_from_gauge_es(gauge_esR, mssm);
         
         pair_strings answer;
         int mass_index_L = (mass_label_to_index_type[mass_esL]).first;
         int mass_index_R = (mass_label_to_index_type[mass_esR]).first;
         // order pair by mass
         if(mass_index_L < mass_index_R) 
            answer = std::make_pair(mass_esL,mass_esR);          
         else answer = std::make_pair(mass_esR,mass_esL);
         
         return answer;
      }

      // identify the mass eigenstate corresponding to family state     
      /// takes string and returns only requested state
      /// I suspect this is the more useful one
      str mass_es_closest_to_family(str familystate,
                                    const SubSpectrum* mssm)
      {
         pair_strings family_gauge_states = 
            family_state_to_gauge_state[familystate];
         str gauge_esL = family_gauge_states.first;
         str gauge_esR = family_gauge_states.second;
        
         // finds the mass_es with the largets mixing to
         // passed gauge_es
         str mass_esL = mass_es_from_gauge_es(gauge_esL, mssm);
         str mass_esR = mass_es_from_gauge_es(gauge_esR, mssm);
         
         // extract mass order (1 or 2) from string via map
         pair_string_ints type_family_massorder = 
            familystate_label[familystate];
         pair_ints family_massorder = type_family_massorder.second;
         int mass_order = family_massorder.second;
         // if massorder is 1 choose select from masstateL and mass_esR the one
         // with the lowest index else take highest
         int massorderL = (mass_label_to_index_type[mass_esL]).first;
         int massorderR = (mass_label_to_index_type[mass_esR]).first;
         str answer;
         if( (mass_order == 1 && massorderL < massorderR) ||  
             (mass_order == 2 && massorderL > massorderR) ) answer = mass_esL; 
         else answer = mass_esR;
         
         return answer;
      }
      
      /// returns vector with composition of closest the mass eigenstate 
      /// to give family state in terms of gauge eigenstates and stores
      /// mass eigenstate in mass_es
      std::vector<double> get_gauge_comp_for_family_state(str familystate,
                                                          str & mass_es,
                                                          const SubSpectrum* mssm)
      {   
         //get mass_es using one of our routines
         mass_es = mass_es_closest_to_family(familystate, mssm);
         /// extract info from strings via maps
         int mass_index = (mass_label_to_index_type[mass_es]).first;
         pair_string_ints state_info = familystate_label[familystate];
         str type = state_info.first;
         std::vector<double> gauge_es_content = 
            get_Pole_Mixing_row(type, mass_index,mssm);
         
         return gauge_es_content;
         
      }


      /// identifies the mass_es that is closest match to specified family state
      /// and fills mixture of the two gauge states with same family into
      /// std::vector gauge_composition
      /// also fills remaining off-family mixings into a second vector 
      str mass_es_closest_to_family(str familystate,
                                    std::vector<double> & gauge_composition,
                                    std::vector<double> & off_family_mixing,
                                    const SubSpectrum* mssm)
      {   
         //get mass_es using one of our routines
         str mass_es = mass_es_closest_to_family(familystate, mssm);
         /// extract info from strings via maps
         pair_strings gauge_states = family_state_to_gauge_state[familystate];
         str gauge_state_L = gauge_states.first;
         str gauge_state_R = gauge_states.second;
       
         p_int_string gauge_Lindex_type = 
            gauge_label_to_index_type[gauge_state_L];
         unsigned int gauge_L_index = gauge_Lindex_type.first;
         str type = gauge_Lindex_type.second;
         unsigned int gauge_R_index 
            = (gauge_label_to_index_type[gauge_state_R]).first;  
         int mass_index = (mass_label_to_index_type[mass_es]).first;   
         std::vector<str> gauge_es_strs = type_to_vec_of_gauge_es[type];
         double row_length = gauge_es_strs.size(); 
         for(std::vector<int>::size_type i = 1; i <= row_length; i++) 
            {
               double temp = mssm->phys.get_Pole_Mixing(type, mass_index, i); 
               if(i == gauge_L_index || i == gauge_R_index) 
                  gauge_composition.push_back(temp);
               else off_family_mixing.push_back(temp);
            }

         return mass_es;
         
      }
      /// identifies the mass_es that is closest match to specified family state
      /// and fills mixture of the two gauge states with same family into
      /// std::vector gauge_composition 
      str mass_es_closest_to_family(str familystate,
                                    std::vector<double> & gauge_composition,
                                    const SubSpectrum* mssm)
      {   
         std::vector<double> off_family_mixing;
         str mass_es = mass_es_closest_to_family(familystate, gauge_composition,
                                                 off_family_mixing, mssm);
         return mass_es;

      }
      /// identifies the mass_es that is closest match to specified family state
      /// and fills sqr_sum_mix with the square sum of each of the two mixings 
      /// into gauge_es of that family
      str mass_es_closest_to_family(str familystate,
                                    double & sqr_sum_mix,
                                    const SubSpectrum* mssm)
      {   
         std::vector<double> off_family_mixing;
         std::vector<double>  gauge_composition;
         str mass_es = mass_es_closest_to_family(familystate, gauge_composition,
                                                 off_family_mixing, mssm);
         sqr_sum_mix = gauge_composition[0] * gauge_composition[0];
         sqr_sum_mix += gauge_composition[1] * gauge_composition[1];
         return mass_es;

      }

      /// identifies the mass_es that is closest match to specified family
      /// does tol-test internally to check correctness of assumptions
      str mass_es_closest_to_family(str familystate, const SubSpectrum* mssm,
                                    double tol, str context)
      {   
         std::vector<double> off_family_mixing;
         std::vector<double>  gauge_composition;
         str mass_es = mass_es_closest_to_family(familystate, gauge_composition,
                                                 off_family_mixing, mssm);
         double sqr_sum_mix = gauge_composition[0] * gauge_composition[0];
         sqr_sum_mix += gauge_composition[1] * gauge_composition[1];
         str full_context = LOCAL_INFO + " called from " + context;
         if(sqr_sum_mix <= 1-tol){
            utils_error().raise(full_context, " mass_es_closest_to_family requested when family mixing away from closest mass_es is greater than tol"); 
         }

         return mass_es;

      }



      /// identifies the two mass_es which best matches specified family state
      /// storing them in strings and then returns 
      /// the 2by2 mixing matrix for that family state in the form
      /// (Mix_{11}, Mix_{12}, Mix_{21}, Mix_{22})
      /// It also  stores the mixing elements for the gauge states that don't 
      /// belong to the correct family for this state in a std::vector
      /// The latter should have entries which are zero in absense of 
      /// family mixing
      std::vector<double> family_state_mix_matrix(str type,
                                                  int family,
                                                  str & mass_es1,
                                                  str & mass_es2,
                                                  const SubSpectrum* mssm) 
      {
         /// get mass_es using one of our routines
         pair_strings mass_ess =
            identify_mass_ess_for_family(type, family, mssm);
         mass_es1 = mass_ess.first;
         mass_es2 = mass_ess.second;

         /// need to turn type and family into a string
         /// should simplify the number of translations we do!
         p_int_string gen_type(family,type);
         pair_strings gauge_states = 
            type_family_to_gauge_states[gen_type];
         str gauge_es_L=gauge_states.first;
         str gauge_es_R=gauge_states.second;        
         /// get index of right family states (ie gauge states with 
         ///same family as requested family state
         p_int_string gauge_Lindex_type = 
            gauge_label_to_index_type[gauge_es_L];
         unsigned int gauge_L_index = gauge_Lindex_type.first;
         unsigned int gauge_R_index 
            = (gauge_label_to_index_type[gauge_es_R]).first;
        
         str type_L = gauge_Lindex_type.second;
         int mass_index1 = (mass_label_to_index_type[mass_es1]).first;
         int mass_index2 = (mass_label_to_index_type[mass_es2]).first;
         std::vector<double> mix_row_1;
         std::vector<double> mix_row_2;
         std::vector<str> gauge_es_strs = type_to_vec_of_gauge_es[type];
         double row_length = gauge_es_strs.size(); 
         for(std::vector<int>::size_type i = 1; i <= row_length; i++) 
            {   
               double temp1 = mssm->phys.get_Pole_Mixing(type, mass_index1, i);
               double temp2 = mssm->phys.get_Pole_Mixing(type, mass_index2, i);
               if(i == gauge_L_index || i == gauge_R_index) 
                  {
                     mix_row_1.push_back(temp1);
                     mix_row_2.push_back(temp2);
                  }
            }

         ///Put row 1 and row 2 into the same vector to return
         mix_row_1.insert(mix_row_1.end(), mix_row_2.begin(), mix_row_2.end());

         return mix_row_1;
      }


      /// returns admix of gauge eigenstate in the mass eigenstate 
      /// closest to the given family state and stores
      /// mass eigenstate in mass_es
      double get_gauge_admix_for_family_state(str familystate, 
                                              str gauge_es,
                                              str & mass_es,
                                              const SubSpectrum* mssm) 
      {
         pair_string_ints type_family_massorder 
            = familystate_label[familystate];
         str family_type = type_family_massorder.first;
         p_int_string gauge_es_index_type = gauge_label_to_index_type[gauge_es];
         int gauge_index = gauge_es_index_type.first;
         /// type's should match but getting both allows us to throw error
         str type_gauge = gauge_es_index_type.second;
         if(family_type!=type_gauge) 
            { /// throw error in gambit
               utils_error().raise(LOCAL_INFO, "function get_gauge_admix_for_family_state called with type's for the family state and mass eigenstate that don't match.");
            }
         ///get mass_es using one of our routines
         mass_es = mass_es_closest_to_family(familystate, mssm);
         /// extract info from strings via maps
         int mass_index = (mass_label_to_index_type[mass_es]).first;   
         double admix = mssm->phys.get_Pole_Mixing(type_gauge, mass_index, 
                                                   gauge_index);      
         return admix;      
      }

      /// returns family state that best matches the given mass_es
      /// fills a double with the sum of the square mixings to gauge_es
      /// of the matching family
      /// and fills the mixing of the matching mass_es into gauge eigenstates 
      str family_state_closest_to_mass_es(str mass_es, double & sum_sq_mix,
                                          std::vector<double> & mass_comp,
                                          const SubSpectrum* mssm)
      {
         /// get gauge_es with largest mixing to this mass_es  
         str gauge_es = gauge_es_from_mass_es(mass_es, mass_comp, mssm);
         /// get family states for the same generation as this gauge_es
         pair_strings family_states = gauge_es_to_family_states[gauge_es];
         str family_state1 = family_states.first;
         str family_state2 = family_states.second;
         pair_strings gauge_states = family_state_to_gauge_state[family_state1];
         str gauge_es_L = gauge_states.first;
         str gauge_es_R = gauge_states.second;
         str mass_es_other;         
         if(gauge_es == gauge_es_L) 
            mass_es_other = mass_es_from_gauge_es(gauge_es_R, mssm);
         else mass_es_other = mass_es_from_gauge_es(gauge_es_L, mssm);
         /// extractindex of mass-es and mass_ess_other from strings 
         int mass_index = (mass_label_to_index_type[mass_es]).first;
         int mass_index_other = (mass_label_to_index_type[mass_es_other]).first;
         str fam_state; 
         /// choose mass ordering for family state which matches  
         /// mass ordering of mass_es
         if(mass_index < mass_index_other) fam_state = family_state1;
         else fam_state = family_state2;
         
         //get gauge_indices to sum correct mixing elements
         int gauge_index_L = (gauge_label_to_index_type[gauge_es_L]).first;
         int gauge_index_R = (gauge_label_to_index_type[gauge_es_R]).first;
         /// subrtact 1 fgrom indices to deal with different indexing
         sum_sq_mix = mass_comp[gauge_index_L-1] * mass_comp[gauge_index_L-1];
         sum_sq_mix += mass_comp[gauge_index_R-1] * mass_comp[gauge_index_R-1];
         
         return fam_state;
      }
      
      /// wrapper for overloaded version
      /// returns family state that best matches the given mass_es
      /// fills a double with the sum of the square mixings to gauge_es
      /// of the matching family
       str family_state_closest_to_mass_es(str mass_es, double & sum_sq_mix,
                                           const SubSpectrum* mssm)
       {
          std::vector<double> mass_comp;
          str fs = family_state_closest_to_mass_es(mass_es, sum_sq_mix, 
                                                   mass_comp, mssm);
          return fs;
       }
      
      /// wrapper for overloaded version
      /// returns family state that best matches the given mass_es
      /// and fills the mixing of the matching mass_es into gauge eigenstates 
       str family_state_closest_to_mass_es(str mass_es, 
                                           std::vector<double> & mass_comp,
                                           const SubSpectrum* mssm)
       {
          double max_mix;
          str fs = family_state_closest_to_mass_es(mass_es, max_mix, mass_comp,
                                                   mssm);
          return fs;
       }
      
      /// wrapper for overloaded version
      /// returns family state that best matches the given mass_es
      /// and fills the mixing of the matching mass_es into gauge eigenstates 
      str family_state_closest_to_mass_es(str mass_es, const SubSpectrum* mssm,
                                          double tol, str context)
       {
          double max_mix;
          std::vector<double> mass_comp;
          str fs = family_state_closest_to_mass_es(mass_es, max_mix, mass_comp,
                                                   mssm);
          str full_context = LOCAL_INFO + " called from " + context;
          if(max_mix*max_mix <= 1-tol){
             utils_error().raise(full_context, "family_state_closest_to_mass_es  called when family mixing away from closest mass_es is greater than tol"); 
          }
          return fs;
       }
      
   }  // namespace slhahelp
} //namespace gambit
