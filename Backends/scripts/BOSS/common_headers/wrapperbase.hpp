#ifndef __WRAPPERBASE__
#define __WRAPPERBASE__

#include <iostream>

__START_GAMBIT_NAMESPACE__

template <typename T>
class WrapperBase
{
    public:
        T* myBEptr;
        T* const & BEptr;
        bool skip_delete;

        // Constructor
        WrapperBase(T* BEptr_in) : myBEptr(BEptr_in), BEptr(myBEptr), skip_delete(false)
        {
            // BEptr->wrapper__CODE_SUFFIX__(this);
        }

        WrapperBase(T* const & BEptr_in, bool) : BEptr(BEptr_in), skip_delete(false)
        {
            // BEptr->wrapper__CODE_SUFFIX__(this);
        }


        // Copy constructor: 
        WrapperBase(const WrapperBase<T>& in) : myBEptr(in.BEptr->pointerCopy__CODE_SUFFIX__()), BEptr(myBEptr), skip_delete(false)
        {
            // BEptr->wrapper__CODE_SUFFIX__(this);
        }

        // Assignment operator
        WrapperBase& operator=(const WrapperBase<T>& in)
        {
            if (this != &in) 
            { 
                BEptr->pointerAssign__CODE_SUFFIX__(in.BEptr); 
            }
            return *this;        
        }


        // Destructor
        ~WrapperBase()
        {
            if (not skip_delete)
            {
                if (BEptr->can_delete_me())
                {
                    BEptr->can_delete_wrapper(false);
                    delete BEptr;
                }
            }
        }

 
    protected:

        // Function used to return pointer-to-wrapper
        template<typename U, typename V>
        U* pointer_returner(V* ptr)
        {
            if (ptr->is_wrapped())
            {
                return (ptr->wrapper__CODE_SUFFIX__());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->can_delete_wrapper(true);
                return wptr;
            }
        }


        // Function used to return reference-to-wrapper
        template<typename U, typename V>
        U& reference_returner(V* ptr)
        {
            if (ptr->is_wrapped())
            {
                return *(ptr->wrapper__CODE_SUFFIX__());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->can_delete_wrapper(true);
                return *wptr;
            }
        }

        // Const version of the above function
        template<typename U, typename V>
        U& reference_returner(V* ptr) const
        {
            if (ptr->is_wrapped())
            {
                return *(ptr->wrapper__CODE_SUFFIX__());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->can_delete_wrapper(true);
                return *wptr;
            }
        }


        // Const-const version of the above function
        template<typename U, typename V>
        U& reference_returner(const V* ptr)
        {
            if (ptr->is_wrapped())
            {
                return *(ptr->wrapper__CODE_SUFFIX__());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->can_delete_wrapper(true);
                return *wptr;
            }
        }

};

__END_GAMBIT_NAMESPACE__

#endif /* __WRAPPERBASE__ */
