//Cube Of a Number using Functions
#include<stdio.h>
//Function declaration
int cube(int x);
int main()
{
    int num, result;

    printf("Enter a number:		");
    scanf("%d", &num);
	
	result = cube(num);		//To Call the Function
    
    printf("Cube of %d is %d\n", num, result);
    
    return 0;
}
//Defining The Function
int cube(int x) 
{
	return x * x * x;
}
