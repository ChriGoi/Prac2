#include <iostream>
#include <ctime>
#include <string>
#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id)
{
    timeOfEntry = std::time(nullptr);
}

int Vehicle::getID() const
{
    return ID;
}
