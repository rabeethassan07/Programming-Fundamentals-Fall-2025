// Use of Null Terminator in C
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Programming";
    char str2[5];

    strncpy(str2, str1, 4);  //copying only first 4 characters
    str2[4] = '\0';          //adding null terminator

    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);
    
}
