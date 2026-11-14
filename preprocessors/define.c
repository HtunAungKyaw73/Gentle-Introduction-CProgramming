#include <stdio.h>

#define MAX 100
// #define DEBUG
#define SUM(a, b) ((a) + (b))

int main(void)
{
#ifndef DEBUG
    printf("Debug mode is not enabled.\n");
#endif
    int sum = MAX + 1;
    // int sum = 100 + 1;

    // #undef MAX

    //     int new = MAX + 10;

    // printf("The new value is: %d\n", new);
    printf("The sum is: %d\n", sum);
    printf("The sum using macro is: %d\n", SUM(10, 20));

    return 0;
}