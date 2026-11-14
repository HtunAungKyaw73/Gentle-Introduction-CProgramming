#include <stdio.h>

int main(void)
{
    // type casting = type conversion of a variable from one data type to another
    int a = 65;
    int b = 3;

    char ch = 'A';

    // explicit type casting
    float result = (float)a / b;

    // implicit type casting
    int c = 5.8;
    ch += 4;

    int charValue = ch; // Implicit type casting from char to int

    int charToInt = '65'; // Implicit type casting from int to char

    printf("Result of integer division: %f\n", result);
    printf("Value of c after implicit type casting: %d\n", c);
    printf("Value of ch after implicit type casting: %c\n", ch);
    printf("Value of charValue after implicit type casting: %d\n", charValue);
    printf("Value of charToInt after implicit type casting: %d\n", charToInt);
    printf("Value of (char)a after explicit type casting: %c\n", (char)a);
    return 0;
}