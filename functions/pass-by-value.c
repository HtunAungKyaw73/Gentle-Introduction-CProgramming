#include <stdio.h>

void modifyValue(int a);
void modifyArray(int arr[]);
void modifyValueByReference(int *a);

int main(void)
{
    printf("Pass by value Lesson\n");

    int a = 10;

    printf("Before function call: a = %d\n", a);

    // argument -> pass by value (copy of the value) default behavior in C
    modifyValue(a);

    printf("After function call: a = %d\n", a);

    int arr[5] = {1, 2, 3, 4, 5};
    printf("Before function call: arr[0] = %d\n", arr[0]);

    modifyArray(arr); // argument -> pass by reference (address of the array) default behavior in C

    printf("After function call: arr[0] = %d\n", arr[0]);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("Pass by reference Lesson\n");

    int b = 20;
    printf("Before function call: b = %d\n", b);

    printf("Address of b: %p\n", (void *)&b); // Print the address of b
    modifyValueByReference(&b);               // argument -> pass by reference (address of the variable)

    printf("After function call: b = %d\n", b);

    return 0;
}

void modifyValue(int a)
{
    a = 200; // This change will not affect the original variable
    printf("Inside function: a = %d\n", a);
}

void modifyArray(int array[])
{
    array[0] = 100; // This change will affect the original array
    printf("Inside function: array[0] = %d\n", array[0]);
}

void modifyValueByReference(int *b)
{
    *b = 200; // This change will affect the original variable
    printf("Inside function: *b = %d\n", *b);
}