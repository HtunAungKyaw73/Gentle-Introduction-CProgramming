#include <stdio.h>

int main(void)
{
    printf("Printing in C Language\n");
    printf("%d\n", 10);

    int number = 10;
    double big_number = 100000000000.5432789;
    printf("Big Number: %19.9lf\n", big_number);

    // padding with printf
    // printf("Right Padding:%05d\n", 1); // right padding
    // printf("Left Padding:%-5d\n", 10); // left padding

    // printf("Float: %.6f\n", 3.142);
    // printf("Address: %d\n", &number);

    // output: {     3.142000}

    // for (int i = 0; i <= 20; i++)
    // {
    //     printf("%03d ", i);
    // }
    // printf("\n");

    return 0;
}