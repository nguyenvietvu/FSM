//
//  Flying.cpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "Flying.hpp"
#include "Idle.hpp"
#include "Hovering.hpp"
#include "Homing.hpp"
#include "Landing.hpp"

void Flying::pause(HAL* hal)
{
    LOG("   switch: Flying -> Hovering")
    hal->setState(new Hovering());
    delete this;
}

void Flying::land(HAL* hal)
{
    LOG("   switch: Flying -> Landing")
    hal->setState(new Landing());
    delete this;
}

void Flying::gohome(HAL* hal)
{
    LOG("   switch: Flying -> Homing")
    hal->setState(new Homing());
    delete this;
}
