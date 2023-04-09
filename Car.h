#ifndef Car_H
#define Car_H
#include <iostream>
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car(int id);
    int getParkingDuration() const;
};

#endif
