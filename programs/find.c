#include <stdio.h>

int main(void)
{
    int nums[5] = {1, 2, 3, 4, 5};

    printf("Enter the number to find: ");
    int target;
    scanf("%d", &target);

    int len = sizeof(nums) / sizeof(nums[0]);
    int found = 0; // boolean flag to indicate if the number is found
    int index = 0; // variable to store the index of the found number

    printf("Index = %d\n", index);
    printf("Searching for number %d in the array...\n", target);

    for (int i = 0; i < len; i++)
    {
        if (nums[i] == target)
        {
            index = i;
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Number %d found in the array of index %d.\n", target, index);
    }
    else
    {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}