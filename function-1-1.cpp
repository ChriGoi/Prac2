#include <stdio.h>
int sum = 0;
int sum_diagonal(int array[4][4])
{
    for (int n = 0; n < 4; n++)
    {
        sum = sum + array[n][n];
    }
    return sum;
}