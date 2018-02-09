//
//  main.cpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "Def.hpp"
#include "HAL.hpp"
#include "DJI.hpp"
#include "PIX.hpp"

int main()
{
    HAL* hal = nullptr;
    int index = 0;
    int device = DJISDK;
    int flightType = FLIGHT_TYPE_MANUAL;
    LOGLN("Drone on")
    void(HAL::*actions[NUMBER_OF_ACTIONS])() = { &HAL::start, &HAL::pause, &HAL::resume, &HAL::gohome, &HAL::land };
    
    LOG("Select Device 0/1.. = DJI/PIX:")
    INPUT(device);
    
    if(device == PIXHAWK)
    {
        hal = new PIX();
    }
    else
    {
        hal = new DJI();
    }
    
    LOG("Select Flight Type 0/1/2.. = Manual/Mission/Goto:")
    INPUT(flightType);
    
    
    INFINITE_LOOP
    {
        LOG("Enter -1/0/1/2/3/4=(quit/start/pause/resume/gohome/land):")
        INPUT(index)
        if(index > QUIT && index < NUMBER_OF_ACTIONS)
        {
            (hal->*actions[index])();
        }
        else if (index == INTERRUPT_DISCONNECTED)
        {
            (hal->*actions[ACTION_PAUSE])();
        }
        else if (index == INTERRUPT_CONNECTED)
        {
            (hal->*actions[ACTION_RESUME])();
        }
        else if(index == QUIT)
        {
            break;
        }
    }
    
    SAFE_DELETE(hal)
    LOGLN("Drone off")
}
