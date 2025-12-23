#include<stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;   // pointer to array

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
	{
        scanf("%d", ptr + i);
    }

    // Calculate sum using pointer
    for (int i = 0; i < n; i++)
	{
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
