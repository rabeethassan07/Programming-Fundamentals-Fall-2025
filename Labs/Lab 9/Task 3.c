#include<stdio.h>
int main()
{
  int arr[3],*ptr,i;
 
   ptr = arr;  //ptr = &arr[0] is same as ptr = arr
   for (i = 0; i < 3; ++i)
   {
     *(ptr+i) = i+1;
   }
   
	printf("\nDisplaying value using pointers:\n");
	
    for (i = 0; i < 3; i++)
    {
		printf("%d\n", *(ptr+i));
    }
	
	printf("\nDisplaying address using pointers:\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("%p\n", ptr+i);
	}
	
}
