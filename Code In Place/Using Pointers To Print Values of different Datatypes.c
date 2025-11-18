// Using Pointers To Print Values of different Datatypes
#include<stdio.h>
int main()
{
    int a = 47;
    float b = 8.926;
    char c = 'Q';

    int *pA = &a;
    float *pB = &b;
    char *pC = &c;

    printf("Value of int using pointer: %d\n", *pA);
    
    printf("Value of float using pointer: %.3f\n", *pB);
    
    printf("Value of char using pointer: %c\n", *pC);
}
