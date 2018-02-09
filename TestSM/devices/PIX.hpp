//
//  PIX.hpp
//  TestSM
//
//  Created by Rainy on 2/9/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef PIX_hpp
#define PIX_hpp

#include "HAL.hpp"

class PIX : public HAL
{
public:
    PIX(){};
    ~PIX(){};
    bool prepare();
};

#endif /* PIX_hpp */
