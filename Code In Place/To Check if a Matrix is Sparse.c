#include<stdio.h>
int main()
{
	int r,c,i,j,count=0;
	
	printf("Matrix Sparse Calculator!!!\n")
	
	printf("Enter the No of Rows:");
	scanf("%d",&r);
	
	printf("Enter the No of Columns:");
	scanf("%d",&c);
	
	int arr[r][c];
	
	printf("Enter the elements of Matrix\n");
	
	for(i =0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j] == 0)  count++;
		}
	}
	if( count >= ((r*c)/2) )
	{
		printf("The Given Matrix is Sparse");
	}
	else
	{
	   printf("The Given Matrix is not Sparse");
	}
	
	return 0;
}
