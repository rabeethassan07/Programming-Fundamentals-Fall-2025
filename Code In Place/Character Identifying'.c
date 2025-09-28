#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character:	 ");
    scanf("%c", &ch);

    // Check if it is uppercase
    if (ch >= 'A' && ch <= 'Z') 
	{
        printf("It is an Uppercase Letter.\n");
    }
    // Check if it is lowercase
    else if (ch >= 'a' && ch <= 'z') 
	{
        printf("It is a Lowercase Letter.\n");
    }
    // Check digit
    else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    }
    //It is a special character
    else 
	{
        printf("It is a Special Character.\n");
    }

}

