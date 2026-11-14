#include <stdio.h>

int main(void)
{
    int a = 30;
    int b = 20;
    int c = 10;

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum value is: %d\n", max);

    return 0;
}