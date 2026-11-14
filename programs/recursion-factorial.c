#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void)
{

    int n, result = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Function Invocation
    result = factorial(n);

    printf("Factorial of %d = %d\n", n, result);

    return 0;
}

int factorial(int n)
{
    // if (n < 0)
    // {
    //     printf("Error: Factorial is not defined for negative numbers.\n");
    //     exit(1);
    // }
    // else if (n == 0 || n == 1) // basecase
    // {
    //     return 1;
    // }
    // else
    // {
    //     // factorial calculation
    //     // 0! = 1
    //     // 1! = 1
    //     // 2! = 2 * 1! = 2
    //     // 3! = 3 * 2! = 6
    //     // 4! = 4 * 3! = 24
    //     // 5! = 5 * 4! = 120
    //     return n * factorial(n - 1); // recursive case
    // }

    if (n < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
        exit(1);
    }
    else
    {
        return (n == 0 || n == 1 ? 1 : n * factorial(n - 1)); // recursive case
    }
}