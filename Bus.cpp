#include <string>
#include "Bus.h"
#include "Vehicle.h"

Bus::Bus(int id) : Vehicle(id)
{
}

int Bus::getParkingDuration() const
{
    std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(std::difftime(currentTime, timeOfEntry)) * 0.75;
}
