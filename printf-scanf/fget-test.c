#include <stdio.h>

int main(void)
{
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to read a string with spaces

    printf("Your name is: %s.\n", name);

    printf("End of Program!\n");

    return 0;
}