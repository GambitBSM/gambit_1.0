#ifndef SCAN_FILE_HPP
#define SCAN_FILE_HPP

#include <fstream>
#include <cstdio>

namespace Gambit
{
        namespace Scanner
        { 
                template <typename T>
                struct is_vector
                {
                        static const bool value = false;
                        typedef T type;
                };

                template <typename T>
                struct is_vector<std::vector<T>>
                {
                        static const bool value = true;
                        typedef T type;
                };

                template <typename T>
                struct is_vector<const std::vector<T>>
                {
                        static const bool value = true;
                        typedef T type;
                };

                template <typename T>
                struct is_vector<std::vector<T> &>
                {
                        static const bool value = true;
                        typedef T type;
                };

                template <typename T>
                struct is_vector<const std::vector<T> &>
                {
                        static const bool value = true;
                        typedef T type;
                };

                template <typename T, typename... args>
                typename std::enable_if<!is_vector<T>::value, void>::type inputStream(std::ofstream &ion, const T &in, const args&...params)
                {
                        ion.write((char *)&in, sizeof(T));
                }

                template <typename T>
                typename std::enable_if<!is_vector<T>::value, void>::type inputStream(std::ofstream &ion, const T &in)
                {
                        ion.write((char *)&in, sizeof(T));
                }

                template <typename T, typename... args>
                typename std::enable_if<is_vector<T>::value, void>::type inputStream(std::ofstream &ion, const T &in, const args&...params)
                {
                        for (auto it = in.begin(), end = in.end(); it != end; it++)
                                ion.write((char *)&in, sizeof(typename is_vector<T>::type));
                }

                template <typename T>
                typename std::enable_if<is_vector<T>::value, void>::type inputStream(std::ofstream &ion, const T &in)
                {
                        for (auto it = in.begin(), end = in.end(); it != end; it++)
                                ion.write((char *)&in, sizeof(typename is_vector<T>::type));
                }

                template <typename T, typename... args>
                typename std::enable_if<!is_vector<T>::value, void>::type outputStream(std::ofstream &out, const T &in, const args&...params)
                {
                        out << in << "   ";
                }

                template <typename T>
                typename std::enable_if<!is_vector<T>::value, void>::type outputStream(std::ofstream &out, const T &in)
                {
                        out << in << "   ";
                }

                template <typename T, typename... args>
                typename std::enable_if<is_vector<T>::value, void>::type outputStream(std::ofstream &out, const T &in, const args&...params)
                {
                        for (auto it = in.begin(), end = in.end(); it != end; it++)
                                out << *it << "\t";
                }

                template <typename T>
                typename std::enable_if<is_vector<T>::value, void>::type outputStream(std::ofstream &out, const T &in)
                {
                        for (auto it = in.begin(), end = in.end(); it != end; it++)
                                out << *it << "\t";
                }

                template <typename T, typename... args>
                typename std::enable_if<!is_vector<T>::value, int>::type totalSize( const T &in, const args&... params)
                {
                        return sizeof(T) + totalSize(params...);
                }

                template <typename T>
                typename std::enable_if<!is_vector<T>::value, int>::type totalSize(const T&)
                {
                        return sizeof(T);
                }

                template <typename T, typename... args>
                typename std::enable_if<is_vector<T>::value, int>::type totalSize(const T &in, const args&...params)
                {
                        return in.size()*sizeof(T) + totalSize(params...);
                }

                template <typename T>
                typename std::enable_if<is_vector<T>::value, int>::type totalSize(const T &in)
                {
                        return in.size()*sizeof(T);
                }
                template <typename T>
                typename std::enable_if<!is_vector<T>::value, int>::type totalSize(){return 0;}
                template <typename T>
                typename std::enable_if<is_vector<T>::value, int>::type totalSize(){return 0;}
                
                class ScanFileOutput
                {
                private:
                        std::string file;
                        std::ifstream in;
                        std::ofstream out;
                        std::ofstream fileOut;
                        std::vector<short int> sizes;
                        std::vector<std::string> key;
                        PriorTransform *prior;
                        unsigned int pos;
                        unsigned int dim;
                        
                public:
                        ScanFileOutput(const std::vector<std::string> &key, const int dim, PriorTransform *prior) 
                                : file(tempnam(NULL, NULL)), out(file.c_str(), std::ios::out | std::ios::binary), 
                                sizes(1, 0), key(key), dim(dim), prior(prior), pos(0) {}
                        
                        void setOutput(const char *name)
                        {
                                out.close();
                                in.open(file.c_str(), std::ios::in | std::ios::binary);
                                fileOut.open(name);
                        }
                        
                        template <typename... args>
                        void input (args... params)
                        {
                                sizes.push_back(totalSize(params...) + sizes[pos]);
                                pos++;
                                inputStream(out, params...);
                        }
                        
                        template <typename... args>
                        void output (int i, args... params)
                        {
                                std::vector<double> vec(dim);
                                in.seekg(sizes[i]);
                                int size = sizes[i+1] - sizes[i];
                                for(auto it = vec.begin(), end = vec.end(); it != end; it++)
                                {
                                        size -= sizeof(double);
                                        in.read((char*)&(*it), sizeof(double));
                                }
                                
                                std::vector<double> ret = prior_transform(vec);
                                
                                outputStream(params...);
                                for(auto it = vec.begin(), end = vec.end(); it != end; it++)
                                {
                                        fileOut << *it << "   ";
                                }
                                
                                while (size >0)
                                {
                                        size -= sizeof(double);
                                        double temp;
                                        in.read((char*)&temp, sizeof(double));
                                        fileOut << temp << "   ";
                                }
                                fileOut << std::endl;
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
                };
        }
}

#endif