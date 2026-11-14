#include <stdio.h> // import the standard input-output library

/**
 * Input: A string of characters
 * Output: The string with all lowercase letters converted to uppercase
 * Eg: Input: "Hello World" -> Output: "HELLO WORLD"
 */

int main(void)
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of input from the user

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') // Check if the character is lowercase
        {
            str[i] = str[i] - 32; // Convert to uppercase by subtracting the difference
        }
    }

    printf("Uppercase string: %s", str); // Print the converted string

    return 0;
}