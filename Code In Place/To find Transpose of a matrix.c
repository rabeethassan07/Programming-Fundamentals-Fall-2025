//To find Transpose of a matrix
#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter number of rows: ");
	scanf("%d", &r);
	printf("Enter number of columns: ");
	scanf("%d", &c);
	
	int A[r][c];
	
	printf("Enter elements for matrix A:\n");
	for (int i = 0; i < r; i++)	
	{
		for (int j = 0; j < c; j++)
		{
		scanf("%d", &A[i][j]);
		}
	}
	printf("Matrix A:\n");
	for (int i = 0; i < r; i++)	//print matrix A
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of a matrix:\n");
	for (int j = 0; j < c; j++)	
	{
		for (int i = 0; i < r; i++) // rows become col and col becomes rows 
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}		
}
