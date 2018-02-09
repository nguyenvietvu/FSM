//
//  Def.hpp
//  TestSM
//
//  Created by Rainy on 2/1/18.
//  Copyright © 2018 Neolab. All rights reserved.
//

#ifndef Def_h
#define Def_h

#include <iostream>
using namespace std;

#define SAFE_DELETE(p) if((p)){delete (p); (p) = 0;}
#define LOG(s) cout << (s);
#define LOGLN(s) cout << (s) << "\n";
#define INPUT(x) cin >> (x);
#define INFINITE_LOOP while(true)

#define QUIT -1
#define DJISDK   0
#define PIXHAWK  1
#define NUMBER_OF_ACTIONS 5

#define FLIGHT_TYPE_MANUAL  0
#define FLIGHT_TYPE_MISSION 1
#define FLIGHT_TYPE_GOTO    2

#define INTERRUPT_NONE               100
#define INTERRUPT_DISCONNECTED       101
#define INTERRUPT_CONNECTED          102
#define INTERRUPT_LOST_CONNECTION    103

#define ACTION_NONE   -1
#define ACTION_START  0
#define ACTION_PAUSE  1
#define ACTION_RESUME 2
#define ACTION_LAND   3
#define ACTION_GOHOME 4


#endif /* Def_h */
