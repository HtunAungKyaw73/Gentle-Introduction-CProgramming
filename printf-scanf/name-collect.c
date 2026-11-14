#include <stdio.h>

int main(void)
{
    char name[25];
    int age;
    int mark;

    printf("Enter your name: ");
    scanf("%24[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your mark: ");
    scanf("%d", &mark);

    printf("Hello, %s! You are %d years old and your mark is %d.\n", name, age, mark);
    return 0;
}