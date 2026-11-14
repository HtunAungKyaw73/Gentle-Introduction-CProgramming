#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // printf("Length of the name: %zu\n", strlen(name));
    // strip \n
    name[strlen(name) - 1] = '\0';

    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     printf("%d\n", (int)name[i]);
    // }
    printf("Hello, %s!\n", name);
    return 0;
}