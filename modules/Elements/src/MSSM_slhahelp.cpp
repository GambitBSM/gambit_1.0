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
    
      std::map<std::string, p_int_string> gauge_label_to_index_type;
      std::map<std::string, p_int_string> mass_label_to_index_type;
      /// map to extract info from family state   
      std::map<std::string, pair_string_ints> familystate_label;
      
      ///map to obtain left_right gauge_pairs from state info
      /// helps us reuse other routiones with string arguments 
      std::map<p_int_string, pair_strings>  type_family_to_gauge_states;
      ///maps directly from family string to left_right gauge_pairs
      /// helps us reuse other routines that take string arguments 
      std::map<std::string, pair_strings>  family_state_to_gauge_state;
      /// map from string representing type (ie up-squars, down-squars or 
      /// charged selptons) to appropriate set of mass eigenstates 
      std::map<std::string,std::set<std::string>> type_to_set_of_mass_es;
      std::map<std::string,std::set<std::string>> type_to_set_of_gauge_es;
      ///maps between type and the sets of indices
      std::map<std::string,std::set<int>> type_to_set_of_row_indices;
      std::map<std::string,std::set<int>> type_to_set_of_col_indices;

      /// setup all the maps
      /// should be called somewhere in gambit setup like 
      /// with our other maps     
      void init_maps(){
    
         /// this is probably banned c++11, can uglify later if kept     
         std::set<std::string> up_squark_strs   = {"~u_1", "~u_2", "~u_3", 
                                                   "~u_4", "~u_5", "~u_6"}; 
         std::set<std::string> down_squark_strs = {"~d_1", "~d_2", "~d_3", 
                                                   "~d_4", "~d_5", "~d_6"};
         std::set<std::string> ch_slepton_strs  = {"~e-_1", "~e-_2", "~e-_3", 
                                                   "~e-_4", "~e-_5", "~e-_6"};
         std::set<std::string> sneutrino_strs   = {"~nu_1", "~nu_2", "~nu_3"};

         /// this is probably banned c++11, can uglify later if kept     
         std::set<std::string> up_sq_gauge_strs   = {"~u_L", "~c_L", "~t_L", 
                                                   "~u_R", "~c_R", "~t_R"}; 
         std::set<std::string> down_sq_gauge_strs ={"~d_L", "~s_L", "~b_L", 
                                                   "~d_R", "~s_R", "~b_R"};
         std::set<std::string> ch_sl_gauge_strs  = {"~e_L", "~mu_L", "~tau_L", 
                                                   "~e_R", "~mu_R", "~tau_R"};
         std::set<std::string> sne_gauge_strs = {"~nu_e_L", "~nu_mu_L", "~nu_tau_L"};

         
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
         std::set<int> sneutrino_rows = {1,2,3};
         std::set<int> sneutrino_cols = {1,2,3};
        
         /// pairs etc that we need for maps 
         
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
      
         /// index and type  
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
         
         p_int_string three_sneutrino(3,"~nu");
         p_int_string two_sneutrino(2,"~nu");
         p_int_string one_sneutrino(1,"~nu");

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

         gauge_label_to_index_type["~nu_e_L"] = one_sneutrino;
         gauge_label_to_index_type["~nu_mu_L"] = two_sneutrino;
         gauge_label_to_index_type["~nu_tau_L"] = three_sneutrino;

         mass_label_to_index_type["~e-_1"] = one_ch_lepton;
         mass_label_to_index_type["~e-_2"] = two_ch_lepton;
         mass_label_to_index_type["~e-_3"] = three_ch_lepton;
         mass_label_to_index_type["~e-_4"] = four_ch_lepton;
         mass_label_to_index_type["~e-_5"] = five_ch_lepton;
         mass_label_to_index_type["~e-_6"] = six_ch_lepton;

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

         mass_label_to_index_type["~nu_1"] = one_sneutrino;
         mass_label_to_index_type["~nu_2"] = two_sneutrino;
         mass_label_to_index_type["~nu_3"] = three_sneutrino;        

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
     
         
         type_family_to_gauge_states[three_up_squark] = stop_gauge;
         type_family_to_gauge_states[three_down_squark] = sbot_gauge;
         type_family_to_gauge_states[three_ch_lepton] = stau_gauge;
         type_family_to_gauge_states[two_up_squark] = scharm_gauge;
         type_family_to_gauge_states[two_down_squark] = sstrange_gauge;
         type_family_to_gauge_states[two_ch_lepton] = smuon_gauge;
         type_family_to_gauge_states[one_up_squark] = sup_gauge;
         type_family_to_gauge_states[one_down_squark] = sdown_gauge;
         type_family_to_gauge_states[one_ch_lepton] = selectron_gauge; 
         //no sneutrino gauges pairs as no right sneutrino


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
         family_state_to_gauge_state["~e-_1"] = selectron_gauge;
         family_state_to_gauge_state["~e-_2"] = selectron_gauge;
   
         /// map from string representing type (ie up-squarks, down-squarks or 
         /// charged selptons) to appropriate set of mass eigenstates
         type_to_set_of_mass_es["~u"] = up_squark_strs;
         type_to_set_of_mass_es["~d"] = down_squark_strs; 
         type_to_set_of_mass_es["~e"] = ch_slepton_strs;
         type_to_set_of_mass_es["~nu"] = sneutrino_strs;

         type_to_set_of_gauge_es["~u"] = up_sq_gauge_strs;
         type_to_set_of_gauge_es["~d"] = down_sq_gauge_strs; 
         type_to_set_of_gauge_es["~e"] = ch_sl_gauge_strs;
         type_to_set_of_gauge_es["~nu"] = sne_gauge_strs;
         
         type_to_set_of_row_indices["~u"] = up_squark_rows;
         type_to_set_of_row_indices["~d"] = down_squark_rows;
         type_to_set_of_row_indices["~e"] = ch_slepton_rows;
         type_to_set_of_row_indices["~nu"] = sneutrino_rows;
         
         type_to_set_of_col_indices["~u"] = up_squark_cols;
         type_to_set_of_col_indices["~d"] = down_squark_cols;
         type_to_set_of_col_indices["~e"] = ch_slepton_cols;
         type_to_set_of_col_indices["~nu"] = sneutrino_cols;

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
               //Mix_{row, col}
               /// iterate through row indice with column indice fixed
               mass_state_content[*it - 1] =  
                  mssm->phys.get_Pole_Mixing(type, *it, gauge_index); /// fill         
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
               /// Mix_{row, col}
               /// iterate through column indice with row indice fixed
               gauge_state_content[*it - 1] =  
                  mssm->phys.get_Pole_Mixing(type, mass_index, *it); /// fill         
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
      double get_mixing_element(std::string gauge_es, 
                                       std::string mass_es, 
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
      
      /// get largest admix and indentifies the state by filling mass_es
      /// could pass tol for test here, but maybe better to leave til step after
      double largest_mass_mixing_for_gauge(std::string gauge_es, 
                                               std::string & mass_es, 
                                               const SubSpectrum* mssm)
      {
         /// passed in massstate to be set
         double temp_admix = 0.0;
         double admix = 0.0;
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
            temp_admix = get_mixing_element(gauge_es, temp_mass_es, 
                                                    mssm);
            //select largest 
            if(fabs(temp_admix) > fabs(admix)) {
               admix = temp_admix; 
               mass_es = temp_mass_es;
            }
         } //end iteration over temp_mass_es
         
         //return largest
         return admix;
      }

 
      /// get largest admix and indentifies the state by filling gauge_es
      double largest_gauge_mixing_for_mass(std::string mass_es, 
                                           std::string & gauge_es, 
                                           const SubSpectrum* mssm)
      {
         /// passed in massstate to be set
         double temp_admix = 0.0;
         double admix = 0.0;
         /// retrive type from the gauge_es string
         std::string type = (mass_label_to_index_type[mass_es]).second;
         std::string temp_gauge_es;
         /// iterate over set of strings for mass states using temp_massstate
         /// could create a set of strings for each type 
         /// and choose which by type
         /// I am concerned about creating excessive numbers of internal code
         /// structures in terms of code readability though
         std::set<std::string> gauge_es_set = type_to_set_of_gauge_es[type];
         /// c++11 would be cool here but I think is banned :(.
         // for(auto temp_mass_es : mass_es_set) { do stuff with temp_mass_es }
         typedef std::set<std::string>::iterator iter;
         for(iter it = gauge_es_set.begin(); it != gauge_es_set.end(); ++it){
            temp_gauge_es = *it;    
            temp_admix = get_mixing_element(temp_gauge_es, mass_es, 
                                                    mssm);
            //select largest 
            if(fabs(temp_admix) > fabs(admix)) {
               admix = temp_admix; 
               gauge_es = temp_gauge_es;
            }
         } //end iteration over temp_mass_es
         
         //return largest
         return admix;
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
      pair_strings identify_mass_ess_for_family(std::string type, 
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
         largest_mass_mixing_for_gauge(gauge_esL, mass_esL, mssm);
         largest_mass_mixing_for_gauge(gauge_esR, mass_esR, mssm);
         
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
         largest_mass_mixing_for_gauge(gauge_esL, mass_esL, mssm);
         largest_mass_mixing_for_gauge(gauge_esR, mass_esR, mssm);
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
      
      /// returns vector with composition of closest the mass eigenstate 
      /// to give family state in terms of gauge eigenstates and stores
      /// mass eigenstate in mass_es
      std::vector<double> get_gauge_comp_for_family_state(std::string familystate,
                                                          std::string & mass_es,
                                                          const SubSpectrum* mssm)
      {   
         //get mass_es using one of our routines
         mass_es = identify_mass_es_closest_to_family(familystate, mssm);
         /// extract info from strings via maps
         int mass_index = (mass_label_to_index_type[mass_es]).first;
         pair_string_ints state_info = familystate_label[familystate];
         std::string type = state_info.first;
         std::vector<double> gauge_es_content = 
            get_Pole_Mixing_row(type, mass_index,mssm);
         
         return gauge_es_content;
         
      }


      /// identifies the mass_es which is the closest match to specified family state
      /// then returns mass es's admixture of the two gauge states with same family
      /// and stores the rest of the gauge content for this state in a std::vector
      /// The latter should have entries which are zero in absense of family mixing
      std::vector<double> family_state_mix_elements(std::string familystate,
                                                       std::string & mass_es,
                                                       std::vector<double> & 
                                                       wrong_fam_gauge_content,
                                                       const SubSpectrum* mssm)
      {   
         //get mass_es using one of our routines
         mass_es = identify_mass_es_closest_to_family(familystate, mssm);
         /// extract info from strings via maps
         pair_strings gauge_states = family_state_to_gauge_state[familystate];
         std::string gauge_state_L = gauge_states.first;
         std::string gauge_state_R = gauge_states.second;
         /// get index of right family states (ie gauge states with same family as
         /// requested family state
         p_int_string gauge_Lindex_type = 
            gauge_label_to_index_type[gauge_state_L];
         int gauge_L_index = gauge_Lindex_type.first;
         std::string type = gauge_Lindex_type.second;
         int gauge_R_index = (gauge_label_to_index_type[gauge_state_R]).first;
         int mass_index = (mass_label_to_index_type[mass_es]).first;          
         std::set<int> row_indices = type_to_set_of_row_indices[type];
         //double row_length = row_indices.size();
         std::vector<double> right_fam_gauge_content;
         double temp;
         for(iter it = row_indices.begin(); it != row_indices.end(); ++it)
            {
               temp = mssm->phys.get_Pole_Mixing(type, mass_index, *it); 
               if(*it == gauge_L_index || *it == gauge_R_index) 
                  right_fam_gauge_content.push_back(temp);
               else  wrong_fam_gauge_content.push_back(temp);
            }

         return right_fam_gauge_content;
         
      }
   
      /// identifies the two mass_es which best matches specified family state
      /// storing them in strings and then returns 
      /// the 2by2 mixing matrix for that family state in the form
      /// (Mix_{11}, Mix_{12}, Mix_{21}, Mix_{22})
      /// It also  stores the mixing elements for the gauge states that don't 
      /// belong to the correct family for this state in a std::vector
      /// The latter should have entries which are zero in absense of 
      /// family mixing
      std::vector<double> family_state_mix_matrix(std::string type,
                                                      int family,
                                                      std::string & mass_es1,
                                                      std::string & mass_es2,
                                                      double & max_sum_fam_mix_sq,
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
         std::string gauge_es_L=gauge_states.first;
         std::string gauge_es_R=gauge_states.second;
         
         
         /// get index of right family states (ie gauge states with same family as
         /// requested family state
         p_int_string gauge_Lindex_type = 
            gauge_label_to_index_type[gauge_es_L];
         int gauge_L_index = gauge_Lindex_type.first;
         int gauge_R_index = (gauge_label_to_index_type[gauge_es_R]).first;
         /// these should always match type - remove after testing
         std::string type_L = gauge_Lindex_type.second;
         std::string type_R = gauge_Lindex_type.second;
         
         int mass_index1 = (mass_label_to_index_type[mass_es1]).first;
         int mass_index2 = (mass_label_to_index_type[mass_es2]).first;
         std::set<int> row_indices = type_to_set_of_row_indices[type];
         //double row_length = row_indices.size();
         std::vector<double> mix_row_1;
         std::vector<double> mix_row_2;
         double sum_mix_sq_1 = 0.0;
         double sum_mix_sq_2 = 0.0;
            
         for(iter it = row_indices.begin(); it != row_indices.end(); ++it)
            {
               double temp1 = mssm->phys.get_Pole_Mixing(type, mass_index1, *it);
               double temp2 = mssm->phys.get_Pole_Mixing(type, mass_index2, *it);
               if(*it == gauge_L_index || *it == gauge_R_index) 
                  {
                     mix_row_1.push_back(temp1);
                     mix_row_2.push_back(temp2);
                  }
               else
                  {
                    sum_mix_sq_1 = temp1*temp1;
                    sum_mix_sq_2 = temp2*temp2;                   
                  }
            }
         /// if we only return a number I am not sure what is best
         /// this will gives the largest magnitude_sq of the two vectors
         /// contain the off-family mixings for each family state 
         max_sum_fam_mix_sq = std::max(sum_mix_sq_1, sum_mix_sq_2);
         
         ///Put row 1 and row 2 into the same vector to return
         mix_row_1.insert(mix_row_1.end(), mix_row_2.begin(), mix_row_2.end());

         return mix_row_1;
      }


      /// returns admix of gauge eigenstate in the mass eigenstate 
      /// closest to the given family state and stores
      /// mass eigenstate in mass_es
      double get_gauge_admix_for_family_state(std::string familystate, 
                                              std::string gauge_es,
                                              std::string & mass_es,
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
               utils_error().raise(LOCAL_INFO, "function get_gauge_admix_for_family_state called with type's for the family state and mass eigenstate that don't match.");
            }
         ///get mass_es using one of our routines
         mass_es = identify_mass_es_closest_to_family(familystate, mssm);
         /// extract info from strings via maps
         int mass_index = (mass_label_to_index_type[mass_es]).first;   
         double admix = mssm->phys.get_Pole_Mixing(type_gauge, mass_index, 
                                                   gauge_index);      
         return admix;      
      }

 
      
   }  // namespace slhahelp
} //namespace gambit
