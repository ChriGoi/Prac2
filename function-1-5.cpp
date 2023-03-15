#include <stdio.h>
#include <string>
#include <iostream>

int num = stoi(decimal_number);
void print_binary_str(std::string decimal_number)
{
    int number = 0;
    for (int n = 0; n < 3; n++)
    {
        for (int m = 0; m < 3; m++)
        {
            number = array1[n][m] + array2[n][m];
            printf("%d ", number);
        }
        printf("\n");
    }

    return;
}