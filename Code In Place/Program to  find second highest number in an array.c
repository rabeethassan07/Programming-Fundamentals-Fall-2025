//Program to find second highest number in an array
#include<stdio.h>
int main()
{
	float numMax, numSecMax;
	float num[20];
	printf("Enter 20 numbers:");
	for (int i = 0; i < 20; i++)
	{
		scanf("%f", &num[i]);
    }
			
	    if (num[0] > num[1])
	        {
		        numMax = num[0];
		        numSecMax = num[1];
	        }
	    else 
	        {
		        numMax = num[1];
		        numSecMax = num[0];
	        }
	for (int i = 2; i < 20; i++)
	{
		float value = *(&num[i]);
		if (value > numMax)
		{
			numSecMax = numMax;
			numMax = value;
		}
		else if (value > numSecMax && value < numMax)
		{
			numSecMax = value;
		}
	}	
	printf("%.2f is highest number", numSecMax);
	return 0;
}
