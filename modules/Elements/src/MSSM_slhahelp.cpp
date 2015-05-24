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

      /// pairs etc that we need for maps
      p_int_string six_up_squark(6,"~u");
      p_int_string six_down_squark(6,"~d");
      p_int_string six_ch_lepton(6,"~e");
      p_int_string five_up_squark(5,"~u");
      p_int_string five_down_squark(5,"~d");
      p_int_string five_ch_lepton(5,"~e");
      p_int_string four_up_squark(4,"~u");
      p_int_string four_down_squark(4,"~d");
      p_int_string four_ch_lepton(4,"~e"); 
      p_int_string three_up_squark(3,"~u");
      p_int_string three_down_squark(3,"~d");
      p_int_string three_ch_lepton(3,"~e");
      p_int_string two_up_squark(2,"~u");
      p_int_string two_down_squark(2,"~d");
      p_int_string two_ch_lepton(2,"~e");
      p_int_string one_up_squark(1,"~u");
      p_int_string one_down_squark(1,"~d");
      p_int_string one_ch_lepton(1,"~e");
      
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
      pair_string_ints const scharm1("~u",three_one);
      pair_string_ints const scharm2("~u",three_two);
      pair_string_ints const sstrange1("~d",three_one);
      pair_string_ints const sstrange2("~d",three_two);
      pair_string_ints const smuon1("~e",three_one);
      pair_string_ints const smuon2("~e",three_two);
      pair_string_ints const sup1("~u",three_one);
      pair_string_ints const sup2("~u",three_two);
      pair_string_ints const sdown1("~d",three_one);
      pair_string_ints const sdown2("~d",three_two);
      pair_string_ints const selectron1("~e",three_one);
      pair_string_ints const selectron2("~e",three_two);
      
      /// the left_right gauge_pairs 
      /// usefu -fl when identifying family states
      pair_strings stop_gauge("~t_L","~t_R");
      pair_strings sbot_gauge("~b_L","~b_R");
      pair_strings stau_gauge("~tau_L","~tau_R");
      pair_strings scharm_gauge("~c_L","~c_R");
      pair_strings sstrange_gauge("~s_L","~s_R");
      pair_strings smuon_gauge("~mu_L","~mu_R");
      pair_strings sup_gauge("~u_L","~u_R");
      pair_strings sdown_gauge("~d_L","~d_R");
      pair_strings selectron_gauge("~e_L","~e_R");
      
      /// this is probably banned c++11, can uglify later if kept     
      std::set<std::string> up_squark_strs   = {"~u_1", "~u_2", "~u_3", 
                                                "~u_4", "~u_5", "~u_6"}; 
      std::set<std::string> down_squark_strs = {"~d_1", "~d_2", "~d_3", 
                                                "~d_4", "~d_5", "~d_6"};
      std::set<std::string> ch_slepton_strs  = {"~e_1", "~e_2", "~e_3", 
                                                "~e_4", "~e_5", "~e_6"};
      /// for iterations over rows and columns
      /// all the same so only need one at most but this does
      /// make it easier to generalise when adding new states etc
      /// or change something via a hack
      std::set<int> up_squark_rows = {1,2,3,4,5,6};
      std::set<int> down_squark_rows = {1,2,3,4,5,6};
      std::set<int> ch_slepton_rows = {1,2,3,4,5,6};
      std::set<int> up_squark_cols = {1,2,3,4,5,6};
      std::set<int> down_squark_cols = {1,2,3,4,5,6};
      std::set<int> ch_slepton_cols = {1,2,3,4,5,6};    
      
      
      /// setup all the maps
      /// should be called somewhere in gambit setup like 
      /// with our other maps     
      void init_maps(){
         
         gauge_label_to_index_type["~e_L"] = one_ch_lepton;
         gauge_label_to_index_type["~mu_L"] = two_ch_lepton;
         gauge_label_to_index_type["~tau_L"] = three_ch_lepton;
         gauge_label_to_index_type["~e_R"] = four_ch_lepton;
         gauge_label_to_index_type["~mu_R"] = five_ch_lepton;
         gauge_label_to_index_type["~tau_R"] = six_ch_lepton;
         
         gauge_label_to_index_type["~d_L"] = one_down_squark;
         gauge_label_to_index_type["~s_L"] = two_down_squark;
         gauge_label_to_index_type["~b_L"] = three_down_squark;
         gauge_label_to_index_type["~d_R"] = four_down_squark;
         gauge_label_to_index_type["~s_R"] = five_down_squark;
         gauge_label_to_index_type["~b_R"] = six_down_squark;   
         
         gauge_label_to_index_type["~u_L"] = one_up_squark;
         gauge_label_to_index_type["~c_L"] = two_up_squark;
         gauge_label_to_index_type["~t_L"] = three_up_squark;
         gauge_label_to_index_type["~u_R"] = four_up_squark;
         gauge_label_to_index_type["~c_R"] = five_up_squark;
         gauge_label_to_index_type["~t_R"] = six_up_squark; 
         

         mass_label_to_index_type["~e_1"] = one_ch_lepton;
         mass_label_to_index_type["~e_2"] = two_ch_lepton;
         mass_label_to_index_type["~e_3"] = three_ch_lepton;
         mass_label_to_index_type["~e_4"] = four_ch_lepton;
         mass_label_to_index_type["~e_5"] = five_ch_lepton;
         mass_label_to_index_type["~e_6"] = six_ch_lepton;
   
         mass_label_to_index_type["~d_1"] = one_down_squark;
         mass_label_to_index_type["~d_2"] = two_down_squark;
         mass_label_to_index_type["~d_3"] = three_down_squark;
         mass_label_to_index_type["~d_4"] = four_down_squark;
         mass_label_to_index_type["~d_5"] = five_down_squark;
         mass_label_to_index_type["~d_6"] = six_down_squark;   
         
         mass_label_to_index_type["~u_1"] = one_up_squark;
         mass_label_to_index_type["~u_2"] = two_up_squark;
         mass_label_to_index_type["~u_3"] = three_up_squark;
         mass_label_to_index_type["~u_4"] = four_up_squark;
         mass_label_to_index_type["~u_5"] = five_up_squark;
         mass_label_to_index_type["~u_6"] = six_up_squark; 
   
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
         familystate_label["~e_1"] = selectron1; 
         familystate_label["~e_2"] = selectron2;
         
         type_family_to_gauge_states[three_up_squark] = stop_gauge;
         type_family_to_gauge_states[three_down_squark] = sbot_gauge;
         type_family_to_gauge_states[three_ch_lepton] = stau_gauge;
         type_family_to_gauge_states[two_up_squark] = scharm_gauge;
         type_family_to_gauge_states[two_down_squark] = sstrange_gauge;
         type_family_to_gauge_states[two_ch_lepton] = smuon_gauge;
         type_family_to_gauge_states[one_up_squark] = sup_gauge;
         type_family_to_gauge_states[one_down_squark] = sdown_gauge;
         type_family_to_gauge_states[one_ch_lepton] = selectron_gauge;
   
         family_state_to_gauge_state["~t_1"] = stop_gauge;
         family_state_to_gauge_state["~t_2"] = stop_gauge;
         family_state_to_gauge_state["~b_1"] = sbot_gauge;
         family_state_to_gauge_state["~b_2"] = sbot_gauge;
         family_state_to_gauge_state["~tau_1"] = stau_gauge;
         family_state_to_gauge_state["~tau_2"] = stau_gauge;
         
         family_state_to_gauge_state["~c_1"] = scharm_gauge;
         family_state_to_gauge_state["~c_2"] = scharm_gauge;
         family_state_to_gauge_state["~s_1"] = sstrange_gauge;
         family_state_to_gauge_state["~s_2"] = sstrange_gauge;
         family_state_to_gauge_state["~muon_1"] = smuon_gauge;
         family_state_to_gauge_state["~muon_2"] = smuon_gauge;
         
         /// I am not sure if this will be too dangerous or not
         /// since these are the same strings as we use for the mass eigenstates
         /// but are *not* the same thing.  However both are standard notation.
         family_state_to_gauge_state["~u_1"] = sup_gauge;
         family_state_to_gauge_state["~u_2"] = sup_gauge;
         family_state_to_gauge_state["~d_1"] = sdown_gauge;
         family_state_to_gauge_state["~d_2"] = sdown_gauge;
         family_state_to_gauge_state["~e_1"] = selectron_gauge;
         family_state_to_gauge_state["~e_2"] = selectron_gauge;
   
         /// map from string representing type (ie up-squarks, down-squarks or 
         /// charged selptons) to appropriate set of mass eigenstates
         type_to_set_of_mass_es["~u"] = up_squark_strs;
         type_to_set_of_mass_es["~d"] = down_squark_strs; 
         type_to_set_of_mass_es["~e"] = ch_slepton_strs;       
         type_to_set_of_row_indices["~u"] = up_squark_rows;
         type_to_set_of_row_indices["~d"] = down_squark_rows;
         type_to_set_of_row_indices["~e"] = ch_slepton_rows;
         type_to_set_of_col_indices["~u"] = up_squark_cols;
         type_to_set_of_col_indices["~d"] = down_squark_cols;
         type_to_set_of_col_indices["~e"] = ch_slepton_cols;
         
      }
      
      // these two should be switched over to members of the sectrum object itself
      /// This will simplify things.
      std::vector<double> get_Pole_Mixing_col(std::string type, 
                                              int gauge_index, 
                                              const SubSpectrum* mssm)
      {
         //extract info about indices for type using map
         std::set<int> col_indices = type_to_set_of_col_indices[type]; 
         double column_length = col_indices.size();
         std::vector<double> mass_state_content(column_length);
         //iterate over collumn in some way, e..g
         for(iter it = col_indices.begin(); it != col_indices.end(); ++it)
            {
               mass_state_content[*it - 1] =  
                  mssm->phys.get_Pole_Mixing(type, gauge_index, *it); /// fill         
            }
         
         return mass_state_content;
      }
      
/// This will simplify things.
      std::vector<double> get_Pole_Mixing_row(std::string type, int mass_index, 
                                              const SubSpectrum* mssm) 
      {
         std::set<int> row_indices = type_to_set_of_row_indices[type];
         double row_length = row_indices.size();
         std::vector<double> gauge_state_content(row_length);   
         for(iter it = row_indices.begin(); it != row_indices.end(); ++it)
            {
               gauge_state_content[*it - 1] =  
                  mssm->phys.get_Pole_Mixing(type, *it, mass_index); /// fill         
            }
         return gauge_state_content;
      }

      
      /// the rest of these belong here as they are MSSM specific things
      
      /// returns vector representing composition of requested gauge state
      /// in terms of the slha2 mass eigenstates (~u_1 ...~u_6 etc)
      /// which is just a column in the mixing matrix 
      std::vector<double> get_mass_comp_for_gauge(std::string gauge_es, 
                                                  const SubSpectrum* mssm)
      {   
         /// extract info from string via map
         p_int_string index_type = gauge_label_to_index_type[gauge_es];        
         std::string type = index_type.second;
         int gauge_index  = index_type.first; 
         
         std::vector<double> mass_state_content = 
            get_Pole_Mixing_col(type, gauge_index, mssm);
         
         return mass_state_content;
      }
      
      ///routine to return mass state admixure for given gauge state
      /// in the end this is a trival routine but may help      
      double get_mass_addmix_for_gauge(std::string gauge_es, std::string mass_es, 
                                 const SubSpectrum* mssm)
      { 
         ///extract info from maps
         p_int_string mass_es_index_type = mass_label_to_index_type[mass_es]; 
         p_int_string gauge_es_index_type = gauge_label_to_index_type[gauge_es];
         int gauge_index = gauge_es_index_type.first;
         int mass_index = mass_es_index_type.first;
         /// type's should match but getting both allows us to throw error
         std::string type = mass_es_index_type.second;
         std::string type_gauge = gauge_es_index_type.second;
         if(type!=type_gauge) 
            {
               /// throw error in gambit
               std::cout << "add proper error here." 
                         << std::endl;
               return -6.66e66;
            }
         /// will need to add mssm object to cal method in gambit
         double addmix = mssm->phys.get_Pole_Mixing(type, gauge_index, 
                                                    mass_index);
         return addmix;
      }
      
      /// slower but tidier alternative that resuses earlier routine
      /// quick cross check
      double get_mass_addmix_for_gauge2(std::string gauge_es, std::string mass_es,
                                        const SubSpectrum* mssm)
      {
         p_int_string mass_es_index_type = mass_label_to_index_type[mass_es]; 
         p_int_string gauge_es_index_type = gauge_label_to_index_type[gauge_es];
         int mass_index = mass_es_index_type.first;
         /// type's should match but getting both allows us to throw error
         std::string type = mass_es_index_type.second;
         std::string type_gauge = gauge_es_index_type.second;
         if(type!=type_gauge) 
            {
               /// throw error in gambit
               std::cout << "we need to add proper errors here."
                         << std::endl;
               return -6.66e66;
            }
         std::vector<double> mass_state_content 
            = get_mass_comp_for_gauge(gauge_es, mssm);
         
         return mass_state_content[mass_index -1];
      }

      /// returns vector representing composition of requested mass eigenstate
      /// in terms of the slha2 gauge eigenstates (~u_L,~c_L,...~t_R etc)
      /// which is just a row in the mixing matrix 
      /// just wraps get_Pole_Mixing_col after extracting info from string
      std::vector<double> get_gauge_comp_for_mass(std::string mass_es, 
                                                  const SubSpectrum* mssm)
      {   
         /// extract info using map
         p_int_string index_type = mass_label_to_index_type[mass_es];
         int mass_index = index_type.first; 
         std::string type = index_type.second;
         //fill vector with mixings
         std::vector<double> mass_state_content = 
            get_Pole_Mixing_col(type, mass_index, mssm);
         
         return mass_state_content;
      }
      
      /// get largest addmix and indentifies the state by filling mass_es
      /// could pass tol for test here, but maybe better to leave til step after
      double get_largest_mass_addmix_for_gauge(std::string gauge_es, 
                                               std::string & mass_es, 
                                               const SubSpectrum* mssm)
      {
         /// passed in massstate to be set
         double temp_addmix = 0.0;
         double addmix = 0.0;
         /// retrive type from the gauge_es string
         std::string type = (gauge_label_to_index_type[gauge_es]).second;
         std::string temp_mass_es;
         /// iterate over set of strings for mass states using temp_massstate
         /// could create a set of strings for each type 
         /// and choose which by type
         /// I am concerned about creating excessive numbers of internal code
         /// structures in terms of code readability though
         std::set<std::string> mass_es_set = type_to_set_of_mass_es[type];
         /// c++11 would be cool here but I think is banned :(.
         // for(auto temp_mass_es : mass_es_set) { do stuff with temp_mass_es }
         typedef std::set<std::string>::iterator iter;
         for(iter it = mass_es_set.begin(); it != mass_es_set.end(); ++it){
            temp_mass_es = *it;
            temp_addmix = get_mass_addmix_for_gauge(gauge_es, temp_mass_es, 
                                                    mssm);
            //select largest 
            if(temp_addmix > addmix) {
               addmix = temp_addmix; 
               mass_es = temp_mass_es;
            }
         } //end iteration over temp_massstate
         
         
         //return largest
         return addmix;
      }
      


      /// indentify the two mass eigenstate corresponding to the approximate 
      /// family states, e.g. stops ("~u",3), smuons ("~mu", 2) etc 
      /// Note: when there is family mixing there's no good definition ~t_1, 
      //~t_2 etc if defined as the states you get from diagonalising a 2by2 
      /// mass (sub)matrix then extensive manipulations would be required
      /// So here we identify the mass eigenstates closest to the family ones 
      ///which is a better defined question when there is family mixing prsesent
      ///and more useful here anyway
      //returns a pair of strings labling the lighter one first 
      pair_strings identify_mass_es_closest_to_family(std::string type, 
                                                      int family,
                                                      const SubSpectrum* mssm)
      {
         /// need to turn type and family into a string
         /// need to simplify the number of translations we do.
         p_int_string gen_type(family,type);
         pair_strings gauge_states = 
            type_family_to_gauge_states[gen_type];
         std::string gauge_esL=gauge_states.first;
         std::string gauge_esR=gauge_states.second;
         // find largest admix for gauge states 
         std::string mass_esL, mass_esR;
         /// we don't need the return value of these
         /// unless we want to do a test on them?
         get_largest_mass_addmix_for_gauge(gauge_esL, mass_esL, mssm);
         get_largest_mass_addmix_for_gauge(gauge_esR, mass_esR, mssm);
         
         pair_strings answer;
         int mass_index_L = (mass_label_to_index_type[mass_esL]).first;
         int mass_index_R = (mass_label_to_index_type[mass_esR]).first;
         // order pair by mass
         if(mass_index_L < mass_index_R) 
            answer = std::make_pair(mass_esL,mass_esR);          
         else answer = std::make_pair(mass_esR,mass_esL);
         
         return answer;
      }
      
      
      
      /// overloaded version which takes string and returns only requested state
      /// I suspect this is the more useful one
      std::string identify_mass_es_closest_to_family(std::string familystate,
                                                     const SubSpectrum* mssm)
      {
         pair_strings family_gauge_states = 
            family_state_to_gauge_state[familystate];
         std::string gauge_esL = family_gauge_states.first;
         std::string gauge_esR = family_gauge_states.second;
         // find largest admix for gauge states
         std::string mass_esL, mass_esR;
         /// we don't need the return value of these
         /// unless we want to do a test on them?
         get_largest_mass_addmix_for_gauge(gauge_esL, mass_esL, mssm);
         get_largest_mass_addmix_for_gauge(gauge_esR, mass_esR, mssm);
         // extract mass order (1 or 2) from string via map
         pair_string_ints type_family_massorder = 
            familystate_label[familystate];
         pair_ints family_massorder = type_family_massorder.second;
         int mass_order = family_massorder.second;
         // if massorder is 1 choose select from masstateL and mass_esR the one
         // with the lowest index else take highest
         int massorderL = (mass_label_to_index_type[mass_esL]).first;
         int massorderR = (mass_label_to_index_type[mass_esR]).first;
         std::string answer;
         if( (mass_order == 1 && massorderL < massorderR) ||  
             (mass_order == 2 && massorderL > massorderR) ) answer = mass_esL; 
         else answer = mass_esR;
         
         return answer;
      }
      
      /// returns vector with composition of closest the mass state 
      /// to give family state in terms of gauge eigenstates 
      std::vector<double> get_gauge_comp_for_family_state(std::string 
                                                          familystate,
                                                          const SubSpectrum* 
                                                          mssm)
      {   
         //get mass_es using one of our routines
         std::string mass_es = identify_mass_es_closest_to_family(familystate,
                                                                  mssm);
         /// extract info from strings via maps
         int mass_index = (mass_label_to_index_type[mass_es]).first;
         pair_string_ints state_info = familystate_label[familystate];
         std::string type = state_info.first;
         std::vector<double> gauge_es_content = 
            get_Pole_Mixing_row(type, mass_index,mssm);
         
         return gauge_es_content;
         
      }
      

   
      ///As above but returns specific admixture
      double get_gauge_admix_for_family_state(std::string familystate, 
                                              std::string gauge_es, 
                                              const SubSpectrum* mssm) 
      {
         pair_string_ints type_family_massorder 
            = familystate_label[familystate];
         std::string family_type = type_family_massorder.first;
         p_int_string gauge_es_index_type = gauge_label_to_index_type[gauge_es];
         int gauge_index = gauge_es_index_type.first;
         /// type's should match but getting both allows us to throw error
         std::string type_gauge = gauge_es_index_type.second;
         if(family_type!=type_gauge) 
            { /// throw error in gambit
               std::cout << "we need to add proper errors " << std::endl;
               return -6.66e66;
            }
         ///get mass_es using one of our routines
         std::string mass_es = identify_mass_es_closest_to_family(familystate,
                                                                  mssm);
         /// extract info from strings via maps
         int mass_index = (mass_label_to_index_type[mass_es]).first;   
         double admix = mssm->phys.get_Pole_Mixing(type_gauge, gauge_index, 
                                                   mass_index);   
         
         return admix;      
      }
      
      /// As above but we reuse the get_gauge_comp_for_family_state method
      /// this is slower but may reduce code duplication and keep short
      /// but actually sine we want to test taht the types match it 
      /// doesn't help much just shifts dependency
      double get_gauge_admix_for_family_state2(std::string familystate, 
                                               std::string gauge_es,
                                               const SubSpectrum* mssm) 
      {      
         pair_string_ints type_family_massorder 
            = familystate_label[familystate];
         std::string family_type = type_family_massorder.first;
         p_int_string gauge_es_index_type = gauge_label_to_index_type[gauge_es];
         int gauge_index = gauge_es_index_type.first;
         /// type's should match but getting both allows us to throw error
         std::string type_gauge = gauge_es_index_type.second;
         if(family_type!=type_gauge) 
            { /// throw error in gambit
               std::cout << "we need proper eqrrors " << std::endl;
               return -6.66e66;
            }
         ///  get the composition of the family state in terms of the 
         ///  gauge eigenstates, as a vector, using our routine
         std::vector<double> gauge_es_content = 
            get_gauge_comp_for_family_state(familystate, mssm);
         
         //subtract 1 from gauge_index to switch to zero index convention of c++
         return gauge_es_content[gauge_index - 1];      
      }
      
   }  // namespace slhahelp
} //namespace gambit
