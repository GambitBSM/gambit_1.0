//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementation file for DarkBit Process
///  Catalogue constituents types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2015 Mar
///  
///  *********************************************

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/DarkBit/ProcessCatalogue.hpp"


namespace Gambit
{

    namespace DarkBit
    {

        // TH_ParticleProperty definitions

        TH_ParticleProperty::TH_ParticleProperty(double mass, unsigned int spin2)
         : mass(mass),
           spin2(spin2)
        {}


        // TH_Channel definitions
        
        /// Constructor
        TH_Channel::TH_Channel(std::vector<str> finalStateIDs, Funk::Funk genRate)
         :  finalStateIDs(finalStateIDs), 
            nFinalStates(finalStateIDs.size()),
            genRate(genRate)
        {
            if ( nFinalStates < 2 )
            {
                std::cout << "ERROR: Need at least two final state particles. " << std::endl;
                exit(1);
            }
        }
        
        /// Print information about this channel.
        void TH_Channel::printChannel() const
        {
            std::cout << "Channel: ";
            for ( auto it = finalStateIDs.begin(); it != finalStateIDs.end(); it++ )
            {
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        }

        /// Indicate whether or not the final states of this channel contain a specific particle.
        bool TH_Channel::channelContains(str p) const
        {
            return std::find(finalStateIDs.begin(), finalStateIDs.end(), p) != finalStateIDs.end();
        }

        /// Indicate whether or not this channel is the one defined by some specific final states.  Particle name version.
        bool TH_Channel::isChannel(str p0, str p1, str p2, str p3) const
        {
            str vals[] = {p0, p1};
            std::vector<str> inIDs(std::begin(vals), std::end(vals));
            if (p2 != "") inIDs.push_back(p2);
            if (p3 != "") inIDs.push_back(p3);
            return isChannel(inIDs);            
        }
        
        /// Indicate whether or not this channel is the one defined by some specific final states.  Particle vector version.
        bool TH_Channel::isChannel(std::vector<str> particles) const
        {
            return std::is_permutation(finalStateIDs.begin(), finalStateIDs.end(), particles.begin());
        }


        // TH_Process definitions

        /// Constructor for decay process
        TH_Process::TH_Process(str particle1ID)
         : isAnnihilation (false), 
           particle1ID    (particle1ID), 
           particle2ID    ("")
        {}

        /// Constructor for annihilation process
        TH_Process::TH_Process(str particle1ID, str particle2ID)
         : isAnnihilation (true),
           particle1ID(particle1ID),
           particle2ID(particle2ID)
        {
            if (particle1ID.compare(particle2ID) > 0)
            {
                DarkBit_error().raise(LOCAL_INFO, "Particle identifiers should be in alphabetical order.");
            }
        }

        /// Compare initial states
        bool TH_Process::isProcess(str p1, str p2) const
        {
            sspair candidate_process(p1, p2);
            sspair this_process(this->particle1ID, this->particle2ID);
            return candidate_process == this_process;
        }

        /// Check for given channel.  Return a pointer to it if found, NULL if not.
        const TH_Channel* TH_Process::find(std::vector<str> final_states) const
        {
            for (auto it = channelList.begin(); it != channelList.end(); ++it)
            {
                if (it->isChannel(final_states)) return &(*it);
            }
            return NULL;
        }


        // TH_ProcessCatalog definitions

        /// Retrieve a specific process from the catalogue
        TH_Process TH_ProcessCatalog::getProcess(str id1, str id2) const
        {
            const TH_Process* temp = find(id1, id2);
            if (temp == NULL)
            {
              DarkBit_error().raise(LOCAL_INFO, "Process with initial states " + id1 + " " + id2 + " missing.");
            }
            return *temp;
        }

        /// Check for a specific process in the catalogue
        const TH_Process* TH_ProcessCatalog::find(str id1, str id2) const
        {
            for (std::vector<TH_Process>::const_iterator it = processList.begin(); it != processList.end(); ++it)
            {
                if ( it -> isProcess(id1, id2) ) return &(*it);
            }
            return NULL;
        }

        /// Retrieve properties of a given particle involved in one or more processes in this catalogue
        TH_ParticleProperty TH_ProcessCatalog::getParticleProperty(str id) const
        {
            return particleProperties.at(id);
        }


    } // namespace DarkBit

} // namespace Gambit
