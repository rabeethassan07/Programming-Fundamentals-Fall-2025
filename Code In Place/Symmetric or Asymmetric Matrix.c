#include<stdio.h>
int main()
{
  int r,c;
  
  printf("Matrix Transpose Calculator!!!\n");
  
  	printf("Please Enter a Square Matrix\n");
  	printf("Enter No of Rows:");
	scanf("%d",&r);
	
    printf("Enter No of Cols:");
   	scanf("%d",&c);
   	
   	if(r == c)
	{
   		int arr[r][c];
   		int transpose[c][r];
   		int i,j;
	for(i =0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	int k,l;
	for(k =0;k<c;k++)
	{
		for(l=0;l<r;l++)
		{
		  transpose[k][l] = arr[l][k];
		}
	}

 // Comparing the Matrices
	int x,y,count=0;
	
		for(x=0;x<r;x++)
		{
			for(y=0;y<c;y++)
			{
				if(arr[x][y] == transpose[x][y]) count++;
			}
		}
		if(count == (r*c))
		{
			printf("Matrix is Symmetric");
		}
		else
		{
			printf("Matrix is ASymmetric");
		}
   	}
   else
   {
   	printf("Invalid Matrix!!! Please Enter a Square Matrix");
   }	
	return 0;
}
