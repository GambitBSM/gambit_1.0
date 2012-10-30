#ifndef sufit_binneddata_h_
#define sufit_binneddata_h_ 1
#include "exceptions.hh"

namespace sufit {
  using namespace ::sufit::exceptions;
  /*! \brief Simple binned data (of any type. Suggest: double) in 1 dimension.
  //
  // the axis dimension is always 'double'
  //
  // The purpose is not to implement a histogram class. Rather just
  // a container of binned data with get/set functionality.
  //
  // The class was implemented as an example of passing structured data from calculator
  // into the likelihood calculation
  //
  // \author Johan Lundberg
  // \date Aug 2011
  */
  template <class T>
  class BinnedData {
  private:
    mutable std::vector<double> _bins;
    mutable std::vector<T> _values;
  public:
    virtual ~BinnedData(){};
    BinnedData(){}     // for now... but this is not the best design..

    BinnedData(long nbins,double lowbin_low,double highbin_high,const T & defaultvalue=T())
      :_values(nbins,defaultvalue)
    {
      double space=(highbin_high-lowbin_low)/nbins;
      for(int i=0;i<nbins;i++){
        _bins.push_back(i*space+lowbin_low);
      }
      _bins.push_back(highbin_high); // the last bin we manually to get it exact
    }
    BinnedData(std::vector<double> const &bin_edges,std::vector<T> const & values=std::vector<T>()){
      if(bin_edges.size()<2){
        SUFIT_THROW_EXCEPTION(e_configuration() << i_text("there must be at least one bin (uppper, lower edge)"));
      }
      _bins=bin_edges;
      if(values.size()==0){
        // if values vector is empty (default argument) we initialize with default value of T
        _values=std::vector<T>(bin_edges.size()-1,T());
        return;
      }
      if((values.size()+1)!=(bin_edges.size())){
        SUFIT_THROW_EXCEPTION(e_configuration() << i_text("number of bins must be number of values+1"));
      }
      _values=values;
    }
    T & operator[](long i){
      test_index(i);
      return _values[i];
    }
    const T & operator[](long i) const{
      test_index(i);
      return _values[i];
    }
    void Print() const{
      for(int i=0;i<size();i++){
        std::cout <<" index:"<<i<< " value: "<< (*this)[i] <<
          " bins: [" <<binLow(i)<<","<<binHigh(i)<<"]"<<std::endl;
      }
    }
    double binLow(long i)const{
      test_index(i);
      return _bins[i];
    }
    double binHigh(long i)const{
      test_index(i);
      return _bins[i+1];
    }
    void setbinLow(long i,double v){
      test_index(i);
      _bins[i]=v;
    }
    void setbinHigh(long i,double v){
      test_index(i);
      _bins[i+1]=v;
    }
    // pointer owned by class
    std::vector<T> const* Values()const{
      return _values;
    }
    // pointer owned by class
    std::vector<double> const* BinsEdges()const{
      return _bins;
    }
    // create and return a copy to an array containing bin center
    std::vector<double> BinsCenters(){
      std::vector<double> bc(size(),0);
      for(int i=0;i<size();i++){
        bc.push_back(binCenter(i));
      }
      return bc;
    }
    double binCenter(long i) const{
      test_index(i);
      return 0.5*(_bins[i+1]+_bins[i]);
    }
    int size() const{
      return _values.size();
    }

    friend std::ostream &operator<<(std::ostream &strm, BinnedData const &ob){
      for(int i=0;i<ob.size();i++){
        strm <<" index:"<<i<< " value: "<< ob[i] <<
          " bins: [" <<ob.binLow(i)<<","<<ob.binHigh(i)<<"]"<<std::endl;
      }
      return strm;
    }

  private:
    inline void test_index(int i) const {
      if((i>=0)&&(i<size())){
        return;
      }
      SUFIT_THROW_EXCEPTION(e_configuration() << i_text("trying to get/set bin outside valid range"));
    }
  };
}
#endif
