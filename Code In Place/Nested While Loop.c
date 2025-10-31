#include <stdio.h>
int main() 
{
    int i = 1, j;
    char ch = 'A';

    while (i <= 5) 
	{
        j = 1;
        while (j <= i) 
		{
            printf("%c ", ch);
            j++;
        }
        printf("\n");
        
        ch++;
        
        i++;
    }

}

