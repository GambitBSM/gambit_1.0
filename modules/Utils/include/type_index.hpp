//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Variadic utilty functions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Aug 2014
///
///  *********************************************

#ifndef TYPE_INDEX_HPP
#define TYPE_INDEX_HPP

#include <typeinfo>

namespace Gambit
{
        struct type_index
        {
        public:
                type_index(const type_info& __rhs) noexcept
                : _M_target(&__rhs) { }

                bool operator==(const type_index& __rhs) const noexcept
                { return *_M_target == *__rhs._M_target; }

                bool operator!=(const type_index& __rhs) const noexcept
                { return *_M_target != *__rhs._M_target; }

                bool operator<(const type_index& __rhs) const noexcept
                { return _M_target->before(*__rhs._M_target); }

                bool operator<=(const type_index& __rhs) const noexcept
                { return !__rhs._M_target->before(*_M_target); }

                bool operator>(const type_index& __rhs) const noexcept
                { return __rhs._M_target->before(*_M_target); }

                bool operator>=(const type_index& __rhs) const noexcept
                { return !_M_target->before(*__rhs._M_target); }

                size_t hash_code() const noexcept
                { return _M_target->hash_code(); }

                const char* name() const
                { return _M_target->name(); }

        private:
                const type_info* _M_target;
        };
}

namespace std
{
        template<typename _Tp> struct hash;

        template<>
        struct hash<Gambit::type_index>
        {
                typedef size_t        result_type;
                typedef Gambit::type_index  argument_type;

                size_t operator()(const Gambit::type_index& __ti) const noexcept
                { return __ti.hash_code(); }
        };
}

#endif
