#include<stdio.h>
int main()
{
    int n, i, j;
    int A[10][10], T[10][10];
    int symmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    // Input matrix
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
		{
            scanf("%d", &A[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
		{
            T[j][i] = A[i][j];
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
		{
            if (A[i][j] != T[i][j])
			{
                symmetric = 0;
                break;
            }
        }
    }
    
    // Output result
    if (symmetric)
	{
        printf("\nMatrix is symmetric.\n");
        printf("Matrix:\n");
        for (i = 0; i < n; i++)
		{
            for (j = 0; j < n; j++)
			{
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }
	else
	{
        printf("\nMatrix is asymmetric.\n");
    }
    return 0;
}
