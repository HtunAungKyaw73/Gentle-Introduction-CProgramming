#include <stdio.h>

const int END = 50;

int main(void)
{
    // for syntax: for (initialization; condition; increment/decrement)
    int i;
    for (i = 0; i < END; i += 10)
    {
        printf("i = %d\n", i);
    }

    printf("Loop finished and i = %d!\n", i);

    return 0;
}
