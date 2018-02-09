//
//  Hovering.cpp
//  TestSM
//
//  Created by Rainy on 2/6/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "Hovering.hpp"
#include "Flying.hpp"

void Hovering::resume(HAL* hal)
{
    LOG("   switch: Hovering -> Flying")
    hal->setState(new Flying());
    delete this;
}

void Hovering::stop(HAL* hal)
{
    LOG("   switch: Hovering -> Hovering")
    hal->setState(new Hovering());
    delete this;
}
