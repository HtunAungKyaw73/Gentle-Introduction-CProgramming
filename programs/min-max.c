#include <stdio.h>
#include <math.h>

int min(int a, int b)
{
    return (a < b) ? a : b; // Return the smaller of the two numbers
}

int max(int a, int b)
{
    return (a > b) ? a : b; // Return the larger of the two numbers
}

int main(void)
{
    int nums[11] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4, 100};

    int length = sizeof(nums) / sizeof(nums[0]);
    int min_val = nums[0];
    int max_val = nums[0];

    printf("Length of the array: %d\n\n", length);

    for (int i = 1; i < length; i++)
    {
        printf("Element at index %d: %d\n", i, nums[i]);
        min_val = min(min_val, nums[i]); // min function invocation
        max_val = max(max_val, nums[i]); // max function invocation
        printf("Current minimum: %d\n", min_val);
        printf("Current maximum: %d\n", max_val);
    }

    printf("Minimum value in the array: %d\n", min_val);
    printf("Maximum value in the array: %d\n", max_val);

    return 0;
}