#include <stdio.h>
int main() 
{
    int i, j, num1, num2;
    
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    
    int arr[i];
    
    printf("Enter %d elements:\n", i);
    
    for (j = 0; j < i; j++) 
	{
        scanf("%d", &arr[j]);
    }
		
    if (arr[0] > arr[1]) 
	{
        num1 = arr[0];
        num2 = arr[1];
    } 
	else 
	{
        num1 = arr[1];
        num2 = arr[0];
    }
    
    // Finding the two largest numbers
    for (j = 2; j < i; j++) 
	{
        if (arr[j] > num1) 
		{
            num2 = num1;
            num1 = arr[j];
        } 
		else if (arr[j] > num2 && arr[j] != num1) 
		{
            num2 = arr[j];
        }
    }
    
    printf("Two largest numbers are: %d and %d\n", num2, num1);
    
}
