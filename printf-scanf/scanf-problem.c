#include <stdio.h>

int main(void)
{
    int age;
    char grade;
    char notation;

    getchar();

    printf("Enter your grade(A or B or somethings): ");
    scanf("%c", &grade);

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar(); // Consume the newline character left in the input buffer
    printf("Enter your notation(*, &, |): ");
    scanf("%c", &notation);

    printf("Your age is %d and your grade is %c and your notation is %c\n", age, grade, notation);

    getchar();

    return 0;
}