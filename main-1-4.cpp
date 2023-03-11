#include <stdio.h>
int main()
{
    int sum_diagonal(int array[4][4]);
    int array[4][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {1, 2, 3, 4},
                       {5, 6, 7, 8}};

    sum_diagonal(array);

    return 0;
}
