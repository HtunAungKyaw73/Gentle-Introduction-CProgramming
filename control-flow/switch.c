#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // switch statement
    switch (age)
    {
    case 0 ... 17: // true if age is less than 18
        printf("You are underage.\n");
        break;
    case 18 ... 25: // true if age is between 18 and 25
        printf("You are now an adult.\n");
        break;
    case 26 ... 30: // true if age is between 26 and 30
        printf("You are in mid-life crisis.\n");
        break;
    case 31 ... 60: // 30 < age <= 60
        printf("You are in your prime years.\n");
        break;
    default:
        printf("You are gonna die\n");
    }

    return 0;
}