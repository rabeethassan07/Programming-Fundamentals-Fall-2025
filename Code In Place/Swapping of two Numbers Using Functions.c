//Swapping of two Numbers Using Functions
#include<stdio.h>
//Function declaration
void swap(int *a, int *b);
int main()
{
    int x = 10, y = 20;
    
	printf("Before swapping:\n");
	printf("x = %d, y = %d\n", x, y);
	
    swap(&x, &y);  //Call function with addresses of x and y
    
	printf("After swapping:\n");
	printf("x = %d, y = %d\n", x, y);

	return 0;
}
//Function definition
void swap(int *a, int *b)
{
    int temp;
    
	temp = *a;
	*a = *b;
	*b = temp;
}
