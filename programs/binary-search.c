#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Return the index of the target element
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if the target is not found
}

int main()
{
    int arr[] = {2, 3, 4, 5, 8}; // Sorted array for binary search
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = binary_search(arr, size, target);
    if (result != -1)
    {
        printf("Element found at index: %d\n", result);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}