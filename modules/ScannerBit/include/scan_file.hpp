#ifndef SCAN_FILE_HPP
#define SCAN_FILE_HPP
#define SCAN_FILE_NAMESPACE_BEGIN namespace Gambit {namespace Scanner {namespace scan{
#define SCAN_FILE_NAMESPACE_END } } }
//#define SCAN_FILE_NAMESPACE_BEGIN namespace scan{
//#define SCAN_FILE_NAMESPACE_END }

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <streambuf>
#include <istream>
#include <typeinfo>
#include <type_index.hpp>
#include <cassert>
#include <iterator>
#include <utility>
#include <sstream>
#include <type_traits>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <forward_list>

SCAN_FILE_NAMESPACE_BEGIN

//#define typeid(...) boost::typeindex::type_id<__VA_ARGS__>()

using Gambit::type_index;

template <typename T>
struct remove_all
{
        typedef typename std::remove_cv
        <
                typename std::remove_volatile
                <
                        typename std::remove_const
                        <
                                typename std::remove_reference
                                <
                                        T
                                >::type
                        >::type
                >::type
        >::type type;
};

template <typename T>
struct __is_container__
{
        static const bool value = false;
        typedef T type;
};

template <typename T>
struct __is_container__<std::vector<T>>
{
        static const bool value = true;
        typedef T type;
};

template <typename T>
struct __is_container__<std::set<T>>
{
        static const bool value = true;
        typedef T type;
};

template <typename T1, typename T2>
struct __is_container__<std::map<T1, T2>>
{
        static const bool value = true;
        typedef std::pair<T1, T2> type;
};

template <typename T1, typename T2>
struct __is_container__<std::unordered_map<T1, T2>>
{
        static const bool value = true;
        typedef std::pair<T1, T2> type;
};

template <typename T>
struct __is_container__<std::unordered_set<T>>
{
        static const bool value = true;
        typedef T type;
};

template <typename T>
struct __is_container__<std::list<T>>
{
        static const bool value = true;
        typedef T type;
};

template <typename T>
struct __is_container__<std::forward_list<T>>
{
        static const bool value = true;
        typedef T type;
};

template <typename T>
struct is_container
{
        const static bool value = __is_container__<typename remove_all<T>::type>::value;
        typedef typename __is_container__<typename remove_all<T>::type>::type type;
};

template <typename T>
struct __is_map__
{
        static const bool value = false;
        typedef T type;
};

template <typename T1, typename T2>
struct __is_map__<std::map<T1, T2>>
{
        static const bool value = true;
        typedef T2 type;
};

template <typename T1, typename T2>
struct __is_map__<std::unordered_map<T1, T2>>
{
        static const bool value = true;
        typedef T2 type;
};

template <typename T>
struct is_map
{
        const static bool value = __is_map__<typename remove_all<T>::type>::value;
        typedef typename __is_map__<typename remove_all<T>::type>::type type;
};

template <typename T>
struct __is_pair__
{
        const static bool value = false;
        //typedef T type;
        typedef T first_type;
        typedef T second_type;
};

template <typename T1, typename T2>
struct __is_pair__ <std::pair<T1, T2>>
{
        const static bool value = true;
        typedef T1 first_type;
        typedef T2 second_type;
};
                
template <typename T>
struct is_pair
{
        const static bool value = __is_pair__<typename remove_all<T>::type>::value;
        typedef typename __is_pair__<typename remove_all<T>::type>::first_type first_type;
        typedef typename __is_pair__<typename remove_all<T>::type>::second_type second_type;
};
                
template <typename T>
struct __aux_struct__
{
        typedef T type;
        const std::string &tag;
        const T &data;
        __aux_struct__(const std::string &tag, const T &data) : tag(tag), data(data)
        {
        }
};

template <typename T>
inline __aux_struct__<T> aux(const std::string key, const T& data)
{
        return __aux_struct__<T>(key, data);
}

template <typename T>
struct is_aux
{
        typedef T type;
        const static bool value = false;
};

template <typename T>
struct is_aux <__aux_struct__<T>>
{
        typedef T type;
        const static bool value = true;
};
        
class __scanner_buffer__ : public std::streambuf
{
private:
        std::vector<char> data_;
        std::vector<char>::iterator begin_;
        std::vector<char>::iterator end_;
        std::vector<char>::iterator current_in_;
        std::vector<char>::iterator current_out_;
        //__scanner_buffer__(const __scanner_buffer__ &);
        //__scanner_buffer__ &operator= (const __scanner_buffer__ &);
        
protected:
        
        int_type uflow()
        {
                if (current_in_ == end_)
                        return traits_type::eof();

                return traits_type::to_int_type(*current_in_++);
        }

        int_type underflow()
        {
                if (current_in_ == end_)
                        return traits_type::eof();

                return traits_type::to_int_type(*current_in_);
        }
        
        int_type overflow(int_type c = traits_type::eof())
        {
                if(c != traits_type::eof()) 
                if (current_out_ != end_) 
                {
                        *current_out_++ = c;
                }
                else
                {
                        data_.push_back(c);
                        current_in_ = data_.begin() + (current_in_ - begin_);
                        current_out_ = data_.begin() + data_.size();
                        begin_ = data_.begin();
                        end_ = data_.end();
                }
                
                //if (current_out_ == end_)
                //        return traits_type::eof();
                
                return traits_type::to_int_type(c);
        }

        int_type pbackfail(int_type ch)
        {
                if (current_in_ == begin_ || (ch != traits_type::eof() && ch != current_in_[-1]))
                        return traits_type::eof();

                return traits_type::to_int_type(*--current_in_);
        }
        
        std::streamsize showmanyc()
        {
                assert(std::less_equal<std::vector<char>::const_iterator>()(current_in_, end_));
                return end_ - current_in_;
        }
        
        pos_type seekpos (pos_type pos, std::ios_base::openmode which = std::ios_base::in | std::ios_base::out)
        {
                if (which&std::ios_base::in)
                {
                        current_in_ += pos;
                }
                else if(which&std::ios_base::out)
                {
                        current_out_ += pos;
                }
                
                return pos;
        }
        
public:
        __scanner_buffer__ () : data_(512), begin_(data_.begin()), end_(data_.end()), 
                                current_in_(data_.begin()), current_out_(data_.begin())
        {
                
        }
        
        size_t size() const {return current_out_ - begin_;}//data_.size();}
        char * data() const {return (char *)&(*begin_);}
        void reset() {current_in_ = begin_; current_out_ = begin_;}
};

template <typename T>
inline void _input_(std::ostream &, const T&);

template <typename T>
inline typename std::enable_if<!is_container<T>::value && !is_pair<T>::value, void>::type
__input__(std::ostream &in, const T &input)
{
        in.write((char *)&input, sizeof(T));
}

template <typename T>
inline typename std::enable_if<is_container<T>::value, void>::type
__input__(std::ostream &in, const T &input)
{
        size_t N = input.size();
        in.write((char *)&N, sizeof(size_t));
        for (auto it = input.begin(), end = input.end(); it != end; ++it)
                _input_(in, *it);
}

template <typename T>
inline typename std::enable_if<is_pair<T>::value, void>::type
__input__(std::ostream &in, const T &input)
{
        _input_(in, input.first);
        _input_(in, input.second);
}

template <typename T>
inline void _input_(std::ostream &in, const T&input){__input__<T>(in, input);}

template <typename T>
inline void _output_ (std::ostream&out, std::istream &in);

template <typename T>
inline typename std::enable_if<!is_container<T>::value && !is_pair<T>::value, void>::type
__output__ (std::ostream& out, std::istream &in)
{
        T result;
        in.read((char *)&result, sizeof(T));
        out << result << "   ";
}

template <typename T>
inline typename std::enable_if<is_container<T>::value, void>::type
__output__ (std::ostream& out, std::istream &in)
{
        size_t N;
        in.read((char *)&N, sizeof(size_t));
        for (size_t i = 0; i < N; i++)
        {
                _output_<typename is_container<T>::type> (out, in);
        }
}

template <typename T>
inline typename std::enable_if<is_pair<T>::value, void>::type
__output__ (std::ostream& out, std::istream &in)
{
        _output_<typename is_pair<T>::first_type>(out, in);
        _output_<typename is_pair<T>::second_type>(out, in);
}

template <typename T>
inline void _output_ (std::ostream&out, std::istream &in){__output__<T>(out, in);}

//inline void __input_types__(std::unordered_map<type_index, void (*)(std::ostream &, std::istream &)> &mapIn) {}

//template <typename T>
//inline void __input_types__(std::unordered_map<type_index, void (*)(std::ostream &, std::istream &)> &mapIn)
//{
//        if(mapIn.find(typeid(T)) == mapIn.end())
//                mapIn[typeid(T)] = _output_<T>;
//}

template <typename T, typename... args>
inline typename std::enable_if<sizeof...(args) == 0, void>::type
 __input_types__(std::unordered_map<type_index, void (*)(std::ostream &, std::istream &)> &mapIn)
{
        type_index type = typeid(T);
        if(mapIn.find(type) == mapIn.end())
                mapIn[type] = _output_<T>;
}

template <typename T, typename... args>
inline typename std::enable_if<sizeof...(args) != 0, void>::type
__input_types__(std::unordered_map<type_index, void (*)(std::ostream &, std::istream &)> &mapIn)
{
        type_index type = typeid(T);
        if(mapIn.find(type) == mapIn.end())
                mapIn[type] = _output_<T>;
        __input_types__<args...>(mapIn);
}

struct aux_struct
{
        std::ofstream file;
        std::ofstream tlb;
        __scanner_buffer__ buf;
        int totSize;
        
        aux_struct() : totSize(0) {}
        //aux_struct(std::string name) : file((name + "_temp_").c_str(), std::ios::out | std::ios::binary),
        //                                tlb((name + "_tlb_").c_str(), std::ios::out | std::ios::binary) {}
                              
        void emplace(const std::string &name)
        {
                file.open((name + "_temp_").c_str(), std::ios::out | std::ios::binary);
                tlb.open((name + "_tlb_").c_str(), std::ios::out | std::ios::binary);
        }
        
        void reopen(const std::string &name)
        {
                file.open((name + "_temp_").c_str(), std::ios::app | std::ios::binary);
                tlb.open((name + "_tlb_").c_str(), std::ios::app | std::ios::binary);
                //file.seekp(0, std::ios::beg);
                //tlb.seekp(0, std::ios::beg);
        }
                              
        void flush(int line)
        {
                size_t size = buf.size();
                file.seekp(0, std::ios::end);
                if (line == totSize)
                        tlb.seekp(0, std::ios::end);
                else if (size > 0)
                        tlb.seekp(line*(sizeof(size_t) + sizeof(std::streampos)));
                else
                        return;
                
                std::streampos pos = file.tellp();
                tlb.write((char *)&size, sizeof(size_t));
                tlb.write((char *)&pos, sizeof(std::streampos));
                file.write(buf.data(), size);
                tlb << std::flush;
                file << std::flush;
                buf.reset();
                totSize++;
        }
        
        void reset()
        {
                buf.reset();
        }
};

struct file_struct
{
        std::ofstream out;
        std::vector<std::string> files;
};

class dummy_ostream : public std::ostream {public: dummy_ostream(){}};

class ScanFileOutput
{
private:
        std::map<std::string, aux_struct> auxs;
        std::map<std::string, file_struct> files;
        std::unordered_map<type_index, void (*)(std::ostream &, std::istream &)> converts;
        std::vector<std::string> key;
        PriorTransform *prior;
        int line;
        int lineSize;
        
public:
        ScanFileOutput(const std::vector<std::string> &key, PriorTransform *prior) : key(key), prior(prior), line(0), lineSize(0)
        {
        }
        
        void setOutput(const YAML::Node &options)
        {
                auxs[""].emplace("");

                //std::map<std::string, std::string> options;
                //options["file_output"] = "weights ...";
                for (auto it = options.begin(), end = options.end(); it != end; ++it)
                {
                        std::string name = it->first.as<std::string>();
                        std::string temp;
                        std::stringstream sstr(it->second.as<std::string>());
                        
                        if (files.find(name) == files.end())
                        {
                                files[name].out.open(name.c_str());
                        }
                        
                        while(sstr >> temp)
                        {
                                if (temp != "...." && temp != "..." && temp != ".." && temp != ".")
                                {
                                        files[name].files.push_back(temp);
                                        
                                        if (auxs.find(temp) == auxs.end())
                                        {
                                                auxs[temp].emplace(temp);
                                        }
                                }
                                else
                                        files[name].files.push_back("");
                        }
                }
        }
        
        template <typename... args>
        void recover()
        {
                if (auxs.find(std::string("")) != auxs.end())
                        auxs[std::string("")].reopen("");

                std::map<std::string, std::string> options;
                options["file_output"] = "weights ...";
                for (auto it = options.begin(), end = options.end(); it != end; ++it)
                {
                        std::string name = it->first;
                        std::string temp;
                        std::stringstream sstr(it->second);
                        
                        if (files.find(name) == files.end())
                        {
                                files[name].out.open(name.c_str(), std::ios::app);
                        }
                        
                        while(sstr >> temp)
                        {
                                if (temp != "...." && temp != "..." && temp != ".." && temp != ".")
                                {
                                        files[name].files.push_back(temp);
                                        
                                        if (auxs.find(temp) == auxs.end())
                                        {
                                                auxs[temp].reopen(temp);
                                        }
                                }
                                else
                                        files[name].files.push_back("");
                        }
                }
                
                __input_types__<args...>(converts);
                //std::cout << "convets size" << converts.size() << std::endl;
                //loadTypes();
        }
                                
        ScanFileOutput &operator << (ScanFileOutput & (*f)(ScanFileOutput &))
        {
                return f(*this);
        }
        
        template <typename T>
        typename std::enable_if<!is_aux<T>::value, ScanFileOutput &>::type  
        operator << (const T &input)
        {
                type_index type = typeid(T);
                if (converts.find(type) == converts.end())
                        converts[type] = _output_<T>;
                //std::istream in(&mainBuff);
                std::ostream out(&auxs[""].buf);
                out.write((char *)&type, sizeof(type));
                __input__(out, input);
                return *this;
        }
        
        template <typename T>
        typename std::enable_if<is_aux<T>::value, ScanFileOutput &>::type
        operator << (const T &input)
        {
                type_index type = typeid(typename T::type);
                if (converts.find(type) == converts.end())
                        converts[type] = __output__<typename T::type>;
                std::ostream out(&auxs[input.tag].buf);
                out.write((char *)&type, sizeof(type));
                __input__(out, input.data);
                return *this;
        }
        
        ScanFileOutput & operator [] (int lineIn)
        {
                if (lineIn < lineSize && lineIn > 0)
                        line = lineIn;
                
                return *this;
        }
        
        void print()
        {
                for (auto it = files.begin(), end = files.end(); it != end; it++)
                {
                        std::vector<std::ifstream> ins(it->second.files.size());
                        std::vector<std::ifstream> inst(it->second.files.size());
                        auto iit = ins.begin();
                        auto iitl = inst.begin();
                        for (auto itf = it->second.files.begin(), end = it->second.files.end(); itf != end; itf++, iit++, iitl++)
                        {
                                iit->open((*itf + "_temp_").c_str(), std::ios::binary | std::ios::in);
                                iitl->open((*itf + "_tlb_").c_str(), std::ios::binary | std::ios::in);
                        }
                        
                        std::ofstream &out = it->second.out;
                        bool cont = true;
                        
                        while (cont)
                        {
                                cont = false;
                                for (auto iit = ins.begin(), iitl = inst.begin(), end = ins.end(); iit != end; iit++, iitl++)
                                {
                                        size_t size;
                                        type_index index(typeid(int));
                                        
                                        if (iitl->read((char *)&size, sizeof(size_t)))
                                        {
                                                std::streampos pos;
                                                //size_t pos = iit->tellg();
                                                iitl->read((char *)&pos, sizeof(std::streampos));
                                                iit->seekg(pos);
                                                while (size > size_t(iit->tellg()) - size_t(pos))
                                                {
                                                        iit->read((char *)&index, sizeof(type_index));
                                                        if (converts.find(index) != converts.end())
                                                                converts[index](out, *iit);
                                                }
                                                cont = true;
                                        }
                                }
                                
                                if (cont)
                                        out << std::endl;
                        }
                }
        }
        
        void loadTypes()
        {
                for (auto it = files.begin(), end = files.end(); it != end; it++)
                {
                        std::vector<std::ifstream> ins(it->second.files.size());
                        std::vector<std::ifstream> inst(it->second.files.size());
                        auto iit = ins.begin();
                        auto iitl = inst.begin();
                        for (auto itf = it->second.files.begin(), end = it->second.files.end(); itf != end; itf++, iit++, iitl++)
                        {
                                iit->open((*itf + "_temp_").c_str(), std::ios::binary | std::ios::in);
                                iitl->open((*itf + "_tlb_").c_str(), std::ios::binary | std::ios::in);
                        }
                        
                        std::ofstream out("testing");
                        bool cont = true;
                        
                        while (cont)
                        {
                                cont = false;
                                for (auto iit = ins.begin(), iitl = inst.begin(), end = ins.end(); iit != end; iit++, iitl++)
                                {
                                        size_t size;
                                        type_index index(typeid(int));
                                        
                                        if (iitl->read((char *)&size, sizeof(size_t)))
                                        {
                                                size_t pos = iit->tellg();
                                                while (size > size_t(iit->tellg()) - pos)
                                                {
                                                        iit->read((char *)&index, sizeof(type_index));
                                                        std::cout << "index "<< "   " << size << std::endl; 
                                                        if (converts.find(index) == converts.end())
                                                                std::cout << "Cannot load types. need " << index.name() << std::endl;
                                                        else
                                                                converts[index](std::cout, *iit);
                                                                
                                                }
                                                cont = true;
                                        }
                                }
                                
                                if (cont)
                                        out << std::endl;
                        }
                }
        }
        
        std::vector<double> &prior_transform(const std::vector<double> &in)                                                     \
        {                                                                                                                       \
                static std::map<std::string, double> key_map;                                                                   \
                static std::vector<double> ret;                                                                                 \
                                                                                                                                \
                prior->transform(in, key_map);                                                                                   \
                                                                                                                                \
                auto it_ret = ret.begin();                                                                                      \
                for (auto it = key.begin(), end = key.end(); it != end; it++, it_ret++)                                         \
                {                                                                                                               \
                        *it_ret = key_map[*it];                                                                                 \
                }                                                                                                               \
                                                                                                                                \
                return ret;                                                                                                     \
        } 
        
        void flush()
        {
                for (auto it = auxs.begin(), end = auxs.end(); it != end; it++)
                {
                        it->second.flush(line);
                }
                if (line == lineSize)
                        lineSize++;
                line = lineSize;
        }
        
        void clear()
        {
                for (auto it = auxs.begin(), end = auxs.end(); it != end; ++it)
                {
                        it->second.reset();
                }
        }
};

inline ScanFileOutput & flush (ScanFileOutput &out) 
{
        out.flush();
        return out;
}

inline ScanFileOutput & endl (ScanFileOutput &out) 
{
        out.flush();
        return out;
}

inline ScanFileOutput & clear (ScanFileOutput &out)
{
        out.clear();
        return out;
}

SCAN_FILE_NAMESPACE_END

//#undef typeid
#endif