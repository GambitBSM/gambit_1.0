#ifndef __loaded_types_gm2calc_1_0_0_hpp__
#define __loaded_types_gm2calc_1_0_0_hpp__ 1

#include "wrapper_MSSMNoFV_onshell_susy_parameters.hpp"
#include "wrapper_MSSMNoFV_onshell.hpp"
#include "wrapper_MSSMNoFV_onshell_mass_eigenstates.hpp"
#include "wrapper_MSSMNoFV_onshell_problems.hpp"
#include "wrapper_MSSMNoFV_onshell_physical.hpp"
#include "wrapper_MSSMNoFV_onshell_soft_parameters.hpp"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define gm2calc_1_0_0_all_data \
  (( /*class*/(gm2calc)(MSSMNoFV_onshell_susy_parameters),    /*constructors*/(("Factory_MSSMNoFV_onshell_susy_parameters_0__BOSS_1",())) (("Factory_MSSMNoFV_onshell_susy_parameters_1__BOSS_2",(double, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, double, double, double, double, double, double))) )) \
  (( /*class*/(gm2calc)(MSSMNoFV_onshell),    /*constructors*/(("Factory_MSSMNoFV_onshell_0__BOSS_3",())) (("Factory_MSSMNoFV_onshell_1__BOSS_4",(const my_ns::gm2calc::MSSMNoFV_onshell_mass_eigenstates&))) )) \
  (( /*class*/(gm2calc)(MSSMNoFV_onshell_mass_eigenstates),    /*constructors*/(("Factory_MSSMNoFV_onshell_mass_eigenstates_0__BOSS_5",())) )) \
  (( /*class*/(gm2calc)(MSSMNoFV_onshell_problems),    /*constructors*/(("Factory_MSSMNoFV_onshell_problems_0__BOSS_6",())) )) \
  (( /*class*/(gm2calc)(MSSMNoFV_onshell_physical),    /*constructors*/(("Factory_MSSMNoFV_onshell_physical_0__BOSS_7",())) )) \
  (( /*class*/(gm2calc)(MSSMNoFV_onshell_soft_parameters),    /*constructors*/(("Factory_MSSMNoFV_onshell_soft_parameters_0__BOSS_8",())) (("Factory_MSSMNoFV_onshell_soft_parameters_1__BOSS_9",(const my_ns::gm2calc::MSSMNoFV_onshell_susy_parameters&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, double, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, double, double, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&, double, double, double))) )) \

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "gambit/Backends/backend_undefs.hpp"

#endif /* __loaded_types_gm2calc_1_0_0_hpp__ */
