#include <stdio.h>

int main(void)
{
    int num1, num2, total;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    total = num1 + num2;
    printf("You entered: %d and %d\n", num1, num2);
    printf("The sum is: %d\n", total);

    return 0;
}