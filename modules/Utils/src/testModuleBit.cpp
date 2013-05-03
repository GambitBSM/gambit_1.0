#include <iostream>
#include "Objects.hpp"
#include "ModuleBit.hpp"

CREATE_BIT(OneBit);
CREATE_BIT(TwoBit);

ASSOCIATE_TAG_OBJECT(HeadsWillRoll, bool);
PROVIDE_OBJECT(OneBit, HeadsWillRoll);
REQUIRE_OBJECT(TwoBit, HeadsWillRoll);
    
int main() {
    std::cout<<"\n\n";
    OneBit myOneBit;
    TwoBit myTwoBit;
    
    if(myOneBit.isRequired<Tags::HeadsWillRoll>() )
        std::cout<<"OneBit requires HeadsWillRoll\n";
    else
        std::cout<<"OneBit does not require HeadsWillRoll!!\n";
    myOneBit.iRequireReport<Tags::HeadsWillRoll>();
    std::cout<<"\n\n";
    
    if(myOneBit.canBeProvided<Tags::HeadsWillRoll>() )
        std::cout<<"OneBit can provide HeadsWillRoll\n";
    else
        std::cout<<"OneBit cannot provide HeadsWillRoll!!\n";
    myOneBit.iProvideReport<Tags::HeadsWillRoll>();
    std::cout<<"\n\n";
    
    if(myTwoBit.isRequired<Tags::HeadsWillRoll>() )
        std::cout<<"TwoBit requires HeadsWillRoll\n";
    else
        std::cout<<"TwoBit does not require HeadsWillRoll!!\n";
    myTwoBit.iRequireReport<Tags::HeadsWillRoll>();
    std::cout<<"\n\n";
    
    if(myTwoBit.canBeProvided<Tags::HeadsWillRoll>() )
        std::cout<<"TwoBit can provide HeadsWillRoll\n";
    else
        std::cout<<"TwoBit cannot provide HeadsWillRoll!!\n";
    myTwoBit.iProvideReport<Tags::HeadsWillRoll>();
    std::cout<<"\n\n";
    
    
}


