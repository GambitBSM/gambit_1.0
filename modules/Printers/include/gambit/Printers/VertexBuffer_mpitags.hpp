//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MPI tag definitions for the VertexBuffer classes.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 May
///
///  *********************************************


#ifndef __vertexbuffer_mpitags_hpp__
#define __vertexbuffer_mpitags_hpp__

namespace Gambit
{
  namespace Printers 
  {

    /// Reserved tags for MPI messages
    /// TAG_REQ   - for messages registering/requesting a new tags
    /// PPID_SEND - for messages transferring point ID information
    /// N_BUFFERS_SENT - for messages counting the number of buffer transfer messages being sent in one 'package' 
    /// RA_BUFFERS_SENT - Contains no data, just indicates that RA buffer messages from some process are waiting to send.
    /// FINAL_SYNC - Contains no data, used to trigger final buffer sends and receives.
    enum Tags { TAG_REQ=0, PPID_SEND, N_BUFFERS_SENT, RA_BUFFERS_SENT, FINAL_SYNC };
    const int FIRST_EMPTY_TAG = FINAL_SYNC+1;

  }
}
#endif
