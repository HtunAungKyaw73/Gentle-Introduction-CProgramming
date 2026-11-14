#include <stdio.h>

int main(void)
{
    printf("Hello, World!\t");
    printf("Welcome to the classroom.\n");

    // variable defined
    char name[] = "Htun Aung";
    char firstChar = 'H';
    // string (char array) -> more than one character -> double quotes ("Htun Aung", "Hello", etc.)
    // char -> single character ('c', 'm', 'a', etc.) -> single quotes ('H', 'A', etc.)
    int age = 27;

    printf("My name is %s and I am %d years old.\n", name, age);
    printf("The first character of my name is %c.\n", firstChar);

    // data type

    // int -> integer -> whole numbers -> 5, 10, -3, etc.
    // short -> short integer -> whole numbers with smaller range -> 100, -200, etc.
    // long -> long integer -> whole numbers with larger range -> 1000000, -5000000, etc.
    // float -> decimal numbers -> 3.14, 2.5, -0.75, etc.
    // double -> decimal numbers with more precision -> 3.14159265359, 2.71828182846, etc.
    // char -> single character -> 'c', 'm', 'a', etc.
    // string (char array) -> more than one character -> "Hello", "World", etc.
    // bool -> boolean values -> true, false

    return 0;
}