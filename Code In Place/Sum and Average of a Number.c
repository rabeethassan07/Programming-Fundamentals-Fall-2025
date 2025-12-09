#include<stdio.h>
int main()
{
	int i,sum=0,count=0,size=0;
	float avg = 0;
	
	printf("Enter the number of elements:");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter %d Numbers:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//Finding the sum 
	for(i=0;i<size;i++)
	{
		if(arr[i]>0)
		{
			sum += arr[i];
			count++;
		}
	}
	//Finding the Average
 if (count > 0)
 {
    avg = sum / count;
 } 
 printf("The Sum of all Positive Numbers is %d\nThe Average of all Positive Numbers is %.2f",sum,avg);	
}
