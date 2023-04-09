#ifndef Bus_H
#define Bus_H
#include <iostream>
#include <string>
#include "Vehicle.h"

class Bus : public Vehicle
{
public:
    Bus(int id);
    int getParkingDuration() const;
};

#endif
