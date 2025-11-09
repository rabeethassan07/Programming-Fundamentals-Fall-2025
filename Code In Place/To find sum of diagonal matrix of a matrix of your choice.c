// To find sum of diagonal matrix of a matrix of your choice
#include <stdio.h>
int main()
{
    int i, j, n, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter elements of %dx%d matrix:\n", n, n);
    
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
	{
        sum += arr[i][i];   //sum of diagonal elements
    }

    printf("Sum of diagonal elements = %d\n", sum);
    
}
