#include <stdio.h>
int sum = 0;
void print_scaled(int array[3][3], int scale)
{
    for (int n = 0; n < 3; n++)
    {
        for (int m = 0; m < 3; m++)
        {
            array[n][m] = scale * array[n][m];
            printf("%d ", array[n][m]);
        }
        printf("\n");
    }

    return;
}