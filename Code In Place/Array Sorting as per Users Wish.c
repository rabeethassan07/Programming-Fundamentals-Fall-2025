#include<stdio.h>
// Function prototype
void SortFunction(int *arr, int *size, int order);
int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int order;

    printf("Enter sorting order (1 = Ascending, 2 = Descending): ");
    scanf("%d", &order);

    SortFunction(arr, &size, order);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Sorting function
void SortFunction(int *arr, int *size, int order)
{
    int temp;

    for (int i = 0; i < *size - 1; i++)
	{
        for (int j = i + 1; j < *size; j++)
		{

            // Ascending order
            if (order == 1 && arr[i] > arr[j])
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            // Descending order
            else if (order == 2 && arr[i] < arr[j])
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
