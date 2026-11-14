#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 0;
    while (true)
    {
        // code block to be executed
        printf("This is an infinite loop!\n");

        i++;
        if (i == 5)
        {
            break; // exit the loop when i reaches 5
        }
    }

    return 0;
}