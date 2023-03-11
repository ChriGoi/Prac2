#include <stdio.h>
int main()
{
    int array[4][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {1, 2, 3, 4},
                       {5, 6, 7, 8}};
    int number = sum_diagonal(array);
    printf("%d", number);
    return 0;
}
