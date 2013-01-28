// some standard gambit classes
#include "module_rollcall.hpp"
#include "exceptions.hpp"

/*!
//  \brief Example of gambit core framework use
//
//   A program to demo what can be done with the current code.
//
//   \author GAMBIT Collab
//   \date Oct 2012 -> ??
//
*/

// Spacing utility for stream overload below
std::string spacing(int len, int maxlen) {
  int offset = 0;
  if (len < maxlen) {offset=maxlen-len;}
  return std::string(offset+5,' ');
}   

// Define overloadings of the stream operator for string-to-X maps 
// (needs to go into a header somewhere, and should really be templated
typedef std::basic_ostream<char, std::char_traits<char> > stream;
// string-to-string
stream& operator<<(stream& os, const std::map<std::string,std::string>& map){
  unsigned int maxlen = 0;
  std::map<std::string,std::string>::const_iterator it;

  for (it = map.begin(); it != map.end(); it++) {
    if ((*it).first.length() > maxlen) maxlen = (*it).first.length(); }
    
  for (it = map.begin(); it != map.end(); it++) {
    if (it != map.begin()) {os << std::endl;}
    os << " " << (*it).first << spacing((*it).first.length(), maxlen) << "(" << (*it).second << ")";}

  return os;
}
// string-to-int
stream& operator<<(stream& os, const std::map<std::string,int>& map){
  unsigned int maxlen = 0;
  std::map<std::string,int>::const_iterator it;

  for (it = map.begin(); it != map.end(); it++) {
    if ((*it).first.length() > maxlen) maxlen = (*it).first.length(); }
    
  for (it = map.begin(); it != map.end(); it++) {
    if (it != map.begin()) {os << std::endl;}
    os << " " << (*it).first << spacing((*it).first.length(), maxlen) << "(" << (*it).second << ")";}

  return os;
}

GAMBIT::dict masterDict;

int main( int argc, const char* argv[] )
{

  std::cout<<std::endl;
  std::cout<< "This is a skeleton example for gambit."<<std::endl;
  std::cout<< "At the moment it does the following:"<<std::endl;
  std::cout<< "  * hooks up to the pieces of SUFit that have been retained"<<std::endl;
  std::cout<< "  * creates and registers modules"<<std::endl;
  std::cout<< "  * creates and registers module functions and their dependencies"<<std::endl;
  std::cout<<std::endl;

  int steps=100;
  if(argc>1) steps=atoi(argv[1]);
  std::cout<< "Running with steps="<<steps<<std::endl;

  // Setup logs
  logsetup::setfile("_gambit_msgs_example_errors.txt");              // setup detailed debug
  logsetup::setfile_upto_LOG("_gambit_msgs_example_normal.txt");     // into files, depending
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug0.txt");   // on debug level.
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug1.txt",1);
  logsetup::setfile_upto_DEBUG("_gambit_msgs_example_debug2.txt",2);
  logsetup::setLogLevel(logsetup::sDEBUG4);   // log all
  logsetup::setEchoLevel(logsetup::sINFO); // echo only relevant logs
  GAMBIT_MSG_INFO("starting example");

   // Some basic TinyDarkBit functionality
  masterDict.set<double>("m1", 500);
  masterDict.set<double>("m2", 1000);
  masterDict.set<double>("m3", 3500);
  masterDict.set<double>("mu", 400);
  masterDict.set<double>("ma", 1000);
  masterDict.set<double>("tanbe", 10);
  //std::cout << "*** Start Dark ***" << std::endl;
  //std::cout << "My name is " << TinyDarkBit::name() << std::endl;
  //std::cout << " I can calculate: " << std::endl << TinyDarkBit::iCanDo << std::endl;
  //std::cout << " ...but I may need: " << std::endl << TinyDarkBit::iMayNeed << std::endl;
  //std::cout << "TinyDarkBit says: omega_DM is " << TinyDarkBit::result<double>("omega_DM") << std::endl;
  //std::cout << "*** End Dark ***" << std::endl;

  //Here are a bunch of explicit example calls to the two example modules, testing their capabilities
  std::cout << "My name is " << GAMBIT::ExampleBit_A::name() << std::endl;
  //std::cout << " I can calculate: " << std::endl << GAMBIT::ExampleBit_A::iCanDo << std::endl;
  //std::cout << " ...but I may need: " << std::endl << GAMBIT::ExampleBit_A::iMayNeed << std::endl;
  //std::cout << std::endl;

  std::cout << "I can do nevents (tag-style) " << GAMBIT::ExampleBit_A::provides<GAMBIT::Tags::nevents>() << std::endl;
  std::cout << "I can do nevents (string-style) " << GAMBIT::ExampleBit_A::provides("nevents") << std::endl;
  if (GAMBIT::ExampleBit_A::requires("nevents_like","nevents")) { 
    std::cout << "I require nevents_like to do this though." << std::endl;
  }
  std::cout << "I can do nevents_like " << GAMBIT::ExampleBit_A::provides("nevents_like") << std::endl;
  if (GAMBIT::ExampleBit_A::requires("nevents","nevents_like")) { 
    std::cout << "I require nevents to do this though." << std::endl;
  }
  //std::cout << "I can do nevents_postcuts (tag-style) " << GAMBIT::ExampleBit_A::provides<GAMBIT::Tags::nevents_postcuts>() << std::endl;
  std::cout << "I can do nevents_postcuts (string-style) " << GAMBIT::ExampleBit_A::provides("nevents_postcuts") << std::endl;
  std::cout << "I can do xsection " << GAMBIT::ExampleBit_A::provides("xsection") << std::endl;
  std::cout << "I can do dogsname " << GAMBIT::ExampleBit_A::provides("authors_dogs_name") << std::endl;

  std::cout << "Core says: report on n_events_like!" << std::endl;
  std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: ";
  std::cout << "  "; GAMBIT::ExampleBit_A::report("nevents_like");
  std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: Well, actually...";
  std::cout << "  "; GAMBIT::ExampleBit_A::report<GAMBIT::Tags::nevents_like>();
  std::cout << "  "; GAMBIT::ExampleBit_A::report<GAMBIT::ExampleBit_A::Tags::nevents_like>();
 if (GAMBIT::ExampleBit_A::provides("nevents_like")) {
    std::cout << "OK, so what is it then?" << std::endl;
    typedef GAMBIT::obs_or_like_traits<GAMBIT::ExampleBit_A::Tags::nevents_like>::type testType; //in this case the underlying type is double
    // Call the module function by its tag  
    //testType nevents_like = GAMBIT::ExampleBit_A::result<Tags::nevents_like>() ;
  //  std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: " << nevents_like << " (tag-style)" <<std::endl ;
  //  // Call the module function by its string name (could use TestType here too insead of double) 
  //  double nevents_like2 = GAMBIT::ExampleBit_A::result<double>("nevents_like") ;
  //  std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: " << nevents_like2 << " (string-style)" <<std::endl ;
    // So have a go at sending it to the dictionary 
  //  masterDict.set<testType>("nevents_like",nevents_like);
    // Now pull it back  
  //  testType nevents_like_pulled = masterDict.get<testType>("nevents_like");
    // and show off
  //  std::cout << "  This is what I put into and retrieved from the master dictionary: " << nevents_like_pulled << std::endl ;
    // You can send it in as a different type, and it will be converted -- but you must read it out with that type agan
    //masterDict.set<float>("nevents_like",nevents_like);
    // Try pulling it out as the wrong type (raises exception; uncomment to see)
    //int nevents_like_fail = masterDict.get<int>("nevents_like");
    // Try pulling something out that is not in the dictionary (raises exception; uncomment to see)
    //int nevents_fail = masterDict.get<int>("nevents");
    // You can also clear a dictionary like this:
  //  masterDict.purge();    
  }
  

  //std::cout << "Core says: report on n_events_postcuts!" << std::endl;
  //std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: ";
  //std::cout << "  "; GAMBIT::ExampleBit_A::report("nevents_postcuts");
  //if (GAMBIT::ExampleBit_A::provides("nevents_postcuts")) {
  //  std::cout << "OK, so what is it then?" << std::endl;
  //  std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: " << GAMBIT::ExampleBit_A::result<Tags::nevents_postcuts>() << std::endl ;
  //}
  //std::cout << "Core says: report on n_events!" << std::endl;
 // std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: ";
 // std::cout << "  "; GAMBIT::ExampleBit_A::report("nevents");
 // if (GAMBIT::ExampleBit_A::provides("nevents")) {
 //   std::cout << "OK, so what is it then?" << std::endl;
 //   std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: " << GAMBIT::ExampleBit_A::result<Tags::nevents>() << std::endl ;
 // }
 // std::cout << "Core says: report on n_events again!" << std::endl;
 // std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: ";
 // std::cout << "  "; GAMBIT::ExampleBit_A::report("nevents");
 // if (GAMBIT::ExampleBit_A::provides("nevents")) {
 //   std::cout << "OK, so what is it now, then?" << std::endl;
 //   std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: " << GAMBIT::ExampleBit_A::result<Tags::nevents>() << std::endl ;
 // }
 // std::cout << "Core says: report on the dog!" << std::endl;
 // std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: ";
 // std::cout << "  "; GAMBIT::ExampleBit_A::report("authors_dogs_name");
 // if (GAMBIT::ExampleBit_A::provides("authors_dogs_name")) {
 //   std::cout << "OK, so what is it then?" << std::endl;
 //   typedef obs_or_like_traits<Tags::authors_dogs_name,GAMBIT::ExampleBit_A_cls>::type testType; //in this case the underlying type is std::string
 //   testType authors_dogs_name = GAMBIT::ExampleBit_A::result<Tags::authors_dogs_name>();
 //   std::cout << "  " << GAMBIT::ExampleBit_A::name() << " says: " << authors_dogs_name << std::endl ;
 //   //So have a go at sending it to the dictionary 
 //   masterDict.set<testType>("authors_dogs_name",authors_dogs_name);
 //   //Now pull it back  
 //   testType authors_dogs_name_pulled = masterDict.get<testType>("authors_dogs_name");
 //   // and show off
 //   std::cout << "  This is what I put into and retrieved from the master dictionary: " << authors_dogs_name_pulled << std::endl ;
 // }


  //std::cout <<  std::endl;
  //std::cout << "My name is " << ExampleBit_B::name() << std::endl;
  //std::cout << " I can calculate: " << std::endl << ExampleBit_B::iCanDo << std::endl;
  //std::cout << " ...but I may need: " << std::endl << ExampleBit_B::iMayNeed << std::endl;
  //std::cout << std::endl;
  //std::cout << "I can do nevents " << ExampleBit_B::provides("nevents") << std::endl;
  //std::cout << "I can do nevents_like " << ExampleBit_B::provides("nevents_like") << std::endl;
  //std::cout << "I can do nevents_postcuts " << ExampleBit_B::provides("nevents_postcuts") << std::endl;
  //std::cout << "I can do xsection " << ExampleBit_B::provides("xsection") << std::endl;
  //std::cout << "I can do dogsname " << ExampleBit_B::provides("authors_dogs_name") << std::endl;
  //std::cout << "Core says: report on n_events!" << std::endl;
  //std::cout << ExampleBit_B::name() << " says: ";
  //std::cout << "  "; ExampleBit_B::report("nevents");
  //if (ExampleBit_B::provides("nevents")) {
  //  std::cout << "OK, so what is it then?" << std::endl;
  //  std::cout << "  " << ExampleBit_B::name() << " says: " << ExampleBit_B::result<Tags::nevents>() << std::endl ;
  // }

  std::cout <<  std::endl;
 
  // Instantiate the ScannerBit module


  // Instantiate the ModelBit module



  // Read in the .gam file


  // Resolve dependencies in observables and likelihoods.  Raise exception if dependency tree has closed loops.



  // Gather pointers to requested observables and likelihoods



  // Launch scanner





  // From here is basically just legacy SUFit code, for inspiration/example purposes


  try{
    GAMBIT_MSG_LOG("gambit example");
    //GAMBIT_MSG_LOG("example, given the initial model: vM20        " << (**vM20) );
    //GAMBIT_MSG_LOG("example, given the initial model: vSigmaV     " << (**vSigmaV) );
    /*  GAMBIT_MSG_LOG("example, given the initial model: vPositron " << (**vPositron) );
        GAMBIT_MSG_LOG("example, given the initial model: ds_mass 0: " << (**vM) );
        GAMBIT_MSG_LOG("example, given the initial model: vOmega: " << (**vOmega) );
    */
  }catch( gambit::exceptions::gambit_exception_base & e){
    GAMBIT_MSG_LOG("Caught exception: "<<exceptions::get_exception_dump(e,1));
  }


  return 1;

};
