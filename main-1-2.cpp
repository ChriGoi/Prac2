#include <stdio.h>
#include "function-1-2.cpp"
int main()
{
    int array[10][10] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {1, 2, 3, 4},
                         {5, 6, 7, 8}};
    int number = is_identity(array);
    printf("%d", number);
    return 0;
}
