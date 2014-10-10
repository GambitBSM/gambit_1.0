#ifndef __WRAPPERBASE__
#define __WRAPPERBASE__



template <typename T>
class WrapperBase
{
    public:
        T* BEptr;
        bool memvar;

        // Constructor
        WrapperBase(T* BEptr_in, bool memvar_in) : BEptr(BEptr_in), memvar(memvar_in)
        {
            // BEptr->wrapper_GAMBIT(this);
        }

        // Copy constructor: 
        WrapperBase(const WrapperBase<T>& in) :
            BEptr(in.BEptr->pointerCopy_GAMBIT()),
            memvar(in.memvar)
        {
            // BEptr->wrapper_GAMBIT(this);
        }

        // Assignment operator
        WrapperBase& operator=(const WrapperBase<T>& in)
        {
            if (this != &in) 
            { 
                BEptr->pointerAssign_GAMBIT(in.BEptr); 
            }
            return *this;        
        }

        // Special member function to set member_variable: 
        void _setMemberVariable(bool memvar_in)
        {
            memvar = memvar_in;
        }

        ~WrapperBase()
        {
            if (!memvar)
            {
                if (BEptr->can_delete_me())
                {
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
                return (ptr->wrapper_GAMBIT());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->wrapper_GAMBIT(wptr);
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
                return *(ptr->wrapper_GAMBIT());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->wrapper_GAMBIT(wptr);
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
                return *(ptr->wrapper_GAMBIT());
            }

            else
            {
                U* wptr = new U(ptr);
                ptr->wrapper_GAMBIT(wptr);
                ptr->can_delete_wrapper(true);
                return *wptr;
            }
        }


};



#endif /* __WRAPPERBASE__ */
