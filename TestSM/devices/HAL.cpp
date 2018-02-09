//
//  HAL.cpp
//  TestSM
//
//  Created by Rainy on 1/31/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#include "HAL.hpp"
#include "../states/State.hpp"
#include "../states/Idle.hpp"

HAL::HAL()
{
    state = new Idle();
};

void HAL::start()
{
    state->start(this);
}

void HAL::pause()
{
    state->pause(this);
}

void HAL::stop()
{
    state->stop(this);
}

void HAL::resume()
{
    state->resume(this);
}

void HAL::gohome()
{
    state->gohome(this);
}

void HAL::land()
{
    state->land(this);
}

void HAL::on()
{
    state->start(this);
}

void HAL::off()
{
    state->off(this);
}

void HAL::setState(State* s)
{
    state = s;
}
