//
//  Hovering.hpp
//  TestSM
//
//  Created by Rainy on 2/6/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef Hovering_hpp
#define Hovering_hpp

#include "State.hpp"
#include "HAL.hpp"

class Hovering: public State
{
public:
    Hovering()
    {
        LOG("  >>Hovering...  ")
    };
    ~Hovering()
    {
        LOGLN("  Hovering||\n")
    };
    void stop(HAL* hal);
    void resume(HAL* hal);
};

#endif /* Hovering_hpp */
