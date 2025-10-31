#include <stdio.h>
int main() 
{
    int i = 1;

    printf("Odd numbers between 1 and 20:\n");

    while (i <= 20) 
	{
        if (i % 2 != 0) 
		{
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

}

