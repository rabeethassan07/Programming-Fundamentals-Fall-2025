//Pointers to access and manipulate array elements
#include<stdio.h>
int main()
{
	int arr[3];
	int *ptr;
	int i;
	
	ptr = arr;
	
	for(i = 0; i < 3; i++)
	{
		*(ptr+i) = i+1;
	}
	
	printf("\nDisplaying value using pointers: ");
	
	for(i = 0; i<3; ++i)
	{
		printf("%d\n", *(ptr+i));
	}
	
	printf("\nDisplaying address using pointers: ");
	
	for (i = 0; i<3; i++)
	{
		printf("%p\n", ptr+i);
	}
	return 0;
}
