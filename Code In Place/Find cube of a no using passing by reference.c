//Find cube of a no using passing by reference
#include<stdio.h>
void cubeByReference(int *nPtr)
{ 
    *nPtr = *nPtr * *nPtr * *nPtr;
}

int main()
{
	int number = 10; // initialize number
	
    printf( "The original value of number is %d \n", number );
    
    cubeByReference( &number);
    
    printf( "The new value of number is %d", number );
}
