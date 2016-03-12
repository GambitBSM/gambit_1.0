#ifndef __abstract_MSSMNoFV_onshell_soft_parameters_gm2calc_1_0_0_hpp__
#define __abstract_MSSMNoFV_onshell_soft_parameters_gm2calc_1_0_0_hpp__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"
#include "wrapper_MSSMNoFV_onshell_susy_parameters_decl.hpp"
#include <Eigen/Core>
#include <ostream>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::MSSMNoFV_onshell_soft_parameters*);


// Forward declaration for wrapper_creator.
CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::MSSMNoFV_onshell_soft_parameters* wrapper_creator(CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   namespace gm2calc
   {
      class Abstract_MSSMNoFV_onshell_soft_parameters : virtual public AbstractBase, virtual public gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters
      {
         public:
   
            virtual void print(::std::basic_ostream<char, std::char_traits<char> >&) const =0;
   
            virtual void clear() =0;
   
            virtual void set_TYd(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_TYd(int, int, double) =0;
   
            virtual void set_TYe(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_TYe(int, int, double) =0;
   
            virtual void set_TYu(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_TYu(int, int, double) =0;
   
            virtual void set_BMu(double) =0;
   
            virtual void set_mq2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_mq2(int, int, double) =0;
   
            virtual void set_ml2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_ml2(int, int, double) =0;
   
            virtual void set_mHd2(double) =0;
   
            virtual void set_mHu2(double) =0;
   
            virtual void set_md2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_md2(int, int, double) =0;
   
            virtual void set_mu2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_mu2(int, int, double) =0;
   
            virtual void set_me2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_me2(int, int, double) =0;
   
            virtual void set_MassB(double) =0;
   
            virtual void set_MassWB(double) =0;
   
            virtual void set_MassG(double) =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_TYd() const =0;
   
            virtual double get_TYd(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_TYe() const =0;
   
            virtual double get_TYe(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_TYu() const =0;
   
            virtual double get_TYu(int, int) const =0;
   
            virtual double get_BMu() const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_mq2() const =0;
   
            virtual double get_mq2(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_ml2() const =0;
   
            virtual double get_ml2(int, int) const =0;
   
            virtual double get_mHd2() const =0;
   
            virtual double get_mHu2() const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_md2() const =0;
   
            virtual double get_md2(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_mu2() const =0;
   
            virtual double get_mu2(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_me2() const =0;
   
            virtual double get_me2(int, int) const =0;
   
            virtual double get_MassB() const =0;
   
            virtual double get_MassWB() const =0;
   
            virtual double get_MassG() const =0;
   
         public:
            using gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters::pointerAssign__BOSS;
            virtual void pointerAssign__BOSS(Abstract_MSSMNoFV_onshell_soft_parameters*) =0;
            virtual Abstract_MSSMNoFV_onshell_soft_parameters* pointerCopy__BOSS() =0;
   
         private:
            mutable MSSMNoFV_onshell_soft_parameters* wptr;
   
         public:
            Abstract_MSSMNoFV_onshell_soft_parameters()
            {
            }
   
            void wrapper__BOSS(MSSMNoFV_onshell_soft_parameters* wptr_in)
            {
               wptr = wptr_in;
               is_wrapped(true);
               can_delete_wrapper(true);
            }
   
            MSSMNoFV_onshell_soft_parameters* wrapper__BOSS()
            {
               return wptr;
            }
   
            virtual ~Abstract_MSSMNoFV_onshell_soft_parameters()
            {
               if (can_delete_wrapper())
               {
                  can_delete_me(false);
                  wrapper_deleter(wptr);
               }
            }
   
            Abstract_MSSMNoFV_onshell_soft_parameters(const Abstract_MSSMNoFV_onshell_soft_parameters& in)
             : AbstractBase(in), gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters(in)
            {
               if (is_wrapped() == false)
               {
                  wptr = wrapper_creator(this);
                  is_wrapped(true);
                  can_delete_wrapper(true);
               }
               else
               {
                  wptr = 0;
                  is_wrapped(false);
                  can_delete_wrapper(false);
               }
            }
      };
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_MSSMNoFV_onshell_soft_parameters_gm2calc_1_0_0_hpp__ */
