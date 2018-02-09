//
//  Machine.hpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef HAL_hpp
#define HAL_hpp

#include "Def.hpp"

class State;
class Idle;

class HAL
{
    State* state;
public:
    HAL();
    virtual ~HAL(){};
    
    void setState(State* s);
    void on();
    void off();
    void resume();
    void pause();
    void stop();
    void start();
    void gohome();
    void land();
    
    virtual bool prepare() = 0;
//    virtual bool initDrone() = 0;
//    virtual bool missionAction() = 0;
//    virtual bool gotoAction() = 0;
//    virtual void getPosition() = 0;
};


#endif /* HAL_hpp */
