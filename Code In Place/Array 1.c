#include <stdio.h>
int main() 
{
    int i, j, num;

    printf("Enter the number of elements: ");
    scanf("%d", &i);

    int arr[i];

    printf("Enter %d elements:\n", i);
    for (j = 0; j < i; j++) 
	{
        scanf("%d", &arr[j]);
    }

    // Reversing the array
    for (j = 0; j < i / 2; j++) 
	{
        num = arr[j];
        arr[j] = arr[i - j - 1];
        arr[i - j - 1] = num;
    }

    printf("Reversed array:\n");
    for (j = 0; j < i; j++) 
	{
        printf("%d ", arr[j]);
    }

}
