#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("You must provide command-line arguments.\n");
        return 1; // error code 1
    }

    printf("Hello, %s!\n", argv[1]);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0; // the program has ended without any error
}