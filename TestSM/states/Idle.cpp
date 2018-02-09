//
//  Idle.cpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "Idle.hpp"
#include "HAL.hpp"
#include "Flying.hpp"


void Idle::start(HAL* hal)
{
    LOG("   switch: Idle -> Flying")
    hal->setState(new Flying());
    delete this;
}

void Idle::off(HAL *hal)
{
    LOG("   switch: Idle -> Off")
    //hal->setState(new Off());
    delete this;
}

