#ifndef UNIT_H
#define UNIT_H
#include <string>
class Unit
{
private:
    ;

public:
    Unit();
    Unit(int unit_val, int num_beds, double unit_size);
    int get_num_bedrooms(); // returns the number of bedrooms for the unit
    int get_value();        // returns the value in dollars of the Unit
    double get_area();      // returns the number of square meters in the unit
};
#endif