#ifndef __abstract_MSSMNoFV_onshell_gm2calc_1_0_0_hpp__
#define __abstract_MSSMNoFV_onshell_gm2calc_1_0_0_hpp__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"
#include "wrapper_MSSMNoFV_onshell_mass_eigenstates_decl.hpp"
#include <Eigen/Core>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::MSSMNoFV_onshell*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   namespace gm2calc
   {
      class Abstract_MSSMNoFV_onshell : virtual public AbstractBase, virtual public gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates
      {
         public:
   
            virtual void set_verbose_output(bool) =0;
   
            virtual bool do_verbose_output() const =0;
   
            virtual void set_alpha_MZ(double) =0;
   
            virtual void set_alpha_thompson(double) =0;
   
            virtual void set_Ae(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_Au(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_Ad(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_Ae(unsigned int, unsigned int, double) =0;
   
            virtual void set_Au(unsigned int, unsigned int, double) =0;
   
            virtual void set_Ad(unsigned int, unsigned int, double) =0;
   
            virtual void set_MA0(double) =0;
   
            virtual void set_TB(double) =0;
   
            virtual double get_EL() const =0;
   
            virtual double get_EL0() const =0;
   
            virtual double get_gY() const =0;
   
            virtual double get_MUDIM() const =0;
   
            virtual double get_TB() const =0;
   
            virtual double get_vev() const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_Ae() const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_Au() const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_Ad() const =0;
   
            virtual double get_Ae(unsigned int, unsigned int) const =0;
   
            virtual double get_Au(unsigned int, unsigned int) const =0;
   
            virtual double get_Ad(unsigned int, unsigned int) const =0;
   
            virtual double get_MW() const =0;
   
            virtual double get_MZ() const =0;
   
            virtual double get_ME() const =0;
   
            virtual double get_MM() const =0;
   
            virtual double get_ML() const =0;
   
            virtual double get_MU() const =0;
   
            virtual double get_MC() const =0;
   
            virtual double get_MT() const =0;
   
            virtual double get_MD() const =0;
   
            virtual double get_MS() const =0;
   
            virtual double get_MBMB() const =0;
   
            virtual double get_MB() const =0;
   
            virtual double get_MA0() const =0;
   
            virtual const ::Eigen::Array<double, 2, 1, 0, 2, 1>& get_MSmu() const =0;
   
            virtual const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& get_USmu() const =0;
   
            virtual const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& get_UStau() const =0;
   
            virtual const ::Eigen::Array<double, 2, 1, 0, 2, 1>& get_MSbot() const =0;
   
            virtual const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& get_USbot() const =0;
   
            virtual const ::Eigen::Array<double, 2, 1, 0, 2, 1>& get_MStop() const =0;
   
            virtual const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& get_UStop() const =0;
   
            virtual void convert_to_onshell(double, unsigned int) =0;
   
            virtual void convert_to_onshell__BOSS(double) =0;
   
            virtual void convert_to_onshell__BOSS() =0;
   
            virtual void calculate_masses() =0;
   
            virtual void check_problems() const =0;
   
            virtual void convert_yukawa_couplings_treelevel() =0;
   
         public:
            using gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates::pointerAssign__BOSS;
            virtual void pointerAssign__BOSS(Abstract_MSSMNoFV_onshell*) =0;
            virtual Abstract_MSSMNoFV_onshell* pointerCopy__BOSS() =0;
   
         private:
            mutable MSSMNoFV_onshell* wptr;
   
         public:
            Abstract_MSSMNoFV_onshell()
            {
            }
   
            void wrapper__BOSS(MSSMNoFV_onshell* wptr_in)
            {
               wptr = wptr_in;
               is_wrapped(true);
               can_delete_wrapper(true);
            }
   
            MSSMNoFV_onshell* wrapper__BOSS()
            {
               return wptr;
            }
   
            virtual ~Abstract_MSSMNoFV_onshell()
            {
               if (can_delete_wrapper())
               {
                  can_delete_me(false);
                  wrapper_deleter(wptr);
               }
            }
      };
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_MSSMNoFV_onshell_gm2calc_1_0_0_hpp__ */
