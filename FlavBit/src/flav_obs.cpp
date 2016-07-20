//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module FlavBit.
///
///  Compile-time registration of available
///  observables and likelihoods, as well as their
///  dependencies.
///
///  Add to this if you want to add an observable
///  or likelihood to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Marcin Chrzaszcz
///  \data 2015 May
///  \data 2016 July
///
///
///  *********************************************
///
/// \def MODULE
/// Specifies that this is the MODULE named FlavBit.
///
/// \def CAPABILITY
/// Specifies that FlavBit (this MODULE) is
/// capable of providing the service CAPABILITY.
/// Usually a CAPABILITY means that the MODULE can
/// compute some physical or statistical quantity
/// referred to by CAPABILITY.
///
/// \def FUNCTION
/// Specifies that FlavBit (this MODULE) contains
/// a function named FUNCTION that can execute the
/// commands required to provided the current CAPABILITY.
///
/// \def BACKEND_REQ
/// Specifies that the current FUNCTION in
/// FlavBit (this MODULE) requires BACKEND_REQ from
/// a backend code.  The requirement BACKEND_REQ corresponds
/// to a capability that a valid backend function
/// is expected to report in its corresponding
/// registration header file.
///
/// \def CONDITIONAL_DEPENDENCY
/// Specifies that the current FUNCTION in
/// ExampleBit_B (this MODULE) has a CONDITIONAL_DEPENDENCY
/// that is only active under certain conditions.
/// These conditions may include:
///  - a specific backend is in use in order to fill
///    a certain BACKEND_REQ
///  - a certain model is under analysis

#include "gambit/FlavBit/flav_obs.hpp"
#include "yaml-cpp/yaml.h"

using namespace std;
// How come boost doesn't have inverting matrix
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/vector_proxy.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/triangular.hpp>
#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/io.hpp>

//namespace ublas = boost::numeric::ublas;

#include <boost/numeric/ublas/matrix.hpp>       
#include <boost/numeric/ublas/io.hpp>           
                                                
#include "gambit/FlavBit/FlavBit_types.hpp"     
                                                


namespace Gambit    
{                   
  namespace FlavBit 
  {                 

    namespace ublas = boost::numeric::ublas; 
    
/* Matrix inversion routine.
   Uses lu_factorize and lu_substitute in uBLAS to invert a matrix */
    template<class T>
    bool InvertMatrix (const ublas::matrix<T>& input, ublas::matrix<T>& inverse) {
      using namespace boost::numeric::ublas;
      typedef permutation_matrix<std::size_t> pmatrix;
      // create a working copy of the input
      matrix<T> A(input);
      // create a permutation matrix for the LU-factorization
      pmatrix pm(A.size1());

      // perform LU-factorization
      int res = lu_factorize(A,pm);
      if( res != 0 ) return false;

      // create identity matrix of "inverse"
      inverse.assign(ublas::identity_matrix<T>(A.size1()));
      
      // backsubstitute to get the inverse
      lu_substitute(A, pm, inverse);

      return true;
    }


    // now the extraction operators for these types
    void operator >> (const YAML::Node& node, Correlation& c) {
      string tmp;
      // safety
      tmp = node["name"].as<std::string>();
      if(tmp=="NONE") return;
      // reading correlation
      c.corr_name= node["name"].as<std::string>();
      c.corr_val = node["value"].as<double>();
    }
    void operator >> (const YAML::Node& node, Measurement& v) {
      
      v.name=node["name"].as<std::string>();
      
      v.is_limit = node["islimit"].as<bool>();
      

      if(v.is_limit== true)
  {
    v.limit=node["limit"].as<double>();
    v.value=-1.;
    v.exp_stat_error=-1.;
    v.exp_sys_error=-1.;
    v.exp_error=-1.;

    v.error_type="NONE";
    
    v.th_error=-1.;


 }
      else
  {
    v.value= node["value"].as<double>();
    v.exp_stat_error = node["exp_stat_error"].as<double>();
    v.exp_sys_error = node["exp_sys_error"].as<double>();
    // v.exp_stat_error_plus=node["exp_stat_error_plus"].as<double>();
    // v.exp_sys_error_plus=node["exp_sys_error_plus"].as<double>();
    v.th_error=node["th_error"].as<double>();  
    // v.th_error_plus=node["th_error_plus"].as<double>();    

    
    //adding the errors with 
    v.exp_error=sqrt( v.exp_stat_error*v.exp_stat_error +v.exp_sys_error*v.exp_sys_error);
    //v.exp_error_minus=sqrt(v.exp_sys_error_minus*v.exp_sys_error_minus+v.exp_stat_error_minus*v.exp_stat_error_minus);
    
    v.limit=-1.;
    v.error_type=node["error_type"].as<std::string>();
    
  }
      v.source = node["source"].as<std::string>();
      // now the correlation
      const YAML::Node& correlations = node["correlation"];
      for(unsigned i=0;i<correlations.size();++i) {
  Correlation corr_tmp;
  correlations[i] >> corr_tmp;
  v.corr.push_back(corr_tmp);


      }// for loop inside correlation
    }



    Flav_reader::Flav_reader(string loc)
    {
      measurements=vector< Measurement >(0);
      measurement_location=loc;
      debug=false;
      use_S=true;
      use_P=false;
      number_measurements=0;
   }

    int Flav_reader::read_yaml(string name)
    {
      int OK=1;
      string path=measurement_location+"/"+name;
      std::ifstream fin(path.c_str());
      //YAML::Parser parser(fin);
      YAML::Node doc = YAML::Load(fin);
      // parser.GetNextDocument(doc);
      number_measurements=0;
      for(unsigned i=0;i<doc.size();++i)
  {
    Measurement mes_tmp;
    doc[i] >> mes_tmp;
    if(debug) print(mes_tmp);
    measurements.push_back(mes_tmp);
    number_measurements++;
  }
      if(debug) cout<<"Number of measurements: "<<number_measurements<<endl;
      return OK;
    }
    void Flav_reader::read_yaml_mesurement(string name, string measurement_name)
    {
      string path=measurement_location+"/"+name;       
      std::ifstream fin(path.c_str()); 
      //YAML::Parser parser(fin);      
      YAML::Node doc = YAML::Load(fin);
      Measurement mes_tmp;

      if(debug) cout<<measurement_name.c_str()<<endl;
      
      for(unsigned i=0;i<doc.size();++i)   
  {                                  
    Measurement mes_tmp;             
    doc[i] >> mes_tmp;               
    if(mes_tmp.name!=measurement_name.c_str()) continue;
    
    measurements.push_back(mes_tmp); 
    number_measurements++;  
    if(debug) cout<<"Increasing "<<measurement_name<<" "<< mes_tmp.name<<" "<<mes_tmp.value<<endl;
  }                                  


    }
    
    
    
    void Flav_reader::print(Measurement mes)
    {
      cout<<"################### Mesurement"<<endl;
      cout<<"Name: "<<mes.name<<endl;
      if(!mes.is_limit) cout<<"Stat/sys errror: "<<mes.exp_stat_error<<"/"<<mes.exp_sys_error<<endl;
      else cout<<"Limit: "<<mes.limit<<endl;
      cout<<"Source: "<<mes.source<<endl;
      cout<<"Correlations:"<<endl;
      cout<<"Error plus/minus: "<<mes.exp_error<<endl;
      for(unsigned i=0;i<mes.corr.size();++i)
  {
    cout<<mes.corr[i].corr_name<<"  "<<mes.corr[i].corr_val<<endl;
    
  }
      cout<<"########## END"<<endl;

    }




    void Flav_reader::create_global_corr()
    {
      // initializing diag correlation matrix
      //  vector < vector < double > > glob_correlation(number_measurements, vector<double>(number_measurements));
      //glob_correlation = vector < vector < double > > (number_measurements, vector<double>(number_measurements));
      M_glob_correlation = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);
      M_glob_correlation_inv = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);
      M_glob_cov = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);
      M_glob_cov = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);
      M_glob_cov_inv = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);

      


      for(int i =0; i<number_measurements;++i)
  {
    for(int j=0;j<number_measurements;++j)
      {
        M_glob_correlation(i,j)=0.;
        if(i==j) M_glob_correlation(i,j)=1.;
      }
  }
      //  print_corr_matrix() ;
      // fill with correlations from cards
      for(int i=0; i<number_measurements; ++i)
  {
    for ( unsigned icorr=0; icorr< measurements[i].corr.size(); ++icorr)
      {
        int i_corr_index=get_measurement_for_corr(measurements[i].corr[icorr].corr_name  );
        M_glob_correlation(i_corr_index,i)=measurements[i].corr[icorr].corr_val;
        //M_glob_correlation(i_corr_index,i)=glob_correlation[i_corr_index][i];
      }
  }
      if(debug) print_corr_matrix();
      bool ok=Flav_reader::check_corr_matrix();
      if(!ok) return;
      //if(ok) InvertMatrix(M_glob_correlation, M_glob_correlation_inv);
      
      //  if(debug)  print_corr_inv_matrix();
      // now creating the Covariance matrix
      for(int i=0; i<number_measurements;++i)
  {
    for(int j=0;j<number_measurements;++j)
      {
        M_glob_cov(i,j)=M_glob_correlation(i,j)*(measurements[i].exp_error)*(measurements[j].exp_error);
  
      }
  }
      print_cov_matrix();

      // InvertMatrix(M_glob_correlation, M_glob_cov_inv);
      
      if(debug) cout<<"Inverting: "<<endl;
      if(debug) cout<<M_glob_cov<<endl;

      InvertMatrix(M_glob_cov, M_glob_cov_inv);
  
      
      if(debug) cout<<"Inverted"<<endl;
      if(debug) cout<<M_glob_cov_inv<<endl;

      // calcul;atin the the measurement vector:
      M_measurement= boost::numeric::ublas::matrix<double> (number_measurements,1);
      
      for(int i=0; i<number_measurements;++i)   
  {                                       
    M_measurement(i,0)=measurements[i].value;
  }
      if(debug) cout<<M_measurement<<endl;
      




      
    }

    int Flav_reader::get_measurement_for_corr(string ss)
    {
      for(int i=0;i<number_measurements;++i)
  {
    if(measurements[i].name == ss) return i;
    
  }
      cout<<"Error!, didn't find measuremnet: "<<ss<<endl;
      return -1;
    }
    void Flav_reader::print_corr_matrix()
    {
      if(debug) cout<<"Correlation matrix:"<<endl;
      if(debug)  cout<<M_glob_correlation<<endl; // this is ugly


      if(debug){
  for(int i=0; i < number_measurements; ++i)
    {
      for(int j=0 ; j< number_measurements; ++j)
        {
    cout<<M_glob_correlation(i,j)<<"\t";

        }
      cout<<endl;
    }
      }
    }

    void Flav_reader::print_cov_matrix()
    {
      if(debug) cout<<"Mean Cov matrix:"<<endl;
      if(debug) cout<<M_glob_cov<<endl; // this is ugly      
      if(debug) cout<<"Mean Cov matrix"<<endl;
      if(debug)
      {
        for(int i=0; i < number_measurements; ++i)
        {
          for( int j=0 ; j< number_measurements; ++j)
            {
              cout<<M_glob_cov(i,j)<<"\t";
            }
          cout<<endl;
        }
      }
      if(debug)  cout<<"finishing printing"<<endl;
    }

    bool Flav_reader::check_corr_matrix()
    {
      bool OK= true;
      for( int i=0; i < number_measurements; ++i)
      {
        for( int j=0 ; j< number_measurements; ++j)
        {
          if(i==j&&M_glob_correlation(i,i)!=1) { cout<<"Error, diagonal element diff. 1!!"<<endl; return false; }
          if(M_glob_correlation(i,j) !=M_glob_correlation(j,i)){ cout<<"Error: Matrix not symmetric"<<endl; return false; }
        }    
      }
      return OK;
    }

  }
}
