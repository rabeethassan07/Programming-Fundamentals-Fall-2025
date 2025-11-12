#include<stdio.h>
int main()
{
    int size, x, count = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    
    for (int i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter number x: ");
    scanf("%d", &x);

    for (int i = 0; i < size; i++)
	{
        if (arr[i] > x)
		{
            count++;
        }
    }

    printf("Number of elements greater than %d = %d\n", x, count);
}
