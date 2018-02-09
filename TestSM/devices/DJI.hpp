//
//  DJI.hpp
//  TestSM
//
//  Created by Rainy on 2/9/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef DJI_hpp
#define DJI_hpp

#include "HAL.hpp"

class DJI : public HAL
{
public:
    DJI(){};
    ~DJI(){};
    bool prepare();
};

#endif /* DJI_hpp */
