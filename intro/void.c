#include <stdio.h>

void main(void)
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
}