// Copy elements of 2 strings to each other in C
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    
    char str2[10];

    strcpy(str2, str1);   //copying contents of str1 into str2

    printf("Original String: %s\n", str1);
    
    printf("Copied String: %s\n", str2);
    
}
