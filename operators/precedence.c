#include <stdio.h>

int main(void)
{
    int a = 5, b = 10, c = 15;
    int result;

    // Demonstrating operator precedence(priority) in C
    result = a + b * c;                          // Multiplication has higher precedence than addition
    printf("Result of a + b * c: %d\n", result); // Expected: 5 + (10 * 15) = 155

    result = (a + b) * c;                          // Parentheses change the order of operations
    printf("Result of (a + b) * c: %d\n", result); // Expected: (5 + 10) * 15 = 225

    return 0;
}