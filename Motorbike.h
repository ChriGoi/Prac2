#include <iostream>
#include <ctime>
#include <string>
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:
    Motorbike(int id);
    int getParkingDuration() const;
};
