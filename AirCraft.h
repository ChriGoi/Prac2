#include <iostream>
#include <string>

Class AirCraft();
{
    AirCraft(int w); // creates an Aircraft with weight w
private:
    {
        int weight;          // the weight of AirCraft
        float fuel;          // fuel percentage, initially 100%
        int numberOfFlights; // initially 0
    }

public:
    {
        void refuel();                       // Resets fuel back to 100%
        void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
    }
    return 0
}