//
//  Flying.hpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef Flying_hpp
#define Flying_hpp

#include "State.hpp"
#include "HAL.hpp"

class Flying: public State
{
public:
    Flying()
    {
        LOG("  >>Flying...  ")
    };
    
    ~Flying()
    {
        LOGLN("  Flying||\n")
    };
    void pause(HAL* hal);
    void land(HAL* hal);
    void gohome(HAL* hal);
};

#endif /* Flying_hpp */
