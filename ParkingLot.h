#ifndef ParkingLot_H
#define ParkingLot_H

#include <iostream>
#include <ctime>
#include <string>

class ParkingLot
{
protected:
    std::time_t timeOfEntry;
    int ID;

public:
    virtual int getParkingDuration() const = 0;
    Vehicle(int id);
    int getID() const;
};
#endif
