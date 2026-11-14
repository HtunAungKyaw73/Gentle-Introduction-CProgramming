#include <stdio.h>
#include <string.h>

int NUM1 = 0;
int NUM2 = 0;
char OPERATION = '\0';
char NAME[50];

void print_welcome_message(void)
{
    printf("--------------------------------\n");
    printf("Welcome to the calculator program.\n");
    printf("--------------------------------\n");
}
void number_input(void)
{
    printf("Enter first number: ");
    scanf("%d", &NUM1);
    printf("Enter second number: ");
    scanf("%d", &NUM2);
}
void name_input(void)
{
    printf("Enter your name: ");
    fgets(NAME, sizeof(NAME), stdin); // Use fgets to read a string with spaces
    // Remove the newline character if it exists
    NAME[strcspn(NAME, "\n")] = '\0';
}
void operator_input(void)
{
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &OPERATION);
}
int calculate(void)
{
    switch (OPERATION)
    {
    case '+':
        return NUM1 + NUM2;
    case '-':
        return NUM1 - NUM2;
    case '*':
        return NUM1 * NUM2;
    case '/':
        if (NUM2 != 0)
            return NUM1 / NUM2;
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 0; // Return 0 or handle the error as needed
        }
    default:
        printf("Error: Invalid operation.\n");
        return 0; // Return 0 or handle the error as needed
    }
}

int main(void)
{
    print_welcome_message(); // function invocation

    name_input();     // function invocation
    number_input();   // function invocation
    operator_input(); // function invocation

    int result = calculate(); // function invocation
    printf("Result: %d %c %d = %d\n", NUM1, OPERATION, NUM2, result);

    printf("Thank you for using the calculator program, %s", NAME);

    return 0;
}