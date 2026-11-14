#include <stdio.h>

int main(void)

{
    int a = 5, b = 10, c = 15;
    int result;

    // Demonstrating operator associativity in C

    result = a - b - c; // Subtraction is left associative

    printf("Result of a - b - c: %d\n", result); // Expected: (5 - 10) - 15 = -20

    result = a / b / c; // Division is left associative

    printf("Result of a / b / c: %d\n", result); // Expected: (5 / 10) / 15 = 0

    return 0;
}