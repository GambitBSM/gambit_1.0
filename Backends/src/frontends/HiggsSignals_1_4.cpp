//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file HiggsSignals.cpp
///
///  Frontend source for the HiggsSignals backend.
///
///  Actual implementation of HiggsSignals ini function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christopher S. Rogan
///          (crogan@cern.ch)
///  \date 2015 Sept
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/backend_singleton.hpp"
#include "gambit/Backends/frontends/HiggsSignals_1_4.hpp"
#include "gambit/Utils/file_lock.hpp"

std::string folder_name;
std::string HS_data;
std::string HS_path;

void mv_data(std::string filename)
{
  std::string file_path = HS_path + "/../Expt_tables/";
  std::string out_file = file_path + HS_data + "/" + filename; 
  std::string src_file = file_path + "latestresults/"+filename;
  // PS: this is not system-independent.  Use cmake -E copy <file> <destination>.  See cmake/backends.cmake for examples.
  std::string copy_cmd = "cp " + src_file + " " + out_file;
  const char * copy_cmd_c = strdup(copy_cmd.c_str());
  system(copy_cmd_c);
}

void set_HS_data(std::vector <std::string> channels)
{
  // make the directory
  std::string file_path = HS_path + "/../Expt_tables/" + HS_data;
  // PS: not system indep; use cmake -E
  std::string cmd = "mkdir " + file_path;
  const char * cmd_c = strdup(cmd.c_str());
  system(cmd_c);
  
  for (unsigned int i = 0; i< channels.size();i++)
  {
    if (channels[i] == "Hgaga")
    {
      mv_data("ATL_H-gaga_central-highpT_8TeV_20.3fb-1_125.4GeV_7084102.txt");
      mv_data("ATL_H-gaga_central-lowpT_8TeV_20.3fb-1_125.4GeV_7084101.txt");
    }
    else if (channels[i] == "Htautau")
    {
      mv_data("ATL_H-tautau_hadhad_boosted_7-8TeV_24.8fb-1_125.36GeV_2014061105.txt");
      mv_data("ATL_H-tautau_hadhad_VBF_7-8TeV_24.8fb-1_125.36GeV_2014061106.txt");
      mv_data("ATL_H-tautau_lephad_boosted_7-8TeV_24.8fb-1_125.36GeV_2014061103.txt");
    }
    else
    {
      mv_data(channels[i]);
    }
  }
}


BE_INI_FUNCTION
{

  static bool scan_level = true;
  if(scan_level)
  {
    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    int pdf = 2;    // choose which pdf style to use for Higgs lineshape; 2 = Gaussian
    // Initialize HiggsSignals. Do this one-by-one for each MPI process with
    // locks, as HS calls HB, which writes files then reads them back in later (crazy).
    // Note that this is the Higgs*Bounds* lock, as in the HiggsBounds ini function,
    // because we need to make sure that neither this function nor the HB ini function
    // run at the same time, beccause both of them cause the HiggsBounds files to be
    // written.

    // Find all the versions of HiggsBounds that have been successfully loaded, and get
    // their locks.
    std::vector<str> hbversions = Backends::backendInfo().working_safe_versions("HiggsBounds");    
    std::vector<Utils::FileLock*> mylocks;
    for (auto it = hbversions.begin(); it != hbversions.end(); ++it)
    {
      mylocks.push_back(new Utils::FileLock("HiggsBounds_" + *it + "_init"));
      mylocks.back()->get_lock();
    }

    // initialize HiggsSignals with the latest results and set pdf shape
    HS_data = runOptions->getValueOrDef<std::string>("latestresults", "HS_data");
    
    const char * exp_data = strdup(HS_data.c_str());//strdup(data_path.c_str());

    HS_path = backendDir;
    
    if (HS_data == "fully_config_")
    {
      std::vector <std::string> channels;
      std::vector <std::string> null;       
      channels = runOptions->getValueOrDef<std::vector<std::string>>(null,"channels");
      for (unsigned int i = 0; i< channels.size();i++)
      {
        std::cout << "channel = " << channels[i] << "\n";
      }
      if (channels.size()==0){ backend_error().raise(LOCAL_INFO,"No channels entered, please enter as yaml option in the format \"channels: [ , ]\"");}
      set_HS_data(channels);
    }
    
    initialize_HiggsSignals(nHneut,nHplus,exp_data);
    setup_pdf(pdf);
    
    for (auto it = mylocks.begin(); it != mylocks.end(); ++it)
    {
      (*it)->release_lock();
      delete *it;
    }
    scan_level = false;
  }

}
END_BE_INI_FUNCTION
