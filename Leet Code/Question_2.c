#include<stdio.h>
int main()
{
    int nums[] = {2, 7, 11, 15}; // example numbers
    int target = 9;               // the number we want to make by adding two elements
    int size = 4;                 // number of elements in the array

    int i, j;

    // check every possible pair
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: %d and %d\n", i, j);
                printf("Numbers: %d + %d = %d\n", nums[i], nums[j], target);
                return 0; // stop once we find a pair
            }
        }
    }

    printf("No pair found that adds up to %d\n", target);
    return 0;
}
