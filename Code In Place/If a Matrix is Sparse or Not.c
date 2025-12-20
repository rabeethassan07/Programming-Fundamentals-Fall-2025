#include<stdio.h>
int main()
{
    int m, n;
    int matrix[10][10];
    int zeroCount = 0;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
	{
        for (int j = 0; j < n; j++)
		{
            scanf("%d", &matrix[i][j]);
            
            if (matrix[i][j] == 0)
			{
                zeroCount++;
            }
        }
    }

    // Display matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++)
	{
        for (int j = 0; j < n; j++)
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Check sparse condition
    if (zeroCount >= (m * n) / 2)
	{
        printf("\nThe matrix is a Sparse Matrix.\n");
    }
	else
	{
        printf("\nThe matrix is NOT a Sparse Matrix.\n");
    }

    return 0;
}
