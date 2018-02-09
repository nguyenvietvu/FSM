//
//  Landing.cpp
//  TestSM
//
//  Created by Rainy on 2/8/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "Landing.hpp"
#include "Homing.hpp"
#include "Idle.hpp"

void Landing::gohome(HAL* hal)
{
    LOG("   switch: Landing -> Homing")
    hal->setState(new Homing());
    delete this;
}

void Landing::autoIdle(HAL* hal)
{
    LOG("   switch: Landing -> Idle")
    hal->setState(new Idle());
    delete this;
}
