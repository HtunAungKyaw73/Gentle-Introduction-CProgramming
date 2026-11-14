#include <stdio.h>
int main(void)
{
    char name[100];
    printf("Enter the name: ");
    // scanf("%99[^\n]", name);
    fgets(name, sizeof(name), stdin);

    int length = 0;

    while (name[length] != '\0')
    {
        length++;
    }
    printf("The length of the name is %d.\n", length - 1);
    return 0;
}