//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  FIXME
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Marcin Chrzaszcz
///  \date 2015 May
///  \date 2016 July
///  \date 2016 August
///
///  *********************************************

#include "yaml-cpp/yaml.h"
#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/FlavBit/FlavBit_rollcall.hpp"
#include "gambit/FlavBit/FlavBit_types.hpp"
#include "gambit/FlavBit/flav_obs.hpp"


namespace Gambit
{

  namespace FlavBit
  {

    using namespace std;
    namespace ublas = boost::numeric::ublas;


    /// Implementation of Kstarmumu_theory_errr methods
    /// @{

    /// Constructor
    Kstarmumu_theory_errr::Kstarmumu_theory_errr()
    {
      size_obs=476+1;
      names_obs= std:: vector<str>(size_obs);
      #include "gambit/FlavBit/BKstarmumu_theory_error_names.hpp"
      for(int i=0;i<size_obs;++i)
      {
        map_kstarmumu[names_obs[i]]=i;
        covariance.push_back(std::vector<double>(size_obs));
      }
      #include "gambit/FlavBit/BKstarmumu_theory_error_matrix.hpp"
    }


    /// Return theory error covariance matrix for selected observables
    boost::numeric::ublas::matrix<double> Kstarmumu_theory_errr::get_cov_theory(std::vector<str> observables)
    {
     boost::numeric::ublas::matrix<double> cov_th(observables.size(), observables.size());
     for(unsigned i=0;i<observables.size();++i)
     {
       for(unsigned j=0;j<observables.size();++j)
       {
         cov_th(i,j)=covariance[map_kstarmumu[observables[i]]][map_kstarmumu[observables[j]]];
       }
     }
     return  cov_th;
    }
    /// @}


    /// Extraction operator for correlation
    void operator >> (const YAML::Node& node, Correlation& c)
    {
      // safety
      string name = node["name"].as<std::string>();
      if (name == "NONE") return;
      // reading correlation
      c.corr_name= name;
      c.corr_val = node["value"].as<double>();
    }

    /// Extraction operator for measurement
    void operator >> (const YAML::Node& node, Measurement& v)
    {
      v.name=node["name"].as<std::string>();
      v.is_limit = node["islimit"].as<bool>();
      v.exp_value= node["exp_value"].as<double>();
      v.exp_source = node["exp_source"].as<std::string>();
      v.exp_stat_error = node["exp_stat_error"].as<double>();
      v.exp_sys_error = node["exp_sys_error"].as<double>();
      v.exp_error=sqrt( v.exp_stat_error*v.exp_stat_error + v.exp_sys_error*v.exp_sys_error );
      v.th_error=node["th_error"].as<double>();
      v.th_error_type=node["th_error_type"].as<std::string>();
      v.th_error_source = node["th_error_source"].as<std::string>();
      const YAML::Node& correlations = node["correlation"];
      for (unsigned i=0; i<correlations.size(); ++i)
      {
        Correlation corr_tmp;
        correlations[i] >> corr_tmp;
        if (corr_tmp.corr_name != "") v.corr.push_back(corr_tmp);
      }
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
      YAML::Node doc = YAML::Load(fin);
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

    void Flav_reader::read_yaml_measurement(string name, string measurement_name)
    {
      string path=measurement_location+"/"+name;
      std::ifstream fin(path.c_str());
      YAML::Node doc = YAML::Load(fin);
      Measurement mes_tmp;

      if (debug) cout << measurement_name.c_str() << endl;

      for (unsigned i=0; i<doc.size(); ++i)
      {
        Measurement mes_tmp;
        doc[i] >> mes_tmp;
        if(mes_tmp.name!=measurement_name.c_str()) continue;

        measurements.push_back(mes_tmp);
        number_measurements++;
        if (debug) cout << "Increasing " << measurement_name << " " << mes_tmp.name << " " << mes_tmp.exp_value << endl;
      }
    }



    void Flav_reader::print(Measurement mes)
    {
      cout<<"################### Mesurement"<<endl;
      cout<<"Name: "<<mes.name<<endl;
      cout<<(mes.is_limit ? "Limit" : "Value")<<": "<<mes.exp_value<<endl;
      cout<<"Stat/sys errror: "<< mes.exp_stat_error<<"/"<<mes.exp_sys_error<<endl;
      cout<<"Error plus/minus: "<<mes.exp_error<<endl;
      cout<<"Experimental source: "<<mes.exp_source<<endl;
      cout<<"Correlations:"<<endl;
      for(unsigned i=0;i<mes.corr.size();++i)
      {
        cout<<mes.corr[i].corr_name<<"  "<<mes.corr[i].corr_val<<endl;
      }
      cout<<"########## END"<<endl;
    }

    void Flav_reader::create_global_corr()
    {
      // Initialising diagonal correlation matrix
      M_glob_correlation = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);
      M_glob_cov = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);

      for(int i =0; i<number_measurements;++i)
      {
        for(int j=0;j<number_measurements;++j)
        {
          M_glob_correlation(i,j)=0.;
          if(i==j) M_glob_correlation(i,j)=1.;
        }
      }

      for(int i=0; i<number_measurements; ++i)
      {
        #ifdef FLAVBIT_DEBUG
          cout<<"Correlation size: "<< measurements[i].corr.size()<<endl;
        #endif
        for ( unsigned icorr=0; icorr< measurements[i].corr.size(); ++icorr)
        {
          #ifdef FLAVBIT_DEBUG
            cout<<"Searching for correlation: "<< measurements[i].corr[icorr].corr_name <<endl;
          #endif
          int i_corr_index=get_measurement_for_corr(measurements[i].corr[icorr].corr_name  );
          M_glob_correlation(i_corr_index,i)=measurements[i].corr[icorr].corr_val;
          //M_glob_correlation(i_corr_index,i)=glob_correlation[i_corr_index][i];
        }
      }

      if (debug) print_matrix(M_glob_correlation,"Correlation Matrix:");

      check_corr_matrix();

      // Create the Covariance matrix
      for(int i=0; i<number_measurements;++i)
      {
        for(int j=0;j<number_measurements;++j)
        {
          M_glob_cov(i,j)=M_glob_correlation(i,j)*(measurements[i].exp_error)*(measurements[j].exp_error);
        }
      }
      if (debug) print_matrix(M_glob_cov,"Covariance Matrix:");

      // Declare the the measurement vector
      M_measurement= boost::numeric::ublas::matrix<double> (number_measurements,1);

      for(int i=0; i<number_measurements;++i)
      {
        M_measurement(i,0)=measurements[i].exp_value;
      }
      if (debug) print_matrix(M_measurement, "Measurements:");

      th_err= boost::numeric::ublas::matrix<double> (number_measurements,1);
      for(int i=0; i<number_measurements;++i)
      {
        th_err(i,0)=measurements[i].th_error;
      }
      if (debug) print_matrix(th_err, "Theory errors:");

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

    void Flav_reader::print_matrix(boost::numeric::ublas::matrix<double>& M, str name)
    {
      cout<<name<<endl;
      for(int i=0; i < number_measurements; ++i)
      {
        for(int j=0 ; j< number_measurements; ++j) cout<<M(i,j)<<"\t";
        cout<<endl;
      }
    }

    void Flav_reader::check_corr_matrix()
    {
      for( int i=0; i < number_measurements; ++i)
      {
        for( int j=0 ; j< number_measurements; ++j)
        {
          if (i==j&&M_glob_correlation(i,i)!=1)
          {
            FlavBit_error().raise(LOCAL_INFO, "Correlation matrix diagonal element differs from 1!");
          }
          if (M_glob_correlation(i,j) !=M_glob_correlation(j,i))
          {
            cout << "Correlation matrix " << i << "," << j << " = " << M_glob_correlation(i,j) << endl;
            cout << "Correlation matrix " << i << "," << j << " = " << M_glob_correlation(j,i) << endl;
            FlavBit_error().raise(LOCAL_INFO, "Correlation matrix not symmetric");
          }
        }
      }
    }

  }
}
