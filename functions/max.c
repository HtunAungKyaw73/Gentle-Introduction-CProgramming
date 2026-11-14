#include <stdio.h>

int maximum(int nums[], int length);

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    int length = sizeof(nums) / sizeof(nums[0]);

    int max = maximum(nums, length);

    printf("The maximum value is: %d\n", max);
}

int maximum(int nums[], int length)
{
    int max = nums[0];

    for (int i = 1; i < length; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    return max;
}