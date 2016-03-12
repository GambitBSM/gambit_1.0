#ifndef __abstract_MSSMNoFV_onshell_susy_parameters_gm2calc_1_0_0_hpp__
#define __abstract_MSSMNoFV_onshell_susy_parameters_gm2calc_1_0_0_hpp__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"
#include <Eigen/Core>
#include <ostream>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::MSSMNoFV_onshell_susy_parameters*);


// Forward declaration for wrapper_creator.
CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::MSSMNoFV_onshell_susy_parameters* wrapper_creator(CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   namespace gm2calc
   {
      class Abstract_MSSMNoFV_onshell_susy_parameters : virtual public AbstractBase
      {
         public:
   
            virtual void print(::std::basic_ostream<char, std::char_traits<char> >&) const =0;
   
            virtual void clear() =0;
   
            virtual void set_scale(double) =0;
   
            virtual double get_scale() const =0;
   
            virtual void set_Yd(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_Yd(int, int, double) =0;
   
            virtual void set_Ye(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_Ye(int, int, double) =0;
   
            virtual void set_Yu(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>&) =0;
   
            virtual void set_Yu(int, int, double) =0;
   
            virtual void set_Mu(double) =0;
   
            virtual void set_g1(double) =0;
   
            virtual void set_g2(double) =0;
   
            virtual void set_g3(double) =0;
   
            virtual void set_vd(double) =0;
   
            virtual void set_vu(double) =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_Yd() const =0;
   
            virtual double get_Yd(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_Ye() const =0;
   
            virtual double get_Ye(int, int) const =0;
   
            virtual const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& get_Yu() const =0;
   
            virtual double get_Yu(int, int) const =0;
   
            virtual double get_Mu() const =0;
   
            virtual double get_g1() const =0;
   
            virtual double get_g2() const =0;
   
            virtual double get_g3() const =0;
   
            virtual double get_vd() const =0;
   
            virtual double get_vu() const =0;
   
         public:
            virtual void pointerAssign__BOSS(Abstract_MSSMNoFV_onshell_susy_parameters*) =0;
            virtual Abstract_MSSMNoFV_onshell_susy_parameters* pointerCopy__BOSS() =0;
   
         private:
            mutable MSSMNoFV_onshell_susy_parameters* wptr;
   
         public:
            Abstract_MSSMNoFV_onshell_susy_parameters()
            {
            }
   
            void wrapper__BOSS(MSSMNoFV_onshell_susy_parameters* wptr_in)
            {
               wptr = wptr_in;
               is_wrapped(true);
               can_delete_wrapper(true);
            }
   
            MSSMNoFV_onshell_susy_parameters* wrapper__BOSS()
            {
               return wptr;
            }
   
            virtual ~Abstract_MSSMNoFV_onshell_susy_parameters()
            {
               if (can_delete_wrapper())
               {
                  can_delete_me(false);
                  wrapper_deleter(wptr);
               }
            }
   
            Abstract_MSSMNoFV_onshell_susy_parameters(const Abstract_MSSMNoFV_onshell_susy_parameters& in)
             : AbstractBase(in)
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


#endif /* __abstract_MSSMNoFV_onshell_susy_parameters_gm2calc_1_0_0_hpp__ */
