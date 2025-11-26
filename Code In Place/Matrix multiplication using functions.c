//matrix multiplication using functions
#include<stdio.h>
void inputMatrix(int r, int c, int matrix[10][10])
{
	// enter elements
	for (int i = 0; i < r; i++)
	{    
	    for(int j = 0; j < c; j++)
		{
			printf("Enter element for (%d,%d): ",i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void multiplyMatrix(int r1, int c1, int c2, int A[10][10], int B[10][10], int C[10][10])
{
	for(int i = 0; i < r1; i++)
	{
		for(int j = 0; j < c2; j++)
		{
	        C[i][j] = 0;
			for(int k = 0;k < c1; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}	
}

void displayMatrix(int matrix[10][10], int r, int c)
{
	printf("Resultant Matrix:\n");
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			printf("%d ", matrix[i][j]); // for resultant matrix
		}
		printf("\n");
	}
}

int main()
{
	int r1,r2,c1,c2;
	int A[10][10], B[10][10], C[10][10];
	
	printf("Enter number of rows and columns for first matrix:\n");
	scanf("%d %d", &r1,&c1);
	printf("Enter number of rows and columns for second matrix:\n");
	scanf("%d %d", &r2,&c2);	
	
	if (c1 != r2)
	{
		printf("Multiplication not possible.");
	}
	
	printf("Enter elements for the first matrix:\n");
	inputMatrix(r1,c1,A);
	printf("Enter elements for the second matrix:\n");
	inputMatrix(r2,c2,B);	
	
	multiplyMatrix(r1,c1,c2,A,B,C); // calling multiplication
	
	displayMatrix(C,r1,c2);
	
}
