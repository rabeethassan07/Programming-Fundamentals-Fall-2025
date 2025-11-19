#include<stdio.h>
void inputarr(int row,int cols,int arr[row][cols]);

void matrixmul(int rows1,int rows2,int cols1,int cols2,int arrA[rows1][cols1],int arrB[rows2][cols2],int arrC[rows1][cols2]);

int main()
{
    int rows1,rows2,cols1,cols2;
    printf("Enter row and column of matrix A: ");
    scanf("%d %d",&rows1,&cols1);
    printf("Enter row and column of matrix B: ");
    scanf("%d %d",&rows2,&cols2);

    int arrA[rows1][cols1], arrB[rows2][cols2];

    printf("Enter Matrix A: ");
    inputarr(rows1,cols1,arrA);
    printf("Enter matrix B: ");
    inputarr(rows2,cols2,arrB);

    int arrC[rows1][cols2];

    matrixmul(rows1,rows2,cols1,cols2,arrA,arrB,arrC);

    for(int i = 0; i < rows1; i++)
	{
        for(int j = 0; j < cols2; j++)
		{
            printf("%d\t",arrC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void inputarr(int row,int cols,int arr[row][cols]
{
    for(int i = 0; i < row; i++ 
	{
        for(int j = 0; j < cols; j++
		{
            scanf("%d", &arr[i][j]);
        }
    }
}
void matrixmul(int rows1,int rows2,int cols1,int cols2,int arrA[rows1][cols1],int arrB[rows2][cols2],int arrC[rows1][cols2]
{
    for(int i = 0; i < rows1 ; i++)
	{
        for(int j = 0; j < cols2; j++)
		{
            arrC[i][j] = 0;
            for(int k = 0; k < cols1 ; k++)
			{
                arrC[i][j] += arrA[i][k]*arrB[k][j];
            }
        }
    }
}
