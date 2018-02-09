//
//  Homing.cpp
//  TestSM
//
//  Created by Rainy on 2/9/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "Homing.hpp"
#include "Landing.hpp"
#include "Idle.hpp"

void Homing::land(HAL* hal)
{
    LOG("   switch: Homing -> Landing")
    hal->setState(new Landing());
    delete this;
}

void Homing::autoIdle(HAL* hal)
{
    LOG("   switch: Homing -> Idle")
    hal->setState(new Idle());
    delete this;
}
