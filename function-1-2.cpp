#include <stdio.h>
int sum = 0;
int is_identity(int array[10][10])
{
    for (int n = 0; n < 10; n++)
    {
        sum = sum + array[n][n];
    }
    bool identity = false;
    if (sum = 10)
    {
        identity = true;
    }
    else
    {
        identity = false;
    }

    return sum;
}