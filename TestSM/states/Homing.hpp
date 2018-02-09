//
//  Homing.hpp
//  TestSM
//
//  Created by Rainy on 2/9/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef Homing_hpp
#define Homing_hpp

#include "State.hpp"
#include "HAL.hpp"

class Homing: public State
{
public:
    Homing()
    {
        LOG("  >>Homing...  ")
    };
    
    ~Homing()
    {
        LOGLN("  Homing||\n")
    };
    
    void land(HAL* hal);
    void autoIdle(HAL* hal);
};
#endif /* Homing_hpp */
