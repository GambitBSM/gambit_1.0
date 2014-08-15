// #ifndef gambit_ModelParametersBase_hpp
// #define gambit_ModelParametersBase_hpp 1
// 
// namespace Gambit {
// 
//   /*! \brief virtual base class for model parameters.
//   //
//   // This class is only taking care of the version
//   //
//   // \author Johan Lundberg
//   // \date July-September 2011
//   */
//   class ModelParametersBase {
//   public:
//     unsigned long long getVersion() const {
//       return _paramversion ;
//     }
//     //ModelParametersBase():_paramversion(1) {GAMBIT_MSG_DEBUG("hi.");}
//     ModelParametersBase():_paramversion(1) {}
//   protected:
//     //virtual ~ModelParametersBase(){GAMBIT_MSG_DEBUG("bye.");}
//     /* Ben: The debug message can cause crashes/hangs during GAMBIT cleanup if a 
//        ModelParameters object still exists at this point. Seems like the order
//        of the destructor calls is compiler-dependent, so the debug objects can
//        be destroyed before the ModelParameters objects, so that when the debug
//        messaged is called here we crash, because the debug object is gone
//        already. My temporary solution is to simply not call a debug message
//        here. */
//     virtual ~ModelParametersBase(){}  
//     void updateVersion(){ _paramversion++;}
//   private:
//     unsigned long long _paramversion;
//   };
// }
// 
// #endif
