//
//  State.hpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef State_hpp
#define State_hpp

#include "../Def.hpp"

class HAL;

class State
{
public:
    State(){};
    ~State(){};
    virtual void start(class HAL* hal)
    {
        LOGLN("   already Flying")
    }

    virtual void stop(class HAL* hal)
    {
        LOGLN("   already Idle")
    }

    virtual void pause(class HAL* hal)
    {
        LOGLN("   already Hovering")
    }

    virtual void off(class HAL* hal)
    {
        LOGLN("   already OFF")
    }

    virtual void on(class HAL* hal)
    {
        LOGLN("   already On")
    }

    virtual void resume(class HAL* hal)
    {
        LOGLN("   already Flying")
    }
    
    virtual void gohome(class HAL* hal)
    {
        LOGLN("   already Homing")
    }
    
    virtual void land(class HAL* hal)
    {
        LOGLN("   already Landing")
    }
    
    virtual void autoIdle(class HAL* hal)
    {
        LOGLN("   already Homing/Landing")
    }
};
#endif /* State_hpp */
