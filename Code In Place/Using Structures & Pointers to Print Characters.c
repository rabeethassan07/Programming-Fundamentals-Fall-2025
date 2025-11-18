// Using Structures & Pointers to Print Characters
#include<stdio.h>
void printChar(const char *p)
{
    printf("Character: %c\n", *p);  // Dereference the pointer
}
int main()
{
    char ch = 'A';
    
    printChar(&ch);
    
}
