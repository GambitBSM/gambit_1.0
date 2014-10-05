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
        {}

        // Copy constructor: 
        WrapperBase(const WrapperBase<T>& in) :
            BEptr(in.BEptr->pointerCopy_GAMBIT()),
            memvar(in.memvar)
        {}

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
                delete BEptr;
            }
        }
};

#endif /* __WRAPPERBASE__ */
