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
  cout<<"Op"<<endl;
  v.name=node["name"].as<std::string>();
  cout<<"passed"<<endl;
  v.is_limit = node["islimit"].as<bool>();
  cout<<"passed"<<endl;

  if(v.is_limit== true)
    {
      v.limit=node["limit"].as<double>();
      v.value=-1.;
      v.stat_error_plus=-1.;
      v.sys_error_plus=-1.;
      v.stat_error_minus=-1.;
      v.sys_error_minus=-1.;
      v.error_plus=-1.;
      v.error_minus=-1.;
      
    }
  else
    {
      v.value= node["value"].as<double>();
      v.stat_error_minus = node["stat_error_minus"].as<double>();
      v.sys_error_minus = node["sys_error_minus"].as<double>();
      v.stat_error_plus=node["stat_error_plus"].as<double>();
      v.sys_error_plus=node["sys_error_plus"].as<double>();

      v.error_plus=sqrt( v.stat_error_plus*v.stat_error_plus +v.sys_error_plus*v.sys_error_plus);
      v.error_minus=sqrt(v.sys_error_minus*v.sys_error_minus+v.stat_error_minus*v.stat_error_minus);
      
     v.limit=-1.;
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
  cout<<"Number of measurements: "<<number_measurements<<endl;
  return OK;
}

void Flav_reader::print(Measurement mes)
{
  cout<<"################### Mesurement"<<endl;
  cout<<"Name: "<<mes.name<<endl;
  if(!mes.is_limit) cout<<"Stat/sys errror: "<<mes.stat_error_plus<<" "<< mes.stat_error_minus<<"/"<<mes.sys_error_plus<<" "<<mes.sys_error_minus<<endl;
  else cout<<"Limit: "<<mes.limit<<endl;
  cout<<"Source: "<<mes.source<<endl;
  cout<<"Correlations:"<<endl;
  cout<<"Error plus/minus: "<<mes.error_plus<<" "<<mes.error_minus<<endl;
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
  

  M_glob_cov_uu = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);     
  M_glob_cov_ud = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);     
  M_glob_cov_du = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);     
  M_glob_cov_dd = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements); 
  
  
  M_glob_cov_inv = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements); 
  M_glob_cov_inv_uu = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);   
  M_glob_cov_inv_ud = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);   
  M_glob_cov_inv_du = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);   
  M_glob_cov_inv_dd = boost::numeric::ublas::matrix<double> (number_measurements,number_measurements);   
  



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
	  M_glob_cov(i,j)=M_glob_correlation(i,j)*(measurements[i].error_plus +measurements[i].error_minus)*(measurements[j].error_plus +measurements[j].error_minus)*0.25;
	  M_glob_cov_uu(i,j)=M_glob_correlation(i,j)*(measurements[i].error_plus)*(measurements[j].error_plus);
	  M_glob_cov_ud(i,j)=M_glob_correlation(i,j)*(measurements[i].error_plus)*(measurements[j].error_minus);
	  M_glob_cov_du(i,j)=M_glob_correlation(i,j)*(measurements[i].error_minus)*(measurements[j].error_plus);  
	  M_glob_cov_dd(i,j)=M_glob_correlation(i,j)*(measurements[i].error_minus)*(measurements[j].error_minus); 

	}
    }
  print_cov_matrix();
  
  // InvertMatrix(M_glob_correlation, M_glob_cov_inv);

  InvertMatrix(M_glob_cov_uu, M_glob_cov_inv_uu);
  InvertMatrix(M_glob_cov_ud, M_glob_cov_inv_ud); 
  InvertMatrix(M_glob_cov_du, M_glob_cov_inv_du); 
  InvertMatrix(M_glob_cov_dd, M_glob_cov_inv_dd); 

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
  if(!debug) cout<<"Correlation matrix:"<<endl;
  if(!debug)  cout<<M_glob_correlation<<endl; // this is ugly

 if(debug) cout<<"Correlation matrix"<<endl;
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
  if(!debug) cout<<"Mean Cov matrix:"<<endl;
  if(!debug)  cout<<M_glob_cov<<endl; // this is ugly

  if(debug) cout<<"Mean Cov matrix"<<endl;
  if(debug){
    for(int i=0; i < number_measurements; ++i)
      {
        for( int j=0 ; j< number_measurements; ++j)
          {
            cout<<M_glob_cov(i,j)<<"\t";

          }
        cout<<endl;
      }
  }
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
      cout<<endl;
    }
  return OK;
}

double Flav_reader::calc_Chi2(vector<double> theory, vector<double> theory_error)
{
  double Chi2=0.;
  vector<double> diff(number_measurements); // this is vector of(measurement - theory)
  for(int i=0;i<number_measurements;++i)
    {
      diff[i]=measurements[i].value - theory[i];
    }
  for(int i=0; i<number_measurements;++i)
    {
      for(int j=0; j<number_measurements;++j)
	{
	  if( diff[i] >= 0. && diff[j] >=0.) Chi2+= diff[i] * M_glob_cov_inv_uu(i,j)*diff[j];
	  if( diff[i] >= 0. && diff[j] <0.) Chi2+= diff[i] * M_glob_cov_inv_ud(i,j)*diff[j];
	  if( diff[i] < 0. && diff[j] >=0.) Chi2+= diff[i] * M_glob_cov_inv_du(i,j)*diff[j];  
	  if( diff[i] < 0. && diff[j] <0.) Chi2+= diff[i] * M_glob_cov_inv_dd(i,j)*diff[j];   

	}
    }
  return Chi2;
}
void Flav_reader::construct_theory_b2sll()
{
  const int cov_size=128; // input from Nazila
  double covariance[cov_size][cov_size];  // declaring table that is filled in file from Nazila
#include "covmatrix.tab" ;

  names_obs=vector<string>(cov_size, ""); // names Nazila usese
#include "names.txt"; // filling big list
  vector<string> q2_bins={"0.1-0.98", "1.1-2.5", "2.5-4", "4-6", "6-8", "15-17", "17-19"};
  vector<string> S_bins={"FL_B0Kstar0mumu_", "S3_B0Kstar0mumu_", "S4_B0Kstar0mumu_", "S5_B0Kstar0mumu_", "S7_B0Kstar0mumu_", "S8_B0Kstar0mumu_", "S9_B0Kstar0mumu_"};
  if(use_S) // assuming 2GeV bins
    {
      vector<string> input;
      for(unsigned iq2=0;iq2<q2_bins.size();++iq2)
	{
	  for(unsigned iname=0;iname<S_bins.size();++iname)
	    {
	      string tmp=S_bins.at(iname)+q2_bins.at(iq2);
	      input.push_back(tmp);	
		
	    }      
	}  // we got names of the variables in for B->K*mumu
      //##############################################################
      //    putting the intigers from lists
      //##############################################################
      vector<int> input_int;
      for(unsigned i=0;i <input.size();++i)
	{
	  for(int j=0;j<cov_size;++j)
	    {
	      if(input[i]== names_obs[j]) input_int.push_back( j);
	    }
	}
      // now making the correlations 
      b2sll_cov =  new double*[input_int.size()];
      for(int i = 0; i < input_int.size(); i++)
	{
	  b2sll_cov[i]=new double[input_int.size()];
	}
      
      for(unsigned x=0;x<input_int.size();++x)
	{
	  for(unsigned y=0;y<input_int.size();++y)
	    {                 
	      int x_tmp=input_int[x];
	      int y_tmp=input_int[y];
	      b2sll_cov[x][y]=covariance[x_tmp][y_tmp];
	      
	    }
	}
    } //if(use_S)
}


