#include <iostream>
#include "Unit.h"
int main()
{
    Unit u1(4, 400, 5);
    std::cout << "Bedrooms: " << u1.get_num_bedrooms() << "Value: " << u1.get_value() << "Area: " << u2.get_area() << std::endl;
    Unit u2(5, 500, 4);
    std::cout << "Bedrooms: " << u2.get_num_bedrooms() << "Value: " << u2.get_value() << "Area: " << u2.get_area() << std::endl;
    return 0;
}