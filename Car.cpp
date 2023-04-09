#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

Car::Car(int id) : Vehicle(id)
{
}

int Car::getParkingDuration() const
{
    std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(std::difftime(currentTime, timeOfEntry)) * 0.9;
}
