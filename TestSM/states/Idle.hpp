//
//  Idle.hpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef Idle_hpp
#define Idle_hpp

#include "State.hpp"

class Idle : public State
{
public:
    Idle()
    {
        LOG("  >>Idle...  ")
    };
    
    ~Idle()
    {
        LOGLN("  Idle||")
    };
    void start(HAL *hal);
    void off(HAL *hal);
};

#endif /* Idle_hpp */
