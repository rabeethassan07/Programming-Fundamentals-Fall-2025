//To Find Smallest Number in an Array
#include<stdio.h>
int main()
{
    int arr[7] = {42, 17, 89, 23, 56, 11, 78};
    int min = arr[0];  // Assume first element is smallest

    for (int i = 0; i < 7; i++)
	{
        if (min > arr[i])
		{  // If a smaller element is found
            min = arr[i];    // Update mini
        }
    }
    
	printf("%d", mini);  // Print the smallest number
}
