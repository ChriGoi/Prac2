#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
    Appliance();
    Appliance(int powerRating); // creates an Appliance with a power rating

    int powerRating;
    bool isOn;

    void turnOn();
    void turnOff();
    double getPowerConsumption();
    return 0;
}
