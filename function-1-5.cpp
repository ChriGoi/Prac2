#include <stdio.h>
int sum = 0;
void print_summed(int array1[3][3], int array2[3][3])
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