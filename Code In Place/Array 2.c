#include <stdio.h>
int main() 
{
    int i, j, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &i);

    int arr[i];

    printf("Enter %d elements:\n", i);
    
    for (j = 0; j < i; j++) 
	{
        scanf("%d", &arr[j]);
    }

    for (j = 0; j < i; j++) 
	{
        if (arr[j] % 2 == 0) 
		{
            count++;
        }
    }

    printf("Total even numbers = %d\n", count);
    
}
