#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // conditional statement
    if (age < 18) // true if age is less than 18
    {
        printf("You are underage.\n");
    }
    else if (age >= 18 && age <= 25) // 18 < age < 25
    {
        printf("You are a young adult.\n");
    }
    else if (age > 25 && age <= 30) // 25 < age <= 30
    {
        printf("You are in mid-life crisis.\n");
    }
    else if (age > 30 && age <= 60) // 30 < age <= 60
    {
        printf("You are in your prime years.\n");
    }
    else
    {
        printf("You are gonna die\n");
    }

    return 0;
}