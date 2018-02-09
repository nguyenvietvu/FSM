//
//  Landing.hpp
//  TestSM
//
//  Created by Rainy on 2/8/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef Landing_hpp
#define Landing_hpp

#include "State.hpp"
#include "HAL.hpp"


class Landing: public State
{
public:
    Landing()
    {
        LOG("  >>Landing...  ")
    };
    
    ~Landing()
    {
        LOGLN("  Landing||\n")
    };
    
    void gohome(HAL* hal);
    void autoIdle(HAL* hal);
};
#endif /* Landing_hpp */
