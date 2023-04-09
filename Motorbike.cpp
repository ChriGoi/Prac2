#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id)
{
}

int Motorbike::getParkingDuration() const
{
    std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(std::difftime(currentTime, timeofEntry)) * 0.85;
}
