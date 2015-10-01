#ifndef __ABSTRACTBASE_HPP__
#define __ABSTRACTBASE_HPP__

__START_GAMBIT_NAMESPACE__

class AbstractBase
{
    private:
        mutable bool delete_wrapper;
        mutable bool delete_me;
        mutable bool wrapped;

    public:

        AbstractBase() : delete_wrapper(false), delete_me(true), wrapped(false) {}

        bool can_delete_me()
        {
            return delete_me;
        }

        void can_delete_me(bool delete_me_in)
        {
            delete_me =  delete_me_in;
        }


        bool can_delete_wrapper()
        {
            return delete_wrapper;
        }

        void can_delete_wrapper(bool delete_wrapper_in)
        {
            delete_wrapper =  delete_wrapper_in;
        }


        bool is_wrapped()
        {
            return wrapped;
        }

        void is_wrapped(bool wrapped_in)
        {
            wrapped = wrapped_in;
        }
};

__END_GAMBIT_NAMESPACE__

#endif